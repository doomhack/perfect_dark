#include <ultra64.h>
#include "lib/tlb.h"
#include "lib/boot.h"
#include "lib/segments.h"
#include "constants.h"
#include "game/menugfx.h"
#include "bss.h"
#include "lib/args.h"
#include "lib/rzip.h"
#include "lib/main.h"
#include "lib/snd.h"
#include "lib/pimgr.h"
#include "lib/lib_48150.h"
#include "data.h"
#include "types.h"


s32 osResetType = 0;	/* 0 = cold reset, 1 = NMI */
s32 osTvType = 1;	/* 0 = PAL, 1 = NTSC, 2 = MPAL */


OSThread g_RmonThread;
OSThread g_IdleThread;
OSThread g_MainThread;
OSThread g_SchedThread;
OSMesgQueue g_MainMesgQueue; 
OSMesg g_MainMesgBuf[32]; 
OSMesgQueue *g_SchedCmdQ;
u32 var8008dbcc;
OSSched g_Sched;
OSScClient g_MainSchedClient; 
u32 g_OsMemSize = 0x800000;


u32 var8005ce00 = 0;
u32 var8005ce04 = 0;
u32 var8005ce08 = 0;
u32 var8005ce0c = 0;
u8 *g_StackLeftAddrs[7] = {0};
u8 *g_StackRightAddrs[7] = {0};
u8 *g_StackAllocatedPos = (u8 *) K0BASE + 4 * 1024 * 1024;
u32 var8005ce4c = 0x00000002;
u32 var8005ce50 = 0x10000000;

extern u8 *_libSegmentStart;
extern u8 *_datazipSegmentRomStart;
extern u8 *_datazipSegmentRomEnd;
u8 *_dataSegmentStart;
u8 *_inflateSegmentStart;
extern u8 *_inflateSegmentRomStart;
extern u8 *_inflateSegmentRomEnd;

#if VERSION >= VERSION_NTSC_1_0
s32 bootGetMemSize(void)
{
	return g_OsMemSize;
}
#endif

u32 __osGetFpcCsr(void);
u32 __osSetFpcCsr(u32 arg0);


/**
 * Prepares the inflate, .data and lib segments, then creates and starts the
 * main thread.
 *
 * This function relies on the fact that the N64 BIOS loads the first 1MB of ROM
 * data into memory at power on. The inflate, .data and lib segments are already
 * in RAM thanks to this but need to be relocated, and .data and lib need to be
 * unzipped too.
 */
void bootPhase1(void)
{
	s32 datacomplen;
	s32 inflatelen;
	u8 *dataziprom;
	u8 *datazipram;
	u32 *libram;
	u32 *libzipram;
	u32 dataram;
	u32 copylen;
	s32 i;
	s32 numlibwords;
	u32 flags;


	// Copy compressed .data and inflate segments
	// .data is copied from ROM to 0x701eb000 - 0x70200000
	// inflate is copied from ROM to 0x70200000 - 0x702013f0
	datacomplen = (romptr_t) _datazipSegmentRomEnd - (romptr_t) _datazipSegmentRomStart;
	inflatelen = (romptr_t) _inflateSegmentRomEnd - (romptr_t) _inflateSegmentRomStart;
	copylen = datacomplen + inflatelen;

	libram = (u32 *) ((romptr_t) &_libSegmentStart + 0x2000);
	libzipram = (u32 *) 0x70280000;
	dataziprom = (u8 *) ((romptr_t) &_datazipSegmentRomStart | 0x70000000);
	datazipram = (u8 *) (0x70200000 - datacomplen);
	dataram = (romptr_t) &_dataSegmentStart;

	/*

	for (i = copylen - 1; i >= 0; i--) {
		datazipram[i] = dataziprom[i];
	}

	// Copy the compressed part of lib to 0x70280000.
	// lib is compressed from 2KB onwards.
	// It's assumed that lib's compressed length is less than 75000 words.
	// This is fine, as it's about half that.
	numlibwords = 75000;

	for (i = 0; i < numlibwords; i++)
	{
		libzipram[i] = libram[i];
	}

	// Inflate compressed part of lib
	segInflate((void *) libzipram, (void *) libram, (void *) 0x80300000);

	// Inflate .data
	segInflate((void *) datazipram, (void *) dataram, (void *) 0x80300000);

	*/

	tlbUnmapRange(1, NTLBENTRIES);

	// Clear the stack allocation pointers
	for (i = 0; i < ARRAYCOUNT(g_StackLeftAddrs); i++) {
		g_StackLeftAddrs[i] = NULL;
		g_StackRightAddrs[i] = NULL;
	}

	osInitialize();

	// Write all data memory cache into physical memory
	osWritebackDCacheAll();

	// Invalidate all instruction cache
	osInvalICache((void *) K0BASE, ICACHE_SIZE);

	// Configure the floating point unit
	flags = __osGetFpcCsr();

	flags |= FPCSR_EI; // enable inexact operation
	flags |= FPCSR_EO; // enable overflow
	flags |= FPCSR_EZ; // enable division by zero
	flags |= FPCSR_EV; // enable invalid operation

	__osSetFpcCsr(flags);

	// Create and start the main thread
	//osCreateThread(&g_MainThread, THREAD_MAIN, bootPhase2, NULL, bootAllocateStack(THREAD_MAIN, STACKSIZE_MAIN), THREADPRI_MAIN);
	//osStartThread(&g_MainThread);

	bootPhase2(NULL);
}

/**
 * Allocate stack space for the given thread ID.
 *
 * Each allocation is aligned to 16 bytes.
 *
 * Allocations start from the end of onboard memory (0x80400000) and are
 * allocated right to left.
 *
 * The returned address leaves 8 bytes free on the right side of the stack,
 * presumably for identification purposes. So the actual stack space available
 * can be 8 bytes above or below what was requested.
 *
 * The stack is initialised with the thread's ID. This makes it easier to
 * identify in memory and detect when a stack overflow has occurred.
 */
void *bootAllocateStack(s32 threadid, s32 size)
{
	return NULL;
}

void bootCreateSchedThread(void)
{
	osCreateMesgQueue(&g_MainMesgQueue, g_MainMesgBuf, ARRAYCOUNT(g_MainMesgBuf));

	if (osTvType == OS_TV_MPAL) {
		osCreateScheduler(&g_Sched, &g_SchedThread, OS_VI_MPAL_LAN1, 1);
	} else {
		osCreateScheduler(&g_Sched, &g_SchedThread, OS_VI_NTSC_LAN1, 1);
	}

	osScAddClient(&g_Sched, &g_MainSchedClient, &g_MainMesgQueue, false);
	g_SchedCmdQ = osScGetCmdQ(&g_Sched);
}

void bootPhase2(void *arg)
{
	pimgrCreate();

	if (argsParseDebugArgs())
	{
		osStopThread(NULL);
	}

	osSetThreadPri(0, THREADPRI_MAIN);
	bootCreateSchedThread();
	mainProc();
}

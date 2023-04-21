#define SDL_MAIN_HANDLED

#include <SDL.h>
#include <SDL_syswm.h>

#include <platform/platform.h>

#include "../src/lib/ultra/os/osint.h"
#include <rcp.h>

#include <Windows.h>


//This is all temp code to try to get the game booting and to see something on the screen.
//This is not how you port games!

extern __OSEventState __osEventStateTab[OS_NUM_EVENTS];

u32 g_VIRegBase = 0;
u32 g_SP_DMem = 0;
u32 g_SP_IMem = 0;

u32 g_SP_DPC_RegBase = 0;

u32 g_SPRegBase = 0;

u32 g_RDRam = 0;


HWND g_Hwnd = NULL;

void LoadGfxPlugin();


typedef void (*pUpdateScreen)(void);
pUpdateScreen UpdateScreen = NULL;

typedef void (*pShowCFB)(void);
pShowCFB ShowCFB = NULL;



Uint32 VICallback(Uint32 interval, void* param)
{
	__OSEventState* es = &__osEventStateTab[OS_EVENT_VI];

	if (es && es->messageQueue)
	{
		osSendMesg(es->messageQueue, es->message, OS_MESG_NOBLOCK);
	}

	UpdateScreen();

	return interval;
}


void InitPlatform()
{
	SDL_SetMainReady();
	SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO);


	//Allocate space for VI Regs...
	g_VIRegBase = (u32)malloc(64);
	memset(g_VIRegBase, 0, 64);

	g_SP_DMem = (u32)malloc(4096);
	memset(g_SP_DMem, 0, 4096);

	g_SP_DMem = (u32)malloc(4096);
	memset(g_SP_DMem, 0, 4096);

	g_SP_DPC_RegBase = (u32)malloc(32);
	memset(g_SP_DPC_RegBase, 0, 32);

	g_SPRegBase = (u32)malloc(32);
	memset(g_SPRegBase, 0, 32);

	g_RDRam = (u32)malloc(8 * 1024 * 1024);
	memset(g_RDRam, 0x80, 8 * 1024 * 1024);



	SDL_Window* win = SDL_CreateWindow("Perfect Dark", 100, 100, 800, 800, 0);

	SDL_SysWMinfo wmInfo;
	SDL_VERSION(&wmInfo.version);
	SDL_GetWindowWMInfo(win, &wmInfo);
	g_Hwnd = wmInfo.info.win.window;

	SDL_AddTimer(16, &VICallback, NULL);

	LoadGfxPlugin();
}












typedef struct
{
	HWND hWnd;			/* Render window */
	HWND hStatusBar;    /* if render window does not have a status bar then this is NULL */

	BOOL MemoryBswaped;    // If this is set to TRUE, then the memory has been pre
	//   bswap on a dword (32 bits) boundry 
	//	eg. the first 8 bytes are stored like this:
	//        4 3 2 1   8 7 6 5

	unsigned char* HEADER;  /* This is the rom header (first 40h bytes of the rom) */
	unsigned char* RDRAM;
	unsigned char* DMEM;
	unsigned char* IMEM;

	unsigned int* GFX_MI_INTR_REG;

	unsigned int* GFX_DPC_START_REG;
	unsigned int* GFX_DPC_END_REG;
	unsigned int* GFX_DPC_CURRENT_REG;
	unsigned int* GFX_DPC_STATUS_REG;
	unsigned int* GFX_DPC_CLOCK_REG;
	unsigned int* GFX_DPC_BUFBUSY_REG;
	unsigned int* GFX_DPC_PIPEBUSY_REG;
	unsigned int* GFX_DPC_TMEM_REG;

	unsigned int* GFX_VI_STATUS_REG;
	unsigned int* GFX_VI_ORIGIN_REG;
	unsigned int* GFX_VI_WIDTH_REG;
	unsigned int* GFX_VI_INTR_REG;
	unsigned int* GFX_VI_V_CURRENT_LINE_REG;
	unsigned int* GFX_VI_TIMING_REG;
	unsigned int* GFX_VI_V_SYNC_REG;
	unsigned int* GFX_VI_H_SYNC_REG;
	unsigned int* GFX_VI_LEAP_REG;
	unsigned int* GFX_VI_H_START_REG;
	unsigned int* GFX_VI_V_START_REG;
	unsigned int* GFX_VI_V_BURST_REG;
	unsigned int* GFX_VI_X_SCALE_REG;
	unsigned int* GFX_VI_Y_SCALE_REG;

	void (*CheckInterrupts)(void);
} GFX_INFO;


typedef void (*pInitiateGFX)(GFX_INFO Gfx_Info);
typedef void (*pProcessDList)(void);
typedef void (*pRomOpen)(void);

pInitiateGFX InitiateGFX = NULL;
pProcessDList ProcessDList = NULL;
pRomOpen RomOpen = NULL;

extern u8 * g_Rom;


void LoadGfxPlugin()
{
	//HMODULE dll = LoadLibrary(L"GLideN64.dll");
	HMODULE dll = LoadLibrary(L"CFB.dll");

	InitiateGFX = (pInitiateGFX)GetProcAddress(dll, "InitiateGFX");

	ProcessDList = (pProcessDList)GetProcAddress(dll, "ProcessDList");

	RomOpen = (pRomOpen)GetProcAddress(dll, "RomOpen");

	UpdateScreen = (pUpdateScreen)GetProcAddress(dll, "UpdateScreen");

	ShowCFB = (pShowCFB)GetProcAddress(dll, "ShowCFB");


	GFX_INFO i;
	memset(&i, 0, sizeof(GFX_INFO));

	i.hWnd = g_Hwnd;

	i.MemoryBswaped = 1;

	i.HEADER = g_Rom;



	i.RDRAM = g_RDRam;

	i.DMEM = g_SP_DMem;
	i.IMEM = g_SP_IMem;

	i.GFX_DPC_START_REG = DPC_START_REG;
	i.GFX_DPC_END_REG = DPC_END_REG;
	i.GFX_DPC_CURRENT_REG = DPC_CURRENT_REG;
	i.GFX_DPC_STATUS_REG = DPC_STATUS_REG;
	i.GFX_DPC_CLOCK_REG = DPC_CLOCK_REG;
	i.GFX_DPC_BUFBUSY_REG = DPC_BUFBUSY_REG;
	i.GFX_DPC_PIPEBUSY_REG = DPC_PIPEBUSY_REG;
	i.GFX_DPC_TMEM_REG = DPC_TMEM_REG;

	i.GFX_VI_STATUS_REG = VI_STATUS_REG;
	i.GFX_VI_ORIGIN_REG = VI_ORIGIN_REG;
	i.GFX_VI_WIDTH_REG = VI_WIDTH_REG;
	i.GFX_VI_INTR_REG = VI_INTR_REG;
	i.GFX_VI_V_CURRENT_LINE_REG = VI_V_CURRENT_LINE_REG;
	i.GFX_VI_TIMING_REG = VI_TIMING_REG;
	i.GFX_VI_V_SYNC_REG = VI_V_SYNC_REG;
	i.GFX_VI_H_SYNC_REG = VI_H_SYNC_REG;
	i.GFX_VI_LEAP_REG = VI_LEAP_REG;
	i.GFX_VI_H_START_REG = VI_H_START_REG;
	i.GFX_VI_V_START_REG = VI_V_START_REG;
	i.GFX_VI_V_BURST_REG = VI_V_BURST_REG;
	i.GFX_VI_X_SCALE_REG = VI_X_SCALE_REG;
	i.GFX_VI_Y_SCALE_REG = VI_Y_SCALE_REG;

	InitiateGFX(i);

	RomOpen();
}
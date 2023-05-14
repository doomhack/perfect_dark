#include <os_internal.h>
#include <R4300.h>
#include "osint.h"
#include "types.h"

#include <malloc.h>

#include <PR/crt_thread.h>


struct __osThreadTail __osThreadTail = {0, -1};
OSThread *__osRunQueue = (OSThread *)&__osThreadTail;
OSThread *__osActiveQueue = (OSThread *)&__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osFaultedThread = NULL;

int __osThreadTrampoline(void* context)
{
	OSThread* t = (OSThread*)context;

	t->entrypoint(t->param);

	return 0;
}

void osCreateThread(OSThread* t, OSId id, void (*entry)(void*), void* arg, void* sp, OSPri p)
{
	register u32 saveMask;

	t->id = id;
	t->priority = p;
	t->next = NULL;
	t->queue = NULL;
	t->context.pc = (uintptr_t)entry;
	t->context.a0 = (u64)arg;
	t->context.sp = (u64)sp - 16;
	t->context.sr = SR_FR | SR_IMASK | SR_EXL | SR_IE;
	t->context.rcp = (OS_IM_ALL & RCP_IMASK) >> RCP_IMASKSHIFT;
	t->context.fpcsr = (uintptr_t)(FPCSR_FS | FPCSR_EV);
	t->fp = 0;
	t->state = OS_STATE_STOPPED;
	t->flags = 0;

	saveMask = __osDisableInt();

	t->tlnext = __osActiveQueue;
	__osActiveQueue = t;

	__osRestoreInt(saveMask);

	t->entrypoint = entry;
	t->os_thread = NULL;
	t->param = arg;
}

void osStartThread(OSThread* t)
{
	register u32 saveMask = __osDisableInt();

	t->state = OS_STATE_RUNNABLE;

	t->os_thread = malloc(sizeof(thrd_t));

	thrd_create(t->os_thread, __osThreadTrampoline, t);

	__osRestoreInt(saveMask);
}

void osStopThread(OSThread* t)
{
	
}

OSPri osGetThreadPri(OSThread* thread)
{
	return 0;
}

void osSetThreadPri(OSThread* t, OSPri pri)
{

}

void osYieldThread(void)
{
	thrd_yield();
}
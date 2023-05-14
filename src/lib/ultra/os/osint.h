#ifndef _OSINT_H
#define _OSINT_H
#include <os_internal.h>

typedef struct __OSEventState
{
	OSMesgQueue *messageQueue;
	OSMesg message;
} __OSEventState;

extern struct __osThreadTail
{
	OSThread *next;
	OSPri priority;
} __osThreadTail;

//maybe should be in exceptasm.h?

extern OSTime __osInsertTimer(OSTimer *);
extern u32 __osProbeTLB(void *);
extern int     __osSpDeviceBusy(void);

extern OSThread *__osRunningThread;
extern OSThread *__osActiveQueue;
extern OSThread *__osFaultedThread;
extern OSThread *__osRunQueue;

extern OSTimer __osBaseTimer;
extern OSTime __osCurrentTime;
extern u32 __osBaseCounter;
extern u32 __osViIntrCount;

extern __OSEventState __osEventStateTab[OS_NUM_EVENTS];

//not sure if this should be here
extern s32 osViClock;
extern void __osTimerServicesInit(void);
extern s32 __osAiDeviceBusy(void);
extern int __osDpDeviceBusy(void);
#endif

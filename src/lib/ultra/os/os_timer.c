#include <os_internal.h>
#include "osint.h"

#include <SDL.h>

OSTime __osCurrentTime;
u32 __osBaseCounter;
u32 __osViIntrCount;

void __osTimerServicesInit(void)
{
	__osCurrentTime = 0;
	__osBaseCounter = 0;
	__osViIntrCount = 0;
}

Uint32 __timerCallback(Uint32 interval, void* param)
{
	OSTimer* t = (OSTimer*)param;

	osSendMesg(t->mq, t->msg, OS_MESG_NOBLOCK);

	return t->interval;
}

int osSetTimer(OSTimer *t, OSTime value, OSTime interval, OSMesgQueue *mq, OSMesg msg)
{
	t->interval = interval;

	if (value != 0)
	{
		t->value = value;
	}
	else
	{
		t->value = interval;
	}

	t->mq = mq;
	t->msg = msg;

	double us = OS_CYCLES_TO_USEC(t->value);

	u32 ms = round(us / 1000.0);

	t->timer_id = SDL_AddTimer(ms, __timerCallback, t);

	return 0;
}

int osStopTimer(OSTimer* t)
{
	SDL_RemoveTimer(t->timer_id);

	return 0;
}
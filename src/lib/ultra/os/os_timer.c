#include <os_internal.h>
#include "osint.h"

int osSetTimer(OSTimer *t, OSTime value, OSTime interval, OSMesgQueue *mq, OSMesg msg)
{
	OSTime time;

	t->next = NULL;
	t->prev = NULL;
	t->interval = interval;

	if (value != 0)
	{
		t->value = value;
	} else
	{
		t->value = interval;
	}

	t->mq = mq;
	t->msg = msg;
	time = __osInsertTimer(t);

	if (__osTimerList->next == t) {
		__osSetTimerIntr(time);
	}

	return 0;
}

int osStopTimer(OSTimer* t)
{
	register u32 savedMask;
	OSTimer* timep;

	if (t->next == NULL) {
		return -1;
	}

	savedMask = __osDisableInt();

	timep = t->next;

	if (timep != __osTimerList) {
		timep->value += t->value;
	}

	t->prev->next = t->next;
	t->next->prev = t->prev;
	t->next = NULL;
	t->prev = NULL;

	if (__osTimerList->next == __osTimerList) {
		__osSetCompare(0);
	}

	__osRestoreInt(savedMask);

	return 0;
}
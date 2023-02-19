#include <os_internal.h>
#include "osint.h"

struct __osThreadTail __osThreadTail = {0, -1};
OSThread *__osRunQueue = (OSThread *)&__osThreadTail;
OSThread *__osActiveQueue = (OSThread *)&__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osFaultedThread = NULL;

void __osDequeueThread(OSThread **queue, OSThread *t)
{
	register OSThread *pred;
	register OSThread *succ;
	pred = (OSThread *)queue; //this is actually legit..
	succ = pred->next;

	while (succ != NULL) {
		if (succ == t) {
			pred->next = t->next;
			return;
		}

		pred = succ;
		succ = pred->next;
	}
}

void __osEnqueueAndYield(OSThread** t)
{

}

OSThread* __osPopThread(OSThread** t)
{
	return NULL;
}

void __osEnqueueThread(OSThread** t1, OSThread* t2)
{

}

#include <os_internal.h>
#include "osint.h"

//Soooo....it's 2023 and still no C11 thread support....
#ifndef __STDC_NO_THREADS__
	#include <threads.h>
#else
	#include <PR/tinycthread.h>
#endif



void osCreateMesgQueue(OSMesgQueue* mq, OSMesg* msg, s32 msgCount)
{
	mq->mtqueue = (OSThread*)&__osThreadTail;
	mq->fullqueue = (OSThread*)&__osThreadTail;
	mq->validCount = 0;
	mq->first = 0;
	mq->msgCount = msgCount;
	mq->msg = msg;
	mq->mutex = malloc(sizeof(mtx_t));

	mtx_init(mq->mutex, mtx_plain | mtx_recursive);
}

s32 osRecvMesg(OSMesgQueue *mq, OSMesg *msg, s32 flags)
{
	register u32 saveMask;

	while (MQ_IS_EMPTY(mq))
	{
		if (flags == OS_MESG_NOBLOCK)
		{
			return -1;
		}

		osYieldThread();
	}

	mtx_lock(mq->mutex);

	if (msg != NULL)
	{
		*msg = mq->msg[mq->first];
	}

	mq->first = (mq->first + 1) % mq->msgCount;
	mq->validCount--;

	mtx_unlock(mq->mutex);

	return 0;
}

s32 osJamMesg(OSMesgQueue* mq, OSMesg msg, s32 flag)
{
	register u32 saveMask = __osDisableInt();

	while (MQ_IS_FULL(mq))
	{
		if (flag == OS_MESG_NOBLOCK)
		{
			return -1;
		}

		osYieldThread();
	}

	mtx_lock(mq->mutex);

	mq->first = (mq->first + mq->msgCount - 1) % mq->msgCount;
	mq->msg[mq->first] = msg;
	mq->validCount++;

	mtx_unlock(mq->mutex);


	return 0;
}

s32 osSendMesg(OSMesgQueue* mq, OSMesg msg, s32 flags)
{
	register s32 last;

	while (MQ_IS_FULL(mq))
	{
		if (flags == OS_MESG_NOBLOCK)
		{
			return -1;
		}

		osYieldThread();
	}

	mtx_lock(mq->mutex);

	last = (mq->first + mq->validCount) % mq->msgCount;
	mq->msg[last] = msg;
	mq->validCount++;

	mtx_unlock(mq->mutex);

	return 0;
}
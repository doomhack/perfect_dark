#include <os_internal.h>
#include "osint.h"

extern struct __osThreadTail __osThreadTail;

void osCreateMesgQueue(OSMesgQueue* mq, OSMesg* msg, s32 msgCount)
{
	mq->mtqueue = (OSThread*)&__osThreadTail;
	mq->fullqueue = (OSThread*)&__osThreadTail;
	mq->validCount = 0;
	mq->first = 0;
	mq->msgCount = msgCount;
	mq->msg = msg;
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
	}

	if (msg != NULL)
	{
		*msg = mq->msg[mq->first];
	}

	mq->first = (mq->first + 1) % mq->msgCount;
	mq->validCount--;

	return 0;
}

s32 osJamMesg(OSMesgQueue* mq, OSMesg msg, s32 flag)
{
	register u32 saveMask = __osDisableInt();

	while (mq->validCount >= mq->msgCount) {
		if (flag == OS_MESG_BLOCK) {
			__osRunningThread->state = OS_STATE_WAITING;
			__osEnqueueAndYield(&mq->fullqueue);
		}
		else {
			__osRestoreInt(saveMask);
			return -1;
		}
	}

	mq->first = (mq->first + mq->msgCount - 1) % mq->msgCount;
	mq->msg[mq->first] = msg;
	mq->validCount++;

	if (mq->mtqueue->next != NULL) {
		osStartThread(__osPopThread(&mq->mtqueue));
	}

	__osRestoreInt(saveMask);

	return 0;
}

s32 osSendMesg(OSMesgQueue* mq, OSMesg msg, s32 flags)
{
	register u32 saveMask;
	register s32 last;


	if(MQ_IS_FULL(mq))
	{
		return -1;
	}

	last = (mq->first + mq->validCount) % mq->msgCount;
	mq->msg[last] = msg;
	mq->validCount++;

	return 0;
}
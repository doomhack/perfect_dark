#include <os_internal.h>
#include <rcp.h>
#include "controller.h"
#include "constants.h"
#include "siint.h"

ALIGNED16 OSPifRam __osContPifRam;

u8 __osContLastCmd;
u8 __osMaxControllers;
OSTimer __osEepromTimer;
OSMesgQueue __osEepromTimerQ;
OSMesg __osEepromTimerMsg;

u32 __osContInitialized = 0;

s32 osContInit(OSMesgQueue *mq, u8 *bitpattern, OSContStatus *data)
{
	OSMesg msg = 0;

	*bitpattern = 0; //No controllers plugged in.

	for (int i = 0; i < MAXCONTROLLERS; i++)
	{
		data[i].type = 0;
		data[i].status = 0;
		data[i].error = CONT_NO_RESPONSE_ERROR;
	}

	osSendMesg(mq, msg, 0);

	return 0;
}

s32 osContStartQuery(OSMesgQueue* mq)
{
	OSMesg msg = 0;
	osSendMesg(mq, msg, 0);

	return 0;
}

void osContGetQuery(OSContStatus* data)
{
	for (int i = 0; i < MAXCONTROLLERS; i++)
	{
		data[i].type = 0;
		data[i].status = 0;
		data[i].error = CONT_NO_RESPONSE_ERROR;
	}
}
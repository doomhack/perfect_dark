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

void __osContGetInitData(u8 *pattern, OSContStatus *data);
void __osPackRequestData(u8 cmd);

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
	s32 ret;
	ret = 0;

	__osSiGetAccess();

	if (__osContLastCmd != CONT_CMD_REQUEST_STATUS) {
		__osPackRequestData(CONT_CMD_REQUEST_STATUS);
		ret = __osSiRawStartDma(OS_WRITE, &__osContPifRam);
		osRecvMesg(mq, NULL, OS_MESG_BLOCK);
	}

	ret = __osSiRawStartDma(OS_READ, &__osContPifRam);
	__osContLastCmd = CONT_CMD_REQUEST_STATUS;
	__osSiRelAccess();

	return ret;
}

void osContGetQuery(OSContStatus* data)
{
	u8 pattern;
	__osContGetInitData(&pattern, data);
}

void __osContGetInitData(u8 *pattern, OSContStatus *data)
{
	u8 *ptr;
	__OSContRequestFormat requestformat;
	int i;
	u8 bits;
	bits = 0;
	ptr = (u8 *)&__osContPifRam;

	for (i = 0; i < __osMaxControllers; i++, ptr += sizeof(__OSContRequestFormat), data++) {
		requestformat = *(__OSContRequestFormat *)ptr;
		data->error = CHNL_ERR(requestformat);

		if (data->error == 0) {
			data->type = (requestformat.typel << 8) | requestformat.typeh;
			data->status = requestformat.status;
			bits |= 1 << i;
		}
	}

	*pattern = bits;
}

void __osPackRequestData(u8 cmd)
{
	u8 *ptr;
	__OSContRequestFormat requestformat;
	int i;

	for (i = 0; i < ARRLEN(__osContPifRam.ramarray); i++) {
		__osContPifRam.ramarray[i] = 0;
	}

	__osContPifRam.pifstatus = CONT_CMD_EXE;

	ptr = (u8 *)&__osContPifRam.ramarray;

	requestformat.dummy = CONT_CMD_NOP;
	requestformat.txsize = CONT_CMD_REQUEST_STATUS_TX;
	requestformat.rxsize = CONT_CMD_REQUEST_STATUS_RX;
	requestformat.cmd = cmd;
	requestformat.typeh = CONT_CMD_NOP;
	requestformat.typel = CONT_CMD_NOP;
	requestformat.status = CONT_CMD_NOP;
	requestformat.dummy1 = CONT_CMD_NOP;

	for (i = 0; i < __osMaxControllers; i++) {
		*(__OSContRequestFormat *)ptr = requestformat;
		ptr += sizeof(__OSContRequestFormat);
	}

	ptr[0] = CONT_CMD_END;
}

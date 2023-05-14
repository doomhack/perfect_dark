#include <os_internal.h>
#include <rcp.h>
#include "controller.h"
#include "constants.h"
#include "siint.h"

ALIGNED16 OSPifRam __osContPifRam;

u8 __osContLastCmd;
u8 __osMaxControllers = MAXCONTROLLERS;

u8 controller_mask = 0; //Set this to set the plugged in controllers...

s32 osContInit(OSMesgQueue *mq, u8 *bitpattern, OSContStatus *data)
{
	OSMesg msg = 0;

	*bitpattern = controller_mask;

	osContGetQuery(data);

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
		if (controller_mask & (1 << i))
		{
			data[i].type = CONT_TYPE_NORMAL;
			data[i].error = 0;
			data[i].status = 0;
		}
		else
		{
			data[i].type = 0;
			data[i].status = 0;
			data[i].error = CONT_NO_RESPONSE_ERROR;
		}
	}
}

s32 osContStartReadData(OSMesgQueue* mq)
{
	OSMesg msg = 0;

	osSendMesg(mq, msg, OS_MESG_NOBLOCK);

	return 0;
}

void osContGetReadData(OSContPad* data)
{
	OSContStatus ports[MAXCONTROLLERS];

	osContGetQuery(ports);

	for (int i = 0; i < MAXCONTROLLERS; i++)
	{
		data->button = 0;
		data->stick_x = 0;
		data->stick_y = 0;

		if (ports[i].error == 0)
		{
			data->error = 0;
		}
		else
		{
			data[i].error = CONT_NO_RESPONSE_ERROR;
		}
	}
}

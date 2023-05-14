#include <os_internal.h>
#include <rcp.h>
#include "siint.h"
#include "controller.h"

void __osPackReadData(void);


void __osPackReadData(void)
{
	u8 *ptr;
	__OSContReadFormat readformat;
	int i;

	ptr = (u8*)&__osContPifRam.ramarray;

	for (i = 0; i < ARRLEN(__osContPifRam.ramarray); i++) {
		__osContPifRam.ramarray[i] = 0;
	}

	__osContPifRam.pifstatus = CONT_CMD_EXE;
	readformat.dummy = CONT_CMD_NOP;
	readformat.txsize = CONT_CMD_READ_BUTTON_TX;
	readformat.rxsize = CONT_CMD_READ_BUTTON_RX;
	readformat.cmd = CONT_CMD_READ_BUTTON;
	readformat.button = -1;
	readformat.stick_x = -1;
	readformat.stick_y = -1;

	for(i=0; i < __osMaxControllers; i++) {
		*(__OSContReadFormat*)ptr = readformat;
		ptr += sizeof(__OSContReadFormat);
	}

	*ptr = CONT_CMD_END;
}

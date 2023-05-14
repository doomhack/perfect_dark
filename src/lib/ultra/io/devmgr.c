#include <os_internal.h>
#include <rcp.h>
#include "piint.h"
#include "types.h"

void __osDevMgrMain(void *args)
{
	OSIoMesg *mb;
	OSMesg em;
	OSMesg dummy;
	s32 ret;
	OSDevMgr *dm;
	s32 messageSend;

	messageSend = 0;
	mb = NULL;
	ret = 0;
	dm = (OSDevMgr *)args;

	while (TRUE)
	{
		osRecvMesg(dm->cmdQueue, (OSMesg)&mb, OS_MESG_BLOCK);

		switch (mb->hdr.type)
		{
			case OS_MESG_TYPE_DMAREAD:
				osRecvMesg(dm->acsQueue, &dummy, OS_MESG_BLOCK);
				ret = dm->dma(OS_READ, mb->devAddr, mb->dramAddr, mb->size);
				break;
			case OS_MESG_TYPE_DMAWRITE:
				osRecvMesg(dm->acsQueue, &dummy, OS_MESG_BLOCK);
				ret = dm->dma(OS_WRITE, mb->devAddr, mb->dramAddr, mb->size);
				break;
			case OS_MESG_TYPE_EDMAREAD:
				osRecvMesg(dm->acsQueue, &dummy, OS_MESG_BLOCK);
				ret = dm->edma(mb->piHandle, OS_READ, mb->devAddr, mb->dramAddr,
						mb->size);
				break;
			case OS_MESG_TYPE_EDMAWRITE:
				osRecvMesg(dm->acsQueue, &dummy, OS_MESG_BLOCK);
				ret = dm->edma(mb->piHandle, OS_WRITE, mb->devAddr, mb->dramAddr,
						mb->size);
				break;
			case OS_MESG_TYPE_LOOPBACK:
				osSendMesg(mb->hdr.retQueue, mb, OS_MESG_NOBLOCK);
				ret = -1;
				break;
			default:
				ret = -1;
				break;
		}

		if (ret == 0)
		{
			osRecvMesg(dm->evtQueue, &em, OS_MESG_BLOCK);
			osSendMesg(mb->hdr.retQueue, mb, OS_MESG_NOBLOCK);
			osSendMesg(dm->acsQueue, NULL, OS_MESG_NOBLOCK);
		}
	}
}

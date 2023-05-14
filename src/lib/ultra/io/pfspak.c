#include "versions.h"
#include <os_internal.h>
#include "controller.h"
#include "siint.h"
#include "constants.h"


ALIGNED16 OSPifRam __osPfsPifRam;

s32 osPfsIsPlug(OSMesgQueue* queue, u8* pattern)
{
	*pattern = 0;

	return 0;
}

s32 osPfsInitPak(OSMesgQueue *queue, OSPfs *pfs, s32 channel, s32 *arg3)
{
	return PFS_ERR_NOPACK;
}
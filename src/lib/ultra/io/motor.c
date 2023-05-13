#include <os_internal.h>
#include "controller.h"
#include "siint.h"
#include "constants.h"

ALIGNED16 OSPifRam osPifBuffers[MAXCONTROLLERS];

s32 __osMotorAccess(OSPfs *pfs, s32 vibrate)
{
	return 0;
}

s32 osMotorProbe(OSMesgQueue* ctrlrqueue, OSPfs* pfs, s32 channel)
{
	return 0;
}

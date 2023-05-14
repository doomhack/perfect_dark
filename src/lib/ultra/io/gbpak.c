#include <os_internal.h>
#include "controller.h"
#include "siint.h"

OSMesgQueue g_GbpakMesgQueue;
OSMesg g_GbpakMesg;

s32 osGbpakInit(OSMesgQueue *queue, OSPfs *pfs, int channel)
{
	return PFS_ERR_NOPACK;
}

s32 osGbpakPower(OSPfs* pfs, s32 flag)
{
	return PFS_ERR_NOPACK;
}

s32 osGbpakReadId(OSPfs* pfs, OSGbpakId* id, u8* status)
{
	return PFS_ERR_NOPACK;
}

s32 osGbpakReadWrite(OSPfs* pfs, u16 flag, u16 address, u8* buffer, u16 size)
{
	return PFS_ERR_NOPACK;
}

s32 osGbpakGetStatus(OSPfs* pfs, u8* status)
{
	return PFS_ERR_NOPACK;
}

s32 osGbpakCheckConnector(OSPfs* pfs, u8* status)
{
	return PFS_ERR_NOPACK;
}

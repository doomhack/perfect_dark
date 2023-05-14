#include "versions.h"
#include <os_internal.h>
#include "controller.h"
#include "siint.h"
#include "constants.h"

s32 osPfsIsPlug(OSMesgQueue* queue, u8* pattern)
{
	*pattern = 0;

	return 0;
}

s32 osPfsInitPak(OSMesgQueue *queue, OSPfs *pfs, s32 channel, s32 *arg3)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsChecker(OSPfs* pfs)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsFileState(OSPfs* pfs, s32 fileNo, OSPfsState* state)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsFindFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name, u8* ext_name, s32* file_no)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsNumFiles(OSPfs* pfs, s32* max_files, s32* files_used)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsFreeBlocks(OSPfs* pfs, s32* remaining)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsReadWriteFile(OSPfs* pfs, s32 fileNo, u8 flag, int offset, int size, u8* data)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsReSizeFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name, u8* ext_name, int length)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsDeleteFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name, u8* ext_name)
{
	return PFS_ERR_NOPACK;
}

s32 osPfsAllocateFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name, u8* ext_name, int num_bytes, s32* file_no)
{
	return PFS_ERR_NOPACK;
}

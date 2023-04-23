#include <ultra64.h>
#include "constants.h"
#include "game/file.h"
#include "game/game_175f90.h"
#include "bss.h"
#include "lib/memp.h"
#include "data.h"
#include "types.h"


void func0f175f98(void)
{
	func0f167330();
	mempResetPool(MEMPOOL_5);
	filesStop(5);
}

void func0f175fc8(void)
{
	mempDisablePool(MEMPOOL_5);
	filesStop(5);
}

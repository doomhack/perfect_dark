#include <ultra64.h>
#include "constants.h"
#include "game/chraction.h"
#include "game/bondgun.h"
#include "game/game_0b0fd0.h"
#include "game/tex.h"
#include "game/menugfx.h"
#include "game/menu.h"
#include "game/mainmenu.h"
#include "game/inv.h"
#include "game/game_1531a0.h"
#include "game/file.h"
#include "game/texdecompress.h"
#include "game/tex.h"
#include "game/modeldef.h"
#include "game/lang.h"
#include "game/mplayer/mplayer.h"
#include "game/options.h"
#include "bss.h"
#include "lib/vi.h"
#include "lib/main.h"
#include "lib/model.h"
#include "data.h"
#include "types.h"

//Models are stored in the ROM compressed so we have to byteswap them on load.

void modelByteSwapModel(struct modeldef* modeldef, u32 baseAddr)
{
	modeldef->rootnode = BSWAP32((u32)modeldef->rootnode);
	modeldef->skel = BSWAP32((u32)modeldef->skel);

	modeldef->numparts = BSWAP16((u32)modeldef->numparts);
	modeldef->nummatrices = BSWAP16((u32)modeldef->nummatrices);

	modeldef->rwdatalen = BSWAP16((u32)modeldef->rwdatalen);
	modeldef->numtexconfigs = BSWAP16((u32)modeldef->numtexconfigs);

	*((u32*)&modeldef->scale) = BSWAP32(*((u32*)&modeldef->scale));

	u32* p = &modeldef->parts;

	for (int i = 0; i < modeldef->numparts; i++)
	{
		p[i] = BSWAP32((u32)p[i]);
	}
}
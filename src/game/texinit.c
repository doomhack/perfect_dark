#include <ultra64.h>
#include "constants.h"
#include "bss.h"
#include "lib/dma.h"
#include "lib/memp.h"
#include "data.h"
#include "types.h"
#include "rom.h"

void texInit(void)
{
	extern const u32 _textureslistSegmentRomStart;
	extern const u32 _textureslistSegmentRomEnd;

	u32 len = ((_textureslistSegmentRomEnd - _textureslistSegmentRomStart) + 15) & -16;

	g_Textures = mempAlloc(len, MEMPOOL_PERMANENT);

	dmaExec(g_Textures, (romptr_t) ROMPTR(_textureslistSegmentRomStart), len);
}

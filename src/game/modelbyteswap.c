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

#define MPTR(x) ((void*)((((u32)x) - offsetAddr) + baseAddr))

void modelByteSwapNode(struct modelnode* node, u32 offsetAddr, u32 baseAddr)
{
	while (node)
	{
		node->type = BSWAP16(node->type);
		node->rodata = BSWAP32((u32)node->rodata);
		node->parent = BSWAP32((u32)node->parent);
		node->next = BSWAP32((u32)node->next);
		node->prev = BSWAP32((u32)node->prev);
		node->child = BSWAP32((u32)node->child);

		u32 type = node->type & 0xff;

		switch (type)
		{
			case MODELNODETYPE_CHRINFO:
				break;
			case MODELNODETYPE_POSITION:
				break;
			case MODELNODETYPE_GUNDL:
				break;
			case MODELNODETYPE_DL:
				break;
			case MODELNODETYPE_DISTANCE:
				break;
			case MODELNODETYPE_TOGGLE:
				break;
			case MODELNODETYPE_REORDER:
				break;
			case MODELNODETYPE_11:
				break;
			case MODELNODETYPE_0B:
				break;
			case MODELNODETYPE_CHRGUNFIRE:
				break;
			case MODELNODETYPE_0D:
				break;
			case MODELNODETYPE_STARGUNFIRE:
				break;
			default:
				break;
		}

		if (node->child)
		{
			node = MPTR(node->child);
		}
		else
		{
			while (node)
			{
				if (node->next)
				{
					node = MPTR(node->next);
					break;
				}

				node = MPTR(node->parent);
			}
		}
	}
}

void modelByteSwapModel(struct modeldef* modeldef, u32 offsetAddr)
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

	s16* partnums = (s16*)&modeldef->parts[modeldef->numparts];

	for (int i = 0; i < modeldef->numparts; i++)
	{
		partnums[i] = BSWAP16(partnums[i]);
	}

	u32 baseAddr = (u32)modeldef;
	modelByteSwapNode(MPTR(modeldef->rootnode), offsetAddr, baseAddr);
}
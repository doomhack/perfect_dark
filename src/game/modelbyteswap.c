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

u32 __mptr(u32 x, u32 offset, u32 baseaddr)
{
	if (x == NULL)
		return NULL;

	return (x - offset) + baseaddr;
}

#define MPTR(x) __mptr(x, offsetAddr, baseAddr)


#define C0(pos, width) ((cmd->words.w0 >> (pos)) & ((1U << width) - 1))
#define C1(pos, width) ((cmd->words.w1 >> (pos)) & ((1U << width) - 1))

void printGdl(Gfx* cmd)
{
	//Gfx x;
	//gSPTexture(& x, 0x1234, 0x5678, 1, 2, 3);

    for (;;)
    {
		s8 opcode = cmd->cmd.opcode;

        switch (opcode)
        {
            // RSP commands:
        case (s8)G_MTX:
            printf("G_MTX\n");
            break;
        case (s8)G_POPMTX:
            printf("G_POPMTX\n");
            break;
        case (s8)G_MOVEMEM:
            printf("G_MOVEMEM\n");
            break;
        case (s8)G_MOVEWORD:
            printf("G_MOVEWORD\n");
            break;
        case (s8)G_TEXTURE:
            printf("G_TEXTURE\n");
            break;
        case (s8)G_VTX:
            printf("G_VTX\n");
            break;
        case (s8)G_DL:
            printf("G_DL\n");
            if (C0(16, 1) == 0)
            {
                printGdl((Gfx*)(cmd->words.w1));
            }
            else
            {
                cmd = (Gfx*)(cmd->words.w1);
                --cmd; // increase after break
            }
            break;
        case (s8)G_ENDDL:
            printf("G_ENDDL\n");
            return;

        case (s8)G_SETGEOMETRYMODE:
            printf("G_SETGEOMETRYMODE\n");
            break;
        case (s8)G_CLEARGEOMETRYMODE:
            printf("G_CLEARGEOMETRYMODE\n");
            break;

        case (s8)G_TRI1:
            printf("G_CLEARGEOMETRYMODE\n");
            break;

        case (s8)G_SETOTHERMODE_L:
            printf("G_SETOTHERMODE_L\n");
            break;
        case (s8)G_SETOTHERMODE_H:
            printf("G_SETOTHERMODE_H\n");
            break;

            // RDP Commands:
        case (s8)G_SETTIMG:
            printf("G_SETTIMG\n");
            break;
        case (s8)G_LOADBLOCK:
            printf("G_LOADBLOCK\n");
            break;
        case (s8)G_LOADTILE:
            printf("G_LOADTILE\n");
            break;
        case (s8)G_SETTILE:
            printf("G_SETTILE\n");
            break;
        case (s8)G_SETTILESIZE:
            printf("G_SETTILESIZE\n");
            break;
        case (s8)G_LOADTLUT:
            printf("G_LOADTLUT\n");
            break;
        case (s8)G_SETENVCOLOR:
            printf("G_SETENVCOLOR\n");
            break;
        case (s8)G_SETPRIMCOLOR:
            printf("G_SETPRIMCOLOR\n");
            break;
        case (s8)G_SETFOGCOLOR:
            printf("G_SETFOGCOLOR\n");
            break;
        case (s8)G_SETFILLCOLOR:
            printf("G_SETFILLCOLOR\n");
            break;
        case (s8)G_SETCOMBINE:
            printf("G_SETCOMBINE\n");

        case (s8)G_TEXRECT:
        case (s8)G_TEXRECTFLIP:
        {
            printf("G_TEXRECT\n");
            break;
        }
        case (s8)G_FILLRECT:
			printf("G_FILLRECT\n");
            break;

        case (s8)G_SETSCISSOR:
			printf("G_SETSCISSOR\n");
			break;
        case (s8)G_SETZIMG:
			printf("G_SETZIMG\n");
			break;
        case (s8)G_SETCIMG:
			printf("G_SETCIMG\n");
			break;
		case (s8)G_RDPPIPESYNC:
			printf("G_RDPPIPESYNC\n");
			break;
		default:
			printf("Unknown Opcode\n");
			break;
        }
        ++cmd;
    }
}

void byteSwapGdl(Gfx* gdl)
{
	if (gdl == NULL)
		return;

	Gfx* gpc = gdl;

	while (1)
	{
		gpc->words.w0 = BSWAP32(gpc->words.w0);
		gpc->words.w1 = BSWAP32(gpc->words.w1);

		s8 opcode = gpc->cmd.opcode;

		if (opcode == (s8)G_ENDDL)
			break;

		gpc++;
	}

	printGdl(gdl);
}

void modelByteSwapVertex(struct gfxvtx* vertex)
{
	vertex->x = BSWAP16(vertex->x);
	vertex->y = BSWAP16(vertex->y);
	vertex->z = BSWAP16(vertex->z);

	vertex->s = BSWAP16(vertex->s);
	vertex->t = BSWAP16(vertex->t);
}

void modelByteSwapGunDl(struct modelrodata_gundl* gundl, u32 offsetAddr, u32 baseAddr)
{
	gundl->opagdl = BSWAP32((u32)gundl->opagdl);
	gundl->xlugdl = BSWAP32((u32)gundl->xlugdl);
	gundl->baseaddr = BSWAP32((u32)gundl->baseaddr);
	gundl->vertices = BSWAP32((u32)gundl->vertices);

	gundl->numvertices = BSWAP16(gundl->numvertices);
	gundl->unk12 = BSWAP16(gundl->unk12);

	struct gfxvtx* vx = MPTR(gundl->vertices);

	for (int i = 0; i < gundl->numvertices; i++)
	{
		modelByteSwapVertex(&vx[i]);
	}

	Gfx* gdl = MPTR(gundl->opagdl);
	byteSwapGdl(gdl);

	gdl = MPTR(gundl->xlugdl);
	byteSwapGdl(gdl);
}

void modelByteSwapToggle(struct modelrodata_toggle* toggle, u32 offsetAddr, u32 baseAddr)
{
	toggle->rwdataindex = BSWAP16(toggle->rwdataindex);
	toggle->target = BSWAP32((u32)toggle->target);
}

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

		union modelrodata* ro = MPTR(node->rodata);

		switch (type)
		{
			case MODELNODETYPE_CHRINFO:
				break;
			case MODELNODETYPE_POSITION:
				break;
			case MODELNODETYPE_GUNDL:
				modelByteSwapGunDl(&ro->gundl, offsetAddr, baseAddr);
				break;
			case MODELNODETYPE_DL:
				break;
			case MODELNODETYPE_DISTANCE:
				break;
			case MODELNODETYPE_TOGGLE:
				modelByteSwapToggle(&ro->toggle, offsetAddr, baseAddr);
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

void byteSwapTexConfig(struct textureconfig* texconfig)
{
	texconfig->texturenum = BSWAP32(texconfig->texturenum);
}

void modelByteSwapModel(struct modeldef* modeldef, u32 offsetAddr)
{
	u32 baseAddr = (u32)modeldef;

	modeldef->rootnode = BSWAP32((u32)modeldef->rootnode);
	modeldef->skel = BSWAP32((u32)modeldef->skel);

	modeldef->numparts = BSWAP16(modeldef->numparts);
	modeldef->nummatrices = BSWAP16(modeldef->nummatrices);

	modeldef->rwdatalen = BSWAP16(modeldef->rwdatalen);
	modeldef->numtexconfigs = BSWAP16(modeldef->numtexconfigs);

	modeldef->texconfigs = BSWAP32((u32)modeldef->texconfigs);

	*((u32*)&modeldef->scale) = BSWAP32(*((u32*)&modeldef->scale));

	modeldef->parts = BSWAP32((u32)modeldef->parts);

	u32* p = MPTR(modeldef->parts);

	for (int i = 0; i < modeldef->numparts; i++)
	{
		p[i] = BSWAP32((u32)p[i]);
	}

	s16* partnums = (s16*)&p[modeldef->numparts];

	for (int i = 0; i < modeldef->numparts; i++)
	{
		partnums[i] = BSWAP16(partnums[i]);
	}

	struct textureconfig* tconfig = MPTR(modeldef->texconfigs);

	for (int i = 0; i < modeldef->numtexconfigs; i++)
	{
		byteSwapTexConfig(&tconfig[i]);
	}

	modelByteSwapNode(MPTR(modeldef->rootnode), offsetAddr, baseAddr);
}
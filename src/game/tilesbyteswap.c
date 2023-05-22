#include <ultra64.h>
#include "constants.h"
#include "game/tiles.h"
#include "game/bg.h"
#include "game/file.h"
#include "bss.h"
#include "data.h"
#include "types.h"

void tilesByteswapTiles(u8* tileData)
{
	u32* t32 = tileData;

	t32[0] = BSWAP32(t32[0]);

	u32 tileNumRooms = t32[0];
	u32* tileRooms = &t32[1];

	for (int i = 0; i <= tileNumRooms; i++)
	{
		tileRooms[i] = BSWAP32(tileRooms[i]);
	}

	struct geo* geo = (struct geo*)(tileData + tileRooms[0]);
	struct geo* end = (struct geo*)(tileData + tileRooms[tileNumRooms]);

	while (geo < end)
	{
		geo->flags = BSWAP16(geo->flags);

		if (geo->type == GEOTYPE_TILE_I)
		{
			struct geotilei* tile = (struct geotilei*)geo;

			tile->floortype = BSWAP16(tile->floortype);
			tile->floorcol = BSWAP16(tile->floorcol);

			for (int i = 0; i < geo->numvertices; i++)
			{
				tile->vertices[i][0] = BSWAP16(tile->vertices[i][0]);
				tile->vertices[i][1] = BSWAP16(tile->vertices[i][1]);
				tile->vertices[i][2] = BSWAP16(tile->vertices[i][2]);
			}

			geo = (struct geo*)((u8*)geo + (uintptr_t)(geo->numvertices - 0x40) * 6 + 0x18e);
		}
		else if (geo->type == GEOTYPE_TILE_F)
		{
			struct geotilef* tile = (struct geotilef*)geo;

			tile->floortype = BSWAP16(tile->floortype);
			tile->floorcol = BSWAP16(tile->floorcol);

			for (int i = 0; i < geo->numvertices; i++)
			{
				*((u32*)&tile->vertices[i]) = BSWAP32(*((u32*)&tile->vertices[i]));
			}

			geo = (struct geo*)((u8*)geo + (uintptr_t)(geo->numvertices - 0x40) * 12 + 0x310);
		}
		else if (geo->type == GEOTYPE_BLOCK)
		{
			struct geoblock* tile = (struct geoblock*)geo;

			*((u32*)&tile->ymax) = BSWAP32(*((u32*)&tile->ymax));
			*((u32*)&tile->ymin) = BSWAP32(*((u32*)&tile->ymin));

			for (int i = 0; i < geo->numvertices; i++)
			{
				*((u32*)&tile->vertices[i][0]) = BSWAP32(*((u32*)&tile->vertices[i][0]));
				*((u32*)&tile->vertices[i][1]) = BSWAP32(*((u32*)&tile->vertices[i][1]));
			}

			geo = (struct geo*)((u8*)geo + sizeof(struct geoblock));
		}
		else if (geo->type == GEOTYPE_CYL)
		{
			struct geocyl* tile = (struct geocyl*)geo;

			*((u32*)&tile->ymax) = BSWAP32(*((u32*)&tile->ymax));
			*((u32*)&tile->ymin) = BSWAP32(*((u32*)&tile->ymin));

			*((u32*)&tile->x) = BSWAP32(*((u32*)&tile->x));
			*((u32*)&tile->z) = BSWAP32(*((u32*)&tile->z));
			*((u32*)&tile->radius) = BSWAP32(*((u32*)&tile->radius));
			 
			geo = (struct geo*)((u8*)geo + sizeof(struct geocyl));
		}
	}
}
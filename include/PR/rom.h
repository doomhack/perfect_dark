#ifndef _ROM_H
#define	_ROM_H

extern u8* g_Rom;

#define ROMPTR(x)	((void*)&g_Rom[x])

#endif
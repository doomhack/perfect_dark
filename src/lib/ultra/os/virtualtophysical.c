#include <os_internal.h>
#include <R4300.h>
#include "osint.h"

extern u32 g_RDRam;

u32 osVirtualToPhysical(void *addr)
{
	return (u32)addr;

	/*
	u32 addr32 = (u32)addr;

	if(addr32 >= g_RDRam && addr32 <= g_RDRam + 8*1024*1024)
		return (addr32 - g_RDRam);

	return addr32;
	*/
	/*
	if (IS_KSEG0(addr)) {
		return K0_TO_PHYS(addr);
	} else if (IS_KSEG1(addr)) {
		return K1_TO_PHYS(addr);
	} else {
		return __osProbeTLB(addr);
	}
	*/
}

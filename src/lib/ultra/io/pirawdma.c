#include <os_internal.h>
#include "piint.h"
#include "types.h"

void* osRomBase;	/* Rom base address of the game image */

s32 osPiRawStartDma(s32 direction, u32 devAddr, void *dramAddr, u32 size)
{
	register u32 stat;

	WAIT_ON_IOBUSY(stat);

	IO_WRITE(PI_DRAM_ADDR_REG, osVirtualToPhysical(dramAddr));
	IO_WRITE(PI_CART_ADDR_REG, K1_TO_PHYS((uintptr_t) osRomBase | devAddr));

	switch (direction) {
	case OS_READ:
		IO_WRITE(PI_WR_LEN_REG, size - 1);
		break;
	case OS_WRITE:
		IO_WRITE(PI_RD_LEN_REG, size - 1);
		break;
	default:
		return -1;
	}

	return 0;
}

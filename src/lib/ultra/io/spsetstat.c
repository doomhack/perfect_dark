#include "libultra_internal.h"

void __osSpSetStatus(u32 data)
{
	IO_WRITE(SP_STATUS_REG, data);
}
#include <os_internal.h>
#include <rcp.h>

u32 osDpGetStatus()
{
	return IO_READ(DPC_STATUS_REG);
}

void osDpSetStatus(u32 data)
{
	IO_WRITE(DPC_STATUS_REG, data);
}
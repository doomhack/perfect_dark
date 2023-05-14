#include <PR/ultratypes.h>
#include <os_internal.h>
#include "osint.h"
#include <SDL.h>

const u64 os_count_freq = 46875000; //48.875mhz, 21.33ns


u32	osGetCount(void)
{
	static u64 timer_freq = 0;
	static double ratio = 0.0;

	if (timer_freq == 0)
	{
		timer_freq = SDL_GetPerformanceFrequency();

		ratio = (double)os_count_freq / (double)timer_freq;
	}
		
	u64 current_tick = SDL_GetPerformanceCounter();
	
	double count = (double)current_tick * ratio;

	return (u32)count;
}

OSTime osGetTime()
{
	u32 tmptime;
	u32 elapseCount;
	OSTime currentCount;

	tmptime = osGetCount();
	elapseCount = tmptime - __osBaseCounter;
	currentCount = __osCurrentTime;

	return currentCount + elapseCount;
}
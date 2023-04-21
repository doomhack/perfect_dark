#define SDL_MAIN_HANDLED

#include <SDL.h>

#include <platform/platform.h>

#include "../src/lib/ultra/os/osint.h"


extern __OSEventState __osEventStateTab[OS_NUM_EVENTS];

u32 g_VIRegBase = 0;


Uint32 VICallback(Uint32 interval, void* param)
{
	__OSEventState* es = &__osEventStateTab[OS_EVENT_VI];

	if (es && es->messageQueue)
	{
		osSendMesg(es->messageQueue, es->message, OS_MESG_NOBLOCK);
	}

	return interval;
}


void InitPlatform()
{
	SDL_SetMainReady();
	SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO);


	//Allocate space for VI Regs...
	g_VIRegBase = (u32)malloc(64);

	SDL_Window* win = SDL_CreateWindow("Perfect Dark", 100, 100, 400, 400, 0);

	SDL_AddTimer(16, &VICallback, NULL);
}
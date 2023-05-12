#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include <SDL.h>
#include <SDL_syswm.h>


#include <ultratypes.h>
#include "../src/lib/ultra/os/osint.h"
#include <rcp.h>

#include "tinycthread.h"

#include "byteswaprom.h"

#include <gbi.h>

#include "../n64-fast3d-engine/gfx_pc.h"
#include "../n64-fast3d-engine/gfx_sdl.h"
#include "../n64-fast3d-engine/gfx_opengl.h"



extern void bootPhase1(void);

u8 * g_Rom;
u32 g_RomSize;

extern __OSEventState __osEventStateTab[OS_NUM_EVENTS];

u32 g_VIRegBase = 0;
u32 g_SP_DMem = 0;
u32 g_SP_IMem = 0;
u32 g_SP_DPC_RegBase = 0;
u32 g_SPRegBase = 0;
u32 g_SPPCReg = 0;

u32 g_RDRam = 0;

HWND g_Hwnd = NULL;

void loadRom()
{
    FILE* f = fopen("C:\\Users\\Zak\\Documents\\GitProjects\\perfect_dark\\pd.ntsc-final.z64", "r");
    fseek(f, 0, SEEK_END);

    long size = ftell(f);

    g_Rom = (u8*)malloc(size);
    g_RomSize = size;

    fseek(f, 0, SEEK_SET);

    fread(g_Rom, 1, size, f);
}

void openWindow()
{
    gfx_init(&gfx_sdl, &gfx_opengl_api, "Perfect Dark", false);
}

void allocateMemoryAreas()
{
    g_VIRegBase = (u32)calloc(64, 1);

    g_SP_DMem = (u32)calloc(4096, 1);

    g_SP_DMem = (u32)calloc(4096, 1);

    g_SP_DPC_RegBase = (u32)calloc(32, 1);

    g_SPRegBase = (u32)calloc(32, 1);

    g_RDRam = (u32)calloc(8 * 1024 * 1024, 1);

    g_SPPCReg = (u32)calloc(4, 1);
}

int startGameOnThread(void* p)
{
    openWindow();

    bootPhase1();

    return 0;
}

thrd_t startGameThread()
{
    thrd_t t;

    thrd_create(&t, &startGameOnThread, NULL);

    return t;
}

Uint32 viCallback(Uint32 interval, void* param)
{
    __OSEventState* es = &__osEventStateTab[OS_EVENT_VI];

    if (es && es->messageQueue)
    {
        osSendMesg(es->messageQueue, es->message, OS_MESG_NOBLOCK);
    }

    return interval;
}

void startVITimer()
{
    SDL_AddTimer(16, &viCallback, NULL);
}

int startGame()
{
    SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO);

    loadRom();

    byteSwapRom();

    allocateMemoryAreas();

    startVITimer();

    thrd_t t = startGameThread();

    thrd_join(t, NULL);

    return 0;
}

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hprevinstance, LPSTR lpcmdline, int ncmdshow)
{
    return startGame();
}

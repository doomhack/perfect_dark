#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <bit>

#include <ultratypes.h>


extern "C" void bootPhase1(void);

extern "C" u8 * g_Rom;
extern "C" u32 g_RomSize;


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

void byteSwapRom()
{
    u32* rom32 = (u32*)g_Rom;
    u32 words = g_RomSize / 4;

    for (int i = 0; i < words; i++)
    {
        u32 v = rom32[i];

        rom32[i] =  ((v & 0xff000000) >> 24) |
                    ((v & 0x00ff0000) >> 8) |
                    ((v & 0x0000ff00) << 8) |
                    ((v & 0x000000ff) << 24);
    }
}

int main(int argc, char *argv[])
{
    loadRom();
    byteSwapRom();

    bootPhase1();
}

#include <malloc.h>

#include <ultratypes.h>
#include "types.h"
#include "libaudio.h"


#include "byteswaprom.h"
#include "rom.h"

//Here we are byteswapping the data structures in the ROM.
//We could do this on load/dma but that means I have to go through it
//line by line anywhere something is loaded.

//So we grab pointers to the data, swap it here so we can leave the
//code elsewhere alone.

//Some structures can refer to the same data from multiple places.
//(Eg: multiple songs can use the same instruments) so we store
//A bitmap of all the addresses that have already been swapped
//So we only do it once.

//I don't like this anymore than you do.


u8* swapMap = NULL;
extern u32 g_RomSize;

#define BS16(x) _BS16(&x)
#define BS32(x) _BS32(&x)

void _BS16(u16* p)
{
	u32 ofs = (u8*)p - g_Rom;
	if (swapMap[ofs])
		return;

	memset(&swapMap[ofs], 0xff, 2);

	*p = BSWAP16(*p);


}

void _BS32(u32* p)
{
	u32 ofs = (u8*)p - g_Rom;
	if (swapMap[ofs])
		return;

	memset(&swapMap[ofs], 0xff, 4);

	*p = BSWAP32(*p);
}

void byteSwapAdpcmLoop(ALADPCMloop* loop, u8* base)
{
	BS32(loop->start);
	BS32(loop->end);
	BS32(loop->count);

	for (int i = 0; i < 16; i++)
	{
		BS16(loop->state[i]);
	}
}

void byteSwapAdpcmBook(ALADPCMBook* book, u8* base)
{
	BS32(book->order);
	BS32(book->npredictors);

	//Don't know if book is actualy 128 entries or npredictors?
	//s16 book[128];        /* Actually variable size. Must be 8-byte aligned */
}

void byteSwapRawLoop(ALRawLoop* loop, u8* base)
{
	BS32(loop->start);
	BS32(loop->end);
	BS32(loop->count);
}

void byteSwapWaveTable(ALWaveTable* wvetbl, u8* base)
{
	BS32(wvetbl->base);
	BS32(wvetbl->len);

	if (wvetbl->type == AL_ADPCM_WAVE)
	{
		BS32(wvetbl->waveInfo.adpcmWave.loop);
		BS32(wvetbl->waveInfo.adpcmWave.book);

		if (wvetbl->waveInfo.adpcmWave.loop)
		{
			ALADPCMloop* loop = (ALADPCMloop*)(base + (u32)wvetbl->waveInfo.adpcmWave.loop);

			byteSwapAdpcmLoop(loop, base);
		}

		if (wvetbl->waveInfo.adpcmWave.book)
		{
			ALADPCMBook* book = (ALADPCMBook*)(base + (u32)wvetbl->waveInfo.adpcmWave.book);

			byteSwapAdpcmBook(book, base);
		}
	}
	else if (wvetbl->type == AL_RAW16_WAVE)
	{
		BS32(wvetbl->waveInfo.rawWave.loop);

		if (wvetbl->waveInfo.rawWave.loop)
		{
			ALRawLoop* loop = (ALRawLoop*)(base + (u32)wvetbl->waveInfo.rawWave.loop);

			byteSwapRawLoop(loop, base);
		}
	}
}

void byteSwapSoundFile(ALSound* snd, u8* base)
{
	BS32((u32)snd->envelope);
	BS32((u32)snd->keyMap);
	BS32((u32)snd->wavetable);

	if (snd->envelope)
	{
		ALEnvelope* evp = (ALEnvelope*)(base + (u32)snd->envelope);

		BS32(evp->attackTime);
		BS32(evp->decayTime);
		BS32(evp->releaseTime);
	}
	
	if (snd->wavetable)
	{
		ALWaveTable* wvetbl = (ALWaveTable*)(base + (u32)snd->wavetable);

		byteSwapWaveTable(wvetbl, base);
	}
}

void byteSwapInstumentFile(ALInstrument* inst, u8* base)
{
	BS16(inst->bendRange);
	BS16(inst->soundCount);

	for (int i = 0; i < inst->soundCount; i++)
	{
		BS32((u32)inst->soundArray[i]);

		ALSound* snd = (ALSound*)(base + (u32)inst->soundArray[i]);

		byteSwapSoundFile(snd, base);
	}
}

void byteSwapBankFile(ALBank* bnk, u8* base)
{
	BS32(bnk->sampleRate);
	BS16(bnk->instCount);

	BS32((u32)bnk->percussion);

	if (bnk->percussion)
	{
		ALInstrument* inst = (ALInstrument*)(base + (u32)bnk->percussion);

		byteSwapInstumentFile(inst, base);
	}

	for (int i = 0; i < bnk->instCount; i++)
	{
		BS32((u32)bnk->instArray[i]);

		ALInstrument* inst = (ALInstrument*)(base + (u32)bnk->instArray[i]);

		byteSwapInstumentFile(inst, base);
	}
}

void byteSwapSound()
{
	extern const u32 _seqctlSegmentRomStart;
	extern const u32 _sfxctlSegmentRomStart;

	ALBankFile* bankfile = ROMPTR(_seqctlSegmentRomStart);

	BS16(bankfile->revision);
	BS16(bankfile->bankCount);

	for (int i = 0; i < bankfile->bankCount; i++)
	{
		BS32((u32)bankfile->bankArray[i]);

		ALBank* bnk = (ALBank*)((u8*)bankfile + (u32)bankfile->bankArray[i]);

		byteSwapBankFile(bnk, ROMPTR(_seqctlSegmentRomStart));
	}

	extern const u32 _sequencesSegmentRomStart;

	struct seqtable* seqtbl = ROMPTR(_sequencesSegmentRomStart);

	BS16(seqtbl->count);
	
	for (int i = 0; i < seqtbl->count; i++)
	{
		BS32(seqtbl->entries[i].romaddr);
		BS16(seqtbl->entries[i].binlen);
		BS16(seqtbl->entries[i].ziplen);
	}

	bankfile = ROMPTR(_sfxctlSegmentRomStart);

	BS16(bankfile->revision);
	BS16(bankfile->bankCount);

	for (int i = 0; i < bankfile->bankCount; i++)
	{
		BS32((u32)bankfile->bankArray[i]);

		ALBank* bnk = (ALBank*)((u8*)bankfile + (u32)bankfile->bankArray[i]);

		byteSwapBankFile(bnk, ROMPTR(_sfxctlSegmentRomStart));
	}
}

void byteSwapAnims()
{
	extern const u32 _animationsTableRomStart;

	u32* animTableStart = ROMPTR(_animationsTableRomStart);

	BS32(animTableStart[0]);

	u32 animCount = animTableStart[0];

	struct animtableentry* anims = (struct animtableentry*)&animTableStart[1];

	for (int i = 0; i < animCount; i++)
	{
		BS16(anims[i].bytesperframe);
		BS16(anims[i].headerlen);
		BS16(anims[i].numframes);

		BS32(anims[i].data);
	}
};

void byteSwapFont(struct font* font, u8* base)
{
	for (int i = 0; i < 13 * 13; i++)
	{
		BS32(font->kerning[i]);
	}

	for (int i = 0; i < 94; i++)
	{
		BS32(font->chars[i].kerningindex);
		BS32(font->chars[i].pixeldata);
	}
}

void byteSwapFonts()
{
	extern const u32 _fonthandelgothicsmSegmentRomStart;
	extern const u32 _fonthandelgothicmdSegmentRomStart;
	extern const u32 _fonthandelgothiclgSegmentRomStart;
	extern const u32 _fonthandelgothicxsSegmentRomStart;

	struct font* font = ROMPTR(_fonthandelgothicsmSegmentRomStart);
	byteSwapFont(font, (u8*)font);

	font = ROMPTR(_fonthandelgothicmdSegmentRomStart);
	byteSwapFont(font, (u8*)font);

	font = ROMPTR(_fonthandelgothiclgSegmentRomStart);
	byteSwapFont(font, (u8*)font);

	font = ROMPTR(_fonthandelgothicxsSegmentRomStart);
	byteSwapFont(font, (u8*)font);

}

void byteSwapTextures()
{
	//Texture is a bitfield.

	extern const u32 _textureslistSegmentRomStart;
	extern const u32 _textureslistSegmentRomEnd;

	u32 len = _textureslistSegmentRomEnd - _textureslistSegmentRomStart;

	struct texture* tex = ROMPTR(_textureslistSegmentRomStart);

	u32 count = len / sizeof(struct texture);

	for (int i = 0; i < count; i++)
	{
		u8 soundsurfacetype =	tex[i].soundsurfacetype;
		u8 surfacetype =		tex[i].surfacetype;
		u32 dataoffset =		tex[i].dataoffset << 8;

		u8 unk04_00 =			tex[i].unk04_00;
		u8 unk04_04 =			tex[i].unk04_04;
		u8 unk04_08 =			tex[i].unk04_08;
		u8 unk04_0c =			tex[i].unk04_0c;

		dataoffset = BSWAP32(dataoffset);

		tex[i].dataoffset = dataoffset;
	}
}

void byteSwapRom()
{
	swapMap = calloc(g_RomSize, 1);

	byteSwapAnims();
	byteSwapSound();
	byteSwapFonts();
	byteSwapTextures();

	free(swapMap);
}
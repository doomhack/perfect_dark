#include <ultra64.h>
#include "constants.h"
#include "game/chr/chraction.h"
#include "game/debug.h"
#include "game/chr/chr.h"
#include "game/ceil.h"
#include "game/game_0b0fd0.h"
#include "game/game_127910.h"
#include "game/mplayer/setup.h"
#include "game/bot.h"
#include "game/botcmd.h"
#include "game/botact.h"
#include "game/mplayer/mplayer.h"
#include "game/propobj.h"
#include "bss.h"
#include "lib/rng.h"
#include "data.h"
#include "types.h"

/**
 * This table defines the ideal distance ranges for attacking.
 *
 * The first value is the minimum attack distance.
 * The second value is the maximum attack distance.
 * The third value doesn't appear to have any purpose.
 */
f32 g_BotDistConfigs[][3] = {
	{ 0,    120,  10000 }, // BOTDISTCFG_CLOSE
	{ 300,  450,  4500  }, // BOTDISTCFG_PISTOL
	{ 300,  600,  4500  }, // BOTDISTCFG_DEFAULT
	{ 600,  1200, 4500  }, // BOTDISTCFG_SHOOTEXPLOSIVE
	{ 150,  250,  4500  }, // BOTDISTCFG_KAZE
	{ 1000, 2000, 3000  }, // BOTDISTCFG_FARSIGHT
	{ 0,    250,  10000 }, // BOTDISTCFG_FOLLOW
	{ 450,  700,  4500  }, // BOTDISTCFG_THROWEXPLOSIVE
};

void botcmdTickDistMode(struct chrdata *chr)
{
	s32 confignum;
	f32 *limits;
	f32 distance;
	u8 newmode;
	struct aibot *aibot = chr->aibot;
	s32 prevmode = aibot->distmode;
	struct prop *targetprop = NULL;
	s32 somevalue = 0;
	f32 minattackdistance;
	f32 maxattackdistance;
	f32 limit3;
	u32 stack;

	if (aibot->config->type == BOTTYPE_KAZE) {
		confignum = BOTDISTCFG_KAZE;
	} else {
		confignum = botinvGetDistConfig(aibot->weaponnum, aibot->gunfunc);
	}

	if (chr->myaction == MA_AIBOTFOLLOW && aibot->followingplayernum >= 0) {
		limits = g_BotDistConfigs[BOTDISTCFG_FOLLOW];
		targetprop = g_MpAllChrPtrs[aibot->followingplayernum]->prop;
		somevalue = aibot->unk16c[aibot->followingplayernum];

		if (chr->target != -1 && (confignum == BOTDISTCFG_CLOSE || confignum == BOTDISTCFG_KAZE)) {
			struct prop *target = chrGetTargetProp(chr);
			f32 xdiff = targetprop->pos.x - target->pos.x;
			f32 ydiff = targetprop->pos.y - target->pos.y;
			f32 zdiff = targetprop->pos.z - target->pos.z;

			if (xdiff * xdiff + ydiff * ydiff + zdiff * zdiff < 500 * 500) {
				limits = g_BotDistConfigs[confignum];
				targetprop = target;
				somevalue = aibot->unk128;
			}
		}
	} else {
		limits = g_BotDistConfigs[confignum];

		if (chr->myaction == MA_AIBOTATTACK && aibot->attackingplayernum >= 0) {
			targetprop = g_MpAllChrPtrs[aibot->attackingplayernum]->prop;
			somevalue = aibot->unk16c[aibot->attackingplayernum];
		} else if (chr->target != -1) {
			targetprop = chrGetTargetProp(chr);
			somevalue = aibot->unk128;
		}
	}

	if (targetprop == NULL) {
		return;
	}

	if (!botHasGround(targetprop->chr)) {
		return;
	}

	distance = chrGetDistanceToCoord(chr, &targetprop->pos);
	minattackdistance = limits[0];
	maxattackdistance = limits[1];
	limit3 = limits[2];

	if (chr->aibot->config->difficulty == BOTDIFF_MEAT) {
		minattackdistance *= 0.35f;
	} else if (chr->aibot->config->difficulty == BOTDIFF_EASY) {
		minattackdistance *= 0.5f;
	}

	if (aibot->distmode == BOTDISTMODE_BACKUP) {
		minattackdistance += 25.0f;
	} else if (aibot->distmode == BOTDISTMODE_ADVANCE || aibot->distmode == BOTDISTMODE_GOTO) {
		maxattackdistance -= 25.0f;
	}

	if (distance < minattackdistance) {
		// Bot is too close to target - move back a bit
		newmode = BOTDISTMODE_BACKUP;
	} else if (distance >= minattackdistance && distance < maxattackdistance) {
		// Bot is a good distance from target for attacking
		newmode = BOTDISTMODE_OK;
	} else if (distance >= maxattackdistance && distance < limit3) {
		// Bot needs to come closer to target
		newmode = BOTDISTMODE_ADVANCE;
	} else {
		// Bot needs to come a lot closer to target
		newmode = BOTDISTMODE_GOTO;
	}

#if VERSION >= VERSION_NTSC_1_0
	if (newmode != BOTDISTMODE_BACKUP || somevalue == 0 || aibot->unk050 != targetprop) {
		aibot->unk050 = NULL;
		aibot->unk09d = 0;
	}

	if (newmode == BOTDISTMODE_OK) {
		if (somevalue == 0) {
			newmode = BOTDISTMODE_ADVANCE;
		}
	} else if (newmode == BOTDISTMODE_BACKUP) {
		if (somevalue == 0) {
			newmode = BOTDISTMODE_ADVANCE;
			aibot->unk050 = targetprop;
			aibot->unk09d = PALDOWN(20) + (random() % PALDOWN(120));
		} else if (aibot->unk050) {
			if (aibot->unk09d > g_Vars.lvupdate240_60) {
				aibot->unk09d -= g_Vars.lvupdate240_60;
				newmode = BOTDISTMODE_OK;
			} else {
				aibot->unk050 = NULL;
				aibot->unk09d = 0;
			}
		}
	}
#else
	if (newmode == BOTDISTMODE_OK && somevalue == 0) {
		newmode = BOTDISTMODE_ADVANCE;
	}
#endif

	aibot->distmode = newmode;

	if (aibot->distmodettl60 >= 0) {
		aibot->distmodettl60 -= g_Vars.lvupdate240_60;
	}

	if (newmode != prevmode
			|| (newmode != BOTDISTMODE_OK && (chr->actiontype == ACT_STAND || aibot->distmodettl60 <= 0))) {
		switch (newmode) {
		case BOTDISTMODE_BACKUP:
			chrRunFromPos(chr, SPEED_RUN, 10000, &targetprop->pos);
			break;
		case BOTDISTMODE_OK:
			chrTryStop(chr);
			break;
		case BOTDISTMODE_ADVANCE:
			chrGoToProp(chr, targetprop, SPEED_RUN);
			break;
		case BOTDISTMODE_GOTO:
			chrGoToProp(chr, targetprop, SPEED_RUN);
			break;
		}

		aibot->distmodettl60 = PALDOWN(60);
	}
}

void botcmdApply(struct chrdata *chr, u32 command)
{
	f32 value;

	switch (command) {
	case AIBOTCMD_ATTACK:
		amOpenPickTarget();
		break;
	case AIBOTCMD_FOLLOW:
		botApplyFollow(chr, g_Vars.currentplayer->prop);
		break;
	case AIBOTCMD_PROTECT:
		botApplyProtect(chr, g_Vars.currentplayer->prop);
		break;
	case AIBOTCMD_DEFEND:
		value = chrGetInverseTheta(g_Vars.currentplayer->prop->chr);
		botApplyDefend(chr, &g_Vars.currentplayer->prop->pos, g_Vars.currentplayer->prop->rooms, value);
		break;
	case AIBOTCMD_HOLD:
		value = chrGetInverseTheta(g_Vars.currentplayer->prop->chr);
		botApplyHold(chr, &g_Vars.currentplayer->prop->pos, g_Vars.currentplayer->prop->rooms, value);
		break;
	default:
		botApplyScenarioCommand(chr, command);
		break;
	}
}
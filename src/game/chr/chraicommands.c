#include <ultra64.h>
#include "constants.h"
#include "gvars/gvars.h"
#include "game/chr/chr.h"
#include "game/game_000920.h"
#include "game/game_066310.h"
#include "game/game_0b28d0.h"
#include "game/game_165670.h"
#include "game/game_16cfa0.h"
#include "game/game_19c990.h"
#include "setup/setup_000000.h"
#include "setup/setup_0160b0.h"
#include "setup/setup_020df0.h"
#include "types.h"
#include "game/chr/chraicommands.h"
#include "library/library_0e9d0.h"
#include "library/library_12dc0.h"
#include "library/library_16110.h"
#include "library/library_317f0.h"
#include "library/library_481e0.h"
#include "library/library_48830.h"

const u32 var7f1a9c30[] = {0x40c907a9};
const u32 var7f1a9c34[] = {0x40c907a9};
const u32 var7f1a9c38[] = {0x3dcccccd};
const u32 var7f1a9c3c[] = {0x3dcccccd};
const u32 var7f1a9c40[] = {0x3dcccccd};
const u32 var7f1a9c44[] = {0x3dcccccd};
const u32 var7f1a9c48[] = {0x3dcccccd};
const u32 var7f1a9c4c[] = {0x3dcccccd};
const u32 var7f1a9c50[] = {0x3dcccccd};
const u32 var7f1a9c54[] = {0x7f05592c};
const u32 var7f1a9c58[] = {0x7f05592c};
const u32 var7f1a9c5c[] = {0x7f05592c};
const u32 var7f1a9c60[] = {0x7f05592c};
const u32 var7f1a9c64[] = {0x7f05592c};
const u32 var7f1a9c68[] = {0x7f05592c};
const u32 var7f1a9c6c[] = {0x7f05592c};
const u32 var7f1a9c70[] = {0x7f05592c};
const u32 var7f1a9c74[] = {0x7f05592c};
const u32 var7f1a9c78[] = {0x7f05592c};
const u32 var7f1a9c7c[] = {0x7f05592c};
const u32 var7f1a9c80[] = {0x7f05592c};
const u32 var7f1a9c84[] = {0x7f05592c};
const u32 var7f1a9c88[] = {0x7f05592c};
const u32 var7f1a9c8c[] = {0x7f055948};
const u32 var7f1a9c90[] = {0x7f05592c};
const u32 var7f1a9c94[] = {0x7f05592c};
const u32 var7f1a9c98[] = {0x7f05592c};
const u32 var7f1a9c9c[] = {0x7f05592c};
const u32 var7f1a9ca0[] = {0x7f05592c};
const u32 var7f1a9ca4[] = {0x7f05592c};
const u32 var7f1a9ca8[] = {0x7f05592c};
const u32 var7f1a9cac[] = {0x7f05592c};
const u32 var7f1a9cb0[] = {0x7f05592c};
const u32 var7f1a9cb4[] = {0x7f05592c};
const u32 var7f1a9cb8[] = {0x7f05592c};
const u32 var7f1a9cbc[] = {0x7f05592c};
const u32 var7f1a9cc0[] = {0x7f0559ac};
const u32 var7f1a9cc4[] = {0x7f05592c};
const u32 var7f1a9cc8[] = {0x7f05592c};
const u32 var7f1a9ccc[] = {0x7f05592c};
const u32 var7f1a9cd0[] = {0x7f05592c};
const u32 var7f1a9cd4[] = {0x7f05592c};
const u32 var7f1a9cd8[] = {0x3d4ccccd};
const u32 var7f1a9cdc[] = {0x40c907a9};
const u32 var7f1a9ce0[] = {0x40c907a9};
const u32 var7f1a9ce4[] = {0x7f0593bc};
const u32 var7f1a9ce8[] = {0x7f0593bc};
const u32 var7f1a9cec[] = {0x7f0593bc};
const u32 var7f1a9cf0[] = {0x7f0593bc};
const u32 var7f1a9cf4[] = {0x7f0593bc};
const u32 var7f1a9cf8[] = {0x7f0593bc};
const u32 var7f1a9cfc[] = {0x7f0593bc};
const u32 var7f1a9d00[] = {0x7f0593bc};
const u32 var7f1a9d04[] = {0x7f059390};
const u32 var7f1a9d08[] = {0x7f059390};
const u32 var7f1a9d0c[] = {0x7f059390};
const u32 var7f1a9d10[] = {0x7f059390};
const u32 var7f1a9d14[] = {0x7f059390};
const u32 var7f1a9d18[] = {0x7f059390};
const u32 var7f1a9d1c[] = {0x7f059390};
const u32 var7f1a9d20[] = {0x7f059390};
const u32 var7f1a9d24[] = {0x7f059390};
const u32 var7f1a9d28[] = {0x7f059390};
const u32 var7f1a9d2c[] = {0x7f0593a0};
const u32 var7f1a9d30[] = {0x7f059390};
const u32 var7f1a9d34[] = {0x7f0593a0};
const u32 var7f1a9d38[] = {0x7f0593a0};
const u32 var7f1a9d3c[] = {0x7f0593a0};
const u32 var7f1a9d40[] = {0x7f0593a0};
const u32 var7f1a9d44[] = {0x7f0593b0};
const u32 var7f1a9d48[] = {0x7f0593bc};
const u32 var7f1a9d4c[] = {0x455ac000};
const u32 var7f1a9d50[] = {0x461c3f9a};
const u32 var7f1a9d54[] = {0x44bb8000};
const u32 var7f1a9d58[] = {0x461c3c00};
const u32 var7f1a9d5c[] = {0x4b189680};
const u32 var7f1a9d60[] = {0x455ac000};
const u32 var7f1a9d64[] = {0x45dac000};
const u32 var7f1a9d68[] = {0x455ac000};
const u32 var7f1a9d6c[] = {0x7f05afec};
const u32 var7f1a9d70[] = {0x7f05b008};
const u32 var7f1a9d74[] = {0x7f05b028};
const u32 var7f1a9d78[] = {0x7f05b054};
const u32 var7f1a9d7c[] = {0x7f05b088};
const u32 var7f1a9d80[] = {0x7f05b0bc};
const u32 var7f1a9d84[] = {0x7f05b100};
const u32 var7f1a9d88[] = {0x7f05b140};
const u32 var7f1a9d8c[] = {0x7f05b184};
const u32 var7f1a9d90[] = {0x461c4000};

const f32 var7f1a9d94[] = {3500};
const f32 var7f1a9d98[] = {30999.9};
const f32 var7f1a9d9c[] = {3000};
const f32 var7f1a9da0[] = {3000};
const f32 var7f1a9da4[] = {0.1};
const f32 var7f1a9da8[] = {0.4};
const f32 var7f1a9dac[] = {0.4};

/**
 * @cmd 0000
 */
bool aiGoToNext(void)
{
	u8 *buffer = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, buffer[2]);
	return false;
}

/**
 * @cmd 0001
 */
bool aiGoToFirst(void)
{
	u8 *buffer = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, 0, buffer[2]);
	return false;
}

/**
 * @cmd 0002
 */
bool aiLabel(void)
{
	g_Vars.aioffset += 3;
	return false;
}

/**
 * @cmd 0003
 */
bool aiYield(void)
{
	g_Vars.aioffset += 2;

	if (g_Vars.chrdata) {
		g_Vars.chrdata->ailist = g_Vars.ailist;
		g_Vars.chrdata->aioffset = g_Vars.aioffset;
	} else if (g_Vars.objdata) {
		g_Vars.objdata->ailist = g_Vars.ailist;
		g_Vars.objdata->aioffset = g_Vars.aioffset;
	} else if (g_Vars.aicdata) {
		g_Vars.aicdata->ailist = g_Vars.ailist;
		g_Vars.aicdata->aioffset = g_Vars.aioffset;
	} else if (g_Vars.hovdata) {
		g_Vars.hovdata->ailist = g_Vars.ailist;
		g_Vars.hovdata->aioffset = g_Vars.aioffset;
	}

	return true;
}

/**
 * @cmd 0005
 */
bool aiSetList(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 ailistid = cmd[4] | (cmd[3] << 8);
	u8 *ailist = ailistFindById(ailistid & 0xffff);

	struct chrdata *chr = g_Vars.chrdata;

	if ((cmd[2] & 0xff) == CHR_SELF) {
		g_Vars.ailist = ailist;
		g_Vars.aioffset = 0;
	} else {
		chr = chrFindById(chr, cmd[2]);

		if (chr) {
			chr->ailist = ailist;
			chr->aioffset = 0;
			chr->sleep = 0;
		}

		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0006
 */
bool aiSetReturnList(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 ailistid = cmd[4] | (cmd[3] << 8);
	struct chrdata *chr;

	if (g_Vars.chrdata) {
		if (cmd[2] == CHR_SELF) {
			g_Vars.chrdata->aireturnlist = ailistid;
		} else {
			chr = chrFindById(g_Vars.chrdata, cmd[2]);

			if (chr) {
				chr->aireturnlist = ailistid;
			}
		}
	} else if (g_Vars.objdata) {
		g_Vars.objdata->aireturnlist = ailistid;
	} else if (g_Vars.aicdata) {
		g_Vars.aicdata->aireturnlist = ailistid;
	} else if (g_Vars.hovdata) {
		g_Vars.hovdata->aireturnlist = ailistid;
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 0007
 */
GLOBAL_ASM(
glabel aiSetShotList
/*  f04de88:	3c06800a */ 	lui	$a2,%hi(g_Vars)
/*  f04de8c:	24c69fc0 */ 	addiu	$a2,$a2,%lo(g_Vars)
/*  f04de90:	8cc30438 */ 	lw	$v1,0x438($a2)
/*  f04de94:	8cce0434 */ 	lw	$t6,0x434($a2)
/*  f04de98:	8cc50424 */ 	lw	$a1,0x424($a2)
/*  f04de9c:	01c31021 */ 	addu	$v0,$t6,$v1
/*  f04dea0:	904f0002 */ 	lbu	$t7,0x2($v0)
/*  f04dea4:	90590003 */ 	lbu	$t9,0x3($v0)
/*  f04dea8:	00001025 */ 	or	$v0,$zero,$zero
/*  f04deac:	000fc200 */ 	sll	$t8,$t7,0x8
/*  f04deb0:	03192025 */ 	or	$a0,$t8,$t9
/*  f04deb4:	10a00004 */ 	beqz	$a1,.L0f04dec8
/*  f04deb8:	3088ffff */ 	andi	$t0,$a0,0xffff
/*  f04debc:	a4a80110 */ 	sh	$t0,0x110($a1)
/*  f04dec0:	10000001 */ 	beqz	$zero,.L0f04dec8
/*  f04dec4:	8cc30438 */ 	lw	$v1,0x438($a2)
.L0f04dec8:
/*  f04dec8:	246a0004 */ 	addiu	$t2,$v1,0x4
/*  f04decc:	03e00008 */ 	jr	$ra
/*  f04ded0:	acca0438 */ 	sw	$t2,0x438($a2)
);

//bool aiSetShotList(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	u16 ailistid = cmd[3] | (cmd[2] << 8);
//
//	if (g_Vars.chrdata) {
//		g_Vars.chrdata->aishotlist = ailistid;
//	}
//
//	g_Vars.aioffset += 4;
//
//	return false;
//}

/**
 * @cmd 01c1
 */
bool aiSetPunchDodgeList(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 ailistid = cmd[3] | (cmd[2] << 8);

	if (g_Vars.chrdata) {
		g_Vars.chrdata->aipunchdodgelist = ailistid;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01c2
 */
bool aiSetShootingAtMeList(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 ailistid = cmd[3] | (cmd[2] << 8);

	if (g_Vars.chrdata) {
		g_Vars.chrdata->aishootingatmelist = ailistid;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01c3
 */
bool aiSetDarkRoomList(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 ailistid = cmd[3] | (cmd[2] << 8);

	if (g_Vars.chrdata) {
		g_Vars.chrdata->aidarkroomlist = ailistid;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01c4
 */
bool aiSetPlayerDeadList(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 ailistid = cmd[3] | (cmd[2] << 8);

	if (g_Vars.chrdata) {
		g_Vars.chrdata->aiplayerdeadlist = ailistid;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0008
 */
bool aiReturn(void)
{
	u8 *ailist = NULL;

	if (g_Vars.chrdata) {
		ailist = ailistFindById(g_Vars.chrdata->aireturnlist);
	} else if (g_Vars.objdata) {
		ailist = ailistFindById(g_Vars.objdata->aireturnlist);
	} else if (g_Vars.aicdata) {
		ailist = ailistFindById(g_Vars.aicdata->aireturnlist);
	} else if (g_Vars.hovdata) {
		ailist = ailistFindById(g_Vars.hovdata->aireturnlist);
	}

	g_Vars.ailist = ailist;
	g_Vars.aioffset = 0;

	return false;
}

/**
 * @cmd 0004
 */
bool aiEndList(void)
{
	s32 ailistid;
	bool is_global;
	ailistid = chraiGetListIdByList(g_Vars.ailist, &is_global);

	return true;
}

/**
 * @cmd 0009
 */
bool aiStop(void)
{
	if (g_Vars.chrdata) {
		chrTryStop(g_Vars.chrdata);
	} else if (g_Vars.hovdata) {
		heliTryStop(g_Vars.hovdata);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 000a
 */
bool aiKneel(void)
{
	chrTryKneel(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 000b
 */
GLOBAL_ASM(
glabel aiChrDoAnimation
/*  f04e174:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f04e178:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f04e17c:	8d2e0434 */ 	lw	$t6,0x434($t1)
/*  f04e180:	8d2f0438 */ 	lw	$t7,0x438($t1)
/*  f04e184:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f04e188:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f04e18c:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f04e190:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f04e194:	90780002 */ 	lbu	$t8,0x2($v1)
/*  f04e198:	906a0003 */ 	lbu	$t2,0x3($v1)
/*  f04e19c:	8d240424 */ 	lw	$a0,0x424($t1)
/*  f04e1a0:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f04e1a4:	032a5825 */ 	or	$t3,$t9,$t2
/*  f04e1a8:	afab0038 */ 	sw	$t3,0x38($sp)
/*  f04e1ac:	906c0004 */ 	lbu	$t4,0x4($v1)
/*  f04e1b0:	906f0006 */ 	lbu	$t7,0x6($v1)
/*  f04e1b4:	906e0005 */ 	lbu	$t6,0x5($v1)
/*  f04e1b8:	90790007 */ 	lbu	$t9,0x7($v1)
/*  f04e1bc:	000c6a00 */ 	sll	$t5,$t4,0x8
/*  f04e1c0:	000fc200 */ 	sll	$t8,$t7,0x8
/*  f04e1c4:	00008025 */ 	or	$s0,$zero,$zero
/*  f04e1c8:	01ae4025 */ 	or	$t0,$t5,$t6
/*  f04e1cc:	1080000c */ 	beqz	$a0,.L0f04e200
/*  f04e1d0:	03193025 */ 	or	$a2,$t8,$t9
/*  f04e1d4:	9065000a */ 	lbu	$a1,0xa($v1)
/*  f04e1d8:	afa80034 */ 	sw	$t0,0x34($sp)
/*  f04e1dc:	afa60030 */ 	sw	$a2,0x30($sp)
/*  f04e1e0:	0fc126d1 */ 	jal	chrFindById
/*  f04e1e4:	afa3003c */ 	sw	$v1,0x3c($sp)
/*  f04e1e8:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f04e1ec:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f04e1f0:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f04e1f4:	8fa60030 */ 	lw	$a2,0x30($sp)
/*  f04e1f8:	8fa80034 */ 	lw	$t0,0x34($sp)
/*  f04e1fc:	00408025 */ 	or	$s0,$v0,$zero
.L0f04e200:
/*  f04e200:	3401ffff */ 	dli	$at,0xffff
/*  f04e204:	55010005 */ 	bnel	$t0,$at,.L0f04e21c
/*  f04e208:	3401fffe */ 	dli	$at,0xfffe
/*  f04e20c:	44800000 */ 	mtc1	$zero,$f0
/*  f04e210:	10000015 */ 	beqz	$zero,.L0f04e268
/*  f04e214:	3401ffff */ 	dli	$at,0xffff
/*  f04e218:	3401fffe */ 	dli	$at,0xfffe
.L0f04e21c:
/*  f04e21c:	1501000e */ 	bne	$t0,$at,.L0f04e258
/*  f04e220:	87a4003a */ 	lh	$a0,0x3a($sp)
/*  f04e224:	afa3003c */ 	sw	$v1,0x3c($sp)
/*  f04e228:	afa60030 */ 	sw	$a2,0x30($sp)
/*  f04e22c:	0c008dda */ 	jal	func00023768
/*  f04e230:	afa80034 */ 	sw	$t0,0x34($sp)
/*  f04e234:	244affff */ 	addiu	$t2,$v0,-1
/*  f04e238:	448a2000 */ 	mtc1	$t2,$f4
/*  f04e23c:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f04e240:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f04e244:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f04e248:	8fa60030 */ 	lw	$a2,0x30($sp)
/*  f04e24c:	8fa80034 */ 	lw	$t0,0x34($sp)
/*  f04e250:	10000004 */ 	beqz	$zero,.L0f04e264
/*  f04e254:	46802020 */ 	cvt.s.w	$f0,$f4
.L0f04e258:
/*  f04e258:	44883000 */ 	mtc1	$t0,$f6
/*  f04e25c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f04e260:	46803020 */ 	cvt.s.w	$f0,$f6
.L0f04e264:
/*  f04e264:	3401ffff */ 	dli	$at,0xffff
.L0f04e268:
/*  f04e268:	14c10004 */ 	bne	$a2,$at,.L0f04e27c
/*  f04e26c:	3c01bf80 */ 	lui	$at,0xbf80
/*  f04e270:	44816000 */ 	mtc1	$at,$f12
/*  f04e274:	10000004 */ 	beqz	$zero,.L0f04e288
/*  f04e278:	00000000 */ 	sll	$zero,$zero,0x0
.L0f04e27c:
/*  f04e27c:	44864000 */ 	mtc1	$a2,$f8
/*  f04e280:	00000000 */ 	sll	$zero,$zero,0x0
/*  f04e284:	46804320 */ 	cvt.s.w	$f12,$f8
.L0f04e288:
/*  f04e288:	52000042 */ 	beqzl	$s0,.L0f04e394
/*  f04e28c:	8d2d0438 */ 	lw	$t5,0x438($t1)
/*  f04e290:	8e0b0020 */ 	lw	$t3,0x20($s0)
/*  f04e294:	02002025 */ 	or	$a0,$s0,$zero
/*  f04e298:	5160003e */ 	beqzl	$t3,.L0f04e394
/*  f04e29c:	8d2d0438 */ 	lw	$t5,0x438($t1)
/*  f04e2a0:	906c000b */ 	lbu	$t4,0xb($v1)
/*  f04e2a4:	8d2d04cc */ 	lw	$t5,0x4cc($t1)
/*  f04e2a8:	3c013f80 */ 	lui	$at,0x3f80
/*  f04e2ac:	448c8000 */ 	mtc1	$t4,$f16
/*  f04e2b0:	44815000 */ 	mtc1	$at,$f10
/*  f04e2b4:	44076000 */ 	mfc1	$a3,$f12
/*  f04e2b8:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f04e2bc:	3401fffe */ 	dli	$at,0xfffe
/*  f04e2c0:	11a0000f */ 	beqz	$t5,.L0f04e300
/*  f04e2c4:	46125083 */ 	div.s	$f2,$f10,$f18
/*  f04e2c8:	1101000b */ 	beq	$t0,$at,.L0f04e2f8
/*  f04e2cc:	3c0e800a */ 	lui	$t6,0x800a
/*  f04e2d0:	8dcede20 */ 	lw	$t6,-0x21e0($t6)
/*  f04e2d4:	3c013e80 */ 	lui	$at,0x3e80
/*  f04e2d8:	44818000 */ 	mtc1	$at,$f16
/*  f04e2dc:	448e2000 */ 	mtc1	$t6,$f4
/*  f04e2e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f04e2e4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f04e2e8:	46023202 */ 	mul.s	$f8,$f6,$f2
/*  f04e2ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f04e2f0:	46104282 */ 	mul.s	$f10,$f8,$f16
/*  f04e2f4:	460a0000 */ 	add.s	$f0,$f0,$f10
.L0f04e2f8:
/*  f04e2f8:	8e0f001c */ 	lw	$t7,0x1c($s0)
/*  f04e2fc:	a5e0003a */ 	sh	$zero,0x3a($t7)
.L0f04e300:
/*  f04e300:	90780008 */ 	lbu	$t8,0x8($v1)
/*  f04e304:	44060000 */ 	mfc1	$a2,$f0
/*  f04e308:	8fa50038 */ 	lw	$a1,0x38($sp)
/*  f04e30c:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f04e310:	90790009 */ 	lbu	$t9,0x9($v1)
/*  f04e314:	afa80034 */ 	sw	$t0,0x34($sp)
/*  f04e318:	e7a20018 */ 	swc1	$f2,0x18($sp)
/*  f04e31c:	0fc0ebd1 */ 	jal	func0f03af44
/*  f04e320:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f04e324:	8fa80034 */ 	lw	$t0,0x34($sp)
/*  f04e328:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f04e32c:	3401fffe */ 	dli	$at,0xfffe
/*  f04e330:	15010017 */ 	bne	$t0,$at,.L0f04e390
/*  f04e334:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f04e338:	02002025 */ 	or	$a0,$s0,$zero
/*  f04e33c:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f04e340:	0fc0883b */ 	jal	func0f0220ec
/*  f04e344:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f04e348:	8e04001c */ 	lw	$a0,0x1c($s0)
/*  f04e34c:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f04e350:	24010006 */ 	addiu	$at,$zero,0x6
/*  f04e354:	908a0000 */ 	lbu	$t2,0x0($a0)
/*  f04e358:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f04e35c:	5541000d */ 	bnel	$t2,$at,.L0f04e394
/*  f04e360:	8d2d0438 */ 	lw	$t5,0x438($t1)
/*  f04e364:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f04e368:	00000000 */ 	sll	$zero,$zero,0x0
/*  f04e36c:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f04e370:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f04e374:	00025880 */ 	sll	$t3,$v0,0x2
/*  f04e378:	012b6021 */ 	addu	$t4,$t1,$t3
/*  f04e37c:	8d830064 */ 	lw	$v1,0x64($t4)
/*  f04e380:	c61200b8 */ 	lwc1	$f18,0xb8($s0)
/*  f04e384:	e4720078 */ 	swc1	$f18,0x78($v1)
/*  f04e388:	c60400b8 */ 	lwc1	$f4,0xb8($s0)
/*  f04e38c:	e4640074 */ 	swc1	$f4,0x74($v1)
.L0f04e390:
/*  f04e390:	8d2d0438 */ 	lw	$t5,0x438($t1)
.L0f04e394:
/*  f04e394:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f04e398:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f04e39c:	25ae000c */ 	addiu	$t6,$t5,0xc
/*  f04e3a0:	ad2e0438 */ 	sw	$t6,0x438($t1)
/*  f04e3a4:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f04e3a8:	03e00008 */ 	jr	$ra
/*  f04e3ac:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch because the compiler adds divide-by-zero checks to the division.
// We need something like -mno-check-zero-division but that option doesn't exist
// in our version of the compiler.
//bool aiChrDoAnimation(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	u32 anim_id = cmd[3] | (cmd[2] << 8);
//	struct chrdata *chr = NULL;
//	s32 startframe = cmd[5] | (cmd[4] << 8);
//	s32 endframe = cmd[7] | (cmd[6] << 8);
//	f32 fstartframe;
//	f32 fendframe;
//
//	if (g_Vars.chrdata) {
//		chr = chrFindById(g_Vars.chrdata, cmd[10]);
//	}
//
//	if (startframe == 0xffff) {
//		fstartframe = 0;
//	} else if (startframe == 0xfffe) {
//		fstartframe = func00023768(anim_id) - 1;
//	} else {
//		fstartframe = startframe;
//	}
//
//	if (endframe == 0xffff) {
//		fendframe = -1.0;
//	} else {
//		fendframe = endframe;
//	}
//
//	if (chr && chr->unk020) {
//		f32 result = 1.0 / cmd[11];
//
//		if (g_Vars.in_cutscene) {
//			if (startframe != 0xfffe) {
//				fstartframe += var8009de20 * result * 0.25;
//			}
//
//			chr->prop->unk3a = 0;
//		}
//
//		func0f03af44(chr, anim_id, fstartframe, fendframe, cmd[8], cmd[9], result);
//
//		if (startframe == 0xfffe) {
//			func0f0220ec(chr, 1, 1);
//
//			if (chr->prop->type == PROPTYPE_PLAYER) {
//				u32 playernum = propGetPlayerNum(chr->prop);
//				struct player *player = g_Vars.players[playernum];
//				player->unk078 = chr->ground;
//				player->unk074 = chr->ground;
//			}
//		}
//	}
//
//	g_Vars.aioffset += 12;
//
//	return false;
//}

/**
 * @cmd 000c
 */
bool aiIfIdle(void)
{
	if (g_Vars.chrdata->actiontype == ACT_ANIM) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

bool func0f04e418(void)
{
	return false;
}

/**
 * @cmd 000d
 */
bool aiBeSurprised000d(void)
{
	func0f03adf4(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 000e
 */
bool aiBeSurprised000e(void)
{
	func0f03ae9c(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0032
 */
bool aiIfStopped(void)
{
	if (chrIsStopped(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0033
 */
bool aiIfChrDying(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if ((!chr || !chr->prop || chr->prop->type != PROPTYPE_PLAYER) && (!chr || !chr->unk020 || chrIsDead(chr))) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0034
 */
bool aiIfChrDeathAnimationFinished(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	bool pass;

	if (!chr || !chr->prop) {
		pass = true;
	} else {
		if (chr->prop->type == PROPTYPE_PLAYER) {
			u32 playernum = propGetPlayerNum(chr->prop);
			pass = g_Vars.players[playernum]->isdead;
		} else {
			pass = (chr->actiontype == ACT_DEAD);
		}
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 017b
 */
bool aiIfChrUnloaded(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if ((!chr || !chr->prop || chr->prop->type != PROPTYPE_PLAYER) &&
			(!chr || !chr->unk020 || chr->actiontype == ACT_DRUGGEDKO || chr->actiontype == ACT_DRUGGEDDROP || chr->actiontype == ACT_DRUGGEDCOMINGUP)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0035
 */
bool aiIfPlayerInSight(void)
{
	if (func0f03978c(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 000f
 */
bool aiStepSideways(void)
{
	if (chrTrySidestep(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0010
 */
bool aiHopSideways(void)
{
	if (chrTryJumpOut(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0011
 */
bool aiRunSideways(void)
{
	if (func0f039e28(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0012
 */
bool aiWalkAndFire(void)
{
	if (chrTryAttackWalk(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0013
 */
bool aiRunAndFire(void)
{
	if (chrTryAttackRun(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0014
 */
bool aiRollAndFire(void)
{
	if (chrTryAttackRoll(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0015
 */
bool aiAimAndFire1(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 thingid = cmd[5] | (cmd[4] << 8);
	u32 thingtype = cmd[3] | (cmd[2] << 8);

	if (func0f03a578(g_Vars.chrdata, thingtype, thingid)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 0016
 */
bool aiKneelAndFire(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 thingid = cmd[5] | (cmd[4] << 8);
	u32 thingtype = cmd[3] | (cmd[2] << 8);

	if (func0f03a644(g_Vars.chrdata, thingtype, thingid)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 01ba
 */
bool ai01ba(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 thingid = cmd[5] | (cmd[4] << 8);
	u32 thingtype = cmd[3] | (cmd[2] << 8);

	if (func0f03a6d8(g_Vars.chrdata, thingtype, thingid)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 00f0
 */
bool ai00f0(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->actiontype == ACT_ATTACK && !g_Vars.chrdata->unk058 && g_Vars.chrdata->act_attack.unk04c & 0x40) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 00f1
 */
bool aiIfAttacking(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->actiontype == ACT_ATTACK) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0017
 */
bool aiAimAndFire2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 thingid = cmd[5] | (cmd[4] << 8);
	u32 thingtype = cmd[3] | (cmd[2] << 8);

	if ((g_Vars.chrdata && func0f03a76c(g_Vars.chrdata, thingtype, thingid)) ||
			(g_Vars.hovdata && func0f07b038(g_Vars.hovdata))) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 0018
 */
bool aiFaceEntity(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 thingid = cmd[5] | (cmd[4] << 8);
	u32 thingtype = cmd[3] | (cmd[2] << 8);

	if (chrFaceEntity(g_Vars.chrdata, thingtype, thingid)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 0019
 */
GLOBAL_ASM(
glabel ai0019
/*  f04ee10:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f04ee14:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f04ee18:	8c4e0434 */ 	lw	$t6,0x434($v0)
/*  f04ee1c:	8c4f0438 */ 	lw	$t7,0x438($v0)
/*  f04ee20:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f04ee24:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f04ee28:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f04ee2c:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f04ee30:	afa3003c */ 	sw	$v1,0x3c($sp)
/*  f04ee34:	0fc126d1 */ 	jal	chrFindById
/*  f04ee38:	8c440424 */ 	lw	$a0,0x424($v0)
/*  f04ee3c:	3c198007 */ 	lui	$t9,%hi(var80068fe0)
/*  f04ee40:	afa20038 */ 	sw	$v0,0x38($sp)
/*  f04ee44:	27398fe0 */ 	addiu	$t9,$t9,%lo(var80068fe0)
/*  f04ee48:	8f210000 */ 	lw	$at,0x0($t9)
/*  f04ee4c:	27b8002c */ 	addiu	$t8,$sp,0x2c
/*  f04ee50:	8f2a0004 */ 	lw	$t2,0x4($t9)
/*  f04ee54:	af010000 */ 	sw	$at,0x0($t8)
/*  f04ee58:	8f210008 */ 	lw	$at,0x8($t9)
/*  f04ee5c:	af0a0004 */ 	sw	$t2,0x4($t8)
/*  f04ee60:	10400011 */ 	beqz	$v0,.L0f04eea8
/*  f04ee64:	af010008 */ 	sw	$at,0x8($t8)
/*  f04ee68:	8c4b001c */ 	lw	$t3,0x1c($v0)
/*  f04ee6c:	8fa7003c */ 	lw	$a3,0x3c($sp)
/*  f04ee70:	1160000d */ 	beqz	$t3,.L0f04eea8
/*  f04ee74:	24e70004 */ 	addiu	$a3,$a3,0x4
/*  f04ee78:	00e02025 */ 	or	$a0,$a3,$zero
/*  f04ee7c:	0fc2c74a */ 	jal	func0f0b1d28
/*  f04ee80:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f04ee84:	8fac003c */ 	lw	$t4,0x3c($sp)
/*  f04ee88:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f04ee8c:	44050000 */ 	mfc1	$a1,$f0
/*  f04ee90:	818d0003 */ 	lb	$t5,0x3($t4)
/*  f04ee94:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f04ee98:	8fa40038 */ 	lw	$a0,0x38($sp)
/*  f04ee9c:	27a6002c */ 	addiu	$a2,$sp,0x2c
/*  f04eea0:	0fc0d0cc */ 	jal	func0f034330
/*  f04eea4:	afad0014 */ 	sw	$t5,0x14($sp)
.L0f04eea8:
/*  f04eea8:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f04eeac:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f04eeb0:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f04eeb4:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f04eeb8:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f04eebc:	25cf0008 */ 	addiu	$t7,$t6,0x8
/*  f04eec0:	ac6f0438 */ 	sw	$t7,0x438($v1)
/*  f04eec4:	03e00008 */ 	jr	$ra
/*  f04eec8:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 001a
 */
GLOBAL_ASM(
glabel ai001a
/*  f04eecc:	27bdffa8 */ 	addiu	$sp,$sp,-88
/*  f04eed0:	afb20028 */ 	sw	$s2,0x28($sp)
/*  f04eed4:	3c12800a */ 	lui	$s2,%hi(g_Vars)
/*  f04eed8:	26529fc0 */ 	addiu	$s2,$s2,%lo(g_Vars)
/*  f04eedc:	8e4e0434 */ 	lw	$t6,0x434($s2)
/*  f04eee0:	8e4f0438 */ 	lw	$t7,0x438($s2)
/*  f04eee4:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f04eee8:	afb10024 */ 	sw	$s1,0x24($sp)
/*  f04eeec:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f04eef0:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f04eef4:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f04eef8:	afa20054 */ 	sw	$v0,0x54($sp)
/*  f04eefc:	0fc126d1 */ 	jal	chrFindById
/*  f04ef00:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f04ef04:	8fb80054 */ 	lw	$t8,0x54($sp)
/*  f04ef08:	00408025 */ 	or	$s0,$v0,$zero
/*  f04ef0c:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f04ef10:	0fc126d1 */ 	jal	chrFindById
/*  f04ef14:	93050003 */ 	lbu	$a1,0x3($t8)
/*  f04ef18:	12000044 */ 	beqz	$s0,.L0f04f02c
/*  f04ef1c:	00408825 */ 	or	$s1,$v0,$zero
/*  f04ef20:	50400043 */ 	beqzl	$v0,.L0f04f030
/*  f04ef24:	8e4c0438 */ 	lw	$t4,0x438($s2)
/*  f04ef28:	8e19001c */ 	lw	$t9,0x1c($s0)
/*  f04ef2c:	53200040 */ 	beqzl	$t9,.L0f04f030
/*  f04ef30:	8e4c0438 */ 	lw	$t4,0x438($s2)
/*  f04ef34:	8c48001c */ 	lw	$t0,0x1c($v0)
/*  f04ef38:	02002025 */ 	or	$a0,$s0,$zero
/*  f04ef3c:	5100003c */ 	beqzl	$t0,.L0f04f030
/*  f04ef40:	8e4c0438 */ 	lw	$t4,0x438($s2)
/*  f04ef44:	0fc0a20d */ 	jal	chrGetEquippedWeaponAttachmentWithCheck
/*  f04ef48:	00002825 */ 	or	$a1,$zero,$zero
/*  f04ef4c:	3c0a8007 */ 	lui	$t2,%hi(var80068fec)
/*  f04ef50:	254a8fec */ 	addiu	$t2,$t2,%lo(var80068fec)
/*  f04ef54:	8d410000 */ 	lw	$at,0x0($t2)
/*  f04ef58:	27a90038 */ 	addiu	$t1,$sp,0x38
/*  f04ef5c:	8d4c0004 */ 	lw	$t4,0x4($t2)
/*  f04ef60:	ad210000 */ 	sw	$at,0x0($t1)
/*  f04ef64:	8d410008 */ 	lw	$at,0x8($t2)
/*  f04ef68:	00401825 */ 	or	$v1,$v0,$zero
/*  f04ef6c:	ad2c0004 */ 	sw	$t4,0x4($t1)
/*  f04ef70:	14400005 */ 	bnez	$v0,.L0f04ef88
/*  f04ef74:	ad210008 */ 	sw	$at,0x8($t1)
/*  f04ef78:	02002025 */ 	or	$a0,$s0,$zero
/*  f04ef7c:	0fc0a20d */ 	jal	chrGetEquippedWeaponAttachmentWithCheck
/*  f04ef80:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f04ef84:	00401825 */ 	or	$v1,$v0,$zero
.L0f04ef88:
/*  f04ef88:	50400029 */ 	beqzl	$v0,.L0f04f030
/*  f04ef8c:	8e4c0438 */ 	lw	$t4,0x438($s2)
/*  f04ef90:	8e2d001c */ 	lw	$t5,0x1c($s1)
/*  f04ef94:	8e0e001c */ 	lw	$t6,0x1c($s0)
/*  f04ef98:	27a40038 */ 	addiu	$a0,$sp,0x38
/*  f04ef9c:	c5a40008 */ 	lwc1	$f4,0x8($t5)
/*  f04efa0:	c5c60008 */ 	lwc1	$f6,0x8($t6)
/*  f04efa4:	27a5003c */ 	addiu	$a1,$sp,0x3c
/*  f04efa8:	27a60040 */ 	addiu	$a2,$sp,0x40
/*  f04efac:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f04efb0:	e7a80038 */ 	swc1	$f8,0x38($sp)
/*  f04efb4:	8e18001c */ 	lw	$t8,0x1c($s0)
/*  f04efb8:	8e2f001c */ 	lw	$t7,0x1c($s1)
/*  f04efbc:	c710000c */ 	lwc1	$f16,0xc($t8)
/*  f04efc0:	c5ea000c */ 	lwc1	$f10,0xc($t7)
/*  f04efc4:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f04efc8:	e7b2003c */ 	swc1	$f18,0x3c($sp)
/*  f04efcc:	8e08001c */ 	lw	$t0,0x1c($s0)
/*  f04efd0:	8e39001c */ 	lw	$t9,0x1c($s1)
/*  f04efd4:	c5060010 */ 	lwc1	$f6,0x10($t0)
/*  f04efd8:	c7240010 */ 	lwc1	$f4,0x10($t9)
/*  f04efdc:	afa30048 */ 	sw	$v1,0x48($sp)
/*  f04efe0:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f04efe4:	0c0011e4 */ 	jal	scaleTo1
/*  f04efe8:	e7a80040 */ 	swc1	$f8,0x40($sp)
/*  f04efec:	8fa30048 */ 	lw	$v1,0x48($sp)
/*  f04eff0:	8c620004 */ 	lw	$v0,0x4($v1)
/*  f04eff4:	2447005c */ 	addiu	$a3,$v0,0x5c
/*  f04eff8:	00e02025 */ 	or	$a0,$a3,$zero
/*  f04effc:	0fc2c74a */ 	jal	func0f0b1d28
/*  f04f000:	afa70030 */ 	sw	$a3,0x30($sp)
/*  f04f004:	8e0b001c */ 	lw	$t3,0x1c($s0)
/*  f04f008:	8fa90054 */ 	lw	$t1,0x54($sp)
/*  f04f00c:	44050000 */ 	mfc1	$a1,$f0
/*  f04f010:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f04f014:	812a0004 */ 	lb	$t2,0x4($t1)
/*  f04f018:	8fa70030 */ 	lw	$a3,0x30($sp)
/*  f04f01c:	02202025 */ 	or	$a0,$s1,$zero
/*  f04f020:	27a60038 */ 	addiu	$a2,$sp,0x38
/*  f04f024:	0fc0d0cc */ 	jal	func0f034330
/*  f04f028:	afaa0014 */ 	sw	$t2,0x14($sp)
.L0f04f02c:
/*  f04f02c:	8e4c0438 */ 	lw	$t4,0x438($s2)
.L0f04f030:
/*  f04f030:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f04f034:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f04f038:	258d0005 */ 	addiu	$t5,$t4,0x5
/*  f04f03c:	ae4d0438 */ 	sw	$t5,0x438($s2)
/*  f04f040:	8fb20028 */ 	lw	$s2,0x28($sp)
/*  f04f044:	8fb10024 */ 	lw	$s1,0x24($sp)
/*  f04f048:	27bd0058 */ 	addiu	$sp,$sp,0x58
/*  f04f04c:	03e00008 */ 	jr	$ra
/*  f04f050:	00001025 */ 	or	$v0,$zero,$zero
);

//bool ai001a(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct chrdata *chr1 = chrFindById(g_Vars.chrdata, cmd[2]);
//	struct chrdata *chr2 = chrFindById(g_Vars.chrdata, cmd[3]);
//
//	if (chr1 && chr2 && chr1->prop && chr2->prop) {
//		struct attachment *attachment = chrGetEquippedWeaponAttachmentWithCheck(chr1, 0);
//		struct coord pos;
//		pos.x = var80068fec.x;
//		pos.y = var80068fec.y;
//		pos.z = var80068fec.z;
//
//		if (!attachment) {
//			attachment = chrGetEquippedWeaponAttachmentWithCheck(chr1, 1);
//		}
//
//		if (attachment) {
//			s32 weapon_id;
//			s32 thing;
//			pos.x = chr2->prop->pos.x - chr1->prop->pos.x;
//			pos.y = chr2->prop->pos.y - chr1->prop->pos.y;
//			pos.x = chr2->prop->pos.z - chr1->prop->pos.z;
//			scaleTo1(&pos.x, &pos.y, &pos.z);
//			weapon_id = attachment->weapon->weapon_id;
//			thing = func0f0b1d28(weapon_id);
//			func0f034330(chr2, thing, &pos, weapon_id);
//		}
//	}
//
//	g_Vars.aioffset += 5;
//
//	return false;
//}

/**
 * @cmd 001b
 */
bool aiConsiderGrenadeThrow(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 value2 = cmd[5] | (cmd[4] << 8);
	u32 value1 = cmd[3] | (cmd[2] << 8);

	if (chrConsiderGrenadeThrow(g_Vars.chrdata, value1, value2)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 001c
 */
bool ai001c(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 value = cmd[3] | (cmd[2] << 8);

	if (func0f03b97c(g_Vars.chrdata, value & 0xffff, cmd[4] & 0xff)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 0024
 */
bool aiSurrender(void)
{
	chrTrySurrender(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0025
 */
bool aiFadeOut(void)
{
	chrFadeOut(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0026
 */
bool aiRemoveChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop) {
		chr->hidden |= 0x20;
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0027
 */
bool ai0027(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad_id = cmd[3] | (cmd[2] << 8);

	if (func0f03b5f0(g_Vars.chrdata, pad_id)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0028
 */
bool aiActivateAlarm(void)
{
	alarmActivate();
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0029
 */
bool aiDeactivateAlarm(void)
{
	alarmDeactivate();
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 002a
 */
bool ai002a(void)
{
	if (func0f03afac(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 002b
 */
bool aiTryJogToTargetChr(void)
{
	if (chrGoToTarget(g_Vars.chrdata, SPEED_JOG)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 002c
 */
bool aiTryWalkToTargetChr(void)
{
	if (chrGoToTarget(g_Vars.chrdata, SPEED_WALK)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 002d
 */
bool aiTryRunToTargetChr(void)
{
	if (chrGoToTarget(g_Vars.chrdata, SPEED_RUN)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 002e
 */
bool ai002e(void)
{
	if (func0f03b1e0(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist,g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 002f
 */
bool aiTryJogToChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGoToChr(g_Vars.chrdata, cmd[2], SPEED_JOG)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0030
 */
bool aiTryWalkToChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGoToChr(g_Vars.chrdata, cmd[2], SPEED_WALK)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0031
 */
bool aiTryRunToChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGoToChr(g_Vars.chrdata, cmd[2], SPEED_RUN)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0036
 */
bool aiRandom(void)
{
	g_Vars.chrdata->random = random() & 0xff;
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0037
 */
bool aiIfRandomLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if ((g_Vars.chrdata && g_Vars.chrdata->random < cmd[2]) ||
			(g_Vars.hovdata && ((u8)random()) < cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0038
 */
bool aiIfRandomGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if ((g_Vars.chrdata && g_Vars.chrdata->random > cmd[2]) ||
			(g_Vars.hovdata && ((u8)random()) > cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 001d
 */
bool aiJogToPad(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad = cmd[3] | (cmd[2] << 8);

	func0f03a894(g_Vars.chrdata, pad, SPEED_JOG);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 001e
 */
bool aiGoToPadPreset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	switch (cmd[2]) {
	case 0:
		func0f03a894(g_Vars.chrdata, g_Vars.chrdata->padpreset1, SPEED_WALK);
		break;
	case 1:
		func0f03a894(g_Vars.chrdata, g_Vars.chrdata->padpreset1, SPEED_JOG);
		break;
	default:
		func0f03a894(g_Vars.chrdata, g_Vars.chrdata->padpreset1, SPEED_RUN);
		break;
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 001f
 */
bool aiWalkToPad(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad = cmd[3] | (cmd[2] << 8);

	func0f03a894(g_Vars.chrdata, pad, SPEED_WALK);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0020
 */
bool aiRunToPad(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad = cmd[3] | (cmd[2] << 8);

	func0f03a894(g_Vars.chrdata, pad, SPEED_RUN);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0021
 */
bool aiSetPath(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	chrSetPath(g_Vars.chrdata, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0022
 */
bool aiStartPath(void)
{
	chrStartPath(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0039
 */
bool aiIfChrAlarmActivate(void)
{
	if (func0f04a2b4(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0023
 */
bool aiIfPathStarted(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->actiontype == ACT_PATROL || (g_Vars.chrdata->actiontype == ACT_GOPOS && (g_Vars.chrdata->unk065 & 8))) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 003a
 */
bool aiIfAlarmActive(void)
{
	if (alarmIsActive()) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 003b
 */
bool aiIfAlarmInactive(void)
{
	if (func0f090520()) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * Either a check if chr is alerted or a check if they can hear gunfire.
 * Probably the latter.
 *
 * @cmd 003c
 */
bool ai003c(void)
{
	if (chrHasHiddenFlag00000002(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 003d
 */
bool aiIfSawInjury(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrSawInjury(g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 003e
 */
bool aiIfSawDeath(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrSawDeath(g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 003f
 */
bool aiIfSeesPlayer(void)
{
	if ((g_Vars.chrdata && func0f039368(g_Vars.chrdata)) ||
			(g_Vars.hovdata && func0f07ae18(g_Vars.hovdata, 0x40) && func0f07af34(g_Vars.hovdata))) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 017a
 */
bool ai017a(void)
{
	if ((g_Vars.chrdata && g_Vars.chrdata->prop && func0f0391ec(g_Vars.chrdata, &g_Vars.chrdata->prop->pos, &g_Vars.chrdata->prop->room, 1))
			|| (g_Vars.hovdata && func0f07ae18(g_Vars.hovdata, 0x40) && func0f07af34(g_Vars.hovdata))) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0040
 */
bool ai0040(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	if (func0f04c6b4(g_Vars.chrdata, flags)) {
		cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 0041
 */
bool ai0041(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 value = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	if (func0f04c71c(g_Vars.chrdata, value)) {
		cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 0042
 */
bool aiIfInLoadedRoom(void)
{
	if (chrIsInLoadedRoom(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0043
 */
bool aiIfSawTargetRecently(void)
{
	if (chrSawTargetRecently(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0044
 */
bool aiIfHeardTargetRecently(void)
{
	if (chrHeardTargetRecently(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0045
 */
bool ai0045(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && func0f0393b4(g_Vars.chrdata, &chr->prop->pos, &chr->prop->room)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0046
 */
bool aiIfNeverBeenOnScreen(void)
{
	if ((g_Vars.chrdata->chrflags & CHRCFLAG_NEVER_BEEN_ON_SCREEN) == 0) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0047
 */
bool ai0047(void)
{
	if (g_Vars.chrdata->prop->flags & 0xc2) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0048
 */
GLOBAL_ASM(
glabel ai0048
/*  f0502e4:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f0502e8:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f0502ec:	3c14800a */ 	lui	$s4,%hi(g_Vars)
/*  f0502f0:	26949fc0 */ 	addiu	$s4,$s4,%lo(g_Vars)
/*  f0502f4:	8e8e0434 */ 	lw	$t6,0x434($s4)
/*  f0502f8:	8e8f0438 */ 	lw	$t7,0x438($s4)
/*  f0502fc:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f050300:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f050304:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f050308:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f05030c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f050310:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f050314:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f050318:	0fc126d1 */ 	jal	chrFindById
/*  f05031c:	8e840424 */ 	lw	$a0,0x424($s4)
/*  f050320:	00408825 */ 	or	$s1,$v0,$zero
/*  f050324:	10400015 */ 	beqz	$v0,.L0f05037c
/*  f050328:	00009825 */ 	or	$s3,$zero,$zero
/*  f05032c:	8c43001c */ 	lw	$v1,0x1c($v0)
/*  f050330:	10600012 */ 	beqz	$v1,.L0f05037c
/*  f050334:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050338:	84780028 */ 	lh	$t8,0x28($v1)
/*  f05033c:	2412ffff */ 	addiu	$s2,$zero,-1
/*  f050340:	00008025 */ 	or	$s0,$zero,$zero
/*  f050344:	1258000d */ 	beq	$s2,$t8,.L0f05037c
/*  f050348:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05034c:	84640028 */ 	lh	$a0,0x28($v1)
.L0f050350:
/*  f050350:	0fc575ba */ 	jal	func0f15d6e8
/*  f050354:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050358:	50400003 */ 	beqzl	$v0,.L0f050368
/*  f05035c:	8e28001c */ 	lw	$t0,0x1c($s1)
/*  f050360:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f050364:	8e28001c */ 	lw	$t0,0x1c($s1)
.L0f050368:
/*  f050368:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f05036c:	01104821 */ 	addu	$t1,$t0,$s0
/*  f050370:	85240028 */ 	lh	$a0,0x28($t1)
/*  f050374:	1644fff6 */ 	bne	$s2,$a0,.L0f050350
/*  f050378:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05037c:
/*  f05037c:	52600009 */ 	beqzl	$s3,.L0f0503a4
/*  f050380:	8e8a0438 */ 	lw	$t2,0x438($s4)
/*  f050384:	8e840434 */ 	lw	$a0,0x434($s4)
/*  f050388:	8e850438 */ 	lw	$a1,0x438($s4)
/*  f05038c:	00851021 */ 	addu	$v0,$a0,$a1
/*  f050390:	0fc13583 */ 	jal	chraiGoToLabel
/*  f050394:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f050398:	10000004 */ 	beqz	$zero,.L0f0503ac
/*  f05039c:	ae820438 */ 	sw	$v0,0x438($s4)
/*  f0503a0:	8e8a0438 */ 	lw	$t2,0x438($s4)
.L0f0503a4:
/*  f0503a4:	254b0004 */ 	addiu	$t3,$t2,0x4
/*  f0503a8:	ae8b0438 */ 	sw	$t3,0x438($s4)
.L0f0503ac:
/*  f0503ac:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f0503b0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f0503b4:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f0503b8:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f0503bc:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f0503c0:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f0503c4:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f0503c8:	03e00008 */ 	jr	$ra
/*  f0503cc:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0049
 */
bool ai0049(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad_id = cmd[3] | (cmd[2] << 8);
	s32 value2 = chrGetPadRoom(g_Vars.chrdata, pad_id);

	if (value2 >= 0 && func0f15d6e8(value2)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 004a
 */
bool ai004a(void)
{
	if (func0f049fcc(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 004b
 */
bool aiIfNearMiss(void)
{
	if (chrResetNearMiss(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 004c
 */
GLOBAL_ASM(
glabel ai004c
/*  f050534:	27bdfda8 */ 	addiu	$sp,$sp,-600
/*  f050538:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f05053c:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f050540:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f050544:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f050548:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f05054c:	afb70030 */ 	sw	$s7,0x30($sp)
/*  f050550:	afb6002c */ 	sw	$s6,0x2c($sp)
/*  f050554:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f050558:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f05055c:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f050560:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f050564:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f050568:	8dc2001c */ 	lw	$v0,0x1c($t6)
/*  f05056c:	27b30048 */ 	addiu	$s3,$sp,0x48
/*  f050570:	00008825 */ 	or	$s1,$zero,$zero
/*  f050574:	02602825 */ 	or	$a1,$s3,$zero
/*  f050578:	24060100 */ 	addiu	$a2,$zero,0x100
/*  f05057c:	0fc197e0 */ 	jal	func0f065f80
/*  f050580:	24440028 */ 	addiu	$a0,$v0,0x28
/*  f050584:	87af0048 */ 	lh	$t7,0x48($sp)
/*  f050588:	02609025 */ 	or	$s2,$s3,$zero
/*  f05058c:	27b80048 */ 	addiu	$t8,$sp,0x48
/*  f050590:	05e00033 */ 	bltz	$t7,.L0f050660
/*  f050594:	24170007 */ 	addiu	$s7,$zero,0x7
/*  f050598:	87030000 */ 	lh	$v1,0x0($t8)
/*  f05059c:	24160001 */ 	addiu	$s6,$zero,0x1
/*  f0505a0:	24150004 */ 	addiu	$s5,$zero,0x4
/*  f0505a4:	24140048 */ 	addiu	$s4,$zero,0x48
/*  f0505a8:	3c130010 */ 	lui	$s3,0x10
.L0f0505ac:
/*  f0505ac:	00740019 */ 	multu	$v1,$s4
/*  f0505b0:	8e080338 */ 	lw	$t0,0x338($s0)
/*  f0505b4:	0000c812 */ 	mflo	$t9
/*  f0505b8:	03282821 */ 	addu	$a1,$t9,$t0
/*  f0505bc:	90a20000 */ 	lbu	$v0,0x0($a1)
/*  f0505c0:	8ca40004 */ 	lw	$a0,0x4($a1)
/*  f0505c4:	16a2000b */ 	bne	$s5,$v0,.L0f0505f4
/*  f0505c8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0505cc:	8c890040 */ 	lw	$t1,0x40($a0)
/*  f0505d0:	01335024 */ 	and	$t2,$t1,$s3
/*  f0505d4:	5140001f */ 	beqzl	$t2,.L0f050654
/*  f0505d8:	86430002 */ 	lh	$v1,0x2($s2)
/*  f0505dc:	0fc0e556 */ 	jal	func0f039558
/*  f0505e0:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f0505e4:	5040001b */ 	beqzl	$v0,.L0f050654
/*  f0505e8:	86430002 */ 	lh	$v1,0x2($s2)
/*  f0505ec:	10000018 */ 	beqz	$zero,.L0f050650
/*  f0505f0:	24110001 */ 	addiu	$s1,$zero,0x1
.L0f0505f4:
/*  f0505f4:	16c2000f */ 	bne	$s6,$v0,.L0f050634
/*  f0505f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0505fc:	8c8b0040 */ 	lw	$t3,0x40($a0)
/*  f050600:	01736024 */ 	and	$t4,$t3,$s3
/*  f050604:	15800005 */ 	bnez	$t4,.L0f05061c
/*  f050608:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05060c:	0fc21a6a */ 	jal	objIsHealthy
/*  f050610:	afa5024c */ 	sw	$a1,0x24c($sp)
/*  f050614:	1440000e */ 	bnez	$v0,.L0f050650
/*  f050618:	8fa5024c */ 	lw	$a1,0x24c($sp)
.L0f05061c:
/*  f05061c:	0fc0e556 */ 	jal	func0f039558
/*  f050620:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f050624:	5040000b */ 	beqzl	$v0,.L0f050654
/*  f050628:	86430002 */ 	lh	$v1,0x2($s2)
/*  f05062c:	10000008 */ 	beqz	$zero,.L0f050650
/*  f050630:	24110001 */ 	addiu	$s1,$zero,0x1
.L0f050634:
/*  f050634:	56e20007 */ 	bnel	$s7,$v0,.L0f050654
/*  f050638:	86430002 */ 	lh	$v1,0x2($s2)
/*  f05063c:	0fc0e556 */ 	jal	func0f039558
/*  f050640:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f050644:	50400003 */ 	beqzl	$v0,.L0f050654
/*  f050648:	86430002 */ 	lh	$v1,0x2($s2)
/*  f05064c:	24110001 */ 	addiu	$s1,$zero,0x1
.L0f050650:
/*  f050650:	86430002 */ 	lh	$v1,0x2($s2)
.L0f050654:
/*  f050654:	26520002 */ 	addiu	$s2,$s2,0x2
/*  f050658:	0461ffd4 */ 	bgez	$v1,.L0f0505ac
/*  f05065c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f050660:
/*  f050660:	52200009 */ 	beqzl	$s1,.L0f050688
/*  f050664:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f050668:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f05066c:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f050670:	00851021 */ 	addu	$v0,$a0,$a1
/*  f050674:	0fc13583 */ 	jal	chraiGoToLabel
/*  f050678:	90460002 */ 	lbu	$a2,0x2($v0)
/*  f05067c:	10000004 */ 	beqz	$zero,.L0f050690
/*  f050680:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f050684:	8e0d0438 */ 	lw	$t5,0x438($s0)
.L0f050688:
/*  f050688:	25ae0003 */ 	addiu	$t6,$t5,0x3
/*  f05068c:	ae0e0438 */ 	sw	$t6,0x438($s0)
.L0f050690:
/*  f050690:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f050694:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f050698:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f05069c:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f0506a0:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f0506a4:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f0506a8:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f0506ac:	8fb6002c */ 	lw	$s6,0x2c($sp)
/*  f0506b0:	8fb70030 */ 	lw	$s7,0x30($sp)
/*  f0506b4:	27bd0258 */ 	addiu	$sp,$sp,0x258
/*  f0506b8:	03e00008 */ 	jr	$ra
/*  f0506bc:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 004e
 */
bool ai004e(void)
{
	bool pass;
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[4] == 0) {
		if (cmd[3]) {
			pass = func0f048e74(g_Vars.chrdata, cmd[2]);
		} else {
			pass = func0f048f20(g_Vars.chrdata, cmd[2]);
		}
	} else {
		pass = g_Vars.chrdata->yvisang && func0f048f20(g_Vars.chrdata, g_Vars.chrdata->yvisang) == 0;
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 004d
 */
GLOBAL_ASM(
glabel ai004d
/*  f05078c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f050790:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f050794:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f050798:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05079c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f0507a0:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0507a4:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f0507a8:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f0507ac:	0fc122d3 */ 	jal	chrGetAngleToTarget
/*  f0507b0:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f0507b4:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f0507b8:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0507bc:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0507c0:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f0507c4:	3c014f80 */ 	lui	$at,0x4f80
/*  f0507c8:	44982000 */ 	mtc1	$t8,$f4
/*  f0507cc:	07010004 */ 	bgez	$t8,.L0f0507e0
/*  f0507d0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0507d4:	44814000 */ 	mtc1	$at,$f8
/*  f0507d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0507dc:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f0507e0:
/*  f0507e0:	3c017f1b */ 	lui	$at,%hi(var7f1a9c30)
/*  f0507e4:	c42a9c30 */ 	lwc1	$f10,%lo(var7f1a9c30)($at)
/*  f0507e8:	3c013b80 */ 	lui	$at,0x3b80
/*  f0507ec:	44819000 */ 	mtc1	$at,$f18
/*  f0507f0:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f0507f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0507f8:	46128102 */ 	mul.s	$f4,$f16,$f18
/*  f0507fc:	4604003c */ 	c.lt.s	$f0,$f4
/*  f050800:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050804:	45000009 */ 	bc1f	.L0f05082c
/*  f050808:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05080c:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f050810:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f050814:	0fc13583 */ 	jal	chraiGoToLabel
/*  f050818:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f05081c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f050820:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f050824:	10000004 */ 	beqz	$zero,.L0f050838
/*  f050828:	ac620438 */ 	sw	$v0,0x438($v1)
.L0f05082c:
/*  f05082c:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f050830:	27280004 */ 	addiu	$t0,$t9,0x4
/*  f050834:	ac680438 */ 	sw	$t0,0x438($v1)
.L0f050838:
/*  f050838:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05083c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f050840:	00001025 */ 	or	$v0,$zero,$zero
/*  f050844:	03e00008 */ 	jr	$ra
/*  f050848:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to rodata address. Will match after all trailing rodata in this
// file is matched.
//bool ai004d(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//
//	if (chrGetAngleToTarget(g_Vars.chrdata) < cmd[2] * 6.282185077f * 0.00390625f) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//	} else {
//		g_Vars.aioffset += 4;
//	}
//
//	return false;
//}

/**
 * @cmd 004f
 */
GLOBAL_ASM(
glabel ai004f
/*  f05084c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f050850:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f050854:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f050858:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05085c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f050860:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f050864:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f050868:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f05086c:	0fc122d3 */ 	jal	chrGetAngleToTarget
/*  f050870:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f050874:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f050878:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05087c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f050880:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f050884:	3c014f80 */ 	lui	$at,0x4f80
/*  f050888:	44982000 */ 	mtc1	$t8,$f4
/*  f05088c:	07010004 */ 	bgez	$t8,.L0f0508a0
/*  f050890:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f050894:	44814000 */ 	mtc1	$at,$f8
/*  f050898:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05089c:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f0508a0:
/*  f0508a0:	3c017f1b */ 	lui	$at,%hi(var7f1a9c34)
/*  f0508a4:	c42a9c34 */ 	lwc1	$f10,%lo(var7f1a9c34)($at)
/*  f0508a8:	3c013b80 */ 	lui	$at,0x3b80
/*  f0508ac:	44819000 */ 	mtc1	$at,$f18
/*  f0508b0:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f0508b4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0508b8:	46128102 */ 	mul.s	$f4,$f16,$f18
/*  f0508bc:	4600203c */ 	c.lt.s	$f4,$f0
/*  f0508c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0508c4:	45000009 */ 	bc1f	.L0f0508ec
/*  f0508c8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0508cc:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f0508d0:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f0508d4:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0508d8:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f0508dc:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0508e0:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0508e4:	10000004 */ 	beqz	$zero,.L0f0508f8
/*  f0508e8:	ac620438 */ 	sw	$v0,0x438($v1)
.L0f0508ec:
/*  f0508ec:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f0508f0:	27280004 */ 	addiu	$t0,$t9,0x4
/*  f0508f4:	ac680438 */ 	sw	$t0,0x438($v1)
.L0f0508f8:
/*  f0508f8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0508fc:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f050900:	00001025 */ 	or	$v0,$zero,$zero
/*  f050904:	03e00008 */ 	jr	$ra
/*  f050908:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to rodata address. Will match after all trailing rodata in this
// file is matched.
//bool ai004f(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//
//	if (chrGetAngleToTarget(g_Vars.chrdata) > cmd[2] * 6.282185077f * 0.00390625f) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//	} else {
//		g_Vars.aioffset += 4;
//	}
//
//	return false;
//}

/**
 * @cmd 0050
 */
bool ai0050(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f049068(g_Vars.chrdata, cmd[2], 0)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0051
 */
bool ai0051(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (!func0f049068(g_Vars.chrdata, cmd[2], 0)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0052
 */
bool aiIfDistanceToTargetLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) * (f32)10;

	if (chrGetDistanceToTarget(g_Vars.chrdata) < distance) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0053
 */
bool aiIfDistanceToTargetGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) * (f32)10;

	if (chrGetDistanceToTarget(g_Vars.chrdata) > distance) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0054
 */
GLOBAL_ASM(
glabel aiIfChrDistanceToPadLessThan
/*  f050b64:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f050b68:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f050b6c:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f050b70:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f050b74:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f050b78:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050b7c:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f050b80:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f050b84:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f050b88:	90e50002 */ 	lbu	$a1,0x2($a3)
/*  f050b8c:	0fc126d1 */ 	jal	chrFindById
/*  f050b90:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f050b94:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f050b98:	3c014120 */ 	lui	$at,0x4120
/*  f050b9c:	44814000 */ 	mtc1	$at,$f8
/*  f050ba0:	90ea0003 */ 	lbu	$t2,0x3($a3)
/*  f050ba4:	90ec0004 */ 	lbu	$t4,0x4($a3)
/*  f050ba8:	90f80005 */ 	lbu	$t8,0x5($a3)
/*  f050bac:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f050bb0:	016c6825 */ 	or	$t5,$t3,$t4
/*  f050bb4:	448d2000 */ 	mtc1	$t5,$f4
/*  f050bb8:	90e80006 */ 	lbu	$t0,0x6($a3)
/*  f050bbc:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f050bc0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f050bc4:	03281825 */ 	or	$v1,$t9,$t0
/*  f050bc8:	3065ffff */ 	andi	$a1,$v1,0xffff
/*  f050bcc:	24012328 */ 	addiu	$at,$zero,0x2328
/*  f050bd0:	00402025 */ 	or	$a0,$v0,$zero
/*  f050bd4:	46083082 */ 	mul.s	$f2,$f6,$f8
/*  f050bd8:	14a10003 */ 	bne	$a1,$at,.L0f050be8
/*  f050bdc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050be0:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f050be4:	95c50128 */ 	lhu	$a1,0x128($t6)
.L0f050be8:
/*  f050be8:	10400012 */ 	beqz	$v0,.L0f050c34
/*  f050bec:	28a12328 */ 	slti	$at,$a1,0x2328
/*  f050bf0:	50200011 */ 	beqzl	$at,.L0f050c38
/*  f050bf4:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050bf8:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f050bfc:	0fc124bb */ 	jal	chrGetDistanceToPad
/*  f050c00:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f050c04:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f050c08:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f050c0c:	4602003c */ 	c.lt.s	$f0,$f2
/*  f050c10:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050c14:	45020008 */ 	bc1fl	.L0f050c38
/*  f050c18:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050c1c:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f050c20:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f050c24:	0fc13583 */ 	jal	chraiGoToLabel
/*  f050c28:	90e60007 */ 	lbu	$a2,0x7($a3)
/*  f050c2c:	10000004 */ 	beqz	$zero,.L0f050c40
/*  f050c30:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f050c34:
/*  f050c34:	8e0f0438 */ 	lw	$t7,0x438($s0)
.L0f050c38:
/*  f050c38:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f050c3c:	ae180438 */ 	sw	$t8,0x438($s0)
.L0f050c40:
/*  f050c40:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f050c44:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f050c48:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f050c4c:	03e00008 */ 	jr	$ra
/*  f050c50:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 01df
 */
GLOBAL_ASM(
glabel aiIfChrSameFloorDistanceToPadLessThan
/*  f050c54:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f050c58:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f050c5c:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f050c60:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f050c64:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f050c68:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050c6c:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f050c70:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f050c74:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f050c78:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f050c7c:	0fc126d1 */ 	jal	chrFindById
/*  f050c80:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f050c84:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f050c88:	3c014120 */ 	lui	$at,0x4120
/*  f050c8c:	44814000 */ 	mtc1	$at,$f8
/*  f050c90:	906a0003 */ 	lbu	$t2,0x3($v1)
/*  f050c94:	906c0004 */ 	lbu	$t4,0x4($v1)
/*  f050c98:	90780005 */ 	lbu	$t8,0x5($v1)
/*  f050c9c:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f050ca0:	016c6825 */ 	or	$t5,$t3,$t4
/*  f050ca4:	448d2000 */ 	mtc1	$t5,$f4
/*  f050ca8:	90680006 */ 	lbu	$t0,0x6($v1)
/*  f050cac:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f050cb0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f050cb4:	03282025 */ 	or	$a0,$t9,$t0
/*  f050cb8:	00403025 */ 	or	$a2,$v0,$zero
/*  f050cbc:	3085ffff */ 	andi	$a1,$a0,0xffff
/*  f050cc0:	24012328 */ 	addiu	$at,$zero,0x2328
/*  f050cc4:	00c02025 */ 	or	$a0,$a2,$zero
/*  f050cc8:	46083082 */ 	mul.s	$f2,$f6,$f8
/*  f050ccc:	14a10003 */ 	bne	$a1,$at,.L0f050cdc
/*  f050cd0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050cd4:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f050cd8:	95c50128 */ 	lhu	$a1,0x128($t6)
.L0f050cdc:
/*  f050cdc:	50400011 */ 	beqzl	$v0,.L0f050d24
/*  f050ce0:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050ce4:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f050ce8:	0fc124e0 */ 	jal	chrGetSameFloorDistanceToPad
/*  f050cec:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f050cf0:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f050cf4:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f050cf8:	4602003c */ 	c.lt.s	$f0,$f2
/*  f050cfc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050d00:	45020008 */ 	bc1fl	.L0f050d24
/*  f050d04:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050d08:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f050d0c:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f050d10:	0fc13583 */ 	jal	chraiGoToLabel
/*  f050d14:	90660007 */ 	lbu	$a2,0x7($v1)
/*  f050d18:	10000004 */ 	beqz	$zero,.L0f050d2c
/*  f050d1c:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f050d20:	8e0f0438 */ 	lw	$t7,0x438($s0)
.L0f050d24:
/*  f050d24:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f050d28:	ae180438 */ 	sw	$t8,0x438($s0)
.L0f050d2c:
/*  f050d2c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f050d30:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f050d34:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f050d38:	03e00008 */ 	jr	$ra
/*  f050d3c:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0055
 */
GLOBAL_ASM(
glabel aiIfChrDistanceToPadGreaterThan
/*  f050d40:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f050d44:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f050d48:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f050d4c:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f050d50:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f050d54:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050d58:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f050d5c:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f050d60:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f050d64:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f050d68:	0fc126d1 */ 	jal	chrFindById
/*  f050d6c:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f050d70:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f050d74:	3c014120 */ 	lui	$at,0x4120
/*  f050d78:	44814000 */ 	mtc1	$at,$f8
/*  f050d7c:	906a0003 */ 	lbu	$t2,0x3($v1)
/*  f050d80:	906c0004 */ 	lbu	$t4,0x4($v1)
/*  f050d84:	90780005 */ 	lbu	$t8,0x5($v1)
/*  f050d88:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f050d8c:	016c6825 */ 	or	$t5,$t3,$t4
/*  f050d90:	448d2000 */ 	mtc1	$t5,$f4
/*  f050d94:	90680006 */ 	lbu	$t0,0x6($v1)
/*  f050d98:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f050d9c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f050da0:	03282025 */ 	or	$a0,$t9,$t0
/*  f050da4:	3089ffff */ 	andi	$t1,$a0,0xffff
/*  f050da8:	24012328 */ 	addiu	$at,$zero,0x2328
/*  f050dac:	00403025 */ 	or	$a2,$v0,$zero
/*  f050db0:	01202025 */ 	or	$a0,$t1,$zero
/*  f050db4:	46083082 */ 	mul.s	$f2,$f6,$f8
/*  f050db8:	15210003 */ 	bne	$t1,$at,.L0f050dc8
/*  f050dbc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050dc0:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f050dc4:	95c40128 */ 	lhu	$a0,0x128($t6)
.L0f050dc8:
/*  f050dc8:	10400013 */ 	beqz	$v0,.L0f050e18
/*  f050dcc:	28812328 */ 	slti	$at,$a0,0x2328
/*  f050dd0:	10200011 */ 	beqz	$at,.L0f050e18
/*  f050dd4:	00802825 */ 	or	$a1,$a0,$zero
/*  f050dd8:	00c02025 */ 	or	$a0,$a2,$zero
/*  f050ddc:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f050de0:	0fc124bb */ 	jal	chrGetDistanceToPad
/*  f050de4:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f050de8:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f050dec:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f050df0:	4600103c */ 	c.lt.s	$f2,$f0
/*  f050df4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f050df8:	45020008 */ 	bc1fl	.L0f050e1c
/*  f050dfc:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f050e00:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f050e04:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f050e08:	0fc13583 */ 	jal	chraiGoToLabel
/*  f050e0c:	90660007 */ 	lbu	$a2,0x7($v1)
/*  f050e10:	10000004 */ 	beqz	$zero,.L0f050e24
/*  f050e14:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f050e18:
/*  f050e18:	8e0f0438 */ 	lw	$t7,0x438($s0)
.L0f050e1c:
/*  f050e1c:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f050e20:	ae180438 */ 	sw	$t8,0x438($s0)
.L0f050e24:
/*  f050e24:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f050e28:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f050e2c:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f050e30:	03e00008 */ 	jr	$ra
/*  f050e34:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0056
 */
bool aiIfDistanceToChrLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 cutoff = (cmd[3] | (cmd[2] << 8)) * 10.0f;

	if (chrGetDistanceToChr(g_Vars.chrdata, cmd[4]) < cutoff) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 0057
 */
bool aiIfDistanceToChrGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 cutoff = (cmd[3] | (cmd[2] << 8)) * 10.0f;

	if (chrGetDistanceToChr(g_Vars.chrdata, cmd[4]) > cutoff) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 0058
 */
bool ai0058(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) * 10.0f;

	if (func0f04a76c(g_Vars.chrdata, distance)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0059
 */
GLOBAL_ASM(
glabel aiIfDistanceFromTargetToPadLessThan
/*  f05103c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f051040:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f051044:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f051048:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05104c:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f051050:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f051054:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f051058:	904a0002 */ 	lbu	$t2,0x2($v0)
/*  f05105c:	904c0003 */ 	lbu	$t4,0x3($v0)
/*  f051060:	3c014120 */ 	lui	$at,0x4120
/*  f051064:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f051068:	016c6825 */ 	or	$t5,$t3,$t4
/*  f05106c:	448d2000 */ 	mtc1	$t5,$f4
/*  f051070:	44814000 */ 	mtc1	$at,$f8
/*  f051074:	90580004 */ 	lbu	$t8,0x4($v0)
/*  f051078:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f05107c:	90480005 */ 	lbu	$t0,0x5($v0)
/*  f051080:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f051084:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f051088:	03283025 */ 	or	$a2,$t9,$t0
/*  f05108c:	30c5ffff */ 	andi	$a1,$a2,0xffff
/*  f051090:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f051094:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f051098:	0fc1274d */ 	jal	chrGetDistanceFromTargetToPad
/*  f05109c:	e7aa001c */ 	swc1	$f10,0x1c($sp)
/*  f0510a0:	c7b0001c */ 	lwc1	$f16,0x1c($sp)
/*  f0510a4:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0510a8:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0510ac:	4610003c */ 	c.lt.s	$f0,$f16
/*  f0510b0:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f0510b4:	4502000a */ 	bc1fl	.L0f0510e0
/*  f0510b8:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f0510bc:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f0510c0:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f0510c4:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0510c8:	90460006 */ 	lbu	$a2,0x6($v0)
/*  f0510cc:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0510d0:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0510d4:	10000004 */ 	beqz	$zero,.L0f0510e8
/*  f0510d8:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f0510dc:	8c6e0438 */ 	lw	$t6,0x438($v1)
.L0f0510e0:
/*  f0510e0:	25cf0007 */ 	addiu	$t7,$t6,0x7
/*  f0510e4:	ac6f0438 */ 	sw	$t7,0x438($v1)
.L0f0510e8:
/*  f0510e8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0510ec:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f0510f0:	00001025 */ 	or	$v0,$zero,$zero
/*  f0510f4:	03e00008 */ 	jr	$ra
/*  f0510f8:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 005a
 */
GLOBAL_ASM(
glabel aiIfDistanceFromTargetToPadGreaterThan
/*  f0510fc:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f051100:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f051104:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f051108:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05110c:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f051110:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f051114:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f051118:	904a0002 */ 	lbu	$t2,0x2($v0)
/*  f05111c:	904c0003 */ 	lbu	$t4,0x3($v0)
/*  f051120:	3c014120 */ 	lui	$at,0x4120
/*  f051124:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f051128:	016c6825 */ 	or	$t5,$t3,$t4
/*  f05112c:	448d2000 */ 	mtc1	$t5,$f4
/*  f051130:	44814000 */ 	mtc1	$at,$f8
/*  f051134:	90580004 */ 	lbu	$t8,0x4($v0)
/*  f051138:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f05113c:	90480005 */ 	lbu	$t0,0x5($v0)
/*  f051140:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f051144:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f051148:	03283025 */ 	or	$a2,$t9,$t0
/*  f05114c:	30c5ffff */ 	andi	$a1,$a2,0xffff
/*  f051150:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f051154:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f051158:	0fc1274d */ 	jal	chrGetDistanceFromTargetToPad
/*  f05115c:	e7aa001c */ 	swc1	$f10,0x1c($sp)
/*  f051160:	c7b0001c */ 	lwc1	$f16,0x1c($sp)
/*  f051164:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f051168:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05116c:	4600803c */ 	c.lt.s	$f16,$f0
/*  f051170:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f051174:	4502000a */ 	bc1fl	.L0f0511a0
/*  f051178:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f05117c:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f051180:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f051184:	0fc13583 */ 	jal	chraiGoToLabel
/*  f051188:	90460006 */ 	lbu	$a2,0x6($v0)
/*  f05118c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f051190:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f051194:	10000004 */ 	beqz	$zero,.L0f0511a8
/*  f051198:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f05119c:	8c6e0438 */ 	lw	$t6,0x438($v1)
.L0f0511a0:
/*  f0511a0:	25cf0007 */ 	addiu	$t7,$t6,0x7
/*  f0511a4:	ac6f0438 */ 	sw	$t7,0x438($v1)
.L0f0511a8:
/*  f0511a8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0511ac:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f0511b0:	00001025 */ 	or	$v0,$zero,$zero
/*  f0511b4:	03e00008 */ 	jr	$ra
/*  f0511b8:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 005b
 */
bool aiIfChrInRoom(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	u16 pad_id = cmd[5] | (cmd[4] << 8);
	s32 room = chrGetPadRoom(g_Vars.chrdata, pad_id);

	if ((cmd[3] == 0 && room >= 0 && chr && chr->prop && chr->prop->room == room) ||
			(cmd[3] == 1 && chr && chr->prop && chr->prop->room == g_Vars.chrdata->roomtosearch)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
		return false;
	}

	if (cmd[3] == 2 && stageGetIndex(g_Vars.stagenum) == STAGEINDEX_G5BUILDING) {
		s32 i;
		bool pass = false;

		for (i = 0; i < (g_Vars.players[0] ? 1 : 0) + (g_Vars.players[1] ? 1 : 0) + (g_Vars.players[2] ? 1 : 0) + (g_Vars.players[3] ? 1 : 0); i++) {
			if (g_Vars.players[i]->eyespy && g_Vars.players[i]->eyespy->prop &&
					chrGetDistanceToPad(g_Vars.players[i]->eyespy->prop->chr, pad_id) < 150.0f) {
				pass = true;
			}
		}

		if (pass == true) {
			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
		} else {
			g_Vars.aioffset += 7;
		}

		return false;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 005c
 */
GLOBAL_ASM(
glabel aiIfTargetInRoom
/*  f051468:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f05146c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f051470:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f051474:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f051478:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05147c:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f051480:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f051484:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f051488:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f05148c:	0fc0a221 */ 	jal	chrGetTargetProp
/*  f051490:	afb80024 */ 	sw	$t8,0x24($sp)
/*  f051494:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f051498:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05149c:	90f90002 */ 	lbu	$t9,0x2($a3)
/*  f0514a0:	90e90003 */ 	lbu	$t1,0x3($a3)
/*  f0514a4:	afa20020 */ 	sw	$v0,0x20($sp)
/*  f0514a8:	00194200 */ 	sll	$t0,$t9,0x8
/*  f0514ac:	01091825 */ 	or	$v1,$t0,$t1
/*  f0514b0:	0fc12574 */ 	jal	chrGetPadRoom
/*  f0514b4:	3065ffff */ 	andi	$a1,$v1,0xffff
/*  f0514b8:	0440000d */ 	bltz	$v0,.L0f0514f0
/*  f0514bc:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f0514c0:	50c0000c */ 	beqzl	$a2,.L0f0514f4
/*  f0514c4:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f0514c8:	84cb0028 */ 	lh	$t3,0x28($a2)
/*  f0514cc:	8fac0024 */ 	lw	$t4,0x24($sp)
/*  f0514d0:	544b0008 */ 	bnel	$v0,$t3,.L0f0514f4
/*  f0514d4:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f0514d8:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f0514dc:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f0514e0:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0514e4:	91860004 */ 	lbu	$a2,0x4($t4)
/*  f0514e8:	10000004 */ 	beqz	$zero,.L0f0514fc
/*  f0514ec:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f0514f0:
/*  f0514f0:	8e0d0438 */ 	lw	$t5,0x438($s0)
.L0f0514f4:
/*  f0514f4:	25ae0005 */ 	addiu	$t6,$t5,0x5
/*  f0514f8:	ae0e0438 */ 	sw	$t6,0x438($s0)
.L0f0514fc:
/*  f0514fc:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f051500:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f051504:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f051508:	03e00008 */ 	jr	$ra
/*  f05150c:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch due to different temporary registers
//bool aiIfTargetInRoom(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct prop *prop = chrGetTargetProp(g_Vars.chrdata);
//	s32 room_id = cmd[3] | (cmd[2] << 8);
//	room_id = chrGetPadRoom(g_Vars.chrdata, room_id & 0xffff);
//
//	if (room_id >= 0 && prop && room_id == prop->room) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
//	} else {
//		g_Vars.aioffset += 5;
//	}
//
//	return false;
//}

/**
 * @cmd 005d
 */
bool aiIfChrHasObject(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[3]);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	s32 playernum = 0;

	if (obj && obj->prop && chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		s32 prevplayernum = g_Vars.currentplayernum;
		playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		playernum = currentPlayerHasProp(obj->prop);
		setCurrentPlayerNum(prevplayernum);
	}

	if (playernum != 0) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 005e
 */
bool aiIfWeaponThrown(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (weaponIsThrown(cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 005f
 */
GLOBAL_ASM(
glabel aiIfWeaponThrownOnObject
/*  f05167c:	3c08800a */ 	lui	$t0,%hi(g_Vars)
/*  f051680:	25089fc0 */ 	addiu	$t0,$t0,%lo(g_Vars)
/*  f051684:	8d0e0434 */ 	lw	$t6,0x434($t0)
/*  f051688:	8d0f0438 */ 	lw	$t7,0x438($t0)
/*  f05168c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f051690:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f051694:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f051698:	90e40003 */ 	lbu	$a0,0x3($a3)
/*  f05169c:	0fc2556c */ 	jal	objFindByTagId
/*  f0516a0:	afa7001c */ 	sw	$a3,0x1c($sp)
/*  f0516a4:	3c08800a */ 	lui	$t0,%hi(g_Vars)
/*  f0516a8:	25089fc0 */ 	addiu	$t0,$t0,%lo(g_Vars)
/*  f0516ac:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*  f0516b0:	10400014 */ 	beqz	$v0,.L0f051704
/*  f0516b4:	00002825 */ 	or	$a1,$zero,$zero
/*  f0516b8:	8c440014 */ 	lw	$a0,0x14($v0)
/*  f0516bc:	10800011 */ 	beqz	$a0,.L0f051704
/*  f0516c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0516c4:	8c83001c */ 	lw	$v1,0x1c($a0)
/*  f0516c8:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f0516cc:	1060000d */ 	beqz	$v1,.L0f051704
/*  f0516d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0516d4:	90780000 */ 	lbu	$t8,0x0($v1)
.L0f0516d8:
/*  f0516d8:	54980008 */ 	bnel	$a0,$t8,.L0f0516fc
/*  f0516dc:	8c630020 */ 	lw	$v1,0x20($v1)
/*  f0516e0:	8c620004 */ 	lw	$v0,0x4($v1)
/*  f0516e4:	90f90002 */ 	lbu	$t9,0x2($a3)
/*  f0516e8:	9049005c */ 	lbu	$t1,0x5c($v0)
/*  f0516ec:	57290003 */ 	bnel	$t9,$t1,.L0f0516fc
/*  f0516f0:	8c630020 */ 	lw	$v1,0x20($v1)
/*  f0516f4:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0516f8:	8c630020 */ 	lw	$v1,0x20($v1)
.L0f0516fc:
/*  f0516fc:	5460fff6 */ 	bnezl	$v1,.L0f0516d8
/*  f051700:	90780000 */ 	lbu	$t8,0x0($v1)
.L0f051704:
/*  f051704:	50a0000a */ 	beqzl	$a1,.L0f051730
/*  f051708:	8d0a0438 */ 	lw	$t2,0x438($t0)
/*  f05170c:	8d040434 */ 	lw	$a0,0x434($t0)
/*  f051710:	8d050438 */ 	lw	$a1,0x438($t0)
/*  f051714:	0fc13583 */ 	jal	chraiGoToLabel
/*  f051718:	90e60004 */ 	lbu	$a2,0x4($a3)
/*  f05171c:	3c08800a */ 	lui	$t0,%hi(g_Vars)
/*  f051720:	25089fc0 */ 	addiu	$t0,$t0,%lo(g_Vars)
/*  f051724:	10000004 */ 	beqz	$zero,.L0f051738
/*  f051728:	ad020438 */ 	sw	$v0,0x438($t0)
/*  f05172c:	8d0a0438 */ 	lw	$t2,0x438($t0)
.L0f051730:
/*  f051730:	254b0005 */ 	addiu	$t3,$t2,0x5
/*  f051734:	ad0b0438 */ 	sw	$t3,0x438($t0)
.L0f051738:
/*  f051738:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05173c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f051740:	00001025 */ 	or	$v0,$zero,$zero
/*  f051744:	03e00008 */ 	jr	$ra
/*  f051748:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to different registers
//bool aiIfWeaponThrownOnObject(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct defaultobj *obj = objFindByTagId(cmd[3]);
//	bool pass = false;
//
//	if (obj && obj->prop) {
//		struct attachment *attachment = obj->prop->attachments;
//
//		while (attachment) {
//			if (attachment->type == ATTACHMENTTYPE_WEAPON && attachment->weapon->weapon_id == cmd[2]) {
//				pass = true;
//			}
//
//			attachment = attachment->next;
//		}
//	}
//
//	if (pass) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
//	} else {
//		g_Vars.aioffset += 5;
//	}
//
//	return false;
//}

/**
 * @cmd 0060
 */
bool aiIfChrHasWeaponEquipped(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	bool passes = false;

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);

		if (getCurrentPlayerWeaponId(0) == cmd[3]) {
			passes = true;
		}

		setCurrentPlayerNum(prevplayernum);
	}

	if (passes) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0061
 */
bool aiIfGunUnclaimed(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[3] == 0) {
		struct defaultobj *obj = objFindByTagId(cmd[2]);

		if (obj && obj->prop) {
			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
		} else {
			g_Vars.aioffset += 5;
		}
	} else {
		struct weaponobj *weapon = g_Vars.chrdata->gunprop->weapon;

		if (weapon && weapon->prop) {
			weapon->flags |= 0x00400000;
			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
		} else {
			g_Vars.aioffset += 5;
		}
	}

	return false;
}

/**
 * @cmd 0062
 */
bool aiIfObjectHealthy(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && objIsHealthy(obj)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0063
 */
GLOBAL_ASM(
glabel aiIfChrActivatedObject
/*  f051988:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f05198c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f051990:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f051994:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f051998:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05199c:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f0519a0:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f0519a4:	01cf4021 */ 	addu	$t0,$t6,$t7
/*  f0519a8:	91040003 */ 	lbu	$a0,0x3($t0)
/*  f0519ac:	0fc2556c */ 	jal	objFindByTagId
/*  f0519b0:	afa8002c */ 	sw	$t0,0x2c($sp)
/*  f0519b4:	8fa8002c */ 	lw	$t0,0x2c($sp)
/*  f0519b8:	00403025 */ 	or	$a2,$v0,$zero
/*  f0519bc:	1040003a */ 	beqz	$v0,.L0f051aa8
/*  f0519c0:	00003825 */ 	or	$a3,$zero,$zero
/*  f0519c4:	8c580014 */ 	lw	$t8,0x14($v0)
/*  f0519c8:	13000037 */ 	beqz	$t8,.L0f051aa8
/*  f0519cc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0519d0:	91050002 */ 	lbu	$a1,0x2($t0)
/*  f0519d4:	240100f3 */ 	addiu	$at,$zero,0xf3
/*  f0519d8:	54a1000d */ 	bnel	$a1,$at,.L0f051a10
/*  f0519dc:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f0519e0:	8c430040 */ 	lw	$v1,0x40($v0)
/*  f0519e4:	3c010004 */ 	lui	$at,0x4
/*  f0519e8:	34214000 */ 	ori	$at,$at,0x4000
/*  f0519ec:	0061c824 */ 	and	$t9,$v1,$at
/*  f0519f0:	1320002d */ 	beqz	$t9,.L0f051aa8
/*  f0519f4:	3c01fffb */ 	lui	$at,0xfffb
/*  f0519f8:	3421bfff */ 	ori	$at,$at,0xbfff
/*  f0519fc:	00614824 */ 	and	$t1,$v1,$at
/*  f051a00:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f051a04:	10000028 */ 	beqz	$zero,.L0f051aa8
/*  f051a08:	ac490040 */ 	sw	$t1,0x40($v0)
/*  f051a0c:	8e040424 */ 	lw	$a0,0x424($s0)
.L0f051a10:
/*  f051a10:	afa60028 */ 	sw	$a2,0x28($sp)
/*  f051a14:	afa70020 */ 	sw	$a3,0x20($sp)
/*  f051a18:	0fc126d1 */ 	jal	chrFindById
/*  f051a1c:	afa8002c */ 	sw	$t0,0x2c($sp)
/*  f051a20:	8fa60028 */ 	lw	$a2,0x28($sp)
/*  f051a24:	8fa70020 */ 	lw	$a3,0x20($sp)
/*  f051a28:	1040001f */ 	beqz	$v0,.L0f051aa8
/*  f051a2c:	8fa8002c */ 	lw	$t0,0x2c($sp)
/*  f051a30:	8c44001c */ 	lw	$a0,0x1c($v0)
/*  f051a34:	1080001c */ 	beqz	$a0,.L0f051aa8
/*  f051a38:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051a3c:	8e0a02a0 */ 	lw	$t2,0x2a0($s0)
/*  f051a40:	8d4b00bc */ 	lw	$t3,0xbc($t2)
/*  f051a44:	5564000a */ 	bnel	$t3,$a0,.L0f051a70
/*  f051a48:	8e0e0298 */ 	lw	$t6,0x298($s0)
/*  f051a4c:	8cc30040 */ 	lw	$v1,0x40($a2)
/*  f051a50:	2401bfff */ 	addiu	$at,$zero,-16385
/*  f051a54:	306c4000 */ 	andi	$t4,$v1,0x4000
/*  f051a58:	11800004 */ 	beqz	$t4,.L0f051a6c
/*  f051a5c:	00616824 */ 	and	$t5,$v1,$at
/*  f051a60:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f051a64:	10000010 */ 	beqz	$zero,.L0f051aa8
/*  f051a68:	accd0040 */ 	sw	$t5,0x40($a2)
.L0f051a6c:
/*  f051a6c:	8e0e0298 */ 	lw	$t6,0x298($s0)
.L0f051a70:
/*  f051a70:	05c0000d */ 	bltz	$t6,.L0f051aa8
/*  f051a74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051a78:	8e0f02a4 */ 	lw	$t7,0x2a4($s0)
/*  f051a7c:	8df800bc */ 	lw	$t8,0xbc($t7)
/*  f051a80:	17040009 */ 	bne	$t8,$a0,.L0f051aa8
/*  f051a84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051a88:	8cc30040 */ 	lw	$v1,0x40($a2)
/*  f051a8c:	3c01fffb */ 	lui	$at,0xfffb
/*  f051a90:	3421ffff */ 	ori	$at,$at,0xffff
/*  f051a94:	0003cb40 */ 	sll	$t9,$v1,0xd
/*  f051a98:	07210003 */ 	bgez	$t9,.L0f051aa8
/*  f051a9c:	00614824 */ 	and	$t1,$v1,$at
/*  f051aa0:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f051aa4:	acc90040 */ 	sw	$t1,0x40($a2)
.L0f051aa8:
/*  f051aa8:	50e00008 */ 	beqzl	$a3,.L0f051acc
/*  f051aac:	8e0a0438 */ 	lw	$t2,0x438($s0)
/*  f051ab0:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f051ab4:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f051ab8:	0fc13583 */ 	jal	chraiGoToLabel
/*  f051abc:	91060004 */ 	lbu	$a2,0x4($t0)
/*  f051ac0:	10000004 */ 	beqz	$zero,.L0f051ad4
/*  f051ac4:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f051ac8:	8e0a0438 */ 	lw	$t2,0x438($s0)
.L0f051acc:
/*  f051acc:	254b0005 */ 	addiu	$t3,$t2,0x5
/*  f051ad0:	ae0b0438 */ 	sw	$t3,0x438($s0)
.L0f051ad4:
/*  f051ad4:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f051ad8:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f051adc:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f051ae0:	03e00008 */ 	jr	$ra
/*  f051ae4:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch because it saves pass to the stack before calling chrFindById.
// Probably have to decompile chrFindById before this function can match.
//bool aiIfChrActivatedObject(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct defaultobj *obj = objFindByTagId(cmd[3]);
//	bool pass = false;
//
//	if (obj && obj->prop) {
//		if (cmd[2] == CHR_ANY) {
//			if (obj->hidden & (OBJHIDDENFLAG_ACTIVATED_BY_BOND | OBJHIDDENFLAG_ACTIVATED_BY_COOP)) {
//				pass = true;
//				obj->hidden &= ~(OBJHIDDENFLAG_ACTIVATED_BY_BOND | OBJHIDDENFLAG_ACTIVATED_BY_COOP);
//			}
//		} else {
//			struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
//			pass = false;
//
//			if (chr && chr->prop) {
//				if (chr->prop == g_Vars.bond->prop && (obj->hidden & OBJHIDDENFLAG_ACTIVATED_BY_BOND)) {
//					pass = true;
//					obj->hidden &= ~OBJHIDDENFLAG_ACTIVATED_BY_BOND;
//				} else if (g_Vars.coopplayernum >= 0 && chr->prop == g_Vars.coop->prop && (obj->hidden & OBJHIDDENFLAG_ACTIVATED_BY_COOP)) {
//					pass = true;
//					obj->hidden &= ~OBJHIDDENFLAG_ACTIVATED_BY_COOP;
//				}
//			}
//		}
//	}
//
//	if (pass) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
//	} else {
//		g_Vars.aioffset += 5;
//	}
//
//	return false;
//}

/**
 * @cmd 0065
 */
bool ai0065(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		if (obj->prop->type == PROPTYPE_DOOR) {
			func0f08fee8(obj->prop, 0);
		} else if (obj->prop->type == PROPTYPE_OBJ || obj->prop->type == PROPTYPE_WEAPON) {
			func0f086f40(obj->prop);
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0066
 */
bool aiDestroyObject(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && func0f0687b8(obj) == 0) {
		struct defaultobj *entity = obj->prop->obj;

		if (entity->obj == 0xeb) {
			obj->flags = (obj->flags & 0xfffeffff) | 0x20000;
			func0f129900(entity->prop, &entity->prop->pos, &entity->prop->room, 3, 0);
			func0f12e714(entity->prop, 0x16);
		} else {
			f32 damage = ((obj->maxdamage - obj->damage) + 1) / 250.0f;
			func0f0852ac(obj, damage, &obj->prop->pos, 0x22, -1);
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0067
 */
GLOBAL_ASM(
glabel ai0067
/*  f051ca4:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f051ca8:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f051cac:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f051cb0:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f051cb4:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f051cb8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f051cbc:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f051cc0:	0fc2556c */ 	jal	objFindByTagId
/*  f051cc4:	90440002 */ 	lbu	$a0,0x2($v0)
/*  f051cc8:	10400015 */ 	beqz	$v0,.L0f051d20
/*  f051ccc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051cd0:	8c430014 */ 	lw	$v1,0x14($v0)
/*  f051cd4:	10600012 */ 	beqz	$v1,.L0f051d20
/*  f051cd8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051cdc:	8c640018 */ 	lw	$a0,0x18($v1)
/*  f051ce0:	1080000f */ 	beqz	$a0,.L0f051d20
/*  f051ce4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051ce8:	90980000 */ 	lbu	$t8,0x0($a0)
/*  f051cec:	24010003 */ 	addiu	$at,$zero,0x3
/*  f051cf0:	1701000b */ 	bne	$t8,$at,.L0f051d20
/*  f051cf4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f051cf8:	8c440014 */ 	lw	$a0,0x14($v0)
/*  f051cfc:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f051d00:	8c990018 */ 	lw	$t9,0x18($a0)
/*  f051d04:	8f220004 */ 	lw	$v0,0x4($t9)
/*  f051d08:	0fc20a59 */ 	jal	func0f082964
/*  f051d0c:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f051d10:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f051d14:	8c480014 */ 	lw	$t0,0x14($v0)
/*  f051d18:	35090001 */ 	ori	$t1,$t0,0x1
/*  f051d1c:	ac490014 */ 	sw	$t1,0x14($v0)
.L0f051d20:
/*  f051d20:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f051d24:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f051d28:	8c6a0438 */ 	lw	$t2,0x438($v1)
/*  f051d2c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f051d30:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f051d34:	254b0003 */ 	addiu	$t3,$t2,0x3
/*  f051d38:	ac6b0438 */ 	sw	$t3,0x438($v1)
/*  f051d3c:	03e00008 */ 	jr	$ra
/*  f051d40:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0068
 */
bool aiChrDropItems(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop) {
		chrDropItems(chr);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0069
 */
bool aiChrDropWeapon(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		u32 weapon_id;
		setCurrentPlayerNum(playernum);
		weapon_id = getCurrentPlayerWeaponId(0);
		func0f111ea4(weapon_id);
		func0f0a1c2c();
		setCurrentPlayerNum(prevplayernum);
	} else if (chr && chr->prop) {
		if (chr->weapons_held[0]) {
			func0f082964(chr->weapons_held[0], 1);
			chr->hidden = chr->hidden | 0x00000001;
		}

		if (chr->weapons_held[1]) {
			func0f082964(chr->weapons_held[1], 1);
			chr->hidden = chr->hidden | 0x00000001;
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 006a
 */
bool aiGiveObjectToChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[3]);

	if (obj && obj->prop && chr && chr->prop) {
		if (chr->prop->type == PROPTYPE_PLAYER) {
			u32 something;
			u32 prevplayernum = g_Vars.currentplayernum;
			struct defaultobj *obj2 = obj->prop->obj;
			u32 playernum = propGetPlayerNum(chr->prop);
			setCurrentPlayerNum(playernum);

			if (obj->prop->unk18) {
				func0f082f88(obj->prop);
				func0f06ac90(obj->prop);
				func0f0604bc(obj->prop);
			}

			something = func0f088840(obj->prop, 0);
			func0f062b64(obj->prop, something);
			playernum = propGetPlayerNum(chr->prop);
			obj2->hidden = (playernum << 28) | (obj2->hidden & 0x0fffffff);
			setCurrentPlayerNum(prevplayernum);
		} else {
			if (obj->prop->unk18) {
				func0f082f88(obj->prop);
			} else {
				func0f065c44(obj->prop);
				func0f0605c4(obj->prop);
				func0f060300(obj->prop);
			}

			if (obj->type != OBJTYPE_WEAPON || func0f08ae54(obj, chr) == 0) {
				func0f060698(obj->prop, chr->prop);
			}
		}
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 006b
 */
GLOBAL_ASM(
glabel ai006b
/*  f052080:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f052084:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f052088:	8c4e0434 */ 	lw	$t6,0x434($v0)
/*  f05208c:	8c4f0438 */ 	lw	$t7,0x438($v0)
/*  f052090:	27bdff28 */ 	addiu	$sp,$sp,-216
/*  f052094:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f052098:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05209c:	90640002 */ 	lbu	$a0,0x2($v1)
/*  f0520a0:	0fc2556c */ 	jal	objFindByTagId
/*  f0520a4:	afa300d4 */ 	sw	$v1,0xd4($sp)
/*  f0520a8:	8fa300d4 */ 	lw	$v1,0xd4($sp)
/*  f0520ac:	afa200d0 */ 	sw	$v0,0xd0($sp)
/*  f0520b0:	90780003 */ 	lbu	$t8,0x3($v1)
/*  f0520b4:	90680004 */ 	lbu	$t0,0x4($v1)
/*  f0520b8:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f0520bc:	03283825 */ 	or	$a3,$t9,$t0
/*  f0520c0:	1040002e */ 	beqz	$v0,.L0f05217c
/*  f0520c4:	30e9ffff */ 	andi	$t1,$a3,0xffff
/*  f0520c8:	8c4a0014 */ 	lw	$t2,0x14($v0)
/*  f0520cc:	01202025 */ 	or	$a0,$t1,$zero
/*  f0520d0:	2405004e */ 	addiu	$a1,$zero,0x4e
/*  f0520d4:	11400029 */ 	beqz	$t2,.L0f05217c
/*  f0520d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0520dc:	0fc456ac */ 	jal	padUnpack
/*  f0520e0:	27a60038 */ 	addiu	$a2,$sp,0x38
/*  f0520e4:	c7a40044 */ 	lwc1	$f4,0x44($sp)
/*  f0520e8:	44800000 */ 	mtc1	$zero,$f0
/*  f0520ec:	c7a80048 */ 	lwc1	$f8,0x48($sp)
/*  f0520f0:	46002187 */ 	neg.s	$f6,$f4
/*  f0520f4:	c7b0004c */ 	lwc1	$f16,0x4c($sp)
/*  f0520f8:	46004287 */ 	neg.s	$f10,$f8
/*  f0520fc:	e7a60010 */ 	swc1	$f6,0x10($sp)
/*  f052100:	c7a60054 */ 	lwc1	$f6,0x54($sp)
/*  f052104:	c7a80058 */ 	lwc1	$f8,0x58($sp)
/*  f052108:	c7a40050 */ 	lwc1	$f4,0x50($sp)
/*  f05210c:	46008487 */ 	neg.s	$f18,$f16
/*  f052110:	44050000 */ 	mfc1	$a1,$f0
/*  f052114:	44060000 */ 	mfc1	$a2,$f0
/*  f052118:	44070000 */ 	mfc1	$a3,$f0
/*  f05211c:	e7b20018 */ 	swc1	$f18,0x18($sp)
/*  f052120:	e7aa0014 */ 	swc1	$f10,0x14($sp)
/*  f052124:	27a4008c */ 	addiu	$a0,$sp,0x8c
/*  f052128:	e7a60020 */ 	swc1	$f6,0x20($sp)
/*  f05212c:	e7a80024 */ 	swc1	$f8,0x24($sp)
/*  f052130:	0c005b56 */ 	jal	func00016d58
/*  f052134:	e7a4001c */ 	swc1	$f4,0x1c($sp)
/*  f052138:	8fab00d0 */ 	lw	$t3,0xd0($sp)
/*  f05213c:	27a5008c */ 	addiu	$a1,$sp,0x8c
/*  f052140:	8d620018 */ 	lw	$v0,0x18($t3)
/*  f052144:	50400004 */ 	beqzl	$v0,.L0f052158
/*  f052148:	8fac0080 */ 	lw	$t4,0x80($sp)
/*  f05214c:	0c0057c1 */ 	jal	func00015f04
/*  f052150:	c44c0014 */ 	lwc1	$f12,0x14($v0)
/*  f052154:	8fac0080 */ 	lw	$t4,0x80($sp)
.L0f052158:
/*  f052158:	27a50038 */ 	addiu	$a1,$sp,0x38
/*  f05215c:	240dffff */ 	addiu	$t5,$zero,-1
/*  f052160:	a7ad0036 */ 	sh	$t5,0x36($sp)
/*  f052164:	afa50010 */ 	sw	$a1,0x10($sp)
/*  f052168:	8fa400d0 */ 	lw	$a0,0xd0($sp)
/*  f05216c:	27a6008c */ 	addiu	$a2,$sp,0x8c
/*  f052170:	27a70034 */ 	addiu	$a3,$sp,0x34
/*  f052174:	0fc1a9cc */ 	jal	func0f06a730
/*  f052178:	a7ac0034 */ 	sh	$t4,0x34($sp)
.L0f05217c:
/*  f05217c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f052180:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f052184:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f052188:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f05218c:	27bd00d8 */ 	addiu	$sp,$sp,0xd8
/*  f052190:	25cf0005 */ 	addiu	$t7,$t6,0x5
/*  f052194:	ac6f0438 */ 	sw	$t7,0x438($v1)
/*  f052198:	03e00008 */ 	jr	$ra
/*  f05219c:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 006c
 */
bool aiOpenDoor(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *door = objFindByTagId(cmd[2]);

	if (door && door->prop && door->prop->type == PROPTYPE_DOOR) {
		if (!func0f066310(door->prop, 0)) {
			doorActivate(door, DOORSTATE_OPEN);
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 006d
 */
bool aiCloseDoor(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *door = objFindByTagId(cmd[2]);

	if (door && door->prop && door->prop->type == PROPTYPE_DOOR) {
		doorActivate(door, DOORSTATE_CLOSED);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 006e
 */
bool aiIfDoorState(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);
	bool pass = false;

	if (obj && obj->prop && obj->type == OBJTYPE_DOOR) {
		struct doorobj *door = (struct doorobj *) obj;

		if (door->state == 0) {
			if (door->speed <= 0) {
				pass = (cmd[3] & DOORSTATEBIT_CLOSED) != 0;
			} else {
				pass = (cmd[3] & DOORSTATEBIT_OPEN) != 0;
			}
		} else if (door->state == 1 || door->state == 3) {
			pass = (cmd[3] & DOORSTATEBIT_OPENING) != 0;
		} else if (door->state == 2) {
			pass = (cmd[3] & DOORSTATEBIT_CLOSING) != 0;
		}
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 006f
 */
bool aiIfObjectIsDoor(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->type == OBJTYPE_DOOR && (obj->hidden & 0x200)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0070
 */
bool aiLockDoor(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->prop->type == PROPTYPE_DOOR) {
		struct doorobj *door = (struct doorobj *) obj;
		u8 bits = cmd[3];
		door->lockbits = door->lockbits | bits;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0071
 */
bool aiUnlockDoor(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->prop->type == PROPTYPE_DOOR) {
		struct doorobj *door = (struct doorobj *) obj;
		u8 bits = cmd[3];
		door->lockbits = door->lockbits & ~bits;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0072
 */
bool aiIfDoorLocked(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);
	bool pass = false;

	if (obj && obj->prop && obj->prop->type == PROPTYPE_DOOR) {
		struct doorobj *door = (struct doorobj *) obj;
		u32 bits = cmd[3];
		u32 lockbits = door->lockbits;

		if ((lockbits & bits) == bits) {
			pass = true;
		}
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0073
 */
bool aiIfObjectiveComplete(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] < objectiveGetCount() &&
			objectiveGetStatus(cmd[2]) == OBJECTIVE_COMPLETE &&
			objectiveGetDifficultyBits(cmd[2]) & (1 << getDifficulty())) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0074
 */
bool aiIfObjectiveFailed(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] < objectiveGetCount() &&
			objectiveGetStatus(cmd[2]) == OBJECTIVE_FAILED &&
			objectiveGetDifficultyBits(cmd[2]) & (1 << getDifficulty())) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0075
 */
bool ai0075(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f04a4ec(g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0076
 */
bool ai0076(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f04a674(g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 007d
 */
bool aiIfNumArghsLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGetNumArghs(g_Vars.chrdata) < cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 007e
 */
bool aiIfNumArghsGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGetNumArghs(g_Vars.chrdata) > cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 007f
 */
bool aiIfNumCloseArghsLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGetNumCloseArghs(g_Vars.chrdata) < cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0080
 */
bool aiIfNumCloseArghsGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (chrGetNumCloseArghs(g_Vars.chrdata) > cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0081
 */
GLOBAL_ASM(
glabel aiIfChrHealthLessThan
/*  f052a88:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f052a8c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f052a90:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f052a94:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f052a98:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f052a9c:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f052aa0:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f052aa4:	3c014f80 */ 	lui	$at,0x4f80
/*  f052aa8:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f052aac:	90f80003 */ 	lbu	$t8,0x3($a3)
/*  f052ab0:	44982000 */ 	mtc1	$t8,$f4
/*  f052ab4:	07010004 */ 	bgez	$t8,.L0f052ac8
/*  f052ab8:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f052abc:	44814000 */ 	mtc1	$at,$f8
/*  f052ac0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052ac4:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f052ac8:
/*  f052ac8:	3c017f1b */ 	lui	$at,%hi(var7f1a9c38)
/*  f052acc:	c42a9c38 */ 	lwc1	$f10,%lo(var7f1a9c38)($at)
/*  f052ad0:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f052ad4:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f052ad8:	e7b00020 */ 	swc1	$f16,0x20($sp)
/*  f052adc:	90e50002 */ 	lbu	$a1,0x2($a3)
/*  f052ae0:	0fc126d1 */ 	jal	chrFindById
/*  f052ae4:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f052ae8:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f052aec:	00402825 */ 	or	$a1,$v0,$zero
/*  f052af0:	10400026 */ 	beqz	$v0,.L0f052b8c
/*  f052af4:	00001825 */ 	or	$v1,$zero,$zero
/*  f052af8:	8c44001c */ 	lw	$a0,0x1c($v0)
/*  f052afc:	10800023 */ 	beqz	$a0,.L0f052b8c
/*  f052b00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052b04:	90990000 */ 	lbu	$t9,0x0($a0)
/*  f052b08:	24010006 */ 	addiu	$at,$zero,0x6
/*  f052b0c:	57210016 */ 	bnel	$t9,$at,.L0f052b68
/*  f052b10:	c44a0104 */ 	lwc1	$f10,0x104($v0)
/*  f052b14:	8ca4001c */ 	lw	$a0,0x1c($a1)
/*  f052b18:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f052b1c:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f052b20:	00024080 */ 	sll	$t0,$v0,0x2
/*  f052b24:	02084821 */ 	addu	$t1,$s0,$t0
/*  f052b28:	8d2a0064 */ 	lw	$t2,0x64($t1)
/*  f052b2c:	3c014100 */ 	lui	$at,0x4100
/*  f052b30:	44812000 */ 	mtc1	$at,$f4
/*  f052b34:	c55200dc */ 	lwc1	$f18,0xdc($t2)
/*  f052b38:	c7a60020 */ 	lwc1	$f6,0x20($sp)
/*  f052b3c:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f052b40:	46049202 */ 	mul.s	$f8,$f18,$f4
/*  f052b44:	00001825 */ 	or	$v1,$zero,$zero
/*  f052b48:	4606403c */ 	c.lt.s	$f8,$f6
/*  f052b4c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052b50:	4500000e */ 	bc1f	.L0f052b8c
/*  f052b54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052b58:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f052b5c:	1000000b */ 	beqz	$zero,.L0f052b8c
/*  f052b60:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052b64:	c44a0104 */ 	lwc1	$f10,0x104($v0)
.L0f052b68:
/*  f052b68:	c4500100 */ 	lwc1	$f16,0x100($v0)
/*  f052b6c:	c7a40020 */ 	lwc1	$f4,0x20($sp)
/*  f052b70:	00001825 */ 	or	$v1,$zero,$zero
/*  f052b74:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f052b78:	4604903c */ 	c.lt.s	$f18,$f4
/*  f052b7c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052b80:	45000002 */ 	bc1f	.L0f052b8c
/*  f052b84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052b88:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f052b8c:
/*  f052b8c:	50600008 */ 	beqzl	$v1,.L0f052bb0
/*  f052b90:	8e0b0438 */ 	lw	$t3,0x438($s0)
/*  f052b94:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f052b98:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f052b9c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f052ba0:	90e60004 */ 	lbu	$a2,0x4($a3)
/*  f052ba4:	10000004 */ 	beqz	$zero,.L0f052bb8
/*  f052ba8:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f052bac:	8e0b0438 */ 	lw	$t3,0x438($s0)
.L0f052bb0:
/*  f052bb0:	256c0005 */ 	addiu	$t4,$t3,0x5
/*  f052bb4:	ae0c0438 */ 	sw	$t4,0x438($s0)
.L0f052bb8:
/*  f052bb8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f052bbc:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f052bc0:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f052bc4:	03e00008 */ 	jr	$ra
/*  f052bc8:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0082
 */
GLOBAL_ASM(
glabel aiIfChrHealthGreaterThan
/*  f052bcc:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f052bd0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f052bd4:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f052bd8:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f052bdc:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f052be0:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f052be4:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f052be8:	3c014f80 */ 	lui	$at,0x4f80
/*  f052bec:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f052bf0:	90f80003 */ 	lbu	$t8,0x3($a3)
/*  f052bf4:	44982000 */ 	mtc1	$t8,$f4
/*  f052bf8:	07010004 */ 	bgez	$t8,.L0f052c0c
/*  f052bfc:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f052c00:	44814000 */ 	mtc1	$at,$f8
/*  f052c04:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052c08:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f052c0c:
/*  f052c0c:	3c017f1b */ 	lui	$at,%hi(var7f1a9c3c)
/*  f052c10:	c42a9c3c */ 	lwc1	$f10,%lo(var7f1a9c3c)($at)
/*  f052c14:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f052c18:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f052c1c:	e7b00020 */ 	swc1	$f16,0x20($sp)
/*  f052c20:	90e50002 */ 	lbu	$a1,0x2($a3)
/*  f052c24:	0fc126d1 */ 	jal	chrFindById
/*  f052c28:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f052c2c:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f052c30:	00402825 */ 	or	$a1,$v0,$zero
/*  f052c34:	10400026 */ 	beqz	$v0,.L0f052cd0
/*  f052c38:	00001825 */ 	or	$v1,$zero,$zero
/*  f052c3c:	8c44001c */ 	lw	$a0,0x1c($v0)
/*  f052c40:	10800023 */ 	beqz	$a0,.L0f052cd0
/*  f052c44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052c48:	90990000 */ 	lbu	$t9,0x0($a0)
/*  f052c4c:	24010006 */ 	addiu	$at,$zero,0x6
/*  f052c50:	57210016 */ 	bnel	$t9,$at,.L0f052cac
/*  f052c54:	c44a0104 */ 	lwc1	$f10,0x104($v0)
/*  f052c58:	8ca4001c */ 	lw	$a0,0x1c($a1)
/*  f052c5c:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f052c60:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f052c64:	00024080 */ 	sll	$t0,$v0,0x2
/*  f052c68:	02084821 */ 	addu	$t1,$s0,$t0
/*  f052c6c:	8d2a0064 */ 	lw	$t2,0x64($t1)
/*  f052c70:	3c014100 */ 	lui	$at,0x4100
/*  f052c74:	44812000 */ 	mtc1	$at,$f4
/*  f052c78:	c55200dc */ 	lwc1	$f18,0xdc($t2)
/*  f052c7c:	c7a60020 */ 	lwc1	$f6,0x20($sp)
/*  f052c80:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f052c84:	46049202 */ 	mul.s	$f8,$f18,$f4
/*  f052c88:	00001825 */ 	or	$v1,$zero,$zero
/*  f052c8c:	4608303c */ 	c.lt.s	$f6,$f8
/*  f052c90:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052c94:	4500000e */ 	bc1f	.L0f052cd0
/*  f052c98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052c9c:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f052ca0:	1000000b */ 	beqz	$zero,.L0f052cd0
/*  f052ca4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052ca8:	c44a0104 */ 	lwc1	$f10,0x104($v0)
.L0f052cac:
/*  f052cac:	c4500100 */ 	lwc1	$f16,0x100($v0)
/*  f052cb0:	c7a40020 */ 	lwc1	$f4,0x20($sp)
/*  f052cb4:	00001825 */ 	or	$v1,$zero,$zero
/*  f052cb8:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f052cbc:	4612203c */ 	c.lt.s	$f4,$f18
/*  f052cc0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052cc4:	45000002 */ 	bc1f	.L0f052cd0
/*  f052cc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052ccc:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f052cd0:
/*  f052cd0:	50600008 */ 	beqzl	$v1,.L0f052cf4
/*  f052cd4:	8e0b0438 */ 	lw	$t3,0x438($s0)
/*  f052cd8:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f052cdc:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f052ce0:	0fc13583 */ 	jal	chraiGoToLabel
/*  f052ce4:	90e60004 */ 	lbu	$a2,0x4($a3)
/*  f052ce8:	10000004 */ 	beqz	$zero,.L0f052cfc
/*  f052cec:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f052cf0:	8e0b0438 */ 	lw	$t3,0x438($s0)
.L0f052cf4:
/*  f052cf4:	256c0005 */ 	addiu	$t4,$t3,0x5
/*  f052cf8:	ae0c0438 */ 	sw	$t4,0x438($s0)
.L0f052cfc:
/*  f052cfc:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f052d00:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f052d04:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f052d08:	03e00008 */ 	jr	$ra
/*  f052d0c:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 010f
 */
GLOBAL_ASM(
glabel aiIfChrShieldLessThan
/*  f052d10:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f052d14:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f052d18:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f052d1c:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f052d20:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f052d24:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f052d28:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f052d2c:	3c017f1b */ 	lui	$at,%hi(var7f1a9c40)
/*  f052d30:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f052d34:	90780003 */ 	lbu	$t8,0x3($v1)
/*  f052d38:	90680004 */ 	lbu	$t0,0x4($v1)
/*  f052d3c:	c4289c40 */ 	lwc1	$f8,%lo(var7f1a9c40)($at)
/*  f052d40:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f052d44:	03284825 */ 	or	$t1,$t9,$t0
/*  f052d48:	44892000 */ 	mtc1	$t1,$f4
/*  f052d4c:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f052d50:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f052d54:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f052d58:	e7aa0020 */ 	swc1	$f10,0x20($sp)
/*  f052d5c:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f052d60:	0fc126d1 */ 	jal	chrFindById
/*  f052d64:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f052d68:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f052d6c:	1040000f */ 	beqz	$v0,.L0f052dac
/*  f052d70:	00402025 */ 	or	$a0,$v0,$zero
/*  f052d74:	0fc0cfe8 */ 	jal	chrGetShield
/*  f052d78:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f052d7c:	c7b00020 */ 	lwc1	$f16,0x20($sp)
/*  f052d80:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f052d84:	4610003c */ 	c.lt.s	$f0,$f16
/*  f052d88:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052d8c:	45020008 */ 	bc1fl	.L0f052db0
/*  f052d90:	8e0a0438 */ 	lw	$t2,0x438($s0)
/*  f052d94:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f052d98:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f052d9c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f052da0:	90660005 */ 	lbu	$a2,0x5($v1)
/*  f052da4:	10000004 */ 	beqz	$zero,.L0f052db8
/*  f052da8:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f052dac:
/*  f052dac:	8e0a0438 */ 	lw	$t2,0x438($s0)
.L0f052db0:
/*  f052db0:	254b0006 */ 	addiu	$t3,$t2,0x6
/*  f052db4:	ae0b0438 */ 	sw	$t3,0x438($s0)
.L0f052db8:
/*  f052db8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f052dbc:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f052dc0:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f052dc4:	03e00008 */ 	jr	$ra
/*  f052dc8:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0110
 */
GLOBAL_ASM(
glabel aiIfChrShieldGreaterThan
/*  f052dcc:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f052dd0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f052dd4:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f052dd8:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f052ddc:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f052de0:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f052de4:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f052de8:	3c017f1b */ 	lui	$at,%hi(var7f1a9c44)
/*  f052dec:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f052df0:	90780003 */ 	lbu	$t8,0x3($v1)
/*  f052df4:	90680004 */ 	lbu	$t0,0x4($v1)
/*  f052df8:	c4289c44 */ 	lwc1	$f8,%lo(var7f1a9c44)($at)
/*  f052dfc:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f052e00:	03284825 */ 	or	$t1,$t9,$t0
/*  f052e04:	44892000 */ 	mtc1	$t1,$f4
/*  f052e08:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f052e0c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f052e10:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f052e14:	e7aa0020 */ 	swc1	$f10,0x20($sp)
/*  f052e18:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f052e1c:	0fc126d1 */ 	jal	chrFindById
/*  f052e20:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f052e24:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f052e28:	1040000f */ 	beqz	$v0,.L0f052e68
/*  f052e2c:	00402025 */ 	or	$a0,$v0,$zero
/*  f052e30:	0fc0cfe8 */ 	jal	chrGetShield
/*  f052e34:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f052e38:	c7b00020 */ 	lwc1	$f16,0x20($sp)
/*  f052e3c:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f052e40:	4600803c */ 	c.lt.s	$f16,$f0
/*  f052e44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f052e48:	45020008 */ 	bc1fl	.L0f052e6c
/*  f052e4c:	8e0a0438 */ 	lw	$t2,0x438($s0)
/*  f052e50:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f052e54:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f052e58:	0fc13583 */ 	jal	chraiGoToLabel
/*  f052e5c:	90660005 */ 	lbu	$a2,0x5($v1)
/*  f052e60:	10000004 */ 	beqz	$zero,.L0f052e74
/*  f052e64:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f052e68:
/*  f052e68:	8e0a0438 */ 	lw	$t2,0x438($s0)
.L0f052e6c:
/*  f052e6c:	254b0006 */ 	addiu	$t3,$t2,0x6
/*  f052e70:	ae0b0438 */ 	sw	$t3,0x438($s0)
.L0f052e74:
/*  f052e74:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f052e78:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f052e7c:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f052e80:	03e00008 */ 	jr	$ra
/*  f052e84:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0083
 */
bool aiIfInjured(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && (chr->chrflags & CHRCFLAG_JUST_INJURED)) {
		chr->chrflags &= ~CHRCFLAG_JUST_INJURED;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset = g_Vars.aioffset + 4;
	}

	return false;
}

/**
 * @cmd 0168
 */
bool ai0168(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && (chr->chrflags & CHRCFLAG_02000000)) {
		chr->chrflags &= ~CHRCFLAG_02000000;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset = g_Vars.aioffset + 4;
	}

	return false;
}

/**
 * @cmd 0077
 */
bool aiIfDifficultyLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (getDifficulty() < cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0078
 */
bool aiIfDifficultyGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (getDifficulty() > cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

f32 getUptime(void);

/**
 * @cmd 0079
 */
bool aiIfUptimeLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 target = (f32)(cmd[3] | (cmd[2] << 8));
	f32 uptime = getUptime();

	if (uptime < target) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 007a
 */
bool aiIfUptimeGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 target = (f32)(cmd[3] | (cmd[2] << 8));
	f32 uptime = getUptime();

	if (uptime > target) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 007b
 */
bool aiIfStageIdLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] > getCurrentStageId()) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 007c
 */
bool aiIfStageIdGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (getCurrentStageId() > cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0084
 */
bool aiSetMorale(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.chrdata->morale = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0085
 */
bool aiAddMorale(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	incrementByte(&g_Vars.chrdata->morale, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0086
 */
bool aiChrAddMorale(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[3]);
	incrementByte(&chr->morale, cmd[2]);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0087
 */
bool aiSubtractMorale(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	decrementByte(&g_Vars.chrdata->morale, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0088
 */
bool aiIfMoraleLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->morale < cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0089
 */
bool aiIfMoraleLessThanRandom(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->morale < g_Vars.chrdata->random) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 008a
 */
bool aiSetAlertness(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.chrdata->alertness = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 008b
 */
bool aiAddAlertness(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	incrementByte(&g_Vars.chrdata->alertness, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 008c
 */
bool aiChrAddAlertness(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[3]);

	if (chr && chr->prop) {
		incrementByte(&chr->alertness, cmd[2]);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 008d
 */
bool aiSubtractAlertness(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	decrementByte(&g_Vars.chrdata->alertness, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 008e
 */
bool aiIfAlertness(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if ((g_Vars.chrdata->alertness < cmd[2] && cmd[3] == 0) ||
			(cmd[2] < g_Vars.chrdata->alertness && cmd[3] == 1)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 008f
 */
bool aiIfChrAlertnessLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[3]);

	if (chr && chr->alertness < cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0090
 */
bool aiIfAlertnessLessThanRandom(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->alertness < g_Vars.chrdata->random) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0092
 */
bool aiSetHearDistance(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) / 1000.0f;
	g_Vars.chrdata->hearingscale = distance;

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0093
 */
bool aiSetViewDistance(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (!cheatIsActive(CHEAT_PERFECTDARKNESS)) {
		g_Vars.chrdata->visionrange = cmd[2];
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0094
 */
bool aiSetGrenadeProbability(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.chrdata->grenadeprob = cmd[2];
	g_Vars.aioffset += + 3;

	return false;
}

/**
 * @cmd 0095
 */
bool aiSetChrNum(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	chrSetChrnum(g_Vars.chrdata, cmd[2]);
	g_Vars.chrdata->chrnum = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0096
 */
GLOBAL_ASM(
glabel ai0096
/*  f053938:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f05393c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f053940:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f053944:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f053948:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05394c:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f053950:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f053954:	3c017f1b */ 	lui	$at,%hi(var7f1a9c48)
/*  f053958:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05395c:	90580003 */ 	lbu	$t8,0x3($v0)
/*  f053960:	90480004 */ 	lbu	$t0,0x4($v0)
/*  f053964:	c4289c48 */ 	lwc1	$f8,%lo(var7f1a9c48)($at)
/*  f053968:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f05396c:	03284825 */ 	or	$t1,$t9,$t0
/*  f053970:	44892000 */ 	mtc1	$t1,$f4
/*  f053974:	8e040430 */ 	lw	$a0,0x430($s0)
/*  f053978:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f05397c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f053980:	46083002 */ 	mul.s	$f0,$f6,$f8
/*  f053984:	50800026 */ 	beqzl	$a0,.L0f053a20
/*  f053988:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f05398c:	444af800 */ 	cfc1	$t2,$31
/*  f053990:	44c5f800 */ 	ctc1	$a1,$31
/*  f053994:	3c014f00 */ 	lui	$at,0x4f00
/*  f053998:	460002a4 */ 	cvt.w.s	$f10,$f0
/*  f05399c:	4445f800 */ 	cfc1	$a1,$31
/*  f0539a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0539a4:	30a50078 */ 	andi	$a1,$a1,0x78
/*  f0539a8:	50a00013 */ 	beqzl	$a1,.L0f0539f8
/*  f0539ac:	44055000 */ 	mfc1	$a1,$f10
/*  f0539b0:	44815000 */ 	mtc1	$at,$f10
/*  f0539b4:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0539b8:	460a0281 */ 	sub.s	$f10,$f0,$f10
/*  f0539bc:	44c5f800 */ 	ctc1	$a1,$31
/*  f0539c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0539c4:	460052a4 */ 	cvt.w.s	$f10,$f10
/*  f0539c8:	4445f800 */ 	cfc1	$a1,$31
/*  f0539cc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0539d0:	30a50078 */ 	andi	$a1,$a1,0x78
/*  f0539d4:	14a00005 */ 	bnez	$a1,.L0f0539ec
/*  f0539d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0539dc:	44055000 */ 	mfc1	$a1,$f10
/*  f0539e0:	3c018000 */ 	lui	$at,0x8000
/*  f0539e4:	10000007 */ 	beqz	$zero,.L0f053a04
/*  f0539e8:	00a12825 */ 	or	$a1,$a1,$at
.L0f0539ec:
/*  f0539ec:	10000005 */ 	beqz	$zero,.L0f053a04
/*  f0539f0:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f0539f4:	44055000 */ 	mfc1	$a1,$f10
.L0f0539f8:
/*  f0539f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0539fc:	04a0fffb */ 	bltz	$a1,.L0f0539ec
/*  f053a00:	00000000 */ 	sll	$zero,$zero,0x0
.L0f053a04:
/*  f053a04:	44caf800 */ 	ctc1	$t2,$31
/*  f053a08:	30abffff */ 	andi	$t3,$a1,0xffff
/*  f053a0c:	0fc1ec56 */ 	jal	func0f07b158
/*  f053a10:	01602825 */ 	or	$a1,$t3,$zero
/*  f053a14:	10000021 */ 	beqz	$zero,.L0f053a9c
/*  f053a18:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f053a1c:	90450002 */ 	lbu	$a1,0x2($v0)
.L0f053a20:
/*  f053a20:	e7a00028 */ 	swc1	$f0,0x28($sp)
/*  f053a24:	0fc126d1 */ 	jal	chrFindById
/*  f053a28:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f053a2c:	c7a00028 */ 	lwc1	$f0,0x28($sp)
/*  f053a30:	10400019 */ 	beqz	$v0,.L0f053a98
/*  f053a34:	00402025 */ 	or	$a0,$v0,$zero
/*  f053a38:	8c4c001c */ 	lw	$t4,0x1c($v0)
/*  f053a3c:	51800017 */ 	beqzl	$t4,.L0f053a9c
/*  f053a40:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f053a44:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f053a48:	0fc0e6a5 */ 	jal	chrIsDead
/*  f053a4c:	e7a00028 */ 	swc1	$f0,0x28($sp)
/*  f053a50:	8fa40024 */ 	lw	$a0,0x24($sp)
/*  f053a54:	14400010 */ 	bnez	$v0,.L0f053a98
/*  f053a58:	c7a00028 */ 	lwc1	$f0,0x28($sp)
/*  f053a5c:	80820007 */ 	lb	$v0,0x7($a0)
/*  f053a60:	24010005 */ 	addiu	$at,$zero,0x5
/*  f053a64:	1041000c */ 	beq	$v0,$at,.L0f053a98
/*  f053a68:	24010004 */ 	addiu	$at,$zero,0x4
/*  f053a6c:	1041000a */ 	beq	$v0,$at,.L0f053a98
/*  f053a70:	2401001f */ 	addiu	$at,$zero,0x1f
/*  f053a74:	10410008 */ 	beq	$v0,$at,.L0f053a98
/*  f053a78:	2401001e */ 	addiu	$at,$zero,0x1e
/*  f053a7c:	10410006 */ 	beq	$v0,$at,.L0f053a98
/*  f053a80:	24010020 */ 	addiu	$at,$zero,0x20
/*  f053a84:	50410005 */ 	beql	$v0,$at,.L0f053a9c
/*  f053a88:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f053a8c:	44050000 */ 	mfc1	$a1,$f0
/*  f053a90:	0fc08166 */ 	jal	chrSetMaxDamage
/*  f053a94:	00000000 */ 	sll	$zero,$zero,0x0
.L0f053a98:
/*  f053a98:	8e0d0438 */ 	lw	$t5,0x438($s0)
.L0f053a9c:
/*  f053a9c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f053aa0:	00001025 */ 	or	$v0,$zero,$zero
/*  f053aa4:	25ae0005 */ 	addiu	$t6,$t5,0x5
/*  f053aa8:	ae0e0438 */ 	sw	$t6,0x438($s0)
/*  f053aac:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f053ab0:	03e00008 */ 	jr	$ra
/*  f053ab4:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

/**
 * @cmd 0097
 */
GLOBAL_ASM(
glabel ai0097
/*  f053ab8:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f053abc:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f053ac0:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f053ac4:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f053ac8:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f053acc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f053ad0:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f053ad4:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f053ad8:	90480003 */ 	lbu	$t0,0x3($v0)
/*  f053adc:	3c017f1b */ 	lui	$at,%hi(var7f1a9c4c)
/*  f053ae0:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f053ae4:	03284825 */ 	or	$t1,$t9,$t0
/*  f053ae8:	44892000 */ 	mtc1	$t1,$f4
/*  f053aec:	c4289c4c */ 	lwc1	$f8,%lo(var7f1a9c4c)($at)
/*  f053af0:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f053af4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f053af8:	46083002 */ 	mul.s	$f0,$f6,$f8
/*  f053afc:	44050000 */ 	mfc1	$a1,$f0
/*  f053b00:	0fc0816b */ 	jal	chrAddHealth
/*  f053b04:	00000000 */ 	sll	$zero,$zero,0x0
/*  f053b08:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f053b0c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f053b10:	8c6a0438 */ 	lw	$t2,0x438($v1)
/*  f053b14:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f053b18:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f053b1c:	254b0004 */ 	addiu	$t3,$t2,0x4
/*  f053b20:	ac6b0438 */ 	sw	$t3,0x438($v1)
/*  f053b24:	03e00008 */ 	jr	$ra
/*  f053b28:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 010e
 */
GLOBAL_ASM(
glabel ai010e
/*  f053b2c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f053b30:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f053b34:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f053b38:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f053b3c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f053b40:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f053b44:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f053b48:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f053b4c:	90480003 */ 	lbu	$t0,0x3($v0)
/*  f053b50:	3c017f1b */ 	lui	$at,%hi(var7f1a9c50)
/*  f053b54:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f053b58:	03284825 */ 	or	$t1,$t9,$t0
/*  f053b5c:	44892000 */ 	mtc1	$t1,$f4
/*  f053b60:	c4289c50 */ 	lwc1	$f8,%lo(var7f1a9c50)($at)
/*  f053b64:	2404000c */ 	addiu	$a0,$zero,0xc
/*  f053b68:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f053b6c:	46083002 */ 	mul.s	$f0,$f6,$f8
/*  f053b70:	0fc41b99 */ 	jal	cheatIsActive
/*  f053b74:	e7a00018 */ 	swc1	$f0,0x18($sp)
/*  f053b78:	10400009 */ 	beqz	$v0,.L0f053ba0
/*  f053b7c:	c7a00018 */ 	lwc1	$f0,0x18($sp)
/*  f053b80:	3c014100 */ 	lui	$at,0x4100
/*  f053b84:	44811000 */ 	mtc1	$at,$f2
/*  f053b88:	00000000 */ 	sll	$zero,$zero,0x0
/*  f053b8c:	4602003c */ 	c.lt.s	$f0,$f2
/*  f053b90:	00000000 */ 	sll	$zero,$zero,0x0
/*  f053b94:	45000002 */ 	bc1f	.L0f053ba0
/*  f053b98:	00000000 */ 	sll	$zero,$zero,0x0
/*  f053b9c:	46001006 */ 	mov.s	$f0,$f2
.L0f053ba0:
/*  f053ba0:	3c04800a */ 	lui	$a0,0x800a
/*  f053ba4:	44050000 */ 	mfc1	$a1,$f0
/*  f053ba8:	0fc0cfea */ 	jal	chrSetShield
/*  f053bac:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f053bb0:	3c0a800a */ 	lui	$t2,0x800a
/*  f053bb4:	8d4aa3f8 */ 	lw	$t2,-0x5c08($t2)
/*  f053bb8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f053bbc:	3c01800a */ 	lui	$at,0x800a
/*  f053bc0:	254b0004 */ 	addiu	$t3,$t2,0x4
/*  f053bc4:	ac2ba3f8 */ 	sw	$t3,-0x5c08($at)
/*  f053bc8:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f053bcc:	03e00008 */ 	jr	$ra
/*  f053bd0:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0098
 */
bool aiSetReactionSpeed(void)
{
	s8 *cmd = (s8 *)g_Vars.ailist + g_Vars.aioffset;

	g_Vars.chrdata->speedrating = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0099
 */
bool aiSetRecoverySpeed(void)
{
	s8 *cmd = (s8 *)g_Vars.ailist + g_Vars.aioffset;

	g_Vars.chrdata->arghrating = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 009a
 */
bool aiSetAccuracy(void)
{
	s8 *cmd = (s8 *)g_Vars.ailist + g_Vars.aioffset;

	g_Vars.chrdata->accuracyrating = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01c6
 */
bool aiSetDodgeRating(void)
{
	s8 *cmd = (s8 *)g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] == 0) {
		g_Vars.chrdata->dodgerating = cmd[3];
	} else if (cmd[2] == 1) {
		g_Vars.chrdata->maxdodgerating = cmd[3];
	} else {
		g_Vars.chrdata->dodgerating = cmd[3];
		g_Vars.chrdata->maxdodgerating = cmd[3];
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01c7
 */
bool aiSetUnarmedDodgeRating(void)
{
	s8 *cmd = (s8 *)g_Vars.ailist + g_Vars.aioffset;

	g_Vars.chrdata->unarmeddodgerating = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 009b
 */
bool aiSetFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);
	chrSetFlags(g_Vars.chrdata, flags, cmd[6]);

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 009c
 */
bool aiUnsetFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);
	chrUnsetFlags(g_Vars.chrdata, flags, cmd[6]);

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 009d
 */
bool aiIfHasFlag(void)
{
	bool result;
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	result = chrHasFlag(g_Vars.chrdata, flags, cmd[7]);

	if (cmd[6] == 0) {
		result = !result;
	}

	if (result) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[8]);
	} else {
		g_Vars.aioffset += 9;
	}

	return false;
}

/**
 * @cmd 009e
 */
bool aiChrSetFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	chrSetFlagsById(g_Vars.chrdata, cmd[2], flags, cmd[7]);
	g_Vars.aioffset += 8;

	return false;
}

/**
 * @cmd 009f
 */
bool aiChrUnsetFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	chrUnsetFlagsById(g_Vars.chrdata, cmd[2], flags, cmd[7]);
	g_Vars.aioffset += 8;

	return false;
}

/**
 * @cmd 00a0
 */
bool aiIfChrHasFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);

	if (chrHasFlagById(g_Vars.chrdata, cmd[2], flags, cmd[7])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[8]);
	} else {
		g_Vars.aioffset += 9;
	}

	return false;
}

/**
 * @cmd 00a1
 */
bool aiSetStageFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);
	chrSetStageFlag(g_Vars.chrdata, flags);
	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 00a2
 */
bool aiUnsetStageFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);
	chrUnsetStageFlag(g_Vars.chrdata, flags);
	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 00a3
 */
bool aiIfStageFlagEq(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	if ((chrHasStageFlag(g_Vars.chrdata, flags) && cmd[6] == 1) ||
			(!chrHasStageFlag(g_Vars.chrdata, flags) && cmd[6] == 0)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 00a4
 */
bool aiSetChrflag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	g_Vars.chrdata->chrflags |= flags;
	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 00a5
 */
bool aiUnsetChrflag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	g_Vars.chrdata->chrflags &= ~flags;
	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 00a6
 */
bool aiIfHasChrflag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);

	if ((g_Vars.chrdata->chrflags & flags) == flags) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 00a7
 */
bool aiChrSetChrflag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->chrflags |= flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00a8
 */
bool aiChrUnsetChrflag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->chrflags &= ~flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00a9
 */
bool aiIfChrHasChrflag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && (chr->chrflags & flags) == flags) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 011b
 */
bool aiChrSetHiddenFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->hidden |= flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 011c
 */
bool aiChrUnsetHiddenFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->hidden &= ~flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 011d
 */
bool aiIfChrHasHiddenFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && (chr->hidden & flags) == flags) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 00aa
 */
bool aiSetObjFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->flags |= flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00ab
 */
bool aiUnsetObjFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->flags &= ~flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00ac
 */
bool aiIfObjHasFlag(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && (obj->flags & flags) == flags) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 00ad
 */
bool aiSetObjFlag2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->flags2 |= flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00ae
 */
bool aiUnsetObjFlag2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->flags2 &= ~flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00af
 */
bool aiIfObjHasFlag2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && (obj->flags2 & flags) == flags) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 0118
 */
bool aiSetObjFlag3(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->flags3 |= flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 0119
 */
bool aiUnsetObjFlag3(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->flags3 &= ~flags;
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 011a
 */
bool aiIfObjHasFlag3(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[4] << 16) | (cmd[5] << 8) | cmd[6] | (cmd[3] << 24);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && (obj->flags3 & flags) == flags) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 00b0
 */
bool aiSetChrPreset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	chrSetChrPreset(g_Vars.chrdata, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00b1
 */
bool aiSetChrTarget(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	chrSetChrPresetByChrnum(g_Vars.chrdata, cmd[2], cmd[3]);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00b2
 */
bool aiSetPadPreset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad_id = cmd[3] | (cmd[2] << 8);

	if (g_Vars.chrdata) {
		chrSetPadPreset(g_Vars.chrdata, pad_id);
	} else if (g_Vars.aicdata) {
		g_Vars.aicdata->base.pad = pad_id;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00b3
 */
bool aiChrSetPadPreset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad_id = cmd[4] | (cmd[3] << 8);

	chrSetPadPresetByChrnum(g_Vars.chrdata, cmd[2], pad_id);

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 00b4
 */
bool aiChrCopyPadPreset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chrsrc = chrFindById(g_Vars.chrdata, cmd[2]);
	struct chrdata *chrdst = chrFindById(g_Vars.chrdata, cmd[3]);

	chrdst->padpreset1 = chrsrc->padpreset1;
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00b5
 */
GLOBAL_ASM(
glabel aiPrint
/*  f054ec4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f054ec8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f054ecc:	0fc47bba */ 	jal	dprint
/*  f054ed0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f054ed4:	10400001 */ 	beqz	$v0,.L0f054edc
/*  f054ed8:	3c03800a */ 	lui	$v1,%hi(g_Vars)
.L0f054edc:
/*  f054edc:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f054ee0:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f054ee4:	0fc136d0 */ 	jal	chraiGetCommandLength
/*  f054ee8:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f054eec:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f054ef0:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f054ef4:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f054ef8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f054efc:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f054f00:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f054f04:	ac6f0438 */ 	sw	$t7,0x438($v1)
/*  f054f08:	03e00008 */ 	jr	$ra
/*  f054f0c:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch because the if statement gets optimised out
//bool aiPrint(void)
//{
//	u32 len;
//
//	if (dprint()) {
//		// empty
//	}
//
//	len = chraiGetCommandLength(g_Vars.ailist, g_Vars.aioffset);
//
//	g_Vars.aioffset += len;
//
//	return false;
//}

/**
 * @cmd 0091
 */
bool aiNoOp0091(void)
{
	g_Vars.aioffset += 2;
	return false;
}

/**
 * @cmd 00b6
 */
bool aiRestartTimer(void)
{
	if (g_Vars.chrdata) {
		chrRestartTimer(g_Vars.chrdata);
	} else if (g_Vars.hovdata) {
		heliRestartTimer(g_Vars.hovdata);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00b7
 */
bool aiResetTimer(void)
{
	g_Vars.chrdata->timer60 = 0;
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00b8
 */
bool aiPauseTimer(void)
{
	g_Vars.chrdata->hidden &= ~CHRHFLAG_TIMER_RUNNING;
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00b9
 */
bool aiResumeTimer(void)
{
	g_Vars.chrdata->hidden |= CHRHFLAG_TIMER_RUNNING;
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00ba
 */
bool aiIfTimerStopped(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if ((g_Vars.chrdata->hidden & CHRHFLAG_TIMER_RUNNING) == 0) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 00bb
 */
bool aiIfTimerGreaterThanRandom(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 timer = chrGetTimer(g_Vars.chrdata);

	if (g_Vars.chrdata->random < timer) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 00bc
 */
GLOBAL_ASM(
glabel aiIfTimerLessThan
/*  f05511c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f055120:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f055124:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f055128:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05512c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f055130:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f055134:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f055138:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f05513c:	90480003 */ 	lbu	$t0,0x3($v0)
/*  f055140:	904b0004 */ 	lbu	$t3,0x4($v0)
/*  f055144:	0018cc00 */ 	sll	$t9,$t8,0x10
/*  f055148:	00084a00 */ 	sll	$t1,$t0,0x8
/*  f05514c:	03295025 */ 	or	$t2,$t9,$t1
/*  f055150:	014b6025 */ 	or	$t4,$t2,$t3
/*  f055154:	448c2000 */ 	mtc1	$t4,$f4
/*  f055158:	3c014f80 */ 	lui	$at,0x4f80
/*  f05515c:	05810004 */ 	bgez	$t4,.L0f055170
/*  f055160:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f055164:	44814000 */ 	mtc1	$at,$f8
/*  f055168:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05516c:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f055170:
/*  f055170:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f055174:	3c014270 */ 	lui	$at,0x4270
/*  f055178:	44815000 */ 	mtc1	$at,$f10
/*  f05517c:	1080000b */ 	beqz	$a0,.L0f0551ac
/*  f055180:	460a3083 */ 	div.s	$f2,$f6,$f10
/*  f055184:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f055188:	0fc127ea */ 	jal	chrGetTimer
/*  f05518c:	e7a20018 */ 	swc1	$f2,0x18($sp)
/*  f055190:	c7a20018 */ 	lwc1	$f2,0x18($sp)
/*  f055194:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f055198:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05519c:	4602003c */ 	c.lt.s	$f0,$f2
/*  f0551a0:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f0551a4:	4503000f */ 	bc1tl	.L0f0551e4
/*  f0551a8:	8c640434 */ 	lw	$a0,0x434($v1)
.L0f0551ac:
/*  f0551ac:	8c640430 */ 	lw	$a0,0x430($v1)
/*  f0551b0:	50800014 */ 	beqzl	$a0,.L0f055204
/*  f0551b4:	8c6d0438 */ 	lw	$t5,0x438($v1)
/*  f0551b8:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f0551bc:	0fc1ec48 */ 	jal	heliGetTimer
/*  f0551c0:	e7a20018 */ 	swc1	$f2,0x18($sp)
/*  f0551c4:	c7a20018 */ 	lwc1	$f2,0x18($sp)
/*  f0551c8:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0551cc:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0551d0:	4602003c */ 	c.lt.s	$f0,$f2
/*  f0551d4:	8fa2001c */ 	lw	$v0,0x1c($sp)
/*  f0551d8:	4502000a */ 	bc1fl	.L0f055204
/*  f0551dc:	8c6d0438 */ 	lw	$t5,0x438($v1)
/*  f0551e0:	8c640434 */ 	lw	$a0,0x434($v1)
.L0f0551e4:
/*  f0551e4:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f0551e8:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0551ec:	90460005 */ 	lbu	$a2,0x5($v0)
/*  f0551f0:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0551f4:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0551f8:	10000004 */ 	beqz	$zero,.L0f05520c
/*  f0551fc:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f055200:	8c6d0438 */ 	lw	$t5,0x438($v1)
.L0f055204:
/*  f055204:	25ae0006 */ 	addiu	$t6,$t5,0x6
/*  f055208:	ac6e0438 */ 	sw	$t6,0x438($v1)
.L0f05520c:
/*  f05520c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f055210:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f055214:	00001025 */ 	or	$v0,$zero,$zero
/*  f055218:	03e00008 */ 	jr	$ra
/*  f05521c:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 00bd
 */
GLOBAL_ASM(
glabel aiIfTimerGreaterThan
/*  f055220:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f055224:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f055228:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05522c:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f055230:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f055234:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f055238:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05523c:	3c014f80 */ 	lui	$at,0x4f80
/*  f055240:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f055244:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f055248:	90480003 */ 	lbu	$t0,0x3($v0)
/*  f05524c:	904b0004 */ 	lbu	$t3,0x4($v0)
/*  f055250:	0018cc00 */ 	sll	$t9,$t8,0x10
/*  f055254:	00084a00 */ 	sll	$t1,$t0,0x8
/*  f055258:	03295025 */ 	or	$t2,$t9,$t1
/*  f05525c:	014b6025 */ 	or	$t4,$t2,$t3
/*  f055260:	448c2000 */ 	mtc1	$t4,$f4
/*  f055264:	05810004 */ 	bgez	$t4,.L0f055278
/*  f055268:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f05526c:	44814000 */ 	mtc1	$at,$f8
/*  f055270:	00000000 */ 	sll	$zero,$zero,0x0
/*  f055274:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f055278:
/*  f055278:	3c014270 */ 	lui	$at,0x4270
/*  f05527c:	44815000 */ 	mtc1	$at,$f10
/*  f055280:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f055284:	460a3403 */ 	div.s	$f16,$f6,$f10
/*  f055288:	10800004 */ 	beqz	$a0,.L0f05529c
/*  f05528c:	e7b00020 */ 	swc1	$f16,0x20($sp)
/*  f055290:	0fc127ea */ 	jal	chrGetTimer
/*  f055294:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f055298:	8fa20024 */ 	lw	$v0,0x24($sp)
.L0f05529c:
/*  f05529c:	8e040430 */ 	lw	$a0,0x430($s0)
/*  f0552a0:	50800005 */ 	beqzl	$a0,.L0f0552b8
/*  f0552a4:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f0552a8:	0fc1ec48 */ 	jal	heliGetTimer
/*  f0552ac:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f0552b0:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f0552b4:	8e040424 */ 	lw	$a0,0x424($s0)
.L0f0552b8:
/*  f0552b8:	5080000a */ 	beqzl	$a0,.L0f0552e4
/*  f0552bc:	8e040430 */ 	lw	$a0,0x430($s0)
/*  f0552c0:	0fc127ea */ 	jal	chrGetTimer
/*  f0552c4:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f0552c8:	c7b20020 */ 	lwc1	$f18,0x20($sp)
/*  f0552cc:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f0552d0:	4600903c */ 	c.lt.s	$f18,$f0
/*  f0552d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0552d8:	4503000d */ 	bc1tl	.L0f055310
/*  f0552dc:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f0552e0:	8e040430 */ 	lw	$a0,0x430($s0)
.L0f0552e4:
/*  f0552e4:	50800010 */ 	beqzl	$a0,.L0f055328
/*  f0552e8:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f0552ec:	0fc1ec48 */ 	jal	heliGetTimer
/*  f0552f0:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f0552f4:	c7a40020 */ 	lwc1	$f4,0x20($sp)
/*  f0552f8:	8fa20024 */ 	lw	$v0,0x24($sp)
/*  f0552fc:	4600203c */ 	c.lt.s	$f4,$f0
/*  f055300:	00000000 */ 	sll	$zero,$zero,0x0
/*  f055304:	45020008 */ 	bc1fl	.L0f055328
/*  f055308:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f05530c:	8e040434 */ 	lw	$a0,0x434($s0)
.L0f055310:
/*  f055310:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f055314:	0fc13583 */ 	jal	chraiGoToLabel
/*  f055318:	90460005 */ 	lbu	$a2,0x5($v0)
/*  f05531c:	10000004 */ 	beqz	$zero,.L0f055330
/*  f055320:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f055324:	8e0d0438 */ 	lw	$t5,0x438($s0)
.L0f055328:
/*  f055328:	25ae0006 */ 	addiu	$t6,$t5,0x6
/*  f05532c:	ae0e0438 */ 	sw	$t6,0x438($s0)
.L0f055330:
/*  f055330:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f055334:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f055338:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f05533c:	03e00008 */ 	jr	$ra
/*  f055340:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 00be
 */
bool aiShowCountdownTimer(void)
{
	countdownTimerSetVisible(1, true);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00bf
 */
bool aiHideCountdownTimer(void)
{
	countdownTimerSetVisible(1, false);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00c0
 */
bool aiSetCountdownTimerValue(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 seconds = cmd[3] | (cmd[2] << 8);

	countdownTimerSetValue(seconds * 60);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00c1
 */
bool aiStopCountdownTimer(void)
{
	countdownTimerSetRunning(false);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00c2
 */
bool aiStartCountdownTimer(void)
{
	countdownTimerSetRunning(true);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00c3
 */
bool aiIfCountdownTimerStopped(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (!countdownTimerIsRunning()) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 00c4
 */
bool aiIfCountdownTimerLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 value = cmd[3] | (cmd[2] << 8);

	if (countdownTimerGetValue() < value * 60) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 00c5
 */
bool aiIfCountdownTimerGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 value = cmd[3] | (cmd[2] << 8);

	if (countdownTimerGetValue() > value * 60) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 00c6
 */
GLOBAL_ASM(
glabel aiSpawnChrAtPad
/*  f05565c:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f055660:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f055664:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f055668:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05566c:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f055670:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f055674:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f055678:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05567c:	90780004 */ 	lbu	$t8,0x4($v1)
/*  f055680:	906a0005 */ 	lbu	$t2,0x5($v1)
/*  f055684:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f055688:	032a5825 */ 	or	$t3,$t9,$t2
/*  f05568c:	a7ab0032 */ 	sh	$t3,0x32($sp)
/*  f055690:	906e0009 */ 	lbu	$t6,0x9($v1)
/*  f055694:	906c0008 */ 	lbu	$t4,0x8($v1)
/*  f055698:	9079000a */ 	lbu	$t9,0xa($v1)
/*  f05569c:	000e7c00 */ 	sll	$t7,$t6,0x10
/*  f0556a0:	000c6e00 */ 	sll	$t5,$t4,0x18
/*  f0556a4:	906e0006 */ 	lbu	$t6,0x6($v1)
/*  f0556a8:	01afc025 */ 	or	$t8,$t5,$t7
/*  f0556ac:	906c000b */ 	lbu	$t4,0xb($v1)
/*  f0556b0:	906f0007 */ 	lbu	$t7,0x7($v1)
/*  f0556b4:	00195200 */ 	sll	$t2,$t9,0x8
/*  f0556b8:	030a5825 */ 	or	$t3,$t8,$t2
/*  f0556bc:	000e6a00 */ 	sll	$t5,$t6,0x8
/*  f0556c0:	016c4025 */ 	or	$t0,$t3,$t4
/*  f0556c4:	01af1025 */ 	or	$v0,$t5,$t7
/*  f0556c8:	3044ffff */ 	andi	$a0,$v0,0xffff
/*  f0556cc:	afa8002c */ 	sw	$t0,0x2c($sp)
/*  f0556d0:	0c006134 */ 	jal	ailistFindById
/*  f0556d4:	afa30034 */ 	sw	$v1,0x34($sp)
/*  f0556d8:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f0556dc:	8fa8002c */ 	lw	$t0,0x2c($sp)
/*  f0556e0:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f0556e4:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f0556e8:	80660003 */ 	lb	$a2,0x3($v1)
/*  f0556ec:	afa20010 */ 	sw	$v0,0x10($sp)
/*  f0556f0:	97a70032 */ 	lhu	$a3,0x32($sp)
/*  f0556f4:	afa30034 */ 	sw	$v1,0x34($sp)
/*  f0556f8:	0fc12d5e */ 	jal	chrSpawnAtPad
/*  f0556fc:	afa80014 */ 	sw	$t0,0x14($sp)
/*  f055700:	10400007 */ 	beqz	$v0,.L0f055720
/*  f055704:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f055708:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f05570c:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f055710:	0fc13583 */ 	jal	chraiGoToLabel
/*  f055714:	9066000c */ 	lbu	$a2,0xc($v1)
/*  f055718:	10000004 */ 	beqz	$zero,.L0f05572c
/*  f05571c:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f055720:
/*  f055720:	8e180438 */ 	lw	$t8,0x438($s0)
/*  f055724:	270a000d */ 	addiu	$t2,$t8,0xd
/*  f055728:	ae0a0438 */ 	sw	$t2,0x438($s0)
.L0f05572c:
/*  f05572c:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f055730:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f055734:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f055738:	03e00008 */ 	jr	$ra
/*  f05573c:	00001025 */ 	or	$v0,$zero,$zero
);

//bool aiSpawnChrAtPad(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	u16 pad = cmd[5] | (cmd[4] << 8);
//	u32 flags = (cmd[9] << 16) | (cmd[10] << 8) | cmd[11] | (cmd[8] << 24);
//	s32 ailistid = cmd[7] | (cmd[6] << 8);
//	u8 *ailist = ailistFindById(ailistid & 0xffff);
//
//	if (chrSpawnAtPad(g_Vars.chrdata, cmd[2], (s8)cmd[3], pad, ailist, flags)) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[12]);
//	} else {
//		g_Vars.aioffset += 13;
//	}
//
//	return false;
//}

/**
 * @cmd 00c7
 */
GLOBAL_ASM(
glabel aiSpawnChrAtChr
/*  f055740:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f055744:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f055748:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05574c:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f055750:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f055754:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f055758:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f05575c:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f055760:	90780007 */ 	lbu	$t8,0x7($v1)
/*  f055764:	90680008 */ 	lbu	$t0,0x8($v1)
/*  f055768:	906b0009 */ 	lbu	$t3,0x9($v1)
/*  f05576c:	906e000a */ 	lbu	$t6,0xa($v1)
/*  f055770:	0018ce00 */ 	sll	$t9,$t8,0x18
/*  f055774:	00084c00 */ 	sll	$t1,$t0,0x10
/*  f055778:	03295025 */ 	or	$t2,$t9,$t1
/*  f05577c:	000b6200 */ 	sll	$t4,$t3,0x8
/*  f055780:	014c6825 */ 	or	$t5,$t2,$t4
/*  f055784:	01ae7825 */ 	or	$t7,$t5,$t6
/*  f055788:	afaf0028 */ 	sw	$t7,0x28($sp)
/*  f05578c:	90780005 */ 	lbu	$t8,0x5($v1)
/*  f055790:	90790006 */ 	lbu	$t9,0x6($v1)
/*  f055794:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f055798:	00184200 */ 	sll	$t0,$t8,0x8
/*  f05579c:	01191025 */ 	or	$v0,$t0,$t9
/*  f0557a0:	0c006134 */ 	jal	ailistFindById
/*  f0557a4:	3044ffff */ 	andi	$a0,$v0,0xffff
/*  f0557a8:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f0557ac:	8fab0028 */ 	lw	$t3,0x28($sp)
/*  f0557b0:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f0557b4:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f0557b8:	80660003 */ 	lb	$a2,0x3($v1)
/*  f0557bc:	90670004 */ 	lbu	$a3,0x4($v1)
/*  f0557c0:	afa20010 */ 	sw	$v0,0x10($sp)
/*  f0557c4:	0fc12d7d */ 	jal	chrSpawnAtChr
/*  f0557c8:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0557cc:	10400007 */ 	beqz	$v0,.L0f0557ec
/*  f0557d0:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f0557d4:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f0557d8:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f0557dc:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0557e0:	9066000b */ 	lbu	$a2,0xb($v1)
/*  f0557e4:	10000004 */ 	beqz	$zero,.L0f0557f8
/*  f0557e8:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f0557ec:
/*  f0557ec:	8e0a0438 */ 	lw	$t2,0x438($s0)
/*  f0557f0:	254c000c */ 	addiu	$t4,$t2,0xc
/*  f0557f4:	ae0c0438 */ 	sw	$t4,0x438($s0)
.L0f0557f8:
/*  f0557f8:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f0557fc:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f055800:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f055804:	03e00008 */ 	jr	$ra
/*  f055808:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch due to different temporary registers
//bool aiSpawnChrAtChr(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	u32 flags = (cmd[8] << 16) | (cmd[9] << 8) | cmd[10] | (cmd[7] << 24);
//	u32 ailistid = cmd[6] | (cmd[5] << 8);
//	u8 *ailist = ailistFindById(ailistid);
//
//	if (chrSpawnAtChr(g_Vars.chrdata, cmd[2], (s8)cmd[3], cmd[4], ailist, flags)) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[11]);
//	} else {
//		g_Vars.aioffset += 12;
//	}
//
//	return false;
//}

/**
 * @cmd 00c8
 */
GLOBAL_ASM(
glabel aiTryEquipWeapon
/*  f05580c:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f055810:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f055814:	8d250438 */ 	lw	$a1,0x438($t1)
/*  f055818:	8d2e0434 */ 	lw	$t6,0x434($t1)
/*  f05581c:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f055820:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f055824:	01c54021 */ 	addu	$t0,$t6,$a1
/*  f055828:	91190006 */ 	lbu	$t9,0x6($t0)
/*  f05582c:	910f0005 */ 	lbu	$t7,0x5($t0)
/*  f055830:	910c0007 */ 	lbu	$t4,0x7($t0)
/*  f055834:	00195400 */ 	sll	$t2,$t9,0x10
/*  f055838:	000fc600 */ 	sll	$t8,$t7,0x18
/*  f05583c:	91190002 */ 	lbu	$t9,0x2($t0)
/*  f055840:	030a5825 */ 	or	$t3,$t8,$t2
/*  f055844:	910a0003 */ 	lbu	$t2,0x3($t0)
/*  f055848:	8d220424 */ 	lw	$v0,0x424($t1)
/*  f05584c:	000c6a00 */ 	sll	$t5,$t4,0x8
/*  f055850:	910f0008 */ 	lbu	$t7,0x8($t0)
/*  f055854:	0019c200 */ 	sll	$t8,$t9,0x8
/*  f055858:	016d7025 */ 	or	$t6,$t3,$t5
/*  f05585c:	030a6025 */ 	or	$t4,$t8,$t2
/*  f055860:	afac001c */ 	sw	$t4,0x1c($sp)
/*  f055864:	00001825 */ 	or	$v1,$zero,$zero
/*  f055868:	10400065 */ 	beqz	$v0,.L0f055a00
/*  f05586c:	01cf3825 */ 	or	$a3,$t6,$t7
/*  f055870:	8c4b001c */ 	lw	$t3,0x1c($v0)
/*  f055874:	11600062 */ 	beqz	$t3,.L0f055a00
/*  f055878:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05587c:	8c4d0020 */ 	lw	$t5,0x20($v0)
/*  f055880:	24040014 */ 	addiu	$a0,$zero,0x14
/*  f055884:	11a0005e */ 	beqz	$t5,.L0f055a00
/*  f055888:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05588c:	afa70020 */ 	sw	$a3,0x20($sp)
/*  f055890:	0fc41b99 */ 	jal	cheatIsActive
/*  f055894:	afa80024 */ 	sw	$t0,0x24($sp)
/*  f055898:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f05589c:	10400012 */ 	beqz	$v0,.L0f0558e8
/*  f0558a0:	8fa70020 */ 	lw	$a3,0x20($sp)
/*  f0558a4:	3c01efff */ 	lui	$at,0xefff
/*  f0558a8:	3421ffff */ 	ori	$at,$at,0xffff
/*  f0558ac:	8fb90024 */ 	lw	$t9,0x24($sp)
/*  f0558b0:	00e17024 */ 	and	$t6,$a3,$at
/*  f0558b4:	3c012000 */ 	lui	$at,0x2000
/*  f0558b8:	3c04800a */ 	lui	$a0,0x800a
/*  f0558bc:	01c13825 */ 	or	$a3,$t6,$at
/*  f0558c0:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f0558c4:	0fc22eb4 */ 	jal	func0f08bad0
/*  f0558c8:	93260004 */ 	lbu	$a2,0x4($t9)
/*  f0558cc:	3c05800a */ 	lui	$a1,0x800a
/*  f0558d0:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f0558d4:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f0558d8:	8ca5a3f8 */ 	lw	$a1,-0x5c08($a1)
/*  f0558dc:	00401825 */ 	or	$v1,$v0,$zero
/*  f0558e0:	10000047 */ 	beqz	$zero,.L0f055a00
/*  f0558e4:	8fa80024 */ 	lw	$t0,0x24($sp)
.L0f0558e8:
/*  f0558e8:	24040012 */ 	addiu	$a0,$zero,0x12
/*  f0558ec:	0fc41b99 */ 	jal	cheatIsActive
/*  f0558f0:	afa70020 */ 	sw	$a3,0x20($sp)
/*  f0558f4:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f0558f8:	10400036 */ 	beqz	$v0,.L0f0559d4
/*  f0558fc:	8fa70020 */ 	lw	$a3,0x20($sp)
/*  f055900:	8fb80024 */ 	lw	$t8,0x24($sp)
/*  f055904:	93060004 */ 	lbu	$a2,0x4($t8)
/*  f055908:	24cafffe */ 	addiu	$t2,$a2,-2
/*  f05590c:	2d410021 */ 	sltiu	$at,$t2,0x21
/*  f055910:	10200026 */ 	beqz	$at,.L0f0559ac
/*  f055914:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f055918:	3c017f1b */ 	lui	$at,%hi(var7f1a9c54)
/*  f05591c:	002a0821 */ 	addu	$at,$at,$t2
/*  f055920:	8c2a9c54 */ 	lw	$t2,%lo(var7f1a9c54)($at)
/*  f055924:	01400008 */ 	jr	$t2
/*  f055928:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05592c:	3c04800a */ 	lui	$a0,0x800a
/*  f055930:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f055934:	24050108 */ 	addiu	$a1,$zero,0x108
/*  f055938:	0fc22eb4 */ 	jal	func0f08bad0
/*  f05593c:	24060018 */ 	addiu	$a2,$zero,0x18
/*  f055940:	1000001e */ 	beqz	$zero,.L0f0559bc
/*  f055944:	00401825 */ 	or	$v1,$v0,$zero
/*  f055948:	3c0c800a */ 	lui	$t4,0x800a
/*  f05594c:	8d8ca474 */ 	lw	$t4,-0x5b8c($t4)
/*  f055950:	24010033 */ 	addiu	$at,$zero,0x33
/*  f055954:	1581000e */ 	bne	$t4,$at,.L0f055990
/*  f055958:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05595c:	0fc5b367 */ 	jal	getDifficulty
/*  f055960:	afa70020 */ 	sw	$a3,0x20($sp)
/*  f055964:	24010002 */ 	addiu	$at,$zero,0x2
/*  f055968:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f05596c:	14410008 */ 	bne	$v0,$at,.L0f055990
/*  f055970:	8fa70020 */ 	lw	$a3,0x20($sp)
/*  f055974:	8fab0024 */ 	lw	$t3,0x24($sp)
/*  f055978:	3c04800a */ 	lui	$a0,0x800a
/*  f05597c:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f055980:	0fc22eb4 */ 	jal	func0f08bad0
/*  f055984:	91660004 */ 	lbu	$a2,0x4($t3)
/*  f055988:	1000000c */ 	beqz	$zero,.L0f0559bc
/*  f05598c:	00401825 */ 	or	$v1,$v0,$zero
.L0f055990:
/*  f055990:	3c04800a */ 	lui	$a0,0x800a
/*  f055994:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f055998:	24050108 */ 	addiu	$a1,$zero,0x108
/*  f05599c:	0fc22eb4 */ 	jal	func0f08bad0
/*  f0559a0:	24060018 */ 	addiu	$a2,$zero,0x18
/*  f0559a4:	10000005 */ 	beqz	$zero,.L0f0559bc
/*  f0559a8:	00401825 */ 	or	$v1,$v0,$zero
.L0f0559ac:
/*  f0559ac:	3c04800a */ 	lui	$a0,0x800a
/*  f0559b0:	0fc22eb4 */ 	jal	func0f08bad0
/*  f0559b4:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f0559b8:	00401825 */ 	or	$v1,$v0,$zero
.L0f0559bc:
/*  f0559bc:	3c05800a */ 	lui	$a1,0x800a
/*  f0559c0:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f0559c4:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f0559c8:	8ca5a3f8 */ 	lw	$a1,-0x5c08($a1)
/*  f0559cc:	1000000c */ 	beqz	$zero,.L0f055a00
/*  f0559d0:	8fa80024 */ 	lw	$t0,0x24($sp)
.L0f0559d4:
/*  f0559d4:	8fad0024 */ 	lw	$t5,0x24($sp)
/*  f0559d8:	3c04800a */ 	lui	$a0,0x800a
/*  f0559dc:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f0559e0:	0fc22eb4 */ 	jal	func0f08bad0
/*  f0559e4:	91a60004 */ 	lbu	$a2,0x4($t5)
/*  f0559e8:	3c05800a */ 	lui	$a1,0x800a
/*  f0559ec:	3c09800a */ 	lui	$t1,%hi(g_Vars)
/*  f0559f0:	25299fc0 */ 	addiu	$t1,$t1,%lo(g_Vars)
/*  f0559f4:	8ca5a3f8 */ 	lw	$a1,-0x5c08($a1)
/*  f0559f8:	00401825 */ 	or	$v1,$v0,$zero
/*  f0559fc:	8fa80024 */ 	lw	$t0,0x24($sp)
.L0f055a00:
/*  f055a00:	10600007 */ 	beqz	$v1,.L0f055a20
/*  f055a04:	24ae000a */ 	addiu	$t6,$a1,0xa
/*  f055a08:	8d240434 */ 	lw	$a0,0x434($t1)
/*  f055a0c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f055a10:	91060009 */ 	lbu	$a2,0x9($t0)
/*  f055a14:	3c01800a */ 	lui	$at,0x800a
/*  f055a18:	10000002 */ 	beqz	$zero,.L0f055a24
/*  f055a1c:	ac22a3f8 */ 	sw	$v0,-0x5c08($at)
.L0f055a20:
/*  f055a20:	ad2e0438 */ 	sw	$t6,0x438($t1)
.L0f055a24:
/*  f055a24:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f055a28:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f055a2c:	00001025 */ 	or	$v0,$zero,$zero
/*  f055a30:	03e00008 */ 	jr	$ra
/*  f055a34:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 00c9
 */
bool aiTryEquipHat(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[5] << 16) | (cmd[6] << 8) | cmd[7] | (cmd[4] << 24);
	u32 thing = cmd[3] | (cmd[2] << 8);
	bool ok = false;

	if (g_Vars.chrdata && g_Vars.chrdata->prop && g_Vars.chrdata->unk020) {
		ok = chrTryEquipHat(g_Vars.chrdata, thing, flags);
	}

	if (ok) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[8]);
	} else {
		g_Vars.aioffset += 9;
	}

	return false;
}

/**
 * @cmd 00ca
 */
GLOBAL_ASM(
glabel aiDuplicateChr
/*  f055b18:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f055b1c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f055b20:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f055b24:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f055b28:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f055b2c:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f055b30:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f055b34:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f055b38:	01cf2821 */ 	addu	$a1,$t6,$t7
/*  f055b3c:	90b80005 */ 	lbu	$t8,0x5($a1)
/*  f055b40:	90a80006 */ 	lbu	$t0,0x6($a1)
/*  f055b44:	90ab0007 */ 	lbu	$t3,0x7($a1)
/*  f055b48:	90ae0008 */ 	lbu	$t6,0x8($a1)
/*  f055b4c:	0018ce00 */ 	sll	$t9,$t8,0x18
/*  f055b50:	00084c00 */ 	sll	$t1,$t0,0x10
/*  f055b54:	03295025 */ 	or	$t2,$t9,$t1
/*  f055b58:	000b6200 */ 	sll	$t4,$t3,0x8
/*  f055b5c:	014c6825 */ 	or	$t5,$t2,$t4
/*  f055b60:	01ae7825 */ 	or	$t7,$t5,$t6
/*  f055b64:	afaf0060 */ 	sw	$t7,0x60($sp)
/*  f055b68:	90b80003 */ 	lbu	$t8,0x3($a1)
/*  f055b6c:	90b90004 */ 	lbu	$t9,0x4($a1)
/*  f055b70:	afa50064 */ 	sw	$a1,0x64($sp)
/*  f055b74:	00184200 */ 	sll	$t0,$t8,0x8
/*  f055b78:	01191025 */ 	or	$v0,$t0,$t9
/*  f055b7c:	0c006134 */ 	jal	ailistFindById
/*  f055b80:	3044ffff */ 	andi	$a0,$v0,0xffff
/*  f055b84:	8fab0064 */ 	lw	$t3,0x64($sp)
/*  f055b88:	afa00054 */ 	sw	$zero,0x54($sp)
/*  f055b8c:	3c04800a */ 	lui	$a0,0x800a
/*  f055b90:	00408025 */ 	or	$s0,$v0,$zero
/*  f055b94:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f055b98:	0fc126d1 */ 	jal	chrFindById
/*  f055b9c:	91650002 */ 	lbu	$a1,0x2($t3)
/*  f055ba0:	00408825 */ 	or	$s1,$v0,$zero
/*  f055ba4:	afa00048 */ 	sw	$zero,0x48($sp)
/*  f055ba8:	afa00040 */ 	sw	$zero,0x40($sp)
/*  f055bac:	afa00030 */ 	sw	$zero,0x30($sp)
/*  f055bb0:	1040007b */ 	beqz	$v0,.L0f055da0
/*  f055bb4:	afa0002c */ 	sw	$zero,0x2c($sp)
/*  f055bb8:	8c4a0018 */ 	lw	$t2,0x18($v0)
/*  f055bbc:	3c04800a */ 	lui	$a0,0x800a
/*  f055bc0:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f055bc4:	314c0002 */ 	andi	$t4,$t2,0x2
/*  f055bc8:	51800076 */ 	beqzl	$t4,.L0f055da4
/*  f055bcc:	8fb90054 */ 	lw	$t9,0x54($sp)
/*  f055bd0:	8fad0060 */ 	lw	$t5,0x60($sp)
/*  f055bd4:	84450010 */ 	lh	$a1,0x10($v0)
/*  f055bd8:	84470000 */ 	lh	$a3,0x0($v0)
/*  f055bdc:	afb00010 */ 	sw	$s0,0x10($sp)
/*  f055be0:	8c84a3e4 */ 	lw	$a0,-0x5c1c($a0)
/*  f055be4:	0fc12d7d */ 	jal	chrSpawnAtChr
/*  f055be8:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f055bec:	5040006d */ 	beqzl	$v0,.L0f055da4
/*  f055bf0:	8fb90054 */ 	lw	$t9,0x54($sp)
/*  f055bf4:	0fc0817b */ 	jal	getLowestUnusedChrId
/*  f055bf8:	8c500004 */ 	lw	$s0,0x4($v0)
/*  f055bfc:	00022c00 */ 	sll	$a1,$v0,0x10
/*  f055c00:	00057403 */ 	sra	$t6,$a1,0x10
/*  f055c04:	01c02825 */ 	or	$a1,$t6,$zero
/*  f055c08:	0fc07937 */ 	jal	chrSetChrnum
/*  f055c0c:	02002025 */ 	or	$a0,$s0,$zero
/*  f055c10:	860f0000 */ 	lh	$t7,0x0($s0)
/*  f055c14:	02202025 */ 	or	$a0,$s1,$zero
/*  f055c18:	00002825 */ 	or	$a1,$zero,$zero
/*  f055c1c:	0fc0a209 */ 	jal	chrGetEquippedWeaponAttachment
/*  f055c20:	a62f0132 */ 	sh	$t7,0x132($s1)
/*  f055c24:	5040000d */ 	beqzl	$v0,.L0f055c5c
/*  f055c28:	02202025 */ 	or	$a0,$s1,$zero
/*  f055c2c:	8c420004 */ 	lw	$v0,0x4($v0)
/*  f055c30:	02002025 */ 	or	$a0,$s0,$zero
/*  f055c34:	00003825 */ 	or	$a3,$zero,$zero
/*  f055c38:	84450004 */ 	lh	$a1,0x4($v0)
/*  f055c3c:	9046005c */ 	lbu	$a2,0x5c($v0)
/*  f055c40:	0fc22eb4 */ 	jal	func0f08bad0
/*  f055c44:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f055c48:	50400004 */ 	beqzl	$v0,.L0f055c5c
/*  f055c4c:	02202025 */ 	or	$a0,$s1,$zero
/*  f055c50:	8c580004 */ 	lw	$t8,0x4($v0)
/*  f055c54:	afb8002c */ 	sw	$t8,0x2c($sp)
/*  f055c58:	02202025 */ 	or	$a0,$s1,$zero
.L0f055c5c:
/*  f055c5c:	0fc0a209 */ 	jal	chrGetEquippedWeaponAttachment
/*  f055c60:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f055c64:	5040000d */ 	beqzl	$v0,.L0f055c9c
/*  f055c68:	8fa20048 */ 	lw	$v0,0x48($sp)
/*  f055c6c:	8c420004 */ 	lw	$v0,0x4($v0)
/*  f055c70:	02002025 */ 	or	$a0,$s0,$zero
/*  f055c74:	3c071000 */ 	lui	$a3,0x1000
/*  f055c78:	84450004 */ 	lh	$a1,0x4($v0)
/*  f055c7c:	9046005c */ 	lbu	$a2,0x5c($v0)
/*  f055c80:	0fc22eb4 */ 	jal	func0f08bad0
/*  f055c84:	afa20048 */ 	sw	$v0,0x48($sp)
/*  f055c88:	50400004 */ 	beqzl	$v0,.L0f055c9c
/*  f055c8c:	8fa20048 */ 	lw	$v0,0x48($sp)
/*  f055c90:	8c440004 */ 	lw	$a0,0x4($v0)
/*  f055c94:	afa40030 */ 	sw	$a0,0x30($sp)
/*  f055c98:	8fa20048 */ 	lw	$v0,0x48($sp)
.L0f055c9c:
/*  f055c9c:	8fa40030 */ 	lw	$a0,0x30($sp)
/*  f055ca0:	8fa30040 */ 	lw	$v1,0x40($sp)
/*  f055ca4:	50400010 */ 	beqzl	$v0,.L0f055ce8
/*  f055ca8:	8e230178 */ 	lw	$v1,0x178($s1)
/*  f055cac:	5060000e */ 	beqzl	$v1,.L0f055ce8
/*  f055cb0:	8e230178 */ 	lw	$v1,0x178($s1)
/*  f055cb4:	1080000b */ 	beqz	$a0,.L0f055ce4
/*  f055cb8:	8fa8002c */ 	lw	$t0,0x2c($sp)
/*  f055cbc:	5100000a */ 	beqzl	$t0,.L0f055ce8
/*  f055cc0:	8e230178 */ 	lw	$v1,0x178($s1)
/*  f055cc4:	8c590064 */ 	lw	$t9,0x64($v0)
/*  f055cc8:	54790007 */ 	bnel	$v1,$t9,.L0f055ce8
/*  f055ccc:	8e230178 */ 	lw	$v1,0x178($s1)
/*  f055cd0:	8c690064 */ 	lw	$t1,0x64($v1)
/*  f055cd4:	54490004 */ 	bnel	$v0,$t1,.L0f055ce8
/*  f055cd8:	8e230178 */ 	lw	$v1,0x178($s1)
/*  f055cdc:	0fc22b6b */ 	jal	func0f08adac
/*  f055ce0:	01002825 */ 	or	$a1,$t0,$zero
.L0f055ce4:
/*  f055ce4:	8e230178 */ 	lw	$v1,0x178($s1)
.L0f055ce8:
/*  f055ce8:	02002025 */ 	or	$a0,$s0,$zero
/*  f055cec:	50600006 */ 	beqzl	$v1,.L0f055d08
/*  f055cf0:	8e2b0114 */ 	lw	$t3,0x114($s1)
/*  f055cf4:	8c620004 */ 	lw	$v0,0x4($v1)
/*  f055cf8:	00003025 */ 	or	$a2,$zero,$zero
/*  f055cfc:	0fc22776 */ 	jal	chrTryEquipHat
/*  f055d00:	84450004 */ 	lh	$a1,0x4($v0)
/*  f055d04:	8e2b0114 */ 	lw	$t3,0x114($s1)
.L0f055d08:
/*  f055d08:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f055d0c:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f055d10:	ae0b0114 */ 	sw	$t3,0x114($s0)
/*  f055d14:	8e2a0118 */ 	lw	$t2,0x118($s1)
/*  f055d18:	3c0e800a */ 	lui	$t6,0x800a
/*  f055d1c:	ae0a0118 */ 	sw	$t2,0x118($s0)
/*  f055d20:	862c0128 */ 	lh	$t4,0x128($s1)
/*  f055d24:	a60c0128 */ 	sh	$t4,0x128($s0)
/*  f055d28:	8c4d0318 */ 	lw	$t5,0x318($v0)
/*  f055d2c:	55a0000b */ 	bnezl	$t5,.L0f055d5c
/*  f055d30:	8fa80060 */ 	lw	$t0,0x60($sp)
/*  f055d34:	81cfdfeb */ 	lb	$t7,-0x2015($t6)
/*  f055d38:	05e30008 */ 	bgezl	$t7,.L0f055d5c
/*  f055d3c:	8fa80060 */ 	lw	$t0,0x60($sp)
/*  f055d40:	8c580474 */ 	lw	$t8,0x474($v0)
/*  f055d44:	3c010001 */ 	lui	$at,0x1
/*  f055d48:	01614825 */ 	or	$t1,$t3,$at
/*  f055d4c:	5b000003 */ 	blezl	$t8,.L0f055d5c
/*  f055d50:	8fa80060 */ 	lw	$t0,0x60($sp)
/*  f055d54:	ae090114 */ 	sw	$t1,0x114($s0)
/*  f055d58:	8fa80060 */ 	lw	$t0,0x60($sp)
.L0f055d5c:
/*  f055d5c:	310b1000 */ 	andi	$t3,$t0,0x1000
/*  f055d60:	51600005 */ 	beqzl	$t3,.L0f055d78
/*  f055d64:	922d0125 */ 	lbu	$t5,0x125($s1)
/*  f055d68:	8e0a0018 */ 	lw	$t2,0x18($s0)
/*  f055d6c:	314c0400 */ 	andi	$t4,$t2,0x400
/*  f055d70:	ae0c0018 */ 	sw	$t4,0x18($s0)
/*  f055d74:	922d0125 */ 	lbu	$t5,0x125($s1)
.L0f055d78:
/*  f055d78:	a20d0125 */ 	sb	$t5,0x125($s0)
/*  f055d7c:	922e02a2 */ 	lbu	$t6,0x2a2($s1)
/*  f055d80:	a20e02a2 */ 	sb	$t6,0x2a2($s0)
/*  f055d84:	922f02b1 */ 	lbu	$t7,0x2b1($s1)
/*  f055d88:	0fc13301 */ 	jal	rebuildTeams
/*  f055d8c:	a20f02b1 */ 	sb	$t7,0x2b1($s0)
/*  f055d90:	0fc13341 */ 	jal	rebuildSquadrons
/*  f055d94:	00000000 */ 	sll	$zero,$zero,0x0
/*  f055d98:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f055d9c:	afb80054 */ 	sw	$t8,0x54($sp)
.L0f055da0:
/*  f055da0:	8fb90054 */ 	lw	$t9,0x54($sp)
.L0f055da4:
/*  f055da4:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f055da8:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f055dac:	13200009 */ 	beqz	$t9,.L0f055dd4
/*  f055db0:	3c08800a */ 	lui	$t0,0x800a
/*  f055db4:	8fa90064 */ 	lw	$t1,0x64($sp)
/*  f055db8:	8c440434 */ 	lw	$a0,0x434($v0)
/*  f055dbc:	8c450438 */ 	lw	$a1,0x438($v0)
/*  f055dc0:	0fc13583 */ 	jal	chraiGoToLabel
/*  f055dc4:	91260009 */ 	lbu	$a2,0x9($t1)
/*  f055dc8:	3c01800a */ 	lui	$at,0x800a
/*  f055dcc:	10000005 */ 	beqz	$zero,.L0f055de4
/*  f055dd0:	ac22a3f8 */ 	sw	$v0,-0x5c08($at)
.L0f055dd4:
/*  f055dd4:	8d08a3f8 */ 	lw	$t0,-0x5c08($t0)
/*  f055dd8:	3c01800a */ 	lui	$at,0x800a
/*  f055ddc:	250b000a */ 	addiu	$t3,$t0,0xa
/*  f055de0:	ac2ba3f8 */ 	sw	$t3,-0x5c08($at)
.L0f055de4:
/*  f055de4:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f055de8:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f055dec:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f055df0:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*  f055df4:	03e00008 */ 	jr	$ra
/*  f055df8:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 00cb
 */
bool aiMessage(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	char *text = textGet(cmd[4] | (cmd[3] << 8));
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	u32 prevplayernum = g_Vars.currentplayernum;
	u32 playernum = g_Vars.currentplayernum;

	if (chr && chr->prop && (chr->prop->type & 0xff) == PROPTYPE_PLAYER) {
		playernum = propGetPlayerNum(chr->prop);
	}

	setCurrentPlayerNum(playernum);
	currentPlayerQueueMessage(text, 0);
	setCurrentPlayerNum(prevplayernum);

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 01a4
 */
bool aiShowText(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	// cmd[2] = prop
	// cmd[3] = color

	if (cmd[2] == 0) {
		u32 text_id = cmd[5] | (cmd[4] << 8);
		char *text = textGet(text_id);
		func0f0de034(text, 7, cmd[3]);
	} else if (cmd[2] == 1) {
		u32 text_id = cmd[5] | (cmd[4] << 8);
		char *text = textGet(text_id);
		func0f0de034(text, 8, cmd[3]);
	} else {
		func0f0dde60();
	}

	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 00cc
 */
bool aiShowText2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	char *text = textGet(cmd[4] | (cmd[3] << 8));
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	u32 prevplayernum = g_Vars.currentplayernum;
	u32 playernum = g_Vars.currentplayernum;

	if (chr && chr->prop && (chr->prop->type & 0xff) == PROPTYPE_PLAYER) {
		playernum = propGetPlayerNum(chr->prop);
	}

	setCurrentPlayerNum(playernum);
	func0f0de034(text, 6, cmd[5]);
	setCurrentPlayerNum(prevplayernum);

	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 00cd
 */
GLOBAL_ASM(
glabel aiSpeak
/*  f056040:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*  f056044:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f056048:	3c11800a */ 	lui	$s1,%hi(g_Vars)
/*  f05604c:	26319fc0 */ 	addiu	$s1,$s1,%lo(g_Vars)
/*  f056050:	8e2e0434 */ 	lw	$t6,0x434($s1)
/*  f056054:	8e2f0438 */ 	lw	$t7,0x438($s1)
/*  f056058:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f05605c:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f056060:	01cf8021 */ 	addu	$s0,$t6,$t7
/*  f056064:	92050002 */ 	lbu	$a1,0x2($s0)
/*  f056068:	0fc126d1 */ 	jal	chrFindById
/*  f05606c:	8e240424 */ 	lw	$a0,0x424($s1)
/*  f056070:	92180005 */ 	lbu	$t8,0x5($s0)
/*  f056074:	92080006 */ 	lbu	$t0,0x6($s0)
/*  f056078:	8e2e028c */ 	lw	$t6,0x28c($s1)
/*  f05607c:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f056080:	03284825 */ 	or	$t1,$t9,$t0
/*  f056084:	a7a9003e */ 	sh	$t1,0x3e($sp)
/*  f056088:	920a0003 */ 	lbu	$t2,0x3($s0)
/*  f05608c:	920c0004 */ 	lbu	$t4,0x4($s0)
/*  f056090:	00402825 */ 	or	$a1,$v0,$zero
/*  f056094:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f056098:	016c2025 */ 	or	$a0,$t3,$t4
/*  f05609c:	00041c00 */ 	sll	$v1,$a0,0x10
/*  f0560a0:	00036c03 */ 	sra	$t5,$v1,0x10
/*  f0560a4:	afae0038 */ 	sw	$t6,0x38($sp)
/*  f0560a8:	05a00008 */ 	bltz	$t5,.L0f0560cc
/*  f0560ac:	01c03025 */ 	or	$a2,$t6,$zero
/*  f0560b0:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f0560b4:	0fc5b9f1 */ 	jal	textGet
/*  f0560b8:	afae0034 */ 	sw	$t6,0x34($sp)
/*  f0560bc:	8fa50040 */ 	lw	$a1,0x40($sp)
/*  f0560c0:	8fa60034 */ 	lw	$a2,0x34($sp)
/*  f0560c4:	10000002 */ 	beqz	$zero,.L0f0560d0
/*  f0560c8:	afa2002c */ 	sw	$v0,0x2c($sp)
.L0f0560cc:
/*  f0560cc:	afa0002c */ 	sw	$zero,0x2c($sp)
.L0f0560d0:
/*  f0560d0:	10a0000b */ 	beqz	$a1,.L0f056100
/*  f0560d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0560d8:	8ca4001c */ 	lw	$a0,0x1c($a1)
/*  f0560dc:	10800008 */ 	beqz	$a0,.L0f056100
/*  f0560e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0560e4:	908f0000 */ 	lbu	$t7,0x0($a0)
/*  f0560e8:	24010006 */ 	addiu	$at,$zero,0x6
/*  f0560ec:	15e10004 */ 	bne	$t7,$at,.L0f056100
/*  f0560f0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0560f4:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f0560f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0560fc:	00403025 */ 	or	$a2,$v0,$zero
.L0f056100:
/*  f056100:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f056104:	00c02025 */ 	or	$a0,$a2,$zero
/*  f056108:	8fb8002c */ 	lw	$t8,0x2c($sp)
/*  f05610c:	5300000b */ 	beqzl	$t8,.L0f05613c
/*  f056110:	92090002 */ 	lbu	$t1,0x2($s0)
/*  f056114:	92190002 */ 	lbu	$t9,0x2($s0)
/*  f056118:	240100f2 */ 	addiu	$at,$zero,0xf2
/*  f05611c:	24050009 */ 	addiu	$a1,$zero,0x9
/*  f056120:	53210006 */ 	beql	$t9,$at,.L0f05613c
/*  f056124:	92090002 */ 	lbu	$t1,0x2($s0)
/*  f056128:	8e280424 */ 	lw	$t0,0x424($s1)
/*  f05612c:	3406ffff */ 	dli	$a2,0xffff
/*  f056130:	0fc249af */ 	jal	func0f0926bc
/*  f056134:	8d04001c */ 	lw	$a0,0x1c($t0)
/*  f056138:	92090002 */ 	lbu	$t1,0x2($s0)
.L0f05613c:
/*  f05613c:	240100f2 */ 	addiu	$at,$zero,0xf2
/*  f056140:	87a5003e */ 	lh	$a1,0x3e($sp)
/*  f056144:	1521000c */ 	bne	$t1,$at,.L0f056178
/*  f056148:	00003025 */ 	or	$a2,$zero,$zero
/*  f05614c:	8e2a0424 */ 	lw	$t2,0x424($s1)
/*  f056150:	82040007 */ 	lb	$a0,0x7($s0)
/*  f056154:	240b0200 */ 	addiu	$t3,$zero,0x200
/*  f056158:	8d47001c */ 	lw	$a3,0x1c($t2)
/*  f05615c:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f056160:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f056164:	87a5003e */ 	lh	$a1,0x3e($sp)
/*  f056168:	0fc25010 */ 	jal	audioPlayFromProp
/*  f05616c:	00003025 */ 	or	$a2,$zero,$zero
/*  f056170:	1000000a */ 	beqz	$zero,.L0f05619c
/*  f056174:	00403825 */ 	or	$a3,$v0,$zero
.L0f056178:
/*  f056178:	8e2c0424 */ 	lw	$t4,0x424($s1)
/*  f05617c:	82040007 */ 	lb	$a0,0x7($s0)
/*  f056180:	240d0009 */ 	addiu	$t5,$zero,0x9
/*  f056184:	240e0200 */ 	addiu	$t6,$zero,0x200
/*  f056188:	8d87001c */ 	lw	$a3,0x1c($t4)
/*  f05618c:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f056190:	0fc25010 */ 	jal	audioPlayFromProp
/*  f056194:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f056198:	00403825 */ 	or	$a3,$v0,$zero
.L0f05619c:
/*  f05619c:	8faf002c */ 	lw	$t7,0x2c($sp)
/*  f0561a0:	87a4003e */ 	lh	$a0,0x3e($sp)
/*  f0561a4:	11e00009 */ 	beqz	$t7,.L0f0561cc
/*  f0561a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0561ac:	0c004103 */ 	jal	audioIsFiltered
/*  f0561b0:	afa70030 */ 	sw	$a3,0x30($sp)
/*  f0561b4:	14400005 */ 	bnez	$v0,.L0f0561cc
/*  f0561b8:	8fa70030 */ 	lw	$a3,0x30($sp)
/*  f0561bc:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f0561c0:	24050006 */ 	addiu	$a1,$zero,0x6
/*  f0561c4:	0fc37858 */ 	jal	func0f0de160
/*  f0561c8:	92060008 */ 	lbu	$a2,0x8($s0)
.L0f0561cc:
/*  f0561cc:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f0561d0:	8fa40038 */ 	lw	$a0,0x38($sp)
/*  f0561d4:	8e380438 */ 	lw	$t8,0x438($s1)
/*  f0561d8:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f0561dc:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f0561e0:	27190009 */ 	addiu	$t9,$t8,0x9
/*  f0561e4:	ae390438 */ 	sw	$t9,0x438($s1)
/*  f0561e8:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f0561ec:	27bd0048 */ 	addiu	$sp,$sp,0x48
/*  f0561f0:	03e00008 */ 	jr	$ra
/*  f0561f4:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch due to different registers
//bool aiSpeak(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
//	s16 audio_id = cmd[6] | (cmd[5] << 8);
//	s16 text_id = cmd[4] | (cmd[3] << 8);
//	s32 prevplayernum = g_Vars.currentplayernum;
//	s32 playernum = g_Vars.currentplayernum;
//	u32 audioref;
//	char *text = text_id >= 0 ? textGet(text_id) : NULL;
//
//	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
//		playernum = propGetPlayerNum(chr->prop);
//	}
//
//	setCurrentPlayerNum(playernum);
//
//	if (text && cmd[2] != CHR_P1P2) {
//		func0f0926bc(g_Vars.chrdata->prop, 9, 0xffff);
//	}
//
//	if (cmd[2] == CHR_P1P2) {
//		audioref = audioPlayFromProp(cmd[7], audio_id, 0, g_Vars.chrdata->prop, 0, 512);
//	} else {
//		audioref = audioPlayFromProp(cmd[7], audio_id, 0, g_Vars.chrdata->prop, 9, 512);
//	}
//
//	if (text && !audioIsFiltered(audio_id)) {
//		func0f0de160(text, 6, cmd[8], audioref);
//	}
//
//	setCurrentPlayerNum(prevplayernum);
//
//	g_Vars.aioffset += 9;
//
//	return false;
//}

/**
 * @cmd 00ce
 */
bool aiPlaySound(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 audio_id = cmd[3] | (cmd[2] << 8);

	audioPlayFromProp(cmd[4], audio_id, 0, NULL, 0, 0);

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 017c
 */
bool aiAssignSound(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 audio_id = cmd[3] | (cmd[2] << 8);

	audioPlayFromProp(cmd[4], audio_id, -1, NULL, 11, 0);

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 00d3
 */
bool aiAudioMuteChannel(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s8 channel = (s8)cmd[2];

	audioMuteChannel(channel);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0138
 */
bool aiIfChannelIdle(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s8 channel = (s8) cmd[2];

	if (audioIfChannelIdle(channel)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 00d1
 */
bool ai00d1(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 audio_id = cmd[4] | (cmd[3] << 8);
	u16 thing = cmd[6] | (cmd[5] << 8);

	audioPlayFromProp2(cmd[2], audio_id, -1, NULL, thing, 2500, 3000, 0);

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00d2
 */
bool ai00d2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 thing1 = cmd[4] | (cmd[3] << 8);
	u16 thing2 = cmd[6] | (cmd[5] << 8);
	s32 audio_id = func0f0927d4(thing1, 400, 2500, 3000, 32767);

	audioPlayFromProp2(cmd[2], audio_id, -1, NULL, thing2, 2500, 3000, 0);

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00cf
 */
bool ai00cf(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[3]);
	u16 thing = cmd[5] | (cmd[4] << 8);

	if (obj && obj->prop) {
		audioPlayFromProp2(cmd[2], -1, -1, obj->prop, thing, 2500, 3000, 0);
	}

	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 016b
 */
bool ai016b(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[3]);
	u16 thing1 = cmd[5] | (cmd[4] << 8);
	u16 thing2 = cmd[7] | (cmd[6] << 8);
	u16 thing3 = cmd[9] | (cmd[8] << 8);

	if (obj && obj->prop) {
		s32 thing1again;

		if (thing1 == 0) {
			thing1again = -1;
		} else {
			thing1again = thing1;
		}

		audioPlayFromProp2(cmd[2], -1, -1, obj->prop, thing1again, thing2, thing3, 2);
	}

	g_Vars.aioffset += 10;

	return false;
}

/**
 * @cmd 0179
 */
bool ai0179(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 thing1 = cmd[5] | (cmd[4] << 8);
	u16 thing2 = cmd[7] | (cmd[6] << 8);
	u16 thing3 = cmd[9] | (cmd[8] << 8);

	if (cmd[10] == 0) {
		struct defaultobj *obj = objFindByTagId(cmd[3]);

		if (obj && obj->prop) {
			audioPlayFromProp2(cmd[2], -1, -1, obj->prop, thing1, thing2, thing3, 0);
		}
	} else {
		struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[3]);

		if (chr && chr->prop) {
			audioPlayFromProp2(cmd[2], -1, -1, chr->prop, thing1, thing2, thing3, 0);
		}
	}

	g_Vars.aioffset += 11;

	return false;
}

/**
 * @cmd 00d0
 */
bool ai00d0(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 thing1 = cmd[4] | (cmd[3] << 8);
	s16 thing2 = cmd[6] | (cmd[5] << 8);

	func0f0939f8(0, NULL, thing2, thing1, -1, 2, 0, 0, 0, -1, 0, -1, -1, -1, -1);

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00d4
 */
bool ai00d4(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 thing = cmd[4] | (cmd[3] << 8);

	if (func0f092914((s8)cmd[2]) < thing) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 00d5
 */
GLOBAL_ASM(
glabel ai00d5
/*  f05691c:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f056920:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f056924:	8cae0434 */ 	lw	$t6,0x434($a1)
/*  f056928:	8caf0438 */ 	lw	$t7,0x438($a1)
/*  f05692c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f056930:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f056934:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f056938:	0fc0e206 */ 	jal	pathFindById
/*  f05693c:	90440002 */ 	lbu	$a0,0x2($v0)
/*  f056940:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f056944:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f056948:	8ca30428 */ 	lw	$v1,0x428($a1)
/*  f05694c:	00403025 */ 	or	$a2,$v0,$zero
/*  f056950:	50600005 */ 	beqzl	$v1,.L0f056968
/*  f056954:	8ca40430 */ 	lw	$a0,0x430($a1)
/*  f056958:	ac620080 */ 	sw	$v0,0x80($v1)
/*  f05695c:	8cb80428 */ 	lw	$t8,0x428($a1)
/*  f056960:	af000084 */ 	sw	$zero,0x84($t8)
/*  f056964:	8ca40430 */ 	lw	$a0,0x430($a1)
.L0f056968:
/*  f056968:	50800032 */ 	beqzl	$a0,.L0f056a34
/*  f05696c:	8cb80438 */ 	lw	$t8,0x438($a1)
/*  f056970:	0fc1eb7d */ 	jal	objGetHeli
/*  f056974:	afa60018 */ 	sw	$a2,0x18($sp)
/*  f056978:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f05697c:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f056980:	8fa60018 */ 	lw	$a2,0x18($sp)
/*  f056984:	8cb90430 */ 	lw	$t9,0x430($a1)
/*  f056988:	3c017f1b */ 	lui	$at,%hi(var7f1a9cd8)
/*  f05698c:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f056990:	af260088 */ 	sw	$a2,0x88($t9)
/*  f056994:	8ca80430 */ 	lw	$t0,0x430($a1)
/*  f056998:	ad00008c */ 	sw	$zero,0x8c($t0)
/*  f05699c:	8ca90430 */ 	lw	$t1,0x430($a1)
/*  f0569a0:	8d230088 */ 	lw	$v1,0x88($t1)
/*  f0569a4:	906a0005 */ 	lbu	$t2,0x5($v1)
/*  f0569a8:	354b0004 */ 	ori	$t3,$t2,0x4
/*  f0569ac:	1040001e */ 	beqz	$v0,.L0f056a28
/*  f0569b0:	a06b0005 */ 	sb	$t3,0x5($v1)
/*  f0569b4:	44800000 */ 	mtc1	$zero,$f0
/*  f0569b8:	ac4000bc */ 	sw	$zero,0xbc($v0)
/*  f0569bc:	a0400096 */ 	sb	$zero,0x96($v0)
/*  f0569c0:	e4400078 */ 	swc1	$f0,0x78($v0)
/*  f0569c4:	e440007c */ 	swc1	$f0,0x7c($v0)
/*  f0569c8:	e4400080 */ 	swc1	$f0,0x80($v0)
/*  f0569cc:	e44000d0 */ 	swc1	$f0,0xd0($v0)
/*  f0569d0:	e44000d4 */ 	swc1	$f0,0xd4($v0)
/*  f0569d4:	e44000dc */ 	swc1	$f0,0xdc($v0)
/*  f0569d8:	e44000d8 */ 	swc1	$f0,0xd8($v0)
/*  f0569dc:	e44000a0 */ 	swc1	$f0,0xa0($v0)
/*  f0569e0:	e440009c */ 	swc1	$f0,0x9c($v0)
/*  f0569e4:	e4400098 */ 	swc1	$f0,0x98($v0)
/*  f0569e8:	e44000b0 */ 	swc1	$f0,0xb0($v0)
/*  f0569ec:	e44000ac */ 	swc1	$f0,0xac($v0)
/*  f0569f0:	e44000a8 */ 	swc1	$f0,0xa8($v0)
/*  f0569f4:	e44000a4 */ 	swc1	$f0,0xa4($v0)
/*  f0569f8:	e44000b4 */ 	swc1	$f0,0xb4($v0)
/*  f0569fc:	c4249cd8 */ 	lwc1	$f4,%lo(var7f1a9cd8)($at)
/*  f056a00:	8c4d0008 */ 	lw	$t5,0x8($v0)
/*  f056a04:	3c012000 */ 	lui	$at,0x2000
/*  f056a08:	ac4000c0 */ 	sw	$zero,0xc0($v0)
/*  f056a0c:	01a17025 */ 	or	$t6,$t5,$at
/*  f056a10:	ac4000c4 */ 	sw	$zero,0xc4($v0)
/*  f056a14:	a0400097 */ 	sb	$zero,0x97($v0)
/*  f056a18:	a44c0090 */ 	sh	$t4,0x90($v0)
/*  f056a1c:	ac4e0008 */ 	sw	$t6,0x8($v0)
/*  f056a20:	10000003 */ 	beqz	$zero,.L0f056a30
/*  f056a24:	e44400b8 */ 	swc1	$f4,0xb8($v0)
.L0f056a28:
/*  f056a28:	8caf0430 */ 	lw	$t7,0x430($a1)
/*  f056a2c:	a5e00090 */ 	sh	$zero,0x90($t7)
.L0f056a30:
/*  f056a30:	8cb80438 */ 	lw	$t8,0x438($a1)
.L0f056a34:
/*  f056a34:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f056a38:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f056a3c:	27190003 */ 	addiu	$t9,$t8,0x3
/*  f056a40:	acb90438 */ 	sw	$t9,0x438($a1)
/*  f056a44:	03e00008 */ 	jr	$ra
/*  f056a48:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 00d6
 */
GLOBAL_ASM(
glabel ai00d6
/*  f056a4c:	3c04800a */ 	lui	$a0,%hi(g_Vars)
/*  f056a50:	24849fc0 */ 	addiu	$a0,$a0,%lo(g_Vars)
/*  f056a54:	8c8e0434 */ 	lw	$t6,0x434($a0)
/*  f056a58:	8c8f0438 */ 	lw	$t7,0x438($a0)
/*  f056a5c:	3c0142c8 */ 	lui	$at,0x42c8
/*  f056a60:	44815000 */ 	mtc1	$at,$f10
/*  f056a64:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f056a68:	904a0002 */ 	lbu	$t2,0x2($v0)
/*  f056a6c:	904c0003 */ 	lbu	$t4,0x3($v0)
/*  f056a70:	90580004 */ 	lbu	$t8,0x4($v0)
/*  f056a74:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f056a78:	016c6825 */ 	or	$t5,$t3,$t4
/*  f056a7c:	448d3000 */ 	mtc1	$t5,$f6
/*  f056a80:	90480005 */ 	lbu	$t0,0x5($v0)
/*  f056a84:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f056a88:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f056a8c:	8c830428 */ 	lw	$v1,0x428($a0)
/*  f056a90:	3c014670 */ 	lui	$at,0x4670
/*  f056a94:	03284825 */ 	or	$t1,$t9,$t0
/*  f056a98:	44892000 */ 	mtc1	$t1,$f4
/*  f056a9c:	44819000 */ 	mtc1	$at,$f18
/*  f056aa0:	460a4402 */ 	mul.s	$f16,$f8,$f10
/*  f056aa4:	46802020 */ 	cvt.s.w	$f0,$f4
/*  f056aa8:	10600004 */ 	beqz	$v1,.L0f056abc
/*  f056aac:	46128083 */ 	div.s	$f2,$f16,$f18
/*  f056ab0:	e4620070 */ 	swc1	$f2,0x70($v1)
/*  f056ab4:	8c8e0428 */ 	lw	$t6,0x428($a0)
/*  f056ab8:	e5c00074 */ 	swc1	$f0,0x74($t6)
.L0f056abc:
/*  f056abc:	8c820430 */ 	lw	$v0,0x430($a0)
/*  f056ac0:	50400005 */ 	beqzl	$v0,.L0f056ad8
/*  f056ac4:	8c980438 */ 	lw	$t8,0x438($a0)
/*  f056ac8:	e4420068 */ 	swc1	$f2,0x68($v0)
/*  f056acc:	8c8f0430 */ 	lw	$t7,0x430($a0)
/*  f056ad0:	e5e0006c */ 	swc1	$f0,0x6c($t7)
/*  f056ad4:	8c980438 */ 	lw	$t8,0x438($a0)
.L0f056ad8:
/*  f056ad8:	00001025 */ 	or	$v0,$zero,$zero
/*  f056adc:	27190006 */ 	addiu	$t9,$t8,0x6
/*  f056ae0:	03e00008 */ 	jr	$ra
/*  f056ae4:	ac990438 */ 	sw	$t9,0x438($a0)
);

/**
 * @cmd 00d7
 */
GLOBAL_ASM(
glabel ai00d7
/*  f056ae8:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f056aec:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f056af0:	8ca30438 */ 	lw	$v1,0x438($a1)
/*  f056af4:	8cae0434 */ 	lw	$t6,0x434($a1)
/*  f056af8:	3c017f1b */ 	lui	$at,%hi(var7f1a9cdc)
/*  f056afc:	c42a9cdc */ 	lwc1	$f10,%lo(var7f1a9cdc)($at)
/*  f056b00:	01c31021 */ 	addu	$v0,$t6,$v1
/*  f056b04:	90490002 */ 	lbu	$t1,0x2($v0)
/*  f056b08:	904b0003 */ 	lbu	$t3,0x3($v0)
/*  f056b0c:	904f0004 */ 	lbu	$t7,0x4($v0)
/*  f056b10:	00095200 */ 	sll	$t2,$t1,0x8
/*  f056b14:	014b6025 */ 	or	$t4,$t2,$t3
/*  f056b18:	448c3000 */ 	mtc1	$t4,$f6
/*  f056b1c:	90590005 */ 	lbu	$t9,0x5($v0)
/*  f056b20:	000fc200 */ 	sll	$t8,$t7,0x8
/*  f056b24:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f056b28:	8ca4042c */ 	lw	$a0,0x42c($a1)
/*  f056b2c:	3c014561 */ 	lui	$at,0x4561
/*  f056b30:	03194025 */ 	or	$t0,$t8,$t9
/*  f056b34:	44882000 */ 	mtc1	$t0,$f4
/*  f056b38:	44819000 */ 	mtc1	$at,$f18
/*  f056b3c:	460a4402 */ 	mul.s	$f16,$f8,$f10
/*  f056b40:	00001025 */ 	or	$v0,$zero,$zero
/*  f056b44:	46802020 */ 	cvt.s.w	$f0,$f4
/*  f056b48:	10800005 */ 	beqz	$a0,.L0f056b60
/*  f056b4c:	46128083 */ 	div.s	$f2,$f16,$f18
/*  f056b50:	e482006c */ 	swc1	$f2,0x6c($a0)
/*  f056b54:	8cad042c */ 	lw	$t5,0x42c($a1)
/*  f056b58:	e5a00070 */ 	swc1	$f0,0x70($t5)
/*  f056b5c:	8ca30438 */ 	lw	$v1,0x438($a1)
.L0f056b60:
/*  f056b60:	246e0006 */ 	addiu	$t6,$v1,0x6
/*  f056b64:	03e00008 */ 	jr	$ra
/*  f056b68:	acae0438 */ 	sw	$t6,0x438($a1)
);

/**
 * @cmd 00d8
 */
bool aiNoOp00d8(void)
{
	g_Vars.aioffset += 3;
	return false;
}

/**
 * @cmd 00d9
 */
bool aiNoOp00d9(void)
{
	g_Vars.aioffset += 3;
	return false;
}

/**
 * @cmd 00da
 */
bool aiSetObjImage(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		if (obj->type == OBJTYPE_SINGLEMONITOR) {
			struct singlemonitorobj *sm = (struct singlemonitorobj *) obj;
			imageSlotSetImage(&sm->image, cmd[4], obj);
		} else if (obj->type == OBJTYPE_MULTIMONITOR) {
			u8 slot = cmd[3];
			if (slot < 4) {
				struct multimonitorobj *mm = (struct multimonitorobj *) obj;
				imageSlotSetImage(&mm->subobjs[slot].image, cmd[4], obj);
			}
		}
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 00db
 */
bool aiNoOp00db(void)
{
	g_Vars.aioffset += 3;
	return false;
}

/**
 * @cmd 00dc
 */
bool aiEndLevel(void)
{
	if (func0f11ef48()) {
		if (var800624a4) {
			func0000e95c(90);
		} else if (g_Vars.unk0004d3) {
			g_Vars.unk0004d6 = 1;
		} else {
			func0000e990();
		}
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00dd
 */
bool ai00dd(void)
{
	func0f0b9afc();
	g_Vars.aioffset += 2;
	return false;
}

/**
 * @cmd 00de
 */
bool aiWarpJoToPad(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad_id = cmd[3] | (cmd[2] << 8);
	warpBondToPad(pad_id);

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 010d
 */
bool aiNoOp010d(void)
{
	g_Vars.aioffset += 2;
	return false;
}

/**
 * @cmd 0111
 */
bool aiSetCameraAnimation(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 anim_id = cmd[3] | (cmd[2] << 8);

	cameraDoAnimation(anim_id);

	if (g_Vars.currentplayer->unk19c8 == 0) {
		return true;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0113
 */
bool aiIfInCutscene(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.in_cutscene) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0174
 */
bool aiIfCutsceneButtonPressed(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if ((g_Vars.in_cutscene && var8009de24) ||
			(g_Vars.stagenum == STAGE_CITRAINING && var80087260 > 0)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0175
 */
bool ai0175(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	func0f0ba190(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}
/**
 * @cmd 0112
 */
GLOBAL_ASM(
glabel ai0112
/*  f056f50:	3c0e800a */ 	lui	$t6,0x800a
/*  f056f54:	3c0f800a */ 	lui	$t7,0x800a
/*  f056f58:	8defa3f8 */ 	lw	$t7,-0x5c08($t7)
/*  f056f5c:	8dcea3f4 */ 	lw	$t6,-0x5c0c($t6)
/*  f056f60:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f056f64:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f056f68:	01cf2821 */ 	addu	$a1,$t6,$t7
/*  f056f6c:	90b80002 */ 	lbu	$t8,0x2($a1)
/*  f056f70:	90a80003 */ 	lbu	$t0,0x3($a1)
/*  f056f74:	3401ffff */ 	dli	$at,0xffff
/*  f056f78:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f056f7c:	03284825 */ 	or	$t1,$t9,$t0
/*  f056f80:	a7a90032 */ 	sh	$t1,0x32($sp)
/*  f056f84:	90aa0006 */ 	lbu	$t2,0x6($a1)
/*  f056f88:	90ac0007 */ 	lbu	$t4,0x7($a1)
/*  f056f8c:	00001825 */ 	or	$v1,$zero,$zero
/*  f056f90:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f056f94:	016c3025 */ 	or	$a2,$t3,$t4
/*  f056f98:	54c10005 */ 	bnel	$a2,$at,.L0f056fb0
/*  f056f9c:	3401fffe */ 	dli	$at,0xfffe
/*  f056fa0:	44801000 */ 	mtc1	$zero,$f2
/*  f056fa4:	1000001a */ 	beqz	$zero,.L0f057010
/*  f056fa8:	90a40004 */ 	lbu	$a0,0x4($a1)
/*  f056fac:	3401fffe */ 	dli	$at,0xfffe
.L0f056fb0:
/*  f056fb0:	14c10013 */ 	bne	$a2,$at,.L0f057000
/*  f056fb4:	87a40032 */ 	lh	$a0,0x32($sp)
/*  f056fb8:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f056fbc:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f056fc0:	0c008dda */ 	jal	func00023768
/*  f056fc4:	afa60024 */ 	sw	$a2,0x24($sp)
/*  f056fc8:	244dfffe */ 	addiu	$t5,$v0,-2
/*  f056fcc:	448d2000 */ 	mtc1	$t5,$f4
/*  f056fd0:	44803000 */ 	mtc1	$zero,$f6
/*  f056fd4:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f056fd8:	468020a0 */ 	cvt.s.w	$f2,$f4
/*  f056fdc:	8fa50034 */ 	lw	$a1,0x34($sp)
/*  f056fe0:	8fa60024 */ 	lw	$a2,0x24($sp)
/*  f056fe4:	4606103c */ 	c.lt.s	$f2,$f6
/*  f056fe8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f056fec:	45020008 */ 	bc1fl	.L0f057010
/*  f056ff0:	90a40004 */ 	lbu	$a0,0x4($a1)
/*  f056ff4:	44801000 */ 	mtc1	$zero,$f2
/*  f056ff8:	10000005 */ 	beqz	$zero,.L0f057010
/*  f056ffc:	90a40004 */ 	lbu	$a0,0x4($a1)
.L0f057000:
/*  f057000:	44864000 */ 	mtc1	$a2,$f8
/*  f057004:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057008:	468040a0 */ 	cvt.s.w	$f2,$f8
/*  f05700c:	90a40004 */ 	lbu	$a0,0x4($a1)
.L0f057010:
/*  f057010:	240100ff */ 	addiu	$at,$zero,0xff
/*  f057014:	3c02800a */ 	lui	$v0,0x800a
/*  f057018:	54810011 */ 	bnel	$a0,$at,.L0f057060
/*  f05701c:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f057020:	8c42a3e4 */ 	lw	$v0,-0x5c1c($v0)
/*  f057024:	10400015 */ 	beqz	$v0,.L0f05707c
/*  f057028:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05702c:	8c4402e4 */ 	lw	$a0,0x2e4($v0)
/*  f057030:	04800012 */ 	bltz	$a0,.L0f05707c
/*  f057034:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057038:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f05703c:	afa60024 */ 	sw	$a2,0x24($sp)
/*  f057040:	0fc2556c */ 	jal	objFindByTagId
/*  f057044:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f057048:	8fa50034 */ 	lw	$a1,0x34($sp)
/*  f05704c:	8fa60024 */ 	lw	$a2,0x24($sp)
/*  f057050:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f057054:	10000009 */ 	beqz	$zero,.L0f05707c
/*  f057058:	00401825 */ 	or	$v1,$v0,$zero
/*  f05705c:	afa50034 */ 	sw	$a1,0x34($sp)
.L0f057060:
/*  f057060:	afa60024 */ 	sw	$a2,0x24($sp)
/*  f057064:	0fc2556c */ 	jal	objFindByTagId
/*  f057068:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f05706c:	8fa50034 */ 	lw	$a1,0x34($sp)
/*  f057070:	8fa60024 */ 	lw	$a2,0x24($sp)
/*  f057074:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f057078:	00401825 */ 	or	$v1,$v0,$zero
.L0f05707c:
/*  f05707c:	10600049 */ 	beqz	$v1,.L0f0571a4
/*  f057080:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057084:	8c6e0014 */ 	lw	$t6,0x14($v1)
/*  f057088:	11c00046 */ 	beqz	$t6,.L0f0571a4
/*  f05708c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057090:	8c6f0018 */ 	lw	$t7,0x18($v1)
/*  f057094:	8de40020 */ 	lw	$a0,0x20($t7)
/*  f057098:	1480000e */ 	bnez	$a0,.L0f0570d4
/*  f05709c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0570a0:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f0570a4:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f0570a8:	afa60024 */ 	sw	$a2,0x24($sp)
/*  f0570ac:	0fc2ccb9 */ 	jal	func0f0b32e4
/*  f0570b0:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f0570b4:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f0570b8:	8fa50034 */ 	lw	$a1,0x34($sp)
/*  f0570bc:	8fa60024 */ 	lw	$a2,0x24($sp)
/*  f0570c0:	8c780018 */ 	lw	$t8,0x18($v1)
/*  f0570c4:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f0570c8:	af020020 */ 	sw	$v0,0x20($t8)
/*  f0570cc:	8c790018 */ 	lw	$t9,0x18($v1)
/*  f0570d0:	8f240020 */ 	lw	$a0,0x20($t9)
.L0f0570d4:
/*  f0570d4:	10800033 */ 	beqz	$a0,.L0f0571a4
/*  f0570d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0570dc:	90a80005 */ 	lbu	$t0,0x5($a1)
/*  f0570e0:	3c09800a */ 	lui	$t1,0x800a
/*  f0570e4:	8d29a48c */ 	lw	$t1,-0x5b74($t1)
/*  f0570e8:	44888000 */ 	mtc1	$t0,$f16
/*  f0570ec:	3c013f80 */ 	lui	$at,0x3f80
/*  f0570f0:	44815000 */ 	mtc1	$at,$f10
/*  f0570f4:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f0570f8:	3401fffe */ 	dli	$at,0xfffe
/*  f0570fc:	1120000d */ 	beqz	$t1,.L0f057134
/*  f057100:	46125003 */ 	div.s	$f0,$f10,$f18
/*  f057104:	10c1000b */ 	beq	$a2,$at,.L0f057134
/*  f057108:	3c0a800a */ 	lui	$t2,0x800a
/*  f05710c:	8d4ade20 */ 	lw	$t2,-0x21e0($t2)
/*  f057110:	3c013e80 */ 	lui	$at,0x3e80
/*  f057114:	44818000 */ 	mtc1	$at,$f16
/*  f057118:	448a2000 */ 	mtc1	$t2,$f4
/*  f05711c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057120:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f057124:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f057128:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05712c:	46104282 */ 	mul.s	$f10,$f8,$f16
/*  f057130:	460a1080 */ 	add.s	$f2,$f2,$f10
.L0f057134:
/*  f057134:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f057138:	e7a00028 */ 	swc1	$f0,0x28($sp)
/*  f05713c:	0c008c28 */ 	jal	func000230a0
/*  f057140:	e7a20020 */ 	swc1	$f2,0x20($sp)
/*  f057144:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f057148:	c7a20020 */ 	lwc1	$f2,0x20($sp)
/*  f05714c:	c7a00028 */ 	lwc1	$f0,0x28($sp)
/*  f057150:	44809000 */ 	mtc1	$zero,$f18
/*  f057154:	8c640018 */ 	lw	$a0,0x18($v1)
/*  f057158:	44071000 */ 	mfc1	$a3,$f2
/*  f05715c:	87a50032 */ 	lh	$a1,0x32($sp)
/*  f057160:	00003025 */ 	or	$a2,$zero,$zero
/*  f057164:	e7a00010 */ 	swc1	$f0,0x10($sp)
/*  f057168:	0c007733 */ 	jal	func0001dccc
/*  f05716c:	e7b20014 */ 	swc1	$f18,0x14($sp)
/*  f057170:	0fc57222 */ 	jal	func0f15c888
/*  f057174:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057178:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f05717c:	3c0142c8 */ 	lui	$at,0x42c8
/*  f057180:	44814000 */ 	mtc1	$at,$f8
/*  f057184:	8c640018 */ 	lw	$a0,0x18($v1)
/*  f057188:	c4840014 */ 	lwc1	$f4,0x14($a0)
/*  f05718c:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f057190:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057194:	46083402 */ 	mul.s	$f16,$f6,$f8
/*  f057198:	44058000 */ 	mfc1	$a1,$f16
/*  f05719c:	0c006bd9 */ 	jal	func0001af64
/*  f0571a0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f0571a4:
/*  f0571a4:	3c0b800a */ 	lui	$t3,0x800a
/*  f0571a8:	8d6ba3f8 */ 	lw	$t3,-0x5c08($t3)
/*  f0571ac:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f0571b0:	3c01800a */ 	lui	$at,0x800a
/*  f0571b4:	256c0008 */ 	addiu	$t4,$t3,0x8
/*  f0571b8:	ac2ca3f8 */ 	sw	$t4,-0x5c08($at)
/*  f0571bc:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f0571c0:	03e00008 */ 	jr	$ra
/*  f0571c4:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0114
 */
bool aiShowChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->unk020) {
		func0f0604bc(chr->prop);
		func0f0602f0(chr->prop);
		func0f0220ac(chr);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0115
 */
bool aiHideChr(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->unk020) {
		func0f065c44(chr->prop);
		func0f0605c4(chr->prop);
		func0f060300(chr->prop);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0116
 */
bool aiShowObj(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->unk18) {
		func0f0604bc(obj->prop);
		func0f0602f0(obj->prop);

		if (g_Vars.currentplayer->eyespy == NULL && obj->type == OBJTYPE_WEAPON) {
			struct weaponobj *weapon = (struct weaponobj *) obj;

			if (weapon->weapon_id == WEAPON_CAMSPY) {
				func0f011630();
			}
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0117
 */
bool aiHideObj(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->unk18) {
		if (obj->prop->unk18) {
			func0f082f88(obj->prop);
		} else {
			func0f065c44(obj->prop);
			func0f0605c4(obj->prop);
			func0f060300(obj->prop);
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00df
 */
bool ai00df(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct tag *tag = tagFindById(cmd[2]);

	if (tag) {
		s32 a = func0f092098(tag);

		if (a >= 0) {
			u32 d = func0f092004(tag->unk06 + a);
			func0f0b9bac(d, cmd[4] | (cmd[3] << 8), cmd[6] | (cmd[5] << 8));
		}
	}

	g_Vars.aioffset += 7;

	return false;
}

/**
 * @cmd 00e0
 */
GLOBAL_ASM(
glabel aiRevokeControl
/*  f0574fc:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f057500:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f057504:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f057508:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05750c:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f057510:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f057514:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f057518:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05751c:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f057520:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f057524:	0fc126d1 */ 	jal	chrFindById
/*  f057528:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f05752c:	5040002a */ 	beqzl	$v0,.L0f0575d8
/*  f057530:	8e0e0438 */ 	lw	$t6,0x438($s0)
/*  f057534:	8c43001c */ 	lw	$v1,0x1c($v0)
/*  f057538:	50600027 */ 	beqzl	$v1,.L0f0575d8
/*  f05753c:	8e0e0438 */ 	lw	$t6,0x438($s0)
/*  f057540:	90780000 */ 	lbu	$t8,0x0($v1)
/*  f057544:	24010006 */ 	addiu	$at,$zero,0x6
/*  f057548:	57010023 */ 	bnel	$t8,$at,.L0f0575d8
/*  f05754c:	8e0e0438 */ 	lw	$t6,0x438($s0)
/*  f057550:	8e19028c */ 	lw	$t9,0x28c($s0)
/*  f057554:	afb90024 */ 	sw	$t9,0x24($sp)
/*  f057558:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f05755c:	8c44001c */ 	lw	$a0,0x1c($v0)
/*  f057560:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f057564:	00402025 */ 	or	$a0,$v0,$zero
/*  f057568:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f05756c:	0fc2af1d */ 	jal	func0f0abc74
/*  f057570:	00002825 */ 	or	$a1,$zero,$zero
/*  f057574:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f057578:	0fc2a57b */ 	jal	func0f0a95ec
/*  f05757c:	00002825 */ 	or	$a1,$zero,$zero
/*  f057580:	8fa8002c */ 	lw	$t0,0x2c($sp)
/*  f057584:	91020003 */ 	lbu	$v0,0x3($t0)
/*  f057588:	30490002 */ 	andi	$t1,$v0,0x2
/*  f05758c:	55200006 */ 	bnezl	$t1,.L0f0575a8
/*  f057590:	304b0004 */ 	andi	$t3,$v0,0x4
/*  f057594:	0fc37e8e */ 	jal	func0f0dfa38
/*  f057598:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f05759c:	8faa002c */ 	lw	$t2,0x2c($sp)
/*  f0575a0:	91420003 */ 	lbu	$v0,0x3($t2)
/*  f0575a4:	304b0004 */ 	andi	$t3,$v0,0x4
.L0f0575a8:
/*  f0575a8:	15600003 */ 	bnez	$t3,.L0f0575b8
/*  f0575ac:	24040010 */ 	addiu	$a0,$zero,0x10
/*  f0575b0:	0fc24202 */ 	jal	countdownTimerSetVisible
/*  f0575b4:	00002825 */ 	or	$a1,$zero,$zero
.L0f0575b8:
/*  f0575b8:	8e0c028c */ 	lw	$t4,0x28c($s0)
/*  f0575bc:	3c018007 */ 	lui	$at,0x8007
/*  f0575c0:	8fa40024 */ 	lw	$a0,0x24($sp)
/*  f0575c4:	000c6880 */ 	sll	$t5,$t4,0x2
/*  f0575c8:	002d0821 */ 	addu	$at,$at,$t5
/*  f0575cc:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f0575d0:	ac200750 */ 	sw	$zero,0x750($at)
/*  f0575d4:	8e0e0438 */ 	lw	$t6,0x438($s0)
.L0f0575d8:
/*  f0575d8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f0575dc:	00001025 */ 	or	$v0,$zero,$zero
/*  f0575e0:	25cf0004 */ 	addiu	$t7,$t6,0x4
/*  f0575e4:	ae0f0438 */ 	sw	$t7,0x438($s0)
/*  f0575e8:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f0575ec:	03e00008 */ 	jr	$ra
/*  f0575f0:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

// Mismatch due to differing registers
//bool aiRevokeControl(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
//
//	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
//		u32 prevplayernum = g_Vars.currentplayernum;
//		setCurrentPlayerNum(propGetPlayerNum(chr->prop));
//		func0f0abc74(4, false);
//		func0f0a95ec(2, false);
//
//		if ((cmd[3] & 2) == 0) {
//			func0f0dfa38(2);
//		}
//
//		if ((cmd[3] & 4) == 0) {
//			countdownTimerSetVisible(16, false);
//		}
//
//		g_PlayersWithControl[g_Vars.currentplayernum] = false;
//		setCurrentPlayerNum(prevplayernum);
//	}
//
//	g_Vars.aioffset += 4;
//
//	return false;
//}

/**
 * @cmd 00e1
 */
bool aiGrantControl(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		setCurrentPlayerNum(propGetPlayerNum(chr->prop));
		func0f0abc74(4, true);
		func0f0a95ec(2, true);
		func0f0dfa1c(2);
		countdownTimerSetVisible(16, true);
		g_PlayersWithControl[g_Vars.currentplayernum] = true;
		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00e2
 */
GLOBAL_ASM(
glabel ai00e2
/*  f0576c8:	27bdff60 */ 	addiu	$sp,$sp,-160
/*  f0576cc:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f0576d0:	3c11800a */ 	lui	$s1,%hi(g_Vars)
/*  f0576d4:	26319fc0 */ 	addiu	$s1,$s1,%lo(g_Vars)
/*  f0576d8:	8e2e0434 */ 	lw	$t6,0x434($s1)
/*  f0576dc:	8e2f0438 */ 	lw	$t7,0x438($s1)
/*  f0576e0:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f0576e4:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f0576e8:	01cf8021 */ 	addu	$s0,$t6,$t7
/*  f0576ec:	92050002 */ 	lbu	$a1,0x2($s0)
/*  f0576f0:	0fc126d1 */ 	jal	chrFindById
/*  f0576f4:	8e240424 */ 	lw	$a0,0x424($s1)
/*  f0576f8:	afa20098 */ 	sw	$v0,0x98($sp)
/*  f0576fc:	1040003a */ 	beqz	$v0,.L0f0577e8
/*  f057700:	00001825 */ 	or	$v1,$zero,$zero
/*  f057704:	8c58001c */ 	lw	$t8,0x1c($v0)
/*  f057708:	13000037 */ 	beqz	$t8,.L0f0577e8
/*  f05770c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f057710:	92190005 */ 	lbu	$t9,0x5($s0)
/*  f057714:	24010058 */ 	addiu	$at,$zero,0x58
/*  f057718:	8fa40098 */ 	lw	$a0,0x98($sp)
/*  f05771c:	57210018 */ 	bnel	$t9,$at,.L0f057780
/*  f057720:	920a0003 */ 	lbu	$t2,0x3($s0)
/*  f057724:	92050004 */ 	lbu	$a1,0x4($s0)
/*  f057728:	afa00094 */ 	sw	$zero,0x94($sp)
/*  f05772c:	0fc126d1 */ 	jal	chrFindById
/*  f057730:	8e240424 */ 	lw	$a0,0x424($s1)
/*  f057734:	8fa30094 */ 	lw	$v1,0x94($sp)
/*  f057738:	1040002b */ 	beqz	$v0,.L0f0577e8
/*  f05773c:	00402025 */ 	or	$a0,$v0,$zero
/*  f057740:	8c48001c */ 	lw	$t0,0x1c($v0)
/*  f057744:	11000028 */ 	beqz	$t0,.L0f0577e8
/*  f057748:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05774c:	0fc0f917 */ 	jal	func0f03e45c
/*  f057750:	afa20034 */ 	sw	$v0,0x34($sp)
/*  f057754:	8fa90034 */ 	lw	$t1,0x34($sp)
/*  f057758:	44070000 */ 	mfc1	$a3,$f0
/*  f05775c:	8fa40098 */ 	lw	$a0,0x98($sp)
/*  f057760:	8d22001c */ 	lw	$v0,0x1c($t1)
/*  f057764:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f057768:	24450008 */ 	addiu	$a1,$v0,0x8
/*  f05776c:	0fc12dd2 */ 	jal	func0f04b748
/*  f057770:	24460028 */ 	addiu	$a2,$v0,0x28
/*  f057774:	1000001c */ 	beqz	$zero,.L0f0577e8
/*  f057778:	00401825 */ 	or	$v1,$v0,$zero
/*  f05777c:	920a0003 */ 	lbu	$t2,0x3($s0)
.L0f057780:
/*  f057780:	920c0004 */ 	lbu	$t4,0x4($s0)
/*  f057784:	afa30094 */ 	sw	$v1,0x94($sp)
/*  f057788:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f05778c:	0fc1258b */ 	jal	chrResolvePadId
/*  f057790:	016c2825 */ 	or	$a1,$t3,$t4
/*  f057794:	04400014 */ 	bltz	$v0,.L0f0577e8
/*  f057798:	8fa30094 */ 	lw	$v1,0x94($sp)
/*  f05779c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0577a0:	24050046 */ 	addiu	$a1,$zero,0x46
/*  f0577a4:	0fc456ac */ 	jal	padUnpack
/*  f0577a8:	27a6003c */ 	addiu	$a2,$sp,0x3c
/*  f0577ac:	c7ac0048 */ 	lwc1	$f12,0x48($sp)
/*  f0577b0:	0fc259d4 */ 	jal	func0f096750
/*  f0577b4:	c7ae0050 */ 	lwc1	$f14,0x50($sp)
/*  f0577b8:	8fad0084 */ 	lw	$t5,0x84($sp)
/*  f0577bc:	240effff */ 	addiu	$t6,$zero,-1
/*  f0577c0:	a7ae003a */ 	sh	$t6,0x3a($sp)
/*  f0577c4:	a7ad0038 */ 	sh	$t5,0x38($sp)
/*  f0577c8:	920f0005 */ 	lbu	$t7,0x5($s0)
/*  f0577cc:	44070000 */ 	mfc1	$a3,$f0
/*  f0577d0:	8fa40098 */ 	lw	$a0,0x98($sp)
/*  f0577d4:	27a5003c */ 	addiu	$a1,$sp,0x3c
/*  f0577d8:	27a60038 */ 	addiu	$a2,$sp,0x38
/*  f0577dc:	0fc12dd2 */ 	jal	func0f04b748
/*  f0577e0:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0577e4:	00401825 */ 	or	$v1,$v0,$zero
.L0f0577e8:
/*  f0577e8:	50600008 */ 	beqzl	$v1,.L0f05780c
/*  f0577ec:	8e380438 */ 	lw	$t8,0x438($s1)
/*  f0577f0:	8e240434 */ 	lw	$a0,0x434($s1)
/*  f0577f4:	8e250438 */ 	lw	$a1,0x438($s1)
/*  f0577f8:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0577fc:	92060006 */ 	lbu	$a2,0x6($s0)
/*  f057800:	10000004 */ 	beqz	$zero,.L0f057814
/*  f057804:	ae220438 */ 	sw	$v0,0x438($s1)
/*  f057808:	8e380438 */ 	lw	$t8,0x438($s1)
.L0f05780c:
/*  f05780c:	27190007 */ 	addiu	$t9,$t8,0x7
/*  f057810:	ae390438 */ 	sw	$t9,0x438($s1)
.L0f057814:
/*  f057814:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f057818:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f05781c:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f057820:	27bd00a0 */ 	addiu	$sp,$sp,0xa0
/*  f057824:	03e00008 */ 	jr	$ra
/*  f057828:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 00e3
 */
bool ai00e3(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);

		if (var8007074c != 2) {
			func0f0bb320(0, 0, 0, 0);
			func0f0bb3c8(60, 1);
		}

		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00e4
 */
bool ai00e4(void)
{
	s32 playernum;
	u32 prevplayernum = g_Vars.currentplayernum;

	for (playernum = 0; playernum < (g_Vars.players[0] ? 1 : 0) + (g_Vars.players[1] ? 1 : 0) + (g_Vars.players[2] ? 1 : 0) + (g_Vars.players[3] ? 1 : 0); playernum++) {
		setCurrentPlayerNum(playernum);

		if (var8007074c != 2) {
			func0f0bb320(0, 0, 0, 1);
			func0f0bb3c8(60, 0);
		}
	}

	setCurrentPlayerNum(prevplayernum);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00e5
 */
bool ai00e5(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	bool pass = false;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 playernum = propGetPlayerNum(chr->prop);

		if (g_Vars.players[playernum]->unk02ec < 0) {
			pass = true;
		}
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 00e8
 */
bool aiSetDoorClosed(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		struct doorobj *door = (struct doorobj *) obj;
		door->speed = door->unk5c;
		door->unk80 = 0;
		door->unkc0 = g_Vars.tickcount;
		door->state = 0;
		func0f08c54c(door);
		func0f08d4e8(door);
		func0f0926bc(door->base.prop, 1, 0xffff);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00e9
 */
bool ai00e9(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		func0f08b8b8(chr, cmd[3]);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00ea
 */
bool aiIfNumPlayersLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if ((g_Vars.players[3] ? 1 : 0) +
			(g_Vars.players[0] ? 1 : 0) +
			(g_Vars.players[1] ? 1 : 0) +
			(g_Vars.players[2] ? 1 : 0) < (s8)cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 00eb
 */
bool aiIfChrAmmoQuantityLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	bool passes = false;

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);

		if (currentPlayerGetAmmoCount((s8)cmd[3]) < (s8)cmd[4]) {
			passes = true;
		}

		setCurrentPlayerNum(prevplayernum);
	}

	if (passes) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 00ec
 */
bool aiChrDrawWeapon(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		currentPlayerEquipWeapon(0, (s8)cmd[3]);
		currentPlayerEquipWeapon(1, 0);
		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00ed
 */
bool aiChrDrawWeaponInCutscene(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		currentPlayerEquipWeaponInCutscene((s8)cmd[3]);
		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 00ee
 */
GLOBAL_ASM(
glabel ai00ee
/*  f057f80:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f057f84:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f057f88:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f057f8c:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f057f90:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f057f94:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f057f98:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f057f9c:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f057fa0:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f057fa4:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f057fa8:	0fc126d1 */ 	jal	chrFindById
/*  f057fac:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f057fb0:	50400021 */ 	beqzl	$v0,.L0f058038
/*  f057fb4:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f057fb8:	8c43001c */ 	lw	$v1,0x1c($v0)
/*  f057fbc:	5060001e */ 	beqzl	$v1,.L0f058038
/*  f057fc0:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f057fc4:	90780000 */ 	lbu	$t8,0x0($v1)
/*  f057fc8:	24010006 */ 	addiu	$at,$zero,0x6
/*  f057fcc:	5701001a */ 	bnel	$t8,$at,.L0f058038
/*  f057fd0:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f057fd4:	8e19028c */ 	lw	$t9,0x28c($s0)
/*  f057fd8:	afb90024 */ 	sw	$t9,0x24($sp)
/*  f057fdc:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f057fe0:	8c44001c */ 	lw	$a0,0x1c($v0)
/*  f057fe4:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f057fe8:	00402025 */ 	or	$a0,$v0,$zero
/*  f057fec:	8fa2002c */ 	lw	$v0,0x2c($sp)
/*  f057ff0:	8e090284 */ 	lw	$t1,0x284($s0)
/*  f057ff4:	44804000 */ 	mtc1	$zero,$f8
/*  f057ff8:	80480003 */ 	lb	$t0,0x3($v0)
/*  f057ffc:	44882000 */ 	mtc1	$t0,$f4
/*  f058000:	00000000 */ 	sll	$zero,$zero,0x0
/*  f058004:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f058008:	e5261b6c */ 	swc1	$f6,0x1b6c($t1)
/*  f05800c:	8e0a0284 */ 	lw	$t2,0x284($s0)
/*  f058010:	e5481b70 */ 	swc1	$f8,0x1b70($t2)
/*  f058014:	804b0004 */ 	lb	$t3,0x4($v0)
/*  f058018:	8e0c0284 */ 	lw	$t4,0x284($s0)
/*  f05801c:	448b5000 */ 	mtc1	$t3,$f10
/*  f058020:	00000000 */ 	sll	$zero,$zero,0x0
/*  f058024:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f058028:	e5901b74 */ 	swc1	$f16,0x1b74($t4)
/*  f05802c:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f058030:	8fa40024 */ 	lw	$a0,0x24($sp)
/*  f058034:	8e0d0438 */ 	lw	$t5,0x438($s0)
.L0f058038:
/*  f058038:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05803c:	00001025 */ 	or	$v0,$zero,$zero
/*  f058040:	25ae0005 */ 	addiu	$t6,$t5,0x5
/*  f058044:	ae0e0438 */ 	sw	$t6,0x438($s0)
/*  f058048:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05804c:	03e00008 */ 	jr	$ra
/*  f058050:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

// Mismatch due to different registers
//bool ai00ee(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
//
//	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
//		u32 prevplayernum = g_Vars.currentplayernum;
//		u32 playernum = propGetPlayerNum(chr->prop);
//		setCurrentPlayerNum(playernum);
//
//		g_Vars.currentplayer->unk1b6c = (s8)cmd[3];
//		g_Vars.currentplayer->unk1b70 = 0;
//		g_Vars.currentplayer->unk1b74 = (s8)cmd[4];
//
//		setCurrentPlayerNum(prevplayernum);
//	}
//
//	g_Vars.aioffset += 5;
//
//	return false;
//}

/**
 * @cmd 00ef
 */
bool aiIfObjInRoom(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);
	u16 room_id = cmd[4] | (cmd[3] << 8);
	s32 room_something = chrGetPadRoom(g_Vars.chrdata, room_id);

	if (room_something >= 0 && obj && obj->prop && room_something == obj->prop->room) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 00f2
 */
bool ai00f2(void)
{
	func0f1660a4(1);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00f3
 */
bool aiChrSetInvincible(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		g_PlayerInvincible = true;
		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00f4
 */
GLOBAL_ASM(
glabel ai00f4
/*  f0581e0:	3c0b800a */ 	lui	$t3,%hi(g_Vars)
/*  f0581e4:	256b9fc0 */ 	addiu	$t3,$t3,%lo(g_Vars)
/*  f0581e8:	8d6e0434 */ 	lw	$t6,0x434($t3)
/*  f0581ec:	8d6f0438 */ 	lw	$t7,0x438($t3)
/*  f0581f0:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f0581f4:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f0581f8:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f0581fc:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f058200:	904c0003 */ 	lbu	$t4,0x3($v0)
/*  f058204:	904d0004 */ 	lbu	$t5,0x4($v0)
/*  f058208:	904f0005 */ 	lbu	$t7,0x5($v0)
/*  f05820c:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f058210:	032c1825 */ 	or	$v1,$t9,$t4
/*  f058214:	000d7200 */ 	sll	$t6,$t5,0x8
/*  f058218:	904c0006 */ 	lbu	$t4,0x6($v0)
/*  f05821c:	01cf2025 */ 	or	$a0,$t6,$t7
/*  f058220:	904e0007 */ 	lbu	$t6,0x7($v0)
/*  f058224:	000c6a00 */ 	sll	$t5,$t4,0x8
/*  f058228:	90590008 */ 	lbu	$t9,0x8($v0)
/*  f05822c:	01ae2825 */ 	or	$a1,$t5,$t6
/*  f058230:	0004c400 */ 	sll	$t8,$a0,0x10
/*  f058234:	904d0009 */ 	lbu	$t5,0x9($v0)
/*  f058238:	904e000a */ 	lbu	$t6,0xa($v0)
/*  f05823c:	00182403 */ 	sra	$a0,$t8,0x10
/*  f058240:	9058000b */ 	lbu	$t8,0xb($v0)
/*  f058244:	00057c00 */ 	sll	$t7,$a1,0x10
/*  f058248:	000f2c03 */ 	sra	$a1,$t7,0x10
/*  f05824c:	00196200 */ 	sll	$t4,$t9,0x8
/*  f058250:	018d4025 */ 	or	$t0,$t4,$t5
/*  f058254:	000e7a00 */ 	sll	$t7,$t6,0x8
/*  f058258:	904d000c */ 	lbu	$t5,0xc($v0)
/*  f05825c:	01f84825 */ 	or	$t1,$t7,$t8
/*  f058260:	904f000d */ 	lbu	$t7,0xd($v0)
/*  f058264:	000d7200 */ 	sll	$t6,$t5,0x8
/*  f058268:	3c017f1b */ 	lui	$at,%hi(var7f1a9ce0)
/*  f05826c:	01cf5025 */ 	or	$t2,$t6,$t7
/*  f058270:	448a2000 */ 	mtc1	$t2,$f4
/*  f058274:	c4209ce0 */ 	lwc1	$f0,%lo(var7f1a9ce0)($at)
/*  f058278:	44855000 */ 	mtc1	$a1,$f10
/*  f05827c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f058280:	3c014780 */ 	lui	$at,0x4780
/*  f058284:	44811000 */ 	mtc1	$at,$f2
/*  f058288:	44832000 */ 	mtc1	$v1,$f4
/*  f05828c:	0009cc00 */ 	sll	$t9,$t1,0x10
/*  f058290:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f058294:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f058298:	44843000 */ 	mtc1	$a0,$f6
/*  f05829c:	00194c03 */ 	sra	$t1,$t9,0x10
/*  f0582a0:	afa80014 */ 	sw	$t0,0x14($sp)
/*  f0582a4:	46008482 */ 	mul.s	$f18,$f16,$f0
/*  f0582a8:	46024303 */ 	div.s	$f12,$f8,$f2
/*  f0582ac:	44894000 */ 	mtc1	$t1,$f8
/*  f0582b0:	46802120 */ 	cvt.s.w	$f4,$f4
/*  f0582b4:	468031a0 */ 	cvt.s.w	$f6,$f6
/*  f0582b8:	44062000 */ 	mfc1	$a2,$f4
/*  f0582bc:	44073000 */ 	mfc1	$a3,$f6
/*  f0582c0:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f0582c4:	46029383 */ 	div.s	$f14,$f18,$f2
/*  f0582c8:	0fc2e707 */ 	jal	func0f0b9c1c
/*  f0582cc:	e7aa0010 */ 	swc1	$f10,0x10($sp)
/*  f0582d0:	3c0b800a */ 	lui	$t3,%hi(g_Vars)
/*  f0582d4:	256b9fc0 */ 	addiu	$t3,$t3,%lo(g_Vars)
/*  f0582d8:	8d780438 */ 	lw	$t8,0x438($t3)
/*  f0582dc:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f0582e0:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f0582e4:	2719000e */ 	addiu	$t9,$t8,0xe
/*  f0582e8:	ad790438 */ 	sw	$t9,0x438($t3)
/*  f0582ec:	03e00008 */ 	jr	$ra
/*  f0582f0:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 00f5
 */
bool ai00f5(void)
{
	g_8007073c = 1;
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00f6
 */
bool ai00f6(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_8007073c == 2) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 00f7
 */
bool aiIfAllObjectivesComplete(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (objectiveIsAllComplete()) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset = g_Vars.aioffset + 3;
	}

	return false;
}

/**
 * @cmd 00f8
 */
bool aiIfPlayerIsInvincible(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	bool pass = false;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		pass = g_PlayerInvincible;
		setCurrentPlayerNum(prevplayernum);
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 00f9
 */
bool aiAudioPlayXMusic(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.aioffset += 5;
	audioPlayXTrack((s8)cmd[2], cmd[3], cmd[4]);

	return false;
}

/**
 * @cmd 00fa
 */
bool aiAudioStopChannel(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.aioffset += 3;
	audioStopTrack((s8)cmd[2]);

	return false;
}

/**
 * @cmd 015b
 */
bool aiAudioPlayMusic(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] == MUSIC_CI_TRAINING) {
		u16 something = func0f152f50();
		audioPlayTrack(cmd[2]);
		func0f152f70(something);
	} else {
		audioPlayTrack(cmd[2]);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 015c
 */
bool aiAudioRestartMusic(void)
{
	g_Vars.aioffset += 2;
	audioRestartTrack();

	return false;
}

/**
 * @cmd 017d
 */
bool aiAudioSetMusicTrack(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	audioSetTrack(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 017e
 */
bool aiAudioRestartDefaultMusic(void)
{
	g_Vars.aioffset += 2;
	audioRestartDefaultTrack();

	return false;
}

/**
 * @cmd 017f
 */
bool aiAudioSetSfxTrack(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	audioSetAuxTrack(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0180
 */
bool aiAudioRestartSfx(void)
{
	g_Vars.aioffset += 2;
	audioRestartAuxTrack();

	return false;
}

/**
 * @cmd 00fb
 */
bool aiChrExplosions(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		currentPlayerSurroundWithExplosions(0);
		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 00fc
 */
bool aiIfKillCountGreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.killcount > cmd[2]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 01ab
 */
bool aiIfNumKnockedOutChrs(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] < getNumKnockedOutChrs() && cmd[3] == 0) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else if (getNumKnockedOutChrs() < cmd[2] && cmd[3] == 1) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 00fd
 */
bool ai00fd(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && (chr->chrflags & CHRCFLAG_00200000)) {
		chr->chrflags &= ~CHRCFLAG_00200000;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 00fe
 */
bool aiKillBond(void)
{
	g_Vars.bond->isdead = true;
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 00ff
 */
bool aiBeSurprised00ff(void)
{
	func0f03ae48(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0100
 */
bool aiNoOp0100(void)
{
	g_Vars.aioffset += 3;
	return false;
}

/**
 * @cmd 0101
 */
bool aiNoOp0101(void)
{
	g_Vars.aioffset += 3;
	return false;
}

/**
 * @cmd 0102
 */
bool aiSetLights(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 room_id = cmd[3] | (cmd[2] << 8);
	s32 thing = chrGetPadRoom(g_Vars.chrdata, room_id);

	if (thing >= 0) {
		switch (cmd[4]) {
		case 7:
			func0f002b58(thing, false);
			break;
		case 6:
			func0f002b58(thing, true);
			break;
		default:
			func0f002c28(thing, cmd[4], cmd[5], cmd[6], cmd[7]);
		}
	}

	g_Vars.aioffset += 11;

	return false;
}

/**
 * @cmd 0103
 */
bool ai0103(void)
{
	if (func0f04b658(g_Vars.chrdata)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0104
 */
GLOBAL_ASM(
glabel aiRemoveObjectAtPropPreset
/*  f058b08:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f058b0c:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f058b10:	8ca30424 */ 	lw	$v1,0x424($a1)
/*  f058b14:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f058b18:	8462012c */ 	lh	$v0,0x12c($v1)
/*  f058b1c:	0440000c */ 	bltz	$v0,.L0f058b50
/*  f058b20:	000270c0 */ 	sll	$t6,$v0,0x3
/*  f058b24:	8caf0338 */ 	lw	$t7,0x338($a1)
/*  f058b28:	01c27021 */ 	addu	$t6,$t6,$v0
/*  f058b2c:	000e70c0 */ 	sll	$t6,$t6,0x3
/*  f058b30:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f058b34:	8f040004 */ 	lw	$a0,0x4($t8)
/*  f058b38:	3c01ffdf */ 	lui	$at,0xffdf
/*  f058b3c:	3421ffff */ 	ori	$at,$at,0xffff
/*  f058b40:	8c990040 */ 	lw	$t9,0x40($a0)
/*  f058b44:	03214024 */ 	and	$t0,$t9,$at
/*  f058b48:	ac880040 */ 	sw	$t0,0x40($a0)
/*  f058b4c:	8ca30424 */ 	lw	$v1,0x424($a1)
.L0f058b50:
/*  f058b50:	a469012c */ 	sh	$t1,0x12c($v1)
/*  f058b54:	8caa0438 */ 	lw	$t2,0x438($a1)
/*  f058b58:	00001025 */ 	or	$v0,$zero,$zero
/*  f058b5c:	254b0002 */ 	addiu	$t3,$t2,0x2
/*  f058b60:	03e00008 */ 	jr	$ra
/*  f058b64:	acab0438 */ 	sw	$t3,0x438($a1)
);

// Mismatch due to temporary registers
//bool aiRemoveObjectAtPropPreset(void)
//{
//	if (g_Vars.chrdata->proppreset1 >= 0) {
//		struct defaultobj *obj = g_Vars.props[g_Vars.chrdata->proppreset1].obj;
//		obj->hidden &= ~OBJHIDDENFLAG_00200000;
//	}
//
//	g_Vars.chrdata->proppreset1 = -1;
//	g_Vars.aioffset += 2;
//
//	return false;
//}

/**
 * @cmd 0105
 */
GLOBAL_ASM(
glabel ai0105
/*  f058b68:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f058b6c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f058b70:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f058b74:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f058b78:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f058b7c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f058b80:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f058b84:	904a0002 */ 	lbu	$t2,0x2($v0)
/*  f058b88:	904c0003 */ 	lbu	$t4,0x3($v0)
/*  f058b8c:	8c780424 */ 	lw	$t8,0x424($v1)
/*  f058b90:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f058b94:	016c6825 */ 	or	$t5,$t3,$t4
/*  f058b98:	448d2000 */ 	mtc1	$t5,$f4
/*  f058b9c:	8719012c */ 	lh	$t9,0x12c($t8)
/*  f058ba0:	8c690338 */ 	lw	$t1,0x338($v1)
/*  f058ba4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f058ba8:	001940c0 */ 	sll	$t0,$t9,0x3
/*  f058bac:	01194021 */ 	addu	$t0,$t0,$t9
/*  f058bb0:	000840c0 */ 	sll	$t0,$t0,0x3
/*  f058bb4:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f058bb8:	27a50018 */ 	addiu	$a1,$sp,0x18
/*  f058bbc:	e7a60024 */ 	swc1	$f6,0x24($sp)
/*  f058bc0:	27a60020 */ 	addiu	$a2,$sp,0x20
/*  f058bc4:	27a7001c */ 	addiu	$a3,$sp,0x1c
/*  f058bc8:	0fc19881 */ 	jal	func0f066204
/*  f058bcc:	01092021 */ 	addu	$a0,$t0,$t1
/*  f058bd0:	c7a80020 */ 	lwc1	$f8,0x20($sp)
/*  f058bd4:	c7aa001c */ 	lwc1	$f10,0x1c($sp)
/*  f058bd8:	c7b20024 */ 	lwc1	$f18,0x24($sp)
/*  f058bdc:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f058be0:	460a4401 */ 	sub.s	$f16,$f8,$f10
/*  f058be4:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f058be8:	8fa2002c */ 	lw	$v0,0x2c($sp)
/*  f058bec:	4612803c */ 	c.lt.s	$f16,$f18
/*  f058bf0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f058bf4:	4502000a */ 	bc1fl	.L0f058c20
/*  f058bf8:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f058bfc:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f058c00:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f058c04:	0fc13583 */ 	jal	chraiGoToLabel
/*  f058c08:	90460004 */ 	lbu	$a2,0x4($v0)
/*  f058c0c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f058c10:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f058c14:	10000004 */ 	beqz	$zero,.L0f058c28
/*  f058c18:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f058c1c:	8c6e0438 */ 	lw	$t6,0x438($v1)
.L0f058c20:
/*  f058c20:	25cf0005 */ 	addiu	$t7,$t6,0x5
/*  f058c24:	ac6f0438 */ 	sw	$t7,0x438($v1)
.L0f058c28:
/*  f058c28:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f058c2c:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f058c30:	00001025 */ 	or	$v0,$zero,$zero
/*  f058c34:	03e00008 */ 	jr	$ra
/*  f058c38:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 0106
 */
bool aiSetTarget(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata) {
		s16 prop_id;

		if (!cmd[3] && !cmd[4]) {
			prop_id = propGetIndexByChrId(g_Vars.chrdata, cmd[2]);
		} else if (!cmd[4]) {
			struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
			prop_id = chr->target;
		}

		if (prop_id != g_Vars.chrdata->target) {
			g_Vars.chrdata->lastvisibletarget60 = 0;
			g_Vars.chrdata->lastseetarget60 = 0;
			g_Vars.chrdata->lastheartarget60 = 0;
			g_Vars.chrdata->hidden &= ~CHRHFLAG_00000002;
			g_Vars.chrdata->chrflags &= ~CHRCFLAG_NEAR_MISS;
			g_Vars.chrdata->target = prop_id;
		}
	} else if (g_Vars.hovdata) {
		heliSetTarget(g_Vars.hovdata, cmd[2]);
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 0107
 */
bool aiIfPresetsTargetIsNotMyTarget(void)
{
	s32 mypresetchrstarget;
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->chrpreset1 != -1) {
		mypresetchrstarget = propGetIndexByChrId(g_Vars.chrdata, g_Vars.chrdata->chrpreset1);
	}

	if (g_Vars.chrdata->target != -1 && mypresetchrstarget != g_Vars.chrdata->target) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0108
 */
bool aiIfChrTarget(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	bool pass = false;

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		// empty
	} else if (cmd[2] != CHR_BOND) {
		if (cmd[4] == 0) {
			struct chrdata *chr2 = chrFindById(g_Vars.chrdata, cmd[3]);

			if (chr2 && chr2->prop && chrGetTargetProp(chr) == chr2->prop) {
				pass = true;
			}
		} else {
			if (chr->target != -1 && chr && chr->prop) {
				pass = true;
			}
		}
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 0109
 */
bool ai0109(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[4] | (cmd[3] << 8)) * 10.0f;

	if (func0f04a79c(cmd[2], g_Vars.chrdata, distance)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 010a
 */
bool ai010a(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[4] | (cmd[3] << 8)) * 10.0f;
	u16 thing = cmd[6] | (cmd[5] << 8);

	if (func0f04a7dc(cmd[2], g_Vars.chrdata, distance, thing)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
	} else {
		g_Vars.aioffset += 8;
	}

	return false;
}

/**
 * @cmd 010b
 */
bool aiChrSetTeam(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->team = cmd[3];
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 010c
 */
bool aiIfCompareChrPresetsTeam(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, CHR_PRESET);

	if (!chr || (!chr->unk020 && chr->prop->type != PROPTYPE_PLAYER)) {
		chrSetChrPreset(g_Vars.chrdata, CHR_BOND);
		chr = chrFindById(g_Vars.chrdata, CHR_PRESET);
	}

	if (chrCompareTeams(chr, g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 011e
 */
GLOBAL_ASM(
glabel ai011e
/*  f0591c0:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0591c4:	24639fc0 */ 	addiu	$v1,$v1,-24640  # v1 = g_Vars
/*  f0591c8:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f0591cc:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f0591d0:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f0591d4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0591d8:	01cf3821 */ 	addu	$a3,$t6,$t7     # a3 = g_Vars.ailist + g_Vars.aioffset
/*  f0591dc:	90e50002 */ 	lbu	$a1,0x2($a3)        # a1 = cmd[2]
/*  f0591e0:	afa7001c */ 	sw	$a3,0x1c($sp)
/*  f0591e4:	0fc126d1 */ 	jal	chrFindById
/*  f0591e8:	8c640424 */ 	lw	$a0,0x424($v1)      # a0 = g_Vars.chrdata
/*  f0591ec:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0591f0:	24639fc0 */ 	addiu	$v1,$v1,-24640  # v1 = g_Vars
/*  f0591f4:	10400012 */ 	beqz	$v0,.L0f059240  # if (chr == 0) goto 40
/*  f0591f8:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*  f0591fc:	8c58001c */ 	lw	$t8,0x1c($v0)       # t8 = chr->prop
/*  f059200:	53000010 */ 	beqzl	$t8,.L0f059244  # if (chr->prop == 0) goto 44
/*  f059204:	8c790438 */ 	lw	$t9,0x438($v1)      # t9 = g_Vars.aioffset
/*  f059208:	10400003 */ 	beqz	$v0,.L0f059218   # if (v0 == 0) goto 18
/*  f05920c:	00002025 */ 	or	$a0,$zero,$zero      # a0 = 0
/*  f059210:	10000001 */ 	beqz	$zero,.L0f059218 # if (true)
/*  f059214:	904402fe */ 	lbu	$a0,0x2fe($v0)       # a0 = chr->race
.L0f059218:
/*  f059218:	5480000a */ 	bnezl	$a0,.L0f059244   # if (a0 != 0) goto 44
/*  f05921c:	8c790438 */ 	lw	$t9,0x438($v1)       # t9 = g_Vars.aioffset
/*  f059220:	8c640434 */ 	lw	$a0,0x434($v1)       # a0 = g_Vars.ailist
/*  f059224:	8c650438 */ 	lw	$a1,0x438($v1)       # a1 = g_Vars.aioffset
/*  f059228:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05922c:	90e60003 */ 	lbu	$a2,0x3($a3)         # a2 = cmd[3]
/*  f059230:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f059234:	24639fc0 */ 	addiu	$v1,$v1,-24640   # v1 = g_Vars
/*  f059238:	10000004 */ 	beqz	$zero,.L0f05924c
/*  f05923c:	ac620438 */ 	sw	$v0,0x438($v1)       # v0 = g_Vars.aioffset
.L0f059240:
/*  f059240:	8c790438 */ 	lw	$t9,0x438($v1)       # t9 = g_Vars.aioffset
.L0f059244:
/*  f059244:	27280004 */ 	addiu	$t0,$t9,0x4      # t9 += 4
/*  f059248:	ac680438 */ 	sw	$t0,0x438($v1)       # g_Vars.aioffset += 4
.L0f05924c:
/*  f05924c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f059250:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f059254:	00001025 */ 	or	$v0,$zero,$zero
/*  f059258:	03e00008 */ 	jr	$ra
/*  f05925c:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 011f
 */
GLOBAL_ASM(
glabel ai011f
/*  f059260:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f059264:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f059268:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f05926c:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f059270:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f059274:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f059278:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f05927c:	90e50002 */ 	lbu	$a1,0x2($a3)
/*  f059280:	afa7001c */ 	sw	$a3,0x1c($sp)
/*  f059284:	0fc126d1 */ 	jal	chrFindById
/*  f059288:	8c640424 */ 	lw	$a0,0x424($v1)
/*  f05928c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f059290:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f059294:	10400013 */ 	beqz	$v0,.L0f0592e4
/*  f059298:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*  f05929c:	8c58001c */ 	lw	$t8,0x1c($v0)
/*  f0592a0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0592a4:	53000010 */ 	beqzl	$t8,.L0f0592e8
/*  f0592a8:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f0592ac:	10400003 */ 	beqz	$v0,.L0f0592bc
/*  f0592b0:	00002025 */ 	or	$a0,$zero,$zero
/*  f0592b4:	10000001 */ 	beqz	$zero,.L0f0592bc
/*  f0592b8:	904402fe */ 	lbu	$a0,0x2fe($v0)
.L0f0592bc:
/*  f0592bc:	5481000a */ 	bnel	$a0,$at,.L0f0592e8
/*  f0592c0:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f0592c4:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f0592c8:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f0592cc:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0592d0:	90e60003 */ 	lbu	$a2,0x3($a3)
/*  f0592d4:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0592d8:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0592dc:	10000004 */ 	beqz	$zero,.L0f0592f0
/*  f0592e0:	ac620438 */ 	sw	$v0,0x438($v1)
.L0f0592e4:
/*  f0592e4:	8c790438 */ 	lw	$t9,0x438($v1)
.L0f0592e8:
/*  f0592e8:	27280004 */ 	addiu	$t0,$t9,0x4
/*  f0592ec:	ac680438 */ 	sw	$t0,0x438($v1)
.L0f0592f0:
/*  f0592f0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0592f4:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f0592f8:	00001025 */ 	or	$v0,$zero,$zero
/*  f0592fc:	03e00008 */ 	jr	$ra
/*  f059300:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 0120
 */
GLOBAL_ASM(
glabel ai0120
/*  f059304:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f059308:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f05930c:	3c13800a */ 	lui	$s3,%hi(g_Vars)
/*  f059310:	26739fc0 */ 	addiu	$s3,$s3,%lo(g_Vars)
/*  f059314:	8e6e0434 */ 	lw	$t6,0x434($s3)
/*  f059318:	8e6f0438 */ 	lw	$t7,0x438($s3)
/*  f05931c:	8e790424 */ 	lw	$t9,0x424($s3)
/*  f059320:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f059324:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f059328:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f05932c:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f059330:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f059334:	afb8002c */ 	sw	$t8,0x2c($sp)
/*  f059338:	0fc13380 */ 	jal	teamGetChrIds
/*  f05933c:	93240125 */ 	lbu	$a0,0x125($t9)
/*  f059340:	24080006 */ 	addiu	$t0,$zero,0x6
/*  f059344:	00408825 */ 	or	$s1,$v0,$zero
/*  f059348:	a3a8002b */ 	sb	$t0,0x2b($sp)
/*  f05934c:	00009025 */ 	or	$s2,$zero,$zero
/*  f059350:	0fc12840 */ 	jal	chrGetNumArghs
/*  f059354:	8e640424 */ 	lw	$a0,0x424($s3)
/*  f059358:	18400002 */ 	blez	$v0,.L0f059364
/*  f05935c:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f059360:	a3a9002b */ 	sb	$t1,0x2b($sp)
.L0f059364:
/*  f059364:	0fc2866a */ 	jal	getCurrentPlayerWeaponId
/*  f059368:	00002025 */ 	or	$a0,$zero,$zero
/*  f05936c:	244afffe */ 	addiu	$t2,$v0,-2
/*  f059370:	2d41001a */ 	sltiu	$at,$t2,0x1a
/*  f059374:	1020000e */ 	beqz	$at,.L0f0593b0
/*  f059378:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f05937c:	3c017f1b */ 	lui	$at,%hi(var7f1a9ce4)
/*  f059380:	002a0821 */ 	addu	$at,$at,$t2
/*  f059384:	8c2a9ce4 */ 	lw	$t2,%lo(var7f1a9ce4)($at)
/*  f059388:	01400008 */ 	jr	$t2
/*  f05938c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059390:	93ab002b */ 	lbu	$t3,0x2b($sp)
/*  f059394:	256cffff */ 	addiu	$t4,$t3,-1
/*  f059398:	10000008 */ 	beqz	$zero,.L0f0593bc
/*  f05939c:	a3ac002b */ 	sb	$t4,0x2b($sp)
/*  f0593a0:	93ad002b */ 	lbu	$t5,0x2b($sp)
/*  f0593a4:	25aefffe */ 	addiu	$t6,$t5,-2
/*  f0593a8:	10000004 */ 	beqz	$zero,.L0f0593bc
/*  f0593ac:	a3ae002b */ 	sb	$t6,0x2b($sp)
.L0f0593b0:
/*  f0593b0:	93af002b */ 	lbu	$t7,0x2b($sp)
/*  f0593b4:	25f80001 */ 	addiu	$t8,$t7,0x1
/*  f0593b8:	a3b8002b */ 	sb	$t8,0x2b($sp)
.L0f0593bc:
/*  f0593bc:	86240000 */ 	lh	$a0,0x0($s1)
/*  f0593c0:	2401fffe */ 	addiu	$at,$zero,-2
/*  f0593c4:	1081002d */ 	beq	$a0,$at,.L0f05947c
/*  f0593c8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f0593cc:
/*  f0593cc:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f0593d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0593d4:	10400024 */ 	beqz	$v0,.L0f059468
/*  f0593d8:	00408025 */ 	or	$s0,$v0,$zero
/*  f0593dc:	8c590020 */ 	lw	$t9,0x20($v0)
/*  f0593e0:	53200022 */ 	beqzl	$t9,.L0f05946c
/*  f0593e4:	86240002 */ 	lh	$a0,0x2($s1)
/*  f0593e8:	0fc0e6a5 */ 	jal	chrIsDead
/*  f0593ec:	00402025 */ 	or	$a0,$v0,$zero
/*  f0593f0:	5440001e */ 	bnezl	$v0,.L0f05946c
/*  f0593f4:	86240002 */ 	lh	$a0,0x2($s1)
/*  f0593f8:	82080007 */ 	lb	$t0,0x7($s0)
/*  f0593fc:	24010005 */ 	addiu	$at,$zero,0x5
/*  f059400:	5101001a */ 	beql	$t0,$at,.L0f05946c
/*  f059404:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059408:	92090113 */ 	lbu	$t1,0x113($s0)
/*  f05940c:	29210065 */ 	slti	$at,$t1,0x65
/*  f059410:	54200016 */ 	bnezl	$at,.L0f05946c
/*  f059414:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059418:	8e640424 */ 	lw	$a0,0x424($s3)
/*  f05941c:	920a02a2 */ 	lbu	$t2,0x2a2($s0)
/*  f059420:	908b02a2 */ 	lbu	$t3,0x2a2($a0)
/*  f059424:	554b0011 */ 	bnel	$t2,$t3,.L0f05946c
/*  f059428:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05942c:	86050000 */ 	lh	$a1,0x0($s0)
/*  f059430:	848c0000 */ 	lh	$t4,0x0($a0)
/*  f059434:	50ac000d */ 	beql	$a1,$t4,.L0f05946c
/*  f059438:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05943c:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f059440:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059444:	3c017f1b */ 	lui	$at,%hi(var7f1a9d4c)
/*  f059448:	c4249d4c */ 	lwc1	$f4,%lo(var7f1a9d4c)($at)
/*  f05944c:	4604003c */ 	c.lt.s	$f0,$f4
/*  f059450:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059454:	45020005 */ 	bc1fl	.L0f05946c
/*  f059458:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05945c:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f059460:	324d00ff */ 	andi	$t5,$s2,0xff
/*  f059464:	01a09025 */ 	or	$s2,$t5,$zero
.L0f059468:
/*  f059468:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05946c:
/*  f05946c:	2401fffe */ 	addiu	$at,$zero,-2
/*  f059470:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f059474:	1481ffd5 */ 	bne	$a0,$at,.L0f0593cc
/*  f059478:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05947c:
/*  f05947c:	16400005 */ 	bnez	$s2,.L0f059494
/*  f059480:	02401825 */ 	or	$v1,$s2,$zero
/*  f059484:	93ae002b */ 	lbu	$t6,0x2b($sp)
/*  f059488:	25cffffe */ 	addiu	$t7,$t6,-2
/*  f05948c:	10000006 */ 	beqz	$zero,.L0f0594a8
/*  f059490:	a3af002b */ 	sb	$t7,0x2b($sp)
.L0f059494:
/*  f059494:	24010001 */ 	addiu	$at,$zero,0x1
/*  f059498:	14610003 */ 	bne	$v1,$at,.L0f0594a8
/*  f05949c:	93b8002b */ 	lbu	$t8,0x2b($sp)
/*  f0594a0:	2719ffff */ 	addiu	$t9,$t8,-1
/*  f0594a4:	a3b9002b */ 	sb	$t9,0x2b($sp)
.L0f0594a8:
/*  f0594a8:	93a2002b */ 	lbu	$v0,0x2b($sp)
/*  f0594ac:	28410003 */ 	slti	$at,$v0,0x3
/*  f0594b0:	50200005 */ 	beqzl	$at,.L0f0594c8
/*  f0594b4:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f0594b8:	50600003 */ 	beqzl	$v1,.L0f0594c8
/*  f0594bc:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f0594c0:	24020003 */ 	addiu	$v0,$zero,0x3
/*  f0594c4:	8fa3002c */ 	lw	$v1,0x2c($sp)
.L0f0594c8:
/*  f0594c8:	90680002 */ 	lbu	$t0,0x2($v1)
/*  f0594cc:	0048082a */ 	slt	$at,$v0,$t0
/*  f0594d0:	50200008 */ 	beqzl	$at,.L0f0594f4
/*  f0594d4:	8e690438 */ 	lw	$t1,0x438($s3)
/*  f0594d8:	8e640434 */ 	lw	$a0,0x434($s3)
/*  f0594dc:	8e650438 */ 	lw	$a1,0x438($s3)
/*  f0594e0:	0fc13583 */ 	jal	chraiGoToLabel
/*  f0594e4:	90660003 */ 	lbu	$a2,0x3($v1)
/*  f0594e8:	10000004 */ 	beqz	$zero,.L0f0594fc
/*  f0594ec:	ae620438 */ 	sw	$v0,0x438($s3)
/*  f0594f0:	8e690438 */ 	lw	$t1,0x438($s3)
.L0f0594f4:
/*  f0594f4:	252a0004 */ 	addiu	$t2,$t1,0x4
/*  f0594f8:	ae6a0438 */ 	sw	$t2,0x438($s3)
.L0f0594fc:
/*  f0594fc:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f059500:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f059504:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f059508:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f05950c:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f059510:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f059514:	03e00008 */ 	jr	$ra
/*  f059518:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0121
 */
bool ai0121(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 someshort = cmd[3] | (cmd[2] << 8);

	if (g_Vars.chrdata && g_Vars.chrdata->prop && func0f04ba34(g_Vars.chrdata, someshort, 0) != -1) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0122
 */
bool ai0122(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 thing = cmd[3] | (cmd[2] << 8);
	u32 flags = (cmd[5] << 16) | (cmd[6] << 8) | cmd[7] | (cmd[4] << 24);

	if (g_Vars.chrdata && g_Vars.chrdata->prop && func0f04ba34(g_Vars.chrdata, thing, flags) != -1) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[8]);
	} else {
		g_Vars.aioffset += 9;
	}

	return false;
}

/**
 * @cmd 0123
 */
bool ai0123(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 thing = cmd[3] | (cmd[2] << 8);
	u32 flags = (cmd[5] << 16) | (cmd[6] << 8) | cmd[7] | (cmd[4] << 24);

	if (g_Vars.chrdata && g_Vars.chrdata->prop && func0f04ba34(g_Vars.chrdata, thing, -flags) != -1) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[8]);
	} else {
		g_Vars.aioffset += 9;
	}

	return false;
}

/**
 * @cmd 0124
 */
bool ai0124(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	func0f04c268(g_Vars.chrdata, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0125
 */
bool ai0125(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f04b950(g_Vars.chrdata, g_Vars.chrdata->cover, 0)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0126
 */
bool aiIfPlayerUsingCmpOrAr34(void)
{
	u32 arg = 0;
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	switch (getCurrentPlayerWeaponId(arg)) {
		case WEAPON_CMP150:
		case WEAPON_AR34:
			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
			break;
		default:
			g_Vars.aioffset += 3;
			break;
	}

	return false;
}

/**
 * @cmd 0127
 */
GLOBAL_ASM(
glabel ai0127
/*  f0598b4:	27bdffa0 */ 	addiu	$sp,$sp,-96
/*  f0598b8:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f0598bc:	3c12800a */ 	lui	$s2,%hi(g_Vars)
/*  f0598c0:	26529fc0 */ 	addiu	$s2,$s2,%lo(g_Vars)
/*  f0598c4:	8e4e0434 */ 	lw	$t6,0x434($s2)
/*  f0598c8:	8e4f0438 */ 	lw	$t7,0x438($s2)
/*  f0598cc:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0598d0:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f0598d4:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f0598d8:	3c017f1b */ 	lui	$at,%hi(var7f1a9d50)
/*  f0598dc:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f0598e0:	00009825 */ 	or	$s3,$zero,$zero
/*  f0598e4:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f0598e8:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f0598ec:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f0598f0:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f0598f4:	c4349d50 */ 	lwc1	$f20,%lo(var7f1a9d50)($at)
/*  f0598f8:	afb80044 */ 	sw	$t8,0x44($sp)
/*  f0598fc:	0fc13380 */ 	jal	teamGetChrIds
/*  f059900:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f059904:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f059908:	00408825 */ 	or	$s1,$v0,$zero
/*  f05990c:	2414ffff */ 	addiu	$s4,$zero,-1
/*  f059910:	908302e2 */ 	lbu	$v1,0x2e2($a0)
/*  f059914:	240100ff */ 	addiu	$at,$zero,0xff
/*  f059918:	14600004 */ 	bnez	$v1,.L0f05992c
/*  f05991c:	00602825 */ 	or	$a1,$v1,$zero
/*  f059920:	3c017f1b */ 	lui	$at,%hi(var7f1a9d54)
/*  f059924:	10000011 */ 	beqz	$zero,.L0f05996c
/*  f059928:	c4369d54 */ 	lwc1	$f22,%lo(var7f1a9d54)($at)
.L0f05992c:
/*  f05992c:	14a10003 */ 	bne	$a1,$at,.L0f05993c
/*  f059930:	3c017f1b */ 	lui	$at,%hi(var7f1a9d58)
/*  f059934:	1000000d */ 	beqz	$zero,.L0f05996c
/*  f059938:	c4369d58 */ 	lwc1	$f22,%lo(var7f1a9d58)($at)
.L0f05993c:
/*  f05993c:	44832000 */ 	mtc1	$v1,$f4
/*  f059940:	3c014f80 */ 	lui	$at,0x4f80
/*  f059944:	04610004 */ 	bgez	$v1,.L0f059958
/*  f059948:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f05994c:	44814000 */ 	mtc1	$at,$f8
/*  f059950:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059954:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f059958:
/*  f059958:	3c014220 */ 	lui	$at,0x4220
/*  f05995c:	44815000 */ 	mtc1	$at,$f10
/*  f059960:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059964:	460a3582 */ 	mul.s	$f22,$f6,$f10
/*  f059968:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05996c:
/*  f05996c:	8c99001c */ 	lw	$t9,0x1c($a0)
/*  f059970:	c730000c */ 	lwc1	$f16,0xc($t9)
/*  f059974:	e7b00048 */ 	swc1	$f16,0x48($sp)
.L0f059978:
/*  f059978:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05997c:	86240000 */ 	lh	$a0,0x0($s1)
/*  f059980:	86280000 */ 	lh	$t0,0x0($s1)
/*  f059984:	2401fffe */ 	addiu	$at,$zero,-2
/*  f059988:	00408025 */ 	or	$s0,$v0,$zero
/*  f05998c:	5101005f */ 	beql	$t0,$at,.L0f059b0c
/*  f059990:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f059994:	1040005a */ 	beqz	$v0,.L0f059b00
/*  f059998:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05999c:	8c49001c */ 	lw	$t1,0x1c($v0)
/*  f0599a0:	11200057 */ 	beqz	$t1,.L0f059b00
/*  f0599a4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0599a8:	904a0125 */ 	lbu	$t2,0x125($v0)
/*  f0599ac:	24010080 */ 	addiu	$at,$zero,0x80
/*  f0599b0:	11410053 */ 	beq	$t2,$at,.L0f059b00
/*  f0599b4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0599b8:	0fc0e6a5 */ 	jal	chrIsDead
/*  f0599bc:	00402025 */ 	or	$a0,$v0,$zero
/*  f0599c0:	1440004f */ 	bnez	$v0,.L0f059b00
/*  f0599c4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0599c8:	82020007 */ 	lb	$v0,0x7($s0)
/*  f0599cc:	24010005 */ 	addiu	$at,$zero,0x5
/*  f0599d0:	1041004b */ 	beq	$v0,$at,.L0f059b00
/*  f0599d4:	2401001f */ 	addiu	$at,$zero,0x1f
/*  f0599d8:	10410049 */ 	beq	$v0,$at,.L0f059b00
/*  f0599dc:	2401001e */ 	addiu	$at,$zero,0x1e
/*  f0599e0:	10410047 */ 	beq	$v0,$at,.L0f059b00
/*  f0599e4:	24010020 */ 	addiu	$at,$zero,0x20
/*  f0599e8:	10410045 */ 	beq	$v0,$at,.L0f059b00
/*  f0599ec:	02002825 */ 	or	$a1,$s0,$zero
/*  f0599f0:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f0599f4:	0fc12aa3 */ 	jal	chrCompareTeams
/*  f0599f8:	24060002 */ 	addiu	$a2,$zero,0x2
/*  f0599fc:	10400040 */ 	beqz	$v0,.L0f059b00
/*  f059a00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a04:	8e030014 */ 	lw	$v1,0x14($s0)
/*  f059a08:	00035880 */ 	sll	$t3,$v1,0x2
/*  f059a0c:	0560003c */ 	bltz	$t3,.L0f059b00
/*  f059a10:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a14:	8e0c0018 */ 	lw	$t4,0x18($s0)
/*  f059a18:	3c014000 */ 	lui	$at,0x4000
/*  f059a1c:	00611024 */ 	and	$v0,$v1,$at
/*  f059a20:	318d0400 */ 	andi	$t5,$t4,0x400
/*  f059a24:	15a00036 */ 	bnez	$t5,.L0f059b00
/*  f059a28:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a2c:	14400034 */ 	bnez	$v0,.L0f059b00
/*  f059a30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a34:	8e0e001c */ 	lw	$t6,0x1c($s0)
/*  f059a38:	c7b20048 */ 	lwc1	$f18,0x48($sp)
/*  f059a3c:	3c01c348 */ 	lui	$at,0xc348
/*  f059a40:	c5c4000c */ 	lwc1	$f4,0xc($t6)
/*  f059a44:	44814000 */ 	mtc1	$at,$f8
/*  f059a48:	3c014348 */ 	lui	$at,0x4348
/*  f059a4c:	46049001 */ 	sub.s	$f0,$f18,$f4
/*  f059a50:	4600403c */ 	c.lt.s	$f8,$f0
/*  f059a54:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a58:	45000029 */ 	bc1f	.L0f059b00
/*  f059a5c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a60:	44813000 */ 	mtc1	$at,$f6
/*  f059a64:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a68:	4606003c */ 	c.lt.s	$f0,$f6
/*  f059a6c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a70:	45000023 */ 	bc1f	.L0f059b00
/*  f059a74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059a78:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f059a7c:	8c8f0014 */ 	lw	$t7,0x14($a0)
/*  f059a80:	000fc000 */ 	sll	$t8,$t7,0x0
/*  f059a84:	07030006 */ 	bgezl	$t8,.L0f059aa0
/*  f059a88:	86050000 */ 	lh	$a1,0x0($s0)
/*  f059a8c:	10400003 */ 	beqz	$v0,.L0f059a9c
/*  f059a90:	0003c900 */ 	sll	$t9,$v1,0x4
/*  f059a94:	0721001a */ 	bgez	$t9,.L0f059b00
/*  f059a98:	00000000 */ 	sll	$zero,$zero,0x0
.L0f059a9c:
/*  f059a9c:	86050000 */ 	lh	$a1,0x0($s0)
.L0f059aa0:
/*  f059aa0:	84880000 */ 	lh	$t0,0x0($a0)
/*  f059aa4:	10a80016 */ 	beq	$a1,$t0,.L0f059b00
/*  f059aa8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059aac:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f059ab0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059ab4:	4614003c */ 	c.lt.s	$f0,$f20
/*  f059ab8:	46000086 */ 	mov.s	$f2,$f0
/*  f059abc:	45000010 */ 	bc1f	.L0f059b00
/*  f059ac0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059ac4:	4616003c */ 	c.lt.s	$f0,$f22
/*  f059ac8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059acc:	45030007 */ 	bc1tl	.L0f059aec
/*  f059ad0:	4614103c */ 	c.lt.s	$f2,$f20
/*  f059ad4:	8e4404b4 */ 	lw	$a0,0x4b4($s2)
/*  f059ad8:	0fc59585 */ 	jal	stageGetIndex
/*  f059adc:	e7a20054 */ 	swc1	$f2,0x54($sp)
/*  f059ae0:	14400007 */ 	bnez	$v0,.L0f059b00
/*  f059ae4:	c7a20054 */ 	lwc1	$f2,0x54($sp)
/*  f059ae8:	4614103c */ 	c.lt.s	$f2,$f20
.L0f059aec:
/*  f059aec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059af0:	45000003 */ 	bc1f	.L0f059b00
/*  f059af4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059af8:	46001506 */ 	mov.s	$f20,$f2
/*  f059afc:	86140000 */ 	lh	$s4,0x0($s0)
.L0f059b00:
/*  f059b00:	10000003 */ 	beqz	$zero,.L0f059b10
/*  f059b04:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f059b08:	26310002 */ 	addiu	$s1,$s1,0x2
.L0f059b0c:
/*  f059b0c:	26730001 */ 	addiu	$s3,$s3,0x1
.L0f059b10:
/*  f059b10:	2a610008 */ 	slti	$at,$s3,0x8
/*  f059b14:	1420ff98 */ 	bnez	$at,.L0f059978
/*  f059b18:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059b1c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f059b20:	1281000c */ 	beq	$s4,$at,.L0f059b54
/*  f059b24:	02802825 */ 	or	$a1,$s4,$zero
/*  f059b28:	0fc12705 */ 	jal	propGetIndexByChrId
/*  f059b2c:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f059b30:	8e490424 */ 	lw	$t1,0x424($s2)
/*  f059b34:	a522017e */ 	sh	$v0,0x17e($t1)
/*  f059b38:	8faa0044 */ 	lw	$t2,0x44($sp)
/*  f059b3c:	8e450438 */ 	lw	$a1,0x438($s2)
/*  f059b40:	8e440434 */ 	lw	$a0,0x434($s2)
/*  f059b44:	0fc13583 */ 	jal	chraiGoToLabel
/*  f059b48:	91460002 */ 	lbu	$a2,0x2($t2)
/*  f059b4c:	10000004 */ 	beqz	$zero,.L0f059b60
/*  f059b50:	ae420438 */ 	sw	$v0,0x438($s2)
.L0f059b54:
/*  f059b54:	8e4b0438 */ 	lw	$t3,0x438($s2)
/*  f059b58:	256c0003 */ 	addiu	$t4,$t3,0x3
/*  f059b5c:	ae4c0438 */ 	sw	$t4,0x438($s2)
.L0f059b60:
/*  f059b60:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f059b64:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f059b68:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f059b6c:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f059b70:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f059b74:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f059b78:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f059b7c:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f059b80:	27bd0060 */ 	addiu	$sp,$sp,0x60
/*  f059b84:	03e00008 */ 	jr	$ra
/*  f059b88:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0128
 */
GLOBAL_ASM(
glabel ai0128
/*  f059b8c:	27bdff80 */ 	addiu	$sp,$sp,-128
/*  f059b90:	afb30044 */ 	sw	$s3,0x44($sp)
/*  f059b94:	3c13800a */ 	lui	$s3,%hi(g_Vars)
/*  f059b98:	26739fc0 */ 	addiu	$s3,$s3,%lo(g_Vars)
/*  f059b9c:	8e6e0434 */ 	lw	$t6,0x434($s3)
/*  f059ba0:	8e6f0438 */ 	lw	$t7,0x438($s3)
/*  f059ba4:	afbf005c */ 	sw	$ra,0x5c($sp)
/*  f059ba8:	afbe0058 */ 	sw	$s8,0x58($sp)
/*  f059bac:	afb70054 */ 	sw	$s7,0x54($sp)
/*  f059bb0:	afb60050 */ 	sw	$s6,0x50($sp)
/*  f059bb4:	afb5004c */ 	sw	$s5,0x4c($sp)
/*  f059bb8:	afb40048 */ 	sw	$s4,0x48($sp)
/*  f059bbc:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f059bc0:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f059bc4:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f059bc8:	f7ba0030 */ 	sdc1	$f26,0x30($sp)
/*  f059bcc:	f7b80028 */ 	sdc1	$f24,0x28($sp)
/*  f059bd0:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f059bd4:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f059bd8:	afa00078 */ 	sw	$zero,0x78($sp)
/*  f059bdc:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f059be0:	90580002 */ 	lbu	$t8,0x2($v0)
/*  f059be4:	3c017f1b */ 	lui	$at,%hi(var7f1a9d5c)
/*  f059be8:	c4369d5c */ 	lwc1	$f22,%lo(var7f1a9d5c)($at)
/*  f059bec:	44982000 */ 	mtc1	$t8,$f4
/*  f059bf0:	3c014120 */ 	lui	$at,0x4120
/*  f059bf4:	44814000 */ 	mtc1	$at,$f8
/*  f059bf8:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f059bfc:	2415ffff */ 	addiu	$s5,$zero,-1
/*  f059c00:	afa20064 */ 	sw	$v0,0x64($sp)
/*  f059c04:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f059c08:	46083682 */ 	mul.s	$f26,$f6,$f8
/*  f059c0c:	0fc13380 */ 	jal	teamGetChrIds
/*  f059c10:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059c14:	8e790424 */ 	lw	$t9,0x424($s3)
/*  f059c18:	0040a025 */ 	or	$s4,$v0,$zero
/*  f059c1c:	241e0005 */ 	addiu	$s8,$zero,0x5
/*  f059c20:	57200007 */ 	bnezl	$t9,.L0f059c40
/*  f059c24:	4480c000 */ 	mtc1	$zero,$f24
/*  f059c28:	8e680438 */ 	lw	$t0,0x438($s3)
/*  f059c2c:	00001025 */ 	or	$v0,$zero,$zero
/*  f059c30:	25090004 */ 	addiu	$t1,$t0,0x4
/*  f059c34:	10000097 */ 	beqz	$zero,.L0f059e94
/*  f059c38:	ae690438 */ 	sw	$t1,0x438($s3)
/*  f059c3c:	4480c000 */ 	mtc1	$zero,$f24
.L0f059c40:
/*  f059c40:	2417fffe */ 	addiu	$s7,$zero,-2
/*  f059c44:	8faa0078 */ 	lw	$t2,0x78($sp)
.L0f059c48:
/*  f059c48:	86840000 */ 	lh	$a0,0x0($s4)
/*  f059c4c:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f059c50:	014b1004 */ 	sllv	$v0,$t3,$t2
/*  f059c54:	12e40074 */ 	beq	$s7,$a0,.L0f059e28
/*  f059c58:	305600ff */ 	andi	$s6,$v0,0xff
/*  f059c5c:	8e6d0424 */ 	lw	$t5,0x424($s3)
/*  f059c60:	304c00ff */ 	andi	$t4,$v0,0xff
/*  f059c64:	91ae0125 */ 	lbu	$t6,0x125($t5)
/*  f059c68:	118e006f */ 	beq	$t4,$t6,.L0f059e28
/*  f059c6c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f059c70:
/*  f059c70:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f059c74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059c78:	10400063 */ 	beqz	$v0,.L0f059e08
/*  f059c7c:	00408825 */ 	or	$s1,$v0,$zero
/*  f059c80:	8c4f001c */ 	lw	$t7,0x1c($v0)
/*  f059c84:	51e00061 */ 	beqzl	$t7,.L0f059e0c
/*  f059c88:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059c8c:	0fc0e6a5 */ 	jal	chrIsDead
/*  f059c90:	00402025 */ 	or	$a0,$v0,$zero
/*  f059c94:	5440005d */ 	bnezl	$v0,.L0f059e0c
/*  f059c98:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059c9c:	82220007 */ 	lb	$v0,0x7($s1)
/*  f059ca0:	24010004 */ 	addiu	$at,$zero,0x4
/*  f059ca4:	53c20059 */ 	beql	$s8,$v0,.L0f059e0c
/*  f059ca8:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059cac:	10410056 */ 	beq	$v0,$at,.L0f059e08
/*  f059cb0:	2401001f */ 	addiu	$at,$zero,0x1f
/*  f059cb4:	10410054 */ 	beq	$v0,$at,.L0f059e08
/*  f059cb8:	2401001e */ 	addiu	$at,$zero,0x1e
/*  f059cbc:	10410052 */ 	beq	$v0,$at,.L0f059e08
/*  f059cc0:	24010020 */ 	addiu	$at,$zero,0x20
/*  f059cc4:	10410050 */ 	beq	$v0,$at,.L0f059e08
/*  f059cc8:	02202825 */ 	or	$a1,$s1,$zero
/*  f059ccc:	8e640424 */ 	lw	$a0,0x424($s3)
/*  f059cd0:	0fc12aa3 */ 	jal	chrCompareTeams
/*  f059cd4:	24060002 */ 	addiu	$a2,$zero,0x2
/*  f059cd8:	5040004c */ 	beqzl	$v0,.L0f059e0c
/*  f059cdc:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059ce0:	8e700424 */ 	lw	$s0,0x424($s3)
/*  f059ce4:	52300049 */ 	beql	$s1,$s0,.L0f059e0c
/*  f059ce8:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059cec:	8e220014 */ 	lw	$v0,0x14($s1)
/*  f059cf0:	0002c080 */ 	sll	$t8,$v0,0x2
/*  f059cf4:	07020045 */ 	bltzl	$t8,.L0f059e0c
/*  f059cf8:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059cfc:	8e390018 */ 	lw	$t9,0x18($s1)
/*  f059d00:	00024b00 */ 	sll	$t1,$v0,0xc
/*  f059d04:	33280400 */ 	andi	$t0,$t9,0x400
/*  f059d08:	55000040 */ 	bnezl	$t0,.L0f059e0c
/*  f059d0c:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d10:	0522003e */ 	bltzl	$t1,.L0f059e0c
/*  f059d14:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d18:	922b0125 */ 	lbu	$t3,0x125($s1)
/*  f059d1c:	24010080 */ 	addiu	$at,$zero,0x80
/*  f059d20:	5161003a */ 	beql	$t3,$at,.L0f059e0c
/*  f059d24:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d28:	8e0a0014 */ 	lw	$t2,0x14($s0)
/*  f059d2c:	00026040 */ 	sll	$t4,$v0,0x1
/*  f059d30:	02002025 */ 	or	$a0,$s0,$zero
/*  f059d34:	000a6800 */ 	sll	$t5,$t2,0x0
/*  f059d38:	05a10005 */ 	bgez	$t5,.L0f059d50
/*  f059d3c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059d40:	05810003 */ 	bgez	$t4,.L0f059d50
/*  f059d44:	00027100 */ 	sll	$t6,$v0,0x4
/*  f059d48:	05c30030 */ 	bgezl	$t6,.L0f059e0c
/*  f059d4c:	86840002 */ 	lh	$a0,0x2($s4)
.L0f059d50:
/*  f059d50:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f059d54:	86250000 */ 	lh	$a1,0x0($s1)
/*  f059d58:	461a003c */ 	c.lt.s	$f0,$f26
/*  f059d5c:	46000506 */ 	mov.s	$f20,$f0
/*  f059d60:	4502002a */ 	bc1fl	.L0f059e0c
/*  f059d64:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d68:	46180032 */ 	c.eq.s	$f0,$f24
/*  f059d6c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059d70:	45030026 */ 	bc1tl	.L0f059e0c
/*  f059d74:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d78:	4616003c */ 	c.lt.s	$f0,$f22
/*  f059d7c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059d80:	45020022 */ 	bc1fl	.L0f059e0c
/*  f059d84:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d88:	8e640424 */ 	lw	$a0,0x424($s3)
/*  f059d8c:	0fc0e556 */ 	jal	func0f039558
/*  f059d90:	8e25001c */ 	lw	$a1,0x1c($s1)
/*  f059d94:	5040001d */ 	beqzl	$v0,.L0f059e0c
/*  f059d98:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059d9c:	8e2f0018 */ 	lw	$t7,0x18($s1)
/*  f059da0:	31f80400 */ 	andi	$t8,$t7,0x400
/*  f059da4:	57000019 */ 	bnezl	$t8,.L0f059e0c
/*  f059da8:	86840002 */ 	lh	$a0,0x2($s4)
/*  f059dac:	8e700424 */ 	lw	$s0,0x424($s3)
/*  f059db0:	921902fc */ 	lbu	$t9,0x2fc($s0)
/*  f059db4:	02002025 */ 	or	$a0,$s0,$zero
/*  f059db8:	57200005 */ 	bnezl	$t9,.L0f059dd0
/*  f059dbc:	8612017e */ 	lh	$s2,0x17e($s0)
/*  f059dc0:	4600a586 */ 	mov.s	$f22,$f20
/*  f059dc4:	10000010 */ 	beqz	$zero,.L0f059e08
/*  f059dc8:	86350000 */ 	lh	$s5,0x0($s1)
/*  f059dcc:	8612017e */ 	lh	$s2,0x17e($s0)
.L0f059dd0:
/*  f059dd0:	0fc12705 */ 	jal	propGetIndexByChrId
/*  f059dd4:	86250000 */ 	lh	$a1,0x0($s1)
/*  f059dd8:	8e680424 */ 	lw	$t0,0x424($s3)
/*  f059ddc:	a502017e */ 	sh	$v0,0x17e($t0)
/*  f059de0:	8e700424 */ 	lw	$s0,0x424($s3)
/*  f059de4:	02002025 */ 	or	$a0,$s0,$zero
/*  f059de8:	0fc123c8 */ 	jal	func0f048f20
/*  f059dec:	920502fc */ 	lbu	$a1,0x2fc($s0)
/*  f059df0:	50400004 */ 	beqzl	$v0,.L0f059e04
/*  f059df4:	8e690424 */ 	lw	$t1,0x424($s3)
/*  f059df8:	4600a586 */ 	mov.s	$f22,$f20
/*  f059dfc:	86350000 */ 	lh	$s5,0x0($s1)
/*  f059e00:	8e690424 */ 	lw	$t1,0x424($s3)
.L0f059e04:
/*  f059e04:	a532017e */ 	sh	$s2,0x17e($t1)
.L0f059e08:
/*  f059e08:	86840002 */ 	lh	$a0,0x2($s4)
.L0f059e0c:
/*  f059e0c:	26940002 */ 	addiu	$s4,$s4,0x2
/*  f059e10:	12e40005 */ 	beq	$s7,$a0,.L0f059e28
/*  f059e14:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059e18:	8e6b0424 */ 	lw	$t3,0x424($s3)
/*  f059e1c:	916a0125 */ 	lbu	$t2,0x125($t3)
/*  f059e20:	16caff93 */ 	bne	$s6,$t2,.L0f059c70
/*  f059e24:	00000000 */ 	sll	$zero,$zero,0x0
.L0f059e28:
/*  f059e28:	16e40003 */ 	bne	$s7,$a0,.L0f059e38
/*  f059e2c:	8fad0078 */ 	lw	$t5,0x78($sp)
/*  f059e30:	25ac0001 */ 	addiu	$t4,$t5,0x1
/*  f059e34:	afac0078 */ 	sw	$t4,0x78($sp)
.L0f059e38:
/*  f059e38:	8fae0078 */ 	lw	$t6,0x78($sp)
/*  f059e3c:	26940002 */ 	addiu	$s4,$s4,0x2
/*  f059e40:	29c10008 */ 	slti	$at,$t6,0x8
/*  f059e44:	5420ff80 */ 	bnezl	$at,.L0f059c48
/*  f059e48:	8faa0078 */ 	lw	$t2,0x78($sp)
/*  f059e4c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f059e50:	12a1000c */ 	beq	$s5,$at,.L0f059e84
/*  f059e54:	02a02825 */ 	or	$a1,$s5,$zero
/*  f059e58:	0fc12705 */ 	jal	propGetIndexByChrId
/*  f059e5c:	8e640424 */ 	lw	$a0,0x424($s3)
/*  f059e60:	8e6f0424 */ 	lw	$t7,0x424($s3)
/*  f059e64:	a5e2017e */ 	sh	$v0,0x17e($t7)
/*  f059e68:	8fb80064 */ 	lw	$t8,0x64($sp)
/*  f059e6c:	8e650438 */ 	lw	$a1,0x438($s3)
/*  f059e70:	8e640434 */ 	lw	$a0,0x434($s3)
/*  f059e74:	0fc13583 */ 	jal	chraiGoToLabel
/*  f059e78:	93060003 */ 	lbu	$a2,0x3($t8)
/*  f059e7c:	10000004 */ 	beqz	$zero,.L0f059e90
/*  f059e80:	ae620438 */ 	sw	$v0,0x438($s3)
.L0f059e84:
/*  f059e84:	8e790438 */ 	lw	$t9,0x438($s3)
/*  f059e88:	27280004 */ 	addiu	$t0,$t9,0x4
/*  f059e8c:	ae680438 */ 	sw	$t0,0x438($s3)
.L0f059e90:
/*  f059e90:	00001025 */ 	or	$v0,$zero,$zero
.L0f059e94:
/*  f059e94:	8fbf005c */ 	lw	$ra,0x5c($sp)
/*  f059e98:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f059e9c:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f059ea0:	d7b80028 */ 	ldc1	$f24,0x28($sp)
/*  f059ea4:	d7ba0030 */ 	ldc1	$f26,0x30($sp)
/*  f059ea8:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f059eac:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f059eb0:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f059eb4:	8fb30044 */ 	lw	$s3,0x44($sp)
/*  f059eb8:	8fb40048 */ 	lw	$s4,0x48($sp)
/*  f059ebc:	8fb5004c */ 	lw	$s5,0x4c($sp)
/*  f059ec0:	8fb60050 */ 	lw	$s6,0x50($sp)
/*  f059ec4:	8fb70054 */ 	lw	$s7,0x54($sp)
/*  f059ec8:	8fbe0058 */ 	lw	$s8,0x58($sp)
/*  f059ecc:	03e00008 */ 	jr	$ra
/*  f059ed0:	27bd0080 */ 	addiu	$sp,$sp,0x80
);

/**
 * @cmd 0129
 */
GLOBAL_ASM(
glabel ai0129
/*  f059ed4:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*  f059ed8:	afb50034 */ 	sw	$s5,0x34($sp)
/*  f059edc:	3c15800a */ 	lui	$s5,%hi(g_Vars)
/*  f059ee0:	26b59fc0 */ 	addiu	$s5,$s5,%lo(g_Vars)
/*  f059ee4:	8eae0434 */ 	lw	$t6,0x434($s5)
/*  f059ee8:	8eaf0438 */ 	lw	$t7,0x438($s5)
/*  f059eec:	8eb90424 */ 	lw	$t9,0x424($s5)
/*  f059ef0:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f059ef4:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f059ef8:	afb60038 */ 	sw	$s6,0x38($sp)
/*  f059efc:	afb40030 */ 	sw	$s4,0x30($sp)
/*  f059f00:	afb3002c */ 	sw	$s3,0x2c($sp)
/*  f059f04:	afb20028 */ 	sw	$s2,0x28($sp)
/*  f059f08:	afb10024 */ 	sw	$s1,0x24($sp)
/*  f059f0c:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f059f10:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f059f14:	afb80044 */ 	sw	$t8,0x44($sp)
/*  f059f18:	0fc13380 */ 	jal	teamGetChrIds
/*  f059f1c:	93240125 */ 	lbu	$a0,0x125($t9)
/*  f059f20:	00408825 */ 	or	$s1,$v0,$zero
/*  f059f24:	24160006 */ 	addiu	$s6,$zero,0x6
/*  f059f28:	00009025 */ 	or	$s2,$zero,$zero
/*  f059f2c:	0fc12840 */ 	jal	chrGetNumArghs
/*  f059f30:	8ea40424 */ 	lw	$a0,0x424($s5)
/*  f059f34:	18400002 */ 	blez	$v0,.L0f059f40
/*  f059f38:	3c017f1b */ 	lui	$at,%hi(var7f1a9d60)
/*  f059f3c:	24160005 */ 	addiu	$s6,$zero,0x5
.L0f059f40:
/*  f059f40:	86240000 */ 	lh	$a0,0x0($s1)
/*  f059f44:	2413fffe */ 	addiu	$s3,$zero,-2
/*  f059f48:	24140005 */ 	addiu	$s4,$zero,0x5
/*  f059f4c:	12640022 */ 	beq	$s3,$a0,.L0f059fd8
/*  f059f50:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059f54:	c4349d60 */ 	lwc1	$f20,%lo(var7f1a9d60)($at)
.L0f059f58:
/*  f059f58:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f059f5c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059f60:	10400019 */ 	beqz	$v0,.L0f059fc8
/*  f059f64:	00408025 */ 	or	$s0,$v0,$zero
/*  f059f68:	8c480020 */ 	lw	$t0,0x20($v0)
/*  f059f6c:	51000017 */ 	beqzl	$t0,.L0f059fcc
/*  f059f70:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059f74:	0fc0e6a5 */ 	jal	chrIsDead
/*  f059f78:	00402025 */ 	or	$a0,$v0,$zero
/*  f059f7c:	54400013 */ 	bnezl	$v0,.L0f059fcc
/*  f059f80:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059f84:	82090007 */ 	lb	$t1,0x7($s0)
/*  f059f88:	52890010 */ 	beql	$s4,$t1,.L0f059fcc
/*  f059f8c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059f90:	8ea40424 */ 	lw	$a0,0x424($s5)
/*  f059f94:	86050000 */ 	lh	$a1,0x0($s0)
/*  f059f98:	848a0000 */ 	lh	$t2,0x0($a0)
/*  f059f9c:	50aa000b */ 	beql	$a1,$t2,.L0f059fcc
/*  f059fa0:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059fa4:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f059fa8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059fac:	4614003c */ 	c.lt.s	$f0,$f20
/*  f059fb0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f059fb4:	45020005 */ 	bc1fl	.L0f059fcc
/*  f059fb8:	86240002 */ 	lh	$a0,0x2($s1)
/*  f059fbc:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f059fc0:	324b00ff */ 	andi	$t3,$s2,0xff
/*  f059fc4:	01609025 */ 	or	$s2,$t3,$zero
.L0f059fc8:
/*  f059fc8:	86240002 */ 	lh	$a0,0x2($s1)
.L0f059fcc:
/*  f059fcc:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f059fd0:	1664ffe1 */ 	bne	$s3,$a0,.L0f059f58
/*  f059fd4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f059fd8:
/*  f059fd8:	16400005 */ 	bnez	$s2,.L0f059ff0
/*  f059fdc:	02401025 */ 	or	$v0,$s2,$zero
/*  f059fe0:	26d6fffe */ 	addiu	$s6,$s6,-2
/*  f059fe4:	32cc00ff */ 	andi	$t4,$s6,0xff
/*  f059fe8:	10000007 */ 	beqz	$zero,.L0f05a008
/*  f059fec:	0180b025 */ 	or	$s6,$t4,$zero
.L0f059ff0:
/*  f059ff0:	28410003 */ 	slti	$at,$v0,0x3
/*  f059ff4:	50200005 */ 	beqzl	$at,.L0f05a00c
/*  f059ff8:	8fa20044 */ 	lw	$v0,0x44($sp)
/*  f059ffc:	26d6ffff */ 	addiu	$s6,$s6,-1
/*  f05a000:	32cd00ff */ 	andi	$t5,$s6,0xff
/*  f05a004:	01a0b025 */ 	or	$s6,$t5,$zero
.L0f05a008:
/*  f05a008:	8fa20044 */ 	lw	$v0,0x44($sp)
.L0f05a00c:
/*  f05a00c:	904e0002 */ 	lbu	$t6,0x2($v0)
/*  f05a010:	02ce082a */ 	slt	$at,$s6,$t6
/*  f05a014:	50200008 */ 	beqzl	$at,.L0f05a038
/*  f05a018:	8eaf0438 */ 	lw	$t7,0x438($s5)
/*  f05a01c:	8ea40434 */ 	lw	$a0,0x434($s5)
/*  f05a020:	8ea50438 */ 	lw	$a1,0x438($s5)
/*  f05a024:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05a028:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f05a02c:	10000004 */ 	beqz	$zero,.L0f05a040
/*  f05a030:	aea20438 */ 	sw	$v0,0x438($s5)
/*  f05a034:	8eaf0438 */ 	lw	$t7,0x438($s5)
.L0f05a038:
/*  f05a038:	25f80004 */ 	addiu	$t8,$t7,0x4
/*  f05a03c:	aeb80438 */ 	sw	$t8,0x438($s5)
.L0f05a040:
/*  f05a040:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f05a044:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f05a048:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f05a04c:	8fb10024 */ 	lw	$s1,0x24($sp)
/*  f05a050:	8fb20028 */ 	lw	$s2,0x28($sp)
/*  f05a054:	8fb3002c */ 	lw	$s3,0x2c($sp)
/*  f05a058:	8fb40030 */ 	lw	$s4,0x30($sp)
/*  f05a05c:	8fb50034 */ 	lw	$s5,0x34($sp)
/*  f05a060:	8fb60038 */ 	lw	$s6,0x38($sp)
/*  f05a064:	27bd0048 */ 	addiu	$sp,$sp,0x48
/*  f05a068:	03e00008 */ 	jr	$ra
/*  f05a06c:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 012a
 */
bool ai012a(void)
{
	s32 value;
	s32 absvalue;
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (cmd[2] == 0) {
		value = func0f04c580(g_Vars.chrdata);
	} else {
		struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
		value = func0f04c580(chr);
	}

	absvalue = value > 0 ? value : -value;

	if (absvalue < 50) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 012b
 */
bool ai012b(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f04c580(g_Vars.chrdata) < -50) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 012c
 */
bool ai012c(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f04c580(g_Vars.chrdata) > 50) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 012f
 */
bool ai012f(void)
{
	if (g_Vars.chrdata->cover >= 0) {
		func0f1164a4(g_Vars.chrdata->cover, 0);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0130
 */
GLOBAL_ASM(
glabel ai0130
/*  f05a258:	27bdff58 */ 	addiu	$sp,$sp,-168
/*  f05a25c:	afb00048 */ 	sw	$s0,0x48($sp)
/*  f05a260:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05a264:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05a268:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05a26c:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05a270:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f05a274:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05a278:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05a27c:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f05a280:	0fc126d1 */ 	jal	chrFindById
/*  f05a284:	afa2009c */ 	sw	$v0,0x9c($sp)
/*  f05a288:	8e18028c */ 	lw	$t8,0x28c($s0)
/*  f05a28c:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a290:	8fa8009c */ 	lw	$t0,0x9c($sp)
/*  f05a294:	afb80078 */ 	sw	$t8,0x78($sp)
/*  f05a298:	94f90192 */ 	lhu	$t9,0x192($a3)
/*  f05a29c:	91060003 */ 	lbu	$a2,0x3($t0)
/*  f05a2a0:	00402825 */ 	or	$a1,$v0,$zero
/*  f05a2a4:	33291000 */ 	andi	$t1,$t9,0x1000
/*  f05a2a8:	10e00003 */ 	beqz	$a3,.L0f05a2b8
/*  f05a2ac:	a3a9006b */ 	sb	$t1,0x6b($sp)
/*  f05a2b0:	10000002 */ 	beqz	$zero,.L0f05a2bc
/*  f05a2b4:	90e302fe */ 	lbu	$v1,0x2fe($a3)
.L0f05a2b8:
/*  f05a2b8:	00001825 */ 	or	$v1,$zero,$zero
.L0f05a2bc:
/*  f05a2bc:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05a2c0:	14610007 */ 	bne	$v1,$at,.L0f05a2e0
/*  f05a2c4:	3c0a8007 */ 	lui	$t2,%hi(quiptable_skedar)
/*  f05a2c8:	254a96d8 */ 	addiu	$t2,$t2,%lo(quiptable_skedar)
/*  f05a2cc:	28c10006 */ 	slti	$at,$a2,0x6
/*  f05a2d0:	1420002a */ 	bnez	$at,.L0f05a37c
/*  f05a2d4:	afaa0084 */ 	sw	$t2,0x84($sp)
/*  f05a2d8:	10000028 */ 	beqz	$zero,.L0f05a37c
/*  f05a2dc:	00003025 */ 	or	$a2,$zero,$zero
.L0f05a2e0:
/*  f05a2e0:	80eb0006 */ 	lb	$t3,0x6($a3)
/*  f05a2e4:	24030029 */ 	addiu	$v1,$zero,0x29
/*  f05a2e8:	3c0c8007 */ 	lui	$t4,%hi(quiptable_maian)
/*  f05a2ec:	146b000d */ 	bne	$v1,$t3,.L0f05a324
/*  f05a2f0:	258c9710 */ 	addiu	$t4,$t4,%lo(quiptable_maian)
/*  f05a2f4:	28c10003 */ 	slti	$at,$a2,0x3
/*  f05a2f8:	14200020 */ 	bnez	$at,.L0f05a37c
/*  f05a2fc:	afac0084 */ 	sw	$t4,0x84($sp)
/*  f05a300:	afa60070 */ 	sw	$a2,0x70($sp)
/*  f05a304:	0c004b70 */ 	jal	random
/*  f05a308:	afa5007c */ 	sw	$a1,0x7c($sp)
/*  f05a30c:	30460001 */ 	andi	$a2,$v0,0x1
/*  f05a310:	afa60070 */ 	sw	$a2,0x70($sp)
/*  f05a314:	8fa5007c */ 	lw	$a1,0x7c($sp)
/*  f05a318:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a31c:	10000017 */ 	beqz	$zero,.L0f05a37c
/*  f05a320:	8fa8009c */ 	lw	$t0,0x9c($sp)
.L0f05a324:
/*  f05a324:	910e0007 */ 	lbu	$t6,0x7($t0)
/*  f05a328:	3c0b8007 */ 	lui	$t3,%hi(quiptable_human_bank1)
/*  f05a32c:	256b9518 */ 	addiu	$t3,$t3,%lo(quiptable_human_bank1)
/*  f05a330:	55c00012 */ 	bnezl	$t6,.L0f05a37c
/*  f05a334:	afab0084 */ 	sw	$t3,0x84($sp)
/*  f05a338:	90e202b1 */ 	lbu	$v0,0x2b1($a3)
/*  f05a33c:	240f0003 */ 	addiu	$t7,$zero,0x3
/*  f05a340:	28410004 */ 	slti	$at,$v0,0x4
/*  f05a344:	14200004 */ 	bnez	$at,.L0f05a358
/*  f05a348:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a34c:	a0ef02b1 */ 	sb	$t7,0x2b1($a3)
/*  f05a350:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a354:	90e202b1 */ 	lbu	$v0,0x2b1($a3)
.L0f05a358:
/*  f05a358:	00430019 */ 	multu	$v0,$v1
/*  f05a35c:	3c098007 */ 	lui	$t1,%hi(quiptable_human_bank0)
/*  f05a360:	25298ff8 */ 	addiu	$t1,$t1,%lo(quiptable_human_bank0)
/*  f05a364:	0000c012 */ 	mflo	$t8
/*  f05a368:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f05a36c:	03295021 */ 	addu	$t2,$t9,$t1
/*  f05a370:	10000002 */ 	beqz	$zero,.L0f05a37c
/*  f05a374:	afaa0084 */ 	sw	$t2,0x84($sp)
/*  f05a378:	afab0084 */ 	sw	$t3,0x84($sp)
.L0f05a37c:
/*  f05a37c:	54c0000e */ 	bnezl	$a2,.L0f05a3b8
/*  f05a380:	90e40125 */ 	lbu	$a0,0x125($a3)
/*  f05a384:	910c0004 */ 	lbu	$t4,0x4($t0)
/*  f05a388:	5580000b */ 	bnezl	$t4,.L0f05a3b8
/*  f05a38c:	90e40125 */ 	lbu	$a0,0x125($a3)
/*  f05a390:	910d0006 */ 	lbu	$t5,0x6($t0)
/*  f05a394:	55a00008 */ 	bnezl	$t5,.L0f05a3b8
/*  f05a398:	90e40125 */ 	lbu	$a0,0x125($a3)
/*  f05a39c:	ace00120 */ 	sw	$zero,0x120($a3)
/*  f05a3a0:	8e0e0438 */ 	lw	$t6,0x438($s0)
/*  f05a3a4:	00001025 */ 	or	$v0,$zero,$zero
/*  f05a3a8:	25cf000a */ 	addiu	$t7,$t6,0xa
/*  f05a3ac:	10000206 */ 	beqz	$zero,.L0f05abc8
/*  f05a3b0:	ae0f0438 */ 	sw	$t7,0x438($s0)
/*  f05a3b4:	90e40125 */ 	lbu	$a0,0x125($a3)
.L0f05a3b8:
/*  f05a3b8:	afa60070 */ 	sw	$a2,0x70($sp)
/*  f05a3bc:	0fc13380 */ 	jal	teamGetChrIds
/*  f05a3c0:	afa5007c */ 	sw	$a1,0x7c($sp)
/*  f05a3c4:	8fb8009c */ 	lw	$t8,0x9c($sp)
/*  f05a3c8:	afa20088 */ 	sw	$v0,0x88($sp)
/*  f05a3cc:	afa00098 */ 	sw	$zero,0x98($sp)
/*  f05a3d0:	afa00094 */ 	sw	$zero,0x94($sp)
/*  f05a3d4:	93190004 */ 	lbu	$t9,0x4($t8)
/*  f05a3d8:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a3dc:	24010005 */ 	addiu	$at,$zero,0x5
/*  f05a3e0:	afb90090 */ 	sw	$t9,0x90($sp)
/*  f05a3e4:	80e30006 */ 	lb	$v1,0x6($a3)
/*  f05a3e8:	8fa5007c */ 	lw	$a1,0x7c($sp)
/*  f05a3ec:	8fa90084 */ 	lw	$t1,0x84($sp)
/*  f05a3f0:	10610007 */ 	beq	$v1,$at,.L0f05a410
/*  f05a3f4:	3c0a8007 */ 	lui	$t2,%hi(quiptable_human_bank1)
/*  f05a3f8:	2401000f */ 	addiu	$at,$zero,0xf
/*  f05a3fc:	10610004 */ 	beq	$v1,$at,.L0f05a410
/*  f05a400:	2401003a */ 	addiu	$at,$zero,0x3a
/*  f05a404:	10610002 */ 	beq	$v1,$at,.L0f05a410
/*  f05a408:	24010028 */ 	addiu	$at,$zero,0x28
/*  f05a40c:	14610004 */ 	bne	$v1,$at,.L0f05a420
.L0f05a410:
/*  f05a410:	254a9518 */ 	addiu	$t2,$t2,%lo(quiptable_human_bank1)
/*  f05a414:	112a0002 */ 	beq	$t1,$t2,.L0f05a420
/*  f05a418:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a41c:	afa00090 */ 	sw	$zero,0x90($sp)
.L0f05a420:
/*  f05a420:	50a0001c */ 	beqzl	$a1,.L0f05a494
/*  f05a424:	90e20126 */ 	lbu	$v0,0x126($a3)
/*  f05a428:	8ca4001c */ 	lw	$a0,0x1c($a1)
/*  f05a42c:	50800019 */ 	beqzl	$a0,.L0f05a494
/*  f05a430:	90e20126 */ 	lbu	$v0,0x126($a3)
/*  f05a434:	908b0000 */ 	lbu	$t3,0x0($a0)
/*  f05a438:	24010006 */ 	addiu	$at,$zero,0x6
/*  f05a43c:	55610015 */ 	bnel	$t3,$at,.L0f05a494
/*  f05a440:	90e20126 */ 	lbu	$v0,0x126($a3)
/*  f05a444:	0fc4a25f */ 	jal	propGetPlayerNum
/*  f05a448:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a44c:	8e030298 */ 	lw	$v1,0x298($s0)
/*  f05a450:	00026080 */ 	sll	$t4,$v0,0x2
/*  f05a454:	00402025 */ 	or	$a0,$v0,$zero
/*  f05a458:	0460000a */ 	bltz	$v1,.L0f05a484
/*  f05a45c:	020c6821 */ 	addu	$t5,$s0,$t4
/*  f05a460:	8dae0064 */ 	lw	$t6,0x64($t5)
/*  f05a464:	8dcf00d8 */ 	lw	$t7,0xd8($t6)
/*  f05a468:	11e00006 */ 	beqz	$t7,.L0f05a484
/*  f05a46c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a470:	8e050294 */ 	lw	$a1,0x294($s0)
/*  f05a474:	14450003 */ 	bne	$v0,$a1,.L0f05a484
/*  f05a478:	00a02025 */ 	or	$a0,$a1,$zero
/*  f05a47c:	10000001 */ 	beqz	$zero,.L0f05a484
/*  f05a480:	00602025 */ 	or	$a0,$v1,$zero
.L0f05a484:
/*  f05a484:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f05a488:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a48c:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a490:	90e20126 */ 	lbu	$v0,0x126($a3)
.L0f05a494:
/*  f05a494:	10400007 */ 	beqz	$v0,.L0f05a4b4
/*  f05a498:	0002c100 */ 	sll	$t8,$v0,0x4
/*  f05a49c:	8cf90120 */ 	lw	$t9,0x120($a3)
/*  f05a4a0:	0302c023 */ 	subu	$t8,$t8,$v0
/*  f05a4a4:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f05a4a8:	0319082a */ 	slt	$at,$t8,$t9
/*  f05a4ac:	102001c0 */ 	beqz	$at,.L0f05abb0
/*  f05a4b0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05a4b4:
/*  f05a4b4:	0c004b70 */ 	jal	random
/*  f05a4b8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a4bc:	8faa0090 */ 	lw	$t2,0x90($sp)
/*  f05a4c0:	304900ff */ 	andi	$t1,$v0,0xff
/*  f05a4c4:	8fab0088 */ 	lw	$t3,0x88($sp)
/*  f05a4c8:	012a082a */ 	slt	$at,$t1,$t2
/*  f05a4cc:	102001b8 */ 	beqz	$at,.L0f05abb0
/*  f05a4d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a4d4:	85640000 */ 	lh	$a0,0x0($t3)
/*  f05a4d8:	2401fffe */ 	addiu	$at,$zero,-2
/*  f05a4dc:	5081003e */ 	beql	$a0,$at,.L0f05a5d8
/*  f05a4e0:	8fae0094 */ 	lw	$t6,0x94($sp)
.L0f05a4e4:
/*  f05a4e4:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05a4e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a4ec:	50400033 */ 	beqzl	$v0,.L0f05a5bc
/*  f05a4f0:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a4f4:	8c4c0020 */ 	lw	$t4,0x20($v0)
/*  f05a4f8:	00402025 */ 	or	$a0,$v0,$zero
/*  f05a4fc:	5180002f */ 	beqzl	$t4,.L0f05a5bc
/*  f05a500:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a504:	0fc0e6a5 */ 	jal	chrIsDead
/*  f05a508:	afa20064 */ 	sw	$v0,0x64($sp)
/*  f05a50c:	1440002a */ 	bnez	$v0,.L0f05a5b8
/*  f05a510:	8fa60064 */ 	lw	$a2,0x64($sp)
/*  f05a514:	80cd0007 */ 	lb	$t5,0x7($a2)
/*  f05a518:	24010005 */ 	addiu	$at,$zero,0x5
/*  f05a51c:	51a10027 */ 	beql	$t5,$at,.L0f05a5bc
/*  f05a520:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a524:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a528:	90ce02a2 */ 	lbu	$t6,0x2a2($a2)
/*  f05a52c:	90ef02a2 */ 	lbu	$t7,0x2a2($a3)
/*  f05a530:	55cf0022 */ 	bnel	$t6,$t7,.L0f05a5bc
/*  f05a534:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a538:	90d80113 */ 	lbu	$t8,0x113($a2)
/*  f05a53c:	2b010064 */ 	slti	$at,$t8,0x64
/*  f05a540:	5420001e */ 	bnezl	$at,.L0f05a5bc
/*  f05a544:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a548:	84c50000 */ 	lh	$a1,0x0($a2)
/*  f05a54c:	84f90000 */ 	lh	$t9,0x0($a3)
/*  f05a550:	00e02025 */ 	or	$a0,$a3,$zero
/*  f05a554:	50b90019 */ 	beql	$a1,$t9,.L0f05a5bc
/*  f05a558:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a55c:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f05a560:	afa60064 */ 	sw	$a2,0x64($sp)
/*  f05a564:	3c017f1b */ 	lui	$at,%hi(var7f1a9d64)
/*  f05a568:	c4249d64 */ 	lwc1	$f4,%lo(var7f1a9d64)($at)
/*  f05a56c:	8fa90098 */ 	lw	$t1,0x98($sp)
/*  f05a570:	8fa60064 */ 	lw	$a2,0x64($sp)
/*  f05a574:	4604003c */ 	c.lt.s	$f0,$f4
/*  f05a578:	252a0001 */ 	addiu	$t2,$t1,0x1
/*  f05a57c:	4502000f */ 	bc1fl	.L0f05a5bc
/*  f05a580:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a584:	afaa0098 */ 	sw	$t2,0x98($sp)
/*  f05a588:	8ccb0120 */ 	lw	$t3,0x120($a2)
/*  f05a58c:	8fac009c */ 	lw	$t4,0x9c($sp)
/*  f05a590:	2961003c */ 	slti	$at,$t3,0x3c
/*  f05a594:	50200009 */ 	beqzl	$at,.L0f05a5bc
/*  f05a598:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a59c:	91820006 */ 	lbu	$v0,0x6($t4)
/*  f05a5a0:	240100ff */ 	addiu	$at,$zero,0xff
/*  f05a5a4:	50400005 */ 	beqzl	$v0,.L0f05a5bc
/*  f05a5a8:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f05a5ac:	10410002 */ 	beq	$v0,$at,.L0f05a5b8
/*  f05a5b0:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f05a5b4:	afad0094 */ 	sw	$t5,0x94($sp)
.L0f05a5b8:
/*  f05a5b8:	8fa20088 */ 	lw	$v0,0x88($sp)
.L0f05a5bc:
/*  f05a5bc:	2401fffe */ 	addiu	$at,$zero,-2
/*  f05a5c0:	84440002 */ 	lh	$a0,0x2($v0)
/*  f05a5c4:	24420002 */ 	addiu	$v0,$v0,0x2
/*  f05a5c8:	afa20088 */ 	sw	$v0,0x88($sp)
/*  f05a5cc:	1481ffc5 */ 	bne	$a0,$at,.L0f05a4e4
/*  f05a5d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a5d4:	8fae0094 */ 	lw	$t6,0x94($sp)
.L0f05a5d8:
/*  f05a5d8:	8faf0098 */ 	lw	$t7,0x98($sp)
/*  f05a5dc:	15c00174 */ 	bnez	$t6,.L0f05abb0
/*  f05a5e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a5e4:	15e00007 */ 	bnez	$t7,.L0f05a604
/*  f05a5e8:	8fb8009c */ 	lw	$t8,0x9c($sp)
/*  f05a5ec:	93020006 */ 	lbu	$v0,0x6($t8)
/*  f05a5f0:	240100ff */ 	addiu	$at,$zero,0xff
/*  f05a5f4:	1040000a */ 	beqz	$v0,.L0f05a620
/*  f05a5f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a5fc:	10410008 */ 	beq	$v0,$at,.L0f05a620
/*  f05a600:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05a604:
/*  f05a604:	8fb90098 */ 	lw	$t9,0x98($sp)
/*  f05a608:	8fa9009c */ 	lw	$t1,0x9c($sp)
/*  f05a60c:	1b200168 */ 	blez	$t9,.L0f05abb0
/*  f05a610:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a614:	912a0006 */ 	lbu	$t2,0x6($t1)
/*  f05a618:	19400165 */ 	blez	$t2,.L0f05abb0
/*  f05a61c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05a620:
/*  f05a620:	0c004b70 */ 	jal	random
/*  f05a624:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a628:	24010003 */ 	addiu	$at,$zero,0x3
/*  f05a62c:	0041001b */ 	divu	$zero,$v0,$at
/*  f05a630:	8fab009c */ 	lw	$t3,0x9c($sp)
/*  f05a634:	00001810 */ 	mfhi	$v1
/*  f05a638:	a3a300a7 */ 	sb	$v1,0xa7($sp)
/*  f05a63c:	916c0007 */ 	lbu	$t4,0x7($t3)
/*  f05a640:	8fb80070 */ 	lw	$t8,0x70($sp)
/*  f05a644:	8fae0084 */ 	lw	$t6,0x84($sp)
/*  f05a648:	318d0080 */ 	andi	$t5,$t4,0x80
/*  f05a64c:	15a00009 */ 	bnez	$t5,.L0f05a674
/*  f05a650:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f05a654:	01d94821 */ 	addu	$t1,$t6,$t9
/*  f05a658:	306a00ff */ 	andi	$t2,$v1,0xff
/*  f05a65c:	000a5840 */ 	sll	$t3,$t2,0x1
/*  f05a660:	012b6021 */ 	addu	$t4,$t1,$t3
/*  f05a664:	afa90058 */ 	sw	$t1,0x58($sp)
/*  f05a668:	858d0002 */ 	lh	$t5,0x2($t4)
/*  f05a66c:	1000000c */ 	beqz	$zero,.L0f05a6a0
/*  f05a670:	a7ad00a4 */ 	sh	$t5,0xa4($sp)
.L0f05a674:
/*  f05a674:	8e0a0424 */ 	lw	$t2,0x424($s0)
/*  f05a678:	8fae0070 */ 	lw	$t6,0x70($sp)
/*  f05a67c:	8faf0084 */ 	lw	$t7,0x84($sp)
/*  f05a680:	914902b0 */ 	lbu	$t1,0x2b0($t2)
/*  f05a684:	000ec8c0 */ 	sll	$t9,$t6,0x3
/*  f05a688:	01f91021 */ 	addu	$v0,$t7,$t9
/*  f05a68c:	00095840 */ 	sll	$t3,$t1,0x1
/*  f05a690:	004b6021 */ 	addu	$t4,$v0,$t3
/*  f05a694:	858d0002 */ 	lh	$t5,0x2($t4)
/*  f05a698:	afa20058 */ 	sw	$v0,0x58($sp)
/*  f05a69c:	a7ad00a4 */ 	sh	$t5,0xa4($sp)
.L0f05a6a0:
/*  f05a6a0:	0fc133cd */ 	jal	func0f04cf34
/*  f05a6a4:	87a400a4 */ 	lh	$a0,0xa4($sp)
/*  f05a6a8:	1440000a */ 	bnez	$v0,.L0f05a6d4
/*  f05a6ac:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05a6b0:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a6b4:	00001825 */ 	or	$v1,$zero,$zero
/*  f05a6b8:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f05a6bc:	10e00003 */ 	beqz	$a3,.L0f05a6cc
/*  f05a6c0:	3c0e8007 */ 	lui	$t6,%hi(quiptable_human_bank0)
/*  f05a6c4:	10000001 */ 	beqz	$zero,.L0f05a6cc
/*  f05a6c8:	90e302fe */ 	lbu	$v1,0x2fe($a3)
.L0f05a6cc:
/*  f05a6cc:	54610092 */ 	bnel	$v1,$at,.L0f05a918
/*  f05a6d0:	8fad0070 */ 	lw	$t5,0x70($sp)
.L0f05a6d4:
/*  f05a6d4:	0fc133bb */ 	jal	func0f04ceec
/*  f05a6d8:	87a400a4 */ 	lh	$a0,0xa4($sp)
/*  f05a6dc:	87b800a4 */ 	lh	$t8,0xa4($sp)
/*  f05a6e0:	2401034e */ 	addiu	$at,$zero,0x34e
/*  f05a6e4:	93ae006b */ 	lbu	$t6,0x6b($sp)
/*  f05a6e8:	57010005 */ 	bnel	$t8,$at,.L0f05a700
/*  f05a6ec:	8e190424 */ 	lw	$t9,0x424($s0)
/*  f05a6f0:	15c00002 */ 	bnez	$t6,.L0f05a6fc
/*  f05a6f4:	240f034d */ 	addiu	$t7,$zero,0x34d
/*  f05a6f8:	a7af00a4 */ 	sh	$t7,0xa4($sp)
.L0f05a6fc:
/*  f05a6fc:	8e190424 */ 	lw	$t9,0x424($s0)
.L0f05a700:
/*  f05a700:	240103f7 */ 	addiu	$at,$zero,0x3f7
/*  f05a704:	af200120 */ 	sw	$zero,0x120($t9)
/*  f05a708:	8faa009c */ 	lw	$t2,0x9c($sp)
/*  f05a70c:	8e0b0424 */ 	lw	$t3,0x424($s0)
/*  f05a710:	91490005 */ 	lbu	$t1,0x5($t2)
/*  f05a714:	a1690126 */ 	sb	$t1,0x126($t3)
/*  f05a718:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a71c:	90ec0332 */ 	lbu	$t4,0x332($a3)
/*  f05a720:	258d0001 */ 	addiu	$t5,$t4,0x1
/*  f05a724:	a0ed0332 */ 	sb	$t5,0x332($a3)
/*  f05a728:	87b800a4 */ 	lh	$t8,0xa4($sp)
/*  f05a72c:	13010022 */ 	beq	$t8,$at,.L0f05a7b8
/*  f05a730:	24010331 */ 	addiu	$at,$zero,0x331
/*  f05a734:	13010020 */ 	beq	$t8,$at,.L0f05a7b8
/*  f05a738:	240103a1 */ 	addiu	$at,$zero,0x3a1
/*  f05a73c:	1301001e */ 	beq	$t8,$at,.L0f05a7b8
/*  f05a740:	24050009 */ 	addiu	$a1,$zero,0x9
/*  f05a744:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f05a748:	3406ffff */ 	dli	$a2,0xffff
/*  f05a74c:	0fc249af */ 	jal	func0f0926bc
/*  f05a750:	8dc4001c */ 	lw	$a0,0x1c($t6)
/*  f05a754:	8e0f0424 */ 	lw	$t7,0x424($s0)
/*  f05a758:	3c01bf80 */ 	lui	$at,0xbf80
/*  f05a75c:	44810000 */ 	mtc1	$at,$f0
/*  f05a760:	8de5001c */ 	lw	$a1,0x1c($t7)
/*  f05a764:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f05a768:	240a0008 */ 	addiu	$t2,$zero,0x8
/*  f05a76c:	24090009 */ 	addiu	$t1,$zero,0x9
/*  f05a770:	240bffff */ 	addiu	$t3,$zero,-1
/*  f05a774:	afab002c */ 	sw	$t3,0x2c($sp)
/*  f05a778:	afa9001c */ 	sw	$t1,0x1c($sp)
/*  f05a77c:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f05a780:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f05a784:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f05a788:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f05a78c:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f05a790:	00002025 */ 	or	$a0,$zero,$zero
/*  f05a794:	87a600a4 */ 	lh	$a2,0xa4($sp)
/*  f05a798:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f05a79c:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f05a7a0:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f05a7a4:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f05a7a8:	0fc24e7e */ 	jal	func0f0939f8
/*  f05a7ac:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f05a7b0:	10000026 */ 	beqz	$zero,.L0f05a84c
/*  f05a7b4:	8faa009c */ 	lw	$t2,0x9c($sp)
.L0f05a7b8:
/*  f05a7b8:	0fc13160 */ 	jal	func0f04c580
/*  f05a7bc:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05a7c0:	18400003 */ 	blez	$v0,.L0f05a7d0
/*  f05a7c4:	00021823 */ 	negu	$v1,$v0
/*  f05a7c8:	10000001 */ 	beqz	$zero,.L0f05a7d0
/*  f05a7cc:	00401825 */ 	or	$v1,$v0,$zero
.L0f05a7d0:
/*  f05a7d0:	28610033 */ 	slti	$at,$v1,0x33
/*  f05a7d4:	1420001c */ 	bnez	$at,.L0f05a848
/*  f05a7d8:	24050009 */ 	addiu	$a1,$zero,0x9
/*  f05a7dc:	8e0c0424 */ 	lw	$t4,0x424($s0)
/*  f05a7e0:	3406ffff */ 	dli	$a2,0xffff
/*  f05a7e4:	0fc249af */ 	jal	func0f0926bc
/*  f05a7e8:	8d84001c */ 	lw	$a0,0x1c($t4)
/*  f05a7ec:	8e0d0424 */ 	lw	$t5,0x424($s0)
/*  f05a7f0:	3c01bf80 */ 	lui	$at,0xbf80
/*  f05a7f4:	44810000 */ 	mtc1	$at,$f0
/*  f05a7f8:	8da5001c */ 	lw	$a1,0x1c($t5)
/*  f05a7fc:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f05a800:	240e0008 */ 	addiu	$t6,$zero,0x8
/*  f05a804:	240f0009 */ 	addiu	$t7,$zero,0x9
/*  f05a808:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f05a80c:	afb9002c */ 	sw	$t9,0x2c($sp)
/*  f05a810:	afaf001c */ 	sw	$t7,0x1c($sp)
/*  f05a814:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f05a818:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f05a81c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f05a820:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f05a824:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f05a828:	00002025 */ 	or	$a0,$zero,$zero
/*  f05a82c:	87a600a4 */ 	lh	$a2,0xa4($sp)
/*  f05a830:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f05a834:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f05a838:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f05a83c:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f05a840:	0fc24e7e */ 	jal	func0f0939f8
/*  f05a844:	e7a00024 */ 	swc1	$f0,0x24($sp)
.L0f05a848:
/*  f05a848:	8faa009c */ 	lw	$t2,0x9c($sp)
.L0f05a84c:
/*  f05a84c:	91420008 */ 	lbu	$v0,0x8($t2)
/*  f05a850:	1040001a */ 	beqz	$v0,.L0f05a8bc
/*  f05a854:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a858:	91490007 */ 	lbu	$t1,0x7($t2)
/*  f05a85c:	93a300a7 */ 	lbu	$v1,0xa7($sp)
/*  f05a860:	000260c0 */ 	sll	$t4,$v0,0x3
/*  f05a864:	312b0080 */ 	andi	$t3,$t1,0x80
/*  f05a868:	15600014 */ 	bnez	$t3,.L0f05a8bc
/*  f05a86c:	28610003 */ 	slti	$at,$v1,0x3
/*  f05a870:	14200002 */ 	bnez	$at,.L0f05a87c
/*  f05a874:	3c048007 */ 	lui	$a0,0x8007
/*  f05a878:	24030002 */ 	addiu	$v1,$zero,0x2
.L0f05a87c:
/*  f05a87c:	00036840 */ 	sll	$t5,$v1,0x1
/*  f05a880:	018dc021 */ 	addu	$t8,$t4,$t5
/*  f05a884:	00982021 */ 	addu	$a0,$a0,$t8
/*  f05a888:	0fc5b9f1 */ 	jal	textGet
/*  f05a88c:	84849682 */ 	lh	$a0,-0x697e($a0)
/*  f05a890:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f05a894:	0c004103 */ 	jal	audioIsFiltered
/*  f05a898:	87a400a4 */ 	lh	$a0,0xa4($sp)
/*  f05a89c:	144000c4 */ 	bnez	$v0,.L0f05abb0
/*  f05a8a0:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f05a8a4:	8fae009c */ 	lw	$t6,0x9c($sp)
/*  f05a8a8:	24050006 */ 	addiu	$a1,$zero,0x6
/*  f05a8ac:	0fc3780d */ 	jal	func0f0de034
/*  f05a8b0:	91c60009 */ 	lbu	$a2,0x9($t6)
/*  f05a8b4:	100000be */ 	beqz	$zero,.L0f05abb0
/*  f05a8b8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05a8bc:
/*  f05a8bc:	104000bc */ 	beqz	$v0,.L0f05abb0
/*  f05a8c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a8c4:	8e190424 */ 	lw	$t9,0x424($s0)
/*  f05a8c8:	000278c0 */ 	sll	$t7,$v0,0x3
/*  f05a8cc:	3c048007 */ 	lui	$a0,0x8007
/*  f05a8d0:	932a02b0 */ 	lbu	$t2,0x2b0($t9)
/*  f05a8d4:	000a4840 */ 	sll	$t1,$t2,0x1
/*  f05a8d8:	01e95821 */ 	addu	$t3,$t7,$t1
/*  f05a8dc:	008b2021 */ 	addu	$a0,$a0,$t3
/*  f05a8e0:	0fc5b9f1 */ 	jal	textGet
/*  f05a8e4:	84849682 */ 	lh	$a0,-0x697e($a0)
/*  f05a8e8:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f05a8ec:	0c004103 */ 	jal	audioIsFiltered
/*  f05a8f0:	87a400a4 */ 	lh	$a0,0xa4($sp)
/*  f05a8f4:	144000ae */ 	bnez	$v0,.L0f05abb0
/*  f05a8f8:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f05a8fc:	8fac009c */ 	lw	$t4,0x9c($sp)
/*  f05a900:	24050006 */ 	addiu	$a1,$zero,0x6
/*  f05a904:	0fc3780d */ 	jal	func0f0de034
/*  f05a908:	91860009 */ 	lbu	$a2,0x9($t4)
/*  f05a90c:	100000a8 */ 	beqz	$zero,.L0f05abb0
/*  f05a910:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05a914:	8fad0070 */ 	lw	$t5,0x70($sp)
.L0f05a918:
/*  f05a918:	25ce8ff8 */ 	addiu	$t6,$t6,%lo(quiptable_human_bank0)
/*  f05a91c:	a7a000a4 */ 	sh	$zero,0xa4($sp)
/*  f05a920:	000dc0c0 */ 	sll	$t8,$t5,0x3
/*  f05a924:	030e1021 */ 	addu	$v0,$t8,$t6
/*  f05a928:	afa2005c */ 	sw	$v0,0x5c($sp)
.L0f05a92c:
/*  f05a92c:	8fa2005c */ 	lw	$v0,0x5c($sp)
/*  f05a930:	00081840 */ 	sll	$v1,$t0,0x1
/*  f05a934:	0043c821 */ 	addu	$t9,$v0,$v1
/*  f05a938:	87240000 */ 	lh	$a0,0x0($t9)
/*  f05a93c:	a3a800a3 */ 	sb	$t0,0xa3($sp)
/*  f05a940:	0fc133cd */ 	jal	func0f04cf34
/*  f05a944:	afa30054 */ 	sw	$v1,0x54($sp)
/*  f05a948:	8fa30054 */ 	lw	$v1,0x54($sp)
/*  f05a94c:	1040000d */ 	beqz	$v0,.L0f05a984
/*  f05a950:	93a800a3 */ 	lbu	$t0,0xa3($sp)
/*  f05a954:	8faa0058 */ 	lw	$t2,0x58($sp)
/*  f05a958:	01432821 */ 	addu	$a1,$t2,$v1
/*  f05a95c:	84a40000 */ 	lh	$a0,0x0($a1)
/*  f05a960:	a3a800a3 */ 	sb	$t0,0xa3($sp)
/*  f05a964:	0fc133cd */ 	jal	func0f04cf34
/*  f05a968:	afa50050 */ 	sw	$a1,0x50($sp)
/*  f05a96c:	8fa50050 */ 	lw	$a1,0x50($sp)
/*  f05a970:	10400004 */ 	beqz	$v0,.L0f05a984
/*  f05a974:	93a800a3 */ 	lbu	$t0,0xa3($sp)
/*  f05a978:	84af0000 */ 	lh	$t7,0x0($a1)
/*  f05a97c:	10000006 */ 	beqz	$zero,.L0f05a998
/*  f05a980:	a7af00a4 */ 	sh	$t7,0xa4($sp)
.L0f05a984:
/*  f05a984:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f05a988:	310900ff */ 	andi	$t1,$t0,0xff
/*  f05a98c:	29210004 */ 	slti	$at,$t1,0x4
/*  f05a990:	1420ffe6 */ 	bnez	$at,.L0f05a92c
/*  f05a994:	01204025 */ 	or	$t0,$t1,$zero
.L0f05a998:
/*  f05a998:	87ab00a4 */ 	lh	$t3,0xa4($sp)
/*  f05a99c:	1160007a */ 	beqz	$t3,.L0f05ab88
/*  f05a9a0:	01602025 */ 	or	$a0,$t3,$zero
/*  f05a9a4:	0fc133bb */ 	jal	func0f04ceec
/*  f05a9a8:	a3a800a3 */ 	sb	$t0,0xa3($sp)
/*  f05a9ac:	87ac00a4 */ 	lh	$t4,0xa4($sp)
/*  f05a9b0:	2401034e */ 	addiu	$at,$zero,0x34e
/*  f05a9b4:	93a800a3 */ 	lbu	$t0,0xa3($sp)
/*  f05a9b8:	15810004 */ 	bne	$t4,$at,.L0f05a9cc
/*  f05a9bc:	93ad006b */ 	lbu	$t5,0x6b($sp)
/*  f05a9c0:	15a00002 */ 	bnez	$t5,.L0f05a9cc
/*  f05a9c4:	2418034d */ 	addiu	$t8,$zero,0x34d
/*  f05a9c8:	a7b800a4 */ 	sh	$t8,0xa4($sp)
.L0f05a9cc:
/*  f05a9cc:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f05a9d0:	240103f7 */ 	addiu	$at,$zero,0x3f7
/*  f05a9d4:	adc00120 */ 	sw	$zero,0x120($t6)
/*  f05a9d8:	8fb9009c */ 	lw	$t9,0x9c($sp)
/*  f05a9dc:	8e0f0424 */ 	lw	$t7,0x424($s0)
/*  f05a9e0:	932a0005 */ 	lbu	$t2,0x5($t9)
/*  f05a9e4:	a1ea0126 */ 	sb	$t2,0x126($t7)
/*  f05a9e8:	8e070424 */ 	lw	$a3,0x424($s0)
/*  f05a9ec:	90e90332 */ 	lbu	$t1,0x332($a3)
/*  f05a9f0:	252b0001 */ 	addiu	$t3,$t1,0x1
/*  f05a9f4:	a0eb0332 */ 	sb	$t3,0x332($a3)
/*  f05a9f8:	87ac00a4 */ 	lh	$t4,0xa4($sp)
/*  f05a9fc:	11810024 */ 	beq	$t4,$at,.L0f05aa90
/*  f05aa00:	24010331 */ 	addiu	$at,$zero,0x331
/*  f05aa04:	11810022 */ 	beq	$t4,$at,.L0f05aa90
/*  f05aa08:	240103a1 */ 	addiu	$at,$zero,0x3a1
/*  f05aa0c:	51810021 */ 	beql	$t4,$at,.L0f05aa94
/*  f05aa10:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05aa14:	8e0d0424 */ 	lw	$t5,0x424($s0)
/*  f05aa18:	24050009 */ 	addiu	$a1,$zero,0x9
/*  f05aa1c:	3406ffff */ 	dli	$a2,0xffff
/*  f05aa20:	8da4001c */ 	lw	$a0,0x1c($t5)
/*  f05aa24:	0fc249af */ 	jal	func0f0926bc
/*  f05aa28:	a3a800a3 */ 	sb	$t0,0xa3($sp)
/*  f05aa2c:	8e180424 */ 	lw	$t8,0x424($s0)
/*  f05aa30:	3c01bf80 */ 	lui	$at,0xbf80
/*  f05aa34:	44810000 */ 	mtc1	$at,$f0
/*  f05aa38:	8f05001c */ 	lw	$a1,0x1c($t8)
/*  f05aa3c:	240effff */ 	addiu	$t6,$zero,-1
/*  f05aa40:	24190008 */ 	addiu	$t9,$zero,0x8
/*  f05aa44:	240a0009 */ 	addiu	$t2,$zero,0x9
/*  f05aa48:	240fffff */ 	addiu	$t7,$zero,-1
/*  f05aa4c:	afaf002c */ 	sw	$t7,0x2c($sp)
/*  f05aa50:	afaa001c */ 	sw	$t2,0x1c($sp)
/*  f05aa54:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f05aa58:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f05aa5c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f05aa60:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f05aa64:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f05aa68:	00002025 */ 	or	$a0,$zero,$zero
/*  f05aa6c:	87a600a4 */ 	lh	$a2,0xa4($sp)
/*  f05aa70:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f05aa74:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f05aa78:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f05aa7c:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f05aa80:	0fc24e7e */ 	jal	func0f0939f8
/*  f05aa84:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f05aa88:	1000002a */ 	beqz	$zero,.L0f05ab34
/*  f05aa8c:	93a800a3 */ 	lbu	$t0,0xa3($sp)
.L0f05aa90:
/*  f05aa90:	8e040424 */ 	lw	$a0,0x424($s0)
.L0f05aa94:
/*  f05aa94:	0fc13160 */ 	jal	func0f04c580
/*  f05aa98:	a3a800a3 */ 	sb	$t0,0xa3($sp)
/*  f05aa9c:	18400003 */ 	blez	$v0,.L0f05aaac
/*  f05aaa0:	93a800a3 */ 	lbu	$t0,0xa3($sp)
/*  f05aaa4:	10000002 */ 	beqz	$zero,.L0f05aab0
/*  f05aaa8:	00401825 */ 	or	$v1,$v0,$zero
.L0f05aaac:
/*  f05aaac:	00021823 */ 	negu	$v1,$v0
.L0f05aab0:
/*  f05aab0:	28610033 */ 	slti	$at,$v1,0x33
/*  f05aab4:	54200020 */ 	bnezl	$at,.L0f05ab38
/*  f05aab8:	8fb9009c */ 	lw	$t9,0x9c($sp)
/*  f05aabc:	8e090424 */ 	lw	$t1,0x424($s0)
/*  f05aac0:	24050009 */ 	addiu	$a1,$zero,0x9
/*  f05aac4:	3406ffff */ 	dli	$a2,0xffff
/*  f05aac8:	8d24001c */ 	lw	$a0,0x1c($t1)
/*  f05aacc:	0fc249af */ 	jal	func0f0926bc
/*  f05aad0:	a3a800a3 */ 	sb	$t0,0xa3($sp)
/*  f05aad4:	8e0b0424 */ 	lw	$t3,0x424($s0)
/*  f05aad8:	3c01bf80 */ 	lui	$at,0xbf80
/*  f05aadc:	44810000 */ 	mtc1	$at,$f0
/*  f05aae0:	8d65001c */ 	lw	$a1,0x1c($t3)
/*  f05aae4:	240cffff */ 	addiu	$t4,$zero,-1
/*  f05aae8:	240d0008 */ 	addiu	$t5,$zero,0x8
/*  f05aaec:	24180009 */ 	addiu	$t8,$zero,0x9
/*  f05aaf0:	240effff */ 	addiu	$t6,$zero,-1
/*  f05aaf4:	afae002c */ 	sw	$t6,0x2c($sp)
/*  f05aaf8:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f05aafc:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f05ab00:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f05ab04:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f05ab08:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f05ab0c:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f05ab10:	00002025 */ 	or	$a0,$zero,$zero
/*  f05ab14:	87a600a4 */ 	lh	$a2,0xa4($sp)
/*  f05ab18:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f05ab1c:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f05ab20:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f05ab24:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f05ab28:	0fc24e7e */ 	jal	func0f0939f8
/*  f05ab2c:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f05ab30:	93a800a3 */ 	lbu	$t0,0xa3($sp)
.L0f05ab34:
/*  f05ab34:	8fb9009c */ 	lw	$t9,0x9c($sp)
.L0f05ab38:
/*  f05ab38:	00087840 */ 	sll	$t7,$t0,0x1
/*  f05ab3c:	3c048007 */ 	lui	$a0,0x8007
/*  f05ab40:	93220008 */ 	lbu	$v0,0x8($t9)
/*  f05ab44:	1040001a */ 	beqz	$v0,.L0f05abb0
/*  f05ab48:	000250c0 */ 	sll	$t2,$v0,0x3
/*  f05ab4c:	014f4821 */ 	addu	$t1,$t2,$t7
/*  f05ab50:	00892021 */ 	addu	$a0,$a0,$t1
/*  f05ab54:	0fc5b9f1 */ 	jal	textGet
/*  f05ab58:	84849680 */ 	lh	$a0,-0x6980($a0)
/*  f05ab5c:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f05ab60:	0c004103 */ 	jal	audioIsFiltered
/*  f05ab64:	87a400a4 */ 	lh	$a0,0xa4($sp)
/*  f05ab68:	14400011 */ 	bnez	$v0,.L0f05abb0
/*  f05ab6c:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f05ab70:	8fab009c */ 	lw	$t3,0x9c($sp)
/*  f05ab74:	24050006 */ 	addiu	$a1,$zero,0x6
/*  f05ab78:	0fc3780d */ 	jal	func0f0de034
/*  f05ab7c:	91660009 */ 	lbu	$a2,0x9($t3)
/*  f05ab80:	1000000b */ 	beqz	$zero,.L0f05abb0
/*  f05ab84:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05ab88:
/*  f05ab88:	8e0c0424 */ 	lw	$t4,0x424($s0)
/*  f05ab8c:	3c050800 */ 	lui	$a1,0x800
/*  f05ab90:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f05ab94:	ad800120 */ 	sw	$zero,0x120($t4)
/*  f05ab98:	8fad009c */ 	lw	$t5,0x9c($sp)
/*  f05ab9c:	8e0e0424 */ 	lw	$t6,0x424($s0)
/*  f05aba0:	91b80005 */ 	lbu	$t8,0x5($t5)
/*  f05aba4:	a1d80126 */ 	sb	$t8,0x126($t6)
/*  f05aba8:	0fc12782 */ 	jal	chrUnsetFlags
/*  f05abac:	8e040424 */ 	lw	$a0,0x424($s0)
.L0f05abb0:
/*  f05abb0:	0fc4a24b */ 	jal	setCurrentPlayerNum
/*  f05abb4:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f05abb8:	8e190438 */ 	lw	$t9,0x438($s0)
/*  f05abbc:	00001025 */ 	or	$v0,$zero,$zero
/*  f05abc0:	272a000a */ 	addiu	$t2,$t9,0xa
/*  f05abc4:	ae0a0438 */ 	sw	$t2,0x438($s0)
.L0f05abc8:
/*  f05abc8:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f05abcc:	8fb00048 */ 	lw	$s0,0x48($sp)
/*  f05abd0:	27bd00a8 */ 	addiu	$sp,$sp,0xa8
/*  f05abd4:	03e00008 */ 	jr	$ra
/*  f05abd8:	00000000 */ 	sll	$zero,$zero,0x0
);

void func0f05abdc(struct prop *prop)
{
	if (prop && prop->chr && prop->chr->unk020 && prop->chr->propsoundcount > 0) {
		prop->chr->propsoundcount--;
	}
}

/**
 * @cmd 01a7
 */
bool aiIfChrPropsoundcountZero(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindByLiteralId(cmd[2]);

	if (chr && chr->propsoundcount == 0) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset = g_Vars.aioffset + 4;
	}

	return false;
}

/**
 * @cmd 0131
 */
GLOBAL_ASM(
glabel ai0131
/*  f05ac98:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f05ac9c:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f05aca0:	3c12800a */ 	lui	$s2,%hi(g_Vars)
/*  f05aca4:	26529fc0 */ 	addiu	$s2,$s2,%lo(g_Vars)
/*  f05aca8:	8e4e0434 */ 	lw	$t6,0x434($s2)
/*  f05acac:	8e4f0438 */ 	lw	$t7,0x438($s2)
/*  f05acb0:	8e580424 */ 	lw	$t8,0x424($s2)
/*  f05acb4:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f05acb8:	afb70038 */ 	sw	$s7,0x38($sp)
/*  f05acbc:	afb60034 */ 	sw	$s6,0x34($sp)
/*  f05acc0:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f05acc4:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f05acc8:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f05accc:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f05acd0:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f05acd4:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f05acd8:	01cf9821 */ 	addu	$s3,$t6,$t7
/*  f05acdc:	0fc13380 */ 	jal	teamGetChrIds
/*  f05ace0:	93040125 */ 	lbu	$a0,0x125($t8)
/*  f05ace4:	84590000 */ 	lh	$t9,0x0($v0)
/*  f05ace8:	2414fffe */ 	addiu	$s4,$zero,-2
/*  f05acec:	00408825 */ 	or	$s1,$v0,$zero
/*  f05acf0:	12990030 */ 	beq	$s4,$t9,.L0f05adb4
/*  f05acf4:	3c01447a */ 	lui	$at,0x447a
/*  f05acf8:	4481a000 */ 	mtc1	$at,$f20
/*  f05acfc:	84440000 */ 	lh	$a0,0x0($v0)
/*  f05ad00:	3c170008 */ 	lui	$s7,0x8
/*  f05ad04:	241600ff */ 	addiu	$s6,$zero,0xff
/*  f05ad08:	24150005 */ 	addiu	$s5,$zero,0x5
.L0f05ad0c:
/*  f05ad0c:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05ad10:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05ad14:	10400023 */ 	beqz	$v0,.L0f05ada4
/*  f05ad18:	00408025 */ 	or	$s0,$v0,$zero
/*  f05ad1c:	8c480020 */ 	lw	$t0,0x20($v0)
/*  f05ad20:	51000021 */ 	beqzl	$t0,.L0f05ada8
/*  f05ad24:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05ad28:	0fc0e6a5 */ 	jal	chrIsDead
/*  f05ad2c:	00402025 */ 	or	$a0,$v0,$zero
/*  f05ad30:	5440001d */ 	bnezl	$v0,.L0f05ada8
/*  f05ad34:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05ad38:	82090007 */ 	lb	$t1,0x7($s0)
/*  f05ad3c:	52a9001a */ 	beql	$s5,$t1,.L0f05ada8
/*  f05ad40:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05ad44:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f05ad48:	920a02a2 */ 	lbu	$t2,0x2a2($s0)
/*  f05ad4c:	908202a2 */ 	lbu	$v0,0x2a2($a0)
/*  f05ad50:	51420004 */ 	beql	$t2,$v0,.L0f05ad64
/*  f05ad54:	86050000 */ 	lh	$a1,0x0($s0)
/*  f05ad58:	56c20013 */ 	bnel	$s6,$v0,.L0f05ada8
/*  f05ad5c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05ad60:	86050000 */ 	lh	$a1,0x0($s0)
.L0f05ad64:
/*  f05ad64:	848b0000 */ 	lh	$t3,0x0($a0)
/*  f05ad68:	50ab000f */ 	beql	$a1,$t3,.L0f05ada8
/*  f05ad6c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05ad70:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f05ad74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05ad78:	4614003c */ 	c.lt.s	$f0,$f20
/*  f05ad7c:	02e02825 */ 	or	$a1,$s7,$zero
/*  f05ad80:	00003025 */ 	or	$a2,$zero,$zero
/*  f05ad84:	45030005 */ 	bc1tl	.L0f05ad9c
/*  f05ad88:	26040113 */ 	addiu	$a0,$s0,0x113
/*  f05ad8c:	0fc12790 */ 	jal	chrHasFlag
/*  f05ad90:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f05ad94:	10400003 */ 	beqz	$v0,.L0f05ada4
/*  f05ad98:	26040113 */ 	addiu	$a0,$s0,0x113
.L0f05ad9c:
/*  f05ad9c:	0fc1289f */ 	jal	incrementByte
/*  f05ada0:	92650002 */ 	lbu	$a1,0x2($s3)
.L0f05ada4:
/*  f05ada4:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05ada8:
/*  f05ada8:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f05adac:	1684ffd7 */ 	bne	$s4,$a0,.L0f05ad0c
/*  f05adb0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05adb4:
/*  f05adb4:	8e4c0438 */ 	lw	$t4,0x438($s2)
/*  f05adb8:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f05adbc:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f05adc0:	258d0003 */ 	addiu	$t5,$t4,0x3
/*  f05adc4:	ae4d0438 */ 	sw	$t5,0x438($s2)
/*  f05adc8:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f05adcc:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f05add0:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f05add4:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f05add8:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f05addc:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f05ade0:	8fb60034 */ 	lw	$s6,0x34($sp)
/*  f05ade4:	8fb70038 */ 	lw	$s7,0x38($sp)
/*  f05ade8:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f05adec:	03e00008 */ 	jr	$ra
/*  f05adf0:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0132
 */
bool aiSetAction(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.chrdata->myaction = cmd[2];

	if (cmd[3] == 0) {
		g_Vars.chrdata->orders = 0;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0133
 */
GLOBAL_ASM(
glabel ai0133
/*  f05ae3c:	27bdfed8 */ 	addiu	$sp,$sp,-296
/*  f05ae40:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f05ae44:	3c15800a */ 	lui	$s5,%hi(g_Vars)
/*  f05ae48:	26b59fc0 */ 	addiu	$s5,$s5,%lo(g_Vars)
/*  f05ae4c:	8eae0434 */ 	lw	$t6,0x434($s5)
/*  f05ae50:	8eaf0438 */ 	lw	$t7,0x438($s5)
/*  f05ae54:	8eb90424 */ 	lw	$t9,0x424($s5)
/*  f05ae58:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f05ae5c:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f05ae60:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f05ae64:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f05ae68:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f05ae6c:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f05ae70:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f05ae74:	afb80048 */ 	sw	$t8,0x48($sp)
/*  f05ae78:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f05ae7c:	0fc133a7 */ 	jal	squadronGetChrIds
/*  f05ae80:	932402a2 */ 	lbu	$a0,0x2a2($t9)
/*  f05ae84:	8ea40424 */ 	lw	$a0,0x424($s5)
/*  f05ae88:	00408825 */ 	or	$s1,$v0,$zero
/*  f05ae8c:	27b30058 */ 	addiu	$s3,$sp,0x58
/*  f05ae90:	84880000 */ 	lh	$t0,0x0($a0)
/*  f05ae94:	a7a80054 */ 	sh	$t0,0x54($sp)
/*  f05ae98:	908902a0 */ 	lbu	$t1,0x2a0($a0)
/*  f05ae9c:	1040003b */ 	beqz	$v0,.L0f05af8c
/*  f05aea0:	a3a90056 */ 	sb	$t1,0x56($sp)
/*  f05aea4:	844a0000 */ 	lh	$t2,0x0($v0)
/*  f05aea8:	2414fffe */ 	addiu	$s4,$zero,-2
/*  f05aeac:	528a0038 */ 	beql	$s4,$t2,.L0f05af90
/*  f05aeb0:	24180037 */ 	addiu	$t8,$zero,0x37
/*  f05aeb4:	84440000 */ 	lh	$a0,0x0($v0)
.L0f05aeb8:
/*  f05aeb8:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05aebc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05aec0:	1040002e */ 	beqz	$v0,.L0f05af7c
/*  f05aec4:	00408025 */ 	or	$s0,$v0,$zero
/*  f05aec8:	8c4b0020 */ 	lw	$t3,0x20($v0)
/*  f05aecc:	5160002c */ 	beqzl	$t3,.L0f05af80
/*  f05aed0:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05aed4:	0fc0e6a5 */ 	jal	chrIsDead
/*  f05aed8:	00402025 */ 	or	$a0,$v0,$zero
/*  f05aedc:	54400028 */ 	bnezl	$v0,.L0f05af80
/*  f05aee0:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05aee4:	820c0007 */ 	lb	$t4,0x7($s0)
/*  f05aee8:	24010005 */ 	addiu	$at,$zero,0x5
/*  f05aeec:	02002825 */ 	or	$a1,$s0,$zero
/*  f05aef0:	11810022 */ 	beq	$t4,$at,.L0f05af7c
/*  f05aef4:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f05aef8:	0fc12aa3 */ 	jal	chrCompareTeams
/*  f05aefc:	8ea40424 */ 	lw	$a0,0x424($s5)
/*  f05af00:	5040001f */ 	beqzl	$v0,.L0f05af80
/*  f05af04:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05af08:	8ea40424 */ 	lw	$a0,0x424($s5)
/*  f05af0c:	86050000 */ 	lh	$a1,0x0($s0)
/*  f05af10:	848d0000 */ 	lh	$t5,0x0($a0)
/*  f05af14:	50ad001a */ 	beql	$a1,$t5,.L0f05af80
/*  f05af18:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05af1c:	920202a0 */ 	lbu	$v0,0x2a0($s0)
/*  f05af20:	24010002 */ 	addiu	$at,$zero,0x2
/*  f05af24:	10410007 */ 	beq	$v0,$at,.L0f05af44
/*  f05af28:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05af2c:	10410005 */ 	beq	$v0,$at,.L0f05af44
/*  f05af30:	24010004 */ 	addiu	$at,$zero,0x4
/*  f05af34:	10410003 */ 	beq	$v0,$at,.L0f05af44
/*  f05af38:	2401000e */ 	addiu	$at,$zero,0xe
/*  f05af3c:	54410010 */ 	bnel	$v0,$at,.L0f05af80
/*  f05af40:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05af44:
/*  f05af44:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f05af48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05af4c:	3c017f1b */ 	lui	$at,%hi(var7f1a9d68)
/*  f05af50:	c4249d68 */ 	lwc1	$f4,%lo(var7f1a9d68)($at)
/*  f05af54:	4604003c */ 	c.lt.s	$f0,$f4
/*  f05af58:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05af5c:	45020008 */ 	bc1fl	.L0f05af80
/*  f05af60:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05af64:	860e0000 */ 	lh	$t6,0x0($s0)
/*  f05af68:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f05af6c:	26730004 */ 	addiu	$s3,$s3,0x4
/*  f05af70:	a66efffc */ 	sh	$t6,-0x4($s3)
/*  f05af74:	920f02a0 */ 	lbu	$t7,0x2a0($s0)
/*  f05af78:	a26ffffe */ 	sb	$t7,-0x2($s3)
.L0f05af7c:
/*  f05af7c:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05af80:
/*  f05af80:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f05af84:	1684ffcc */ 	bne	$s4,$a0,.L0f05aeb8
/*  f05af88:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05af8c:
/*  f05af8c:	24180037 */ 	addiu	$t8,$zero,0x37
.L0f05af90:
/*  f05af90:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05af94:	12410095 */ 	beq	$s2,$at,.L0f05b1ec
/*  f05af98:	a2780002 */ 	sb	$t8,0x2($s3)
/*  f05af9c:	93b9005a */ 	lbu	$t9,0x5a($sp)
/*  f05afa0:	24010037 */ 	addiu	$at,$zero,0x37
/*  f05afa4:	27b30058 */ 	addiu	$s3,$sp,0x58
/*  f05afa8:	13210083 */ 	beq	$t9,$at,.L0f05b1b8
/*  f05afac:	24110001 */ 	addiu	$s1,$zero,0x1
/*  f05afb0:	2414000d */ 	addiu	$s4,$zero,0xd
/*  f05afb4:	2412000e */ 	addiu	$s2,$zero,0xe
.L0f05afb8:
/*  f05afb8:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05afbc:	86640000 */ 	lh	$a0,0x0($s3)
/*  f05afc0:	93a80056 */ 	lbu	$t0,0x56($sp)
/*  f05afc4:	00408025 */ 	or	$s0,$v0,$zero
/*  f05afc8:	2509fffb */ 	addiu	$t1,$t0,-5
/*  f05afcc:	2d210009 */ 	sltiu	$at,$t1,0x9
/*  f05afd0:	10200074 */ 	beqz	$at,.L0f05b1a4
/*  f05afd4:	00094880 */ 	sll	$t1,$t1,0x2
/*  f05afd8:	3c017f1b */ 	lui	$at,%hi(var7f1a9d6c)
/*  f05afdc:	00290821 */ 	addu	$at,$at,$t1
/*  f05afe0:	8c299d6c */ 	lw	$t1,%lo(var7f1a9d6c)($at)
/*  f05afe4:	01200008 */ 	jr	$t1
/*  f05afe8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05afec:	02002025 */ 	or	$a0,$s0,$zero
/*  f05aff0:	0fc1239d */ 	jal	func0f048e74
/*  f05aff4:	2405002d */ 	addiu	$a1,$zero,0x2d
/*  f05aff8:	5440006b */ 	bnezl	$v0,.L0f05b1a8
/*  f05affc:	92690006 */ 	lbu	$t1,0x6($s3)
/*  f05b000:	10000068 */ 	beqz	$zero,.L0f05b1a4
/*  f05b004:	a21202a1 */ 	sb	$s2,0x2a1($s0)
/*  f05b008:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b00c:	0fc1239d */ 	jal	func0f048e74
/*  f05b010:	2405001e */ 	addiu	$a1,$zero,0x1e
/*  f05b014:	14400002 */ 	bnez	$v0,.L0f05b020
/*  f05b018:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b01c:	a21202a1 */ 	sb	$s2,0x2a1($s0)
.L0f05b020:
/*  f05b020:	10000060 */ 	beqz	$zero,.L0f05b1a4
/*  f05b024:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b028:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b02c:	0fc1239d */ 	jal	func0f048e74
/*  f05b030:	2405001e */ 	addiu	$a1,$zero,0x1e
/*  f05b034:	14400005 */ 	bnez	$v0,.L0f05b04c
/*  f05b038:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b03c:	a21202a1 */ 	sb	$s2,0x2a1($s0)
/*  f05b040:	8eab0424 */ 	lw	$t3,0x424($s5)
/*  f05b044:	240a0005 */ 	addiu	$t2,$zero,0x5
/*  f05b048:	a16a02a1 */ 	sb	$t2,0x2a1($t3)
.L0f05b04c:
/*  f05b04c:	10000055 */ 	beqz	$zero,.L0f05b1a4
/*  f05b050:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b054:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b058:	0fc1239d */ 	jal	func0f048e74
/*  f05b05c:	24050032 */ 	addiu	$a1,$zero,0x32
/*  f05b060:	10400004 */ 	beqz	$v0,.L0f05b074
/*  f05b064:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b068:	240c0009 */ 	addiu	$t4,$zero,0x9
/*  f05b06c:	10000002 */ 	beqz	$zero,.L0f05b078
/*  f05b070:	a20c02a1 */ 	sb	$t4,0x2a1($s0)
.L0f05b074:
/*  f05b074:	a21202a1 */ 	sb	$s2,0x2a1($s0)
.L0f05b078:
/*  f05b078:	8eae0424 */ 	lw	$t6,0x424($s5)
/*  f05b07c:	240d0008 */ 	addiu	$t5,$zero,0x8
/*  f05b080:	10000048 */ 	beqz	$zero,.L0f05b1a4
/*  f05b084:	a1cd02a1 */ 	sb	$t5,0x2a1($t6)
/*  f05b088:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b08c:	0fc1239d */ 	jal	func0f048e74
/*  f05b090:	24050032 */ 	addiu	$a1,$zero,0x32
/*  f05b094:	10400004 */ 	beqz	$v0,.L0f05b0a8
/*  f05b098:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b09c:	240f0008 */ 	addiu	$t7,$zero,0x8
/*  f05b0a0:	10000002 */ 	beqz	$zero,.L0f05b0ac
/*  f05b0a4:	a20f02a1 */ 	sb	$t7,0x2a1($s0)
.L0f05b0a8:
/*  f05b0a8:	a21202a1 */ 	sb	$s2,0x2a1($s0)
.L0f05b0ac:
/*  f05b0ac:	8eb90424 */ 	lw	$t9,0x424($s5)
/*  f05b0b0:	24180009 */ 	addiu	$t8,$zero,0x9
/*  f05b0b4:	1000003b */ 	beqz	$zero,.L0f05b1a4
/*  f05b0b8:	a33802a1 */ 	sb	$t8,0x2a1($t9)
/*  f05b0bc:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b0c0:	0fc1239d */ 	jal	func0f048e74
/*  f05b0c4:	2405001e */ 	addiu	$a1,$zero,0x1e
/*  f05b0c8:	1440000a */ 	bnez	$v0,.L0f05b0f4
/*  f05b0cc:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b0d0:	240500fd */ 	addiu	$a1,$zero,0xfd
/*  f05b0d4:	24060100 */ 	addiu	$a2,$zero,0x100
/*  f05b0d8:	0fc127ba */ 	jal	chrHasFlagById
/*  f05b0dc:	00003825 */ 	or	$a3,$zero,$zero
/*  f05b0e0:	50400005 */ 	beqzl	$v0,.L0f05b0f8
/*  f05b0e4:	a21202a1 */ 	sb	$s2,0x2a1($s0)
/*  f05b0e8:	a21402a1 */ 	sb	$s4,0x2a1($s0)
/*  f05b0ec:	1000002d */ 	beqz	$zero,.L0f05b1a4
/*  f05b0f0:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f05b0f4:
/*  f05b0f4:	a21202a1 */ 	sb	$s2,0x2a1($s0)
.L0f05b0f8:
/*  f05b0f8:	1000002a */ 	beqz	$zero,.L0f05b1a4
/*  f05b0fc:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b100:	2a210002 */ 	slti	$at,$s1,0x2
/*  f05b104:	10200005 */ 	beqz	$at,.L0f05b11c
/*  f05b108:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b10c:	24080004 */ 	addiu	$t0,$zero,0x4
/*  f05b110:	a04802a1 */ 	sb	$t0,0x2a1($v0)
/*  f05b114:	10000023 */ 	beqz	$zero,.L0f05b1a4
/*  f05b118:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f05b11c:
/*  f05b11c:	240500fd */ 	addiu	$a1,$zero,0xfd
/*  f05b120:	24060100 */ 	addiu	$a2,$zero,0x100
/*  f05b124:	0fc127ba */ 	jal	chrHasFlagById
/*  f05b128:	00003825 */ 	or	$a3,$zero,$zero
/*  f05b12c:	10400002 */ 	beqz	$v0,.L0f05b138
/*  f05b130:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b134:	a21402a1 */ 	sb	$s4,0x2a1($s0)
.L0f05b138:
/*  f05b138:	1000001a */ 	beqz	$zero,.L0f05b1a4
/*  f05b13c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b140:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b144:	0fc1239d */ 	jal	func0f048e74
/*  f05b148:	2405001e */ 	addiu	$a1,$zero,0x1e
/*  f05b14c:	1040000a */ 	beqz	$v0,.L0f05b178
/*  f05b150:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b154:	240500fd */ 	addiu	$a1,$zero,0xfd
/*  f05b158:	24060100 */ 	addiu	$a2,$zero,0x100
/*  f05b15c:	0fc127ba */ 	jal	chrHasFlagById
/*  f05b160:	00003825 */ 	or	$a3,$zero,$zero
/*  f05b164:	50400005 */ 	beqzl	$v0,.L0f05b17c
/*  f05b168:	a21202a1 */ 	sb	$s2,0x2a1($s0)
/*  f05b16c:	a21402a1 */ 	sb	$s4,0x2a1($s0)
/*  f05b170:	1000000c */ 	beqz	$zero,.L0f05b1a4
/*  f05b174:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f05b178:
/*  f05b178:	a21202a1 */ 	sb	$s2,0x2a1($s0)
.L0f05b17c:
/*  f05b17c:	10000009 */ 	beqz	$zero,.L0f05b1a4
/*  f05b180:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f05b184:	02002025 */ 	or	$a0,$s0,$zero
/*  f05b188:	240500fd */ 	addiu	$a1,$zero,0xfd
/*  f05b18c:	24060100 */ 	addiu	$a2,$zero,0x100
/*  f05b190:	0fc127ba */ 	jal	chrHasFlagById
/*  f05b194:	00003825 */ 	or	$a3,$zero,$zero
/*  f05b198:	50400003 */ 	beqzl	$v0,.L0f05b1a8
/*  f05b19c:	92690006 */ 	lbu	$t1,0x6($s3)
/*  f05b1a0:	a21402a1 */ 	sb	$s4,0x2a1($s0)
.L0f05b1a4:
/*  f05b1a4:	92690006 */ 	lbu	$t1,0x6($s3)
.L0f05b1a8:
/*  f05b1a8:	24010037 */ 	addiu	$at,$zero,0x37
/*  f05b1ac:	26730004 */ 	addiu	$s3,$s3,0x4
/*  f05b1b0:	1521ff81 */ 	bne	$t1,$at,.L0f05afb8
/*  f05b1b4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05b1b8:
/*  f05b1b8:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05b1bc:	12210007 */ 	beq	$s1,$at,.L0f05b1dc
/*  f05b1c0:	8faa0048 */ 	lw	$t2,0x48($sp)
/*  f05b1c4:	8ea40434 */ 	lw	$a0,0x434($s5)
/*  f05b1c8:	8ea50438 */ 	lw	$a1,0x438($s5)
/*  f05b1cc:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05b1d0:	91460003 */ 	lbu	$a2,0x3($t2)
/*  f05b1d4:	10000008 */ 	beqz	$zero,.L0f05b1f8
/*  f05b1d8:	aea20438 */ 	sw	$v0,0x438($s5)
.L0f05b1dc:
/*  f05b1dc:	8eab0438 */ 	lw	$t3,0x438($s5)
/*  f05b1e0:	256c0004 */ 	addiu	$t4,$t3,0x4
/*  f05b1e4:	10000004 */ 	beqz	$zero,.L0f05b1f8
/*  f05b1e8:	aeac0438 */ 	sw	$t4,0x438($s5)
.L0f05b1ec:
/*  f05b1ec:	8ead0438 */ 	lw	$t5,0x438($s5)
/*  f05b1f0:	25ae0004 */ 	addiu	$t6,$t5,0x4
/*  f05b1f4:	aeae0438 */ 	sw	$t6,0x438($s5)
.L0f05b1f8:
/*  f05b1f8:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f05b1fc:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f05b200:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f05b204:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f05b208:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f05b20c:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f05b210:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f05b214:	27bd0128 */ 	addiu	$sp,$sp,0x128
/*  f05b218:	03e00008 */ 	jr	$ra
/*  f05b21c:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0134
 */
GLOBAL_ASM(
glabel aiIfOrders
/*  f05b220:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05b224:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05b228:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f05b22c:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f05b230:	8c6f0424 */ 	lw	$t7,0x424($v1)
/*  f05b234:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f05b238:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05b23c:	00851021 */ 	addu	$v0,$a0,$a1
/*  f05b240:	904e0003 */ 	lbu	$t6,0x3($v0)
/*  f05b244:	91f802a1 */ 	lbu	$t8,0x2a1($t7)
/*  f05b248:	24a90005 */ 	addiu	$t1,$a1,0x5
/*  f05b24c:	55d8000e */ 	bnel	$t6,$t8,.L0f05b288
/*  f05b250:	ac690438 */ 	sw	$t1,0x438($v1)
/*  f05b254:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05b258:	90460004 */ 	lbu	$a2,0x4($v0)
/*  f05b25c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05b260:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05b264:	8c790424 */ 	lw	$t9,0x424($v1)
/*  f05b268:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f05b26c:	2401000d */ 	addiu	$at,$zero,0xd
/*  f05b270:	932802a1 */ 	lbu	$t0,0x2a1($t9)
/*  f05b274:	55010005 */ 	bnel	$t0,$at,.L0f05b28c
/*  f05b278:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05b27c:	10000003 */ 	beqz	$zero,.L0f05b28c
/*  f05b280:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05b284:	ac690438 */ 	sw	$t1,0x438($v1)
.L0f05b288:
/*  f05b288:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f05b28c:
/*  f05b28c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f05b290:	00001025 */ 	or	$v0,$zero,$zero
/*  f05b294:	03e00008 */ 	jr	$ra
/*  f05b298:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch because it uses different temporary registers
//bool aiIfOrders(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//
//	if (g_Vars.chrdata->orders == cmd[3]) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
//
//		if (g_Vars.chrdata->orders == 13) {
//			// empty
//		}
//	} else {
//		g_Vars.aioffset += 5;
//	}
//
//	return false;
//}

/**
 * @cmd 0135
 */
bool aiIfHasOrders(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->orders) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0136
 */
GLOBAL_ASM(
glabel ai0136
/*  f05b2f8:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f05b2fc:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05b300:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05b304:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05b308:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05b30c:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05b310:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05b314:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05b318:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05b31c:	90620003 */ 	lbu	$v0,0x3($v1)
/*  f05b320:	14400011 */ 	bnez	$v0,.L0f05b368
/*  f05b324:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b328:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f05b32c:	3c017f1b */ 	lui	$at,%hi(var7f1a9d90)
/*  f05b330:	30b80010 */ 	andi	$t8,$a1,0x10
/*  f05b334:	13000005 */ 	beqz	$t8,.L0f05b34c
/*  f05b338:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b33c:	3c0143c8 */ 	lui	$at,0x43c8
/*  f05b340:	44810000 */ 	mtc1	$at,$f0
/*  f05b344:	10000003 */ 	beqz	$zero,.L0f05b354
/*  f05b348:	8e040424 */ 	lw	$a0,0x424($s0)
.L0f05b34c:
/*  f05b34c:	c4209d90 */ 	lwc1	$f0,%lo(var7f1a9d90)($at)
/*  f05b350:	8e040424 */ 	lw	$a0,0x424($s0)
.L0f05b354:
/*  f05b354:	44060000 */ 	mfc1	$a2,$f0
/*  f05b358:	0fc130ba */ 	jal	func0f04c2e8
/*  f05b35c:	248702c8 */ 	addiu	$a3,$a0,0x2c8
/*  f05b360:	10000018 */ 	beqz	$zero,.L0f05b3c4
/*  f05b364:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05b368:
/*  f05b368:	1441000d */ 	bne	$v0,$at,.L0f05b3a0
/*  f05b36c:	2405090a */ 	addiu	$a1,$zero,0x90a
/*  f05b370:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05b374:	0fc0a221 */ 	jal	chrGetTargetProp
/*  f05b378:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f05b37c:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f05b380:	3c06461c */ 	lui	$a2,0x461c
/*  f05b384:	34c64000 */ 	ori	$a2,$a2,0x4000
/*  f05b388:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05b38c:	24470008 */ 	addiu	$a3,$v0,0x8
/*  f05b390:	0fc130ba */ 	jal	func0f04c2e8
/*  f05b394:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f05b398:	1000000a */ 	beqz	$zero,.L0f05b3c4
/*  f05b39c:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05b3a0:
/*  f05b3a0:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05b3a4:	00003025 */ 	or	$a2,$zero,$zero
/*  f05b3a8:	0fc12e8d */ 	jal	func0f04ba34
/*  f05b3ac:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f05b3b0:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f05b3b4:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05b3b8:	0fc1309a */ 	jal	func0f04c268
/*  f05b3bc:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f05b3c0:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05b3c4:
/*  f05b3c4:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05b3c8:	00001025 */ 	or	$v0,$zero,$zero
/*  f05b3cc:	27280004 */ 	addiu	$t0,$t9,0x4
/*  f05b3d0:	ae080438 */ 	sw	$t0,0x438($s0)
/*  f05b3d4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05b3d8:	03e00008 */ 	jr	$ra
/*  f05b3dc:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

/**
 * @cmd 0137
 */
GLOBAL_ASM(
glabel aiIfChrInSquadronDoingAction
/*  f05b3e0:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f05b3e4:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f05b3e8:	3c12800a */ 	lui	$s2,%hi(g_Vars)
/*  f05b3ec:	26529fc0 */ 	addiu	$s2,$s2,%lo(g_Vars)
/*  f05b3f0:	8e4e0424 */ 	lw	$t6,0x424($s2)
/*  f05b3f4:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f05b3f8:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f05b3fc:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f05b400:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f05b404:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f05b408:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f05b40c:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f05b410:	0fc133a7 */ 	jal	squadronGetChrIds
/*  f05b414:	91c402a2 */ 	lbu	$a0,0x2a2($t6)
/*  f05b418:	8e450438 */ 	lw	$a1,0x438($s2)
/*  f05b41c:	8e4f0434 */ 	lw	$t7,0x434($s2)
/*  f05b420:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f05b424:	00408825 */ 	or	$s1,$v0,$zero
/*  f05b428:	afb8003c */ 	sw	$t8,0x3c($sp)
/*  f05b42c:	10400033 */ 	beqz	$v0,.L0f05b4fc
/*  f05b430:	01e5a021 */ 	addu	$s4,$t7,$a1
/*  f05b434:	84590000 */ 	lh	$t9,0x0($v0)
/*  f05b438:	2415fffe */ 	addiu	$s5,$zero,-2
/*  f05b43c:	3c017f1b */ 	lui	$at,%hi(var7f1a9d94)
/*  f05b440:	12b9002e */ 	beq	$s5,$t9,.L0f05b4fc
/*  f05b444:	24130005 */ 	addiu	$s3,$zero,0x5
/*  f05b448:	84440000 */ 	lh	$a0,0x0($v0)
/*  f05b44c:	c4349d94 */ 	lwc1	$f20,%lo(var7f1a9d94)($at)
.L0f05b450:
/*  f05b450:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05b454:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b458:	10400023 */ 	beqz	$v0,.L0f05b4e8
/*  f05b45c:	00408025 */ 	or	$s0,$v0,$zero
/*  f05b460:	8c480020 */ 	lw	$t0,0x20($v0)
/*  f05b464:	51000021 */ 	beqzl	$t0,.L0f05b4ec
/*  f05b468:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05b46c:	0fc0e6a5 */ 	jal	chrIsDead
/*  f05b470:	00402025 */ 	or	$a0,$v0,$zero
/*  f05b474:	5440001d */ 	bnezl	$v0,.L0f05b4ec
/*  f05b478:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05b47c:	82090007 */ 	lb	$t1,0x7($s0)
/*  f05b480:	02002825 */ 	or	$a1,$s0,$zero
/*  f05b484:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f05b488:	52690018 */ 	beql	$s3,$t1,.L0f05b4ec
/*  f05b48c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05b490:	0fc12aa3 */ 	jal	chrCompareTeams
/*  f05b494:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f05b498:	50400014 */ 	beqzl	$v0,.L0f05b4ec
/*  f05b49c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05b4a0:	8e440424 */ 	lw	$a0,0x424($s2)
/*  f05b4a4:	86050000 */ 	lh	$a1,0x0($s0)
/*  f05b4a8:	848a0000 */ 	lh	$t2,0x0($a0)
/*  f05b4ac:	50aa000f */ 	beql	$a1,$t2,.L0f05b4ec
/*  f05b4b0:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05b4b4:	0fc1272c */ 	jal	chrGetDistanceToChr
/*  f05b4b8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b4bc:	4614003c */ 	c.lt.s	$f0,$f20
/*  f05b4c0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b4c4:	45020009 */ 	bc1fl	.L0f05b4ec
/*  f05b4c8:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05b4cc:	928b0002 */ 	lbu	$t3,0x2($s4)
/*  f05b4d0:	920c02a0 */ 	lbu	$t4,0x2a0($s0)
/*  f05b4d4:	156c0004 */ 	bne	$t3,$t4,.L0f05b4e8
/*  f05b4d8:	240d0002 */ 	addiu	$t5,$zero,0x2
/*  f05b4dc:	afad003c */ 	sw	$t5,0x3c($sp)
/*  f05b4e0:	10000006 */ 	beqz	$zero,.L0f05b4fc
/*  f05b4e4:	8e450438 */ 	lw	$a1,0x438($s2)
.L0f05b4e8:
/*  f05b4e8:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05b4ec:
/*  f05b4ec:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f05b4f0:	16a4ffd7 */ 	bne	$s5,$a0,.L0f05b450
/*  f05b4f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05b4f8:	8e450438 */ 	lw	$a1,0x438($s2)
.L0f05b4fc:
/*  f05b4fc:	8fae003c */ 	lw	$t6,0x3c($sp)
/*  f05b500:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05b504:	24af0004 */ 	addiu	$t7,$a1,0x4
/*  f05b508:	51c10007 */ 	beql	$t6,$at,.L0f05b528
/*  f05b50c:	ae4f0438 */ 	sw	$t7,0x438($s2)
/*  f05b510:	8e440434 */ 	lw	$a0,0x434($s2)
/*  f05b514:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05b518:	92860003 */ 	lbu	$a2,0x3($s4)
/*  f05b51c:	10000002 */ 	beqz	$zero,.L0f05b528
/*  f05b520:	ae420438 */ 	sw	$v0,0x438($s2)
/*  f05b524:	ae4f0438 */ 	sw	$t7,0x438($s2)
.L0f05b528:
/*  f05b528:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f05b52c:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f05b530:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f05b534:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f05b538:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f05b53c:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f05b540:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f05b544:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f05b548:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f05b54c:	03e00008 */ 	jr	$ra
/*  f05b550:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatches due to prop of rodata. This function uses literal 3500, while
// others below in this file use const f32 arrays, but const f32 arrays are
// placed in .rodata before all literals.
//bool aiIfChrInSquadronDoingAction(void)
//{
//	s32 ret;
//	s16 *chrnums = squadronGetChrIds(g_Vars.chrdata->squadron);
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	ret = 1;
//
//	if (chrnums) {
//		for (; *chrnums != -2; chrnums++) {
//			struct chrdata *chr = chrFindByLiteralId(*chrnums);
//
//			if (chr && chr->unk020 && chrIsDead(chr) == false &&
//					chr->actiontype != ACT_DEAD &&
//					chrCompareTeams(g_Vars.chrdata, chr, 1) &&
//					g_Vars.chrdata->chrnum != chr->chrnum &&
//					chrGetDistanceToChr(g_Vars.chrdata, chr->chrnum) < 3500 &&
//					chr->myaction == cmd[2]) {
//				ret = 2;
//				break;
//			}
//		}
//	}
//
//	if (ret != 1) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//	} else {
//		g_Vars.aioffset += 4;
//	}
//
//	return false;
//}

/**
 * @cmd 0139
 */
bool ai0139(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 flags = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);
	struct coord pos;

	func0f04c874(g_Vars.chrdata, flags, &pos, cmd[7], cmd[6]);

	g_Vars.aioffset += 8;

	return false;
}

/**
 * @cmd 013a
 */
bool aiSetChrPresetToUnalertedTeammate(void)
{
	f32 closest_distance = var7f1a9d98[0];
	s16 candidate_chrnum = -1;
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 *chrnums = teamGetChrIds(g_Vars.chrdata->team);

	if (g_Vars.chrdata->talktimer >= 0x1e1 && g_Vars.chrdata->listening) {
		g_Vars.chrdata->listening = 0;
	}

	for (; *chrnums != -2; chrnums++) {
		struct chrdata *chr = chrFindByLiteralId(*chrnums);

		if (cmd[3] == 0 && chr && chr->unk020 &&
				chrIsDead(chr) == false &&
				chr->actiontype != ACT_DEAD &&
				chr->actiontype != ACT_DIE &&
				chr->actiontype != ACT_DRUGGEDKO &&
				chr->actiontype != ACT_DRUGGEDDROP &&
				chr->actiontype != ACT_DRUGGEDCOMINGUP &&
				chr->alertness < 100 &&
				(g_Vars.chrdata->squadron == chr->squadron || g_Vars.chrdata->squadron == 0xff) &&
				g_Vars.chrdata->chrnum != chr->chrnum) {

			f32 distance = chrGetDistanceToChr(g_Vars.chrdata, chr->chrnum);

			if (distance < closest_distance &&
					(distance < 100.0f * (s32)cmd[2] || cmd[2] == 0) &&
					distance < closest_distance) {
				closest_distance = distance;

				if (cmd[3] != 1) {
					candidate_chrnum = chr->chrnum;
				} else if (distance > 200) {
					candidate_chrnum = chr->chrnum;
				}
			}
		}
	}

	if (candidate_chrnum != -1) {
		chrSetChrPreset(g_Vars.chrdata, candidate_chrnum);
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 013b
 */
bool aiSetSquadron(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.chrdata->squadron = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 013c
 */
bool ai013c(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f02ec94(g_Vars.chrdata)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 013d
 */
bool ai013d(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f043da8(g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 013e
 */
bool ai013e(void)
{
	if (func0f03aca0(g_Vars.chrdata, 0x43c80000, 1) == 0 && func0f04bffc(g_Vars.chrdata, 1000, 12000) != -1) {
		func0f04c268(g_Vars.chrdata, 2);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 013f
 */
bool ai013f(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.hovdata) {
		if (g_Vars.hovdata->unk90 != 0) {
			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
		} else {
			g_Vars.aioffset += 3;
		}
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0140
 */
bool ai0140(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.hovdata) {
		if ((cmd[3] < g_Vars.hovdata->unk8c && cmd[2] == 1) || (g_Vars.hovdata->unk8c < cmd[3] && cmd[2] == 0)) {
			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
		} else {
			g_Vars.aioffset += 5;
		}
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0141
 */
GLOBAL_ASM(
glabel aiShuffleInvestigationTerminals
/*  f05bac0:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f05bac4:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f05bac8:	8c4e0434 */ 	lw	$t6,0x434($v0)
/*  f05bacc:	8c4f0438 */ 	lw	$t7,0x438($v0)
/*  f05bad0:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f05bad4:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f05bad8:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05badc:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f05bae0:	01cf8021 */ 	addu	$s0,$t6,$t7
/*  f05bae4:	0fc2554a */ 	jal	tagFindById
/*  f05bae8:	92040002 */ 	lbu	$a0,0x2($s0)
/*  f05baec:	92040003 */ 	lbu	$a0,0x3($s0)
/*  f05baf0:	0fc2554a */ 	jal	tagFindById
/*  f05baf4:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f05baf8:	0c004b70 */ 	jal	random
/*  f05bafc:	00408825 */ 	or	$s1,$v0,$zero
/*  f05bb00:	24010003 */ 	addiu	$at,$zero,0x3
/*  f05bb04:	0041001b */ 	divu	$zero,$v0,$at
/*  f05bb08:	0000c010 */ 	mfhi	$t8
/*  f05bb0c:	a3b80037 */ 	sb	$t8,0x37($sp)
/*  f05bb10:	0c004b70 */ 	jal	random
/*  f05bb14:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05bb18:	24010003 */ 	addiu	$at,$zero,0x3
/*  f05bb1c:	0041001b */ 	divu	$zero,$v0,$at
/*  f05bb20:	92080008 */ 	lbu	$t0,0x8($s0)
/*  f05bb24:	00002810 */ 	mfhi	$a1
/*  f05bb28:	30b900ff */ 	andi	$t9,$a1,0xff
/*  f05bb2c:	03202825 */ 	or	$a1,$t9,$zero
/*  f05bb30:	1500006b */ 	bnez	$t0,.L0f05bce0
/*  f05bb34:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f05bb38:	93a60037 */ 	lbu	$a2,0x37($sp)
/*  f05bb3c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05bb40:	14c0000e */ 	bnez	$a2,.L0f05bb7c
/*  f05bb44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05bb48:	92040004 */ 	lbu	$a0,0x4($s0)
/*  f05bb4c:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f05bb50:	a3b90036 */ 	sb	$t9,0x36($sp)
/*  f05bb54:	0fc2554a */ 	jal	tagFindById
/*  f05bb58:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f05bb5c:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f05bb60:	84490006 */ 	lh	$t1,0x6($v0)
/*  f05bb64:	93a50036 */ 	lbu	$a1,0x36($sp)
/*  f05bb68:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f05bb6c:	a4690006 */ 	sh	$t1,0x6($v1)
/*  f05bb70:	8c4a000c */ 	lw	$t2,0xc($v0)
/*  f05bb74:	1000002c */ 	beqz	$zero,.L0f05bc28
/*  f05bb78:	ac6a000c */ 	sw	$t2,0xc($v1)
.L0f05bb7c:
/*  f05bb7c:	54c1000f */ 	bnel	$a2,$at,.L0f05bbbc
/*  f05bb80:	24010002 */ 	addiu	$at,$zero,0x2
/*  f05bb84:	92040005 */ 	lbu	$a0,0x5($s0)
/*  f05bb88:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f05bb8c:	a3a50036 */ 	sb	$a1,0x36($sp)
/*  f05bb90:	0fc2554a */ 	jal	tagFindById
/*  f05bb94:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f05bb98:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f05bb9c:	844b0006 */ 	lh	$t3,0x6($v0)
/*  f05bba0:	93a50036 */ 	lbu	$a1,0x36($sp)
/*  f05bba4:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f05bba8:	a46b0006 */ 	sh	$t3,0x6($v1)
/*  f05bbac:	8c4c000c */ 	lw	$t4,0xc($v0)
/*  f05bbb0:	1000001d */ 	beqz	$zero,.L0f05bc28
/*  f05bbb4:	ac6c000c */ 	sw	$t4,0xc($v1)
/*  f05bbb8:	24010002 */ 	addiu	$at,$zero,0x2
.L0f05bbbc:
/*  f05bbbc:	54c1000f */ 	bnel	$a2,$at,.L0f05bbfc
/*  f05bbc0:	92040007 */ 	lbu	$a0,0x7($s0)
/*  f05bbc4:	92040006 */ 	lbu	$a0,0x6($s0)
/*  f05bbc8:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f05bbcc:	a3a50036 */ 	sb	$a1,0x36($sp)
/*  f05bbd0:	0fc2554a */ 	jal	tagFindById
/*  f05bbd4:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f05bbd8:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f05bbdc:	844d0006 */ 	lh	$t5,0x6($v0)
/*  f05bbe0:	93a50036 */ 	lbu	$a1,0x36($sp)
/*  f05bbe4:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f05bbe8:	a46d0006 */ 	sh	$t5,0x6($v1)
/*  f05bbec:	8c4e000c */ 	lw	$t6,0xc($v0)
/*  f05bbf0:	1000000d */ 	beqz	$zero,.L0f05bc28
/*  f05bbf4:	ac6e000c */ 	sw	$t6,0xc($v1)
/*  f05bbf8:	92040007 */ 	lbu	$a0,0x7($s0)
.L0f05bbfc:
/*  f05bbfc:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f05bc00:	a3a50036 */ 	sb	$a1,0x36($sp)
/*  f05bc04:	0fc2554a */ 	jal	tagFindById
/*  f05bc08:	afa3002c */ 	sw	$v1,0x2c($sp)
/*  f05bc0c:	8fa3002c */ 	lw	$v1,0x2c($sp)
/*  f05bc10:	844f0006 */ 	lh	$t7,0x6($v0)
/*  f05bc14:	93a50036 */ 	lbu	$a1,0x36($sp)
/*  f05bc18:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f05bc1c:	a46f0006 */ 	sh	$t7,0x6($v1)
/*  f05bc20:	8c58000c */ 	lw	$t8,0xc($v0)
/*  f05bc24:	ac78000c */ 	sw	$t8,0xc($v1)
.L0f05bc28:
/*  f05bc28:	14c50006 */ 	bne	$a2,$a1,.L0f05bc44
/*  f05bc2c:	00a01025 */ 	or	$v0,$a1,$zero
/*  f05bc30:	18400004 */ 	blez	$v0,.L0f05bc44
/*  f05bc34:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05bc38:	24a5ffff */ 	addiu	$a1,$a1,-1
/*  f05bc3c:	10000006 */ 	beqz	$zero,.L0f05bc58
/*  f05bc40:	30a200ff */ 	andi	$v0,$a1,0xff
.L0f05bc44:
/*  f05bc44:	14c20004 */ 	bne	$a2,$v0,.L0f05bc58
/*  f05bc48:	28410003 */ 	slti	$at,$v0,0x3
/*  f05bc4c:	10200002 */ 	beqz	$at,.L0f05bc58
/*  f05bc50:	24a50001 */ 	addiu	$a1,$a1,0x1
/*  f05bc54:	30a200ff */ 	andi	$v0,$a1,0xff
.L0f05bc58:
/*  f05bc58:	14400008 */ 	bnez	$v0,.L0f05bc7c
/*  f05bc5c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f05bc60:	0fc2554a */ 	jal	tagFindById
/*  f05bc64:	92040004 */ 	lbu	$a0,0x4($s0)
/*  f05bc68:	84490006 */ 	lh	$t1,0x6($v0)
/*  f05bc6c:	a6290006 */ 	sh	$t1,0x6($s1)
/*  f05bc70:	8c4a000c */ 	lw	$t2,0xc($v0)
/*  f05bc74:	1000001a */ 	beqz	$zero,.L0f05bce0
/*  f05bc78:	ae2a000c */ 	sw	$t2,0xc($s1)
.L0f05bc7c:
/*  f05bc7c:	54410009 */ 	bnel	$v0,$at,.L0f05bca4
/*  f05bc80:	24010002 */ 	addiu	$at,$zero,0x2
/*  f05bc84:	0fc2554a */ 	jal	tagFindById
/*  f05bc88:	92040005 */ 	lbu	$a0,0x5($s0)
/*  f05bc8c:	844b0006 */ 	lh	$t3,0x6($v0)
/*  f05bc90:	a62b0006 */ 	sh	$t3,0x6($s1)
/*  f05bc94:	8c4c000c */ 	lw	$t4,0xc($v0)
/*  f05bc98:	10000011 */ 	beqz	$zero,.L0f05bce0
/*  f05bc9c:	ae2c000c */ 	sw	$t4,0xc($s1)
/*  f05bca0:	24010002 */ 	addiu	$at,$zero,0x2
.L0f05bca4:
/*  f05bca4:	14410008 */ 	bne	$v0,$at,.L0f05bcc8
/*  f05bca8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05bcac:	0fc2554a */ 	jal	tagFindById
/*  f05bcb0:	92040006 */ 	lbu	$a0,0x6($s0)
/*  f05bcb4:	844d0006 */ 	lh	$t5,0x6($v0)
/*  f05bcb8:	a62d0006 */ 	sh	$t5,0x6($s1)
/*  f05bcbc:	8c4e000c */ 	lw	$t6,0xc($v0)
/*  f05bcc0:	10000007 */ 	beqz	$zero,.L0f05bce0
/*  f05bcc4:	ae2e000c */ 	sw	$t6,0xc($s1)
.L0f05bcc8:
/*  f05bcc8:	0fc2554a */ 	jal	tagFindById
/*  f05bccc:	92040007 */ 	lbu	$a0,0x7($s0)
/*  f05bcd0:	844f0006 */ 	lh	$t7,0x6($v0)
/*  f05bcd4:	a62f0006 */ 	sh	$t7,0x6($s1)
/*  f05bcd8:	8c58000c */ 	lw	$t8,0xc($v0)
/*  f05bcdc:	ae38000c */ 	sw	$t8,0xc($s1)
.L0f05bce0:
/*  f05bce0:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05bce4:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05bce8:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f05bcec:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05bcf0:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f05bcf4:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f05bcf8:	27280009 */ 	addiu	$t0,$t9,0x9
/*  f05bcfc:	ac680438 */ 	sw	$t0,0x438($v1)
/*  f05bd00:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f05bd04:	03e00008 */ 	jr	$ra
/*  f05bd08:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch due to stack pointers misaligned
//bool aiShuffleInvestigationTerminals(void)
//{
//	// 2 = dst1
//	// 3 = dst2
//	// 4 = src1
//	// 5 = src2
//	// 6 = src3
//	// 7 = src4
//	// 8 = always 00
//
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct tag *goodpc = tagFindById(cmd[2]);
//	struct tag *badpc = tagFindById(cmd[3]);
//
//	/**
//	 * @bug: These should be using modulus 4. Because it's 1 short, the final
//	 * else conditions are unreachable so only 3 of the 4 terminals can be
//	 * selected as the destination.
//	 */
//	u8 rand1 = random() % 3U;
//	u8 rand2 = random() % 3U;
//
//	if (cmd[8] == 0) {
//		struct tag *dst;
//
//		// Place the good terminal
//		if (rand1 == 0) {
//			dst = tagFindById(cmd[4]);
//			goodpc->unk06 = dst->unk06;
//			goodpc->obj = dst->obj;
//		} else if (rand1 == 1) {
//			dst = tagFindById(cmd[5]);
//			goodpc->unk06 = dst->unk06;
//			goodpc->obj = dst->obj;
//		} else if (rand1 == 2) {
//			dst = tagFindById(cmd[6]);
//			goodpc->unk06 = dst->unk06;
//			goodpc->obj = dst->obj;
//		} else {
//			dst = tagFindById(cmd[7]);
//			goodpc->unk06 = dst->unk06;
//			goodpc->obj = dst->obj;
//		}
//
//		// Handle both good and alarm terminals having the same destination
//		if (rand2 == rand1 && rand2 > 0) {
//			rand2--;
//		} else if (rand2 == rand1 && rand2 < 3) {
//			rand2++;
//		}
//
//		// Place the alarm terminal
//		if (rand2 == 0) {
//			dst = tagFindById(cmd[4]);
//			badpc->unk06 = dst->unk06;
//			badpc->obj = dst->obj;
//		} else if (rand2 == 1) {
//			dst = tagFindById(cmd[5]);
//			badpc->unk06 = dst->unk06;
//			badpc->obj = dst->obj;
//		} else if (rand2 == 2) {
//			dst = tagFindById(cmd[6]);
//			badpc->unk06 = dst->unk06;
//			badpc->obj = dst->obj;
//		} else {
//			dst = tagFindById(cmd[7]);
//			badpc->unk06 = dst->unk06;
//			badpc->obj = dst->obj;
//		}
//	}
//
//	g_Vars.aioffset += 9;
//
//	return false;
//}

/**
 * @cmd 0142
 */
bool aiSetPadPresetToInvestigationTerminal(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj) {
		s16 objpad = obj->pad;
		s32 i;

		for (i = 0; i < sizeof(g_InvestigationPadMap) / sizeof(g_InvestigationPadMap[0]); i += 2) {
			if (objpad == g_InvestigationPadMap[i]) {
				chrSetPadPreset(g_Vars.chrdata, g_InvestigationPadMap[i + 1]);
			}
		}
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0143
 */
bool ai0143(void)
{
	if (g_Vars.hovdata) {
		heliSetField90(&g_Vars.hovdata->base, true);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0144
 */
bool ai0144(void)
{
	if (g_Vars.hovdata) {
		heliSetField90(&g_Vars.hovdata->base, false);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0145
 */
bool aiRebuildTeams(void)
{
	rebuildTeams();
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0146
 */
bool aiRebuildSquadrons(void)
{
	rebuildSquadrons();
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 0147
 */
GLOBAL_ASM(
glabel ai0147
/*  f05bea0:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f05bea4:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f05bea8:	3c15800a */ 	lui	$s5,%hi(g_Vars)
/*  f05beac:	26b59fc0 */ 	addiu	$s5,$s5,%lo(g_Vars)
/*  f05beb0:	8eae0434 */ 	lw	$t6,0x434($s5)
/*  f05beb4:	8eaf0438 */ 	lw	$t7,0x438($s5)
/*  f05beb8:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f05bebc:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f05bec0:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f05bec4:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f05bec8:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f05becc:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f05bed0:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05bed4:	90440002 */ 	lbu	$a0,0x2($v0)
/*  f05bed8:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f05bedc:	0fc133a7 */ 	jal	squadronGetChrIds
/*  f05bee0:	afa20034 */ 	sw	$v0,0x34($sp)
/*  f05bee4:	1040001b */ 	beqz	$v0,.L0f05bf54
/*  f05bee8:	00408825 */ 	or	$s1,$v0,$zero
/*  f05beec:	84580000 */ 	lh	$t8,0x0($v0)
/*  f05bef0:	2414fffe */ 	addiu	$s4,$zero,-2
/*  f05bef4:	24130005 */ 	addiu	$s3,$zero,0x5
/*  f05bef8:	12980016 */ 	beq	$s4,$t8,.L0f05bf54
/*  f05befc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05bf00:	84440000 */ 	lh	$a0,0x0($v0)
.L0f05bf04:
/*  f05bf04:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05bf08:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05bf0c:	1040000d */ 	beqz	$v0,.L0f05bf44
/*  f05bf10:	00408025 */ 	or	$s0,$v0,$zero
/*  f05bf14:	8c590020 */ 	lw	$t9,0x20($v0)
/*  f05bf18:	00402025 */ 	or	$a0,$v0,$zero
/*  f05bf1c:	5320000a */ 	beqzl	$t9,.L0f05bf48
/*  f05bf20:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05bf24:	0fc0e6a5 */ 	jal	chrIsDead
/*  f05bf28:	00009025 */ 	or	$s2,$zero,$zero
/*  f05bf2c:	54400006 */ 	bnezl	$v0,.L0f05bf48
/*  f05bf30:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05bf34:	82080007 */ 	lb	$t0,0x7($s0)
/*  f05bf38:	52680003 */ 	beql	$s3,$t0,.L0f05bf48
/*  f05bf3c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05bf40:	24120001 */ 	addiu	$s2,$zero,0x1
.L0f05bf44:
/*  f05bf44:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05bf48:
/*  f05bf48:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f05bf4c:	1684ffed */ 	bne	$s4,$a0,.L0f05bf04
/*  f05bf50:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05bf54:
/*  f05bf54:	16400007 */ 	bnez	$s2,.L0f05bf74
/*  f05bf58:	8fa90034 */ 	lw	$t1,0x34($sp)
/*  f05bf5c:	8ea40434 */ 	lw	$a0,0x434($s5)
/*  f05bf60:	8ea50438 */ 	lw	$a1,0x438($s5)
/*  f05bf64:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05bf68:	91260003 */ 	lbu	$a2,0x3($t1)
/*  f05bf6c:	10000004 */ 	beqz	$zero,.L0f05bf80
/*  f05bf70:	aea20438 */ 	sw	$v0,0x438($s5)
.L0f05bf74:
/*  f05bf74:	8eaa0438 */ 	lw	$t2,0x438($s5)
/*  f05bf78:	254b0004 */ 	addiu	$t3,$t2,0x4
/*  f05bf7c:	aeab0438 */ 	sw	$t3,0x438($s5)
.L0f05bf80:
/*  f05bf80:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f05bf84:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f05bf88:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f05bf8c:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f05bf90:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f05bf94:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f05bf98:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f05bf9c:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f05bfa0:	03e00008 */ 	jr	$ra
/*  f05bfa4:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0148
 */
bool aiChrSetListening(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->listening == 0) {
		chr->listening = cmd[3];
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0149
 */
GLOBAL_ASM(
glabel aiIfChrListening
/*  f05c014:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f05c018:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05c01c:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05c020:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05c024:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05c028:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05c02c:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05c030:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05c034:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05c038:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f05c03c:	0fc126d1 */ 	jal	chrFindById
/*  f05c040:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f05c044:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f05c048:	90780004 */ 	lbu	$t8,0x4($v1)
/*  f05c04c:	57000010 */ 	bnezl	$t8,.L0f05c090
/*  f05c050:	8e0b0424 */ 	lw	$t3,0x424($s0)
/*  f05c054:	90790003 */ 	lbu	$t9,0x3($v1)
/*  f05c058:	904802a3 */ 	lbu	$t0,0x2a3($v0)
/*  f05c05c:	57280008 */ 	bnel	$t9,$t0,.L0f05c080
/*  f05c060:	8e090438 */ 	lw	$t1,0x438($s0)
/*  f05c064:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f05c068:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f05c06c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05c070:	90660005 */ 	lbu	$a2,0x5($v1)
/*  f05c074:	10000012 */ 	beqz	$zero,.L0f05c0c0
/*  f05c078:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f05c07c:	8e090438 */ 	lw	$t1,0x438($s0)
.L0f05c080:
/*  f05c080:	252a0006 */ 	addiu	$t2,$t1,0x6
/*  f05c084:	1000000e */ 	beqz	$zero,.L0f05c0c0
/*  f05c088:	ae0a0438 */ 	sw	$t2,0x438($s0)
/*  f05c08c:	8e0b0424 */ 	lw	$t3,0x424($s0)
.L0f05c090:
/*  f05c090:	8d6c02a4 */ 	lw	$t4,0x2a4($t3)
/*  f05c094:	55800008 */ 	bnezl	$t4,.L0f05c0b8
/*  f05c098:	8e0d0438 */ 	lw	$t5,0x438($s0)
/*  f05c09c:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f05c0a0:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f05c0a4:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05c0a8:	90660005 */ 	lbu	$a2,0x5($v1)
/*  f05c0ac:	10000004 */ 	beqz	$zero,.L0f05c0c0
/*  f05c0b0:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f05c0b4:	8e0d0438 */ 	lw	$t5,0x438($s0)
.L0f05c0b8:
/*  f05c0b8:	25ae0006 */ 	addiu	$t6,$t5,0x6
/*  f05c0bc:	ae0e0438 */ 	sw	$t6,0x438($s0)
.L0f05c0c0:
/*  f05c0c0:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05c0c4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05c0c8:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f05c0cc:	03e00008 */ 	jr	$ra
/*  f05c0d0:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch because chr->listening and cmd[3] registers are loaded to registers
// in the wrong order. The function is functionally identical though.
//bool aiIfChrListening(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
//
//	if (cmd[4] == 0) {
//		if (chr->listening == cmd[3]) {
//			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
//		} else {
//			g_Vars.aioffset += 6;
//		}
//	} else {
//		if (g_Vars.chrdata->convtalk == 0) {
//			g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
//		} else {
//			g_Vars.aioffset += 6;
//		}
//	}
//
//	return false;
//}

/**
 * @cmd 014a
 */
bool aiIfTrue(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);

	return false;
}

/**
 * @cmd 014b
 */
bool aiIfNotListening(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata->listening == 0) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0157
 */
bool aiSetTintedGlassEnabled(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_TintedGlassEnabled = cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0152
 */
GLOBAL_ASM(
glabel ai0152
/*  f05c19c:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*  f05c1a0:	afbe0038 */ 	sw	$s8,0x38($sp)
/*  f05c1a4:	3c1e800a */ 	lui	$s8,%hi(g_Vars)
/*  f05c1a8:	27de9fc0 */ 	addiu	$s8,$s8,%lo(g_Vars)
/*  f05c1ac:	8fce0434 */ 	lw	$t6,0x434($s8)
/*  f05c1b0:	8fcf0438 */ 	lw	$t7,0x438($s8)
/*  f05c1b4:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f05c1b8:	afb70034 */ 	sw	$s7,0x34($sp)
/*  f05c1bc:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f05c1c0:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f05c1c4:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f05c1c8:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f05c1cc:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f05c1d0:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f05c1d4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05c1d8:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05c1dc:	90440003 */ 	lbu	$a0,0x3($v0)
/*  f05c1e0:	00009025 */ 	or	$s2,$zero,$zero
/*  f05c1e4:	0fc133a7 */ 	jal	squadronGetChrIds
/*  f05c1e8:	afa20044 */ 	sw	$v0,0x44($sp)
/*  f05c1ec:	10400022 */ 	beqz	$v0,.L0f05c278
/*  f05c1f0:	00408825 */ 	or	$s1,$v0,$zero
/*  f05c1f4:	84580000 */ 	lh	$t8,0x0($v0)
/*  f05c1f8:	2413fffe */ 	addiu	$s3,$zero,-2
/*  f05c1fc:	24170020 */ 	addiu	$s7,$zero,0x20
/*  f05c200:	1278001d */ 	beq	$s3,$t8,.L0f05c278
/*  f05c204:	2416001e */ 	addiu	$s6,$zero,0x1e
/*  f05c208:	84440000 */ 	lh	$a0,0x0($v0)
/*  f05c20c:	2415001f */ 	addiu	$s5,$zero,0x1f
/*  f05c210:	24140005 */ 	addiu	$s4,$zero,0x5
.L0f05c214:
/*  f05c214:	0fc0a1dd */ 	jal	chrFindByLiteralId
/*  f05c218:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05c21c:	10400012 */ 	beqz	$v0,.L0f05c268
/*  f05c220:	00408025 */ 	or	$s0,$v0,$zero
/*  f05c224:	8c59001c */ 	lw	$t9,0x1c($v0)
/*  f05c228:	53200010 */ 	beqzl	$t9,.L0f05c26c
/*  f05c22c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05c230:	0fc0e6a5 */ 	jal	chrIsDead
/*  f05c234:	00402025 */ 	or	$a0,$v0,$zero
/*  f05c238:	5440000c */ 	bnezl	$v0,.L0f05c26c
/*  f05c23c:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05c240:	82020007 */ 	lb	$v0,0x7($s0)
/*  f05c244:	52820009 */ 	beql	$s4,$v0,.L0f05c26c
/*  f05c248:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05c24c:	52a20007 */ 	beql	$s5,$v0,.L0f05c26c
/*  f05c250:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05c254:	52c20005 */ 	beql	$s6,$v0,.L0f05c26c
/*  f05c258:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05c25c:	52e20003 */ 	beql	$s7,$v0,.L0f05c26c
/*  f05c260:	86240002 */ 	lh	$a0,0x2($s1)
/*  f05c264:	26520001 */ 	addiu	$s2,$s2,0x1
.L0f05c268:
/*  f05c268:	86240002 */ 	lh	$a0,0x2($s1)
.L0f05c26c:
/*  f05c26c:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f05c270:	1664ffe8 */ 	bne	$s3,$a0,.L0f05c214
/*  f05c274:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05c278:
/*  f05c278:	8fa20044 */ 	lw	$v0,0x44($sp)
/*  f05c27c:	90480002 */ 	lbu	$t0,0x2($v0)
/*  f05c280:	0112082a */ 	slt	$at,$t0,$s2
/*  f05c284:	50200008 */ 	beqzl	$at,.L0f05c2a8
/*  f05c288:	8fc90438 */ 	lw	$t1,0x438($s8)
/*  f05c28c:	8fc40434 */ 	lw	$a0,0x434($s8)
/*  f05c290:	8fc50438 */ 	lw	$a1,0x438($s8)
/*  f05c294:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05c298:	90460004 */ 	lbu	$a2,0x4($v0)
/*  f05c29c:	10000004 */ 	beqz	$zero,.L0f05c2b0
/*  f05c2a0:	afc20438 */ 	sw	$v0,0x438($s8)
/*  f05c2a4:	8fc90438 */ 	lw	$t1,0x438($s8)
.L0f05c2a8:
/*  f05c2a8:	252a0005 */ 	addiu	$t2,$t1,0x5
/*  f05c2ac:	afca0438 */ 	sw	$t2,0x438($s8)
.L0f05c2b0:
/*  f05c2b0:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f05c2b4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05c2b8:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f05c2bc:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f05c2c0:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f05c2c4:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f05c2c8:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f05c2cc:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f05c2d0:	8fb70034 */ 	lw	$s7,0x34($sp)
/*  f05c2d4:	8fbe0038 */ 	lw	$s8,0x38($sp)
/*  f05c2d8:	27bd0048 */ 	addiu	$sp,$sp,0x48
/*  f05c2dc:	03e00008 */ 	jr	$ra
/*  f05c2e0:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0165
 */
bool aiIfChrInjured(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && (chr->chrflags & CHRCFLAG_INJURED)) {
		chr->chrflags &= ~CHRCFLAG_INJURED;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0166
 */
GLOBAL_ASM(
glabel aiIfAction
/*  f05c384:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05c388:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05c38c:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f05c390:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f05c394:	8c6f0424 */ 	lw	$t7,0x424($v1)
/*  f05c398:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f05c39c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05c3a0:	00851021 */ 	addu	$v0,$a0,$a1
/*  f05c3a4:	904e0002 */ 	lbu	$t6,0x2($v0)
/*  f05c3a8:	91f802a0 */ 	lbu	$t8,0x2a0($t7)
/*  f05c3ac:	24b90004 */ 	addiu	$t9,$a1,0x4
/*  f05c3b0:	55d80008 */ 	bnel	$t6,$t8,.L0f05c3d4
/*  f05c3b4:	ac790438 */ 	sw	$t9,0x438($v1)
/*  f05c3b8:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05c3bc:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f05c3c0:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05c3c4:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05c3c8:	10000002 */ 	beqz	$zero,.L0f05c3d4
/*  f05c3cc:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f05c3d0:	ac790438 */ 	sw	$t9,0x438($v1)
.L0f05c3d4:
/*  f05c3d4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05c3d8:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f05c3dc:	00001025 */ 	or	$v0,$zero,$zero
/*  f05c3e0:	03e00008 */ 	jr	$ra
/*  f05c3e4:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to different temporary registers
//bool aiIfAction(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//
//	if (g_Vars.chrdata->myaction == cmd[2]) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//	} else {
//		g_Vars.aioffset += 4;
//	}
//
//	return false;
//}

/**
 * @cmd 0167
 */
bool aiHovercopterFireRocket(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	heliFireRocket(g_Vars.hovdata, cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0169
 */
GLOBAL_ASM(
glabel aiIfNaturalAnim
/*  f05c434:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05c438:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05c43c:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f05c440:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f05c444:	8c6f0424 */ 	lw	$t7,0x424($v1)
/*  f05c448:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f05c44c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05c450:	00851021 */ 	addu	$v0,$a0,$a1
/*  f05c454:	904e0002 */ 	lbu	$t6,0x2($v0)
/*  f05c458:	91f802e3 */ 	lbu	$t8,0x2e3($t7)
/*  f05c45c:	24b90004 */ 	addiu	$t9,$a1,0x4
/*  f05c460:	55d80008 */ 	bnel	$t6,$t8,.L0f05c484
/*  f05c464:	ac790438 */ 	sw	$t9,0x438($v1)
/*  f05c468:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05c46c:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f05c470:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05c474:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05c478:	10000002 */ 	beqz	$zero,.L0f05c484
/*  f05c47c:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f05c480:	ac790438 */ 	sw	$t9,0x438($v1)
.L0f05c484:
/*  f05c484:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05c488:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f05c48c:	00001025 */ 	or	$v0,$zero,$zero
/*  f05c490:	03e00008 */ 	jr	$ra
/*  f05c494:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to different temporary registers
//bool aiIfNaturalAnim(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//
//	if (g_Vars.chrdata->naturalanim == cmd[2]) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//	} else {
//		g_Vars.aioffset += 4;
//	}
//
//	return false;
//}

/**
 * @cmd 016a
 */
bool aiIfY(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = NULL;
	f32 cutoff_y = ((cmd[4] | (cmd[3] << 8)) << 16) >> 16;

	if (cmd[2] == CHR_TARGET && g_Vars.hovdata) {
		struct heliobj *heli = objGetHeli(&g_Vars.hovdata->base);

		if (heli) {
			struct prop *target = heliGetTargetProp(heli);

			if (target && (target->type == PROPTYPE_CHR || target->type == PROPTYPE_PLAYER)) {
				chr = target->chr;
			}
		}
	} else {
		chr = chrFindById(g_Vars.chrdata, cmd[2]);
	}

	if (chr && chr->prop && (
				(chr->prop->pos.y < cutoff_y && cmd[5] == 0) ||
				(chr->prop->pos.y > cutoff_y && cmd[5] == 1))) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;
	}

	return false;
}

/**
 * @cmd 016c
 */
bool aiNoOp016c(void)
{
	g_Vars.aioffset += 2;
	return false;
}

/**
 * @cmd 016d
 */
bool aiChrAdjustMotionBlur(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		if (cmd[4] == 0) {
			chr->blurdrugamount -= cmd[3];
		} else {
			chr->blurdrugamount += cmd[3];
		}
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 016e
 */
GLOBAL_ASM(
glabel ai016e
/*  f05c6b8:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f05c6bc:	3c188007 */ 	lui	$t8,%hi(var80069780)
/*  f05c6c0:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05c6c4:	27189780 */ 	addiu	$t8,$t8,%lo(var80069780)
/*  f05c6c8:	8f010000 */ 	lw	$at,0x0($t8)
/*  f05c6cc:	27a60030 */ 	addiu	$a2,$sp,0x30
/*  f05c6d0:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f05c6d4:	acc10000 */ 	sw	$at,0x0($a2)
/*  f05c6d8:	8f090004 */ 	lw	$t1,0x4($t8)
/*  f05c6dc:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f05c6e0:	8c4e0434 */ 	lw	$t6,0x434($v0)
/*  f05c6e4:	acc90004 */ 	sw	$t1,0x4($a2)
/*  f05c6e8:	8c4f0438 */ 	lw	$t7,0x438($v0)
/*  f05c6ec:	8f010008 */ 	lw	$at,0x8($t8)
/*  f05c6f0:	8c440424 */ 	lw	$a0,0x424($v0)
/*  f05c6f4:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05c6f8:	acc10008 */ 	sw	$at,0x8($a2)
/*  f05c6fc:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f05c700:	0fc126d1 */ 	jal	chrFindById
/*  f05c704:	afa3003c */ 	sw	$v1,0x3c($sp)
/*  f05c708:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f05c70c:	27a60030 */ 	addiu	$a2,$sp,0x30
/*  f05c710:	10400032 */ 	beqz	$v0,.L0f05c7dc
/*  f05c714:	00402025 */ 	or	$a0,$v0,$zero
/*  f05c718:	8c4a001c */ 	lw	$t2,0x1c($v0)
/*  f05c71c:	1140002f */ 	beqz	$t2,.L0f05c7dc
/*  f05c720:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05c724:	90620004 */ 	lbu	$v0,0x4($v1)
/*  f05c728:	24010002 */ 	addiu	$at,$zero,0x2
/*  f05c72c:	3c0b8007 */ 	lui	$t3,%hi(var8006978c)
/*  f05c730:	14410010 */ 	bne	$v0,$at,.L0f05c774
/*  f05c734:	256b978c */ 	addiu	$t3,$t3,%lo(var8006978c)
/*  f05c738:	8d610000 */ 	lw	$at,0x0($t3)
/*  f05c73c:	27a70028 */ 	addiu	$a3,$sp,0x28
/*  f05c740:	ace10000 */ 	sw	$at,0x0($a3)
/*  f05c744:	906e0003 */ 	lbu	$t6,0x3($v1)
/*  f05c748:	3c013d00 */ 	lui	$at,0x3d00
/*  f05c74c:	44814000 */ 	mtc1	$at,$f8
/*  f05c750:	448e2000 */ 	mtc1	$t6,$f4
/*  f05c754:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05c758:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f05c75c:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f05c760:	44055000 */ 	mfc1	$a1,$f10
/*  f05c764:	0fc0d049 */ 	jal	func0f034124
/*  f05c768:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05c76c:	1000001b */ 	beqz	$zero,.L0f05c7dc
/*  f05c770:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05c774:
/*  f05c774:	5440000f */ 	bnezl	$v0,.L0f05c7b4
/*  f05c778:	90680003 */ 	lbu	$t0,0x3($v1)
/*  f05c77c:	906f0003 */ 	lbu	$t7,0x3($v1)
/*  f05c780:	3c013d00 */ 	lui	$at,0x3d00
/*  f05c784:	44812000 */ 	mtc1	$at,$f4
/*  f05c788:	448f8000 */ 	mtc1	$t7,$f16
/*  f05c78c:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05c790:	00003825 */ 	or	$a3,$zero,$zero
/*  f05c794:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f05c798:	46049182 */ 	mul.s	$f6,$f18,$f4
/*  f05c79c:	44053000 */ 	mfc1	$a1,$f6
/*  f05c7a0:	0fc0d049 */ 	jal	func0f034124
/*  f05c7a4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05c7a8:	1000000c */ 	beqz	$zero,.L0f05c7dc
/*  f05c7ac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05c7b0:	90680003 */ 	lbu	$t0,0x3($v1)
.L0f05c7b4:
/*  f05c7b4:	3c01bd00 */ 	lui	$at,0xbd00
/*  f05c7b8:	44818000 */ 	mtc1	$at,$f16
/*  f05c7bc:	44884000 */ 	mtc1	$t0,$f8
/*  f05c7c0:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05c7c4:	00003825 */ 	or	$a3,$zero,$zero
/*  f05c7c8:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f05c7cc:	46105482 */ 	mul.s	$f18,$f10,$f16
/*  f05c7d0:	44059000 */ 	mfc1	$a1,$f18
/*  f05c7d4:	0fc0d049 */ 	jal	func0f034124
/*  f05c7d8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05c7dc:
/*  f05c7dc:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05c7e0:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05c7e4:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f05c7e8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05c7ec:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f05c7f0:	27380005 */ 	addiu	$t8,$t9,0x5
/*  f05c7f4:	ac780438 */ 	sw	$t8,0x438($v1)
/*  f05c7f8:	03e00008 */ 	jr	$ra
/*  f05c7fc:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 016f
 */
bool aiIfChrHasGun(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->unk020 && chr->gunprop == NULL) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0170
 */
bool ai0170(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct weaponobj *weapon = g_Vars.chrdata->gunprop->weapon;

	if (cmd[2] == 0 || ((weapon->hidden & OBJHIDDENFLAG_00000080) == 0 && cmd[2] == 1)) {
		if (cmd[2] == 0) {
			func0f03ab74(g_Vars.chrdata, g_Vars.chrdata->gunprop, 1);
		}

		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0171
 */
bool aiIfDistanceToGunLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) * 10.0f;
	f32 xdiff = 0;
	f32 ydiff = 0;
	f32 zdiff = 0;

	if (g_Vars.chrdata->gunprop) {
		xdiff = g_Vars.chrdata->prop->pos.x - g_Vars.chrdata->gunprop->pos.x;
		ydiff = g_Vars.chrdata->prop->pos.y - g_Vars.chrdata->gunprop->pos.y;
		zdiff = g_Vars.chrdata->prop->pos.z - g_Vars.chrdata->gunprop->pos.z;
	}

	if (ydiff < 200 && ydiff > -200 &&
			xdiff < distance && xdiff > -distance &&
			zdiff < distance && zdiff > -distance) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0172
 */
GLOBAL_ASM(
glabel ai0172
/*  f05ca78:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f05ca7c:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f05ca80:	3c11800a */ 	lui	$s1,%hi(g_Vars)
/*  f05ca84:	26319fc0 */ 	addiu	$s1,$s1,%lo(g_Vars)
/*  f05ca88:	8e2e0434 */ 	lw	$t6,0x434($s1)
/*  f05ca8c:	8e2f0438 */ 	lw	$t7,0x438($s1)
/*  f05ca90:	8e220424 */ 	lw	$v0,0x424($s1)
/*  f05ca94:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05ca98:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f05ca9c:	afb80024 */ 	sw	$t8,0x24($sp)
/*  f05caa0:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f05caa4:	8c500300 */ 	lw	$s0,0x300($v0)
/*  f05caa8:	ac400300 */ 	sw	$zero,0x300($v0)
/*  f05caac:	52000015 */ 	beqzl	$s0,.L0f05cb04
/*  f05cab0:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f05cab4:	8e190004 */ 	lw	$t9,0x4($s0)
/*  f05cab8:	53200012 */ 	beqzl	$t9,.L0f05cb04
/*  f05cabc:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f05cac0:	8e080018 */ 	lw	$t0,0x18($s0)
/*  f05cac4:	5500000f */ 	bnezl	$t0,.L0f05cb04
/*  f05cac8:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f05cacc:	92090000 */ 	lbu	$t1,0x0($s0)
/*  f05cad0:	24010004 */ 	addiu	$at,$zero,0x4
/*  f05cad4:	5521000b */ 	bnel	$t1,$at,.L0f05cb04
/*  f05cad8:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f05cadc:	0fc19711 */ 	jal	func0f065c44
/*  f05cae0:	02002025 */ 	or	$a0,$s0,$zero
/*  f05cae4:	0fc18171 */ 	jal	func0f0605c4
/*  f05cae8:	02002025 */ 	or	$a0,$s0,$zero
/*  f05caec:	0fc180c0 */ 	jal	func0f060300
/*  f05caf0:	02002025 */ 	or	$a0,$s0,$zero
/*  f05caf4:	8e040004 */ 	lw	$a0,0x4($s0)
/*  f05caf8:	0fc22b95 */ 	jal	func0f08ae54
/*  f05cafc:	8e250424 */ 	lw	$a1,0x424($s1)
/*  f05cb00:	8faa0024 */ 	lw	$t2,0x24($sp)
.L0f05cb04:
/*  f05cb04:	8e240434 */ 	lw	$a0,0x434($s1)
/*  f05cb08:	8e250438 */ 	lw	$a1,0x438($s1)
/*  f05cb0c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05cb10:	91460003 */ 	lbu	$a2,0x3($t2)
/*  f05cb14:	ae220438 */ 	sw	$v0,0x438($s1)
/*  f05cb18:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05cb1c:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f05cb20:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f05cb24:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f05cb28:	03e00008 */ 	jr	$ra
/*  f05cb2c:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch because some stores/loads to SP is in the opposite order
//bool ai0172(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct prop *prop = g_Vars.chrdata->gunprop;
//	g_Vars.chrdata->gunprop = NULL;
//
//	if (prop && prop->unk04 && prop->unk18 == 0 && prop->type == PROPTYPE_WEAPON) {
//		func0f065c44(prop);
//		func0f0605c4(prop);
//		func0f060300(prop);
//		func0f08ae54(prop->unk04, g_Vars.chrdata);
//	}
//
//	g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//
//	return false;
//}

/**
 * @cmd 0173
 */
bool aiChrCopyProperties(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->unk020) {
		g_Vars.chrdata->hearingscale = chr->hearingscale;
		g_Vars.chrdata->visionrange = chr->visionrange;
		g_Vars.chrdata->padpreset1 = chr->padpreset1;
		g_Vars.chrdata->chrpreset1 = chr->chrpreset1;
		g_Vars.chrdata->flags = chr->flags;
		g_Vars.chrdata->flags2 = chr->flags2;
		g_Vars.chrdata->team = chr->team;
		g_Vars.chrdata->squadron = chr->squadron;

		// @bug? Copying from self to self
		g_Vars.chrdata->accuracyrating = g_Vars.chrdata->accuracyrating;
		g_Vars.chrdata->speedrating = g_Vars.chrdata->speedrating;

		g_Vars.chrdata->naturalanim = chr->naturalanim;
		g_Vars.chrdata->myspecial = chr->myspecial;
		g_Vars.chrdata->yvisang = chr->yvisang;
		g_Vars.chrdata->teamscandist = chr->teamscandist;

		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0177
 */
bool aiPlayerAutoWalk(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 pad_id = cmd[4] | (cmd[3] << 8);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
		currentPlayerAutoWalk(pad_id, cmd[5], cmd[6], cmd[7], cmd[8]);
		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 9;

	return false;
}

/**
 * @cmd 0178
 */
bool aiIfPlayerAutoWalkFinished(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	bool pass = false;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);

		if (g_Vars.unk0002ac == 7) {
			pass = true;
		}

		setCurrentPlayerNum(prevplayernum);
	}

	if (pass) {
		g_Vars.aioffset += 4;
	} else {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	}

	return false;
}

/**
 * @cmd 0181
 */
bool aiIfPlayerLookingAtObject(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[3]);
	bool pass = false;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);

		if (g_Vars.currentplayer->lookingatprop == obj->prop) {
			pass = true;
		}

		setCurrentPlayerNum(prevplayernum);
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 0182
 */
bool aiPunchOrKick(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.chrdata && chrTryPunchOrKick(g_Vars.chrdata, cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0183
 */
bool aiIfTargetIsPlayer(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct prop *target = chrGetTargetProp(g_Vars.chrdata);

	if (target->type == PROPTYPE_EYESPY || target->type == PROPTYPE_PLAYER) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 0184
 */
bool ai0184(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	func0f03a3ec(g_Vars.chrdata, 512, 0, cmd[2], cmd[3]);
	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 0186
 */
bool aiIfSoundTimer(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s32 value = cmd[3] | (cmd[2] << 8);

	if ((g_Vars.chrdata->soundtimer > value && cmd[4] == 0) ||
			(g_Vars.chrdata->soundtimer < value && cmd[4] == 1)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 0187
 */
GLOBAL_ASM(
glabel ai0187
/*  f05d0fc:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f05d100:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05d104:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05d108:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05d10c:	8e020438 */ 	lw	$v0,0x438($s0)
/*  f05d110:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05d114:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05d118:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05d11c:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f05d120:	afaf0024 */ 	sw	$t7,0x24($sp)
/*  f05d124:	8498017e */ 	lh	$t8,0x17e($a0)
/*  f05d128:	a7b80022 */ 	sh	$t8,0x22($sp)
/*  f05d12c:	9499032e */ 	lhu	$t9,0x32e($a0)
/*  f05d130:	00194382 */ 	srl	$t0,$t9,0xe
/*  f05d134:	00084880 */ 	sll	$t1,$t0,0x2
/*  f05d138:	02095021 */ 	addu	$t2,$s0,$t1
/*  f05d13c:	8d4b0064 */ 	lw	$t3,0x64($t2)
/*  f05d140:	24490003 */ 	addiu	$t1,$v0,0x3
/*  f05d144:	8d630480 */ 	lw	$v1,0x480($t3)
/*  f05d148:	50600019 */ 	beqzl	$v1,.L0f05d1b0
/*  f05d14c:	ae090438 */ 	sw	$t1,0x438($s0)
/*  f05d150:	8c6c0000 */ 	lw	$t4,0x0($v1)
/*  f05d154:	8d820004 */ 	lw	$v0,0x4($t4)
/*  f05d158:	0fc12705 */ 	jal	propGetIndexByChrId
/*  f05d15c:	84450000 */ 	lh	$a1,0x0($v0)
/*  f05d160:	8e0d0424 */ 	lw	$t5,0x424($s0)
/*  f05d164:	a5a2017e */ 	sh	$v0,0x17e($t5)
/*  f05d168:	0fc0e5e3 */ 	jal	func0f03978c
/*  f05d16c:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05d170:	10400007 */ 	beqz	$v0,.L0f05d190
/*  f05d174:	8fae0024 */ 	lw	$t6,0x24($sp)
/*  f05d178:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f05d17c:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f05d180:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05d184:	91c60002 */ 	lbu	$a2,0x2($t6)
/*  f05d188:	10000009 */ 	beqz	$zero,.L0f05d1b0
/*  f05d18c:	ae020438 */ 	sw	$v0,0x438($s0)
.L0f05d190:
/*  f05d190:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05d194:	87b90022 */ 	lh	$t9,0x22($sp)
/*  f05d198:	8e080424 */ 	lw	$t0,0x424($s0)
/*  f05d19c:	25f80003 */ 	addiu	$t8,$t7,0x3
/*  f05d1a0:	ae180438 */ 	sw	$t8,0x438($s0)
/*  f05d1a4:	10000002 */ 	beqz	$zero,.L0f05d1b0
/*  f05d1a8:	a519017e */ 	sh	$t9,0x17e($t0)
/*  f05d1ac:	ae090438 */ 	sw	$t1,0x438($s0)
.L0f05d1b0:
/*  f05d1b0:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05d1b4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05d1b8:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f05d1bc:	03e00008 */ 	jr	$ra
/*  f05d1c0:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 0188
 */
bool aiIfLiftStationary(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);
	bool pass = false;

	if (obj && obj->prop && obj->type == OBJTYPE_LIFT) {
		struct liftobj *lift = (struct liftobj *)obj;

		if ((obj->flags & OBJECTFLAG0_DEACTIVATED) || !lift->unk74) {
			pass = true;
		}
	}

	if (pass) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0189
 */
bool ai0189(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->type == OBJTYPE_LIFT) {
		func0f0710ec(obj, cmd[3]);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 018a
 */
GLOBAL_ASM(
glabel ai018a
/*  f05d30c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05d310:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05d314:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f05d318:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05d31c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f05d320:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05d324:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f05d328:	90e40002 */ 	lbu	$a0,0x2($a3)
/*  f05d32c:	0fc2556c */ 	jal	objFindByTagId
/*  f05d330:	afa7001c */ 	sw	$a3,0x1c($sp)
/*  f05d334:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05d338:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05d33c:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*  f05d340:	10400013 */ 	beqz	$v0,.L0f05d390
/*  f05d344:	00002025 */ 	or	$a0,$zero,$zero
/*  f05d348:	8c580014 */ 	lw	$t8,0x14($v0)
/*  f05d34c:	13000010 */ 	beqz	$t8,.L0f05d390
/*  f05d350:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d354:	90590003 */ 	lbu	$t9,0x3($v0)
/*  f05d358:	24010030 */ 	addiu	$at,$zero,0x30
/*  f05d35c:	1721000c */ 	bne	$t9,$at,.L0f05d390
/*  f05d360:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d364:	90e80003 */ 	lbu	$t0,0x3($a3)
/*  f05d368:	80490085 */ 	lb	$t1,0x85($v0)
/*  f05d36c:	15090008 */ 	bne	$t0,$t1,.L0f05d390
/*  f05d370:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d374:	44802000 */ 	mtc1	$zero,$f4
/*  f05d378:	c4460074 */ 	lwc1	$f6,0x74($v0)
/*  f05d37c:	46062032 */ 	c.eq.s	$f4,$f6
/*  f05d380:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d384:	45000002 */ 	bc1f	.L0f05d390
/*  f05d388:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d38c:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f05d390:
/*  f05d390:	5080000a */ 	beqzl	$a0,.L0f05d3bc
/*  f05d394:	8c6a0438 */ 	lw	$t2,0x438($v1)
/*  f05d398:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f05d39c:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f05d3a0:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05d3a4:	90e60004 */ 	lbu	$a2,0x4($a3)
/*  f05d3a8:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05d3ac:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05d3b0:	10000004 */ 	beqz	$zero,.L0f05d3c4
/*  f05d3b4:	ac620438 */ 	sw	$v0,0x438($v1)
/*  f05d3b8:	8c6a0438 */ 	lw	$t2,0x438($v1)
.L0f05d3bc:
/*  f05d3bc:	254b0005 */ 	addiu	$t3,$t2,0x5
/*  f05d3c0:	ac6b0438 */ 	sw	$t3,0x438($v1)
.L0f05d3c4:
/*  f05d3c4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05d3c8:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f05d3cc:	00001025 */ 	or	$v0,$zero,$zero
/*  f05d3d0:	03e00008 */ 	jr	$ra
/*  f05d3d4:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 018b
 */
bool aiConfigureRain(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	rainConfigure(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01b6
 */
bool aiConfigureSnow(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	snowConfigure(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 018c
 */
bool aiChrToggleProp(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		func0f04cf90(chr, cmd[3]);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 018d
 */
bool aiActivateLift(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[3]);

	if (obj && obj->prop) {
		liftActivate(obj->prop, cmd[2]);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 018e
 */
bool aiMiniSkedarTryPounce(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 thing = cmd[4] | (cmd[3] << 8);

	if (skedarTryPounce(g_Vars.chrdata, g_Vars.chrdata->pouncebits, cmd[2], thing, cmd[5])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[6]);
	} else {
		g_Vars.aioffset += 7;

	}

	return false;
}

/**
 * @cmd 018f
 */
GLOBAL_ASM(
glabel aiIfObjectDistanceToPadLessThan
/*  f05d5e8:	27bdff68 */ 	addiu	$sp,$sp,-152
/*  f05d5ec:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05d5f0:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05d5f4:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05d5f8:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05d5fc:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05d600:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05d604:	3c014120 */ 	lui	$at,0x4120
/*  f05d608:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05d60c:	90780003 */ 	lbu	$t8,0x3($v1)
/*  f05d610:	90680004 */ 	lbu	$t0,0x4($v1)
/*  f05d614:	44814000 */ 	mtc1	$at,$f8
/*  f05d618:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f05d61c:	03284825 */ 	or	$t1,$t9,$t0
/*  f05d620:	44892000 */ 	mtc1	$t1,$f4
/*  f05d624:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d628:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f05d62c:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f05d630:	e7aa0090 */ 	swc1	$f10,0x90($sp)
/*  f05d634:	906a0005 */ 	lbu	$t2,0x5($v1)
/*  f05d638:	906c0006 */ 	lbu	$t4,0x6($v1)
/*  f05d63c:	000a5a00 */ 	sll	$t3,$t2,0x8
/*  f05d640:	016c6825 */ 	or	$t5,$t3,$t4
/*  f05d644:	31aeffff */ 	andi	$t6,$t5,0xffff
/*  f05d648:	afae0080 */ 	sw	$t6,0x80($sp)
/*  f05d64c:	90640002 */ 	lbu	$a0,0x2($v1)
/*  f05d650:	0fc2556c */ 	jal	objFindByTagId
/*  f05d654:	afa30094 */ 	sw	$v1,0x94($sp)
/*  f05d658:	8fa30094 */ 	lw	$v1,0x94($sp)
/*  f05d65c:	afa2007c */ 	sw	$v0,0x7c($sp)
/*  f05d660:	1040003e */ 	beqz	$v0,.L0f05d75c
/*  f05d664:	00003825 */ 	or	$a3,$zero,$zero
/*  f05d668:	8c4f0014 */ 	lw	$t7,0x14($v0)
/*  f05d66c:	8fa50080 */ 	lw	$a1,0x80($sp)
/*  f05d670:	11e0003a */ 	beqz	$t7,.L0f05d75c
/*  f05d674:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d678:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05d67c:	afa30094 */ 	sw	$v1,0x94($sp)
/*  f05d680:	0fc1258b */ 	jal	chrResolvePadId
/*  f05d684:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f05d688:	8fa30094 */ 	lw	$v1,0x94($sp)
/*  f05d68c:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f05d690:	04400032 */ 	bltz	$v0,.L0f05d75c
/*  f05d694:	00402025 */ 	or	$a0,$v0,$zero
/*  f05d698:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f05d69c:	27a60028 */ 	addiu	$a2,$sp,0x28
/*  f05d6a0:	afa30094 */ 	sw	$v1,0x94($sp)
/*  f05d6a4:	0fc456ac */ 	jal	padUnpack
/*  f05d6a8:	afa70024 */ 	sw	$a3,0x24($sp)
/*  f05d6ac:	8fb8007c */ 	lw	$t8,0x7c($sp)
/*  f05d6b0:	c7b20028 */ 	lwc1	$f18,0x28($sp)
/*  f05d6b4:	c7a6002c */ 	lwc1	$f6,0x2c($sp)
/*  f05d6b8:	8f020014 */ 	lw	$v0,0x14($t8)
/*  f05d6bc:	3c014348 */ 	lui	$at,0x4348
/*  f05d6c0:	c7aa0030 */ 	lwc1	$f10,0x30($sp)
/*  f05d6c4:	c4500008 */ 	lwc1	$f16,0x8($v0)
/*  f05d6c8:	c444000c */ 	lwc1	$f4,0xc($v0)
/*  f05d6cc:	c4480010 */ 	lwc1	$f8,0x10($v0)
/*  f05d6d0:	46128001 */ 	sub.s	$f0,$f16,$f18
/*  f05d6d4:	44818000 */ 	mtc1	$at,$f16
/*  f05d6d8:	8fa30094 */ 	lw	$v1,0x94($sp)
/*  f05d6dc:	46062081 */ 	sub.s	$f2,$f4,$f6
/*  f05d6e0:	8fa70024 */ 	lw	$a3,0x24($sp)
/*  f05d6e4:	3c01c348 */ 	lui	$at,0xc348
/*  f05d6e8:	460a4301 */ 	sub.s	$f12,$f8,$f10
/*  f05d6ec:	4610103c */ 	c.lt.s	$f2,$f16
/*  f05d6f0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d6f4:	45000019 */ 	bc1f	.L0f05d75c
/*  f05d6f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d6fc:	44819000 */ 	mtc1	$at,$f18
/*  f05d700:	c7ae0090 */ 	lwc1	$f14,0x90($sp)
/*  f05d704:	4602903c */ 	c.lt.s	$f18,$f2
/*  f05d708:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d70c:	45000013 */ 	bc1f	.L0f05d75c
/*  f05d710:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d714:	460e003c */ 	c.lt.s	$f0,$f14
/*  f05d718:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d71c:	4500000f */ 	bc1f	.L0f05d75c
/*  f05d720:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d724:	46007087 */ 	neg.s	$f2,$f14
/*  f05d728:	4600103c */ 	c.lt.s	$f2,$f0
/*  f05d72c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d730:	4500000a */ 	bc1f	.L0f05d75c
/*  f05d734:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d738:	460e603c */ 	c.lt.s	$f12,$f14
/*  f05d73c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d740:	45000006 */ 	bc1f	.L0f05d75c
/*  f05d744:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d748:	460c103c */ 	c.lt.s	$f2,$f12
/*  f05d74c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d750:	45000002 */ 	bc1f	.L0f05d75c
/*  f05d754:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05d758:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f05d75c:
/*  f05d75c:	50e00008 */ 	beqzl	$a3,.L0f05d780
/*  f05d760:	8e190438 */ 	lw	$t9,0x438($s0)
/*  f05d764:	8e040434 */ 	lw	$a0,0x434($s0)
/*  f05d768:	8e050438 */ 	lw	$a1,0x438($s0)
/*  f05d76c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05d770:	90660007 */ 	lbu	$a2,0x7($v1)
/*  f05d774:	10000004 */ 	beqz	$zero,.L0f05d788
/*  f05d778:	ae020438 */ 	sw	$v0,0x438($s0)
/*  f05d77c:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05d780:
/*  f05d780:	27280008 */ 	addiu	$t0,$t9,0x8
/*  f05d784:	ae080438 */ 	sw	$t0,0x438($s0)
.L0f05d788:
/*  f05d788:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05d78c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05d790:	27bd0098 */ 	addiu	$sp,$sp,0x98
/*  f05d794:	03e00008 */ 	jr	$ra
/*  f05d798:	00001025 */ 	or	$v0,$zero,$zero
);

// Mismatch due to different registers
//bool aiIfObjectDistanceToPadLessThan(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	f32 distance = (f32)(cmd[4] | (cmd[3] << 8)) * 10;
//	f32 xdiff;
//	f32 ydiff;
//	f32 zdiff;
//	s32 pad_id = (cmd[6] | (cmd[5] << 8)) & 0xffff;
//	struct defaultobj *obj = objFindByTagId(cmd[2]);
//	struct pad pad;
//	bool pass = false;
//
//	if (obj && obj->prop) {
//		pad_id = chrResolvePadId(g_Vars.chrdata, pad_id);
//
//		if (pad_id >= 0) {
//			padUnpack(pad_id, 2, &pad);
//			xdiff = obj->prop->pos.x - pad.pos.x;
//			ydiff = obj->prop->pos.y - pad.pos.y;
//			zdiff = obj->prop->pos.z - pad.pos.z;
//
//			if (ydiff < 200 && ydiff > -200 &&
//					xdiff < distance && xdiff > -distance &&
//					zdiff < distance && zdiff > -distance) {
//				pass = true;
//			}
//		}
//	}
//
//	if (pass) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[7]);
//	} else {
//		g_Vars.aioffset += 8;
//	}
//
//	return false;
//}

/**
 * @cmd 0190
 */
bool aiEepromSet(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	eepromSet(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0191
 */
bool aiEepromUnset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	eepromUnset(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 0192
 */
bool aiIfEepromSet(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (eepromGet(cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 0193
 */
bool aiIfEepromUnset(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (!eepromGet(cmd[2])) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 019e
 */
bool aiIfObjHealthLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s32 damage = cmd[4] | (cmd[3] << 8);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	bool condition_passes = false;

	if (obj && obj->prop && obj->damage < damage) {
		condition_passes = true;
	}

	if (condition_passes) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[5]);
	} else {
		g_Vars.aioffset += 6;
	}

	return false;
}

/**
 * @cmd 019f
 */
bool aiSetObjHealth(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s32 damage = cmd[4] | (cmd[3] << 8);
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		obj->damage = damage;
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 01a0
 */
bool aiSetChrSpecialDeathAnimation(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->specialdie = cmd[3];
	}

	g_Vars.aioffset += 4;

	return 0;
}

/**
 * @cmd 01a1
 */
bool aiSetRoomToSearch(void)
{
	struct chrdata *target = chrFindById(g_Vars.chrdata, CHR_TARGET);

	if (target && target->prop) {
		g_Vars.chrdata->roomtosearch = target->prop->room;
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 01a2
 */
bool aiSayCiStaffQuip(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 quip;

	if (cmd[2] == 0) {
		quip = ciquiptable_bank0[g_Vars.chrdata->morale][random() % 3];
		audioPlayFromProp(cmd[3], quip, 0, g_Vars.chrdata->prop, 9, 0);
	}

	if (cmd[2] == 1) {
		quip = ciquiptable_bank1[g_Vars.chrdata->morale][random() % 3];
		audioPlayFromProp(cmd[3], quip, 0, g_Vars.chrdata->prop, 9, 0);
	}

	if (cmd[2] == 2) {
		quip = ciquiptable_bank2[g_Vars.chrdata->morale][random() % 3];
		audioPlayFromProp(cmd[3], quip, 0, g_Vars.chrdata->prop, 9, 0);
	}

	if (cmd[2] == 3) {
		quip = ciquiptable_bank3[g_Vars.chrdata->morale];
		audioPlayFromProp(cmd[3], quip, 0, g_Vars.chrdata->prop, 9, 0);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01a3
 */
GLOBAL_ASM(
glabel ai01a3
/*  f05dcc4:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f05dcc8:	3c188007 */ 	lui	$t8,%hi(special_animations)
/*  f05dccc:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f05dcd0:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f05dcd4:	27189840 */ 	addiu	$t8,$t8,%lo(special_animations)
/*  f05dcd8:	8f010000 */ 	lw	$at,0x0($t8)
/*  f05dcdc:	27a90044 */ 	addiu	$t1,$sp,0x44
/*  f05dce0:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05dce4:	ad210000 */ 	sw	$at,0x0($t1)
/*  f05dce8:	8f0b0004 */ 	lw	$t3,0x4($t8)
/*  f05dcec:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05dcf0:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05dcf4:	ad2b0004 */ 	sw	$t3,0x4($t1)
/*  f05dcf8:	8f010008 */ 	lw	$at,0x8($t8)
/*  f05dcfc:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05dd00:	ad210008 */ 	sw	$at,0x8($t1)
/*  f05dd04:	8f0b000c */ 	lw	$t3,0xc($t8)
/*  f05dd08:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05dd0c:	ad2b000c */ 	sw	$t3,0xc($t1)
/*  f05dd10:	8f010010 */ 	lw	$at,0x10($t8)
/*  f05dd14:	ad210010 */ 	sw	$at,0x10($t1)
/*  f05dd18:	8f0b0014 */ 	lw	$t3,0x14($t8)
/*  f05dd1c:	ad2b0014 */ 	sw	$t3,0x14($t1)
/*  f05dd20:	8f010018 */ 	lw	$at,0x18($t8)
/*  f05dd24:	ad210018 */ 	sw	$at,0x18($t1)
/*  f05dd28:	9701001c */ 	lhu	$at,0x1c($t8)
/*  f05dd2c:	a521001c */ 	sh	$at,0x1c($t1)
/*  f05dd30:	90480002 */ 	lbu	$t0,0x2($v0)
/*  f05dd34:	240100ff */ 	addiu	$at,$zero,0xff
/*  f05dd38:	15010014 */ 	bne	$t0,$at,.L0f05dd8c
/*  f05dd3c:	01001825 */ 	or	$v1,$t0,$zero
/*  f05dd40:	0c004b70 */ 	jal	random
/*  f05dd44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05dd48:	304c0007 */ 	andi	$t4,$v0,0x7
/*  f05dd4c:	000c6840 */ 	sll	$t5,$t4,0x1
/*  f05dd50:	27a90044 */ 	addiu	$t1,$sp,0x44
/*  f05dd54:	012d7021 */ 	addu	$t6,$t1,$t5
/*  f05dd58:	3c013f00 */ 	lui	$at,0x3f00
/*  f05dd5c:	44812000 */ 	mtc1	$at,$f4
/*  f05dd60:	95c5000e */ 	lhu	$a1,0xe($t6)
/*  f05dd64:	240f000f */ 	addiu	$t7,$zero,0xf
/*  f05dd68:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f05dd6c:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05dd70:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05dd74:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05dd78:	3c07bf80 */ 	lui	$a3,0xbf80
/*  f05dd7c:	0fc0ebd1 */ 	jal	func0f03af44
/*  f05dd80:	e7a40018 */ 	swc1	$f4,0x18($sp)
/*  f05dd84:	1000004f */ 	beqz	$zero,.L0f05dec4
/*  f05dd88:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05dd8c:
/*  f05dd8c:	240100fe */ 	addiu	$at,$zero,0xfe
/*  f05dd90:	14610029 */ 	bne	$v1,$at,.L0f05de38
/*  f05dd94:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f05dd98:	0fc0a209 */ 	jal	chrGetEquippedWeaponAttachment
/*  f05dd9c:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05dda0:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f05dda4:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05dda8:	0fc0a209 */ 	jal	chrGetEquippedWeaponAttachment
/*  f05ddac:	00002825 */ 	or	$a1,$zero,$zero
/*  f05ddb0:	afa2003c */ 	sw	$v0,0x3c($sp)
/*  f05ddb4:	0fc0b849 */ 	jal	func0f02e124
/*  f05ddb8:	8fa40040 */ 	lw	$a0,0x40($sp)
/*  f05ddbc:	54400006 */ 	bnezl	$v0,.L0f05ddd8
/*  f05ddc0:	3c013f00 */ 	lui	$at,0x3f00
/*  f05ddc4:	0fc0b849 */ 	jal	func0f02e124
/*  f05ddc8:	8fa4003c */ 	lw	$a0,0x3c($sp)
/*  f05ddcc:	1040000e */ 	beqz	$v0,.L0f05de08
/*  f05ddd0:	2405029a */ 	addiu	$a1,$zero,0x29a
/*  f05ddd4:	3c013f00 */ 	lui	$at,0x3f00
.L0f05ddd8:
/*  f05ddd8:	44813000 */ 	mtc1	$at,$f6
/*  f05dddc:	240a0005 */ 	addiu	$t2,$zero,0x5
/*  f05dde0:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f05dde4:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05dde8:	24050299 */ 	addiu	$a1,$zero,0x299
/*  f05ddec:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05ddf0:	3c07bf80 */ 	lui	$a3,0xbf80
/*  f05ddf4:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05ddf8:	0fc0ebd1 */ 	jal	func0f03af44
/*  f05ddfc:	e7a60018 */ 	swc1	$f6,0x18($sp)
/*  f05de00:	10000030 */ 	beqz	$zero,.L0f05dec4
/*  f05de04:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05de08:
/*  f05de08:	3c013f00 */ 	lui	$at,0x3f00
/*  f05de0c:	44814000 */ 	mtc1	$at,$f8
/*  f05de10:	24190005 */ 	addiu	$t9,$zero,0x5
/*  f05de14:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f05de18:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05de1c:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05de20:	3c07bf80 */ 	lui	$a3,0xbf80
/*  f05de24:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05de28:	0fc0ebd1 */ 	jal	func0f03af44
/*  f05de2c:	e7a80018 */ 	swc1	$f8,0x18($sp)
/*  f05de30:	10000024 */ 	beqz	$zero,.L0f05dec4
/*  f05de34:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05de38:
/*  f05de38:	24010003 */ 	addiu	$at,$zero,0x3
/*  f05de3c:	14610014 */ 	bne	$v1,$at,.L0f05de90
/*  f05de40:	00087040 */ 	sll	$t6,$t0,0x1
/*  f05de44:	0c004b70 */ 	jal	random
/*  f05de48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05de4c:	30580001 */ 	andi	$t8,$v0,0x1
/*  f05de50:	00185840 */ 	sll	$t3,$t8,0x1
/*  f05de54:	27a90044 */ 	addiu	$t1,$sp,0x44
/*  f05de58:	012b6021 */ 	addu	$t4,$t1,$t3
/*  f05de5c:	3c013f00 */ 	lui	$at,0x3f00
/*  f05de60:	44815000 */ 	mtc1	$at,$f10
/*  f05de64:	95850006 */ 	lhu	$a1,0x6($t4)
/*  f05de68:	240d000f */ 	addiu	$t5,$zero,0xf
/*  f05de6c:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f05de70:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05de74:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05de78:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05de7c:	3c07bf80 */ 	lui	$a3,0xbf80
/*  f05de80:	0fc0ebd1 */ 	jal	func0f03af44
/*  f05de84:	e7aa0018 */ 	swc1	$f10,0x18($sp)
/*  f05de88:	1000000e */ 	beqz	$zero,.L0f05dec4
/*  f05de8c:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05de90:
/*  f05de90:	012e7821 */ 	addu	$t7,$t1,$t6
/*  f05de94:	3c013f00 */ 	lui	$at,0x3f00
/*  f05de98:	44818000 */ 	mtc1	$at,$f16
/*  f05de9c:	95e50000 */ 	lhu	$a1,0x0($t7)
/*  f05dea0:	240a000f */ 	addiu	$t2,$zero,0xf
/*  f05dea4:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f05dea8:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f05deac:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05deb0:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05deb4:	3c07bf80 */ 	lui	$a3,0xbf80
/*  f05deb8:	0fc0ebd1 */ 	jal	func0f03af44
/*  f05debc:	e7b00018 */ 	swc1	$f16,0x18($sp)
/*  f05dec0:	8e190438 */ 	lw	$t9,0x438($s0)
.L0f05dec4:
/*  f05dec4:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f05dec8:	00001025 */ 	or	$v0,$zero,$zero
/*  f05decc:	27380003 */ 	addiu	$t8,$t9,0x3
/*  f05ded0:	ae180438 */ 	sw	$t8,0x438($s0)
/*  f05ded4:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f05ded8:	03e00008 */ 	jr	$ra
/*  f05dedc:	27bd0068 */ 	addiu	$sp,$sp,0x68
);

/**
 * @cmd 01a5
 */
bool ai01a5(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f046a30(g_Vars.chrdata)) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 01a6
 */
bool aiIfTargetYDifferenceLessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct prop *prop = chrGetTargetProp(g_Vars.chrdata);
	f32 diff = prop->pos.y - g_Vars.chrdata->prop->pos.y;

	if (diff < 0) {
		diff = 0 - diff;
	}

	if (diff < (s32)cmd[2] * 10.0f) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
	} else {
		g_Vars.aioffset += 4;
	}

	return false;
}

/**
 * @cmd 01aa
 */
bool ai01aa(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 a = var7f1a9d9c[0];

	func0f0056f4(
			g_Vars.currentplayer->prop->room,
			&g_Vars.currentplayer->prop->pos,
			g_Vars.chrdata->prop->room,
			&g_Vars.chrdata->prop->pos,
			0, &a, 0);

	if (a < var7f1a9da0[0]) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 01ae
 */
bool aiClearInventory(void)
{
	u32 stackpadding[2];
	u32 prevplayernum = g_Vars.currentplayernum;
	s32 playernum;

	for (playernum = 0; playernum < (g_Vars.players[0] ? 1 : 0) + (g_Vars.players[1] ? 1 : 0) + (g_Vars.players[2] ? 1 : 0) + (g_Vars.players[3] ? 1 : 0); playernum++) {
		setCurrentPlayerNum(playernum);

		if (g_Vars.currentplayer == g_Vars.bond || g_Vars.currentplayer == g_Vars.coop) {
			func0f111600();
			g_Vars.currentplayer->unk00c4 = 0;
			func0f111d88(1);
			currentPlayerEquipWeaponInCutscene(1);
		}
	}

	setCurrentPlayerNum(prevplayernum);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01ad
 */
bool aiReleaseObject(void)
{
	releaseObj(0);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01af
 */
bool aiChrGrabObject(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[3]);
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER && obj && obj->prop) {
		u32 prevplayernum = g_Vars.currentplayernum;
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);

		if (g_Vars.currentplayer->unk01b0 == 0 && func0f0cc680() == 2 && g_Vars.currentplayer->unk00b4 == 0) {
			currentPlayerGrabProp(obj->prop);
		}

		setCurrentPlayerNum(prevplayernum);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01b1
 */
GLOBAL_ASM(
glabel ai01b1
/*  f05e39c:	27bdffa0 */ 	addiu	$sp,$sp,-96
/*  f05e3a0:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f05e3a4:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f05e3a8:	8c4e0434 */ 	lw	$t6,0x434($v0)
/*  f05e3ac:	8c4f0438 */ 	lw	$t7,0x438($v0)
/*  f05e3b0:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f05e3b4:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f05e3b8:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f05e3bc:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f05e3c0:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f05e3c4:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f05e3c8:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f05e3cc:	01cfa821 */ 	addu	$s5,$t6,$t7
/*  f05e3d0:	0fc2554a */ 	jal	tagFindById
/*  f05e3d4:	92a40002 */ 	lbu	$a0,0x2($s5)
/*  f05e3d8:	afa20058 */ 	sw	$v0,0x58($sp)
/*  f05e3dc:	0fc2554a */ 	jal	tagFindById
/*  f05e3e0:	92a40003 */ 	lbu	$a0,0x3($s5)
/*  f05e3e4:	afa20054 */ 	sw	$v0,0x54($sp)
/*  f05e3e8:	0fc2554a */ 	jal	tagFindById
/*  f05e3ec:	92a40004 */ 	lbu	$a0,0x4($s5)
/*  f05e3f0:	0c004b70 */ 	jal	random
/*  f05e3f4:	afa20050 */ 	sw	$v0,0x50($sp)
/*  f05e3f8:	24110005 */ 	addiu	$s1,$zero,0x5
/*  f05e3fc:	0051001b */ 	divu	$zero,$v0,$s1
/*  f05e400:	0000c010 */ 	mfhi	$t8
/*  f05e404:	a3b8004b */ 	sb	$t8,0x4b($sp)
/*  f05e408:	16200002 */ 	bnez	$s1,.L0f05e414
/*  f05e40c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e410:	0007000d */ 	break	0x7
.L0f05e414:
/*  f05e414:	0c004b70 */ 	jal	random
/*  f05e418:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e41c:	0051001b */ 	divu	$zero,$v0,$s1
/*  f05e420:	0000a010 */ 	mfhi	$s4
/*  f05e424:	329900ff */ 	andi	$t9,$s4,0xff
/*  f05e428:	16200002 */ 	bnez	$s1,.L0f05e434
/*  f05e42c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e430:	0007000d */ 	break	0x7
.L0f05e434:
/*  f05e434:	0320a025 */ 	or	$s4,$t9,$zero
/*  f05e438:	0c004b70 */ 	jal	random
/*  f05e43c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e440:	0051001b */ 	divu	$zero,$v0,$s1
/*  f05e444:	92a90005 */ 	lbu	$t1,0x5($s5)
/*  f05e448:	00009810 */ 	mfhi	$s3
/*  f05e44c:	326800ff */ 	andi	$t0,$s3,0xff
/*  f05e450:	a3a90044 */ 	sb	$t1,0x44($sp)
/*  f05e454:	92aa0006 */ 	lbu	$t2,0x6($s5)
/*  f05e458:	93b0004b */ 	lbu	$s0,0x4b($sp)
/*  f05e45c:	01009825 */ 	or	$s3,$t0,$zero
/*  f05e460:	a3aa0045 */ 	sb	$t2,0x45($sp)
/*  f05e464:	92ab0007 */ 	lbu	$t3,0x7($s5)
/*  f05e468:	16200002 */ 	bnez	$s1,.L0f05e474
/*  f05e46c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e470:	0007000d */ 	break	0x7
.L0f05e474:
/*  f05e474:	a3ab0046 */ 	sb	$t3,0x46($sp)
/*  f05e478:	92ac0008 */ 	lbu	$t4,0x8($s5)
/*  f05e47c:	02809025 */ 	or	$s2,$s4,$zero
/*  f05e480:	a3ac0047 */ 	sb	$t4,0x47($sp)
/*  f05e484:	92ad0009 */ 	lbu	$t5,0x9($s5)
/*  f05e488:	a3ad0048 */ 	sb	$t5,0x48($sp)
/*  f05e48c:	92ae000d */ 	lbu	$t6,0xd($s5)
/*  f05e490:	a3ae003c */ 	sb	$t6,0x3c($sp)
/*  f05e494:	92af000e */ 	lbu	$t7,0xe($s5)
/*  f05e498:	a3af003d */ 	sb	$t7,0x3d($sp)
/*  f05e49c:	92b8000f */ 	lbu	$t8,0xf($s5)
/*  f05e4a0:	a3b8003e */ 	sb	$t8,0x3e($sp)
/*  f05e4a4:	92b90010 */ 	lbu	$t9,0x10($s5)
/*  f05e4a8:	a3b9003f */ 	sb	$t9,0x3f($sp)
/*  f05e4ac:	92a80011 */ 	lbu	$t0,0x11($s5)
/*  f05e4b0:	1614000d */ 	bne	$s0,$s4,.L0f05e4e8
/*  f05e4b4:	a3a80040 */ 	sb	$t0,0x40($sp)
.L0f05e4b8:
/*  f05e4b8:	0c004b70 */ 	jal	random
/*  f05e4bc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e4c0:	0051001b */ 	divu	$zero,$v0,$s1
/*  f05e4c4:	00001810 */ 	mfhi	$v1
/*  f05e4c8:	306900ff */ 	andi	$t1,$v1,0xff
/*  f05e4cc:	16200002 */ 	bnez	$s1,.L0f05e4d8
/*  f05e4d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e4d4:	0007000d */ 	break	0x7
.L0f05e4d8:
/*  f05e4d8:	307400ff */ 	andi	$s4,$v1,0xff
/*  f05e4dc:	1209fff6 */ 	beq	$s0,$t1,.L0f05e4b8
/*  f05e4e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e4e4:	02809025 */ 	or	$s2,$s4,$zero
.L0f05e4e8:
/*  f05e4e8:	12530003 */ 	beq	$s2,$s3,.L0f05e4f8
/*  f05e4ec:	02601025 */ 	or	$v0,$s3,$zero
/*  f05e4f0:	5602000f */ 	bnel	$s0,$v0,.L0f05e530
/*  f05e4f4:	93ab004b */ 	lbu	$t3,0x4b($sp)
.L0f05e4f8:
/*  f05e4f8:	0c004b70 */ 	jal	random
/*  f05e4fc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e500:	0051001b */ 	divu	$zero,$v0,$s1
/*  f05e504:	00001810 */ 	mfhi	$v1
/*  f05e508:	306a00ff */ 	andi	$t2,$v1,0xff
/*  f05e50c:	16200002 */ 	bnez	$s1,.L0f05e518
/*  f05e510:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e514:	0007000d */ 	break	0x7
.L0f05e518:
/*  f05e518:	307300ff */ 	andi	$s3,$v1,0xff
/*  f05e51c:	124afff6 */ 	beq	$s2,$t2,.L0f05e4f8
/*  f05e520:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e524:	1213fff4 */ 	beq	$s0,$s3,.L0f05e4f8
/*  f05e528:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e52c:	93ab004b */ 	lbu	$t3,0x4b($sp)
.L0f05e530:
/*  f05e530:	27b00044 */ 	addiu	$s0,$sp,0x44
/*  f05e534:	020b6021 */ 	addu	$t4,$s0,$t3
/*  f05e538:	0fc2554a */ 	jal	tagFindById
/*  f05e53c:	91840000 */ 	lbu	$a0,0x0($t4)
/*  f05e540:	8fa30058 */ 	lw	$v1,0x58($sp)
/*  f05e544:	844d0006 */ 	lh	$t5,0x6($v0)
/*  f05e548:	a46d0006 */ 	sh	$t5,0x6($v1)
/*  f05e54c:	8c4e000c */ 	lw	$t6,0xc($v0)
/*  f05e550:	ac6e000c */ 	sw	$t6,0xc($v1)
/*  f05e554:	0fc2554a */ 	jal	tagFindById
/*  f05e558:	92a4000a */ 	lbu	$a0,0xa($s5)
/*  f05e55c:	93af004b */ 	lbu	$t7,0x4b($sp)
/*  f05e560:	27b1003c */ 	addiu	$s1,$sp,0x3c
/*  f05e564:	afa20058 */ 	sw	$v0,0x58($sp)
/*  f05e568:	022fc021 */ 	addu	$t8,$s1,$t7
/*  f05e56c:	0fc2554a */ 	jal	tagFindById
/*  f05e570:	93040000 */ 	lbu	$a0,0x0($t8)
/*  f05e574:	84590006 */ 	lh	$t9,0x6($v0)
/*  f05e578:	8fa80058 */ 	lw	$t0,0x58($sp)
/*  f05e57c:	02145021 */ 	addu	$t2,$s0,$s4
/*  f05e580:	a5190006 */ 	sh	$t9,0x6($t0)
/*  f05e584:	8c49000c */ 	lw	$t1,0xc($v0)
/*  f05e588:	ad09000c */ 	sw	$t1,0xc($t0)
/*  f05e58c:	0fc2554a */ 	jal	tagFindById
/*  f05e590:	91440000 */ 	lbu	$a0,0x0($t2)
/*  f05e594:	8fa30054 */ 	lw	$v1,0x54($sp)
/*  f05e598:	844b0006 */ 	lh	$t3,0x6($v0)
/*  f05e59c:	a46b0006 */ 	sh	$t3,0x6($v1)
/*  f05e5a0:	8c4c000c */ 	lw	$t4,0xc($v0)
/*  f05e5a4:	ac6c000c */ 	sw	$t4,0xc($v1)
/*  f05e5a8:	0fc2554a */ 	jal	tagFindById
/*  f05e5ac:	92a4000b */ 	lbu	$a0,0xb($s5)
/*  f05e5b0:	afa20054 */ 	sw	$v0,0x54($sp)
/*  f05e5b4:	02346821 */ 	addu	$t5,$s1,$s4
/*  f05e5b8:	0fc2554a */ 	jal	tagFindById
/*  f05e5bc:	91a40000 */ 	lbu	$a0,0x0($t5)
/*  f05e5c0:	844e0006 */ 	lh	$t6,0x6($v0)
/*  f05e5c4:	8faf0054 */ 	lw	$t7,0x54($sp)
/*  f05e5c8:	0213c821 */ 	addu	$t9,$s0,$s3
/*  f05e5cc:	a5ee0006 */ 	sh	$t6,0x6($t7)
/*  f05e5d0:	8c58000c */ 	lw	$t8,0xc($v0)
/*  f05e5d4:	adf8000c */ 	sw	$t8,0xc($t7)
/*  f05e5d8:	0fc2554a */ 	jal	tagFindById
/*  f05e5dc:	93240000 */ 	lbu	$a0,0x0($t9)
/*  f05e5e0:	8fa30050 */ 	lw	$v1,0x50($sp)
/*  f05e5e4:	84490006 */ 	lh	$t1,0x6($v0)
/*  f05e5e8:	a4690006 */ 	sh	$t1,0x6($v1)
/*  f05e5ec:	8c48000c */ 	lw	$t0,0xc($v0)
/*  f05e5f0:	ac68000c */ 	sw	$t0,0xc($v1)
/*  f05e5f4:	0fc2554a */ 	jal	tagFindById
/*  f05e5f8:	92a4000c */ 	lbu	$a0,0xc($s5)
/*  f05e5fc:	afa20050 */ 	sw	$v0,0x50($sp)
/*  f05e600:	02335021 */ 	addu	$t2,$s1,$s3
/*  f05e604:	0fc2554a */ 	jal	tagFindById
/*  f05e608:	91440000 */ 	lbu	$a0,0x0($t2)
/*  f05e60c:	844b0006 */ 	lh	$t3,0x6($v0)
/*  f05e610:	8fac0050 */ 	lw	$t4,0x50($sp)
/*  f05e614:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05e618:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05e61c:	a58b0006 */ 	sh	$t3,0x6($t4)
/*  f05e620:	8c4d000c */ 	lw	$t5,0xc($v0)
/*  f05e624:	00001025 */ 	or	$v0,$zero,$zero
/*  f05e628:	ad8d000c */ 	sw	$t5,0xc($t4)
/*  f05e62c:	8c6e0438 */ 	lw	$t6,0x438($v1)
/*  f05e630:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f05e634:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f05e638:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f05e63c:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f05e640:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f05e644:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f05e648:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f05e64c:	25d80012 */ 	addiu	$t8,$t6,0x12
/*  f05e650:	ac780438 */ 	sw	$t8,0x438($v1)
/*  f05e654:	03e00008 */ 	jr	$ra
/*  f05e658:	27bd0060 */ 	addiu	$sp,$sp,0x60
);

/**
 * @cmd 01b2
 */
bool ai01b2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	var8007db84 = var7f1a9da4[0] * (s32)cmd[2];
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01b3
 */
bool aiToggleP1P2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.coopplayernum >= 0) {
		struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

		if (chr) {
			if (chr->p1p2 == g_Vars.bondplayernum && !g_Vars.coop->isdead) {
				chr->p1p2 = g_Vars.coopplayernum;
			} else if (!g_Vars.bond->isdead) {
				chr->p1p2 = g_Vars.bondplayernum;
			}
		}
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01b5
 */
bool aiChrSetP1P2(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (g_Vars.coopplayernum >= 0) {
		struct chrdata *chr1 = chrFindById(g_Vars.chrdata, cmd[2]);
		struct chrdata *chr2 = chrFindById(g_Vars.chrdata, cmd[3]);

		if (chr1 && chr2 && chr2->prop && chr2->prop->type == PROPTYPE_PLAYER) {
			u32 playernum = propGetPlayerNum(chr2->prop);

			if (!g_Vars.players[playernum]->isdead) {
				if (chr2->prop == g_Vars.coop->prop) {
					chr1->p1p2 = g_Vars.coopplayernum;
				} else {
					chr1->p1p2 = g_Vars.bondplayernum;
				}
			}
		}
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01b7
 */
bool aiChrSetCloaked(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop) {
		if (!chrIsDead(chr)) {
			if (cmd[3]) {
				chrCloak(chr, cmd[4]);
			} else {
				chrUncloak(chr, cmd[4]);
			}
		}
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 01b8
 */
bool aiSetAutogunType(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop && obj->type == OBJTYPE_AUTOGUN) {
		struct autogunobj *autogun = (struct autogunobj *)obj;
		autogun->autogun_type = cmd[3];
		autogun->unka4 = 0;
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01b9
 */
GLOBAL_ASM(
glabel ai01b9
/*  f05e990:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*  f05e994:	3c0e8007 */ 	lui	$t6,%hi(var80069860)
/*  f05e998:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f05e99c:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f05e9a0:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f05e9a4:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f05e9a8:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f05e9ac:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05e9b0:	25ce9860 */ 	addiu	$t6,$t6,%lo(var80069860)
/*  f05e9b4:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f05e9b8:	27b00048 */ 	addiu	$s0,$sp,0x48
/*  f05e9bc:	24130008 */ 	addiu	$s3,$zero,0x8
/*  f05e9c0:	ae010000 */ 	sw	$at,0x0($s0)
/*  f05e9c4:	8dd90004 */ 	lw	$t9,0x4($t6)
/*  f05e9c8:	24140001 */ 	addiu	$s4,$zero,0x1
/*  f05e9cc:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f05e9d0:	ae190004 */ 	sw	$t9,0x4($s0)
.L0f05e9d4:
/*  f05e9d4:	0fc2554a */ 	jal	tagFindById
/*  f05e9d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05e9dc:	0c004b70 */ 	jal	random
/*  f05e9e0:	00409025 */ 	or	$s2,$v0,$zero
/*  f05e9e4:	30430007 */ 	andi	$v1,$v0,0x7
/*  f05e9e8:	306800ff */ 	andi	$t0,$v1,0xff
/*  f05e9ec:	02084821 */ 	addu	$t1,$s0,$t0
/*  f05e9f0:	912a0000 */ 	lbu	$t2,0x0($t1)
/*  f05e9f4:	307100ff */ 	andi	$s1,$v1,0xff
/*  f05e9f8:	93b80048 */ 	lbu	$t8,0x48($sp)
/*  f05e9fc:	1540000a */ 	bnez	$t2,.L0f05ea28
/*  f05ea00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05ea04:	0fc2554a */ 	jal	tagFindById
/*  f05ea08:	02202025 */ 	or	$a0,$s1,$zero
/*  f05ea0c:	844b0006 */ 	lh	$t3,0x6($v0)
/*  f05ea10:	02116821 */ 	addu	$t5,$s0,$s1
/*  f05ea14:	a64b0006 */ 	sh	$t3,0x6($s2)
/*  f05ea18:	8c4c000c */ 	lw	$t4,0xc($v0)
/*  f05ea1c:	ae4c000c */ 	sw	$t4,0xc($s2)
/*  f05ea20:	10000012 */ 	beqz	$zero,.L0f05ea6c
/*  f05ea24:	a1b40000 */ 	sb	$s4,0x0($t5)
.L0f05ea28:
/*  f05ea28:	13000008 */ 	beqz	$t8,.L0f05ea4c
/*  f05ea2c:	00001025 */ 	or	$v0,$zero,$zero
/*  f05ea30:	24420001 */ 	addiu	$v0,$v0,0x1
.L0f05ea34:
/*  f05ea34:	304f00ff */ 	andi	$t7,$v0,0xff
/*  f05ea38:	020f7021 */ 	addu	$t6,$s0,$t7
/*  f05ea3c:	91d90000 */ 	lbu	$t9,0x0($t6)
/*  f05ea40:	01e01025 */ 	or	$v0,$t7,$zero
/*  f05ea44:	5720fffb */ 	bnezl	$t9,.L0f05ea34
/*  f05ea48:	24420001 */ 	addiu	$v0,$v0,0x1
.L0f05ea4c:
/*  f05ea4c:	00402025 */ 	or	$a0,$v0,$zero
/*  f05ea50:	0fc2554a */ 	jal	tagFindById
/*  f05ea54:	02028821 */ 	addu	$s1,$s0,$v0
/*  f05ea58:	84480006 */ 	lh	$t0,0x6($v0)
/*  f05ea5c:	a6480006 */ 	sh	$t0,0x6($s2)
/*  f05ea60:	8c49000c */ 	lw	$t1,0xc($v0)
/*  f05ea64:	ae49000c */ 	sw	$t1,0xc($s2)
/*  f05ea68:	a2340000 */ 	sb	$s4,0x0($s1)
.L0f05ea6c:
/*  f05ea6c:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f05ea70:	326400ff */ 	andi	$a0,$s3,0xff
/*  f05ea74:	28810010 */ 	slti	$at,$a0,0x10
/*  f05ea78:	1420ffd6 */ 	bnez	$at,.L0f05e9d4
/*  f05ea7c:	00809825 */ 	or	$s3,$a0,$zero
/*  f05ea80:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05ea84:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05ea88:	8c6b0438 */ 	lw	$t3,0x438($v1)
/*  f05ea8c:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f05ea90:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05ea94:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f05ea98:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f05ea9c:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f05eaa0:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f05eaa4:	256c0002 */ 	addiu	$t4,$t3,0x2
/*  f05eaa8:	ac6c0438 */ 	sw	$t4,0x438($v1)
/*  f05eaac:	27bd0050 */ 	addiu	$sp,$sp,0x50
/*  f05eab0:	03e00008 */ 	jr	$ra
/*  f05eab4:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 01bb
 */
bool aiNoOp01bb(void)
{
	g_Vars.aioffset += 4;
	return false;
}

/**
 * @cmd 01bc
 */
GLOBAL_ASM(
glabel ai01bc
/*  f05ead4:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05ead8:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05eadc:	8c6f0424 */ 	lw	$t7,0x424($v1)
/*  f05eae0:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f05eae4:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f05eae8:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f05eaec:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05eaf0:	8df8032c */ 	lw	$t8,0x32c($t7)
/*  f05eaf4:	00851021 */ 	addu	$v0,$a0,$a1
/*  f05eaf8:	904e0002 */ 	lbu	$t6,0x2($v0)
/*  f05eafc:	0018ca40 */ 	sll	$t9,$t8,0x9
/*  f05eb00:	00194742 */ 	srl	$t0,$t9,0x1d
/*  f05eb04:	15c80007 */ 	bne	$t6,$t0,.L0f05eb24
/*  f05eb08:	24a90004 */ 	addiu	$t1,$a1,0x4
/*  f05eb0c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05eb10:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f05eb14:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05eb18:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05eb1c:	10000002 */ 	beqz	$zero,.L0f05eb28
/*  f05eb20:	ac620438 */ 	sw	$v0,0x438($v1)
.L0f05eb24:
/*  f05eb24:	ac690438 */ 	sw	$t1,0x438($v1)
.L0f05eb28:
/*  f05eb28:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05eb2c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f05eb30:	00001025 */ 	or	$v0,$zero,$zero
/*  f05eb34:	03e00008 */ 	jr	$ra
/*  f05eb38:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to different temporary registers
//bool ai01bc(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//
//	if (cmd[2] == g_Vars.chrdata->pouncebits) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[3]);
//	} else {
//		g_Vars.aioffset += 4;
//	}
//
//	return false;
//}

/**
 * @cmd 01bd
 */
GLOBAL_ASM(
glabel ai01bd
/*  f05eb3c:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05eb40:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05eb44:	8c6e0434 */ 	lw	$t6,0x434($v1)
/*  f05eb48:	8c6f0438 */ 	lw	$t7,0x438($v1)
/*  f05eb4c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f05eb50:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05eb54:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f05eb58:	0fc68606 */ 	jal	func0f1a1818
/*  f05eb5c:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f05eb60:	8c590000 */ 	lw	$t9,0x0($v0)
/*  f05eb64:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05eb68:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05eb6c:	00194900 */ 	sll	$t1,$t9,0x4
/*  f05eb70:	05210009 */ 	bgez	$t1,.L0f05eb98
/*  f05eb74:	8faa001c */ 	lw	$t2,0x1c($sp)
/*  f05eb78:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f05eb7c:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f05eb80:	0fc13583 */ 	jal	chraiGoToLabel
/*  f05eb84:	91460002 */ 	lbu	$a2,0x2($t2)
/*  f05eb88:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05eb8c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05eb90:	10000004 */ 	beqz	$zero,.L0f05eba4
/*  f05eb94:	ac620438 */ 	sw	$v0,0x438($v1)
.L0f05eb98:
/*  f05eb98:	8c6b0438 */ 	lw	$t3,0x438($v1)
/*  f05eb9c:	256c0003 */ 	addiu	$t4,$t3,0x3
/*  f05eba0:	ac6c0438 */ 	sw	$t4,0x438($v1)
.L0f05eba4:
/*  f05eba4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05eba8:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f05ebac:	00001025 */ 	or	$v0,$zero,$zero
/*  f05ebb0:	03e00008 */ 	jr	$ra
/*  f05ebb4:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to different temporary registers
//bool ai01bd(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	s32 *value = func0f1a1818();
//
//	if (*value * 16 < 0) {
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
//	} else {
//		g_Vars.aioffset += 3;
//	}
//
//	return false;
//}

/**
 * @cmd 01be
 */
bool aiIfChrWeaponEquipped(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	struct prop *prop = chr ? chr->prop : NULL;
	u8 is_using_weapon = false;

	if (prop && prop->type == PROPTYPE_PLAYER) {
		u32 playernum = propGetPlayerNum(prop);
		u32 prevplayernum = g_Vars.currentplayernum;
		setCurrentPlayerNum(playernum);

		if (currentPlayerHasWeaponEquipped(cmd[3]) == 1) {
			is_using_weapon = true;
		}

		setCurrentPlayerNum(prevplayernum);
	}

	if (is_using_weapon) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 01bf
 */
bool aiChrBeginOrEndTeleport(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u16 pad_id = cmd[3] | (cmd[2] << 8);
	f32 fvalue = var7f1a9da8[0];
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[4]);
	s32 a;
	u32 playernum;
	u32 prevplayernum = g_Vars.currentplayernum;
	s32 b;
	s32 c;

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
	}

	if (pad_id == 0) {
		g_Vars.currentplayer->unk1bfc = 4;
		g_Vars.currentplayer->unk1bfd = 0;
	} else {
		g_Vars.currentplayer->unk1bfd = 0;
		g_Vars.currentplayer->unk1bfc = 1;
		g_Vars.currentplayer->teleportdstpad = pad_id;
		g_Vars.currentplayer->unk1c00 = 0;

		a = func000488c0(0);
		b = func000488c0(&var800915e0);
		func00048430(0, b + 1);
		c = func00010904(var80095200, 1075, 0, -1, -1, -1, -1, -1);

		if (c) {
			func00033e50(c, 16, fvalue);
		}

		func00048430(0, a);
	}

	g_Vars.aioffset += 5;

	setCurrentPlayerNum(prevplayernum);

	return false;
}

/**
 * @cmd 01c0
 */
bool aiIfChrTeleportFullWhite(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[3]);
	u32 prevplayernum = g_Vars.currentplayernum;
	s32 a;
	f32 fvalue;
	s32 b;
	s32 c;

	if (chr && chr->prop && chr->prop->type == PROPTYPE_PLAYER) {
		u32 playernum = propGetPlayerNum(chr->prop);
		setCurrentPlayerNum(playernum);
	}

	if (g_Vars.currentplayer->unk1bfc < 3) {
		g_Vars.aioffset += 4;
	} else {
		fvalue = var7f1a9dac[0];
		a = func000488c0(0);
		b = func000488c0(&var800915e0);
		func00048430(0, b + 1);
		c = func00010904(var80095200, -32683, 0, -1, -1, -1, -1, -1);

		if (c) {
			func00033e50(c, 16, fvalue);
		}

		func00048430(0, a);
		g_Vars.currentplayer->unk1bfc = 3;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	}

	setCurrentPlayerNum(prevplayernum);

	return false;
}

/**
 * @cmd 01c5
 */
bool ai01c5(void)
{
	func0f04d000(g_Vars.chrdata);
	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 01c8
 */
bool ai01c8(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	g_Vars.aioffset += 3;
	func0f01aca8(cmd[2]);

	return false;
}

/**
 * @cmd 01c9
 */
bool ai01c9(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f01ab94()) {
		func0f01abf0();
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset = g_Vars.aioffset + 3;
	}

	return false;
}

/**
 * @cmd 01ca
 */
bool aiChrSetCutsceneWeapon(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);
	s32 weapon_id = func0f128af4(cmd[3]);
	s32 fallback_id = func0f128af4(cmd[4]);

	if (chr) {
		if (cmd[3] == 0xff) {
			if (cmd[4] == 0xff) {
				if (chr->weapons_held[0]) {
					struct weaponobj *weapon = chr->weapons_held[0]->weapon;
					bool valid = true;

					switch (weapon->weapon_id) {
					case WEAPON_FALCON2:
					case WEAPON_FALCON2_SILENCER:
					case WEAPON_FALCON2_SCOPE:
					case WEAPON_MAGSEC4:
					case WEAPON_MAULER:
					case WEAPON_PHOENIX:
					case WEAPON_DY357MAGNUM:
					case WEAPON_DY357LX:
					case WEAPON_CMP150:
						valid = false;
					}

					if (valid) {
						func0f08b8b8(chr, 1);
						func0f08b8b8(chr, 0);
					}
				}
			} else {
				if (chr->weapons_held[0] == NULL && chr->weapons_held[1] == NULL && fallback_id >= 0) {
					func0f08b8e8(chr, fallback_id, cmd[4], 0, 0, 0);
				}
			}
		} else {
			func0f08b8b8(chr, 1);
			func0f08b8b8(chr, 0);

			if (weapon_id >= 0) {
				func0f08b8e8(chr, weapon_id, cmd[3], 0, 0, 0);
			}

			if (fallback_id >= 0) {
				func0f08b8e8(chr, fallback_id, cmd[4], 0x10000000, 0, 0);
			}
		}
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 01cb
 */
bool aiFadeScreen(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	u32 color = (cmd[3] << 16) | (cmd[4] << 8) | cmd[5] | (cmd[2] << 24);
	u32 num_frames = ((cmd[7] | (cmd[6] << 8)) << 16) >> 16;
	fadeConfigure(color, num_frames);
	g_Vars.aioffset += 8;

	return false;
}

/**
 * @cmd 01cc
 */
bool ai01cc(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;

	if (func0f16889c() == false) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

/**
 * @cmd 01cd
 */
bool ai01cd(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr && chr->prop && chr->unk020) {
		func0f0245c8(chr, cmd[3]);
	}

	g_Vars.aioffset += 4;

	return false;
}

/**
 * @cmd 01ce
 */
bool ai01ce(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	func0f0a92ac(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01cf
 */
GLOBAL_ASM(
glabel ai01cf
/*  f05f3b8:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f05f3bc:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f05f3c0:	8c4e0434 */ 	lw	$t6,0x434($v0)
/*  f05f3c4:	8c4f0438 */ 	lw	$t7,0x438($v0)
/*  f05f3c8:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f05f3cc:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05f3d0:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05f3d4:	90650002 */ 	lbu	$a1,0x2($v1)
/*  f05f3d8:	afa3003c */ 	sw	$v1,0x3c($sp)
/*  f05f3dc:	0fc126d1 */ 	jal	chrFindById
/*  f05f3e0:	8c440424 */ 	lw	$a0,0x424($v0)
/*  f05f3e4:	3c198007 */ 	lui	$t9,%hi(var80069868)
/*  f05f3e8:	27399868 */ 	addiu	$t9,$t9,%lo(var80069868)
/*  f05f3ec:	8f210000 */ 	lw	$at,0x0($t9)
/*  f05f3f0:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f05f3f4:	27b8002c */ 	addiu	$t8,$sp,0x2c
/*  f05f3f8:	af010000 */ 	sw	$at,0x0($t8)
/*  f05f3fc:	8f210008 */ 	lw	$at,0x8($t9)
/*  f05f400:	8f2a0004 */ 	lw	$t2,0x4($t9)
/*  f05f404:	3c0c8007 */ 	lui	$t4,%hi(var80069874)
/*  f05f408:	258c9874 */ 	addiu	$t4,$t4,%lo(var80069874)
/*  f05f40c:	af010008 */ 	sw	$at,0x8($t8)
/*  f05f410:	af0a0004 */ 	sw	$t2,0x4($t8)
/*  f05f414:	8d810000 */ 	lw	$at,0x0($t4)
/*  f05f418:	27ab0020 */ 	addiu	$t3,$sp,0x20
/*  f05f41c:	8d8f0004 */ 	lw	$t7,0x4($t4)
/*  f05f420:	ad610000 */ 	sw	$at,0x0($t3)
/*  f05f424:	8d810008 */ 	lw	$at,0x8($t4)
/*  f05f428:	00402025 */ 	or	$a0,$v0,$zero
/*  f05f42c:	ad6f0004 */ 	sw	$t7,0x4($t3)
/*  f05f430:	10400019 */ 	beqz	$v0,.L0f05f498
/*  f05f434:	ad610008 */ 	sw	$at,0x8($t3)
/*  f05f438:	8c490170 */ 	lw	$t1,0x170($v0)
/*  f05f43c:	11200016 */ 	beqz	$t1,.L0f05f498
/*  f05f440:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f444:	90680003 */ 	lbu	$t0,0x3($v1)
/*  f05f448:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f05f44c:	00002825 */ 	or	$a1,$zero,$zero
/*  f05f450:	1100000f */ 	beqz	$t0,.L0f05f490
/*  f05f454:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f458:	00002825 */ 	or	$a1,$zero,$zero
/*  f05f45c:	0fc0fe12 */ 	jal	chrSetFiring
/*  f05f460:	afa20038 */ 	sw	$v0,0x38($sp)
/*  f05f464:	27b8002c */ 	addiu	$t8,$sp,0x2c
/*  f05f468:	27b90020 */ 	addiu	$t9,$sp,0x20
/*  f05f46c:	8fa40038 */ 	lw	$a0,0x38($sp)
/*  f05f470:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f05f474:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f05f478:	00002825 */ 	or	$a1,$zero,$zero
/*  f05f47c:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f05f480:	0fc0f8a7 */ 	jal	func0f03e29c
/*  f05f484:	00003825 */ 	or	$a3,$zero,$zero
/*  f05f488:	10000003 */ 	beqz	$zero,.L0f05f498
/*  f05f48c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f05f490:
/*  f05f490:	0fc0fe12 */ 	jal	chrSetFiring
/*  f05f494:	00003025 */ 	or	$a2,$zero,$zero
.L0f05f498:
/*  f05f498:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f05f49c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f05f4a0:	8c6a0438 */ 	lw	$t2,0x438($v1)
/*  f05f4a4:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05f4a8:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f05f4ac:	254e0004 */ 	addiu	$t6,$t2,0x4
/*  f05f4b0:	ac6e0438 */ 	sw	$t6,0x438($v1)
/*  f05f4b4:	03e00008 */ 	jr	$ra
/*  f05f4b8:	00001025 */ 	or	$v0,$zero,$zero
);

/**
 * @cmd 01d0
 */
GLOBAL_ASM(
glabel ai01d0
/*  f05f4bc:	3c06800a */ 	lui	$a2,%hi(g_Vars)
/*  f05f4c0:	24c69fc0 */ 	addiu	$a2,$a2,%lo(g_Vars)
/*  f05f4c4:	8cce0434 */ 	lw	$t6,0x434($a2)
/*  f05f4c8:	8ccf0438 */ 	lw	$t7,0x438($a2)
/*  f05f4cc:	3c0b800a */ 	lui	$t3,0x800a
/*  f05f4d0:	8d6b4cc8 */ 	lw	$t3,0x4cc8($t3)
/*  f05f4d4:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05f4d8:	90780002 */ 	lbu	$t8,0x2($v1)
/*  f05f4dc:	90680003 */ 	lbu	$t0,0x3($v1)
/*  f05f4e0:	906e0004 */ 	lbu	$t6,0x4($v1)
/*  f05f4e4:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f05f4e8:	03282025 */ 	or	$a0,$t9,$t0
/*  f05f4ec:	00044c00 */ 	sll	$t1,$a0,0x10
/*  f05f4f0:	00095403 */ 	sra	$t2,$t1,0x10
/*  f05f4f4:	000a60c0 */ 	sll	$t4,$t2,0x3
/*  f05f4f8:	016c2821 */ 	addu	$a1,$t3,$t4
/*  f05f4fc:	90ad0006 */ 	lbu	$t5,0x6($a1)
/*  f05f500:	00001025 */ 	or	$v0,$zero,$zero
/*  f05f504:	01ae7825 */ 	or	$t7,$t5,$t6
/*  f05f508:	a0af0006 */ 	sb	$t7,0x6($a1)
/*  f05f50c:	8cd80438 */ 	lw	$t8,0x438($a2)
/*  f05f510:	27190005 */ 	addiu	$t9,$t8,0x5
/*  f05f514:	03e00008 */ 	jr	$ra
/*  f05f518:	acd90438 */ 	sw	$t9,0x438($a2)
);

/**
 * @cmd 01d1
 */
bool aiSetObjPartVisible(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct defaultobj *obj = objFindByTagId(cmd[2]);

	if (obj && obj->prop) {
		objSetPartVisible(obj, cmd[3], cmd[4]);
	}

	g_Vars.aioffset += 5;

	return false;
}

/**
 * @cmd 01d2
 */
bool aiChrEmitSparks(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chrEmitSparks(chr);
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01d3
 */
GLOBAL_ASM(
glabel ai01d3
/*  f05f5f0:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f05f5f4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f05f5f8:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f05f5fc:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f05f600:	8e0e0434 */ 	lw	$t6,0x434($s0)
/*  f05f604:	8e0f0438 */ 	lw	$t7,0x438($s0)
/*  f05f608:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f05f60c:	8e040424 */ 	lw	$a0,0x424($s0)
/*  f05f610:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05f614:	90450002 */ 	lbu	$a1,0x2($v0)
/*  f05f618:	0fc126d1 */ 	jal	chrFindById
/*  f05f61c:	afa20024 */ 	sw	$v0,0x24($sp)
/*  f05f620:	1040005d */ 	beqz	$v0,.L0f05f798
/*  f05f624:	00401825 */ 	or	$v1,$v0,$zero
/*  f05f628:	8fb80024 */ 	lw	$t8,0x24($sp)
/*  f05f62c:	24010007 */ 	addiu	$at,$zero,0x7
/*  f05f630:	93040004 */ 	lbu	$a0,0x4($t8)
/*  f05f634:	14810016 */ 	bne	$a0,$at,.L0f05f690
/*  f05f638:	00802825 */ 	or	$a1,$a0,$zero
/*  f05f63c:	8e19000c */ 	lw	$t9,0xc($s0)
/*  f05f640:	24010002 */ 	addiu	$at,$zero,0x2
/*  f05f644:	07210004 */ 	bgez	$t9,.L0f05f658
/*  f05f648:	33280003 */ 	andi	$t0,$t9,0x3
/*  f05f64c:	11000002 */ 	beqz	$t0,.L0f05f658
/*  f05f650:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f654:	2508fffc */ 	addiu	$t0,$t0,-4
.L0f05f658:
/*  f05f658:	55010022 */ 	bnel	$t0,$at,.L0f05f6e4
/*  f05f65c:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f05f660:	0c004b70 */ 	jal	random
/*  f05f664:	afa30020 */ 	sw	$v1,0x20($sp)
/*  f05f668:	24010006 */ 	addiu	$at,$zero,0x6
/*  f05f66c:	0041001b */ 	divu	$zero,$v0,$at
/*  f05f670:	8fa30020 */ 	lw	$v1,0x20($sp)
/*  f05f674:	00005010 */ 	mfhi	$t2
/*  f05f678:	000a6100 */ 	sll	$t4,$t2,0x4
/*  f05f67c:	906d0362 */ 	lbu	$t5,0x362($v1)
/*  f05f680:	31aeff0f */ 	andi	$t6,$t5,0xff0f
/*  f05f684:	018e7825 */ 	or	$t7,$t4,$t6
/*  f05f688:	10000015 */ 	beqz	$zero,.L0f05f6e0
/*  f05f68c:	a06f0362 */ 	sb	$t7,0x362($v1)
.L0f05f690:
/*  f05f690:	24010008 */ 	addiu	$at,$zero,0x8
/*  f05f694:	54a1000e */ 	bnel	$a1,$at,.L0f05f6d0
/*  f05f698:	90580362 */ 	lbu	$t8,0x362($v0)
/*  f05f69c:	0c004b70 */ 	jal	random
/*  f05f6a0:	afa30020 */ 	sw	$v1,0x20($sp)
/*  f05f6a4:	24010006 */ 	addiu	$at,$zero,0x6
/*  f05f6a8:	0041001b */ 	divu	$zero,$v0,$at
/*  f05f6ac:	8fa30020 */ 	lw	$v1,0x20($sp)
/*  f05f6b0:	0000c810 */ 	mfhi	$t9
/*  f05f6b4:	00194900 */ 	sll	$t1,$t9,0x4
/*  f05f6b8:	906a0362 */ 	lbu	$t2,0x362($v1)
/*  f05f6bc:	314bff0f */ 	andi	$t3,$t2,0xff0f
/*  f05f6c0:	012b6825 */ 	or	$t5,$t1,$t3
/*  f05f6c4:	10000006 */ 	beqz	$zero,.L0f05f6e0
/*  f05f6c8:	a06d0362 */ 	sb	$t5,0x362($v1)
/*  f05f6cc:	90580362 */ 	lbu	$t8,0x362($v0)
.L0f05f6d0:
/*  f05f6d0:	00047900 */ 	sll	$t7,$a0,0x4
/*  f05f6d4:	3319ff0f */ 	andi	$t9,$t8,0xff0f
/*  f05f6d8:	01f94025 */ 	or	$t0,$t7,$t9
/*  f05f6dc:	a0480362 */ 	sb	$t0,0x362($v0)
.L0f05f6e0:
/*  f05f6e0:	8faa0024 */ 	lw	$t2,0x24($sp)
.L0f05f6e4:
/*  f05f6e4:	24010007 */ 	addiu	$at,$zero,0x7
/*  f05f6e8:	91420003 */ 	lbu	$v0,0x3($t2)
/*  f05f6ec:	14410016 */ 	bne	$v0,$at,.L0f05f748
/*  f05f6f0:	00402025 */ 	or	$a0,$v0,$zero
/*  f05f6f4:	8e09000c */ 	lw	$t1,0xc($s0)
/*  f05f6f8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f05f6fc:	05210004 */ 	bgez	$t1,.L0f05f710
/*  f05f700:	312b0003 */ 	andi	$t3,$t1,0x3
/*  f05f704:	11600002 */ 	beqz	$t3,.L0f05f710
/*  f05f708:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f70c:	256bfffc */ 	addiu	$t3,$t3,-4
.L0f05f710:
/*  f05f710:	55610022 */ 	bnel	$t3,$at,.L0f05f79c
/*  f05f714:	8e0a0438 */ 	lw	$t2,0x438($s0)
/*  f05f718:	0c004b70 */ 	jal	random
/*  f05f71c:	afa30020 */ 	sw	$v1,0x20($sp)
/*  f05f720:	24010006 */ 	addiu	$at,$zero,0x6
/*  f05f724:	0041001b */ 	divu	$zero,$v0,$at
/*  f05f728:	8fa30020 */ 	lw	$v1,0x20($sp)
/*  f05f72c:	00006010 */ 	mfhi	$t4
/*  f05f730:	318e000f */ 	andi	$t6,$t4,0xf
/*  f05f734:	90780362 */ 	lbu	$t8,0x362($v1)
/*  f05f738:	330ffff0 */ 	andi	$t7,$t8,0xfff0
/*  f05f73c:	01cfc825 */ 	or	$t9,$t6,$t7
/*  f05f740:	10000015 */ 	beqz	$zero,.L0f05f798
/*  f05f744:	a0790362 */ 	sb	$t9,0x362($v1)
.L0f05f748:
/*  f05f748:	24010008 */ 	addiu	$at,$zero,0x8
/*  f05f74c:	5481000e */ 	bnel	$a0,$at,.L0f05f788
/*  f05f750:	906f0362 */ 	lbu	$t7,0x362($v1)
/*  f05f754:	0c004b70 */ 	jal	random
/*  f05f758:	afa30020 */ 	sw	$v1,0x20($sp)
/*  f05f75c:	24010006 */ 	addiu	$at,$zero,0x6
/*  f05f760:	0041001b */ 	divu	$zero,$v0,$at
/*  f05f764:	8fa30020 */ 	lw	$v1,0x20($sp)
/*  f05f768:	00005010 */ 	mfhi	$t2
/*  f05f76c:	3149000f */ 	andi	$t1,$t2,0xf
/*  f05f770:	906b0362 */ 	lbu	$t3,0x362($v1)
/*  f05f774:	316dfff0 */ 	andi	$t5,$t3,0xfff0
/*  f05f778:	012d6025 */ 	or	$t4,$t1,$t5
/*  f05f77c:	10000006 */ 	beqz	$zero,.L0f05f798
/*  f05f780:	a06c0362 */ 	sb	$t4,0x362($v1)
/*  f05f784:	906f0362 */ 	lbu	$t7,0x362($v1)
.L0f05f788:
/*  f05f788:	304e000f */ 	andi	$t6,$v0,0xf
/*  f05f78c:	31f9fff0 */ 	andi	$t9,$t7,0xfff0
/*  f05f790:	01d94025 */ 	or	$t0,$t6,$t9
/*  f05f794:	a0680362 */ 	sb	$t0,0x362($v1)
.L0f05f798:
/*  f05f798:	8e0a0438 */ 	lw	$t2,0x438($s0)
.L0f05f79c:
/*  f05f79c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f05f7a0:	00001025 */ 	or	$v0,$zero,$zero
/*  f05f7a4:	254b0005 */ 	addiu	$t3,$t2,0x5
/*  f05f7a8:	ae0b0438 */ 	sw	$t3,0x438($s0)
/*  f05f7ac:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f05f7b0:	03e00008 */ 	jr	$ra
/*  f05f7b4:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

/**
 * @cmd 01d4
 */
GLOBAL_ASM(
glabel ai01d4
/*  f05f7b8:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f05f7bc:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f05f7c0:	8cee0434 */ 	lw	$t6,0x434($a3)
/*  f05f7c4:	8cef0438 */ 	lw	$t7,0x438($a3)
/*  f05f7c8:	00001025 */ 	or	$v0,$zero,$zero
/*  f05f7cc:	01cf1821 */ 	addu	$v1,$t6,$t7
/*  f05f7d0:	90780002 */ 	lbu	$t8,0x2($v1)
/*  f05f7d4:	90680003 */ 	lbu	$t0,0x3($v1)
/*  f05f7d8:	906b0004 */ 	lbu	$t3,0x4($v1)
/*  f05f7dc:	0018ca00 */ 	sll	$t9,$t8,0x8
/*  f05f7e0:	03282025 */ 	or	$a0,$t9,$t0
/*  f05f7e4:	00044c00 */ 	sll	$t1,$a0,0x10
/*  f05f7e8:	00095403 */ 	sra	$t2,$t1,0x10
/*  f05f7ec:	000ac8c0 */ 	sll	$t9,$t2,0x3
/*  f05f7f0:	032ac821 */ 	addu	$t9,$t9,$t2
/*  f05f7f4:	3c18800a */ 	lui	$t8,0x800a
/*  f05f7f8:	8f184928 */ 	lw	$t8,0x4928($t8)
/*  f05f7fc:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f05f800:	032ac823 */ 	subu	$t9,$t9,$t2
/*  f05f804:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f05f808:	906d0005 */ 	lbu	$t5,0x5($v1)
/*  f05f80c:	03193021 */ 	addu	$a2,$t8,$t9
/*  f05f810:	94c80000 */ 	lhu	$t0,0x0($a2)
/*  f05f814:	000b6200 */ 	sll	$t4,$t3,0x8
/*  f05f818:	018d7825 */ 	or	$t7,$t4,$t5
/*  f05f81c:	010f4825 */ 	or	$t1,$t0,$t7
/*  f05f820:	a4c90000 */ 	sh	$t1,0x0($a2)
/*  f05f824:	8cea0438 */ 	lw	$t2,0x438($a3)
/*  f05f828:	254b0006 */ 	addiu	$t3,$t2,0x6
/*  f05f82c:	03e00008 */ 	jr	$ra
/*  f05f830:	aceb0438 */ 	sw	$t3,0x438($a3)
);

//bool ai01d4(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	s16 room_id = cmd[3] | (cmd[2] << 8);
//	u32 value = cmd[5] | (cmd[4] << 8);
//
//	struct room *room = &g_RoomPtrs[room_id];
//	room->unk00 |= value;
//
//	g_Vars.aioffset += 6;
//
//	return false;
//}

/**
 * @cmd 01d5
 */
GLOBAL_ASM(
glabel aiShowCutsceneChrs
/*  f05f834:	3c08800a */ 	lui	$t0,%hi(g_Vars)
/*  f05f838:	25089fc0 */ 	addiu	$t0,$t0,%lo(g_Vars)
/*  f05f83c:	8d0e0434 */ 	lw	$t6,0x434($t0)
/*  f05f840:	8d0f0438 */ 	lw	$t7,0x438($t0)
/*  f05f844:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f05f848:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05f84c:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f05f850:	90430002 */ 	lbu	$v1,0x2($v0)
/*  f05f854:	1060002a */ 	beqz	$v1,.L0f05f900
/*  f05f858:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f85c:	0fc07934 */ 	jal	getNumChrs
/*  f05f860:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f864:	3c08800a */ 	lui	$t0,%hi(g_Vars)
/*  f05f868:	2443ffff */ 	addiu	$v1,$v0,-1
/*  f05f86c:	00602025 */ 	or	$a0,$v1,$zero
/*  f05f870:	0460004c */ 	bltz	$v1,.L0f05f9a4
/*  f05f874:	25089fc0 */ 	addiu	$t0,$t0,%lo(g_Vars)
/*  f05f878:	000318c0 */ 	sll	$v1,$v1,0x3
/*  f05f87c:	00641823 */ 	subu	$v1,$v1,$a0
/*  f05f880:	00031880 */ 	sll	$v1,$v1,0x2
/*  f05f884:	00641823 */ 	subu	$v1,$v1,$a0
/*  f05f888:	00031880 */ 	sll	$v1,$v1,0x2
/*  f05f88c:	00641821 */ 	addu	$v1,$v1,$a0
/*  f05f890:	3c058006 */ 	lui	$a1,%hi(g_Chrs)
/*  f05f894:	24a52988 */ 	addiu	$a1,$a1,%lo(g_Chrs)
/*  f05f898:	000318c0 */ 	sll	$v1,$v1,0x3
/*  f05f89c:	2407fbff */ 	addiu	$a3,$zero,-1025
/*  f05f8a0:	2406fffe */ 	addiu	$a2,$zero,-2
/*  f05f8a4:	8cb80000 */ 	lw	$t8,0x0($a1)
.L0f05f8a8:
/*  f05f8a8:	03031021 */ 	addu	$v0,$t8,$v1
/*  f05f8ac:	84590000 */ 	lh	$t9,0x0($v0)
/*  f05f8b0:	0722000f */ 	bltzl	$t9,.L0f05f8f0
/*  f05f8b4:	2463fc98 */ 	addiu	$v1,$v1,-872
/*  f05f8b8:	8c49001c */ 	lw	$t1,0x1c($v0)
/*  f05f8bc:	5120000c */ 	beqzl	$t1,.L0f05f8f0
/*  f05f8c0:	2463fc98 */ 	addiu	$v1,$v1,-872
/*  f05f8c4:	94440192 */ 	lhu	$a0,0x192($v0)
/*  f05f8c8:	308a0001 */ 	andi	$t2,$a0,0x1
/*  f05f8cc:	11400007 */ 	beqz	$t2,.L0f05f8ec
/*  f05f8d0:	00865824 */ 	and	$t3,$a0,$a2
/*  f05f8d4:	a44b0192 */ 	sh	$t3,0x192($v0)
/*  f05f8d8:	8cac0000 */ 	lw	$t4,0x0($a1)
/*  f05f8dc:	01831021 */ 	addu	$v0,$t4,$v1
/*  f05f8e0:	8c4d0018 */ 	lw	$t5,0x18($v0)
/*  f05f8e4:	01a77024 */ 	and	$t6,$t5,$a3
/*  f05f8e8:	ac4e0018 */ 	sw	$t6,0x18($v0)
.L0f05f8ec:
/*  f05f8ec:	2463fc98 */ 	addiu	$v1,$v1,-872
.L0f05f8f0:
/*  f05f8f0:	0463ffed */ 	bgezl	$v1,.L0f05f8a8
/*  f05f8f4:	8cb80000 */ 	lw	$t8,0x0($a1)
/*  f05f8f8:	1000002b */ 	beqz	$zero,.L0f05f9a8
/*  f05f8fc:	8d180438 */ 	lw	$t8,0x438($t0)
.L0f05f900:
/*  f05f900:	0fc07934 */ 	jal	getNumChrs
/*  f05f904:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05f908:	3c08800a */ 	lui	$t0,%hi(g_Vars)
/*  f05f90c:	2443ffff */ 	addiu	$v1,$v0,-1
/*  f05f910:	00602025 */ 	or	$a0,$v1,$zero
/*  f05f914:	04600023 */ 	bltz	$v1,.L0f05f9a4
/*  f05f918:	25089fc0 */ 	addiu	$t0,$t0,%lo(g_Vars)
/*  f05f91c:	000318c0 */ 	sll	$v1,$v1,0x3
/*  f05f920:	00641823 */ 	subu	$v1,$v1,$a0
/*  f05f924:	00031880 */ 	sll	$v1,$v1,0x2
/*  f05f928:	00641823 */ 	subu	$v1,$v1,$a0
/*  f05f92c:	00031880 */ 	sll	$v1,$v1,0x2
/*  f05f930:	00641821 */ 	addu	$v1,$v1,$a0
/*  f05f934:	3c040080 */ 	lui	$a0,0x80
/*  f05f938:	3c058006 */ 	lui	$a1,%hi(g_Chrs)
/*  f05f93c:	24a52988 */ 	addiu	$a1,$a1,%lo(g_Chrs)
/*  f05f940:	34840400 */ 	ori	$a0,$a0,0x400
/*  f05f944:	000318c0 */ 	sll	$v1,$v1,0x3
/*  f05f948:	8caf0000 */ 	lw	$t7,0x0($a1)
.L0f05f94c:
/*  f05f94c:	01e31021 */ 	addu	$v0,$t7,$v1
/*  f05f950:	84580000 */ 	lh	$t8,0x0($v0)
/*  f05f954:	07020011 */ 	bltzl	$t8,.L0f05f99c
/*  f05f958:	2463fc98 */ 	addiu	$v1,$v1,-872
/*  f05f95c:	8c59001c */ 	lw	$t9,0x1c($v0)
/*  f05f960:	5320000e */ 	beqzl	$t9,.L0f05f99c
/*  f05f964:	2463fc98 */ 	addiu	$v1,$v1,-872
/*  f05f968:	8c490018 */ 	lw	$t1,0x18($v0)
/*  f05f96c:	01245024 */ 	and	$t2,$t1,$a0
/*  f05f970:	5540000a */ 	bnezl	$t2,.L0f05f99c
/*  f05f974:	2463fc98 */ 	addiu	$v1,$v1,-872
/*  f05f978:	944b0192 */ 	lhu	$t3,0x192($v0)
/*  f05f97c:	356c0001 */ 	ori	$t4,$t3,0x1
/*  f05f980:	a44c0192 */ 	sh	$t4,0x192($v0)
/*  f05f984:	8cad0000 */ 	lw	$t5,0x0($a1)
/*  f05f988:	01a31021 */ 	addu	$v0,$t5,$v1
/*  f05f98c:	8c4e0018 */ 	lw	$t6,0x18($v0)
/*  f05f990:	35cf0400 */ 	ori	$t7,$t6,0x400
/*  f05f994:	ac4f0018 */ 	sw	$t7,0x18($v0)
/*  f05f998:	2463fc98 */ 	addiu	$v1,$v1,-872
.L0f05f99c:
/*  f05f99c:	0463ffeb */ 	bgezl	$v1,.L0f05f94c
/*  f05f9a0:	8caf0000 */ 	lw	$t7,0x0($a1)
.L0f05f9a4:
/*  f05f9a4:	8d180438 */ 	lw	$t8,0x438($t0)
.L0f05f9a8:
/*  f05f9a8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f05f9ac:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f05f9b0:	27190003 */ 	addiu	$t9,$t8,0x3
/*  f05f9b4:	ad190438 */ 	sw	$t9,0x438($t0)
/*  f05f9b8:	03e00008 */ 	jr	$ra
/*  f05f9bc:	00001025 */ 	or	$v0,$zero,$zero
);

//bool aiShowCutsceneChrs(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	struct chrdata *chr;
//	s32 i;
//
//	if (cmd[2]) {
//		// Show chrs
//		for (i = getNumChrs() - 1; i >= 0; i--) {
//			chr = &g_Chrs[i];
//
//			if (chr->chrnum >= 0 && chr->prop && (chr->hidden2 & 1)) {
//				chr->hidden2 = chr->hidden2 & ~1;
//				chr->chrflags = chr->chrflags & ~0x00000400;
//			}
//		}
//	} else {
//		// Hide chrs
//		for (i = getNumChrs() - 1; i >= 0; i--) {
//			chr = &g_Chrs[i];
//
//			if (chr->chrnum >= 0 && chr->prop && (chr->chrflags & 0x00800400) == 0) {
//				chr->hidden2 = chr->hidden2 | 1;
//				chr->chrflags = chr->chrflags | 0x00000400;
//			}
//		}
//	}
//
//	g_Vars.aioffset += 3;
//
//	return false;
//}

/**
 * @cmd 01d6
 */
bool aiMiscellaneous(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	s16 room_id = (cmd[3] | (cmd[2] << 8));
	s32 value = cmd[5];
	s32 i;

	switch (cmd[4]) {
	case 0:
		var8006ae18 = value;
		break;
	case 1:
		var8006ae1c = value;
		break;
	case 2:
		var8006ae20 = value;
		break;
	case 3:
		var8006ae24 = value;
		break;
	case 4:
		var8006ae28 = value;
		break;
	case 5:
		g_RoomPtrs[room_id].flags &= ~0x00004000;
		if (value) {
			g_RoomPtrs[room_id].flags |= 0x00004000;
		}
		break;
	case 6:
		g_RoomPtrs[room_id].flags &= ~0x00008000;
		if (value) {
			g_RoomPtrs[room_id].flags |= 0x00008000;
		}
		break;
	case 7:
		g_RoomPtrs[room_id].bitfield.b = value;
		break;
	case 8:
		g_RoomPtrs[room_id].unk4d = value;
		break;
	case 9:
		for (i = 1; i < g_Vars.roomcount; i++) {
			if (value) {
				g_RoomPtrs[i].flags |= 0x00004000;
			} else {
				g_RoomPtrs[i].flags &= ~0x00004000;
			}
		}
		break;
	case 10:
		func00010db0(value);
		break;
	case 11:
		func0001190c(room_id);
		break;
	case 12:
		func0f001a64(room_id, value);
		break;
	case 13:
		func00010de0(room_id);
		break;
	case 14:
		func000110bc(value);
		break;
	case 15:
		func000110ec(room_id);
		break;
	}

	g_Vars.aioffset += 6;

	return false;
}

/**
 * @cmd 01d7
 */
bool aiIfDistanceToTarget2LessThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) * 10.0f;

	if (chrGetDistanceToTarget2(g_Vars.chrdata) < distance) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 01d8
 */
bool aiIfDistanceToTarget2GreaterThan(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	f32 distance = (cmd[3] | (cmd[2] << 8)) * 10.0f;

	if (chrGetDistanceToTarget2(g_Vars.chrdata) > distance) {
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[4]);
	} else {
		g_Vars.aioffset += 5;
	}

	return false;
}

/**
 * @cmd 01d9
 */
GLOBAL_ASM(
glabel ai01d9
/*  f05fdd8:   3c05800a */     lui     $a1,%hi(g_Vars)
/*  f05fddc:   24a59fc0 */     addiu   $a1,$a1,%lo(g_Vars)
/*  f05fde0:   8cae0434 */     lw      $t6,0x434($a1)
/*  f05fde4:   8caf0438 */     lw      $t7,0x438($a1)
/*  f05fde8:   27bdffc8 */     addiu   $sp,$sp,-56
/*  f05fdec:   afbf001c */     sw      $ra,0x1c($sp)
/*  f05fdf0:   01cf1021 */     addu    $v0,$t6,$t7
/*  f05fdf4:   90580004 */     lbu     $t8,0x4($v0)
/*  f05fdf8:   90480005 */     lbu     $t0,0x5($v0)
/*  f05fdfc:   0018ca00 */     sll     $t9,$t8,0x8
/*  f05fe00:   03284825 */     or      $t1,$t9,$t0
/*  f05fe04:   a7a90032 */     sh      $t1,0x32($sp)
/*  f05fe08:   904a0006 */     lbu     $t2,0x6($v0)
/*  f05fe0c:   904c0007 */     lbu     $t4,0x7($v0)
/*  f05fe10:   000a5a00 */     sll     $t3,$t2,0x8
/*  f05fe14:   016c6825 */     or      $t5,$t3,$t4
/*  f05fe18:   afad002c */     sw      $t5,0x2c($sp)
/*  f05fe1c:   9043000a */     lbu     $v1,0xa($v0)
/*  f05fe20:   00037200 */     sll     $t6,$v1,0x8
/*  f05fe24:   01c37825 */     or      $t7,$t6,$v1
/*  f05fe28:   a7af002a */     sh      $t7,0x2a($sp)
/*  f05fe2c:   80580002 */     lb      $t8,0x2($v0)
/*  f05fe30:   afb80024 */     sw      $t8,0x24($sp)
/*  f05fe34:   90590008 */     lbu     $t9,0x8($v0)
/*  f05fe38:   a7b90022 */     sh      $t9,0x22($sp)
/*  f05fe3c:   0fc2556c */     jal     objFindByTagId
/*  f05fe40:   90440003 */     lbu     $a0,0x3($v0)
/*  f05fe44:   87a80022 */     lh      $t0,0x22($sp)
/*  f05fe48:   97a9002a */     lhu     $t1,0x2a($sp)
/*  f05fe4c:   8c470014 */     lw      $a3,0x14($v0)
/*  f05fe50:   8fa40024 */     lw      $a0,0x24($sp)
/*  f05fe54:   87a50032 */     lh      $a1,0x32($sp)
/*  f05fe58:   8fa6002c */     lw      $a2,0x2c($sp)
/*  f05fe5c:   afa80010 */     sw      $t0,0x10($sp)
/*  f05fe60:   0fc25010 */     jal     audioPlayFromProp
/*  f05fe64:   afa90014 */     sw      $t1,0x14($sp)
/*  f05fe68:   3c03800a */     lui     $v1,%hi(g_Vars)
/*  f05fe6c:   24639fc0 */     addiu   $v1,$v1,%lo(g_Vars)
/*  f05fe70:   8c6a0438 */     lw      $t2,0x438($v1)
/*  f05fe74:   8fbf001c */     lw      $ra,0x1c($sp)
/*  f05fe78:   27bd0038 */     addiu   $sp,$sp,0x38
/*  f05fe7c:   254b000b */     addiu   $t3,$t2,0xb
/*  f05fe80:   ac6b0438 */     sw      $t3,0x438($v1)
/*  f05fe84:   03e00008 */     jr      $ra
/*  f05fe88:   00001025 */     or      $v0,$zero,$zero
);

// Matches if channel argument to audioPlayFromProp is changed to s32,
// but this causes other code to mismatch.
//bool ai01d9(void)
//{
//	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//	s16 audio_id = cmd[5] | (cmd[4] << 8);
//	s32 volumemaybe = cmd[7] | (cmd[6] << 8);
//	u16 unk1 = cmd[10] | (cmd[10] << 8); // @bug: Using 10 twice
//	s32 channel = (s8)cmd[2];
//	s16 unk2 = cmd[8];
//	struct defaultobj *obj = objFindByTagId(cmd[3]);
//
//	audioPlayFromProp(channel, audio_id, volumemaybe, obj->prop, unk2, unk1);
//
//	g_Vars.aioffset += 11;
//
//	return false;
//}

/**
 * @cmd 01da
 */
bool ai01da(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	func0f16deb8(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01db
 */
bool aiChrKill(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	struct chrdata *chr = chrFindById(g_Vars.chrdata, cmd[2]);

	if (chr) {
		chr->actiontype = ACT_DEAD;
		chr->act_dead.unk038 = -1;
		chr->act_dead.unk02c = 0;
		chr->act_dead.unk030 = 0;
		chr->act_dead.unk034 = 0;
		chr->act_dead.unk03c = 0;
		chr->sleep = 0;
		chr->chrflags |= 0x04000000 | 0x00010000;
	}

	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01dc
 */
bool aiRemoveWeaponFromInventory(void)
{
	u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
	func0f111ea4(cmd[2]);
	g_Vars.aioffset += 3;

	return false;
}

/**
 * @cmd 01dd
 */
GLOBAL_ASM(
glabel ai01dd
/*  f05ffa0:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f05ffa4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f05ffa8:	0c012144 */ 	jal	func00048510
/*  f05ffac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f05ffb0:	00402825 */ 	or	$a1,$v0,$zero
/*  f05ffb4:	24040000 */ 	addiu	$a0,$zero,0x0
/*  f05ffb8:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05ffbc:	0c012bda */ 	jal	func0004af68
/*  f05ffc0:	24070040 */ 	addiu	$a3,$zero,0x40
/*  f05ffc4:	00402025 */ 	or	$a0,$v0,$zero
/*  f05ffc8:	00602825 */ 	or	$a1,$v1,$zero
/*  f05ffcc:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f05ffd0:	0c012b9a */ 	jal	func0004ae68
/*  f05ffd4:	24070bb8 */ 	addiu	$a3,$zero,0xbb8
/*  f05ffd8:	00402025 */ 	or	$a0,$v0,$zero
/*  f05ffdc:	0c0016cc */ 	jal	func00005b30
/*  f05ffe0:	00602825 */ 	or	$a1,$v1,$zero
/*  f05ffe4:	3c0e8008 */ 	lui	$t6,0x8008
/*  f05ffe8:	8dce40c4 */ 	lw	$t6,0x40c4($t6)
/*  f05ffec:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f05fff0:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f05fff4:	51c00008 */ 	beqzl	$t6,.L0f060018
/*  f05fff8:	8ce40434 */ 	lw	$a0,0x434($a3)
/*  f05fffc:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f060000:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f060004:	8cef0438 */ 	lw	$t7,0x438($a3)
/*  f060008:	25f80004 */ 	addiu	$t8,$t7,0x4
/*  f06000c:	10000009 */ 	beqz	$zero,.L0f060034
/*  f060010:	acf80438 */ 	sw	$t8,0x438($a3)
/*  f060014:	8ce40434 */ 	lw	$a0,0x434($a3)
.L0f060018:
/*  f060018:	8ce50438 */ 	lw	$a1,0x438($a3)
/*  f06001c:	00851021 */ 	addu	$v0,$a0,$a1
/*  f060020:	0fc13583 */ 	jal	chraiGoToLabel
/*  f060024:	90460003 */ 	lbu	$a2,0x3($v0)
/*  f060028:	3c07800a */ 	lui	$a3,%hi(g_Vars)
/*  f06002c:	24e79fc0 */ 	addiu	$a3,$a3,%lo(g_Vars)
/*  f060030:	ace20438 */ 	sw	$v0,0x438($a3)
.L0f060034:
/*  f060034:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f060038:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f06003c:	00001025 */ 	or	$v0,$zero,$zero
/*  f060040:	03e00008 */ 	jr	$ra
/*  f060044:	00000000 */ 	sll	$zero,$zero,0x0
);

/**
 * @cmd 01de
 */
GLOBAL_ASM(
glabel ai01de
/*  f060048:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f06004c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f060050:	8c6e0318 */ 	lw	$t6,0x318($v1)
/*  f060054:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f060058:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f06005c:	15c0000d */ 	bnez	$t6,.L0f060094
/*  f060060:	3c0f800a */ 	lui	$t7,0x800a
/*  f060064:	81f8dfeb */ 	lb	$t8,-0x2015($t7)
/*  f060068:	0703000b */ 	bgezl	$t8,.L0f060098
/*  f06006c:	8c790438 */ 	lw	$t9,0x438($v1)
/*  f060070:	8c640434 */ 	lw	$a0,0x434($v1)
/*  f060074:	8c650438 */ 	lw	$a1,0x438($v1)
/*  f060078:	00851021 */ 	addu	$v0,$a0,$a1
/*  f06007c:	0fc13583 */ 	jal	chraiGoToLabel
/*  f060080:	90460002 */ 	lbu	$a2,0x2($v0)
/*  f060084:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f060088:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f06008c:	10000004 */ 	beqz	$zero,.L0f0600a0
/*  f060090:	ac620438 */ 	sw	$v0,0x438($v1)
.L0f060094:
/*  f060094:	8c790438 */ 	lw	$t9,0x438($v1)
.L0f060098:
/*  f060098:	27280003 */ 	addiu	$t0,$t9,0x3
/*  f06009c:	ac680438 */ 	sw	$t0,0x438($v1)
.L0f0600a0:
/*  f0600a0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0600a4:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f0600a8:	00001025 */ 	or	$v0,$zero,$zero
/*  f0600ac:	03e00008 */ 	jr	$ra
/*  f0600b0:	00000000 */ 	sll	$zero,$zero,0x0
);

// Mismatch due to different temporary registers
//bool ai01de(void)
//{
//	if (g_Vars.unk000318 == 0 && (s8)var8009dfe8[3] < 0) {
//		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
//		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
//	} else {
//		g_Vars.aioffset += 3;
//	}
//
//	return false;
//}

/**
 * @cmd 01e0
 */
bool ai01e0(void)
{
	if (g_Vars.chrdata && g_Vars.chrdata->prop) {
		u32 index = ((s32)g_Vars.chrdata->prop - (s32)g_Vars.props) / 0x48;
		func0f020f90(index);
	}

	g_Vars.aioffset += 2;

	return false;
}

/**
 * @cmd 01b4
 */
bool ai01b4(void)
{
	if (g_Vars.chrdata && g_Vars.chrdata->prop &&
			func0f01f264(g_Vars.chrdata, &g_Vars.chrdata->prop->pos, &g_Vars.chrdata->prop->room, 0, 0)) {
		u8 *cmd = g_Vars.ailist + g_Vars.aioffset;
		g_Vars.aioffset = chraiGoToLabel(g_Vars.ailist, g_Vars.aioffset, cmd[2]);
	} else {
		g_Vars.aioffset += 3;
	}

	return false;
}

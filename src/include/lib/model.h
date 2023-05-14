#ifndef _IN_LIB_MODEL_H
#define _IN_LIB_MODEL_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

extern bool (*var8005efc4)(struct model *model, struct modelnode *node);
extern struct gfxvtx *(*g_ModelVtxAllocatorFunc)(s32 numvertices);
extern void (*g_ModelJointPositionedFunc)(s32 mtxindex, Mtxf *mtx);

bool modelasm00018680(struct modelrenderdata* renderdata, struct model* model); 
void modelSetDistanceScale(f32 value);
void modelSetVtxAllocatorFunc(struct gfxvtx *(*fn)(s32 numvertices));
s32 modelFindNodeMtxIndex(struct modelnode *node, s32 arg1);
Mtxf *modelFindNodeMtx(struct model *model, struct modelnode *node, s32 arg2);
Mtxf *modelGetRootMtx(struct model *model);
struct modelnode *modelFindNodeByMtxIndex(struct model *model, s32 mtxindex);
struct modelnode *modelNodeFindMtxNode(struct modelnode *node);
struct modelnode *modelNodeFindParentMtxNode(struct modelnode *node);
struct modelnode *modelNodeFindChildMtxNode(struct modelnode *node);
struct modelnode *modelNodeFindChildOrParentMtxNode(struct modelnode *node);
struct modelnode *modelGetPart(struct modeldef *arg0, s32 partnum);
void *modelGetPartRodata(struct modeldef *modeldef, s32 partnum);
f32 modelGetScreenDistance(struct model *model);
void *modelGetNodeRwData(struct model *model, struct modelnode *node);
void modelNodeGetPosition(struct model *model, struct modelnode *node, struct coord *pos);
void modelNodeSetPosition(struct model *model, struct modelnode *node, struct coord *pos);
void modelGetRootPosition(struct model *model, struct coord *pos);
void modelSetRootPosition(struct model *model, struct coord *pos);
void modelNodeGetModelRelativePosition(struct model *model, struct modelnode *node, struct coord *pos);
f32 modelGetChrRotY(struct model *model);
void modelSetChrRotY(struct model *model, f32 angle);
void modelSetScale(struct model *model, f32 scale);
void modelSetAnimScale(struct model *model, f32 scale);
f32 modelGetEffectiveScale(struct model *model);
void modelTweenPos(struct coord *pos, struct coord *to, f32 frac);
f32 modelTweenRotAxis(f32 arg0, f32 angle, f32 frac);
void modelTweenRot(struct coord *arg0, struct coord *arg1, f32 mult);
void modelUpdateChrInfo(struct model *model, struct modelnode *node);
void modelUpdateInfo(struct model *model);
void modelUpdateChrNodeMtx(struct modelrenderdata *arg0, struct model *model, struct modelnode *node);
void modelPositionJointUsingVecRot(struct modelrenderdata *renderdata, struct model *model, struct modelnode *node, struct coord *rot, struct coord *pos, bool allowscale, struct coord *arg6);
void modelPositionJointUsingQuatRot(struct modelrenderdata *renderdata, struct model *model, struct modelnode *node, f32 rot[4], struct coord *pos, struct coord *arg5);
void modelUpdatePositionNodeMtx(struct modelrenderdata *arg0, struct model *model, struct modelnode *node);
void modelUpdatePositionHeldNodeMtx(struct modelrenderdata *arg0, struct model *model, struct modelnode *node);
void modelUpdateDistanceRelations(struct model *model, struct modelnode *node);
void modelApplyDistanceRelations(struct model *model, struct modelnode *node);
void modelApplyToggleRelations(struct model *model, struct modelnode *node);
void modelApplyHeadRelations(struct model *model, struct modelnode *node);
void modelApplyReorderRelationsByArg(struct modelnode *basenode, bool reverse);
void modelApplyReorderRelations(struct model *model, struct modelnode *node);
void modelUpdateReorderRelations(struct model *model, struct modelnode *node);
void modelUpdateRelationsQuick(struct model *model, struct modelnode *node);
void modelUpdateRelations(struct model *model);
void modelUpdateMatrices(struct modelrenderdata *arg0, struct model *model);
void modelSetMatrices(struct modelrenderdata *arg0, struct model *model);
void modelSetMatricesWithAnim(struct modelrenderdata *renderdata, struct model *model);
s16 modelGetAnimNum(struct model *model);
bool modelIsFlipped(struct model *model);
f32 modelGetCurAnimFrame(struct model *model);
f32 modelGetAnimEndFrame(struct model *model);
s32 modelGetNumAnimFrames(struct model *model);
f32 modelGetAnimSpeed(struct model *model);
f32 modelGetAbsAnimSpeed(struct model *model);
s32 modelConstrainOrWrapAnimFrame(s32 frame, s16 animnum, f32 endframe);
void modelCopyAnimForMerge(struct model *model, f32 merge);
void modelSetAnimation2(struct model *model, s16 animnum, s32 flip, f32 fstartframe, f32 speed, f32 merge);
bool modelIsAnimMerging(struct model *model);
void modelSetAnimationWithMerge(struct model *model, s16 animnum, u32 flip, f32 startframe, f32 speed, f32 timemerge, bool domerge);
void modelSetAnimation(struct model *model, s16 animnum, s32 flip, f32 fstartframe, f32 speed, f32 merge);
void modelCopyAnimData(struct model *src, struct model *dst);
void modelSetAnimLooping(struct model *model, f32 loopframe, f32 loopmerge);
void modelSetAnimEndFrame(struct model *model, f32 endframe);
void modelSetAnimFlipFunction(struct model *model, void *callback);
void modelSetAnimSpeed(struct model *model, f32 speed, f32 startframe);
void modelSetAnimSpeedAuto(struct model *model, f32 arg1, f32 startframe);
void modelSetAnimPlaySpeed(struct model *model, f32 speed, f32 frame);
void modelSetAnim70(struct model *model, void *callback);
void modelSetAnimFrame(struct model *model, f32 startframe);
void modelSetAnimFrame2(struct model *model, f32 arg1, f32 arg2);
void modelSetAnimMergingEnabled(bool value);
bool modelIsAnimMergingEnabled(void);
void modelSetAnimFrame2WithChrStuff(struct model *model, f32 frame, f32 arg2, f32 frame2, f32 arg4);
void modelTickAnimQuarterSpeed(struct model *model, s32 lvupdate240, bool arg2);
void modelTickAnim(struct model *model, s32 lvupdate240, bool arg2);
void modelApplyRenderModeType1(struct modelrenderdata *renderdata);
void modelApplyRenderModeType3(struct modelrenderdata *renderdata, bool arg1);
void modelApplyRenderModeType4(struct modelrenderdata *renderdata, bool arg1);
void modelApplyRenderModeType2(struct modelrenderdata *renderdata);
void modelApplyCullMode(struct modelrenderdata *renderdata);
void modelRenderNodeGundl(struct modelrenderdata *renderdata, struct model *model, struct modelnode *node);
void modelRenderNodeDl(struct modelrenderdata *renderdata, struct model *model, struct modelnode *node);
void modelRenderNodeStarGunfire(struct modelrenderdata *renderdata, struct modelnode *node);
void modelSelectTexture(struct modelrenderdata *renderdata, struct textureconfig *tconfig, s32 arg2);
void modelRenderNodeChrGunfire(struct modelrenderdata *renderdata, struct model *model, struct modelnode *node);
void modelRender(struct modelrenderdata *renderdata, struct model *model);
bool modelTestBboxNodeForHit(struct modelrodata_bbox *bbox, Mtxf *mtx, struct coord *arg2, struct coord *arg3);
s32 modelTestForHit(struct model *model, struct coord *arg1, struct coord *arg2, struct modelnode **startnode);
void modelPromoteNodeOffsetsToPointers(struct modelnode *node, u32 vma, u32 fileramaddr);
void modelPromoteOffsetsToPointers(struct modeldef *modeldef, u32 arg1, uintptr_t arg2);
s32 modelCalculateRwDataIndexes(struct modelnode *node);
void modelAllocateRwData(struct modeldef *modeldef);
void modelInitRwData(struct model *model, struct modelnode *node);
void modelInit(struct model *model, struct modeldef *modeldef, union modelrwdata **rwdatas, bool resetanim);
void animInit(struct anim *anim);
void modelAttachHead(struct model *model, struct modeldef *arg1, struct modelnode *node, struct modeldef *arg3);
void modelIterateDisplayLists(struct modeldef *modeldef, struct modelnode **nodeptr, Gfx **gdlptr);
void modelNodeReplaceGdl(struct modeldef *modeldef, struct modelnode *node, Gfx *find, Gfx *replacement);

void modelByteSwapModel(struct modeldef* modeldef, u32 baseAddr);


#endif

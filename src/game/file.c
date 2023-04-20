#include <ultra64.h>
#include "constants.h"
#include "game/file.h"
#include "game/stubs/game_175f50.h"
#include "bss.h"
#include "lib/dma.h"
#include "lib/memp.h"
#include "lib/rng.h"
#include "lib/rzip.h"
#include "data.h"
#include "types.h"

/**
 * This file contains functions relating to ROM asset files.
 *
 * Asset files include:
 * - BG segment files
 * - Lang files
 * - MP3 files
 * - Model files
 * - Pad files
 * - Stage setup files
 * - Tile files
 *
 * The following are not implemented as asset files and are therefore not
 * managed here:
 * - Animations
 * - Music
 * - Textures
 *
 * The file system does not keep track of which files are loaded, nor does it
 * maintain a list of pointers to loaded file data. All load operations either
 * require the caller to pass a destination pointer, or the file system can make
 * its own allocation and return the pointer. It does not store the pointer in
 * either case.
 *
 * Most file types are compressed. This is abstracted away, so from the caller's
 * perspect they just call a load function and they receive an inflated file.
 * Exceptions to this are:
 * - BG files, which contain multiple compressed parts. The caller uses
 *   fileLoadPartToAddr which loads a slice of the file without inflation.
 * - MP3 files, which are not compressed. The caller retrieves the ROM start and
 *   end addresses from the file system, then gives that to the MP3 system which
 *   does its own DMA operations.
 *
 * It is likely that during development files could be alternatively loaded
 * from the host computer. This code no longer exists, but there are some unused
 * functions that support this theory.
 */

void *_file_bg_sev_seg;
void *_file_bg_silo_seg;
void *_file_bg_stat_seg;
void *_file_bg_arec_seg;
void *_file_bg_arch_seg;
void *_file_bg_tra_seg;
void *_file_bg_dest_seg;
void *_file_bg_sevb_seg;
void *_file_bg_azt_seg;
void *_file_bg_pete_seg;
void *_file_bg_depo_seg;
void *_file_bg_ref_seg;
void *_file_bg_cryp_seg;
void *_file_bg_dam_seg;
void *_file_bg_ark_seg;
void *_file_bg_run_seg;
void *_file_bg_sevx_seg;
void *_file_bg_jun_seg;
void *_file_bg_dish_seg;
void *_file_bg_cave_seg;
void *_file_bg_cat_seg;
void *_file_bg_crad_seg;
void *_file_bg_sho_seg;
void *_file_bg_eld_seg;
void *_file_bg_imp_seg;
void *_file_bg_ash_seg;
void *_file_bg_lue_seg;
void *_file_bg_ame_seg;
void *_file_bg_rit_seg;
void *_file_bg_oat_seg;
void *_file_bg_ear_seg;
void *_file_bg_lee_seg;
void *_file_bg_lip_seg;
void *_file_bg_len_seg;
void *_file_bg_wax_seg;
void *_file_bg_pam_seg;
void *_file_bg_uff_seg;
void *_file_bg_old_seg;
void *_file_bg_ate_seg;
void *_file_bg_lam_seg;
void *_file_bg_mp1_seg;
void *_file_bg_mp2_seg;
void *_file_bg_mp3_seg;
void *_file_bg_mp4_seg;
void *_file_bg_mp5_seg;
void *_file_bg_mp6_seg;
void *_file_bg_mp7_seg;
void *_file_bg_mp8_seg;
void *_file_bg_mp9_seg;
void *_file_bg_mp10_seg;
void *_file_bg_mp11_seg;
void *_file_bg_mp12_seg;
void *_file_bg_mp13_seg;
void *_file_bg_mp14_seg;
void *_file_bg_mp15_seg;
void *_file_bg_mp16_seg;
void *_file_bg_mp17_seg;
void *_file_bg_mp18_seg;
void *_file_bg_mp19_seg;
void *_file_bg_mp20_seg;
void *_file_ob_mid_seg;
void *_file_Ca51guardZ;
void *_file_Carea51guardZ;
void *_file_CcarringtonZ;
void *_file_CcassandraZ;
void *_file_Cdark_combatZ;
void *_file_Cdark_frockZ;
void *_file_Cdark_trenchZ;
void *_file_CddshockZ;
void *_file_Cdd_secguardZ;
void *_file_CdjbondZ;
void *_file_CdrcarrollZ;
void *_file_CelvisZ;
void *_file_Celvis1Z;
void *_file_CeyespyZ;
void *_file_Cfem_guardZ;
void *_file_ClabtechZ;
void *_file_CmrblondeZ;
void *_file_CofficeworkerZ;
void *_file_Cofficeworker2Z;
void *_file_CoverallZ;
void *_file_CsecretaryZ;
void *_file_CskedarZ;
void *_file_CstripesZ;
void *_file_CtestchrZ;
void *_file_CthekingZ;
void *_file_CtrentZ;
void *_file_GcartblueZ;
void *_file_GcartridgeZ;
void *_file_GcartrifleZ;
void *_file_GcartshellZ;
void *_file_GjoypadZ;
void *_file_Pa51_crate1Z;
void *_file_Pa51_crate2Z;
void *_file_Pa51_crate3Z;
void *_file_Pa51_exp1Z;
void *_file_Pa51_exp2Z;
void *_file_Pa51_horiz_door_botZ;
void *_file_Pa51_horiz_door_glZ;
void *_file_Pa51_horiz_door_secretZ;
void *_file_Pa51_horiz_door_topZ;
void *_file_Pa51_lift_controlZ;
void *_file_Pa51_lift_hangarZ;
void *_file_Pa51_lift_storeZ;
void *_file_Pa51_lift_thinwallZ;
void *_file_Pa51_unexp1Z;
void *_file_Pa51_unexp2Z;
void *_file_Pa51_unexp3Z;
void *_file_Pa51_vert_door_leftZ;
void *_file_Pa51_vert_door_rightZ;
void *_file_Pa51_vert_door_stZ;
void *_file_Pa51boardZ;
void *_file_Pa51chairZ;
void *_file_Pa51deskentZ;
void *_file_Pa51divideZ;
void *_file_Pa51screenZ;
void *_file_Pa51tableZ;
void *_file_Pa51trolleyZ;
void *_file_Pa51wastebinZ;
void *_file_Paivillabot1Z;
void *_file_Paivillabot2Z;
void *_file_Paivillabot3Z;
void *_file_Paivilladoor1Z;
void *_file_Paivilladoor2aZ;
void *_file_Paivilladoor4Z;
void *_file_PaivillawindmillZ;
void *_file_Pal_airlockZ;
void *_file_Pal_dockliftZ;
void *_file_Paldoor_lZ;
void *_file_Paldoor_rZ;
void *_file_Pborg_crateZ;
void *_file_PcaseZ;
void *_file_Pch_shutter1Z;
void *_file_PchrbriefcaseZ;
void *_file_PchrbugZ;
void *_file_PchrdatathiefZ;
void *_file_Pcryptdoor1bZ;
void *_file_Pdd_ac_expZ;
void *_file_Pdd_ac_unexpZ;
void *_file_Pdd_acbot_expZ;
void *_file_Pdd_acbot_unexpZ;
void *_file_Pdd_bannerZ;
void *_file_Pdd_chairZ;
void *_file_Pdd_decodoorZ;
void *_file_Pdd_deskZ;
void *_file_Pdd_fanroofZ;
void *_file_Pdd_fanwallZ;
void *_file_Pdd_hovcabZ;
void *_file_Pdd_hovcarZ;
void *_file_Pdd_hovcopZ;
void *_file_Pdd_hovercopterZ;
void *_file_Pdd_hovmotoZ;
void *_file_Pdd_hovtruckZ;
void *_file_Pdd_lab_cautionZ;
void *_file_Pdd_lab_cautiontopZ;
void *_file_Pdd_lab_door_bsZ;
void *_file_Pdd_lab_door_secZ;
void *_file_Pdd_lab_door_windZ;
void *_file_Pdd_lab_hazardZ;
void *_file_Pdd_lab_restrictedZ;
void *_file_Pdd_lab_sector2botZ;
void *_file_Pdd_lab_sector2topZ;
void *_file_Pdd_lab_sector3Z;
void *_file_Pdd_lab_sector3topZ;
void *_file_Pdd_lab_sector3windZ;
void *_file_Pdd_lab_sector4topZ;
void *_file_Pdd_liftdoorZ;
void *_file_Pdd_liftrZ;
void *_file_Pdd_officedoorZ;
void *_file_Pdd_plantrubberZ;
void *_file_Pdd_plantspiderZ;
void *_file_Pdd_plantspikeZ;
void *_file_Pdd_redarmZ;
void *_file_Pdd_redsofaZ;
void *_file_Pdd_secretdoorZ;
void *_file_Pdd_secretdoor2Z;
void *_file_Pdd_servicedoorZ;
void *_file_Pdd_stonedeskZ;
void *_file_Pdd_vertblindZ;
void *_file_Pdd_winddoorZ;
void *_file_Pdd_windowZ;
void *_file_PddjumpshipZ;
void *_file_Pdoor1a_G5Z;
void *_file_Pdoor1atri_G5Z;
void *_file_Pdoor1b_G5Z;
void *_file_Pdoor2_G5Z;
void *_file_Pdoor2a_G5Z;
void *_file_Pdoor4a_G5Z;
void *_file_Pdoor4b_G5Z;
void *_file_Pdoor_rollertrainZ;
void *_file_PdoorconsoleZ;
void *_file_Pdr_caroll_doorZ;
void *_file_Pdr_caroll_door_baseZ;
void *_file_Pdr_caroll_door_bleftZ;
void *_file_Pdr_caroll_door_bmainZ;
void *_file_Pdr_caroll_door_brightZ;
void *_file_Pdr_caroll_door_leftZ;
void *_file_Pdr_caroll_door_mainZ;
void *_file_Pdr_caroll_door_rightZ;
void *_file_PdropshipZ;
void *_file_PdumpsterZ;
void *_file_PexplosionbitZ;
void *_file_PflagZ;
void *_file_Pg5_escdoordownZ;
void *_file_Pg5_escdoordownboomZ;
void *_file_Pg5_escdoorupZ;
void *_file_Pg5_escdoorupboomZ;
void *_file_Pg5_mainframeZ;
void *_file_Pg5safedoorZ;
void *_file_Pg5carliftdoorZ;
void *_file_PgoldeneyelogoZ;
void *_file_PhooverbotZ;
void *_file_PhovbikeZ;
void *_file_PhoverbedZ;
void *_file_Phovercrate1Z;
void *_file_PlasdoorZ;
void *_file_PmarkerZ;
void *_file_Pmedlabwin1Z;
void *_file_Pmedlabwin2Z;
void *_file_PmodemboxZ;
void *_file_PnintendologoZ;
void *_file_Pnlogo2Z;
void *_file_Pnlogo3Z;
void *_file_PnlogoZ;
void *_file_Ppc1Z;
void *_file_PpdfourZ;
void *_file_PpdoneZ;
void *_file_PpdthreeZ;
void *_file_PpdtwoZ;
void *_file_PperfectdarkZ;
void *_file_PpolicecarZ;
void *_file_PravineliftZ;
void *_file_PropeZ;
void *_file_Psk_cryopod1_botZ;
void *_file_Psk_cryopod1_topZ;
void *_file_Psk_door1Z;
void *_file_Psk_fighter1Z;
void *_file_Psk_hangardoor_botZ;
void *_file_Psk_hangardoor_topZ;
void *_file_Psk_ship_door1Z;
void *_file_Psk_ship_holo1Z;
void *_file_Psk_ship_holo2Z;
void *_file_Psk_ship_hulldoor1Z;
void *_file_Psk_ship_hulldoor2Z;
void *_file_Psk_ship_hulldoor3Z;
void *_file_Psk_ship_hulldoor4Z;
void *_file_Psk_under_generatorZ;
void *_file_Psk_under_transZ;
void *_file_Pskcrev_exp1Z;
void *_file_Pskcrev_unexp1Z;
void *_file_Psktnl_exp1Z;
void *_file_Psktnl_unexp1Z;
void *_file_PtaxicabZ;
void *_file_PtesterbotZ;
void *_file_PtestobjZ;
void *_file_PtvscreenZ;
void *_file_PwindowZ;
void *_file_Ump_setupameZ;
void *_file_Ump_setuparchZ;
void *_file_Ump_setuparecZ;
void *_file_Ump_setuparkZ;
void *_file_Ump_setupashZ;
void *_file_Ump_setupaztZ;
void *_file_Ump_setupcatZ;
void *_file_Ump_setupcaveZ;
void *_file_Ump_setupcradZ;
void *_file_Ump_setupcrypZ;
void *_file_Ump_setupdamZ;
void *_file_Ump_setupdepoZ;
void *_file_Ump_setupdestZ;
void *_file_Ump_setupdishZ;
void *_file_Ump_setupearZ;
void *_file_Ump_setupeldZ;
void *_file_Ump_setupimpZ;
void *_file_Ump_setupjunZ;
void *_file_Ump_setupleeZ;
void *_file_Ump_setuplenZ;
void *_file_Ump_setuplipZ;
void *_file_Ump_setuplueZ;
void *_file_Ump_setupoatZ;
void *_file_Ump_setuppamZ;
void *_file_Ump_setuppeteZ;
void *_file_Ump_setuprefZ;
void *_file_Ump_setupritZ;
void *_file_Ump_setuprunZ;
void *_file_Ump_setupsevZ;
void *_file_Ump_setupsevbZ;
void *_file_Ump_setupsevxZ;
void *_file_Ump_setupshoZ;
void *_file_Ump_setupsiloZ;
void *_file_Ump_setupstatZ;
void *_file_Ump_setuptraZ;
void *_file_Ump_setupwaxZ;
void *_file_UsetupameZ;
void *_file_UsetuparchZ;
void *_file_UsetuparecZ;
void *_file_UsetuparkZ;
void *_file_UsetupashZ;
void *_file_UsetupaztZ;
void *_file_UsetupcatZ;
void *_file_UsetupcaveZ;
void *_file_UsetupcradZ;
void *_file_UsetupcrypZ;
void *_file_UsetupdamZ;
void *_file_UsetupdepoZ;
void *_file_UsetupdestZ;
void *_file_UsetupdishZ;
void *_file_UsetupearZ;
void *_file_UsetupeldZ;
void *_file_UsetupimpZ;
void *_file_UsetupjunZ;
void *_file_UsetupleeZ;
void *_file_UsetuplenZ;
void *_file_UsetuplipZ;
void *_file_UsetuplueZ;
void *_file_UsetupoatZ;
void *_file_UsetuppamZ;
void *_file_UsetuppeteZ;
void *_file_UsetuprefZ;
void *_file_UsetupritZ;
void *_file_UsetuprunZ;
void *_file_UsetupsevZ;
void *_file_UsetupsevbZ;
void *_file_UsetupsevxZ;
void *_file_UsetupsevxbZ;
void *_file_UsetupshoZ;
void *_file_UsetupsiloZ;
void *_file_UsetupstatZ;
void *_file_UsetuptraZ;
void *_file_UsetupwaxZ;
void *_file_bg_ame_padsZ;
void *_file_bg_ame_tilesZ;
void *_file_bg_arch_padsZ;
void *_file_bg_arch_tilesZ;
void *_file_bg_arec_padsZ;
void *_file_bg_arec_tilesZ;
void *_file_bg_ark_padsZ;
void *_file_bg_ark_tilesZ;
void *_file_bg_ash_padsZ;
void *_file_bg_ash_tilesZ;
void *_file_bg_azt_padsZ;
void *_file_bg_azt_tilesZ;
void *_file_bg_cat_padsZ;
void *_file_bg_cat_tilesZ;
void *_file_bg_cave_padsZ;
void *_file_bg_cave_tilesZ;
void *_file_bg_crad_padsZ;
void *_file_bg_crad_tilesZ;
void *_file_bg_cryp_padsZ;
void *_file_bg_cryp_tilesZ;
void *_file_bg_dam_padsZ;
void *_file_bg_dam_tilesZ;
void *_file_bg_depo_padsZ;
void *_file_bg_depo_tilesZ;
void *_file_bg_dest_padsZ;
void *_file_bg_dest_tilesZ;
void *_file_bg_dish_padsZ;
void *_file_bg_dish_tilesZ;
void *_file_bg_ear_padsZ;
void *_file_bg_ear_tilesZ;
void *_file_bg_eld_padsZ;
void *_file_bg_eld_tilesZ;
void *_file_bg_imp_padsZ;
void *_file_bg_imp_tilesZ;
void *_file_bg_jun_padsZ;
void *_file_bg_jun_tilesZ;
void *_file_bg_lee_padsZ;
void *_file_bg_lee_tilesZ;
void *_file_bg_len_padsZ;
void *_file_bg_len_tilesZ;
void *_file_bg_lip_padsZ;
void *_file_bg_lip_tilesZ;
void *_file_bg_lue_padsZ;
void *_file_bg_lue_tilesZ;
void *_file_bg_oat_padsZ;
void *_file_bg_oat_tilesZ;
void *_file_bg_pam_padsZ;
void *_file_bg_pam_tilesZ;
void *_file_bg_pete_padsZ;
void *_file_bg_pete_tilesZ;
void *_file_bg_ref_padsZ;
void *_file_bg_ref_tilesZ;
void *_file_bg_rit_padsZ;
void *_file_bg_rit_tilesZ;
void *_file_bg_run_padsZ;
void *_file_bg_run_tilesZ;
void *_file_bg_sev_padsZ;
void *_file_bg_sev_tilesZ;
void *_file_bg_sevb_padsZ;
void *_file_bg_sevb_tilesZ;
void *_file_bg_sevx_padsZ;
void *_file_bg_sevx_tilesZ;
void *_file_bg_sho_padsZ;
void *_file_bg_sho_tilesZ;
void *_file_bg_silo_padsZ;
void *_file_bg_silo_tilesZ;
void *_file_bg_stat_padsZ;
void *_file_bg_stat_tilesZ;
void *_file_bg_tra_padsZ;
void *_file_bg_tra_tilesZ;
void *_file_bg_wax_padsZ;
void *_file_bg_wax_tilesZ;
void *_file_GtestgunZ;
void *_file_Cdd_labtechZ;
void *_file_Pcctv_pdZ;
void *_file_PcomhubZ;
void *_file_PquadpodZ;
void *_file_Ppd_consoleZ;
void *_file_CconneryZ;
void *_file_CmooreZ;
void *_file_CdaltonZ;
void *_file_Cheaddark_combatZ;
void *_file_CheadelvisZ;
void *_file_CheadrossZ;
void *_file_CheadcarringtonZ;
void *_file_CheadmrblondeZ;
void *_file_CheadtrentZ;
void *_file_CheadddshockZ;
void *_file_CheadgrahamZ;
void *_file_Cheaddark_frockZ;
void *_file_CheadsecretaryZ;
void *_file_CheadcassandraZ;
void *_file_CheadthekingZ;
void *_file_Cheadfem_guardZ;
void *_file_CheadjonZ;
void *_file_Plift_platformZ;
void *_file_Pdd_grateZ;
void *_file_PlightswitchZ;
void *_file_PblastshieldZ;
void *_file_Plightswitch2Z;
void *_file_Pdd_accessdoorupZ;
void *_file_Pdd_accessdoordnZ;
void *_file_Cdark_rippedZ;
void *_file_Cheadmark2Z;
void *_file_CheadchristZ;
void *_file_Plab_containerZ;
void *_file_Plab_chairZ;
void *_file_Plab_tableZ;
void *_file_Plab_microscopeZ;
void *_file_Plab_mainframeZ;
void *_file_Pdd_labdoorZ;
void *_file_Pdd_lab_doortopZ;
void *_file_Pmulti_ammo_crateZ;
void *_file_CheadrussZ;
void *_file_CheadgreyZ;
void *_file_CheaddarlingZ;
void *_file_Cdd_guardZ;
void *_file_CheadrobertZ;
void *_file_Cdd_shockZ;
void *_file_CheadbeauZ;
void *_file_PchrchainZ;
void *_file_Cdd_shock_infZ;
void *_file_Cheadfem_guard2Z;
void *_file_ProofgunZ;
void *_file_PtdoorZ;
void *_file_CbiotechZ;
void *_file_CfbiguyZ;
void *_file_PgroundgunZ;
void *_file_CciaguyZ;
void *_file_Ca51trooperZ;
void *_file_CheadbrianZ;
void *_file_CheadjamieZ;
void *_file_Cheadduncan2Z;
void *_file_CheadbiotechZ;
void *_file_UsetupuffZ;
void *_file_Ump_setupuffZ;
void *_file_bg_uff_padsZ;
void *_file_bg_uff_tilesZ;
void *_file_UsetupoldZ;
void *_file_Ump_setupoldZ;
void *_file_bg_old_padsZ;
void *_file_bg_old_tilesZ;
void *_file_UsetupateZ;
void *_file_Ump_setupateZ;
void *_file_bg_ate_padsZ;
void *_file_bg_ate_tilesZ;
void *_file_UsetuplamZ;
void *_file_Ump_setuplamZ;
void *_file_bg_lam_padsZ;
void *_file_bg_lam_tilesZ;
void *_file_Usetupmp1Z;
void *_file_Ump_setupmp1Z;
void *_file_bg_mp1_padsZ;
void *_file_bg_mp1_tilesZ;
void *_file_Usetupmp2Z;
void *_file_Ump_setupmp2Z;
void *_file_bg_mp2_padsZ;
void *_file_bg_mp2_tilesZ;
void *_file_Usetupmp3Z;
void *_file_Ump_setupmp3Z;
void *_file_bg_mp3_padsZ;
void *_file_bg_mp3_tilesZ;
void *_file_Usetupmp4Z;
void *_file_Ump_setupmp4Z;
void *_file_bg_mp4_padsZ;
void *_file_bg_mp4_tilesZ;
void *_file_Usetupmp5Z;
void *_file_Ump_setupmp5Z;
void *_file_bg_mp5_padsZ;
void *_file_bg_mp5_tilesZ;
void *_file_Usetupmp6Z;
void *_file_Ump_setupmp6Z;
void *_file_bg_mp6_padsZ;
void *_file_bg_mp6_tilesZ;
void *_file_Usetupmp7Z;
void *_file_Ump_setupmp7Z;
void *_file_bg_mp7_padsZ;
void *_file_bg_mp7_tilesZ;
void *_file_Usetupmp8Z;
void *_file_Ump_setupmp8Z;
void *_file_bg_mp8_padsZ;
void *_file_bg_mp8_tilesZ;
void *_file_Usetupmp9Z;
void *_file_Ump_setupmp9Z;
void *_file_bg_mp9_padsZ;
void *_file_bg_mp9_tilesZ;
void *_file_Usetupmp10Z;
void *_file_Ump_setupmp10Z;
void *_file_bg_mp10_padsZ;
void *_file_bg_mp10_tilesZ;
void *_file_Usetupmp11Z;
void *_file_Ump_setupmp11Z;
void *_file_bg_mp11_padsZ;
void *_file_bg_mp11_tilesZ;
void *_file_Usetupmp12Z;
void *_file_Ump_setupmp12Z;
void *_file_bg_mp12_padsZ;
void *_file_bg_mp12_tilesZ;
void *_file_Usetupmp13Z;
void *_file_Ump_setupmp13Z;
void *_file_bg_mp13_padsZ;
void *_file_bg_mp13_tilesZ;
void *_file_Usetupmp14Z;
void *_file_Ump_setupmp14Z;
void *_file_bg_mp14_padsZ;
void *_file_bg_mp14_tilesZ;
void *_file_Usetupmp15Z;
void *_file_Ump_setupmp15Z;
void *_file_bg_mp15_padsZ;
void *_file_bg_mp15_tilesZ;
void *_file_Usetupmp16Z;
void *_file_Ump_setupmp16Z;
void *_file_bg_mp16_padsZ;
void *_file_bg_mp16_tilesZ;
void *_file_Usetupmp17Z;
void *_file_Ump_setupmp17Z;
void *_file_bg_mp17_padsZ;
void *_file_bg_mp17_tilesZ;
void *_file_Usetupmp18Z;
void *_file_Ump_setupmp18Z;
void *_file_bg_mp18_padsZ;
void *_file_bg_mp18_tilesZ;
void *_file_Usetupmp19Z;
void *_file_Ump_setupmp19Z;
void *_file_bg_mp19_padsZ;
void *_file_bg_mp19_tilesZ;
void *_file_Usetupmp20Z;
void *_file_Ump_setupmp20Z;
void *_file_bg_mp20_padsZ;
void *_file_bg_mp20_tilesZ;
void *_file_Ca51airmanZ;
void *_file_Cheadneil2Z;
void *_file_Pci_sofaZ;
void *_file_Pci_liftZ;
void *_file_Pci_liftdoorZ;
void *_file_CchicrobZ;
void *_file_CstewardZ;
void *_file_CheadedmcgZ;
void *_file_CstewardessZ;
void *_file_CheadankaZ;
void *_file_CpresidentZ;
void *_file_Cstewardess_coatZ;
void *_file_Cheadleslie_sZ;
void *_file_PlasercutZ;
void *_file_Psk_shuttleZ;
void *_file_CminiskedarZ;
void *_file_PnewvilladoorZ;
void *_file_Cnsa_lackeyZ;
void *_file_Cheadmatt_cZ;
void *_file_Cpres_securityZ;
void *_file_Cheadpeer_sZ;
void *_file_CnegotiatorZ;
void *_file_Cheadeileen_tZ;
void *_file_Psk_pillarleftZ;
void *_file_Psk_pillarrightZ;
void *_file_Psk_plinth_tZ;
void *_file_Psk_plinth_mlZ;
void *_file_Psk_plinth_mrZ;
void *_file_Psk_plinth_blZ;
void *_file_Psk_plinth_brZ;
void *_file_Psk_fl_shad_tZ;
void *_file_Psk_fl_shad_mlZ;
void *_file_Psk_fl_shad_mrZ;
void *_file_Psk_fl_shad_blZ;
void *_file_Psk_fl_shad_brZ;
void *_file_Psk_fl_noshad_tZ;
void *_file_Psk_fl_noshad_mlZ;
void *_file_Psk_fl_noshad_mrZ;
void *_file_Psk_fl_noshad_blZ;
void *_file_Psk_fl_noshad_brZ;
void *_file_GhudpieceZ;
void *_file_Psk_templecolumn1Z;
void *_file_Psk_templecolumn2Z;
void *_file_Psk_templecolumn3Z;
void *_file_Psk_sunshad1Z;
void *_file_Psk_sunshad2Z;
void *_file_Psk_sunnoshad1Z;
void *_file_Psk_sunnoshad2Z;
void *_file_Cg5_guardZ;
void *_file_Cheadandy_rZ;
void *_file_Cpelagic_guardZ;
void *_file_Cg5_swat_guardZ;
void *_file_Calaskan_guardZ;
void *_file_Cmaian_soldierZ;
void *_file_Cheadben_rZ;
void *_file_Cheadsteve_kZ;
void *_file_PbarrelZ;
void *_file_Pglass_floorZ;
void *_file_Pesca_stepZ;
void *_file_Pmatrix_liftZ;
void *_file_Prubble1Z;
void *_file_Prubble2Z;
void *_file_Prubble3Z;
void *_file_Prubble4Z;
void *_file_Arecep01M;
void *_file_Arecep02M;
void *_file_Arecep03M;
void *_file_Arecep04M;
void *_file_Arecep05M;
void *_file_Arecep06M;
void *_file_Arlguard1M;
void *_file_Arltech01M;
void *_file_Arltech02M;
void *_file_Arltech03M;
void *_file_Arltech04M;
void *_file_Arltech05M;
void *_file_Arltech06M;
void *_file_Ascie2aM;
void *_file_Ascie2bM;
void *_file_Ascie2cM;
void *_file_Ascie2dM;
void *_file_Ascie2eM;
void *_file_Ascie2fM;
void *_file_Ascie2gM;
void *_file_Ascie3aM;
void *_file_Ascie3bM;
void *_file_Ascie3cM;
void *_file_Ascie3dM;
void *_file_Ascie3eM;
void *_file_Ascie3gM;
void *_file_Ascien10aM;
void *_file_Ascien2_aM;
void *_file_Ascien3_aM;
void *_file_Ascien4_aM;
void *_file_Ascien5_aM;
void *_file_Ascien6_aM;
void *_file_Ascien7_aM;
void *_file_Ascien9_aM;
void *_file_AvilgrimM;
void *_file_Awepgd01M;
void *_file_Awepgd02M;
void *_file_Awepgd03M;
void *_file_Awepsc01M;
void *_file_Awepsc02M;
void *_file_Awepsc03M;
void *_file_Aa51elv01M;
void *_file_Aa51elv02M;
void *_file_Aa51elv03M;
void *_file_Aa51grd01M;
void *_file_Aa51grd02M;
void *_file_Aa51grd03M;
void *_file_Aa51grd04M;
void *_file_Aa51grd05M;
void *_file_Aa51grd06M;
void *_file_Aa51grd07M;
void *_file_Aa51grd08M;
void *_file_Aa51grd09M;
void *_file_Aa51grd10M;
void *_file_Aa51jo1M;
void *_file_Aa51jo2M;
void *_file_Aa51jo3M;
void *_file_Aa51jo4M;
void *_file_Aa51jo5M;
void *_file_Aa51jo6M;
void *_file_Aa51jon01M;
void *_file_Aa51jon02M;
void *_file_Aa51jon03M;
void *_file_Aa51jon04M;
void *_file_Aa51jon05M;
void *_file_Aa51jon06M;
void *_file_Aa51jon07M;
void *_file_Aa51jon08M;
void *_file_Aa51jon09M;
void *_file_Aa51jon10M;
void *_file_Aa51jon11M;
void *_file_Aa51jon12M;
void *_file_Aa51jon14M;
void *_file_Aa51jon15M;
void *_file_Aa51sci1M;
void *_file_Aaf1jo01M;
void *_file_Aaf1jo02M;
void *_file_Aaf1jo03M;
void *_file_Aaf1pr01M;
void *_file_Aaf1pr02M;
void *_file_Aaf1pr03M;
void *_file_Aaf1pr04M;
void *_file_Aaf1pr05M;
void *_file_Aaf1pr06M;
void *_file_Aaf1pr07M;
void *_file_Aaf1pr08M;
void *_file_Aaf1pr09M;
void *_file_Aaf1pr10M;
void *_file_Aaf1tr01M;
void *_file_Aaf1tr02M;
void *_file_Aaf1tr03M;
void *_file_Aairbgd01M;
void *_file_Aairbgd02M;
void *_file_Aairbgd03M;
void *_file_Aairbgd04M;
void *_file_Aairbgd05M;
void *_file_Aairbgd06M;
void *_file_Aairbgd07M;
void *_file_Aairbgd08M;
void *_file_Aairbgd09M;
void *_file_Aairbgd10M;
void *_file_Aairbgd11M;
void *_file_Aairbgd12M;
void *_file_Aairbgd13M;
void *_file_Aairbgd14M;
void *_file_Aairbgd15M;
void *_file_Aairbgd16M;
void *_file_Aairstw01M;
void *_file_Aairstw02M;
void *_file_Aairstw03M;
void *_file_Aassael01M;
void *_file_Aassael02M;
void *_file_Aassael03M;
void *_file_Aassael04M;
void *_file_Aassael05M;
void *_file_Aassael06M;
void *_file_Absewrk01M;
void *_file_Absewrk02M;
void *_file_Absewrk03M;
void *_file_Absewrk04M;
void *_file_Absewrk05M;
void *_file_Acetael01M;
void *_file_Achdroid1M;
void *_file_Achdroid2M;
void *_file_Acsec01M;
void *_file_Acsec02M;
void *_file_Acsec03M;
void *_file_Acstan1M;
void *_file_Acstan2M;
void *_file_Adevr01M;
void *_file_Adevr02M;
void *_file_Adevr03M;
void *_file_Adevr04M;
void *_file_Adevr05M;
void *_file_Adevr06M;
void *_file_Adevr07M;
void *_file_Adevr08M;
void *_file_Adevr09M;
void *_file_Adevr10M;
void *_file_Adevr11M;
void *_file_Adevr12M;
void *_file_Aexec01M;
void *_file_Aexec02M;
void *_file_Aexec04M;
void *_file_Aexec05M;
void *_file_Aexec06M;
void *_file_Aexec07M;
void *_file_Aexec08M;
void *_file_Aexec09M;
void *_file_Aexec10M;
void *_file_Aexec11M;
void *_file_Aexec12M;
void *_file_Aexec13M;
void *_file_Aexec14M;
void *_file_Ahelic01M;
void *_file_Ahelic02M;
void *_file_Ahelic03M;
void *_file_Ahologd01M;
void *_file_AholohopkM;
void *_file_Ainvcar01M;
void *_file_Ainvcar02M;
void *_file_Ainvcar03M;
void *_file_Ainvcar04M;
void *_file_Ainvcar05M;
void *_file_Ainvcar06M;
void *_file_Ainvcar07M;
void *_file_Ainvcar08M;
void *_file_Ainvcar09M;
void *_file_Ainvcar10M;
void *_file_Ainvcar11M;
void *_file_Ainvcar12M;
void *_file_AinvfarrM;
void *_file_AinvfemaM;
void *_file_AinvfostM;
void *_file_AinvgrimM;
void *_file_AinvhopkM;
void *_file_AinvmaleM;
void *_file_Ajoexec01M;
void *_file_Ajoexec02M;
void *_file_Ajosci01M;
void *_file_Ajosci02M;
void *_file_Ajosci03M;
void *_file_Alabacc1M;
void *_file_Alabacc2M;
void *_file_Alabacc3M;
void *_file_Alabacc4M;
void *_file_Alabacc5M;
void *_file_Alabacc6M;
void *_file_Alabtech1M;
void *_file_Alabtech2M;
void *_file_Alabtech3M;
void *_file_Alabtech5M;
void *_file_Alabtech6M;
void *_file_Alabtech7M;
void *_file_Alabtech8M;
void *_file_Alabtech9M;
void *_file_Aoffwrk01M;
void *_file_Aoffwrk02M;
void *_file_Aoffwrk03M;
void *_file_Aoffwrk04M;
void *_file_Cpresident_cloneZ;
void *_file_CheadjonathanZ;
void *_file_Cheadmaian_sZ;
void *_file_Cdark_af1Z;
void *_file_Pcable_carZ;
void *_file_Pelvis_saucerZ;
void *_file_Pstewardess_trolleyZ;
void *_file_Pairbase_lift_enclosedZ;
void *_file_Pairbase_lift_angleZ;
void *_file_Pairbase_safedoorZ;
void *_file_Paf1_pilotchairZ;
void *_file_Paf1_passchairZ;
void *_file_CheadshaunZ;
void *_file_PchrnightsightZ;
void *_file_PchrshieldZ;
void *_file_Pchrfalcon2Z;
void *_file_Pchrleegun1Z;
void *_file_PchrmaulerZ;
void *_file_Pchrdy357Z;
void *_file_Pchrdy357trentZ;
void *_file_PchrmaianpistolZ;
void *_file_Pchrfalcon2silZ;
void *_file_Pchrfalcon2scopeZ;
void *_file_Pchrcmp150Z;
void *_file_Pchrar34Z;
void *_file_PchrdragonZ;
void *_file_PchrsuperdragonZ;
void *_file_PchravengerZ;
void *_file_PchrcycloneZ;
void *_file_PchrmaiansmgZ;
void *_file_Pchrrcp120Z;
void *_file_PchrpcgunZ;
void *_file_PchrshotgunZ;
void *_file_PchrskminigunZ;
void *_file_PchrdyrocketZ;
void *_file_PchrdevastatorZ;
void *_file_PchrskrocketZ;
void *_file_Pchrz2020Z;
void *_file_PchrsniperrifleZ;
void *_file_PchrcrossbowZ;
void *_file_PchrdruggunZ;
void *_file_PchrknifeZ;
void *_file_PchrnbombZ;
void *_file_PchrflashbangZ;
void *_file_PchrgrenadeZ;
void *_file_PchrtimedmineZ;
void *_file_PchrproximitymineZ;
void *_file_PchrremotemineZ;
void *_file_PchrecmmineZ;
void *_file_PchrwppkZ;
void *_file_Pchrtt33Z;
void *_file_PchrskorpionZ;
void *_file_PchrkalashZ;
void *_file_PchruziZ;
void *_file_Pchrmp5kZ;
void *_file_Pchrm16Z;
void *_file_Pchrfnp90Z;
void *_file_PchrdyrocketmisZ;
void *_file_PchrskrocketmisZ;
void *_file_PchrcrossboltZ;
void *_file_PchrdevgrenadeZ;
void *_file_PchrdraggrenadeZ;
void *_file_Gfalcon2Z;
void *_file_Gleegun1Z;
void *_file_GskpistolZ;
void *_file_Gdy357Z;
void *_file_Gdy357trentZ;
void *_file_GmaianpistolZ;
void *_file_Gcmp150Z;
void *_file_Gar34Z;
void *_file_GdydragonZ;
void *_file_GdysuperdragonZ;
void *_file_Gk7avengerZ;
void *_file_GcycloneZ;
void *_file_GmaiansmgZ;
void *_file_Grcp120Z;
void *_file_GpcgunZ;
void *_file_GshotgunZ;
void *_file_GskminigunZ;
void *_file_GdyrocketZ;
void *_file_GdydevastatorZ;
void *_file_GskrocketZ;
void *_file_Gz2020Z;
void *_file_GsniperrifleZ;
void *_file_GcrossbowZ;
void *_file_GdruggunZ;
void *_file_GknifeZ;
void *_file_GgrenadeZ;
void *_file_GtimedmineZ;
void *_file_GproximitymineZ;
void *_file_GremotemineZ;
void *_file_GwppkZ;
void *_file_Gtt33Z;
void *_file_GskorpionZ;
void *_file_Gak47Z;
void *_file_GuziZ;
void *_file_Gmp5kZ;
void *_file_Gm16Z;
void *_file_Gfnp90Z;
void *_file_Gfalcon2lodZ;
void *_file_GskminigunlodZ;
void *_file_Pa51_turretZ;
void *_file_PpelagicdoorZ;
void *_file_Am1_l1_aM;
void *_file_Am1_l1_bM;
void *_file_Am1_l1_cM;
void *_file_Am1_l1_dM;
void *_file_Am1_l2_aM;
void *_file_Am1_l2_bM;
void *_file_Am1_l2_cM;
void *_file_Am1_l2_dM;
void *_file_Am1_l3_aM;
void *_file_Am1_l3_bM;
void *_file_Am1_l3_cM;
void *_file_Am1_l3_dM;
void *_file_Am2_l1_aM;
void *_file_Am2_l1_bM;
void *_file_Am2_l1_cM;
void *_file_Am2_l1_dM;
void *_file_Am3_l1_aM;
void *_file_Am3_l1_bM;
void *_file_Am3_l1_cM;
void *_file_Am3_l1_dM;
void *_file_Am3_l2_aM;
void *_file_Am3_l2_bM;
void *_file_Am3_l2_cM;
void *_file_Am3_l2_dM;
void *_file_Am4_l1_aM;
void *_file_Am4_l1_bM;
void *_file_Am4_l1_cM;
void *_file_Am4_l1_dM;
void *_file_Am4_l2_aM;
void *_file_Am4_l2_bM;
void *_file_Am4_l2_cM;
void *_file_Am4_l2_dM;
void *_file_Am4_l3_aM;
void *_file_Am4_l3_bM;
void *_file_Am4_l3_cM;
void *_file_Am4_l3_dM;
void *_file_Am5_l1_aM;
void *_file_Am5_l1_bM;
void *_file_Am5_l1_cM;
void *_file_Am5_l1_dM;
void *_file_Am5_l2_aM;
void *_file_Am5_l2_bM;
void *_file_Am5_l2_cM;
void *_file_Am5_l2_dM;
void *_file_Am5_l3_aM;
void *_file_Am5_l3_bM;
void *_file_Am5_l3_cM;
void *_file_Am5_l3_dM;
void *_file_Am6_l1_aM;
void *_file_Am6_l1_bM;
void *_file_Am6_l1_cM;
void *_file_Am6_l1_dM;
void *_file_Am6_l2_aM;
void *_file_Am6_l2_bM;
void *_file_Am6_l2_cM;
void *_file_Am6_l2_dM;
void *_file_Am7_l1_aM;
void *_file_Am7_l1_bM;
void *_file_Am7_l1_cM;
void *_file_Am7_l1_dM;
void *_file_Am8_l1_aM;
void *_file_Am8_l1_bM;
void *_file_Am8_l1_cM;
void *_file_Am8_l1_dM;
void *_file_Am9_l1_aM;
void *_file_Am9_l1_bM;
void *_file_Am9_l1_cM;
void *_file_Am9_l1_dM;
void *_file_Ap1_01_joM;
void *_file_Ap1_02_caM;
void *_file_Ap1_03_joM;
void *_file_Ap1_04_caM;
void *_file_Ap1_05_joM;
void *_file_Ap1_06_caM;
void *_file_Ap1_07_joM;
void *_file_Ap1_08_caM;
void *_file_Ap2_01_joM;
void *_file_Ap2_02_joM;
void *_file_Ap2_03_drM;
void *_file_Ap2_04_joM;
void *_file_Ap2_05_joM;
void *_file_Ap2_06_drM;
void *_file_Ap2_07_drM;
void *_file_Ap3_01_gdM;
void *_file_Ap3_02_joM;
void *_file_Ap3_03_joM;
void *_file_Ap4_01_dvM;
void *_file_Ap4_02_joM;
void *_file_Ap4_03_dvM;
void *_file_Ap4_04_joM;
void *_file_Ap4_05_dvM;
void *_file_Ap4_06_joM;
void *_file_Ap4_07_blM;
void *_file_Ap4_08_dvM;
void *_file_Ap4_09_dvM;
void *_file_Ap5_01_joM;
void *_file_Ap5_02_joM;
void *_file_Ap5_03_joM;
void *_file_Ap6_01_joM;
void *_file_Ap6_02_caM;
void *_file_Ap6_03_joM;
void *_file_Ap6_04_caM;
void *_file_Ap6_05_joM;
void *_file_Ap6_06_caM;
void *_file_Ap7_01_caM;
void *_file_Ap7_02_joM;
void *_file_Ap7_03_caM;
void *_file_Ap7_04_joM;
void *_file_Ap8_01_dvM;
void *_file_Ap8_02_blM;
void *_file_Ap8_03_dvM;
void *_file_Ap8_04_blM;
void *_file_Ap8_06_blM;
void *_file_Ap8_07_trM;
void *_file_Ap8_08_dvM;
void *_file_Ap8_09_trM;
void *_file_Ap8_10_blM;
void *_file_Ap9_01_joM;
void *_file_Ap9_02_caM;
void *_file_Ap9_03_joM;
void *_file_Ap10_01_caM;
void *_file_Ap10_02_caM;
void *_file_Ap10_03_caM;
void *_file_Ap10_04_caM;
void *_file_Ap10_05_joM;
void *_file_Ap10_06_caM;
void *_file_Ap10_07_joM;
void *_file_Ap10_08_caM;
void *_file_Ap10_09_joM;
void *_file_Ap11_01_jnM;
void *_file_Ap11_02_joM;
void *_file_Ap11_03_jnM;
void *_file_Ap11_04_joM;
void *_file_Ap11_05_jnM;
void *_file_Ap11_06_joM;
void *_file_Ap11_07_jnM;
void *_file_Ap11_08_joM;
void *_file_Ap12_01_jnM;
void *_file_Ap12_02_joM;
void *_file_Ap12_03_jnM;
void *_file_Ap12_04_joM;
void *_file_Ap12_05_jnM;
void *_file_Ap12_06_joM;
void *_file_Ap12_07_jnM;
void *_file_Ap12_08_joM;
void *_file_Ap12_09_jnM;
void *_file_Ap12_10_joM;
void *_file_Ap13_01_joM;
void *_file_Ap13_02_suM;
void *_file_Ap13_03_joM;
void *_file_Ap13_04_suM;
void *_file_Ap13_06_suM;
void *_file_Ap14_03_suM;
void *_file_Ap14_04_joM;
void *_file_Ap14_05_suM;
void *_file_Ap14_07_joM;
void *_file_Ap15_01_elM;
void *_file_Ap15_02_elM;
void *_file_Ap15_03_joM;
void *_file_Ap15_04_jnM;
void *_file_Ap15_05_elM;
void *_file_Ap15_06_joM;
void *_file_Ap15_07_elM;
void *_file_Ap15_08_joM;
void *_file_Ap15_09_elM;
void *_file_Ap15_10_joM;
void *_file_Ap15_11_elM;
void *_file_Ap16_01_joM;
void *_file_Ap16_02_caM;
void *_file_Ap16_04_caM;
void *_file_Ap16_05_joM;
void *_file_Ap16_06_caM;
void *_file_Ap17_01_trM;
void *_file_Ap17_02_prM;
void *_file_Ap17_03_trM;
void *_file_Ap17_04_prM;
void *_file_Ap17_05_trM;
void *_file_Ap17_06_trM;
void *_file_Ap18_01_joM;
void *_file_Ap18_02_elM;
void *_file_Ap18_03_elM;
void *_file_Ap18_04_joM;
void *_file_Ap18_05_elM;
void *_file_Ap19_01_caM;
void *_file_Ap19_02_caM;
void *_file_Ap19_03_joM;
void *_file_Ap19_04_caM;
void *_file_Ap19_05_joM;
void *_file_Ap19_06_joM;
void *_file_Ap20_01_joM;
void *_file_Ap20_02_prM;
void *_file_Ap20_03_joM;
void *_file_Ap20_04_prM;
void *_file_Ap20_05_joM;
void *_file_Ap20_06_blM;
void *_file_Ap20_07_trM;
void *_file_Ap20_08_trM;
void *_file_Ap21_01_elM;
void *_file_Ap21_02_joM;
void *_file_Ap21_03_elM;
void *_file_Ap21_04_joM;
void *_file_Ap22_01_elM;
void *_file_Ap22_02_joM;
void *_file_Ap22_03_elM;
void *_file_Ap22_04_joM;
void *_file_Ap23_01_joM;
void *_file_Ap23_02_drM;
void *_file_Ap23_03_joM;
void *_file_Ap23_04_drM;
void *_file_Ap23_05_joM;
void *_file_Ap23_06_drM;
void *_file_Ap23_07_joM;
void *_file_Ap23_08_drM;
void *_file_Ap24_01_caM;
void *_file_Ap24_02_joM;
void *_file_Ap24_03_caM;
void *_file_Ap24_04_joM;
void *_file_Ap24_05_caM;
void *_file_Ap24_06_caM;
void *_file_Ap24_07_joM;
void *_file_Ap24_08_joM;
void *_file_Ap25_01_joM;
void *_file_Ap25_02_joM;
void *_file_Ap26_01_joM;
void *_file_Ap26_02_dvM;
void *_file_Ap26_03_joM;
void *_file_Ap26_04_dvM;
void *_file_Ap26_05_dvM;
void *_file_Ap26_06_joM;
void *_file_Ap26_07_dvM;
void *_file_Ap26_08_dvM;
void *_file_Ap27_01_joM;
void *_file_Ap27_02_elM;
void *_file_Ap27_03_elM;
void *_file_Ap27_04_joM;
void *_file_Ap27_05_joM;
void *_file_Ap27_06_elM;
void *_file_Ap28_01_elM;
void *_file_Ap28_02_joM;
void *_file_Ap28_03_elM;
void *_file_Ap28_04_joM;
void *_file_Ap28_05_elM;
void *_file_Ap28_06_joM;
void *_file_Ap29_01_elM;
void *_file_Ap29_02_joM;
void *_file_Ap29_03_elM;
void *_file_Ap29_04_joM;
void *_file_Ap29_05_joM;
void *_file_Ap29_06_elM;
void *_file_Ap29_07_joM;
void *_file_Ap29_08_elM;
void *_file_Ap29_09_joM;
void *_file_Ap29_10_elM;
void *_file_PautosurgeonZ;
void *_file_CdarkwetZ;
void *_file_CdarkaqualungZ;
void *_file_CdarksnowZ;
void *_file_CdarklabZ;
void *_file_CfemlabtechZ;
void *_file_CddsniperZ;
void *_file_Cpilotaf1Z;
void *_file_CcilabtechZ;
void *_file_CcifemtechZ;
void *_file_Cheadeileen_hZ;
void *_file_Cheadscott_hZ;
void *_file_CcarreveningsuitZ;
void *_file_CjonathonZ;
void *_file_CcisoldierZ;
void *_file_CheadsanchezZ;
void *_file_CheaddarkaquaZ;
void *_file_CheadddsniperZ;
void *_file_PlimoZ;
void *_file_PpdmenuZ;
void *_file_Pa51interceptorZ;
void *_file_Pa51dishZ;
void *_file_Pa51radarconsoleZ;
void *_file_Pa51lockerdoorZ;
void *_file_Pg5generatorZ;
void *_file_Pg5dumpsterZ;
void *_file_Gar34lodZ;
void *_file_GavengerlodZ;
void *_file_Gcmp150lodZ;
void *_file_GcrossbowlodZ;
void *_file_GcyclonelodZ;
void *_file_GdruggunlodZ;
void *_file_Gdy357lodZ;
void *_file_Gdy357trentlodZ;
void *_file_GdevastatorlodZ;
void *_file_GdydragonlodZ;
void *_file_GdysuperdragonlodZ;
void *_file_GknifelodZ;
void *_file_GlaserlodZ;
void *_file_GmagseclodZ;
void *_file_GmayanpistollodZ;
void *_file_GmayansmglodZ;
void *_file_GpcgunlodZ;
void *_file_Grcp120lodZ;
void *_file_GrocketlodZ;
void *_file_GshotgunlodZ;
void *_file_GskpistollodZ;
void *_file_GskrocketlodZ;
void *_file_GsniperlodZ;
void *_file_Gz2020lodZ;
void *_file_PchrcloakerZ;
void *_file_PchrspeedpillZ;
void *_file_PbaggagecarrierZ;
void *_file_PminesignZ;
void *_file_PchamberZ;
void *_file_PisotopeexperimentZ;
void *_file_PisotopeZ;
void *_file_PreactordoorZ;
void *_file_PsaucerinsideZ;
void *_file_PvillastoolZ;
void *_file_Pcetanwindow1Z;
void *_file_Pcetanwindow2Z;
void *_file_Pcetanwindow3Z;
void *_file_Apelelv01M;
void *_file_Apelgrd01M;
void *_file_Ap29_11_joM;
void *_file_GlaserZ;
void *_file_PbigpelagicdoorZ;
void *_file_Psk_jonrubble3Z;
void *_file_Psk_jonrubble4Z;
void *_file_Psk_jonrubble5Z;
void *_file_Psk_jonrubble6Z;
void *_file_GcombathandslodZ;
void *_file_PbinocularsZ;
void *_file_PsubmarineZ;
void *_file_Pairforce1Z;
void *_file_PenginepartZ;
void *_file_Am3l2carrM;
void *_file_Aelvcet01M;
void *_file_Aelvcet02M;
void *_file_Ajorep01M;
void *_file_Ajorep02M;
void *_file_Ajorep03M;
void *_file_Ajorep04M;
void *_file_PcetroofgunZ;
void *_file_PcetansmalldoorZ;
void *_file_PpowernodeZ;
void *_file_PcetanbluegreenlZ;
void *_file_PcetanbluegreenrZ;
void *_file_PskedarconsoleZ;
void *_file_PskedarconsolepanelZ;
void *_file_Ajorpld01M;
void *_file_Ajorpld02M;
void *_file_Ajorpld03M;
void *_file_Ajorpld04M;
void *_file_GnbombZ;
void *_file_GnbomblodZ;
void *_file_GgrenadelodZ;
void *_file_PweaponcdoorZ;
void *_file_PtargetZ;
void *_file_PdevicesecretdoorZ;
void *_file_PcarringtonsecretdoorZ;
void *_file_PsinisterpcZ;
void *_file_PsinisterstationZ;
void *_file_PkeypadlockZ;
void *_file_PthumbprintscannerZ;
void *_file_PretinalockZ;
void *_file_PcardlockZ;
void *_file_PgoodstationZ;
void *_file_PgoodpcZ;
void *_file_CskedarkingZ;
void *_file_CelviswaistcoatZ;
void *_file_CheadgriffeyZ;
void *_file_CheadmotoZ;
void *_file_CheadkeithZ;
void *_file_CheadwinnerZ;
void *_file_Ca51faceplateZ;
void *_file_PchrautogunZ;
void *_file_Pg5bigchairZ;
void *_file_Pg5smallchairZ;
void *_file_PkingsceptreZ;
void *_file_PlabcoatZ;
void *_file_Atrjo01M;
void *_file_Atrgrim01M;
void *_file_Atrgrim02M;
void *_file_Atrcarr06M;
void *_file_Atrcarr07M;
void *_file_Atrcarr08M;
void *_file_Atrcarr01M;
void *_file_Atrcarr02M;
void *_file_Atrcarr03M;
void *_file_Atrcarr04M;
void *_file_Atrcarr05M;
void *_file_Atrcarr12M;
void *_file_Abnblde01M;
void *_file_Abncass01M;
void *_file_Pcidoor1Z;
void *_file_Pg5_chairZ;
void *_file_Pg5_chair2Z;
void *_file_Pdd_window_foyerZ;
void *_file_Ghand_jowetsuitZ;
void *_file_Ghand_trentZ;
void *_file_Ghand_jofrockZ;
void *_file_Ghand_jotrenchZ;
void *_file_Ghand_ddsniperZ;
void *_file_Ghand_presidentZ;
void *_file_Ghand_joaf1Z;
void *_file_Ghand_jopilotZ;
void *_file_Ghand_carringtonZ;
void *_file_Ghand_mrblondeZ;
void *_file_Ghand_ciaZ;
void *_file_Ghand_cifemtechZ;
void *_file_Ghand_fbiarmZ;
void *_file_Ghand_josnowZ;
void *_file_Ghand_vriesZ;
void *_file_Ghand_ddsecurityZ;
void *_file_Ghand_tragic_pelagicZ;
void *_file_Ghand_stewardess_coatZ;
void *_file_Ghand_ddlabtechZ;
void *_file_Pci_cabinetZ;
void *_file_Pci_deskZ;
void *_file_Pci_carr_deskZ;
void *_file_Pci_f_chairZ;
void *_file_Pci_loungerZ;
void *_file_Pci_f_sofaZ;
void *_file_Pci_tableZ;
void *_file_Pcv_coffee_tableZ;
void *_file_Pcv_chair1Z;
void *_file_Pcv_chair2Z;
void *_file_Pcv_sofaZ;
void *_file_Pcv_chair4Z;
void *_file_Pcv_lampZ;
void *_file_Pcv_cabinetZ;
void *_file_Pcv_f_bedZ;
void *_file_Ppel_chair1Z;
void *_file_Psk_console2Z;
void *_file_Pdd_ear_tableZ;
void *_file_Pdd_ear_chairZ;
void *_file_Pairbase_table2Z;
void *_file_Pairbase_chair2Z;
void *_file_Pmisc_crateZ;
void *_file_Pmisc_irspecsZ;
void *_file_Cheadelvis_gogsZ;
void *_file_CheadstevemZ;
void *_file_Pa51_roofgunZ;
void *_file_Psk_drone_gunZ;
void *_file_Pci_roofgunZ;
void *_file_Pcv_tableZ;
void *_file_Cdark_leatherZ;
void *_file_Cheaddark_snowZ;
void *_file_CheadpresidentZ;
void *_file_Pcidoor1_refZ;
void *_file_Palaskadoor_outZ;
void *_file_Palaskadoor_inZ;
void *_file_PwirefenceZ;
void *_file_PrarelogoZ;
void *_file_Chead_vdZ;
void *_file_Apelelv02M;
void *_file_PkeycardZ;
void *_file_PbodyarmourZ;
void *_file_Pa51gate_rZ;
void *_file_Pa51gate_lZ;
void *_file_Paf1_lampZ;
void *_file_Paf1_toiletZ;
void *_file_Paf1_doorbig2Z;
void *_file_Paf1_phoneZ;
void *_file_Paf1_cargodoorZ;
void *_file_Pg5_alarmZ;
void *_file_Pg5_laser_switchZ;
void *_file_Psk_templecolumn4Z;
void *_file_PcorehatchZ;
void *_file_LameE;
void *_file_LameJ;
void *_file_LameP;
void *_file_Lame_str_gZ;
void *_file_Lame_str_fZ;
void *_file_Lame_str_sZ;
void *_file_Lame_str_iZ;
void *_file_LarchE;
void *_file_LarchJ;
void *_file_LarchP;
void *_file_Larch_str_gZ;
void *_file_Larch_str_fZ;
void *_file_Larch_str_sZ;
void *_file_Larch_str_iZ;
void *_file_LarecE;
void *_file_LarecJ;
void *_file_LarecP;
void *_file_Larec_str_gZ;
void *_file_Larec_str_fZ;
void *_file_Larec_str_sZ;
void *_file_Larec_str_iZ;
void *_file_LarkE;
void *_file_LarkJ;
void *_file_LarkP;
void *_file_Lark_str_gZ;
void *_file_Lark_str_fZ;
void *_file_Lark_str_sZ;
void *_file_Lark_str_iZ;
void *_file_LashE;
void *_file_LashJ;
void *_file_LashP;
void *_file_Lash_str_gZ;
void *_file_Lash_str_fZ;
void *_file_Lash_str_sZ;
void *_file_Lash_str_iZ;
void *_file_LateE;
void *_file_LateJ;
void *_file_LateP;
void *_file_Late_str_gZ;
void *_file_Late_str_fZ;
void *_file_Late_str_sZ;
void *_file_Late_str_iZ;
void *_file_LaztE;
void *_file_LaztJ;
void *_file_LaztP;
void *_file_Lazt_str_gZ;
void *_file_Lazt_str_fZ;
void *_file_Lazt_str_sZ;
void *_file_Lazt_str_iZ;
void *_file_LcatE;
void *_file_LcatJ;
void *_file_LcatP;
void *_file_Lcat_str_gZ;
void *_file_Lcat_str_fZ;
void *_file_Lcat_str_sZ;
void *_file_Lcat_str_iZ;
void *_file_LcaveE;
void *_file_LcaveJ;
void *_file_LcaveP;
void *_file_Lcave_str_gZ;
void *_file_Lcave_str_fZ;
void *_file_Lcave_str_sZ;
void *_file_Lcave_str_iZ;
void *_file_LcradE;
void *_file_LcradJ;
void *_file_LcradP;
void *_file_Lcrad_str_gZ;
void *_file_Lcrad_str_fZ;
void *_file_Lcrad_str_sZ;
void *_file_Lcrad_str_iZ;
void *_file_LcrypE;
void *_file_LcrypJ;
void *_file_LcrypP;
void *_file_Lcryp_str_gZ;
void *_file_Lcryp_str_fZ;
void *_file_Lcryp_str_sZ;
void *_file_Lcryp_str_iZ;
void *_file_LdamE;
void *_file_LdamJ;
void *_file_LdamP;
void *_file_Ldam_str_gZ;
void *_file_Ldam_str_fZ;
void *_file_Ldam_str_sZ;
void *_file_Ldam_str_iZ;
void *_file_LdepoE;
void *_file_LdepoJ;
void *_file_LdepoP;
void *_file_Ldepo_str_gZ;
void *_file_Ldepo_str_fZ;
void *_file_Ldepo_str_sZ;
void *_file_Ldepo_str_iZ;
void *_file_LdestE;
void *_file_LdestJ;
void *_file_LdestP;
void *_file_Ldest_str_gZ;
void *_file_Ldest_str_fZ;
void *_file_Ldest_str_sZ;
void *_file_Ldest_str_iZ;
void *_file_LdishE;
void *_file_LdishJ;
void *_file_LdishP;
void *_file_Ldish_str_gZ;
void *_file_Ldish_str_fZ;
void *_file_Ldish_str_sZ;
void *_file_Ldish_str_iZ;
void *_file_LearE;
void *_file_LearJ;
void *_file_LearP;
void *_file_Lear_str_gZ;
void *_file_Lear_str_fZ;
void *_file_Lear_str_sZ;
void *_file_Lear_str_iZ;
void *_file_LeldE;
void *_file_LeldJ;
void *_file_LeldP;
void *_file_Leld_str_gZ;
void *_file_Leld_str_fZ;
void *_file_Leld_str_sZ;
void *_file_Leld_str_iZ;
void *_file_LgunE;
void *_file_LgunJ;
void *_file_LgunP;
void *_file_Lgun_str_gZ;
void *_file_Lgun_str_fZ;
void *_file_Lgun_str_sZ;
void *_file_Lgun_str_iZ;
void *_file_LimpE;
void *_file_LimpJ;
void *_file_LimpP;
void *_file_Limp_str_gZ;
void *_file_Limp_str_fZ;
void *_file_Limp_str_sZ;
void *_file_Limp_str_iZ;
void *_file_LjunE;
void *_file_LjunJ;
void *_file_LjunP;
void *_file_Ljun_str_gZ;
void *_file_Ljun_str_fZ;
void *_file_Ljun_str_sZ;
void *_file_Ljun_str_iZ;
void *_file_LlamE;
void *_file_LlamJ;
void *_file_LlamP;
void *_file_Llam_str_gZ;
void *_file_Llam_str_fZ;
void *_file_Llam_str_sZ;
void *_file_Llam_str_iZ;
void *_file_LleeE;
void *_file_LleeJ;
void *_file_LleeP;
void *_file_Llee_str_gZ;
void *_file_Llee_str_fZ;
void *_file_Llee_str_sZ;
void *_file_Llee_str_iZ;
void *_file_LlenE;
void *_file_LlenJ;
void *_file_LlenP;
void *_file_Llen_str_gZ;
void *_file_Llen_str_fZ;
void *_file_Llen_str_sZ;
void *_file_Llen_str_iZ;
void *_file_LlipE;
void *_file_LlipJ;
void *_file_LlipP;
void *_file_Llip_str_gZ;
void *_file_Llip_str_fZ;
void *_file_Llip_str_sZ;
void *_file_Llip_str_iZ;
void *_file_LlueE;
void *_file_LlueJ;
void *_file_LlueP;
void *_file_Llue_str_gZ;
void *_file_Llue_str_fZ;
void *_file_Llue_str_sZ;
void *_file_Llue_str_iZ;
void *_file_LmiscE;
void *_file_LmiscJ;
void *_file_LmiscP;
void *_file_Lmisc_str_gZ;
void *_file_Lmisc_str_fZ;
void *_file_Lmisc_str_sZ;
void *_file_Lmisc_str_iZ;
void *_file_Lmp10E;
void *_file_Lmp10J;
void *_file_Lmp10P;
void *_file_Lmp10_str_gZ;
void *_file_Lmp10_str_fZ;
void *_file_Lmp10_str_sZ;
void *_file_Lmp10_str_iZ;
void *_file_Lmp11E;
void *_file_Lmp11J;
void *_file_Lmp11P;
void *_file_Lmp11_str_gZ;
void *_file_Lmp11_str_fZ;
void *_file_Lmp11_str_sZ;
void *_file_Lmp11_str_iZ;
void *_file_Lmp12E;
void *_file_Lmp12J;
void *_file_Lmp12P;
void *_file_Lmp12_str_gZ;
void *_file_Lmp12_str_fZ;
void *_file_Lmp12_str_sZ;
void *_file_Lmp12_str_iZ;
void *_file_Lmp13E;
void *_file_Lmp13J;
void *_file_Lmp13P;
void *_file_Lmp13_str_gZ;
void *_file_Lmp13_str_fZ;
void *_file_Lmp13_str_sZ;
void *_file_Lmp13_str_iZ;
void *_file_Lmp14E;
void *_file_Lmp14J;
void *_file_Lmp14P;
void *_file_Lmp14_str_gZ;
void *_file_Lmp14_str_fZ;
void *_file_Lmp14_str_sZ;
void *_file_Lmp14_str_iZ;
void *_file_Lmp15E;
void *_file_Lmp15J;
void *_file_Lmp15P;
void *_file_Lmp15_str_gZ;
void *_file_Lmp15_str_fZ;
void *_file_Lmp15_str_sZ;
void *_file_Lmp15_str_iZ;
void *_file_Lmp16E;
void *_file_Lmp16J;
void *_file_Lmp16P;
void *_file_Lmp16_str_gZ;
void *_file_Lmp16_str_fZ;
void *_file_Lmp16_str_sZ;
void *_file_Lmp16_str_iZ;
void *_file_Lmp17E;
void *_file_Lmp17J;
void *_file_Lmp17P;
void *_file_Lmp17_str_gZ;
void *_file_Lmp17_str_fZ;
void *_file_Lmp17_str_sZ;
void *_file_Lmp17_str_iZ;
void *_file_Lmp18E;
void *_file_Lmp18J;
void *_file_Lmp18P;
void *_file_Lmp18_str_gZ;
void *_file_Lmp18_str_fZ;
void *_file_Lmp18_str_sZ;
void *_file_Lmp18_str_iZ;
void *_file_Lmp19E;
void *_file_Lmp19J;
void *_file_Lmp19P;
void *_file_Lmp19_str_gZ;
void *_file_Lmp19_str_fZ;
void *_file_Lmp19_str_sZ;
void *_file_Lmp19_str_iZ;
void *_file_Lmp1E;
void *_file_Lmp1J;
void *_file_Lmp1P;
void *_file_Lmp1_str_gZ;
void *_file_Lmp1_str_fZ;
void *_file_Lmp1_str_sZ;
void *_file_Lmp1_str_iZ;
void *_file_Lmp20E;
void *_file_Lmp20J;
void *_file_Lmp20P;
void *_file_Lmp20_str_gZ;
void *_file_Lmp20_str_fZ;
void *_file_Lmp20_str_sZ;
void *_file_Lmp20_str_iZ;
void *_file_Lmp2E;
void *_file_Lmp2J;
void *_file_Lmp2P;
void *_file_Lmp2_str_gZ;
void *_file_Lmp2_str_fZ;
void *_file_Lmp2_str_sZ;
void *_file_Lmp2_str_iZ;
void *_file_Lmp3E;
void *_file_Lmp3J;
void *_file_Lmp3P;
void *_file_Lmp3_str_gZ;
void *_file_Lmp3_str_fZ;
void *_file_Lmp3_str_sZ;
void *_file_Lmp3_str_iZ;
void *_file_Lmp4E;
void *_file_Lmp4J;
void *_file_Lmp4P;
void *_file_Lmp4_str_gZ;
void *_file_Lmp4_str_fZ;
void *_file_Lmp4_str_sZ;
void *_file_Lmp4_str_iZ;
void *_file_Lmp5E;
void *_file_Lmp5J;
void *_file_Lmp5P;
void *_file_Lmp5_str_gZ;
void *_file_Lmp5_str_fZ;
void *_file_Lmp5_str_sZ;
void *_file_Lmp5_str_iZ;
void *_file_Lmp6E;
void *_file_Lmp6J;
void *_file_Lmp6P;
void *_file_Lmp6_str_gZ;
void *_file_Lmp6_str_fZ;
void *_file_Lmp6_str_sZ;
void *_file_Lmp6_str_iZ;
void *_file_Lmp7E;
void *_file_Lmp7J;
void *_file_Lmp7P;
void *_file_Lmp7_str_gZ;
void *_file_Lmp7_str_fZ;
void *_file_Lmp7_str_sZ;
void *_file_Lmp7_str_iZ;
void *_file_Lmp8E;
void *_file_Lmp8J;
void *_file_Lmp8P;
void *_file_Lmp8_str_gZ;
void *_file_Lmp8_str_fZ;
void *_file_Lmp8_str_sZ;
void *_file_Lmp8_str_iZ;
void *_file_Lmp9E;
void *_file_Lmp9J;
void *_file_Lmp9P;
void *_file_Lmp9_str_gZ;
void *_file_Lmp9_str_fZ;
void *_file_Lmp9_str_sZ;
void *_file_Lmp9_str_iZ;
void *_file_LmpmenuE;
void *_file_LmpmenuJ;
void *_file_LmpmenuP;
void *_file_Lmpmenu_str_gZ;
void *_file_Lmpmenu_str_fZ;
void *_file_Lmpmenu_str_sZ;
void *_file_Lmpmenu_str_iZ;
void *_file_LmpweaponsE;
void *_file_LmpweaponsJ;
void *_file_LmpweaponsP;
void *_file_Lmpweapons_str_gZ;
void *_file_Lmpweapons_str_fZ;
void *_file_Lmpweapons_str_sZ;
void *_file_Lmpweapons_str_iZ;
void *_file_LoatE;
void *_file_LoatJ;
void *_file_LoatP;
void *_file_Loat_str_gZ;
void *_file_Loat_str_fZ;
void *_file_Loat_str_sZ;
void *_file_Loat_str_iZ;
void *_file_LoldE;
void *_file_LoldJ;
void *_file_LoldP;
void *_file_Lold_str_gZ;
void *_file_Lold_str_fZ;
void *_file_Lold_str_sZ;
void *_file_Lold_str_iZ;
void *_file_LoptionsE;
void *_file_LoptionsJ;
void *_file_LoptionsP;
void *_file_Loptions_str_gZ;
void *_file_Loptions_str_fZ;
void *_file_Loptions_str_sZ;
void *_file_Loptions_str_iZ;
void *_file_LpamE;
void *_file_LpamJ;
void *_file_LpamP;
void *_file_Lpam_str_gZ;
void *_file_Lpam_str_fZ;
void *_file_Lpam_str_sZ;
void *_file_Lpam_str_iZ;
void *_file_LpeteE;
void *_file_LpeteJ;
void *_file_LpeteP;
void *_file_Lpete_str_gZ;
void *_file_Lpete_str_fZ;
void *_file_Lpete_str_sZ;
void *_file_Lpete_str_iZ;
void *_file_LpropobjE;
void *_file_LpropobjJ;
void *_file_LpropobjP;
void *_file_Lpropobj_str_gZ;
void *_file_Lpropobj_str_fZ;
void *_file_Lpropobj_str_sZ;
void *_file_Lpropobj_str_iZ;
void *_file_LrefE;
void *_file_LrefJ;
void *_file_LrefP;
void *_file_Lref_str_gZ;
void *_file_Lref_str_fZ;
void *_file_Lref_str_sZ;
void *_file_Lref_str_iZ;
void *_file_LritE;
void *_file_LritJ;
void *_file_LritP;
void *_file_Lrit_str_gZ;
void *_file_Lrit_str_fZ;
void *_file_Lrit_str_sZ;
void *_file_Lrit_str_iZ;
void *_file_LrunE;
void *_file_LrunJ;
void *_file_LrunP;
void *_file_Lrun_str_gZ;
void *_file_Lrun_str_fZ;
void *_file_Lrun_str_sZ;
void *_file_Lrun_str_iZ;
void *_file_LsevE;
void *_file_LsevJ;
void *_file_LsevP;
void *_file_Lsev_str_gZ;
void *_file_Lsev_str_fZ;
void *_file_Lsev_str_sZ;
void *_file_Lsev_str_iZ;
void *_file_LsevbE;
void *_file_LsevbJ;
void *_file_LsevbP;
void *_file_Lsevb_str_gZ;
void *_file_Lsevb_str_fZ;
void *_file_Lsevb_str_sZ;
void *_file_Lsevb_str_iZ;
void *_file_LsevxE;
void *_file_LsevxJ;
void *_file_LsevxP;
void *_file_Lsevx_str_gZ;
void *_file_Lsevx_str_fZ;
void *_file_Lsevx_str_sZ;
void *_file_Lsevx_str_iZ;
void *_file_LsevxbE;
void *_file_LsevxbJ;
void *_file_LsevxbP;
void *_file_Lsevxb_str_gZ;
void *_file_Lsevxb_str_fZ;
void *_file_Lsevxb_str_sZ;
void *_file_Lsevxb_str_iZ;
void *_file_LshoE;
void *_file_LshoJ;
void *_file_LshoP;
void *_file_Lsho_str_gZ;
void *_file_Lsho_str_fZ;
void *_file_Lsho_str_sZ;
void *_file_Lsho_str_iZ;
void *_file_LsiloE;
void *_file_LsiloJ;
void *_file_LsiloP;
void *_file_Lsilo_str_gZ;
void *_file_Lsilo_str_fZ;
void *_file_Lsilo_str_sZ;
void *_file_Lsilo_str_iZ;
void *_file_LstatE;
void *_file_LstatJ;
void *_file_LstatP;
void *_file_Lstat_str_gZ;
void *_file_Lstat_str_fZ;
void *_file_Lstat_str_sZ;
void *_file_Lstat_str_iZ;
void *_file_LtitleE;
void *_file_LtitleJ;
void *_file_LtitleP;
void *_file_Ltitle_str_gZ;
void *_file_Ltitle_str_fZ;
void *_file_Ltitle_str_sZ;
void *_file_Ltitle_str_iZ;
void *_file_LtraE;
void *_file_LtraJ;
void *_file_LtraP;
void *_file_Ltra_str_gZ;
void *_file_Ltra_str_fZ;
void *_file_Ltra_str_sZ;
void *_file_Ltra_str_iZ;
void *_file_LuffE;
void *_file_LuffJ;
void *_file_LuffP;
void *_file_Luff_str_gZ;
void *_file_Luff_str_fZ;
void *_file_Luff_str_sZ;
void *_file_Luff_str_iZ;
void *_file_LwaxE;
void *_file_LwaxJ;
void *_file_LwaxP;
void *_file_Lwax_str_gZ;
void *_file_Lwax_str_fZ;
void *_file_Lwax_str_sZ;
void *_file_Lwax_str_iZ;
void *_file_Pa51grateZ;
void *_file_GecmmineZ;
void *_file_GcommsuplinkZ;
void *_file_GirscannerZ;
void *_file_Paf1escapedoorZ;
void *_file_PprescapsuleZ;
void *_file_PskedarbridgeZ;
void *_file_Ppelagicdoor2Z;
void *_file_Avault2M;
void *_file_Ap29_12_elM;
void *_file_Pttb_boxZ;
void *_file_PinstfrontdoorZ;
void *_file_Ap14_09_joM;
void *_file_Ap19_07_joM;
void *_file_Ap19_08_joM;
void *_file_PchrlaserZ;
void *_file_PbaftaZ;
void *_file_PchrsonicscrewerZ;
void *_file_PchrlumphammerZ;
void *_file_PskedarbombZ;
void *_file_PexplosivebrickZ;
void *_file_PresearchtapeZ;
void *_file_PziggycardZ;
void *_file_PsafeitemZ;
void *_file_Ghand_elvisZ;
void *_file_Paf1_tableZ;
void *_file_Ghand_a51guardZ;
void *_file_Ghand_ddshockZ;
void *_file_Ghand_blackguardZ;
void *_file_Ghand_ddfodderZ;
void *_file_Ghand_ddbioZ;
void *_file_Ghand_a51airmanZ;
void *_file_Ghand_g5guardZ;
void *_file_Ghand_cisoldierZ;
void *_file_PsensitiveinfoZ;
void *_file_PrussdarZ;
void *_file_PxrayspecsZ;
void *_file_PchreyespyZ;
void *_file_PchrdoordecoderZ;
void *_file_PbriefcaseZ;
void *_file_PsuitcaseZ;
void *_file_PshuttledoorZ;
void *_file_PruinbridgeZ;
void *_file_PsecretindoorZ;
void *_file_PskpuzzleobjectZ;
void *_file_Pa51liftdoorZ;
void *_file_Acicarr06M;
void *_file_Acicarr11M;
void *_file_Acifarr08M;
void *_file_Acifarr12M;
void *_file_Acifema01M;
void *_file_Acifema04M;
void *_file_Acifema07M;
void *_file_Acifema08M;
void *_file_Acifema09M;
void *_file_Acifema14M;
void *_file_Acifost08M;
void *_file_Acifost12M;
void *_file_Acigrim05M;
void *_file_Acigrim06M;
void *_file_Acigrim07M;
void *_file_Acigrim08M;
void *_file_Acigrim09M;
void *_file_Acigrim10M;
void *_file_Acihopk09M;
void *_file_Acihopk11M;
void *_file_Acimale02M;
void *_file_Acimale03M;
void *_file_Acimale07M;
void *_file_Acimale09M;
void *_file_Acimale11M;
void *_file_Acimale13M;
void *_file_Aciroge08M;
void *_file_Aciroge12M;
void *_file_Cdark_negotiatorZ;
void *_file_PcihubZ;
void *_file_Psk_ship_door2Z;
void *_file_Psk_window1Z;
void *_file_Psk_hangardoorb_topZ;
void *_file_Psk_hangardoorb_botZ;
void *_file_Paf1_innerdoorZ;
void *_file_Plaser_postZ;
void *_file_Atrfost01M;
void *_file_Atrfost02M;
void *_file_Atrfost03M;
void *_file_Atrcarr09M;
void *_file_Atrcarr10M;
void *_file_Atrcarr11M;
void *_file_Acifarr01M;
void *_file_Acifarr02M;
void *_file_Acifarr03M;
void *_file_Acigrim01M;
void *_file_Acigrim03M;
void *_file_Acigrim04M;
void *_file_Acihopk01M;
void *_file_Acihopk04M;
void *_file_Acihopk06M;
void *_file_Aciroge01M;
void *_file_Aciroge02M;
void *_file_Atrroge01M;
void *_file_Acicarr07M;
void *_file_Acicarr08M;
void *_file_PtargetampZ;
void *_file_Psk_liftZ;
void *_file_PknockknockZ;
void *_file_PcetandoorZ;
void *_file_Ajoinst01M;
void *_file_Ajoinst02M;
void *_file_Ajoinst03M;
void *_file_Ajoinst04M;
void *_file_Ap25_03_joM;
void *_file_Paf1rubbleZ;
void *_file_Pdd_dr_nonrefZ;
void *_file_CheadtimZ;
void *_file_CheadgrantZ;
void *_file_CheadpennyZ;
void *_file_CheadrobinZ;
void *_file_CheadalexZ;
void *_file_CheadjulianneZ;
void *_file_CheadlauraZ;
void *_file_CheaddavecZ;
void *_file_CheadkenZ;
void *_file_CheadjoelZ;
void *_file_PcetandoorsideZ;
void *_file_Ap29_13_joM;
void *_file_Ap29_14_joM;
void *_file_Acicarr09M;
void *_file_Acicarr10M;
void *_file_PbuddybridgeZ;
void *_file_CheadcookZ;
void *_file_CheadpryceZ;
void *_file_CheadsilkeZ;
void *_file_CheadsmithZ;
void *_file_CheadgarethZ;
void *_file_CheadmurchieZ;
void *_file_CheadwongZ;
void *_file_CheadcarterZ;
void *_file_CheadtintinZ;
void *_file_CheadmuntonZ;
void *_file_CheadstamperZ;
void *_file_CheadjonesZ;
void *_file_CheadphelpsZ;
void *_file_Ap29_15_joM;
void *_file_Ap16_03_joM;
void *_file_Acarrbye02M;
#if VERSION >= VERSION_NTSC_1_0
void *_file_Asaucerexp1M;
#endif
#if VERSION >= VERSION_JPN_FINAL
void *_file_PjaplogoZ;
void *_file_PjappdZ;
#endif
void *_filenamesSegmentRomStart = NULL;

struct fileinfo g_FileInfo[NUM_FILES];

#if VERSION >= VERSION_NTSC_1_0
u32 var800aa570;
#endif

u32 g_FileTable[] = {
	/*0x0000*/ 0,
	/*0x0001*/ (uintptr_t) &_file_bg_sev_seg,
	/*0x0002*/ (uintptr_t) &_file_bg_silo_seg,
	/*0x0003*/ (uintptr_t) &_file_bg_stat_seg,
	/*0x0004*/ (uintptr_t) &_file_bg_arec_seg,
	/*0x0005*/ (uintptr_t) &_file_bg_arch_seg,
	/*0x0006*/ (uintptr_t) &_file_bg_tra_seg,
	/*0x0007*/ (uintptr_t) &_file_bg_dest_seg,
	/*0x0008*/ (uintptr_t) &_file_bg_sevb_seg,
	/*0x0009*/ (uintptr_t) &_file_bg_azt_seg,
	/*0x000a*/ (uintptr_t) &_file_bg_pete_seg,
	/*0x000b*/ (uintptr_t) &_file_bg_depo_seg,
	/*0x000c*/ (uintptr_t) &_file_bg_ref_seg,
	/*0x000d*/ (uintptr_t) &_file_bg_cryp_seg,
	/*0x000e*/ (uintptr_t) &_file_bg_dam_seg,
	/*0x000f*/ (uintptr_t) &_file_bg_ark_seg,
	/*0x0010*/ (uintptr_t) &_file_bg_run_seg,
	/*0x0011*/ (uintptr_t) &_file_bg_sevx_seg,
	/*0x0012*/ (uintptr_t) &_file_bg_jun_seg,
	/*0x0013*/ (uintptr_t) &_file_bg_dish_seg,
	/*0x0014*/ (uintptr_t) &_file_bg_cave_seg,
	/*0x0015*/ (uintptr_t) &_file_bg_cat_seg,
	/*0x0016*/ (uintptr_t) &_file_bg_crad_seg,
	/*0x0017*/ (uintptr_t) &_file_bg_sho_seg,
	/*0x0018*/ (uintptr_t) &_file_bg_eld_seg,
	/*0x0019*/ (uintptr_t) &_file_bg_imp_seg,
	/*0x001a*/ (uintptr_t) &_file_bg_ash_seg,
	/*0x001b*/ (uintptr_t) &_file_bg_lue_seg,
	/*0x001c*/ (uintptr_t) &_file_bg_ame_seg,
	/*0x001d*/ (uintptr_t) &_file_bg_rit_seg,
	/*0x001e*/ (uintptr_t) &_file_bg_oat_seg,
	/*0x001f*/ (uintptr_t) &_file_bg_ear_seg,
	/*0x0020*/ (uintptr_t) &_file_bg_lee_seg,
	/*0x0021*/ (uintptr_t) &_file_bg_lip_seg,
	/*0x0022*/ (uintptr_t) &_file_bg_len_seg,
	/*0x0023*/ (uintptr_t) &_file_bg_wax_seg,
	/*0x0024*/ (uintptr_t) &_file_bg_pam_seg,
	/*0x0025*/ (uintptr_t) &_file_bg_uff_seg,
	/*0x0026*/ (uintptr_t) &_file_bg_old_seg,
	/*0x0027*/ (uintptr_t) &_file_bg_ate_seg,
	/*0x0028*/ (uintptr_t) &_file_bg_lam_seg,
	/*0x0029*/ (uintptr_t) &_file_bg_mp1_seg,
	/*0x002a*/ (uintptr_t) &_file_bg_mp2_seg,
	/*0x002b*/ (uintptr_t) &_file_bg_mp3_seg,
	/*0x002c*/ (uintptr_t) &_file_bg_mp4_seg,
	/*0x002d*/ (uintptr_t) &_file_bg_mp5_seg,
	/*0x002e*/ (uintptr_t) &_file_bg_mp6_seg,
	/*0x002f*/ (uintptr_t) &_file_bg_mp7_seg,
	/*0x0030*/ (uintptr_t) &_file_bg_mp8_seg,
	/*0x0031*/ (uintptr_t) &_file_bg_mp9_seg,
	/*0x0032*/ (uintptr_t) &_file_bg_mp10_seg,
	/*0x0033*/ (uintptr_t) &_file_bg_mp11_seg,
	/*0x0034*/ (uintptr_t) &_file_bg_mp12_seg,
	/*0x0035*/ (uintptr_t) &_file_bg_mp13_seg,
	/*0x0036*/ (uintptr_t) &_file_bg_mp14_seg,
	/*0x0037*/ (uintptr_t) &_file_bg_mp15_seg,
	/*0x0038*/ (uintptr_t) &_file_bg_mp16_seg,
	/*0x0039*/ (uintptr_t) &_file_bg_mp17_seg,
	/*0x003a*/ (uintptr_t) &_file_bg_mp18_seg,
	/*0x003b*/ (uintptr_t) &_file_bg_mp19_seg,
	/*0x003c*/ (uintptr_t) &_file_bg_mp20_seg,
	/*0x003d*/ (uintptr_t) &_file_ob_mid_seg,
	/*0x003e*/ (uintptr_t) &_file_Ca51guardZ,
	/*0x003f*/ (uintptr_t) &_file_Carea51guardZ,
	/*0x0040*/ (uintptr_t) &_file_CcarringtonZ,
	/*0x0041*/ (uintptr_t) &_file_CcassandraZ,
	/*0x0042*/ (uintptr_t) &_file_Cdark_combatZ,
	/*0x0043*/ (uintptr_t) &_file_Cdark_frockZ,
	/*0x0044*/ (uintptr_t) &_file_Cdark_trenchZ,
	/*0x0045*/ (uintptr_t) &_file_CddshockZ,
	/*0x0046*/ (uintptr_t) &_file_Cdd_secguardZ,
	/*0x0047*/ (uintptr_t) &_file_CdjbondZ,
	/*0x0048*/ (uintptr_t) &_file_CdrcarrollZ,
	/*0x0049*/ (uintptr_t) &_file_CelvisZ,
	/*0x004a*/ (uintptr_t) &_file_Celvis1Z,
	/*0x004b*/ (uintptr_t) &_file_CeyespyZ,
	/*0x004c*/ (uintptr_t) &_file_Cfem_guardZ,
	/*0x004d*/ (uintptr_t) &_file_ClabtechZ,
	/*0x004e*/ (uintptr_t) &_file_CmrblondeZ,
	/*0x004f*/ (uintptr_t) &_file_CofficeworkerZ,
	/*0x0050*/ (uintptr_t) &_file_Cofficeworker2Z,
	/*0x0051*/ (uintptr_t) &_file_CoverallZ,
	/*0x0052*/ (uintptr_t) &_file_CsecretaryZ,
	/*0x0053*/ (uintptr_t) &_file_CskedarZ,
	/*0x0054*/ (uintptr_t) &_file_CstripesZ,
	/*0x0055*/ (uintptr_t) &_file_CtestchrZ,
	/*0x0056*/ (uintptr_t) &_file_CthekingZ,
	/*0x0057*/ (uintptr_t) &_file_CtrentZ,
	/*0x0058*/ (uintptr_t) &_file_GcartblueZ,
	/*0x0059*/ (uintptr_t) &_file_GcartridgeZ,
	/*0x005a*/ (uintptr_t) &_file_GcartrifleZ,
	/*0x005b*/ (uintptr_t) &_file_GcartshellZ,
	/*0x005c*/ (uintptr_t) &_file_GjoypadZ,
	/*0x005d*/ (uintptr_t) &_file_Pa51_crate1Z,
	/*0x005e*/ (uintptr_t) &_file_Pa51_crate2Z,
	/*0x005f*/ (uintptr_t) &_file_Pa51_crate3Z,
	/*0x0060*/ (uintptr_t) &_file_Pa51_exp1Z,
	/*0x0061*/ (uintptr_t) &_file_Pa51_exp2Z,
	/*0x0062*/ (uintptr_t) &_file_Pa51_horiz_door_botZ,
	/*0x0063*/ (uintptr_t) &_file_Pa51_horiz_door_glZ,
	/*0x0064*/ (uintptr_t) &_file_Pa51_horiz_door_secretZ,
	/*0x0065*/ (uintptr_t) &_file_Pa51_horiz_door_topZ,
	/*0x0066*/ (uintptr_t) &_file_Pa51_lift_controlZ,
	/*0x0067*/ (uintptr_t) &_file_Pa51_lift_hangarZ,
	/*0x0068*/ (uintptr_t) &_file_Pa51_lift_storeZ,
	/*0x0069*/ (uintptr_t) &_file_Pa51_lift_thinwallZ,
	/*0x006a*/ (uintptr_t) &_file_Pa51_unexp1Z,
	/*0x006b*/ (uintptr_t) &_file_Pa51_unexp2Z,
	/*0x006c*/ (uintptr_t) &_file_Pa51_unexp3Z,
	/*0x006d*/ (uintptr_t) &_file_Pa51_vert_door_leftZ,
	/*0x006e*/ (uintptr_t) &_file_Pa51_vert_door_rightZ,
	/*0x006f*/ (uintptr_t) &_file_Pa51_vert_door_stZ,
	/*0x0070*/ (uintptr_t) &_file_Pa51boardZ,
	/*0x0071*/ (uintptr_t) &_file_Pa51chairZ,
	/*0x0072*/ (uintptr_t) &_file_Pa51deskentZ,
	/*0x0073*/ (uintptr_t) &_file_Pa51divideZ,
	/*0x0074*/ (uintptr_t) &_file_Pa51screenZ,
	/*0x0075*/ (uintptr_t) &_file_Pa51tableZ,
	/*0x0076*/ (uintptr_t) &_file_Pa51trolleyZ,
	/*0x0077*/ (uintptr_t) &_file_Pa51wastebinZ,
	/*0x0078*/ (uintptr_t) &_file_Paivillabot1Z,
	/*0x0079*/ (uintptr_t) &_file_Paivillabot2Z,
	/*0x007a*/ (uintptr_t) &_file_Paivillabot3Z,
	/*0x007b*/ (uintptr_t) &_file_Paivilladoor1Z,
	/*0x007c*/ (uintptr_t) &_file_Paivilladoor2aZ,
	/*0x007d*/ (uintptr_t) &_file_Paivilladoor4Z,
	/*0x007e*/ (uintptr_t) &_file_PaivillawindmillZ,
	/*0x007f*/ (uintptr_t) &_file_Pal_airlockZ,
	/*0x0080*/ (uintptr_t) &_file_Pal_dockliftZ,
	/*0x0081*/ (uintptr_t) &_file_Paldoor_lZ,
	/*0x0082*/ (uintptr_t) &_file_Paldoor_rZ,
	/*0x0083*/ (uintptr_t) &_file_Pborg_crateZ,
	/*0x0084*/ (uintptr_t) &_file_PcaseZ,
	/*0x0085*/ (uintptr_t) &_file_Pch_shutter1Z,
	/*0x0086*/ (uintptr_t) &_file_PchrbriefcaseZ,
	/*0x0087*/ (uintptr_t) &_file_PchrbugZ,
	/*0x0088*/ (uintptr_t) &_file_PchrdatathiefZ,
	/*0x0089*/ (uintptr_t) &_file_Pcryptdoor1bZ,
	/*0x008a*/ (uintptr_t) &_file_Pdd_ac_expZ,
	/*0x008b*/ (uintptr_t) &_file_Pdd_ac_unexpZ,
	/*0x008c*/ (uintptr_t) &_file_Pdd_acbot_expZ,
	/*0x008d*/ (uintptr_t) &_file_Pdd_acbot_unexpZ,
	/*0x008e*/ (uintptr_t) &_file_Pdd_bannerZ,
	/*0x008f*/ (uintptr_t) &_file_Pdd_chairZ,
	/*0x0090*/ (uintptr_t) &_file_Pdd_decodoorZ,
	/*0x0091*/ (uintptr_t) &_file_Pdd_deskZ,
	/*0x0092*/ (uintptr_t) &_file_Pdd_fanroofZ,
	/*0x0093*/ (uintptr_t) &_file_Pdd_fanwallZ,
	/*0x0094*/ (uintptr_t) &_file_Pdd_hovcabZ,
	/*0x0095*/ (uintptr_t) &_file_Pdd_hovcarZ,
	/*0x0096*/ (uintptr_t) &_file_Pdd_hovcopZ,
	/*0x0097*/ (uintptr_t) &_file_Pdd_hovercopterZ,
	/*0x0098*/ (uintptr_t) &_file_Pdd_hovmotoZ,
	/*0x0099*/ (uintptr_t) &_file_Pdd_hovtruckZ,
	/*0x009a*/ (uintptr_t) &_file_Pdd_lab_cautionZ,
	/*0x009b*/ (uintptr_t) &_file_Pdd_lab_cautiontopZ,
	/*0x009c*/ (uintptr_t) &_file_Pdd_lab_door_bsZ,
	/*0x009d*/ (uintptr_t) &_file_Pdd_lab_door_secZ,
	/*0x009e*/ (uintptr_t) &_file_Pdd_lab_door_windZ,
	/*0x009f*/ (uintptr_t) &_file_Pdd_lab_hazardZ,
	/*0x00a0*/ (uintptr_t) &_file_Pdd_lab_restrictedZ,
	/*0x00a1*/ (uintptr_t) &_file_Pdd_lab_sector2botZ,
	/*0x00a2*/ (uintptr_t) &_file_Pdd_lab_sector2topZ,
	/*0x00a3*/ (uintptr_t) &_file_Pdd_lab_sector3Z,
	/*0x00a4*/ (uintptr_t) &_file_Pdd_lab_sector3topZ,
	/*0x00a5*/ (uintptr_t) &_file_Pdd_lab_sector3windZ,
	/*0x00a6*/ (uintptr_t) &_file_Pdd_lab_sector4topZ,
	/*0x00a7*/ (uintptr_t) &_file_Pdd_liftdoorZ,
	/*0x00a8*/ (uintptr_t) &_file_Pdd_liftrZ,
	/*0x00a9*/ (uintptr_t) &_file_Pdd_officedoorZ,
	/*0x00aa*/ (uintptr_t) &_file_Pdd_plantrubberZ,
	/*0x00ab*/ (uintptr_t) &_file_Pdd_plantspiderZ,
	/*0x00ac*/ (uintptr_t) &_file_Pdd_plantspikeZ,
	/*0x00ad*/ (uintptr_t) &_file_Pdd_redarmZ,
	/*0x00ae*/ (uintptr_t) &_file_Pdd_redsofaZ,
	/*0x00af*/ (uintptr_t) &_file_Pdd_secretdoorZ,
	/*0x00b0*/ (uintptr_t) &_file_Pdd_secretdoor2Z,
	/*0x00b1*/ (uintptr_t) &_file_Pdd_servicedoorZ,
	/*0x00b2*/ (uintptr_t) &_file_Pdd_stonedeskZ,
	/*0x00b3*/ (uintptr_t) &_file_Pdd_vertblindZ,
	/*0x00b4*/ (uintptr_t) &_file_Pdd_winddoorZ,
	/*0x00b5*/ (uintptr_t) &_file_Pdd_windowZ,
	/*0x00b6*/ (uintptr_t) &_file_PddjumpshipZ,
	/*0x00b7*/ (uintptr_t) &_file_Pdoor1a_G5Z,
	/*0x00b8*/ (uintptr_t) &_file_Pdoor1atri_G5Z,
	/*0x00b9*/ (uintptr_t) &_file_Pdoor1b_G5Z,
	/*0x00ba*/ (uintptr_t) &_file_Pdoor2_G5Z,
	/*0x00bb*/ (uintptr_t) &_file_Pdoor2a_G5Z,
	/*0x00bc*/ (uintptr_t) &_file_Pdoor4a_G5Z,
	/*0x00bd*/ (uintptr_t) &_file_Pdoor4b_G5Z,
	/*0x00be*/ (uintptr_t) &_file_Pdoor_rollertrainZ,
	/*0x00bf*/ (uintptr_t) &_file_PdoorconsoleZ,
	/*0x00c0*/ (uintptr_t) &_file_Pdr_caroll_doorZ,
	/*0x00c1*/ (uintptr_t) &_file_Pdr_caroll_door_baseZ,
	/*0x00c2*/ (uintptr_t) &_file_Pdr_caroll_door_bleftZ,
	/*0x00c3*/ (uintptr_t) &_file_Pdr_caroll_door_bmainZ,
	/*0x00c4*/ (uintptr_t) &_file_Pdr_caroll_door_brightZ,
	/*0x00c5*/ (uintptr_t) &_file_Pdr_caroll_door_leftZ,
	/*0x00c6*/ (uintptr_t) &_file_Pdr_caroll_door_mainZ,
	/*0x00c7*/ (uintptr_t) &_file_Pdr_caroll_door_rightZ,
	/*0x00c8*/ (uintptr_t) &_file_PdropshipZ,
	/*0x00c9*/ (uintptr_t) &_file_PdumpsterZ,
	/*0x00ca*/ (uintptr_t) &_file_PexplosionbitZ,
	/*0x00cb*/ (uintptr_t) &_file_PflagZ,
	/*0x00cc*/ (uintptr_t) &_file_Pg5_escdoordownZ,
	/*0x00cd*/ (uintptr_t) &_file_Pg5_escdoordownboomZ,
	/*0x00ce*/ (uintptr_t) &_file_Pg5_escdoorupZ,
	/*0x00cf*/ (uintptr_t) &_file_Pg5_escdoorupboomZ,
	/*0x00d0*/ (uintptr_t) &_file_Pg5_mainframeZ,
	/*0x00d1*/ (uintptr_t) &_file_Pg5safedoorZ,
	/*0x00d2*/ (uintptr_t) &_file_Pg5carliftdoorZ,
	/*0x00d3*/ (uintptr_t) &_file_PgoldeneyelogoZ,
	/*0x00d4*/ (uintptr_t) &_file_PhooverbotZ,
	/*0x00d5*/ (uintptr_t) &_file_PhovbikeZ,
	/*0x00d6*/ (uintptr_t) &_file_PhoverbedZ,
	/*0x00d7*/ (uintptr_t) &_file_Phovercrate1Z,
	/*0x00d8*/ (uintptr_t) &_file_PlasdoorZ,
	/*0x00d9*/ (uintptr_t) &_file_PmarkerZ,
	/*0x00da*/ (uintptr_t) &_file_Pmedlabwin1Z,
	/*0x00db*/ (uintptr_t) &_file_Pmedlabwin2Z,
	/*0x00dc*/ (uintptr_t) &_file_PmodemboxZ,
	/*0x00dd*/ (uintptr_t) &_file_PnintendologoZ,
	/*0x00de*/ (uintptr_t) &_file_Pnlogo2Z,
	/*0x00df*/ (uintptr_t) &_file_Pnlogo3Z,
	/*0x00e0*/ (uintptr_t) &_file_PnlogoZ,
	/*0x00e1*/ (uintptr_t) &_file_Ppc1Z,
	/*0x00e2*/ (uintptr_t) &_file_PpdfourZ,
	/*0x00e3*/ (uintptr_t) &_file_PpdoneZ,
	/*0x00e4*/ (uintptr_t) &_file_PpdthreeZ,
	/*0x00e5*/ (uintptr_t) &_file_PpdtwoZ,
	/*0x00e6*/ (uintptr_t) &_file_PperfectdarkZ,
	/*0x00e7*/ (uintptr_t) &_file_PpolicecarZ,
	/*0x00e8*/ (uintptr_t) &_file_PravineliftZ,
	/*0x00e9*/ (uintptr_t) &_file_PropeZ,
	/*0x00ea*/ (uintptr_t) &_file_Psk_cryopod1_botZ,
	/*0x00eb*/ (uintptr_t) &_file_Psk_cryopod1_topZ,
	/*0x00ec*/ (uintptr_t) &_file_Psk_door1Z,
	/*0x00ed*/ (uintptr_t) &_file_Psk_fighter1Z,
	/*0x00ee*/ (uintptr_t) &_file_Psk_hangardoor_botZ,
	/*0x00ef*/ (uintptr_t) &_file_Psk_hangardoor_topZ,
	/*0x00f0*/ (uintptr_t) &_file_Psk_ship_door1Z,
	/*0x00f1*/ (uintptr_t) &_file_Psk_ship_holo1Z,
	/*0x00f2*/ (uintptr_t) &_file_Psk_ship_holo2Z,
	/*0x00f3*/ (uintptr_t) &_file_Psk_ship_hulldoor1Z,
	/*0x00f4*/ (uintptr_t) &_file_Psk_ship_hulldoor2Z,
	/*0x00f5*/ (uintptr_t) &_file_Psk_ship_hulldoor3Z,
	/*0x00f6*/ (uintptr_t) &_file_Psk_ship_hulldoor4Z,
	/*0x00f7*/ (uintptr_t) &_file_Psk_under_generatorZ,
	/*0x00f8*/ (uintptr_t) &_file_Psk_under_transZ,
	/*0x00f9*/ (uintptr_t) &_file_Pskcrev_exp1Z,
	/*0x00fa*/ (uintptr_t) &_file_Pskcrev_unexp1Z,
	/*0x00fb*/ (uintptr_t) &_file_Psktnl_exp1Z,
	/*0x00fc*/ (uintptr_t) &_file_Psktnl_unexp1Z,
	/*0x00fd*/ (uintptr_t) &_file_PtaxicabZ,
	/*0x00fe*/ (uintptr_t) &_file_PtesterbotZ,
	/*0x00ff*/ (uintptr_t) &_file_PtestobjZ,
	/*0x0100*/ (uintptr_t) &_file_PtvscreenZ,
	/*0x0101*/ (uintptr_t) &_file_PwindowZ,
	/*0x0102*/ (uintptr_t) &_file_Ump_setupameZ,
	/*0x0103*/ (uintptr_t) &_file_Ump_setuparchZ,
	/*0x0104*/ (uintptr_t) &_file_Ump_setuparecZ,
	/*0x0105*/ (uintptr_t) &_file_Ump_setuparkZ,
	/*0x0106*/ (uintptr_t) &_file_Ump_setupashZ,
	/*0x0107*/ (uintptr_t) &_file_Ump_setupaztZ,
	/*0x0108*/ (uintptr_t) &_file_Ump_setupcatZ,
	/*0x0109*/ (uintptr_t) &_file_Ump_setupcaveZ,
	/*0x010a*/ (uintptr_t) &_file_Ump_setupcradZ,
	/*0x010b*/ (uintptr_t) &_file_Ump_setupcrypZ,
	/*0x010c*/ (uintptr_t) &_file_Ump_setupdamZ,
	/*0x010d*/ (uintptr_t) &_file_Ump_setupdepoZ,
	/*0x010e*/ (uintptr_t) &_file_Ump_setupdestZ,
	/*0x010f*/ (uintptr_t) &_file_Ump_setupdishZ,
	/*0x0110*/ (uintptr_t) &_file_Ump_setupearZ,
	/*0x0111*/ (uintptr_t) &_file_Ump_setupeldZ,
	/*0x0112*/ (uintptr_t) &_file_Ump_setupimpZ,
	/*0x0113*/ (uintptr_t) &_file_Ump_setupjunZ,
	/*0x0114*/ (uintptr_t) &_file_Ump_setupleeZ,
	/*0x0115*/ (uintptr_t) &_file_Ump_setuplenZ,
	/*0x0116*/ (uintptr_t) &_file_Ump_setuplipZ,
	/*0x0117*/ (uintptr_t) &_file_Ump_setuplueZ,
	/*0x0118*/ (uintptr_t) &_file_Ump_setupoatZ,
	/*0x0119*/ (uintptr_t) &_file_Ump_setuppamZ,
	/*0x011a*/ (uintptr_t) &_file_Ump_setuppeteZ,
	/*0x011b*/ (uintptr_t) &_file_Ump_setuprefZ,
	/*0x011c*/ (uintptr_t) &_file_Ump_setupritZ,
	/*0x011d*/ (uintptr_t) &_file_Ump_setuprunZ,
	/*0x011e*/ (uintptr_t) &_file_Ump_setupsevZ,
	/*0x011f*/ (uintptr_t) &_file_Ump_setupsevbZ,
	/*0x0120*/ (uintptr_t) &_file_Ump_setupsevxZ,
	/*0x0121*/ (uintptr_t) &_file_Ump_setupshoZ,
	/*0x0122*/ (uintptr_t) &_file_Ump_setupsiloZ,
	/*0x0123*/ (uintptr_t) &_file_Ump_setupstatZ,
	/*0x0124*/ (uintptr_t) &_file_Ump_setuptraZ,
	/*0x0125*/ (uintptr_t) &_file_Ump_setupwaxZ,
	/*0x0126*/ (uintptr_t) &_file_UsetupameZ,
	/*0x0127*/ (uintptr_t) &_file_UsetuparchZ,
	/*0x0128*/ (uintptr_t) &_file_UsetuparecZ,
	/*0x0129*/ (uintptr_t) &_file_UsetuparkZ,
	/*0x012a*/ (uintptr_t) &_file_UsetupashZ,
	/*0x012b*/ (uintptr_t) &_file_UsetupaztZ,
	/*0x012c*/ (uintptr_t) &_file_UsetupcatZ,
	/*0x012d*/ (uintptr_t) &_file_UsetupcaveZ,
	/*0x012e*/ (uintptr_t) &_file_UsetupcradZ,
	/*0x012f*/ (uintptr_t) &_file_UsetupcrypZ,
	/*0x0130*/ (uintptr_t) &_file_UsetupdamZ,
	/*0x0131*/ (uintptr_t) &_file_UsetupdepoZ,
	/*0x0132*/ (uintptr_t) &_file_UsetupdestZ,
	/*0x0133*/ (uintptr_t) &_file_UsetupdishZ,
	/*0x0134*/ (uintptr_t) &_file_UsetupearZ,
	/*0x0135*/ (uintptr_t) &_file_UsetupeldZ,
	/*0x0136*/ (uintptr_t) &_file_UsetupimpZ,
	/*0x0137*/ (uintptr_t) &_file_UsetupjunZ,
	/*0x0138*/ (uintptr_t) &_file_UsetupleeZ,
	/*0x0139*/ (uintptr_t) &_file_UsetuplenZ,
	/*0x013a*/ (uintptr_t) &_file_UsetuplipZ,
	/*0x013b*/ (uintptr_t) &_file_UsetuplueZ,
	/*0x013c*/ (uintptr_t) &_file_UsetupoatZ,
	/*0x013d*/ (uintptr_t) &_file_UsetuppamZ,
	/*0x013e*/ (uintptr_t) &_file_UsetuppeteZ,
	/*0x013f*/ (uintptr_t) &_file_UsetuprefZ,
	/*0x0140*/ (uintptr_t) &_file_UsetupritZ,
	/*0x0141*/ (uintptr_t) &_file_UsetuprunZ,
	/*0x0142*/ (uintptr_t) &_file_UsetupsevZ,
	/*0x0143*/ (uintptr_t) &_file_UsetupsevbZ,
	/*0x0144*/ (uintptr_t) &_file_UsetupsevxZ,
	/*0x0145*/ (uintptr_t) &_file_UsetupsevxbZ,
	/*0x0146*/ (uintptr_t) &_file_UsetupshoZ,
	/*0x0147*/ (uintptr_t) &_file_UsetupsiloZ,
	/*0x0148*/ (uintptr_t) &_file_UsetupstatZ,
	/*0x0149*/ (uintptr_t) &_file_UsetuptraZ,
	/*0x014a*/ (uintptr_t) &_file_UsetupwaxZ,
	/*0x014b*/ (uintptr_t) &_file_bg_ame_padsZ,
	/*0x014c*/ (uintptr_t) &_file_bg_ame_tilesZ,
	/*0x014d*/ (uintptr_t) &_file_bg_arch_padsZ,
	/*0x014e*/ (uintptr_t) &_file_bg_arch_tilesZ,
	/*0x014f*/ (uintptr_t) &_file_bg_arec_padsZ,
	/*0x0150*/ (uintptr_t) &_file_bg_arec_tilesZ,
	/*0x0151*/ (uintptr_t) &_file_bg_ark_padsZ,
	/*0x0152*/ (uintptr_t) &_file_bg_ark_tilesZ,
	/*0x0153*/ (uintptr_t) &_file_bg_ash_padsZ,
	/*0x0154*/ (uintptr_t) &_file_bg_ash_tilesZ,
	/*0x0155*/ (uintptr_t) &_file_bg_azt_padsZ,
	/*0x0156*/ (uintptr_t) &_file_bg_azt_tilesZ,
	/*0x0157*/ (uintptr_t) &_file_bg_cat_padsZ,
	/*0x0158*/ (uintptr_t) &_file_bg_cat_tilesZ,
	/*0x0159*/ (uintptr_t) &_file_bg_cave_padsZ,
	/*0x015a*/ (uintptr_t) &_file_bg_cave_tilesZ,
	/*0x015b*/ (uintptr_t) &_file_bg_crad_padsZ,
	/*0x015c*/ (uintptr_t) &_file_bg_crad_tilesZ,
	/*0x015d*/ (uintptr_t) &_file_bg_cryp_padsZ,
	/*0x015e*/ (uintptr_t) &_file_bg_cryp_tilesZ,
	/*0x015f*/ (uintptr_t) &_file_bg_dam_padsZ,
	/*0x0160*/ (uintptr_t) &_file_bg_dam_tilesZ,
	/*0x0161*/ (uintptr_t) &_file_bg_depo_padsZ,
	/*0x0162*/ (uintptr_t) &_file_bg_depo_tilesZ,
	/*0x0163*/ (uintptr_t) &_file_bg_dest_padsZ,
	/*0x0164*/ (uintptr_t) &_file_bg_dest_tilesZ,
	/*0x0165*/ (uintptr_t) &_file_bg_dish_padsZ,
	/*0x0166*/ (uintptr_t) &_file_bg_dish_tilesZ,
	/*0x0167*/ (uintptr_t) &_file_bg_ear_padsZ,
	/*0x0168*/ (uintptr_t) &_file_bg_ear_tilesZ,
	/*0x0169*/ (uintptr_t) &_file_bg_eld_padsZ,
	/*0x016a*/ (uintptr_t) &_file_bg_eld_tilesZ,
	/*0x016b*/ (uintptr_t) &_file_bg_imp_padsZ,
	/*0x016c*/ (uintptr_t) &_file_bg_imp_tilesZ,
	/*0x016d*/ (uintptr_t) &_file_bg_jun_padsZ,
	/*0x016e*/ (uintptr_t) &_file_bg_jun_tilesZ,
	/*0x016f*/ (uintptr_t) &_file_bg_lee_padsZ,
	/*0x0170*/ (uintptr_t) &_file_bg_lee_tilesZ,
	/*0x0171*/ (uintptr_t) &_file_bg_len_padsZ,
	/*0x0172*/ (uintptr_t) &_file_bg_len_tilesZ,
	/*0x0173*/ (uintptr_t) &_file_bg_lip_padsZ,
	/*0x0174*/ (uintptr_t) &_file_bg_lip_tilesZ,
	/*0x0175*/ (uintptr_t) &_file_bg_lue_padsZ,
	/*0x0176*/ (uintptr_t) &_file_bg_lue_tilesZ,
	/*0x0177*/ (uintptr_t) &_file_bg_oat_padsZ,
	/*0x0178*/ (uintptr_t) &_file_bg_oat_tilesZ,
	/*0x0179*/ (uintptr_t) &_file_bg_pam_padsZ,
	/*0x017a*/ (uintptr_t) &_file_bg_pam_tilesZ,
	/*0x017b*/ (uintptr_t) &_file_bg_pete_padsZ,
	/*0x017c*/ (uintptr_t) &_file_bg_pete_tilesZ,
	/*0x017d*/ (uintptr_t) &_file_bg_ref_padsZ,
	/*0x017e*/ (uintptr_t) &_file_bg_ref_tilesZ,
	/*0x017f*/ (uintptr_t) &_file_bg_rit_padsZ,
	/*0x0180*/ (uintptr_t) &_file_bg_rit_tilesZ,
	/*0x0181*/ (uintptr_t) &_file_bg_run_padsZ,
	/*0x0182*/ (uintptr_t) &_file_bg_run_tilesZ,
	/*0x0183*/ (uintptr_t) &_file_bg_sev_padsZ,
	/*0x0184*/ (uintptr_t) &_file_bg_sev_tilesZ,
	/*0x0185*/ (uintptr_t) &_file_bg_sevb_padsZ,
	/*0x0186*/ (uintptr_t) &_file_bg_sevb_tilesZ,
	/*0x0187*/ (uintptr_t) &_file_bg_sevx_padsZ,
	/*0x0188*/ (uintptr_t) &_file_bg_sevx_tilesZ,
	/*0x0189*/ (uintptr_t) &_file_bg_sho_padsZ,
	/*0x018a*/ (uintptr_t) &_file_bg_sho_tilesZ,
	/*0x018b*/ (uintptr_t) &_file_bg_silo_padsZ,
	/*0x018c*/ (uintptr_t) &_file_bg_silo_tilesZ,
	/*0x018d*/ (uintptr_t) &_file_bg_stat_padsZ,
	/*0x018e*/ (uintptr_t) &_file_bg_stat_tilesZ,
	/*0x018f*/ (uintptr_t) &_file_bg_tra_padsZ,
	/*0x0190*/ (uintptr_t) &_file_bg_tra_tilesZ,
	/*0x0191*/ (uintptr_t) &_file_bg_wax_padsZ,
	/*0x0192*/ (uintptr_t) &_file_bg_wax_tilesZ,
	/*0x0193*/ (uintptr_t) &_file_GtestgunZ,
	/*0x0194*/ (uintptr_t) &_file_Cdd_labtechZ,
	/*0x0195*/ (uintptr_t) &_file_Pcctv_pdZ,
	/*0x0196*/ (uintptr_t) &_file_PcomhubZ,
	/*0x0197*/ (uintptr_t) &_file_PquadpodZ,
	/*0x0198*/ (uintptr_t) &_file_Ppd_consoleZ,
	/*0x0199*/ (uintptr_t) &_file_CconneryZ,
	/*0x019a*/ (uintptr_t) &_file_CmooreZ,
	/*0x019b*/ (uintptr_t) &_file_CdaltonZ,
	/*0x019c*/ (uintptr_t) &_file_Cheaddark_combatZ,
	/*0x019d*/ (uintptr_t) &_file_CheadelvisZ,
	/*0x019e*/ (uintptr_t) &_file_CheadrossZ,
	/*0x019f*/ (uintptr_t) &_file_CheadcarringtonZ,
	/*0x01a0*/ (uintptr_t) &_file_CheadmrblondeZ,
	/*0x01a1*/ (uintptr_t) &_file_CheadtrentZ,
	/*0x01a2*/ (uintptr_t) &_file_CheadddshockZ,
	/*0x01a3*/ (uintptr_t) &_file_CheadgrahamZ,
	/*0x01a4*/ (uintptr_t) &_file_Cheaddark_frockZ,
	/*0x01a5*/ (uintptr_t) &_file_CheadsecretaryZ,
	/*0x01a6*/ (uintptr_t) &_file_CheadcassandraZ,
	/*0x01a7*/ (uintptr_t) &_file_CheadthekingZ,
	/*0x01a8*/ (uintptr_t) &_file_Cheadfem_guardZ,
	/*0x01a9*/ (uintptr_t) &_file_CheadjonZ,
	/*0x01aa*/ (uintptr_t) &_file_Plift_platformZ,
	/*0x01ab*/ (uintptr_t) &_file_Pdd_grateZ,
	/*0x01ac*/ (uintptr_t) &_file_PlightswitchZ,
	/*0x01ad*/ (uintptr_t) &_file_PblastshieldZ,
	/*0x01ae*/ (uintptr_t) &_file_Plightswitch2Z,
	/*0x01af*/ (uintptr_t) &_file_Pdd_accessdoorupZ,
	/*0x01b0*/ (uintptr_t) &_file_Pdd_accessdoordnZ,
	/*0x01b1*/ (uintptr_t) &_file_Cdark_rippedZ,
	/*0x01b2*/ (uintptr_t) &_file_Cheadmark2Z,
	/*0x01b3*/ (uintptr_t) &_file_CheadchristZ,
	/*0x01b4*/ (uintptr_t) &_file_Plab_containerZ,
	/*0x01b5*/ (uintptr_t) &_file_Plab_chairZ,
	/*0x01b6*/ (uintptr_t) &_file_Plab_tableZ,
	/*0x01b7*/ (uintptr_t) &_file_Plab_microscopeZ,
	/*0x01b8*/ (uintptr_t) &_file_Plab_mainframeZ,
	/*0x01b9*/ (uintptr_t) &_file_Pdd_labdoorZ,
	/*0x01ba*/ (uintptr_t) &_file_Pdd_lab_doortopZ,
	/*0x01bb*/ (uintptr_t) &_file_Pmulti_ammo_crateZ,
	/*0x01bc*/ (uintptr_t) &_file_CheadrussZ,
	/*0x01bd*/ (uintptr_t) &_file_CheadgreyZ,
	/*0x01be*/ (uintptr_t) &_file_CheaddarlingZ,
	/*0x01bf*/ (uintptr_t) &_file_Cdd_guardZ,
	/*0x01c0*/ (uintptr_t) &_file_CheadrobertZ,
	/*0x01c1*/ (uintptr_t) &_file_Cdd_shockZ,
	/*0x01c2*/ (uintptr_t) &_file_CheadbeauZ,
	/*0x01c3*/ (uintptr_t) &_file_PchrchainZ,
	/*0x01c4*/ (uintptr_t) &_file_Cdd_shock_infZ,
	/*0x01c5*/ (uintptr_t) &_file_Cheadfem_guard2Z,
	/*0x01c6*/ (uintptr_t) &_file_ProofgunZ,
	/*0x01c7*/ (uintptr_t) &_file_PtdoorZ,
	/*0x01c8*/ (uintptr_t) &_file_CbiotechZ,
	/*0x01c9*/ (uintptr_t) &_file_CfbiguyZ,
	/*0x01ca*/ (uintptr_t) &_file_PgroundgunZ,
	/*0x01cb*/ (uintptr_t) &_file_CciaguyZ,
	/*0x01cc*/ (uintptr_t) &_file_Ca51trooperZ,
	/*0x01cd*/ (uintptr_t) &_file_CheadbrianZ,
	/*0x01ce*/ (uintptr_t) &_file_CheadjamieZ,
	/*0x01cf*/ (uintptr_t) &_file_Cheadduncan2Z,
	/*0x01d0*/ (uintptr_t) &_file_CheadbiotechZ,
	/*0x01d1*/ (uintptr_t) &_file_UsetupuffZ,
	/*0x01d2*/ (uintptr_t) &_file_Ump_setupuffZ,
	/*0x01d3*/ (uintptr_t) &_file_bg_uff_padsZ,
	/*0x01d4*/ (uintptr_t) &_file_bg_uff_tilesZ,
	/*0x01d5*/ (uintptr_t) &_file_UsetupoldZ,
	/*0x01d6*/ (uintptr_t) &_file_Ump_setupoldZ,
	/*0x01d7*/ (uintptr_t) &_file_bg_old_padsZ,
	/*0x01d8*/ (uintptr_t) &_file_bg_old_tilesZ,
	/*0x01d9*/ (uintptr_t) &_file_UsetupateZ,
	/*0x01da*/ (uintptr_t) &_file_Ump_setupateZ,
	/*0x01db*/ (uintptr_t) &_file_bg_ate_padsZ,
	/*0x01dc*/ (uintptr_t) &_file_bg_ate_tilesZ,
	/*0x01dd*/ (uintptr_t) &_file_UsetuplamZ,
	/*0x01de*/ (uintptr_t) &_file_Ump_setuplamZ,
	/*0x01df*/ (uintptr_t) &_file_bg_lam_padsZ,
	/*0x01e0*/ (uintptr_t) &_file_bg_lam_tilesZ,
	/*0x01e1*/ (uintptr_t) &_file_Usetupmp1Z,
	/*0x01e2*/ (uintptr_t) &_file_Ump_setupmp1Z,
	/*0x01e3*/ (uintptr_t) &_file_bg_mp1_padsZ,
	/*0x01e4*/ (uintptr_t) &_file_bg_mp1_tilesZ,
	/*0x01e5*/ (uintptr_t) &_file_Usetupmp2Z,
	/*0x01e6*/ (uintptr_t) &_file_Ump_setupmp2Z,
	/*0x01e7*/ (uintptr_t) &_file_bg_mp2_padsZ,
	/*0x01e8*/ (uintptr_t) &_file_bg_mp2_tilesZ,
	/*0x01e9*/ (uintptr_t) &_file_Usetupmp3Z,
	/*0x01ea*/ (uintptr_t) &_file_Ump_setupmp3Z,
	/*0x01eb*/ (uintptr_t) &_file_bg_mp3_padsZ,
	/*0x01ec*/ (uintptr_t) &_file_bg_mp3_tilesZ,
	/*0x01ed*/ (uintptr_t) &_file_Usetupmp4Z,
	/*0x01ee*/ (uintptr_t) &_file_Ump_setupmp4Z,
	/*0x01ef*/ (uintptr_t) &_file_bg_mp4_padsZ,
	/*0x01f0*/ (uintptr_t) &_file_bg_mp4_tilesZ,
	/*0x01f1*/ (uintptr_t) &_file_Usetupmp5Z,
	/*0x01f2*/ (uintptr_t) &_file_Ump_setupmp5Z,
	/*0x01f3*/ (uintptr_t) &_file_bg_mp5_padsZ,
	/*0x01f4*/ (uintptr_t) &_file_bg_mp5_tilesZ,
	/*0x01f5*/ (uintptr_t) &_file_Usetupmp6Z,
	/*0x01f6*/ (uintptr_t) &_file_Ump_setupmp6Z,
	/*0x01f7*/ (uintptr_t) &_file_bg_mp6_padsZ,
	/*0x01f8*/ (uintptr_t) &_file_bg_mp6_tilesZ,
	/*0x01f9*/ (uintptr_t) &_file_Usetupmp7Z,
	/*0x01fa*/ (uintptr_t) &_file_Ump_setupmp7Z,
	/*0x01fb*/ (uintptr_t) &_file_bg_mp7_padsZ,
	/*0x01fc*/ (uintptr_t) &_file_bg_mp7_tilesZ,
	/*0x01fd*/ (uintptr_t) &_file_Usetupmp8Z,
	/*0x01fe*/ (uintptr_t) &_file_Ump_setupmp8Z,
	/*0x01ff*/ (uintptr_t) &_file_bg_mp8_padsZ,
	/*0x0200*/ (uintptr_t) &_file_bg_mp8_tilesZ,
	/*0x0201*/ (uintptr_t) &_file_Usetupmp9Z,
	/*0x0202*/ (uintptr_t) &_file_Ump_setupmp9Z,
	/*0x0203*/ (uintptr_t) &_file_bg_mp9_padsZ,
	/*0x0204*/ (uintptr_t) &_file_bg_mp9_tilesZ,
	/*0x0205*/ (uintptr_t) &_file_Usetupmp10Z,
	/*0x0206*/ (uintptr_t) &_file_Ump_setupmp10Z,
	/*0x0207*/ (uintptr_t) &_file_bg_mp10_padsZ,
	/*0x0208*/ (uintptr_t) &_file_bg_mp10_tilesZ,
	/*0x0209*/ (uintptr_t) &_file_Usetupmp11Z,
	/*0x020a*/ (uintptr_t) &_file_Ump_setupmp11Z,
	/*0x020b*/ (uintptr_t) &_file_bg_mp11_padsZ,
	/*0x020c*/ (uintptr_t) &_file_bg_mp11_tilesZ,
	/*0x020d*/ (uintptr_t) &_file_Usetupmp12Z,
	/*0x020e*/ (uintptr_t) &_file_Ump_setupmp12Z,
	/*0x020f*/ (uintptr_t) &_file_bg_mp12_padsZ,
	/*0x0210*/ (uintptr_t) &_file_bg_mp12_tilesZ,
	/*0x0211*/ (uintptr_t) &_file_Usetupmp13Z,
	/*0x0212*/ (uintptr_t) &_file_Ump_setupmp13Z,
	/*0x0213*/ (uintptr_t) &_file_bg_mp13_padsZ,
	/*0x0214*/ (uintptr_t) &_file_bg_mp13_tilesZ,
	/*0x0215*/ (uintptr_t) &_file_Usetupmp14Z,
	/*0x0216*/ (uintptr_t) &_file_Ump_setupmp14Z,
	/*0x0217*/ (uintptr_t) &_file_bg_mp14_padsZ,
	/*0x0218*/ (uintptr_t) &_file_bg_mp14_tilesZ,
	/*0x0219*/ (uintptr_t) &_file_Usetupmp15Z,
	/*0x021a*/ (uintptr_t) &_file_Ump_setupmp15Z,
	/*0x021b*/ (uintptr_t) &_file_bg_mp15_padsZ,
	/*0x021c*/ (uintptr_t) &_file_bg_mp15_tilesZ,
	/*0x021d*/ (uintptr_t) &_file_Usetupmp16Z,
	/*0x021e*/ (uintptr_t) &_file_Ump_setupmp16Z,
	/*0x021f*/ (uintptr_t) &_file_bg_mp16_padsZ,
	/*0x0220*/ (uintptr_t) &_file_bg_mp16_tilesZ,
	/*0x0221*/ (uintptr_t) &_file_Usetupmp17Z,
	/*0x0222*/ (uintptr_t) &_file_Ump_setupmp17Z,
	/*0x0223*/ (uintptr_t) &_file_bg_mp17_padsZ,
	/*0x0224*/ (uintptr_t) &_file_bg_mp17_tilesZ,
	/*0x0225*/ (uintptr_t) &_file_Usetupmp18Z,
	/*0x0226*/ (uintptr_t) &_file_Ump_setupmp18Z,
	/*0x0227*/ (uintptr_t) &_file_bg_mp18_padsZ,
	/*0x0228*/ (uintptr_t) &_file_bg_mp18_tilesZ,
	/*0x0229*/ (uintptr_t) &_file_Usetupmp19Z,
	/*0x022a*/ (uintptr_t) &_file_Ump_setupmp19Z,
	/*0x022b*/ (uintptr_t) &_file_bg_mp19_padsZ,
	/*0x022c*/ (uintptr_t) &_file_bg_mp19_tilesZ,
	/*0x022d*/ (uintptr_t) &_file_Usetupmp20Z,
	/*0x022e*/ (uintptr_t) &_file_Ump_setupmp20Z,
	/*0x022f*/ (uintptr_t) &_file_bg_mp20_padsZ,
	/*0x0230*/ (uintptr_t) &_file_bg_mp20_tilesZ,
	/*0x0231*/ (uintptr_t) &_file_Ca51airmanZ,
	/*0x0232*/ (uintptr_t) &_file_Cheadneil2Z,
	/*0x0233*/ (uintptr_t) &_file_Pci_sofaZ,
	/*0x0234*/ (uintptr_t) &_file_Pci_liftZ,
	/*0x0235*/ (uintptr_t) &_file_Pci_liftdoorZ,
	/*0x0236*/ (uintptr_t) &_file_CchicrobZ,
	/*0x0237*/ (uintptr_t) &_file_CstewardZ,
	/*0x0238*/ (uintptr_t) &_file_CheadedmcgZ,
	/*0x0239*/ (uintptr_t) &_file_CstewardessZ,
	/*0x023a*/ (uintptr_t) &_file_CheadankaZ,
	/*0x023b*/ (uintptr_t) &_file_CpresidentZ,
	/*0x023c*/ (uintptr_t) &_file_Cstewardess_coatZ,
	/*0x023d*/ (uintptr_t) &_file_Cheadleslie_sZ,
	/*0x023e*/ (uintptr_t) &_file_PlasercutZ,
	/*0x023f*/ (uintptr_t) &_file_Psk_shuttleZ,
	/*0x0240*/ (uintptr_t) &_file_CminiskedarZ,
	/*0x0241*/ (uintptr_t) &_file_PnewvilladoorZ,
	/*0x0242*/ (uintptr_t) &_file_Cnsa_lackeyZ,
	/*0x0243*/ (uintptr_t) &_file_Cheadmatt_cZ,
	/*0x0244*/ (uintptr_t) &_file_Cpres_securityZ,
	/*0x0245*/ (uintptr_t) &_file_Cheadpeer_sZ,
	/*0x0246*/ (uintptr_t) &_file_CnegotiatorZ,
	/*0x0247*/ (uintptr_t) &_file_Cheadeileen_tZ,
	/*0x0248*/ (uintptr_t) &_file_Psk_pillarleftZ,
	/*0x0249*/ (uintptr_t) &_file_Psk_pillarrightZ,
	/*0x024a*/ (uintptr_t) &_file_Psk_plinth_tZ,
	/*0x024b*/ (uintptr_t) &_file_Psk_plinth_mlZ,
	/*0x024c*/ (uintptr_t) &_file_Psk_plinth_mrZ,
	/*0x024d*/ (uintptr_t) &_file_Psk_plinth_blZ,
	/*0x024e*/ (uintptr_t) &_file_Psk_plinth_brZ,
	/*0x024f*/ (uintptr_t) &_file_Psk_fl_shad_tZ,
	/*0x0250*/ (uintptr_t) &_file_Psk_fl_shad_mlZ,
	/*0x0251*/ (uintptr_t) &_file_Psk_fl_shad_mrZ,
	/*0x0252*/ (uintptr_t) &_file_Psk_fl_shad_blZ,
	/*0x0253*/ (uintptr_t) &_file_Psk_fl_shad_brZ,
	/*0x0254*/ (uintptr_t) &_file_Psk_fl_noshad_tZ,
	/*0x0255*/ (uintptr_t) &_file_Psk_fl_noshad_mlZ,
	/*0x0256*/ (uintptr_t) &_file_Psk_fl_noshad_mrZ,
	/*0x0257*/ (uintptr_t) &_file_Psk_fl_noshad_blZ,
	/*0x0258*/ (uintptr_t) &_file_Psk_fl_noshad_brZ,
	/*0x0259*/ (uintptr_t) &_file_GhudpieceZ,
	/*0x025a*/ (uintptr_t) &_file_Psk_templecolumn1Z,
	/*0x025b*/ (uintptr_t) &_file_Psk_templecolumn2Z,
	/*0x025c*/ (uintptr_t) &_file_Psk_templecolumn3Z,
	/*0x025d*/ (uintptr_t) &_file_Psk_sunshad1Z,
	/*0x025e*/ (uintptr_t) &_file_Psk_sunshad2Z,
	/*0x025f*/ (uintptr_t) &_file_Psk_sunnoshad1Z,
	/*0x0260*/ (uintptr_t) &_file_Psk_sunnoshad2Z,
	/*0x0261*/ (uintptr_t) &_file_Cg5_guardZ,
	/*0x0262*/ (uintptr_t) &_file_Cheadandy_rZ,
	/*0x0263*/ (uintptr_t) &_file_Cpelagic_guardZ,
	/*0x0264*/ (uintptr_t) &_file_Cg5_swat_guardZ,
	/*0x0265*/ (uintptr_t) &_file_Calaskan_guardZ,
	/*0x0266*/ (uintptr_t) &_file_Cmaian_soldierZ,
	/*0x0267*/ (uintptr_t) &_file_Cheadben_rZ,
	/*0x0268*/ (uintptr_t) &_file_Cheadsteve_kZ,
	/*0x0269*/ (uintptr_t) &_file_PbarrelZ,
	/*0x026a*/ (uintptr_t) &_file_Pglass_floorZ,
	/*0x026b*/ (uintptr_t) &_file_Pesca_stepZ,
	/*0x026c*/ (uintptr_t) &_file_Pmatrix_liftZ,
	/*0x026d*/ (uintptr_t) &_file_Prubble1Z,
	/*0x026e*/ (uintptr_t) &_file_Prubble2Z,
	/*0x026f*/ (uintptr_t) &_file_Prubble3Z,
	/*0x0270*/ (uintptr_t) &_file_Prubble4Z,
	/*0x0271*/ (uintptr_t) &_file_Arecep01M,
	/*0x0272*/ (uintptr_t) &_file_Arecep02M,
	/*0x0273*/ (uintptr_t) &_file_Arecep03M,
	/*0x0274*/ (uintptr_t) &_file_Arecep04M,
	/*0x0275*/ (uintptr_t) &_file_Arecep05M,
	/*0x0276*/ (uintptr_t) &_file_Arecep06M,
	/*0x0277*/ (uintptr_t) &_file_Arlguard1M,
	/*0x0278*/ (uintptr_t) &_file_Arltech01M,
	/*0x0279*/ (uintptr_t) &_file_Arltech02M,
	/*0x027a*/ (uintptr_t) &_file_Arltech03M,
	/*0x027b*/ (uintptr_t) &_file_Arltech04M,
	/*0x027c*/ (uintptr_t) &_file_Arltech05M,
	/*0x027d*/ (uintptr_t) &_file_Arltech06M,
	/*0x027e*/ (uintptr_t) &_file_Ascie2aM,
	/*0x027f*/ (uintptr_t) &_file_Ascie2bM,
	/*0x0280*/ (uintptr_t) &_file_Ascie2cM,
	/*0x0281*/ (uintptr_t) &_file_Ascie2dM,
	/*0x0282*/ (uintptr_t) &_file_Ascie2eM,
	/*0x0283*/ (uintptr_t) &_file_Ascie2fM,
	/*0x0284*/ (uintptr_t) &_file_Ascie2gM,
	/*0x0285*/ (uintptr_t) &_file_Ascie3aM,
	/*0x0286*/ (uintptr_t) &_file_Ascie3bM,
	/*0x0287*/ (uintptr_t) &_file_Ascie3cM,
	/*0x0288*/ (uintptr_t) &_file_Ascie3dM,
	/*0x0289*/ (uintptr_t) &_file_Ascie3eM,
	/*0x028a*/ (uintptr_t) &_file_Ascie3gM,
	/*0x028b*/ (uintptr_t) &_file_Ascien10aM,
	/*0x028c*/ (uintptr_t) &_file_Ascien2_aM,
	/*0x028d*/ (uintptr_t) &_file_Ascien3_aM,
	/*0x028e*/ (uintptr_t) &_file_Ascien4_aM,
	/*0x028f*/ (uintptr_t) &_file_Ascien5_aM,
	/*0x0290*/ (uintptr_t) &_file_Ascien6_aM,
	/*0x0291*/ (uintptr_t) &_file_Ascien7_aM,
	/*0x0292*/ (uintptr_t) &_file_Ascien9_aM,
	/*0x0293*/ (uintptr_t) &_file_AvilgrimM,
	/*0x0294*/ (uintptr_t) &_file_Awepgd01M,
	/*0x0295*/ (uintptr_t) &_file_Awepgd02M,
	/*0x0296*/ (uintptr_t) &_file_Awepgd03M,
	/*0x0297*/ (uintptr_t) &_file_Awepsc01M,
	/*0x0298*/ (uintptr_t) &_file_Awepsc02M,
	/*0x0299*/ (uintptr_t) &_file_Awepsc03M,
	/*0x029a*/ (uintptr_t) &_file_Aa51elv01M,
	/*0x029b*/ (uintptr_t) &_file_Aa51elv02M,
	/*0x029c*/ (uintptr_t) &_file_Aa51elv03M,
	/*0x029d*/ (uintptr_t) &_file_Aa51grd01M,
	/*0x029e*/ (uintptr_t) &_file_Aa51grd02M,
	/*0x029f*/ (uintptr_t) &_file_Aa51grd03M,
	/*0x02a0*/ (uintptr_t) &_file_Aa51grd04M,
	/*0x02a1*/ (uintptr_t) &_file_Aa51grd05M,
	/*0x02a2*/ (uintptr_t) &_file_Aa51grd06M,
	/*0x02a3*/ (uintptr_t) &_file_Aa51grd07M,
	/*0x02a4*/ (uintptr_t) &_file_Aa51grd08M,
	/*0x02a5*/ (uintptr_t) &_file_Aa51grd09M,
	/*0x02a6*/ (uintptr_t) &_file_Aa51grd10M,
	/*0x02a7*/ (uintptr_t) &_file_Aa51jo1M,
	/*0x02a8*/ (uintptr_t) &_file_Aa51jo2M,
	/*0x02a9*/ (uintptr_t) &_file_Aa51jo3M,
	/*0x02aa*/ (uintptr_t) &_file_Aa51jo4M,
	/*0x02ab*/ (uintptr_t) &_file_Aa51jo5M,
	/*0x02ac*/ (uintptr_t) &_file_Aa51jo6M,
	/*0x02ad*/ (uintptr_t) &_file_Aa51jon01M,
	/*0x02ae*/ (uintptr_t) &_file_Aa51jon02M,
	/*0x02af*/ (uintptr_t) &_file_Aa51jon03M,
	/*0x02b0*/ (uintptr_t) &_file_Aa51jon04M,
	/*0x02b1*/ (uintptr_t) &_file_Aa51jon05M,
	/*0x02b2*/ (uintptr_t) &_file_Aa51jon06M,
	/*0x02b3*/ (uintptr_t) &_file_Aa51jon07M,
	/*0x02b4*/ (uintptr_t) &_file_Aa51jon08M,
	/*0x02b5*/ (uintptr_t) &_file_Aa51jon09M,
	/*0x02b6*/ (uintptr_t) &_file_Aa51jon10M,
	/*0x02b7*/ (uintptr_t) &_file_Aa51jon11M,
	/*0x02b8*/ (uintptr_t) &_file_Aa51jon12M,
	/*0x02b9*/ (uintptr_t) &_file_Aa51jon14M,
	/*0x02ba*/ (uintptr_t) &_file_Aa51jon15M,
	/*0x02bb*/ (uintptr_t) &_file_Aa51sci1M,
	/*0x02bc*/ (uintptr_t) &_file_Aaf1jo01M,
	/*0x02bd*/ (uintptr_t) &_file_Aaf1jo02M,
	/*0x02be*/ (uintptr_t) &_file_Aaf1jo03M,
	/*0x02bf*/ (uintptr_t) &_file_Aaf1pr01M,
	/*0x02c0*/ (uintptr_t) &_file_Aaf1pr02M,
	/*0x02c1*/ (uintptr_t) &_file_Aaf1pr03M,
	/*0x02c2*/ (uintptr_t) &_file_Aaf1pr04M,
	/*0x02c3*/ (uintptr_t) &_file_Aaf1pr05M,
	/*0x02c4*/ (uintptr_t) &_file_Aaf1pr06M,
	/*0x02c5*/ (uintptr_t) &_file_Aaf1pr07M,
	/*0x02c6*/ (uintptr_t) &_file_Aaf1pr08M,
	/*0x02c7*/ (uintptr_t) &_file_Aaf1pr09M,
	/*0x02c8*/ (uintptr_t) &_file_Aaf1pr10M,
	/*0x02c9*/ (uintptr_t) &_file_Aaf1tr01M,
	/*0x02ca*/ (uintptr_t) &_file_Aaf1tr02M,
	/*0x02cb*/ (uintptr_t) &_file_Aaf1tr03M,
	/*0x02cc*/ (uintptr_t) &_file_Aairbgd01M,
	/*0x02cd*/ (uintptr_t) &_file_Aairbgd02M,
	/*0x02ce*/ (uintptr_t) &_file_Aairbgd03M,
	/*0x02cf*/ (uintptr_t) &_file_Aairbgd04M,
	/*0x02d0*/ (uintptr_t) &_file_Aairbgd05M,
	/*0x02d1*/ (uintptr_t) &_file_Aairbgd06M,
	/*0x02d2*/ (uintptr_t) &_file_Aairbgd07M,
	/*0x02d3*/ (uintptr_t) &_file_Aairbgd08M,
	/*0x02d4*/ (uintptr_t) &_file_Aairbgd09M,
	/*0x02d5*/ (uintptr_t) &_file_Aairbgd10M,
	/*0x02d6*/ (uintptr_t) &_file_Aairbgd11M,
	/*0x02d7*/ (uintptr_t) &_file_Aairbgd12M,
	/*0x02d8*/ (uintptr_t) &_file_Aairbgd13M,
	/*0x02d9*/ (uintptr_t) &_file_Aairbgd14M,
	/*0x02da*/ (uintptr_t) &_file_Aairbgd15M,
	/*0x02db*/ (uintptr_t) &_file_Aairbgd16M,
	/*0x02dc*/ (uintptr_t) &_file_Aairstw01M,
	/*0x02dd*/ (uintptr_t) &_file_Aairstw02M,
	/*0x02de*/ (uintptr_t) &_file_Aairstw03M,
	/*0x02df*/ (uintptr_t) &_file_Aassael01M,
	/*0x02e0*/ (uintptr_t) &_file_Aassael02M,
	/*0x02e1*/ (uintptr_t) &_file_Aassael03M,
	/*0x02e2*/ (uintptr_t) &_file_Aassael04M,
	/*0x02e3*/ (uintptr_t) &_file_Aassael05M,
	/*0x02e4*/ (uintptr_t) &_file_Aassael06M,
	/*0x02e5*/ (uintptr_t) &_file_Absewrk01M,
	/*0x02e6*/ (uintptr_t) &_file_Absewrk02M,
	/*0x02e7*/ (uintptr_t) &_file_Absewrk03M,
	/*0x02e8*/ (uintptr_t) &_file_Absewrk04M,
	/*0x02e9*/ (uintptr_t) &_file_Absewrk05M,
	/*0x02ea*/ (uintptr_t) &_file_Acetael01M,
	/*0x02eb*/ (uintptr_t) &_file_Achdroid1M,
	/*0x02ec*/ (uintptr_t) &_file_Achdroid2M,
	/*0x02ed*/ (uintptr_t) &_file_Acsec01M,
	/*0x02ee*/ (uintptr_t) &_file_Acsec02M,
	/*0x02ef*/ (uintptr_t) &_file_Acsec03M,
	/*0x02f0*/ (uintptr_t) &_file_Acstan1M,
	/*0x02f1*/ (uintptr_t) &_file_Acstan2M,
	/*0x02f2*/ (uintptr_t) &_file_Adevr01M,
	/*0x02f3*/ (uintptr_t) &_file_Adevr02M,
	/*0x02f4*/ (uintptr_t) &_file_Adevr03M,
	/*0x02f5*/ (uintptr_t) &_file_Adevr04M,
	/*0x02f6*/ (uintptr_t) &_file_Adevr05M,
	/*0x02f7*/ (uintptr_t) &_file_Adevr06M,
	/*0x02f8*/ (uintptr_t) &_file_Adevr07M,
	/*0x02f9*/ (uintptr_t) &_file_Adevr08M,
	/*0x02fa*/ (uintptr_t) &_file_Adevr09M,
	/*0x02fb*/ (uintptr_t) &_file_Adevr10M,
	/*0x02fc*/ (uintptr_t) &_file_Adevr11M,
	/*0x02fd*/ (uintptr_t) &_file_Adevr12M,
	/*0x02fe*/ (uintptr_t) &_file_Aexec01M,
	/*0x02ff*/ (uintptr_t) &_file_Aexec02M,
	/*0x0300*/ (uintptr_t) &_file_Aexec04M,
	/*0x0301*/ (uintptr_t) &_file_Aexec05M,
	/*0x0302*/ (uintptr_t) &_file_Aexec06M,
	/*0x0303*/ (uintptr_t) &_file_Aexec07M,
	/*0x0304*/ (uintptr_t) &_file_Aexec08M,
	/*0x0305*/ (uintptr_t) &_file_Aexec09M,
	/*0x0306*/ (uintptr_t) &_file_Aexec10M,
	/*0x0307*/ (uintptr_t) &_file_Aexec11M,
	/*0x0308*/ (uintptr_t) &_file_Aexec12M,
	/*0x0309*/ (uintptr_t) &_file_Aexec13M,
	/*0x030a*/ (uintptr_t) &_file_Aexec14M,
	/*0x030b*/ (uintptr_t) &_file_Ahelic01M,
	/*0x030c*/ (uintptr_t) &_file_Ahelic02M,
	/*0x030d*/ (uintptr_t) &_file_Ahelic03M,
	/*0x030e*/ (uintptr_t) &_file_Ahologd01M,
	/*0x030f*/ (uintptr_t) &_file_AholohopkM,
	/*0x0310*/ (uintptr_t) &_file_Ainvcar01M,
	/*0x0311*/ (uintptr_t) &_file_Ainvcar02M,
	/*0x0312*/ (uintptr_t) &_file_Ainvcar03M,
	/*0x0313*/ (uintptr_t) &_file_Ainvcar04M,
	/*0x0314*/ (uintptr_t) &_file_Ainvcar05M,
	/*0x0315*/ (uintptr_t) &_file_Ainvcar06M,
	/*0x0316*/ (uintptr_t) &_file_Ainvcar07M,
	/*0x0317*/ (uintptr_t) &_file_Ainvcar08M,
	/*0x0318*/ (uintptr_t) &_file_Ainvcar09M,
	/*0x0319*/ (uintptr_t) &_file_Ainvcar10M,
	/*0x031a*/ (uintptr_t) &_file_Ainvcar11M,
	/*0x031b*/ (uintptr_t) &_file_Ainvcar12M,
	/*0x031c*/ (uintptr_t) &_file_AinvfarrM,
	/*0x031d*/ (uintptr_t) &_file_AinvfemaM,
	/*0x031e*/ (uintptr_t) &_file_AinvfostM,
	/*0x031f*/ (uintptr_t) &_file_AinvgrimM,
	/*0x0320*/ (uintptr_t) &_file_AinvhopkM,
	/*0x0321*/ (uintptr_t) &_file_AinvmaleM,
	/*0x0322*/ (uintptr_t) &_file_Ajoexec01M,
	/*0x0323*/ (uintptr_t) &_file_Ajoexec02M,
	/*0x0324*/ (uintptr_t) &_file_Ajosci01M,
	/*0x0325*/ (uintptr_t) &_file_Ajosci02M,
	/*0x0326*/ (uintptr_t) &_file_Ajosci03M,
	/*0x0327*/ (uintptr_t) &_file_Alabacc1M,
	/*0x0328*/ (uintptr_t) &_file_Alabacc2M,
	/*0x0329*/ (uintptr_t) &_file_Alabacc3M,
	/*0x032a*/ (uintptr_t) &_file_Alabacc4M,
	/*0x032b*/ (uintptr_t) &_file_Alabacc5M,
	/*0x032c*/ (uintptr_t) &_file_Alabacc6M,
	/*0x032d*/ (uintptr_t) &_file_Alabtech1M,
	/*0x032e*/ (uintptr_t) &_file_Alabtech2M,
	/*0x032f*/ (uintptr_t) &_file_Alabtech3M,
	/*0x0330*/ (uintptr_t) &_file_Alabtech5M,
	/*0x0331*/ (uintptr_t) &_file_Alabtech6M,
	/*0x0332*/ (uintptr_t) &_file_Alabtech7M,
	/*0x0333*/ (uintptr_t) &_file_Alabtech8M,
	/*0x0334*/ (uintptr_t) &_file_Alabtech9M,
	/*0x0335*/ (uintptr_t) &_file_Aoffwrk01M,
	/*0x0336*/ (uintptr_t) &_file_Aoffwrk02M,
	/*0x0337*/ (uintptr_t) &_file_Aoffwrk03M,
	/*0x0338*/ (uintptr_t) &_file_Aoffwrk04M,
	/*0x0339*/ (uintptr_t) &_file_Cpresident_cloneZ,
	/*0x033a*/ (uintptr_t) &_file_CheadjonathanZ,
	/*0x033b*/ (uintptr_t) &_file_Cheadmaian_sZ,
	/*0x033c*/ (uintptr_t) &_file_Cdark_af1Z,
	/*0x033d*/ (uintptr_t) &_file_Pcable_carZ,
	/*0x033e*/ (uintptr_t) &_file_Pelvis_saucerZ,
	/*0x033f*/ (uintptr_t) &_file_Pstewardess_trolleyZ,
	/*0x0340*/ (uintptr_t) &_file_Pairbase_lift_enclosedZ,
	/*0x0341*/ (uintptr_t) &_file_Pairbase_lift_angleZ,
	/*0x0342*/ (uintptr_t) &_file_Pairbase_safedoorZ,
	/*0x0343*/ (uintptr_t) &_file_Paf1_pilotchairZ,
	/*0x0344*/ (uintptr_t) &_file_Paf1_passchairZ,
	/*0x0345*/ (uintptr_t) &_file_CheadshaunZ,
	/*0x0346*/ (uintptr_t) &_file_PchrnightsightZ,
	/*0x0347*/ (uintptr_t) &_file_PchrshieldZ,
	/*0x0348*/ (uintptr_t) &_file_Pchrfalcon2Z,
	/*0x0349*/ (uintptr_t) &_file_Pchrleegun1Z,
	/*0x034a*/ (uintptr_t) &_file_PchrmaulerZ,
	/*0x034b*/ (uintptr_t) &_file_Pchrdy357Z,
	/*0x034c*/ (uintptr_t) &_file_Pchrdy357trentZ,
	/*0x034d*/ (uintptr_t) &_file_PchrmaianpistolZ,
	/*0x034e*/ (uintptr_t) &_file_Pchrfalcon2silZ,
	/*0x034f*/ (uintptr_t) &_file_Pchrfalcon2scopeZ,
	/*0x0350*/ (uintptr_t) &_file_Pchrcmp150Z,
	/*0x0351*/ (uintptr_t) &_file_Pchrar34Z,
	/*0x0352*/ (uintptr_t) &_file_PchrdragonZ,
	/*0x0353*/ (uintptr_t) &_file_PchrsuperdragonZ,
	/*0x0354*/ (uintptr_t) &_file_PchravengerZ,
	/*0x0355*/ (uintptr_t) &_file_PchrcycloneZ,
	/*0x0356*/ (uintptr_t) &_file_PchrmaiansmgZ,
	/*0x0357*/ (uintptr_t) &_file_Pchrrcp120Z,
	/*0x0358*/ (uintptr_t) &_file_PchrpcgunZ,
	/*0x0359*/ (uintptr_t) &_file_PchrshotgunZ,
	/*0x035a*/ (uintptr_t) &_file_PchrskminigunZ,
	/*0x035b*/ (uintptr_t) &_file_PchrdyrocketZ,
	/*0x035c*/ (uintptr_t) &_file_PchrdevastatorZ,
	/*0x035d*/ (uintptr_t) &_file_PchrskrocketZ,
	/*0x035e*/ (uintptr_t) &_file_Pchrz2020Z,
	/*0x035f*/ (uintptr_t) &_file_PchrsniperrifleZ,
	/*0x0360*/ (uintptr_t) &_file_PchrcrossbowZ,
	/*0x0361*/ (uintptr_t) &_file_PchrdruggunZ,
	/*0x0362*/ (uintptr_t) &_file_PchrknifeZ,
	/*0x0363*/ (uintptr_t) &_file_PchrnbombZ,
	/*0x0364*/ (uintptr_t) &_file_PchrflashbangZ,
	/*0x0365*/ (uintptr_t) &_file_PchrgrenadeZ,
	/*0x0366*/ (uintptr_t) &_file_PchrtimedmineZ,
	/*0x0367*/ (uintptr_t) &_file_PchrproximitymineZ,
	/*0x0368*/ (uintptr_t) &_file_PchrremotemineZ,
	/*0x0369*/ (uintptr_t) &_file_PchrecmmineZ,
	/*0x036a*/ (uintptr_t) &_file_PchrwppkZ,
	/*0x036b*/ (uintptr_t) &_file_Pchrtt33Z,
	/*0x036c*/ (uintptr_t) &_file_PchrskorpionZ,
	/*0x036d*/ (uintptr_t) &_file_PchrkalashZ,
	/*0x036e*/ (uintptr_t) &_file_PchruziZ,
	/*0x036f*/ (uintptr_t) &_file_Pchrmp5kZ,
	/*0x0370*/ (uintptr_t) &_file_Pchrm16Z,
	/*0x0371*/ (uintptr_t) &_file_Pchrfnp90Z,
	/*0x0372*/ (uintptr_t) &_file_PchrdyrocketmisZ,
	/*0x0373*/ (uintptr_t) &_file_PchrskrocketmisZ,
	/*0x0374*/ (uintptr_t) &_file_PchrcrossboltZ,
	/*0x0375*/ (uintptr_t) &_file_PchrdevgrenadeZ,
	/*0x0376*/ (uintptr_t) &_file_PchrdraggrenadeZ,
	/*0x0377*/ (uintptr_t) &_file_Gfalcon2Z,
	/*0x0378*/ (uintptr_t) &_file_Gleegun1Z,
	/*0x0379*/ (uintptr_t) &_file_GskpistolZ,
	/*0x037a*/ (uintptr_t) &_file_Gdy357Z,
	/*0x037b*/ (uintptr_t) &_file_Gdy357trentZ,
	/*0x037c*/ (uintptr_t) &_file_GmaianpistolZ,
	/*0x037d*/ (uintptr_t) &_file_Gcmp150Z,
	/*0x037e*/ (uintptr_t) &_file_Gar34Z,
	/*0x037f*/ (uintptr_t) &_file_GdydragonZ,
	/*0x0380*/ (uintptr_t) &_file_GdysuperdragonZ,
	/*0x0381*/ (uintptr_t) &_file_Gk7avengerZ,
	/*0x0382*/ (uintptr_t) &_file_GcycloneZ,
	/*0x0383*/ (uintptr_t) &_file_GmaiansmgZ,
	/*0x0384*/ (uintptr_t) &_file_Grcp120Z,
	/*0x0385*/ (uintptr_t) &_file_GpcgunZ,
	/*0x0386*/ (uintptr_t) &_file_GshotgunZ,
	/*0x0387*/ (uintptr_t) &_file_GskminigunZ,
	/*0x0388*/ (uintptr_t) &_file_GdyrocketZ,
	/*0x0389*/ (uintptr_t) &_file_GdydevastatorZ,
	/*0x038a*/ (uintptr_t) &_file_GskrocketZ,
	/*0x038b*/ (uintptr_t) &_file_Gz2020Z,
	/*0x038c*/ (uintptr_t) &_file_GsniperrifleZ,
	/*0x038d*/ (uintptr_t) &_file_GcrossbowZ,
	/*0x038e*/ (uintptr_t) &_file_GdruggunZ,
	/*0x038f*/ (uintptr_t) &_file_GknifeZ,
	/*0x0390*/ (uintptr_t) &_file_GgrenadeZ,
	/*0x0391*/ (uintptr_t) &_file_GtimedmineZ,
	/*0x0392*/ (uintptr_t) &_file_GproximitymineZ,
	/*0x0393*/ (uintptr_t) &_file_GremotemineZ,
	/*0x0394*/ (uintptr_t) &_file_GwppkZ,
	/*0x0395*/ (uintptr_t) &_file_Gtt33Z,
	/*0x0396*/ (uintptr_t) &_file_GskorpionZ,
	/*0x0397*/ (uintptr_t) &_file_Gak47Z,
	/*0x0398*/ (uintptr_t) &_file_GuziZ,
	/*0x0399*/ (uintptr_t) &_file_Gmp5kZ,
	/*0x039a*/ (uintptr_t) &_file_Gm16Z,
	/*0x039b*/ (uintptr_t) &_file_Gfnp90Z,
	/*0x039c*/ (uintptr_t) &_file_Gfalcon2lodZ,
	/*0x039d*/ (uintptr_t) &_file_GskminigunlodZ,
	/*0x039e*/ (uintptr_t) &_file_Pa51_turretZ,
	/*0x039f*/ (uintptr_t) &_file_PpelagicdoorZ,
	/*0x03a0*/ (uintptr_t) &_file_Am1_l1_aM,
	/*0x03a1*/ (uintptr_t) &_file_Am1_l1_bM,
	/*0x03a2*/ (uintptr_t) &_file_Am1_l1_cM,
	/*0x03a3*/ (uintptr_t) &_file_Am1_l1_dM,
	/*0x03a4*/ (uintptr_t) &_file_Am1_l2_aM,
	/*0x03a5*/ (uintptr_t) &_file_Am1_l2_bM,
	/*0x03a6*/ (uintptr_t) &_file_Am1_l2_cM,
	/*0x03a7*/ (uintptr_t) &_file_Am1_l2_dM,
	/*0x03a8*/ (uintptr_t) &_file_Am1_l3_aM,
	/*0x03a9*/ (uintptr_t) &_file_Am1_l3_bM,
	/*0x03aa*/ (uintptr_t) &_file_Am1_l3_cM,
	/*0x03ab*/ (uintptr_t) &_file_Am1_l3_dM,
	/*0x03ac*/ (uintptr_t) &_file_Am2_l1_aM,
	/*0x03ad*/ (uintptr_t) &_file_Am2_l1_bM,
	/*0x03ae*/ (uintptr_t) &_file_Am2_l1_cM,
	/*0x03af*/ (uintptr_t) &_file_Am2_l1_dM,
	/*0x03b0*/ (uintptr_t) &_file_Am3_l1_aM,
	/*0x03b1*/ (uintptr_t) &_file_Am3_l1_bM,
	/*0x03b2*/ (uintptr_t) &_file_Am3_l1_cM,
	/*0x03b3*/ (uintptr_t) &_file_Am3_l1_dM,
	/*0x03b4*/ (uintptr_t) &_file_Am3_l2_aM,
	/*0x03b5*/ (uintptr_t) &_file_Am3_l2_bM,
	/*0x03b6*/ (uintptr_t) &_file_Am3_l2_cM,
	/*0x03b7*/ (uintptr_t) &_file_Am3_l2_dM,
	/*0x03b8*/ (uintptr_t) &_file_Am4_l1_aM,
	/*0x03b9*/ (uintptr_t) &_file_Am4_l1_bM,
	/*0x03ba*/ (uintptr_t) &_file_Am4_l1_cM,
	/*0x03bb*/ (uintptr_t) &_file_Am4_l1_dM,
	/*0x03bc*/ (uintptr_t) &_file_Am4_l2_aM,
	/*0x03bd*/ (uintptr_t) &_file_Am4_l2_bM,
	/*0x03be*/ (uintptr_t) &_file_Am4_l2_cM,
	/*0x03bf*/ (uintptr_t) &_file_Am4_l2_dM,
	/*0x03c0*/ (uintptr_t) &_file_Am4_l3_aM,
	/*0x03c1*/ (uintptr_t) &_file_Am4_l3_bM,
	/*0x03c2*/ (uintptr_t) &_file_Am4_l3_cM,
	/*0x03c3*/ (uintptr_t) &_file_Am4_l3_dM,
	/*0x03c4*/ (uintptr_t) &_file_Am5_l1_aM,
	/*0x03c5*/ (uintptr_t) &_file_Am5_l1_bM,
	/*0x03c6*/ (uintptr_t) &_file_Am5_l1_cM,
	/*0x03c7*/ (uintptr_t) &_file_Am5_l1_dM,
	/*0x03c8*/ (uintptr_t) &_file_Am5_l2_aM,
	/*0x03c9*/ (uintptr_t) &_file_Am5_l2_bM,
	/*0x03ca*/ (uintptr_t) &_file_Am5_l2_cM,
	/*0x03cb*/ (uintptr_t) &_file_Am5_l2_dM,
	/*0x03cc*/ (uintptr_t) &_file_Am5_l3_aM,
	/*0x03cd*/ (uintptr_t) &_file_Am5_l3_bM,
	/*0x03ce*/ (uintptr_t) &_file_Am5_l3_cM,
	/*0x03cf*/ (uintptr_t) &_file_Am5_l3_dM,
	/*0x03d0*/ (uintptr_t) &_file_Am6_l1_aM,
	/*0x03d1*/ (uintptr_t) &_file_Am6_l1_bM,
	/*0x03d2*/ (uintptr_t) &_file_Am6_l1_cM,
	/*0x03d3*/ (uintptr_t) &_file_Am6_l1_dM,
	/*0x03d4*/ (uintptr_t) &_file_Am6_l2_aM,
	/*0x03d5*/ (uintptr_t) &_file_Am6_l2_bM,
	/*0x03d6*/ (uintptr_t) &_file_Am6_l2_cM,
	/*0x03d7*/ (uintptr_t) &_file_Am6_l2_dM,
	/*0x03d8*/ (uintptr_t) &_file_Am7_l1_aM,
	/*0x03d9*/ (uintptr_t) &_file_Am7_l1_bM,
	/*0x03da*/ (uintptr_t) &_file_Am7_l1_cM,
	/*0x03db*/ (uintptr_t) &_file_Am7_l1_dM,
	/*0x03dc*/ (uintptr_t) &_file_Am8_l1_aM,
	/*0x03dd*/ (uintptr_t) &_file_Am8_l1_bM,
	/*0x03de*/ (uintptr_t) &_file_Am8_l1_cM,
	/*0x03df*/ (uintptr_t) &_file_Am8_l1_dM,
	/*0x03e0*/ (uintptr_t) &_file_Am9_l1_aM,
	/*0x03e1*/ (uintptr_t) &_file_Am9_l1_bM,
	/*0x03e2*/ (uintptr_t) &_file_Am9_l1_cM,
	/*0x03e3*/ (uintptr_t) &_file_Am9_l1_dM,
	/*0x03e4*/ (uintptr_t) &_file_Ap1_01_joM,
	/*0x03e5*/ (uintptr_t) &_file_Ap1_02_caM,
	/*0x03e6*/ (uintptr_t) &_file_Ap1_03_joM,
	/*0x03e7*/ (uintptr_t) &_file_Ap1_04_caM,
	/*0x03e8*/ (uintptr_t) &_file_Ap1_05_joM,
	/*0x03e9*/ (uintptr_t) &_file_Ap1_06_caM,
	/*0x03ea*/ (uintptr_t) &_file_Ap1_07_joM,
	/*0x03eb*/ (uintptr_t) &_file_Ap1_08_caM,
	/*0x03ec*/ (uintptr_t) &_file_Ap2_01_joM,
	/*0x03ed*/ (uintptr_t) &_file_Ap2_02_joM,
	/*0x03ee*/ (uintptr_t) &_file_Ap2_03_drM,
	/*0x03ef*/ (uintptr_t) &_file_Ap2_04_joM,
	/*0x03f0*/ (uintptr_t) &_file_Ap2_05_joM,
	/*0x03f1*/ (uintptr_t) &_file_Ap2_06_drM,
	/*0x03f2*/ (uintptr_t) &_file_Ap2_07_drM,
	/*0x03f3*/ (uintptr_t) &_file_Ap3_01_gdM,
	/*0x03f4*/ (uintptr_t) &_file_Ap3_02_joM,
	/*0x03f5*/ (uintptr_t) &_file_Ap3_03_joM,
	/*0x03f6*/ (uintptr_t) &_file_Ap4_01_dvM,
	/*0x03f7*/ (uintptr_t) &_file_Ap4_02_joM,
	/*0x03f8*/ (uintptr_t) &_file_Ap4_03_dvM,
	/*0x03f9*/ (uintptr_t) &_file_Ap4_04_joM,
	/*0x03fa*/ (uintptr_t) &_file_Ap4_05_dvM,
	/*0x03fb*/ (uintptr_t) &_file_Ap4_06_joM,
	/*0x03fc*/ (uintptr_t) &_file_Ap4_07_blM,
	/*0x03fd*/ (uintptr_t) &_file_Ap4_08_dvM,
	/*0x03fe*/ (uintptr_t) &_file_Ap4_09_dvM,
	/*0x03ff*/ (uintptr_t) &_file_Ap5_01_joM,
	/*0x0400*/ (uintptr_t) &_file_Ap5_02_joM,
	/*0x0401*/ (uintptr_t) &_file_Ap5_03_joM,
	/*0x0402*/ (uintptr_t) &_file_Ap6_01_joM,
	/*0x0403*/ (uintptr_t) &_file_Ap6_02_caM,
	/*0x0404*/ (uintptr_t) &_file_Ap6_03_joM,
	/*0x0405*/ (uintptr_t) &_file_Ap6_04_caM,
	/*0x0406*/ (uintptr_t) &_file_Ap6_05_joM,
	/*0x0407*/ (uintptr_t) &_file_Ap6_06_caM,
	/*0x0408*/ (uintptr_t) &_file_Ap7_01_caM,
	/*0x0409*/ (uintptr_t) &_file_Ap7_02_joM,
	/*0x040a*/ (uintptr_t) &_file_Ap7_03_caM,
	/*0x040b*/ (uintptr_t) &_file_Ap7_04_joM,
	/*0x040c*/ (uintptr_t) &_file_Ap8_01_dvM,
	/*0x040d*/ (uintptr_t) &_file_Ap8_02_blM,
	/*0x040e*/ (uintptr_t) &_file_Ap8_03_dvM,
	/*0x040f*/ (uintptr_t) &_file_Ap8_04_blM,
	/*0x0410*/ (uintptr_t) &_file_Ap8_06_blM,
	/*0x0411*/ (uintptr_t) &_file_Ap8_07_trM,
	/*0x0412*/ (uintptr_t) &_file_Ap8_08_dvM,
	/*0x0413*/ (uintptr_t) &_file_Ap8_09_trM,
	/*0x0414*/ (uintptr_t) &_file_Ap8_10_blM,
	/*0x0415*/ (uintptr_t) &_file_Ap9_01_joM,
	/*0x0416*/ (uintptr_t) &_file_Ap9_02_caM,
	/*0x0417*/ (uintptr_t) &_file_Ap9_03_joM,
	/*0x0418*/ (uintptr_t) &_file_Ap10_01_caM,
	/*0x0419*/ (uintptr_t) &_file_Ap10_02_caM,
	/*0x041a*/ (uintptr_t) &_file_Ap10_03_caM,
	/*0x041b*/ (uintptr_t) &_file_Ap10_04_caM,
	/*0x041c*/ (uintptr_t) &_file_Ap10_05_joM,
	/*0x041d*/ (uintptr_t) &_file_Ap10_06_caM,
	/*0x041e*/ (uintptr_t) &_file_Ap10_07_joM,
	/*0x041f*/ (uintptr_t) &_file_Ap10_08_caM,
	/*0x0420*/ (uintptr_t) &_file_Ap10_09_joM,
	/*0x0421*/ (uintptr_t) &_file_Ap11_01_jnM,
	/*0x0422*/ (uintptr_t) &_file_Ap11_02_joM,
	/*0x0423*/ (uintptr_t) &_file_Ap11_03_jnM,
	/*0x0424*/ (uintptr_t) &_file_Ap11_04_joM,
	/*0x0425*/ (uintptr_t) &_file_Ap11_05_jnM,
	/*0x0426*/ (uintptr_t) &_file_Ap11_06_joM,
	/*0x0427*/ (uintptr_t) &_file_Ap11_07_jnM,
	/*0x0428*/ (uintptr_t) &_file_Ap11_08_joM,
	/*0x0429*/ (uintptr_t) &_file_Ap12_01_jnM,
	/*0x042a*/ (uintptr_t) &_file_Ap12_02_joM,
	/*0x042b*/ (uintptr_t) &_file_Ap12_03_jnM,
	/*0x042c*/ (uintptr_t) &_file_Ap12_04_joM,
	/*0x042d*/ (uintptr_t) &_file_Ap12_05_jnM,
	/*0x042e*/ (uintptr_t) &_file_Ap12_06_joM,
	/*0x042f*/ (uintptr_t) &_file_Ap12_07_jnM,
	/*0x0430*/ (uintptr_t) &_file_Ap12_08_joM,
	/*0x0431*/ (uintptr_t) &_file_Ap12_09_jnM,
	/*0x0432*/ (uintptr_t) &_file_Ap12_10_joM,
	/*0x0433*/ (uintptr_t) &_file_Ap13_01_joM,
	/*0x0434*/ (uintptr_t) &_file_Ap13_02_suM,
	/*0x0435*/ (uintptr_t) &_file_Ap13_03_joM,
	/*0x0436*/ (uintptr_t) &_file_Ap13_04_suM,
	/*0x0437*/ (uintptr_t) &_file_Ap13_06_suM,
	/*0x0438*/ (uintptr_t) &_file_Ap14_03_suM,
	/*0x0439*/ (uintptr_t) &_file_Ap14_04_joM,
	/*0x043a*/ (uintptr_t) &_file_Ap14_05_suM,
	/*0x043b*/ (uintptr_t) &_file_Ap14_07_joM,
	/*0x043c*/ (uintptr_t) &_file_Ap15_01_elM,
	/*0x043d*/ (uintptr_t) &_file_Ap15_02_elM,
	/*0x043e*/ (uintptr_t) &_file_Ap15_03_joM,
	/*0x043f*/ (uintptr_t) &_file_Ap15_04_jnM,
	/*0x0440*/ (uintptr_t) &_file_Ap15_05_elM,
	/*0x0441*/ (uintptr_t) &_file_Ap15_06_joM,
	/*0x0442*/ (uintptr_t) &_file_Ap15_07_elM,
	/*0x0443*/ (uintptr_t) &_file_Ap15_08_joM,
	/*0x0444*/ (uintptr_t) &_file_Ap15_09_elM,
	/*0x0445*/ (uintptr_t) &_file_Ap15_10_joM,
	/*0x0446*/ (uintptr_t) &_file_Ap15_11_elM,
	/*0x0447*/ (uintptr_t) &_file_Ap16_01_joM,
	/*0x0448*/ (uintptr_t) &_file_Ap16_02_caM,
	/*0x0449*/ (uintptr_t) &_file_Ap16_04_caM,
	/*0x044a*/ (uintptr_t) &_file_Ap16_05_joM,
	/*0x044b*/ (uintptr_t) &_file_Ap16_06_caM,
	/*0x044c*/ (uintptr_t) &_file_Ap17_01_trM,
	/*0x044d*/ (uintptr_t) &_file_Ap17_02_prM,
	/*0x044e*/ (uintptr_t) &_file_Ap17_03_trM,
	/*0x044f*/ (uintptr_t) &_file_Ap17_04_prM,
	/*0x0450*/ (uintptr_t) &_file_Ap17_05_trM,
	/*0x0451*/ (uintptr_t) &_file_Ap17_06_trM,
	/*0x0452*/ (uintptr_t) &_file_Ap18_01_joM,
	/*0x0453*/ (uintptr_t) &_file_Ap18_02_elM,
	/*0x0454*/ (uintptr_t) &_file_Ap18_03_elM,
	/*0x0455*/ (uintptr_t) &_file_Ap18_04_joM,
	/*0x0456*/ (uintptr_t) &_file_Ap18_05_elM,
	/*0x0457*/ (uintptr_t) &_file_Ap19_01_caM,
	/*0x0458*/ (uintptr_t) &_file_Ap19_02_caM,
	/*0x0459*/ (uintptr_t) &_file_Ap19_03_joM,
	/*0x045a*/ (uintptr_t) &_file_Ap19_04_caM,
	/*0x045b*/ (uintptr_t) &_file_Ap19_05_joM,
	/*0x045c*/ (uintptr_t) &_file_Ap19_06_joM,
	/*0x045d*/ (uintptr_t) &_file_Ap20_01_joM,
	/*0x045e*/ (uintptr_t) &_file_Ap20_02_prM,
	/*0x045f*/ (uintptr_t) &_file_Ap20_03_joM,
	/*0x0460*/ (uintptr_t) &_file_Ap20_04_prM,
	/*0x0461*/ (uintptr_t) &_file_Ap20_05_joM,
	/*0x0462*/ (uintptr_t) &_file_Ap20_06_blM,
	/*0x0463*/ (uintptr_t) &_file_Ap20_07_trM,
	/*0x0464*/ (uintptr_t) &_file_Ap20_08_trM,
	/*0x0465*/ (uintptr_t) &_file_Ap21_01_elM,
	/*0x0466*/ (uintptr_t) &_file_Ap21_02_joM,
	/*0x0467*/ (uintptr_t) &_file_Ap21_03_elM,
	/*0x0468*/ (uintptr_t) &_file_Ap21_04_joM,
	/*0x0469*/ (uintptr_t) &_file_Ap22_01_elM,
	/*0x046a*/ (uintptr_t) &_file_Ap22_02_joM,
	/*0x046b*/ (uintptr_t) &_file_Ap22_03_elM,
	/*0x046c*/ (uintptr_t) &_file_Ap22_04_joM,
	/*0x046d*/ (uintptr_t) &_file_Ap23_01_joM,
	/*0x046e*/ (uintptr_t) &_file_Ap23_02_drM,
	/*0x046f*/ (uintptr_t) &_file_Ap23_03_joM,
	/*0x0470*/ (uintptr_t) &_file_Ap23_04_drM,
	/*0x0471*/ (uintptr_t) &_file_Ap23_05_joM,
	/*0x0472*/ (uintptr_t) &_file_Ap23_06_drM,
	/*0x0473*/ (uintptr_t) &_file_Ap23_07_joM,
	/*0x0474*/ (uintptr_t) &_file_Ap23_08_drM,
	/*0x0475*/ (uintptr_t) &_file_Ap24_01_caM,
	/*0x0476*/ (uintptr_t) &_file_Ap24_02_joM,
	/*0x0477*/ (uintptr_t) &_file_Ap24_03_caM,
	/*0x0478*/ (uintptr_t) &_file_Ap24_04_joM,
	/*0x0479*/ (uintptr_t) &_file_Ap24_05_caM,
	/*0x047a*/ (uintptr_t) &_file_Ap24_06_caM,
	/*0x047b*/ (uintptr_t) &_file_Ap24_07_joM,
	/*0x047c*/ (uintptr_t) &_file_Ap24_08_joM,
	/*0x047d*/ (uintptr_t) &_file_Ap25_01_joM,
	/*0x047e*/ (uintptr_t) &_file_Ap25_02_joM,
	/*0x047f*/ (uintptr_t) &_file_Ap26_01_joM,
	/*0x0480*/ (uintptr_t) &_file_Ap26_02_dvM,
	/*0x0481*/ (uintptr_t) &_file_Ap26_03_joM,
	/*0x0482*/ (uintptr_t) &_file_Ap26_04_dvM,
	/*0x0483*/ (uintptr_t) &_file_Ap26_05_dvM,
	/*0x0484*/ (uintptr_t) &_file_Ap26_06_joM,
	/*0x0485*/ (uintptr_t) &_file_Ap26_07_dvM,
	/*0x0486*/ (uintptr_t) &_file_Ap26_08_dvM,
	/*0x0487*/ (uintptr_t) &_file_Ap27_01_joM,
	/*0x0488*/ (uintptr_t) &_file_Ap27_02_elM,
	/*0x0489*/ (uintptr_t) &_file_Ap27_03_elM,
	/*0x048a*/ (uintptr_t) &_file_Ap27_04_joM,
	/*0x048b*/ (uintptr_t) &_file_Ap27_05_joM,
	/*0x048c*/ (uintptr_t) &_file_Ap27_06_elM,
	/*0x048d*/ (uintptr_t) &_file_Ap28_01_elM,
	/*0x048e*/ (uintptr_t) &_file_Ap28_02_joM,
	/*0x048f*/ (uintptr_t) &_file_Ap28_03_elM,
	/*0x0490*/ (uintptr_t) &_file_Ap28_04_joM,
	/*0x0491*/ (uintptr_t) &_file_Ap28_05_elM,
	/*0x0492*/ (uintptr_t) &_file_Ap28_06_joM,
	/*0x0493*/ (uintptr_t) &_file_Ap29_01_elM,
	/*0x0494*/ (uintptr_t) &_file_Ap29_02_joM,
	/*0x0495*/ (uintptr_t) &_file_Ap29_03_elM,
	/*0x0496*/ (uintptr_t) &_file_Ap29_04_joM,
	/*0x0497*/ (uintptr_t) &_file_Ap29_05_joM,
	/*0x0498*/ (uintptr_t) &_file_Ap29_06_elM,
	/*0x0499*/ (uintptr_t) &_file_Ap29_07_joM,
	/*0x049a*/ (uintptr_t) &_file_Ap29_08_elM,
	/*0x049b*/ (uintptr_t) &_file_Ap29_09_joM,
	/*0x049c*/ (uintptr_t) &_file_Ap29_10_elM,
	/*0x049d*/ (uintptr_t) &_file_PautosurgeonZ,
	/*0x049e*/ (uintptr_t) &_file_CdarkwetZ,
	/*0x049f*/ (uintptr_t) &_file_CdarkaqualungZ,
	/*0x04a0*/ (uintptr_t) &_file_CdarksnowZ,
	/*0x04a1*/ (uintptr_t) &_file_CdarklabZ,
	/*0x04a2*/ (uintptr_t) &_file_CfemlabtechZ,
	/*0x04a3*/ (uintptr_t) &_file_CddsniperZ,
	/*0x04a4*/ (uintptr_t) &_file_Cpilotaf1Z,
	/*0x04a5*/ (uintptr_t) &_file_CcilabtechZ,
	/*0x04a6*/ (uintptr_t) &_file_CcifemtechZ,
	/*0x04a7*/ (uintptr_t) &_file_Cheadeileen_hZ,
	/*0x04a8*/ (uintptr_t) &_file_Cheadscott_hZ,
	/*0x04a9*/ (uintptr_t) &_file_CcarreveningsuitZ,
	/*0x04aa*/ (uintptr_t) &_file_CjonathonZ,
	/*0x04ab*/ (uintptr_t) &_file_CcisoldierZ,
	/*0x04ac*/ (uintptr_t) &_file_CheadsanchezZ,
	/*0x04ad*/ (uintptr_t) &_file_CheaddarkaquaZ,
	/*0x04ae*/ (uintptr_t) &_file_CheadddsniperZ,
	/*0x04af*/ (uintptr_t) &_file_PlimoZ,
	/*0x04b0*/ (uintptr_t) &_file_PpdmenuZ,
	/*0x04b1*/ (uintptr_t) &_file_Pa51interceptorZ,
	/*0x04b2*/ (uintptr_t) &_file_Pa51dishZ,
	/*0x04b3*/ (uintptr_t) &_file_Pa51radarconsoleZ,
	/*0x04b4*/ (uintptr_t) &_file_Pa51lockerdoorZ,
	/*0x04b5*/ (uintptr_t) &_file_Pg5generatorZ,
	/*0x04b6*/ (uintptr_t) &_file_Pg5dumpsterZ,
	/*0x04b7*/ (uintptr_t) &_file_Gar34lodZ,
	/*0x04b8*/ (uintptr_t) &_file_GavengerlodZ,
	/*0x04b9*/ (uintptr_t) &_file_Gcmp150lodZ,
	/*0x04ba*/ (uintptr_t) &_file_GcrossbowlodZ,
	/*0x04bb*/ (uintptr_t) &_file_GcyclonelodZ,
	/*0x04bc*/ (uintptr_t) &_file_GdruggunlodZ,
	/*0x04bd*/ (uintptr_t) &_file_Gdy357lodZ,
	/*0x04be*/ (uintptr_t) &_file_Gdy357trentlodZ,
	/*0x04bf*/ (uintptr_t) &_file_GdevastatorlodZ,
	/*0x04c0*/ (uintptr_t) &_file_GdydragonlodZ,
	/*0x04c1*/ (uintptr_t) &_file_GdysuperdragonlodZ,
	/*0x04c2*/ (uintptr_t) &_file_GknifelodZ,
	/*0x04c3*/ (uintptr_t) &_file_GlaserlodZ,
	/*0x04c4*/ (uintptr_t) &_file_GmagseclodZ,
	/*0x04c5*/ (uintptr_t) &_file_GmayanpistollodZ,
	/*0x04c6*/ (uintptr_t) &_file_GmayansmglodZ,
	/*0x04c7*/ (uintptr_t) &_file_GpcgunlodZ,
	/*0x04c8*/ (uintptr_t) &_file_Grcp120lodZ,
	/*0x04c9*/ (uintptr_t) &_file_GrocketlodZ,
	/*0x04ca*/ (uintptr_t) &_file_GshotgunlodZ,
	/*0x04cb*/ (uintptr_t) &_file_GskpistollodZ,
	/*0x04cc*/ (uintptr_t) &_file_GskrocketlodZ,
	/*0x04cd*/ (uintptr_t) &_file_GsniperlodZ,
	/*0x04ce*/ (uintptr_t) &_file_Gz2020lodZ,
	/*0x04cf*/ (uintptr_t) &_file_PchrcloakerZ,
	/*0x04d0*/ (uintptr_t) &_file_PchrspeedpillZ,
	/*0x04d1*/ (uintptr_t) &_file_PbaggagecarrierZ,
	/*0x04d2*/ (uintptr_t) &_file_PminesignZ,
	/*0x04d3*/ (uintptr_t) &_file_PchamberZ,
	/*0x04d4*/ (uintptr_t) &_file_PisotopeexperimentZ,
	/*0x04d5*/ (uintptr_t) &_file_PisotopeZ,
	/*0x04d6*/ (uintptr_t) &_file_PreactordoorZ,
	/*0x04d7*/ (uintptr_t) &_file_PsaucerinsideZ,
	/*0x04d8*/ (uintptr_t) &_file_PvillastoolZ,
	/*0x04d9*/ (uintptr_t) &_file_Pcetanwindow1Z,
	/*0x04da*/ (uintptr_t) &_file_Pcetanwindow2Z,
	/*0x04db*/ (uintptr_t) &_file_Pcetanwindow3Z,
	/*0x04dc*/ (uintptr_t) &_file_Apelelv01M,
	/*0x04dd*/ (uintptr_t) &_file_Apelgrd01M,
	/*0x04de*/ (uintptr_t) &_file_Ap29_11_joM,
	/*0x04df*/ (uintptr_t) &_file_GlaserZ,
	/*0x04e0*/ (uintptr_t) &_file_PbigpelagicdoorZ,
	/*0x04e1*/ (uintptr_t) &_file_Psk_jonrubble3Z,
	/*0x04e2*/ (uintptr_t) &_file_Psk_jonrubble4Z,
	/*0x04e3*/ (uintptr_t) &_file_Psk_jonrubble5Z,
	/*0x04e4*/ (uintptr_t) &_file_Psk_jonrubble6Z,
	/*0x04e5*/ (uintptr_t) &_file_GcombathandslodZ,
	/*0x04e6*/ (uintptr_t) &_file_PbinocularsZ,
	/*0x04e7*/ (uintptr_t) &_file_PsubmarineZ,
	/*0x04e8*/ (uintptr_t) &_file_Pairforce1Z,
	/*0x04e9*/ (uintptr_t) &_file_PenginepartZ,
	/*0x04ea*/ (uintptr_t) &_file_Am3l2carrM,
	/*0x04eb*/ (uintptr_t) &_file_Aelvcet01M,
	/*0x04ec*/ (uintptr_t) &_file_Aelvcet02M,
	/*0x04ed*/ (uintptr_t) &_file_Ajorep01M,
	/*0x04ee*/ (uintptr_t) &_file_Ajorep02M,
	/*0x04ef*/ (uintptr_t) &_file_Ajorep03M,
	/*0x04f0*/ (uintptr_t) &_file_Ajorep04M,
	/*0x04f1*/ (uintptr_t) &_file_PcetroofgunZ,
	/*0x04f2*/ (uintptr_t) &_file_PcetansmalldoorZ,
	/*0x04f3*/ (uintptr_t) &_file_PpowernodeZ,
	/*0x04f4*/ (uintptr_t) &_file_PcetanbluegreenlZ,
	/*0x04f5*/ (uintptr_t) &_file_PcetanbluegreenrZ,
	/*0x04f6*/ (uintptr_t) &_file_PskedarconsoleZ,
	/*0x04f7*/ (uintptr_t) &_file_PskedarconsolepanelZ,
	/*0x04f8*/ (uintptr_t) &_file_Ajorpld01M,
	/*0x04f9*/ (uintptr_t) &_file_Ajorpld02M,
	/*0x04fa*/ (uintptr_t) &_file_Ajorpld03M,
	/*0x04fb*/ (uintptr_t) &_file_Ajorpld04M,
	/*0x04fc*/ (uintptr_t) &_file_GnbombZ,
	/*0x04fd*/ (uintptr_t) &_file_GnbomblodZ,
	/*0x04fe*/ (uintptr_t) &_file_GgrenadelodZ,
	/*0x04ff*/ (uintptr_t) &_file_PweaponcdoorZ,
	/*0x0500*/ (uintptr_t) &_file_PtargetZ,
	/*0x0501*/ (uintptr_t) &_file_PdevicesecretdoorZ,
	/*0x0502*/ (uintptr_t) &_file_PcarringtonsecretdoorZ,
	/*0x0503*/ (uintptr_t) &_file_PsinisterpcZ,
	/*0x0504*/ (uintptr_t) &_file_PsinisterstationZ,
	/*0x0505*/ (uintptr_t) &_file_PkeypadlockZ,
	/*0x0506*/ (uintptr_t) &_file_PthumbprintscannerZ,
	/*0x0507*/ (uintptr_t) &_file_PretinalockZ,
	/*0x0508*/ (uintptr_t) &_file_PcardlockZ,
	/*0x0509*/ (uintptr_t) &_file_PgoodstationZ,
	/*0x050a*/ (uintptr_t) &_file_PgoodpcZ,
	/*0x050b*/ (uintptr_t) &_file_CskedarkingZ,
	/*0x050c*/ (uintptr_t) &_file_CelviswaistcoatZ,
	/*0x050d*/ (uintptr_t) &_file_CheadgriffeyZ,
	/*0x050e*/ (uintptr_t) &_file_CheadmotoZ,
	/*0x050f*/ (uintptr_t) &_file_CheadkeithZ,
	/*0x0510*/ (uintptr_t) &_file_CheadwinnerZ,
	/*0x0511*/ (uintptr_t) &_file_Ca51faceplateZ,
	/*0x0512*/ (uintptr_t) &_file_PchrautogunZ,
	/*0x0513*/ (uintptr_t) &_file_Pg5bigchairZ,
	/*0x0514*/ (uintptr_t) &_file_Pg5smallchairZ,
	/*0x0515*/ (uintptr_t) &_file_PkingsceptreZ,
	/*0x0516*/ (uintptr_t) &_file_PlabcoatZ,
	/*0x0517*/ (uintptr_t) &_file_Atrjo01M,
	/*0x0518*/ (uintptr_t) &_file_Atrgrim01M,
	/*0x0519*/ (uintptr_t) &_file_Atrgrim02M,
	/*0x051a*/ (uintptr_t) &_file_Atrcarr06M,
	/*0x051b*/ (uintptr_t) &_file_Atrcarr07M,
	/*0x051c*/ (uintptr_t) &_file_Atrcarr08M,
	/*0x051d*/ (uintptr_t) &_file_Atrcarr01M,
	/*0x051e*/ (uintptr_t) &_file_Atrcarr02M,
	/*0x051f*/ (uintptr_t) &_file_Atrcarr03M,
	/*0x0520*/ (uintptr_t) &_file_Atrcarr04M,
	/*0x0521*/ (uintptr_t) &_file_Atrcarr05M,
	/*0x0522*/ (uintptr_t) &_file_Atrcarr12M,
	/*0x0523*/ (uintptr_t) &_file_Abnblde01M,
	/*0x0524*/ (uintptr_t) &_file_Abncass01M,
	/*0x0525*/ (uintptr_t) &_file_Pcidoor1Z,
	/*0x0526*/ (uintptr_t) &_file_Pg5_chairZ,
	/*0x0527*/ (uintptr_t) &_file_Pg5_chair2Z,
	/*0x0528*/ (uintptr_t) &_file_Pdd_window_foyerZ,
	/*0x0529*/ (uintptr_t) &_file_Ghand_jowetsuitZ,
	/*0x052a*/ (uintptr_t) &_file_Ghand_trentZ,
	/*0x052b*/ (uintptr_t) &_file_Ghand_jofrockZ,
	/*0x052c*/ (uintptr_t) &_file_Ghand_jotrenchZ,
	/*0x052d*/ (uintptr_t) &_file_Ghand_ddsniperZ,
	/*0x052e*/ (uintptr_t) &_file_Ghand_presidentZ,
	/*0x052f*/ (uintptr_t) &_file_Ghand_joaf1Z,
	/*0x0530*/ (uintptr_t) &_file_Ghand_jopilotZ,
	/*0x0531*/ (uintptr_t) &_file_Ghand_carringtonZ,
	/*0x0532*/ (uintptr_t) &_file_Ghand_mrblondeZ,
	/*0x0533*/ (uintptr_t) &_file_Ghand_ciaZ,
	/*0x0534*/ (uintptr_t) &_file_Ghand_cifemtechZ,
	/*0x0535*/ (uintptr_t) &_file_Ghand_fbiarmZ,
	/*0x0536*/ (uintptr_t) &_file_Ghand_josnowZ,
	/*0x0537*/ (uintptr_t) &_file_Ghand_vriesZ,
	/*0x0538*/ (uintptr_t) &_file_Ghand_ddsecurityZ,
	/*0x0539*/ (uintptr_t) &_file_Ghand_tragic_pelagicZ,
	/*0x053a*/ (uintptr_t) &_file_Ghand_stewardess_coatZ,
	/*0x053b*/ (uintptr_t) &_file_Ghand_ddlabtechZ,
	/*0x053c*/ (uintptr_t) &_file_Pci_cabinetZ,
	/*0x053d*/ (uintptr_t) &_file_Pci_deskZ,
	/*0x053e*/ (uintptr_t) &_file_Pci_carr_deskZ,
	/*0x053f*/ (uintptr_t) &_file_Pci_f_chairZ,
	/*0x0540*/ (uintptr_t) &_file_Pci_loungerZ,
	/*0x0541*/ (uintptr_t) &_file_Pci_f_sofaZ,
	/*0x0542*/ (uintptr_t) &_file_Pci_tableZ,
	/*0x0543*/ (uintptr_t) &_file_Pcv_coffee_tableZ,
	/*0x0544*/ (uintptr_t) &_file_Pcv_chair1Z,
	/*0x0545*/ (uintptr_t) &_file_Pcv_chair2Z,
	/*0x0546*/ (uintptr_t) &_file_Pcv_sofaZ,
	/*0x0547*/ (uintptr_t) &_file_Pcv_chair4Z,
	/*0x0548*/ (uintptr_t) &_file_Pcv_lampZ,
	/*0x0549*/ (uintptr_t) &_file_Pcv_cabinetZ,
	/*0x054a*/ (uintptr_t) &_file_Pcv_f_bedZ,
	/*0x054b*/ (uintptr_t) &_file_Ppel_chair1Z,
	/*0x054c*/ (uintptr_t) &_file_Psk_console2Z,
	/*0x054d*/ (uintptr_t) &_file_Pdd_ear_tableZ,
	/*0x054e*/ (uintptr_t) &_file_Pdd_ear_chairZ,
	/*0x054f*/ (uintptr_t) &_file_Pairbase_table2Z,
	/*0x0550*/ (uintptr_t) &_file_Pairbase_chair2Z,
	/*0x0551*/ (uintptr_t) &_file_Pmisc_crateZ,
	/*0x0552*/ (uintptr_t) &_file_Pmisc_irspecsZ,
	/*0x0553*/ (uintptr_t) &_file_Cheadelvis_gogsZ,
	/*0x0554*/ (uintptr_t) &_file_CheadstevemZ,
	/*0x0555*/ (uintptr_t) &_file_Pa51_roofgunZ,
	/*0x0556*/ (uintptr_t) &_file_Psk_drone_gunZ,
	/*0x0557*/ (uintptr_t) &_file_Pci_roofgunZ,
	/*0x0558*/ (uintptr_t) &_file_Pcv_tableZ,
	/*0x0559*/ (uintptr_t) &_file_Cdark_leatherZ,
	/*0x055a*/ (uintptr_t) &_file_Cheaddark_snowZ,
	/*0x055b*/ (uintptr_t) &_file_CheadpresidentZ,
	/*0x055c*/ (uintptr_t) &_file_Pcidoor1_refZ,
	/*0x055d*/ (uintptr_t) &_file_Palaskadoor_outZ,
	/*0x055e*/ (uintptr_t) &_file_Palaskadoor_inZ,
	/*0x055f*/ (uintptr_t) &_file_PwirefenceZ,
	/*0x0560*/ (uintptr_t) &_file_PrarelogoZ,
	/*0x0561*/ (uintptr_t) &_file_Chead_vdZ,
	/*0x0562*/ (uintptr_t) &_file_Apelelv02M,
	/*0x0563*/ (uintptr_t) &_file_PkeycardZ,
	/*0x0564*/ (uintptr_t) &_file_PbodyarmourZ,
	/*0x0565*/ (uintptr_t) &_file_Pa51gate_rZ,
	/*0x0566*/ (uintptr_t) &_file_Pa51gate_lZ,
	/*0x0567*/ (uintptr_t) &_file_Paf1_lampZ,
	/*0x0568*/ (uintptr_t) &_file_Paf1_toiletZ,
	/*0x0569*/ (uintptr_t) &_file_Paf1_doorbig2Z,
	/*0x056a*/ (uintptr_t) &_file_Paf1_phoneZ,
	/*0x056b*/ (uintptr_t) &_file_Paf1_cargodoorZ,
	/*0x056c*/ (uintptr_t) &_file_Pg5_alarmZ,
	/*0x056d*/ (uintptr_t) &_file_Pg5_laser_switchZ,
	/*0x056e*/ (uintptr_t) &_file_Psk_templecolumn4Z,
	/*0x056f*/ (uintptr_t) &_file_PcorehatchZ,
	/*0x0570*/ (uintptr_t) &_file_LameE,
	/*0x0571*/ (uintptr_t) &_file_LameJ,
	/*0x0572*/ (uintptr_t) &_file_LameP,
	/*0x0573*/ (uintptr_t) &_file_Lame_str_gZ,
	/*0x0574*/ (uintptr_t) &_file_Lame_str_fZ,
	/*0x0575*/ (uintptr_t) &_file_Lame_str_sZ,
	/*0x0576*/ (uintptr_t) &_file_Lame_str_iZ,
	/*0x0577*/ (uintptr_t) &_file_LarchE,
	/*0x0578*/ (uintptr_t) &_file_LarchJ,
	/*0x0579*/ (uintptr_t) &_file_LarchP,
	/*0x057a*/ (uintptr_t) &_file_Larch_str_gZ,
	/*0x057b*/ (uintptr_t) &_file_Larch_str_fZ,
	/*0x057c*/ (uintptr_t) &_file_Larch_str_sZ,
	/*0x057d*/ (uintptr_t) &_file_Larch_str_iZ,
	/*0x057e*/ (uintptr_t) &_file_LarecE,
	/*0x057f*/ (uintptr_t) &_file_LarecJ,
	/*0x0580*/ (uintptr_t) &_file_LarecP,
	/*0x0581*/ (uintptr_t) &_file_Larec_str_gZ,
	/*0x0582*/ (uintptr_t) &_file_Larec_str_fZ,
	/*0x0583*/ (uintptr_t) &_file_Larec_str_sZ,
	/*0x0584*/ (uintptr_t) &_file_Larec_str_iZ,
	/*0x0585*/ (uintptr_t) &_file_LarkE,
	/*0x0586*/ (uintptr_t) &_file_LarkJ,
	/*0x0587*/ (uintptr_t) &_file_LarkP,
	/*0x0588*/ (uintptr_t) &_file_Lark_str_gZ,
	/*0x0589*/ (uintptr_t) &_file_Lark_str_fZ,
	/*0x058a*/ (uintptr_t) &_file_Lark_str_sZ,
	/*0x058b*/ (uintptr_t) &_file_Lark_str_iZ,
	/*0x058c*/ (uintptr_t) &_file_LashE,
	/*0x058d*/ (uintptr_t) &_file_LashJ,
	/*0x058e*/ (uintptr_t) &_file_LashP,
	/*0x058f*/ (uintptr_t) &_file_Lash_str_gZ,
	/*0x0590*/ (uintptr_t) &_file_Lash_str_fZ,
	/*0x0591*/ (uintptr_t) &_file_Lash_str_sZ,
	/*0x0592*/ (uintptr_t) &_file_Lash_str_iZ,
	/*0x0593*/ (uintptr_t) &_file_LateE,
	/*0x0594*/ (uintptr_t) &_file_LateJ,
	/*0x0595*/ (uintptr_t) &_file_LateP,
	/*0x0596*/ (uintptr_t) &_file_Late_str_gZ,
	/*0x0597*/ (uintptr_t) &_file_Late_str_fZ,
	/*0x0598*/ (uintptr_t) &_file_Late_str_sZ,
	/*0x0599*/ (uintptr_t) &_file_Late_str_iZ,
	/*0x059a*/ (uintptr_t) &_file_LaztE,
	/*0x059b*/ (uintptr_t) &_file_LaztJ,
	/*0x059c*/ (uintptr_t) &_file_LaztP,
	/*0x059d*/ (uintptr_t) &_file_Lazt_str_gZ,
	/*0x059e*/ (uintptr_t) &_file_Lazt_str_fZ,
	/*0x059f*/ (uintptr_t) &_file_Lazt_str_sZ,
	/*0x05a0*/ (uintptr_t) &_file_Lazt_str_iZ,
	/*0x05a1*/ (uintptr_t) &_file_LcatE,
	/*0x05a2*/ (uintptr_t) &_file_LcatJ,
	/*0x05a3*/ (uintptr_t) &_file_LcatP,
	/*0x05a4*/ (uintptr_t) &_file_Lcat_str_gZ,
	/*0x05a5*/ (uintptr_t) &_file_Lcat_str_fZ,
	/*0x05a6*/ (uintptr_t) &_file_Lcat_str_sZ,
	/*0x05a7*/ (uintptr_t) &_file_Lcat_str_iZ,
	/*0x05a8*/ (uintptr_t) &_file_LcaveE,
	/*0x05a9*/ (uintptr_t) &_file_LcaveJ,
	/*0x05aa*/ (uintptr_t) &_file_LcaveP,
	/*0x05ab*/ (uintptr_t) &_file_Lcave_str_gZ,
	/*0x05ac*/ (uintptr_t) &_file_Lcave_str_fZ,
	/*0x05ad*/ (uintptr_t) &_file_Lcave_str_sZ,
	/*0x05ae*/ (uintptr_t) &_file_Lcave_str_iZ,
	/*0x05af*/ (uintptr_t) &_file_LcradE,
	/*0x05b0*/ (uintptr_t) &_file_LcradJ,
	/*0x05b1*/ (uintptr_t) &_file_LcradP,
	/*0x05b2*/ (uintptr_t) &_file_Lcrad_str_gZ,
	/*0x05b3*/ (uintptr_t) &_file_Lcrad_str_fZ,
	/*0x05b4*/ (uintptr_t) &_file_Lcrad_str_sZ,
	/*0x05b5*/ (uintptr_t) &_file_Lcrad_str_iZ,
	/*0x05b6*/ (uintptr_t) &_file_LcrypE,
	/*0x05b7*/ (uintptr_t) &_file_LcrypJ,
	/*0x05b8*/ (uintptr_t) &_file_LcrypP,
	/*0x05b9*/ (uintptr_t) &_file_Lcryp_str_gZ,
	/*0x05ba*/ (uintptr_t) &_file_Lcryp_str_fZ,
	/*0x05bb*/ (uintptr_t) &_file_Lcryp_str_sZ,
	/*0x05bc*/ (uintptr_t) &_file_Lcryp_str_iZ,
	/*0x05bd*/ (uintptr_t) &_file_LdamE,
	/*0x05be*/ (uintptr_t) &_file_LdamJ,
	/*0x05bf*/ (uintptr_t) &_file_LdamP,
	/*0x05c0*/ (uintptr_t) &_file_Ldam_str_gZ,
	/*0x05c1*/ (uintptr_t) &_file_Ldam_str_fZ,
	/*0x05c2*/ (uintptr_t) &_file_Ldam_str_sZ,
	/*0x05c3*/ (uintptr_t) &_file_Ldam_str_iZ,
	/*0x05c4*/ (uintptr_t) &_file_LdepoE,
	/*0x05c5*/ (uintptr_t) &_file_LdepoJ,
	/*0x05c6*/ (uintptr_t) &_file_LdepoP,
	/*0x05c7*/ (uintptr_t) &_file_Ldepo_str_gZ,
	/*0x05c8*/ (uintptr_t) &_file_Ldepo_str_fZ,
	/*0x05c9*/ (uintptr_t) &_file_Ldepo_str_sZ,
	/*0x05ca*/ (uintptr_t) &_file_Ldepo_str_iZ,
	/*0x05cb*/ (uintptr_t) &_file_LdestE,
	/*0x05cc*/ (uintptr_t) &_file_LdestJ,
	/*0x05cd*/ (uintptr_t) &_file_LdestP,
	/*0x05ce*/ (uintptr_t) &_file_Ldest_str_gZ,
	/*0x05cf*/ (uintptr_t) &_file_Ldest_str_fZ,
	/*0x05d0*/ (uintptr_t) &_file_Ldest_str_sZ,
	/*0x05d1*/ (uintptr_t) &_file_Ldest_str_iZ,
	/*0x05d2*/ (uintptr_t) &_file_LdishE,
	/*0x05d3*/ (uintptr_t) &_file_LdishJ,
	/*0x05d4*/ (uintptr_t) &_file_LdishP,
	/*0x05d5*/ (uintptr_t) &_file_Ldish_str_gZ,
	/*0x05d6*/ (uintptr_t) &_file_Ldish_str_fZ,
	/*0x05d7*/ (uintptr_t) &_file_Ldish_str_sZ,
	/*0x05d8*/ (uintptr_t) &_file_Ldish_str_iZ,
	/*0x05d9*/ (uintptr_t) &_file_LearE,
	/*0x05da*/ (uintptr_t) &_file_LearJ,
	/*0x05db*/ (uintptr_t) &_file_LearP,
	/*0x05dc*/ (uintptr_t) &_file_Lear_str_gZ,
	/*0x05dd*/ (uintptr_t) &_file_Lear_str_fZ,
	/*0x05de*/ (uintptr_t) &_file_Lear_str_sZ,
	/*0x05df*/ (uintptr_t) &_file_Lear_str_iZ,
	/*0x05e0*/ (uintptr_t) &_file_LeldE,
	/*0x05e1*/ (uintptr_t) &_file_LeldJ,
	/*0x05e2*/ (uintptr_t) &_file_LeldP,
	/*0x05e3*/ (uintptr_t) &_file_Leld_str_gZ,
	/*0x05e4*/ (uintptr_t) &_file_Leld_str_fZ,
	/*0x05e5*/ (uintptr_t) &_file_Leld_str_sZ,
	/*0x05e6*/ (uintptr_t) &_file_Leld_str_iZ,
	/*0x05e7*/ (uintptr_t) &_file_LgunE,
	/*0x05e8*/ (uintptr_t) &_file_LgunJ,
	/*0x05e9*/ (uintptr_t) &_file_LgunP,
	/*0x05ea*/ (uintptr_t) &_file_Lgun_str_gZ,
	/*0x05eb*/ (uintptr_t) &_file_Lgun_str_fZ,
	/*0x05ec*/ (uintptr_t) &_file_Lgun_str_sZ,
	/*0x05ed*/ (uintptr_t) &_file_Lgun_str_iZ,
	/*0x05ee*/ (uintptr_t) &_file_LimpE,
	/*0x05ef*/ (uintptr_t) &_file_LimpJ,
	/*0x05f0*/ (uintptr_t) &_file_LimpP,
	/*0x05f1*/ (uintptr_t) &_file_Limp_str_gZ,
	/*0x05f2*/ (uintptr_t) &_file_Limp_str_fZ,
	/*0x05f3*/ (uintptr_t) &_file_Limp_str_sZ,
	/*0x05f4*/ (uintptr_t) &_file_Limp_str_iZ,
	/*0x05f5*/ (uintptr_t) &_file_LjunE,
	/*0x05f6*/ (uintptr_t) &_file_LjunJ,
	/*0x05f7*/ (uintptr_t) &_file_LjunP,
	/*0x05f8*/ (uintptr_t) &_file_Ljun_str_gZ,
	/*0x05f9*/ (uintptr_t) &_file_Ljun_str_fZ,
	/*0x05fa*/ (uintptr_t) &_file_Ljun_str_sZ,
	/*0x05fb*/ (uintptr_t) &_file_Ljun_str_iZ,
	/*0x05fc*/ (uintptr_t) &_file_LlamE,
	/*0x05fd*/ (uintptr_t) &_file_LlamJ,
	/*0x05fe*/ (uintptr_t) &_file_LlamP,
	/*0x05ff*/ (uintptr_t) &_file_Llam_str_gZ,
	/*0x0600*/ (uintptr_t) &_file_Llam_str_fZ,
	/*0x0601*/ (uintptr_t) &_file_Llam_str_sZ,
	/*0x0602*/ (uintptr_t) &_file_Llam_str_iZ,
	/*0x0603*/ (uintptr_t) &_file_LleeE,
	/*0x0604*/ (uintptr_t) &_file_LleeJ,
	/*0x0605*/ (uintptr_t) &_file_LleeP,
	/*0x0606*/ (uintptr_t) &_file_Llee_str_gZ,
	/*0x0607*/ (uintptr_t) &_file_Llee_str_fZ,
	/*0x0608*/ (uintptr_t) &_file_Llee_str_sZ,
	/*0x0609*/ (uintptr_t) &_file_Llee_str_iZ,
	/*0x060a*/ (uintptr_t) &_file_LlenE,
	/*0x060b*/ (uintptr_t) &_file_LlenJ,
	/*0x060c*/ (uintptr_t) &_file_LlenP,
	/*0x060d*/ (uintptr_t) &_file_Llen_str_gZ,
	/*0x060e*/ (uintptr_t) &_file_Llen_str_fZ,
	/*0x060f*/ (uintptr_t) &_file_Llen_str_sZ,
	/*0x0610*/ (uintptr_t) &_file_Llen_str_iZ,
	/*0x0611*/ (uintptr_t) &_file_LlipE,
	/*0x0612*/ (uintptr_t) &_file_LlipJ,
	/*0x0613*/ (uintptr_t) &_file_LlipP,
	/*0x0614*/ (uintptr_t) &_file_Llip_str_gZ,
	/*0x0615*/ (uintptr_t) &_file_Llip_str_fZ,
	/*0x0616*/ (uintptr_t) &_file_Llip_str_sZ,
	/*0x0617*/ (uintptr_t) &_file_Llip_str_iZ,
	/*0x0618*/ (uintptr_t) &_file_LlueE,
	/*0x0619*/ (uintptr_t) &_file_LlueJ,
	/*0x061a*/ (uintptr_t) &_file_LlueP,
	/*0x061b*/ (uintptr_t) &_file_Llue_str_gZ,
	/*0x061c*/ (uintptr_t) &_file_Llue_str_fZ,
	/*0x061d*/ (uintptr_t) &_file_Llue_str_sZ,
	/*0x061e*/ (uintptr_t) &_file_Llue_str_iZ,
	/*0x061f*/ (uintptr_t) &_file_LmiscE,
	/*0x0620*/ (uintptr_t) &_file_LmiscJ,
	/*0x0621*/ (uintptr_t) &_file_LmiscP,
	/*0x0622*/ (uintptr_t) &_file_Lmisc_str_gZ,
	/*0x0623*/ (uintptr_t) &_file_Lmisc_str_fZ,
	/*0x0624*/ (uintptr_t) &_file_Lmisc_str_sZ,
	/*0x0625*/ (uintptr_t) &_file_Lmisc_str_iZ,
	/*0x0626*/ (uintptr_t) &_file_Lmp10E,
	/*0x0627*/ (uintptr_t) &_file_Lmp10J,
	/*0x0628*/ (uintptr_t) &_file_Lmp10P,
	/*0x0629*/ (uintptr_t) &_file_Lmp10_str_gZ,
	/*0x062a*/ (uintptr_t) &_file_Lmp10_str_fZ,
	/*0x062b*/ (uintptr_t) &_file_Lmp10_str_sZ,
	/*0x062c*/ (uintptr_t) &_file_Lmp10_str_iZ,
	/*0x062d*/ (uintptr_t) &_file_Lmp11E,
	/*0x062e*/ (uintptr_t) &_file_Lmp11J,
	/*0x062f*/ (uintptr_t) &_file_Lmp11P,
	/*0x0630*/ (uintptr_t) &_file_Lmp11_str_gZ,
	/*0x0631*/ (uintptr_t) &_file_Lmp11_str_fZ,
	/*0x0632*/ (uintptr_t) &_file_Lmp11_str_sZ,
	/*0x0633*/ (uintptr_t) &_file_Lmp11_str_iZ,
	/*0x0634*/ (uintptr_t) &_file_Lmp12E,
	/*0x0635*/ (uintptr_t) &_file_Lmp12J,
	/*0x0636*/ (uintptr_t) &_file_Lmp12P,
	/*0x0637*/ (uintptr_t) &_file_Lmp12_str_gZ,
	/*0x0638*/ (uintptr_t) &_file_Lmp12_str_fZ,
	/*0x0639*/ (uintptr_t) &_file_Lmp12_str_sZ,
	/*0x063a*/ (uintptr_t) &_file_Lmp12_str_iZ,
	/*0x063b*/ (uintptr_t) &_file_Lmp13E,
	/*0x063c*/ (uintptr_t) &_file_Lmp13J,
	/*0x063d*/ (uintptr_t) &_file_Lmp13P,
	/*0x063e*/ (uintptr_t) &_file_Lmp13_str_gZ,
	/*0x063f*/ (uintptr_t) &_file_Lmp13_str_fZ,
	/*0x0640*/ (uintptr_t) &_file_Lmp13_str_sZ,
	/*0x0641*/ (uintptr_t) &_file_Lmp13_str_iZ,
	/*0x0642*/ (uintptr_t) &_file_Lmp14E,
	/*0x0643*/ (uintptr_t) &_file_Lmp14J,
	/*0x0644*/ (uintptr_t) &_file_Lmp14P,
	/*0x0645*/ (uintptr_t) &_file_Lmp14_str_gZ,
	/*0x0646*/ (uintptr_t) &_file_Lmp14_str_fZ,
	/*0x0647*/ (uintptr_t) &_file_Lmp14_str_sZ,
	/*0x0648*/ (uintptr_t) &_file_Lmp14_str_iZ,
	/*0x0649*/ (uintptr_t) &_file_Lmp15E,
	/*0x064a*/ (uintptr_t) &_file_Lmp15J,
	/*0x064b*/ (uintptr_t) &_file_Lmp15P,
	/*0x064c*/ (uintptr_t) &_file_Lmp15_str_gZ,
	/*0x064d*/ (uintptr_t) &_file_Lmp15_str_fZ,
	/*0x064e*/ (uintptr_t) &_file_Lmp15_str_sZ,
	/*0x064f*/ (uintptr_t) &_file_Lmp15_str_iZ,
	/*0x0650*/ (uintptr_t) &_file_Lmp16E,
	/*0x0651*/ (uintptr_t) &_file_Lmp16J,
	/*0x0652*/ (uintptr_t) &_file_Lmp16P,
	/*0x0653*/ (uintptr_t) &_file_Lmp16_str_gZ,
	/*0x0654*/ (uintptr_t) &_file_Lmp16_str_fZ,
	/*0x0655*/ (uintptr_t) &_file_Lmp16_str_sZ,
	/*0x0656*/ (uintptr_t) &_file_Lmp16_str_iZ,
	/*0x0657*/ (uintptr_t) &_file_Lmp17E,
	/*0x0658*/ (uintptr_t) &_file_Lmp17J,
	/*0x0659*/ (uintptr_t) &_file_Lmp17P,
	/*0x065a*/ (uintptr_t) &_file_Lmp17_str_gZ,
	/*0x065b*/ (uintptr_t) &_file_Lmp17_str_fZ,
	/*0x065c*/ (uintptr_t) &_file_Lmp17_str_sZ,
	/*0x065d*/ (uintptr_t) &_file_Lmp17_str_iZ,
	/*0x065e*/ (uintptr_t) &_file_Lmp18E,
	/*0x065f*/ (uintptr_t) &_file_Lmp18J,
	/*0x0660*/ (uintptr_t) &_file_Lmp18P,
	/*0x0661*/ (uintptr_t) &_file_Lmp18_str_gZ,
	/*0x0662*/ (uintptr_t) &_file_Lmp18_str_fZ,
	/*0x0663*/ (uintptr_t) &_file_Lmp18_str_sZ,
	/*0x0664*/ (uintptr_t) &_file_Lmp18_str_iZ,
	/*0x0665*/ (uintptr_t) &_file_Lmp19E,
	/*0x0666*/ (uintptr_t) &_file_Lmp19J,
	/*0x0667*/ (uintptr_t) &_file_Lmp19P,
	/*0x0668*/ (uintptr_t) &_file_Lmp19_str_gZ,
	/*0x0669*/ (uintptr_t) &_file_Lmp19_str_fZ,
	/*0x066a*/ (uintptr_t) &_file_Lmp19_str_sZ,
	/*0x066b*/ (uintptr_t) &_file_Lmp19_str_iZ,
	/*0x066c*/ (uintptr_t) &_file_Lmp1E,
	/*0x066d*/ (uintptr_t) &_file_Lmp1J,
	/*0x066e*/ (uintptr_t) &_file_Lmp1P,
	/*0x066f*/ (uintptr_t) &_file_Lmp1_str_gZ,
	/*0x0670*/ (uintptr_t) &_file_Lmp1_str_fZ,
	/*0x0671*/ (uintptr_t) &_file_Lmp1_str_sZ,
	/*0x0672*/ (uintptr_t) &_file_Lmp1_str_iZ,
	/*0x0673*/ (uintptr_t) &_file_Lmp20E,
	/*0x0674*/ (uintptr_t) &_file_Lmp20J,
	/*0x0675*/ (uintptr_t) &_file_Lmp20P,
	/*0x0676*/ (uintptr_t) &_file_Lmp20_str_gZ,
	/*0x0677*/ (uintptr_t) &_file_Lmp20_str_fZ,
	/*0x0678*/ (uintptr_t) &_file_Lmp20_str_sZ,
	/*0x0679*/ (uintptr_t) &_file_Lmp20_str_iZ,
	/*0x067a*/ (uintptr_t) &_file_Lmp2E,
	/*0x067b*/ (uintptr_t) &_file_Lmp2J,
	/*0x067c*/ (uintptr_t) &_file_Lmp2P,
	/*0x067d*/ (uintptr_t) &_file_Lmp2_str_gZ,
	/*0x067e*/ (uintptr_t) &_file_Lmp2_str_fZ,
	/*0x067f*/ (uintptr_t) &_file_Lmp2_str_sZ,
	/*0x0680*/ (uintptr_t) &_file_Lmp2_str_iZ,
	/*0x0681*/ (uintptr_t) &_file_Lmp3E,
	/*0x0682*/ (uintptr_t) &_file_Lmp3J,
	/*0x0683*/ (uintptr_t) &_file_Lmp3P,
	/*0x0684*/ (uintptr_t) &_file_Lmp3_str_gZ,
	/*0x0685*/ (uintptr_t) &_file_Lmp3_str_fZ,
	/*0x0686*/ (uintptr_t) &_file_Lmp3_str_sZ,
	/*0x0687*/ (uintptr_t) &_file_Lmp3_str_iZ,
	/*0x0688*/ (uintptr_t) &_file_Lmp4E,
	/*0x0689*/ (uintptr_t) &_file_Lmp4J,
	/*0x068a*/ (uintptr_t) &_file_Lmp4P,
	/*0x068b*/ (uintptr_t) &_file_Lmp4_str_gZ,
	/*0x068c*/ (uintptr_t) &_file_Lmp4_str_fZ,
	/*0x068d*/ (uintptr_t) &_file_Lmp4_str_sZ,
	/*0x068e*/ (uintptr_t) &_file_Lmp4_str_iZ,
	/*0x068f*/ (uintptr_t) &_file_Lmp5E,
	/*0x0690*/ (uintptr_t) &_file_Lmp5J,
	/*0x0691*/ (uintptr_t) &_file_Lmp5P,
	/*0x0692*/ (uintptr_t) &_file_Lmp5_str_gZ,
	/*0x0693*/ (uintptr_t) &_file_Lmp5_str_fZ,
	/*0x0694*/ (uintptr_t) &_file_Lmp5_str_sZ,
	/*0x0695*/ (uintptr_t) &_file_Lmp5_str_iZ,
	/*0x0696*/ (uintptr_t) &_file_Lmp6E,
	/*0x0697*/ (uintptr_t) &_file_Lmp6J,
	/*0x0698*/ (uintptr_t) &_file_Lmp6P,
	/*0x0699*/ (uintptr_t) &_file_Lmp6_str_gZ,
	/*0x069a*/ (uintptr_t) &_file_Lmp6_str_fZ,
	/*0x069b*/ (uintptr_t) &_file_Lmp6_str_sZ,
	/*0x069c*/ (uintptr_t) &_file_Lmp6_str_iZ,
	/*0x069d*/ (uintptr_t) &_file_Lmp7E,
	/*0x069e*/ (uintptr_t) &_file_Lmp7J,
	/*0x069f*/ (uintptr_t) &_file_Lmp7P,
	/*0x06a0*/ (uintptr_t) &_file_Lmp7_str_gZ,
	/*0x06a1*/ (uintptr_t) &_file_Lmp7_str_fZ,
	/*0x06a2*/ (uintptr_t) &_file_Lmp7_str_sZ,
	/*0x06a3*/ (uintptr_t) &_file_Lmp7_str_iZ,
	/*0x06a4*/ (uintptr_t) &_file_Lmp8E,
	/*0x06a5*/ (uintptr_t) &_file_Lmp8J,
	/*0x06a6*/ (uintptr_t) &_file_Lmp8P,
	/*0x06a7*/ (uintptr_t) &_file_Lmp8_str_gZ,
	/*0x06a8*/ (uintptr_t) &_file_Lmp8_str_fZ,
	/*0x06a9*/ (uintptr_t) &_file_Lmp8_str_sZ,
	/*0x06aa*/ (uintptr_t) &_file_Lmp8_str_iZ,
	/*0x06ab*/ (uintptr_t) &_file_Lmp9E,
	/*0x06ac*/ (uintptr_t) &_file_Lmp9J,
	/*0x06ad*/ (uintptr_t) &_file_Lmp9P,
	/*0x06ae*/ (uintptr_t) &_file_Lmp9_str_gZ,
	/*0x06af*/ (uintptr_t) &_file_Lmp9_str_fZ,
	/*0x06b0*/ (uintptr_t) &_file_Lmp9_str_sZ,
	/*0x06b1*/ (uintptr_t) &_file_Lmp9_str_iZ,
	/*0x06b2*/ (uintptr_t) &_file_LmpmenuE,
	/*0x06b3*/ (uintptr_t) &_file_LmpmenuJ,
	/*0x06b4*/ (uintptr_t) &_file_LmpmenuP,
	/*0x06b5*/ (uintptr_t) &_file_Lmpmenu_str_gZ,
	/*0x06b6*/ (uintptr_t) &_file_Lmpmenu_str_fZ,
	/*0x06b7*/ (uintptr_t) &_file_Lmpmenu_str_sZ,
	/*0x06b8*/ (uintptr_t) &_file_Lmpmenu_str_iZ,
	/*0x06b9*/ (uintptr_t) &_file_LmpweaponsE,
	/*0x06ba*/ (uintptr_t) &_file_LmpweaponsJ,
	/*0x06bb*/ (uintptr_t) &_file_LmpweaponsP,
	/*0x06bc*/ (uintptr_t) &_file_Lmpweapons_str_gZ,
	/*0x06bd*/ (uintptr_t) &_file_Lmpweapons_str_fZ,
	/*0x06be*/ (uintptr_t) &_file_Lmpweapons_str_sZ,
	/*0x06bf*/ (uintptr_t) &_file_Lmpweapons_str_iZ,
	/*0x06c0*/ (uintptr_t) &_file_LoatE,
	/*0x06c1*/ (uintptr_t) &_file_LoatJ,
	/*0x06c2*/ (uintptr_t) &_file_LoatP,
	/*0x06c3*/ (uintptr_t) &_file_Loat_str_gZ,
	/*0x06c4*/ (uintptr_t) &_file_Loat_str_fZ,
	/*0x06c5*/ (uintptr_t) &_file_Loat_str_sZ,
	/*0x06c6*/ (uintptr_t) &_file_Loat_str_iZ,
	/*0x06c7*/ (uintptr_t) &_file_LoldE,
	/*0x06c8*/ (uintptr_t) &_file_LoldJ,
	/*0x06c9*/ (uintptr_t) &_file_LoldP,
	/*0x06ca*/ (uintptr_t) &_file_Lold_str_gZ,
	/*0x06cb*/ (uintptr_t) &_file_Lold_str_fZ,
	/*0x06cc*/ (uintptr_t) &_file_Lold_str_sZ,
	/*0x06cd*/ (uintptr_t) &_file_Lold_str_iZ,
	/*0x06ce*/ (uintptr_t) &_file_LoptionsE,
	/*0x06cf*/ (uintptr_t) &_file_LoptionsJ,
	/*0x06d0*/ (uintptr_t) &_file_LoptionsP,
	/*0x06d1*/ (uintptr_t) &_file_Loptions_str_gZ,
	/*0x06d2*/ (uintptr_t) &_file_Loptions_str_fZ,
	/*0x06d3*/ (uintptr_t) &_file_Loptions_str_sZ,
	/*0x06d4*/ (uintptr_t) &_file_Loptions_str_iZ,
	/*0x06d5*/ (uintptr_t) &_file_LpamE,
	/*0x06d6*/ (uintptr_t) &_file_LpamJ,
	/*0x06d7*/ (uintptr_t) &_file_LpamP,
	/*0x06d8*/ (uintptr_t) &_file_Lpam_str_gZ,
	/*0x06d9*/ (uintptr_t) &_file_Lpam_str_fZ,
	/*0x06da*/ (uintptr_t) &_file_Lpam_str_sZ,
	/*0x06db*/ (uintptr_t) &_file_Lpam_str_iZ,
	/*0x06dc*/ (uintptr_t) &_file_LpeteE,
	/*0x06dd*/ (uintptr_t) &_file_LpeteJ,
	/*0x06de*/ (uintptr_t) &_file_LpeteP,
	/*0x06df*/ (uintptr_t) &_file_Lpete_str_gZ,
	/*0x06e0*/ (uintptr_t) &_file_Lpete_str_fZ,
	/*0x06e1*/ (uintptr_t) &_file_Lpete_str_sZ,
	/*0x06e2*/ (uintptr_t) &_file_Lpete_str_iZ,
	/*0x06e3*/ (uintptr_t) &_file_LpropobjE,
	/*0x06e4*/ (uintptr_t) &_file_LpropobjJ,
	/*0x06e5*/ (uintptr_t) &_file_LpropobjP,
	/*0x06e6*/ (uintptr_t) &_file_Lpropobj_str_gZ,
	/*0x06e7*/ (uintptr_t) &_file_Lpropobj_str_fZ,
	/*0x06e8*/ (uintptr_t) &_file_Lpropobj_str_sZ,
	/*0x06e9*/ (uintptr_t) &_file_Lpropobj_str_iZ,
	/*0x06ea*/ (uintptr_t) &_file_LrefE,
	/*0x06eb*/ (uintptr_t) &_file_LrefJ,
	/*0x06ec*/ (uintptr_t) &_file_LrefP,
	/*0x06ed*/ (uintptr_t) &_file_Lref_str_gZ,
	/*0x06ee*/ (uintptr_t) &_file_Lref_str_fZ,
	/*0x06ef*/ (uintptr_t) &_file_Lref_str_sZ,
	/*0x06f0*/ (uintptr_t) &_file_Lref_str_iZ,
	/*0x06f1*/ (uintptr_t) &_file_LritE,
	/*0x06f2*/ (uintptr_t) &_file_LritJ,
	/*0x06f3*/ (uintptr_t) &_file_LritP,
	/*0x06f4*/ (uintptr_t) &_file_Lrit_str_gZ,
	/*0x06f5*/ (uintptr_t) &_file_Lrit_str_fZ,
	/*0x06f6*/ (uintptr_t) &_file_Lrit_str_sZ,
	/*0x06f7*/ (uintptr_t) &_file_Lrit_str_iZ,
	/*0x06f8*/ (uintptr_t) &_file_LrunE,
	/*0x06f9*/ (uintptr_t) &_file_LrunJ,
	/*0x06fa*/ (uintptr_t) &_file_LrunP,
	/*0x06fb*/ (uintptr_t) &_file_Lrun_str_gZ,
	/*0x06fc*/ (uintptr_t) &_file_Lrun_str_fZ,
	/*0x06fd*/ (uintptr_t) &_file_Lrun_str_sZ,
	/*0x06fe*/ (uintptr_t) &_file_Lrun_str_iZ,
	/*0x06ff*/ (uintptr_t) &_file_LsevE,
	/*0x0700*/ (uintptr_t) &_file_LsevJ,
	/*0x0701*/ (uintptr_t) &_file_LsevP,
	/*0x0702*/ (uintptr_t) &_file_Lsev_str_gZ,
	/*0x0703*/ (uintptr_t) &_file_Lsev_str_fZ,
	/*0x0704*/ (uintptr_t) &_file_Lsev_str_sZ,
	/*0x0705*/ (uintptr_t) &_file_Lsev_str_iZ,
	/*0x0706*/ (uintptr_t) &_file_LsevbE,
	/*0x0707*/ (uintptr_t) &_file_LsevbJ,
	/*0x0708*/ (uintptr_t) &_file_LsevbP,
	/*0x0709*/ (uintptr_t) &_file_Lsevb_str_gZ,
	/*0x070a*/ (uintptr_t) &_file_Lsevb_str_fZ,
	/*0x070b*/ (uintptr_t) &_file_Lsevb_str_sZ,
	/*0x070c*/ (uintptr_t) &_file_Lsevb_str_iZ,
	/*0x070d*/ (uintptr_t) &_file_LsevxE,
	/*0x070e*/ (uintptr_t) &_file_LsevxJ,
	/*0x070f*/ (uintptr_t) &_file_LsevxP,
	/*0x0710*/ (uintptr_t) &_file_Lsevx_str_gZ,
	/*0x0711*/ (uintptr_t) &_file_Lsevx_str_fZ,
	/*0x0712*/ (uintptr_t) &_file_Lsevx_str_sZ,
	/*0x0713*/ (uintptr_t) &_file_Lsevx_str_iZ,
	/*0x0714*/ (uintptr_t) &_file_LsevxbE,
	/*0x0715*/ (uintptr_t) &_file_LsevxbJ,
	/*0x0716*/ (uintptr_t) &_file_LsevxbP,
	/*0x0717*/ (uintptr_t) &_file_Lsevxb_str_gZ,
	/*0x0718*/ (uintptr_t) &_file_Lsevxb_str_fZ,
	/*0x0719*/ (uintptr_t) &_file_Lsevxb_str_sZ,
	/*0x071a*/ (uintptr_t) &_file_Lsevxb_str_iZ,
	/*0x071b*/ (uintptr_t) &_file_LshoE,
	/*0x071c*/ (uintptr_t) &_file_LshoJ,
	/*0x071d*/ (uintptr_t) &_file_LshoP,
	/*0x071e*/ (uintptr_t) &_file_Lsho_str_gZ,
	/*0x071f*/ (uintptr_t) &_file_Lsho_str_fZ,
	/*0x0720*/ (uintptr_t) &_file_Lsho_str_sZ,
	/*0x0721*/ (uintptr_t) &_file_Lsho_str_iZ,
	/*0x0722*/ (uintptr_t) &_file_LsiloE,
	/*0x0723*/ (uintptr_t) &_file_LsiloJ,
	/*0x0724*/ (uintptr_t) &_file_LsiloP,
	/*0x0725*/ (uintptr_t) &_file_Lsilo_str_gZ,
	/*0x0726*/ (uintptr_t) &_file_Lsilo_str_fZ,
	/*0x0727*/ (uintptr_t) &_file_Lsilo_str_sZ,
	/*0x0728*/ (uintptr_t) &_file_Lsilo_str_iZ,
	/*0x0729*/ (uintptr_t) &_file_LstatE,
	/*0x072a*/ (uintptr_t) &_file_LstatJ,
	/*0x072b*/ (uintptr_t) &_file_LstatP,
	/*0x072c*/ (uintptr_t) &_file_Lstat_str_gZ,
	/*0x072d*/ (uintptr_t) &_file_Lstat_str_fZ,
	/*0x072e*/ (uintptr_t) &_file_Lstat_str_sZ,
	/*0x072f*/ (uintptr_t) &_file_Lstat_str_iZ,
	/*0x0730*/ (uintptr_t) &_file_LtitleE,
	/*0x0731*/ (uintptr_t) &_file_LtitleJ,
	/*0x0732*/ (uintptr_t) &_file_LtitleP,
	/*0x0733*/ (uintptr_t) &_file_Ltitle_str_gZ,
	/*0x0734*/ (uintptr_t) &_file_Ltitle_str_fZ,
	/*0x0735*/ (uintptr_t) &_file_Ltitle_str_sZ,
	/*0x0736*/ (uintptr_t) &_file_Ltitle_str_iZ,
	/*0x0737*/ (uintptr_t) &_file_LtraE,
	/*0x0738*/ (uintptr_t) &_file_LtraJ,
	/*0x0739*/ (uintptr_t) &_file_LtraP,
	/*0x073a*/ (uintptr_t) &_file_Ltra_str_gZ,
	/*0x073b*/ (uintptr_t) &_file_Ltra_str_fZ,
	/*0x073c*/ (uintptr_t) &_file_Ltra_str_sZ,
	/*0x073d*/ (uintptr_t) &_file_Ltra_str_iZ,
	/*0x073e*/ (uintptr_t) &_file_LuffE,
	/*0x073f*/ (uintptr_t) &_file_LuffJ,
	/*0x0740*/ (uintptr_t) &_file_LuffP,
	/*0x0741*/ (uintptr_t) &_file_Luff_str_gZ,
	/*0x0742*/ (uintptr_t) &_file_Luff_str_fZ,
	/*0x0743*/ (uintptr_t) &_file_Luff_str_sZ,
	/*0x0744*/ (uintptr_t) &_file_Luff_str_iZ,
	/*0x0745*/ (uintptr_t) &_file_LwaxE,
	/*0x0746*/ (uintptr_t) &_file_LwaxJ,
	/*0x0747*/ (uintptr_t) &_file_LwaxP,
	/*0x0748*/ (uintptr_t) &_file_Lwax_str_gZ,
	/*0x0749*/ (uintptr_t) &_file_Lwax_str_fZ,
	/*0x074a*/ (uintptr_t) &_file_Lwax_str_sZ,
	/*0x074b*/ (uintptr_t) &_file_Lwax_str_iZ,
	/*0x074c*/ (uintptr_t) &_file_Pa51grateZ,
	/*0x074d*/ (uintptr_t) &_file_GecmmineZ,
	/*0x074e*/ (uintptr_t) &_file_GcommsuplinkZ,
	/*0x074f*/ (uintptr_t) &_file_GirscannerZ,
	/*0x0750*/ (uintptr_t) &_file_Paf1escapedoorZ,
	/*0x0751*/ (uintptr_t) &_file_PprescapsuleZ,
	/*0x0752*/ (uintptr_t) &_file_PskedarbridgeZ,
	/*0x0753*/ (uintptr_t) &_file_Ppelagicdoor2Z,
	/*0x0754*/ (uintptr_t) &_file_Avault2M,
	/*0x0755*/ (uintptr_t) &_file_Ap29_12_elM,
	/*0x0756*/ (uintptr_t) &_file_Pttb_boxZ,
	/*0x0757*/ (uintptr_t) &_file_PinstfrontdoorZ,
	/*0x0758*/ (uintptr_t) &_file_Ap14_09_joM,
	/*0x0759*/ (uintptr_t) &_file_Ap19_07_joM,
	/*0x075a*/ (uintptr_t) &_file_Ap19_08_joM,
	/*0x075b*/ (uintptr_t) &_file_PchrlaserZ,
	/*0x075c*/ (uintptr_t) &_file_PbaftaZ,
	/*0x075d*/ (uintptr_t) &_file_PchrsonicscrewerZ,
	/*0x075e*/ (uintptr_t) &_file_PchrlumphammerZ,
	/*0x075f*/ (uintptr_t) &_file_PskedarbombZ,
	/*0x0760*/ (uintptr_t) &_file_PexplosivebrickZ,
	/*0x0761*/ (uintptr_t) &_file_PresearchtapeZ,
	/*0x0762*/ (uintptr_t) &_file_PziggycardZ,
	/*0x0763*/ (uintptr_t) &_file_PsafeitemZ,
	/*0x0764*/ (uintptr_t) &_file_Ghand_elvisZ,
	/*0x0765*/ (uintptr_t) &_file_Paf1_tableZ,
	/*0x0766*/ (uintptr_t) &_file_Ghand_a51guardZ,
	/*0x0767*/ (uintptr_t) &_file_Ghand_ddshockZ,
	/*0x0768*/ (uintptr_t) &_file_Ghand_blackguardZ,
	/*0x0769*/ (uintptr_t) &_file_Ghand_ddfodderZ,
	/*0x076a*/ (uintptr_t) &_file_Ghand_ddbioZ,
	/*0x076b*/ (uintptr_t) &_file_Ghand_a51airmanZ,
	/*0x076c*/ (uintptr_t) &_file_Ghand_g5guardZ,
	/*0x076d*/ (uintptr_t) &_file_Ghand_cisoldierZ,
	/*0x076e*/ (uintptr_t) &_file_PsensitiveinfoZ,
	/*0x076f*/ (uintptr_t) &_file_PrussdarZ,
	/*0x0770*/ (uintptr_t) &_file_PxrayspecsZ,
	/*0x0771*/ (uintptr_t) &_file_PchreyespyZ,
	/*0x0772*/ (uintptr_t) &_file_PchrdoordecoderZ,
	/*0x0773*/ (uintptr_t) &_file_PbriefcaseZ,
	/*0x0774*/ (uintptr_t) &_file_PsuitcaseZ,
	/*0x0775*/ (uintptr_t) &_file_PshuttledoorZ,
	/*0x0776*/ (uintptr_t) &_file_PruinbridgeZ,
	/*0x0777*/ (uintptr_t) &_file_PsecretindoorZ,
	/*0x0778*/ (uintptr_t) &_file_PskpuzzleobjectZ,
	/*0x0779*/ (uintptr_t) &_file_Pa51liftdoorZ,
	/*0x077a*/ (uintptr_t) &_file_Acicarr06M,
	/*0x077b*/ (uintptr_t) &_file_Acicarr11M,
	/*0x077c*/ (uintptr_t) &_file_Acifarr08M,
	/*0x077d*/ (uintptr_t) &_file_Acifarr12M,
	/*0x077e*/ (uintptr_t) &_file_Acifema01M,
	/*0x077f*/ (uintptr_t) &_file_Acifema04M,
	/*0x0780*/ (uintptr_t) &_file_Acifema07M,
	/*0x0781*/ (uintptr_t) &_file_Acifema08M,
	/*0x0782*/ (uintptr_t) &_file_Acifema09M,
	/*0x0783*/ (uintptr_t) &_file_Acifema14M,
	/*0x0784*/ (uintptr_t) &_file_Acifost08M,
	/*0x0785*/ (uintptr_t) &_file_Acifost12M,
	/*0x0786*/ (uintptr_t) &_file_Acigrim05M,
	/*0x0787*/ (uintptr_t) &_file_Acigrim06M,
	/*0x0788*/ (uintptr_t) &_file_Acigrim07M,
	/*0x0789*/ (uintptr_t) &_file_Acigrim08M,
	/*0x078a*/ (uintptr_t) &_file_Acigrim09M,
	/*0x078b*/ (uintptr_t) &_file_Acigrim10M,
	/*0x078c*/ (uintptr_t) &_file_Acihopk09M,
	/*0x078d*/ (uintptr_t) &_file_Acihopk11M,
	/*0x078e*/ (uintptr_t) &_file_Acimale02M,
	/*0x078f*/ (uintptr_t) &_file_Acimale03M,
	/*0x0790*/ (uintptr_t) &_file_Acimale07M,
	/*0x0791*/ (uintptr_t) &_file_Acimale09M,
	/*0x0792*/ (uintptr_t) &_file_Acimale11M,
	/*0x0793*/ (uintptr_t) &_file_Acimale13M,
	/*0x0794*/ (uintptr_t) &_file_Aciroge08M,
	/*0x0795*/ (uintptr_t) &_file_Aciroge12M,
	/*0x0796*/ (uintptr_t) &_file_Cdark_negotiatorZ,
	/*0x0797*/ (uintptr_t) &_file_PcihubZ,
	/*0x0798*/ (uintptr_t) &_file_Psk_ship_door2Z,
	/*0x0799*/ (uintptr_t) &_file_Psk_window1Z,
	/*0x079a*/ (uintptr_t) &_file_Psk_hangardoorb_topZ,
	/*0x079b*/ (uintptr_t) &_file_Psk_hangardoorb_botZ,
	/*0x079c*/ (uintptr_t) &_file_Paf1_innerdoorZ,
	/*0x079d*/ (uintptr_t) &_file_Plaser_postZ,
	/*0x079e*/ (uintptr_t) &_file_Atrfost01M,
	/*0x079f*/ (uintptr_t) &_file_Atrfost02M,
	/*0x07a0*/ (uintptr_t) &_file_Atrfost03M,
	/*0x07a1*/ (uintptr_t) &_file_Atrcarr09M,
	/*0x07a2*/ (uintptr_t) &_file_Atrcarr10M,
	/*0x07a3*/ (uintptr_t) &_file_Atrcarr11M,
	/*0x07a4*/ (uintptr_t) &_file_Acifarr01M,
	/*0x07a5*/ (uintptr_t) &_file_Acifarr02M,
	/*0x07a6*/ (uintptr_t) &_file_Acifarr03M,
	/*0x07a7*/ (uintptr_t) &_file_Acigrim01M,
	/*0x07a8*/ (uintptr_t) &_file_Acigrim03M,
	/*0x07a9*/ (uintptr_t) &_file_Acigrim04M,
	/*0x07aa*/ (uintptr_t) &_file_Acihopk01M,
	/*0x07ab*/ (uintptr_t) &_file_Acihopk04M,
	/*0x07ac*/ (uintptr_t) &_file_Acihopk06M,
	/*0x07ad*/ (uintptr_t) &_file_Aciroge01M,
	/*0x07ae*/ (uintptr_t) &_file_Aciroge02M,
	/*0x07af*/ (uintptr_t) &_file_Atrroge01M,
	/*0x07b0*/ (uintptr_t) &_file_Acicarr07M,
	/*0x07b1*/ (uintptr_t) &_file_Acicarr08M,
	/*0x07b2*/ (uintptr_t) &_file_PtargetampZ,
	/*0x07b3*/ (uintptr_t) &_file_Psk_liftZ,
	/*0x07b4*/ (uintptr_t) &_file_PknockknockZ,
	/*0x07b5*/ (uintptr_t) &_file_PcetandoorZ,
	/*0x07b6*/ (uintptr_t) &_file_Ajoinst01M,
	/*0x07b7*/ (uintptr_t) &_file_Ajoinst02M,
	/*0x07b8*/ (uintptr_t) &_file_Ajoinst03M,
	/*0x07b9*/ (uintptr_t) &_file_Ajoinst04M,
	/*0x07ba*/ (uintptr_t) &_file_Ap25_03_joM,
	/*0x07bb*/ (uintptr_t) &_file_Paf1rubbleZ,
	/*0x07bc*/ (uintptr_t) &_file_Pdd_dr_nonrefZ,
	/*0x07bd*/ (uintptr_t) &_file_CheadtimZ,
	/*0x07be*/ (uintptr_t) &_file_CheadgrantZ,
	/*0x07bf*/ (uintptr_t) &_file_CheadpennyZ,
	/*0x07c0*/ (uintptr_t) &_file_CheadrobinZ,
	/*0x07c1*/ (uintptr_t) &_file_CheadalexZ,
	/*0x07c2*/ (uintptr_t) &_file_CheadjulianneZ,
	/*0x07c3*/ (uintptr_t) &_file_CheadlauraZ,
	/*0x07c4*/ (uintptr_t) &_file_CheaddavecZ,
	/*0x07c5*/ (uintptr_t) &_file_CheadkenZ,
	/*0x07c6*/ (uintptr_t) &_file_CheadjoelZ,
	/*0x07c7*/ (uintptr_t) &_file_PcetandoorsideZ,
	/*0x07c8*/ (uintptr_t) &_file_Ap29_13_joM,
	/*0x07c9*/ (uintptr_t) &_file_Ap29_14_joM,
	/*0x07ca*/ (uintptr_t) &_file_Acicarr09M,
	/*0x07cb*/ (uintptr_t) &_file_Acicarr10M,
	/*0x07cc*/ (uintptr_t) &_file_PbuddybridgeZ,
	/*0x07cd*/ (uintptr_t) &_file_CheadcookZ,
	/*0x07ce*/ (uintptr_t) &_file_CheadpryceZ,
	/*0x07cf*/ (uintptr_t) &_file_CheadsilkeZ,
	/*0x07d0*/ (uintptr_t) &_file_CheadsmithZ,
	/*0x07d1*/ (uintptr_t) &_file_CheadgarethZ,
	/*0x07d2*/ (uintptr_t) &_file_CheadmurchieZ,
	/*0x07d3*/ (uintptr_t) &_file_CheadwongZ,
	/*0x07d4*/ (uintptr_t) &_file_CheadcarterZ,
	/*0x07d5*/ (uintptr_t) &_file_CheadtintinZ,
	/*0x07d6*/ (uintptr_t) &_file_CheadmuntonZ,
	/*0x07d7*/ (uintptr_t) &_file_CheadstamperZ,
	/*0x07d8*/ (uintptr_t) &_file_CheadjonesZ,
	/*0x07d9*/ (uintptr_t) &_file_CheadphelpsZ,
	/*0x07da*/ (uintptr_t) &_file_Ap29_15_joM,
	/*0x07db*/ (uintptr_t) &_file_Ap16_03_joM,
	/*0x07dc*/ (uintptr_t) &_file_Acarrbye02M,
#if VERSION >= VERSION_NTSC_1_0
	/*0x07dd*/ (uintptr_t) &_file_Asaucerexp1M,
#endif
#if VERSION == VERSION_JPN_FINAL
	/*0x07de*/ (uintptr_t) &_file_PjaplogoZ,
	/*0x07df*/ (uintptr_t) &_file_PjappdZ,
#endif
	(uintptr_t) &_filenamesSegmentRomStart,
};

romptr_t fileGetRomAddress(s32 filenum)
{
	return (romptr_t) g_FileTable[filenum];
}

u32 fileGetRomSizeByTableAddress(u32 *filetableaddr)
{
	u32 size;

	if (filetableaddr[1]) {
		size = filetableaddr[1] - filetableaddr[0];
	} else {
		size = 0;
	}

	return size;
}

s32 fileGetRomSize(s32 filenum)
{
	return fileGetRomSizeByTableAddress((u32 *)&g_FileTable[filenum]);
}

u32 file0f166ea8(u32 *filetableaddr)
{
	return 0;
}

void fileLoad(u8 *dst, u32 allocationlen, u32 *romaddrptr, struct fileinfo *info)
{
	u32 romsize = fileGetRomSizeByTableAddress(romaddrptr);
	u8 buffer[5 * 1024];

	if (allocationlen == 0) {
		// DMA with no inflate
		dmaExec(dst, *romaddrptr, romsize);
	} else {
		// DMA the compressed data to scratch space then inflate
		u8 *scratch = (dst + allocationlen) - ((romsize + 7) & 0xfffffff8);

		if ((uintptr_t)scratch - (uintptr_t)dst < 8) {
			info->loadedsize = 0;
		} else {
			s32 result;
#if VERSION < VERSION_NTSC_1_0
			char sp54[128];
			u32 stack[2];
#endif

			dmaExec(scratch, *romaddrptr, romsize);
			result = rzipInflate(scratch, dst, buffer);

#if VERSION < VERSION_NTSC_1_0
			if (result == 0) {
				sprintf(sp54, "DMA-Crash %s %d Ram: %02x%02x%02x%02x%02x%02x%02x%02x", "ob.c", 204,
						scratch[0], scratch[1], scratch[2], scratch[3],
						scratch[4], scratch[5], scratch[6], scratch[7]);
				crashSetMessage(sp54);
				CRASH();
			}
#endif

			result = ALIGN16(result);

			info->loadedsize = result;
		}
	}
}

void filesInit(void)
{
	s32 i;
	s32 j = 0;

	for (i = 1, j = 0; i < NUM_FILES; i++) {
		struct fileinfo *info = g_FileInfo + i;
		j = i;

		info->loadedsize = 0;
		info->allocsize = 0;

		fileGetRomSizeByTableAddress((u32 *)(g_FileTable + i));

		if (g_FileTable);
		if (g_FileInfo);
	}

	if (j);
}

void fileLoadPartToAddr(u16 filenum, void *memaddr, s32 offset, u32 len)
{
	u32 stack[2];

	if (fileGetRomSizeByTableAddress((u32 *)&g_FileTable[filenum])) {
		dmaExec(memaddr, (romptr_t) g_FileTable[filenum] + offset, len);
	}
}

u32 fileGetInflatedSize(s32 filenum)
{
	u8 *ptr;
	u8 buffer[0x50];
	u32 *romaddrptr;
#if VERSION < VERSION_NTSC_1_0
	char message[128];
#endif
	u32 romaddr;

	romaddrptr = &g_FileTable[filenum];

	if (1);

	romaddr = *romaddrptr;
	ptr = (u8 *) ((uintptr_t) &buffer[0x10] & ~0xf);

	if (romaddr == 0) {
		stub0f175f58(file0f166ea8(&g_FileTable[filenum]), ptr, 16);
	} else {
		dmaExec(ptr, romaddr, 0x40);
	}

	if (rzipIs1173(ptr)) {
		return (ptr[2] << 16) | (ptr[3] << 8) | ptr[4];
	}

#if VERSION < VERSION_NTSC_1_0
	sprintf(message, "DMA-Crash %s %d Ram: %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
			"ob.c", 446,
			ptr[0x00], ptr[0x01], ptr[0x02], ptr[0x03],
			ptr[0x04], ptr[0x05], ptr[0x06], ptr[0x07],
			ptr[0x08], ptr[0x09], ptr[0x0a], ptr[0x0b],
			ptr[0x0c], ptr[0x0d], ptr[0x0e], ptr[0x0f]);
	crashSetMessage(message);
	CRASH();
#endif

	return 0;
}

void *fileLoadToNew(s32 filenum, u32 method)
{
	struct fileinfo *info = &g_FileInfo[filenum];
	u32 stack;
	void *ptr;

	if (method == FILELOADMETHOD_EXTRAMEM || method == FILELOADMETHOD_DEFAULT) {
		if (info->loadedsize == 0) {
			info->loadedsize = (fileGetInflatedSize(filenum) + 0x20) & 0xfffffff0;

			if (method == FILELOADMETHOD_EXTRAMEM) {
				info->loadedsize += 0x8000;
			}
		}

		ptr = mempAlloc(info->loadedsize, MEMPOOL_STAGE);
		info->allocsize = info->loadedsize;
		fileLoad(ptr, info->loadedsize, (u32 *)&g_FileTable[filenum], info);

		if (method != FILELOADMETHOD_EXTRAMEM) {
			mempRealloc(ptr, info->loadedsize, MEMPOOL_STAGE);
		}
	} else {
		while (1);
	}

	return ptr;
}

void fileRemove(s32 filenum)
{
	g_FileTable[filenum] = 0;
}

void *fileLoadToAddr(s32 filenum, s32 method, u8 *ptr, u32 size)
{
	struct fileinfo *info = &g_FileInfo[filenum];

	if (method == FILELOADMETHOD_EXTRAMEM || method == FILELOADMETHOD_DEFAULT) {
		info->allocsize = size;
		fileLoad(ptr, size, (u32 *)&g_FileTable[filenum], info);
	} else {
		while (1);
	}

	return ptr;
}

u32 fileGetLoadedSize(s32 filenum)
{
	return g_FileInfo[filenum].loadedsize;
}

u32 fileGetAllocationSize(s32 filenum)
{
	return g_FileInfo[filenum].allocsize;
}

void fileSetSize(s32 filenum, void *ptr, u32 size, bool reallocate)
{
	g_FileInfo[filenum].loadedsize = size;
	g_FileInfo[filenum].allocsize = size;

	if (reallocate) {
		mempRealloc(ptr, g_FileInfo[filenum].loadedsize, MEMPOOL_STAGE);
	}
}

void filesStop(u8 arg0)
{
	s32 i;

	// Minus 1 because the last entry in the file table is just a marker
	for (i = 1; i < ARRAYCOUNT(g_FileTable) - 1; i++) {
		if (arg0 == 4) {
			g_FileInfo[i].loadedsize = 0;
		}
	}
}

void func0f167330(void)
{
	filesStop(5);
}

#include "StdAfx.h"
#include "GameRegistry.h"

#include "Game_AODK_A.h"
#include "Game_AOF1_A.h"
#include "Game_AOF3_A.h"
#include "Game_AquaPlus_P.h"
#include "Game_AquaPlus_S.h"
#include "Game_AsuraBuster_A_DIR.h"
#include "Game_AvgrsGS_A_DIR.h"
#include "Game_BASARA_P.h"
#include "Game_BattleFlipShot_A.h"
#include "Game_BlazBlueCF_S.h"
#include "Game_Bleach_DS.h"
#include "Game_BMKNS_SNES.h"
#include "Game_BnK_P.h"
#include "Game_Breakers_A.h"
#include "Game_BSSMSJR_SNES.h"
#include "Game_BtlKRoad_A_DIR.h"
#include "Game_CFE_P.h"
#include "Game_CFTE_SNES.h"
#include "Game_COTA_A.h"
#include "Game_CVS1_A.h"
#include "Game_CVS2_A.h"
#include "Game_CVS2_D.h"
#include "Game_Cyberbots_A.h"
#include "Game_DaemonBride_NL.h"
#include "Game_DaemonBrideAG_NL.h"
#include "Game_DanKuGa_A.h"
#include "Game_Daraku_A.h"
#include "Game_DBFCI_A.h"
#include "Game_DBZEB_DS.h"
#include "Game_DBZHD_SNES.h"
#include "Game_DevMode_DIR.h"
#include "Game_DoubleDragon_A.h"
#include "Game_FatalFury1_A.h"
#include "Game_FatalFury2_A.h"
#include "Game_FatalFuryS_A.h"
#include "Game_FatalFuryS_SNES.h"
#include "Game_FatalFury3_A.h"
#include "Game_FightFever_A.h"
#include "Game_FightersHistory_A_DIR.h"
#include "Game_FightersHistory3_SNES.h"
#include "Game_FotNS_P.h"
#include "Game_GalaxyFight_A.h"
#include "Game_Garou_A.h"
#include "Game_Garou_S.h"
#include "Game_Gowcaizer_A.h"
#include "Game_GGDS_NDS.h"
#include "Game_GGML_P.h"
#include "Game_GGXXACP_Wii.h"
#include "Game_GGXXACR_S.h"
#include "Game_GGXXACR_P.h"
#include "Game_GGXXR_S.h"
#include "Game_GUNDAM_SNES.h"
#include "Game_HIppo_GBA.h"
#include "Game_HSF2_A.h"
#include "Game_JChan_A.h"
#include "Game_JOJOS_A.h"
#include "Game_JOJOS_A_DIR.h"
#include "Game_JOJOSRPG_SNES.h"
#include "Game_JusticeLeagueTF_SNES.h"
#include "Game_KabukiKlash_A.h"
#include "Game_KarnovsR_A.h"
#include "Game_KI_SNES.h"
#include "Game_Kizuna_A.h"
#include "Game_KOF00N_A.h"
#include "Game_KOF01_A.h"
#include "Game_KOF02_A.h"
#include "Game_KOF02PS2_A.h"
#include "Game_KOF02UM_S.h"
#include "Game_KOF02UM_S_DIR.h"
#include "Game_KOF03_A.h"
#include "Game_KOF94_A.h"
#include "Game_KOF95_A.h"
#include "Game_KOF96_A.h"
#include "Game_KOF97_A.h"
#include "Game_KOF98_A.h"
#include "Game_KOF98AE2016_A.h"
#include "Game_KOF99_A.h"
#include "Game_KOFEX2_GBA.h"
#include "Game_KOFXI_A.h"
#include "Game_KOTM_A.h"
#include "Game_LASTBLADE_A.h"
#include "Game_LASTBLADE2_A.h"
#include "Game_MAGICALDROPII_A.h"
#include "Game_MAGICALDROPIII_A.h"
#include "Game_MartialMasters_A.h"
#include "Game_Matrimelee_A.h"
#include "Game_MAAB_A.h"
#include "Game_MBAACC_S.h"
#include "Game_MBTL_A.h"
#include "Game_MCI_S.h"
#include "Game_MK1_A.h"
#include "Game_MK1_SNES.h"
#include "Game_MK2_A.h"
#include "Game_MK2_SNES.h"
#include "Game_MK3_SEGA.h"
#include "Game_MMPR_SNES.h"
#include "Game_MMX_SNES.h"
#include "Game_MMX2_SNES.h"
#include "Game_MMX3_SNES.h"
#include "Game_MSH_A.h"
#include "Game_MSHVSF_A.h"
#include "Game_MSHVSF_P.h"
#include "Game_MSHWOTG_SNES.h"
#include "Game_MVC_A.h"
#include "Game_MVC_P.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_A_DIR.h"
#include "Game_MVC2_D.h"
#include "Game_MVC2_P.h"
#include "Game_MWarr_A_DIR.h"
#include "Game_NBHID_S.h"
#include "Game_NeoBomberman_A.h"
#include "Game_DevMode_A.h"
#include "Game_NGBC_A.h"
#include "Game_NINJAMASTERS_A.h"
#include "Game_P4AU_FightClub.h"
#include "Game_P4AU_NESICA.h"
#include "Game_P4AU_STEAM.h"
#include "Game_PrimalRage_SNES.h"
#include "Game_Punisher_A.h"
#include "Game_GEMFIGHTER_A.h"
#include "Game_RanmaCRH_SNES.h"
#include "Game_RanmaHB_SNES.h"
#include "Game_RBFF1_A.h"
#include "Game_RBFF2_A.h"
#include "Game_RBFFS_A.h"
#include "Game_REDEARTH_A.h"
#include "Game_REDEARTH_A_DIR.h"
#include "Game_RODSM2_A.h"
#include "Game_ROTD_A.h"
#include "Game_SAMSHO1_A.h"
#include "Game_SAMSHO2_A.h"
#include "Game_SAMSHO3_A.h"
#include "Game_SAMSHO4_A.h"
#include "Game_SAMSHO5_A.h"
#include "Game_SAMSHO5SP_A.h"
#include "Game_SAVAGEREIGN_A.h"
#include "Game_SDODGEBALL_A.h"
#include "Game_SFA1_A.h"
#include "Game_SFA2_A.h"
#include "Game_SFA3_A.h"
#include "Game_SFZ3U_A.h"
#include "Game_SFIII1_A.h"
#include "Game_SFIII1_A_DIR.h"
#include "Game_SFIII2_A.h"
#include "Game_SFIII2_A_DIR.h"
#include "Game_SFIII3_A.h"
#include "Game_SFIII3_A_DIR.h"
#include "Game_SFIII3_D.h"
#include "Game_SFIII30th_S.h"
#include "Game_SF2CE_A.h"
#include "Game_SF2HF_A.h"
#include "Game_SF2WW_A.h"
#include "Game_SFTM_A.h"
#include "Game_SHAQFU_SNES.h"
#include "Game_SPF2T_A.h"
#include "Game_SSF2_A.h"
#include "Game_SSF2T_A.h"
#include "Game_SSF2T_GBA.h"
#include "Game_StreetFighter_A.h"
#include "Game_SurvivalArts_A.h"
#include "Game_SVG_SNES.h"
#include "Game_SVCPLUSA_A.h"
#include "Game_TattooAsns_A.h"
#include "Game_TekkenAdvance_GBA.h"
#include "Game_TMNTTF_SNES.h"
#include "Game_TopF2005_Sega.h"
#include "Game_TurfMasters_A.h"
#include "Game_UMK3_A.h"
#include "Game_UMK3_DS.h"
#include "Game_UMK3_SEGA.h"
#include "Game_UMK3_SNES.h"
#include "Game_UNICLR_A.h"
#include "Game_UNI2_S.h"
#include "Game_Venture_A.h"
#include "Game_Venture_A_DIR.h"
#include "Game_VampireHunter_A.h"
#include "Game_VampireNightWarriors_A.h"
#include "Game_VHUNT2_A.h"
#include "Game_VSAV_A.h"
#include "Game_VSAV2_A.h"
#include "Game_VirtuaFighter2_GEN.h"
#include "Game_WakuWaku7_A.h"
#include "Game_Windjammers_A.h"
#include "Game_WorldHeroesPerfect_A.h"
#include "Game_XMMA_SNES.h"
#include "Game_XMVSF_A.h"
#include "Game_XMVSF_P.h"

// When you add or change the data here, please also update the Read Me with that data.
static_assert(NUM_GAMES == 261, "Increment after deciding whether to add the new game to the Read Me.");

namespace KnownGameInfo
{
    CGameClass* Make_AODK_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AODK_A(nConfirmedROMSize); }
    CGameClass* Make_AOF1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AOF1_A(nConfirmedROMSize); }
    CGameClass* Make_AOF3_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AOF3_A(nConfirmedROMSize); }
    CGameClass* Make_AquaPlus_NL(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AquaPlus_NL(nConfirmedROMSize); }
    CGameClass* Make_AquaPlus_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AquaPlus_P(nConfirmedROMSize); }
    CGameClass* Make_AquaPlus_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AquaPlus_S(nConfirmedROMSize); }
    CGameClass* Make_AsuraBuster_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AsuraBuster_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_AvgrsGS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_AvgrsGS_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_BASARA_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BASARA_P(nConfirmedROMSize); }
    CGameClass* Make_BattleFlipShot_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BattleFlipShot_A(nConfirmedROMSize); }
    CGameClass* Make_BlazBlueCF_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BlazBlueCF_S(nConfirmedROMSize); }
    CGameClass* Make_BLEACH_DS(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BLEACH_DS(nConfirmedROMSize); }
    CGameClass* Make_BMKNS_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BMKNS_SNES(nConfirmedROMSize); }
    CGameClass* Make_BnK_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BnK_P(nConfirmedROMSize); }
    CGameClass* Make_BREAKERS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BREAKERS_A(nConfirmedROMSize); }
    CGameClass* Make_BREAKERS_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BREAKERS_S(nConfirmedROMSize); }
    CGameClass* Make_BSSMSJR_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BSSMSJR_SNES(nConfirmedROMSize); }
    CGameClass* Make_BtlKRoad_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_BtlKRoad_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_CFE_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CFE_P(nConfirmedROMSize); }
    CGameClass* Make_CFJ_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CFJ_S(nConfirmedROMSize); }
    CGameClass* Make_CFTE_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CFTE_SNES(nConfirmedROMSize); }
    CGameClass* Make_COTA_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_COTA_A(nConfirmedROMSize); }
    CGameClass* Make_COTA_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_COTA_S(nConfirmedROMSize); }
    CGameClass* Make_CVS1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CVS1_A(nConfirmedROMSize); }
    CGameClass* Make_CVS1_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CVS1_S(nConfirmedROMSize); }
    CGameClass* Make_CVS2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CVS2_A(nConfirmedROMSize); }
    CGameClass* Make_CVS2_D(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CVS2_D(nConfirmedROMSize); }
    CGameClass* Make_CVS2_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CVS2_P(nConfirmedROMSize); }
    CGameClass* Make_CVS2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_CVS2_S(nConfirmedROMSize); }
    CGameClass* Make_CYBERBOTS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Cyberbots_A(nConfirmedROMSize); }
    CGameClass* Make_CYBERBOTS_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Cyberbots_S(nConfirmedROMSize); }
    CGameClass* Make_DaemonBrideAG_NL(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DaemonBrideAG_NL(nConfirmedROMSize); }
    CGameClass* Make_DaemonBride_NL(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DaemonBride_NL(nConfirmedROMSize); }
    CGameClass* Make_DANKUGA_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DanKuGa_A_DIR(-1); }
    CGameClass* Make_Daraku_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Daraku_A(nConfirmedROMSize); }
    CGameClass* Make_DBFCI_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DBFCI_A(nConfirmedROMSize); }
    CGameClass* Make_DBZEB_DS(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DBZEB_DS(nConfirmedROMSize); }
    CGameClass* Make_DBZHD_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DBZHD_SNES(nConfirmedROMSize); }
    CGameClass* Make_DEVMODE_DIR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DevMode_DIR(nConfirmedROMSize); }
    CGameClass* Make_DOUBLEDRAGON_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DOUBLEDRAGON_A(nConfirmedROMSize); }
    CGameClass* Make_FatalFury1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FatalFury1_A(nConfirmedROMSize); }
    CGameClass* Make_FatalFury2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FatalFury2_A(nConfirmedROMSize); }
    CGameClass* Make_FatalFury3_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FatalFury3_A(nConfirmedROMSize); }
    CGameClass* Make_FatalFuryS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FatalFuryS_A(nConfirmedROMSize); }
    CGameClass* Make_FatalFuryS_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FatalFuryS_SNES(nConfirmedROMSize); }
    CGameClass* Make_FightFever_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FightFever_A(nConfirmedROMSize); }
    CGameClass* Make_FightersHistory_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FightersHistory_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_FightersHistory3_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FightersHistory3_SNES(nConfirmedROMSize); }
    CGameClass* Make_FotNS_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_FotNS_P(nConfirmedROMSize); }
    CGameClass* Make_GalaxyFight_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GalaxyFight_A(nConfirmedROMSize); }
    CGameClass* Make_GarouP_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GarouP_A(nConfirmedROMSize); }
    CGameClass* Make_Garou_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Garou_A(nConfirmedROMSize); }
    CGameClass* Make_Garou_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Garou_S(nConfirmedROMSize); }
    CGameClass* Make_GEMFIGHTER_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GEMFIGHTER_A(nConfirmedROMSize); }
    CGameClass* Make_GEMFIGHTER_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GEMFIGHTER_S(nConfirmedROMSize); }
    CGameClass* Make_GGDS_NDS(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGDS_NDS(nConfirmedROMSize); }
    CGameClass* Make_GGML_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGML_P(nConfirmedROMSize); }
    CGameClass* Make_GGXXACP_Wii(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGXXACP_Wii(nConfirmedROMSize); }
    CGameClass* Make_GGXXACR_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGXXACR_P(nConfirmedROMSize); }
    CGameClass* Make_GGXXACR_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGXXACR_S(nConfirmedROMSize, GGXXACR_S); }
    CGameClass* Make_GGXXACR_S_EXCHAR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGXXACR_S(nConfirmedROMSize, GGXXACR_S_EXCHAR); }
    CGameClass* Make_GGXXACR_S_EXTRAS(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGXXACR_S(nConfirmedROMSize, GGXXACR_S_EXTRAS); }
    CGameClass* Make_GGXXR_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GGXXR_S(nConfirmedROMSize); }
    CGameClass* Make_Gowcaizer_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Gowcaizer_A(nConfirmedROMSize); }
    CGameClass* Make_GUNDAM_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_GUNDAM_SNES(nConfirmedROMSize); }
    CGameClass* Make_HIppo_GBA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_HIppo_GBA(nConfirmedROMSize); }
    CGameClass* Make_HSF2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_HSF2_A(nConfirmedROMSize); }
    CGameClass* Make_HSF2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_HSF2_S(nConfirmedROMSize); }
    CGameClass* Make_JCHAN_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JCHAN_A(nConfirmedROMSize); }
    CGameClass* Make_JOJOSRPG_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JOJOSRPG_SNES(nConfirmedROMSize); }
    CGameClass* Make_JOJOS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JOJOS_A(nConfirmedROMSize, static_cast<JojosLoadingKey>(nExtraGameData)); }
    CGameClass* Make_JOJOS_US_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JOJOS_A(nConfirmedROMSize, static_cast<JojosLoadingKey>(nExtraGameData)); }
    CGameClass* Make_JOJOS_A_DIR_50(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JOJOS_A_DIR(nConfirmedROMSize, JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP); }
    CGameClass* Make_JOJOS_A_DIR_51(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JOJOS_A_DIR(nConfirmedROMSize, JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP); }
    CGameClass* Make_JOJOS_US_A_DIR_51(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JOJOS_A_DIR(nConfirmedROMSize, JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP); }
    CGameClass* Make_JusticeLeagueTF_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_JusticeLeagueTF_SNES(nConfirmedROMSize); }
    CGameClass* Make_KabukiKlash_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KabukiKlash_A(nConfirmedROMSize); }
    CGameClass* Make_KarnovsR_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KarnovsR_A(nConfirmedROMSize); }
    CGameClass* Make_KIZUNA_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Kizuna_A(nConfirmedROMSize); }
    CGameClass* Make_KIZUNA_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Kizuna_S(nConfirmedROMSize); }
    CGameClass* Make_KI_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KI_SNES(nConfirmedROMSize); }
    CGameClass* Make_KOF00N_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF00N_A(nConfirmedROMSize); }
    CGameClass* Make_KOF01_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF01_A(nConfirmedROMSize); }
    CGameClass* Make_KOF02PS2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF02PS2_A(nConfirmedROMSize); }
    CGameClass* Make_KOF02UM_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF02UM_S(nConfirmedROMSize); }
    CGameClass* Make_KOF02UM_S_DIR_8888(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF02UM_S_DIR(nConfirmedROMSize, KOF02UM_S_DIR_8888); }
    CGameClass* Make_KOF02UM_S_DIR_BGR555(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF02UM_S_DIR(nConfirmedROMSize, KOF02UM_S_DIR_BGR555); }
    CGameClass* Make_KOF02UM_S_DIR_RGB555(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF02UM_S_DIR(nConfirmedROMSize, KOF02UM_S_DIR_RGB555); }
    CGameClass* Make_KOF02_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF02_A(nConfirmedROMSize); }
    CGameClass* Make_KOF03_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF03_A(nConfirmedROMSize); }
    CGameClass* Make_KOF94_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF94_A(nConfirmedROMSize); }
    CGameClass* Make_KOF95_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF95_A(nConfirmedROMSize); }
    CGameClass* Make_KOF96_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF96_A(nConfirmedROMSize); }
    CGameClass* Make_KOF97AE_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF97AE_A(nConfirmedROMSize); }
    CGameClass* Make_KOF97GM_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF97GM_S(nConfirmedROMSize); }
    CGameClass* Make_KOF97_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF97_A(nConfirmedROMSize); }
    CGameClass* Make_KOF98AE2016_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF98AE2016_A(nConfirmedROMSize); }
    CGameClass* Make_KOF98_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF98_A(nConfirmedROMSize); }
    CGameClass* Make_KOF99_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOF99_A(nConfirmedROMSize); }
    CGameClass* Make_KOFEX2_GBA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOFEX2_GBA(nConfirmedROMSize); }
    CGameClass* Make_KOFXI_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOFXI_A(nConfirmedROMSize); }
    CGameClass* Make_KOTM_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_KOTM_A(nConfirmedROMSize); }
    CGameClass* Make_LASTBLADE_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_LASTBLADE_A(nConfirmedROMSize, LASTBLADE_A); }
    CGameClass* Make_LASTBLADE_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_LASTBLADE_A(nConfirmedROMSize, LASTBLADE_S); }
    CGameClass* Make_LASTBLADE2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_LASTBLADE2_A(nConfirmedROMSize, LASTBLADE2_A); }
    CGameClass* Make_LASTBLADE2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_LASTBLADE2_A(nConfirmedROMSize, LASTBLADE2_S); }
    CGameClass* Make_MAAB_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MAAB_A(nConfirmedROMSize); }
    CGameClass* Make_MAGICALDROPII_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MAGICALDROPII_A(nConfirmedROMSize); }
    CGameClass* Make_MAGICALDROPIII_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MAGICALDROPIII_A(nConfirmedROMSize); }
    CGameClass* Make_MartialMasters_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MartialMasters_A(nConfirmedROMSize); }
    CGameClass* Make_MATRIMELEE_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Matrimelee_A(nConfirmedROMSize); }
    CGameClass* Make_MBAACC_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MBAACC_S(nConfirmedROMSize); }
    CGameClass* Make_MBTL_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MBTL_A(nConfirmedROMSize); }
    CGameClass* Make_MCI_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MCI_S(nConfirmedROMSize); }
    CGameClass* Make_MK1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MK1_A(nConfirmedROMSize); }
    CGameClass* Make_MK1_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MK1_SNES(nConfirmedROMSize); }
    CGameClass* Make_MK2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MK2_A(nConfirmedROMSize); }
    CGameClass* Make_MK2_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MK2_SNES(nConfirmedROMSize); }
    CGameClass* Make_MK3_SEGA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MK3_SEGA(nConfirmedROMSize); }
    CGameClass* Make_MMPR_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MMPR_SNES(nConfirmedROMSize); }
    CGameClass* Make_MMX2_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MMX2_SNES(nConfirmedROMSize); }
    CGameClass* Make_MMX3_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MMX3_SNES(nConfirmedROMSize); }
    CGameClass* Make_MMX_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MMX_SNES(nConfirmedROMSize); }
    CGameClass* Make_MSHVSF_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MSHVSF_A(nConfirmedROMSize); }
    CGameClass* Make_MSHVSF_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MSHVSF_P(nConfirmedROMSize); }
    CGameClass* Make_MSHWOTG_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MSHWOTG_SNES(nConfirmedROMSize); }
    CGameClass* Make_MSH_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MSH_A(nConfirmedROMSize); }
    CGameClass* Make_MSH_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MSH_S(nConfirmedROMSize); }
    CGameClass* Make_MVC_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC_A(nConfirmedROMSize); }
    CGameClass* Make_MVC_D(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC_D(nConfirmedROMSize); }
    CGameClass* Make_MVC_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC_P(nConfirmedROMSize); }
    CGameClass* Make_MVC_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC_S(nConfirmedROMSize); }
    CGameClass* Make_MVC2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_A(nConfirmedROMSize, MVC2_A); }
    CGameClass* Make_MVC2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_A(nConfirmedROMSize, MVC2_S); }
    CGameClass* Make_MVC2_A_DIR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_MVC2_D(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_D(nConfirmedROMSize, MVC2_D); }
    CGameClass* Make_MVC2_D_16(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_D(nConfirmedROMSize, MVC2_D_16); }
    CGameClass* Make_MVC2_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_P(nConfirmedROMSize); }
    CGameClass* Make_MVC2_S_DIR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MVC2_D(nConfirmedROMSize, MVC2_S_DIR); }
    CGameClass* Make_MWARR_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_MWarr_A_DIR(-1); }
    CGameClass* Make_NBHID_NL(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_NBHID_NL(nConfirmedROMSize); }
    CGameClass* Make_NBHID_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_NBHID_P(nConfirmedROMSize); }
    CGameClass* Make_NBHID_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_NBHID_S(nConfirmedROMSize); }
    CGameClass* Make_NeoBomberman_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_NeoBomberman_A(nConfirmedROMSize); }
    CGameClass* Make_TurfMasters_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_TurfMasters_A(nConfirmedROMSize, pszFilePath); }
    CGameClass* Make_DEVMODE_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_DevMode_A(nConfirmedROMSize, pszFilePath); }
    CGameClass* Make_NGBC_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_NGBC_A(nConfirmedROMSize); }
    CGameClass* Make_NINJAMASTERS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_NINJAMASTERS_A(nConfirmedROMSize); }
    CGameClass* Make_P4AU_FightClub(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_P4AU_FightClub(nConfirmedROMSize); }
    CGameClass* Make_P4AU_NESICA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_P4AU_NESICA(nConfirmedROMSize); }
    CGameClass* Make_P4AU_STEAM(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_P4AU_STEAM(nConfirmedROMSize); }
    CGameClass* Make_PrimalRage_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_PrimalRage_SNES(nConfirmedROMSize); }
    CGameClass* Make_Punisher_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Punisher_A(nConfirmedROMSize); }
    CGameClass* Make_Punisher_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Punisher_S(nConfirmedROMSize); }
    CGameClass* Make_RANMACRH_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RANMACRH_SNES(nConfirmedROMSize); }
    CGameClass* Make_RANMAHB_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RANMAHB_SNES(nConfirmedROMSize); }
    CGameClass* Make_RBFF1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RBFF1_A(nConfirmedROMSize); }
    CGameClass* Make_RBFF2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RBFF2_A(nConfirmedROMSize); }
    CGameClass* Make_RBFF2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RBFF2_S(nConfirmedROMSize); }
    CGameClass* Make_RBFFS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RBFFS_A(nConfirmedROMSize); }
    CGameClass* Make_REDEARTH_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_REDEARTH_A(nConfirmedROMSize); }
    CGameClass* Make_REDEARTH_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_REDEARTH_S(nConfirmedROMSize); }
    CGameClass* Make_REDEARTH_A_DIR_30(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RedEarth_A_DIR(nConfirmedROMSize, RedEarthLoadingKey::RedEarthROM30); }
    CGameClass* Make_REDEARTH_A_DIR_31(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RedEarth_A_DIR(nConfirmedROMSize, RedEarthLoadingKey::RedEarthROM31); }
    CGameClass* Make_REDEARTH_A_DIR_50(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RedEarth_A_DIR(nConfirmedROMSize, RedEarthLoadingKey::RedEarthROM50); }
    CGameClass* Make_RODSM2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_RODSM2_A(nConfirmedROMSize); }
    CGameClass* Make_ROTD_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_ROTD_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO1_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO2_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO3_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO3_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO4_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO4_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO5_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO5_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO5X_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO5_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO5SP_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO5SP_A(nConfirmedROMSize); }
    CGameClass* Make_SAMSHO5SP_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAMSHO5SP_A(nConfirmedROMSize); }
    CGameClass* Make_SAVAGEREIGN_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SAVAGEREIGN_A(nConfirmedROMSize); }
    CGameClass* Make_SDODGEBALL_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SDODGEBALL_A(nConfirmedROMSize); }
    CGameClass* Make_SF1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_StreetFighter_A(nConfirmedROMSize); }
    CGameClass* Make_SF1_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_StreetFighter_S(nConfirmedROMSize); }
    CGameClass* Make_SF2WW_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SF2WW_A(nConfirmedROMSize); }
    CGameClass* Make_SF2WW_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SF2WW_S(nConfirmedROMSize); }
    CGameClass* Make_SF2CE_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SF2CE_A(nConfirmedROMSize); }
    CGameClass* Make_SF2CE_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SF2CE_S(nConfirmedROMSize); }
    CGameClass* Make_SF2HF_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SF2HF_A(nConfirmedROMSize); }
    CGameClass* Make_SF2HF_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SF2HF_S(nConfirmedROMSize); }
    CGameClass* Make_SFA1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA1_A(nConfirmedROMSize); }
    CGameClass* Make_SFA1_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA1_S(nConfirmedROMSize); }
    CGameClass* Make_SFA2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA2_A(nConfirmedROMSize); }
    CGameClass* Make_SFA2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA2_S(nConfirmedROMSize); }
    CGameClass* Make_SFA2_Hack_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA2_A(nConfirmedROMSize); }
    CGameClass* Make_SFA3_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA3_A(nConfirmedROMSize); }
    CGameClass* Make_SFA3_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA3_S(nConfirmedROMSize); }
    CGameClass* Make_SFA3MAX_PSP_DIR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFA3MAX_PSP_DIR(nConfirmedROMSize); }
    CGameClass* Make_SFIII1_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII1_A(nConfirmedROMSize); }
    CGameClass* Make_SFIII1_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII30th_S(nConfirmedROMSize, SFIII30th_LoadingKey::SFIII1_NG); }
    CGameClass* Make_SFIII1_A_DIR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII1_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_SFIII2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII2_A(nConfirmedROMSize); }
    CGameClass* Make_SFIII2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII30th_S(nConfirmedROMSize, SFIII30th_LoadingKey::SFIII2_SI); }
    CGameClass* Make_SFIII2_A_DIR(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII2_A_DIR(nConfirmedROMSize); }
    CGameClass* Make_SFIII3_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_A(nConfirmedROMSize); }
    CGameClass* Make_SFIII3_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII30th_S(nConfirmedROMSize, SFIII30th_LoadingKey::SFIII3_3S); }
    CGameClass* Make_SFIII3_A_DIR_10(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM10); }
    CGameClass* Make_SFIII3_A_DIR_4rd(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM51_4rd); }
    CGameClass* Make_SFIII3_A_DIR_4rd_10(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM10_4rd); }
    CGameClass* Make_SFIII3_A_DIR_51(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM51); }
    CGameClass* Make_SFIII3_A_DIR_EX(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM70_EX); }
    CGameClass* Make_SFIII3_D(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFIII3_D; }
    CGameClass* Make_SFTM_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFTM_A(nConfirmedROMSize); }
    CGameClass* Make_SFZ3U_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFZ3U_A(nConfirmedROMSize); }
    CGameClass* Make_SFZ3U_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFZ3U_S(nConfirmedROMSize); }
    CGameClass* Make_SFZ3M_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SFZ3M_S(nConfirmedROMSize); }
    CGameClass* Make_SHAQFU_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SHAQFU_SNES(nConfirmedROMSize); }
    CGameClass* Make_SPF2T_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SPF2T_A(nConfirmedROMSize); }
    CGameClass* Make_SPF2T_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SPF2T_S(nConfirmedROMSize); }
    CGameClass* Make_SSF2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SSF2_A(nConfirmedROMSize); }
    CGameClass* Make_SSF2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SSF2_S(nConfirmedROMSize); }
    CGameClass* Make_SSF2T_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SSF2T_A(nConfirmedROMSize); }
    CGameClass* Make_SSF2T_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SSF2T_S(nConfirmedROMSize); }
    CGameClass* Make_SSF2T_GBA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SSF2T_GBA(nConfirmedROMSize); }
    CGameClass* Make_SurvivalArts_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SurvivalArts_A(nConfirmedROMSize); }
    CGameClass* Make_SVCPLUSA_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SVCPLUSA_A(nConfirmedROMSize); }
    CGameClass* Make_SVG_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_SVG_SNES(nConfirmedROMSize); }
    CGameClass* Make_TattooAsns_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_TattooAsns_A(nConfirmedROMSize); }
    CGameClass* Make_TekkenAdvance_GBA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_TekkenAdvance_GBA(nConfirmedROMSize); }
    CGameClass* Make_TMNTTF_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_TMNTTF_SNES(nConfirmedROMSize); }
    CGameClass* Make_TOPF2005_SEGA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_TOPF2005_SEGA(nConfirmedROMSize); }
    CGameClass* Make_UMK3_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_UMK3_A(nConfirmedROMSize); }
    CGameClass* Make_UMK3_DS(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_UMK3_DS(nConfirmedROMSize); }
    CGameClass* Make_UMK3_SEGA(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_UMK3_SEGA(nConfirmedROMSize); }
    CGameClass* Make_UMK3_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_UMK3_SNES(nConfirmedROMSize); }
    CGameClass* Make_UNICLR_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_UNICLR_A(nConfirmedROMSize); }
	CGameClass* Make_UNI2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_UNI2_S(nConfirmedROMSize); }
    CGameClass* Make_VampireHunter_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VampireHunter_A(nConfirmedROMSize); }
    CGameClass* Make_VampireHunter_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VampireHunter_S(nConfirmedROMSize); }
    CGameClass* Make_VampireNightWarriors_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VampireNightWarriors_A(nConfirmedROMSize); }
    CGameClass* Make_VampireNightWarriors_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VampireNightWarriors_S(nConfirmedROMSize); }
    CGameClass* Make_VENTURE_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VENTURE_A(nConfirmedROMSize); }
    CGameClass* Make_VENTURE_A_DIR_31(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VENTURE_A_DIR(nConfirmedROMSize, VentureDirLoadingKey::ROM31); }
    CGameClass* Make_VENTURE_A_DIR_50(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VENTURE_A_DIR(nConfirmedROMSize, VentureDirLoadingKey::ROM50); }
    CGameClass* Make_VHUNT2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VHUNT2_A(nConfirmedROMSize); }
    CGameClass* Make_VHUNT2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VHUNT2_S(nConfirmedROMSize); }
    CGameClass* Make_VSAV_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VSAV_A(nConfirmedROMSize); }
    CGameClass* Make_VSAV_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VSAV_S(nConfirmedROMSize); }
    CGameClass* Make_VSAV2_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VSAV2_A(nConfirmedROMSize); }
    CGameClass* Make_VSAV2_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VSAV2_S(nConfirmedROMSize); }
    CGameClass* Make_VirtuaFighter2_GEN(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_VirtuaFighter2_GEN(nConfirmedROMSize); }
    CGameClass* Make_WakuWaku7_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_WakuWaku7_A(nConfirmedROMSize); }
    CGameClass* Make_WINDJAMMERS_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_Windjammers_A(nConfirmedROMSize); }
    CGameClass* Make_WorldHeroesPerfect_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_WorldHeroesPerfect_A(nConfirmedROMSize); }
    CGameClass* Make_XMMA_SNES(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_XMMA_SNES(nConfirmedROMSize); }
    CGameClass* Make_XMVSF_A(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_XMVSF_A(nConfirmedROMSize); }
    CGameClass* Make_XMVSF_P(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_XMVSF_P(nConfirmedROMSize); }
    CGameClass* Make_XMVSF_S(uint32_t nConfirmedROMSize, int nExtraGameData, LPCWSTR pszFilePath) { return new CGame_XMVSF_S(nConfirmedROMSize); }

    struct CoreGameData
    {
        int nGameId;
        // We want to keep these short for the titlebar: they're hard-limited by
        // MAX_DESCRIPTION_LENGTH (96), so 64 is probably the max we want.
        // Note that the games can override these values: these are just the defaults.
        std::wstring strGameDescription;

        // 1: Game ID,      2: Popup menu text,   3: Open File filter text,    4: Game Platform [,  5: Optional sub-category]
        // Use the default constructor if you don't want to show up in File Open
        sSupportedGameToFileMap rgFileOpenData;

        GameConstructor gameConstructor;

        GetRuleFunc GetRule;
        GetNextRuleFunc GetNextRule = nullptr;
        GetRuleCtrFunc GetRuleCtr = nullptr;
        ResetRuleCtrFunc ResetRuleCtr = nullptr;
    };

// Please note that this is sorted by the File Open Data display string, *not* by gameID.
    std::vector<CoreGameData> GameRegistry =
    {
        {
            AODK_A,
            L"Aggressors of Dark Kombat (Neo-Geo)",
            { AODK_A,           L"Aggressors of Dark Kombat", L"Aggressors of Dark Kombat|074-p1.*|", GamePlatform::NEOGEO },
            Make_AODK_A,
            CGame_AODK_A::GetRule,
        },
        {
            AOF1_A,
            L"Art of Fighting 1 (Neo-Geo)",
            { AOF1_A,           L"Art of Fighting 1", L"Art of Fighting 1|044-p1.*|", GamePlatform::NEOGEO, GameSeries::ArtOfFighting },
            Make_AOF1_A,
            CGame_AOF1_A::GetRule,
        },
        {
            AOF3_A,
            L"Art of Fighting 3 (Neo-Geo)",
            { AOF3_A,           L"Art of Fighting 3", L"Art of Fighting 3: Characters (p1), Stages (p2)|096-p1.*;096-p2.*|", GamePlatform::NEOGEO, GameSeries::ArtOfFighting },
            Make_AOF3_A,
            CGame_AOF3_A::GetRule,
        },
        {
            AquaPlus_NL,
            L"Aquapazza: Aquaplus Dream Match (NESICAxLive)",
            {},
            Make_AquaPlus_NL,
            CGame_AquaPlus_NL::GetRule,
            CGame_AquaPlus_NL::GetNextRule,
            CGame_AquaPlus_NL::GetRuleCtr,
            CGame_AquaPlus_NL::ResetRuleCtr,
        },
        {
            AquaPlus_P,
            L"Aquapazza: Aquaplus Dream Match (PS3)",
            {},
            Make_AquaPlus_P,
            CGame_AquaPlus_P::GetRule,
            CGame_AquaPlus_P::GetNextRule,
            CGame_AquaPlus_P::GetRuleCtr,
            CGame_AquaPlus_P::ResetRuleCtr,
        },
	    {
            AquaPlus_S,
            L"Aquapazza: Aquaplus Dream Match (Steam)",
            { AquaPlus_S,    L"Aquapazza: Aquaplus Dream Match", L"Aquapazza: Aquaplus Dream Match (Steam)|a0.arc|", GamePlatform::Steam },
            Make_AquaPlus_S,
            CGame_AquaPlus_S::GetRule,
        },
        {
            AsuraBuster_A,
            L"Asura Buster - Eternal Warriors (Fuuki)",
            { AsuraBuster_A,    L"Asura Buster: Eternal Warriors (Fuuki)", L"Asura Buster: Eternal Warriors (Fuuki)|pgm3.u1|", GamePlatform::OtherPlatform },
            Make_AsuraBuster_A,
            CGame_AsuraBuster_A_DIR::GetRule,
        },
        {
            AvgrsGS_A,
            L"Avengers in Galactic Storm (Data East)",
            { AvgrsGS_A,        L"Avengers in Galactic Storm (Data East)", L"Avengers in Galactic Storm (Data East)|sf_00-0.7k;agsbh_00-0.7k|", GamePlatform::OtherPlatform },
            Make_AvgrsGS_A,
            CGame_AvgrsGS_A_DIR::GetRule,
        },
        {
            BattleFlipShot_A,
            L"Battle Flip Shot (Neo-Geo)",
            { BattleFlipShot_A, L"Battle Flip Shot", L"Battle Flip Shot (Neo-Geo)|247-p1.*|", GamePlatform::NEOGEO },
            Make_BattleFlipShot_A,
            CGame_BattleFlipShot_A::GetRule,
        },
        {
            BMKNS_SNES,
            L"Battle Master: KnS (SNES)",
            { BMKNS_SNES,       L"Battle Master: KnS", L"Battle Master: KnS (SNES)|battle master - kyuukyoku no senshi-tachi (japan).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_BMKNS_SNES,
            CGame_BMKNS_SNES::GetRule,
        },
        {
            BlazBlueCF_S,
            L"BlazBlue: Central Fiction (Steam)",
            {},
            Make_BlazBlueCF_S,
            CGame_BlazBlueCF_S::GetRule,
            CGame_BlazBlueCF_S::GetNextRule,
            CGame_BlazBlueCF_S::GetRuleCtr,
            CGame_BlazBlueCF_S::ResetRuleCtr,
        },
        {
            BLEACH_DS,
            L"Bleach DS (Nintendo DS)",
            { BLEACH_DS,        L"Bleach Dark Souls", L"Bleach Dark Souls (DS)|3494*Europe*nds;2761*US*nds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
            Make_BLEACH_DS,
            CGame_BLEACH_DS::GetRule,
        },
        {
            BREAKERS_A,
            L"Breakers Revenge (Neo-Geo)",
            { BREAKERS_A,       L"Breakers Revenge", L"Breakers Revenge (Neo-Geo)|245-p1.*|", GamePlatform::NEOGEO },
            Make_BREAKERS_A,
            CGame_BREAKERS_A::GetRule,
        },
        {
            BREAKERS_S,
            L"Breakers Revenge (Breakers Collection for Steam)",
            { BREAKERS_S,       L"Breakers Revenge", L"Breakers Revenge (Steam)|245-m68k.swbin|", GamePlatform::Steam },
            Make_BREAKERS_S,
            CGame_BREAKERS_S::GetRule,
        },
        {
            BSSMSJR_SNES,
            L"Bishojo Senshi Sailor Moon S - JR (SNES)",
            { BSSMSJR_SNES,     L"Bishojo Senshi Sailor Moon S - JR", L"Bishojo Senshi Sailor Moon S - JR (SNES)|Bishoujo Senshi Sailor Moon S - Jougai Rantou! Shuyaku Soudatsusen (J*).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_BSSMSJR_SNES,
            CGame_BSSMSJR_SNES::GetRule,
        },
        {
            BtlKRoad_A,
            L"Battle K-Road (Psikyo)",
            { BtlKRoad_A,       L"Battle K-Road (Psikyo)", L"Battle K-Road (Psikyo)|4-u46.bin|", GamePlatform::OtherPlatform },
            Make_BtlKRoad_A,
            CGame_BtlKRoad_A_DIR::GetRule,
        },
        {
            CFE_P,
            L"Capcom Fighting Evolution (PS2)",
            { CFE_P,        L"Capcom Fighting Evolution", L"Capcom Fighting Evolution (PS2)|SLUS_209.50|", GamePlatform::PS2 },
            Make_CFE_P,
            CGame_CFE_P::GetRule,
        },
        {
            CFJ_S,
            L"Capcom Fighting Jam (Steam)",
            { CFJ_S,           L"CFE/CFJ (READ-ONLY!)", L"Capcom Fighting Evolution (Steam: Read-only!)|cfj.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection2 },
            Make_CFJ_S,
            CGame_CFJ_S::GetRule,
        },
        {
            CFTE_SNES,
            L"Clay Fighter: TE (SNES)",
            { CFTE_SNES,        L"Clay Fighter:TE", L"Clay Fighter:TE (SNES)|Clay Fighter - Tournament Edition (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_CFTE_SNES,
            CGame_CFTE_SNES::GetRule,
        },
        {
            COTA_A,
            L"X-Men: COTA (CPS2 Arcade)",
            { COTA_A,           L"COTA", L"COTA (CPS2)|xmn*.05*|", GamePlatform::CapcomCPS12 },
            Make_COTA_A,
            CGame_COTA_A::GetRule,
        },
        {
            COTA_S,
            L"X-Men: COTA (Steam)",
            { COTA_S,           L"COTA", L"COTA (Steam)|xmcota?.21D3D8A7;f000.bin|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_COTA_S,
            CGame_COTA_S::GetRule,
        },
        {
            CVS1_A,
            L"Capcom vs SNK Millenium Fight (NAOMI)",
            { CVS1_A,           L"CvS1", L"CvS1 (NAOMI)|Capcom_vs_SNK_Millenium_Fight_2000.bin;Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin;mpr-23504.ic1|", GamePlatform::SegaNAOMI },
            Make_CVS1_A,
            CGame_CVS1_A::GetRule,
        },
        {
            CVS1_S,
            L"Capcom vs SNK Millenium Fight (Steam)",
            { CVS1_S,           L"CvS1", L"CvS1 (Steam)|cvs1.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection2 },
            Make_CVS1_S,
            CGame_CVS1_S::GetRule,
        },
        {
            CVS2_A,
            L"CvS2 (NAOMI Arcade)",
            { CVS2_A,           L"CvS2", L"CvS2 (NAOMI)|SNKGD_SL.bin|", GamePlatform::SegaNAOMI },
            Make_CVS2_A,
            CGame_CVS2_A::GetRule,
        },
        {
            CVS2_D,
            L"Capcom vs SNK 2 (Dreamcast)",
            {},
            Make_CVS2_D,
            CGame_CVS2_D::GetRule,
            CGame_CVS2_D::GetNextRule,
            CGame_CVS2_D::GetRuleCtr,
            CGame_CVS2_D::ResetRuleCtr,
        },
        {
            CVS2_P,
            L"Capcom vs SNK 2 (PS2)",
            {},
            Make_CVS2_P,
            CGame_CVS2_P::GetRule,
            CGame_CVS2_P::GetNextRule,
            CGame_CVS2_P::GetRuleCtr,
            CGame_CVS2_P::ResetRuleCtr,
        },
        {
            CVS2_S,
            L"CvS2 (Steam)",
            { CVS2_S,           L"CvS2", L"CvS2 (Steam)|cvs2.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection2 },
            Make_CVS2_S,
            CGame_CVS2_S::GetRule,
        },
        {
            CYBERBOTS_A,
            L"Cyberbots: Fullmetal Madness (CPS2 Arcade)",
            { CYBERBOTS_A,      L"Cyberbots", L"Cyberbots (CPS2)|cyb?.04|", GamePlatform::CapcomCPS12 },
            Make_CYBERBOTS_A,
            CGame_Cyberbots_A::GetRule,
        },
        {
            CYBERBOTS_S,
            L"Cyberbots: Fullmetal Madness (Steam)",
            { CYBERBOTS_S,      L"Cyberbots", L"Cyberbots (Steam)|cybots?.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_CYBERBOTS_S,
            CGame_Cyberbots_S::GetRule,
        },
        {
            DaemonBride_NL,
            L"Daemon Bride (NESICAxLive)",
            {},
            Make_DaemonBride_NL,
            CGame_DaemonBride_NL::GetRule,
            CGame_DaemonBride_NL::GetNextRule,
            CGame_DaemonBride_NL::GetRuleCtr,
            CGame_DaemonBride_NL::ResetRuleCtr,
        },
        {
            DaemonBrideAG_NL,
            L"Daemon Bride: Additional Gain (NESICAxLive)",
            {},
            Make_DaemonBrideAG_NL,
            CGame_DaemonBrideAG_NL::GetRule,
            CGame_DaemonBrideAG_NL::GetNextRule,
            CGame_DaemonBrideAG_NL::GetRuleCtr,
            CGame_DaemonBrideAG_NL::ResetRuleCtr,
        },
        {
            DANKUGA_A,
            L"Dan-Ku-Ga (Taito F3 System Arcade)",
            {},
            Make_DANKUGA_A,
            CGame_DanKuGa_A_DIR::GetRule,
            CGame_DanKuGa_A_DIR::GetNextRule,
            CGame_DanKuGa_A_DIR::GetRuleCtr,
            CGame_DanKuGa_A_DIR::ResetRuleCtr,
        },
        {
            Daraku_A,
            L"Daraku Tenshi (Psikyo)",
            { Daraku_A,         L"Daraku Tenshi (Psikyo)", L"Daraku Tenshi (Psikyo)|prog.u16|", GamePlatform::OtherPlatform },
            Make_Daraku_A,
            CGame_Daraku_A::GetRule,
        },
        {
            DBFCI_A,
            L"Dengeki Bunko: Fighting Climax IGNITION",
            {},
            Make_DBFCI_A,
            CGame_DBFCI_A::GetRule,
            CGame_DBFCI_A::GetNextRule,
            CGame_DBFCI_A::GetRuleCtr,
            CGame_DBFCI_A::ResetRuleCtr,
        },
        {
            DBZEB_DS,
            L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS)",
            { DBZEB_DS,         L"Dragon Ball Z: Extreme Butoden (3DS)", L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS)|3DS1366*(USA)-decrypted.3ds;Dragon*Butoden*USA*decrypted*.3ds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
            Make_DBZEB_DS,
            CGame_DBZEB_DS::GetRule,
        },
        {
            DBZHD_SNES,
            L"DBZ: Hyper Dimension (SNES)",
            { DBZHD_SNES,       L"Dragon Ball Z: Hyper Dimension", L"Dragon Ball Z: Hyper Dimension (SNES)|dragon ball z - hyper dimension (*).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_DBZHD_SNES,
            CGame_DBZHD_SNES::GetRule,
        },
        {
            DEVMODE_DIR,
            L"Unknown Game (Set of files)",
            {},
            Make_DEVMODE_DIR,
            CGame_DevMode_DIR::GetRule,
        },
        {
            DOUBLEDRAGON_A,
            L"Double Dragon (Neo-Geo)",
            { DOUBLEDRAGON_A,   L"Double Dragon", L"Double Dragon|082-p1.*;ddrag_p1.rom|", GamePlatform::NEOGEO },
            Make_DOUBLEDRAGON_A,
            CGame_DOUBLEDRAGON_A::GetRule,
        },
        {
            FatalFury1_A,
            L"Fatal Fury: King of Fighters (Neo-Geo)",
            { FatalFury1_A,     L"Fatal Fury: King of Fighters", L"Fatal Fury: KoF|033-p1.*;033-p1bh.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_FatalFury1_A,
            CGame_FatalFury1_A::GetRule,
        },
        {
            FatalFury2_A,
            L"Fatal Fury 2 (Neo-Geo)",
            { FatalFury2_A,     L"Fatal Fury 2", L"Fatal Fury 2|047-p1.*;047-epr.ep1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_FatalFury2_A,
            CGame_FatalFury2_A::GetRule,
        },
        {
            FatalFuryS_A,
            L"Fatal Fury Special (Neo-Geo)",
            { FatalFuryS_A,     L"Fatal Fury Special", L"Fatal Fury Special (Neo-Geo)|058-p1.*;058-p1bs.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_FatalFuryS_A,
            CGame_FatalFuryS_A::GetRule,
        },
        {
            FatalFuryS_SNES,
            L"Fatal Fury Special (SNES)",
            { FatalFuryS_SNES,  L"Fatal Fury Special", L"Fatal Fury Special (SNES)|Fatal Fury Special (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_FatalFuryS_SNES,
            CGame_FatalFuryS_SNES::GetRule,
        },
        {
            FatalFury3_A,
            L"Fatal Fury 3 (Neo-Geo)",
            { FatalFury3_A,     L"Fatal Fury 3", L"Fatal Fury 3|069-p1.*;069-p1bh.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_FatalFury3_A,
            CGame_FatalFury3_A::GetRule,
        },
        {
            FightFever_A,
            L"Fight Fever (Neo-Geo)",
            { FightFever_A,     L"Fight Fever", L"Fight Fever|060-p1.p1;060-p1.bin|", GamePlatform::NEOGEO },
            Make_FightFever_A,
            CGame_FightFever_A::GetRule,
        },
        {
            FightersHistory_A,
            L"Fighter's History",
            { FightersHistory_A,       L"Fighter's History (Data East DECO32)", L"Fighter's History|??00*.1f|", GamePlatform::OtherPlatform }, // DataEast
            Make_FightersHistory_A,
            CGame_FightersHistory_A_DIR::GetRule,
        },
        {
            FightersHistory3_SNES,
            L"Fighter's History - Mizoguchi Kikiippatsu!! (SNES)",
            { FightersHistory3_SNES,       L"Fighter's History - Mizoguchi Kikiippatsu!! (Japan)", L"Fighter's History - Mizoguchi Kikiippatsu!! (SNES JPN)|Fighter's History - Mizoguchi Kikiippatsu!! (Japan).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_FightersHistory3_SNES,
            CGame_FightersHistory3_SNES::GetRule,
        },
        {
            GalaxyFight_A,
            L"Galaxy Fight: Universal Warriors (Neo-Geo)",
            { GalaxyFight_A,    L"Galaxy Fight", L"Galaxy Fight|078-p1.*|", GamePlatform::NEOGEO },
            Make_GalaxyFight_A,
            CGame_GalaxyFight_A::GetRule,
        },
        {
            Garou_A,
            L"Garou: MotW (Neo-Geo)",
            { Garou_A,          L"Garou: MotW", L"Garou: MotW (Neo-Geo)|kf.neo-sma;253-sma.bin;253-sma.kf|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_Garou_A,
            CGame_Garou_A::GetRule,
        },
        {
            GarouP_A,
            L"Garou: MotW (Neo-Geo Prototype)",
            { GarouP_A,         L"Garou: MotW (Prototype)", L"Garou: MotW (Prototype)|proto_253-p1.p1;253-p1p.bin;253-sma.bin|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_GarouP_A,
            CGame_GarouP_A::GetRule,
        },
        {
            Garou_S,
            L"Garou: MotW (Steam)",
            { Garou_S,          L"Garou: MotW", L"Garou: MotW (Steam)|p1.bin|", GamePlatform::Steam },
            Make_Garou_S,
            CGame_Garou_S::GetRule,
        },
        {
            GGDS_NDS,
            L"Guilty Gear: Dust Strikers (Nintendo DS)",
            { GGDS_NDS,         L"Guilty Gear: Dust Strikers", L"Guilty Gear: Dust Strikers (Nintendo DS)|0590*(Japan).nds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
            Make_GGDS_NDS,
            CGame_GGDS_NDS::GetRule,
        },
        {
            GGML_P,
            L"Guilty Gear: The Missing Link (PlayStation)",
            {},
            Make_GGML_P,
            CGame_GGML_P::GetRule,
            CGame_GGML_P::GetNextRule,
            CGame_GGML_P::GetRuleCtr,
            CGame_GGML_P::ResetRuleCtr,
        },
        {
            GGXXACP_Wii,
            L"GGXX:AC+ (Wii, ID:R3NEXS)",
            {},
            Make_GGXXACP_Wii,
            CGame_GGXXACP_Wii::GetRule,
            CGame_GGXXACP_Wii::GetNextRule,
            CGame_GGXXACP_Wii::GetRuleCtr,
            CGame_GGXXACP_Wii::ResetRuleCtr,
        },
        {
            GGXXACR_P,
            L"GGXX:AC+R (PlayStation 3)",
            {},
            Make_GGXXACR_P,
            CGame_GGXXACR_P::GetRule,
            CGame_GGXXACR_P::GetNextRule,
            CGame_GGXXACR_P::GetRuleCtr,
            CGame_GGXXACR_P::ResetRuleCtr,
        },
        {
            GGXXACR_S,
            L"GGXX:AC+R (Steam, Characters)",
            {},
            Make_GGXXACR_S,
            CGame_GGXXACR_S::GetRule_Characters,
            CGame_GGXXACR_S::GetNextRule_Characters,
            CGame_GGXXACR_S::GetRuleCtr,
            CGame_GGXXACR_S::ResetRuleCtr,
        },
        {
            GGXXACR_S_EXCHAR,
            L"GGXX:AC+R (Steam, EX Characters)",
            {},
            Make_GGXXACR_S_EXCHAR,
            CGame_GGXXACR_S::GetRule_EXChar,
            CGame_GGXXACR_S::GetNextRule_EXChar,
            CGame_GGXXACR_S::GetRuleCtr,
            CGame_GGXXACR_S::ResetRuleCtr,
        },
        {
            GGXXACR_S_EXTRAS,
            L"GGXX:AC+R (Steam, Effects/HUD/Menus)",
            {},
            Make_GGXXACR_S_EXTRAS,
            CGame_GGXXACR_S::GetRule_Extras,
            CGame_GGXXACR_S::GetNextRule_Extras,
            CGame_GGXXACR_S::GetRuleCtr,
            CGame_GGXXACR_S::ResetRuleCtr,
        },
        {
            GGXXR_S,
            L"Guilty Gear #Reload (Steam: JPN/Netplay Patch)",
            {},
            Make_GGXXR_S,
            CGame_GGXXR_S::GetRule,
            CGame_GGXXR_S::GetNextRule,
            CGame_GGXXR_S::GetRuleCtr,
            CGame_GGXXR_S::ResetRuleCtr,
        },
        {
            GUNDAM_SNES,
            L"Gundam Wing: Endless Duel (SNES)",
            { GUNDAM_SNES,      L"Gundam Wing: Endless Duel", L"Gundam Wing: Endless Duel (SNES)|Shin Kidou Senki Gundam W - Endless Duel (Japan).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_GUNDAM_SNES,
            CGame_GUNDAM_SNES::GetRule,
        },
        {
            HIppo_GBA,
            L"Hajime no Ippo - The Fighting! (Japan GBA)",
            { HIppo_GBA,        L"Hajime no Ippo - The Fighting! (Japan)", L"Hajime no Ippo - The Fighting! (GBA)|Hajime no Ippo - The Fighting! (Japan).gba|", GamePlatform::Nintendo, GameSeries::NintendoGBA },
            Make_HIppo_GBA,
            CGame_HIppo_GBA::GetRule,
        },
        {
            FotNS_P,
            L"Hokuto no Ken (PS2)",
            { FotNS_P,          L"Hokuto no Ken", L"Hokuto no Ken (PS2)|HK_B.bin|", GamePlatform::PS2 },
            Make_FotNS_P,
            CGame_FotNS_P::GetRule,
        },
        {
            HSF2_A,
            L"Hyper Street Fighter 2",
            { HSF2_A,           L"HSF2", L"HSF2: Portraits (*.03), Characters (*.04), Stages (*.10) (CPS2)|hs2?.03?;hs2?.04?;hs2*.10|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_HSF2_A,
            CGame_HSF2_A::GetRule,
        },
        {
            HSF2_S,
            L"Hyper Street Fighter 2",
            { HSF2_S,           L"Hyper Street Fighter 2", L"HSF2 (Steam)|hsf2.21D3D8A7;hsf2j.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_HSF2_S,
            CGame_HSF2_S::GetRule,
        },
        {
            JCHAN_A,
            L"Jackie Chan in Fists of Fire (Kaneko, Arcade)",
            { JCHAN_A,          L"Jackie Chan in Fists of Fire (Kaneko)", L"Jackie Chan in Fists of Fire (Kaneko)|j2p1x4.u70|", GamePlatform::OtherPlatform },
            Make_JCHAN_A,
            CGame_JCHAN_A::GetRule,
        },
        {
            JOJOS_A,
            L"Jojo's (CPS3, Japan, Regulation: Off)",
            { JOJOS_A,          L"Jojo's: HFTF (Normal, Regulation: Off)", L"Jojos HFTF: HUDs and menus (50), Characters (51)|50;51|", GamePlatform::CapcomCPS3 },
            Make_JOJOS_A,
            CGame_JOJOS_A::GetRule,
        },
        {
            JOJOS_US_A,
            L"Jojo's (CPS3, USA, Regulation: On)",
            { JOJOS_US_A,       L"Jojo's: HFTF (Regulation: On)", L"Jojos HFTF Regulation On: HUDs and menus (50), Characters (51)|50;51|", GamePlatform::CapcomCPS3 },
            Make_JOJOS_US_A,
            CGame_JOJOS_A::GetRule,
        },
        {
            JOJOSRPG_SNES,
            L"Jojo's Bizarre Adventure (SNES)",
            { JOJOSRPG_SNES,    L"Jojo's: RPG", L"Jojo's: RPG (SNES)|JoJo no Kimyou na Bouken (Japan).sfc;JoJo no Kimyou na Bouken (Japan) (Translated En).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_JOJOSRPG_SNES,
            CGame_JOJOSRPG_SNES::GetRule,
        },
        {
            JOJOS_A_DIR_50,
            L"Jojo's 50 (CPS3 Japanese Arcade Rerip)",
            {},
            Make_JOJOS_A_DIR_50,
            CGame_JOJOS_A_DIR::GetRule50,
            CGame_JOJOS_A_DIR::GetNextRule50,
            CGame_JOJOS_A_DIR::GetRuleCtr,
            CGame_JOJOS_A_DIR::ResetRuleCtr,
        },
        {
            JOJOS_A_DIR_51,
            L"Jojo's 51 (CPS3 Japanese Arcade Rerip)",
            {},
            Make_JOJOS_A_DIR_51,
            CGame_JOJOS_A_DIR::GetRule51,
            CGame_JOJOS_A_DIR::GetNextRule51,
            CGame_JOJOS_A_DIR::GetRuleCtr,
            CGame_JOJOS_A_DIR::ResetRuleCtr,
        },
        {
            JOJOS_US_A_DIR_51,
            L"Jojo's 51 (CPS3 US Arcade Rerip)",
            {},
            Make_JOJOS_US_A_DIR_51,
            CGame_JOJOS_A_DIR::GetRule51RegOn,
            CGame_JOJOS_A_DIR::GetNextRule51RegOn,
            CGame_JOJOS_A_DIR::GetRuleCtr,
            CGame_JOJOS_A_DIR::ResetRuleCtr,
        },
        {
            VENTURE_A,
            L"Jojo's Venture (Japan)",
            { VENTURE_A,        L"Jojo's Venture", L"Jojo's Venture: Characters (50), HUD (31)|31;50|", GamePlatform::CapcomCPS3 },
            Make_VENTURE_A,
            CGame_VENTURE_A::GetRule,
        },
        {
            VENTURE_A_DIR_31,
            L"Jojo's Venture (Japan Arcade, 31: HUD Portraits)",
            {},
            Make_VENTURE_A_DIR_31,
            CGame_VENTURE_A_DIR::GetRule_31,
            CGame_VENTURE_A_DIR::GetNextRule_31,
            CGame_VENTURE_A_DIR::GetRuleCtr,
            CGame_VENTURE_A_DIR::ResetRuleCtr,
        },
        {
            VENTURE_A_DIR_50,
            L"Jojo's Venture (Japan Arcade, 50: Characters)",
            {},
            Make_VENTURE_A_DIR_50,
            CGame_VENTURE_A_DIR::GetRule_50,
            CGame_VENTURE_A_DIR::GetNextRule_50,
            CGame_VENTURE_A_DIR::GetRuleCtr,
            CGame_VENTURE_A_DIR::ResetRuleCtr,
        },
        {
            JusticeLeagueTF_SNES,
            L"Justice League Task Force (USA SNES)",
            { JusticeLeagueTF_SNES, L"Justice League Task Force", L"Justice League Task Force (SNES)|Justice League Task Force (USA).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_JusticeLeagueTF_SNES,
            CGame_JusticeLeagueTF_SNES::GetRule,
        },
        {
            KabukiKlash_A,
            L"Kabuki Klash: Far East of Eden (Neo-Geo)",
            { KabukiKlash_A,    L"Kabuki Klash", L"Kabuki Klash|092-p1.*|", GamePlatform::NEOGEO },
            Make_KabukiKlash_A,
            CGame_KabukiKlash_A::GetRule,
        },
        {
            KarnovsR_A,
            L"Karnov's Revenge / Fighter's History Dynamite",
            { KarnovsR_A,       L"Karnov's Revenge", L"Karnov's Revenge|066-p1.*;066-p1kre.p1|", GamePlatform::NEOGEO }, // DataEast
            Make_KarnovsR_A,
            CGame_KarnovsR_A::GetRule,
        },
        {
            KI_SNES,
            L"Killer Instinct (Rev 1 SNES)",
            { KI_SNES,          L"Killer Instinct", L"Killer Instinct (SNES)|Killer Instinct (USA)*.s?c;sns-akle-0.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_KI_SNES,
            CGame_KI_SNES::GetRule,
        },
        {
            KOTM_A,
            L"King of the Monsters (Neo-Geo)",
            { KOTM_A,           L"King of the Monsters", L"King of the Monsters (Neo-Geo)|016-p1.*;016-hp1.*|", GamePlatform::NEOGEO },
            Make_KOTM_A,
            CGame_KOTM_A::GetRule,
        },
        {
            KIZUNA_A,
            L"Kizuna Encounter (Neo-Geo)",
            { KIZUNA_A,         L"Kizuna Encounter", L"Kizuna Encounter (Neo-Geo)|216-p1.*;ke_p1.rom|", GamePlatform::NEOGEO },
            Make_KIZUNA_A,
            CGame_Kizuna_A::GetRule,
        },
        {
            KIZUNA_S,
            L"Kizuna Encounter Super Tag Battle (Steam)",
            { KIZUNA_S,         L"Kizuna Encounter Super Tag Battle", L"Kizuna Encounter Super Tag Battle (Steam)|p1.bin|", GamePlatform::Steam },
            Make_KIZUNA_S,
            CGame_Kizuna_S::GetRule,
        },
        {
            KOF94_A,
            L"King of Fighters '94 (Neo-Geo)",
            { KOF94_A,          L"KOF94", L"KOF94|055-p1.*|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF94_A,
            CGame_KOF94_A::GetRule,
        },
        {
            KOF95_A,
            L"King of Fighters '95 (Neo-Geo)",
            { KOF95_A,          L"KOF95", L"KOF95|084-p*1.*;084-p2sp.p2;084-epr.ep4|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF95_A,
            CGame_KOF95_A::GetRule,
        },
        {
            KOF96_A,
            L"King of Fighters '96 (Neo-Geo)",
            { KOF96_A,          L"KOF96", L"KOF96|214-p2.sp2;214-p2.bin;214ae-p2.p2|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF96_A,
            CGame_KOF96_A::GetRule,
        },
        {
            KOF97_A,
            L"King of Fighters '97 (Neo-Geo)",
            { KOF97_A,          L"KOF97", L"KOF97|232-p2.*;kof97_p2.rom;kf97-p2p.bin;97cbt-p2.bin;kf97-p2p.bin;232-p2ps.sp2;232-rc.sp2;232t.p2;232t2020-p2.sp2;232xt-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF97_A,
            CGame_KOF97_A::GetRule,
        },
        {
            KOF97AE_A,
            L"King of Fighters '97 Anniversary Edition (Neo-Geo)",
            { KOF97AE_A,        L"KOF97AE", L"KOF97AE|232ae.p2;232ae-p2.sp2;232aef-p2.sp2|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF97AE_A,
            CGame_KOF97AE_A::GetRule,
        },
        {
            KOF97GM_S,
            L"King of Fighters '97 Global Match (Steam)",
            { KOF97GM_S,        L"KOF97GM", L"KOF97GM|p1.bin|", GamePlatform::Steam },
            Make_KOF97GM_S,
            CGame_KOF97GM_S::GetRule,
        },
        {
            KOF98_A,
            L"King of Fighters '98 (Neo-Geo)",
            { KOF98_A,          L"KOF98", L"KOF98|242-p2.*;kof98_p2.rom;242cb-p2.sp2;242pfe.p2;242mix.p2;98eckvs-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF98_A,
            CGame_KOF98_A::GetRule,
        },
        {
            KOF98AE2016_A,
            L"King of Fighters '98AE (2016 Romhack)",
            { KOF98AE2016_A,    L"KOF98AE2016 (Romhack)", L"KOF98AE2016 (Romhack)|242ae-p2.sp2;242ae-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF98AE2016_A,
            CGame_KOF98AE2016_A::GetRule,
        },
        {
            KOF99_A,
            L"King of Fighters '99 (Neo-Geo)",
            { KOF99_A,        L"KOF99", L"KOF99|152-p2.*;kf99eur.p2;251-p2p.*;proto_251-p2.*|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF99_A,
            CGame_KOF99_A::GetRule,
        },
        {
            KOF99AE_A,
            L"King of Fighters '99AE (Neo-Geo)",
            { KOF99AE_A,        L"KOF99AE", L"KOF99AE: A,B (p2), C,D,AC,BD (p3)|kof99ae_p2.bin;kof99ae_p3.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF99_A,
            CGame_KOF99_A::GetRule,
        },
        {
            KOF00N_A,
            L"King of Fighters 2000n (Neo-Geo)",
            { KOF00N_A,         L"KOF00N", L"KOF00N|257-pg2.sp2;257-p2n.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF00N_A,
            CGame_KOF00N_A::GetRule,
        },
        {
            KOF01_A,
            L"King of Fighters 2001 (Neo-Geo)",
            { KOF01_A,          L"KOF01", L"KOF01|262-p2-08-e0.sp2;5003-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF01_A,
            CGame_KOF01_A::GetRule,
        },
        {
            KOF02_A,
            L"King of Fighters 2002 (Neo-Geo)",
            // normal ROM name is 265-p2.sp2, but the fightcade ROM name is 265.p2.bin
            { KOF02_A,          L"KOF02", L"KOF02|265*p2*;kf2k2ru35-p2.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF02_A,
            CGame_KOF02_A::GetRule,
        },
        {
            KOF02PS2_A,
            L"King of Fighters 2002PS2 (Neo-Geo hack)",
            { KOF02PS2_A,       L"KOF02 (2002PS2)", L"KOF02 (2002PS2)|265ps2*p2*|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF02PS2_A,
            CGame_KOF02PS2_A::GetRule,
        },
        {
            KOF02UM_S,
            L"King of Fighters 2002UM (Steam)",
            { KOF02UM_S,        L"KOF02UM", L"KOF02UM|pal_a*.bin;bar.bin;max2bg.bin;mess*.dat-n;mess*.dat;clear.bin;osel*.bin-n;psel*.bin-n;rank*.bin;cont*.bin*;vic?_00.bin-n|", GamePlatform::Steam },
            Make_KOF02UM_S,
            CGame_KOF02UM_S::GetRule,
        },
        {
            KOF02UM_S_DIR_8888,
            L"King of Fighters 2002UM (Steam, ARGB8888 parts)",
            {},
            Make_KOF02UM_S_DIR_8888,
            CGame_KOF02UM_S_DIR::GetRule_8888,
            CGame_KOF02UM_S_DIR::GetNextRule_8888,
            CGame_KOF02UM_S_DIR::GetRuleCtr,
            CGame_KOF02UM_S_DIR::ResetRuleCtr,
        },
        {
            KOF02UM_S_DIR_BGR555,
            L"King of Fighters 2002UM (Steam, BGR555 parts)",
            {},
            Make_KOF02UM_S_DIR_BGR555,
            CGame_KOF02UM_S_DIR::GetRule_BGR555,
            CGame_KOF02UM_S_DIR::GetNextRule_BGR555,
            CGame_KOF02UM_S_DIR::GetRuleCtr,
            CGame_KOF02UM_S_DIR::ResetRuleCtr,
        },
        {
            KOF02UM_S_DIR_RGB555,
            L"King of Fighters 2002UM (Steam, RGB555 parts)",
            {},
            Make_KOF02UM_S_DIR_RGB555,
            CGame_KOF02UM_S_DIR::GetRule_RGB555,
            CGame_KOF02UM_S_DIR::GetNextRule_RGB555,
            CGame_KOF02UM_S_DIR::GetRuleCtr,
            CGame_KOF02UM_S_DIR::ResetRuleCtr,
        },
        {
            KOF03_A,
            L"King of Fighters 2003: 2004 EX Ultra Plus",
            { KOF03_A,          L"KOF03 (bootleg 1 or 2004 EX Ultra Plus)", L"KOF03 (bootleg 1 or 2004 EX Ultra Plus)|2k3-p1.bin;2k3-p1up.bin|", GamePlatform::NEOGEO, GameSeries::KOF },
            Make_KOF03_A,
            CGame_KOF03_A::GetRule,
        },
        {
            KOFEX2_GBA,
            L"King of Fighters EX2: Howling Blood (GBA)",
            { KOFEX2_GBA,          L"KOFEX2", L"KOFEX2|*King of Fighters EX 2*(USA).gba|", GamePlatform::Nintendo, GameSeries::NintendoGBA },
            Make_KOFEX2_GBA,
            CGame_KOFEX2_GBA::GetRule,
        }, 
        {
            KOFXI_A,
            L"King of Fighters XI (Atomiswave)",
            { KOFXI_A,          L"KOFXI", L"KOFXI|gdrom_KOFXI_v5_AllFighters.bin|", GamePlatform::SammyAtomiswave },
            Make_KOFXI_A,
            CGame_KOFXI_A::GetRule,
        },
        {
            LASTBLADE_A,
            L"The Last Blade (Neo-Geo)",
            { LASTBLADE_A,      L"Last Blade", L"Last Blade (Neo-Geo)|234-p1.*|", GamePlatform::NEOGEO },
            Make_LASTBLADE_A,
            CGame_LASTBLADE_A::GetRule_A,
        },
        {
            LASTBLADE_S,
            L"The Last Blade 1 (Steam)",
            { LASTBLADE_S,      L"Last Blade", L"Last Blade (Steam)|lastblad_game_m68k|", GamePlatform::Steam },
            Make_LASTBLADE_S,
            CGame_LASTBLADE_A::GetRule_S,
        },
        {
            LASTBLADE2_A,
            L"The Last Blade 2 (Neo-Geo)",
            { LASTBLADE2_A,     L"Last Blade 2", L"Last Blade 2 (Neo-Geo)|243-pg1.*;LB2_P1.ROM|", GamePlatform::NEOGEO },
            Make_LASTBLADE2_A,
            CGame_LASTBLADE2_A::GetRule_A,
        },
        {
            LASTBLADE2_S,
            L"The Last Blade 2 (Steam)",
            { LASTBLADE2_S,     L"Last Blade 2", L"Last Blade 2 (Steam)|p1.bin|", GamePlatform::Steam },
            Make_LASTBLADE2_S,
            CGame_LASTBLADE2_A::GetRule_S,
        },
        {
            MAAB_A,
            L"Million Arthur Arcana Blood (Steam)",
            {},
            Make_MAAB_A,
            CGame_MAAB_A::GetRule,
            CGame_MAAB_A::GetNextRule,
            CGame_MAAB_A::GetRuleCtr,
            CGame_MAAB_A::ResetRuleCtr,
        },
        {
            MAGICALDROPII_A,
            L"Magical Drop II (Neo-Geo)",
            { MAGICALDROPII_A,  L"Magical Drop II", L"Magical Drop II|221-p1*.*|", GamePlatform::NEOGEO },
            Make_MAGICALDROPII_A,
            CGame_MAGICALDROPII_A::GetRule,
        },
        {
            MAGICALDROPIII_A,
            L"Magical Drop III (Neo-Geo)",
            { MAGICALDROPIII_A, L"Magical Drop III", L"Magical Drop III|233-p1*.*|", GamePlatform::NEOGEO },
            Make_MAGICALDROPIII_A,
            CGame_MAGICALDROPIII_A::GetRule,
        },
        {
            MartialMasters_A,
            L"Martial Masters (PGM)",
            { MartialMasters_A, L"Martial Masters", L"Martial Masters (PGM)|v104_32m.u9|", GamePlatform::PGM },
            Make_MartialMasters_A,
            CGame_MartialMasters_A::GetRule,
        },
        {
            MATRIMELEE_A,
            L"Matrimelee (Neo-Geo)",
            { MATRIMELEE_A,     L"Matrimelee", L"Matrimelee|266-p2.*|", GamePlatform::NEOGEO },
            Make_MATRIMELEE_A,
            CGame_Matrimelee_A::GetRule,
        },
        {
            MBAACC_S,
            L"Melty Blood Actress Again Current Code",
            {},
            Make_MBAACC_S,
            CGame_MBAACC_S::GetRule,
            CGame_MBAACC_S::GetNextRule,
            CGame_MBAACC_S::GetRuleCtr,
            CGame_MBAACC_S::ResetRuleCtr,
        },
        {
            MBTL_A,
            L"Melty Blood: Type Lumina (Steam)",
            {},
            Make_MBTL_A,
            CGame_MBTL_A::GetRule,
            CGame_MBTL_A::GetNextRule,
            CGame_MBTL_A::GetRuleCtr,
            CGame_MBTL_A::ResetRuleCtr,
        },
        {
            MSH_A,
            L"MSH (CPS2 Arcade)",
            { MSH_A,            L"Marvel Super Heroes", L"MSH: Characters (*.05), Portraits (*.06b) (CPS2)|msh.05*;msh.06b|", GamePlatform::CapcomCPS12 },
            Make_MSH_A,
            CGame_MSH_A::GetRule,
        },
        {
            MSH_S,
            L"MSH (Steam)",
            { MSH_S,            L"Marvel Super Heroes", L"MSH (Steam)|msh?.21D3D8A7;f000.bin|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_MSH_S,
            CGame_MSH_S::GetRule,
        },
        {
            MVC_A,
            L"MvC (CPS2 Arcade)",
            { MVC_A,            L"Marvel vs Capcom (CPS2)", L"MvC (CPS2)|mvc*.06*|", GamePlatform::CapcomCPS12, GameSeries::MvCNormal },
            Make_MVC_A,
            CGame_MVC_A::GetRule,
        },
        {
            MVC_D,
            L"MvC (Dreamcast)",
            { MVC_D,            L"Marvel vs Capcom (Dreamcast)", L"MvC (Dreamcast)|0.bin|", GamePlatform::CapcomCPS12, GameSeries::MvCNormal },
            Make_MVC_D,
            CGame_MVC_D::GetRule,
        },
        {
            MVC_P,
            L"Marvel vs Capcom (PSX)",
            {},
            Make_MVC_P,
            CGame_MVC_P::GetRule,
            CGame_MVC_P::GetNextRule,
            CGame_MVC_P::GetRuleCtr,
            CGame_MVC_P::ResetRuleCtr,
        },
        {
            MVC_S,
            L"MvC (Steam)",
            { MVC_S,            L"Marvel vs Capcom", L"MvC (Steam)|mvsc?.21D3D8A7;f000.bin|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_MVC_S,
            CGame_MVC_S::GetRule,
        },
        {
            MMX_SNES,
            L"Mega Man X (SNES)",
            { MMX_SNES,         L"Mega Man X", L"Mega Man X (SNES)|Mega*Man X (USA).s?c;sns-rx-0 p0.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MMX_SNES,
            CGame_MMX_SNES::GetRule,
        },
        {
            MMX2_SNES,
            L"Mega Man X2 (SNES)",
            { MMX2_SNES,        L"Mega Man X2", L"Mega Man X2 (SNES)|Mega*Man X2 (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MMX2_SNES,
            CGame_MMX2_SNES::GetRule,
        },
        {
            MMX3_SNES,
            L"Mega Man X3 (SNES)",
            { MMX3_SNES,        L"Mega Man X3", L"Mega Man X3 (SNES)|Mega*Man X3 (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MMX3_SNES,
            CGame_MMX3_SNES::GetRule,
        },
        {
            MMPR_SNES,
            L"MMPR:TFE (SNES)",
            { MMPR_SNES,        L"MMPR:TFE", L"MMPR:TFE (SNES)|Mighty Morphin Power Rangers - The Fighting Edition (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MMPR_SNES,
            CGame_MMPR_SNES::GetRule,
        },
        {
            MCI_S,
            L"MARVEL Cosmic Invasion (Steam)",
            {},
            Make_MCI_S,
            CGame_MCI_S::GetRule,
            CGame_MCI_S::GetNextRule,
            CGame_MCI_S::GetRuleCtr,
            CGame_MCI_S::ResetRuleCtr,
            },
        {
            MK1_A,
            L"Mortal Kombat (Midway, Arcade)",
            { MK1_A,            L"Mortal Kombat (Midway)", L"Mortal Kombat (Arcade)|l5_mortal_kombat_t-unit_uj12_game_rom.uj12;mkt-uj12.bin|", GamePlatform::OtherPlatform },
            Make_MK1_A,
            CGame_MK2_A::GetRule,
        },
        {
            MK1_SNES,
            L"Mortal Kombat (SNES)",
            { MK1_SNES,         L"Mortal Kombat", L"Mortal Kombat (SNES)|Mortal Kombat (USA).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MK1_SNES,
            CGame_MK1_SNES::GetRule,
        },
        {
            MK2_A,
            L"Mortal Kombat II (Midway, Arcade)",
            { MK2_A,            L"Mortal Kombat II (Midway)", L"Mortal Kombat 2 (Arcade)|l3.1_mortal_kombat_ii_game_rom_uj12.uj12;uj12.l31;mk2ute.uj12|", GamePlatform::OtherPlatform },
            Make_MK2_A,
            CGame_MK2_A::GetRule,
        },
        {
            MK2_SNES,
            L"Mortal Kombat II (SNES)",
            { MK2_SNES,         L"Mortal Kombat II", L"Mortal Kombat 2 (SNES)|MK2 USA.sfc;Mortal Kombat II (USA)*.sfc;Mortal_Kombat_II_USA.sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MK2_SNES,
            CGame_MK2_SNES::GetRule,
        },
        {
            MK3_SEGA,
            L"Mortal Kombat 3 (Sega Mega Drive)",
            { MK3_SEGA,         L"Mortal Kombat 3 (Mega Drive)", L"Mortal Kombat 3 (Mega Drive)|mortal kombat 3 (usa).bin|", GamePlatform::OtherPlatform },
            Make_MK3_SEGA,
            CGame_MK3_SEGA::GetRule,
        },
        {
            MSHVSF_A,
            L"MSHvSF (CPS2 Arcade)",
            { MSHVSF_A,         L"MSHvSF", L"MSHvSF: Characters (*.06a), Portraits (*.07b)|mvs*.06a;mvs*.07b|", GamePlatform::CapcomCPS12, GameSeries::MvCNormal },
            Make_MSHVSF_A,
            CGame_MSHVSF_A::GetRule,
        },
        {
            MSHVSF_P,
            L"MSHvSF (PSX)",
            {},
            Make_MSHVSF_P,
            CGame_MSHVSF_P::GetRule,
            CGame_MSHVSF_P::GetNextRule,
            CGame_MSHVSF_P::GetRuleCtr,
            CGame_MSHVSF_P::ResetRuleCtr,
        },
        {
            MSHVSF_S,
            L"MSHvSF (Steam)",
            { MSHVSF_S,         L"MSHvSF", L"MSHvSF (Steam)|mshvsf?.21D3D8A7;f000.bin|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_MSHVSF_A,
            CGame_MSHVSF_A::GetRule,
        },
        {
            MSHWOTG_SNES,
            L"Marvel Super Heroes: War of the Gems (SNES)",
            { MSHWOTG_SNES,     L"MSH: War of the Gems", L"MSH: War of the Gems (SNES)|Marvel Super Heroes in War of the Gems (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_MSHWOTG_SNES,
            CGame_MSHWOTG_SNES::GetRule,
        },
        {
            MVC2_A,
            L"MvC2 (NAOMI Arcade)",
            // MarvelVsCapcom2.bin
            // Unlocked\MarvelVsCapcom2_unlocked.bin
            { MVC2_A,           L"MvC2", L"MvC2 Arcade (MarvelVsCapcom2_unlocked.bin)|marvel vs. capcom 2.dat;marvel*2*.bin|", GamePlatform::SegaNAOMI },
            Make_MVC2_A,
            CGame_MVC2_A::GetRule_A,
        },
        {
            MVC2_A_DIR,
            L"MvC2 (NAOMI Arcade rerip)",
            {},
            Make_MVC2_A_DIR,
            CGame_MVC2_A_DIR::GetRule,
            CGame_MVC2_A_DIR::GetNextRule,
            CGame_MVC2_A_DIR::GetRuleCtr,
            CGame_MVC2_A_DIR::ResetRuleCtr,
        },
        {
            MVC2_D,
            L"MvC2 (Dreamcast)",
            {},
            Make_MVC2_D,
            CGame_MVC2_D::GetRuleDC,
            CGame_MVC2_D::GetNextRuleDC,
            CGame_MVC2_D::GetRuleCtr,
            CGame_MVC2_D::ResetRuleCtr,
        },
        {
            MVC2_D_16,
            L"MvC2 (Dreamcast Palette Expansion)",
            {},
            Make_MVC2_D_16,
            CGame_MVC2_D::GetRuleDC,
            CGame_MVC2_D::GetNextRuleDC,
            CGame_MVC2_D::GetRuleCtr,
            CGame_MVC2_D::ResetRuleCtr,
        },
        {
            MVC2_P,
            L"MvC2 (Playstation 2)",
            {},
            Make_MVC2_P,
            CGame_MVC2_P::GetRule,
            CGame_MVC2_P::GetNextRule,
            CGame_MVC2_P::GetRuleCtr,
            CGame_MVC2_P::ResetRuleCtr,
        },
        {
            MVC2_S,
            L"MvC2 (Steam: AFS)",
            { MVC2_S,           L"MvC2", L"MvC2 (Steam)|mvsc2.21D3D8A7|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_MVC2_S,
            CGame_MVC2_A::GetRule_S,
        },
        {
            MVC2_S_DIR,
            L"MvC2 (Steam: file view)",
            {},
            Make_MVC2_S_DIR,
            CGame_MVC2_D::GetRuleSteam,
            CGame_MVC2_D::GetNextRuleSteam,
            CGame_MVC2_D::GetRuleCtr,
            CGame_MVC2_D::ResetRuleCtr,
        },
        {
            MWARR_A,
            L"Mighty Warriors (Elettronica Video Games)",
            {},
            Make_MWARR_A,
            CGame_MWarr_A_DIR::GetRule,
            CGame_MWarr_A_DIR::GetNextRule,
            CGame_MWarr_A_DIR::GetRuleCtr,
            CGame_MWarr_A_DIR::ResetRuleCtr,
        },
        {
            NBHID_NL,
            L"Nitroplus Blasterz: Heroines Infinite Duel (NESICAxLive)",
            {},
            Make_NBHID_NL,
            CGame_NBHID_NL::GetRule,
            CGame_NBHID_NL::GetNextRule,
            CGame_NBHID_NL::GetRuleCtr,
            CGame_NBHID_NL::ResetRuleCtr,
        },
        {
            NBHID_P,
            L"Nitroplus Blasterz: Heroines Infinite Duel (PS3)",
            {},
            Make_NBHID_P,
            CGame_NBHID_P::GetRule,
            CGame_NBHID_P::GetNextRule,
            CGame_NBHID_P::GetRuleCtr,
            CGame_NBHID_P::ResetRuleCtr,
        },
        {
            NBHID_S,
            L"Nitroplus Blasterz: Heroines Infinite Duel (Steam)",
            {},
            Make_NBHID_S,
            CGame_NBHID_S::GetRule,
            CGame_NBHID_S::GetNextRule,
            CGame_NBHID_S::GetRuleCtr,
            CGame_NBHID_S::ResetRuleCtr,
        },
        {
            NeoBomberman_A,
            L"Neo Bomberman (Neo-Geo)",
            { NeoBomberman_A,   L"Neo Bomberman", L"Neo Bomberman|093-p1.*|", GamePlatform::NEOGEO },
            Make_NeoBomberman_A,
            CGame_NeoBomberman_A::GetRule,
        },
        {
            TURFMASTERS_A,
            L"Neo Turf Masters (Neo-Geo)",
            { TURFMASTERS_A,   L"Neo Turf Masters", L"Neo Turf Masters|200-p1.*|", GamePlatform::NEOGEO },
            Make_TurfMasters_A,
            CGame_TurfMasters_A::GetRule,
        },
        {
            NGBC_A,
            L"NGBC (Atomiswave)",
            { NGBC_A,           L"NGBC", L"NGBC|NeoGeoBattleColliseum.bin|", GamePlatform::SammyAtomiswave },
            Make_NGBC_A,
            CGame_NGBC_A::GetRule,
        },
        {
            NINJAMASTERS_A,
            L"Ninja Masters (Neo-Geo)",
            { NINJAMASTERS_A,   L"Ninja Master's", L"Ninja Master's|217-p2.*;ninjm_p2.rom|", GamePlatform::NEOGEO },
            Make_NINJAMASTERS_A,
            CGame_NINJAMASTERS_A::GetRule,
        },
        {
            P4AU_FightClub,
            L"Persona Fight Club Modpack",
            {},
            Make_P4AU_FightClub,
            CGame_P4AU_FightClub::GetRule,
            CGame_P4AU_FightClub::GetNextRule,
            CGame_P4AU_FightClub::GetRuleCtr,
            CGame_P4AU_FightClub::ResetRuleCtr,
        },
        {
            P4AU_NESICA,
            L"Persona 4 Arena Ultimax 2.0 (NESICA)",
            {},
            Make_P4AU_NESICA,
            CGame_P4AU_NESICA::GetRule,
            CGame_P4AU_NESICA::GetNextRule,
            CGame_P4AU_NESICA::GetRuleCtr,
            CGame_P4AU_NESICA::ResetRuleCtr,
        },
        {
            P4AU_STEAM,
            L"Persona 4 Arena Ultimax (Steam)",
            {},
            Make_P4AU_STEAM,
            CGame_P4AU_STEAM::GetRule,
            CGame_P4AU_STEAM::GetNextRule,
            CGame_P4AU_STEAM::GetRuleCtr,
            CGame_P4AU_STEAM::ResetRuleCtr,
        },
        {
            PrimalRage_SNES,
            L"Primal Rage (SNES)",
            { PrimalRage_SNES,  L"Primal Rage", L"Primal Rage (SNES)|Primal Rage (USA).sfc|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_PrimalRage_SNES,
            CGame_PrimalRage_SNES::GetRule,
        },
        {
            PUNISHER_A,
            L"The Punisher (CPS Dash)",
            { PUNISHER_A,    L"The Punisher", L"The Punisher (CPS Dash)|pse_29.10f|", GamePlatform::CapcomCPS12 },
            Make_Punisher_A,
            CGame_Punisher_A::GetRule,
        },
        {
            PUNISHER_S,
            L"The Punisher (Steam)",
            { PUNISHER_S,    L"The Punisher", L"The Punisher (Steam)|punisher?.21D3D8A7|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_Punisher_S,
            CGame_Punisher_S::GetRule,
        },
        {
            ROTD_A,
            L"Rage of the Dragons (Neo-Geo)",
            { ROTD_A,           L"Rage of the Dragons", L"Rage of the Dragons|264-p1.*|", GamePlatform::NEOGEO },
            Make_ROTD_A,
            CGame_ROTD_A::GetRule,
        },
        {
            RANMACRH_SNES,
            L"Ranma Nibunnoichi: Chougi Ranbu Hen (SNES)",
            { RANMACRH_SNES,    L"Ranma Nibunnoichi: CRH", L"Ranma Nibunnoichi: CRH (SNES)|Ranma Nibunnoichi - Chougi Ranbu Hen (J).s?c;ranma 1-2 - chougi ranbu hen (japan).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_RANMACRH_SNES,
            CGame_RANMACRH_SNES::GetRule,
        },
        {
            RANMAHB_SNES,
            L"Ranma Nibunnoichi: Hard Battle (SNES)",
            { RANMAHB_SNES,     L"Ranma Nibunnoichi: HB", L"Ranma Nibunnoichi: HB (SNES)|ranma 1-2 - hard battle (usa).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_RANMAHB_SNES,
            CGame_RANMAHB_SNES::GetRule,
        },
        {
            RBFF1_A,
            L"Real Bout Fatal Fury (Neo-Geo)",
            { RBFF1_A,          L"Real Bout Fatal Fury", L"Real Bout Fatal Fury|095-p1.*;095-p1k.p1;rbff1_p1.rom|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_RBFF1_A,
            CGame_RBFF1_A::GetRule,
        },
        {
            RBFF2_A,
            L"Real Bout Fatal Fury 2 (Neo-Geo)",
            { RBFF2_A,          L"Real Bout Fatal Fury 2", L"Real Bout Fatal Fury 2 (Neo-Geo)|240-p1.*;240-pg1.*;rb2_p1.rom;140-p1k.*;240-p1fc.p1|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_RBFF2_A,
            CGame_RBFF2_A::GetRule,
        },
        {
            RBFF2_S,
            L"Real Bout Fatal Fury 2 (Steam)",
            { RBFF2_S,          L"Real Bout Fatal Fury 2", L"Real Bout Fatal Fury 2 (Steam)|p1.bin|", GamePlatform::Steam },
            Make_RBFF2_S,
            CGame_RBFF2_S::GetRule,
        },
        {
            RBFFS_A,
            L"Real Bout Fatal Fury Special (Neo-Geo)",
            // normal ROM name is 223-p1.p1 (and 223-p1k.p1 for Korean), FC uses 223-p1.bin
            { RBFFS_A,          L"Real Bout Fatal Fury Special", L"Real Bout Fatal Fury Special|223*p1*|", GamePlatform::NEOGEO, GameSeries::FatalFury },
            Make_RBFFS_A,
            CGame_RBFFS_A::GetRule,
        },
        {
            REDEARTH_A,
            L"Red Earth (CPS3 Arcade, 31)",
            { REDEARTH_A,       L"Red Earth", L"Red Earth (Stages: 30, Characters: 31, Next: 50)|30;31;50|", GamePlatform::CapcomCPS3 },
            Make_REDEARTH_A,
            CGame_REDEARTH_A::GetRule,
        },
        {
            REDEARTH_A_DIR_30,
            L"Red Earth (CPS3 Arcade Rerip, 3.x set 1)",
            {},
            Make_REDEARTH_A_DIR_30,
            CGame_RedEarth_A_DIR::GetRule_30,
            CGame_RedEarth_A_DIR::GetNextRule_30,
            CGame_RedEarth_A_DIR::GetRuleCtr,
            CGame_RedEarth_A_DIR::ResetRuleCtr,
        },
        {
            REDEARTH_A_DIR_31,
            L"Red Earth (CPS3 Arcade Rerip, 3.x set 2)",
            {},
            Make_REDEARTH_A_DIR_31,
            CGame_RedEarth_A_DIR::GetRule_31,
            CGame_RedEarth_A_DIR::GetNextRule_31,
            CGame_RedEarth_A_DIR::GetRuleCtr,
            CGame_RedEarth_A_DIR::ResetRuleCtr,
        },
        {
            REDEARTH_A_DIR_50,
            L"Red Earth (CPS3 Arcade Rerip, 5.x)",
            {},
            Make_REDEARTH_A_DIR_50,
            CGame_RedEarth_A_DIR::GetRule_50,
            CGame_RedEarth_A_DIR::GetNextRule_50,
            CGame_RedEarth_A_DIR::GetRuleCtr,
            CGame_RedEarth_A_DIR::ResetRuleCtr,
        },
        {
            REDEARTH_S,
            L"Red Earth (Steam)",
            { REDEARTH_S,       L"Red Earth", L"Red Earth (Steam)|redearth.21D3D8A7;warzard.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_REDEARTH_S,
            CGame_REDEARTH_S::GetRule,
        },
        {
            RODSM2_A,
            L"Ring of Destruction: Slam Master's II",
            { RODSM2_A,         L"Ring of Destruction: Slam Masters 2", L"Ring of Destruction: Slam Masters 2|smbe.05b|", GamePlatform::CapcomCPS12 },
            Make_RODSM2_A,
            CGame_RODSM2_A::GetRule,
        },
        {
            SAMSHO1_A,
            L"Samurai Shodown (Neo-Geo)",
            { SAMSHO1_A,        L"Samurai Shodown", L"Samurai Shodown|045-p1.p1;045-p1.bin;045-p2.rom|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO1_A,
            CGame_SAMSHO1_A::GetRule,
        },
        {
            SAMSHO2_A,
            L"Samurai Shodown II (Neo-Geo)",
            { SAMSHO2_A,        L"Samurai Shodown II", L"Samurai Shodown II|063-p1.*;063-p1-kan.p1;063-p1new.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO2_A,
            CGame_SAMSHO2_A::GetRule,
        },
        {
            SAMSHO3_A,
            L"Samurai Shodown III (Neo-Geo)",
            { SAMSHO3_A,        L"Samurai Shodown III", L"Samurai Shodown III|087-p5.p5|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO3_A,
            CGame_SAMSHO3_A::GetRule,
        },
        {
            SAMSHO4_A,
            L"Samurai Shodown IV (Neo-Geo)",
            { SAMSHO4_A,        L"Samurai Shodown IV", L"Samurai Shodown IV|sams4_p1.rom;222-p1.*;222_p1.*;222-p1k.p1;222-p1sp.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO4_A,
            CGame_SAMSHO4_A::GetRule,
        },
        {
            SAMSHO5_A,
            L"Samurai Shodown V (Neo-Geo)",
            { SAMSHO5_A,        L"Samurai Shodown V", L"Samurai Shodown V (Neo-Geo)|270-p1.*;p1.bin;270-p1c.p1|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO5_A,
            CGame_SAMSHO5_A::GetRule,
        },
        {
            SAMSHO5X_A,
            L"Samurai Shodown V (Xbox)",
            { SAMSHO5X_A,       L"Samurai Shodown V (Xbox)", L"Samurai Shodown V (Xbox)|ssvx_p1.rom|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO5X_A,
            CGame_SAMSHO5_A::GetRule,
        },
        {
            SAMSHO5SP_A,
            L"Samurai Shodown V Special (Neo-Geo)",
            { SAMSHO5SP_A,      L"Samurai Shodown V Special", L"Samurai Shodown V Special (Neo-Geo)|272-p1*.*;273-p1.bin|", GamePlatform::NEOGEO, GameSeries::SamuraiShodown },
            Make_SAMSHO5SP_A,
            CGame_SAMSHO5SP_A::GetRule,
        },
        {
            SAMSHO5SP_S,
            L"Samurai Shodown V Special (Steam)",
            { SAMSHO5SP_S,      L"Samurai Shodown V Special", L"Samurai Shodown V Special (Steam)|p1*h*.bin|", GamePlatform::Steam },
            Make_SAMSHO5SP_S,
            CGame_SAMSHO5SP_A::GetRule,
        },
        {
            SAVAGEREIGN_A,
            L"Savage Reign (Neo-Geo)",
            { SAVAGEREIGN_A,    L"Savage Reign", L"Savage Reign|059-p1.*;savag_p1.rom|", GamePlatform::NEOGEO },
            Make_SAVAGEREIGN_A,
            CGame_SAVAGEREIGN_A::GetRule,
        },
        {
            BASARA_P,
            L"Sengoku BASARA X (PS2)",
            { BASARA_P,         L"Sengoku BASARA X", L"Sengoku BASARA X (PS2)|BSR.bin|", GamePlatform::PS2 },
            Make_BASARA_P,
            CGame_BASARA_P::GetRule,
        },
        {
            BnK_P,
            L"Bonnou no Kaihou (PS2)",
            { BnK_P,         L"Shin Gouketsuji Ichizoku: Bonnou no Kaihou", L"Shin Gouketsuji Ichizoku: Bonnou no Kaihou (PS2)|SLPM_662.78|", GamePlatform::PS2 },
            Make_BnK_P,
            CGame_BnK_P::GetRule,
        },
        {
            SFA1_A,
            L"SFA1 (CPS2 Arcade)",
            { SFA1_A,           L"SFA1", L"SFA1 (CPS2)|sfz.06|", GamePlatform::CapcomCPS12, GameSeries::SFA },
            Make_SFA1_A,
            CGame_SFA1_A::GetRule,
        },
        {
            SFA1_S,
            L"SFA1 (CPS2 Steam)",
            { SFA1_S,           L"SFA1", L"SFA1 (Steam)|bundleStreetFighterAlpha.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SFA1_S,
            CGame_SFA1_S::GetRule,
        },
        {
            SFA2_A,
            L"SFA2 (CPS2 Arcade)",
            { SFA2_A,           L"SFA2", L"SFA2: Characters (sz*.07), Bonus (sz*.08) (CPS2)|sz*.07*;sz*.08*|", GamePlatform::CapcomCPS12, GameSeries::SFA },
            Make_SFA2_A,
            CGame_SFA2_A::GetRule,
        },
        {
            SFA2_Hack_A,
            L"SFA2 (CPS2 Palette Expansion)",
            { SFA2_Hack_A,      L"SFA2 Hack", L"SFA2 Hack (sz2u.09)|sz2u.09|", GamePlatform::CapcomCPS12, GameSeries::SFA },
            Make_SFA2_Hack_A,
            CGame_SFA2_A::GetRule,
        },
        {
            SFA2_S,
            L"SFA2 (Steam)",
            { SFA2_S,           L"SFA2", L"SFA2 (Steam)|bundleStreetFighterAlpha2.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SFA2_S,
            CGame_SFA2_S::GetRule,
        },
        {
            SFA3_A,
            L"SFA3 (CPS2 Arcade)",
            { SFA3_A,           L"SFA3", L"SFA3 (CPS2)|sz3*.09*|", GamePlatform::CapcomCPS12, GameSeries::SFA },
            Make_SFA3_A,
            CGame_SFA3_A::GetRule,
        },
        { 
            SFA3MAX_PSP_D,
            L"SFA3 MAX (PSP)",
            {},
            Make_SFA3MAX_PSP_DIR,
            CGame_SFA3MAX_PSP_DIR::GetRule,
            CGame_SFA3MAX_PSP_DIR::GetNextRule,
            CGame_SFA3MAX_PSP_DIR::GetRuleCtr,
            CGame_SFA3MAX_PSP_DIR::ResetRuleCtr,
        },
        {
            SFA3_S,
            L"SFA3 (Steam)",
            { SFA3_S,           L"SFA3", L"SFA3 (Steam)|bundleStreetFighterAlpha3.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SFA3_S,
            CGame_SFA3_S::GetRule,
        },
        {
            SFZ3U_A,
            L"Street Fighter Zero 3 Upper (NAOMI)",
            // Note that zero3rom.bin from the Fightcade/Flycast CHD seems to be encrypted
            { SFZ3U_A,          L"SFA3/SFZ3 Upper", L"SFA3/SFZ3 Upper (NAOMI)|StreetFighterZero3Upper.bin;Street_Fighter_Zero_3_Upper.dat|", GamePlatform::SegaNAOMI },
            Make_SFZ3U_A,
            CGame_SFZ3U_A::GetRule,
        },
        {
            SFZ3U_S,
            L"Street Fighter Zero 3 Upper (Steam)",
            { SFZ3U_S,           L"SFA3/SFZ3 Upper", L"SFA3/SFZ3 Upper (Steam)|z3u.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection2 },
            Make_SFZ3U_S,
            CGame_SFZ3U_S::GetRule,
        },
        {
            SFZ3M_S,
            L"Street Fighter Alpha 3 Max (Steam)",
            { SFZ3M_S,           L"SFA3/SFZ3 Max", L"SFA3/SFZ3 Max (Steam)|z3uu.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection2 },
            Make_SFZ3M_S,
            CGame_SFZ3M_S::GetRule,
        },
        {
            SFIII1_A,
            L"SFIII:NG (CPS3 Arcade)",
            { SFIII1_A,         L"SFIII:NG", L"SFIII:NG (CPS3)|50|", GamePlatform::CapcomCPS3, GameSeries::SF3 },
            Make_SFIII1_A,
            CGame_SFIII1_A::GetRule,
        },
        {
            SFIII1_A_DIR,
            L"SFIII:New Generation (CPS3 Arcade Rerip)",
            {},
            Make_SFIII1_A_DIR,
            CGame_SFIII1_A_DIR::GetRule,
            CGame_SFIII1_A_DIR::GetNextRule,
            CGame_SFIII1_A_DIR::GetRuleCtr,
            CGame_SFIII1_A_DIR::ResetRuleCtr,
        },
        {
            SFIII1_S,
            L"SFIII:NG (Steam)",
            { SFIII1_S,         L"SFIII:NG", L"SFIII:NG (Steam)|bundleStreetFighterIII.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SFIII1_S,
            CGame_SFIII30th_S::GetRule_NG,
        },
        {
            SFIII2_A,
            L"SFIII:2I (CPS3 Arcade)",
            { SFIII2_A,         L"SFIII:2I", L"SFIII:2I (CPS3)|50|", GamePlatform::CapcomCPS3, GameSeries::SF3 },
            Make_SFIII2_A,
            CGame_SFIII2_A::GetRule,
        },
        {
            SFIII2_A_DIR,
            L"SFIII:2nd Impact (CPS3 Arcade Rerip)",
            {},
            Make_SFIII2_A_DIR,
            CGame_SFIII2_A_DIR::GetRule,
            CGame_SFIII2_A_DIR::GetNextRule,
            CGame_SFIII2_A_DIR::GetRuleCtr,
            CGame_SFIII2_A_DIR::ResetRuleCtr,
        },
        {
            SFIII2_S,
            L"SFIII:SI (Steam)",
            { SFIII2_S,         L"SFIII:SI", L"SFIII:SI (Steam)|bundleStreetFighterIII_2ndImpact.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SFIII2_S,
            CGame_SFIII30th_S::GetRule_SI,
        },

        {
            SFIII3_A,
            L"SFIII:3S (CPS3 Arcade)",
            { SFIII3_A,         L"SFIII:3S", L"SFIII:3S (51), Gill glow/X.C.O.P.Y. (10) (CPS3)|10;51|", GamePlatform::CapcomCPS3 },
            Make_SFIII3_A,
            CGame_SFIII3_A::GetRule,
        },
        {
            SFIII3_A_DIR_10,
            L"SFIII:3S Gill Glow (CPS3 Arcade Rerip)",
            {},
            Make_SFIII3_A_DIR_10,
            CGame_SFIII3_A_DIR::GetRule10,
            CGame_SFIII3_A_DIR::GetNextRule10,
            CGame_SFIII3_A_DIR::GetRuleCtr,
            CGame_SFIII3_A_DIR::ResetRuleCtr,
        },
        {
            SFIII3_A_DIR_4rd,
            L"SFIII:4rd Strike (CPS3 Arcade)",
            {},
            Make_SFIII3_A_DIR_4rd,
            CGame_SFIII3_A_DIR::GetRule4,
            CGame_SFIII3_A_DIR::GetNextRule4,
            CGame_SFIII3_A_DIR::GetRuleCtr,
            CGame_SFIII3_A_DIR::ResetRuleCtr,
        },
        {
            SFIII3_A_DIR_4rd_10,
            L"SFIII:4rd Strike Gill Glow (CPS3 Arcade)",
            {},
            Make_SFIII3_A_DIR_4rd_10,
            CGame_SFIII3_A_DIR::GetRule4_10,
            CGame_SFIII3_A_DIR::GetNextRule4_10,
            CGame_SFIII3_A_DIR::GetRuleCtr,
            CGame_SFIII3_A_DIR::ResetRuleCtr,
        },
        {
            SFIII3_A_DIR_51,
            L"SFIII:3S (CPS3 Arcade Rerip)",
            {},
            Make_SFIII3_A_DIR_51,
            CGame_SFIII3_A_DIR::GetRule51,
            CGame_SFIII3_A_DIR::GetNextRule51,
            CGame_SFIII3_A_DIR::GetRuleCtr,
            CGame_SFIII3_A_DIR::ResetRuleCtr,
        },
        {
            SFIII3_A_DIR_EX,
            L"SFIII:3S EX",
            {},
            Make_SFIII3_A_DIR_EX,
            CGame_SFIII3_A_DIR::GetRule3Ex,
            CGame_SFIII3_A_DIR::GetNextRule3Ex,
            CGame_SFIII3_A_DIR::GetRuleCtr,
            CGame_SFIII3_A_DIR::ResetRuleCtr,
        },
        {
            SFIII3_D,
            L"SFIII:3S (Dreamcast)",
            {},
            Make_SFIII3_D,
            CGame_SFIII3_D::GetRule,
            CGame_SFIII3_D::GetNextRule,
            CGame_SFIII3_D::GetRuleCtr,
            CGame_SFIII3_D::ResetRuleCtr,
        },
        {
            SFIII3_S,
            L"SFIII:3S (Steam)",
            { SFIII3_S,         L"SFIII:3S", L"SFIII:3S (Steam)|bundleStreetFighterIII_3rdStrike.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SFIII3_S,
            CGame_SFIII30th_S::GetRule_3S,
        },
        {
            SF1_A,
            L"Street Fighter (US, Set 1)",
            { SF1_A,            L"Street Fighter (Capcom)", L"Street Fighter|sf*19*.*;sfd-19;sfe-19|", GamePlatform::OtherPlatform },
            Make_SF1_A,
            CGame_StreetFighter_A::GetRule,
        },
        {
            SF1_S,
            L"Street Fighter (Steam)",
            { SF1_S,            L"Street Fighter", L"Street Fighter (Steam)|bundleStreetFighter.mbundle;StreetFighter.u.68k|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SF1_S,
            CGame_StreetFighter_S::GetRule,
        },
        {
            SF2WW_A,
            L"Street Fighter 2 World Warrior (CPS1)",
            { SF2WW_A,            L"SF2:WW", L"SF2:WW (CPS1)|sf2e_28g.9e;sf2_29b.10e|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_SF2WW_A,
            CGame_SF2WW_A::GetRule,
        },
        {
            SF2WW_S,
            L"Street Fighter II World Warrior (Steam)",
            { SF2WW_S,            L"SF2:WW", L"SF2:WW (Steam)|bundleStreetFighterII.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SF2WW_S,
            CGame_SF2WW_S::GetRule,
        },
        {
            SF2CE_A,
            L"SF2:CE (CPS1 Arcade)",
            { SF2CE_A,          L"SF2:CE", L"SF2:CE: Select (21), Characters (22), Continue (23) (CPS1)|s92*21*6f;s92*22*7f;s92*23*8f|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_SF2CE_A,
            CGame_SF2CE_A::GetRule,
        },
        {
            SF2CE_S,
            L"SF2:CE (Steam)",
            { SF2CE_S,          L"SF2:CE", L"SF2:CE (Steam)|bundleStreetFighterII_CE.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SF2CE_S,
            CGame_SF2CE_S::GetRule,
        },
        {
            SF2HF_A,
            L"SF2:HF (CPS1 Arcade)",
            { SF2HF_A,          L"SF2:HF", L"SF2:HF: Select (21), Characters (22), Continue (23) (CPS1)|s2t*21.6f;s2t*22.7f;s2t*_23.8f;sf2_21.bin;sf2_22.bin;sf2.23|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_SF2HF_A,
            CGame_SF2HF_A::GetRule,
        },
        {
            SF2HF_S,
            L"SF2:HF (Steam)",
            { SF2HF_S,          L"SF2:HF", L"SF2:HF (Steam)|bundleStreetFighterII_HF.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SF2HF_S,
            CGame_SF2HF_S::GetRule,
        },
        {
            SHAQFU_SNES,
            L"Shaq Fu (SNES)",
            { SHAQFU_SNES,      L"Shaq Fu", L"Shaq Fu (SNES)|Shaq Fu (USA).sfc;sns-aqfe-0.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_SHAQFU_SNES,
            CGame_SHAQFU_SNES::GetRule,
        },
        {
            SFTM_A,
            L"Street Fighter: The Movie (Incredible Technologies)",
            { SFTM_A,           L"Street Fighter: The Movie (Incredible Technologies)", L"Street Fighter: The Movie (Arcade)|sfm*_prom0_v1.1*.prom0;sfm_0_v1.1.prom0;sfm_0_v1.11.prom0;sfm_0_v1.12.prom0;sfmn_0_v1.12.prom0;sfmn_0_v1.14.prom0|", GamePlatform::OtherPlatform },
            Make_SFTM_A,
            CGame_SFTM_A::GetRule,
        },
        {
            SVG_SNES,
            L"Super Variable Geo (SNES)",
            { SVG_SNES,         L"Super Variable Geo (Japan)", L"Super Variable Geo (Japan SNES)|Super Variable Geo (J*).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_SVG_SNES,
            CGame_SVG_SNES::GetRule,
        },
        {
            SurvivalArts_A,
            L"Survival Arts (World)",
            { SurvivalArts_A,   L"Survival Arts (Scarab)", L"Survival Arts (Scarab)|prl-r6.u4;usa-pr-l.u4|", GamePlatform::OtherPlatform },
            Make_SurvivalArts_A,
            CGame_SurvivalArts_A::GetRule,
        },
        {
            SVCPLUSA_A,
            L"SvC Plus A",
            { SVCPLUSA_A,       L"SNK vs Capcom", L"SNK vs Capcom (Neo-Geo)|svc-p2pl.bin;svc-p2sp.bin|", GamePlatform::NEOGEO },
            Make_SVCPLUSA_A,
            CGame_SVCPLUSA_A::GetRule_Normal,
        },
        {
            SVC_S,
            L"SNK VS. CAPCOM SVC CHAOS (Steam)",
            { SVC_S,       L"SNK VS. CAPCOM SVC CHAOS", L"SNK VS. CAPCOM SVC CHAOS (Steam)|p1.bin|", GamePlatform::Steam },
            Make_SVCPLUSA_A,
            CGame_SVCPLUSA_A::GetRule_Steam,
        },
        {
            SSF2_A,
            L"Super Street Fighter II (CPS2)",
            { SSF2_A,            L"SSF2", L"SSF2 (CPS2): Portraits (03), Characters (04), Stages (07)|ssfe-03b;ssf?.03*;ssf?.3t;ssf?.04*;ssf?.4t;ssf?.07*;ssf?.7t|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_SSF2_A,
            CGame_SSF2_A::GetRule,
        },
        {
            SSF2_S,
            L"Super Street Fighter II (Steam)",
            { SSF2_S,            L"SSF2", L"SSF2 (Steam)|bundleSuperStreetFighterII.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SSF2_S,
            CGame_SSF2_S::GetRule,
        },
        {
            SSF2T_A,
            L"SSF2T (CPS2 Arcade)",
            { SSF2T_A,          L"SSF2T", L"SSF2T: Portraits (*.03c), Characters (*.04a), Stages (*.08) (CPS2)|sfx*.03*;sfx*.04a;sf*.08|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_SSF2T_A,
            CGame_SSF2T_A::GetRule,
        },
        {
            SSF2T_NL,
            L"SSF2T (New Legacy)",
            { SSF2T_NL,          L"SSF2T: New Legacy Hack", L"SSF2T: New Legacy: Portraits (*.03), Characters (*.04), Stages (*.08), New Legacy Extensions (*.09)|sfnl.03;sfnl.04;sfnl.08;sfnl.09|", GamePlatform::CapcomCPS12, GameSeries::SF2 },
            Make_SSF2T_A,
            CGame_SSF2T_A::GetRule,
        },
        {
            SSF2T_GBA,
            L"SSF2T:Revival (GBA)",
            { SSF2T_GBA,        L"SSF2T: Revival", L"SSF2T: Revival (GBA)|Super*Street*Fighter*.gba|", GamePlatform::Nintendo, GameSeries::NintendoGBA },
            Make_SSF2T_GBA,
            CGame_SSF2T_GBA::GetRule,
        },
        {
            SSF2T_S,
            L"SSF2T (Steam)",
            { SSF2T_S,          L"SSF2T", L"SSF2T (Steam)|bundleSuperStreetFighterIITurbo.mbundle|", GamePlatform::Steam, GameSeries::SF30th },
            Make_SSF2T_S,
            CGame_SSF2T_S::GetRule,
        },
        {
            SDODGEBALL_A,
            L"Super Dodge Ball (Neo-Geo)",
            { SDODGEBALL_A,     L"Super Dodge Ball", L"Super Dodge Ball|208-p1.*;sdb_p1.rom|", GamePlatform::NEOGEO },
            Make_SDODGEBALL_A,
            CGame_SDODGEBALL_A::GetRule,
        },
        {
            GEMFIGHTER_A,
            L"Super Gem Fighter Mini Mix (USA 970904)",
            { GEMFIGHTER_A,     L"Super Gem Fighter Minimix", L"Super Gem Fighter (CPS2)|pcf*.07|", GamePlatform::CapcomCPS12 },
            Make_GEMFIGHTER_A,
            CGame_GEMFIGHTER_A::GetRule,
        },
        {
            GEMFIGHTER_S,
            L"Super Gem Fighter Mini Mix (USA 970904)",
            { GEMFIGHTER_S,     L"Super Gem Fighter Minimix", L"Super Gem Fighter (Steam)|pfghtj.21D3D8A7;sgemf.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_GEMFIGHTER_S,
            CGame_GEMFIGHTER_S::GetRule,
        },
        {
            SPF2T_A,
            L"Super Puzzle Fighter II Turbo (CPS2 Arcade)",
            { SPF2T_A,          L"Super Puzzle Fighter II Turbo", L"Super Puzzle Fighter II Turbo (CPS2)|pzf.04*;pzfcb.04;pzfxp.04|", GamePlatform::CapcomCPS12 },
            Make_SPF2T_A,
            CGame_SPF2T_A::GetRule,
        },
        {
            SPF2T_S,
            L"Super Puzzle Fighter II Turbo (Steam)",
            { SPF2T_S,          L"Super Puzzle Fighter II Turbo", L"Super Puzzle Fighter II Turbo (Steam)|spf2tu.21D3D8A7;spf2xj.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_SPF2T_S,
            CGame_SPF2T_S::GetRule,
        },
        {
            TattooAsns_A,
            L"Tattoo Assassins (Data East DECO32)",
            { TattooAsns_A,    L"Tattoo Assassins (Data East DECO32)", L"Tattoo Assassins (Data East DECO32)|pp44.cpu|", GamePlatform::OtherPlatform },
            Make_TattooAsns_A,
            CGame_TattooAsns_A::GetRule,
        },
        {
            TekkenAdvance_GBA,
            L"Tekken Advance (USA GBA)",
            { TekkenAdvance_GBA, L"Tekken Advance (USA)", L"Tekken Advance (USA GBA)|Tekken Advance (USA).gba|", GamePlatform::Nintendo, GameSeries::NintendoGBA },
            Make_TekkenAdvance_GBA,
            CGame_TekkenAdvance_GBA::GetRule,
        },
        {
            TMNTTF_SNES,
            L"TMNT: Tournament Fighters (SNES)",
            { TMNTTF_SNES,      L"Teenage Mutant Ninja Turtles: TF", L"Teenage Mutant Ninja Turtles: TF (SNES)|sns-ky-0.u1;teenage mutant ninja turtles - tournament fighters (U*.s*c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_TMNTTF_SNES,
            CGame_TMNTTF_SNES::GetRule,
        },
        {
            TOPF2005_SEGA,
            L"Top Fighter 2005 (Sega)",
            { TOPF2005_SEGA,    L"Top Fighter 2005 (Mega Drive)", L"Top Fighter 2005|top fighter 2005 (unl).bin|", GamePlatform::OtherPlatform },
            Make_TOPF2005_SEGA,
            CGame_TOPF2005_SEGA::GetRule,
        },
        {
            UMK3_A,
            L"Ultimate Mortal Kombat 3 (Midway, Arcade)",
            { UMK3_A,           L"Ultimate Mortal Kombat 3 (Midway)", L"Ultimate Mortal Kombat 3 (Arcade)|l1.2_mortal_kombat_3_u54_ultimate.u54;um312u54.bin;u54_umk3plus.u54;umk3plus_beta1.u54;umk3te.u54;umk3uc-u54.bin;umk3uk-u54.bin|", GamePlatform::OtherPlatform },
            Make_UMK3_A,
            CGame_UMK3_A::GetRule,
        },
        {
            UMK3_DS,
            L"Ultimate Mortal Kombat 3 (USA DS)",
            { UMK3_DS,          L"Ultimate Mortal Kombat 3", L"Ultimate Mortal Kombat 3 (DS)|Ultimate Mortal Kombat (USA) (En,Fr,De,Es,It).nds|", GamePlatform::Nintendo, GameSeries::NintendoDS },
            Make_UMK3_DS,
            CGame_UMK3_DS::GetRule,
        },
        {
            UMK3_SEGA,
            L"Ultimate Mortal Kombat 3 (USA Sega Mega Drive)",
            { UMK3_SEGA,         L"Ultimate Mortal Kombat 3 (Mega Drive)", L"Ultimate Mortal Kombat 3 (Mega Drive)|ultimate mortal kombat 3 (usa).bin|", GamePlatform::OtherPlatform },
            Make_UMK3_SEGA,
            CGame_UMK3_SEGA::GetRule,
        },
        {
            UMK3_SNES,
            L"Ultimate Mortal Kombat 3 (USA SNES)",
            { UMK3_SNES,        L"Ultimate Mortal Kombat 3", L"Ultimate Mortal Kombat 3 (SNES)|Ultimate Mortal Kombat 3 (USA).sfc;sns-a3ze.u1|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_UMK3_SNES,
            CGame_UMK3_SNES::GetRule,
        },
        {
            UNICLR_A,
            L"Under Night In-Birth Exe:Late[cl-r]",
            {},
            Make_UNICLR_A,
            CGame_UNICLR_A::GetRule,
            CGame_UNICLR_A::GetNextRule,
            CGame_UNICLR_A::GetRuleCtr,
            CGame_UNICLR_A::ResetRuleCtr,
        },
		{
            UNI2_S,
            L"Under Night In-Birth II Sys:Celes",
            {},
            Make_UNI2_S,
            CGame_UNI2_S::GetRule,
            CGame_UNI2_S::GetNextRule,
            CGame_UNI2_S::GetRuleCtr,
            CGame_UNI2_S::ResetRuleCtr,
        },
        {
            VampireNightWarriors_A,
            L"Vampire: The Night Warriors (CPS2)",
            { VampireNightWarriors_A,   L"Vampire: The Night Warriors", L"Vampire: The Night Warriors: Characters (rom 9), Portraits (rom 4) (CPS2)|vam*.09?; vam*.04?|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
            Make_VampireNightWarriors_A,
            CGame_VampireNightWarriors_A::GetRule,
        },
        {
            VampireNightWarriors_S,
            L"Vampire: The Night Warriors (Steam)",
            { VampireNightWarriors_S,   L"Vampire: The Night Warriors", L"Vampire: The Night Warriors (Steam)|dstlku.21D3D8A7;vampj.21d3d8a7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_VampireNightWarriors_S,
            CGame_VampireNightWarriors_S::GetRule,
        },
        {
            VampireHunter_A,
            L"Vampire Hunter (CPS2)",
            { VampireHunter_A,          L"Vampire Hunter: Darkstalkers' Revenge", L"Vampire Hunter: Darkstalkers' Revenge (CPS2)|vph?.09?|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
            Make_VampireHunter_A,
            CGame_VampireHunter_A::GetRule,
        },
        {
            VampireHunter_S,
            L"Vampire Hunter (Steam)",
            { VampireHunter_S,          L"Vampire Hunter: Darkstalkers' Revenge", L"Vampire Hunter: Darkstalkers' Revenge (Steam)|nwarru.21D3D8A7;vhuntjr2.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_VampireHunter_S,
            CGame_VampireHunter_S::GetRule,
        },
        {
            VHUNT2_A,
            L"Vampire Hunter 2 (CPS2 Arcade)",
            { VHUNT2_A,         L"Vampire Hunter 2", L"Vampire Hunter 2 (CPS2: Characters (09), Stages (10))|vh2j.09;vh2j.10|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
            Make_VHUNT2_A,
            CGame_VHUNT2_A::GetRule,
        },
        {
            VHUNT2_S,
            L"Vampire Hunter 2 (Steam)",
            { VHUNT2_S,         L"Vampire Hunter 2", L"Vampire Hunter 2 (Steam)|vhunt2.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_VHUNT2_S,
            CGame_VHUNT2_S::GetRule,
        },
        {
            VSAV_A,
            L"Vampire Savior (CPS2 Arcade)",
            { VSAV_A,           L"Vampire Savior", L"Vampire Savior (CPS2)|vm3*.10b|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
            Make_VSAV_A,
            CGame_VSAV_A::GetRule,
        },
        {
            VSAV_S,
            L"Vampire Savior (Steam)",
            { VSAV_S,           L"Vampire Savior", L"Vampire Savior (Steam)|vsavj.21D3D8A7;vsavu.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_VSAV_S,
            CGame_VSAV_S::GetRule,
        },
        {
            VSAV2_A,
            L"Vampire Savior 2 (CPS2 Arcade)",
            { VSAV2_A,          L"Vampire Savior 2", L"Vampire Savior 2 (CPS2)|vs2j.10|", GamePlatform::CapcomCPS12, GameSeries::VampireSavior },
            Make_VSAV2_A,
            CGame_VSAV2_A::GetRule,
        },
        {
            VSAV2_S,
            L"Vampire Savior 2 (Steam)",
            { VSAV2_S,          L"Vampire Savior 2", L"Vampire Savior 2 (Steam)|vsav2.21D3D8A7|", GamePlatform::Steam, GameSeries::CapcomFightCollection },
            Make_VSAV2_S,
            CGame_VSAV2_S::GetRule,
        },
        {
            VirtuaFighter2_GEN,
            L"Virtua Fighter 2 (Genesis)",
            { VirtuaFighter2_GEN,          L"Virtua Fighter 2 (Genesis)", L"Virtua Fighter 2 (Genesis)|mpr-19107+mpr-19108.bin;Virtua Fighter 2 (USA, Europe).md|", GamePlatform::OtherPlatform },
            Make_VirtuaFighter2_GEN,
            CGame_VirtuaFighter2_GEN::GetRule,
        },
        {
            Gowcaizer_A,
            L"Voltage Fighter Gowcaizer (Neo-Geo)",
            { Gowcaizer_A,      L"Voltage Fighter Gowcaizer", L"Voltage Fighter Gowcaizer|094-p1.*|", GamePlatform::NEOGEO },
            Make_Gowcaizer_A,
            CGame_Gowcaizer_A::GetRule,
        },
        {
            WakuWaku7_A,
            L"Waku Waku 7",
            { WakuWaku7_A,      L"Waku Waku 7", L"Waku Waku 7|225-p1.*;225-p1bh.p1|", GamePlatform::NEOGEO },
            Make_WakuWaku7_A,
            CGame_WakuWaku7_A::GetRule,
        },
        {
            WINDJAMMERS_A,
            L"Windjammers (Neo-Geo)",
            { WINDJAMMERS_A,    L"Windjammers", L"Windjammers|065-p1.*|", GamePlatform::NEOGEO }, // Data East on NEOGEO
            Make_WINDJAMMERS_A,
            CGame_Windjammers_A::GetRule,
        },
        {
            WorldHeroesPerfect_A,
            L"World Heroes Perfect (Neo-Geo)",
            { WorldHeroesPerfect_A, L"World Heroes Perfect", L"World Heroes Perfect|090-p1.*|", GamePlatform::NEOGEO },
            Make_WorldHeroesPerfect_A,
            CGame_WorldHeroesPerfect_A::GetRule,
        },
        {
            XMMA_SNES,
            L"X-Men: Mutant Apocalypse (SNES)",
            { XMMA_SNES,        L"X-Men: Mutant Apocalypse", L"X-Men: Mutant Apocalypse (SNES)|X-Men - Mutant Apocalypse (USA).s?c|", GamePlatform::Nintendo, GameSeries::NintendoSNES },
            Make_XMMA_SNES,
            CGame_XMMA_SNES::GetRule,
        },
        {
            XMVSF_A,
            L"XMvSF (CPS2 Arcade)",
            { XMVSF_A,          L"XMvSF", L"XMvSF (CPS2)|xvs*.05*|", GamePlatform::CapcomCPS12, GameSeries::MvCNormal },
            Make_XMVSF_A,
            CGame_XMVSF_A::GetRule,
        },
        {
            XMVSF_P,
            L"XMvSF (PSX)",
            {},
            Make_XMVSF_P,
            CGame_XMVSF_P::GetRule,
            CGame_XMVSF_P::GetNextRule,
            CGame_XMVSF_P::GetRuleCtr,
            CGame_XMVSF_P::ResetRuleCtr,
        },
        {
            XMVSF_S,
            L"XMvSF",
            { XMVSF_S,          L"XMvSF", L"XMvSF (Steam)|xmvsf*.21D3D8A7;f000.bin|", GamePlatform::Steam, GameSeries::MvCSteam },
            Make_XMVSF_S,
            CGame_XMVSF_S::GetRule,
        },

        {
            DEVMODE_A,
            L"Unknown Game",
            { DEVMODE_A,         L"Unknown Game Mode (Single File)", L"Unknown Game ROM|*.*|" },
            Make_DEVMODE_A,
            CGame_DevMode_A::GetRule,
        },
    };

    static_assert(NUM_GAMES == 261, "New GameID defined: please update GameRegistry with the associated data.");

    LPCWSTR GetGameNameForGameID(int nGameID)
    {
        for (const CoreGameData& thisGame : GameRegistry)
        {
            if (thisGame.nGameId == nGameID)
            {
                return thisGame.strGameDescription.c_str();
            }
        }

        OutputDebugString(L"Warning: Game ID not found in game registry!\n");
        return L"Unknown Game";
    }
    
    bool FindConstructorForGameID(int nGameID, GameConstructor& gameConstructor)
    {
        for (const CoreGameData& thisGame : GameRegistry)
        {
            if (thisGame.nGameId == nGameID)
            {
                gameConstructor = thisGame.gameConstructor;

                return true;
            }
        }

        OutputDebugString(L"Warning: Game ID not found in game registry!\n");
        return false;
    }

    std::vector<sSupportedGameToFileMap> rgGameToFileMap;

    std::vector<sSupportedGameToFileMap>& GetGameToFileMap()
    {
        if (rgGameToFileMap.size() == 0)
        {
            for (const CoreGameData& thisGame : GameRegistry)
            {
                if (thisGame.rgFileOpenData.nInternalGameIndex != NUM_GAMES)
                {
                    rgGameToFileMap.push_back(thisGame.rgFileOpenData);
                }
            }
        }

        return rgGameToFileMap;
    }

    bool FindRuleDataForGameID(int nGameID, GetRuleFunc& GetRule, GetNextRuleFunc& GetNextRule, GetRuleCtrFunc& GetRuleCtr, ResetRuleCtrFunc& ResetRuleCtr)
    {
        for (const CoreGameData& thisGame : GameRegistry)
        {
            if (thisGame.nGameId == nGameID)
            {
                GetRule = thisGame.GetRule;
                GetNextRule = thisGame.GetNextRule;
                GetRuleCtr = thisGame.GetRuleCtr;
                ResetRuleCtr = thisGame.ResetRuleCtr;

                return true;
            }
        }

        OutputDebugString(L"Warning: Game ID not found in game registry!\n");
        return false;
    }

    void GetMatchingGamesFromFilePath(LPCWSTR pszPath, std::vector<SupportedGamesList>& vMatchingFileGames, std::vector<SupportedGamesList>& vMatchingDirectoryGames)
    {
        LPCWSTR pszJustFileName = wcsrchr(pszPath, L'\\');

        if (pszJustFileName)
        {
            pszJustFileName = pszJustFileName + 1;

            for (const CoreGameData& thisGame : GameRegistry)
            {
                if ((thisGame.rgFileOpenData.nInternalGameIndex == DEVMODE_A) ||
                    (thisGame.rgFileOpenData.nInternalGameIndex == DEVMODE_DIR))
                {
                    // These are very special and would just match everything
                    continue;
                }
                else if (thisGame.rgFileOpenData.nInternalGameIndex != NUM_GAMES) // file-based
                {
                    wchar_t szSpecString[MAX_PATH];
                    wcscpy(szSpecString, thisGame.rgFileOpenData.strGameFilterString.data());
                    LPWSTR pszCurrent = szSpecString;
                    LPWSTR pszBars = wcsstr(pszCurrent, L"|");

                    if (pszBars)
                    {
                        // We have pattern(s)
                        pszCurrent = pszBars + 1;
                        pszBars = wcsstr(pszCurrent, L"|");
                        if (pszBars)
                        {
                            pszBars[0] = L';'; // by swapping it out we simplify the stride

                            LPWSTR pszSemi = wcsstr(pszCurrent, L";");
                            while (pszSemi)
                            {
                                pszSemi[0] = 0;

                                if (PathMatchSpec(pszJustFileName, pszCurrent))
                                {
                                    CString strMatched;
                                    strMatched.Format(L"Drop matches FILE: %s\r\n", thisGame.rgFileOpenData.strGameFriendlyName.data());
                                    OutputDebugString(strMatched);
                                    vMatchingFileGames.push_back(static_cast<SupportedGamesList>(thisGame.rgFileOpenData.nInternalGameIndex));
                                }

                                pszCurrent = pszSemi + 1;
                                pszSemi = wcsstr(pszCurrent, L";");
                            }
                        }
                    }
                }
                else // directory-based
                {
                    sFileRule firstRule = thisGame.GetRule(0);

                    if ((PathMatchSpec(pszJustFileName, firstRule.szFileName)) ||
                        (firstRule.fHasAltName && PathMatchSpec(pszJustFileName, firstRule.szAltFileName)))
                    {
                        CString strMatched;
                        strMatched.Format(L"Drop matches DIRECTORY: %s\r\n", thisGame.strGameDescription.data());
                        OutputDebugString(strMatched);
                        vMatchingDirectoryGames.push_back(static_cast<SupportedGamesList>(thisGame.nGameId));
                    }
                }
            }
        }

        return;
    }

    void SetExtraLoadingDataForGame(int nGameFlag, LPCWSTR pszFileNameLowercase, int& nGameRule)
    {
        switch (nGameFlag)
        {
            case AOF3_A:
                CGame_AOF3_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case AsuraBuster_A:
                CGame_AsuraBuster_A_DIR::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case AvgrsGS_A:
                CGame_AvgrsGS_A_DIR::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case CVS1_A:
                CGame_CVS1_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case FatalFury2_A:
                CGame_FatalFury2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case FightFever_A:
                CGame_FightFever_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case FightersHistory_A:
                CGame_FightersHistory_A_DIR::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case HSF2_A:
                CGame_HSF2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case JOJOS_A:
                nGameRule = static_cast<int>((wcscmp(pszFileNameLowercase, L"50") == 0) ? JojosLoadingKey::JOJOS_A_50_ROMKEY : JojosLoadingKey::JOJOS_A_51_ROMKEY);
                break;
            case JOJOS_US_A:
                nGameRule = static_cast<int>((wcscmp(pszFileNameLowercase, L"50") == 0) ? JojosLoadingKey::JOJOS_A_50_ROMKEY : JojosLoadingKey::JOJOS_US_A_51_ROMKEY);
                break;
            case KarnovsR_A:
                CGame_KarnovsR_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case KOF95_A:
                CGame_KOF95_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case KOF96_A:
                CGame_KOF96_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case KOF99_A:
            case KOF99AE_A:
                CGame_KOF99_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case KOF02UM_S:
                CGame_KOF02UM_S::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case KOF03_A:
                CGame_KOF03_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case MK1_A:
                CGame_MK1_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case MK2_A:
                CGame_MK2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case MK2_SNES:
                CGame_MK2_SNES::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case MSH_A:
                CGame_MSH_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case MSHVSF_A:
            case MSHVSF_S:
                CGame_MSHVSF_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case REDEARTH_A:
                CGame_REDEARTH_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SAMSHO1_A:
                CGame_SAMSHO1_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SAMSHO5_A:
            case SAMSHO5X_A:
                CGame_SAMSHO5_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SAMSHO5SP_A:
            case SAMSHO5SP_S:
                CGame_SAMSHO5SP_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SFA2_A:
            case SFA2_Hack_A:
                CGame_SFA2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SFIII3_A:
                CGame_SFIII3_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SF1_A:
                CGame_StreetFighter_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SF2HF_A:
                CGame_SF2HF_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SF2CE_A:
                CGame_SF2CE_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SF2WW_A:
                CGame_SF2WW_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SFTM_A:
                CGame_SFTM_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SSF2_A:
                CGame_SSF2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SSF2T_GBA:
                CGame_SSF2T_GBA::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SSF2T_A:
            case SSF2T_NL:
                CGame_SSF2T_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case SurvivalArts_A:
                CGame_SurvivalArts_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case UMK3_A:
                CGame_UMK3_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case VampireNightWarriors_A:
                CGame_VampireNightWarriors_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case VHUNT2_A:
                CGame_VHUNT2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            case VENTURE_A:
                CGame_VENTURE_A::SetSpecialRuleForFileName(pszFileNameLowercase);
                break;
            default:
                break;
        }
    }
};

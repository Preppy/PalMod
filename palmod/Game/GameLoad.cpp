#include "StdAfx.h"
#include "GameLoad.h"
#include "..\CRC32.h"

#include "Game_AODK_A.h"
#include "Game_AOF1_A.h"
#include "Game_AOF3_A.h"
#include "Game_AquaPlus_P.h"
#include "Game_AsuraBuster_A_DIR.h"
#include "Game_AvgrsGS_A_DIR.h"
#include "Game_BASARA_P.h"
#include "Game_BattleFlipShot_A.h"
#include "Game_BlazBlueCF_S.h"
#include "Game_Bleach_DS.h"
#include "Game_BMKNS_SNES.h"
#include "Game_Breakers_A.h"
#include "Game_BSSMSJR_SNES.h"
#include "Game_BtlKRoad_A_DIR.h"
#include "Game_CFTE_SNES.h"
#include "Game_COTA_A.h"
#include "Game_CVS1_A.h"
#include "Game_CVS2_A.h"
#include "Game_Cyberbots_A.h"
#include "Game_DaemonBride_NL.h"
#include "Game_DaemonBrideAG_NL.h"
#include "Game_DanKuGa_A.h"
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
#include "Game_FotNS_P.h"
#include "Game_GalaxyFight_A.h"
#include "Game_Garou_A.h"
#include "Game_Garou_S.h"
#include "Game_Gowcaizer_A.h"
#include "Game_GGDS_NDS.h"
#include "Game_GGML_P.h"
#include "Game_GGXXACR_S.h"
#include "Game_GGXXACR_P.h"
#include "Game_GGXXR_S.h"
#include "Game_GUNDAM_SNES.h"
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
#include "Game_KOF99AE_A.h"
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
#include "Game_MK1_SNES.h"
#include "Game_MK2_A.h"
#include "Game_MK2_SNES.h"
#include "Game_MMPR_SNES.h"
#include "Game_MMX_SNES.h"
#include "Game_MMX2_SNES.h"
#include "Game_MMX3_SNES.h"
#include "Game_MSH_A.h"
#include "Game_MSHVSF_A.h"
#include "Game_MSHWOTG_SNES.h"
#include "Game_MVC_A.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_A_DIR.h"
#include "Game_MVC2_D.h"
#include "Game_MVC2_P.h"
#include "Game_MWarr_A_DIR.h"
#include "Game_NBHID_S.h"
#include "Game_NeoBomberman_A.h"
#include "Game_NEOGEO_A.h"
#include "Game_NGBC_A.h"
#include "Game_NINJAMASTERS_A.h"
#include "Game_P4AU_NESICA.h"
#include "Game_P4AU_STEAM.h"
#include "Game_PrimalRage_SNES.h"
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
#include "Game_SF2CE_A.h"
#include "Game_SF2HF_A.h"
#include "Game_SHAQFU_SNES.h"
#include "Game_SPF2T_A.h"
#include "Game_SSF2T_A.h"
#include "Game_SSF2T_GBA.h"
#include "Game_StreetFighter_A.h"
#include "Game_SurvivalArts_A.h"
#include "Game_SVG_SNES.h"
#include "Game_SVCPLUSA_A.h"
#include "Game_TMNTTF_SNES.h"
#include "Game_TopF2005_Sega.h"
#include "Game_UMK3_A.h"
#include "Game_UMK3_DS.h"
#include "Game_UMK3_SNES.h"
#include "Game_UNICLR_A.h"
#include "Game_Venture_A.h"
#include "Game_Venture_A_DIR.h"
#include "Game_VampireHunter_A.h"
#include "Game_VampireNightWarriors_A.h"
#include "Game_VHUNT2_A.h"
#include "Game_VSAV_A.h"
#include "Game_VSAV2_A.h"
#include "Game_WakuWaku7_A.h"
#include "Game_Windjammers_A.h"
#include "Game_XMMA_SNES.h"
#include "Game_XMVSF_A.h"

#include "..\resource.h"
#include "..\palmod.h"

// Once gamedef.h is updated, you need to update this and in palmoddlg_file.cpp
static_assert(ARRAYSIZE(g_GameFriendlyName) == 185, "Increment this value check after you add in the new header above and the relevent game loading functions below.");

void StrRemoveNonASCII(wchar_t* pszOutput, uint32_t ccSize, LPCWSTR pszInput, bool fForceUpperCase /* = false*/)
{
    uint32_t iStrOutputIndex = 0;

    for (uint32_t iStrIndex = 0; iStrIndex < ccSize; iStrIndex++)
    {
        if (!pszInput[iStrIndex])
        {
            break;
        }

        if (((pszInput[iStrIndex] >= '0') && (pszInput[iStrIndex] <= '9')) || // numbers
            ((pszInput[iStrIndex] >= 'A') && (pszInput[iStrIndex] <= 'Z')))   // upper case
        {
            pszOutput[iStrOutputIndex++] = pszInput[iStrIndex];
        }
        else if ((pszInput[iStrIndex] >= 'a') && (pszInput[iStrIndex] <= 'z'))
        {
            if (fForceUpperCase)
            {
                pszOutput[iStrOutputIndex++] = pszInput[iStrIndex] - 32;
            }
            else
            {
                pszOutput[iStrOutputIndex++] = pszInput[iStrIndex];
            }
        }
    }

    pszOutput[iStrOutputIndex] = 0;
}

void StruprRemoveNonASCII(wchar_t* pszOutput, uint32_t ccSize, LPCWSTR pszInput)
{
    StrRemoveNonASCII(pszOutput, ccSize, pszInput, true);
}

CGameLoad::CGameLoad()
{
}

CGameLoad::~CGameLoad()
{
}

BOOL CGameLoad::SetGame(int nGameFlag)
{
    switch (nGameFlag)
    {
    case AODK_A:
    {
        GetRule = &CGame_AODK_A::GetRule;
        return TRUE;
    }
    case AOF1_A:
    {
        GetRule = &CGame_AOF1_A::GetRule;
        return TRUE;
    }
    case AOF3_A:
    {
        GetRule = &CGame_AOF3_A::GetRule;
        return TRUE;
    }
    case AquaPlus_NL:
    {
        GetRuleCtr = &CGame_AquaPlus_NL::GetRuleCtr;
        ResetRuleCtr = &CGame_AquaPlus_NL::ResetRuleCtr;
        GetRule = &CGame_AquaPlus_NL::GetRule;
        GetNextRule = &CGame_AquaPlus_NL::GetNextRule;

        return TRUE;
    }
    case AquaPlus_P:
    {
        GetRuleCtr = &CGame_AquaPlus_P::GetRuleCtr;
        ResetRuleCtr = &CGame_AquaPlus_P::ResetRuleCtr;
        GetRule = &CGame_AquaPlus_P::GetRule;
        GetNextRule = &CGame_AquaPlus_P::GetNextRule;

        return TRUE;
    }
    case AsuraBuster_A:
    {
        GetRule = &CGame_AsuraBuster_A_DIR::GetRule;
        return TRUE;
    }
    case AvgrsGS_A:
    {
        GetRule = &CGame_AvgrsGS_A_DIR::GetRule;
        return TRUE;
    }
    case BASARA_P:
    {
        GetRule = &CGame_BASARA_P::GetRule;
        return TRUE;
    }
    case BattleFlipShot_A:
    {
        GetRule = &CGame_BattleFlipShot_A::GetRule;
        return TRUE;
    }
    case BlazBlueCF_S:
    {
        GetRuleCtr = &CGame_BlazBlueCF_S::GetRuleCtr;
        ResetRuleCtr = &CGame_BlazBlueCF_S::ResetRuleCtr;
        GetRule = &CGame_BlazBlueCF_S::GetRule;
        GetNextRule = &CGame_BlazBlueCF_S::GetNextRule;

        return TRUE;
    }    
    case BLEACH_DS:
    {
        GetRule = &CGame_BLEACH_DS::GetRule;
        return TRUE;
    }
    case BMKNS_SNES:
    {
        GetRule = &CGame_BMKNS_SNES::GetRule;
        return TRUE;
    }
    case BREAKERS_A:
    {
        GetRule = &CGame_BREAKERS_A::GetRule;
        return TRUE;
    }
    case BSSMSJR_SNES:
    {
        GetRule = &CGame_BSSMSJR_SNES::GetRule;
        return TRUE;
    }
    case BtlKRoad_A:
    {
        GetRule = &CGame_BtlKRoad_A_DIR::GetRule;
        return TRUE;
    }
    case CFTE_SNES:
    {
        GetRule = &CGame_CFTE_SNES::GetRule;
        return TRUE;
    }
    case COTA_A:
    {
        GetRule = &CGame_COTA_A::GetRule;
        return TRUE;
    }
    case CVS1_A:
    {
        GetRule = &CGame_CVS1_A::GetRule;
        return TRUE;
    }
    case CVS2_A:
    {
        GetRule = &CGame_CVS2_A::GetRule;
        return TRUE;
    }
    case CYBERBOTS_A:
    {
        GetRule = &CGame_Cyberbots_A::GetRule;
        return TRUE;
    }
    case DaemonBride_NL:
    {
        GetRuleCtr = &CGame_DaemonBride_NL::GetRuleCtr;
        ResetRuleCtr = &CGame_DaemonBride_NL::ResetRuleCtr;
        GetRule = &CGame_DaemonBride_NL::GetRule;
        GetNextRule = &CGame_DaemonBride_NL::GetNextRule;

        return TRUE;
    }
    case DaemonBrideAG_NL:
    {
        GetRuleCtr = &CGame_DaemonBrideAG_NL::GetRuleCtr;
        ResetRuleCtr = &CGame_DaemonBrideAG_NL::ResetRuleCtr;
        GetRule = &CGame_DaemonBrideAG_NL::GetRule;
        GetNextRule = &CGame_DaemonBrideAG_NL::GetNextRule;

        return TRUE;
    }
    case DANKUGA_A:
    {
        GetRuleCtr = &CGame_DanKuGa_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_DanKuGa_A_DIR::ResetRuleCtr;
        GetRule = &CGame_DanKuGa_A_DIR::GetRule;
        GetNextRule = &CGame_DanKuGa_A_DIR::GetNextRule;

        return TRUE;
    }
    case DBFCI_A:
    {
        GetRuleCtr = &CGame_DBFCI_A::GetRuleCtr;
        ResetRuleCtr = &CGame_DBFCI_A::ResetRuleCtr;
        GetRule = &CGame_DBFCI_A::GetRule;
        GetNextRule = &CGame_DBFCI_A::GetNextRule;

        return TRUE;
    }
    case DBZEB_DS:
    {
        GetRule = &CGame_DBZEB_DS::GetRule;
        return TRUE;
    }
    case DBZHD_SNES:
    {
        GetRule = &CGame_DBZHD_SNES::GetRule;
        return TRUE;
    }
    case DEVMODE_DIR:
    {
        GetRule = &CGame_DevMode_DIR::GetRule;
        return TRUE;
    }
    case DOUBLEDRAGON_A:
    {
        GetRule = &CGame_DOUBLEDRAGON_A::GetRule;
        return TRUE;
    }
    case FatalFury1_A:
    {
        GetRule = &CGame_FatalFury1_A::GetRule;
        return TRUE;
    }
    case FatalFury2_A:
    {
        GetRule = &CGame_FatalFury2_A::GetRule;
        return TRUE;
    }
    case FatalFuryS_A:
    {
        GetRule = &CGame_FatalFuryS_A::GetRule;
        return TRUE;
    }
    case FatalFuryS_SNES:
    {
        GetRule = &CGame_FatalFuryS_SNES::GetRule;
        return TRUE;
    }
    case FatalFury3_A:
    {
        GetRule = &CGame_FatalFury3_A::GetRule;
        return TRUE;
    }
    case FotNS_P:
    {
        GetRule = &CGame_FotNS_P::GetRule;
        return TRUE;
    }    
    case GalaxyFight_A:
    {
        GetRule = &CGame_GalaxyFight_A::GetRule;
        return TRUE;
    }
    case Garou_A:
    {
        GetRule = &CGame_Garou_A::GetRule;
        return TRUE;
    }
    case GarouP_A:
    {
        GetRule = &CGame_GarouP_A::GetRule;
        return TRUE;
    }
    case Garou_S:
    {
        GetRule = &CGame_Garou_S::GetRule;
        return TRUE;
    }
    case GEMFIGHTER_A:
    {
        GetRule = &CGame_GEMFIGHTER_A::GetRule;
        return TRUE;
    }
    case Gowcaizer_A:
    {
        GetRule = &CGame_Gowcaizer_A::GetRule;
        return TRUE;
    }
    case GGDS_NDS:
    {
        GetRule = &CGame_GGDS_NDS::GetRule;
        return TRUE;
    }
    case GGML_P:
    {
        GetRuleCtr = &CGame_GGML_P::GetRuleCtr;
        ResetRuleCtr = &CGame_GGML_P::ResetRuleCtr;
        GetRule = &CGame_GGML_P::GetRule;
        GetNextRule = &CGame_GGML_P::GetNextRule;

        return TRUE;
    }
    case GGXXACR_S:
    {
        GetRuleCtr = &CGame_GGXXACR_S::GetRuleCtr;
        ResetRuleCtr = &CGame_GGXXACR_S::ResetRuleCtr;
        GetRule = &CGame_GGXXACR_S::GetRule;
        GetNextRule = &CGame_GGXXACR_S::GetNextRule;

        return TRUE;
    }
    case GGXXACR_P:
    {
        GetRuleCtr = &CGame_GGXXACR_P::GetRuleCtr;
        ResetRuleCtr = &CGame_GGXXACR_P::ResetRuleCtr;
        GetRule = &CGame_GGXXACR_P::GetRule;
        GetNextRule = &CGame_GGXXACR_P::GetNextRule;

        return TRUE;
    }
    case GGXXR_S:
    {
        GetRuleCtr = &CGame_GGXXR_S::GetRuleCtr;
        ResetRuleCtr = &CGame_GGXXR_S::ResetRuleCtr;
        GetRule = &CGame_GGXXR_S::GetRule;
        GetNextRule = &CGame_GGXXR_S::GetNextRule;

        return TRUE;
    }
    case GUNDAM_SNES:
    {
        GetRule = &CGame_GUNDAM_SNES::GetRule;
        return TRUE;
    }
    case HSF2_A:
    {
        GetRule = &CGame_HSF2_A::GetRule;
        return TRUE;
    }
    case JCHAN_A:
    {
        GetRule = &CGame_JCHAN_A::GetRule;
        return TRUE;
    }
    case JOJOS_A:
    case JOJOS_US_A:
    {
        GetRule = &CGame_JOJOS_A::GetRule;
        return TRUE;
    }
    case JOJOS_A_DIR_50:
    {
        GetRuleCtr = &CGame_JOJOS_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_JOJOS_A_DIR::ResetRuleCtr;
        GetRule = &CGame_JOJOS_A_DIR::GetRule50;
        GetNextRule = &CGame_JOJOS_A_DIR::GetNextRule50;

        return TRUE;
    }
    case JOJOS_A_DIR_51:
    {
        GetRuleCtr = &CGame_JOJOS_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_JOJOS_A_DIR::ResetRuleCtr;
        GetRule = &CGame_JOJOS_A_DIR::GetRule51;
        GetNextRule = &CGame_JOJOS_A_DIR::GetNextRule51;

        return TRUE;
    }
    case JOJOS_US_A_DIR_51:
    {
        GetRuleCtr = &CGame_JOJOS_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_JOJOS_A_DIR::ResetRuleCtr;
        GetRule = &CGame_JOJOS_A_DIR::GetRule51RegOn;
        GetNextRule = &CGame_JOJOS_A_DIR::GetNextRule51RegOn;

        return TRUE;
    }
    case JOJOSRPG_SNES:
    {
        GetRule = &CGame_JOJOSRPG_SNES::GetRule;
        return TRUE;
    }
    case JusticeLeagueTF_SNES:
    {
        GetRule = &CGame_JusticeLeagueTF_SNES::GetRule;
        return TRUE;
    }
    case KabukiKlash_A:
    {
        GetRule = &CGame_KabukiKlash_A::GetRule;
        return TRUE;
    }
    case KarnovsR_A:
    {
        GetRule = &CGame_KarnovsR_A::GetRule;
        return TRUE;
    }
    case KI_SNES:
    {
        GetRule = &CGame_KI_SNES::GetRule;
        return TRUE;
    }
    case KIZUNA_A:
    {
        GetRule = &CGame_Kizuna_A::GetRule;
        return TRUE;
    }
    case KOF94_A:
    {
        GetRule = &CGame_KOF94_A::GetRule;
        return TRUE;
    }
    case KOF95_A:
    {
        GetRule = &CGame_KOF95_A::GetRule;
        return TRUE;
    }
    case KOF96_A:
    {
        GetRule = &CGame_KOF96_A::GetRule;
        return TRUE;
    }
    case KOF97_A:
    {
        GetRule = &CGame_KOF97_A::GetRule;
        return TRUE;
    }
    case KOF97AE_A:
    {
        GetRule = &CGame_KOF97AE_A::GetRule;
        return TRUE;
    }
    case KOF97GM_S:
    {
        GetRule = &CGame_KOF97GM_S::GetRule;
        return TRUE;
    }
    case KOF98_A:
    {
        GetRule = &CGame_KOF98_A::GetRule;
        return TRUE;
    }
    case KOF98AE2016_A:
    {
        GetRule = &CGame_KOF98AE2016_A::GetRule;
        return TRUE;
    }
    case KOF99AE_A:
    {
        GetRule = &CGame_KOF99AE_A::GetRule;
        return TRUE;
    }
    case KOF00N_A:
    {
        GetRule = &CGame_KOF00N_A::GetRule;
        return TRUE;
    }
    case KOF01_A:
    {
        GetRule = &CGame_KOF01_A::GetRule;
        return TRUE;
    }
    case KOF02_A:
    {
        GetRule = &CGame_KOF02_A::GetRule;
        return TRUE;
    }
    case KOF02PS2_A:
    {
        GetRule = &CGame_KOF02PS2_A::GetRule;
        return TRUE;
    }
    case KOF02UM_S:
    {
        GetRule = &CGame_KOF02UM_S::GetRule;
        return TRUE;
    }
    case KOF02UM_S_DIR_8888:
    {
        GetRuleCtr = &CGame_KOF02UM_S_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_KOF02UM_S_DIR::ResetRuleCtr;
        GetRule = &CGame_KOF02UM_S_DIR::GetRule_8888;
        GetNextRule = &CGame_KOF02UM_S_DIR::GetNextRule_8888;

        return TRUE;
    }
    case KOF02UM_S_DIR_BGR555:
    {
        GetRuleCtr = &CGame_KOF02UM_S_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_KOF02UM_S_DIR::ResetRuleCtr;
        GetRule = &CGame_KOF02UM_S_DIR::GetRule_BGR555;
        GetNextRule = &CGame_KOF02UM_S_DIR::GetNextRule_BGR555;

        return TRUE;
    }
    case KOF02UM_S_DIR_RGB555:
    {
        GetRuleCtr = &CGame_KOF02UM_S_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_KOF02UM_S_DIR::ResetRuleCtr;
        GetRule = &CGame_KOF02UM_S_DIR::GetRule_RGB555;
        GetNextRule = &CGame_KOF02UM_S_DIR::GetNextRule_RGB555;

        return TRUE;
    }
    case KOF03_A:
    {
        GetRule = &CGame_KOF03_A::GetRule;
        return TRUE;
    }
    case KOFXI_A:
    {
        GetRule = &CGame_KOFXI_A::GetRule;
        return TRUE;
    }
    case KOTM_A:
    {
        GetRule = &CGame_KOTM_A::GetRule;
        return TRUE;
    }
    case LASTBLADE_A:
    case LASTBLADE_S:
    {
        GetRule = &CGame_LASTBLADE_A::GetRule;
        return TRUE;
    }
    case LASTBLADE2_A:
    case LASTBLADE2_S:
    {
        GetRule = &CGame_LASTBLADE2_A::GetRule;
        return TRUE;
    }
    case MAGICALDROPII_A:
    {
        GetRule = &CGame_MAGICALDROPII_A::GetRule;
        return TRUE;
    }
    case MAGICALDROPIII_A:
    {
        GetRule = &CGame_MAGICALDROPIII_A::GetRule;
        return TRUE;
    }
    case MartialMasters_A:
    {
        GetRule = &CGame_MartialMasters_A::GetRule;
        return TRUE;
    }
    case MATRIMELEE_A:
    {
        GetRule = &CGame_Matrimelee_A::GetRule;
        return TRUE;
    }
    case MAAB_A:
    {
        GetRuleCtr = &CGame_MAAB_A::GetRuleCtr;
        ResetRuleCtr = &CGame_MAAB_A::ResetRuleCtr;
        GetRule = &CGame_MAAB_A::GetRule;
        GetNextRule = &CGame_MAAB_A::GetNextRule;

        return TRUE;
    }
    case MBAACC_S:
    {
        GetRuleCtr = &CGame_MBAACC_S::GetRuleCtr;
        ResetRuleCtr = &CGame_MBAACC_S::ResetRuleCtr;
        GetRule = &CGame_MBAACC_S::GetRule;
        GetNextRule = &CGame_MBAACC_S::GetNextRule;

        return TRUE;
    }
    case MBTL_A:
    {
        GetRuleCtr = &CGame_MBTL_A::GetRuleCtr;
        ResetRuleCtr = &CGame_MBTL_A::ResetRuleCtr;
        GetRule = &CGame_MBTL_A::GetRule;
        GetNextRule = &CGame_MBTL_A::GetNextRule;

        return TRUE;
    }
    case MK1_SNES:
    {
        GetRule = &CGame_MK1_SNES::GetRule;
        return TRUE;
    }
    case MK2_A:
    {
        GetRule = &CGame_MK2_A::GetRule;
        return TRUE;
    }
    case MK2_SNES:
    {
        GetRule = &CGame_MK2_SNES::GetRule;
        return TRUE;
    }
    case MMPR_SNES:
    {
        GetRule = &CGame_MMPR_SNES::GetRule;
        return TRUE;
    }
    case MMX_SNES:
    {
        GetRule = &CGame_MMX_SNES::GetRule;
        return TRUE;
    }
    case MMX2_SNES:
    {
        GetRule = &CGame_MMX2_SNES::GetRule;
        return TRUE;
    }
    case MMX3_SNES:
    {
        GetRule = &CGame_MMX3_SNES::GetRule;
        return TRUE;
    }
    case MSH_A:
    {
        GetRule = &CGame_MSH_A::GetRule;
        return TRUE;
    }
    case MSHVSF_A:
    {
        GetRule = &CGame_MSHVSF_A::GetRule;
        return TRUE;
    }
    case MSHWOTG_SNES:
    {
        GetRule = &CGame_MSHWOTG_SNES::GetRule;
        return TRUE;
    }
    case MVC_A:
    {
        GetRule = &CGame_MVC_A::GetRule;
        return TRUE;
    }
    case MVC2_A:
    {
        GetRule = &CGame_MVC2_A::GetRule;
        return TRUE;
    }
    case MVC2_A_DIR:
    {
        GetRuleCtr = &CGame_MVC2_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_A_DIR::ResetRuleCtr;
        GetRule = &CGame_MVC2_A_DIR::GetRule;
        GetNextRule = &CGame_MVC2_A_DIR::GetNextRule;

        return TRUE;
    }
    case MVC2_D:
    case MVC2_D_16:
    {
        GetRuleCtr = &CGame_MVC2_D::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_D::ResetRuleCtr;
        GetRule = &CGame_MVC2_D::GetRule;
        GetNextRule = &CGame_MVC2_D::GetNextRule;

        return TRUE;
    }
    case MVC2_P:
    {
        GetRuleCtr = &CGame_MVC2_P::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_P::ResetRuleCtr;
        GetRule = &CGame_MVC2_P::GetRule;
        GetNextRule = &CGame_MVC2_P::GetNextRule;

        return TRUE;
    }
    case MWARR_A:
    {
        GetRuleCtr = &CGame_MWarr_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_MWarr_A_DIR::ResetRuleCtr;
        GetRule = &CGame_MWarr_A_DIR::GetRule;
        GetNextRule = &CGame_MWarr_A_DIR::GetNextRule;

        return TRUE;
    }
    case NBHID_NL:
    {
        GetRuleCtr = &CGame_NBHID_NL::GetRuleCtr;
        ResetRuleCtr = &CGame_NBHID_NL::ResetRuleCtr;
        GetRule = &CGame_NBHID_NL::GetRule;
        GetNextRule = &CGame_NBHID_NL::GetNextRule;

        return TRUE;
    }
    case NBHID_P:
    {
        GetRuleCtr = &CGame_NBHID_P::GetRuleCtr;
        ResetRuleCtr = &CGame_NBHID_P::ResetRuleCtr;
        GetRule = &CGame_NBHID_P::GetRule;
        GetNextRule = &CGame_NBHID_P::GetNextRule;

        return TRUE;
    }
    case NBHID_S:
    {
        GetRuleCtr = &CGame_NBHID_S::GetRuleCtr;
        ResetRuleCtr = &CGame_NBHID_S::ResetRuleCtr;
        GetRule = &CGame_NBHID_S::GetRule;
        GetNextRule = &CGame_NBHID_S::GetNextRule;

        return TRUE;
    }
    case NeoBomberman_A:
    {
        GetRule = &CGame_NeoBomberman_A::GetRule;
        return TRUE;
    }
    case NEOGEO_A:
    {
        GetRule = &CGame_NEOGEO_A::GetRule;
        return TRUE;
    }
    case NGBC_A:
    {
        GetRule = &CGame_NGBC_A::GetRule;
        return TRUE;
    }
    case NINJAMASTERS_A:
    {
        GetRule = &CGame_NINJAMASTERS_A::GetRule;
        return TRUE;
    }   
    case P4AU_NESICA:
    {
        GetRuleCtr = &CGame_P4AU_NESICA::GetRuleCtr;
        ResetRuleCtr = &CGame_P4AU_NESICA::ResetRuleCtr;
        GetRule = &CGame_P4AU_NESICA::GetRule;
        GetNextRule = &CGame_P4AU_NESICA::GetNextRule;

        return TRUE;
    }
    case P4AU_STEAM:
    {
        GetRuleCtr = &CGame_P4AU_STEAM::GetRuleCtr;
        ResetRuleCtr = &CGame_P4AU_STEAM::ResetRuleCtr;
        GetRule = &CGame_P4AU_STEAM::GetRule;
        GetNextRule = &CGame_P4AU_STEAM::GetNextRule;

        return TRUE;
    }
    case PrimalRage_SNES:
    {
        GetRule = &CGame_PrimalRage_SNES::GetRule;
        return TRUE;
    }
    case RANMACRH_SNES:
    {
        GetRule = &CGame_RANMACRH_SNES::GetRule;
        return TRUE;
    }
    case RANMAHB_SNES:
    {
        GetRule = &CGame_RANMAHB_SNES::GetRule;
        return TRUE;
    }
    case RBFF1_A: 
    {
        GetRule = &CGame_RBFF1_A::GetRule;
        return TRUE;
    }
    case RBFF2_A:
    {
        GetRule = &CGame_RBFF2_A::GetRule;
        return TRUE;
    }
    case RBFFS_A:
    {
        GetRule = &CGame_RBFFS_A::GetRule;
        return TRUE;
    }
    case REDEARTH_A:
    {
        GetRule = &CGame_REDEARTH_A::GetRule;
        return TRUE;
    }
    case REDEARTH_A_DIR_30:
    {
        GetRuleCtr = &CGame_RedEarth_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_RedEarth_A_DIR::ResetRuleCtr;
        GetRule = &CGame_RedEarth_A_DIR::GetRule_30;
        GetNextRule = &CGame_RedEarth_A_DIR::GetNextRule_30;

        return TRUE;
    }
    case REDEARTH_A_DIR_31:
    {
        GetRuleCtr = &CGame_RedEarth_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_RedEarth_A_DIR::ResetRuleCtr;
        GetRule = &CGame_RedEarth_A_DIR::GetRule_31;
        GetNextRule = &CGame_RedEarth_A_DIR::GetNextRule_31;

        return TRUE;
    }
    case REDEARTH_A_DIR_50:
    {
        GetRuleCtr = &CGame_RedEarth_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_RedEarth_A_DIR::ResetRuleCtr;
        GetRule = &CGame_RedEarth_A_DIR::GetRule_50;
        GetNextRule = &CGame_RedEarth_A_DIR::GetNextRule_50;

        return TRUE;
    }
    case RODSM2_A:
    {
        GetRule = &CGame_RODSM2_A::GetRule;
        return TRUE;
    }
    case ROTD_A:
    {
        GetRule = &CGame_ROTD_A::GetRule;
        return TRUE;
    }
    case SAMSHO1_A:
    {
        GetRule = &CGame_SAMSHO1_A::GetRule;
        return TRUE;
    }
    case SAMSHO2_A:
    {
        GetRule = &CGame_SAMSHO2_A::GetRule;
        return TRUE;
    }
    case SAMSHO3_A:
    {
        GetRule = &CGame_SAMSHO3_A::GetRule;
        return TRUE;
    }
    case SAMSHO4_A:
    {
        GetRule = &CGame_SAMSHO4_A::GetRule;
        return TRUE;
    }
    case SAMSHO5_A:
    case SAMSHO5X_A:
    {
        GetRule = &CGame_SAMSHO5_A::GetRule;
        return TRUE;
    }
    case SAMSHO5SP_A:
    case SAMSHO5SP_S:
    {
        GetRule = &CGame_SAMSHO5SP_A::GetRule;
        return TRUE;
    }
    case SAVAGEREIGN_A:
    {
        GetRule = &CGame_SAVAGEREIGN_A::GetRule;
        return TRUE;
    }
    case SDODGEBALL_A:
    {
        GetRule = &CGame_SDODGEBALL_A::GetRule;
        return TRUE;
    }
    case SFIII1_A:
    {
        GetRule = &CGame_SFIII1_A::GetRule;
        return TRUE;
    }
    case SFIII1_A_DIR:
    {
        GetRuleCtr = &CGame_SFIII1_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII1_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII1_A_DIR::GetRule;
        GetNextRule = &CGame_SFIII1_A_DIR::GetNextRule;

        return TRUE;
    }
    case SFIII2_A:
    {
        GetRule = &CGame_SFIII2_A::GetRule;
        return TRUE;
    }
    case SFIII2_A_DIR:
    {
        GetRuleCtr = &CGame_SFIII2_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII2_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII2_A_DIR::GetRule;
        GetNextRule = &CGame_SFIII2_A_DIR::GetNextRule;

        return TRUE;
    }
    case SFIII3_A:
    {
        GetRule = &CGame_SFIII3_A::GetRule;
        return TRUE;
    }
    case SFIII3_A_DIR_10:
    {
        GetRuleCtr = &CGame_SFIII3_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII3_A_DIR::GetRule10;
        GetNextRule = &CGame_SFIII3_A_DIR::GetNextRule10;

        return TRUE;
    }
    case SFIII3_A_DIR_4rd_10:
    {
        GetRuleCtr = &CGame_SFIII3_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII3_A_DIR::GetRule4_10;
        GetNextRule = &CGame_SFIII3_A_DIR::GetNextRule4_10;

        return TRUE;
    }
    case SFIII3_A_DIR_4rd:
    {
        GetRuleCtr = &CGame_SFIII3_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII3_A_DIR::GetRule4;
        GetNextRule = &CGame_SFIII3_A_DIR::GetNextRule4;

        return TRUE;
    }
    case SFIII3_A_DIR_51:
    {
        GetRuleCtr = &CGame_SFIII3_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII3_A_DIR::GetRule51;
        GetNextRule = &CGame_SFIII3_A_DIR::GetNextRule51;

        return TRUE;
    }
    case SFIII3_A_DIR_EX:
    {
        GetRuleCtr = &CGame_SFIII3_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII3_A_DIR::GetRule3Ex;
        GetNextRule = &CGame_SFIII3_A_DIR::GetNextRule3Ex;

        return TRUE;
    }
    case SFIII3_D:
    {
        GetRuleCtr = &CGame_SFIII3_D::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_D::ResetRuleCtr;
        GetRule = &CGame_SFIII3_D::GetRule;
        GetNextRule = &CGame_SFIII3_D::GetNextRule;

        return TRUE;
    }
    case SF1_A:
    {
        GetRule = &CGame_StreetFighter_A::GetRule;
        return TRUE;
    }
    case SF2CE_A:
    {
        GetRule = &CGame_SF2CE_A::GetRule;
        return TRUE;
    }
    case SF2HF_A:
    {
        GetRule = &CGame_SF2HF_A::GetRule;
        return TRUE;
    }
    case SFA1_A:
    {
        GetRule = &CGame_SFA1_A::GetRule;
        return TRUE;
    }
    case SFA2_A:
    case SFA2_Hack_A:
    {
        GetRule = &CGame_SFA2_A::GetRule;
        return TRUE;
    }
    case SFA3_A:
    {
        GetRule = &CGame_SFA3_A::GetRule;
        return TRUE;
    }
    case SFZ3U_A:
    {
        GetRule = &CGame_SFZ3U_A::GetRule;
        return TRUE;
    }
    case SHAQFU_SNES:
    {
        GetRule = &CGame_SHAQFU_SNES::GetRule;
        return TRUE;
    }
    case SPF2T_A:
    {
        GetRule = &CGame_SPF2T_A::GetRule;
        return TRUE;
    }
    case SSF2T_A:
    {
        GetRule = &CGame_SSF2T_A::GetRule;
        return TRUE;
    }
    case SSF2T_GBA:
    {
        GetRule = &CGame_SSF2T_GBA::GetRule;
        return TRUE;
    }
    case SurvivalArts_A:
    {
        GetRule = &CGame_SurvivalArts_A::GetRule;
        return TRUE;
    }
    case SVG_SNES:
    {
        GetRule = &CGame_SVG_SNES::GetRule;
        return TRUE;
    }
    case SVCPLUSA_A:
    {
        GetRule = &CGame_SVCPLUSA_A::GetRule;
        return TRUE;
    }
    case TMNTTF_SNES:
    {
        GetRule = &CGame_TMNTTF_SNES::GetRule;
        return TRUE;
    }
    case TOPF2005_SEGA:
    {
        GetRule = &CGame_TOPF2005_SEGA::GetRule;
        return TRUE;
    }
    case UMK3_A:
    {
        GetRule = &CGame_UMK3_A::GetRule;
        return TRUE;
    }
    case UMK3_DS:
    {
        GetRule = &CGame_UMK3_DS::GetRule;
        return TRUE;
    }
    case UMK3_SNES:
    {
        GetRule = &CGame_UMK3_SNES::GetRule;
        return TRUE;
    }
    case UNICLR_A:
    {
        GetRuleCtr = &CGame_UNICLR_A::GetRuleCtr;
        ResetRuleCtr = &CGame_UNICLR_A::ResetRuleCtr;
        GetRule = &CGame_UNICLR_A::GetRule;
        GetNextRule = &CGame_UNICLR_A::GetNextRule;

        return TRUE;
    }
    case VampireHunter_A:
    {
        GetRule = &CGame_VampireHunter_A::GetRule;
        return TRUE;
    }
    case VampireNightWarriors_A:
    {
        GetRule = &CGame_VampireNightWarriors_A::GetRule;
        return TRUE;
    }
    case VENTURE_A:
    {
        GetRule = &CGame_VENTURE_A::GetRule;
        return TRUE;
    }
    case VENTURE_A_DIR_31:
    {
        GetRuleCtr = &CGame_VENTURE_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_VENTURE_A_DIR::ResetRuleCtr;
        GetRule = &CGame_VENTURE_A_DIR::GetRule_31;
        GetNextRule = &CGame_VENTURE_A_DIR::GetNextRule_31;

        return TRUE;
    }
    case VENTURE_A_DIR_50:
    {
        GetRuleCtr = &CGame_VENTURE_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_VENTURE_A_DIR::ResetRuleCtr;
        GetRule = &CGame_VENTURE_A_DIR::GetRule_50;
        GetNextRule = &CGame_VENTURE_A_DIR::GetNextRule_50;

        return TRUE;
    }
    case VHUNT2_A:
    {
        GetRule = &CGame_VHUNT2_A::GetRule;
        return TRUE;
    }
    case VSAV_A:
    {
        GetRule = &CGame_VSAV_A::GetRule;
        return TRUE;
    }
    case VSAV2_A:
    {
        GetRule = &CGame_VSAV2_A::GetRule;
        return TRUE;
    }
    case WakuWaku7_A:
    {
        GetRule = &CGame_WakuWaku7_A::GetRule;
        return TRUE;
    }
    case WINDJAMMERS_A:
    {
        GetRule = &CGame_Windjammers_A::GetRule;
        return TRUE;
    }
    case XMMA_SNES:
    {
        GetRule = &CGame_XMMA_SNES::GetRule;
        return TRUE;
    }
    case XMVSF_A:
    {
        GetRule = &CGame_XMVSF_A::GetRule;
        return TRUE;
    }

    default:
        OutputDebugString(L"CGameLoad::SetGame:: BUGBUG: New game has not been properly added yet\n");
        return FALSE;
        break;
    }

    return FALSE;
}

CGameClass* CGameLoad::CreateGame(int nGameFlag, uint32_t nConfirmedROMSize, int nExtraGameData /* = 0 */, LPCWSTR pszFilePath /* = nullptr */)
{
    // IPS uses 24-bit values, so max patchable size is 16,777,215 bytes
    CGameClass::GameSizeAllowsIPSPatching(nConfirmedROMSize < 0xffffff);

    switch (nGameFlag)
    {
    case AODK_A:
    {
        return new CGame_AODK_A(nConfirmedROMSize);
    }
    case AOF1_A:
    {
        return new CGame_AOF1_A(nConfirmedROMSize);
    }
    case AOF3_A:
    {
        return new CGame_AOF3_A(nConfirmedROMSize);
    }
    case AquaPlus_NL:
    {
        return new CGame_AquaPlus_NL(nConfirmedROMSize);
    }
    case AquaPlus_P:
    {
        return new CGame_AquaPlus_P(nConfirmedROMSize);
    }
    case AsuraBuster_A:
    {
        return new CGame_AsuraBuster_A_DIR(nConfirmedROMSize);
    }
    case AvgrsGS_A:
    {
        return new CGame_AvgrsGS_A_DIR(nConfirmedROMSize);
    }
    case BASARA_P:
    {
        return new CGame_BASARA_P(nConfirmedROMSize);
    }
    case BattleFlipShot_A:
    {
        return new CGame_BattleFlipShot_A(nConfirmedROMSize);
    }
    case BlazBlueCF_S:
    {
        return new CGame_BlazBlueCF_S(nConfirmedROMSize);
    }
    case BLEACH_DS:
    {
        return new CGame_BLEACH_DS(nConfirmedROMSize);
    }
    case BMKNS_SNES:
    {
        return new CGame_BMKNS_SNES(nConfirmedROMSize);
    }
    case BREAKERS_A:
    {
        return new CGame_BREAKERS_A(nConfirmedROMSize);
    }
    case BSSMSJR_SNES:
    {
        return new CGame_BSSMSJR_SNES(nConfirmedROMSize);
    }
    case BtlKRoad_A:
    {
        return new CGame_BtlKRoad_A_DIR(nConfirmedROMSize);
    }
    case CFTE_SNES:
    {
        return new CGame_CFTE_SNES(nConfirmedROMSize);
    }
    case COTA_A:
    {
        return new CGame_COTA_A(nConfirmedROMSize);
    }
    case CVS1_A:
    {
        return new CGame_CVS1_A(nConfirmedROMSize);
    }
    case CVS2_A:
    {
        return new CGame_CVS2_A(nConfirmedROMSize);
    }
    case CYBERBOTS_A:
    {
        return new CGame_Cyberbots_A(nConfirmedROMSize);
    }
    case DaemonBride_NL:
    {
        return new CGame_DaemonBride_NL(nConfirmedROMSize);
    }
    case DaemonBrideAG_NL:
    {
        return new CGame_DaemonBrideAG_NL(nConfirmedROMSize);
    }
    case DANKUGA_A:
    {
        return new CGame_DanKuGa_A_DIR(-1);
    }
    case DBFCI_A:
    {
        return new CGame_DBFCI_A(nConfirmedROMSize);
    }
    case DBZEB_DS:
    {
        return new CGame_DBZEB_DS(nConfirmedROMSize);
    }
    case DBZHD_SNES:
    {
        return new CGame_DBZHD_SNES(nConfirmedROMSize);
    }
    case DEVMODE_DIR:
    {
        return new CGame_DevMode_DIR(nConfirmedROMSize);
    }
    case DOUBLEDRAGON_A:
    {
        return new CGame_DOUBLEDRAGON_A(nConfirmedROMSize);
    }
    case FatalFury1_A:
    {
        return new CGame_FatalFury1_A(nConfirmedROMSize);
    }
    case FatalFury2_A:
    {
        return new CGame_FatalFury2_A(nConfirmedROMSize);
    }
    case FatalFuryS_A:
    {
        return new CGame_FatalFuryS_A(nConfirmedROMSize);
    }
    case FatalFuryS_SNES:
    {
        return new CGame_FatalFuryS_SNES(nConfirmedROMSize);
    }
    case FatalFury3_A:
    {
        return new CGame_FatalFury3_A(nConfirmedROMSize);
    }
    case FotNS_P:
    {
        return new CGame_FotNS_P(nConfirmedROMSize);
    }
    case GalaxyFight_A:
    {
        return new CGame_GalaxyFight_A(nConfirmedROMSize);
    }
    case Garou_A:
    {
        return new CGame_Garou_A(nConfirmedROMSize);
    }
    case GarouP_A:
    {
        return new CGame_GarouP_A(nConfirmedROMSize);
    }
    case Garou_S:
    {
        return new CGame_Garou_S(nConfirmedROMSize);
    }
    case GEMFIGHTER_A:
    {
        return new CGame_GEMFIGHTER_A(nConfirmedROMSize);
    }
    case Gowcaizer_A:
    {
        return new CGame_Gowcaizer_A(nConfirmedROMSize);
    }
    case GGDS_NDS:
    {
        return new CGame_GGDS_NDS(nConfirmedROMSize);
    }
    case GGML_P:
    {
        return new CGame_GGML_P(nConfirmedROMSize);
    }
    case GGXXACR_S:
    {
        return new CGame_GGXXACR_S(nConfirmedROMSize);
    }
    case GGXXACR_P:
    {
        return new CGame_GGXXACR_P(nConfirmedROMSize);
    }
    case GGXXR_S:
    {
        return new CGame_GGXXR_S(nConfirmedROMSize);
    }
    case GUNDAM_SNES:
    {
        return new CGame_GUNDAM_SNES(nConfirmedROMSize);
    }
    case HSF2_A:
    {
        return new CGame_HSF2_A(nConfirmedROMSize);
    }
    case JCHAN_A:
    {
        return new CGame_JCHAN_A(nConfirmedROMSize);
    }
    case JOJOS_A:
    case JOJOS_US_A:
    {
        return new CGame_JOJOS_A(nConfirmedROMSize, static_cast<JojosLoadingKey>(nExtraGameData));
    }
    case JOJOS_A_DIR_50:
    {
        return new CGame_JOJOS_A_DIR(nConfirmedROMSize, JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP);
    }
    case JOJOS_A_DIR_51:
    {
        return new CGame_JOJOS_A_DIR(nConfirmedROMSize, JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP);
    }
    case JOJOS_US_A_DIR_51:
    {
        return new CGame_JOJOS_A_DIR(nConfirmedROMSize, JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP);
    }
    case JOJOSRPG_SNES:
    {
        return new CGame_JOJOSRPG_SNES(nConfirmedROMSize);
    }
    case JusticeLeagueTF_SNES:
    {
        return new CGame_JusticeLeagueTF_SNES(nConfirmedROMSize);
    }
    case KabukiKlash_A:
    {
        return new CGame_KabukiKlash_A(nConfirmedROMSize);
    }
    case KarnovsR_A:
    {
        return new CGame_KarnovsR_A(nConfirmedROMSize);
    }
    case KI_SNES:
    {
        return new CGame_KI_SNES(nConfirmedROMSize);
    }
    case KIZUNA_A:
    {
        return new CGame_Kizuna_A(nConfirmedROMSize);
    }
    case KOF94_A:
    {
        return new CGame_KOF94_A(nConfirmedROMSize);
    }
    case KOF95_A:
    {
        return new CGame_KOF95_A(nConfirmedROMSize);
    }
    case KOF96_A:
    {
        return new CGame_KOF96_A(nConfirmedROMSize);
    }
    case KOF97_A:
    {
        return new CGame_KOF97_A(nConfirmedROMSize);
    }
    case KOF97AE_A:
    {
        return new CGame_KOF97AE_A(nConfirmedROMSize);
    }
    case KOF97GM_S:
    {
        return new CGame_KOF97GM_S(nConfirmedROMSize);
    }
    case KOF98_A:
    {
        return new CGame_KOF98_A(nConfirmedROMSize);
    }
    case KOF98AE2016_A:
    {
        return new CGame_KOF98AE2016_A(nConfirmedROMSize);
    }
    case KOF99AE_A:
    {
        return new CGame_KOF99AE_A(nConfirmedROMSize);
    }
    case KOF00N_A:
    {
        return new CGame_KOF00N_A(nConfirmedROMSize);
    }
    case KOF01_A:
    {
        return new CGame_KOF01_A(nConfirmedROMSize);
    }
    case KOF02_A:
    {
        return new CGame_KOF02_A(nConfirmedROMSize);
    }
    case KOF02PS2_A:
    {
        return new CGame_KOF02PS2_A(nConfirmedROMSize);
    }    
    case KOF02UM_S:
    {
        return new CGame_KOF02UM_S(nConfirmedROMSize);
    }
    case KOF02UM_S_DIR_8888:
    case KOF02UM_S_DIR_BGR555:
    case KOF02UM_S_DIR_RGB555:
    {
        return new CGame_KOF02UM_S_DIR(nConfirmedROMSize, (SupportedGamesList)nGameFlag);
    }
    case KOF03_A:
    {
        return new CGame_KOF03_A(nConfirmedROMSize);
    }
    case KOFXI_A:
    {
        return new CGame_KOFXI_A(nConfirmedROMSize);
    }
    case KOTM_A:
    {
        return new CGame_KOTM_A(nConfirmedROMSize);
    }
    case LASTBLADE_A:
    case LASTBLADE_S:
    {
        return new CGame_LASTBLADE_A(nConfirmedROMSize, (SupportedGamesList)nGameFlag);
    }
    case LASTBLADE2_A:
    case LASTBLADE2_S:
    {
        return new CGame_LASTBLADE2_A(nConfirmedROMSize, (SupportedGamesList)nGameFlag);
    }
    case MAAB_A:
    {
        return new CGame_MAAB_A(nConfirmedROMSize);
    }
    case MAGICALDROPII_A:
    {
        return new CGame_MAGICALDROPII_A(nConfirmedROMSize);
    }
    case MAGICALDROPIII_A:
    {
        return new CGame_MAGICALDROPIII_A(nConfirmedROMSize);
    }
    case MartialMasters_A:
    {
        return new CGame_MartialMasters_A(nConfirmedROMSize);
    }
    case MATRIMELEE_A:
    {
        return new CGame_Matrimelee_A(nConfirmedROMSize);
    }
    case MBAACC_S:
    {
        return new CGame_MBAACC_S(nConfirmedROMSize);
    }
    case MBTL_A:
    {
        return new CGame_MBTL_A(nConfirmedROMSize);
    }
    case MK1_SNES:
    {
        return new CGame_MK1_SNES(nConfirmedROMSize);
    }
    case MK2_A:
    {
        return new CGame_MK2_A(nConfirmedROMSize);
    }
    case MK2_SNES:
    {
        return new CGame_MK2_SNES(nConfirmedROMSize);
    }
    case MMPR_SNES:
    {
        return new CGame_MMPR_SNES(nConfirmedROMSize);
    }
    case MMX_SNES:
    {
        return new CGame_MMX_SNES(nConfirmedROMSize);
    }
    case MMX2_SNES:
    {
        return new CGame_MMX2_SNES(nConfirmedROMSize);
    }
    case MMX3_SNES:
    {
        return new CGame_MMX3_SNES(nConfirmedROMSize);
    }
    case MSH_A:
    {
        return new CGame_MSH_A(nConfirmedROMSize);
    }
    case MSHVSF_A:
    {
        return new CGame_MSHVSF_A(nConfirmedROMSize);
    }
    case MSHWOTG_SNES:
    {
        return new CGame_MSHWOTG_SNES(nConfirmedROMSize);
    }
    case MVC_A:
    {
        return new CGame_MVC_A(nConfirmedROMSize);
    }
    case MVC2_A:
    {
        return new CGame_MVC2_A(nConfirmedROMSize);
    }
    case MVC2_A_DIR:
    {
        return new CGame_MVC2_A_DIR(nConfirmedROMSize);
    }
    case MVC2_D:
    case MVC2_D_16:
    {
        return new CGame_MVC2_D(nConfirmedROMSize);
    }
    case MVC2_P:
    {
        return new CGame_MVC2_P(nConfirmedROMSize);
    }
    case MWARR_A:
    {
        return new CGame_MWarr_A_DIR(-1);
    }
    case NBHID_NL:
    {
        return new CGame_NBHID_NL(nConfirmedROMSize);
    }
    case NBHID_P:
    {
        return new CGame_NBHID_P(nConfirmedROMSize);
    }
    case NBHID_S:
    {
        return new CGame_NBHID_S(nConfirmedROMSize);
    }
    case NeoBomberman_A:
    {
        return new CGame_NeoBomberman_A(nConfirmedROMSize);
    }
    case NEOGEO_A:
    {
        return new CGame_NEOGEO_A(nConfirmedROMSize, pszFilePath);
    }
    case NGBC_A:
    {
        return new CGame_NGBC_A(nConfirmedROMSize);
    }
    case NINJAMASTERS_A:
    {
        return new CGame_NINJAMASTERS_A(nConfirmedROMSize);
    }
    case P4AU_NESICA:
    {
        return new CGame_P4AU_NESICA(nConfirmedROMSize);
    }
    case P4AU_STEAM:
    {
        return new CGame_P4AU_STEAM(nConfirmedROMSize);
    }
    case PrimalRage_SNES:
    {
        return new CGame_PrimalRage_SNES(nConfirmedROMSize);
    }
    case RANMACRH_SNES:
    {
        return new CGame_RANMACRH_SNES(nConfirmedROMSize);
    }
    case RANMAHB_SNES:
    {
        return new CGame_RANMAHB_SNES(nConfirmedROMSize);
    }
    case RBFF1_A:
    {
        return new CGame_RBFF1_A(nConfirmedROMSize);
    }
    case RBFF2_A:
    {
        return new CGame_RBFF2_A(nConfirmedROMSize);
    }
    case RBFFS_A:
    {
        return new CGame_RBFFS_A(nConfirmedROMSize);
    }
    case REDEARTH_A:
    {
        return new CGame_REDEARTH_A(nConfirmedROMSize);
    }
    case REDEARTH_A_DIR_30:
    {
        return new CGame_RedEarth_A_DIR(nConfirmedROMSize, RedEarthLoadingKey::RedEarthROM30);
    }
    case REDEARTH_A_DIR_31:
    {
        return new CGame_RedEarth_A_DIR(nConfirmedROMSize, RedEarthLoadingKey::RedEarthROM31);
    }
    case REDEARTH_A_DIR_50:
    {
        return new CGame_RedEarth_A_DIR(nConfirmedROMSize, RedEarthLoadingKey::RedEarthROM50);
    }
    case RODSM2_A:
    {
        return new CGame_RODSM2_A(nConfirmedROMSize);
    } 
    case ROTD_A:
    {
        return new CGame_ROTD_A(nConfirmedROMSize);
    }
    case SAMSHO1_A:
    {
        return new CGame_SAMSHO1_A(nConfirmedROMSize);
    }
    case SAMSHO2_A:
    {
        return new CGame_SAMSHO2_A(nConfirmedROMSize);
    }
    case SAMSHO3_A:
    {
        return new CGame_SAMSHO3_A(nConfirmedROMSize);
    }
    case SAMSHO4_A:
    {
        return new CGame_SAMSHO4_A(nConfirmedROMSize);
    }
    case SAMSHO5_A:
    case SAMSHO5X_A:
    {
        return new CGame_SAMSHO5_A(nConfirmedROMSize);
    }
    case SAMSHO5SP_A:
    case SAMSHO5SP_S:
    {
        return new CGame_SAMSHO5SP_A(nConfirmedROMSize);
    }
    case SAVAGEREIGN_A:
    {
        return new CGame_SAVAGEREIGN_A(nConfirmedROMSize);
    }
    case SDODGEBALL_A:
    {
        return new CGame_SDODGEBALL_A(nConfirmedROMSize);
    }
    case SFIII1_A:
    {
        return new CGame_SFIII1_A(nConfirmedROMSize);
    }
    case SFIII1_A_DIR:
    {
        return new CGame_SFIII1_A_DIR(nConfirmedROMSize);
    }
    case SFIII2_A:
    {
        return new CGame_SFIII2_A(nConfirmedROMSize);
    }
    case SFIII2_A_DIR:
    {
        return new CGame_SFIII2_A_DIR(nConfirmedROMSize);
    }
    case SFIII3_A:
    {
        return new CGame_SFIII3_A(nConfirmedROMSize);
    }
    case SFIII3_A_DIR_10:
    {
        return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM10);
    }
    case SFIII3_A_DIR_4rd:
    {
        return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM51_4rd);
    }
    case SFIII3_A_DIR_4rd_10:
    {
        return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM10_4rd);
    }
    case SFIII3_A_DIR_51:
    {
        return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM51);
    }
    case SFIII3_A_DIR_EX:
    {
        return new CGame_SFIII3_A_DIR(nConfirmedROMSize, SFIII3LoadingKey::ROM70_EX);
    }
    case SFIII3_D:
    {
        return new CGame_SFIII3_D;
    }
    case SFA1_A:
    {
        return new CGame_SFA1_A(nConfirmedROMSize);
    }
    case SFA2_A:
    case SFA2_Hack_A:
    {
        return new CGame_SFA2_A(nConfirmedROMSize);
    }
    case SFA3_A:
    {
        return new CGame_SFA3_A(nConfirmedROMSize);
    }
    case SFZ3U_A:
    {
        return new CGame_SFZ3U_A(nConfirmedROMSize);
    }
    case SF1_A:
    {
        return new CGame_StreetFighter_A(nConfirmedROMSize);
    }
    case SF2CE_A:
    {
        return new CGame_SF2CE_A(nConfirmedROMSize);
    }
    case SF2HF_A:
    {
        return new CGame_SF2HF_A(nConfirmedROMSize);
    }
    case SHAQFU_SNES:
    {
        return new CGame_SHAQFU_SNES(nConfirmedROMSize);
    }
    case SPF2T_A:
    {
        return new CGame_SPF2T_A(nConfirmedROMSize);
    }
    case SSF2T_A:
    {
        return new CGame_SSF2T_A(nConfirmedROMSize);
    }
    case SSF2T_GBA:
    {
        return new CGame_SSF2T_GBA(nConfirmedROMSize);
    }
    case SurvivalArts_A:
    {
        return new CGame_SurvivalArts_A(nConfirmedROMSize);
    }
    case SVG_SNES:
    {
        return new CGame_SVG_SNES(nConfirmedROMSize);
    }
    case SVCPLUSA_A:
    {
        return new CGame_SVCPLUSA_A(nConfirmedROMSize);
    }
    case TMNTTF_SNES:
    {
        return new CGame_TMNTTF_SNES(nConfirmedROMSize);
    }
    case TOPF2005_SEGA:
    {
        return new CGame_TOPF2005_SEGA(nConfirmedROMSize);
    }    
    case UMK3_A:
    {
        return new CGame_UMK3_A(nConfirmedROMSize);
    }
    case UMK3_DS:
    {
        return new CGame_UMK3_DS(nConfirmedROMSize);
    }
    case UMK3_SNES:
    {
        return new CGame_UMK3_SNES(nConfirmedROMSize);
    }
    case UNICLR_A:
    {
        return new CGame_UNICLR_A(nConfirmedROMSize);
    }
    case VampireHunter_A:
    {
        return new CGame_VampireHunter_A(nConfirmedROMSize);
    }
    case VampireNightWarriors_A:
    {
        return new CGame_VampireNightWarriors_A(nConfirmedROMSize);
    }
    case VENTURE_A:
    {
        return new CGame_VENTURE_A(nConfirmedROMSize);
    }
    case VENTURE_A_DIR_31:
    {
        return new CGame_VENTURE_A_DIR(-1, VentureDirLoadingKey::ROM31);
    }
    case VENTURE_A_DIR_50:
    {
        return new CGame_VENTURE_A_DIR(-1, VentureDirLoadingKey::ROM50);
    }
    case VHUNT2_A:
    {
        return new CGame_VHUNT2_A(nConfirmedROMSize);
    }
    case VSAV_A:
    {
        return new CGame_VSAV_A(nConfirmedROMSize);
    }
    case VSAV2_A:
    {
        return new CGame_VSAV2_A(nConfirmedROMSize);
    }
    case WakuWaku7_A:
    {
        return new CGame_WakuWaku7_A(nConfirmedROMSize);
    }
    case WINDJAMMERS_A:
    {
        return new CGame_Windjammers_A(nConfirmedROMSize);
    }
    case XMMA_SNES:
    {
        return new CGame_XMMA_SNES(nConfirmedROMSize);
    }
    case XMVSF_A:
    {
        return new CGame_XMVSF_A(nConfirmedROMSize);
    }

    default:
        OutputDebugString(L"CGameLoad::CreateGame:: BUGBUG: New game has not been properly added yet.\n");
        return NULL;
    }
}

CGameClass* CGameLoad::LoadFile(int nGameFlag, wchar_t* pszLoadFile)
{
    CGameClass* OutGame = nullptr;

    CFile CurrFile;
    sFileRule CurrRule;

    if (!VerifyLocationIsUsable(pszLoadFile))
    {
        return nullptr;
    }

    if (!SetGame(nGameFlag))
    {
        return nullptr;
    }

    int nGameRule = 0;

    // Handle games that support multiple ROMs here
    wchar_t* pszFileNameLowercase = wcsrchr(pszLoadFile, L'\\');

    if (pszFileNameLowercase)
    {
        // Step forward to the filename
        pszFileNameLowercase++;
        _wcslwr(pszFileNameLowercase);

        switch (nGameFlag)
        {
        case AOF3_A:
            CGame_AOF3_A::SetSpecialRuleForFileName(pszFileNameLowercase);
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
        case HSF2_A:
            CGame_HSF2_A::SetSpecialRuleForFileName(pszFileNameLowercase);
            break;
        case JOJOS_A:
            nGameRule = static_cast<int>((wcscmp(pszFileNameLowercase, L"50") == 0) ? JojosLoadingKey::JOJOS_A_50_ROMKEY : JojosLoadingKey::JOJOS_A_51_ROMKEY);
            break;
        case JOJOS_US_A:
            nGameRule = static_cast<int>((wcscmp(pszFileNameLowercase, L"50") == 0) ? JojosLoadingKey::JOJOS_A_50_ROMKEY : JojosLoadingKey::JOJOS_US_A_51_ROMKEY);
            break;
        case KOF95_A:
            CGame_KOF95_A::SetSpecialRuleForFileName(pszFileNameLowercase);
            break;
        case KOF96_A:
            CGame_KOF96_A::SetSpecialRuleForFileName(pszFileNameLowercase);
            break;
        case KOF99AE_A:
            CGame_KOF99AE_A::SetSpecialRuleForFileName(pszFileNameLowercase);
            break;
        case LASTBLADE_A:
        case LASTBLADE_S:
        case LASTBLADE2_A:
        case LASTBLADE2_S:
            nGameRule = nGameFlag;
            break;
        case KOF02UM_S:
            CGame_KOF02UM_S::SetSpecialRuleForFileName(pszFileNameLowercase);
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
        case SSF2T_A:
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
        case VENTURE_A:
            CGame_VENTURE_A::SetSpecialRuleForFileName(pszFileNameLowercase);
            break;
        default:
            break;
        }
    }

    CurrRule = GetRule(nGameRule);

    GetHost()->GetPalModDlg()->SetStatusText(L"Opening file...");

    if (CurrFile.Open(pszLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ULONGLONG nGameFileLength = CurrFile.GetLength();
        bool isSafeToRunGame = ((short int)CurrRule.uVerifyVar == -1) || (nGameFileLength == CurrRule.uVerifyVar);

        if (!isSafeToRunGame)
        {
            if (CurrRule.fHasAltName &&
                pszFileNameLowercase &&
                (_wcsicmp(pszFileNameLowercase, CurrRule.szAltFileName) == 0) &&
                (CurrRule.uAltVerifyVar == nGameFileLength))
            {
                OutputDebugString(L"CGameLoad::LoadFile: Confirmed this file is safe to load due to an alternate acceptable file size.\n");
                isSafeToRunGame = true;
            }
        }

        if (!isSafeToRunGame) // we could hook people trying to load Venture here... file size is 4194304
        {
            CString strQuestion;

            strQuestion.Format(L"Internal warning: Game file size is 0x%x, but 0x%x is the expected size. You may just need to update the value of m_nExpectedGameROMSize for your game.\n", (int)nGameFileLength, CurrRule.uVerifyVar);
            OutputDebugString(strQuestion);

            if ((nGameFlag == JOJOS_A) && (nGameRule == 50) && (nGameFileLength == 4194304))
            {
                (void)strQuestion.LoadString(IDS_ROMISVENTURE);
            }
            else
            {
                strQuestion.Format(IDS_ROMMISMATCH_CHECK, CurrRule.uVerifyVar, nGameFileLength);
            }

            switch (MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_YESNO | MB_ICONSTOP | MB_DEFBUTTON2))
            {
                case IDYES:
                {
                    isSafeToRunGame = true;
                    break;
                }
                default:
                {
                    break;
                }
            }
        }

        if (isSafeToRunGame)
        {
            OutGame = CreateGame(nGameFlag, (uint32_t)nGameFileLength, nGameRule, pszLoadFile);

            if (OutGame)
            {
                OutGame->SetLoadedPathOrFile(pszLoadFile);

                uint32_t crcValue = 0;
                bool fNeedToValidateCRC = false;

                // CRC calculation is slow, so only calculate if we need it.
                if ((OutGame->GetKnownCRC32DatasetsForGame(nullptr, &fNeedToValidateCRC) > 1) &&
                    fNeedToValidateCRC)
                {
                    // Only calculate this if desired since it's time-expensive
                    OutputDebugString(L"Calculating crc...\n");
                    crcValue = CRC32_BlockChecksum(&CurrFile, (int)nGameFileLength);

                    CString strMsg;
                    strMsg.Format(L"\tCRC32 for %s is 0x%x\n", pszLoadFile, crcValue);
                    OutputDebugString(strMsg);
                }

                OutGame->SetSpecificValuesForCRC(&CurrFile, crcValue);

                if (OutGame->LoadFile(&CurrFile, 0))
                {
                    OutGame->SetIsDir(FALSE);
                    //nSaveLoadSucc++;
                }
                else
                {
                    safe_delete(OutGame);
                }
            }
        }
        else
        {
            OutputDebugString(L"CGameLoad::LoadFile: ERROR: ROM is the wrong size.  Rejecting loading this ROM.\n");
        }

        CurrFile.Abort();
    }
    else
    {
        if (pszFileNameLowercase)
        {
            CString strError;
            strError.Format(L"The file \"%s\" can not be opened.  Another application is probably using it.", pszFileNameLowercase);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONSTOP);
        }
    }

    strLoadSaveStr.Format(OutGame ? IDS_LOADSAVE_SUCCESS : IDS_LOADSAVE_FAILURE);

    return OutGame;
}

CGameClass* CGameLoad::LoadDir(int nGameFlag, wchar_t* pszLoadDir)
{
    CGameClass* OutGame = NULL;
    sFileRule CurrRule;

    CFile CurrFile;
    CString strCurrFile;
    bool fShownFileError = false;

    //Track load save count
    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    if (!VerifyLocationIsUsable(pszLoadDir))
    {
        OutputDebugString(L"CGameLoad::LoadDir: location isn't usable: failing load.\r\n");
        return nullptr;
    }

    if (!SetGame(nGameFlag))
    {
        OutputDebugString(L"CGameLoad::LoadDir: game could not be loaded: failing load.\r\n");
        return nullptr;
    }

    if (ResetRuleCtr == nullptr)
    {
        // This isn't a directory-based game: something is wrong
        OutputDebugString(L"CGameLoad::LoadDir: game load configuration error: failing load.\r\n");
        return nullptr;
    }

    ResetRuleCtr();

    uint32_t nCurrRuleCtr = GetRuleCtr();

    GetHost()->GetPalModDlg()->SetStatusText(L"Opening files...");

    while (nCurrRuleCtr != INVALID_UNIT_VALUE)
    {
        nSaveLoadCount++;

        CurrRule = GetNextRule();

        strCurrFile.Format(L"%s\\%s", pszLoadDir, CurrRule.szFileName);

        BOOL fFileOpened = CurrFile.Open(strCurrFile, CFile::modeRead | CFile::typeBinary);

        if (!fFileOpened && CurrRule.fHasAltName)
        {
            CString strAltFileName;

            OutputDebugString(L"Loading game via alternate filenames...\n");

            strAltFileName.Format(L"%s\\%s", pszLoadDir, CurrRule.szAltFileName);

            fFileOpened = CurrFile.Open(strAltFileName, CFile::modeRead | CFile::typeBinary);
        }

        if (fFileOpened)
        {
            bool fActualFileSizeIsSafe = false;
            ULONGLONG nGameFileLength = CurrFile.GetLength();
            uint32_t nConfirmedVerifyVar = CurrRule.uVerifyVar;
            
            if (((short int)CurrRule.uVerifyVar == -1) ||
                ((CurrRule.uVerifyVar == nGameFileLength)))
            {
                fActualFileSizeIsSafe = true;
            }
            else if (CurrRule.fHasAltName && (CurrRule.uAltVerifyVar == nGameFileLength))
            {
                fActualFileSizeIsSafe = true;
                nConfirmedVerifyVar = CurrRule.uAltVerifyVar;
            }

            if (!fActualFileSizeIsSafe)
            {
                CString strError;
                strError.Format(L"The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n\nShould we try to load this file anyways?", strCurrFile.GetString(), CurrRule.uVerifyVar, (int)CurrFile.GetLength());
                fActualFileSizeIsSafe = (MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_YESNO | MB_ICONERROR) == IDYES);
                strError.Format(L"WARNING: The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n", strCurrFile.GetString(), CurrRule.uVerifyVar, (int)CurrFile.GetLength());
                OutputDebugString(strError);
            }

            if (fActualFileSizeIsSafe)
            {
                if (!OutGame)
                {
                    OutGame = CreateGame(nGameFlag, nConfirmedVerifyVar);

                    if (OutGame)
                    {
                        OutGame->SetIsDir();
                        OutGame->SetLoadedPathOrFile(pszLoadDir);
                    }
                }

                if (OutGame && OutGame->LoadFile(&CurrFile, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;
                }
                else
                {
                    nSaveLoadErr++;
                }
            }
            else
            {
                nSaveLoadErr++;
            }

            CurrFile.Abort();
        }
        else
        {
            if ((nGameFlag == SFIII3_D) && (nCurrRuleCtr == 0x21))
            {
                OutputDebugString(L"CGameLoad::LoadDir : Gouki doesn't exist for SF3-DC: skipping.\n");
                nSaveLoadSucc++;
            }
            else if (OutGame && 
                   (((nGameFlag == MVC2_D) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                    ((nGameFlag == MVC2_D_16) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                    ((nGameFlag == MVC2_P) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION))))
            {
                OutputDebugString(L"CGameLoad::LoadDir : Team View for MvC2. Ignoring file open.\n");
                if (OutGame->LoadFile(nullptr, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;
                }
            }
            else
            {
                CString strError;
                strError.Format(L"Could not find required file:\n    %s\n at the specified location:\n    %s\nPlease make sure the path is correct.", CurrRule.szFileName, pszLoadDir);

                if ((nGameFlag == MVC2_D) || (nGameFlag == MVC2_D_16) || (nGameFlag == MVC2_P))
                {
                    strError.Append(L"\n\nPlease note that PalMod can not read game CD ISOs.  You need to mount those and extract the files out before PalMod can use them.");
                }

                OutputDebugString(strError);
                OutputDebugString(L"\n");

                if (!fShownFileError)
                {
                    fShownFileError = true;
                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
                }

                nSaveLoadErr++;
            }
        }

        nCurrRuleCtr = GetRuleCtr();
    }

    CString strErrorText = L"";
    if (nSaveLoadErr)
    {
        strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
    }
    
    strLoadSaveStr.Format((nSaveLoadCount == 1) ? IDS_LOADGAME_SINGLE : IDS_LOADGAME_MULTI, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());

    // Perhaps we could be less strict here, but -- we also will crash elsewhere if we don't have the full PL set.
    return (nSaveLoadErr == 0) ? OutGame : nullptr;
}

bool CGameLoad::IsLocationOnReadOnlyDrive(LPCWSTR pszLocation, LPWSTR pszDrivePath /*= nullptr*/, uint32_t ccPathSize /*= 0*/)
{
    bool fIsMediaReadOnly = false;
    wchar_t szPath[MAX_PATH];

    // strip the directory down to actual path since that's what GetVolumeInformation requires
    wcsncpy_s(szPath, pszLocation, ARRAYSIZE(szPath));
    szPath[ARRAYSIZE(szPath) - 1] = '\0';

    wchar_t* pszSlash = wcsstr(szPath, L"\\");

    if (pszSlash != nullptr)
    {
        pszSlash[1] = 0;
    }

    DWORD dwFlags = 0;
    if (GetVolumeInformation(szPath, nullptr, 0, nullptr, 0, &dwFlags, nullptr, 0))
    {
        fIsMediaReadOnly = (dwFlags & FILE_READ_ONLY_VOLUME);
    }

    if (pszDrivePath)
    {
        wcsncpy(pszDrivePath, szPath, ccPathSize);
    }

    return fIsMediaReadOnly;
}

bool CGameLoad::VerifyLocationIsUsable(LPCWSTR pszLocation)
{
    bool fLocationIsOKToUse = !IsLocationOnReadOnlyDrive(pszLocation);

    if (!fLocationIsOKToUse)
    {
        CString strQuestion;

        if (strQuestion.LoadStringW(IDS_ERROR_NOTWRITABLE_DRIVE))
        {
            int nUserAnswer = SHMessageBoxCheck(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OKCANCEL | MB_ICONWARNING,
                                                  IDOK, L"{B31487B9-3B3B-441e-BC98-7C83714C0AEB}");

            fLocationIsOKToUse = (nUserAnswer != IDCANCEL);
        }

    }

    return fLocationIsOKToUse;
}

bool CGameLoad::SaveGame(CGameClass* CurrGame)
{
    CFile FileSave;
    bool fSuccess = true;

    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    SetGame(CurrGame->GetGameFlag());

    uint32_t nFileAmt = CurrGame->GetFileAmt();
    CString strErrorFile;

    if (CurrGame->GetIsDir())
    {
        LPCWSTR pszLoadDir = CurrGame->GetLoadedDirPathOnly();
        std::vector<bool> rgFileIsChanged = CurrGame->GetFileChangeTrackingArray();
        BOOL fWasGameChangedInSession = CurrGame->WasGameFileChangedInSession();
        BOOL fGameMapsUnitsToFiles = CurrGame->GetGameMapsUnitsToFiles();

        for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
        {
            if (fGameMapsUnitsToFiles ? rgFileIsChanged.at(nFileCtr) : fWasGameChangedInSession)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                bool fIsMvC2TeamView = ((CurrGame->GetGameFlag() == MVC2_D) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                                       ((CurrGame->GetGameFlag() == MVC2_D_16) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                                       ((CurrGame->GetGameFlag() == MVC2_P) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION));

                if (!fIsMvC2TeamView)
                {
                    CString szLoad;
                    sFileRule CurrRule = GetRule(nFileCtr | RULE_COUNTER_MASK);

                    szLoad.Format(L"%s\\%s", pszLoadDir, CurrRule.szFileName);

                    CFileException pError;
                    BOOL fFileOpened = FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary, &pError);

                    if (!fFileOpened && CurrRule.fHasAltName)
                    {
                        CString strAltFileName;

                        OutputDebugString(L"Saving game via alternate filenames...\n");

                        strAltFileName.Format(L"%s\\%s", pszLoadDir, CurrRule.szAltFileName);

                        fFileOpened = FileSave.Open(strAltFileName, CFile::modeReadWrite | CFile::typeBinary, &pError);
                    }

                    if (fFileOpened)
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            nSaveLoadSucc++;

                            if (fGameMapsUnitsToFiles)
                            {
                                // Mark as clean so we don't save it out until it gets dirtied again.
                                rgFileIsChanged.at(nFileCtr) = false;
                            }

                        }
                        else
                        {
                            strErrorFile = szLoad;
                            nSaveLoadErr++;
                        }

                        if (FileSave.m_hFile != CFile::hFileNull)
                        {
                            FileSave.Abort();
                        }
                    }
                    else
                    {
                        wchar_t szError[MAX_PATH];
                        pError.GetErrorMessage(szError, MAX_PATH);
                        MessageBox(g_appHWnd, szError, GetHost()->GetAppName(), MB_ICONERROR);

                        strErrorFile = szLoad;
                        nSaveLoadErr++;
                    }
                }
                else
                {
                    // Ignore the virtual team view
                    // Mark as clean so we don't save it out until it gets dirtied again.
                    rgFileIsChanged.at(nFileCtr) = false;
                    nSaveLoadSucc++;
                }
            }
        }
    }
    else
    {
        LPCWSTR pszLoadFile = CurrGame->GetLoadedDirOrFile();

        if (CurrGame->WasGameFileChangedInSession())
        {
            CFileException pError;

            nSaveLoadCount = 1;

            if (FileSave.Open(pszLoadFile, CFile::modeReadWrite | CFile::typeBinary, &pError))
            {
                if (CurrGame->SaveFile(&FileSave, 0))
                {
                    nSaveLoadSucc++;
                }

                FileSave.Abort();
            }
            else
            {
                wchar_t szError[MAX_PATH];
                pError.GetErrorMessage(szError, MAX_PATH);
                MessageBox(g_appHWnd, szError, GetHost()->GetAppName(), MB_ICONERROR);

                strErrorFile = pszLoadFile;
                nSaveLoadErr = 1;
            }
        }
    }

    if (!strErrorFile.IsEmpty())
    {
        CString strError;
        UINT uErrorString;

        fSuccess = false;

        if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
        {
            uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            strError.Format(uErrorString, strErrorFile);
        }
        else
        {
            LPCWSTR pszLoadDir = CurrGame->GetLoadedDirOrFile();

            wchar_t szPath[MAX_PATH];
            if (IsLocationOnReadOnlyDrive(pszLoadDir, szPath, ARRAYSIZE(szPath)))
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_CDI;
                strError.Format(uErrorString, szPath);
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
                strError.Format(uErrorString, strErrorFile.GetString());
            }
        }

        MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
    }

    if (nSaveLoadCount > 0)
    {
        if (nSaveLoadCount == 1)
        {
            if (nSaveLoadErr)
            {
                strLoadSaveStr = L"Game patching failed.";
                fSuccess = false;
            }
            else
            {
                strLoadSaveStr = L"Game patched successfully.";
            }
        }
        else
        {
            CString strErrorText = L"";
            if (nSaveLoadErr)
            {
                strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
                fSuccess = false;
            }

            strLoadSaveStr.Format((nSaveLoadCount == 1) ? IDS_PATCHGAME_SINGLE : IDS_PATCHGAME_MULTI, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }

        if (nSaveLoadErr == 0)
        {
            CurrGame->ResetFileChangeTrackingArray();
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_PATCH_EMPTY))
        {
            strLoadSaveStr = L"error loading string";
        }
    }

    return fSuccess;
}

void CGameLoad::CrosscopyGame(CGameClass* CurrGame)
{
    CString strTargetDirectory;

    if (GetHost()->GetPalModDlg()->SetLoadDir(&strTargetDirectory))
    {
        CFile FileSave;

        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        SetGame(CurrGame->GetGameFlag());

        uint32_t nFileAmt = CurrGame->GetFileAmt();
        CString strErrorFile;
        const bool fIsDreamcast = CurrGame->GetGameFlag() == MVC2_D;

        if (CurrGame->GetIsDir())
        {
            for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                bool fIsMvC2TeamView = (nFileCtr == MVC2_D_TEAMVIEW_LOCATION);

                if (!fIsMvC2TeamView)
                {
                    CString szLoad;
                    sFileRule CurrRule = fIsDreamcast ? CGame_MVC2_P::GetRule(nFileCtr | RULE_COUNTER_MASK) : CGame_MVC2_D::GetRule(nFileCtr | RULE_COUNTER_MASK);

                    szLoad.Format(L"%s\\%s", strTargetDirectory.GetString(), CurrRule.szFileName);

                    BOOL fFileOpened = FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary);

                    if (fFileOpened)
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            nSaveLoadSucc++;
                        }
                        else
                        {
                            strErrorFile = szLoad;
                            nSaveLoadErr++;
                        }

                        if (FileSave.m_hFile != CFile::hFileNull)
                        {
                            FileSave.Abort();
                        }
                    }
                    else
                    {
                        strErrorFile = szLoad;
                        nSaveLoadErr++;
                    }
                }
                else
                {
                    // Ignore the virtual team view
                    nSaveLoadSucc++;
                }
            }
        }

        if (!strErrorFile.IsEmpty())
        {
            CString strError;
            UINT uErrorString;
            if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
            {
                uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
            }

            strError.Format(uErrorString, strErrorFile);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
        }

        CString strErrorText = L"";
        if (nSaveLoadErr)
        {
            strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
        }

        if (nSaveLoadCount == 1)
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_SINGLE_SUCCESS, strErrorText.GetString());
        }
        else
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_MULTI_SUCCESS, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR))
        {
            strLoadSaveStr = L"<resource loading failure>";
        }
    }
}

void CGameLoad::SavePatchFile(CGameClass* CurrGame)
{
    SetGame(CurrGame->GetGameFlag());
    uint32_t nNumberOfChangesSaved = 0;
    
    if (!CurrGame->GetIsDir())
    {
        if (CurrGame->WasGameFileChangedInSession())
        {
            static LPCWSTR szPatchFilter[] = { L"IPS Patch File|*.ips|"
                                               L"|" };

            LPCWSTR pszLoadedFile = CurrGame->GetLoadedDirOrFile();
            LPCWSTR pszFileName = wcsrchr(pszLoadedFile, L'\\');
            pszFileName = (pszFileName) ? (pszFileName + 1) : L"unknown";
            CString strSuggestedFileName = pszFileName;
            strSuggestedFileName += L".ips";

            CFileDialog PatchFileLoad(FALSE, L"ips", strSuggestedFileName.GetString(), OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY, *szPatchFilter);

            if (PatchFileLoad.DoModal() == IDOK)
            {
                CString strFileName = PatchFileLoad.GetOFN().lpstrFile;
                CFile PatchFile;
                nSaveLoadCount = 1;

                if (PatchFile.Open(strFileName, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                {
                    nNumberOfChangesSaved = CurrGame->SavePatchFile(&PatchFile, 0);
                    PatchFile.Abort();
                }
                else
                {
                    CString strError;
                    UINT uErrorString;
                    if ((GetFileAttributes(strFileName)) == INVALID_FILE_ATTRIBUTES)
                    {
                        uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
                    }
                    else
                    {
                        uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
                    }

                    strError.Format(uErrorString, strFileName);
                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
                }
            }
        }
    }

    if (nNumberOfChangesSaved > 0)
    {
        strLoadSaveStr.Format((nNumberOfChangesSaved == 1) ? IDS_IPS_SINGLE : IDS_IPS_MULTI, nNumberOfChangesSaved);
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_IPS_EMPTY))
        {
            strLoadSaveStr = L"error loading string";
        }
    }
}

void CGameLoad::SaveMultiplePatchFiles(CGameClass* CurrGame, CString strTargetDirectory)
{
    SetGame(CurrGame->GetGameFlag());
    uint32_t nNumberOfChangesSaved = 0;
    BOOL fGameWasChanged = CurrGame->WasGameFileChangedInSession();

    if (fGameWasChanged && CurrGame->GetIsDir())
    {
        nNumberOfChangesSaved = CurrGame->SaveMultiplePatchFiles(strTargetDirectory);
    }

    if (nNumberOfChangesSaved > 0)
    {
        strLoadSaveStr.Format((nNumberOfChangesSaved == 1) ? IDS_IPS_SINGLE : IDS_IPS_MULTI, nNumberOfChangesSaved);
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_IPS_EMPTY))
        {
            strLoadSaveStr = L"error loading string";
        }
    }
}

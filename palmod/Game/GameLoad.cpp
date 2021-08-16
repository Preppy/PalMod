#include "StdAfx.h"
#include "GameLoad.h"
#include "..\CRC32.h"

#include "Game_AOF1_A.h"
#include "Game_AOF3_A.h"
#include "Game_Bleach_DS.h"
#include "Game_BMKNS_SNES.h"
#include "Game_Breakers_A.h"
#include "Game_BSSMSJR_SNES.h"
#include "Game_CFTE_SNES.h"
#include "Game_COTA_A.h"
#include "Game_CVS2_A.h"
#include "Game_DanKuGa_A.h"
#include "Game_DBFCI_A.h"
#include "Game_DBZHD_SNES.h"
#include "Game_DoubleDragon_A.h"
#include "Game_FatalFury1_A.h"
#include "Game_FatalFuryS_A.h"
#include "Game_FatalFuryS_SNES.h"
#include "Game_Garou_A.h"
#include "Game_Garou_S.h"
#include "Game_Gowcaizer_A.h"
#include "Game_GGXXACR_S.h"
#include "Game_GGXXACR_P.h"
#include "Game_GGXXR_S.h"
#include "Game_GUNDAM_SNES.h"
#include "Game_JOJOS_A.h"
#include "Game_JOJOS_A_DIR.h"
#include "Game_JOJOSRPG_SNES.h"
#include "Game_KarnovsR_A.h"
#include "Game_KI_SNES.h"
#include "Game_Kizuna_A.h"
#include "Game_KOF00N_A.h"
#include "Game_KOF01_A.h"
#include "Game_KOF02_A.h"
#include "Game_KOF02PS2_A.h"
#include "Game_KOF02UM_S.h"
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
#include "Game_MAGICALDROPIII_A.h"
#include "Game_MartialMasters_A.h"
#include "Game_Matrimelee_A.h"
#include "Game_MAAB_A.h"
#include "Game_MBAACC_S.h"
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
#include "Game_NeoBomberman_A.h"
#include "Game_NEOGEO_A.h"
#include "Game_NGBC_A.h"
#include "Game_NINJAMASTERS_A.h"
#include "Game_P4AU_NESICA.h"
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
#include "Game_SPF2T_A.h"
#include "Game_SSF2T_A.h"
#include "Game_SSF2T_GBA.h"
#include "Game_SVG_SNES.h"
#include "Game_SVCPLUSA_A.h"
#include "Game_TMNTTF_SNES.h"
#include "Game_TopF2005_Sega.h"
#include "Game_UNICLR_A.h"
#include "Game_VHUNT2_A.h"
#include "Game_VSAV_A.h"
#include "Game_VSAV2_A.h"
#include "Game_WakuWaku7_A.h"
#include "Game_Windjammers_A.h"
#include "Game_XMMA_SNES.h"
#include "Game_XMVSF_A.h"

#include "..\resource.h"
#include "..\palmod.h"

void StrRemoveNonASCII(WCHAR* pszOutput, size_t ccSize, LPCWSTR pszInput, bool fForceUpperCase /* = false*/)
{
    size_t iStrOutputIndex = 0;

    for (size_t iStrIndex = 0; iStrIndex < ccSize; iStrIndex++)
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

void StruprRemoveNonASCII(WCHAR* pszOutput, size_t ccSize, LPCWSTR pszInput)
{
    StrRemoveNonASCII(pszOutput, ccSize, pszInput, true);
}

CGameLoad::CGameLoad(void)
{
}

CGameLoad::~CGameLoad(void)
{
}

BOOL CGameLoad::SetGame(int nGameFlag)
{
    switch (nGameFlag)
    {
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
    case CVS2_A:
    {
        GetRule = &CGame_CVS2_A::GetRule;
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
    case DBZHD_SNES:
    {
        GetRule = &CGame_DBZHD_SNES::GetRule;
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
    case JOJOS_A:
    {
        GetRule = &CGame_JOJOS_A::GetRule;
        return TRUE;
    }
    case JOJOS_A_DIR_50:
    case JOJOS_A_DIR_51:
    {
        GetRuleCtr = &CGame_JOJOS_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_JOJOS_A_DIR::ResetRuleCtr;
        GetRule = &CGame_JOJOS_A_DIR::GetRule;
        GetNextRule = &CGame_JOJOS_A_DIR::GetNextRule;

        return TRUE;
    }
    case JOJOSRPG_SNES:
    {
        GetRule = &CGame_JOJOSRPG_SNES::GetRule;
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
    {
        GetRule = &CGame_LASTBLADE_A::GetRule;
        return TRUE;
    }
    case LASTBLADE2_A:
    {
        GetRule = &CGame_LASTBLADE2_A::GetRule;
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
    {
        GetRule = &CGame_SAMSHO5_A::GetRule;
        return TRUE;
    }
    case SAMSHO5SP_A:
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
    case UNICLR_A:
    {
        GetRuleCtr = &CGame_UNICLR_A::GetRuleCtr;
        ResetRuleCtr = &CGame_UNICLR_A::ResetRuleCtr;
        GetRule = &CGame_UNICLR_A::GetRule;
        GetNextRule = &CGame_UNICLR_A::GetNextRule;

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

CGameClass* CGameLoad::CreateGame(int nGameFlag, UINT32 nConfirmedROMSize, int nExtraGameData)
{
    switch (nGameFlag)
    {
    case AOF1_A:
    {
        return new CGame_AOF1_A(nConfirmedROMSize);
    }

    case AOF3_A:
    {
        return new CGame_AOF3_A(nConfirmedROMSize, nExtraGameData);
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
    case CFTE_SNES:
    {
        return new CGame_CFTE_SNES(nConfirmedROMSize);
    }
    case COTA_A:
    {
        return new CGame_COTA_A(nConfirmedROMSize);
    }
    case CVS2_A:
    {
        return new CGame_CVS2_A(nConfirmedROMSize);
    }
    case DANKUGA_A:
    {
        return new CGame_DanKuGa_A_DIR(-1);
    }
    case DBFCI_A:
    {
        return new CGame_DBFCI_A(nConfirmedROMSize);
    }
    case DBZHD_SNES:
    {
        return new CGame_DBZHD_SNES(nConfirmedROMSize);
    }
    case DOUBLEDRAGON_A:
    {
        return new CGame_DOUBLEDRAGON_A(nConfirmedROMSize);
    }
    case FatalFury1_A:
    {
        return new CGame_FatalFury1_A(nConfirmedROMSize);
    }
    case FatalFuryS_A:
    {
        return new CGame_FatalFuryS_A(nConfirmedROMSize);
    }
    case FatalFuryS_SNES:
    {
        return new CGame_FatalFuryS_SNES(nConfirmedROMSize);
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
    case JOJOS_A:
    {
        return new CGame_JOJOS_A(nConfirmedROMSize, nExtraGameData);
    }
    case JOJOS_A_DIR_50:
    {
        return new CGame_JOJOS_A_DIR(-1, 50);
    }
    case JOJOS_A_DIR_51:
    {
        return new CGame_JOJOS_A_DIR(-1, 51);
    }
    case JOJOSRPG_SNES:
    {
        return new CGame_JOJOSRPG_SNES(nConfirmedROMSize);
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
        return new CGame_KOF99AE_A(nConfirmedROMSize, nExtraGameData);
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
        return new CGame_KOF02UM_S(nConfirmedROMSize, nExtraGameData);
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
    {
        return new CGame_LASTBLADE_A(nConfirmedROMSize);
    }
    case LASTBLADE2_A:
    {
        return new CGame_LASTBLADE2_A(nConfirmedROMSize);
    }
    case MAAB_A:
    {
        return new CGame_MAAB_A(nConfirmedROMSize);
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
        return new CGame_MSH_A(nConfirmedROMSize, nExtraGameData);
    }
    case MSHVSF_A:
    {
        return new CGame_MSHVSF_A(nConfirmedROMSize, nExtraGameData);
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
    {
        return new CGame_MVC2_D;
    }
    case MVC2_P:
    {
        return new CGame_MVC2_P;
    }
    case NeoBomberman_A:
    {
        return new CGame_NeoBomberman_A(nConfirmedROMSize);
    }
    case NEOGEO_A:
    {
        return new CGame_NEOGEO_A(nConfirmedROMSize);
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
        return new CGame_REDEARTH_A(nConfirmedROMSize, nExtraGameData);
    }
    case REDEARTH_A_DIR_30:
    {
        return new CGame_RedEarth_A_DIR(-1, 30);
    }
    case REDEARTH_A_DIR_31:
    {
        return new CGame_RedEarth_A_DIR(-1, 31);
    }
    case REDEARTH_A_DIR_50:
    {
        return new CGame_RedEarth_A_DIR(-1, 50);
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
    {
        return new CGame_SAMSHO5_A(nConfirmedROMSize);
    }
    case SAMSHO5SP_A:
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
        return new CGame_SFIII3_A(nConfirmedROMSize, nExtraGameData);
    }
    case SFIII3_A_DIR_10:
    {
        return new CGame_SFIII3_A_DIR(-1, 10);
    }
    case SFIII3_A_DIR_4rd:
    {
        return new CGame_SFIII3_A_DIR(-1, 4);
    }
    case SFIII3_A_DIR_4rd_10:
    {
        return new CGame_SFIII3_A_DIR(-1, 14);
    }
    case SFIII3_A_DIR_51:
    {
        return new CGame_SFIII3_A_DIR(-1, 51);
    }
    case SFIII3_A_DIR_EX:
    {
        return new CGame_SFIII3_A_DIR(-1, 70);
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
    {
        return new CGame_SFA2_A(nConfirmedROMSize, nExtraGameData);
    }
    case SFA3_A:
    {
        return new CGame_SFA3_A(nConfirmedROMSize);
    }
    case SFZ3U_A:
    {
        return new CGame_SFZ3U_A(nConfirmedROMSize);
    }
    case SF2CE_A:
    {
        return new CGame_SF2CE_A(nConfirmedROMSize, nExtraGameData);
    }
    case SF2HF_A:
    {
        return new CGame_SF2HF_A(nConfirmedROMSize, nExtraGameData);
    }
    case SPF2T_A:
    {
        return new CGame_SPF2T_A(nConfirmedROMSize);
    }
    case SSF2T_A:
    {
        return new CGame_SSF2T_A(nConfirmedROMSize, nExtraGameData);
    }
    case SSF2T_GBA:
    {
        return new CGame_SSF2T_GBA(nConfirmedROMSize);
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
    case UNICLR_A:
    {
        return new CGame_UNICLR_A(nConfirmedROMSize);
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

CGameClass* CGameLoad::LoadFile(int nGameFlag, WCHAR* pszLoadFile)
{
    CGameClass* OutGame = NULL;

    CFile CurrFile;
    sFileRule CurrRule;

    if (!VerifyLocationIsUsable(pszLoadFile))
    {
        return nullptr;
    }

    if (!SetGame(nGameFlag))
    {
        return NULL;
    }

    int nGameRule = 0;

    // Handle games that support multiple ROMs here
    WCHAR* pszFileNameLowercase = wcsrchr(pszLoadFile, L'\\');

    if (pszFileNameLowercase)
    {
        // Step forward to the filename
        pszFileNameLowercase++;
        _wcslwr(pszFileNameLowercase);

        switch (nGameFlag)
        {
        case AOF3_A:
            nGameRule = ((wcsstr(pszFileNameLowercase, L"p1") != nullptr) ? 1 : 2);
            break;
        case JOJOS_A:
            nGameRule = ((wcscmp(pszFileNameLowercase, L"50") == 0) ? 50 : 51);
            break;
        case KOF99AE_A:
            nGameRule = ((wcsstr(pszFileNameLowercase, L"p2") != nullptr) ? 2 : 3);
            break;
        case KOF02UM_S:
            if (wcscmp(pszFileNameLowercase, L"bar.bin") == 0)
            {
                nGameRule = (int)KOF02UMS_ROMOptions::Bar;
            }
            else if (wcscmp(pszFileNameLowercase, L"max2bg.bin") == 0)
            {
                nGameRule = (int)KOF02UMS_ROMOptions::Max2BG;
            }
            else if (wcscmp(pszFileNameLowercase, L"clear.bin") == 0)
            {
                nGameRule = (int)KOF02UMS_ROMOptions::Clear;
            }
            else if (wcscmp(pszFileNameLowercase, L"psel.bin-n") == 0)
            {
                nGameRule = (int)KOF02UMS_ROMOptions::PSel;
            }
            else if (wcscmp(pszFileNameLowercase, L"rank.bin") == 0)
            {
                nGameRule = (int)KOF02UMS_ROMOptions::Rank;
            }
            else if (wcscmp(pszFileNameLowercase, L"conte.bin") == 0)
            {
                nGameRule = (int)KOF02UMS_ROMOptions::Conte;
            }
            else
            {
                nGameRule = (int)KOF02UMS_ROMOptions::Main;
            }
            break;
        case MSHVSF_A:
        {
            nGameRule = ((wcsstr(pszFileNameLowercase, L".06a") != nullptr) ? 6 : 7);
            break;
        }
        case MSH_A:
        {
            nGameRule = ((wcsstr(pszFileNameLowercase, L".05") != nullptr) ? 5 : 6);
            break;
        }
        case REDEARTH_A:
        {
            if (wcscmp(pszFileNameLowercase, L"30") == 0)
            {
                nGameRule = 30;
            }
            else if (wcscmp(pszFileNameLowercase, L"50") == 0)
            {
                nGameRule = 50;
            }
            else
            {
                nGameRule = 31;
            }
            break;
        }
        case SFA2_A:
        {
            nGameRule = ((wcsstr(pszFileNameLowercase, L".08") != nullptr) ? 8 : 7);
            break;
        }
        case SFIII3_A:
        {
            nGameRule = ((wcsstr(pszFileNameLowercase, L"10") != nullptr) ? 10 : 51);
            break;
        }
        case SF2HF_A:
        case SF2CE_A: // these two share the same general logic
        {
            if (wcsstr(pszFileNameLowercase, L"21") != nullptr)
            {
                nGameRule = 21;
            }
            else if (wcsstr(pszFileNameLowercase, L"23") != nullptr)
            {
                nGameRule = 23;
            }
            else
            {
                nGameRule = 22;
            }
            break;
        }
        case SSF2T_A:
        {
            if (wcsstr(pszFileNameLowercase, L".03") != nullptr)
            {
                nGameRule = 3;
            }
            else if (wcsstr(pszFileNameLowercase, L".08") != nullptr)
            {
                nGameRule = 8;
            }
            else
            {
                nGameRule = 4;
            }
            break;
        }
        default:
            break;
        }
    }

    CurrRule = GetRule(nGameRule);

    if (CurrFile.Open(pszLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ULONGLONG nGameFileLength = CurrFile.GetLength();
        bool isSafeToRunGame = ((short int)CurrRule.uVerifyVar == -1) || (nGameFileLength == CurrRule.uVerifyVar);

        if (!isSafeToRunGame)
        {
            if ((nGameFlag == SAMSHO5SP_A) && (nGameFileLength == 0x800000))
            {
                // Samurai Shodown has a second ROM variant, but we only use the first half here, and things align.
                isSafeToRunGame = true;
            }
            else if ((nGameFlag == SVCPLUSA_A) && (nGameFileLength == 0x200000))
            {
                // SVCPlus uses different ROM sizes that the code accounts for
                isSafeToRunGame = true;
            }
        }

        if (!isSafeToRunGame) // we could hook people trying to load Venture here... file size is 4194304
        {
            CString strQuestion;
            UINT nStringID;

            strQuestion.Format(L"Internal warning: Game file size is 0x%x, but 0x%x is the expected size. You may just need to update the value of m_nExpectedGameROMSize for your game.\n", (int)nGameFileLength, CurrRule.uVerifyVar);
            OutputDebugString(strQuestion);

            if ((nGameFlag == JOJOS_A) && (nGameRule == 50) && (nGameFileLength == 4194304))
            {
                nStringID = IDS_ROMISVENTURE;
            }
            else
            {
                nStringID = IDS_ROMMISMATCH_CHECK;
            }

            if (strQuestion.LoadString(nStringID))
            {
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
        }

        if (isSafeToRunGame)
        {
            OutGame = CreateGame(nGameFlag, (UINT32)nGameFileLength, nGameRule);
            OutGame->SetLoadDir(pszLoadFile);

            UINT32 crcValue = 0;
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

            OutGame->SetSpecificValuesForCRC(crcValue);

            if (OutGame->LoadFile(&CurrFile, 0))
            {
                OutGame->SetIsDir(FALSE);
                //nSaveLoadSucc++;

                //Increase the sort counter
                //OutGame->nRedirCtr++;
            }
            else
            {
                safe_delete(OutGame);
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

    if (OutGame)
    {
        //Set it to the end of the redirect list
        //OutGame->rgUnitRedir[OutGame->nRedirCtr] = INVALID_UNIT_VALUE;
    }

    strLoadSaveStr.Format(OutGame ? IDS_LOADSAVE_SUCCESS : IDS_LOADSAVE_FAILURE);

    return OutGame;
}

CGameClass* CGameLoad::LoadDir(int nGameFlag, WCHAR* pszLoadDir)
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
        return nullptr;
    }

    if (!SetGame(nGameFlag))
    {
        return nullptr;
    }

    if (ResetRuleCtr == nullptr)
    {
        // This isn't a directory-based game: something is wrong
        return nullptr;
    }

    ResetRuleCtr();

    int nCurrRuleCtr = GetRuleCtr();

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
            bool fActualFileSizeIsSafe = ((short int)CurrRule.uVerifyVar == -1) || (CurrFile.GetLength() == CurrRule.uVerifyVar);

            if (!fActualFileSizeIsSafe)
            {
                CString strError;
                strError.Format(L"The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n\nAre you sure you wish to load this file?", strCurrFile.GetString(), CurrRule.uVerifyVar, (int)CurrFile.GetLength());
                fActualFileSizeIsSafe = (MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_YESNO | MB_ICONERROR) == IDYES);
                strError.Format(L"WARNING: The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n", strCurrFile.GetString(), CurrRule.uVerifyVar, (int)CurrFile.GetLength());
                OutputDebugString(strError);
            }

            if (fActualFileSizeIsSafe)
            {
                if (!OutGame)
                {
                    OutGame = CreateGame(nGameFlag, -1);

                    if (OutGame)
                    {
                        OutGame->SetIsDir();
                        OutGame->SetLoadDir(pszLoadDir);
                    }
                }

                if (OutGame && OutGame->LoadFile(&CurrFile, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;

                    //Increase the sort counter
                    OutGame->nRedirCtr++;
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
                    ((nGameFlag == MVC2_P) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION))))
            {
                OutputDebugString(L"CGameLoad::LoadDir : Team View for MvC2. Ignoring file open.\n");
                if (OutGame->LoadFile(nullptr, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;

                    //Increase the sort counter
                    OutGame->nRedirCtr++;
                }
            }
            else
            {
                if (!fShownFileError)
                {
                    fShownFileError = true;
                    CString strError;
                    strError.Format(L"Could not find file \"%s\" needed for this game.", strCurrFile.GetString());
                    OutputDebugString(strError);
                    OutputDebugString(L"\n");
                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
                }

                nSaveLoadErr++;
            }
        }

        nCurrRuleCtr = GetRuleCtr();
    }

    if (OutGame)
    {
        //Set it to the end of the redirect list
        OutGame->rgUnitRedir[OutGame->nRedirCtr] = INVALID_UNIT_VALUE;
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

bool CGameLoad::IsLocationOnReadOnlyDrive(LPCWSTR pszLocation, LPWSTR pszDrivePath /*= nullptr*/, size_t ccPathSize /*= 0*/)
{
    bool fIsMediaReadOnly = false;
    WCHAR szPath[MAX_PATH];

    // strip the directory down to actual path since that's what GetVolumeInformation requires
    wcsncpy_s(szPath, pszLocation, ARRAYSIZE(szPath));

    WCHAR* pszSlash = wcsstr(szPath, L"\\");

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

void CGameLoad::SaveGame(CGameClass* CurrGame)
{
    CFile FileSave;

    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    SetGame(CurrGame->GetGameFlag());

    UINT16 nFileAmt = CurrGame->GetFileAmt();
    LPCWSTR pszLoadDir = CurrGame->GetLoadDir();
    UINT16* rgUnitRedir = CurrGame->rgUnitRedir;
    CString strErrorFile;

    if (CurrGame->GetIsDir())
    {
        BOOL* rgFileIsChanged = CurrGame->GetFileChangeTrackingArray();
        BOOL fWasGameChangedInSession = CurrGame->WasGameFileChangedInSession();
        BOOL fGameMapsUnitsToFiles = CurrGame->GetGameMapsUnitsToFiles();

        for (UINT16 nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
        {
            if (fGameMapsUnitsToFiles ? rgFileIsChanged[nFileCtr] : fWasGameChangedInSession)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                bool fIsMvC2TeamView = ((CurrGame->GetGameFlag() == MVC2_D) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                                       ((CurrGame->GetGameFlag() == MVC2_P) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION));

                if (!fIsMvC2TeamView)
                {
                    CString szLoad;
                    sFileRule CurrRule = GetRule(nFileCtr | 0xFF00);

                    szLoad.Format(L"%s\\%s", pszLoadDir, CurrRule.szFileName);

                    BOOL fFileOpened = FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary);

                    if (!fFileOpened && CurrRule.fHasAltName)
                    {
                        CString strAltFileName;

                        OutputDebugString(L"Saving game via alternate filenames...\n");

                        strAltFileName.Format(L"%s\\%s", pszLoadDir, CurrRule.szAltFileName);

                        fFileOpened = FileSave.Open(strAltFileName, CFile::modeReadWrite | CFile::typeBinary);
                    }

                    if (fFileOpened)
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            nSaveLoadSucc++;

                            if (fGameMapsUnitsToFiles)
                            {
                                // Mark as clean so we don't save it out until it gets dirtied again.
                                rgFileIsChanged[nFileCtr] = FALSE;
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
                        strErrorFile = szLoad;
                        nSaveLoadErr++;
                    }
                }
                else
                {
                    // Ignore the virtual team view
                    // Mark as clean so we don't save it out until it gets dirtied again.
                    rgFileIsChanged[nFileCtr] = FALSE;
                    nSaveLoadSucc++;
                }
            }
        }
    }
    else
    {
        if (CurrGame->WasGameFileChangedInSession())
        {
            nSaveLoadCount = 1;

            if (FileSave.Open(pszLoadDir, CFile::modeReadWrite | CFile::typeBinary))
            {
                if (CurrGame->SaveFile(&FileSave, 0))
                {
                    nSaveLoadSucc++;
                }

                FileSave.Abort();
            }
            else
            {
                strErrorFile = pszLoadDir;
                nSaveLoadErr = 1;
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
            strError.Format(uErrorString, strErrorFile);
        }
        else
        {
            WCHAR szPath[MAX_PATH];
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
        strLoadSaveStr.LoadString(IDS_PATCH_EMPTY);
    }
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

        UINT16 nFileAmt = CurrGame->GetFileAmt();
        CString strErrorFile;
        const bool fIsDreamcast = CurrGame->GetGameFlag() == MVC2_D;

        if (CurrGame->GetIsDir())
        {
            for (UINT16 nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                bool fIsMvC2TeamView = (nFileCtr == MVC2_D_TEAMVIEW_LOCATION);

                if (!fIsMvC2TeamView)
                {
                    CString szLoad;
                    sFileRule CurrRule = fIsDreamcast ? CGame_MVC2_P::GetRule(nFileCtr | 0xFF00) : CGame_MVC2_D::GetRule(nFileCtr | 0xFF00);

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
        strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR);
    }
}

void CGameLoad::SavePatchFile(CGameClass* CurrGame)
{
    SetGame(CurrGame->GetGameFlag());
    UINT32 nNumberOfChangesSaved = 0;
    
    if (!CurrGame->GetIsDir())
    {
        if (CurrGame->WasGameFileChangedInSession())
        {
            static LPCWSTR szPatchFilter[] = { L"IPS Patch File|*.ips|"
                                               L"|" };

            LPCWSTR pszLoadedFile = CurrGame->GetLoadDir();
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
        strLoadSaveStr.LoadString(IDS_IPS_EMPTY);
    }
}

void CGameLoad::SaveMultiplePatchFiles(CGameClass* CurrGame, CString strTargetDirectory)
{
    SetGame(CurrGame->GetGameFlag());
    UINT32 nNumberOfChangesSaved = 0;
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
        strLoadSaveStr.LoadString(IDS_IPS_EMPTY);
    }
}

#include "StdAfx.h"
#include "Game_SFTM_A.h"

CGame_SFTM_A::SFTMLoadingKey CGame_SFTM_A::m_eVersionToLoad = SFTMLoadingKey::V112Normal;

void CGame_SFTM_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SFTMLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        // MAME has a rerip with different filenames: we'll support both
        { L"sfm_prom0_v1.1.prom0", SFTMLoadingKey::MAME110 },
        { L"sfm_prom0_v1.11.prom0", SFTMLoadingKey::MAME111 },
        { L"sfm_prom0_v1.12.prom0", SFTMLoadingKey::MAME112 },
        { L"sfmk_prom0_v1.12.prom0", SFTMLoadingKey::MAME112k },
        { L"sfmn_prom0_v1.12.prom0", SFTMLoadingKey::MAME112j },
        { L"sfmn_prom0_v1.14.prom0", SFTMLoadingKey::MAME114 },

        { L"sfm_0_v1.1.prom0", SFTMLoadingKey::V110 },
        { L"sfm_0_v1.11.prom0", SFTMLoadingKey::V111 },

        { L"sfm_0_v1.12.prom0", SFTMLoadingKey::V112Normal },
        { L"sfmn_0_v1.12.prom0", SFTMLoadingKey::V112Japan },

        { L"sfmn_0_v1.14.prom0", SFTMLoadingKey::V114Japan },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = SFTMLoadingKey::V112Normal;
    }

    return;
}

CGame_SFTM_A::CGame_SFTM_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
        case SFTMLoadingKey::MAME110:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_MAME110);
            break;
        case SFTMLoadingKey::MAME111:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_MAME111);
            break;
        case SFTMLoadingKey::MAME112:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_MAME112);
            break;
        case SFTMLoadingKey::MAME112j:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_MAME112j);
            break;
        case SFTMLoadingKey::MAME112k:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_MAME112k);
            break;
        case SFTMLoadingKey::MAME114:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_MAME114);
            break;
        case SFTMLoadingKey::V110:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_V110);
            break;
        case SFTMLoadingKey::V111:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_V111);
            break;
        case SFTMLoadingKey::V112Normal:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_V112Normal);
            break;
        case SFTMLoadingKey::V112Japan:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_V112Japan);
            break;
        case SFTMLoadingKey::V114Japan:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_V114Japan);
            break;
    }
}

sFileRule CGame_SFTM_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        case SFTMLoadingKey::MAME110:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_MAME110);
        case SFTMLoadingKey::MAME111:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_MAME111);
        case SFTMLoadingKey::MAME112:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_MAME112);
        case SFTMLoadingKey::MAME112j:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_MAME112j);
        case SFTMLoadingKey::MAME112k:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_MAME112k);
        case SFTMLoadingKey::MAME114:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_MAME114);
        case SFTMLoadingKey::V110:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V110);
        case SFTMLoadingKey::V111:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V111);
        case SFTMLoadingKey::V112Normal:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V112Normal);
        case SFTMLoadingKey::V112Japan:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V112Japan);
        case SFTMLoadingKey::V114Japan:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V114Japan);
    }
}

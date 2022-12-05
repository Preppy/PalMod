#include "StdAfx.h"
#include "Game_SFTM_A.h"

CGame_SFTM_A::SFTMLoadingKey CGame_SFTM_A::m_eVersionToLoad = SFTMLoadingKey::V112Normal;

void CGame_SFTM_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SFTMLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
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

#include "StdAfx.h"
#include "Game_AvgrsGS_A_DIR.h"

CGame_AvgrsGS_A_DIR::AvgrsGSLoadingKey CGame_AvgrsGS_A_DIR::m_eVersionToLoad = AvgrsGSLoadingKey::Normal;

void CGame_AvgrsGS_A_DIR::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, AvgrsGSLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"sf_00-0.7k", AvgrsGSLoadingKey::Normal },
        { L"agsbh_00-0.7k", AvgrsGSLoadingKey::BossHack },
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
        m_eVersionToLoad = AvgrsGSLoadingKey::Normal;
    }

    return;
}

CGame_AvgrsGS_A_DIR::CGame_AvgrsGS_A_DIR(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == AvgrsGSLoadingKey::Normal) ? m_sCoreGameData_Normal : m_sCoreGameData_BossHack);
}

sFileRule CGame_AvgrsGS_A_DIR::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == AvgrsGSLoadingKey::Normal) ? m_sFileLoadingData_Normal : m_sFileLoadingData_BossHack);
}

sFileRule CGame_AvgrsGS_A_DIR::GetNextRule()
{
    return CGameClassByDir::GetNextRule((m_eVersionToLoad == AvgrsGSLoadingKey::Normal) ? m_sFileLoadingData_Normal : m_sFileLoadingData_BossHack);
};
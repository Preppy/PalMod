#include "StdAfx.h"
#include "Game_MSH_A.h"

CGame_MSH_A::MSHLoadingKey CGame_MSH_A::m_eVersionToLoad = MSHLoadingKey::ROM05;

void CGame_MSH_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MSHLoadingKey> m_rgFileNameToVersion =
    {
        // these must be all lower case
        { L"msh.05", MSHLoadingKey::ROM05 },
        { L"msh.05a", MSHLoadingKey::ROM05 },
        { L"mshud.05", MSHLoadingKey::ROM05 },
        { L"msh.06b", MSHLoadingKey::ROM06 },
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
        m_eVersionToLoad = MSHLoadingKey::ROM05;
    }

    return;
}

CGame_MSH_A::CGame_MSH_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case MSHLoadingKey::ROM05:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM05);
        break;
    case MSHLoadingKey::ROM06:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM06);
        break;
    }
}

sFileRule CGame_MSH_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case MSHLoadingKey::ROM05:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM05);
    case MSHLoadingKey::ROM06:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM06);
    }
}

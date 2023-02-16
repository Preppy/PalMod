#include "StdAfx.h"
#include "Game_SurvivalArts_A.h"

CGame_SurvivalArts_A::SurvivalArtsALoadingKey CGame_SurvivalArts_A::m_eVersionToLoad = SurvivalArtsALoadingKey::World;

void CGame_SurvivalArts_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SurvivalArtsALoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"usa-pr-l.u4", SurvivalArtsALoadingKey::USA },
        { L"prl-r6.u4", SurvivalArtsALoadingKey::World },
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
        m_eVersionToLoad = SurvivalArtsALoadingKey::World;
    }

    return;
}

CGame_SurvivalArts_A::CGame_SurvivalArts_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SurvivalArtsALoadingKey::USA:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_USA);
        break;
    case SurvivalArtsALoadingKey::World:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_World);
        break;
    }
}

sFileRule CGame_SurvivalArts_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SurvivalArtsALoadingKey::USA:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USA);
    case SurvivalArtsALoadingKey::World:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_World);
    }
}

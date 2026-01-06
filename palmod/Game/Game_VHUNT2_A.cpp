#include "StdAfx.h"
#include "Game_VHUNT2_A.h"

CGame_VHUNT2_A::VHunt2LoadingKey CGame_VHUNT2_A::m_eVersionToLoad = VHunt2LoadingKey::ROM09;

void CGame_VHUNT2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, VHunt2LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"vh2j.09", VHunt2LoadingKey::ROM09 },
        { L"vh2j.10", VHunt2LoadingKey::ROM10 },        
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
        m_eVersionToLoad = VHunt2LoadingKey::ROM09;
    }

    return;
}

CGame_VHUNT2_A::CGame_VHUNT2_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == VHunt2LoadingKey::ROM09) ? m_sCoreGameData_09 : m_sCoreGameData_10);
}

sFileRule CGame_VHUNT2_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == VHunt2LoadingKey::ROM09) ? m_sFileLoadingData_09 : m_sFileLoadingData_10);
}

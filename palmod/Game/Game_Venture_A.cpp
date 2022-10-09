#include "StdAfx.h"
#include "Game_VENTURE_A.h"

CGame_VENTURE_A::VentureLoadingKey CGame_VENTURE_A::eVersionToLoad = VentureLoadingKey::ROM50;

void CGame_VENTURE_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, VentureLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"31", VentureLoadingKey::ROM31 },
        { L"50", VentureLoadingKey::ROM50 },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        eVersionToLoad = result->second;
    }
    else
    {
        eVersionToLoad = VentureLoadingKey::ROM50;
    }

    return;
}

CGame_VENTURE_A::CGame_VENTURE_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (eVersionToLoad == VentureLoadingKey::ROM31) ? m_sCoreGameData_31 : m_sCoreGameData_50);
}

sFileRule CGame_VENTURE_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (eVersionToLoad == VentureLoadingKey::ROM31) ? m_sFileLoadingData_31 : m_sFileLoadingData_50);
}

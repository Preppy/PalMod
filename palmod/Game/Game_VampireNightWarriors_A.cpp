#include "StdAfx.h"
#include "Game_VampireNightWarriors_A.h"

CGame_VampireNightWarriors_A::VNWLoadingKey CGame_VampireNightWarriors_A::m_eVersionToLoad = VNWLoadingKey::ROM09;

void CGame_VampireNightWarriors_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, VNWLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"vame.09a", VNWLoadingKey::ROM09 },
        { L"vamu.09a", VNWLoadingKey::ROM09 },
        { L"vamu.09b", VNWLoadingKey::ROM09 },
        { L"vama.09a", VNWLoadingKey::ROM09 },
        { L"vamh.09c", VNWLoadingKey::ROM09 },
        { L"vamud.09a", VNWLoadingKey::ROM09 },
        { L"vamj.09", VNWLoadingKey::ROM09 },
        { L"vamj.09a", VNWLoadingKey::ROM09 },

        { L"vame.04a", VNWLoadingKey::ROM04 },
        { L"vamu.04a", VNWLoadingKey::ROM04 },
        { L"vamu.04b", VNWLoadingKey::ROM04 },
        { L"vama.04a", VNWLoadingKey::ROM04 },
        { L"vamh.04c", VNWLoadingKey::ROM04 },
        { L"vamud.04a", VNWLoadingKey::ROM04 },

        { L"vamj.04", VNWLoadingKey::ROM04 },
        { L"vamj.04a", VNWLoadingKey::ROM04 },
        { L"vamj.04b", VNWLoadingKey::ROM04 },
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
        m_eVersionToLoad = VNWLoadingKey::ROM09;
    }

    return;
}

CGame_VampireNightWarriors_A::CGame_VampireNightWarriors_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == VNWLoadingKey::ROM04) ? m_sCoreGameData_4 : m_sCoreGameData_9);
}

sFileRule CGame_VampireNightWarriors_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == VNWLoadingKey::ROM04) ? m_sFileLoadingData_4 : m_sFileLoadingData_9);
}

#include "StdAfx.h"
#include "Game_FatalFury2_A.h"

CGame_FatalFury2_A::FF2LoadingKey CGame_FatalFury2_A::m_eVersionToLoad = FF2LoadingKey::Normal;

void CGame_FatalFury2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, FF2LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"047-p1.bin", FF2LoadingKey::Normal },
        { L"047-epr.ep1", FF2LoadingKey::Normal },
        { L"047-p1.p1", FF2LoadingKey::Jumbo },
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
        m_eVersionToLoad = FF2LoadingKey::Normal;
    }

    return;
}

CGame_FatalFury2_A::CGame_FatalFury2_A(uint32_t nConfirmedROMSize /*= -1*/)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == FF2LoadingKey::Normal) ? m_sCoreGameData_Normal : m_sCoreGameData_Alt);
}

sFileRule CGame_FatalFury2_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == FF2LoadingKey::Normal) ? FatalFury2_A_FileLoadingData_Normal : FatalFury2_A_FileLoadingData_Alt);
}

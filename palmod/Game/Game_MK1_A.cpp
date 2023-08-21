#include "StdAfx.h"
#include "Game_MK1_A.h"

CGame_MK1_A::MK1ALoadingKey CGame_MK1_A::m_eVersionToLoad = MK1ALoadingKey::V50Normal;

void CGame_MK1_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MK1ALoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"l5_mortal_kombat_t-unit_uj12_game_rom.uj12", MK1ALoadingKey::V50Normal },
        { L"mkt-uj12.bin", MK1ALoadingKey::V50Alt },
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
        m_eVersionToLoad = MK1ALoadingKey::V50Normal;
    }

    return;
}

CGame_MK1_A::CGame_MK1_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case MK1ALoadingKey::V50Normal:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V50T);
        break;
    case MK1ALoadingKey::V50Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V50TAlt);
        break;
    }
}

sFileRule CGame_MK1_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case MK1ALoadingKey::V50Normal:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V50T);
    case MK1ALoadingKey::V50Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V50TAlt);
    }
}

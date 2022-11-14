#include "StdAfx.h"
#include "Game_MK2_A.h"

CGame_MK2_A::MK2ALoadingKey CGame_MK2_A::m_eVersionToLoad = MK2ALoadingKey::V31Normal;

void CGame_MK2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MK2ALoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"l3.1_mortal_kombat_ii_game_rom_uj12.uj12", MK2ALoadingKey::V31Normal },
        { L"uj12.l31", MK2ALoadingKey::V31Alt },
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
        m_eVersionToLoad = MK2ALoadingKey::V31Normal;
    }

    return;
}

CGame_MK2_A::CGame_MK2_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case MK2ALoadingKey::V31Normal:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V31Normal);
        break;
    case MK2ALoadingKey::V31Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V31Alt);
        break;
    }
}

sFileRule CGame_MK2_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case MK2ALoadingKey::V31Normal:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V31Normal);
    case MK2ALoadingKey::V31Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V31Alt);
    }
}

uint32_t CGame_MK2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Mortal Kombat II (Arcade rev L3.1)", L"l3.1_mortal_kombat_ii_game_rom_uj12.uj12", 0xcf100a75, 0 },
        { L"Mortal Kombat II (Arcade rev L3.1)", L"uj12.l31", 0xcf100a75, 0 },
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

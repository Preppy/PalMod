#include "StdAfx.h"
#include "Game_SSF2T_A.h"

CGame_SSF2T_A::SSF2TLoadingKey CGame_SSF2T_A::m_eVersionToLoad = SSF2TLoadingKey::ROM03;

void CGame_SSF2T_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SSF2TLoadingKey> m_rgFileNameToVersion =
    {
        { L"sfxe.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxe.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxe.08", SSF2TLoadingKey::ROM08 },
        { L"sfxa.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxa.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxa.08", SSF2TLoadingKey::ROM08 },
        { L"sfxh.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxh.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxh.08", SSF2TLoadingKey::ROM08 },
        { L"sfxu.03e", SSF2TLoadingKey::ROM03 },
        { L"sfxu.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxu.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxu.08", SSF2TLoadingKey::ROM08 },
        { L"sfxj.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxj.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxj.08", SSF2TLoadingKey::ROM08 },
        { L"sfxad.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxad.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxad.08", SSF2TLoadingKey::ROM08 },
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
        m_eVersionToLoad = SSF2TLoadingKey::ROM03;
    }

    return;
}

CGame_SSF2T_A::CGame_SSF2T_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SSF2TLoadingKey::ROM03:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM03);
        break;
    case SSF2TLoadingKey::ROM04:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM04);
        break;
    case SSF2TLoadingKey::ROM08:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM08);
        break;
    }
}

sFileRule CGame_SSF2T_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SSF2TLoadingKey::ROM03:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM03);
    case SSF2TLoadingKey::ROM04:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM04);
    case SSF2TLoadingKey::ROM08:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM08);
    }
}

void CGame_SSF2T_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nCurrentExtraUnitId)
    {
        // For Steam, we can handle the split ROMs as one unit.  Adjust offsets.
        if (nUnitId < ARRAYSIZE(SSF2T_A_UNITS_4A))
        {
            // ROM04
            m_nCurrentPaletteROMLocation += 0x111737b5 - 0x43b54;
        }
        else if (nUnitId < (ARRAYSIZE(SSF2T_A_UNITS_4A) + ARRAYSIZE(SSF2T_A_UNITS_3C)))
        {
            // ROM03
            m_nCurrentPaletteROMLocation += 0x111737b5 - 0x43b54 - 0x80000;
        }
        else
        {
            // ROM08
            m_nCurrentPaletteROMLocation += 0x111737b5 - 0x43b54 + (4 * 0x80000);
        }
    }
}

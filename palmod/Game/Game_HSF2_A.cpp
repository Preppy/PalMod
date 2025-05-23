#include "StdAfx.h"
#include "Game_HSF2_A.h"

CGame_HSF2_A::HSF2LoadingKey CGame_HSF2_A::m_eVersionToLoad = HSF2LoadingKey::ROM04;

void CGame_HSF2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, HSF2LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"hs2u.03", HSF2LoadingKey::ROM03 },
        { L"hs2u.04", HSF2LoadingKey::ROM04 },
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
        m_eVersionToLoad = HSF2LoadingKey::ROM04;
    }

    return;
}

CGame_HSF2_A::CGame_HSF2_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == HSF2LoadingKey::ROM03) ? m_sCoreGameData_03 : m_sCoreGameData_04);
}

sFileRule CGame_HSF2_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == HSF2LoadingKey::ROM04) ? m_sFileLoadingData_03 : m_sFileLoadingData_04);
}

void CGame_HSF2_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nCurrentExtraUnitId)
    {
        // For Steam, we can handle the split ROMs as one unit.  Adjust the 03/04 units for their offsets.
        if (nUnitId < ARRAYSIZE(HSF2_A_UNITS_04))
        {
            m_nCurrentPaletteROMLocation += 0x80040;
        }
        else
        {
            m_nCurrentPaletteROMLocation += 0x40;
        }
    }
}

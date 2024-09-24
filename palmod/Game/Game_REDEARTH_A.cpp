#include "StdAfx.h"
#include "Game_REDEARTH_A.h"

RedEarthLoadingKey CGame_REDEARTH_A::m_eROMToLoad = RedEarthLoadingKey::RedEarthROM31;

void CGame_REDEARTH_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, RedEarthLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"30", RedEarthLoadingKey::RedEarthROM30 },
        { L"31", RedEarthLoadingKey::RedEarthROM31 },
        { L"50", RedEarthLoadingKey::RedEarthROM50 },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eROMToLoad = result->second;
    }
    else
    {
        m_eROMToLoad = RedEarthLoadingKey::RedEarthROM31;
    }

    return;
}

sFileRule CGame_REDEARTH_A::GetRule(uint32_t nRuleId)
{
    switch (m_eROMToLoad)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        return CGameClassByDir::GetRule(nRuleId, RedEarth_A_FileLoadingData_30);
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        return CGameClassByDir::GetRule(nRuleId, RedEarth_A_FileLoadingData_31);
    case RedEarthLoadingKey::RedEarthROM50:
        return CGameClassByDir::GetRule(nRuleId, RedEarth_A_FileLoadingData_50);
    }
}

CGame_REDEARTH_A::CGame_REDEARTH_A(uint32_t nConfirmedROMSize)
{
    switch (m_eROMToLoad)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_30);
        break;
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_31);
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_50);
        break;
    }
}

void CGame_REDEARTH_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nCurrentExtraUnitId)
    {
        // For Steam, we can handle the split ROMs as one unit.
        // Adjust each chunk by the offsets once they are known
        if (nUnitId <= ARRAYSIZE(REDEARTH_A_UNITS_31))
        {
            //m_nCurrentPaletteROMLocation += 0x80000;
        }
        else if (nUnitId <= (ARRAYSIZE(REDEARTH_A_UNITS_31) + ARRAYSIZE(REDEARTH_A_UNITS_30)))
        {
            //m_nCurrentPaletteROMLocation += 0x80000;
        }
        else // REDEARTH_A_UNITS_50
        {
            //m_nCurrentPaletteROMLocation += 0x80000;
        }
    }
}

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

uint32_t CGame_REDEARTH_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Red Earth: Stages (CPS3 ROM 30)",      L"30", 0x074cab4d, 0 },
        { L"Red Earth: Characters (CPS3 ROM 31)",  L"31", 0x14e2cad4, 0 },
        { L"Red Earth: Coming Next (CPS3 ROM 50)", L"50", 0x2f5b44bd, 0 },
    };

    if (ppKnownROMSet != nullptr)
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

#include "StdAfx.h"
#include "Game_RedEarth_A_DIR.h"
#include "..\palmod.h"

UINT16 CGame_RedEarth_A_DIR::uRuleCtr = 0;
int CGame_RedEarth_A_DIR::m_nSavedMode = 31;

constexpr auto RedEarth_Arcade_ROM_Base = L"redearth-simm";
constexpr auto RedEarth_Arcade_ROMSet_3 = 3;
constexpr auto RedEarth_Arcade_ROMSet_5 = 5;
constexpr auto RedEarth_Arcade_SIMMFileBaseNumber_30 = 0;
constexpr auto RedEarth_Arcade_SIMMFileBaseNumber_31 = 4;
constexpr auto RedEarth_Arcade_SIMMFileBaseNumber_50 = 0;
constexpr auto RedEarth_Arcade_ROMFilesNeeded_3 = 4;
constexpr auto RedEarth_Arcade_ROMFilesNeeded_5 = 2;
constexpr auto RedEarth_Arcade_SIMMLength = 0x200000;

CGame_RedEarth_A_DIR::CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize, int nRedEarthModeToLoad) :
        CGame_REDEARTH_A(RedEarth_Arcade_SIMMLength * ((nRedEarthModeToLoad != 50) ? RedEarth_Arcade_ROMFilesNeeded_3 : RedEarth_Arcade_ROMFilesNeeded_5), nRedEarthModeToLoad)   // Let RedEarth know that it's safe to load extras.
{
    m_nSIMMLength = c_nRedEarthSIMMLength;
    m_nNumberOfSIMMsPerSet = 2;
    m_pszSIMMBaseFileName = RedEarth_Arcade_ROM_Base;

    switch (m_nRedEarthMode)
    {
    case 30:
        m_nSIMMSetBaseNumber = RedEarth_Arcade_ROMSet_3;
        nGameFlag = REDEARTH_A_DIR_30;
        m_nSIMMSetStartingFileNumber = RedEarth_Arcade_SIMMFileBaseNumber_30;
        nFileAmt = m_nTotalNumberOfSIMMFilesNeeded = RedEarth_Arcade_ROMFilesNeeded_3;
        break;
    case 31:
    default:
        m_nSIMMSetBaseNumber = RedEarth_Arcade_ROMSet_3;
        nGameFlag = REDEARTH_A_DIR_31;
        m_nSIMMSetStartingFileNumber = RedEarth_Arcade_SIMMFileBaseNumber_31;
        nFileAmt = m_nTotalNumberOfSIMMFilesNeeded = RedEarth_Arcade_ROMFilesNeeded_3;
        break;
    case 50:
        m_nSIMMSetBaseNumber = RedEarth_Arcade_ROMSet_5;
        nGameFlag = REDEARTH_A_DIR_50;
        m_nSIMMSetStartingFileNumber = RedEarth_Arcade_SIMMFileBaseNumber_50;
        nFileAmt = m_nTotalNumberOfSIMMFilesNeeded = RedEarth_Arcade_ROMFilesNeeded_5;
        break;
    }

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

sFileRule CGame_RedEarth_A_DIR::GetRuleInternal(int nGameMode, UINT16 nUnitId)
{
    sFileRule NewFileRule;
    m_nSavedMode = nGameMode;
    UINT16 nAdjustedSIMMFileNumber;

    switch (nGameMode)
    {
    case 30:
        nAdjustedSIMMFileNumber = (nUnitId & 0x00FF) + RedEarth_Arcade_SIMMFileBaseNumber_30;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", RedEarth_Arcade_ROM_Base, RedEarth_Arcade_ROMSet_3, nAdjustedSIMMFileNumber);
        break;
    case 31:
    default:
        nAdjustedSIMMFileNumber = (nUnitId & 0x00FF) + RedEarth_Arcade_SIMMFileBaseNumber_31;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", RedEarth_Arcade_ROM_Base, RedEarth_Arcade_ROMSet_3, nAdjustedSIMMFileNumber);
        break;
    case 50:
        nAdjustedSIMMFileNumber = (nUnitId & 0x00FF) + RedEarth_Arcade_SIMMFileBaseNumber_50;
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", RedEarth_Arcade_ROM_Base, RedEarth_Arcade_ROMSet_5, nAdjustedSIMMFileNumber);
        break;
    }

    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_RedEarth_A_DIR::GetNextRuleInternal(int nGameMode)
{
    sFileRule NewFileRule = GetRuleInternal(nGameMode, uRuleCtr);
    UINT16 nMaxRuleNumber;

    uRuleCtr++;

    switch (nGameMode)
    {
    case 30:
        nMaxRuleNumber = RedEarth_Arcade_ROMFilesNeeded_3;
        break;
    case 31:
    default:
        nMaxRuleNumber = RedEarth_Arcade_ROMFilesNeeded_3;
        break;
    case 50:
        nMaxRuleNumber = RedEarth_Arcade_ROMFilesNeeded_5;
        break;
    }

    if (uRuleCtr >= nMaxRuleNumber)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

LPCWSTR CGame_RedEarth_A_DIR::GetGameName()
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return L"Red Earth: Stages (Arcade 3.x Rerip)";
    case 31:
    default:
        return L"Red Earth: Characters (Arcade 3.x Rerip)";
    case 50:
        return L"Red Earth: Next (Arcade 5.x Rerip)";
    }
}

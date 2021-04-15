#include "StdAfx.h"
#include "Game_RedEarth_A_DIR.h"
#include "..\palmod.h"

UINT16 CGame_RedEarth_A_DIR::uRuleCtr = 0;
int CGame_RedEarth_A_DIR::m_nSavedMode = 31;

constexpr auto RedEarth_Arcade_ROM_Base = L"redearth-simm";
constexpr auto RedEarth_Arcade_ROMSet = 3;
constexpr auto RedEarth_Arcade_SIMMFileBaseNumber_30 = 0;
constexpr auto RedEarth_Arcade_SIMMFileBaseNumber_31 = 4;
constexpr auto RedEarth_Arcade_ROMFilesNeeded = 4;
constexpr auto RedEarth_Arcade_SIMMLength = 0x200000;

CGame_RedEarth_A_DIR::CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize, int nRedEarthModeToLoad) :
        CGame_REDEARTH_A(RedEarth_Arcade_SIMMLength * RedEarth_Arcade_ROMFilesNeeded, nRedEarthModeToLoad)   // Let RedEarth know that it's safe to load extras.
{
    nFileAmt = RedEarth_Arcade_ROMFilesNeeded;
    nGameFlag = (nRedEarthModeToLoad == 30) ? REDEARTH_A_DIR_30 : REDEARTH_A_DIR_31;

    m_nSIMMLength = c_nRedEarthSIMMLength;
    m_nNumberOfSIMMsPerSet = 2;
    m_nTotalNumberOfSIMMFilesNeeded = RedEarth_Arcade_ROMFilesNeeded;
    m_pszSIMMBaseFileName = RedEarth_Arcade_ROM_Base;
    // We want the 3.x files
    m_nSIMMSetBaseNumber = RedEarth_Arcade_ROMSet;
    m_nSIMMSetStartingFileNumber = (nRedEarthModeToLoad == 30) ? RedEarth_Arcade_SIMMFileBaseNumber_30 : RedEarth_Arcade_SIMMFileBaseNumber_31;

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

sFileRule CGame_RedEarth_A_DIR::GetRuleInternal(int nGameMode, UINT16 nUnitId)
{
    sFileRule NewFileRule;
    m_nSavedMode = nGameMode;

    const UINT16 nAdjustedSIMMFileNumber = (nUnitId & 0x00FF) + ((nGameMode == 30) ? RedEarth_Arcade_SIMMFileBaseNumber_30 : RedEarth_Arcade_SIMMFileBaseNumber_31);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", RedEarth_Arcade_ROM_Base, RedEarth_Arcade_ROMSet, nAdjustedSIMMFileNumber);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_RedEarth_A_DIR::GetNextRuleInternal(int nGameMode)
{
    sFileRule NewFileRule = GetRuleInternal(nGameMode, uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= RedEarth_Arcade_ROMFilesNeeded)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

#include "StdAfx.h"
#include "Game_RedEarth_A_DIR.h"
#include "..\palmod.h"

UINT16 CGame_RedEarth_A_DIR::uRuleCtr = 0;

constexpr auto RedEarth_Arcade_ROM_Base = L"redearth-simm";
constexpr auto RedEarth_Arcade_ROMSet = 3;
constexpr auto RedEarth_Arcade_SIMMFileBaseNumber = 4;
constexpr auto RedEarth_Arcade_ROMFilesNeeded = 4;
constexpr auto RedEarth_Arcade_SIMMLength = 0x200000;

CGame_RedEarth_A_DIR::CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize) :
        CGame_REDEARTH_A(RedEarth_Arcade_SIMMLength * RedEarth_Arcade_ROMFilesNeeded)   // Let RedEarth know that it's safe to load extras.
{
    nFileAmt = 4;
    nGameFlag = REDEARTH_A_DIR;

    m_nSIMMLength = c_nRedEarthSIMMLength;
    m_nNumberOfSIMMsPerSet = 2;
    m_nTotalNumberOfSIMMFilesNeeded = RedEarth_Arcade_ROMFilesNeeded;
    m_pszSIMMBaseFileName = RedEarth_Arcade_ROM_Base;
    // We want the 3.1 files
    m_nSIMMSetBaseNumber = RedEarth_Arcade_ROMSet;
    m_nSIMMSetStartingFileNumber = RedEarth_Arcade_SIMMFileBaseNumber;

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

sFileRule CGame_RedEarth_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedSIMMFileNumber = RedEarth_Arcade_SIMMFileBaseNumber + (nUnitId & 0x00FF);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", RedEarth_Arcade_ROM_Base, RedEarth_Arcade_ROMSet, nAdjustedSIMMFileNumber);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_RedEarth_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= RedEarth_Arcade_ROMFilesNeeded)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

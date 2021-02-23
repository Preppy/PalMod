#include "StdAfx.h"
#include "Game_SFIII1_A_DIR.h"
#include "..\PalMod.h"

UINT16 CGame_SFIII1_A_DIR::uRuleCtr = 0;

constexpr auto SFIII_Arcade_USA_ROM_Base = L"SFIII-simm";
constexpr auto SFIII_Arcade_USA_ROMSet = 5;
constexpr auto SFIII_Arcade_USA_SIMMFileBaseNumber = 0;
constexpr auto SFIII_Arcade_USA_ROMFilesNeeded = 2;
constexpr auto SFIII_Arcade_USA_SIMMLength = 0x200000;

CGame_SFIII1_A_DIR::CGame_SFIII1_A_DIR(UINT32 nConfirmedROMSize /* = -1 */) :
    CGame_SFIII1_A(SFIII_Arcade_USA_ROMFilesNeeded * SFIII_Arcade_USA_SIMMLength) // Let the core game know it's safe to load Extras
{
    nFileAmt = 2;
    nGameFlag = SFIII1_A_DIR;

    m_nSIMMLength = SFIII_Arcade_USA_SIMMLength;
    m_nNumberOfSIMMsPerSet = 2;
    m_nTotalNumberOfSIMMFilesNeeded = SFIII_Arcade_USA_ROMFilesNeeded;
    m_pszSIMMBaseFileName = SFIII_Arcade_USA_ROM_Base;
    m_nSIMMSetBaseNumber = SFIII_Arcade_USA_ROMSet;
    m_nSIMMSetStartingFileNumber = SFIII_Arcade_USA_SIMMFileBaseNumber;

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

sFileRule CGame_SFIII1_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    const UINT16 nAdjustedSIMMFileNumber = SFIII_Arcade_USA_SIMMFileBaseNumber + (nUnitId & 0x00FF);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_USA_ROM_Base, SFIII_Arcade_USA_ROMSet, nAdjustedSIMMFileNumber);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = SFIII_Arcade_USA_SIMMLength;

    return NewFileRule;
}

sFileRule CGame_SFIII1_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= SFIII_Arcade_USA_ROMFilesNeeded)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

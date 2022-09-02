#include "StdAfx.h"
#include "GameDef.h"
#include "Game_LASTBLADE2_A.h"

CGame_LASTBLADE2_A::CGame_LASTBLADE2_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad /*= LASTBLADE2_A */)
{
    InitializeGame(nConfirmedROMSize, (nROMToLoad == LASTBLADE2_A) ? m_sCoreGameData_NeoGeo : m_sCoreGameData_Steam);
}

sFileRule CGame_LASTBLADE2_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    if (nUnitId == LASTBLADE2_S)
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE2_A_FileLoadingData_Steam.rgFileList.at(0).strFileName.c_str()); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = LASTBLADE2_A_FileLoadingData_Steam.rgFileList.at(0).nFileSize;
    }
    else
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE2_A_FileLoadingData_NeoGeo.rgFileList.at(0).strFileName.c_str()); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = LASTBLADE2_A_FileLoadingData_NeoGeo.rgFileList.at(0).nFileSize;
    }

    NewFileRule.uUnitId = 0;

    return NewFileRule;
}

uint32_t CGame_LASTBLADE2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"The Last Blade 2 (Neo-Geo)", L"LB2_P1.ROM", 0xaf1e6554, 0 },
        { L"The Last Blade 2 (Steam)", L"P1.bin", 0x839893c2, 0 },
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

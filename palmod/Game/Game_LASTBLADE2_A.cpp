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
        NewFileRule.uVerifyVar = static_cast<uint32_t>(LASTBLADE2_A_FileLoadingData_Steam.rgFileList.at(0).nFileSize);
    }
    else
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE2_A_FileLoadingData_NeoGeo.rgFileList.at(0).strFileName.c_str()); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = static_cast<uint32_t>(LASTBLADE2_A_FileLoadingData_NeoGeo.rgFileList.at(0).nFileSize);
    }

    NewFileRule.uUnitId = 0;

    return NewFileRule;
}

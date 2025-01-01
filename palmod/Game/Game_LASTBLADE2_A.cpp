#include "StdAfx.h"
#include "GameDef.h"
#include "Game_LASTBLADE2_A.h"

CGame_LASTBLADE2_A::CGame_LASTBLADE2_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad /*= LASTBLADE2_A */)
{
    InitializeGame(nConfirmedROMSize, (nROMToLoad == LASTBLADE2_A) ? m_sCoreGameData_NeoGeo : m_sCoreGameData_Steam);
}

sFileRule CGame_LASTBLADE2_A::GetRule(SupportedGamesList nGameId, uint32_t nUnitId)
{
    sFileRule NewFileRule;

    if (nGameId == LASTBLADE2_S)
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE2_A_FileLoadingData_Steam.rgRuleList.at(0).szFileName); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = static_cast<uint32_t>(LASTBLADE2_A_FileLoadingData_Steam.rgRuleList.at(0).uVerifyVar);
    }
    else
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE2_A_FileLoadingData_NeoGeo.rgRuleList.at(0).szFileName); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = static_cast<uint32_t>(LASTBLADE2_A_FileLoadingData_NeoGeo.rgRuleList.at(0).uVerifyVar);
    }

    NewFileRule.uUnitId = 0;

    return NewFileRule;
}

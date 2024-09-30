#include "StdAfx.h"
#include "Game_RedEarth_A_DIR.h"

RedEarthLoadingKey CGame_RedEarth_A_DIR::m_eROMToLoad = RedEarthLoadingKey::RedEarthROM31;

CGame_RedEarth_A_DIR::CGame_RedEarth_A_DIR(uint32_t nConfirmedROMSize, RedEarthLoadingKey nRedEarthModeToLoad)
{
    m_eROMToLoad = nRedEarthModeToLoad;

    switch (m_eROMToLoad)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_3dot0);
        break;
    case RedEarthLoadingKey::RedEarthROM31:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_3dot1);
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_5dot0);
        break;
    }
}

sFileRule CGame_RedEarth_A_DIR::GetRuleInternal(RedEarthLoadingKey nGameMode, uint32_t nUnitId)
{
    sFileRule NewFileRule;
    uint16_t nAdjustedSIMMFileNumber = (nUnitId & RULE_COUNTER_DEMASK);

    switch (nGameMode)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        wcsncpy(NewFileRule.szFileName, RedEarth_A_FileLoadingData_3dot0.rgRuleList.at(nAdjustedSIMMFileNumber).szFileName, ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = static_cast<uint32_t>(RedEarth_A_FileLoadingData_3dot0.rgRuleList.at(nAdjustedSIMMFileNumber).uVerifyVar);
        break;
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        wcsncpy(NewFileRule.szFileName, RedEarth_A_FileLoadingData_3dot1.rgRuleList.at(nAdjustedSIMMFileNumber).szFileName, ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = static_cast<uint32_t>(RedEarth_A_FileLoadingData_3dot1.rgRuleList.at(nAdjustedSIMMFileNumber).uVerifyVar);
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        wcsncpy(NewFileRule.szFileName, RedEarth_A_FileLoadingData_5dot0.rgRuleList.at(nAdjustedSIMMFileNumber).szFileName, ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = static_cast<uint32_t>(RedEarth_A_FileLoadingData_5dot0.rgRuleList.at(nAdjustedSIMMFileNumber).uVerifyVar);
        break;
    }

    NewFileRule.uUnitId = nUnitId;

    return NewFileRule;
}

sFileRule CGame_RedEarth_A_DIR::GetNextRuleInternal(RedEarthLoadingKey nGameMode)
{
    sFileRule NewFileRule = GetRuleInternal(nGameMode, m_uRuleCtr);
    uint16_t nMaxRuleNumber;

    m_uRuleCtr++;

    switch (nGameMode)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        nMaxRuleNumber = static_cast<uint16_t>(RedEarth_A_FileLoadingData_3dot0.rgRuleList.size());
        break;
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        nMaxRuleNumber = static_cast<uint16_t>(RedEarth_A_FileLoadingData_3dot1.rgRuleList.size());
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        nMaxRuleNumber = static_cast<uint16_t>(RedEarth_A_FileLoadingData_5dot0.rgRuleList.size());
        break;
    }

    if (m_uRuleCtr >= nMaxRuleNumber)
    {
        m_uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

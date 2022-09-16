#include "StdAfx.h"
#include "Game_RedEarth_A_DIR.h"
#include "..\palmod.h"

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
        wcsncpy(NewFileRule.szFileName, RedEarth_A_FileLoadingData_3dot0.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = RedEarth_A_FileLoadingData_3dot0.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize;
        break;
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        wcsncpy(NewFileRule.szFileName, RedEarth_A_FileLoadingData_3dot1.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = RedEarth_A_FileLoadingData_3dot1.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize;
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        wcsncpy(NewFileRule.szFileName, RedEarth_A_FileLoadingData_5dot0.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = RedEarth_A_FileLoadingData_5dot0.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize;
        break;
    }

    NewFileRule.uUnitId = nUnitId;

    return NewFileRule;
}

sFileRule CGame_RedEarth_A_DIR::GetNextRuleInternal(RedEarthLoadingKey nGameMode)
{
    sFileRule NewFileRule = GetRuleInternal(nGameMode, uRuleCtr);
    uint16_t nMaxRuleNumber;

    uRuleCtr++;

    switch (nGameMode)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        nMaxRuleNumber = static_cast<uint16_t>(RedEarth_A_FileLoadingData_3dot0.rgFileList.size());
        break;
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        nMaxRuleNumber = static_cast<uint16_t>(RedEarth_A_FileLoadingData_3dot1.rgFileList.size());
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        nMaxRuleNumber = static_cast<uint16_t>(RedEarth_A_FileLoadingData_5dot0.rgFileList.size());
        break;
    }

    if (uRuleCtr >= nMaxRuleNumber)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

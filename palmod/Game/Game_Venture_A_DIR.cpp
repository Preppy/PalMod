#include "StdAfx.h"
#include "Game_VENTURE_A_DIR.h"

VentureDirLoadingKey CGame_VENTURE_A_DIR::m_eVersionToLoad = VentureDirLoadingKey::ROM31;

CGame_VENTURE_A_DIR::CGame_VENTURE_A_DIR(uint32_t nConfirmedROMSize, VentureDirLoadingKey nVentureModeToLoad)
{
    m_eVersionToLoad = nVentureModeToLoad;

    m_fAllowIPSPatching = false;

    switch (m_eVersionToLoad)
    {
    case VentureDirLoadingKey::ROM31:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_31);
        break;
    case VentureDirLoadingKey::ROM50:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_50);
        break;
    }
}

sFileRule CGame_VENTURE_A_DIR::GetRuleInternal(VentureDirLoadingKey nGameMode, uint32_t nUnitId)
{
    sFileRule NewFileRule;
    uint16_t nAdjustedSIMMFileNumber = (nUnitId & RULE_COUNTER_DEMASK);

    switch (nGameMode)
    {
    case VentureDirLoadingKey::ROM31:
        wcsncpy(NewFileRule.szFileName, m_sFileLoadingData_31.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = m_sFileLoadingData_31.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize;
        break;
    case VentureDirLoadingKey::ROM50:
    default:
        wcsncpy(NewFileRule.szFileName, m_sFileLoadingData_50.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = m_sFileLoadingData_50.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize;
        break;
    }

    NewFileRule.uUnitId = nUnitId;

    return NewFileRule;
}

sFileRule CGame_VENTURE_A_DIR::GetNextRuleInternal(VentureDirLoadingKey nGameMode)
{
    sFileRule NewFileRule = GetRuleInternal(nGameMode, uRuleCtr);
    uint16_t nMaxRuleNumber;

    uRuleCtr++;

    switch (nGameMode)
    {
    case VentureDirLoadingKey::ROM31:
        nMaxRuleNumber = static_cast<uint16_t>(m_sFileLoadingData_31.rgFileList.size());
        break;
    case VentureDirLoadingKey::ROM50:
    default:
        nMaxRuleNumber = static_cast<uint16_t>(m_sFileLoadingData_50.rgFileList.size());
        break;
    }

    if (uRuleCtr >= nMaxRuleNumber)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

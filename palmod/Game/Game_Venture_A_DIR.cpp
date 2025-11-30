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
            wcsncpy(NewFileRule.szFileName, m_sFileLoadingData_31.rgRuleList.at(nAdjustedSIMMFileNumber).szFileName, ARRAYSIZE(NewFileRule.szFileName));
            NewFileRule.uVerifyVar = static_cast<uint32_t>(m_sFileLoadingData_31.rgRuleList.at(nAdjustedSIMMFileNumber).uVerifyVar);
            break;
        case VentureDirLoadingKey::ROM50:
        default:
            wcsncpy(NewFileRule.szFileName, m_sFileLoadingData_50.rgRuleList.at(nAdjustedSIMMFileNumber).szFileName, ARRAYSIZE(NewFileRule.szFileName));
            NewFileRule.uVerifyVar = static_cast<uint32_t>(m_sFileLoadingData_50.rgRuleList.at(nAdjustedSIMMFileNumber).uVerifyVar);
            break;
    }

    NewFileRule.uUnitId = nUnitId;

    return NewFileRule;
}

sFileRule CGame_VENTURE_A_DIR::GetNextRuleInternal(VentureDirLoadingKey nGameMode)
{
    sFileRule NewFileRule = GetRuleInternal(nGameMode, m_uRuleCtr);
    uint16_t nMaxRuleNumber;

    m_uRuleCtr++;

    switch (nGameMode)
    {
        case VentureDirLoadingKey::ROM31:
            nMaxRuleNumber = static_cast<uint16_t>(m_sFileLoadingData_31.rgRuleList.size());
            break;
        case VentureDirLoadingKey::ROM50:
        default:
            nMaxRuleNumber = static_cast<uint16_t>(m_sFileLoadingData_50.rgRuleList.size());
            break;
    }

    if (m_uRuleCtr >= nMaxRuleNumber)
    {
        m_uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

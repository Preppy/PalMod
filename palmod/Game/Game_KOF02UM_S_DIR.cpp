#include "StdAfx.h"
#include "Game_KOF02UM_S_DIR.h"

CGame_KOF02UM_S_DIR::CGame_KOF02UM_S_DIR(uint32_t nConfirmedROMSize, SupportedGamesList nKOF02UMROMSetToLoad)
{
    switch (nKOF02UMROMSetToLoad)
    {
        case KOF02UM_S_DIR_8888:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_888);
            return;
        case KOF02UM_S_DIR_BGR555:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_BGR555);
            return;
        default:
        case KOF02UM_S_DIR_RGB555:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_RGB555);
            return;
    }
}

sFileRule CGame_KOF02UM_S_DIR::GetRule_8888(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", KOF02UM_S_DIR_8888_UNITS[nAdjustedUnitId].strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = KOF02UM_S_DIR_8888_UNITS[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetNextRule_8888()
{
    sFileRule NewFileRule = GetRule_8888(m_uRuleCtr);

    m_uRuleCtr++;

    if (m_uRuleCtr >= KOF02UM_S_DIR_8888_UNITS.size())
    {
        m_uRuleCtr = INVALID_UNIT_VALUE_16;
    }

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetRule_BGR555(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", KOF02UM_S_DIR_BGR555_UNITS[nAdjustedUnitId].strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = KOF02UM_S_DIR_BGR555_UNITS[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetNextRule_BGR555()
{
    sFileRule NewFileRule = GetRule_BGR555(m_uRuleCtr);

    m_uRuleCtr++;

    if (m_uRuleCtr >= KOF02UM_S_DIR_BGR555_UNITS.size())
    {
        m_uRuleCtr = INVALID_UNIT_VALUE_16;
    }

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetRule_RGB555(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    const uint32_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", KOF02UM_S_DIR_RGB555_UNITS[nAdjustedUnitId].strFileName.c_str());
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = KOF02UM_S_DIR_RGB555_UNITS[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_KOF02UM_S_DIR::GetNextRule_RGB555()
{
    sFileRule NewFileRule = GetRule_RGB555(m_uRuleCtr);

    m_uRuleCtr++;

    if (m_uRuleCtr >= KOF02UM_S_DIR_RGB555_UNITS.size())
    {
        m_uRuleCtr = INVALID_UNIT_VALUE_16;
    }

    return NewFileRule;
}

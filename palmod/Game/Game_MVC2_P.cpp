#include "StdAfx.h"
#include "Game_MVC2_P.h"

CGame_MVC2_P::CGame_MVC2_P(uint32_t nConfirmedROMSize) : CGame_MVC2_D(nConfirmedROMSize, MVC2_P)
{
}

CGame_MVC2_P::~CGame_MVC2_P()
{
    //~CGame_MVC2_D();
}

sFileRule CGame_MVC2_P::GetRule(uint32_t nRuleId)
{
    sFileRule NewFileRule;

    nRuleId = (nRuleId & RULE_COUNTER_MASK) == RULE_COUNTER_MASK ? (nRuleId & RULE_COUNTER_DEMASK) : MVC2_D_UNITSORT[nRuleId];
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"PL%02XPAK.BIN", nRuleId);

    NewFileRule.uUnitId = nRuleId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_MVC2_P::GetNextRule()
{
    sFileRule NewFileRule = GetRule(m_uRuleCtr);

    m_uRuleCtr++;

    if (m_uRuleCtr >= MVC2_D_NUMUNIT_WITH_TEAMVIEW)
    {
        m_uRuleCtr = INVALID_UNIT_VALUE_16;
    }

    return NewFileRule;
}

LPCWSTR CGame_MVC2_P::GetGameName()
{
    return L"MvC2 (Playstation 2)";
}

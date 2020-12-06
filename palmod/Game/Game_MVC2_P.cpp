#include "StdAfx.h"
#include "Game_MVC2_P.h"

UINT16 CGame_MVC2_P::uRuleCtr = 0;

CGame_MVC2_P::CGame_MVC2_P(void)
{
    //CGame_MVC2_D();

    nGameFlag = MVC2_P;
}

CGame_MVC2_P::~CGame_MVC2_P(void)
{
    //~CGame_MVC2_D();
}

sFileRule CGame_MVC2_P::GetRule(UINT16 nRuleId)
{
    sFileRule NewFileRule;

    nRuleId = (nRuleId & 0xFF00) == 0xFF00 ? (nRuleId & 0x00FF) : MVC2_D_UNITSORT[nRuleId];
    _sntprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, _T("PL%02XPAK.BIN"), nRuleId);

    NewFileRule.uUnitId = nRuleId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_MVC2_P::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= MVC2_D_NUMUNIT)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

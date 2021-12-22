#pragma once
#include "Game_MVC2_D.h"

class CGame_MVC2_P :
    public CGame_MVC2_D
{
public:
    CGame_MVC2_P(UINT32 nConfirmedROMSize);
    ~CGame_MVC2_P();

    //Static functions
    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nRuleId);

    LPCWSTR GetGameName() override;
};

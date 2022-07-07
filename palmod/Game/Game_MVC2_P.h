#pragma once
#include "Game_MVC2_D.h"

class CGame_MVC2_P :
    public CGame_MVC2_D
{
public:
    CGame_MVC2_P(uint32_t nConfirmedROMSize);
    ~CGame_MVC2_P();

    //Static functions
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    LPCWSTR GetGameName() override;
};

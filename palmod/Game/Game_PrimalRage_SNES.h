#pragma once
#include "GameClassByDir.h"
#include "PrimalRage_SNES_DEF.h"

class CGame_PrimalRage_SNES : public CGameClassByDir
{
public:
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    CGame_PrimalRage_SNES(uint32_t nConfirmedROMSize = -1);
    ~CGame_PrimalRage_SNES();

    static constexpr auto m_strExtraFileName = L"PrimalRageE.txt";
    static constexpr uint32_t m_nPaletteCountInHeaders = 31;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x19071;
};

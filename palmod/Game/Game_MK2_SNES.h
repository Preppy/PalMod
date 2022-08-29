#pragma once
#include "GameClassByDir.h"
#include "MK2_SNES_DEF.h"

class CGame_MK2_SNES : public CGameClassByDir
{
public:
    static sFileRule GetRule(uint32_t nRuleId);
    static sFileRule GetNextRule();

    CGame_MK2_SNES(uint32_t nConfirmedROMSize);
    ~CGame_MK2_SNES();

    static constexpr auto m_strExtraFileName = L"MK2_SNES_E.txt";
    static constexpr uint32_t m_nPaletteCountInHeaders = 51;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0xe7d9f;
};

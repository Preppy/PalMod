#pragma once
#include "GameClassByDir.h"
#include "MWarr_A_DIR_DEF.h"

class CGame_MWarr_A_DIR : public CGameClassByDir
{
public:
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    CGame_MWarr_A_DIR(uint32_t nConfirmedROMSize = -1);
    ~CGame_MWarr_A_DIR();

    static constexpr auto m_strExtraFileName = L"MWarrE.txt";
    static constexpr uint32_t m_nPaletteCountInHeaders = 24;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x92BB6;
};

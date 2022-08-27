#pragma once
#include "GameClassByDir.h"
#include "BtlKRoad_A_DIR_DEF.h"

class CGame_BtlKRoad_A_DIR : public CGameClassByDir
{
public:
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    CGame_BtlKRoad_A_DIR(uint32_t nConfirmedROMSize = -1);
    ~CGame_BtlKRoad_A_DIR();

    static constexpr auto m_strExtraFileName = L"BtlKRoadE.txt";
    static constexpr uint32_t m_nPaletteCountInHeaders = 48;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0xaed0;
};

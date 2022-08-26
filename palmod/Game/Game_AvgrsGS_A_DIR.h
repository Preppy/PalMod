#pragma once
#include "GameClassByDir.h"
#include "AvgrsGS_A_DIR_DEF.h"

class CGame_AvgrsGS_A_DIR : public CGameClassByDir
{
public:
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    CGame_AvgrsGS_A_DIR(uint32_t nConfirmedROMSize = -1);
    ~CGame_AvgrsGS_A_DIR();

    static constexpr auto m_strExtraFileName = L"AvgrsGSE.txt";
    static constexpr uint32_t m_nPaletteCountInHeaders = 223;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0xf2000;
};

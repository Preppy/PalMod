#pragma once
#include "GameClassByDir.h"
#include "AsuraBuster_A_DIR_DEF.h"

class CGame_AsuraBuster_A_DIR : public CGameClassByDir
{
public:
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    CGame_AsuraBuster_A_DIR(uint32_t nConfirmedROMSize = -1);
    ~CGame_AsuraBuster_A_DIR();

    static constexpr auto m_strExtraFileName = L"AsuraBusterE.txt";
    static constexpr uint32_t m_nPaletteCountInHeaders = 208;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x4d0f0;
};

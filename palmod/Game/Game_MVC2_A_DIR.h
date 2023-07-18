#pragma once
#include "Game_MVC2_A.h"

class CGame_MVC2_A_DIR : 
    public CGame_MVC2_A
{  
public:
    CGame_MVC2_A_DIR(uint32_t nConfirmedROMSize);
    ~CGame_MVC2_A_DIR();

    uint32_t c_nMVC2SIMMLength = 0x800000;

    inline uint32_t GetLocationWithinSIMM(uint32_t nSIMMSetLocation);
    inline uint8_t GetSIMMSetForROMLocation(uint32_t nROMLocation);

    //Static functions
    static uint32_t m_uRuleCtr;

    static uint32_t GetRuleCtr() { return m_uRuleCtr; };
    static void ResetRuleCtr() { m_uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;
};

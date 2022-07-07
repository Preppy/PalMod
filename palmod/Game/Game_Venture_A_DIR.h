#pragma once
#include "Game_VENTURE_A.h"

class CGame_VENTURE_A_DIR :
    public CGame_VENTURE_A
{
public:
    CGame_VENTURE_A_DIR(uint32_t nConfirmedROMSize, int nVentureModeToLoad);
    ~CGame_VENTURE_A_DIR(void);

    uint32_t c_nVentureSIMMLength = 0x200000;
    static const uint32_t c_nCountSIMMsUsed_31 = 4;
    static const uint32_t c_nCountSIMMsUsed_50 = 2;

    static LPCWSTR VENTURE_Arcade_ROM_Base_31;
    static LPCWSTR VENTURE_Arcade_ROM_Base_50;

    inline uint32_t GetSIMMLocationFromROMLocation(uint32_t nROMLocation);
    inline uint32_t GetLocationWithinSIMM(uint32_t nSIMMSetLocation);
    inline uint8_t GetSIMMSetForROMLocation(uint32_t nROMLocation);

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule_31();
    static sFileRule GetRule_31(uint32_t nRuleId);
    static sFileRule GetNextRule_50();
    static sFileRule GetRule_50(uint32_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;

    LPCWSTR GetGameName() override;
};

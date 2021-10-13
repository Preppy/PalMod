#pragma once
#include "Game_VENTURE_A.h"

class CGame_VENTURE_A_DIR :
    public CGame_VENTURE_A
{
public:
    CGame_VENTURE_A_DIR(UINT32 nConfirmedROMSize, int nVentureModeToLoad);
    ~CGame_VENTURE_A_DIR(void);

    UINT32 c_nVentureSIMMLength = 0x200000;
    static const UINT32 c_nCountSIMMsUsed_31 = 4;
    static const UINT32 c_nCountSIMMsUsed_50 = 2;

    static LPCWSTR VENTURE_Arcade_ROM_Base_31;
    static LPCWSTR VENTURE_Arcade_ROM_Base_50;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);
    inline UINT32 GetLocationWithinSIMM(UINT32 nSIMMSetLocation);
    inline UINT8 GetSIMMSetForROMLocation(UINT32 nROMLocation);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule_31();
    static sFileRule GetRule_31(UINT16 nRuleId);
    static sFileRule GetNextRule_50();
    static sFileRule GetRule_50(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nSaveUnit) override;

    LPCWSTR GetGameName() override;
};

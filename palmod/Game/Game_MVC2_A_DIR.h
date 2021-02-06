#pragma once
#include "Game_MVC2_A.h"

class CGame_MVC2_A_DIR : 
    public CGame_MVC2_A
{  
public:
    CGame_MVC2_A_DIR(UINT32 nConfirmedROMSize);
    ~CGame_MVC2_A_DIR(void);

    UINT32 c_nMVC2SIMMLength = 0x800000;

    inline UINT32 GetLocationWithinSIMM(UINT32 nSIMMSetLocation);
    inline UINT8 GetSIMMSetForROMLocation(UINT32 nROMLocation);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nSaveUnit) override;
};

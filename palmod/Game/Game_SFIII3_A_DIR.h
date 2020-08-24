#pragma once
#include "Game_SFIII3_A.h"

class CGame_SFIII3_A_DIR : 
    public CGame_SFIII3_A
{
  
public:
    CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_SFIII3_A_DIR(void);

    const UINT8 c_nFirstUsedSIMMOfSet = 4;
    const UINT32 c_nSFIII3SIMMLength = 0x200000;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);
    inline UINT32 GetLocationWithinSIMM(UINT32 nSIMMSetLocation);
    inline UINT8 GetSIMMSetForROMLocation(UINT32 nROMLocation);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber);
    BOOL SaveFile(CFile* SaveFile, UINT16 nSIMMNumber) override;
};

#pragma once
#include "Game_JOJOS_A.h"

class CGame_JOJOS_A_DIR : 
    public CGame_JOJOS_A
{
  
public:
    CGame_JOJOS_A_DIR(UINT32 nConfirmedROMSize, int nJojosModeToLoad);
    ~CGame_JOJOS_A_DIR(void);

    UINT32 c_nJOJOSSIMMLength = 0x200000;

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
    BOOL SaveFile(CFile* SaveFile, UINT16 nSaveUnit) override;
};

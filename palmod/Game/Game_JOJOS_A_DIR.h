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
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;

    UINT32 SaveMultiplePatchFiles(CString strTargetDirectory) override;
};

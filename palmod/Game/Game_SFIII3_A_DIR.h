#pragma once
#include "Game_SFIII3_A.h"

class CGame_SFIII3_A_DIR : 
    public CGame_SFIII3_A
{
  
public:
    CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_SFIII3_A_DIR(void);

    UINT32 c_nSFIII3RomLength = 0x200000;

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId);
};

#pragma once
#include "Game_SFIII2_A.h"

class CGame_SFIII2_A_DIR : 
    public CGame_SFIII2_A
{
public:
    CGame_SFIII2_A_DIR(uint32_t nConfirmedROMSize = -1);
    ~CGame_SFIII2_A_DIR(void) { FlushChangeTrackingArray(); };

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRule(); };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override { return LoadFileForSIMMGame(LoadedFile, nSIMMNumber); };
    BOOL SaveFile(CFile* SaveFile, uint32_t nSIMMNumber) override { return SaveFileForSIMMGame(SaveFile, nSIMMNumber); };

    LPCWSTR GetGameName() override { return L"SFIII:2nd Impact (Arcade Rerip)"; };
};

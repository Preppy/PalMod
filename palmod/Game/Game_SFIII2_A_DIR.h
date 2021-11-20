#pragma once
#include "Game_SFIII2_A.h"

class CGame_SFIII2_A_DIR : 
    public CGame_SFIII2_A
{
public:
    CGame_SFIII2_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_SFIII2_A_DIR(void) { FlushChangeTrackingArray(); };

    //Static functions
    static size_t uRuleCtr;

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nRuleId);

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRule(); };

    BOOL LoadFile(CFile* LoadedFile, size_t nSIMMNumber) override { return LoadFileForSIMMGame(LoadedFile, nSIMMNumber); };
    BOOL SaveFile(CFile* SaveFile, size_t nSIMMNumber) override { return SaveFileForSIMMGame(SaveFile, nSIMMNumber); };

    LPCWSTR GetGameName() override { return L"SFIII:2nd Impact (Arcade Rerip)"; };
};

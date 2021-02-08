#pragma once
#include "Game_SFIII1_A.h"

class CGame_SFIII1_A_DIR : 
    public CGame_SFIII1_A
{
public:
    CGame_SFIII1_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_SFIII1_A_DIR(void) { FlushChangeTrackingArray(); };

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    sFileRule GetNextRuleForSIMMGame() override{ return GetNextRule(); };

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override { return LoadFileForSIMMGame(LoadedFile, nSIMMNumber); };
    BOOL SaveFile(CFile* SaveFile, UINT16 nSIMMNumber) override { return SaveFileForSIMMGame(SaveFile, nSIMMNumber); };

    LPCWSTR GetGameName() override { return L"SFIII:New Generation (Arcade Rerip)"; };
};

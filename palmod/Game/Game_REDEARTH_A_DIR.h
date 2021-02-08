#pragma once
#include "Game_RedEarth_A.h"

class CGame_RedEarth_A_DIR : 
    public CGame_REDEARTH_A
{
public:
    CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize);
    ~CGame_RedEarth_A_DIR() { FlushChangeTrackingArray(); };

    UINT32 c_nRedEarthSIMMLength = 0x200000;

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRule(); };

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override { return LoadFileForSIMMGame(LoadedFile, nSIMMNumber); };
    BOOL SaveFile(CFile* SaveFile, UINT16 nSIMMNumber) override { return SaveFileForSIMMGame(SaveFile, nSIMMNumber); };

    LPCWSTR GetGameName() override { return L"Red Earth (Arcade Rerip)"; };
};

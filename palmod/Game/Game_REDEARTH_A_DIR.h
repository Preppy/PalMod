#pragma once
#include "Game_RedEarth_A.h"

class CGame_RedEarth_A_DIR : 
    public CGame_REDEARTH_A
{
public:
    CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize, int nRedEarthModeToLoad = 31);
    ~CGame_RedEarth_A_DIR() { FlushChangeTrackingArray(); };

    UINT32 c_nRedEarthSIMMLength = 0x200000;
    static int m_nSavedMode;

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRuleInternal(int nGameMode);
    static sFileRule GetRuleInternal(int nGameMode, UINT16 nRuleId);

    static sFileRule GetNextRule_30() { return GetNextRuleInternal(30); };
    static sFileRule GetRule_30(UINT16 nRuleId) { return GetRuleInternal(30, nRuleId); };
    static sFileRule GetNextRule_31() { return GetNextRuleInternal(31); };
    static sFileRule GetRule_31(UINT16 nRuleId) { return GetRuleInternal(31, nRuleId); };

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRuleInternal(m_nSavedMode); };

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override { return LoadFileForSIMMGame(LoadedFile, nSIMMNumber); };
    BOOL SaveFile(CFile* SaveFile, UINT16 nSIMMNumber) override { return SaveFileForSIMMGame(SaveFile, nSIMMNumber); };

    LPCWSTR GetGameName() override { return UsePaletteSetFor30() ? L"Red Earth: Stages (Arcade 3.x Rerip)" : L"Red Earth: Characters (Arcade 3.x Rerip)"; };
};

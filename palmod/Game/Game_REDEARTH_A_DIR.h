#pragma once
#include "Game_RedEarth_A.h"

class CGame_RedEarth_A_DIR : 
    public CGame_REDEARTH_A
{
public:
    CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize, int nRedEarthModeToLoad = 31);
    ~CGame_RedEarth_A_DIR() { FlushChangeTrackingArray(); };

    UINT32 c_nRedEarthSIMMLength = 0x200000;
    static size_t m_nSavedMode;

    //Static functions
    static size_t uRuleCtr;

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRuleInternal(int nGameMode);
    static sFileRule GetRuleInternal(int nGameMode, size_t nRuleId);

    static sFileRule GetNextRule_30() { return GetNextRuleInternal(30); };
    static sFileRule GetRule_30(size_t nRuleId) { return GetRuleInternal(30, nRuleId); };
    static sFileRule GetNextRule_31() { return GetNextRuleInternal(31); };
    static sFileRule GetRule_31(size_t nRuleId) { return GetRuleInternal(31, nRuleId); };
    static sFileRule GetNextRule_50() { return GetNextRuleInternal(50); };
    static sFileRule GetRule_50(size_t nRuleId) { return GetRuleInternal(50, nRuleId); };

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRuleInternal(m_nSavedMode); };

    BOOL LoadFile(CFile* LoadedFile, size_t nSIMMNumber) override { return LoadFileForSIMMGame(LoadedFile, nSIMMNumber); };
    BOOL SaveFile(CFile* SaveFile, size_t nSIMMNumber) override { return SaveFileForSIMMGame(SaveFile, nSIMMNumber); };

    LPCWSTR GetGameName() override;
};

#pragma once
#include "Game_SFIII3_A.h"

enum class SFIII3_SupportedROMRevision
{
    SFIII3_10_990512,
    SFIII3_10_990608,
    SFIII3_51,
    SFIII3_4rd,
    SFIII3_3Ex,
    SFIII3_Unsupported,
};

class CGame_SFIII3_A_DIR : 
    public CGame_SFIII3_A
{
private:
    static sFileRule GetRuleInternal(UINT16 nRuleId, int nSF3ModeToLoad);
    static sFileRule GetNextRuleInternal(int nSF3ModeToLoad);

    static SFIII3_SupportedROMRevision m_currentSFIII3ROMRevision;
    SFIII3_SupportedROMRevision GetSFIII3ROMVersion(CFile* LoadedFile);

    // The user can supply either EN or JPN files - track that here.
    bool m_fUseJPNFileNames = false;

public:
    CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize = -1, int nSF3ModeToLoad = 51);
    ~CGame_SFIII3_A_DIR(void);

    const UINT32 c_nSFIII3SIMMLength = 0x200000;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);
    inline UINT32 GetLocationWithinSIMM(UINT32 nSIMMSetLocation);
    inline UINT8 GetSIMMSetForROMLocation(UINT32 nROMLocation);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule10() { return GetNextRuleInternal(10); };
    static sFileRule GetNextRule4() { return GetNextRuleInternal(4); };
    static sFileRule GetNextRule51() { return GetNextRuleInternal(51); };
    static sFileRule GetNextRule3Ex() { return GetNextRuleInternal(70); };
    static sFileRule GetRule10(UINT16 nRuleId) { return GetRuleInternal(nRuleId, 10); };
    static sFileRule GetRule4(UINT16 nRuleId) { return GetRuleInternal(nRuleId, 4); };
    static sFileRule GetRule51(UINT16 nRuleId) { return GetRuleInternal(nRuleId, 51); };
    static sFileRule GetRule3Ex(UINT16 nRuleId) { return GetRuleInternal(nRuleId, 70); };

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nSIMMNumber) override;

    UINT32 SaveMultiplePatchFiles(CString strTargetDirectory) override;

    LPCTSTR GetGameName() override;
};

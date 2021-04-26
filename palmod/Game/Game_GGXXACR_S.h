#pragma once
#include "gameclass.h"
#include "..\extrafile.h"

class CGame_GGXXACR_S : public CGameWithExtrasFile
{
public:
    CGame_GGXXACR_S(UINT32 nConfirmedROMSize = -1);
    ~CGame_GGXXACR_S();

    static void InitializeStatics();
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitNumber) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    CDescTree* GetMainTree() { return &MainDescTree; };
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    LPCWSTR GetGameName() override { return L"GGXX:AC+R (Steam)"; };
};

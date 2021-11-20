#pragma once
#include "gameclass.h"
#include "..\extrafile.h"

class CGame_UNICLR_A : public CGameWithExtrasFile
{
public:
    CGame_UNICLR_A(UINT32 nConfirmedROMSize = -1);
    ~CGame_UNICLR_A();

    static void InitializeStatics();
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    //Static functions
    static size_t uRuleCtr;

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, size_t nUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, size_t nUnitNumber) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    CDescTree* GetMainTree() { return &MainDescTree; };
    static size_t GetCollectionCountForUnit(size_t nUnitId);
    static size_t GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    LPCWSTR GetGameName() override { return L"Under Night In-Birth Exe:Late[cl-r] (Steam)"; };
};

#pragma once
#include "gameclass.h"
#include "..\extrafile.h"

class CGame_P4AU_NESICA : public CGameWithExtrasFile
{
public:
    CGame_P4AU_NESICA(UINT32 nConfirmedROMSize = -1);
    ~CGame_P4AU_NESICA();

    static void InitializeStatics();
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitNumber) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    CDescTree* GetMainTree() { return &MainDescTree; };
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    LPCWSTR GetGameName() override { return L"Persona 4 Arena Ultimax 2.0 (NESICA)"; };
};

#pragma once
#include "gameclass.h"
#include "..\extrafile.h"

class CGame_MAAB_A : public CGameWithExtrasFile
{
public:
    CGame_MAAB_A(uint32_t nConfirmedROMSize = -1);
    ~CGame_MAAB_A();

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteDataByFileUnit(uint32_t nFileUnitId, uint32_t nFilePalId);
    void LoadSpecificPaletteData(uint32_t nDisplayUnitId, uint32_t nDisplayPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nFileUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nFileUnitNumber) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    CDescTree* GetMainTree() { return &MainDescTree; };
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);
    static uint32_t GetNodeCountForCollection(uint32_t nCharacterUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    LPCWSTR GetGameName() override { return L"Million Arthur Arcana Blood (Steam)"; };
    
    static bool ShouldUseBasePaletteSet(uint32_t nCharacterUnitId, uint32_t nCollectionId);

    static bool PaletteIsInFileUnit(uint32_t nTargetFileUnitId, uint32_t nDisplayUnitId, uint32_t nDisplayPalId);
    static uint32_t GetUniqueUnitCount();
    static uint32_t GetFileCount();

    static void GetCharacterIndexFromFileIndex(uint32_t nFileUnitId, uint32_t nFilePalId, uint32_t* pnCharacterUnitId, uint32_t* pnCharacterPalId);
    static void GetFileIndexFromCharacterIndex(uint32_t nCharacterUnitId, uint32_t nCharacterPalId, uint32_t* nFileUnitId, uint32_t* nFilePalId);
    static void GetFileIndexFromCharacterCollection(uint32_t nCharacterUnitId, uint32_t nCollectionId, uint32_t* nFileUnitId, uint32_t* nFileCollectionId);
};

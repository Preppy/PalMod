#pragma once
#include "gameclass.h"
#include "..\extrafile.h"

class CGame_MAAB_A : public CGameWithExtrasFile
{
public:
    CGame_MAAB_A(UINT32 nConfirmedROMSize = -1);
    ~CGame_MAAB_A();

    static void InitializeStatics();
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteDataByFileUnit(size_t nFileUnitId, size_t nFilePalId);
    void LoadSpecificPaletteData(size_t nDisplayUnitId, size_t nDisplayPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    //Static functions
    static size_t uRuleCtr;

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, size_t nFileUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, size_t nFileUnitNumber) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    CDescTree* GetMainTree() { return &MainDescTree; };
    static size_t GetCollectionCountForUnit(size_t nUnitId);
    static size_t GetNodeCountForCollection(size_t nCharacterUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    LPCWSTR GetGameName() override { return L"Million Arthur Arcana Blood (Steam)"; };
	
	static bool ShouldUseBasePaletteSet(size_t nCharacterUnitId, size_t nCollectionId);

    static bool PaletteIsInFileUnit(size_t nTargetFileUnitId, size_t nDisplayUnitId, size_t nDisplayPalId);
    static size_t GetUniqueUnitCount();
    static size_t GetFileCount();

    static void GetCharacterIndexFromFileIndex(size_t nFileUnitId, size_t nFilePalId, size_t* pnCharacterUnitId, size_t* pnCharacterPalId);
    static void GetFileIndexFromCharacterIndex(size_t nCharacterUnitId, size_t nCharacterPalId, size_t* nFileUnitId, size_t* nFilePalId);
    static void GetFileIndexFromCharacterCollection(size_t nCharacterUnitId, size_t nCollectionId, size_t* nFileUnitId, size_t* nFileCollectionId);
};

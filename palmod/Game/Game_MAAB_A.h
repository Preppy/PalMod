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

    void LoadSpecificPaletteDataByFileUnit(UINT16 nFileUnitId, UINT16 nFilePalId);
    void LoadSpecificPaletteData(UINT16 nDisplayUnitId, UINT16 nDisplayPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nFileUnitNumber) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nFileUnitNumber) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    CDescTree* GetMainTree() { return &MainDescTree; };
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);
    static UINT16 GetNodeCountForCollection(UINT16 nCharacterUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    LPCWSTR GetGameName() override { return L"Million Arthur Arcana Blood (Steam)"; };
	
	static bool ShouldUseBasePaletteSet(UINT16 nCharacterUnitId, UINT16 nCollectionId);

    static bool PaletteIsInFileUnit(UINT16 nTargetFileUnitId, UINT16 nDisplayUnitId, INT16 nDisplayPalId);
    static UINT16 GetUniqueUnitCount();
    static UINT16 GetFileCount();

    static void GetCharacterIndexFromFileIndex(UINT16 nFileUnitId, UINT16 nFilePalId, UINT16* pnCharacterUnitId, UINT16* pnCharacterPalId);
    static void GetFileIndexFromCharacterIndex(UINT16 nCharacterUnitId, UINT16 nCharacterPalId, UINT16* nFileUnitId, UINT16* nFilePalId);
    static void GetFileIndexFromCharacterCollection(UINT16 nCharacterUnitId, UINT16 nCollectionId, UINT16* nFileUnitId, UINT16* nFileCollectionId);
};

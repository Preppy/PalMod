#pragma once
#include "gameclass.h"
#include "SFIII2_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF3_50 = _T("sfIII2e.txt");

class CGame_SFIII2_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 50;
    static int m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSFIII2_50;

    static int rgExtraCountAll_50[SFIII2_A_50_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_50[SFIII2_A_50_NUMUNIT + 1];
    static int rgExtraLoc_50[SFIII2_A_50_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_SFIII2_A(UINT32 nConfirmedROMSize = -1, int nSF3ROMToLoad = 50);
    ~CGame_SFIII2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_50;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCTSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId) override;

    void UpdatePalData();

    static stExtraDef* SFIII2_A_50_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF3_10 = _T("sfiii3-10e.txt");
constexpr auto EXTRA_FILENAME_SF3_51 = _T("sfiii3e.txt");

UINT32 cps3_mask(UINT32 address, UINT32 key1, UINT32 key2);

class CGame_SFIII3_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 51;
    static int m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSFIII3_10;
    static UINT32 m_nTotalPaletteCountForSFIII3_51;
    static bool UsePaletteSetForGill() { return (m_nSelectedRom == 10); }

    static int rgExtraCountAll_10[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraCountAll_51[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_10[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_51[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraLoc_10[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraLoc_51[SFIII3_A_51_NUMUNIT + 1];

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
    CGame_SFIII3_A(UINT32 nConfirmedROMSize = -1, int nSF3ROMToLoad = 51);
    ~CGame_SFIII3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_10;
    static CDescTree MainDescTree_51;

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

    static stExtraDef* SFIII3_A_10_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_51_EXTRA_CUSTOM;
};

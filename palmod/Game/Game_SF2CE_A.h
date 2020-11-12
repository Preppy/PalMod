#pragma once
#include "gameclass.h"
#include "SF2CE_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF2CE_21 = _T("SF2CE-21e.txt");
constexpr auto EXTRA_FILENAME_SF2CE_22 = _T("SF2CE-22e.txt");
constexpr auto EXTRA_FILENAME_SF2CE_23 = _T("SF2CE-23e.txt");

class CGame_SF2CE_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 22;
    static int m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSF2CE_21;
    static UINT32 m_nTotalPaletteCountForSF2CE_22;
    static UINT32 m_nTotalPaletteCountForSF2CE_23;

    static int rgExtraCountAll_21[SF2CE_A_21_NUMUNIT + 1];
    static int rgExtraCountAll_22[SF2CE_A_22_NUMUNIT + 1];
    static int rgExtraCountAll_23[SF2CE_A_23_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_21[SF2CE_A_21_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_22[SF2CE_A_22_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_23[SF2CE_A_23_NUMUNIT + 1];
    static int rgExtraLoc_21[SF2CE_A_21_NUMUNIT + 1];
    static int rgExtraLoc_22[SF2CE_A_22_NUMUNIT + 1];
    static int rgExtraLoc_23[SF2CE_A_23_NUMUNIT + 1];

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
    CGame_SF2CE_A(UINT32 nConfirmedROMSize = -1, int nSF2CEROMToLoad = 22);
    ~CGame_SF2CE_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_21;
    static CDescTree MainDescTree_22;
    static CDescTree MainDescTree_23;

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SF2CE_A_21_EXTRA_CUSTOM;
    static stExtraDef* SF2CE_A_22_EXTRA_CUSTOM;
    static stExtraDef* SF2CE_A_23_EXTRA_CUSTOM;
};

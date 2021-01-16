#pragma once
#include "gameclass.h"
#include "SF2HF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF2HF_21 = _T("SF2HF-21e.txt");
constexpr auto EXTRA_FILENAME_SF2HF_22 = _T("SF2HF-22e.txt");

class CGame_SF2HF_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 22;
    static int m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSF2HF_21;
    static UINT32 m_nTotalPaletteCountForSF2HF_22;
    static bool UsePaletteSetForSelect() { return (m_nSelectedRom == 21); }

    static int rgExtraCountAll_21[SF2HF_A_21_NUMUNIT + 1];
    static int rgExtraCountAll_22[SF2HF_A_22_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_21[SF2HF_A_21_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_22[SF2HF_A_22_NUMUNIT + 1];
    static int rgExtraLoc_21[SF2HF_A_21_NUMUNIT + 1];
    static int rgExtraLoc_22[SF2HF_A_22_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_SF2HF_A(UINT32 nConfirmedROMSize = -1, int nSF2HFROMToLoad = 22);
    ~CGame_SF2HF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_21;
    static CDescTree MainDescTree_22;

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

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SF2HF_A_21_EXTRA_CUSTOM;
    static stExtraDef* SF2HF_A_22_EXTRA_CUSTOM;
};

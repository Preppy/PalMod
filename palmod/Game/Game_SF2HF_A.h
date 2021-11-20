#pragma once
#include "gameclass.h"
#include "SF2HF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF2HF_21 = L"SF2HF-21e.txt";
constexpr auto EXTRA_FILENAME_SF2HF_22 = L"SF2HF-22e.txt";
constexpr auto EXTRA_FILENAME_SF2HF_23 = L"SF2HF-23e.txt";

class CGame_SF2HF_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 22;
    static size_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSF2HF_21;
    static UINT32 m_nTotalPaletteCountForSF2HF_22;
    static UINT32 m_nTotalPaletteCountForSF2HF_23;

    static size_t rgExtraCountAll_21[SF2HF_A_21_NUMUNIT + 1];
    static size_t rgExtraCountAll_22[SF2HF_A_22_NUMUNIT + 1];
    static size_t rgExtraCountAll_23[SF2HF_A_23_NUMUNIT + 1];
    static size_t rgExtraLoc_21[SF2HF_A_21_NUMUNIT + 1];
    static size_t rgExtraLoc_22[SF2HF_A_22_NUMUNIT + 1];
    static size_t rgExtraLoc_23[SF2HF_A_23_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize_HF;
    static UINT32 m_nExpectedGameROMSize_30th;
    static UINT32 m_nConfirmedROMSize;
    
    bool IsSF30thBundleFile() { return m_nConfirmedROMSize == m_nExpectedGameROMSize_30th; };

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_SF2HF_A(UINT32 nConfirmedROMSize = -1, int nSF2HFROMToLoad = 22);
    ~CGame_SF2HF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_21;
    static CDescTree MainDescTree_22;
    static CDescTree MainDescTree_23;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(size_t nUnitId);

    //Extra palette function
    static size_t GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly = FALSE);
    static size_t GetExtraLoc(size_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static size_t GetCollectionCountForUnit(size_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static size_t GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(size_t nUnitId, size_t nPaletteId);

    size_t GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SF2HF_A_21_EXTRA_CUSTOM;
    static stExtraDef* SF2HF_A_22_EXTRA_CUSTOM;
    static stExtraDef* SF2HF_A_23_EXTRA_CUSTOM;
};

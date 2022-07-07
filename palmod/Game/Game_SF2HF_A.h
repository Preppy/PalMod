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
    static uint32_t m_nSelectedRom;
    static uint32_t m_nTotalPaletteCountForSF2HF_21;
    static uint32_t m_nTotalPaletteCountForSF2HF_22;
    static uint32_t m_nTotalPaletteCountForSF2HF_23;

    static uint32_t rgExtraCountAll_21[SF2HF_A_21_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_22[SF2HF_A_22_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_23[SF2HF_A_23_NUMUNIT + 1];
    static uint32_t rgExtraLoc_21[SF2HF_A_21_NUMUNIT + 1];
    static uint32_t rgExtraLoc_22[SF2HF_A_22_NUMUNIT + 1];
    static uint32_t rgExtraLoc_23[SF2HF_A_23_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize_HF;
    static uint32_t m_nExpectedGameROMSize_30th;
    static uint32_t m_nConfirmedROMSize;
    
    bool IsSF30thBundleFile() { return m_nConfirmedROMSize == m_nExpectedGameROMSize_30th; };

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_SF2HF_A(uint32_t nConfirmedROMSize = -1, int nSF2HFROMToLoad = 22);
    ~CGame_SF2HF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_21;
    static CDescTree MainDescTree_22;
    static CDescTree MainDescTree_23;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLoc(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    uint32_t GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SF2HF_A_21_EXTRA_CUSTOM;
    static stExtraDef* SF2HF_A_22_EXTRA_CUSTOM;
    static stExtraDef* SF2HF_A_23_EXTRA_CUSTOM;
};

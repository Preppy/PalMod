#pragma once
#include "gameclass.h"
#include "SF2CE_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF2CE_21 = L"SF2CE-21e.txt";
constexpr auto EXTRA_FILENAME_SF2CE_22 = L"SF2CE-22e.txt";
constexpr auto EXTRA_FILENAME_SF2CE_23 = L"SF2CE-23e.txt";

class CGame_SF2CE_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 22;
    static uint32_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSF2CE_21;
    static UINT32 m_nTotalPaletteCountForSF2CE_22;
    static UINT32 m_nTotalPaletteCountForSF2CE_23;

    static uint32_t rgExtraCountAll_21[SF2CE_A_21_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_22[SF2CE_A_22_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_23[SF2CE_A_23_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_21[SF2CE_A_21_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_22[SF2CE_A_22_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_23[SF2CE_A_23_NUMUNIT + 1];
    static uint32_t rgExtraLoc_21[SF2CE_A_21_NUMUNIT + 1];
    static uint32_t rgExtraLoc_22[SF2CE_A_22_NUMUNIT + 1];
    static uint32_t rgExtraLoc_23[SF2CE_A_23_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_SF2CE_A(UINT32 nConfirmedROMSize = -1, int nSF2CEROMToLoad = 22);
    ~CGame_SF2CE_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_21;
    static CDescTree MainDescTree_22;
    static CDescTree MainDescTree_23;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly = FALSE);
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SF2CE_A_21_EXTRA_CUSTOM;
    static stExtraDef* SF2CE_A_22_EXTRA_CUSTOM;
    static stExtraDef* SF2CE_A_23_EXTRA_CUSTOM;
};

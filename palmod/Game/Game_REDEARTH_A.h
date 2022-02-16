#pragma once
#include "gameclass.h"
#include "REDEARTH_A_DEF.h"
#include "..\ExtraFile.h"

#define REDEARTH_A_USEEXTRAFILE

constexpr auto EXTRA_FILENAME_REDEARTH_30 = L"RedEarth30e.txt";
constexpr auto EXTRA_FILENAME_REDEARTH_31 = L"RedEarthE.txt";
constexpr auto EXTRA_FILENAME_REDEARTH_50 = L"RedEarth50e.txt";

class CGame_REDEARTH_A : public CGameWithExtrasFile
{
public:
    static uint32_t rgExtraCountAll_30[REDEARTH_A_NUMUNIT_30 + 1];
    static uint32_t rgExtraCountAll_31[REDEARTH_A_NUMUNIT_31 + 1];
    static uint32_t rgExtraCountAll_50[REDEARTH_A_NUMUNIT_50 + 1];
    static uint32_t rgExtraLoc_30[REDEARTH_A_NUMUNIT_30 + 1];
    static uint32_t rgExtraLoc_31[REDEARTH_A_NUMUNIT_31 + 1];
    static uint32_t rgExtraLoc_50[REDEARTH_A_NUMUNIT_50 + 1];

    // RedEarth has two different ROMs of interest: handle here.
    int m_nBufferRedEarthMode = 30;
    static uint32_t m_nRedEarthMode;
    static UINT32 m_nTotalPaletteCount30;
    static UINT32 m_nTotalPaletteCount31;
    static UINT32 m_nTotalPaletteCount50;

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize_3;
    static UINT32 m_nExpectedGameROMSize_5;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    bool CanEnableMultispriteExport(uint32_t nUnitId, uint32_t nPalId);

    static stExtraDef* GetRedEarthExtraDef(int x);

public:
    CGame_REDEARTH_A(UINT32 nConfirmedROMSize = -1, int nRedEarthModeToLoad = 31);
    ~CGame_REDEARTH_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_30;
    static CDescTree MainDescTree_31;
    static CDescTree MainDescTree_50;

    static sDescTreeNode* InitDescTree(int nPaletteSetToUse);
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* REDEARTH_A_EXTRA_CUSTOM_30;
    static stExtraDef* REDEARTH_A_EXTRA_CUSTOM_31;
    static stExtraDef* REDEARTH_A_EXTRA_CUSTOM_50;
};

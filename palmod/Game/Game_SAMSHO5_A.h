#pragma once
#include "gameclass.h"
#include "SAMSHO5_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_SAMSHO5_A = L"SAMSHO5E.txt";
#define GetExtraDefForSAMSHO5(x)((stExtraDef *)&SAMSHO5_A_EXTRA_CUSTOM[x])

class CGame_SAMSHO5_A : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForSAMSHO5;

    static uint32_t rgExtraCountAll[SAMSHO5_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[SAMSHO5_A_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize_5;
    static uint32_t m_nExpectedGameROMSize_5X;

    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_SAMSHO5_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad = SAMSHO5_A);
    ~CGame_SAMSHO5_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
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

    static stExtraDef* SAMSHO5_A_EXTRA_CUSTOM;
};

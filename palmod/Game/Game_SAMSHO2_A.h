#pragma once
#include "gameclass.h"
#include "SAMSHO2_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_SAMSHO2_A = L"SAMSHO2E.txt";
#define GetExtraDefForSAMSHO2(x)((stExtraDef *)&SAMSHO2_A_EXTRA_CUSTOM[x])

class CGame_SAMSHO2_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSAMSHO2;

    static size_t rgExtraCountAll[SAMSHO2_A_NUMUNIT + 1];
    static size_t rgExtraLoc[SAMSHO2_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    static void DumpPaletteHeaders();

public:
    CGame_SAMSHO2_A(UINT32 nConfirmedROMSize);
    ~CGame_SAMSHO2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
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

    static stExtraDef* SAMSHO2_A_EXTRA_CUSTOM;
};

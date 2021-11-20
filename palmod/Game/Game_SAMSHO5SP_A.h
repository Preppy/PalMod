#pragma once
#include "gameclass.h"
#include "SAMSHO5SP_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_SAMSHO5SP_A = L"SAMSHO5SPE.txt";
#define GetExtraDefForSAMSHO5SP(x)((stExtraDef *)&SAMSHO5SP_A_EXTRA_CUSTOM[x])

class CGame_SAMSHO5SP_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSAMSHO5SP;

    static size_t rgExtraCountAll[SAMSHO5SP_A_NUMUNIT + 1];
    static size_t rgExtraLoc[SAMSHO5SP_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const UINT32 m_nExpectedGameROMSizeArcade = 0x400000;  // 4194304 bytes
    static const UINT32 m_nExpectedGameROMSizeSteam = 0x800000;  // 8388608 bytes

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_SAMSHO5SP_A(UINT32 nConfirmedROMSize);
    ~CGame_SAMSHO5SP_A(void);

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

    static stExtraDef* SAMSHO5SP_A_EXTRA_CUSTOM;
};

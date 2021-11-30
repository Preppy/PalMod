#pragma once
#include "gameclass.h"
#include "NEOGEO_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_NEO_GEO_A = L"NEOGEOE.txt";
constexpr auto EXTRA_FILENAME_UNKNOWN_A = L"UnknownE.txt";

#define GetExtraDefForNEOGEO(x)((stExtraDef *)&NEOGEO_A_EXTRA_CUSTOM[x])

class CGame_NEOGEO_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNEOGEO;

    static size_t rgExtraCountAll[NEOGEO_A_NUMUNIT + 1];
    static size_t rgExtraLoc[NEOGEO_A_NUMUNIT + 1];
    const static UINT8 NEOGEO_A_EXTRALOC = NEOGEO_A_NUMUNIT;

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;
    bool m_fHaveDoneInitialSet = false;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    void SetAlphaModeInternal(AlphaMode NewMode);
    bool SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting);

public:
    CGame_NEOGEO_A(UINT32 nConfirmedROMSize);
    ~CGame_NEOGEO_A(void);

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

    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    void SetAlphaMode(AlphaMode NewMode) override;
    bool SetColorMode(ColMode NewMode) override;
    bool AllowUpdatingColorFormatForGame() override { return true; }

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* NEOGEO_A_EXTRA_CUSTOM;
};

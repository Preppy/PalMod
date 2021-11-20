#pragma once
#include "gameclass.h"
#include "MMX_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_MMX_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForMMX;

    static size_t rgExtraCountAll[MMX_SNES_NUMUNIT + 1];
    static size_t rgExtraLoc[MMX_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_MMX_SNES = L"MMXE.txt";
    static constexpr auto MMX_SNES_PRIMARY_ROMNAME = L"megaman x (usa).sfc";

public:
    CGame_MMX_SNES(UINT32 nConfirmedROMSize);
    ~CGame_MMX_SNES(void);

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

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* MMX_SNES_EXTRA_CUSTOM;
};

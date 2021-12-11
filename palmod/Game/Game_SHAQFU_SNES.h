#pragma once
#include "gameclass.h"
#include "SHAQFU_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_SHAQFU_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSHAQFU;

    static size_t rgExtraCountAll[SHAQFU_SNES_NUMUNIT + 1];
    static size_t rgExtraLoc[SHAQFU_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_SHAQFU_SNES = L"ShaqFu_SNES_E.txt";
    static constexpr auto SHAQFU_SNES_PRIMARY_ROMNAME = L"Shaq Fu (USA).sfc";

public:
    CGame_SHAQFU_SNES(UINT32 nConfirmedROMSize);
    ~CGame_SHAQFU_SNES(void);

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

    static stExtraDef* SHAQFU_SNES_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "SHAQFU_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_SHAQFU_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSHAQFU;

    static uint32_t rgExtraCountAll[SHAQFU_SNES_NUMUNIT + 1];
    static uint32_t rgExtraLoc[SHAQFU_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_SHAQFU_SNES = L"ShaqFu_SNES_E.txt";
    static constexpr auto SHAQFU_SNES_PRIMARY_ROMNAME = L"Shaq Fu (USA).sfc";

public:
    CGame_SHAQFU_SNES(UINT32 nConfirmedROMSize);
    ~CGame_SHAQFU_SNES(void);

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

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* SHAQFU_SNES_EXTRA_CUSTOM;
};

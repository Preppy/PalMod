#pragma once
#include "gameclass.h"
#include "UMK3_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_UMK3_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForUMK3;

    static uint32_t rgExtraCountAll[UMK3_SNES_NUMUNIT + 1];
    static uint32_t rgExtraLoc[UMK3_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_UMK3_SNES = L"UMK3_SNES_E.txt";
    static constexpr auto UMK3_SNES_PRIMARY_ROMNAME = L"Ultimate Mortal Kombat 3 (USA).sfc";

public:
    CGame_UMK3_SNES(UINT32 nConfirmedROMSize);
    ~CGame_UMK3_SNES(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
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

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* UMK3_SNES_EXTRA_CUSTOM;
};

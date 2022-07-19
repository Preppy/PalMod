#pragma once
#include "gameclass.h"
#include "RANMAHB_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_RANMAHB_SNES : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForRANMAHB;

    static uint32_t rgExtraCountAll[RANMAHB_SNES_NUMUNIT + 1];
    static uint32_t rgExtraLoc[RANMAHB_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_RANMAHB_SNES = L"RanmaHBE.txt";
    static constexpr auto RANMAHB_SNES_PRIMARY_ROMNAME = L"ranma 1-2 - hard battle (usa).sfc";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x180000;

public:
    CGame_RANMAHB_SNES(uint32_t nConfirmedROMSize);
    ~CGame_RANMAHB_SNES();

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

    static stExtraDef* RANMAHB_SNES_EXTRA_CUSTOM;
};

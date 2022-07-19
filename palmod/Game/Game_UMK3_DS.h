#pragma once
#include "gameclass.h"
#include "UMK3_DS_DEF.h"
#include "..\extrafile.h"

class CGame_UMK3_DS : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForUMK3;

    static uint32_t rgExtraCountAll[UMK3_DS_NUMUNIT + 1];
    static uint32_t rgExtraLoc[UMK3_DS_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_UMK3_DS = L"UMK3_DS_E.txt";
    static constexpr auto UMK3_DS_PRIMARY_ROMNAME = L"Ultimate Mortal Kombat (USA) (En,Fr,De,Es,It).nds";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x4000000;

public:
    CGame_UMK3_DS(uint32_t nConfirmedROMSize);
    ~CGame_UMK3_DS();

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

    static stExtraDef* UMK3_DS_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "GGDS_NDS_DEF.h"
#include "..\extrafile.h"

// Howdy!  To adapt this file for your game:
// * replace usage of NEWGAME with the shortname for your game.
// * update the value GGDS_NDS_PRIMARY_ROMNAME to your ROM name
// That's it: this file should be simple to adapt.
    
class CGame_GGDS_NDS : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForNEWGAME;

    static uint32_t rgExtraCountAll[GGDS_NDS_NUMUNIT + 1];
    static uint32_t rgExtraLoc[GGDS_NDS_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId);

    static constexpr auto EXTRA_FILENAME_GGDS_NDS = L"GGDStrikersE.txt";
    static constexpr auto GGDS_NDS_PRIMARY_ROMNAME = L"0590 - Guilty Gear - Dust Strikers (Japan).nds"; // the file that your palettes are stored in
     // Update to the actual byte size in hex of the ROM file size you expect
    static constexpr uint32_t m_nExpectedGameROMSize = 0x4000000;
    // You will need to update this once you modify palettes, but PalMod will prompt you to do so.
    // Exact count will be shown in debug output in the debugger
    static constexpr uint32_t m_nPaletteCountInHeaders = 213;
    // ** This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    // You will need to update this, but PalMod will prompt you to do so.  Exact location will be shown and also
    // visible in debug output in the debugger.
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x1175e28;

public:
    CGame_GGDS_NDS(uint32_t nConfirmedROMSize);
    ~CGame_GGDS_NDS();

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

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

    static stExtraDef* GGDS_NDS_EXTRA_CUSTOM;
};

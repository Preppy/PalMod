#pragma once
#include "gameclass.h"
#include "..\extrafile.h"

// Howdy!  To adapt this file for your game:
// * replace usage of NEWGAME with the shortname for your game.
// * update the value NEWGAME_A_PRIMARY_ROMNAME to your ROM name
// That's it: this file should be simple to adapt.

class CGame_NEWGAME_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNEWGAME;

    static uint32_t rgExtraCountAll[NEWGAME_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[NEWGAME_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId);

    static constexpr auto EXTRA_FILENAME_NEWGAME_A = L"NewGameE.txt";
    static constexpr auto NEWGAME_A_PRIMARY_ROMNAME = L"NEWGAME.ROM"; // the file that your palettes are stored in
     // Update to the actual byte size in hex of the ROM file size you expect
    static constexpr UINT32 m_nExpectedGameROMSize = 0x200000;

public:
    CGame_NEWGAME_A(UINT32 nConfirmedROMSize);
    ~CGame_NEWGAME_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static int GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(uint32_t nUnitId);

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

    static stExtraDef* NEWGAME_A_EXTRA_CUSTOM;
};

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

    static size_t rgExtraCountAll[NEWGAME_A_NUMUNIT + 1];
    static size_t rgExtraLoc[NEWGAME_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId);

    static constexpr auto EXTRA_FILENAME_NEWGAME_A = L"NewGameE.txt";
    static constexpr auto NEWGAME_A_PRIMARY_ROMNAME = L"NEWGAME.ROM"; // the file that your palettes are stored in

public:
    CGame_NEWGAME_A(UINT32 nConfirmedROMSize);
    ~CGame_NEWGAME_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(size_t nUnitId);

    //Extra palette function
    static int GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(size_t nUnitId);

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

    static stExtraDef* NEWGAME_A_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "NEWGAME_A_DEF.h"
#include "..\extrafile.h"

// Howdy!  To adapt this file for your game:
// * replace usage of NEWGAME with the shortname for your game.
// * update the value NEWGAME_A_PRIMARY_ROMNAME to your ROM name
// That's it: this file should be simple to adapt.

class CGame_NEWGAME_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNEWGAME;

    static int rgExtraCountAll[NEWGAME_A_NUMUNIT + 1];
    static int rgExtraLoc[NEWGAME_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    static constexpr auto EXTRA_FILENAME_NEWGAME_A = L"NewGameE.txt";
    static constexpr auto NEWGAME_A_PRIMARY_ROMNAME = L"NEWGAME.ROM"; // the file that your palettes are stored in

public:
    CGame_NEWGAME_A(UINT32 nConfirmedROMSize);
    ~CGame_NEWGAME_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* NEWGAME_A_EXTRA_CUSTOM;
};

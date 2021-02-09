#pragma once
#include "gameclass.h"
#include "NEOGEO_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_NEO_GEO_A = L"NEOGEOE.txt";
constexpr auto EXTRA_FILENAME_UNKNOWN_A = L"UnknownE.txt";

#define GetExtraDefForNEOGEO(x)((stExtraDef *)&NEOGEO_A_EXTRA_CUSTOM[x])

class CGame_NEOGEO_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNEOGEO;

    static int rgExtraCountAll[NEOGEO_A_NUMUNIT + 1];
    static int rgExtraLoc[NEOGEO_A_NUMUNIT + 1];
    const static UINT8 NEOGEO_A_EXTRALOC = NEOGEO_A_NUMUNIT;

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;
    bool m_fHaveDoneInitialSet = false;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    void SetAlphaModeInternal(AlphaMode NewMode);
    BOOL SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting);

public:
    CGame_NEOGEO_A(UINT32 nConfirmedROMSize);
    ~CGame_NEOGEO_A(void);

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

    void SetAlphaMode(AlphaMode NewMode) override;
    BOOL SetColorMode(ColMode NewMode) override;
    bool AllowUpdatingColorFormatForGame() override { return true; }

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* NEOGEO_A_EXTRA_CUSTOM;
};

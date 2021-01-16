#pragma once
#include "gameclass.h"
#include "MVC2_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_MVC2_A = _T("MVC2e.txt");
#define GetExtraDefForMVC2(x)((stExtraDef *)&MVC2_A_EXTRA_CUSTOM[x])

class CGame_MVC2_A : public CGameWithExtrasFile
{
public:
    static UINT32 m_nTotalPaletteCountForMVC2;

    static int rgExtraCountAll[MVC2_A_NUMUNIT + 1];
    static int rgExtraLoc[MVC2_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    // Developer-only mode to regenerate the header file quickly.
    void DumpAllCharacters();

public:
    CGame_MVC2_A(UINT32 nConfirmedROMSize);
    ~CGame_MVC2_A(void);

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
    static LPCTSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    int GetBasicOffset(UINT16 nPalId);
    void PostSetPal(UINT16 nUnitId, UINT16 nPalId);

    static stExtraDef* MVC2_A_EXTRA_CUSTOM;
};

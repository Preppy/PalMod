#pragma once
#include "gameclass.h"
#include "REDEARTH_A_DEF.h"
#include "..\ExtraFile.h"

#define REDEARTH_A_USEEXTRAFILE

constexpr auto EXTRA_FILENAME_REDEARTH = _T("REDEARTHe.txt");

#define GetRedEarthExtraDef(x) ((stExtraDef *)&REDEARTH_A_EXTRA_CUSTOM[x])

class CGame_REDEARTH_A : public CGameWithExtrasFile
{
public:
    static int rgExtraCountAll[REDEARTH_A_NUMUNIT + 1];
    static int rgExtraLoc[REDEARTH_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    bool CanEnableMultispriteExport(UINT16 nUnitId, UINT16 nPalId);

public:
    CGame_REDEARTH_A(UINT32 nConfirmedROMSize = -1);
    ~CGame_REDEARTH_A(void);

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

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* REDEARTH_A_EXTRA_CUSTOM;
};

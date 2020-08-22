#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"
#include "..\ExtraFile.h"

#define SFIII3_A_USEEXTRAFILE

constexpr auto EXTRA_FILENAME_SF3 = _T("sfiii3e.txt");

#ifdef SFIII3_A_USEEXTRAFILE
#define GetSF3ExtraDef(x) ((stExtraDef *)&SFIII3_A_EXTRA_CUSTOM[x])
#else
#define GetSF3ExtraDef(x) (const_cast<stExtraDef *>(&SFIII3_A_EXTRA[x]))
#endif

class CGame_SFIII3_A : public CGameWithExtrasFile
{
public:
    static int rgExtraCountAll[SFIII3_A_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly[SFIII3_A_NUMUNIT + 1];
    static int rgExtraLoc[SFIII3_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_SFIII3_A(UINT32 nConfirmedROMSize = -1);
    ~CGame_SFIII3_A(void);

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

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    static stExtraDef* SFIII3_A_EXTRA_CUSTOM;
};

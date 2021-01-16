#pragma once
#include "gameclass.h"
#include "NGBC_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_NGBC_A = _T("NGBCe.txt");
#define GetExtraDefForNGBC(x)((stExtraDef *)&NGBC_A_EXTRA_CUSTOM[x])

class CGame_NGBC_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForNGBC;
    static void DumpAllCharacters();

    static int rgExtraCountAll[NGBC_A_NUMUNIT + 1];
    static int rgExtraLoc[NGBC_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_NGBC_A(UINT32 nConfirmedROMSize);
    ~CGame_NGBC_A(void);

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

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* NGBC_A_EXTRA_CUSTOM;
};

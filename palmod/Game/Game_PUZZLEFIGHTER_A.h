#pragma once
#include "gameclass.h"
#include "PUZZLEFIGHTER_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_PUZZLEFIGHTER_A = _T("PUZZLEFIGHTERE.txt");
#define GetExtraDefForPuzzleFighter(x)((stExtraDef *)&PUZZLEFIGHTER_A_EXTRA_CUSTOM[x])

class CGame_PUZZLEFIGHTER_A : public CGameWithExtrasFile
{
private:
    //Used for image selection
    int nTargetImgId = 0;

    static UINT32 m_nTotalPaletteCountForPuzzleFighter;

    static int rgExtraCountAll[PUZZLEFIGHTER_A_NUMUNITS + 1];
    static int rgExtraLoc[PUZZLEFIGHTER_A_NUMUNITS + 1];

    void InitDataBuffer();
    void ClearDataBuffer();
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    UINT16*** m_pppDataBuffer = nullptr;

public:
    CGame_PUZZLEFIGHTER_A(UINT32 nConfirmedROMSize);
    ~CGame_PUZZLEFIGHTER_A(void);

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

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    UINT16*** GetDataBuffer() { return m_pppDataBuffer; };

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* PUZZLEFIGHTER_A_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "DOUBLEDRAGON_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_DOUBLEDRAGON_A = _T("DOUBLEDRAGONE.txt");

class CGame_DOUBLEDRAGON_A : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 2;
    static int m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForDOUBLEDRAGON;

    static int rgExtraCountAll[DOUBLEDRAGON_A_NUMUNIT + 1];
    static int rgExtraLoc[DOUBLEDRAGON_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_DOUBLEDRAGON_A(UINT32 nConfirmedROMSize, int nROMToLoad = 1);
    ~CGame_DOUBLEDRAGON_A(void);

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* DOUBLEDRAGON_A_EXTRA_CUSTOM;
};

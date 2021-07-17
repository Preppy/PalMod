#pragma once
#include "GameClass.h"
#include "SFA1_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFA1 = L"SFA1e.txt";
#define GetExtraDefForSFA1(x)((stExtraDef *)&SFA1_A_EXTRA_CUSTOM[x])

class CGame_SFA1_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSFA1;
    static int rgExtraCountAll[SFA1_A_NUMUNIT + 1];
    static int rgExtraLoc[SFA1_A_NUMUNIT + 1];

    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static void InitializeStatics();

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    // Developer-only mode to regenerate the header file quickly.
    static void DumpHeaderPalettes();

public:
    CGame_SFA1_A(UINT32 nConfirmedROMSize);
    ~CGame_SFA1_A(void);

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SFA1_A_EXTRA_CUSTOM;
};
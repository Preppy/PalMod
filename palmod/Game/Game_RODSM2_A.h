#pragma once
#include "gameclass.h"
#include "RODSM2_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_RODSM2_A = L"SlamMasters2E.txt";
#define GetExtraDefForSM2(x)((stExtraDef *)&RODSM2_A_EXTRA_CUSTOM[x])

class CGame_RODSM2_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSM2;

    static int rgExtraCountAll[RODSM2_A_NUMUNITS + 1];
    static int rgExtraLoc[RODSM2_A_NUMUNITS + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_RODSM2_A(UINT32 nConfirmedROMSize);
    ~CGame_RODSM2_A(void);

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* RODSM2_A_EXTRA_CUSTOM;
};

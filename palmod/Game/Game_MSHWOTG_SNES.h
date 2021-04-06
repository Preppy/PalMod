#pragma once
#include "gameclass.h"
#include "MSHWOTG_SNES_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_MSHWOTG_SNES = L"MSHWOTGE.txt";
#define GetExtraDefForMSHWOTG(x)((stExtraDef *)&MSHWOTG_SNES_EXTRA_CUSTOM[x])

class CGame_MSHWOTG_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForMSHWOTG;

    static int rgExtraCountAll[MSHWOTG_SNES_NUMUNIT + 1];
    static int rgExtraLoc[MSHWOTG_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_MSHWOTG_SNES(UINT32 nConfirmedROMSize);
    ~CGame_MSHWOTG_SNES(void);

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

    static stExtraDef* MSHWOTG_SNES_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "FatalFuryS_SNES_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_FatalFuryS_SNES = _T("FatalFurySE.txt");
#define GetExtraDefForFatalFuryS(x)((stExtraDef *)&FatalFuryS_SNES_EXTRA_CUSTOM[x])

class CGame_FatalFuryS_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForFatalFuryS;

    static int rgExtraCountAll[FatalFuryS_SNES_NUMUNIT + 1];
    static int rgExtraLoc[FatalFuryS_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_FatalFuryS_SNES(UINT32 nConfirmedROMSize);
    ~CGame_FatalFuryS_SNES(void);

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* FatalFuryS_SNES_EXTRA_CUSTOM;
};

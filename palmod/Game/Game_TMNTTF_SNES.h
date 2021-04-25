#pragma once
#include "gameclass.h"
#include "TMNTTF_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_TMNTTF_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForTMNTTF;

    static int rgExtraCountAll[TMNTTF_SNES_NUMUNIT + 1];
    static int rgExtraLoc[TMNTTF_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    static constexpr auto EXTRA_FILENAME_TMNTTF_SNES = L"TMNTTFE.txt";
    static constexpr auto TMNTTF_SNES_PRIMARY_ROMNAME = L"sns-ky-0.u1";

public:
    CGame_TMNTTF_SNES(UINT32 nConfirmedROMSize);
    ~CGame_TMNTTF_SNES(void);

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

    static stExtraDef* TMNTTF_SNES_EXTRA_CUSTOM;
};

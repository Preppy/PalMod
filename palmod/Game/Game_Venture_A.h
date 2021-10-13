#pragma once
#include "gameclass.h"
#include "VENTURE_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_VENTURE_A_31 = L"Venture31.txt";
constexpr auto EXTRA_FILENAME_VENTURE_A_50 = L"Venture50.txt";

#define GetExtraDefForVENTURE(x) (UsePaletteSetFor50() ? ((stExtraDef *)&VENTURE_A_EXTRA_CUSTOM_50[x]) : ((stExtraDef *)&VENTURE_A_EXTRA_CUSTOM_31[x]))

class CGame_VENTURE_A : public CGameWithExtrasFile
{
public:
    // Venturehas two different ROMs of interest: handle here.
    int m_nBufferVentureMode = 50;
    static int m_nVentureMode;
    static UINT32 m_nTotalPaletteCountFor31;
    static UINT32 m_nTotalPaletteCountFor50;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static const UINT32 m_nExpectedGameROMSize_31 = 0x800000;
    static const UINT32 m_nExpectedGameROMSize_50 = 0x400000;

    static UINT32 m_nConfirmedROMSize;

    static int rgExtraCountAll_31[VENTURE_A_NUMUNIT_31 + 1];
    static int rgExtraCountAll_50[VENTURE_A_NUMUNIT_50 + 1];
    static int rgExtraLoc_31[VENTURE_A_NUMUNIT_31 + 1];
    static int rgExtraLoc_50[VENTURE_A_NUMUNIT_50 + 1];

    static bool UsePaletteSetFor50() { return (m_nVentureMode == 50); }

public:
    CGame_VENTURE_A(UINT32 nConfirmedROMSize = -1, int nVentureModeToLoad = 50);
    ~CGame_VENTURE_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_31;
    static CDescTree MainDescTree_50;

    static sDescTreeNode* InitDescTree(int nPaletteSetToUse);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId);
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

    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* VENTURE_A_EXTRA_CUSTOM_31;
    static stExtraDef* VENTURE_A_EXTRA_CUSTOM_50;

    LPCWSTR GetGameName() override;
};

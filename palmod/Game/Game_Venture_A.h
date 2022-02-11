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
    static uint32_t m_nVentureMode;
    static UINT32 m_nTotalPaletteCountFor31;
    static UINT32 m_nTotalPaletteCountFor50;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static const UINT32 m_nExpectedGameROMSize_31 = 0x800000;
    static const UINT32 m_nExpectedGameROMSize_50 = 0x400000;

    static UINT32 m_nConfirmedROMSize;

    static uint32_t rgExtraCountAll_31[VENTURE_A_NUMUNIT_31 + 1];
    static uint32_t rgExtraCountAll_50[VENTURE_A_NUMUNIT_50 + 1];
    static uint32_t rgExtraLoc_31[VENTURE_A_NUMUNIT_31 + 1];
    static uint32_t rgExtraLoc_50[VENTURE_A_NUMUNIT_50 + 1];

    static bool UsePaletteSetFor50() { return (m_nVentureMode == 50); }

public:
    CGame_VENTURE_A(UINT32 nConfirmedROMSize = -1, int nVentureModeToLoad = 50);
    ~CGame_VENTURE_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_31;
    static CDescTree MainDescTree_50;

    static sDescTreeNode* InitDescTree(int nPaletteSetToUse);
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId);
    static uint32_t GetExtraLoc(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* VENTURE_A_EXTRA_CUSTOM_31;
    static stExtraDef* VENTURE_A_EXTRA_CUSTOM_50;

    LPCWSTR GetGameName() override;
};

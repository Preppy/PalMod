#pragma once
#include "gameclass.h"
#include "DANKUGA_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_DANKUGA = L"DANKUGAe.txt";

#define GetDANKUGAExtraDef(x) ((stExtraDef *)&DANKUGA_A_EXTRA_CUSTOM[x])

class CGame_DanKuGa_A_DIR : public CGameWithExtrasFile
{
public:
    static uint32_t rgExtraCountAll[DANKUGA_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[DANKUGA_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_DanKuGa_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_DanKuGa_A_DIR(void);

    UINT32 c_nRedEarthSIMMLength = 0x80000;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
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

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* DANKUGA_A_EXTRA_CUSTOM;
};

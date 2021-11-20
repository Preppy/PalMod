#pragma once
#include "gameclass.h"
#include "DANKUGA_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_DANKUGA = L"DANKUGAe.txt";

#define GetDANKUGAExtraDef(x) ((stExtraDef *)&DANKUGA_A_EXTRA_CUSTOM[x])

class CGame_DanKuGa_A_DIR : public CGameWithExtrasFile
{
public:
    static size_t rgExtraCountAll[DANKUGA_A_NUMUNIT + 1];
    static size_t rgExtraLoc[DANKUGA_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_DanKuGa_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_DanKuGa_A_DIR(void);

    UINT32 c_nRedEarthSIMMLength = 0x80000;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);

    //Static functions
    static size_t uRuleCtr;

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nRuleId);

    BOOL LoadFile(CFile* LoadedFile, size_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, size_t nSaveUnit) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

    //Extra palette function
    static size_t GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly = FALSE);
    static size_t GetExtraLoc(size_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static size_t GetCollectionCountForUnit(size_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static size_t GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(size_t nUnitId, size_t nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* DANKUGA_A_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "DANKUGA_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_DANKUGA = L"DANKUGAe.txt";

#define GetDANKUGAExtraDef(x) ((stExtraDef *)&DANKUGA_A_EXTRA_CUSTOM[x])

class CGame_DanKuGa_A_DIR : public CGameWithExtrasFile
{
public:
    static int rgExtraCountAll[DANKUGA_A_NUMUNIT + 1];
    static int rgExtraLoc[DANKUGA_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_DanKuGa_A_DIR(UINT32 nConfirmedROMSize = -1);
    ~CGame_DanKuGa_A_DIR(void);

    UINT32 c_nRedEarthSIMMLength = 0x80000;

    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);

    //Static functions
    static UINT16 uRuleCtr;

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, UINT16 nSaveUnit) override;

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();

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

    static stExtraDef* DANKUGA_A_EXTRA_CUSTOM;
};

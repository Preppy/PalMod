#pragma once
#include "gameclass.h"
#include "CVS2_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_CVS2_A = L"CVS2E.txt";
#define GetExtraDefForCVS2(x)((stExtraDef *)&CVS2_A_EXTRA_CUSTOM[x])

class CGame_CVS2_A : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForCVS2;
    static void DumpAllCharacters();

    static uint32_t rgExtraCountAll[CVS2_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[CVS2_A_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    void WarnIfROMIsEncrypted(CFile* LoadedFile);

public:
    CGame_CVS2_A(uint32_t nConfirmedROMSize);
    ~CGame_CVS2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);

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

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* CVS2_A_EXTRA_CUSTOM;
};

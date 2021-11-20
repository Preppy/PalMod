#pragma once
#include "gameclass.h"
#include "SFZ3U_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_SFZ3U_A = L"SFZ3UE.txt";
#define GetExtraDefForSFZ3U(x)((stExtraDef *)&SFZ3U_A_EXTRA_CUSTOM[x])

class CGame_SFZ3U_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSFZ3U;
    static void DumpAllCharacters();

    static size_t rgExtraCountAll[SFZ3U_A_NUMUNIT + 1];
    static size_t rgExtraLoc[SFZ3U_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_SFZ3U_A(UINT32 nConfirmedROMSize);
    ~CGame_SFZ3U_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(size_t nUnitId);

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

    static stExtraDef* SFZ3U_A_EXTRA_CUSTOM;
};

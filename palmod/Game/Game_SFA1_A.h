#pragma once
#include "GameClass.h"
#include "SFA1_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFA1 = L"SFA1e.txt";
#define GetExtraDefForSFA1(x)((stExtraDef *)&SFA1_A_EXTRA_CUSTOM[x])

class CGame_SFA1_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForSFA1;
    static size_t rgExtraCountAll[SFA1_A_NUMUNIT + 1];
    static size_t rgExtraLoc[SFA1_A_NUMUNIT + 1];

    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static void InitializeStatics();

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpHeaderPalettes();

public:
    CGame_SFA1_A(UINT32 nConfirmedROMSize);
    ~CGame_SFA1_A(void);

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

    size_t GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SFA1_A_EXTRA_CUSTOM;
};
#pragma once
#include "GameClass.h"
#include "SFA1_A_DEF.h"
#include "..\ExtraFile.h"

class CGame_SFA1_A : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForSFA1;
    static uint32_t rgExtraCountAll[SFA1_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[SFA1_A_NUMUNIT + 1];

    static uint32_t m_nConfirmedROMSize;

    static void InitializeStatics();

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpHeaderPalettes();

    static constexpr auto EXTRA_FILENAME_SFA1 = L"SFA1e.txt";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x80000; // 524288 bytes

public:
    CGame_SFA1_A(uint32_t nConfirmedROMSize);
    ~CGame_SFA1_A();

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

    uint32_t GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SFA1_A_EXTRA_CUSTOM;
};

#pragma once
#include "gameclass.h"
#include "KOF96_A_DEF.h"
#include "..\extrafile.h"

class CGame_KOF96_A : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForKOF96;

    static uint32_t rgExtraCountAll[KOF96_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[KOF96_A_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_KOF96_A = L"KOF96E.txt";
    static constexpr auto KOF96_A_PRIMARY_ROMNAME = L"214-p2.sp2";
    static constexpr auto KOF96_A_ALT_ROMNAME = L"214ae-p2.p2";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x200000;
    static constexpr uint32_t m_nAltGameROMSize = 0x400000;
    static constexpr uint32_t m_nPaletteCountInHeaders = 1038;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x100002;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF96_A(uint32_t nConfirmedROMSize);
    ~CGame_KOF96_A();

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

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* KOF96_A_EXTRA_CUSTOM;
};

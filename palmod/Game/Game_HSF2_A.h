#pragma once
#include "GameClass.h"
#include "HSF2_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_HSF2_03 = L"HSF2-03e.txt";
constexpr auto EXTRA_FILENAME_HSF2_04 = L"HSF2-04e.txt";

#define GetExtraDefForHSF2(x) (UsePaletteSetForPortraits() ? ((stExtraDef *)&HSF2_A_EXTRA_CUSTOM_03[x]) : ((stExtraDef *)&HSF2_A_EXTRA_CUSTOM_04[x]))

constexpr auto HSF2_A_GAMEKEY_03 = 3;
constexpr auto HSF2_A_GAMEKEY_04 = 4;

class CGame_HSF2_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = HSF2_A_GAMEKEY_04;
    static uint32_t m_nHSF2SelectedRom;
    static uint32_t m_nTotalPaletteCountForHSF2_03;
    static uint32_t m_nTotalPaletteCountForHSF2_04;
    static bool UsePaletteSetForPortraits() { return (m_nHSF2SelectedRom == HSF2_A_GAMEKEY_03); }
    static bool UsePaletteSetForCharacters() { return (m_nHSF2SelectedRom == HSF2_A_GAMEKEY_04); }

    static uint32_t rgExtraLoc_03[HSF2_A_NUMUNIT_03 + 1];
    static uint32_t rgExtraLoc_04[HSF2_A_NUMUNIT_04 + 1];
    static uint32_t rgExtraCountAll_03[HSF2_A_NUMUNIT_03 + 1];
    static uint32_t rgExtraCountAll_04[HSF2_A_NUMUNIT_04 + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;

    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_03 = 0x2ce98;
    const int m_uLowestKnownPaletteROMLocation_04 = 0x43f9e;

public:
    CGame_HSF2_A(uint32_t nConfirmedROMSize, int nHSF2RomToLoad);
    ~CGame_HSF2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_03;
    static CDescTree MainDescTree_04;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
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

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* HSF2_A_EXTRA_CUSTOM_03;
    static stExtraDef* HSF2_A_EXTRA_CUSTOM_04;
};
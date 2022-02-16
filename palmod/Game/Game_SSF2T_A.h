#pragma once
#include "GameClass.h"
#include "SSF2T_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SSF2T_3C = L"ssf2t-3ce.txt";
constexpr auto EXTRA_FILENAME_SSF2T_4A = L"ssf2t-4ae.txt";
constexpr auto EXTRA_FILENAME_SSF2T_8 = L"ssf2t-8e.txt";

#define GetExtraDefForSSF2T(x) (UsePaletteSetForPortraits() ? ((stExtraDef *)&SSF2T_A_EXTRA_CUSTOM_3C[x]) : (UsePaletteSetForCharacters() ? (stExtraDef *)&SSF2T_A_EXTRA_CUSTOM_4A[x] : (stExtraDef *)&SSF2T_A_EXTRA_CUSTOM_8[x]))

class CGame_SSF2T_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 3;
    static uint32_t m_nSSF2TSelectedRom;
    static UINT32 m_nTotalPaletteCountForSSF2T_3C;
    static UINT32 m_nTotalPaletteCountForSSF2T_4A;
    static UINT32 m_nTotalPaletteCountForSSF2T_8;
    static bool UsePaletteSetForPortraits() { return (m_nSSF2TSelectedRom == 3); }
    static bool UsePaletteSetForCharacters() { return (m_nSSF2TSelectedRom == 4); }
    static bool UsePaletteSetForStages() { return (m_nSSF2TSelectedRom == 8); }

    static uint32_t rgExtraLoc_3C[SSF2T_A_NUM_IND_3C + 1];
    static uint32_t rgExtraLoc_4A[SSF2T_A_NUM_IND_4A + 1];
    static uint32_t rgExtraLoc_8[SSF2T_A_NUM_IND_8 + 1];
    static uint32_t rgExtraCountAll_3C[SSF2T_A_NUM_IND_3C + 1];
    static uint32_t rgExtraCountAll_4A[SSF2T_A_NUM_IND_4A + 1];
    static uint32_t rgExtraCountAll_8[SSF2T_A_NUM_IND_8 + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_3C = 0x31c00;
    const int m_uLowestKnownPaletteROMLocation_4A = 0x3FB00;
    const int m_uLowestKnownPaletteROMLocation_8 = 0x603be;

public:
    CGame_SSF2T_A(UINT32 nConfirmedROMSize, int nSSF2TRomToLoad);
    ~CGame_SSF2T_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_3C;
    static CDescTree MainDescTree_4A;
    static CDescTree MainDescTree_8;

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SSF2T_A_EXTRA_CUSTOM_3C;
    static stExtraDef* SSF2T_A_EXTRA_CUSTOM_4A;
    static stExtraDef* SSF2T_A_EXTRA_CUSTOM_8;
};
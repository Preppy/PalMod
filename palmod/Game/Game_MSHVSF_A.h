#pragma once
#include "GameClass.h"
#include "MSHVSF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_MSHVSF_6A = L"mshvsf-6ae.txt";
constexpr auto EXTRA_FILENAME_MSHVSF_7B = L"mshvsf-7be.txt";

#define GetExtraDefForMSHVSF(x) (UsePaletteSetForCharacters() ? ((stExtraDef *)&MSHVSF_A_EXTRA_CUSTOM_6A[x]) : ((stExtraDef *)&MSHVSF_A_EXTRA_CUSTOM_7B[x]))

class CGame_MSHVSF_A :public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    uint32_t m_nBufferSelectedRom = 6;
    static uint32_t m_nMSHVSFSelectedRom;
    static UINT32 m_nTotalPaletteCountForMSHVSF_6A;
    static UINT32 m_nTotalPaletteCountForMSHVSF_7B;
    static inline bool UsePaletteSetForCharacters() { return (m_nMSHVSFSelectedRom == 6); }

    static uint32_t rgExtraLocation_6A[MSHVSF_A_NUM_IND_6A + 1];
    static uint32_t rgExtraLocation_7B[MSHVSF_A_NUM_IND_7B + 1];
    static uint32_t rgExtraCount_6A[MSHVSF_A_NUM_IND_6A + 1];
    static uint32_t rgExtraCount_7B[MSHVSF_A_NUM_IND_7B + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_6A = 0x56EF2;
    const int m_uLowestKnownPaletteROMLocation_7B = 0; // This is an odd file, yes.

public:
    CGame_MSHVSF_A(UINT32 nConfirmedROMSize, int nMSHVSFRomToLoad);
    ~CGame_MSHVSF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_6A;
    static CDescTree MainDescTree_7B;

    static sDescTreeNode* InitDescTree(uint32_t nROMPaletteSetToUse);
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly = FALSE);
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static stExtraDef* MSHVSF_A_EXTRA_CUSTOM_6A;
    static stExtraDef* MSHVSF_A_EXTRA_CUSTOM_7B;
};

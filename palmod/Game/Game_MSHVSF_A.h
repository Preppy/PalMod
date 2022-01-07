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
    int m_nBufferSelectedRom = 6;
    static size_t m_nMSHVSFSelectedRom;
    static UINT32 m_nTotalPaletteCountForMSHVSF_6A;
    static UINT32 m_nTotalPaletteCountForMSHVSF_7B;
    static inline bool UsePaletteSetForCharacters() { return (m_nMSHVSFSelectedRom == 6); }

    static size_t rgExtraLocation_6A[MSHVSF_A_NUM_IND_6A + 1];
    static size_t rgExtraLocation_7B[MSHVSF_A_NUM_IND_7B + 1];
    static size_t rgExtraCount_6A[MSHVSF_A_NUM_IND_6A + 1];
    static size_t rgExtraCount_7B[MSHVSF_A_NUM_IND_7B + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_6A = 0x56EF2;
    const int m_uLowestKnownPaletteROMLocation_7B = 0; // This is an odd file, yes.

public:
    CGame_MSHVSF_A(UINT32 nConfirmedROMSize, int nMSHVSFRomToLoad);
    ~CGame_MSHVSF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_6A;
    static CDescTree MainDescTree_7B;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    void PostSetPal(size_t nUnitId, size_t nPalId) override;

    static stExtraDef* MSHVSF_A_EXTRA_CUSTOM_6A;
    static stExtraDef* MSHVSF_A_EXTRA_CUSTOM_7B;
};

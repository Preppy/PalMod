#pragma once
#include "GameClass.h"
#include "SFA2_A_DEF.h"
#include "SFA2_Hack_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFA2_07 = L"SFA2e.txt";
constexpr auto EXTRA_FILENAME_SFA2_08 = L"SFA2-8e.txt";
constexpr auto EXTRA_FILENAME_SFA2_09 = L"SFA2-9e.txt";

enum class SFA2_SupportedROMRevision
{
    SFA2_960229,
    SFA2_960306_or_960430, // 960306 and 960430 are identical for both 07 and 08
    SFZ2A_960805,
    SFZ2A_960826,
    SFA2_Hack_220203,
    SFA2_Unsupported,
};

constexpr auto SFA2_A_GAMEKEY_07 = 7;
constexpr auto SFA2_A_GAMEKEY_08 = 8;
constexpr auto SFA2_HACK_GAMEKEY_09 = 9;

class CGame_SFA2_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = SFA2_A_GAMEKEY_07;
    static uint32_t m_nSFA2SelectedRom;
    static SFA2_SupportedROMRevision m_currentSFA2ROMRevision;
    static uint32_t m_nTotalPaletteCountForSFA2_07_Rev1;
    static uint32_t m_nTotalPaletteCountForSFA2_07_Rev2;
    static uint32_t m_nTotalPaletteCountForSFZ2A_07;
    static uint32_t m_nTotalPaletteCountForSFA2_08_Rev1;
    static uint32_t m_nTotalPaletteCountForSFA2_08_Rev2;
    static uint32_t m_nTotalPaletteCountForSFZ2A_08;
    static uint32_t m_nTotalPaletteCountForSFA2_Hack_09;
    static bool UsePaletteSetForCharacters() { return ((m_nSFA2SelectedRom == SFA2_A_GAMEKEY_07) || (m_nSFA2SelectedRom == SFA2_HACK_GAMEKEY_09)); }
    static bool UsingExpandedVersion() { return (m_currentSFA2ROMRevision == SFA2_SupportedROMRevision::SFA2_Hack_220203); }

    static uint32_t rgExtraCountAll_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1];
    static uint32_t rgExtraCountAll_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1];
    static uint32_t rgExtraCountAll_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1];
    static uint32_t rgExtraCountAll_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1];
    static uint32_t rgExtraCountAll_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1];
    static uint32_t rgExtraCountAll_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1];
    static uint32_t rgExtraCountAll_09_SFA2_Hack[SFA2_HACK_NUM_09 + 1];
    static uint32_t rgExtraLoc_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1];
    static uint32_t rgExtraLoc_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1];
    static uint32_t rgExtraLoc_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1];
    static uint32_t rgExtraLoc_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1];
    static uint32_t rgExtraLoc_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1];
    static uint32_t rgExtraLoc_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1];
    static uint32_t rgExtraLoc_09_SFA2_Hack[SFA2_HACK_NUM_09 + 1];

    void ResetActiveSFA2Revision();

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    SFA2_SupportedROMRevision GetSFA2ROMVersion(CFile* LoadedFile);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_SFA2_A(uint32_t nConfirmedROMSize, int nSFA2ROMToLoad);
    ~CGame_SFA2_A();

    //Static functions / variables
    static CDescTree MainDescTree_07_Rev1;
    static CDescTree MainDescTree_07_Rev2;
    static CDescTree MainDescTree_07_SFZ2A;
    static CDescTree MainDescTree_08_Rev1;
    static CDescTree MainDescTree_08_Rev2;
    static CDescTree MainDescTree_08_SFZ2A;
    static CDescTree MainDescTree_09_Hack;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse, SFA2_SupportedROMRevision nROMRevision);
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

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07_REV1;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07_REV2;
    static stExtraDef* SFZ2A_A_EXTRA_CUSTOM_07;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_08_REV1;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_08_REV2;
    static stExtraDef* SFZ2A_A_EXTRA_CUSTOM_08;
    static stExtraDef* SFA2_HACK_EXTRA_CUSTOM_09;
};

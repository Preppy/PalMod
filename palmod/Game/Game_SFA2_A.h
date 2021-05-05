#pragma once
#include "GameClass.h"
#include "SFA2_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFA2_07 = L"SFA2e.txt";
constexpr auto EXTRA_FILENAME_SFA2_08 = L"SFA2-8e.txt";

enum class SFA2_SupportedROMRevision
{
    SFA2_960229,
    SFA2_960306_or_960430, // 960306 and 960430 are identical for both 07 and 08
    SFZ2A_960805,
    SFZ2A_960826,
    SFA2_Unsupported,
};

class CGame_SFA2_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 7;
    static int m_nSFA2SelectedRom;
    static SFA2_SupportedROMRevision m_currentSFA2ROMRevision;
    static UINT32 m_nTotalPaletteCountForSFA2_07_Rev1;
    static UINT32 m_nTotalPaletteCountForSFA2_07_Rev2;
    static UINT32 m_nTotalPaletteCountForSFZ2A_07;
    static UINT32 m_nTotalPaletteCountForSFA2_08_Rev1;
    static UINT32 m_nTotalPaletteCountForSFA2_08_Rev2;
    static UINT32 m_nTotalPaletteCountForSFZ2A_08;
    static bool UsePaletteSetForCharacters() { return (m_nSFA2SelectedRom == 7); }

    static int rgExtraCountAll_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1];
    static int rgExtraCountAll_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1];
    static int rgExtraCountAll_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1];
    static int rgExtraCountAll_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1];
    static int rgExtraCountAll_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1];
    static int rgExtraCountAll_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1];
    static int rgExtraLoc_07_Rev1[SFA2_A_NUM_IND_07_REV1 + 1];
    static int rgExtraLoc_07_Rev2[SFA2_A_NUM_IND_07_REV2 + 1];
    static int rgExtraLoc_07_SFZ2A[SFZ2A_A_NUM_IND_07 + 1];
    static int rgExtraLoc_08_Rev1[SFA2_A_NUM_IND_08_REV1 + 1];
    static int rgExtraLoc_08_Rev2[SFA2_A_NUM_IND_08_REV2 + 1];
    static int rgExtraLoc_08_SFZ2A[SFZ2A_A_NUM_IND_08 + 1];

    void ResetActiveSFA2Revision();

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    SFA2_SupportedROMRevision GetSFA2ROMVersion(CFile* LoadedFile);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_SFA2_A(UINT32 nConfirmedROMSize, int nSFA2ROMToLoad);
    ~CGame_SFA2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_07_Rev1;
    static CDescTree MainDescTree_07_Rev2;
    static CDescTree MainDescTree_07_SFZ2A;
    static CDescTree MainDescTree_08_Rev1;
    static CDescTree MainDescTree_08_Rev2;
    static CDescTree MainDescTree_08_SFZ2A;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse, SFA2_SupportedROMRevision nROMRevision);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07_REV1;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07_REV2;
    static stExtraDef* SFZ2A_A_EXTRA_CUSTOM_07;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_08_REV1;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_08_REV2;
    static stExtraDef* SFZ2A_A_EXTRA_CUSTOM_08;
};

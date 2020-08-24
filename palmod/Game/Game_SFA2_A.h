#pragma once
#include "GameClass.h"
#include "SFA2_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFA2_07 = _T("SFA2e.txt");
constexpr auto EXTRA_FILENAME_SFA2_08 = _T("SFA2-8e.txt");
#define GetExtraDefForSFA2(x) (UsePaletteSetForCharacters() ? ( IsSFA2Rev1() ? (stExtraDef *)&SFA2_A_EXTRA_CUSTOM_07_0229[x] : (stExtraDef *)&SFA2_A_EXTRA_CUSTOM_07_MAX[x]) : ((stExtraDef *)&SFA2_A_EXTRA_CUSTOM_08[x]))

enum SFA2_SupportedROMRevision
{
    SFA2_960229,
    SFA2_960306_or_960430, // 960306 and 960430 are identical for both 07 and 08
    SFA2_Unsupported,
};

class CGame_SFA2_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 3;
    static int m_nSFA2SelectedRom;
    static SFA2_SupportedROMRevision m_currentSFA2ROMRevision;
    static UINT32 m_nTotalPaletteCountForSFA2_07_0229;
    static UINT32 m_nTotalPaletteCountForSFA2_07_MAX;
    static UINT32 m_nTotalPaletteCountForSFA2_08;
    static bool UsePaletteSetForCharacters() { return (m_nSFA2SelectedRom == 7); }

    static int rgExtraCountAll_07_0229[SFA2_A_NUM_IND_07_0229 + 1];
    static int rgExtraCountAll_07_MAX[SFA2_A_NUM_IND_07_MAX + 1];
    static int rgExtraCountAll_08[SFA2_A_NUM_IND_08 + 1];
    static int rgExtraLoc_07_0229[SFA2_A_NUM_IND_07_0229 + 1];
    static int rgExtraLoc_07_MAX[SFA2_A_NUM_IND_07_MAX + 1];
    static int rgExtraLoc_08[SFA2_A_NUM_IND_08 + 1];

    void ResetActiveSFA2Revision();

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static bool IsSFA2Rev1() { return m_currentSFA2ROMRevision == SFA2_960229; };
    static const sDescTreeNode* GetCurrentUnitSet();
    SFA2_SupportedROMRevision GetSFA2ROMVersion(CFile* LoadedFile);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_SFA2_A(UINT32 nConfirmedROMSize, int nSFA2ROMToLoad);
    ~CGame_SFA2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_07_0229;
    static CDescTree MainDescTree_07_MAX;
    static CDescTree MainDescTree_08;

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
    static LPCTSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    LPCTSTR GetGameName() override;

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    void UpdatePalData();

    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07_0229;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07_MAX;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_08;
};
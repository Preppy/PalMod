#pragma once
#include "GameClass.h"
#include "SFA2_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFA2_07 = _T("SFA2e.txt");
constexpr auto EXTRA_FILENAME_SFA2_08 = _T("SFA2-8e.txt");
#define GetExtraDefForSFA2(x) (UsePaletteSetForCharacters() ? ((stExtraDef *)&SFA2_A_EXTRA_CUSTOM_07[x]) : ((stExtraDef *)&SFA2_A_EXTRA_CUSTOM_08[x]))

enum SFA2_SupportedROMVersion
{
    SFA2_960229,
    SFA2_960306,
    SFA2_Unsupported,
};

class CGame_SFA2_A : public CGameWithExtrasFile
{
private:
    //Used for image selection
    int nTargetImgId = 0;
    SFA2_SupportedROMVersion m_currentSFA2ROMVersion = SFA2_960229;

    //Used for GetPalOffset
    UINT32 nCurrPalOffs = 0;    

    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 3;
    static int m_nSFA2SelectedRom;
    static UINT32 m_nTotalPaletteCountForSFA2_07;
    static UINT32 m_nTotalPaletteCountForSFA2_08;
    static bool UsePaletteSetForCharacters() { return (m_nSFA2SelectedRom == 7); }

    static int rgExtraCountAll_07[SFA2_A_NUM_IND_07 + 1];
    static int rgExtraCountAll_08[SFA2_A_NUM_IND_08 + 1];
    static int rgExtraLoc_07[SFA2_A_NUM_IND_07 + 1];
    static int rgExtraLoc_08[SFA2_A_NUM_IND_08 + 1];

    void InitDataBuffer();
    void ClearDataBuffer();
    static void InitializeStatics();
    static UINT32 m_nGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    SFA2_SupportedROMVersion GetSFA2ROMVersion(CFile* LoadedFile);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    UINT16*** pppDataBuffer = nullptr;

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_SFA2_A(UINT32 nConfirmedROMSize, int nSFA2ROMToLoad);
    ~CGame_SFA2_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_07;
    static CDescTree MainDescTree_08;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
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

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* SFA2_A_EXTRA_CUSTOM_07;
    static stExtraDef* SFA2_A_EXTRA_CUSTOM_08;
};
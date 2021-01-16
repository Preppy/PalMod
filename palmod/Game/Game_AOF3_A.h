#pragma once
#include "gameclass.h"
#include "AOF3_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_AOF3_A_P1 = _T("AOF3P1E.txt");
constexpr auto EXTRA_FILENAME_AOF3_A_P2 = _T("AOF3P2E.txt");

class CGame_AOF3_A : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 2;
    static int m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForAOF3_P1;
    static UINT32 m_nTotalPaletteCountForAOF3_P2;
    static bool UsePaletteSetForP1() { return (m_nSelectedRom == 1); }

    static int rgExtraCountAll_P1[AOF3_A_P1_NUMUNIT + 1];
    static int rgExtraCountAll_P2[AOF3_A_P2_NUMUNIT + 1];
    static int rgExtraLoc_P1[AOF3_A_P1_NUMUNIT + 1];
    static int rgExtraLoc_P2[AOF3_A_P2_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSizeP1;
    static UINT32 m_nExpectedGameROMSizeP2;
    static UINT32 m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders(int nHeaderSetToDump);

public:
    CGame_AOF3_A(UINT32 nConfirmedROMSize, int nROMToLoad = 1);
    ~CGame_AOF3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_P1;
    static CDescTree MainDescTree_P2;

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

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* AOF3_A_P1_EXTRA_CUSTOM;
    static stExtraDef* AOF3_A_P2_EXTRA_CUSTOM;
};

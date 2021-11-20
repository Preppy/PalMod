#pragma once
#include "gameclass.h"
#include "AOF3_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_AOF3_A_P1 = L"AOF3P1E.txt";
constexpr auto EXTRA_FILENAME_AOF3_A_P2 = L"AOF3P2E.txt";

class CGame_AOF3_A : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 2;
    static size_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForAOF3_P1;
    static UINT32 m_nTotalPaletteCountForAOF3_P2;
    static bool UsePaletteSetForP1() { return (m_nSelectedRom == 1); }

    static size_t rgExtraCountAll_P1[AOF3_A_P1_NUMUNIT + 1];
    static size_t rgExtraCountAll_P2[AOF3_A_P2_NUMUNIT + 1];
    static size_t rgExtraLoc_P1[AOF3_A_P1_NUMUNIT + 1];
    static size_t rgExtraLoc_P2[AOF3_A_P2_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSizeP1;
    static UINT32 m_nExpectedGameROMSizeP2;
    static UINT32 m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_AOF3_A(UINT32 nConfirmedROMSize, int nROMToLoad = 1);
    ~CGame_AOF3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_P1;
    static CDescTree MainDescTree_P2;

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

    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* AOF3_A_P1_EXTRA_CUSTOM;
    static stExtraDef* AOF3_A_P2_EXTRA_CUSTOM;
};

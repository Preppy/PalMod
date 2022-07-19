#pragma once
#include "gameclass.h"
#include "AOF3_A_DEF.h"
#include "..\extrafile.h"

class CGame_AOF3_A : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 2;
    static uint32_t m_nSelectedRom;
    static uint32_t m_nTotalPaletteCountForAOF3_P1;
    static uint32_t m_nTotalPaletteCountForAOF3_P2;
    static bool UsePaletteSetForP1() { return (m_nSelectedRom == 1); }

    static uint32_t rgExtraCountAll_P1[AOF3_A_P1_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_P2[AOF3_A_P2_NUMUNIT + 1];
    static uint32_t rgExtraLoc_P1[AOF3_A_P1_NUMUNIT + 1];
    static uint32_t rgExtraLoc_P2[AOF3_A_P2_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_AOF3_A_P1 = L"AOF3P1E.txt";
    static constexpr auto EXTRA_FILENAME_AOF3_A_P2 = L"AOF3P2E.txt";
    static constexpr uint32_t m_nExpectedGameROMSizeP1 = 0x100000;
    static constexpr uint32_t m_nExpectedGameROMSizeP2 = 0x200000;

public:
    CGame_AOF3_A(uint32_t nConfirmedROMSize, int nROMToLoad = 1);
    ~CGame_AOF3_A();

    //Static functions / variables
    static CDescTree MainDescTree_P1;
    static CDescTree MainDescTree_P2;

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

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* AOF3_A_P1_EXTRA_CUSTOM;
    static stExtraDef* AOF3_A_P2_EXTRA_CUSTOM;
};

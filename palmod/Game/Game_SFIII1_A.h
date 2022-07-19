#pragma once
#include "gameclass.h"
#include "SFIII1_A_DEF.h"
#include "..\ExtraFile.h"

class CGame_SFIII1_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 50;
    static uint32_t m_nSelectedRom;
    static uint32_t m_nTotalPaletteCountForSFIII1_50;

    static uint32_t rgExtraCountAll_50[SFIII1_A_50_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_50[SFIII1_A_50_NUMUNIT + 1];
    static uint32_t rgExtraLoc_50[SFIII1_A_50_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_SFIII1_50 = L"SFIII1e.txt";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x400000; // 4,194,304 bytes

public:
    CGame_SFIII1_A(uint32_t nConfirmedROMSize = -1, int nSF3ROMToLoad = 50);
    ~CGame_SFIII1_A();

    //Static functions / variables
    static CDescTree MainDescTree_50;

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
    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static stExtraDef* SFIII1_A_50_EXTRA_CUSTOM;
};

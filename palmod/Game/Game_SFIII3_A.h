#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF3_10 = L"sfiii3-10e.txt";
constexpr auto EXTRA_FILENAME_SF3_51 = L"sfiii3e.txt";

uint32_t cps3_mask(uint32_t address, uint32_t key1, uint32_t key2);

enum SFIII3S_SupportedROMs
{
    SF3ROM_10 = 10,
    SF3ROM_10_4rd = 14,
    SF3ROM_51 = 51,
    SF3ROM_51_4rd = 4,
    SF3ROM_70_EX = 70,
};

class CGame_SFIII3_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = SF3ROM_51;
    static uint32_t m_nSelectedRom;
    static uint32_t m_nTotalPaletteCountForSFIII3_10;
    static uint32_t m_nTotalPaletteCountForSFIII3_14;
    static uint32_t m_nTotalPaletteCountForSFIII3_4;
    static uint32_t m_nTotalPaletteCountForSFIII3_51;
    static uint32_t m_nTotalPaletteCountForSFIII3_70;
    static bool IsROMEncrypted() { return (m_nSelectedRom == SF3ROM_10) || (m_nSelectedRom == SF3ROM_10_4rd); };
    static bool UsePaletteSetFor10() { return (m_nSelectedRom == SF3ROM_10); }
    static bool UsePaletteSetFor10_4rd() { return (m_nSelectedRom == SF3ROM_10) || (m_nSelectedRom == SF3ROM_10_4rd); }
    static bool UsePaletteSetFor51() { return (m_nSelectedRom == SF3ROM_51); }
    static bool UsePaletteSetFor51_4rd() { return (m_nSelectedRom == SF3ROM_51_4rd); }
    static bool UsePaletteSetFor3Ex() { return (m_nSelectedRom == SF3ROM_70_EX); }
    static bool UsingROMForGill() { return (m_nSelectedRom == SF3ROM_10) || (m_nSelectedRom == SF3ROM_10_4rd); };

    static uint32_t rgExtraCountAll_10[SFIII3_A_10_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_14[SFIII3_A_10_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_4[SFIII3_A_51_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_51[SFIII3_A_51_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_70[SFIII3_A_70_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_10[SFIII3_A_10_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_14[SFIII3_A_10_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_4[SFIII3_A_51_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_51[SFIII3_A_51_NUMUNIT + 1];
    static uint32_t rgExtraCountVisibleOnly_70[SFIII3_A_70_NUMUNIT + 1];
    static uint32_t rgExtraLoc_10[SFIII3_A_10_NUMUNIT + 1];
    static uint32_t rgExtraLoc_14[SFIII3_A_10_NUMUNIT + 1];
    static uint32_t rgExtraLoc_4[SFIII3_A_51_NUMUNIT + 1];
    static uint32_t rgExtraLoc_51[SFIII3_A_51_NUMUNIT + 1];
    static uint32_t rgExtraLoc_70[SFIII3_A_70_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_SFIII3_A(uint32_t nConfirmedROMSize = -1, int nSF3ROMToLoad = 51);
    ~CGame_SFIII3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_10;
    static CDescTree MainDescTree_14;
    static CDescTree MainDescTree_4;
    static CDescTree MainDescTree_51;
    static CDescTree MainDescTree_70;

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

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static stExtraDef* SFIII3_A_10_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_14_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_4_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_51_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_70_EXTRA_CUSTOM;
};

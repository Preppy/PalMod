#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF3_10 = L"sfiii3-10e.txt";
constexpr auto EXTRA_FILENAME_SF3_51 = L"sfiii3e.txt";

UINT32 cps3_mask(UINT32 address, UINT32 key1, UINT32 key2);

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
    static size_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSFIII3_10;
    static UINT32 m_nTotalPaletteCountForSFIII3_14;
    static UINT32 m_nTotalPaletteCountForSFIII3_4;
    static UINT32 m_nTotalPaletteCountForSFIII3_51;
    static UINT32 m_nTotalPaletteCountForSFIII3_70;
    static bool IsROMEncrypted() { return (m_nSelectedRom == SF3ROM_10) || (m_nSelectedRom == SF3ROM_10_4rd); };
    static bool UsePaletteSetFor10() { return (m_nSelectedRom == SF3ROM_10); }
    static bool UsePaletteSetFor10_4rd() { return (m_nSelectedRom == SF3ROM_10) || (m_nSelectedRom == SF3ROM_10_4rd); }
    static bool UsePaletteSetFor51() { return (m_nSelectedRom == SF3ROM_51); }
    static bool UsePaletteSetFor51_4rd() { return (m_nSelectedRom == SF3ROM_51_4rd); }
    static bool UsePaletteSetFor3Ex() { return (m_nSelectedRom == SF3ROM_70_EX); }
    static bool UsingROMForGill() { return (m_nSelectedRom == SF3ROM_10) || (m_nSelectedRom == SF3ROM_10_4rd); };

    static size_t rgExtraCountAll_10[SFIII3_A_10_NUMUNIT + 1];
    static size_t rgExtraCountAll_14[SFIII3_A_10_NUMUNIT + 1];
    static size_t rgExtraCountAll_4[SFIII3_A_51_NUMUNIT + 1];
    static size_t rgExtraCountAll_51[SFIII3_A_51_NUMUNIT + 1];
    static size_t rgExtraCountAll_70[SFIII3_A_70_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly_10[SFIII3_A_10_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly_14[SFIII3_A_10_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly_4[SFIII3_A_51_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly_51[SFIII3_A_51_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly_70[SFIII3_A_70_NUMUNIT + 1];
    static size_t rgExtraLoc_10[SFIII3_A_10_NUMUNIT + 1];
    static size_t rgExtraLoc_14[SFIII3_A_10_NUMUNIT + 1];
    static size_t rgExtraLoc_4[SFIII3_A_51_NUMUNIT + 1];
    static size_t rgExtraLoc_51[SFIII3_A_51_NUMUNIT + 1];
    static size_t rgExtraLoc_70[SFIII3_A_70_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_SFIII3_A(UINT32 nConfirmedROMSize = -1, int nSF3ROMToLoad = 51);
    ~CGame_SFIII3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_10;
    static CDescTree MainDescTree_14;
    static CDescTree MainDescTree_4;
    static CDescTree MainDescTree_51;
    static CDescTree MainDescTree_70;

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

    BOOL LoadFile(CFile* LoadedFile, size_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    BOOL SaveFile(CFile* SaveFile, size_t nUnitId) override;

    static stExtraDef* SFIII3_A_10_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_14_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_4_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_51_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_70_EXTRA_CUSTOM;
};

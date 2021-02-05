#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SF3_10 = _T("sfiii3-10e.txt");
constexpr auto EXTRA_FILENAME_SF3_51 = _T("sfiii3e.txt");

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
    static int m_nSelectedRom;
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

    static int rgExtraCountAll_10[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraCountAll_14[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraCountAll_4[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraCountAll_51[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraCountAll_70[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_10[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_14[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_4[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_51[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly_70[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraLoc_10[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraLoc_14[SFIII3_A_10_NUMUNIT + 1];
    static int rgExtraLoc_4[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraLoc_51[SFIII3_A_51_NUMUNIT + 1];
    static int rgExtraLoc_70[SFIII3_A_51_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

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
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId) override;

    static stExtraDef* SFIII3_A_10_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_14_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_4_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_51_EXTRA_CUSTOM;
    static stExtraDef* SFIII3_A_70_EXTRA_CUSTOM;
};

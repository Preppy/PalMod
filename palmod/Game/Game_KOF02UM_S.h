#pragma once
#include "gameclass.h"
#include "KOF02UM_S_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_KOF02UM_S_MAIN = L"KOF02UME.txt";
constexpr auto EXTRA_FILENAME_KOF02UM_S_BAR = L"KOF02UMBarE.txt";
constexpr auto EXTRA_FILENAME_KOF02UM_S_CLEAR = L"KOF02UMClearE.txt";
constexpr auto EXTRA_FILENAME_KOF02UM_S_MAX2 = L"KOF02UMMAX2E.txt";
constexpr auto EXTRA_FILENAME_KOF02UM_S_PSEL = L"KOF02UMPSelE.txt";

class CGame_KOF02UM_S : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 0;
    static int m_nSelectedRom;

    static UINT32 m_nTotalPaletteCountForKOF02UM_Main;
    static UINT32 m_nTotalPaletteCountForKOF02UM_Bar;
    static UINT32 m_nTotalPaletteCountForKOF02UM_Clear;
    static UINT32 m_nTotalPaletteCountForKOF02UM_MAX2;
    static UINT32 m_nTotalPaletteCountForKOF02UM_PSel;

    static bool UseMainPaletteSet() { return (m_nSelectedRom == 0); }
    static bool UseBarPaletteSet() { return (m_nSelectedRom == 1); }
    static bool UseMAX2PaletteSet() { return (m_nSelectedRom == 2); }
    static bool UseClearPaletteSet() { return (m_nSelectedRom == 3); }
    static bool UsePSelPaletteSet() { return (m_nSelectedRom == 4); }
    const UINT16 MAX_ROM_OPTIONS = 5;

    static int rgExtraCountAll_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static int rgExtraCountAll_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static int rgExtraCountAll_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static int rgExtraCountAll_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static int rgExtraCountAll_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static int rgExtraLoc_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static int rgExtraLoc_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static int rgExtraLoc_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static int rgExtraLoc_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static int rgExtraLoc_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_KOF02UM_S(UINT32 nConfirmedROMSize, int nKOF02UMROMToLoad);
    ~CGame_KOF02UM_S(void);

    //Static functions / variables
    static CDescTree MainDescTree_Main;
    static CDescTree MainDescTree_Bar;
    static CDescTree MainDescTree_Clear;
    static CDescTree MainDescTree_MAX2;
    static CDescTree MainDescTree_PSel;

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

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAIN;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_BAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CLEAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAX2;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_PSEL;
};

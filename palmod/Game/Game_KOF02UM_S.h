#pragma once
#include "gameclass.h"
#include "KOF02UM_S_DEF.h"
#include "..\extrafile.h"

enum class KOF02UMS_ROMOptions
{
    Main,       // 0
    Bar,        // 1
    Max2BG,     // 2
    Clear,      // 3
    PSel,       // 4 psel.bin-n
    Rank,       // 5
    Conte,      // 6

    EndValue
};

constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_MAIN = L"KOF02UME.txt";
constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_BAR = L"KOF02UMBarE.txt";
constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_CLEAR = L"KOF02UMClearE.txt";
constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_MAX2 = L"KOF02UMMAX2E.txt";
constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_PSEL = L"KOF02UMPSelE.txt";
constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_RANK = L"KOF02UMPRankE.txt";
constexpr LPCWSTR EXTRA_FILENAME_KOF02UM_S_CONTE = L"KOF02UMPContE.txt";

class CGame_KOF02UM_S : public CGameWithExtrasFile
{
private:
    KOF02UMS_ROMOptions m_nBufferSelectedRom = KOF02UMS_ROMOptions::Main;
    static KOF02UMS_ROMOptions m_nSelectedRom;

    static UINT32 m_nTotalPaletteCountForKOF02UM_Main;
    static UINT32 m_nTotalPaletteCountForKOF02UM_Bar;
    static UINT32 m_nTotalPaletteCountForKOF02UM_Clear;
    static UINT32 m_nTotalPaletteCountForKOF02UM_MAX2;
    static UINT32 m_nTotalPaletteCountForKOF02UM_PSel;
    static UINT32 m_nTotalPaletteCountForKOF02UM_Rank;
    static UINT32 m_nTotalPaletteCountForKOF02UM_Conte;

    static int rgExtraCountAll_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static int rgExtraCountAll_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static int rgExtraCountAll_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static int rgExtraCountAll_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static int rgExtraCountAll_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static int rgExtraCountAll_Rank[KOF02UM_S_NUMUNIT_RANK + 1];
    static int rgExtraCountAll_Conte[KOF02UM_S_NUMUNIT_CONTE + 1];

    static int rgExtraLoc_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static int rgExtraLoc_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static int rgExtraLoc_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static int rgExtraLoc_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static int rgExtraLoc_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static int rgExtraLoc_Rank[KOF02UM_S_NUMUNIT_RANK + 1];
    static int rgExtraLoc_Conte[KOF02UM_S_NUMUNIT_CONTE + 1];

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
    static CDescTree MainDescTree_Rank;
    static CDescTree MainDescTree_Conte;

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

    LPCWSTR GetGameName() override;

    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAIN;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_BAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CLEAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAX2;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_PSEL;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_RANK;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CONTE;
};

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

    static size_t rgExtraCountAll_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static size_t rgExtraCountAll_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static size_t rgExtraCountAll_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static size_t rgExtraCountAll_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static size_t rgExtraCountAll_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static size_t rgExtraCountAll_Rank[KOF02UM_S_NUMUNIT_RANK + 1];
    static size_t rgExtraCountAll_Conte[KOF02UM_S_NUMUNIT_CONTE + 1];

    static size_t rgExtraLoc_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static size_t rgExtraLoc_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static size_t rgExtraLoc_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static size_t rgExtraLoc_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static size_t rgExtraLoc_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static size_t rgExtraLoc_Rank[KOF02UM_S_NUMUNIT_RANK + 1];
    static size_t rgExtraLoc_Conte[KOF02UM_S_NUMUNIT_CONTE + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

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

    LPCWSTR GetGameName() override;

    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAIN;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_BAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CLEAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAX2;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_PSEL;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_RANK;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CONTE;
};

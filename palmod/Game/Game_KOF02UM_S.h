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

    static uint32_t m_nTotalPaletteCountForKOF02UM_Main;
    static uint32_t m_nTotalPaletteCountForKOF02UM_Bar;
    static uint32_t m_nTotalPaletteCountForKOF02UM_Clear;
    static uint32_t m_nTotalPaletteCountForKOF02UM_MAX2;
    static uint32_t m_nTotalPaletteCountForKOF02UM_PSel;
    static uint32_t m_nTotalPaletteCountForKOF02UM_Rank;
    static uint32_t m_nTotalPaletteCountForKOF02UM_Conte;

    static uint32_t rgExtraCountAll_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static uint32_t rgExtraCountAll_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static uint32_t rgExtraCountAll_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static uint32_t rgExtraCountAll_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static uint32_t rgExtraCountAll_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static uint32_t rgExtraCountAll_Rank[KOF02UM_S_NUMUNIT_RANK + 1];
    static uint32_t rgExtraCountAll_Conte[KOF02UM_S_NUMUNIT_CONTE + 1];

    static uint32_t rgExtraLoc_Main[KOF02UM_S_NUMUNIT_MAIN + 1];
    static uint32_t rgExtraLoc_Bar[KOF02UM_S_NUMUNIT_BAR + 1];
    static uint32_t rgExtraLoc_Clear[KOF02UM_S_NUMUNIT_CLEAR + 1];
    static uint32_t rgExtraLoc_MAX2[KOF02UM_S_NUMUNIT_MAX2 + 1];
    static uint32_t rgExtraLoc_PSel[KOF02UM_S_NUMUNIT_PSEL + 1];
    static uint32_t rgExtraLoc_Rank[KOF02UM_S_NUMUNIT_RANK + 1];
    static uint32_t rgExtraLoc_Conte[KOF02UM_S_NUMUNIT_CONTE + 1];

    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(uint32_t nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_KOF02UM_S(uint32_t nConfirmedROMSize, int nKOF02UMROMToLoad);
    ~CGame_KOF02UM_S();

    //Static functions / variables
    static CDescTree MainDescTree_Main;
    static CDescTree MainDescTree_Bar;
    static CDescTree MainDescTree_Clear;
    static CDescTree MainDescTree_MAX2;
    static CDescTree MainDescTree_PSel;
    static CDescTree MainDescTree_Rank;
    static CDescTree MainDescTree_Conte;

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

    LPCWSTR GetGameName() override;

    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAIN;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_BAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CLEAR;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_MAX2;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_PSEL;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_RANK;
    static stExtraDef* KOF02UM_S_EXTRA_CUSTOM_CONTE;
};

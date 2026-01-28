#pragma once
#include "gameclass.h"
#include "DevMode_A_DEF.h"
#include "..\extrafile.h"

class CGame_DevMode_A : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForDevMode_Mono;

    static std::vector<uint32_t> m_rgExtraCountAll;
    static std::vector<uint32_t> m_rgExtraLoc;
    const static uint8_t DEVMODE_A_EXTRALOC = DEVMODE_A_NUMUNIT;
    static wchar_t m_pszExtraNameOverride[MAX_PATH];

    static void InitializeStatics(LPCWSTR pszFileLoaded);
    static uint32_t m_nConfirmedROMSize;
    bool m_fHaveDoneInitialColorSet = false;
    wchar_t m_pszGameNameOverride[MAX_PATH];

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    void SetAlphaModeInternal(AlphaMode NewMode);
    bool SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting);

    // The Unknown Game / Dev Mode was formerly known as NeoGeo Mode
    static constexpr auto EXTRA_FILENAME_DEV_MODE_A_OLD = L"NEOGEOE.txt";
    static constexpr auto EXTRA_FILENAME_UNKNOWN_A = L"UnknownE.txt";

public:

    CGame_DevMode_A(uint32_t nConfirmedROMSize, LPCWSTR pszFileLoaded);
    ~CGame_DevMode_A();

    //Static functions / variables
    static CDescTree m_MainDescTree;

    static sDescTreeNode* InitDescTree(LPCWSTR pszFileLoaded);
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCountForUnit(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLocForUnit(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    void SetAlphaMode(AlphaMode NewMode) override;
    bool SetColorMode(ColMode NewMode) override;
    void SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption) override;
    bool AllowUpdatingColorFormatForGame() override { return true; }

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static std::vector<stExtraDef> DEVMODE_A_EXTRA_CUSTOM;

    LPCWSTR GetGameName() override;
};

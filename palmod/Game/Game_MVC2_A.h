#pragma once
#include "gameclass.h"
#include "MVC2_A_DEF.h"
#include "..\extrafile.h"

constexpr auto MVC2_ROMReripOffsetDelta = 0x2000000;

class CGame_MVC2_A : public CGameWithExtrasFile
{
public:
    static uint32_t m_nTotalPaletteCountForMVC2;

    static uint32_t m_rgExtraCountAll[MVC2_A_NUMUNIT + 1];
    static uint32_t m_rgExtraLoc[MVC2_A_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_MVC2_A = L"MVC2e.txt";
    static constexpr uint32_t m_nExpectedGameROMSize_A = 0x889B600; // 143,242,752 bytes
    static constexpr uint32_t m_nExpectedGameROMSize_S = 0x6B6B040; // 112,635,968 bytes
    static size_t m_nStartingUsableOffset;

private:
    std::array<int32_t, MVC2_A_NUMUNIT + 2> m_activeSteamShiftTable = { 0 };

public:
    CGame_MVC2_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad);
    ~CGame_MVC2_A();

    //Static functions / variables
    static CDescTree m_MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule_A(uint32_t nUnitId);
    static sFileRule GetRule_S(uint32_t nUnitId);

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
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetBasicOffset(uint32_t nPalId);
    int PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    inline bool UseSteamMode() { return m_nGameFlag == MVC2_S; };

    static int32_t GetSteamLoadingOffsetForModifiedFile(CFile* TargetFile, uint32_t nUnitId);

    static stExtraDef* MVC2_A_EXTRA_CUSTOM;
};

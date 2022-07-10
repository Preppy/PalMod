#pragma once
#include "gameclass.h"
#include "FotNS_P_DEF.h"
#include "..\extrafile.h"

class CGame_FotNS_P : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForNEWGAME;

    static uint32_t rgExtraCountAll[FotNS_P_NUMUNIT + 1];
    static uint32_t rgExtraLoc[FotNS_P_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId);

    static constexpr auto EXTRA_FILENAME_FotNS_P = L"HK_BE.txt";
    static constexpr auto FotNS_P_PRIMARY_ROMNAME = L"HK_B.bin"; // the file that your palettes are stored in
     // Update to the actual byte size in hex of the ROM file size you expect
    static constexpr uint32_t m_nExpectedGameROMSize = 0x24706800;
    static constexpr uint32_t m_nPaletteCountInHeaders = 52;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x30;

public:
    CGame_FotNS_P(uint32_t nConfirmedROMSize);
    ~CGame_FotNS_P();

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly = FALSE);
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

    static stExtraDef* FotNS_P_EXTRA_CUSTOM;
};

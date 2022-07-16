#pragma once
#include "gameclass.h"
#include "BASARA_P_DEF.h"
#include "..\extrafile.h"

class CGame_BASARA_P : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForBASARA;

    static uint32_t rgExtraCountAll[BASARA_P_NUMUNIT + 1];
    static uint32_t rgExtraLoc[BASARA_P_NUMUNIT + 1];

    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId);

    static constexpr auto EXTRA_FILENAME_BASARA_P = L"BSRE.txt";
    static constexpr auto BASARA_P_PRIMARY_ROMNAME = L"BSR.bin";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x1b206800;
    static constexpr uint32_t m_nPaletteCountInHeaders = 176;
    static constexpr uint32_t m_nLowestROMLocationUsedInHeaders = 0x30;

public:
    CGame_BASARA_P(uint32_t nConfirmedROMSize);
    ~CGame_BASARA_P();

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

    static stExtraDef* BASARA_P_EXTRA_CUSTOM;
};

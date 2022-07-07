#pragma once
#include "gameclass.h"
#include "MSH_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_MSH_05 = L"MSHe.txt";
constexpr auto EXTRA_FILENAME_MSH_06 = L"MSH06e.txt";
#define GetExtraDefForMSH(x) (UsePaletteSetForCharacters() ? ((stExtraDef *)&MSH_A_EXTRA_CUSTOM_05[x]) : ((stExtraDef *)&MSH_A_EXTRA_CUSTOM_06[x]))

class CGame_MSH_A : public CGameWithExtrasFile
{
private:
    // These handle per-ROM logic.
    uint32_t m_nBufferSelectedRom = 5;
    static uint32_t m_nMSHSelectedRom;
    static uint32_t m_nTotalPaletteCountForMSH_05;
    static uint32_t m_nTotalPaletteCountForMSH_06;
    static uint32_t m_nTotalPaletteCountForMSH;
    static bool UsePaletteSetForCharacters() { return (m_nMSHSelectedRom == 5); }

    static uint32_t rgExtraCountAll_05[MSH_A_NUMUNIT_05 + 1];
    static uint32_t rgExtraCountAll_06[MSH_A_NUMUNIT_06 + 1];
    static uint32_t rgExtraLoc_05[MSH_A_NUMUNIT_05 + 1];
    static uint32_t rgExtraLoc_06[MSH_A_NUMUNIT_06 + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_05 = 0x60f4c;
    const int m_uLowestKnownPaletteROMLocation_06 = 0xa78;

public:
    CGame_MSH_A(uint32_t nConfirmedROMSize, int nMSHRomToLoad);
    ~CGame_MSH_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_05;
    static CDescTree MainDescTree_06;

    static sDescTreeNode* InitDescTree(uint32_t nROMPaletteSetToUse);
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

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* MSH_A_EXTRA_CUSTOM_05;
    static stExtraDef* MSH_A_EXTRA_CUSTOM_06;
};

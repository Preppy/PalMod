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
    int m_nBufferSelectedRom = 5;
    static size_t m_nMSHSelectedRom;
    static UINT32 m_nTotalPaletteCountForMSH_05;
    static UINT32 m_nTotalPaletteCountForMSH_06;
    static UINT32 m_nTotalPaletteCountForMSH;
    static bool UsePaletteSetForCharacters() { return (m_nMSHSelectedRom == 5); }

    static size_t rgExtraCountAll_05[MSH_A_NUMUNIT_05 + 1];
    static size_t rgExtraCountAll_06[MSH_A_NUMUNIT_06 + 1];
    static size_t rgExtraLoc_05[MSH_A_NUMUNIT_05 + 1];
    static size_t rgExtraLoc_06[MSH_A_NUMUNIT_06 + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_05 = 0x60f4c;
    const int m_uLowestKnownPaletteROMLocation_06 = 0xa78;

public:
    CGame_MSH_A(UINT32 nConfirmedROMSize, int nMSHRomToLoad);
    ~CGame_MSH_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_05;
    static CDescTree MainDescTree_06;

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

    void PostSetPal(size_t nUnitId, size_t nPalId) override;

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* MSH_A_EXTRA_CUSTOM_05;
    static stExtraDef* MSH_A_EXTRA_CUSTOM_06;
};

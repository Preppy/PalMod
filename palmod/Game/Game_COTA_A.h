#pragma once
#include "gameclass.h"
#include "COTA_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_COTA = L"CotAe.txt";
#define GetExtraDefForCOTA(x) ((stExtraDef *)&COTA_A_EXTRA_CUSTOM[x])

class CGame_COTA_A : public CGameWithExtrasFile
{
private:
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    static UINT32 m_nTotalPaletteCountForCOTA;
    static size_t rgExtraCountAll[COTA_A_NUMUNIT + 1];
    static size_t rgExtraLoc[COTA_A_NUMUNIT + 1];

public:
    CGame_COTA_A(UINT32 nConfirmedROMSize);
    ~CGame_COTA_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* COTA_A_EXTRA_CUSTOM;
};

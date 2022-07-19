#pragma once
#include "gameclass.h"
#include "XMVSF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_XMVSF = L"XMVSFe.txt";
#define GetExtraDefForXMVSF(x)((stExtraDef *)&XMVSF_A_EXTRA_CUSTOM[x])

class CGame_XMVSF_A : public CGameWithExtrasFile
{
private:
    static uint32_t m_nTotalPaletteCountForXMVSF;

    static void InitializeStatics();
    static uint32_t m_nExpectedGameROMSize;
    static uint32_t m_nConfirmedROMSize;

    static uint32_t rgExtraCountAll[XMVSF_A_NUMUNIT + 1];
    static uint32_t rgExtraLoc[XMVSF_A_NUMUNIT + 1];

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

public:
    CGame_XMVSF_A(uint32_t nConfirmedROMSize);
    ~CGame_XMVSF_A();

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLoc(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static stExtraDef* XMVSF_A_EXTRA_CUSTOM;
};

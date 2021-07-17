#pragma once
#include "gameclass.h"
#include "XMVSF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_XMVSF = L"XMVSFe.txt";
#define GetExtraDefForXMVSF(x)((stExtraDef *)&XMVSF_A_EXTRA_CUSTOM[x])

class CGame_XMVSF_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForXMVSF;

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static int rgExtraCountAll[XMVSF_A_NUMUNIT + 1];
    static int rgExtraLoc[XMVSF_A_NUMUNIT + 1];

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_XMVSF_A(UINT32 nConfirmedROMSize);
    ~CGame_XMVSF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static stExtraDef* XMVSF_A_EXTRA_CUSTOM;
};

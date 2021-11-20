#pragma once
#include "gameclass.h"
#include "DOUBLEDRAGON_A_DEF.h"
#include "..\extrafile.h"

constexpr auto EXTRA_FILENAME_DOUBLEDRAGON_A = L"DOUBLEDRAGONE.txt";

class CGame_DOUBLEDRAGON_A : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 2;
    static size_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForDOUBLEDRAGON;

    static size_t rgExtraCountAll[DOUBLEDRAGON_A_NUMUNIT + 1];
    static size_t rgExtraLoc[DOUBLEDRAGON_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    // Needed for multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_DOUBLEDRAGON_A(UINT32 nConfirmedROMSize, int nROMToLoad = 1);
    ~CGame_DOUBLEDRAGON_A(void);

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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* DOUBLEDRAGON_A_EXTRA_CUSTOM;
};

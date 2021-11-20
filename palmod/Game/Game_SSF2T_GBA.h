#pragma once
#include "gameclass.h"
#include "SSF2T_GBA_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SSF2T_GBA = L"SSF2T-GBAe.txt";

class CGame_SSF2T_GBA : public CGameWithExtrasFile
{
public:
    static size_t rgExtraCountAll[SSF2T_GBA_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly[SSF2T_GBA_NUMUNIT + 1];
    static size_t rgExtraLoc[SSF2T_GBA_NUMUNIT + 1];
    
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_SSF2T_GBA(UINT32 nConfirmedROMSize = -1);
    ~CGame_SSF2T_GBA(void);

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

    size_t GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SSF2T_GBA_EXTRA_CUSTOM;
};

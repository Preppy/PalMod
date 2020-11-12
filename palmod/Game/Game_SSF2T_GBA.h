#pragma once
#include "gameclass.h"
#include "SSF2T_GBA_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SSF2T_GBA = _T("SSF2T-GBAe.txt");

class CGame_SSF2T_GBA : public CGameWithExtrasFile
{
public:
    static int rgExtraCountAll[SSF2T_GBA_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly[SSF2T_GBA_NUMUNIT + 1];
    static int rgExtraLoc[SSF2T_GBA_NUMUNIT + 1];
    
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static UINT16 GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

public:
    CGame_SSF2T_GBA(UINT32 nConfirmedROMSize = -1);
    ~CGame_SSF2T_GBA(void);

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

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCTSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId) override;

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SSF2T_GBA_EXTRA_CUSTOM;
};

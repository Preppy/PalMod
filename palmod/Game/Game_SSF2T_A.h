#pragma once
#include "GameClass.h"
#include "SSF2T_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SSF2T_3C = "ssf2t-3ce.txt";
constexpr auto EXTRA_FILENAME_SSF2T_4A = "ssf2t-4ae.txt";

#define GetExtraDefForSSF2T(x) (UsePaletteSetForPortraits() ? ((stExtraDef *)&SSF2T_A_EXTRA_CUSTOM_3C[x]) : ((stExtraDef *)&SSF2T_A_EXTRA_CUSTOM_4A[x]))

class CGame_SSF2T_A : public CGameWithExtrasFile
{
private:
    //Used for image selection
    int nTargetImgId = 0;

    //Used for GetPalOffset
    UINT32 nCurrPalOffs = 0;
    
    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 3;
    static int m_nSSF2TSelectedRom;
    static UINT32 m_nTotalPaletteCountForSSF2T_3C;
    static UINT32 m_nTotalPaletteCountForSSF2T_4A;
    static bool UsePaletteSetForPortraits() { return (m_nSSF2TSelectedRom == 3); }

    static int rgExtraLoc_3C[SSF2T_A_NUM_IND_3C + 1];
    static int rgExtraLoc_4A[SSF2T_A_NUM_IND_4A + 1];
    static int rgExtraCountAll_3C[SSF2T_A_NUM_IND_3C + 1];
    static int rgExtraCountAll_4A[SSF2T_A_NUM_IND_4A + 1];

    void InitDataBuffer();
    void ClearDataBuffer();
    static void InitializeStatics();
    static UINT32 m_nGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    UINT16*** pppDataBuffer = nullptr;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_3C = 0x31c00;
    const int m_uLowestKnownPaletteROMLocation_4A = 0x3FB00;

public:
    CGame_SSF2T_A(UINT32 nConfirmedROMSize, int nSSF2TRomToLoad);
    ~CGame_SSF2T_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_3C;
    static CDescTree MainDescTree_4A;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    UINT16 GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* SSF2T_A_EXTRA_CUSTOM_3C;
    static stExtraDef* SSF2T_A_EXTRA_CUSTOM_4A;
};
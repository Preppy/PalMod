#pragma once
#include "GameClass.h"
#include "MSHVSF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_MSHVSF_6A = "mshvsf-6ae.txt";
constexpr auto EXTRA_FILENAME_MSHVSF_7B = "mshvsf-7be.txt";

#define GetExtraDefForMSHVSF(x) (UsePaletteSetForCharacters() ? ((stExtraDef *)&MSHVSF_A_EXTRA_CUSTOM_6A[x]) : ((stExtraDef *)&MSHVSF_A_EXTRA_CUSTOM_7B[x]))

class CGame_MSHVSF_A : public CGameClass, public CGameWithExtrasFile
{
private:
    //Used for image selection
    int nTargetImgId = 0;

    //Used for GetPalOffset
    UINT32 nCurrPalOffs = 0;
    int nCurrPalSz = 0;

    // These handle per-ROM logic.
    int m_nBufferSelectedRom = 6;
    static int m_nMSHVSFSelectedRom;
    static UINT32 m_nTotalPaletteCountForMSHVSF_6A;
    static UINT32 m_nTotalPaletteCountForMSHVSF_7B;
    static bool UsePaletteSetForCharacters() { return (m_nMSHVSFSelectedRom == 6); }

    void InitDataBuffer();
    void ClearDataBuffer();

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    UINT16*** pppDataBuffer = nullptr;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    const int m_uLowestKnownPaletteROMLocation_6A = 0x59EF4;
    const int m_uLowestKnownPaletteROMLocation_7B = 0; // This is an odd file, yes.

public:
    CGame_MSHVSF_A(int nMSHVSFRomToLoad);
    ~CGame_MSHVSF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_6A;
    static CDescTree MainDescTree_7B;

    static CDescTree InitDescTree(int nROMPaletteSetToUse);
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

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* MSHVSF_A_EXTRA_CUSTOM_6A;
    static stExtraDef* MSHVSF_A_EXTRA_CUSTOM_7B;
};

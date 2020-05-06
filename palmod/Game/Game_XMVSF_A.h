#pragma once
#include "gameclass.h"
#include "XMVSF_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_XMVSF = "XMVSFe.txt";
#define GetExtraDefForXMVSF(x)((stExtraDef *)&XMVSF_A_EXTRA_CUSTOM[x])

class CGame_XMVSF_A : public CGameClass, public CGameWithExtrasFile
{
private:
    //Used for image selection
    int nTargetImgId = 0;

    //Used for GetPalOffset
    UINT32 nCurrPalOffs = 0;
    
    static UINT32 m_nTotalPaletteCountForXMVSF;

    void InitDataBuffer();
    void ClearDataBuffer();

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    UINT16*** pppDataBuffer = nullptr;

public:
    CGame_XMVSF_A(void);
    ~CGame_XMVSF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static CDescTree InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    // Warning: This is used for hybrid palettes.  I don't actually see that logic used anywhere.
    // Note that this logic requires the XMVSF_A_UNITLOC sort to match XMVSF_A_UNITS or bad things will happen.
    int GetLocalAmt(UINT16 nUnitId);

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };
    static stExtraDef* XMVSF_A_EXTRA_CUSTOM;
};

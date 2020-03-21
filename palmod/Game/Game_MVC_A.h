#pragma once
#include "gameclass.h"
#include "MVC_A_DEF.h"

constexpr auto EXTRA_FILENAME_MVC = "mvce.txt";
#define GetExtraDefForMVC(x)((stExtraDef *)&MVC_A_EXTRA_CUSTOM[x])

class CGame_MVC_A : public CGameClass
{
private:
    //Used for image selection
    int nTargetImgId = 0;

    //Used for GetPalOffset
    int nCurrPalOffs = 0;
    int nCurrPalSz = 0;

    void GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();
    
    UINT16*** pppDataBuffer = nullptr;

public:
    CGame_MVC_A(void);
    ~CGame_MVC_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static CDescTree InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);
    static int GetBasicAmt(UINT16 nUnitId);

    static void LoadExtraFile();

    //Normal functions
    CDescTree* GetMainTree();

    static int GetPalCt(UINT16 nUnitId);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    BOOL CreateExtraPal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* MVC_A_EXTRA_CUSTOM;
};

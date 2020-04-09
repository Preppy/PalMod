#pragma once
#include "gameclass.h"
#include "SFIII3_D_DEF.h"

class CGame_SFIII3_D : public CGameClass
{
private:
    //Used for image selection
    int nTargetImgId = 0;
    int nNormalPalAmt = 0;

    //Used for GetPalOffset
    int nCurrPalOffs = 0;
    int nCurrPalSz = 0;

    UINT16*** pppDataBuffer = nullptr;

    void GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();

public:
    CGame_SFIII3_D(void);
    ~CGame_SFIII3_D(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    //    static CDescTree * GetMainTree();
    static CDescTree InitDescTree();
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);

    static UINT16 uRuleCtr;
    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nUnitId);

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    //Extra palette function
    static int GetBasicAmt(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();

    static int GetPalCt(UINT16 nUnitId);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };
};

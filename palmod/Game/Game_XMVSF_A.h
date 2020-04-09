#pragma once
#include "gameclass.h"
#include "XMVSF_A_DEF.h"

class CGame_XMVSF_A : public CGameClass
{
private:
    //Used for GetPalOffset
    int nCurrPalOffs = 0;
    int nCurrPalSz = 0;

    UINT16*** pppDataBuffer = nullptr;

    void GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();

public:
    CGame_XMVSF_A(void);
    ~CGame_XMVSF_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static CDescTree InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetBasicAmt(UINT16 nUnitId);
    static int GetPalCt(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    int GetLocalAmt(UINT16 nUnitId) { return (XMVSF_A_UNITLOC[nUnitId + 1] - XMVSF_A_UNITLOC[nUnitId]) / 0x20; };
};

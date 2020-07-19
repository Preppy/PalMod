#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"

#define SFIII3_A_USEEXTRAFILE

#define EXTRA_FILENAME_SF3 _T("sfiii3e.txt")

#ifdef SFIII3_A_USEEXTRAFILE
#define GetSF3ExtraDef(x) ((stExtraDef *)&SFIII3_A_EXTRA_CUSTOM[x])
#else
#define GetSF3ExtraDef(x) (const_cast<stExtraDef *>(&SFIII3_A_EXTRA[x]))
#endif

class CGame_SFIII3_A : public CGameClass
{
private:
    //Used for image selection
    int nTargetImgId = 0;
    int nNormalPalAmt = 0;

    //Used for GetPalOffset

    UINT32 nCurrPalOffs = 0;
    int nCurrPalSz = 0;

    UINT16*** pppDataBuffer = nullptr;

    static int rgExtraCountAll[SFIII3_A_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly[SFIII3_A_NUMUNIT + 1];
    static int rgExtraLoc[SFIII3_A_NUMUNIT + 1];

    void GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();
    static void InitializeStatics();
    static UINT32 m_nGameROMSize;
    static UINT32 m_nConfirmedROMSize;

public:
    CGame_SFIII3_A(UINT32 nConfirmedROMSize);
    ~CGame_SFIII3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    //    static CDescTree * GetMainTree();
    static sDescTreeNode* InitDescTree();
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);
    static int GetBasicAmt(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();

    int GetBasicImgId(UINT16 nUnitId, UINT16 nPalId);
    int GetPalCt(UINT16 nUnitId);

    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId = 0);
    BOOL CGame_SFIII3_A::UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    BOOL CreateExtraPal(UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* SFIII3_A_EXTRA_CUSTOM;
};

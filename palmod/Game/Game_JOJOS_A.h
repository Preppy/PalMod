#pragma once
#include "gameclass.h"
#include "JOJOS_A_DEF.h"

#define JOJOS_A_USEEXTRAFILE

constexpr auto EXTRA_FILENAME_50 = "jojos50e.txt";
constexpr auto EXTRA_FILENAME_51 = "jojos51e.txt";

#ifdef JOJOS_A_USEEXTRAFILE
#define GetJojosExtraDef(mode, x) (UsePaletteSetFor50(mode) ? ((stExtraDef *)&JOJOS_A_EXTRA_CUSTOM_50[x]) : ((stExtraDef *)&JOJOS_A_EXTRA_CUSTOM_51[x]))
#else
#define GetJojosExtraDef(mode, x) (const_cast<stExtraDef *>(&JOJOS_A_EXTRA[x]))
#endif

class CGame_JOJOS_A : public CGameClass
{
private:
    //Used for image selection
    int nTargetImgId = 0;
    int nNormalPalAmt = 0;

    //Used for GetPalOffset
    int nCurrPalOffs = 0;
    int nCurrPalSz = 0;
    const int m_knMaxPalettePageSize = 64;

    UINT16*** pppDataBuffer = nullptr;

    // Jojos has two different ROMs of interest: handle here.
    int nJojosMode = 50;

    void GetPalOffsSz(int nUnitId, int nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();
    
    static const sJOJOS_PaletteDataset* GetPaletteSet(int nPaletteSetToUse, int nUnitId, int nPaletteId);
    static bool UsePaletteSetFor50(int nPaletteSetToUse) { return (nPaletteSetToUse == 50); };
    inline bool UsePaletteSetFor50() { return (nJojosMode == 50); };

public:
    CGame_JOJOS_A(int nGameData);
    ~CGame_JOJOS_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_50;
    static CDescTree MainDescTree_51;

    //    static CDescTree * GetMainTree();
    static CDescTree InitDescTree(int nPaletteSetToUse);
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
    static sFileRule GetRule(int nUnitId);

    //Extra palette function
    static int GetExtraCt(int nCurrentMode, int nUnitId, BOOL bVisible = FALSE);
    static int GetExtraLoc(int nCurrentMode, int nUnitId);
    static int GetBasicAmt(int nUnitId);

    static void LoadExtraFile(int nPaletteSetToUse);

    //Normal functions
    CDescTree* GetMainTree();

    int GetBasicImgId(int nUnitId, int nPalId);
    int GetPalCt(int nUnitId);

    void CreateDefPal(sDescNode* srcNode, int nSepId);
    BOOL LoadFile(CFile* LoadedFile, int nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, int nUnitId = 0);
    BOOL CGame_JOJOS_A::UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(int nUnitId, int nPalId);
    COLORREF* CreatePal64WithOffset(int nUnitId, int nPalId, int nOffset);
    BOOL CreateExtraPal(int nUnitId, int nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_50;
    static stExtraDef* JOJOS_A_EXTRA_CUSTOM_51;
};

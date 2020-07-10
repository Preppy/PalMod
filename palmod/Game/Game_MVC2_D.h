#pragma once
#include "GameClass.h"
#include "MVC2_D_Def.h"

class CGame_MVC2_D : public CGameClass
{
private:
    void InitDataBuffer();
    void ClearDataBuffer();
    static void InitializeStatics();
    static UINT32 m_nGameROMSize;

    UINT16** ppDataBuffer = nullptr;

    int GetFirstExtraValueFromExtraPaletteId(int nExtraPaletteIdint, int nStartOfRange, int nPalettePositionIncrements, int nRangeLength);

public:
    CGame_MVC2_D(void);
    ~CGame_MVC2_D(void);

    //Vars used for extra processing
    int nExtraAmt = 0;
    int nTargetImgId = 0; //Image id used for image selection
    int nImgUnitId = MVC2_D_NUMUNIT; //Unit Image Id

    //Static functions
    static UINT16 uRuleCtr;
    static UINT16 rgExtraChrLoc[MVC2_D_NUMUNIT_WITH_TEAMVIEW];

    static UINT16 GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static void InitExtraRg();
    static int CountExtraRg(UINT16 nUnitId, BOOL bOmniExtra);
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
    static sFileRule GetNextRule();
    static sFileRule GetRule(UINT16 nRuleId);

    static BOOL bAlphaTrans;

    //Normal functions
    CDescTree* GetMainTree();

    BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId);
    BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId);

    void ValidateMixExtraColors(BOOL* pfChangesWereMade);

    COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    int GetBasicOffset(UINT16 nPalId);

    void SetExtraImg(UINT16 nImgId, UINT16 nUnitId, UINT16 nPalId);

    void UpdatePalData();
    void FlushUnitFile();
    void PrepUnitFile();

    UINT16** GetDataBuffer() { return ppDataBuffer; };
    void PostSetPal(UINT16 nUnitId, UINT16 nPalId);
    void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);
    BOOL CreateExtraPal(UINT16 nUnitId, UINT16 nPalId, int nStart, int nInc, int nImgId, int nSepId = 0, int nAmt = 1);
    void ResetChangeFlag(UINT16 nUnitId);
};

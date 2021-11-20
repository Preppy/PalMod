#pragma once
#include "gameclass.h"

class CGame_SFIII3_D : public CGameClass
{
private:
    //Used for GetPalOffset
    int m_nCurrentPaletteROMLocation = 0;
    int nCurrPalSz = 0;

    void GetPalOffsSz(size_t nUnitId, size_t nPalId);

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;

public:
    CGame_SFIII3_D(void);
    ~CGame_SFIII3_D(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    //    static CDescTree * GetMainTree();
    static sDescTreeNode* InitDescTree();
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);

    static size_t uRuleCtr;
    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nUnitId);

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    //Extra palette function
    static size_t GetBasicAmt(size_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();

    size_t GetPaletteCountForUnit(size_t nUnitId) override;

    void CreateDefPal(sDescNode* srcNode, size_t nSepId) override;
    BOOL LoadFile(CFile* LoadedFile, size_t nUnitId = 0) override;
    BOOL SaveFile(CFile* SaveFile, size_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(size_t nUnitId, size_t nPalId) override;
};

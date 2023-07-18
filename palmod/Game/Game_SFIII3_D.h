#pragma once
#include "gameclass.h"

class CGame_SFIII3_D : public CGameClass
{
private:
    //Used for GetPalOffset
    int m_nCurrentPaletteROMLocation = 0;
    int m_nCurrPalSz = 0;

    void GetPalOffsSz(uint32_t nUnitId, uint32_t nPalId);

    static void InitializeStatics();

public:
    CGame_SFIII3_D();
    ~CGame_SFIII3_D();

    //Static functions / variables
    static CDescTree m_MainDescTree;

    //    static CDescTree * GetMainTree();
    static sDescTreeNode* InitDescTree();
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);

    static uint32_t m_uRuleCtr;
    static sFileRule GetNextRule();
    static sFileRule GetRule(uint32_t nUnitId);

    static uint32_t GetRuleCtr() { return m_uRuleCtr; };
    static void ResetRuleCtr() { m_uRuleCtr = 0; };

    //Extra palette function
    static uint32_t GetBasicAmt(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();

    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    void CreateDefPal(sDescNode* srcNode, uint32_t nSepId) override;
    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId = 0) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(uint32_t nUnitId, uint32_t nPalId) override;
};

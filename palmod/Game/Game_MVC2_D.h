#pragma once
#include "GameClass.h"
#include "MVC2_D_Def.h"

class CGame_MVC2_D : public CGameClass
{
private:
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;

    UINT16** ppDataBuffer = nullptr;

    int GetFirstExtraValueFromExtraPaletteId(int nExtraPaletteIdint, int nStartOfRange, int nPalettePositionIncrements, int nRangeLength);

public:
    CGame_MVC2_D(UINT32 nConfirmedROMSize);
    ~CGame_MVC2_D();

    //Vars used for extra processing
    int nExtraAmt = 0;
    size_t nImgUnitId = MVC2_D_NUMUNIT; //Unit Image Id

    //Static functions
    static size_t uRuleCtr;
    static size_t rgExtraChrLoc[MVC2_D_NUMUNIT_WITH_TEAMVIEW];

    static std::vector<LPCWSTR> pCurrentButtonLabelSet;
    static std::vector<std::vector<sMoveDescription>> pCurrentMoveDescriptions;
    static UINT8 _nCurrentTotalColorOptions;
    void SetNumberOfColorOptions(UINT8 nColorOptions);

    static size_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static void InitExtraRg();
    static size_t CountExtraRg(size_t nUnitId, BOOL bOmniExtra);
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
    static sFileRule GetNextRule();
    static sFileRule GetRule(size_t nRuleId);

    //Normal functions
    CDescTree* GetMainTree();

    BOOL LoadFile(CFile* LoadedFile, size_t nUnitId) override;
    BOOL SaveFile(CFile* SaveFile, size_t nUnitId) override;

    void ValidateMixExtraColors(BOOL* pfChangesWereMade);

    COLORREF* CreatePal(size_t nUnitId, size_t nPalId) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    size_t GetBasicOffset(size_t nPalId);

    void SetExtraImg(UINT16 nImgId, size_t nUnitId, size_t nPalId);

    void UpdatePalData(); // This is old code and uses its own logic

    UINT16** GetDataBuffer() { return ppDataBuffer; };
    void PostSetPal(size_t nUnitId, size_t nPalId) override;
    void CreateDefPal(sDescNode* srcNode, size_t nSepId) override;
    BOOL CreateExtraPal(size_t nUnitId, size_t nPalId, int nStart, int nInc, int nImgId, int nSepId = 0, int nAmt = 1);
    void ResetChangeFlag(size_t nUnitId);

    LPCWSTR GetGameName() override;
};

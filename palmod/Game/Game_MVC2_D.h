#pragma once
#include "GameClass.h"
#include "MVC2_D_Def.h"

enum class MvC2_NumberOfColors
{
    // All normal releases are 6 colors only.
    Six = 6,
    // For Dreamcast, Jed added in palette expansion options.  The first implementation was 16 colors,
    // which can be a little confusing to users since just A1 or A2 by itself does nothing.
    // The second implementation is 12 colors, where it's normal (any button) and then Start + (any button).
    // These differences are all handled via 1st_read.bin code: the palette files for both version of the
    // palette expansions actually contain 16 palettes.  There's no way for us to detect which version the
    // user is using - the only real option would be to prompt the user and use whichever strings match
    // their preference.
    Twelve_Or_Sixteen = 16,
};

class CGame_MVC2_D : public CGameClass
{
private:
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();

    uint16_t** m_ppDataBuffer = nullptr;

    void FindMultispriteExportValuesForExtrasPalette(sMoveDescription* pMoveDescription, uint32_t uUnitId, uint32_t uPalId, uint32_t& nStart, uint32_t& nColorOptions, uint32_t& nIncrementToNext);

    sMoveDescription* GetMoveDescriptionInfo(uint32_t nUnitId, uint32_t nPalId);

public:
    CGame_MVC2_D(uint32_t nConfirmedROMSize, SupportedGamesList eGameVersion);
    ~CGame_MVC2_D();

    uint32_t nImgUnitId = MVC2_D_NUMUNIT; //Unit Image Id

    //Static functions
    static uint32_t m_uRuleCtr;
    static uint32_t m_rgExtraChrLoc[MVC2_D_NUMUNIT_WITH_TEAMVIEW];

    static std::vector<LPCWSTR> m_pCurrentButtonLabelSet;
    static std::vector<std::vector<sMoveDescription>> m_pCurrentMoveDescriptions;
    static std::vector<uint16_t> m_pCurrentExtrasLayout;
    static uint8_t _nCurrentTotalColorOptions;
    void SetNumberOfColorOptions(MvC2_NumberOfColors nColorOptions);

    static uint32_t GetRuleCtr() { return m_uRuleCtr; };
    static void ResetRuleCtr() { m_uRuleCtr = 0; };

    static CDescTree m_MainDescTree;

    static sDescTreeNode* InitDescTree();
    static void InitExtraRg();
    static uint32_t CountExtraRg(uint32_t nUnitId, BOOL fOmniExtra);
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
    static sFileRule GetRuleDC(uint32_t nRuleId);
    static sFileRule GetRuleSteam(uint32_t nRuleId);
    static sFileRule GetNextRuleDC();
    static sFileRule GetNextRuleSteam();

    //Normal functions
    CDescTree* GetMainTree();

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    void ValidateMixExtraColors(BOOL& fChangesWereMade);

    COLORREF* CreatePal(uint32_t nUnitId, uint32_t nPalId) override;
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
    uint32_t GetBasicOffset(uint32_t nPalId);

    void UpdatePalData(); // This is old code and uses its own logic

    uint16_t** GetDataBuffer() { return m_ppDataBuffer; };
    int PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;
    void CreateDefPal(sDescNode* srcNode, uint32_t nSepId) override;
    void ResetChangeFlag(uint32_t nUnitId);

    LPCWSTR GetGameName() override;
};

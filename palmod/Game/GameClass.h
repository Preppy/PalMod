#pragma once

#include "DescTree.h"
#include "Default.h"
#include "GameDef.h"
#include "PalGroup.h"
#include "ImgTicket.h"
#include <vector>

//File rule definition
struct sFileRule
{
    TCHAR szFileName[MAX_FILENAME_LENGTH] = _T("uninit");
    UINT32 uVerifyVar;
    UINT16 uUnitId = INVALID_UNIT_VALUE;
    bool fHasAltName = false;
    TCHAR szAltFileName[MAX_FILENAME_LENGTH] = _T("uninit");
};

enum class AlphaMode
{
    GameDoesNotUseAlpha,
    GameUsesFixedAlpha,
    Unknown,
    GameUsesVariableAlpha,  // Modifiable, as in the case of MvC2.
    GameUsesChaoticAlpha,   // Yes, this is odd.  ST-GBA appears doesn't have alpha consistently set.
};

enum class ColMode
{
    // If you change this list you must update CPalModDlg::OnEditCopy and CGame_NEOGEO_A::GetGameName and ::CGame_NEOGEO_A
    COLMODE_GBA,       // BGR555 little endian for GBA
    COLMODE_12A,       // RGB444
    COLMODE_15,        // RGB555 little endian for CPS3
    COLMODE_15ALT,     // RGB555 big endian 
    COLMODE_NEOGEO,    // RGB666
    COLMODE_9,         // RGB333 for Sega Genesis/MegaDrive
};

enum class ColFlag
{
    COL_RGB,
    COL_A,
};

const UINT32 k_nBogusHighValue = 0xFEEDFED;

class CGameClass
{
protected:
    LPTSTR szDir = nullptr;
    UINT16* rgFileChanged = nullptr;
    UINT16 nFileAmt = 0;

    UINT16 m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    UINT32 m_nCurrentPaletteROMLocation = 0;
    UINT32 m_nLowestKnownPaletteRomLocation = k_nBogusHighValue;
    UINT16 m_nCurrentPaletteSize = 0;
    LPCTSTR m_pszCurrentPaletteName = nullptr;
    UINT32 m_nConfirmedCRCValue = 0;

    const int k_nRGBPlaneAmtForRGB333 =  7;
    const int k_nRGBPlaneAmtForRGB444 = 15;
    const int k_nRGBPlaneAmtForRGB555 = 31;
   
    const double k_nRGBPlaneMulForRGB333 = 36.428;
    const double k_nRGBPlaneMulForRGB444 = 17.0;
    const double k_nRGBPlaneMulForRGB555 = 8.225;

    BOOL bIsDir = FALSE;

    UINT16 nUnitAmt = 0;
    int nGameFlag = 0;
    int nImgGameFlag = 0;
    int nImgUnitAmt = 0;
    const UINT16* m_prgGameImageSet = nullptr;

    //Values used for image out
    int nSrcPalUnit[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalStart[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalAmt[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalInc[MAX_PALETTES_DISPLAYABLE] = { 0 };

    static AlphaMode CurrAlphaMode;
    ColMode CurrColMode = ColMode::COLMODE_12A;
    sImgTicket* CurrImgTicket = nullptr;
    CPalGroup BasePalGroup;

    eImageOutputSpriteDisplay DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Used for the Export Image listbox
    const LPCTSTR *pButtonLabelSet = nullptr;
    // How many colors a game has: P1/P2 (2), LP-HK/A2 (6), etc
    UINT8 m_nNumberOfColorOptions = 0;

    bool m_fGameUsesAlphaValue = false;
    UINT32 m_uOneTimeWINEViewportSizeOverride = 0;

    BOOL bUsesHybrid = FALSE;
    UINT16* pIndexRedir = nullptr;
    int nHybridSz = 0;

    static BOOL m_fAllowTransparency;

    static UINT16 CONV_32_9(UINT32 inCol);
    static UINT32 CONV_9_32(UINT16 inCol);
    static UINT16 CONV_32_12A(UINT32 inCol);
    static UINT32 CONV_12A_32(UINT16 inCol);
    static UINT16 CONV_32_GBA(UINT32 inCol);
    static UINT32 CONV_GBA_32(UINT16 inCol);
    static UINT16 CONV_32_15(UINT32 inCol);
    static UINT32 CONV_15_32(UINT16 inCol);
    static UINT16 CONV_32_15ALT(UINT32 inCol);
    static UINT32 CONV_15ALT_32(UINT16 inCol);
    static UINT16 CONV_32_NEOGEO(UINT32 inCol);
    static UINT32 CONV_NEOGEO_32(UINT16 inCol);
    static UINT16 SWAP_16(UINT16 palv);

    enum PALOptionValues
    {
        NO_SPECIAL_OPTIONS = 0,
        OFFSET_PALETTE_BY_ONE = 1,
    };

    enum PALWriteOutputOptions
    {
        WRITE_16 = 16,
        WRITE_MAX = 256,
    };

    struct sCreatePalOptions
    {
        // Normally zero, but we can offset by one in some cases.
        UINT8 nStartingPosition = NO_SPECIAL_OPTIONS;
        PALWriteOutputOptions eWriteOutputOptions = PALWriteOutputOptions::WRITE_16;
    };

    sCreatePalOptions createPalOptions;

    struct sPaletteIdentifier
    {
        UINT16 nUnit = 0;
        UINT16 nPaletteId = 0;
    };

    struct DoPalettesMatch
    {
        sPaletteIdentifier* pPalToCheck;
        DoPalettesMatch(sPaletteIdentifier* pPalToCheck) : pPalToCheck(pPalToCheck) {}
        bool operator () (const sPaletteIdentifier& m) const
        {
            return (m.nUnit == pPalToCheck->nUnit) && (m.nPaletteId == pPalToCheck->nPaletteId);
        }
    };

    void ClearDirtyPaletteTracker() { m_vDirtyPaletteList.clear(); };
    std::vector<sPaletteIdentifier> m_vDirtyPaletteList;
    UINT16*** m_pppDataBuffer = nullptr;

    struct sCRC32ValueSet
    {
        LPCTSTR szFriendlyName = _T("Unknown Game");
        LPCTSTR szROMFileName = _T("uninit");
        const UINT32 crcValueExpected = -1;
        const int nROMSpecificOffset = 0;
    };

    const sCRC32ValueSet* m_pCRC32SpecificData = nullptr;

public:
    CGameClass(void);
    virtual ~CGameClass(void);

    virtual void InitDataBuffer();
    virtual void ClearDataBuffer();

    static BOOL bPostSetPalProc;

    UINT16* rgUnitRedir = nullptr;
    int nRedirCtr = 0;
    //Used for image selection
    int nTargetImgId = 0;

    UINT16*** GetDataBuffer() { return m_pppDataBuffer; };
    // This is called as part of Edit's debug information.  It wants the true ROM location, so correct for the nStartingPosition offset
    UINT32 GetCurrentPaletteLocation() { return m_nCurrentPaletteROMLocation - (createPalOptions.nStartingPosition * sizeof(UINT16)); };
    UINT32 GetLowestExpectedPaletteLocation();

    UINT16(*ConvCol)(UINT32 inCol);
    UINT32(*ConvPal)(UINT16 inCol);

    LPCTSTR GetROMFileName();
    LPCTSTR GetLoadDir() { return szDir; };
    BOOL SetLoadDir(LPCTSTR szNewDir);

    AlphaMode GetAlphaMode() { return CurrAlphaMode; };
    virtual void SetAlphaMode(AlphaMode NewMode) { CurrAlphaMode = NewMode; };

    ColMode GetColorMode() { return CurrColMode; };
    virtual BOOL SetColorMode(ColMode NewMode);
    virtual bool AllowUpdatingColorFormatForGame() { return false; };

    BOOL SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt = 1, int nMax = 6);

    int GetGameFlag() { return nGameFlag; };
    int GetImgGameFlag() { return nImgGameFlag; };
    int GetUnitCt() { return nUnitAmt; };
    int GetImgUnitCt() { return nImgUnitAmt; };
    const UINT16* GetImageSetForGame() { return m_prgGameImageSet; };
    sImgTicket* GetImgTicket() { return CurrImgTicket; };

    CPalGroup* GetPalGroup() { return &BasePalGroup; };

    UINT16 GetFileAmt() { return nFileAmt; };
    UINT16* GetChangeTrackingArray() { return rgFileChanged; };

    void SetIsDir(BOOL bNewIsDir = TRUE) { bIsDir = bNewIsDir; };
    BOOL GetIsDir() { return bIsDir; };

    int GetPlaneAmt(ColFlag Flag);
    double GetPlaneMul(ColFlag Flag);

    void ClearSetImgTicket(sImgTicket* NewImgTicket = NULL);
    sImgTicket* CreateImgTicket(UINT16 nUnitId, int nImgId, sImgTicket* NextTicket = NULL, int nXOffs = 0, int nYOffs = 0);

    int GetImgOutPalAmt() { return nSrcPalAmt[0]; };
    void ClearSrcPal();

    const LPCTSTR *GetButtonDescSet() { return pButtonLabelSet; };
    eImageOutputSpriteDisplay GetImgDispType() { return DisplayType; };

    void SetSourcePal(int nIndex, UINT16 nUnitId, int nStart, int nAmt, int nInc);

    void Revert(int nPalId);

    BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16* pData, int nExclusion, COLORREF** pNewPal, int* nNewPalSz);

    static void AllowTransparency(BOOL fAllow) { m_fAllowTransparency = fAllow; };
    static BOOL AllowTransparency() { return m_fAllowTransparency; };

    //Public virtual
    virtual CDescTree* GetMainTree() = 0;

    virtual LPCTSTR GetGameName();

    virtual void CheckForErrorsInTables() {};
    virtual BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId);
    virtual BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId);
    virtual UINT32 SavePatchFile(CFile* PatchFile, UINT16 nUnitId);
    void SetSpecificValuesForCRC(UINT32 nCRCForFile);
    virtual UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) { return 0; };

    virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
    virtual COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    virtual void UpdatePalData();
    void FlushChangeTrackingArray() { safe_delete_array(rgFileChanged); ClearDirtyPaletteTracker();  };
    virtual void PrepChangeTrackingArray();
    virtual void ValidateMixExtraColors(BOOL* pfChangesWereMade) {};
    virtual void PostSetPal(UINT16 nUnitId, UINT16 nPalId) {};
    virtual void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId) {};
    virtual UINT16 GetPaletteCountForUnit(UINT16 nUnitId) { return INVALID_UNIT_VALUE; };

    virtual void CreateDefPal(sDescNode* srcNode, UINT16 nSepId);

    COLORREF*** CreateImgOutPal();

    void MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
    void MarkPaletteClean(UINT16 nUnit, UINT16 nPaletteID);
    bool IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
};

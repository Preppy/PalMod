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

enum class ColMode
{
    // If you change this list you must update CPalModDlg::OnEditCopy
    COLMODE_12A,     // RGB444
    COLMODE_15,      // BGR555
    COLMODE_15ALT,   // RGB555
    COLMODE_NEOGEO   // RGB666
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

    BOOL bIsDir = FALSE;

    int nDefPalSz = 0;

    int nRGBIndexAmt = 0;
    int nAIndexAmt = 0;

    double nRGBIndexMul = 0.0;
    double nAIndexMul = 0.0;

    UINT16 nUnitAmt = 0;
    int nGameFlag = 0;
    int nImgGameFlag = 0;
    int nDisplayW = 0;
    int nImgUnitAmt = 0;

    //Values used for image out
    int nSrcPalUnit[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalStart[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalAmt[MAX_PALETTES_DISPLAYABLE] = { 0 };
    int nSrcPalInc[MAX_PALETTES_DISPLAYABLE] = { 0 };

    ColMode CurrColMode = ColMode::COLMODE_12A;
    sImgTicket* CurrImgTicket = nullptr;
    CPalGroup BasePalGroup;

    eImageOutputSpriteDisplay DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Used for the Export Image listbox
    const LPCTSTR *pButtonLabelSet = nullptr;
    // How many colors a game has: P1/P2 (2), LP-HK/A2 (6), etc
    UINT8 m_nNumberOfColorOptions = 0;

    bool m_fGameUsesAlphaValue = false;
    BOOL bUsesHybrid = FALSE;
    UINT16* pIndexRedir = nullptr;
    int nHybridSz = 0;

    static BOOL m_fAllowTransparency;

    static UINT16 CONV_32_12A(UINT32 inCol);
    static UINT32 CONV_12A_32(UINT16 inCol);
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
        SKIP_FIRST_COLOR = 1,
        FORCE_ALPHA_ON_EVERY_COLOR = 0xFF000000,
        FORCE_ALPHA_ON_FIRST_COLOR = 0xFF000000,
    };

    struct sCreatePalOptions
    {
        // Normally zero, but we can offset by one in some cases.
        UINT8 nStartingPosition =     NO_SPECIAL_OPTIONS;
        int crForcedColorValues =     NO_SPECIAL_OPTIONS;
        int crForcedFirstColorValue = NO_SPECIAL_OPTIONS;
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

    UINT16(*ConvCol)(UINT32 inCol);
    UINT32(*ConvPal)(UINT16 inCol);

    LPCTSTR GetROMFileName();
    LPCTSTR GetLoadDir() { return szDir; };
    BOOL SetLoadDir(LPCTSTR szNewDir);

    ColMode GetColMode() { return CurrColMode; };
    BOOL SetColMode(ColMode NewMode);

    BOOL SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt = 1, int nMax = 6);

    int GetGameFlag() { return nGameFlag; };
    int GetImgGameFlag() { return nImgGameFlag; };
    int GetUnitCt() { return nUnitAmt; };
    int GetImgUnitCt() { return nImgUnitAmt; };
    int GetPalDisplayW() { return nDisplayW; };
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

    int GetImgCt() { return IMGAMT[GetImgGameFlag()]; };

    BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16* pData, int nExclusion, COLORREF** pNewPal, int* nNewPalSz);

    static void AllowTransparency(BOOL fAllow) { m_fAllowTransparency = fAllow; };
    static BOOL AllowTransparency() { return m_fAllowTransparency; };

    //Public virtual
    virtual CDescTree* GetMainTree() = 0;

    virtual LPCTSTR GetGameName();

    virtual BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId) = 0;
    virtual BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId);
    virtual UINT32 SavePatchFile(CFile* PatchFile, UINT16 nUnitId);
    void SetSpecificValuesForCRC(UINT32 nCRCForFile);
    virtual UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet) { return 0; };

    virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
    virtual COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    virtual void UpdatePalData();
    void FlushChangeTrackingArray() { safe_delete_array(rgFileChanged); ClearDirtyPaletteTracker();  };
    virtual void PrepChangeTrackingArray();
    virtual void ValidateMixExtraColors(BOOL* pfChangesWereMade) {};
    virtual void PostSetPal(UINT16 nUnitId, UINT16 nPalId) {};
    virtual void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId) {};
    virtual UINT16 GetPaletteCountForUnit(UINT16 nUnitId) { return INVALID_UNIT_VALUE; };

    COLORREF*** CreateImgOutPal();

    void MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
    void MarkPaletteClean(UINT16 nUnit, UINT16 nPaletteID);
    bool IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
};

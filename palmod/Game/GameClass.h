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

enum ColMode
{
    // If you change this list you must update CPalModDlg::OnEditCopy
    COLMODE_12A,     // RGB444
    COLMODE_15,      // BGR555
    COLMODE_15ALT,   // RGB555
    COLMODE_NEOGEO   // RGB666
};

enum ColFlag
{
    COL_RGB,
    COL_A,
};

const UINT32 k_nBogusHighValue = 0xFEEDFED;

class CGameClass
{
protected:
    TCHAR* szDir = nullptr;
    TCHAR** szUnitFile = nullptr;
    UINT16* rgFileChanged = nullptr;
    UINT16 nFileAmt = 0;

    UINT16 m_nTotalInternalUnits = INVALID_UNIT_VALUE;
    UINT32 m_nCurrentPaletteROMLocation = 0;
    UINT32 m_nLowestKnownPaletteRomLocation = k_nBogusHighValue;
    UINT16 m_nCurrentPaletteSize = 0;
    LPCTSTR m_pszCurrentPaletteName = nullptr;

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

    ColMode CurrColMode = COLMODE_12A;
    sImgTicket* CurrImgTicket = nullptr;
    CPalGroup BasePalGroup;

    eImageOutputSpriteDisplay DisplayType = DISPLAY_SPRITES_LEFTTORIGHT;
    // Used for the Export Image listbox
    TCHAR* pButtonLabel = nullptr;
    // How many colors a game has: P1/P2 (2), LP-HK/A2 (6), etc
    UINT8 m_nNumberOfColorOptions = 0;

    bool m_fMustWriteAlphaValue = false;
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

    struct sCreatePalOptions
    {
        // Normally zero, but we can offset by one in some cases.
        UINT8 nStartingPosition = 0;
        COLORREF crForcedColorValues = 0x00000000;
        COLORREF crForcedFirstColorValue = 0x00000000;
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

    std::vector<sPaletteIdentifier> m_vDirtyPaletteList;
    UINT16*** m_pppDataBuffer = nullptr;

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

    TCHAR* GetUnitFile(UINT16 nUnitId) { return szUnitFile[nUnitId]; };
    void SetUnitFile(UINT16 nUnitId, TCHAR* szNewFile) { szUnitFile[nUnitId] = szNewFile; };
    TCHAR* GetLoadDir() { return szDir; };
    BOOL SetLoadDir(TCHAR* szNewDir);

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

    TCHAR* GetButtonDesc() { return pButtonLabel; };
    eImageOutputSpriteDisplay GetImgDispType() { return DisplayType; };

    void SetSourcePal(int nIndex, UINT16 nUnitId, int nStart, int nAmt, int nInc);

    void Revert(int nPalId);

    int GetImgCt() { return IMGAMT[GetImgGameFlag()]; };

    BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16* pData, int nExclusion, COLORREF** pNewPal, int* nNewPalSz);

    static void AllowTransparency(BOOL fAllow) { m_fAllowTransparency = fAllow; };
    static BOOL AllowTransparency() { return m_fAllowTransparency; };

    //Public virtual
    virtual CDescTree* GetMainTree() = 0;

    virtual LPCTSTR GetGameName() { return g_GameFriendlyName[nGameFlag]; };

    virtual BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId) = 0;
    virtual BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId);
    virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
    virtual COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId);
    virtual void UpdatePalData();
    virtual void FlushChangeTrackingArray() { safe_delete_array(rgFileChanged); };
    virtual void PrepChangeTrackingArray();
    virtual void ValidateMixExtraColors(BOOL* pfChangesWereMade) {};
    virtual void PostSetPal(UINT16 nUnitId, UINT16 nPalId) {};
    virtual void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId) {};
    virtual UINT16 GetPaletteCountForUnit(UINT16 nUnitId) { return INVALID_UNIT_VALUE; };

    COLORREF*** CreateImgOutPal();

    void ClearDirtyPaletteTracker() { m_vDirtyPaletteList.clear(); };
    void MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
    void MarkPaletteClean(UINT16 nUnit, UINT16 nPaletteID);
    bool IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID);
};

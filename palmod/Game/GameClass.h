#pragma once

#include "DescTree.h"
#include "Default.h"
#include "GameDef.h"
#include "PalGroup.h"
#include "ImgTicket.h"

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

class CGameClass
{
protected:
    TCHAR* szDir = nullptr;
    TCHAR** szUnitFile = nullptr;
    UINT16* rgFileChanged = nullptr;
    UINT16 nFileAmt = 0;

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
    int nSrcPalUnit[MAX_PAL] = { 0 };
    int nSrcPalStart[MAX_PAL] = { 0 };
    int nSrcPalAmt[MAX_PAL] = { 0 };
    int nSrcPalInc[MAX_PAL] = { 0 };

    ColMode CurrColMode = COLMODE_12A;
    sImgTicket* CurrImgTicket = nullptr;
    CPalGroup BasePalGroup;

    eImageOutputSpriteDisplay DisplayType = DISPLAY_SPRITES_LEFTTORIGHT;
    // Used for the Export Image listbox
    TCHAR* pButtonLabel = nullptr;
    // How many colors a game has: P1/P2 (2), LP-HK/A2 (6), etc
    UINT8 m_nNumberOfColorOptions = 0;

    BOOL bUsesHybrid = FALSE;
    UINT16* pIndexRedir = nullptr;
    int nHybridSz = 0;

    static UINT16 CONV_32_12A(UINT32 inCol);
    static UINT32 CONV_12A_32(UINT16 inCol);
    static UINT16 CONV_32_15(UINT32 inCol);
    static UINT32 CONV_15_32(UINT16 inCol);
    static UINT16 CONV_32_15ALT(UINT32 inCol);
    static UINT32 CONV_15ALT_32(UINT16 inCol);
    static UINT16 CONV_32_NEOGEO(UINT32 inCol);
    static UINT32 CONV_NEOGEO_32(UINT16 inCol);
    static UINT16 SWAP_16(UINT16 palv);

public:
    CGameClass(void);
    virtual ~CGameClass(void);

    static BOOL bPostSetPalProc;

    UINT16* rgUnitRedir = nullptr;
    int nRedirCtr = 0;

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

    //Public virtual
    virtual CDescTree* GetMainTree() = 0;

    virtual BOOL LoadFile(CFile* LoadedFile, UINT16 nUnitId) = 0;
    virtual BOOL SaveFile(CFile* SaveFile, UINT16 nUnitId) = 0;
    virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
    virtual COLORREF* CreatePal(UINT16 nUnitId, UINT16 nPalId) = 0;
    virtual void UpdatePalData() = 0;
    virtual void FlushChangeTrackingArray() { safe_delete_array(rgFileChanged); };
    virtual void PrepChangeTrackingArray();
    virtual void ValidateMixExtraColors(BOOL* pfChangesWereMade) {};

    COLORREF*** CreateImgOutPal();

    //virtual void SaveFile() = 0;
};

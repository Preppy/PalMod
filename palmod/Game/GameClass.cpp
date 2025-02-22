#include "StdAfx.h"
#include "GameClass.h"
#include "GameRegistry.h"
#include "ColorSystem.h"
#include "..\PalMod.h"
#include "..\regproc.h"
#include <string>

BOOL CGameClass::m_ShouldUsePostSetPalProc = TRUE;
BOOL CGameClass::m_fAllowTransparencyEdits = FALSE;
bool CGameClass::m_fGameSizeAllowsIPSPatching = true;
uint8_t CGameClass::m_nSizeOfColorsInBytes = 2;
#define GAMECLASS_DBG DEFAULT_GAME_DEBUG_STATE

bool ArePalettePairsEqual(const stPairedPaletteInfo* plhs, const stPairedPaletteInfo* prhs)
{
    return ((plhs->nNodeIncrementToPartner == prhs->nNodeIncrementToPartner) &&
            (plhs->options == prhs->options) &&
            (plhs->nPalettesToJoin == prhs->nPalettesToJoin) &&
            (plhs->nOverallNodeIncrementTo2ndPartner == prhs->nOverallNodeIncrementTo2ndPartner) &&
            (plhs->nOverallNodeIncrementTo3rdPartner == prhs->nOverallNodeIncrementTo3rdPartner) &&
            (plhs->nOverallNodeIncrementTo4thPartner == prhs->nOverallNodeIncrementTo4thPartner) &&
            (plhs->nOverallNodeIncrementTo5thPartner == prhs->nOverallNodeIncrementTo5thPartner) &&
            (plhs->nOverallNodeIncrementTo6thPartner == prhs->nOverallNodeIncrementTo6thPartner) &&
            (plhs->nOverallNodeIncrementTo7thPartner == prhs->nOverallNodeIncrementTo7thPartner));
}

CGameClass::CGameClass()
    :
    ConvPal16(nullptr),
    ConvCol16(nullptr),
    ConvPal24(nullptr),
    ConvCol24(nullptr),
    ConvPal32(nullptr),
    ConvCol32(nullptr)
{
}

CGameClass::~CGameClass()
{
    ClearSetImgTicket(NULL);

    safe_delete(m_pszLoadedPathOrFile);
    safe_delete(m_pszLoadedPathOnly);
}

int CGameClass::GetPlaneAmt(ColFlag Flag)
{
    return ColorSystem::GetPlaneAmtForColor(m_CurrColMode, Flag);
}

int CGameClass::GetNearestLegal8BitColorValue_RGB_impl(int nCol)
{
    return GetNearestLegal8BitColorValue_RGB(nCol);
}

void CGameClass::AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA)
{
    m_BasePalGroup.AddColorStepsToColorValue(crSrc, crTarget, uStepsR, uStepsG, uStepsB, uStepsA);
}

void CGameClass::SetAlphaMode(AlphaMode NewMode)
{
    ColorSystem::SetAlphaMode(NewMode); 

    GetHost()->GetPalModDlg()->SetSliderDescForAlpha(NewMode != AlphaMode::GameUsesSTPNotAlpha);
}

void CGameClass::ClearSrcPal()
{
    //Values used for image out
    memset(m_nSrcPalUnit, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(m_nSrcPalStart, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(m_nSrcPalAmt, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(m_nSrcPalInc, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
}

// For a given palette ID (such as palette 4 in a nInc long palette set), verify if that palette ID is an
// iteration of nStart
BOOL CGameClass::SpecSel(int* nRelativizedPalId, int nPalId, int nRelativePalIdToMatch, int nNodeLength, int nAmt /* = 1 */, int nMaxColors /* = 6 */)
{
    int nOffset = nPalId - nRelativePalIdToMatch;

    if ((nPalId >= nRelativePalIdToMatch) && (((nOffset) % nNodeLength) < nAmt))
    {
        *nRelativizedPalId = ((nOffset) / nNodeLength);

        if (*nRelativizedPalId >= nMaxColors)
        {
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    return TRUE;
}

sImgTicket* CGameClass::CreateImgTicket(uint32_t nUnitId, int nImgId, sImgTicket* NextTicket, int nXOffs, int nYOffs, BlendMode nBlendMode)
{
    sImgTicket* NewTicket = new sImgTicket;

    NewTicket->nUnitId = nUnitId;
    NewTicket->nImgId = nImgId;
    NewTicket->nXOffs = nXOffs;
    NewTicket->nYOffs = nYOffs;
    NewTicket->NextTicket = NextTicket;
    NewTicket->nBlendMode = nBlendMode;

    return NewTicket;
}

void CGameClass::ClearSetImgTicket(sImgTicket* NewImgTicket)
{
    sImgTicket* DelTicket = m_CurrImgTicket;

    while (DelTicket)
    {
        sImgTicket* NextTicket = DelTicket->NextTicket;
        delete DelTicket;
        DelTicket = NextTicket;
    }

    m_CurrImgTicket = NewImgTicket;
}

bool CGameClass::SetColorMode(ColMode NewMode)
{
    return _SetColorMode(NewMode);
}

bool CGameClass::_UpdateColorSteps(ColMode NewMode)
{
    bool fSuccess = true;

    static_assert(static_cast<ColMode>(29) == ColMode::COLMODE_LAST, "New color formats require updating the color steps code.");

    switch (NewMode)
    {
    case ColMode::COLMODE_BGR333:
    case ColMode::COLMODE_RBG333:
    case ColMode::COLMODE_RGB333:
        m_nSizeOfColorsInBytes = 2;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_8Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_8Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_8Steps;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_8Steps;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB333;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB333;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB333;
        break;

    default:
        MessageBox(g_appHWnd, L"Warning: this color doesn't have defined color steps yet.  This is a bug in PalMod.", GetHost()->GetAppName(), MB_ICONERROR);
        fSuccess = false;
        __fallthrough;

    case ColMode::COLMODE_BGR444:
    case ColMode::COLMODE_BRG444:
    case ColMode::COLMODE_RBG444:
    case ColMode::COLMODE_RGB444_BE:
    case ColMode::COLMODE_RGB444_LE:
        m_nSizeOfColorsInBytes = 2;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_16Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_16Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_16Steps;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_16Steps;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB444;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB444;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB444;
        break;

    case ColMode::COLMODE_BGR555_LE:
    case ColMode::COLMODE_BGR555_BE:
    case ColMode::COLMODE_xBGR555_LE:
    case ColMode::COLMODE_RGB555_LE:
    case ColMode::COLMODE_RGB555_BE:
    case ColMode::COLMODE_BRG555_LE:
    case ColMode::COLMODE_GRB555_LE:
    case ColMode::COLMODE_GRB555_BE:
        m_nSizeOfColorsInBytes = 2;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_1Step;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_1Step;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB555;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB111;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB555;
        break;

    case ColMode::COLMODE_RGB555_SHARP:
        m_nSizeOfColorsInBytes = 2;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_32Steps_SharpCLUT;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_32Steps_SharpCLUT;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_1Step;
        Get8BitValueForColorStep_A = &ColorSystem::GetNearestLegalColorValue_RGB111;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_SharpCLUT;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_SharpCLUT;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB555;
        break;

    case ColMode::COLMODE_RGB666_NEOGEO:
        m_nSizeOfColorsInBytes = 2;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_NeoGeoCLUT;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_NeoGeoCLUT;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_NeoGeoCLUT;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_NeoGeoCLUT;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_NeoGeoCLUT;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_NeoGeoCLUT;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB555;
        break;

    case ColMode::COLMODE_RGBA8881:
        m_nSizeOfColorsInBytes = 4;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_1Step;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_1Step;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB111;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB888;
        break;

    case ColMode::COLMODE_RGBA8881_32STEPS:
        m_nSizeOfColorsInBytes = 4;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_1Step;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_1Step;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB111;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB888;
        break;

    case ColMode::COLMODE_RGBA8887:
        m_nSizeOfColorsInBytes = 4;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_HalfAlpha;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_HalfAlpha;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_ARGB7888;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB888;
        break;

    case ColMode::COLMODE_RGBA8888_BE:
    case ColMode::COLMODE_RGBA8888_LE:
    case ColMode::COLMODE_BGRA8888_BE:
    case ColMode::COLMODE_BGRA8888_LE:
        m_nSizeOfColorsInBytes = 4;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_256Steps;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB888;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB888;
        break;

    case ColMode::COLMODE_BGR888:
    case ColMode::COLMODE_BRG888:
    case ColMode::COLMODE_GRB888:
    case ColMode::COLMODE_RGB888:
        m_nSizeOfColorsInBytes = 3;
        GetColorStepFor8BitValue_RGB = &ColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &ColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &ColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_A = &ColorSystem::Get8BitValueForColorStep_256Steps;
        GetNearestLegal8BitColorValue_RGB = &ColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &ColorSystem::GetNearestLegalColorValue_RGB888;
        ValidateColorStep = &ColorSystem::ValidateColorStep_RGB888;
        break;
    }

    return fSuccess;
}

bool CGameClass::_UpdateColorConverters(ColMode NewMode)
{
    bool fSuccess = true;

    static_assert(static_cast<ColMode>(29) == ColMode::COLMODE_LAST, "New color formats require updating the color converter code.");

    switch (NewMode)
    {
    case ColMode::COLMODE_BGR333:
        ConvPal16 = &ColorSystem::CONV_BGR333_32;
        ConvCol16 = &ColorSystem::CONV_32_BGR333;
        break;
    case ColMode::COLMODE_RBG333:
        ConvPal16 = &ColorSystem::CONV_RBG333_32;
        ConvCol16 = &ColorSystem::CONV_32_RBG333;
        break;
    case ColMode::COLMODE_RGB333:
        ConvPal16 = &ColorSystem::CONV_RGB333_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB333;
        break;

    case ColMode::COLMODE_BGR444:
        ConvPal16 = &ColorSystem::CONV_BGR444_32;
        ConvCol16 = &ColorSystem::CONV_32_BGR444;
        break;
    case ColMode::COLMODE_BRG444:
        ConvPal16 = &ColorSystem::CONV_BRG444_32;
        ConvCol16 = &ColorSystem::CONV_32_BRG444;
        break;
    case ColMode::COLMODE_RBG444:
        ConvPal16 = &ColorSystem::CONV_RBG444_32;
        ConvCol16 = &ColorSystem::CONV_32_RBG444;
        break;
    case ColMode::COLMODE_RGB444_BE:
        ConvPal16 = &ColorSystem::CONV_RGB444BE_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB444BE;
        break;
    case ColMode::COLMODE_RGB444_LE:
        ConvPal16 = &ColorSystem::CONV_RGB444LE_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB444LE;
        break;

    case ColMode::COLMODE_BGR555_LE:
        ConvPal16 = &ColorSystem::CONV_BGR555LE_32;
        ConvCol16 = &ColorSystem::CONV_32_BGR555LE;
        break;
    case ColMode::COLMODE_BGR555_BE:
        ConvPal16 = &ColorSystem::CONV_BGR555BE_32;
        ConvCol16 = &ColorSystem::CONV_32_BGR555BE;
        break;
    case ColMode::COLMODE_xBGR555_LE:
        ConvPal16 = &ColorSystem::CONV_xBGR555LE_32;
        ConvCol16 = &ColorSystem::CONV_32_xBGR555LE;
        break;
    case ColMode::COLMODE_RGB555_LE:
        ConvPal16 = &ColorSystem::CONV_RGB555LE_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB555LE;
        break;
    case ColMode::COLMODE_RGB555_BE:
        ConvPal16 = &ColorSystem::CONV_RGB555BE_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB555BE;
        break;
    case ColMode::COLMODE_BRG555_LE:
        ConvPal16 = &ColorSystem::CONV_BRG555LE_32;
        ConvCol16 = &ColorSystem::CONV_32_BRG555LE;
        break;
    case ColMode::COLMODE_GRB555_LE:
        ConvPal16 = &ColorSystem::CONV_GRB555LE_32;
        ConvCol16 = &ColorSystem::CONV_32_GRB555LE;
        break;
    case ColMode::COLMODE_GRB555_BE:
        ConvPal16 = &ColorSystem::CONV_GRB555BE_32;
        ConvCol16 = &ColorSystem::CONV_32_GRB555BE;
        break;

    case ColMode::COLMODE_RGB555_SHARP:
        ConvPal16 = &ColorSystem::CONV_RGB555Sharp_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB555Sharp;
        break;
    case ColMode::COLMODE_RGB666_NEOGEO:
        ConvPal16 = &ColorSystem::CONV_RGB666NeoGeo_32;
        ConvCol16 = &ColorSystem::CONV_32_RGB666NeoGeo;
        break;

    case ColMode::COLMODE_RGBA8881:
        ConvPal32 = &ColorSystem::CONV_RGBA8881_32;
        ConvCol32 = &ColorSystem::CONV_32_RGBA8881;
        break;
    case ColMode::COLMODE_RGBA8881_32STEPS:
        ConvPal32 = &ColorSystem::CONV_RGBA8881_32;
        ConvCol32 = &ColorSystem::CONV_32_RGBA8881;
        break;
    case ColMode::COLMODE_RGBA8887:
        ConvPal32 = &ColorSystem::CONV_RGBA8887_32;
        ConvCol32 = &ColorSystem::CONV_32_RGBA8887;
        break;
    case ColMode::COLMODE_RGBA8888_BE:
        ConvPal32 = &ColorSystem::CONV_RGBA8888BE_32;
        ConvCol32 = &ColorSystem::CONV_32_RGBA8888BE;
        break;
    case ColMode::COLMODE_RGBA8888_LE:
        ConvPal32 = &ColorSystem::CONV_RGBA8888LE_32;
        ConvCol32 = &ColorSystem::CONV_32_RGBA8888LE;
        break;
    case ColMode::COLMODE_BGRA8888_BE:
        ConvPal32 = &ColorSystem::CONV_BGRA8888BE_32;
        ConvCol32 = &ColorSystem::CONV_32_BGRA8888BE;
        break;
    case ColMode::COLMODE_BGRA8888_LE:
        ConvPal32 = &ColorSystem::CONV_BGRA8888LE_32;
        ConvCol32 = &ColorSystem::CONV_32_BGRA8888LE;
        break;

    case ColMode::COLMODE_RGB888:
        ConvPal24 = &ColorSystem::CONV_RGB888_32;
        ConvCol24 = &ColorSystem::CONV_32_RGB888;
        break;
    case ColMode::COLMODE_BGR888:
        ConvPal24 = &ColorSystem::CONV_BGR888_32;
        ConvCol24 = &ColorSystem::CONV_32_BGR888;
        break;
    case ColMode::COLMODE_BRG888:
        ConvPal24 = &ColorSystem::CONV_BRG888_32;
        ConvCol24 = &ColorSystem::CONV_32_BRG888;
        break;
    case ColMode::COLMODE_GRB888:
        ConvPal24 = &ColorSystem::CONV_GRB888_32;
        ConvCol24 = &ColorSystem::CONV_32_GRB888;
        break;

    default:
        fSuccess = false;
    }

    return fSuccess;
}

bool CGameClass::_SetColorMode(ColMode NewMode)
{
    if (m_CurrColMode != NewMode)
    {
        OutputDebugString(L"CGameClass::SetColorMode : Switching color mode...\n");
    }

    m_CurrColMode = NewMode;

    const bool fUpdatedColorConverters = _UpdateColorConverters(NewMode);
    const bool fUpdatedColorSteps = _UpdateColorSteps(NewMode);

    return fUpdatedColorConverters && fUpdatedColorSteps;
}

uint32_t CGameClass::GetLowestExpectedPaletteLocation()
{
    uint32_t nAdjustedLocation = m_nLowestKnownPaletteRomLocation;

    if (m_pCRC32SpecificData)
    {
        nAdjustedLocation += m_pCRC32SpecificData->nROMSpecificOffset;
    }

    return nAdjustedLocation;
}

LPCWSTR CGameClass::GetGameName()
{
    if (m_pCRC32SpecificData)
    {
        return m_pCRC32SpecificData->strFriendlyName.c_str();
    }
    else
    {
        return KnownGameInfo::GetGameNameForGameID(m_nGameFlag);
    }
}

LPCWSTR CGameClass::GetROMFileName()
{
    // This code presumes that we are dealing with a monolithic file and can not return a filename
    // for loaded directories
    LPCWSTR pszFileName = L"unknown";

    if (m_pszLoadedPathOrFile)
    {
        LPCWSTR pszPtr = wcsrchr(m_pszLoadedPathOrFile, L'\\');

        if (pszPtr)
        {
            pszFileName = pszPtr + 1;
        }
    }

    return pszFileName;
}

BOOL CGameClass::SetLoadedPathOrFile(LPCWSTR pszNewPathOrFile)
{
    if (!m_pszLoadedPathOrFile)
    {
        m_pszLoadedPathOrFile = new wchar_t[wcslen(pszNewPathOrFile) + 1];
        m_pszLoadedPathOnly = new wchar_t[wcslen(pszNewPathOrFile) + 1];
        wcscpy(m_pszLoadedPathOrFile, pszNewPathOrFile);
        wcscpy(m_pszLoadedPathOnly, pszNewPathOrFile);

        if (!(GetFileAttributes(pszNewPathOrFile) & FILE_ATTRIBUTE_DIRECTORY))
        {
            // We probably have a file: try to convert to a folder
            wchar_t* pszExeFileName = wcsrchr(m_pszLoadedPathOnly, L'\\');
            if (pszExeFileName)
            {
                pszExeFileName[0] = 0;
            }
        }

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void CGameClass::SetSourcePal(uint32_t nIndex, uint32_t nUnitId, uint32_t nStart, uint32_t nAmt, uint32_t nInc)
{
    if (nIndex >= MAX_PALETTES_DISPLAYABLE)
    {
        CString strErr;
        strErr.Format(L"CGameClass::SetSourcePal:: ERROR: PalMod only supports %u palettes per display.\n", MAX_PALETTES_DISPLAYABLE);
        OutputDebugString(strErr);
        return;
    }

#if GAMECLASS_DBG
    CString strMsg;
    strMsg.Format(L"CGameClass::SetSourcePal: For unit 0x%02x setting starting palette 0x%02x, displaying %u maximum, and incrementing 0x%x per button.\n", nUnitId, nStart, nAmt, nInc);
    OutputDebugString(strMsg);

    if ((nAmt > 1) && // If this game wants to allow multisprite export
        (nStart > nInc)) // This starting point is in the second or later node: that's potentially a problem.
    {
        OutputDebugString(L"\tCGameClass::SetSourcePal: Warning: you're using multisprite export in what is hopefully an Extras node.  Be careful.\n");
    }
#endif

    m_nSrcPalUnit[nIndex] = nUnitId;
    m_nSrcPalStart[nIndex] = nStart;
    m_nSrcPalAmt[nIndex] = nAmt;
    m_nSrcPalInc[nIndex] = nInc;
}

void CGameClass::RevertChanges(int nPalId)
{
    sPalRedir* RedirIndex = &m_BasePalGroup.GetRedir()[nPalId];

    sPalDef* CurrPalDef = m_BasePalGroup.GetPalDef(RedirIndex->nDefIndex);
    sPalSep* CurrPalSep = CurrPalDef->SepList[RedirIndex->nSepIndex];

    if (CurrPalSep)
    {
        COLORREF* pTempPal = CreatePal(CurrPalDef->uUnitId, CurrPalDef->uPalId);

        uint32_t nStart = CurrPalSep->nStart;
        uint32_t nAmt = CurrPalSep->nAmt;

        for (uint32_t iPos = nStart; iPos < nStart + nAmt; iPos++)
        {
            CurrPalDef->pPal[iPos] = pTempPal[iPos];
            //CurrPalDef->pBasePal[iPos] = pTempPal[iPos];
        }

        delete[] pTempPal;

        // Concern: you can make a change, Update to save that, make another change, then Revert.
        // Revert will revert back to the stored changed, not the base palette.  So we don't want to
        // lose the dirty bit here.
        //MarkPaletteClean(CurrPalDef->uUnitId, CurrPalDef->uPalId);
    }
}

COLORREF* CGameClass::CreatePal(uint32_t nUnitId, uint32_t nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSizeInColors];

    if (m_createPalOptions.nStartingPosition != 0)
    {
        NewPal[0] = 0x0;
    }

    for (uint16_t iPos = 0; iPos < (m_nCurrentPaletteSizeInColors - m_createPalOptions.nStartingPosition); iPos++)
    {
        const uint16_t nCurrentPos = iPos + m_createPalOptions.nStartingPosition;

        switch (GetGameColorByteLength())
        {
        case 2:
        {
            NewPal[nCurrentPos] = ConvPal16(m_pppDataBuffer[nUnitId][nPalId][iPos]);
            break;
        }
        case 3:
        {
            NewPal[nCurrentPos] = ConvPal24(m_pppDataBuffer24[nUnitId][nPalId][iPos]);
            break;
        }
        case 4:
        {
            NewPal[nCurrentPos] = ConvPal32(m_pppDataBuffer32[nUnitId][nPalId][iPos]);
            break;
        }
        }
    }

    return NewPal;
}

void CGameClass::WritePal(uint32_t nUnitId, uint32_t nPalId, COLORREF* rgColors, uint16_t nColorCount)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    for (uint16_t iPos = 0; iPos < (m_nCurrentPaletteSizeInColors - m_createPalOptions.nStartingPosition); iPos++)
    {
        const uint16_t nCurrentPos = iPos + m_createPalOptions.nStartingPosition;

        if (iPos >= nColorCount)
        {
            break;
        }

        switch (GetGameColorByteLength())
        {
        case 2:
        {
            m_pppDataBuffer[nUnitId][nPalId][iPos] = ConvCol16(rgColors[iPos]);
            break;
        }
        case 3:
        {
            m_pppDataBuffer24[nUnitId][nPalId][iPos] = ConvCol24(rgColors[iPos]);
            break;
        }
        case 4:
        {
            m_pppDataBuffer32[nUnitId][nPalId][iPos] = ConvCol32(rgColors[iPos]);
            break;
        }
        }
    }
}

COLORREF*** CGameClass::CreateImgOutPal()
{
    if (m_nSrcPalStart[0] == -1)
    {
        return nullptr;
    }
    else
    {
        int iIndex = 0;
        const uint32_t nPalAmt = m_nSrcPalAmt[0];

        while ((m_nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PALETTES_DISPLAYABLE))
        {
            iIndex++;
        }

        COLORREF*** pppReturnPal = new COLORREF * *[iIndex];

        //Pass 2
        iIndex = 0; 
        while ((m_nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PALETTES_DISPLAYABLE))
        {
            pppReturnPal[iIndex] = new COLORREF * [nPalAmt];

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                pppReturnPal[iIndex][nPalCtr] = CreatePal(m_nSrcPalUnit[iIndex], m_nSrcPalStart[iIndex] + (nPalCtr * m_nSrcPalInc[iIndex]));
            }

            iIndex++;
        }

        return pppReturnPal;
    }
}

void CGameClass::UpdatePalData()
{
    const uint32_t nTotalPalettes = m_BasePalGroup.GetPalAmt();
    uint32_t nChangedPalettesCount = 0;

    // We walk the list backwards so that we know what the first palette's name is
    for (int16_t nPalCtr = (nTotalPalettes - 1); nPalCtr >= 0; nPalCtr--)
    {
        sPalDef* srcDef = m_BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->fPalAvailable)
        {
            COLORREF* crSrc = srcDef->pPal;
            int16_t nTotalColorsRemaining = srcDef->uPalSz;
            uint16_t nCurrentTotalWrites = 0;
            // Every 16 or 256 colors there is another counter WORD (color length) to preserve.
            const uint16_t nMaxSafeColorsToWrite = static_cast<uint16_t>(m_createPalOptions.eWriteOutputOptions);
            const uint16_t iFixedCounterPosition = m_createPalOptions.nTransparencyColorPosition; // The lead 'color' in some games is a counter, in others it's the transparency color.  Don't touch.

            while (nTotalColorsRemaining > 0)
            {
                uint16_t nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (uint16_t nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    const uint16_t iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;

                    if (iCurrentArrayOffset < m_createPalOptions.nStartingPosition)
                    {
                        OutputDebugString(L"ERROR: this palette is trying to touch a negative index offset.  Turn off the createPalOptions offset for this game\n");
                        continue;
                    }

                    const uint32_t iPalPosition = iCurrentArrayOffset - m_createPalOptions.nStartingPosition;

                    switch (GetGameColorByteLength())
                    {
                        case 2:
                        {
                            m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iPalPosition] = ConvCol16(crSrc[iCurrentArrayOffset]);
                            break;
                        }
                        case 3:
                        {
                            m_pppDataBuffer24[srcDef->uUnitId][srcDef->uPalId][iPalPosition] = ConvCol24(crSrc[iCurrentArrayOffset]);
                            break;
                        }
                        case 4:
                        {
                            m_pppDataBuffer32[srcDef->uUnitId][srcDef->uPalId][iPalPosition] = ConvCol32(crSrc[iCurrentArrayOffset]);
                            break;
                        }
                    }
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->fIsChanged = false;
            m_rgFileChanged.at(srcDef->uUnitId) = true;

            if (nPalCtr == 0)
            {
                GetHost()->GetPalModDlg()->SetStatusText(L"Updated.");
            }

            if (m_ShouldUsePostSetPalProc)
            {
                nChangedPalettesCount += PostSetPal(srcDef->uUnitId, srcDef->uPalId);
            }
        }
    }

    if (nChangedPalettesCount != 0)
    {
        GetHost()->GetPalModDlg()->RefreshSecondaryPalettesForPaletteChange();
    }
}

void CGameClass::CreateDefPal(sDescNode* srcNode, uint32_t nSepId)
{
    uint32_t nUnitId = srcNode->uUnitId;
    uint32_t nPalId = srcNode->uPalId;
    static uint16_t s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const uint8_t nTotalPagesNeeded = static_cast<uint8_t>(ceil(static_cast<double>(m_nCurrentPaletteSizeInColors) / static_cast<double>(s_nColorsPerPage)));
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(L"ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n", MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    m_BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSizeInColors, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSizeInColors > s_nColorsPerPage))
    {
        CString strPageDescription;
        int16_t nColorsRemaining = m_nCurrentPaletteSizeInColors;

        for (uint16_t nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSizeInColors; nCurrentPage++)
        {
            strPageDescription.Format(L"%s (%u/%u)", srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            m_BasePalGroup.AddSep(nSepId, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, static_cast<DWORD>(nColorsRemaining)));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        m_BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSizeInColors);
    }
}

void CGameClass::InitDataBuffer()
{
    switch (GetGameColorByteLength())
    {
        case 2:
        {
            m_pppDataBuffer = new uint16_t * *[m_nUnitAmt];
            memset(m_pppDataBuffer, 0, sizeof(uint16_t**) * m_nUnitAmt);
            break;
        }
        case 3:
        {
            m_pppDataBuffer24 = new uint32_t * *[m_nUnitAmt];
            memset(m_pppDataBuffer24, 0, sizeof(uint32_t**) * m_nUnitAmt);
            break;
        }
        case 4:
        {
            m_pppDataBuffer32 = new uint32_t * *[m_nUnitAmt];
            memset(m_pppDataBuffer32, 0, sizeof(uint32_t**) * m_nUnitAmt);
            break;
        }
    }
}

void CGameClass::ClearDataBuffer()
{
    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    if (m_pppDataBuffer24)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer24[nUnitCtr])
            {
                const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer24[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer24[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer24);
    }

    if (m_pppDataBuffer32)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer32[nUnitCtr])
            {
                const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer32[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer32[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer32);
    }
}

void CGameClass::ResetFileChangeTrackingArray()
{
    m_rgFileChanged.clear();
    PrepChangeTrackingArray();
}

BOOL CGameClass::WasGameFileChangedInSession()
{
    for (const bool fWasChanged: m_rgFileChanged)
    {
        if (fWasChanged)
        {
            return TRUE;
        }
    }

    return FALSE;
}

bool CGameClass::AllowIPSPatchGeneration()
{
    if ((!m_fIsDirectoryBasedGame || (m_fAllowIPSPatching && (m_nSIMMLength != 0))) &&
        m_fGameSizeAllowsIPSPatching &&
        (m_nSizeOfColorsInBytes == 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CGameClass::PrepChangeTrackingArray()
{
    m_rgFileChanged.resize(max(m_nUnitAmt, m_nFileAmt) + 1, false);
}

void CGameClass::MarkPaletteDirty(uint32_t nUnit, uint32_t nPaletteId)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteId };

    // only add unique entries
    if (std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)) == m_vDirtyPaletteList.end())
    {
        m_vDirtyPaletteList.push_back(sPaletteOfInterest);
    }
    return;
}

void CGameClass::MarkPaletteClean(uint32_t nUnit, uint32_t nPaletteId)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteId };
    m_vDirtyPaletteList.erase(std::remove_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)), m_vDirtyPaletteList.end());
    return;
}

bool CGameClass::IsPaletteDirty(uint32_t nUnit, uint32_t nPaletteId) const
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteId };
    auto it = std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest));

    return it != m_vDirtyPaletteList.end();
}

void CGameClass::WarnIfPaletteIsOversized(uint32_t nUnit, uint32_t nPaletteId, uint32_t nStartPosition, uint16_t nPaletteSizeInColors, LPCWSTR pszPaletteName) const
{
    if ((nPaletteSizeInColors > MAXAMT_ColorsPerPaletteTable) || (nPaletteSizeInColors == 0))
    {
        static int s_nLastPaletteWithThisError = 0;
        const int nThisPaletteId = ((nUnit & 0xFFFF) << 16) | (nPaletteId & 0xFFFF);
        CString strText;
        strText.Format(L"WARNING: palette '%s' is %u colors long (unit 0x%02x id 0x%02x).  Game palette tables max out at 256 colors.\n\nThis must be fixed.\n", pszPaletteName, nPaletteSizeInColors, nUnit, nPaletteId);
        OutputDebugString(strText);

        if (s_nLastPaletteWithThisError != nThisPaletteId)
        {
            MessageBox(g_appHWnd, strText, GetHost()->GetAppName(), MB_ICONERROR);

            s_nLastPaletteWithThisError = nThisPaletteId;

#ifdef DEBUG
            // Some auto-slicing code in case I want that again at some point
            const int16_t nPalettesNeeded = static_cast<int16_t>(ceil(static_cast<double>(nPaletteSizeInColors) / static_cast<double>(MAXAMT_ColorsPerPaletteTable)));
            int32_t nRemainingSize = nPaletteSizeInColors;
            const uint32_t nEndingPosition = nStartPosition + (nPaletteSizeInColors * m_nSizeOfColorsInBytes);
            uint32_t nCurrentPosition = nStartPosition;

            OutputDebugString(strText.GetString());

            for (size_t iCurrentPalette = 1; nCurrentPosition < nEndingPosition; iCurrentPalette++)
            {
                int32_t nThisEndLocation = min(nCurrentPosition + (MAXAMT_ColorsPerPaletteTable * m_nSizeOfColorsInBytes), nEndingPosition);
                strText.Format(L"    { L\"%s (%u/%u)\", 0x%x, 0x%x },\r\n", pszPaletteName, iCurrentPalette, nPalettesNeeded, nCurrentPosition, nThisEndLocation);
                nCurrentPosition += MAXAMT_ColorsPerPaletteTable * m_nSizeOfColorsInBytes;
                OutputDebugString(strText.GetString());
            }

            OutputDebugString(L"};\r\n\r\n");
#endif
        }
    }
}

uint32_t CGameClass::_GetExtraCount(uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nUnitId, stExtraDef* ppExtraDef)
{
    if (rgExtraCount[0] == -1)
    {
        uint32_t nDefCtr = 0;
        // +1 for the extras
        memset(rgExtraCount, 0, (nNormalUnitCount + 1) * sizeof(uint32_t));

        stExtraDef* pCurrDef = &ppExtraDef[0];

        if (pCurrDef)
        {
            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if ((pCurrDef->uUnitN != UNIT_START_VALUE) &&
                    !pCurrDef->isInvisible)
                {
                    rgExtraCount[pCurrDef->uUnitN]++;
                }

                nDefCtr++;
                pCurrDef = (stExtraDef*)&ppExtraDef[nDefCtr];
            }
        }
    }

    return rgExtraCount[nUnitId];
}

uint32_t CGameClass::_GetExtraLocation(uint32_t* rgExtraLocations, uint32_t nNormalUnitCount, uint32_t nUnitId, stExtraDef* ppExtraDef)
{
    if (rgExtraLocations[0] == -1)
    {
        uint32_t nDefCtr = 0;
        uint32_t nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLocations, 0, (nNormalUnitCount + 1) * sizeof(uint32_t));

        stExtraDef* pCurrDef = &ppExtraDef[0];

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLocations[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = (stExtraDef*)&ppExtraDef[nDefCtr];
        }
    }

    return rgExtraLocations[nUnitId];
}

uint32_t CGameClass::_GetCollectionCountForUnit(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        return pGameUnits[nUnitId].uChildAmt;
    }
}

uint32_t CGameClass::_GetPaletteCountForUnit(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        uint32_t nCompleteCount = 0;
        const uint32_t nCollectionCount = pGameUnits[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

        for (uint32_t  nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if GAMECLASS_DBG
        CString strMsg;
        strMsg.Format(L"CGameClass::_GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

uint32_t CGameClass::_GetNodeCountForCollection(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nCollectionId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGameClass::_GetDescriptionForCollection(const sDescTreeNode* pGameUnits, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nCollectionId)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)pGameUnits[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

const sGame_PaletteDataset* CGameClass::_GetPaletteSet(const sDescTreeNode* pGameUnits, uint32_t nUnitId, uint32_t nCollectionId)
{
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)pGameUnits[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGameClass::_GetSpecificPalette(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nPaletteId, stExtraDef* ppExtraDef)
{
    uint32_t nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteToUse = nullptr;

    if (nUnitId >= nExtraUnitLocation)
    {
        // Don't use this for Extra palettes.
    }
    else
    {
        // For non-extra units, we can grab the palette set.  For extra units, we handle that elsewhere.
        uint32_t nDistanceFromZero = nPaletteId;
        for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
        {
            const sGame_PaletteDataset* paletteSetToUse = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
            const uint32_t nNodeCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, nCollectionIndex, ppExtraDef);

            if (nDistanceFromZero < nNodeCount)
            {
                paletteToUse = &paletteSetToUse[nDistanceFromZero];
                break;
            }

            nDistanceFromZero -= nNodeCount;
        }
    }

    if (!paletteToUse)
    {
        CString strError;
        strError.Format(L"Warning: invalid palette 0x%02x 0x%02x requested.\n\nThis is a bug in PalMod : please report how you got this error and it'll be fixed promptly.", nUnitId, nPaletteId);
        MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
    }

    return paletteToUse;
}

uint32_t CGameClass::_GetNodeSizeFromPaletteId(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nPaletteId, stExtraDef* ppExtraDef)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    const uint32_t nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        uint32_t nNodeCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, nCollectionIndex, ppExtraDef);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGameClass::_GetNodeFromPaletteId(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, uint32_t nUnitId, uint32_t nPaletteId, stExtraDef* ppExtraDef, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    const uint32_t nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t  nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        uint32_t nNodeCount;

        if (nUnitId == nExtraUnitLocation)
        {
            nNodeCount = _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = nullptr;
                break;
            }
        }
        else
        {
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < m_pButtonLabelSet.size()))
                {
                    pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                }
                else
                {
                    pCollectionNode = nullptr;
                }

                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

void CGameClass::DumpTreeSorted()
{
    sDescTreeNode* pRootTree = GetMainTree()->GetDescTree(-1);

    const uint32_t c_nUnitCount = GetUnitCt();

    struct sPaletteTrackingInformation
    {
        uint32_t nPaletteOffset = -1;
        uint32_t nTerminalOffset = -1;
        std::wstring strUnitName;
        std::wstring strCollectionName;
        std::wstring strPaletteName;
        struct sPaletteTrackingInformation* pNext = nullptr;
    };

    sPaletteTrackingInformation * pListRoot = nullptr;

    for (uint32_t nUnitIndex = 0; nUnitIndex < c_nUnitCount; nUnitIndex++)
    {
        sDescTreeNode* UnitTree = &((sDescTreeNode*)pRootTree->ChildNodes)[nUnitIndex];

        for (uint32_t nCollectionIndex = 0; nCollectionIndex < UnitTree->uChildAmt; nCollectionIndex++)
        {
            sDescTreeNode* CollectionTree = &((sDescTreeNode *)UnitTree->ChildNodes)[nCollectionIndex];

            for (uint32_t nPaletteIndex = 0; nPaletteIndex < CollectionTree->uChildAmt; nPaletteIndex++)
            {
                sDescNode* DescNode = &((sDescNode*)CollectionTree->ChildNodes)[nPaletteIndex];

                LoadSpecificPaletteData(DescNode->uUnitId, DescNode->uPalId);

                if (m_nCurrentPaletteSizeInColors == 0)
                {
                    // We use zero-length palettes for virtual units.
                    continue;
                }

                sPaletteTrackingInformation* pNewListEntry = new sPaletteTrackingInformation;

                pNewListEntry->nPaletteOffset = m_nCurrentPaletteROMLocation;
                pNewListEntry->nTerminalOffset = m_nCurrentPaletteROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                pNewListEntry->strUnitName = UnitTree->szDesc;
                pNewListEntry->strCollectionName = CollectionTree->szDesc;
                pNewListEntry->strPaletteName = m_pszCurrentPaletteName;

                sPaletteTrackingInformation* pCurrent = pListRoot;

                if (!pCurrent || (pCurrent->nPaletteOffset > pNewListEntry->nPaletteOffset))
                {
                    pNewListEntry->pNext = pCurrent;
                    pListRoot = pNewListEntry;
                }
                else
                {
                    while (pCurrent->pNext &&
                          (pCurrent->pNext->nPaletteOffset < pNewListEntry->nPaletteOffset))
                    {
                        pCurrent = pCurrent->pNext;
                    }

                    pNewListEntry->pNext = pCurrent->pNext;
                    pCurrent->pNext = pNewListEntry;
                }
            }
        }
    }

    sPaletteTrackingInformation* pCurrent = pListRoot;

    // Output the list
    while (pCurrent)
    {
        CString strDetails;

        strDetails.Format(L"0x%08x, 0x%08x, %s, %s, %s\r\n", pCurrent->nPaletteOffset, pCurrent->nTerminalOffset, pCurrent->strUnitName.c_str(), pCurrent->strCollectionName.c_str(), pCurrent->strPaletteName.c_str());
        OutputDebugString(strDetails);

        sPaletteTrackingInformation* pTemp = pCurrent->pNext;
        safe_delete(pCurrent);
        pCurrent = pTemp;
    }
}

uint32_t CGameClass::_InitDescTree(sDescTreeNode* pNewDescTree, const sDescTreeNode* pGameUnits, uint32_t nExtraUnitLocation, uint32_t nTotalNormalUnitCount,
                                   uint32_t* rgExtraCount, uint32_t* rgExtraLocations, stExtraDef* ppExtraDef)
{
    CString strMsg;
    uint32_t nTotalPaletteCount = 0;

    OutputDebugString(L"CGameClass::_InitDescTree: Building desc tree for game...\n");

    //Go through each character
    for (uint32_t iUnitCtr = 0; iUnitCtr < pNewDescTree->uChildAmt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        uint32_t nExtraCt = _GetExtraCount(rgExtraCount, nTotalNormalUnitCount, iUnitCtr, ppExtraDef);
        BOOL fUseExtra = _GetExtraLocation(rgExtraLocations, nTotalNormalUnitCount, iUnitCtr, ppExtraDef) != 0;

        uint32_t nUnitChildCount = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nTotalNormalUnitCount, nExtraUnitLocation, iUnitCtr, ppExtraDef);

        UnitNode = &((sDescTreeNode*)pNewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr != nExtraUnitLocation)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", pGameUnits[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if GAMECLASS_DBG
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, pNewDescTree->uChildAmt, fUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            uint32_t nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (uint32_t iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, _GetDescriptionForCollection(pGameUnits, nExtraUnitLocation, iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                uint32_t nListedChildrenCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nTotalNormalUnitCount, nExtraUnitLocation, iUnitCtr, iCollectionCtr, ppExtraDef);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GAMECLASS_DBG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = _GetPaletteSet(pGameUnits, iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (uint32_t nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if GAMECLASS_DBG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(L", 0x%x to 0x%x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(L" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(L" no image available.\n");
                    }
                    OutputDebugString(strMsg);
#endif
                }
            }
        }
        else
        {
            // This handles data loaded from the Extra extension file, which are treated
            // each as their own separate node with one collection with everything under that.
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if GAMECLASS_DBG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, pNewDescTree->uChildAmt, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (fUseExtra)
        {
            const uint32_t nExtraPos = _GetExtraLocation(rgExtraLocations, nTotalNormalUnitCount, iUnitCtr, ppExtraDef);
            uint32_t nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; // Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt;

#if GAMECLASS_DBG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (uint32_t nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = &ppExtraDef[nExtraPos + nCurrExtra];

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = (stExtraDef*)&ppExtraDef[nExtraPos + nCurrExtra];
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((nExtraUnitLocation > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if GAMECLASS_DBG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    strMsg.Format(L"CGameClass::_InitDescTree: Loaded %u palettes for this game.\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return nTotalPaletteCount;
}

BOOL CGameClass::_UpdatePalImg(const sDescTreeNode* pGameUnits, uint32_t* rgExtraCount, uint32_t nNormalUnitCount, uint32_t nExtraUnitLocation, stExtraDef* ppExtraDef, int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (!NodeGet)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;
    BlendMode nBlendMode = BlendMode::Alpha;

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    int nTargetImgId = 0;
    uint32_t nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != nExtraUnitLocation)
    {
        const sGame_PaletteDataset* paletteDataSet = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = _GetNodeFromPaletteId(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                bool fCanPairAsNodePairs = false;

                for (uint32_t nOptionsToTest = 0; nOptionsToTest < m_pButtonLabelSet.size(); nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, m_pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fCanPairAsNodePairs = true;
                        break;
                    }
                }

                if (fCanPairAsNodePairs)
                {
                    // We've confirmed that the string matches one of the indicated button names.  Since we're doing a color per node, ensure we only ever
                    // expose to max node.  This covers the situation where a game might have LP/LK but not LP/LK/MP/MK out of a set.
                    const uint32_t nCollectionCount = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, ppExtraDef);

                    nSrcAmt = min(static_cast<uint32_t>(m_pButtonLabelSet.size()), nCollectionCount);
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    // OK, we have confirmed that the collection label matches a button label.
                    // Now let's sanity check the node lengths
                    for (uint32_t nOptionsToTest = 0; nOptionsToTest < nSrcAmt; nOptionsToTest++)
                    {
                        if (_GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, nOptionsToTest, ppExtraDef) != nNodeIncrement)
                        {
                            OutputDebugString(L"CGameClass::_UpdatePalImg: WARNING: These palette nodes are not pairable.  Possibly you already know this, but maybe you want to doublecheck and see if you forget a palette in the set.\r\n");
                            fCanPairAsNodePairs = false;
                        }
                    }

                    if (fCanPairAsNodePairs)
                    {
                        while (nSrcStart >= nNodeIncrement)
                        {
                            // The starting point is the absolute first palette for the sprite in question which is found in P1
                            nSrcStart -= nNodeIncrement;
                        }
                    }
                    else
                    {
                        // This isn't pairable: treat as a solo palette.
                        nSrcAmt = 1;
                        nNodeIncrement = 1;
                    }
                }
                else
                {
                    // This handles a node which is simply P1/P2/P3/P4
                    uint32_t nMatchCount = 0;

                    for (uint32_t nOptionsToTest = 0; nOptionsToTest < m_pButtonLabelSet.size(); nOptionsToTest++)
                    {
                        const sGame_PaletteDataset* paletteToCheck = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, nOptionsToTest, ppExtraDef);

                        if (!paletteToCheck ||
                            (wcscmp(paletteToCheck->szPaletteName, m_pButtonLabelSet[nOptionsToTest]) != 0))
                        {
                            break;
                        }

                        nMatchCount++;
                    }

                    // If the current palette is a part of the button labels and there are more than one to pair, pair what we have
                    if ((nMatchCount > nSrcStart) && (nMatchCount > 1))
                    {
                        nSrcStart = 0;
                        nSrcAmt = nMatchCount;
                        nNodeIncrement = 1;
                    }
                }
            }

            if (paletteDataSet->pExtraProcessing)
            {
                nBlendMode = paletteDataSet->pExtraProcessing->eBlendMode;
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (DisableMultiSpriteExport(paletteDataSet->pPalettePairingInfo))
                {
                    nSrcAmt = 1;
                }

                if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1)
                {
                    if (Node03 == 0)
                    {
                        const uint32_t nStageCount = _GetNodeSizeFromPaletteId(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef);

                        fShouldUseAlternateLoadLogic = true;
                        sImgTicket* pImgArray = nullptr;

                        for (uint32_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                        {
                            // The palettes get added forward, but the image tickets need to be generated in reverse order
                            const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex), ppExtraDef);
                            if (paletteDataSetToJoin)
                            {
                                if (paletteDataSetToJoin->pExtraProcessing)
                                {
                                    nBlendMode = paletteDataSetToJoin->pExtraProcessing->eBlendMode;
                                }
                                else
                                {
                                    nBlendMode = BlendMode::Alpha;
                                }

                                pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray, 0, 0, nBlendMode);

                                //Set each palette
                                sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                                CreateDefPal(JoinedNode, nStageIndex);
                                SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                            }
                        }

                        ClearSetImgTicket(pImgArray);
                    }
                    else
                    {
                        MessageBox(g_appHWnd, L"Mispaired node crash averted: please report this error so it can be properly fixed.", GetHost()->GetAppName(), MB_ICONERROR);
                    }
                }
                else if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
                         (paletteDataSet->pPalettePairingInfo->nPalettesToJoin <= MAXIMUM_PALETTE_PAIRS_ALLOWED))
                {
                    std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                    std::vector<int8_t> vnPeerPaletteDistances;
                    bool fAllNodesFound = true;

                    for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                    {
                        switch (nPairIndex)
                        {
                        case 0:
                            vnPeerPaletteDistances.push_back(0);
                            break;
                        case 1:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner);
                            break;
                        case 2:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner);
                            break;
                        case 3:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner);
                            break;
                        case 4:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo4thPartner);
                            break;
                        case 5:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo5thPartner);
                            break;
                        case 6:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo6thPartner);
                            break;
                        case 7:
                            vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo7thPartner);
                            break;
                        default:
                            // Anything past this just gets default pairing
                            vnPeerPaletteDistances.push_back(nPairIndex);
                            break;
                        }

                        const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + vnPeerPaletteDistances[nPairIndex], ppExtraDef);

                        if (paletteDataSetToJoin)
                        {
                            vsPaletteDataSetToJoin.push_back(paletteDataSetToJoin);
                        }
                        else
                        {
                            fAllNodesFound = false;
                        }
                    }

                    std::vector<sDescNode*> vsJoinedNodes;

                    for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                    {
                        sDescNode* sSearchedNode = nullptr;

                        // We need to readjust the nodes here.
                        uint32_t nNodeSize = _GetNodeSizeFromPaletteId(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef);
                        uint32_t nAdjustedCollectionIndex = Node02;
                        ptrdiff_t nAdjustedButtonIndex = Node03 + vnPeerPaletteDistances[nNodeIndex];

                        while (nAdjustedButtonIndex >= 0)
                        {
                            sSearchedNode = GetMainTree()->GetDescNode(Node01, nAdjustedCollectionIndex, nAdjustedButtonIndex, -1);

                            if (sSearchedNode)
                            {
                                break;
                            }

                            // This palette isn't in this node: walk to the next available node for this unit.
                            nAdjustedButtonIndex -= nNodeSize;
                            nAdjustedCollectionIndex++;
                        }

                        if (sSearchedNode)
                        {
                            vsJoinedNodes.push_back(sSearchedNode);
                        }
                        else
                        {
                            fAllNodesFound = false;
                        }
                    }

                    if (fAllNodesFound)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        std::vector<sImgTicket*> vsImagePairs;
                        sImgTicket* pPreviousImage = nullptr;

                        if (InvertPairingDisplay(paletteDataSet->pPalettePairingInfo))
                        {
                            for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                            {
                                if (vsPaletteDataSetToJoin[nNodeIndex]->pExtraProcessing)
                                {
                                    nBlendMode = vsPaletteDataSetToJoin[nNodeIndex]->pExtraProcessing->eBlendMode;
                                }
                                else
                                {
                                    nBlendMode = BlendMode::Alpha;
                                }

                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage, 0, 0, nBlendMode);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette: these were joined forward, so reverse them now
                                CreateDefPal(vsJoinedNodes[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1) - nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1) - nPairIndex], nSrcAmt, nNodeIncrement);
                            }
                        }
                        else
                        {
                            for (int32_t nNodeIndex = (paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1); nNodeIndex >= 0; nNodeIndex--)
                            {
                                if (vsPaletteDataSetToJoin[nNodeIndex]->pExtraProcessing)
                                {
                                    nBlendMode = vsPaletteDataSetToJoin[nNodeIndex]->pExtraProcessing->eBlendMode;
                                }
                                else
                                {
                                    nBlendMode = BlendMode::Alpha;
                                }

                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage, 0, 0, nBlendMode);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette
                                CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement);
                            }
                        }
                    }
                    else
                    {
                        OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
                    }
                }
            }
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId, nullptr, 0, 0, nBlendMode));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

uint8_t CGameClass::GetSIMMSetForROMLocation(uint32_t nROMLocation)
{
    return (nROMLocation > (m_nNumberOfSIMMsPerSet * m_nSIMMLength)) ? 1 : 0;
}

uint32_t CGameClass::GetSIMMLocationFromROMLocation(uint32_t nROMLocation)
{
    uint32_t nSIMMLocation = nROMLocation / m_nNumberOfSIMMsPerSet;

    return nSIMMLocation;
}

uint32_t CGameClass::GetLocationWithinSIMM(uint32_t nSIMMSetLocation)
{
    uint32_t nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > m_nSIMMLength)
    {
        nSIMMLocation -= m_nSIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGameClass::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    if (GameIsUsing16BitColor() && m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

            // Anything using the base implementation is presorted
            m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
        }
    }
    else if (GameIsUsing24BitColor() && m_pppDataBuffer24)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer24[nUnitCtr] = new uint32_t * [nPalAmt];

            // Anything using the base implementation is presorted
            m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);
                m_pppDataBuffer24[nUnitCtr][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                // This is special since we're padded.
                for (int nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
                {
                    BYTE bVal;
                    uint32_t nCurrentColor = 0xff000000; // force alpha
                    LoadedFile->Read(&bVal, 1);
                    nCurrentColor |= bVal;
                    LoadedFile->Read(&bVal, 1);
                    nCurrentColor |= bVal << 8;
                    LoadedFile->Read(&bVal, 1);
                    nCurrentColor |= bVal << 16;

                    m_pppDataBuffer24[nUnitCtr][nPalCtr][nArrayIndex] = nCurrentColor;
                }
            }
        }
    }
    else if (GameIsUsing32BitColor() && m_pppDataBuffer32)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer32[nUnitCtr] = new uint32_t * [nPalAmt];

            // Anything using the base implementation is presorted
            m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                m_pppDataBuffer32[nUnitCtr][nPalCtr] = new uint32_t[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer32[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
        }
    }
    else
    {
        CString strMessage;
        if (strMessage.LoadString(IDS_COLOR_WRONGSIZE))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONERROR);
        }
        return FALSE;
    }

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGameClass::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    uint32_t nTotalPalettesSaved = 0;

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                if (GameIsUsing16BitColor())
                {
                    for (int nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
                    {
                        // Never write the transparency counter.
                        // It's kind of OK to do so since it should be a no-op, but TMNTF is evil and relies upon overlapping palettes.
                        if ((((nArrayIndex + m_createPalOptions.nStartingPosition) % static_cast<uint16_t>(m_createPalOptions.eWriteOutputOptions)) != 0) ||
                            (m_nGameFlag == MSHVSF_A)) // We don't support skipping the transparency color for MSHvSF's special override
                        {
                            SaveFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nArrayIndex], m_nSizeOfColorsInBytes);
                        }
                        else
                        {
                            SaveFile->Seek(m_nSizeOfColorsInBytes, CFile::current);
                        }
                    }
                }
                else if (GameIsUsing24BitColor())
                {
                    // This is special since we're padded.
                    for (int nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
                    {
                        uint32_t nCurrentColor = m_pppDataBuffer24[nUnitCtr][nPalCtr][nArrayIndex];

                        BYTE bVal = (nCurrentColor & 0xFF);
                        SaveFile->Write(&bVal, 1);
                        bVal = (nCurrentColor & 0xFF00) >> 8;
                        SaveFile->Write(&bVal, 1);
                        bVal = (nCurrentColor & 0xFF0000) >> 16;
                        SaveFile->Write(&bVal, 1);
                    }
                }
                else if (GameIsUsing32BitColor())
                {
                    SaveFile->Write(m_pppDataBuffer32[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, m_nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

bool CGameClass::FindROMVersionFromByteSniff(CFile* LoadedFile, std::vector<ROMRevisionLookupData> vKnownROMVersions, uint16_t& nSniffedVersion, uint32_t nOffsetForRead /* = 0 */)
{
    std::vector<uint16_t> vnSniffedBytes;

    size_t nMaxSize = 0;

    for (ROMRevisionLookupData possibleVersion : vKnownROMVersions)
    {
        nMaxSize = max(nMaxSize, possibleVersion.nBytesToMatch.size());
    }

    vnSniffedBytes.resize(nMaxSize);

    LoadedFile->Seek(nOffsetForRead, CFile::begin);
    LoadedFile->Read(vnSniffedBytes.data(), static_cast<UINT>(vnSniffedBytes.size() * 2));

    bool fFoundMatch = false;

    for (ROMRevisionLookupData possibleVersion : vKnownROMVersions)
    {
        fFoundMatch = true;

        for (uint16_t nIndex = 0; nIndex < possibleVersion.nBytesToMatch.size(); nIndex++)
        {
            if (vnSniffedBytes.at(nIndex) != possibleVersion.nBytesToMatch.at(nIndex))
            {
                fFoundMatch = false;
                break;
            }
        }

        if (fFoundMatch)
        {
            OutputDebugString(L"\tCGameClass::FindROMVersionFromByteSniff : ROM match found.\r\n");
            nSniffedVersion = possibleVersion.nRevisionID;
            break;
        }
    }

    CString strByteWatch;
    OutputDebugString(L"Byte sniff for this ROM: ");
    for (uint16_t nWord : vnSniffedBytes)
    {
        strByteWatch.Format(L"0x%04x, ", nWord);
        OutputDebugString(strByteWatch);
    }
    OutputDebugString(L"\n");

    return fFoundMatch;
}

void CGameClass::SetSpecificValuesForCRC(CFile* CurrFile, uint32_t nCRCForFile)
{
    m_nConfirmedCRCValue = nCRCForFile;

    const std::vector<sCRC32ValueSet>& prgCRC32ValueSets = GetKnownCRC32DatasetsForGame();

    if (prgCRC32ValueSets.size() == 1)
    {
        m_pCRC32SpecificData = &prgCRC32ValueSets.at(0);
    }
    else if (prgCRC32ValueSets.size() > 1)
    {
        for (uint16_t nIndex = 0; nIndex < prgCRC32ValueSets.size(); nIndex++)
        {
            if (prgCRC32ValueSets.at(nIndex).crcValueExpected == m_nConfirmedCRCValue)
            {
                // If we have already have a candidate, don't overrwite if this is an unset CRC evaluation
                if (!m_pCRC32SpecificData || m_nConfirmedCRCValue)
                {
                    // Establish as a candidate
                    m_pCRC32SpecificData = &prgCRC32ValueSets.at(nIndex);
                }

                // We have a matching CRC, but some games use different filenames for the same ROM
                // If we have an exact match, use current data.  Otherwise, continue and see if we find better.
                if (_wcsicmp(prgCRC32ValueSets.at(nIndex).strROMFileName.c_str(), GetROMFileName()) == 0)
                {
                    bool fFoundMatch = true;
                    if (prgCRC32ValueSets.at(nIndex).vValidationCheckBytes.size())
                    {
                        uint16_t nDetectedVersion = 0;
                        fFoundMatch = FindROMVersionFromByteSniff(CurrFile, prgCRC32ValueSets.at(nIndex).vValidationCheckBytes, nDetectedVersion);
                    }

                    if (fFoundMatch)
                    {
                        m_pCRC32SpecificData = &prgCRC32ValueSets.at(nIndex);
                        break;
                    }
                }
            }
            else if (_wcsicmp(prgCRC32ValueSets.at(nIndex).strROMFileName.c_str(), GetROMFileName()) == 0)
            {
                bool fFoundMatch = true;
                if (prgCRC32ValueSets.at(nIndex).vValidationCheckBytes.size())
                {
                    uint16_t nDetectedVersion = 0;
                    fFoundMatch = FindROMVersionFromByteSniff(CurrFile, prgCRC32ValueSets.at(nIndex).vValidationCheckBytes, nDetectedVersion);
                }

                if (fFoundMatch)
                {
                    // We've got a matching name: it's possible that we're dealing with a modified ROM.
                    // Set this as a fallback option.
                    m_pCRC32SpecificData = &prgCRC32ValueSets.at(nIndex);
                }
            }
        }
    }
}

const std::vector<CGameClass::sCRC32ValueSet> &CGameClass::GetKnownCRC32DatasetsForGame(bool* pfNeedToValidateCRCs /*= nullptr */)
{
    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        // This is (obviously) stubbed in: it's for unused code where we would show the crc at runtime.
        *pfNeedToValidateCRCs = false;
    }

    return m_prgCRC32DataForGame;
}
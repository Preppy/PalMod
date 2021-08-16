#include "StdAfx.h"
#include "GameClass.h"
#include "ColorSystem.h"
#include "..\PalMod.h"
#include "..\regproc.h"

BOOL CGameClass::bPostSetPalProc = TRUE;
BOOL CGameClass::m_fAllowTransparencyEdits = FALSE;
UINT8 CGameClass::m_nSizeOfColorsInBytes = 2;

#define GAMECLASS_DBG DEFAULT_GAME_DEBUG_STATE

CGameClass::CGameClass(void)
    :
    ConvPal16(nullptr),
    ConvCol16(nullptr),
    ConvPal24(nullptr),
    ConvCol24(nullptr),
    ConvPal32(nullptr),
    ConvCol32(nullptr)
{
}

CGameClass::~CGameClass(void)
{
    ClearSetImgTicket(NULL);

    safe_delete(m_pszLoadDir);

    //Clear the redirect buffer
    safe_delete_array(rgUnitRedir);

    //Get rid of the redir index
    safe_delete_array(pIndexRedir);
}

int CGameClass::GetPlaneAmt(ColFlag Flag)
{
    switch (CurrColMode)
    {
    case ColMode::COLMODE_RGB333:
        return CColorSystem::k_nRGBPlaneAmtForRGB333;
    case ColMode::COLMODE_RGB444_BE:
    case ColMode::COLMODE_RGB444_LE:
        return CColorSystem::k_nRGBPlaneAmtForRGB444;
    case ColMode::COLMODE_BGR555_LE:
    case ColMode::COLMODE_RGB555_LE:
    case ColMode::COLMODE_RGB555_BE:
    case ColMode::COLMODE_GRB555_LE:
    case ColMode::COLMODE_RGB555_SHARP:
        return CColorSystem::k_nRGBPlaneAmtForRGB555;
    case ColMode::COLMODE_RGB666_NEOGEO:
        return CColorSystem::k_nRGBPlaneAmtForNeoGeo;
    case ColMode::COLMODE_ARGB1888:
        if (Flag == ColFlag::COL_A)
        {
            return CColorSystem::k_nRGBPlaneAmtForRGB111;
        }
        else
        {
            return CColorSystem::k_nRGBPlaneAmtForRGB888;
        }
    case ColMode::COLMODE_ARGB1888_32STEPS:
        if (Flag == ColFlag::COL_A)
        {
            return CColorSystem::k_nRGBPlaneAmtForRGB111;
        }
        else
        {
            return CColorSystem::k_nRGBPlaneAmtForRGB555;
        }
    case ColMode::COLMODE_ARGB7888:
        if (Flag == ColFlag::COL_A)
        {
            return CColorSystem::k_nRGBPlaneAmtForHalfAlpha;
        }
        else
        {
            return CColorSystem::k_nRGBPlaneAmtForRGB888;
        }
    case ColMode::COLMODE_ARGB8888:
    case ColMode::COLMODE_ABGR8888:
    case ColMode::COLMODE_xRGB888:
    case ColMode::COLMODE_xBGR888:
        return CColorSystem::k_nRGBPlaneAmtForRGB888;
    default:
        return 0;
    }
}

void CGameClass::ClearSrcPal()
{
    //Values used for image out
    memset(nSrcPalUnit, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalStart, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalAmt, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalInc, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
}

// For a given palette ID (such as palette 4 in a nInc long palette set), verify if that paltte ID is an
// iteration of nStart
BOOL CGameClass::SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt, int nMax)
{
    int nOffset = nPalId - nStart;

    if ((nPalId >= nStart) && (((nOffset) % nInc) < nAmt))
    {
        *nVarSet = ((nOffset) / nInc);

        if (*nVarSet >= nMax)
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

sImgTicket* CGameClass::CreateImgTicket(UINT16 nUnitId, int nImgId, sImgTicket* NextTicket, int nXOffs, int nYOffs)
{
    if (nImgId == INVALID_UNIT_VALUE)
    {
        return NULL;
    }

    sImgTicket* NewTicket = new sImgTicket;

    NewTicket->nUnitId = nUnitId;
    NewTicket->nImgId = nImgId;
    NewTicket->nXOffs = nXOffs;
    NewTicket->nYOffs = nYOffs;
    NewTicket->NextTicket = NextTicket;

    return NewTicket;
}

void CGameClass::ClearSetImgTicket(sImgTicket* NewImgTicket)
{
    sImgTicket* DelTicket = CurrImgTicket;
    sImgTicket* NextTicket;

    while (DelTicket != NULL)
    {
        NextTicket = DelTicket->NextTicket;
        delete DelTicket;
        DelTicket = NextTicket;
    }

    CurrImgTicket = NewImgTicket;
}

BOOL CGameClass::SetColorMode(ColMode NewMode)
{
    return _SetColorMode(NewMode);
}

BOOL CGameClass::_SetColorMode(ColMode NewMode)
{
    if (CurrColMode != NewMode)
    {
        OutputDebugString(L"CGameClass::SetColorMode : Switching color mode...\n");
    }

    CurrColMode = NewMode;

    switch (NewMode)
    {
    case ColMode::COLMODE_RGB333:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB333_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB333;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_8Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_8Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_8Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_8Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB333;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB333;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB333;
        return TRUE;
    case ColMode::COLMODE_RGB444_BE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB444BE_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB444BE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_16Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_16Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_16Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_16Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB444;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB444;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB444;
        return TRUE;
    case ColMode::COLMODE_RGB444_LE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB444LE_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB444LE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_16Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_16Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_16Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_16Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB444;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB444;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB444;
        return TRUE;
    case ColMode::COLMODE_BGR555_LE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_BGR555LE_32;
        ConvCol16 = &CColorSystem::CONV_32_BGR555LE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB555;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB555;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_BGR555_BE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_BGR555BE_32;
        ConvCol16 = &CColorSystem::CONV_32_BGR555BE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB555;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB555;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_RGB555_LE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB555LE_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB555LE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB555;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB555;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_RGB555_BE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB555BE_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB555BE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB555;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB555;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_GRB555_LE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_GRB555LE_32;
        ConvCol16 = &CColorSystem::CONV_32_GRB555LE;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB555;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB555;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_RGB555_SHARP:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB555Sharp_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB555Sharp;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps_SharpCLUT;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps_SharpCLUT;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_32Steps_SharpCLUT;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_32Steps_SharpCLUT;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_SharpCLUT;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_SharpCLUT;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_RGB666_NEOGEO:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CColorSystem::CONV_RGB666NeoGeo_32;
        ConvCol16 = &CColorSystem::CONV_32_RGB666NeoGeo;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_NeoGeoCLUT;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_NeoGeoCLUT;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_NeoGeoCLUT;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_NeoGeoCLUT;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_NeoGeoCLUT;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_NeoGeoCLUT;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB555;
        return TRUE;
    case ColMode::COLMODE_ARGB1888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CColorSystem::CONV_ARGB1888_32;
        ConvCol32 = &CColorSystem::CONV_32_ARGB1888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_1Step;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_1Step;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB111;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    case ColMode::COLMODE_ARGB1888_32STEPS:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CColorSystem::CONV_ARGB1888_32;
        ConvCol32 = &CColorSystem::CONV_32_ARGB1888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_32Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_32Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_1Step;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_1Step;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB111;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    case ColMode::COLMODE_ARGB7888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CColorSystem::CONV_ARGB7888_32;
        ConvCol32 = &CColorSystem::CONV_32_ARGB7888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_HalfAlpha;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_HalfAlpha;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_ARGB7888;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    case ColMode::COLMODE_ARGB8888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CColorSystem::CONV_ARGB8888_32;
        ConvCol32 = &CColorSystem::CONV_32_ARGB8888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB888;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    case ColMode::COLMODE_ABGR8888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CColorSystem::CONV_ABGR8888_32;
        ConvCol32 = &CColorSystem::CONV_32_ABGR8888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB888;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    case ColMode::COLMODE_xRGB888:
        m_nSizeOfColorsInBytes = 3;
        ConvPal24 = &CColorSystem::CONV_xRGB888_32;
        ConvCol24 = &CColorSystem::CONV_32_xRGB888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB888;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    case ColMode::COLMODE_xBGR888:
        m_nSizeOfColorsInBytes = 3;
        ConvPal24 = &CColorSystem::CONV_xBGR888_32;
        ConvCol24 = &CColorSystem::CONV_32_xBGR888;
        GetColorStepFor8BitValue_RGB = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_RGB = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetColorStepFor8BitValue_A = &CColorSystem::GetColorStepFor8BitValue_256Steps;
        Get8BitValueForColorStep_A = &CColorSystem::Get8BitValueForColorStep_256Steps;
        GetNearestLegal8BitColorValue_RGB = &CColorSystem::GetNearestLegalColorValue_RGB888;
        GetNearestLegal8BitColorValue_A = &CColorSystem::GetNearestLegalColorValue_RGB888;
        ValidateColorStep = &CColorSystem::ValidateColorStep_RGB888;
        return TRUE;
    default:
        return FALSE;
    }
}

UINT32 CGameClass::GetLowestExpectedPaletteLocation()
{
    UINT32 nAdjustedLocation = m_nLowestKnownPaletteRomLocation;

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
        return m_pCRC32SpecificData->szFriendlyName;
    }
    else
    {
        return g_GameFriendlyName[nGameFlag];
    }
}

LPCWSTR CGameClass::GetROMFileName()
{
    // This code presumes that we are dealing with a monolithic file and can not return a filename
    // for loaded directories
    LPCWSTR pszFileName = L"unknown";

    if (m_pszLoadDir)
    {
        LPCWSTR pszPtr = wcsrchr(m_pszLoadDir, L'\\');

        if (pszPtr)
        {
            pszFileName = pszPtr + 1;
        }
    }

    return pszFileName;
}

BOOL CGameClass::SetLoadDir(LPCWSTR pszNewDir)
{
    if (!m_pszLoadDir)
    {
        m_pszLoadDir = new WCHAR[wcslen(pszNewDir) + 1];
        wcscpy(m_pszLoadDir, pszNewDir);

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void CGameClass::SetSourcePal(int nIndex, UINT16 nUnitId, int nStart, int nAmt, int nInc)
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

    nSrcPalUnit[nIndex] = nUnitId;
    nSrcPalStart[nIndex] = nStart;
    nSrcPalAmt[nIndex] = nAmt;
    nSrcPalInc[nIndex] = nInc;
}

void CGameClass::RevertChanges(int nPalId)
{
    sPalRedir* RedirIndex = &BasePalGroup.GetRedir()[nPalId];

    sPalDef* CurrPalDef = BasePalGroup.GetPalDef(RedirIndex->nDefIndex);
    sPalSep* CurrPalSep = CurrPalDef->SepList[RedirIndex->nSepIndex];

    COLORREF* pTempPal = CreatePal(CurrPalDef->uUnitId, CurrPalDef->uPalId);

    int nStart = CurrPalSep->nStart;
    int nAmt = CurrPalSep->nAmt;

    for (int i = nStart; i < nStart + nAmt; i++)
    {
        CurrPalDef->pPal[i] = pTempPal[i];
        //CurrPalDef->pBasePal[i] = pTempPal[i];
    }

    delete[] pTempPal;

    // Concern: you can make a change, Update to save that, make another change, then Revert.
    // Revert will revert back to the stored changed, not the base palette.  So we don't want to
    // lose the dirty bit here.
    //MarkPaletteClean(CurrPalDef->uUnitId, CurrPalDef->uPalId);
}

void CGameClass::WritePal(UINT16 nUnitId, UINT16 nPalId, COLORREF* rgColors, UINT16 nColorCount)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    for (UINT16 i = 0; i < (m_nCurrentPaletteSizeInColors - createPalOptions.nStartingPosition); i++)
    {
        const UINT16 nCurrentPos = i + createPalOptions.nStartingPosition;

        if (i >= nColorCount)
        {
            break;
        }

        switch (GetGameColorByteLength())
        {
        case 2:
        {
            m_pppDataBuffer[nUnitId][nPalId][i] = ConvCol16(rgColors[i]);
            break;
        }
        case 3:
        {
            m_pppDataBuffer24[nUnitId][nPalId][i] = ConvCol24(rgColors[i]);
            break;
        }
        case 4:
        {
            m_pppDataBuffer32[nUnitId][nPalId][i] = ConvCol32(rgColors[i]);
            break;
        }
        }
    }
}

COLORREF* CGameClass::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSizeInColors];

    if (createPalOptions.nStartingPosition != 0)
    {
        NewPal[0] = 0x0;
    }

    for (UINT16 i = 0; i < (m_nCurrentPaletteSizeInColors - createPalOptions.nStartingPosition); i++)
    {
        const UINT16 nCurrentPos = i + createPalOptions.nStartingPosition;

        switch (GetGameColorByteLength())
        {
        case 2:
        {
            NewPal[nCurrentPos] = ConvPal16(m_pppDataBuffer[nUnitId][nPalId][i]);
            break;
        }
        case 3:
        {
            NewPal[nCurrentPos] = ConvPal24(m_pppDataBuffer24[nUnitId][nPalId][i]);
            break;
        }
        case 4:
        {
            NewPal[nCurrentPos] = ConvPal32(m_pppDataBuffer32[nUnitId][nPalId][i]);
            break;
        }
        }
    }

    return NewPal;
}

COLORREF*** CGameClass::CreateImgOutPal()
{
    COLORREF*** pppReturnPal;

    if (nSrcPalStart[0] == -1)
    {
        return NULL;
    }
    else
    {
        int iIndex = 0;
        const int nPalAmt = nSrcPalAmt[0];

        while ((nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PALETTES_DISPLAYABLE))
        {
            iIndex++;
        }

        pppReturnPal = new COLORREF * *[iIndex];

        //Pass 2
        iIndex = 0; 
        while ((nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PALETTES_DISPLAYABLE))
        {
            pppReturnPal[iIndex] = new COLORREF * [nPalAmt];

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                pppReturnPal[iIndex][nPalCtr] = CreatePal(nSrcPalUnit[iIndex], nSrcPalStart[iIndex] + (nPalCtr * nSrcPalInc[iIndex]));
            }

            iIndex++;
        }
    }

    return pppReturnPal;
}

BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16* pData, int nExclusion, COLORREF** pNewPal, int* nNewPalSz)
{
    UINT32* pMulRg = new UINT32[nIndexAmt];
    int nNewPalSzCpy = 0;

    memset(pMulRg, 0xFF, nIndexAmt * sizeof(UINT32));

    for (int nPICtr = 0; nPICtr < nIndexAmt; nPICtr++)
    {
        if ((nPalSz - (nPICtr / nPalSz) * nPalSz) == nExclusion)
        {
            nPICtr++;
        }

        if (nPICtr < nIndexAmt)
        {
            int nMulCtr = 0;

            while (pMulRg[nMulCtr] != 0xFFFFFFFF)
            {
                if (pMulRg[nMulCtr] == pData[nPICtr])
                {
                    break;
                }

                nMulCtr++;
            }

            if (nMulCtr == nNewPalSzCpy)
            {
                pMulRg[nNewPalSzCpy] = pData[nPICtr];
                nNewPalSzCpy++;
            }
        }
    }

    if (nNewPalSzCpy)
    {
        //Delete the previous data
        safe_delete_array(pIndexRedir);

        //Create the redirect
        pIndexRedir = new UINT16[nIndexAmt];

        for (int nPICtr = 0; nPICtr < nIndexAmt; nPICtr++)
        {
            if ((nPalSz - (nPICtr / nPalSz) * nPalSz) == nExclusion)
            {
                pIndexRedir[nPICtr] = 0;
            }
            else
            {
                for (int nMulCtr = 0; nMulCtr < nNewPalSzCpy; nMulCtr++)
                {
                    if (pMulRg[nMulCtr] == pData[nPICtr])
                    {
                        pIndexRedir[nPICtr] = nMulCtr;
                        break;
                    }
                }
            }
        }

        //Create the palette
        *pNewPal = new COLORREF[nNewPalSzCpy];

        for (int nPICtr = 0; nPICtr < nNewPalSzCpy; nPICtr++)
        {
            (*pNewPal)[nPICtr] = ConvPal16(pMulRg[nPICtr]);
        }

        *nNewPalSz = nNewPalSzCpy;

        return TRUE;
    }
    else
    {
        safe_delete_array(pMulRg);

        return FALSE;
    }
}

void CGameClass::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;
            INT16 nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = (UINT16)createPalOptions.eWriteOutputOptions;
            const UINT16 iFixedCounterPosition = createPalOptions.nTransparencyColorPosition; // The lead 'color' in some games is a counter, in others it's the transparency color.  Don't touch.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (UINT16 nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    const UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;

                    if (iCurrentArrayOffset < createPalOptions.nStartingPosition)
                    {
                        OutputDebugString(L"ERROR: this palette is trying to touch a negative index offset.  Turn off the createPalOptions offset for this game\n");
                        continue;
                    }

                    switch (GetGameColorByteLength())
                    {
                    case 2:
                    {
                        m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - createPalOptions.nStartingPosition] = ConvCol16(crSrc[iCurrentArrayOffset]);
                        break;
                    }
                    case 3:
                    {
                        m_pppDataBuffer24[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - createPalOptions.nStartingPosition] = ConvCol24(crSrc[iCurrentArrayOffset]);
                        break;
                    }
                    case 4:
                    {
                        m_pppDataBuffer32[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - createPalOptions.nStartingPosition] = ConvCol32(crSrc[iCurrentArrayOffset]);
                        break;
                    }
                    }
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[srcDef->uUnitId] = TRUE;

            if (bPostSetPalProc)
            {
                PostSetPal(srcDef->uUnitId, srcDef->uPalId);
            }
        }
    }
}

void CGameClass::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil((double)m_nCurrentPaletteSizeInColors / (double)s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(L"ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n", MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSizeInColors, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSizeInColors > s_nColorsPerPage))
    {
        CString strPageDescription;
        INT16 nColorsRemaining = m_nCurrentPaletteSizeInColors;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSizeInColors; nCurrentPage++)
        {
            strPageDescription.Format(L"%s (%u/%u)", srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(nSepId, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSizeInColors);
    }
}

void CGameClass::InitDataBuffer()
{
    switch (GetGameColorByteLength())
    {
    case 2:
    {
        m_pppDataBuffer = new UINT16 * *[nUnitAmt];
        memset(m_pppDataBuffer, 0, sizeof(UINT16**) * nUnitAmt);
        break;
    }
    case 3:
    {
        m_pppDataBuffer24 = new UINT32 * *[nUnitAmt];
        memset(m_pppDataBuffer24, 0, sizeof(UINT32**) * nUnitAmt);
        break;
    }
    case 4:
    {
        m_pppDataBuffer32 = new UINT32 * *[nUnitAmt];
        memset(m_pppDataBuffer32, 0, sizeof(UINT32**) * nUnitAmt);
        break;
    }
    }
}

void CGameClass::ClearDataBuffer()
{
    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer24[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer32[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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
    safe_delete_array(rgFileChanged);
    PrepChangeTrackingArray();
}

BOOL CGameClass::WasGameFileChangedInSession()
{
    BOOL fSomethingChanged = FALSE;

    for (UINT16 nPos = 0; rgUnitRedir[nPos] != INVALID_UNIT_VALUE; nPos++)
    {
        fSomethingChanged = fSomethingChanged || rgFileChanged[rgUnitRedir[nPos]];
    }

    return fSomethingChanged;
}

void CGameClass::PrepChangeTrackingArray()
{
    if (!rgFileChanged)
    {
        const UINT16 rgCountChangableUnits = max(nUnitAmt, nFileAmt) + 1;
        rgFileChanged = new BOOL[rgCountChangableUnits];
        memset(rgFileChanged, FALSE, sizeof(BOOL) * rgCountChangableUnits);
    }
}

void CGameClass::MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };

    // only add unique entries
    if (std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)) == m_vDirtyPaletteList.end())
    {
        m_vDirtyPaletteList.push_back(sPaletteOfInterest);
    }
    return;
}

void CGameClass::MarkPaletteClean(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    m_vDirtyPaletteList.erase(std::remove_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)), m_vDirtyPaletteList.end());
    return;
}

bool CGameClass::IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    auto it = std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest));

    return it != m_vDirtyPaletteList.end();
}

int CGameClass::_GetExtraCount(int* rgExtraCount, int nNormalUnitCount, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (rgExtraCount[0] == -1)
    {
        int nDefCtr = 0;
        // +1 for the extras
        memset(rgExtraCount, 0, (nNormalUnitCount + 1) * sizeof(int));

        stExtraDef* pCurrDef = (stExtraDef*)&ppExtraDef[0];

        if (pCurrDef)
        {
            while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
            {
                if (!pCurrDef->isInvisible)
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

int CGameClass::_GetExtraLocation(int* rgExtraLocations, int nNormalUnitCount, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (rgExtraLocations[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLocations, 0, (nNormalUnitCount + 1) * sizeof(int));

        stExtraDef* pCurrDef = (stExtraDef*)&ppExtraDef[0];

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

UINT16 CGameClass::_GetCollectionCountForUnit(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, stExtraDef* ppExtraDef)
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

UINT16 CGameClass::_GetPaletteCountForUnit(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = pGameUnits[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
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

UINT16 CGameClass::_GetNodeCountForCollection(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nCollectionId, stExtraDef* ppExtraDef)
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

LPCWSTR CGameClass::_GetDescriptionForCollection(const sDescTreeNode* pGameUnits, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nCollectionId)
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

const sGame_PaletteDataset* CGameClass::_GetPaletteSet(const sDescTreeNode* pGameUnits, UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)pGameUnits[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGameClass::_GetSpecificPalette(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nPaletteId, stExtraDef* ppExtraDef)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;
    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        UINT16 nNodeCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, nCollectionIndex, ppExtraDef);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

UINT16 CGameClass::_GetNodeSizeFromPaletteId(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nPaletteId, stExtraDef* ppExtraDef)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        UINT16 nNodeCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, nCollectionIndex, ppExtraDef);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGameClass::_GetNodeFromPaletteId(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nPaletteId, stExtraDef* ppExtraDef, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

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
                if (!fReturnBasicNodesOnly || (nCollectionIndex < m_nNumberOfColorOptions))
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

UINT32 CGameClass::_InitDescTree(sDescTreeNode* pNewDescTree, const sDescTreeNode* pGameUnits, UINT16 nExtraUnitLocation, UINT16 nTotalNormalUnitCount,
                                 int* rgExtraCount, int* rgExtraLocations, stExtraDef* ppExtraDef)
{
    CString strMsg;
    UINT32 nTotalPaletteCount = 0;

    OutputDebugString(L"CGameClass::_InitDescTree: Building desc tree for game...\n");

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < pNewDescTree->uChildAmt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nExtraCt = _GetExtraCount(rgExtraCount, nTotalNormalUnitCount, iUnitCtr, ppExtraDef);
        BOOL bUseExtra = _GetExtraLocation(rgExtraLocations, nTotalNormalUnitCount, iUnitCtr, ppExtraDef) != 0;

        UINT16 nUnitChildCount = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nTotalNormalUnitCount, nExtraUnitLocation, iUnitCtr, ppExtraDef);

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
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, pNewDescTree->uChildAmt, bUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, _GetDescriptionForCollection(pGameUnits, nExtraUnitLocation, iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nTotalNormalUnitCount, nExtraUnitLocation, iUnitCtr, iCollectionCtr, ppExtraDef);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GAMECLASS_DBG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = _GetPaletteSet(pGameUnits, iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
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
        if (bUseExtra)
        {
            int nExtraPos = _GetExtraLocation(rgExtraLocations, nTotalNormalUnitCount, iUnitCtr, ppExtraDef);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; // Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt;

#if GAMECLASS_DBG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = (stExtraDef*)&ppExtraDef[nExtraPos + nCurrExtra];

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

BOOL CGameClass::_UpdatePalImg(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, stExtraDef* ppExtraDef, int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

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
                bool fIsCorePalette = false;

                for (UINT16 nOptionsToTest = 0; nOptionsToTest < m_nNumberOfColorOptions; nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    nSrcAmt = m_nNumberOfColorOptions;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1)
                {
                    const UINT16 nStageCount = _GetNodeSizeFromPaletteId(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex), ppExtraDef);
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1, ppExtraDef);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2, ppExtraDef);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                            ))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 4)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const INT8 nPeerPaletteDistance3 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1, ppExtraDef);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2, ppExtraDef);
                    const sGame_PaletteDataset* paletteDataSetToJoin3 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance3, ppExtraDef);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin3->indexImgToUse, paletteDataSetToJoin3->indexOffsetToUse)
                            )))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance3, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance3, nSrcAmt, nNodeIncrement);
                }
                else
                {
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                    INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance, ppExtraDef);

                    if (paletteDataSetToJoin)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                    }
                }
            }
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

inline UINT8 CGameClass::GetSIMMSetForROMLocation(UINT32 nROMLocation)
{
    return (nROMLocation > (m_nNumberOfSIMMsPerSet * m_nSIMMLength)) ? 1 : 0;
}

inline UINT32 CGameClass::GetSIMMLocationFromROMLocation(UINT32 nROMLocation)
{
    UINT32 nSIMMLocation = nROMLocation / m_nNumberOfSIMMsPerSet;

    return nSIMMLocation;
}

inline UINT32 CGameClass::GetLocationWithinSIMM(UINT32 nSIMMSetLocation)
{
    UINT32 nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > m_nSIMMLength)
    {
        nSIMMLocation -= m_nSIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGameClass::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    if (GameIsUsing16BitColor() && m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

            // Anything using the base implementation is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
        }
    }
    else if (GameIsUsing24BitColor() && m_pppDataBuffer24)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer24[nUnitCtr] = new UINT32 * [nPalAmt];

            // Anything using the base implementation is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);
                m_pppDataBuffer24[nUnitCtr][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                // This is special since we're padded.
                for (int nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
                {
                    //LoadedFile->Read(&m_pppDataBuffer24[nUnitCtr][nPalCtr][nArrayIndex], m_nSizeOfColorsInBytes);
                    BYTE bVal;
                    UINT32 nCurrentColor = 0xff000000; // force alpha
                    LoadedFile->Read(&bVal, 1);
                    nCurrentColor |= bVal << 16;
                    LoadedFile->Read(&bVal, 1);
                    nCurrentColor |= bVal << 8;
                    LoadedFile->Read(&bVal, 1);
                    nCurrentColor |= bVal;

                    m_pppDataBuffer24[nUnitCtr][nPalCtr][nArrayIndex] = nCurrentColor;
                }
            }
        }
    }
    else if (GameIsUsing32BitColor() && m_pppDataBuffer32)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer32[nUnitCtr] = new UINT32 * [nPalAmt];

            // Anything using the base implementation is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                m_pppDataBuffer32[nUnitCtr][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

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

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGameClass::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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
                        if ((((nArrayIndex + createPalOptions.nStartingPosition) % createPalOptions.eWriteOutputOptions) != 0) ||
                            (nGameFlag == MSHVSF_A)) // We don't support skipping the transparency color for MSHvSF's special override
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
                        UINT32 nCurrentColor = m_pppDataBuffer24[nUnitCtr][nPalCtr][nArrayIndex];

                        BYTE bVal = (nCurrentColor & 0xFF0000) >> 16;
                        SaveFile->Write(&bVal, 1);
                        bVal = (nCurrentColor & 0xFF00) >> 8;
                        SaveFile->Write(&bVal, 1);
                        bVal = (nCurrentColor & 0xFF);
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
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

bool CGameClass::UserWantsAllPalettesInPatch()
{
    CString strOptions;
    strOptions.Format(L"Do you want this to be a complete game patch of all possible palettes?  They are much larger and are usually very wasteful.  Select Yes for that, or No to just include the %u palette%s you changed in this current session.", m_vDirtyPaletteList.size(), (m_vDirtyPaletteList.size() > 1) ? L"s" : L"");

    return (MessageBox(g_appHWnd, strOptions, GetHost()->GetAppName(), MB_YESNO | MB_DEFBUTTON2) == IDYES);
}

UINT32 CGameClass::SavePatchFile(CFile* PatchFile, UINT16 nUnitId)
{
    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    UINT32 nTotalPalettesSaved = 0;
    LPCSTR szIPSOpener = "PATCH";
    PatchFile->Write(szIPSOpener, (UINT)strlen(szIPSOpener));

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);
                UINT32 nInitialOffset = 0;

                if (nGameFlag == TMNTTF_SNES)
                {
                    // TMNTTF is evil and uses overlapping palettes.  Account for this by snipping off the lead transparency color.
                    m_nCurrentPaletteROMLocation += m_nSizeOfColorsInBytes;
                    m_nCurrentPaletteSizeInColors--;
                    nInitialOffset = 1;
                }

                // Location
                BYTE b1 = (m_nCurrentPaletteROMLocation & 0xFF0000) >> 16;
                BYTE b2 = (m_nCurrentPaletteROMLocation & 0xFF00) >> 8;
                BYTE b3 = m_nCurrentPaletteROMLocation & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);
                PatchFile->Write(&b3, 1);

                // Size
                b1 = ((m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes) & 0xFF00) >> 8;
                b2 = (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes) & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);

                // Actual data
                if (GameIsUsing16BitColor())
                {
                    PatchFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nInitialOffset], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                else
                {
                    PatchFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nInitialOffset], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    LPCSTR szIPSCloser = "EOF";
    PatchFile->Write(szIPSCloser, (UINT)strlen(szIPSCloser));

#ifdef WANT_IPS_DAT_FILES
    // This code works, but I'm discussing what we want to do with it if anything.

    // Now generate DAT file...
    if (m_pCRC32SpecificData)
    {
        WCHAR szDATFilename[MAX_PATH];
        WCHAR szIPSFilename[MAX_PATH];

        wcscpy(szDATFilename, PatchFile->GetFilePath().GetString());
        
        WCHAR* pszDot = wcsrchr(szDATFilename, L'.');

        if (pszDot != nullptr)
        {
            pszDot[0] = 0;
        }

        pszDot = wcsrchr(szDATFilename, L'\\');

        wcscpy(szIPSFilename, pszDot + 1);

        wcscat(szDATFilename, L".dat");

        CFile DATFile;

        // In debug builds this will trigger what appears to be a bogus assert in CFile which is stating that
        // typeText is not supported.  But it is ... just appears to be a random bad assert.
        if (DATFile.Open(szDATFilename, CFile::modeWrite | CFile::modeCreate | CFile::typeText))
        {
            CStringA strOutput;
            strOutput.Format("%S    %S    CRC(%x)\r\n\r\n", GetROMFileName(), szIPSFilename, m_pCRC32SpecificData->crcValueExpected);
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("[en_US]\r\nColor Mod from %S\r\n\r\n", GetHost()->GetAppName(false).GetString());
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("Hacker: (your name here)\r\n\r\n");
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("Description: color changes for %S\r\n\r\n", GetGameName());
            DATFile.Write(strOutput, strOutput.GetLength());

            DATFile.Abort();
        }
    }
#endif

    CString strMsg;
    strMsg.Format(L"CGameClass::SavePatchFile: Saved 0x%x palettes to patching file for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return nTotalPalettesSaved;
}

BOOL CGameClass::LoadFileForSIMMGame(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    CString strInfo;
    UINT8 nAdjustedSIMMFileNumber = nSIMMNumber + m_nSIMMSetStartingFileNumber;
    BOOL fSuccess = TRUE;

    if ((nAdjustedSIMMFileNumber % m_nNumberOfSIMMsPerSet) != 0)
    {
        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: SIMM %u.%u is a peer SIMM: skipping.\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nAdjustedSIMMFileNumber > (m_nSIMMSetStartingFileNumber + m_nTotalNumberOfSIMMFilesNeeded))
    {
        // Nothing useful on those SIMMs
        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: SIMM %u.%u is unused: skipping.\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // This code handles ROMs as being interleaved
    // For example, one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    const UINT32 nBeginningRange = 0 + (m_nSIMMLength * (nAdjustedSIMMFileNumber - m_nSIMMSetStartingFileNumber));
    UINT32 nEndingRange = (m_nSIMMLength * m_nNumberOfSIMMsPerSet) + (m_nSIMMLength * (nAdjustedSIMMFileNumber - m_nSIMMSetStartingFileNumber));

    CFile FilePeer;
    sFileRule PeerRule = GetNextRuleForSIMMGame();
    CString strPeerFilename;
    strPeerFilename.Format(L"%s\\%s", GetLoadDir(), PeerRule.szFileName);

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    if (fFileOpened)
    {
        UINT32 nPaletteLoadCount = 0;
        bool fShownCrossSIMMErrorOnce = false;

        strInfo.Format(L"CGameClass::LoadFileForSIMMGame: Preparing to load data from SIMM number %u.%u with peer %s (range 0x%x to 0x%x)\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber,
                            PeerRule.szFileName, nBeginningRange, nEndingRange);
        OutputDebugString(strInfo);

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], 0, sizeof(UINT16*) * nPalAmt);
            }

            // Layout is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSizeInColors) > m_nSIMMLength)
                    {
                        if (!fShownCrossSIMMErrorOnce)
                        {
                            fShownCrossSIMMErrorOnce = true;
                            strInfo.Format(IDS_EXTRAS_SIMMBOUNDARY,
                                            nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes));
                            MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        fSuccess = FALSE;
                    }

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(UINT16) * m_nCurrentPaletteSizeInColors);

                    LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    nPaletteLoadCount++;

                    for (UINT16 nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                    {
                        BYTE high, low;

                        LoadedFile->Read(&low, 1);
                        FilePeer.Read(&high, 1);

                        m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = (UINT16)((high << 8) | low);
                    }
                }
            }
        }

        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: Loaded %u palettes from this SIMM pairing of %u.%u\n", nPaletteLoadCount, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);

        FilePeer.Close();
    }
    else
    {
        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: Failed to load file for SIMM %u.%u.\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        fSuccess = FALSE;
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    // We can do our cleanup checks when finished, which is at either file 0, 2, 4, etc
    if (nAdjustedSIMMFileNumber == (m_nSIMMSetStartingFileNumber + (m_nTotalNumberOfSIMMFilesNeeded - m_nNumberOfSIMMsPerSet)))
    {
        CheckForErrorsInTables();

        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;

        OutputDebugString(L"CGameClass::LoadFileForSIMMGame: Loading the SIMM set is complete.\n");
    }

    return fSuccess;
}

BOOL CGameClass::SaveFileForSIMMGame(CFile* SaveFile, UINT16 nSIMMNumber)
{
    CString strInfo;
    UINT8 nAdjustedSIMMFileNumber = nSIMMNumber + m_nSIMMSetStartingFileNumber;

    strInfo.Format(L"CGameClass::SaveFileForSIMMGame: Preparing to save data for game unit number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    // We only save out once to avoid looping
    if (nAdjustedSIMMFileNumber != m_nSIMMSetStartingFileNumber)
    {
        strInfo.Format(L"\tCGameClass::SaveFileForSIMMGame: SIMM %u.%u is already saved.\n", m_nSIMMSetBaseNumber, nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if ((nSIMMNumber % m_nNumberOfSIMMsPerSet) != 0)
    {
        strInfo.Format(L"\tCGameClass::SaveFileForSIMMGame: SIMM %u.%u is a peer SIMM: skipping.\n", m_nSIMMSetBaseNumber, nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // This code handles ROMs as interleaved
    // For example, there is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    strSIMMName1.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
    strSIMMName2.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber + 1);

    if (m_nTotalNumberOfSIMMFilesNeeded == 4)
    {
        strSIMMName3.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber + 2);
        strSIMMName4.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber + 3);
    }

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
        ((m_nTotalNumberOfSIMMFilesNeeded != 4) || (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary))) &&
        ((m_nTotalNumberOfSIMMFilesNeeded != 4) || (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary))))
    {
        strInfo.Format(L"CGameClass::SaveFileForSIMMGame: Preparing to save data starting with SIMM %u.%u\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        UINT32 nPaletteSaveCount = 0;

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    CFile* pSIMM1 = (nSIMMSetToUse == 0) ? &fileSIMM1 : &fileSIMM3;
                    CFile* pSIMM2 = (nSIMMSetToUse == 0) ? &fileSIMM2 : &fileSIMM4;

                    pSIMM1->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    pSIMM2->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    nPaletteSaveCount++;

                    // write length will be number of *bytes* in the sequence across 2 files
                    // We use a temp array to minimize the number of write calls we make
                    UINT16 nCurrentWriteLength = (m_nCurrentPaletteSizeInColors / m_nSizeOfColorsInBytes) * 2;

                    BYTE* pbWrite1 = new BYTE[nCurrentWriteLength];
                    BYTE* pbWrite2 = new BYTE[nCurrentWriteLength];

                    if (pbWrite1 && pbWrite2)
                    {
                        for (UINT16 nWordsWritten = 0; nWordsWritten < nCurrentWriteLength; nWordsWritten++)
                        {
                            pbWrite1[nWordsWritten] = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;
                            pbWrite2[nWordsWritten] = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                        }

                        pSIMM1->Write(pbWrite1, nCurrentWriteLength);
                        pSIMM2->Write(pbWrite2, nCurrentWriteLength);
                    }

                    safe_delete_array(pbWrite1);
                    safe_delete_array(pbWrite2);
                }
            }
        }

        strInfo.Format(L"\tCGameClass::SaveFileForSIMMGame: Saved %u palettes\n", nPaletteSaveCount);
        OutputDebugString(strInfo);
    }
    else
    {
        OutputDebugString(L"CGameClass::SaveFileForSIMMGame: Failed to open full SIMM set: skipping save.\n");
    }

    if (fileSIMM1.m_hFile != CFile::hFileNull)
    {
        fileSIMM1.Close();
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull)
    {
        fileSIMM2.Close();
    }

    if (fileSIMM3.m_hFile != CFile::hFileNull)
    {
        fileSIMM3.Close();
    }

    if (fileSIMM4.m_hFile != CFile::hFileNull)
    {
        fileSIMM4.Close();
    }

    return TRUE;
}

UINT32 CGameClass::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    UINT32 nPaletteSaveCount = 0;
    UINT16 nSIMMNumber = m_nSIMMSetStartingFileNumber;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7

    // This handles ROMs as interleaved
    // There is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So we need some shenanigans to generate correct IPS files

    CFile fileIPS1;
    CFile fileIPS2;
    CFile fileIPS3;
    CFile fileIPS4;

    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    strInfo.Format(L"CGameClass::SaveMultiplePatchFiles: Preparing to save IPS patches...\n");
    OutputDebugString(strInfo);

    bool fSetOneOpened = false;
    bool fSetTwoOpened = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                // Open these on a JIT basis so we only create them if needed.
                if ((nSIMMSetToUse == 0) && !fSetOneOpened)
                {
                    CString strIPSName1;
                    CString strIPSName2;

                    strIPSName1.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber);
                    strIPSName2.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 1);

                    if (fileIPS1.Open(strIPSName1, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary) &&
                        fileIPS2.Open(strIPSName2, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                    {
                        fSetOneOpened = true;
                        // Write the headers...
                        LPCSTR szIPSOpener = "PATCH";
                        fileIPS1.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                        fileIPS2.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                    }
                    else
                    {
                        strInfo.Format(L"Failure to open patch file for set containing '%s': aborting.\n", strIPSName1.GetString());
                        OutputDebugString(strInfo.GetString());
                        break;
                    }
                }
                else if ((nSIMMSetToUse == 1) && !fSetTwoOpened)
                {
                    CString strIPSName3;
                    CString strIPSName4;

                    strIPSName3.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 2);
                    strIPSName4.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 3);

                    if (fileIPS3.Open(strIPSName3, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary) &&
                        fileIPS4.Open(strIPSName4, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                    {
                        fSetTwoOpened = true;
                        // Write the headers...
                        LPCSTR szIPSOpener = "PATCH";
                        fileIPS3.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                        fileIPS4.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                    }
                    else
                    {
                        strInfo.Format(L"Failure to open patch file for set containing '%s': aborting.\n", strIPSName3.GetString());
                        OutputDebugString(strInfo.GetString());
                        break;
                    }
                }

                nPaletteSaveCount++;

                CFile* pIPS1 = (nSIMMSetToUse == 0) ? &fileIPS1 : &fileIPS3;
                CFile* pIPS2 = (nSIMMSetToUse == 0) ? &fileIPS2 : &fileIPS4;

                // Location
                BYTE b1 = (m_nCurrentPaletteROMLocation & 0xFF0000) >> 16;
                BYTE b2 = (m_nCurrentPaletteROMLocation & 0xFF00) >> 8;
                BYTE b3 = m_nCurrentPaletteROMLocation & 0xFF;
                pIPS1->Write(&b1, 1);
                pIPS1->Write(&b2, 1);
                pIPS1->Write(&b3, 1);

                pIPS2->Write(&b1, 1);
                pIPS2->Write(&b2, 1);
                pIPS2->Write(&b3, 1);

                // Size
                b1 = ((m_nCurrentPaletteSizeInColors) & 0xFF00) >> 8;
                b2 = (m_nCurrentPaletteSizeInColors) & 0xFF;
                pIPS1->Write(&b1, 1);
                pIPS1->Write(&b2, 1);

                pIPS2->Write(&b1, 1);
                pIPS2->Write(&b2, 1);

                BYTE* pbWrite1 = nullptr, * pbWrite2 = nullptr;

                pbWrite1 = new BYTE[m_nCurrentPaletteSizeInColors];
                pbWrite2 = new BYTE[m_nCurrentPaletteSizeInColors];

                if (pbWrite1 && pbWrite2)
                {
                    for (UINT16 nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSizeInColors; nWordsWritten++)
                    {
                        pbWrite1[nWordsWritten] = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;
                        pbWrite2[nWordsWritten] = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                    }

                    pIPS1->Write(pbWrite1, m_nCurrentPaletteSizeInColors);
                    pIPS2->Write(pbWrite2, m_nCurrentPaletteSizeInColors);
                }

                safe_delete_array(pbWrite1);
                safe_delete_array(pbWrite2);
            }
        }
    }

    strInfo.Format(L"\tCGameClass::SaveMultiplePatchFiles: complete for 0x%x palettes\n", nPaletteSaveCount);
    OutputDebugString(strInfo);

    LPCSTR szIPSCloser = "EOF";
    if (fileIPS1.m_hFile != CFile::hFileNull)
    {
        fileIPS1.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS1.Close();
    }

    if (fileIPS2.m_hFile != CFile::hFileNull)
    {
        fileIPS2.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS2.Close();
    }

    if (fileIPS3.m_hFile != CFile::hFileNull)
    {
        fileIPS3.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS3.Close();
    }

    if (fileIPS4.m_hFile != CFile::hFileNull)
    {
        fileIPS4.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS4.Close();
    }

    return nPaletteSaveCount;
}

void CGameClass::SetSpecificValuesForCRC(UINT32 nCRCForFile)
{
    m_nConfirmedCRCValue = nCRCForFile;

    const sCRC32ValueSet* ppCRC32ValueSets = nullptr;
    const UINT32 nCRCValueSetCount = GetKnownCRC32DatasetsForGame(&ppCRC32ValueSets);

    if (nCRCValueSetCount == 1)
    {
        m_pCRC32SpecificData = &ppCRC32ValueSets[0];
    }
    else if (nCRCValueSetCount > 1)
    {
        for (UINT16 nIndex = 0; nIndex < nCRCValueSetCount; nIndex++)
        {
            if (ppCRC32ValueSets[nIndex].crcValueExpected == m_nConfirmedCRCValue)
            {
                m_pCRC32SpecificData = &ppCRC32ValueSets[nIndex];

                // We have a matching CRC, but some games use different filenames for the same ROM
                // If we have an exact match, use current data.  Otherwise, continue and see if we find better.
                if (_wcsicmp(ppCRC32ValueSets[nIndex].szROMFileName, GetROMFileName()) == 0)
                {
                    break;
                }
            }
            else if (_wcsicmp(ppCRC32ValueSets[nIndex].szROMFileName, GetROMFileName()) == 0)
            {
                // We've got a matching name: it's possible that we're dealing with a modified ROM.
                // Set this as a fallback option.
                m_pCRC32SpecificData = &ppCRC32ValueSets[nIndex];
            }
        }
    }
}

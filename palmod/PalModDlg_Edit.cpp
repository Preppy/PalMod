#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"

#include "afxole.h"
#include "afxadv.h"

#include "SettDlg.h"

#include "Game\GameDef.h"
#include "Game\GameClass.h"

#include "debugutil.h"

// PalMod supports the following clipboard data:
// * The Windows 10 color power toy format:
//      #AARRGGBB or #RRGGBB
// * Reasonable RGB formats:
//      RRGGBB, AARRGGBB, 0xRRGGBB, 0xAARRGGBB
// * The PalMod format:
//    ( GAMECODE_IN_ASCII LENGTH_OR_COLORCODE COLORBYTES )
// We use k_nASCIICharacterOffset as the 0 position for the code characters so that they're printable.
// We typically map GAMECODE back to the color code of interest.  However, we have an overflow issue.
// Since GAMECODE overflows at 0n94 (encoded ~), we use GAMECODE '~' to indicate that the LENGTH
// char is in fact a COLORCODE value, and use that to determine copy logic.
// Storing the length in the LENGTH_OR_COLORCODE value also has overflow issues, 
// so current versions of PalMod no longer do that.
// The COLORBYTES data can repeat for either up to LENGTH times, OR can repeat any arbitrary number of times
// provided the count of chars is divisible by the number of bytes needed for the indicated color.
// Older versions of PalMod will know not to work with color strings they don't understand, since the GAMECODE
// (or now COLORCODE) value will be unknown to that old version.
//

CStringA CPalModDlg::m_strPasteStr = "";

void CPalModDlg::CopyColorToClipboard(COLORREF crColor)
{
    if (!m_fOleInit)
    {
        return;
    }

    COleDataSource* pSource = new COleDataSource();
    CSharedFile sf(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);

    CStringA CopyText;
    CopyText.Format("#%08x", crColor);
    sf.Write(CopyText, CopyText.GetLength());

    HGLOBAL hMem = sf.Detach();
    if (!hMem)
    {
        return;
    }

    pSource->CacheGlobalData(CF_TEXT, hMem);
    EmptyClipboard();
    pSource->SetClipboard();
    pSource->FlushClipboard();
    CloseClipboard();
}

void CPalModDlg::OnCopyColorAtPointer()
{
    CopyColorToClipboard(GetColorAtCurrentMouseCursorPosition());
}

void CPalModDlg::OnPaste15ColorsAtPointer()
{
    HDC hdc = ::GetWindowDC(0);

    if (hdc)
    {
        if (CurrPalCtrl && GetHost()->GetCurrGame())
        {
            if (CurrPalCtrl->GetSelAmt() != 1)
            {
                // Ideally they select the injection point, but we can just contextual knowledge to start at palette index 01
                CurrPalCtrl->SelectFirstColor();
            }

            POINT ptCursor = { -1, -1 };

            if (GetCursorPos(&ptCursor) && (ptCursor.x != -1))
            {
                const size_t nMaxColorsToCopy = 15;
                const LONG ptMinimumStep = 4;
                const POINT ptHideCursorAt = { 0, 0 };
                LONG ptColorStep = 0;
                bool fFoundFirstColorStep = false, fFoundSecondColorStep = false;
                std::vector<DWORD> rgColorSet;

                // *Really* get the cursor out of the way so we don't track the cursor design by accident
                const POINT ptOriginalCursor = ptCursor;
                ShowCursor(FALSE);

                // Same as above:
                // We need the cursor hidden.  Some apps don't redraw off of SetCursor, so use SendInput to force a redraw of
                // any under-cursor highlights the app might be doing.  (Notably MSPaint shows the brush/pen tip underneath the 
                // cursor until it's moved away.)
                INPUT input = { INPUT_MOUSE, 0, 0, 0, MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_VIRTUALDESK };
                SendInput(1, &input, sizeof(input));

                for (size_t nColorCount = 1; nColorCount <= nMaxColorsToCopy; nColorCount++)
                {
                    const COLORREF colorAtPixel = GetPixel(hdc, ptCursor.x, ptCursor.y);
                    // COLORREF is aaBBggRR we want aaRRggBB
                    const DWORD colorAsDWORD = (0xFF << 24) | (GetRValue(colorAtPixel) << 16) | (GetGValue(colorAtPixel) << 8) | GetBValue(colorAtPixel);

                    rgColorSet.push_back(colorAsDWORD);

                    if (!fFoundFirstColorStep)
                    {
                        // arbitrarily stepping by 4(?) to minimize spins
                        for (ptColorStep = ptMinimumStep; ptColorStep < 100; ptColorStep += ptMinimumStep)
                        {
                            const COLORREF colorNext = GetPixel(hdc, ptCursor.x + ptColorStep, ptCursor.y);

                            if (colorNext != colorAtPixel)
                            {
                                // establish a minimum baseline of step distance
                                // but also try to step past borders
                                if ((colorNext == 0x00ff00) || (colorNext == 0x0)) // if it's our selection border color OR if it's a possible black border
                                {
                                    ptColorStep += 3;
                                }

                                break;
                            }
                        }

                        fFoundFirstColorStep = true;
                    }
                    else if (!fFoundSecondColorStep)
                    {
                        // Now we know a minimum distance to the next color: it's that or greater to the next color
                        for (; ptColorStep < 100; ptColorStep += ptMinimumStep)
                        {
                            const COLORREF colorNext = GetPixel(hdc, ptCursor.x + ptColorStep, ptCursor.y);

                            if (colorNext != colorAtPixel)
                            {
                                // still try to step past borders
                                if ((colorNext == 0x00ff00) || (colorNext == 0x0)) // if it's our selection border color OR if it's a possible black border
                                {
                                    ptColorStep += 3;
                                }

                                break;
                            }
                        }

                        fFoundSecondColorStep = true;
                    }

                    ptCursor.x += ptColorStep;
                }

                ShowCursor(TRUE);
                SetCursorPos(ptOriginalCursor.x, ptOriginalCursor.y);

                for (size_t iIndex = 0; iIndex < rgColorSet.size(); iIndex++)
                {
                    PasteToPaletteFromRGB(rgColorSet.at(iIndex), true, (iIndex == (rgColorSet.size() - 1)));
                }
            }

            ::ReleaseDC(::GetDesktopWindow(), hdc);
        }
    }
}

void CPalModDlg::OnPasteColorAtPointer()
{
    PasteToPaletteFromRGB(GetColorAtCurrentMouseCursorPosition());
}

void CPalModDlg::OnPasteWalkColorAtPointer()
{
    PasteToPaletteFromRGB(GetColorAtCurrentMouseCursorPosition(), true);
}

void CPalModDlg::OnFindColorAtPointer()
{
    SelectMatchingColorsInPalette(GetColorAtCurrentMouseCursorPosition(), GetHost()->GetImgDispCtrl()->GetBGCol());
}

bool CPalDropTarget::_IsDataObjectFromFirefox(COleDataObject* pDataObject, bool& fIsSupportable, _In_opt_ CString* pstrFilename /*= nullptr*/)
{
    static const CLIPFORMAT s_idDesc = RegisterClipboardFormat(CFSTR_FILEDESCRIPTOR);
    static const CLIPFORMAT s_idContent = RegisterClipboardFormat(CFSTR_FILECONTENTS);

    bool fIsFromFirefox = false;

    if (pDataObject->IsDataAvailable(s_idDesc) &&
        pDataObject->IsDataAvailable(s_idContent))
    {
        FORMATETC formatDesc = { s_idDesc, 0, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
        STGMEDIUM storageDesc = {};

        CString strFileName;

        if (pDataObject->GetData(s_idDesc, &storageDesc, &formatDesc))
        {
            FILEGROUPDESCRIPTOR* pfd = reinterpret_cast<FILEGROUPDESCRIPTOR*>(GlobalLock(storageDesc.hGlobal));

            if (pfd)
            {
                if (pfd->cItems == 1)
                {
                    FILEDESCRIPTOR* pFileData = &pfd->fgd[0];

                    if ((pFileData->nFileSizeLow == 0) &&
                        (pFileData->nFileSizeHigh == 0))
                    {
                        LPCWSTR pszExtension = wcsrchr(pFileData->cFileName, L'.');

                        fIsFromFirefox = true;

                        // These are the image types we might expect from Firefox that it might convert to a temp palettized bitmap.
                        // For these and these alone we should be able to grab source from the idropobject and work with that instead.
                        // There's a larger list in OnDragEnter that covers every droppable type: this is just images from Firefox
                        if ((_wcsicmp(pszExtension, L".bmp") == 0) ||
                            (_wcsicmp(pszExtension, L".gif") == 0) ||
                            (_wcsicmp(pszExtension, L".png") == 0))
                        {
                            fIsSupportable = true;

                            if (pstrFilename)
                            {
                                wchar_t szTempPath[MAX_PATH];

                                if (GetTempPath(ARRAYSIZE(szTempPath), szTempPath))
                                {
                                    pstrFilename->Format(L"%sPMT-%s", szTempPath, pFileData->cFileName);
                                }
                            }
                        }
                        else
                        {
                            fIsSupportable = false;
                        }
                    }
                }

                GlobalUnlock(storageDesc.hGlobal);
            }
        }
    }

    return fIsFromFirefox;
}

DROPEFFECT CPalDropTarget::OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point)
{
    m_currentEffectState = DROPEFFECT_NONE;

    if (GetHost()->GetCurrGame())
    {
        bool fMightBeFirefox = false;

        if (pDataObject->IsDataAvailable(CF_HDROP))
        {
            // Get the HDROP data from the data object.
            const HGLOBAL hg = pDataObject->GetGlobalData(CF_HDROP);

            if (!hg)
            {
                return DROPEFFECT_NONE;
            }

            const HDROP hDrop = static_cast<HDROP>(GlobalLock(hg));

            if (hDrop)
            {
                const UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

                if (nFilesAvailable == 1)
                {
                    wchar_t szPath[MAX_PATH];

                    if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                    {
                        // It's a file: is it a file type we know about?
                        // act, bmp, gif, pal, png, raw
                        // 3S: txt.dat: not supported for drag and drop
                        // BBCF: cfpl, hpal, some IMPLs
                        // ACR: prpl
                        LPCWSTR pszExtension = wcsrchr(szPath, L'.');
                        const SupportedGamesList gameId = GetHost()->GetCurrGame()->GetGameFlag();

                        const bool fAllowBBCFDrop = (gameId == BlazBlueCF_S);
                        const bool fAllowACRDrop = (gameId == GGXXACR_S);

                        if (pszExtension)
                        {
                            // There's a smaller list in _IsDataObjectFromFirefox that needs to mirror all image types 
                            // that Firefox might hand us.
                            if ((_wcsicmp(pszExtension, L".act") == 0) ||
                                (_wcsicmp(pszExtension, L".gif") == 0) ||
                                (_wcsicmp(pszExtension, L".pal") == 0) ||
                                (_wcsicmp(pszExtension, L".png") == 0) ||
                                (_wcsicmp(pszExtension, L".raw") == 0) ||
                                (_wcsicmp(pszExtension, L".gpl") == 0) ||
                                (_wcsicmp(pszExtension, L".hpl") == 0) ||
                                (fAllowBBCFDrop && ((_wcsicmp(pszExtension, L".cfpl") == 0) || (_wcsicmp(pszExtension, L".impl") == 0))) ||
                                (fAllowACRDrop && (_wcsicmp(pszExtension, L".prpl") == 0)))
                            {
                                m_currentEffectState = DROPEFFECT_COPY;
                            }
                            else if (_wcsicmp(pszExtension, L".bmp") == 0)
                            {
                                // Firefox does bad things as regards image drag and drop, so flag them
                                fMightBeFirefox = true;
                                m_currentEffectState = DROPEFFECT_COPY;
                            }
                        }
                    }
                }
            }

            GlobalUnlock(hg);

            if (fMightBeFirefox)
            {
                bool fIsSupportable = false;

                if (_IsDataObjectFromFirefox(pDataObject, fIsSupportable))
                {
                    if (fIsSupportable)
                    {
                        GetHost()->GetPalModDlg()->SetStatusText(L"Firefox is weird: will create temp file for this.");
                    }
                    else
                    {
                        GetHost()->GetPalModDlg()->SetStatusText(L"This is not a supported palette source.");
                        m_currentEffectState = DROPEFFECT_NONE;
                    }
                }
            }
        }
        else
        {
            // https://issues.chromium.org/issues/40083002
            GetHost()->GetPalModDlg()->SetStatusText(L"Chromium's drag and drop is broken: if you use Firefox that would have worked.");
        }
    }
    else
    {
        GetHost()->GetPalModDlg()->SetStatusText(L"Load a game first.");
    }

    return m_currentEffectState;
}

BOOL CPalDropTarget::OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point)
{
    // This handles palette import via drag/drop: PalModDlg::OnImportPalette is the Tools menu version
    if (GetHost()->GetCurrGame())
    {
        bool fHaveData = false;
        bool fUsingFirefoxTempFile = false;
        bool fIsSupportable = false;
        LPCWSTR pszExtension = nullptr;
        wchar_t szPath[MAX_PATH];
        CString strFileName;

        if (_IsDataObjectFromFirefox(pDataObject, fIsSupportable, &strFileName) && fIsSupportable && strFileName.GetLength())
        {
            static const CLIPFORMAT s_idContent = RegisterClipboardFormat(CFSTR_FILECONTENTS);

            if (pDataObject->IsDataAvailable(s_idContent))
            {
                FORMATETC formatContent = { s_idContent, 0, DVASPECT_CONTENT, -1, TYMED_ISTREAM | TYMED_HGLOBAL | TYMED_ISTORAGE };
                STGMEDIUM storageContent = {};

                if (pDataObject->GetData(s_idContent, &storageContent, &formatContent))
                {
                    if (storageContent.tymed == TYMED_ISTREAM)
                    {
                        COleStreamFile streamFile(storageContent.pstm);
                        const UINT nFileSize = static_cast<UINT>(streamFile.GetLength());

                        CFile fileTemp;
                        if (fileTemp.Open(strFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
                        {
                            BYTE* pRawData = new BYTE[nFileSize];

                            if (pRawData)
                            {
                                streamFile.Read(pRawData, nFileSize);
                                fileTemp.Write(pRawData, nFileSize);

                                fHaveData = true;
                                fUsingFirefoxTempFile = true;
                                wcsncpy(szPath, strFileName.GetString(), ARRAYSIZE(szPath));

                                safe_delete_array(pRawData);
                            }

                            fileTemp.Close();
                        }

                        ReleaseStgMedium(&storageContent);
                    }
                }
            }
        }

        if (!fHaveData)
        {
            if (pDataObject->IsDataAvailable(CF_HDROP))
            {
                // Get the HDROP data from the data object.
                const HGLOBAL hg = pDataObject->GetGlobalData(CF_HDROP);

                if (hg)
                {
                    const HDROP hDrop = static_cast<HDROP>(GlobalLock(hg));

                    if (hDrop)
                    {
                        const UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

                        if (nFilesAvailable == 1)
                        {
                            if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                            {
                                // we just need the filename right now: test later
                                fHaveData = true;
                            }
                        }
                    }

                    GlobalUnlock(hg);
                }
            }
        }

        if (fHaveData)
        {
            pszExtension = wcsrchr(szPath, L'.');
        }

        if (pszExtension)
        {
            // The handling code here needs to match the "acceptable drop file types" list
            // in OnDragEnter above
            if (_wcsicmp(pszExtension, L".act") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromACT(szPath);
            }
            else if (_wcsicmp(pszExtension, L".bmp") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromBMP(szPath);
            }
            else if (_wcsicmp(pszExtension, L".cfpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromCFPL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".gif") == 0)
            {
                if ((pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd()) && !GetHost()->GetPreviewDlg()->GetPreviewDropIsPalette())
                {
                    UINT nPosition = 0;
                    GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(&nPosition, SpriteImportDirection::TopDown, szPath, true);
                }
                else
                {
                    GetHost()->GetPalModDlg()->LoadPaletteFromGIF(szPath);
                }
            }
            else if (_wcsicmp(pszExtension, L".gpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromGPL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".hpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromHPAL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".impl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromIMPL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".pal") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromPAL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".png") == 0)
            {
                if ((pWnd->GetSafeHwnd() == GetHost()->GetPreviewDlg()->GetSafeHwnd()) && !GetHost()->GetPreviewDlg()->GetPreviewDropIsPalette())
                {
                    GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(nullptr, SpriteImportDirection::TopDown, szPath, true);
                }
                else
                {
                    GetHost()->GetPalModDlg()->LoadPaletteFromPNG(szPath);
                }
            }
            else if (_wcsicmp(pszExtension, L".prpl") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromPRPL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".raw") == 0)
            {
                UINT nPosition = 0;
                GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(&nPosition, SpriteImportDirection::TopDown, szPath, true);
            }
        }

        if (fUsingFirefoxTempFile)
        {
            DeleteFile(szPath);
        }
    }

    return TRUE;
}

void CPalModDlg::HandleCopyToClipboard(bool fIncludeNonBinaryText /* = true */)
{
    if (m_fEnabled)
    {
        CStringA CopyText;
        CStringA FormatTxt;

        if (!m_fOleInit)
        {
            return;
        }

        COleDataSource* pSource = new COleDataSource();
        CSharedFile sf(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);

        CGameClass* CurrGame = GetHost()->GetCurrGame();
        CJunk* CurrPal = m_PalHost.GetNotifyPal();
        const int nWorkingAmt = CurrPal->GetWorkingAmt();
        uint8_t* pSelIndex = CurrPal->GetSelIndex();

        const uint16_t nPaletteSelectionLength = (CurrPal->GetSelAmt() ? CurrPal->GetSelAmt() : nWorkingAmt) + k_nASCIICharacterOffset;
        uint8_t uCopyFlag1;
        // We use a wchar_t as a uint8_t value to store the size.  This is compatible with all versions of palmod.
        // For the new large palette support, this would overflow, so we're just going to set it to 0.
        // This allows old palmod to ignore the data and current palmod to work by figuring out the size itself.
        uint8_t uCopyFlag2 = (nPaletteSelectionLength < 0xFF) ? static_cast<uint8_t>(nPaletteSelectionLength) : k_nASCIICharacterOffset;

        const bool fCopyAll = (CurrPal->GetSelAmt() == 0);
        bool fHitError = false;

        // This table so that older or newer versions of PalMod know the bpp of the copied colors.
        // Here we map the color mode to the poster child game for historical color modes.  For all new
        // color modes we directly store the color mode in the 2nd byte to keep life simple
        // All new color modes should be handled by the DEFAULT handler.  Don't add new handlers.
        uint8_t cbColor = 2;

        switch (CurrGame->GetColorMode())
        {
        case ColMode::COLMODE_RGB333:
            // RGB333
            uCopyFlag1 = TOPF2005_SEGA+ k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_BGR555_LE:
            // BGR555
            uCopyFlag1 = SSF2T_GBA + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB444_BE:
            // RGB444
            uCopyFlag1 = MVC2_P + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB444_LE:
            // RGB444 litle endian
            uCopyFlag1 = DUMMY_RGB444_LE + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB555_LE_CPS3:
            // RGB555
            uCopyFlag1 = SFIII3_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB555_BE:
            // RGB555
            uCopyFlag1 = SFIII3_D + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB666_NEOGEO:
            // RGB666
            uCopyFlag1 = DEVMODE_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB555_SHARP:
            uCopyFlag1 = DANKUGA_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGBA8881:
            cbColor = 4;
            uCopyFlag1 = DBFCI_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGBA8887:
            cbColor = 4;
            uCopyFlag1 = GGXXACR_S + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGBA8888_LE:
            cbColor = 4;
            uCopyFlag1 = UNICLR_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_BGR333:
        case ColMode::COLMODE_RBG333:
        case ColMode::COLMODE_BGR444:
        case ColMode::COLMODE_BRG444:
        case ColMode::COLMODE_RBG444:
        case ColMode::COLMODE_BGR888:
        case ColMode::COLMODE_BRG888:
        case ColMode::COLMODE_GRB888:
        case ColMode::COLMODE_RGB888:
        case ColMode::COLMODE_RGBA8881_32STEPS:
        case ColMode::COLMODE_RGBA8888_BE:
        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_BGRA8888_BE:
        case ColMode::COLMODE_BGRA8888_LE:
        case ColMode::COLMODE_BGR555_BE:
        default:
            {
                // OK, this overflows the 127 character ascii table we use.
                // But since we've made copyflag2 obsolete, let's just hijack that and stuff the color mode there.
                uCopyFlag1 = k_nEncodedColorStringOverflowIndicator;
                uCopyFlag2 = min(k_nASCIIMaxValue, static_cast<uint8_t>(CurrGame->GetColorMode()) + k_nASCIICharacterOffset);
                cbColor = ColorSystem::GetCbForColMode(CurrGame->GetColorMode());
                break;
            }
        }

        // If we've got an unhandled game OR we've overflowed past the printable character limit, warn the developer
        if (fHitError)
        {
            CString strMsg;
            if (strMsg.LoadString(IDS_ERROR_COPYCOLOR))
            {
                MessageBox(strMsg, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }

        CopyText.Format("(%c%c", uCopyFlag1, uCopyFlag2);

        int nInitialOffsetDelta = 0;
        bool fHaveSetDelta = false;

        for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
        {
            if (pSelIndex[iPalIndex] || fCopyAll)
            {
                if (!fHaveSetDelta)
                {
                    fHaveSetDelta = true;
                    nInitialOffsetDelta = iPalIndex;
                }

                switch (cbColor)
                {
                default:
                case 2:
                {
                    const uint16_t uCurrData = CurrGame->ConvCol16(CurrPal->GetBasePal()[iPalIndex]);

                    FormatTxt.Format("%04X", uCurrData);

                    //Only changed:
                    //FormatTxt.Format("%04X", static_cast<uint16_t>((uCurrData << 8) | (uCurrData >> 8) & static_cast<uint16_t>(0xFF0F)));
                    break;
                }
                case 3:
                {
                    const uint32_t uCurrData = CurrGame->ConvCol24(CurrPal->GetBasePal()[iPalIndex]);
                    FormatTxt.Format("%06X", uCurrData);
                    break;
                }
                case 4:
                {
                    const uint32_t uCurrData = CurrGame->ConvCol32(CurrPal->GetBasePal()[iPalIndex]);

                    FormatTxt.Format("%08X", uCurrData);
                    break;
                }
                }

                CopyText.Append(FormatTxt);
            }
        }

        CopyText.Append(")");

        sf.Write(CopyText, CopyText.GetLength());

        HGLOBAL hMem = sf.Detach();
        if (!hMem)
        {
            return;
        }

        pSource->CacheGlobalData(CF_TEXT, hMem);

        // The above handles copying colors between palmod
        // The below handles generating the string pasted to the Unicode clipboard. This contains more useful data.
        CString strUnicodeData;

        if (fIncludeNonBinaryText)
        {
            strUnicodeData.Format(L"%S", CopyText.GetString());
        }

        if (m_fShowExtraCopyData || !fIncludeNonBinaryText)
        {
            CString strFormatU;

            if (fIncludeNonBinaryText)
            {
                strUnicodeData.Append(L"\r\n\r\nThe above data starting at '(' and ending at ')' is the color string you give to PalMod to copy a color, as in (\"\"0000) .");
                strUnicodeData.Append(L" PalMod handles this automatically on CTRL+C /CTRL+V, but you're seeing 'secret' extra data right now using clipboard tricks.");
                strUnicodeData.Append(L" The following data is additional debug information useful for ROM hacking:");

                const sPalDef* activePal = MainPalGroup->GetPalDef(static_cast<uint32_t>(m_nCurrSelPal));
                const uint32_t nPaletteStartingLocation = CurrGame->GetROMLocationForSpecificPalette(activePal->uUnitId, activePal->uPalId);

                strFormatU.Format(L"\r\n\r\nThis palette begins in the ROM at location:\r\n\t0x%x\r\n", nPaletteStartingLocation);
                strUnicodeData.Append(strFormatU);

                if (nInitialOffsetDelta != 0)
                {
                    strFormatU.Format(L"The current selection begins at ROM location:\r\n\t0x%x\r\n", nPaletteStartingLocation + (nInitialOffsetDelta * cbColor));
                    strUnicodeData.Append(strFormatU);
                }
            }

            // Certain GBA games handle alpha uniquely.
            const bool fAlphaIsChaotic = ((CurrGame->GetAlphaMode() == AlphaMode::GameUsesChaoticAlpha) && (cbColor == 2));

            if (fIncludeNonBinaryText)
            {
                if (fAlphaIsChaotic)
                {
                    strUnicodeData.Append(L"\r\nWARNING: This game stores the Alpha value chaotically, so binary searches may fail.\r\n\r\n*PalMod*'s version of the data in the ROM at that location reads:\r\n\t");
                }
                else
                {
                    strUnicodeData.Append(L"PalMod's version of the data in the ROM at that location reads:\r\n\t");
                }
            }

            for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
            {
                if (pSelIndex[iPalIndex] || fCopyAll)
                {
                    switch (cbColor)
                    {
                    default:
                    case 2:
                    {
                        uint16_t uCurrData = CurrGame->ConvCol16(CurrPal->GetBasePal()[iPalIndex]);
                        uCurrData = _byteswap_ushort(uCurrData);

                        strFormatU.Format(L"%02X %02X ", (uCurrData & 0xFF00) >> 8, uCurrData & 0x00FF);
                        break;
                    }
                    case 3:
                    {
                        const uint32_t uCurrData = CurrGame->ConvCol24(CurrPal->GetBasePal()[iPalIndex]);
                        // we deliberately drop alpha here
                        strFormatU.Format(L"%02X %02X %02X ", (uCurrData & 0xFF0000) >> 16, (uCurrData & 0xFF00) >> 8, (uCurrData & 0xFF));
                        break;
                    }
                    case 4:
                    {
                        uint32_t uCurrData = CurrGame->ConvCol32(CurrPal->GetBasePal()[iPalIndex]);
                        uCurrData = _byteswap_ulong(uCurrData);

                        strFormatU.Format(L"%02X %02X %02X %02X ", (uCurrData & 0xFF000000) >> 24, (uCurrData & 0xFF0000) >> 16,
                                                                   (uCurrData & 0xFF00) >> 8, uCurrData & 0xFF);
                        break;
                    }
                    }

                    strUnicodeData.Append(strFormatU);
                }
            }

            if (fIncludeNonBinaryText && fAlphaIsChaotic)
            {
                strUnicodeData.Append(L"\r\n\r\nSince this game's use of the alpha value is chaotic, the data might instead be stored as:\r\n\t");

                for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
                {
                    if (pSelIndex[iPalIndex] || fCopyAll)
                    {
                        uint16_t uCurrData = CurrGame->ConvCol16(CurrPal->GetBasePal()[iPalIndex]);
                        uCurrData = _byteswap_ushort(uCurrData);

                        // Strip alpha via 0x7f mask
                        strFormatU.Format(L"%02X %02X ", (uCurrData & 0xFF00) >> 8, uCurrData & 0x007F);

                        strUnicodeData.Append(strFormatU);
                    }
                }

                strUnicodeData += "\r\nYou will have better binary search results by searching for smaller color segments as opposed to the full palette.";
            }

            SupportedGamesList gameFlag = CurrGame->GetGameFlag();
            const bool fWantArcanaFormattedData = (gameFlag == MBAACC_S) || (gameFlag == MBTL_A) || (gameFlag == UNICLR_A) || (gameFlag == DBFCI_A);

            if (fIncludeNonBinaryText && fWantArcanaFormattedData)
            {
                bool haveShownOneColor = false;

                strUnicodeData.Append(L"\r\nThe French Bread RGB version of this data is:\r\n\trgb = [ ");

                for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
                {
                    if (pSelIndex[iPalIndex] || fCopyAll)
                    {
                        if (haveShownOneColor)
                        {
                            strUnicodeData.Append(L", ");
                        }

                        switch (cbColor)
                        {
                            default:
                            case 2:
                            case 3:
                                // Unsupported
                                break;
                            case 4:
                            {
                                const uint32_t uCurrData = CurrGame->ConvCol32(CurrPal->GetBasePal()[iPalIndex]);
                                strFormatU.Format(L"[ %u,%u,%u ]", uCurrData & 0xFF,
                                                                   (uCurrData & 0xFF00) >> 8,
                                                                   (uCurrData & 0xFF0000) >> 16);
                                break;
                            }
                        }

                        strUnicodeData.Append(strFormatU);
                        haveShownOneColor = true;
                    }
                }

                strUnicodeData.Append(L" ],\r\n");
            }

            if (fIncludeNonBinaryText)
            {
                strUnicodeData.Append(L"\r\n\r\nYou can turn off this secret extended data by going to PalMod's Settings menu.\r\n");
            }
        }

        OutputDebugString(strUnicodeData.GetString());

        CSharedFile sfUnicode(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);
        sfUnicode.Write(strUnicodeData, strUnicodeData.GetLength() * sizeof(wchar_t));
        HGLOBAL hMemUnicode = sfUnicode.Detach();
        if (hMemUnicode)
        {
            pSource->CacheGlobalData(CF_UNICODETEXT, hMemUnicode);
        }

        EmptyClipboard();
        pSource->SetClipboard();
        pSource->FlushClipboard();
        CloseClipboard();
    }
}

void CPalModDlg::OnEditCopyOffset()
{
    if (m_fEnabled && m_fOleInit)
    {
        CJunk* CurrPal = m_PalHost.GetNotifyPal();
        CGameClass* CurrGame = GetHost()->GetCurrGame();

        if (CurrPal && CurrGame)
        {
            COleDataSource* pSource = new COleDataSource();

            if (pSource)
            {
                CSharedFile sf(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);
                CStringA CopyText;

                const uint8_t cbColor = ColorSystem::GetCbForColMode(CurrGame->GetColorMode());
                const int nInitialOffsetDelta = CurrPal->GetHighlightIndex();
                const sPalDef* activePal = MainPalGroup->GetPalDef(static_cast<uint32_t>(m_nCurrSelPal));
                const uint32_t nPaletteStartingLocation = CurrGame->GetROMLocationForSpecificPalette(activePal->uUnitId, activePal->uPalId);
                const uint32_t nLocationForUserSelection = nPaletteStartingLocation + (nInitialOffsetDelta * cbColor);

                CopyText.Format("0x%x", nLocationForUserSelection);

                sf.Write(CopyText, CopyText.GetLength());

                HGLOBAL hMem = sf.Detach();
                if (hMem)
                {
                    pSource->CacheGlobalData(CF_TEXT, hMem);
                }

                CString strUnicodeData;

                strUnicodeData.Format(L"0x%x", nLocationForUserSelection);

                CSharedFile sfUnicode(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);

                sfUnicode.Write(strUnicodeData, strUnicodeData.GetLength() * sizeof(wchar_t));

                HGLOBAL hMemUnicode = sfUnicode.Detach();
                if (hMemUnicode)
                {
                    pSource->CacheGlobalData(CF_UNICODETEXT, hMemUnicode);
                }

                EmptyClipboard();
                pSource->SetClipboard();
                pSource->FlushClipboard();
                CloseClipboard();

                // linebreak for our own display usage
                strUnicodeData.Append(L"\r\n");
                OutputDebugString(strUnicodeData.GetString());
            }
        }
    }
}

BOOL CPalModDlg::IsPasteFromPalMod()
{
    COleDataObject obj;
    BOOL fCanPaste = FALSE;

    if ((!obj.AttachClipboard()) ||
        (!obj.IsDataAvailable(CF_TEXT)))
    {
        return FALSE;
    }

    HGLOBAL hmem = obj.GetGlobalData(CF_TEXT);
    if (hmem)
    {
        CMemFile sf(static_cast<BYTE*>(::GlobalLock(hmem)), static_cast<UINT>(::GlobalSize(hmem)));

        LPSTR szTempStr = m_strPasteStr.GetBufferSetLength(static_cast<int>(::GlobalSize(hmem)));
        sf.Read(szTempStr, static_cast<UINT>(::GlobalSize(hmem)));
        ::GlobalUnlock(hmem);

        m_strPasteStr.Remove(' ');
        m_strPasteStr.Remove('\n');

        if (szTempStr[0] == '(')
        {
            if ((szTempStr[1] - k_nASCIICharacterOffset) < NUM_GAMES) //Gameflag
            {
                uint16_t nPaletteCount = 0;
                const uint8_t cbColorSize = ColorSystem::GetCbForColorForGameFlag(szTempStr[1] - k_nASCIICharacterOffset, szTempStr[2]);

                if (cbColorSize != 0)
                {
                    nPaletteCount = static_cast<uint16_t>((strlen(szTempStr) - 3) / (cbColorSize * 2));
                }

                if (nPaletteCount <= CRegProc::GetMaxPalettePageSize())
                {
                    uint16_t nTerminalLocation = static_cast<uint16_t>(min(strlen(szTempStr), static_cast<uint32_t>(nPaletteCount * (cbColorSize * 2)) + 3));

                    if (szTempStr[nTerminalLocation] == ')')
                    {
                        fCanPaste = TRUE;
                    }
                    else
                    {
                        // So we're in "technically wrong" space here, but maybe it's workable...
                        nPaletteCount = static_cast<uint16_t>((strlen(szTempStr) - 3) / (cbColorSize * 2));

                        nTerminalLocation = static_cast<uint16_t>(min(strlen(szTempStr), static_cast<uint32_t>(nPaletteCount * (cbColorSize * 2)) + 3));

                        if (szTempStr[nTerminalLocation] == ')')
                        {
                            fCanPaste = TRUE;
                        }
                    }
                }
            }
        }
    }

    return fCanPaste;
}

// This accepts strings of the forms:
//  #rrggbb     #aarrggbb
//  rrggbb      0xrrggbb
//  aarrggbb    0xaarrggbb
// where the digits are all hex
BOOL CPalModDlg::IsPasteRGB()
{
    COleDataObject obj;
    BOOL fCanPaste = FALSE;

    if ((!obj.AttachClipboard()) ||
        (!obj.IsDataAvailable(CF_TEXT)))
    {
        return FALSE;
    }

    HGLOBAL hmem = obj.GetGlobalData(CF_TEXT);
    if (hmem)
    {
        CMemFile sf(static_cast<BYTE*>(::GlobalLock(hmem)), static_cast<UINT>(::GlobalSize(hmem)));

        LPSTR szTempStr = m_strPasteStr.GetBufferSetLength(static_cast<int>(::GlobalSize(hmem)));
        sf.Read(szTempStr, static_cast<UINT>(::GlobalSize(hmem)));
        ::GlobalUnlock(hmem);

        m_strPasteStr.Remove(' ');
        m_strPasteStr.Remove('\n');

        uint32_t nCountChars = static_cast<uint32_t>(strlen(szTempStr));
        uint32_t nOffset = 0;

        if (szTempStr[0] == '#')
        {
            nOffset = 1;
        }

        uint32_t nXPos = nOffset;

        if ((nCountChars > 7) && (nCountChars < 11))
        {
            if ((szTempStr[nOffset + 1] == 'x') ||
                (szTempStr[nOffset + 1] == 'X'))
            {
                nXPos = nOffset + 2;
            }
        }

        uint32_t nCountColorChars = nCountChars - nXPos;

        // Accept rrggbb or aarrggbb
        if ((nCountColorChars == 6) || (nCountColorChars == 8))
        {
            fCanPaste = TRUE;

            for (uint32_t nIndex = nXPos; nIndex < nCountChars; nIndex++)
            {
                if (isxdigit(szTempStr[nIndex]) == 0)
                {
                    fCanPaste = FALSE;
                    break;
                }
            }
        }
    }

    return fCanPaste;
}

BOOL CPalModDlg::IsPasteSupported()
{
    return IsPasteFromPalMod() || IsPasteRGB();
}

void CPalModDlg::HandlePasteFromPalMod()
{
    char* szPasteBuff = m_strPasteStr.GetBuffer();

    // Do something with the data in 'buffer'
    const uint8_t uPasteGFlag1 = szPasteBuff[1] - k_nASCIICharacterOffset;
    const uint8_t uPasteGFlag2 = szPasteBuff[2];
    const uint8_t cbColor = ColorSystem::GetCbForColorForGameFlag(uPasteGFlag1, uPasteGFlag2);

    // We want the number of colors per paste minus the () and game flag
    const uint16_t uPasteAmt = static_cast<uint16_t>((strlen(szPasteBuff) - 3) / (cbColor * 2));

    if (uPasteAmt)
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        const uint8_t uCurrGFlag = CurrGame->GetGameFlag();
        const ColMode eCurrColMode = CurrGame->GetColorMode();
        ColMode eColModeForPastedColor = eCurrColMode;

        COLORREF* rgPasteCol = new COLORREF[uPasteAmt];

        int nIndexCtr = 0, nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        bool fWasColorImportedFromDifferentGame = false;
        // validate that newly added code doesn't actually run into ascii table overflow
        bool fWasOverflowHandled = (uPasteGFlag1 < k_nRawColorStringOverflowIndicator);

        if (uCurrGFlag != uPasteGFlag1)
        {
            switch (uPasteGFlag1)
            {
            case TOPF2005_SEGA:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB333;
                break;
            }
            case DUMMY_RGB444_LE:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB444_LE;
                break;
            }
            case DBFCI_A:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGBA8881;
                break;
            }
            case GGXXACR_S:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGBA8887;
                break;
            }
            case UNICLR_A:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGBA8888_LE;
                break;
            }
            case COTA_A:
            case MSHVSF_A:
            case MSH_A:
            case MVC2_A:
            case MVC2_A_DIR:
            case MVC2_D:
            case MVC2_D_16:
            case MVC2_P:
            case MVC_A:
            case GEMFIGHTER_A:
            case RODSM2_A:
            case SFA1_A:
            case SFA2_A:
            case SFA3_A:
            case SF2CE_A:
            case SF2HF_A:
            case SPF2T_A:
            case SSF2T_A:
            case VHUNT2_A:
            case VSAV_A:
            case VSAV2_A:
            case XMVSF_A:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB444_BE;
                break;
            }
            case SFIII1_A:
            case SFIII1_A_DIR:
            case SFIII2_A:
            case SFIII2_A_DIR:
            case SFIII3_A:
            case SFIII3_A_DIR_10:
            case SFIII3_A_DIR_51:
            case JOJOS_A:
            case JOJOS_A_DIR_50:
            case JOJOS_A_DIR_51:
            case REDEARTH_A:
            case REDEARTH_A_DIR_30:
            case REDEARTH_A_DIR_31:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB555_LE_CPS3;
                break;
            }
            case CVS2_A:
            case KOF02UM_S:
            case KOFXI_A:
            case NGBC_A:
            case SFIII3_D:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB555_BE;
                break;
            }
            case AOF1_A:
            case AOF3_A:
            case BREAKERS_A:
            case DOUBLEDRAGON_A:
            case Garou_A:
            case GarouP_A:
            case Garou_S:
            case KarnovsR_A:
            case KOF94_A:
            case KOF97_A:
            case KOF97AE_A:
            case KOF97GM_S:
            case KOF98_A:
            case KOF99_A:
            case KOF01_A:
            case KOF02_A:
            case KOF03_A:
            case KOTM_A:
            case LASTBLADE2_A:
            case MATRIMELEE_A:
            case NeoBomberman_A:
            case DEVMODE_A:
            case NINJAMASTERS_A:
            case RBFF1_A:
            case RBFF2_A:
            case RBFFS_A:
            case ROTD_A:
            case SAMSHO3_A:
            case SAMSHO4_A:
            case SAMSHO5_A:
            case SAMSHO5SP_A:
            case SAVAGEREIGN_A:
            case SDODGEBALL_A:
            case SVCPLUSA_A:
            case WakuWaku7_A:
            case WINDJAMMERS_A:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB666_NEOGEO;
                break;
            }
            case BLEACH_DS:
            case CFTE_SNES:
            case FatalFuryS_SNES:
            case GUNDAM_SNES:
            case MMPR_SNES:
            case MSHWOTG_SNES:
            case SSF2T_GBA:
            case TMNTTF_SNES:
            case XMMA_SNES:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_BGR555_LE;
                break;
            }
            case DANKUGA_A:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_RGB555_SHARP;
                break;
            }
            case k_nRawColorStringOverflowIndicator:
            default:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                fWasOverflowHandled = true;
                eColModeForPastedColor = ColorSystem::DecodeColorFlag(uPasteGFlag2);
                break;
            }
            }

            if (!fWasOverflowHandled)
            {
                MessageBox(L"Warning: ascii table overflow on copy.  PalMod needs to use the overflow handler for this game", GetHost()->GetAppName(), MB_ICONEXCLAMATION | MB_OK);
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                fWasColorImportedFromDifferentGame = true;
                OutputDebugString(L"Pasted color is using a different color mode: switching to that game's color mode to ensure correct values...\n");
                CurrGame->_SetColorMode(eColModeForPastedColor);
            }
        }

        //Notify the change data
        ProcChange();

        switch (cbColor)
        {
        default:
        case 2:
        {
            char szFormatStr16[] = "0x0000";
            bool fAnyValueHasAlpha = false;

            // Pre-check.  Since the incoming color could be either xRGB or ARGB, flag if the value
            // is alpha-aware.  If not, force alpha for the incoming xRGB value.
            for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
            {
                memcpy(&szFormatStr16[2], &szPasteBuff[3 + (4 * iPasteIndex)], sizeof(uint8_t) * 4);

                rgPasteCol[iPasteIndex] = CurrGame->ConvPal16(static_cast<uint16_t>(strtoul(szFormatStr16, NULL, 16)));

                if (reinterpret_cast<uint8_t*>(rgPasteCol)[(iPasteIndex * 4) + 3] != 0)
                {
                    fAnyValueHasAlpha = true;
                    break;
                }
            }

            for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
            {
                memcpy(&szFormatStr16[2], &szPasteBuff[3 + (4 * iPasteIndex)], sizeof(uint8_t) * 4);

                rgPasteCol[iPasteIndex] = CurrGame->ConvPal16(static_cast<uint16_t>(strtoul(szFormatStr16, NULL, 16)));

                // Allow Alpha only if both:
                //      the current game accepts it, and
                //      the current game is using that channel for Alpha, not PS1 Semi-Transparency, and
                //      the incoming data has been proven to know about alpha
                if ((!CurrGame->AllowTransparency() || !fAnyValueHasAlpha) &&
                    (CurrGame->GetAlphaMode() != AlphaMode::GameUsesSTPNotAlpha))
                {
                    // this game doesn't use/want alpha, but we need alpha to display properly
                    reinterpret_cast<uint8_t*>(rgPasteCol)[(iPasteIndex * 4) + 3] |= 0xFF;
                }
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                OutputDebugString(L"Reverting color mode back to this game's desired color mode...\n");
                CurrGame->_SetColorMode(eCurrColMode);

                for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
                {
                    rgPasteCol[iPasteIndex] = CurrGame->ConvPal16(CurrGame->ConvCol16(rgPasteCol[iPasteIndex]));
                }
            }
            break;
        }
        case 3:
        {
            char szFormatStr24[] = "0x000000";

            for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
            {
                memcpy(&szFormatStr24[2], &szPasteBuff[3 + (6 * iPasteIndex)], sizeof(uint8_t) * 6);

                rgPasteCol[iPasteIndex] = CurrGame->ConvPal24(static_cast<uint32_t>(strtoul(szFormatStr24, NULL, 16)));
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                OutputDebugString(L"Reverting color mode back to this game's desired color mode...\n");
                CurrGame->_SetColorMode(eCurrColMode);

                for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
                {
                    rgPasteCol[iPasteIndex] = CurrGame->ConvPal24(CurrGame->ConvCol24(rgPasteCol[iPasteIndex]));
                }
            }
            break;
        }
        case 4:
        {
            char szFormatStr32[] = "0x00000000";

            for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
            {
                memcpy(&szFormatStr32[2], &szPasteBuff[3 + (8 * iPasteIndex)], sizeof(uint8_t) * 8);

                rgPasteCol[iPasteIndex] = CurrGame->ConvPal32(static_cast<uint32_t>(strtoul(szFormatStr32, NULL, 16)));
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                OutputDebugString(L"Reverting color mode back to this game's desired color mode...\n");
                CurrGame->_SetColorMode(eCurrColMode);

                for (uint16_t iPasteIndex = 0; iPasteIndex < uPasteAmt; iPasteIndex++)
                {
                    rgPasteCol[iPasteIndex] = CurrGame->ConvPal32(CurrGame->ConvCol32(rgPasteCol[iPasteIndex]));
                }
            }
            break;
        }
        }

        if (!CurrPalCtrl->GetSelAmt())
        {
            const int nCopyAmt = (nWorkingAmt < uPasteAmt) ? nWorkingAmt : uPasteAmt;

            // Don't skip the first color: it is used in some cases
            memcpy(CurrPalCtrl->GetBasePal(), rgPasteCol, (sizeof(COLORREF) * nCopyAmt));
        }
        else
        {
            const uint8_t* rgSelIndex = CurrPalCtrl->GetSelIndex();
            COLORREF* crTargetPal = CurrPalCtrl->GetBasePal();

            for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
            {
                if (rgSelIndex[iPalIndex])
                {
                    // We could optimize this to never change the transparency color, but that
                    // can be at a varied position
                    crTargetPal[iPalIndex] = rgPasteCol[nIndexCtr];
                    CurrPalDef->pBasePal[iPalIndex + CurrPalSep->nStart] = rgPasteCol[nIndexCtr];

                    nIndexCtr++;

                    if (nIndexCtr >= uPasteAmt)
                    {
                        nIndexCtr = 0;
                    }
                }
            }
        }

        CurrPalCtrl->UpdateIndexAll();

        ImgDispCtrl->UpdateCtrl();
        CurrPalCtrl->UpdateCtrl();

        UpdateSliderSel();

        safe_delete_array(rgPasteCol);

        if (fWasColorImportedFromDifferentGame)
        {
            SetStatusText(IDS_PASTE_CROSSGAME);
        }
        else
        {
            SetStatusText(IDS_PASTED_COLOR);
        }
    }
}

void CPalModDlg::PasteToPaletteFromRGB(COLORREF clrIn, bool fAdvanceNext /* = false */, bool fRefreshUI /* = true */)
{
    m_strPasteStr.Format("%08x", clrIn);
    HandlePasteFromRGB(fAdvanceNext, fRefreshUI);
}

void CPalModDlg::HandlePasteFromRGB(bool fAdvanceNext /* = false*/, bool fRefreshUI /* = true */)
{
    // By the time we get here we know the incoming string is of one of these forms:
    //   #rrggbb    #aarrggbb   rrggbb  aarrggbb    0xrrggbb    0xaarrggbb
    const char* szPasteBuff = m_strPasteStr.GetBuffer();
    const uint32_t nCountChars = static_cast<uint32_t>(strlen(szPasteBuff));
    uint32_t nOffset = 0;

    if (szPasteBuff[0] == '#')
    {
        nOffset = 1;
    }

    uint32_t nXPos = nOffset;

    if ((nCountChars > 7) && (nCountChars < 11))
    {
        if ((szPasteBuff[nOffset + 1] == 'x') ||
            (szPasteBuff[nOffset + 1] == 'X'))
        {
            nXPos = nOffset + 2;
        }
    }

    const uint32_t nCountColorChars = nCountChars - nXPos;

    // Allow for either RGB or ARGB pastes
    const bool fIsARGB = (nCountColorChars == 8);

    char szFormatStrRGB[] = "0x000000";
    char szFormatStrARGB[] = "0x00000000";

    CGameClass* CurrGame = GetHost()->GetCurrGame();
    const uint8_t uCurrGFlag = CurrGame->GetGameFlag();
    const ColMode eCurrColMode = CurrGame->GetColorMode();

    const int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();

    //Notify the change data
    ProcChange();

    if (fIsARGB)
    {
        memcpy(&szFormatStrARGB[2], &szPasteBuff[nXPos], sizeof(uint8_t) * nCountColorChars);
    }
    else
    {
        memcpy(&szFormatStrRGB[2], &szPasteBuff[nXPos], sizeof(uint8_t) * nCountColorChars);
    }

    LPCSTR pszFormatStringToUse = fIsARGB ? szFormatStrARGB : szFormatStrRGB;

    DWORD argbColor = strtoul(pszFormatStringToUse, nullptr, 16);
    if (!CurrGame->AllowTransparency() || // if the game doesn't care about alpha or
        !fIsARGB) // we have an incoming RGB string
    {
        // force a usable alpha value
        argbColor |= (0xFF << 24);
    }

    COLORREF colPasteCol = (GetAValue(argbColor) << 24) +
        (GetRValue(argbColor) << 16) +
        (GetGValue(argbColor) << 8) +
        (GetBValue(argbColor));

    if (CurrGame->GameIsUsing16BitColor())
    {
        colPasteCol = CurrGame->ConvPal16(CurrGame->ConvCol16(colPasteCol));
    }
    else if (CurrGame->GameIsUsing24BitColor())
    {
        colPasteCol = CurrGame->ConvPal24(CurrGame->ConvCol24(colPasteCol));
    }
    else if (CurrGame->GameIsUsing32BitColor())
    {
        colPasteCol = CurrGame->ConvPal32(CurrGame->ConvCol32(colPasteCol));
    }

    if (!CurrPalCtrl->GetSelAmt())
    {
        // Stomp the full palette...
        COLORREF* crTargetPal = CurrPalCtrl->GetBasePal();

        for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
        {
            crTargetPal[iPalIndex] = colPasteCol;
            CurrPalDef->pBasePal[iPalIndex + CurrPalSep->nStart] = colPasteCol;
        }
    }
    else
    {
        const uint8_t* rgSelIndex = CurrPalCtrl->GetSelIndex();
        COLORREF* crTargetPal = CurrPalCtrl->GetBasePal();

        for (int iPalIndex = 0; iPalIndex < nWorkingAmt; iPalIndex++)
        {
            if (rgSelIndex[iPalIndex])
            {
                crTargetPal[iPalIndex] = colPasteCol;
                CurrPalDef->pBasePal[iPalIndex + CurrPalSep->nStart] = colPasteCol;
            }
        }
    }

    if (fAdvanceNext)
    {
        // Walk palette cursor
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Right);
    }

    if (fRefreshUI)
    {
        CurrPalCtrl->UpdateIndexAll();

        ImgDispCtrl->UpdateCtrl();
        CurrPalCtrl->UpdateCtrl();

        UpdateSliderSel();

        SetStatusText(IDS_PASTE_RGB);
    }
}

void CPalModDlg::OnEditPaste()
{
    if (!GetHost()->GetCurrGame())
    {
        SetStatusText(L"Load a game first");
    }
    else if (IsPasteFromPalMod())
    {
        HandlePasteFromPalMod();
    }
    else if (IsPasteRGB())
    {
        HandlePasteFromRGB();
    }
    else
    {
        SetStatusText(IDS_PASTE_UNSUPPORTED);
    }
}

void CPalModDlg::NewUndoData(BOOL fUndo)
{
    sPalRedir* rgRedir = MainPalGroup->GetRedir();
    sPalSep* srcSep = MainPalGroup->GetSep(rgRedir[m_nCurrSelPal].nDefIndex, rgRedir[m_nCurrSelPal].nSepIndex);

    if (srcSep)
    {
        sPalDef* srcDef = MainPalGroup->GetPalDef(rgRedir[m_nCurrSelPal].nDefIndex);

        CUndoNode* NewNode = fUndo ? UndoProc.NewUndo() : UndoProc.NewRedo();

        const int nPalSz = srcSep->nAmt;

        NewNode->nPalIndex = static_cast<int>(m_nCurrSelPal);
        NewNode->nPalSz = nPalSz;

        NewNode->rgPalData = new COLORREF[nPalSz];
        NewNode->rgBasePalData = new COLORREF[nPalSz];

        memcpy(NewNode->rgPalData, &srcDef->pPal[srcSep->nStart], nPalSz * sizeof(COLORREF));
        memcpy(NewNode->rgBasePalData, &srcDef->pBasePal[srcSep->nStart], nPalSz * sizeof(COLORREF));

        //Clear Redo data on undo
        //UndoProc.DeleteRedoList();
    }
}

void CPalModDlg::DoUndoRedo(BOOL fUndo)
{
    //Copy data to the program
    CUndoNode* PopNode = fUndo ? UndoProc.PopUndo() : UndoProc.PopRedo();

    sPalRedir* rgRedir = MainPalGroup->GetRedir();
    sPalSep* srcSep = MainPalGroup->GetSep(rgRedir[PopNode->nPalIndex].nDefIndex, rgRedir[PopNode->nPalIndex].nSepIndex);

    if (srcSep)
    {
        NewUndoData(!fUndo);

        sPalDef* srcDef = MainPalGroup->GetPalDef(rgRedir[PopNode->nPalIndex].nDefIndex);
        memcpy(&srcDef->pPal[srcSep->nStart], PopNode->rgPalData, srcSep->nAmt * sizeof(COLORREF));
        memcpy(&srcDef->pBasePal[srcSep->nStart], PopNode->rgBasePalData, srcSep->nAmt * sizeof(COLORREF));

        //Refresh slider selection
        if (PopNode->nPalIndex == m_nCurrSelPal)
        {
            UpdateSliderSel();
        }

        //Update the img/pal ctrls
        m_PalHost.GetPalCtrl(PopNode->nPalIndex)->UpdateIndexAll();

        m_PalHost.GetPalCtrl(PopNode->nPalIndex)->UpdateCtrl();
        ImgDispCtrl->UpdateCtrl();

        // OnBnUpdate locks in changes at an unknown point on the undoredo stack, so just mark dirty
        m_fFileChanged = TRUE;
        m_fPalChanged = TRUE;

        // We've taken ownership of the now-orphaned node, so destroy it now
        delete PopNode;
    }
}

void CPalModDlg::UpdateSettingsMenuItems()
{
    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_SHOW32BITRGB, m_fForceShowAs32bitColor ? MF_CHECKED : MF_UNCHECKED);

    bool show8ColorPerLine = (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE);

    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | (show8ColorPerLine ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND | (show8ColorPerLine ? MF_UNCHECKED : MF_CHECKED));

    pSettMenu->CheckMenuItem(ID_SETTINGS_EXTCOPYDATA, m_fShowExtraCopyData ? MF_CHECKED : MF_UNCHECKED);
}

void CPalModDlg::OnSettingsSettings()
{
    CSettDlg SettDlg;

    SettDlg.m_fAllowAlphaChanges = CGameClass::AllowTransparencyEdits();
    SettDlg.m_fUpdSupp = CGameClass::m_ShouldUsePostSetPalProc;
    SettDlg.m_fPreviewIsAChild = !CRegProc::ShouldForcePeerPreviewWindow();

    const BOOL oldAlphaSetting = SettDlg.m_fAllowAlphaChanges;

    if (SettDlg.DoModal() == IDOK)
    {
        if (SettDlg.m_fAllowAlphaChanges && !oldAlphaSetting)
        {
            CString strMessage;
            if (strMessage.LoadString(IDS_WARN_TRANSPARENCY))
            {
                SettDlg.m_fAllowAlphaChanges = (MessageBox(strMessage, GetHost()->GetAppName(), MB_ICONEXCLAMATION | MB_YESNO) == IDYES);
            }
        }

        CGameClass::AllowTransparencyEdits(SettDlg.m_fAllowAlphaChanges);
        CGameClass::m_ShouldUsePostSetPalProc = SettDlg.m_fUpdSupp;
        CRegProc::SetForcePeerPreviewWindow(!SettDlg.m_fPreviewIsAChild);

        if ((oldAlphaSetting != SettDlg.m_fAllowAlphaChanges) &&
            (GetHost()->GetCurrGame()))
        {
            // There are loaded palettes: ensure that the enable/disable state of alpha controls is correct
            OnPalSelChange(0);
        }
    }
}

void CPalModDlg::OnChangeExtendedCopyData()
{
    m_fShowExtraCopyData = !m_fShowExtraCopyData;

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu
    pSettMenu->CheckMenuItem(ID_SETTINGS_EXTCOPYDATA, m_fShowExtraCopyData ? MF_CHECKED : MF_UNCHECKED);
}

void CPalModDlg::OnEditUndo()
{
    if (UndoProc.GetUndoCount())
    {
        DoUndoRedo(TRUE);
    }
}

void CPalModDlg::OnEditRedo()
{
    if (UndoProc.GetRedoCount())
    {
        DoUndoRedo(FALSE);
    }
}

void CPalModDlg::OnEditSelectAll()
{
    if (CurrPalCtrl)
    {
        // Update the CJunk controls
        CurrPalCtrl->SelectAll();
        CurrPalCtrl->UpdateCtrl();
        // Update the Edit Color options.
        UpdateSliderSel();
    }
}

void CPalModDlg::OnEditSelectNone()
{
    if (CurrPalCtrl)
    {
        // Update the CJunk controls
        CurrPalCtrl->ClearSelected();
        CurrPalCtrl->UpdateCtrl();
        // Update the Edit Color options.
        UpdateSliderSel();
    }
}

DWORD CPalModDlg::GetColorAtCurrentMouseCursorPosition(int ptX /* = -1 */, int ptY /* = -1 */)
{
    HDC hdc = ::GetWindowDC(0);
    DWORD colorAsDWORD = CLR_INVALID;

    if (hdc != nullptr)
    {
        POINT ptCursor = { ptX, ptY };

        if (ptCursor.x == -1)
        {
            if (!GetCursorPos(&ptCursor))
            {
                ptCursor.x = -1;
            }
        }

        if (ptCursor.x != -1)
        {
            ShowCursor(FALSE);

            // We need the cursor hidden.  Some apps don't redraw off of SetCursor, so use SendInput to force a redraw of
            // any under-cursor highlights the app might be doing.  (Notably MSPaint shows the brush/pen tip underneath the 
            // cursor until it's moved away.)
            INPUT input = { INPUT_MOUSE, 0, 0, 0, MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_VIRTUALDESK };
            SendInput(1, &input, sizeof(input));

            const COLORREF colorAtPixel = GetPixel(hdc, ptCursor.x, ptCursor.y);

            ShowCursor(TRUE);
            SetCursorPos(ptCursor.x, ptCursor.y);

            // COLORREF is aaBBggRR we want aaRRggBB
            colorAsDWORD = (0xFF << 24) | (GetRValue(colorAtPixel) << 16) | (GetGValue(colorAtPixel) << 8) | GetBValue(colorAtPixel);

            CString strOutput;
            strOutput.Format(L"Color at cursor is: 0x%08x\n", colorAsDWORD);
            OutputDebugString(strOutput);
        }

        ::ReleaseDC(::GetDesktopWindow(), hdc);
    }

    return colorAsDWORD;
}

bool CPalModDlg::SelectMatchingColorsInPalette(DWORD dwColorToMatch, DWORD dwBackgroundColor)
{
    bool fFoundColor = false;
    if (CurrPalCtrl)
    {
        // Update the CJunk controls to highlight the color desired
        fFoundColor = CurrPalCtrl->SelectMatchingColorsInPalette(dwColorToMatch, dwBackgroundColor);
        CurrPalCtrl->UpdateCtrl();
        // Update the Edit Color options.
        UpdateSliderSel();
    }

    return fFoundColor;
}

void CPalModDlg::CustomEditProc(void* pPalCtrl, UINT_PTR nCtrlId, int nMethod)
{
    switch (nMethod)
    {
    case CUSTOM_COPY:
        OnEditCopy();
        break;
    case CUSTOM_COPYOFFSET:
        OnEditCopyOffset();
        break;
    case CUSTOM_COPYBINARY:
        OnEditCopyBinary();
        break;
    case CUSTOM_PASTE:
        OnEditPaste();
        break;
    case CUSTOM_SALL:
        OnEditSelectAll();
        break;
    case CUSTOM_SNONE:
        OnEditSelectNone();
        break;
    }
}

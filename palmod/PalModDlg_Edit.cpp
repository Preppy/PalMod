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
    if (!bOleInit)
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

void CPalModDlg::OnPasteColorAtPointer()
{
    OnCopyColorAtPointer();
    OnEditPaste();
}

DROPEFFECT CPalDropTarget::OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point)
{
    m_currentEffectState = DROPEFFECT_NONE;

    if (GetHost()->GetCurrGame())
    {
        if (pDataObject->IsDataAvailable(CF_HDROP))
        {
            HGLOBAL hg;
            HDROP hDrop;

            // Get the HDROP data from the data object.
            hg = pDataObject->GetGlobalData(CF_HDROP);

            if (!hg)
            {
                return DROPEFFECT_NONE;
            }

            hDrop = (HDROP)GlobalLock(hg);

            if (hDrop)
            {
                UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

                if (nFilesAvailable == 1)
                {
                    wchar_t szPath[MAX_PATH];

                    if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                    {
                        // It's a file: is it a file type we know about?
                        // act, pal, png
                        LPCWSTR pszExtension = wcsrchr(szPath, L'.');

                        if (pszExtension)
                        {
                            if ((_wcsicmp(pszExtension, L".act") == 0) ||
                                (_wcsicmp(pszExtension, L".pal") == 0) ||
                                (_wcsicmp(pszExtension, L".png") == 0) ||
                                (_wcsicmp(pszExtension, L".raw") == 0))
                            {
                                m_currentEffectState = DROPEFFECT_COPY;
                            }
                        }
                    }
                }
            }

            GlobalUnlock(hg);
        }
    }

    return m_currentEffectState;
}

BOOL CPalDropTarget::OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point)
{
    if (GetHost()->GetCurrGame())
    {
        LPCWSTR pszExtension = nullptr;
        wchar_t szPath[MAX_PATH];

        if (pDataObject->IsDataAvailable(CF_HDROP))
        {
            HGLOBAL hg;
            HDROP hDrop;

            // Get the HDROP data from the data object.
            hg = pDataObject->GetGlobalData(CF_HDROP);

            if (!hg)
            {
                return FALSE;
            }

            hDrop = (HDROP)GlobalLock(hg);

            if (hDrop)
            {
                UINT nFilesAvailable = DragQueryFile(hDrop, 0xFFFFFFFF, nullptr, 0);

                if (nFilesAvailable == 1)
                {
                    if (DragQueryFile(hDrop, 0, szPath, ARRAYSIZE(szPath)))
                    {
                        // we just need the filename right now: test later
                        pszExtension = wcsrchr(szPath, L'.');
                    }
                }
            }

            GlobalUnlock(hg);
        }

        if (pszExtension)
        {
            if (_wcsicmp(pszExtension, L".act") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromACT(szPath);
            }
            else if (_wcsicmp(pszExtension, L".pal") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromPAL(szPath);
            }
            else if (_wcsicmp(pszExtension, L".png") == 0)
            {
                GetHost()->GetPalModDlg()->LoadPaletteFromPNG(szPath);
            }
            else if (_wcsicmp(pszExtension, L".raw") == 0)
            {
                GetHost()->GetPreviewDlg()->LoadCustomSpriteFromPath(0, SpriteImportDirection::TopDown, szPath);
            }
        }
    }

    return TRUE;
}

void CPalModDlg::OnEditCopy()
{
    g_DebugHelper.AddCanary(k_ContextMenuCopyCanary);

    g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "OnEditCopy::Start\r\n");

    if (bEnabled)
    {
        CStringA strDebugInfo;
        CStringA CopyText;
        CStringA FormatTxt;

        if (!bOleInit)
        {
            g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "OnEditCopy:: Failed OLEInit\r\n");
            return;
        }

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tCreating OLE source...\r\n");
        COleDataSource* pSource = new COleDataSource();
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tCreating shared file...\r\n");
        CSharedFile sf(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);

        CGameClass* CurrGame = GetHost()->GetCurrGame();
        strDebugInfo.Format("\tGetting palette for game ID %u aka %S\r\n", CurrGame->GetGameFlag(), CurrGame->GetGameName());
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, strDebugInfo);
        CJunk* CurrPal = m_PalHost.GetNotifyPal();
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tFiguring out total palette size...");
        int nWorkingAmt = CurrPal->GetWorkingAmt();
        strDebugInfo.Format(" %u colors.\r\n\tGetting selection data\r\n", nWorkingAmt);
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, strDebugInfo);
        UINT8* pSelIndex = CurrPal->GetSelIndex();

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tDetermining selection length...");
        UINT16 nPaletteSelectionLength = (CurrPal->GetSelAmt() ? CurrPal->GetSelAmt() : nWorkingAmt) + k_nASCIICharacterOffset;
        UINT8 uCopyFlag1;
        // We use a WCHAR as a UINT8 value to store the size.  This is compatible with all versions of palmod.
        // For the new large palette support, this would overflow, so we're just going to set it to 0.
        // This allows old palmod to ignore the data and current palmod to work by figuring out the size itself.
        UINT8 uCopyFlag2 = (nPaletteSelectionLength < 0xFF) ? (UINT8)nPaletteSelectionLength : k_nASCIICharacterOffset;

        strDebugInfo.Format(" %u color(s) are selected.\r\n\tChecking if selection is complete or partial...", nPaletteSelectionLength - k_nASCIICharacterOffset);
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, strDebugInfo);
        BOOL bCopyAll = !CurrPal->GetSelAmt();
        bool fHitError = false;

        strDebugInfo.Format(" %s.\r\n\tChecking color mode\r\n", bCopyAll ? "complete" : "partial");
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, strDebugInfo);

        // You want to update this table so that older or newer versions of PalMod know the bpp of the 
        // copied colors.
        // Here we map the color mode to the poster child game for historical color modes.  For all new
        // color modes we directly store the color mode the 2nd byte to keep life simple
        UINT8 cbColor = 2;

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
        case ColMode::COLMODE_RGB555_LE:
            // RGB555
            uCopyFlag1 = SFIII3_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB555_BE:
            // RGB555
            uCopyFlag1 = SFIII3_D + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB666_NEOGEO:
            // RGB666
            uCopyFlag1 = NEOGEO_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_RGB555_SHARP:
            uCopyFlag1 = DANKUGA_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_ARGB1888:
            cbColor = 4;
            uCopyFlag1 = DBFCI_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_ARGB7888:
            cbColor = 4;
            uCopyFlag1 = GGXXACR_S + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_ARGB8888:
            cbColor = 4;
            uCopyFlag1 = UNICLR_A + k_nASCIICharacterOffset;
            break;
        case ColMode::COLMODE_xRGB888:
        case ColMode::COLMODE_xBGR888:
        case ColMode::COLMODE_ARGB1888_32STEPS:
        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_ABGR8888:
        default:
            {
                // OK, this overflows the 127 character ascii table we use.
                // But since we've made copyflag2 obsolete, let's just hijack that and stuff the color mode there.
                uCopyFlag1 = k_nEncodedColorStringOverflowIndicator;
                uCopyFlag2 = min(k_nASCIIMaxValue, (UINT8)CurrGame->GetColorMode() + k_nASCIICharacterOffset);
                cbColor = GetCbForColMode(CurrGame->GetColorMode());
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

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tFormatting colors\r\n");

        int nInitialOffsetDelta = 0;
        bool fHaveSetDelta = false;

        for (int i = 0; i < nWorkingAmt; i++)
        {
            if (pSelIndex[i] || bCopyAll)
            {
                if (!fHaveSetDelta)
                {
                    fHaveSetDelta = true;
                    nInitialOffsetDelta = i;
                }

                switch (cbColor)
                {
                default:
                case 2:
                {
                    UINT16 uCurrData = CurrGame->ConvCol16(CurrPal->GetBasePal()[i]);

                    FormatTxt.Format("%04X", uCurrData);

                    //Only changed:
                    //FormatTxt.Format("%04X", (UINT16)((uCurrData << 8) | (uCurrData >> 8) & (UINT16)0xFF0F));
                    break;
                }
                case 3:
                {
                    UINT32 uCurrData = CurrGame->ConvCol24(CurrPal->GetBasePal()[i]);
                    FormatTxt.Format("%06X", uCurrData);
                    break;
                }
                case 4:
                {
                    UINT32 uCurrData = CurrGame->ConvCol32(CurrPal->GetBasePal()[i]);

                    FormatTxt.Format("%08X", uCurrData);
                    break;
                }
                }

                CopyText.Append(FormatTxt);
            }
        }

        CopyText.Append(")");

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tWriting to shared file\r\n");

        sf.Write(CopyText, CopyText.GetLength());

        HGLOBAL hMem = sf.Detach();
        if (!hMem)
        {
            g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "OnEditCopy::Memory detach failed\r\n");
            return;
        }

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tCacheing to global data\r\n");
        pSource->CacheGlobalData(CF_TEXT, hMem);

        // The above handles copying colors between palmod
        // The below handles generating the string pasted to the Unicode clipboard. This contains more useful data.
        CString strUnicodeData;

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tDebug output part\r\n");
        strUnicodeData.Format(L"%S", CopyText.GetString());
        if (m_fShowExtraCopyData)
        {
            CString strFormatU;

            strUnicodeData.Append(L"\r\n\r\nThe above data starting at '(' and ending at ')' is the color string you give to PalMod to copy a color, as in (\"\"0000) .");
            strUnicodeData.Append(L" PalMod handles this automatically on CTRL+C /CTRL+V, but you're seeing 'secret' extra data right now using clipboard tricks.");
            strUnicodeData.Append(L" The following data is additional debug information useful for ROM hacking:");

            strFormatU.Format(L"\r\n\r\nThis palette begins in the ROM at location:\r\n\t0x%x\r\n", CurrGame->GetCurrentPaletteLocation());
            strUnicodeData.Append(strFormatU);

            if (nInitialOffsetDelta != 0)
            {
                strFormatU.Format(L"The current selection begins at ROM location:\r\n\t0x%x\r\n", CurrGame->GetCurrentPaletteLocation() + (nInitialOffsetDelta * cbColor));
                strUnicodeData.Append(strFormatU);
            }

            strUnicodeData.Append(L"PalMod's version of the data in the ROM at that location reads:\r\n\t");

            for (int i = 0; i < nWorkingAmt; i++)
            {
                if (pSelIndex[i] || bCopyAll)
                {
                    switch (cbColor)
                    {
                    default:
                    case 2:
                    {
                        UINT16 uCurrData = CurrGame->ConvCol16(CurrPal->GetBasePal()[i]);
                        uCurrData = _byteswap_ushort(uCurrData);

                        strFormatU.Format(L"%02X %02X ", (uCurrData & 0xFF00) >> 8, uCurrData & 0x00FF);
                        break;
                    }
                    case 3:
                    {
                        UINT32 uCurrData = CurrGame->ConvCol24(CurrPal->GetBasePal()[i]);
                        // we deliberately drop alpha here
                        strFormatU.Format(L"%02X %02X %02X ", (uCurrData & 0xFF0000) >> 16, (uCurrData & 0xFF00) >> 8, (uCurrData & 0xFF));
                        break;
                    }
                    case 4:
                    {
                        UINT32 uCurrData = CurrGame->ConvCol32(CurrPal->GetBasePal()[i]);
                        uCurrData = _byteswap_ulong(uCurrData);

                        strFormatU.Format(L"%02X %02X %02X %02X ", (uCurrData & 0xFF000000) >> 24, (uCurrData & 0xFF0000) >> 16,
                                                                   (uCurrData & 0xFF00) >> 8, uCurrData & 0xFF);
                        break;
                    }
                    }

                    strUnicodeData.Append(strFormatU);
                }
            }

            strUnicodeData.Append(L"\r\n\r\nYou can turn off this secret extended data by going to PalMod's Settings menu.\r\n");
        }

        OutputDebugString(strUnicodeData.GetString());

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tGenerating unicode form\r\n");

        CSharedFile sfUnicode(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);
        sfUnicode.Write(strUnicodeData, strUnicodeData.GetLength() * sizeof(WCHAR));
        HGLOBAL hMemUnicode = sfUnicode.Detach();
        if (hMemUnicode)
        {
            g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tCacheing unicode form\r\n");
            pSource->CacheGlobalData(CF_UNICODETEXT, hMemUnicode);
        }

        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tSetting clipboard...");
        EmptyClipboard();
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, " emptied, ");
        pSource->SetClipboard();
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "set, ");
        pSource->FlushClipboard();
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "and saved.");
        CloseClipboard();
        g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "\tComplete!\r\n");
    }

    g_DebugHelper.DebugPrint(k_ContextMenuCopyCanary, "OnEditCopy::Exit\r\n");
    
    g_DebugHelper.FreeCanary(k_ContextMenuCopyCanary);
}

BOOL CPalModDlg::IsPasteFromPalMod()
{
    COleDataObject obj;
    BOOL bCanPaste = FALSE;

    if ((!obj.AttachClipboard()) ||
        (!obj.IsDataAvailable(CF_TEXT)))
    {
        return FALSE;
    }

    HGLOBAL hmem = obj.GetGlobalData(CF_TEXT);
    CMemFile sf((BYTE*) ::GlobalLock(hmem), (UINT)::GlobalSize(hmem));

    LPSTR szTempStr = m_strPasteStr.GetBufferSetLength((int)::GlobalSize(hmem));
    sf.Read(szTempStr, (UINT)::GlobalSize(hmem));
    ::GlobalUnlock(hmem);

    m_strPasteStr.Remove(' ');
    m_strPasteStr.Remove('\n');

    if (szTempStr[0] == '(')
    {
        if ((szTempStr[1] - k_nASCIICharacterOffset) < NUM_GAMES) //Gameflag
        {
            UINT16 nPaletteCount = 0;
            UINT8 cbColorSize = GetCbForColorForGameFlag(szTempStr[1] - k_nASCIICharacterOffset, szTempStr[2]);

            if (cbColorSize != 0)
            {
                nPaletteCount = (UINT16)((strlen(szTempStr) - 3) / (cbColorSize * 2));
            }

            if (nPaletteCount <= CRegProc::GetMaxPalettePageSize())
            {
                UINT16 nTerminalLocation = (UINT16)min(strlen(szTempStr), (size_t)(nPaletteCount * (cbColorSize * 2)) + 3);
                
                if (szTempStr[nTerminalLocation] == ')')
                {
                    bCanPaste = TRUE;
                }
                else
                {
                    // So we're in "technically wrong" space here, but maybe it's workable...
                    nPaletteCount = (UINT16)((strlen(szTempStr) - 3) / (cbColorSize * 2));

                    nTerminalLocation = (UINT16)min(strlen(szTempStr), (size_t)(nPaletteCount * (cbColorSize * 2)) + 3);

                    if (szTempStr[nTerminalLocation] == ')')
                    {
                        bCanPaste = TRUE;
                    }
                }
            }
        }
    }

    return bCanPaste;
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
    CMemFile sf((BYTE*) ::GlobalLock(hmem), (UINT)::GlobalSize(hmem));

    LPSTR szTempStr = m_strPasteStr.GetBufferSetLength((int)::GlobalSize(hmem));
    sf.Read(szTempStr, (UINT)::GlobalSize(hmem));
    ::GlobalUnlock(hmem);

    m_strPasteStr.Remove(' ');
    m_strPasteStr.Remove('\n');

    size_t nCountChars = strlen(szTempStr);
    size_t nOffset = 0;

    if (szTempStr[0] == '#')
    {
        nOffset = 1;
    }

    size_t nXPos = nOffset;

    if ((nCountChars > 7) && (nCountChars < 11))
    {
        if ((szTempStr[nOffset + 1] == 'x') ||
            (szTempStr[nOffset + 1] == 'X'))
        {
            nXPos = nOffset + 2;
        }
    }

    size_t nCountColorChars = nCountChars - nXPos;

    // Accept rrggbb or aarrggbb
    if ((nCountColorChars == 6) || (nCountColorChars == 8))
    {
        fCanPaste = TRUE;

        for (size_t nIndex = nXPos; nIndex < nCountChars; nIndex++)
        {
            if (isxdigit(szTempStr[nIndex]) == 0)
            {
                fCanPaste = FALSE;
                break;
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
    COleDataObject obj;

    char* szPasteBuff = m_strPasteStr.GetBuffer();

    // Do something with the data in 'buffer'
    UINT8 uPasteGFlag1 = szPasteBuff[1] - k_nASCIICharacterOffset;
    UINT8 uPasteGFlag2 = szPasteBuff[2];
    UINT8 cbColor = GetCbForColorForGameFlag(uPasteGFlag1, uPasteGFlag2);

    // We want the number of colors per paste minus the () and game flag
    UINT16 uPasteAmt = (UINT16)((strlen(szPasteBuff) - 3) / (cbColor * 2));

    if (uPasteAmt)
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        UINT8 uCurrGFlag = CurrGame->GetGameFlag();
        ColMode eCurrColMode = CurrGame->GetColorMode();
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
                eColModeForPastedColor = ColMode::COLMODE_ARGB1888;
                break;
            }
            case GGXXACR_S:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_ARGB7888;
                break;
            }
            case UNICLR_A:
                // Don't change this code.  It automatically handles new games and color modes.
            {
                eColModeForPastedColor = ColMode::COLMODE_ARGB8888;
                break;
            }
            case COTA_A:
            case MSHVSF_A:
            case MSH_A:
            case MVC2_A:
            case MVC2_A_DIR:
            case MVC2_D:
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
                eColModeForPastedColor = ColMode::COLMODE_RGB555_LE;
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
            case KOF98_A:
            case KOF99AE_A:
            case KOF01_A:
            case KOF02_A:
            case KOF03_A:
            case KOTM_A:
            case LASTBLADE2_A:
            case MATRIMELEE_A:
            case NeoBomberman_A:
            case NEOGEO_A:
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
                eColModeForPastedColor = DecodeColorFlag(uPasteGFlag2);
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
            for (UINT16 i = 0; i < uPasteAmt; i++)
            {
                memcpy(&szFormatStr16[2], &szPasteBuff[3 + (4 * i)], sizeof(UINT8) * 4);

                rgPasteCol[i] = CurrGame->ConvPal16((UINT16)strtoul(szFormatStr16, NULL, 16));

                if (((UINT8*)rgPasteCol)[(i * 4) + 3] != 0)
                {
                    fAnyValueHasAlpha = true;
                    break;
                }
            }

            for (UINT16 i = 0; i < uPasteAmt; i++)
            {
                memcpy(&szFormatStr16[2], &szPasteBuff[3 + (4 * i)], sizeof(UINT8) * 4);

                rgPasteCol[i] = CurrGame->ConvPal16((UINT16)strtoul(szFormatStr16, NULL, 16));

                // Allow Alpha only if both:
                //      the current game accepts it, and
                //      the incoming data has been proven to know about alpha
                if (!CurrGame->AllowTransparency() || !fAnyValueHasAlpha)
                {
                    // this game doesn't use/want alpha, but we need alpha to display properly
                    ((UINT8*)rgPasteCol)[(i * 4) + 3] |= 0xFF;
                }
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                OutputDebugString(L"Reverting color mode back to this game's desired color mode...\n");
                CurrGame->_SetColorMode(eCurrColMode);

                for (UINT16 i = 0; i < uPasteAmt; i++)
                {
                    rgPasteCol[i] = CurrGame->ConvPal16(CurrGame->ConvCol16(rgPasteCol[i]));
                }
            }
            break;
        }
        case 3:
        {
            char szFormatStr24[] = "0x000000";

            for (UINT16 i = 0; i < uPasteAmt; i++)
            {
                memcpy(&szFormatStr24[2], &szPasteBuff[3 + (6 * i)], sizeof(UINT8) * 6);

                rgPasteCol[i] = CurrGame->ConvPal24((UINT32)strtoul(szFormatStr24, NULL, 16));
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                OutputDebugString(L"Reverting color mode back to this game's desired color mode...\n");
                CurrGame->_SetColorMode(eCurrColMode);

                for (UINT16 i = 0; i < uPasteAmt; i++)
                {
                    rgPasteCol[i] = CurrGame->ConvPal24(CurrGame->ConvCol24(rgPasteCol[i]));
                }
            }
            break;
        }
        case 4:
        {
            char szFormatStr32[] = "0x00000000";

            for (UINT16 i = 0; i < uPasteAmt; i++)
            {
                memcpy(&szFormatStr32[2], &szPasteBuff[3 + (8 * i)], sizeof(UINT8) * 8);

                rgPasteCol[i] = CurrGame->ConvPal32((UINT32)strtoul(szFormatStr32, NULL, 16));
            }

            if (eCurrColMode != eColModeForPastedColor)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                OutputDebugString(L"Reverting color mode back to this game's desired color mode...\n");
                CurrGame->_SetColorMode(eCurrColMode);

                for (UINT16 i = 0; i < uPasteAmt; i++)
                {
                    rgPasteCol[i] = CurrGame->ConvPal32(CurrGame->ConvCol32(rgPasteCol[i]));
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
            UINT8* rgSelIndex = CurrPalCtrl->GetSelIndex();
            COLORREF* crTargetPal = CurrPalCtrl->GetBasePal();

            for (int i = 0; i < nWorkingAmt; i++)
            {
                if (rgSelIndex[i])
                {
                    // We could optimize this to never change the transparency color, but that
                    // can be at a varied position
                    crTargetPal[i] = rgPasteCol[nIndexCtr];
                    CurrPalDef->pBasePal[i + CurrPalSep->nStart] = rgPasteCol[nIndexCtr];

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

void CPalModDlg::HandlePasteFromRGB()
{
    // By the time we get here we know the incoming string is of one of these forms:
    //   #rrggbb    #aarrggbb   rrggbb  aarrggbb    0xrrggbb    0xaarrggbb
    COleDataObject obj;

    char* szPasteBuff = m_strPasteStr.GetBuffer();
    size_t nCountChars = strlen(szPasteBuff);
    size_t nOffset = 0;

    if (szPasteBuff[0] == '#')
    {
        nOffset = 1;
    }

    size_t nXPos = nOffset;

    if ((nCountChars > 7) && (nCountChars < 11))
    {
        if ((szPasteBuff[nOffset + 1] == 'x') ||
            (szPasteBuff[nOffset + 1] == 'X'))
        {
            nXPos = nOffset + 2;
        }
    }

    size_t nCountColorChars = nCountChars - nXPos;

    // Allow for either RGB or ARGB pastes
    bool fIsARGB = (nCountColorChars == 8);

    char szFormatStrRGB[] = "0x000000";
    char szFormatStrARGB[] = "0x00000000";

    CGameClass* CurrGame = GetHost()->GetCurrGame();
    UINT8 uCurrGFlag = CurrGame->GetGameFlag();
    ColMode eCurrColMode = CurrGame->GetColorMode();

    int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();

    //Notify the change data
    ProcChange();

    if (fIsARGB)
    {
        memcpy(&szFormatStrARGB[2], &szPasteBuff[nXPos], sizeof(UINT8) * nCountColorChars);
    }
    else
    {
        memcpy(&szFormatStrRGB[2], &szPasteBuff[nXPos], sizeof(UINT8) * nCountColorChars);
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

        for (int i = 0; i < nWorkingAmt; i++)
        {
            crTargetPal[i] = colPasteCol;
            CurrPalDef->pBasePal[i + CurrPalSep->nStart] = colPasteCol;
        }
    }
    else
    {
        UINT8* rgSelIndex = CurrPalCtrl->GetSelIndex();
        COLORREF* crTargetPal = CurrPalCtrl->GetBasePal();

        for (int i = 0; i < nWorkingAmt; i++)
        {
            if (rgSelIndex[i])
            {
                crTargetPal[i] = colPasteCol;
                CurrPalDef->pBasePal[i + CurrPalSep->nStart] = colPasteCol;
            }
        }
    }

    CurrPalCtrl->UpdateIndexAll();

    ImgDispCtrl->UpdateCtrl();
    CurrPalCtrl->UpdateCtrl();

    UpdateSliderSel();

    SetStatusText(IDS_PASTE_RGB);
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

void CPalModDlg::NewUndoData(BOOL bUndo)
{
    CUndoNode* NewNode = bUndo ? UndoProc.NewUndo() : UndoProc.NewRedo();

    sPalRedir* rgRedir = MainPalGroup->GetRedir();
    sPalDef* srcDef = MainPalGroup->GetPalDef(rgRedir[nCurrSelPal].nDefIndex);
    sPalSep* srcSep = MainPalGroup->GetSep(rgRedir[nCurrSelPal].nDefIndex, rgRedir[nCurrSelPal].nSepIndex);

    int nPalSz = srcSep->nAmt;

    NewNode->nPalIndex = (int)nCurrSelPal;
    NewNode->nPalSz = nPalSz;

    NewNode->rgPalData = new COLORREF[nPalSz];
    NewNode->rgBasePalData = new COLORREF[nPalSz];

    memcpy(NewNode->rgPalData, &srcDef->pPal[srcSep->nStart], nPalSz * sizeof(COLORREF));
    memcpy(NewNode->rgBasePalData, &srcDef->pBasePal[srcSep->nStart], nPalSz * sizeof(COLORREF));

    //Clear Redo data on undo
    //UndoProc.DeleteRedoList();
}

void CPalModDlg::DoUndoRedo(BOOL bUndo)
{
    CUndoNode* PopNode = bUndo ? UndoProc.PopUndo() : UndoProc.PopRedo();

    NewUndoData(!bUndo);

    //Copy data to the program
    sPalRedir* rgRedir = MainPalGroup->GetRedir();
    sPalDef* srcDef = MainPalGroup->GetPalDef(rgRedir[PopNode->nPalIndex].nDefIndex);
    sPalSep* srcSep = MainPalGroup->GetSep(rgRedir[PopNode->nPalIndex].nDefIndex, rgRedir[PopNode->nPalIndex].nSepIndex);

    memcpy(&srcDef->pPal[srcSep->nStart], PopNode->rgPalData, srcSep->nAmt * sizeof(COLORREF));
    memcpy(&srcDef->pBasePal[srcSep->nStart], PopNode->rgBasePalData, srcSep->nAmt * sizeof(COLORREF));

    //Refresh slider selection
    if (PopNode->nPalIndex == nCurrSelPal)
    {
        UpdateSliderSel();
    }

    //Update the img/pal ctrls
    m_PalHost.GetPalCtrl(PopNode->nPalIndex)->UpdateIndexAll();

    m_PalHost.GetPalCtrl(PopNode->nPalIndex)->UpdateCtrl();
    ImgDispCtrl->UpdateCtrl();

    // OnBnUpdate locks in changes at an unknown point on the undoredo stack, so just mark dirty
    fFileChanged = TRUE;  
    bPalChanged = TRUE;
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
    SettDlg.m_bUpdSupp = CGameClass::bPostSetPalProc;

    const BOOL oldAlphaSetting = SettDlg.m_fAllowAlphaChanges;

    if (SettDlg.DoModal() == IDOK)
    {
        if (SettDlg.m_fAllowAlphaChanges)
        {
            CString strMessage;
            if (strMessage.LoadString(IDS_WARN_TRANSPARENCY))
            {
                SettDlg.m_fAllowAlphaChanges = (MessageBox(strMessage, GetHost()->GetAppName(), MB_ICONEXCLAMATION | MB_YESNO) == IDYES);
            }
        }

        CGameClass::AllowTransparencyEdits(SettDlg.m_fAllowAlphaChanges);
        CGameClass::bPostSetPalProc = SettDlg.m_bUpdSupp;

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
    HDC hdc = ::GetDC(0);
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
            COLORREF colorAtPixel = GetPixel(hdc, ptCursor.x, ptCursor.y);
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

bool CPalModDlg::SelectMatchingColorsInPalette(DWORD dwColorToMatch)
{
    bool fFoundColor = false;
    if (CurrPalCtrl)
    {
        // Update the CJunk controls to highlight the color desired
        fFoundColor = CurrPalCtrl->SelectMatchingColorsInPalette(dwColorToMatch);
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

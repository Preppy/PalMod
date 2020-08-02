#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"

#include "afxole.h"
#include "afxadv.h"

#include "SettDlg.h"

#include "Game\GameDef.h"
#include "Game\GameClass.h"
#include "Game\Game_MVC2_D.h"

// We use the first non-white space printable character '!' as the base for edit/paste calculations.
constexpr auto k_nASCIICharacterOffset = 33;

void CPalModDlg::OnEditCopy()
{
    if (bEnabled)
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        CJunk* CurrPal = m_PalHost.GetNotifyPal();
        int nWorkingAmt = CurrPal->GetWorkingAmt();
        UINT8* pSelIndex = CurrPal->GetSelIndex();

        UINT16 nPaletteSelectionLength = (CurrPal->GetSelAmt() ? CurrPal->GetSelAmt() : nWorkingAmt) + k_nASCIICharacterOffset;
        UINT8 uCopyFlag1;
        // We use a TCHAR UINT8 value to store the size.  This is compatible with all versions of palmod.
        // For the new large palette support, this would overflow, so we're just going to set it to 0.
        // This allows old palmod to ignore the data and current palmod to work by figuring out the size itself.
        UINT8 uCopyFlag2 = (nPaletteSelectionLength < 0xFF) ? (UINT8)nPaletteSelectionLength : k_nASCIICharacterOffset;

        if (!bOleInit)
        {
            return;
        }

        COleDataSource* pSource = new COleDataSource();
        CSharedFile    sf(GMEM_MOVEABLE | GMEM_DDESHARE | GMEM_ZEROINIT);

        CStringA CopyText;
        CStringA FormatTxt;

        UINT16 uCurrData = 0;
        BOOL bCopyAll = !CurrPal->GetSelAmt();

        switch (CurrGame->GetGameFlag())
        {
        case SFIII3_D:
        case KOF02UM_S:
        case CVS2_A:
            uCopyFlag1 = SFIII3_D + k_nASCIICharacterOffset;
            break;
        case MVC2_A:
        case MVC2_D:
        case MVC2_P:
            uCopyFlag1 = 2 + k_nASCIICharacterOffset;
            break;
        case JOJOS_A:
        case JOJOS_A_DIR_50:
        case JOJOS_A_DIR_51:
        case SFIII3_A:
        case SFIII3_A_DIR:
            uCopyFlag1 = 1 + k_nASCIICharacterOffset;
            break;
        default:
            uCopyFlag1 = CurrGame->GetGameFlag() + k_nASCIICharacterOffset;
            break;
        }

        CopyText.Format("(%c%c", uCopyFlag1, uCopyFlag2);

        for (int i = 0; i < nWorkingAmt; i++)
        {
            if (pSelIndex[i] || bCopyAll)
            {
                uCurrData = CurrGame->ConvCol(CurrPal->GetBasePal()[i]);

                FormatTxt.Format("%04X", uCurrData);

                //Only changed:
                //FormatTxt.Format("%04X", (UINT16)((uCurrData << 8) | (uCurrData >> 8) & (UINT16)0xFF0F));

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
        pSource->SetClipboard();
    }
}

BOOL IsPasteFromPalMod()
{
    COleDataObject obj;
    BOOL bCanPaste = FALSE;

    if ((!obj.AttachClipboard()) ||
        (!obj.IsDataAvailable(CF_TEXT)))
    {
        return FALSE;
    }

    HGLOBAL hmem = obj.GetGlobalData(CF_TEXT);
    CMemFile sf((BYTE*) ::GlobalLock(hmem), ::GlobalSize(hmem));

    LPSTR szTempStr = szPasteStr.GetBufferSetLength(::GlobalSize(hmem));
    sf.Read(szTempStr, ::GlobalSize(hmem));
    ::GlobalUnlock(hmem);

    szPasteStr.Remove(' ');
    szPasteStr.Remove('\n');

    if (szTempStr[0] == '(')
    {
        if ((szTempStr[1] - k_nASCIICharacterOffset) <= NUM_GAMES) //Gameflag
        {
            // UINT16 uPasteAmt = ;
            UINT16 nPaletteCount = (0xFF & szTempStr[2]) - k_nASCIICharacterOffset;

            if (nPaletteCount == 0)
            {
                nPaletteCount = (UINT16)((strlen(szTempStr) - 3) / 4);
            }

            if (nPaletteCount <= CRegProc::GetMaxPalettePageSize())
            {
                if (szTempStr[(nPaletteCount * 4) + 3] == ')')
                {
                    bCanPaste = TRUE;
                }
            }
        }
    }

    return bCanPaste;
}

BOOL IsPasteRGB()
{
    COleDataObject obj;
    BOOL bCanPaste = FALSE;

    if ((!obj.AttachClipboard()) ||
        (!obj.IsDataAvailable(CF_TEXT)))
    {
        return FALSE;
    }

    HGLOBAL hmem = obj.GetGlobalData(CF_TEXT);
    CMemFile sf((BYTE*) ::GlobalLock(hmem), ::GlobalSize(hmem));

    LPSTR szTempStr = szPasteStr.GetBufferSetLength(::GlobalSize(hmem));
    sf.Read(szTempStr, ::GlobalSize(hmem));
    ::GlobalUnlock(hmem);

    szPasteStr.Remove(' ');
    szPasteStr.Remove('\n');

    if (szTempStr[0] == '#')
    {
        size_t nCountChars = strlen(szTempStr);

        if ((nCountChars == 7) || (nCountChars == 9))
        {
            bCanPaste = TRUE;
        }
    }

    return bCanPaste;
}

BOOL IsPasteSupported()
{
    return IsPasteFromPalMod() || IsPasteRGB();
}

void CPalModDlg::OnEditPaste()
{
    if (IsPasteFromPalMod())
    {
        COleDataObject obj;

        char* szPasteBuff = szPasteStr.GetBuffer();

        // Do something with the data in 'buffer'

        char szFormatStr[] = "0x0000";

        UINT8 uPasteGFlag = szPasteBuff[1] - k_nASCIICharacterOffset;
        // We want the number of colors per paste minus the () and game flag
        UINT16 uPasteAmt = (UINT16)((strlen(szPasteBuff) - 3) / 4);

        switch (uPasteGFlag)
        {
        default:
        case 2: //MVC2_D & everything else
            uPasteGFlag = 0;
            break;
        case 1: //SFIII3_A / Jojos
            uPasteGFlag = 1;
            break;
        case SFIII3_D: //SFIII3_D
            uPasteGFlag = SFIII3_D;
            break;
        }

        if (uPasteAmt)
        {
            CGameClass* CurrGame = GetHost()->GetCurrGame();
            UINT8 uCurrGFlag = CurrGame->GetGameFlag();
            ColMode eCurrColMode = CurrGame->GetColMode();

            COLORREF* rgPasteCol = new COLORREF[uPasteAmt];

            int nIndexCtr = 0, nWorkingAmt = CurrPalCtrl->GetWorkingAmt();

            if (uCurrGFlag != uPasteGFlag)
            {
                switch (uPasteGFlag)
                {
                case SFIII3_D:
                {
                    CurrGame->SetColMode(COLMODE_15ALT);
                }
                break;
                case SFIII3_A:
                case JOJOS_A:
                {
                    CurrGame->SetColMode(COLMODE_15);
                }
                break;
                case MVC2_D:
                case MVC2_P:
                default:
                {
                    CurrGame->SetColMode(COLMODE_12A);
                }
                break;
                }
            }

            //Notify the change data
            ProcChange();

            for (UINT16 i = 0; i < uPasteAmt; i++)
            {
                memcpy(&szFormatStr[2], &szPasteBuff[3 + (4 * i)], sizeof(UINT8) * 4);

                rgPasteCol[i] = CurrGame->ConvPal((UINT16)strtol(szFormatStr, NULL, 16));
                ((UINT8*)rgPasteCol)[i * 4 + 3] |= (0xFF * (nAMul == 0));
            }

            if (uCurrGFlag != uPasteGFlag)
            {
                //Set the color mode back
                //Round the values with the switched game flag
                CurrGame->SetColMode(eCurrColMode);

                for (UINT16 i = 0; i < uPasteAmt; i++)
                {
                    rgPasteCol[i] = CurrGame->ConvPal(CurrGame->ConvCol(rgPasteCol[i]));
                }
            }

            if (!CurrPalCtrl->GetSelAmt())
            {
                int nCopyAmt = nWorkingAmt < uPasteAmt ? nWorkingAmt : uPasteAmt;

                memcpy(CurrPalCtrl->GetBasePal(), rgPasteCol, sizeof(COLORREF) * nCopyAmt);
            }
            else
            {
                UINT8* rgSelIndex = CurrPalCtrl->GetSelIndex();
                COLORREF* crTargetPal = CurrPalCtrl->GetBasePal();

                for (int i = 0; i < nWorkingAmt; i++)
                {
                    if (rgSelIndex[i])
                    {
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

            safe_delete_array(rgPasteCol);
        }
    }
    else if (IsPasteRGB())
    {
        COleDataObject obj;

        char* szPasteBuff = szPasteStr.GetBuffer();

        // Allow for either RGB or ARGB pastes
        bool fIsARGB = (strlen(szPasteBuff) == 9);

        char szFormatStrRGB[] = "0x000000";
        char szFormatStrARGB[] = "0x00000000";
        const UINT16 uPasteAmt = 1; // just one color this way

        CGameClass* CurrGame = GetHost()->GetCurrGame();
        UINT8 uCurrGFlag = CurrGame->GetGameFlag();
        ColMode eCurrColMode = CurrGame->GetColMode();

        COLORREF colPasteCol = 0x0;

        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();

        //Notify the change data
        ProcChange();

        if (fIsARGB)
        {
            memcpy(&szFormatStrARGB[2], &szPasteBuff[1], sizeof(UINT8) * 8);
        }
        else
        {
            memcpy(&szFormatStrRGB[2], &szPasteBuff[1], sizeof(UINT8) * 6);
        }

        LPCSTR pszFormatStringToUse = fIsARGB ? szFormatStrARGB : szFormatStrRGB;

        DWORD argbColor = strtoul(pszFormatStringToUse, NULL, 16);
        argbColor |= ((0xFF * (nAMul == 0)) << 24);

        colPasteCol = (GetAValue(argbColor) << 24) +
                      (GetRValue(argbColor) << 16) +
                      (GetGValue(argbColor) <<  8) +
                      (GetBValue(argbColor));
      
        colPasteCol = CurrGame->ConvPal(CurrGame->ConvCol(colPasteCol));

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
    }
}

void CPalModDlg::NewUndoData(BOOL bUndo)
{
    CUndoNode* NewNode = bUndo ? UndoProc.NewUndo() : UndoProc.NewRedo();

    sPalRedir* rgRedir = MainPalGroup->GetRedir();
    sPalDef* srcDef = MainPalGroup->GetPalDef(rgRedir[nCurrSelPal].nDefIndex);
    sPalSep* srcSep = MainPalGroup->GetSep(rgRedir[nCurrSelPal].nDefIndex, rgRedir[nCurrSelPal].nSepIndex);

    int nPalSz = srcSep->nAmt;

    NewNode->nPalIndex = nCurrSelPal;
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

    bUndo ? NewUndoData(FALSE) : NewUndoData();

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
}

void CPalModDlg::UpdateSettingsMenuItems()
{
    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_SHOW32BITRGB, bShow32 ? MF_CHECKED : MF_UNCHECKED);
    pSettMenu->CheckMenuItem(ID_GETCOLORONSELECT, bGetCol ? MF_CHECKED : MF_UNCHECKED);
    pSettMenu->CheckMenuItem(ID_AUTOSETCOL, bAutoSetCol ? MF_CHECKED : MF_UNCHECKED);

    bool show8ColorPerLine = (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE);

    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | (show8ColorPerLine ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND | (show8ColorPerLine ? MF_UNCHECKED : MF_CHECKED));
}

void CPalModDlg::OnSettingsSettings()
{
    CSettDlg SettDlg;

    SettDlg.m_bAlphaTrans = CGame_MVC2_D::bAlphaTrans;
    SettDlg.m_bUpdSupp = CGameClass::bPostSetPalProc;

    if (SettDlg.DoModal() == IDOK)
    {
        CGame_MVC2_D::bAlphaTrans = SettDlg.m_bAlphaTrans;
        CGameClass::bPostSetPalProc = SettDlg.m_bUpdSupp;

        //SaveSettings();
    }
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

void CPalModDlg::CustomEditProc(void* pPalCtrl, int nCtrlId, int nMethod)
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

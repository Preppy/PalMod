#include "stdafx.h"
#include "PalMod.h"
#include "PaletteImport.h"

// This simple check just validates that we have some actual colors in the first two lines
// Fight Factory often stores palettes upside down, so this will catch a lot of theirs
// and thus let us fix it
bool CPaletteImport::PaletteIsLikelyUpsideDown(std::vector<uint8_t> rgbaPalette)
{
    bool fIsLikelyUpsideDown = true;
    const size_t nPalColorCount = min(32, static_cast<size_t>(rgbaPalette.size() / 4));

    for (size_t iPalIndex = 0; iPalIndex < nPalColorCount; iPalIndex++)
    {
        if ((rgbaPalette.at(iPalIndex * 4) != 0) ||
            (rgbaPalette.at((iPalIndex * 4) + 1) != 0) ||
            (rgbaPalette.at((iPalIndex * 4) + 2) != 0))
        {
            fIsLikelyUpsideDown = false;
        }
    }

    return fIsLikelyUpsideDown;
}

void CPaletteImport::ReversePalette(std::vector<uint8_t>& rgbaPalette)
{
    const int16_t nPalColorCount = static_cast<int16_t>(rgbaPalette.size() / 4);
    std::vector<uint8_t> working_pal(rgbaPalette.size());
    size_t iWritePos = 0;

    for (int16_t iPalIndex = nPalColorCount - 1; iPalIndex >= 0; iPalIndex--)
    {
        working_pal.at(iWritePos++) = rgbaPalette.at(iPalIndex * 4);
        working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 1);
        working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 2);
        working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 3);
    }

    rgbaPalette = working_pal;
}

void CPaletteImport::ShiftPalette(std::vector<uint8_t>& rgbaPalette, int16_t nShiftLengthInColors, PalWrapType wrapType /* = PalWrapType::Normal*/)
{
    CString strMsg;
    strMsg.Format(L"CPaletteImport::ShiftPalette: request to shift by %i colors\r\n", nShiftLengthInColors);
    OutputDebugString(strMsg.GetString());

    const size_t nPalColorCount = static_cast<size_t>(rgbaPalette.size() / 4);

    uint16_t nAbsShiftLength = 0;

    if ((static_cast<size_t>(abs(nShiftLengthInColors)) >= nPalColorCount) ||
        !nShiftLengthInColors)
    {
        // unworkable: ignore
        nAbsShiftLength = 0;
    }
    else if (nShiftLengthInColors > 0)
    {
        // use
        nAbsShiftLength = nShiftLengthInColors;
    }
    else
    {
        // use but invert
        nAbsShiftLength = static_cast<uint16_t>(nPalColorCount + nShiftLengthInColors);
    }

    if (nAbsShiftLength)
    {
        std::vector<uint8_t> working_pal(rgbaPalette.size());

        switch (wrapType)
        {
            case PalWrapType::Normal:
            {
                strMsg.Format(L"\tshifting by %i colors\r\n", nAbsShiftLength);
                OutputDebugString(strMsg.GetString());

                size_t iWritePos = 0;

                for (size_t iPalIndex = nAbsShiftLength; iPalIndex < nPalColorCount; iPalIndex++)
                {
                    working_pal.at(iWritePos++) = rgbaPalette.at(iPalIndex * 4);
                    working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 1);
                    working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 2);
                    working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 3);
                }

                for (size_t iPalIndex = 0; iPalIndex < nAbsShiftLength; iPalIndex++)
                {
                    working_pal.at(iWritePos++) = rgbaPalette.at(iPalIndex * 4);
                    working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 1);
                    working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 2);
                    working_pal.at(iWritePos++) = rgbaPalette.at((iPalIndex * 4) + 3);
                }

                rgbaPalette = working_pal;
                break;
            }
            case PalWrapType::ShiftHorizontal:
            {
                strMsg.Format(L"\tshifting by %i rows\r\n", nAbsShiftLength);
                OutputDebugString(strMsg.GetString());

                nAbsShiftLength = static_cast<uint16_t>(abs(nShiftLengthInColors)); // reset since our math is different
            
                if (((rgbaPalette.size() % 16) == 0) && // only shift if we have equal length columns
                    (nAbsShiftLength < 16)) // only allow shifting within the line
                {
                    const uint16_t nLineCount = static_cast<uint16_t>(rgbaPalette.size() / (16 * 4));

                    // shift one line at a time.
                    for (uint16_t iLinePos = 0; iLinePos < nLineCount; iLinePos++)
                    {
                        uint16_t nCurrentShiftForLinePos = 4 * 16 * iLinePos;

                        if (nShiftLengthInColors > 0)
                        {
                            std::rotate(rgbaPalette.begin() + nCurrentShiftForLinePos, rgbaPalette.begin() + nCurrentShiftForLinePos + (4 * nAbsShiftLength), rgbaPalette.begin() + nCurrentShiftForLinePos + (4 * 16));
                        }
                        else
                        {
                            std::rotate(rgbaPalette.rbegin() + nCurrentShiftForLinePos, rgbaPalette.rbegin() + nCurrentShiftForLinePos + (4 * nAbsShiftLength), rgbaPalette.rbegin() + nCurrentShiftForLinePos + (4 * 16));
                        }
                    }
                }
                else
                {
                    OutputDebugString(L"Bogus hshift length!");
                }
            }
            break;
            case PalWrapType::ShiftByRow:
            {
                strMsg.Format(L"\tshifting by %i columns\r\n", nAbsShiftLength);
                OutputDebugString(strMsg.GetString());

                if (((nShiftLengthInColors % 16) == 0) && // shift by full lines only
                    ((rgbaPalette.size() % 16) == 0)) // only shift if we have equal length columns
                {
                    const uint16_t nShiftLengthInLines = static_cast<uint16_t>(abs(nShiftLengthInColors) / 16);

                    if (static_cast<size_t>(16 * 4 * nShiftLengthInLines) <= rgbaPalette.size())
                    {
                        if (nShiftLengthInColors > 0)
                        {
                            std::rotate(rgbaPalette.begin(), rgbaPalette.begin() + (16 * 4 * nShiftLengthInLines), rgbaPalette.end());
                        }
                        else
                        {
                            std::rotate(rgbaPalette.rbegin(), rgbaPalette.rbegin() + (16 * 4 * nShiftLengthInLines), rgbaPalette.rend());
                        }
                    }
                    else
                    {
                        OutputDebugString(L"Invalid shift length!\r\n");
                    }
                }
                else
                {
                    OutputDebugString(L"Bogus vshift length!\r\n");
                }
                break;
            }
        }        
    }
}

uint16_t CPaletteImport::ApplyPaletteToTarget(std::vector<uint8_t> rgbaPalette, uint32_t nTargetPalette, BOOL fLoopToFill)
{
    uint16_t iColorsWritten = 0;
    uint16_t iReadIndex = 0;

    CGameClass* CurrGame = GetHost()->GetCurrGame();
    sPalDef* pCurPalDef = GetHost()->GetPalModDlg()->MainPalGroup->GetPalDef(nTargetPalette);
    uint8_t* pPal = reinterpret_cast<uint8_t*>(pCurPalDef->pPal);

    bool fHaveColorsForThisTarget = false;

    for (uint16_t iColorCheck = 1; iColorCheck < pCurPalDef->uPalSz; iColorCheck++)
    {
        if ((rgbaPalette.at(iColorCheck * 4) != 0) ||
            (rgbaPalette.at((iColorCheck * 4) + 1) != 0) ||
            (rgbaPalette.at((iColorCheck * 4) + 2) != 0))
        {
            fHaveColorsForThisTarget = true;
            break;
        }
    }

    if (fHaveColorsForThisTarget)
    {
        GetHost()->GetPalModDlg()->ProcChange();

        for (; iColorsWritten < pCurPalDef->uPalSz; iColorsWritten++)
        {
            pPal[(iColorsWritten * 4)] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgbaPalette.at(iReadIndex * 4));
            pPal[(iColorsWritten * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgbaPalette.at((iReadIndex * 4) + 1));
            pPal[(iColorsWritten * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgbaPalette.at((iReadIndex * 4) + 2));
            // We might want to tweak this further, but at this time all palette file loadings will own knowing
            // whether they have useful alpha values
            pPal[(iColorsWritten * 4) + 3] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgbaPalette.at((iReadIndex * 4) + 3));

            iReadIndex++;
            if (static_cast<size_t>(iReadIndex * 4) >= rgbaPalette.size())
            {
                if (!fLoopToFill)
                {
                    break;
                }
                else
                {
                    iReadIndex = 0;
                }
            }
        }
    }

    return iColorsWritten;
}

uint16_t CPaletteImport::ApplyPalette(std::vector<uint8_t> rgbaPalette, BOOL fLoopToFill)
{
    const uint16_t nPossibleColorsToWrite = static_cast<uint16_t>(rgbaPalette.size() / 4);
    uint16_t nTotalColorsWritten = 0;

    const uint32_t nTotalPaletteCount = GetHost()->GetPalModDlg()->MainPalGroup->GetPalAmt();

    for (uint32_t iPaletteTarget = 0; iPaletteTarget < nTotalPaletteCount; iPaletteTarget++)
    {
        sPalDef* pCurPalDef = GetHost()->GetPalModDlg()->MainPalGroup->GetPalDef(iPaletteTarget);

        if (!pCurPalDef)
        {
            break;
        }

        if ((iPaletteTarget == 0) ||
            ((nTotalColorsWritten + pCurPalDef->uPalSz) <= nPossibleColorsToWrite))
        {
            if (ApplyPaletteToTarget(rgbaPalette, iPaletteTarget, fLoopToFill))
            {
                nTotalColorsWritten += pCurPalDef->uPalSz;

                if (rgbaPalette.size() > static_cast<size_t>(pCurPalDef->uPalSz * 4))
                {
                    std::vector<uint8_t> palRemaining(rgbaPalette.begin() + (pCurPalDef->uPalSz * 4), rgbaPalette.end());
                    rgbaPalette = palRemaining;
                }
            }
            else
            {
                break;
            }
        }
    }

    return nTotalColorsWritten;
}

bool CPaletteImport::LoadPalette(PalFileType palFileType, LPCWSTR pszFileName, bool fShowAdvancedOptions /* = false */, bool fForceReadUpsideDown /* = false */, bool fGIMPOffsetByOne /*= false */)
{
    CString strMsg;
    bool fSuccess = false;
    std::vector<uint8_t> rgbaPalette;
    UINT uiSuccess = 0, uiReversedSuccess = 0, uiFailure = IDS_ERROR_LOADING_PALETTE_FILE;

    switch (palFileType)
    {
        case PalFileType::ACT:
            fSuccess = GetPaletteFromACT(pszFileName, rgbaPalette);
            uiSuccess = IDS_ACT_LOADED;
            uiReversedSuccess = IDS_ACT_REVERSEDLOAD;
            uiFailure = IDS_ACT_LOADFAILURE;
            break;
        case PalFileType::BMP:
            fSuccess = GetPaletteFromBMP(pszFileName, rgbaPalette);
            break;
        case PalFileType::GPL:
            fSuccess = GetPaletteFromGPL(pszFileName, rgbaPalette);
            uiSuccess = IDS_GPL_LOADED;
            uiFailure = IDS_GPL_LOADFAILURE;
            break;
        case PalFileType::GIF:
            fSuccess = GetPaletteFromGIF(pszFileName, rgbaPalette);
            break;
        case PalFileType::PAL_RIFF:
            fSuccess = GetPaletteFromPAL_RIFF(pszFileName, rgbaPalette);
            uiSuccess = IDS_PAL_LOADED;
            uiFailure = IDS_PAL_LOADFAILURE;
            break;
        case PalFileType::PNG:
            fSuccess = GetPaletteFromPNG(pszFileName, rgbaPalette);
            uiSuccess = IDS_PNG_LOADED;
            uiReversedSuccess = IDS_PNG_REVERSEDLOAD;
            uiFailure = IDS_PNG_LOADFAILURE;
            break;
    }

    if (fSuccess)
    {
        if (fShowAdvancedOptions)
        {
            // let the user figure it out
            CPaletteImportDialog importPaletteDialog(rgbaPalette);

            importPaletteDialog.DoModal();
        }
        else
        {
            // Maximum effort!
            bool fIsLikelyUpsideDown = PaletteIsLikelyUpsideDown(rgbaPalette);

            if (fForceReadUpsideDown || fIsLikelyUpsideDown)
            {
                ReversePalette(rgbaPalette);

                if (fIsLikelyUpsideDown)
                {
                    OutputDebugString(L"\tPalette likely upside-down: reversing.\r\n");
                }
                if (fForceReadUpsideDown)
                {
                    OutputDebugString(L"\tReversed palette by request.\r\n");
                }
            }

            if (fGIMPOffsetByOne)
            {
                ShiftPalette(rgbaPalette, 1);
            }

            const uint16_t nColorsWritten = ApplyPalette(rgbaPalette, true);

            if (nColorsWritten)
            {
                if ((fForceReadUpsideDown || fIsLikelyUpsideDown) &&
                    uiReversedSuccess)
                {
                    strMsg.Format(uiReversedSuccess, nColorsWritten);
                }
                else if (uiSuccess)
                {
                    strMsg.Format(uiSuccess, nColorsWritten, static_cast<uint16_t>(rgbaPalette.size() / 4));
                }
                else
                {
                    strMsg.Format(L"Applied %u colors from %u color file.", nColorsWritten, static_cast<uint16_t>(rgbaPalette.size() / 4));
                }
            }
            else
            {
                if (uiFailure)
                {
                    (void)strMsg.LoadString(uiFailure);
                }
                else
                {
                    strMsg.Format(L"Failed to load file.");
                }
            }

            GetHost()->GetPalModDlg()->SetStatusText(strMsg.GetString());
        }
    }
    else
    {
        if (strMsg.LoadString(uiFailure))
        {
            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
            GetHost()->GetPalModDlg()->SetStatusText(strMsg.GetString());
        }
    }

    strMsg += L"\r\n";
    OutputDebugString(strMsg.GetString());

    return fSuccess;
}

CPaletteImportDialog::CPaletteImportDialog(std::vector<uint8_t> rgPalette, CWnd* pParent /*=NULL*/) :
    CDialog(CPaletteImportDialog::IDD, pParent),
    m_PalHost(false)
{
    m_rgLoadedPalette = rgPalette;
    
    m_fAutoPreview = CRegProc::GetPalImport_UseAutoPreview(TRUE);
    m_fRepeatToFill = CRegProc::GetPalImport_RepeatToFill(TRUE);
    m_fScrollByColumn = CRegProc::GetPalImport_ScrollByColumn(TRUE);
    m_fWrapToNext = CRegProc::GetPalImport_WrapToNext(TRUE);
}

CPaletteImportDialog::~CPaletteImportDialog()
{
    CRegProc::SetPalImport_UseAutoPreview(m_fAutoPreview);
    CRegProc::SetPalImport_RepeatToFill(m_fRepeatToFill);
    CRegProc::SetPalImport_ScrollByColumn(m_fScrollByColumn);
    CRegProc::SetPalImport_WrapToNext(m_fWrapToNext);
}

IMPLEMENT_DYNAMIC(CPaletteImportDialog, CDialog)

BOOL CPaletteImportDialog::OnInitDialog()
{
    OutputDebugString(L"Init dialog.\r\n");

    CDialog::OnInitDialog();

    UpdateData();

    // grab original palettes
    const uint32_t nTotalPaletteCount = GetHost()->GetPalModDlg()->MainPalGroup->GetPalAmt();

    // This is a 16x16 grid: we could always trim tighter to smaller palettes
    // but I like letting them have the full workspace.
    m_ScrollLeftRight.SetScrollRange(-m_nCurrentHorizontalBounds, m_nCurrentHorizontalBounds, FALSE);
    m_ScrollUpDown.SetScrollRange(-m_nCurrentVerticalBounds, m_nCurrentVerticalBounds, FALSE);

    m_ScrollLeftRight.SetScrollPos(0, TRUE);
    m_ScrollUpDown.SetScrollPos(0, TRUE);

    CString strNumber;
    int nLayerTarget = 0;

    // Update the layer listbox and cache untouched palettes
    for (uint32_t iLayer = 0; iLayer < nTotalPaletteCount; iLayer++)
    {
        sPalDef* pCurPalDef = GetHost()->GetPalModDlg()->MainPalGroup->GetPalDef(iLayer);
        uint8_t* pPal = reinterpret_cast<uint8_t*>(pCurPalDef->pPal);

        m_rgrgOriginalPalettes.push_back(std::vector<uint8_t>(pPal, pPal + (pCurPalDef->uPalSz * 4)));
        m_rgfMadeChanges.push_back(false);

        strNumber.Format(L"%u", iLayer);
        m_lbTargetLayer.InsertString(nLayerTarget++, strNumber);
    }

    if (m_rgLoadedPalette.size())
    {
        m_rgWorkingPalette = m_rgLoadedPalette;
    }
    else
    {
        m_rgWorkingPalette = m_rgrgOriginalPalettes[0];
    }

    // right now we default to fill: maybe default to active palette if any?
    m_lbTargetLayer.SetCurSel(0);

    if (nTotalPaletteCount == 1)
    {
        GetDlgItem(IDC_PALETTEIMPORT_WRAPTONEXT)->EnableWindow(FALSE);
        GetDlgItem(IDC_PALETTEIMPORT_REPEATTOFILL)->EnableWindow(FALSE);
    }

    GetDlgItem(IDC_PALETTEIMPORT_FAVORITES)->ShowWindow(SW_HIDE);

    OnPreviewPalette();

    UpdateData(FALSE);

    return TRUE;
}

void CPaletteImportDialog::_ResetPreview()
{
    for (size_t iPal = 0; iPal < m_rgrgOriginalPalettes.size(); iPal++)
    {
        CPaletteImport::ApplyPaletteToTarget(m_rgrgOriginalPalettes[iPal], static_cast<uint32_t>(iPal), FALSE);

        m_rgfMadeChanges[iPal] = false;
    }

    GetHost()->GetPalModDlg()->UpdateUIForAppliedPalette();
}

bool CPaletteImportDialog::_MadeAnyChanges()
{
    for (size_t iFlag = 0; iFlag < m_rgfMadeChanges.size(); iFlag++)
    {
        if (m_rgfMadeChanges[iFlag])
        {
            return true;
        }
    }

    return false;
}

void CPaletteImportDialog::OnCancel()
{
    if (_MadeAnyChanges())
    {
        // get everything back to normal
        _ResetPreview();
    }

    CDialog::OnCancel();
}

void CPaletteImportDialog::OnOK()
{
    OnApplyPalette();

    CDialog::OnCancel();
}

void CPaletteImportDialog::OnReversePalette()
{
    OutputDebugString(L"CPaletteImportDialog: Reversing palette.\r\n");

    CPaletteImport::ReversePalette(m_rgWorkingPalette);

    OnPreviewPalette();
}

void CPaletteImportDialog::OnRevertPalette()
{
    OutputDebugString(L"CPaletteImportDialog: Reverting palette.\r\n");

    const int nTargetLayer = m_lbTargetLayer.GetCurSel();

    _ResetPreview();

    // -1 is "no selection", 0-n are the actual palettes
    if (nTargetLayer == -1) // how?
    {
        m_rgWorkingPalette = m_rgrgOriginalPalettes[0];
    }
    else if (nTargetLayer >= 0)
    {
        m_rgWorkingPalette = m_rgrgOriginalPalettes[nTargetLayer];
    }

    m_ScrollLeftRight.SetScrollPos(0, TRUE);
    m_ScrollUpDown.SetScrollPos(0, TRUE);

    strPaletteName = L"Original Palette";
}

void CPaletteImportDialog::LoadFromFile()
{
    static LPCWSTR rgszOpenFilter[] = { L"Supported palette files|*.act;*.bmp;*.gif;*.png;*.pal;*.gpl;*.hpl|"
                                        L"ACT palette|*.act|"
                                        L"Indexed PNG|*.png|"
                                        L"Microsoft PAL|*.pal|"
                                        L"Indexed BMP|*.bmp|"
                                        L"GIF|*.gif|"
                                        L"GIMP palette file|*.gpl|"
                                        L"|" };

    CFileDialog PaletteLoad(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST, *rgszOpenFilter);

    if (PaletteLoad.DoModal() == IDOK)
    {
        OPENFILENAME& pOFN = PaletteLoad.GetOFN();

        CString strFileName = pOFN.lpstrFile;

        int dotPos = strFileName.ReverseFind(L'.');

        if (dotPos != -1)
        {
            CString strExt = strFileName.Right(strFileName.GetLength() - dotPos );

            strExt.MakeLower();

            bool fSuccess = false;
            std::vector<uint8_t> rgbaPalette;
            
            if (strExt == L".act")
            {
                fSuccess = CPaletteImport::GetPaletteFromACT(strFileName, rgbaPalette);
            }
            else if (strExt == L".bmp")
            {
                fSuccess = CPaletteImport::GetPaletteFromBMP(strFileName, rgbaPalette);
            }
            else if (strExt == L".gif")
            {
                fSuccess = CPaletteImport::GetPaletteFromGIF(strFileName, rgbaPalette);
            }
            else if (strExt == L".gpl")
            {
                fSuccess = CPaletteImport::GetPaletteFromGPL(strFileName, rgbaPalette);
            }
#ifdef SUPPORT_ADDED
            else if (strExt == L".hpl")
            {
                fSuccess = CPaletteImport::GetPaletteFromHPL(strFileName, rgbaPalette);
            }
#endif
            else if (strExt == L".pal")
            {
                fSuccess = CPaletteImport::GetPaletteFromPAL_RIFF(strFileName, rgbaPalette);
            }
            else if (strExt == L".png")
            {
                fSuccess = CPaletteImport::GetPaletteFromPNG(strFileName, rgbaPalette);
            }

            if (fSuccess && rgbaPalette.size())
            {
                m_rgLoadedPalette = rgbaPalette;
                m_rgWorkingPalette = m_rgLoadedPalette;


                int slashPos = strFileName.ReverseFind(L'\\');

                if (slashPos != -1)
                {
                    CString strJustFileName = strFileName.Right(strFileName.GetLength() - slashPos - 1);
                    strPaletteName = strJustFileName;
                }

                OnPreviewPalette();
            }
            else
            {
                MessageBox(L"Palette file could not be loaded.", GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }
}

void CPaletteImportDialog::UseMapping()
{
    // TODO: think about whether we should allow the user to forcibly step the table forward if 
    // they want to mash the Mapping button.  That's useful since sometimes stepping the table
    // forward helps
    if (m_rgMappingPalette.empty() || (m_rgMappingPalette.size() != m_rgWorkingPalette.size()))
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        CMappingPaletteManager* pPaletteMapper = GetHost()->GetPalModDlg()->GetPaletteMapper();
        uint16_t nPalLength = static_cast<uint16_t>(m_rgWorkingPalette.size() / 4);
        uint8_t nStepLength = 1;

        std::vector<uint32_t> colorMap = pPaletteMapper->GetMappingPaletteSequence(CurrGame->GetColorMode(), CurrGame->GetMaximumWritePerEachTransparency(),
                                                                                       nPalLength, nStepLength);

        if (colorMap.size())
        {
            m_rgMappingPalette.resize(m_rgWorkingPalette.size());

            for (uint32_t iCurrentIndexInPalette = 0, iWritePos = 0; iCurrentIndexInPalette < colorMap.size(); iCurrentIndexInPalette++)
            {

                m_rgMappingPalette[iWritePos++] = GetRValue(colorMap.at(iCurrentIndexInPalette));
                m_rgMappingPalette[iWritePos++] = GetGValue(colorMap.at(iCurrentIndexInPalette));
                m_rgMappingPalette[iWritePos++] = GetBValue(colorMap.at(iCurrentIndexInPalette));
                m_rgMappingPalette[iWritePos++] = 0xff;
            }

            m_rgWorkingPalette = m_rgMappingPalette;

            strPaletteName = L"Mapping Palette";

            OnPreviewPalette();
        }
    }
    else
    {
        m_rgWorkingPalette = m_rgMappingPalette;

        strPaletteName = L"Mapping Palette";

        OnPreviewPalette();
    }
}

void CPaletteImportDialog::Favorites()
{
    // E_NOTIMPL
    // Not really sure what I want to here yet, if anything
}

void CPaletteImportDialog::OnApplyPalette()
{
    int nTargetLayer = m_lbTargetLayer.GetCurSel();

    if (nTargetLayer >= 0)
    {
        if ((nTargetLayer >= static_cast<int>(m_rgrgOriginalPalettes.size())) ||
            _MadeAnyChanges() ||
            (m_rgWorkingPalette != m_rgrgOriginalPalettes[nTargetLayer]))
        {
            uint16_t nColorsWritten = 0;
            const uint16_t nColorsAvailable = static_cast<uint16_t>(m_rgWorkingPalette.size() / 4);

            while (nColorsWritten < nColorsAvailable)
            {
                m_rgfMadeChanges[nTargetLayer] = true;
                nColorsWritten += CPaletteImport::ApplyPaletteToTarget(m_rgWorkingPalette, nTargetLayer++, m_fRepeatToFill);

                if (!m_fWrapToNext ||
                    (nTargetLayer >= static_cast<int>(m_rgrgOriginalPalettes.size())))
                {
                    break;
                }
            }
        }
    }

    GetHost()->GetPalModDlg()->UpdateUIForAppliedPalette();
}

void CPaletteImportDialog::_UpdateAllowVerticalScrolling(bool fAllow)
{
    m_fAllowingVerticalScrolling = fAllow;
    m_ScrollUpDown.EnableWindow(m_fAllowingVerticalScrolling);
}

void CPaletteImportDialog::OnPreviewPalette()
{
    UpdateData();

    m_PalHost.BeginSetPal();

    const int nCountColors = static_cast<int>(m_rgWorkingPalette.size() / 4);

    _UpdateAllowVerticalScrolling(nCountColors > 16);

    int iWritePos = 0;
    for (int iReadPos = 0; iWritePos < nCountColors; iWritePos++)
    {
        COLORREF colorThis = RGB(m_rgWorkingPalette[iReadPos++], m_rgWorkingPalette[iReadPos++], m_rgWorkingPalette[iReadPos++]) | 0xff000000;
        iReadPos++; // alpha

        m_rgColorArray[iWritePos] = colorThis;
    }

    // fill rest with black
    for (; iWritePos < ARRAYSIZE(m_rgColorArray); iWritePos++)
    {
        m_rgColorArray[iWritePos] = 0;
    }

    // need a name
    m_PalHost.SetPal(0, nCountColors, m_rgColorArray, strPaletteName.GetString());

    m_PalHost.EndSetPal();

    m_PalHost.UpdateCtrl();

    if (!m_fScrollByColumn)
    {
        // update for new palette
        if (m_nCurrentHorizontalBounds != nCountColors)
        {
            m_nCurrentHorizontalBounds = static_cast<int16_t>(nCountColors);
            m_ScrollLeftRight.SetScrollRange(-m_nCurrentHorizontalBounds, m_nCurrentHorizontalBounds, TRUE);
        }
    }

    int16_t nCountLines = static_cast<int16_t>(nCountColors / 16);

    if (nCountLines != m_nCurrentVerticalBounds)
    {
        m_nCurrentVerticalBounds = nCountLines;
        m_ScrollUpDown.SetScrollRange(-m_nCurrentVerticalBounds, m_nCurrentVerticalBounds, TRUE);
    }

    if (m_fAutoPreview)
    {
        OnApplyPalette();
    }
}

void CPaletteImportDialog::OnUpdateLayerTarget()
{
    if (_MadeAnyChanges())
    {
        _ResetPreview();
    }
    else
    {
        // Show the original if they're not working with something
        // Note that the way we do this right now is a little quirky.
        // We'll keep a mis-sized preview changed for a previous layer.
        // I'm no really sure how to best handle that conflict
        int nTargetLayer = m_lbTargetLayer.GetCurSel();

        if ((nTargetLayer >= 0) &&
            (nTargetLayer < static_cast<int>(m_rgrgOriginalPalettes.size())))
        {
            m_rgWorkingPalette = m_rgrgOriginalPalettes[nTargetLayer];

            OnPreviewPalette();
        }
    }
}

BOOL CPaletteImportDialog::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
    if (m_fAllowingVerticalScrolling)
    {
        UpdateData();

        CScrollBar* pScrollBar = static_cast<CScrollBar*>(GetDlgItem(IDC_PALETTEIMPORT_UPDOWN));

        int curr_pos = pScrollBar->GetScrollPos();
        int old_pos = curr_pos;

        curr_pos += (zDelta > 0) ? 1 : -1;

        curr_pos = min(m_nCurrentVerticalBounds, max(-m_nCurrentVerticalBounds, curr_pos));

        if (curr_pos != old_pos)
        {
            const int16_t delta_pos = static_cast<int16_t>(curr_pos - old_pos);

            pScrollBar->SetScrollPos(curr_pos, TRUE);

            CPaletteImport::ShiftPalette(m_rgWorkingPalette, delta_pos * 16, CPaletteImport::PalWrapType::ShiftByRow);

            OnPreviewPalette();
        }
        return TRUE;
    }
    else
    {
        return CWnd::OnMouseWheel(nFlags, zDelta, pt);
    }
}

void CPaletteImportDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_PALETTEIMPORT_LEFTRIGHT, m_ScrollLeftRight);
    DDX_Control(pDX, IDC_PALETTEIMPORT_UPDOWN, m_ScrollUpDown);

    DDX_Control(pDX, IDC_PALETTEIMPORT_LAYERS, m_lbTargetLayer);

    DDX_Check(pDX, IDC_PALETTEIMPORT_AUTOPREVIEW, m_fAutoPreview);
    DDX_Check(pDX, IDC_PALETTEIMPORT_WRAPTONEXT, m_fWrapToNext);
    DDX_Check(pDX, IDC_PALETTEIMPORT_REPEATTOFILL, m_fRepeatToFill);
    DDX_Check(pDX, IDC_PALETTEIMPORT_SCROLLBYCOLUMN, m_fScrollByColumn);

    DDX_Control(pDX, IDC_PALHOST, m_PalHost);
}

void CPaletteImportDialog::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    if (pScrollBar->GetDlgCtrlID() == IDC_PALETTEIMPORT_LEFTRIGHT)
    {
        UpdateData();

        int curr_pos = pScrollBar->GetScrollPos();
        int old_pos = curr_pos;

        switch (nSBCode)
        {
            case SB_LEFT:
            case SB_LINELEFT:
                curr_pos--;
                break;
            case SB_ENDSCROLL:
                // ignoring
                break;
            case SB_PAGELEFT:
                curr_pos = -15;
                break;
            case SB_PAGERIGHT:
                curr_pos = 15;
                break;
            case SB_RIGHT:
            case SB_LINERIGHT:
                curr_pos++;
                break;
            case SB_THUMBPOSITION:
                curr_pos = nPos;
                break;
            case SB_THUMBTRACK:
                curr_pos = nPos;
                break;
        }

        // bound
        curr_pos = min(m_nCurrentHorizontalBounds, max(-m_nCurrentHorizontalBounds, curr_pos));

        if (curr_pos != old_pos)
        {
            // flip for logical movement
            const int16_t delta_pos = static_cast<int16_t>((curr_pos - old_pos) * -1);

            pScrollBar->SetScrollPos(curr_pos, TRUE);

            CPaletteImport::ShiftPalette(m_rgWorkingPalette, delta_pos, m_fScrollByColumn ? CPaletteImport::PalWrapType::ShiftHorizontal :
                                                                                            CPaletteImport::PalWrapType::Normal);

            OnPreviewPalette();
        }
    }
    else
    {
        CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
    }
}

void CPaletteImportDialog::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    if (pScrollBar->GetDlgCtrlID() == IDC_PALETTEIMPORT_UPDOWN)
    {
        UpdateData();

        int curr_pos = pScrollBar->GetScrollPos();
        int old_pos = curr_pos;

        switch (nSBCode)
        {
            case SB_LEFT:
            case SB_LINELEFT:
                curr_pos++;
                break;
            case SB_ENDSCROLL:
                // unhandled at this time
                break;
            case SB_PAGELEFT:
                curr_pos = 15;
                break;
            case SB_PAGERIGHT:
                curr_pos = -15;
                break;
            case SB_RIGHT:
            case SB_LINERIGHT:
                curr_pos -= 1;
                break;
            case SB_THUMBPOSITION:
                curr_pos = nPos;
                break;
            case SB_THUMBTRACK:
                curr_pos = nPos;
                break;
        }

        // bound
        curr_pos = min(m_nCurrentVerticalBounds, max(-m_nCurrentVerticalBounds, curr_pos));

        if (curr_pos != old_pos)
        {
            const int16_t delta_pos = static_cast<int16_t>(curr_pos - old_pos);

            pScrollBar->SetScrollPos(curr_pos, TRUE);

            CPaletteImport::ShiftPalette(m_rgWorkingPalette, delta_pos * 16, CPaletteImport::PalWrapType::ShiftByRow);

            OnPreviewPalette();
        }
    }
    else
    {
        CDialog::OnVScroll(nSBCode, nPos, pScrollBar);
    }
}

BEGIN_MESSAGE_MAP(CPaletteImportDialog, CDialog)
    ON_BN_CLICKED(IDC_PALETTEIMPORT_APPLY, &CPaletteImportDialog::OnApplyPalette)
    ON_BN_CLICKED(IDC_PALETTEIMPORT_REVERSE, &CPaletteImportDialog::OnReversePalette)
    ON_BN_CLICKED(IDC_PALETTEIMPORT_REVERT, &CPaletteImportDialog::OnRevertPalette)

    ON_BN_CLICKED(IDC_PALETTEIMPORT_FROMFILE, &CPaletteImportDialog::LoadFromFile)
    ON_BN_CLICKED(IDC_PALETTEIMPORT_MAPPING, &CPaletteImportDialog::UseMapping)
    ON_BN_CLICKED(IDC_PALETTEIMPORT_FAVORITES, &CPaletteImportDialog::Favorites)

    ON_LBN_SELCHANGE(IDC_PALETTEIMPORT_LAYERS, &CPaletteImportDialog::OnUpdateLayerTarget)

    ON_WM_HSCROLL()
    ON_WM_VSCROLL()

    ON_WM_MOUSEWHEEL()
END_MESSAGE_MAP()

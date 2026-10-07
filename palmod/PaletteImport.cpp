#include "stdafx.h"
#include "PalMod.h"
#include "PaletteImport.h"

// This simple check just validates that we have some actual colors in the first two lines
// Fight Factory often stores palettes upside down, so this will catch a lot of theirs
// and thus let us fix it
bool CPaletteImport::_PaletteIsLikelyUpsideDown(std::vector<uint8_t> rgbaPalette)
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

void CPaletteImport::_ReversePalette(std::vector<uint8_t>& rgbaPalette)
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

void CPaletteImport::_ShiftPalette(std::vector<uint8_t>& rgbaPalette, int16_t nShiftLengthInColors)
{
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
        nAbsShiftLength = static_cast<uint16_t>(nPalColorCount - 1 + nShiftLengthInColors);
    }

    if (nAbsShiftLength)
    {
        std::vector<uint8_t> working_pal(rgbaPalette.size());
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
    }
}

uint16_t CPaletteImport::ApplyPaletteToTarget(std::vector<uint8_t> rgbaPalette, uint32_t nTargetPalette, bool fLoopToFill)
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

uint16_t CPaletteImport::ApplyPalette(std::vector<uint8_t> rgbaPalette, bool fLoopToFill)
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
            ((nTotalColorsWritten + pCurPalDef->uPalSz) < nPossibleColorsToWrite))
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

bool CPaletteImport::LoadPalette(PalFileType palFileType, LPCWSTR pszFileName, bool fForceReadUpsideDown /* = false */, bool fGIMPOffsetByOne /*= false */)
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
        bool fIsLikelyUpsideDown = _PaletteIsLikelyUpsideDown(rgbaPalette);

        if (fForceReadUpsideDown || fIsLikelyUpsideDown)
        {
            _ReversePalette(rgbaPalette);

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
            _ShiftPalette(rgbaPalette, 1);
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

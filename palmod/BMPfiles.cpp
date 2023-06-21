#include "stdafx.h"
#include "PalMod.h"

bool LoadDataFromBMPFile(LPCWSTR pszBMPFileName, std::vector<COLORREF>& rgclrPaletteData, CString& strPossibleError)
{
    HBITMAP hBMP = static_cast<HBITMAP>(LoadImage(nullptr, pszBMPFileName, IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION | LR_DEFAULTSIZE | LR_LOADFROMFILE));

    strPossibleError = L"This is not a supported BMP file.";

    // Populate color table from file
    if (hBMP)
    {
        BITMAP bm = {};

        if (GetObject(hBMP, sizeof(bm), &bm))
        {
            const uint32_t nBPP = bm.bmBitsPixel * bm.bmPlanes; // Account for planarity, even though nobody should be using it these days

            if (nBPP <= 8)
            {
                // Create a DC for the bitmap and select the bitmap into it
                HDC hBitmapDC = CreateCompatibleDC(nullptr);
                HBITMAP hOldBitmap = static_cast<HBITMAP>(SelectObject(hBitmapDC, hBMP));

                RGBQUAD rgbPalTable[256] = {};
                const UINT nTotalColors = GetDIBColorTable(hBitmapDC, 0, ARRAYSIZE(rgbPalTable), rgbPalTable);

                if (nTotalColors)
                {
                    rgclrPaletteData.resize(nTotalColors);

                    for (size_t iPos = 0; iPos < rgclrPaletteData.size(); iPos++)
                    {
                        const COLORREF clrThisColor = RGB(rgbPalTable[iPos].rgbRed, rgbPalTable[iPos].rgbGreen, rgbPalTable[iPos].rgbBlue);
                        rgclrPaletteData.at(iPos) = clrThisColor;
                    }
                }
                else
                {
                    strPossibleError = L"The palette table in this BMP is empty.";
                }

                // Delete the temporary bitmap DC
                SelectObject(hBitmapDC, hOldBitmap);
                DeleteDC(hBitmapDC);
            }
            else
            {
                strPossibleError = L"This is not an indexed BMP file.";
            }
        }
    }

    return (rgclrPaletteData.size() != 0);
}

bool CPalModDlg::LoadPaletteFromBMP(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    CString strError = L"This is not a supported BMP file.";
    std::vector<COLORREF> rgclrPaletteData;
    size_t nHowManyColorsToImport = 0;

    if (LoadDataFromBMPFile(pszFileName, rgclrPaletteData, strError))
    {
        ProcChange();

        CGameClass* CurrGame = GetHost()->GetCurrGame();
        nHowManyColorsToImport = min(rgclrPaletteData.size(), MainPalGroup->GetPalDef(0)->uPalSz);

        uint8_t* pVisiblePalette = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(0)->pPal);

        for (size_t iCurrentIndexInPalette = 0; iCurrentIndexInPalette < nHowManyColorsToImport; iCurrentIndexInPalette++)
        {
            pVisiblePalette[(iCurrentIndexInPalette * 4)] = CurrGame->GetNearestLegal8BitColorValue_RGB(GetRValue(rgclrPaletteData.at(iCurrentIndexInPalette)));
            pVisiblePalette[(iCurrentIndexInPalette * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(GetGValue(rgclrPaletteData.at(iCurrentIndexInPalette)));
            pVisiblePalette[(iCurrentIndexInPalette * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(GetBValue(rgclrPaletteData.at(iCurrentIndexInPalette)));
        }

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        fSuccess = true;
    }

    if (!fSuccess)
    {
        MessageBox(L"Error: This is not a valid indexed BMP file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(strError);
    }
    else
    {
        strError.Format(L"Loaded %u colors from the %u color BMP file.", nHowManyColorsToImport, rgclrPaletteData.size());
        SetStatusText(strError);
    }

    return fSuccess;
}

#include "stdafx.h"
#include "PaletteImport.h"

bool CPaletteImport::GetPaletteFromBMP(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
{
    CString strPossibleError;
    HBITMAP hBMP = static_cast<HBITMAP>(LoadImage(nullptr, pszFileName, IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION | LR_DEFAULTSIZE | LR_LOADFROMFILE));

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
                    rgbaPalette.resize(nTotalColors * 4);

                    for (size_t iPos = 0; iPos < nTotalColors; iPos++)
                    {
                        rgbaPalette.at(iPos * 4) = rgbPalTable[iPos].rgbRed;
                        rgbaPalette.at((iPos * 4) + 1) = rgbPalTable[iPos].rgbGreen;
                        rgbaPalette.at((iPos * 4) + 2) = rgbPalTable[iPos].rgbBlue;
                        rgbaPalette.at((iPos * 4) + 3) = 0xff;
                    }
                }
                else
                {
                    strPossibleError = L"The palette table in this BMP is empty.\r\n";
                }

                // Delete the temporary bitmap DC
                SelectObject(hBitmapDC, hOldBitmap);
                DeleteDC(hBitmapDC);
            }
            else
            {
                strPossibleError = L"This is not an indexed BMP file.\r\n";
            }
        }
    }
    else
    {
        strPossibleError = L"This is not a supported BMP file.\r\n";
    }

    if (strPossibleError.GetLength())
    {
        OutputDebugString(strPossibleError.GetString());
    }

    return !rgbaPalette.empty();
}

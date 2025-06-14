#include "stdafx.h"
#include "PalMod.h"

// This implementation keys off of the helpful documentation by creaothcean and could not exist with it.
// Thank you!

// This handles TileLayer Pro palette files.  These are hinted by the extension ".tpl",
// and contain magic lead bytes 'T' 'P' 'L'.  A type indicator byte follows:
    // 0x00: RGB888
    // 0x01: NES 6bit
    // 0x02: RGB555
// The rest of the file is raw color data.  

void CPalModDlg::SavePaletteToTPL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    // The design here is that we export out the maximum possible number of palettes to the palette file.
    // For the sake of simplicity we'll just pad to 256.

    CFile TPLFile;
    bool fSuccess = false;

    if (TPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
    {
        // We're going to force RGB since that's our default color storage and avoids lossiness.
        const std::array<uint8_t, 4> k_rgTPLHeader =
        {
            0x54, 0x50, 0x4c, 0x00 // T P L 0 [0 indicating RGB]
        };

        TPLFile.Write(&k_rgTPLHeader, static_cast<UINT>(k_rgTPLHeader.size()));

        // The actual TPL 'standard' indicates that valid file length is 2^4, 2^5, 2^6, 2^6, or 2^8.
        // We will simplify to just use 2^8 / 256 for now.
        const uint16_t k_nColorsPerPalette = 256;
        const uint8_t nPaletteCount = m_PalHost.GetCurrentPaletteCount();

        int nTotalColorsUsed = 0;

        for (uint8_t nCurrentPalette = 0; nCurrentPalette < nPaletteCount; nCurrentPalette++)
        {
            CJunk* pPalette = m_PalHost.GetPalCtrl(nCurrentPalette);

            if (pPalette)
            {
                const int nPaletteWorkingAmt = pPalette->GetWorkingAmt();

                if ((nTotalColorsUsed + nPaletteWorkingAmt) > k_nColorsPerPalette)
                {
                    break;
                }

                const uint8_t* pPal = reinterpret_cast<uint8_t*>(pPalette->GetBasePal());

                for (int nActivePaletteIndex = 0; (nTotalColorsUsed < k_nColorsPerPalette) && (nActivePaletteIndex < nPaletteWorkingAmt); nActivePaletteIndex++, nTotalColorsUsed++)
                {
                    TPLFile.Write(&pPal[nActivePaletteIndex * 4], 1);
                    TPLFile.Write(&pPal[nActivePaletteIndex * 4 + 1], 1);
                    TPLFile.Write(&pPal[nActivePaletteIndex * 4 + 2], 1);
                }
            }
        }

        // fill unused area with black
        for (; nTotalColorsUsed < k_nColorsPerPalette; nTotalColorsUsed++)
        {
            const uint8_t dwThisCol = 0;
            TPLFile.Write(&dwThisCol, 1);
            TPLFile.Write(&dwThisCol, 1);
            TPLFile.Write(&dwThisCol, 1);
        }

        TPLFile.Close();

        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_TPLSAVE_SUCCESS : IDS_TPLSAVE_FAILURE);

    fShouldShowGenericError = !fSuccess;
}

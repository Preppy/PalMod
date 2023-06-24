#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "Game\BlazBlueCF_S_DEF.h"

// CFPL and HPAL are BBCF color palette files.
// HPAL is for one 256 color ABGR palette.
// CFPL is a collection of eight 256 color BGRA palettes: exactly enough for one full character

// HPALs are 1056 bytes (0x420 bytes) long.
// There is a 40 byte header followed by 256 ABGR colors.
const size_t k_nRequiredHPALFileSize = 0x420;
const uint8_t k_nHPALHeaderLength = 32;

const std::array<uint8_t, k_nHPALHeaderLength> k_rgHPALHeader =
{
    0x48, 0x50, 0x41, 0x4c, // H P A L
                            0x25, 0x01, 0x00, 0x00,
    0x20, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
};

bool CPalModDlg::LoadPaletteFromHPAL(LPCWSTR pszFileName)
{
    bool fSuccess = false;

    CFile HPALFile;
    if (HPALFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        bool fFileIsValidHPAL = false;

        // Read data from the HPAL...
        if (HPALFile.GetLength() == k_nRequiredHPALFileSize)
        {
            std::array<uint8_t, k_nHPALHeaderLength> rgHeaderBytes = {};

            HPALFile.Seek(0, CFile::begin);
            HPALFile.Read(&rgHeaderBytes, k_nHPALHeaderLength);
            uint8_t nMatchCount = 0;

            for (size_t nPos = 0; nPos < k_nHPALHeaderLength; nPos++)
            {
                if (rgHeaderBytes[nPos] == k_rgHPALHeader[nPos])
                {
                    nMatchCount++;
                }
                else
                {
                    break;
                }
            }

            if (nMatchCount == k_nHPALHeaderLength)
            {
                fFileIsValidHPAL = true;
            }
        }

        if (fFileIsValidHPAL)
        {
            const uint16_t k_nHPALColorCount = 256; // An HPAL by default has 256 (1024 bytes / 4 bytes per color) colors.
            const uint8_t k_nBytesPerColor = 4;
            const size_t k_nColorDataSize = k_nHPALColorCount * k_nBytesPerColor;

            std::array<uint8_t, k_nColorDataSize> rgHPAL = {};

            HPALFile.Seek(k_nHPALHeaderLength, CFile::begin);
            HPALFile.Read(&rgHPAL, static_cast<UINT>(rgHPAL.size()));
            HPALFile.Close();

            // Now consume those colors...
            const uint8_t nTotalPaletteCount = MainPalGroup->GetPalAmt();
            uint32_t nTotalNumberOfCurrentColors = 0;

            for (uint32_t nPalette = 0; nPalette < nTotalPaletteCount; nPalette++)
            {
                nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(nPalette)->uPalSz;
            }

            uint16_t iHPALIndex = 0;
            uint16_t nCurrentPalette = 0;
            uint16_t nTotalColorsUsed = 0;
            bool fHaveLooped = false;
            uint16_t iCurrentIndexInPalette = 0;
            uint8_t* pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

            bool fHaveMultiplePalettes = (nTotalPaletteCount != 1);
            bool* rgfHPALHasColorsForThisPalette = new bool[nTotalPaletteCount];
            memset(rgfHPALHasColorsForThisPalette, false, sizeof(bool) * nTotalPaletteCount);

            if (fHaveMultiplePalettes)
            {
                // we have multiple palettes: ensure that we only use useful data from the HPAL
                uint16_t nOffsetThisPass = 0;
                for (uint8_t iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
                {
                    for (iHPALIndex = nOffsetThisPass; (iHPALIndex < k_nHPALColorCount) && ((iHPALIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz); iHPALIndex++)
                    {
                        uint16_t iIndexToUse = iHPALIndex;
                        if ((rgHPAL[(iIndexToUse * k_nBytesPerColor)] != 0) ||
                            (rgHPAL[(iIndexToUse * k_nBytesPerColor) + 1] != 0) ||
                            (rgHPAL[(iIndexToUse * k_nBytesPerColor) + 2] != 0) ||
                            (rgHPAL[(iIndexToUse * k_nBytesPerColor) + 3] != 0))
                        {
                            rgfHPALHasColorsForThisPalette[iPalette] = true;
                            break;
                        }
                    }

                    nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                }
            }

            iHPALIndex = 0;

            for (size_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                // incoming is ABGR, so flip to be RBGA
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgHPAL[(iHPALIndex * k_nBytesPerColor)]);
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgHPAL[(iHPALIndex * k_nBytesPerColor) + 1]);
                pPal[(iCurrentIndexInPalette * 4)] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgHPAL[(iHPALIndex * k_nBytesPerColor) + 2]);
                pPal[(iCurrentIndexInPalette * 4) + 3] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(rgHPAL[(iHPALIndex * k_nBytesPerColor) + 3]);

                if (++iHPALIndex >= k_nHPALColorCount)
                {
                    // If the palette is larger than our HPAL, loop it.
                    iHPALIndex = 0;
                    fHaveLooped = true;
                }

                iCurrentIndexInPalette++;
                if (((nCurrentPalette + 1) < nTotalPaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                {
                    if (fHaveLooped)
                    {
                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                        nTotalColorsUsed++;
                        break;
                    }
                    else
                    {
                        // advance to the next palette
                        nCurrentPalette++;

                        if (rgfHPALHasColorsForThisPalette[nCurrentPalette])
                        {
                            iCurrentIndexInPalette = 0;
                            pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }

            safe_delete_array(rgfHPALHasColorsForThisPalette);

            ImgDispCtrl->UpdateCtrl();
            m_PalHost.UpdateAllPalCtrls();

            UpdateMultiEdit(TRUE);
            UpdateSliderSel();

            fSuccess = true;
            CString strStatus;
            strStatus.Format(IDS_HPAL_LOADED, nTotalColorsUsed, k_nHPALColorCount);
            SetStatusText(strStatus);
        }
    }

    if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_HPAL_LOADFAILURE);
    }

    return fSuccess;
}

void CPalModDlg::SavePaletteToHPAL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    CFile HPALFile;
    bool fSuccess = false;

    if (HPALFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
    {
        HPALFile.Write(&k_rgHPALHeader, static_cast<UINT>(k_rgHPALHeader.size()));

        const uint16_t k_nColorsPerPalette = 256; // An HPAL has 256 colors.  Fill with black as needed.
        uint8_t* pPal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();

        int nTotalColorsUsed = 0;

        for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
        {
            // Swap to ABGR
            HPALFile.Write(&pPal[nTotalColorsUsed * 4 + 2], 1);
            HPALFile.Write(&pPal[nTotalColorsUsed * 4 + 1], 1);
            HPALFile.Write(&pPal[nTotalColorsUsed * 4], 1);
            HPALFile.Write(&pPal[nTotalColorsUsed * 4 + 3], 1);
        }

        // Check for remaining fill
        uint8_t nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        for (uint8_t nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlNextPage)
            {
                const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nColorsPerPalette) && (nActivePageIndex < nNextPageWorkingAmt); nActivePageIndex++, nTotalColorsUsed++)
                {
                    HPALFile.Write(&pPal[nTotalColorsUsed * 4 + 2], 1);
                    HPALFile.Write(&pPal[nTotalColorsUsed * 4 + 1], 1);
                    HPALFile.Write(&pPal[nTotalColorsUsed * 4], 1);
                    HPALFile.Write(&pPal[nTotalColorsUsed * 4 + 3], 1);
                }
            }
        }

        // fill unused area with black
        for (; nTotalColorsUsed < k_nColorsPerPalette; nTotalColorsUsed++)
        {
            uint8_t dwThisCol = 0;
            HPALFile.Write(&dwThisCol, 1);
            HPALFile.Write(&dwThisCol, 1);
            HPALFile.Write(&dwThisCol, 1);
            dwThisCol = 0xff; // alpha
            HPALFile.Write(&dwThisCol, 1);
        }

        HPALFile.Close();

        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_HPALSAVE_SUCCESS : IDS_HPALSAVE_FAILURE);

    fShouldShowGenericError = !fSuccess;
}

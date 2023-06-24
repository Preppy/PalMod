#include "stdafx.h"
#include "PalMod.h"

bool CPalModDlg::LoadPaletteFromACT(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;
    CFile ActFile;
    if (ActFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        int nFileSz = static_cast<int>(ActFile.GetLength());
        int nACTColorCount = 256; // An ACT by default has 256 (768 bytes / 3 bytes per color) colors.
        bool fHadToFlip = false;

        // Read data from the ACT...
        if (nFileSz == 772) // The documentation states that 768b ACT files do not include color count, but 772b files do.
        {
            WORD wColorCount;
            ActFile.Seek(768, CFile::begin);
            ActFile.Read(&wColorCount, 2);
            // 772b ACT files store their color count big endian: fix.
            nACTColorCount = _byteswap_ushort(wColorCount);
            ActFile.Seek(0, CFile::begin);

            // The last four bytes are reserved: don't use them for color copies.
            nFileSz = 768;
        }

        if (nACTColorCount == 0)
        {
            // Default to everything
            nACTColorCount = 256;
        }

        std::vector<uint8_t> rgAct;
        rgAct.resize(nACTColorCount * 3);

        ActFile.Read(&rgAct[0], nACTColorCount * 3);
        ActFile.Close();

        // Now consume those colors...
        const uint8_t nTotalPaletteCount = MainPalGroup->GetPalAmt();
        int nTotalNumberOfCurrentColors = 0;

        for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
        {
            nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
        }

        uint16_t iACTIndex = 0;
        uint16_t nCurrentPalette = 0;
        uint16_t nTotalColorsUsed = 0;
        bool fHaveLooped = false;
        int iCurrentIndexInPalette = 0;
        uint8_t* pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

        uint16_t nBlackColorCount = 0;

        // This code exists because Fighter Factory writes upside-down color tables.
        for (iACTIndex = 0; iACTIndex < nACTColorCount; iACTIndex++)
        {
            if ((rgAct.at(iACTIndex * 3) == 0) &&
                (rgAct.at((iACTIndex * 3) + 1) == 0) &&
                (rgAct.at((iACTIndex * 3) + 2) == 0))
            {
                nBlackColorCount++;
            }
            else
            {
                break;
            }
        }

        const bool fShouldProcessTopdown = !fReadUpsideDown && (nBlackColorCount < 32) && (nBlackColorCount < nTotalNumberOfCurrentColors);

        bool fHaveMultiplePalettes = (nTotalPaletteCount != 1);
        bool* rgfACTHasColorsForThisPalette = new bool[nTotalPaletteCount];
        memset(rgfACTHasColorsForThisPalette, false, sizeof(bool) * nTotalPaletteCount);

        if (fHaveMultiplePalettes)
        {
            // we have multiple palettes: ensure that we only use useful data from the ACT
            int nOffsetThisPass = 0;
            for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
            {
                const uint16_t nColorsNeededForThisPalette = MainPalGroup->GetPalDef(iPalette)->uPalSz;
                for (iACTIndex = nOffsetThisPass; (iACTIndex < nACTColorCount) && ((iACTIndex - nOffsetThisPass) < nColorsNeededForThisPalette); iACTIndex++)
                {
                    const int iIndexToUse = fShouldProcessTopdown ? iACTIndex : (nACTColorCount - 1 - iACTIndex);
                    if ((rgAct.at(iIndexToUse * 3) != 0) ||
                        (rgAct.at((iIndexToUse * 3) + 1) != 0) ||
                        (rgAct.at((iIndexToUse * 3) + 2) != 0))
                    {
                        if (nColorsNeededForThisPalette <= (nACTColorCount - nOffsetThisPass))
                        {
                            // Only allow usage if we fully cover the secondary palette: ignore incomplete palette coverage
                            rgfACTHasColorsForThisPalette[iPalette] = true;
                        }
                        break;
                    }
                }

                nOffsetThisPass += nColorsNeededForThisPalette;
            }
        }

        if (fShouldProcessTopdown)
        {
            iACTIndex = 0;

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgAct.at(iACTIndex * 3));
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgAct.at((iACTIndex * 3) + 1));
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgAct.at((iACTIndex * 3) + 2));

                if (++iACTIndex >= nACTColorCount)
                {
                    // If the palette is larger than our ACT, loop it.
                    iACTIndex = 0;
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

                        if (rgfACTHasColorsForThisPalette[nCurrentPalette])
                        {
                            iCurrentIndexInPalette = 0;
                            pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                        }
                        else
                        {
                            nTotalColorsUsed++;
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            // TODO: Maybe ask the user before flipping?
            iACTIndex = nACTColorCount - 1;
            fHadToFlip = true;
            iCurrentIndexInPalette = 0;
            nCurrentPalette = 0;
            fHaveLooped = false;
            pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

            OutputDebugString(L"This appears to be a bogus SFF ACT... flipping our ACT table logic...\n");

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgAct.at(iACTIndex * 3));
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgAct.at((iACTIndex * 3) + 1));
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgAct.at((iACTIndex * 3) + 2));

                // This code exists because Fighter Factory writes upside-down color tables.
                if (--iACTIndex >= nACTColorCount)
                {
                    // If the palette is larger than our ACT, loop it.
                    iACTIndex = nTotalNumberOfCurrentColors;
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
                        if (iACTIndex >= nBlackColorCount)
                        {
                            // advance to the next palette
                            nCurrentPalette++;

                            if (rgfACTHasColorsForThisPalette[nCurrentPalette])
                            {
                                iCurrentIndexInPalette = 0;
                                pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                            }
                            else
                            {
                                nTotalColorsUsed++;
                                break;
                            }
                        }
                        else
                        {
                            // The next palette chunk is all black: don't stomp on a further palette with reversed black/empty colors
                            nTotalColorsUsed++;
                            break;
                        }
                    }
                }               
            }
        }

        safe_delete_array(rgfACTHasColorsForThisPalette);

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        fSuccess = true;
        CString strStatus;
        if (fHadToFlip)
        {
            strStatus.Format(IDS_ACT_REVERSEDLOAD, nTotalColorsUsed);
        }
        else
        {
            strStatus.Format(IDS_ACT_LOADED, nTotalColorsUsed, nACTColorCount);
        }

        SetStatusText(strStatus);
    }

    if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_ACT_LOADFAILURE);
    }

    return fSuccess;
}

void CPalModDlg::SavePaletteToACT(LPCWSTR pszFileName, bool fRightsideUp, bool& fShouldShowGenericError)
{
    CFile ActFile;
    bool fSuccess = false;

    if (ActFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
    {
        // We are writing this file in accordance with the spec as found here--
        //   https://www.adobe.com/devnet-apps/photoshop/fileformatashtml/#50577411_pgfId-1070626
        // In theory we should be able to just write a 768 byte file, but there appears to be a bug in PhotoShop's
        // ACT import wherein they mangle the parse for 768b files.  Thus we are forcibly using 772b here.

        const int k_nMaxColorsAllowed = 256;
        const int nActSz = k_nMaxColorsAllowed * 3;
        std::array<uint8_t, nActSz> rgAct = {};

        uint8_t* pPal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        uint8_t nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        int nTotalColorsUsed = 0;

        if (fRightsideUp)
        {
            for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
            {
                rgAct.at(nTotalColorsUsed * 3) = pPal[nTotalColorsUsed * 4];
                rgAct.at((nTotalColorsUsed * 3) + 1) = pPal[nTotalColorsUsed * 4 + 1];
                rgAct.at((nTotalColorsUsed * 3) + 2) = pPal[nTotalColorsUsed * 4 + 2];
            }

            for (uint8_t nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
            {
                CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

                if (pPalCtrlNextPage)
                {
                    const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                    for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) &&
                                                   (nActivePageIndex < nNextPageWorkingAmt) &&
                                                   (nTotalColorsUsed < nWorkingAmt);
                        nActivePageIndex++)
                    {
                        rgAct.at(nTotalColorsUsed * 3) = pPal[nTotalColorsUsed * 4];
                        rgAct.at((nTotalColorsUsed * 3) + 1) = pPal[nTotalColorsUsed * 4 + 1];
                        rgAct.at((nTotalColorsUsed * 3) + 2) = pPal[nTotalColorsUsed * 4 + 2];
                        nTotalColorsUsed++;
                    }
                }
            }
        }
        else //upside-down for fighter factory 3
        {
            int nWriteLocation = k_nMaxColorsAllowed - 1;
            for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
            {
                rgAct.at((nWriteLocation - nTotalColorsUsed) * 3) = pPal[nTotalColorsUsed * 4];
                rgAct.at(((nWriteLocation - nTotalColorsUsed) * 3) + 1) = pPal[nTotalColorsUsed * 4 + 1];
                rgAct.at(((nWriteLocation - nTotalColorsUsed) * 3) + 2) = pPal[nTotalColorsUsed * 4 + 2];
            }

            for (uint8_t nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
            {
                CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

                if (pPalCtrlNextPage)
                {
                    const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                    for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) &&
                                                   (nActivePageIndex < nNextPageWorkingAmt) &&
                                                   (nTotalColorsUsed < nWorkingAmt);
                        nActivePageIndex++)
                    {
                        rgAct.at((nWriteLocation - nTotalColorsUsed) * 3) = pPal[nTotalColorsUsed * 4];
                        rgAct.at(((nWriteLocation - nTotalColorsUsed) * 3) + 1) = pPal[nTotalColorsUsed * 4 + 1];
                        rgAct.at(((nWriteLocation - nTotalColorsUsed) * 3) + 2) = pPal[nTotalColorsUsed * 4 + 2];
                        nTotalColorsUsed++;
                    }
                }
            }

            // max this since we started the write at the end
            nTotalColorsUsed = k_nMaxColorsAllowed;
        }

        ActFile.Write(&rgAct[0], nActSz);

        // Add 4 bytes per the 772b file syntax...
        // First two here is the number of useful colors in the file.
        // Second two here is be the index to use for the transparency color.  This is 0 in all the games we care about.

        // Please note that Photoshop is expecting this big endian, so we byteswap to ensure correct orientation.
        WORD transparencyColorIndex = 0;
        WORD colorCount = _byteswap_ushort(nTotalColorsUsed);
        ActFile.Write(&colorCount, 2);
        ActFile.Write(&transparencyColorIndex, 2);

        ActFile.Close();

        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_ACTSAVE_SUCCESS : IDS_ACTSAVE_FAILURE);

    fShouldShowGenericError = !fSuccess;
}

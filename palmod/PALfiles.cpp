#include "stdafx.h"
#include "PalMod.h"
#include <mmiscapi.h> // RIFF .PAL support

bool CPalModDlg::LoadPaletteFromPAL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fFoundPALChunk = false;

    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_READ);

    if (hRIFFFile)
    {
        MMCKINFO mmckinfoParent;

        memset(&mmckinfoParent, 0, sizeof(mmckinfoParent));

        MMRESULT mmRes = mmioDescend(hRIFFFile, &mmckinfoParent, nullptr, MMIO_FINDCHUNK);
        if (mmRes == MMSYSERR_NOERROR)
        {
            // found some palette data.
            FOURCC fourCCPal = mmioFOURCC('P', 'A', 'L', ' ');

            if (mmckinfoParent.fccType == fourCCPal)
            {
                MMCKINFO mmckinfoSubchunk;
                memset(&mmckinfoSubchunk, 0, sizeof(mmckinfoSubchunk));

                fFoundPALChunk = true;

                mmckinfoSubchunk.ckid = mmioFOURCC('d', 'a', 't', 'a');

                if (mmioDescend(hRIFFFile, &mmckinfoSubchunk, &mmckinfoParent, MMIO_FINDCHUNK) == MMSYSERR_NOERROR)
                {
                    DWORD dwDataSize;
                    dwDataSize = mmckinfoSubchunk.cksize;

                    if ((dwDataSize > 0))
                    {
                        std::vector<uint8_t> rgPALFileData;
                        rgPALFileData.resize(dwDataSize);

                        if (mmioRead(hRIFFFile, reinterpret_cast<HPSTR>(&rgPALFileData[0]), dwDataSize) == dwDataSize)
                        {
                            // party.
                            ProcChange();

                            const uint8_t nActivePaletteCount = MainPalGroup->GetPalAmt();
                            const int nPALColorCount = (dwDataSize / 4);

                            uint16_t iPALDataIndex = 0;
                            uint16_t nCurrentPalette = 0;
                            uint16_t nTotalColorsUsed = 0;
                            bool fHaveLooped = false;
                            int iCurrentIndexInPalette = 0;
                            int nTotalNumberOfCurrentPaletteColors = 0;

                            for (uint8_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                            {
                                nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                            }

                            uint8_t* pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                            size_t nCurrentPalSizeInChannels = MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz * 4;

                            for (int iAbsoluteColorIndex = 0; iAbsoluteColorIndex < nTotalNumberOfCurrentPaletteColors; iAbsoluteColorIndex++, nTotalColorsUsed++)
                            {
                                // copy over the RGB data, skipping the A value
                                pPal[iCurrentIndexInPalette * 4]       = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgPALFileData.at(iPALDataIndex * 4));
                                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgPALFileData.at((iPALDataIndex * 4) + 1));
                                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgPALFileData.at((iPALDataIndex * 4) + 2));

                                if (++iPALDataIndex >= nPALColorCount)
                                {
                                    // If the palette is larger than our PAL, loop it.
                                    iPALDataIndex = 0;
                                    fHaveLooped = true;
                                }

                                iCurrentIndexInPalette++;
                                if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == nCurrentPalSizeInChannels))
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
                                        iCurrentIndexInPalette = 0;

                                        nCurrentPalSizeInChannels = MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz * 4;

                                        pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);
                                    }
                                }
                            }

                            ImgDispCtrl->UpdateCtrl();
                            m_PalHost.UpdateAllPalCtrls();

                            UpdateMultiEdit(TRUE);
                            UpdateSliderSel();

                            fSuccess = true;
                            CString strStatus;
                            strStatus.Format(IDS_PAL_LOADED, nTotalColorsUsed, nPALColorCount);
                            SetStatusText(strStatus);
                        }
                    }
                }
            }
        }

        mmioClose(hRIFFFile, 0);
    }

    if (!fFoundPALChunk)
    {
        MessageBox(L"Error: This is not a Microsoft PAL RIFF file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PAL_LOADFAILURE);
    }
    else if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_PAL_LOADFAILURE);
    }

    return fSuccess;
}

void CPalModDlg::SavePaletteToPAL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    bool fSuccess = false;

    // Microsoft RIFF PAL file.  Used by the UNIST workflow supposedly
    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_WRITE | MMIO_CREATE);

    if (hRIFFFile)
    {
        MMCKINFO mmckInfo = {};
        mmckInfo.fccType = mmioFOURCC('P', 'A', 'L', ' ');
        mmckInfo.cksize = 0;
        mmckInfo.dwFlags = MMIO_DIRTY;

        if (mmioCreateChunk(hRIFFFile, &mmckInfo, MMIO_CREATERIFF) == MMSYSERR_NOERROR)
        {
            MMCKINFO mmckInfoData;
            memset(&mmckInfoData, 0, sizeof(mmckInfoData));

            // Write out the current palette
            uint8_t* pPal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());
            int nColorCount = CurrPalCtrl->GetWorkingAmt();

            mmckInfoData.ckid = mmioFOURCC('d', 'a', 't', 'a');
            mmckInfoData.cksize = 0;
            mmckInfoData.dwFlags = MMIO_DIRTY;

            if (mmioCreateChunk(hRIFFFile, &mmckInfoData, 0) == MMSYSERR_NOERROR)
            {
                const int nBytesToWrite = nColorCount * 4;
                fSuccess = (mmioWrite(hRIFFFile, (const char*)pPal, nBytesToWrite) == nBytesToWrite);
                mmioAscend(hRIFFFile, &mmckInfoData, 0);
            }

            mmioAscend(hRIFFFile, &mmckInfo, 0);
        }

        mmioClose(hRIFFFile, 0);
    }

    SetStatusText(fSuccess ? IDS_PALSAVE_SUCCESS : IDS_PALSAVE_FAILURE);
    
    fShouldShowGenericError = !fSuccess;
}

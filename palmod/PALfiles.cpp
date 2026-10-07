#include "stdafx.h"
#include "PalMod.h"
#include <mmiscapi.h> // RIFF .PAL support
#include "PaletteImport.h"

bool CPaletteImport::GetPaletteFromPAL_RIFF(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
{
    bool fSuccess = true;
    bool fFoundPALChunk = false;
    HMMIO hRIFFFile = mmioOpen(const_cast<LPTSTR>(pszFileName), nullptr, MMIO_READ);

    if (hRIFFFile)
    {
        MMCKINFO mmckinfoParent;

        memset(&mmckinfoParent, 0, sizeof(mmckinfoParent));

        MMRESULT mmRes = mmioDescend(hRIFFFile, &mmckinfoParent, nullptr, MMIO_FINDCHUNK);
        if (mmRes == MMSYSERR_NOERROR)
        {
            // found some palette data.
            const FOURCC fourCCPal = mmioFOURCC('P', 'A', 'L', ' ');

            if (mmckinfoParent.fccType == fourCCPal)
            {
                MMCKINFO mmckinfoSubchunk;
                memset(&mmckinfoSubchunk, 0, sizeof(mmckinfoSubchunk));

                fFoundPALChunk = true;

                mmckinfoSubchunk.ckid = mmioFOURCC('d', 'a', 't', 'a');

                if (mmioDescend(hRIFFFile, &mmckinfoSubchunk, &mmckinfoParent, MMIO_FINDCHUNK) == MMSYSERR_NOERROR)
                {
                    const DWORD dwDataSize = mmckinfoSubchunk.cksize;

                    if ((dwDataSize > 0))
                    {
                        std::vector<uint8_t> rgPALFileData(dwDataSize);

                        if (mmioRead(hRIFFFile, reinterpret_cast<HPSTR>(&rgPALFileData[0]), dwDataSize) == static_cast<LONG>(dwDataSize))
                        {
                            rgbaPalette.resize(dwDataSize);

                            for (DWORD iReadPos = 0, iWritePos = 0; iReadPos < dwDataSize; iReadPos++)
                            {
                                // Stomp alpha
                                rgbaPalette.at(iWritePos++) = rgPALFileData.at(iReadPos++);
                                rgbaPalette.at(iWritePos++) = rgPALFileData.at(iReadPos++);
                                rgbaPalette.at(iWritePos++) = rgPALFileData.at(iReadPos++);
                                rgbaPalette.at(iWritePos++) = 0xff;
                            }

                            fSuccess = true;

                            CString strMsg;

                            strMsg.Format(L"Loaded %u colors MSFT PAL file.\r\n", static_cast<uint16_t>(dwDataSize / 4));
                            OutputDebugString(strMsg.GetString());
                        }
                    }
                }
            }
        }

        mmioClose(hRIFFFile, 0);
    }

    if (!fFoundPALChunk)
    {
        OutputDebugString(L"Error: This is not a Microsoft PAL RIFF file.\r\n");
    }

    return fSuccess && !rgbaPalette.empty();
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
            uint8_t* pPal = reinterpret_cast<uint8_t*>(m_CurrPalCtrl->GetBasePal());
            const int nColorCount = m_CurrPalCtrl->GetWorkingAmt();

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

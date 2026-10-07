#include "stdafx.h"
#include "PalMod.h"
#include "PaletteImport.h"

bool CPaletteImport::GetPaletteFromACT(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
{
    bool fSuccess = true;
    CFile ActFile;

    if (ActFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        const ULONGLONG nFileSz = ActFile.GetLength();
        size_t nACTColorCount = MAXAMT_ColorsPerPaletteTable; // An ACT by default has 256 (768 bytes / 3 bytes per color) colors.
        bool fAcceptableFileSize = false;

        // validate file size
        switch (nFileSz)
        {
            case 768:
                fAcceptableFileSize = true;
                break;
            case 772: // The documentation states that 768b ACT files do not include color count, but 772b files do.
            {
                WORD wColorCount;
                ActFile.Seek(768, CFile::begin);
                ActFile.Read(&wColorCount, 2);
                // 772b ACT files store their color count big endian: fix.
                nACTColorCount = _byteswap_ushort(wColorCount);
                ActFile.Seek(0, CFile::begin);

                // The last four bytes are reserved: don't use them for color copies.
                fAcceptableFileSize = true;
                break;
            }
            default:
                fAcceptableFileSize = false;
                break;
        }

        // Read data from the ACT...
        if (fAcceptableFileSize) // We only support 768/772 byte ACT files
        {
            if (nACTColorCount == 0)
            {
                // Default to everything
                nACTColorCount = MAXAMT_ColorsPerPaletteTable;
            }

            std::vector<uint8_t> rgACT_RGBPalette(nACTColorCount * 3);
            rgbaPalette.resize(nACTColorCount * 4);

            ActFile.Read(&rgACT_RGBPalette[0], static_cast<UINT>(rgACT_RGBPalette.size()));

            for (size_t iWalkPos = 0; iWalkPos < nACTColorCount; iWalkPos++)
            {
                rgbaPalette.at(iWalkPos * 4) = rgACT_RGBPalette.at(iWalkPos * 3);
                rgbaPalette.at((iWalkPos * 4) + 1) = rgACT_RGBPalette.at((iWalkPos * 3) + 1);
                rgbaPalette.at((iWalkPos * 4) + 2) = rgACT_RGBPalette.at((iWalkPos * 3) + 2);
                rgbaPalette.at((iWalkPos * 4) + 3) = 0xff;
            }

            fSuccess = true;
        }

        ActFile.Close();

        CString strMsg;

        strMsg.Format(L"Loaded %u colors from %u byte ACT file.\r\n", nACTColorCount, static_cast<uint32_t>(nFileSz));
        OutputDebugString(strMsg.GetString());
    }

    return fSuccess && !rgbaPalette.empty();
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
        const int nActSz = MAXAMT_ColorsPerPaletteTable * 3;
        std::array<uint8_t, nActSz> rgAct = {};

        const uint8_t nPaletteCount = static_cast<uint8_t>(m_PalHost.GetCurrentPaletteCount());

        size_t nTotalColorsUsed = 0;

        if (fRightsideUp)
        {
            for (uint8_t nCurrentPalette = 0; nCurrentPalette < nPaletteCount; nCurrentPalette++)
            {
                CJunk* pPalette = m_PalHost.GetPalCtrl(nCurrentPalette);

                if (pPalette)
                {
                    const int nPaletteWorkingAmt = pPalette->GetWorkingAmt();

                    if ((nTotalColorsUsed + nPaletteWorkingAmt) > MAXAMT_ColorsPerPaletteTable)
                    {
                        break;
                    }

                    const uint8_t* pPal = reinterpret_cast<uint8_t*>(pPalette->GetBasePal());

                    for (int nActivePaletteIndex = 0; (nActivePaletteIndex < nPaletteWorkingAmt) && (nTotalColorsUsed < MAXAMT_ColorsPerPaletteTable); nActivePaletteIndex++, nTotalColorsUsed++)
                    {
                        rgAct.at(nTotalColorsUsed * 3)       = pPal[(nActivePaletteIndex * 4)];
                        rgAct.at((nTotalColorsUsed * 3) + 1) = pPal[(nActivePaletteIndex * 4) + 1];
                        rgAct.at((nTotalColorsUsed * 3) + 2) = pPal[(nActivePaletteIndex * 4) + 2];
                    }
                }
            }
        }
        else //upside-down for fighter factory 3
        {
            int nWriteLocation = MAXAMT_ColorsPerPaletteTable - 1;

            for (uint8_t nCurrentPalette = 0; nCurrentPalette < nPaletteCount; nCurrentPalette++)
            {
                CJunk* pPalette = m_PalHost.GetPalCtrl(nCurrentPalette);

                if (pPalette)
                {
                    const int nPaletteWorkingAmt = pPalette->GetWorkingAmt();

                    if ((nTotalColorsUsed + nPaletteWorkingAmt) > MAXAMT_ColorsPerPaletteTable)
                    {
                        break;
                    }

                    const uint8_t* pPal = reinterpret_cast<uint8_t*>(pPalette->GetBasePal());

                    for (int nActivePaletteIndex = 0; (nActivePaletteIndex < nPaletteWorkingAmt) && (nTotalColorsUsed < MAXAMT_ColorsPerPaletteTable); nActivePaletteIndex++, nTotalColorsUsed++)
                    {
                        rgAct.at((nWriteLocation - nTotalColorsUsed) * 3)       = pPal[(nActivePaletteIndex * 4)];
                        rgAct.at(((nWriteLocation - nTotalColorsUsed) * 3) + 1) = pPal[(nActivePaletteIndex * 4) + 1];
                        rgAct.at(((nWriteLocation - nTotalColorsUsed) * 3) + 2) = pPal[(nActivePaletteIndex * 4) + 2];
                    }
                }
            }

            // max this since we started the write at the end
            nTotalColorsUsed = MAXAMT_ColorsPerPaletteTable;
        }

        ActFile.Write(&rgAct[0], nActSz);

        // Add 4 bytes per the 772b file syntax...
        // First two here is the number of useful colors in the file.
        // Second two here is be the index to use for the transparency color.  This is 0 in all the games we care about.

        // Please note that Photoshop is expecting this big endian, so we byteswap to ensure correct orientation.
        WORD transparencyColorIndex = 0;
        WORD colorCount = _byteswap_ushort(static_cast<unsigned short>(nTotalColorsUsed));
        ActFile.Write(&colorCount, 2);
        ActFile.Write(&transparencyColorIndex, 2);

        ActFile.Close();

        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_ACTSAVE_SUCCESS : IDS_ACTSAVE_FAILURE);

    fShouldShowGenericError = !fSuccess;
}

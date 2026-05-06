#include "stdafx.h"
#include "PalMod.h"
#include "ImgOutDlg.h"

bool AdvanceGIFFilePointerToNextColorTable(CFile& sourceGIF, uint8_t& nPackedCTByte)
{
    while (true)
    {
        uint8_t nBlockID = 0;
        uint8_t nDummyByte = 0;
        uint8_t nBlockSize = 0;

        sourceGIF.Read(&nBlockID, 1);

        if (nBlockID == 0x21) // Extension chunk
        {
            sourceGIF.Read(&nDummyByte, 1);

            while (true)
            {
                sourceGIF.Read(&nBlockSize, 1);
                if (nBlockSize)
                {
                    sourceGIF.Seek(nBlockSize, CFile::current);
                }
                else
                {
                    break;
                }
            }
        }
        else if (nBlockID == 0x2C) // Image descriptor chunk
        {
            // skip layout(x,y) dimensions(x,y)
            sourceGIF.Seek(8, CFile::current);
            sourceGIF.Read(&nPackedCTByte, 1);

            return (nPackedCTByte & 0x80);
        }
        else if (nBlockID == 0x3B) // Trailing chunk leading to EOF
        {
            break;
        }
        else
        {
            break;
        }
    }

    return false;
}

bool CPalModDlg::LoadGIFHeaderAndValidate(CFile& sourceGIF, GIFHeader& gif_header, bool& fUsesGlobalColorTable)
{
    bool fIsValidGIF = false;

    sourceGIF.Read(&gif_header, sizeof(gif_header));

    if ((gif_header.type[0] == 'G') &&
        (gif_header.type[1] == 'I') &&
        (gif_header.type[2] == 'F'))
    {
        if ((gif_header.version[0] == '8') &&
            ((gif_header.version[1] == '7') || (gif_header.version[1] == '9')) && // 87a and 89a are identical for our purposes
            (gif_header.version[2] == 'a'))
        {
            fUsesGlobalColorTable = (gif_header.flags & 0x80);
            // This is the bbp for the source image, useless for our needs
            const uint8_t ColorResolution = ((gif_header.flags & 0x70) >> 4) + 1;
            const bool TableSorted = (gif_header.flags & 0x08);

            fIsValidGIF = true;
        }
        else
        {
            MessageBox(L"Error: this is not a supported GIF file", GetHost()->GetAppName(), MB_ICONERROR);
            SetStatusText(L"That is not a supported GIF file.");
        }
    }
    else if ((gif_header.type[0] == 'R') &&
             (gif_header.type[1] == 'I') &&
             (gif_header.type[2] == 'F') &&
             (gif_header.version[0] == 'F'))
    {
        MessageBox(L"Error: this is a WEBP file not a GIF.  WEBP files are not currently supported.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(L"WEBP is not supported.");
    }
    else
    {
        MessageBox(L"Error: this is not a GIF file", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(L"That is not a GIF file.");
    }

    return fIsValidGIF;
}

bool CPalModDlg::ReadPaletteFromGIFFile(LPCWSTR pszGIFFileName, std::vector<COLORREF>& rgclrPaletteData)
{
    CFile sourceGIF;

    // Populate color table from file
    if (sourceGIF.Open(pszGIFFileName, CFile::modeRead | CFile::typeBinary))
    {
        GIFHeader header = {};
        bool fUsesGlobalColorTable = false;

        if (LoadGIFHeaderAndValidate(sourceGIF, header, fUsesGlobalColorTable))
        {
            uint8_t nPackedCTByte = 0;
            if (fUsesGlobalColorTable)
            {
                nPackedCTByte = header.flags;
            }
            else
            {
                // Use the first local for now
                AdvanceGIFFilePointerToNextColorTable(sourceGIF, nPackedCTByte);
            }

            if (nPackedCTByte & 0x80)
            {
                const uint8_t packedGlobalColorTableSize = (nPackedCTByte & 0x07) + 1;
                const size_t nColorTableSize = static_cast<size_t>(pow(2, packedGlobalColorTableSize));

                rgclrPaletteData.resize(nColorTableSize);

                for (size_t iPos = 0; iPos < rgclrPaletteData.size(); iPos++)
                {
                    uint8_t red = 0, green = 0, blue = 0;

                    sourceGIF.Read(&red, sizeof(red));
                    sourceGIF.Read(&green, sizeof(green));
                    sourceGIF.Read(&blue, sizeof(blue));

                    rgclrPaletteData.at(iPos) = RGB(red, green, blue);
                }
            }
        }

        sourceGIF.Close();
    }

    return (!rgclrPaletteData.empty());
}

bool CPalModDlg::LoadPaletteFromGIF(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    CString strError = L"Unknown error loading GIF file.";
    std::vector<COLORREF> rgclrPaletteData;

    if (ReadPaletteFromGIFFile(pszFileName, rgclrPaletteData))
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        ProcChange();

        const uint32_t nActivePaletteCount = MainPalGroup->GetPalAmt();
        uint32_t nTotalNumberOfCurrentPaletteColors = 0;

        for (uint32_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
        {
            nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
        }

        uint16_t iGIFIndex = 0;
        uint32_t nCurrentPalette = 0;
        uint16_t nTotalColorsUsed = 0;
        bool fHaveLooped = false;
        int iCurrentIndexInPalette = 0;
        uint8_t* pPal = reinterpret_cast<uint8_t *>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

        const bool fHaveMultiplePalettes = (nActivePaletteCount != 1);
        uint16_t nLastPaletteWeHaveColorsFor = 0;

        if (fHaveMultiplePalettes)
        {
            int nOffsetThisPass = 0;
            for (uint32_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
            {
                for (iGIFIndex = nOffsetThisPass; (iGIFIndex < nTotalNumberOfCurrentPaletteColors) &&
                                                  ((iGIFIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz) &&
                                                  (iGIFIndex < rgclrPaletteData.size()); iGIFIndex++)
                {
                    if ((rgclrPaletteData.at(iGIFIndex) & 0xFFFFFF) != 0)
                    {
                        nLastPaletteWeHaveColorsFor = iPalette + 1;
                        break;
                    }
                }

                nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
            }
        }

        iGIFIndex = 0;

        for (uint32_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
        {
            pPal[(iCurrentIndexInPalette * 4)]     = CurrGame->GetNearestLegal8BitColorValue_RGB(GetRValue(rgclrPaletteData.at(iGIFIndex)));
            pPal[(iCurrentIndexInPalette * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(GetGValue(rgclrPaletteData.at(iGIFIndex)));
            pPal[(iCurrentIndexInPalette * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(GetBValue(rgclrPaletteData.at(iGIFIndex)));

            if (++iGIFIndex >= rgclrPaletteData.size())
            {
                // If the palette is larger than our GIF, loop it.
                iGIFIndex = 0;
                fHaveLooped = true;
            }

            iCurrentIndexInPalette++;
            if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
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

                    if (nCurrentPalette < nLastPaletteWeHaveColorsFor)
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

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        CString strInfo;
        strInfo.Format(L"Loaded %u colors from %u color GIF file.", nTotalColorsUsed, static_cast<int>(rgclrPaletteData.size()));

        SetStatusText(strInfo);

        fSuccess = true;

        OutputDebugString(L"gifreader: done!\n");
    }
    else
    {
        SetStatusText(L"GIF palette import failed.");
    }

    return fSuccess;
}

bool CImgOutDlg::_WritePaletteToGIF(CFile& positionedGIFiIle, uint8_t nPackedByte)
{
    const uint8_t packedGlobalColorTableSize = (nPackedByte & 0x07) + 1;
    const size_t nColorTableSize = static_cast<size_t>(pow(2, packedGlobalColorTableSize));

    // Walk past the transparency color
    positionedGIFiIle.Seek(3, CFile::current);
    size_t iReadPos = 0;

    for (size_t iWritePos = 1; iWritePos < nColorTableSize; iWritePos++)
    {
        const COLORREF curColor = m_DumpBmp.m_pppPalettes[0][m_DumpBmp.m_nPalIndex][iReadPos++];

        const uint8_t red = GetRValue(curColor);
        const uint8_t green = GetGValue(curColor);
        const uint8_t blue = GetBValue(curColor);

        positionedGIFiIle.Write(&red, sizeof(red));
        positionedGIFiIle.Write(&green, sizeof(green));
        positionedGIFiIle.Write(&blue, sizeof(blue));

        if (iReadPos == m_DumpBmp.m_rgSrcImg[0]->uPalSz)
        {
            // loop
            iReadPos = 0;
        }
    }

    return true;
}

bool CImgOutDlg::UpdatePaletteInGIF(CString output_str)
{
    bool fSuccess = false;
    CFile sourceGIF;

    // Populate color table from file
    if (sourceGIF.Open(output_str, CFile::modeReadWrite | CFile::typeBinary))
    {
        CString strPossibleError;
        GIFHeader header = {};
        std::vector<COLORREF> rgclrPaletteData;
        bool fUsesGlobalColorTable = false;

        if (GetHost()->GetPalModDlg()->LoadGIFHeaderAndValidate(sourceGIF, header, fUsesGlobalColorTable))
        {
            if (fUsesGlobalColorTable)
            {
                // the simple case
                _WritePaletteToGIF(sourceGIF, header.flags);
                fSuccess = true;
            }
            else
            {
                uint8_t nPackedCTByte = 0;

                while (AdvanceGIFFilePointerToNextColorTable(sourceGIF, nPackedCTByte))
                {
                    uint8_t nDummyByte = 0;
                    uint8_t nBlockSize = 0;

                    OutputDebugString(L"\tUpdated GIF local color table.\r\n");
                    fSuccess = _WritePaletteToGIF(sourceGIF, nPackedCTByte);

                    if (!fSuccess)
                    {
                        break;
                    }

                    // Now skip past the image data
                    // Skip LZW byte
                    sourceGIF.Read(&nDummyByte, 1);
                    while (true)
                    {
                        sourceGIF.Read(&nBlockSize, 1);
                        if (nBlockSize)
                        {
                            sourceGIF.Seek(nBlockSize, CFile::current);
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }

        if (!fSuccess)
        {
            GetHost()->GetPalModDlg()->SetStatusText(L"Image export failed: failed to update color tables.");
        }

        sourceGIF.Close();
    }
    else
    {
        GetHost()->GetPalModDlg()->SetStatusText(L"Image export failed: unable to open GIF file.");
    }

    return fSuccess;
}

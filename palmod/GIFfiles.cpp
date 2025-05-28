#include "stdafx.h"
#include "PalMod.h"
#include "ImgOutDlg.h"

bool CPalModDlg::LoadGIFHeaderAndValidate(CFile& sourceGIF, GIFHeader& gif_header)
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
            bool UseGlobalColorTable = (gif_header.flags & 0x80);
            // This is the bbp for the source image, useless for our needs
            uint8_t ColorResolution = ((gif_header.flags & 0x70) >> 4) + 1;
            bool TableSorted = (gif_header.flags & 0x08);

            if (UseGlobalColorTable)
            {
                fIsValidGIF = true;
            }
            else
            {
                MessageBox(L"Error: GIF using local color data: we don't support those.", GetHost()->GetAppName(), MB_ICONERROR);
                SetStatusText(L"GIF using local color data: we don't support those.");
            }
        }
        else
        {
            MessageBox(L"Error: this is not a supported GIF file", GetHost()->GetAppName(), MB_ICONERROR);
            SetStatusText(L"That is not a supported  GIF file.");
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

bool CPalModDlg::LoadDataFromGIFFile(LPCWSTR pszGIFFileName, std::vector<COLORREF>& rgclrPaletteData)
{
    CFile sourceGIF;

    // Populate color table from file
    if (sourceGIF.Open(pszGIFFileName, CFile::modeRead | CFile::typeBinary))
    {
        GIFHeader header = {};

        if (LoadGIFHeaderAndValidate(sourceGIF, header))
        {
            uint8_t packedGlobalColorTableSize = (header.flags & 0x07) + 1;
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

        sourceGIF.Close();
    }

    return (rgclrPaletteData.size() != 0);
}

bool CPalModDlg::LoadPaletteFromGIF(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    CString strError = L"Unknown error loading GIF file.";
    std::vector<COLORREF> rgclrPaletteData;

    if (LoadDataFromGIFFile(pszFileName, rgclrPaletteData))
    {
        ProcChange();

        const uint8_t nActivePaletteCount = MainPalGroup->GetPalAmt();
        uint32_t nTotalNumberOfCurrentPaletteColors = 0;

        for (uint16_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
        {
            nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
        }

        uint16_t iGIFIndex = 0;
        uint16_t nCurrentPalette = 0;
        uint16_t nTotalColorsUsed = 0;
        bool fHaveLooped = false;
        int iCurrentIndexInPalette = 0;
        uint8_t* pPal = reinterpret_cast<uint8_t *>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

        const bool fHaveMultiplePalettes = (nActivePaletteCount != 1);
        bool* rgfGIFHasColorsForThisPalette = new bool[nActivePaletteCount];
        memset(rgfGIFHasColorsForThisPalette, false, sizeof(bool) * nActivePaletteCount);

        if (fHaveMultiplePalettes)
        {
            int nOffsetThisPass = 0;
            for (int iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
            {
                for (iGIFIndex = nOffsetThisPass; (iGIFIndex < nTotalNumberOfCurrentPaletteColors) &&
                                                  ((iGIFIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz) &&
                                                  (iGIFIndex < rgclrPaletteData.size()); iGIFIndex++)
                {
                    if ((rgclrPaletteData.at(iGIFIndex) & 0xFFFFFF) != 0)
                    {
                        rgfGIFHasColorsForThisPalette[iPalette] = true;
                        break;
                    }
                }

                nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
            }
        }

        iGIFIndex = 0;

        for (uint32_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
        {
            pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(rgclrPaletteData.at(iGIFIndex)));
            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(rgclrPaletteData.at(iGIFIndex)));
            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(rgclrPaletteData.at(iGIFIndex)));

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

                    if (rgfGIFHasColorsForThisPalette[nCurrentPalette])
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

        safe_delete_array(rgfGIFHasColorsForThisPalette);

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

    return fSuccess;
}

void CImgOutDlg::UpdatePaletteInGIF(CString output_str)
{
    CFile sourceGIF;

    // Populate color table from file
    if (sourceGIF.Open(output_str, CFile::modeReadWrite | CFile::typeBinary))
    {
        CString strPossibleError;
        GIFHeader header = {};
        std::vector<COLORREF> rgclrPaletteData;

        if (GetHost()->GetPalModDlg()->LoadGIFHeaderAndValidate(sourceGIF, header))
        {
            const uint8_t packedGlobalColorTableSize = (header.flags & 0x07) + 1;
            const size_t nColorTableSize = static_cast<size_t>(pow(2, packedGlobalColorTableSize));

            const size_t minWriteSize = min(nColorTableSize, m_DumpBmp.m_rgSrcImg[0]->uPalSz);

            // Walk past the transparency color
            sourceGIF.Seek(3, CFile::current);

            for (size_t iPos = 1; iPos < minWriteSize; iPos++)
            {
                const COLORREF curColor = m_DumpBmp.m_pppPalettes[0][m_DumpBmp.m_nPalIndex][iPos];

                const uint8_t red   = GetRValue(curColor);
                const uint8_t green = GetGValue(curColor);
                const uint8_t blue  = GetBValue(curColor);

                sourceGIF.Write(&red, sizeof(red));
                sourceGIF.Write(&green, sizeof(green));
                sourceGIF.Write(&blue, sizeof(blue));
            }
        }

        sourceGIF.Close();
    }

    return;
}

#include "stdafx.h"
#include "PalMod.h"
#include "ImgOutDlg.h"

// GIF headers use an odd number of bytes, so avoid having our struct padded
#pragma pack(1)
struct GIFHeader
{
    // packing per https://www.w3.org/Graphics/GIF/spec-gif89a.txt
    byte type[3];
    byte version[3];
    uint16_t width;
    uint16_t height;
    byte flags;
    byte bgcolor;
    byte aspectratio;
};

bool LoadGIFHeaderAndValidate(CFile& sourceGIF, GIFHeader& gif_header, CString& strPossibleError)
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
                strPossibleError = L"GIF using local color data: we don't support those.";
            }
        }
        else
        {
            strPossibleError = L"This is not a supported GIF file.";
        }
    }
    else
    {
        strPossibleError = L"This is not a GIF file.";
    }

    return fIsValidGIF;
}

bool LoadDataFromGIFFile(LPCWSTR pszGIFFileName, std::vector<COLORREF>& rgclrPaletteData, CString& strPossibleError)
{
    CFile sourceGIF;

    // Populate color table from file
    if (sourceGIF.Open(pszGIFFileName, CFile::modeRead | CFile::typeBinary))
    {
        GIFHeader header = {};

        if (LoadGIFHeaderAndValidate(sourceGIF, header, strPossibleError))
        {
            uint8_t packedGlobalColorTableSize = (header.flags & 0x07) + 1;
            size_t nColorTableSize = static_cast<size_t>(pow(2, packedGlobalColorTableSize));

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

    if (LoadDataFromGIFFile(pszFileName, rgclrPaletteData, strError))
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
        strInfo.Format(L"Loaded %u colors from %u color GIF file.", nTotalColorsUsed, rgclrPaletteData.size());

        SetStatusText(strInfo);

        fSuccess = true;

        OutputDebugString(L"gifreader: done!\n");
    }

    if (!fSuccess)
    {
        MessageBox(L"Error: This is not a valid GIF file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(strError);
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

        if (LoadGIFHeaderAndValidate(sourceGIF, header, strPossibleError))
        {
            uint8_t packedGlobalColorTableSize = (header.flags & 0x07) + 1;
            size_t nColorTableSize = static_cast<size_t>(pow(2, packedGlobalColorTableSize));

            size_t minWriteSize = min(nColorTableSize, m_DumpBmp.m_rgSrcImg[0]->uPalSz);

            // Walk past the transparency color
            sourceGIF.Seek(3, CFile::current);

            for (size_t iPos = 1; iPos < minWriteSize; iPos++)
            {
                COLORREF curColor = m_DumpBmp.m_pppPalettes[0][m_DumpBmp.m_nPalIndex][iPos];

                uint8_t red   = GetRValue(curColor);
                uint8_t green = GetGValue(curColor);
                uint8_t blue  = GetBValue(curColor);

                sourceGIF.Write(&red, sizeof(red));
                sourceGIF.Write(&green, sizeof(green));
                sourceGIF.Write(&blue, sizeof(blue));
            }
        }

        sourceGIF.Close();
    }

    return;
}

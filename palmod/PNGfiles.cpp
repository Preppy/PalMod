#include "stdafx.h"
#include "PalMod.h"

bool CPalModDlg::LoadPaletteFromPNG(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;
    bool fFoundPaletteData = false;
    CFile PNGFile;

    if (PNGFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        char aszSignature[8];

        const ULONGLONG nTotalFileSize = PNGFile.GetLength();
        ULONGLONG nFileSizeRemaining = nTotalFileSize;

        PNGFile.Read(aszSignature, 8);
        nFileSizeRemaining -= 8;

        // Verify PNG signature
        if ((aszSignature[0] == static_cast<char>(0x89)) &&
            (aszSignature[1] == static_cast<char>(0x50)) &&
            (aszSignature[2] == static_cast<char>(0x4E)) &&
            (aszSignature[3] == static_cast<char>(0x47)) &&
            (aszSignature[4] == static_cast<char>(0x0D)) &&
            (aszSignature[5] == static_cast<char>(0x0A)) &&
            (aszSignature[6] == static_cast<char>(0x1A)) &&
            (aszSignature[7] == static_cast<char>(0x0A)))
        {
            CString strInfo;
            bool fHadToFlip = false;

            OutputDebugString(L"this is a png.... reading chunks now...\n");

#define READFROMFILEANDDECREMENT(buffer, cbchunk) { if (cbchunk > nFileSizeRemaining) {break;} PNGFile.Read(buffer, cbchunk); nFileSizeRemaining -= cbchunk; }

            while (nFileSizeRemaining > 0)
            {
                uint32_t chunkLength;
                READFROMFILEANDDECREMENT(&chunkLength, sizeof(chunkLength));
                chunkLength = _byteswap_ulong(chunkLength);
                char chunkType[5];
                READFROMFILEANDDECREMENT(chunkType, sizeof(chunkType) - 1);
                chunkType[sizeof(chunkType) - 1] = 0;

                strInfo.Format(L"Chunk: %4S, size 0x%x\n", chunkType, chunkLength);
                OutputDebugString(strInfo);

                char crcBuffer[4];

                if (strcmp(chunkType, "IHDR") == 0)
                {
                    // 13 bytes for the header
                    uint32_t imageWidth, imageHeight;
                    READFROMFILEANDDECREMENT(&imageWidth, 4);
                    READFROMFILEANDDECREMENT(&imageHeight, 4);

                    imageWidth = _byteswap_ulong(imageWidth);
                    imageHeight = _byteswap_ulong(imageHeight);

                    char IHDRBuffer[5];
                    READFROMFILEANDDECREMENT(IHDRBuffer, sizeof(IHDRBuffer));
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    uint32_t bitDepth = IHDRBuffer[0];
                    char colorType = IHDRBuffer[1];

                    if ((colorType == 0) || (colorType == 4)) // grayscale options
                    {
                        // PLTE entry cannot appear for this type
                        OutputDebugString(L"pngreader: grayscale: PLTE cannot be present.\n");
                        break;
                    }
                    else if (colorType == 3) // indexed color
                    {
                        OutputDebugString(L"pngreader: indexed: PLTE must be present.\n");
                    }
                    else // 2 - truecolor and 6 - truecolor with alpha
                    {
                        OutputDebugString(L"pngreader: truecolor: PLTE may be present.\n");
                    }
                }
                else if (strcmp(chunkType, "PLTE") == 0)
                {
                    fFoundPaletteData = true;
                    std::vector<uint8_t> rgchPaletteData;
                    rgchPaletteData.resize(chunkLength);

                    READFROMFILEANDDECREMENT(&rgchPaletteData[0], chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(L"pngreader: processing PLTE header...\n");

                    const uint8_t nActivePaletteCount = MainPalGroup->GetPalAmt();
                    const int nPNGColorCount = (chunkLength / 3);

                    strInfo.Format(L"\tpngreader: processing %u colors...\n", nPNGColorCount);
                    OutputDebugString(strInfo);

                    uint32_t nTotalNumberOfCurrentPaletteColors = 0;

                    for (uint16_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                    {
                        nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                    }

                    uint16_t iPNGIndex = 0;
                    uint16_t nCurrentPalette = 0;
                    uint16_t nTotalColorsUsed = 0;
                    uint32_t nBlackColorCount = 0;
                    bool fHaveLooped = false;
                    int iCurrentIndexInPalette = 0;
                    uint8_t* pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

                    // This code exists because Fighter Factory writes upside-down color tables.
                    for (iPNGIndex = 0; iPNGIndex < nPNGColorCount; iPNGIndex++)
                    {
                        if ((rgchPaletteData.at(iPNGIndex * 3) == 0) &&
                            (rgchPaletteData.at((iPNGIndex * 3) + 1) == 0) &&
                            (rgchPaletteData.at((iPNGIndex * 3) + 2) == 0))
                        {
                            nBlackColorCount++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    const bool fShouldProcessTopdown = !fReadUpsideDown && (nBlackColorCount < 32) && (nBlackColorCount < nTotalNumberOfCurrentPaletteColors);

                    const bool fHaveMultiplePalettes = (nActivePaletteCount != 1);
                    bool* rgfPNGHasColorsForThisPalette = new bool[nActivePaletteCount];
                    memset(rgfPNGHasColorsForThisPalette, false, sizeof(bool) * nActivePaletteCount);

                    if (fHaveMultiplePalettes)
                    {
                        int nOffsetThisPass = 0;
                        for (int iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                        {
                            for (iPNGIndex = nOffsetThisPass; (iPNGIndex < nTotalNumberOfCurrentPaletteColors) && ((iPNGIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz) && (iPNGIndex < nPNGColorCount); iPNGIndex++)
                            {
                                int iIndexToUse = fShouldProcessTopdown ? iPNGIndex : (nPNGColorCount - iPNGIndex);
                                if ((rgchPaletteData.at(iIndexToUse * 3) != 0) ||
                                    (rgchPaletteData.at((iIndexToUse * 3) + 1) != 0) ||
                                    (rgchPaletteData.at((iIndexToUse * 3) + 2) != 0))
                                {
                                    rgfPNGHasColorsForThisPalette[iPalette] = true;
                                    break;
                                }
                            }

                            nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                        }
                    }

                    if (fShouldProcessTopdown)
                    {
                        iPNGIndex = 0;

                        for (uint32_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at(iPNGIndex * 3));
                            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 1));
                            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 2));

                            if (++iPNGIndex >= nPNGColorCount)
                            {
                                // If the palette is larger than our PNG, loop it.
                                iPNGIndex = 0;
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

                                    if (rgfPNGHasColorsForThisPalette[nCurrentPalette])
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
                        iPNGIndex = nPNGColorCount - 1;
                        fHadToFlip = true;
                        iCurrentIndexInPalette = 0;
                        nCurrentPalette = 0;
                        fHaveLooped = false;
                        pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(nCurrentPalette)->pPal);

                        OutputDebugString(L"This appears to be a bogus SFF PNG... flipping our PNG table logic...\n");

                        for (uint32_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)] =     GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at(iPNGIndex * 3));
                            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 1));
                            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 2));

                            // This code exists because Fighter Factory writes upside-down color tables.
                            if (--iPNGIndex >= nPNGColorCount)
                            {
                                // If the palette is larger than our PNG, loop it.
                                fHaveLooped = true;
                                iPNGIndex = nTotalNumberOfCurrentPaletteColors;
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
                                    if (iPNGIndex >= nBlackColorCount)
                                    {
                                        // advance to the next palette
                                        nCurrentPalette++;

                                        if (rgfPNGHasColorsForThisPalette[nCurrentPalette])
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

                    safe_delete_array(rgfPNGHasColorsForThisPalette);

                    ImgDispCtrl->UpdateCtrl();
                    m_PalHost.UpdateAllPalCtrls();

                    UpdateMultiEdit(TRUE);
                    UpdateSliderSel();

                    if (fHadToFlip)
                    {
                        strInfo.Format(IDS_PNG_REVERSEDLOAD, nTotalColorsUsed);
                    }
                    else
                    {
                        strInfo.Format(IDS_PNG_LOADED, nTotalColorsUsed, nPNGColorCount);
                    }
                    SetStatusText(strInfo);

                    fSuccess = true;

                    break;
                }
                else if (strcmp(chunkType, "IDAT") == 0)
                {
                    // PLTE data if present must be present before the IDAT chunks
                    OutputDebugString(L"pngreader: IDAT section hit: PLTE cannot be present from here on out.\n");
                    break;
                }
                else
                {
                    // This is a chunk we don't care about: just walk past.
                    std::vector<char> rgchNope;
                    rgchNope.resize(chunkLength);

                    READFROMFILEANDDECREMENT(&rgchNope[0], chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));
                }
            }

            OutputDebugString(L"pngreader: done!\n");
        }

        PNGFile.Close();
    }

    if (!fFoundPaletteData)
    {
        CString strMessage;
        strMessage = L"Error: This PNG file is not using indexed color and cannot be used.  Only type 3 (indexed color) PNGs contain the palette information PalMod needs.\n";
        strMessage.Append(L"\nYou might want to ask the person who made this to provide you an indexed color PNG or the ACT.\n");
        strMessage.Append(L"Failing that, open up the PNG in a picture viewer.  While PalMod is the foreground application, select a color in PalMod. ");
        strMessage.Append(L"Then hover your mouse over the \"new\" color in your image, and press CTRL+SHIFT+V to copy that color to PalMod.  Repeat until you're done.");
        MessageBox(strMessage, GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PNGLOAD_NOTABLE);
    }
    else if (!fSuccess)
    {
        MessageBox(L"Error: This is not a valid PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PNG_LOADFAILURE);
    }

    return fSuccess;
}

#include "stdafx.h"
#include "PalMod.h"
#include "lodepng\lodepng.h"

bool CPalModDlg::LoadPaletteFromPNG(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;

    enum class ePNGLoadResults
    {
        PNG_NotLoaded = 0,
        PNG_LoadedAsIndexed,
        PNG_LoadedAsRGB,
        PNG_LoadedAsRGBImperfect,
    };

    ePNGLoadResults pngLoadResults = ePNGLoadResults::PNG_NotLoaded;
    CFile PNGFile;
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (PNGFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
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

                strInfo.Format(L"\tChunk: %4S, size 0x%x\n", chunkType, chunkLength);
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
                        strInfo.Format(L"\t\tpngreader: type %u (grayscale%s): PLTE cannot be present.\n", colorType, (colorType == 0) ? L"" : L" with alpha");
                        OutputDebugString(strInfo.GetString());
                        break;
                    }
                    else if (colorType == 3) // indexed color
                    {
                        OutputDebugString(L"\t\tpngreader: type 3 (indexed): PLTE must be present.\n");
                    }
                    else // 2 - truecolor and 6 - truecolor with alpha
                    {
                        strInfo.Format(L"\t\tpngreader: type %u (truecolor%s): PLTE may be present.\n", colorType, (colorType == 2) ? L"" : L" with alpha");
                        OutputDebugString(strInfo.GetString());
                    }
                }
                else if (strcmp(chunkType, "PLTE") == 0)
                {
                    // OK, we have useful color table information, so mark ourselves dirty
                    // and create a save state
                    ProcChange();

                    pngLoadResults = ePNGLoadResults::PNG_LoadedAsIndexed;
                    std::vector<uint8_t> rgchPaletteData;
                    rgchPaletteData.resize(chunkLength);

                    READFROMFILEANDDECREMENT(&rgchPaletteData[0], chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(L"\t\tpngreader: processing PLTE header...\n");

                    const uint32_t nActivePaletteCount = MainPalGroup->GetPalAmt();
                    const int nPNGColorCount = (chunkLength / 3);

                    strInfo.Format(L"\t\tpngreader: processing %u colors...\n", nPNGColorCount);
                    OutputDebugString(strInfo);

                    uint32_t nTotalNumberOfCurrentPaletteColors = 0;

                    for (uint32_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                    {
                        nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                    }

                    uint16_t iPNGIndex = 0;
                    uint32_t nCurrentPalette = 0;
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
                        for (uint32_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                        {
                            for (iPNGIndex = nOffsetThisPass; (iPNGIndex < nTotalNumberOfCurrentPaletteColors) && ((iPNGIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz) && (iPNGIndex < nPNGColorCount); iPNGIndex++)
                            {
                                const int iIndexToUse = fShouldProcessTopdown ? iPNGIndex : (nPNGColorCount - 1 - iPNGIndex);
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
                            pPal[(iCurrentIndexInPalette * 4)]     = CurrGame->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at(iPNGIndex * 3));
                            pPal[(iCurrentIndexInPalette * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 1));
                            pPal[(iCurrentIndexInPalette * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 2));

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
                            pPal[(iCurrentIndexInPalette * 4)]     = CurrGame->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at(iPNGIndex * 3));
                            pPal[(iCurrentIndexInPalette * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 1));
                            pPal[(iCurrentIndexInPalette * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB(rgchPaletteData.at((iPNGIndex * 3) + 2));

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
                    OutputDebugString(L"\t\tpngreader: IDAT section hit: PLTE cannot be present from here on out.\n");
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

    if (pngLoadResults != ePNGLoadResults::PNG_LoadedAsIndexed)
    {
        // OK, we can't do it the easy indexed PNG way. 
        // For previews produced by us (using our previews), we *probably* can do it the hard way
        // by comparing color index usage count in the preview to actual color usage count in the PNG.
        lodepng::State state;
        lodepng_state_init(&state);

        size_t nSize = 0;
        unsigned char* loadedAsFile = nullptr;

        if (lodepng_load_file(&loadedAsFile, &nSize, pszFileName) == 0)
        {
            unsigned width = 0, height = 0;
            unsigned char* loadedAsPNG = nullptr;

            if (lodepng_decode(&loadedAsPNG, &width, &height, &state, loadedAsFile, nSize) == 0)
            {
                if (state.info_png.color.colortype == LodePNGColorType::LCT_RGBA)
                {
                    std::vector<std::pair<uint32_t, uint32_t>> rgColorCounts;
                    const size_t nPixelCount = height * width;

                    for (size_t iPos = 0; iPos < nPixelCount; iPos++)
                    {
                        const uint32_t nCurrentColor = (loadedAsPNG[(iPos * 4) + 3] << 24) |
                                                       (loadedAsPNG[(iPos * 4) + 0] << 16) |
                                                       (loadedAsPNG[(iPos * 4) + 1] << 8) |
                                                       (loadedAsPNG[(iPos * 4) + 2]);

                        auto it = std::find_if(rgColorCounts.begin(), rgColorCounts.end(),
                            [&nCurrentColor](const std::pair<uint32_t, uint32_t>& elem) {
                                return elem.first == nCurrentColor;
                            });

                        if (it == rgColorCounts.end())
                        {
                            rgColorCounts.push_back(std::make_pair(nCurrentColor, 1));
                        }
                        else
                        {
                            it->second++;
                        }
                    }

                    CString strInfo;
#ifdef DEBUG
                    strInfo.Format(L"PNG Color Format: %s.  %u colors used in this PNG.\r\n", (state.info_png.color.colortype == LodePNGColorType::LCT_RGB) ? L"RGB" : L"RGBA", rgColorCounts.size());
                    OutputDebugString(strInfo.GetString());

                    for (auto& color : rgColorCounts)
                    {
                        strInfo.Format(L"\tColor 0x%08x: %u instances.\r\n", color.first, color.second);
                        OutputDebugString(strInfo.GetString());
                    }
#endif

                    // This specifically checks that we have an image at 0
                    if (ImgDispCtrl->HaveImageData())
                    {
                        sImgNode** ppImgNodes = ImgDispCtrl->GetImgBuffer();

                        const bool fDimensionsMatch = (ppImgNodes[0]->dimensions.width == width) &&
                                                      (ppImgNodes[0]->dimensions.height == height);

                        if (fDimensionsMatch)
                        {
                            std::vector<std::pair<uint32_t, uint32_t>> rgIndexCounts;

                            for (size_t iIndexIndex = 0; iIndexIndex < nPixelCount; iIndexIndex++)
                            {
                                const uint32_t nCurrentIndex = ppImgNodes[0]->pImgData[iIndexIndex];

                                auto it = std::find_if(rgIndexCounts.begin(), rgIndexCounts.end(),
                                    [&nCurrentIndex](const std::pair<uint32_t, uint32_t>& elem) {
                                        return elem.first == nCurrentIndex;
                                    });

                                if (it == rgIndexCounts.end())
                                {
                                    rgIndexCounts.push_back(std::make_pair(nCurrentIndex, 1));
                                }
                                else
                                {
                                    it->second++;
                                }
                            }

#ifdef DEBUG
                            strInfo.Format(L"PalMod preview check: %u table indexes used.\r\n", rgIndexCounts.size());
                            OutputDebugString(strInfo.GetString());

                            for (auto& pixels : rgIndexCounts)
                            {
                                strInfo.Format(L"\tIndex %02x: %u instances.\r\n", pixels.first, pixels.second);
                                OutputDebugString(strInfo.GetString());
                            }
#endif

                            if (ppImgNodes[0]->uPalSz >= rgColorCounts.size())
                            {
                                // Matchers
                                std::vector<uint32_t> vIndexToColorMap;
                                vIndexToColorMap.resize(ppImgNodes[0]->uPalSz);

                                // First do the simple mapping for exact matches
                                for (size_t iIndexIndex = 0; iIndexIndex < rgIndexCounts.size(); )
                                {
                                    bool fMatchFound = false;
                                    for (size_t iColorIndex = 0; iColorIndex < rgColorCounts.size(); iColorIndex++)
                                    {
                                        // If counts match exactly, this *should* be this color
                                        if (rgColorCounts.at(iColorIndex).second == rgIndexCounts.at(iIndexIndex).second)
                                        {
                                            fMatchFound = true;
                                            const uint16_t nSpecifiedIndex = rgIndexCounts.at(iIndexIndex).first;

                                            // Ignore for now if it's using any index outside of the first palette.
                                            if (nSpecifiedIndex < vIndexToColorMap.size())
                                            {
                                                vIndexToColorMap.at(nSpecifiedIndex) = rgColorCounts.at(iColorIndex).first;
                                            }
                                            rgColorCounts.erase(rgColorCounts.begin() + iColorIndex);
                                            break;
                                        }
                                    }

                                    if (fMatchFound)
                                    {
                                        rgIndexCounts.erase(rgIndexCounts.begin() + iIndexIndex);
                                    }
                                    else
                                    {
                                        iIndexIndex++;
                                    }
                                }

                                // If we have anything left, we know this is an imperfect map.
                                if (rgColorCounts.size() == 0)
                                {
                                    fSuccess = true;
                                    pngLoadResults = ePNGLoadResults::PNG_LoadedAsRGB;
                                }
                                else
                                {
#ifdef DEBUG
                                    strInfo.Format(L"WARNING: Palette shares color for indexes.  %u colors still unmapped.\r\n", rgColorCounts.size());
                                    OutputDebugString(strInfo.GetString());

                                    OutputDebugString(L"Pre Second Chance Mapping:\r\n");
                                    for (size_t iMappedIndex = 0; iMappedIndex < vIndexToColorMap.size(); iMappedIndex++)
                                    {
                                        strInfo.Format(L"\tIndex %02u is 0x%08x\r\n", iMappedIndex, vIndexToColorMap.at(iMappedIndex));
                                        OutputDebugString(strInfo.GetString());
                                    }
#endif

                                    if (rgIndexCounts.size())
                                    {
                                        // OK, now we're trying to detangle multiple references.  The neat thing about this is that
                                        // anything we catch here should be correct: both indexes would normally be using that color.
                                        for (size_t iColorIndex = 0; iColorIndex < rgColorCounts.size(); )
                                        {
                                            bool fMatchFound = false;

                                            for (size_t iFirstIndexIndex = 0; iFirstIndexIndex < rgIndexCounts.size(); iFirstIndexIndex++)
                                            {
                                                if (rgColorCounts.at(iColorIndex).second < rgIndexCounts.at(iFirstIndexIndex).second)
                                                {
                                                    continue;
                                                }

                                                for (size_t iSecondIndexIndex = iFirstIndexIndex + 1; iSecondIndexIndex < rgIndexCounts.size(); iSecondIndexIndex++)
                                                {
                                                    // You can have multiple matches, of course, this just worries about two
                                                    if ((rgColorCounts.at(iColorIndex).second == (rgIndexCounts.at(iFirstIndexIndex).second + rgIndexCounts.at(iSecondIndexIndex).second)))
                                                    {
                                                        fMatchFound = true;

                                                        const uint16_t nFirstSpecifiedIndex = rgIndexCounts.at(iFirstIndexIndex).first;
                                                        const uint16_t nSecondSpecifiedIndex = rgIndexCounts.at(iSecondIndexIndex).first;

                                                        if (nFirstSpecifiedIndex < vIndexToColorMap.size())
                                                        {
                                                            vIndexToColorMap.at(nFirstSpecifiedIndex) = rgColorCounts.at(iColorIndex).first;
#ifdef DEBUG
                                                            strInfo.Format(L"\tFIXUPS: fixed up index %u.\r\n", nFirstSpecifiedIndex);
                                                            OutputDebugString(strInfo.GetString());
#endif
                                                        }

                                                        if (nSecondSpecifiedIndex < vIndexToColorMap.size())
                                                        {
                                                            vIndexToColorMap.at(nSecondSpecifiedIndex) = rgColorCounts.at(iColorIndex).first;
#ifdef DEBUG
                                                            strInfo.Format(L"\tFIXUPS: fixed up index %u.\r\n", nSecondSpecifiedIndex);
                                                            OutputDebugString(strInfo.GetString());
#endif
                                                        }

                                                        rgIndexCounts.erase(rgIndexCounts.begin() + iSecondIndexIndex);
                                                        rgIndexCounts.erase(rgIndexCounts.begin() + iFirstIndexIndex);

                                                        break;
                                                    }
                                                }

                                                if (fMatchFound)
                                                {
                                                    break;
                                                }
                                            }

                                            if (fMatchFound)
                                            {
                                                rgColorCounts.erase(rgColorCounts.begin() + iColorIndex);
                                            }
                                            else
                                            {
                                                iColorIndex++;
                                            }
                                        }

                                        if (rgColorCounts.size())
                                        {
                                            pngLoadResults = ePNGLoadResults::PNG_LoadedAsRGBImperfect;
                                        }
                                        else
                                        {
                                            pngLoadResults = ePNGLoadResults::PNG_LoadedAsRGB;
                                        }

                                        fSuccess = true;
#ifdef DEBUG
                                        strInfo.Format(L"After second mapping pass: %u colors left unmatched.\r\n", rgColorCounts.size());
                                        OutputDebugString(strInfo.GetString());
#endif
                                    }
                                }

#ifdef DEBUG
                                OutputDebugString(L"RESULTS OF THE MAPPING:\r\n");
                                for (size_t iMappedIndex = 0; iMappedIndex < vIndexToColorMap.size(); iMappedIndex++)
                                {
                                    strInfo.Format(L"\tIndex %02u should now be 0x%08x\r\n", iMappedIndex, vIndexToColorMap.at(iMappedIndex));
                                    OutputDebugString(strInfo.GetString());
                                }
#endif

                                ProcChange();

                                strInfo.Format(L"Loaded %u colors from RGB PNG file.%s", MainPalGroup->GetPalDef(0)->uPalSz, (pngLoadResults == ePNGLoadResults::PNG_LoadedAsRGB) ? L"" : L"  Imported imperfectly: palette is not mapping safe.");
                                SetStatusText(strInfo.GetString());
#ifdef DEBUG
                                strInfo += L"\r\n";
                                OutputDebugString(strInfo.GetString());
#endif

                                uint8_t* pPal = reinterpret_cast<uint8_t*>(MainPalGroup->GetPalDef(0)->pPal);

                                for (uint16_t iPalIndex = 0; iPalIndex < MainPalGroup->GetPalDef(0)->uPalSz; iPalIndex++)
                                {
                                    const uint32_t nCurrentColor = vIndexToColorMap.at(iPalIndex);
                                    if (nCurrentColor) // anything full 0 was not found, as otherwise it would have alpha set
                                    {
                                        pPal[(iPalIndex * 4)] = CurrGame->GetNearestLegal8BitColorValue_RGB((nCurrentColor >> 16) & 0xff);
                                        pPal[(iPalIndex * 4) + 1] = CurrGame->GetNearestLegal8BitColorValue_RGB((nCurrentColor >> 8) & 0xff);
                                        pPal[(iPalIndex * 4) + 2] = CurrGame->GetNearestLegal8BitColorValue_RGB((nCurrentColor) & 0xff);
                                    }
                                }

                                ImgDispCtrl->UpdateCtrl();
                                m_PalHost.UpdateAllPalCtrls();

                                UpdateMultiEdit(TRUE);
                                UpdateSliderSel();
                            }
                            else
                            {
                                OutputDebugString(L"UNSUPPORTED: There are more colors in the image than we could possibly map currently.\r\n");
                            }
                        }
                    }
                }

                free(loadedAsPNG);
            }

            free(loadedAsFile);
        }
    }

    if (pngLoadResults == ePNGLoadResults::PNG_NotLoaded)
    {
        SetStatusText(IDS_PNGLOAD_NOTABLE);

        CString strMessage;
        strMessage = L"Error: This PNG file is not using indexed color and cannot be used.  Only type 3 (indexed color) PNGs contain the palette information PalMod needs.\n";
        strMessage.Append(L"\nYou might want to ask the person who made this to provide you an indexed color PNG or the ACT.\n");
        strMessage.Append(L"Failing that, open up the PNG in a picture viewer.  While PalMod is the foreground application, select a color in PalMod. ");
        strMessage.Append(L"Then hover your mouse over the \"new\" color in your image, and press CTRL+SHIFT+N to copy that color to PalMod.  Then mouse over the next color, and repeat until you're done.");
        MessageBox(strMessage, GetHost()->GetAppName(), MB_ICONERROR);
    }
    else if (!fSuccess)
    {
        SetStatusText(IDS_PNG_LOADFAILURE);

        MessageBox(L"Error: This is not a valid PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
    }

    return fSuccess;
}

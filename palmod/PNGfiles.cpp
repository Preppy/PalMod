#include "stdafx.h"
#include "PalMod.h"
#include "lodepng\lodepng.h"
#include "PaletteImport.h"
#include "PNGfiles.h"

bool CPaletteImport::GetPaletteFromIndexedPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
{
    bool fSuccess = false;

    CFile PNGFile;

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

                    //uint32_t bitDepth = IHDRBuffer[0];
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
                    // OK, we have useful color table information
                    std::vector<uint8_t> rgchPaletteData;
                    rgchPaletteData.resize(chunkLength);

                    READFROMFILEANDDECREMENT(&rgchPaletteData[0], chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(L"\t\tpngreader: processing PLTE header...\n");

                    const size_t nPNGColorCount = static_cast<size_t>(chunkLength / 3);
                    const size_t nRGBAByteCount = nPNGColorCount * 4;

                    rgbaPalette.resize(nRGBAByteCount);

                    strInfo.Format(L"\t\tpngreader: processing %u colors...\n", nPNGColorCount);
                    OutputDebugString(strInfo);

                    for (size_t iReadPos = 0, iWritePos = 0; iReadPos < chunkLength; iReadPos++)
                    {
                        rgbaPalette.at(iWritePos++) = rgchPaletteData.at(iReadPos++);
                        rgbaPalette.at(iWritePos++) = rgchPaletteData.at(iReadPos++);
                        rgbaPalette.at(iWritePos++) = rgchPaletteData.at(iReadPos);
                        rgbaPalette.at(iWritePos++) = 0xff;
                    }

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

    return fSuccess;
}

bool CPaletteImport::GetPaletteFromTrueColorPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
{
    bool fSuccess = false;

    // For previews produced by us (using our previews), we *probably* can do it the hard way
    // by comparing color index usage count in the preview to actual color usage count in the PNG.
    lodepng::State state;
    lodepng_state_init(&state);

    size_t nSize = 0;
    unsigned char* loadedAsFile = nullptr;

    CImgDisp* pImgDisp = GetHost()->GetImgDispCtrl();

    if (pImgDisp && (lodepng_load_file(&loadedAsFile, &nSize, pszFileName) == 0))
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
                if (pImgDisp->HaveImageData())
                {
                    sImgNode** ppImgNodes = pImgDisp->GetImgBuffer();

                    const bool fDimensionsMatch = (ppImgNodes[0]->dimensions.width == static_cast<int>(width)) &&
                        (ppImgNodes[0]->dimensions.height == static_cast<int>(height));

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
                                        const uint16_t nSpecifiedIndex = static_cast<uint16_t>(rgIndexCounts.at(iIndexIndex).first);

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
                            if (rgColorCounts.empty())
                            {
                                fSuccess = true;
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

                                                    const uint16_t nFirstSpecifiedIndex = static_cast<uint16_t>(rgIndexCounts.at(iFirstIndexIndex).first);
                                                    const uint16_t nSecondSpecifiedIndex = static_cast<uint16_t>(rgIndexCounts.at(iSecondIndexIndex).first);

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
                            const size_t nPaletteLength = min(GetHost()->GetPalModDlg()->MainPalGroup->GetPalDef(0)->uPalSz, vIndexToColorMap.size());

                            rgbaPalette.resize(nPaletteLength * 4);

                            for (size_t iReadPos = 0, iWritePos = 0; iReadPos < nPaletteLength; iReadPos++)
                            {
                                rgbaPalette[iWritePos++] = (vIndexToColorMap.at(iReadPos) >> 16) & 0xFF;
                                rgbaPalette[iWritePos++] = (vIndexToColorMap.at(iReadPos) >> 8) & 0xFF;
                                rgbaPalette[iWritePos++] = vIndexToColorMap.at(iReadPos) & 0xFF;
                                rgbaPalette[iWritePos++] = 0xff;
                            }

                            strInfo.Format(L"Loaded %u colors from RGB PNG file.%s", nPaletteLength, rgColorCounts.empty() ? L"" : L"  Imported imperfectly: palette is not mapping safe.");
                            GetHost()->GetPalModDlg()->SetStatusText(strInfo.GetString());
#ifdef DEBUG
                            strInfo += L"\r\n";
                            OutputDebugString(strInfo.GetString());
#endif
                        }
                    }
                }
            }

            free(loadedAsPNG);
        }

        free(loadedAsFile);
    }

    return fSuccess && !rgbaPalette.empty();
}

bool CPaletteImport::GetPaletteFromPNG(LPCWSTR pszFileName, std::vector<uint8_t>& rgbaPalette)
{
    const bool fSuccess = GetPaletteFromIndexedPNG(pszFileName, rgbaPalette) || GetPaletteFromTrueColorPNG(pszFileName, rgbaPalette);

    if (!fSuccess)
    {
        CString strMessage;
        strMessage = L"Error: This PNG file is not using indexed color and cannot be used.  Only type 3 (indexed color) PNGs contain the palette information PalMod needs.\n";
        strMessage.Append(L"\nYou might want to ask the person who made this to provide you an indexed color PNG or the ACT.\n");
        strMessage.Append(L"Failing that, open up the PNG in a picture viewer.  While PalMod is the foreground application, select a color in PalMod. ");
        strMessage.Append(L"Then hover your mouse over the \"new\" color in your image, and press CTRL+SHIFT+N to copy that color to PalMod.  Then mouse over the next color, and repeat until you're done.");
        MessageBox(g_appHWnd, strMessage, GetHost()->GetAppName(), MB_ICONERROR);
    }

    return fSuccess && !rgbaPalette.empty();
}

bool LoadTextureFromPNG(LPCWSTR pszTextureLocation, sTextureData& textureData, PNGImportSpecialOptions importOptions /* = {} */)
{
    bool fSuccess = false;
    std::wstring strErrorText = L"This PNG could not be loaded.";
    std::wstring strErrorExtra;

    CWaitCursor wait; // Show a wait cursor in this scope since this can be a lot of parsing
    GetHost()->GetPalModDlg()->SetStatusText(L"Analyzing this preview...");

    lodepng::State state;

    lodepng_state_init(&state);

    size_t nSize = 0;
    unsigned char* loadedAsFile = nullptr;
    unsigned char* loadedAsPNG = nullptr;

    if (lodepng_load_file(&loadedAsFile, &nSize, pszTextureLocation) == 0)
    {
        unsigned width = 0, height = 0;

        if (importOptions.fForceNonIndexed)
        {
            OutputDebugString(L"Forcing image to be imported as non-indexed!\r\n");
            state.decoder.color_convert = 1;
            state.info_raw.colortype = LodePNGColorType::LCT_RGBA;
        }
        else
        {
            state.decoder.color_convert = 0;
        }

        if (lodepng_decode(&loadedAsPNG, &width, &height, &state, loadedAsFile, nSize) == 0)
        {
            // Confusion: why isn't lodepng doing this?
            // Simple test to show the problem here: convert from Indexed to RGB: state.info_png is Indexed @_@ 
            state.info_png.color.colortype = state.info_raw.colortype;
            sImageDimensions dimensions = { static_cast<int>(width), static_cast<int>(height) };
            const size_t nPNGByteCount = lodepng_get_raw_size(width, height, &state.info_png.color);

            switch (state.info_png.color.colortype)
            {
                case LodePNGColorType::LCT_PALETTE:
                {
                    // 1 bytes per pixel
                    textureData.indexedPixels.assign(reinterpret_cast<uint8_t *>(loadedAsPNG), reinterpret_cast<uint8_t*>(loadedAsPNG + nPNGByteCount));
                    textureData.dimensions = dimensions;
                    textureData.dataType = TextureDataType::Indexed;
                    fSuccess = true;

                    if (!importOptions.fColorTableStartsAtOne)
                    {
                        for (size_t iDataPos = 0; iDataPos < textureData.indexedPixels.size(); iDataPos++)
                        {
                            if (textureData.indexedPixels[iDataPos] != 0) // leave the transparency color alone
                            {
                                textureData.indexedPixels[iDataPos] = textureData.indexedPixels[iDataPos] - 1;
                            }
                        }
                    }
                    else if (importOptions.fReversedColorTable)
                    {
                        // Note that we only do this on-demand.  We don't do it automatically
                        // here since we don't know what the end usage scenario for this pixels 
                        // will be.
                        for (size_t iPos = 0; iPos < textureData.indexedPixels.size(); iPos++)
                        {
                            // Dammit Fighter Factory
                            uint8_t nThisIndex = textureData.indexedPixels[iPos];

                            nThisIndex = 255 - nThisIndex;

                            textureData.indexedPixels.at(iPos) = nThisIndex;
                        }
                    }

                    break;
                }
                case LodePNGColorType::LCT_RGB:
                {
                    // 3 bytes per pixel: convert to RGBA for our usage
                    for (size_t iPixel = 0; iPixel < nPNGByteCount;)
                    {
                        textureData.rgbaPixels.push_back(static_cast<uint8_t>(loadedAsPNG[iPixel++]));
                        textureData.rgbaPixels.push_back(static_cast<uint8_t>(loadedAsPNG[iPixel++]));
                        textureData.rgbaPixels.push_back(static_cast<uint8_t>(loadedAsPNG[iPixel++]));
                        textureData.rgbaPixels.push_back(0xff); // stub alpha
                    }

                    textureData.dimensions = dimensions;
                    textureData.dataType = TextureDataType::RGBA;
                    fSuccess = true;
                    break;
                }
                case LodePNGColorType::LCT_RGBA:
                {
                    // 4 bytes per pixel
                    textureData.rgbaPixels.assign(reinterpret_cast<uint8_t*>(loadedAsPNG), reinterpret_cast<uint8_t*>(loadedAsPNG + nPNGByteCount));
                    textureData.dimensions = dimensions;
                    textureData.dataType = TextureDataType::RGBA;
                    fSuccess = true;
                    break;
                }
             }

            free(loadedAsPNG);
        }

        free(loadedAsFile);
    }

    if (state.error)
    {
        LPCSTR pszErrorText = lodepng_error_text(state.error);

        CString strOutput;
        strOutput.Format(L"  The error report from the PNG decoder is:\r\n  \"%S\"\r\n\r\nTLDR: the PNG is corrupt.\r\n", pszErrorText);
        OutputDebugString(strOutput.GetString());

        strErrorExtra = strOutput.GetString();
    }

    return fSuccess;
}

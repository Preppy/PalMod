#include "stdafx.h"
#include "TextureData.h"
#include "PalMod.h"

#ifdef DUMP_COLOR_FREQUENCY_MAP
// This code is normally inaccessible as it's uninteresting to the end user.
// However, it can be helpful to examine palette disconnects (such as WinKawaks or FBNeo's
// implementation versus our own), so I'm leaving it here in case of future
// investigations.
void PrintColorFrequencyMapToDebugOut(sTextureData rgTexture, std::vector<std::vector<COLORREF>> rgrgPalettes)
{
    std::map<uint32_t, int> frequencyMap;

    for (unsigned iPos = 0; iPos < rgTexture.rgbaPixels.size(); iPos++)
    {
        uint8_t r = rgTexture.rgbaPixels[(iPos * 4) + 0];
        uint8_t g = rgTexture.rgbaPixels[(iPos * 4) + 1];
        uint8_t b = rgTexture.rgbaPixels[(iPos * 4) + 2];

        const COLORREF colThisColor = RGB(r, g, b);

        frequencyMap[colThisColor]++;
    }

    OutputDebugString(L"======Real=====\r\n");

    for (const auto& matches : frequencyMap)
    {
        CString strOutput;
        strOutput.Format(L"Color: 0x%06x : %5u matches\r\n", matches.first, matches.second);
        OutputDebugString(strOutput.GetString());
    }

    frequencyMap.clear();

    for (size_t iPalette = 0; iPalette < rgrgPalettes.size(); iPalette++)
    {
        for (uint16_t iPalPos = 1; iPalPos < static_cast<uint16_t>(rgrgPalettes[iPalette].size()); iPalPos++)
        {
            frequencyMap[rgrgPalettes[iPalette][iPalPos] & 0xffffff]++;
        }
    }

    OutputDebugString(L"\r\n======Ours=====\r\n");

    for (const auto& matches : frequencyMap)
    {
        CString strOutput;
        strOutput.Format(L"Color: 0x%06x : %5u matches\r\n", matches.first, matches.second);
        OutputDebugString(strOutput.GetString());
    }
}
#endif

void sTextureData::Resize(sImageDimensions newSize, sImageDisplayOffsets offset /* = {} */)
{
    if (!newSize.IsVisible())
    {
        indexedPixels.clear();
        dimensions = { 0, 0 };
    }
    else if ((newSize == dimensions) && offset.IsUnused())
    {
        // no-op
        return;
    }
    else
    {
        std::vector<uint8_t> rgNewData(newSize.GetPixelCount());
        sImageDimensions dimensionsWithOffset = dimensions;
        dimensionsWithOffset += offset;

        for (int iWriteCurrentLine = offset.y; (iWriteCurrentLine < newSize.height) && ((iWriteCurrentLine - offset.y) < dimensions.height); iWriteCurrentLine++)
        {
            for (int iWriteCurrentRow = offset.x; (iWriteCurrentRow < newSize.width) && ((iWriteCurrentRow - offset.x) < dimensions.width); iWriteCurrentRow++)
            {
                rgNewData[(iWriteCurrentLine * newSize.width) + iWriteCurrentRow] = indexedPixels[((iWriteCurrentLine - offset.y) * dimensions.width) + (iWriteCurrentRow - offset.x)];
            }
        }

        indexedPixels = rgNewData;
        dimensions = newSize;
    }
}

void sTextureData::Merge(sTextureData mergeAbove, sImageDisplayOffsets offset /*= {} */)
{
    sImageDimensions mergedDimensions = mergeAbove.dimensions;
    sImageDisplayOffsets offsetMerged = {};
    sImageDisplayOffsets offsetSource = {};

    sImageDimensions newSource = dimensions;
    sImageDimensions newMerged = mergeAbove.dimensions;

    if (offset.x >= 0)
    {
        newMerged.width += offset.x;
        offsetMerged.x = offset.x;
    }
    else
    {
        newSource.width += abs(offset.x);
        offsetSource.x = abs(offset.x);
    }

    if (offset.y >= 0)
    {
        newMerged.height += offset.y;
        offsetMerged.y = offset.y;
    }
    else
    {
        newSource.height += abs(offset.y);
        offsetSource.y = abs(offset.y);
    }

    mergedDimensions.width = max(newMerged.width, newSource.width);
    mergedDimensions.height = max(newMerged.height, newSource.height);

    mergeAbove.Resize(mergedDimensions, offsetMerged);
    Resize(mergedDimensions, offsetSource);

    for (int iCurrentLine = 0; iCurrentLine < dimensions.height; iCurrentLine++)
    {
        for (int iCurrentRow = 0; iCurrentRow < dimensions.width; iCurrentRow++)
        {
            const int nPos = (iCurrentLine * dimensions.width) + iCurrentRow;
            const uint8_t nCurColor = mergeAbove.indexedPixels.at(nPos);

            if (nCurColor)
            {
                indexedPixels.at(nPos) = nCurColor;
            }
        }
    }
}

bool sTextureData::Clip(RECT clipRect)
{
    bool fClipped = (clipRect.bottom && clipRect.right &&
        (clipRect.left || clipRect.top || (dimensions.width != (clipRect.right + 1)) || (dimensions.height != (clipRect.bottom + 1))));

    if (fClipped)
    {
        // Trim as needed
        const int true_width = 1 + (clipRect.right - clipRect.left);
        const int true_height = 1 + (clipRect.bottom - clipRect.top);
        const int trim_length = true_width * true_height;

        CString strInfo;
        strInfo.Format(L"sTextureData::Clip: converting %u x %u image to a %u x %u image.\r\n", dimensions.width, dimensions.height,
                                                                                                true_width, true_height);
        OutputDebugString(strInfo.GetString());

        std::vector<uint8_t> pTrimmedBuffer(trim_length);

        const int nDataLen = static_cast<int>(indexedPixels.size());
        const int oldWidth = dimensions.width;

        for (int iReadPos = 0, iWritePos = 0, iWriteWidthPos = 0; iReadPos < nDataLen; iReadPos++)
        {
            const int xTargetPos = (iReadPos % oldWidth);
            const int yTargetPos = static_cast<int>(floor(static_cast<double>(iReadPos) / oldWidth));

            if ((yTargetPos < clipRect.top) || (xTargetPos < clipRect.left) || (xTargetPos > clipRect.right))
            {
                continue;
            }
            else if (yTargetPos > clipRect.bottom)
            {
                break;
            }

            iWriteWidthPos++;
            pTrimmedBuffer[iWritePos++] = indexedPixels.at(iReadPos);

            if (iWriteWidthPos == oldWidth)
            {
                // linebreak
                iWriteWidthPos = 0;
                if (true_width > oldWidth)
                {
                    // pad
                    iWritePos += (true_width - oldWidth);
                }
            }
        }

        indexedPixels = pTrimmedBuffer;
        dimensions = { static_cast<int>(true_width), static_cast<int>(true_height) };
    }

    return fClipped;
}

void sTextureData::FlipIfNeeded(SpriteImportDirection direction)
{
    switch (direction)
    {
        default:
        case SpriteImportDirection::TopDown:
            return;
        case SpriteImportDirection::UpsideDown:
        {
            OutputDebugString(L"Flipping image vertical.\r\n");
            const int nTotalLength = dimensions.GetPixelCount();
            std::vector<uint8_t> vFlippedBuffer(nTotalLength);

            // We need to flip this line by line
            int iPos = 0;
            for (int nLinePosition = 0; nLinePosition < dimensions.height; nLinePosition++)
            {
                int nLineStart = (nTotalLength - ((nLinePosition + 1) * dimensions.width));

                for (int nColumnPosition = 0; nColumnPosition < dimensions.width; nColumnPosition++)
                {
                    vFlippedBuffer.at(iPos++) = indexedPixels.at(nLineStart++);
                }
            }

            indexedPixels = vFlippedBuffer;
            return;
        }
        case SpriteImportDirection::FlipHorizontal:
        {
            OutputDebugString(L"Flipping image horizontal.\r\n");
            const int nTotalLength = dimensions.GetPixelCount();
            std::vector<uint8_t> vFlippedBuffer(nTotalLength);

            for (int iLine = 0; iLine < dimensions.height; iLine++)
            {
                for (int iLinePos = dimensions.width; iLinePos > 0; iLinePos--)
                {
                    vFlippedBuffer.at((iLine * dimensions.width) + (iLinePos - 1)) = indexedPixels.at((iLine * dimensions.width) + (dimensions.width - iLinePos));
                }
            }

            indexedPixels = vFlippedBuffer;
            return;
        }
    }
}

RECT sTextureData::GetUsedRect()
{
    RECT usedRect = { dimensions.width, dimensions.height, 0, 0 };
    bool fAnyLinesUsed = false;

    for (int iCurrentLine = 0; iCurrentLine < dimensions.height; iCurrentLine++)
    {
        bool fThisLineUsed = false;
        for (int iCurrentRow = 0; iCurrentRow < dimensions.width; iCurrentRow++)
        {
            const int currentPixel = (iCurrentLine * dimensions.width) + iCurrentRow;
            if (indexedPixels[currentPixel])
            {
                if (!fAnyLinesUsed && !fThisLineUsed)
                {
                    // BUGBUG TODO: this doesn't make any sense per initializer above.
                    // in testing, left/top were being reset to 0,0 before the next min check
                    // there's nothing here doing anything with them, so something external is askew
                    // the scenario was merged an inbound preview: it was being padded needlessly since 
                    // first active pixel was being pegged to 0,0 instead of actual offset
                    usedRect.left = dimensions.width;
                    usedRect.top = dimensions.height;
                }

                usedRect.left = min(usedRect.left, iCurrentRow);
                usedRect.right = max(usedRect.right, iCurrentRow);
                fThisLineUsed = true;
            }
        }

        if (fThisLineUsed)
        {
            fAnyLinesUsed = true;
            usedRect.top = min(usedRect.top, iCurrentLine);
            usedRect.bottom = max(usedRect.bottom, iCurrentLine);
        }

        if (!fAnyLinesUsed)
        {
            usedRect = { 0, 0, 0, 0 };
        }
    }

    CString strInfo;
    strInfo.Format(L"sTextureData::GetUsedRect: rect is %u %u %u %u\r\n", usedRect.left, usedRect.top, usedRect.right, usedRect.bottom);
    OutputDebugString(strInfo.GetString());

    strInfo.Format(L"sTextureData::GetUsedRect: size is %u x %u\r\n", usedRect.right - usedRect.left, usedRect.bottom - usedRect.top);
    OutputDebugString(strInfo.GetString());

    return usedRect;
}

std::vector<sTextureData> sTextureData::GetSlicesFromRGBA(PALWriteOutputOptions writeLength, std::vector<std::vector<COLORREF>> rgrgPaletteSet, RGBAImportMathQuirk importQuirk)
{
#ifdef DUMP_COLOR_FREQUENCY_MAP
    // left as an exercise to the reader...
    PrintColorFrequencyMapToDebugOut(*this, rgrgPaletteSet);
#endif

    std::vector<sTextureData> rgSlicedData(rgrgPaletteSet.size());

    if (dataType == TextureDataType::RGBA)
    {
        OutputDebugString(L"sTextureData::GetSlicesFromRGBA: converting RGB source to indexed against palette.\r\n");

#ifdef FORCE_COLOR_FORMAT_ALIGNMENT
        // stubbing in this in: semi-useful as a diagnostic aide?
        CGameClass* CurrGame = GetHost()->GetCurrGame();
#endif

        for (size_t iLayer = 0; iLayer < rgrgPaletteSet.size(); iLayer++)
        {
            rgSlicedData.at(iLayer).dimensions = dimensions;
            rgSlicedData.at(iLayer).indexedPixels.resize(dimensions.GetPixelCount());
        }
        
        const size_t nSizeInPixels = static_cast<size_t>(rgbaPixels.size() / 4);

        for (size_t iCurrentPixel = 0; iCurrentPixel < nSizeInPixels; iCurrentPixel++)
        {
            uint8_t r = rgbaPixels[(iCurrentPixel * 4)];
            uint8_t g = rgbaPixels[(iCurrentPixel * 4) + 1];
            uint8_t b = rgbaPixels[(iCurrentPixel * 4) + 2];
            uint8_t a = rgbaPixels[(iCurrentPixel * 4) + 3];

            switch (importQuirk)
            {
                case RGBAImportMathQuirk::Quirked_WinKawaks_CPS:
                    r = (r >> 4) * 17;
                    g = (g >> 4) * 17;
                    b = (b >> 4) * 17;
                    break;
                case RGBAImportMathQuirk::Quirked_WinKawaks_NeoGeo:
                    // they're using RGB555 for RGB666
                    // that's a functional collapse of the bright/dark bit, just using the bright colors
                    // so just map back to bright NG colors
                    r = ColorSystem::GetNEOGEOColorFromWinKawaksRGB555(r);
                    g = ColorSystem::GetNEOGEOColorFromWinKawaksRGB555(g);
                    b = ColorSystem::GetNEOGEOColorFromWinKawaksRGB555(b);
                    break;
#ifdef FORCE_COLOR_FORMAT_ALIGNMENT
                // if we do want this, optimize it
                case RGBAImportMathQuirk::Quirked_ForceNearest:
                    r = CurrGame->GetNearestLegal8BitColorValue_RGB(r);
                    g = CurrGame->GetNearestLegal8BitColorValue_RGB(g);
                    b = CurrGame->GetNearestLegal8BitColorValue_RGB(b);
                    break;
#endif
                default:
                    break;
            }

            const COLORREF imageColor = RGB(r, g, b);
            
            if (a) // not transparent
            {
                for (size_t iPalette = 0; iPalette < rgrgPaletteSet.size(); iPalette++)
                {
                    for (size_t iPaletteColor = 0; iPaletteColor < rgrgPaletteSet[iPalette].size(); iPaletteColor++)
                    {
                        if ((iPaletteColor % static_cast<size_t>(writeLength)) == 0) // skip transparency bit
                        {
                            continue;
                        }

                        if (imageColor == (rgrgPaletteSet[iPalette][iPaletteColor] & 0xffffff)) // ignore alpha
                        {
                            // previous to slicing, establish each pixel in its own band
                            rgSlicedData[iPalette].indexedPixels[iCurrentPixel] = static_cast<uint8_t>(iPaletteColor);
                            rgSlicedData[iPalette].textureHasColorData = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    return rgSlicedData;
}

// Slice everything according to palette length if needed
std::vector<sTextureData> sTextureData::SliceToLayers(std::vector<std::vector<COLORREF>> rgrgPaletteSet, std::optional<int> optTargetLayer)
{
    std::vector<sTextureData> rgrgPreviewSlices;

    rgrgPreviewSlices.resize(rgrgPaletteSet.size());

    for (size_t iSlice = 0; iSlice < rgrgPreviewSlices.size(); iSlice++)
    {
        rgrgPreviewSlices.at(iSlice).indexedPixels.resize(indexedPixels.size());
        rgrgPreviewSlices.at(iSlice).dimensions = dimensions;
    }

    // divide things up by palette length
    for (size_t iPixel = 0; iPixel < indexedPixels.size(); iPixel++)
    {
        for (size_t iPalette = 0, nUsedPaletteColors = 0, nTotalPaletteSize = rgrgPaletteSet.at(iPalette).size();
                    iPalette < rgrgPaletteSet.size(); iPalette++)
        {
            // for full stack replacement, everything is 0-based from palette 0
            // for partial replacement, we are relative to that specific target
            if (optTargetLayer.has_value())
            {
                nTotalPaletteSize = rgrgPaletteSet.at(iPalette).size();
            }

            if ((!optTargetLayer.has_value()) || // all layers
                (optTargetLayer.value() == static_cast<int>(iPalette))) // or they specifically want this layer
            {
                if ((indexedPixels.at(iPixel)) &&
                    (indexedPixels.at(iPixel) < nTotalPaletteSize))
                {
                    // assign color to slice but make sure it's relative
                    rgrgPreviewSlices.at(iPalette).indexedPixels.at(iPixel) = static_cast<uint8_t>(indexedPixels.at(iPixel) - nUsedPaletteColors);
                    rgrgPreviewSlices.at(iPalette).textureHasColorData = true;
                    break;
                }
            }

            // for full stack replacement, everything is 0-based from palette 0
            // for partial replacement, we are relative to that specific target
            if (!optTargetLayer.has_value())
            {
                nUsedPaletteColors = nTotalPaletteSize;
                nTotalPaletteSize += rgrgPaletteSet.at(iPalette).size();
            }
        }
    }

    return rgrgPreviewSlices;
}

bool sTextureData::DoesTextureHaveColorData()
{
    if (!textureHasColorData.has_value())
    {
        if (!indexedPixels.empty())
        {
            textureHasColorData = false;

            for (auto& pixel : indexedPixels)
            {
                // We don't need to worry about palette write length (16/MAX) since by
                // this point all transparency bytes have been nulled
                if (pixel)
                {
                    textureHasColorData = true;
                }
            }
        }
    }

    return textureHasColorData.value_or(false);
}

bool sTextureData::DimensionsAreValid()
{
    if (dataType == TextureDataType::Indexed)
    {
        return dimensions.GetPixelCount() == static_cast<int>(indexedPixels.size());
    }
    else
    {
        return (dimensions.GetPixelCount() * 4) == static_cast<int>(rgbaPixels.size());
    }
}
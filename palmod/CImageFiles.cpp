#include "stdafx.h"
#include "atlimage.h"
#include "CImageFiles.h"

bool LoadTextureFromCImageSprite(LPCWSTR pszTextureLocation, sTextureData& textureData)
{
    CImage sprite;
    bool fLoadedData = false;

    if (SUCCEEDED(sprite.Load(pszTextureLocation)) &&
        sprite.IsDIBSection() &&
        sprite.IsIndexed())  // Note that animated GIFs will be DIBSections but not indexed
    {
        //uint8_t* pBits = reinterpret_cast<uint8_t*>(sprite.GetBits());

        // Need to replace the color table so we can figure out what goes where easily
        const int nColorTableSize = sprite.GetMaxColorTableEntries();

        RGBQUAD* pColorTable = new RGBQUAD[nColorTableSize];
        uint16_t r = 0, g = 0, b = 0;

        // override the color table so that we can then remap
        for (int iPos = 0; iPos < nColorTableSize; iPos++)
        {
            pColorTable[iPos] = { static_cast<uint8_t>(b), static_cast<uint8_t>(g), static_cast<uint8_t>(r) };
            r++;
            if (r > 0xff)
            {
                r = 0;
                g++;
                if (g > 0xff)
                {
                    // we won't hit this
                    g = 0;
                    b++;
                }
            }
        }

        sprite.SetColorTable(0, nColorTableSize, pColorTable);
        safe_delete_array(pColorTable);

        textureData.dimensions.width = sprite.GetWidth();
        textureData.dimensions.height = sprite.GetHeight();

        const size_t nPixelCount = static_cast<size_t>(textureData.dimensions.width) * textureData.dimensions.height;

        textureData.indexedPixels.resize(nPixelCount);

        if (sprite.GetPitch() > 0)
        {
            size_t iPos = 0;

            for (int yPos = 0; yPos < textureData.dimensions.height; yPos++)
            {
                for (int xPos = 0; xPos < textureData.dimensions.width; xPos++)
                {
                    const COLORREF curColor = sprite.GetPixel(xPos, yPos);
                    const uint8_t nColorIndex = (GetRValue(curColor) + GetGValue(curColor) + GetBValue(curColor));

                    textureData.indexedPixels.at(iPos) = nColorIndex;
                    iPos++;
                }
            }
        }
        else
        {
            // We're flipped: flip the logic.
            size_t iPos = nPixelCount - 1;
            for (int yPos = textureData.dimensions.height - 1; yPos >= 0; yPos--)
            {
                for (int xPos = textureData.dimensions.width - 1; xPos >= 0; xPos--)
                {
                    const COLORREF curColor = sprite.GetPixel(xPos, yPos);
                    const uint8_t nColorIndex = (GetRValue(curColor) + GetGValue(curColor) + GetBValue(curColor));

                    textureData.indexedPixels.at(iPos) = nColorIndex;
                    iPos--;
                }
            }
        }

        fLoadedData = !textureData.indexedPixels.empty();
    }

    return fLoadedData;
}

#pragma once
#include "TextureData.h"

struct PNGImportSpecialOptions
{
    bool fForceNonIndexed = false;
    bool fReversedColorTable = false;
    bool fColorTableStartsAtOne = true;
};

bool LoadTextureFromPNG(LPCWSTR pszTextureLocation, sTextureData& textureData, PNGImportSpecialOptions importOptions = {});

#pragma once
#include "game\Default.h"
#include <optional>

enum class TextureDataType
{
    Indexed,
    RGBA,
};

enum class RGBAImportMathQuirk
{
    None,
    Quirked_WinKawaks_CPS,
    Quirked_WinKawaks_NeoGeo,
    Quirked_FBNeo_CPS3,
    Quirked_ForceNearest,
};

struct sTextureData
{
    sImageDimensions dimensions;
    std::vector<uint8_t> indexedPixels;
    std::vector<uint8_t> rgbaPixels;
    TextureDataType dataType = TextureDataType::Indexed;
    std::optional<bool> textureHasColorData;

    bool DoesTextureHaveColorData();

    // simple check to see if anything has been loaded
    bool HaveAnyData() { return !indexedPixels.empty() || !rgbaPixels.empty(); };

    void ConvertFromRGBAIfNeeded(PALWriteOutputOptions writeOptions, std::vector<std::vector<COLORREF>> rgrgPaletteSet, RGBAImportMathQuirk importQuirk);

    void Resize(sImageDimensions newSize, sImageDimensions offset = {});
    void Merge(sTextureData mergeAbove, sImageDimensions offset = {});
    bool Clip(RECT clipRect);
    bool ClipUnused() { return Clip(GetUsedRect()); };
    void FlipIfNeeded(SpriteImportDirection direction);
    RECT GetUsedRect();

    std::vector<sTextureData> SliceToLayers(std::vector<std::vector<COLORREF>> rgrgPaletteSet, std::optional<int> optTargetLayer);
};

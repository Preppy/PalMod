
#include "ImgDisp.h"

uint8_t* LoadTextureFromRAWSprite(wchar_t* pszTextureLocation, sImageDimensions& suggestedImageSize,
                                    int nImgAmt, sImgNode** ppImgBuffer, std::array<sTextureData, MAX_IMAGES_DISPLAYABLE> vSpriteOverrideTextures,
                                    UINT& nPositionToLoadTo, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, sImgNode** pImgBuffer, bool fPreferQuietMode = true);

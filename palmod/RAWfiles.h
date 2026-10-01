
#include "ImgDisp.h"

uint8_t* LoadTextureFromRAWSprite(LPCWSTR pszTextureLocation, sImageDimensions& suggestedImageSize,
                                    int nImgAmt, sImgNode** ppImgBuffer, std::array<sTextureData, MAX_IMAGES_DISPLAYABLE> vSpriteOverrideTextures,
                                    UINT& nPositionToLoadTo, sSpriteImportOptions& importPreviewOptions, sImgNode** pImgBuffer, bool fMustShowAdvancedOptions, bool& fUserCancelled);

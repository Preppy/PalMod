#pragma once

namespace RLEData
{
    uint8_t* RLEDecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight);
    uint8_t* BitMaskRLEDecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight);
};

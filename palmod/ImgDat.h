#pragma once

#include "ImgInfoList.h"
#include <map>

class CImgDat {
private:

    std::map<uint16_t, ImgInfoList*>* nImgMap = nullptr;

    uint16_t nCurGameImgAmt = 0x0000;

    uint16_t nCurGameFlag = 0xFFFF;
    uint16_t nCurImgGameFlag = 0xFFFF;

    uint8_t uReadGameFlag = 0x00;
    uint16_t uReadNumImgs = 0x0000;
    uint32_t uReadNextImgLoc = 0x00000000;

    bool imageBufferFlushed = false;
    bool imageBufferPrepped = false;
    bool PrepImageBuffer(std::vector<uint16_t> prgGameImageSet, uint8_t uGameFlag);
    bool sameGameAlreadyLoaded(uint8_t uGameFlag, uint8_t uImgGameFlag);

    BOOL m_fOnTheFly = FALSE;

public:
    CImgDat();
    ~CImgDat();

    BOOL LoadGameImages(wchar_t* lpszLoadFile, uint8_t uGameFlag, uint8_t uImgGameFlag, uint32_t uGameUnitAmt, std::vector<uint16_t> prgGameImageSet, BOOL fLoadAll = TRUE);
    sImgDef* GetImageDef(uint32_t uUnitId, uint16_t uImgId);
    bool FlushImageBuffer();

    uint16_t GetCurrImgFlag() { return nCurImgGameFlag; };
    uint8_t* GetImgData(sImgDef* pCurrImg, uint8_t uGameFlag, uint16_t nCurrentUnitId, uint8_t nCurrentImgId);

    BOOL ParsePreviewName(LPCWSTR filename, uint16_t *uCurrUnitId, uint8_t *uCurrImgId, uint16_t  *uCurrImgWidth, uint16_t *uCurrImgHeight, bool *isPng);

};

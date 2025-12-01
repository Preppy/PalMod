#pragma once

#define MAX_GAMES 4
#define MAX_IMAGE 16

#include <map>
#include "ImgInfoList.h"

class CImgDat {
private:

    std::map<uint16_t, ImgInfoList*>* nImgMap = nullptr;

    uint16_t nCurGameImgAmt = 0x0000;

    uint16_t nCurGameFlag = 0xFFFF;
    uint8_t nCurImgDatGameSectionFlag = 0xFF;

    uint8_t uReadGameSectionFlag = 0x00;
    uint16_t uReadNumImgs = 0x0000;
    uint32_t uReadNextImgLoc = 0x00000000;

    bool imageBufferFlushed = false;
    bool imageBufferPrepped = false;
    bool PrepImageBuffer(std::vector<uint16_t> prgGameImageSet, uint16_t uGameFlag);
    bool sameGameAlreadyLoaded(uint16_t uGameFlag, uint8_t uImgDatGameSectionFlag);

    void SanityCheckImgDat(ULONGLONG nFileSize, uint32_t nCurrentDaystamp, uint8_t nNumGameSections);

    CFile ImgDatFile;

    BOOL m_fOnTheFly = FALSE;

public:
    CImgDat();
    ~CImgDat();

    BOOL LoadGameImages(wchar_t* lpszLoadFile, uint16_t uGameFlag, uint8_t uImgDatGameSectionFlag, uint32_t uGameUnitAmt, std::vector<uint16_t> prgGameImageSet, BOOL fLoadAll = TRUE);
    sImgDef* GetImageDef(uint16_t uImgUnitId, uint8_t uImgId);
    bool FlushImageBuffer();
    uint8_t* DecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight, uint8_t uiBPP);

    uint16_t GetCurrImgFlag() { return nCurImgDatGameSectionFlag; };
    uint8_t* GetImgData(sImgDef* pCurrImg, uint16_t uGameFlag, uint16_t nCurrentImgUnitId, uint8_t nCurrentImgId);

    void CloseImgFile();
};

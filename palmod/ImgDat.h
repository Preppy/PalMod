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
    uint16_t nCurImgGameFlag = 0xFFFF;

    uint8_t uReadGameFlag = 0x00;
    uint16_t uReadNumImgs = 0x0000;
    uint32_t uReadNextImgLoc = 0x00000000;

    bool imageBufferFlushed = false;
    bool imageBufferPrepped = false;
    bool PrepImageBuffer(std::vector<uint16_t> prgGameImageSet, uint8_t uGameFlag);
    bool sameGameAlreadyLoaded(uint8_t uGameFlag, uint8_t uImgGameFlag);
    void getBMRLEData(uint8_t chunkSize, uint8_t* inputData, uint8_t* output_data, uint32_t& i_byteCtr, uint32_t& o_dataCtr);

    void SanityCheckImgDat(ULONGLONG nFileSize, uint32_t nCurrentDaystamp, uint8_t nNumGames);

    CFile ImgDatFile;

    BOOL m_fOnTheFly = FALSE;

public:
    CImgDat();
    ~CImgDat();

    BOOL LoadGameImages(wchar_t* lpszLoadFile, uint8_t uGameFlag, uint8_t uImgGameFlag, uint32_t uGameUnitAmt, std::vector<uint16_t> prgGameImageSet, BOOL fLoadAll = TRUE);
    sImgDef* GetImageDef(uint32_t uUnitId, uint16_t uImgId);
    bool FlushImageBuffer();
    uint8_t* DecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight, uint8_t uiBPP);
    uint8_t* RLEDecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight);
    uint8_t* BitMaskRLEDecodeImg(uint8_t* pSrcImgData, uint32_t uiDataSz, uint16_t uiImgWidth, uint16_t uiImgHeight);

    uint16_t GetCurrImgFlag() { return nCurImgGameFlag; };
    uint8_t* GetImgData(sImgDef* pCurrImg, uint8_t uGameFlag, uint16_t nCurrentUnitId, uint8_t nCurrentImgId);

    void CloseImgFile();
};

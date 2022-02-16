#pragma once

#define MAX_GAMES 4
#define MAX_IMAGE 16

#include <map>
#include "ImgInfoList.h"

class CImgDat {
private:

    std::map<UINT16, ImgInfoList*>* nImgMap = nullptr;

    UINT16 nCurGameImgAmt = 0x0000;

    UINT16 nCurGameFlag = 0xFFFF;
    UINT16 nCurImgGameFlag = 0xFFFF;

    UINT8 uReadGameFlag = 0x00;
    UINT16 uReadNumImgs = 0x0000;
    UINT32 uReadNextImgLoc = 0x00000000;

    bool imageBufferFlushed = false;
    bool imageBufferPrepped = false;
    bool PrepImageBuffer(std::vector<UINT16> prgGameImageSet, UINT8 uGameFlag);
    bool sameGameAlreadyLoaded(UINT8 uGameFlag, UINT8 uImgGameFlag);
    void getBMRLEData(UINT8 chunkSize, UINT8* inputData, UINT8* output_data, UINT32& i_byteCtr, UINT32& o_dataCtr);

    void SanityCheckImgDat(ULONGLONG nFileSize, UINT32 nCurrentDaystamp, UINT8 nNumGames);

    CFile ImgDatFile;

    BOOL m_fOnTheFly = FALSE;

public:
    CImgDat(void);
    ~CImgDat(void);

    BOOL LoadGameImages(WCHAR* lpszLoadFile, UINT8 uGameFlag, UINT8 uImgGameFlag, uint32_t uGameUnitAmt, std::vector<UINT16> prgGameImageSet, BOOL fLoadAll = TRUE);
    sImgDef* GetImageDef(uint32_t uUnitId, UINT16 uImgId);
    bool FlushImageBuffer();
    UINT8* DecodeImg(UINT8* pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight, UINT8 uiBPP);
    UINT8* RLEDecodeImg(UINT8* pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight);
    UINT8* BitMaskRLEDecodeImg(UINT8* pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight);

    UINT16 GetCurrImgFlag() { return nCurImgGameFlag; };
    UINT8* GetImgData(sImgDef* pCurrImg, UINT8 uGameFlag, UINT16 nCurrentUnitId, UINT8 nCurrentImgId);

    void CloseImgFile();
};

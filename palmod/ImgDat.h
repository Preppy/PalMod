#pragma once

#define MAX_GAMES 4
#define MAX_IMAGE 16

#include "ImgInfoList.h"

class CImgDat {
private:
    ImgInfoList ** ppImgData = nullptr;

    sImgDef** pLastImg;
    int nLastImgCt = 0;

    UINT16 uCurrUnitAmt = 0;
    UINT16 uCurrImgAmt = 0;

    UINT8 uReadGameFlag;
    UINT8 uReadBPP;
    UINT16 uReadNumImgs;
    UINT32 uNextImgLoc;

    UINT16 nCurrGFlag = -1;

    bool imageBufferFlushed = true;
    bool imageBufferPrepped = false;
    bool PrepImageBuffer(UINT16 uUnitAmt);
    
    CFile ImgDatFile;

    BOOL bOnTheFly = FALSE;

public:
    CImgDat(void);
    ~CImgDat(void);

    BOOL LoadImage(CHAR* lpszLoadFile, UINT8 uGameFlag, UINT16 uUnitAmt, UINT16 uImgAmt = MAX_IMAGE, BOOL bLoadAll = TRUE);
    sImgDef* GetImageDef(UINT16 uUnitId, UINT16 uImgId);
    bool FlushImageBuffer();
    UINT8* DecodeImg(UINT8* pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight, UINT8 uiBPP);

    int GetCurrGFlag() { return nCurrGFlag; };
    UINT8* GetImgData(sImgDef* pCurrImg, UINT8 uGameFlag, int nCurrentUnitId, int nCurrentImgId);

    void CloseImgFile();
    void FlushLastImg();
};

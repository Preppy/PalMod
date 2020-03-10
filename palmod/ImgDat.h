#pragma once

#define MAX_GAMES 4
#define MAX_IMAGE 16

struct sImgDef
{
    UINT16 uImgWidth;
    UINT16 uImgHeight;

    UINT8 bCompressed;
    UINT32 uDataSize;
    UINT32 uThisImgLoc;
    UINT8 * pImgData = nullptr;
};

class CImgDat
{
private:
    sImgDef *** ppImgData = nullptr;

    sImgDef * pLastImg[MAX_IMAGE];
    int nLastImgCt = 0;

    UINT16 uCurrUnitAmt = 0;
    UINT16 uCurrImgAmt = 0;

    UINT8 uReadGameFlag, uReadBPP;
    UINT16 uReadNumImgs;
    UINT32 uNextImgLoc;

    int nCurrGFlag = -1;

    void PrepImageBuffer(UINT16 uUnitAmt, UINT16 uImgAmt);

    CFile ImgDatFile;

    BOOL bOnTheFly = FALSE;

public:
    CImgDat(void);
    ~CImgDat(void);

    BOOL LoadImage(CHAR * lpszLoadFile, UINT8 uGameFlag, UINT16 uUnitAmt, UINT16 uImgAmt = MAX_IMAGE, BOOL bLoadAll = TRUE);
    sImgDef * GetImageDef(UINT8 uUnitId, UINT8 uImgId);
    void FlushImageBuffer();
    UINT8 * DecodeImg(UINT8 * pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight, UINT8 uiBPP);

    int GetCurrGFlag(){return nCurrGFlag;};
    UINT8 * GetImgData(sImgDef * pCurrImg);

    void CloseImgFile();
    void FlushLastImg();
};

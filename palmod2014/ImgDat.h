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
	UINT8 * pImgData;



};

class CImgDat
{
private:
	sImgDef *** ppImgData;

	sImgDef * pLastImg[MAX_IMAGE];
	int nLastImgCt;

	UINT8 uCurrUnitAmt;
	UINT8 uCurrImgAmt;

	UINT8 uReadGameFlag, uReadBPP;
	UINT16 uReadNumImgs;
	UINT32 uNextImgLoc;

	int nCurrGFlag;

	void PrepImageBuffer(UINT8 uUnitAmt, UINT8 uImgAmt);

	CFile ImgDatFile;

	BOOL bOnTheFly;

public:
	CImgDat(void);
	~CImgDat(void);

	BOOL LoadImage(CHAR * lpszLoadFile, UINT8 uGameFlag, UINT8 uUnitAmt, UINT16 uImgAmt = MAX_IMAGE, BOOL bLoadAll = TRUE);
	sImgDef * GetImageDef(UINT8 uUnitId, UINT8 uImgId);
	void FlushImageBuffer();
	UINT8 * DecodeImg(UINT8 * pSrcImgData, UINT32 uiDataSz, UINT16 uiImgWidth, UINT16 uiImgHeight, UINT8 uiBPP);

	int GetCurrGFlag(){return nCurrGFlag;};
	UINT8 * GetImgData(sImgDef * pCurrImg);

	void CloseImgFile();
	void FlushLastImg();

	
};

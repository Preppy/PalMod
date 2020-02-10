#pragma once

#include "DescTree.h"
#include "Default.h"
#include "GameDef.h"
#include "PalGroup.h"
#include "ImgTicket.h"

//File rule definition
struct sFileRule
{
	char szFileName[MAX_FILENAME];
	UINT32 uVerifyVar;
	UINT8 uUnitId;
};

enum ColMode
{
	COLMODE_12A,
	COLMODE_15,
	COLMODE_15ALT
};

enum ColFlag
{
	COL_R,
	COL_B,
	COL_G,
	COL_A,
};


class CGameClass
{


protected:

	CHAR * szDir;
	CHAR ** szUnitFile;
	UINT8 * bFileChanged;
	int nFileAmt;

	BOOL bIsDir;

	int nDefPalSz;
	

	int nRIndexAmt;
	int nGIndexAmt;
	int nBIndexAmt;
	int nAIndexAmt;

	double nRIndexMul;
	double nGIndexMul;
	double nBIndexMul;
	double nAIndexMul;

	int nUnitAmt;
	int nGameFlag;
	int nImgGameFlag;
	int nDisplayW;
	int nImgUnitAmt;

	//Values used for image out
	int nSrcPalUnit[MAX_PAL];
	int nSrcPalStart[MAX_PAL];
	int nSrcPalAmt[MAX_PAL];
	int nSrcPalInc[MAX_PAL];

	ColMode CurrColMode;
	sImgTicket * CurrImgTicket;
	CPalGroup BasePalGroup;

	eDispType DisplayType;
	CHAR * pButtonLabel;
	
	BOOL bUsesHybrid;
	UINT16 * pIndexRedir;
	int nHybridSz;

	static UINT16 CONV_32_12A(UINT32 inCol);
	static UINT32 CONV_12A_32(UINT16 inCol);
	static UINT16 CONV_32_15(UINT32 inCol);
	static UINT32 CONV_15_32(UINT16 inCol);
	static UINT16 CONV_32_15ALT(UINT32 inCol);
	static UINT32 CONV_15ALT_32(UINT16 inCol);
	static UINT16 SWAP_16(UINT16 palv);
	

public:
	CGameClass(void);
	~CGameClass(void);

	static BOOL bPostSetPalProc;

	UINT8 * rgUnitRedir;
	int nRedirCtr;

	UINT16 (*ConvCol)(UINT32 inCol);
	UINT32 (*ConvPal)(UINT16 inCol);

	CHAR * GetUnitFile(int nUnitId){return szUnitFile[nUnitId];};
	void SetUnitFile(int nUnitId, CHAR * szNewFile){szUnitFile[nUnitId] = szNewFile;};
	CHAR * GetLoadDir(){return szDir;};
	BOOL SetLoadDir(CHAR * szNewDir);

	ColMode GetColMode(){return CurrColMode;};
	BOOL SetColMode (ColMode NewMode);

	BOOL SpecSel(int * nVarSet, int nPalId, int nStart, int nInc, int nAmt = 1, int nMax = 6);

	int GetGameFlag(){return nGameFlag;};
	int GetImgGameFlag(){return nImgGameFlag;};
	int GetUnitCt(){return nUnitAmt;};
	int GetImgUnitCt(){return nImgUnitAmt;};
	int GetPalDisplayW(){return nDisplayW;};
	sImgTicket * GetImgTicket(){return CurrImgTicket;};

	CPalGroup * GetPalGroup(){return &BasePalGroup;};

	int GetFileAmt(){return nFileAmt;};
	UINT8 * GetChangeRg(){return bFileChanged;};

	void SetIsDir(BOOL bNewIsDir = TRUE){bIsDir = bNewIsDir;};
	BOOL GetIsDir(){return bIsDir;};

	int GetPlaneAmt(ColFlag Flag);
	double GetPlaneMul(ColFlag Flag);

	void ClearSetImgTicket(sImgTicket * NewImgTicket = NULL);
	sImgTicket * CreateImgTicket(int nUnitId, int nImgId, sImgTicket * NextTicket = NULL, int nXOffs = 0, int nYOffs = 0);
	

	int GetImgOutPalAmt(){return nSrcPalAmt[0];};
	void ClearSrcPal();

	CHAR * GetButtonDesc(){return pButtonLabel;};
	eDispType GetImgDispType(){return DisplayType;};
	
	void SetSourcePal(int nIndex, int nUnitId,  int nStart, int nAmt, int nInc);

	void Revert(int nPalId);

	int GetImgCt(){return IMGAMT[GetImgGameFlag()];};

	BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16 * pData, int nExclusion, COLORREF ** pNewPal, int * nNewPalSz);
//Public virtual
	
	virtual CDescTree * GetMainTree() = 0;
	
	virtual BOOL LoadFile(CFile * LoadedFile, int nUnitId) = 0;
	virtual BOOL SaveFile(CFile * SaveFile, int nUnitId) = 0;
	virtual BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1) = 0;
	virtual COLORREF * CreatePal(int nUnitId, int nPalId) = 0;
	virtual void UpdatePalData() = 0;
	virtual void FlushUnitFile() = 0;
	virtual void PrepUnitFile() = 0;

	COLORREF *** CreateImgOutPal();
	
	//virtual void SaveFile() = 0;

};

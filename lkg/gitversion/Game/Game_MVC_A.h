#pragma once
#include "gameclass.h"
#include "MVC_A_DEF.h"


class CGame_MVC_A : public CGameClass
{
private:

	//Used for image selection
	int nTargetImgId;
	int nNormalPalAmt;

	//Used for GetPalOffset

	int nCurrPalOffs;
	int nCurrPalSz;

	UINT16 ***pppDataBuffer;

	void GetPalOffsSz(int nUnitId, int nPalId);

	void InitDataBuffer();
	void ClearDataBuffer();

public:
	CGame_MVC_A(void);
	~CGame_MVC_A(void);

	//Static functions / variables
	static CDescTree MainDescTree;

//	static CDescTree * GetMainTree();
	static CDescTree InitDescTree();
	//static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
	static sFileRule GetRule(int nUnitId);

	//Extra palette function
	static int GetBasicAmt(int nUnitId);

	static void LoadExtraFile();

	//Normal functions
	CDescTree * GetMainTree();

	static int GetPalCt(int nUnitId);

	void CreateDefPal(sDescNode * srcNode, int nSepId);
	BOOL LoadFile(CFile * LoadedFile, int nUnitId = 0);
	BOOL SaveFile(CFile * SaveFile, int nUnitId = 0);
	BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

	COLORREF * CreatePal(int nUnitId, int nPalId);

	void UpdatePalData();

	void FlushUnitFile(){if(bFileChanged){delete bFileChanged; bFileChanged = NULL;}};
	void PrepUnitFile(){if(!bFileChanged){ bFileChanged = new UINT8;}};


};

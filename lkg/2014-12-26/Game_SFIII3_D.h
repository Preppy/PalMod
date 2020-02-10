#pragma once
#include "gameclass.h"
#include "SFIII3_D_DEF.h"


class CGame_SFIII3_D : public CGameClass
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
	CGame_SFIII3_D(void);
	~CGame_SFIII3_D(void);

	//Static functions / variables
	static CDescTree MainDescTree;

//	static CDescTree * GetMainTree();
	static CDescTree InitDescTree();
	//static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);

	static UINT8 uRuleCtr;
	static sFileRule GetNextRule();
	static sFileRule GetRule(int nUnitId);

	static UINT8 GetRuleCtr(){return uRuleCtr;};
	static void ResetRuleCtr(){uRuleCtr = 0;};

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

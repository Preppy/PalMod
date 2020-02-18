#pragma once
#include "gameclass.h"
#include "MVC_A_DEF.h"

constexpr auto EXTRA_FILENAME_MVC = "mvce.txt";
#define GetExtraDefForMVC(x)((stExtraDef *)&MVC_A_EXTRA_CUSTOM[x])

class CGame_MVC_A : public CGameClass
{
private:
	BOOL bUsingFileExtra = FALSE;

	//Used for image selection
	int nTargetImgId = 0;

	//Used for GetPalOffset
	int nCurrPalOffs = 0;
	int nCurrPalSz = 0;

	UINT16 ***pppDataBuffer;

	void GetPalOffsSz(int nUnitId, int nPalId);

	void InitDataBuffer();
	void ClearDataBuffer();

	static stExtraDef * MVC_A_EXTRA_CUSTOM;

public:
	CGame_MVC_A(void);
	~CGame_MVC_A(void);

	//Static functions / variables
	static CDescTree MainDescTree;

	static CDescTree InitDescTree();
	static sFileRule GetRule(int nUnitId);

	//Extra palette function
	static int GetExtraCt(int nUnitId, BOOL bVisible = FALSE);
	static int GetExtraLoc(int nUnitId);
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
	BOOL CreateExtraPal(int nUnitId, int nPalId);

	void UpdatePalData();

	void FlushUnitFile(){if(rgFileChanged){delete rgFileChanged; rgFileChanged = NULL;}};
	void PrepUnitFile(){if(!rgFileChanged){ rgFileChanged = new UINT8;}};
};

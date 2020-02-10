#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"

#define SFIII3_A_USEEXTRAFILE

#define EXTRA_FILENAME "sfiii3e.txt"

#ifdef SFIII3_A_USEEXTRAFILE
#define GetExtraDef(x)((stExtraDef *)&SFIII3_A_EXTRA_CUSTOM[x])
#else
#define GetExtraDef(x)(const_cast<stExtraDef *>(&SFIII3_A_EXTRA[x]))
#endif

class CGame_SFIII3_A : public CGameClass
{
private:


	BOOL bUsingFileExtra;

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

	static stExtraDef * SFIII3_A_EXTRA_CUSTOM;
public:
	CGame_SFIII3_A(void);
	~CGame_SFIII3_A(void);

	//Static functions / variables
	static CDescTree MainDescTree;

//	static CDescTree * GetMainTree();
	static CDescTree InitDescTree();
	//static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
	static sFileRule GetRule(int nUnitId);

	//Extra palette function
	static int GetExtraCt(int nUnitId, BOOL bVisible = FALSE);
	static int GetExtraLoc(int nUnitId);
	static int GetBasicAmt(int nUnitId);

	static void LoadExtraFile();

	//Normal functions
	CDescTree * GetMainTree();

	int GetBasicImgId(int nUnitId, int nPalId);
	int GetPalCt(int nUnitId);

	void CreateDefPal(sDescNode * srcNode, int nSepId);
	BOOL LoadFile(CFile * LoadedFile, int nUnitId = 0);
	BOOL SaveFile(CFile * SaveFile, int nUnitId = 0);
	BOOL CGame_SFIII3_A::UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

	COLORREF * CreatePal(int nUnitId, int nPalId);
	BOOL CreateExtraPal(int nUnitId, int nPalId);

	void UpdatePalData();

	void FlushUnitFile(){if(bFileChanged){delete bFileChanged; bFileChanged = NULL;}};
	void PrepUnitFile(){if(!bFileChanged){ bFileChanged = new UINT8;}};


};

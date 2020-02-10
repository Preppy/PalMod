#pragma once
#include "GameClass.h"
#include "MVC2_D_Def.h"

class CGame_MVC2_D : public CGameClass
{
private:
	void InitDataBuffer();
	void ClearDataBuffer();

	UINT16 ** ppDataBuffer;
public:
	CGame_MVC2_D(void);
	~CGame_MVC2_D(void);

	//Vars used for extra processing
	BOOL bLoadDefPal;
	int nExtraAmt;
	int nTargetImgId; //Image id used for image selection
	int nImgUnitId; //Unit Image Id

	//Static functions
	static UINT8 uRuleCtr;
	static UINT16 rgExtraChrLoc[MVC2_D_NUMUNIT];

	static UINT8 GetRuleCtr(){return uRuleCtr;};
	static void ResetRuleCtr(){uRuleCtr = 0;};

	static CDescTree MainDescTree;

	static CDescTree InitDescTree();
	static void InitExtraRg();
	static int CountExtraRg(int nUnitId, BOOL bOmniExtra);
	//static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
	static sFileRule GetNextRule();
	static sFileRule GetRule(int nRuleId);

	static BOOL bAlphaTrans;

	//Normal functions
	CDescTree * GetMainTree();

	

	BOOL LoadFile(CFile * LoadedFile, int nUnitId);
	BOOL SaveFile(CFile * SaveFile, int nUnitId);

	COLORREF * CreatePal(int nUnitId, int nPalId);
	BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);
	int GetBasicOffset(int nPalId);

	void SetExtraImg(int nImgId, int nUnitId, int nPalId);

	void UpdatePalData();
	void FlushUnitFile();
	void PrepUnitFile();

	UINT16 ** GetDataBuffer(){return ppDataBuffer;};
	void PostSetPal(int nUnitId, int nPalId);
	void CreateDefPal(sDescNode * srcNode, int nSepId);
	void CreateDefPal(int nUnitId, int nPalId, int nSepId);
	BOOL CreateExtraPal(int nUnitId, int nPalId, int nStart, int nInc, int nImgId, int nSepId = 0, int nAmt = 1);
	void ResetChangeFlag(int nUnitId);
	void ForEidrian(int nFlag, COLORREF crCol = 0);

	
};

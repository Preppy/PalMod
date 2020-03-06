#pragma once
#include "gameclass.h"
#include "XMVSF_A_DEF.h"

class CGame_XMVSF_A : public CGameClass
{
private:
	//Used for GetPalOffset
	int nCurrPalOffs = 0;
	int nCurrPalSz = 0;

	UINT16*** pppDataBuffer = nullptr;

	void GetPalOffsSz(int nUnitId, int nPalId);

	void InitDataBuffer();
	void ClearDataBuffer();

public:
	CGame_XMVSF_A(void);
	~CGame_XMVSF_A(void);

	//Static functions / variables
	static CDescTree MainDescTree;

	static CDescTree InitDescTree();
	static sFileRule GetRule(int nUnitId);

	//Extra palette function
	static int GetBasicAmt(int nUnitId);
	static int GetPalCt(int nUnitId);

	static void LoadExtraFile();

	//Normal functions
	CDescTree* GetMainTree();

	void CreateDefPal(sDescNode* srcNode, int nSepId);
	BOOL LoadFile(CFile* LoadedFile, int nUnitId = 0);
	BOOL SaveFile(CFile* SaveFile, int nUnitId = 0);
	BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

	COLORREF* CreatePal(int nUnitId, int nPalId);

	void UpdatePalData();

	void FlushUnitFile() { safe_delete(rgFileChanged); };
	void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT8; } };

	int GetLocalAmt(int nUnitId) { return (XMVSF_A_UNITLOC[nUnitId + 1] - XMVSF_A_UNITLOC[nUnitId]) / 0x20; };
};

#pragma once
#include "Default.h"

#define MAX_PAL 4
#define MAX_SEP 4

#define SORT_HUE 1
#define SORT_SAT 2
#define SORT_LUM 4

#define GetAValue(rgb)      (LOBYTE((rgb)>>24))
#define sq(x) ((double)x*x)

struct sPalRedir
{
	int nDefIndex;
	int nSepIndex;
};

struct sPalSep
{
	CHAR szDesc[MAX_DESC];
	int nStart;
	int nAmt;
};

struct sPalDef
{
	COLORREF * pPal;
	COLORREF * pBasePal;
	UINT16 uPalSz;

	UINT8 uUnitId;
	UINT16 uPalId;

	sPalSep * SepList[MAX_SEP];
	UINT8 uSepAmt;

	BOOL bChanged;
	BOOL bAvail;

	UINT16 * pSortTable;
	UINT8 uSortIndexStart;

	UINT8 uExtra1;
	UINT8 uExtra2;
	UINT8 uExtra3;
};

enum ePalType
{
	PALTYPE_8,
	PALTYPE_17,
};

class CPalGroup
{
private:
	sPalDef rgPalettes[MAX_PAL];
	sPalRedir rgRedir[MAX_PAL * MAX_SEP];
	int nRedirCtr;

	int nCurrPalAmt;

	ePalType PalMode;

	void InitPal();

	
	BOOL FlushPal(int nIndex);

	

public:
	CPalGroup(void);
	~CPalGroup(void);
	
	UINT8 (*ROUND)(UINT8 rVal);
	UINT8 (*ROUND_R)(UINT8 rVal);
	UINT8 (*ROUND_G)(UINT8 rVal);
	UINT8 (*ROUND_B)(UINT8 rVal);
	
	static UINT8 ROUND_8(UINT8 rVal);
	static UINT8 ROUND_17(UINT8 rVal);

	void SortPal(int nIndex, int nStartIndex, int nSortFlag);
	COLORREF * GetUnsortedPal(int nIndex);

	int GetAddIndex(){return nCurrPalAmt - 1;};
	
	double LimitHLS(double a){return (a > 1.0 ? 1.0 : (a < 0.0 ? 0.0 : a));};
	double SubHLS(double a){while(a >= 1.0)a-=1.0; return a;};
	UINT8 LimitRGB(int Val){return (UINT8)(Val < 0 ? 0 : (Val > 255 ? 255 : Val));};

	BOOL SetMode(ePalType NewPalMode);
	int GetPalAmt(){return nCurrPalAmt;};

	BOOL AddPal(COLORREF * pPal, UINT16 uPalSz, UINT8 uUnitId, UINT16 uPalId);
	BOOL AddSep(int nIndex, CHAR * szDesc, int nStart, int nAmt);

	void SetRGBA(COLORREF * crTarget, UINT8 rVal, UINT8 gVal, UINT8 bVal, UINT8 aVal = 0);
	void SetHLSA(COLORREF * crTarget, double dH, double dL, double dS, UINT8 aVal);

	void SetAddHLSA(COLORREF crSrc, COLORREF * crTarget, double fpAddH, double fpAddL, double fpAddS, int uAddA);
	void SetAddRGBA(COLORREF crSrc, COLORREF * crTarget, int uAddR, int uAddG, int uAddB, int uAddA);

	sPalDef * GetPalDef(int nIndex){return &rgPalettes[nIndex];};
	sPalSep * GetSep(int nPal, int nSep){return rgPalettes[nPal].SepList[nSep];};
	sPalRedir * GetRedir(){return rgRedir;};

	void FlushPalAll();

	


};

extern int LimitVal(int nVal, int nHI, int nLO);
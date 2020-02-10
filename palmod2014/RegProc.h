#pragma once

#define REG_MAIN		0
#define REG_PREV		1
#define REG_IMGOUT		2

#define RECT_STRSZ		256

#define BGBMPFILE "bgbmp.bmp"

class CRegProc
{
public:
	CRegProc(int nSrcType = -1);
	~CRegProc(void);

	void LoadReg(int src);
	void SaveReg(int src);

	//Main
	
	RECT main_szpos;

	//CString main_lastdirdir;
	//CString main_lastfiledir;

	BOOL main_bGetColor;
	BOOL main_bAlphaTrans;
	BOOL main_bShow32;
	BOOL main_bProcSupp;

	BOOL bAutoSetCol;

	//Preview
	
	RECT prev_szpos;

	COLORREF prev_bgcol;
	COLORREF prev_blinkcol;
	float prev_zoom;

	CHAR szPrevBGLoc[MAX_PATH];
	int nBGXOffs;
	int nBGYOffs;
	BOOL bTileBG;
	BOOL bUseBGCol;

	//New Image

	RECT imgout_szpos;
	COLORREF imgout_bgcol;
	DWORD imgout_border;
	DWORD imgout_zoomindex;
	BOOL bTransPNG;
	


};

CString RectToStr(RECT in_rect);
RECT StrToRect(CString in_str);


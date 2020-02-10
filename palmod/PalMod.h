// PalMod.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#define IMGDATFILE "img.dat"

#include "resource.h"		// main symbols



#include "PreviewDlg.h"

#include "Game\GameLoad.h"
#include "ImgDat.h"

#include "PalModDlg.h"



// CPalModApp:
// See PalMod.cpp for the implementation of this class
//

class CPalModApp : public CWinApp
{
private:
	CGameLoad GameLoader;
	CGameClass * CurrGame;
	CImgDat ImgBase;

	void CleanUp();
	CPalGroup * BasePal;

	BOOL bImgLoaded;

	CPalModDlg * PalModDlg;
	CPreviewDlg * PreviewDlg;

	
	
	
public:
	CPalModApp();

	CGameLoad * GetLoader(){return &GameLoader;};
	CGameClass * GetCurrGame(){return CurrGame;};
	void SetGameClass(CGameClass * NewGame);

	CImgDat * GetImgFile(){return &ImgBase;};
	CPalGroup * GetBasePal(){return BasePal;};
	CImgDisp * GetImgDispCtrl(){return &PreviewDlg->m_ImgDisp;};

	CPalModDlg * GetPalModDlg(){return PalModDlg;};
	CPreviewDlg * GetPreviewDlg(){return PreviewDlg;};

	BOOL IsImgLoaded(){return bImgLoaded;};

	void ClearGameClass();

	
// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

extern CPalModApp theApp;
extern CPalModApp * GetHost();

extern HACCEL m_hAccelTable;
// PalMod.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
#error "include 'stdafx.h' before including this file for PCH"
#endif

// IMG.dat contains all the sprites used for preview.
// Magnetro ripped the sprites, eidrian used PSP to arrange them, and then suupabuu integrated them.
#define IMGDATFILE L"img2020.dat"

#include "resource.h"        // main symbols

#include "PreviewDlg.h"

#include "Game\GameLoad.h"
#include "ImgDat.h"

#include "PalModDlg.h"

// CPalModApp:
// See PalMod.cpp for the implementation of this class
//

extern HWND g_appHWnd;

const uint16_t MAXAMT_ColorsPerPaletteTable = 256;

const uint16_t PAL_MAXWIDTH_8COLORSPERLINE = 8;
const uint16_t PAL_MAXWIDTH_16COLORSPERLINE = 16;
const uint16_t PAL_MAXAMT_8COLORSPERLINE = 128;
const uint16_t PAL_MAXAMT_16COLORSPERLINE = MAXAMT_ColorsPerPaletteTable;

// arguably could be moved to a helper file
void LaunchFileOrURL(LPCWSTR pszFileName, LPCWSTR pszBackupURL);

class CPalModApp : public CWinApp
{
private:
    CGameLoad GameLoader;
    CGameClass* CurrGame = nullptr;
    CImgDat ImgBase;

    void CleanUp();
    CPalGroup* BasePal = nullptr;

    BOOL m_fIsImageLoaded = FALSE;

    CPalModDlg* PalModDlg = nullptr;
    CPreviewDlg* PreviewDlg = nullptr;

public:
    CPalModApp();
    ~CPalModApp();

    CGameLoad* GetLoader() { return &GameLoader; };
    CGameClass* GetCurrGame() { return CurrGame; };
    void SetGameClass(CGameClass* NewGame);

    CImgDat* GetImgFile() { return &ImgBase; };
    CPalGroup* GetBasePal() { return BasePal; };
    CImgDisp* GetImgDispCtrl() { return &PreviewDlg->m_ImgDisp; };
    CString GetAppName(bool fIncludeGameName = true);

    CPalModDlg* GetPalModDlg() { return PalModDlg; };
    CPreviewDlg* GetPreviewDlg() { return PreviewDlg; };

    BOOL IsImgLoaded() { return m_fIsImageLoaded; };

    void ClearGameClass();
    
    void LaunchReadMe();

    // Overrides
public:
    virtual BOOL InitInstance();

    // Implementation

    DECLARE_MESSAGE_MAP()
    virtual BOOL PreTranslateMessage(MSG* pMsg);
};

extern CPalModApp theApp;
extern CPalModApp* GetHost();

extern HACCEL g_hAccelTable;

#include "stdafx.h"
#include "regproc.h"

CRegProc::CRegProc(int nSrcType)
{
	if(nSrcType != -1)
	{
		LoadReg(nSrcType);
	}
}

CRegProc::~CRegProc(void)
{
}

void CRegProc::LoadReg(int src)
{
	HKEY hKey;
	DWORD RegType;
	DWORD GetSz;

	CString conv_str;

	if(RegOpenKeyEx(HKEY_CURRENT_USER, _T("Software\\knarxed\\PalMod"), 0, KEY_READ, &hKey) == ERROR_SUCCESS)
	{
		
		switch(src)
		{
		case REG_MAIN:
			{
				RegType = REG_DWORD;
				GetSz = sizeof( BOOL );

				if(RegQueryValueEx(hKey, "main_getcolor", 0, &RegType, (BYTE *)&main_bGetColor, &GetSz)  != ERROR_SUCCESS)
					main_bGetColor = TRUE;
				if(RegQueryValueEx(hKey, "main_alphatrans", 0, &RegType, (BYTE *)&main_bAlphaTrans, &GetSz)  != ERROR_SUCCESS)
					main_bAlphaTrans = TRUE;
				if(RegQueryValueEx(hKey, "main_show32", 0, &RegType, (BYTE *)&main_bShow32, &GetSz)  != ERROR_SUCCESS)
					main_bShow32 = FALSE;
				if(RegQueryValueEx(hKey, "main_procsupp", 0, &RegType, (BYTE *)&main_bProcSupp, &GetSz)  != ERROR_SUCCESS)
					main_bProcSupp = FALSE;
				if(RegQueryValueEx(hKey, "AutoSetColor", 0, &RegType, (BYTE *)&bAutoSetCol, &GetSz)  != ERROR_SUCCESS)
					bAutoSetCol = TRUE;

				RegType = REG_SZ;
				GetSz = RECT_STRSZ;

				if(RegQueryValueEx(hKey, "main_szpos", 0, &RegType, (BYTE *)conv_str.GetBufferSetLength(RECT_STRSZ), &GetSz) == ERROR_SUCCESS)
				{
					main_szpos = StrToRect(conv_str);
				}
				else
					main_szpos.top = -512;
			}
			break;
		case REG_PREV:
			{
				RegType = REG_DWORD;
				GetSz = sizeof( BOOL ); //int is same size as bool, so...

				if(RegQueryValueEx(hKey, "prev_bgcol", 0, &RegType, (BYTE *)&prev_bgcol, &GetSz) != ERROR_SUCCESS)
					prev_bgcol = RGB(0, 0, 0);
				if(RegQueryValueEx(hKey, "prev_blinkcol", 0, &RegType, (BYTE *)&prev_blinkcol, &GetSz) != ERROR_SUCCESS)
					prev_blinkcol = RGB(255, 255, 255);
				if(RegQueryValueEx(hKey, "PreviewTiledBG", 0, &RegType, (BYTE *)&bTileBG, &GetSz) != ERROR_SUCCESS)
					bTileBG = TRUE;
				if(RegQueryValueEx(hKey, "PreviewBGXOffset", 0, &RegType, (BYTE *)&nBGXOffs, &GetSz) != ERROR_SUCCESS)
					nBGXOffs = 0;
				if(RegQueryValueEx(hKey, "PreviewBGYOffset", 0, &RegType, (BYTE *)&nBGYOffs, &GetSz) != ERROR_SUCCESS)
					nBGYOffs = 0;
				if(RegQueryValueEx(hKey, "UseBGCol", 0, &RegType, (BYTE *)&bUseBGCol, &GetSz) != ERROR_SUCCESS)
					bUseBGCol = TRUE;


				GetSz = sizeof( float );

				if(RegQueryValueEx(hKey, "prev_zoom", 0, &RegType, (BYTE *)&prev_zoom, &GetSz) != ERROR_SUCCESS)
					prev_zoom = 2.0f;

				RegType = REG_SZ;
				GetSz = RECT_STRSZ;

				if(RegQueryValueEx(hKey, "prev_szpos", 0, &RegType, (BYTE *)conv_str.GetBufferSetLength(RECT_STRSZ), &GetSz) == ERROR_SUCCESS)
				{
					prev_szpos = StrToRect(conv_str);
				}
				else
					prev_szpos.top = -512;

				//Reset get size 
				GetSz = MAX_PATH;
				if(
					RegQueryValueEx(hKey, "PreviewBGFile", 0, &RegType, (BYTE *)szPrevBGLoc, &GetSz) != ERROR_SUCCESS
					&& GetFileAttributes(szPrevBGLoc) != FILE_ATTRIBUTE_ARCHIVE)
				{

					CString szTemp;
					GetModuleFileName(NULL, szTemp.GetBufferSetLength(MAX_PATH), MAX_PATH);
					strcpy(szPrevBGLoc, szTemp.Left(szTemp.ReverseFind('\\') + 1) + BGBMPFILE);
				}

			}
			break;
		case REG_IMGOUT:
			{
				RegType = REG_DWORD;
				GetSz = sizeof( DWORD );

				if(RegQueryValueEx(hKey, "imgout_bgcol", 0, &RegType, (BYTE *)&imgout_bgcol, &GetSz) != ERROR_SUCCESS)
					imgout_bgcol = RGB(0, 0, 0);
				if(RegQueryValueEx(hKey, "imgout_border", 0, &RegType, (BYTE *)&imgout_border, &GetSz) != ERROR_SUCCESS)
					imgout_border = 0;
				if(RegQueryValueEx(hKey, "imgout_zoomindex", 0, &RegType, (BYTE *)&imgout_zoomindex, &GetSz) != ERROR_SUCCESS)
					imgout_zoomindex = 0;

				GetSz = sizeof( BOOL );
				if(RegQueryValueEx(hKey, "TransparentPNG", 0, &RegType, (BYTE *)&bTransPNG, &GetSz) != ERROR_SUCCESS)
					bTransPNG = FALSE;

				RegType = REG_SZ;
				GetSz = RECT_STRSZ;

				if(RegQueryValueEx(hKey, "imgout_szpos", 0, &RegType, (BYTE *)conv_str.GetBufferSetLength(RECT_STRSZ), &GetSz) == ERROR_SUCCESS)
				{
					imgout_szpos = StrToRect(conv_str);
				}
				else
					imgout_szpos.top = -512;


			}
			break;
		}

		RegCloseKey(hKey);
	}
}

void CRegProc::SaveReg(int src)
{
	HKEY hKey;

	CString conv_str;

	if(RegCreateKeyEx(HKEY_CURRENT_USER, _T("Software\\knarxed\\PalMod"), 0, NULL, REG_OPTION_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
		== ERROR_SUCCESS)
	{
		switch(src)
		{
		case REG_MAIN:
			{
				//Preppy has already done this :)

				//RegSetValueEx(hKey, "LastDirDir", 0, REG_SZ, main_lastdirdir.GetBuffer(), main_lastdirdir.GetLength() + 1);
				//RegSetValueEx(hKey, "LastSaveDir", 0, REG_SZ, main_lastsavedir.GetBuffer(), main_lastsavedir.GetLength() + 1);

				RegSetValueEx(hKey, "main_getcolor", 0, REG_DWORD, (BYTE *)&main_bGetColor, sizeof( BOOL ));
				RegSetValueEx(hKey, "main_alphatrans", 0, REG_DWORD, (BYTE *)&main_bAlphaTrans, sizeof( BOOL ));
				RegSetValueEx(hKey, "main_show32", 0, REG_DWORD, (BYTE *)&main_bShow32, sizeof( BOOL ));
				RegSetValueEx(hKey, "main_procsupp", 0, REG_DWORD, (BYTE *)&main_bProcSupp, sizeof( BOOL ));
				RegSetValueEx(hKey, "AutoSetColor", 0, REG_DWORD, (BYTE *)&bAutoSetCol, sizeof( BOOL ));

				conv_str = RectToStr(main_szpos);

				RegSetValueEx(hKey, "main_szpos", 0, REG_SZ, (BYTE *)conv_str.GetBuffer(), conv_str.GetLength() + 1);

			}
			break;
		case REG_PREV:
			{
				RegSetValueEx(hKey, "prev_bgCol", 0, REG_DWORD, (BYTE *)&prev_bgcol, sizeof( COLORREF ));
				RegSetValueEx(hKey, "prev_blinkCol", 0, REG_DWORD, (BYTE *)&prev_blinkcol, sizeof( COLORREF ));
				RegSetValueEx(hKey, "prev_zoom", 0, REG_DWORD, (BYTE *)&prev_zoom, sizeof( float ));

				conv_str = RectToStr(prev_szpos);

				RegSetValueEx(hKey, "prev_szpos", 0, REG_SZ, (BYTE *)conv_str.GetBuffer(), conv_str.GetLength() + 1);
				RegSetValueEx(hKey, "PreviewBGFile", 0, REG_SZ, (BYTE *)szPrevBGLoc, (DWORD)( (strlen( szPrevBGLoc ) + 1) * sizeof(CHAR) ));
				RegSetValueEx(hKey, "PreviewTiledBG", 0, REG_DWORD, (BYTE *)&bTileBG, sizeof(BOOL));
				RegSetValueEx(hKey, "PreviewBGXOffset", 0, REG_DWORD, (BYTE *)&nBGXOffs, sizeof(int));
				RegSetValueEx(hKey, "PreviewBGYOffset", 0, REG_DWORD, (BYTE *)&nBGYOffs, sizeof(int));
				RegSetValueEx(hKey, "UseBGCol", 0, REG_DWORD, (BYTE *)&bUseBGCol, sizeof(int));

			}
			break;
		case REG_IMGOUT:
			{
				RegSetValueEx(hKey, "imgout_bgcol", 0, REG_DWORD, (BYTE *)&imgout_bgcol, sizeof( COLORREF ));
				RegSetValueEx(hKey, "imgout_border", 0, REG_DWORD, (BYTE *)&imgout_border, sizeof( DWORD ));
				RegSetValueEx(hKey, "imgout_zoomindex", 0, REG_DWORD, (BYTE *)&imgout_zoomindex, sizeof( DWORD ));
				RegSetValueEx(hKey, "TransparentPNG", 0, REG_DWORD, (BYTE *)&bTransPNG, sizeof( BOOL ));

				conv_str = RectToStr(imgout_szpos);

                RegSetValueEx(hKey, "imgout_szpos", 0, REG_SZ, (BYTE *)conv_str.GetBuffer(), conv_str.GetLength() + 1);				
			}
			break;
		}

		RegCloseKey(hKey);
	}
}

CString RectToStr(RECT in_rect)
{
	CString out_str;
	
	out_str.Format("%d %d %d %d", in_rect.left, in_rect.top, in_rect.right, in_rect.bottom);

	return out_str;
}

RECT StrToRect(CString in_str)
{
	RECT out_rect;

	char * rect_val = in_str.GetBuffer();

	out_rect.left = strtol(rect_val, &rect_val, 10);
	out_rect.top = strtol(rect_val, &rect_val, 10);
	out_rect.right = strtol(rect_val, &rect_val, 10);
	out_rect.bottom = strtol(rect_val, NULL, 10);

	return out_rect;
}
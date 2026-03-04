#include "stdafx.h"
#include "RegProc.h"
#include "Util.h"
#include "PalMod.h"

int SafeSHMessageBoxCheck(
    HWND   hwnd,
    LPCWSTR pszText,
    LPCWSTR pszCaption,
    UINT    uType,
    int     iDefault,
    LPCWSTR pszRegVal
)
{
    const bool fRunNormal = !CRegProc::UserIsOnWINE();

    // ok if they're on WINE we can get wrong returns AND they break multiline message display

    if (fRunNormal)
    {
        return SHMessageBoxCheck(hwnd, pszText, pszCaption, uType, iDefault, pszRegVal);
    }
    else
    {
        CString strWINEHatesUs = pszText;
        bool fUsingDumbHackery = false;

        if (!((uType & MB_ABORTRETRYIGNORE) ||
              (uType & MB_CANCELTRYCONTINUE)    ||
              (uType & MB_OKCANCEL) ||
              (uType & MB_RETRYCANCEL) ||
              (uType & MB_YESNOCANCEL)))
        {
            fUsingDumbHackery = true;
        }

        HKEY hKey;
        int returncode = iDefault;

        if (fUsingDumbHackery && (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_QUERY_VALUE|KEY_SET_VALUE, NULL, &hKey, NULL)
                                        == ERROR_SUCCESS))
        {
            DWORD dwAnswer = 0;
            DWORD dwRegType = REG_DWORD;
            DWORD cbSize = sizeof(DWORD);

            if ((RegQueryValueEx(hKey, pszRegVal, 0, &dwRegType, reinterpret_cast<LPBYTE>(&dwAnswer), &cbSize) == ERROR_SUCCESS) &&
                (dwRegType == REG_DWORD))
            {
                returncode = static_cast<int>(dwAnswer);
            }
            else
            {
                strWINEHatesUs += L"\r\n\r\nThis MessageBox is supposed to have a checkbox you can check to not show this dialog again,"
                                    L" but WINE doesn't support that correctly.  SO!  Click YES to keep seeing this dialog box in the future"
                                    L" or click NO to never see this dialog again.";

                uType |= MB_YESNO;

                returncode = MessageBox(g_appHWnd, strWINEHatesUs.GetString(), pszCaption, uType);

                if (returncode == IDNO)
                {
                    dwAnswer = static_cast<DWORD>(iDefault);

                    RegSetValueEx(hKey, pszRegVal, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&dwAnswer), sizeof(DWORD));
                }
            }

            RegCloseKey(hKey);
        }
        else
        {
            returncode = MessageBox(g_appHWnd, strWINEHatesUs.GetString(), pszCaption, uType);
        }

        return returncode;
    }
}

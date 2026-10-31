#include "stdafx.h"
#include "RegProc.h"
#include "Util.h"
#include "PalMod.h"
#include <cwctype> // for towlayer

int SafeSHMessageBoxCheck(
    HWND   hwnd,
    LPCWSTR pszText,
    LPCWSTR pszCaption,
    UINT    uType,
    int     iDefault,
    LPCWSTR pszRegVal,
    bool    fInvertLogicAndNoSpecialMessage /*= true*/
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
                if (!fInvertLogicAndNoSpecialMessage)
                {
                    strWINEHatesUs += L"\r\n\r\nThis MessageBox is supposed to have a checkbox you can check to not show this dialog again,"
                                        L" but WINE doesn't support that correctly.  SO!  Click YES to keep seeing this dialog box in the future"
                                        L" or click NO to never see this dialog again.";
                }

                uType |= MB_YESNO;

                returncode = MessageBox(g_appHWnd, strWINEHatesUs.GetString(), pszCaption, uType);

                if ((!fInvertLogicAndNoSpecialMessage && (returncode == IDNO)) ||
                    (fInvertLogicAndNoSpecialMessage && (returncode == IDYES)))
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

std::optional<int> GetDropLayerFromFileName(const std::wstring& strFileName)
{
    const std::wstring strLayerToken = L"-layer-";
    std::optional<int> optLayerToLoadTo;
    int iLayerToDropTo = 0;
    bool fSuccess = false;

    // compare as lower case
    std::wstring strFileNameAsLower = strFileName;
    transform(strFileNameAsLower.begin(), strFileNameAsLower.end(), strFileNameAsLower.begin(), std::towlower);

    auto token_offset = strFileNameAsLower.find(strLayerToken);
    if (token_offset != std::string::npos)
    {
        std::wstring strPostToken = strFileNameAsLower.substr(token_offset + strLayerToken.length());
        const int result = _stscanf_s(strPostToken.c_str(), L"%u", &iLayerToDropTo);

        if (result == 1)
        {
            fSuccess = true;
            iLayerToDropTo = min(iLayerToDropTo, MAX_PALETTES_DISPLAYABLE - 1);
        }
        else
        {
            OutputDebugString(L"ERROR: Bad layer specification in filename!\r\n");
        }
    }

    CString strOutput = L"Scanned filename for target layer: ";

    if (fSuccess)
    {
        CString strBonusInfo;
        strBonusInfo.Format(L"found.  Requesting layer %u.\r\n", iLayerToDropTo);
        optLayerToLoadTo = iLayerToDropTo;
        strOutput += strBonusInfo;
    }
    else
    {
        strOutput += "not found.  Replacing full stack.\r\n";
    }

    OutputDebugString(strOutput.GetString());

    return optLayerToLoadTo;
}

bool PaletteSetIsMappingSafe(PALWriteOutputOptions systemPaletteLength, std::vector<std::vector<COLORREF>> rgrgPaletteSet, std::optional<UINT> optTargetPalette, PaletteMapErrorDetails& mappingDetails)
{
    bool fIsMappingSafe = true;
    CString strMsg;

    for (mappingDetails.nStartCheckPalette = 0; mappingDetails.nStartCheckPalette < rgrgPaletteSet.size(); mappingDetails.nStartCheckPalette++)
    {
        if (optTargetPalette.has_value() &&
            (optTargetPalette.value() != mappingDetails.nStartCheckPalette))
        {
            continue;
        }

        for (mappingDetails.nCheckColor = 1; mappingDetails.nCheckColor < rgrgPaletteSet[mappingDetails.nStartCheckPalette].size(); mappingDetails.nCheckColor++)
        {
            if ((systemPaletteLength == PALWriteOutputOptions::WRITE_16) &&
                ((mappingDetails.nCheckColor % 16) == 0))
            {
                // ignore transparency bytes
                continue;
            }

            const COLORREF clrChecking = rgrgPaletteSet[mappingDetails.nStartCheckPalette].at(mappingDetails.nCheckColor);
            mappingDetails.nCheckAgainstColor = mappingDetails.nCheckColor + 1;

            for (mappingDetails.nCheckAgainstPalette = mappingDetails.nStartCheckPalette; mappingDetails.nCheckAgainstPalette < rgrgPaletteSet.size(); mappingDetails.nCheckAgainstPalette++)
            {
                if (optTargetPalette.has_value() &&
                    (optTargetPalette.value() != mappingDetails.nCheckAgainstPalette))
                {
                    continue;
                }

                for (; mappingDetails.nCheckAgainstColor < rgrgPaletteSet[mappingDetails.nCheckAgainstPalette].size(); mappingDetails.nCheckAgainstColor++)
                {
                    if ((systemPaletteLength == PALWriteOutputOptions::WRITE_16) &&
                        ((mappingDetails.nCheckAgainstColor % 16) == 0))
                    {
                        // ignore transparency bytes
                        continue;
                    }

                    if (clrChecking == rgrgPaletteSet[mappingDetails.nCheckAgainstPalette].at(mappingDetails.nCheckAgainstColor))
                    {
                        fIsMappingSafe = false;

                        strMsg.Format(L"This is not a mapping-safe palette set.  The colors at palette %u color %u and palette %u color %u (0x%x) are the same.\r\n", mappingDetails.nStartCheckPalette, mappingDetails.nCheckColor, mappingDetails.nCheckAgainstPalette, mappingDetails.nCheckAgainstColor, clrChecking);
                        OutputDebugString(strMsg.GetString());

                        break;
                    }
                }

                if (!fIsMappingSafe)
                {
                    break;
                }

                mappingDetails.nCheckAgainstColor = 1;
            }

            if (!fIsMappingSafe)
            {
                break;
            }
        }

        if (!fIsMappingSafe)
        {
            break;
        }
    }

    return fIsMappingSafe;
}
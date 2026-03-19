#include <shlwapi.h>

// WINE does SHMessageBoxCheck incorrectly, so wrap calls
int SafeSHMessageBoxCheck(
    HWND   hwnd,
    LPCWSTR pszText,
    LPCWSTR pszCaption,
    UINT    uType,
    int     iDefault,
    LPCWSTR pszRegVal,
    bool    fInvertLogicAndNoSpecialMessage = false
);

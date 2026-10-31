#include <shlwapi.h>
#include <optional>

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

std::optional<int> GetDropLayerFromFileName(const std::wstring& strFileName);

bool PaletteSetIsMappingSafe(PALWriteOutputOptions systemPaletteLength, std::vector<std::vector<COLORREF>> rgrgPaletteSet, std::optional<UINT> optTargetPalette);

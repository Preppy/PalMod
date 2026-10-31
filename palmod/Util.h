#pragma once

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

struct PaletteMapErrorDetails
{
    size_t nCheckColor = 1;
    size_t nCheckAgainstColor = 2;
    size_t nStartCheckPalette = 0;
    size_t nCheckAgainstPalette = 0;
};

bool PaletteSetIsMappingSafe(PALWriteOutputOptions systemPaletteLength, std::vector<std::vector<COLORREF>> rgrgPaletteSet, std::optional<UINT> optTargetPalette, PaletteMapErrorDetails& mappingDetails);

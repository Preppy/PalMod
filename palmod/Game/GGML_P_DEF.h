#pragma once
#include "GGXXACR_Common.h"

const std::vector<sGCBUPF_RelativePaletteData> GGMLCorePalettes =
{
    { L"Default" },
    { L"Cross" },
    { L"Square" },
    { L"Triangle" },
    { L"Mirror Match" },
};

const std::vector<LPCWSTR> GGMLPaletteNames =
{
    { L"Default" },
    { L"Cross" },
    { L"Square" },
    { L"Triangle" },
    { L"Mirror Match" },
};

const sGCBUPF_BasicNodeData GGMLNormalNode =
{
    { L"Core Palettes" }, 0x0, GGMLPaletteNames
};

const std::vector<sGCBUPF_BasicFileData> GGML_P_CharacterData =
{
    { L"ax\\ax.bin",    L"Axl Low",         475932, GGMLNormalNode, GGMLCorePalettes, 0x2084 },
    { L"bk\\bk.bin",    L"Baiken",          370020, GGMLNormalNode, GGMLCorePalettes, 0x1C98 },
    { L"ch\\ch.bin",    L"Chipp Zanuff",    325376, GGMLNormalNode, GGMLCorePalettes, 0x1FA4 },
    { L"bh\\bh.bin",    L"Dr. Baldhead",    442616, GGMLNormalNode, GGMLCorePalettes, 0x1F7C },
    { L"js\\js.bin",    L"Justice",         585504, GGMLNormalNode, GGMLCorePalettes, 0x212C },
    { L"kr\\kr.bin",    L"Kliff Undersn",   482520, GGMLNormalNode, GGMLCorePalettes, 0x1C74 },
    { L"ky\\ky.bin",    L"Ky Kiske",        402980, GGMLNormalNode, GGMLCorePalettes, 0x1D74 },
    { L"ml\\ml.bin",    L"Millia Rage",     307564, GGMLNormalNode, GGMLCorePalettes, 0x1A94 },
    { L"my\\my.bin",    L"May",             409568, GGMLNormalNode, GGMLCorePalettes, 0x1E90 },
    { L"po\\po.bin",    L"Potemkin",        590308, GGMLNormalNode, GGMLCorePalettes, 0x1E5C },
    { L"sl\\sl.bin",    L"Sol Badguy",      396608, GGMLNormalNode, GGMLCorePalettes, 0x1F8C },
    { L"ts\\ts.bin",    L"Testament",       512792, GGMLNormalNode, GGMLCorePalettes, 0x1D28 },
    { L"zt\\zt.bin",    L"Zato-1",          339088, GGMLNormalNode, GGMLCorePalettes, 0x1D34 },
};
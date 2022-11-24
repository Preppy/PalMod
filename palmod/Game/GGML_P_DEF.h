#pragma once

const std::vector<uint16_t> GGML_P_IMGIDS_USED =
{
    indexGGMLSprites_AxlLow,                // 0x34
    indexGGMLSprites_Baiken,                // 0x35
    indexGGMLSprites_ChippZanuff,           // 0x36
    indexGGMLSprites_DrBaldhead,            // 0x37
    indexGGMLSprites_Justice,               // 0x38
    indexGGMLSprites_KliffUndersn,          // 0x39
    indexGGMLSprites_KyKiske,               // 0x3A
    indexGGMLSprites_May,                   // 0x3B
    indexGGMLSprites_MilliaRage,            // 0x3C
    indexGGMLSprites_Potemkin,              // 0x3D
    indexGGMLSprites_SolBadguy,             // 0x3E
    indexGGMLSprites_Testament,             // 0x3F
    indexGGMLSprites_Zato1,                 // 0x40
    indexGGMLSprites_Bonus,                 // 0x41
};

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
    { L"ax\\ax.bin",    L"Axl Low",         475932, GGMLNormalNode, GGMLCorePalettes, 0x2084, indexGGMLSprites_AxlLow },
    { L"bk\\bk.bin",    L"Baiken",          370020, GGMLNormalNode, GGMLCorePalettes, 0x1C98, indexGGMLSprites_Baiken },
    { L"ch\\ch.bin",    L"Chipp Zanuff",    325376, GGMLNormalNode, GGMLCorePalettes, 0x1FA4, indexGGMLSprites_ChippZanuff },
    { L"bh\\bh.bin",    L"Dr. Baldhead",    442616, GGMLNormalNode, GGMLCorePalettes, 0x1F7C, indexGGMLSprites_DrBaldhead },
    { L"js\\js.bin",    L"Justice",         585504, GGMLNormalNode, GGMLCorePalettes, 0x212C, indexGGMLSprites_Justice },
    { L"kr\\kr.bin",    L"Kliff Undersn",   482520, GGMLNormalNode, GGMLCorePalettes, 0x1C74, indexGGMLSprites_KliffUndersn },
    { L"ky\\ky.bin",    L"Ky Kiske",        402980, GGMLNormalNode, GGMLCorePalettes, 0x1D74, indexGGMLSprites_KyKiske },
    { L"my\\my.bin",    L"May",             409568, GGMLNormalNode, GGMLCorePalettes, 0x1E90, indexGGMLSprites_May },
    { L"ml\\ml.bin",    L"Millia Rage",     307564, GGMLNormalNode, GGMLCorePalettes, 0x1A94, indexGGMLSprites_MilliaRage },
    { L"po\\po.bin",    L"Potemkin",        590308, GGMLNormalNode, GGMLCorePalettes, 0x1E5C, indexGGMLSprites_Potemkin },
    { L"sl\\sl.bin",    L"Sol Badguy",      396608, GGMLNormalNode, GGMLCorePalettes, 0x1F8C, indexGGMLSprites_SolBadguy },
    { L"ts\\ts.bin",    L"Testament",       512792, GGMLNormalNode, GGMLCorePalettes, 0x1D28, indexGGMLSprites_Testament },
    { L"zt\\zt.bin",    L"Zato-1",          339088, GGMLNormalNode, GGMLCorePalettes, 0x1D34, indexGGMLSprites_Zato1 },
};

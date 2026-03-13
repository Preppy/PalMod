#pragma once

const std::vector<uint16_t> RRMBTL_S_IMGIDS_USED =
{
    indexFrenchBreadSprites_MBTL_Shiki,             // 0x73
    indexFrenchBreadSprites_UNICLR_Hyde,   // 0x3C
    indexFrenchBreadSprites_UNICLR_Linn,   // 0x3D
    indexFrenchBreadSprites_UNICLR_Orie,   // 0x42
    indexFrenchBreadSprites_DBFCI_Rentaro,      // 0x0B
    indexFrenchBreadSprites_DBFCI_Enju,          // 0x1A
};

const std::vector<LPCWSTR> RRMBTLButtonLabelsNormal =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",
    L"6",
    L"7",
    L"8",
    L"9",
    L"10",
    L"11",
    L"12",
    L"13",
    L"14",
    L"15",
    L"16",
    L"17",
    L"18",
    L"19",
    L"20",
    L"21",
    L"22",
    L"23",
    L"24",
    L"25",
    L"26",
    L"27",
    L"28",
    L"29",
    L"30",
};
//Due to issues Rentaro is unable to use anything above Palette 10.
const std::vector<LPCWSTR> RentaroButtonLabels =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",
    L"6",
    L"7",
    L"8",
    L"9",
    L"10",
    L"11 (Unusable)",
    L"12 (Unusable)",
    L"13 (Unusable)",
    L"14 (Unusable)",
    L"15 (Unusable)",
    L"16 (Unusable)",
    L"17 (Unusable)",
    L"18 (Unusable)",
    L"19 (Unusable)",
    L"20 (Unusable)",
    L"21 (Unusable)",
    L"22 (Unusable)",
    L"23 (Unusable)",
    L"24 (Unusable)",
    L"25 (Unusable)",
    L"26 (Unusable)",
    L"27 (Unusable)",
    L"28 (Unusable)",
    L"29 (Unusable)",
    L"30 (Unusable)",
};

const sGCBUPF_BasicNodeData PaletteNodesOne =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_MBTL_A::PostSetPal
    { L"Left", L"Right" }, 0x7800, RRMBTLButtonLabelsNormal
};

const sGCBUPF_BasicNodeData PaletteNodesTwo =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_UNICLR_A::PostSetPal
    { L"Left", L"Right" }, 0x10400, RRMBTLButtonLabelsNormal
};

const sGCBUPF_BasicNodeData PaletteNodesThree =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_MBTL_A::PostSetPal
    { L"Left", L"Right"}, 0xa000, RRMBTLButtonLabelsNormal
};

const sGCBUPF_BasicNodeData PaletteNodesFour =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_MBTL_A::PostSetPal
    { L"Left", L"Right"}, 0x8000, RentaroButtonLabels
};

const std::vector<sGCBUPF_BasicFileData> RRMBTLCharacterData =
{
    { L"data\\_csel\\chr023.pal",       L"Hyde Kido",                              133136,   PaletteNodesTwo,         GCBUPF_UseButtonLabelsAsPaletteSet,       0x10,  indexFrenchBreadSprites_UNICLR_Hyde },
    { L"data\\chr023\\Chr023_p1.pal",   L"Linne (Hyde EX)",                        81936,    PaletteNodesThree,       GCBUPF_UseButtonLabelsAsPaletteSet,       0x10,  indexFrenchBreadSprites_UNICLR_Linn },
    { L"data\\_csel\\chr024.pal",       L"Shiki Nanaya",                           61456,    PaletteNodesOne,         GCBUPF_UseButtonLabelsAsPaletteSet,       0x10,  indexFrenchBreadSprites_MBTL_Shiki },
    { L"data\\_csel\\chr025.pal",       L"Shiki Tohno (EX)",                       61456,    PaletteNodesOne,         GCBUPF_UseButtonLabelsAsPaletteSet,       0x10,  indexFrenchBreadSprites_MBTL_Shiki },
    { L"data\\_csel\\chr026.pal",       L"Linne",                                  81936,    PaletteNodesThree,       GCBUPF_UseButtonLabelsAsPaletteSet,       0x10,  indexFrenchBreadSprites_UNICLR_Linn },
    { L"data\\_csel\\chr027.pal",       L"Orie Ballardiae",                        133136,   PaletteNodesTwo,         GCBUPF_UseButtonLabelsAsPaletteSet,       0x10,  indexFrenchBreadSprites_UNICLR_Orie },
    { L"data\\_csel\\Chr028.pal",       L"Rentaro Satomi",                         65540,    PaletteNodesFour,        GCBUPF_UseButtonLabelsAsPaletteSet,       0x4,   indexFrenchBreadSprites_DBFCI_Rentaro },
    { L"data\\chr028\\Chr028_p2.pal",   L"Enju Aihara (Rentaro Trump Card)",       65540,    PaletteNodesFour,        GCBUPF_UseButtonLabelsAsPaletteSet,       0x4,   indexFrenchBreadSprites_DBFCI_Enju },
};

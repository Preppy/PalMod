#pragma once

const std::vector<uint16_t> UNICLR_A_IMGIDS_USED =
{
    indexFrenchBreadSprites_UNICLR_Akat,   // 0x34
    indexFrenchBreadSprites_UNICLR_Byak,   // 0x35
    indexFrenchBreadSprites_UNICLR_Carm,   // 0x36
    indexFrenchBreadSprites_UNICLR_Chao,   // 0x37
    indexFrenchBreadSprites_UNICLR_Eltn,   // 0x38
    indexFrenchBreadSprites_UNICLR_Enki,   // 0x39
    indexFrenchBreadSprites_UNICLR_Gord,   // 0x3A
    indexFrenchBreadSprites_UNICLR_Hild,   // 0x3B
    indexFrenchBreadSprites_UNICLR_Hyde,   // 0x3C
    indexFrenchBreadSprites_UNICLR_Linn,   // 0x3D
    indexFrenchBreadSprites_UNICLR_Lond,   // 0x3E
    indexFrenchBreadSprites_UNICLR_Merk,   // 0x3F
    indexFrenchBreadSprites_UNICLR_Mika,   // 0x40
    indexFrenchBreadSprites_UNICLR_Nana,   // 0x41
    indexFrenchBreadSprites_UNICLR_Orie,   // 0x42
    indexFrenchBreadSprites_UNICLR_Phon,   // 0x43
    indexFrenchBreadSprites_UNICLR_Seth,   // 0x44
    indexFrenchBreadSprites_UNICLR_Vati,   // 0x45
    indexFrenchBreadSprites_UNICLR_Wagn,   // 0x46
    indexFrenchBreadSprites_UNICLR_Wald,   // 0x47
    indexFrenchBreadSprites_UNICLR_Yuzu,   // 0x48
    indexFrenchBreadSprites_UNICLR_Bonus,  // 0x49
};

const std::vector<sGCBUPF_BasicNodeData> UNICLRPaletteNodes =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_UNICLR_A::PostSetPal
    { L"Left",  0 },
    { L"Right", 0xA800 },
};

const std::vector<LPCWSTR> UNICLRPaletteNamesNormal =
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

    L"31",
    L"32",
    L"33",
    L"34",
    L"35",

    L"36",
    L"37",
    L"38",
    L"39",
    L"40",

    L"41",
    L"42",
};

const std::vector<sGCBUPF_BasicFileData> UNICLRCharacterData =
{
    { L"___English\\data\\_csel\\Aka.pal",    L"Akatsuki",          86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Akat },
    { L"___English\\data\\_csel\\Bya.pal",    L"Byakuya",           86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Byak },
    { L"___English\\data\\_csel\\Car.pal",    L"Carmine",           86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Carm },
    { L"___English\\data\\_csel\\Cha.pal",    L"Chaos",             86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Chao },
    { L"___English\\data\\_csel\\Elt.pal",    L"Eltnum",            86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Eltn },
    { L"___English\\data\\_csel\\Enk.pal",    L"Enkidu",            86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Enki },
    { L"___English\\data\\_csel\\Gor.pal",    L"Gordeau",           86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Gord },
    { L"___English\\data\\_csel\\Hil.pal",    L"Hilda",             86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Hild },
    { L"___English\\data\\_csel\\Hyd.pal",    L"Hyde",              86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Hyde },
    { L"___English\\data\\_csel\\Lin.pal",    L"Linne",             86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Linn },
    { L"___English\\data\\_csel\\Lnd.pal",    L"Londrekia",         86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Lond },
    { L"___English\\data\\_csel\\Mer.pal",    L"Merkava",           86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Merk },
    { L"___English\\data\\_csel\\Mik.pal",    L"Mika",              86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Mika },
    { L"___English\\data\\_csel\\Nan.pal",    L"Nanase",            86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Nana },
    { L"___English\\data\\_csel\\Ori.pal",    L"Orie",              86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Orie },
    { L"___English\\data\\_csel\\Pho.pal",    L"Phonon",            86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Phon },
    { L"___English\\data\\_csel\\Set.pal",    L"Seth",              86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Seth },
    { L"___English\\data\\_csel\\Vat.pal",    L"Vatista",           86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Vati },
    { L"___English\\data\\_csel\\Wag.pal",    L"Wagner",            86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Wagn },
    { L"___English\\data\\_csel\\Wal.pal",    L"Waldstein",         86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Wald },
    { L"___English\\data\\_csel\\Yuz.pal",    L"Yuzuriha",          86032,    UNICLRPaletteNamesNormal,    UNICLRPaletteNodes,  0x10,  indexFrenchBreadSprites_UNICLR_Yuzu },
};

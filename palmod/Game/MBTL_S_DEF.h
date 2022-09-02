#pragma once

const std::vector<uint16_t> MBTL_A_IMGIDS_USED =
{
    indexFrenchBreadSprites_MBTL_Akiha,             // 0x68
    indexFrenchBreadSprites_MBTL_Arcueid,           // 0x69
    indexFrenchBreadSprites_MBTL_Ciel,              // 0x6A
    indexFrenchBreadSprites_MBTL_Hisui,             // 0x6B
    indexFrenchBreadSprites_MBTL_Kohaku,            // 0x6C
    indexFrenchBreadSprites_MBTL_Kouma,             // 0x6D
    indexFrenchBreadSprites_MBTL_Miyako,            // 0x6E
    indexFrenchBreadSprites_MBTL_Noel,              // 0x6F
    indexFrenchBreadSprites_MBTL_RedArcueid,        // 0x70
    indexFrenchBreadSprites_MBTL_Roa,               // 0x71
    indexFrenchBreadSprites_MBTL_Saber,             // 0x72
    indexFrenchBreadSprites_MBTL_Shiki,             // 0x73
    indexFrenchBreadSprites_MBTL_Vlov,              // 0x74
    indexFrenchBreadSprites_MBTL_Aoko,              // 0x75
    indexFrenchBreadSprites_MBTL_DANoel,            // 0x76
    indexFrenchBreadSprites_MBTL_PoweredCiel,       // 0x77
    indexFrenchBreadSprites_MBTL_Mario,             // 0x78

    indexFrenchBreadSprites_MBTL_Bonus,             // 0x79
    indexFrenchBreadSprites_MBTL_Neco,              // 0x7A
    indexFrenchBreadSprites_MBTL_Mash,              // 0x7B
};

const std::vector<sGCBUPF_BasicNodeData> MBTLPaletteNodes =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_MBTL_A::PostSetPal
    { L"Left",  0 },
    { L"Right", 0x7800 },
};

const std::vector<sGCBUPF_BasicNodeData> MBTLPaletteNodesNeco =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_MBTL_A::PostSetPal
    { L"Left",  0 },
    { L"Right", 0x9800  },
};

const std::vector<LPCWSTR> MBTLPaletteNamesNormal =
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

const std::vector<LPCWSTR> MBTLPaletteNamesNeco =
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

    L"Neco-Ciel1",
    L"Neco-Ciel2",
    L"Neco-Akiha1",
    L"Neco-Akiha2",

    L"Neco-Hisui1",
    L"Neco-Hisui2",
    L"Neco-Kohaku1",
    L"Neco-Kohaku2",
};

const std::vector<sGCBUPF_BasicFileData> MBTLCharacterData =
{
    //The character order is alphabetical instead of ID order
    { L"data\\_csel\\Chr002.pal",       L"Akiha Tohno",                            61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Akiha },
    { L"data\\_csel\\Chr015.pal",       L"Aoko Aozaki",                            61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Aoko },
    { L"data\\_csel\\Chr000.pal",       L"Arcueid",                                61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Arcueid },
    { L"data\\_csel\\Chr011.pal",       L"Ciel",                                   61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Ciel },
    { L"data\\_csel\\Chr014.pal",       L"Dead Apostle Noel",                      61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_DANoel },
    { L"data\\_csel\\Chr001.pal",       L"Hisui",                                  61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Hisui },
    { L"data\\_csel\\Chr004.pal",       L"Kohaku",                                 61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Kohaku },
    { L"data\\_csel\\Chr006.pal",       L"Kouma Kishima",                          61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Kouma },
    { L"data\\_csel\\Chr020.pal",       L"Mash Kyrielight",                        61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Mash },
    { L"data\\_csel\\Chr017.pal",       L"Mario Gallo Bestino",                    61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Mario },
    { L"data\\_csel\\Chr013.pal",       L"Miyako Arima",                           61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Miyako },
    { L"data\\_csel\\Chr008.pal",       L"Noel",                                   61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Noel },
    { L"data\\_csel\\Chr019.pal",       L"Neco-Arc",                               77840,    MBTLPaletteNamesNeco,      MBTLPaletteNodesNeco,   0x10, indexFrenchBreadSprites_MBTL_Neco },
    { L"data\\_csel\\Chr016.pal",       L"Powered Ciel",                           61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_PoweredCiel },
    { L"data\\_csel\\Chr010.pal",       L"Red Arcueid",                            61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_RedArcueid },
    { L"data\\_csel\\Chr005.pal",       L"Roa",                                    61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Roa },
    { L"data\\_csel\\Chr012.pal",       L"Saber",                                  61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Saber },
    { L"data\\_csel\\Chr003.pal",       L"Shiki Tohno",                            61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Shiki },
    { L"data\\_csel\\Chr009.pal",       L"Vlov",                                   61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Vlov },


    { L"data\\chr011\\Chr011_p1.pal",   L"Ciel (Arc Drive/Last Arc)",              61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Ciel, 0x01 },
    { L"data\\chr001\\Chr001_p1.pal",   L"Hisui (Mask Shiki)",                     61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Shiki },
    { L"data\\_csel\\Chr018.pal",       L"Mario (Main Sister)",                    61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Mario, 0x01 },
    { L"data\\chr017\\Chr017_p1.pal",   L"Mario (Assist Sister)",                  61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Mario, 0x01 },
    { L"data\\chr017\\Chr017_p2.pal",   L"Noel (Mario Arc Drive)",                 61456,    MBTLPaletteNamesNormal,    MBTLPaletteNodes,       0x10, indexFrenchBreadSprites_MBTL_Noel },
    { L"data\\chr019\\Chr019_p1.pal",   L"Eco-Arc (Neco-Arc Summon)",              77840,    MBTLPaletteNamesNeco,      MBTLPaletteNodesNeco,   0x10, indexFrenchBreadSprites_MBTL_Neco, 0x01 },
    { L"data\\chr019\\Chr019_p2.pal",   L"Saber (Neco-Arc Summmon)",               77840,    MBTLPaletteNamesNeco,      MBTLPaletteNodesNeco,   0x10, indexFrenchBreadSprites_MBTL_Saber },
    { L"data\\chr019\\Chr019_p3.pal",   L"Neco-Arc (Last Arc Rocket)",             77840,    MBTLPaletteNamesNeco,      MBTLPaletteNodesNeco,   0x10, indexFrenchBreadSprites_MBTL_Neco, 0x02 },
};

#pragma once

#include "GGXXACR_Common.h"

const std::vector<sGCBUPF_RelativePaletteData> GGXXACPCorePalettes_Wii =
{
    { L"Punch" },
    { L"Kick", 0x20 },
    { L"Slash", 0x40 },
    { L"Heavy Slash", 0x60 },
    { L"Dust", 0x80 },

    { L"EX Punch", 0xa0 },
    { L"EX Kick", 0xc0 },
    { L"EX Slash", 0xe0 },
    { L"EX Heavy Slash", 0x100 },
    { L"EX Dust", 0x120 },

    { L"Slash Punch", 0x140 },
    { L"Slash Kick", 0x160 },
    { L"Slash Slash", 0x180 },
    { L"Slash Heavy Slash", 0x1a0 },
    { L"Gold", 0x1c0 },

    { L"Reload Punch", 0x1e0 },
    { L"Reload Kick", 0x200 },
    { L"Reload Slash", 0x220 },
    { L"Reload Heavy Slash", 0x240 },
    { L"Shadow", 0x260 },
};

const std::vector<sGCBUPF_BasicFileData> GGXXACP_Wii_CharacterData =
{
    //Alphabetical by character name, not by file name
    //We use the EX palette lists here because the Wii doesnt have the VS Slash/Reload Dust palettes
    { L"obj\\ab.bin",   L"A.B.A",           7447136,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x625370,   indexGGXXSprites_ACR_ABA },
    { L"obj\\an.bin",   L"Anji Mito",       6158848,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x578790,   indexGGXXSprites_ACR_Anji },
    { L"obj\\ax.bin",   L"Axl Low" ,        5299264,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x461A10,   indexGGXXSprites_ACR_Axl },
    { L"obj\\bk.bin",   L"Baiken",          4678336,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x40C0F0,   indexGGXXSprites_ACR_Baiken },
    { L"obj\\yy.bin",   L"Bridget",         5323840,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4685B0,   indexGGXXSprites_ACR_Bridget },
    { L"obj\\ch.bin",   L"Chipp Zanuff",    4024512,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x36A630,   indexGGXXSprites_ACR_Chipp },
    { L"obj\\dz.bin",   L"Dizzy",           7034144,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x5EB9F0,   indexGGXXSprites_ACR_Dizzy },
    { L"obj\\fa.bin",   L"Faust",           6074560,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x53ACF0,   indexGGXXSprites_ACR_Faust },
    { L"obj\\in.bin",   L"I-No",            6992128,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x50A8D0,   indexGGXXSprites_ACR_Ino },
    { L"obj\\jm.bin",   L"Jam Kuradoberi",  4757632,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x3A2910,   indexGGXXSprites_ACR_Jam },
    { L"obj\\jy.bin",   L"Johnny",          5254560,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4AA5F0,   indexGGXXSprites_ACR_Johnny },
    { L"obj\\js.bin",   L"Justice",         5651200,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x474D70,   indexGGXXSprites_ACR_Justice },
    { L"obj\\kr.bin",   L"Kliff Undersn",   3999808,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x35AE30,   indexGGXXSprites_ACR_Kliff },
    { L"obj\\ky.bin",   L"Ky Kiske",        5556128,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x466BD0,   indexGGXXSprites_ACR_Ky },
    { L"obj\\my.bin",   L"May",             5526752,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x483FD0,   indexGGXXSprites_ACR_May },
    { L"obj\\ml.bin",   L"Millia Rage",     4005280,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x38D530,   indexGGXXSprites_ACR_Millia },
    { L"obj\\fr.bin",   L"Order-Sol",       7502560,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x5D3190,   indexGGXXSprites_ACR_OrderSol },
    { L"obj\\po.bin",   L"Potemkin",        6967872,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x61EE10,   indexGGXXSprites_ACR_Potemkin },
    { L"obj\\rk.bin",   L"Robo-Ky",         5406016,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x48D350,   indexGGXXSprites_ACR_RoboKy },
    { L"obj\\sy.bin",   L"Slayer",          7552704,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4DF7D0,   indexGGXXSprites_ACR_Slayer },
    { L"obj\\sl.bin",   L"Sol Badguy",      5708032,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x441150,   indexGGXXSprites_ACR_Sol },
    { L"obj\\ts.bin",   L"Testament",       6217248,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x538BF0,   indexGGXXSprites_ACR_Testament },
    { L"obj\\ve.bin",   L"Venom",           3652320,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x32F6B0,   indexGGXXSprites_ACR_Venom },
    { L"obj\\zp.bin",   L"Zappa",           7016192,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x37C230,   indexGGXXSprites_ACR_Zappa },
    { L"obj\\zt.bin",   L"Eddie",           4232896,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x33C430,   indexGGXXSprites_ACR_Eddie },
    { L"obj\\eab.bin",  L"EX A.B.A",        7716704,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x65D810,   indexGGXXSprites_ACR_ABA },
    { L"obj\\ean.bin",  L"EX Anji Mito",    6163008,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x579810,   indexGGXXSprites_ACR_Anji },
    { L"obj\\eax.bin",  L"EX Axl Low",      5293600,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x461D90,   indexGGXXSprites_ACR_Axl },
    { L"obj\\ebk.bin",  L"EX Baiken",       4717760,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x40D350,   indexGGXXSprites_ACR_Baiken },
    { L"obj\\eyy.bin",  L"EX Bridget",      5426848,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x480710,   indexGGXXSprites_ACR_Bridget },
    { L"obj\\ech.bin",  L"EX Chipp Zanuff", 4092992,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x37AB30,   indexGGXXSprites_ACR_Chipp },
    { L"obj\\edz.bin",  L"EX Dizzy",        7385120,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x6414D0,   indexGGXXSprites_ACR_Dizzy },
    { L"obj\\ezt.bin",  L"EX Eddie",        4278048,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x3776D0,   indexGGXXSprites_ACR_Eddie },
    { L"obj\\efa.bin",  L"EX Faust",        6088704,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x53B130,   indexGGXXSprites_ACR_Faust },
    { L"obj\\ein.bin",  L"EX I-No",         7191200,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x524610,   indexGGXXSprites_ACR_Ino },
    { L"obj\\ejm.bin",	L"EX Jam Kuradoberi",4743168,   GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x3A1C90,   indexGGXXSprites_ACR_Jam },
    { L"obj\\ejy.bin",  L"EX Johnny",       5419776,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4D2B50,   indexGGXXSprites_ACR_Johnny },
    { L"obj\\eky.bin",  L"EX Ky Kiske",     5982400,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4C5050,   indexGGXXSprites_ACR_Ky },
    { L"obj\\emy.bin",  L"EX May",          6098368,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4E8B70,   indexGGXXSprites_ACR_May },
    { L"obj\\eml.bin",  L"EX Millia Rage",  3964288,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x383510,   indexGGXXSprites_ACR_Millia },
    { L"obj\\efr.bin",  L"EX Order-Sol",    7740512,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x6042D0,   indexGGXXSprites_ACR_OrderSol },
    { L"obj\\epo.bin",  L"EX Potemkin",     7016992,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x62BDF0,   indexGGXXSprites_ACR_Potemkin },
    { L"obj\\erk.bin",  L"EX Robo-Ky",      5621760,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4C1890,   indexGGXXSprites_ACR_RoboKy },
    { L"obj\\esy.bin",  L"EX Slayer",       7551392,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x4DF2B0,   indexGGXXSprites_ACR_Slayer },
    { L"obj\\esl.bin",  L"EX Sol Badguy",   5780480,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x442F50,   indexGGXXSprites_ACR_Sol },
    { L"obj\\ets.bin",  L"EX Testament",    6199296,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x544390,   indexGGXXSprites_ACR_Testament },
    { L"obj\\eve.bin",  L"EX Venom",        3778912,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x34E530,   indexGGXXSprites_ACR_Venom },
    { L"obj\\ezp.bin",  L"EX Zappa",        7056960,    GGXXACR_EXNode, GGXXACPCorePalettes_Wii,    0x37BAF0,   indexGGXXSprites_ACR_Zappa },
};

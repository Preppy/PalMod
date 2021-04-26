#pragma once

const UINT16 GGXX_ACR_IMG_UNITS[] =
{
    indexGGXXSprites_ACR_ABA,               // 0x00
    indexGGXXSprites_ACR_Anji,              // 0x01
    indexGGXXSprites_ACR_Axl,               // 0x02
    indexGGXXSprites_ACR_Baiken,            // 0x03
    indexGGXXSprites_ACR_Bridget,           // 0x04
    indexGGXXSprites_ACR_Chipp,             // 0x05
    indexGGXXSprites_ACR_Dizzy,             // 0x06
    indexGGXXSprites_ACR_Eddie,             // 0x07
    indexGGXXSprites_ACR_Faust,             // 0x08
    indexGGXXSprites_ACR_Ino,               // 0x09
    indexGGXXSprites_ACR_Jam,               // 0x0a
    indexGGXXSprites_ACR_Johnny,            // 0x0b
    indexGGXXSprites_ACR_Justice,           // 0x0c
    indexGGXXSprites_ACR_Kliff,             // 0x0d
    indexGGXXSprites_ACR_Ky,                // 0x0e
    indexGGXXSprites_ACR_May,               // 0x0f
    indexGGXXSprites_ACR_Millia,            // 0x10
    indexGGXXSprites_ACR_OrderSol,          // 0x11
    indexGGXXSprites_ACR_Potemkin,          // 0x12
    indexGGXXSprites_ACR_RoboKy,            // 0x13
    indexGGXXSprites_ACR_Slayer,            // 0x14
    indexGGXXSprites_ACR_Sol,               // 0x15
    indexGGXXSprites_ACR_Testament,         // 0x16
    indexGGXXSprites_ACR_Venom,             // 0x17
    indexGGXXSprites_ACR_Zappa,             // 0x18
    indexGGXXSprites_ACR_Bonus,             // 0x19
};

const LPCWSTR GGXXACRPaletteNamesNormal[] =
{
    L"Punch",
    L"Kick",
    L"Slash",
    L"Heavy Slash",
    L"Dust",

    L"EX Punch",
    L"EX Kick",
    L"EX Slash",
    L"EX Heavy Slash",
    L"EX Dust",

    L"Slash Punch",
    L"Slash Kick",
    L"Slash Slash",
    L"Slash Heavy Slash",
    L"Gold",

    L"Reload Punch",
    L"Reload Kick",
    L"Reload Slash",
    L"Reload Heavy Slash",
    L"Shadow",

    L"Vs Slash Dust",
    L"Vs Reload Dust",
};

const LPCWSTR GGXXACRPaletteNamesEx[] =
{
    L"Punch",
    L"Kick",
    L"Slash",
    L"Heavy Slash",
    L"Dust",

    L"EX Punch",
    L"EX Kick",
    L"EX Slash",
    L"EX Heavy Slash",
    L"EX Dust",

    L"Slash Punch",
    L"Slash Kick",
    L"Slash Slash",
    L"Slash Heavy Slash",
    L"Gold",

    L"Reload Punch",
    L"Reload Kick",
    L"Reload Slash",
    L"Reload Heavy Slash",
    L"Shadow",
};

struct GGXXACRFileData_P
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = -1;
    const sGame_PaletteDataset* prgExtraPalettes = nullptr;
    UINT16 nCountExtras = 0;
};

GGXXACRFileData_P GGXXACRCharacterData[] =
{
    { L"ab.bin",    L"A.B.A.",          5728384,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x48D7D0, indexGGXXSprites_ACR_ABA},
    { L"an.bin",    L"Anji",            4530144,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3ECAB0, indexGGXXSprites_ACR_Anji },
    { L"ax.bin",    L"Axl Low" ,        4236320,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x360F90, indexGGXXSprites_ACR_Axl },
    { L"bk.bin",    L"Baiken",          3584512,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x30B190, indexGGXXSprites_ACR_Baiken},
    { L"ch.bin",    L"Chipp Zanuff",    3124064,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x295830, indexGGXXSprites_ACR_Chipp },
    { L"dz.bin",    L"Dizzy",           5364512,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x45FFF0, indexGGXXSprites_ACR_Dizzy },
    { L"fa.bin",    L"Faust",           4786688,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x401670, indexGGXXSprites_ACR_Faust },
    { L"fr.bin",    L"Order Sol",       5784096,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x439E50, indexGGXXSprites_ACR_OrderSol },
    { L"in.bin",    L"I-No",            5622336,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3E7C50, indexGGXXSprites_ACR_Ino },
    { L"jm.bin",    L"Jam",             3839296,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2C7730, indexGGXXSprites_ACR_Jam },
    { L"js.bin",    L"Justice",         4565696,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x37A410, indexGGXXSprites_ACR_Justice },
    { L"jy.bin",    L"Johnny",          4216608,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3B2AD0, indexGGXXSprites_ACR_Johnny},
    { L"kr.bin",    L"Kliff Undersn",   3121440,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x28C3D0, indexGGXXSprites_ACR_Kliff },
    { L"ky.bin",    L"Ky",              4582624,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x38E010, indexGGXXSprites_ACR_Ky},
    { L"ml.bin",    L"Millia",          3044896,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2A6DB0, indexGGXXSprites_ACR_Millia },
    { L"my.bin",    L"May",             4322144,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x365D10, indexGGXXSprites_ACR_May },
    { L"po.bin",    L"Potemkin",        5287904,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x48BFB0, indexGGXXSprites_ACR_Potemkin},
    { L"rk.bin",    L"Robo-Ky",         4503072,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3A9ED0, indexGGXXSprites_ACR_RoboKy },
    { L"sl.bin",    L"Sol Badguy",      4624352,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x33BE90, indexGGXXSprites_ACR_Sol},
    { L"sy.bin",    L"Slayer",          6228928,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x39F430, indexGGXXSprites_ACR_Slayer },
    { L"ts.bin",    L"Testament",       4829600,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3F0F70, indexGGXXSprites_ACR_Testament },
    { L"ve.bin",    L"Venom",           2797728,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x263F90, indexGGXXSprites_ACR_Venom},
    { L"yy.bin",    L"Bridget",         4143168,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x34E730, indexGGXXSprites_ACR_Bridget },
    { L"zp.bin",    L"Zappa",           6038624,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2A7A50, indexGGXXSprites_ACR_Zappa },
    { L"zt.bin",    L"Eddie",           3301344,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2507F0, indexGGXXSprites_ACR_Eddie },
    { L"eab.bin",   L"EX A.B.A.",       5926144,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x4B6A30, indexGGXXSprites_ACR_ABA },
    { L"ean.bin",   L"EX Anji",         4532096,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3EDAB0, indexGGXXSprites_ACR_Anji },
    { L"eax.bin",   L"EX Axl Low",      4228064,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3612D0, indexGGXXSprites_ACR_Axl },
    { L"ebk.bin",   L"EX Baiken",       3612608,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x30BF50, indexGGXXSprites_ACR_Baiken },
    { L"ech.bin",   L"EX Chipp Zanuff", 3173056,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2A19B0, indexGGXXSprites_ACR_Chipp },
    { L"edz.bin",   L"EX Dizzy",        5607584,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x49CD90, indexGGXXSprites_ACR_Dizzy },
    { L"efa.bin",   L"EX Faust",        4797824,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x401710, indexGGXXSprites_ACR_Faust },
    { L"efr.bin",   L"EX Order-Sol",    5977280,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x460050, indexGGXXSprites_ACR_OrderSol },
    { L"ein.bin",   L"EX I-No",         5776768,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3FBA50, indexGGXXSprites_ACR_Ino },
    { L"ejm.bin",   L"EX Jam",          3824576,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2C70B0, indexGGXXSprites_ACR_Jam },
    { L"ejy.bin",   L"EX Johnny",       4220864,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3B4790, indexGGXXSprites_ACR_Johnny },
    { L"eky.bin",   L"EX Ky",           4871456,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3CD750, indexGGXXSprites_ACR_Ky },
    { L"eml.bin",   L"EX Millia",       3014016,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x29FD50, indexGGXXSprites_ACR_Millia },
    { L"emy.bin",   L"EX May",          4687424,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x39BB30, indexGGXXSprites_ACR_May },
    { L"epo.bin",   L"EX Potemkin",     5324352,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x496650, indexGGXXSprites_ACR_Potemkin },
    { L"erk.bin",   L"EX Robo-Ky",      4613312,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3D2810, indexGGXXSprites_ACR_RoboKy },
    { L"esl.bin",   L"EX Sol Badguy",   4691296,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x33D7B0, indexGGXXSprites_ACR_Sol },
    { L"esy.bin",   L"EX Slayer",       6235392,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3A15B0, indexGGXXSprites_ACR_Slayer },
    { L"ets.bin",   L"EX Testament",    4787712,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3F6D50, indexGGXXSprites_ACR_Testament },
    { L"eve.bin",   L"EX Venom",        2858688,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2735F0, indexGGXXSprites_ACR_Venom },
    { L"eyy.bin",   L"EX Bridget",      4222496,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x360D90, indexGGXXSprites_ACR_Bridget },
    { L"ezp.bin",   L"EX Zappa",        6063296,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2A53B0, indexGGXXSprites_ACR_Zappa },
    { L"ezt.bin",   L"EX Eddie",        3196288,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2781B0, indexGGXXSprites_ACR_Eddie },
};
#pragma once

#include "GGXXACR_Common.h"

const std::vector<sGCBUPF_RelativePaletteData> GGXXACRCorePalettes_P =
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

    { L"Vs Slash Dust", 0x280 },
    { L"Vs Reload Dust", 0x2a0 },
};

const std::vector<sGCBUPF_RelativePaletteData> GGXXACRCorePalettesEx_P =
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

const std::vector<sGCBUPF_BasicFileData> GGXXACR_P_CharacterData =
{
    { L"ab.bin",    L"A.B.A.",          5728384,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x48D7D0, indexGGXXSprites_ACR_ABA},
    { L"an.bin",    L"Anji",            4530144,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x3ECAB0, indexGGXXSprites_ACR_Anji },
    { L"ax.bin",    L"Axl Low" ,        4236320,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x360F90, indexGGXXSprites_ACR_Axl },
    { L"bk.bin",    L"Baiken",          3584512,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x30B190, indexGGXXSprites_ACR_Baiken},
    { L"ch.bin",    L"Chipp Zanuff",    3124064,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x295830, indexGGXXSprites_ACR_Chipp },
    { L"dz.bin",    L"Dizzy",           5364512,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x45FFF0, indexGGXXSprites_ACR_Dizzy },
    { L"fa.bin",    L"Faust",           4786688,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x401670, indexGGXXSprites_ACR_Faust },
    { L"fr.bin",    L"Order Sol",       5784096,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x439E50, indexGGXXSprites_ACR_OrderSol },
    { L"in.bin",    L"I-No",            5622336,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x3E7C50, indexGGXXSprites_ACR_Ino },
    { L"jm.bin",    L"Jam",             3839296,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x2C7730, indexGGXXSprites_ACR_Jam },
    { L"js.bin",    L"Justice",         4565696,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x37A410, indexGGXXSprites_ACR_Justice },
    { L"jy.bin",    L"Johnny",          4216608,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x3B2AD0, indexGGXXSprites_ACR_Johnny},
    { L"kr.bin",    L"Kliff Undersn",   3121440,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x28C3D0, indexGGXXSprites_ACR_Kliff },
    { L"ky.bin",    L"Ky",              4582624,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x38E010, indexGGXXSprites_ACR_Ky},
    { L"ml.bin",    L"Millia",          3044896,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x2A6DB0, indexGGXXSprites_ACR_Millia },
    { L"my.bin",    L"May",             4322144,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x365D10, indexGGXXSprites_ACR_May },
    { L"po.bin",    L"Potemkin",        5287904,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x48BFB0, indexGGXXSprites_ACR_Potemkin},
    { L"rk.bin",    L"Robo-Ky",         4503072,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x3A9ED0, indexGGXXSprites_ACR_RoboKy },
    { L"sl.bin",    L"Sol Badguy",      4624352,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x33BE90, indexGGXXSprites_ACR_Sol},
    { L"sy.bin",    L"Slayer",          6228928,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x39F430, indexGGXXSprites_ACR_Slayer },
    { L"ts.bin",    L"Testament",       4829600,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x3F0F70, indexGGXXSprites_ACR_Testament },
    { L"ve.bin",    L"Venom",           2797728,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x263F90, indexGGXXSprites_ACR_Venom},
    { L"yy.bin",    L"Bridget",         4143168,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x34E730, indexGGXXSprites_ACR_Bridget },
    { L"zp.bin",    L"Zappa",           6038624,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x2A7A50, indexGGXXSprites_ACR_Zappa },
    { L"zt.bin",    L"Eddie",           3301344,    GGXXACR_NormalNode, GGXXACRCorePalettes_P,    0x2507F0, indexGGXXSprites_ACR_Eddie },
    { L"eab.bin",   L"EX A.B.A.",       5926144,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x4B6A30, indexGGXXSprites_ACR_ABA },
    { L"ean.bin",   L"EX Anji",         4532096,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3EDAB0, indexGGXXSprites_ACR_Anji },
    { L"eax.bin",   L"EX Axl Low",      4228064,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3612D0, indexGGXXSprites_ACR_Axl },
    { L"ebk.bin",   L"EX Baiken",       3612608,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x30BF50, indexGGXXSprites_ACR_Baiken },
    { L"ech.bin",   L"EX Chipp Zanuff", 3173056,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x2A19B0, indexGGXXSprites_ACR_Chipp },
    { L"edz.bin",   L"EX Dizzy",        5607584,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x49CD90, indexGGXXSprites_ACR_Dizzy },
    { L"efa.bin",   L"EX Faust",        4797824,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x401710, indexGGXXSprites_ACR_Faust },
    { L"efr.bin",   L"EX Order-Sol",    5977280,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x460050, indexGGXXSprites_ACR_OrderSol },
    { L"ein.bin",   L"EX I-No",         5776768,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3FBA50, indexGGXXSprites_ACR_Ino },
    { L"ejm.bin",   L"EX Jam",          3824576,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x2C70B0, indexGGXXSprites_ACR_Jam },
    { L"ejy.bin",   L"EX Johnny",       4220864,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3B4790, indexGGXXSprites_ACR_Johnny },
    { L"eky.bin",   L"EX Ky",           4871456,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3CD750, indexGGXXSprites_ACR_Ky },
    { L"eml.bin",   L"EX Millia",       3014016,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x29FD50, indexGGXXSprites_ACR_Millia },
    { L"emy.bin",   L"EX May",          4687424,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x39BB30, indexGGXXSprites_ACR_May },
    { L"epo.bin",   L"EX Potemkin",     5324352,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x496650, indexGGXXSprites_ACR_Potemkin },
    { L"erk.bin",   L"EX Robo-Ky",      4613312,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3D2810, indexGGXXSprites_ACR_RoboKy },
    { L"esl.bin",   L"EX Sol Badguy",   4691296,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x33D7B0, indexGGXXSprites_ACR_Sol },
    { L"esy.bin",   L"EX Slayer",       6235392,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3A15B0, indexGGXXSprites_ACR_Slayer },
    { L"ets.bin",   L"EX Testament",    4787712,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x3F6D50, indexGGXXSprites_ACR_Testament },
    { L"eve.bin",   L"EX Venom",        2858688,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x2735F0, indexGGXXSprites_ACR_Venom },
    { L"eyy.bin",   L"EX Bridget",      4222496,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x360D90, indexGGXXSprites_ACR_Bridget },
    { L"ezp.bin",   L"EX Zappa",        6063296,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x2A53B0, indexGGXXSprites_ACR_Zappa },
    { L"ezt.bin",   L"EX Eddie",        3196288,    GGXXACR_EXNode, GGXXACRCorePalettesEx_P,        0x2781B0, indexGGXXSprites_ACR_Eddie },
};

#pragma once

const UINT16 GGXX_ACR_A_IMG_UNITS[] =
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

const sGame_PaletteDataset GGXXACR_A_AB_EFFECTS[] =
{
    { L"Moroha Eyes (Trails)", 0x521340, 0x521380 },
    { L"Moroha Eyes", 0x5213b0, 0x5213f0 },
    { L"Goku Moroha Eyes (Trails)", 0x5214f0, 0x521530 },
    { L"Goku Moroha Eyes", 0x521630, 0x521670 },
    { L"Shousei", 0x51b240, 0x51b280 },
    { L"Shoukyaku", 0x4ad7f0, 0x4ad830 },
    { L"Kihi", 0x4ae050, 0x4ae090 },
    { L"Ketsugou (1/3)", 0x4dc0f0, 0x4dc130 },
    { L"Ketsugou (2/3)", 0x4e03a0, 0x4e03e0 },
    { L"Ketsugou (3/3)", 0x4e6aa0, 0x4e6ae0 },
    { L"Henshitsu", 0x516640, 0x516680 },
    { L"(Moroha) 6H", 0x492d80, 0x492dc0 },
    { L"(Moroha) Masshou", 0x499b40, 0x499b80 },
    { L"(Moroha) Fukumetsu", 0x49dcd0, 0x49dd10 },
    { L"(Moroha) Dangoku (1/2)", 0x4a0820, 0x4a0860 },
    { L"(Moroha) Dangoku (2/2)", 0x4aa220, 0x4aa260 },
    { L"(Moroha) Danzai (1/2)", 0x4b4670, 0x4b46b0 },
    { L"(Moroha) Danzai (2/2)", 0x4be190, 0x4be1d0 },
    { L"(Moroha) Kashitsu", 0x4c8e30, 0x4c8e70 },
    { L"(Moroha) Konzetsu (1/2)", 0x4d09a0, 0x4d09e0 },
    { L"(Moroha) Konzetsu (2/2)", 0x4d67b0, 0x4d67f0 },
    { L"Shouko: Inmetsu", 0x4e8210, 0x4e8250 },
    { L"Shouko: Intoku (1/3)", 0x4ed940, 0x4ed980 },
    { L"Shouko: Intoku (2/3)", 0x4fce70, 0x4fceb0 },
    { L"Shouko: Intoku (3/3)", 0x5089e0, 0x508a20 },
    { L"Muchi no Yami (1/2)", 0x50bc20, 0x50bc60 },
    { L"Muchi no Yami (2/2)", 0x513030, 0x513070 },
};

const sGame_PaletteDataset GGXXACR_A_SOL_EFFECTS[] =
{
// General
    { L"General Sparks / Riot Stamp", 0x3fc2b0, 0x3fc2f0 },
//Specials
    { L"Gunflame (1/3)", 0x3540b0, 0x3540f0 },
    { L"Gunflame (2/3)", 0x3579b0, 0x3579f0 },
    { L"Gunflame (3/3)", 0x35a740, 0x35a780 },
    { L"Gunflame - Dragon Install (1/4)", 0x41b270, 0x41b2b0 },
    { L"Gunflame - Dragon Install (2/4)", 0x422910, 0x422950 },
    { L"Gunflame - Dragon Install (3/4)", 0x4262c0, 0x426300 },
    { L"Gunflame - Dragon Install (4/4)", 0x429a60, 0x429aa0 },
    { L"Volcanic Viper (1/2)", 0x3485f0, 0x348630 },
    { L"Volcanic Viper (2/2)", 0x34f3f0, 0x34f430 },
    { L"Volcanic Viper - Dragon Install", 0x38aaa0, 0x38aae0 },
    { L"Ground Viper", 0x342a40, 0x342a80 },
    { L"Bandit Revolver - DI (1/3)", 0x405890, 0x4058d0 },
    { L"Bandit Revolver - DI (2/3)", 0x410a10, 0x410a50 },
    { L"Bandit Revolver - DI (3/3)", 0x4177e0, 0x417820 },
    { L"Bandit Bringer (1/12)", 0x35c3d0, 0x35c410 },
    { L"Bandit Bringer (2/12)", 0x35da10, 0x35da50 },
    { L"Bandit Bringer (3/12)", 0x3600b0, 0x3600f0 },
    { L"Bandit Bringer (4/12)", 0x361f80, 0x361fc0 },
    { L"Bandit Bringer (5/12)", 0x364520, 0x364560 },
    { L"Bandit Bringer (6/12)", 0x366df0, 0x366e30 },
    { L"Bandit Bringer (7/12)", 0x368de0, 0x368e20 },
    { L"Bandit Bringer (8/12)", 0x369e60, 0x369ea0 },
    { L"Bandit Bringer (9/12)", 0x36aab0, 0x36aaf0 },
    { L"Bandit Bringer (10/12)", 0x36b450, 0x36b490 },
    { L"Bandit Bringer (11/12)", 0x36bde0, 0x36be20 },
    { L"Bandit Bringer (12/12)", 0x36c770, 0x36c7b0 },
    { L"Bandit Bringer Trails (1/3)", 0x36d0a0, 0x36d0e0 },
    { L"Bandit Bringer Trails (2/3)", 0x36dce0, 0x36dd20 },
    { L"Bandit Bringer Trails (3/3)", 0x36e860, 0x36e8a0 },
    { L"Sidewinder", 0x437380, 0x4373c0 },
    { L"Fafnir (1/7)", 0x42fb50, 0x42fb90 },
    { L"Fafnir (2/7)", 0x430970, 0x4309b0 },
    { L"Fafnir (3/7)", 0x431a50, 0x431a90 },
    { L"Fafnir (4/7)", 0x432d20, 0x432d60 },
    { L"Fafnir (5/7)", 0x434b00, 0x434b40 },
    { L"Fafnir (6/7)", 0x436330, 0x436370 },
    { L"Fafnir (7/7)", 0x436fb0, 0x436ff0 },
    { L"Slam -Dragon Install", 0x3fcf60, 0x3fcfa0 },
// Overdrives
    { L"Tyrant Rave", 0x378990, 0x3789d0 },
    { L"Tyrant Rave Beta (1/24)", 0x3F6610, 0x3F6650 },
    { L"Tyrant Rave Beta (2/24)", 0x3F68C0, 0x3F6900 },
    { L"Tyrant Rave Beta (3/24)", 0x3F7510, 0x3F7550 },
    { L"Tyrant Rave Beta (4/24)", 0x3F85B0, 0x3F85F0 },
    { L"Tyrant Rave Beta (5/24)", 0x3F94B0, 0x3F94F0 },
    { L"Tyrant Rave Beta (6/24)", 0x3FA340, 0x3FA380 },
    { L"Tyrant Rave Beta (7/24)", 0x3FAF50, 0x3FAF90 },
    { L"Tyrant Rave Beta (8/24)", 0x3FB7E0, 0x3FB820 },
    { L"Tyrant Rave Beta (9/24)", 0x3FBDA0, 0x3FBDE0 },
    { L"Tyrant Rave Beta (10/24)", 0x3C0F40, 0x3C0F80 },
    { L"Tyrant Rave Beta (11/24)", 0x3C2DC0, 0x3C2E00 },
    { L"Tyrant Rave Beta (12/24)", 0x3C9210, 0x3C9250 },
    { L"Tyrant Rave Beta (13/24)", 0x3D0F60, 0x3D0FA0 },
    { L"Tyrant Rave Beta (14/24)", 0x3D8E50, 0x3D8E90 },
    { L"Tyrant Rave Beta (15/24)", 0x3DFB20, 0x3DFB60 },
    { L"Tyrant Rave Beta (16/24)", 0x3EA370, 0x3EA3B0 },
    { L"Tyrant Rave Beta (17/24)", 0x3E5AE0, 0x3E5B20 },
    { L"Tyrant Rave Beta (18/24)", 0x3ED820, 0x3ED860 },
    { L"Tyrant Rave Beta (19/24)", 0x3F0050, 0x3F0090 },
    { L"Tyrant Rave Beta (20/24)", 0x3F1CB0, 0x3F1CF0 },
    { L"Tyrant Rave Beta (21/24)", 0x3F3190, 0x3F31D0 },
    { L"Tyrant Rave Beta (22/24)", 0x3F4190, 0x3F41D0 },
    { L"Tyrant Rave Beta (23/24)", 0x3F50C0, 0x3F5100 },
    { L"Tyrant Rave Beta (24/24)", 0x3F5C50, 0x3F5C90 },
    { L"Dragon Install Fire (1/7)", 0x3870c0, 0x387100 },
    { L"Dragon Install Fire (2/7)", 0x3879f0, 0x387a30 },
    { L"Dragon Install Fire (3/7)", 0x387f90, 0x387fd0 },
    { L"Dragon Install Fire (4/7)", 0x388870, 0x3888b0 },
    { L"Dragon Install Fire (5/7)", 0x389300, 0x389340 },
    { L"Dragon Install Fire (6/7)", 0x389c80, 0x389cc0 },
    { L"Dragon Install Fire (7/7)", 0x38a5e0, 0x38a620 },
// Instant Kill
    { L"Napalm Death (1/9)", 0x3911a0, 0x3911e0 },
    { L"Napalm Death (2/9)", 0x39c6b0, 0x39c6f0 },
    { L"Napalm Death (3/9)", 0x3a58a0, 0x3a58e0 },
    { L"Napalm Death (4/9)", 0x3af100, 0x3af140 },
    { L"Napalm Death (5/9)", 0x3b5a30, 0x3b5a70 },
    { L"Napalm Death (6/9)", 0x3b88f0, 0x3b8930 },
    { L"Napalm Death (7/9)", 0x3bb020, 0x3bb060 },
    { L"Napalm Death (8/9)", 0x3bcf70, 0x3bcfb0 },
    { L"Napalm Death (9/9)", 0x3bf310, 0x3bf350 },

    { L"Volcanic Viper - Initial Flash", 0x3485f0, 0x348630 },
    { L"Volcanic Viper - Second Flash", 0x34f3f0, 0x34f430 },
    { L"Tyrant Rave", 0x378990, 0x3789d0 },
};

const sGame_PaletteDataset GGXXACR_A_KY_EFFECTS[] =
{
    { L"Vapor Thrust - Ground Effects", 0x3942D0, 0x394310 },
    { L"Vapor Thrust - Slash Effect", 0x394EA0, 0x394EE0 },
    { L"Stun Dipper", 0x3AD2D0, 0x3AD310 },
};

const sGame_PaletteDataset GGXXACR_A_JY_EFFECTS[] =
{
    { L"2H Slash 1", 0x3DA900, 0x3DA940 },
    { L"2H Slash 2", 0x3DC770, 0x3DC7b0 },
    { L"Coins", 0x3F0F60, 0x3F0Fa0 },
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

struct GGXXACRFileData
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

GGXXACRFileData GGXXACRCharacterData[] =
{
    { L"ab.bin",    L"A.B.A.",          5715300,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x48ab50, indexGGXXSprites_ACR_ABA, GGXXACR_A_AB_EFFECTS, ARRAYSIZE(GGXXACR_A_AB_EFFECTS) },
    { L"an.bin",    L"Anji",            4518932,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3ea460, indexGGXXSprites_ACR_Anji },
    { L"ax.bin",    L"Axl Low" ,        4225716,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x35ebe0, indexGGXXSprites_ACR_Axl },
    { L"bk.bin",    L"Baiken",          3573668,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x308c20, indexGGXXSprites_ACR_Baiken },
    { L"ch.bin",    L"Chipp Zanuff",    3113988,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x293560, indexGGXXSprites_ACR_Chipp },
    { L"dz.bin",    L"Dizzy",           5352324,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x45d720, indexGGXXSprites_ACR_Dizzy },
    { L"fa.bin",    L"Faust",           4773284,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3fe9a0, indexGGXXSprites_ACR_Faust },
    { L"fr.bin",    L"Order Sol",       5772356,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x4377e0, indexGGXXSprites_ACR_OrderSol },
    { L"in.bin",    L"I-No",            5609060,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3e5370, indexGGXXSprites_ACR_Ino },
    { L"jm.bin",    L"Jam",             3827044,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2c4e80, indexGGXXSprites_ACR_Jam },
    { L"js.bin",    L"Justice",         4556788,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3789b0, indexGGXXSprites_ACR_Justice },
    { L"jy.bin",    L"Johnny",          4205892,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3b0620, indexGGXXSprites_ACR_Johnny, GGXXACR_A_JY_EFFECTS, ARRAYSIZE(GGXXACR_A_JY_EFFECTS) },
    { L"kr.bin",    L"Kliff Undersn",   3114036,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x28abf0, indexGGXXSprites_ACR_Kliff },
    { L"ky.bin",    L"Ky",              4571540,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x38bbc0, indexGGXXSprites_ACR_Ky, GGXXACR_A_KY_EFFECTS, ARRAYSIZE(GGXXACR_A_KY_EFFECTS) },
    { L"ml.bin",    L"Millia",          3034084,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2a4950, indexGGXXSprites_ACR_Millia },
    { L"my.bin",    L"May",             4311684,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x363d50, indexGGXXSprites_ACR_May },
    { L"po.bin",    L"Potemkin",        5277348,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x489c70, indexGGXXSprites_ACR_Potemkin },
    { L"rk.bin",    L"Robo-Ky",         4489668,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3a7450, indexGGXXSprites_ACR_RoboKy },
    { L"sl.bin",    L"Sol Badguy",      4613188,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x339b60, indexGGXXSprites_ACR_Sol, GGXXACR_A_SOL_EFFECTS, ARRAYSIZE(GGXXACR_A_SOL_EFFECTS) },
    { L"sy.bin",    L"Slayer",          6215652,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x39c960, indexGGXXSprites_ACR_Slayer },
    { L"ts.bin",    L"Testament",       4817508,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x3ee950, indexGGXXSprites_ACR_Testament },
    { L"ve.bin",    L"Venom",           2787412,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x261c10, indexGGXXSprites_ACR_Venom },
    { L"yy.bin",    L"Bridget",         4127716,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x34b210, indexGGXXSprites_ACR_Bridget },
    { L"zp.bin",    L"Zappa",           6019988,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x2a54f0, indexGGXXSprites_ACR_Zappa },
    { L"zt.bin",    L"Eddie",           3289156,    GGXXACRPaletteNamesNormal,    ARRAYSIZE(GGXXACRPaletteNamesNormal), 0x24e560, indexGGXXSprites_ACR_Eddie },
    { L"eab.bin",   L"EX A.B.A.",       5912564,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x4b3ca0, indexGGXXSprites_ACR_ABA },
    { L"ean.bin",   L"EX Anji",         4520900,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3eb460, indexGGXXSprites_ACR_Anji },
    { L"eax.bin",   L"EX Axl Low",      4217220,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x35edf0, indexGGXXSprites_ACR_Axl },
    { L"ebk.bin",   L"EX Baiken",       3601604,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x309920, indexGGXXSprites_ACR_Baiken },
    { L"ech.bin",   L"EX Chipp Zanuff", 3162804,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x29f630, indexGGXXSprites_ACR_Chipp },
    { L"edz.bin",   L"EX Dizzy",        5594900,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x49a2c0, indexGGXXSprites_ACR_Dizzy },
    { L"efa.bin",   L"EX Faust",        4784260,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3fe9f0, indexGGXXSprites_ACR_Faust },
    { L"efr.bin",   L"EX Order-Sol",    5965396,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x45d9d0, indexGGXXSprites_ACR_OrderSol },
    { L"ein.bin",   L"EX I-No",         5762996,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3f9060, indexGGXXSprites_ACR_Ino },
    { L"ejm.bin",   L"EX Jam",          3812100,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2c46d0, indexGGXXSprites_ACR_Jam },
    { L"ejy.bin",   L"EX Johnny",       4210036,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3b2250, indexGGXXSprites_ACR_Johnny },
    { L"eky.bin",   L"EX Ky",           4859572,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3cafd0, indexGGXXSprites_ACR_Ky },
    { L"eml.bin",   L"EX Millia",       3003428,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x29d9c0, indexGGXXSprites_ACR_Millia },
    { L"emy.bin",   L"EX May",          4675812,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x399780, indexGGXXSprites_ACR_May },
    { L"epo.bin",   L"EX Potemkin",     5313412,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x494170, indexGGXXSprites_ACR_Potemkin },
    { L"erk.bin",   L"EX Robo-Ky",      4599332,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3cfc80, indexGGXXSprites_ACR_RoboKy },
    { L"esl.bin",   L"EX Sol Badguy",   4679684,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x33b380, indexGGXXSprites_ACR_Sol },
    { L"esy.bin",   L"EX Slayer",       6221972,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x39ea30, indexGGXXSprites_ACR_Slayer },
    { L"ets.bin",   L"EX Testament",    4775796,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x3f4780, indexGGXXSprites_ACR_Testament },
    { L"eve.bin",   L"EX Venom",        2848292,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x271200, indexGGXXSprites_ACR_Venom },
    { L"eyy.bin",   L"EX Bridget",      4206820,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x35d790, indexGGXXSprites_ACR_Bridget },
    { L"ezp.bin",   L"EX Zappa",        6044292,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x2a2e90, indexGGXXSprites_ACR_Zappa },
    { L"ezt.bin",   L"EX Eddie",        3185140,    GGXXACRPaletteNamesEx,        ARRAYSIZE(GGXXACRPaletteNamesEx),     0x275d30, indexGGXXSprites_ACR_Eddie },
};

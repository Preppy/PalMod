#pragma once

// To add characters or palette lists:
// * Add the character to KOF02PS2_A_CharacterOffsetArray
// * Uncomment //DumpAllCharacters in InitDescTree
// * Run PalMod and load the ROM.
// * The new headers will be printed to the debug output: copy those and paste them below.
// * Update the various character references along the lines of how we handle indexKOF02_A_Kyo for Kyo
// That should be it.  Good luck.

struct sKOF02PS2_A_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    UINT32 locationInROM = 0;
    LPCWSTR pszImageRefName = nullptr;
    LPCWSTR pszPortraitImageRefName = nullptr;
    LPCWSTR pszHSDM1NameOverride = nullptr;
    UINT32 nHSDMI1ImageIndex = 0;
    LPCWSTR pszDMSDMNameOverride = nullptr;
    UINT32 nDMSDMImageIndex = 0;
    LPCWSTR pszHSDM2NameOverride = nullptr;
    UINT32 nHSDMI2ImageIndex = 0;
    LPCWSTR pszHSDM3NameOverride = nullptr;
    UINT32 nHSDMI3ImageIndex = 0;
};

// Sorted by ROM layout...
const sKOF02PS2_A_CharacterDump KOF02PS2_A_CharacterOffsetArray[] =
{
    { L"Kyo",        0x388c00 + (0x800 *  0), L"indexKOF02UMSprites_KyoKusa",   L"indexKOF02Sprites_Kyo",           L"MAX2 Fire Palette", 0x2, L"MAX Orochinagi Fire", 0x3, L"Shingo Intro Stuff", 0x19 },
    { L"Benimaru",   0x388c00 + (0x800 *  1), L"indexKOF02UMSprites_Benimaru",  L"indexKOF02Sprites_Benimaru",      L"Raijiken Flash", 0x4, L"Phantom Hurricane Effects", 0x10 },
    { L"Daimon",     0x388c00 + (0x800 *  2), L"indexKOF02UMSprites_Daimon",     L"indexKOF02Sprites_Daimon",       },
    { L"Terry",      0x388c00 + (0x800 *  3), L"indexKOF02UMSprites_Terry",     L"indexKOF02Sprites_Terry",         L"Terry and Child Winpose", 0x19, L"MAX2 Trail", 0xa },
    { L"Andy",       0x388c00 + (0x800 *  4), L"indexKOF02UMSprites_Andy",      L"indexKOF02Sprites_Andy",          L"SDM Super Sonic Swirl and MAX2", 0x11, L"MAX Super Sonic Swirl", 0x11 },
    { L"Joe",        0x388c00 + (0x800 *  5), L"indexKOF02UMSprites_Joe",       L"indexKOF02Sprites_Joe",           },
    { L"Kim",        0x388c00 + (0x800 *  6), L"indexKOF02UMSprites_Kim",       L"indexKOF02Sprites_Kim",           },
    { L"Chang",      0x388c00 + (0x800 *  7), L"indexKOF02UMSprites_Chang",     L"indexKOF02Sprites_Chang",         },
    { L"Choi",       0x388c00 + (0x800 *  8), L"indexKOF02UMSprites_Choi",      L"indexKOF02Sprites_Choi",          L"Phoenix Flattener SDM Effects", 0x3 },
    { L"Athena",     0x388c00 + (0x800 *  9), L"indexKOF02UMSprites_Athena",    L"indexKOF02Sprites_Athena",        L"Athena Transformations", 0x19, L"MAX Shining Crystal Bit", 0, L"Portal Stuff", 0x2, L"Intro Stuff and MAX2 Finisher", 0 },
    { L"Kensou",     0x388c00 + (0x800 * 10), L"indexKOF02UMSprites_Kensou",    L"indexKOF02Sprites_Kensou",        L"MAX2 Power Up State", 0xa },
    { L"Chin",       0x388c00 + (0x800 * 11), L"indexKOF02UMSprites_Chin",      L"indexKOF02Sprites_Chin",          L"Fire Palette", 0x9 },
    { L"Leona",      0x388c00 + (0x800 * 12), L"indexKOF02UMSprites_Leona",     L"indexKOF02Sprites_Leona",         L"Jump Blowback Attack", 0x6, nullptr, 0, L"Orochi Leona", 0x1b, L"Intro Stuff", 0x19 },
    { L"Ralf",       0x388c00 + (0x800 * 13), L"indexKOF02UMSprites_Ralf",      L"indexKOF02Sprites_Ralf",          },
    { L"Clark",      0x388c00 + (0x800 * 14), L"indexKOF02UMSprites_Clark",     L"indexKOF02Sprites_Clark",         },
    { L"Ryo",        0x388c00 + (0x800 * 15), L"indexKOF02UMSprites_Ryo",       L"indexKOF02Sprites_Ryo",           },
    { L"Robert",     0x388c00 + (0x800 * 16), L"indexKOF02UMSprites_Robert",    L"indexKOF02Sprites_Robert",        },
    { L"Takuma",     0x388c00 + (0x800 * 17), L"indexKOF02UMSprites_Takuma",    L"indexKOF02Sprites_Takuma",        },
    { L"Mai",        0x388c00 + (0x800 * 18), L"indexKOF02UMSprites_Mai",       L"indexKOF02Sprites_Mai",           L"Hissatsu SDM Fire", 0x10, L"Hissatsu MAX Fire", 0x11, L"MAX2 Hold B Dress", 0x1a, L"Andy Intro Stuff", 0x19 },
    { L"Yuri",       0x388c00 + (0x800 * 19), L"indexKOF02UMSprites_Yuri",      L"indexKOF02Sprites_Yuri",          },
    { L"May Lee",    0x388c00 + (0x800 * 20), L"indexKOF02UMSprites_MayLee",    L"indexKOF02Sprites_MayLee",        },
    { L"Iori",       0x388c00 + (0x800 * 21), L"indexKOF02UMSprites_Iori",      L"indexKOF02Sprites_Iori",          },
    { L"Mature",     0x388c00 + (0x800 * 22), L"indexKOF02UMSprites_Mature",    L"indexKOF02Sprites_Mature",        },
    { L"Vice",       0x388c00 + (0x800 * 23), L"indexKOF02UMSprites_Vice",      L"indexKOF02Sprites_Vice",          },
    { L"Yamazaki",   0x388c00 + (0x800 * 24), L"indexKOF02UMSprites_Yamazaki",  L"indexKOF02Sprites_Yamazaki",      L"Drill Super Extras", 0x3, L"Intro Stuff", 0x2 },
    { L"Blue Mary",  0x388c00 + (0x800 * 25), L"indexKOF02UMSprites_BlueMary",  L"indexKOF02Sprites_BlueMary",      L"Anton and Jacket", 0x1a },
    { L"Billy",      0x388c00 + (0x800 * 26), L"indexKOF02UMSprites_Billy",     L"indexKOF02Sprites_Billy",         L"Hair", 0x1a, L"Eiji Kisaragi", 0x19 },
    { L"Yashiro",    0x388c00 + (0x800 * 27), L"indexKOF02UMSprites_Yashiro",   L"indexKOF02Sprites_Yashiro",       },
    { L"Shermie",    0x388c00 + (0x800 * 28), L"indexKOF02UMSprites_Shermie",   L"indexKOF02Sprites_Shermie",       },
    { L"Chris",      0x388c00 + (0x800 * 29), L"indexKOF02UMSprites_Chris",     L"indexKOF02Sprites_Chris",         },
    { L"K’",         0x388c00 + (0x800 * 30), L"indexKOF02UMSprites_K",         L"indexKOF02Sprites_K",             L"Diana Intro Stuff", 0x19 },
    { L"Maxima",     0x388c00 + (0x800 * 31), L"indexKOF02UMSprites_Maxima",    L"indexKOF02Sprites_Maxima",        },
    { L"Whip",       0x388c00 + (0x800 * 32), L"indexKOF02UMSprites_Whip",      L"indexKOF02Sprites_Whip",          },
    { L"Vanessa",    0x388c00 + (0x800 * 33), L"indexKOF02UMSprites_Vanessa",   L"indexKOF02Sprites_Vanessa",       },
    { L"Seth",       0x388c00 + (0x800 * 34), L"indexKOF02UMSprites_Seth",      L"indexKOF02Sprites_Seth",          },
    { L"Ramon",      0x388c00 + (0x800 * 35), L"indexKOF02UMSprites_Ramon",     L"indexKOF02Sprites_Ramon",         },
    { L"Kula",       0x388c00 + (0x800 * 36), L"indexKOF02UMSprites_Kula",      L"indexKOF02Sprites_Kula",          L"Diana and Candy Stuff", 0x1c, L"Foxy Stuff", 0x1b, nullptr, 0, L"Critical Ice", 0x2 },
    { L"K9999",      0x388c00 + (0x800 * 37), L"indexKOF02UMSprites_K9999",     L"indexKOF02Sprites_K9999",         L"Intro Stuff", 0x19, L"MAX2 and Win", 0x9, L"SDM Shield", 0x10, L"Tentacle Arm", 0x1a },
    { L"Angel",      0x388c00 + (0x800 * 38), L"indexKOF02UMSprites_Angel",     L"indexKOF02Sprites_Angel",         L"Time Over Lose", 0x19 },
    { L"Omega Rugal", 0x388c00 + (0x800 * 39), L"indexKOF02UMSprites_OmegaRugal", L"indexKOF02Sprites_OmegaRugal",  nullptr, 0, nullptr, 0, L"Superboss Intro Stuff", 0x19 },
    { L"KUSANAGI",   0x388c00 + (0x800 * 40), L"indexKOF02UMSprites_Kusanagi",  L"indexKOF02Sprites_KUSANAGI",      L"Super Move Palette", 0x3, L"MAX Orochinagi Fire", 0x4 },
    { L"O.Yashiro",  0x388c00 + (0x800 * 41), L"indexKOF02UMSprites_YashiroOChi",   L"indexKOF02Sprites_Yashiro",       },
    { L"O.Shermie",  0x388c00 + (0x800 * 42), L"indexKOF02UMSprites_ShermieOChi",   L"indexKOF02Sprites_Shermie",       nullptr, 0, nullptr, 0, nullptr, 0, L"MAX2 Lightning", 0x9 },
    { L"O.Chris",    0x388c00 + (0x800 * 43), L"indexKOF02Sprites_ChrisOrochi",     L"indexKOF02Sprites_Chris",         nullptr, 0, L"MAX2 Orochi", 0, nullptr, 0, L"Orochi Fire Palette", 0x19},

    // "PS2" hack additions.
    { L"Shingo",    0x3b2e00,                 L"indexKOF02UMSprites_Shingo",     L"indexKOF02UMSprites_Shingo",     },
    { L"King",      0x3b3600,                 L"indexKOF02UMSprites_King",       L"indexKOF02Sprites_King",         L"Rose and Kick Effects", 0x04 },
    { L"Orochi Iori", 0x3b6800,               L"indexKOF02UMSprites_OrochiIori", L"indexKOF02Sprites_Iori",         },
    { L"Geese",     0x3b7000,                 L"indexKOF02UMSprites_Geese",      L"indexKOF02Sprites_Geese",        },
    { L"Goenitz",   0x3b7800,                 L"indexKOF02UMSprites_Goenitz",    L"indexKOF02Sprites_Goenitz",      },
};

const UINT16 KOF02PS2_A_IMGIDS_USED[] =
{
    indexKOF02UMSprites_Andy,      // 0x79
    indexKOF02UMSprites_Angel,     // 0x7A
    indexKOF02UMSprites_Athena,    // 0x7B
    indexKOF02UMSprites_Bao,       // 0x7C
    indexKOF02UMSprites_Benimaru,  // 0x7D
    indexKOF02UMSprites_Billy,     // 0x7E
    indexKOF02UMSprites_BlueMary,  // 0x7F
    indexKOF02UMSprites_Chang,     // 0x80
    indexKOF02UMSprites_Chin,      // 0x81
    indexKOF02UMSprites_Choi,      // 0x82
    indexKOF02UMSprites_Chris,     // 0x83
    indexKOF02UMSprites_ChrisOChi, // 0x84
    indexKOF02UMSprites_Clark,     // 0x85
    indexKOF02UMSprites_CloneZero, // 0x86
    indexKOF02UMSprites_Daimon,    // 0x87 aka Goro
    indexKOF02UMSprites_Foxy,      // 0x88
    indexKOF02UMSprites_Geese,     // 0x89
    indexKOF02UMSprites_GeeseNM,   // 0x8A
    indexKOF02UMSprites_Goenitz,   // 0x8B
    indexKOF02UMSprites_Heidern,   // 0x8C
    indexKOF02UMSprites_Hinako,    // 0x8D
    indexKOF02UMSprites_Igniz,     // 0x8E
    indexKOF02UMSprites_Iori,      // 0x8F
    indexKOF02UMSprites_Jhun,      // 0x90
    indexKOF02UMSprites_Joe,       // 0x91
    indexKOF02UMSprites_K,         // 0x92
    indexKOF02UMSprites_K9999,     // 0x93
    indexKOF02UMSprites_Kasumi,    // 0x94
    indexKOF02UMSprites_Kensou,    // 0x95
    indexKOF02UMSprites_KensouEX,  // 0x96
    indexKOF02UMSprites_Kim,       // 0x97
    indexKOF02UMSprites_King,      // 0x98
    indexKOF02UMSprites_Krizalid,  // 0x99
    indexKOF02UMSprites_Kula,      // 0x9a
    indexKOF02UMSprites_Kusanagi,  // 0x9b
    indexKOF02UMSprites_KyoKusa,   // 0x9c
    indexKOF02UMSprites_Kyo1,      // 0x9d
    indexKOF02UMSprites_Kyo2,      // 0x9e
    indexKOF02UMSprites_Leona,     // 0x9f
    indexKOF02UMSprites_Lin,       // 0xa0
    indexKOF02UMSprites_Mai,       // 0xA1
    indexKOF02UMSprites_Mature,    // 0xA2
    indexKOF02UMSprites_Maxima,    // 0xA3
    indexKOF02UMSprites_MayLee,    // 0xA4
    indexKOF02UMSprites_Nameless,  // 0xA5
    indexKOF02UMSprites_OmegaRugal, // 0xA6
    indexKOF02UMSprites_Ralf,      // 0xA7
    indexKOF02UMSprites_Ramon,     // 0xa8
    indexKOF02UMSprites_Robert,    // 0xA9
    indexKOF02UMSprites_RobertEX,  // 0xAa
    indexKOF02UMSprites_Ryo,       // 0xAb
    indexKOF02UMSprites_Seth,      // 0xAc
    indexKOF02UMSprites_Shermie,   // 0xAd
    indexKOF02UMSprites_ShermieOChi, // 0xAe
    indexKOF02UMSprites_Shingo,    // 0xAf
    indexKOF02UMSprites_Takuma,    // 0xb0
    indexKOF02UMSprites_TakumaEX,  // 0xB1
    indexKOF02UMSprites_Terry,     // 0xB2
    indexKOF02UMSprites_Vanessa,   // 0xB3
    indexKOF02UMSprites_Vice,      // 0xB4
    indexKOF02UMSprites_Whip,      // 0xB5
    indexKOF02UMSprites_Xiangfei,  // 0xB6
    indexKOF02UMSprites_Yamazaki,  // 0xB7
    indexKOF02UMSprites_Yashiro,   // 0xB8
    indexKOF02UMSprites_YashiroOChi, // 0xB9
    indexKOF02UMSprites_Yuri,      // 0xBa
    indexKOF02UMSprites_ZeroOG,    // 0xBb

    indexKOF02UMSprites_K9999,
    indexKOF02Sprites_K9999,

    indexKOF02Sprites_Angel,    // 0x26
    indexKOF02Sprites_Athena,   // 0x27
    indexKOF02Sprites_Clark,    // 0x28
    indexKOF02Sprites_K,        // 0x29
    indexKOF02Sprites_Kula,     // 0x2a
    indexKOF02Sprites_Kyo,      // 0x2b
    indexKOF02Sprites_Maxima,   // 0x2c
    indexKOF02Sprites_MayLee,   // 0x2d
    indexKOF02Sprites_Ralf,     // 0x2e
    indexKOF02Sprites_Ramon,    // 0x2f
    indexKOF02Sprites_Seth,     // 0x30
    indexKOF02Sprites_Vanessa,  // 0x31
    indexKOF02Sprites_Whip,     // 0x32
    indexKOF02Sprites_Lin,      // 0x33
    indexKOF02Sprites_Nameless, // 0x34
    indexKOF02Sprites_King,     // 0x35
    indexKOF02Sprites_Xiangfei, // 0x36
    indexKOF02Sprites_Goenitz,  // 0x37

    indexKOF02Sprites_Bao,      // 38
    indexKOF02Sprites_Foxy,     // 39
    indexKOF02Sprites_Geese,    // 3a
    indexKOF02Sprites_Hinako,   // 3b
    indexKOF02Sprites_Igniz,    // 3c
    indexKOF02Sprites_Jhun,     // 3d
    indexKOF02Sprites_Kasumi,   // 3e
    indexKOF02Sprites_Krizalid, // 3f
    indexKOF02Sprites_OZero,    // 40
    indexKOF02Sprites_NGeese,   // unused currently

    indexKOF02Sprites_OrochiIori,   // 45
    indexKOF02Sprites_Shingo,   // 46

    indexKOF02Sprites_Andy,     // 48
    indexKOF02Sprites_Chin,     // 49 
    indexKOF02Sprites_Kusanagi, // 4a
    indexKOF02Sprites_Robert,   // 4b
    indexKOF02Sprites_Yuri,     // 4c

    indexKOF02Sprites_K9999,    // 4d

    indexKOF02Sprites_ChrisOrochi,  // 0x14a
    indexKOF02Sprites_Benimaru,     // 0x14b
    indexKOF02Sprites_Billy,        // 0x14c
    indexKOF02Sprites_BlueMary,     // 0x14d
    indexKOF02Sprites_Chang,        // 0x14e
    indexKOF02Sprites_Choi,         // 0x14f
    indexKOF02Sprites_Chris,        // 0x150
    indexKOF02Sprites_Daimon,       // 0x151
    indexKOF02Sprites_Iori,         // 0x152
    indexKOF02Sprites_Joe,          // 0x153
    indexKOF02Sprites_Kensou,       // 0x154
    indexKOF02Sprites_Kim,          // 0x155
    indexKOF02Sprites_KUSANAGI,     // 0x156
    indexKOF02Sprites_Leona,        // 0x157
    indexKOF02Sprites_Mai,          // 0x158
    indexKOF02Sprites_Mature,       // 0x159
    indexKOF02Sprites_OmegaRugal,   // 0x15A
    indexKOF02Sprites_Ryo,          // 0x15B
    indexKOF02Sprites_Shermie,      // 0x15C
    indexKOF02Sprites_ShermieOrochi, // 0x15D
    indexKOF02Sprites_Takuma,       // 0x15E
    indexKOF02Sprites_Terry,        // 0x15F
    indexKOF02Sprites_Vice,         // 0x160
    indexKOF02Sprites_Yamazaki,     // 0x161
    indexKOF02Sprites_Yashiro,      // 0x162
    indexKOF02Sprites_YashiroOrochi, // 0x163

    indexKOF02Sprites_Extras,       // 0x75

    indexKOF02UMSprites_OrochiIori, // 0x43

    indexKOF02Sprites_Bonus,        // 0x297
    indexKOF02Sprites_Stages,       // 0x298
};

// hand-tweaked
const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kyo Select Portrait", 0x3b8300, 0x3b8340, indexKOF02Sprites_Extras, 0x2b },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Benimaru Select Portrait", 0x3b8340, 0x3b8380, indexKOF02Sprites_Extras, 0x01 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Daimon Select Portrait", 0x3b8380, 0x3b83c0, indexKOF02Sprites_Extras, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Terry Select Portrait", 0x3b83c0, 0x3b8400, indexKOF02Sprites_Extras, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Andy Select Portrait", 0x3b8400, 0x3b8440, indexKOF02Sprites_Extras, 0x48 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Joe Select Portrait", 0x3b8440, 0x3b8480, indexKOF02Sprites_Extras, 0x05 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kim Select Portrait", 0x3b8480, 0x3b84c0, indexKOF02Sprites_Extras, 0x12 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Chang Select Portrait", 0x3b84c0, 0x3b8500, indexKOF02Sprites_Extras, 0x13 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Choi Select Portrait", 0x3b8500, 0x3b8540, indexKOF02Sprites_Extras, 0x14 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Athena Select Portrait", 0x3b8540, 0x3b8580, indexKOF02Sprites_Extras, 0x27 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kensou Select Portrait", 0x3b8580, 0x3b85c0, indexKOF02Sprites_Extras, 0x0d },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Chin Select Portrait", 0x3b85c0, 0x3b8600, indexKOF02Sprites_Extras, 0x49 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Leona Select Portrait", 0x3b8600, 0x3b8640, indexKOF02Sprites_Extras, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Ralf Select Portrait", 0x3b8640, 0x3b8680, indexKOF02Sprites_Extras, 0x2e },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Clark Select Portrait", 0x3b8680, 0x3b86c0, indexKOF02Sprites_Extras, 0x28 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Ryo Select Portrait", 0x3b86c0, 0x3b8700, indexKOF02Sprites_Extras, 0x06 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Robert Select Portrait", 0x3b8700, 0x3b8740, indexKOF02Sprites_Extras, 0x4b },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Takuma Select Portrait", 0x3b8740, 0x3b8780, indexKOF02Sprites_Extras, 0x1f },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Mai Select Portrait", 0x3b8780, 0x3b87c0, indexKOF02Sprites_Extras, 0x10 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Yuri Select Portrait", 0x3b87c0, 0x3b8800, indexKOF02Sprites_Extras, 0x4c },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"May Lee Select Portrait", 0x3b8800, 0x3b8840, indexKOF02Sprites_Extras, 0x2d },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Iori Select Portrait", 0x3b8840, 0x3b8880, indexKOF02Sprites_Extras, 0x1b },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Mature Select Portrait", 0x3b8880, 0x3b88c0, indexKOF02Sprites_Extras, 0x1c },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Vice Select Portrait", 0x3b88c0, 0x3b8900, indexKOF02Sprites_Extras, 0x1d },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Yamazaki Select Portrait", 0x3b8900, 0x3b8940, indexKOF02Sprites_Extras, 0x18 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Blue Mary Select Portrait", 0x3b8940, 0x3b8980, indexKOF02Sprites_Extras, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Billy Select Portrait", 0x3b8980, 0x3b89c0, indexKOF02Sprites_Extras, 0x1a },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Yashiro Select Portrait", 0x3b89c0, 0x3b8a00, indexKOF02Sprites_Extras, 0x15 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Shermie Select Portrait", 0x3b8a00, 0x3b8a40, indexKOF02Sprites_Extras, 0x16 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Chris Select Portrait", 0x3b8a40, 0x3b8a80, indexKOF02Sprites_Extras, 0x17 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_PORTRAITS_SELECT[] =
{
    { L"K’ Select Portrait", 0x3b8a80, 0x3b8ac0, indexKOF02Sprites_Extras, 0x29 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Maxima Select Portrait", 0x3b8ac0, 0x3b8b00, indexKOF02Sprites_Extras, 0x2c },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Whip Select Portrait", 0x3b8b00, 0x3b8b40, indexKOF02Sprites_Extras, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Vanessa Select Portrait", 0x3b8b40, 0x3b8b80, indexKOF02Sprites_Extras, 0x31 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Seth Select Portrait", 0x3b8b80, 0x3b8bc0, indexKOF02Sprites_Extras, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Ramon Select Portrait", 0x3b8bc0, 0x3b8c00, indexKOF02Sprites_Extras, 0x2f },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kula Select Portrait", 0x3b8c00, 0x3b8c40, indexKOF02Sprites_Extras, 0x2a },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_PORTRAITS_SELECT[] =
{
    { L"K9999 Select Portrait", 0x3b8c40, 0x3b8c80, indexKOF02Sprites_Extras, 0x4d },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Angel Select Portrait", 0x3b8c80, 0x3b8cc0, indexKOF02Sprites_Extras, 0x26 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Omega Rugal Select Portrait", 0x3b8cc0, 0x3b8d00, indexKOF02Sprites_Extras, 0x24 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"KUSANAGI Select Portrait", 0x3b8d00, 0x3b8d40, indexKOF02Sprites_Extras, 0x4a },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"O.Yashiro Select Portrait", 0x3b8d40, 0x3b8d80, indexKOF02Sprites_Extras, 0x51 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"O.Shermie Select Portrait", 0x3b8d80, 0x3b8dc0, indexKOF02Sprites_Extras, 0x50 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_SELECT[] =
{
    { L"O.Chris Select Portrait", 0x3b8dc0, 0x3b8e00, indexKOF02Sprites_Extras, 0x4f },
};

#pragma region auto-generated

const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kyo A Win Portrait", 0x3bae00, 0x3bae40, indexKOF02Sprites_Kyo, 0x30 },
    { L"Kyo B Win Portrait", 0x3bae40, 0x3bae80, indexKOF02Sprites_Kyo, 0x30 },
    { L"Kyo C Win Portrait", 0x3bae80, 0x3baec0, indexKOF02Sprites_Kyo, 0x30 },
    { L"Kyo D Win Portrait", 0x3baec0, 0x3baf00, indexKOF02Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_WIN[] =
{
    { L"Benimaru A Win Portrait", 0x3baf00, 0x3baf40, indexKOF02Sprites_Benimaru, 0x30 },
    { L"Benimaru B Win Portrait", 0x3baf40, 0x3baf80, indexKOF02Sprites_Benimaru, 0x30 },
    { L"Benimaru C Win Portrait", 0x3baf80, 0x3bafc0, indexKOF02Sprites_Benimaru, 0x30 },
    { L"Benimaru D Win Portrait", 0x3bafc0, 0x3bb000, indexKOF02Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_WIN[] =
{
    { L"Daimon A Win Portrait", 0x3bb000, 0x3bb040, indexKOF02Sprites_Daimon, 0x30 },
    { L"Daimon B Win Portrait", 0x3bb040, 0x3bb080, indexKOF02Sprites_Daimon, 0x30 },
    { L"Daimon C Win Portrait", 0x3bb080, 0x3bb0c0, indexKOF02Sprites_Daimon, 0x30 },
    { L"Daimon D Win Portrait", 0x3bb0c0, 0x3bb100, indexKOF02Sprites_Daimon, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Terry A Win Portrait", 0x3bb100, 0x3bb140, indexKOF02Sprites_Terry, 0x30 },
    { L"Terry B Win Portrait", 0x3bb140, 0x3bb180, indexKOF02Sprites_Terry, 0x30 },
    { L"Terry C Win Portrait", 0x3bb180, 0x3bb1c0, indexKOF02Sprites_Terry, 0x30 },
    { L"Terry D Win Portrait", 0x3bb1c0, 0x3bb200, indexKOF02Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Andy A Win Portrait", 0x3bb200, 0x3bb240, indexKOF02Sprites_Andy, 0x30 },
    { L"Andy B Win Portrait", 0x3bb240, 0x3bb280, indexKOF02Sprites_Andy, 0x30 },
    { L"Andy C Win Portrait", 0x3bb280, 0x3bb2c0, indexKOF02Sprites_Andy, 0x30 },
    { L"Andy D Win Portrait", 0x3bb2c0, 0x3bb300, indexKOF02Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Joe A Win Portrait", 0x3bb300, 0x3bb340, indexKOF02Sprites_Joe, 0x30 },
    { L"Joe B Win Portrait", 0x3bb340, 0x3bb380, indexKOF02Sprites_Joe, 0x30 },
    { L"Joe C Win Portrait", 0x3bb380, 0x3bb3c0, indexKOF02Sprites_Joe, 0x30 },
    { L"Joe D Win Portrait", 0x3bb3c0, 0x3bb400, indexKOF02Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kim A Win Portrait", 0x3bb400, 0x3bb440, indexKOF02Sprites_Kim, 0x30 },
    { L"Kim B Win Portrait", 0x3bb440, 0x3bb480, indexKOF02Sprites_Kim, 0x30 },
    { L"Kim C Win Portrait", 0x3bb480, 0x3bb4c0, indexKOF02Sprites_Kim, 0x30 },
    { L"Kim D Win Portrait", 0x3bb4c0, 0x3bb500, indexKOF02Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_PORTRAITS_WIN[] =
{
    { L"Chang A Win Portrait", 0x3bb500, 0x3bb540, indexKOF02Sprites_Chang, 0x30 },
    { L"Chang B Win Portrait", 0x3bb540, 0x3bb580, indexKOF02Sprites_Chang, 0x30 },
    { L"Chang C Win Portrait", 0x3bb580, 0x3bb5c0, indexKOF02Sprites_Chang, 0x30 },
    { L"Chang D Win Portrait", 0x3bb5c0, 0x3bb600, indexKOF02Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Choi A Win Portrait", 0x3bb600, 0x3bb640, indexKOF02Sprites_Choi, 0x30 },
    { L"Choi B Win Portrait", 0x3bb640, 0x3bb680, indexKOF02Sprites_Choi, 0x30 },
    { L"Choi C Win Portrait", 0x3bb680, 0x3bb6c0, indexKOF02Sprites_Choi, 0x30 },
    { L"Choi D Win Portrait", 0x3bb6c0, 0x3bb700, indexKOF02Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Athena A Win Portrait", 0x3bb700, 0x3bb740, indexKOF02Sprites_Athena, 0x30 },
    { L"Athena B Win Portrait", 0x3bb740, 0x3bb780, indexKOF02Sprites_Athena, 0x30 },
    { L"Athena C Win Portrait", 0x3bb780, 0x3bb7c0, indexKOF02Sprites_Athena, 0x30 },
    { L"Athena D Win Portrait", 0x3bb7c0, 0x3bb800, indexKOF02Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kensou A Win Portrait", 0x3bb800, 0x3bb840, indexKOF02Sprites_Kensou, 0x30 },
    { L"Kensou B Win Portrait", 0x3bb840, 0x3bb880, indexKOF02Sprites_Kensou, 0x30 },
    { L"Kensou C Win Portrait", 0x3bb880, 0x3bb8c0, indexKOF02Sprites_Kensou, 0x30 },
    { L"Kensou D Win Portrait", 0x3bb8c0, 0x3bb900, indexKOF02Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_PORTRAITS_WIN[] =
{
    { L"Chin A Win Portrait", 0x3bb900, 0x3bb940, indexKOF02Sprites_Chin, 0x30 },
    { L"Chin B Win Portrait", 0x3bb940, 0x3bb980, indexKOF02Sprites_Chin, 0x30 },
    { L"Chin C Win Portrait", 0x3bb980, 0x3bb9c0, indexKOF02Sprites_Chin, 0x30 },
    { L"Chin D Win Portrait", 0x3bb9c0, 0x3bba00, indexKOF02Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Leona A Win Portrait", 0x3bba00, 0x3bba40, indexKOF02Sprites_Leona, 0x30 },
    { L"Leona B Win Portrait", 0x3bba40, 0x3bba80, indexKOF02Sprites_Leona, 0x30 },
    { L"Leona C Win Portrait", 0x3bba80, 0x3bbac0, indexKOF02Sprites_Leona, 0x30 },
    { L"Leona D Win Portrait", 0x3bbac0, 0x3bbb00, indexKOF02Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_PORTRAITS_WIN[] =
{
    { L"Ralf A Win Portrait", 0x3bbb00, 0x3bbb40, indexKOF02Sprites_Ralf, 0x30 },
    { L"Ralf B Win Portrait", 0x3bbb40, 0x3bbb80, indexKOF02Sprites_Ralf, 0x30 },
    { L"Ralf C Win Portrait", 0x3bbb80, 0x3bbbc0, indexKOF02Sprites_Ralf, 0x30 },
    { L"Ralf D Win Portrait", 0x3bbbc0, 0x3bbc00, indexKOF02Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_PORTRAITS_WIN[] =
{
    { L"Clark A Win Portrait", 0x3bbc00, 0x3bbc40, indexKOF02Sprites_Clark, 0x30 },
    { L"Clark B Win Portrait", 0x3bbc40, 0x3bbc80, indexKOF02Sprites_Clark, 0x30 },
    { L"Clark C Win Portrait", 0x3bbc80, 0x3bbcc0, indexKOF02Sprites_Clark, 0x30 },
    { L"Clark D Win Portrait", 0x3bbcc0, 0x3bbd00, indexKOF02Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Ryo A Win Portrait", 0x3bbd00, 0x3bbd40, indexKOF02Sprites_Ryo, 0x30 },
    { L"Ryo B Win Portrait", 0x3bbd40, 0x3bbd80, indexKOF02Sprites_Ryo, 0x30 },
    { L"Ryo C Win Portrait", 0x3bbd80, 0x3bbdc0, indexKOF02Sprites_Ryo, 0x30 },
    { L"Ryo D Win Portrait", 0x3bbdc0, 0x3bbe00, indexKOF02Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_WIN[] =
{
    { L"Robert A Win Portrait", 0x3bbe00, 0x3bbe40, indexKOF02Sprites_Robert, 0x30 },
    { L"Robert B Win Portrait", 0x3bbe40, 0x3bbe80, indexKOF02Sprites_Robert, 0x30 },
    { L"Robert C Win Portrait", 0x3bbe80, 0x3bbec0, indexKOF02Sprites_Robert, 0x30 },
    { L"Robert D Win Portrait", 0x3bbec0, 0x3bbf00, indexKOF02Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Takuma A Win Portrait", 0x3bbf00, 0x3bbf40, indexKOF02Sprites_Takuma, 0x30 },
    { L"Takuma B Win Portrait", 0x3bbf40, 0x3bbf80, indexKOF02Sprites_Takuma, 0x30 },
    { L"Takuma C Win Portrait", 0x3bbf80, 0x3bbfc0, indexKOF02Sprites_Takuma, 0x30 },
    { L"Takuma D Win Portrait", 0x3bbfc0, 0x3bc000, indexKOF02Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Mai A Win Portrait", 0x3bc000, 0x3bc040, indexKOF02Sprites_Mai, 0x30 },
    { L"Mai B Win Portrait", 0x3bc040, 0x3bc080, indexKOF02Sprites_Mai, 0x30 },
    { L"Mai C Win Portrait", 0x3bc080, 0x3bc0c0, indexKOF02Sprites_Mai, 0x30 },
    { L"Mai D Win Portrait", 0x3bc0c0, 0x3bc100, indexKOF02Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Yuri A Win Portrait", 0x3bc100, 0x3bc140, indexKOF02Sprites_Yuri, 0x30 },
    { L"Yuri B Win Portrait", 0x3bc140, 0x3bc180, indexKOF02Sprites_Yuri, 0x30 },
    { L"Yuri C Win Portrait", 0x3bc180, 0x3bc1c0, indexKOF02Sprites_Yuri, 0x30 },
    { L"Yuri D Win Portrait", 0x3bc1c0, 0x3bc200, indexKOF02Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_WIN[] =
{
    { L"May Lee A Win Portrait", 0x3bc200, 0x3bc240, indexKOF02Sprites_MayLee, 0x30 },
    { L"May Lee B Win Portrait", 0x3bc240, 0x3bc280, indexKOF02Sprites_MayLee, 0x30 },
    { L"May Lee C Win Portrait", 0x3bc280, 0x3bc2c0, indexKOF02Sprites_MayLee, 0x30 },
    { L"May Lee D Win Portrait", 0x3bc2c0, 0x3bc300, indexKOF02Sprites_MayLee, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Iori A Win Portrait", 0x3bc300, 0x3bc340, indexKOF02Sprites_Iori, 0x30 },
    { L"Iori B Win Portrait", 0x3bc340, 0x3bc380, indexKOF02Sprites_Iori, 0x30 },
    { L"Iori C Win Portrait", 0x3bc380, 0x3bc3c0, indexKOF02Sprites_Iori, 0x30 },
    { L"Iori D Win Portrait", 0x3bc3c0, 0x3bc400, indexKOF02Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Mature A Win Portrait", 0x3bc400, 0x3bc440, indexKOF02Sprites_Mature, 0x30 },
    { L"Mature B Win Portrait", 0x3bc440, 0x3bc480, indexKOF02Sprites_Mature, 0x30 },
    { L"Mature C Win Portrait", 0x3bc480, 0x3bc4c0, indexKOF02Sprites_Mature, 0x30 },
    { L"Mature D Win Portrait", 0x3bc4c0, 0x3bc500, indexKOF02Sprites_Mature, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Vice A Win Portrait", 0x3bc500, 0x3bc540, indexKOF02Sprites_Vice, 0x30 },
    { L"Vice B Win Portrait", 0x3bc540, 0x3bc580, indexKOF02Sprites_Vice, 0x30 },
    { L"Vice C Win Portrait", 0x3bc580, 0x3bc5c0, indexKOF02Sprites_Vice, 0x30 },
    { L"Vice D Win Portrait", 0x3bc5c0, 0x3bc600, indexKOF02Sprites_Vice, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Yamazaki A Win Portrait", 0x3bc600, 0x3bc640, indexKOF02Sprites_Yamazaki, 0x30 },
    { L"Yamazaki B Win Portrait", 0x3bc640, 0x3bc680, indexKOF02Sprites_Yamazaki, 0x30 },
    { L"Yamazaki C Win Portrait", 0x3bc680, 0x3bc6c0, indexKOF02Sprites_Yamazaki, 0x30 },
    { L"Yamazaki D Win Portrait", 0x3bc6c0, 0x3bc700, indexKOF02Sprites_Yamazaki, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Blue Mary A Win Portrait", 0x3bc700, 0x3bc740, indexKOF02Sprites_BlueMary, 0x30 },
    { L"Blue Mary B Win Portrait", 0x3bc740, 0x3bc780, indexKOF02Sprites_BlueMary, 0x30 },
    { L"Blue Mary C Win Portrait", 0x3bc780, 0x3bc7c0, indexKOF02Sprites_BlueMary, 0x30 },
    { L"Blue Mary D Win Portrait", 0x3bc7c0, 0x3bc800, indexKOF02Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Billy A Win Portrait", 0x3bc800, 0x3bc840, indexKOF02Sprites_Billy, 0x30 },
    { L"Billy B Win Portrait", 0x3bc840, 0x3bc880, indexKOF02Sprites_Billy, 0x30 },
    { L"Billy C Win Portrait", 0x3bc880, 0x3bc8c0, indexKOF02Sprites_Billy, 0x30 },
    { L"Billy D Win Portrait", 0x3bc8c0, 0x3bc900, indexKOF02Sprites_Billy, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Yashiro A Win Portrait", 0x3bc900, 0x3bc940, indexKOF02Sprites_Yashiro, 0x30 },
    { L"Yashiro B Win Portrait", 0x3bc940, 0x3bc980, indexKOF02Sprites_Yashiro, 0x30 },
    { L"Yashiro C Win Portrait", 0x3bc980, 0x3bc9c0, indexKOF02Sprites_Yashiro, 0x30 },
    { L"Yashiro D Win Portrait", 0x3bc9c0, 0x3bca00, indexKOF02Sprites_Yashiro, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Shermie A Win Portrait", 0x3bca00, 0x3bca40, indexKOF02Sprites_Shermie, 0x30 },
    { L"Shermie B Win Portrait", 0x3bca40, 0x3bca80, indexKOF02Sprites_Shermie, 0x30 },
    { L"Shermie C Win Portrait", 0x3bca80, 0x3bcac0, indexKOF02Sprites_Shermie, 0x30 },
    { L"Shermie D Win Portrait", 0x3bcac0, 0x3bcb00, indexKOF02Sprites_Shermie, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_WIN[] =
{
    { L"Chris A Win Portrait", 0x3bcb00, 0x3bcb40, indexKOF02Sprites_Chris, 0x30 },
    { L"Chris B Win Portrait", 0x3bcb40, 0x3bcb80, indexKOF02Sprites_Chris, 0x30 },
    { L"Chris C Win Portrait", 0x3bcb80, 0x3bcbc0, indexKOF02Sprites_Chris, 0x30 },
    { L"Chris D Win Portrait", 0x3bcbc0, 0x3bcc00, indexKOF02Sprites_Chris, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_PORTRAITS_WIN[] =
{
    { L"K’ A Win Portrait", 0x3bcc00, 0x3bcc40, indexKOF02Sprites_K, 0x30 },
    { L"K’ B Win Portrait", 0x3bcc40, 0x3bcc80, indexKOF02Sprites_K, 0x30 },
    { L"K’ C Win Portrait", 0x3bcc80, 0x3bccc0, indexKOF02Sprites_K, 0x30 },
    { L"K’ D Win Portrait", 0x3bccc0, 0x3bcd00, indexKOF02Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Maxima A Win Portrait", 0x3bcd00, 0x3bcd40, indexKOF02Sprites_Maxima, 0x30 },
    { L"Maxima B Win Portrait", 0x3bcd40, 0x3bcd80, indexKOF02Sprites_Maxima, 0x30 },
    { L"Maxima C Win Portrait", 0x3bcd80, 0x3bcdc0, indexKOF02Sprites_Maxima, 0x30 },
    { L"Maxima D Win Portrait", 0x3bcdc0, 0x3bce00, indexKOF02Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_PORTRAITS_WIN[] =
{
    { L"Whip A Win Portrait", 0x3bce00, 0x3bce40, indexKOF02Sprites_Whip, 0x30 },
    { L"Whip B Win Portrait", 0x3bce40, 0x3bce80, indexKOF02Sprites_Whip, 0x30 },
    { L"Whip C Win Portrait", 0x3bce80, 0x3bcec0, indexKOF02Sprites_Whip, 0x30 },
    { L"Whip D Win Portrait", 0x3bcec0, 0x3bcf00, indexKOF02Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Vanessa A Win Portrait", 0x3bcf00, 0x3bcf40, indexKOF02Sprites_Vanessa, 0x30 },
    { L"Vanessa B Win Portrait", 0x3bcf40, 0x3bcf80, indexKOF02Sprites_Vanessa, 0x30 },
    { L"Vanessa C Win Portrait", 0x3bcf80, 0x3bcfc0, indexKOF02Sprites_Vanessa, 0x30 },
    { L"Vanessa D Win Portrait", 0x3bcfc0, 0x3bd000, indexKOF02Sprites_Vanessa, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_PORTRAITS_WIN[] =
{
    { L"Seth A Win Portrait", 0x3bd000, 0x3bd040, indexKOF02Sprites_Seth, 0x30 },
    { L"Seth B Win Portrait", 0x3bd040, 0x3bd080, indexKOF02Sprites_Seth, 0x30 },
    { L"Seth C Win Portrait", 0x3bd080, 0x3bd0c0, indexKOF02Sprites_Seth, 0x30 },
    { L"Seth D Win Portrait", 0x3bd0c0, 0x3bd100, indexKOF02Sprites_Seth, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_PORTRAITS_WIN[] =
{
    { L"Ramon A Win Portrait", 0x3bd100, 0x3bd140, indexKOF02Sprites_Ramon, 0x30 },
    { L"Ramon B Win Portrait", 0x3bd140, 0x3bd180, indexKOF02Sprites_Ramon, 0x30 },
    { L"Ramon C Win Portrait", 0x3bd180, 0x3bd1c0, indexKOF02Sprites_Ramon, 0x30 },
    { L"Ramon D Win Portrait", 0x3bd1c0, 0x3bd200, indexKOF02Sprites_Ramon, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kula A Win Portrait", 0x3bd200, 0x3bd240, indexKOF02Sprites_Kula, 0x30 },
    { L"Kula B Win Portrait", 0x3bd240, 0x3bd280, indexKOF02Sprites_Kula, 0x30 },
    { L"Kula C Win Portrait", 0x3bd280, 0x3bd2c0, indexKOF02Sprites_Kula, 0x30 },
    { L"Kula D Win Portrait", 0x3bd2c0, 0x3bd300, indexKOF02Sprites_Kula, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_PORTRAITS_WIN[] =
{
    { L"K9999 A Win Portrait", 0x3bd300, 0x3bd340, indexKOF02Sprites_K9999, 0x30 },
    { L"K9999 B Win Portrait", 0x3bd340, 0x3bd380, indexKOF02Sprites_K9999, 0x30 },
    { L"K9999 C Win Portrait", 0x3bd380, 0x3bd3c0, indexKOF02Sprites_K9999, 0x30 },
    { L"K9999 D Win Portrait", 0x3bd3c0, 0x3bd400, indexKOF02Sprites_K9999, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_WIN[] =
{
    { L"Angel A Win Portrait", 0x3bd400, 0x3bd440, indexKOF02Sprites_Angel, 0x30 },
    { L"Angel B Win Portrait", 0x3bd440, 0x3bd480, indexKOF02Sprites_Angel, 0x30 },
    { L"Angel C Win Portrait", 0x3bd480, 0x3bd4c0, indexKOF02Sprites_Angel, 0x30 },
    { L"Angel D Win Portrait", 0x3bd4c0, 0x3bd500, indexKOF02Sprites_Angel, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_WIN[] =
{
    { L"Omega Rugal A Win Portrait", 0x3bd500, 0x3bd540, indexKOF02Sprites_OmegaRugal, 0x30 },
    { L"Omega Rugal B Win Portrait", 0x3bd540, 0x3bd580, indexKOF02Sprites_OmegaRugal, 0x30 },
    { L"Omega Rugal C Win Portrait", 0x3bd580, 0x3bd5c0, indexKOF02Sprites_OmegaRugal, 0x30 },
    { L"Omega Rugal D Win Portrait", 0x3bd5c0, 0x3bd600, indexKOF02Sprites_OmegaRugal, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_WIN[] =
{
    { L"KUSANAGI A Win Portrait", 0x3bd600, 0x3bd640, indexKOF02Sprites_KUSANAGI, 0x30 },
    { L"KUSANAGI B Win Portrait", 0x3bd640, 0x3bd680, indexKOF02Sprites_KUSANAGI, 0x30 },
    { L"KUSANAGI C Win Portrait", 0x3bd680, 0x3bd6c0, indexKOF02Sprites_KUSANAGI, 0x30 },
    { L"KUSANAGI D Win Portrait", 0x3bd6c0, 0x3bd700, indexKOF02Sprites_KUSANAGI, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_WIN[] =
{
    { L"O.Yashiro A Win Portrait", 0x3bd700, 0x3bd740, indexKOF02Sprites_YashiroOrochi, 0x30 },
    { L"O.Yashiro B Win Portrait", 0x3bd740, 0x3bd780, indexKOF02Sprites_YashiroOrochi, 0x30 },
    { L"O.Yashiro C Win Portrait", 0x3bd780, 0x3bd7c0, indexKOF02Sprites_YashiroOrochi, 0x30 },
    { L"O.Yashiro D Win Portrait", 0x3bd7c0, 0x3bd800, indexKOF02Sprites_YashiroOrochi, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_WIN[] =
{
    { L"O.Shermie A Win Portrait", 0x3bd800, 0x3bd840, indexKOF02Sprites_ShermieOrochi, 0x30 },
    { L"O.Shermie B Win Portrait", 0x3bd840, 0x3bd880, indexKOF02Sprites_ShermieOrochi, 0x30 },
    { L"O.Shermie C Win Portrait", 0x3bd880, 0x3bd8c0, indexKOF02Sprites_ShermieOrochi, 0x30 },
    { L"O.Shermie D Win Portrait", 0x3bd8c0, 0x3bd900, indexKOF02Sprites_ShermieOrochi, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_WIN[] =
{
    { L"O.Chris A Win Portrait", 0x3bd900, 0x3bd940, indexKOF02Sprites_ChrisOrochi, 0x30 },
    { L"O.Chris B Win Portrait", 0x3bd940, 0x3bd980, indexKOF02Sprites_ChrisOrochi, 0x30 },
    { L"O.Chris C Win Portrait", 0x3bd980, 0x3bd9c0, indexKOF02Sprites_ChrisOrochi, 0x30 },
    { L"O.Chris D Win Portrait", 0x3bd9c0, 0x3bda00, indexKOF02Sprites_ChrisOrochi, 0x30 },
};

const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kyo A Lifebar Portrait", 0x3b9560, 0x3b9580, indexKOF02Sprites_Kyo, 0x32 },
    { L"Kyo B Lifebar Portrait", 0x3b9b80, 0x3b9ba0, indexKOF02Sprites_Kyo, 0x32 },
    { L"Kyo C Lifebar Portrait", 0x3ba1a0, 0x3ba1c0, indexKOF02Sprites_Kyo, 0x32 },
    { L"Kyo D Lifebar Portrait", 0x3ba7c0, 0x3ba7e0, indexKOF02Sprites_Kyo, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Benimaru A Lifebar Portrait", 0x3b9580, 0x3b95a0, indexKOF02Sprites_Benimaru, 0x32 },
    { L"Benimaru B Lifebar Portrait", 0x3b9ba0, 0x3b9bc0, indexKOF02Sprites_Benimaru, 0x32 },
    { L"Benimaru C Lifebar Portrait", 0x3ba1c0, 0x3ba1e0, indexKOF02Sprites_Benimaru, 0x32 },
    { L"Benimaru D Lifebar Portrait", 0x3ba7e0, 0x3ba800, indexKOF02Sprites_Benimaru, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Daimon A Lifebar Portrait", 0x3b95a0, 0x3b95c0, indexKOF02Sprites_Daimon, 0x32 },
    { L"Daimon B Lifebar Portrait", 0x3b9bc0, 0x3b9be0, indexKOF02Sprites_Daimon, 0x32 },
    { L"Daimon C Lifebar Portrait", 0x3ba1e0, 0x3ba200, indexKOF02Sprites_Daimon, 0x32 },
    { L"Daimon D Lifebar Portrait", 0x3ba800, 0x3ba820, indexKOF02Sprites_Daimon, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Terry A Lifebar Portrait", 0x3b95c0, 0x3b95e0, indexKOF02Sprites_Terry, 0x32 },
    { L"Terry B Lifebar Portrait", 0x3b9be0, 0x3b9c00, indexKOF02Sprites_Terry, 0x32 },
    { L"Terry C Lifebar Portrait", 0x3ba200, 0x3ba220, indexKOF02Sprites_Terry, 0x32 },
    { L"Terry D Lifebar Portrait", 0x3ba820, 0x3ba840, indexKOF02Sprites_Terry, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Andy A Lifebar Portrait", 0x3b95e0, 0x3b9600, indexKOF02Sprites_Andy, 0x32 },
    { L"Andy B Lifebar Portrait", 0x3b9c00, 0x3b9c20, indexKOF02Sprites_Andy, 0x32 },
    { L"Andy C Lifebar Portrait", 0x3ba220, 0x3ba240, indexKOF02Sprites_Andy, 0x32 },
    { L"Andy D Lifebar Portrait", 0x3ba840, 0x3ba860, indexKOF02Sprites_Andy, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Joe A Lifebar Portrait", 0x3b9600, 0x3b9620, indexKOF02Sprites_Joe, 0x32 },
    { L"Joe B Lifebar Portrait", 0x3b9c20, 0x3b9c40, indexKOF02Sprites_Joe, 0x32 },
    { L"Joe C Lifebar Portrait", 0x3ba240, 0x3ba260, indexKOF02Sprites_Joe, 0x32 },
    { L"Joe D Lifebar Portrait", 0x3ba860, 0x3ba880, indexKOF02Sprites_Joe, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kim A Lifebar Portrait", 0x3b9620, 0x3b9640, indexKOF02Sprites_Kim, 0x32 },
    { L"Kim B Lifebar Portrait", 0x3b9c40, 0x3b9c60, indexKOF02Sprites_Kim, 0x32 },
    { L"Kim C Lifebar Portrait", 0x3ba260, 0x3ba280, indexKOF02Sprites_Kim, 0x32 },
    { L"Kim D Lifebar Portrait", 0x3ba880, 0x3ba8a0, indexKOF02Sprites_Kim, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Chang A Lifebar Portrait", 0x3b9640, 0x3b9660, indexKOF02Sprites_Chang, 0x32 },
    { L"Chang B Lifebar Portrait", 0x3b9c60, 0x3b9c80, indexKOF02Sprites_Chang, 0x32 },
    { L"Chang C Lifebar Portrait", 0x3ba280, 0x3ba2a0, indexKOF02Sprites_Chang, 0x32 },
    { L"Chang D Lifebar Portrait", 0x3ba8a0, 0x3ba8c0, indexKOF02Sprites_Chang, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Choi A Lifebar Portrait", 0x3b9660, 0x3b9680, indexKOF02Sprites_Choi, 0x32 },
    { L"Choi B Lifebar Portrait", 0x3b9c80, 0x3b9ca0, indexKOF02Sprites_Choi, 0x32 },
    { L"Choi C Lifebar Portrait", 0x3ba2a0, 0x3ba2c0, indexKOF02Sprites_Choi, 0x32 },
    { L"Choi D Lifebar Portrait", 0x3ba8c0, 0x3ba8e0, indexKOF02Sprites_Choi, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Athena A Lifebar Portrait", 0x3b9680, 0x3b96a0, indexKOF02Sprites_Athena, 0x32 },
    { L"Athena B Lifebar Portrait", 0x3b9ca0, 0x3b9cc0, indexKOF02Sprites_Athena, 0x32 },
    { L"Athena C Lifebar Portrait", 0x3ba2c0, 0x3ba2e0, indexKOF02Sprites_Athena, 0x32 },
    { L"Athena D Lifebar Portrait", 0x3ba8e0, 0x3ba900, indexKOF02Sprites_Athena, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kensou A Lifebar Portrait", 0x3b96a0, 0x3b96c0, indexKOF02Sprites_Kensou, 0x32 },
    { L"Kensou B Lifebar Portrait", 0x3b9cc0, 0x3b9ce0, indexKOF02Sprites_Kensou, 0x32 },
    { L"Kensou C Lifebar Portrait", 0x3ba2e0, 0x3ba300, indexKOF02Sprites_Kensou, 0x32 },
    { L"Kensou D Lifebar Portrait", 0x3ba900, 0x3ba920, indexKOF02Sprites_Kensou, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Chin A Lifebar Portrait", 0x3b96c0, 0x3b96e0, indexKOF02Sprites_Chin, 0x32 },
    { L"Chin B Lifebar Portrait", 0x3b9ce0, 0x3b9d00, indexKOF02Sprites_Chin, 0x32 },
    { L"Chin C Lifebar Portrait", 0x3ba300, 0x3ba320, indexKOF02Sprites_Chin, 0x32 },
    { L"Chin D Lifebar Portrait", 0x3ba920, 0x3ba940, indexKOF02Sprites_Chin, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Leona A Lifebar Portrait", 0x3b96e0, 0x3b9700, indexKOF02Sprites_Leona, 0x32 },
    { L"Leona B Lifebar Portrait", 0x3b9d00, 0x3b9d20, indexKOF02Sprites_Leona, 0x32 },
    { L"Leona C Lifebar Portrait", 0x3ba320, 0x3ba340, indexKOF02Sprites_Leona, 0x32 },
    { L"Leona D Lifebar Portrait", 0x3ba940, 0x3ba960, indexKOF02Sprites_Leona, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Ralf A Lifebar Portrait", 0x3b9700, 0x3b9720, indexKOF02Sprites_Ralf, 0x32 },
    { L"Ralf B Lifebar Portrait", 0x3b9d20, 0x3b9d40, indexKOF02Sprites_Ralf, 0x32 },
    { L"Ralf C Lifebar Portrait", 0x3ba340, 0x3ba360, indexKOF02Sprites_Ralf, 0x32 },
    { L"Ralf D Lifebar Portrait", 0x3ba960, 0x3ba980, indexKOF02Sprites_Ralf, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Clark A Lifebar Portrait", 0x3b9720, 0x3b9740, indexKOF02Sprites_Clark, 0x32 },
    { L"Clark B Lifebar Portrait", 0x3b9d40, 0x3b9d60, indexKOF02Sprites_Clark, 0x32 },
    { L"Clark C Lifebar Portrait", 0x3ba360, 0x3ba380, indexKOF02Sprites_Clark, 0x32 },
    { L"Clark D Lifebar Portrait", 0x3ba980, 0x3ba9a0, indexKOF02Sprites_Clark, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Ryo A Lifebar Portrait", 0x3b9740, 0x3b9760, indexKOF02Sprites_Ryo, 0x32 },
    { L"Ryo B Lifebar Portrait", 0x3b9d60, 0x3b9d80, indexKOF02Sprites_Ryo, 0x32 },
    { L"Ryo C Lifebar Portrait", 0x3ba380, 0x3ba3a0, indexKOF02Sprites_Ryo, 0x32 },
    { L"Ryo D Lifebar Portrait", 0x3ba9a0, 0x3ba9c0, indexKOF02Sprites_Ryo, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Robert A Lifebar Portrait", 0x3b9760, 0x3b9780, indexKOF02Sprites_Robert, 0x32 },
    { L"Robert B Lifebar Portrait", 0x3b9d80, 0x3b9da0, indexKOF02Sprites_Robert, 0x32 },
    { L"Robert C Lifebar Portrait", 0x3ba3a0, 0x3ba3c0, indexKOF02Sprites_Robert, 0x32 },
    { L"Robert D Lifebar Portrait", 0x3ba9c0, 0x3ba9e0, indexKOF02Sprites_Robert, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Takuma A Lifebar Portrait", 0x3b9780, 0x3b97a0, indexKOF02Sprites_Takuma, 0x32 },
    { L"Takuma B Lifebar Portrait", 0x3b9da0, 0x3b9dc0, indexKOF02Sprites_Takuma, 0x32 },
    { L"Takuma C Lifebar Portrait", 0x3ba3c0, 0x3ba3e0, indexKOF02Sprites_Takuma, 0x32 },
    { L"Takuma D Lifebar Portrait", 0x3ba9e0, 0x3baa00, indexKOF02Sprites_Takuma, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Mai A Lifebar Portrait", 0x3b97a0, 0x3b97c0, indexKOF02Sprites_Mai, 0x32 },
    { L"Mai B Lifebar Portrait", 0x3b9dc0, 0x3b9de0, indexKOF02Sprites_Mai, 0x32 },
    { L"Mai C Lifebar Portrait", 0x3ba3e0, 0x3ba400, indexKOF02Sprites_Mai, 0x32 },
    { L"Mai D Lifebar Portrait", 0x3baa00, 0x3baa20, indexKOF02Sprites_Mai, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Yuri A Lifebar Portrait", 0x3b97c0, 0x3b97e0, indexKOF02Sprites_Yuri, 0x32 },
    { L"Yuri B Lifebar Portrait", 0x3b9de0, 0x3b9e00, indexKOF02Sprites_Yuri, 0x32 },
    { L"Yuri C Lifebar Portrait", 0x3ba400, 0x3ba420, indexKOF02Sprites_Yuri, 0x32 },
    { L"Yuri D Lifebar Portrait", 0x3baa20, 0x3baa40, indexKOF02Sprites_Yuri, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"May Lee A Lifebar Portrait", 0x3b97e0, 0x3b9800, indexKOF02Sprites_MayLee, 0x32 },
    { L"May Lee B Lifebar Portrait", 0x3b9e00, 0x3b9e20, indexKOF02Sprites_MayLee, 0x32 },
    { L"May Lee C Lifebar Portrait", 0x3ba420, 0x3ba440, indexKOF02Sprites_MayLee, 0x32 },
    { L"May Lee D Lifebar Portrait", 0x3baa40, 0x3baa60, indexKOF02Sprites_MayLee, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Iori A Lifebar Portrait", 0x3b9800, 0x3b9820, indexKOF02Sprites_Iori, 0x32 },
    { L"Iori B Lifebar Portrait", 0x3b9e20, 0x3b9e40, indexKOF02Sprites_Iori, 0x32 },
    { L"Iori C Lifebar Portrait", 0x3ba440, 0x3ba460, indexKOF02Sprites_Iori, 0x32 },
    { L"Iori D Lifebar Portrait", 0x3baa60, 0x3baa80, indexKOF02Sprites_Iori, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Mature A Lifebar Portrait", 0x3b9820, 0x3b9840, indexKOF02Sprites_Mature, 0x32 },
    { L"Mature B Lifebar Portrait", 0x3b9e40, 0x3b9e60, indexKOF02Sprites_Mature, 0x32 },
    { L"Mature C Lifebar Portrait", 0x3ba460, 0x3ba480, indexKOF02Sprites_Mature, 0x32 },
    { L"Mature D Lifebar Portrait", 0x3baa80, 0x3baaa0, indexKOF02Sprites_Mature, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Vice A Lifebar Portrait", 0x3b9840, 0x3b9860, indexKOF02Sprites_Vice, 0x32 },
    { L"Vice B Lifebar Portrait", 0x3b9e60, 0x3b9e80, indexKOF02Sprites_Vice, 0x32 },
    { L"Vice C Lifebar Portrait", 0x3ba480, 0x3ba4a0, indexKOF02Sprites_Vice, 0x32 },
    { L"Vice D Lifebar Portrait", 0x3baaa0, 0x3baac0, indexKOF02Sprites_Vice, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Yamazaki A Lifebar Portrait", 0x3b9860, 0x3b9880, indexKOF02Sprites_Yamazaki, 0x32 },
    { L"Yamazaki B Lifebar Portrait", 0x3b9e80, 0x3b9ea0, indexKOF02Sprites_Yamazaki, 0x32 },
    { L"Yamazaki C Lifebar Portrait", 0x3ba4a0, 0x3ba4c0, indexKOF02Sprites_Yamazaki, 0x32 },
    { L"Yamazaki D Lifebar Portrait", 0x3baac0, 0x3baae0, indexKOF02Sprites_Yamazaki, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Blue Mary A Lifebar Portrait", 0x3b9880, 0x3b98a0, indexKOF02Sprites_BlueMary, 0x32 },
    { L"Blue Mary B Lifebar Portrait", 0x3b9ea0, 0x3b9ec0, indexKOF02Sprites_BlueMary, 0x32 },
    { L"Blue Mary C Lifebar Portrait", 0x3ba4c0, 0x3ba4e0, indexKOF02Sprites_BlueMary, 0x32 },
    { L"Blue Mary D Lifebar Portrait", 0x3baae0, 0x3bab00, indexKOF02Sprites_BlueMary, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Billy A Lifebar Portrait", 0x3b98a0, 0x3b98c0, indexKOF02Sprites_Billy, 0x32 },
    { L"Billy B Lifebar Portrait", 0x3b9ec0, 0x3b9ee0, indexKOF02Sprites_Billy, 0x32 },
    { L"Billy C Lifebar Portrait", 0x3ba4e0, 0x3ba500, indexKOF02Sprites_Billy, 0x32 },
    { L"Billy D Lifebar Portrait", 0x3bab00, 0x3bab20, indexKOF02Sprites_Billy, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Yashiro A Lifebar Portrait", 0x3b98c0, 0x3b98e0, indexKOF02Sprites_Yashiro, 0x32 },
    { L"Yashiro B Lifebar Portrait", 0x3b9ee0, 0x3b9f00, indexKOF02Sprites_Yashiro, 0x32 },
    { L"Yashiro C Lifebar Portrait", 0x3ba500, 0x3ba520, indexKOF02Sprites_Yashiro, 0x32 },
    { L"Yashiro D Lifebar Portrait", 0x3bab20, 0x3bab40, indexKOF02Sprites_Yashiro, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Shermie A Lifebar Portrait", 0x3b98e0, 0x3b9900, indexKOF02Sprites_Shermie, 0x32 },
    { L"Shermie B Lifebar Portrait", 0x3b9f00, 0x3b9f20, indexKOF02Sprites_Shermie, 0x32 },
    { L"Shermie C Lifebar Portrait", 0x3ba520, 0x3ba540, indexKOF02Sprites_Shermie, 0x32 },
    { L"Shermie D Lifebar Portrait", 0x3bab40, 0x3bab60, indexKOF02Sprites_Shermie, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Chris A Lifebar Portrait", 0x3b9900, 0x3b9920, indexKOF02Sprites_Chris, 0x32 },
    { L"Chris B Lifebar Portrait", 0x3b9f20, 0x3b9f40, indexKOF02Sprites_Chris, 0x32 },
    { L"Chris C Lifebar Portrait", 0x3ba540, 0x3ba560, indexKOF02Sprites_Chris, 0x32 },
    { L"Chris D Lifebar Portrait", 0x3bab60, 0x3bab80, indexKOF02Sprites_Chris, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"K’ A Lifebar Portrait", 0x3b9920, 0x3b9940, indexKOF02Sprites_K, 0x32 },
    { L"K’ B Lifebar Portrait", 0x3b9f40, 0x3b9f60, indexKOF02Sprites_K, 0x32 },
    { L"K’ C Lifebar Portrait", 0x3ba560, 0x3ba580, indexKOF02Sprites_K, 0x32 },
    { L"K’ D Lifebar Portrait", 0x3bab80, 0x3baba0, indexKOF02Sprites_K, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Maxima A Lifebar Portrait", 0x3b9940, 0x3b9960, indexKOF02Sprites_Maxima, 0x32 },
    { L"Maxima B Lifebar Portrait", 0x3b9f60, 0x3b9f80, indexKOF02Sprites_Maxima, 0x32 },
    { L"Maxima C Lifebar Portrait", 0x3ba580, 0x3ba5a0, indexKOF02Sprites_Maxima, 0x32 },
    { L"Maxima D Lifebar Portrait", 0x3baba0, 0x3babc0, indexKOF02Sprites_Maxima, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Whip A Lifebar Portrait", 0x3b9960, 0x3b9980, indexKOF02Sprites_Whip, 0x32 },
    { L"Whip B Lifebar Portrait", 0x3b9f80, 0x3b9fa0, indexKOF02Sprites_Whip, 0x32 },
    { L"Whip C Lifebar Portrait", 0x3ba5a0, 0x3ba5c0, indexKOF02Sprites_Whip, 0x32 },
    { L"Whip D Lifebar Portrait", 0x3babc0, 0x3babe0, indexKOF02Sprites_Whip, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Vanessa A Lifebar Portrait", 0x3b9980, 0x3b99a0, indexKOF02Sprites_Vanessa, 0x32 },
    { L"Vanessa B Lifebar Portrait", 0x3b9fa0, 0x3b9fc0, indexKOF02Sprites_Vanessa, 0x32 },
    { L"Vanessa C Lifebar Portrait", 0x3ba5c0, 0x3ba5e0, indexKOF02Sprites_Vanessa, 0x32 },
    { L"Vanessa D Lifebar Portrait", 0x3babe0, 0x3bac00, indexKOF02Sprites_Vanessa, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Seth A Lifebar Portrait", 0x3b99a0, 0x3b99c0, indexKOF02Sprites_Seth, 0x32 },
    { L"Seth B Lifebar Portrait", 0x3b9fc0, 0x3b9fe0, indexKOF02Sprites_Seth, 0x32 },
    { L"Seth C Lifebar Portrait", 0x3ba5e0, 0x3ba600, indexKOF02Sprites_Seth, 0x32 },
    { L"Seth D Lifebar Portrait", 0x3bac00, 0x3bac20, indexKOF02Sprites_Seth, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Ramon A Lifebar Portrait", 0x3b99c0, 0x3b99e0, indexKOF02Sprites_Ramon, 0x32 },
    { L"Ramon B Lifebar Portrait", 0x3b9fe0, 0x3ba000, indexKOF02Sprites_Ramon, 0x32 },
    { L"Ramon C Lifebar Portrait", 0x3ba600, 0x3ba620, indexKOF02Sprites_Ramon, 0x32 },
    { L"Ramon D Lifebar Portrait", 0x3bac20, 0x3bac40, indexKOF02Sprites_Ramon, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kula A Lifebar Portrait", 0x3b99e0, 0x3b9a00, indexKOF02Sprites_Kula, 0x32 },
    { L"Kula B Lifebar Portrait", 0x3ba000, 0x3ba020, indexKOF02Sprites_Kula, 0x32 },
    { L"Kula C Lifebar Portrait", 0x3ba620, 0x3ba640, indexKOF02Sprites_Kula, 0x32 },
    { L"Kula D Lifebar Portrait", 0x3bac40, 0x3bac60, indexKOF02Sprites_Kula, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"K9999 A Lifebar Portrait", 0x3b9a00, 0x3b9a20, indexKOF02Sprites_K9999, 0x32 },
    { L"K9999 B Lifebar Portrait", 0x3ba020, 0x3ba040, indexKOF02Sprites_K9999, 0x32 },
    { L"K9999 C Lifebar Portrait", 0x3ba640, 0x3ba660, indexKOF02Sprites_K9999, 0x32 },
    { L"K9999 D Lifebar Portrait", 0x3bac60, 0x3bac80, indexKOF02Sprites_K9999, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Angel A Lifebar Portrait", 0x3b9a20, 0x3b9a40, indexKOF02Sprites_Angel, 0x32 },
    { L"Angel B Lifebar Portrait", 0x3ba040, 0x3ba060, indexKOF02Sprites_Angel, 0x32 },
    { L"Angel C Lifebar Portrait", 0x3ba660, 0x3ba680, indexKOF02Sprites_Angel, 0x32 },
    { L"Angel D Lifebar Portrait", 0x3bac80, 0x3baca0, indexKOF02Sprites_Angel, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Omega Rugal A Lifebar Portrait", 0x3b9a40, 0x3b9a60, indexKOF02Sprites_OmegaRugal, 0x32 },
    { L"Omega Rugal B Lifebar Portrait", 0x3ba060, 0x3ba080, indexKOF02Sprites_OmegaRugal, 0x32 },
    { L"Omega Rugal C Lifebar Portrait", 0x3ba680, 0x3ba6a0, indexKOF02Sprites_OmegaRugal, 0x32 },
    { L"Omega Rugal D Lifebar Portrait", 0x3baca0, 0x3bacc0, indexKOF02Sprites_OmegaRugal, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"KUSANAGI A Lifebar Portrait", 0x3b9a60, 0x3b9a80, indexKOF02Sprites_KUSANAGI, 0x32 },
    { L"KUSANAGI B Lifebar Portrait", 0x3ba080, 0x3ba0a0, indexKOF02Sprites_KUSANAGI, 0x32 },
    { L"KUSANAGI C Lifebar Portrait", 0x3ba6a0, 0x3ba6c0, indexKOF02Sprites_KUSANAGI, 0x32 },
    { L"KUSANAGI D Lifebar Portrait", 0x3bacc0, 0x3bace0, indexKOF02Sprites_KUSANAGI, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"O.Yashiro A Lifebar Portrait", 0x3b9a80, 0x3b9aa0, indexKOF02Sprites_YashiroOrochi, 0x32 },
    { L"O.Yashiro B Lifebar Portrait", 0x3ba0a0, 0x3ba0c0, indexKOF02Sprites_YashiroOrochi, 0x32 },
    { L"O.Yashiro C Lifebar Portrait", 0x3ba6c0, 0x3ba6e0, indexKOF02Sprites_YashiroOrochi, 0x32 },
    { L"O.Yashiro D Lifebar Portrait", 0x3bace0, 0x3bad00, indexKOF02Sprites_YashiroOrochi, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"O.Shermie A Lifebar Portrait", 0x3b9aa0, 0x3b9ac0, indexKOF02Sprites_ShermieOrochi, 0x32 },
    { L"O.Shermie B Lifebar Portrait", 0x3ba0c0, 0x3ba0e0, indexKOF02Sprites_ShermieOrochi, 0x32 },
    { L"O.Shermie C Lifebar Portrait", 0x3ba6e0, 0x3ba700, indexKOF02Sprites_ShermieOrochi, 0x32 },
    { L"O.Shermie D Lifebar Portrait", 0x3bad00, 0x3bad20, indexKOF02Sprites_ShermieOrochi, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"O.Chris A Lifebar Portrait", 0x3b9ac0, 0x3b9ae0, indexKOF02Sprites_ChrisOrochi, 0x32 },
    { L"O.Chris B Lifebar Portrait", 0x3ba0e0, 0x3ba100, indexKOF02Sprites_ChrisOrochi, 0x32 },
    { L"O.Chris C Lifebar Portrait", 0x3ba700, 0x3ba720, indexKOF02Sprites_ChrisOrochi, 0x32 },
    { L"O.Chris D Lifebar Portrait", 0x3bad20, 0x3bad40, indexKOF02Sprites_ChrisOrochi, 0x32 },
};

const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Shingo A Lifebar Portrait", 0x3b9ae0, 0x3b9b00, indexKOF02Sprites_Shingo, 0x52 },
    { L"Shingo B Lifebar Portrait", 0x3ba100, 0x3ba120, indexKOF02Sprites_Shingo, 0x52 },
    { L"Shingo C Lifebar Portrait", 0x3ba720, 0x3ba740, indexKOF02Sprites_Shingo, 0x52 },
    { L"Shingo D Lifebar Portrait", 0x3bad40, 0x3bad60, indexKOF02Sprites_Shingo, 0x52 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"King A Lifebar Portrait", 0x3b9b00, 0x3b9b20, indexKOF02Sprites_King, 0x52 },
    { L"King B Lifebar Portrait", 0x3ba120, 0x3ba140, indexKOF02Sprites_King, 0x52 },
    { L"King C Lifebar Portrait", 0x3ba740, 0x3ba760, indexKOF02Sprites_King, 0x52 },
    { L"King D Lifebar Portrait", 0x3bad60, 0x3bad80, indexKOF02Sprites_King, 0x52 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Orochi Iori A Lifebar Portrait", 0x3b9b20, 0x3b9b40, indexKOF02Sprites_OrochiIori, 0x52 },
    { L"Orochi Iori B Lifebar Portrait", 0x3ba140, 0x3ba160, indexKOF02Sprites_OrochiIori, 0x52 },
    { L"Orochi Iori C Lifebar Portrait", 0x3ba760, 0x3ba780, indexKOF02Sprites_OrochiIori, 0x52 },
    { L"Orochi Iori D Lifebar Portrait", 0x3bad80, 0x3bada0, indexKOF02Sprites_OrochiIori, 0x52 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Geese A Lifebar Portrait", 0x3b9b40, 0x3b9b60, indexKOF02Sprites_Geese, 0x52 },
    { L"Geese B Lifebar Portrait", 0x3ba160, 0x3ba180, indexKOF02Sprites_Geese, 0x52 },
    { L"Geese C Lifebar Portrait", 0x3ba780, 0x3ba7a0, indexKOF02Sprites_Geese, 0x52 },
    { L"Geese D Lifebar Portrait", 0x3bada0, 0x3badc0, indexKOF02Sprites_Geese, 0x52 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Goenitz A Lifebar Portrait", 0x3b9b60, 0x3b9b80, indexKOF02Sprites_Goenitz, 0x52 },
    { L"Goenitz B Lifebar Portrait", 0x3ba180, 0x3ba1a0, indexKOF02Sprites_Goenitz, 0x52 },
    { L"Goenitz C Lifebar Portrait", 0x3ba7a0, 0x3ba7c0, indexKOF02Sprites_Goenitz, 0x52 },
    { L"Goenitz D Lifebar Portrait", 0x3badc0, 0x3bade0, indexKOF02Sprites_Goenitz, 0x52 },
};

const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_A[] =
{
    { L"Kyo A", 0x0388c00, 0x0388c20, indexKOF02UMSprites_KyoKusa },
    { L"A - MAX2 Fire Palette", 0x0388c20, 0x0388c40, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"A - MAX Orochinagi Fire", 0x0388c40, 0x0388c60, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"A - Electric Shock Effect", 0x0388c60, 0x0388c80, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"A - MAX Flash", 0x0388c80, 0x0388ca0, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"A - Shingo Intro Stuff", 0x0388ca0, 0x0388cc0, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"A - Soul Palette", 0x0388cc0, 0x0388ce0, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0388ce0, 0x0388d00, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_B[] =
{
    { L"Kyo B", 0x0388e00, 0x0388e20, indexKOF02UMSprites_KyoKusa },
    { L"B - MAX2 Fire Palette", 0x0388e20, 0x0388e40, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"B - MAX Orochinagi Fire", 0x0388e40, 0x0388e60, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"B - Electric Shock Effect", 0x0388e60, 0x0388e80, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"B - MAX Flash", 0x0388e80, 0x0388ea0, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"B - Shingo Intro Stuff", 0x0388ea0, 0x0388ec0, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"B - Soul Palette", 0x0388ec0, 0x0388ee0, indexKOF02UMSprites_KyoKusa, 0x18 },
    //{ L"B - Hidden Super Desperation Move 3", 0x0388ee0, 0x0388f00, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_C[] =
{
    { L"Kyo C", 0x0389000, 0x0389020, indexKOF02UMSprites_KyoKusa },
    { L"C - MAX2 Fire Palette", 0x0389020, 0x0389040, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"C - MAX Orochinagi Fire", 0x0389040, 0x0389060, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"C - Electric Shock Effect", 0x0389060, 0x0389080, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"C - MAX Flash", 0x0389080, 0x03890a0, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"C - Shingo Intro Stuff", 0x03890a0, 0x03890c0, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"C - Soul Palette", 0x03890c0, 0x03890e0, indexKOF02UMSprites_KyoKusa, 0x18 },
    //{ L"C - Hidden Super Desperation Move 3", 0x03890e0, 0x0389100, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KYO_PALETTES_D[] =
{
    { L"Kyo D", 0x0389200, 0x0389220, indexKOF02UMSprites_KyoKusa },
    { L"D - MAX2 Fire Palette", 0x0389220, 0x0389240, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"D - MAX Orochinagi Fire", 0x0389240, 0x0389260, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"D - Electric Shock Effect", 0x0389260, 0x0389280, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"D - MAX Flash", 0x0389280, 0x03892a0, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"D - Shingo Intro Stuff", 0x03892a0, 0x03892c0, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"D - Soul Palette", 0x03892c0, 0x03892e0, indexKOF02UMSprites_KyoKusa, 0x18 },
    //{ L"D - Hidden Super Desperation Move 3", 0x03892e0, 0x0389300, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru A", 0x0389400, 0x0389420, indexKOF02UMSprites_Benimaru },
    { L"A - Raijiken Flash", 0x0389420, 0x0389440, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"A - Phantom Hurricane Effects", 0x0389440, 0x0389460, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"A - Electric Shock Effect", 0x0389460, 0x0389480, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"A - MAX Flash", 0x0389480, 0x03894a0, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03894a0, 0x03894c0, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"A - Soul Palette", 0x03894c0, 0x03894e0, indexKOF02UMSprites_Benimaru, 0x18 },
    //{ L"A - Hidden Super Desperation Move 3", 0x03894e0, 0x0389500, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru B", 0x0389600, 0x0389620, indexKOF02UMSprites_Benimaru },
    { L"B - Raijiken Flash", 0x0389620, 0x0389640, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"B - Phantom Hurricane Effects", 0x0389640, 0x0389660, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"B - Electric Shock Effect", 0x0389660, 0x0389680, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"B - MAX Flash", 0x0389680, 0x03896a0, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03896a0, 0x03896c0, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"B - Soul Palette", 0x03896c0, 0x03896e0, indexKOF02UMSprites_Benimaru, 0x18 },
    //{ L"B - Hidden Super Desperation Move 3", 0x03896e0, 0x0389700, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru C", 0x0389800, 0x0389820, indexKOF02UMSprites_Benimaru },
    { L"C - Raijiken Flash", 0x0389820, 0x0389840, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"C - Phantom Hurricane Effects", 0x0389840, 0x0389860, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"C - Electric Shock Effect", 0x0389860, 0x0389880, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"C - MAX Flash", 0x0389880, 0x03898a0, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03898a0, 0x03898c0, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"C - Soul Palette", 0x03898c0, 0x03898e0, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03898e0, 0x0389900, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru D", 0x0389a00, 0x0389a20, indexKOF02UMSprites_Benimaru },
    { L"D - Raijiken Flash", 0x0389a20, 0x0389a40, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"D - Phantom Hurricane Effects", 0x0389a40, 0x0389a60, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"D - Electric Shock Effect", 0x0389a60, 0x0389a80, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"D - MAX Flash", 0x0389a80, 0x0389aa0, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0389aa0, 0x0389ac0, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"D - Soul Palette", 0x0389ac0, 0x0389ae0, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0389ae0, 0x0389b00, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_A[] =
{
    { L"Daimon A", 0x0389c00, 0x0389c20, indexKOF02UMSprites_Daimon },
    { L"A - Hidden Super Desperation Move 1", 0x0389c20, 0x0389c40, indexKOF02UMSprites_Daimon, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0389c40, 0x0389c60, indexKOF02UMSprites_Daimon, 0x00 },
    { L"A - Electric Shock Effect", 0x0389c60, 0x0389c80, indexKOF02UMSprites_Daimon, 0x18 },
    { L"A - MAX Flash", 0x0389c80, 0x0389ca0, indexKOF02UMSprites_Daimon, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0389ca0, 0x0389cc0, indexKOF02UMSprites_Daimon, 0x00 },
    { L"A - Soul Palette", 0x0389cc0, 0x0389ce0, indexKOF02UMSprites_Daimon, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0389ce0, 0x0389d00, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_B[] =
{
    { L"Daimon B", 0x0389e00, 0x0389e20, indexKOF02UMSprites_Daimon },
    { L"B - Hidden Super Desperation Move 1", 0x0389e20, 0x0389e40, indexKOF02UMSprites_Daimon, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0389e40, 0x0389e60, indexKOF02UMSprites_Daimon, 0x00 },
    { L"B - Electric Shock Effect", 0x0389e60, 0x0389e80, indexKOF02UMSprites_Daimon, 0x18 },
    { L"B - MAX Flash", 0x0389e80, 0x0389ea0, indexKOF02UMSprites_Daimon, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0389ea0, 0x0389ec0, indexKOF02UMSprites_Daimon, 0x00 },
    { L"B - Soul Palette", 0x0389ec0, 0x0389ee0, indexKOF02UMSprites_Daimon, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0389ee0, 0x0389f00, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_C[] =
{
    { L"Daimon C", 0x038a000, 0x038a020, indexKOF02UMSprites_Daimon },
    { L"C - Hidden Super Desperation Move 1", 0x038a020, 0x038a040, indexKOF02UMSprites_Daimon, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x038a040, 0x038a060, indexKOF02UMSprites_Daimon, 0x00 },
    { L"C - Electric Shock Effect", 0x038a060, 0x038a080, indexKOF02UMSprites_Daimon, 0x18 },
    { L"C - MAX Flash", 0x038a080, 0x038a0a0, indexKOF02UMSprites_Daimon, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038a0a0, 0x038a0c0, indexKOF02UMSprites_Daimon, 0x00 },
    { L"C - Soul Palette", 0x038a0c0, 0x038a0e0, indexKOF02UMSprites_Daimon, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038a0e0, 0x038a100, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_DAIMON_PALETTES_D[] =
{
    { L"Daimon D", 0x038a200, 0x038a220, indexKOF02UMSprites_Daimon },
    { L"D - Hidden Super Desperation Move 1", 0x038a220, 0x038a240, indexKOF02UMSprites_Daimon, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x038a240, 0x038a260, indexKOF02UMSprites_Daimon, 0x00 },
    { L"D - Electric Shock Effect", 0x038a260, 0x038a280, indexKOF02UMSprites_Daimon, 0x18 },
    { L"D - MAX Flash", 0x038a280, 0x038a2a0, indexKOF02UMSprites_Daimon, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038a2a0, 0x038a2c0, indexKOF02UMSprites_Daimon, 0x00 },
    { L"D - Soul Palette", 0x038a2c0, 0x038a2e0, indexKOF02UMSprites_Daimon, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038a2e0, 0x038a300, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_A[] =
{
    { L"Terry A", 0x038a400, 0x038a420, indexKOF02UMSprites_Terry },
    { L"A - Terry and Child Winpose", 0x038a420, 0x038a440, indexKOF02UMSprites_Terry, 0x19 },
    { L"A - MAX2 Trail", 0x038a440, 0x038a460, indexKOF02UMSprites_Terry, 0x0a },
    { L"A - Electric Shock Effect", 0x038a460, 0x038a480, indexKOF02UMSprites_Terry, 0x18 },
    { L"A - MAX Flash", 0x038a480, 0x038a4a0, indexKOF02UMSprites_Terry, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038a4a0, 0x038a4c0, indexKOF02UMSprites_Terry, 0x00 },
    { L"A - Soul Palette", 0x038a4c0, 0x038a4e0, indexKOF02UMSprites_Terry, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038a4e0, 0x038a500, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_B[] =
{
    { L"Terry B", 0x038a600, 0x038a620, indexKOF02UMSprites_Terry },
    { L"B - Terry and Child Winpose", 0x038a620, 0x038a640, indexKOF02UMSprites_Terry, 0x19 },
    { L"B - MAX2 Trail", 0x038a640, 0x038a660, indexKOF02UMSprites_Terry, 0x0a },
    { L"B - Electric Shock Effect", 0x038a660, 0x038a680, indexKOF02UMSprites_Terry, 0x18 },
    { L"B - MAX Flash", 0x038a680, 0x038a6a0, indexKOF02UMSprites_Terry, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038a6a0, 0x038a6c0, indexKOF02UMSprites_Terry, 0x00 },
    { L"B - Soul Palette", 0x038a6c0, 0x038a6e0, indexKOF02UMSprites_Terry, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038a6e0, 0x038a700, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_C[] =
{
    { L"Terry C", 0x038a800, 0x038a820, indexKOF02UMSprites_Terry },
    { L"C - Terry and Child Winpose", 0x038a820, 0x038a840, indexKOF02UMSprites_Terry, 0x19 },
    { L"C - MAX2 Trail", 0x038a840, 0x038a860, indexKOF02UMSprites_Terry, 0x0a },
    { L"C - Electric Shock Effect", 0x038a860, 0x038a880, indexKOF02UMSprites_Terry, 0x18 },
    { L"C - MAX Flash", 0x038a880, 0x038a8a0, indexKOF02UMSprites_Terry, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038a8a0, 0x038a8c0, indexKOF02UMSprites_Terry, 0x00 },
    { L"C - Soul Palette", 0x038a8c0, 0x038a8e0, indexKOF02UMSprites_Terry, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038a8e0, 0x038a900, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TERRY_PALETTES_D[] =
{
    { L"Terry D", 0x038aa00, 0x038aa20, indexKOF02UMSprites_Terry },
    { L"D - Terry and Child Winpose", 0x038aa20, 0x038aa40, indexKOF02UMSprites_Terry, 0x19 },
    { L"D - MAX2 Trail", 0x038aa40, 0x038aa60, indexKOF02UMSprites_Terry, 0x0a },
    { L"D - Electric Shock Effect", 0x038aa60, 0x038aa80, indexKOF02UMSprites_Terry, 0x18 },
    { L"D - MAX Flash", 0x038aa80, 0x038aaa0, indexKOF02UMSprites_Terry, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038aaa0, 0x038aac0, indexKOF02UMSprites_Terry, 0x00 },
    { L"D - Soul Palette", 0x038aac0, 0x038aae0, indexKOF02UMSprites_Terry, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038aae0, 0x038ab00, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_A[] =
{
    { L"Andy A", 0x038ac00, 0x038ac20, indexKOF02UMSprites_Andy },
    { L"A - SDM Super Sonic Swirl and MAX2", 0x038ac20, 0x038ac40, indexKOF02UMSprites_Andy, 0x11 },
    { L"A - MAX Super Sonic Swirl", 0x038ac40, 0x038ac60, indexKOF02UMSprites_Andy, 0x11 },
    { L"A - Electric Shock Effect", 0x038ac60, 0x038ac80, indexKOF02UMSprites_Andy, 0x18 },
    { L"A - MAX Flash", 0x038ac80, 0x038aca0, indexKOF02UMSprites_Andy, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038aca0, 0x038acc0, indexKOF02UMSprites_Andy, 0x00 },
    { L"A - Soul Palette", 0x038acc0, 0x038ace0, indexKOF02UMSprites_Andy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038ace0, 0x038ad00, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_B[] =
{
    { L"Andy B", 0x038ae00, 0x038ae20, indexKOF02UMSprites_Andy },
    { L"B - SDM Super Sonic Swirl and MAX2", 0x038ae20, 0x038ae40, indexKOF02UMSprites_Andy, 0x11 },
    { L"B - MAX Super Sonic Swirl", 0x038ae40, 0x038ae60, indexKOF02UMSprites_Andy, 0x11 },
    { L"B - Electric Shock Effect", 0x038ae60, 0x038ae80, indexKOF02UMSprites_Andy, 0x18 },
    { L"B - MAX Flash", 0x038ae80, 0x038aea0, indexKOF02UMSprites_Andy, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038aea0, 0x038aec0, indexKOF02UMSprites_Andy, 0x00 },
    { L"B - Soul Palette", 0x038aec0, 0x038aee0, indexKOF02UMSprites_Andy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038aee0, 0x038af00, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_C[] =
{
    { L"Andy C", 0x038b000, 0x038b020, indexKOF02UMSprites_Andy },
    { L"C - SDM Super Sonic Swirl and MAX2", 0x038b020, 0x038b040, indexKOF02UMSprites_Andy, 0x11 },
    { L"C - MAX Super Sonic Swirl", 0x038b040, 0x038b060, indexKOF02UMSprites_Andy, 0x11 },
    { L"C - Electric Shock Effect", 0x038b060, 0x038b080, indexKOF02UMSprites_Andy, 0x18 },
    { L"C - MAX Flash", 0x038b080, 0x038b0a0, indexKOF02UMSprites_Andy, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038b0a0, 0x038b0c0, indexKOF02UMSprites_Andy, 0x00 },
    { L"C - Soul Palette", 0x038b0c0, 0x038b0e0, indexKOF02UMSprites_Andy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038b0e0, 0x038b100, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANDY_PALETTES_D[] =
{
    { L"Andy D", 0x038b200, 0x038b220, indexKOF02UMSprites_Andy },
    { L"D - SDM Super Sonic Swirl and MAX2", 0x038b220, 0x038b240, indexKOF02UMSprites_Andy, 0x11 },
    { L"D - MAX Super Sonic Swirl", 0x038b240, 0x038b260, indexKOF02UMSprites_Andy, 0x11 },
    { L"D - Electric Shock Effect", 0x038b260, 0x038b280, indexKOF02UMSprites_Andy, 0x18 },
    { L"D - MAX Flash", 0x038b280, 0x038b2a0, indexKOF02UMSprites_Andy, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038b2a0, 0x038b2c0, indexKOF02UMSprites_Andy, 0x00 },
    { L"D - Soul Palette", 0x038b2c0, 0x038b2e0, indexKOF02UMSprites_Andy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038b2e0, 0x038b300, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_A[] =
{
    { L"Joe A", 0x038b400, 0x038b420, indexKOF02UMSprites_Joe },
    { L"A - Hidden Super Desperation Move 1", 0x038b420, 0x038b440, indexKOF02UMSprites_Joe, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x038b440, 0x038b460, indexKOF02UMSprites_Joe, 0x00 },
    { L"A - Electric Shock Effect", 0x038b460, 0x038b480, indexKOF02UMSprites_Joe, 0x18 },
    { L"A - MAX Flash", 0x038b480, 0x038b4a0, indexKOF02UMSprites_Joe, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038b4a0, 0x038b4c0, indexKOF02UMSprites_Joe, 0x00 },
    { L"A - Soul Palette", 0x038b4c0, 0x038b4e0, indexKOF02UMSprites_Joe, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038b4e0, 0x038b500, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_B[] =
{
    { L"Joe B", 0x038b600, 0x038b620, indexKOF02UMSprites_Joe },
    { L"B - Hidden Super Desperation Move 1", 0x038b620, 0x038b640, indexKOF02UMSprites_Joe, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x038b640, 0x038b660, indexKOF02UMSprites_Joe, 0x00 },
    { L"B - Electric Shock Effect", 0x038b660, 0x038b680, indexKOF02UMSprites_Joe, 0x18 },
    { L"B - MAX Flash", 0x038b680, 0x038b6a0, indexKOF02UMSprites_Joe, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038b6a0, 0x038b6c0, indexKOF02UMSprites_Joe, 0x00 },
    { L"B - Soul Palette", 0x038b6c0, 0x038b6e0, indexKOF02UMSprites_Joe, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038b6e0, 0x038b700, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_C[] =
{
    { L"Joe C", 0x038b800, 0x038b820, indexKOF02UMSprites_Joe },
    { L"C - Hidden Super Desperation Move 1", 0x038b820, 0x038b840, indexKOF02UMSprites_Joe, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x038b840, 0x038b860, indexKOF02UMSprites_Joe, 0x00 },
    { L"C - Electric Shock Effect", 0x038b860, 0x038b880, indexKOF02UMSprites_Joe, 0x18 },
    { L"C - MAX Flash", 0x038b880, 0x038b8a0, indexKOF02UMSprites_Joe, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038b8a0, 0x038b8c0, indexKOF02UMSprites_Joe, 0x00 },
    { L"C - Soul Palette", 0x038b8c0, 0x038b8e0, indexKOF02UMSprites_Joe, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038b8e0, 0x038b900, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_JOE_PALETTES_D[] =
{
    { L"Joe D", 0x038ba00, 0x038ba20, indexKOF02UMSprites_Joe },
    { L"D - Hidden Super Desperation Move 1", 0x038ba20, 0x038ba40, indexKOF02UMSprites_Joe, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x038ba40, 0x038ba60, indexKOF02UMSprites_Joe, 0x00 },
    { L"D - Electric Shock Effect", 0x038ba60, 0x038ba80, indexKOF02UMSprites_Joe, 0x18 },
    { L"D - MAX Flash", 0x038ba80, 0x038baa0, indexKOF02UMSprites_Joe, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038baa0, 0x038bac0, indexKOF02UMSprites_Joe, 0x00 },
    { L"D - Soul Palette", 0x038bac0, 0x038bae0, indexKOF02UMSprites_Joe, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038bae0, 0x038bb00, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_A[] =
{
    { L"Kim A", 0x038bc00, 0x038bc20, indexKOF02UMSprites_Kim },
    { L"A - Hidden Super Desperation Move 1", 0x038bc20, 0x038bc40, indexKOF02UMSprites_Kim, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x038bc40, 0x038bc60, indexKOF02UMSprites_Kim, 0x00 },
    { L"A - Electric Shock Effect", 0x038bc60, 0x038bc80, indexKOF02UMSprites_Kim, 0x18 },
    { L"A - MAX Flash", 0x038bc80, 0x038bca0, indexKOF02UMSprites_Kim, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038bca0, 0x038bcc0, indexKOF02UMSprites_Kim, 0x00 },
    { L"A - Soul Palette", 0x038bcc0, 0x038bce0, indexKOF02UMSprites_Kim, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038bce0, 0x038bd00, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_B[] =
{
    { L"Kim B", 0x038be00, 0x038be20, indexKOF02UMSprites_Kim },
    { L"B - Hidden Super Desperation Move 1", 0x038be20, 0x038be40, indexKOF02UMSprites_Kim, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x038be40, 0x038be60, indexKOF02UMSprites_Kim, 0x00 },
    { L"B - Electric Shock Effect", 0x038be60, 0x038be80, indexKOF02UMSprites_Kim, 0x18 },
    { L"B - MAX Flash", 0x038be80, 0x038bea0, indexKOF02UMSprites_Kim, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038bea0, 0x038bec0, indexKOF02UMSprites_Kim, 0x00 },
    { L"B - Soul Palette", 0x038bec0, 0x038bee0, indexKOF02UMSprites_Kim, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038bee0, 0x038bf00, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_C[] =
{
    { L"Kim C", 0x038c000, 0x038c020, indexKOF02UMSprites_Kim },
    { L"C - Hidden Super Desperation Move 1", 0x038c020, 0x038c040, indexKOF02UMSprites_Kim, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x038c040, 0x038c060, indexKOF02UMSprites_Kim, 0x00 },
    { L"C - Electric Shock Effect", 0x038c060, 0x038c080, indexKOF02UMSprites_Kim, 0x18 },
    { L"C - MAX Flash", 0x038c080, 0x038c0a0, indexKOF02UMSprites_Kim, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038c0a0, 0x038c0c0, indexKOF02UMSprites_Kim, 0x00 },
    { L"C - Soul Palette", 0x038c0c0, 0x038c0e0, indexKOF02UMSprites_Kim, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038c0e0, 0x038c100, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KIM_PALETTES_D[] =
{
    { L"Kim D", 0x038c200, 0x038c220, indexKOF02UMSprites_Kim },
    { L"D - Hidden Super Desperation Move 1", 0x038c220, 0x038c240, indexKOF02UMSprites_Kim, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x038c240, 0x038c260, indexKOF02UMSprites_Kim, 0x00 },
    { L"D - Electric Shock Effect", 0x038c260, 0x038c280, indexKOF02UMSprites_Kim, 0x18 },
    { L"D - MAX Flash", 0x038c280, 0x038c2a0, indexKOF02UMSprites_Kim, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038c2a0, 0x038c2c0, indexKOF02UMSprites_Kim, 0x00 },
    { L"D - Soul Palette", 0x038c2c0, 0x038c2e0, indexKOF02UMSprites_Kim, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038c2e0, 0x038c300, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_A[] =
{
    { L"Chang A", 0x038c400, 0x038c420, indexKOF02UMSprites_Chang },
    { L"A - Hidden Super Desperation Move 1", 0x038c420, 0x038c440, indexKOF02UMSprites_Chang, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x038c440, 0x038c460, indexKOF02UMSprites_Chang, 0x00 },
    { L"A - Electric Shock Effect", 0x038c460, 0x038c480, indexKOF02UMSprites_Chang, 0x18 },
    { L"A - MAX Flash", 0x038c480, 0x038c4a0, indexKOF02UMSprites_Chang, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038c4a0, 0x038c4c0, indexKOF02UMSprites_Chang, 0x00 },
    { L"A - Soul Palette", 0x038c4c0, 0x038c4e0, indexKOF02UMSprites_Chang, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038c4e0, 0x038c500, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_B[] =
{
    { L"Chang B", 0x038c600, 0x038c620, indexKOF02UMSprites_Chang },
    { L"B - Hidden Super Desperation Move 1", 0x038c620, 0x038c640, indexKOF02UMSprites_Chang, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x038c640, 0x038c660, indexKOF02UMSprites_Chang, 0x00 },
    { L"B - Electric Shock Effect", 0x038c660, 0x038c680, indexKOF02UMSprites_Chang, 0x18 },
    { L"B - MAX Flash", 0x038c680, 0x038c6a0, indexKOF02UMSprites_Chang, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038c6a0, 0x038c6c0, indexKOF02UMSprites_Chang, 0x00 },
    { L"B - Soul Palette", 0x038c6c0, 0x038c6e0, indexKOF02UMSprites_Chang, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038c6e0, 0x038c700, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_C[] =
{
    { L"Chang C", 0x038c800, 0x038c820, indexKOF02UMSprites_Chang },
    { L"C - Hidden Super Desperation Move 1", 0x038c820, 0x038c840, indexKOF02UMSprites_Chang, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x038c840, 0x038c860, indexKOF02UMSprites_Chang, 0x00 },
    { L"C - Electric Shock Effect", 0x038c860, 0x038c880, indexKOF02UMSprites_Chang, 0x18 },
    { L"C - MAX Flash", 0x038c880, 0x038c8a0, indexKOF02UMSprites_Chang, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038c8a0, 0x038c8c0, indexKOF02UMSprites_Chang, 0x00 },
    { L"C - Soul Palette", 0x038c8c0, 0x038c8e0, indexKOF02UMSprites_Chang, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038c8e0, 0x038c900, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHANG_PALETTES_D[] =
{
    { L"Chang D", 0x038ca00, 0x038ca20, indexKOF02UMSprites_Chang },
    { L"D - Hidden Super Desperation Move 1", 0x038ca20, 0x038ca40, indexKOF02UMSprites_Chang, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x038ca40, 0x038ca60, indexKOF02UMSprites_Chang, 0x00 },
    { L"D - Electric Shock Effect", 0x038ca60, 0x038ca80, indexKOF02UMSprites_Chang, 0x18 },
    { L"D - MAX Flash", 0x038ca80, 0x038caa0, indexKOF02UMSprites_Chang, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038caa0, 0x038cac0, indexKOF02UMSprites_Chang, 0x00 },
    { L"D - Soul Palette", 0x038cac0, 0x038cae0, indexKOF02UMSprites_Chang, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038cae0, 0x038cb00, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_A[] =
{
    { L"Choi A", 0x038cc00, 0x038cc20, indexKOF02UMSprites_Choi },
    { L"A - Phoenix Flattener SDM Effects", 0x038cc20, 0x038cc40, indexKOF02UMSprites_Choi, 0x03 },
    { L"A - Desperation Move / Super Desperation Move", 0x038cc40, 0x038cc60, indexKOF02UMSprites_Choi, 0x00 },
    { L"A - Electric Shock Effect", 0x038cc60, 0x038cc80, indexKOF02UMSprites_Choi, 0x18 },
    { L"A - MAX Flash", 0x038cc80, 0x038cca0, indexKOF02UMSprites_Choi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038cca0, 0x038ccc0, indexKOF02UMSprites_Choi, 0x00 },
    { L"A - Soul Palette", 0x038ccc0, 0x038cce0, indexKOF02UMSprites_Choi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038cce0, 0x038cd00, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_B[] =
{
    { L"Choi B", 0x038ce00, 0x038ce20, indexKOF02UMSprites_Choi },
    { L"B - Phoenix Flattener SDM Effects", 0x038ce20, 0x038ce40, indexKOF02UMSprites_Choi, 0x03 },
    { L"B - Desperation Move / Super Desperation Move", 0x038ce40, 0x038ce60, indexKOF02UMSprites_Choi, 0x00 },
    { L"B - Electric Shock Effect", 0x038ce60, 0x038ce80, indexKOF02UMSprites_Choi, 0x18 },
    { L"B - MAX Flash", 0x038ce80, 0x038cea0, indexKOF02UMSprites_Choi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038cea0, 0x038cec0, indexKOF02UMSprites_Choi, 0x00 },
    { L"B - Soul Palette", 0x038cec0, 0x038cee0, indexKOF02UMSprites_Choi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038cee0, 0x038cf00, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_C[] =
{
    { L"Choi C", 0x038d000, 0x038d020, indexKOF02UMSprites_Choi },
    { L"C - Phoenix Flattener SDM Effects", 0x038d020, 0x038d040, indexKOF02UMSprites_Choi, 0x03 },
    { L"C - Desperation Move / Super Desperation Move", 0x038d040, 0x038d060, indexKOF02UMSprites_Choi, 0x00 },
    { L"C - Electric Shock Effect", 0x038d060, 0x038d080, indexKOF02UMSprites_Choi, 0x18 },
    { L"C - MAX Flash", 0x038d080, 0x038d0a0, indexKOF02UMSprites_Choi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038d0a0, 0x038d0c0, indexKOF02UMSprites_Choi, 0x00 },
    { L"C - Soul Palette", 0x038d0c0, 0x038d0e0, indexKOF02UMSprites_Choi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038d0e0, 0x038d100, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHOI_PALETTES_D[] =
{
    { L"Choi D", 0x038d200, 0x038d220, indexKOF02UMSprites_Choi },
    { L"D - Phoenix Flattener SDM Effects", 0x038d220, 0x038d240, indexKOF02UMSprites_Choi, 0x03 },
    { L"D - Desperation Move / Super Desperation Move", 0x038d240, 0x038d260, indexKOF02UMSprites_Choi, 0x00 },
    { L"D - Electric Shock Effect", 0x038d260, 0x038d280, indexKOF02UMSprites_Choi, 0x18 },
    { L"D - MAX Flash", 0x038d280, 0x038d2a0, indexKOF02UMSprites_Choi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038d2a0, 0x038d2c0, indexKOF02UMSprites_Choi, 0x00 },
    { L"D - Soul Palette", 0x038d2c0, 0x038d2e0, indexKOF02UMSprites_Choi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038d2e0, 0x038d300, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_A[] =
{
    { L"Athena A", 0x038d400, 0x038d420, indexKOF02UMSprites_Athena },
    { L"A - Athena Transformations", 0x038d420, 0x038d440, indexKOF02UMSprites_Athena, 0x19 },
    { L"A - MAX Shining Crystal Bit", 0x038d440, 0x038d460, indexKOF02UMSprites_Athena, 0x00 },
    { L"A - Electric Shock Effect", 0x038d460, 0x038d480, indexKOF02UMSprites_Athena, 0x18 },
    { L"A - MAX Flash", 0x038d480, 0x038d4a0, indexKOF02UMSprites_Athena, 0x08 },
    { L"A - Portal Stuff", 0x038d4a0, 0x038d4c0, indexKOF02UMSprites_Athena, 0x02 },
    { L"A - Soul Palette", 0x038d4c0, 0x038d4e0, indexKOF02UMSprites_Athena, 0x18 },
    { L"A - Intro Stuff and MAX2 Finisher", 0x038d4e0, 0x038d500, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_B[] =
{
    { L"Athena B", 0x038d600, 0x038d620, indexKOF02UMSprites_Athena },
    { L"B - Athena Transformations", 0x038d620, 0x038d640, indexKOF02UMSprites_Athena, 0x19 },
    { L"B - MAX Shining Crystal Bit", 0x038d640, 0x038d660, indexKOF02UMSprites_Athena, 0x00 },
    { L"B - Electric Shock Effect", 0x038d660, 0x038d680, indexKOF02UMSprites_Athena, 0x18 },
    { L"B - MAX Flash", 0x038d680, 0x038d6a0, indexKOF02UMSprites_Athena, 0x08 },
    { L"B - Portal Stuff", 0x038d6a0, 0x038d6c0, indexKOF02UMSprites_Athena, 0x02 },
    { L"B - Soul Palette", 0x038d6c0, 0x038d6e0, indexKOF02UMSprites_Athena, 0x18 },
    { L"B - Intro Stuff and MAX2 Finisher", 0x038d6e0, 0x038d700, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_C[] =
{
    { L"Athena C", 0x038d800, 0x038d820, indexKOF02UMSprites_Athena },
    { L"C - Athena Transformations", 0x038d820, 0x038d840, indexKOF02UMSprites_Athena, 0x19 },
    { L"C - MAX Shining Crystal Bit", 0x038d840, 0x038d860, indexKOF02UMSprites_Athena, 0x00 },
    { L"C - Electric Shock Effect", 0x038d860, 0x038d880, indexKOF02UMSprites_Athena, 0x18 },
    { L"C - MAX Flash", 0x038d880, 0x038d8a0, indexKOF02UMSprites_Athena, 0x08 },
    { L"C - Portal Stuff", 0x038d8a0, 0x038d8c0, indexKOF02UMSprites_Athena, 0x02 },
    { L"C - Soul Palette", 0x038d8c0, 0x038d8e0, indexKOF02UMSprites_Athena, 0x18 },
    { L"C - Intro Stuff and MAX2 Finisher", 0x038d8e0, 0x038d900, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ATHENA_PALETTES_D[] =
{
    { L"Athena D", 0x038da00, 0x038da20, indexKOF02UMSprites_Athena },
    { L"D - Athena Transformations", 0x038da20, 0x038da40, indexKOF02UMSprites_Athena, 0x19 },
    { L"D - MAX Shining Crystal Bit", 0x038da40, 0x038da60, indexKOF02UMSprites_Athena, 0x00 },
    { L"D - Electric Shock Effect", 0x038da60, 0x038da80, indexKOF02UMSprites_Athena, 0x18 },
    { L"D - MAX Flash", 0x038da80, 0x038daa0, indexKOF02UMSprites_Athena, 0x08 },
    { L"D - Portal Stuff", 0x038daa0, 0x038dac0, indexKOF02UMSprites_Athena, 0x02 },
    { L"D - Soul Palette", 0x038dac0, 0x038dae0, indexKOF02UMSprites_Athena, 0x18 },
    { L"D - Intro Stuff and MAX2 Finisher", 0x038dae0, 0x038db00, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_A[] =
{
    { L"Kensou A", 0x038dc00, 0x038dc20, indexKOF02UMSprites_Kensou },
    { L"A - MAX2 Power Up State", 0x038dc20, 0x038dc40, indexKOF02UMSprites_Kensou, 0x0a },
    { L"A - Desperation Move / Super Desperation Move", 0x038dc40, 0x038dc60, indexKOF02UMSprites_Kensou, 0x00 },
    { L"A - Electric Shock Effect", 0x038dc60, 0x038dc80, indexKOF02UMSprites_Kensou, 0x18 },
    { L"A - MAX Flash", 0x038dc80, 0x038dca0, indexKOF02UMSprites_Kensou, 0x0a },
    { L"A - Hidden Super Desperation Move 2", 0x038dca0, 0x038dcc0, indexKOF02UMSprites_Kensou, 0x00 },
    { L"A - Soul Palette", 0x038dcc0, 0x038dce0, indexKOF02UMSprites_Kensou, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038dce0, 0x038dd00, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_B[] =
{
    { L"Kensou B", 0x038de00, 0x038de20, indexKOF02UMSprites_Kensou },
    { L"B - MAX2 Power Up State", 0x038de20, 0x038de40, indexKOF02UMSprites_Kensou, 0x0a },
    { L"B - Desperation Move / Super Desperation Move", 0x038de40, 0x038de60, indexKOF02UMSprites_Kensou, 0x00 },
    { L"B - Electric Shock Effect", 0x038de60, 0x038de80, indexKOF02UMSprites_Kensou, 0x18 },
    { L"B - MAX Flash", 0x038de80, 0x038dea0, indexKOF02UMSprites_Kensou, 0x0a },
    { L"B - Hidden Super Desperation Move 2", 0x038dea0, 0x038dec0, indexKOF02UMSprites_Kensou, 0x00 },
    { L"B - Soul Palette", 0x038dec0, 0x038dee0, indexKOF02UMSprites_Kensou, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038dee0, 0x038df00, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_C[] =
{
    { L"Kensou C", 0x038e000, 0x038e020, indexKOF02UMSprites_Kensou },
    { L"C - MAX2 Power Up State", 0x038e020, 0x038e040, indexKOF02UMSprites_Kensou, 0x0a },
    { L"C - Desperation Move / Super Desperation Move", 0x038e040, 0x038e060, indexKOF02UMSprites_Kensou, 0x00 },
    { L"C - Electric Shock Effect", 0x038e060, 0x038e080, indexKOF02UMSprites_Kensou, 0x18 },
    { L"C - MAX Flash", 0x038e080, 0x038e0a0, indexKOF02UMSprites_Kensou, 0x0a },
    { L"C - Hidden Super Desperation Move 2", 0x038e0a0, 0x038e0c0, indexKOF02UMSprites_Kensou, 0x00 },
    { L"C - Soul Palette", 0x038e0c0, 0x038e0e0, indexKOF02UMSprites_Kensou, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038e0e0, 0x038e100, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KENSOU_PALETTES_D[] =
{
    { L"Kensou D", 0x038e200, 0x038e220, indexKOF02UMSprites_Kensou },
    { L"D - MAX2 Power Up State", 0x038e220, 0x038e240, indexKOF02UMSprites_Kensou, 0x0a },
    { L"D - Desperation Move / Super Desperation Move", 0x038e240, 0x038e260, indexKOF02UMSprites_Kensou, 0x00 },
    { L"D - Electric Shock Effect", 0x038e260, 0x038e280, indexKOF02UMSprites_Kensou, 0x18 },
    { L"D - MAX Flash", 0x038e280, 0x038e2a0, indexKOF02UMSprites_Kensou, 0x0a },
    { L"D - Hidden Super Desperation Move 2", 0x038e2a0, 0x038e2c0, indexKOF02UMSprites_Kensou, 0x00 },
    { L"D - Soul Palette", 0x038e2c0, 0x038e2e0, indexKOF02UMSprites_Kensou, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038e2e0, 0x038e300, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_A[] =
{
    { L"Chin A", 0x038e400, 0x038e420, indexKOF02UMSprites_Chin },
    { L"A - Fire Palette", 0x038e420, 0x038e440, indexKOF02UMSprites_Chin, 0x09 },
    { L"A - Desperation Move / Super Desperation Move", 0x038e440, 0x038e460, indexKOF02UMSprites_Chin, 0x00 },
    { L"A - Electric Shock Effect", 0x038e460, 0x038e480, indexKOF02UMSprites_Chin, 0x18 },
    { L"A - MAX Flash", 0x038e480, 0x038e4a0, indexKOF02UMSprites_Chin, 0x09 },
    { L"A - Hidden Super Desperation Move 2", 0x038e4a0, 0x038e4c0, indexKOF02UMSprites_Chin, 0x00 },
    { L"A - Soul Palette", 0x038e4c0, 0x038e4e0, indexKOF02UMSprites_Chin, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038e4e0, 0x038e500, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_B[] =
{
    { L"Chin B", 0x038e600, 0x038e620, indexKOF02UMSprites_Chin },
    { L"B - Fire Palette", 0x038e620, 0x038e640, indexKOF02UMSprites_Chin, 0x09 },
    { L"B - Desperation Move / Super Desperation Move", 0x038e640, 0x038e660, indexKOF02UMSprites_Chin, 0x00 },
    { L"B - Electric Shock Effect", 0x038e660, 0x038e680, indexKOF02UMSprites_Chin, 0x18 },
    { L"B - MAX Flash", 0x038e680, 0x038e6a0, indexKOF02UMSprites_Chin, 0x09 },
    { L"B - Hidden Super Desperation Move 2", 0x038e6a0, 0x038e6c0, indexKOF02UMSprites_Chin, 0x00 },
    { L"B - Soul Palette", 0x038e6c0, 0x038e6e0, indexKOF02UMSprites_Chin, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038e6e0, 0x038e700, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_C[] =
{
    { L"Chin C", 0x038e800, 0x038e820, indexKOF02UMSprites_Chin },
    { L"C - Fire Palette", 0x038e820, 0x038e840, indexKOF02UMSprites_Chin, 0x09 },
    { L"C - Desperation Move / Super Desperation Move", 0x038e840, 0x038e860, indexKOF02UMSprites_Chin, 0x00 },
    { L"C - Electric Shock Effect", 0x038e860, 0x038e880, indexKOF02UMSprites_Chin, 0x18 },
    { L"C - MAX Flash", 0x038e880, 0x038e8a0, indexKOF02UMSprites_Chin, 0x09 },
    { L"C - Hidden Super Desperation Move 2", 0x038e8a0, 0x038e8c0, indexKOF02UMSprites_Chin, 0x00 },
    { L"C - Soul Palette", 0x038e8c0, 0x038e8e0, indexKOF02UMSprites_Chin, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038e8e0, 0x038e900, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHIN_PALETTES_D[] =
{
    { L"Chin D", 0x038ea00, 0x038ea20, indexKOF02UMSprites_Chin },
    { L"D - Fire Palette", 0x038ea20, 0x038ea40, indexKOF02UMSprites_Chin, 0x09 },
    { L"D - Desperation Move / Super Desperation Move", 0x038ea40, 0x038ea60, indexKOF02UMSprites_Chin, 0x00 },
    { L"D - Electric Shock Effect", 0x038ea60, 0x038ea80, indexKOF02UMSprites_Chin, 0x18 },
    { L"D - MAX Flash", 0x038ea80, 0x038eaa0, indexKOF02UMSprites_Chin, 0x09 },
    { L"D - Hidden Super Desperation Move 2", 0x038eaa0, 0x038eac0, indexKOF02UMSprites_Chin, 0x00 },
    { L"D - Soul Palette", 0x038eac0, 0x038eae0, indexKOF02UMSprites_Chin, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038eae0, 0x038eb00, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_A[] =
{
    { L"Leona A", 0x038ec00, 0x038ec20, indexKOF02UMSprites_Leona },
    { L"A - Jump Blowback Attack", 0x038ec20, 0x038ec40, indexKOF02UMSprites_Leona, 0x06 },
    { L"A - Desperation Move / Super Desperation Move", 0x038ec40, 0x038ec60, indexKOF02UMSprites_Leona, 0x00 },
    { L"A - Electric Shock Effect", 0x038ec60, 0x038ec80, indexKOF02UMSprites_Leona, 0x18 },
    { L"A - MAX Flash", 0x038ec80, 0x038eca0, indexKOF02UMSprites_Leona, 0x08 },
    { L"A - Orochi Leona", 0x038eca0, 0x038ecc0, indexKOF02UMSprites_Leona, 0x1b },
    { L"A - Soul Palette", 0x038ecc0, 0x038ece0, indexKOF02UMSprites_Leona, 0x18 },
    { L"A - Intro Stuff", 0x038ece0, 0x038ed00, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_B[] =
{
    { L"Leona B", 0x038ee00, 0x038ee20, indexKOF02UMSprites_Leona },
    { L"B - Jump Blowback Attack", 0x038ee20, 0x038ee40, indexKOF02UMSprites_Leona, 0x06 },
    { L"B - Desperation Move / Super Desperation Move", 0x038ee40, 0x038ee60, indexKOF02UMSprites_Leona, 0x00 },
    { L"B - Electric Shock Effect", 0x038ee60, 0x038ee80, indexKOF02UMSprites_Leona, 0x18 },
    { L"B - MAX Flash", 0x038ee80, 0x038eea0, indexKOF02UMSprites_Leona, 0x08 },
    { L"B - Orochi Leona", 0x038eea0, 0x038eec0, indexKOF02UMSprites_Leona, 0x1b },
    { L"B - Soul Palette", 0x038eec0, 0x038eee0, indexKOF02UMSprites_Leona, 0x18 },
    { L"B - Intro Stuff", 0x038eee0, 0x038ef00, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_C[] =
{
    { L"Leona C", 0x038f000, 0x038f020, indexKOF02UMSprites_Leona },
    { L"C - Jump Blowback Attack", 0x038f020, 0x038f040, indexKOF02UMSprites_Leona, 0x06 },
    { L"C - Desperation Move / Super Desperation Move", 0x038f040, 0x038f060, indexKOF02UMSprites_Leona, 0x00 },
    { L"C - Electric Shock Effect", 0x038f060, 0x038f080, indexKOF02UMSprites_Leona, 0x18 },
    { L"C - MAX Flash", 0x038f080, 0x038f0a0, indexKOF02UMSprites_Leona, 0x08 },
    { L"C - Orochi Leona", 0x038f0a0, 0x038f0c0, indexKOF02UMSprites_Leona, 0x1b },
    { L"C - Soul Palette", 0x038f0c0, 0x038f0e0, indexKOF02UMSprites_Leona, 0x18 },
    { L"C - Intro Stuff", 0x038f0e0, 0x038f100, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_LEONA_PALETTES_D[] =
{
    { L"Leona D", 0x038f200, 0x038f220, indexKOF02UMSprites_Leona },
    { L"D - Jump Blowback Attack", 0x038f220, 0x038f240, indexKOF02UMSprites_Leona, 0x06 },
    { L"D - Desperation Move / Super Desperation Move", 0x038f240, 0x038f260, indexKOF02UMSprites_Leona, 0x00 },
    { L"D - Electric Shock Effect", 0x038f260, 0x038f280, indexKOF02UMSprites_Leona, 0x18 },
    { L"D - MAX Flash", 0x038f280, 0x038f2a0, indexKOF02UMSprites_Leona, 0x08 },
    { L"D - Orochi Leona", 0x038f2a0, 0x038f2c0, indexKOF02UMSprites_Leona, 0x1b },
    { L"D - Soul Palette", 0x038f2c0, 0x038f2e0, indexKOF02UMSprites_Leona, 0x18 },
    { L"D - Intro Stuff", 0x038f2e0, 0x038f300, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_A[] =
{
    { L"Ralf A", 0x038f400, 0x038f420, indexKOF02UMSprites_Ralf },
    { L"A - Hidden Super Desperation Move 1", 0x038f420, 0x038f440, indexKOF02UMSprites_Ralf, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x038f440, 0x038f460, indexKOF02UMSprites_Ralf, 0x00 },
    { L"A - Electric Shock Effect", 0x038f460, 0x038f480, indexKOF02UMSprites_Ralf, 0x18 },
    { L"A - MAX Flash", 0x038f480, 0x038f4a0, indexKOF02UMSprites_Ralf, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038f4a0, 0x038f4c0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"A - Soul Palette", 0x038f4c0, 0x038f4e0, indexKOF02UMSprites_Ralf, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038f4e0, 0x038f500, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_B[] =
{
    { L"Ralf B", 0x038f600, 0x038f620, indexKOF02UMSprites_Ralf },
    { L"B - Hidden Super Desperation Move 1", 0x038f620, 0x038f640, indexKOF02UMSprites_Ralf, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x038f640, 0x038f660, indexKOF02UMSprites_Ralf, 0x00 },
    { L"B - Electric Shock Effect", 0x038f660, 0x038f680, indexKOF02UMSprites_Ralf, 0x18 },
    { L"B - MAX Flash", 0x038f680, 0x038f6a0, indexKOF02UMSprites_Ralf, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038f6a0, 0x038f6c0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"B - Soul Palette", 0x038f6c0, 0x038f6e0, indexKOF02UMSprites_Ralf, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038f6e0, 0x038f700, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_C[] =
{
    { L"Ralf C", 0x038f800, 0x038f820, indexKOF02UMSprites_Ralf },
    { L"C - Hidden Super Desperation Move 1", 0x038f820, 0x038f840, indexKOF02UMSprites_Ralf, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x038f840, 0x038f860, indexKOF02UMSprites_Ralf, 0x00 },
    { L"C - Electric Shock Effect", 0x038f860, 0x038f880, indexKOF02UMSprites_Ralf, 0x18 },
    { L"C - MAX Flash", 0x038f880, 0x038f8a0, indexKOF02UMSprites_Ralf, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x038f8a0, 0x038f8c0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"C - Soul Palette", 0x038f8c0, 0x038f8e0, indexKOF02UMSprites_Ralf, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x038f8e0, 0x038f900, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RALF_PALETTES_D[] =
{
    { L"Ralf D", 0x038fa00, 0x038fa20, indexKOF02UMSprites_Ralf },
    { L"D - Hidden Super Desperation Move 1", 0x038fa20, 0x038fa40, indexKOF02UMSprites_Ralf, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x038fa40, 0x038fa60, indexKOF02UMSprites_Ralf, 0x00 },
    { L"D - Electric Shock Effect", 0x038fa60, 0x038fa80, indexKOF02UMSprites_Ralf, 0x18 },
    { L"D - MAX Flash", 0x038fa80, 0x038faa0, indexKOF02UMSprites_Ralf, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x038faa0, 0x038fac0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"D - Soul Palette", 0x038fac0, 0x038fae0, indexKOF02UMSprites_Ralf, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x038fae0, 0x038fb00, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_A[] =
{
    { L"Clark A", 0x038fc00, 0x038fc20, indexKOF02UMSprites_Clark },
    { L"A - Hidden Super Desperation Move 1", 0x038fc20, 0x038fc40, indexKOF02UMSprites_Clark, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x038fc40, 0x038fc60, indexKOF02UMSprites_Clark, 0x00 },
    { L"A - Electric Shock Effect", 0x038fc60, 0x038fc80, indexKOF02UMSprites_Clark, 0x18 },
    { L"A - MAX Flash", 0x038fc80, 0x038fca0, indexKOF02UMSprites_Clark, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x038fca0, 0x038fcc0, indexKOF02UMSprites_Clark, 0x00 },
    { L"A - Soul Palette", 0x038fcc0, 0x038fce0, indexKOF02UMSprites_Clark, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x038fce0, 0x038fd00, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_B[] =
{
    { L"Clark B", 0x038fe00, 0x038fe20, indexKOF02UMSprites_Clark },
    { L"B - Hidden Super Desperation Move 1", 0x038fe20, 0x038fe40, indexKOF02UMSprites_Clark, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x038fe40, 0x038fe60, indexKOF02UMSprites_Clark, 0x00 },
    { L"B - Electric Shock Effect", 0x038fe60, 0x038fe80, indexKOF02UMSprites_Clark, 0x18 },
    { L"B - MAX Flash", 0x038fe80, 0x038fea0, indexKOF02UMSprites_Clark, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x038fea0, 0x038fec0, indexKOF02UMSprites_Clark, 0x00 },
    { L"B - Soul Palette", 0x038fec0, 0x038fee0, indexKOF02UMSprites_Clark, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x038fee0, 0x038ff00, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_C[] =
{
    { L"Clark C", 0x0390000, 0x0390020, indexKOF02UMSprites_Clark },
    { L"C - Hidden Super Desperation Move 1", 0x0390020, 0x0390040, indexKOF02UMSprites_Clark, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0390040, 0x0390060, indexKOF02UMSprites_Clark, 0x00 },
    { L"C - Electric Shock Effect", 0x0390060, 0x0390080, indexKOF02UMSprites_Clark, 0x18 },
    { L"C - MAX Flash", 0x0390080, 0x03900a0, indexKOF02UMSprites_Clark, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03900a0, 0x03900c0, indexKOF02UMSprites_Clark, 0x00 },
    { L"C - Soul Palette", 0x03900c0, 0x03900e0, indexKOF02UMSprites_Clark, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03900e0, 0x0390100, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CLARK_PALETTES_D[] =
{
    { L"Clark D", 0x0390200, 0x0390220, indexKOF02UMSprites_Clark },
    { L"D - Hidden Super Desperation Move 1", 0x0390220, 0x0390240, indexKOF02UMSprites_Clark, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0390240, 0x0390260, indexKOF02UMSprites_Clark, 0x00 },
    { L"D - Electric Shock Effect", 0x0390260, 0x0390280, indexKOF02UMSprites_Clark, 0x18 },
    { L"D - MAX Flash", 0x0390280, 0x03902a0, indexKOF02UMSprites_Clark, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03902a0, 0x03902c0, indexKOF02UMSprites_Clark, 0x00 },
    { L"D - Soul Palette", 0x03902c0, 0x03902e0, indexKOF02UMSprites_Clark, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03902e0, 0x0390300, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_A[] =
{
    { L"Ryo A", 0x0390400, 0x0390420, indexKOF02UMSprites_Ryo },
    { L"A - Hidden Super Desperation Move 1", 0x0390420, 0x0390440, indexKOF02UMSprites_Ryo, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0390440, 0x0390460, indexKOF02UMSprites_Ryo, 0x00 },
    { L"A - Electric Shock Effect", 0x0390460, 0x0390480, indexKOF02UMSprites_Ryo, 0x18 },
    { L"A - MAX Flash", 0x0390480, 0x03904a0, indexKOF02UMSprites_Ryo, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03904a0, 0x03904c0, indexKOF02UMSprites_Ryo, 0x00 },
    { L"A - Soul Palette", 0x03904c0, 0x03904e0, indexKOF02UMSprites_Ryo, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03904e0, 0x0390500, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_B[] =
{
    { L"Ryo B", 0x0390600, 0x0390620, indexKOF02UMSprites_Ryo },
    { L"B - Hidden Super Desperation Move 1", 0x0390620, 0x0390640, indexKOF02UMSprites_Ryo, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0390640, 0x0390660, indexKOF02UMSprites_Ryo, 0x00 },
    { L"B - Electric Shock Effect", 0x0390660, 0x0390680, indexKOF02UMSprites_Ryo, 0x18 },
    { L"B - MAX Flash", 0x0390680, 0x03906a0, indexKOF02UMSprites_Ryo, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03906a0, 0x03906c0, indexKOF02UMSprites_Ryo, 0x00 },
    { L"B - Soul Palette", 0x03906c0, 0x03906e0, indexKOF02UMSprites_Ryo, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03906e0, 0x0390700, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_C[] =
{
    { L"Ryo C", 0x0390800, 0x0390820, indexKOF02UMSprites_Ryo },
    { L"C - Hidden Super Desperation Move 1", 0x0390820, 0x0390840, indexKOF02UMSprites_Ryo, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0390840, 0x0390860, indexKOF02UMSprites_Ryo, 0x00 },
    { L"C - Electric Shock Effect", 0x0390860, 0x0390880, indexKOF02UMSprites_Ryo, 0x18 },
    { L"C - MAX Flash", 0x0390880, 0x03908a0, indexKOF02UMSprites_Ryo, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03908a0, 0x03908c0, indexKOF02UMSprites_Ryo, 0x00 },
    { L"C - Soul Palette", 0x03908c0, 0x03908e0, indexKOF02UMSprites_Ryo, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03908e0, 0x0390900, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RYO_PALETTES_D[] =
{
    { L"Ryo D", 0x0390a00, 0x0390a20, indexKOF02UMSprites_Ryo },
    { L"D - Hidden Super Desperation Move 1", 0x0390a20, 0x0390a40, indexKOF02UMSprites_Ryo, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0390a40, 0x0390a60, indexKOF02UMSprites_Ryo, 0x00 },
    { L"D - Electric Shock Effect", 0x0390a60, 0x0390a80, indexKOF02UMSprites_Ryo, 0x18 },
    { L"D - MAX Flash", 0x0390a80, 0x0390aa0, indexKOF02UMSprites_Ryo, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0390aa0, 0x0390ac0, indexKOF02UMSprites_Ryo, 0x00 },
    { L"D - Soul Palette", 0x0390ac0, 0x0390ae0, indexKOF02UMSprites_Ryo, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0390ae0, 0x0390b00, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_A[] =
{
    { L"Robert A", 0x0390c00, 0x0390c20, indexKOF02UMSprites_Robert },
    { L"A - Hidden Super Desperation Move 1", 0x0390c20, 0x0390c40, indexKOF02UMSprites_Robert, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0390c40, 0x0390c60, indexKOF02UMSprites_Robert, 0x00 },
    { L"A - Electric Shock Effect", 0x0390c60, 0x0390c80, indexKOF02UMSprites_Robert, 0x18 },
    { L"A - MAX Flash", 0x0390c80, 0x0390ca0, indexKOF02UMSprites_Robert, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0390ca0, 0x0390cc0, indexKOF02UMSprites_Robert, 0x00 },
    { L"A - Soul Palette", 0x0390cc0, 0x0390ce0, indexKOF02UMSprites_Robert, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0390ce0, 0x0390d00, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_B[] =
{
    { L"Robert B", 0x0390e00, 0x0390e20, indexKOF02UMSprites_Robert },
    { L"B - Hidden Super Desperation Move 1", 0x0390e20, 0x0390e40, indexKOF02UMSprites_Robert, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0390e40, 0x0390e60, indexKOF02UMSprites_Robert, 0x00 },
    { L"B - Electric Shock Effect", 0x0390e60, 0x0390e80, indexKOF02UMSprites_Robert, 0x18 },
    { L"B - MAX Flash", 0x0390e80, 0x0390ea0, indexKOF02UMSprites_Robert, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0390ea0, 0x0390ec0, indexKOF02UMSprites_Robert, 0x00 },
    { L"B - Soul Palette", 0x0390ec0, 0x0390ee0, indexKOF02UMSprites_Robert, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0390ee0, 0x0390f00, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_C[] =
{
    { L"Robert C", 0x0391000, 0x0391020, indexKOF02UMSprites_Robert },
    { L"C - Hidden Super Desperation Move 1", 0x0391020, 0x0391040, indexKOF02UMSprites_Robert, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0391040, 0x0391060, indexKOF02UMSprites_Robert, 0x00 },
    { L"C - Electric Shock Effect", 0x0391060, 0x0391080, indexKOF02UMSprites_Robert, 0x18 },
    { L"C - MAX Flash", 0x0391080, 0x03910a0, indexKOF02UMSprites_Robert, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03910a0, 0x03910c0, indexKOF02UMSprites_Robert, 0x00 },
    { L"C - Soul Palette", 0x03910c0, 0x03910e0, indexKOF02UMSprites_Robert, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03910e0, 0x0391100, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ROBERT_PALETTES_D[] =
{
    { L"Robert D", 0x0391200, 0x0391220, indexKOF02UMSprites_Robert },
    { L"D - Hidden Super Desperation Move 1", 0x0391220, 0x0391240, indexKOF02UMSprites_Robert, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0391240, 0x0391260, indexKOF02UMSprites_Robert, 0x00 },
    { L"D - Electric Shock Effect", 0x0391260, 0x0391280, indexKOF02UMSprites_Robert, 0x18 },
    { L"D - MAX Flash", 0x0391280, 0x03912a0, indexKOF02UMSprites_Robert, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03912a0, 0x03912c0, indexKOF02UMSprites_Robert, 0x00 },
    { L"D - Soul Palette", 0x03912c0, 0x03912e0, indexKOF02UMSprites_Robert, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03912e0, 0x0391300, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_A[] =
{
    { L"Takuma A", 0x0391400, 0x0391420, indexKOF02UMSprites_Takuma },
    { L"A - Hidden Super Desperation Move 1", 0x0391420, 0x0391440, indexKOF02UMSprites_Takuma, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0391440, 0x0391460, indexKOF02UMSprites_Takuma, 0x00 },
    { L"A - Electric Shock Effect", 0x0391460, 0x0391480, indexKOF02UMSprites_Takuma, 0x18 },
    { L"A - MAX Flash", 0x0391480, 0x03914a0, indexKOF02UMSprites_Takuma, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03914a0, 0x03914c0, indexKOF02UMSprites_Takuma, 0x00 },
    { L"A - Soul Palette", 0x03914c0, 0x03914e0, indexKOF02UMSprites_Takuma, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03914e0, 0x0391500, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_B[] =
{
    { L"Takuma B", 0x0391600, 0x0391620, indexKOF02UMSprites_Takuma },
    { L"B - Hidden Super Desperation Move 1", 0x0391620, 0x0391640, indexKOF02UMSprites_Takuma, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0391640, 0x0391660, indexKOF02UMSprites_Takuma, 0x00 },
    { L"B - Electric Shock Effect", 0x0391660, 0x0391680, indexKOF02UMSprites_Takuma, 0x18 },
    { L"B - MAX Flash", 0x0391680, 0x03916a0, indexKOF02UMSprites_Takuma, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03916a0, 0x03916c0, indexKOF02UMSprites_Takuma, 0x00 },
    { L"B - Soul Palette", 0x03916c0, 0x03916e0, indexKOF02UMSprites_Takuma, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03916e0, 0x0391700, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_C[] =
{
    { L"Takuma C", 0x0391800, 0x0391820, indexKOF02UMSprites_Takuma },
    { L"C - Hidden Super Desperation Move 1", 0x0391820, 0x0391840, indexKOF02UMSprites_Takuma, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0391840, 0x0391860, indexKOF02UMSprites_Takuma, 0x00 },
    { L"C - Electric Shock Effect", 0x0391860, 0x0391880, indexKOF02UMSprites_Takuma, 0x18 },
    { L"C - MAX Flash", 0x0391880, 0x03918a0, indexKOF02UMSprites_Takuma, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03918a0, 0x03918c0, indexKOF02UMSprites_Takuma, 0x00 },
    { L"C - Soul Palette", 0x03918c0, 0x03918e0, indexKOF02UMSprites_Takuma, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03918e0, 0x0391900, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_TAKUMA_PALETTES_D[] =
{
    { L"Takuma D", 0x0391a00, 0x0391a20, indexKOF02UMSprites_Takuma },
    { L"D - Hidden Super Desperation Move 1", 0x0391a20, 0x0391a40, indexKOF02UMSprites_Takuma, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0391a40, 0x0391a60, indexKOF02UMSprites_Takuma, 0x00 },
    { L"D - Electric Shock Effect", 0x0391a60, 0x0391a80, indexKOF02UMSprites_Takuma, 0x18 },
    { L"D - MAX Flash", 0x0391a80, 0x0391aa0, indexKOF02UMSprites_Takuma, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0391aa0, 0x0391ac0, indexKOF02UMSprites_Takuma, 0x00 },
    { L"D - Soul Palette", 0x0391ac0, 0x0391ae0, indexKOF02UMSprites_Takuma, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0391ae0, 0x0391b00, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_A[] =
{
    { L"Mai A", 0x0391c00, 0x0391c20, indexKOF02UMSprites_Mai },
    { L"A - Hissatsu SDM Fire", 0x0391c20, 0x0391c40, indexKOF02UMSprites_Mai, 0x10 },
    { L"A - Hissatsu MAX Fire", 0x0391c40, 0x0391c60, indexKOF02UMSprites_Mai, 0x11 },
    { L"A - Electric Shock Effect", 0x0391c60, 0x0391c80, indexKOF02UMSprites_Mai, 0x18 },
    { L"A - MAX Flash", 0x0391c80, 0x0391ca0, indexKOF02UMSprites_Mai, 0x08 },
    { L"A - MAX2 Hold B Dress", 0x0391ca0, 0x0391cc0, indexKOF02UMSprites_Mai, 0x1a },
    { L"A - Soul Palette", 0x0391cc0, 0x0391ce0, indexKOF02UMSprites_Mai, 0x18 },
    { L"A - Andy Intro Stuff", 0x0391ce0, 0x0391d00, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_B[] =
{
    { L"Mai B", 0x0391e00, 0x0391e20, indexKOF02UMSprites_Mai },
    { L"B - Hissatsu SDM Fire", 0x0391e20, 0x0391e40, indexKOF02UMSprites_Mai, 0x10 },
    { L"B - Hissatsu MAX Fire", 0x0391e40, 0x0391e60, indexKOF02UMSprites_Mai, 0x11 },
    { L"B - Electric Shock Effect", 0x0391e60, 0x0391e80, indexKOF02UMSprites_Mai, 0x18 },
    { L"B - MAX Flash", 0x0391e80, 0x0391ea0, indexKOF02UMSprites_Mai, 0x08 },
    { L"B - MAX2 Hold B Dress", 0x0391ea0, 0x0391ec0, indexKOF02UMSprites_Mai, 0x1a },
    { L"B - Soul Palette", 0x0391ec0, 0x0391ee0, indexKOF02UMSprites_Mai, 0x18 },
    { L"B - Andy Intro Stuff", 0x0391ee0, 0x0391f00, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_C[] =
{
    { L"Mai C", 0x0392000, 0x0392020, indexKOF02UMSprites_Mai },
    { L"C - Hissatsu SDM Fire", 0x0392020, 0x0392040, indexKOF02UMSprites_Mai, 0x10 },
    { L"C - Hissatsu MAX Fire", 0x0392040, 0x0392060, indexKOF02UMSprites_Mai, 0x11 },
    { L"C - Electric Shock Effect", 0x0392060, 0x0392080, indexKOF02UMSprites_Mai, 0x18 },
    { L"C - MAX Flash", 0x0392080, 0x03920a0, indexKOF02UMSprites_Mai, 0x08 },
    { L"C - MAX2 Hold B Dress", 0x03920a0, 0x03920c0, indexKOF02UMSprites_Mai, 0x1a },
    { L"C - Soul Palette", 0x03920c0, 0x03920e0, indexKOF02UMSprites_Mai, 0x18 },
    { L"C - Andy Intro Stuff", 0x03920e0, 0x0392100, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_MAI_PALETTES_D[] =
{
    { L"Mai D", 0x0392200, 0x0392220, indexKOF02UMSprites_Mai },
    { L"D - Hissatsu SDM Fire", 0x0392220, 0x0392240, indexKOF02UMSprites_Mai, 0x10 },
    { L"D - Hissatsu MAX Fire", 0x0392240, 0x0392260, indexKOF02UMSprites_Mai, 0x11 },
    { L"D - Electric Shock Effect", 0x0392260, 0x0392280, indexKOF02UMSprites_Mai, 0x18 },
    { L"D - MAX Flash", 0x0392280, 0x03922a0, indexKOF02UMSprites_Mai, 0x08 },
    { L"D - MAX2 Hold B Dress", 0x03922a0, 0x03922c0, indexKOF02UMSprites_Mai, 0x1a },
    { L"D - Soul Palette", 0x03922c0, 0x03922e0, indexKOF02UMSprites_Mai, 0x18 },
    { L"D - Andy Intro Stuff", 0x03922e0, 0x0392300, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_A[] =
{
    { L"Yuri A", 0x0392400, 0x0392420, indexKOF02UMSprites_Yuri },
    { L"A - Hidden Super Desperation Move 1", 0x0392420, 0x0392440, indexKOF02UMSprites_Yuri, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0392440, 0x0392460, indexKOF02UMSprites_Yuri, 0x00 },
    { L"A - Electric Shock Effect", 0x0392460, 0x0392480, indexKOF02UMSprites_Yuri, 0x18 },
    { L"A - MAX Flash", 0x0392480, 0x03924a0, indexKOF02UMSprites_Yuri, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03924a0, 0x03924c0, indexKOF02UMSprites_Yuri, 0x00 },
    { L"A - Soul Palette", 0x03924c0, 0x03924e0, indexKOF02UMSprites_Yuri, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03924e0, 0x0392500, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_B[] =
{
    { L"Yuri B", 0x0392600, 0x0392620, indexKOF02UMSprites_Yuri },
    { L"B - Hidden Super Desperation Move 1", 0x0392620, 0x0392640, indexKOF02UMSprites_Yuri, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0392640, 0x0392660, indexKOF02UMSprites_Yuri, 0x00 },
    { L"B - Electric Shock Effect", 0x0392660, 0x0392680, indexKOF02UMSprites_Yuri, 0x18 },
    { L"B - MAX Flash", 0x0392680, 0x03926a0, indexKOF02UMSprites_Yuri, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03926a0, 0x03926c0, indexKOF02UMSprites_Yuri, 0x00 },
    { L"B - Soul Palette", 0x03926c0, 0x03926e0, indexKOF02UMSprites_Yuri, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03926e0, 0x0392700, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_C[] =
{
    { L"Yuri C", 0x0392800, 0x0392820, indexKOF02UMSprites_Yuri },
    { L"C - Hidden Super Desperation Move 1", 0x0392820, 0x0392840, indexKOF02UMSprites_Yuri, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0392840, 0x0392860, indexKOF02UMSprites_Yuri, 0x00 },
    { L"C - Electric Shock Effect", 0x0392860, 0x0392880, indexKOF02UMSprites_Yuri, 0x18 },
    { L"C - MAX Flash", 0x0392880, 0x03928a0, indexKOF02UMSprites_Yuri, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03928a0, 0x03928c0, indexKOF02UMSprites_Yuri, 0x00 },
    { L"C - Soul Palette", 0x03928c0, 0x03928e0, indexKOF02UMSprites_Yuri, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03928e0, 0x0392900, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YURI_PALETTES_D[] =
{
    { L"Yuri D", 0x0392a00, 0x0392a20, indexKOF02UMSprites_Yuri },
    { L"D - Hidden Super Desperation Move 1", 0x0392a20, 0x0392a40, indexKOF02UMSprites_Yuri, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0392a40, 0x0392a60, indexKOF02UMSprites_Yuri, 0x00 },
    { L"D - Electric Shock Effect", 0x0392a60, 0x0392a80, indexKOF02UMSprites_Yuri, 0x18 },
    { L"D - MAX Flash", 0x0392a80, 0x0392aa0, indexKOF02UMSprites_Yuri, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0392aa0, 0x0392ac0, indexKOF02UMSprites_Yuri, 0x00 },
    { L"D - Soul Palette", 0x0392ac0, 0x0392ae0, indexKOF02UMSprites_Yuri, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0392ae0, 0x0392b00, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_A[] =
{
    { L"May Lee A", 0x0392c00, 0x0392c20, indexKOF02UMSprites_MayLee },
    { L"A - Hidden Super Desperation Move 1", 0x0392c20, 0x0392c40, indexKOF02UMSprites_MayLee, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0392c40, 0x0392c60, indexKOF02UMSprites_MayLee, 0x00 },
    { L"A - Electric Shock Effect", 0x0392c60, 0x0392c80, indexKOF02UMSprites_MayLee, 0x18 },
    { L"A - MAX Flash", 0x0392c80, 0x0392ca0, indexKOF02UMSprites_MayLee, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0392ca0, 0x0392cc0, indexKOF02UMSprites_MayLee, 0x00 },
    { L"A - Soul Palette", 0x0392cc0, 0x0392ce0, indexKOF02UMSprites_MayLee, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0392ce0, 0x0392d00, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_B[] =
{
    { L"May Lee B", 0x0392e00, 0x0392e20, indexKOF02UMSprites_MayLee },
    { L"B - Hidden Super Desperation Move 1", 0x0392e20, 0x0392e40, indexKOF02UMSprites_MayLee, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0392e40, 0x0392e60, indexKOF02UMSprites_MayLee, 0x00 },
    { L"B - Electric Shock Effect", 0x0392e60, 0x0392e80, indexKOF02UMSprites_MayLee, 0x18 },
    { L"B - MAX Flash", 0x0392e80, 0x0392ea0, indexKOF02UMSprites_MayLee, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0392ea0, 0x0392ec0, indexKOF02UMSprites_MayLee, 0x00 },
    { L"B - Soul Palette", 0x0392ec0, 0x0392ee0, indexKOF02UMSprites_MayLee, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0392ee0, 0x0392f00, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_C[] =
{
    { L"May Lee C", 0x0393000, 0x0393020, indexKOF02UMSprites_MayLee },
    { L"C - Hidden Super Desperation Move 1", 0x0393020, 0x0393040, indexKOF02UMSprites_MayLee, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0393040, 0x0393060, indexKOF02UMSprites_MayLee, 0x00 },
    { L"C - Electric Shock Effect", 0x0393060, 0x0393080, indexKOF02UMSprites_MayLee, 0x18 },
    { L"C - MAX Flash", 0x0393080, 0x03930a0, indexKOF02UMSprites_MayLee, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03930a0, 0x03930c0, indexKOF02UMSprites_MayLee, 0x00 },
    { L"C - Soul Palette", 0x03930c0, 0x03930e0, indexKOF02UMSprites_MayLee, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03930e0, 0x0393100, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAYLEE_PALETTES_D[] =
{
    { L"May Lee D", 0x0393200, 0x0393220, indexKOF02UMSprites_MayLee },
    { L"D - Hidden Super Desperation Move 1", 0x0393220, 0x0393240, indexKOF02UMSprites_MayLee, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0393240, 0x0393260, indexKOF02UMSprites_MayLee, 0x00 },
    { L"D - Electric Shock Effect", 0x0393260, 0x0393280, indexKOF02UMSprites_MayLee, 0x18 },
    { L"D - MAX Flash", 0x0393280, 0x03932a0, indexKOF02UMSprites_MayLee, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03932a0, 0x03932c0, indexKOF02UMSprites_MayLee, 0x00 },
    { L"D - Soul Palette", 0x03932c0, 0x03932e0, indexKOF02UMSprites_MayLee, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03932e0, 0x0393300, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_A[] =
{
    { L"Iori A", 0x0393400, 0x0393420, indexKOF02UMSprites_Iori },
    { L"A - Hidden Super Desperation Move 1", 0x0393420, 0x0393440, indexKOF02UMSprites_Iori, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0393440, 0x0393460, indexKOF02UMSprites_Iori, 0x00 },
    { L"A - Electric Shock Effect", 0x0393460, 0x0393480, indexKOF02UMSprites_Iori, 0x18 },
    { L"A - MAX Flash", 0x0393480, 0x03934a0, indexKOF02UMSprites_Iori, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03934a0, 0x03934c0, indexKOF02UMSprites_Iori, 0x00 },
    { L"A - Soul Palette", 0x03934c0, 0x03934e0, indexKOF02UMSprites_Iori, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03934e0, 0x0393500, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_B[] =
{
    { L"Iori B", 0x0393600, 0x0393620, indexKOF02UMSprites_Iori },
    { L"B - Hidden Super Desperation Move 1", 0x0393620, 0x0393640, indexKOF02UMSprites_Iori, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0393640, 0x0393660, indexKOF02UMSprites_Iori, 0x00 },
    { L"B - Electric Shock Effect", 0x0393660, 0x0393680, indexKOF02UMSprites_Iori, 0x18 },
    { L"B - MAX Flash", 0x0393680, 0x03936a0, indexKOF02UMSprites_Iori, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03936a0, 0x03936c0, indexKOF02UMSprites_Iori, 0x00 },
    { L"B - Soul Palette", 0x03936c0, 0x03936e0, indexKOF02UMSprites_Iori, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03936e0, 0x0393700, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_C[] =
{
    { L"Iori C", 0x0393800, 0x0393820, indexKOF02UMSprites_Iori },
    { L"C - Hidden Super Desperation Move 1", 0x0393820, 0x0393840, indexKOF02UMSprites_Iori, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0393840, 0x0393860, indexKOF02UMSprites_Iori, 0x00 },
    { L"C - Electric Shock Effect", 0x0393860, 0x0393880, indexKOF02UMSprites_Iori, 0x18 },
    { L"C - MAX Flash", 0x0393880, 0x03938a0, indexKOF02UMSprites_Iori, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03938a0, 0x03938c0, indexKOF02UMSprites_Iori, 0x00 },
    { L"C - Soul Palette", 0x03938c0, 0x03938e0, indexKOF02UMSprites_Iori, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03938e0, 0x0393900, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_IORI_PALETTES_D[] =
{
    { L"Iori D", 0x0393a00, 0x0393a20, indexKOF02UMSprites_Iori },
    { L"D - Hidden Super Desperation Move 1", 0x0393a20, 0x0393a40, indexKOF02UMSprites_Iori, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0393a40, 0x0393a60, indexKOF02UMSprites_Iori, 0x00 },
    { L"D - Electric Shock Effect", 0x0393a60, 0x0393a80, indexKOF02UMSprites_Iori, 0x18 },
    { L"D - MAX Flash", 0x0393a80, 0x0393aa0, indexKOF02UMSprites_Iori, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0393aa0, 0x0393ac0, indexKOF02UMSprites_Iori, 0x00 },
    { L"D - Soul Palette", 0x0393ac0, 0x0393ae0, indexKOF02UMSprites_Iori, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0393ae0, 0x0393b00, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_A[] =
{
    { L"Mature A", 0x0393c00, 0x0393c20, indexKOF02UMSprites_Mature },
    { L"A - Hidden Super Desperation Move 1", 0x0393c20, 0x0393c40, indexKOF02UMSprites_Mature, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0393c40, 0x0393c60, indexKOF02UMSprites_Mature, 0x00 },
    { L"A - Electric Shock Effect", 0x0393c60, 0x0393c80, indexKOF02UMSprites_Mature, 0x18 },
    { L"A - MAX Flash", 0x0393c80, 0x0393ca0, indexKOF02UMSprites_Mature, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0393ca0, 0x0393cc0, indexKOF02UMSprites_Mature, 0x00 },
    { L"A - Soul Palette", 0x0393cc0, 0x0393ce0, indexKOF02UMSprites_Mature, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0393ce0, 0x0393d00, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_B[] =
{
    { L"Mature B", 0x0393e00, 0x0393e20, indexKOF02UMSprites_Mature },
    { L"B - Hidden Super Desperation Move 1", 0x0393e20, 0x0393e40, indexKOF02UMSprites_Mature, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0393e40, 0x0393e60, indexKOF02UMSprites_Mature, 0x00 },
    { L"B - Electric Shock Effect", 0x0393e60, 0x0393e80, indexKOF02UMSprites_Mature, 0x18 },
    { L"B - MAX Flash", 0x0393e80, 0x0393ea0, indexKOF02UMSprites_Mature, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0393ea0, 0x0393ec0, indexKOF02UMSprites_Mature, 0x00 },
    { L"B - Soul Palette", 0x0393ec0, 0x0393ee0, indexKOF02UMSprites_Mature, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0393ee0, 0x0393f00, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_C[] =
{
    { L"Mature C", 0x0394000, 0x0394020, indexKOF02UMSprites_Mature },
    { L"C - Hidden Super Desperation Move 1", 0x0394020, 0x0394040, indexKOF02UMSprites_Mature, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0394040, 0x0394060, indexKOF02UMSprites_Mature, 0x00 },
    { L"C - Electric Shock Effect", 0x0394060, 0x0394080, indexKOF02UMSprites_Mature, 0x18 },
    { L"C - MAX Flash", 0x0394080, 0x03940a0, indexKOF02UMSprites_Mature, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03940a0, 0x03940c0, indexKOF02UMSprites_Mature, 0x00 },
    { L"C - Soul Palette", 0x03940c0, 0x03940e0, indexKOF02UMSprites_Mature, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03940e0, 0x0394100, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MATURE_PALETTES_D[] =
{
    { L"Mature D", 0x0394200, 0x0394220, indexKOF02UMSprites_Mature },
    { L"D - Hidden Super Desperation Move 1", 0x0394220, 0x0394240, indexKOF02UMSprites_Mature, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0394240, 0x0394260, indexKOF02UMSprites_Mature, 0x00 },
    { L"D - Electric Shock Effect", 0x0394260, 0x0394280, indexKOF02UMSprites_Mature, 0x18 },
    { L"D - MAX Flash", 0x0394280, 0x03942a0, indexKOF02UMSprites_Mature, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03942a0, 0x03942c0, indexKOF02UMSprites_Mature, 0x00 },
    { L"D - Soul Palette", 0x03942c0, 0x03942e0, indexKOF02UMSprites_Mature, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03942e0, 0x0394300, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_A[] =
{
    { L"Vice A", 0x0394400, 0x0394420, indexKOF02UMSprites_Vice },
    { L"A - Hidden Super Desperation Move 1", 0x0394420, 0x0394440, indexKOF02UMSprites_Vice, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0394440, 0x0394460, indexKOF02UMSprites_Vice, 0x00 },
    { L"A - Electric Shock Effect", 0x0394460, 0x0394480, indexKOF02UMSprites_Vice, 0x18 },
    { L"A - MAX Flash", 0x0394480, 0x03944a0, indexKOF02UMSprites_Vice, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03944a0, 0x03944c0, indexKOF02UMSprites_Vice, 0x00 },
    { L"A - Soul Palette", 0x03944c0, 0x03944e0, indexKOF02UMSprites_Vice, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03944e0, 0x0394500, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_B[] =
{
    { L"Vice B", 0x0394600, 0x0394620, indexKOF02UMSprites_Vice },
    { L"B - Hidden Super Desperation Move 1", 0x0394620, 0x0394640, indexKOF02UMSprites_Vice, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0394640, 0x0394660, indexKOF02UMSprites_Vice, 0x00 },
    { L"B - Electric Shock Effect", 0x0394660, 0x0394680, indexKOF02UMSprites_Vice, 0x18 },
    { L"B - MAX Flash", 0x0394680, 0x03946a0, indexKOF02UMSprites_Vice, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03946a0, 0x03946c0, indexKOF02UMSprites_Vice, 0x00 },
    { L"B - Soul Palette", 0x03946c0, 0x03946e0, indexKOF02UMSprites_Vice, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03946e0, 0x0394700, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_C[] =
{
    { L"Vice C", 0x0394800, 0x0394820, indexKOF02UMSprites_Vice },
    { L"C - Hidden Super Desperation Move 1", 0x0394820, 0x0394840, indexKOF02UMSprites_Vice, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0394840, 0x0394860, indexKOF02UMSprites_Vice, 0x00 },
    { L"C - Electric Shock Effect", 0x0394860, 0x0394880, indexKOF02UMSprites_Vice, 0x18 },
    { L"C - MAX Flash", 0x0394880, 0x03948a0, indexKOF02UMSprites_Vice, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03948a0, 0x03948c0, indexKOF02UMSprites_Vice, 0x00 },
    { L"C - Soul Palette", 0x03948c0, 0x03948e0, indexKOF02UMSprites_Vice, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03948e0, 0x0394900, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VICE_PALETTES_D[] =
{
    { L"Vice D", 0x0394a00, 0x0394a20, indexKOF02UMSprites_Vice },
    { L"D - Hidden Super Desperation Move 1", 0x0394a20, 0x0394a40, indexKOF02UMSprites_Vice, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0394a40, 0x0394a60, indexKOF02UMSprites_Vice, 0x00 },
    { L"D - Electric Shock Effect", 0x0394a60, 0x0394a80, indexKOF02UMSprites_Vice, 0x18 },
    { L"D - MAX Flash", 0x0394a80, 0x0394aa0, indexKOF02UMSprites_Vice, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0394aa0, 0x0394ac0, indexKOF02UMSprites_Vice, 0x00 },
    { L"D - Soul Palette", 0x0394ac0, 0x0394ae0, indexKOF02UMSprites_Vice, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0394ae0, 0x0394b00, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_A[] =
{
    { L"Yamazaki A", 0x0394c00, 0x0394c20, indexKOF02UMSprites_Yamazaki },
    { L"A - Drill Super Extras", 0x0394c20, 0x0394c40, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"A - Intro Stuff", 0x0394c40, 0x0394c60, indexKOF02UMSprites_Yamazaki, 0x02 },
    { L"A - Electric Shock Effect", 0x0394c60, 0x0394c80, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"A - MAX Flash", 0x0394c80, 0x0394ca0, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0394ca0, 0x0394cc0, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"A - Soul Palette", 0x0394cc0, 0x0394ce0, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0394ce0, 0x0394d00, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_B[] =
{
    { L"Yamazaki B", 0x0394e00, 0x0394e20, indexKOF02UMSprites_Yamazaki },
    { L"B - Drill Super Extras", 0x0394e20, 0x0394e40, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"B - Intro Stuff", 0x0394e40, 0x0394e60, indexKOF02UMSprites_Yamazaki, 0x02 },
    { L"B - Electric Shock Effect", 0x0394e60, 0x0394e80, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"B - MAX Flash", 0x0394e80, 0x0394ea0, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0394ea0, 0x0394ec0, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"B - Soul Palette", 0x0394ec0, 0x0394ee0, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0394ee0, 0x0394f00, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_C[] =
{
    { L"Yamazaki C", 0x0395000, 0x0395020, indexKOF02UMSprites_Yamazaki },
    { L"C - Drill Super Extras", 0x0395020, 0x0395040, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"C - Intro Stuff", 0x0395040, 0x0395060, indexKOF02UMSprites_Yamazaki, 0x02 },
    { L"C - Electric Shock Effect", 0x0395060, 0x0395080, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"C - MAX Flash", 0x0395080, 0x03950a0, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03950a0, 0x03950c0, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"C - Soul Palette", 0x03950c0, 0x03950e0, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03950e0, 0x0395100, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YAMAZAKI_PALETTES_D[] =
{
    { L"Yamazaki D", 0x0395200, 0x0395220, indexKOF02UMSprites_Yamazaki },
    { L"D - Drill Super Extras", 0x0395220, 0x0395240, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"D - Intro Stuff", 0x0395240, 0x0395260, indexKOF02UMSprites_Yamazaki, 0x02 },
    { L"D - Electric Shock Effect", 0x0395260, 0x0395280, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"D - MAX Flash", 0x0395280, 0x03952a0, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03952a0, 0x03952c0, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"D - Soul Palette", 0x03952c0, 0x03952e0, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03952e0, 0x0395300, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0x0395400, 0x0395420, indexKOF02UMSprites_BlueMary },
    { L"A - Anton and Jacket", 0x0395420, 0x0395440, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"A - Desperation Move / Super Desperation Move", 0x0395440, 0x0395460, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"A - Electric Shock Effect", 0x0395460, 0x0395480, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"A - MAX Flash", 0x0395480, 0x03954a0, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03954a0, 0x03954c0, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"A - Soul Palette", 0x03954c0, 0x03954e0, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03954e0, 0x0395500, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B", 0x0395600, 0x0395620, indexKOF02UMSprites_BlueMary },
    { L"B - Anton and Jacket", 0x0395620, 0x0395640, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"B - Desperation Move / Super Desperation Move", 0x0395640, 0x0395660, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"B - Electric Shock Effect", 0x0395660, 0x0395680, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"B - MAX Flash", 0x0395680, 0x03956a0, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03956a0, 0x03956c0, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"B - Soul Palette", 0x03956c0, 0x03956e0, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03956e0, 0x0395700, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C", 0x0395800, 0x0395820, indexKOF02UMSprites_BlueMary },
    { L"C - Anton and Jacket", 0x0395820, 0x0395840, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"C - Desperation Move / Super Desperation Move", 0x0395840, 0x0395860, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"C - Electric Shock Effect", 0x0395860, 0x0395880, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"C - MAX Flash", 0x0395880, 0x03958a0, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03958a0, 0x03958c0, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"C - Soul Palette", 0x03958c0, 0x03958e0, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03958e0, 0x0395900, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0x0395a00, 0x0395a20, indexKOF02UMSprites_BlueMary },
    { L"D - Anton and Jacket", 0x0395a20, 0x0395a40, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"D - Desperation Move / Super Desperation Move", 0x0395a40, 0x0395a60, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"D - Electric Shock Effect", 0x0395a60, 0x0395a80, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"D - MAX Flash", 0x0395a80, 0x0395aa0, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0395aa0, 0x0395ac0, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"D - Soul Palette", 0x0395ac0, 0x0395ae0, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0395ae0, 0x0395b00, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_A[] =
{
    { L"Billy A", 0x0395c00, 0x0395c20, indexKOF02UMSprites_Billy },
    { L"A - Hair", 0x0395c20, 0x0395c40, indexKOF02UMSprites_Billy, 0x1a },
    { L"A - Eiji Kisaragi", 0x0395c40, 0x0395c60, indexKOF02UMSprites_Billy, 0x19 },
    { L"A - Electric Shock Effect", 0x0395c60, 0x0395c80, indexKOF02UMSprites_Billy, 0x18 },
    { L"A - MAX Flash", 0x0395c80, 0x0395ca0, indexKOF02UMSprites_Billy, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0395ca0, 0x0395cc0, indexKOF02UMSprites_Billy, 0x00 },
    { L"A - Soul Palette", 0x0395cc0, 0x0395ce0, indexKOF02UMSprites_Billy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0395ce0, 0x0395d00, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_B[] =
{
    { L"Billy B", 0x0395e00, 0x0395e20, indexKOF02UMSprites_Billy },
    { L"B - Hair", 0x0395e20, 0x0395e40, indexKOF02UMSprites_Billy, 0x1a },
    { L"B - Eiji Kisaragi", 0x0395e40, 0x0395e60, indexKOF02UMSprites_Billy, 0x19 },
    { L"B - Electric Shock Effect", 0x0395e60, 0x0395e80, indexKOF02UMSprites_Billy, 0x18 },
    { L"B - MAX Flash", 0x0395e80, 0x0395ea0, indexKOF02UMSprites_Billy, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0395ea0, 0x0395ec0, indexKOF02UMSprites_Billy, 0x00 },
    { L"B - Soul Palette", 0x0395ec0, 0x0395ee0, indexKOF02UMSprites_Billy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0395ee0, 0x0395f00, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_C[] =
{
    { L"Billy C", 0x0396000, 0x0396020, indexKOF02UMSprites_Billy },
    { L"C - Hair", 0x0396020, 0x0396040, indexKOF02UMSprites_Billy, 0x1a },
    { L"C - Eiji Kisaragi", 0x0396040, 0x0396060, indexKOF02UMSprites_Billy, 0x19 },
    { L"C - Electric Shock Effect", 0x0396060, 0x0396080, indexKOF02UMSprites_Billy, 0x18 },
    { L"C - MAX Flash", 0x0396080, 0x03960a0, indexKOF02UMSprites_Billy, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03960a0, 0x03960c0, indexKOF02UMSprites_Billy, 0x00 },
    { L"C - Soul Palette", 0x03960c0, 0x03960e0, indexKOF02UMSprites_Billy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03960e0, 0x0396100, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_BILLY_PALETTES_D[] =
{
    { L"Billy D", 0x0396200, 0x0396220, indexKOF02UMSprites_Billy },
    { L"D - Hair", 0x0396220, 0x0396240, indexKOF02UMSprites_Billy, 0x1a },
    { L"D - Eiji Kisaragi", 0x0396240, 0x0396260, indexKOF02UMSprites_Billy, 0x19 },
    { L"D - Electric Shock Effect", 0x0396260, 0x0396280, indexKOF02UMSprites_Billy, 0x18 },
    { L"D - MAX Flash", 0x0396280, 0x03962a0, indexKOF02UMSprites_Billy, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03962a0, 0x03962c0, indexKOF02UMSprites_Billy, 0x00 },
    { L"D - Soul Palette", 0x03962c0, 0x03962e0, indexKOF02UMSprites_Billy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03962e0, 0x0396300, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_A[] =
{
    { L"Yashiro A", 0x0396400, 0x0396420, indexKOF02UMSprites_Yashiro },
    { L"A - Hidden Super Desperation Move 1", 0x0396420, 0x0396440, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0396440, 0x0396460, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"A - Electric Shock Effect", 0x0396460, 0x0396480, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"A - MAX Flash", 0x0396480, 0x03964a0, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03964a0, 0x03964c0, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"A - Soul Palette", 0x03964c0, 0x03964e0, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03964e0, 0x0396500, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_B[] =
{
    { L"Yashiro B", 0x0396600, 0x0396620, indexKOF02UMSprites_Yashiro },
    { L"B - Hidden Super Desperation Move 1", 0x0396620, 0x0396640, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0396640, 0x0396660, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"B - Electric Shock Effect", 0x0396660, 0x0396680, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"B - MAX Flash", 0x0396680, 0x03966a0, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03966a0, 0x03966c0, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"B - Soul Palette", 0x03966c0, 0x03966e0, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03966e0, 0x0396700, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_C[] =
{
    { L"Yashiro C", 0x0396800, 0x0396820, indexKOF02UMSprites_Yashiro },
    { L"C - Hidden Super Desperation Move 1", 0x0396820, 0x0396840, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0396840, 0x0396860, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"C - Electric Shock Effect", 0x0396860, 0x0396880, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"C - MAX Flash", 0x0396880, 0x03968a0, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03968a0, 0x03968c0, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"C - Soul Palette", 0x03968c0, 0x03968e0, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03968e0, 0x0396900, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_YASHIRO_PALETTES_D[] =
{
    { L"Yashiro D", 0x0396a00, 0x0396a20, indexKOF02UMSprites_Yashiro },
    { L"D - Hidden Super Desperation Move 1", 0x0396a20, 0x0396a40, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0396a40, 0x0396a60, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"D - Electric Shock Effect", 0x0396a60, 0x0396a80, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"D - MAX Flash", 0x0396a80, 0x0396aa0, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0396aa0, 0x0396ac0, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"D - Soul Palette", 0x0396ac0, 0x0396ae0, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0396ae0, 0x0396b00, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_A[] =
{
    { L"Shermie A", 0x0396c00, 0x0396c20, indexKOF02UMSprites_Shermie },
    { L"A - Hidden Super Desperation Move 1", 0x0396c20, 0x0396c40, indexKOF02UMSprites_Shermie, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0396c40, 0x0396c60, indexKOF02UMSprites_Shermie, 0x00 },
    { L"A - Electric Shock Effect", 0x0396c60, 0x0396c80, indexKOF02UMSprites_Shermie, 0x18 },
    { L"A - MAX Flash", 0x0396c80, 0x0396ca0, indexKOF02UMSprites_Shermie, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0396ca0, 0x0396cc0, indexKOF02UMSprites_Shermie, 0x00 },
    { L"A - Soul Palette", 0x0396cc0, 0x0396ce0, indexKOF02UMSprites_Shermie, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0396ce0, 0x0396d00, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_B[] =
{
    { L"Shermie B", 0x0396e00, 0x0396e20, indexKOF02UMSprites_Shermie },
    { L"B - Hidden Super Desperation Move 1", 0x0396e20, 0x0396e40, indexKOF02UMSprites_Shermie, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0396e40, 0x0396e60, indexKOF02UMSprites_Shermie, 0x00 },
    { L"B - Electric Shock Effect", 0x0396e60, 0x0396e80, indexKOF02UMSprites_Shermie, 0x18 },
    { L"B - MAX Flash", 0x0396e80, 0x0396ea0, indexKOF02UMSprites_Shermie, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0396ea0, 0x0396ec0, indexKOF02UMSprites_Shermie, 0x00 },
    { L"B - Soul Palette", 0x0396ec0, 0x0396ee0, indexKOF02UMSprites_Shermie, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0396ee0, 0x0396f00, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_C[] =
{
    { L"Shermie C", 0x0397000, 0x0397020, indexKOF02UMSprites_Shermie },
    { L"C - Hidden Super Desperation Move 1", 0x0397020, 0x0397040, indexKOF02UMSprites_Shermie, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0397040, 0x0397060, indexKOF02UMSprites_Shermie, 0x00 },
    { L"C - Electric Shock Effect", 0x0397060, 0x0397080, indexKOF02UMSprites_Shermie, 0x18 },
    { L"C - MAX Flash", 0x0397080, 0x03970a0, indexKOF02UMSprites_Shermie, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03970a0, 0x03970c0, indexKOF02UMSprites_Shermie, 0x00 },
    { L"C - Soul Palette", 0x03970c0, 0x03970e0, indexKOF02UMSprites_Shermie, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03970e0, 0x0397100, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHERMIE_PALETTES_D[] =
{
    { L"Shermie D", 0x0397200, 0x0397220, indexKOF02UMSprites_Shermie },
    { L"D - Hidden Super Desperation Move 1", 0x0397220, 0x0397240, indexKOF02UMSprites_Shermie, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0397240, 0x0397260, indexKOF02UMSprites_Shermie, 0x00 },
    { L"D - Electric Shock Effect", 0x0397260, 0x0397280, indexKOF02UMSprites_Shermie, 0x18 },
    { L"D - MAX Flash", 0x0397280, 0x03972a0, indexKOF02UMSprites_Shermie, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03972a0, 0x03972c0, indexKOF02UMSprites_Shermie, 0x00 },
    { L"D - Soul Palette", 0x03972c0, 0x03972e0, indexKOF02UMSprites_Shermie, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03972e0, 0x0397300, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_A[] =
{
    { L"Chris A", 0x0397400, 0x0397420, indexKOF02UMSprites_Chris },
    { L"A - Hidden Super Desperation Move 1", 0x0397420, 0x0397440, indexKOF02UMSprites_Chris, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0397440, 0x0397460, indexKOF02UMSprites_Chris, 0x00 },
    { L"A - Electric Shock Effect", 0x0397460, 0x0397480, indexKOF02UMSprites_Chris, 0x18 },
    { L"A - MAX Flash", 0x0397480, 0x03974a0, indexKOF02UMSprites_Chris, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03974a0, 0x03974c0, indexKOF02UMSprites_Chris, 0x00 },
    { L"A - Soul Palette", 0x03974c0, 0x03974e0, indexKOF02UMSprites_Chris, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03974e0, 0x0397500, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_B[] =
{
    { L"Chris B", 0x0397600, 0x0397620, indexKOF02UMSprites_Chris },
    { L"B - Hidden Super Desperation Move 1", 0x0397620, 0x0397640, indexKOF02UMSprites_Chris, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0397640, 0x0397660, indexKOF02UMSprites_Chris, 0x00 },
    { L"B - Electric Shock Effect", 0x0397660, 0x0397680, indexKOF02UMSprites_Chris, 0x18 },
    { L"B - MAX Flash", 0x0397680, 0x03976a0, indexKOF02UMSprites_Chris, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03976a0, 0x03976c0, indexKOF02UMSprites_Chris, 0x00 },
    { L"B - Soul Palette", 0x03976c0, 0x03976e0, indexKOF02UMSprites_Chris, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03976e0, 0x0397700, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_C[] =
{
    { L"Chris C", 0x0397800, 0x0397820, indexKOF02UMSprites_Chris },
    { L"C - Hidden Super Desperation Move 1", 0x0397820, 0x0397840, indexKOF02UMSprites_Chris, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0397840, 0x0397860, indexKOF02UMSprites_Chris, 0x00 },
    { L"C - Electric Shock Effect", 0x0397860, 0x0397880, indexKOF02UMSprites_Chris, 0x18 },
    { L"C - MAX Flash", 0x0397880, 0x03978a0, indexKOF02UMSprites_Chris, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03978a0, 0x03978c0, indexKOF02UMSprites_Chris, 0x00 },
    { L"C - Soul Palette", 0x03978c0, 0x03978e0, indexKOF02UMSprites_Chris, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03978e0, 0x0397900, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_CHRIS_PALETTES_D[] =
{
    { L"Chris D", 0x0397a00, 0x0397a20, indexKOF02UMSprites_Chris },
    { L"D - Hidden Super Desperation Move 1", 0x0397a20, 0x0397a40, indexKOF02UMSprites_Chris, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0397a40, 0x0397a60, indexKOF02UMSprites_Chris, 0x00 },
    { L"D - Electric Shock Effect", 0x0397a60, 0x0397a80, indexKOF02UMSprites_Chris, 0x18 },
    { L"D - MAX Flash", 0x0397a80, 0x0397aa0, indexKOF02UMSprites_Chris, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0397aa0, 0x0397ac0, indexKOF02UMSprites_Chris, 0x00 },
    { L"D - Soul Palette", 0x0397ac0, 0x0397ae0, indexKOF02UMSprites_Chris, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0397ae0, 0x0397b00, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_A[] =
{
    { L"K’ A", 0x0397c00, 0x0397c20, indexKOF02UMSprites_K },
    { L"A - Diana Intro Stuff", 0x0397c20, 0x0397c40, indexKOF02UMSprites_K, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x0397c40, 0x0397c60, indexKOF02UMSprites_K, 0x00 },
    { L"A - Electric Shock Effect", 0x0397c60, 0x0397c80, indexKOF02UMSprites_K, 0x18 },
    { L"A - MAX Flash", 0x0397c80, 0x0397ca0, indexKOF02UMSprites_K, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0397ca0, 0x0397cc0, indexKOF02UMSprites_K, 0x00 },
    { L"A - Soul Palette", 0x0397cc0, 0x0397ce0, indexKOF02UMSprites_K, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0397ce0, 0x0397d00, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_B[] =
{
    { L"K’ B", 0x0397e00, 0x0397e20, indexKOF02UMSprites_K },
    { L"B - Diana Intro Stuff", 0x0397e20, 0x0397e40, indexKOF02UMSprites_K, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x0397e40, 0x0397e60, indexKOF02UMSprites_K, 0x00 },
    { L"B - Electric Shock Effect", 0x0397e60, 0x0397e80, indexKOF02UMSprites_K, 0x18 },
    { L"B - MAX Flash", 0x0397e80, 0x0397ea0, indexKOF02UMSprites_K, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0397ea0, 0x0397ec0, indexKOF02UMSprites_K, 0x00 },
    { L"B - Soul Palette", 0x0397ec0, 0x0397ee0, indexKOF02UMSprites_K, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0397ee0, 0x0397f00, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_C[] =
{
    { L"K’ C", 0x0398000, 0x0398020, indexKOF02UMSprites_K },
    { L"C - Diana Intro Stuff", 0x0398020, 0x0398040, indexKOF02UMSprites_K, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x0398040, 0x0398060, indexKOF02UMSprites_K, 0x00 },
    { L"C - Electric Shock Effect", 0x0398060, 0x0398080, indexKOF02UMSprites_K, 0x18 },
    { L"C - MAX Flash", 0x0398080, 0x03980a0, indexKOF02UMSprites_K, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03980a0, 0x03980c0, indexKOF02UMSprites_K, 0x00 },
    { L"C - Soul Palette", 0x03980c0, 0x03980e0, indexKOF02UMSprites_K, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03980e0, 0x0398100, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_D[] =
{
    { L"K’ D", 0x0398200, 0x0398220, indexKOF02UMSprites_K },
    { L"D - Diana Intro Stuff", 0x0398220, 0x0398240, indexKOF02UMSprites_K, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x0398240, 0x0398260, indexKOF02UMSprites_K, 0x00 },
    { L"D - Electric Shock Effect", 0x0398260, 0x0398280, indexKOF02UMSprites_K, 0x18 },
    { L"D - MAX Flash", 0x0398280, 0x03982a0, indexKOF02UMSprites_K, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03982a0, 0x03982c0, indexKOF02UMSprites_K, 0x00 },
    { L"D - Soul Palette", 0x03982c0, 0x03982e0, indexKOF02UMSprites_K, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03982e0, 0x0398300, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_A[] =
{
    { L"Maxima A", 0x0398400, 0x0398420, indexKOF02UMSprites_Maxima },
    { L"A - Hidden Super Desperation Move 1", 0x0398420, 0x0398440, indexKOF02UMSprites_Maxima, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0398440, 0x0398460, indexKOF02UMSprites_Maxima, 0x00 },
    { L"A - Electric Shock Effect", 0x0398460, 0x0398480, indexKOF02UMSprites_Maxima, 0x18 },
    { L"A - MAX Flash", 0x0398480, 0x03984a0, indexKOF02UMSprites_Maxima, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03984a0, 0x03984c0, indexKOF02UMSprites_Maxima, 0x00 },
    { L"A - Soul Palette", 0x03984c0, 0x03984e0, indexKOF02UMSprites_Maxima, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03984e0, 0x0398500, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_B[] =
{
    { L"Maxima B", 0x0398600, 0x0398620, indexKOF02UMSprites_Maxima },
    { L"B - Hidden Super Desperation Move 1", 0x0398620, 0x0398640, indexKOF02UMSprites_Maxima, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0398640, 0x0398660, indexKOF02UMSprites_Maxima, 0x00 },
    { L"B - Electric Shock Effect", 0x0398660, 0x0398680, indexKOF02UMSprites_Maxima, 0x18 },
    { L"B - MAX Flash", 0x0398680, 0x03986a0, indexKOF02UMSprites_Maxima, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03986a0, 0x03986c0, indexKOF02UMSprites_Maxima, 0x00 },
    { L"B - Soul Palette", 0x03986c0, 0x03986e0, indexKOF02UMSprites_Maxima, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03986e0, 0x0398700, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_C[] =
{
    { L"Maxima C", 0x0398800, 0x0398820, indexKOF02UMSprites_Maxima },
    { L"C - Hidden Super Desperation Move 1", 0x0398820, 0x0398840, indexKOF02UMSprites_Maxima, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0398840, 0x0398860, indexKOF02UMSprites_Maxima, 0x00 },
    { L"C - Electric Shock Effect", 0x0398860, 0x0398880, indexKOF02UMSprites_Maxima, 0x18 },
    { L"C - MAX Flash", 0x0398880, 0x03988a0, indexKOF02UMSprites_Maxima, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03988a0, 0x03988c0, indexKOF02UMSprites_Maxima, 0x00 },
    { L"C - Soul Palette", 0x03988c0, 0x03988e0, indexKOF02UMSprites_Maxima, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03988e0, 0x0398900, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_MAXIMA_PALETTES_D[] =
{
    { L"Maxima D", 0x0398a00, 0x0398a20, indexKOF02UMSprites_Maxima },
    { L"D - Hidden Super Desperation Move 1", 0x0398a20, 0x0398a40, indexKOF02UMSprites_Maxima, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0398a40, 0x0398a60, indexKOF02UMSprites_Maxima, 0x00 },
    { L"D - Electric Shock Effect", 0x0398a60, 0x0398a80, indexKOF02UMSprites_Maxima, 0x18 },
    { L"D - MAX Flash", 0x0398a80, 0x0398aa0, indexKOF02UMSprites_Maxima, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0398aa0, 0x0398ac0, indexKOF02UMSprites_Maxima, 0x00 },
    { L"D - Soul Palette", 0x0398ac0, 0x0398ae0, indexKOF02UMSprites_Maxima, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0398ae0, 0x0398b00, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_A[] =
{
    { L"Whip A", 0x0398c00, 0x0398c20, indexKOF02UMSprites_Whip },
    { L"A - Hidden Super Desperation Move 1", 0x0398c20, 0x0398c40, indexKOF02UMSprites_Whip, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0398c40, 0x0398c60, indexKOF02UMSprites_Whip, 0x00 },
    { L"A - Electric Shock Effect", 0x0398c60, 0x0398c80, indexKOF02UMSprites_Whip, 0x18 },
    { L"A - MAX Flash", 0x0398c80, 0x0398ca0, indexKOF02UMSprites_Whip, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0398ca0, 0x0398cc0, indexKOF02UMSprites_Whip, 0x00 },
    { L"A - Soul Palette", 0x0398cc0, 0x0398ce0, indexKOF02UMSprites_Whip, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0398ce0, 0x0398d00, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_B[] =
{
    { L"Whip B", 0x0398e00, 0x0398e20, indexKOF02UMSprites_Whip },
    { L"B - Hidden Super Desperation Move 1", 0x0398e20, 0x0398e40, indexKOF02UMSprites_Whip, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0398e40, 0x0398e60, indexKOF02UMSprites_Whip, 0x00 },
    { L"B - Electric Shock Effect", 0x0398e60, 0x0398e80, indexKOF02UMSprites_Whip, 0x18 },
    { L"B - MAX Flash", 0x0398e80, 0x0398ea0, indexKOF02UMSprites_Whip, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0398ea0, 0x0398ec0, indexKOF02UMSprites_Whip, 0x00 },
    { L"B - Soul Palette", 0x0398ec0, 0x0398ee0, indexKOF02UMSprites_Whip, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0398ee0, 0x0398f00, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_C[] =
{
    { L"Whip C", 0x0399000, 0x0399020, indexKOF02UMSprites_Whip },
    { L"C - Hidden Super Desperation Move 1", 0x0399020, 0x0399040, indexKOF02UMSprites_Whip, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0399040, 0x0399060, indexKOF02UMSprites_Whip, 0x00 },
    { L"C - Electric Shock Effect", 0x0399060, 0x0399080, indexKOF02UMSprites_Whip, 0x18 },
    { L"C - MAX Flash", 0x0399080, 0x03990a0, indexKOF02UMSprites_Whip, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03990a0, 0x03990c0, indexKOF02UMSprites_Whip, 0x00 },
    { L"C - Soul Palette", 0x03990c0, 0x03990e0, indexKOF02UMSprites_Whip, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03990e0, 0x0399100, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_WHIP_PALETTES_D[] =
{
    { L"Whip D", 0x0399200, 0x0399220, indexKOF02UMSprites_Whip },
    { L"D - Hidden Super Desperation Move 1", 0x0399220, 0x0399240, indexKOF02UMSprites_Whip, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0399240, 0x0399260, indexKOF02UMSprites_Whip, 0x00 },
    { L"D - Electric Shock Effect", 0x0399260, 0x0399280, indexKOF02UMSprites_Whip, 0x18 },
    { L"D - MAX Flash", 0x0399280, 0x03992a0, indexKOF02UMSprites_Whip, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x03992a0, 0x03992c0, indexKOF02UMSprites_Whip, 0x00 },
    { L"D - Soul Palette", 0x03992c0, 0x03992e0, indexKOF02UMSprites_Whip, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x03992e0, 0x0399300, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_A[] =
{
    { L"Vanessa A", 0x0399400, 0x0399420, indexKOF02UMSprites_Vanessa },
    { L"A - Hidden Super Desperation Move 1", 0x0399420, 0x0399440, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0399440, 0x0399460, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"A - Electric Shock Effect", 0x0399460, 0x0399480, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"A - MAX Flash", 0x0399480, 0x03994a0, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x03994a0, 0x03994c0, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"A - Soul Palette", 0x03994c0, 0x03994e0, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x03994e0, 0x0399500, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_B[] =
{
    { L"Vanessa B", 0x0399600, 0x0399620, indexKOF02UMSprites_Vanessa },
    { L"B - Hidden Super Desperation Move 1", 0x0399620, 0x0399640, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0399640, 0x0399660, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"B - Electric Shock Effect", 0x0399660, 0x0399680, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"B - MAX Flash", 0x0399680, 0x03996a0, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x03996a0, 0x03996c0, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"B - Soul Palette", 0x03996c0, 0x03996e0, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x03996e0, 0x0399700, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_C[] =
{
    { L"Vanessa C", 0x0399800, 0x0399820, indexKOF02UMSprites_Vanessa },
    { L"C - Hidden Super Desperation Move 1", 0x0399820, 0x0399840, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0399840, 0x0399860, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"C - Electric Shock Effect", 0x0399860, 0x0399880, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"C - MAX Flash", 0x0399880, 0x03998a0, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x03998a0, 0x03998c0, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"C - Soul Palette", 0x03998c0, 0x03998e0, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x03998e0, 0x0399900, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_VANESSA_PALETTES_D[] =
{
    { L"Vanessa D", 0x0399a00, 0x0399a20, indexKOF02UMSprites_Vanessa },
    { L"D - Hidden Super Desperation Move 1", 0x0399a20, 0x0399a40, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x0399a40, 0x0399a60, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"D - Electric Shock Effect", 0x0399a60, 0x0399a80, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"D - MAX Flash", 0x0399a80, 0x0399aa0, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0399aa0, 0x0399ac0, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"D - Soul Palette", 0x0399ac0, 0x0399ae0, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0399ae0, 0x0399b00, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_A[] =
{
    { L"Seth A", 0x0399c00, 0x0399c20, indexKOF02UMSprites_Seth },
    { L"A - Hidden Super Desperation Move 1", 0x0399c20, 0x0399c40, indexKOF02UMSprites_Seth, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0399c40, 0x0399c60, indexKOF02UMSprites_Seth, 0x00 },
    { L"A - Electric Shock Effect", 0x0399c60, 0x0399c80, indexKOF02UMSprites_Seth, 0x18 },
    { L"A - MAX Flash", 0x0399c80, 0x0399ca0, indexKOF02UMSprites_Seth, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0399ca0, 0x0399cc0, indexKOF02UMSprites_Seth, 0x00 },
    { L"A - Soul Palette", 0x0399cc0, 0x0399ce0, indexKOF02UMSprites_Seth, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0399ce0, 0x0399d00, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_B[] =
{
    { L"Seth B", 0x0399e00, 0x0399e20, indexKOF02UMSprites_Seth },
    { L"B - Hidden Super Desperation Move 1", 0x0399e20, 0x0399e40, indexKOF02UMSprites_Seth, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0399e40, 0x0399e60, indexKOF02UMSprites_Seth, 0x00 },
    { L"B - Electric Shock Effect", 0x0399e60, 0x0399e80, indexKOF02UMSprites_Seth, 0x18 },
    { L"B - MAX Flash", 0x0399e80, 0x0399ea0, indexKOF02UMSprites_Seth, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0399ea0, 0x0399ec0, indexKOF02UMSprites_Seth, 0x00 },
    { L"B - Soul Palette", 0x0399ec0, 0x0399ee0, indexKOF02UMSprites_Seth, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0399ee0, 0x0399f00, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_C[] =
{
    { L"Seth C", 0x039a000, 0x039a020, indexKOF02UMSprites_Seth },
    { L"C - Hidden Super Desperation Move 1", 0x039a020, 0x039a040, indexKOF02UMSprites_Seth, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x039a040, 0x039a060, indexKOF02UMSprites_Seth, 0x00 },
    { L"C - Electric Shock Effect", 0x039a060, 0x039a080, indexKOF02UMSprites_Seth, 0x18 },
    { L"C - MAX Flash", 0x039a080, 0x039a0a0, indexKOF02UMSprites_Seth, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039a0a0, 0x039a0c0, indexKOF02UMSprites_Seth, 0x00 },
    { L"C - Soul Palette", 0x039a0c0, 0x039a0e0, indexKOF02UMSprites_Seth, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x039a0e0, 0x039a100, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SETH_PALETTES_D[] =
{
    { L"Seth D", 0x039a200, 0x039a220, indexKOF02UMSprites_Seth },
    { L"D - Hidden Super Desperation Move 1", 0x039a220, 0x039a240, indexKOF02UMSprites_Seth, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x039a240, 0x039a260, indexKOF02UMSprites_Seth, 0x00 },
    { L"D - Electric Shock Effect", 0x039a260, 0x039a280, indexKOF02UMSprites_Seth, 0x18 },
    { L"D - MAX Flash", 0x039a280, 0x039a2a0, indexKOF02UMSprites_Seth, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039a2a0, 0x039a2c0, indexKOF02UMSprites_Seth, 0x00 },
    { L"D - Soul Palette", 0x039a2c0, 0x039a2e0, indexKOF02UMSprites_Seth, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x039a2e0, 0x039a300, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_A[] =
{
    { L"Ramon A", 0x039a400, 0x039a420, indexKOF02UMSprites_Ramon },
    { L"A - Hidden Super Desperation Move 1", 0x039a420, 0x039a440, indexKOF02UMSprites_Ramon, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x039a440, 0x039a460, indexKOF02UMSprites_Ramon, 0x00 },
    { L"A - Electric Shock Effect", 0x039a460, 0x039a480, indexKOF02UMSprites_Ramon, 0x18 },
    { L"A - MAX Flash", 0x039a480, 0x039a4a0, indexKOF02UMSprites_Ramon, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039a4a0, 0x039a4c0, indexKOF02UMSprites_Ramon, 0x00 },
    { L"A - Soul Palette", 0x039a4c0, 0x039a4e0, indexKOF02UMSprites_Ramon, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x039a4e0, 0x039a500, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_B[] =
{
    { L"Ramon B", 0x039a600, 0x039a620, indexKOF02UMSprites_Ramon },
    { L"B - Hidden Super Desperation Move 1", 0x039a620, 0x039a640, indexKOF02UMSprites_Ramon, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x039a640, 0x039a660, indexKOF02UMSprites_Ramon, 0x00 },
    { L"B - Electric Shock Effect", 0x039a660, 0x039a680, indexKOF02UMSprites_Ramon, 0x18 },
    { L"B - MAX Flash", 0x039a680, 0x039a6a0, indexKOF02UMSprites_Ramon, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039a6a0, 0x039a6c0, indexKOF02UMSprites_Ramon, 0x00 },
    { L"B - Soul Palette", 0x039a6c0, 0x039a6e0, indexKOF02UMSprites_Ramon, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x039a6e0, 0x039a700, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_C[] =
{
    { L"Ramon C", 0x039a800, 0x039a820, indexKOF02UMSprites_Ramon },
    { L"C - Hidden Super Desperation Move 1", 0x039a820, 0x039a840, indexKOF02UMSprites_Ramon, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x039a840, 0x039a860, indexKOF02UMSprites_Ramon, 0x00 },
    { L"C - Electric Shock Effect", 0x039a860, 0x039a880, indexKOF02UMSprites_Ramon, 0x18 },
    { L"C - MAX Flash", 0x039a880, 0x039a8a0, indexKOF02UMSprites_Ramon, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039a8a0, 0x039a8c0, indexKOF02UMSprites_Ramon, 0x00 },
    { L"C - Soul Palette", 0x039a8c0, 0x039a8e0, indexKOF02UMSprites_Ramon, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x039a8e0, 0x039a900, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_RAMON_PALETTES_D[] =
{
    { L"Ramon D", 0x039aa00, 0x039aa20, indexKOF02UMSprites_Ramon },
    { L"D - Hidden Super Desperation Move 1", 0x039aa20, 0x039aa40, indexKOF02UMSprites_Ramon, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x039aa40, 0x039aa60, indexKOF02UMSprites_Ramon, 0x00 },
    { L"D - Electric Shock Effect", 0x039aa60, 0x039aa80, indexKOF02UMSprites_Ramon, 0x18 },
    { L"D - MAX Flash", 0x039aa80, 0x039aaa0, indexKOF02UMSprites_Ramon, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039aaa0, 0x039aac0, indexKOF02UMSprites_Ramon, 0x00 },
    { L"D - Soul Palette", 0x039aac0, 0x039aae0, indexKOF02UMSprites_Ramon, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x039aae0, 0x039ab00, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_A[] =
{
    { L"Kula A", 0x039ac00, 0x039ac20, indexKOF02UMSprites_Kula },
    { L"A - Diana and Candy Stuff", 0x039ac20, 0x039ac40, indexKOF02UMSprites_Kula, 0x1c },
    { L"A - Foxy Stuff", 0x039ac40, 0x039ac60, indexKOF02UMSprites_Kula, 0x1b },
    { L"A - Electric Shock Effect", 0x039ac60, 0x039ac80, indexKOF02UMSprites_Kula, 0x18 },
    { L"A - MAX Flash", 0x039ac80, 0x039aca0, indexKOF02UMSprites_Kula, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039aca0, 0x039acc0, indexKOF02UMSprites_Kula, 0x00 },
    { L"A - Soul Palette", 0x039acc0, 0x039ace0, indexKOF02UMSprites_Kula, 0x18 },
    { L"A - Critical Ice", 0x039ace0, 0x039ad00, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_B[] =
{
    { L"Kula B", 0x039ae00, 0x039ae20, indexKOF02UMSprites_Kula },
    { L"B - Diana and Candy Stuff", 0x039ae20, 0x039ae40, indexKOF02UMSprites_Kula, 0x1c },
    { L"B - Foxy Stuff", 0x039ae40, 0x039ae60, indexKOF02UMSprites_Kula, 0x1b },
    { L"B - Electric Shock Effect", 0x039ae60, 0x039ae80, indexKOF02UMSprites_Kula, 0x18 },
    { L"B - MAX Flash", 0x039ae80, 0x039aea0, indexKOF02UMSprites_Kula, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039aea0, 0x039aec0, indexKOF02UMSprites_Kula, 0x00 },
    { L"B - Soul Palette", 0x039aec0, 0x039aee0, indexKOF02UMSprites_Kula, 0x18 },
    { L"B - Critical Ice", 0x039aee0, 0x039af00, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_C[] =
{
    { L"Kula C", 0x039b000, 0x039b020, indexKOF02UMSprites_Kula },
    { L"C - Diana and Candy Stuff", 0x039b020, 0x039b040, indexKOF02UMSprites_Kula, 0x1c },
    { L"C - Foxy Stuff", 0x039b040, 0x039b060, indexKOF02UMSprites_Kula, 0x1b },
    { L"C - Electric Shock Effect", 0x039b060, 0x039b080, indexKOF02UMSprites_Kula, 0x18 },
    { L"C - MAX Flash", 0x039b080, 0x039b0a0, indexKOF02UMSprites_Kula, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039b0a0, 0x039b0c0, indexKOF02UMSprites_Kula, 0x00 },
    { L"C - Soul Palette", 0x039b0c0, 0x039b0e0, indexKOF02UMSprites_Kula, 0x18 },
    { L"C - Critical Ice", 0x039b0e0, 0x039b100, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_KULA_PALETTES_D[] =
{
    { L"Kula D", 0x039b200, 0x039b220, indexKOF02UMSprites_Kula },
    { L"D - Diana and Candy Stuff", 0x039b220, 0x039b240, indexKOF02UMSprites_Kula, 0x1c },
    { L"D - Foxy Stuff", 0x039b240, 0x039b260, indexKOF02UMSprites_Kula, 0x1b },
    { L"D - Electric Shock Effect", 0x039b260, 0x039b280, indexKOF02UMSprites_Kula, 0x18 },
    { L"D - MAX Flash", 0x039b280, 0x039b2a0, indexKOF02UMSprites_Kula, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039b2a0, 0x039b2c0, indexKOF02UMSprites_Kula, 0x00 },
    { L"D - Soul Palette", 0x039b2c0, 0x039b2e0, indexKOF02UMSprites_Kula, 0x18 },
    { L"D - Critical Ice", 0x039b2e0, 0x039b300, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_A[] =
{
    { L"K9999 A", 0x039b400, 0x039b420, indexKOF02UMSprites_K9999 },
    { L"A - Intro Stuff", 0x039b420, 0x039b440, indexKOF02UMSprites_K9999, 0x19 },
    { L"A - MAX2 and Win", 0x039b440, 0x039b460, indexKOF02UMSprites_K9999, 0x09 },
    { L"A - Electric Shock Effect", 0x039b460, 0x039b480, indexKOF02UMSprites_K9999, 0x18 },
    { L"A - MAX Flash", 0x039b480, 0x039b4a0, indexKOF02UMSprites_K9999, 0x08 },
    { L"A - SDM Shield", 0x039b4a0, 0x039b4c0, indexKOF02UMSprites_K9999, 0x10 },
    { L"A - Soul Palette", 0x039b4c0, 0x039b4e0, indexKOF02UMSprites_K9999, 0x18 },
    { L"A - Tentacle Arm", 0x039b4e0, 0x039b500, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_B[] =
{
    { L"K9999 B", 0x039b600, 0x039b620, indexKOF02UMSprites_K9999 },
    { L"B - Intro Stuff", 0x039b620, 0x039b640, indexKOF02UMSprites_K9999, 0x19 },
    { L"B - MAX2 and Win", 0x039b640, 0x039b660, indexKOF02UMSprites_K9999, 0x09 },
    { L"B - Electric Shock Effect", 0x039b660, 0x039b680, indexKOF02UMSprites_K9999, 0x18 },
    { L"B - MAX Flash", 0x039b680, 0x039b6a0, indexKOF02UMSprites_K9999, 0x08 },
    { L"B - SDM Shield", 0x039b6a0, 0x039b6c0, indexKOF02UMSprites_K9999, 0x10 },
    { L"B - Soul Palette", 0x039b6c0, 0x039b6e0, indexKOF02UMSprites_K9999, 0x18 },
    { L"B - Tentacle Arm", 0x039b6e0, 0x039b700, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_C[] =
{
    { L"K9999 C", 0x039b800, 0x039b820, indexKOF02UMSprites_K9999 },
    { L"C - Intro Stuff", 0x039b820, 0x039b840, indexKOF02UMSprites_K9999, 0x19 },
    { L"C - MAX2 and Win", 0x039b840, 0x039b860, indexKOF02UMSprites_K9999, 0x09 },
    { L"C - Electric Shock Effect", 0x039b860, 0x039b880, indexKOF02UMSprites_K9999, 0x18 },
    { L"C - MAX Flash", 0x039b880, 0x039b8a0, indexKOF02UMSprites_K9999, 0x08 },
    { L"C - SDM Shield", 0x039b8a0, 0x039b8c0, indexKOF02UMSprites_K9999, 0x10 },
    { L"C - Soul Palette", 0x039b8c0, 0x039b8e0, indexKOF02UMSprites_K9999, 0x18 },
    { L"C - Tentacle Arm", 0x039b8e0, 0x039b900, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_D[] =
{
    { L"K9999 D", 0x039ba00, 0x039ba20, indexKOF02UMSprites_K9999 },
    { L"D - Intro Stuff", 0x039ba20, 0x039ba40, indexKOF02UMSprites_K9999, 0x19 },
    { L"D - MAX2 and Win", 0x039ba40, 0x039ba60, indexKOF02UMSprites_K9999, 0x09 },
    { L"D - Electric Shock Effect", 0x039ba60, 0x039ba80, indexKOF02UMSprites_K9999, 0x18 },
    { L"D - MAX Flash", 0x039ba80, 0x039baa0, indexKOF02UMSprites_K9999, 0x08 },
    { L"D - SDM Shield", 0x039baa0, 0x039bac0, indexKOF02UMSprites_K9999, 0x10 },
    { L"D - Soul Palette", 0x039bac0, 0x039bae0, indexKOF02UMSprites_K9999, 0x18 },
    { L"D - Tentacle Arm", 0x039bae0, 0x039bb00, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_A[] =
{
    { L"Angel A", 0x039bc00, 0x039bc20, indexKOF02UMSprites_Angel },
    { L"A - Time Over Lose", 0x039bc20, 0x039bc40, indexKOF02UMSprites_Angel, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x039bc40, 0x039bc60, indexKOF02UMSprites_Angel, 0x00 },
    { L"A - Electric Shock Effect", 0x039bc60, 0x039bc80, indexKOF02UMSprites_Angel, 0x18 },
    { L"A - MAX Flash", 0x039bc80, 0x039bca0, indexKOF02UMSprites_Angel, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039bca0, 0x039bcc0, indexKOF02UMSprites_Angel, 0x00 },
    { L"A - Soul Palette", 0x039bcc0, 0x039bce0, indexKOF02UMSprites_Angel, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x039bce0, 0x039bd00, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_B[] =
{
    { L"Angel B", 0x039be00, 0x039be20, indexKOF02UMSprites_Angel },
    { L"B - Time Over Lose", 0x039be20, 0x039be40, indexKOF02UMSprites_Angel, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x039be40, 0x039be60, indexKOF02UMSprites_Angel, 0x00 },
    { L"B - Electric Shock Effect", 0x039be60, 0x039be80, indexKOF02UMSprites_Angel, 0x18 },
    { L"B - MAX Flash", 0x039be80, 0x039bea0, indexKOF02UMSprites_Angel, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039bea0, 0x039bec0, indexKOF02UMSprites_Angel, 0x00 },
    { L"B - Soul Palette", 0x039bec0, 0x039bee0, indexKOF02UMSprites_Angel, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x039bee0, 0x039bf00, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_C[] =
{
    { L"Angel C", 0x039c000, 0x039c020, indexKOF02UMSprites_Angel },
    { L"C - Time Over Lose", 0x039c020, 0x039c040, indexKOF02UMSprites_Angel, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x039c040, 0x039c060, indexKOF02UMSprites_Angel, 0x00 },
    { L"C - Electric Shock Effect", 0x039c060, 0x039c080, indexKOF02UMSprites_Angel, 0x18 },
    { L"C - MAX Flash", 0x039c080, 0x039c0a0, indexKOF02UMSprites_Angel, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039c0a0, 0x039c0c0, indexKOF02UMSprites_Angel, 0x00 },
    { L"C - Soul Palette", 0x039c0c0, 0x039c0e0, indexKOF02UMSprites_Angel, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x039c0e0, 0x039c100, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_ANGEL_PALETTES_D[] =
{
    { L"Angel D", 0x039c200, 0x039c220, indexKOF02UMSprites_Angel },
    { L"D - Time Over Lose", 0x039c220, 0x039c240, indexKOF02UMSprites_Angel, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x039c240, 0x039c260, indexKOF02UMSprites_Angel, 0x00 },
    { L"D - Electric Shock Effect", 0x039c260, 0x039c280, indexKOF02UMSprites_Angel, 0x18 },
    { L"D - MAX Flash", 0x039c280, 0x039c2a0, indexKOF02UMSprites_Angel, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039c2a0, 0x039c2c0, indexKOF02UMSprites_Angel, 0x00 },
    { L"D - Soul Palette", 0x039c2c0, 0x039c2e0, indexKOF02UMSprites_Angel, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x039c2e0, 0x039c300, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_A[] =
{
    { L"Omega Rugal A", 0x039c400, 0x039c420, indexKOF02UMSprites_OmegaRugal },
    { L"A - Hidden Super Desperation Move 1", 0x039c420, 0x039c440, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x039c440, 0x039c460, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"A - Electric Shock Effect", 0x039c460, 0x039c480, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"A - MAX Flash", 0x039c480, 0x039c4a0, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"A - Superboss Intro Stuff", 0x039c4a0, 0x039c4c0, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"A - Soul Palette", 0x039c4c0, 0x039c4e0, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x039c4e0, 0x039c500, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_B[] =
{
    { L"Omega Rugal B", 0x039c600, 0x039c620, indexKOF02UMSprites_OmegaRugal },
    { L"B - Hidden Super Desperation Move 1", 0x039c620, 0x039c640, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x039c640, 0x039c660, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"B - Electric Shock Effect", 0x039c660, 0x039c680, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"B - MAX Flash", 0x039c680, 0x039c6a0, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"B - Superboss Intro Stuff", 0x039c6a0, 0x039c6c0, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"B - Soul Palette", 0x039c6c0, 0x039c6e0, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x039c6e0, 0x039c700, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_C[] =
{
    { L"Omega Rugal C", 0x039c800, 0x039c820, indexKOF02UMSprites_OmegaRugal },
    { L"C - Hidden Super Desperation Move 1", 0x039c820, 0x039c840, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x039c840, 0x039c860, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"C - Electric Shock Effect", 0x039c860, 0x039c880, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"C - MAX Flash", 0x039c880, 0x039c8a0, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"C - Superboss Intro Stuff", 0x039c8a0, 0x039c8c0, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"C - Soul Palette", 0x039c8c0, 0x039c8e0, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x039c8e0, 0x039c900, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OMEGARUGAL_PALETTES_D[] =
{
    { L"Omega Rugal D", 0x039ca00, 0x039ca20, indexKOF02UMSprites_OmegaRugal },
    { L"D - Hidden Super Desperation Move 1", 0x039ca20, 0x039ca40, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x039ca40, 0x039ca60, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"D - Electric Shock Effect", 0x039ca60, 0x039ca80, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"D - MAX Flash", 0x039ca80, 0x039caa0, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"D - Superboss Intro Stuff", 0x039caa0, 0x039cac0, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"D - Soul Palette", 0x039cac0, 0x039cae0, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x039cae0, 0x039cb00, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_A[] =
{
    { L"KUSANAGI A", 0x039cc00, 0x039cc20, indexKOF02UMSprites_Kusanagi },
    { L"A - Super Move Palette", 0x039cc20, 0x039cc40, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"A - MAX Orochinagi Fire", 0x039cc40, 0x039cc60, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"A - Electric Shock Effect", 0x039cc60, 0x039cc80, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"A - MAX Flash", 0x039cc80, 0x039cca0, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039cca0, 0x039ccc0, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"A - Soul Palette", 0x039ccc0, 0x039cce0, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x039cce0, 0x039cd00, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_B[] =
{
    { L"KUSANAGI B", 0x039ce00, 0x039ce20, indexKOF02UMSprites_Kusanagi },
    { L"B - Super Move Palette", 0x039ce20, 0x039ce40, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"B - MAX Orochinagi Fire", 0x039ce40, 0x039ce60, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"B - Electric Shock Effect", 0x039ce60, 0x039ce80, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"B - MAX Flash", 0x039ce80, 0x039cea0, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039cea0, 0x039cec0, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"B - Soul Palette", 0x039cec0, 0x039cee0, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x039cee0, 0x039cf00, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_C[] =
{
    { L"KUSANAGI C", 0x039d000, 0x039d020, indexKOF02UMSprites_Kusanagi },
    { L"C - Super Move Palette", 0x039d020, 0x039d040, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"C - MAX Orochinagi Fire", 0x039d040, 0x039d060, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"C - Electric Shock Effect", 0x039d060, 0x039d080, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"C - MAX Flash", 0x039d080, 0x039d0a0, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039d0a0, 0x039d0c0, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"C - Soul Palette", 0x039d0c0, 0x039d0e0, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x039d0e0, 0x039d100, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_D[] =
{
    { L"KUSANAGI D", 0x039d200, 0x039d220, indexKOF02UMSprites_Kusanagi },
    { L"D - Super Move Palette", 0x039d220, 0x039d240, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"D - MAX Orochinagi Fire", 0x039d240, 0x039d260, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"D - Electric Shock Effect", 0x039d260, 0x039d280, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"D - MAX Flash", 0x039d280, 0x039d2a0, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039d2a0, 0x039d2c0, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"D - Soul Palette", 0x039d2c0, 0x039d2e0, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x039d2e0, 0x039d300, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_A[] =
{
    { L"O.Yashiro A", 0x039d400, 0x039d420, indexKOF02UMSprites_YashiroOChi },
    { L"A - Hidden Super Desperation Move 1", 0x039d420, 0x039d440, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x039d440, 0x039d460, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x039d460, 0x039d480, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"A - MAX Flash", 0x039d480, 0x039d4a0, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039d4a0, 0x039d4c0, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"A - Soul Palette", 0x039d4c0, 0x039d4e0, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x039d4e0, 0x039d500, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_B[] =
{
    { L"O.Yashiro B", 0x039d600, 0x039d620, indexKOF02UMSprites_YashiroOChi },
    { L"B - Hidden Super Desperation Move 1", 0x039d620, 0x039d640, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x039d640, 0x039d660, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x039d660, 0x039d680, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"B - MAX Flash", 0x039d680, 0x039d6a0, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039d6a0, 0x039d6c0, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"B - Soul Palette", 0x039d6c0, 0x039d6e0, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x039d6e0, 0x039d700, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_C[] =
{
    { L"O.Yashiro C", 0x039d800, 0x039d820, indexKOF02UMSprites_YashiroOChi },
    { L"C - Hidden Super Desperation Move 1", 0x039d820, 0x039d840, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x039d840, 0x039d860, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x039d860, 0x039d880, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"C - MAX Flash", 0x039d880, 0x039d8a0, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039d8a0, 0x039d8c0, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"C - Soul Palette", 0x039d8c0, 0x039d8e0, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x039d8e0, 0x039d900, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OYASHIRO_PALETTES_D[] =
{
    { L"O.Yashiro D", 0x039da00, 0x039da20, indexKOF02UMSprites_YashiroOChi },
    { L"D - Hidden Super Desperation Move 1", 0x039da20, 0x039da40, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x039da40, 0x039da60, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x039da60, 0x039da80, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"D - MAX Flash", 0x039da80, 0x039daa0, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039daa0, 0x039dac0, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"D - Soul Palette", 0x039dac0, 0x039dae0, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x039dae0, 0x039db00, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_A[] =
{
    { L"O.Shermie A", 0x039dc00, 0x039dc20, indexKOF02UMSprites_ShermieOChi },
    { L"A - Hidden Super Desperation Move 1", 0x039dc20, 0x039dc40, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x039dc40, 0x039dc60, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x039dc60, 0x039dc80, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"A - MAX Flash", 0x039dc80, 0x039dca0, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039dca0, 0x039dcc0, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"A - Soul Palette", 0x039dcc0, 0x039dce0, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"A - MAX2 Lightning", 0x039dce0, 0x039dd00, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_B[] =
{
    { L"O.Shermie B", 0x039de00, 0x039de20, indexKOF02UMSprites_ShermieOChi },
    { L"B - Hidden Super Desperation Move 1", 0x039de20, 0x039de40, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x039de40, 0x039de60, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x039de60, 0x039de80, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"B - MAX Flash", 0x039de80, 0x039dea0, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039dea0, 0x039dec0, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"B - Soul Palette", 0x039dec0, 0x039dee0, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"B - MAX2 Lightning", 0x039dee0, 0x039df00, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_C[] =
{
    { L"O.Shermie C", 0x039e000, 0x039e020, indexKOF02UMSprites_ShermieOChi },
    { L"C - Hidden Super Desperation Move 1", 0x039e020, 0x039e040, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x039e040, 0x039e060, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x039e060, 0x039e080, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"C - MAX Flash", 0x039e080, 0x039e0a0, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039e0a0, 0x039e0c0, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"C - Soul Palette", 0x039e0c0, 0x039e0e0, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"C - MAX2 Lightning", 0x039e0e0, 0x039e100, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OSHERMIE_PALETTES_D[] =
{
    { L"O.Shermie D", 0x039e200, 0x039e220, indexKOF02UMSprites_ShermieOChi },
    { L"D - Hidden Super Desperation Move 1", 0x039e220, 0x039e240, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x039e240, 0x039e260, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x039e260, 0x039e280, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"D - MAX Flash", 0x039e280, 0x039e2a0, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039e2a0, 0x039e2c0, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"D - Soul Palette", 0x039e2c0, 0x039e2e0, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"D - MAX2 Lightning", 0x039e2e0, 0x039e300, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_A[] =
{
    { L"O.Chris A", 0x039e400, 0x039e420, indexKOF02Sprites_ChrisOrochi },
    { L"A - Hidden Super Desperation Move 1", 0x039e420, 0x039e440, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"A - MAX2 Orochi", 0x039e440, 0x039e460, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"A - Electric Shock Effect", 0x039e460, 0x039e480, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"A - MAX Flash", 0x039e480, 0x039e4a0, indexKOF02Sprites_ChrisOrochi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x039e4a0, 0x039e4c0, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"A - Soul Palette", 0x039e4c0, 0x039e4e0, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"A - Orochi Fire Palette", 0x039e4e0, 0x039e500, indexKOF02Sprites_ChrisOrochi, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_B[] =
{
    { L"O.Chris B", 0x039e600, 0x039e620, indexKOF02Sprites_ChrisOrochi },
    { L"B - Hidden Super Desperation Move 1", 0x039e620, 0x039e640, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"B - MAX2 Orochi", 0x039e640, 0x039e660, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"B - Electric Shock Effect", 0x039e660, 0x039e680, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"B - MAX Flash", 0x039e680, 0x039e6a0, indexKOF02Sprites_ChrisOrochi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x039e6a0, 0x039e6c0, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"B - Soul Palette", 0x039e6c0, 0x039e6e0, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"B - Orochi Fire Palette", 0x039e6e0, 0x039e700, indexKOF02Sprites_ChrisOrochi, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_C[] =
{
    { L"O.Chris C", 0x039e800, 0x039e820, indexKOF02Sprites_ChrisOrochi },
    { L"C - Hidden Super Desperation Move 1", 0x039e820, 0x039e840, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"C - MAX2 Orochi", 0x039e840, 0x039e860, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"C - Electric Shock Effect", 0x039e860, 0x039e880, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"C - MAX Flash", 0x039e880, 0x039e8a0, indexKOF02Sprites_ChrisOrochi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x039e8a0, 0x039e8c0, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"C - Soul Palette", 0x039e8c0, 0x039e8e0, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"C - Orochi Fire Palette", 0x039e8e0, 0x039e900, indexKOF02Sprites_ChrisOrochi, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_OCHRIS_PALETTES_D[] =
{
    { L"O.Chris D", 0x039ea00, 0x039ea20, indexKOF02Sprites_ChrisOrochi },
    { L"D - Hidden Super Desperation Move 1", 0x039ea20, 0x039ea40, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"D - MAX2 Orochi", 0x039ea40, 0x039ea60, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"D - Electric Shock Effect", 0x039ea60, 0x039ea80, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"D - MAX Flash", 0x039ea80, 0x039eaa0, indexKOF02Sprites_ChrisOrochi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x039eaa0, 0x039eac0, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"D - Soul Palette", 0x039eac0, 0x039eae0, indexKOF02Sprites_ChrisOrochi, 0x18 },
    { L"D - Orochi Fire Palette", 0x039eae0, 0x039eb00, indexKOF02Sprites_ChrisOrochi, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_A[] =
{
    { L"Shingo A", 0x3b2e00, 0x3b2e20, indexKOF02UMSprites_Shingo },
    { L"A - Hidden Super Desperation Move 1", 0x3b2e20, 0x3b2e40, indexKOF02UMSprites_Shingo, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x3b2e40, 0x3b2e60, indexKOF02UMSprites_Shingo, 0x00 },
    { L"A - Electric Shock Effect", 0x3b2e60, 0x3b2e80, indexKOF02UMSprites_Shingo, 0x18 },
    { L"A - MAX Flash", 0x3b2e80, 0x3b2ea0, indexKOF02UMSprites_Shingo, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x3b2ea0, 0x3b2ec0, indexKOF02UMSprites_Shingo, 0x00 },
    { L"A - Soul Palette", 0x3b2ec0, 0x3b2ee0, indexKOF02UMSprites_Shingo, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x3b2ee0, 0x3b2f00, indexKOF02UMSprites_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_B[] =
{
    { L"Shingo B", 0x3b3000, 0x3b3020, indexKOF02UMSprites_Shingo },
    { L"B - Hidden Super Desperation Move 1", 0x3b3020, 0x3b3040, indexKOF02UMSprites_Shingo, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x3b3040, 0x3b3060, indexKOF02UMSprites_Shingo, 0x00 },
    { L"B - Electric Shock Effect", 0x3b3060, 0x3b3080, indexKOF02UMSprites_Shingo, 0x18 },
    { L"B - MAX Flash", 0x3b3080, 0x3b30a0, indexKOF02UMSprites_Shingo, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x3b30a0, 0x3b30c0, indexKOF02UMSprites_Shingo, 0x00 },
    { L"B - Soul Palette", 0x3b30c0, 0x3b30e0, indexKOF02UMSprites_Shingo, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x3b30e0, 0x3b3100, indexKOF02UMSprites_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_C[] =
{
    { L"Shingo C", 0x3b3200, 0x3b3220, indexKOF02UMSprites_Shingo },
    { L"C - Hidden Super Desperation Move 1", 0x3b3220, 0x3b3240, indexKOF02UMSprites_Shingo, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x3b3240, 0x3b3260, indexKOF02UMSprites_Shingo, 0x00 },
    { L"C - Electric Shock Effect", 0x3b3260, 0x3b3280, indexKOF02UMSprites_Shingo, 0x18 },
    { L"C - MAX Flash", 0x3b3280, 0x3b32a0, indexKOF02UMSprites_Shingo, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x3b32a0, 0x3b32c0, indexKOF02UMSprites_Shingo, 0x00 },
    { L"C - Soul Palette", 0x3b32c0, 0x3b32e0, indexKOF02UMSprites_Shingo, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x3b32e0, 0x3b3300, indexKOF02UMSprites_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_D[] =
{
    { L"Shingo D", 0x3b3400, 0x3b3420, indexKOF02UMSprites_Shingo },
    { L"D - Hidden Super Desperation Move 1", 0x3b3420, 0x3b3440, indexKOF02UMSprites_Shingo, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x3b3440, 0x3b3460, indexKOF02UMSprites_Shingo, 0x00 },
    { L"D - Electric Shock Effect", 0x3b3460, 0x3b3480, indexKOF02UMSprites_Shingo, 0x18 },
    { L"D - MAX Flash", 0x3b3480, 0x3b34a0, indexKOF02UMSprites_Shingo, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x3b34a0, 0x3b34c0, indexKOF02UMSprites_Shingo, 0x00 },
    { L"D - Soul Palette", 0x3b34c0, 0x3b34e0, indexKOF02UMSprites_Shingo, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x3b34e0, 0x3b3500, indexKOF02UMSprites_Shingo, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_A[] =
{
    { L"King A", 0x3b3600, 0x3b3620, indexKOF02UMSprites_King },
    { L"A - Rose and Kick Effects", 0x3b3620, 0x3b3640, indexKOF02UMSprites_King, 0x04 },
    { L"A - Desperation Move / Super Desperation Move", 0x3b3640, 0x3b3660, indexKOF02UMSprites_King, 0x00 },
    { L"A - Electric Shock Effect", 0x3b3660, 0x3b3680, indexKOF02UMSprites_King, 0x18 },
    { L"A - MAX Flash", 0x3b3680, 0x3b36a0, indexKOF02UMSprites_King, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x3b36a0, 0x3b36c0, indexKOF02UMSprites_King, 0x00 },
    { L"A - Soul Palette", 0x3b36c0, 0x3b36e0, indexKOF02UMSprites_King, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x3b36e0, 0x3b3700, indexKOF02UMSprites_King, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_B[] =
{
    { L"King B", 0x3b3800, 0x3b3820, indexKOF02UMSprites_King },
    { L"B - Rose and Kick Effects", 0x3b3820, 0x3b3840, indexKOF02UMSprites_King, 0x04 },
    { L"B - Desperation Move / Super Desperation Move", 0x3b3840, 0x3b3860, indexKOF02UMSprites_King, 0x00 },
    { L"B - Electric Shock Effect", 0x3b3860, 0x3b3880, indexKOF02UMSprites_King, 0x18 },
    { L"B - MAX Flash", 0x3b3880, 0x3b38a0, indexKOF02UMSprites_King, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x3b38a0, 0x3b38c0, indexKOF02UMSprites_King, 0x00 },
    { L"B - Soul Palette", 0x3b38c0, 0x3b38e0, indexKOF02UMSprites_King, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x3b38e0, 0x3b3900, indexKOF02UMSprites_King, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_C[] =
{
    { L"King C", 0x3b3a00, 0x3b3a20, indexKOF02UMSprites_King },
    { L"C - Rose and Kick Effects", 0x3b3a20, 0x3b3a40, indexKOF02UMSprites_King, 0x04 },
    { L"C - Desperation Move / Super Desperation Move", 0x3b3a40, 0x3b3a60, indexKOF02UMSprites_King, 0x00 },
    { L"C - Electric Shock Effect", 0x3b3a60, 0x3b3a80, indexKOF02UMSprites_King, 0x18 },
    { L"C - MAX Flash", 0x3b3a80, 0x3b3aa0, indexKOF02UMSprites_King, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x3b3aa0, 0x3b3ac0, indexKOF02UMSprites_King, 0x00 },
    { L"C - Soul Palette", 0x3b3ac0, 0x3b3ae0, indexKOF02UMSprites_King, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x3b3ae0, 0x3b3b00, indexKOF02UMSprites_King, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_D[] =
{
    { L"King D", 0x3b3c00, 0x3b3c20, indexKOF02UMSprites_King },
    { L"D - Rose and Kick Effects", 0x3b3c20, 0x3b3c40, indexKOF02UMSprites_King, 0x04 },
    { L"D - Desperation Move / Super Desperation Move", 0x3b3c40, 0x3b3c60, indexKOF02UMSprites_King, 0x00 },
    { L"D - Electric Shock Effect", 0x3b3c60, 0x3b3c80, indexKOF02UMSprites_King, 0x18 },
    { L"D - MAX Flash", 0x3b3c80, 0x3b3ca0, indexKOF02UMSprites_King, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x3b3ca0, 0x3b3cc0, indexKOF02UMSprites_King, 0x00 },
    { L"D - Soul Palette", 0x3b3cc0, 0x3b3ce0, indexKOF02UMSprites_King, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x3b3ce0, 0x3b3d00, indexKOF02UMSprites_King, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_A[] =
{
    { L"Orochi Iori A", 0x3b6800, 0x3b6820, indexKOF02UMSprites_OrochiIori },
    { L"A - Hidden Super Desperation Move 1", 0x3b6820, 0x3b6840, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x3b6840, 0x3b6860, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"A - Electric Shock Effect", 0x3b6860, 0x3b6880, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"A - MAX Flash", 0x3b6880, 0x3b68a0, indexKOF02UMSprites_OrochiIori, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x3b68a0, 0x3b68c0, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"A - Soul Palette", 0x3b68c0, 0x3b68e0, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x3b68e0, 0x3b6900, indexKOF02UMSprites_OrochiIori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_B[] =
{
    { L"Orochi Iori B", 0x3b6a00, 0x3b6a20, indexKOF02UMSprites_OrochiIori },
    { L"B - Hidden Super Desperation Move 1", 0x3b6a20, 0x3b6a40, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x3b6a40, 0x3b6a60, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"B - Electric Shock Effect", 0x3b6a60, 0x3b6a80, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"B - MAX Flash", 0x3b6a80, 0x3b6aa0, indexKOF02UMSprites_OrochiIori, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x3b6aa0, 0x3b6ac0, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"B - Soul Palette", 0x3b6ac0, 0x3b6ae0, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x3b6ae0, 0x3b6b00, indexKOF02UMSprites_OrochiIori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_C[] =
{
    { L"Orochi Iori C", 0x3b6c00, 0x3b6c20, indexKOF02UMSprites_OrochiIori },
    { L"C - Hidden Super Desperation Move 1", 0x3b6c20, 0x3b6c40, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x3b6c40, 0x3b6c60, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"C - Electric Shock Effect", 0x3b6c60, 0x3b6c80, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"C - MAX Flash", 0x3b6c80, 0x3b6ca0, indexKOF02UMSprites_OrochiIori, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x3b6ca0, 0x3b6cc0, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"C - Soul Palette", 0x3b6cc0, 0x3b6ce0, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x3b6ce0, 0x3b6d00, indexKOF02UMSprites_OrochiIori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_D[] =
{
    { L"Orochi Iori D", 0x3b6e00, 0x3b6e20, indexKOF02UMSprites_OrochiIori },
    { L"D - Hidden Super Desperation Move 1", 0x3b6e20, 0x3b6e40, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x3b6e40, 0x3b6e60, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"D - Electric Shock Effect", 0x3b6e60, 0x3b6e80, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"D - MAX Flash", 0x3b6e80, 0x3b6ea0, indexKOF02UMSprites_OrochiIori, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x3b6ea0, 0x3b6ec0, indexKOF02UMSprites_OrochiIori, 0x00 },
    { L"D - Soul Palette", 0x3b6ec0, 0x3b6ee0, indexKOF02UMSprites_OrochiIori, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x3b6ee0, 0x3b6f00, indexKOF02UMSprites_OrochiIori, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_A[] =
{
    { L"Geese A", 0x3b7000, 0x3b7020, indexKOF02UMSprites_Geese },
    { L"A - Hidden Super Desperation Move 1", 0x3b7020, 0x3b7040, indexKOF02UMSprites_Geese, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x3b7040, 0x3b7060, indexKOF02UMSprites_Geese, 0x00 },
    { L"A - Electric Shock Effect", 0x3b7060, 0x3b7080, indexKOF02UMSprites_Geese, 0x18 },
    { L"A - MAX Flash", 0x3b7080, 0x3b70a0, indexKOF02UMSprites_Geese, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x3b70a0, 0x3b70c0, indexKOF02UMSprites_Geese, 0x00 },
    { L"A - Soul Palette", 0x3b70c0, 0x3b70e0, indexKOF02UMSprites_Geese, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x3b70e0, 0x3b7100, indexKOF02UMSprites_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_B[] =
{
    { L"Geese B", 0x3b7200, 0x3b7220, indexKOF02UMSprites_Geese },
    { L"B - Hidden Super Desperation Move 1", 0x3b7220, 0x3b7240, indexKOF02UMSprites_Geese, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x3b7240, 0x3b7260, indexKOF02UMSprites_Geese, 0x00 },
    { L"B - Electric Shock Effect", 0x3b7260, 0x3b7280, indexKOF02UMSprites_Geese, 0x18 },
    { L"B - MAX Flash", 0x3b7280, 0x3b72a0, indexKOF02UMSprites_Geese, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x3b72a0, 0x3b72c0, indexKOF02UMSprites_Geese, 0x00 },
    { L"B - Soul Palette", 0x3b72c0, 0x3b72e0, indexKOF02UMSprites_Geese, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x3b72e0, 0x3b7300, indexKOF02UMSprites_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_C[] =
{
    { L"Geese C", 0x3b7400, 0x3b7420, indexKOF02UMSprites_Geese },
    { L"C - Hidden Super Desperation Move 1", 0x3b7420, 0x3b7440, indexKOF02UMSprites_Geese, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x3b7440, 0x3b7460, indexKOF02UMSprites_Geese, 0x00 },
    { L"C - Electric Shock Effect", 0x3b7460, 0x3b7480, indexKOF02UMSprites_Geese, 0x18 },
    { L"C - MAX Flash", 0x3b7480, 0x3b74a0, indexKOF02UMSprites_Geese, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x3b74a0, 0x3b74c0, indexKOF02UMSprites_Geese, 0x00 },
    { L"C - Soul Palette", 0x3b74c0, 0x3b74e0, indexKOF02UMSprites_Geese, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x3b74e0, 0x3b7500, indexKOF02UMSprites_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_D[] =
{
    { L"Geese D", 0x3b7600, 0x3b7620, indexKOF02UMSprites_Geese },
    { L"D - Hidden Super Desperation Move 1", 0x3b7620, 0x3b7640, indexKOF02UMSprites_Geese, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x3b7640, 0x3b7660, indexKOF02UMSprites_Geese, 0x00 },
    { L"D - Electric Shock Effect", 0x3b7660, 0x3b7680, indexKOF02UMSprites_Geese, 0x18 },
    { L"D - MAX Flash", 0x3b7680, 0x3b76a0, indexKOF02UMSprites_Geese, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x3b76a0, 0x3b76c0, indexKOF02UMSprites_Geese, 0x00 },
    { L"D - Soul Palette", 0x3b76c0, 0x3b76e0, indexKOF02UMSprites_Geese, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x3b76e0, 0x3b7700, indexKOF02UMSprites_Geese, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_A[] =
{
    { L"Goenitz A", 0x3b7800, 0x3b7820, indexKOF02UMSprites_Goenitz },
    { L"A - Hidden Super Desperation Move 1", 0x3b7820, 0x3b7840, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x3b7840, 0x3b7860, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"A - Electric Shock Effect", 0x3b7860, 0x3b7880, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"A - MAX Flash", 0x3b7880, 0x3b78a0, indexKOF02UMSprites_Goenitz, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x3b78a0, 0x3b78c0, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"A - Soul Palette", 0x3b78c0, 0x3b78e0, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x3b78e0, 0x3b7900, indexKOF02UMSprites_Goenitz, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_B[] =
{
    { L"Goenitz B", 0x3b7a00, 0x3b7a20, indexKOF02UMSprites_Goenitz },
    { L"B - Hidden Super Desperation Move 1", 0x3b7a20, 0x3b7a40, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x3b7a40, 0x3b7a60, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"B - Electric Shock Effect", 0x3b7a60, 0x3b7a80, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"B - MAX Flash", 0x3b7a80, 0x3b7aa0, indexKOF02UMSprites_Goenitz, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x3b7aa0, 0x3b7ac0, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"B - Soul Palette", 0x3b7ac0, 0x3b7ae0, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x3b7ae0, 0x3b7b00, indexKOF02UMSprites_Goenitz, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_C[] =
{
    { L"Goenitz C", 0x3b7c00, 0x3b7c20, indexKOF02UMSprites_Goenitz },
    { L"C - Hidden Super Desperation Move 1", 0x3b7c20, 0x3b7c40, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x3b7c40, 0x3b7c60, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"C - Electric Shock Effect", 0x3b7c60, 0x3b7c80, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"C - MAX Flash", 0x3b7c80, 0x3b7ca0, indexKOF02UMSprites_Goenitz, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x3b7ca0, 0x3b7cc0, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"C - Soul Palette", 0x3b7cc0, 0x3b7ce0, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x3b7ce0, 0x3b7d00, indexKOF02UMSprites_Goenitz, 0x00 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_D[] =
{
    { L"Goenitz D", 0x3b7e00, 0x3b7e20, indexKOF02UMSprites_Goenitz },
    { L"D - Hidden Super Desperation Move 1", 0x3b7e20, 0x3b7e40, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x3b7e40, 0x3b7e60, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"D - Electric Shock Effect", 0x3b7e60, 0x3b7e80, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"D - MAX Flash", 0x3b7e80, 0x3b7ea0, indexKOF02UMSprites_Goenitz, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x3b7ea0, 0x3b7ec0, indexKOF02UMSprites_Goenitz, 0x00 },
    { L"D - Soul Palette", 0x3b7ec0, 0x3b7ee0, indexKOF02UMSprites_Goenitz, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x3b7ee0, 0x3b7f00, indexKOF02UMSprites_Goenitz, 0x00 },
};

#pragma endregion auto-generated


const sGame_PaletteDataset KOF02PS2_A_Kyo_PALETTES_SHARED[] =
{
    { L"Intro Stuff and Orochinagi Fire",   0x9eb62 + 0x30009E, 0x9eb82 + 0x30009E, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"General Fire Stuff",                0x9eb82 + 0x30009E, 0x9eba2 + 0x30009E, indexKOF02UMSprites_KyoKusa, 0x10 },
    { L"Fire Ball/DP Fire",                 0x9eba2 + 0x30009E, 0x9ebc2 + 0x30009E, indexKOF02UMSprites_KyoKusa, 0x09 },
    { L"Orochinagi Fire Extra",             0x9ec22 + 0x30009E, 0x9ec42 + 0x30009E, indexKOF02UMSprites_KyoKusa, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Benimaru_PALETTES_SHARED[] =
{
    { L"Iaido/Lightning Kick",          0x9ed62 + 0x30009E, 0x9ed82 + 0x30009E, indexKOF02UMSprites_Benimaru, 0x02 },
    { L"Raikouken",                     0x9ed82 + 0x30009E, 0x9eda2 + 0x30009E, indexKOF02UMSprites_Benimaru, 0x05 },
    { L"Raijiken and Electrtrigger",    0x9eda2 + 0x30009E, 0x9edc2 + 0x30009E, indexKOF02UMSprites_Benimaru, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Terry_PALETTES_SHARED[] =
{
    { L"Burn Knuckle Effects",          0x9f162 + 0x30009E, 0x9f182 + 0x30009E, indexKOF02UMSprites_Terry, 0x04 },
    { L"Power Wave and Dunk",           0x9f182 + 0x30009E, 0x9f1a2 + 0x30009E, indexKOF02UMSprites_Terry, 0x02 },
    { L"Power Geyser and P. Wave Hit",  0x9f1a2 + 0x30009E, 0x9f1c2 + 0x30009E, indexKOF02UMSprites_Terry, 0x03 },
    { L"MAX2 Super",                    0x9f1c2 + 0x30009E, 0x9f1e2 + 0x30009E, indexKOF02UMSprites_Terry, 0x09 },
    { L"Round Wave",                    0x9f262 + 0x30009E, 0x9f282 + 0x30009E, indexKOF02UMSprites_Terry, 0x05 },
};

const sGame_PaletteDataset KOF02PS2_A_Andy_PALETTES_SHARED[] =
{
    { L"Hishouken",                 0x9f362 + 0x30009E, 0x9f382 + 0x30009E, indexKOF02UMSprites_Andy, 0x3 },
    { L"Geki Hishouken",            0x9f382 + 0x30009E, 0x9f3a2 + 0x30009E, indexKOF02UMSprites_Andy, 0x4 },
    { L"Shoryudan Effects",         0x9f3a2 + 0x30009E, 0x9f3c2 + 0x30009E, indexKOF02UMSprites_Andy, 0x2 },
    { L"SDM/MAX Fire",              0x9f402 + 0x30009E, 0x9f422 + 0x30009E, indexKOF02UMSprites_Andy, 0x12 },
    { L"Zan Ei Comet Punch Main",   0x9f422 + 0x30009E, 0x9f442 + 0x30009E, indexKOF02UMSprites_Andy, 0x10 },
    { L"Zan Ei Comet Punch Extra",  0x9f442 + 0x30009E, 0x9f462 + 0x30009E },
};

const sGame_PaletteDataset KOF02PS2_A_Joe_PALETTES_SHARED[] =
{
    { L"Hurricane Upper",           0x9f562 + 0x30009E, 0x9f582 + 0x30009E, indexKOF02UMSprites_Joe, 0x02 },
    { L"SDM Screw Upper Startup",   0x9f582 + 0x30009E, 0x9f5a2 + 0x30009E, indexKOF02UMSprites_Joe, 0x02 },
    { L"Screw Upper SDM",           0x9f5a2 + 0x30009E, 0x9f5c2 + 0x30009E, indexKOF02UMSprites_Joe, 0x11 },
    { L"Kick Moves",                0x9f5c2 + 0x30009E, 0x9f5e2 + 0x30009E, indexKOF02UMSprites_Joe, 0x10 },
    { L"Hurricane Upper Effects",   0x9f5e2 + 0x30009E, 0x9f602 + 0x30009E, indexKOF02UMSprites_Joe, 0x10 },
    { L"Screw Upper MAX",           0x9f602 + 0x30009E, 0x9f622 + 0x30009E, indexKOF02UMSprites_Joe, 0x11 },
    { L"Tiger Kick Effects",        0x9f622 + 0x30009E, 0x9f642 + 0x30009E, indexKOF02UMSprites_Joe, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Chang_PALETTES_SHARED[] =
{
    { L"Drumming Iron Ball Dust", 0x9f962 + 0x30009E, 0x9f982 + 0x30009E, indexKOF02UMSprites_Chang, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_Choi_PALETTES_SHARED[] =
{
    { L"Tornado Attacks",               0x9fb62 + 0x30009E, 0x9fb82 + 0x30009E, indexKOF02UMSprites_Choi, 0x02 },
    { L"Tornado Ripper Lightning",      0x9fba2 + 0x30009E, 0x9fbc2 + 0x30009E, indexKOF02UMSprites_Choi, 0x11 },
    { L"Rolling Charger Super Effects", 0x9fbc2 + 0x30009E, 0x9fbe2 + 0x30009E, indexKOF02UMSprites_Choi, 0x10 },
    { L"MAX2 Attack",                   0x9fbe2 + 0x30009E, 0x9fc02 + 0x30009E, indexKOF02UMSprites_Choi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Athena_PALETTES_SHARED[] =
{
    { L"SDM Orbs",                          0x9fd62 + 0x30009E, 0x9fd82 + 0x30009E, indexKOF02UMSprites_Athena, 0x10 },
    { L"Psycho Ball Hit",                   0x9fde2 + 0x30009E, 0x9fe02 + 0x30009E, indexKOF02UMSprites_Athena, 0x03 },
    { L"SDM Stuff and Portals",             0x9fe02 + 0x30009E, 0x9fe22 + 0x30009E, indexKOF02UMSprites_Athena, 0x11 },
    { L"Psycho Reflector and SDM Finisher", 0x9fe42 + 0x30009E, 0x9fe62 + 0x30009E },
};

const sGame_PaletteDataset KOF02PS2_A_Kensou_PALETTES_SHARED[] =
{
    { L"Psycho Ball",       0x9ff62 + 0x30009E, 0x9ff82 + 0x30009E, indexKOF02UMSprites_Kensou, 0x02 },
    { L"Psycho Ball Hit",   0x9ff82 + 0x30009E, 0x9ffa2 + 0x30009E, indexKOF02UMSprites_Kensou, 0x03 },
    { L"MAX Burst",         0x9ffa2 + 0x30009E, 0x9ffc2 + 0x30009E, indexKOF02UMSprites_Kensou, 0x10 },
    { L"MAX2 Powerup Orb",  0x9ffe2 + 0x30009E, 0xa0002 + 0x30009E, indexKOF02UMSprites_Kensou, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Chin_PALETTES_SHARED[] =
{
    { L"Main Fire",     0xa0162 + 0x30009E, 0xa0182 + 0x30009E, indexKOF02UMSprites_Chin, 0x02 },
    { L"Extra Fire",    0xa01a2 + 0x30009E, 0xa01c2 + 0x30009E, indexKOF02UMSprites_Chin, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Leona_PALETTES_SHARED[] =
{
    { L"X-Caliber and Ground Sabre",    0xa0362 + 0x30009E, 0xa0382 + 0x30009E, indexKOF02UMSprites_Leona, 0x03 },
    { L"Voltaic Launcher",              0xa0382 + 0x30009E, 0xa03a2 + 0x30009E, indexKOF02UMSprites_Leona, 0x02 },
    { L"V-Slasher",                     0xa03a2 + 0x30009E, 0xa03c2 + 0x30009E, indexKOF02UMSprites_Leona, 0x07 },
    { L"Moon Slasher",                  0xa0482 + 0x30009E, 0xa04a2 + 0x30009E, indexKOF02UMSprites_Leona, 0x04 },
    { L"Slasher Move Extras",           0xa03e2 + 0x30009E, 0xa0402 + 0x30009E, indexKOF02UMSprites_Leona, 0x05 },
    { L"Revolver Spark",                0xa0402 + 0x30009E, 0xa0422 + 0x30009E, indexKOF02UMSprites_Leona, 0x11 },
    { L"Ring Bomb",                     0xa0422 + 0x30009E, 0xa0442 + 0x30009E, indexKOF02UMSprites_Leona, 0x1a },
    { L"Grateful Dead Dust",            0xa0442 + 0x30009E, 0xa0462 + 0x30009E, indexKOF02UMSprites_Leona, 0x10 },
};

const sGame_PaletteDataset KOF02PS2_A_Ralf_PALETTES_SHARED[] =
{
    { L"MAX2 Super Dust", 0xa0562 + 0x30009E, 0xa0582 + 0x30009E, indexKOF02UMSprites_Ralf, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Ryo_PALETTES_SHARED[] =
{
    { L"Special Moves",     0xa0962 + 0x30009E, 0xa0982 + 0x30009E, indexKOF02UMSprites_Ryo, 0x02 },
    { L"Hao Shokouken Hit", 0xa0982 + 0x30009E, 0xa09a2 + 0x30009E, indexKOF02UMSprites_Ryo, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Robert_PALETTES_SHARED[] =
{
    { L"Hao Shokouken",                         0xa0b62 + 0x30009E, 0xa0b82 + 0x30009E, indexKOF02UMSprites_Robert, 0x04 },
    { L"MAX2 Tiger Finisher and Super Extras",  0xa0b82 + 0x30009E, 0xa0ba2 + 0x30009E, indexKOF02UMSprites_Robert, 0x05 },
    { L"Projectile Hit",                        0xa0c02 + 0x30009E, 0xa0c22 + 0x30009E, indexKOF02UMSprites_Robert, 0x03 },
    { L"Projectile",                            0xa0c42 + 0x30009E, 0xa0c62 + 0x30009E, indexKOF02UMSprites_Robert, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_Takuma_PALETTES_SHARED[] =
{
    { L"Kouken", 0xa0d62 + 0x30009E, 0xa0d82 + 0x30009E, indexKOF02UMSprites_Takuma, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Mai_PALETTES_SHARED[] =
{
    { L"MAX2 Fire",                                 0xa0f62 + 0x30009E, 0xa0f82 + 0x30009E, indexKOF02UMSprites_Mai, 0x02 },
    { L"Ryu en Bu Fire",                            0xa0fa2 + 0x30009E, 0xa0fc2 + 0x30009E, indexKOF02UMSprites_Mai, 0x04 },
    { L"MAX2 Hold C Wedding Dress and Fan Extra",   0xa0fc2 + 0x30009E, 0xa0fe2 + 0x30009E, indexKOF02UMSprites_Mai, 0x1c },
    { L"Sakura Flowers and SDM/MAX Fire",           0xa1002 + 0x30009E, 0xa1022 + 0x30009E, indexKOF02UMSprites_Mai, 0x1b },
    { L"MAX2 Fire Pillar",                          0xa1042 + 0x30009E, 0xa1062 + 0x30009E, indexKOF02UMSprites_Mai, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Yuri_PALETTES_SHARED[] =
{
    { L"Kouken",                0xa1182 + 0x30009E, 0xa11a2 + 0x30009E, indexKOF02UMSprites_Yuri, 0x03 },
    { L"Cypher",                0xa11a2 + 0x30009E, 0xa11c2 + 0x30009E, indexKOF02UMSprites_Yuri, 0x02 },
    { L"Raiouken",              0xa1202 + 0x30009E, 0xa1222 + 0x30009E, indexKOF02UMSprites_Yuri, 0x05 },
    { L"Hao Shokouken Stuff",   0xa1242 + 0x30009E, 0xa1262 + 0x30009E, indexKOF02UMSprites_Yuri, 0x04 },
};

const sGame_PaletteDataset KOF02PS2_A_MayLee_PALETTES_SHARED[] =
{
    { L"Disposition Frog MAX Attack", 0xa1362 + 0x30009E, 0xa1382 + 0x30009E, indexKOF02UMSprites_MayLee, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Iori_PALETTES_SHARED[] =
{
    { L"Fireball and Flame Comber Fire",    0xa1562 + 0x30009E, 0xa1582 + 0x30009E, indexKOF02UMSprites_Iori, 0x04 },
    { L"Dark Thrust Dust",                  0xa1582 + 0x30009E, 0xa15a2 + 0x30009E, indexKOF02UMSprites_Iori, 0x06 },
    { L"SDM Followup Attack",               0xa15c2 + 0x30009E, 0xa15e2 + 0x30009E, indexKOF02UMSprites_Iori, 0x10 },
    { L"VS Kyo Intro Stuff",                0xa15e2 + 0x30009E, 0xa1602 + 0x30009E, indexKOF02UMSprites_Iori, 0x05 },
    { L"Dark Thrust Fire",                  0xa1602 + 0x30009E, 0xa1622 + 0x30009E, indexKOF02UMSprites_Iori, 0x02 },
    { L"MAX2 Fire Pillar",                  0xa1642 + 0x30009E, 0xa1662 + 0x30009E, indexKOF02UMSprites_Iori, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Mature_PALETTES_SHARED[] =
{
    { L"Ebony Tears and SDM/MAX Finisher",  0xa1762 + 0x30009E, 0xa1782 + 0x30009E, indexKOF02UMSprites_Mature, 0x02 },
    { L"Special Attack Effects",            0xa1782 + 0x30009E, 0xa17a2 + 0x30009E, indexKOF02UMSprites_Mature, 0x02 },
    { L"SDM Heaven's Gate",                 0xa17a2 + 0x30009E, 0xa17c2 + 0x30009E, indexKOF02UMSprites_Mature, 0x10 },
    //This isn't heaven's gate ... { L"MAX Heaven's Gate",                 0xa17e2 + 0x30009E, 0xa1802 + 0x30009E, indexKOF02UMSprites_Mature, 0x09 },
    { L"MAX Heaven's Gate",                 0xa1802 + 0x30009E, 0xa1822 + 0x30009E, indexKOF02UMSprites_Mature, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Vice_PALETTES_SHARED[] =
{
    { L"Outrage and Ravenous",  0xa1962 + 0x30009E, 0xa1982 + 0x30009E, indexKOF02UMSprites_Vice, 0x02 },
    { L"SDM Effects",           0xa19a2 + 0x30009E, 0xa19c2 + 0x30009E, indexKOF02UMSprites_Vice, 0x10 },
    { L"MAX Effects",           0xa19c2 + 0x30009E, 0xa19e2 + 0x30009E, indexKOF02UMSprites_Vice, 0x0a },
};

const sGame_PaletteDataset KOF02PS2_A_Yamazaki_PALETTES_SHARED[] =
{
    { L"Drill Super Main Attack",   0xa1b62 + 0x30009E, 0xa1b82 + 0x30009E, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"Special Move Sand",         0xa1b82 + 0x30009E, 0xa1ba2 + 0x30009E, indexKOF02UMSprites_Yamazaki, 0x02 },
    { L"Double Return Projectile",  0xa1c02 + 0x30009E, 0xa1c22 + 0x30009E, indexKOF02UMSprites_Yamazaki, 0x04 },
    { L"Double Return Hit",         0xa1c22 + 0x30009E, 0xa1c42 + 0x30009E, indexKOF02UMSprites_Yamazaki, 0x05 },
};

const sGame_PaletteDataset KOF02PS2_A_BlueMary_PALETTES_SHARED[] =
{
    { L"Stun Fang Followup Attack", 0xa1d62 + 0x30009E, 0xa1d82 + 0x30009E, indexKOF02UMSprites_BlueMary, 0x03 },
    { L"M.Splash Rose Finisher",    0xa1d82 + 0x30009E, 0xa1da2 + 0x30009E, indexKOF02UMSprites_BlueMary, 0x02 },
    { L"Rose Stuff",                0xa1dc2 + 0x30009E, 0xa1de2 + 0x30009E, indexKOF02UMSprites_BlueMary, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_Billy_PALETTES_SHARED[] =
{
    { L"Fire Wheel",        0xa1f62 + 0x30009E, 0xa1f82 + 0x30009E, indexKOF02UMSprites_Billy, 0x03 },
    { L"Fire Wheel Hit",    0xa1f82 + 0x30009E, 0xa1fa2 + 0x30009E, indexKOF02UMSprites_Billy, 0x04 },
    { L"Fire Pillar",       0xa2042 + 0x30009E, 0xa2062 + 0x30009E, indexKOF02UMSprites_Billy, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_Yashiro_PALETTES_SHARED[] =
{
    { L"Special Move Dust", 0xa2182 + 0x30009E, 0xa21a2 + 0x30009E, indexKOF02UMSprites_Yashiro, 0x02 },
    { L"SDM Effects",       0xa21c2 + 0x30009E, 0xa21e2 + 0x30009E, indexKOF02UMSprites_Yashiro, 0x10 },
    { L"MAX Effects",       0xa21e2 + 0x30009E, 0xa2202 + 0x30009E, indexKOF02UMSprites_Yashiro, 0x10 },
};

const sGame_PaletteDataset KOF02PS2_A_Shermie_PALETTES_SHARED[] =
{
    { L"MAX2 Attack", 0xa2382 + 0x30009E, 0xa23a2 + 0x30009E },
};

const sGame_PaletteDataset KOF02PS2_A_Chris_PALETTES_SHARED[] =
{
    { L"MAX2 Transformation",           0xa2562 + 0x30009E, 0xa2582 + 0x30009E, indexKOF02UMSprites_Chris, 0x04 },
    { L"Super and Special Effects 1",   0xa2582 + 0x30009E, 0xa25a2 + 0x30009E, indexKOF02UMSprites_Chris, 0x02 },
    { L"Super and Special Effects 2",   0xa25a2 + 0x30009E, 0xa25c2 + 0x30009E, indexKOF02UMSprites_Chris, 0x02 },
    { L"Chain Slide Touch Effects",     0xa25c2 + 0x30009E, 0xa25e2 + 0x30009E, indexKOF02UMSprites_Chris, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_K_PALETTES_SHARED[] =
{
    { L"Fire Stuff", 0xa2762 + 0x30009E, 0xa2782 + 0x30009E, indexKOF02UMSprites_K, 0x02 },
};

const sGame_PaletteDataset KOF02PS2_A_Maxima_PALETTES_SHARED[] =
{
    { L"Bunker Buster Dust",            0xa2962 + 0x30009E, 0xa2982 + 0x30009E, indexKOF02UMSprites_Maxima, 0x1a },
    { L"Bunker Buster Effects",         0xa2982 + 0x30009E, 0xa29a2 + 0x30009E, indexKOF02UMSprites_Maxima, 0x02 },
    { L"Vapor Cannon Dust",             0xa29a2 + 0x30009E, 0xa29c2 + 0x30009E, indexKOF02UMSprites_Maxima, 0x05 },
    { L"Intro Stuff",                   0xa29e2 + 0x30009E, 0xa2a02 + 0x30009E, indexKOF02UMSprites_Maxima, 0x19 },
    { L"Grab Special and MAX Sparks",   0xa2a02 + 0x30009E, 0xa2a22 + 0x30009E, indexKOF02UMSprites_Maxima, 0x04 },
    { L"M2 Maxima Beam",                0xa2a22 + 0x30009E, 0xa2a42 + 0x30009E, indexKOF02UMSprites_Maxima, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Whip_PALETTES_SHARED[] =
{
    { L"Desert Eagle Dust",     0xa2b62 + 0x30009E, 0xa2b82 + 0x30009E, indexKOF02UMSprites_Whip, 0x19 },
    { L"Sonic Slaughter Dust",  0xa2ba2 + 0x30009E, 0xa2bc2 + 0x30009E, indexKOF02UMSprites_Whip, 0x02 },
    { L"MAX2 Gunblast",         0xa2bc2 + 0x30009E, 0xa2be2 + 0x30009E, indexKOF02UMSprites_Whip, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_Vanessa_PALETTES_SHARED[] =
{
    { L"Gaea Gear MAX2",    0xa2d62 + 0x30009E, 0xa2d82 + 0x30009E, indexKOF02UMSprites_Vanessa, 0x09 },
    { L"Forbidden Eagle",   0xa2d82 + 0x30009E, 0xa2da2 + 0x30009E, indexKOF02UMSprites_Vanessa, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Seth_PALETTES_SHARED[] =
{
    { L"Rising Sun",    0xa2f62 + 0x30009E, 0xa2f82 + 0x30009E, indexKOF02UMSprites_Seth, 0x02 },
    { L"SDM Dust",      0xa2f82 + 0x30009E, 0xa2fa2 + 0x30009E, indexKOF02UMSprites_Seth, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_Ramon_PALETTES_SHARED[] =
{
    { L"Flower", 0xa3162 + 0x30009E, 0xa3182 + 0x30009E, indexKOF02UMSprites_Ramon, 0x19 },
};

const sGame_PaletteDataset KOF02PS2_A_Kula_PALETTES_SHARED[] =
{
    { L"Ice Attacks and Extras", 0xa3362 + 0x30009E, 0xa3382 + 0x30009E, indexKOF02UMSprites_Kula, 0x03 },
    { L"Block Effects",         0xa3382 + 0x30009E, 0xa33a2 + 0x30009E, indexKOF02UMSprites_Kula, 0x1e },
    { L"Idle Animation Ice",    0xa33a2 + 0x30009E, 0xa33c2 + 0x30009E, indexKOF02UMSprites_Kula, 0x1a },
    { L"Diamond Breath",        0xa33c2 + 0x30009E, 0xa33e2 + 0x30009E, indexKOF02UMSprites_Kula, 0x04 },
    { L"Diamond Edge Super",    0xa33e2 + 0x30009E, 0xa3402 + 0x30009E, indexKOF02UMSprites_Kula, 0x05 },
    { L"MAX Freeze Screen",     0xa3402 + 0x30009E, 0xa3422 + 0x30009E, indexKOF02UMSprites_Kula, 0x09 },
    { L"Candy Stuff",           0xa3442 + 0x30009E, 0xa3462 + 0x30009E, indexKOF02UMSprites_Kula, 0x1d },
};

const sGame_PaletteDataset KOF02PS2_A_K9999_PALETTES_SHARED[] =
{
    { L"Special Move Fire",         0xa3562 + 0x30009E, 0xa3582 + 0x30009E, indexKOF02Sprites_K9999, 0x10 },
    { L"Special Move Dust",         0xa3582 + 0x30009E, 0xa35a2 + 0x30009E, indexKOF02Sprites_K9999, 0x08 },
    { L"SDM Explosion and Effects", 0xa35a2 + 0x30009E, 0xa35c2 + 0x30009E, indexKOF02Sprites_K9999, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OmegaRugal_PALETTES_SHARED[] =
{
    { L"Reppuken and Win Stuff",            0xa3962 + 0x30009E, 0xa3982 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x07 },
    { L"Kaizer Wave",                       0xa3982 + 0x30009E, 0xa39a2 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x05 },
    { L"Kaizer Wave Hit",                   0xa39a2 + 0x30009E, 0xa39c2 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x06 },
    { L"Dark Barrier",                      0xa39c2 + 0x30009E, 0xa39e2 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x02 },
    { L"Genocide Cutter Effect 1",          0xa39e2 + 0x30009E, 0xa3a02 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x04 },
    { L"Genocide Cutter Effect 2",          0xa3a02 + 0x30009E, 0xa3a22 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x04 },
    { L"Divine Arrow and Gravity Smash",    0xa3a22 + 0x30009E, 0xa3a42 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x03 },
    { L"Gigantic Pressure and Intro Stuff", 0xa3a42 + 0x30009E, 0xa3a62 + 0x30009E, indexKOF02UMSprites_OmegaRugal, 0x1a },
};

const sGame_PaletteDataset KOF02PS2_A_KUSANAGI_PALETTES_SHARED[] =
{
    { L"Orochinagi Extra Fire",             0xa3b62 + 0x30009E, 0xa3b82 + 0x30009E, indexKOF02UMSprites_Kusanagi, 0x19 },
    { L"Orochinagi Main Fire Attack",       0xa3b82 + 0x30009E, 0xa3ba2 + 0x30009E, indexKOF02UMSprites_Kusanagi, 0x05 },
    { L"Dark Thrust and Fire Ball Fire",    0xa3ba2 + 0x30009E, 0xa3bc2 + 0x30009E, indexKOF02UMSprites_Kusanagi, 0x05 },
    { L"Dark Thrust Main",                  0xa3c02 + 0x30009E, 0xa3c22 + 0x30009E, indexKOF02UMSprites_Kusanagi, 0x02 },
    { L"Orochinagi Extra Fire Attack",      0xa3c22 + 0x30009E, 0xa3c42 + 0x30009E, indexKOF02UMSprites_Kusanagi, 0x06 },
    { L"MAX2 Final Showdown Fire Pillar",   0xa3c42 + 0x30009E, 0xa3c62 + 0x30009E, indexKOF02UMSprites_Kusanagi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OrochiYashiro_PALETTES_SHARED[] =
{
    { L"Special and Super Effects", 0xa3d62 + 0x30009E, 0xa3d82 + 0x30009E, indexKOF02UMSprites_YashiroOChi, 0x03 },
    { L"Araburu Daichi Pillar",     0xa3da2 + 0x30009E, 0xa3dc2 + 0x30009E, indexKOF02UMSprites_YashiroOChi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OrochiShermie_PALETTES_SHARED[] =
{
    { L"Shukumei-G. Shinshi Super", 0xa3f62 + 0x30009E, 0xa3f82 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x05 },
    { L"Idle Lightning and Kiss",   0xa3f82 + 0x30009E, 0xa3fa2 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x07 },
    { L"Lightning",                 0xa3fa2 + 0x30009E, 0xa3fc2 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x04 },
    { L"SDM Raikouken",             0xa3fc2 + 0x30009E, 0xa3fe2 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x10 },
    { L"MAX Raikouken",             0xa3fe2 + 0x30009E, 0xa4002 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x10 },
    { L"Takeru Mikazuchi Lightning", 0xa4002 + 0x30009E, 0xa4022 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x06 },
    { L"Special Lightning Effects", 0xa4022 + 0x30009E, 0xa4042 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x02 },
    { L"Yatanagi no Muchi Hit",     0xa4042 + 0x30009E, 0xa4062 + 0x30009E, indexKOF02UMSprites_ShermieOChi, 0x03 },
};

const sGame_PaletteDataset KOF02PS2_A_OrochiChris_PALETTES_SHARED[] =
{
    { L"Orochi Fire",               0xa4162 + 0x30009E, 0xa4182 + 0x30009E, indexKOF02UMSprites_ChrisOChi, 0x02 },
    { L"Idle Orochi Flames",        0xa41e2 + 0x30009E, 0xa4202 + 0x30009E, indexKOF02UMSprites_ChrisOChi, 0x03 },
    { L"Ankoku Orochinagi Fire 1",  0xa41c2 + 0x30009E, 0xa41e2 + 0x30009E, indexKOF02UMSprites_ChrisOChi, 0x02 },
    { L"Ankoku Orochinagi Fire 2",  0xa4202 + 0x30009E, 0xa4222 + 0x30009E, indexKOF02UMSprites_ChrisOChi, 0x04 },
};



const sGame_PaletteDataset KOF02PS2_S_OCHRIS_PALETTES_MAX2[] =
{
    { L"Orochi Chris MAX2 Background 1", 0x3c0e00, 0x3c0e20, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 2", 0x3c0e20, 0x3c0e40, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 3", 0x3c0e40, 0x3c0e60, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 4", 0x3c0e60, 0x3c0e80, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 5", 0x3c0e80, 0x3c0ea0, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 6", 0x3c0ea0, 0x3c0ec0, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 7", 0x3c0ec0, 0x3c0ee0, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 8", 0x3c0ee0, 0x3c0f00, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 9", 0x3c0f00, 0x3c0f20, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 10", 0x3c0f20, 0x3c0f40, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 11", 0x3c0f40, 0x3c0f60, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 12", 0x3c0f60, 0x3c0f80, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 13", 0x3c0f80, 0x3c0fa0, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 14", 0x3c0fa0, 0x3c0fc0, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 15", 0x3c0fc0, 0x3c0fe0, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 16", 0x3c0fe0, 0x3c1000, indexKOF02UMSprites_ChrisOChi, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_S_OSHERMIE_PALETTES_MAX2[] =
{
    { L"Orochi Shermie MAX2 Background", 0x3c23e0, 0x3c2400, indexKOF02UMSprites_ShermieOChi, 0x0a },
};

const sGame_PaletteDataset KOF02PS2_S_OYASHIRO_PALETTES_MAX2[] =
{
    { L"Orochi Yashiro MAX2 Background 1/4",  0x3c2340, 0x3c2360, indexKOF02UMSprites_YashiroOChi, 0x0a },
    { L"Orochi Yashiro MAX2 Background 2/4",  0x3c2360, 0x3c2380, indexKOF02UMSprites_YashiroOChi, 0x0a },
    { L"Orochi Yashiro MAX2 Background 3/4",  0x3c2380, 0x3c23a0, indexKOF02UMSprites_YashiroOChi, 0x0a },
    { L"Orochi Yashiro MAX2 Background 4/4",  0x3c23a0, 0x3c23c0, indexKOF02UMSprites_YashiroOChi, 0x0a },
};

const sDescTreeNode KOF02PS2_A_KYO_COLLECTION[] =
{
    // Note that we're using a modified color name to avoid multisprite export for these unbalanced / hacked nodes
    { L"A_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_A, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_A) },
    { L"B_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_B, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_B) },
    { L"C_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_C, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_C) },
    { L"D_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_D, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Kyo_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Kyo_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_KYO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_BENIMARU_COLLECTION[] =
{
    // Note that we're using a modified color name to avoid multisprite export for these unbalanced / hacked nodes
    { L"A_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_A, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_A) },
    { L"B_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_B, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_B) },
    { L"C_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_C, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_C) },
    { L"D_", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_D, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Benimaru_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Benimaru_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_BENIMARU_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_DAIMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_A, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_B, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_C, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_D, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_DAIMON_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_A, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_B, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_C, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_D, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Terry_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Terry_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_TERRY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_A, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_B, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_C, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_D, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Andy_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Andy_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_ANDY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Joe_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Joe_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_JOE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_A, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_B, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_C, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_D, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_KIM_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_A, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_B, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_C, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_D, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Chang_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Chang_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_CHANG_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_CHOI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Choi_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Choi_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_CHOI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_A, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_B, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_C, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_D, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Athena_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Athena_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_ATHENA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_A, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_B, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_C, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_D, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Kensou_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Kensou_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_KENSOU_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_CHIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_A, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_B, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_C, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_D, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Chin_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Chin_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_CHIN_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_A, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_B, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_C, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_D, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Leona_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Leona_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_LEONA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_A, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_B, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_C, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_D, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Ralf_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Ralf_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_RALF_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_A, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_B, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_C, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_D, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_CLARK_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_A, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_B, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_C, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_D, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Ryo_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Ryo_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_RYO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_A, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_B, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_C, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_D, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Robert_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Robert_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_ROBERT_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_TAKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_A, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_B, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_C, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_D, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Takuma_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Takuma_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_TAKUMA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Mai_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Mai_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_MAI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Yuri_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Yuri_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_YURI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_MAYLEE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MayLee_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_MayLee_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_MAYLEE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Iori_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Iori_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_IORI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_MATURE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Mature_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Mature_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_MATURE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_VICE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Vice_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Vice_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_VICE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_YAMAZAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Yamazaki_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Yamazaki_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BlueMary_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_BlueMary_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_BLUEMARY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_A, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_B, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_C, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_D, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Billy_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Billy_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_BILLY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_YASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_A, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_B, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_C, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_D, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Yashiro_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Yashiro_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_YASHIRO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_SHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Shermie_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Shermie_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_SHERMIE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_CHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_A, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_B, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_C, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_D, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Chris_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Chris_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_CHRIS_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_A, ARRAYSIZE(KOF02PS2_A_K_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_B, ARRAYSIZE(KOF02PS2_A_K_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_C, ARRAYSIZE(KOF02PS2_A_K_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_D, ARRAYSIZE(KOF02PS2_A_K_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_K_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_K_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_K_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_K_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_MAXIMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_A, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_B, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_C, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_D, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Maxima_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Maxima_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_MAXIMA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_WHIP_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_A, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_B, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_C, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_D, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Whip_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Whip_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_WHIP_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_VANESSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_A, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_B, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_C, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_D, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Vanessa_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Vanessa_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_VANESSA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_SETH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_A, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_B, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_C, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_D, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Seth_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Seth_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_SETH_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_RAMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_A, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_B, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_C, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_D, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Ramon_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Ramon_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_RAMON_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_KULA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_A, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_B, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_C, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_D, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_Kula_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_Kula_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_KULA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_K9999_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_A, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_B, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_C, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_D, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_K9999_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_ANGEL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_A, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_B, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_C, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_D, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_ANGEL_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_OMEGARUGAL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_A, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_B, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_C, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_D, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OmegaRugal_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_OmegaRugal_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_KUSANAGI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_KUSANAGI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_OYASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_A, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_B, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_C, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_D, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OrochiYashiro_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_OrochiYashiro_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02PS2_S_OYASHIRO_PALETTES_MAX2, ARRAYSIZE(KOF02PS2_S_OYASHIRO_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_OYASHIRO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_OSHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OrochiShermie_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_OrochiShermie_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02PS2_S_OSHERMIE_PALETTES_MAX2, ARRAYSIZE(KOF02PS2_S_OSHERMIE_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_OSHERMIE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_OCHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_A, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_B, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_C, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_D, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OrochiChris_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_OrochiChris_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02PS2_S_OCHRIS_PALETTES_MAX2, ARRAYSIZE(KOF02PS2_S_OCHRIS_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_OCHRIS_PALETTES_PORTRAITS_SELECT) },
};


// added by hand!
const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Shingo Win Portrait A", 0x3bdc00, 0x3bdc40, indexKOF02Sprites_Shingo, 0x54 },
    { L"Shingo Win Portrait B", 0x3bdc40, 0x3bdc80, indexKOF02Sprites_Shingo, 0x54 },
    { L"Shingo Win Portrait C", 0x3bdc80, 0x3bdcc0, indexKOF02Sprites_Shingo, 0x54 },
    { L"Shingo Win Portrait D", 0x3bdcc0, 0x3bdd00, indexKOF02Sprites_Shingo, 0x54 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_PORTRAITS_WIN[] =
{
    { L"King Win Portrait A", 0x3bdd00, 0x3bdd40, indexKOF02Sprites_King, 0x54 },
    { L"King Win Portrait B", 0x3bdd40, 0x3bdd80, indexKOF02Sprites_King, 0x54 },
    { L"King Win Portrait C", 0x3bdd80, 0x3bddc0, indexKOF02Sprites_King, 0x54 },
    { L"King Win Portrait D", 0x3bddc0, 0x3bde00, indexKOF02Sprites_King, 0x54 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Orochi Iori Win Portrait A", 0x3bde00, 0x3bde40, indexKOF02Sprites_OrochiIori, 0x54 },
    { L"Orochi Iori Win Portrait B", 0x3bde40, 0x3bde80, indexKOF02Sprites_OrochiIori, 0x54 },
    { L"Orochi Iori Win Portrait C", 0x3bde80, 0x3bdec0, indexKOF02Sprites_OrochiIori, 0x54 },
    { L"Orochi Iori Win Portrait D", 0x3bdec0, 0x3bdf00, indexKOF02Sprites_OrochiIori, 0x54 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Geese Win Portrait A", 0x3bdf00, 0x3bdf40, indexKOF02Sprites_Geese, 0x54 },
    { L"Geese Win Portrait B", 0x3bdf40, 0x3bdf80, indexKOF02Sprites_Geese, 0x54 },
    { L"Geese Win Portrait C", 0x3bdf80, 0x3bdfc0, indexKOF02Sprites_Geese, 0x54 },
    { L"Geese Win Portrait D", 0x3bdfc0, 0x3be000, indexKOF02Sprites_Geese, 0x54 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_WIN[] =
{
    { L"Goenitz Win Portrait A", 0x3be000, 0x3be040, indexKOF02Sprites_Goenitz, 0x54 },
    { L"Goenitz Win Portrait B", 0x3be040, 0x3be080, indexKOF02Sprites_Goenitz, 0x54 },
    { L"Goenitz Win Portrait C", 0x3be080, 0x3be0c0, indexKOF02Sprites_Goenitz, 0x54 },
    { L"Goenitz Win Portrait D", 0x3be0c0, 0x3be100, indexKOF02Sprites_Goenitz, 0x54 },
};

const sGame_PaletteDataset KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Shingo Select Portrait", 0x3b8e80, 0x3b8ec0, indexKOF02Sprites_Shingo, 0x53 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_PORTRAITS_SELECT[] =
{
    { L"King Select Portrait", 0x3b8ec0, 0x3b8f00, indexKOF02Sprites_King, 0x53 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Orochi Iori Select Portrait", 0x3b8f00, 0x3b8f40, indexKOF02Sprites_OrochiIori, 0x53 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Geese Select Portrait", 0x3b8f40, 0x3b8f80, indexKOF02Sprites_Geese, 0x53 },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Goenitz Select Portrait", 0x3b8f80, 0x3b8fc0, indexKOF02Sprites_Goenitz, 0x53 },
};

const sGame_PaletteDataset KOF02PS2_A_KING_PALETTES_SHARED[] =
{
    { L"King Venom Strike",      0x3890e0, 0x389100, indexKOF02UMSprites_King, 0x02 },
    { L"King Venom Strike Hit",  0x389100, 0x389120, indexKOF02UMSprites_King, 0x03 },
    //{ L"King MAX2 Effects",      0x389100, 0x389120, indexKOF02UMSprites_King, 0x09 },
};

const sGame_PaletteDataset KOF02PS2_A_OROCHIIORI_PALETTES_SHARED[] =
{
    { L"Move Effect 1", 0x3892e0, 0x389300 },
    { L"Move Effect 2", 0x389300, 0x389320 },
    { L"Move Effect 3", 0x389320, 0x389340 },
    { L"Move Effect 4", 0x389340, 0x389360 },
    { L"Move Effect 5", 0x389360, 0x389380 },
};

const sGame_PaletteDataset KOF02PS2_A_GEESE_PALETTES_SHARED[] =
{
    { L"Geese Electricity and Special Moves",   0x3894e0, 0x389500, indexKOF02UMSprites_Geese, 0x03 },
    { L"Geese Reppuuken Extras and MAX2",       0x389500, 0x389520, indexKOF02UMSprites_Geese, 0x09 },
    // we want the NGeese preview here
    { L"Geese SDM Raging Storm",                0x389520, 0x389540, indexKOF02UMSprites_GeeseNM, 0x10 },
    { L"Geese Reppuuken",                       0x389540, 0x389560, indexKOF02UMSprites_GeeseNM, 0x02  },
    { L"Geese Ra Sho Mon Attack",               0x389560, 0x389580, indexKOF02UMSprites_Geese, 0x0b },
    //{ L"Geese Ra Sho Mon Text",                 0x389580, 0x3895a0, indexKOF02UMSprites_Geese, 0x0a },
    //{ L"Geese Ra Sho Mon Text",                 0x3895a0, 0x3895c0, indexKOF02UMSprites_Geese, 0x0a },
    { L"Geese Ra Sho Mon Text",                 0x3895c0, 0x3895e0, indexKOF02UMSprites_Geese, 0x0a },
};

const sGame_PaletteDataset KOF02PS2_A_GOENITZ_PALETTES_SHARED[] =
{
    { L"Goenitz Wanhyo Special Effects",            0x3896e0, 0x389700, indexKOF02UMSprites_Goenitz, 0x03 },
    { L"Goenitz Yonokaze and Super Tornados",       0x389700, 0x389720, indexKOF02UMSprites_Goenitz, 0x19 },
    { L"Goenitz MAX Blood",                         0x389720, 0x389740, indexKOF02UMSprites_Goenitz, 0x09 },
    { L"Goenitz Yamidoukoku and Hyouga Tornado",    0x389740, 0x389760, indexKOF02UMSprites_Goenitz, 0x0a },
    { L"Goenitz Shin Aoi Rekka Finisher",           0x389760, 0x389780, indexKOF02UMSprites_Goenitz, 0x02 },
    { L"Goenitz Shin Aoi Rekka Attacks",            0x389780, 0x3897a0, indexKOF02UMSprites_Goenitz, 0x02 },
    { L"Goenitz Fuujin Ibuki Tornado Spawn (Unusable)", 0x3897a0, 0x3897c0, indexKOF02UMSprites_Goenitz, 0x0b },
};

const sDescTreeNode KOF02PS2_A_SHINGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_A, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_B, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_C, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_D, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_SHINGO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_A, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_B, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_C, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_D, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_KING_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_OROCHIIORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_A, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_B, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_C, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_D, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_GEESE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_A, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_B, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_C, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_D, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_GEESE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_GOENITZ_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_A, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_B, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_C, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_D, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_D) },
    { L"Moves", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_SHARED, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_GOENITZ_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02PS2_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KYO_COLLECTION, ARRAYSIZE(KOF02PS2_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF02PS2_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_DAIMON_COLLECTION, ARRAYSIZE(KOF02PS2_A_DAIMON_COLLECTION) },

    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TERRY_COLLECTION, ARRAYSIZE(KOF02PS2_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANDY_COLLECTION, ARRAYSIZE(KOF02PS2_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_JOE_COLLECTION, ARRAYSIZE(KOF02PS2_A_JOE_COLLECTION) },

    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KIM_COLLECTION, ARRAYSIZE(KOF02PS2_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHANG_COLLECTION, ARRAYSIZE(KOF02PS2_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHOI_COLLECTION, ARRAYSIZE(KOF02PS2_A_CHOI_COLLECTION) },

    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ATHENA_COLLECTION, ARRAYSIZE(KOF02PS2_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KENSOU_COLLECTION, ARRAYSIZE(KOF02PS2_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHIN_COLLECTION, ARRAYSIZE(KOF02PS2_A_CHIN_COLLECTION) },

    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_LEONA_COLLECTION, ARRAYSIZE(KOF02PS2_A_LEONA_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RALF_COLLECTION, ARRAYSIZE(KOF02PS2_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CLARK_COLLECTION, ARRAYSIZE(KOF02PS2_A_CLARK_COLLECTION) },

    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RYO_COLLECTION, ARRAYSIZE(KOF02PS2_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ROBERT_COLLECTION, ARRAYSIZE(KOF02PS2_A_ROBERT_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF02PS2_A_TAKUMA_COLLECTION) },

    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAI_COLLECTION, ARRAYSIZE(KOF02PS2_A_MAI_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YURI_COLLECTION, ARRAYSIZE(KOF02PS2_A_YURI_COLLECTION) },
    { L"May Lee", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAYLEE_COLLECTION, ARRAYSIZE(KOF02PS2_A_MAYLEE_COLLECTION) },

    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_IORI_COLLECTION, ARRAYSIZE(KOF02PS2_A_IORI_COLLECTION) },
    { L"Mature", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MATURE_COLLECTION, ARRAYSIZE(KOF02PS2_A_MATURE_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VICE_COLLECTION, ARRAYSIZE(KOF02PS2_A_VICE_COLLECTION) },

    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02PS2_A_YAMAZAKI_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02PS2_A_BLUEMARY_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_BILLY_COLLECTION, ARRAYSIZE(KOF02PS2_A_BILLY_COLLECTION) },
    { L"Yashiro", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_YASHIRO_COLLECTION, ARRAYSIZE(KOF02PS2_A_YASHIRO_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHERMIE_COLLECTION, ARRAYSIZE(KOF02PS2_A_SHERMIE_COLLECTION) },
    { L"Chris", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_CHRIS_COLLECTION, ARRAYSIZE(KOF02PS2_A_CHRIS_COLLECTION) },
    { L"K’", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K_COLLECTION, ARRAYSIZE(KOF02PS2_A_K_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_MAXIMA_COLLECTION, ARRAYSIZE(KOF02PS2_A_MAXIMA_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_WHIP_COLLECTION, ARRAYSIZE(KOF02PS2_A_WHIP_COLLECTION) },
    { L"Vanessa", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_VANESSA_COLLECTION, ARRAYSIZE(KOF02PS2_A_VANESSA_COLLECTION) },
    { L"Seth", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SETH_COLLECTION, ARRAYSIZE(KOF02PS2_A_SETH_COLLECTION) },
    { L"Ramon", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_RAMON_COLLECTION, ARRAYSIZE(KOF02PS2_A_RAMON_COLLECTION) },
    { L"Kula", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KULA_COLLECTION, ARRAYSIZE(KOF02PS2_A_KULA_COLLECTION) },
    { L"K9999", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_K9999_COLLECTION, ARRAYSIZE(KOF02PS2_A_K9999_COLLECTION) },
    { L"Angel", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_ANGEL_COLLECTION, ARRAYSIZE(KOF02PS2_A_ANGEL_COLLECTION) },

    { L"Omega Rugal", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02PS2_A_OMEGARUGAL_COLLECTION) },

    { L"KUSANAGI", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02PS2_A_KUSANAGI_COLLECTION) },

    { L"O.Chris", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OCHRIS_COLLECTION, ARRAYSIZE(KOF02PS2_A_OCHRIS_COLLECTION) },
    { L"O.Shermie", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02PS2_A_OSHERMIE_COLLECTION) },
    { L"O.Yashiro", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02PS2_A_OYASHIRO_COLLECTION) },

    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_SHINGO_COLLECTION, ARRAYSIZE(KOF02PS2_A_SHINGO_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_KING_COLLECTION, ARRAYSIZE(KOF02PS2_A_KING_COLLECTION) },
    { L"Orochi Iori", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_OROCHIIORI_COLLECTION, ARRAYSIZE(KOF02PS2_A_OROCHIIORI_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GEESE_COLLECTION, ARRAYSIZE(KOF02PS2_A_GEESE_COLLECTION) },
    { L"Goenitz", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_GOENITZ_COLLECTION, ARRAYSIZE(KOF02PS2_A_GOENITZ_COLLECTION) },
};

constexpr auto KOF02PS2_A_NUMUNIT = ARRAYSIZE(KOF02PS2_A_UNITS);

#define KOF02PS2_A_EXTRALOC KOF02PS2_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF02PS2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

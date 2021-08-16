#pragma once

// To add characters or palette lists:
// * Add the character to KOF02_A_CharacterOffsetArray
// * Uncomment //DumpAllCharacters in InitDescTree
// * Run PalMod and load the ROM.
// * The new headers will be printed to the debug output: copy those and paste them below.
// * Update the various character references along the lines of how we handle indexKOF02_A_Kyo for Kyo
// That should be it.  Good luck.

struct sKOF02_A_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    UINT32 locationInROM = 0;
    LPCWSTR pszImageRefName = nullptr;
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
const sKOF02_A_CharacterDump KOF02_A_CharacterOffsetArray[] =
{
    { L"Kyo",        0x88b62 + (0x800 *  0), L"indexKOF02UMSprites_KyoKusa", L"MAX2 Fire Palette", 0x2, L"MAX Orochinagi Fire", 0x3, L"Shingo Intro Stuff", 0x19 },
    { L"Benimaru",   0x88b62 + (0x800 *  1), L"indexKOF02UMSprites_Benimaru", L"Raijiken Flash", 0x4, L"Phantom Hurricane Effects", 0x10 },
    { L"Daimon",     0x88b62 + (0x800 *  2), L"indexKOF02UMSprites_Daimon" },
    { L"Terry",      0x88b62 + (0x800 *  3), L"indexKOF02UMSprites_Terry",    L"Terry and Child Winpose", 0x19, L"MAX2 Trail", 0xa },
    { L"Andy",       0x88b62 + (0x800 *  4), L"indexKOF02UMSprites_Andy",     L"SDM Super Sonic Swirl and MAX2", 0x11, L"MAX Super Sonic Swirl", 0x11 },
    { L"Joe",        0x88b62 + (0x800 *  5), L"indexKOF02UMSprites_Joe",      },
    { L"Kim",        0x88b62 + (0x800 *  6), L"indexKOF02UMSprites_Kim",      },
    { L"Chang",      0x88b62 + (0x800 *  7), L"indexKOF02UMSprites_Chang",    },
    { L"Choi",       0x88b62 + (0x800 *  8), L"indexKOF02UMSprites_Choi",     L"Phoenix Flattener SDM Effects", 0x3 },
    { L"Athena",     0x88b62 + (0x800 *  9), L"indexKOF02UMSprites_Athena",   L"Athena Transformations", 0x19, L"MAX Shining Crystal Bit", 0, L"Portal Stuff", 0x2, L"Intro Stuff and MAX2 Finisher", 0 },
    { L"Kensou",     0x88b62 + (0x800 * 10), L"indexKOF02UMSprites_Kensou",   L"MAX2 Power Up State", 0xa },
    { L"Chin",       0x88b62 + (0x800 * 11), L"indexKOF02UMSprites_Chin",     L"Fire Palette", 0x9 },
    { L"Leona",      0x88b62 + (0x800 * 12), L"indexKOF02UMSprites_Leona",    L"Jump Blowback Attack", 0x6, nullptr, 0, L"Orochi Leona", 0x1b, L"Intro Stuff", 0x19 },
    { L"Ralf",       0x88b62 + (0x800 * 13), L"indexKOF02UMSprites_Ralf",     },
    { L"Clark",      0x88b62 + (0x800 * 14), L"indexKOF02UMSprites_Clark",    },
    { L"Ryo",        0x88b62 + (0x800 * 15), L"indexKOF02UMSprites_Ryo",      },
    { L"Robert",     0x88b62 + (0x800 * 16), L"indexKOF02UMSprites_Robert",   },
    { L"Takuma",     0x88b62 + (0x800 * 17), L"indexKOF02UMSprites_Takuma",   },
    { L"Mai",        0x88b62 + (0x800 * 18), L"indexKOF02UMSprites_Mai",      L"Hissatsu SDM Fire", 0x10, L"Hissatsu MAX Fire", 0x11, L"MAX2 Hold B Dress", 0x1a, L"Andy Intro Stuff", 0x19 },
    { L"Yuri",       0x88b62 + (0x800 * 19), L"indexKOF02UMSprites_Yuri",     },
    { L"May Lee",    0x88b62 + (0x800 * 20), L"indexKOF02UMSprites_MayLee",   },
    { L"Iori",       0x88b62 + (0x800 * 21), L"indexKOF02UMSprites_Iori",     },
    { L"Mature",     0x88b62 + (0x800 * 22), L"indexKOF02UMSprites_Mature",   },
    { L"Vice",       0x88b62 + (0x800 * 23), L"indexKOF02UMSprites_Vice",     },
    { L"Yamazaki",   0x88b62 + (0x800 * 24), L"indexKOF02UMSprites_Yamazaki", L"Drill Super Extras", 0x3, L"Intro Stuff", 0x2 },
    { L"Blue Mary",  0x88b62 + (0x800 * 25), L"indexKOF02UMSprites_BlueMary", L"Anton and Jacket", 0x1a },
    { L"Billy",      0x88b62 + (0x800 * 26), L"indexKOF02UMSprites_Billy",    L"Hair", 0x1a, L"Eiji Kisaragi", 0x19 },
    { L"Yashiro",    0x88b62 + (0x800 * 27), L"indexKOF02UMSprites_Yashiro",  },
    { L"Shermie",    0x88b62 + (0x800 * 28), L"indexKOF02UMSprites_Shermie",  },
    { L"Chris",      0x88b62 + (0x800 * 29), L"indexKOF02UMSprites_Chris",    },
    { L"K’",         0x88b62 + (0x800 * 30), L"indexKOF02UMSprites_K",        L"Diana Intro Stuff", 0x19 },
    { L"Maxima",     0x88b62 + (0x800 * 31), L"indexKOF02UMSprites_Maxima",   },
    { L"Whip",       0x88b62 + (0x800 * 32), L"indexKOF02UMSprites_Whip",     },
    { L"Vanessa",    0x88b62 + (0x800 * 33), L"indexKOF02UMSprites_Vanessa",  },
    { L"Seth",       0x88b62 + (0x800 * 34), L"indexKOF02UMSprites_Seth",     },
    { L"Ramon",      0x88b62 + (0x800 * 35), L"indexKOF02UMSprites_Ramon",    },
    { L"Kula",       0x88b62 + (0x800 * 36), L"indexKOF02UMSprites_Kula",     L"Diana and Candy Stuff", 0x1c, L"Foxy Stuff", 0x1b, nullptr, 0, L"Critical Ice", 0x2 },
    { L"K9999",      0x88b62 + (0x800 * 37), L"indexKOF02UMSprites_K9999",    L"Intro Stuff", 0x19, L"MAX2 and Win", 0x9, L"SDM Shield", 0x10, L"Tentacle Arm", 0x1a },
    { L"Angel",      0x88b62 + (0x800 * 38), L"indexKOF02UMSprites_Angel",    L"Time Over Lose", 0x19 },
    { L"Omega Rugal", 0x88b62 + (0x800 * 39), L"indexKOF02UMSprites_OmegaRugal",   nullptr, 0, nullptr, 0, L"Superboss Intro Stuff", 0x19 },
    { L"KUSANAGI",   0x88b62 + (0x800 * 40), L"indexKOF02UMSprites_Kusanagi", L"Super Move Palette", 0x3, L"MAX Orochinagi Fire", 0x4 },
    { L"O.Yashiro",  0x88b62 + (0x800 * 41), L"indexKOF02UMSprites_YashiroOChi",  },
    { L"O.Shermie",  0x88b62 + (0x800 * 42), L"indexKOF02UMSprites_ShermieOChi",  nullptr, 0, nullptr, 0, nullptr, 0, L"MAX2 Lightning", 0x9 },
    { L"O.Chris",    0x88b62 + (0x800 * 43), L"indexKOF02Sprites_ChrisOrochi",    nullptr, 0, L"MAX2 Orochi", 0, nullptr, 0, L"Orochi Fire Palette", 0x19 },
};

const UINT16 KOF02_A_IMGIDS_USED[] =
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

    indexKOF02Sprites_Bonus,        // 0x297
    indexKOF02Sprites_Stages,       // 0x298
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kyo A Win Portrait", 0xbad62, 0xbada2, indexKOF02Sprites_Kyo, 0x30 },
    { L"Kyo B Win Portrait", 0xbada2, 0xbade2, indexKOF02Sprites_Kyo, 0x30 },
    { L"Kyo C Win Portrait", 0xbade2, 0xbae22, indexKOF02Sprites_Kyo, 0x30 },
    { L"Kyo D Win Portrait", 0xbae22, 0xbae62, indexKOF02Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_PORTRAITS_WIN[] =
{
    { L"Benimaru A Win Portrait", 0xbae62, 0xbaea2, indexKOF02Sprites_Benimaru, 0x30 },
    { L"Benimaru B Win Portrait", 0xbaea2, 0xbaee2, indexKOF02Sprites_Benimaru, 0x30 },
    { L"Benimaru C Win Portrait", 0xbaee2, 0xbaf22, indexKOF02Sprites_Benimaru, 0x30 },
    { L"Benimaru D Win Portrait", 0xbaf22, 0xbaf62, indexKOF02Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_PORTRAITS_WIN[] =
{
    { L"Daimon A Win Portrait", 0xbaf62, 0xbafa2, indexKOF02Sprites_Daimon, 0x30 },
    { L"Daimon B Win Portrait", 0xbafa2, 0xbafe2, indexKOF02Sprites_Daimon, 0x30 },
    { L"Daimon C Win Portrait", 0xbafe2, 0xbb022, indexKOF02Sprites_Daimon, 0x30 },
    { L"Daimon D Win Portrait", 0xbb022, 0xbb062, indexKOF02Sprites_Daimon, 0x30 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Terry A Win Portrait", 0xbb062, 0xbb0a2, indexKOF02Sprites_Terry, 0x30 },
    { L"Terry B Win Portrait", 0xbb0a2, 0xbb0e2, indexKOF02Sprites_Terry, 0x30 },
    { L"Terry C Win Portrait", 0xbb0e2, 0xbb122, indexKOF02Sprites_Terry, 0x30 },
    { L"Terry D Win Portrait", 0xbb122, 0xbb162, indexKOF02Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Andy A Win Portrait", 0xbb162, 0xbb1a2, indexKOF02Sprites_Andy, 0x30 },
    { L"Andy B Win Portrait", 0xbb1a2, 0xbb1e2, indexKOF02Sprites_Andy, 0x30 },
    { L"Andy C Win Portrait", 0xbb1e2, 0xbb222, indexKOF02Sprites_Andy, 0x30 },
    { L"Andy D Win Portrait", 0xbb222, 0xbb262, indexKOF02Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Joe A Win Portrait", 0xbb262, 0xbb2a2, indexKOF02Sprites_Joe, 0x30 },
    { L"Joe B Win Portrait", 0xbb2a2, 0xbb2e2, indexKOF02Sprites_Joe, 0x30 },
    { L"Joe C Win Portrait", 0xbb2e2, 0xbb322, indexKOF02Sprites_Joe, 0x30 },
    { L"Joe D Win Portrait", 0xbb322, 0xbb362, indexKOF02Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kim A Win Portrait", 0xbb362, 0xbb3a2, indexKOF02Sprites_Kim, 0x30 },
    { L"Kim B Win Portrait", 0xbb3a2, 0xbb3e2, indexKOF02Sprites_Kim, 0x30 },
    { L"Kim C Win Portrait", 0xbb3e2, 0xbb422, indexKOF02Sprites_Kim, 0x30 },
    { L"Kim D Win Portrait", 0xbb422, 0xbb462, indexKOF02Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_PORTRAITS_WIN[] =
{
    { L"Chang A Win Portrait", 0xbb462, 0xbb4a2, indexKOF02Sprites_Chang, 0x30 },
    { L"Chang B Win Portrait", 0xbb4a2, 0xbb4e2, indexKOF02Sprites_Chang, 0x30 },
    { L"Chang C Win Portrait", 0xbb4e2, 0xbb522, indexKOF02Sprites_Chang, 0x30 },
    { L"Chang D Win Portrait", 0xbb522, 0xbb562, indexKOF02Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Choi A Win Portrait", 0xbb562, 0xbb5a2, indexKOF02Sprites_Choi, 0x30 },
    { L"Choi B Win Portrait", 0xbb5a2, 0xbb5e2, indexKOF02Sprites_Choi, 0x30 },
    { L"Choi C Win Portrait", 0xbb5e2, 0xbb622, indexKOF02Sprites_Choi, 0x30 },
    { L"Choi D Win Portrait", 0xbb622, 0xbb662, indexKOF02Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Athena A Win Portrait", 0xbb662, 0xbb6a2, indexKOF02Sprites_Athena, 0x30 },
    { L"Athena B Win Portrait", 0xbb6a2, 0xbb6e2, indexKOF02Sprites_Athena, 0x30 },
    { L"Athena C Win Portrait", 0xbb6e2, 0xbb722, indexKOF02Sprites_Athena, 0x30 },
    { L"Athena D Win Portrait", 0xbb722, 0xbb762, indexKOF02Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kensou A Win Portrait", 0xbb762, 0xbb7a2, indexKOF02Sprites_Kensou, 0x30 },
    { L"Kensou B Win Portrait", 0xbb7a2, 0xbb7e2, indexKOF02Sprites_Kensou, 0x30 },
    { L"Kensou C Win Portrait", 0xbb7e2, 0xbb822, indexKOF02Sprites_Kensou, 0x30 },
    { L"Kensou D Win Portrait", 0xbb822, 0xbb862, indexKOF02Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_PORTRAITS_WIN[] =
{
    { L"Chin A Win Portrait", 0xbb862, 0xbb8a2, indexKOF02Sprites_Chin, 0x30 },
    { L"Chin B Win Portrait", 0xbb8a2, 0xbb8e2, indexKOF02Sprites_Chin, 0x30 },
    { L"Chin C Win Portrait", 0xbb8e2, 0xbb922, indexKOF02Sprites_Chin, 0x30 },
    { L"Chin D Win Portrait", 0xbb922, 0xbb962, indexKOF02Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Leona A Win Portrait", 0xbb962, 0xbb9a2, indexKOF02Sprites_Leona, 0x30 },
    { L"Leona B Win Portrait", 0xbb9a2, 0xbb9e2, indexKOF02Sprites_Leona, 0x30 },
    { L"Leona C Win Portrait", 0xbb9e2, 0xbba22, indexKOF02Sprites_Leona, 0x30 },
    { L"Leona D Win Portrait", 0xbba22, 0xbba62, indexKOF02Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_PORTRAITS_WIN[] =
{
    { L"Ralf A Win Portrait", 0xbba62, 0xbbaa2, indexKOF02Sprites_Ralf, 0x30 },
    { L"Ralf B Win Portrait", 0xbbaa2, 0xbbae2, indexKOF02Sprites_Ralf, 0x30 },
    { L"Ralf C Win Portrait", 0xbbae2, 0xbbb22, indexKOF02Sprites_Ralf, 0x30 },
    { L"Ralf D Win Portrait", 0xbbb22, 0xbbb62, indexKOF02Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_PORTRAITS_WIN[] =
{
    { L"Clark A Win Portrait", 0xbbb62, 0xbbba2, indexKOF02Sprites_Clark, 0x30 },
    { L"Clark B Win Portrait", 0xbbba2, 0xbbbe2, indexKOF02Sprites_Clark, 0x30 },
    { L"Clark C Win Portrait", 0xbbbe2, 0xbbc22, indexKOF02Sprites_Clark, 0x30 },
    { L"Clark D Win Portrait", 0xbbc22, 0xbbc62, indexKOF02Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Ryo A Win Portrait", 0xbbc62, 0xbbca2, indexKOF02Sprites_Ryo, 0x30 },
    { L"Ryo B Win Portrait", 0xbbca2, 0xbbce2, indexKOF02Sprites_Ryo, 0x30 },
    { L"Ryo C Win Portrait", 0xbbce2, 0xbbd22, indexKOF02Sprites_Ryo, 0x30 },
    { L"Ryo D Win Portrait", 0xbbd22, 0xbbd62, indexKOF02Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_PORTRAITS_WIN[] =
{
    { L"Robert A Win Portrait", 0xbbd62, 0xbbda2, indexKOF02Sprites_Robert, 0x30 },
    { L"Robert B Win Portrait", 0xbbda2, 0xbbde2, indexKOF02Sprites_Robert, 0x30 },
    { L"Robert C Win Portrait", 0xbbde2, 0xbbe22, indexKOF02Sprites_Robert, 0x30 },
    { L"Robert D Win Portrait", 0xbbe22, 0xbbe62, indexKOF02Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Takuma A Win Portrait", 0xbbe62, 0xbbea2, indexKOF02Sprites_Takuma, 0x30 },
    { L"Takuma B Win Portrait", 0xbbea2, 0xbbee2, indexKOF02Sprites_Takuma, 0x30 },
    { L"Takuma C Win Portrait", 0xbbee2, 0xbbf22, indexKOF02Sprites_Takuma, 0x30 },
    { L"Takuma D Win Portrait", 0xbbf22, 0xbbf62, indexKOF02Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Mai A Win Portrait", 0xbbf62, 0xbbfa2, indexKOF02Sprites_Mai, 0x30 },
    { L"Mai B Win Portrait", 0xbbfa2, 0xbbfe2, indexKOF02Sprites_Mai, 0x30 },
    { L"Mai C Win Portrait", 0xbbfe2, 0xbc022, indexKOF02Sprites_Mai, 0x30 },
    { L"Mai D Win Portrait", 0xbc022, 0xbc062, indexKOF02Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Yuri A Win Portrait", 0xbc062, 0xbc0a2, indexKOF02Sprites_Yuri, 0x30 },
    { L"Yuri B Win Portrait", 0xbc0a2, 0xbc0e2, indexKOF02Sprites_Yuri, 0x30 },
    { L"Yuri C Win Portrait", 0xbc0e2, 0xbc122, indexKOF02Sprites_Yuri, 0x30 },
    { L"Yuri D Win Portrait", 0xbc122, 0xbc162, indexKOF02Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_PORTRAITS_WIN[] =
{
    { L"May Lee A Win Portrait", 0xbc162, 0xbc1a2, indexKOF02Sprites_MayLee, 0x30 },
    { L"May Lee B Win Portrait", 0xbc1a2, 0xbc1e2, indexKOF02Sprites_MayLee, 0x30 },
    { L"May Lee C Win Portrait", 0xbc1e2, 0xbc222, indexKOF02Sprites_MayLee, 0x30 },
    { L"May Lee D Win Portrait", 0xbc222, 0xbc262, indexKOF02Sprites_MayLee, 0x30 },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Iori A Win Portrait", 0xbc262, 0xbc2a2, indexKOF02Sprites_Iori, 0x30 },
    { L"Iori B Win Portrait", 0xbc2a2, 0xbc2e2, indexKOF02Sprites_Iori, 0x30 },
    { L"Iori C Win Portrait", 0xbc2e2, 0xbc322, indexKOF02Sprites_Iori, 0x30 },
    { L"Iori D Win Portrait", 0xbc322, 0xbc362, indexKOF02Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Mature A Win Portrait", 0xbc362, 0xbc3a2, indexKOF02Sprites_Mature, 0x30 },
    { L"Mature B Win Portrait", 0xbc3a2, 0xbc3e2, indexKOF02Sprites_Mature, 0x30 },
    { L"Mature C Win Portrait", 0xbc3e2, 0xbc422, indexKOF02Sprites_Mature, 0x30 },
    { L"Mature D Win Portrait", 0xbc422, 0xbc462, indexKOF02Sprites_Mature, 0x30 },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Vice A Win Portrait", 0xbc462, 0xbc4a2, indexKOF02Sprites_Vice, 0x30 },
    { L"Vice B Win Portrait", 0xbc4a2, 0xbc4e2, indexKOF02Sprites_Vice, 0x30 },
    { L"Vice C Win Portrait", 0xbc4e2, 0xbc522, indexKOF02Sprites_Vice, 0x30 },
    { L"Vice D Win Portrait", 0xbc522, 0xbc562, indexKOF02Sprites_Vice, 0x30 },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_WIN[] =
{
    { L"Yamazaki A Win Portrait", 0xbc562, 0xbc5a2, indexKOF02Sprites_Yamazaki, 0x30 },
    { L"Yamazaki B Win Portrait", 0xbc5a2, 0xbc5e2, indexKOF02Sprites_Yamazaki, 0x30 },
    { L"Yamazaki C Win Portrait", 0xbc5e2, 0xbc622, indexKOF02Sprites_Yamazaki, 0x30 },
    { L"Yamazaki D Win Portrait", 0xbc622, 0xbc662, indexKOF02Sprites_Yamazaki, 0x30 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Blue Mary A Win Portrait", 0xbc662, 0xbc6a2, indexKOF02Sprites_BlueMary, 0x30 },
    { L"Blue Mary B Win Portrait", 0xbc6a2, 0xbc6e2, indexKOF02Sprites_BlueMary, 0x30 },
    { L"Blue Mary C Win Portrait", 0xbc6e2, 0xbc722, indexKOF02Sprites_BlueMary, 0x30 },
    { L"Blue Mary D Win Portrait", 0xbc722, 0xbc762, indexKOF02Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_PORTRAITS_WIN[] =
{
    { L"Billy A Win Portrait", 0xbc762, 0xbc7a2, indexKOF02Sprites_Billy, 0x30 },
    { L"Billy B Win Portrait", 0xbc7a2, 0xbc7e2, indexKOF02Sprites_Billy, 0x30 },
    { L"Billy C Win Portrait", 0xbc7e2, 0xbc822, indexKOF02Sprites_Billy, 0x30 },
    { L"Billy D Win Portrait", 0xbc822, 0xbc862, indexKOF02Sprites_Billy, 0x30 },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Yashiro A Win Portrait", 0xbc862, 0xbc8a2, indexKOF02Sprites_Yashiro, 0x30 },
    { L"Yashiro B Win Portrait", 0xbc8a2, 0xbc8e2, indexKOF02Sprites_Yashiro, 0x30 },
    { L"Yashiro C Win Portrait", 0xbc8e2, 0xbc922, indexKOF02Sprites_Yashiro, 0x30 },
    { L"Yashiro D Win Portrait", 0xbc922, 0xbc962, indexKOF02Sprites_Yashiro, 0x30 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Shermie A Win Portrait", 0xbc962, 0xbc9a2, indexKOF02Sprites_Shermie, 0x30 },
    { L"Shermie B Win Portrait", 0xbc9a2, 0xbc9e2, indexKOF02Sprites_Shermie, 0x30 },
    { L"Shermie C Win Portrait", 0xbc9e2, 0xbca22, indexKOF02Sprites_Shermie, 0x30 },
    { L"Shermie D Win Portrait", 0xbca22, 0xbca62, indexKOF02Sprites_Shermie, 0x30 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_PORTRAITS_WIN[] =
{
    { L"Chris A Win Portrait", 0xbca62, 0xbcaa2, indexKOF02Sprites_Chris, 0x30 },
    { L"Chris B Win Portrait", 0xbcaa2, 0xbcae2, indexKOF02Sprites_Chris, 0x30 },
    { L"Chris C Win Portrait", 0xbcae2, 0xbcb22, indexKOF02Sprites_Chris, 0x30 },
    { L"Chris D Win Portrait", 0xbcb22, 0xbcb62, indexKOF02Sprites_Chris, 0x30 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_PORTRAITS_WIN[] =
{
    { L"K' A Win Portrait", 0xbcb62, 0xbcba2, indexKOF02Sprites_K, 0x30 },
    { L"K' B Win Portrait", 0xbcba2, 0xbcbe2, indexKOF02Sprites_K, 0x30 },
    { L"K' C Win Portrait", 0xbcbe2, 0xbcc22, indexKOF02Sprites_K, 0x30 },
    { L"K' D Win Portrait", 0xbcc22, 0xbcc62, indexKOF02Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Maxima A Win Portrait", 0xbcc62, 0xbcca2, indexKOF02Sprites_Maxima, 0x30 },
    { L"Maxima B Win Portrait", 0xbcca2, 0xbcce2, indexKOF02Sprites_Maxima, 0x30 },
    { L"Maxima C Win Portrait", 0xbcce2, 0xbcd22, indexKOF02Sprites_Maxima, 0x30 },
    { L"Maxima D Win Portrait", 0xbcd22, 0xbcd62, indexKOF02Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_PORTRAITS_WIN[] =
{
    { L"Whip A Win Portrait", 0xbcd62, 0xbcda2, indexKOF02Sprites_Whip, 0x30 },
    { L"Whip B Win Portrait", 0xbcda2, 0xbcde2, indexKOF02Sprites_Whip, 0x30 },
    { L"Whip C Win Portrait", 0xbcde2, 0xbce22, indexKOF02Sprites_Whip, 0x30 },
    { L"Whip D Win Portrait", 0xbce22, 0xbce62, indexKOF02Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Vanessa A Win Portrait", 0xbce62, 0xbcea2, indexKOF02Sprites_Vanessa, 0x30 },
    { L"Vanessa B Win Portrait", 0xbcea2, 0xbcee2, indexKOF02Sprites_Vanessa, 0x30 },
    { L"Vanessa C Win Portrait", 0xbcee2, 0xbcf22, indexKOF02Sprites_Vanessa, 0x30 },
    { L"Vanessa D Win Portrait", 0xbcf22, 0xbcf62, indexKOF02Sprites_Vanessa, 0x30 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_PORTRAITS_WIN[] =
{
    { L"Seth A Win Portrait", 0xbcf62, 0xbcfa2, indexKOF02Sprites_Seth, 0x30 },
    { L"Seth B Win Portrait", 0xbcfa2, 0xbcfe2, indexKOF02Sprites_Seth, 0x30 },
    { L"Seth C Win Portrait", 0xbcfe2, 0xbd022, indexKOF02Sprites_Seth, 0x30 },
    { L"Seth D Win Portrait", 0xbd022, 0xbd062, indexKOF02Sprites_Seth, 0x30 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_PORTRAITS_WIN[] =
{
    { L"Ramon A Win Portrait", 0xbd062, 0xbd0a2, indexKOF02Sprites_Ramon, 0x30 },
    { L"Ramon B Win Portrait", 0xbd0a2, 0xbd0e2, indexKOF02Sprites_Ramon, 0x30 },
    { L"Ramon C Win Portrait", 0xbd0e2, 0xbd122, indexKOF02Sprites_Ramon, 0x30 },
    { L"Ramon D Win Portrait", 0xbd122, 0xbd162, indexKOF02Sprites_Ramon, 0x30 },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_PORTRAITS_WIN[] =
{
    { L"Kula A Win Portrait", 0xbd162, 0xbd1a2, indexKOF02Sprites_Kula, 0x30 },
    { L"Kula B Win Portrait", 0xbd1a2, 0xbd1e2, indexKOF02Sprites_Kula, 0x30 },
    { L"Kula C Win Portrait", 0xbd1e2, 0xbd222, indexKOF02Sprites_Kula, 0x30 },
    { L"Kula D Win Portrait", 0xbd222, 0xbd262, indexKOF02Sprites_Kula, 0x30 },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_PORTRAITS_WIN[] =
{
    { L"K9999 A Win Portrait", 0xbd262, 0xbd2a2, indexKOF02Sprites_K9999, 0x30 },
    { L"K9999 B Win Portrait", 0xbd2a2, 0xbd2e2, indexKOF02Sprites_K9999, 0x30 },
    { L"K9999 C Win Portrait", 0xbd2e2, 0xbd322, indexKOF02Sprites_K9999, 0x30 },
    { L"K9999 D Win Portrait", 0xbd322, 0xbd362, indexKOF02Sprites_K9999, 0x30 },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_PORTRAITS_WIN[] =
{
    { L"Angel A Win Portrait", 0xbd362, 0xbd3a2, indexKOF02Sprites_Angel, 0x30 },
    { L"Angel B Win Portrait", 0xbd3a2, 0xbd3e2, indexKOF02Sprites_Angel, 0x30 },
    { L"Angel C Win Portrait", 0xbd3e2, 0xbd422, indexKOF02Sprites_Angel, 0x30 },
    { L"Angel D Win Portrait", 0xbd422, 0xbd462, indexKOF02Sprites_Angel, 0x30 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_WIN[] =
{
    { L"Omega Rugal A Win Portrait", 0xbd462, 0xbd4a2, indexKOF02Sprites_OmegaRugal, 0x30 },
    { L"Omega Rugal B Win Portrait", 0xbd4a2, 0xbd4e2, indexKOF02Sprites_OmegaRugal, 0x30 },
    { L"Omega Rugal C Win Portrait", 0xbd4e2, 0xbd522, indexKOF02Sprites_OmegaRugal, 0x30 },
    { L"Omega Rugal D Win Portrait", 0xbd522, 0xbd562, indexKOF02Sprites_OmegaRugal, 0x30 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_PORTRAITS_WIN[] =
{
    { L"KUSANAGI A Win Portrait", 0xbd562, 0xbd5a2, indexKOF02Sprites_KUSANAGI, 0x30 },
    { L"KUSANAGI B Win Portrait", 0xbd5a2, 0xbd5e2, indexKOF02Sprites_KUSANAGI, 0x30 },
    { L"KUSANAGI C Win Portrait", 0xbd5e2, 0xbd622, indexKOF02Sprites_KUSANAGI, 0x30 },
    { L"KUSANAGI D Win Portrait", 0xbd622, 0xbd662, indexKOF02Sprites_KUSANAGI, 0x30 },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_PORTRAITS_WIN[] =
{
    { L"Orochi Yashiro A Win Portrait", 0xbd662, 0xbd6a2, indexKOF02Sprites_YashiroOrochi, 0x30 },
    { L"Orochi Yashiro B Win Portrait", 0xbd6a2, 0xbd6e2, indexKOF02Sprites_YashiroOrochi, 0x30 },
    { L"Orochi Yashiro C Win Portrait", 0xbd6e2, 0xbd722, indexKOF02Sprites_YashiroOrochi, 0x30 },
    { L"Orochi Yashiro D Win Portrait", 0xbd722, 0xbd762, indexKOF02Sprites_YashiroOrochi, 0x30 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_PORTRAITS_WIN[] =
{
    { L"Orochi Shermie A Win Portrait", 0xbd762, 0xbd7a2, indexKOF02Sprites_ShermieOrochi, 0x30 },
    { L"Orochi Shermie B Win Portrait", 0xbd7a2, 0xbd7e2, indexKOF02Sprites_ShermieOrochi, 0x30 },
    { L"Orochi Shermie C Win Portrait", 0xbd7e2, 0xbd822, indexKOF02Sprites_ShermieOrochi, 0x30 },
    { L"Orochi Shermie D Win Portrait", 0xbd822, 0xbd862, indexKOF02Sprites_ShermieOrochi, 0x30 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_PORTRAITS_WIN[] =
{
    { L"Orochi Chris A Win Portrait", 0xbd862, 0xbd8a2, indexKOF02Sprites_ChrisOrochi, 0x30 },
    { L"Orochi Chris B Win Portrait", 0xbd8a2, 0xbd8e2, indexKOF02Sprites_ChrisOrochi, 0x30 },
    { L"Orochi Chris C Win Portrait", 0xbd8e2, 0xbd922, indexKOF02Sprites_ChrisOrochi, 0x30 },
    { L"Orochi Chris D Win Portrait", 0xbd922, 0xbd962, indexKOF02Sprites_ChrisOrochi, 0x30 },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kyo A Lifebar Portrait", 0xb9562, 0xb9582, indexKOF02Sprites_Kyo, 0x32 },
    { L"Kyo B Lifebar Portrait", 0xb9b62, 0xb9b82, indexKOF02Sprites_Kyo, 0x32 },
    { L"Kyo C Lifebar Portrait", 0xba162, 0xba182, indexKOF02Sprites_Kyo, 0x32 },
    { L"Kyo D Lifebar Portrait", 0xba762, 0xba782, indexKOF02Sprites_Kyo, 0x32 },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Benimaru A Lifebar Portrait", 0xb9582, 0xb95a2, indexKOF02Sprites_Benimaru, 0x32 },
    { L"Benimaru B Lifebar Portrait", 0xb9b82, 0xb9ba2, indexKOF02Sprites_Benimaru, 0x32 },
    { L"Benimaru C Lifebar Portrait", 0xba182, 0xba1a2, indexKOF02Sprites_Benimaru, 0x32 },
    { L"Benimaru D Lifebar Portrait", 0xba782, 0xba7a2, indexKOF02Sprites_Benimaru, 0x32 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Daimon A Lifebar Portrait", 0xb95a2, 0xb95c2, indexKOF02Sprites_Daimon, 0x32 },
    { L"Daimon B Lifebar Portrait", 0xb9ba2, 0xb9bc2, indexKOF02Sprites_Daimon, 0x32 },
    { L"Daimon C Lifebar Portrait", 0xba1a2, 0xba1c2, indexKOF02Sprites_Daimon, 0x32 },
    { L"Daimon D Lifebar Portrait", 0xba7a2, 0xba7c2, indexKOF02Sprites_Daimon, 0x32 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Terry A Lifebar Portrait", 0xb95c2, 0xb95e2, indexKOF02Sprites_Terry, 0x32 },
    { L"Terry B Lifebar Portrait", 0xb9bc2, 0xb9be2, indexKOF02Sprites_Terry, 0x32 },
    { L"Terry C Lifebar Portrait", 0xba1c2, 0xba1e2, indexKOF02Sprites_Terry, 0x32 },
    { L"Terry D Lifebar Portrait", 0xba7c2, 0xba7e2, indexKOF02Sprites_Terry, 0x32 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Andy A Lifebar Portrait", 0xb95e2, 0xb9602, indexKOF02Sprites_Andy, 0x32 },
    { L"Andy B Lifebar Portrait", 0xb9be2, 0xb9c02, indexKOF02Sprites_Andy, 0x32 },
    { L"Andy C Lifebar Portrait", 0xba1e2, 0xba202, indexKOF02Sprites_Andy, 0x32 },
    { L"Andy D Lifebar Portrait", 0xba7e2, 0xba802, indexKOF02Sprites_Andy, 0x32 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Joe A Lifebar Portrait", 0xb9602, 0xb9622, indexKOF02Sprites_Joe, 0x32 },
    { L"Joe B Lifebar Portrait", 0xb9c02, 0xb9c22, indexKOF02Sprites_Joe, 0x32 },
    { L"Joe C Lifebar Portrait", 0xba202, 0xba222, indexKOF02Sprites_Joe, 0x32 },
    { L"Joe D Lifebar Portrait", 0xba802, 0xba822, indexKOF02Sprites_Joe, 0x32 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kim A Lifebar Portrait", 0xb9622, 0xb9642, indexKOF02Sprites_Kim, 0x32 },
    { L"Kim B Lifebar Portrait", 0xb9c22, 0xb9c42, indexKOF02Sprites_Kim, 0x32 },
    { L"Kim C Lifebar Portrait", 0xba222, 0xba242, indexKOF02Sprites_Kim, 0x32 },
    { L"Kim D Lifebar Portrait", 0xba822, 0xba842, indexKOF02Sprites_Kim, 0x32 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Chang A Lifebar Portrait", 0xb9642, 0xb9662, indexKOF02Sprites_Chang, 0x32 },
    { L"Chang B Lifebar Portrait", 0xb9c42, 0xb9c62, indexKOF02Sprites_Chang, 0x32 },
    { L"Chang C Lifebar Portrait", 0xba242, 0xba262, indexKOF02Sprites_Chang, 0x32 },
    { L"Chang D Lifebar Portrait", 0xba842, 0xba862, indexKOF02Sprites_Chang, 0x32 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Choi A Lifebar Portrait", 0xb9662, 0xb9682, indexKOF02Sprites_Choi, 0x32 },
    { L"Choi B Lifebar Portrait", 0xb9c62, 0xb9c82, indexKOF02Sprites_Choi, 0x32 },
    { L"Choi C Lifebar Portrait", 0xba262, 0xba282, indexKOF02Sprites_Choi, 0x32 },
    { L"Choi D Lifebar Portrait", 0xba862, 0xba882, indexKOF02Sprites_Choi, 0x32 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Athena A Lifebar Portrait", 0xb9682, 0xb96a2, indexKOF02Sprites_Athena, 0x32 },
    { L"Athena B Lifebar Portrait", 0xb9c82, 0xb9ca2, indexKOF02Sprites_Athena, 0x32 },
    { L"Athena C Lifebar Portrait", 0xba282, 0xba2a2, indexKOF02Sprites_Athena, 0x32 },
    { L"Athena D Lifebar Portrait", 0xba882, 0xba8a2, indexKOF02Sprites_Athena, 0x32 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kensou A Lifebar Portrait", 0xb96a2, 0xb96c2, indexKOF02Sprites_Kensou, 0x32 },
    { L"Kensou B Lifebar Portrait", 0xb9ca2, 0xb9cc2, indexKOF02Sprites_Kensou, 0x32 },
    { L"Kensou C Lifebar Portrait", 0xba2a2, 0xba2c2, indexKOF02Sprites_Kensou, 0x32 },
    { L"Kensou D Lifebar Portrait", 0xba8a2, 0xba8c2, indexKOF02Sprites_Kensou, 0x32 },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Chin A Lifebar Portrait", 0xb96c2, 0xb96e2, indexKOF02Sprites_Chin, 0x32 },
    { L"Chin B Lifebar Portrait", 0xb9cc2, 0xb9ce2, indexKOF02Sprites_Chin, 0x32 },
    { L"Chin C Lifebar Portrait", 0xba2c2, 0xba2e2, indexKOF02Sprites_Chin, 0x32 },
    { L"Chin D Lifebar Portrait", 0xba8c2, 0xba8e2, indexKOF02Sprites_Chin, 0x32 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Leona A Lifebar Portrait", 0xb96e2, 0xb9702, indexKOF02Sprites_Leona, 0x32 },
    { L"Leona B Lifebar Portrait", 0xb9ce2, 0xb9d02, indexKOF02Sprites_Leona, 0x32 },
    { L"Leona C Lifebar Portrait", 0xba2e2, 0xba302, indexKOF02Sprites_Leona, 0x32 },
    { L"Leona D Lifebar Portrait", 0xba8e2, 0xba902, indexKOF02Sprites_Leona, 0x32 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Ralf A Lifebar Portrait", 0xb9702, 0xb9722, indexKOF02Sprites_Ralf, 0x32 },
    { L"Ralf B Lifebar Portrait", 0xb9d02, 0xb9d22, indexKOF02Sprites_Ralf, 0x32 },
    { L"Ralf C Lifebar Portrait", 0xba302, 0xba322, indexKOF02Sprites_Ralf, 0x32 },
    { L"Ralf D Lifebar Portrait", 0xba902, 0xba922, indexKOF02Sprites_Ralf, 0x32 },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Clark A Lifebar Portrait", 0xb9722, 0xb9742, indexKOF02Sprites_Clark, 0x32 },
    { L"Clark B Lifebar Portrait", 0xb9d22, 0xb9d42, indexKOF02Sprites_Clark, 0x32 },
    { L"Clark C Lifebar Portrait", 0xba322, 0xba342, indexKOF02Sprites_Clark, 0x32 },
    { L"Clark D Lifebar Portrait", 0xba922, 0xba942, indexKOF02Sprites_Clark, 0x32 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Ryo A Lifebar Portrait", 0xb9742, 0xb9762, indexKOF02Sprites_Ryo, 0x32 },
    { L"Ryo B Lifebar Portrait", 0xb9d42, 0xb9d62, indexKOF02Sprites_Ryo, 0x32 },
    { L"Ryo C Lifebar Portrait", 0xba342, 0xba362, indexKOF02Sprites_Ryo, 0x32 },
    { L"Ryo D Lifebar Portrait", 0xba942, 0xba962, indexKOF02Sprites_Ryo, 0x32 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Robert A Lifebar Portrait", 0xb9762, 0xb9782, indexKOF02Sprites_Robert, 0x32 },
    { L"Robert B Lifebar Portrait", 0xb9d62, 0xb9d82, indexKOF02Sprites_Robert, 0x32 },
    { L"Robert C Lifebar Portrait", 0xba362, 0xba382, indexKOF02Sprites_Robert, 0x32 },
    { L"Robert D Lifebar Portrait", 0xba962, 0xba982, indexKOF02Sprites_Robert, 0x32 },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Takuma A Lifebar Portrait", 0xb9782, 0xb97a2, indexKOF02Sprites_Takuma, 0x32 },
    { L"Takuma B Lifebar Portrait", 0xb9d82, 0xb9da2, indexKOF02Sprites_Takuma, 0x32 },
    { L"Takuma C Lifebar Portrait", 0xba382, 0xba3a2, indexKOF02Sprites_Takuma, 0x32 },
    { L"Takuma D Lifebar Portrait", 0xba982, 0xba9a2, indexKOF02Sprites_Takuma, 0x32 },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Mai A Lifebar Portrait", 0xb97a2, 0xb97c2, indexKOF02Sprites_Mai, 0x32 },
    { L"Mai B Lifebar Portrait", 0xb9da2, 0xb9dc2, indexKOF02Sprites_Mai, 0x32 },
    { L"Mai C Lifebar Portrait", 0xba3a2, 0xba3c2, indexKOF02Sprites_Mai, 0x32 },
    { L"Mai D Lifebar Portrait", 0xba9a2, 0xba9c2, indexKOF02Sprites_Mai, 0x32 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Yuri A Lifebar Portrait", 0xb97c2, 0xb97e2, indexKOF02Sprites_Yuri, 0x32 },
    { L"Yuri B Lifebar Portrait", 0xb9dc2, 0xb9de2, indexKOF02Sprites_Yuri, 0x32 },
    { L"Yuri C Lifebar Portrait", 0xba3c2, 0xba3e2, indexKOF02Sprites_Yuri, 0x32 },
    { L"Yuri D Lifebar Portrait", 0xba9c2, 0xba9e2, indexKOF02Sprites_Yuri, 0x32 },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"May Lee A Lifebar Portrait", 0xb97e2, 0xb9802, indexKOF02Sprites_MayLee, 0x32 },
    { L"May Lee B Lifebar Portrait", 0xb9de2, 0xb9e02, indexKOF02Sprites_MayLee, 0x32 },
    { L"May Lee C Lifebar Portrait", 0xba3e2, 0xba402, indexKOF02Sprites_MayLee, 0x32 },
    { L"May Lee D Lifebar Portrait", 0xba9e2, 0xbaa02, indexKOF02Sprites_MayLee, 0x32 },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Iori A Lifebar Portrait", 0xb9802, 0xb9822, indexKOF02Sprites_Iori, 0x32 },
    { L"Iori B Lifebar Portrait", 0xb9e02, 0xb9e22, indexKOF02Sprites_Iori, 0x32 },
    { L"Iori C Lifebar Portrait", 0xba402, 0xba422, indexKOF02Sprites_Iori, 0x32 },
    { L"Iori D Lifebar Portrait", 0xbaa02, 0xbaa22, indexKOF02Sprites_Iori, 0x32 },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Mature A Lifebar Portrait", 0xb9822, 0xb9842, indexKOF02Sprites_Mature, 0x32 },
    { L"Mature B Lifebar Portrait", 0xb9e22, 0xb9e42, indexKOF02Sprites_Mature, 0x32 },
    { L"Mature C Lifebar Portrait", 0xba422, 0xba442, indexKOF02Sprites_Mature, 0x32 },
    { L"Mature D Lifebar Portrait", 0xbaa22, 0xbaa42, indexKOF02Sprites_Mature, 0x32 },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Vice A Lifebar Portrait", 0xb9842, 0xb9862, indexKOF02Sprites_Vice, 0x32 },
    { L"Vice B Lifebar Portrait", 0xb9e42, 0xb9e62, indexKOF02Sprites_Vice, 0x32 },
    { L"Vice C Lifebar Portrait", 0xba442, 0xba462, indexKOF02Sprites_Vice, 0x32 },
    { L"Vice D Lifebar Portrait", 0xbaa42, 0xbaa62, indexKOF02Sprites_Vice, 0x32 },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Yamazaki A Lifebar Portrait", 0xb9862, 0xb9882, indexKOF02Sprites_Yamazaki, 0x32 },
    { L"Yamazaki B Lifebar Portrait", 0xb9e62, 0xb9e82, indexKOF02Sprites_Yamazaki, 0x32 },
    { L"Yamazaki C Lifebar Portrait", 0xba462, 0xba482, indexKOF02Sprites_Yamazaki, 0x32 },
    { L"Yamazaki D Lifebar Portrait", 0xbaa62, 0xbaa82, indexKOF02Sprites_Yamazaki, 0x32 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Blue Mary A Lifebar Portrait", 0xb9882, 0xb98a2, indexKOF02Sprites_BlueMary, 0x32 },
    { L"Blue Mary B Lifebar Portrait", 0xb9e82, 0xb9ea2, indexKOF02Sprites_BlueMary, 0x32 },
    { L"Blue Mary C Lifebar Portrait", 0xba482, 0xba4a2, indexKOF02Sprites_BlueMary, 0x32 },
    { L"Blue Mary D Lifebar Portrait", 0xbaa82, 0xbaaa2, indexKOF02Sprites_BlueMary, 0x32 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Billy A Lifebar Portrait", 0xb98a2, 0xb98c2, indexKOF02Sprites_Billy, 0x32 },
    { L"Billy B Lifebar Portrait", 0xb9ea2, 0xb9ec2, indexKOF02Sprites_Billy, 0x32 },
    { L"Billy C Lifebar Portrait", 0xba4a2, 0xba4c2, indexKOF02Sprites_Billy, 0x32 },
    { L"Billy D Lifebar Portrait", 0xbaaa2, 0xbaac2, indexKOF02Sprites_Billy, 0x32 },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Yashiro A Lifebar Portrait", 0xb98c2, 0xb98e2, indexKOF02Sprites_Yashiro, 0x32 },
    { L"Yashiro B Lifebar Portrait", 0xb9ec2, 0xb9ee2, indexKOF02Sprites_Yashiro, 0x32 },
    { L"Yashiro C Lifebar Portrait", 0xba4c2, 0xba4e2, indexKOF02Sprites_Yashiro, 0x32 },
    { L"Yashiro D Lifebar Portrait", 0xbaac2, 0xbaae2, indexKOF02Sprites_Yashiro, 0x32 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Shermie A Lifebar Portrait", 0xb98e2, 0xb9902, indexKOF02Sprites_Shermie, 0x32 },
    { L"Shermie B Lifebar Portrait", 0xb9ee2, 0xb9f02, indexKOF02Sprites_Shermie, 0x32 },
    { L"Shermie C Lifebar Portrait", 0xba4e2, 0xba502, indexKOF02Sprites_Shermie, 0x32 },
    { L"Shermie D Lifebar Portrait", 0xbaae2, 0xbab02, indexKOF02Sprites_Shermie, 0x32 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Chris A Lifebar Portrait", 0xb9902, 0xb9922, indexKOF02Sprites_Chris, 0x32 },
    { L"Chris B Lifebar Portrait", 0xb9f02, 0xb9f22, indexKOF02Sprites_Chris, 0x32 },
    { L"Chris C Lifebar Portrait", 0xba502, 0xba522, indexKOF02Sprites_Chris, 0x32 },
    { L"Chris D Lifebar Portrait", 0xbab02, 0xbab22, indexKOF02Sprites_Chris, 0x32 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"K' A Lifebar Portrait", 0xb9922, 0xb9942, indexKOF02Sprites_K, 0x32 },
    { L"K' B Lifebar Portrait", 0xb9f22, 0xb9f42, indexKOF02Sprites_K, 0x32 },
    { L"K' C Lifebar Portrait", 0xba522, 0xba542, indexKOF02Sprites_K, 0x32 },
    { L"K' D Lifebar Portrait", 0xbab22, 0xbab42, indexKOF02Sprites_K, 0x32 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Maxima A Lifebar Portrait", 0xb9942, 0xb9962, indexKOF02Sprites_Maxima, 0x32 },
    { L"Maxima B Lifebar Portrait", 0xb9f42, 0xb9f62, indexKOF02Sprites_Maxima, 0x32 },
    { L"Maxima C Lifebar Portrait", 0xba542, 0xba562, indexKOF02Sprites_Maxima, 0x32 },
    { L"Maxima D Lifebar Portrait", 0xbab42, 0xbab62, indexKOF02Sprites_Maxima, 0x32 },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Whip A Lifebar Portrait", 0xb9962, 0xb9982, indexKOF02Sprites_Whip, 0x32 },
    { L"Whip B Lifebar Portrait", 0xb9f62, 0xb9f82, indexKOF02Sprites_Whip, 0x32 },
    { L"Whip C Lifebar Portrait", 0xba562, 0xba582, indexKOF02Sprites_Whip, 0x32 },
    { L"Whip D Lifebar Portrait", 0xbab62, 0xbab82, indexKOF02Sprites_Whip, 0x32 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Vanessa A Lifebar Portrait", 0xb9982, 0xb99a2, indexKOF02Sprites_Vanessa, 0x32 },
    { L"Vanessa B Lifebar Portrait", 0xb9f82, 0xb9fa2, indexKOF02Sprites_Vanessa, 0x32 },
    { L"Vanessa C Lifebar Portrait", 0xba582, 0xba5a2, indexKOF02Sprites_Vanessa, 0x32 },
    { L"Vanessa D Lifebar Portrait", 0xbab82, 0xbaba2, indexKOF02Sprites_Vanessa, 0x32 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Seth A Lifebar Portrait", 0xb99a2, 0xb99c2, indexKOF02Sprites_Seth, 0x32 },
    { L"Seth B Lifebar Portrait", 0xb9fa2, 0xb9fc2, indexKOF02Sprites_Seth, 0x32 },
    { L"Seth C Lifebar Portrait", 0xba5a2, 0xba5c2, indexKOF02Sprites_Seth, 0x32 },
    { L"Seth D Lifebar Portrait", 0xbaba2, 0xbabc2, indexKOF02Sprites_Seth, 0x32 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Ramon A Lifebar Portrait", 0xb99c2, 0xb99e2, indexKOF02Sprites_Ramon, 0x32 },
    { L"Ramon B Lifebar Portrait", 0xb9fc2, 0xb9fe2, indexKOF02Sprites_Ramon, 0x32 },
    { L"Ramon C Lifebar Portrait", 0xba5c2, 0xba5e2, indexKOF02Sprites_Ramon, 0x32 },
    { L"Ramon D Lifebar Portrait", 0xbabc2, 0xbabe2, indexKOF02Sprites_Ramon, 0x32 },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Kula A Lifebar Portrait", 0xb99e2, 0xb9a02, indexKOF02Sprites_Kula, 0x32 },
    { L"Kula B Lifebar Portrait", 0xb9fe2, 0xba002, indexKOF02Sprites_Kula, 0x32 },
    { L"Kula C Lifebar Portrait", 0xba5e2, 0xba602, indexKOF02Sprites_Kula, 0x32 },
    { L"Kula D Lifebar Portrait", 0xbabe2, 0xbac02, indexKOF02Sprites_Kula, 0x32 },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"K9999 A Lifebar Portrait", 0xb9a02, 0xb9a22, indexKOF02Sprites_K9999, 0x32 },
    { L"K9999 B Lifebar Portrait", 0xba002, 0xba022, indexKOF02Sprites_K9999, 0x32 },
    { L"K9999 C Lifebar Portrait", 0xba602, 0xba622, indexKOF02Sprites_K9999, 0x32 },
    { L"K9999 D Lifebar Portrait", 0xbac02, 0xbac22, indexKOF02Sprites_K9999, 0x32 },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Angel A Lifebar Portrait", 0xb9a22, 0xb9a42, indexKOF02Sprites_Angel, 0x32 },
    { L"Angel B Lifebar Portrait", 0xba022, 0xba042, indexKOF02Sprites_Angel, 0x32 },
    { L"Angel C Lifebar Portrait", 0xba622, 0xba642, indexKOF02Sprites_Angel, 0x32 },
    { L"Angel D Lifebar Portrait", 0xbac22, 0xbac42, indexKOF02Sprites_Angel, 0x32 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Omega Rugal A Lifebar Portrait", 0xb9a42, 0xb9a62, indexKOF02Sprites_OmegaRugal, 0x32 },
    { L"Omega Rugal B Lifebar Portrait", 0xba042, 0xba062, indexKOF02Sprites_OmegaRugal, 0x32 },
    { L"Omega Rugal C Lifebar Portrait", 0xba642, 0xba662, indexKOF02Sprites_OmegaRugal, 0x32 },
    { L"Omega Rugal D Lifebar Portrait", 0xbac42, 0xbac62, indexKOF02Sprites_OmegaRugal, 0x32 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"KUSANAGI A Lifebar Portrait", 0xb9a62, 0xb9a82, indexKOF02Sprites_KUSANAGI, 0x32 },
    { L"KUSANAGI B Lifebar Portrait", 0xba062, 0xba082, indexKOF02Sprites_KUSANAGI, 0x32 },
    { L"KUSANAGI C Lifebar Portrait", 0xba662, 0xba682, indexKOF02Sprites_KUSANAGI, 0x32 },
    { L"KUSANAGI D Lifebar Portrait", 0xbac62, 0xbac82, indexKOF02Sprites_KUSANAGI, 0x32 },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Orochi Yashiro A Lifebar Portrait", 0xb9a82, 0xb9aa2, indexKOF02Sprites_YashiroOrochi, 0x32 },
    { L"Orochi Yashiro B Lifebar Portrait", 0xba082, 0xba0a2, indexKOF02Sprites_YashiroOrochi, 0x32 },
    { L"Orochi Yashiro C Lifebar Portrait", 0xba682, 0xba6a2, indexKOF02Sprites_YashiroOrochi, 0x32 },
    { L"Orochi Yashiro D Lifebar Portrait", 0xbac82, 0xbaca2, indexKOF02Sprites_YashiroOrochi, 0x32 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Orochi Shermie A Lifebar Portrait", 0xb9aa2, 0xb9ac2, indexKOF02Sprites_ShermieOrochi, 0x32 },
    { L"Orochi Shermie B Lifebar Portrait", 0xba0a2, 0xba0c2, indexKOF02Sprites_ShermieOrochi, 0x32 },
    { L"Orochi Shermie C Lifebar Portrait", 0xba6a2, 0xba6c2, indexKOF02Sprites_ShermieOrochi, 0x32 },
    { L"Orochi Shermie D Lifebar Portrait", 0xbaca2, 0xbacc2, indexKOF02Sprites_ShermieOrochi, 0x32 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_PORTRAITS_LIFEBAR[] =
{
    { L"Orochi Chris A Lifebar Portrait", 0xb9ac2, 0xb9ae2, indexKOF02Sprites_ChrisOrochi, 0x32 },
    { L"Orochi Chris B Lifebar Portrait", 0xba0c2, 0xba0e2, indexKOF02Sprites_ChrisOrochi, 0x32 },
    { L"Orochi Chris C Lifebar Portrait", 0xba6c2, 0xba6e2, indexKOF02Sprites_ChrisOrochi, 0x32 },
    { L"Orochi Chris D Lifebar Portrait", 0xbacc2, 0xbace2, indexKOF02Sprites_ChrisOrochi, 0x32 },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kyo Select Portrait", 0xb8362, 0xb83a2, indexKOF02Sprites_Extras, 0x2b },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Benimaru Select Portrait", 0xb83a2, 0xb83e2, indexKOF02Sprites_Extras, 0x01 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Daimon Select Portrait", 0xb83e2, 0xb8422, indexKOF02Sprites_Extras, 0x02 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Terry Select Portrait", 0xb8422, 0xb8462, indexKOF02Sprites_Extras, 0x03 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Andy Select Portrait", 0xb8462, 0xb84a2, indexKOF02Sprites_Extras, 0x48 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Joe Select Portrait", 0xb84a2, 0xb84e2, indexKOF02Sprites_Extras, 0x05 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kim Select Portrait", 0xb84e2, 0xb8522, indexKOF02Sprites_Extras, 0x12 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Chang Select Portrait", 0xb8522, 0xb8562, indexKOF02Sprites_Extras, 0x13 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Choi Select Portrait", 0xb8562, 0xb85a2, indexKOF02Sprites_Extras, 0x14 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Athena Select Portrait", 0xb85a2, 0xb85e2, indexKOF02Sprites_Extras, 0x27 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kensou Select Portrait", 0xb85e2, 0xb8622, indexKOF02Sprites_Extras, 0x0d },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Chin Select Portrait", 0xb8622, 0xb8662, indexKOF02Sprites_Extras, 0x49 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Leona Select Portrait", 0xb8662, 0xb86a2, indexKOF02Sprites_Extras, 0x09 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Ralf Select Portrait", 0xb86a2, 0xb86e2, indexKOF02Sprites_Extras, 0x2e },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Clark Select Portrait", 0xb86e2, 0xb8722, indexKOF02Sprites_Extras, 0x28 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Ryo Select Portrait", 0xb8722, 0xb8762, indexKOF02Sprites_Extras, 0x06 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Robert Select Portrait", 0xb8762, 0xb87a2, indexKOF02Sprites_Extras, 0x4b },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Takuma Select Portrait", 0xb87a2, 0xb87e2, indexKOF02Sprites_Extras, 0x1f },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Mai Select Portrait", 0xb87e2, 0xb8822, indexKOF02Sprites_Extras, 0x10 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Yuri Select Portrait", 0xb8822, 0xb8862, indexKOF02Sprites_Extras, 0x4c },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"May Lee Select Portrait", 0xb8862, 0xb88a2, indexKOF02Sprites_Extras, 0x2d },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Iori Select Portrait", 0xb88a2, 0xb88e2, indexKOF02Sprites_Extras, 0x1b },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Mature Select Portrait", 0xb88e2, 0xb8922, indexKOF02Sprites_Extras, 0x1c },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Vice Select Portrait", 0xb8922, 0xb8962, indexKOF02Sprites_Extras, 0x1d },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Yamazaki Select Portrait", 0xb8962, 0xb89a2, indexKOF02Sprites_Extras, 0x18 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Blue Mary Select Portrait", 0xb89a2, 0xb89e2, indexKOF02Sprites_Extras, 0x19 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Billy Select Portrait", 0xb89e2, 0xb8a22, indexKOF02Sprites_Extras, 0x1a },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Yashiro Select Portrait", 0xb8a22, 0xb8a62, indexKOF02Sprites_Extras, 0x15 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Shermie Select Portrait", 0xb8a62, 0xb8aa2, indexKOF02Sprites_Extras, 0x16 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Chris Select Portrait", 0xb8aa2, 0xb8ae2, indexKOF02Sprites_Extras, 0x17 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_PORTRAITS_SELECT[] =
{
    { L"K' Select Portrait", 0xb8ae2, 0xb8b22, indexKOF02Sprites_Extras, 0x29 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Maxima Select Portrait", 0xb8b22, 0xb8b62, indexKOF02Sprites_Extras, 0x2c },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Whip Select Portrait", 0xb8b62, 0xb8ba2, indexKOF02Sprites_Extras, 0x32 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Vanessa Select Portrait", 0xb8ba2, 0xb8be2, indexKOF02Sprites_Extras, 0x31 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Seth Select Portrait", 0xb8be2, 0xb8c22, indexKOF02Sprites_Extras, 0x30 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Ramon Select Portrait", 0xb8c22, 0xb8c62, indexKOF02Sprites_Extras, 0x2f },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Kula Select Portrait", 0xb8c62, 0xb8ca2, indexKOF02Sprites_Extras, 0x2a },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_PORTRAITS_SELECT[] =
{
    { L"K9999 Select Portrait", 0xb8ca2, 0xb8ce2, indexKOF02Sprites_Extras, 0x4d },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Angel Select Portrait", 0xb8ce2, 0xb8d22, indexKOF02Sprites_Extras, 0x26 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Omega Rugal Select Portrait", 0xb8d22, 0xb8d62, indexKOF02Sprites_Extras, 0x24 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_PORTRAITS_SELECT[] =
{
    { L"KUSANAGI Select Portrait", 0xb8d62, 0xb8da2, indexKOF02Sprites_Extras, 0x4a },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Orochi Yashiro Select Portrait", 0xb8da2, 0xb8de2, indexKOF02Sprites_Extras, 0x51 }, 
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Orochi Shermie Select Portrait", 0xb8de2, 0xb8e22, indexKOF02Sprites_Extras, 0x50 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_PORTRAITS_SELECT[] =
{
    { L"Orochi Chris Select Portrait", 0xb8e22, 0xb8e62, indexKOF02Sprites_Extras, 0x4f },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_A[] =
{
    { L"Kyo A", 0x0088b62, 0x0088b82, indexKOF02UMSprites_KyoKusa },
    { L"A - MAX2 Fire Palette", 0x0088b82, 0x0088ba2, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"A - MAX Orochinagi Fire", 0x0088ba2, 0x0088bc2, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"A - Electric Shock Effect", 0x0088bc2, 0x0088be2, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"A - MAX Flash", 0x0088be2, 0x0088c02, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"A - Shingo Intro Stuff", 0x0088c02, 0x0088c22, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"A - Soul Palette", 0x0088c22, 0x0088c42, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0088c42, 0x0088c62, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_B[] =
{
    { L"Kyo B", 0x0088d62, 0x0088d82, indexKOF02UMSprites_KyoKusa },
    { L"B - MAX2 Fire Palette", 0x0088d82, 0x0088da2, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"B - MAX Orochinagi Fire", 0x0088da2, 0x0088dc2, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"B - Electric Shock Effect", 0x0088dc2, 0x0088de2, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"B - MAX Flash", 0x0088de2, 0x0088e02, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"B - Shingo Intro Stuff", 0x0088e02, 0x0088e22, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"B - Soul Palette", 0x0088e22, 0x0088e42, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0088e42, 0x0088e62, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_C[] =
{
    { L"Kyo C", 0x0088f62, 0x0088f82, indexKOF02UMSprites_KyoKusa },
    { L"C - MAX2 Fire Palette", 0x0088f82, 0x0088fa2, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"C - MAX Orochinagi Fire", 0x0088fa2, 0x0088fc2, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"C - Electric Shock Effect", 0x0088fc2, 0x0088fe2, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"C - MAX Flash", 0x0088fe2, 0x0089002, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"C - Shingo Intro Stuff", 0x0089002, 0x0089022, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"C - Soul Palette", 0x0089022, 0x0089042, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0089042, 0x0089062, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KYO_PALETTES_D[] =
{
    { L"Kyo D", 0x0089162, 0x0089182, indexKOF02UMSprites_KyoKusa },
    { L"D - MAX2 Fire Palette", 0x0089182, 0x00891a2, indexKOF02UMSprites_KyoKusa, 0x02 },
    { L"D - MAX Orochinagi Fire", 0x00891a2, 0x00891c2, indexKOF02UMSprites_KyoKusa, 0x03 },
    { L"D - Electric Shock Effect", 0x00891c2, 0x00891e2, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"D - MAX Flash", 0x00891e2, 0x0089202, indexKOF02UMSprites_KyoKusa, 0x08 },
    { L"D - Shingo Intro Stuff", 0x0089202, 0x0089222, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"D - Soul Palette", 0x0089222, 0x0089242, indexKOF02UMSprites_KyoKusa, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0089242, 0x0089262, indexKOF02UMSprites_KyoKusa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru A", 0x0089362, 0x0089382, indexKOF02UMSprites_Benimaru },
    { L"A - Raijiken Flash", 0x0089382, 0x00893a2, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"A - Phantom Hurricane Effects", 0x00893a2, 0x00893c2, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"A - Electric Shock Effect", 0x00893c2, 0x00893e2, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"A - MAX Flash", 0x00893e2, 0x0089402, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0089402, 0x0089422, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"A - Soul Palette", 0x0089422, 0x0089442, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0089442, 0x0089462, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru B", 0x0089562, 0x0089582, indexKOF02UMSprites_Benimaru },
    { L"B - Raijiken Flash", 0x0089582, 0x00895a2, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"B - Phantom Hurricane Effects", 0x00895a2, 0x00895c2, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"B - Electric Shock Effect", 0x00895c2, 0x00895e2, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"B - MAX Flash", 0x00895e2, 0x0089602, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0089602, 0x0089622, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"B - Soul Palette", 0x0089622, 0x0089642, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0089642, 0x0089662, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru C", 0x0089762, 0x0089782, indexKOF02UMSprites_Benimaru },
    { L"C - Raijiken Flash", 0x0089782, 0x00897a2, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"C - Phantom Hurricane Effects", 0x00897a2, 0x00897c2, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"C - Electric Shock Effect", 0x00897c2, 0x00897e2, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"C - MAX Flash", 0x00897e2, 0x0089802, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0089802, 0x0089822, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"C - Soul Palette", 0x0089822, 0x0089842, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0089842, 0x0089862, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru D", 0x0089962, 0x0089982, indexKOF02UMSprites_Benimaru },
    { L"D - Raijiken Flash", 0x0089982, 0x00899a2, indexKOF02UMSprites_Benimaru, 0x04 },
    { L"D - Phantom Hurricane Effects", 0x00899a2, 0x00899c2, indexKOF02UMSprites_Benimaru, 0x10 },
    { L"D - Electric Shock Effect", 0x00899c2, 0x00899e2, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"D - MAX Flash", 0x00899e2, 0x0089a02, indexKOF02UMSprites_Benimaru, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0089a02, 0x0089a22, indexKOF02UMSprites_Benimaru, 0x00 },
    { L"D - Soul Palette", 0x0089a22, 0x0089a42, indexKOF02UMSprites_Benimaru, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0089a42, 0x0089a62, indexKOF02UMSprites_Benimaru, 0x00 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_A[] =
{
    { L"Daimon A", 0x0089b62, 0x0089b82, indexKOF02UMSprites_Daimon },
    { L"A - Hidden Super Desperation Move 1", 0x0089b82, 0x0089ba2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0089ba2, 0x0089bc2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"A - Electric Shock Effect", 0x0089bc2, 0x0089be2, indexKOF02UMSprites_Daimon, 0x18 },
    { L"A - MAX Flash", 0x0089be2, 0x0089c02, indexKOF02UMSprites_Daimon, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0089c02, 0x0089c22, indexKOF02UMSprites_Daimon, 0x00 },
    { L"A - Soul Palette", 0x0089c22, 0x0089c42, indexKOF02UMSprites_Daimon, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0089c42, 0x0089c62, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_B[] =
{
    { L"Daimon B", 0x0089d62, 0x0089d82, indexKOF02UMSprites_Daimon },
    { L"B - Hidden Super Desperation Move 1", 0x0089d82, 0x0089da2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0089da2, 0x0089dc2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"B - Electric Shock Effect", 0x0089dc2, 0x0089de2, indexKOF02UMSprites_Daimon, 0x18 },
    { L"B - MAX Flash", 0x0089de2, 0x0089e02, indexKOF02UMSprites_Daimon, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0089e02, 0x0089e22, indexKOF02UMSprites_Daimon, 0x00 },
    { L"B - Soul Palette", 0x0089e22, 0x0089e42, indexKOF02UMSprites_Daimon, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0089e42, 0x0089e62, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_C[] =
{
    { L"Daimon C", 0x0089f62, 0x0089f82, indexKOF02UMSprites_Daimon },
    { L"C - Hidden Super Desperation Move 1", 0x0089f82, 0x0089fa2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0089fa2, 0x0089fc2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"C - Electric Shock Effect", 0x0089fc2, 0x0089fe2, indexKOF02UMSprites_Daimon, 0x18 },
    { L"C - MAX Flash", 0x0089fe2, 0x008a002, indexKOF02UMSprites_Daimon, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008a002, 0x008a022, indexKOF02UMSprites_Daimon, 0x00 },
    { L"C - Soul Palette", 0x008a022, 0x008a042, indexKOF02UMSprites_Daimon, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008a042, 0x008a062, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_DAIMON_PALETTES_D[] =
{
    { L"Daimon D", 0x008a162, 0x008a182, indexKOF02UMSprites_Daimon },
    { L"D - Hidden Super Desperation Move 1", 0x008a182, 0x008a1a2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x008a1a2, 0x008a1c2, indexKOF02UMSprites_Daimon, 0x00 },
    { L"D - Electric Shock Effect", 0x008a1c2, 0x008a1e2, indexKOF02UMSprites_Daimon, 0x18 },
    { L"D - MAX Flash", 0x008a1e2, 0x008a202, indexKOF02UMSprites_Daimon, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008a202, 0x008a222, indexKOF02UMSprites_Daimon, 0x00 },
    { L"D - Soul Palette", 0x008a222, 0x008a242, indexKOF02UMSprites_Daimon, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008a242, 0x008a262, indexKOF02UMSprites_Daimon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_A[] =
{
    { L"Terry A", 0x008a362, 0x008a382, indexKOF02UMSprites_Terry },
    { L"A - Terry and Child Winpose", 0x008a382, 0x008a3a2, indexKOF02UMSprites_Terry, 0x19 },
    { L"A - MAX2 Trail", 0x008a3a2, 0x008a3c2, indexKOF02UMSprites_Terry, 0x0a },
    { L"A - Electric Shock Effect", 0x008a3c2, 0x008a3e2, indexKOF02UMSprites_Terry, 0x18 },
    { L"A - MAX Flash", 0x008a3e2, 0x008a402, indexKOF02UMSprites_Terry, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008a402, 0x008a422, indexKOF02UMSprites_Terry, 0x00 },
    { L"A - Soul Palette", 0x008a422, 0x008a442, indexKOF02UMSprites_Terry, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008a442, 0x008a462, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_B[] =
{
    { L"Terry B", 0x008a562, 0x008a582, indexKOF02UMSprites_Terry },
    { L"B - Terry and Child Winpose", 0x008a582, 0x008a5a2, indexKOF02UMSprites_Terry, 0x19 },
    { L"B - MAX2 Trail", 0x008a5a2, 0x008a5c2, indexKOF02UMSprites_Terry, 0x0a },
    { L"B - Electric Shock Effect", 0x008a5c2, 0x008a5e2, indexKOF02UMSprites_Terry, 0x18 },
    { L"B - MAX Flash", 0x008a5e2, 0x008a602, indexKOF02UMSprites_Terry, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008a602, 0x008a622, indexKOF02UMSprites_Terry, 0x00 },
    { L"B - Soul Palette", 0x008a622, 0x008a642, indexKOF02UMSprites_Terry, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008a642, 0x008a662, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_C[] =
{
    { L"Terry C", 0x008a762, 0x008a782, indexKOF02UMSprites_Terry },
    { L"C - Terry and Child Winpose", 0x008a782, 0x008a7a2, indexKOF02UMSprites_Terry, 0x19 },
    { L"C - MAX2 Trail", 0x008a7a2, 0x008a7c2, indexKOF02UMSprites_Terry, 0x0a },
    { L"C - Electric Shock Effect", 0x008a7c2, 0x008a7e2, indexKOF02UMSprites_Terry, 0x18 },
    { L"C - MAX Flash", 0x008a7e2, 0x008a802, indexKOF02UMSprites_Terry, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008a802, 0x008a822, indexKOF02UMSprites_Terry, 0x00 },
    { L"C - Soul Palette", 0x008a822, 0x008a842, indexKOF02UMSprites_Terry, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008a842, 0x008a862, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TERRY_PALETTES_D[] =
{
    { L"Terry D", 0x008a962, 0x008a982, indexKOF02UMSprites_Terry },
    { L"D - Terry and Child Winpose", 0x008a982, 0x008a9a2, indexKOF02UMSprites_Terry, 0x19 },
    { L"D - MAX2 Trail", 0x008a9a2, 0x008a9c2, indexKOF02UMSprites_Terry, 0x0a },
    { L"D - Electric Shock Effect", 0x008a9c2, 0x008a9e2, indexKOF02UMSprites_Terry, 0x18 },
    { L"D - MAX Flash", 0x008a9e2, 0x008aa02, indexKOF02UMSprites_Terry, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008aa02, 0x008aa22, indexKOF02UMSprites_Terry, 0x00 },
    { L"D - Soul Palette", 0x008aa22, 0x008aa42, indexKOF02UMSprites_Terry, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008aa42, 0x008aa62, indexKOF02UMSprites_Terry, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_A[] =
{
    { L"Andy A", 0x008ab62, 0x008ab82, indexKOF02UMSprites_Andy },
    { L"A - SDM Super Sonic Swirl and MAX2", 0x008ab82, 0x008aba2, indexKOF02UMSprites_Andy, 0x11 },
    { L"A - MAX Super Sonic Swirl", 0x008aba2, 0x008abc2, indexKOF02UMSprites_Andy, 0x11 },
    { L"A - Electric Shock Effect", 0x008abc2, 0x008abe2, indexKOF02UMSprites_Andy, 0x18 },
    { L"A - MAX Flash", 0x008abe2, 0x008ac02, indexKOF02UMSprites_Andy, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008ac02, 0x008ac22, indexKOF02UMSprites_Andy, 0x00 },
    { L"A - Soul Palette", 0x008ac22, 0x008ac42, indexKOF02UMSprites_Andy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008ac42, 0x008ac62, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_B[] =
{
    { L"Andy B", 0x008ad62, 0x008ad82, indexKOF02UMSprites_Andy },
    { L"B - SDM Super Sonic Swirl and MAX2", 0x008ad82, 0x008ada2, indexKOF02UMSprites_Andy, 0x11 },
    { L"B - MAX Super Sonic Swirl", 0x008ada2, 0x008adc2, indexKOF02UMSprites_Andy, 0x11 },
    { L"B - Electric Shock Effect", 0x008adc2, 0x008ade2, indexKOF02UMSprites_Andy, 0x18 },
    { L"B - MAX Flash", 0x008ade2, 0x008ae02, indexKOF02UMSprites_Andy, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008ae02, 0x008ae22, indexKOF02UMSprites_Andy, 0x00 },
    { L"B - Soul Palette", 0x008ae22, 0x008ae42, indexKOF02UMSprites_Andy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008ae42, 0x008ae62, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_C[] =
{
    { L"Andy C", 0x008af62, 0x008af82, indexKOF02UMSprites_Andy },
    { L"C - SDM Super Sonic Swirl and MAX2", 0x008af82, 0x008afa2, indexKOF02UMSprites_Andy, 0x11 },
    { L"C - MAX Super Sonic Swirl", 0x008afa2, 0x008afc2, indexKOF02UMSprites_Andy, 0x11 },
    { L"C - Electric Shock Effect", 0x008afc2, 0x008afe2, indexKOF02UMSprites_Andy, 0x18 },
    { L"C - MAX Flash", 0x008afe2, 0x008b002, indexKOF02UMSprites_Andy, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008b002, 0x008b022, indexKOF02UMSprites_Andy, 0x00 },
    { L"C - Soul Palette", 0x008b022, 0x008b042, indexKOF02UMSprites_Andy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008b042, 0x008b062, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANDY_PALETTES_D[] =
{
    { L"Andy D", 0x008b162, 0x008b182, indexKOF02UMSprites_Andy },
    { L"D - SDM Super Sonic Swirl and MAX2", 0x008b182, 0x008b1a2, indexKOF02UMSprites_Andy, 0x11 },
    { L"D - MAX Super Sonic Swirl", 0x008b1a2, 0x008b1c2, indexKOF02UMSprites_Andy, 0x11 },
    { L"D - Electric Shock Effect", 0x008b1c2, 0x008b1e2, indexKOF02UMSprites_Andy, 0x18 },
    { L"D - MAX Flash", 0x008b1e2, 0x008b202, indexKOF02UMSprites_Andy, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008b202, 0x008b222, indexKOF02UMSprites_Andy, 0x00 },
    { L"D - Soul Palette", 0x008b222, 0x008b242, indexKOF02UMSprites_Andy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008b242, 0x008b262, indexKOF02UMSprites_Andy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_A[] =
{
    { L"Joe A", 0x008b362, 0x008b382, indexKOF02UMSprites_Joe },
    { L"A - Hidden Super Desperation Move 1", 0x008b382, 0x008b3a2, indexKOF02UMSprites_Joe, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x008b3a2, 0x008b3c2, indexKOF02UMSprites_Joe, 0x00 },
    { L"A - Electric Shock Effect", 0x008b3c2, 0x008b3e2, indexKOF02UMSprites_Joe, 0x18 },
    { L"A - MAX Flash", 0x008b3e2, 0x008b402, indexKOF02UMSprites_Joe, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008b402, 0x008b422, indexKOF02UMSprites_Joe, 0x00 },
    { L"A - Soul Palette", 0x008b422, 0x008b442, indexKOF02UMSprites_Joe, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008b442, 0x008b462, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_B[] =
{
    { L"Joe B", 0x008b562, 0x008b582, indexKOF02UMSprites_Joe },
    { L"B - Hidden Super Desperation Move 1", 0x008b582, 0x008b5a2, indexKOF02UMSprites_Joe, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x008b5a2, 0x008b5c2, indexKOF02UMSprites_Joe, 0x00 },
    { L"B - Electric Shock Effect", 0x008b5c2, 0x008b5e2, indexKOF02UMSprites_Joe, 0x18 },
    { L"B - MAX Flash", 0x008b5e2, 0x008b602, indexKOF02UMSprites_Joe, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008b602, 0x008b622, indexKOF02UMSprites_Joe, 0x00 },
    { L"B - Soul Palette", 0x008b622, 0x008b642, indexKOF02UMSprites_Joe, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008b642, 0x008b662, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_C[] =
{
    { L"Joe C", 0x008b762, 0x008b782, indexKOF02UMSprites_Joe },
    { L"C - Hidden Super Desperation Move 1", 0x008b782, 0x008b7a2, indexKOF02UMSprites_Joe, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x008b7a2, 0x008b7c2, indexKOF02UMSprites_Joe, 0x00 },
    { L"C - Electric Shock Effect", 0x008b7c2, 0x008b7e2, indexKOF02UMSprites_Joe, 0x18 },
    { L"C - MAX Flash", 0x008b7e2, 0x008b802, indexKOF02UMSprites_Joe, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008b802, 0x008b822, indexKOF02UMSprites_Joe, 0x00 },
    { L"C - Soul Palette", 0x008b822, 0x008b842, indexKOF02UMSprites_Joe, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008b842, 0x008b862, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02_A_JOE_PALETTES_D[] =
{
    { L"Joe D", 0x008b962, 0x008b982, indexKOF02UMSprites_Joe },
    { L"D - Hidden Super Desperation Move 1", 0x008b982, 0x008b9a2, indexKOF02UMSprites_Joe, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x008b9a2, 0x008b9c2, indexKOF02UMSprites_Joe, 0x00 },
    { L"D - Electric Shock Effect", 0x008b9c2, 0x008b9e2, indexKOF02UMSprites_Joe, 0x18 },
    { L"D - MAX Flash", 0x008b9e2, 0x008ba02, indexKOF02UMSprites_Joe, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008ba02, 0x008ba22, indexKOF02UMSprites_Joe, 0x00 },
    { L"D - Soul Palette", 0x008ba22, 0x008ba42, indexKOF02UMSprites_Joe, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008ba42, 0x008ba62, indexKOF02UMSprites_Joe, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_A[] =
{
    { L"Kim A", 0x008bb62, 0x008bb82, indexKOF02UMSprites_Kim },
    { L"A - Hidden Super Desperation Move 1", 0x008bb82, 0x008bba2, indexKOF02UMSprites_Kim, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x008bba2, 0x008bbc2, indexKOF02UMSprites_Kim, 0x00 },
    { L"A - Electric Shock Effect", 0x008bbc2, 0x008bbe2, indexKOF02UMSprites_Kim, 0x18 },
    { L"A - MAX Flash", 0x008bbe2, 0x008bc02, indexKOF02UMSprites_Kim, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008bc02, 0x008bc22, indexKOF02UMSprites_Kim, 0x00 },
    { L"A - Soul Palette", 0x008bc22, 0x008bc42, indexKOF02UMSprites_Kim, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008bc42, 0x008bc62, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_B[] =
{
    { L"Kim B", 0x008bd62, 0x008bd82, indexKOF02UMSprites_Kim },
    { L"B - Hidden Super Desperation Move 1", 0x008bd82, 0x008bda2, indexKOF02UMSprites_Kim, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x008bda2, 0x008bdc2, indexKOF02UMSprites_Kim, 0x00 },
    { L"B - Electric Shock Effect", 0x008bdc2, 0x008bde2, indexKOF02UMSprites_Kim, 0x18 },
    { L"B - MAX Flash", 0x008bde2, 0x008be02, indexKOF02UMSprites_Kim, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008be02, 0x008be22, indexKOF02UMSprites_Kim, 0x00 },
    { L"B - Soul Palette", 0x008be22, 0x008be42, indexKOF02UMSprites_Kim, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008be42, 0x008be62, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_C[] =
{
    { L"Kim C", 0x008bf62, 0x008bf82, indexKOF02UMSprites_Kim },
    { L"C - Hidden Super Desperation Move 1", 0x008bf82, 0x008bfa2, indexKOF02UMSprites_Kim, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x008bfa2, 0x008bfc2, indexKOF02UMSprites_Kim, 0x00 },
    { L"C - Electric Shock Effect", 0x008bfc2, 0x008bfe2, indexKOF02UMSprites_Kim, 0x18 },
    { L"C - MAX Flash", 0x008bfe2, 0x008c002, indexKOF02UMSprites_Kim, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008c002, 0x008c022, indexKOF02UMSprites_Kim, 0x00 },
    { L"C - Soul Palette", 0x008c022, 0x008c042, indexKOF02UMSprites_Kim, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008c042, 0x008c062, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KIM_PALETTES_D[] =
{
    { L"Kim D", 0x008c162, 0x008c182, indexKOF02UMSprites_Kim },
    { L"D - Hidden Super Desperation Move 1", 0x008c182, 0x008c1a2, indexKOF02UMSprites_Kim, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x008c1a2, 0x008c1c2, indexKOF02UMSprites_Kim, 0x00 },
    { L"D - Electric Shock Effect", 0x008c1c2, 0x008c1e2, indexKOF02UMSprites_Kim, 0x18 },
    { L"D - MAX Flash", 0x008c1e2, 0x008c202, indexKOF02UMSprites_Kim, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008c202, 0x008c222, indexKOF02UMSprites_Kim, 0x00 },
    { L"D - Soul Palette", 0x008c222, 0x008c242, indexKOF02UMSprites_Kim, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008c242, 0x008c262, indexKOF02UMSprites_Kim, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_A[] =
{
    { L"Chang A", 0x008c362, 0x008c382, indexKOF02UMSprites_Chang },
    { L"A - Hidden Super Desperation Move 1", 0x008c382, 0x008c3a2, indexKOF02UMSprites_Chang, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x008c3a2, 0x008c3c2, indexKOF02UMSprites_Chang, 0x00 },
    { L"A - Electric Shock Effect", 0x008c3c2, 0x008c3e2, indexKOF02UMSprites_Chang, 0x18 },
    { L"A - MAX Flash", 0x008c3e2, 0x008c402, indexKOF02UMSprites_Chang, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008c402, 0x008c422, indexKOF02UMSprites_Chang, 0x00 },
    { L"A - Soul Palette", 0x008c422, 0x008c442, indexKOF02UMSprites_Chang, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008c442, 0x008c462, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_B[] =
{
    { L"Chang B", 0x008c562, 0x008c582, indexKOF02UMSprites_Chang },
    { L"B - Hidden Super Desperation Move 1", 0x008c582, 0x008c5a2, indexKOF02UMSprites_Chang, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x008c5a2, 0x008c5c2, indexKOF02UMSprites_Chang, 0x00 },
    { L"B - Electric Shock Effect", 0x008c5c2, 0x008c5e2, indexKOF02UMSprites_Chang, 0x18 },
    { L"B - MAX Flash", 0x008c5e2, 0x008c602, indexKOF02UMSprites_Chang, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008c602, 0x008c622, indexKOF02UMSprites_Chang, 0x00 },
    { L"B - Soul Palette", 0x008c622, 0x008c642, indexKOF02UMSprites_Chang, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008c642, 0x008c662, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_C[] =
{
    { L"Chang C", 0x008c762, 0x008c782, indexKOF02UMSprites_Chang },
    { L"C - Hidden Super Desperation Move 1", 0x008c782, 0x008c7a2, indexKOF02UMSprites_Chang, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x008c7a2, 0x008c7c2, indexKOF02UMSprites_Chang, 0x00 },
    { L"C - Electric Shock Effect", 0x008c7c2, 0x008c7e2, indexKOF02UMSprites_Chang, 0x18 },
    { L"C - MAX Flash", 0x008c7e2, 0x008c802, indexKOF02UMSprites_Chang, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008c802, 0x008c822, indexKOF02UMSprites_Chang, 0x00 },
    { L"C - Soul Palette", 0x008c822, 0x008c842, indexKOF02UMSprites_Chang, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008c842, 0x008c862, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHANG_PALETTES_D[] =
{
    { L"Chang D", 0x008c962, 0x008c982, indexKOF02UMSprites_Chang },
    { L"D - Hidden Super Desperation Move 1", 0x008c982, 0x008c9a2, indexKOF02UMSprites_Chang, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x008c9a2, 0x008c9c2, indexKOF02UMSprites_Chang, 0x00 },
    { L"D - Electric Shock Effect", 0x008c9c2, 0x008c9e2, indexKOF02UMSprites_Chang, 0x18 },
    { L"D - MAX Flash", 0x008c9e2, 0x008ca02, indexKOF02UMSprites_Chang, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008ca02, 0x008ca22, indexKOF02UMSprites_Chang, 0x00 },
    { L"D - Soul Palette", 0x008ca22, 0x008ca42, indexKOF02UMSprites_Chang, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008ca42, 0x008ca62, indexKOF02UMSprites_Chang, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_A[] =
{
    { L"Choi A", 0x008cb62, 0x008cb82, indexKOF02UMSprites_Choi },
    { L"A - Phoenix Flattener SDM Effects", 0x008cb82, 0x008cba2, indexKOF02UMSprites_Choi, 0x03 },
    { L"A - Desperation Move / Super Desperation Move", 0x008cba2, 0x008cbc2, indexKOF02UMSprites_Choi, 0x00 },
    { L"A - Electric Shock Effect", 0x008cbc2, 0x008cbe2, indexKOF02UMSprites_Choi, 0x18 },
    { L"A - MAX Flash", 0x008cbe2, 0x008cc02, indexKOF02UMSprites_Choi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008cc02, 0x008cc22, indexKOF02UMSprites_Choi, 0x00 },
    { L"A - Soul Palette", 0x008cc22, 0x008cc42, indexKOF02UMSprites_Choi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008cc42, 0x008cc62, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_B[] =
{
    { L"Choi B", 0x008cd62, 0x008cd82, indexKOF02UMSprites_Choi },
    { L"B - Phoenix Flattener SDM Effects", 0x008cd82, 0x008cda2, indexKOF02UMSprites_Choi, 0x03 },
    { L"B - Desperation Move / Super Desperation Move", 0x008cda2, 0x008cdc2, indexKOF02UMSprites_Choi, 0x00 },
    { L"B - Electric Shock Effect", 0x008cdc2, 0x008cde2, indexKOF02UMSprites_Choi, 0x18 },
    { L"B - MAX Flash", 0x008cde2, 0x008ce02, indexKOF02UMSprites_Choi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008ce02, 0x008ce22, indexKOF02UMSprites_Choi, 0x00 },
    { L"B - Soul Palette", 0x008ce22, 0x008ce42, indexKOF02UMSprites_Choi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008ce42, 0x008ce62, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_C[] =
{
    { L"Choi C", 0x008cf62, 0x008cf82, indexKOF02UMSprites_Choi },
    { L"C - Phoenix Flattener SDM Effects", 0x008cf82, 0x008cfa2, indexKOF02UMSprites_Choi, 0x03 },
    { L"C - Desperation Move / Super Desperation Move", 0x008cfa2, 0x008cfc2, indexKOF02UMSprites_Choi, 0x00 },
    { L"C - Electric Shock Effect", 0x008cfc2, 0x008cfe2, indexKOF02UMSprites_Choi, 0x18 },
    { L"C - MAX Flash", 0x008cfe2, 0x008d002, indexKOF02UMSprites_Choi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008d002, 0x008d022, indexKOF02UMSprites_Choi, 0x00 },
    { L"C - Soul Palette", 0x008d022, 0x008d042, indexKOF02UMSprites_Choi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008d042, 0x008d062, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHOI_PALETTES_D[] =
{
    { L"Choi D", 0x008d162, 0x008d182, indexKOF02UMSprites_Choi },
    { L"D - Phoenix Flattener SDM Effects", 0x008d182, 0x008d1a2, indexKOF02UMSprites_Choi, 0x03 },
    { L"D - Desperation Move / Super Desperation Move", 0x008d1a2, 0x008d1c2, indexKOF02UMSprites_Choi, 0x00 },
    { L"D - Electric Shock Effect", 0x008d1c2, 0x008d1e2, indexKOF02UMSprites_Choi, 0x18 },
    { L"D - MAX Flash", 0x008d1e2, 0x008d202, indexKOF02UMSprites_Choi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008d202, 0x008d222, indexKOF02UMSprites_Choi, 0x00 },
    { L"D - Soul Palette", 0x008d222, 0x008d242, indexKOF02UMSprites_Choi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008d242, 0x008d262, indexKOF02UMSprites_Choi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_A[] =
{
    { L"Athena A", 0x008d362, 0x008d382, indexKOF02UMSprites_Athena },
    { L"A - Athena Transformations", 0x008d382, 0x008d3a2, indexKOF02UMSprites_Athena, 0x19 },
    { L"A - MAX Shining Crystal Bit", 0x008d3a2, 0x008d3c2, indexKOF02UMSprites_Athena, 0x00 },
    { L"A - Electric Shock Effect", 0x008d3c2, 0x008d3e2, indexKOF02UMSprites_Athena, 0x18 },
    { L"A - MAX Flash", 0x008d3e2, 0x008d402, indexKOF02UMSprites_Athena, 0x08 },
    { L"A - Portal Stuff", 0x008d402, 0x008d422, indexKOF02UMSprites_Athena, 0x02 },
    { L"A - Soul Palette", 0x008d422, 0x008d442, indexKOF02UMSprites_Athena, 0x18 },
    { L"A - Intro Stuff and MAX2 Finisher", 0x008d442, 0x008d462, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_B[] =
{
    { L"Athena B", 0x008d562, 0x008d582, indexKOF02UMSprites_Athena },
    { L"B - Athena Transformations", 0x008d582, 0x008d5a2, indexKOF02UMSprites_Athena, 0x19 },
    { L"B - MAX Shining Crystal Bit", 0x008d5a2, 0x008d5c2, indexKOF02UMSprites_Athena, 0x00 },
    { L"B - Electric Shock Effect", 0x008d5c2, 0x008d5e2, indexKOF02UMSprites_Athena, 0x18 },
    { L"B - MAX Flash", 0x008d5e2, 0x008d602, indexKOF02UMSprites_Athena, 0x08 },
    { L"B - Portal Stuff", 0x008d602, 0x008d622, indexKOF02UMSprites_Athena, 0x02 },
    { L"B - Soul Palette", 0x008d622, 0x008d642, indexKOF02UMSprites_Athena, 0x18 },
    { L"B - Intro Stuff and MAX2 Finisher", 0x008d642, 0x008d662, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_C[] =
{
    { L"Athena C", 0x008d762, 0x008d782, indexKOF02UMSprites_Athena },
    { L"C - Athena Transformations", 0x008d782, 0x008d7a2, indexKOF02UMSprites_Athena, 0x19 },
    { L"C - MAX Shining Crystal Bit", 0x008d7a2, 0x008d7c2, indexKOF02UMSprites_Athena, 0x00 },
    { L"C - Electric Shock Effect", 0x008d7c2, 0x008d7e2, indexKOF02UMSprites_Athena, 0x18 },
    { L"C - MAX Flash", 0x008d7e2, 0x008d802, indexKOF02UMSprites_Athena, 0x08 },
    { L"C - Portal Stuff", 0x008d802, 0x008d822, indexKOF02UMSprites_Athena, 0x02 },
    { L"C - Soul Palette", 0x008d822, 0x008d842, indexKOF02UMSprites_Athena, 0x18 },
    { L"C - Intro Stuff and MAX2 Finisher", 0x008d842, 0x008d862, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ATHENA_PALETTES_D[] =
{
    { L"Athena D", 0x008d962, 0x008d982, indexKOF02UMSprites_Athena },
    { L"D - Athena Transformations", 0x008d982, 0x008d9a2, indexKOF02UMSprites_Athena, 0x19 },
    { L"D - MAX Shining Crystal Bit", 0x008d9a2, 0x008d9c2, indexKOF02UMSprites_Athena, 0x00 },
    { L"D - Electric Shock Effect", 0x008d9c2, 0x008d9e2, indexKOF02UMSprites_Athena, 0x18 },
    { L"D - MAX Flash", 0x008d9e2, 0x008da02, indexKOF02UMSprites_Athena, 0x08 },
    { L"D - Portal Stuff", 0x008da02, 0x008da22, indexKOF02UMSprites_Athena, 0x02 },
    { L"D - Soul Palette", 0x008da22, 0x008da42, indexKOF02UMSprites_Athena, 0x18 },
    { L"D - Intro Stuff and MAX2 Finisher", 0x008da42, 0x008da62, indexKOF02UMSprites_Athena, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_A[] =
{
    { L"Kensou A", 0x008db62, 0x008db82, indexKOF02UMSprites_Kensou },
    { L"A - MAX2 Power Up State", 0x008db82, 0x008dba2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"A - Desperation Move / Super Desperation Move", 0x008dba2, 0x008dbc2, indexKOF02UMSprites_Kensou, 0x00 },
    { L"A - Electric Shock Effect", 0x008dbc2, 0x008dbe2, indexKOF02UMSprites_Kensou, 0x18 },
    { L"A - MAX Flash", 0x008dbe2, 0x008dc02, indexKOF02UMSprites_Kensou, 0x0a },
    { L"A - Hidden Super Desperation Move 2", 0x008dc02, 0x008dc22, indexKOF02UMSprites_Kensou, 0x00 },
    { L"A - Soul Palette", 0x008dc22, 0x008dc42, indexKOF02UMSprites_Kensou, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008dc42, 0x008dc62, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_B[] =
{
    { L"Kensou B", 0x008dd62, 0x008dd82, indexKOF02UMSprites_Kensou },
    { L"B - MAX2 Power Up State", 0x008dd82, 0x008dda2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"B - Desperation Move / Super Desperation Move", 0x008dda2, 0x008ddc2, indexKOF02UMSprites_Kensou, 0x00 },
    { L"B - Electric Shock Effect", 0x008ddc2, 0x008dde2, indexKOF02UMSprites_Kensou, 0x18 },
    { L"B - MAX Flash", 0x008dde2, 0x008de02, indexKOF02UMSprites_Kensou, 0x0a },
    { L"B - Hidden Super Desperation Move 2", 0x008de02, 0x008de22, indexKOF02UMSprites_Kensou, 0x00 },
    { L"B - Soul Palette", 0x008de22, 0x008de42, indexKOF02UMSprites_Kensou, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008de42, 0x008de62, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_C[] =
{
    { L"Kensou C", 0x008df62, 0x008df82, indexKOF02UMSprites_Kensou },
    { L"C - MAX2 Power Up State", 0x008df82, 0x008dfa2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"C - Desperation Move / Super Desperation Move", 0x008dfa2, 0x008dfc2, indexKOF02UMSprites_Kensou, 0x00 },
    { L"C - Electric Shock Effect", 0x008dfc2, 0x008dfe2, indexKOF02UMSprites_Kensou, 0x18 },
    { L"C - MAX Flash", 0x008dfe2, 0x008e002, indexKOF02UMSprites_Kensou, 0x0a },
    { L"C - Hidden Super Desperation Move 2", 0x008e002, 0x008e022, indexKOF02UMSprites_Kensou, 0x00 },
    { L"C - Soul Palette", 0x008e022, 0x008e042, indexKOF02UMSprites_Kensou, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008e042, 0x008e062, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_D[] =
{
    { L"Kensou D", 0x008e162, 0x008e182, indexKOF02UMSprites_Kensou },
    { L"D - MAX2 Power Up State", 0x008e182, 0x008e1a2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"D - Desperation Move / Super Desperation Move", 0x008e1a2, 0x008e1c2, indexKOF02UMSprites_Kensou, 0x00 },
    { L"D - Electric Shock Effect", 0x008e1c2, 0x008e1e2, indexKOF02UMSprites_Kensou, 0x18 },
    { L"D - MAX Flash", 0x008e1e2, 0x008e202, indexKOF02UMSprites_Kensou, 0x0a },
    { L"D - Hidden Super Desperation Move 2", 0x008e202, 0x008e222, indexKOF02UMSprites_Kensou, 0x00 },
    { L"D - Soul Palette", 0x008e222, 0x008e242, indexKOF02UMSprites_Kensou, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008e242, 0x008e262, indexKOF02UMSprites_Kensou, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_A[] =
{
    { L"Chin A", 0x008e362, 0x008e382, indexKOF02UMSprites_Chin },
    { L"A - Fire Palette", 0x008e382, 0x008e3a2, indexKOF02UMSprites_Chin, 0x09 },
    { L"A - Desperation Move / Super Desperation Move", 0x008e3a2, 0x008e3c2, indexKOF02UMSprites_Chin, 0x00 },
    { L"A - Electric Shock Effect", 0x008e3c2, 0x008e3e2, indexKOF02UMSprites_Chin, 0x18 },
    { L"A - MAX Flash", 0x008e3e2, 0x008e402, indexKOF02UMSprites_Chin, 0x09 },
    { L"A - Hidden Super Desperation Move 2", 0x008e402, 0x008e422, indexKOF02UMSprites_Chin, 0x00 },
    { L"A - Soul Palette", 0x008e422, 0x008e442, indexKOF02UMSprites_Chin, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008e442, 0x008e462, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_B[] =
{
    { L"Chin B", 0x008e562, 0x008e582, indexKOF02UMSprites_Chin },
    { L"B - Fire Palette", 0x008e582, 0x008e5a2, indexKOF02UMSprites_Chin, 0x09 },
    { L"B - Desperation Move / Super Desperation Move", 0x008e5a2, 0x008e5c2, indexKOF02UMSprites_Chin, 0x00 },
    { L"B - Electric Shock Effect", 0x008e5c2, 0x008e5e2, indexKOF02UMSprites_Chin, 0x18 },
    { L"B - MAX Flash", 0x008e5e2, 0x008e602, indexKOF02UMSprites_Chin, 0x09 },
    { L"B - Hidden Super Desperation Move 2", 0x008e602, 0x008e622, indexKOF02UMSprites_Chin, 0x00 },
    { L"B - Soul Palette", 0x008e622, 0x008e642, indexKOF02UMSprites_Chin, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008e642, 0x008e662, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_C[] =
{
    { L"Chin C", 0x008e762, 0x008e782, indexKOF02UMSprites_Chin },
    { L"C - Fire Palette", 0x008e782, 0x008e7a2, indexKOF02UMSprites_Chin, 0x09 },
    { L"C - Desperation Move / Super Desperation Move", 0x008e7a2, 0x008e7c2, indexKOF02UMSprites_Chin, 0x00 },
    { L"C - Electric Shock Effect", 0x008e7c2, 0x008e7e2, indexKOF02UMSprites_Chin, 0x18 },
    { L"C - MAX Flash", 0x008e7e2, 0x008e802, indexKOF02UMSprites_Chin, 0x09 },
    { L"C - Hidden Super Desperation Move 2", 0x008e802, 0x008e822, indexKOF02UMSprites_Chin, 0x00 },
    { L"C - Soul Palette", 0x008e822, 0x008e842, indexKOF02UMSprites_Chin, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008e842, 0x008e862, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHIN_PALETTES_D[] =
{
    { L"Chin D", 0x008e962, 0x008e982, indexKOF02UMSprites_Chin },
    { L"D - Fire Palette", 0x008e982, 0x008e9a2, indexKOF02UMSprites_Chin, 0x09 },
    { L"D - Desperation Move / Super Desperation Move", 0x008e9a2, 0x008e9c2, indexKOF02UMSprites_Chin, 0x00 },
    { L"D - Electric Shock Effect", 0x008e9c2, 0x008e9e2, indexKOF02UMSprites_Chin, 0x18 },
    { L"D - MAX Flash", 0x008e9e2, 0x008ea02, indexKOF02UMSprites_Chin, 0x09 },
    { L"D - Hidden Super Desperation Move 2", 0x008ea02, 0x008ea22, indexKOF02UMSprites_Chin, 0x00 },
    { L"D - Soul Palette", 0x008ea22, 0x008ea42, indexKOF02UMSprites_Chin, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008ea42, 0x008ea62, indexKOF02UMSprites_Chin, 0x00 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_A[] =
{
    { L"Leona A", 0x008eb62, 0x008eb82, indexKOF02UMSprites_Leona },
    { L"A - Jump Blowback Attack", 0x008eb82, 0x008eba2, indexKOF02UMSprites_Leona, 0x06 },
    { L"A - Desperation Move / Super Desperation Move", 0x008eba2, 0x008ebc2, indexKOF02UMSprites_Leona, 0x00 },
    { L"A - Electric Shock Effect", 0x008ebc2, 0x008ebe2, indexKOF02UMSprites_Leona, 0x18 },
    { L"A - MAX Flash", 0x008ebe2, 0x008ec02, indexKOF02UMSprites_Leona, 0x08 },
    { L"A - Orochi Leona", 0x008ec02, 0x008ec22, indexKOF02UMSprites_Leona, 0x1b },
    { L"A - Soul Palette", 0x008ec22, 0x008ec42, indexKOF02UMSprites_Leona, 0x18 },
    { L"A - Intro Stuff", 0x008ec42, 0x008ec62, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_B[] =
{
    { L"Leona B", 0x008ed62, 0x008ed82, indexKOF02UMSprites_Leona },
    { L"B - Jump Blowback Attack", 0x008ed82, 0x008eda2, indexKOF02UMSprites_Leona, 0x06 },
    { L"B - Desperation Move / Super Desperation Move", 0x008eda2, 0x008edc2, indexKOF02UMSprites_Leona, 0x00 },
    { L"B - Electric Shock Effect", 0x008edc2, 0x008ede2, indexKOF02UMSprites_Leona, 0x18 },
    { L"B - MAX Flash", 0x008ede2, 0x008ee02, indexKOF02UMSprites_Leona, 0x08 },
    { L"B - Orochi Leona", 0x008ee02, 0x008ee22, indexKOF02UMSprites_Leona, 0x1b },
    { L"B - Soul Palette", 0x008ee22, 0x008ee42, indexKOF02UMSprites_Leona, 0x18 },
    { L"B - Intro Stuff", 0x008ee42, 0x008ee62, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_C[] =
{
    { L"Leona C", 0x008ef62, 0x008ef82, indexKOF02UMSprites_Leona },
    { L"C - Jump Blowback Attack", 0x008ef82, 0x008efa2, indexKOF02UMSprites_Leona, 0x06 },
    { L"C - Desperation Move / Super Desperation Move", 0x008efa2, 0x008efc2, indexKOF02UMSprites_Leona, 0x00 },
    { L"C - Electric Shock Effect", 0x008efc2, 0x008efe2, indexKOF02UMSprites_Leona, 0x18 },
    { L"C - MAX Flash", 0x008efe2, 0x008f002, indexKOF02UMSprites_Leona, 0x08 },
    { L"C - Orochi Leona", 0x008f002, 0x008f022, indexKOF02UMSprites_Leona, 0x1b },
    { L"C - Soul Palette", 0x008f022, 0x008f042, indexKOF02UMSprites_Leona, 0x18 },
    { L"C - Intro Stuff", 0x008f042, 0x008f062, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02_A_LEONA_PALETTES_D[] =
{
    { L"Leona D", 0x008f162, 0x008f182, indexKOF02UMSprites_Leona },
    { L"D - Jump Blowback Attack", 0x008f182, 0x008f1a2, indexKOF02UMSprites_Leona, 0x06 },
    { L"D - Desperation Move / Super Desperation Move", 0x008f1a2, 0x008f1c2, indexKOF02UMSprites_Leona, 0x00 },
    { L"D - Electric Shock Effect", 0x008f1c2, 0x008f1e2, indexKOF02UMSprites_Leona, 0x18 },
    { L"D - MAX Flash", 0x008f1e2, 0x008f202, indexKOF02UMSprites_Leona, 0x08 },
    { L"D - Orochi Leona", 0x008f202, 0x008f222, indexKOF02UMSprites_Leona, 0x1b },
    { L"D - Soul Palette", 0x008f222, 0x008f242, indexKOF02UMSprites_Leona, 0x18 },
    { L"D - Intro Stuff", 0x008f242, 0x008f262, indexKOF02UMSprites_Leona, 0x19 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_A[] =
{
    { L"Ralf A", 0x008f362, 0x008f382, indexKOF02UMSprites_Ralf },
    { L"A - Hidden Super Desperation Move 1", 0x008f382, 0x008f3a2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x008f3a2, 0x008f3c2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"A - Electric Shock Effect", 0x008f3c2, 0x008f3e2, indexKOF02UMSprites_Ralf, 0x18 },
    { L"A - MAX Flash", 0x008f3e2, 0x008f402, indexKOF02UMSprites_Ralf, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008f402, 0x008f422, indexKOF02UMSprites_Ralf, 0x00 },
    { L"A - Soul Palette", 0x008f422, 0x008f442, indexKOF02UMSprites_Ralf, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008f442, 0x008f462, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_B[] =
{
    { L"Ralf B", 0x008f562, 0x008f582, indexKOF02UMSprites_Ralf },
    { L"B - Hidden Super Desperation Move 1", 0x008f582, 0x008f5a2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x008f5a2, 0x008f5c2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"B - Electric Shock Effect", 0x008f5c2, 0x008f5e2, indexKOF02UMSprites_Ralf, 0x18 },
    { L"B - MAX Flash", 0x008f5e2, 0x008f602, indexKOF02UMSprites_Ralf, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008f602, 0x008f622, indexKOF02UMSprites_Ralf, 0x00 },
    { L"B - Soul Palette", 0x008f622, 0x008f642, indexKOF02UMSprites_Ralf, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008f642, 0x008f662, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_C[] =
{
    { L"Ralf C", 0x008f762, 0x008f782, indexKOF02UMSprites_Ralf },
    { L"C - Hidden Super Desperation Move 1", 0x008f782, 0x008f7a2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x008f7a2, 0x008f7c2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"C - Electric Shock Effect", 0x008f7c2, 0x008f7e2, indexKOF02UMSprites_Ralf, 0x18 },
    { L"C - MAX Flash", 0x008f7e2, 0x008f802, indexKOF02UMSprites_Ralf, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x008f802, 0x008f822, indexKOF02UMSprites_Ralf, 0x00 },
    { L"C - Soul Palette", 0x008f822, 0x008f842, indexKOF02UMSprites_Ralf, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x008f842, 0x008f862, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RALF_PALETTES_D[] =
{
    { L"Ralf D", 0x008f962, 0x008f982, indexKOF02UMSprites_Ralf },
    { L"D - Hidden Super Desperation Move 1", 0x008f982, 0x008f9a2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x008f9a2, 0x008f9c2, indexKOF02UMSprites_Ralf, 0x00 },
    { L"D - Electric Shock Effect", 0x008f9c2, 0x008f9e2, indexKOF02UMSprites_Ralf, 0x18 },
    { L"D - MAX Flash", 0x008f9e2, 0x008fa02, indexKOF02UMSprites_Ralf, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x008fa02, 0x008fa22, indexKOF02UMSprites_Ralf, 0x00 },
    { L"D - Soul Palette", 0x008fa22, 0x008fa42, indexKOF02UMSprites_Ralf, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x008fa42, 0x008fa62, indexKOF02UMSprites_Ralf, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_A[] =
{
    { L"Clark A", 0x008fb62, 0x008fb82, indexKOF02UMSprites_Clark },
    { L"A - Hidden Super Desperation Move 1", 0x008fb82, 0x008fba2, indexKOF02UMSprites_Clark, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x008fba2, 0x008fbc2, indexKOF02UMSprites_Clark, 0x00 },
    { L"A - Electric Shock Effect", 0x008fbc2, 0x008fbe2, indexKOF02UMSprites_Clark, 0x18 },
    { L"A - MAX Flash", 0x008fbe2, 0x008fc02, indexKOF02UMSprites_Clark, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x008fc02, 0x008fc22, indexKOF02UMSprites_Clark, 0x00 },
    { L"A - Soul Palette", 0x008fc22, 0x008fc42, indexKOF02UMSprites_Clark, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x008fc42, 0x008fc62, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_B[] =
{
    { L"Clark B", 0x008fd62, 0x008fd82, indexKOF02UMSprites_Clark },
    { L"B - Hidden Super Desperation Move 1", 0x008fd82, 0x008fda2, indexKOF02UMSprites_Clark, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x008fda2, 0x008fdc2, indexKOF02UMSprites_Clark, 0x00 },
    { L"B - Electric Shock Effect", 0x008fdc2, 0x008fde2, indexKOF02UMSprites_Clark, 0x18 },
    { L"B - MAX Flash", 0x008fde2, 0x008fe02, indexKOF02UMSprites_Clark, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x008fe02, 0x008fe22, indexKOF02UMSprites_Clark, 0x00 },
    { L"B - Soul Palette", 0x008fe22, 0x008fe42, indexKOF02UMSprites_Clark, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x008fe42, 0x008fe62, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_C[] =
{
    { L"Clark C", 0x008ff62, 0x008ff82, indexKOF02UMSprites_Clark },
    { L"C - Hidden Super Desperation Move 1", 0x008ff82, 0x008ffa2, indexKOF02UMSprites_Clark, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x008ffa2, 0x008ffc2, indexKOF02UMSprites_Clark, 0x00 },
    { L"C - Electric Shock Effect", 0x008ffc2, 0x008ffe2, indexKOF02UMSprites_Clark, 0x18 },
    { L"C - MAX Flash", 0x008ffe2, 0x0090002, indexKOF02UMSprites_Clark, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0090002, 0x0090022, indexKOF02UMSprites_Clark, 0x00 },
    { L"C - Soul Palette", 0x0090022, 0x0090042, indexKOF02UMSprites_Clark, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0090042, 0x0090062, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CLARK_PALETTES_D[] =
{
    { L"Clark D", 0x0090162, 0x0090182, indexKOF02UMSprites_Clark },
    { L"D - Hidden Super Desperation Move 1", 0x0090182, 0x00901a2, indexKOF02UMSprites_Clark, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00901a2, 0x00901c2, indexKOF02UMSprites_Clark, 0x00 },
    { L"D - Electric Shock Effect", 0x00901c2, 0x00901e2, indexKOF02UMSprites_Clark, 0x18 },
    { L"D - MAX Flash", 0x00901e2, 0x0090202, indexKOF02UMSprites_Clark, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0090202, 0x0090222, indexKOF02UMSprites_Clark, 0x00 },
    { L"D - Soul Palette", 0x0090222, 0x0090242, indexKOF02UMSprites_Clark, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0090242, 0x0090262, indexKOF02UMSprites_Clark, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_A[] =
{
    { L"Ryo A", 0x0090362, 0x0090382, indexKOF02UMSprites_Ryo },
    { L"A - Hidden Super Desperation Move 1", 0x0090382, 0x00903a2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00903a2, 0x00903c2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"A - Electric Shock Effect", 0x00903c2, 0x00903e2, indexKOF02UMSprites_Ryo, 0x18 },
    { L"A - MAX Flash", 0x00903e2, 0x0090402, indexKOF02UMSprites_Ryo, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0090402, 0x0090422, indexKOF02UMSprites_Ryo, 0x00 },
    { L"A - Soul Palette", 0x0090422, 0x0090442, indexKOF02UMSprites_Ryo, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0090442, 0x0090462, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_B[] =
{
    { L"Ryo B", 0x0090562, 0x0090582, indexKOF02UMSprites_Ryo },
    { L"B - Hidden Super Desperation Move 1", 0x0090582, 0x00905a2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00905a2, 0x00905c2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"B - Electric Shock Effect", 0x00905c2, 0x00905e2, indexKOF02UMSprites_Ryo, 0x18 },
    { L"B - MAX Flash", 0x00905e2, 0x0090602, indexKOF02UMSprites_Ryo, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0090602, 0x0090622, indexKOF02UMSprites_Ryo, 0x00 },
    { L"B - Soul Palette", 0x0090622, 0x0090642, indexKOF02UMSprites_Ryo, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0090642, 0x0090662, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_C[] =
{
    { L"Ryo C", 0x0090762, 0x0090782, indexKOF02UMSprites_Ryo },
    { L"C - Hidden Super Desperation Move 1", 0x0090782, 0x00907a2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00907a2, 0x00907c2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"C - Electric Shock Effect", 0x00907c2, 0x00907e2, indexKOF02UMSprites_Ryo, 0x18 },
    { L"C - MAX Flash", 0x00907e2, 0x0090802, indexKOF02UMSprites_Ryo, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0090802, 0x0090822, indexKOF02UMSprites_Ryo, 0x00 },
    { L"C - Soul Palette", 0x0090822, 0x0090842, indexKOF02UMSprites_Ryo, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0090842, 0x0090862, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RYO_PALETTES_D[] =
{
    { L"Ryo D", 0x0090962, 0x0090982, indexKOF02UMSprites_Ryo },
    { L"D - Hidden Super Desperation Move 1", 0x0090982, 0x00909a2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00909a2, 0x00909c2, indexKOF02UMSprites_Ryo, 0x00 },
    { L"D - Electric Shock Effect", 0x00909c2, 0x00909e2, indexKOF02UMSprites_Ryo, 0x18 },
    { L"D - MAX Flash", 0x00909e2, 0x0090a02, indexKOF02UMSprites_Ryo, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0090a02, 0x0090a22, indexKOF02UMSprites_Ryo, 0x00 },
    { L"D - Soul Palette", 0x0090a22, 0x0090a42, indexKOF02UMSprites_Ryo, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0090a42, 0x0090a62, indexKOF02UMSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_A[] =
{
    { L"Robert A", 0x0090b62, 0x0090b82, indexKOF02UMSprites_Robert },
    { L"A - Hidden Super Desperation Move 1", 0x0090b82, 0x0090ba2, indexKOF02UMSprites_Robert, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0090ba2, 0x0090bc2, indexKOF02UMSprites_Robert, 0x00 },
    { L"A - Electric Shock Effect", 0x0090bc2, 0x0090be2, indexKOF02UMSprites_Robert, 0x18 },
    { L"A - MAX Flash", 0x0090be2, 0x0090c02, indexKOF02UMSprites_Robert, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0090c02, 0x0090c22, indexKOF02UMSprites_Robert, 0x00 },
    { L"A - Soul Palette", 0x0090c22, 0x0090c42, indexKOF02UMSprites_Robert, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0090c42, 0x0090c62, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_B[] =
{
    { L"Robert B", 0x0090d62, 0x0090d82, indexKOF02UMSprites_Robert },
    { L"B - Hidden Super Desperation Move 1", 0x0090d82, 0x0090da2, indexKOF02UMSprites_Robert, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0090da2, 0x0090dc2, indexKOF02UMSprites_Robert, 0x00 },
    { L"B - Electric Shock Effect", 0x0090dc2, 0x0090de2, indexKOF02UMSprites_Robert, 0x18 },
    { L"B - MAX Flash", 0x0090de2, 0x0090e02, indexKOF02UMSprites_Robert, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0090e02, 0x0090e22, indexKOF02UMSprites_Robert, 0x00 },
    { L"B - Soul Palette", 0x0090e22, 0x0090e42, indexKOF02UMSprites_Robert, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0090e42, 0x0090e62, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_C[] =
{
    { L"Robert C", 0x0090f62, 0x0090f82, indexKOF02UMSprites_Robert },
    { L"C - Hidden Super Desperation Move 1", 0x0090f82, 0x0090fa2, indexKOF02UMSprites_Robert, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0090fa2, 0x0090fc2, indexKOF02UMSprites_Robert, 0x00 },
    { L"C - Electric Shock Effect", 0x0090fc2, 0x0090fe2, indexKOF02UMSprites_Robert, 0x18 },
    { L"C - MAX Flash", 0x0090fe2, 0x0091002, indexKOF02UMSprites_Robert, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0091002, 0x0091022, indexKOF02UMSprites_Robert, 0x00 },
    { L"C - Soul Palette", 0x0091022, 0x0091042, indexKOF02UMSprites_Robert, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0091042, 0x0091062, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ROBERT_PALETTES_D[] =
{
    { L"Robert D", 0x0091162, 0x0091182, indexKOF02UMSprites_Robert },
    { L"D - Hidden Super Desperation Move 1", 0x0091182, 0x00911a2, indexKOF02UMSprites_Robert, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00911a2, 0x00911c2, indexKOF02UMSprites_Robert, 0x00 },
    { L"D - Electric Shock Effect", 0x00911c2, 0x00911e2, indexKOF02UMSprites_Robert, 0x18 },
    { L"D - MAX Flash", 0x00911e2, 0x0091202, indexKOF02UMSprites_Robert, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0091202, 0x0091222, indexKOF02UMSprites_Robert, 0x00 },
    { L"D - Soul Palette", 0x0091222, 0x0091242, indexKOF02UMSprites_Robert, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0091242, 0x0091262, indexKOF02UMSprites_Robert, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_A[] =
{
    { L"Takuma A", 0x0091362, 0x0091382, indexKOF02UMSprites_Takuma },
    { L"A - Hidden Super Desperation Move 1", 0x0091382, 0x00913a2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00913a2, 0x00913c2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"A - Electric Shock Effect", 0x00913c2, 0x00913e2, indexKOF02UMSprites_Takuma, 0x18 },
    { L"A - MAX Flash", 0x00913e2, 0x0091402, indexKOF02UMSprites_Takuma, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0091402, 0x0091422, indexKOF02UMSprites_Takuma, 0x00 },
    { L"A - Soul Palette", 0x0091422, 0x0091442, indexKOF02UMSprites_Takuma, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0091442, 0x0091462, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_B[] =
{
    { L"Takuma B", 0x0091562, 0x0091582, indexKOF02UMSprites_Takuma },
    { L"B - Hidden Super Desperation Move 1", 0x0091582, 0x00915a2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00915a2, 0x00915c2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"B - Electric Shock Effect", 0x00915c2, 0x00915e2, indexKOF02UMSprites_Takuma, 0x18 },
    { L"B - MAX Flash", 0x00915e2, 0x0091602, indexKOF02UMSprites_Takuma, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0091602, 0x0091622, indexKOF02UMSprites_Takuma, 0x00 },
    { L"B - Soul Palette", 0x0091622, 0x0091642, indexKOF02UMSprites_Takuma, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0091642, 0x0091662, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_C[] =
{
    { L"Takuma C", 0x0091762, 0x0091782, indexKOF02UMSprites_Takuma },
    { L"C - Hidden Super Desperation Move 1", 0x0091782, 0x00917a2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00917a2, 0x00917c2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"C - Electric Shock Effect", 0x00917c2, 0x00917e2, indexKOF02UMSprites_Takuma, 0x18 },
    { L"C - MAX Flash", 0x00917e2, 0x0091802, indexKOF02UMSprites_Takuma, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0091802, 0x0091822, indexKOF02UMSprites_Takuma, 0x00 },
    { L"C - Soul Palette", 0x0091822, 0x0091842, indexKOF02UMSprites_Takuma, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0091842, 0x0091862, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02_A_TAKUMA_PALETTES_D[] =
{
    { L"Takuma D", 0x0091962, 0x0091982, indexKOF02UMSprites_Takuma },
    { L"D - Hidden Super Desperation Move 1", 0x0091982, 0x00919a2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00919a2, 0x00919c2, indexKOF02UMSprites_Takuma, 0x00 },
    { L"D - Electric Shock Effect", 0x00919c2, 0x00919e2, indexKOF02UMSprites_Takuma, 0x18 },
    { L"D - MAX Flash", 0x00919e2, 0x0091a02, indexKOF02UMSprites_Takuma, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0091a02, 0x0091a22, indexKOF02UMSprites_Takuma, 0x00 },
    { L"D - Soul Palette", 0x0091a22, 0x0091a42, indexKOF02UMSprites_Takuma, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0091a42, 0x0091a62, indexKOF02UMSprites_Takuma, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_A[] =
{
    { L"Mai A", 0x0091b62, 0x0091b82, indexKOF02UMSprites_Mai },
    { L"A - Hissatsu SDM Fire", 0x0091b82, 0x0091ba2, indexKOF02UMSprites_Mai, 0x10 },
    { L"A - Hissatsu MAX Fire", 0x0091ba2, 0x0091bc2, indexKOF02UMSprites_Mai, 0x11 },
    { L"A - Electric Shock Effect", 0x0091bc2, 0x0091be2, indexKOF02UMSprites_Mai, 0x18 },
    { L"A - MAX Flash", 0x0091be2, 0x0091c02, indexKOF02UMSprites_Mai, 0x08 },
    { L"A - MAX2 Hold B Dress", 0x0091c02, 0x0091c22, indexKOF02UMSprites_Mai, 0x1a },
    { L"A - Soul Palette", 0x0091c22, 0x0091c42, indexKOF02UMSprites_Mai, 0x18 },
    { L"A - Andy Intro Stuff", 0x0091c42, 0x0091c62, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_B[] =
{
    { L"Mai B", 0x0091d62, 0x0091d82, indexKOF02UMSprites_Mai },
    { L"B - Hissatsu SDM Fire", 0x0091d82, 0x0091da2, indexKOF02UMSprites_Mai, 0x10 },
    { L"B - Hissatsu MAX Fire", 0x0091da2, 0x0091dc2, indexKOF02UMSprites_Mai, 0x11 },
    { L"B - Electric Shock Effect", 0x0091dc2, 0x0091de2, indexKOF02UMSprites_Mai, 0x18 },
    { L"B - MAX Flash", 0x0091de2, 0x0091e02, indexKOF02UMSprites_Mai, 0x08 },
    { L"B - MAX2 Hold B Dress", 0x0091e02, 0x0091e22, indexKOF02UMSprites_Mai, 0x1a },
    { L"B - Soul Palette", 0x0091e22, 0x0091e42, indexKOF02UMSprites_Mai, 0x18 },
    { L"B - Andy Intro Stuff", 0x0091e42, 0x0091e62, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_C[] =
{
    { L"Mai C", 0x0091f62, 0x0091f82, indexKOF02UMSprites_Mai },
    { L"C - Hissatsu SDM Fire", 0x0091f82, 0x0091fa2, indexKOF02UMSprites_Mai, 0x10 },
    { L"C - Hissatsu MAX Fire", 0x0091fa2, 0x0091fc2, indexKOF02UMSprites_Mai, 0x11 },
    { L"C - Electric Shock Effect", 0x0091fc2, 0x0091fe2, indexKOF02UMSprites_Mai, 0x18 },
    { L"C - MAX Flash", 0x0091fe2, 0x0092002, indexKOF02UMSprites_Mai, 0x08 },
    { L"C - MAX2 Hold B Dress", 0x0092002, 0x0092022, indexKOF02UMSprites_Mai, 0x1a },
    { L"C - Soul Palette", 0x0092022, 0x0092042, indexKOF02UMSprites_Mai, 0x18 },
    { L"C - Andy Intro Stuff", 0x0092042, 0x0092062, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02_A_MAI_PALETTES_D[] =
{
    { L"Mai D", 0x0092162, 0x0092182, indexKOF02UMSprites_Mai },
    { L"D - Hissatsu SDM Fire", 0x0092182, 0x00921a2, indexKOF02UMSprites_Mai, 0x10 },
    { L"D - Hissatsu MAX Fire", 0x00921a2, 0x00921c2, indexKOF02UMSprites_Mai, 0x11 },
    { L"D - Electric Shock Effect", 0x00921c2, 0x00921e2, indexKOF02UMSprites_Mai, 0x18 },
    { L"D - MAX Flash", 0x00921e2, 0x0092202, indexKOF02UMSprites_Mai, 0x08 },
    { L"D - MAX2 Hold B Dress", 0x0092202, 0x0092222, indexKOF02UMSprites_Mai, 0x1a },
    { L"D - Soul Palette", 0x0092222, 0x0092242, indexKOF02UMSprites_Mai, 0x18 },
    { L"D - Andy Intro Stuff", 0x0092242, 0x0092262, indexKOF02UMSprites_Mai, 0x19 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_A[] =
{
    { L"Yuri A", 0x0092362, 0x0092382, indexKOF02UMSprites_Yuri },
    { L"A - Hidden Super Desperation Move 1", 0x0092382, 0x00923a2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00923a2, 0x00923c2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"A - Electric Shock Effect", 0x00923c2, 0x00923e2, indexKOF02UMSprites_Yuri, 0x18 },
    { L"A - MAX Flash", 0x00923e2, 0x0092402, indexKOF02UMSprites_Yuri, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0092402, 0x0092422, indexKOF02UMSprites_Yuri, 0x00 },
    { L"A - Soul Palette", 0x0092422, 0x0092442, indexKOF02UMSprites_Yuri, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0092442, 0x0092462, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_B[] =
{
    { L"Yuri B", 0x0092562, 0x0092582, indexKOF02UMSprites_Yuri },
    { L"B - Hidden Super Desperation Move 1", 0x0092582, 0x00925a2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00925a2, 0x00925c2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"B - Electric Shock Effect", 0x00925c2, 0x00925e2, indexKOF02UMSprites_Yuri, 0x18 },
    { L"B - MAX Flash", 0x00925e2, 0x0092602, indexKOF02UMSprites_Yuri, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0092602, 0x0092622, indexKOF02UMSprites_Yuri, 0x00 },
    { L"B - Soul Palette", 0x0092622, 0x0092642, indexKOF02UMSprites_Yuri, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0092642, 0x0092662, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_C[] =
{
    { L"Yuri C", 0x0092762, 0x0092782, indexKOF02UMSprites_Yuri },
    { L"C - Hidden Super Desperation Move 1", 0x0092782, 0x00927a2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00927a2, 0x00927c2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"C - Electric Shock Effect", 0x00927c2, 0x00927e2, indexKOF02UMSprites_Yuri, 0x18 },
    { L"C - MAX Flash", 0x00927e2, 0x0092802, indexKOF02UMSprites_Yuri, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0092802, 0x0092822, indexKOF02UMSprites_Yuri, 0x00 },
    { L"C - Soul Palette", 0x0092822, 0x0092842, indexKOF02UMSprites_Yuri, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0092842, 0x0092862, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YURI_PALETTES_D[] =
{
    { L"Yuri D", 0x0092962, 0x0092982, indexKOF02UMSprites_Yuri },
    { L"D - Hidden Super Desperation Move 1", 0x0092982, 0x00929a2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00929a2, 0x00929c2, indexKOF02UMSprites_Yuri, 0x00 },
    { L"D - Electric Shock Effect", 0x00929c2, 0x00929e2, indexKOF02UMSprites_Yuri, 0x18 },
    { L"D - MAX Flash", 0x00929e2, 0x0092a02, indexKOF02UMSprites_Yuri, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0092a02, 0x0092a22, indexKOF02UMSprites_Yuri, 0x00 },
    { L"D - Soul Palette", 0x0092a22, 0x0092a42, indexKOF02UMSprites_Yuri, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0092a42, 0x0092a62, indexKOF02UMSprites_Yuri, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_A[] =
{
    { L"May Lee A", 0x0092b62, 0x0092b82, indexKOF02UMSprites_MayLee },
    { L"A - Hidden Super Desperation Move 1", 0x0092b82, 0x0092ba2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0092ba2, 0x0092bc2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"A - Electric Shock Effect", 0x0092bc2, 0x0092be2, indexKOF02UMSprites_MayLee, 0x18 },
    { L"A - MAX Flash", 0x0092be2, 0x0092c02, indexKOF02UMSprites_MayLee, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0092c02, 0x0092c22, indexKOF02UMSprites_MayLee, 0x00 },
    { L"A - Soul Palette", 0x0092c22, 0x0092c42, indexKOF02UMSprites_MayLee, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0092c42, 0x0092c62, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_B[] =
{
    { L"May Lee B", 0x0092d62, 0x0092d82, indexKOF02UMSprites_MayLee },
    { L"B - Hidden Super Desperation Move 1", 0x0092d82, 0x0092da2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0092da2, 0x0092dc2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"B - Electric Shock Effect", 0x0092dc2, 0x0092de2, indexKOF02UMSprites_MayLee, 0x18 },
    { L"B - MAX Flash", 0x0092de2, 0x0092e02, indexKOF02UMSprites_MayLee, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0092e02, 0x0092e22, indexKOF02UMSprites_MayLee, 0x00 },
    { L"B - Soul Palette", 0x0092e22, 0x0092e42, indexKOF02UMSprites_MayLee, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0092e42, 0x0092e62, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_C[] =
{
    { L"May Lee C", 0x0092f62, 0x0092f82, indexKOF02UMSprites_MayLee },
    { L"C - Hidden Super Desperation Move 1", 0x0092f82, 0x0092fa2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0092fa2, 0x0092fc2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"C - Electric Shock Effect", 0x0092fc2, 0x0092fe2, indexKOF02UMSprites_MayLee, 0x18 },
    { L"C - MAX Flash", 0x0092fe2, 0x0093002, indexKOF02UMSprites_MayLee, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0093002, 0x0093022, indexKOF02UMSprites_MayLee, 0x00 },
    { L"C - Soul Palette", 0x0093022, 0x0093042, indexKOF02UMSprites_MayLee, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0093042, 0x0093062, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAYLEE_PALETTES_D[] =
{
    { L"May Lee D", 0x0093162, 0x0093182, indexKOF02UMSprites_MayLee },
    { L"D - Hidden Super Desperation Move 1", 0x0093182, 0x00931a2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00931a2, 0x00931c2, indexKOF02UMSprites_MayLee, 0x00 },
    { L"D - Electric Shock Effect", 0x00931c2, 0x00931e2, indexKOF02UMSprites_MayLee, 0x18 },
    { L"D - MAX Flash", 0x00931e2, 0x0093202, indexKOF02UMSprites_MayLee, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0093202, 0x0093222, indexKOF02UMSprites_MayLee, 0x00 },
    { L"D - Soul Palette", 0x0093222, 0x0093242, indexKOF02UMSprites_MayLee, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0093242, 0x0093262, indexKOF02UMSprites_MayLee, 0x00 },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_A[] =
{
    { L"Iori A", 0x0093362, 0x0093382, indexKOF02UMSprites_Iori },
    { L"A - Hidden Super Desperation Move 1", 0x0093382, 0x00933a2, indexKOF02UMSprites_Iori, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00933a2, 0x00933c2, indexKOF02UMSprites_Iori, 0x00 },
    { L"A - Electric Shock Effect", 0x00933c2, 0x00933e2, indexKOF02UMSprites_Iori, 0x18 },
    { L"A - MAX Flash", 0x00933e2, 0x0093402, indexKOF02UMSprites_Iori, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0093402, 0x0093422, indexKOF02UMSprites_Iori, 0x00 },
    { L"A - Soul Palette", 0x0093422, 0x0093442, indexKOF02UMSprites_Iori, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0093442, 0x0093462, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_B[] =
{
    { L"Iori B", 0x0093562, 0x0093582, indexKOF02UMSprites_Iori },
    { L"B - Hidden Super Desperation Move 1", 0x0093582, 0x00935a2, indexKOF02UMSprites_Iori, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00935a2, 0x00935c2, indexKOF02UMSprites_Iori, 0x00 },
    { L"B - Electric Shock Effect", 0x00935c2, 0x00935e2, indexKOF02UMSprites_Iori, 0x18 },
    { L"B - MAX Flash", 0x00935e2, 0x0093602, indexKOF02UMSprites_Iori, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0093602, 0x0093622, indexKOF02UMSprites_Iori, 0x00 },
    { L"B - Soul Palette", 0x0093622, 0x0093642, indexKOF02UMSprites_Iori, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0093642, 0x0093662, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_C[] =
{
    { L"Iori C", 0x0093762, 0x0093782, indexKOF02UMSprites_Iori },
    { L"C - Hidden Super Desperation Move 1", 0x0093782, 0x00937a2, indexKOF02UMSprites_Iori, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00937a2, 0x00937c2, indexKOF02UMSprites_Iori, 0x00 },
    { L"C - Electric Shock Effect", 0x00937c2, 0x00937e2, indexKOF02UMSprites_Iori, 0x18 },
    { L"C - MAX Flash", 0x00937e2, 0x0093802, indexKOF02UMSprites_Iori, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0093802, 0x0093822, indexKOF02UMSprites_Iori, 0x00 },
    { L"C - Soul Palette", 0x0093822, 0x0093842, indexKOF02UMSprites_Iori, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0093842, 0x0093862, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02_A_IORI_PALETTES_D[] =
{
    { L"Iori D", 0x0093962, 0x0093982, indexKOF02UMSprites_Iori },
    { L"D - Hidden Super Desperation Move 1", 0x0093982, 0x00939a2, indexKOF02UMSprites_Iori, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00939a2, 0x00939c2, indexKOF02UMSprites_Iori, 0x00 },
    { L"D - Electric Shock Effect", 0x00939c2, 0x00939e2, indexKOF02UMSprites_Iori, 0x18 },
    { L"D - MAX Flash", 0x00939e2, 0x0093a02, indexKOF02UMSprites_Iori, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0093a02, 0x0093a22, indexKOF02UMSprites_Iori, 0x00 },
    { L"D - Soul Palette", 0x0093a22, 0x0093a42, indexKOF02UMSprites_Iori, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0093a42, 0x0093a62, indexKOF02UMSprites_Iori, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_A[] =
{
    { L"Mature A", 0x0093b62, 0x0093b82, indexKOF02UMSprites_Mature },
    { L"A - Hidden Super Desperation Move 1", 0x0093b82, 0x0093ba2, indexKOF02UMSprites_Mature, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0093ba2, 0x0093bc2, indexKOF02UMSprites_Mature, 0x00 },
    { L"A - Electric Shock Effect", 0x0093bc2, 0x0093be2, indexKOF02UMSprites_Mature, 0x18 },
    { L"A - MAX Flash", 0x0093be2, 0x0093c02, indexKOF02UMSprites_Mature, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0093c02, 0x0093c22, indexKOF02UMSprites_Mature, 0x00 },
    { L"A - Soul Palette", 0x0093c22, 0x0093c42, indexKOF02UMSprites_Mature, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0093c42, 0x0093c62, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_B[] =
{
    { L"Mature B", 0x0093d62, 0x0093d82, indexKOF02UMSprites_Mature },
    { L"B - Hidden Super Desperation Move 1", 0x0093d82, 0x0093da2, indexKOF02UMSprites_Mature, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0093da2, 0x0093dc2, indexKOF02UMSprites_Mature, 0x00 },
    { L"B - Electric Shock Effect", 0x0093dc2, 0x0093de2, indexKOF02UMSprites_Mature, 0x18 },
    { L"B - MAX Flash", 0x0093de2, 0x0093e02, indexKOF02UMSprites_Mature, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0093e02, 0x0093e22, indexKOF02UMSprites_Mature, 0x00 },
    { L"B - Soul Palette", 0x0093e22, 0x0093e42, indexKOF02UMSprites_Mature, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0093e42, 0x0093e62, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_C[] =
{
    { L"Mature C", 0x0093f62, 0x0093f82, indexKOF02UMSprites_Mature },
    { L"C - Hidden Super Desperation Move 1", 0x0093f82, 0x0093fa2, indexKOF02UMSprites_Mature, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0093fa2, 0x0093fc2, indexKOF02UMSprites_Mature, 0x00 },
    { L"C - Electric Shock Effect", 0x0093fc2, 0x0093fe2, indexKOF02UMSprites_Mature, 0x18 },
    { L"C - MAX Flash", 0x0093fe2, 0x0094002, indexKOF02UMSprites_Mature, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0094002, 0x0094022, indexKOF02UMSprites_Mature, 0x00 },
    { L"C - Soul Palette", 0x0094022, 0x0094042, indexKOF02UMSprites_Mature, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0094042, 0x0094062, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MATURE_PALETTES_D[] =
{
    { L"Mature D", 0x0094162, 0x0094182, indexKOF02UMSprites_Mature },
    { L"D - Hidden Super Desperation Move 1", 0x0094182, 0x00941a2, indexKOF02UMSprites_Mature, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00941a2, 0x00941c2, indexKOF02UMSprites_Mature, 0x00 },
    { L"D - Electric Shock Effect", 0x00941c2, 0x00941e2, indexKOF02UMSprites_Mature, 0x18 },
    { L"D - MAX Flash", 0x00941e2, 0x0094202, indexKOF02UMSprites_Mature, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0094202, 0x0094222, indexKOF02UMSprites_Mature, 0x00 },
    { L"D - Soul Palette", 0x0094222, 0x0094242, indexKOF02UMSprites_Mature, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0094242, 0x0094262, indexKOF02UMSprites_Mature, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_A[] =
{
    { L"Vice A", 0x0094362, 0x0094382, indexKOF02UMSprites_Vice },
    { L"A - Hidden Super Desperation Move 1", 0x0094382, 0x00943a2, indexKOF02UMSprites_Vice, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00943a2, 0x00943c2, indexKOF02UMSprites_Vice, 0x00 },
    { L"A - Electric Shock Effect", 0x00943c2, 0x00943e2, indexKOF02UMSprites_Vice, 0x18 },
    { L"A - MAX Flash", 0x00943e2, 0x0094402, indexKOF02UMSprites_Vice, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0094402, 0x0094422, indexKOF02UMSprites_Vice, 0x00 },
    { L"A - Soul Palette", 0x0094422, 0x0094442, indexKOF02UMSprites_Vice, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0094442, 0x0094462, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_B[] =
{
    { L"Vice B", 0x0094562, 0x0094582, indexKOF02UMSprites_Vice },
    { L"B - Hidden Super Desperation Move 1", 0x0094582, 0x00945a2, indexKOF02UMSprites_Vice, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00945a2, 0x00945c2, indexKOF02UMSprites_Vice, 0x00 },
    { L"B - Electric Shock Effect", 0x00945c2, 0x00945e2, indexKOF02UMSprites_Vice, 0x18 },
    { L"B - MAX Flash", 0x00945e2, 0x0094602, indexKOF02UMSprites_Vice, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0094602, 0x0094622, indexKOF02UMSprites_Vice, 0x00 },
    { L"B - Soul Palette", 0x0094622, 0x0094642, indexKOF02UMSprites_Vice, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0094642, 0x0094662, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_C[] =
{
    { L"Vice C", 0x0094762, 0x0094782, indexKOF02UMSprites_Vice },
    { L"C - Hidden Super Desperation Move 1", 0x0094782, 0x00947a2, indexKOF02UMSprites_Vice, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00947a2, 0x00947c2, indexKOF02UMSprites_Vice, 0x00 },
    { L"C - Electric Shock Effect", 0x00947c2, 0x00947e2, indexKOF02UMSprites_Vice, 0x18 },
    { L"C - MAX Flash", 0x00947e2, 0x0094802, indexKOF02UMSprites_Vice, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0094802, 0x0094822, indexKOF02UMSprites_Vice, 0x00 },
    { L"C - Soul Palette", 0x0094822, 0x0094842, indexKOF02UMSprites_Vice, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0094842, 0x0094862, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VICE_PALETTES_D[] =
{
    { L"Vice D", 0x0094962, 0x0094982, indexKOF02UMSprites_Vice },
    { L"D - Hidden Super Desperation Move 1", 0x0094982, 0x00949a2, indexKOF02UMSprites_Vice, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00949a2, 0x00949c2, indexKOF02UMSprites_Vice, 0x00 },
    { L"D - Electric Shock Effect", 0x00949c2, 0x00949e2, indexKOF02UMSprites_Vice, 0x18 },
    { L"D - MAX Flash", 0x00949e2, 0x0094a02, indexKOF02UMSprites_Vice, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0094a02, 0x0094a22, indexKOF02UMSprites_Vice, 0x00 },
    { L"D - Soul Palette", 0x0094a22, 0x0094a42, indexKOF02UMSprites_Vice, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0094a42, 0x0094a62, indexKOF02UMSprites_Vice, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_A[] =
{
    { L"Yamazaki A", 0x0094b62, 0x0094b82, indexKOF02UMSprites_Yamazaki },
    { L"A - Drill Super Extras", 0x0094b82, 0x0094ba2, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"A - Intro Stuff", 0x0094ba2, 0x0094bc2, indexKOF02UMSprites_Yamazaki, 0x19 },
    { L"A - Electric Shock Effect", 0x0094bc2, 0x0094be2, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"A - MAX Flash", 0x0094be2, 0x0094c02, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0094c02, 0x0094c22, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"A - Soul Palette", 0x0094c22, 0x0094c42, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0094c42, 0x0094c62, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_B[] =
{
    { L"Yamazaki B", 0x0094d62, 0x0094d82, indexKOF02UMSprites_Yamazaki },
    { L"B - Drill Super Extras", 0x0094d82, 0x0094da2, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"B - Intro Stuff", 0x0094da2, 0x0094dc2, indexKOF02UMSprites_Yamazaki, 0x19 },
    { L"B - Electric Shock Effect", 0x0094dc2, 0x0094de2, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"B - MAX Flash", 0x0094de2, 0x0094e02, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0094e02, 0x0094e22, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"B - Soul Palette", 0x0094e22, 0x0094e42, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0094e42, 0x0094e62, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_C[] =
{
    { L"Yamazaki C", 0x0094f62, 0x0094f82, indexKOF02UMSprites_Yamazaki },
    { L"C - Drill Super Extras", 0x0094f82, 0x0094fa2, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"C - Intro Stuff", 0x0094fa2, 0x0094fc2, indexKOF02UMSprites_Yamazaki, 0x19 },
    { L"C - Electric Shock Effect", 0x0094fc2, 0x0094fe2, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"C - MAX Flash", 0x0094fe2, 0x0095002, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0095002, 0x0095022, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"C - Soul Palette", 0x0095022, 0x0095042, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0095042, 0x0095062, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YAMAZAKI_PALETTES_D[] =
{
    { L"Yamazaki D", 0x0095162, 0x0095182, indexKOF02UMSprites_Yamazaki },
    { L"D - Drill Super Extras", 0x0095182, 0x00951a2, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"D - Intro Stuff", 0x00951a2, 0x00951c2, indexKOF02UMSprites_Yamazaki, 0x19 },
    { L"D - Electric Shock Effect", 0x00951c2, 0x00951e2, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"D - MAX Flash", 0x00951e2, 0x0095202, indexKOF02UMSprites_Yamazaki, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0095202, 0x0095222, indexKOF02UMSprites_Yamazaki, 0x00 },
    { L"D - Soul Palette", 0x0095222, 0x0095242, indexKOF02UMSprites_Yamazaki, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0095242, 0x0095262, indexKOF02UMSprites_Yamazaki, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0x0095362, 0x0095382, indexKOF02UMSprites_BlueMary },
    { L"A - Anton and Jacket", 0x0095382, 0x00953a2, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"A - Desperation Move / Super Desperation Move", 0x00953a2, 0x00953c2, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"A - Electric Shock Effect", 0x00953c2, 0x00953e2, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"A - MAX Flash", 0x00953e2, 0x0095402, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0095402, 0x0095422, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"A - Soul Palette", 0x0095422, 0x0095442, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0095442, 0x0095462, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B", 0x0095562, 0x0095582, indexKOF02UMSprites_BlueMary },
    { L"B - Anton and Jacket", 0x0095582, 0x00955a2, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"B - Desperation Move / Super Desperation Move", 0x00955a2, 0x00955c2, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"B - Electric Shock Effect", 0x00955c2, 0x00955e2, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"B - MAX Flash", 0x00955e2, 0x0095602, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0095602, 0x0095622, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"B - Soul Palette", 0x0095622, 0x0095642, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0095642, 0x0095662, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C", 0x0095762, 0x0095782, indexKOF02UMSprites_BlueMary },
    { L"C - Anton and Jacket", 0x0095782, 0x00957a2, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"C - Desperation Move / Super Desperation Move", 0x00957a2, 0x00957c2, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"C - Electric Shock Effect", 0x00957c2, 0x00957e2, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"C - MAX Flash", 0x00957e2, 0x0095802, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0095802, 0x0095822, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"C - Soul Palette", 0x0095822, 0x0095842, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0095842, 0x0095862, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0x0095962, 0x0095982, indexKOF02UMSprites_BlueMary },
    { L"D - Anton and Jacket", 0x0095982, 0x00959a2, indexKOF02UMSprites_BlueMary, 0x1a },
    { L"D - Desperation Move / Super Desperation Move", 0x00959a2, 0x00959c2, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"D - Electric Shock Effect", 0x00959c2, 0x00959e2, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"D - MAX Flash", 0x00959e2, 0x0095a02, indexKOF02UMSprites_BlueMary, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0095a02, 0x0095a22, indexKOF02UMSprites_BlueMary, 0x00 },
    { L"D - Soul Palette", 0x0095a22, 0x0095a42, indexKOF02UMSprites_BlueMary, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0095a42, 0x0095a62, indexKOF02UMSprites_BlueMary, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_A[] =
{
    { L"Billy A", 0x0095b62, 0x0095b82, indexKOF02UMSprites_Billy },
    { L"A - Hair", 0x0095b82, 0x0095ba2, indexKOF02UMSprites_Billy, 0x1a },
    { L"A - Eiji Kisaragi", 0x0095ba2, 0x0095bc2, indexKOF02UMSprites_Billy, 0x19 },
    { L"A - Electric Shock Effect", 0x0095bc2, 0x0095be2, indexKOF02UMSprites_Billy, 0x18 },
    { L"A - MAX Flash", 0x0095be2, 0x0095c02, indexKOF02UMSprites_Billy, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0095c02, 0x0095c22, indexKOF02UMSprites_Billy, 0x00 },
    { L"A - Soul Palette", 0x0095c22, 0x0095c42, indexKOF02UMSprites_Billy, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0095c42, 0x0095c62, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_B[] =
{
    { L"Billy B", 0x0095d62, 0x0095d82, indexKOF02UMSprites_Billy },
    { L"B - Hair", 0x0095d82, 0x0095da2, indexKOF02UMSprites_Billy, 0x1a },
    { L"B - Eiji Kisaragi", 0x0095da2, 0x0095dc2, indexKOF02UMSprites_Billy, 0x19 },
    { L"B - Electric Shock Effect", 0x0095dc2, 0x0095de2, indexKOF02UMSprites_Billy, 0x18 },
    { L"B - MAX Flash", 0x0095de2, 0x0095e02, indexKOF02UMSprites_Billy, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0095e02, 0x0095e22, indexKOF02UMSprites_Billy, 0x00 },
    { L"B - Soul Palette", 0x0095e22, 0x0095e42, indexKOF02UMSprites_Billy, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0095e42, 0x0095e62, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_C[] =
{
    { L"Billy C", 0x0095f62, 0x0095f82, indexKOF02UMSprites_Billy },
    { L"C - Hair", 0x0095f82, 0x0095fa2, indexKOF02UMSprites_Billy, 0x1a },
    { L"C - Eiji Kisaragi", 0x0095fa2, 0x0095fc2, indexKOF02UMSprites_Billy, 0x19 },
    { L"C - Electric Shock Effect", 0x0095fc2, 0x0095fe2, indexKOF02UMSprites_Billy, 0x18 },
    { L"C - MAX Flash", 0x0095fe2, 0x0096002, indexKOF02UMSprites_Billy, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0096002, 0x0096022, indexKOF02UMSprites_Billy, 0x00 },
    { L"C - Soul Palette", 0x0096022, 0x0096042, indexKOF02UMSprites_Billy, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0096042, 0x0096062, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_BILLY_PALETTES_D[] =
{
    { L"Billy D", 0x0096162, 0x0096182, indexKOF02UMSprites_Billy },
    { L"D - Hair", 0x0096182, 0x00961a2, indexKOF02UMSprites_Billy, 0x1a },
    { L"D - Eiji Kisaragi", 0x00961a2, 0x00961c2, indexKOF02UMSprites_Billy, 0x19 },
    { L"D - Electric Shock Effect", 0x00961c2, 0x00961e2, indexKOF02UMSprites_Billy, 0x18 },
    { L"D - MAX Flash", 0x00961e2, 0x0096202, indexKOF02UMSprites_Billy, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0096202, 0x0096222, indexKOF02UMSprites_Billy, 0x00 },
    { L"D - Soul Palette", 0x0096222, 0x0096242, indexKOF02UMSprites_Billy, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0096242, 0x0096262, indexKOF02UMSprites_Billy, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_A[] =
{
    { L"Yashiro A", 0x0096362, 0x0096382, indexKOF02UMSprites_Yashiro },
    { L"A - Hidden Super Desperation Move 1", 0x0096382, 0x00963a2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00963a2, 0x00963c2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"A - Electric Shock Effect", 0x00963c2, 0x00963e2, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"A - MAX Flash", 0x00963e2, 0x0096402, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0096402, 0x0096422, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"A - Soul Palette", 0x0096422, 0x0096442, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0096442, 0x0096462, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_B[] =
{
    { L"Yashiro B", 0x0096562, 0x0096582, indexKOF02UMSprites_Yashiro },
    { L"B - Hidden Super Desperation Move 1", 0x0096582, 0x00965a2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00965a2, 0x00965c2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"B - Electric Shock Effect", 0x00965c2, 0x00965e2, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"B - MAX Flash", 0x00965e2, 0x0096602, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0096602, 0x0096622, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"B - Soul Palette", 0x0096622, 0x0096642, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0096642, 0x0096662, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_C[] =
{
    { L"Yashiro C", 0x0096762, 0x0096782, indexKOF02UMSprites_Yashiro },
    { L"C - Hidden Super Desperation Move 1", 0x0096782, 0x00967a2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00967a2, 0x00967c2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"C - Electric Shock Effect", 0x00967c2, 0x00967e2, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"C - MAX Flash", 0x00967e2, 0x0096802, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0096802, 0x0096822, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"C - Soul Palette", 0x0096822, 0x0096842, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0096842, 0x0096862, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02_A_YASHIRO_PALETTES_D[] =
{
    { L"Yashiro D", 0x0096962, 0x0096982, indexKOF02UMSprites_Yashiro },
    { L"D - Hidden Super Desperation Move 1", 0x0096982, 0x00969a2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00969a2, 0x00969c2, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"D - Electric Shock Effect", 0x00969c2, 0x00969e2, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"D - MAX Flash", 0x00969e2, 0x0096a02, indexKOF02UMSprites_Yashiro, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0096a02, 0x0096a22, indexKOF02UMSprites_Yashiro, 0x00 },
    { L"D - Soul Palette", 0x0096a22, 0x0096a42, indexKOF02UMSprites_Yashiro, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0096a42, 0x0096a62, indexKOF02UMSprites_Yashiro, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_A[] =
{
    { L"Shermie A", 0x0096b62, 0x0096b82, indexKOF02UMSprites_Shermie },
    { L"A - Hidden Super Desperation Move 1", 0x0096b82, 0x0096ba2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0096ba2, 0x0096bc2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"A - Electric Shock Effect", 0x0096bc2, 0x0096be2, indexKOF02UMSprites_Shermie, 0x18 },
    { L"A - MAX Flash", 0x0096be2, 0x0096c02, indexKOF02UMSprites_Shermie, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0096c02, 0x0096c22, indexKOF02UMSprites_Shermie, 0x00 },
    { L"A - Soul Palette", 0x0096c22, 0x0096c42, indexKOF02UMSprites_Shermie, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0096c42, 0x0096c62, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_B[] =
{
    { L"Shermie B", 0x0096d62, 0x0096d82, indexKOF02UMSprites_Shermie },
    { L"B - Hidden Super Desperation Move 1", 0x0096d82, 0x0096da2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0096da2, 0x0096dc2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"B - Electric Shock Effect", 0x0096dc2, 0x0096de2, indexKOF02UMSprites_Shermie, 0x18 },
    { L"B - MAX Flash", 0x0096de2, 0x0096e02, indexKOF02UMSprites_Shermie, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0096e02, 0x0096e22, indexKOF02UMSprites_Shermie, 0x00 },
    { L"B - Soul Palette", 0x0096e22, 0x0096e42, indexKOF02UMSprites_Shermie, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0096e42, 0x0096e62, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_C[] =
{
    { L"Shermie C", 0x0096f62, 0x0096f82, indexKOF02UMSprites_Shermie },
    { L"C - Hidden Super Desperation Move 1", 0x0096f82, 0x0096fa2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0096fa2, 0x0096fc2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"C - Electric Shock Effect", 0x0096fc2, 0x0096fe2, indexKOF02UMSprites_Shermie, 0x18 },
    { L"C - MAX Flash", 0x0096fe2, 0x0097002, indexKOF02UMSprites_Shermie, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0097002, 0x0097022, indexKOF02UMSprites_Shermie, 0x00 },
    { L"C - Soul Palette", 0x0097022, 0x0097042, indexKOF02UMSprites_Shermie, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0097042, 0x0097062, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SHERMIE_PALETTES_D[] =
{
    { L"Shermie D", 0x0097162, 0x0097182, indexKOF02UMSprites_Shermie },
    { L"D - Hidden Super Desperation Move 1", 0x0097182, 0x00971a2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00971a2, 0x00971c2, indexKOF02UMSprites_Shermie, 0x00 },
    { L"D - Electric Shock Effect", 0x00971c2, 0x00971e2, indexKOF02UMSprites_Shermie, 0x18 },
    { L"D - MAX Flash", 0x00971e2, 0x0097202, indexKOF02UMSprites_Shermie, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0097202, 0x0097222, indexKOF02UMSprites_Shermie, 0x00 },
    { L"D - Soul Palette", 0x0097222, 0x0097242, indexKOF02UMSprites_Shermie, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0097242, 0x0097262, indexKOF02UMSprites_Shermie, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_A[] =
{
    { L"Chris A", 0x0097362, 0x0097382, indexKOF02UMSprites_Chris },
    { L"A - Hidden Super Desperation Move 1", 0x0097382, 0x00973a2, indexKOF02UMSprites_Chris, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00973a2, 0x00973c2, indexKOF02UMSprites_Chris, 0x00 },
    { L"A - Electric Shock Effect", 0x00973c2, 0x00973e2, indexKOF02UMSprites_Chris, 0x18 },
    { L"A - MAX Flash", 0x00973e2, 0x0097402, indexKOF02UMSprites_Chris, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0097402, 0x0097422, indexKOF02UMSprites_Chris, 0x00 },
    { L"A - Soul Palette", 0x0097422, 0x0097442, indexKOF02UMSprites_Chris, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0097442, 0x0097462, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_B[] =
{
    { L"Chris B", 0x0097562, 0x0097582, indexKOF02UMSprites_Chris },
    { L"B - Hidden Super Desperation Move 1", 0x0097582, 0x00975a2, indexKOF02UMSprites_Chris, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00975a2, 0x00975c2, indexKOF02UMSprites_Chris, 0x00 },
    { L"B - Electric Shock Effect", 0x00975c2, 0x00975e2, indexKOF02UMSprites_Chris, 0x18 },
    { L"B - MAX Flash", 0x00975e2, 0x0097602, indexKOF02UMSprites_Chris, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0097602, 0x0097622, indexKOF02UMSprites_Chris, 0x00 },
    { L"B - Soul Palette", 0x0097622, 0x0097642, indexKOF02UMSprites_Chris, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0097642, 0x0097662, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_C[] =
{
    { L"Chris C", 0x0097762, 0x0097782, indexKOF02UMSprites_Chris },
    { L"C - Hidden Super Desperation Move 1", 0x0097782, 0x00977a2, indexKOF02UMSprites_Chris, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00977a2, 0x00977c2, indexKOF02UMSprites_Chris, 0x00 },
    { L"C - Electric Shock Effect", 0x00977c2, 0x00977e2, indexKOF02UMSprites_Chris, 0x18 },
    { L"C - MAX Flash", 0x00977e2, 0x0097802, indexKOF02UMSprites_Chris, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0097802, 0x0097822, indexKOF02UMSprites_Chris, 0x00 },
    { L"C - Soul Palette", 0x0097822, 0x0097842, indexKOF02UMSprites_Chris, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0097842, 0x0097862, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02_A_CHRIS_PALETTES_D[] =
{
    { L"Chris D", 0x0097962, 0x0097982, indexKOF02UMSprites_Chris },
    { L"D - Hidden Super Desperation Move 1", 0x0097982, 0x00979a2, indexKOF02UMSprites_Chris, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00979a2, 0x00979c2, indexKOF02UMSprites_Chris, 0x00 },
    { L"D - Electric Shock Effect", 0x00979c2, 0x00979e2, indexKOF02UMSprites_Chris, 0x18 },
    { L"D - MAX Flash", 0x00979e2, 0x0097a02, indexKOF02UMSprites_Chris, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0097a02, 0x0097a22, indexKOF02UMSprites_Chris, 0x00 },
    { L"D - Soul Palette", 0x0097a22, 0x0097a42, indexKOF02UMSprites_Chris, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0097a42, 0x0097a62, indexKOF02UMSprites_Chris, 0x00 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_A[] =
{
    { L"K’ A", 0x0097b62, 0x0097b82, indexKOF02UMSprites_K },
    { L"A - Diana Intro Stuff", 0x0097b82, 0x0097ba2, indexKOF02UMSprites_K, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x0097ba2, 0x0097bc2, indexKOF02UMSprites_K, 0x00 },
    { L"A - Electric Shock Effect", 0x0097bc2, 0x0097be2, indexKOF02UMSprites_K, 0x18 },
    { L"A - MAX Flash", 0x0097be2, 0x0097c02, indexKOF02UMSprites_K, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0097c02, 0x0097c22, indexKOF02UMSprites_K, 0x00 },
    { L"A - Soul Palette", 0x0097c22, 0x0097c42, indexKOF02UMSprites_K, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0097c42, 0x0097c62, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_B[] =
{
    { L"K’ B", 0x0097d62, 0x0097d82, indexKOF02UMSprites_K },
    { L"B - Diana Intro Stuff", 0x0097d82, 0x0097da2, indexKOF02UMSprites_K, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x0097da2, 0x0097dc2, indexKOF02UMSprites_K, 0x00 },
    { L"B - Electric Shock Effect", 0x0097dc2, 0x0097de2, indexKOF02UMSprites_K, 0x18 },
    { L"B - MAX Flash", 0x0097de2, 0x0097e02, indexKOF02UMSprites_K, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0097e02, 0x0097e22, indexKOF02UMSprites_K, 0x00 },
    { L"B - Soul Palette", 0x0097e22, 0x0097e42, indexKOF02UMSprites_K, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0097e42, 0x0097e62, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_C[] =
{
    { L"K’ C", 0x0097f62, 0x0097f82, indexKOF02UMSprites_K },
    { L"C - Diana Intro Stuff", 0x0097f82, 0x0097fa2, indexKOF02UMSprites_K, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x0097fa2, 0x0097fc2, indexKOF02UMSprites_K, 0x00 },
    { L"C - Electric Shock Effect", 0x0097fc2, 0x0097fe2, indexKOF02UMSprites_K, 0x18 },
    { L"C - MAX Flash", 0x0097fe2, 0x0098002, indexKOF02UMSprites_K, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0098002, 0x0098022, indexKOF02UMSprites_K, 0x00 },
    { L"C - Soul Palette", 0x0098022, 0x0098042, indexKOF02UMSprites_K, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0098042, 0x0098062, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_D[] =
{
    { L"K’ D", 0x0098162, 0x0098182, indexKOF02UMSprites_K },
    { L"D - Diana Intro Stuff", 0x0098182, 0x00981a2, indexKOF02UMSprites_K, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x00981a2, 0x00981c2, indexKOF02UMSprites_K, 0x00 },
    { L"D - Electric Shock Effect", 0x00981c2, 0x00981e2, indexKOF02UMSprites_K, 0x18 },
    { L"D - MAX Flash", 0x00981e2, 0x0098202, indexKOF02UMSprites_K, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0098202, 0x0098222, indexKOF02UMSprites_K, 0x00 },
    { L"D - Soul Palette", 0x0098222, 0x0098242, indexKOF02UMSprites_K, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0098242, 0x0098262, indexKOF02UMSprites_K, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_A[] =
{
    { L"Maxima A", 0x0098362, 0x0098382, indexKOF02UMSprites_Maxima },
    { L"A - Hidden Super Desperation Move 1", 0x0098382, 0x00983a2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00983a2, 0x00983c2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"A - Electric Shock Effect", 0x00983c2, 0x00983e2, indexKOF02UMSprites_Maxima, 0x18 },
    { L"A - MAX Flash", 0x00983e2, 0x0098402, indexKOF02UMSprites_Maxima, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0098402, 0x0098422, indexKOF02UMSprites_Maxima, 0x00 },
    { L"A - Soul Palette", 0x0098422, 0x0098442, indexKOF02UMSprites_Maxima, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0098442, 0x0098462, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_B[] =
{
    { L"Maxima B", 0x0098562, 0x0098582, indexKOF02UMSprites_Maxima },
    { L"B - Hidden Super Desperation Move 1", 0x0098582, 0x00985a2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00985a2, 0x00985c2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"B - Electric Shock Effect", 0x00985c2, 0x00985e2, indexKOF02UMSprites_Maxima, 0x18 },
    { L"B - MAX Flash", 0x00985e2, 0x0098602, indexKOF02UMSprites_Maxima, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0098602, 0x0098622, indexKOF02UMSprites_Maxima, 0x00 },
    { L"B - Soul Palette", 0x0098622, 0x0098642, indexKOF02UMSprites_Maxima, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0098642, 0x0098662, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_C[] =
{
    { L"Maxima C", 0x0098762, 0x0098782, indexKOF02UMSprites_Maxima },
    { L"C - Hidden Super Desperation Move 1", 0x0098782, 0x00987a2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00987a2, 0x00987c2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"C - Electric Shock Effect", 0x00987c2, 0x00987e2, indexKOF02UMSprites_Maxima, 0x18 },
    { L"C - MAX Flash", 0x00987e2, 0x0098802, indexKOF02UMSprites_Maxima, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0098802, 0x0098822, indexKOF02UMSprites_Maxima, 0x00 },
    { L"C - Soul Palette", 0x0098822, 0x0098842, indexKOF02UMSprites_Maxima, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0098842, 0x0098862, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02_A_MAXIMA_PALETTES_D[] =
{
    { L"Maxima D", 0x0098962, 0x0098982, indexKOF02UMSprites_Maxima },
    { L"D - Hidden Super Desperation Move 1", 0x0098982, 0x00989a2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00989a2, 0x00989c2, indexKOF02UMSprites_Maxima, 0x00 },
    { L"D - Electric Shock Effect", 0x00989c2, 0x00989e2, indexKOF02UMSprites_Maxima, 0x18 },
    { L"D - MAX Flash", 0x00989e2, 0x0098a02, indexKOF02UMSprites_Maxima, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0098a02, 0x0098a22, indexKOF02UMSprites_Maxima, 0x00 },
    { L"D - Soul Palette", 0x0098a22, 0x0098a42, indexKOF02UMSprites_Maxima, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0098a42, 0x0098a62, indexKOF02UMSprites_Maxima, 0x00 },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_A[] =
{
    { L"Whip A", 0x0098b62, 0x0098b82, indexKOF02UMSprites_Whip },
    { L"A - Hidden Super Desperation Move 1", 0x0098b82, 0x0098ba2, indexKOF02UMSprites_Whip, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0098ba2, 0x0098bc2, indexKOF02UMSprites_Whip, 0x00 },
    { L"A - Electric Shock Effect", 0x0098bc2, 0x0098be2, indexKOF02UMSprites_Whip, 0x18 },
    { L"A - MAX Flash", 0x0098be2, 0x0098c02, indexKOF02UMSprites_Whip, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0098c02, 0x0098c22, indexKOF02UMSprites_Whip, 0x00 },
    { L"A - Soul Palette", 0x0098c22, 0x0098c42, indexKOF02UMSprites_Whip, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0098c42, 0x0098c62, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_B[] =
{
    { L"Whip B", 0x0098d62, 0x0098d82, indexKOF02UMSprites_Whip },
    { L"B - Hidden Super Desperation Move 1", 0x0098d82, 0x0098da2, indexKOF02UMSprites_Whip, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0098da2, 0x0098dc2, indexKOF02UMSprites_Whip, 0x00 },
    { L"B - Electric Shock Effect", 0x0098dc2, 0x0098de2, indexKOF02UMSprites_Whip, 0x18 },
    { L"B - MAX Flash", 0x0098de2, 0x0098e02, indexKOF02UMSprites_Whip, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0098e02, 0x0098e22, indexKOF02UMSprites_Whip, 0x00 },
    { L"B - Soul Palette", 0x0098e22, 0x0098e42, indexKOF02UMSprites_Whip, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0098e42, 0x0098e62, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_C[] =
{
    { L"Whip C", 0x0098f62, 0x0098f82, indexKOF02UMSprites_Whip },
    { L"C - Hidden Super Desperation Move 1", 0x0098f82, 0x0098fa2, indexKOF02UMSprites_Whip, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0098fa2, 0x0098fc2, indexKOF02UMSprites_Whip, 0x00 },
    { L"C - Electric Shock Effect", 0x0098fc2, 0x0098fe2, indexKOF02UMSprites_Whip, 0x18 },
    { L"C - MAX Flash", 0x0098fe2, 0x0099002, indexKOF02UMSprites_Whip, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0099002, 0x0099022, indexKOF02UMSprites_Whip, 0x00 },
    { L"C - Soul Palette", 0x0099022, 0x0099042, indexKOF02UMSprites_Whip, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0099042, 0x0099062, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02_A_WHIP_PALETTES_D[] =
{
    { L"Whip D", 0x0099162, 0x0099182, indexKOF02UMSprites_Whip },
    { L"D - Hidden Super Desperation Move 1", 0x0099182, 0x00991a2, indexKOF02UMSprites_Whip, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00991a2, 0x00991c2, indexKOF02UMSprites_Whip, 0x00 },
    { L"D - Electric Shock Effect", 0x00991c2, 0x00991e2, indexKOF02UMSprites_Whip, 0x18 },
    { L"D - MAX Flash", 0x00991e2, 0x0099202, indexKOF02UMSprites_Whip, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0099202, 0x0099222, indexKOF02UMSprites_Whip, 0x00 },
    { L"D - Soul Palette", 0x0099222, 0x0099242, indexKOF02UMSprites_Whip, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0099242, 0x0099262, indexKOF02UMSprites_Whip, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_A[] =
{
    { L"Vanessa A", 0x0099362, 0x0099382, indexKOF02UMSprites_Vanessa },
    { L"A - Hidden Super Desperation Move 1", 0x0099382, 0x00993a2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x00993a2, 0x00993c2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"A - Electric Shock Effect", 0x00993c2, 0x00993e2, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"A - MAX Flash", 0x00993e2, 0x0099402, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0099402, 0x0099422, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"A - Soul Palette", 0x0099422, 0x0099442, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0099442, 0x0099462, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_B[] =
{
    { L"Vanessa B", 0x0099562, 0x0099582, indexKOF02UMSprites_Vanessa },
    { L"B - Hidden Super Desperation Move 1", 0x0099582, 0x00995a2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x00995a2, 0x00995c2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"B - Electric Shock Effect", 0x00995c2, 0x00995e2, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"B - MAX Flash", 0x00995e2, 0x0099602, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0099602, 0x0099622, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"B - Soul Palette", 0x0099622, 0x0099642, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0099642, 0x0099662, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_C[] =
{
    { L"Vanessa C", 0x0099762, 0x0099782, indexKOF02UMSprites_Vanessa },
    { L"C - Hidden Super Desperation Move 1", 0x0099782, 0x00997a2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x00997a2, 0x00997c2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"C - Electric Shock Effect", 0x00997c2, 0x00997e2, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"C - MAX Flash", 0x00997e2, 0x0099802, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x0099802, 0x0099822, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"C - Soul Palette", 0x0099822, 0x0099842, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x0099842, 0x0099862, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_VANESSA_PALETTES_D[] =
{
    { L"Vanessa D", 0x0099962, 0x0099982, indexKOF02UMSprites_Vanessa },
    { L"D - Hidden Super Desperation Move 1", 0x0099982, 0x00999a2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x00999a2, 0x00999c2, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"D - Electric Shock Effect", 0x00999c2, 0x00999e2, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"D - MAX Flash", 0x00999e2, 0x0099a02, indexKOF02UMSprites_Vanessa, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x0099a02, 0x0099a22, indexKOF02UMSprites_Vanessa, 0x00 },
    { L"D - Soul Palette", 0x0099a22, 0x0099a42, indexKOF02UMSprites_Vanessa, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x0099a42, 0x0099a62, indexKOF02UMSprites_Vanessa, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_A[] =
{
    { L"Seth A", 0x0099b62, 0x0099b82, indexKOF02UMSprites_Seth },
    { L"A - Hidden Super Desperation Move 1", 0x0099b82, 0x0099ba2, indexKOF02UMSprites_Seth, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x0099ba2, 0x0099bc2, indexKOF02UMSprites_Seth, 0x00 },
    { L"A - Electric Shock Effect", 0x0099bc2, 0x0099be2, indexKOF02UMSprites_Seth, 0x18 },
    { L"A - MAX Flash", 0x0099be2, 0x0099c02, indexKOF02UMSprites_Seth, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x0099c02, 0x0099c22, indexKOF02UMSprites_Seth, 0x00 },
    { L"A - Soul Palette", 0x0099c22, 0x0099c42, indexKOF02UMSprites_Seth, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x0099c42, 0x0099c62, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_B[] =
{
    { L"Seth B", 0x0099d62, 0x0099d82, indexKOF02UMSprites_Seth },
    { L"B - Hidden Super Desperation Move 1", 0x0099d82, 0x0099da2, indexKOF02UMSprites_Seth, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x0099da2, 0x0099dc2, indexKOF02UMSprites_Seth, 0x00 },
    { L"B - Electric Shock Effect", 0x0099dc2, 0x0099de2, indexKOF02UMSprites_Seth, 0x18 },
    { L"B - MAX Flash", 0x0099de2, 0x0099e02, indexKOF02UMSprites_Seth, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x0099e02, 0x0099e22, indexKOF02UMSprites_Seth, 0x00 },
    { L"B - Soul Palette", 0x0099e22, 0x0099e42, indexKOF02UMSprites_Seth, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x0099e42, 0x0099e62, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_C[] =
{
    { L"Seth C", 0x0099f62, 0x0099f82, indexKOF02UMSprites_Seth },
    { L"C - Hidden Super Desperation Move 1", 0x0099f82, 0x0099fa2, indexKOF02UMSprites_Seth, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x0099fa2, 0x0099fc2, indexKOF02UMSprites_Seth, 0x00 },
    { L"C - Electric Shock Effect", 0x0099fc2, 0x0099fe2, indexKOF02UMSprites_Seth, 0x18 },
    { L"C - MAX Flash", 0x0099fe2, 0x009a002, indexKOF02UMSprites_Seth, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009a002, 0x009a022, indexKOF02UMSprites_Seth, 0x00 },
    { L"C - Soul Palette", 0x009a022, 0x009a042, indexKOF02UMSprites_Seth, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x009a042, 0x009a062, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02_A_SETH_PALETTES_D[] =
{
    { L"Seth D", 0x009a162, 0x009a182, indexKOF02UMSprites_Seth },
    { L"D - Hidden Super Desperation Move 1", 0x009a182, 0x009a1a2, indexKOF02UMSprites_Seth, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x009a1a2, 0x009a1c2, indexKOF02UMSprites_Seth, 0x00 },
    { L"D - Electric Shock Effect", 0x009a1c2, 0x009a1e2, indexKOF02UMSprites_Seth, 0x18 },
    { L"D - MAX Flash", 0x009a1e2, 0x009a202, indexKOF02UMSprites_Seth, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009a202, 0x009a222, indexKOF02UMSprites_Seth, 0x00 },
    { L"D - Soul Palette", 0x009a222, 0x009a242, indexKOF02UMSprites_Seth, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x009a242, 0x009a262, indexKOF02UMSprites_Seth, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_A[] =
{
    { L"Ramon A", 0x009a362, 0x009a382, indexKOF02UMSprites_Ramon },
    { L"A - Hidden Super Desperation Move 1", 0x009a382, 0x009a3a2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x009a3a2, 0x009a3c2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"A - Electric Shock Effect", 0x009a3c2, 0x009a3e2, indexKOF02UMSprites_Ramon, 0x18 },
    { L"A - MAX Flash", 0x009a3e2, 0x009a402, indexKOF02UMSprites_Ramon, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009a402, 0x009a422, indexKOF02UMSprites_Ramon, 0x00 },
    { L"A - Soul Palette", 0x009a422, 0x009a442, indexKOF02UMSprites_Ramon, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x009a442, 0x009a462, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_B[] =
{
    { L"Ramon B", 0x009a562, 0x009a582, indexKOF02UMSprites_Ramon },
    { L"B - Hidden Super Desperation Move 1", 0x009a582, 0x009a5a2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x009a5a2, 0x009a5c2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"B - Electric Shock Effect", 0x009a5c2, 0x009a5e2, indexKOF02UMSprites_Ramon, 0x18 },
    { L"B - MAX Flash", 0x009a5e2, 0x009a602, indexKOF02UMSprites_Ramon, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009a602, 0x009a622, indexKOF02UMSprites_Ramon, 0x00 },
    { L"B - Soul Palette", 0x009a622, 0x009a642, indexKOF02UMSprites_Ramon, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x009a642, 0x009a662, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_C[] =
{
    { L"Ramon C", 0x009a762, 0x009a782, indexKOF02UMSprites_Ramon },
    { L"C - Hidden Super Desperation Move 1", 0x009a782, 0x009a7a2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x009a7a2, 0x009a7c2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"C - Electric Shock Effect", 0x009a7c2, 0x009a7e2, indexKOF02UMSprites_Ramon, 0x18 },
    { L"C - MAX Flash", 0x009a7e2, 0x009a802, indexKOF02UMSprites_Ramon, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009a802, 0x009a822, indexKOF02UMSprites_Ramon, 0x00 },
    { L"C - Soul Palette", 0x009a822, 0x009a842, indexKOF02UMSprites_Ramon, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x009a842, 0x009a862, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_RAMON_PALETTES_D[] =
{
    { L"Ramon D", 0x009a962, 0x009a982, indexKOF02UMSprites_Ramon },
    { L"D - Hidden Super Desperation Move 1", 0x009a982, 0x009a9a2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x009a9a2, 0x009a9c2, indexKOF02UMSprites_Ramon, 0x00 },
    { L"D - Electric Shock Effect", 0x009a9c2, 0x009a9e2, indexKOF02UMSprites_Ramon, 0x18 },
    { L"D - MAX Flash", 0x009a9e2, 0x009aa02, indexKOF02UMSprites_Ramon, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009aa02, 0x009aa22, indexKOF02UMSprites_Ramon, 0x00 },
    { L"D - Soul Palette", 0x009aa22, 0x009aa42, indexKOF02UMSprites_Ramon, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x009aa42, 0x009aa62, indexKOF02UMSprites_Ramon, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_A[] =
{
    { L"Kula A", 0x009ab62, 0x009ab82, indexKOF02UMSprites_Kula },
    { L"A - Diana and Candy Stuff", 0x009ab82, 0x009aba2, indexKOF02UMSprites_Kula, 0x1c },
    { L"A - Foxy Stuff", 0x009aba2, 0x009abc2, indexKOF02UMSprites_Kula, 0x1b },
    { L"A - Electric Shock Effect", 0x009abc2, 0x009abe2, indexKOF02UMSprites_Kula, 0x18 },
    { L"A - MAX Flash", 0x009abe2, 0x009ac02, indexKOF02UMSprites_Kula, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009ac02, 0x009ac22, indexKOF02UMSprites_Kula, 0x00 },
    { L"A - Soul Palette", 0x009ac22, 0x009ac42, indexKOF02UMSprites_Kula, 0x18 },
    { L"A - Critical Ice", 0x009ac42, 0x009ac62, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_B[] =
{
    { L"Kula B", 0x009ad62, 0x009ad82, indexKOF02UMSprites_Kula },
    { L"B - Diana and Candy Stuff", 0x009ad82, 0x009ada2, indexKOF02UMSprites_Kula, 0x1c },
    { L"B - Foxy Stuff", 0x009ada2, 0x009adc2, indexKOF02UMSprites_Kula, 0x1b },
    { L"B - Electric Shock Effect", 0x009adc2, 0x009ade2, indexKOF02UMSprites_Kula, 0x18 },
    { L"B - MAX Flash", 0x009ade2, 0x009ae02, indexKOF02UMSprites_Kula, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009ae02, 0x009ae22, indexKOF02UMSprites_Kula, 0x00 },
    { L"B - Soul Palette", 0x009ae22, 0x009ae42, indexKOF02UMSprites_Kula, 0x18 },
    { L"B - Critical Ice", 0x009ae42, 0x009ae62, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_C[] =
{
    { L"Kula C", 0x009af62, 0x009af82, indexKOF02UMSprites_Kula },
    { L"C - Diana and Candy Stuff", 0x009af82, 0x009afa2, indexKOF02UMSprites_Kula, 0x1c },
    { L"C - Foxy Stuff", 0x009afa2, 0x009afc2, indexKOF02UMSprites_Kula, 0x1b },
    { L"C - Electric Shock Effect", 0x009afc2, 0x009afe2, indexKOF02UMSprites_Kula, 0x18 },
    { L"C - MAX Flash", 0x009afe2, 0x009b002, indexKOF02UMSprites_Kula, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009b002, 0x009b022, indexKOF02UMSprites_Kula, 0x00 },
    { L"C - Soul Palette", 0x009b022, 0x009b042, indexKOF02UMSprites_Kula, 0x18 },
    { L"C - Critical Ice", 0x009b042, 0x009b062, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02_A_KULA_PALETTES_D[] =
{
    { L"Kula D", 0x009b162, 0x009b182, indexKOF02UMSprites_Kula },
    { L"D - Diana and Candy Stuff", 0x009b182, 0x009b1a2, indexKOF02UMSprites_Kula, 0x1c },
    { L"D - Foxy Stuff", 0x009b1a2, 0x009b1c2, indexKOF02UMSprites_Kula, 0x1b },
    { L"D - Electric Shock Effect", 0x009b1c2, 0x009b1e2, indexKOF02UMSprites_Kula, 0x18 },
    { L"D - MAX Flash", 0x009b1e2, 0x009b202, indexKOF02UMSprites_Kula, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009b202, 0x009b222, indexKOF02UMSprites_Kula, 0x00 },
    { L"D - Soul Palette", 0x009b222, 0x009b242, indexKOF02UMSprites_Kula, 0x18 },
    { L"D - Critical Ice", 0x009b242, 0x009b262, indexKOF02UMSprites_Kula, 0x02 },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_A[] =
{
    { L"K9999 A", 0x009b362, 0x009b382, indexKOF02Sprites_K9999 },
    { L"A - SDM Shield", 0x009b382, 0x009b3a2, indexKOF02UMSprites_K9999, 0x10 },
    { L"A - MAX2 and Win", 0x009b3a2, 0x009b3c2, indexKOF02UMSprites_K9999, 0x09 },
    { L"A - Electric Shock Effect", 0x009b3c2, 0x009b3e2, indexKOF02UMSprites_K9999, 0x18 },
    { L"A - MAX Flash", 0x009b3e2, 0x009b402, indexKOF02UMSprites_K9999, 0x08 },
    { L"A - Intro Stuff", 0x009b402, 0x009b422, indexKOF02UMSprites_K9999, 0x19 },
    { L"A - Soul Palette", 0x009b422, 0x009b442, indexKOF02UMSprites_K9999, 0x18 },
    { L"A - Tentacle Arm", 0x009b442, 0x009b462, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_B[] =
{
    { L"K9999 B", 0x009b562, 0x009b582, indexKOF02Sprites_K9999 },
    { L"B - SDM Shield", 0x009b582, 0x009b5a2, indexKOF02UMSprites_K9999, 0x10 },
    { L"B - MAX2 and Win", 0x009b5a2, 0x009b5c2, indexKOF02UMSprites_K9999, 0x09 },
    { L"B - Electric Shock Effect", 0x009b5c2, 0x009b5e2, indexKOF02UMSprites_K9999, 0x18 },
    { L"B - MAX Flash", 0x009b5e2, 0x009b602, indexKOF02UMSprites_K9999, 0x08 },
    { L"B - Intro Stuff", 0x009b602, 0x009b622, indexKOF02UMSprites_K9999, 0x19 },
    { L"B - Soul Palette", 0x009b622, 0x009b642, indexKOF02UMSprites_K9999, 0x18 },
    { L"B - Tentacle Arm", 0x009b642, 0x009b662, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_C[] =
{
    { L"K9999 C", 0x009b762, 0x009b782, indexKOF02Sprites_K9999 },
    { L"C - SDM Shield", 0x009b782, 0x009b7a2, indexKOF02UMSprites_K9999, 0x10 },
    { L"C - MAX2 and Win", 0x009b7a2, 0x009b7c2, indexKOF02UMSprites_K9999, 0x09 },
    { L"C - Electric Shock Effect", 0x009b7c2, 0x009b7e2, indexKOF02UMSprites_K9999, 0x18 },
    { L"C - MAX Flash", 0x009b7e2, 0x009b802, indexKOF02UMSprites_K9999, 0x08 },
    { L"C - Intro Stuff", 0x009b802, 0x009b822, indexKOF02UMSprites_K9999, 0x19 },
    { L"C - Soul Palette", 0x009b822, 0x009b842, indexKOF02UMSprites_K9999, 0x18 },
    { L"C - Tentacle Arm", 0x009b842, 0x009b862, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_D[] =
{
    { L"K9999 D", 0x009b962, 0x009b982, indexKOF02Sprites_K9999 },
    { L"D - SDM Shield", 0x009b982, 0x009b9a2, indexKOF02UMSprites_K9999, 0x10 },
    { L"D - MAX2 and Win", 0x009b9a2, 0x009b9c2, indexKOF02UMSprites_K9999, 0x09 },
    { L"D - Electric Shock Effect", 0x009b9c2, 0x009b9e2, indexKOF02UMSprites_K9999, 0x18 },
    { L"D - MAX Flash", 0x009b9e2, 0x009ba02, indexKOF02UMSprites_K9999, 0x08 },
    { L"D - Intro Stuff", 0x009ba02, 0x009ba22, indexKOF02UMSprites_K9999, 0x19 },
    { L"D - Soul Palette", 0x009ba22, 0x009ba42, indexKOF02UMSprites_K9999, 0x18 },
    { L"D - Tentacle Arm", 0x009ba42, 0x009ba62, indexKOF02UMSprites_K9999, 0x1a },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_A[] =
{
    { L"Angel A", 0x009bb62, 0x009bb82, indexKOF02UMSprites_Angel },
    { L"A - Time Over Lose", 0x009bb82, 0x009bba2, indexKOF02UMSprites_Angel, 0x19 },
    { L"A - Desperation Move / Super Desperation Move", 0x009bba2, 0x009bbc2, indexKOF02UMSprites_Angel, 0x00 },
    { L"A - Electric Shock Effect", 0x009bbc2, 0x009bbe2, indexKOF02UMSprites_Angel, 0x18 },
    { L"A - MAX Flash", 0x009bbe2, 0x009bc02, indexKOF02UMSprites_Angel, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009bc02, 0x009bc22, indexKOF02UMSprites_Angel, 0x00 },
    { L"A - Soul Palette", 0x009bc22, 0x009bc42, indexKOF02UMSprites_Angel, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x009bc42, 0x009bc62, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_B[] =
{
    { L"Angel B", 0x009bd62, 0x009bd82, indexKOF02UMSprites_Angel },
    { L"B - Time Over Lose", 0x009bd82, 0x009bda2, indexKOF02UMSprites_Angel, 0x19 },
    { L"B - Desperation Move / Super Desperation Move", 0x009bda2, 0x009bdc2, indexKOF02UMSprites_Angel, 0x00 },
    { L"B - Electric Shock Effect", 0x009bdc2, 0x009bde2, indexKOF02UMSprites_Angel, 0x18 },
    { L"B - MAX Flash", 0x009bde2, 0x009be02, indexKOF02UMSprites_Angel, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009be02, 0x009be22, indexKOF02UMSprites_Angel, 0x00 },
    { L"B - Soul Palette", 0x009be22, 0x009be42, indexKOF02UMSprites_Angel, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x009be42, 0x009be62, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_C[] =
{
    { L"Angel C", 0x009bf62, 0x009bf82, indexKOF02UMSprites_Angel },
    { L"C - Time Over Lose", 0x009bf82, 0x009bfa2, indexKOF02UMSprites_Angel, 0x19 },
    { L"C - Desperation Move / Super Desperation Move", 0x009bfa2, 0x009bfc2, indexKOF02UMSprites_Angel, 0x00 },
    { L"C - Electric Shock Effect", 0x009bfc2, 0x009bfe2, indexKOF02UMSprites_Angel, 0x18 },
    { L"C - MAX Flash", 0x009bfe2, 0x009c002, indexKOF02UMSprites_Angel, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009c002, 0x009c022, indexKOF02UMSprites_Angel, 0x00 },
    { L"C - Soul Palette", 0x009c022, 0x009c042, indexKOF02UMSprites_Angel, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x009c042, 0x009c062, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02_A_ANGEL_PALETTES_D[] =
{
    { L"Angel D", 0x009c162, 0x009c182, indexKOF02UMSprites_Angel },
    { L"D - Time Over Lose", 0x009c182, 0x009c1a2, indexKOF02UMSprites_Angel, 0x19 },
    { L"D - Desperation Move / Super Desperation Move", 0x009c1a2, 0x009c1c2, indexKOF02UMSprites_Angel, 0x00 },
    { L"D - Electric Shock Effect", 0x009c1c2, 0x009c1e2, indexKOF02UMSprites_Angel, 0x18 },
    { L"D - MAX Flash", 0x009c1e2, 0x009c202, indexKOF02UMSprites_Angel, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009c202, 0x009c222, indexKOF02UMSprites_Angel, 0x00 },
    { L"D - Soul Palette", 0x009c222, 0x009c242, indexKOF02UMSprites_Angel, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x009c242, 0x009c262, indexKOF02UMSprites_Angel, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_A[] =
{
    { L"Omega Rugal A", 0x009c362, 0x009c382, indexKOF02UMSprites_OmegaRugal },
    { L"A - Hidden Super Desperation Move 1", 0x009c382, 0x009c3a2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x009c3a2, 0x009c3c2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"A - Electric Shock Effect", 0x009c3c2, 0x009c3e2, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"A - MAX Flash", 0x009c3e2, 0x009c402, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"A - Superboss Intro Stuff", 0x009c402, 0x009c422, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"A - Soul Palette", 0x009c422, 0x009c442, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x009c442, 0x009c462, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_B[] =
{
    { L"Omega Rugal B", 0x009c562, 0x009c582, indexKOF02UMSprites_OmegaRugal },
    { L"B - Hidden Super Desperation Move 1", 0x009c582, 0x009c5a2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x009c5a2, 0x009c5c2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"B - Electric Shock Effect", 0x009c5c2, 0x009c5e2, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"B - MAX Flash", 0x009c5e2, 0x009c602, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"B - Superboss Intro Stuff", 0x009c602, 0x009c622, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"B - Soul Palette", 0x009c622, 0x009c642, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x009c642, 0x009c662, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_C[] =
{
    { L"Omega Rugal C", 0x009c762, 0x009c782, indexKOF02UMSprites_OmegaRugal },
    { L"C - Hidden Super Desperation Move 1", 0x009c782, 0x009c7a2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x009c7a2, 0x009c7c2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"C - Electric Shock Effect", 0x009c7c2, 0x009c7e2, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"C - MAX Flash", 0x009c7e2, 0x009c802, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"C - Superboss Intro Stuff", 0x009c802, 0x009c822, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"C - Soul Palette", 0x009c822, 0x009c842, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x009c842, 0x009c862, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OMEGARUGAL_PALETTES_D[] =
{
    { L"Omega Rugal D", 0x009c962, 0x009c982, indexKOF02UMSprites_OmegaRugal },
    { L"D - Hidden Super Desperation Move 1", 0x009c982, 0x009c9a2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x009c9a2, 0x009c9c2, indexKOF02UMSprites_OmegaRugal, 0x00 },
    { L"D - Electric Shock Effect", 0x009c9c2, 0x009c9e2, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"D - MAX Flash", 0x009c9e2, 0x009ca02, indexKOF02UMSprites_OmegaRugal, 0x08 },
    { L"D - Superboss Intro Stuff", 0x009ca02, 0x009ca22, indexKOF02UMSprites_OmegaRugal, 0x19 },
    { L"D - Soul Palette", 0x009ca22, 0x009ca42, indexKOF02UMSprites_OmegaRugal, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x009ca42, 0x009ca62, indexKOF02UMSprites_OmegaRugal, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_A[] =
{
    { L"KUSANAGI A", 0x009cb62, 0x009cb82, indexKOF02UMSprites_Kusanagi },
    { L"A - Super Move Palette", 0x009cb82, 0x009cba2, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"A - MAX Orochinagi Fire", 0x009cba2, 0x009cbc2, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"A - Electric Shock Effect", 0x009cbc2, 0x009cbe2, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"A - MAX Flash", 0x009cbe2, 0x009cc02, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009cc02, 0x009cc22, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"A - Soul Palette", 0x009cc22, 0x009cc42, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x009cc42, 0x009cc62, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_B[] =
{
    { L"KUSANAGI B", 0x009cd62, 0x009cd82, indexKOF02UMSprites_Kusanagi },
    { L"B - Super Move Palette", 0x009cd82, 0x009cda2, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"B - MAX Orochinagi Fire", 0x009cda2, 0x009cdc2, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"B - Electric Shock Effect", 0x009cdc2, 0x009cde2, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"B - MAX Flash", 0x009cde2, 0x009ce02, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009ce02, 0x009ce22, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"B - Soul Palette", 0x009ce22, 0x009ce42, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x009ce42, 0x009ce62, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_C[] =
{
    { L"KUSANAGI C", 0x009cf62, 0x009cf82, indexKOF02UMSprites_Kusanagi },
    { L"C - Super Move Palette", 0x009cf82, 0x009cfa2, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"C - MAX Orochinagi Fire", 0x009cfa2, 0x009cfc2, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"C - Electric Shock Effect", 0x009cfc2, 0x009cfe2, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"C - MAX Flash", 0x009cfe2, 0x009d002, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009d002, 0x009d022, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"C - Soul Palette", 0x009d022, 0x009d042, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x009d042, 0x009d062, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_D[] =
{
    { L"KUSANAGI D", 0x009d162, 0x009d182, indexKOF02UMSprites_Kusanagi },
    { L"D - Super Move Palette", 0x009d182, 0x009d1a2, indexKOF02UMSprites_Kusanagi, 0x03 },
    { L"D - MAX Orochinagi Fire", 0x009d1a2, 0x009d1c2, indexKOF02UMSprites_Kusanagi, 0x04 },
    { L"D - Electric Shock Effect", 0x009d1c2, 0x009d1e2, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"D - MAX Flash", 0x009d1e2, 0x009d202, indexKOF02UMSprites_Kusanagi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009d202, 0x009d222, indexKOF02UMSprites_Kusanagi, 0x00 },
    { L"D - Soul Palette", 0x009d222, 0x009d242, indexKOF02UMSprites_Kusanagi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x009d242, 0x009d262, indexKOF02UMSprites_Kusanagi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_A[] =
{
    { L"O.Yashiro A", 0x009d362, 0x009d382, indexKOF02UMSprites_YashiroOChi },
    { L"A - Hidden Super Desperation Move 1", 0x009d382, 0x009d3a2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x009d3a2, 0x009d3c2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x009d3c2, 0x009d3e2, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"A - MAX Flash", 0x009d3e2, 0x009d402, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009d402, 0x009d422, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"A - Soul Palette", 0x009d422, 0x009d442, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"A - Hidden Super Desperation Move 3", 0x009d442, 0x009d462, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_B[] =
{
    { L"O.Yashiro B", 0x009d562, 0x009d582, indexKOF02UMSprites_YashiroOChi },
    { L"B - Hidden Super Desperation Move 1", 0x009d582, 0x009d5a2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x009d5a2, 0x009d5c2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x009d5c2, 0x009d5e2, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"B - MAX Flash", 0x009d5e2, 0x009d602, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009d602, 0x009d622, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"B - Soul Palette", 0x009d622, 0x009d642, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"B - Hidden Super Desperation Move 3", 0x009d642, 0x009d662, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_C[] =
{
    { L"O.Yashiro C", 0x009d762, 0x009d782, indexKOF02UMSprites_YashiroOChi },
    { L"C - Hidden Super Desperation Move 1", 0x009d782, 0x009d7a2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x009d7a2, 0x009d7c2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x009d7c2, 0x009d7e2, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"C - MAX Flash", 0x009d7e2, 0x009d802, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009d802, 0x009d822, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"C - Soul Palette", 0x009d822, 0x009d842, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"C - Hidden Super Desperation Move 3", 0x009d842, 0x009d862, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_D[] =
{
    { L"O.Yashiro D", 0x009d962, 0x009d982, indexKOF02UMSprites_YashiroOChi },
    { L"D - Hidden Super Desperation Move 1", 0x009d982, 0x009d9a2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x009d9a2, 0x009d9c2, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x009d9c2, 0x009d9e2, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"D - MAX Flash", 0x009d9e2, 0x009da02, indexKOF02UMSprites_YashiroOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009da02, 0x009da22, indexKOF02UMSprites_YashiroOChi, 0x00 },
    { L"D - Soul Palette", 0x009da22, 0x009da42, indexKOF02UMSprites_YashiroOChi, 0x18 },
    { L"D - Hidden Super Desperation Move 3", 0x009da42, 0x009da62, indexKOF02UMSprites_YashiroOChi, 0x00 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_A[] =
{
    { L"O.Shermie A", 0x009db62, 0x009db82, indexKOF02UMSprites_ShermieOChi },
    { L"A - Hidden Super Desperation Move 1", 0x009db82, 0x009dba2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"A - Desperation Move / Super Desperation Move", 0x009dba2, 0x009dbc2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"A - Electric Shock Effect", 0x009dbc2, 0x009dbe2, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"A - MAX Flash", 0x009dbe2, 0x009dc02, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009dc02, 0x009dc22, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"A - Soul Palette", 0x009dc22, 0x009dc42, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"A - MAX2 Lightning", 0x009dc42, 0x009dc62, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_B[] =
{
    { L"O.Shermie B", 0x009dd62, 0x009dd82, indexKOF02UMSprites_ShermieOChi },
    { L"B - Hidden Super Desperation Move 1", 0x009dd82, 0x009dda2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"B - Desperation Move / Super Desperation Move", 0x009dda2, 0x009ddc2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"B - Electric Shock Effect", 0x009ddc2, 0x009dde2, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"B - MAX Flash", 0x009dde2, 0x009de02, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009de02, 0x009de22, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"B - Soul Palette", 0x009de22, 0x009de42, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"B - MAX2 Lightning", 0x009de42, 0x009de62, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_C[] =
{
    { L"O.Shermie C", 0x009df62, 0x009df82, indexKOF02UMSprites_ShermieOChi },
    { L"C - Hidden Super Desperation Move 1", 0x009df82, 0x009dfa2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"C - Desperation Move / Super Desperation Move", 0x009dfa2, 0x009dfc2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"C - Electric Shock Effect", 0x009dfc2, 0x009dfe2, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"C - MAX Flash", 0x009dfe2, 0x009e002, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009e002, 0x009e022, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"C - Soul Palette", 0x009e022, 0x009e042, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"C - MAX2 Lightning", 0x009e042, 0x009e062, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_D[] =
{
    { L"O.Shermie D", 0x009e162, 0x009e182, indexKOF02UMSprites_ShermieOChi },
    { L"D - Hidden Super Desperation Move 1", 0x009e182, 0x009e1a2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"D - Desperation Move / Super Desperation Move", 0x009e1a2, 0x009e1c2, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"D - Electric Shock Effect", 0x009e1c2, 0x009e1e2, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"D - MAX Flash", 0x009e1e2, 0x009e202, indexKOF02UMSprites_ShermieOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009e202, 0x009e222, indexKOF02UMSprites_ShermieOChi, 0x00 },
    { L"D - Soul Palette", 0x009e222, 0x009e242, indexKOF02UMSprites_ShermieOChi, 0x18 },
    { L"D - MAX2 Lightning", 0x009e242, 0x009e262, indexKOF02UMSprites_ShermieOChi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_A[] =
{
    { L"O.Chris A", 0x009e362, 0x009e382, indexKOF02Sprites_ChrisOrochi },
    { L"A - Hidden Super Desperation Move 1", 0x009e382, 0x009e3a2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"A - MAX2 Orochi", 0x009e3a2, 0x009e3c2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"A - Electric Shock Effect", 0x009e3c2, 0x009e3e2, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"A - MAX Flash", 0x009e3e2, 0x009e402, indexKOF02UMSprites_ChrisOChi, 0x08 },
    { L"A - Hidden Super Desperation Move 2", 0x009e402, 0x009e422, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"A - Soul Palette", 0x009e422, 0x009e442, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"A - Orochi Fire Palette", 0x009e442, 0x009e462, indexKOF02UMSprites_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_B[] =
{
    { L"O.Chris B", 0x009e562, 0x009e582, indexKOF02Sprites_ChrisOrochi },
    { L"B - Hidden Super Desperation Move 1", 0x009e582, 0x009e5a2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"B - MAX2 Orochi", 0x009e5a2, 0x009e5c2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"B - Electric Shock Effect", 0x009e5c2, 0x009e5e2, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"B - MAX Flash", 0x009e5e2, 0x009e602, indexKOF02UMSprites_ChrisOChi, 0x08 },
    { L"B - Hidden Super Desperation Move 2", 0x009e602, 0x009e622, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"B - Soul Palette", 0x009e622, 0x009e642, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"B - Orochi Fire Palette", 0x009e642, 0x009e662, indexKOF02UMSprites_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_C[] =
{
    { L"O.Chris C", 0x009e762, 0x009e782, indexKOF02Sprites_ChrisOrochi },
    { L"C - Hidden Super Desperation Move 1", 0x009e782, 0x009e7a2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"C - MAX2 Orochi", 0x009e7a2, 0x009e7c2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"C - Electric Shock Effect", 0x009e7c2, 0x009e7e2, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"C - MAX Flash", 0x009e7e2, 0x009e802, indexKOF02UMSprites_ChrisOChi, 0x08 },
    { L"C - Hidden Super Desperation Move 2", 0x009e802, 0x009e822, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"C - Soul Palette", 0x009e822, 0x009e842, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"C - Orochi Fire Palette", 0x009e842, 0x009e862, indexKOF02UMSprites_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_D[] =
{
    { L"O.Chris D", 0x009e962, 0x009e982, indexKOF02Sprites_ChrisOrochi },
    { L"D - Hidden Super Desperation Move 1", 0x009e982, 0x009e9a2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"D - MAX2 Orochi", 0x009e9a2, 0x009e9c2, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"D - Electric Shock Effect", 0x009e9c2, 0x009e9e2, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"D - MAX Flash", 0x009e9e2, 0x009ea02, indexKOF02UMSprites_ChrisOChi, 0x08 },
    { L"D - Hidden Super Desperation Move 2", 0x009ea02, 0x009ea22, indexKOF02Sprites_ChrisOrochi, 0x00 },
    { L"D - Soul Palette", 0x009ea22, 0x009ea42, indexKOF02UMSprites_ChrisOChi, 0x18 },
    { L"D - Orochi Fire Palette", 0x009ea42, 0x009ea62, indexKOF02UMSprites_ChrisOChi, 0x19 },
};

const sGame_PaletteDataset KOF02_A_Kyo_PALETTES_SHARED[] =
{
    { L"Intro Stuff and Orochinagi Fire",   0x9eb62, 0x9eb82, indexKOF02UMSprites_KyoKusa, 0x19 },
    { L"General Fire Stuff",                0x9eb82, 0x9eba2, indexKOF02UMSprites_KyoKusa, 0x10 },
    { L"Fire Ball/DP Fire",                 0x9eba2, 0x9ebc2, indexKOF02UMSprites_KyoKusa, 0x09 },
    { L"Orochinagi Fire Extra",             0x9ec22, 0x9ec42, indexKOF02UMSprites_KyoKusa, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Benimaru_PALETTES_SHARED[] =
{
    { L"Iaido/Lightning Kick",          0x9ed62, 0x9ed82, indexKOF02UMSprites_Benimaru, 0x02 },
    { L"Raikouken",                     0x9ed82, 0x9eda2, indexKOF02UMSprites_Benimaru, 0x05 },
    { L"Raijiken and Electrtrigger",    0x9eda2, 0x9edc2, indexKOF02UMSprites_Benimaru, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Terry_PALETTES_SHARED[] =
{
    { L"Burn Knuckle Effects",          0x9f162, 0x9f182, indexKOF02UMSprites_Terry, 0x04 },
    { L"Power Wave and Dunk",           0x9f182, 0x9f1a2, indexKOF02UMSprites_Terry, 0x02 },
    { L"Power Geyser and P. Wave Hit",  0x9f1a2, 0x9f1c2, indexKOF02UMSprites_Terry, 0x03 },
    { L"MAX2 Super",                    0x9f1c2, 0x9f1e2, indexKOF02UMSprites_Terry, 0x09 },
    { L"Round Wave",                    0x9f262, 0x9f282, indexKOF02UMSprites_Terry, 0x05 },
};

const sGame_PaletteDataset KOF02_A_Andy_PALETTES_SHARED[] =
{
    { L"Hishouken",                 0x9f362, 0x9f382, indexKOF02UMSprites_Andy, 0x3 },
    { L"Geki Hishouken",            0x9f382, 0x9f3a2, indexKOF02UMSprites_Andy, 0x4 },
    { L"Shoryudan Effects",         0x9f3a2, 0x9f3c2, indexKOF02UMSprites_Andy, 0x2 },
    { L"SDM/MAX Fire",              0x9f402, 0x9f422, indexKOF02UMSprites_Andy, 0x12 },
    { L"Zan Ei Comet Punch Main",   0x9f422, 0x9f442, indexKOF02UMSprites_Andy, 0x10 },
    { L"Zan Ei Comet Punch Extra",  0x9f442, 0x9f462 },
};

const sGame_PaletteDataset KOF02_A_Joe_PALETTES_SHARED[] =
{
    { L"Hurricane Upper",           0x9f562, 0x9f582, indexKOF02UMSprites_Joe, 0x02 },
    { L"SDM Screw Upper Startup",   0x9f582, 0x9f5a2, indexKOF02UMSprites_Joe, 0x02 },
    { L"Screw Upper SDM",           0x9f5a2, 0x9f5c2, indexKOF02UMSprites_Joe, 0x11 },
    { L"Kick Moves",                0x9f5c2, 0x9f5e2, indexKOF02UMSprites_Joe, 0x10 },
    { L"Hurricane Upper Effects",   0x9f5e2, 0x9f602, indexKOF02UMSprites_Joe, 0x10 },
    { L"Screw Upper MAX",           0x9f602, 0x9f622, indexKOF02UMSprites_Joe, 0x11 },
    { L"Tiger Kick Effects",        0x9f622, 0x9f642, indexKOF02UMSprites_Joe, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Chang_PALETTES_SHARED[] =
{
    { L"Drumming Iron Ball Dust", 0x9f962, 0x9f982, indexKOF02UMSprites_Chang, 0x19 },
};

const sGame_PaletteDataset KOF02_A_Choi_PALETTES_SHARED[] =
{
    { L"Tornado Attacks",               0x9fb62, 0x9fb82, indexKOF02UMSprites_Choi, 0x02 },
    { L"Tornado Ripper Lightning",      0x9fba2, 0x9fbc2, indexKOF02UMSprites_Choi, 0x11 },
    { L"Rolling Charger Super Effects", 0x9fbc2, 0x9fbe2, indexKOF02UMSprites_Choi, 0x10 },
    { L"MAX2 Attack",                   0x9fbe2, 0x9fc02, indexKOF02UMSprites_Choi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Athena_PALETTES_SHARED[] =
{
    { L"SDM Orbs",                          0x9fd62, 0x9fd82, indexKOF02UMSprites_Athena, 0x10 },
    { L"Psycho Ball Hit",                   0x9fde2, 0x9fe02, indexKOF02UMSprites_Athena, 0x03 },
    { L"SDM Stuff and Portals",             0x9fe02, 0x9fe22, indexKOF02UMSprites_Athena, 0x11 },
    { L"Psycho Reflector and SDM Finisher", 0x9fe42, 0x9fe62 },
};

const sGame_PaletteDataset KOF02_A_Kensou_PALETTES_SHARED[] =
{
    { L"Psycho Ball",       0x9ff62, 0x9ff82, indexKOF02UMSprites_Kensou, 0x02 },
    { L"Psycho Ball Hit",   0x9ff82, 0x9ffa2, indexKOF02UMSprites_Kensou, 0x03 },
    { L"MAX Burst",         0x9ffa2, 0x9ffc2, indexKOF02UMSprites_Kensou, 0x10 },
    { L"MAX2 Powerup Orb",  0x9ffe2, 0xa0002, indexKOF02UMSprites_Kensou, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Chin_PALETTES_SHARED[] =
{
    { L"Main Fire",     0xa0162, 0xa0182, indexKOF02UMSprites_Chin, 0x02 },
    { L"Extra Fire",    0xa01a2, 0xa01c2, indexKOF02UMSprites_Chin, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Leona_PALETTES_SHARED[] =
{
    { L"X-Caliber and Ground Sabre",    0xa0362, 0xa0382, indexKOF02UMSprites_Leona, 0x03 },
    { L"Voltaic Launcher",              0xa0382, 0xa03a2, indexKOF02UMSprites_Leona, 0x02 },
    { L"V-Slasher",                     0xa03a2, 0xa03c2, indexKOF02UMSprites_Leona, 0x07 },
    { L"Moon Slasher",                  0xa0482, 0xa04a2, indexKOF02UMSprites_Leona, 0x04 },
    { L"Slasher Move Extras",           0xa03e2, 0xa0402, indexKOF02UMSprites_Leona, 0x05 },
    { L"Revolver Spark",                0xa0402, 0xa0422, indexKOF02UMSprites_Leona, 0x11 },
    { L"Ring Bomb",                     0xa0422, 0xa0442, indexKOF02UMSprites_Leona, 0x1a },
    { L"Grateful Dead Dust",            0xa0442, 0xa0462, indexKOF02UMSprites_Leona, 0x10 },
};

const sGame_PaletteDataset KOF02_A_Ralf_PALETTES_SHARED[] =
{
    { L"MAX2 Super Dust", 0xa0562, 0xa0582, indexKOF02UMSprites_Ralf, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Ryo_PALETTES_SHARED[] =
{
    { L"Special Moves",     0xa0962, 0xa0982, indexKOF02UMSprites_Ryo, 0x02 },
    { L"Hao Shokouken Hit", 0xa0982, 0xa09a2, indexKOF02UMSprites_Ryo, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Robert_PALETTES_SHARED[] =
{
    { L"Hao Shokouken",                         0xa0b62, 0xa0b82, indexKOF02UMSprites_Robert, 0x04 },
    { L"MAX2 Tiger Finisher and Super Extras",  0xa0b82, 0xa0ba2, indexKOF02UMSprites_Robert, 0x05 },
    { L"Projectile Hit",                        0xa0c02, 0xa0c22, indexKOF02UMSprites_Robert, 0x03 },
    { L"Projectile",                            0xa0c42, 0xa0c62, indexKOF02UMSprites_Robert, 0x02 },
};

const sGame_PaletteDataset KOF02_A_Takuma_PALETTES_SHARED[] =
{
    { L"Kouken", 0xa0d62, 0xa0d82, indexKOF02UMSprites_Takuma, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Mai_PALETTES_SHARED[] =
{
    { L"MAX2 Fire",                                 0xa0f62, 0xa0f82, indexKOF02UMSprites_Mai, 0x02 },
    { L"Ryu en Bu Fire",                            0xa0fa2, 0xa0fc2, indexKOF02UMSprites_Mai, 0x04 },
    { L"MAX2 Hold C Wedding Dress and Fan Extra",   0xa0fc2, 0xa0fe2, indexKOF02UMSprites_Mai, 0x1c },
    { L"Sakura Flowers and SDM/MAX Fire",           0xa1002, 0xa1022, indexKOF02UMSprites_Mai, 0x1b },
    { L"MAX2 Fire Pillar",                          0xa1042, 0xa1062, indexKOF02UMSprites_Mai, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Yuri_PALETTES_SHARED[] =
{
    { L"Kouken",                0xa1182, 0xa11a2, indexKOF02UMSprites_Yuri, 0x03 },
    { L"Cypher",                0xa11a2, 0xa11c2, indexKOF02UMSprites_Yuri, 0x02 },
    { L"Raiouken",              0xa1202, 0xa1222, indexKOF02UMSprites_Yuri, 0x05 },
    { L"Hao Shokouken Stuff",   0xa1242, 0xa1262, indexKOF02UMSprites_Yuri, 0x04 },
};

const sGame_PaletteDataset KOF02_A_MayLee_PALETTES_SHARED[] =
{
    { L"Disposition Frog MAX Attack", 0xa1362, 0xa1382, indexKOF02UMSprites_MayLee, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Iori_PALETTES_SHARED[] =
{
    { L"Fireball and Flame Comber Fire",    0xa1562, 0xa1582, indexKOF02UMSprites_Iori, 0x04 },
    { L"Dark Thrust Dust",                  0xa1582, 0xa15a2, indexKOF02UMSprites_Iori, 0x06 },
    { L"SDM Followup Attack",               0xa15c2, 0xa15e2, indexKOF02UMSprites_Iori, 0x10 },
    { L"VS Kyo Intro Stuff",                0xa15e2, 0xa1602, indexKOF02UMSprites_Iori, 0x05 },
    { L"Dark Thrust Fire",                  0xa1602, 0xa1622, indexKOF02UMSprites_Iori, 0x02 },
    { L"MAX2 Fire Pillar",                  0xa1642, 0xa1662, indexKOF02UMSprites_Iori, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Mature_PALETTES_SHARED[] =
{
    { L"Ebony Tears and SDM/MAX Finisher",  0xa1762, 0xa1782, indexKOF02UMSprites_Mature, 0x02 },
    { L"Special Attack Effects",            0xa1782, 0xa17a2, indexKOF02UMSprites_Mature, 0x02 },
    { L"SDM Heaven's Gate",                 0xa17a2, 0xa17c2, indexKOF02UMSprites_Mature, 0x10 },
    //This isn't heaven's gate ... { L"MAX Heaven's Gate",                 0xa17e2, 0xa1802, indexKOF02UMSprites_Mature, 0x09 },
    { L"MAX Heaven's Gate",                 0xa1802, 0xa1822, indexKOF02UMSprites_Mature, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Vice_PALETTES_SHARED[] =
{
    { L"Outrage and Ravenous",  0xa1962, 0xa1982, indexKOF02UMSprites_Vice, 0x02 },
    { L"SDM Effects",           0xa19a2, 0xa19c2, indexKOF02UMSprites_Vice, 0x10 },
    { L"MAX Effects",           0xa19c2, 0xa19e2, indexKOF02UMSprites_Vice, 0x0a },
};

const sGame_PaletteDataset KOF02_A_Yamazaki_PALETTES_SHARED[] =
{
    { L"Drill Super Main Attack",   0xa1b62, 0xa1b82, indexKOF02UMSprites_Yamazaki, 0x03 },
    { L"Special Move Sand",         0xa1b82, 0xa1ba2, indexKOF02UMSprites_Yamazaki, 0x02 },
    { L"Double Return Projectile",  0xa1c02, 0xa1c22, indexKOF02UMSprites_Yamazaki, 0x04 },
    { L"Double Return Hit",         0xa1c22, 0xa1c42, indexKOF02UMSprites_Yamazaki, 0x05 },
};

const sGame_PaletteDataset KOF02_A_BlueMary_PALETTES_SHARED[] =
{
    { L"Stun Fang Followup Attack", 0xa1d62, 0xa1d82, indexKOF02UMSprites_BlueMary, 0x03 },
    { L"M.Splash Rose Finisher",    0xa1d82, 0xa1da2, indexKOF02UMSprites_BlueMary, 0x02 },
    { L"Rose Stuff",                0xa1dc2, 0xa1de2, indexKOF02UMSprites_BlueMary, 0x19 },
};

const sGame_PaletteDataset KOF02_A_Billy_PALETTES_SHARED[] =
{
    { L"Fire Wheel",        0xa1f62, 0xa1f82, indexKOF02UMSprites_Billy, 0x03 },
    { L"Fire Wheel Hit",    0xa1f82, 0xa1fa2, indexKOF02UMSprites_Billy, 0x04 },
    { L"Fire Pillar",       0xa2042, 0xa2062, indexKOF02UMSprites_Billy, 0x02 },
};

const sGame_PaletteDataset KOF02_A_Yashiro_PALETTES_SHARED[] =
{
    { L"Special Move Dust", 0xa2182, 0xa21a2, indexKOF02UMSprites_Yashiro, 0x02 },
    { L"SDM Effects",       0xa21c2, 0xa21e2, indexKOF02UMSprites_Yashiro, 0x10 },
    { L"MAX Effects",       0xa21e2, 0xa2202, indexKOF02UMSprites_Yashiro, 0x10 },
};

const sGame_PaletteDataset KOF02_A_Shermie_PALETTES_SHARED[] =
{
    { L"MAX2 Attack", 0xa2382, 0xa23a2 },
};

const sGame_PaletteDataset KOF02_A_Chris_PALETTES_SHARED[] =
{
    { L"MAX2 Transformation",           0xa2562, 0xa2582, indexKOF02UMSprites_Chris, 0x04 },
    { L"Super and Special Effects 1",   0xa2582, 0xa25a2, indexKOF02UMSprites_Chris, 0x02 },
    { L"Super and Special Effects 2",   0xa25a2, 0xa25c2, indexKOF02UMSprites_Chris, 0x02 },
    { L"Chain Slide Touch Effects",     0xa25c2, 0xa25e2, indexKOF02UMSprites_Chris, 0x03 },
};

const sGame_PaletteDataset KOF02_A_K_PALETTES_SHARED[] =
{
    { L"Fire Stuff", 0xa2762, 0xa2782, indexKOF02UMSprites_K, 0x02 },
};

const sGame_PaletteDataset KOF02_A_Maxima_PALETTES_SHARED[] =
{
    { L"Bunker Buster Dust",            0xa2962, 0xa2982, indexKOF02UMSprites_Maxima, 0x1a },
    { L"Bunker Buster Effects",         0xa2982, 0xa29a2, indexKOF02UMSprites_Maxima, 0x02 },
    { L"Vapor Cannon Dust",             0xa29a2, 0xa29c2, indexKOF02UMSprites_Maxima, 0x05 },
    { L"Intro Stuff",                   0xa29e2, 0xa2a02, indexKOF02UMSprites_Maxima, 0x19 },
    { L"Grab Special and MAX Sparks",   0xa2a02, 0xa2a22, indexKOF02UMSprites_Maxima, 0x04 },
    { L"M2 Maxima Beam",                0xa2a22, 0xa2a42, indexKOF02UMSprites_Maxima, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Whip_PALETTES_SHARED[] =
{
    { L"Desert Eagle Dust",     0xa2b62, 0xa2b82, indexKOF02UMSprites_Whip, 0x19 },
    { L"Sonic Slaughter Dust",  0xa2ba2, 0xa2bc2, indexKOF02UMSprites_Whip, 0x02 },
    { L"MAX2 Gunblast",         0xa2bc2, 0xa2be2, indexKOF02UMSprites_Whip, 0x09 },
};

const sGame_PaletteDataset KOF02_A_Vanessa_PALETTES_SHARED[] =
{
    { L"Gaea Gear MAX2",    0xa2d62, 0xa2d82, indexKOF02UMSprites_Vanessa, 0x09 },
    { L"Forbidden Eagle",   0xa2d82, 0xa2da2, indexKOF02UMSprites_Vanessa, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Seth_PALETTES_SHARED[] =
{
    { L"Rising Sun",    0xa2f62, 0xa2f82, indexKOF02UMSprites_Seth, 0x02 },
    { L"SDM Dust",      0xa2f82, 0xa2fa2, indexKOF02UMSprites_Seth, 0x03 },
};

const sGame_PaletteDataset KOF02_A_Ramon_PALETTES_SHARED[] =
{
    { L"Flower", 0xa3162, 0xa3182, indexKOF02UMSprites_Ramon, 0x19 },
};

const sGame_PaletteDataset KOF02_A_Kula_PALETTES_SHARED[] =
{
    { L"Ice Attacks and Extras", 0xa3362, 0xa3382, indexKOF02UMSprites_Kula, 0x03 },
    { L"Block Effects",         0xa3382, 0xa33a2, indexKOF02UMSprites_Kula, 0x1e },
    { L"Idle Animation Ice",    0xa33a2, 0xa33c2, indexKOF02UMSprites_Kula, 0x1a },
    { L"Diamond Breath",        0xa33c2, 0xa33e2, indexKOF02UMSprites_Kula, 0x04 },
    { L"Diamond Edge Super",    0xa33e2, 0xa3402, indexKOF02UMSprites_Kula, 0x05 },
    { L"MAX Freeze Screen",     0xa3402, 0xa3422, indexKOF02UMSprites_Kula, 0x09 },
    { L"Candy Stuff",           0xa3442, 0xa3462, indexKOF02UMSprites_Kula, 0x1d },
};

const sGame_PaletteDataset KOF02_A_K9999_PALETTES_SHARED[] =
{
    { L"Special Move Fire",         0xa3562, 0xa3582, indexKOF02Sprites_K9999, 0x10 },
    { L"Special Move Dust",         0xa3582, 0xa35a2, indexKOF02Sprites_K9999, 0x08 },
    { L"SDM Explosion and Effects", 0xa35a2, 0xa35c2, indexKOF02Sprites_K9999, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OmegaRugal_PALETTES_SHARED[] =
{
    { L"Reppuken and Win Stuff",            0xa3962, 0xa3982, indexKOF02UMSprites_OmegaRugal, 0x07 },
    { L"Kaizer Wave",                       0xa3982, 0xa39a2, indexKOF02UMSprites_OmegaRugal, 0x05 },
    { L"Kaizer Wave Hit",                   0xa39a2, 0xa39c2, indexKOF02UMSprites_OmegaRugal, 0x06 },
    { L"Dark Barrier",                      0xa39c2, 0xa39e2, indexKOF02UMSprites_OmegaRugal, 0x02 },
    { L"Genocide Cutter Effect 1",          0xa39e2, 0xa3a02, indexKOF02UMSprites_OmegaRugal, 0x04 },
    { L"Genocide Cutter Effect 2",          0xa3a02, 0xa3a22, indexKOF02UMSprites_OmegaRugal, 0x04 },
    { L"Divine Arrow and Gravity Smash",    0xa3a22, 0xa3a42, indexKOF02UMSprites_OmegaRugal, 0x03 },
    { L"Gigantic Pressure and Intro Stuff", 0xa3a42, 0xa3a62, indexKOF02UMSprites_OmegaRugal, 0x1a },
};

const sGame_PaletteDataset KOF02_A_KUSANAGI_PALETTES_SHARED[] =
{
    { L"Orochinagi Extra Fire",             0xa3b62, 0xa3b82, indexKOF02UMSprites_Kusanagi, 0x19 },
    { L"Orochinagi Main Fire Attack",       0xa3b82, 0xa3ba2, indexKOF02UMSprites_Kusanagi, 0x05 },
    { L"Dark Thrust and Fire Ball Fire",    0xa3ba2, 0xa3bc2, indexKOF02UMSprites_Kusanagi, 0x05 },
    { L"Dark Thrust Main",                  0xa3c02, 0xa3c22, indexKOF02UMSprites_Kusanagi, 0x02 },
    { L"Orochinagi Extra Fire Attack",      0xa3c22, 0xa3c42, indexKOF02UMSprites_Kusanagi, 0x06 },
    { L"MAX2 Final Showdown Fire Pillar",   0xa3c42, 0xa3c62, indexKOF02UMSprites_Kusanagi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OrochiYashiro_PALETTES_SHARED[] =
{
    { L"Special and Super Effects", 0xa3d62, 0xa3d82, indexKOF02UMSprites_Yashiro, 0x03 },
    { L"Araburu Daichi Pillar",     0xa3da2, 0xa3dc2, indexKOF02UMSprites_Yashiro, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OrochiShermie_PALETTES_SHARED[] =
{
    { L"Shukumei-G. Shinshi Super", 0xa3f62, 0xa3f82, indexKOF02UMSprites_ShermieOChi, 0x05 },
    { L"Idle Lightning and Kiss",   0xa3f82, 0xa3fa2, indexKOF02UMSprites_ShermieOChi, 0x07 },
    { L"Lightning",                 0xa3fa2, 0xa3fc2, indexKOF02UMSprites_ShermieOChi, 0x04 },
    { L"SDM Raikouken",             0xa3fc2, 0xa3fe2, indexKOF02UMSprites_ShermieOChi, 0x10 },
    { L"MAX Raikouken",             0xa3fe2, 0xa4002, indexKOF02UMSprites_ShermieOChi, 0x10 },
    { L"Takeru Mikazuchi Lightning", 0xa4002, 0xa4022, indexKOF02UMSprites_ShermieOChi, 0x06 },
    { L"Special Lightning Effects", 0xa4022, 0xa4042, indexKOF02UMSprites_ShermieOChi, 0x02 },
    { L"Yatanagi no Muchi Hit",     0xa4042, 0xa4062, indexKOF02UMSprites_ShermieOChi, 0x03 },
};

const sGame_PaletteDataset KOF02_A_OrochiChris_PALETTES_SHARED[] =
{
    { L"Orochi Fire",               0xa4162, 0xa4182, indexKOF02UMSprites_ChrisOChi, 0x02 },
    { L"Idle Orochi Flames",        0xa41e2, 0xa4202, indexKOF02UMSprites_ChrisOChi, 0x03 },
    { L"Ankoku Orochinagi Fire 1",  0xa41c2, 0xa41e2, indexKOF02UMSprites_ChrisOChi, 0x02 },
    { L"Ankoku Orochinagi Fire 2",  0xa4202, 0xa4222, indexKOF02UMSprites_ChrisOChi, 0x04 },
};

const sGame_PaletteDataset KOF02_A_KENSOU_PALETTES_MAX2[] =
{
    { L"Kensou MAX2 Flash 1/16", 0xc0162, 0xc0182, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 2/16", 0xc0182, 0xc01a2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 3/16", 0xc01a2, 0xc01c2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 4/16", 0xc01c2, 0xc01e2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 5/16", 0xc01e2, 0xc0202, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 6/16", 0xc0202, 0xc0222, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 7/16", 0xc0222, 0xc0242, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 8/16", 0xc0242, 0xc0262, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 9/16", 0xc0262, 0xc0282, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 10/16", 0xc0282, 0xc02a2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 11/16", 0xc02a2, 0xc02c2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 12/16", 0xc02c2, 0xc02e2, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 13/16", 0xc02e2, 0xc0302, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 14/16", 0xc0302, 0xc0322, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 15/16", 0xc0322, 0xc0342, indexKOF02UMSprites_Kensou, 0x0a },
    { L"Kensou MAX2 Flash 16/16", 0xc0342, 0xc0362, indexKOF02UMSprites_Kensou, 0x0a },
};

const sGame_PaletteDataset KOF02_A_OCHRIS_PALETTES_MAX2[] =
{
    { L"Orochi Chris MAX2 Background 1/16", 0xc0d62, 0xc0d82, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 2/16", 0xc0d82, 0xc0da2, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 3/16", 0xc0da2, 0xc0dc2, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 4/16", 0xc0dc2, 0xc0de2, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 5/16", 0xc0de2, 0xc0e02, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 6/16", 0xc0e02, 0xc0e22, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 7/16", 0xc0e22, 0xc0e42, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 8/16", 0xc0e42, 0xc0e62, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 9/16", 0xc0e62, 0xc0e82, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 10/16", 0xc0e82, 0xc0ea2, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 11/16", 0xc0ea2, 0xc0ec2, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 12/16", 0xc0ec2, 0xc0ee2, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 13/16", 0xc0ee2, 0xc0f02, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 14/16", 0xc0f02, 0xc0f22, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 15/16", 0xc0f22, 0xc0f42, indexKOF02UMSprites_ChrisOChi, 0x09 },
    { L"Orochi Chris MAX2 Background 16/16", 0xc0f42, 0xc0f62, indexKOF02UMSprites_ChrisOChi, 0x09 },
};

const sGame_PaletteDataset KOF02_A_OSHERMIE_PALETTES_MAX2[] =
{
    { L"Orochi Shermie MAX2 Background", 0xc2342, 0xc2362, indexKOF02UMSprites_ShermieOChi, 0x0a },
};

const sGame_PaletteDataset KOF02_A_OYASHIRO_PALETTES_MAX2[] =
{
    { L"Orochi Yashiro MAX2 Background 1/4", 0xc22a2, 0xc22c2, indexKOF02UMSprites_YashiroOChi, 0x0a  },
    { L"Orochi Yashiro MAX2 Background 2/4", 0xc22c2, 0xc22e2, indexKOF02UMSprites_YashiroOChi, 0x0a  },
    { L"Orochi Yashiro MAX2 Background 3/4", 0xc22e2, 0xc2302, indexKOF02UMSprites_YashiroOChi, 0x0a  },
    { L"Orochi Yashiro MAX2 Background 4/4", 0xc2302, 0xc2322, indexKOF02UMSprites_YashiroOChi, 0x0a  },
};

const sDescTreeNode KOF02_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_A, ARRAYSIZE(KOF02_A_KYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_B, ARRAYSIZE(KOF02_A_KYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_C, ARRAYSIZE(KOF02_A_KYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_D, ARRAYSIZE(KOF02_A_KYO_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Kyo_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Kyo_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_KYO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_KYO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_KYO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_A, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_B, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_C, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_D, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Benimaru_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Benimaru_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_BENIMARU_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_DAIMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_A, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_B, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_C, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_D, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_DAIMON_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_A, ARRAYSIZE(KOF02_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_B, ARRAYSIZE(KOF02_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_C, ARRAYSIZE(KOF02_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_D, ARRAYSIZE(KOF02_A_TERRY_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Terry_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Terry_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_TERRY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_TERRY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_TERRY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_A, ARRAYSIZE(KOF02_A_ANDY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_B, ARRAYSIZE(KOF02_A_ANDY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_C, ARRAYSIZE(KOF02_A_ANDY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_D, ARRAYSIZE(KOF02_A_ANDY_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Andy_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Andy_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_ANDY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_ANDY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_ANDY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_A, ARRAYSIZE(KOF02_A_JOE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_B, ARRAYSIZE(KOF02_A_JOE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_C, ARRAYSIZE(KOF02_A_JOE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_D, ARRAYSIZE(KOF02_A_JOE_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Joe_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Joe_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_JOE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_JOE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_JOE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_A, ARRAYSIZE(KOF02_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_B, ARRAYSIZE(KOF02_A_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_C, ARRAYSIZE(KOF02_A_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_D, ARRAYSIZE(KOF02_A_KIM_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_KIM_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_KIM_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_KIM_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_A, ARRAYSIZE(KOF02_A_CHANG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_B, ARRAYSIZE(KOF02_A_CHANG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_C, ARRAYSIZE(KOF02_A_CHANG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_D, ARRAYSIZE(KOF02_A_CHANG_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Chang_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Chang_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_CHANG_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_CHANG_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_CHANG_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_CHOI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_A, ARRAYSIZE(KOF02_A_CHOI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_B, ARRAYSIZE(KOF02_A_CHOI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_C, ARRAYSIZE(KOF02_A_CHOI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_D, ARRAYSIZE(KOF02_A_CHOI_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Choi_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Choi_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_CHOI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_CHOI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_CHOI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_A, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_B, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_C, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_D, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Athena_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Athena_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_ATHENA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_A, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_B, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_C, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_D, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Kensou_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Kensou_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_MAX2, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_KENSOU_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_CHIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_A, ARRAYSIZE(KOF02_A_CHIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_B, ARRAYSIZE(KOF02_A_CHIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_C, ARRAYSIZE(KOF02_A_CHIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_D, ARRAYSIZE(KOF02_A_CHIN_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Chin_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Chin_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_CHIN_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_CHIN_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_CHIN_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_A, ARRAYSIZE(KOF02_A_LEONA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_B, ARRAYSIZE(KOF02_A_LEONA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_C, ARRAYSIZE(KOF02_A_LEONA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_D, ARRAYSIZE(KOF02_A_LEONA_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Leona_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Leona_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_LEONA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_LEONA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_LEONA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_A, ARRAYSIZE(KOF02_A_RALF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_B, ARRAYSIZE(KOF02_A_RALF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_C, ARRAYSIZE(KOF02_A_RALF_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_D, ARRAYSIZE(KOF02_A_RALF_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Ralf_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Ralf_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_RALF_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_RALF_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_RALF_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_A, ARRAYSIZE(KOF02_A_CLARK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_B, ARRAYSIZE(KOF02_A_CLARK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_C, ARRAYSIZE(KOF02_A_CLARK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_D, ARRAYSIZE(KOF02_A_CLARK_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_CLARK_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_CLARK_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_CLARK_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_A, ARRAYSIZE(KOF02_A_RYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_B, ARRAYSIZE(KOF02_A_RYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_C, ARRAYSIZE(KOF02_A_RYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_D, ARRAYSIZE(KOF02_A_RYO_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Ryo_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Ryo_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_RYO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_RYO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_RYO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_A, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_B, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_C, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_D, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Robert_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Robert_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_ROBERT_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_TAKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_A, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_B, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_C, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_D, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Takuma_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Takuma_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_TAKUMA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_A, ARRAYSIZE(KOF02_A_MAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_B, ARRAYSIZE(KOF02_A_MAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_C, ARRAYSIZE(KOF02_A_MAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_D, ARRAYSIZE(KOF02_A_MAI_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Mai_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Mai_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_MAI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_MAI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_MAI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_A, ARRAYSIZE(KOF02_A_YURI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_B, ARRAYSIZE(KOF02_A_YURI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_C, ARRAYSIZE(KOF02_A_YURI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_D, ARRAYSIZE(KOF02_A_YURI_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Yuri_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Yuri_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_YURI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_YURI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_YURI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_MAYLEE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_A, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_B, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_C, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_D, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_MayLee_PALETTES_SHARED, ARRAYSIZE(KOF02_A_MayLee_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_MAYLEE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_A, ARRAYSIZE(KOF02_A_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_B, ARRAYSIZE(KOF02_A_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_C, ARRAYSIZE(KOF02_A_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_D, ARRAYSIZE(KOF02_A_IORI_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Iori_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Iori_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_IORI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_IORI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_IORI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_MATURE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_A, ARRAYSIZE(KOF02_A_MATURE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_B, ARRAYSIZE(KOF02_A_MATURE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_C, ARRAYSIZE(KOF02_A_MATURE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_D, ARRAYSIZE(KOF02_A_MATURE_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Mature_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Mature_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_MATURE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_MATURE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_MATURE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_VICE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_A, ARRAYSIZE(KOF02_A_VICE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_B, ARRAYSIZE(KOF02_A_VICE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_C, ARRAYSIZE(KOF02_A_VICE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_D, ARRAYSIZE(KOF02_A_VICE_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Vice_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Vice_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_VICE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_VICE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_VICE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_YAMAZAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_A, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_B, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_C, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_D, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Yamazaki_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Yamazaki_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_YAMAZAKI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_BlueMary_PALETTES_SHARED, ARRAYSIZE(KOF02_A_BlueMary_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_BLUEMARY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_A, ARRAYSIZE(KOF02_A_BILLY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_B, ARRAYSIZE(KOF02_A_BILLY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_C, ARRAYSIZE(KOF02_A_BILLY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_D, ARRAYSIZE(KOF02_A_BILLY_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Billy_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Billy_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_BILLY_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_BILLY_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_BILLY_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_YASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_A, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_B, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_C, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_D, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Yashiro_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Yashiro_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_YASHIRO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_SHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_A, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_B, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_C, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_D, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Shermie_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Shermie_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_SHERMIE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_CHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_A, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_B, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_C, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_D, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Chris_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Chris_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_CHRIS_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_A, ARRAYSIZE(KOF02_A_K_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_B, ARRAYSIZE(KOF02_A_K_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_C, ARRAYSIZE(KOF02_A_K_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_D, ARRAYSIZE(KOF02_A_K_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_SHARED, ARRAYSIZE(KOF02_A_K_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_K_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_K_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_K_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_K_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_MAXIMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_A, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_B, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_C, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_D, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Maxima_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Maxima_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_MAXIMA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_WHIP_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_A, ARRAYSIZE(KOF02_A_WHIP_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_B, ARRAYSIZE(KOF02_A_WHIP_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_C, ARRAYSIZE(KOF02_A_WHIP_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_D, ARRAYSIZE(KOF02_A_WHIP_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Whip_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Whip_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_WHIP_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_WHIP_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_WHIP_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_VANESSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_A, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_B, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_C, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_D, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Vanessa_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Vanessa_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_VANESSA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_SETH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_A, ARRAYSIZE(KOF02_A_SETH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_B, ARRAYSIZE(KOF02_A_SETH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_C, ARRAYSIZE(KOF02_A_SETH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_D, ARRAYSIZE(KOF02_A_SETH_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Seth_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Seth_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_SETH_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_SETH_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_SETH_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_RAMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_A, ARRAYSIZE(KOF02_A_RAMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_B, ARRAYSIZE(KOF02_A_RAMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_C, ARRAYSIZE(KOF02_A_RAMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_D, ARRAYSIZE(KOF02_A_RAMON_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Ramon_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Ramon_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_RAMON_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_RAMON_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_RAMON_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_KULA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_A, ARRAYSIZE(KOF02_A_KULA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_B, ARRAYSIZE(KOF02_A_KULA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_C, ARRAYSIZE(KOF02_A_KULA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_D, ARRAYSIZE(KOF02_A_KULA_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_Kula_PALETTES_SHARED, ARRAYSIZE(KOF02_A_Kula_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_KULA_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_KULA_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_KULA_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_K9999_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_A, ARRAYSIZE(KOF02_A_K9999_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_B, ARRAYSIZE(KOF02_A_K9999_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_C, ARRAYSIZE(KOF02_A_K9999_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_D, ARRAYSIZE(KOF02_A_K9999_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_SHARED, ARRAYSIZE(KOF02_A_K9999_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_K9999_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_K9999_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_K9999_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_ANGEL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_A, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_B, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_C, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_D, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_D) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_ANGEL_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_OMEGARUGAL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_A, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_B, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_C, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_D, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_OmegaRugal_PALETTES_SHARED, ARRAYSIZE(KOF02_A_OmegaRugal_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_OMEGARUGAL_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_KUSANAGI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_A, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_B, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_C, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_D, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_SHARED, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_SHARED) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_KUSANAGI_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_OYASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_A, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_B, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_C, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_D, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_OrochiYashiro_PALETTES_SHARED, ARRAYSIZE(KOF02_A_OrochiYashiro_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_MAX2, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_OYASHIRO_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_OSHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_A, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_B, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_C, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_D, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_OrochiShermie_PALETTES_SHARED, ARRAYSIZE(KOF02_A_OrochiShermie_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_MAX2, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_OSHERMIE_PALETTES_PORTRAITS_SELECT) },
};

const sDescTreeNode KOF02_A_OCHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_A, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_B, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_C, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_D, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF02_A_OrochiChris_PALETTES_SHARED, ARRAYSIZE(KOF02_A_OrochiChris_PALETTES_SHARED) },
    { L"MAX2 Extras", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_MAX2, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_MAX2) },
    { L"Win Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_PORTRAITS_WIN) },
    { L"Lifebar Portraits", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_PORTRAITS_LIFEBAR) },
    { L"Select Portrait", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_OCHRIS_PALETTES_PORTRAITS_SELECT) },
};

const sGame_PaletteDataset KOF02_A_EXTRA_PALETTES[] =
{
    { L"Blood Effects", 0x86f22, 0x86f42 },
    { L"Grab Sparks", 0x86ee2, 0x86f02 },
    { L"Hitspark Effects", 0x87562, 0x87582 },
    { L"Blocksparks Effects", 0x86e02, 0x86e22 },
    { L"Special/Super Blocksparks", 0x86e22, 0x86e42 },
    { L"MAX Mode and SDM Flash", 0x87022, 0x87042 },
    { L"MAX Flash", 0x875e2, 0x87602 },
    { L"MAX2 Flash", 0x87602, 0x87622 },
    { L"Fire Palette", 0x88162, 0x88362 },
    { L"Orochi Fire Palette", 0x88362, 0x88562 },
    { L"Orochi Burn Palette", 0x88562, 0x88762 },
    { L"Frozen Palette", 0x88762, 0x88962 },
};

const sDescTreeNode KOF02_A_BONUS_COLLECTION[] =
{
    { L"Extra Effects", DESC_NODETYPE_TREE, (void*)KOF02_A_EXTRA_PALETTES, ARRAYSIZE(KOF02_A_EXTRA_PALETTES) },
};

const sDescTreeNode KOF02_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF02_A_KYO_COLLECTION, ARRAYSIZE(KOF02_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF02_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF02_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF02_A_DAIMON_COLLECTION, ARRAYSIZE(KOF02_A_DAIMON_COLLECTION) },

    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF02_A_TERRY_COLLECTION, ARRAYSIZE(KOF02_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF02_A_ANDY_COLLECTION, ARRAYSIZE(KOF02_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF02_A_JOE_COLLECTION, ARRAYSIZE(KOF02_A_JOE_COLLECTION) },

    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF02_A_KIM_COLLECTION, ARRAYSIZE(KOF02_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF02_A_CHANG_COLLECTION, ARRAYSIZE(KOF02_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF02_A_CHOI_COLLECTION, ARRAYSIZE(KOF02_A_CHOI_COLLECTION) },

    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF02_A_ATHENA_COLLECTION, ARRAYSIZE(KOF02_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF02_A_KENSOU_COLLECTION, ARRAYSIZE(KOF02_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF02_A_CHIN_COLLECTION, ARRAYSIZE(KOF02_A_CHIN_COLLECTION) },

    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF02_A_LEONA_COLLECTION, ARRAYSIZE(KOF02_A_LEONA_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF02_A_RALF_COLLECTION, ARRAYSIZE(KOF02_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF02_A_CLARK_COLLECTION, ARRAYSIZE(KOF02_A_CLARK_COLLECTION) },

    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF02_A_RYO_COLLECTION, ARRAYSIZE(KOF02_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF02_A_ROBERT_COLLECTION, ARRAYSIZE(KOF02_A_ROBERT_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF02_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF02_A_TAKUMA_COLLECTION) },

    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF02_A_MAI_COLLECTION, ARRAYSIZE(KOF02_A_MAI_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF02_A_YURI_COLLECTION, ARRAYSIZE(KOF02_A_YURI_COLLECTION) },
    { L"May Lee", DESC_NODETYPE_TREE, (void*)KOF02_A_MAYLEE_COLLECTION, ARRAYSIZE(KOF02_A_MAYLEE_COLLECTION) },

    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF02_A_IORI_COLLECTION, ARRAYSIZE(KOF02_A_IORI_COLLECTION) },
    { L"Mature", DESC_NODETYPE_TREE, (void*)KOF02_A_MATURE_COLLECTION, ARRAYSIZE(KOF02_A_MATURE_COLLECTION) },
    { L"Vice", DESC_NODETYPE_TREE, (void*)KOF02_A_VICE_COLLECTION, ARRAYSIZE(KOF02_A_VICE_COLLECTION) },

    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)KOF02_A_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF02_A_YAMAZAKI_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF02_A_BLUEMARY_COLLECTION, ARRAYSIZE(KOF02_A_BLUEMARY_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF02_A_BILLY_COLLECTION, ARRAYSIZE(KOF02_A_BILLY_COLLECTION) },
    { L"Yashiro", DESC_NODETYPE_TREE, (void*)KOF02_A_YASHIRO_COLLECTION, ARRAYSIZE(KOF02_A_YASHIRO_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)KOF02_A_SHERMIE_COLLECTION, ARRAYSIZE(KOF02_A_SHERMIE_COLLECTION) },
    { L"Chris", DESC_NODETYPE_TREE, (void*)KOF02_A_CHRIS_COLLECTION, ARRAYSIZE(KOF02_A_CHRIS_COLLECTION) },
    { L"K’", DESC_NODETYPE_TREE, (void*)KOF02_A_K_COLLECTION, ARRAYSIZE(KOF02_A_K_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF02_A_MAXIMA_COLLECTION, ARRAYSIZE(KOF02_A_MAXIMA_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF02_A_WHIP_COLLECTION, ARRAYSIZE(KOF02_A_WHIP_COLLECTION) },
    { L"Vanessa", DESC_NODETYPE_TREE, (void*)KOF02_A_VANESSA_COLLECTION, ARRAYSIZE(KOF02_A_VANESSA_COLLECTION) },
    { L"Seth", DESC_NODETYPE_TREE, (void*)KOF02_A_SETH_COLLECTION, ARRAYSIZE(KOF02_A_SETH_COLLECTION) },
    { L"Ramon", DESC_NODETYPE_TREE, (void*)KOF02_A_RAMON_COLLECTION, ARRAYSIZE(KOF02_A_RAMON_COLLECTION) },
    { L"Kula", DESC_NODETYPE_TREE, (void*)KOF02_A_KULA_COLLECTION, ARRAYSIZE(KOF02_A_KULA_COLLECTION) },
    { L"K9999", DESC_NODETYPE_TREE, (void*)KOF02_A_K9999_COLLECTION, ARRAYSIZE(KOF02_A_K9999_COLLECTION) },
    { L"Angel", DESC_NODETYPE_TREE, (void*)KOF02_A_ANGEL_COLLECTION, ARRAYSIZE(KOF02_A_ANGEL_COLLECTION) },

    { L"Omega Rugal", DESC_NODETYPE_TREE, (void*)KOF02_A_OMEGARUGAL_COLLECTION, ARRAYSIZE(KOF02_A_OMEGARUGAL_COLLECTION) },

    { L"KUSANAGI", DESC_NODETYPE_TREE, (void*)KOF02_A_KUSANAGI_COLLECTION, ARRAYSIZE(KOF02_A_KUSANAGI_COLLECTION) },

    { L"O.Chris", DESC_NODETYPE_TREE, (void*)KOF02_A_OCHRIS_COLLECTION, ARRAYSIZE(KOF02_A_OCHRIS_COLLECTION) },
    { L"O.Shermie", DESC_NODETYPE_TREE, (void*)KOF02_A_OSHERMIE_COLLECTION, ARRAYSIZE(KOF02_A_OSHERMIE_COLLECTION) },
    { L"O.Yashiro", DESC_NODETYPE_TREE, (void*)KOF02_A_OYASHIRO_COLLECTION, ARRAYSIZE(KOF02_A_OYASHIRO_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF02_A_BONUS_COLLECTION, ARRAYSIZE(KOF02_A_BONUS_COLLECTION) },
};

constexpr auto KOF02_A_NUMUNIT = ARRAYSIZE(KOF02_A_UNITS);

#define KOF02_A_EXTRALOC KOF02_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF02_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

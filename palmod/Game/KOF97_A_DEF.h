#pragma once

// These are hand-generated: don't remove these.
const UINT16 KOF97_A_IMGIDS_USED[] =
{
    indexKOF98Sprites_Kyo,
    indexKOF98Sprites_Benimaru,
    indexKOF98Sprites_Daimon,
    indexKOF98Sprites_Terry,
    indexKOF98Sprites_Andy,
    indexKOF98Sprites_Joe,
    indexKOF98Sprites_Ryo,
    indexKOF98Sprites_Robert,
    indexKOF98Sprites_Yuri,
    indexKOF98Sprites_Leona,
    indexKOF98Sprites_Ralf,
    indexKOF98Sprites_Clark,
    indexKOF98Sprites_Athena,
    indexKOF98Sprites_Kensou,
    indexKOF98Sprites_Chin,
    indexKOF98Sprites_Chizuru,
    indexKOF98Sprites_Mai,
    indexKOF96Sprites_King,         // 0x257
    indexKOF98Sprites_Kim,
    indexKOF98Sprites_Chang,
    indexKOF98Sprites_Choi,
    indexKOF98Sprites_Yashiro,
    indexKOF98Sprites_Shermie,
    indexKOF98Sprites_Chris,
    indexKOF98Sprites_Yamazaki,
    indexKOF98Sprites_BlueMary,
    indexKOF98Sprites_Billy,
    indexKOF98Sprites_Iori,
    indexKOF98Sprites_Mature,
    indexKOF98Sprites_Vice,
    indexKOF98Sprites_Heidern,
    indexKOF98Sprites_Takuma,
    indexKOF98Sprites_Saisyu,
    indexKOF98Sprites_HeavyD,
    indexKOF98Sprites_Lucky,
    indexKOF98Sprites_Brian,
    indexKOF98Sprites_Rugal,
    indexKOF98Sprites_Shingo, // 25

    indexKOF98Sprites_OrderSelect,
    indexKOF98Sprites_Lifebar,      // 77
    indexKOF98Sprites_WinPortrait,  // 78

    indexKOF97Sprites_Andy,          // 0x1EC
    indexKOF97Sprites_Athena,        // 0x1ED
    indexKOF97Sprites_Benimaru,      // 0x1EE
    indexKOF97Sprites_Billy,            // 0x299
    indexKOF97Sprites_BlueMary,         // 0x29A
    indexKOF97Sprites_Chang,            // 0x29B
    indexKOF97Sprites_Chin,             // 0x29C
    indexKOF97Sprites_Chizuru,          // 0x29D
    indexKOF97Sprites_Choi,             // 0x29E
    indexKOF97Sprites_Chris,            // 0x29F
    indexKOF97Sprites_ChrisOrochi,      // 0x2A0
    indexKOF97Sprites_Clark,            // 0x2A1
    indexKOF97Sprites_Daimon,           // 0x2A2
    indexKOF97Sprites_Iori,             // 0x2A3
    indexKOF97Sprites_IoriOrochi,    // 0x1F7
    indexKOF97Sprites_Joe,              // 0x2A4
    indexKOF97Sprites_Kensou,           // 0x2A5
    indexKOF97Sprites_Kim,              // 0x2A6
    indexKOF97Sprites_King,             // 0x2A7
    indexKOF97Sprites_Kyo,              // 0x2A8
    indexKOF97Sprites_Leona,            // 0x2A9
    indexKOF97Sprites_LeonaOrochi,   // 0x1F8
    indexKOF97Sprites_Mai,              // 0x2AA
    indexKOF97Sprites_Orochi,        // 0x1EF
    indexKOF97Sprites_Ralf,             // 0x2AB
    indexKOF97Sprites_Robert,           // 0x2AC
    indexKOF97Sprites_Ryo,              // 0x2AD
    indexKOF97Sprites_Shermie,          // 0x2AE
    indexKOF97Sprites_ShermieOrochi,    // 0x2AF
    indexKOF97Sprites_Shingo,           // 0x2B0
    indexKOF97Sprites_Terry,            // 0x2B1
    indexKOF97Sprites_Yamazaki,         // 0x2B2
    indexKOF97Sprites_Yashiro,          // 0x2B3
    indexKOF97Sprites_YashiroOrochi,    // 0x2B4
    indexKOF97Sprites_Yuri,             // 0x2B5
    indexKOF97Sprites_Bonus,         // 0x1F0
    indexKOF97Sprites_Stages,        // 0x1F1
};

const sGame_PaletteDataset KOF97_A_EFFECTS_PALETTES[] =
{
    { L"Main Fire Palette", 0x2ff5f0, 0x2ff7f0 },
    { L"Orochi Fire Palette", 0x2ff7f0, 0x2ff9f0 },
    { L"SDM Super Flash", 0x2ffbf0, 0x2ffdf0 },
};

const sDescTreeNode KOF97_A_BONUS_COLLECTION[] =
{
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_EFFECTS_PALETTES, ARRAYSIZE(KOF97_A_EFFECTS_PALETTES) },
};

// These tables are generated via DumpPaletteHeaders: make edits there

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_A[] =
{
    { L"Kyo A - Main", 0x2d1ff0, 0x2d2010, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 1", 0x2d2010, 0x2d2030, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 2", 0x2d2030, 0x2d2050, indexKOF98Sprites_Kyo },
    { L"Kyo A - Max Mode", 0x2d2050, 0x2d2070, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 4", 0x2d2070, 0x2d2090, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 5", 0x2d2090, 0x2d20b0, indexKOF98Sprites_Kyo },
    { L"Kyo A - Super Trail", 0x2d20b0, 0x2d20d0, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 7", 0x2d20d0, 0x2d20f0, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 8", 0x2d20f0, 0x2d2110, indexKOF98Sprites_Kyo },
    { L"Kyo A - Electric Palette", 0x2d2110, 0x2d2130, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 10", 0x2d2130, 0x2d2150, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 11", 0x2d2150, 0x2d2170, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 12", 0x2d2170, 0x2d2190, indexKOF98Sprites_Kyo },
    { L"Kyo A - Extra 13", 0x2d2190, 0x2d21b0, indexKOF98Sprites_Kyo },
    { L"Kyo A - Character Select/Win Assist Portrait", 0x2d21b0, 0x2d21d0, indexKOF97Sprites_Kyo, 0x41 },
    { L"Kyo A - Lifebar Portrait", 0x2d21d0, 0x2d21f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kyo },
    { L"Kyo A - Win Portrait", 0x2e7df0, 0x2e7ef0, indexKOF97Sprites_Kyo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_B[] =
{
    { L"Kyo B - Main", 0x2d21f0, 0x2d2210, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 1", 0x2d2210, 0x2d2230, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 2", 0x2d2230, 0x2d2250, indexKOF98Sprites_Kyo },
    { L"Kyo B - Max Mode", 0x2d2250, 0x2d2270, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 4", 0x2d2270, 0x2d2290, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 5", 0x2d2290, 0x2d22b0, indexKOF98Sprites_Kyo },
    { L"Kyo B - Super Trail", 0x2d22b0, 0x2d22d0, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 7", 0x2d22d0, 0x2d22f0, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 8", 0x2d22f0, 0x2d2310, indexKOF98Sprites_Kyo },
    { L"Kyo B - Electric Palette", 0x2d2310, 0x2d2330, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 10", 0x2d2330, 0x2d2350, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 11", 0x2d2350, 0x2d2370, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 12", 0x2d2370, 0x2d2390, indexKOF98Sprites_Kyo },
    { L"Kyo B - Extra 13", 0x2d2390, 0x2d23b0, indexKOF98Sprites_Kyo },
    { L"Kyo B - Character Select/Win Assist Portrait", 0x2d23b0, 0x2d23d0, indexKOF97Sprites_Kyo, 0x41 },
    { L"Kyo B - Lifebar Portrait", 0x2d23d0, 0x2d23f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kyo },
    { L"Kyo B - Win Portrait", 0x2e7ef0, 0x2e7ff0, indexKOF97Sprites_Kyo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_C[] =
{
    { L"Kyo C - Main", 0x2d23f0, 0x2d2410, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 1", 0x2d2410, 0x2d2430, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 2", 0x2d2430, 0x2d2450, indexKOF98Sprites_Kyo },
    { L"Kyo C - Max Mode", 0x2d2450, 0x2d2470, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 4", 0x2d2470, 0x2d2490, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 5", 0x2d2490, 0x2d24b0, indexKOF98Sprites_Kyo },
    { L"Kyo C - Super Trail", 0x2d24b0, 0x2d24d0, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 7", 0x2d24d0, 0x2d24f0, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 8", 0x2d24f0, 0x2d2510, indexKOF98Sprites_Kyo },
    { L"Kyo C - Electric Palette", 0x2d2510, 0x2d2530, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 10", 0x2d2530, 0x2d2550, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 11", 0x2d2550, 0x2d2570, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 12", 0x2d2570, 0x2d2590, indexKOF98Sprites_Kyo },
    { L"Kyo C - Extra 13", 0x2d2590, 0x2d25b0, indexKOF98Sprites_Kyo },
    { L"Kyo C - Character Select/Win Assist Portrait", 0x2d25b0, 0x2d25d0, indexKOF97Sprites_Kyo, 0x41 },
    { L"Kyo C - Lifebar Portrait", 0x2d25d0, 0x2d25f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kyo },
    { L"Kyo C - Win Portrait", 0x2e7ff0, 0x2e80f0, indexKOF97Sprites_Kyo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_D[] =
{
    { L"Kyo D - Main", 0x2d25f0, 0x2d2610, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 1", 0x2d2610, 0x2d2630, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 2", 0x2d2630, 0x2d2650, indexKOF98Sprites_Kyo },
    { L"Kyo D - Max Mode", 0x2d2650, 0x2d2670, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 4", 0x2d2670, 0x2d2690, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 5", 0x2d2690, 0x2d26b0, indexKOF98Sprites_Kyo },
    { L"Kyo D - Super Trail", 0x2d26b0, 0x2d26d0, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 7", 0x2d26d0, 0x2d26f0, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 8", 0x2d26f0, 0x2d2710, indexKOF98Sprites_Kyo },
    { L"Kyo D - Electric Palette", 0x2d2710, 0x2d2730, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 10", 0x2d2730, 0x2d2750, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 11", 0x2d2750, 0x2d2770, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 12", 0x2d2770, 0x2d2790, indexKOF98Sprites_Kyo },
    { L"Kyo D - Extra 13", 0x2d2790, 0x2d27b0, indexKOF98Sprites_Kyo },
    { L"Kyo D - Character Select/Win Assist Portrait", 0x2d27b0, 0x2d27d0, indexKOF97Sprites_Kyo, 0x41 },
    { L"Kyo D - Lifebar Portrait", 0x2d27d0, 0x2d27f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kyo },
    { L"Kyo D - Win Portrait", 0x2e80f0, 0x2e81f0, indexKOF97Sprites_Kyo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru A - Main", 0x2d27f0, 0x2d2810, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 1", 0x2d2810, 0x2d2830, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 2", 0x2d2830, 0x2d2850, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Max Mode", 0x2d2850, 0x2d2870, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 4", 0x2d2870, 0x2d2890, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 5", 0x2d2890, 0x2d28b0, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Super Trail", 0x2d28b0, 0x2d28d0, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 7", 0x2d28d0, 0x2d28f0, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 8", 0x2d28f0, 0x2d2910, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Electric Palette", 0x2d2910, 0x2d2930, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 10", 0x2d2930, 0x2d2950, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 11", 0x2d2950, 0x2d2970, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 12", 0x2d2970, 0x2d2990, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 13", 0x2d2990, 0x2d29b0, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Character Select/Win Assist Portrait", 0x2d29b0, 0x2d29d0, indexKOF97Sprites_Benimaru, 0x41 },
    { L"Benimaru A - Lifebar Portrait", 0x2d29d0, 0x2d29f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Win Portrait", 0x2e81f0, 0x2e8270, indexKOF97Sprites_Benimaru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru B - Main", 0x2d29f0, 0x2d2a10, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 1", 0x2d2a10, 0x2d2a30, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 2", 0x2d2a30, 0x2d2a50, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Max Mode", 0x2d2a50, 0x2d2a70, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 4", 0x2d2a70, 0x2d2a90, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 5", 0x2d2a90, 0x2d2ab0, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Super Trail", 0x2d2ab0, 0x2d2ad0, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 7", 0x2d2ad0, 0x2d2af0, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 8", 0x2d2af0, 0x2d2b10, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Electric Palette", 0x2d2b10, 0x2d2b30, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 10", 0x2d2b30, 0x2d2b50, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 11", 0x2d2b50, 0x2d2b70, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 12", 0x2d2b70, 0x2d2b90, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 13", 0x2d2b90, 0x2d2bb0, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Character Select/Win Assist Portrait", 0x2d2bb0, 0x2d2bd0, indexKOF97Sprites_Benimaru, 0x41 },
    { L"Benimaru B - Lifebar Portrait", 0x2d2bd0, 0x2d2bf0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Win Portrait", 0x2e82f0, 0x2e8370, indexKOF97Sprites_Benimaru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru C - Main", 0x2d2bf0, 0x2d2c10, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 1", 0x2d2c10, 0x2d2c30, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 2", 0x2d2c30, 0x2d2c50, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Max Mode", 0x2d2c50, 0x2d2c70, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 4", 0x2d2c70, 0x2d2c90, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 5", 0x2d2c90, 0x2d2cb0, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Super Trail", 0x2d2cb0, 0x2d2cd0, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 7", 0x2d2cd0, 0x2d2cf0, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 8", 0x2d2cf0, 0x2d2d10, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Electric Palette", 0x2d2d10, 0x2d2d30, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 10", 0x2d2d30, 0x2d2d50, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 11", 0x2d2d50, 0x2d2d70, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 12", 0x2d2d70, 0x2d2d90, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 13", 0x2d2d90, 0x2d2db0, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Character Select/Win Assist Portrait", 0x2d2db0, 0x2d2dd0, indexKOF97Sprites_Benimaru, 0x41 },
    { L"Benimaru C - Lifebar Portrait", 0x2d2dd0, 0x2d2df0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Win Portrait", 0x2e83f0, 0x2e8470, indexKOF97Sprites_Benimaru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru D - Main", 0x2d2df0, 0x2d2e10, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 1", 0x2d2e10, 0x2d2e30, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 2", 0x2d2e30, 0x2d2e50, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Max Mode", 0x2d2e50, 0x2d2e70, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 4", 0x2d2e70, 0x2d2e90, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 5", 0x2d2e90, 0x2d2eb0, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Super Trail", 0x2d2eb0, 0x2d2ed0, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 7", 0x2d2ed0, 0x2d2ef0, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 8", 0x2d2ef0, 0x2d2f10, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Electric Palette", 0x2d2f10, 0x2d2f30, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 10", 0x2d2f30, 0x2d2f50, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 11", 0x2d2f50, 0x2d2f70, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 12", 0x2d2f70, 0x2d2f90, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 13", 0x2d2f90, 0x2d2fb0, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Character Select/Win Assist Portrait", 0x2d2fb0, 0x2d2fd0, indexKOF97Sprites_Benimaru, 0x41 },
    { L"Benimaru D - Lifebar Portrait", 0x2d2fd0, 0x2d2ff0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Win Portrait", 0x2e84f0, 0x2e8570, indexKOF97Sprites_Benimaru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_A[] =
{
    { L"Daimon A - Main", 0x2d2ff0, 0x2d3010, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 1", 0x2d3010, 0x2d3030, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 2", 0x2d3030, 0x2d3050, indexKOF98Sprites_Daimon },
    { L"Daimon A - Max Mode", 0x2d3050, 0x2d3070, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 4", 0x2d3070, 0x2d3090, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 5", 0x2d3090, 0x2d30b0, indexKOF98Sprites_Daimon },
    { L"Daimon A - Super Trail", 0x2d30b0, 0x2d30d0, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 7", 0x2d30d0, 0x2d30f0, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 8", 0x2d30f0, 0x2d3110, indexKOF98Sprites_Daimon },
    { L"Daimon A - Electric Palette", 0x2d3110, 0x2d3130, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 10", 0x2d3130, 0x2d3150, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 11", 0x2d3150, 0x2d3170, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 12", 0x2d3170, 0x2d3190, indexKOF98Sprites_Daimon },
    { L"Daimon A - Extra 13", 0x2d3190, 0x2d31b0, indexKOF98Sprites_Daimon },
    { L"Daimon A - Character Select/Win Assist Portrait", 0x2d31b0, 0x2d31d0, indexKOF97Sprites_Daimon, 0x41 },
    { L"Daimon A - Lifebar Portrait", 0x2d31d0, 0x2d31f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Daimon },
    { L"Daimon A - Win Portrait", 0x2e85f0, 0x2e8610, indexKOF97Sprites_Daimon, 0x40 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_B[] =
{
    { L"Daimon B - Main", 0x2d31f0, 0x2d3210, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 1", 0x2d3210, 0x2d3230, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 2", 0x2d3230, 0x2d3250, indexKOF98Sprites_Daimon },
    { L"Daimon B - Max Mode", 0x2d3250, 0x2d3270, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 4", 0x2d3270, 0x2d3290, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 5", 0x2d3290, 0x2d32b0, indexKOF98Sprites_Daimon },
    { L"Daimon B - Super Trail", 0x2d32b0, 0x2d32d0, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 7", 0x2d32d0, 0x2d32f0, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 8", 0x2d32f0, 0x2d3310, indexKOF98Sprites_Daimon },
    { L"Daimon B - Electric Palette", 0x2d3310, 0x2d3330, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 10", 0x2d3330, 0x2d3350, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 11", 0x2d3350, 0x2d3370, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 12", 0x2d3370, 0x2d3390, indexKOF98Sprites_Daimon },
    { L"Daimon B - Extra 13", 0x2d3390, 0x2d33b0, indexKOF98Sprites_Daimon },
    { L"Daimon B - Character Select/Win Assist Portrait", 0x2d33b0, 0x2d33d0, indexKOF97Sprites_Daimon, 0x41 },
    { L"Daimon B - Lifebar Portrait", 0x2d33d0, 0x2d33f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Daimon },
    { L"Daimon B - Win Portrait", 0x2e86f0, 0x2e8710, indexKOF97Sprites_Daimon, 0x40 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_C[] =
{
    { L"Daimon C - Main", 0x2d33f0, 0x2d3410, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 1", 0x2d3410, 0x2d3430, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 2", 0x2d3430, 0x2d3450, indexKOF98Sprites_Daimon },
    { L"Daimon C - Max Mode", 0x2d3450, 0x2d3470, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 4", 0x2d3470, 0x2d3490, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 5", 0x2d3490, 0x2d34b0, indexKOF98Sprites_Daimon },
    { L"Daimon C - Super Trail", 0x2d34b0, 0x2d34d0, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 7", 0x2d34d0, 0x2d34f0, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 8", 0x2d34f0, 0x2d3510, indexKOF98Sprites_Daimon },
    { L"Daimon C - Electric Palette", 0x2d3510, 0x2d3530, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 10", 0x2d3530, 0x2d3550, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 11", 0x2d3550, 0x2d3570, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 12", 0x2d3570, 0x2d3590, indexKOF98Sprites_Daimon },
    { L"Daimon C - Extra 13", 0x2d3590, 0x2d35b0, indexKOF98Sprites_Daimon },
    { L"Daimon C - Character Select/Win Assist Portrait", 0x2d35b0, 0x2d35d0, indexKOF97Sprites_Daimon, 0x41 },
    { L"Daimon C - Lifebar Portrait", 0x2d35d0, 0x2d35f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Daimon },
    { L"Daimon C - Win Portrait", 0x2e87f0, 0x2e8810, indexKOF97Sprites_Daimon, 0x40 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_D[] =
{
    { L"Daimon D - Main", 0x2d35f0, 0x2d3610, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 1", 0x2d3610, 0x2d3630, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 2", 0x2d3630, 0x2d3650, indexKOF98Sprites_Daimon },
    { L"Daimon D - Max Mode", 0x2d3650, 0x2d3670, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 4", 0x2d3670, 0x2d3690, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 5", 0x2d3690, 0x2d36b0, indexKOF98Sprites_Daimon },
    { L"Daimon D - Super Trail", 0x2d36b0, 0x2d36d0, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 7", 0x2d36d0, 0x2d36f0, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 8", 0x2d36f0, 0x2d3710, indexKOF98Sprites_Daimon },
    { L"Daimon D - Electric Palette", 0x2d3710, 0x2d3730, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 10", 0x2d3730, 0x2d3750, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 11", 0x2d3750, 0x2d3770, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 12", 0x2d3770, 0x2d3790, indexKOF98Sprites_Daimon },
    { L"Daimon D - Extra 13", 0x2d3790, 0x2d37b0, indexKOF98Sprites_Daimon },
    { L"Daimon D - Character Select/Win Assist Portrait", 0x2d37b0, 0x2d37d0, indexKOF97Sprites_Daimon, 0x41 },
    { L"Daimon D - Lifebar Portrait", 0x2d37d0, 0x2d37f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Daimon },
    { L"Daimon D - Win Portrait", 0x2e88f0, 0x2e8910, indexKOF97Sprites_Daimon, 0x40 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_A[] =
{
    { L"Terry A - Main", 0x2d37f0, 0x2d3810, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 1", 0x2d3810, 0x2d3830, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 2", 0x2d3830, 0x2d3850, indexKOF98Sprites_Terry },
    { L"Terry A - Max Mode", 0x2d3850, 0x2d3870, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 4", 0x2d3870, 0x2d3890, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 5", 0x2d3890, 0x2d38b0, indexKOF98Sprites_Terry },
    { L"Terry A - Super Trail", 0x2d38b0, 0x2d38d0, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 7", 0x2d38d0, 0x2d38f0, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 8", 0x2d38f0, 0x2d3910, indexKOF98Sprites_Terry },
    { L"Terry A - Electric Palette", 0x2d3910, 0x2d3930, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 10", 0x2d3930, 0x2d3950, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 11", 0x2d3950, 0x2d3970, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 12", 0x2d3970, 0x2d3990, indexKOF98Sprites_Terry },
    { L"Terry A - Extra 13", 0x2d3990, 0x2d39b0, indexKOF98Sprites_Terry },
    { L"Terry A - Character Select/Win Assist Portrait", 0x2d39b0, 0x2d39d0, indexKOF97Sprites_Terry, 0x41 },
    { L"Terry A - Lifebar Portrait", 0x2d39d0, 0x2d39f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Terry },
    { L"Terry A - Win Portrait", 0x2e89f0, 0x2e8ab0, indexKOF97Sprites_Terry, 0x40 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_B[] =
{
    { L"Terry B - Main", 0x2d39f0, 0x2d3a10, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 1", 0x2d3a10, 0x2d3a30, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 2", 0x2d3a30, 0x2d3a50, indexKOF98Sprites_Terry },
    { L"Terry B - Max Mode", 0x2d3a50, 0x2d3a70, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 4", 0x2d3a70, 0x2d3a90, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 5", 0x2d3a90, 0x2d3ab0, indexKOF98Sprites_Terry },
    { L"Terry B - Super Trail", 0x2d3ab0, 0x2d3ad0, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 7", 0x2d3ad0, 0x2d3af0, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 8", 0x2d3af0, 0x2d3b10, indexKOF98Sprites_Terry },
    { L"Terry B - Electric Palette", 0x2d3b10, 0x2d3b30, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 10", 0x2d3b30, 0x2d3b50, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 11", 0x2d3b50, 0x2d3b70, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 12", 0x2d3b70, 0x2d3b90, indexKOF98Sprites_Terry },
    { L"Terry B - Extra 13", 0x2d3b90, 0x2d3bb0, indexKOF98Sprites_Terry },
    { L"Terry B - Character Select/Win Assist Portrait", 0x2d3bb0, 0x2d3bd0, indexKOF97Sprites_Terry, 0x41 },
    { L"Terry B - Lifebar Portrait", 0x2d3bd0, 0x2d3bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Terry },
    { L"Terry B - Win Portrait", 0x2e8af0, 0x2e8bb0, indexKOF97Sprites_Terry, 0x40 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_C[] =
{
    { L"Terry C - Main", 0x2d3bf0, 0x2d3c10, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 1", 0x2d3c10, 0x2d3c30, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 2", 0x2d3c30, 0x2d3c50, indexKOF98Sprites_Terry },
    { L"Terry C - Max Mode", 0x2d3c50, 0x2d3c70, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 4", 0x2d3c70, 0x2d3c90, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 5", 0x2d3c90, 0x2d3cb0, indexKOF98Sprites_Terry },
    { L"Terry C - Super Trail", 0x2d3cb0, 0x2d3cd0, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 7", 0x2d3cd0, 0x2d3cf0, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 8", 0x2d3cf0, 0x2d3d10, indexKOF98Sprites_Terry },
    { L"Terry C - Electric Palette", 0x2d3d10, 0x2d3d30, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 10", 0x2d3d30, 0x2d3d50, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 11", 0x2d3d50, 0x2d3d70, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 12", 0x2d3d70, 0x2d3d90, indexKOF98Sprites_Terry },
    { L"Terry C - Extra 13", 0x2d3d90, 0x2d3db0, indexKOF98Sprites_Terry },
    { L"Terry C - Character Select/Win Assist Portrait", 0x2d3db0, 0x2d3dd0, indexKOF97Sprites_Terry, 0x41 },
    { L"Terry C - Lifebar Portrait", 0x2d3dd0, 0x2d3df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Terry },
    { L"Terry C - Win Portrait", 0x2e8bf0, 0x2e8cb0, indexKOF97Sprites_Terry, 0x40 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_D[] =
{
    { L"Terry D - Main", 0x2d3df0, 0x2d3e10, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 1", 0x2d3e10, 0x2d3e30, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 2", 0x2d3e30, 0x2d3e50, indexKOF98Sprites_Terry },
    { L"Terry D - Max Mode", 0x2d3e50, 0x2d3e70, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 4", 0x2d3e70, 0x2d3e90, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 5", 0x2d3e90, 0x2d3eb0, indexKOF98Sprites_Terry },
    { L"Terry D - Super Trail", 0x2d3eb0, 0x2d3ed0, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 7", 0x2d3ed0, 0x2d3ef0, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 8", 0x2d3ef0, 0x2d3f10, indexKOF98Sprites_Terry },
    { L"Terry D - Electric Palette", 0x2d3f10, 0x2d3f30, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 10", 0x2d3f30, 0x2d3f50, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 11", 0x2d3f50, 0x2d3f70, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 12", 0x2d3f70, 0x2d3f90, indexKOF98Sprites_Terry },
    { L"Terry D - Extra 13", 0x2d3f90, 0x2d3fb0, indexKOF98Sprites_Terry },
    { L"Terry D - Character Select/Win Assist Portrait", 0x2d3fb0, 0x2d3fd0, indexKOF97Sprites_Terry, 0x41 },
    { L"Terry D - Lifebar Portrait", 0x2d3fd0, 0x2d3ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Terry },
    { L"Terry D - Win Portrait", 0x2e8cf0, 0x2e8db0, indexKOF97Sprites_Terry, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ANDY_PALETTES_A[] =
{
    { L"Andy A - Main", 0x2d3ff0, 0x2d4010, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 1", 0x2d4010, 0x2d4030, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 2", 0x2d4030, 0x2d4050, indexKOF97Sprites_Andy },
    { L"Andy A - Max Mode", 0x2d4050, 0x2d4070, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 4", 0x2d4070, 0x2d4090, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 5", 0x2d4090, 0x2d40b0, indexKOF97Sprites_Andy },
    { L"Andy A - Super Trail", 0x2d40b0, 0x2d40d0, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 7", 0x2d40d0, 0x2d40f0, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 8", 0x2d40f0, 0x2d4110, indexKOF97Sprites_Andy },
    { L"Andy A - Electric Palette", 0x2d4110, 0x2d4130, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 10", 0x2d4130, 0x2d4150, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 11", 0x2d4150, 0x2d4170, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 12", 0x2d4170, 0x2d4190, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 13", 0x2d4190, 0x2d41b0, indexKOF97Sprites_Andy },
    { L"Andy A - Character Select/Win Assist Portrait", 0x2d41b0, 0x2d41d0, indexKOF97Sprites_Andy, 0x41 },
    { L"Andy A - Lifebar Portrait", 0x2d41d0, 0x2d41f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Andy },
    { L"Andy A - Win Portrait", 0x2e8df0, 0x2e8ef0, indexKOF97Sprites_Andy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ANDY_PALETTES_B[] =
{
    { L"Andy B - Main", 0x2d41f0, 0x2d4210, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 1", 0x2d4210, 0x2d4230, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 2", 0x2d4230, 0x2d4250, indexKOF97Sprites_Andy },
    { L"Andy B - Max Mode", 0x2d4250, 0x2d4270, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 4", 0x2d4270, 0x2d4290, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 5", 0x2d4290, 0x2d42b0, indexKOF97Sprites_Andy },
    { L"Andy B - Super Trail", 0x2d42b0, 0x2d42d0, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 7", 0x2d42d0, 0x2d42f0, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 8", 0x2d42f0, 0x2d4310, indexKOF97Sprites_Andy },
    { L"Andy B - Electric Palette", 0x2d4310, 0x2d4330, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 10", 0x2d4330, 0x2d4350, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 11", 0x2d4350, 0x2d4370, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 12", 0x2d4370, 0x2d4390, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 13", 0x2d4390, 0x2d43b0, indexKOF97Sprites_Andy },
    { L"Andy B - Character Select/Win Assist Portrait", 0x2d43b0, 0x2d43d0, indexKOF97Sprites_Andy, 0x41 },
    { L"Andy B - Lifebar Portrait", 0x2d43d0, 0x2d43f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Andy },
    { L"Andy B - Win Portrait", 0x2e8ef0, 0x2e8ff0, indexKOF97Sprites_Andy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ANDY_PALETTES_C[] =
{
    { L"Andy C - Main", 0x2d43f0, 0x2d4410, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 1", 0x2d4410, 0x2d4430, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 2", 0x2d4430, 0x2d4450, indexKOF97Sprites_Andy },
    { L"Andy C - Max Mode", 0x2d4450, 0x2d4470, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 4", 0x2d4470, 0x2d4490, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 5", 0x2d4490, 0x2d44b0, indexKOF97Sprites_Andy },
    { L"Andy C - Super Trail", 0x2d44b0, 0x2d44d0, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 7", 0x2d44d0, 0x2d44f0, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 8", 0x2d44f0, 0x2d4510, indexKOF97Sprites_Andy },
    { L"Andy C - Electric Palette", 0x2d4510, 0x2d4530, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 10", 0x2d4530, 0x2d4550, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 11", 0x2d4550, 0x2d4570, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 12", 0x2d4570, 0x2d4590, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 13", 0x2d4590, 0x2d45b0, indexKOF97Sprites_Andy },
    { L"Andy C - Character Select/Win Assist Portrait", 0x2d45b0, 0x2d45d0, indexKOF97Sprites_Andy, 0x41 },
    { L"Andy C - Lifebar Portrait", 0x2d45d0, 0x2d45f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Andy },
    { L"Andy C - Win Portrait", 0x2e8ff0, 0x2e90f0, indexKOF97Sprites_Andy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ANDY_PALETTES_D[] =
{
    { L"Andy D - Main", 0x2d45f0, 0x2d4610, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 1", 0x2d4610, 0x2d4630, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 2", 0x2d4630, 0x2d4650, indexKOF97Sprites_Andy },
    { L"Andy D - Max Mode", 0x2d4650, 0x2d4670, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 4", 0x2d4670, 0x2d4690, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 5", 0x2d4690, 0x2d46b0, indexKOF97Sprites_Andy },
    { L"Andy D - Super Trail", 0x2d46b0, 0x2d46d0, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 7", 0x2d46d0, 0x2d46f0, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 8", 0x2d46f0, 0x2d4710, indexKOF97Sprites_Andy },
    { L"Andy D - Electric Palette", 0x2d4710, 0x2d4730, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 10", 0x2d4730, 0x2d4750, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 11", 0x2d4750, 0x2d4770, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 12", 0x2d4770, 0x2d4790, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 13", 0x2d4790, 0x2d47b0, indexKOF97Sprites_Andy },
    { L"Andy D - Character Select/Win Assist Portrait", 0x2d47b0, 0x2d47d0, indexKOF97Sprites_Andy, 0x41 },
    { L"Andy D - Lifebar Portrait", 0x2d47d0, 0x2d47f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Andy },
    { L"Andy D - Win Portrait", 0x2e90f0, 0x2e91f0, indexKOF97Sprites_Andy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_A[] =
{
    { L"Joe A - Main", 0x2d47f0, 0x2d4810, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 1", 0x2d4810, 0x2d4830, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 2", 0x2d4830, 0x2d4850, indexKOF98Sprites_Joe },
    { L"Joe A - Max Mode", 0x2d4850, 0x2d4870, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 4", 0x2d4870, 0x2d4890, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 5", 0x2d4890, 0x2d48b0, indexKOF98Sprites_Joe },
    { L"Joe A - Super Trail", 0x2d48b0, 0x2d48d0, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 7", 0x2d48d0, 0x2d48f0, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 8", 0x2d48f0, 0x2d4910, indexKOF98Sprites_Joe },
    { L"Joe A - Electric Palette", 0x2d4910, 0x2d4930, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 10", 0x2d4930, 0x2d4950, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 11", 0x2d4950, 0x2d4970, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 12", 0x2d4970, 0x2d4990, indexKOF98Sprites_Joe },
    { L"Joe A - Extra 13", 0x2d4990, 0x2d49b0, indexKOF98Sprites_Joe },
    { L"Joe A - Character Select/Win Assist Portrait", 0x2d49b0, 0x2d49d0, indexKOF97Sprites_Joe, 0x41 },
    { L"Joe A - Lifebar Portrait", 0x2d49d0, 0x2d49f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Joe },
    { L"Joe A - Win Portrait", 0x2e91f0, 0x2e9210, indexKOF97Sprites_Joe, 0x40 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_B[] =
{
    { L"Joe B - Main", 0x2d49f0, 0x2d4a10, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 1", 0x2d4a10, 0x2d4a30, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 2", 0x2d4a30, 0x2d4a50, indexKOF98Sprites_Joe },
    { L"Joe B - Max Mode", 0x2d4a50, 0x2d4a70, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 4", 0x2d4a70, 0x2d4a90, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 5", 0x2d4a90, 0x2d4ab0, indexKOF98Sprites_Joe },
    { L"Joe B - Super Trail", 0x2d4ab0, 0x2d4ad0, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 7", 0x2d4ad0, 0x2d4af0, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 8", 0x2d4af0, 0x2d4b10, indexKOF98Sprites_Joe },
    { L"Joe B - Electric Palette", 0x2d4b10, 0x2d4b30, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 10", 0x2d4b30, 0x2d4b50, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 11", 0x2d4b50, 0x2d4b70, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 12", 0x2d4b70, 0x2d4b90, indexKOF98Sprites_Joe },
    { L"Joe B - Extra 13", 0x2d4b90, 0x2d4bb0, indexKOF98Sprites_Joe },
    { L"Joe B - Character Select/Win Assist Portrait", 0x2d4bb0, 0x2d4bd0, indexKOF97Sprites_Joe, 0x41 },
    { L"Joe B - Lifebar Portrait", 0x2d4bd0, 0x2d4bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Joe },
    { L"Joe B - Win Portrait", 0x2e92f0, 0x2e9310, indexKOF97Sprites_Joe, 0x40 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_C[] =
{
    { L"Joe C - Main", 0x2d4bf0, 0x2d4c10, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 1", 0x2d4c10, 0x2d4c30, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 2", 0x2d4c30, 0x2d4c50, indexKOF98Sprites_Joe },
    { L"Joe C - Max Mode", 0x2d4c50, 0x2d4c70, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 4", 0x2d4c70, 0x2d4c90, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 5", 0x2d4c90, 0x2d4cb0, indexKOF98Sprites_Joe },
    { L"Joe C - Super Trail", 0x2d4cb0, 0x2d4cd0, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 7", 0x2d4cd0, 0x2d4cf0, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 8", 0x2d4cf0, 0x2d4d10, indexKOF98Sprites_Joe },
    { L"Joe C - Electric Palette", 0x2d4d10, 0x2d4d30, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 10", 0x2d4d30, 0x2d4d50, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 11", 0x2d4d50, 0x2d4d70, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 12", 0x2d4d70, 0x2d4d90, indexKOF98Sprites_Joe },
    { L"Joe C - Extra 13", 0x2d4d90, 0x2d4db0, indexKOF98Sprites_Joe },
    { L"Joe C - Character Select/Win Assist Portrait", 0x2d4db0, 0x2d4dd0, indexKOF97Sprites_Joe, 0x41 },
    { L"Joe C - Lifebar Portrait", 0x2d4dd0, 0x2d4df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Joe },
    { L"Joe C - Win Portrait", 0x2e93f0, 0x2e9410, indexKOF97Sprites_Joe, 0x40 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_D[] =
{
    { L"Joe D - Main", 0x2d4df0, 0x2d4e10, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 1", 0x2d4e10, 0x2d4e30, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 2", 0x2d4e30, 0x2d4e50, indexKOF98Sprites_Joe },
    { L"Joe D - Max Mode", 0x2d4e50, 0x2d4e70, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 4", 0x2d4e70, 0x2d4e90, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 5", 0x2d4e90, 0x2d4eb0, indexKOF98Sprites_Joe },
    { L"Joe D - Super Trail", 0x2d4eb0, 0x2d4ed0, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 7", 0x2d4ed0, 0x2d4ef0, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 8", 0x2d4ef0, 0x2d4f10, indexKOF98Sprites_Joe },
    { L"Joe D - Electric Palette", 0x2d4f10, 0x2d4f30, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 10", 0x2d4f30, 0x2d4f50, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 11", 0x2d4f50, 0x2d4f70, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 12", 0x2d4f70, 0x2d4f90, indexKOF98Sprites_Joe },
    { L"Joe D - Extra 13", 0x2d4f90, 0x2d4fb0, indexKOF98Sprites_Joe },
    { L"Joe D - Character Select/Win Assist Portrait", 0x2d4fb0, 0x2d4fd0, indexKOF97Sprites_Joe, 0x41 },
    { L"Joe D - Lifebar Portrait", 0x2d4fd0, 0x2d4ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Joe },
    { L"Joe D - Win Portrait", 0x2e94f0, 0x2e9510, indexKOF97Sprites_Joe, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_A[] =
{
    { L"Ryo A - Main", 0x2d4ff0, 0x2d5010, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 1", 0x2d5010, 0x2d5030, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 2", 0x2d5030, 0x2d5050, indexKOF98Sprites_Ryo },
    { L"Ryo A - Max Mode", 0x2d5050, 0x2d5070, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 4", 0x2d5070, 0x2d5090, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 5", 0x2d5090, 0x2d50b0, indexKOF98Sprites_Ryo },
    { L"Ryo A - Super Trail", 0x2d50b0, 0x2d50d0, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 7", 0x2d50d0, 0x2d50f0, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 8", 0x2d50f0, 0x2d5110, indexKOF98Sprites_Ryo },
    { L"Ryo A - Electric Palette", 0x2d5110, 0x2d5130, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 10", 0x2d5130, 0x2d5150, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 11", 0x2d5150, 0x2d5170, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 12", 0x2d5170, 0x2d5190, indexKOF98Sprites_Ryo },
    { L"Ryo A - Extra 13", 0x2d5190, 0x2d51b0, indexKOF98Sprites_Ryo },
    { L"Ryo A - Character Select/Win Assist Portrait", 0x2d51b0, 0x2d51d0, indexKOF97Sprites_Ryo, 0x41 },
    { L"Ryo A - Lifebar Portrait", 0x2d51d0, 0x2d51f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ryo },
    { L"Ryo A - Win Portrait", 0x2e95f0, 0x2e96f0, indexKOF97Sprites_Ryo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_B[] =
{
    { L"Ryo B - Main", 0x2d51f0, 0x2d5210, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 1", 0x2d5210, 0x2d5230, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 2", 0x2d5230, 0x2d5250, indexKOF98Sprites_Ryo },
    { L"Ryo B - Max Mode", 0x2d5250, 0x2d5270, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 4", 0x2d5270, 0x2d5290, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 5", 0x2d5290, 0x2d52b0, indexKOF98Sprites_Ryo },
    { L"Ryo B - Super Trail", 0x2d52b0, 0x2d52d0, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 7", 0x2d52d0, 0x2d52f0, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 8", 0x2d52f0, 0x2d5310, indexKOF98Sprites_Ryo },
    { L"Ryo B - Electric Palette", 0x2d5310, 0x2d5330, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 10", 0x2d5330, 0x2d5350, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 11", 0x2d5350, 0x2d5370, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 12", 0x2d5370, 0x2d5390, indexKOF98Sprites_Ryo },
    { L"Ryo B - Extra 13", 0x2d5390, 0x2d53b0, indexKOF98Sprites_Ryo },
    { L"Ryo B - Character Select/Win Assist Portrait", 0x2d53b0, 0x2d53d0, indexKOF97Sprites_Ryo, 0x41 },
    { L"Ryo B - Lifebar Portrait", 0x2d53d0, 0x2d53f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ryo },
    { L"Ryo B - Win Portrait", 0x2e96f0, 0x2e97f0, indexKOF97Sprites_Ryo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_C[] =
{
    { L"Ryo C - Main", 0x2d53f0, 0x2d5410, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 1", 0x2d5410, 0x2d5430, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 2", 0x2d5430, 0x2d5450, indexKOF98Sprites_Ryo },
    { L"Ryo C - Max Mode", 0x2d5450, 0x2d5470, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 4", 0x2d5470, 0x2d5490, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 5", 0x2d5490, 0x2d54b0, indexKOF98Sprites_Ryo },
    { L"Ryo C - Super Trail", 0x2d54b0, 0x2d54d0, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 7", 0x2d54d0, 0x2d54f0, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 8", 0x2d54f0, 0x2d5510, indexKOF98Sprites_Ryo },
    { L"Ryo C - Electric Palette", 0x2d5510, 0x2d5530, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 10", 0x2d5530, 0x2d5550, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 11", 0x2d5550, 0x2d5570, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 12", 0x2d5570, 0x2d5590, indexKOF98Sprites_Ryo },
    { L"Ryo C - Extra 13", 0x2d5590, 0x2d55b0, indexKOF98Sprites_Ryo },
    { L"Ryo C - Character Select/Win Assist Portrait", 0x2d55b0, 0x2d55d0, indexKOF97Sprites_Ryo, 0x41 },
    { L"Ryo C - Lifebar Portrait", 0x2d55d0, 0x2d55f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ryo },
    { L"Ryo C - Win Portrait", 0x2e97f0, 0x2e98f0, indexKOF97Sprites_Ryo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_D[] =
{
    { L"Ryo D - Main", 0x2d55f0, 0x2d5610, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 1", 0x2d5610, 0x2d5630, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 2", 0x2d5630, 0x2d5650, indexKOF98Sprites_Ryo },
    { L"Ryo D - Max Mode", 0x2d5650, 0x2d5670, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 4", 0x2d5670, 0x2d5690, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 5", 0x2d5690, 0x2d56b0, indexKOF98Sprites_Ryo },
    { L"Ryo D - Super Trail", 0x2d56b0, 0x2d56d0, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 7", 0x2d56d0, 0x2d56f0, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 8", 0x2d56f0, 0x2d5710, indexKOF98Sprites_Ryo },
    { L"Ryo D - Electric Palette", 0x2d5710, 0x2d5730, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 10", 0x2d5730, 0x2d5750, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 11", 0x2d5750, 0x2d5770, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 12", 0x2d5770, 0x2d5790, indexKOF98Sprites_Ryo },
    { L"Ryo D - Extra 13", 0x2d5790, 0x2d57b0, indexKOF98Sprites_Ryo },
    { L"Ryo D - Character Select/Win Assist Portrait", 0x2d57b0, 0x2d57d0, indexKOF97Sprites_Ryo, 0x41 },
    { L"Ryo D - Lifebar Portrait", 0x2d57d0, 0x2d57f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ryo },
    { L"Ryo D - Win Portrait", 0x2e98f0, 0x2e99f0, indexKOF97Sprites_Ryo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_A[] =
{
    { L"Robert A - Main", 0x2d57f0, 0x2d5810, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 1", 0x2d5810, 0x2d5830, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 2", 0x2d5830, 0x2d5850, indexKOF98Sprites_Robert },
    { L"Robert A - Max Mode", 0x2d5850, 0x2d5870, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 4", 0x2d5870, 0x2d5890, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 5", 0x2d5890, 0x2d58b0, indexKOF98Sprites_Robert },
    { L"Robert A - Super Trail", 0x2d58b0, 0x2d58d0, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 7", 0x2d58d0, 0x2d58f0, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 8", 0x2d58f0, 0x2d5910, indexKOF98Sprites_Robert },
    { L"Robert A - Electric Palette", 0x2d5910, 0x2d5930, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 10", 0x2d5930, 0x2d5950, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 11", 0x2d5950, 0x2d5970, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 12", 0x2d5970, 0x2d5990, indexKOF98Sprites_Robert },
    { L"Robert A - Extra 13", 0x2d5990, 0x2d59b0, indexKOF98Sprites_Robert },
    { L"Robert A - Character Select/Win Assist Portrait", 0x2d59b0, 0x2d59d0, indexKOF97Sprites_Robert, 0x41 },
    { L"Robert A - Lifebar Portrait", 0x2d59d0, 0x2d59f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Robert },
    { L"Robert A - Win Portrait", 0x2e99f0, 0x2e9af0, indexKOF97Sprites_Robert, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_B[] =
{
    { L"Robert B - Main", 0x2d59f0, 0x2d5a10, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 1", 0x2d5a10, 0x2d5a30, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 2", 0x2d5a30, 0x2d5a50, indexKOF98Sprites_Robert },
    { L"Robert B - Max Mode", 0x2d5a50, 0x2d5a70, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 4", 0x2d5a70, 0x2d5a90, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 5", 0x2d5a90, 0x2d5ab0, indexKOF98Sprites_Robert },
    { L"Robert B - Super Trail", 0x2d5ab0, 0x2d5ad0, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 7", 0x2d5ad0, 0x2d5af0, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 8", 0x2d5af0, 0x2d5b10, indexKOF98Sprites_Robert },
    { L"Robert B - Electric Palette", 0x2d5b10, 0x2d5b30, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 10", 0x2d5b30, 0x2d5b50, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 11", 0x2d5b50, 0x2d5b70, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 12", 0x2d5b70, 0x2d5b90, indexKOF98Sprites_Robert },
    { L"Robert B - Extra 13", 0x2d5b90, 0x2d5bb0, indexKOF98Sprites_Robert },
    { L"Robert B - Character Select/Win Assist Portrait", 0x2d5bb0, 0x2d5bd0, indexKOF97Sprites_Robert, 0x41 },
    { L"Robert B - Lifebar Portrait", 0x2d5bd0, 0x2d5bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Robert },
    { L"Robert B - Win Portrait", 0x2e9af0, 0x2e9bf0, indexKOF97Sprites_Robert, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_C[] =
{
    { L"Robert C - Main", 0x2d5bf0, 0x2d5c10, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 1", 0x2d5c10, 0x2d5c30, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 2", 0x2d5c30, 0x2d5c50, indexKOF98Sprites_Robert },
    { L"Robert C - Max Mode", 0x2d5c50, 0x2d5c70, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 4", 0x2d5c70, 0x2d5c90, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 5", 0x2d5c90, 0x2d5cb0, indexKOF98Sprites_Robert },
    { L"Robert C - Super Trail", 0x2d5cb0, 0x2d5cd0, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 7", 0x2d5cd0, 0x2d5cf0, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 8", 0x2d5cf0, 0x2d5d10, indexKOF98Sprites_Robert },
    { L"Robert C - Electric Palette", 0x2d5d10, 0x2d5d30, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 10", 0x2d5d30, 0x2d5d50, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 11", 0x2d5d50, 0x2d5d70, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 12", 0x2d5d70, 0x2d5d90, indexKOF98Sprites_Robert },
    { L"Robert C - Extra 13", 0x2d5d90, 0x2d5db0, indexKOF98Sprites_Robert },
    { L"Robert C - Character Select/Win Assist Portrait", 0x2d5db0, 0x2d5dd0, indexKOF97Sprites_Robert, 0x41 },
    { L"Robert C - Lifebar Portrait", 0x2d5dd0, 0x2d5df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Robert },
    { L"Robert C - Win Portrait", 0x2e9bf0, 0x2e9cf0, indexKOF97Sprites_Robert, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_D[] =
{
    { L"Robert D - Main", 0x2d5df0, 0x2d5e10, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 1", 0x2d5e10, 0x2d5e30, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 2", 0x2d5e30, 0x2d5e50, indexKOF98Sprites_Robert },
    { L"Robert D - Max Mode", 0x2d5e50, 0x2d5e70, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 4", 0x2d5e70, 0x2d5e90, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 5", 0x2d5e90, 0x2d5eb0, indexKOF98Sprites_Robert },
    { L"Robert D - Super Trail", 0x2d5eb0, 0x2d5ed0, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 7", 0x2d5ed0, 0x2d5ef0, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 8", 0x2d5ef0, 0x2d5f10, indexKOF98Sprites_Robert },
    { L"Robert D - Electric Palette", 0x2d5f10, 0x2d5f30, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 10", 0x2d5f30, 0x2d5f50, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 11", 0x2d5f50, 0x2d5f70, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 12", 0x2d5f70, 0x2d5f90, indexKOF98Sprites_Robert },
    { L"Robert D - Extra 13", 0x2d5f90, 0x2d5fb0, indexKOF98Sprites_Robert },
    { L"Robert D - Character Select/Win Assist Portrait", 0x2d5fb0, 0x2d5fd0, indexKOF97Sprites_Robert, 0x41 },
    { L"Robert D - Lifebar Portrait", 0x2d5fd0, 0x2d5ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Robert },
    { L"Robert D - Win Portrait", 0x2e9cf0, 0x2e9df0, indexKOF97Sprites_Robert, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_A[] =
{
    { L"Yuri A - Main", 0x2d5ff0, 0x2d6010, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 1", 0x2d6010, 0x2d6030, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 2", 0x2d6030, 0x2d6050, indexKOF98Sprites_Yuri },
    { L"Yuri A - Max Mode", 0x2d6050, 0x2d6070, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 4", 0x2d6070, 0x2d6090, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 5", 0x2d6090, 0x2d60b0, indexKOF98Sprites_Yuri },
    { L"Yuri A - Super Trail", 0x2d60b0, 0x2d60d0, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 7", 0x2d60d0, 0x2d60f0, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 8", 0x2d60f0, 0x2d6110, indexKOF98Sprites_Yuri },
    { L"Yuri A - Electric Palette", 0x2d6110, 0x2d6130, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 10", 0x2d6130, 0x2d6150, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 11", 0x2d6150, 0x2d6170, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 12", 0x2d6170, 0x2d6190, indexKOF98Sprites_Yuri },
    { L"Yuri A - Extra 13", 0x2d6190, 0x2d61b0, indexKOF98Sprites_Yuri },
    { L"Yuri A - Character Select/Win Assist Portrait", 0x2d61b0, 0x2d61d0, indexKOF97Sprites_Yuri, 0x41 },
    { L"Yuri A - Lifebar Portrait", 0x2d61d0, 0x2d61f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yuri },
    { L"Yuri A - Win Portrait", 0x2e9df0, 0x2e9eb0, indexKOF97Sprites_Yuri, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_B[] =
{
    { L"Yuri B - Main", 0x2d61f0, 0x2d6210, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 1", 0x2d6210, 0x2d6230, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 2", 0x2d6230, 0x2d6250, indexKOF98Sprites_Yuri },
    { L"Yuri B - Max Mode", 0x2d6250, 0x2d6270, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 4", 0x2d6270, 0x2d6290, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 5", 0x2d6290, 0x2d62b0, indexKOF98Sprites_Yuri },
    { L"Yuri B - Super Trail", 0x2d62b0, 0x2d62d0, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 7", 0x2d62d0, 0x2d62f0, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 8", 0x2d62f0, 0x2d6310, indexKOF98Sprites_Yuri },
    { L"Yuri B - Electric Palette", 0x2d6310, 0x2d6330, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 10", 0x2d6330, 0x2d6350, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 11", 0x2d6350, 0x2d6370, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 12", 0x2d6370, 0x2d6390, indexKOF98Sprites_Yuri },
    { L"Yuri B - Extra 13", 0x2d6390, 0x2d63b0, indexKOF98Sprites_Yuri },
    { L"Yuri B - Character Select/Win Assist Portrait", 0x2d63b0, 0x2d63d0, indexKOF97Sprites_Yuri, 0x41 },
    { L"Yuri B - Lifebar Portrait", 0x2d63d0, 0x2d63f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yuri },
    { L"Yuri B - Win Portrait", 0x2e9ef0, 0x2e9fb0, indexKOF97Sprites_Yuri, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_C[] =
{
    { L"Yuri C - Main", 0x2d63f0, 0x2d6410, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 1", 0x2d6410, 0x2d6430, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 2", 0x2d6430, 0x2d6450, indexKOF98Sprites_Yuri },
    { L"Yuri C - Max Mode", 0x2d6450, 0x2d6470, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 4", 0x2d6470, 0x2d6490, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 5", 0x2d6490, 0x2d64b0, indexKOF98Sprites_Yuri },
    { L"Yuri C - Super Trail", 0x2d64b0, 0x2d64d0, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 7", 0x2d64d0, 0x2d64f0, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 8", 0x2d64f0, 0x2d6510, indexKOF98Sprites_Yuri },
    { L"Yuri C - Electric Palette", 0x2d6510, 0x2d6530, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 10", 0x2d6530, 0x2d6550, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 11", 0x2d6550, 0x2d6570, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 12", 0x2d6570, 0x2d6590, indexKOF98Sprites_Yuri },
    { L"Yuri C - Extra 13", 0x2d6590, 0x2d65b0, indexKOF98Sprites_Yuri },
    { L"Yuri C - Character Select/Win Assist Portrait", 0x2d65b0, 0x2d65d0, indexKOF97Sprites_Yuri, 0x41 },
    { L"Yuri C - Lifebar Portrait", 0x2d65d0, 0x2d65f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yuri },
    { L"Yuri C - Win Portrait", 0x2e9ff0, 0x2ea0b0, indexKOF97Sprites_Yuri, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_D[] =
{
    { L"Yuri D - Main", 0x2d65f0, 0x2d6610, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 1", 0x2d6610, 0x2d6630, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 2", 0x2d6630, 0x2d6650, indexKOF98Sprites_Yuri },
    { L"Yuri D - Max Mode", 0x2d6650, 0x2d6670, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 4", 0x2d6670, 0x2d6690, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 5", 0x2d6690, 0x2d66b0, indexKOF98Sprites_Yuri },
    { L"Yuri D - Super Trail", 0x2d66b0, 0x2d66d0, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 7", 0x2d66d0, 0x2d66f0, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 8", 0x2d66f0, 0x2d6710, indexKOF98Sprites_Yuri },
    { L"Yuri D - Electric Palette", 0x2d6710, 0x2d6730, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 10", 0x2d6730, 0x2d6750, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 11", 0x2d6750, 0x2d6770, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 12", 0x2d6770, 0x2d6790, indexKOF98Sprites_Yuri },
    { L"Yuri D - Extra 13", 0x2d6790, 0x2d67b0, indexKOF98Sprites_Yuri },
    { L"Yuri D - Character Select/Win Assist Portrait", 0x2d67b0, 0x2d67d0, indexKOF97Sprites_Yuri, 0x41 },
    { L"Yuri D - Lifebar Portrait", 0x2d67d0, 0x2d67f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yuri },
    { L"Yuri D - Win Portrait", 0x2ea0f0, 0x2ea1b0, indexKOF97Sprites_Yuri, 0x40 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_A[] =
{
    { L"Leona A - Main", 0x2d67f0, 0x2d6810, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 1", 0x2d6810, 0x2d6830, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 2", 0x2d6830, 0x2d6850, indexKOF98Sprites_Leona },
    { L"Leona A - Max Mode", 0x2d6850, 0x2d6870, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 4", 0x2d6870, 0x2d6890, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 5", 0x2d6890, 0x2d68b0, indexKOF98Sprites_Leona },
    { L"Leona A - Super Trail", 0x2d68b0, 0x2d68d0, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 7", 0x2d68d0, 0x2d68f0, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 8", 0x2d68f0, 0x2d6910, indexKOF98Sprites_Leona },
    { L"Leona A - Electric Palette", 0x2d6910, 0x2d6930, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 10", 0x2d6930, 0x2d6950, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 11", 0x2d6950, 0x2d6970, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 12", 0x2d6970, 0x2d6990, indexKOF98Sprites_Leona },
    { L"Leona A - Extra 13", 0x2d6990, 0x2d69b0, indexKOF98Sprites_Leona },
    { L"Leona A - Character Select/Win Assist Portrait", 0x2d69b0, 0x2d69d0, indexKOF97Sprites_Leona, 0x41 },
    { L"Leona A - Lifebar Portrait", 0x2d69d0, 0x2d69f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Leona },
    { L"Leona A - Win Portrait", 0x2ea1f0, 0x2ea290, indexKOF97Sprites_Leona, 0x40 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_B[] =
{
    { L"Leona B - Main", 0x2d69f0, 0x2d6a10, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 1", 0x2d6a10, 0x2d6a30, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 2", 0x2d6a30, 0x2d6a50, indexKOF98Sprites_Leona },
    { L"Leona B - Max Mode", 0x2d6a50, 0x2d6a70, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 4", 0x2d6a70, 0x2d6a90, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 5", 0x2d6a90, 0x2d6ab0, indexKOF98Sprites_Leona },
    { L"Leona B - Super Trail", 0x2d6ab0, 0x2d6ad0, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 7", 0x2d6ad0, 0x2d6af0, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 8", 0x2d6af0, 0x2d6b10, indexKOF98Sprites_Leona },
    { L"Leona B - Electric Palette", 0x2d6b10, 0x2d6b30, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 10", 0x2d6b30, 0x2d6b50, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 11", 0x2d6b50, 0x2d6b70, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 12", 0x2d6b70, 0x2d6b90, indexKOF98Sprites_Leona },
    { L"Leona B - Extra 13", 0x2d6b90, 0x2d6bb0, indexKOF98Sprites_Leona },
    { L"Leona B - Character Select/Win Assist Portrait", 0x2d6bb0, 0x2d6bd0, indexKOF97Sprites_Leona, 0x41 },
    { L"Leona B - Lifebar Portrait", 0x2d6bd0, 0x2d6bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Leona },
    { L"Leona B - Win Portrait", 0x2ea2f0, 0x2ea390, indexKOF97Sprites_Leona, 0x40 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_C[] =
{
    { L"Leona C - Main", 0x2d6bf0, 0x2d6c10, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 1", 0x2d6c10, 0x2d6c30, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 2", 0x2d6c30, 0x2d6c50, indexKOF98Sprites_Leona },
    { L"Leona C - Max Mode", 0x2d6c50, 0x2d6c70, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 4", 0x2d6c70, 0x2d6c90, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 5", 0x2d6c90, 0x2d6cb0, indexKOF98Sprites_Leona },
    { L"Leona C - Super Trail", 0x2d6cb0, 0x2d6cd0, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 7", 0x2d6cd0, 0x2d6cf0, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 8", 0x2d6cf0, 0x2d6d10, indexKOF98Sprites_Leona },
    { L"Leona C - Electric Palette", 0x2d6d10, 0x2d6d30, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 10", 0x2d6d30, 0x2d6d50, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 11", 0x2d6d50, 0x2d6d70, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 12", 0x2d6d70, 0x2d6d90, indexKOF98Sprites_Leona },
    { L"Leona C - Extra 13", 0x2d6d90, 0x2d6db0, indexKOF98Sprites_Leona },
    { L"Leona C - Character Select/Win Assist Portrait", 0x2d6db0, 0x2d6dd0, indexKOF97Sprites_Leona, 0x41 },
    { L"Leona C - Lifebar Portrait", 0x2d6dd0, 0x2d6df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Leona },
    { L"Leona C - Win Portrait", 0x2ea3f0, 0x2ea490, indexKOF97Sprites_Leona, 0x40 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_D[] =
{
    { L"Leona D - Main", 0x2d6df0, 0x2d6e10, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 1", 0x2d6e10, 0x2d6e30, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 2", 0x2d6e30, 0x2d6e50, indexKOF98Sprites_Leona },
    { L"Leona D - Max Mode", 0x2d6e50, 0x2d6e70, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 4", 0x2d6e70, 0x2d6e90, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 5", 0x2d6e90, 0x2d6eb0, indexKOF98Sprites_Leona },
    { L"Leona D - Super Trail", 0x2d6eb0, 0x2d6ed0, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 7", 0x2d6ed0, 0x2d6ef0, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 8", 0x2d6ef0, 0x2d6f10, indexKOF98Sprites_Leona },
    { L"Leona D - Electric Palette", 0x2d6f10, 0x2d6f30, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 10", 0x2d6f30, 0x2d6f50, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 11", 0x2d6f50, 0x2d6f70, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 12", 0x2d6f70, 0x2d6f90, indexKOF98Sprites_Leona },
    { L"Leona D - Extra 13", 0x2d6f90, 0x2d6fb0, indexKOF98Sprites_Leona },
    { L"Leona D - Character Select/Win Assist Portrait", 0x2d6fb0, 0x2d6fd0, indexKOF97Sprites_Leona, 0x41 },
    { L"Leona D - Lifebar Portrait", 0x2d6fd0, 0x2d6ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Leona },
    { L"Leona D - Win Portrait", 0x2ea4f0, 0x2ea590, indexKOF97Sprites_Leona, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_A[] =
{
    { L"Ralf A - Main", 0x2d6ff0, 0x2d7010, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf A - Extra 1", 0x2d7010, 0x2d7030, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf A - Extra 2", 0x2d7030, 0x2d7050, indexKOF98Sprites_Ralf },
    { L"Ralf A - Max Mode", 0x2d7050, 0x2d7070, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf A - Extra 4", 0x2d7070, 0x2d7090, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf A - Extra 5", 0x2d7090, 0x2d70b0, indexKOF98Sprites_Ralf },
    { L"Ralf A - Super Trail 1", 0x2d70b0, 0x2d70d0, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf A - Super Trail 2", 0x2d70d0, 0x2d70f0, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf A - Extra 8", 0x2d70f0, 0x2d7110, indexKOF98Sprites_Ralf },
    { L"Ralf A - Electric Palette", 0x2d7110, 0x2d7130, indexKOF98Sprites_Ralf },
    { L"Ralf A - Extra 10", 0x2d7130, 0x2d7150, indexKOF98Sprites_Ralf },
    { L"Ralf A - Extra 11", 0x2d7150, 0x2d7170, indexKOF98Sprites_Ralf },
    { L"Ralf A - Extra 12", 0x2d7170, 0x2d7190, indexKOF98Sprites_Ralf },
    { L"Ralf A - Extra 13", 0x2d7190, 0x2d71b0, indexKOF98Sprites_Ralf },
    { L"Ralf A - Character Select/Win Assist Portrait", 0x2d71b0, 0x2d71d0, indexKOF97Sprites_Ralf, 0x41 },
    { L"Ralf A - Lifebar Portrait", 0x2d71d0, 0x2d71f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ralf },
    { L"Ralf A - Win Portrait", 0x2ea5f0, 0x2ea6f0, indexKOF97Sprites_Ralf, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_B[] =
{
    { L"Ralf B - Main", 0x2d71f0, 0x2d7210, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf B - Extra 1", 0x2d7210, 0x2d7230, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf B - Extra 2", 0x2d7230, 0x2d7250, indexKOF98Sprites_Ralf },
    { L"Ralf B - Max Mode", 0x2d7250, 0x2d7270, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf B - Extra 4", 0x2d7270, 0x2d7290, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf B - Extra 5", 0x2d7290, 0x2d72b0, indexKOF98Sprites_Ralf },
    { L"Ralf B - Super Trail 1", 0x2d72b0, 0x2d72d0, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf B - Super Trail 2", 0x2d72d0, 0x2d72f0, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf B - Extra 8", 0x2d72f0, 0x2d7310, indexKOF98Sprites_Ralf },
    { L"Ralf B - Electric Palette", 0x2d7310, 0x2d7330, indexKOF98Sprites_Ralf },
    { L"Ralf B - Extra 10", 0x2d7330, 0x2d7350, indexKOF98Sprites_Ralf },
    { L"Ralf B - Extra 11", 0x2d7350, 0x2d7370, indexKOF98Sprites_Ralf },
    { L"Ralf B - Extra 12", 0x2d7370, 0x2d7390, indexKOF98Sprites_Ralf },
    { L"Ralf B - Extra 13", 0x2d7390, 0x2d73b0, indexKOF98Sprites_Ralf },
    { L"Ralf B - Character Select/Win Assist Portrait", 0x2d73b0, 0x2d73d0, indexKOF97Sprites_Ralf, 0x41 },
    { L"Ralf B - Lifebar Portrait", 0x2d73d0, 0x2d73f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ralf },
    { L"Ralf B - Win Portrait", 0x2ea6f0, 0x2ea7f0, indexKOF97Sprites_Ralf, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_C[] =
{
    { L"Ralf C - Main", 0x2d73f0, 0x2d7410, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf C - Extra 1", 0x2d7410, 0x2d7430, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf C - Extra 2", 0x2d7430, 0x2d7450, indexKOF98Sprites_Ralf },
    { L"Ralf C - Max Mode", 0x2d7450, 0x2d7470, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf C - Extra 4", 0x2d7470, 0x2d7490, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf C - Extra 5", 0x2d7490, 0x2d74b0, indexKOF98Sprites_Ralf },
    { L"Ralf C - Super Trail 1", 0x2d74b0, 0x2d74d0, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf C - Super Trail 2", 0x2d74d0, 0x2d74f0, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf C - Extra 8", 0x2d74f0, 0x2d7510, indexKOF98Sprites_Ralf },
    { L"Ralf C - Electric Palette", 0x2d7510, 0x2d7530, indexKOF98Sprites_Ralf },
    { L"Ralf C - Extra 10", 0x2d7530, 0x2d7550, indexKOF98Sprites_Ralf },
    { L"Ralf C - Extra 11", 0x2d7550, 0x2d7570, indexKOF98Sprites_Ralf },
    { L"Ralf C - Extra 12", 0x2d7570, 0x2d7590, indexKOF98Sprites_Ralf },
    { L"Ralf C - Extra 13", 0x2d7590, 0x2d75b0, indexKOF98Sprites_Ralf },
    { L"Ralf C - Character Select/Win Assist Portrait", 0x2d75b0, 0x2d75d0, indexKOF97Sprites_Ralf, 0x41 },
    { L"Ralf C - Lifebar Portrait", 0x2d75d0, 0x2d75f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ralf },
    { L"Ralf C - Win Portrait", 0x2ea7f0, 0x2ea8f0, indexKOF97Sprites_Ralf, 0x40 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_D[] =
{
    { L"Ralf D - Main", 0x2d75f0, 0x2d7610, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf D - Extra 1", 0x2d7610, 0x2d7630, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf D - Extra 2", 0x2d7630, 0x2d7650, indexKOF98Sprites_Ralf },
    { L"Ralf D - Max Mode", 0x2d7650, 0x2d7670, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf D - Extra 4", 0x2d7670, 0x2d7690, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf D - Extra 5", 0x2d7690, 0x2d76b0, indexKOF98Sprites_Ralf },
    { L"Ralf D - Super Trail 1", 0x2d76b0, 0x2d76d0, indexKOF98Sprites_Ralf, 0x00, &pairNext },
    { L"Ralf D - Super Trail 2", 0x2d76d0, 0x2d76f0, indexKOF98Sprites_Ralf, 0x01 },
    { L"Ralf D - Extra 8", 0x2d76f0, 0x2d7710, indexKOF98Sprites_Ralf },
    { L"Ralf D - Electric Palette", 0x2d7710, 0x2d7730, indexKOF98Sprites_Ralf },
    { L"Ralf D - Extra 10", 0x2d7730, 0x2d7750, indexKOF98Sprites_Ralf },
    { L"Ralf D - Extra 11", 0x2d7750, 0x2d7770, indexKOF98Sprites_Ralf },
    { L"Ralf D - Extra 12", 0x2d7770, 0x2d7790, indexKOF98Sprites_Ralf },
    { L"Ralf D - Extra 13", 0x2d7790, 0x2d77b0, indexKOF98Sprites_Ralf },
    { L"Ralf D - Character Select/Win Assist Portrait", 0x2d77b0, 0x2d77d0, indexKOF97Sprites_Ralf, 0x41 },
    { L"Ralf D - Lifebar Portrait", 0x2d77d0, 0x2d77f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Ralf },
    { L"Ralf D - Win Portrait", 0x2ea8f0, 0x2ea9f0, indexKOF97Sprites_Ralf, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_A[] =
{
    { L"Clark A - Main", 0x2d77f0, 0x2d7810, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark A - Extra 1", 0x2d7810, 0x2d7830, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark A - Extra 2", 0x2d7830, 0x2d7850, indexKOF98Sprites_Clark },
    { L"Clark A - Max Mode", 0x2d7850, 0x2d7870, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark A - Extra 4", 0x2d7870, 0x2d7890, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark A - Extra 5", 0x2d7890, 0x2d78b0, indexKOF98Sprites_Clark },
    { L"Clark A - Super Trail 1", 0x2d78b0, 0x2d78d0, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark A - Super Trail 2", 0x2d78d0, 0x2d78f0, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark A - Extra 8", 0x2d78f0, 0x2d7910, indexKOF98Sprites_Clark },
    { L"Clark A - Electric Palette", 0x2d7910, 0x2d7930, indexKOF98Sprites_Clark },
    { L"Clark A - Extra 10", 0x2d7930, 0x2d7950, indexKOF98Sprites_Clark },
    { L"Clark A - Extra 11", 0x2d7950, 0x2d7970, indexKOF98Sprites_Clark },
    { L"Clark A - Extra 12", 0x2d7970, 0x2d7990, indexKOF98Sprites_Clark },
    { L"Clark A - Extra 13", 0x2d7990, 0x2d79b0, indexKOF98Sprites_Clark },
    { L"Clark A - Character Select/Win Assist Portrait", 0x2d79b0, 0x2d79d0, indexKOF97Sprites_Clark, 0x41 },
    { L"Clark A - Lifebar Portrait", 0x2d79d0, 0x2d79f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Clark },
    { L"Clark A - Win Portrait", 0x2ea9f0, 0x2eaab0, indexKOF97Sprites_Clark, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_B[] =
{
    { L"Clark B - Main", 0x2d79f0, 0x2d7a10, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark B - Extra 1", 0x2d7a10, 0x2d7a30, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark B - Extra 2", 0x2d7a30, 0x2d7a50, indexKOF98Sprites_Clark },
    { L"Clark B - Max Mode", 0x2d7a50, 0x2d7a70, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark B - Extra 4", 0x2d7a70, 0x2d7a90, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark B - Extra 5", 0x2d7a90, 0x2d7ab0, indexKOF98Sprites_Clark },
    { L"Clark B - Super Trail 1", 0x2d7ab0, 0x2d7ad0, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark B - Super Trail 2", 0x2d7ad0, 0x2d7af0, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark B - Extra 8", 0x2d7af0, 0x2d7b10, indexKOF98Sprites_Clark },
    { L"Clark B - Electric Palette", 0x2d7b10, 0x2d7b30, indexKOF98Sprites_Clark },
    { L"Clark B - Extra 10", 0x2d7b30, 0x2d7b50, indexKOF98Sprites_Clark },
    { L"Clark B - Extra 11", 0x2d7b50, 0x2d7b70, indexKOF98Sprites_Clark },
    { L"Clark B - Extra 12", 0x2d7b70, 0x2d7b90, indexKOF98Sprites_Clark },
    { L"Clark B - Extra 13", 0x2d7b90, 0x2d7bb0, indexKOF98Sprites_Clark },
    { L"Clark B - Character Select/Win Assist Portrait", 0x2d7bb0, 0x2d7bd0, indexKOF97Sprites_Clark, 0x41 },
    { L"Clark B - Lifebar Portrait", 0x2d7bd0, 0x2d7bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Clark },
    { L"Clark B - Win Portrait", 0x2eaaf0, 0x2eabb0, indexKOF97Sprites_Clark, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_C[] =
{
    { L"Clark C - Main", 0x2d7bf0, 0x2d7c10, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark C - Extra 1", 0x2d7c10, 0x2d7c30, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark C - Extra 2", 0x2d7c30, 0x2d7c50, indexKOF98Sprites_Clark },
    { L"Clark C - Max Mode", 0x2d7c50, 0x2d7c70, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark C - Extra 4", 0x2d7c70, 0x2d7c90, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark C - Extra 5", 0x2d7c90, 0x2d7cb0, indexKOF98Sprites_Clark },
    { L"Clark C - Super Trail 1", 0x2d7cb0, 0x2d7cd0, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark C - Super Trail 2", 0x2d7cd0, 0x2d7cf0, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark C - Extra 8", 0x2d7cf0, 0x2d7d10, indexKOF98Sprites_Clark },
    { L"Clark C - Electric Palette", 0x2d7d10, 0x2d7d30, indexKOF98Sprites_Clark },
    { L"Clark C - Extra 10", 0x2d7d30, 0x2d7d50, indexKOF98Sprites_Clark },
    { L"Clark C - Extra 11", 0x2d7d50, 0x2d7d70, indexKOF98Sprites_Clark },
    { L"Clark C - Extra 12", 0x2d7d70, 0x2d7d90, indexKOF98Sprites_Clark },
    { L"Clark C - Extra 13", 0x2d7d90, 0x2d7db0, indexKOF98Sprites_Clark },
    { L"Clark C - Character Select/Win Assist Portrait", 0x2d7db0, 0x2d7dd0, indexKOF97Sprites_Clark, 0x41 },
    { L"Clark C - Lifebar Portrait", 0x2d7dd0, 0x2d7df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Clark },
    { L"Clark C - Win Portrait", 0x2eabf0, 0x2eacb0, indexKOF97Sprites_Clark, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_D[] =
{
    { L"Clark D - Main", 0x2d7df0, 0x2d7e10, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark D - Extra 1", 0x2d7e10, 0x2d7e30, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark D - Extra 2", 0x2d7e30, 0x2d7e50, indexKOF98Sprites_Clark },
    { L"Clark D - Max Mode", 0x2d7e50, 0x2d7e70, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark D - Extra 4", 0x2d7e70, 0x2d7e90, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark D - Extra 5", 0x2d7e90, 0x2d7eb0, indexKOF98Sprites_Clark },
    { L"Clark D - Super Trail 1", 0x2d7eb0, 0x2d7ed0, indexKOF98Sprites_Clark, 0x00, &pairNext },
    { L"Clark D - Super Trail 2", 0x2d7ed0, 0x2d7ef0, indexKOF98Sprites_Clark, 0x01 },
    { L"Clark D - Extra 8", 0x2d7ef0, 0x2d7f10, indexKOF98Sprites_Clark },
    { L"Clark D - Electric Palette", 0x2d7f10, 0x2d7f30, indexKOF98Sprites_Clark },
    { L"Clark D - Extra 10", 0x2d7f30, 0x2d7f50, indexKOF98Sprites_Clark },
    { L"Clark D - Extra 11", 0x2d7f50, 0x2d7f70, indexKOF98Sprites_Clark },
    { L"Clark D - Extra 12", 0x2d7f70, 0x2d7f90, indexKOF98Sprites_Clark },
    { L"Clark D - Extra 13", 0x2d7f90, 0x2d7fb0, indexKOF98Sprites_Clark },
    { L"Clark D - Character Select/Win Assist Portrait", 0x2d7fb0, 0x2d7fd0, indexKOF97Sprites_Clark, 0x41 },
    { L"Clark D - Lifebar Portrait", 0x2d7fd0, 0x2d7ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Clark },
    { L"Clark D - Win Portrait", 0x2eacf0, 0x2eadb0, indexKOF97Sprites_Clark, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ATHENA_PALETTES_A[] =
{
    { L"Athena A - Main", 0x2d7ff0, 0x2d8010, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 1", 0x2d8010, 0x2d8030, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 2", 0x2d8030, 0x2d8050, indexKOF97Sprites_Athena },
    { L"Athena A - Max Mode", 0x2d8050, 0x2d8070, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 4", 0x2d8070, 0x2d8090, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 5", 0x2d8090, 0x2d80b0, indexKOF97Sprites_Athena },
    { L"Athena A - Super Trail", 0x2d80b0, 0x2d80d0, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 7", 0x2d80d0, 0x2d80f0, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 8", 0x2d80f0, 0x2d8110, indexKOF97Sprites_Athena },
    { L"Athena A - Electric Palette", 0x2d8110, 0x2d8130, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 10", 0x2d8130, 0x2d8150, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 11", 0x2d8150, 0x2d8170, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 12", 0x2d8170, 0x2d8190, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 13", 0x2d8190, 0x2d81b0, indexKOF97Sprites_Athena },
    { L"Athena A - Character Select/Win Assist Portrait", 0x2d81b0, 0x2d81d0, indexKOF97Sprites_Athena, 0x41 },
    { L"Athena A - Lifebar Portrait", 0x2d81d0, 0x2d81f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Athena },
    { L"Athena A - Win Portrait", 0x2eadf0, 0x2eaef0, indexKOF97Sprites_Athena, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ATHENA_PALETTES_B[] =
{
    { L"Athena B - Main", 0x2d81f0, 0x2d8210, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 1", 0x2d8210, 0x2d8230, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 2", 0x2d8230, 0x2d8250, indexKOF97Sprites_Athena },
    { L"Athena B - Max Mode", 0x2d8250, 0x2d8270, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 4", 0x2d8270, 0x2d8290, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 5", 0x2d8290, 0x2d82b0, indexKOF97Sprites_Athena },
    { L"Athena B - Super Trail", 0x2d82b0, 0x2d82d0, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 7", 0x2d82d0, 0x2d82f0, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 8", 0x2d82f0, 0x2d8310, indexKOF97Sprites_Athena },
    { L"Athena B - Electric Palette", 0x2d8310, 0x2d8330, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 10", 0x2d8330, 0x2d8350, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 11", 0x2d8350, 0x2d8370, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 12", 0x2d8370, 0x2d8390, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 13", 0x2d8390, 0x2d83b0, indexKOF97Sprites_Athena },
    { L"Athena B - Character Select/Win Assist Portrait", 0x2d83b0, 0x2d83d0, indexKOF97Sprites_Athena, 0x41 },
    { L"Athena B - Lifebar Portrait", 0x2d83d0, 0x2d83f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Athena },
    { L"Athena B - Win Portrait", 0x2eaef0, 0x2eaff0, indexKOF97Sprites_Athena, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ATHENA_PALETTES_C[] =
{
    { L"Athena C - Main", 0x2d83f0, 0x2d8410, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 1", 0x2d8410, 0x2d8430, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 2", 0x2d8430, 0x2d8450, indexKOF97Sprites_Athena },
    { L"Athena C - Max Mode", 0x2d8450, 0x2d8470, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 4", 0x2d8470, 0x2d8490, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 5", 0x2d8490, 0x2d84b0, indexKOF97Sprites_Athena },
    { L"Athena C - Super Trail", 0x2d84b0, 0x2d84d0, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 7", 0x2d84d0, 0x2d84f0, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 8", 0x2d84f0, 0x2d8510, indexKOF97Sprites_Athena },
    { L"Athena C - Electric Palette", 0x2d8510, 0x2d8530, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 10", 0x2d8530, 0x2d8550, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 11", 0x2d8550, 0x2d8570, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 12", 0x2d8570, 0x2d8590, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 13", 0x2d8590, 0x2d85b0, indexKOF97Sprites_Athena },
    { L"Athena C - Character Select/Win Assist Portrait", 0x2d85b0, 0x2d85d0, indexKOF97Sprites_Athena, 0x41 },
    { L"Athena C - Lifebar Portrait", 0x2d85d0, 0x2d85f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Athena },
    { L"Athena C - Win Portrait", 0x2eaff0, 0x2eb0f0, indexKOF97Sprites_Athena, 0x40 },
};

const sGame_PaletteDataset KOF97_A_ATHENA_PALETTES_D[] =
{
    { L"Athena D - Main", 0x2d85f0, 0x2d8610, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 1", 0x2d8610, 0x2d8630, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 2", 0x2d8630, 0x2d8650, indexKOF97Sprites_Athena },
    { L"Athena D - Max Mode", 0x2d8650, 0x2d8670, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 4", 0x2d8670, 0x2d8690, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 5", 0x2d8690, 0x2d86b0, indexKOF97Sprites_Athena },
    { L"Athena D - Super Trail", 0x2d86b0, 0x2d86d0, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 7", 0x2d86d0, 0x2d86f0, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 8", 0x2d86f0, 0x2d8710, indexKOF97Sprites_Athena },
    { L"Athena D - Electric Palette", 0x2d8710, 0x2d8730, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 10", 0x2d8730, 0x2d8750, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 11", 0x2d8750, 0x2d8770, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 12", 0x2d8770, 0x2d8790, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 13", 0x2d8790, 0x2d87b0, indexKOF97Sprites_Athena },
    { L"Athena D - Character Select/Win Assist Portrait", 0x2d87b0, 0x2d87d0, indexKOF97Sprites_Athena, 0x41 },
    { L"Athena D - Lifebar Portrait", 0x2d87d0, 0x2d87f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Athena },
    { L"Athena D - Win Portrait", 0x2eb0f0, 0x2eb1f0, indexKOF97Sprites_Athena, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_A[] =
{
    { L"Kensou A - Main", 0x2d87f0, 0x2d8810, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 1", 0x2d8810, 0x2d8830, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 2", 0x2d8830, 0x2d8850, indexKOF98Sprites_Kensou },
    { L"Kensou A - Max Mode", 0x2d8850, 0x2d8870, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 4", 0x2d8870, 0x2d8890, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 5", 0x2d8890, 0x2d88b0, indexKOF98Sprites_Kensou },
    { L"Kensou A - Super Trail", 0x2d88b0, 0x2d88d0, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 7", 0x2d88d0, 0x2d88f0, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 8", 0x2d88f0, 0x2d8910, indexKOF98Sprites_Kensou },
    { L"Kensou A - Electric Palette", 0x2d8910, 0x2d8930, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 10", 0x2d8930, 0x2d8950, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 11", 0x2d8950, 0x2d8970, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 12", 0x2d8970, 0x2d8990, indexKOF98Sprites_Kensou },
    { L"Kensou A - Extra 13", 0x2d8990, 0x2d89b0, indexKOF98Sprites_Kensou },
    { L"Kensou A - Character Select/Win Assist Portrait", 0x2d89b0, 0x2d89d0, indexKOF97Sprites_Kensou, 0x41 },
    { L"Kensou A - Lifebar Portrait", 0x2d89d0, 0x2d89f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kensou },
    { L"Kensou A - Win Portrait", 0x2eb1f0, 0x2eb290, indexKOF97Sprites_Kensou, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_B[] =
{
    { L"Kensou B - Main", 0x2d89f0, 0x2d8a10, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 1", 0x2d8a10, 0x2d8a30, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 2", 0x2d8a30, 0x2d8a50, indexKOF98Sprites_Kensou },
    { L"Kensou B - Max Mode", 0x2d8a50, 0x2d8a70, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 4", 0x2d8a70, 0x2d8a90, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 5", 0x2d8a90, 0x2d8ab0, indexKOF98Sprites_Kensou },
    { L"Kensou B - Super Trail", 0x2d8ab0, 0x2d8ad0, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 7", 0x2d8ad0, 0x2d8af0, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 8", 0x2d8af0, 0x2d8b10, indexKOF98Sprites_Kensou },
    { L"Kensou B - Electric Palette", 0x2d8b10, 0x2d8b30, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 10", 0x2d8b30, 0x2d8b50, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 11", 0x2d8b50, 0x2d8b70, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 12", 0x2d8b70, 0x2d8b90, indexKOF98Sprites_Kensou },
    { L"Kensou B - Extra 13", 0x2d8b90, 0x2d8bb0, indexKOF98Sprites_Kensou },
    { L"Kensou B - Character Select/Win Assist Portrait", 0x2d8bb0, 0x2d8bd0, indexKOF97Sprites_Kensou, 0x41 },
    { L"Kensou B - Lifebar Portrait", 0x2d8bd0, 0x2d8bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kensou },
    { L"Kensou B - Win Portrait", 0x2eb2f0, 0x2eb390, indexKOF97Sprites_Kensou, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_C[] =
{
    { L"Kensou C - Main", 0x2d8bf0, 0x2d8c10, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 1", 0x2d8c10, 0x2d8c30, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 2", 0x2d8c30, 0x2d8c50, indexKOF98Sprites_Kensou },
    { L"Kensou C - Max Mode", 0x2d8c50, 0x2d8c70, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 4", 0x2d8c70, 0x2d8c90, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 5", 0x2d8c90, 0x2d8cb0, indexKOF98Sprites_Kensou },
    { L"Kensou C - Super Trail", 0x2d8cb0, 0x2d8cd0, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 7", 0x2d8cd0, 0x2d8cf0, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 8", 0x2d8cf0, 0x2d8d10, indexKOF98Sprites_Kensou },
    { L"Kensou C - Electric Palette", 0x2d8d10, 0x2d8d30, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 10", 0x2d8d30, 0x2d8d50, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 11", 0x2d8d50, 0x2d8d70, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 12", 0x2d8d70, 0x2d8d90, indexKOF98Sprites_Kensou },
    { L"Kensou C - Extra 13", 0x2d8d90, 0x2d8db0, indexKOF98Sprites_Kensou },
    { L"Kensou C - Character Select/Win Assist Portrait", 0x2d8db0, 0x2d8dd0, indexKOF97Sprites_Kensou, 0x41 },
    { L"Kensou C - Lifebar Portrait", 0x2d8dd0, 0x2d8df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kensou },
    { L"Kensou C - Win Portrait", 0x2eb3f0, 0x2eb490, indexKOF97Sprites_Kensou, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_D[] =
{
    { L"Kensou D - Main", 0x2d8df0, 0x2d8e10, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 1", 0x2d8e10, 0x2d8e30, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 2", 0x2d8e30, 0x2d8e50, indexKOF98Sprites_Kensou },
    { L"Kensou D - Max Mode", 0x2d8e50, 0x2d8e70, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 4", 0x2d8e70, 0x2d8e90, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 5", 0x2d8e90, 0x2d8eb0, indexKOF98Sprites_Kensou },
    { L"Kensou D - Super Trail", 0x2d8eb0, 0x2d8ed0, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 7", 0x2d8ed0, 0x2d8ef0, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 8", 0x2d8ef0, 0x2d8f10, indexKOF98Sprites_Kensou },
    { L"Kensou D - Electric Palette", 0x2d8f10, 0x2d8f30, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 10", 0x2d8f30, 0x2d8f50, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 11", 0x2d8f50, 0x2d8f70, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 12", 0x2d8f70, 0x2d8f90, indexKOF98Sprites_Kensou },
    { L"Kensou D - Extra 13", 0x2d8f90, 0x2d8fb0, indexKOF98Sprites_Kensou },
    { L"Kensou D - Character Select/Win Assist Portrait", 0x2d8fb0, 0x2d8fd0, indexKOF97Sprites_Kensou, 0x41 },
    { L"Kensou D - Lifebar Portrait", 0x2d8fd0, 0x2d8ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kensou },
    { L"Kensou D - Win Portrait", 0x2eb4f0, 0x2eb590, indexKOF97Sprites_Kensou, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_A[] =
{
    { L"Chin A - Main", 0x2d8ff0, 0x2d9010, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 1", 0x2d9010, 0x2d9030, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 2", 0x2d9030, 0x2d9050, indexKOF98Sprites_Chin },
    { L"Chin A - Max Mode", 0x2d9050, 0x2d9070, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 4", 0x2d9070, 0x2d9090, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 5", 0x2d9090, 0x2d90b0, indexKOF98Sprites_Chin },
    { L"Chin A - Super Trail", 0x2d90b0, 0x2d90d0, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 7", 0x2d90d0, 0x2d90f0, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 8", 0x2d90f0, 0x2d9110, indexKOF98Sprites_Chin },
    { L"Chin A - Electric Palette", 0x2d9110, 0x2d9130, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 10", 0x2d9130, 0x2d9150, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 11", 0x2d9150, 0x2d9170, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 12", 0x2d9170, 0x2d9190, indexKOF98Sprites_Chin },
    { L"Chin A - Extra 13", 0x2d9190, 0x2d91b0, indexKOF98Sprites_Chin },
    { L"Chin A - Character Select/Win Assist Portrait", 0x2d91b0, 0x2d91d0, indexKOF97Sprites_Chin, 0x41 },
    { L"Chin A - Lifebar Portrait", 0x2d91d0, 0x2d91f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chin },
    { L"Chin A - Win Portrait", 0x2eb5f0, 0x2eb670, indexKOF97Sprites_Chin, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_B[] =
{
    { L"Chin B - Main", 0x2d91f0, 0x2d9210, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 1", 0x2d9210, 0x2d9230, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 2", 0x2d9230, 0x2d9250, indexKOF98Sprites_Chin },
    { L"Chin B - Max Mode", 0x2d9250, 0x2d9270, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 4", 0x2d9270, 0x2d9290, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 5", 0x2d9290, 0x2d92b0, indexKOF98Sprites_Chin },
    { L"Chin B - Super Trail", 0x2d92b0, 0x2d92d0, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 7", 0x2d92d0, 0x2d92f0, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 8", 0x2d92f0, 0x2d9310, indexKOF98Sprites_Chin },
    { L"Chin B - Electric Palette", 0x2d9310, 0x2d9330, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 10", 0x2d9330, 0x2d9350, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 11", 0x2d9350, 0x2d9370, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 12", 0x2d9370, 0x2d9390, indexKOF98Sprites_Chin },
    { L"Chin B - Extra 13", 0x2d9390, 0x2d93b0, indexKOF98Sprites_Chin },
    { L"Chin B - Character Select/Win Assist Portrait", 0x2d93b0, 0x2d93d0, indexKOF97Sprites_Chin, 0x41 },
    { L"Chin B - Lifebar Portrait", 0x2d93d0, 0x2d93f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chin },
    { L"Chin B - Win Portrait", 0x2eb6f0, 0x2eb770, indexKOF97Sprites_Chin, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_C[] =
{
    { L"Chin C - Main", 0x2d93f0, 0x2d9410, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 1", 0x2d9410, 0x2d9430, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 2", 0x2d9430, 0x2d9450, indexKOF98Sprites_Chin },
    { L"Chin C - Max Mode", 0x2d9450, 0x2d9470, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 4", 0x2d9470, 0x2d9490, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 5", 0x2d9490, 0x2d94b0, indexKOF98Sprites_Chin },
    { L"Chin C - Super Trail", 0x2d94b0, 0x2d94d0, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 7", 0x2d94d0, 0x2d94f0, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 8", 0x2d94f0, 0x2d9510, indexKOF98Sprites_Chin },
    { L"Chin C - Electric Palette", 0x2d9510, 0x2d9530, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 10", 0x2d9530, 0x2d9550, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 11", 0x2d9550, 0x2d9570, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 12", 0x2d9570, 0x2d9590, indexKOF98Sprites_Chin },
    { L"Chin C - Extra 13", 0x2d9590, 0x2d95b0, indexKOF98Sprites_Chin },
    { L"Chin C - Character Select/Win Assist Portrait", 0x2d95b0, 0x2d95d0, indexKOF97Sprites_Chin, 0x41 },
    { L"Chin C - Lifebar Portrait", 0x2d95d0, 0x2d95f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chin },
    { L"Chin C - Win Portrait", 0x2eb7f0, 0x2eb870, indexKOF97Sprites_Chin, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_D[] =
{
    { L"Chin D - Main", 0x2d95f0, 0x2d9610, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 1", 0x2d9610, 0x2d9630, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 2", 0x2d9630, 0x2d9650, indexKOF98Sprites_Chin },
    { L"Chin D - Max Mode", 0x2d9650, 0x2d9670, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 4", 0x2d9670, 0x2d9690, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 5", 0x2d9690, 0x2d96b0, indexKOF98Sprites_Chin },
    { L"Chin D - Super Trail", 0x2d96b0, 0x2d96d0, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 7", 0x2d96d0, 0x2d96f0, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 8", 0x2d96f0, 0x2d9710, indexKOF98Sprites_Chin },
    { L"Chin D - Electric Palette", 0x2d9710, 0x2d9730, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 10", 0x2d9730, 0x2d9750, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 11", 0x2d9750, 0x2d9770, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 12", 0x2d9770, 0x2d9790, indexKOF98Sprites_Chin },
    { L"Chin D - Extra 13", 0x2d9790, 0x2d97b0, indexKOF98Sprites_Chin },
    { L"Chin D - Character Select/Win Assist Portrait", 0x2d97b0, 0x2d97d0, indexKOF97Sprites_Chin, 0x41 },
    { L"Chin D - Lifebar Portrait", 0x2d97d0, 0x2d97f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chin },
    { L"Chin D - Win Portrait", 0x2eb8f0, 0x2eb970, indexKOF97Sprites_Chin, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_A[] =
{
    { L"Chizuru A - Main", 0x2d97f0, 0x2d9810, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 1", 0x2d9810, 0x2d9830, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 2", 0x2d9830, 0x2d9850, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Max Mode", 0x2d9850, 0x2d9870, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 4", 0x2d9870, 0x2d9890, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 5", 0x2d9890, 0x2d98b0, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Super Trail", 0x2d98b0, 0x2d98d0, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 7", 0x2d98d0, 0x2d98f0, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 8", 0x2d98f0, 0x2d9910, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Electric Palette", 0x2d9910, 0x2d9930, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 10", 0x2d9930, 0x2d9950, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 11", 0x2d9950, 0x2d9970, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 12", 0x2d9970, 0x2d9990, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Extra 13", 0x2d9990, 0x2d99b0, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Character Select/Win Assist Portrait", 0x2d99b0, 0x2d99d0, indexKOF97Sprites_Chizuru, 0x41 },
    { L"Chizuru A - Lifebar Portrait", 0x2d99d0, 0x2d99f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chizuru },
    { L"Chizuru A - Win Portrait", 0x2eb9f0, 0x2eba90, indexKOF97Sprites_Chizuru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_B[] =
{
    { L"Chizuru B - Main", 0x2d99f0, 0x2d9a10, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 1", 0x2d9a10, 0x2d9a30, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 2", 0x2d9a30, 0x2d9a50, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Max Mode", 0x2d9a50, 0x2d9a70, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 4", 0x2d9a70, 0x2d9a90, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 5", 0x2d9a90, 0x2d9ab0, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Super Trail", 0x2d9ab0, 0x2d9ad0, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 7", 0x2d9ad0, 0x2d9af0, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 8", 0x2d9af0, 0x2d9b10, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Electric Palette", 0x2d9b10, 0x2d9b30, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 10", 0x2d9b30, 0x2d9b50, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 11", 0x2d9b50, 0x2d9b70, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 12", 0x2d9b70, 0x2d9b90, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Extra 13", 0x2d9b90, 0x2d9bb0, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Character Select/Win Assist Portrait", 0x2d9bb0, 0x2d9bd0, indexKOF97Sprites_Chizuru, 0x41 },
    { L"Chizuru B - Lifebar Portrait", 0x2d9bd0, 0x2d9bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chizuru },
    { L"Chizuru B - Win Portrait", 0x2ebaf0, 0x2ebb90, indexKOF97Sprites_Chizuru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_C[] =
{
    { L"Chizuru C - Main", 0x2d9bf0, 0x2d9c10, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 1", 0x2d9c10, 0x2d9c30, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 2", 0x2d9c30, 0x2d9c50, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Max Mode", 0x2d9c50, 0x2d9c70, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 4", 0x2d9c70, 0x2d9c90, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 5", 0x2d9c90, 0x2d9cb0, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Super Trail", 0x2d9cb0, 0x2d9cd0, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 7", 0x2d9cd0, 0x2d9cf0, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 8", 0x2d9cf0, 0x2d9d10, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Electric Palette", 0x2d9d10, 0x2d9d30, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 10", 0x2d9d30, 0x2d9d50, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 11", 0x2d9d50, 0x2d9d70, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 12", 0x2d9d70, 0x2d9d90, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Extra 13", 0x2d9d90, 0x2d9db0, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Character Select/Win Assist Portrait", 0x2d9db0, 0x2d9dd0, indexKOF97Sprites_Chizuru, 0x41 },
    { L"Chizuru C - Lifebar Portrait", 0x2d9dd0, 0x2d9df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chizuru },
    { L"Chizuru C - Win Portrait", 0x2ebbf0, 0x2ebc90, indexKOF97Sprites_Chizuru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_D[] =
{
    { L"Chizuru D - Main", 0x2d9df0, 0x2d9e10, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 1", 0x2d9e10, 0x2d9e30, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 2", 0x2d9e30, 0x2d9e50, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Max Mode", 0x2d9e50, 0x2d9e70, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 4", 0x2d9e70, 0x2d9e90, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 5", 0x2d9e90, 0x2d9eb0, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Super Trail", 0x2d9eb0, 0x2d9ed0, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 7", 0x2d9ed0, 0x2d9ef0, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 8", 0x2d9ef0, 0x2d9f10, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Electric Palette", 0x2d9f10, 0x2d9f30, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 10", 0x2d9f30, 0x2d9f50, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 11", 0x2d9f50, 0x2d9f70, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 12", 0x2d9f70, 0x2d9f90, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Extra 13", 0x2d9f90, 0x2d9fb0, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Character Select/Win Assist Portrait", 0x2d9fb0, 0x2d9fd0, indexKOF97Sprites_Chizuru, 0x41 },
    { L"Chizuru D - Lifebar Portrait", 0x2d9fd0, 0x2d9ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chizuru },
    { L"Chizuru D - Win Portrait", 0x2ebcf0, 0x2ebd90, indexKOF97Sprites_Chizuru, 0x40 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_A[] =
{
    { L"Mai A - Main", 0x2d9ff0, 0x2da010, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 1", 0x2da010, 0x2da030, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 2", 0x2da030, 0x2da050, indexKOF98Sprites_Mai },
    { L"Mai A - Max Mode", 0x2da050, 0x2da070, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 4", 0x2da070, 0x2da090, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 5", 0x2da090, 0x2da0b0, indexKOF98Sprites_Mai },
    { L"Mai A - Super Trail", 0x2da0b0, 0x2da0d0, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 7", 0x2da0d0, 0x2da0f0, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 8", 0x2da0f0, 0x2da110, indexKOF98Sprites_Mai },
    { L"Mai A - Electric Palette", 0x2da110, 0x2da130, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 10", 0x2da130, 0x2da150, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 11", 0x2da150, 0x2da170, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 12", 0x2da170, 0x2da190, indexKOF98Sprites_Mai },
    { L"Mai A - Extra 13", 0x2da190, 0x2da1b0, indexKOF98Sprites_Mai },
    { L"Mai A - Character Select/Win Assist Portrait", 0x2da1b0, 0x2da1d0, indexKOF97Sprites_Mai, 0x41 },
    { L"Mai A - Lifebar Portrait", 0x2da1d0, 0x2da1f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Mai },
    { L"Mai A - Win Portrait", 0x2ebdf0, 0x2ebeb0, indexKOF97Sprites_Mai, 0x40 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_B[] =
{
    { L"Mai B - Main", 0x2da1f0, 0x2da210, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 1", 0x2da210, 0x2da230, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 2", 0x2da230, 0x2da250, indexKOF98Sprites_Mai },
    { L"Mai B - Max Mode", 0x2da250, 0x2da270, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 4", 0x2da270, 0x2da290, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 5", 0x2da290, 0x2da2b0, indexKOF98Sprites_Mai },
    { L"Mai B - Super Trail", 0x2da2b0, 0x2da2d0, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 7", 0x2da2d0, 0x2da2f0, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 8", 0x2da2f0, 0x2da310, indexKOF98Sprites_Mai },
    { L"Mai B - Electric Palette", 0x2da310, 0x2da330, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 10", 0x2da330, 0x2da350, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 11", 0x2da350, 0x2da370, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 12", 0x2da370, 0x2da390, indexKOF98Sprites_Mai },
    { L"Mai B - Extra 13", 0x2da390, 0x2da3b0, indexKOF98Sprites_Mai },
    { L"Mai B - Character Select/Win Assist Portrait", 0x2da3b0, 0x2da3d0, indexKOF97Sprites_Mai, 0x41 },
    { L"Mai B - Lifebar Portrait", 0x2da3d0, 0x2da3f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Mai },
    { L"Mai B - Win Portrait", 0x2ebef0, 0x2ebfb0, indexKOF97Sprites_Mai, 0x40 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_C[] =
{
    { L"Mai C - Main", 0x2da3f0, 0x2da410, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 1", 0x2da410, 0x2da430, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 2", 0x2da430, 0x2da450, indexKOF98Sprites_Mai },
    { L"Mai C - Max Mode", 0x2da450, 0x2da470, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 4", 0x2da470, 0x2da490, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 5", 0x2da490, 0x2da4b0, indexKOF98Sprites_Mai },
    { L"Mai C - Super Trail", 0x2da4b0, 0x2da4d0, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 7", 0x2da4d0, 0x2da4f0, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 8", 0x2da4f0, 0x2da510, indexKOF98Sprites_Mai },
    { L"Mai C - Electric Palette", 0x2da510, 0x2da530, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 10", 0x2da530, 0x2da550, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 11", 0x2da550, 0x2da570, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 12", 0x2da570, 0x2da590, indexKOF98Sprites_Mai },
    { L"Mai C - Extra 13", 0x2da590, 0x2da5b0, indexKOF98Sprites_Mai },
    { L"Mai C - Character Select/Win Assist Portrait", 0x2da5b0, 0x2da5d0, indexKOF97Sprites_Mai, 0x41 },
    { L"Mai C - Lifebar Portrait", 0x2da5d0, 0x2da5f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Mai },
    { L"Mai C - Win Portrait", 0x2ebff0, 0x2ec0b0, indexKOF97Sprites_Mai, 0x40 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_D[] =
{
    { L"Mai D - Main", 0x2da5f0, 0x2da610, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 1", 0x2da610, 0x2da630, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 2", 0x2da630, 0x2da650, indexKOF98Sprites_Mai },
    { L"Mai D - Max Mode", 0x2da650, 0x2da670, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 4", 0x2da670, 0x2da690, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 5", 0x2da690, 0x2da6b0, indexKOF98Sprites_Mai },
    { L"Mai D - Super Trail", 0x2da6b0, 0x2da6d0, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 7", 0x2da6d0, 0x2da6f0, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 8", 0x2da6f0, 0x2da710, indexKOF98Sprites_Mai },
    { L"Mai D - Electric Palette", 0x2da710, 0x2da730, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 10", 0x2da730, 0x2da750, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 11", 0x2da750, 0x2da770, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 12", 0x2da770, 0x2da790, indexKOF98Sprites_Mai },
    { L"Mai D - Extra 13", 0x2da790, 0x2da7b0, indexKOF98Sprites_Mai },
    { L"Mai D - Character Select/Win Assist Portrait", 0x2da7b0, 0x2da7d0, indexKOF97Sprites_Mai, 0x41 },
    { L"Mai D - Lifebar Portrait", 0x2da7d0, 0x2da7f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Mai },
    { L"Mai D - Win Portrait", 0x2ec0f0, 0x2ec1b0, indexKOF97Sprites_Mai, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_A[] =
{
    { L"King A - Main", 0x2da7f0, 0x2da810, indexKOF96Sprites_King },
    { L"King A - Extra 1", 0x2da810, 0x2da830, indexKOF96Sprites_King },
    { L"King A - Extra 2", 0x2da830, 0x2da850, indexKOF96Sprites_King },
    { L"King A - Max Mode", 0x2da850, 0x2da870, indexKOF96Sprites_King },
    { L"King A - Extra 4", 0x2da870, 0x2da890, indexKOF96Sprites_King },
    { L"King A - Extra 5", 0x2da890, 0x2da8b0, indexKOF96Sprites_King },
    { L"King A - Super Trail", 0x2da8b0, 0x2da8d0, indexKOF96Sprites_King },
    { L"King A - Extra 7", 0x2da8d0, 0x2da8f0, indexKOF96Sprites_King },
    { L"King A - Extra 8", 0x2da8f0, 0x2da910, indexKOF96Sprites_King },
    { L"King A - Electric Palette", 0x2da910, 0x2da930, indexKOF96Sprites_King },
    { L"King A - Extra 10", 0x2da930, 0x2da950, indexKOF96Sprites_King },
    { L"King A - Extra 11", 0x2da950, 0x2da970, indexKOF96Sprites_King },
    { L"King A - Extra 12", 0x2da970, 0x2da990, indexKOF96Sprites_King },
    { L"King A - Extra 13", 0x2da990, 0x2da9b0, indexKOF96Sprites_King },
    { L"King A - Character Select/Win Assist Portrait", 0x2da9b0, 0x2da9d0, indexKOF97Sprites_King, 0x41 },
    { L"King A - Lifebar Portrait", 0x2da9d0, 0x2da9f0, indexKOF98Sprites_Lifebar, indexKOF96Sprites_King },
    { L"King A - Win Portrait", 0x2ec1f0, 0x2ec2f0, indexKOF97Sprites_King, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_B[] =
{
    { L"King B - Main", 0x2da9f0, 0x2daa10, indexKOF96Sprites_King },
    { L"King B - Extra 1", 0x2daa10, 0x2daa30, indexKOF96Sprites_King },
    { L"King B - Extra 2", 0x2daa30, 0x2daa50, indexKOF96Sprites_King },
    { L"King B - Max Mode", 0x2daa50, 0x2daa70, indexKOF96Sprites_King },
    { L"King B - Extra 4", 0x2daa70, 0x2daa90, indexKOF96Sprites_King },
    { L"King B - Extra 5", 0x2daa90, 0x2daab0, indexKOF96Sprites_King },
    { L"King B - Super Trail", 0x2daab0, 0x2daad0, indexKOF96Sprites_King },
    { L"King B - Extra 7", 0x2daad0, 0x2daaf0, indexKOF96Sprites_King },
    { L"King B - Extra 8", 0x2daaf0, 0x2dab10, indexKOF96Sprites_King },
    { L"King B - Electric Palette", 0x2dab10, 0x2dab30, indexKOF96Sprites_King },
    { L"King B - Extra 10", 0x2dab30, 0x2dab50, indexKOF96Sprites_King },
    { L"King B - Extra 11", 0x2dab50, 0x2dab70, indexKOF96Sprites_King },
    { L"King B - Extra 12", 0x2dab70, 0x2dab90, indexKOF96Sprites_King },
    { L"King B - Extra 13", 0x2dab90, 0x2dabb0, indexKOF96Sprites_King },
    { L"King B - Character Select/Win Assist Portrait", 0x2dabb0, 0x2dabd0, indexKOF97Sprites_King, 0x41 },
    { L"King B - Lifebar Portrait", 0x2dabd0, 0x2dabf0, indexKOF98Sprites_Lifebar, indexKOF96Sprites_King },
    { L"King B - Win Portrait", 0x2ec2f0, 0x2ec3f0, indexKOF97Sprites_King, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_C[] =
{
    { L"King C - Main", 0x2dabf0, 0x2dac10, indexKOF96Sprites_King },
    { L"King C - Extra 1", 0x2dac10, 0x2dac30, indexKOF96Sprites_King },
    { L"King C - Extra 2", 0x2dac30, 0x2dac50, indexKOF96Sprites_King },
    { L"King C - Max Mode", 0x2dac50, 0x2dac70, indexKOF96Sprites_King },
    { L"King C - Extra 4", 0x2dac70, 0x2dac90, indexKOF96Sprites_King },
    { L"King C - Extra 5", 0x2dac90, 0x2dacb0, indexKOF96Sprites_King },
    { L"King C - Super Trail", 0x2dacb0, 0x2dacd0, indexKOF96Sprites_King },
    { L"King C - Extra 7", 0x2dacd0, 0x2dacf0, indexKOF96Sprites_King },
    { L"King C - Extra 8", 0x2dacf0, 0x2dad10, indexKOF96Sprites_King },
    { L"King C - Electric Palette", 0x2dad10, 0x2dad30, indexKOF96Sprites_King },
    { L"King C - Extra 10", 0x2dad30, 0x2dad50, indexKOF96Sprites_King },
    { L"King C - Extra 11", 0x2dad50, 0x2dad70, indexKOF96Sprites_King },
    { L"King C - Extra 12", 0x2dad70, 0x2dad90, indexKOF96Sprites_King },
    { L"King C - Extra 13", 0x2dad90, 0x2dadb0, indexKOF96Sprites_King },
    { L"King C - Character Select/Win Assist Portrait", 0x2dadb0, 0x2dadd0, indexKOF97Sprites_King, 0x41 },
    { L"King C - Lifebar Portrait", 0x2dadd0, 0x2dadf0, indexKOF98Sprites_Lifebar, indexKOF96Sprites_King },
    { L"King C - Win Portrait", 0x2ec3f0, 0x2ec4f0, indexKOF97Sprites_King, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_D[] =
{
    { L"King D - Main", 0x2dadf0, 0x2dae10, indexKOF96Sprites_King },
    { L"King D - Extra 1", 0x2dae10, 0x2dae30, indexKOF96Sprites_King },
    { L"King D - Extra 2", 0x2dae30, 0x2dae50, indexKOF96Sprites_King },
    { L"King D - Max Mode", 0x2dae50, 0x2dae70, indexKOF96Sprites_King },
    { L"King D - Extra 4", 0x2dae70, 0x2dae90, indexKOF96Sprites_King },
    { L"King D - Extra 5", 0x2dae90, 0x2daeb0, indexKOF96Sprites_King },
    { L"King D - Super Trail", 0x2daeb0, 0x2daed0, indexKOF96Sprites_King },
    { L"King D - Extra 7", 0x2daed0, 0x2daef0, indexKOF96Sprites_King },
    { L"King D - Extra 8", 0x2daef0, 0x2daf10, indexKOF96Sprites_King },
    { L"King D - Electric Palette", 0x2daf10, 0x2daf30, indexKOF96Sprites_King },
    { L"King D - Extra 10", 0x2daf30, 0x2daf50, indexKOF96Sprites_King },
    { L"King D - Extra 11", 0x2daf50, 0x2daf70, indexKOF96Sprites_King },
    { L"King D - Extra 12", 0x2daf70, 0x2daf90, indexKOF96Sprites_King },
    { L"King D - Extra 13", 0x2daf90, 0x2dafb0, indexKOF96Sprites_King },
    { L"King D - Character Select/Win Assist Portrait", 0x2dafb0, 0x2dafd0, indexKOF97Sprites_King, 0x41 },
    { L"King D - Lifebar Portrait", 0x2dafd0, 0x2daff0, indexKOF98Sprites_Lifebar, indexKOF96Sprites_King },
    { L"King D - Win Portrait", 0x2ec4f0, 0x2ec5f0, indexKOF97Sprites_King, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_A[] =
{
    { L"Kim A - Main", 0x2daff0, 0x2db010, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 1", 0x2db010, 0x2db030, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 2", 0x2db030, 0x2db050, indexKOF98Sprites_Kim },
    { L"Kim A - Max Mode", 0x2db050, 0x2db070, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 4", 0x2db070, 0x2db090, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 5", 0x2db090, 0x2db0b0, indexKOF98Sprites_Kim },
    { L"Kim A - Super Trail", 0x2db0b0, 0x2db0d0, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 7", 0x2db0d0, 0x2db0f0, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 8", 0x2db0f0, 0x2db110, indexKOF98Sprites_Kim },
    { L"Kim A - Electric Palette", 0x2db110, 0x2db130, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 10", 0x2db130, 0x2db150, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 11", 0x2db150, 0x2db170, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 12", 0x2db170, 0x2db190, indexKOF98Sprites_Kim },
    { L"Kim A - Extra 13", 0x2db190, 0x2db1b0, indexKOF98Sprites_Kim },
    { L"Kim A - Character Select/Win Assist Portrait", 0x2db1b0, 0x2db1d0, indexKOF97Sprites_Kim, 0x41 },
    { L"Kim A - Lifebar Portrait", 0x2db1d0, 0x2db1f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kim },
    { L"Kim A - Win Portrait", 0x2ec5f0, 0x2ec6f0, indexKOF97Sprites_Kim, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_B[] =
{
    { L"Kim B - Main", 0x2db1f0, 0x2db210, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 1", 0x2db210, 0x2db230, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 2", 0x2db230, 0x2db250, indexKOF98Sprites_Kim },
    { L"Kim B - Max Mode", 0x2db250, 0x2db270, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 4", 0x2db270, 0x2db290, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 5", 0x2db290, 0x2db2b0, indexKOF98Sprites_Kim },
    { L"Kim B - Super Trail", 0x2db2b0, 0x2db2d0, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 7", 0x2db2d0, 0x2db2f0, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 8", 0x2db2f0, 0x2db310, indexKOF98Sprites_Kim },
    { L"Kim B - Electric Palette", 0x2db310, 0x2db330, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 10", 0x2db330, 0x2db350, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 11", 0x2db350, 0x2db370, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 12", 0x2db370, 0x2db390, indexKOF98Sprites_Kim },
    { L"Kim B - Extra 13", 0x2db390, 0x2db3b0, indexKOF98Sprites_Kim },
    { L"Kim B - Character Select/Win Assist Portrait", 0x2db3b0, 0x2db3d0, indexKOF97Sprites_Kim, 0x41 },
    { L"Kim B - Lifebar Portrait", 0x2db3d0, 0x2db3f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kim },
    { L"Kim B - Win Portrait", 0x2ec6f0, 0x2ec7f0, indexKOF97Sprites_Kim, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_C[] =
{
    { L"Kim C - Main", 0x2db3f0, 0x2db410, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 1", 0x2db410, 0x2db430, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 2", 0x2db430, 0x2db450, indexKOF98Sprites_Kim },
    { L"Kim C - Max Mode", 0x2db450, 0x2db470, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 4", 0x2db470, 0x2db490, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 5", 0x2db490, 0x2db4b0, indexKOF98Sprites_Kim },
    { L"Kim C - Super Trail", 0x2db4b0, 0x2db4d0, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 7", 0x2db4d0, 0x2db4f0, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 8", 0x2db4f0, 0x2db510, indexKOF98Sprites_Kim },
    { L"Kim C - Electric Palette", 0x2db510, 0x2db530, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 10", 0x2db530, 0x2db550, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 11", 0x2db550, 0x2db570, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 12", 0x2db570, 0x2db590, indexKOF98Sprites_Kim },
    { L"Kim C - Extra 13", 0x2db590, 0x2db5b0, indexKOF98Sprites_Kim },
    { L"Kim C - Character Select/Win Assist Portrait", 0x2db5b0, 0x2db5d0, indexKOF97Sprites_Kim, 0x41 },
    { L"Kim C - Lifebar Portrait", 0x2db5d0, 0x2db5f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kim },
    { L"Kim C - Win Portrait", 0x2ec7f0, 0x2ec8f0, indexKOF97Sprites_Kim, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_D[] =
{
    { L"Kim D - Main", 0x2db5f0, 0x2db610, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 1", 0x2db610, 0x2db630, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 2", 0x2db630, 0x2db650, indexKOF98Sprites_Kim },
    { L"Kim D - Max Mode", 0x2db650, 0x2db670, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 4", 0x2db670, 0x2db690, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 5", 0x2db690, 0x2db6b0, indexKOF98Sprites_Kim },
    { L"Kim D - Super Trail", 0x2db6b0, 0x2db6d0, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 7", 0x2db6d0, 0x2db6f0, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 8", 0x2db6f0, 0x2db710, indexKOF98Sprites_Kim },
    { L"Kim D - Electric Palette", 0x2db710, 0x2db730, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 10", 0x2db730, 0x2db750, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 11", 0x2db750, 0x2db770, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 12", 0x2db770, 0x2db790, indexKOF98Sprites_Kim },
    { L"Kim D - Extra 13", 0x2db790, 0x2db7b0, indexKOF98Sprites_Kim },
    { L"Kim D - Character Select/Win Assist Portrait", 0x2db7b0, 0x2db7d0, indexKOF97Sprites_Kim, 0x41 },
    { L"Kim D - Lifebar Portrait", 0x2db7d0, 0x2db7f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Kim },
    { L"Kim D - Win Portrait", 0x2ec8f0, 0x2ec9f0, indexKOF97Sprites_Kim, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_A[] =
{
    { L"Chang A - Main", 0x2db7f0, 0x2db810, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang A - Extra 1", 0x2db810, 0x2db830, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang A - Extra 2", 0x2db830, 0x2db850, indexKOF98Sprites_Chang },
    { L"Chang A - Max Mode", 0x2db850, 0x2db870, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang A - Extra 4", 0x2db870, 0x2db890, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang A - Extra 5", 0x2db890, 0x2db8b0, indexKOF98Sprites_Chang },
    { L"Chang A - Super Trail 1", 0x2db8b0, 0x2db8d0, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang A - Super Trail 2", 0x2db8d0, 0x2db8f0, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang A - Extra 8", 0x2db8f0, 0x2db910, indexKOF98Sprites_Chang },
    { L"Chang A - Electric Palette", 0x2db910, 0x2db930, indexKOF98Sprites_Chang },
    { L"Chang A - Extra 10", 0x2db930, 0x2db950, indexKOF98Sprites_Chang },
    { L"Chang A - Extra 11", 0x2db950, 0x2db970, indexKOF98Sprites_Chang },
    { L"Chang A - Extra 12", 0x2db970, 0x2db990, indexKOF98Sprites_Chang },
    { L"Chang A - Extra 13", 0x2db990, 0x2db9b0, indexKOF98Sprites_Chang },
    { L"Chang A - Character Select/Win Assist Portrait", 0x2db9b0, 0x2db9d0, indexKOF97Sprites_Chang, 0x41 },
    { L"Chang A - Lifebar Portrait", 0x2db9d0, 0x2db9f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chang },
    { L"Chang A - Win Portrait", 0x2ec9f0, 0x2ecaf0, indexKOF97Sprites_Chang, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_B[] =
{
    { L"Chang B - Main", 0x2db9f0, 0x2dba10, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang B - Extra 1", 0x2dba10, 0x2dba30, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang B - Extra 2", 0x2dba30, 0x2dba50, indexKOF98Sprites_Chang },
    { L"Chang B - Max Mode", 0x2dba50, 0x2dba70, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang B - Extra 4", 0x2dba70, 0x2dba90, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang B - Extra 5", 0x2dba90, 0x2dbab0, indexKOF98Sprites_Chang },
    { L"Chang B - Super Trail 1", 0x2dbab0, 0x2dbad0, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang B - Super Trail 2", 0x2dbad0, 0x2dbaf0, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang B - Extra 8", 0x2dbaf0, 0x2dbb10, indexKOF98Sprites_Chang },
    { L"Chang B - Electric Palette", 0x2dbb10, 0x2dbb30, indexKOF98Sprites_Chang },
    { L"Chang B - Extra 10", 0x2dbb30, 0x2dbb50, indexKOF98Sprites_Chang },
    { L"Chang B - Extra 11", 0x2dbb50, 0x2dbb70, indexKOF98Sprites_Chang },
    { L"Chang B - Extra 12", 0x2dbb70, 0x2dbb90, indexKOF98Sprites_Chang },
    { L"Chang B - Extra 13", 0x2dbb90, 0x2dbbb0, indexKOF98Sprites_Chang },
    { L"Chang B - Character Select/Win Assist Portrait", 0x2dbbb0, 0x2dbbd0, indexKOF97Sprites_Chang, 0x41 },
    { L"Chang B - Lifebar Portrait", 0x2dbbd0, 0x2dbbf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chang },
    { L"Chang B - Win Portrait", 0x2ecaf0, 0x2ecbf0, indexKOF97Sprites_Chang, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_C[] =
{
    { L"Chang C - Main", 0x2dbbf0, 0x2dbc10, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang C - Extra 1", 0x2dbc10, 0x2dbc30, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang C - Extra 2", 0x2dbc30, 0x2dbc50, indexKOF98Sprites_Chang },
    { L"Chang C - Max Mode", 0x2dbc50, 0x2dbc70, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang C - Extra 4", 0x2dbc70, 0x2dbc90, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang C - Extra 5", 0x2dbc90, 0x2dbcb0, indexKOF98Sprites_Chang },
    { L"Chang C - Super Trail 1", 0x2dbcb0, 0x2dbcd0, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang C - Super Trail 2", 0x2dbcd0, 0x2dbcf0, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang C - Extra 8", 0x2dbcf0, 0x2dbd10, indexKOF98Sprites_Chang },
    { L"Chang C - Electric Palette", 0x2dbd10, 0x2dbd30, indexKOF98Sprites_Chang },
    { L"Chang C - Extra 10", 0x2dbd30, 0x2dbd50, indexKOF98Sprites_Chang },
    { L"Chang C - Extra 11", 0x2dbd50, 0x2dbd70, indexKOF98Sprites_Chang },
    { L"Chang C - Extra 12", 0x2dbd70, 0x2dbd90, indexKOF98Sprites_Chang },
    { L"Chang C - Extra 13", 0x2dbd90, 0x2dbdb0, indexKOF98Sprites_Chang },
    { L"Chang C - Character Select/Win Assist Portrait", 0x2dbdb0, 0x2dbdd0, indexKOF97Sprites_Chang, 0x41 },
    { L"Chang C - Lifebar Portrait", 0x2dbdd0, 0x2dbdf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chang },
    { L"Chang C - Win Portrait", 0x2ecbf0, 0x2eccf0, indexKOF97Sprites_Chang, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_D[] =
{
    { L"Chang D - Main", 0x2dbdf0, 0x2dbe10, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang D - Extra 1", 0x2dbe10, 0x2dbe30, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang D - Extra 2", 0x2dbe30, 0x2dbe50, indexKOF98Sprites_Chang },
    { L"Chang D - Max Mode", 0x2dbe50, 0x2dbe70, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang D - Extra 4", 0x2dbe70, 0x2dbe90, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang D - Extra 5", 0x2dbe90, 0x2dbeb0, indexKOF98Sprites_Chang },
    { L"Chang D - Super Trail 1", 0x2dbeb0, 0x2dbed0, indexKOF98Sprites_Chang, 0x00, &pairNext },
    { L"Chang D - Super Trail 2", 0x2dbed0, 0x2dbef0, indexKOF98Sprites_Chang, 0x01 },
    { L"Chang D - Extra 8", 0x2dbef0, 0x2dbf10, indexKOF98Sprites_Chang },
    { L"Chang D - Electric Palette", 0x2dbf10, 0x2dbf30, indexKOF98Sprites_Chang },
    { L"Chang D - Extra 10", 0x2dbf30, 0x2dbf50, indexKOF98Sprites_Chang },
    { L"Chang D - Extra 11", 0x2dbf50, 0x2dbf70, indexKOF98Sprites_Chang },
    { L"Chang D - Extra 12", 0x2dbf70, 0x2dbf90, indexKOF98Sprites_Chang },
    { L"Chang D - Extra 13", 0x2dbf90, 0x2dbfb0, indexKOF98Sprites_Chang },
    { L"Chang D - Character Select/Win Assist Portrait", 0x2dbfb0, 0x2dbfd0, indexKOF97Sprites_Chang, 0x41 },
    { L"Chang D - Lifebar Portrait", 0x2dbfd0, 0x2dbff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chang },
    { L"Chang D - Win Portrait", 0x2eccf0, 0x2ecdf0, indexKOF97Sprites_Chang, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_A[] =
{
    { L"Choi A - Main", 0x2dbff0, 0x2dc010, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 1", 0x2dc010, 0x2dc030, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 2", 0x2dc030, 0x2dc050, indexKOF98Sprites_Choi },
    { L"Choi A - Max Mode", 0x2dc050, 0x2dc070, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 4", 0x2dc070, 0x2dc090, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 5", 0x2dc090, 0x2dc0b0, indexKOF98Sprites_Choi },
    { L"Choi A - Super Trail", 0x2dc0b0, 0x2dc0d0, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 7", 0x2dc0d0, 0x2dc0f0, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 8", 0x2dc0f0, 0x2dc110, indexKOF98Sprites_Choi },
    { L"Choi A - Electric Palette", 0x2dc110, 0x2dc130, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 10", 0x2dc130, 0x2dc150, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 11", 0x2dc150, 0x2dc170, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 12", 0x2dc170, 0x2dc190, indexKOF98Sprites_Choi },
    { L"Choi A - Extra 13", 0x2dc190, 0x2dc1b0, indexKOF98Sprites_Choi },
    { L"Choi A - Character Select/Win Assist Portrait", 0x2dc1b0, 0x2dc1d0, indexKOF97Sprites_Choi, 0x41 },
    { L"Choi A - Lifebar Portrait", 0x2dc1d0, 0x2dc1f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Choi },
    { L"Choi A - Win Portrait", 0x2ecdf0, 0x2ecef0, indexKOF97Sprites_Choi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_B[] =
{
    { L"Choi B - Main", 0x2dc1f0, 0x2dc210, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 1", 0x2dc210, 0x2dc230, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 2", 0x2dc230, 0x2dc250, indexKOF98Sprites_Choi },
    { L"Choi B - Max Mode", 0x2dc250, 0x2dc270, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 4", 0x2dc270, 0x2dc290, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 5", 0x2dc290, 0x2dc2b0, indexKOF98Sprites_Choi },
    { L"Choi B - Super Trail", 0x2dc2b0, 0x2dc2d0, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 7", 0x2dc2d0, 0x2dc2f0, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 8", 0x2dc2f0, 0x2dc310, indexKOF98Sprites_Choi },
    { L"Choi B - Electric Palette", 0x2dc310, 0x2dc330, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 10", 0x2dc330, 0x2dc350, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 11", 0x2dc350, 0x2dc370, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 12", 0x2dc370, 0x2dc390, indexKOF98Sprites_Choi },
    { L"Choi B - Extra 13", 0x2dc390, 0x2dc3b0, indexKOF98Sprites_Choi },
    { L"Choi B - Character Select/Win Assist Portrait", 0x2dc3b0, 0x2dc3d0, indexKOF97Sprites_Choi, 0x41 },
    { L"Choi B - Lifebar Portrait", 0x2dc3d0, 0x2dc3f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Choi },
    { L"Choi B - Win Portrait", 0x2ecef0, 0x2ecff0, indexKOF97Sprites_Choi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_C[] =
{
    { L"Choi C - Main", 0x2dc3f0, 0x2dc410, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 1", 0x2dc410, 0x2dc430, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 2", 0x2dc430, 0x2dc450, indexKOF98Sprites_Choi },
    { L"Choi C - Max Mode", 0x2dc450, 0x2dc470, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 4", 0x2dc470, 0x2dc490, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 5", 0x2dc490, 0x2dc4b0, indexKOF98Sprites_Choi },
    { L"Choi C - Super Trail", 0x2dc4b0, 0x2dc4d0, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 7", 0x2dc4d0, 0x2dc4f0, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 8", 0x2dc4f0, 0x2dc510, indexKOF98Sprites_Choi },
    { L"Choi C - Electric Palette", 0x2dc510, 0x2dc530, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 10", 0x2dc530, 0x2dc550, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 11", 0x2dc550, 0x2dc570, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 12", 0x2dc570, 0x2dc590, indexKOF98Sprites_Choi },
    { L"Choi C - Extra 13", 0x2dc590, 0x2dc5b0, indexKOF98Sprites_Choi },
    { L"Choi C - Character Select/Win Assist Portrait", 0x2dc5b0, 0x2dc5d0, indexKOF97Sprites_Choi, 0x41 },
    { L"Choi C - Lifebar Portrait", 0x2dc5d0, 0x2dc5f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Choi },
    { L"Choi C - Win Portrait", 0x2ecff0, 0x2ed0f0, indexKOF97Sprites_Choi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_D[] =
{
    { L"Choi D - Main", 0x2dc5f0, 0x2dc610, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 1", 0x2dc610, 0x2dc630, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 2", 0x2dc630, 0x2dc650, indexKOF98Sprites_Choi },
    { L"Choi D - Max Mode", 0x2dc650, 0x2dc670, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 4", 0x2dc670, 0x2dc690, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 5", 0x2dc690, 0x2dc6b0, indexKOF98Sprites_Choi },
    { L"Choi D - Super Trail", 0x2dc6b0, 0x2dc6d0, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 7", 0x2dc6d0, 0x2dc6f0, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 8", 0x2dc6f0, 0x2dc710, indexKOF98Sprites_Choi },
    { L"Choi D - Electric Palette", 0x2dc710, 0x2dc730, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 10", 0x2dc730, 0x2dc750, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 11", 0x2dc750, 0x2dc770, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 12", 0x2dc770, 0x2dc790, indexKOF98Sprites_Choi },
    { L"Choi D - Extra 13", 0x2dc790, 0x2dc7b0, indexKOF98Sprites_Choi },
    { L"Choi D - Character Select/Win Assist Portrait", 0x2dc7b0, 0x2dc7d0, indexKOF97Sprites_Choi, 0x41 },
    { L"Choi D - Lifebar Portrait", 0x2dc7d0, 0x2dc7f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Choi },
    { L"Choi D - Win Portrait", 0x2ed0f0, 0x2ed1f0, indexKOF97Sprites_Choi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_A[] =
{
    { L"Yamazaki A - Main", 0x2dc7f0, 0x2dc810, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 1", 0x2dc810, 0x2dc830, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 2", 0x2dc830, 0x2dc850, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Max Mode", 0x2dc850, 0x2dc870, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 4", 0x2dc870, 0x2dc890, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 5", 0x2dc890, 0x2dc8b0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Super Trail", 0x2dc8b0, 0x2dc8d0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 7", 0x2dc8d0, 0x2dc8f0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 8", 0x2dc8f0, 0x2dc910, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Electric Palette", 0x2dc910, 0x2dc930, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 10", 0x2dc930, 0x2dc950, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 11", 0x2dc950, 0x2dc970, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 12", 0x2dc970, 0x2dc990, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Extra 13", 0x2dc990, 0x2dc9b0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Character Select/Win Assist Portrait", 0x2dc9b0, 0x2dc9d0, indexKOF97Sprites_Yamazaki, 0x41 },
    { L"Yamazaki A - Lifebar Portrait", 0x2dc9d0, 0x2dc9f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki A - Win Portrait", 0x2ed1f0, 0x2ed2f0, indexKOF97Sprites_Yamazaki, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_B[] =
{
    { L"Yamazaki B - Main", 0x2dc9f0, 0x2dca10, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 1", 0x2dca10, 0x2dca30, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 2", 0x2dca30, 0x2dca50, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Max Mode", 0x2dca50, 0x2dca70, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 4", 0x2dca70, 0x2dca90, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 5", 0x2dca90, 0x2dcab0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Super Trail", 0x2dcab0, 0x2dcad0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 7", 0x2dcad0, 0x2dcaf0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 8", 0x2dcaf0, 0x2dcb10, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Electric Palette", 0x2dcb10, 0x2dcb30, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 10", 0x2dcb30, 0x2dcb50, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 11", 0x2dcb50, 0x2dcb70, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 12", 0x2dcb70, 0x2dcb90, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Extra 13", 0x2dcb90, 0x2dcbb0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Character Select/Win Assist Portrait", 0x2dcbb0, 0x2dcbd0, indexKOF97Sprites_Yamazaki, 0x41 },
    { L"Yamazaki B - Lifebar Portrait", 0x2dcbd0, 0x2dcbf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki B - Win Portrait", 0x2ed2f0, 0x2ed3f0, indexKOF97Sprites_Yamazaki, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_C[] =
{
    { L"Yamazaki C - Main", 0x2dcbf0, 0x2dcc10, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 1", 0x2dcc10, 0x2dcc30, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 2", 0x2dcc30, 0x2dcc50, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Max Mode", 0x2dcc50, 0x2dcc70, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 4", 0x2dcc70, 0x2dcc90, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 5", 0x2dcc90, 0x2dccb0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Super Trail", 0x2dccb0, 0x2dccd0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 7", 0x2dccd0, 0x2dccf0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 8", 0x2dccf0, 0x2dcd10, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Electric Palette", 0x2dcd10, 0x2dcd30, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 10", 0x2dcd30, 0x2dcd50, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 11", 0x2dcd50, 0x2dcd70, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 12", 0x2dcd70, 0x2dcd90, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Extra 13", 0x2dcd90, 0x2dcdb0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Character Select/Win Assist Portrait", 0x2dcdb0, 0x2dcdd0, indexKOF97Sprites_Yamazaki, 0x41 },
    { L"Yamazaki C - Lifebar Portrait", 0x2dcdd0, 0x2dcdf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki C - Win Portrait", 0x2ed3f0, 0x2ed4f0, indexKOF97Sprites_Yamazaki, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_D[] =
{
    { L"Yamazaki D - Main", 0x2dcdf0, 0x2dce10, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 1", 0x2dce10, 0x2dce30, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 2", 0x2dce30, 0x2dce50, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Max Mode", 0x2dce50, 0x2dce70, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 4", 0x2dce70, 0x2dce90, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 5", 0x2dce90, 0x2dceb0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Super Trail", 0x2dceb0, 0x2dced0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 7", 0x2dced0, 0x2dcef0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 8", 0x2dcef0, 0x2dcf10, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Electric Palette", 0x2dcf10, 0x2dcf30, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 10", 0x2dcf30, 0x2dcf50, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 11", 0x2dcf50, 0x2dcf70, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 12", 0x2dcf70, 0x2dcf90, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Extra 13", 0x2dcf90, 0x2dcfb0, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Character Select/Win Assist Portrait", 0x2dcfb0, 0x2dcfd0, indexKOF97Sprites_Yamazaki, 0x41 },
    { L"Yamazaki D - Lifebar Portrait", 0x2dcfd0, 0x2dcff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yamazaki },
    { L"Yamazaki D - Win Portrait", 0x2ed4f0, 0x2ed5f0, indexKOF97Sprites_Yamazaki, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A - Main", 0x2dcff0, 0x2dd010, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 1", 0x2dd010, 0x2dd030, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 2", 0x2dd030, 0x2dd050, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Max Mode", 0x2dd050, 0x2dd070, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 4", 0x2dd070, 0x2dd090, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 5", 0x2dd090, 0x2dd0b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Super Trail", 0x2dd0b0, 0x2dd0d0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 7", 0x2dd0d0, 0x2dd0f0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 8", 0x2dd0f0, 0x2dd110, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Electric Palette", 0x2dd110, 0x2dd130, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 10", 0x2dd130, 0x2dd150, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 11", 0x2dd150, 0x2dd170, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 12", 0x2dd170, 0x2dd190, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Extra 13", 0x2dd190, 0x2dd1b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Character Select/Win Assist Portrait", 0x2dd1b0, 0x2dd1d0, indexKOF97Sprites_BlueMary, 0x41 },
    { L"Blue Mary A - Lifebar Portrait", 0x2dd1d0, 0x2dd1f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_BlueMary },
    { L"Blue Mary A - Win Portrait", 0x2ed5f0, 0x2ed6d0, indexKOF97Sprites_BlueMary, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B - Main", 0x2dd1f0, 0x2dd210, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 1", 0x2dd210, 0x2dd230, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 2", 0x2dd230, 0x2dd250, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Max Mode", 0x2dd250, 0x2dd270, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 4", 0x2dd270, 0x2dd290, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 5", 0x2dd290, 0x2dd2b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Super Trail", 0x2dd2b0, 0x2dd2d0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 7", 0x2dd2d0, 0x2dd2f0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 8", 0x2dd2f0, 0x2dd310, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Electric Palette", 0x2dd310, 0x2dd330, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 10", 0x2dd330, 0x2dd350, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 11", 0x2dd350, 0x2dd370, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 12", 0x2dd370, 0x2dd390, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Extra 13", 0x2dd390, 0x2dd3b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Character Select/Win Assist Portrait", 0x2dd3b0, 0x2dd3d0, indexKOF97Sprites_BlueMary, 0x41 },
    { L"Blue Mary B - Lifebar Portrait", 0x2dd3d0, 0x2dd3f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_BlueMary },
    { L"Blue Mary B - Win Portrait", 0x2ed6f0, 0x2ed7d0, indexKOF97Sprites_BlueMary, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C - Main", 0x2dd3f0, 0x2dd410, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 1", 0x2dd410, 0x2dd430, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 2", 0x2dd430, 0x2dd450, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Max Mode", 0x2dd450, 0x2dd470, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 4", 0x2dd470, 0x2dd490, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 5", 0x2dd490, 0x2dd4b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Super Trail", 0x2dd4b0, 0x2dd4d0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 7", 0x2dd4d0, 0x2dd4f0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 8", 0x2dd4f0, 0x2dd510, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Electric Palette", 0x2dd510, 0x2dd530, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 10", 0x2dd530, 0x2dd550, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 11", 0x2dd550, 0x2dd570, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 12", 0x2dd570, 0x2dd590, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Extra 13", 0x2dd590, 0x2dd5b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Character Select/Win Assist Portrait", 0x2dd5b0, 0x2dd5d0, indexKOF97Sprites_BlueMary, 0x41 },
    { L"Blue Mary C - Lifebar Portrait", 0x2dd5d0, 0x2dd5f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_BlueMary },
    { L"Blue Mary C - Win Portrait", 0x2ed7f0, 0x2ed8d0, indexKOF97Sprites_BlueMary, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D - Main", 0x2dd5f0, 0x2dd610, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 1", 0x2dd610, 0x2dd630, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 2", 0x2dd630, 0x2dd650, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Max Mode", 0x2dd650, 0x2dd670, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 4", 0x2dd670, 0x2dd690, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 5", 0x2dd690, 0x2dd6b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Super Trail", 0x2dd6b0, 0x2dd6d0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 7", 0x2dd6d0, 0x2dd6f0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 8", 0x2dd6f0, 0x2dd710, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Electric Palette", 0x2dd710, 0x2dd730, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 10", 0x2dd730, 0x2dd750, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 11", 0x2dd750, 0x2dd770, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 12", 0x2dd770, 0x2dd790, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Extra 13", 0x2dd790, 0x2dd7b0, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Character Select/Win Assist Portrait", 0x2dd7b0, 0x2dd7d0, indexKOF97Sprites_BlueMary, 0x41 },
    { L"Blue Mary D - Lifebar Portrait", 0x2dd7d0, 0x2dd7f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_BlueMary },
    { L"Blue Mary D - Win Portrait", 0x2ed8f0, 0x2ed9d0, indexKOF97Sprites_BlueMary, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_A[] =
{
    { L"Billy A - Main", 0x2dd7f0, 0x2dd810, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 1", 0x2dd810, 0x2dd830, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 2", 0x2dd830, 0x2dd850, indexKOF98Sprites_Billy },
    { L"Billy A - Max Mode", 0x2dd850, 0x2dd870, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 4", 0x2dd870, 0x2dd890, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 5", 0x2dd890, 0x2dd8b0, indexKOF98Sprites_Billy },
    { L"Billy A - Super Trail", 0x2dd8b0, 0x2dd8d0, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 7", 0x2dd8d0, 0x2dd8f0, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 8", 0x2dd8f0, 0x2dd910, indexKOF98Sprites_Billy },
    { L"Billy A - Electric Palette", 0x2dd910, 0x2dd930, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 10", 0x2dd930, 0x2dd950, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 11", 0x2dd950, 0x2dd970, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 12", 0x2dd970, 0x2dd990, indexKOF98Sprites_Billy },
    { L"Billy A - Extra 13", 0x2dd990, 0x2dd9b0, indexKOF98Sprites_Billy },
    { L"Billy A - Character Select/Win Assist Portrait", 0x2dd9b0, 0x2dd9d0, indexKOF97Sprites_Billy, 0x41 },
    { L"Billy A - Lifebar Portrait", 0x2dd9d0, 0x2dd9f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Billy },
    { L"Billy A - Win Portrait", 0x2ed9f0, 0x2edab0, indexKOF97Sprites_Billy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_B[] =
{
    { L"Billy B - Main", 0x2dd9f0, 0x2dda10, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 1", 0x2dda10, 0x2dda30, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 2", 0x2dda30, 0x2dda50, indexKOF98Sprites_Billy },
    { L"Billy B - Max Mode", 0x2dda50, 0x2dda70, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 4", 0x2dda70, 0x2dda90, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 5", 0x2dda90, 0x2ddab0, indexKOF98Sprites_Billy },
    { L"Billy B - Super Trail", 0x2ddab0, 0x2ddad0, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 7", 0x2ddad0, 0x2ddaf0, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 8", 0x2ddaf0, 0x2ddb10, indexKOF98Sprites_Billy },
    { L"Billy B - Electric Palette", 0x2ddb10, 0x2ddb30, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 10", 0x2ddb30, 0x2ddb50, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 11", 0x2ddb50, 0x2ddb70, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 12", 0x2ddb70, 0x2ddb90, indexKOF98Sprites_Billy },
    { L"Billy B - Extra 13", 0x2ddb90, 0x2ddbb0, indexKOF98Sprites_Billy },
    { L"Billy B - Character Select/Win Assist Portrait", 0x2ddbb0, 0x2ddbd0, indexKOF97Sprites_Billy, 0x41 },
    { L"Billy B - Lifebar Portrait", 0x2ddbd0, 0x2ddbf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Billy },
    { L"Billy B - Win Portrait", 0x2edaf0, 0x2edbb0, indexKOF97Sprites_Billy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_C[] =
{
    { L"Billy C - Main", 0x2ddbf0, 0x2ddc10, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 1", 0x2ddc10, 0x2ddc30, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 2", 0x2ddc30, 0x2ddc50, indexKOF98Sprites_Billy },
    { L"Billy C - Max Mode", 0x2ddc50, 0x2ddc70, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 4", 0x2ddc70, 0x2ddc90, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 5", 0x2ddc90, 0x2ddcb0, indexKOF98Sprites_Billy },
    { L"Billy C - Super Trail", 0x2ddcb0, 0x2ddcd0, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 7", 0x2ddcd0, 0x2ddcf0, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 8", 0x2ddcf0, 0x2ddd10, indexKOF98Sprites_Billy },
    { L"Billy C - Electric Palette", 0x2ddd10, 0x2ddd30, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 10", 0x2ddd30, 0x2ddd50, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 11", 0x2ddd50, 0x2ddd70, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 12", 0x2ddd70, 0x2ddd90, indexKOF98Sprites_Billy },
    { L"Billy C - Extra 13", 0x2ddd90, 0x2dddb0, indexKOF98Sprites_Billy },
    { L"Billy C - Character Select/Win Assist Portrait", 0x2dddb0, 0x2dddd0, indexKOF97Sprites_Billy, 0x41 },
    { L"Billy C - Lifebar Portrait", 0x2dddd0, 0x2dddf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Billy },
    { L"Billy C - Win Portrait", 0x2edbf0, 0x2edcb0, indexKOF97Sprites_Billy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_D[] =
{
    { L"Billy D - Main", 0x2dddf0, 0x2dde10, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 1", 0x2dde10, 0x2dde30, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 2", 0x2dde30, 0x2dde50, indexKOF98Sprites_Billy },
    { L"Billy D - Max Mode", 0x2dde50, 0x2dde70, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 4", 0x2dde70, 0x2dde90, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 5", 0x2dde90, 0x2ddeb0, indexKOF98Sprites_Billy },
    { L"Billy D - Super Trail", 0x2ddeb0, 0x2dded0, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 7", 0x2dded0, 0x2ddef0, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 8", 0x2ddef0, 0x2ddf10, indexKOF98Sprites_Billy },
    { L"Billy D - Electric Palette", 0x2ddf10, 0x2ddf30, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 10", 0x2ddf30, 0x2ddf50, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 11", 0x2ddf50, 0x2ddf70, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 12", 0x2ddf70, 0x2ddf90, indexKOF98Sprites_Billy },
    { L"Billy D - Extra 13", 0x2ddf90, 0x2ddfb0, indexKOF98Sprites_Billy },
    { L"Billy D - Character Select/Win Assist Portrait", 0x2ddfb0, 0x2ddfd0, indexKOF97Sprites_Billy, 0x41 },
    { L"Billy D - Lifebar Portrait", 0x2ddfd0, 0x2ddff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Billy },
    { L"Billy D - Win Portrait", 0x2edcf0, 0x2eddb0, indexKOF97Sprites_Billy, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_A[] =
{
    { L"Yashiro A - Main", 0x2ddff0, 0x2de010, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 1", 0x2de010, 0x2de030, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 2", 0x2de030, 0x2de050, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Max Mode", 0x2de050, 0x2de070, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 4", 0x2de070, 0x2de090, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 5", 0x2de090, 0x2de0b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Super Trail", 0x2de0b0, 0x2de0d0, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 7", 0x2de0d0, 0x2de0f0, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 8", 0x2de0f0, 0x2de110, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Electric Palette", 0x2de110, 0x2de130, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 10", 0x2de130, 0x2de150, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 11", 0x2de150, 0x2de170, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 12", 0x2de170, 0x2de190, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Extra 13", 0x2de190, 0x2de1b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Character Select/Win Assist Portrait", 0x2de1b0, 0x2de1d0, indexKOF97Sprites_Yashiro, 0x41 },
    { L"Yashiro A - Lifebar Portrait", 0x2de1d0, 0x2de1f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Yashiro A - Win Portrait", 0x2eddf0, 0x2edef0, indexKOF97Sprites_Yashiro, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_B[] =
{
    { L"Yashiro B - Main", 0x2de1f0, 0x2de210, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 1", 0x2de210, 0x2de230, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 2", 0x2de230, 0x2de250, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Max Mode", 0x2de250, 0x2de270, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 4", 0x2de270, 0x2de290, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 5", 0x2de290, 0x2de2b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Super Trail", 0x2de2b0, 0x2de2d0, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 7", 0x2de2d0, 0x2de2f0, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 8", 0x2de2f0, 0x2de310, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Electric Palette", 0x2de310, 0x2de330, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 10", 0x2de330, 0x2de350, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 11", 0x2de350, 0x2de370, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 12", 0x2de370, 0x2de390, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Extra 13", 0x2de390, 0x2de3b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Character Select/Win Assist Portrait", 0x2de3b0, 0x2de3d0, indexKOF97Sprites_Yashiro, 0x41 },
    { L"Yashiro B - Lifebar Portrait", 0x2de3d0, 0x2de3f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Yashiro B - Win Portrait", 0x2edef0, 0x2edff0, indexKOF97Sprites_Yashiro, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_C[] =
{
    { L"Yashiro C - Main", 0x2de3f0, 0x2de410, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 1", 0x2de410, 0x2de430, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 2", 0x2de430, 0x2de450, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Max Mode", 0x2de450, 0x2de470, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 4", 0x2de470, 0x2de490, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 5", 0x2de490, 0x2de4b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Super Trail", 0x2de4b0, 0x2de4d0, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 7", 0x2de4d0, 0x2de4f0, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 8", 0x2de4f0, 0x2de510, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Electric Palette", 0x2de510, 0x2de530, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 10", 0x2de530, 0x2de550, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 11", 0x2de550, 0x2de570, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 12", 0x2de570, 0x2de590, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Extra 13", 0x2de590, 0x2de5b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Character Select/Win Assist Portrait", 0x2de5b0, 0x2de5d0, indexKOF97Sprites_Yashiro, 0x41 },
    { L"Yashiro C - Lifebar Portrait", 0x2de5d0, 0x2de5f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Yashiro C - Win Portrait", 0x2edff0, 0x2ee0f0, indexKOF97Sprites_Yashiro, 0x40 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_D[] =
{
    { L"Yashiro D - Main", 0x2de5f0, 0x2de610, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 1", 0x2de610, 0x2de630, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 2", 0x2de630, 0x2de650, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Max Mode", 0x2de650, 0x2de670, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 4", 0x2de670, 0x2de690, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 5", 0x2de690, 0x2de6b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Super Trail", 0x2de6b0, 0x2de6d0, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 7", 0x2de6d0, 0x2de6f0, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 8", 0x2de6f0, 0x2de710, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Electric Palette", 0x2de710, 0x2de730, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 10", 0x2de730, 0x2de750, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 11", 0x2de750, 0x2de770, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 12", 0x2de770, 0x2de790, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Extra 13", 0x2de790, 0x2de7b0, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Character Select/Win Assist Portrait", 0x2de7b0, 0x2de7d0, indexKOF97Sprites_Yashiro, 0x41 },
    { L"Yashiro D - Lifebar Portrait", 0x2de7d0, 0x2de7f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Yashiro D - Win Portrait", 0x2ee0f0, 0x2ee1f0, indexKOF97Sprites_Yashiro, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_A[] =
{
    { L"Shermie A - Main", 0x2de7f0, 0x2de810, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 1", 0x2de810, 0x2de830, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 2", 0x2de830, 0x2de850, indexKOF98Sprites_Shermie },
    { L"Shermie A - Max Mode", 0x2de850, 0x2de870, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 4", 0x2de870, 0x2de890, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 5", 0x2de890, 0x2de8b0, indexKOF98Sprites_Shermie },
    { L"Shermie A - Super Trail", 0x2de8b0, 0x2de8d0, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 7", 0x2de8d0, 0x2de8f0, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 8", 0x2de8f0, 0x2de910, indexKOF98Sprites_Shermie },
    { L"Shermie A - Electric Palette", 0x2de910, 0x2de930, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 10", 0x2de930, 0x2de950, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 11", 0x2de950, 0x2de970, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 12", 0x2de970, 0x2de990, indexKOF98Sprites_Shermie },
    { L"Shermie A - Extra 13", 0x2de990, 0x2de9b0, indexKOF98Sprites_Shermie },
    { L"Shermie A - Character Select/Win Assist Portrait", 0x2de9b0, 0x2de9d0, indexKOF97Sprites_Shermie, 0x41 },
    { L"Shermie A - Lifebar Portrait", 0x2de9d0, 0x2de9f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Shermie A - Win Portrait", 0x2ee1f0, 0x2ee2f0, indexKOF97Sprites_Shermie, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_B[] =
{
    { L"Shermie B - Main", 0x2de9f0, 0x2dea10, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 1", 0x2dea10, 0x2dea30, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 2", 0x2dea30, 0x2dea50, indexKOF98Sprites_Shermie },
    { L"Shermie B - Max Mode", 0x2dea50, 0x2dea70, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 4", 0x2dea70, 0x2dea90, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 5", 0x2dea90, 0x2deab0, indexKOF98Sprites_Shermie },
    { L"Shermie B - Super Trail", 0x2deab0, 0x2dead0, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 7", 0x2dead0, 0x2deaf0, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 8", 0x2deaf0, 0x2deb10, indexKOF98Sprites_Shermie },
    { L"Shermie B - Electric Palette", 0x2deb10, 0x2deb30, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 10", 0x2deb30, 0x2deb50, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 11", 0x2deb50, 0x2deb70, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 12", 0x2deb70, 0x2deb90, indexKOF98Sprites_Shermie },
    { L"Shermie B - Extra 13", 0x2deb90, 0x2debb0, indexKOF98Sprites_Shermie },
    { L"Shermie B - Character Select/Win Assist Portrait", 0x2debb0, 0x2debd0, indexKOF97Sprites_Shermie, 0x41 },
    { L"Shermie B - Lifebar Portrait", 0x2debd0, 0x2debf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Shermie B - Win Portrait", 0x2ee2f0, 0x2ee3f0, indexKOF97Sprites_Shermie, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_C[] =
{
    { L"Shermie C - Main", 0x2debf0, 0x2dec10, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 1", 0x2dec10, 0x2dec30, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 2", 0x2dec30, 0x2dec50, indexKOF98Sprites_Shermie },
    { L"Shermie C - Max Mode", 0x2dec50, 0x2dec70, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 4", 0x2dec70, 0x2dec90, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 5", 0x2dec90, 0x2decb0, indexKOF98Sprites_Shermie },
    { L"Shermie C - Super Trail", 0x2decb0, 0x2decd0, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 7", 0x2decd0, 0x2decf0, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 8", 0x2decf0, 0x2ded10, indexKOF98Sprites_Shermie },
    { L"Shermie C - Electric Palette", 0x2ded10, 0x2ded30, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 10", 0x2ded30, 0x2ded50, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 11", 0x2ded50, 0x2ded70, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 12", 0x2ded70, 0x2ded90, indexKOF98Sprites_Shermie },
    { L"Shermie C - Extra 13", 0x2ded90, 0x2dedb0, indexKOF98Sprites_Shermie },
    { L"Shermie C - Character Select/Win Assist Portrait", 0x2dedb0, 0x2dedd0, indexKOF97Sprites_Shermie, 0x41 },
    { L"Shermie C - Lifebar Portrait", 0x2dedd0, 0x2dedf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Shermie C - Win Portrait", 0x2ee3f0, 0x2ee4f0, indexKOF97Sprites_Shermie, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_D[] =
{
    { L"Shermie D - Main", 0x2dedf0, 0x2dee10, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 1", 0x2dee10, 0x2dee30, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 2", 0x2dee30, 0x2dee50, indexKOF98Sprites_Shermie },
    { L"Shermie D - Max Mode", 0x2dee50, 0x2dee70, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 4", 0x2dee70, 0x2dee90, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 5", 0x2dee90, 0x2deeb0, indexKOF98Sprites_Shermie },
    { L"Shermie D - Super Trail", 0x2deeb0, 0x2deed0, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 7", 0x2deed0, 0x2deef0, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 8", 0x2deef0, 0x2def10, indexKOF98Sprites_Shermie },
    { L"Shermie D - Electric Palette", 0x2def10, 0x2def30, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 10", 0x2def30, 0x2def50, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 11", 0x2def50, 0x2def70, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 12", 0x2def70, 0x2def90, indexKOF98Sprites_Shermie },
    { L"Shermie D - Extra 13", 0x2def90, 0x2defb0, indexKOF98Sprites_Shermie },
    { L"Shermie D - Character Select/Win Assist Portrait", 0x2defb0, 0x2defd0, indexKOF97Sprites_Shermie, 0x41 },
    { L"Shermie D - Lifebar Portrait", 0x2defd0, 0x2deff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Shermie D - Win Portrait", 0x2ee4f0, 0x2ee5f0, indexKOF97Sprites_Shermie, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_A[] =
{
    { L"Chris A - Main", 0x2deff0, 0x2df010, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 1", 0x2df010, 0x2df030, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 2", 0x2df030, 0x2df050, indexKOF98Sprites_Chris },
    { L"Chris A - Max Mode", 0x2df050, 0x2df070, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 4", 0x2df070, 0x2df090, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 5", 0x2df090, 0x2df0b0, indexKOF98Sprites_Chris },
    { L"Chris A - Super Trail", 0x2df0b0, 0x2df0d0, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 7", 0x2df0d0, 0x2df0f0, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 8", 0x2df0f0, 0x2df110, indexKOF98Sprites_Chris },
    { L"Chris A - Electric Palette", 0x2df110, 0x2df130, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 10", 0x2df130, 0x2df150, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 11", 0x2df150, 0x2df170, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 12", 0x2df170, 0x2df190, indexKOF98Sprites_Chris },
    { L"Chris A - Extra 13", 0x2df190, 0x2df1b0, indexKOF98Sprites_Chris },
    { L"Chris A - Character Select/Win Assist Portrait", 0x2df1b0, 0x2df1d0, indexKOF97Sprites_Chris, 0x41 },
    { L"Chris A - Lifebar Portrait", 0x2df1d0, 0x2df1f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Chris A - Win Portrait", 0x2ee5f0, 0x2ee6f0, indexKOF97Sprites_Chris, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_B[] =
{
    { L"Chris B - Main", 0x2df1f0, 0x2df210, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 1", 0x2df210, 0x2df230, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 2", 0x2df230, 0x2df250, indexKOF98Sprites_Chris },
    { L"Chris B - Max Mode", 0x2df250, 0x2df270, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 4", 0x2df270, 0x2df290, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 5", 0x2df290, 0x2df2b0, indexKOF98Sprites_Chris },
    { L"Chris B - Super Trail", 0x2df2b0, 0x2df2d0, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 7", 0x2df2d0, 0x2df2f0, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 8", 0x2df2f0, 0x2df310, indexKOF98Sprites_Chris },
    { L"Chris B - Electric Palette", 0x2df310, 0x2df330, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 10", 0x2df330, 0x2df350, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 11", 0x2df350, 0x2df370, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 12", 0x2df370, 0x2df390, indexKOF98Sprites_Chris },
    { L"Chris B - Extra 13", 0x2df390, 0x2df3b0, indexKOF98Sprites_Chris },
    { L"Chris B - Character Select/Win Assist Portrait", 0x2df3b0, 0x2df3d0, indexKOF97Sprites_Chris, 0x41 },
    { L"Chris B - Lifebar Portrait", 0x2df3d0, 0x2df3f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Chris B - Win Portrait", 0x2ee6f0, 0x2ee7f0, indexKOF97Sprites_Chris, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_C[] =
{
    { L"Chris C - Main", 0x2df3f0, 0x2df410, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 1", 0x2df410, 0x2df430, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 2", 0x2df430, 0x2df450, indexKOF98Sprites_Chris },
    { L"Chris C - Max Mode", 0x2df450, 0x2df470, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 4", 0x2df470, 0x2df490, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 5", 0x2df490, 0x2df4b0, indexKOF98Sprites_Chris },
    { L"Chris C - Super Trail", 0x2df4b0, 0x2df4d0, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 7", 0x2df4d0, 0x2df4f0, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 8", 0x2df4f0, 0x2df510, indexKOF98Sprites_Chris },
    { L"Chris C - Electric Palette", 0x2df510, 0x2df530, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 10", 0x2df530, 0x2df550, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 11", 0x2df550, 0x2df570, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 12", 0x2df570, 0x2df590, indexKOF98Sprites_Chris },
    { L"Chris C - Extra 13", 0x2df590, 0x2df5b0, indexKOF98Sprites_Chris },
    { L"Chris C - Character Select/Win Assist Portrait", 0x2df5b0, 0x2df5d0, indexKOF97Sprites_Chris, 0x41 },
    { L"Chris C - Lifebar Portrait", 0x2df5d0, 0x2df5f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Chris C - Win Portrait", 0x2ee7f0, 0x2ee8f0, indexKOF97Sprites_Chris, 0x40 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_D[] =
{
    { L"Chris D - Main", 0x2df5f0, 0x2df610, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 1", 0x2df610, 0x2df630, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 2", 0x2df630, 0x2df650, indexKOF98Sprites_Chris },
    { L"Chris D - Max Mode", 0x2df650, 0x2df670, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 4", 0x2df670, 0x2df690, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 5", 0x2df690, 0x2df6b0, indexKOF98Sprites_Chris },
    { L"Chris D - Super Trail", 0x2df6b0, 0x2df6d0, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 7", 0x2df6d0, 0x2df6f0, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 8", 0x2df6f0, 0x2df710, indexKOF98Sprites_Chris },
    { L"Chris D - Electric Palette", 0x2df710, 0x2df730, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 10", 0x2df730, 0x2df750, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 11", 0x2df750, 0x2df770, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 12", 0x2df770, 0x2df790, indexKOF98Sprites_Chris },
    { L"Chris D - Extra 13", 0x2df790, 0x2df7b0, indexKOF98Sprites_Chris },
    { L"Chris D - Character Select/Win Assist Portrait", 0x2df7b0, 0x2df7d0, indexKOF97Sprites_Chris, 0x41 },
    { L"Chris D - Lifebar Portrait", 0x2df7d0, 0x2df7f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Chris D - Win Portrait", 0x2ee8f0, 0x2ee9f0, indexKOF97Sprites_Chris, 0x40 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_A[] =
{
    { L"Iori A - Main", 0x2df7f0, 0x2df810, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 1", 0x2df810, 0x2df830, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 2", 0x2df830, 0x2df850, indexKOF98Sprites_Iori },
    { L"Iori A - Max Mode", 0x2df850, 0x2df870, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 4", 0x2df870, 0x2df890, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 5", 0x2df890, 0x2df8b0, indexKOF98Sprites_Iori },
    { L"Iori A - Super Trail", 0x2df8b0, 0x2df8d0, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 7", 0x2df8d0, 0x2df8f0, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 8", 0x2df8f0, 0x2df910, indexKOF98Sprites_Iori },
    { L"Iori A - Electric Palette", 0x2df910, 0x2df930, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 10", 0x2df930, 0x2df950, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 11", 0x2df950, 0x2df970, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 12", 0x2df970, 0x2df990, indexKOF98Sprites_Iori },
    { L"Iori A - Extra 13", 0x2df990, 0x2df9b0, indexKOF98Sprites_Iori },
    { L"Iori A - Character Select/Win Assist Portrait", 0x2df9b0, 0x2df9d0, indexKOF97Sprites_Iori, 0x41 },
    { L"Iori A - Lifebar Portrait", 0x2df9d0, 0x2df9f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Iori },
    { L"Iori A - Win Portrait", 0x2ee9f0, 0x2eeaf0, indexKOF97Sprites_Iori, 0x40 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_B[] =
{
    { L"Iori B - Main", 0x2df9f0, 0x2dfa10, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 1", 0x2dfa10, 0x2dfa30, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 2", 0x2dfa30, 0x2dfa50, indexKOF98Sprites_Iori },
    { L"Iori B - Max Mode", 0x2dfa50, 0x2dfa70, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 4", 0x2dfa70, 0x2dfa90, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 5", 0x2dfa90, 0x2dfab0, indexKOF98Sprites_Iori },
    { L"Iori B - Super Trail", 0x2dfab0, 0x2dfad0, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 7", 0x2dfad0, 0x2dfaf0, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 8", 0x2dfaf0, 0x2dfb10, indexKOF98Sprites_Iori },
    { L"Iori B - Electric Palette", 0x2dfb10, 0x2dfb30, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 10", 0x2dfb30, 0x2dfb50, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 11", 0x2dfb50, 0x2dfb70, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 12", 0x2dfb70, 0x2dfb90, indexKOF98Sprites_Iori },
    { L"Iori B - Extra 13", 0x2dfb90, 0x2dfbb0, indexKOF98Sprites_Iori },
    { L"Iori B - Character Select/Win Assist Portrait", 0x2dfbb0, 0x2dfbd0, indexKOF97Sprites_Iori, 0x41 },
    { L"Iori B - Lifebar Portrait", 0x2dfbd0, 0x2dfbf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Iori },
    { L"Iori B - Win Portrait", 0x2eeaf0, 0x2eebf0, indexKOF97Sprites_Iori, 0x40 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_C[] =
{
    { L"Iori C - Main", 0x2dfbf0, 0x2dfc10, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 1", 0x2dfc10, 0x2dfc30, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 2", 0x2dfc30, 0x2dfc50, indexKOF98Sprites_Iori },
    { L"Iori C - Max Mode", 0x2dfc50, 0x2dfc70, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 4", 0x2dfc70, 0x2dfc90, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 5", 0x2dfc90, 0x2dfcb0, indexKOF98Sprites_Iori },
    { L"Iori C - Super Trail", 0x2dfcb0, 0x2dfcd0, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 7", 0x2dfcd0, 0x2dfcf0, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 8", 0x2dfcf0, 0x2dfd10, indexKOF98Sprites_Iori },
    { L"Iori C - Electric Palette", 0x2dfd10, 0x2dfd30, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 10", 0x2dfd30, 0x2dfd50, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 11", 0x2dfd50, 0x2dfd70, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 12", 0x2dfd70, 0x2dfd90, indexKOF98Sprites_Iori },
    { L"Iori C - Extra 13", 0x2dfd90, 0x2dfdb0, indexKOF98Sprites_Iori },
    { L"Iori C - Character Select/Win Assist Portrait", 0x2dfdb0, 0x2dfdd0, indexKOF97Sprites_Iori, 0x41 },
    { L"Iori C - Lifebar Portrait", 0x2dfdd0, 0x2dfdf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Iori },
    { L"Iori C - Win Portrait", 0x2eebf0, 0x2eecf0, indexKOF97Sprites_Iori, 0x40 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_D[] =
{
    { L"Iori D - Main", 0x2dfdf0, 0x2dfe10, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 1", 0x2dfe10, 0x2dfe30, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 2", 0x2dfe30, 0x2dfe50, indexKOF98Sprites_Iori },
    { L"Iori D - Max Mode", 0x2dfe50, 0x2dfe70, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 4", 0x2dfe70, 0x2dfe90, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 5", 0x2dfe90, 0x2dfeb0, indexKOF98Sprites_Iori },
    { L"Iori D - Super Trail", 0x2dfeb0, 0x2dfed0, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 7", 0x2dfed0, 0x2dfef0, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 8", 0x2dfef0, 0x2dff10, indexKOF98Sprites_Iori },
    { L"Iori D - Electric Palette", 0x2dff10, 0x2dff30, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 10", 0x2dff30, 0x2dff50, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 11", 0x2dff50, 0x2dff70, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 12", 0x2dff70, 0x2dff90, indexKOF98Sprites_Iori },
    { L"Iori D - Extra 13", 0x2dff90, 0x2dffb0, indexKOF98Sprites_Iori },
    { L"Iori D - Character Select/Win Assist Portrait", 0x2dffb0, 0x2dffd0, indexKOF97Sprites_Iori, 0x41 },
    { L"Iori D - Lifebar Portrait", 0x2dffd0, 0x2dfff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Iori },
    { L"Iori D - Win Portrait", 0x2eecf0, 0x2eedf0, indexKOF97Sprites_Iori, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_A[] =
{
    { L"Orochi Iori A - Main", 0x2dfff0, 0x2e0010, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 1", 0x2e0010, 0x2e0030, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 2", 0x2e0030, 0x2e0050, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Max Mode", 0x2e0050, 0x2e0070, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 4", 0x2e0070, 0x2e0090, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 5", 0x2e0090, 0x2e00b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Super Trail", 0x2e00b0, 0x2e00d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 7", 0x2e00d0, 0x2e00f0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 8", 0x2e00f0, 0x2e0110, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Electric Palette", 0x2e0110, 0x2e0130, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 10", 0x2e0130, 0x2e0150, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 11", 0x2e0150, 0x2e0170, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 12", 0x2e0170, 0x2e0190, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 13", 0x2e0190, 0x2e01b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Character Select/Win Assist Portrait", 0x2e01b0, 0x2e01d0, indexKOF97Sprites_IoriOrochi, 0x41 },
    { L"Orochi Iori A - Lifebar Portrait", 0x2e01d0, 0x2e01f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Win Portrait", 0x2eedf0, 0x2eeeb0, indexKOF97Sprites_IoriOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_B[] =
{
    { L"Orochi Iori B - Main", 0x2e01f0, 0x2e0210, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 1", 0x2e0210, 0x2e0230, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 2", 0x2e0230, 0x2e0250, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Max Mode", 0x2e0250, 0x2e0270, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 4", 0x2e0270, 0x2e0290, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 5", 0x2e0290, 0x2e02b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Super Trail", 0x2e02b0, 0x2e02d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 7", 0x2e02d0, 0x2e02f0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 8", 0x2e02f0, 0x2e0310, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Electric Palette", 0x2e0310, 0x2e0330, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 10", 0x2e0330, 0x2e0350, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 11", 0x2e0350, 0x2e0370, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 12", 0x2e0370, 0x2e0390, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 13", 0x2e0390, 0x2e03b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Character Select/Win Assist Portrait", 0x2e03b0, 0x2e03d0, indexKOF97Sprites_IoriOrochi, 0x41 },
    { L"Orochi Iori B - Lifebar Portrait", 0x2e03d0, 0x2e03f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Win Portrait", 0x2eeef0, 0x2eefb0, indexKOF97Sprites_IoriOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_C[] =
{
    { L"Orochi Iori C - Main", 0x2e03f0, 0x2e0410, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 1", 0x2e0410, 0x2e0430, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 2", 0x2e0430, 0x2e0450, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Max Mode", 0x2e0450, 0x2e0470, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 4", 0x2e0470, 0x2e0490, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 5", 0x2e0490, 0x2e04b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Super Trail", 0x2e04b0, 0x2e04d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 7", 0x2e04d0, 0x2e04f0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 8", 0x2e04f0, 0x2e0510, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Electric Palette", 0x2e0510, 0x2e0530, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 10", 0x2e0530, 0x2e0550, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 11", 0x2e0550, 0x2e0570, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 12", 0x2e0570, 0x2e0590, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 13", 0x2e0590, 0x2e05b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Character Select/Win Assist Portrait", 0x2e05b0, 0x2e05d0, indexKOF97Sprites_IoriOrochi, 0x41 },
    { L"Orochi Iori C - Lifebar Portrait", 0x2e05d0, 0x2e05f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Win Portrait", 0x2eeff0, 0x2ef0b0, indexKOF97Sprites_IoriOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_D[] =
{
    { L"Orochi Iori D - Main", 0x2e05f0, 0x2e0610, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 1", 0x2e0610, 0x2e0630, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 2", 0x2e0630, 0x2e0650, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Max Mode", 0x2e0650, 0x2e0670, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 4", 0x2e0670, 0x2e0690, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 5", 0x2e0690, 0x2e06b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Super Trail", 0x2e06b0, 0x2e06d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 7", 0x2e06d0, 0x2e06f0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 8", 0x2e06f0, 0x2e0710, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Electric Palette", 0x2e0710, 0x2e0730, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 10", 0x2e0730, 0x2e0750, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 11", 0x2e0750, 0x2e0770, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 12", 0x2e0770, 0x2e0790, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 13", 0x2e0790, 0x2e07b0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Character Select/Win Assist Portrait", 0x2e07b0, 0x2e07d0, indexKOF97Sprites_IoriOrochi, 0x41 },
    { L"Orochi Iori D - Lifebar Portrait", 0x2e07d0, 0x2e07f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Win Portrait", 0x2ef0f0, 0x2ef1b0, indexKOF97Sprites_IoriOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHILEONA_PALETTES_A[] =
{
    { L"Orochi Leona A - Main", 0x2e07f0, 0x2e0810, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 1", 0x2e0810, 0x2e0830, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 2", 0x2e0830, 0x2e0850, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Max Mode", 0x2e0850, 0x2e0870, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 4", 0x2e0870, 0x2e0890, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 5", 0x2e0890, 0x2e08b0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Super Trail", 0x2e08b0, 0x2e08d0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 7", 0x2e08d0, 0x2e08f0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 8", 0x2e08f0, 0x2e0910, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Electric Palette", 0x2e0910, 0x2e0930, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 10", 0x2e0930, 0x2e0950, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 11", 0x2e0950, 0x2e0970, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 12", 0x2e0970, 0x2e0990, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 13", 0x2e0990, 0x2e09b0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Character Select/Win Assist Portrait", 0x2e09b0, 0x2e09d0, indexKOF97Sprites_LeonaOrochi, 0x41 },
    { L"Orochi Leona A - Lifebar Portrait", 0x2e09d0, 0x2e09f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Win Portrait", 0x2ef1f0, 0x2ef2b0, indexKOF97Sprites_LeonaOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHILEONA_PALETTES_B[] =
{
    { L"Orochi Leona B - Main", 0x2e09f0, 0x2e0a10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 1", 0x2e0a10, 0x2e0a30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 2", 0x2e0a30, 0x2e0a50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Max Mode", 0x2e0a50, 0x2e0a70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 4", 0x2e0a70, 0x2e0a90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 5", 0x2e0a90, 0x2e0ab0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Super Trail", 0x2e0ab0, 0x2e0ad0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 7", 0x2e0ad0, 0x2e0af0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 8", 0x2e0af0, 0x2e0b10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Electric Palette", 0x2e0b10, 0x2e0b30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 10", 0x2e0b30, 0x2e0b50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 11", 0x2e0b50, 0x2e0b70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 12", 0x2e0b70, 0x2e0b90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 13", 0x2e0b90, 0x2e0bb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Character Select/Win Assist Portrait", 0x2e0bb0, 0x2e0bd0, indexKOF97Sprites_LeonaOrochi, 0x41 },
    { L"Orochi Leona B - Lifebar Portrait", 0x2e0bd0, 0x2e0bf0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Win Portrait", 0x2ef2f0, 0x2ef3b0, indexKOF97Sprites_LeonaOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHILEONA_PALETTES_C[] =
{
    { L"Orochi Leona C - Main", 0x2e0bf0, 0x2e0c10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 1", 0x2e0c10, 0x2e0c30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 2", 0x2e0c30, 0x2e0c50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Max Mode", 0x2e0c50, 0x2e0c70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 4", 0x2e0c70, 0x2e0c90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 5", 0x2e0c90, 0x2e0cb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Super Trail", 0x2e0cb0, 0x2e0cd0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 7", 0x2e0cd0, 0x2e0cf0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 8", 0x2e0cf0, 0x2e0d10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Electric Palette", 0x2e0d10, 0x2e0d30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 10", 0x2e0d30, 0x2e0d50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 11", 0x2e0d50, 0x2e0d70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 12", 0x2e0d70, 0x2e0d90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 13", 0x2e0d90, 0x2e0db0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Character Select/Win Assist Portrait", 0x2e0db0, 0x2e0dd0, indexKOF97Sprites_LeonaOrochi, 0x41 },
    { L"Orochi Leona C - Lifebar Portrait", 0x2e0dd0, 0x2e0df0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Win Portrait", 0x2ef3f0, 0x2ef4b0, indexKOF97Sprites_LeonaOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHILEONA_PALETTES_D[] =
{
    { L"Orochi Leona D - Main", 0x2e0df0, 0x2e0e10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 1", 0x2e0e10, 0x2e0e30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 2", 0x2e0e30, 0x2e0e50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Max Mode", 0x2e0e50, 0x2e0e70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 4", 0x2e0e70, 0x2e0e90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 5", 0x2e0e90, 0x2e0eb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Super Trail", 0x2e0eb0, 0x2e0ed0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 7", 0x2e0ed0, 0x2e0ef0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 8", 0x2e0ef0, 0x2e0f10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Electric Palette", 0x2e0f10, 0x2e0f30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 10", 0x2e0f30, 0x2e0f50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 11", 0x2e0f50, 0x2e0f70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 12", 0x2e0f70, 0x2e0f90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 13", 0x2e0f90, 0x2e0fb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Character Select/Win Assist Portrait", 0x2e0fb0, 0x2e0fd0, indexKOF97Sprites_LeonaOrochi, 0x41 },
    { L"Orochi Leona D - Lifebar Portrait", 0x2e0fd0, 0x2e0ff0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Win Portrait", 0x2ef4f0, 0x2ef5b0, indexKOF97Sprites_LeonaOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHI_PALETTES_A[] =
{
    { L"Orochi A - Main", 0x2e0ff0, 0x2e1010, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 1", 0x2e1010, 0x2e1030, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 2", 0x2e1030, 0x2e1050, indexKOF97Sprites_Orochi },
    { L"Orochi A - Max Mode", 0x2e1050, 0x2e1070, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 4", 0x2e1070, 0x2e1090, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 5", 0x2e1090, 0x2e10b0, indexKOF97Sprites_Orochi },
    { L"Orochi A - Super Trail", 0x2e10b0, 0x2e10d0, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 7", 0x2e10d0, 0x2e10f0, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 8", 0x2e10f0, 0x2e1110, indexKOF97Sprites_Orochi },
    { L"Orochi A - Electric Palette", 0x2e1110, 0x2e1130, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 10", 0x2e1130, 0x2e1150, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 11", 0x2e1150, 0x2e1170, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 12", 0x2e1170, 0x2e1190, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 13", 0x2e1190, 0x2e11b0, indexKOF97Sprites_Orochi },
    { L"Orochi A - Character Select/Win Assist Portrait", 0x2e11b0, 0x2e11d0, indexKOF97Sprites_Orochi, 0x41 },
    { L"Orochi A - Lifebar Portrait", 0x2e11d0, 0x2e11f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi A - Win Portrait", 0x2ef5f0, 0x2ef650, indexKOF97Sprites_Orochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHI_PALETTES_B[] =
{
    { L"Orochi B - Main", 0x2e11f0, 0x2e1210, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 1", 0x2e1210, 0x2e1230, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 2", 0x2e1230, 0x2e1250, indexKOF97Sprites_Orochi },
    { L"Orochi B - Max Mode", 0x2e1250, 0x2e1270, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 4", 0x2e1270, 0x2e1290, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 5", 0x2e1290, 0x2e12b0, indexKOF97Sprites_Orochi },
    { L"Orochi B - Super Trail", 0x2e12b0, 0x2e12d0, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 7", 0x2e12d0, 0x2e12f0, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 8", 0x2e12f0, 0x2e1310, indexKOF97Sprites_Orochi },
    { L"Orochi B - Electric Palette", 0x2e1310, 0x2e1330, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 10", 0x2e1330, 0x2e1350, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 11", 0x2e1350, 0x2e1370, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 12", 0x2e1370, 0x2e1390, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 13", 0x2e1390, 0x2e13b0, indexKOF97Sprites_Orochi },
    { L"Orochi B - Character Select/Win Assist Portrait", 0x2e13b0, 0x2e13d0, indexKOF97Sprites_Orochi, 0x41 },
    { L"Orochi B - Lifebar Portrait", 0x2e13d0, 0x2e13f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi B - Win Portrait", 0x2ef6f0, 0x2ef750, indexKOF97Sprites_Orochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHI_PALETTES_C[] =
{
    { L"Orochi C - Main", 0x2e13f0, 0x2e1410, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 1", 0x2e1410, 0x2e1430, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 2", 0x2e1430, 0x2e1450, indexKOF97Sprites_Orochi },
    { L"Orochi C - Max Mode", 0x2e1450, 0x2e1470, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 4", 0x2e1470, 0x2e1490, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 5", 0x2e1490, 0x2e14b0, indexKOF97Sprites_Orochi },
    { L"Orochi C - Super Trail", 0x2e14b0, 0x2e14d0, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 7", 0x2e14d0, 0x2e14f0, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 8", 0x2e14f0, 0x2e1510, indexKOF97Sprites_Orochi },
    { L"Orochi C - Electric Palette", 0x2e1510, 0x2e1530, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 10", 0x2e1530, 0x2e1550, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 11", 0x2e1550, 0x2e1570, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 12", 0x2e1570, 0x2e1590, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 13", 0x2e1590, 0x2e15b0, indexKOF97Sprites_Orochi },
    { L"Orochi C - Character Select/Win Assist Portrait", 0x2e15b0, 0x2e15d0, indexKOF97Sprites_Orochi, 0x41 },
    { L"Orochi C - Lifebar Portrait", 0x2e15d0, 0x2e15f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi C - Win Portrait", 0x2ef7f0, 0x2ef850, indexKOF97Sprites_Orochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHI_PALETTES_D[] =
{
    { L"Orochi D - Main", 0x2e15f0, 0x2e1610, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 1", 0x2e1610, 0x2e1630, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 2", 0x2e1630, 0x2e1650, indexKOF97Sprites_Orochi },
    { L"Orochi D - Max Mode", 0x2e1650, 0x2e1670, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 4", 0x2e1670, 0x2e1690, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 5", 0x2e1690, 0x2e16b0, indexKOF97Sprites_Orochi },
    { L"Orochi D - Super Trail", 0x2e16b0, 0x2e16d0, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 7", 0x2e16d0, 0x2e16f0, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 8", 0x2e16f0, 0x2e1710, indexKOF97Sprites_Orochi },
    { L"Orochi D - Electric Palette", 0x2e1710, 0x2e1730, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 10", 0x2e1730, 0x2e1750, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 11", 0x2e1750, 0x2e1770, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 12", 0x2e1770, 0x2e1790, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 13", 0x2e1790, 0x2e17b0, indexKOF97Sprites_Orochi },
    { L"Orochi D - Character Select/Win Assist Portrait", 0x2e17b0, 0x2e17d0, indexKOF97Sprites_Orochi, 0x41 },
    { L"Orochi D - Lifebar Portrait", 0x2e17d0, 0x2e17f0, indexKOF98Sprites_Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi D - Win Portrait", 0x2ef8f0, 0x2ef950, indexKOF97Sprites_Orochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_A[] =
{
    { L"Shingo A - Main", 0x2e17f0, 0x2e1810, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 1", 0x2e1810, 0x2e1830, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 2", 0x2e1830, 0x2e1850, indexKOF98Sprites_Shingo },
    { L"Shingo A - Max Mode", 0x2e1850, 0x2e1870, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 4", 0x2e1870, 0x2e1890, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 5", 0x2e1890, 0x2e18b0, indexKOF98Sprites_Shingo },
    { L"Shingo A - Super Trail", 0x2e18b0, 0x2e18d0, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 7", 0x2e18d0, 0x2e18f0, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 8", 0x2e18f0, 0x2e1910, indexKOF98Sprites_Shingo },
    { L"Shingo A - Electric Palette", 0x2e1910, 0x2e1930, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 10", 0x2e1930, 0x2e1950, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 11", 0x2e1950, 0x2e1970, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 12", 0x2e1970, 0x2e1990, indexKOF98Sprites_Shingo },
    { L"Shingo A - Extra 13", 0x2e1990, 0x2e19b0, indexKOF98Sprites_Shingo },
    { L"Shingo A - Character Select/Win Assist Portrait", 0x2e19b0, 0x2e19d0, indexKOF97Sprites_Shingo, 0x41 },
    { L"Shingo A - Lifebar Portrait", 0x2e19d0, 0x2e19f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shingo },
    { L"Shingo A - Win Portrait", 0x2ef9f0, 0x2efa90, indexKOF97Sprites_Shingo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_B[] =
{
    { L"Shingo B - Main", 0x2e19f0, 0x2e1a10, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 1", 0x2e1a10, 0x2e1a30, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 2", 0x2e1a30, 0x2e1a50, indexKOF98Sprites_Shingo },
    { L"Shingo B - Max Mode", 0x2e1a50, 0x2e1a70, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 4", 0x2e1a70, 0x2e1a90, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 5", 0x2e1a90, 0x2e1ab0, indexKOF98Sprites_Shingo },
    { L"Shingo B - Super Trail", 0x2e1ab0, 0x2e1ad0, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 7", 0x2e1ad0, 0x2e1af0, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 8", 0x2e1af0, 0x2e1b10, indexKOF98Sprites_Shingo },
    { L"Shingo B - Electric Palette", 0x2e1b10, 0x2e1b30, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 10", 0x2e1b30, 0x2e1b50, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 11", 0x2e1b50, 0x2e1b70, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 12", 0x2e1b70, 0x2e1b90, indexKOF98Sprites_Shingo },
    { L"Shingo B - Extra 13", 0x2e1b90, 0x2e1bb0, indexKOF98Sprites_Shingo },
    { L"Shingo B - Character Select/Win Assist Portrait", 0x2e1bb0, 0x2e1bd0, indexKOF97Sprites_Shingo, 0x41 },
    { L"Shingo B - Lifebar Portrait", 0x2e1bd0, 0x2e1bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shingo },
    { L"Shingo B - Win Portrait", 0x2efaf0, 0x2efb90, indexKOF97Sprites_Shingo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_C[] =
{
    { L"Shingo C - Main", 0x2e1bf0, 0x2e1c10, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 1", 0x2e1c10, 0x2e1c30, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 2", 0x2e1c30, 0x2e1c50, indexKOF98Sprites_Shingo },
    { L"Shingo C - Max Mode", 0x2e1c50, 0x2e1c70, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 4", 0x2e1c70, 0x2e1c90, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 5", 0x2e1c90, 0x2e1cb0, indexKOF98Sprites_Shingo },
    { L"Shingo C - Super Trail", 0x2e1cb0, 0x2e1cd0, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 7", 0x2e1cd0, 0x2e1cf0, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 8", 0x2e1cf0, 0x2e1d10, indexKOF98Sprites_Shingo },
    { L"Shingo C - Electric Palette", 0x2e1d10, 0x2e1d30, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 10", 0x2e1d30, 0x2e1d50, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 11", 0x2e1d50, 0x2e1d70, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 12", 0x2e1d70, 0x2e1d90, indexKOF98Sprites_Shingo },
    { L"Shingo C - Extra 13", 0x2e1d90, 0x2e1db0, indexKOF98Sprites_Shingo },
    { L"Shingo C - Character Select/Win Assist Portrait", 0x2e1db0, 0x2e1dd0, indexKOF97Sprites_Shingo, 0x41 },
    { L"Shingo C - Lifebar Portrait", 0x2e1dd0, 0x2e1df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shingo },
    { L"Shingo C - Win Portrait", 0x2efbf0, 0x2efc90, indexKOF97Sprites_Shingo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_D[] =
{
    { L"Shingo D - Main", 0x2e1df0, 0x2e1e10, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 1", 0x2e1e10, 0x2e1e30, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 2", 0x2e1e30, 0x2e1e50, indexKOF98Sprites_Shingo },
    { L"Shingo D - Max Mode", 0x2e1e50, 0x2e1e70, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 4", 0x2e1e70, 0x2e1e90, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 5", 0x2e1e90, 0x2e1eb0, indexKOF98Sprites_Shingo },
    { L"Shingo D - Super Trail", 0x2e1eb0, 0x2e1ed0, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 7", 0x2e1ed0, 0x2e1ef0, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 8", 0x2e1ef0, 0x2e1f10, indexKOF98Sprites_Shingo },
    { L"Shingo D - Electric Palette", 0x2e1f10, 0x2e1f30, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 10", 0x2e1f30, 0x2e1f50, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 11", 0x2e1f50, 0x2e1f70, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 12", 0x2e1f70, 0x2e1f90, indexKOF98Sprites_Shingo },
    { L"Shingo D - Extra 13", 0x2e1f90, 0x2e1fb0, indexKOF98Sprites_Shingo },
    { L"Shingo D - Character Select/Win Assist Portrait", 0x2e1fb0, 0x2e1fd0, indexKOF97Sprites_Shingo, 0x41 },
    { L"Shingo D - Lifebar Portrait", 0x2e1fd0, 0x2e1ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shingo },
    { L"Shingo D - Win Portrait", 0x2efcf0, 0x2efd90, indexKOF97Sprites_Shingo, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_A[] =
{
    { L"Orochi Yashiro A - Main", 0x2e1ff0, 0x2e2010, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 1", 0x2e2010, 0x2e2030, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 2", 0x2e2030, 0x2e2050, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Max Mode", 0x2e2050, 0x2e2070, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 4", 0x2e2070, 0x2e2090, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 5", 0x2e2090, 0x2e20b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Super Trail", 0x2e20b0, 0x2e20d0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 7", 0x2e20d0, 0x2e20f0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 8", 0x2e20f0, 0x2e2110, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Electric Palette", 0x2e2110, 0x2e2130, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 10", 0x2e2130, 0x2e2150, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 11", 0x2e2150, 0x2e2170, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 12", 0x2e2170, 0x2e2190, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Extra 13", 0x2e2190, 0x2e21b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Character Select/Win Assist Portrait", 0x2e21b0, 0x2e21d0, indexKOF97Sprites_YashiroOrochi, 0x41 },
    { L"Orochi Yashiro A - Lifebar Portrait", 0x2e21d0, 0x2e21f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro A - Win Portrait", 0x2efdf0, 0x2efef0, indexKOF97Sprites_YashiroOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_B[] =
{
    { L"Orochi Yashiro B - Main", 0x2e21f0, 0x2e2210, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 1", 0x2e2210, 0x2e2230, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 2", 0x2e2230, 0x2e2250, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Max Mode", 0x2e2250, 0x2e2270, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 4", 0x2e2270, 0x2e2290, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 5", 0x2e2290, 0x2e22b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Super Trail", 0x2e22b0, 0x2e22d0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 7", 0x2e22d0, 0x2e22f0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 8", 0x2e22f0, 0x2e2310, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Electric Palette", 0x2e2310, 0x2e2330, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 10", 0x2e2330, 0x2e2350, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 11", 0x2e2350, 0x2e2370, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 12", 0x2e2370, 0x2e2390, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Extra 13", 0x2e2390, 0x2e23b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Character Select/Win Assist Portrait", 0x2e23b0, 0x2e23d0, indexKOF97Sprites_YashiroOrochi, 0x41 },
    { L"Orochi Yashiro B - Lifebar Portrait", 0x2e23d0, 0x2e23f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro B - Win Portrait", 0x2efef0, 0x2efff0, indexKOF97Sprites_YashiroOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_C[] =
{
    { L"Orochi Yashiro C - Main", 0x2e23f0, 0x2e2410, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 1", 0x2e2410, 0x2e2430, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 2", 0x2e2430, 0x2e2450, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Max Mode", 0x2e2450, 0x2e2470, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 4", 0x2e2470, 0x2e2490, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 5", 0x2e2490, 0x2e24b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Super Trail", 0x2e24b0, 0x2e24d0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 7", 0x2e24d0, 0x2e24f0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 8", 0x2e24f0, 0x2e2510, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Electric Palette", 0x2e2510, 0x2e2530, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 10", 0x2e2530, 0x2e2550, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 11", 0x2e2550, 0x2e2570, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 12", 0x2e2570, 0x2e2590, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Extra 13", 0x2e2590, 0x2e25b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Character Select/Win Assist Portrait", 0x2e25b0, 0x2e25d0, indexKOF97Sprites_YashiroOrochi, 0x41 },
    { L"Orochi Yashiro C - Lifebar Portrait", 0x2e25d0, 0x2e25f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro C - Win Portrait", 0x2efff0, 0x2f00f0, indexKOF97Sprites_YashiroOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_D[] =
{
    { L"Orochi Yashiro D - Main", 0x2e25f0, 0x2e2610, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 1", 0x2e2610, 0x2e2630, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 2", 0x2e2630, 0x2e2650, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Max Mode", 0x2e2650, 0x2e2670, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 4", 0x2e2670, 0x2e2690, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 5", 0x2e2690, 0x2e26b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Super Trail", 0x2e26b0, 0x2e26d0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 7", 0x2e26d0, 0x2e26f0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 8", 0x2e26f0, 0x2e2710, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Electric Palette", 0x2e2710, 0x2e2730, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 10", 0x2e2730, 0x2e2750, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 11", 0x2e2750, 0x2e2770, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 12", 0x2e2770, 0x2e2790, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Extra 13", 0x2e2790, 0x2e27b0, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Character Select/Win Assist Portrait", 0x2e27b0, 0x2e27d0, indexKOF97Sprites_YashiroOrochi, 0x41 },
    { L"Orochi Yashiro D - Lifebar Portrait", 0x2e27d0, 0x2e27f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Yashiro },
    { L"Orochi Yashiro D - Win Portrait", 0x2f00f0, 0x2f01f0, indexKOF97Sprites_YashiroOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_A[] =
{
    { L"Orochi Shermie A - Main", 0x2e27f0, 0x2e2810, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 1", 0x2e2810, 0x2e2830, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 2", 0x2e2830, 0x2e2850, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Max Mode", 0x2e2850, 0x2e2870, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 4", 0x2e2870, 0x2e2890, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 5", 0x2e2890, 0x2e28b0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Super Trail", 0x2e28b0, 0x2e28d0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 7", 0x2e28d0, 0x2e28f0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 8", 0x2e28f0, 0x2e2910, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Electric Palette", 0x2e2910, 0x2e2930, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 10", 0x2e2930, 0x2e2950, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 11", 0x2e2950, 0x2e2970, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 12", 0x2e2970, 0x2e2990, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Extra 13", 0x2e2990, 0x2e29b0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Character Select/Win Assist Portrait", 0x2e29b0, 0x2e29d0, indexKOF97Sprites_ShermieOrochi, 0x41 },
    { L"Orochi Shermie A - Lifebar Portrait", 0x2e29d0, 0x2e29f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie A - Win Portrait", 0x2f01f0, 0x2f02f0, indexKOF97Sprites_ShermieOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_B[] =
{
    { L"Orochi Shermie B - Main", 0x2e29f0, 0x2e2a10, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 1", 0x2e2a10, 0x2e2a30, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 2", 0x2e2a30, 0x2e2a50, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Max Mode", 0x2e2a50, 0x2e2a70, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 4", 0x2e2a70, 0x2e2a90, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 5", 0x2e2a90, 0x2e2ab0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Super Trail", 0x2e2ab0, 0x2e2ad0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 7", 0x2e2ad0, 0x2e2af0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 8", 0x2e2af0, 0x2e2b10, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Electric Palette", 0x2e2b10, 0x2e2b30, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 10", 0x2e2b30, 0x2e2b50, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 11", 0x2e2b50, 0x2e2b70, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 12", 0x2e2b70, 0x2e2b90, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Extra 13", 0x2e2b90, 0x2e2bb0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Character Select/Win Assist Portrait", 0x2e2bb0, 0x2e2bd0, indexKOF97Sprites_ShermieOrochi, 0x41 },
    { L"Orochi Shermie B - Lifebar Portrait", 0x2e2bd0, 0x2e2bf0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie B - Win Portrait", 0x2f02f0, 0x2f03f0, indexKOF97Sprites_ShermieOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_C[] =
{
    { L"Orochi Shermie C - Main", 0x2e2bf0, 0x2e2c10, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 1", 0x2e2c10, 0x2e2c30, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 2", 0x2e2c30, 0x2e2c50, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Max Mode", 0x2e2c50, 0x2e2c70, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 4", 0x2e2c70, 0x2e2c90, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 5", 0x2e2c90, 0x2e2cb0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Super Trail", 0x2e2cb0, 0x2e2cd0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 7", 0x2e2cd0, 0x2e2cf0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 8", 0x2e2cf0, 0x2e2d10, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Electric Palette", 0x2e2d10, 0x2e2d30, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 10", 0x2e2d30, 0x2e2d50, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 11", 0x2e2d50, 0x2e2d70, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 12", 0x2e2d70, 0x2e2d90, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Extra 13", 0x2e2d90, 0x2e2db0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Character Select/Win Assist Portrait", 0x2e2db0, 0x2e2dd0, indexKOF97Sprites_ShermieOrochi, 0x41 },
    { L"Orochi Shermie C - Lifebar Portrait", 0x2e2dd0, 0x2e2df0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie C - Win Portrait", 0x2f03f0, 0x2f04f0, indexKOF97Sprites_ShermieOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_D[] =
{
    { L"Orochi Shermie D - Main", 0x2e2df0, 0x2e2e10, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 1", 0x2e2e10, 0x2e2e30, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 2", 0x2e2e30, 0x2e2e50, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Max Mode", 0x2e2e50, 0x2e2e70, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 4", 0x2e2e70, 0x2e2e90, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 5", 0x2e2e90, 0x2e2eb0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Super Trail", 0x2e2eb0, 0x2e2ed0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 7", 0x2e2ed0, 0x2e2ef0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 8", 0x2e2ef0, 0x2e2f10, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Electric Palette", 0x2e2f10, 0x2e2f30, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 10", 0x2e2f30, 0x2e2f50, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 11", 0x2e2f50, 0x2e2f70, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 12", 0x2e2f70, 0x2e2f90, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Extra 13", 0x2e2f90, 0x2e2fb0, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Character Select/Win Assist Portrait", 0x2e2fb0, 0x2e2fd0, indexKOF97Sprites_ShermieOrochi, 0x41 },
    { L"Orochi Shermie D - Lifebar Portrait", 0x2e2fd0, 0x2e2ff0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Shermie },
    { L"Orochi Shermie D - Win Portrait", 0x2f04f0, 0x2f05f0, indexKOF97Sprites_ShermieOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_A[] =
{
    { L"Orochi Chris A - Main", 0x2e2ff0, 0x2e3010, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 1", 0x2e3010, 0x2e3030, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 2", 0x2e3030, 0x2e3050, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Max Mode", 0x2e3050, 0x2e3070, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 4", 0x2e3070, 0x2e3090, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 5", 0x2e3090, 0x2e30b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Super Trail", 0x2e30b0, 0x2e30d0, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 7", 0x2e30d0, 0x2e30f0, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 8", 0x2e30f0, 0x2e3110, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Electric Palette", 0x2e3110, 0x2e3130, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 10", 0x2e3130, 0x2e3150, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 11", 0x2e3150, 0x2e3170, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 12", 0x2e3170, 0x2e3190, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Extra 13", 0x2e3190, 0x2e31b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Character Select/Win Assist Portrait", 0x2e31b0, 0x2e31d0, indexKOF97Sprites_ChrisOrochi, 0x41 },
    { L"Orochi Chris A - Lifebar Portrait", 0x2e31d0, 0x2e31f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Orochi Chris A - Win Portrait", 0x2f05f0, 0x2f06f0, indexKOF97Sprites_ChrisOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_B[] =
{
    { L"Orochi Chris B - Main", 0x2e31f0, 0x2e3210, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 1", 0x2e3210, 0x2e3230, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 2", 0x2e3230, 0x2e3250, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Max Mode", 0x2e3250, 0x2e3270, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 4", 0x2e3270, 0x2e3290, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 5", 0x2e3290, 0x2e32b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Super Trail", 0x2e32b0, 0x2e32d0, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 7", 0x2e32d0, 0x2e32f0, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 8", 0x2e32f0, 0x2e3310, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Electric Palette", 0x2e3310, 0x2e3330, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 10", 0x2e3330, 0x2e3350, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 11", 0x2e3350, 0x2e3370, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 12", 0x2e3370, 0x2e3390, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Extra 13", 0x2e3390, 0x2e33b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Character Select/Win Assist Portrait", 0x2e33b0, 0x2e33d0, indexKOF97Sprites_ChrisOrochi, 0x41 },
    { L"Orochi Chris B - Lifebar Portrait", 0x2e33d0, 0x2e33f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Orochi Chris B - Win Portrait", 0x2f06f0, 0x2f07f0, indexKOF97Sprites_ChrisOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_C[] =
{
    { L"Orochi Chris C - Main", 0x2e33f0, 0x2e3410, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 1", 0x2e3410, 0x2e3430, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 2", 0x2e3430, 0x2e3450, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Max Mode", 0x2e3450, 0x2e3470, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 4", 0x2e3470, 0x2e3490, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 5", 0x2e3490, 0x2e34b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Super Trail", 0x2e34b0, 0x2e34d0, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 7", 0x2e34d0, 0x2e34f0, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 8", 0x2e34f0, 0x2e3510, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Electric Palette", 0x2e3510, 0x2e3530, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 10", 0x2e3530, 0x2e3550, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 11", 0x2e3550, 0x2e3570, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 12", 0x2e3570, 0x2e3590, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Extra 13", 0x2e3590, 0x2e35b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Character Select/Win Assist Portrait", 0x2e35b0, 0x2e35d0, indexKOF97Sprites_ChrisOrochi, 0x41 },
    { L"Orochi Chris C - Lifebar Portrait", 0x2e35d0, 0x2e35f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Orochi Chris C - Win Portrait", 0x2f07f0, 0x2f08f0, indexKOF97Sprites_ChrisOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_D[] =
{
    { L"Orochi Chris D - Main", 0x2e35f0, 0x2e3610, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 1", 0x2e3610, 0x2e3630, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 2", 0x2e3630, 0x2e3650, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Max Mode", 0x2e3650, 0x2e3670, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 4", 0x2e3670, 0x2e3690, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 5", 0x2e3690, 0x2e36b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Super Trail", 0x2e36b0, 0x2e36d0, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 7", 0x2e36d0, 0x2e36f0, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 8", 0x2e36f0, 0x2e3710, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Electric Palette", 0x2e3710, 0x2e3730, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 10", 0x2e3730, 0x2e3750, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 11", 0x2e3750, 0x2e3770, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 12", 0x2e3770, 0x2e3790, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Extra 13", 0x2e3790, 0x2e37b0, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Character Select/Win Assist Portrait", 0x2e37b0, 0x2e37d0, indexKOF97Sprites_ChrisOrochi, 0x41 },
    { L"Orochi Chris D - Lifebar Portrait", 0x2e37d0, 0x2e37f0, indexKOF98Sprites_Lifebar, indexKOF98Sprites_Chris },
    { L"Orochi Chris D - Win Portrait", 0x2f08f0, 0x2f09f0, indexKOF97Sprites_ChrisOrochi, 0x40 },
};

const sGame_PaletteDataset KOF97_A_KYO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e37f0, 0x2e3810 },
    { L"Effect 1", 0x2e3810, 0x2e3830 },
    { L"Effect 2", 0x2e3830, 0x2e3850 },
    { L"Effect 3", 0x2e3850, 0x2e3870 },
    { L"Effect 4", 0x2e3870, 0x2e3890 },
    { L"Effect 5", 0x2e3890, 0x2e38b0 },
    { L"Effect 6", 0x2e38b0, 0x2e38d0 },
};

const sGame_PaletteDataset KOF97_A_BENIMARU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e39f0, 0x2e3a10 },
    { L"Effect 1", 0x2e3a10, 0x2e3a30 },
    { L"Effect 2", 0x2e3a30, 0x2e3a50 },
    { L"Effect 3", 0x2e3a50, 0x2e3a70 },
};

const sGame_PaletteDataset KOF97_A_TERRY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e3df0, 0x2e3e10 },
    { L"Effect 1", 0x2e3e10, 0x2e3e30 },
    { L"Effect 2", 0x2e3e30, 0x2e3e50 },
    { L"Effect 3", 0x2e3e50, 0x2e3e70 },
};

const sGame_PaletteDataset KOF97_A_ANDY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e3ff0, 0x2e4010 },
    { L"Effect 1", 0x2e4010, 0x2e4030 },
    { L"Effect 2", 0x2e4030, 0x2e4050 },
    { L"Effect 3", 0x2e4050, 0x2e4070 },
    { L"Effect 4", 0x2e4070, 0x2e4090 },
    { L"Effect 5", 0x2e4090, 0x2e40b0 },
};

const sGame_PaletteDataset KOF97_A_JOE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e41f0, 0x2e4210 },
    { L"Effect 1", 0x2e4210, 0x2e4230 },
    { L"Effect 2", 0x2e4230, 0x2e4250 },
    { L"Effect 3", 0x2e4250, 0x2e4270 },
    { L"Effect 4", 0x2e4270, 0x2e4290 },
    { L"Effect 5", 0x2e4290, 0x2e42b0 },
};

const sGame_PaletteDataset KOF97_A_RYO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e43f0, 0x2e4410 },
    { L"Effect 1", 0x2e4410, 0x2e4430 },
    { L"Effect 2", 0x2e4430, 0x2e4450 },
    { L"Effect 3", 0x2e4450, 0x2e4470 },
    { L"Effect 11", 0x2e4550, 0x2e4570 },
    { L"Effect 12", 0x2e4570, 0x2e4590 },
    { L"Effect 13", 0x2e4590, 0x2e45b0 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e45f0, 0x2e4610 },
    { L"Effect 1", 0x2e4610, 0x2e4630 },
    { L"Effect 2", 0x2e4630, 0x2e4650 },
    { L"Effect 3", 0x2e4650, 0x2e4670 },
};

const sGame_PaletteDataset KOF97_A_YURI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e47f0, 0x2e4810 },
    { L"Effect 1", 0x2e4810, 0x2e4830 },
    { L"Effect 2", 0x2e4830, 0x2e4850 },
    { L"Effect 3", 0x2e4850, 0x2e4870 },
    { L"Effect 4", 0x2e4870, 0x2e4890 },
};

const sGame_PaletteDataset KOF97_A_LEONA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e49f0, 0x2e4a10 },
    { L"Effect 1", 0x2e4a10, 0x2e4a30 },
    { L"Effect 2", 0x2e4a30, 0x2e4a50 },
    { L"Effect 3", 0x2e4a50, 0x2e4a70 },
    { L"Effect 4", 0x2e4a70, 0x2e4a90 },
    { L"Effect 5", 0x2e4a90, 0x2e4ab0 },
};

const sGame_PaletteDataset KOF97_A_ATHENA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e4ff0, 0x2e5010 },
    { L"Effect 1", 0x2e5010, 0x2e5030 },
    { L"Effect 2", 0x2e5030, 0x2e5050 },
    { L"Effect 3", 0x2e5050, 0x2e5070 },
    { L"Effect 4", 0x2e5070, 0x2e5090 },
    { L"Effect 5", 0x2e5090, 0x2e50b0 },
    { L"Effect 6", 0x2e50b0, 0x2e50d0 },
    { L"Effect 7", 0x2e50d0, 0x2e50f0 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e51f0, 0x2e5210 },
    { L"Effect 1", 0x2e5210, 0x2e5230 },
    { L"Effect 2", 0x2e5230, 0x2e5250 },
    { L"Effect 3", 0x2e5250, 0x2e5270 },
};

const sGame_PaletteDataset KOF97_A_CHIN_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e53f0, 0x2e5410 },
    { L"Effect 1", 0x2e5410, 0x2e5430 },
    { L"Effect 2", 0x2e5430, 0x2e5450 },
    { L"Effect 3", 0x2e5450, 0x2e5470 },
    { L"Effect 4", 0x2e5470, 0x2e5490 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e55f0, 0x2e5610 },
};

const sGame_PaletteDataset KOF97_A_MAI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e57f0, 0x2e5810 },
    { L"Effect 1", 0x2e5810, 0x2e5830 },
    { L"Effect 2", 0x2e5830, 0x2e5850 },
    { L"Effect 3", 0x2e5850, 0x2e5870 },
    { L"Effect 4", 0x2e5870, 0x2e5890 },
    { L"Effect 5", 0x2e5890, 0x2e58b0 },
};

const sGame_PaletteDataset KOF97_A_KING_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e59f0, 0x2e5a10 },
    { L"Effect 1", 0x2e5a10, 0x2e5a30 },
};

const sGame_PaletteDataset KOF97_A_CHOI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e5ff0, 0x2e6010 },
    { L"Effect 1", 0x2e6010, 0x2e6030 },
    { L"Effect 2", 0x2e6030, 0x2e6050 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e61f0, 0x2e6210 },
    { L"Effect 1", 0x2e6210, 0x2e6230 },
    { L"Effect 2", 0x2e6230, 0x2e6250 },
    { L"Effect 3", 0x2e6250, 0x2e6270 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e63f0, 0x2e6410 },
    { L"Effect 1", 0x2e6410, 0x2e6430 },
    { L"Effect 2", 0x2e6430, 0x2e6450 },
    { L"Effect 3", 0x2e6450, 0x2e6470 },
};

const sGame_PaletteDataset KOF97_A_BILLY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e65f0, 0x2e6610 },
    { L"Effect 1", 0x2e6610, 0x2e6630 },
    { L"Effect 2", 0x2e6630, 0x2e6650 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e67f0, 0x2e6810 },
    { L"Effect 1", 0x2e6810, 0x2e6830 },
    { L"Effect 2", 0x2e6830, 0x2e6850 },
    { L"Effect 3", 0x2e6850, 0x2e6870 },
    { L"Effect 4", 0x2e6870, 0x2e6890 },
    { L"Effect 11", 0x2e6950, 0x2e6970 },
    { L"Effect 12", 0x2e6970, 0x2e6990 },
    { L"Effect 13", 0x2e6990, 0x2e69b0 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e69f0, 0x2e6a10 },
    { L"Effect 1", 0x2e6a10, 0x2e6a30 },
    { L"Effect 2", 0x2e6a30, 0x2e6a50 },
    { L"Effect 3", 0x2e6a50, 0x2e6a70 },
    { L"Effect 4", 0x2e6a70, 0x2e6a90 },
    { L"Effect 5", 0x2e6a90, 0x2e6ab0 },
    { L"Effect 6", 0x2e6ab0, 0x2e6ad0 },
    { L"Effect 7", 0x2e6ad0, 0x2e6af0 },
    { L"Effect 10", 0x2e6b30, 0x2e6b50 },
    { L"Effect 13", 0x2e6b90, 0x2e6bb0 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e6bf0, 0x2e6c10 },
    { L"Effect 1", 0x2e6c10, 0x2e6c30 },
    { L"Effect 2", 0x2e6c30, 0x2e6c50 },
    { L"Effect 3", 0x2e6c50, 0x2e6c70 },
    { L"Effect 4", 0x2e6c70, 0x2e6c90 },
    { L"Effect 5", 0x2e6c90, 0x2e6cb0 },
    { L"Effect 6", 0x2e6cb0, 0x2e6cd0 },
    { L"Effect 7", 0x2e6cd0, 0x2e6cf0 },
    { L"Effect 8", 0x2e6cf0, 0x2e6d10 },
    { L"Effect 9", 0x2e6d10, 0x2e6d30 },
    { L"Effect 10", 0x2e6d30, 0x2e6d50 },
};

const sGame_PaletteDataset KOF97_A_IORI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e6df0, 0x2e6e10 },
    { L"Effect 1", 0x2e6e10, 0x2e6e30 },
    { L"Effect 2", 0x2e6e30, 0x2e6e50 },
    { L"Effect 3", 0x2e6e50, 0x2e6e70 },
    { L"Effect 4", 0x2e6e70, 0x2e6e90 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e6ff0, 0x2e7010 },
    { L"Effect 1", 0x2e7010, 0x2e7030 },
    { L"Effect 2", 0x2e7030, 0x2e7050 },
    { L"Effect 3", 0x2e7050, 0x2e7070 },
    { L"Effect 4", 0x2e7070, 0x2e7090 },
};

const sGame_PaletteDataset KOF97_A_OROCHILEONA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e71f0, 0x2e7210 },
    { L"Effect 1", 0x2e7210, 0x2e7230 },
    { L"Effect 2", 0x2e7230, 0x2e7250 },
    { L"Effect 3", 0x2e7250, 0x2e7270 },
    { L"Effect 4", 0x2e7270, 0x2e7290 },
    { L"Effect 5", 0x2e7290, 0x2e72b0 },
};

const sGame_PaletteDataset KOF97_A_OROCHI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e73f0, 0x2e7410 },
    { L"Effect 1", 0x2e7410, 0x2e7430 },
    { L"Effect 2", 0x2e7430, 0x2e7450 },
    { L"Effect 3", 0x2e7450, 0x2e7470 },
    { L"Effect 4", 0x2e7470, 0x2e7490 },
    { L"Effect 5", 0x2e7490, 0x2e74b0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e77f0, 0x2e7810 },
    { L"Effect 1", 0x2e7810, 0x2e7830 },
    { L"Effect 2", 0x2e7830, 0x2e7850 },
    { L"Effect 3", 0x2e7850, 0x2e7870 },
    { L"Effect 4", 0x2e7870, 0x2e7890 },
    { L"Effect 11", 0x2e7950, 0x2e7970 },
    { L"Effect 12", 0x2e7970, 0x2e7990 },
    { L"Effect 13", 0x2e7990, 0x2e79b0 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e79f0, 0x2e7a10 },
    { L"Effect 1", 0x2e7a10, 0x2e7a30 },
    { L"Effect 2", 0x2e7a30, 0x2e7a50 },
    { L"Effect 3", 0x2e7a50, 0x2e7a70 },
    { L"Effect 4", 0x2e7a70, 0x2e7a90 },
    { L"Effect 5", 0x2e7a90, 0x2e7ab0 },
    { L"Effect 6", 0x2e7ab0, 0x2e7ad0 },
    { L"Effect 7", 0x2e7ad0, 0x2e7af0 },
    { L"Effect 10", 0x2e7b30, 0x2e7b50 },
    { L"Effect 13", 0x2e7b90, 0x2e7bb0 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e7bf0, 0x2e7c10 },
    { L"Effect 1", 0x2e7c10, 0x2e7c30 },
    { L"Effect 2", 0x2e7c30, 0x2e7c50 },
    { L"Effect 3", 0x2e7c50, 0x2e7c70 },
    { L"Effect 4", 0x2e7c70, 0x2e7c90 },
    { L"Effect 5", 0x2e7c90, 0x2e7cb0 },
    { L"Effect 6", 0x2e7cb0, 0x2e7cd0 },
    { L"Effect 7", 0x2e7cd0, 0x2e7cf0 },
    { L"Effect 8", 0x2e7cf0, 0x2e7d10 },
    { L"Effect 9", 0x2e7d10, 0x2e7d30 },
    { L"Effect 10", 0x2e7d30, 0x2e7d50 },
};


const sGame_PaletteDataset KOF97_A_OROCHI_SHARED_PALETTES[] =
{
    { L"Orochi Shared Flash 1", 0x2ff9f0, 0x2ffa10, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 2", 0x2ffa10, 0x2ffa30, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 3", 0x2ffa30, 0x2ffa50, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 4", 0x2ffa50, 0x2ffa70, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 5", 0x2ffa70, 0x2ffa90, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 6", 0x2ffa90, 0x2ffab0, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 7", 0x2ffab0, 0x2ffad0, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 8", 0x2ffad0, 0x2ffaf0, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 9", 0x2ffaf0, 0x2ffb10, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 10", 0x2ffb10, 0x2ffb30, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 11", 0x2ffb30, 0x2ffb50, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 12", 0x2ffb50, 0x2ffb70, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 13", 0x2ffb70, 0x2ffb90, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 14", 0x2ffb90, 0x2ffbb0, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 15", 0x2ffbb0, 0x2ffbd0, indexKOF97Sprites_Orochi },
    { L"Orochi Shared Flash 16", 0x2ffbd0, 0x2ffbf0, indexKOF97Sprites_Orochi },
};

const sDescTreeNode KOF97_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_KYO_PALETTES_A, ARRAYSIZE(KOF97_A_KYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_KYO_PALETTES_B, ARRAYSIZE(KOF97_A_KYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_KYO_PALETTES_C, ARRAYSIZE(KOF97_A_KYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_KYO_PALETTES_D, ARRAYSIZE(KOF97_A_KYO_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_KYO_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_KYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_BENIMARU_PALETTES_A, ARRAYSIZE(KOF97_A_BENIMARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_BENIMARU_PALETTES_B, ARRAYSIZE(KOF97_A_BENIMARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_BENIMARU_PALETTES_C, ARRAYSIZE(KOF97_A_BENIMARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_BENIMARU_PALETTES_D, ARRAYSIZE(KOF97_A_BENIMARU_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_BENIMARU_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_BENIMARU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_DAIMON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_DAIMON_PALETTES_A, ARRAYSIZE(KOF97_A_DAIMON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_DAIMON_PALETTES_B, ARRAYSIZE(KOF97_A_DAIMON_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_DAIMON_PALETTES_C, ARRAYSIZE(KOF97_A_DAIMON_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_DAIMON_PALETTES_D, ARRAYSIZE(KOF97_A_DAIMON_PALETTES_D) },
};

const sDescTreeNode KOF97_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_TERRY_PALETTES_A, ARRAYSIZE(KOF97_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_TERRY_PALETTES_B, ARRAYSIZE(KOF97_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_TERRY_PALETTES_C, ARRAYSIZE(KOF97_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_TERRY_PALETTES_D, ARRAYSIZE(KOF97_A_TERRY_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_TERRY_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_TERRY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_ANDY_PALETTES_A, ARRAYSIZE(KOF97_A_ANDY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_ANDY_PALETTES_B, ARRAYSIZE(KOF97_A_ANDY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_ANDY_PALETTES_C, ARRAYSIZE(KOF97_A_ANDY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_ANDY_PALETTES_D, ARRAYSIZE(KOF97_A_ANDY_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_ANDY_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_ANDY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_JOE_PALETTES_A, ARRAYSIZE(KOF97_A_JOE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_JOE_PALETTES_B, ARRAYSIZE(KOF97_A_JOE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_JOE_PALETTES_C, ARRAYSIZE(KOF97_A_JOE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_JOE_PALETTES_D, ARRAYSIZE(KOF97_A_JOE_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_JOE_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_JOE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_RYO_PALETTES_A, ARRAYSIZE(KOF97_A_RYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_RYO_PALETTES_B, ARRAYSIZE(KOF97_A_RYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_RYO_PALETTES_C, ARRAYSIZE(KOF97_A_RYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_RYO_PALETTES_D, ARRAYSIZE(KOF97_A_RYO_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_RYO_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_RYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_ROBERT_PALETTES_A, ARRAYSIZE(KOF97_A_ROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_ROBERT_PALETTES_B, ARRAYSIZE(KOF97_A_ROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_ROBERT_PALETTES_C, ARRAYSIZE(KOF97_A_ROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_ROBERT_PALETTES_D, ARRAYSIZE(KOF97_A_ROBERT_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_ROBERT_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_ROBERT_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_YURI_PALETTES_A, ARRAYSIZE(KOF97_A_YURI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_YURI_PALETTES_B, ARRAYSIZE(KOF97_A_YURI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_YURI_PALETTES_C, ARRAYSIZE(KOF97_A_YURI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_YURI_PALETTES_D, ARRAYSIZE(KOF97_A_YURI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_YURI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_YURI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_LEONA_PALETTES_A, ARRAYSIZE(KOF97_A_LEONA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_LEONA_PALETTES_B, ARRAYSIZE(KOF97_A_LEONA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_LEONA_PALETTES_C, ARRAYSIZE(KOF97_A_LEONA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_LEONA_PALETTES_D, ARRAYSIZE(KOF97_A_LEONA_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_LEONA_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_LEONA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_RALF_PALETTES_A, ARRAYSIZE(KOF97_A_RALF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_RALF_PALETTES_B, ARRAYSIZE(KOF97_A_RALF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_RALF_PALETTES_C, ARRAYSIZE(KOF97_A_RALF_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_RALF_PALETTES_D, ARRAYSIZE(KOF97_A_RALF_PALETTES_D) },
};

const sDescTreeNode KOF97_A_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_CLARK_PALETTES_A, ARRAYSIZE(KOF97_A_CLARK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_CLARK_PALETTES_B, ARRAYSIZE(KOF97_A_CLARK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_CLARK_PALETTES_C, ARRAYSIZE(KOF97_A_CLARK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_CLARK_PALETTES_D, ARRAYSIZE(KOF97_A_CLARK_PALETTES_D) },
};

const sDescTreeNode KOF97_A_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_ATHENA_PALETTES_A, ARRAYSIZE(KOF97_A_ATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_ATHENA_PALETTES_B, ARRAYSIZE(KOF97_A_ATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_ATHENA_PALETTES_C, ARRAYSIZE(KOF97_A_ATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_ATHENA_PALETTES_D, ARRAYSIZE(KOF97_A_ATHENA_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_ATHENA_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_ATHENA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_KENSOU_PALETTES_A, ARRAYSIZE(KOF97_A_KENSOU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_KENSOU_PALETTES_B, ARRAYSIZE(KOF97_A_KENSOU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_KENSOU_PALETTES_C, ARRAYSIZE(KOF97_A_KENSOU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_KENSOU_PALETTES_D, ARRAYSIZE(KOF97_A_KENSOU_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_KENSOU_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_KENSOU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_CHIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIN_PALETTES_A, ARRAYSIZE(KOF97_A_CHIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIN_PALETTES_B, ARRAYSIZE(KOF97_A_CHIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIN_PALETTES_C, ARRAYSIZE(KOF97_A_CHIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIN_PALETTES_D, ARRAYSIZE(KOF97_A_CHIN_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIN_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_CHIN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_CHIZURU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIZURU_PALETTES_A, ARRAYSIZE(KOF97_A_CHIZURU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIZURU_PALETTES_B, ARRAYSIZE(KOF97_A_CHIZURU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIZURU_PALETTES_C, ARRAYSIZE(KOF97_A_CHIZURU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIZURU_PALETTES_D, ARRAYSIZE(KOF97_A_CHIZURU_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIZURU_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_CHIZURU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_MAI_PALETTES_A, ARRAYSIZE(KOF97_A_MAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_MAI_PALETTES_B, ARRAYSIZE(KOF97_A_MAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_MAI_PALETTES_C, ARRAYSIZE(KOF97_A_MAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_MAI_PALETTES_D, ARRAYSIZE(KOF97_A_MAI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_MAI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_MAI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_KING_PALETTES_A, ARRAYSIZE(KOF97_A_KING_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_KING_PALETTES_B, ARRAYSIZE(KOF97_A_KING_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_KING_PALETTES_C, ARRAYSIZE(KOF97_A_KING_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_KING_PALETTES_D, ARRAYSIZE(KOF97_A_KING_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_KING_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_KING_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_KIM_PALETTES_A, ARRAYSIZE(KOF97_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_KIM_PALETTES_B, ARRAYSIZE(KOF97_A_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_KIM_PALETTES_C, ARRAYSIZE(KOF97_A_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_KIM_PALETTES_D, ARRAYSIZE(KOF97_A_KIM_PALETTES_D) },
};

const sDescTreeNode KOF97_A_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_CHANG_PALETTES_A, ARRAYSIZE(KOF97_A_CHANG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_CHANG_PALETTES_B, ARRAYSIZE(KOF97_A_CHANG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_CHANG_PALETTES_C, ARRAYSIZE(KOF97_A_CHANG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_CHANG_PALETTES_D, ARRAYSIZE(KOF97_A_CHANG_PALETTES_D) },
};

const sDescTreeNode KOF97_A_CHOI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_CHOI_PALETTES_A, ARRAYSIZE(KOF97_A_CHOI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_CHOI_PALETTES_B, ARRAYSIZE(KOF97_A_CHOI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_CHOI_PALETTES_C, ARRAYSIZE(KOF97_A_CHOI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_CHOI_PALETTES_D, ARRAYSIZE(KOF97_A_CHOI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_CHOI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_CHOI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_YAMAZAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_YAMAZAKI_PALETTES_A, ARRAYSIZE(KOF97_A_YAMAZAKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_YAMAZAKI_PALETTES_B, ARRAYSIZE(KOF97_A_YAMAZAKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_YAMAZAKI_PALETTES_C, ARRAYSIZE(KOF97_A_YAMAZAKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_YAMAZAKI_PALETTES_D, ARRAYSIZE(KOF97_A_YAMAZAKI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_YAMAZAKI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_YAMAZAKI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF97_A_BLUEMARY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF97_A_BLUEMARY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF97_A_BLUEMARY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF97_A_BLUEMARY_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_BLUEMARY_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_BLUEMARY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_BILLY_PALETTES_A, ARRAYSIZE(KOF97_A_BILLY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_BILLY_PALETTES_B, ARRAYSIZE(KOF97_A_BILLY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_BILLY_PALETTES_C, ARRAYSIZE(KOF97_A_BILLY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_BILLY_PALETTES_D, ARRAYSIZE(KOF97_A_BILLY_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_BILLY_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_BILLY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_YASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_YASHIRO_PALETTES_A, ARRAYSIZE(KOF97_A_YASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_YASHIRO_PALETTES_B, ARRAYSIZE(KOF97_A_YASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_YASHIRO_PALETTES_C, ARRAYSIZE(KOF97_A_YASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_YASHIRO_PALETTES_D, ARRAYSIZE(KOF97_A_YASHIRO_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_YASHIRO_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_YASHIRO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_SHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_SHERMIE_PALETTES_A, ARRAYSIZE(KOF97_A_SHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_SHERMIE_PALETTES_B, ARRAYSIZE(KOF97_A_SHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_SHERMIE_PALETTES_C, ARRAYSIZE(KOF97_A_SHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_SHERMIE_PALETTES_D, ARRAYSIZE(KOF97_A_SHERMIE_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_SHERMIE_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_SHERMIE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_CHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_CHRIS_PALETTES_A, ARRAYSIZE(KOF97_A_CHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_CHRIS_PALETTES_B, ARRAYSIZE(KOF97_A_CHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_CHRIS_PALETTES_C, ARRAYSIZE(KOF97_A_CHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_CHRIS_PALETTES_D, ARRAYSIZE(KOF97_A_CHRIS_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_CHRIS_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_CHRIS_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_IORI_PALETTES_A, ARRAYSIZE(KOF97_A_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_IORI_PALETTES_B, ARRAYSIZE(KOF97_A_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_IORI_PALETTES_C, ARRAYSIZE(KOF97_A_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_IORI_PALETTES_D, ARRAYSIZE(KOF97_A_IORI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_IORI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_IORI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_OROCHIIORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIIORI_PALETTES_A, ARRAYSIZE(KOF97_A_OROCHIIORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIIORI_PALETTES_B, ARRAYSIZE(KOF97_A_OROCHIIORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIIORI_PALETTES_C, ARRAYSIZE(KOF97_A_OROCHIIORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIIORI_PALETTES_D, ARRAYSIZE(KOF97_A_OROCHIIORI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIIORI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_OROCHIIORI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_OROCHILEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHILEONA_PALETTES_A, ARRAYSIZE(KOF97_A_OROCHILEONA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHILEONA_PALETTES_B, ARRAYSIZE(KOF97_A_OROCHILEONA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHILEONA_PALETTES_C, ARRAYSIZE(KOF97_A_OROCHILEONA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHILEONA_PALETTES_D, ARRAYSIZE(KOF97_A_OROCHILEONA_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHILEONA_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_OROCHILEONA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_OROCHI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_PALETTES_A, ARRAYSIZE(KOF97_A_OROCHI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_PALETTES_B, ARRAYSIZE(KOF97_A_OROCHI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_PALETTES_C, ARRAYSIZE(KOF97_A_OROCHI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_PALETTES_D, ARRAYSIZE(KOF97_A_OROCHI_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_OROCHI_EFFECT_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_SHARED_PALETTES, ARRAYSIZE(KOF97_A_OROCHI_SHARED_PALETTES) },
};

const sDescTreeNode KOF97_A_SHINGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_SHINGO_PALETTES_A, ARRAYSIZE(KOF97_A_SHINGO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_SHINGO_PALETTES_B, ARRAYSIZE(KOF97_A_SHINGO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_SHINGO_PALETTES_C, ARRAYSIZE(KOF97_A_SHINGO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_SHINGO_PALETTES_D, ARRAYSIZE(KOF97_A_SHINGO_PALETTES_D) },
};

const sDescTreeNode KOF97_A_OROCHIYASHIRO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIYASHIRO_PALETTES_A, ARRAYSIZE(KOF97_A_OROCHIYASHIRO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIYASHIRO_PALETTES_B, ARRAYSIZE(KOF97_A_OROCHIYASHIRO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIYASHIRO_PALETTES_C, ARRAYSIZE(KOF97_A_OROCHIYASHIRO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIYASHIRO_PALETTES_D, ARRAYSIZE(KOF97_A_OROCHIYASHIRO_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIYASHIRO_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_OROCHIYASHIRO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_OROCHISHERMIE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHISHERMIE_PALETTES_A, ARRAYSIZE(KOF97_A_OROCHISHERMIE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHISHERMIE_PALETTES_B, ARRAYSIZE(KOF97_A_OROCHISHERMIE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHISHERMIE_PALETTES_C, ARRAYSIZE(KOF97_A_OROCHISHERMIE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHISHERMIE_PALETTES_D, ARRAYSIZE(KOF97_A_OROCHISHERMIE_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHISHERMIE_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_OROCHISHERMIE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_OROCHICHRIS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHICHRIS_PALETTES_A, ARRAYSIZE(KOF97_A_OROCHICHRIS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHICHRIS_PALETTES_B, ARRAYSIZE(KOF97_A_OROCHICHRIS_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHICHRIS_PALETTES_C, ARRAYSIZE(KOF97_A_OROCHICHRIS_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHICHRIS_PALETTES_D, ARRAYSIZE(KOF97_A_OROCHICHRIS_PALETTES_D) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHICHRIS_EFFECT_PALETTES, ARRAYSIZE(KOF97_A_OROCHICHRIS_EFFECT_PALETTES) },
};

const sDescTreeNode KOF97_A_UNITS[] =
{
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF97_A_KYO_COLLECTION, ARRAYSIZE(KOF97_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF97_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF97_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF97_A_DAIMON_COLLECTION, ARRAYSIZE(KOF97_A_DAIMON_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF97_A_TERRY_COLLECTION, ARRAYSIZE(KOF97_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF97_A_ANDY_COLLECTION, ARRAYSIZE(KOF97_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF97_A_JOE_COLLECTION, ARRAYSIZE(KOF97_A_JOE_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF97_A_RYO_COLLECTION, ARRAYSIZE(KOF97_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF97_A_ROBERT_COLLECTION, ARRAYSIZE(KOF97_A_ROBERT_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF97_A_YURI_COLLECTION, ARRAYSIZE(KOF97_A_YURI_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF97_A_LEONA_COLLECTION, ARRAYSIZE(KOF97_A_LEONA_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF97_A_RALF_COLLECTION, ARRAYSIZE(KOF97_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF97_A_CLARK_COLLECTION, ARRAYSIZE(KOF97_A_CLARK_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF97_A_ATHENA_COLLECTION, ARRAYSIZE(KOF97_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF97_A_KENSOU_COLLECTION, ARRAYSIZE(KOF97_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIN_COLLECTION, ARRAYSIZE(KOF97_A_CHIN_COLLECTION) },
    { L"Chizuru", DESC_NODETYPE_TREE, (void*)KOF97_A_CHIZURU_COLLECTION, ARRAYSIZE(KOF97_A_CHIZURU_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF97_A_MAI_COLLECTION, ARRAYSIZE(KOF97_A_MAI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF97_A_KING_COLLECTION, ARRAYSIZE(KOF97_A_KING_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF97_A_KIM_COLLECTION, ARRAYSIZE(KOF97_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF97_A_CHANG_COLLECTION, ARRAYSIZE(KOF97_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF97_A_CHOI_COLLECTION, ARRAYSIZE(KOF97_A_CHOI_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)KOF97_A_YAMAZAKI_COLLECTION, ARRAYSIZE(KOF97_A_YAMAZAKI_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF97_A_BLUEMARY_COLLECTION, ARRAYSIZE(KOF97_A_BLUEMARY_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)KOF97_A_BILLY_COLLECTION, ARRAYSIZE(KOF97_A_BILLY_COLLECTION) },
    { L"Yashiro", DESC_NODETYPE_TREE, (void*)KOF97_A_YASHIRO_COLLECTION, ARRAYSIZE(KOF97_A_YASHIRO_COLLECTION) },
    { L"Shermie", DESC_NODETYPE_TREE, (void*)KOF97_A_SHERMIE_COLLECTION, ARRAYSIZE(KOF97_A_SHERMIE_COLLECTION) },
    { L"Chris", DESC_NODETYPE_TREE, (void*)KOF97_A_CHRIS_COLLECTION, ARRAYSIZE(KOF97_A_CHRIS_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF97_A_IORI_COLLECTION, ARRAYSIZE(KOF97_A_IORI_COLLECTION) },
    { L"Orochi Iori", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIIORI_COLLECTION, ARRAYSIZE(KOF97_A_OROCHIIORI_COLLECTION) },
    { L"Orochi Leona", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHILEONA_COLLECTION, ARRAYSIZE(KOF97_A_OROCHILEONA_COLLECTION) },
    { L"Orochi", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHI_COLLECTION, ARRAYSIZE(KOF97_A_OROCHI_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF97_A_SHINGO_COLLECTION, ARRAYSIZE(KOF97_A_SHINGO_COLLECTION) },
    { L"Orochi Yashiro", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHIYASHIRO_COLLECTION, ARRAYSIZE(KOF97_A_OROCHIYASHIRO_COLLECTION) },
    { L"Orochi Shermie", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHISHERMIE_COLLECTION, ARRAYSIZE(KOF97_A_OROCHISHERMIE_COLLECTION) },
    { L"Orochi Chris", DESC_NODETYPE_TREE, (void*)KOF97_A_OROCHICHRIS_COLLECTION, ARRAYSIZE(KOF97_A_OROCHICHRIS_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF97_A_BONUS_COLLECTION, ARRAYSIZE(KOF97_A_BONUS_COLLECTION) },
};

constexpr auto KOF97_A_NUMUNIT = ARRAYSIZE(KOF97_A_UNITS);

#define KOF97_A_EXTRALOC KOF97_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF97_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

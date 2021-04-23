#pragma once

// These are hand-generated: don't remove these.
const UINT16 KOF97_A_IMG_UNITS[] =
{
    indexKOFSprites_98Kyo,
    indexKOFSprites_98Benimaru,
    indexKOFSprites_98Daimon,
    indexKOFSprites_98Terry,
    indexKOFSprites_98Andy,
    indexKOFSprites_98Joe,
    indexKOFSprites_98Ryo,
    indexKOFSprites_98Robert,
    indexKOFSprites_98Yuri,
    indexKOFSprites_98Leona,
    indexKOFSprites_98Ralf,
    indexKOFSprites_98Clark,
    indexKOFSprites_98Athena,
    indexKOFSprites_98Kensou,
    indexKOFSprites_98Chin,
    indexKOFSprites_98Chizuru,
    indexKOFSprites_98Mai,
    indexKOFSprites_98King,
    indexKOFSprites_98Kim,
    indexKOFSprites_98Chang,
    indexKOFSprites_98Choi,
    indexKOFSprites_98Yashiro,
    indexKOFSprites_98Shermie,
    indexKOFSprites_98Chris,
    indexKOFSprites_98Yamazaki,
    indexKOFSprites_98BlueMary,
    indexKOFSprites_98Billy,
    indexKOFSprites_98Iori,
    indexKOFSprites_98Mature,
    indexKOFSprites_98Vice,
    indexKOFSprites_98Heidern,
    indexKOFSprites_98Takuma,
    indexKOFSprites_98Saisyu,
    indexKOFSprites_98HeavyD,
    indexKOFSprites_98Lucky,
    indexKOFSprites_98Brian,
    indexKOFSprites_98Rugal,
    indexKOFSprites_98Shingo, // 25

    indexKOFSprites_98OrderSelect,
    indexKOFSprites_98Lifebar,      // 77
    indexKOFSprites_98WinPortrait,  // 78

    indexKOF97Sprites_Andy,         // 0x1ec
    indexKOF97Sprites_Athena,       // 0x1ed
    indexKOF97Sprites_Benimaru,     // 0x1ee
    indexKOF97Sprites_Orochi,       // 0x1ef
    indexKOF97Sprites_Bonus,        // 0x1f0
    indexKOF97Sprites_Stages,       // 0x1f1

    indexKOF97Sprites_IoriOrochi,   // 0x1F7
    indexKOF97Sprites_LeonaOrochi,  // 0x1F8
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
    { L"Kyo A - Main", 0x2d1ff0, 0x2d2010, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 1", 0x2d2010, 0x2d2030, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 2", 0x2d2030, 0x2d2050, indexKOFSprites_98Kyo },
    { L"Kyo A - Max Mode", 0x2d2050, 0x2d2070, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 4", 0x2d2070, 0x2d2090, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 5", 0x2d2090, 0x2d20b0, indexKOFSprites_98Kyo },
    { L"Kyo A - Super Trail", 0x2d20b0, 0x2d20d0, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 7", 0x2d20d0, 0x2d20f0, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 8", 0x2d20f0, 0x2d2110, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 9", 0x2d2110, 0x2d2130, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 10", 0x2d2130, 0x2d2150, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 11", 0x2d2150, 0x2d2170, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 12", 0x2d2170, 0x2d2190, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 13", 0x2d2190, 0x2d21b0, indexKOFSprites_98Kyo },
    { L"Kyo A - Extra 14", 0x2d21b0, 0x2d21d0, indexKOFSprites_98Kyo },
    { L"Kyo A - Lifebar Portrait", 0x2d21d0, 0x2d21f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo A - Win Portrait", 0x2e7df0, 0x2e7ef0 },
};

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_B[] =
{
    { L"Kyo B - Main", 0x2d21f0, 0x2d2210, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 1", 0x2d2210, 0x2d2230, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 2", 0x2d2230, 0x2d2250, indexKOFSprites_98Kyo },
    { L"Kyo B - Max Mode", 0x2d2250, 0x2d2270, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 4", 0x2d2270, 0x2d2290, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 5", 0x2d2290, 0x2d22b0, indexKOFSprites_98Kyo },
    { L"Kyo B - Super Trail", 0x2d22b0, 0x2d22d0, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 7", 0x2d22d0, 0x2d22f0, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 8", 0x2d22f0, 0x2d2310, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 9", 0x2d2310, 0x2d2330, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 10", 0x2d2330, 0x2d2350, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 11", 0x2d2350, 0x2d2370, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 12", 0x2d2370, 0x2d2390, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 13", 0x2d2390, 0x2d23b0, indexKOFSprites_98Kyo },
    { L"Kyo B - Extra 14", 0x2d23b0, 0x2d23d0, indexKOFSprites_98Kyo },
    { L"Kyo B - Lifebar Portrait", 0x2d23d0, 0x2d23f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo B - Win Portrait", 0x2e7ef0, 0x2e7ff0 },
};

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_C[] =
{
    { L"Kyo C - Main", 0x2d23f0, 0x2d2410, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 1", 0x2d2410, 0x2d2430, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 2", 0x2d2430, 0x2d2450, indexKOFSprites_98Kyo },
    { L"Kyo C - Max Mode", 0x2d2450, 0x2d2470, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 4", 0x2d2470, 0x2d2490, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 5", 0x2d2490, 0x2d24b0, indexKOFSprites_98Kyo },
    { L"Kyo C - Super Trail", 0x2d24b0, 0x2d24d0, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 7", 0x2d24d0, 0x2d24f0, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 8", 0x2d24f0, 0x2d2510, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 9", 0x2d2510, 0x2d2530, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 10", 0x2d2530, 0x2d2550, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 11", 0x2d2550, 0x2d2570, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 12", 0x2d2570, 0x2d2590, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 13", 0x2d2590, 0x2d25b0, indexKOFSprites_98Kyo },
    { L"Kyo C - Extra 14", 0x2d25b0, 0x2d25d0, indexKOFSprites_98Kyo },
    { L"Kyo C - Lifebar Portrait", 0x2d25d0, 0x2d25f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo C - Win Portrait", 0x2e7ff0, 0x2e80f0 },
};

const sGame_PaletteDataset KOF97_A_KYO_PALETTES_D[] =
{
    { L"Kyo D - Main", 0x2d25f0, 0x2d2610, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 1", 0x2d2610, 0x2d2630, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 2", 0x2d2630, 0x2d2650, indexKOFSprites_98Kyo },
    { L"Kyo D - Max Mode", 0x2d2650, 0x2d2670, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 4", 0x2d2670, 0x2d2690, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 5", 0x2d2690, 0x2d26b0, indexKOFSprites_98Kyo },
    { L"Kyo D - Super Trail", 0x2d26b0, 0x2d26d0, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 7", 0x2d26d0, 0x2d26f0, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 8", 0x2d26f0, 0x2d2710, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 9", 0x2d2710, 0x2d2730, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 10", 0x2d2730, 0x2d2750, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 11", 0x2d2750, 0x2d2770, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 12", 0x2d2770, 0x2d2790, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 13", 0x2d2790, 0x2d27b0, indexKOFSprites_98Kyo },
    { L"Kyo D - Extra 14", 0x2d27b0, 0x2d27d0, indexKOFSprites_98Kyo },
    { L"Kyo D - Lifebar Portrait", 0x2d27d0, 0x2d27f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kyo },
    { L"Kyo D - Win Portrait", 0x2e80f0, 0x2e81f0 },
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
    { L"Benimaru A - Extra 9", 0x2d2910, 0x2d2930, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 10", 0x2d2930, 0x2d2950, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 11", 0x2d2950, 0x2d2970, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 12", 0x2d2970, 0x2d2990, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 13", 0x2d2990, 0x2d29b0, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Extra 14", 0x2d29b0, 0x2d29d0, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Lifebar Portrait", 0x2d29d0, 0x2d29f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru A - Win Portrait", 0x2e81f0, 0x2e8270 },
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
    { L"Benimaru B - Extra 9", 0x2d2b10, 0x2d2b30, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 10", 0x2d2b30, 0x2d2b50, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 11", 0x2d2b50, 0x2d2b70, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 12", 0x2d2b70, 0x2d2b90, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 13", 0x2d2b90, 0x2d2bb0, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Extra 14", 0x2d2bb0, 0x2d2bd0, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Lifebar Portrait", 0x2d2bd0, 0x2d2bf0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru B - Win Portrait", 0x2e82f0, 0x2e8370 },
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
    { L"Benimaru C - Extra 9", 0x2d2d10, 0x2d2d30, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 10", 0x2d2d30, 0x2d2d50, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 11", 0x2d2d50, 0x2d2d70, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 12", 0x2d2d70, 0x2d2d90, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 13", 0x2d2d90, 0x2d2db0, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Extra 14", 0x2d2db0, 0x2d2dd0, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Lifebar Portrait", 0x2d2dd0, 0x2d2df0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru C - Win Portrait", 0x2e83f0, 0x2e8470 },
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
    { L"Benimaru D - Extra 9", 0x2d2f10, 0x2d2f30, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 10", 0x2d2f30, 0x2d2f50, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 11", 0x2d2f50, 0x2d2f70, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 12", 0x2d2f70, 0x2d2f90, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 13", 0x2d2f90, 0x2d2fb0, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Extra 14", 0x2d2fb0, 0x2d2fd0, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Lifebar Portrait", 0x2d2fd0, 0x2d2ff0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Benimaru },
    { L"Benimaru D - Win Portrait", 0x2e84f0, 0x2e8570 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_A[] =
{
    { L"Daimon A - Main", 0x2d2ff0, 0x2d3010, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 1", 0x2d3010, 0x2d3030, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 2", 0x2d3030, 0x2d3050, indexKOFSprites_98Daimon },
    { L"Daimon A - Max Mode", 0x2d3050, 0x2d3070, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 4", 0x2d3070, 0x2d3090, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 5", 0x2d3090, 0x2d30b0, indexKOFSprites_98Daimon },
    { L"Daimon A - Super Trail", 0x2d30b0, 0x2d30d0, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 7", 0x2d30d0, 0x2d30f0, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 8", 0x2d30f0, 0x2d3110, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 9", 0x2d3110, 0x2d3130, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 10", 0x2d3130, 0x2d3150, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 11", 0x2d3150, 0x2d3170, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 12", 0x2d3170, 0x2d3190, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 13", 0x2d3190, 0x2d31b0, indexKOFSprites_98Daimon },
    { L"Daimon A - Extra 14", 0x2d31b0, 0x2d31d0, indexKOFSprites_98Daimon },
    { L"Daimon A - Lifebar Portrait", 0x2d31d0, 0x2d31f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon A - Win Portrait", 0x2e85f0, 0x2e8610 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_B[] =
{
    { L"Daimon B - Main", 0x2d31f0, 0x2d3210, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 1", 0x2d3210, 0x2d3230, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 2", 0x2d3230, 0x2d3250, indexKOFSprites_98Daimon },
    { L"Daimon B - Max Mode", 0x2d3250, 0x2d3270, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 4", 0x2d3270, 0x2d3290, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 5", 0x2d3290, 0x2d32b0, indexKOFSprites_98Daimon },
    { L"Daimon B - Super Trail", 0x2d32b0, 0x2d32d0, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 7", 0x2d32d0, 0x2d32f0, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 8", 0x2d32f0, 0x2d3310, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 9", 0x2d3310, 0x2d3330, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 10", 0x2d3330, 0x2d3350, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 11", 0x2d3350, 0x2d3370, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 12", 0x2d3370, 0x2d3390, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 13", 0x2d3390, 0x2d33b0, indexKOFSprites_98Daimon },
    { L"Daimon B - Extra 14", 0x2d33b0, 0x2d33d0, indexKOFSprites_98Daimon },
    { L"Daimon B - Lifebar Portrait", 0x2d33d0, 0x2d33f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon B - Win Portrait", 0x2e86f0, 0x2e8710 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_C[] =
{
    { L"Daimon C - Main", 0x2d33f0, 0x2d3410, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 1", 0x2d3410, 0x2d3430, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 2", 0x2d3430, 0x2d3450, indexKOFSprites_98Daimon },
    { L"Daimon C - Max Mode", 0x2d3450, 0x2d3470, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 4", 0x2d3470, 0x2d3490, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 5", 0x2d3490, 0x2d34b0, indexKOFSprites_98Daimon },
    { L"Daimon C - Super Trail", 0x2d34b0, 0x2d34d0, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 7", 0x2d34d0, 0x2d34f0, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 8", 0x2d34f0, 0x2d3510, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 9", 0x2d3510, 0x2d3530, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 10", 0x2d3530, 0x2d3550, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 11", 0x2d3550, 0x2d3570, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 12", 0x2d3570, 0x2d3590, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 13", 0x2d3590, 0x2d35b0, indexKOFSprites_98Daimon },
    { L"Daimon C - Extra 14", 0x2d35b0, 0x2d35d0, indexKOFSprites_98Daimon },
    { L"Daimon C - Lifebar Portrait", 0x2d35d0, 0x2d35f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon C - Win Portrait", 0x2e87f0, 0x2e8810 },
};

const sGame_PaletteDataset KOF97_A_DAIMON_PALETTES_D[] =
{
    { L"Daimon D - Main", 0x2d35f0, 0x2d3610, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 1", 0x2d3610, 0x2d3630, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 2", 0x2d3630, 0x2d3650, indexKOFSprites_98Daimon },
    { L"Daimon D - Max Mode", 0x2d3650, 0x2d3670, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 4", 0x2d3670, 0x2d3690, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 5", 0x2d3690, 0x2d36b0, indexKOFSprites_98Daimon },
    { L"Daimon D - Super Trail", 0x2d36b0, 0x2d36d0, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 7", 0x2d36d0, 0x2d36f0, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 8", 0x2d36f0, 0x2d3710, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 9", 0x2d3710, 0x2d3730, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 10", 0x2d3730, 0x2d3750, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 11", 0x2d3750, 0x2d3770, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 12", 0x2d3770, 0x2d3790, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 13", 0x2d3790, 0x2d37b0, indexKOFSprites_98Daimon },
    { L"Daimon D - Extra 14", 0x2d37b0, 0x2d37d0, indexKOFSprites_98Daimon },
    { L"Daimon D - Lifebar Portrait", 0x2d37d0, 0x2d37f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Daimon },
    { L"Daimon D - Win Portrait", 0x2e88f0, 0x2e8910 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_A[] =
{
    { L"Terry A - Main", 0x2d37f0, 0x2d3810, indexKOFSprites_98Terry },
    { L"Terry A - Extra 1", 0x2d3810, 0x2d3830, indexKOFSprites_98Terry },
    { L"Terry A - Extra 2", 0x2d3830, 0x2d3850, indexKOFSprites_98Terry },
    { L"Terry A - Max Mode", 0x2d3850, 0x2d3870, indexKOFSprites_98Terry },
    { L"Terry A - Extra 4", 0x2d3870, 0x2d3890, indexKOFSprites_98Terry },
    { L"Terry A - Extra 5", 0x2d3890, 0x2d38b0, indexKOFSprites_98Terry },
    { L"Terry A - Super Trail", 0x2d38b0, 0x2d38d0, indexKOFSprites_98Terry },
    { L"Terry A - Extra 7", 0x2d38d0, 0x2d38f0, indexKOFSprites_98Terry },
    { L"Terry A - Extra 8", 0x2d38f0, 0x2d3910, indexKOFSprites_98Terry },
    { L"Terry A - Extra 9", 0x2d3910, 0x2d3930, indexKOFSprites_98Terry },
    { L"Terry A - Extra 10", 0x2d3930, 0x2d3950, indexKOFSprites_98Terry },
    { L"Terry A - Extra 11", 0x2d3950, 0x2d3970, indexKOFSprites_98Terry },
    { L"Terry A - Extra 12", 0x2d3970, 0x2d3990, indexKOFSprites_98Terry },
    { L"Terry A - Extra 13", 0x2d3990, 0x2d39b0, indexKOFSprites_98Terry },
    { L"Terry A - Extra 14", 0x2d39b0, 0x2d39d0, indexKOFSprites_98Terry },
    { L"Terry A - Lifebar Portrait", 0x2d39d0, 0x2d39f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry A - Win Portrait", 0x2e89f0, 0x2e8ab0 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_B[] =
{
    { L"Terry B - Main", 0x2d39f0, 0x2d3a10, indexKOFSprites_98Terry },
    { L"Terry B - Extra 1", 0x2d3a10, 0x2d3a30, indexKOFSprites_98Terry },
    { L"Terry B - Extra 2", 0x2d3a30, 0x2d3a50, indexKOFSprites_98Terry },
    { L"Terry B - Max Mode", 0x2d3a50, 0x2d3a70, indexKOFSprites_98Terry },
    { L"Terry B - Extra 4", 0x2d3a70, 0x2d3a90, indexKOFSprites_98Terry },
    { L"Terry B - Extra 5", 0x2d3a90, 0x2d3ab0, indexKOFSprites_98Terry },
    { L"Terry B - Super Trail", 0x2d3ab0, 0x2d3ad0, indexKOFSprites_98Terry },
    { L"Terry B - Extra 7", 0x2d3ad0, 0x2d3af0, indexKOFSprites_98Terry },
    { L"Terry B - Extra 8", 0x2d3af0, 0x2d3b10, indexKOFSprites_98Terry },
    { L"Terry B - Extra 9", 0x2d3b10, 0x2d3b30, indexKOFSprites_98Terry },
    { L"Terry B - Extra 10", 0x2d3b30, 0x2d3b50, indexKOFSprites_98Terry },
    { L"Terry B - Extra 11", 0x2d3b50, 0x2d3b70, indexKOFSprites_98Terry },
    { L"Terry B - Extra 12", 0x2d3b70, 0x2d3b90, indexKOFSprites_98Terry },
    { L"Terry B - Extra 13", 0x2d3b90, 0x2d3bb0, indexKOFSprites_98Terry },
    { L"Terry B - Extra 14", 0x2d3bb0, 0x2d3bd0, indexKOFSprites_98Terry },
    { L"Terry B - Lifebar Portrait", 0x2d3bd0, 0x2d3bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry B - Win Portrait", 0x2e8af0, 0x2e8bb0 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_C[] =
{
    { L"Terry C - Main", 0x2d3bf0, 0x2d3c10, indexKOFSprites_98Terry },
    { L"Terry C - Extra 1", 0x2d3c10, 0x2d3c30, indexKOFSprites_98Terry },
    { L"Terry C - Extra 2", 0x2d3c30, 0x2d3c50, indexKOFSprites_98Terry },
    { L"Terry C - Max Mode", 0x2d3c50, 0x2d3c70, indexKOFSprites_98Terry },
    { L"Terry C - Extra 4", 0x2d3c70, 0x2d3c90, indexKOFSprites_98Terry },
    { L"Terry C - Extra 5", 0x2d3c90, 0x2d3cb0, indexKOFSprites_98Terry },
    { L"Terry C - Super Trail", 0x2d3cb0, 0x2d3cd0, indexKOFSprites_98Terry },
    { L"Terry C - Extra 7", 0x2d3cd0, 0x2d3cf0, indexKOFSprites_98Terry },
    { L"Terry C - Extra 8", 0x2d3cf0, 0x2d3d10, indexKOFSprites_98Terry },
    { L"Terry C - Extra 9", 0x2d3d10, 0x2d3d30, indexKOFSprites_98Terry },
    { L"Terry C - Extra 10", 0x2d3d30, 0x2d3d50, indexKOFSprites_98Terry },
    { L"Terry C - Extra 11", 0x2d3d50, 0x2d3d70, indexKOFSprites_98Terry },
    { L"Terry C - Extra 12", 0x2d3d70, 0x2d3d90, indexKOFSprites_98Terry },
    { L"Terry C - Extra 13", 0x2d3d90, 0x2d3db0, indexKOFSprites_98Terry },
    { L"Terry C - Extra 14", 0x2d3db0, 0x2d3dd0, indexKOFSprites_98Terry },
    { L"Terry C - Lifebar Portrait", 0x2d3dd0, 0x2d3df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry C - Win Portrait", 0x2e8bf0, 0x2e8cb0 },
};

const sGame_PaletteDataset KOF97_A_TERRY_PALETTES_D[] =
{
    { L"Terry D - Main", 0x2d3df0, 0x2d3e10, indexKOFSprites_98Terry },
    { L"Terry D - Extra 1", 0x2d3e10, 0x2d3e30, indexKOFSprites_98Terry },
    { L"Terry D - Extra 2", 0x2d3e30, 0x2d3e50, indexKOFSprites_98Terry },
    { L"Terry D - Max Mode", 0x2d3e50, 0x2d3e70, indexKOFSprites_98Terry },
    { L"Terry D - Extra 4", 0x2d3e70, 0x2d3e90, indexKOFSprites_98Terry },
    { L"Terry D - Extra 5", 0x2d3e90, 0x2d3eb0, indexKOFSprites_98Terry },
    { L"Terry D - Super Trail", 0x2d3eb0, 0x2d3ed0, indexKOFSprites_98Terry },
    { L"Terry D - Extra 7", 0x2d3ed0, 0x2d3ef0, indexKOFSprites_98Terry },
    { L"Terry D - Extra 8", 0x2d3ef0, 0x2d3f10, indexKOFSprites_98Terry },
    { L"Terry D - Extra 9", 0x2d3f10, 0x2d3f30, indexKOFSprites_98Terry },
    { L"Terry D - Extra 10", 0x2d3f30, 0x2d3f50, indexKOFSprites_98Terry },
    { L"Terry D - Extra 11", 0x2d3f50, 0x2d3f70, indexKOFSprites_98Terry },
    { L"Terry D - Extra 12", 0x2d3f70, 0x2d3f90, indexKOFSprites_98Terry },
    { L"Terry D - Extra 13", 0x2d3f90, 0x2d3fb0, indexKOFSprites_98Terry },
    { L"Terry D - Extra 14", 0x2d3fb0, 0x2d3fd0, indexKOFSprites_98Terry },
    { L"Terry D - Lifebar Portrait", 0x2d3fd0, 0x2d3ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Terry },
    { L"Terry D - Win Portrait", 0x2e8cf0, 0x2e8db0 },
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
    { L"Andy A - Extra 9", 0x2d4110, 0x2d4130, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 10", 0x2d4130, 0x2d4150, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 11", 0x2d4150, 0x2d4170, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 12", 0x2d4170, 0x2d4190, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 13", 0x2d4190, 0x2d41b0, indexKOF97Sprites_Andy },
    { L"Andy A - Extra 14", 0x2d41b0, 0x2d41d0, indexKOF97Sprites_Andy },
    { L"Andy A - Lifebar Portrait", 0x2d41d0, 0x2d41f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Andy },
    { L"Andy A - Win Portrait", 0x2e8df0, 0x2e8ef0 },
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
    { L"Andy B - Extra 9", 0x2d4310, 0x2d4330, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 10", 0x2d4330, 0x2d4350, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 11", 0x2d4350, 0x2d4370, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 12", 0x2d4370, 0x2d4390, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 13", 0x2d4390, 0x2d43b0, indexKOF97Sprites_Andy },
    { L"Andy B - Extra 14", 0x2d43b0, 0x2d43d0, indexKOF97Sprites_Andy },
    { L"Andy B - Lifebar Portrait", 0x2d43d0, 0x2d43f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Andy },
    { L"Andy B - Win Portrait", 0x2e8ef0, 0x2e8ff0 },
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
    { L"Andy C - Extra 9", 0x2d4510, 0x2d4530, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 10", 0x2d4530, 0x2d4550, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 11", 0x2d4550, 0x2d4570, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 12", 0x2d4570, 0x2d4590, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 13", 0x2d4590, 0x2d45b0, indexKOF97Sprites_Andy },
    { L"Andy C - Extra 14", 0x2d45b0, 0x2d45d0, indexKOF97Sprites_Andy },
    { L"Andy C - Lifebar Portrait", 0x2d45d0, 0x2d45f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Andy },
    { L"Andy C - Win Portrait", 0x2e8ff0, 0x2e90f0 },
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
    { L"Andy D - Extra 9", 0x2d4710, 0x2d4730, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 10", 0x2d4730, 0x2d4750, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 11", 0x2d4750, 0x2d4770, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 12", 0x2d4770, 0x2d4790, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 13", 0x2d4790, 0x2d47b0, indexKOF97Sprites_Andy },
    { L"Andy D - Extra 14", 0x2d47b0, 0x2d47d0, indexKOF97Sprites_Andy },
    { L"Andy D - Lifebar Portrait", 0x2d47d0, 0x2d47f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Andy },
    { L"Andy D - Win Portrait", 0x2e90f0, 0x2e91f0 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_A[] =
{
    { L"Joe A - Main", 0x2d47f0, 0x2d4810, indexKOFSprites_98Joe },
    { L"Joe A - Extra 1", 0x2d4810, 0x2d4830, indexKOFSprites_98Joe },
    { L"Joe A - Extra 2", 0x2d4830, 0x2d4850, indexKOFSprites_98Joe },
    { L"Joe A - Max Mode", 0x2d4850, 0x2d4870, indexKOFSprites_98Joe },
    { L"Joe A - Extra 4", 0x2d4870, 0x2d4890, indexKOFSprites_98Joe },
    { L"Joe A - Extra 5", 0x2d4890, 0x2d48b0, indexKOFSprites_98Joe },
    { L"Joe A - Super Trail", 0x2d48b0, 0x2d48d0, indexKOFSprites_98Joe },
    { L"Joe A - Extra 7", 0x2d48d0, 0x2d48f0, indexKOFSprites_98Joe },
    { L"Joe A - Extra 8", 0x2d48f0, 0x2d4910, indexKOFSprites_98Joe },
    { L"Joe A - Extra 9", 0x2d4910, 0x2d4930, indexKOFSprites_98Joe },
    { L"Joe A - Extra 10", 0x2d4930, 0x2d4950, indexKOFSprites_98Joe },
    { L"Joe A - Extra 11", 0x2d4950, 0x2d4970, indexKOFSprites_98Joe },
    { L"Joe A - Extra 12", 0x2d4970, 0x2d4990, indexKOFSprites_98Joe },
    { L"Joe A - Extra 13", 0x2d4990, 0x2d49b0, indexKOFSprites_98Joe },
    { L"Joe A - Extra 14", 0x2d49b0, 0x2d49d0, indexKOFSprites_98Joe },
    { L"Joe A - Lifebar Portrait", 0x2d49d0, 0x2d49f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe A - Win Portrait", 0x2e91f0, 0x2e9210 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_B[] =
{
    { L"Joe B - Main", 0x2d49f0, 0x2d4a10, indexKOFSprites_98Joe },
    { L"Joe B - Extra 1", 0x2d4a10, 0x2d4a30, indexKOFSprites_98Joe },
    { L"Joe B - Extra 2", 0x2d4a30, 0x2d4a50, indexKOFSprites_98Joe },
    { L"Joe B - Max Mode", 0x2d4a50, 0x2d4a70, indexKOFSprites_98Joe },
    { L"Joe B - Extra 4", 0x2d4a70, 0x2d4a90, indexKOFSprites_98Joe },
    { L"Joe B - Extra 5", 0x2d4a90, 0x2d4ab0, indexKOFSprites_98Joe },
    { L"Joe B - Super Trail", 0x2d4ab0, 0x2d4ad0, indexKOFSprites_98Joe },
    { L"Joe B - Extra 7", 0x2d4ad0, 0x2d4af0, indexKOFSprites_98Joe },
    { L"Joe B - Extra 8", 0x2d4af0, 0x2d4b10, indexKOFSprites_98Joe },
    { L"Joe B - Extra 9", 0x2d4b10, 0x2d4b30, indexKOFSprites_98Joe },
    { L"Joe B - Extra 10", 0x2d4b30, 0x2d4b50, indexKOFSprites_98Joe },
    { L"Joe B - Extra 11", 0x2d4b50, 0x2d4b70, indexKOFSprites_98Joe },
    { L"Joe B - Extra 12", 0x2d4b70, 0x2d4b90, indexKOFSprites_98Joe },
    { L"Joe B - Extra 13", 0x2d4b90, 0x2d4bb0, indexKOFSprites_98Joe },
    { L"Joe B - Extra 14", 0x2d4bb0, 0x2d4bd0, indexKOFSprites_98Joe },
    { L"Joe B - Lifebar Portrait", 0x2d4bd0, 0x2d4bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe B - Win Portrait", 0x2e92f0, 0x2e9310 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_C[] =
{
    { L"Joe C - Main", 0x2d4bf0, 0x2d4c10, indexKOFSprites_98Joe },
    { L"Joe C - Extra 1", 0x2d4c10, 0x2d4c30, indexKOFSprites_98Joe },
    { L"Joe C - Extra 2", 0x2d4c30, 0x2d4c50, indexKOFSprites_98Joe },
    { L"Joe C - Max Mode", 0x2d4c50, 0x2d4c70, indexKOFSprites_98Joe },
    { L"Joe C - Extra 4", 0x2d4c70, 0x2d4c90, indexKOFSprites_98Joe },
    { L"Joe C - Extra 5", 0x2d4c90, 0x2d4cb0, indexKOFSprites_98Joe },
    { L"Joe C - Super Trail", 0x2d4cb0, 0x2d4cd0, indexKOFSprites_98Joe },
    { L"Joe C - Extra 7", 0x2d4cd0, 0x2d4cf0, indexKOFSprites_98Joe },
    { L"Joe C - Extra 8", 0x2d4cf0, 0x2d4d10, indexKOFSprites_98Joe },
    { L"Joe C - Extra 9", 0x2d4d10, 0x2d4d30, indexKOFSprites_98Joe },
    { L"Joe C - Extra 10", 0x2d4d30, 0x2d4d50, indexKOFSprites_98Joe },
    { L"Joe C - Extra 11", 0x2d4d50, 0x2d4d70, indexKOFSprites_98Joe },
    { L"Joe C - Extra 12", 0x2d4d70, 0x2d4d90, indexKOFSprites_98Joe },
    { L"Joe C - Extra 13", 0x2d4d90, 0x2d4db0, indexKOFSprites_98Joe },
    { L"Joe C - Extra 14", 0x2d4db0, 0x2d4dd0, indexKOFSprites_98Joe },
    { L"Joe C - Lifebar Portrait", 0x2d4dd0, 0x2d4df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe C - Win Portrait", 0x2e93f0, 0x2e9410 },
};

const sGame_PaletteDataset KOF97_A_JOE_PALETTES_D[] =
{
    { L"Joe D - Main", 0x2d4df0, 0x2d4e10, indexKOFSprites_98Joe },
    { L"Joe D - Extra 1", 0x2d4e10, 0x2d4e30, indexKOFSprites_98Joe },
    { L"Joe D - Extra 2", 0x2d4e30, 0x2d4e50, indexKOFSprites_98Joe },
    { L"Joe D - Max Mode", 0x2d4e50, 0x2d4e70, indexKOFSprites_98Joe },
    { L"Joe D - Extra 4", 0x2d4e70, 0x2d4e90, indexKOFSprites_98Joe },
    { L"Joe D - Extra 5", 0x2d4e90, 0x2d4eb0, indexKOFSprites_98Joe },
    { L"Joe D - Super Trail", 0x2d4eb0, 0x2d4ed0, indexKOFSprites_98Joe },
    { L"Joe D - Extra 7", 0x2d4ed0, 0x2d4ef0, indexKOFSprites_98Joe },
    { L"Joe D - Extra 8", 0x2d4ef0, 0x2d4f10, indexKOFSprites_98Joe },
    { L"Joe D - Extra 9", 0x2d4f10, 0x2d4f30, indexKOFSprites_98Joe },
    { L"Joe D - Extra 10", 0x2d4f30, 0x2d4f50, indexKOFSprites_98Joe },
    { L"Joe D - Extra 11", 0x2d4f50, 0x2d4f70, indexKOFSprites_98Joe },
    { L"Joe D - Extra 12", 0x2d4f70, 0x2d4f90, indexKOFSprites_98Joe },
    { L"Joe D - Extra 13", 0x2d4f90, 0x2d4fb0, indexKOFSprites_98Joe },
    { L"Joe D - Extra 14", 0x2d4fb0, 0x2d4fd0, indexKOFSprites_98Joe },
    { L"Joe D - Lifebar Portrait", 0x2d4fd0, 0x2d4ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Joe },
    { L"Joe D - Win Portrait", 0x2e94f0, 0x2e9510 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_A[] =
{
    { L"Ryo A - Main", 0x2d4ff0, 0x2d5010, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 1", 0x2d5010, 0x2d5030, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 2", 0x2d5030, 0x2d5050, indexKOFSprites_98Ryo },
    { L"Ryo A - Max Mode", 0x2d5050, 0x2d5070, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 4", 0x2d5070, 0x2d5090, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 5", 0x2d5090, 0x2d50b0, indexKOFSprites_98Ryo },
    { L"Ryo A - Super Trail", 0x2d50b0, 0x2d50d0, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 7", 0x2d50d0, 0x2d50f0, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 8", 0x2d50f0, 0x2d5110, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 9", 0x2d5110, 0x2d5130, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 10", 0x2d5130, 0x2d5150, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 11", 0x2d5150, 0x2d5170, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 12", 0x2d5170, 0x2d5190, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 13", 0x2d5190, 0x2d51b0, indexKOFSprites_98Ryo },
    { L"Ryo A - Extra 14", 0x2d51b0, 0x2d51d0, indexKOFSprites_98Ryo },
    { L"Ryo A - Lifebar Portrait", 0x2d51d0, 0x2d51f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo A - Win Portrait", 0x2e95f0, 0x2e96f0 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_B[] =
{
    { L"Ryo B - Main", 0x2d51f0, 0x2d5210, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 1", 0x2d5210, 0x2d5230, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 2", 0x2d5230, 0x2d5250, indexKOFSprites_98Ryo },
    { L"Ryo B - Max Mode", 0x2d5250, 0x2d5270, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 4", 0x2d5270, 0x2d5290, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 5", 0x2d5290, 0x2d52b0, indexKOFSprites_98Ryo },
    { L"Ryo B - Super Trail", 0x2d52b0, 0x2d52d0, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 7", 0x2d52d0, 0x2d52f0, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 8", 0x2d52f0, 0x2d5310, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 9", 0x2d5310, 0x2d5330, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 10", 0x2d5330, 0x2d5350, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 11", 0x2d5350, 0x2d5370, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 12", 0x2d5370, 0x2d5390, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 13", 0x2d5390, 0x2d53b0, indexKOFSprites_98Ryo },
    { L"Ryo B - Extra 14", 0x2d53b0, 0x2d53d0, indexKOFSprites_98Ryo },
    { L"Ryo B - Lifebar Portrait", 0x2d53d0, 0x2d53f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo B - Win Portrait", 0x2e96f0, 0x2e97f0 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_C[] =
{
    { L"Ryo C - Main", 0x2d53f0, 0x2d5410, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 1", 0x2d5410, 0x2d5430, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 2", 0x2d5430, 0x2d5450, indexKOFSprites_98Ryo },
    { L"Ryo C - Max Mode", 0x2d5450, 0x2d5470, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 4", 0x2d5470, 0x2d5490, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 5", 0x2d5490, 0x2d54b0, indexKOFSprites_98Ryo },
    { L"Ryo C - Super Trail", 0x2d54b0, 0x2d54d0, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 7", 0x2d54d0, 0x2d54f0, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 8", 0x2d54f0, 0x2d5510, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 9", 0x2d5510, 0x2d5530, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 10", 0x2d5530, 0x2d5550, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 11", 0x2d5550, 0x2d5570, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 12", 0x2d5570, 0x2d5590, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 13", 0x2d5590, 0x2d55b0, indexKOFSprites_98Ryo },
    { L"Ryo C - Extra 14", 0x2d55b0, 0x2d55d0, indexKOFSprites_98Ryo },
    { L"Ryo C - Lifebar Portrait", 0x2d55d0, 0x2d55f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo C - Win Portrait", 0x2e97f0, 0x2e98f0 },
};

const sGame_PaletteDataset KOF97_A_RYO_PALETTES_D[] =
{
    { L"Ryo D - Main", 0x2d55f0, 0x2d5610, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 1", 0x2d5610, 0x2d5630, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 2", 0x2d5630, 0x2d5650, indexKOFSprites_98Ryo },
    { L"Ryo D - Max Mode", 0x2d5650, 0x2d5670, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 4", 0x2d5670, 0x2d5690, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 5", 0x2d5690, 0x2d56b0, indexKOFSprites_98Ryo },
    { L"Ryo D - Super Trail", 0x2d56b0, 0x2d56d0, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 7", 0x2d56d0, 0x2d56f0, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 8", 0x2d56f0, 0x2d5710, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 9", 0x2d5710, 0x2d5730, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 10", 0x2d5730, 0x2d5750, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 11", 0x2d5750, 0x2d5770, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 12", 0x2d5770, 0x2d5790, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 13", 0x2d5790, 0x2d57b0, indexKOFSprites_98Ryo },
    { L"Ryo D - Extra 14", 0x2d57b0, 0x2d57d0, indexKOFSprites_98Ryo },
    { L"Ryo D - Lifebar Portrait", 0x2d57d0, 0x2d57f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ryo },
    { L"Ryo D - Win Portrait", 0x2e98f0, 0x2e99f0 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_A[] =
{
    { L"Robert A - Main", 0x2d57f0, 0x2d5810, indexKOFSprites_98Robert },
    { L"Robert A - Extra 1", 0x2d5810, 0x2d5830, indexKOFSprites_98Robert },
    { L"Robert A - Extra 2", 0x2d5830, 0x2d5850, indexKOFSprites_98Robert },
    { L"Robert A - Max Mode", 0x2d5850, 0x2d5870, indexKOFSprites_98Robert },
    { L"Robert A - Extra 4", 0x2d5870, 0x2d5890, indexKOFSprites_98Robert },
    { L"Robert A - Extra 5", 0x2d5890, 0x2d58b0, indexKOFSprites_98Robert },
    { L"Robert A - Super Trail", 0x2d58b0, 0x2d58d0, indexKOFSprites_98Robert },
    { L"Robert A - Extra 7", 0x2d58d0, 0x2d58f0, indexKOFSprites_98Robert },
    { L"Robert A - Extra 8", 0x2d58f0, 0x2d5910, indexKOFSprites_98Robert },
    { L"Robert A - Extra 9", 0x2d5910, 0x2d5930, indexKOFSprites_98Robert },
    { L"Robert A - Extra 10", 0x2d5930, 0x2d5950, indexKOFSprites_98Robert },
    { L"Robert A - Extra 11", 0x2d5950, 0x2d5970, indexKOFSprites_98Robert },
    { L"Robert A - Extra 12", 0x2d5970, 0x2d5990, indexKOFSprites_98Robert },
    { L"Robert A - Extra 13", 0x2d5990, 0x2d59b0, indexKOFSprites_98Robert },
    { L"Robert A - Extra 14", 0x2d59b0, 0x2d59d0, indexKOFSprites_98Robert },
    { L"Robert A - Lifebar Portrait", 0x2d59d0, 0x2d59f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert A - Win Portrait", 0x2e99f0, 0x2e9af0 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_B[] =
{
    { L"Robert B - Main", 0x2d59f0, 0x2d5a10, indexKOFSprites_98Robert },
    { L"Robert B - Extra 1", 0x2d5a10, 0x2d5a30, indexKOFSprites_98Robert },
    { L"Robert B - Extra 2", 0x2d5a30, 0x2d5a50, indexKOFSprites_98Robert },
    { L"Robert B - Max Mode", 0x2d5a50, 0x2d5a70, indexKOFSprites_98Robert },
    { L"Robert B - Extra 4", 0x2d5a70, 0x2d5a90, indexKOFSprites_98Robert },
    { L"Robert B - Extra 5", 0x2d5a90, 0x2d5ab0, indexKOFSprites_98Robert },
    { L"Robert B - Super Trail", 0x2d5ab0, 0x2d5ad0, indexKOFSprites_98Robert },
    { L"Robert B - Extra 7", 0x2d5ad0, 0x2d5af0, indexKOFSprites_98Robert },
    { L"Robert B - Extra 8", 0x2d5af0, 0x2d5b10, indexKOFSprites_98Robert },
    { L"Robert B - Extra 9", 0x2d5b10, 0x2d5b30, indexKOFSprites_98Robert },
    { L"Robert B - Extra 10", 0x2d5b30, 0x2d5b50, indexKOFSprites_98Robert },
    { L"Robert B - Extra 11", 0x2d5b50, 0x2d5b70, indexKOFSprites_98Robert },
    { L"Robert B - Extra 12", 0x2d5b70, 0x2d5b90, indexKOFSprites_98Robert },
    { L"Robert B - Extra 13", 0x2d5b90, 0x2d5bb0, indexKOFSprites_98Robert },
    { L"Robert B - Extra 14", 0x2d5bb0, 0x2d5bd0, indexKOFSprites_98Robert },
    { L"Robert B - Lifebar Portrait", 0x2d5bd0, 0x2d5bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert B - Win Portrait", 0x2e9af0, 0x2e9bf0 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_C[] =
{
    { L"Robert C - Main", 0x2d5bf0, 0x2d5c10, indexKOFSprites_98Robert },
    { L"Robert C - Extra 1", 0x2d5c10, 0x2d5c30, indexKOFSprites_98Robert },
    { L"Robert C - Extra 2", 0x2d5c30, 0x2d5c50, indexKOFSprites_98Robert },
    { L"Robert C - Max Mode", 0x2d5c50, 0x2d5c70, indexKOFSprites_98Robert },
    { L"Robert C - Extra 4", 0x2d5c70, 0x2d5c90, indexKOFSprites_98Robert },
    { L"Robert C - Extra 5", 0x2d5c90, 0x2d5cb0, indexKOFSprites_98Robert },
    { L"Robert C - Super Trail", 0x2d5cb0, 0x2d5cd0, indexKOFSprites_98Robert },
    { L"Robert C - Extra 7", 0x2d5cd0, 0x2d5cf0, indexKOFSprites_98Robert },
    { L"Robert C - Extra 8", 0x2d5cf0, 0x2d5d10, indexKOFSprites_98Robert },
    { L"Robert C - Extra 9", 0x2d5d10, 0x2d5d30, indexKOFSprites_98Robert },
    { L"Robert C - Extra 10", 0x2d5d30, 0x2d5d50, indexKOFSprites_98Robert },
    { L"Robert C - Extra 11", 0x2d5d50, 0x2d5d70, indexKOFSprites_98Robert },
    { L"Robert C - Extra 12", 0x2d5d70, 0x2d5d90, indexKOFSprites_98Robert },
    { L"Robert C - Extra 13", 0x2d5d90, 0x2d5db0, indexKOFSprites_98Robert },
    { L"Robert C - Extra 14", 0x2d5db0, 0x2d5dd0, indexKOFSprites_98Robert },
    { L"Robert C - Lifebar Portrait", 0x2d5dd0, 0x2d5df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert C - Win Portrait", 0x2e9bf0, 0x2e9cf0 },
};

const sGame_PaletteDataset KOF97_A_ROBERT_PALETTES_D[] =
{
    { L"Robert D - Main", 0x2d5df0, 0x2d5e10, indexKOFSprites_98Robert },
    { L"Robert D - Extra 1", 0x2d5e10, 0x2d5e30, indexKOFSprites_98Robert },
    { L"Robert D - Extra 2", 0x2d5e30, 0x2d5e50, indexKOFSprites_98Robert },
    { L"Robert D - Max Mode", 0x2d5e50, 0x2d5e70, indexKOFSprites_98Robert },
    { L"Robert D - Extra 4", 0x2d5e70, 0x2d5e90, indexKOFSprites_98Robert },
    { L"Robert D - Extra 5", 0x2d5e90, 0x2d5eb0, indexKOFSprites_98Robert },
    { L"Robert D - Super Trail", 0x2d5eb0, 0x2d5ed0, indexKOFSprites_98Robert },
    { L"Robert D - Extra 7", 0x2d5ed0, 0x2d5ef0, indexKOFSprites_98Robert },
    { L"Robert D - Extra 8", 0x2d5ef0, 0x2d5f10, indexKOFSprites_98Robert },
    { L"Robert D - Extra 9", 0x2d5f10, 0x2d5f30, indexKOFSprites_98Robert },
    { L"Robert D - Extra 10", 0x2d5f30, 0x2d5f50, indexKOFSprites_98Robert },
    { L"Robert D - Extra 11", 0x2d5f50, 0x2d5f70, indexKOFSprites_98Robert },
    { L"Robert D - Extra 12", 0x2d5f70, 0x2d5f90, indexKOFSprites_98Robert },
    { L"Robert D - Extra 13", 0x2d5f90, 0x2d5fb0, indexKOFSprites_98Robert },
    { L"Robert D - Extra 14", 0x2d5fb0, 0x2d5fd0, indexKOFSprites_98Robert },
    { L"Robert D - Lifebar Portrait", 0x2d5fd0, 0x2d5ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Robert },
    { L"Robert D - Win Portrait", 0x2e9cf0, 0x2e9df0 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_A[] =
{
    { L"Yuri A - Main", 0x2d5ff0, 0x2d6010, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 1", 0x2d6010, 0x2d6030, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 2", 0x2d6030, 0x2d6050, indexKOFSprites_98Yuri },
    { L"Yuri A - Max Mode", 0x2d6050, 0x2d6070, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 4", 0x2d6070, 0x2d6090, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 5", 0x2d6090, 0x2d60b0, indexKOFSprites_98Yuri },
    { L"Yuri A - Super Trail", 0x2d60b0, 0x2d60d0, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 7", 0x2d60d0, 0x2d60f0, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 8", 0x2d60f0, 0x2d6110, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 9", 0x2d6110, 0x2d6130, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 10", 0x2d6130, 0x2d6150, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 11", 0x2d6150, 0x2d6170, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 12", 0x2d6170, 0x2d6190, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 13", 0x2d6190, 0x2d61b0, indexKOFSprites_98Yuri },
    { L"Yuri A - Extra 14", 0x2d61b0, 0x2d61d0, indexKOFSprites_98Yuri },
    { L"Yuri A - Lifebar Portrait", 0x2d61d0, 0x2d61f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri A - Win Portrait", 0x2e9df0, 0x2e9eb0 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_B[] =
{
    { L"Yuri B - Main", 0x2d61f0, 0x2d6210, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 1", 0x2d6210, 0x2d6230, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 2", 0x2d6230, 0x2d6250, indexKOFSprites_98Yuri },
    { L"Yuri B - Max Mode", 0x2d6250, 0x2d6270, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 4", 0x2d6270, 0x2d6290, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 5", 0x2d6290, 0x2d62b0, indexKOFSprites_98Yuri },
    { L"Yuri B - Super Trail", 0x2d62b0, 0x2d62d0, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 7", 0x2d62d0, 0x2d62f0, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 8", 0x2d62f0, 0x2d6310, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 9", 0x2d6310, 0x2d6330, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 10", 0x2d6330, 0x2d6350, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 11", 0x2d6350, 0x2d6370, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 12", 0x2d6370, 0x2d6390, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 13", 0x2d6390, 0x2d63b0, indexKOFSprites_98Yuri },
    { L"Yuri B - Extra 14", 0x2d63b0, 0x2d63d0, indexKOFSprites_98Yuri },
    { L"Yuri B - Lifebar Portrait", 0x2d63d0, 0x2d63f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri B - Win Portrait", 0x2e9ef0, 0x2e9fb0 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_C[] =
{
    { L"Yuri C - Main", 0x2d63f0, 0x2d6410, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 1", 0x2d6410, 0x2d6430, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 2", 0x2d6430, 0x2d6450, indexKOFSprites_98Yuri },
    { L"Yuri C - Max Mode", 0x2d6450, 0x2d6470, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 4", 0x2d6470, 0x2d6490, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 5", 0x2d6490, 0x2d64b0, indexKOFSprites_98Yuri },
    { L"Yuri C - Super Trail", 0x2d64b0, 0x2d64d0, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 7", 0x2d64d0, 0x2d64f0, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 8", 0x2d64f0, 0x2d6510, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 9", 0x2d6510, 0x2d6530, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 10", 0x2d6530, 0x2d6550, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 11", 0x2d6550, 0x2d6570, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 12", 0x2d6570, 0x2d6590, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 13", 0x2d6590, 0x2d65b0, indexKOFSprites_98Yuri },
    { L"Yuri C - Extra 14", 0x2d65b0, 0x2d65d0, indexKOFSprites_98Yuri },
    { L"Yuri C - Lifebar Portrait", 0x2d65d0, 0x2d65f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri C - Win Portrait", 0x2e9ff0, 0x2ea0b0 },
};

const sGame_PaletteDataset KOF97_A_YURI_PALETTES_D[] =
{
    { L"Yuri D - Main", 0x2d65f0, 0x2d6610, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 1", 0x2d6610, 0x2d6630, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 2", 0x2d6630, 0x2d6650, indexKOFSprites_98Yuri },
    { L"Yuri D - Max Mode", 0x2d6650, 0x2d6670, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 4", 0x2d6670, 0x2d6690, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 5", 0x2d6690, 0x2d66b0, indexKOFSprites_98Yuri },
    { L"Yuri D - Super Trail", 0x2d66b0, 0x2d66d0, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 7", 0x2d66d0, 0x2d66f0, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 8", 0x2d66f0, 0x2d6710, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 9", 0x2d6710, 0x2d6730, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 10", 0x2d6730, 0x2d6750, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 11", 0x2d6750, 0x2d6770, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 12", 0x2d6770, 0x2d6790, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 13", 0x2d6790, 0x2d67b0, indexKOFSprites_98Yuri },
    { L"Yuri D - Extra 14", 0x2d67b0, 0x2d67d0, indexKOFSprites_98Yuri },
    { L"Yuri D - Lifebar Portrait", 0x2d67d0, 0x2d67f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yuri },
    { L"Yuri D - Win Portrait", 0x2ea0f0, 0x2ea1b0 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_A[] =
{
    { L"Leona A - Main", 0x2d67f0, 0x2d6810, indexKOFSprites_98Leona },
    { L"Leona A - Extra 1", 0x2d6810, 0x2d6830, indexKOFSprites_98Leona },
    { L"Leona A - Extra 2", 0x2d6830, 0x2d6850, indexKOFSprites_98Leona },
    { L"Leona A - Max Mode", 0x2d6850, 0x2d6870, indexKOFSprites_98Leona },
    { L"Leona A - Extra 4", 0x2d6870, 0x2d6890, indexKOFSprites_98Leona },
    { L"Leona A - Extra 5", 0x2d6890, 0x2d68b0, indexKOFSprites_98Leona },
    { L"Leona A - Super Trail", 0x2d68b0, 0x2d68d0, indexKOFSprites_98Leona },
    { L"Leona A - Extra 7", 0x2d68d0, 0x2d68f0, indexKOFSprites_98Leona },
    { L"Leona A - Extra 8", 0x2d68f0, 0x2d6910, indexKOFSprites_98Leona },
    { L"Leona A - Extra 9", 0x2d6910, 0x2d6930, indexKOFSprites_98Leona },
    { L"Leona A - Extra 10", 0x2d6930, 0x2d6950, indexKOFSprites_98Leona },
    { L"Leona A - Extra 11", 0x2d6950, 0x2d6970, indexKOFSprites_98Leona },
    { L"Leona A - Extra 12", 0x2d6970, 0x2d6990, indexKOFSprites_98Leona },
    { L"Leona A - Extra 13", 0x2d6990, 0x2d69b0, indexKOFSprites_98Leona },
    { L"Leona A - Extra 14", 0x2d69b0, 0x2d69d0, indexKOFSprites_98Leona },
    { L"Leona A - Lifebar Portrait", 0x2d69d0, 0x2d69f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona A - Win Portrait", 0x2ea1f0, 0x2ea290 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_B[] =
{
    { L"Leona B - Main", 0x2d69f0, 0x2d6a10, indexKOFSprites_98Leona },
    { L"Leona B - Extra 1", 0x2d6a10, 0x2d6a30, indexKOFSprites_98Leona },
    { L"Leona B - Extra 2", 0x2d6a30, 0x2d6a50, indexKOFSprites_98Leona },
    { L"Leona B - Max Mode", 0x2d6a50, 0x2d6a70, indexKOFSprites_98Leona },
    { L"Leona B - Extra 4", 0x2d6a70, 0x2d6a90, indexKOFSprites_98Leona },
    { L"Leona B - Extra 5", 0x2d6a90, 0x2d6ab0, indexKOFSprites_98Leona },
    { L"Leona B - Super Trail", 0x2d6ab0, 0x2d6ad0, indexKOFSprites_98Leona },
    { L"Leona B - Extra 7", 0x2d6ad0, 0x2d6af0, indexKOFSprites_98Leona },
    { L"Leona B - Extra 8", 0x2d6af0, 0x2d6b10, indexKOFSprites_98Leona },
    { L"Leona B - Extra 9", 0x2d6b10, 0x2d6b30, indexKOFSprites_98Leona },
    { L"Leona B - Extra 10", 0x2d6b30, 0x2d6b50, indexKOFSprites_98Leona },
    { L"Leona B - Extra 11", 0x2d6b50, 0x2d6b70, indexKOFSprites_98Leona },
    { L"Leona B - Extra 12", 0x2d6b70, 0x2d6b90, indexKOFSprites_98Leona },
    { L"Leona B - Extra 13", 0x2d6b90, 0x2d6bb0, indexKOFSprites_98Leona },
    { L"Leona B - Extra 14", 0x2d6bb0, 0x2d6bd0, indexKOFSprites_98Leona },
    { L"Leona B - Lifebar Portrait", 0x2d6bd0, 0x2d6bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona B - Win Portrait", 0x2ea2f0, 0x2ea390 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_C[] =
{
    { L"Leona C - Main", 0x2d6bf0, 0x2d6c10, indexKOFSprites_98Leona },
    { L"Leona C - Extra 1", 0x2d6c10, 0x2d6c30, indexKOFSprites_98Leona },
    { L"Leona C - Extra 2", 0x2d6c30, 0x2d6c50, indexKOFSprites_98Leona },
    { L"Leona C - Max Mode", 0x2d6c50, 0x2d6c70, indexKOFSprites_98Leona },
    { L"Leona C - Extra 4", 0x2d6c70, 0x2d6c90, indexKOFSprites_98Leona },
    { L"Leona C - Extra 5", 0x2d6c90, 0x2d6cb0, indexKOFSprites_98Leona },
    { L"Leona C - Super Trail", 0x2d6cb0, 0x2d6cd0, indexKOFSprites_98Leona },
    { L"Leona C - Extra 7", 0x2d6cd0, 0x2d6cf0, indexKOFSprites_98Leona },
    { L"Leona C - Extra 8", 0x2d6cf0, 0x2d6d10, indexKOFSprites_98Leona },
    { L"Leona C - Extra 9", 0x2d6d10, 0x2d6d30, indexKOFSprites_98Leona },
    { L"Leona C - Extra 10", 0x2d6d30, 0x2d6d50, indexKOFSprites_98Leona },
    { L"Leona C - Extra 11", 0x2d6d50, 0x2d6d70, indexKOFSprites_98Leona },
    { L"Leona C - Extra 12", 0x2d6d70, 0x2d6d90, indexKOFSprites_98Leona },
    { L"Leona C - Extra 13", 0x2d6d90, 0x2d6db0, indexKOFSprites_98Leona },
    { L"Leona C - Extra 14", 0x2d6db0, 0x2d6dd0, indexKOFSprites_98Leona },
    { L"Leona C - Lifebar Portrait", 0x2d6dd0, 0x2d6df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona C - Win Portrait", 0x2ea3f0, 0x2ea490 },
};

const sGame_PaletteDataset KOF97_A_LEONA_PALETTES_D[] =
{
    { L"Leona D - Main", 0x2d6df0, 0x2d6e10, indexKOFSprites_98Leona },
    { L"Leona D - Extra 1", 0x2d6e10, 0x2d6e30, indexKOFSprites_98Leona },
    { L"Leona D - Extra 2", 0x2d6e30, 0x2d6e50, indexKOFSprites_98Leona },
    { L"Leona D - Max Mode", 0x2d6e50, 0x2d6e70, indexKOFSprites_98Leona },
    { L"Leona D - Extra 4", 0x2d6e70, 0x2d6e90, indexKOFSprites_98Leona },
    { L"Leona D - Extra 5", 0x2d6e90, 0x2d6eb0, indexKOFSprites_98Leona },
    { L"Leona D - Super Trail", 0x2d6eb0, 0x2d6ed0, indexKOFSprites_98Leona },
    { L"Leona D - Extra 7", 0x2d6ed0, 0x2d6ef0, indexKOFSprites_98Leona },
    { L"Leona D - Extra 8", 0x2d6ef0, 0x2d6f10, indexKOFSprites_98Leona },
    { L"Leona D - Extra 9", 0x2d6f10, 0x2d6f30, indexKOFSprites_98Leona },
    { L"Leona D - Extra 10", 0x2d6f30, 0x2d6f50, indexKOFSprites_98Leona },
    { L"Leona D - Extra 11", 0x2d6f50, 0x2d6f70, indexKOFSprites_98Leona },
    { L"Leona D - Extra 12", 0x2d6f70, 0x2d6f90, indexKOFSprites_98Leona },
    { L"Leona D - Extra 13", 0x2d6f90, 0x2d6fb0, indexKOFSprites_98Leona },
    { L"Leona D - Extra 14", 0x2d6fb0, 0x2d6fd0, indexKOFSprites_98Leona },
    { L"Leona D - Lifebar Portrait", 0x2d6fd0, 0x2d6ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Leona D - Win Portrait", 0x2ea4f0, 0x2ea590 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_A[] =
{
    { L"Ralf A - Main", 0x2d6ff0, 0x2d7010, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf A - Extra 1", 0x2d7010, 0x2d7030, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf A - Extra 2", 0x2d7030, 0x2d7050, indexKOFSprites_98Ralf },
    { L"Ralf A - Max Mode", 0x2d7050, 0x2d7070, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf A - Extra 4", 0x2d7070, 0x2d7090, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf A - Extra 5", 0x2d7090, 0x2d70b0, indexKOFSprites_98Ralf },
    { L"Ralf A - Super Trail 1", 0x2d70b0, 0x2d70d0, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf A - Super Trail 2", 0x2d70d0, 0x2d70f0, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf A - Extra 8", 0x2d70f0, 0x2d7110, indexKOFSprites_98Ralf },
    { L"Ralf A - Extra 9", 0x2d7110, 0x2d7130, indexKOFSprites_98Ralf },
    { L"Ralf A - Extra 10", 0x2d7130, 0x2d7150, indexKOFSprites_98Ralf },
    { L"Ralf A - Extra 11", 0x2d7150, 0x2d7170, indexKOFSprites_98Ralf },
    { L"Ralf A - Extra 12", 0x2d7170, 0x2d7190, indexKOFSprites_98Ralf },
    { L"Ralf A - Extra 13", 0x2d7190, 0x2d71b0, indexKOFSprites_98Ralf },
    { L"Ralf A - Extra 14", 0x2d71b0, 0x2d71d0, indexKOFSprites_98Ralf },
    { L"Ralf A - Lifebar Portrait", 0x2d71d0, 0x2d71f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf A - Win Portrait", 0x2ea5f0, 0x2ea6f0 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_B[] =
{
    { L"Ralf B - Main", 0x2d71f0, 0x2d7210, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf B - Extra 1", 0x2d7210, 0x2d7230, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf B - Extra 2", 0x2d7230, 0x2d7250, indexKOFSprites_98Ralf },
    { L"Ralf B - Max Mode", 0x2d7250, 0x2d7270, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf B - Extra 4", 0x2d7270, 0x2d7290, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf B - Extra 5", 0x2d7290, 0x2d72b0, indexKOFSprites_98Ralf },
    { L"Ralf B - Super Trail 1", 0x2d72b0, 0x2d72d0, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf B - Super Trail 2", 0x2d72d0, 0x2d72f0, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf B - Extra 8", 0x2d72f0, 0x2d7310, indexKOFSprites_98Ralf },
    { L"Ralf B - Extra 9", 0x2d7310, 0x2d7330, indexKOFSprites_98Ralf },
    { L"Ralf B - Extra 10", 0x2d7330, 0x2d7350, indexKOFSprites_98Ralf },
    { L"Ralf B - Extra 11", 0x2d7350, 0x2d7370, indexKOFSprites_98Ralf },
    { L"Ralf B - Extra 12", 0x2d7370, 0x2d7390, indexKOFSprites_98Ralf },
    { L"Ralf B - Extra 13", 0x2d7390, 0x2d73b0, indexKOFSprites_98Ralf },
    { L"Ralf B - Extra 14", 0x2d73b0, 0x2d73d0, indexKOFSprites_98Ralf },
    { L"Ralf B - Lifebar Portrait", 0x2d73d0, 0x2d73f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf B - Win Portrait", 0x2ea6f0, 0x2ea7f0 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_C[] =
{
    { L"Ralf C - Main", 0x2d73f0, 0x2d7410, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf C - Extra 1", 0x2d7410, 0x2d7430, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf C - Extra 2", 0x2d7430, 0x2d7450, indexKOFSprites_98Ralf },
    { L"Ralf C - Max Mode", 0x2d7450, 0x2d7470, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf C - Extra 4", 0x2d7470, 0x2d7490, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf C - Extra 5", 0x2d7490, 0x2d74b0, indexKOFSprites_98Ralf },
    { L"Ralf C - Super Trail 1", 0x2d74b0, 0x2d74d0, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf C - Super Trail 2", 0x2d74d0, 0x2d74f0, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf C - Extra 8", 0x2d74f0, 0x2d7510, indexKOFSprites_98Ralf },
    { L"Ralf C - Extra 9", 0x2d7510, 0x2d7530, indexKOFSprites_98Ralf },
    { L"Ralf C - Extra 10", 0x2d7530, 0x2d7550, indexKOFSprites_98Ralf },
    { L"Ralf C - Extra 11", 0x2d7550, 0x2d7570, indexKOFSprites_98Ralf },
    { L"Ralf C - Extra 12", 0x2d7570, 0x2d7590, indexKOFSprites_98Ralf },
    { L"Ralf C - Extra 13", 0x2d7590, 0x2d75b0, indexKOFSprites_98Ralf },
    { L"Ralf C - Extra 14", 0x2d75b0, 0x2d75d0, indexKOFSprites_98Ralf },
    { L"Ralf C - Lifebar Portrait", 0x2d75d0, 0x2d75f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf C - Win Portrait", 0x2ea7f0, 0x2ea8f0 },
};

const sGame_PaletteDataset KOF97_A_RALF_PALETTES_D[] =
{
    { L"Ralf D - Main", 0x2d75f0, 0x2d7610, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf D - Extra 1", 0x2d7610, 0x2d7630, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf D - Extra 2", 0x2d7630, 0x2d7650, indexKOFSprites_98Ralf },
    { L"Ralf D - Max Mode", 0x2d7650, 0x2d7670, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf D - Extra 4", 0x2d7670, 0x2d7690, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf D - Extra 5", 0x2d7690, 0x2d76b0, indexKOFSprites_98Ralf },
    { L"Ralf D - Super Trail 1", 0x2d76b0, 0x2d76d0, indexKOFSprites_98Ralf, 0x00, &pairNext },
    { L"Ralf D - Super Trail 2", 0x2d76d0, 0x2d76f0, indexKOFSprites_98Ralf, 0x01 },
    { L"Ralf D - Extra 8", 0x2d76f0, 0x2d7710, indexKOFSprites_98Ralf },
    { L"Ralf D - Extra 9", 0x2d7710, 0x2d7730, indexKOFSprites_98Ralf },
    { L"Ralf D - Extra 10", 0x2d7730, 0x2d7750, indexKOFSprites_98Ralf },
    { L"Ralf D - Extra 11", 0x2d7750, 0x2d7770, indexKOFSprites_98Ralf },
    { L"Ralf D - Extra 12", 0x2d7770, 0x2d7790, indexKOFSprites_98Ralf },
    { L"Ralf D - Extra 13", 0x2d7790, 0x2d77b0, indexKOFSprites_98Ralf },
    { L"Ralf D - Extra 14", 0x2d77b0, 0x2d77d0, indexKOFSprites_98Ralf },
    { L"Ralf D - Lifebar Portrait", 0x2d77d0, 0x2d77f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Ralf },
    { L"Ralf D - Win Portrait", 0x2ea8f0, 0x2ea9f0 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_A[] =
{
    { L"Clark A - Main", 0x2d77f0, 0x2d7810, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark A - Extra 1", 0x2d7810, 0x2d7830, indexKOFSprites_98Clark, 0x01 },
    { L"Clark A - Extra 2", 0x2d7830, 0x2d7850, indexKOFSprites_98Clark },
    { L"Clark A - Max Mode", 0x2d7850, 0x2d7870, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark A - Extra 4", 0x2d7870, 0x2d7890, indexKOFSprites_98Clark, 0x01 },
    { L"Clark A - Extra 5", 0x2d7890, 0x2d78b0, indexKOFSprites_98Clark },
    { L"Clark A - Super Trail 1", 0x2d78b0, 0x2d78d0, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark A - Super Trail 2", 0x2d78d0, 0x2d78f0, indexKOFSprites_98Clark, 0x01 },
    { L"Clark A - Extra 8", 0x2d78f0, 0x2d7910, indexKOFSprites_98Clark },
    { L"Clark A - Extra 9", 0x2d7910, 0x2d7930, indexKOFSprites_98Clark },
    { L"Clark A - Extra 10", 0x2d7930, 0x2d7950, indexKOFSprites_98Clark },
    { L"Clark A - Extra 11", 0x2d7950, 0x2d7970, indexKOFSprites_98Clark },
    { L"Clark A - Extra 12", 0x2d7970, 0x2d7990, indexKOFSprites_98Clark },
    { L"Clark A - Extra 13", 0x2d7990, 0x2d79b0, indexKOFSprites_98Clark },
    { L"Clark A - Extra 14", 0x2d79b0, 0x2d79d0, indexKOFSprites_98Clark },
    { L"Clark A - Lifebar Portrait", 0x2d79d0, 0x2d79f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark A - Win Portrait", 0x2ea9f0, 0x2eaab0 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_B[] =
{
    { L"Clark B - Main", 0x2d79f0, 0x2d7a10, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark B - Extra 1", 0x2d7a10, 0x2d7a30, indexKOFSprites_98Clark, 0x01 },
    { L"Clark B - Extra 2", 0x2d7a30, 0x2d7a50, indexKOFSprites_98Clark },
    { L"Clark B - Max Mode", 0x2d7a50, 0x2d7a70, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark B - Extra 4", 0x2d7a70, 0x2d7a90, indexKOFSprites_98Clark, 0x01 },
    { L"Clark B - Extra 5", 0x2d7a90, 0x2d7ab0, indexKOFSprites_98Clark },
    { L"Clark B - Super Trail 1", 0x2d7ab0, 0x2d7ad0, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark B - Super Trail 2", 0x2d7ad0, 0x2d7af0, indexKOFSprites_98Clark, 0x01 },
    { L"Clark B - Extra 8", 0x2d7af0, 0x2d7b10, indexKOFSprites_98Clark },
    { L"Clark B - Extra 9", 0x2d7b10, 0x2d7b30, indexKOFSprites_98Clark },
    { L"Clark B - Extra 10", 0x2d7b30, 0x2d7b50, indexKOFSprites_98Clark },
    { L"Clark B - Extra 11", 0x2d7b50, 0x2d7b70, indexKOFSprites_98Clark },
    { L"Clark B - Extra 12", 0x2d7b70, 0x2d7b90, indexKOFSprites_98Clark },
    { L"Clark B - Extra 13", 0x2d7b90, 0x2d7bb0, indexKOFSprites_98Clark },
    { L"Clark B - Extra 14", 0x2d7bb0, 0x2d7bd0, indexKOFSprites_98Clark },
    { L"Clark B - Lifebar Portrait", 0x2d7bd0, 0x2d7bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark B - Win Portrait", 0x2eaaf0, 0x2eabb0 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_C[] =
{
    { L"Clark C - Main", 0x2d7bf0, 0x2d7c10, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark C - Extra 1", 0x2d7c10, 0x2d7c30, indexKOFSprites_98Clark, 0x01 },
    { L"Clark C - Extra 2", 0x2d7c30, 0x2d7c50, indexKOFSprites_98Clark },
    { L"Clark C - Max Mode", 0x2d7c50, 0x2d7c70, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark C - Extra 4", 0x2d7c70, 0x2d7c90, indexKOFSprites_98Clark, 0x01 },
    { L"Clark C - Extra 5", 0x2d7c90, 0x2d7cb0, indexKOFSprites_98Clark },
    { L"Clark C - Super Trail 1", 0x2d7cb0, 0x2d7cd0, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark C - Super Trail 2", 0x2d7cd0, 0x2d7cf0, indexKOFSprites_98Clark, 0x01 },
    { L"Clark C - Extra 8", 0x2d7cf0, 0x2d7d10, indexKOFSprites_98Clark },
    { L"Clark C - Extra 9", 0x2d7d10, 0x2d7d30, indexKOFSprites_98Clark },
    { L"Clark C - Extra 10", 0x2d7d30, 0x2d7d50, indexKOFSprites_98Clark },
    { L"Clark C - Extra 11", 0x2d7d50, 0x2d7d70, indexKOFSprites_98Clark },
    { L"Clark C - Extra 12", 0x2d7d70, 0x2d7d90, indexKOFSprites_98Clark },
    { L"Clark C - Extra 13", 0x2d7d90, 0x2d7db0, indexKOFSprites_98Clark },
    { L"Clark C - Extra 14", 0x2d7db0, 0x2d7dd0, indexKOFSprites_98Clark },
    { L"Clark C - Lifebar Portrait", 0x2d7dd0, 0x2d7df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark C - Win Portrait", 0x2eabf0, 0x2eacb0 },
};

const sGame_PaletteDataset KOF97_A_CLARK_PALETTES_D[] =
{
    { L"Clark D - Main", 0x2d7df0, 0x2d7e10, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark D - Extra 1", 0x2d7e10, 0x2d7e30, indexKOFSprites_98Clark, 0x01 },
    { L"Clark D - Extra 2", 0x2d7e30, 0x2d7e50, indexKOFSprites_98Clark },
    { L"Clark D - Max Mode", 0x2d7e50, 0x2d7e70, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark D - Extra 4", 0x2d7e70, 0x2d7e90, indexKOFSprites_98Clark, 0x01 },
    { L"Clark D - Extra 5", 0x2d7e90, 0x2d7eb0, indexKOFSprites_98Clark },
    { L"Clark D - Super Trail 1", 0x2d7eb0, 0x2d7ed0, indexKOFSprites_98Clark, 0x00, &pairNext },
    { L"Clark D - Super Trail 2", 0x2d7ed0, 0x2d7ef0, indexKOFSprites_98Clark, 0x01 },
    { L"Clark D - Extra 8", 0x2d7ef0, 0x2d7f10, indexKOFSprites_98Clark },
    { L"Clark D - Extra 9", 0x2d7f10, 0x2d7f30, indexKOFSprites_98Clark },
    { L"Clark D - Extra 10", 0x2d7f30, 0x2d7f50, indexKOFSprites_98Clark },
    { L"Clark D - Extra 11", 0x2d7f50, 0x2d7f70, indexKOFSprites_98Clark },
    { L"Clark D - Extra 12", 0x2d7f70, 0x2d7f90, indexKOFSprites_98Clark },
    { L"Clark D - Extra 13", 0x2d7f90, 0x2d7fb0, indexKOFSprites_98Clark },
    { L"Clark D - Extra 14", 0x2d7fb0, 0x2d7fd0, indexKOFSprites_98Clark },
    { L"Clark D - Lifebar Portrait", 0x2d7fd0, 0x2d7ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Clark },
    { L"Clark D - Win Portrait", 0x2eacf0, 0x2eadb0 },
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
    { L"Athena A - Extra 9", 0x2d8110, 0x2d8130, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 10", 0x2d8130, 0x2d8150, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 11", 0x2d8150, 0x2d8170, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 12", 0x2d8170, 0x2d8190, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 13", 0x2d8190, 0x2d81b0, indexKOF97Sprites_Athena },
    { L"Athena A - Extra 14", 0x2d81b0, 0x2d81d0, indexKOF97Sprites_Athena },
    { L"Athena A - Lifebar Portrait", 0x2d81d0, 0x2d81f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Athena },
    { L"Athena A - Win Portrait", 0x2eadf0, 0x2eaef0 },
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
    { L"Athena B - Extra 9", 0x2d8310, 0x2d8330, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 10", 0x2d8330, 0x2d8350, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 11", 0x2d8350, 0x2d8370, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 12", 0x2d8370, 0x2d8390, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 13", 0x2d8390, 0x2d83b0, indexKOF97Sprites_Athena },
    { L"Athena B - Extra 14", 0x2d83b0, 0x2d83d0, indexKOF97Sprites_Athena },
    { L"Athena B - Lifebar Portrait", 0x2d83d0, 0x2d83f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Athena },
    { L"Athena B - Win Portrait", 0x2eaef0, 0x2eaff0 },
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
    { L"Athena C - Extra 9", 0x2d8510, 0x2d8530, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 10", 0x2d8530, 0x2d8550, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 11", 0x2d8550, 0x2d8570, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 12", 0x2d8570, 0x2d8590, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 13", 0x2d8590, 0x2d85b0, indexKOF97Sprites_Athena },
    { L"Athena C - Extra 14", 0x2d85b0, 0x2d85d0, indexKOF97Sprites_Athena },
    { L"Athena C - Lifebar Portrait", 0x2d85d0, 0x2d85f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Athena },
    { L"Athena C - Win Portrait", 0x2eaff0, 0x2eb0f0 },
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
    { L"Athena D - Extra 9", 0x2d8710, 0x2d8730, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 10", 0x2d8730, 0x2d8750, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 11", 0x2d8750, 0x2d8770, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 12", 0x2d8770, 0x2d8790, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 13", 0x2d8790, 0x2d87b0, indexKOF97Sprites_Athena },
    { L"Athena D - Extra 14", 0x2d87b0, 0x2d87d0, indexKOF97Sprites_Athena },
    { L"Athena D - Lifebar Portrait", 0x2d87d0, 0x2d87f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Athena },
    { L"Athena D - Win Portrait", 0x2eb0f0, 0x2eb1f0 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_A[] =
{
    { L"Kensou A - Main", 0x2d87f0, 0x2d8810, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 1", 0x2d8810, 0x2d8830, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 2", 0x2d8830, 0x2d8850, indexKOFSprites_98Kensou },
    { L"Kensou A - Max Mode", 0x2d8850, 0x2d8870, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 4", 0x2d8870, 0x2d8890, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 5", 0x2d8890, 0x2d88b0, indexKOFSprites_98Kensou },
    { L"Kensou A - Super Trail", 0x2d88b0, 0x2d88d0, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 7", 0x2d88d0, 0x2d88f0, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 8", 0x2d88f0, 0x2d8910, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 9", 0x2d8910, 0x2d8930, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 10", 0x2d8930, 0x2d8950, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 11", 0x2d8950, 0x2d8970, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 12", 0x2d8970, 0x2d8990, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 13", 0x2d8990, 0x2d89b0, indexKOFSprites_98Kensou },
    { L"Kensou A - Extra 14", 0x2d89b0, 0x2d89d0, indexKOFSprites_98Kensou },
    { L"Kensou A - Lifebar Portrait", 0x2d89d0, 0x2d89f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou A - Win Portrait", 0x2eb1f0, 0x2eb290 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_B[] =
{
    { L"Kensou B - Main", 0x2d89f0, 0x2d8a10, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 1", 0x2d8a10, 0x2d8a30, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 2", 0x2d8a30, 0x2d8a50, indexKOFSprites_98Kensou },
    { L"Kensou B - Max Mode", 0x2d8a50, 0x2d8a70, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 4", 0x2d8a70, 0x2d8a90, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 5", 0x2d8a90, 0x2d8ab0, indexKOFSprites_98Kensou },
    { L"Kensou B - Super Trail", 0x2d8ab0, 0x2d8ad0, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 7", 0x2d8ad0, 0x2d8af0, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 8", 0x2d8af0, 0x2d8b10, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 9", 0x2d8b10, 0x2d8b30, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 10", 0x2d8b30, 0x2d8b50, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 11", 0x2d8b50, 0x2d8b70, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 12", 0x2d8b70, 0x2d8b90, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 13", 0x2d8b90, 0x2d8bb0, indexKOFSprites_98Kensou },
    { L"Kensou B - Extra 14", 0x2d8bb0, 0x2d8bd0, indexKOFSprites_98Kensou },
    { L"Kensou B - Lifebar Portrait", 0x2d8bd0, 0x2d8bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou B - Win Portrait", 0x2eb2f0, 0x2eb390 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_C[] =
{
    { L"Kensou C - Main", 0x2d8bf0, 0x2d8c10, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 1", 0x2d8c10, 0x2d8c30, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 2", 0x2d8c30, 0x2d8c50, indexKOFSprites_98Kensou },
    { L"Kensou C - Max Mode", 0x2d8c50, 0x2d8c70, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 4", 0x2d8c70, 0x2d8c90, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 5", 0x2d8c90, 0x2d8cb0, indexKOFSprites_98Kensou },
    { L"Kensou C - Super Trail", 0x2d8cb0, 0x2d8cd0, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 7", 0x2d8cd0, 0x2d8cf0, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 8", 0x2d8cf0, 0x2d8d10, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 9", 0x2d8d10, 0x2d8d30, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 10", 0x2d8d30, 0x2d8d50, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 11", 0x2d8d50, 0x2d8d70, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 12", 0x2d8d70, 0x2d8d90, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 13", 0x2d8d90, 0x2d8db0, indexKOFSprites_98Kensou },
    { L"Kensou C - Extra 14", 0x2d8db0, 0x2d8dd0, indexKOFSprites_98Kensou },
    { L"Kensou C - Lifebar Portrait", 0x2d8dd0, 0x2d8df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou C - Win Portrait", 0x2eb3f0, 0x2eb490 },
};

const sGame_PaletteDataset KOF97_A_KENSOU_PALETTES_D[] =
{
    { L"Kensou D - Main", 0x2d8df0, 0x2d8e10, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 1", 0x2d8e10, 0x2d8e30, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 2", 0x2d8e30, 0x2d8e50, indexKOFSprites_98Kensou },
    { L"Kensou D - Max Mode", 0x2d8e50, 0x2d8e70, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 4", 0x2d8e70, 0x2d8e90, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 5", 0x2d8e90, 0x2d8eb0, indexKOFSprites_98Kensou },
    { L"Kensou D - Super Trail", 0x2d8eb0, 0x2d8ed0, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 7", 0x2d8ed0, 0x2d8ef0, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 8", 0x2d8ef0, 0x2d8f10, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 9", 0x2d8f10, 0x2d8f30, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 10", 0x2d8f30, 0x2d8f50, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 11", 0x2d8f50, 0x2d8f70, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 12", 0x2d8f70, 0x2d8f90, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 13", 0x2d8f90, 0x2d8fb0, indexKOFSprites_98Kensou },
    { L"Kensou D - Extra 14", 0x2d8fb0, 0x2d8fd0, indexKOFSprites_98Kensou },
    { L"Kensou D - Lifebar Portrait", 0x2d8fd0, 0x2d8ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kensou },
    { L"Kensou D - Win Portrait", 0x2eb4f0, 0x2eb590 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_A[] =
{
    { L"Chin A - Main", 0x2d8ff0, 0x2d9010, indexKOFSprites_98Chin },
    { L"Chin A - Extra 1", 0x2d9010, 0x2d9030, indexKOFSprites_98Chin },
    { L"Chin A - Extra 2", 0x2d9030, 0x2d9050, indexKOFSprites_98Chin },
    { L"Chin A - Max Mode", 0x2d9050, 0x2d9070, indexKOFSprites_98Chin },
    { L"Chin A - Extra 4", 0x2d9070, 0x2d9090, indexKOFSprites_98Chin },
    { L"Chin A - Extra 5", 0x2d9090, 0x2d90b0, indexKOFSprites_98Chin },
    { L"Chin A - Super Trail", 0x2d90b0, 0x2d90d0, indexKOFSprites_98Chin },
    { L"Chin A - Extra 7", 0x2d90d0, 0x2d90f0, indexKOFSprites_98Chin },
    { L"Chin A - Extra 8", 0x2d90f0, 0x2d9110, indexKOFSprites_98Chin },
    { L"Chin A - Extra 9", 0x2d9110, 0x2d9130, indexKOFSprites_98Chin },
    { L"Chin A - Extra 10", 0x2d9130, 0x2d9150, indexKOFSprites_98Chin },
    { L"Chin A - Extra 11", 0x2d9150, 0x2d9170, indexKOFSprites_98Chin },
    { L"Chin A - Extra 12", 0x2d9170, 0x2d9190, indexKOFSprites_98Chin },
    { L"Chin A - Extra 13", 0x2d9190, 0x2d91b0, indexKOFSprites_98Chin },
    { L"Chin A - Extra 14", 0x2d91b0, 0x2d91d0, indexKOFSprites_98Chin },
    { L"Chin A - Lifebar Portrait", 0x2d91d0, 0x2d91f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin A - Win Portrait", 0x2eb5f0, 0x2eb670 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_B[] =
{
    { L"Chin B - Main", 0x2d91f0, 0x2d9210, indexKOFSprites_98Chin },
    { L"Chin B - Extra 1", 0x2d9210, 0x2d9230, indexKOFSprites_98Chin },
    { L"Chin B - Extra 2", 0x2d9230, 0x2d9250, indexKOFSprites_98Chin },
    { L"Chin B - Max Mode", 0x2d9250, 0x2d9270, indexKOFSprites_98Chin },
    { L"Chin B - Extra 4", 0x2d9270, 0x2d9290, indexKOFSprites_98Chin },
    { L"Chin B - Extra 5", 0x2d9290, 0x2d92b0, indexKOFSprites_98Chin },
    { L"Chin B - Super Trail", 0x2d92b0, 0x2d92d0, indexKOFSprites_98Chin },
    { L"Chin B - Extra 7", 0x2d92d0, 0x2d92f0, indexKOFSprites_98Chin },
    { L"Chin B - Extra 8", 0x2d92f0, 0x2d9310, indexKOFSprites_98Chin },
    { L"Chin B - Extra 9", 0x2d9310, 0x2d9330, indexKOFSprites_98Chin },
    { L"Chin B - Extra 10", 0x2d9330, 0x2d9350, indexKOFSprites_98Chin },
    { L"Chin B - Extra 11", 0x2d9350, 0x2d9370, indexKOFSprites_98Chin },
    { L"Chin B - Extra 12", 0x2d9370, 0x2d9390, indexKOFSprites_98Chin },
    { L"Chin B - Extra 13", 0x2d9390, 0x2d93b0, indexKOFSprites_98Chin },
    { L"Chin B - Extra 14", 0x2d93b0, 0x2d93d0, indexKOFSprites_98Chin },
    { L"Chin B - Lifebar Portrait", 0x2d93d0, 0x2d93f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin B - Win Portrait", 0x2eb6f0, 0x2eb770 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_C[] =
{
    { L"Chin C - Main", 0x2d93f0, 0x2d9410, indexKOFSprites_98Chin },
    { L"Chin C - Extra 1", 0x2d9410, 0x2d9430, indexKOFSprites_98Chin },
    { L"Chin C - Extra 2", 0x2d9430, 0x2d9450, indexKOFSprites_98Chin },
    { L"Chin C - Max Mode", 0x2d9450, 0x2d9470, indexKOFSprites_98Chin },
    { L"Chin C - Extra 4", 0x2d9470, 0x2d9490, indexKOFSprites_98Chin },
    { L"Chin C - Extra 5", 0x2d9490, 0x2d94b0, indexKOFSprites_98Chin },
    { L"Chin C - Super Trail", 0x2d94b0, 0x2d94d0, indexKOFSprites_98Chin },
    { L"Chin C - Extra 7", 0x2d94d0, 0x2d94f0, indexKOFSprites_98Chin },
    { L"Chin C - Extra 8", 0x2d94f0, 0x2d9510, indexKOFSprites_98Chin },
    { L"Chin C - Extra 9", 0x2d9510, 0x2d9530, indexKOFSprites_98Chin },
    { L"Chin C - Extra 10", 0x2d9530, 0x2d9550, indexKOFSprites_98Chin },
    { L"Chin C - Extra 11", 0x2d9550, 0x2d9570, indexKOFSprites_98Chin },
    { L"Chin C - Extra 12", 0x2d9570, 0x2d9590, indexKOFSprites_98Chin },
    { L"Chin C - Extra 13", 0x2d9590, 0x2d95b0, indexKOFSprites_98Chin },
    { L"Chin C - Extra 14", 0x2d95b0, 0x2d95d0, indexKOFSprites_98Chin },
    { L"Chin C - Lifebar Portrait", 0x2d95d0, 0x2d95f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin C - Win Portrait", 0x2eb7f0, 0x2eb870 },
};

const sGame_PaletteDataset KOF97_A_CHIN_PALETTES_D[] =
{
    { L"Chin D - Main", 0x2d95f0, 0x2d9610, indexKOFSprites_98Chin },
    { L"Chin D - Extra 1", 0x2d9610, 0x2d9630, indexKOFSprites_98Chin },
    { L"Chin D - Extra 2", 0x2d9630, 0x2d9650, indexKOFSprites_98Chin },
    { L"Chin D - Max Mode", 0x2d9650, 0x2d9670, indexKOFSprites_98Chin },
    { L"Chin D - Extra 4", 0x2d9670, 0x2d9690, indexKOFSprites_98Chin },
    { L"Chin D - Extra 5", 0x2d9690, 0x2d96b0, indexKOFSprites_98Chin },
    { L"Chin D - Super Trail", 0x2d96b0, 0x2d96d0, indexKOFSprites_98Chin },
    { L"Chin D - Extra 7", 0x2d96d0, 0x2d96f0, indexKOFSprites_98Chin },
    { L"Chin D - Extra 8", 0x2d96f0, 0x2d9710, indexKOFSprites_98Chin },
    { L"Chin D - Extra 9", 0x2d9710, 0x2d9730, indexKOFSprites_98Chin },
    { L"Chin D - Extra 10", 0x2d9730, 0x2d9750, indexKOFSprites_98Chin },
    { L"Chin D - Extra 11", 0x2d9750, 0x2d9770, indexKOFSprites_98Chin },
    { L"Chin D - Extra 12", 0x2d9770, 0x2d9790, indexKOFSprites_98Chin },
    { L"Chin D - Extra 13", 0x2d9790, 0x2d97b0, indexKOFSprites_98Chin },
    { L"Chin D - Extra 14", 0x2d97b0, 0x2d97d0, indexKOFSprites_98Chin },
    { L"Chin D - Lifebar Portrait", 0x2d97d0, 0x2d97f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chin },
    { L"Chin D - Win Portrait", 0x2eb8f0, 0x2eb970 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_A[] =
{
    { L"Chizuru A - Main", 0x2d97f0, 0x2d9810, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 1", 0x2d9810, 0x2d9830, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 2", 0x2d9830, 0x2d9850, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Max Mode", 0x2d9850, 0x2d9870, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 4", 0x2d9870, 0x2d9890, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 5", 0x2d9890, 0x2d98b0, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Super Trail", 0x2d98b0, 0x2d98d0, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 7", 0x2d98d0, 0x2d98f0, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 8", 0x2d98f0, 0x2d9910, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 9", 0x2d9910, 0x2d9930, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 10", 0x2d9930, 0x2d9950, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 11", 0x2d9950, 0x2d9970, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 12", 0x2d9970, 0x2d9990, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 13", 0x2d9990, 0x2d99b0, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Extra 14", 0x2d99b0, 0x2d99d0, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Lifebar Portrait", 0x2d99d0, 0x2d99f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru A - Win Portrait", 0x2eb9f0, 0x2eba90 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_B[] =
{
    { L"Chizuru B - Main", 0x2d99f0, 0x2d9a10, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 1", 0x2d9a10, 0x2d9a30, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 2", 0x2d9a30, 0x2d9a50, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Max Mode", 0x2d9a50, 0x2d9a70, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 4", 0x2d9a70, 0x2d9a90, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 5", 0x2d9a90, 0x2d9ab0, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Super Trail", 0x2d9ab0, 0x2d9ad0, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 7", 0x2d9ad0, 0x2d9af0, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 8", 0x2d9af0, 0x2d9b10, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 9", 0x2d9b10, 0x2d9b30, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 10", 0x2d9b30, 0x2d9b50, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 11", 0x2d9b50, 0x2d9b70, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 12", 0x2d9b70, 0x2d9b90, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 13", 0x2d9b90, 0x2d9bb0, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Extra 14", 0x2d9bb0, 0x2d9bd0, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Lifebar Portrait", 0x2d9bd0, 0x2d9bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru B - Win Portrait", 0x2ebaf0, 0x2ebb90 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_C[] =
{
    { L"Chizuru C - Main", 0x2d9bf0, 0x2d9c10, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 1", 0x2d9c10, 0x2d9c30, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 2", 0x2d9c30, 0x2d9c50, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Max Mode", 0x2d9c50, 0x2d9c70, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 4", 0x2d9c70, 0x2d9c90, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 5", 0x2d9c90, 0x2d9cb0, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Super Trail", 0x2d9cb0, 0x2d9cd0, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 7", 0x2d9cd0, 0x2d9cf0, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 8", 0x2d9cf0, 0x2d9d10, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 9", 0x2d9d10, 0x2d9d30, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 10", 0x2d9d30, 0x2d9d50, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 11", 0x2d9d50, 0x2d9d70, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 12", 0x2d9d70, 0x2d9d90, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 13", 0x2d9d90, 0x2d9db0, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Extra 14", 0x2d9db0, 0x2d9dd0, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Lifebar Portrait", 0x2d9dd0, 0x2d9df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru C - Win Portrait", 0x2ebbf0, 0x2ebc90 },
};

const sGame_PaletteDataset KOF97_A_CHIZURU_PALETTES_D[] =
{
    { L"Chizuru D - Main", 0x2d9df0, 0x2d9e10, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 1", 0x2d9e10, 0x2d9e30, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 2", 0x2d9e30, 0x2d9e50, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Max Mode", 0x2d9e50, 0x2d9e70, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 4", 0x2d9e70, 0x2d9e90, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 5", 0x2d9e90, 0x2d9eb0, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Super Trail", 0x2d9eb0, 0x2d9ed0, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 7", 0x2d9ed0, 0x2d9ef0, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 8", 0x2d9ef0, 0x2d9f10, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 9", 0x2d9f10, 0x2d9f30, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 10", 0x2d9f30, 0x2d9f50, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 11", 0x2d9f50, 0x2d9f70, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 12", 0x2d9f70, 0x2d9f90, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 13", 0x2d9f90, 0x2d9fb0, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Extra 14", 0x2d9fb0, 0x2d9fd0, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Lifebar Portrait", 0x2d9fd0, 0x2d9ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chizuru },
    { L"Chizuru D - Win Portrait", 0x2ebcf0, 0x2ebd90 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_A[] =
{
    { L"Mai A - Main", 0x2d9ff0, 0x2da010, indexKOFSprites_98Mai },
    { L"Mai A - Extra 1", 0x2da010, 0x2da030, indexKOFSprites_98Mai },
    { L"Mai A - Extra 2", 0x2da030, 0x2da050, indexKOFSprites_98Mai },
    { L"Mai A - Max Mode", 0x2da050, 0x2da070, indexKOFSprites_98Mai },
    { L"Mai A - Extra 4", 0x2da070, 0x2da090, indexKOFSprites_98Mai },
    { L"Mai A - Extra 5", 0x2da090, 0x2da0b0, indexKOFSprites_98Mai },
    { L"Mai A - Super Trail", 0x2da0b0, 0x2da0d0, indexKOFSprites_98Mai },
    { L"Mai A - Extra 7", 0x2da0d0, 0x2da0f0, indexKOFSprites_98Mai },
    { L"Mai A - Extra 8", 0x2da0f0, 0x2da110, indexKOFSprites_98Mai },
    { L"Mai A - Extra 9", 0x2da110, 0x2da130, indexKOFSprites_98Mai },
    { L"Mai A - Extra 10", 0x2da130, 0x2da150, indexKOFSprites_98Mai },
    { L"Mai A - Extra 11", 0x2da150, 0x2da170, indexKOFSprites_98Mai },
    { L"Mai A - Extra 12", 0x2da170, 0x2da190, indexKOFSprites_98Mai },
    { L"Mai A - Extra 13", 0x2da190, 0x2da1b0, indexKOFSprites_98Mai },
    { L"Mai A - Extra 14", 0x2da1b0, 0x2da1d0, indexKOFSprites_98Mai },
    { L"Mai A - Lifebar Portrait", 0x2da1d0, 0x2da1f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai A - Win Portrait", 0x2ebdf0, 0x2ebeb0 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_B[] =
{
    { L"Mai B - Main", 0x2da1f0, 0x2da210, indexKOFSprites_98Mai },
    { L"Mai B - Extra 1", 0x2da210, 0x2da230, indexKOFSprites_98Mai },
    { L"Mai B - Extra 2", 0x2da230, 0x2da250, indexKOFSprites_98Mai },
    { L"Mai B - Max Mode", 0x2da250, 0x2da270, indexKOFSprites_98Mai },
    { L"Mai B - Extra 4", 0x2da270, 0x2da290, indexKOFSprites_98Mai },
    { L"Mai B - Extra 5", 0x2da290, 0x2da2b0, indexKOFSprites_98Mai },
    { L"Mai B - Super Trail", 0x2da2b0, 0x2da2d0, indexKOFSprites_98Mai },
    { L"Mai B - Extra 7", 0x2da2d0, 0x2da2f0, indexKOFSprites_98Mai },
    { L"Mai B - Extra 8", 0x2da2f0, 0x2da310, indexKOFSprites_98Mai },
    { L"Mai B - Extra 9", 0x2da310, 0x2da330, indexKOFSprites_98Mai },
    { L"Mai B - Extra 10", 0x2da330, 0x2da350, indexKOFSprites_98Mai },
    { L"Mai B - Extra 11", 0x2da350, 0x2da370, indexKOFSprites_98Mai },
    { L"Mai B - Extra 12", 0x2da370, 0x2da390, indexKOFSprites_98Mai },
    { L"Mai B - Extra 13", 0x2da390, 0x2da3b0, indexKOFSprites_98Mai },
    { L"Mai B - Extra 14", 0x2da3b0, 0x2da3d0, indexKOFSprites_98Mai },
    { L"Mai B - Lifebar Portrait", 0x2da3d0, 0x2da3f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai B - Win Portrait", 0x2ebef0, 0x2ebfb0 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_C[] =
{
    { L"Mai C - Main", 0x2da3f0, 0x2da410, indexKOFSprites_98Mai },
    { L"Mai C - Extra 1", 0x2da410, 0x2da430, indexKOFSprites_98Mai },
    { L"Mai C - Extra 2", 0x2da430, 0x2da450, indexKOFSprites_98Mai },
    { L"Mai C - Max Mode", 0x2da450, 0x2da470, indexKOFSprites_98Mai },
    { L"Mai C - Extra 4", 0x2da470, 0x2da490, indexKOFSprites_98Mai },
    { L"Mai C - Extra 5", 0x2da490, 0x2da4b0, indexKOFSprites_98Mai },
    { L"Mai C - Super Trail", 0x2da4b0, 0x2da4d0, indexKOFSprites_98Mai },
    { L"Mai C - Extra 7", 0x2da4d0, 0x2da4f0, indexKOFSprites_98Mai },
    { L"Mai C - Extra 8", 0x2da4f0, 0x2da510, indexKOFSprites_98Mai },
    { L"Mai C - Extra 9", 0x2da510, 0x2da530, indexKOFSprites_98Mai },
    { L"Mai C - Extra 10", 0x2da530, 0x2da550, indexKOFSprites_98Mai },
    { L"Mai C - Extra 11", 0x2da550, 0x2da570, indexKOFSprites_98Mai },
    { L"Mai C - Extra 12", 0x2da570, 0x2da590, indexKOFSprites_98Mai },
    { L"Mai C - Extra 13", 0x2da590, 0x2da5b0, indexKOFSprites_98Mai },
    { L"Mai C - Extra 14", 0x2da5b0, 0x2da5d0, indexKOFSprites_98Mai },
    { L"Mai C - Lifebar Portrait", 0x2da5d0, 0x2da5f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai C - Win Portrait", 0x2ebff0, 0x2ec0b0 },
};

const sGame_PaletteDataset KOF97_A_MAI_PALETTES_D[] =
{
    { L"Mai D - Main", 0x2da5f0, 0x2da610, indexKOFSprites_98Mai },
    { L"Mai D - Extra 1", 0x2da610, 0x2da630, indexKOFSprites_98Mai },
    { L"Mai D - Extra 2", 0x2da630, 0x2da650, indexKOFSprites_98Mai },
    { L"Mai D - Max Mode", 0x2da650, 0x2da670, indexKOFSprites_98Mai },
    { L"Mai D - Extra 4", 0x2da670, 0x2da690, indexKOFSprites_98Mai },
    { L"Mai D - Extra 5", 0x2da690, 0x2da6b0, indexKOFSprites_98Mai },
    { L"Mai D - Super Trail", 0x2da6b0, 0x2da6d0, indexKOFSprites_98Mai },
    { L"Mai D - Extra 7", 0x2da6d0, 0x2da6f0, indexKOFSprites_98Mai },
    { L"Mai D - Extra 8", 0x2da6f0, 0x2da710, indexKOFSprites_98Mai },
    { L"Mai D - Extra 9", 0x2da710, 0x2da730, indexKOFSprites_98Mai },
    { L"Mai D - Extra 10", 0x2da730, 0x2da750, indexKOFSprites_98Mai },
    { L"Mai D - Extra 11", 0x2da750, 0x2da770, indexKOFSprites_98Mai },
    { L"Mai D - Extra 12", 0x2da770, 0x2da790, indexKOFSprites_98Mai },
    { L"Mai D - Extra 13", 0x2da790, 0x2da7b0, indexKOFSprites_98Mai },
    { L"Mai D - Extra 14", 0x2da7b0, 0x2da7d0, indexKOFSprites_98Mai },
    { L"Mai D - Lifebar Portrait", 0x2da7d0, 0x2da7f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Mai },
    { L"Mai D - Win Portrait", 0x2ec0f0, 0x2ec1b0 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_A[] =
{
    { L"King A - Main", 0x2da7f0, 0x2da810, indexKOFSprites_98King },
    { L"King A - Extra 1", 0x2da810, 0x2da830, indexKOFSprites_98King },
    { L"King A - Extra 2", 0x2da830, 0x2da850, indexKOFSprites_98King },
    { L"King A - Max Mode", 0x2da850, 0x2da870, indexKOFSprites_98King },
    { L"King A - Extra 4", 0x2da870, 0x2da890, indexKOFSprites_98King },
    { L"King A - Extra 5", 0x2da890, 0x2da8b0, indexKOFSprites_98King },
    { L"King A - Super Trail", 0x2da8b0, 0x2da8d0, indexKOFSprites_98King },
    { L"King A - Extra 7", 0x2da8d0, 0x2da8f0, indexKOFSprites_98King },
    { L"King A - Extra 8", 0x2da8f0, 0x2da910, indexKOFSprites_98King },
    { L"King A - Extra 9", 0x2da910, 0x2da930, indexKOFSprites_98King },
    { L"King A - Extra 10", 0x2da930, 0x2da950, indexKOFSprites_98King },
    { L"King A - Extra 11", 0x2da950, 0x2da970, indexKOFSprites_98King },
    { L"King A - Extra 12", 0x2da970, 0x2da990, indexKOFSprites_98King },
    { L"King A - Extra 13", 0x2da990, 0x2da9b0, indexKOFSprites_98King },
    { L"King A - Extra 14", 0x2da9b0, 0x2da9d0, indexKOFSprites_98King },
    { L"King A - Lifebar Portrait", 0x2da9d0, 0x2da9f0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King A - Win Portrait", 0x2ec1f0, 0x2ec2f0 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_B[] =
{
    { L"King B - Main", 0x2da9f0, 0x2daa10, indexKOFSprites_98King },
    { L"King B - Extra 1", 0x2daa10, 0x2daa30, indexKOFSprites_98King },
    { L"King B - Extra 2", 0x2daa30, 0x2daa50, indexKOFSprites_98King },
    { L"King B - Max Mode", 0x2daa50, 0x2daa70, indexKOFSprites_98King },
    { L"King B - Extra 4", 0x2daa70, 0x2daa90, indexKOFSprites_98King },
    { L"King B - Extra 5", 0x2daa90, 0x2daab0, indexKOFSprites_98King },
    { L"King B - Super Trail", 0x2daab0, 0x2daad0, indexKOFSprites_98King },
    { L"King B - Extra 7", 0x2daad0, 0x2daaf0, indexKOFSprites_98King },
    { L"King B - Extra 8", 0x2daaf0, 0x2dab10, indexKOFSprites_98King },
    { L"King B - Extra 9", 0x2dab10, 0x2dab30, indexKOFSprites_98King },
    { L"King B - Extra 10", 0x2dab30, 0x2dab50, indexKOFSprites_98King },
    { L"King B - Extra 11", 0x2dab50, 0x2dab70, indexKOFSprites_98King },
    { L"King B - Extra 12", 0x2dab70, 0x2dab90, indexKOFSprites_98King },
    { L"King B - Extra 13", 0x2dab90, 0x2dabb0, indexKOFSprites_98King },
    { L"King B - Extra 14", 0x2dabb0, 0x2dabd0, indexKOFSprites_98King },
    { L"King B - Lifebar Portrait", 0x2dabd0, 0x2dabf0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King B - Win Portrait", 0x2ec2f0, 0x2ec3f0 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_C[] =
{
    { L"King C - Main", 0x2dabf0, 0x2dac10, indexKOFSprites_98King },
    { L"King C - Extra 1", 0x2dac10, 0x2dac30, indexKOFSprites_98King },
    { L"King C - Extra 2", 0x2dac30, 0x2dac50, indexKOFSprites_98King },
    { L"King C - Max Mode", 0x2dac50, 0x2dac70, indexKOFSprites_98King },
    { L"King C - Extra 4", 0x2dac70, 0x2dac90, indexKOFSprites_98King },
    { L"King C - Extra 5", 0x2dac90, 0x2dacb0, indexKOFSprites_98King },
    { L"King C - Super Trail", 0x2dacb0, 0x2dacd0, indexKOFSprites_98King },
    { L"King C - Extra 7", 0x2dacd0, 0x2dacf0, indexKOFSprites_98King },
    { L"King C - Extra 8", 0x2dacf0, 0x2dad10, indexKOFSprites_98King },
    { L"King C - Extra 9", 0x2dad10, 0x2dad30, indexKOFSprites_98King },
    { L"King C - Extra 10", 0x2dad30, 0x2dad50, indexKOFSprites_98King },
    { L"King C - Extra 11", 0x2dad50, 0x2dad70, indexKOFSprites_98King },
    { L"King C - Extra 12", 0x2dad70, 0x2dad90, indexKOFSprites_98King },
    { L"King C - Extra 13", 0x2dad90, 0x2dadb0, indexKOFSprites_98King },
    { L"King C - Extra 14", 0x2dadb0, 0x2dadd0, indexKOFSprites_98King },
    { L"King C - Lifebar Portrait", 0x2dadd0, 0x2dadf0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King C - Win Portrait", 0x2ec3f0, 0x2ec4f0 },
};

const sGame_PaletteDataset KOF97_A_KING_PALETTES_D[] =
{
    { L"King D - Main", 0x2dadf0, 0x2dae10, indexKOFSprites_98King },
    { L"King D - Extra 1", 0x2dae10, 0x2dae30, indexKOFSprites_98King },
    { L"King D - Extra 2", 0x2dae30, 0x2dae50, indexKOFSprites_98King },
    { L"King D - Max Mode", 0x2dae50, 0x2dae70, indexKOFSprites_98King },
    { L"King D - Extra 4", 0x2dae70, 0x2dae90, indexKOFSprites_98King },
    { L"King D - Extra 5", 0x2dae90, 0x2daeb0, indexKOFSprites_98King },
    { L"King D - Super Trail", 0x2daeb0, 0x2daed0, indexKOFSprites_98King },
    { L"King D - Extra 7", 0x2daed0, 0x2daef0, indexKOFSprites_98King },
    { L"King D - Extra 8", 0x2daef0, 0x2daf10, indexKOFSprites_98King },
    { L"King D - Extra 9", 0x2daf10, 0x2daf30, indexKOFSprites_98King },
    { L"King D - Extra 10", 0x2daf30, 0x2daf50, indexKOFSprites_98King },
    { L"King D - Extra 11", 0x2daf50, 0x2daf70, indexKOFSprites_98King },
    { L"King D - Extra 12", 0x2daf70, 0x2daf90, indexKOFSprites_98King },
    { L"King D - Extra 13", 0x2daf90, 0x2dafb0, indexKOFSprites_98King },
    { L"King D - Extra 14", 0x2dafb0, 0x2dafd0, indexKOFSprites_98King },
    { L"King D - Lifebar Portrait", 0x2dafd0, 0x2daff0, indexKOFSprites_98Lifebar, indexKOFSprites_98King },
    { L"King D - Win Portrait", 0x2ec4f0, 0x2ec5f0 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_A[] =
{
    { L"Kim A - Main", 0x2daff0, 0x2db010, indexKOFSprites_98Kim },
    { L"Kim A - Extra 1", 0x2db010, 0x2db030, indexKOFSprites_98Kim },
    { L"Kim A - Extra 2", 0x2db030, 0x2db050, indexKOFSprites_98Kim },
    { L"Kim A - Max Mode", 0x2db050, 0x2db070, indexKOFSprites_98Kim },
    { L"Kim A - Extra 4", 0x2db070, 0x2db090, indexKOFSprites_98Kim },
    { L"Kim A - Extra 5", 0x2db090, 0x2db0b0, indexKOFSprites_98Kim },
    { L"Kim A - Super Trail", 0x2db0b0, 0x2db0d0, indexKOFSprites_98Kim },
    { L"Kim A - Extra 7", 0x2db0d0, 0x2db0f0, indexKOFSprites_98Kim },
    { L"Kim A - Extra 8", 0x2db0f0, 0x2db110, indexKOFSprites_98Kim },
    { L"Kim A - Extra 9", 0x2db110, 0x2db130, indexKOFSprites_98Kim },
    { L"Kim A - Extra 10", 0x2db130, 0x2db150, indexKOFSprites_98Kim },
    { L"Kim A - Extra 11", 0x2db150, 0x2db170, indexKOFSprites_98Kim },
    { L"Kim A - Extra 12", 0x2db170, 0x2db190, indexKOFSprites_98Kim },
    { L"Kim A - Extra 13", 0x2db190, 0x2db1b0, indexKOFSprites_98Kim },
    { L"Kim A - Extra 14", 0x2db1b0, 0x2db1d0, indexKOFSprites_98Kim },
    { L"Kim A - Lifebar Portrait", 0x2db1d0, 0x2db1f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim A - Win Portrait", 0x2ec5f0, 0x2ec6f0 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_B[] =
{
    { L"Kim B - Main", 0x2db1f0, 0x2db210, indexKOFSprites_98Kim },
    { L"Kim B - Extra 1", 0x2db210, 0x2db230, indexKOFSprites_98Kim },
    { L"Kim B - Extra 2", 0x2db230, 0x2db250, indexKOFSprites_98Kim },
    { L"Kim B - Max Mode", 0x2db250, 0x2db270, indexKOFSprites_98Kim },
    { L"Kim B - Extra 4", 0x2db270, 0x2db290, indexKOFSprites_98Kim },
    { L"Kim B - Extra 5", 0x2db290, 0x2db2b0, indexKOFSprites_98Kim },
    { L"Kim B - Super Trail", 0x2db2b0, 0x2db2d0, indexKOFSprites_98Kim },
    { L"Kim B - Extra 7", 0x2db2d0, 0x2db2f0, indexKOFSprites_98Kim },
    { L"Kim B - Extra 8", 0x2db2f0, 0x2db310, indexKOFSprites_98Kim },
    { L"Kim B - Extra 9", 0x2db310, 0x2db330, indexKOFSprites_98Kim },
    { L"Kim B - Extra 10", 0x2db330, 0x2db350, indexKOFSprites_98Kim },
    { L"Kim B - Extra 11", 0x2db350, 0x2db370, indexKOFSprites_98Kim },
    { L"Kim B - Extra 12", 0x2db370, 0x2db390, indexKOFSprites_98Kim },
    { L"Kim B - Extra 13", 0x2db390, 0x2db3b0, indexKOFSprites_98Kim },
    { L"Kim B - Extra 14", 0x2db3b0, 0x2db3d0, indexKOFSprites_98Kim },
    { L"Kim B - Lifebar Portrait", 0x2db3d0, 0x2db3f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim B - Win Portrait", 0x2ec6f0, 0x2ec7f0 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_C[] =
{
    { L"Kim C - Main", 0x2db3f0, 0x2db410, indexKOFSprites_98Kim },
    { L"Kim C - Extra 1", 0x2db410, 0x2db430, indexKOFSprites_98Kim },
    { L"Kim C - Extra 2", 0x2db430, 0x2db450, indexKOFSprites_98Kim },
    { L"Kim C - Max Mode", 0x2db450, 0x2db470, indexKOFSprites_98Kim },
    { L"Kim C - Extra 4", 0x2db470, 0x2db490, indexKOFSprites_98Kim },
    { L"Kim C - Extra 5", 0x2db490, 0x2db4b0, indexKOFSprites_98Kim },
    { L"Kim C - Super Trail", 0x2db4b0, 0x2db4d0, indexKOFSprites_98Kim },
    { L"Kim C - Extra 7", 0x2db4d0, 0x2db4f0, indexKOFSprites_98Kim },
    { L"Kim C - Extra 8", 0x2db4f0, 0x2db510, indexKOFSprites_98Kim },
    { L"Kim C - Extra 9", 0x2db510, 0x2db530, indexKOFSprites_98Kim },
    { L"Kim C - Extra 10", 0x2db530, 0x2db550, indexKOFSprites_98Kim },
    { L"Kim C - Extra 11", 0x2db550, 0x2db570, indexKOFSprites_98Kim },
    { L"Kim C - Extra 12", 0x2db570, 0x2db590, indexKOFSprites_98Kim },
    { L"Kim C - Extra 13", 0x2db590, 0x2db5b0, indexKOFSprites_98Kim },
    { L"Kim C - Extra 14", 0x2db5b0, 0x2db5d0, indexKOFSprites_98Kim },
    { L"Kim C - Lifebar Portrait", 0x2db5d0, 0x2db5f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim C - Win Portrait", 0x2ec7f0, 0x2ec8f0 },
};

const sGame_PaletteDataset KOF97_A_KIM_PALETTES_D[] =
{
    { L"Kim D - Main", 0x2db5f0, 0x2db610, indexKOFSprites_98Kim },
    { L"Kim D - Extra 1", 0x2db610, 0x2db630, indexKOFSprites_98Kim },
    { L"Kim D - Extra 2", 0x2db630, 0x2db650, indexKOFSprites_98Kim },
    { L"Kim D - Max Mode", 0x2db650, 0x2db670, indexKOFSprites_98Kim },
    { L"Kim D - Extra 4", 0x2db670, 0x2db690, indexKOFSprites_98Kim },
    { L"Kim D - Extra 5", 0x2db690, 0x2db6b0, indexKOFSprites_98Kim },
    { L"Kim D - Super Trail", 0x2db6b0, 0x2db6d0, indexKOFSprites_98Kim },
    { L"Kim D - Extra 7", 0x2db6d0, 0x2db6f0, indexKOFSprites_98Kim },
    { L"Kim D - Extra 8", 0x2db6f0, 0x2db710, indexKOFSprites_98Kim },
    { L"Kim D - Extra 9", 0x2db710, 0x2db730, indexKOFSprites_98Kim },
    { L"Kim D - Extra 10", 0x2db730, 0x2db750, indexKOFSprites_98Kim },
    { L"Kim D - Extra 11", 0x2db750, 0x2db770, indexKOFSprites_98Kim },
    { L"Kim D - Extra 12", 0x2db770, 0x2db790, indexKOFSprites_98Kim },
    { L"Kim D - Extra 13", 0x2db790, 0x2db7b0, indexKOFSprites_98Kim },
    { L"Kim D - Extra 14", 0x2db7b0, 0x2db7d0, indexKOFSprites_98Kim },
    { L"Kim D - Lifebar Portrait", 0x2db7d0, 0x2db7f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Kim },
    { L"Kim D - Win Portrait", 0x2ec8f0, 0x2ec9f0 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_A[] =
{
    { L"Chang A - Main", 0x2db7f0, 0x2db810, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang A - Extra 1", 0x2db810, 0x2db830, indexKOFSprites_98Chang, 0x01 },
    { L"Chang A - Extra 2", 0x2db830, 0x2db850, indexKOFSprites_98Chang },
    { L"Chang A - Max Mode", 0x2db850, 0x2db870, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang A - Extra 4", 0x2db870, 0x2db890, indexKOFSprites_98Chang, 0x01 },
    { L"Chang A - Extra 5", 0x2db890, 0x2db8b0, indexKOFSprites_98Chang },
    { L"Chang A - Super Trail 1", 0x2db8b0, 0x2db8d0, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang A - Super Trail 2", 0x2db8d0, 0x2db8f0, indexKOFSprites_98Chang, 0x01 },
    { L"Chang A - Extra 8", 0x2db8f0, 0x2db910, indexKOFSprites_98Chang },
    { L"Chang A - Extra 9", 0x2db910, 0x2db930, indexKOFSprites_98Chang },
    { L"Chang A - Extra 10", 0x2db930, 0x2db950, indexKOFSprites_98Chang },
    { L"Chang A - Extra 11", 0x2db950, 0x2db970, indexKOFSprites_98Chang },
    { L"Chang A - Extra 12", 0x2db970, 0x2db990, indexKOFSprites_98Chang },
    { L"Chang A - Extra 13", 0x2db990, 0x2db9b0, indexKOFSprites_98Chang },
    { L"Chang A - Extra 14", 0x2db9b0, 0x2db9d0, indexKOFSprites_98Chang },
    { L"Chang A - Lifebar Portrait", 0x2db9d0, 0x2db9f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang A - Win Portrait", 0x2ec9f0, 0x2ecaf0 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_B[] =
{
    { L"Chang B - Main", 0x2db9f0, 0x2dba10, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang B - Extra 1", 0x2dba10, 0x2dba30, indexKOFSprites_98Chang, 0x01 },
    { L"Chang B - Extra 2", 0x2dba30, 0x2dba50, indexKOFSprites_98Chang },
    { L"Chang B - Max Mode", 0x2dba50, 0x2dba70, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang B - Extra 4", 0x2dba70, 0x2dba90, indexKOFSprites_98Chang, 0x01 },
    { L"Chang B - Extra 5", 0x2dba90, 0x2dbab0, indexKOFSprites_98Chang },
    { L"Chang B - Super Trail 1", 0x2dbab0, 0x2dbad0, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang B - Super Trail 2", 0x2dbad0, 0x2dbaf0, indexKOFSprites_98Chang, 0x01 },
    { L"Chang B - Extra 8", 0x2dbaf0, 0x2dbb10, indexKOFSprites_98Chang },
    { L"Chang B - Extra 9", 0x2dbb10, 0x2dbb30, indexKOFSprites_98Chang },
    { L"Chang B - Extra 10", 0x2dbb30, 0x2dbb50, indexKOFSprites_98Chang },
    { L"Chang B - Extra 11", 0x2dbb50, 0x2dbb70, indexKOFSprites_98Chang },
    { L"Chang B - Extra 12", 0x2dbb70, 0x2dbb90, indexKOFSprites_98Chang },
    { L"Chang B - Extra 13", 0x2dbb90, 0x2dbbb0, indexKOFSprites_98Chang },
    { L"Chang B - Extra 14", 0x2dbbb0, 0x2dbbd0, indexKOFSprites_98Chang },
    { L"Chang B - Lifebar Portrait", 0x2dbbd0, 0x2dbbf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang B - Win Portrait", 0x2ecaf0, 0x2ecbf0 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_C[] =
{
    { L"Chang C - Main", 0x2dbbf0, 0x2dbc10, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang C - Extra 1", 0x2dbc10, 0x2dbc30, indexKOFSprites_98Chang, 0x01 },
    { L"Chang C - Extra 2", 0x2dbc30, 0x2dbc50, indexKOFSprites_98Chang },
    { L"Chang C - Max Mode", 0x2dbc50, 0x2dbc70, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang C - Extra 4", 0x2dbc70, 0x2dbc90, indexKOFSprites_98Chang, 0x01 },
    { L"Chang C - Extra 5", 0x2dbc90, 0x2dbcb0, indexKOFSprites_98Chang },
    { L"Chang C - Super Trail 1", 0x2dbcb0, 0x2dbcd0, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang C - Super Trail 2", 0x2dbcd0, 0x2dbcf0, indexKOFSprites_98Chang, 0x01 },
    { L"Chang C - Extra 8", 0x2dbcf0, 0x2dbd10, indexKOFSprites_98Chang },
    { L"Chang C - Extra 9", 0x2dbd10, 0x2dbd30, indexKOFSprites_98Chang },
    { L"Chang C - Extra 10", 0x2dbd30, 0x2dbd50, indexKOFSprites_98Chang },
    { L"Chang C - Extra 11", 0x2dbd50, 0x2dbd70, indexKOFSprites_98Chang },
    { L"Chang C - Extra 12", 0x2dbd70, 0x2dbd90, indexKOFSprites_98Chang },
    { L"Chang C - Extra 13", 0x2dbd90, 0x2dbdb0, indexKOFSprites_98Chang },
    { L"Chang C - Extra 14", 0x2dbdb0, 0x2dbdd0, indexKOFSprites_98Chang },
    { L"Chang C - Lifebar Portrait", 0x2dbdd0, 0x2dbdf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang C - Win Portrait", 0x2ecbf0, 0x2eccf0 },
};

const sGame_PaletteDataset KOF97_A_CHANG_PALETTES_D[] =
{
    { L"Chang D - Main", 0x2dbdf0, 0x2dbe10, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang D - Extra 1", 0x2dbe10, 0x2dbe30, indexKOFSprites_98Chang, 0x01 },
    { L"Chang D - Extra 2", 0x2dbe30, 0x2dbe50, indexKOFSprites_98Chang },
    { L"Chang D - Max Mode", 0x2dbe50, 0x2dbe70, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang D - Extra 4", 0x2dbe70, 0x2dbe90, indexKOFSprites_98Chang, 0x01 },
    { L"Chang D - Extra 5", 0x2dbe90, 0x2dbeb0, indexKOFSprites_98Chang },
    { L"Chang D - Super Trail 1", 0x2dbeb0, 0x2dbed0, indexKOFSprites_98Chang, 0x00, &pairNext },
    { L"Chang D - Super Trail 2", 0x2dbed0, 0x2dbef0, indexKOFSprites_98Chang, 0x01 },
    { L"Chang D - Extra 8", 0x2dbef0, 0x2dbf10, indexKOFSprites_98Chang },
    { L"Chang D - Extra 9", 0x2dbf10, 0x2dbf30, indexKOFSprites_98Chang },
    { L"Chang D - Extra 10", 0x2dbf30, 0x2dbf50, indexKOFSprites_98Chang },
    { L"Chang D - Extra 11", 0x2dbf50, 0x2dbf70, indexKOFSprites_98Chang },
    { L"Chang D - Extra 12", 0x2dbf70, 0x2dbf90, indexKOFSprites_98Chang },
    { L"Chang D - Extra 13", 0x2dbf90, 0x2dbfb0, indexKOFSprites_98Chang },
    { L"Chang D - Extra 14", 0x2dbfb0, 0x2dbfd0, indexKOFSprites_98Chang },
    { L"Chang D - Lifebar Portrait", 0x2dbfd0, 0x2dbff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chang },
    { L"Chang D - Win Portrait", 0x2eccf0, 0x2ecdf0 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_A[] =
{
    { L"Choi A - Main", 0x2dbff0, 0x2dc010, indexKOFSprites_98Choi },
    { L"Choi A - Extra 1", 0x2dc010, 0x2dc030, indexKOFSprites_98Choi },
    { L"Choi A - Extra 2", 0x2dc030, 0x2dc050, indexKOFSprites_98Choi },
    { L"Choi A - Max Mode", 0x2dc050, 0x2dc070, indexKOFSprites_98Choi },
    { L"Choi A - Extra 4", 0x2dc070, 0x2dc090, indexKOFSprites_98Choi },
    { L"Choi A - Extra 5", 0x2dc090, 0x2dc0b0, indexKOFSprites_98Choi },
    { L"Choi A - Super Trail", 0x2dc0b0, 0x2dc0d0, indexKOFSprites_98Choi },
    { L"Choi A - Extra 7", 0x2dc0d0, 0x2dc0f0, indexKOFSprites_98Choi },
    { L"Choi A - Extra 8", 0x2dc0f0, 0x2dc110, indexKOFSprites_98Choi },
    { L"Choi A - Extra 9", 0x2dc110, 0x2dc130, indexKOFSprites_98Choi },
    { L"Choi A - Extra 10", 0x2dc130, 0x2dc150, indexKOFSprites_98Choi },
    { L"Choi A - Extra 11", 0x2dc150, 0x2dc170, indexKOFSprites_98Choi },
    { L"Choi A - Extra 12", 0x2dc170, 0x2dc190, indexKOFSprites_98Choi },
    { L"Choi A - Extra 13", 0x2dc190, 0x2dc1b0, indexKOFSprites_98Choi },
    { L"Choi A - Extra 14", 0x2dc1b0, 0x2dc1d0, indexKOFSprites_98Choi },
    { L"Choi A - Lifebar Portrait", 0x2dc1d0, 0x2dc1f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi A - Win Portrait", 0x2ecdf0, 0x2ecef0 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_B[] =
{
    { L"Choi B - Main", 0x2dc1f0, 0x2dc210, indexKOFSprites_98Choi },
    { L"Choi B - Extra 1", 0x2dc210, 0x2dc230, indexKOFSprites_98Choi },
    { L"Choi B - Extra 2", 0x2dc230, 0x2dc250, indexKOFSprites_98Choi },
    { L"Choi B - Max Mode", 0x2dc250, 0x2dc270, indexKOFSprites_98Choi },
    { L"Choi B - Extra 4", 0x2dc270, 0x2dc290, indexKOFSprites_98Choi },
    { L"Choi B - Extra 5", 0x2dc290, 0x2dc2b0, indexKOFSprites_98Choi },
    { L"Choi B - Super Trail", 0x2dc2b0, 0x2dc2d0, indexKOFSprites_98Choi },
    { L"Choi B - Extra 7", 0x2dc2d0, 0x2dc2f0, indexKOFSprites_98Choi },
    { L"Choi B - Extra 8", 0x2dc2f0, 0x2dc310, indexKOFSprites_98Choi },
    { L"Choi B - Extra 9", 0x2dc310, 0x2dc330, indexKOFSprites_98Choi },
    { L"Choi B - Extra 10", 0x2dc330, 0x2dc350, indexKOFSprites_98Choi },
    { L"Choi B - Extra 11", 0x2dc350, 0x2dc370, indexKOFSprites_98Choi },
    { L"Choi B - Extra 12", 0x2dc370, 0x2dc390, indexKOFSprites_98Choi },
    { L"Choi B - Extra 13", 0x2dc390, 0x2dc3b0, indexKOFSprites_98Choi },
    { L"Choi B - Extra 14", 0x2dc3b0, 0x2dc3d0, indexKOFSprites_98Choi },
    { L"Choi B - Lifebar Portrait", 0x2dc3d0, 0x2dc3f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi B - Win Portrait", 0x2ecef0, 0x2ecff0 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_C[] =
{
    { L"Choi C - Main", 0x2dc3f0, 0x2dc410, indexKOFSprites_98Choi },
    { L"Choi C - Extra 1", 0x2dc410, 0x2dc430, indexKOFSprites_98Choi },
    { L"Choi C - Extra 2", 0x2dc430, 0x2dc450, indexKOFSprites_98Choi },
    { L"Choi C - Max Mode", 0x2dc450, 0x2dc470, indexKOFSprites_98Choi },
    { L"Choi C - Extra 4", 0x2dc470, 0x2dc490, indexKOFSprites_98Choi },
    { L"Choi C - Extra 5", 0x2dc490, 0x2dc4b0, indexKOFSprites_98Choi },
    { L"Choi C - Super Trail", 0x2dc4b0, 0x2dc4d0, indexKOFSprites_98Choi },
    { L"Choi C - Extra 7", 0x2dc4d0, 0x2dc4f0, indexKOFSprites_98Choi },
    { L"Choi C - Extra 8", 0x2dc4f0, 0x2dc510, indexKOFSprites_98Choi },
    { L"Choi C - Extra 9", 0x2dc510, 0x2dc530, indexKOFSprites_98Choi },
    { L"Choi C - Extra 10", 0x2dc530, 0x2dc550, indexKOFSprites_98Choi },
    { L"Choi C - Extra 11", 0x2dc550, 0x2dc570, indexKOFSprites_98Choi },
    { L"Choi C - Extra 12", 0x2dc570, 0x2dc590, indexKOFSprites_98Choi },
    { L"Choi C - Extra 13", 0x2dc590, 0x2dc5b0, indexKOFSprites_98Choi },
    { L"Choi C - Extra 14", 0x2dc5b0, 0x2dc5d0, indexKOFSprites_98Choi },
    { L"Choi C - Lifebar Portrait", 0x2dc5d0, 0x2dc5f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi C - Win Portrait", 0x2ecff0, 0x2ed0f0 },
};

const sGame_PaletteDataset KOF97_A_CHOI_PALETTES_D[] =
{
    { L"Choi D - Main", 0x2dc5f0, 0x2dc610, indexKOFSprites_98Choi },
    { L"Choi D - Extra 1", 0x2dc610, 0x2dc630, indexKOFSprites_98Choi },
    { L"Choi D - Extra 2", 0x2dc630, 0x2dc650, indexKOFSprites_98Choi },
    { L"Choi D - Max Mode", 0x2dc650, 0x2dc670, indexKOFSprites_98Choi },
    { L"Choi D - Extra 4", 0x2dc670, 0x2dc690, indexKOFSprites_98Choi },
    { L"Choi D - Extra 5", 0x2dc690, 0x2dc6b0, indexKOFSprites_98Choi },
    { L"Choi D - Super Trail", 0x2dc6b0, 0x2dc6d0, indexKOFSprites_98Choi },
    { L"Choi D - Extra 7", 0x2dc6d0, 0x2dc6f0, indexKOFSprites_98Choi },
    { L"Choi D - Extra 8", 0x2dc6f0, 0x2dc710, indexKOFSprites_98Choi },
    { L"Choi D - Extra 9", 0x2dc710, 0x2dc730, indexKOFSprites_98Choi },
    { L"Choi D - Extra 10", 0x2dc730, 0x2dc750, indexKOFSprites_98Choi },
    { L"Choi D - Extra 11", 0x2dc750, 0x2dc770, indexKOFSprites_98Choi },
    { L"Choi D - Extra 12", 0x2dc770, 0x2dc790, indexKOFSprites_98Choi },
    { L"Choi D - Extra 13", 0x2dc790, 0x2dc7b0, indexKOFSprites_98Choi },
    { L"Choi D - Extra 14", 0x2dc7b0, 0x2dc7d0, indexKOFSprites_98Choi },
    { L"Choi D - Lifebar Portrait", 0x2dc7d0, 0x2dc7f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Choi },
    { L"Choi D - Win Portrait", 0x2ed0f0, 0x2ed1f0 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_A[] =
{
    { L"Yamazaki A - Main", 0x2dc7f0, 0x2dc810, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 1", 0x2dc810, 0x2dc830, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 2", 0x2dc830, 0x2dc850, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Max Mode", 0x2dc850, 0x2dc870, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 4", 0x2dc870, 0x2dc890, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 5", 0x2dc890, 0x2dc8b0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Super Trail", 0x2dc8b0, 0x2dc8d0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 7", 0x2dc8d0, 0x2dc8f0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 8", 0x2dc8f0, 0x2dc910, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 9", 0x2dc910, 0x2dc930, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 10", 0x2dc930, 0x2dc950, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 11", 0x2dc950, 0x2dc970, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 12", 0x2dc970, 0x2dc990, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 13", 0x2dc990, 0x2dc9b0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Extra 14", 0x2dc9b0, 0x2dc9d0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Lifebar Portrait", 0x2dc9d0, 0x2dc9f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki A - Win Portrait", 0x2ed1f0, 0x2ed2f0 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_B[] =
{
    { L"Yamazaki B - Main", 0x2dc9f0, 0x2dca10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 1", 0x2dca10, 0x2dca30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 2", 0x2dca30, 0x2dca50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Max Mode", 0x2dca50, 0x2dca70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 4", 0x2dca70, 0x2dca90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 5", 0x2dca90, 0x2dcab0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Super Trail", 0x2dcab0, 0x2dcad0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 7", 0x2dcad0, 0x2dcaf0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 8", 0x2dcaf0, 0x2dcb10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 9", 0x2dcb10, 0x2dcb30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 10", 0x2dcb30, 0x2dcb50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 11", 0x2dcb50, 0x2dcb70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 12", 0x2dcb70, 0x2dcb90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 13", 0x2dcb90, 0x2dcbb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Extra 14", 0x2dcbb0, 0x2dcbd0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Lifebar Portrait", 0x2dcbd0, 0x2dcbf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki B - Win Portrait", 0x2ed2f0, 0x2ed3f0 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_C[] =
{
    { L"Yamazaki C - Main", 0x2dcbf0, 0x2dcc10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 1", 0x2dcc10, 0x2dcc30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 2", 0x2dcc30, 0x2dcc50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Max Mode", 0x2dcc50, 0x2dcc70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 4", 0x2dcc70, 0x2dcc90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 5", 0x2dcc90, 0x2dccb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Super Trail", 0x2dccb0, 0x2dccd0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 7", 0x2dccd0, 0x2dccf0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 8", 0x2dccf0, 0x2dcd10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 9", 0x2dcd10, 0x2dcd30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 10", 0x2dcd30, 0x2dcd50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 11", 0x2dcd50, 0x2dcd70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 12", 0x2dcd70, 0x2dcd90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 13", 0x2dcd90, 0x2dcdb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Extra 14", 0x2dcdb0, 0x2dcdd0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Lifebar Portrait", 0x2dcdd0, 0x2dcdf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki C - Win Portrait", 0x2ed3f0, 0x2ed4f0 },
};

const sGame_PaletteDataset KOF97_A_YAMAZAKI_PALETTES_D[] =
{
    { L"Yamazaki D - Main", 0x2dcdf0, 0x2dce10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 1", 0x2dce10, 0x2dce30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 2", 0x2dce30, 0x2dce50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Max Mode", 0x2dce50, 0x2dce70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 4", 0x2dce70, 0x2dce90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 5", 0x2dce90, 0x2dceb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Super Trail", 0x2dceb0, 0x2dced0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 7", 0x2dced0, 0x2dcef0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 8", 0x2dcef0, 0x2dcf10, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 9", 0x2dcf10, 0x2dcf30, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 10", 0x2dcf30, 0x2dcf50, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 11", 0x2dcf50, 0x2dcf70, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 12", 0x2dcf70, 0x2dcf90, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 13", 0x2dcf90, 0x2dcfb0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Extra 14", 0x2dcfb0, 0x2dcfd0, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Lifebar Portrait", 0x2dcfd0, 0x2dcff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yamazaki },
    { L"Yamazaki D - Win Portrait", 0x2ed4f0, 0x2ed5f0 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A - Main", 0x2dcff0, 0x2dd010, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 1", 0x2dd010, 0x2dd030, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 2", 0x2dd030, 0x2dd050, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Max Mode", 0x2dd050, 0x2dd070, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 4", 0x2dd070, 0x2dd090, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 5", 0x2dd090, 0x2dd0b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Super Trail", 0x2dd0b0, 0x2dd0d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 7", 0x2dd0d0, 0x2dd0f0, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 8", 0x2dd0f0, 0x2dd110, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 9", 0x2dd110, 0x2dd130, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 10", 0x2dd130, 0x2dd150, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 11", 0x2dd150, 0x2dd170, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 12", 0x2dd170, 0x2dd190, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 13", 0x2dd190, 0x2dd1b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Extra 14", 0x2dd1b0, 0x2dd1d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Lifebar Portrait", 0x2dd1d0, 0x2dd1f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary A - Win Portrait", 0x2ed5f0, 0x2ed6d0 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B - Main", 0x2dd1f0, 0x2dd210, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 1", 0x2dd210, 0x2dd230, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 2", 0x2dd230, 0x2dd250, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Max Mode", 0x2dd250, 0x2dd270, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 4", 0x2dd270, 0x2dd290, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 5", 0x2dd290, 0x2dd2b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Super Trail", 0x2dd2b0, 0x2dd2d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 7", 0x2dd2d0, 0x2dd2f0, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 8", 0x2dd2f0, 0x2dd310, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 9", 0x2dd310, 0x2dd330, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 10", 0x2dd330, 0x2dd350, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 11", 0x2dd350, 0x2dd370, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 12", 0x2dd370, 0x2dd390, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 13", 0x2dd390, 0x2dd3b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Extra 14", 0x2dd3b0, 0x2dd3d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Lifebar Portrait", 0x2dd3d0, 0x2dd3f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary B - Win Portrait", 0x2ed6f0, 0x2ed7d0 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C - Main", 0x2dd3f0, 0x2dd410, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 1", 0x2dd410, 0x2dd430, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 2", 0x2dd430, 0x2dd450, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Max Mode", 0x2dd450, 0x2dd470, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 4", 0x2dd470, 0x2dd490, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 5", 0x2dd490, 0x2dd4b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Super Trail", 0x2dd4b0, 0x2dd4d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 7", 0x2dd4d0, 0x2dd4f0, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 8", 0x2dd4f0, 0x2dd510, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 9", 0x2dd510, 0x2dd530, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 10", 0x2dd530, 0x2dd550, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 11", 0x2dd550, 0x2dd570, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 12", 0x2dd570, 0x2dd590, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 13", 0x2dd590, 0x2dd5b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Extra 14", 0x2dd5b0, 0x2dd5d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Lifebar Portrait", 0x2dd5d0, 0x2dd5f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary C - Win Portrait", 0x2ed7f0, 0x2ed8d0 },
};

const sGame_PaletteDataset KOF97_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D - Main", 0x2dd5f0, 0x2dd610, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 1", 0x2dd610, 0x2dd630, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 2", 0x2dd630, 0x2dd650, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Max Mode", 0x2dd650, 0x2dd670, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 4", 0x2dd670, 0x2dd690, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 5", 0x2dd690, 0x2dd6b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Super Trail", 0x2dd6b0, 0x2dd6d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 7", 0x2dd6d0, 0x2dd6f0, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 8", 0x2dd6f0, 0x2dd710, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 9", 0x2dd710, 0x2dd730, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 10", 0x2dd730, 0x2dd750, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 11", 0x2dd750, 0x2dd770, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 12", 0x2dd770, 0x2dd790, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 13", 0x2dd790, 0x2dd7b0, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Extra 14", 0x2dd7b0, 0x2dd7d0, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Lifebar Portrait", 0x2dd7d0, 0x2dd7f0, indexKOFSprites_98Lifebar, indexKOFSprites_98BlueMary },
    { L"Blue Mary D - Win Portrait", 0x2ed8f0, 0x2ed9d0 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_A[] =
{
    { L"Billy A - Main", 0x2dd7f0, 0x2dd810, indexKOFSprites_98Billy },
    { L"Billy A - Extra 1", 0x2dd810, 0x2dd830, indexKOFSprites_98Billy },
    { L"Billy A - Extra 2", 0x2dd830, 0x2dd850, indexKOFSprites_98Billy },
    { L"Billy A - Max Mode", 0x2dd850, 0x2dd870, indexKOFSprites_98Billy },
    { L"Billy A - Extra 4", 0x2dd870, 0x2dd890, indexKOFSprites_98Billy },
    { L"Billy A - Extra 5", 0x2dd890, 0x2dd8b0, indexKOFSprites_98Billy },
    { L"Billy A - Super Trail", 0x2dd8b0, 0x2dd8d0, indexKOFSprites_98Billy },
    { L"Billy A - Extra 7", 0x2dd8d0, 0x2dd8f0, indexKOFSprites_98Billy },
    { L"Billy A - Extra 8", 0x2dd8f0, 0x2dd910, indexKOFSprites_98Billy },
    { L"Billy A - Extra 9", 0x2dd910, 0x2dd930, indexKOFSprites_98Billy },
    { L"Billy A - Extra 10", 0x2dd930, 0x2dd950, indexKOFSprites_98Billy },
    { L"Billy A - Extra 11", 0x2dd950, 0x2dd970, indexKOFSprites_98Billy },
    { L"Billy A - Extra 12", 0x2dd970, 0x2dd990, indexKOFSprites_98Billy },
    { L"Billy A - Extra 13", 0x2dd990, 0x2dd9b0, indexKOFSprites_98Billy },
    { L"Billy A - Extra 14", 0x2dd9b0, 0x2dd9d0, indexKOFSprites_98Billy },
    { L"Billy A - Lifebar Portrait", 0x2dd9d0, 0x2dd9f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy A - Win Portrait", 0x2ed9f0, 0x2edab0 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_B[] =
{
    { L"Billy B - Main", 0x2dd9f0, 0x2dda10, indexKOFSprites_98Billy },
    { L"Billy B - Extra 1", 0x2dda10, 0x2dda30, indexKOFSprites_98Billy },
    { L"Billy B - Extra 2", 0x2dda30, 0x2dda50, indexKOFSprites_98Billy },
    { L"Billy B - Max Mode", 0x2dda50, 0x2dda70, indexKOFSprites_98Billy },
    { L"Billy B - Extra 4", 0x2dda70, 0x2dda90, indexKOFSprites_98Billy },
    { L"Billy B - Extra 5", 0x2dda90, 0x2ddab0, indexKOFSprites_98Billy },
    { L"Billy B - Super Trail", 0x2ddab0, 0x2ddad0, indexKOFSprites_98Billy },
    { L"Billy B - Extra 7", 0x2ddad0, 0x2ddaf0, indexKOFSprites_98Billy },
    { L"Billy B - Extra 8", 0x2ddaf0, 0x2ddb10, indexKOFSprites_98Billy },
    { L"Billy B - Extra 9", 0x2ddb10, 0x2ddb30, indexKOFSprites_98Billy },
    { L"Billy B - Extra 10", 0x2ddb30, 0x2ddb50, indexKOFSprites_98Billy },
    { L"Billy B - Extra 11", 0x2ddb50, 0x2ddb70, indexKOFSprites_98Billy },
    { L"Billy B - Extra 12", 0x2ddb70, 0x2ddb90, indexKOFSprites_98Billy },
    { L"Billy B - Extra 13", 0x2ddb90, 0x2ddbb0, indexKOFSprites_98Billy },
    { L"Billy B - Extra 14", 0x2ddbb0, 0x2ddbd0, indexKOFSprites_98Billy },
    { L"Billy B - Lifebar Portrait", 0x2ddbd0, 0x2ddbf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy B - Win Portrait", 0x2edaf0, 0x2edbb0 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_C[] =
{
    { L"Billy C - Main", 0x2ddbf0, 0x2ddc10, indexKOFSprites_98Billy },
    { L"Billy C - Extra 1", 0x2ddc10, 0x2ddc30, indexKOFSprites_98Billy },
    { L"Billy C - Extra 2", 0x2ddc30, 0x2ddc50, indexKOFSprites_98Billy },
    { L"Billy C - Max Mode", 0x2ddc50, 0x2ddc70, indexKOFSprites_98Billy },
    { L"Billy C - Extra 4", 0x2ddc70, 0x2ddc90, indexKOFSprites_98Billy },
    { L"Billy C - Extra 5", 0x2ddc90, 0x2ddcb0, indexKOFSprites_98Billy },
    { L"Billy C - Super Trail", 0x2ddcb0, 0x2ddcd0, indexKOFSprites_98Billy },
    { L"Billy C - Extra 7", 0x2ddcd0, 0x2ddcf0, indexKOFSprites_98Billy },
    { L"Billy C - Extra 8", 0x2ddcf0, 0x2ddd10, indexKOFSprites_98Billy },
    { L"Billy C - Extra 9", 0x2ddd10, 0x2ddd30, indexKOFSprites_98Billy },
    { L"Billy C - Extra 10", 0x2ddd30, 0x2ddd50, indexKOFSprites_98Billy },
    { L"Billy C - Extra 11", 0x2ddd50, 0x2ddd70, indexKOFSprites_98Billy },
    { L"Billy C - Extra 12", 0x2ddd70, 0x2ddd90, indexKOFSprites_98Billy },
    { L"Billy C - Extra 13", 0x2ddd90, 0x2dddb0, indexKOFSprites_98Billy },
    { L"Billy C - Extra 14", 0x2dddb0, 0x2dddd0, indexKOFSprites_98Billy },
    { L"Billy C - Lifebar Portrait", 0x2dddd0, 0x2dddf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy C - Win Portrait", 0x2edbf0, 0x2edcb0 },
};

const sGame_PaletteDataset KOF97_A_BILLY_PALETTES_D[] =
{
    { L"Billy D - Main", 0x2dddf0, 0x2dde10, indexKOFSprites_98Billy },
    { L"Billy D - Extra 1", 0x2dde10, 0x2dde30, indexKOFSprites_98Billy },
    { L"Billy D - Extra 2", 0x2dde30, 0x2dde50, indexKOFSprites_98Billy },
    { L"Billy D - Max Mode", 0x2dde50, 0x2dde70, indexKOFSprites_98Billy },
    { L"Billy D - Extra 4", 0x2dde70, 0x2dde90, indexKOFSprites_98Billy },
    { L"Billy D - Extra 5", 0x2dde90, 0x2ddeb0, indexKOFSprites_98Billy },
    { L"Billy D - Super Trail", 0x2ddeb0, 0x2dded0, indexKOFSprites_98Billy },
    { L"Billy D - Extra 7", 0x2dded0, 0x2ddef0, indexKOFSprites_98Billy },
    { L"Billy D - Extra 8", 0x2ddef0, 0x2ddf10, indexKOFSprites_98Billy },
    { L"Billy D - Extra 9", 0x2ddf10, 0x2ddf30, indexKOFSprites_98Billy },
    { L"Billy D - Extra 10", 0x2ddf30, 0x2ddf50, indexKOFSprites_98Billy },
    { L"Billy D - Extra 11", 0x2ddf50, 0x2ddf70, indexKOFSprites_98Billy },
    { L"Billy D - Extra 12", 0x2ddf70, 0x2ddf90, indexKOFSprites_98Billy },
    { L"Billy D - Extra 13", 0x2ddf90, 0x2ddfb0, indexKOFSprites_98Billy },
    { L"Billy D - Extra 14", 0x2ddfb0, 0x2ddfd0, indexKOFSprites_98Billy },
    { L"Billy D - Lifebar Portrait", 0x2ddfd0, 0x2ddff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Billy },
    { L"Billy D - Win Portrait", 0x2edcf0, 0x2eddb0 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_A[] =
{
    { L"Yashiro A - Main", 0x2ddff0, 0x2de010, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 1", 0x2de010, 0x2de030, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 2", 0x2de030, 0x2de050, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Max Mode", 0x2de050, 0x2de070, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 4", 0x2de070, 0x2de090, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 5", 0x2de090, 0x2de0b0, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Super Trail", 0x2de0b0, 0x2de0d0, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 7", 0x2de0d0, 0x2de0f0, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 8", 0x2de0f0, 0x2de110, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 9", 0x2de110, 0x2de130, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 10", 0x2de130, 0x2de150, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 11", 0x2de150, 0x2de170, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 12", 0x2de170, 0x2de190, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 13", 0x2de190, 0x2de1b0, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Extra 14", 0x2de1b0, 0x2de1d0, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Lifebar Portrait", 0x2de1d0, 0x2de1f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro A - Win Portrait", 0x2eddf0, 0x2edef0 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_B[] =
{
    { L"Yashiro B - Main", 0x2de1f0, 0x2de210, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 1", 0x2de210, 0x2de230, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 2", 0x2de230, 0x2de250, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Max Mode", 0x2de250, 0x2de270, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 4", 0x2de270, 0x2de290, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 5", 0x2de290, 0x2de2b0, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Super Trail", 0x2de2b0, 0x2de2d0, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 7", 0x2de2d0, 0x2de2f0, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 8", 0x2de2f0, 0x2de310, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 9", 0x2de310, 0x2de330, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 10", 0x2de330, 0x2de350, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 11", 0x2de350, 0x2de370, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 12", 0x2de370, 0x2de390, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 13", 0x2de390, 0x2de3b0, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Extra 14", 0x2de3b0, 0x2de3d0, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Lifebar Portrait", 0x2de3d0, 0x2de3f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro B - Win Portrait", 0x2edef0, 0x2edff0 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_C[] =
{
    { L"Yashiro C - Main", 0x2de3f0, 0x2de410, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 1", 0x2de410, 0x2de430, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 2", 0x2de430, 0x2de450, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Max Mode", 0x2de450, 0x2de470, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 4", 0x2de470, 0x2de490, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 5", 0x2de490, 0x2de4b0, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Super Trail", 0x2de4b0, 0x2de4d0, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 7", 0x2de4d0, 0x2de4f0, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 8", 0x2de4f0, 0x2de510, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 9", 0x2de510, 0x2de530, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 10", 0x2de530, 0x2de550, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 11", 0x2de550, 0x2de570, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 12", 0x2de570, 0x2de590, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 13", 0x2de590, 0x2de5b0, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Extra 14", 0x2de5b0, 0x2de5d0, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Lifebar Portrait", 0x2de5d0, 0x2de5f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro C - Win Portrait", 0x2edff0, 0x2ee0f0 },
};

const sGame_PaletteDataset KOF97_A_YASHIRO_PALETTES_D[] =
{
    { L"Yashiro D - Main", 0x2de5f0, 0x2de610, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 1", 0x2de610, 0x2de630, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 2", 0x2de630, 0x2de650, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Max Mode", 0x2de650, 0x2de670, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 4", 0x2de670, 0x2de690, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 5", 0x2de690, 0x2de6b0, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Super Trail", 0x2de6b0, 0x2de6d0, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 7", 0x2de6d0, 0x2de6f0, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 8", 0x2de6f0, 0x2de710, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 9", 0x2de710, 0x2de730, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 10", 0x2de730, 0x2de750, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 11", 0x2de750, 0x2de770, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 12", 0x2de770, 0x2de790, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 13", 0x2de790, 0x2de7b0, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Extra 14", 0x2de7b0, 0x2de7d0, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Lifebar Portrait", 0x2de7d0, 0x2de7f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Yashiro D - Win Portrait", 0x2ee0f0, 0x2ee1f0 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_A[] =
{
    { L"Shermie A - Main", 0x2de7f0, 0x2de810, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 1", 0x2de810, 0x2de830, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 2", 0x2de830, 0x2de850, indexKOFSprites_98Shermie },
    { L"Shermie A - Max Mode", 0x2de850, 0x2de870, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 4", 0x2de870, 0x2de890, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 5", 0x2de890, 0x2de8b0, indexKOFSprites_98Shermie },
    { L"Shermie A - Super Trail", 0x2de8b0, 0x2de8d0, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 7", 0x2de8d0, 0x2de8f0, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 8", 0x2de8f0, 0x2de910, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 9", 0x2de910, 0x2de930, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 10", 0x2de930, 0x2de950, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 11", 0x2de950, 0x2de970, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 12", 0x2de970, 0x2de990, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 13", 0x2de990, 0x2de9b0, indexKOFSprites_98Shermie },
    { L"Shermie A - Extra 14", 0x2de9b0, 0x2de9d0, indexKOFSprites_98Shermie },
    { L"Shermie A - Lifebar Portrait", 0x2de9d0, 0x2de9f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie A - Win Portrait", 0x2ee1f0, 0x2ee2f0 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_B[] =
{
    { L"Shermie B - Main", 0x2de9f0, 0x2dea10, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 1", 0x2dea10, 0x2dea30, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 2", 0x2dea30, 0x2dea50, indexKOFSprites_98Shermie },
    { L"Shermie B - Max Mode", 0x2dea50, 0x2dea70, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 4", 0x2dea70, 0x2dea90, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 5", 0x2dea90, 0x2deab0, indexKOFSprites_98Shermie },
    { L"Shermie B - Super Trail", 0x2deab0, 0x2dead0, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 7", 0x2dead0, 0x2deaf0, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 8", 0x2deaf0, 0x2deb10, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 9", 0x2deb10, 0x2deb30, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 10", 0x2deb30, 0x2deb50, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 11", 0x2deb50, 0x2deb70, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 12", 0x2deb70, 0x2deb90, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 13", 0x2deb90, 0x2debb0, indexKOFSprites_98Shermie },
    { L"Shermie B - Extra 14", 0x2debb0, 0x2debd0, indexKOFSprites_98Shermie },
    { L"Shermie B - Lifebar Portrait", 0x2debd0, 0x2debf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie B - Win Portrait", 0x2ee2f0, 0x2ee3f0 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_C[] =
{
    { L"Shermie C - Main", 0x2debf0, 0x2dec10, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 1", 0x2dec10, 0x2dec30, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 2", 0x2dec30, 0x2dec50, indexKOFSprites_98Shermie },
    { L"Shermie C - Max Mode", 0x2dec50, 0x2dec70, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 4", 0x2dec70, 0x2dec90, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 5", 0x2dec90, 0x2decb0, indexKOFSprites_98Shermie },
    { L"Shermie C - Super Trail", 0x2decb0, 0x2decd0, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 7", 0x2decd0, 0x2decf0, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 8", 0x2decf0, 0x2ded10, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 9", 0x2ded10, 0x2ded30, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 10", 0x2ded30, 0x2ded50, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 11", 0x2ded50, 0x2ded70, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 12", 0x2ded70, 0x2ded90, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 13", 0x2ded90, 0x2dedb0, indexKOFSprites_98Shermie },
    { L"Shermie C - Extra 14", 0x2dedb0, 0x2dedd0, indexKOFSprites_98Shermie },
    { L"Shermie C - Lifebar Portrait", 0x2dedd0, 0x2dedf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie C - Win Portrait", 0x2ee3f0, 0x2ee4f0 },
};

const sGame_PaletteDataset KOF97_A_SHERMIE_PALETTES_D[] =
{
    { L"Shermie D - Main", 0x2dedf0, 0x2dee10, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 1", 0x2dee10, 0x2dee30, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 2", 0x2dee30, 0x2dee50, indexKOFSprites_98Shermie },
    { L"Shermie D - Max Mode", 0x2dee50, 0x2dee70, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 4", 0x2dee70, 0x2dee90, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 5", 0x2dee90, 0x2deeb0, indexKOFSprites_98Shermie },
    { L"Shermie D - Super Trail", 0x2deeb0, 0x2deed0, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 7", 0x2deed0, 0x2deef0, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 8", 0x2deef0, 0x2def10, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 9", 0x2def10, 0x2def30, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 10", 0x2def30, 0x2def50, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 11", 0x2def50, 0x2def70, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 12", 0x2def70, 0x2def90, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 13", 0x2def90, 0x2defb0, indexKOFSprites_98Shermie },
    { L"Shermie D - Extra 14", 0x2defb0, 0x2defd0, indexKOFSprites_98Shermie },
    { L"Shermie D - Lifebar Portrait", 0x2defd0, 0x2deff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Shermie D - Win Portrait", 0x2ee4f0, 0x2ee5f0 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_A[] =
{
    { L"Chris A - Main", 0x2deff0, 0x2df010, indexKOFSprites_98Chris },
    { L"Chris A - Extra 1", 0x2df010, 0x2df030, indexKOFSprites_98Chris },
    { L"Chris A - Extra 2", 0x2df030, 0x2df050, indexKOFSprites_98Chris },
    { L"Chris A - Max Mode", 0x2df050, 0x2df070, indexKOFSprites_98Chris },
    { L"Chris A - Extra 4", 0x2df070, 0x2df090, indexKOFSprites_98Chris },
    { L"Chris A - Extra 5", 0x2df090, 0x2df0b0, indexKOFSprites_98Chris },
    { L"Chris A - Super Trail", 0x2df0b0, 0x2df0d0, indexKOFSprites_98Chris },
    { L"Chris A - Extra 7", 0x2df0d0, 0x2df0f0, indexKOFSprites_98Chris },
    { L"Chris A - Extra 8", 0x2df0f0, 0x2df110, indexKOFSprites_98Chris },
    { L"Chris A - Extra 9", 0x2df110, 0x2df130, indexKOFSprites_98Chris },
    { L"Chris A - Extra 10", 0x2df130, 0x2df150, indexKOFSprites_98Chris },
    { L"Chris A - Extra 11", 0x2df150, 0x2df170, indexKOFSprites_98Chris },
    { L"Chris A - Extra 12", 0x2df170, 0x2df190, indexKOFSprites_98Chris },
    { L"Chris A - Extra 13", 0x2df190, 0x2df1b0, indexKOFSprites_98Chris },
    { L"Chris A - Extra 14", 0x2df1b0, 0x2df1d0, indexKOFSprites_98Chris },
    { L"Chris A - Lifebar Portrait", 0x2df1d0, 0x2df1f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris A - Win Portrait", 0x2ee5f0, 0x2ee6f0 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_B[] =
{
    { L"Chris B - Main", 0x2df1f0, 0x2df210, indexKOFSprites_98Chris },
    { L"Chris B - Extra 1", 0x2df210, 0x2df230, indexKOFSprites_98Chris },
    { L"Chris B - Extra 2", 0x2df230, 0x2df250, indexKOFSprites_98Chris },
    { L"Chris B - Max Mode", 0x2df250, 0x2df270, indexKOFSprites_98Chris },
    { L"Chris B - Extra 4", 0x2df270, 0x2df290, indexKOFSprites_98Chris },
    { L"Chris B - Extra 5", 0x2df290, 0x2df2b0, indexKOFSprites_98Chris },
    { L"Chris B - Super Trail", 0x2df2b0, 0x2df2d0, indexKOFSprites_98Chris },
    { L"Chris B - Extra 7", 0x2df2d0, 0x2df2f0, indexKOFSprites_98Chris },
    { L"Chris B - Extra 8", 0x2df2f0, 0x2df310, indexKOFSprites_98Chris },
    { L"Chris B - Extra 9", 0x2df310, 0x2df330, indexKOFSprites_98Chris },
    { L"Chris B - Extra 10", 0x2df330, 0x2df350, indexKOFSprites_98Chris },
    { L"Chris B - Extra 11", 0x2df350, 0x2df370, indexKOFSprites_98Chris },
    { L"Chris B - Extra 12", 0x2df370, 0x2df390, indexKOFSprites_98Chris },
    { L"Chris B - Extra 13", 0x2df390, 0x2df3b0, indexKOFSprites_98Chris },
    { L"Chris B - Extra 14", 0x2df3b0, 0x2df3d0, indexKOFSprites_98Chris },
    { L"Chris B - Lifebar Portrait", 0x2df3d0, 0x2df3f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris B - Win Portrait", 0x2ee6f0, 0x2ee7f0 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_C[] =
{
    { L"Chris C - Main", 0x2df3f0, 0x2df410, indexKOFSprites_98Chris },
    { L"Chris C - Extra 1", 0x2df410, 0x2df430, indexKOFSprites_98Chris },
    { L"Chris C - Extra 2", 0x2df430, 0x2df450, indexKOFSprites_98Chris },
    { L"Chris C - Max Mode", 0x2df450, 0x2df470, indexKOFSprites_98Chris },
    { L"Chris C - Extra 4", 0x2df470, 0x2df490, indexKOFSprites_98Chris },
    { L"Chris C - Extra 5", 0x2df490, 0x2df4b0, indexKOFSprites_98Chris },
    { L"Chris C - Super Trail", 0x2df4b0, 0x2df4d0, indexKOFSprites_98Chris },
    { L"Chris C - Extra 7", 0x2df4d0, 0x2df4f0, indexKOFSprites_98Chris },
    { L"Chris C - Extra 8", 0x2df4f0, 0x2df510, indexKOFSprites_98Chris },
    { L"Chris C - Extra 9", 0x2df510, 0x2df530, indexKOFSprites_98Chris },
    { L"Chris C - Extra 10", 0x2df530, 0x2df550, indexKOFSprites_98Chris },
    { L"Chris C - Extra 11", 0x2df550, 0x2df570, indexKOFSprites_98Chris },
    { L"Chris C - Extra 12", 0x2df570, 0x2df590, indexKOFSprites_98Chris },
    { L"Chris C - Extra 13", 0x2df590, 0x2df5b0, indexKOFSprites_98Chris },
    { L"Chris C - Extra 14", 0x2df5b0, 0x2df5d0, indexKOFSprites_98Chris },
    { L"Chris C - Lifebar Portrait", 0x2df5d0, 0x2df5f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris C - Win Portrait", 0x2ee7f0, 0x2ee8f0 },
};

const sGame_PaletteDataset KOF97_A_CHRIS_PALETTES_D[] =
{
    { L"Chris D - Main", 0x2df5f0, 0x2df610, indexKOFSprites_98Chris },
    { L"Chris D - Extra 1", 0x2df610, 0x2df630, indexKOFSprites_98Chris },
    { L"Chris D - Extra 2", 0x2df630, 0x2df650, indexKOFSprites_98Chris },
    { L"Chris D - Max Mode", 0x2df650, 0x2df670, indexKOFSprites_98Chris },
    { L"Chris D - Extra 4", 0x2df670, 0x2df690, indexKOFSprites_98Chris },
    { L"Chris D - Extra 5", 0x2df690, 0x2df6b0, indexKOFSprites_98Chris },
    { L"Chris D - Super Trail", 0x2df6b0, 0x2df6d0, indexKOFSprites_98Chris },
    { L"Chris D - Extra 7", 0x2df6d0, 0x2df6f0, indexKOFSprites_98Chris },
    { L"Chris D - Extra 8", 0x2df6f0, 0x2df710, indexKOFSprites_98Chris },
    { L"Chris D - Extra 9", 0x2df710, 0x2df730, indexKOFSprites_98Chris },
    { L"Chris D - Extra 10", 0x2df730, 0x2df750, indexKOFSprites_98Chris },
    { L"Chris D - Extra 11", 0x2df750, 0x2df770, indexKOFSprites_98Chris },
    { L"Chris D - Extra 12", 0x2df770, 0x2df790, indexKOFSprites_98Chris },
    { L"Chris D - Extra 13", 0x2df790, 0x2df7b0, indexKOFSprites_98Chris },
    { L"Chris D - Extra 14", 0x2df7b0, 0x2df7d0, indexKOFSprites_98Chris },
    { L"Chris D - Lifebar Portrait", 0x2df7d0, 0x2df7f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Chris D - Win Portrait", 0x2ee8f0, 0x2ee9f0 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_A[] =
{
    { L"Iori A - Main", 0x2df7f0, 0x2df810, indexKOFSprites_98Iori },
    { L"Iori A - Extra 1", 0x2df810, 0x2df830, indexKOFSprites_98Iori },
    { L"Iori A - Extra 2", 0x2df830, 0x2df850, indexKOFSprites_98Iori },
    { L"Iori A - Max Mode", 0x2df850, 0x2df870, indexKOFSprites_98Iori },
    { L"Iori A - Extra 4", 0x2df870, 0x2df890, indexKOFSprites_98Iori },
    { L"Iori A - Extra 5", 0x2df890, 0x2df8b0, indexKOFSprites_98Iori },
    { L"Iori A - Super Trail", 0x2df8b0, 0x2df8d0, indexKOFSprites_98Iori },
    { L"Iori A - Extra 7", 0x2df8d0, 0x2df8f0, indexKOFSprites_98Iori },
    { L"Iori A - Extra 8", 0x2df8f0, 0x2df910, indexKOFSprites_98Iori },
    { L"Iori A - Extra 9", 0x2df910, 0x2df930, indexKOFSprites_98Iori },
    { L"Iori A - Extra 10", 0x2df930, 0x2df950, indexKOFSprites_98Iori },
    { L"Iori A - Extra 11", 0x2df950, 0x2df970, indexKOFSprites_98Iori },
    { L"Iori A - Extra 12", 0x2df970, 0x2df990, indexKOFSprites_98Iori },
    { L"Iori A - Extra 13", 0x2df990, 0x2df9b0, indexKOFSprites_98Iori },
    { L"Iori A - Extra 14", 0x2df9b0, 0x2df9d0, indexKOFSprites_98Iori },
    { L"Iori A - Lifebar Portrait", 0x2df9d0, 0x2df9f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori A - Win Portrait", 0x2ee9f0, 0x2eeaf0 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_B[] =
{
    { L"Iori B - Main", 0x2df9f0, 0x2dfa10, indexKOFSprites_98Iori },
    { L"Iori B - Extra 1", 0x2dfa10, 0x2dfa30, indexKOFSprites_98Iori },
    { L"Iori B - Extra 2", 0x2dfa30, 0x2dfa50, indexKOFSprites_98Iori },
    { L"Iori B - Max Mode", 0x2dfa50, 0x2dfa70, indexKOFSprites_98Iori },
    { L"Iori B - Extra 4", 0x2dfa70, 0x2dfa90, indexKOFSprites_98Iori },
    { L"Iori B - Extra 5", 0x2dfa90, 0x2dfab0, indexKOFSprites_98Iori },
    { L"Iori B - Super Trail", 0x2dfab0, 0x2dfad0, indexKOFSprites_98Iori },
    { L"Iori B - Extra 7", 0x2dfad0, 0x2dfaf0, indexKOFSprites_98Iori },
    { L"Iori B - Extra 8", 0x2dfaf0, 0x2dfb10, indexKOFSprites_98Iori },
    { L"Iori B - Extra 9", 0x2dfb10, 0x2dfb30, indexKOFSprites_98Iori },
    { L"Iori B - Extra 10", 0x2dfb30, 0x2dfb50, indexKOFSprites_98Iori },
    { L"Iori B - Extra 11", 0x2dfb50, 0x2dfb70, indexKOFSprites_98Iori },
    { L"Iori B - Extra 12", 0x2dfb70, 0x2dfb90, indexKOFSprites_98Iori },
    { L"Iori B - Extra 13", 0x2dfb90, 0x2dfbb0, indexKOFSprites_98Iori },
    { L"Iori B - Extra 14", 0x2dfbb0, 0x2dfbd0, indexKOFSprites_98Iori },
    { L"Iori B - Lifebar Portrait", 0x2dfbd0, 0x2dfbf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori B - Win Portrait", 0x2eeaf0, 0x2eebf0 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_C[] =
{
    { L"Iori C - Main", 0x2dfbf0, 0x2dfc10, indexKOFSprites_98Iori },
    { L"Iori C - Extra 1", 0x2dfc10, 0x2dfc30, indexKOFSprites_98Iori },
    { L"Iori C - Extra 2", 0x2dfc30, 0x2dfc50, indexKOFSprites_98Iori },
    { L"Iori C - Max Mode", 0x2dfc50, 0x2dfc70, indexKOFSprites_98Iori },
    { L"Iori C - Extra 4", 0x2dfc70, 0x2dfc90, indexKOFSprites_98Iori },
    { L"Iori C - Extra 5", 0x2dfc90, 0x2dfcb0, indexKOFSprites_98Iori },
    { L"Iori C - Super Trail", 0x2dfcb0, 0x2dfcd0, indexKOFSprites_98Iori },
    { L"Iori C - Extra 7", 0x2dfcd0, 0x2dfcf0, indexKOFSprites_98Iori },
    { L"Iori C - Extra 8", 0x2dfcf0, 0x2dfd10, indexKOFSprites_98Iori },
    { L"Iori C - Extra 9", 0x2dfd10, 0x2dfd30, indexKOFSprites_98Iori },
    { L"Iori C - Extra 10", 0x2dfd30, 0x2dfd50, indexKOFSprites_98Iori },
    { L"Iori C - Extra 11", 0x2dfd50, 0x2dfd70, indexKOFSprites_98Iori },
    { L"Iori C - Extra 12", 0x2dfd70, 0x2dfd90, indexKOFSprites_98Iori },
    { L"Iori C - Extra 13", 0x2dfd90, 0x2dfdb0, indexKOFSprites_98Iori },
    { L"Iori C - Extra 14", 0x2dfdb0, 0x2dfdd0, indexKOFSprites_98Iori },
    { L"Iori C - Lifebar Portrait", 0x2dfdd0, 0x2dfdf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori C - Win Portrait", 0x2eebf0, 0x2eecf0 },
};

const sGame_PaletteDataset KOF97_A_IORI_PALETTES_D[] =
{
    { L"Iori D - Main", 0x2dfdf0, 0x2dfe10, indexKOFSprites_98Iori },
    { L"Iori D - Extra 1", 0x2dfe10, 0x2dfe30, indexKOFSprites_98Iori },
    { L"Iori D - Extra 2", 0x2dfe30, 0x2dfe50, indexKOFSprites_98Iori },
    { L"Iori D - Max Mode", 0x2dfe50, 0x2dfe70, indexKOFSprites_98Iori },
    { L"Iori D - Extra 4", 0x2dfe70, 0x2dfe90, indexKOFSprites_98Iori },
    { L"Iori D - Extra 5", 0x2dfe90, 0x2dfeb0, indexKOFSprites_98Iori },
    { L"Iori D - Super Trail", 0x2dfeb0, 0x2dfed0, indexKOFSprites_98Iori },
    { L"Iori D - Extra 7", 0x2dfed0, 0x2dfef0, indexKOFSprites_98Iori },
    { L"Iori D - Extra 8", 0x2dfef0, 0x2dff10, indexKOFSprites_98Iori },
    { L"Iori D - Extra 9", 0x2dff10, 0x2dff30, indexKOFSprites_98Iori },
    { L"Iori D - Extra 10", 0x2dff30, 0x2dff50, indexKOFSprites_98Iori },
    { L"Iori D - Extra 11", 0x2dff50, 0x2dff70, indexKOFSprites_98Iori },
    { L"Iori D - Extra 12", 0x2dff70, 0x2dff90, indexKOFSprites_98Iori },
    { L"Iori D - Extra 13", 0x2dff90, 0x2dffb0, indexKOFSprites_98Iori },
    { L"Iori D - Extra 14", 0x2dffb0, 0x2dffd0, indexKOFSprites_98Iori },
    { L"Iori D - Lifebar Portrait", 0x2dffd0, 0x2dfff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Iori D - Win Portrait", 0x2eecf0, 0x2eedf0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_A[] =
{
    { L"Orochi Iori A - Main", 0x2dfff0, 0x2e0010, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 1", 0x2e0010, 0x2e0030 },
    { L"Orochi Iori A - Extra 2", 0x2e0030, 0x2e0050 },
    { L"Orochi Iori A - Max Mode", 0x2e0050, 0x2e0070, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 4", 0x2e0070, 0x2e0090 },
    { L"Orochi Iori A - Extra 5", 0x2e0090, 0x2e00b0 },
    { L"Orochi Iori A - Super Trail", 0x2e00b0, 0x2e00d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 7", 0x2e00d0, 0x2e00f0 },
    { L"Orochi Iori A - Extra 8", 0x2e00f0, 0x2e0110 },
    { L"Orochi Iori A - Extra 9", 0x2e0110, 0x2e0130, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori A - Extra 10", 0x2e0130, 0x2e0150 },
    { L"Orochi Iori A - Extra 11", 0x2e0150, 0x2e0170 },
    { L"Orochi Iori A - Extra 12", 0x2e0170, 0x2e0190 },
    { L"Orochi Iori A - Extra 13", 0x2e0190, 0x2e01b0 },
    { L"Orochi Iori A - Extra 14", 0x2e01b0, 0x2e01d0 },
    { L"Orochi Iori A - Lifebar Portrait", 0x2e01d0, 0x2e01f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Orochi Iori A - Win Portrait", 0x2eedf0, 0x2eeeb0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_B[] =
{
    { L"Orochi Iori B - Main", 0x2e01f0, 0x2e0210, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 1", 0x2e0210, 0x2e0230 },
    { L"Orochi Iori B - Extra 2", 0x2e0230, 0x2e0250 },
    { L"Orochi Iori B - Max Mode", 0x2e0250, 0x2e0270, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 4", 0x2e0270, 0x2e0290 },
    { L"Orochi Iori B - Extra 5", 0x2e0290, 0x2e02b0 },
    { L"Orochi Iori B - Super Trail", 0x2e02b0, 0x2e02d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 7", 0x2e02d0, 0x2e02f0 },
    { L"Orochi Iori B - Extra 8", 0x2e02f0, 0x2e0310 },
    { L"Orochi Iori B - Extra 9", 0x2e0310, 0x2e0330, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori B - Extra 10", 0x2e0330, 0x2e0350 },
    { L"Orochi Iori B - Extra 11", 0x2e0350, 0x2e0370 },
    { L"Orochi Iori B - Extra 12", 0x2e0370, 0x2e0390 },
    { L"Orochi Iori B - Extra 13", 0x2e0390, 0x2e03b0 },
    { L"Orochi Iori B - Extra 14", 0x2e03b0, 0x2e03d0 },
    { L"Orochi Iori B - Lifebar Portrait", 0x2e03d0, 0x2e03f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Orochi Iori B - Win Portrait", 0x2eeef0, 0x2eefb0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_C[] =
{
    { L"Orochi Iori C - Main", 0x2e03f0, 0x2e0410, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 1", 0x2e0410, 0x2e0430 },
    { L"Orochi Iori C - Extra 2", 0x2e0430, 0x2e0450 },
    { L"Orochi Iori C - Max Mode", 0x2e0450, 0x2e0470, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 4", 0x2e0470, 0x2e0490 },
    { L"Orochi Iori C - Extra 5", 0x2e0490, 0x2e04b0 },
    { L"Orochi Iori C - Super Trail", 0x2e04b0, 0x2e04d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 7", 0x2e04d0, 0x2e04f0 },
    { L"Orochi Iori C - Extra 8", 0x2e04f0, 0x2e0510 },
    { L"Orochi Iori C - Extra 9", 0x2e0510, 0x2e0530, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori C - Extra 10", 0x2e0530, 0x2e0550 },
    { L"Orochi Iori C - Extra 11", 0x2e0550, 0x2e0570 },
    { L"Orochi Iori C - Extra 12", 0x2e0570, 0x2e0590 },
    { L"Orochi Iori C - Extra 13", 0x2e0590, 0x2e05b0 },
    { L"Orochi Iori C - Extra 14", 0x2e05b0, 0x2e05d0 },
    { L"Orochi Iori C - Lifebar Portrait", 0x2e05d0, 0x2e05f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Orochi Iori C - Win Portrait", 0x2eeff0, 0x2ef0b0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIIORI_PALETTES_D[] =
{
    { L"Orochi Iori D - Main", 0x2e05f0, 0x2e0610, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 1", 0x2e0610, 0x2e0630 },
    { L"Orochi Iori D - Extra 2", 0x2e0630, 0x2e0650 },
    { L"Orochi Iori D - Max Mode", 0x2e0650, 0x2e0670, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 4", 0x2e0670, 0x2e0690 },
    { L"Orochi Iori D - Extra 5", 0x2e0690, 0x2e06b0 },
    { L"Orochi Iori D - Super Trail", 0x2e06b0, 0x2e06d0, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 7", 0x2e06d0, 0x2e06f0 },
    { L"Orochi Iori D - Extra 8", 0x2e06f0, 0x2e0710 },
    { L"Orochi Iori D - Extra 9", 0x2e0710, 0x2e0730, indexKOF97Sprites_IoriOrochi },
    { L"Orochi Iori D - Extra 10", 0x2e0730, 0x2e0750 },
    { L"Orochi Iori D - Extra 11", 0x2e0750, 0x2e0770 },
    { L"Orochi Iori D - Extra 12", 0x2e0770, 0x2e0790 },
    { L"Orochi Iori D - Extra 13", 0x2e0790, 0x2e07b0 },
    { L"Orochi Iori D - Extra 14", 0x2e07b0, 0x2e07d0 },
    { L"Orochi Iori D - Lifebar Portrait", 0x2e07d0, 0x2e07f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Iori },
    { L"Orochi Iori D - Win Portrait", 0x2ef0f0, 0x2ef1b0 },
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
    { L"Orochi Leona A - Extra 9", 0x2e0910, 0x2e0930, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 10", 0x2e0930, 0x2e0950, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 11", 0x2e0950, 0x2e0970, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 12", 0x2e0970, 0x2e0990 },
    { L"Orochi Leona A - Extra 13", 0x2e0990, 0x2e09b0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Extra 14", 0x2e09b0, 0x2e09d0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona A - Lifebar Portrait", 0x2e09d0, 0x2e09f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Orochi Leona A - Win Portrait", 0x2ef1f0, 0x2ef2b0 },
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
    { L"Orochi Leona B - Extra 9", 0x2e0b10, 0x2e0b30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 10", 0x2e0b30, 0x2e0b50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 11", 0x2e0b50, 0x2e0b70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 12", 0x2e0b70, 0x2e0b90 },
    { L"Orochi Leona B - Extra 13", 0x2e0b90, 0x2e0bb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Extra 14", 0x2e0bb0, 0x2e0bd0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona B - Lifebar Portrait", 0x2e0bd0, 0x2e0bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Orochi Leona B - Win Portrait", 0x2ef2f0, 0x2ef3b0 },
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
    { L"Orochi Leona C - Extra 9", 0x2e0d10, 0x2e0d30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 10", 0x2e0d30, 0x2e0d50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 11", 0x2e0d50, 0x2e0d70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 12", 0x2e0d70, 0x2e0d90 },
    { L"Orochi Leona C - Extra 13", 0x2e0d90, 0x2e0db0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Extra 14", 0x2e0db0, 0x2e0dd0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona C - Lifebar Portrait", 0x2e0dd0, 0x2e0df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Orochi Leona C - Win Portrait", 0x2ef3f0, 0x2ef4b0 },
};

const sGame_PaletteDataset KOF97_A_OROCHILEONA_PALETTES_D[] =
{
    { L"Orochi Leona D - Main", 0x2e0df0, 0x2e0e10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 1", 0x2e0e10, 0x2e0e30 },
    { L"Orochi Leona D - Extra 2", 0x2e0e30, 0x2e0e50 },
    { L"Orochi Leona D - Max Mode", 0x2e0e50, 0x2e0e70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 4", 0x2e0e70, 0x2e0e90, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 5", 0x2e0e90, 0x2e0eb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Super Trail", 0x2e0eb0, 0x2e0ed0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 7", 0x2e0ed0, 0x2e0ef0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 8", 0x2e0ef0, 0x2e0f10, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 9", 0x2e0f10, 0x2e0f30, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 10", 0x2e0f30, 0x2e0f50, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 11", 0x2e0f50, 0x2e0f70, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 12", 0x2e0f70, 0x2e0f90 },
    { L"Orochi Leona D - Extra 13", 0x2e0f90, 0x2e0fb0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Extra 14", 0x2e0fb0, 0x2e0fd0, indexKOF97Sprites_LeonaOrochi },
    { L"Orochi Leona D - Lifebar Portrait", 0x2e0fd0, 0x2e0ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Leona },
    { L"Orochi Leona D - Win Portrait", 0x2ef4f0, 0x2ef5b0 },
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
    { L"Orochi A - Extra 9", 0x2e1110, 0x2e1130, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 10", 0x2e1130, 0x2e1150, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 11", 0x2e1150, 0x2e1170, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 12", 0x2e1170, 0x2e1190, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 13", 0x2e1190, 0x2e11b0, indexKOF97Sprites_Orochi },
    { L"Orochi A - Extra 14", 0x2e11b0, 0x2e11d0, indexKOF97Sprites_Orochi },
    { L"Orochi A - Lifebar Portrait", 0x2e11d0, 0x2e11f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi A - Win Portrait", 0x2ef5f0, 0x2ef650 },
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
    { L"Orochi B - Extra 9", 0x2e1310, 0x2e1330, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 10", 0x2e1330, 0x2e1350, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 11", 0x2e1350, 0x2e1370, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 12", 0x2e1370, 0x2e1390, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 13", 0x2e1390, 0x2e13b0, indexKOF97Sprites_Orochi },
    { L"Orochi B - Extra 14", 0x2e13b0, 0x2e13d0, indexKOF97Sprites_Orochi },
    { L"Orochi B - Lifebar Portrait", 0x2e13d0, 0x2e13f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi B - Win Portrait", 0x2ef6f0, 0x2ef750 },
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
    { L"Orochi C - Extra 9", 0x2e1510, 0x2e1530, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 10", 0x2e1530, 0x2e1550, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 11", 0x2e1550, 0x2e1570, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 12", 0x2e1570, 0x2e1590, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 13", 0x2e1590, 0x2e15b0, indexKOF97Sprites_Orochi },
    { L"Orochi C - Extra 14", 0x2e15b0, 0x2e15d0, indexKOF97Sprites_Orochi },
    { L"Orochi C - Lifebar Portrait", 0x2e15d0, 0x2e15f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi C - Win Portrait", 0x2ef7f0, 0x2ef850 },
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
    { L"Orochi D - Extra 9", 0x2e1710, 0x2e1730, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 10", 0x2e1730, 0x2e1750, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 11", 0x2e1750, 0x2e1770, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 12", 0x2e1770, 0x2e1790, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 13", 0x2e1790, 0x2e17b0, indexKOF97Sprites_Orochi },
    { L"Orochi D - Extra 14", 0x2e17b0, 0x2e17d0, indexKOF97Sprites_Orochi },
    { L"Orochi D - Lifebar Portrait", 0x2e17d0, 0x2e17f0, indexKOFSprites_98Lifebar, indexKOF97Sprites_Orochi },
    { L"Orochi D - Win Portrait", 0x2ef8f0, 0x2ef950 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_A[] =
{
    { L"Shingo A - Main", 0x2e17f0, 0x2e1810, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 1", 0x2e1810, 0x2e1830, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 2", 0x2e1830, 0x2e1850, indexKOFSprites_98Shingo },
    { L"Shingo A - Max Mode", 0x2e1850, 0x2e1870, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 4", 0x2e1870, 0x2e1890, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 5", 0x2e1890, 0x2e18b0, indexKOFSprites_98Shingo },
    { L"Shingo A - Super Trail", 0x2e18b0, 0x2e18d0, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 7", 0x2e18d0, 0x2e18f0, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 8", 0x2e18f0, 0x2e1910, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 9", 0x2e1910, 0x2e1930, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 10", 0x2e1930, 0x2e1950, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 11", 0x2e1950, 0x2e1970, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 12", 0x2e1970, 0x2e1990, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 13", 0x2e1990, 0x2e19b0, indexKOFSprites_98Shingo },
    { L"Shingo A - Extra 14", 0x2e19b0, 0x2e19d0, indexKOFSprites_98Shingo },
    { L"Shingo A - Lifebar Portrait", 0x2e19d0, 0x2e19f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo A - Win Portrait", 0x2ef9f0, 0x2efa90 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_B[] =
{
    { L"Shingo B - Main", 0x2e19f0, 0x2e1a10, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 1", 0x2e1a10, 0x2e1a30, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 2", 0x2e1a30, 0x2e1a50, indexKOFSprites_98Shingo },
    { L"Shingo B - Max Mode", 0x2e1a50, 0x2e1a70, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 4", 0x2e1a70, 0x2e1a90, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 5", 0x2e1a90, 0x2e1ab0, indexKOFSprites_98Shingo },
    { L"Shingo B - Super Trail", 0x2e1ab0, 0x2e1ad0, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 7", 0x2e1ad0, 0x2e1af0, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 8", 0x2e1af0, 0x2e1b10, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 9", 0x2e1b10, 0x2e1b30, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 10", 0x2e1b30, 0x2e1b50, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 11", 0x2e1b50, 0x2e1b70, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 12", 0x2e1b70, 0x2e1b90, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 13", 0x2e1b90, 0x2e1bb0, indexKOFSprites_98Shingo },
    { L"Shingo B - Extra 14", 0x2e1bb0, 0x2e1bd0, indexKOFSprites_98Shingo },
    { L"Shingo B - Lifebar Portrait", 0x2e1bd0, 0x2e1bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo B - Win Portrait", 0x2efaf0, 0x2efb90 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_C[] =
{
    { L"Shingo C - Main", 0x2e1bf0, 0x2e1c10, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 1", 0x2e1c10, 0x2e1c30, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 2", 0x2e1c30, 0x2e1c50, indexKOFSprites_98Shingo },
    { L"Shingo C - Max Mode", 0x2e1c50, 0x2e1c70, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 4", 0x2e1c70, 0x2e1c90, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 5", 0x2e1c90, 0x2e1cb0, indexKOFSprites_98Shingo },
    { L"Shingo C - Super Trail", 0x2e1cb0, 0x2e1cd0, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 7", 0x2e1cd0, 0x2e1cf0, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 8", 0x2e1cf0, 0x2e1d10, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 9", 0x2e1d10, 0x2e1d30, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 10", 0x2e1d30, 0x2e1d50, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 11", 0x2e1d50, 0x2e1d70, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 12", 0x2e1d70, 0x2e1d90, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 13", 0x2e1d90, 0x2e1db0, indexKOFSprites_98Shingo },
    { L"Shingo C - Extra 14", 0x2e1db0, 0x2e1dd0, indexKOFSprites_98Shingo },
    { L"Shingo C - Lifebar Portrait", 0x2e1dd0, 0x2e1df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo C - Win Portrait", 0x2efbf0, 0x2efc90 },
};

const sGame_PaletteDataset KOF97_A_SHINGO_PALETTES_D[] =
{
    { L"Shingo D - Main", 0x2e1df0, 0x2e1e10, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 1", 0x2e1e10, 0x2e1e30, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 2", 0x2e1e30, 0x2e1e50, indexKOFSprites_98Shingo },
    { L"Shingo D - Max Mode", 0x2e1e50, 0x2e1e70, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 4", 0x2e1e70, 0x2e1e90, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 5", 0x2e1e90, 0x2e1eb0, indexKOFSprites_98Shingo },
    { L"Shingo D - Super Trail", 0x2e1eb0, 0x2e1ed0, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 7", 0x2e1ed0, 0x2e1ef0, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 8", 0x2e1ef0, 0x2e1f10, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 9", 0x2e1f10, 0x2e1f30, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 10", 0x2e1f30, 0x2e1f50, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 11", 0x2e1f50, 0x2e1f70, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 12", 0x2e1f70, 0x2e1f90, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 13", 0x2e1f90, 0x2e1fb0, indexKOFSprites_98Shingo },
    { L"Shingo D - Extra 14", 0x2e1fb0, 0x2e1fd0, indexKOFSprites_98Shingo },
    { L"Shingo D - Lifebar Portrait", 0x2e1fd0, 0x2e1ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shingo },
    { L"Shingo D - Win Portrait", 0x2efcf0, 0x2efd90 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_A[] =
{
    { L"Orochi Yashiro A - Main", 0x2e1ff0, 0x2e2010, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 1", 0x2e2010, 0x2e2030, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 2", 0x2e2030, 0x2e2050, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Max Mode", 0x2e2050, 0x2e2070, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 4", 0x2e2070, 0x2e2090, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 5", 0x2e2090, 0x2e20b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Super Trail", 0x2e20b0, 0x2e20d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 7", 0x2e20d0, 0x2e20f0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 8", 0x2e20f0, 0x2e2110, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 9", 0x2e2110, 0x2e2130, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 10", 0x2e2130, 0x2e2150, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 11", 0x2e2150, 0x2e2170, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 12", 0x2e2170, 0x2e2190, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 13", 0x2e2190, 0x2e21b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Extra 14", 0x2e21b0, 0x2e21d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Lifebar Portrait", 0x2e21d0, 0x2e21f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro A - Win Portrait", 0x2efdf0, 0x2efef0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_B[] =
{
    { L"Orochi Yashiro B - Main", 0x2e21f0, 0x2e2210, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 1", 0x2e2210, 0x2e2230, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 2", 0x2e2230, 0x2e2250, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Max Mode", 0x2e2250, 0x2e2270, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 4", 0x2e2270, 0x2e2290, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 5", 0x2e2290, 0x2e22b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Super Trail", 0x2e22b0, 0x2e22d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 7", 0x2e22d0, 0x2e22f0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 8", 0x2e22f0, 0x2e2310, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 9", 0x2e2310, 0x2e2330, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 10", 0x2e2330, 0x2e2350, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 11", 0x2e2350, 0x2e2370, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 12", 0x2e2370, 0x2e2390, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 13", 0x2e2390, 0x2e23b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Extra 14", 0x2e23b0, 0x2e23d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Lifebar Portrait", 0x2e23d0, 0x2e23f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro B - Win Portrait", 0x2efef0, 0x2efff0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_C[] =
{
    { L"Orochi Yashiro C - Main", 0x2e23f0, 0x2e2410, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 1", 0x2e2410, 0x2e2430, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 2", 0x2e2430, 0x2e2450, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Max Mode", 0x2e2450, 0x2e2470, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 4", 0x2e2470, 0x2e2490, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 5", 0x2e2490, 0x2e24b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Super Trail", 0x2e24b0, 0x2e24d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 7", 0x2e24d0, 0x2e24f0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 8", 0x2e24f0, 0x2e2510, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 9", 0x2e2510, 0x2e2530, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 10", 0x2e2530, 0x2e2550, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 11", 0x2e2550, 0x2e2570, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 12", 0x2e2570, 0x2e2590, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 13", 0x2e2590, 0x2e25b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Extra 14", 0x2e25b0, 0x2e25d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Lifebar Portrait", 0x2e25d0, 0x2e25f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro C - Win Portrait", 0x2efff0, 0x2f00f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHIYASHIRO_PALETTES_D[] =
{
    { L"Orochi Yashiro D - Main", 0x2e25f0, 0x2e2610, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 1", 0x2e2610, 0x2e2630, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 2", 0x2e2630, 0x2e2650, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Max Mode", 0x2e2650, 0x2e2670, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 4", 0x2e2670, 0x2e2690, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 5", 0x2e2690, 0x2e26b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Super Trail", 0x2e26b0, 0x2e26d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 7", 0x2e26d0, 0x2e26f0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 8", 0x2e26f0, 0x2e2710, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 9", 0x2e2710, 0x2e2730, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 10", 0x2e2730, 0x2e2750, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 11", 0x2e2750, 0x2e2770, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 12", 0x2e2770, 0x2e2790, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 13", 0x2e2790, 0x2e27b0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Extra 14", 0x2e27b0, 0x2e27d0, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Lifebar Portrait", 0x2e27d0, 0x2e27f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Yashiro },
    { L"Orochi Yashiro D - Win Portrait", 0x2f00f0, 0x2f01f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_A[] =
{
    { L"Orochi Shermie A - Main", 0x2e27f0, 0x2e2810, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 1", 0x2e2810, 0x2e2830, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 2", 0x2e2830, 0x2e2850, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Max Mode", 0x2e2850, 0x2e2870, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 4", 0x2e2870, 0x2e2890, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 5", 0x2e2890, 0x2e28b0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Super Trail", 0x2e28b0, 0x2e28d0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 7", 0x2e28d0, 0x2e28f0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 8", 0x2e28f0, 0x2e2910, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 9", 0x2e2910, 0x2e2930, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 10", 0x2e2930, 0x2e2950, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 11", 0x2e2950, 0x2e2970, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 12", 0x2e2970, 0x2e2990, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 13", 0x2e2990, 0x2e29b0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Extra 14", 0x2e29b0, 0x2e29d0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Lifebar Portrait", 0x2e29d0, 0x2e29f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Orochi Shermie A - Win Portrait", 0x2f01f0, 0x2f02f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_B[] =
{
    { L"Orochi Shermie B - Main", 0x2e29f0, 0x2e2a10, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 1", 0x2e2a10, 0x2e2a30, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 2", 0x2e2a30, 0x2e2a50, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Max Mode", 0x2e2a50, 0x2e2a70, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 4", 0x2e2a70, 0x2e2a90, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 5", 0x2e2a90, 0x2e2ab0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Super Trail", 0x2e2ab0, 0x2e2ad0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 7", 0x2e2ad0, 0x2e2af0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 8", 0x2e2af0, 0x2e2b10, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 9", 0x2e2b10, 0x2e2b30, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 10", 0x2e2b30, 0x2e2b50, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 11", 0x2e2b50, 0x2e2b70, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 12", 0x2e2b70, 0x2e2b90, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 13", 0x2e2b90, 0x2e2bb0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Extra 14", 0x2e2bb0, 0x2e2bd0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Lifebar Portrait", 0x2e2bd0, 0x2e2bf0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Orochi Shermie B - Win Portrait", 0x2f02f0, 0x2f03f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_C[] =
{
    { L"Orochi Shermie C - Main", 0x2e2bf0, 0x2e2c10, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 1", 0x2e2c10, 0x2e2c30, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 2", 0x2e2c30, 0x2e2c50, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Max Mode", 0x2e2c50, 0x2e2c70, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 4", 0x2e2c70, 0x2e2c90, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 5", 0x2e2c90, 0x2e2cb0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Super Trail", 0x2e2cb0, 0x2e2cd0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 7", 0x2e2cd0, 0x2e2cf0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 8", 0x2e2cf0, 0x2e2d10, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 9", 0x2e2d10, 0x2e2d30, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 10", 0x2e2d30, 0x2e2d50, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 11", 0x2e2d50, 0x2e2d70, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 12", 0x2e2d70, 0x2e2d90, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 13", 0x2e2d90, 0x2e2db0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Extra 14", 0x2e2db0, 0x2e2dd0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Lifebar Portrait", 0x2e2dd0, 0x2e2df0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Orochi Shermie C - Win Portrait", 0x2f03f0, 0x2f04f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHISHERMIE_PALETTES_D[] =
{
    { L"Orochi Shermie D - Main", 0x2e2df0, 0x2e2e10, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 1", 0x2e2e10, 0x2e2e30, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 2", 0x2e2e30, 0x2e2e50, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Max Mode", 0x2e2e50, 0x2e2e70, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 4", 0x2e2e70, 0x2e2e90, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 5", 0x2e2e90, 0x2e2eb0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Super Trail", 0x2e2eb0, 0x2e2ed0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 7", 0x2e2ed0, 0x2e2ef0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 8", 0x2e2ef0, 0x2e2f10, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 9", 0x2e2f10, 0x2e2f30, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 10", 0x2e2f30, 0x2e2f50, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 11", 0x2e2f50, 0x2e2f70, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 12", 0x2e2f70, 0x2e2f90, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 13", 0x2e2f90, 0x2e2fb0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Extra 14", 0x2e2fb0, 0x2e2fd0, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Lifebar Portrait", 0x2e2fd0, 0x2e2ff0, indexKOFSprites_98Lifebar, indexKOFSprites_98Shermie },
    { L"Orochi Shermie D - Win Portrait", 0x2f04f0, 0x2f05f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_A[] =
{
    { L"Orochi Chris A - Main", 0x2e2ff0, 0x2e3010, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 1", 0x2e3010, 0x2e3030, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 2", 0x2e3030, 0x2e3050, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Max Mode", 0x2e3050, 0x2e3070, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 4", 0x2e3070, 0x2e3090, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 5", 0x2e3090, 0x2e30b0, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Super Trail", 0x2e30b0, 0x2e30d0, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 7", 0x2e30d0, 0x2e30f0, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 8", 0x2e30f0, 0x2e3110, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 9", 0x2e3110, 0x2e3130, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 10", 0x2e3130, 0x2e3150, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 11", 0x2e3150, 0x2e3170, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 12", 0x2e3170, 0x2e3190, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 13", 0x2e3190, 0x2e31b0, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Extra 14", 0x2e31b0, 0x2e31d0, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Lifebar Portrait", 0x2e31d0, 0x2e31f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Orochi Chris A - Win Portrait", 0x2f05f0, 0x2f06f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_B[] =
{
    { L"Orochi Chris B - Main", 0x2e31f0, 0x2e3210, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 1", 0x2e3210, 0x2e3230, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 2", 0x2e3230, 0x2e3250, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Max Mode", 0x2e3250, 0x2e3270, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 4", 0x2e3270, 0x2e3290, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 5", 0x2e3290, 0x2e32b0, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Super Trail", 0x2e32b0, 0x2e32d0, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 7", 0x2e32d0, 0x2e32f0, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 8", 0x2e32f0, 0x2e3310, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 9", 0x2e3310, 0x2e3330, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 10", 0x2e3330, 0x2e3350, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 11", 0x2e3350, 0x2e3370, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 12", 0x2e3370, 0x2e3390, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 13", 0x2e3390, 0x2e33b0, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Extra 14", 0x2e33b0, 0x2e33d0, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Lifebar Portrait", 0x2e33d0, 0x2e33f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Orochi Chris B - Win Portrait", 0x2f06f0, 0x2f07f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_C[] =
{
    { L"Orochi Chris C - Main", 0x2e33f0, 0x2e3410, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 1", 0x2e3410, 0x2e3430, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 2", 0x2e3430, 0x2e3450, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Max Mode", 0x2e3450, 0x2e3470, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 4", 0x2e3470, 0x2e3490, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 5", 0x2e3490, 0x2e34b0, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Super Trail", 0x2e34b0, 0x2e34d0, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 7", 0x2e34d0, 0x2e34f0, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 8", 0x2e34f0, 0x2e3510, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 9", 0x2e3510, 0x2e3530, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 10", 0x2e3530, 0x2e3550, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 11", 0x2e3550, 0x2e3570, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 12", 0x2e3570, 0x2e3590, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 13", 0x2e3590, 0x2e35b0, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Extra 14", 0x2e35b0, 0x2e35d0, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Lifebar Portrait", 0x2e35d0, 0x2e35f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Orochi Chris C - Win Portrait", 0x2f07f0, 0x2f08f0 },
};

const sGame_PaletteDataset KOF97_A_OROCHICHRIS_PALETTES_D[] =
{
    { L"Orochi Chris D - Main", 0x2e35f0, 0x2e3610, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 1", 0x2e3610, 0x2e3630, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 2", 0x2e3630, 0x2e3650, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Max Mode", 0x2e3650, 0x2e3670, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 4", 0x2e3670, 0x2e3690, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 5", 0x2e3690, 0x2e36b0, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Super Trail", 0x2e36b0, 0x2e36d0, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 7", 0x2e36d0, 0x2e36f0, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 8", 0x2e36f0, 0x2e3710, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 9", 0x2e3710, 0x2e3730, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 10", 0x2e3730, 0x2e3750, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 11", 0x2e3750, 0x2e3770, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 12", 0x2e3770, 0x2e3790, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 13", 0x2e3790, 0x2e37b0, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Extra 14", 0x2e37b0, 0x2e37d0, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Lifebar Portrait", 0x2e37d0, 0x2e37f0, indexKOFSprites_98Lifebar, indexKOFSprites_98Chris },
    { L"Orochi Chris D - Win Portrait", 0x2f08f0, 0x2f09f0 },
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

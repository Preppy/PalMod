#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of COTA_A_SENTINEL_PALETTES. 
// * Update every array using COTA_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 COTA_A_IMG_UNITS[] =
{
    indexCPS2_Colossus,
    indexCPS2_Cyclops,
    indexCPS2_Iceman,
    indexCPS2_Juggy,
    indexCPS2_Magneto,
    indexCPS2_OmegaRed,
    indexCPS2_Psylocke,
    indexCPS2_Sentinel,
    indexCPS2_SilverSamurai,
    indexCPS2_Spiral,
    indexCPS2_Storm,
    indexCPS2_Wolverine,
    indexCPS2_Akuma,
    indexCPS2_STAkuma,
    indexCPS2_COTAAssets,
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P1[] =
{
    { L"P1",          0x2683c, 0x2685c, indexCPS2_Colossus },
    { L"P1 Extras 1: Armor Sparks", 0x2685c, 0x2687c },
    { L"P1 Extras 2", 0x2687c, 0x2689c },
    { L"P1 Shoulder Tackle Shadows", 0x2689c, 0x268bc, indexCPS2_Colossus },

    { L"P1 Super Armor Shine 1", 0x27e5c, 0x27e7c, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 2", 0x27e7c, 0x27e9c, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 3", 0x27e9c, 0x27ebc, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 4", 0x27ebc, 0x27edc, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 5", 0x27edc, 0x27efc, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 6", 0x27efc, 0x27f1c, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 7", 0x27f1c, 0x27f3c, indexCPS2_Colossus },

    { L"P1 Shine 1", 0x2801c, 0x2803c, indexCPS2_Colossus },
    { L"P1 Shine 2", 0x2803c, 0x2805c, indexCPS2_Colossus },
    { L"P1 Shine 3", 0x2805c, 0x2807c, indexCPS2_Colossus },
    { L"P1 Shine 4", 0x2807c, 0x2809c, indexCPS2_Colossus },
    { L"P1 Shine 5", 0x2809c, 0x280Bc, indexCPS2_Colossus },
    { L"P1 Shine 6", 0x280Bc, 0x280Dc, indexCPS2_Colossus },
    { L"P1 Shine 7", 0x280dc, 0x280fc, indexCPS2_Colossus },
    { L"P1 Shine 8", 0x280fc, 0x2811c, indexCPS2_Colossus },

    { L"P1 Power Dive 1", 0x2821c, 0x2823c, indexCPS2_Colossus },
    { L"P1 Power Dive ", 0x2823c, 0x2825c, indexCPS2_Colossus },
    { L"P1 Power Dive 3", 0x2825c, 0x2827c, indexCPS2_Colossus },
    { L"P1 Power Dive 4", 0x2827c, 0x2829c, indexCPS2_Colossus },
    { L"P1 Power Dive 5", 0x2829c, 0x282bc, indexCPS2_Colossus },
    { L"P1 Power Dive 6", 0x282Bc, 0x282dc, indexCPS2_Colossus },
    { L"P1 Power Dive 7", 0x282Dc, 0x282fc, indexCPS2_Colossus },

    { L"P1 HP Shine 1", 0x283Dc, 0x283Fc, indexCPS2_Colossus },
    { L"P1 HP Shine 2", 0x283Fc, 0x2841c, indexCPS2_Colossus },
    { L"P1 HP Shine 3", 0x2841c, 0x2843c, indexCPS2_Colossus },
    { L"P1 HP Shine 4", 0x2843c, 0x2845c, indexCPS2_Colossus },
    { L"P1 HP Shine 5", 0x2845c, 0x2847c, indexCPS2_Colossus },
    { L"P1 HP Shine 6", 0x2847c, 0x2849c, indexCPS2_Colossus },
    { L"P1 HP Shine 7", 0x2849c, 0x284Bc, indexCPS2_Colossus },
    { L"P1 HP Shine 8", 0x284Bc, 0x284Dc, indexCPS2_Colossus },
    { L"P1 HP Shine 9", 0x284Dc, 0x284Fc, indexCPS2_Colossus },
    { L"P1 HP Shine 10", 0x284Fc, 0x2851c, indexCPS2_Colossus },
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P2[] =
{
    { L"P2",          0x268bc, 0x268Dc, indexCPS2_Colossus },
    { L"P2 Extras 1: Armor Sparks", 0x268dc, 0x268Fc },
    { L"P2 Extras 2", 0x268fc, 0x2691c },
    { L"P2 Shoulder Tackle Shadows", 0x2691c, 0x2693c, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct

    { L"P2 Super Armor Shine 1", 0x27f3c, 0x27f5c, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 Super Armor Shine 2", 0x27f5c, 0x27f7c, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 3", 0x27f7c, 0x27f9c, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 4", 0x27f9c, 0x27fbc, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 5", 0x27fbc, 0x27fdc, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 6", 0x27fdc, 0x27ffc, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 7", 0x27ffc, 0x2801c, indexCPS2_Colossus },

    { L"P2 Shine 1", 0x2811c, 0x2813c, indexCPS2_Colossus },
    { L"P2 Shine 2", 0x2813c, 0x2815c, indexCPS2_Colossus },
    { L"P2 Shine 3", 0x2815c, 0x2817c, indexCPS2_Colossus },
    { L"P2 Shine 4", 0x2817c, 0x2819c, indexCPS2_Colossus },
    { L"P2 Shine 5", 0x2819c, 0x281bc, indexCPS2_Colossus },
    { L"P2 Shine 6", 0x281bc, 0x281dc, indexCPS2_Colossus },
    { L"P2 Shine 7", 0x281dc, 0x281fc, indexCPS2_Colossus },
    { L"P2 Shine 8", 0x281fc, 0x2821c, indexCPS2_Colossus },

    { L"P2 Power Dive 1", 0x282fc, 0x2831c, indexCPS2_Colossus },
    { L"P2 Power Dive 2", 0x2831c, 0x2833c, indexCPS2_Colossus },
    { L"P2 Power Dive 3", 0x2833c, 0x2835c, indexCPS2_Colossus },
    { L"P2 Power Dive 4", 0x2835c, 0x2837c, indexCPS2_Colossus },
    { L"P2 Power Dive 5", 0x2837c, 0x2839c, indexCPS2_Colossus },
    { L"P2 Power Dive 6", 0x2839c, 0x283bc, indexCPS2_Colossus },
    { L"P2 Power Dive 7", 0x283bc, 0x283dc, indexCPS2_Colossus },

    { L"P2 HP Shine 1", 0x2851c, 0x2853c, indexCPS2_Colossus },
    { L"P2 HP Shine 2", 0x2853c, 0x2855c, indexCPS2_Colossus },
    { L"P2 HP Shine 3", 0x2855c, 0x2857c, indexCPS2_Colossus },
    { L"P2 HP Shine 4", 0x2857c, 0x2859c, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 HP Shine 5", 0x2859c, 0x285bc, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 HP Shine 6", 0x285bc, 0x285dc, indexCPS2_Colossus },
    { L"P2 HP Shine 7", 0x285dc, 0x285fc, indexCPS2_Colossus },
    { L"P2 HP Shine 8", 0x285fc, 0x2861c, indexCPS2_Colossus },
    { L"P2 HP Shine 9", 0x2861c, 0x2863c, indexCPS2_Colossus },
    { L"P2 HP Shine 10", 0x2863c, 0x2865c, indexCPS2_Colossus },
};

// There's also a cyclops range from 0x276fE to 0x277fE: unclear what it's used for
const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P1[] =
{
    { L"P1",          0x2693c, 0x2695c, indexCPS2_Cyclops },
    { L"P1 Extras 1", 0x2695c, 0x2697c, indexCPS2_Cyclops },
    { L"P1 jHK",      0x2697c, 0x2699c, indexCPS2_Cyclops, 0x1 },
    { L"P1 Extras 3", 0x2699c, 0x269Bc, indexCPS2_Cyclops, 0x2 },

    // preceded by unknown, this segment followed by P2 intro 1
    { L"P1 Optic Stance 1", 0x2865c, 0x2867c, indexCPS2_Cyclops, 13 },
    { L"P1 Optic Stance 2", 0x2867c, 0x2869c, indexCPS2_Cyclops, 13 },
    { L"P1 Intro 1", 0x2877c, 0x2879c, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 2", 0x2879c, 0x287Bc, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 3", 0x287Bc, 0x287Dc, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 4", 0x287Dc, 0x287Fc, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 5", 0x287Fc, 0x2881c, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 6", 0x2881c, 0x2883c, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 7", 0x2883c, 0x2885c, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 8", 0x2885c, 0x2887c, indexCPS2_Cyclops, 12 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_EXTRAS[] =
{
    { L"Shared Optic Blast 1", 0x286bc, 0x286dc, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 2", 0x286dc, 0x286fc, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 3", 0x286fc, 0x2871c, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 4", 0x2871c, 0x2873c, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 5", 0x2869c, 0x286bc, indexCPS2_Cyclops, 11 },

    { L"Shared Optic FX 1", 0x2873c, 0x2875c, indexCPS2_Cyclops, 3 },
    { L"Shared Optic FX 2", 0x2875c, 0x2877c, indexCPS2_Cyclops, 3 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P2[] =
{
    { L"P2",          0x269Bc, 0x269Dc, indexCPS2_Cyclops },
    { L"P2 Extras 1", 0x269Dc, 0x269Fc, indexCPS2_Cyclops },
    // Yes, the purple/gold p2 cyclops is using the wrong P2 jHK palette.
    // this is just an old palette bug in COTA itself
    { L"P2 jHK",      0x269Fc, 0x26A1c, indexCPS2_Cyclops, 0x1 }, 
    { L"P2 Extras 3", 0x26A1c, 0x26A3c, indexCPS2_Cyclops, 0x2 },

    { L"P2 Optic Stance 1", 0x2887c, 0x2889c, indexCPS2_Cyclops, 13 },
    { L"P2 Optic Stance 2", 0x2889c, 0x288Bc, indexCPS2_Cyclops, 13 },
    { L"P2 Intro 1", 0x288Bc, 0x288Dc, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 2", 0x288Dc, 0x288Fc, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 3", 0x288Fc, 0x2891c, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 4", 0x2891c, 0x2893c, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 5", 0x2893c, 0x2895c, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 6", 0x2895c, 0x2897c, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 7", 0x2897c, 0x2899c, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 8", 0x2899c, 0x289Bc, indexCPS2_Cyclops, 12 },
};

// missing icebeam palette
const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P1[] =
{
    { L"P1",         0x26B3c, 0x26B5c, indexCPS2_Iceman },
    { L"P1 Extras",  0x26B7c, 0x26B9c, indexCPS2_Iceman, 5 },
    { L"P1 Win Pose (Human)", 0x26B9c, 0x26BBc, indexCPS2_Iceman, 3 },
    { L"P1 Shine 1 (shared?)", 0x28E7c, 0x28E9c, indexCPS2_Iceman },
    { L"P1 Shine 2", 0x28E9c, 0x28EBc, indexCPS2_Iceman },
    { L"P1 Shine 3", 0x28EBc, 0x28EDc, indexCPS2_Iceman },
    { L"P1 Shine 4", 0x28EDc, 0x28EFc, indexCPS2_Iceman },
    { L"P1 Shine 5", 0x28EFc, 0x28F1c, indexCPS2_Iceman },
    { L"P1 Shine 6", 0x28F1c, 0x28F3c, indexCPS2_Iceman },
    { L"P1 Shine 7 (shared)", 0x28F3c, 0x28F5c, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_EXTRAS[] =
{
    { L"P2 Intro Dust (no P1 mirror)", 0x26B5c, 0x26B7c, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P2[] =
{
    { L"P2",         0x26BBc, 0x26BDc, indexCPS2_Iceman },
    // { L"P2 Extra 1", 0x26BDc, 0x26BFc, indexCPS2_Iceman, 1 }, unused apparently.
    
    { L"P2 Extras",  0x26BFc, 0x26C1c, indexCPS2_Iceman, 5 },
    { L"P2 Win Pose (Human)", 0x26C1c, 0x26C3c, indexCPS2_Iceman, 3 },
    { L"P2 Shine 1", 0x28F5c, 0x28F7c, indexCPS2_Iceman },
    { L"P2 Shine 2", 0x28F7c, 0x28F9c, indexCPS2_Iceman },
    { L"P2 Shine 3", 0x28F9c, 0x28FBc, indexCPS2_Iceman },
    { L"P2 Shine 4", 0x28FBc, 0x28FDc, indexCPS2_Iceman },
    { L"P2 Shine 5", 0x28FDc, 0x28FFc, indexCPS2_Iceman },
    { L"P2 Shine 6", 0x28FFc, 0x2901c, indexCPS2_Iceman },
    { L"P2 Shine 7", 0x2901c, 0x2903c, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P1[] = // boss
{
    { L"P1",          0x26f3c, 0x26f5c, indexCPS2_Juggy },
    { L"P1 Extras 1", 0x26f5c, 0x26f7c, indexCPS2_Juggy, 1 }, // eidrian marks this as unused
    { L"P1 Ground FX", 0x26f7c, 0x26f9c, indexCPS2_Juggy, 2 },
    { L"P1 Extras 3", 0x26f9c, 0x26fbc, indexCPS2_Juggy, 3 }, // eidrian marks this as unused
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P2[] =
{
    { L"P2",          0x26fbc, 0x26fdc, indexCPS2_Juggy },
    { L"P2 Extras 1", 0x26fdc, 0x26ffc, indexCPS2_Juggy, 1 },
    { L"P2 Ground FX", 0x26ffc, 0x2701c, indexCPS2_Juggy, 2 },
    { L"P2 Extras 3", 0x2701c, 0x2703c, indexCPS2_Juggy, 3 },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_SHARED[] =
{
    { L"Cyttorak Power-Up 1", 0x29B7c, 0x29B9c, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 2", 0x29B9c, 0x29BBc, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 3", 0x29BBc, 0x29BDc, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 4", 0x29BDc, 0x29BFc, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 5", 0x29BFc, 0x29C1c, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 6", 0x29C1c, 0x29C3c, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 7", 0x29C3c, 0x29C5c, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 8", 0x29C5c, 0x29C7c, indexCPS2_Juggy },
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P1[] = // boss
{
    { L"P1",          0x2703c, 0x2705c, indexCPS2_Magneto },
    { L"P1 Extras 1", 0x2705c, 0x2707c, indexCPS2_Magneto, 3 }, // shockwave
    { L"P1 Extras 2", 0x2707c, 0x2709c, indexCPS2_Magneto, 2 }, // magnetic fx
    { L"P1 Extras 3", 0x2709c, 0x270bc, indexCPS2_Magneto, 1 }, // em disruptor, etc
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P2[] =
{
    { L"P2",          0x270bc, 0x270dc, indexCPS2_Magneto },
    { L"P2 Extras 1", 0x270dc, 0x270fc, indexCPS2_Magneto, 3 },
    { L"P2 Extras 2", 0x270fc, 0x2711c, indexCPS2_Magneto, 2 },
    { L"P2 Extras 3", 0x2711c, 0x2713c, indexCPS2_Magneto, 1 },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P1[] =
{
    { L"P1",          0x26D3c, 0x26D5c, indexCPS2_OmegaRed },
    { L"P1 Extras 1", 0x26D5c, 0x26D7c, indexCPS2_OmegaRed, 1 },
    { L"P1 Extras 2", 0x26D7c, 0x26D9c, indexCPS2_OmegaRed, 2 },
    { L"P1 Extras 3", 0x26D9c, 0x26DBc, indexCPS2_OmegaRed, 3 },

    { L"P1 Intro 1", 0x289Bc, 0x289Dc, indexCPS2_OmegaRed },
    { L"P1 Intro 2", 0x289Dc, 0x289Fc, indexCPS2_OmegaRed },
    { L"P1 Intro 3", 0x289Fc, 0x28A1c, indexCPS2_OmegaRed },
    { L"P1 Intro 4", 0x28A1c, 0x28A3c, indexCPS2_OmegaRed },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P2[] =
{
    { L"P2",          0x26DBc, 0x26DDc, indexCPS2_OmegaRed },
    { L"P2 Extras 1", 0x26DDc, 0x26DFc, indexCPS2_OmegaRed, 1 },
    { L"P2 Extras 2", 0x26DFc, 0x26E1c, indexCPS2_OmegaRed, 2 },
    { L"P2 Extras 3", 0x26E1c, 0x26E3c, indexCPS2_OmegaRed, 3 },

    { L"P2 Intro 1", 0x28A3c, 0x28A5c, indexCPS2_OmegaRed },
    { L"P2 Intro 2", 0x28A5c, 0x28A7c, indexCPS2_OmegaRed },
    { L"P2 Intro 3", 0x28A7c, 0x28A9c, indexCPS2_OmegaRed },
    { L"P2 Intro 4", 0x28A9c, 0x28ABc, indexCPS2_OmegaRed },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P1[] =
{
    { L"Psylocke P1", 0x2673c, 0x2675c, indexCPS2_Psylocke },
    { L"P1 Extras 1", 0x2675c, 0x2677c, indexCPS2_Psylocke, 1 },
    { L"P1 Extras 2", 0x2677c, 0x2679c, indexCPS2_Psylocke, 0 },
    { L"P1 Extras 3", 0x2679c, 0x267Bc, indexCPS2_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P2[] =
{
    { L"Psylocke P2", 0x267Bc, 0x267Dc, indexCPS2_Psylocke },
    { L"P2 Extras 1", 0x267Dc, 0x267Fc, indexCPS2_Psylocke, 1 },
    { L"P2 Extras 2", 0x267Fc, 0x2681c, indexCPS2_Psylocke, 0 },
    { L"P2 Extras 3", 0x2681c, 0x2683c, indexCPS2_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P1[] =
{
    { L"Sentinel P1", 0x26e3c, 0x26e5c, indexCPS2_Sentinel, 0, &pairNextAndNextSkipped },
    { L"P1 Drones (bombs) / Guts", 0x26e5c, 0x26e7c, indexCPS2_Sentinel, 1 },
    { L"P1 MP / Rocket Punch wires", 0x26e7c, 0x26e9c, indexCPS2_Sentinel, 2 },
    { L"P1 Plasma Storm / Flight", 0x26e9c, 0x26ebc, indexCPS2_Sentinel, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P2[] =
{
    { L"Sentinel P2", 0x26ebc, 0x26edc, indexCPS2_Sentinel, 0, &pairNextAndNextSkipped },
    { L"P2 Drones (bombs) / Guts", 0x26edc, 0x26efc, indexCPS2_Sentinel, 1 },
    { L"P2 MP / Rocket Punch wires", 0x26efc, 0x26f1c, indexCPS2_Sentinel, 2 },
    { L"P2 Plasma Storm / Flight", 0x26f1c, 0x26f3c, indexCPS2_Sentinel, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_SHARED[] =
{
    { L"Sentinel Super FX (shared)", 0x29ABc, 0x29ADc },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P1[] =
{
    { L"P1",          0x2727c, 0x2729c, indexCPS2_SilverSamurai },
    { L"P1 Extras 1: Shadow Frame", 0x2729c, 0x272Bc, indexCPS2_SilverSamurai },
    { L"P1 Extras 2: Slash", 0x272Bc, 0x272Dc, indexCPS2_SilverSamurai, 0x08 },
    { L"P1 Extras 3: Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x272Dc, 0x272Fc, indexCPS2_SilverSamurai, 0x03 },

    { L"P1 Shine 1", 0x2973c, 0x2975c, indexCPS2_SilverSamurai }, // core rotation
    { L"P1 Shine 2", 0x2975c, 0x2977c, indexCPS2_SilverSamurai },
    
    { L"P1 Shine 3", 0x297Bc, 0x297Dc, indexCPS2_SilverSamurai }, // sometimes the rotation runs through the rest of these
    { L"P1 Shine 4", 0x297Dc, 0x297Fc, indexCPS2_SilverSamurai },
    { L"P1 Shine 5", 0x297Fc, 0x2981c, indexCPS2_SilverSamurai },
    { L"P1 Shine 6", 0x2981c, 0x2983c, indexCPS2_SilverSamurai },
    { L"P1 Shine 7", 0x2983c, 0x2985c, indexCPS2_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P2[] =
{
    { L"P2",          0x272Fc, 0x2731c, indexCPS2_SilverSamurai },
    { L"P2 Extras 1: Shadow Frame", 0x2731c, 0x2733c, indexCPS2_SilverSamurai, 1 },
    { L"P2 Extras 2: Slash", 0x2733c, 0x2735c, indexCPS2_SilverSamurai, 0x08 },
    { L"P2 Extras 3: Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x2735c, 0x2737c, indexCPS2_SilverSamurai, 0x03 },

    { L"P2 Shine 1", 0x2977c, 0x2979c, indexCPS2_SilverSamurai }, // core rotation
    { L"P2 Shine 2", 0x2979c, 0x297Bc, indexCPS2_SilverSamurai },

    { L"P2 Shine 3", 0x2985c, 0x2987c, indexCPS2_SilverSamurai }, // sometimes the rotation runs through the rest of these
    { L"P2 Shine 4", 0x2987c, 0x2989c, indexCPS2_SilverSamurai },
    { L"P2 Shine 5", 0x2989c, 0x298Bc, indexCPS2_SilverSamurai },
    { L"P2 Shine 6", 0x298Bc, 0x298Dc, indexCPS2_SilverSamurai },
    { L"P2 Shine 7", 0x298Dc, 0x298Fc, indexCPS2_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_SHARED[] =
{
    { L"Shuriken 1", 0x298Fc, 0x2991c, indexCPS2_SilverSamurai, 0x09 },
    { L"Shuriken 2", 0x2991c, 0x2993c, indexCPS2_SilverSamurai, 0x09 },
    { L"Shuriken 3", 0x2993c, 0x2995c, indexCPS2_SilverSamurai, 0x09 },
    { L"Shuriken 4", 0x2995c, 0x2997c, indexCPS2_SilverSamurai, 0x09 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P1[] =
{
    { L"P1",          0x26C3c, 0x26C5c, indexCPS2_Spiral },
    { L"P1 Extras 1", 0x26C5c, 0x26C7c, indexCPS2_Spiral, 1 },
    { L"P1 Extras 2", 0x26C7c, 0x26C9c, indexCPS2_Spiral, 2 },
    { L"P1 Sword flashing palette", 0x26C9c, 0x26CBc, indexCPS2_Spiral, 3 },

    { L"P1 Power Dance 1", 0x2907c, 0x2909c, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 2", 0x2909c, 0x290Bc, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 3", 0x290Bc, 0x290Dc, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 4", 0x290Dc, 0x290Fc, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 5", 0x290Fc, 0x2911c, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 6", 0x2911c, 0x2913c, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 1", 0x2913c, 0x2915c, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 2", 0x2915c, 0x2917c, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 3", 0x2917c, 0x2919c, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 4", 0x2919c, 0x291Bc, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 5", 0x291Bc, 0x291Dc, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 6", 0x291Dc, 0x291Fc, indexCPS2_Spiral, 11 },
    { L"P1 Metamorphosis 1", 0x2923c, 0x2925c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 2", 0x2925c, 0x2927c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 3", 0x2927c, 0x2929c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 4", 0x2929c, 0x292Bc, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 5", 0x292Bc, 0x292Dc, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 6", 0x292Dc, 0x292Fc, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 7", 0x292Fc, 0x2931c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 8", 0x2931c, 0x2933c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 9", 0x2933c, 0x2935c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 10", 0x2935c, 0x2937c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 11", 0x2937c, 0x2939c, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 12", 0x2939c, 0x293Bc, indexCPS2_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P2[] =
{
    { L"P2",          0x26CBc, 0x26CDc, indexCPS2_Spiral },
    { L"P2 Extras 1", 0x26CDc, 0x26CFc, indexCPS2_Spiral, 1 },
    { L"P2 Extras 2", 0x26CFc, 0x26D1c, indexCPS2_Spiral, 2 },
    { L"P2 Sword flashing palette", 0x26D1c, 0x26D3c, indexCPS2_Spiral, 3 },

    { L"P2 Power Dance 1", 0x293fc, 0x2941c, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 2", 0x2941c, 0x2943c, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 3", 0x2943c, 0x2945c, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 4", 0x2945c, 0x2947c, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 5", 0x2947c, 0x2949c, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 6", 0x2949c, 0x294Bc, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 1", 0x294Bc, 0x294Dc, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 2", 0x294Dc, 0x294Fc, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 3", 0x294Fc, 0x2951c, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 4", 0x2951c, 0x2953c, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 5", 0x2953c, 0x2955c, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 6", 0x2955c, 0x2957c, indexCPS2_Spiral, 11 },
    { L"P2 Metamorphosis 1", 0x295Bc, 0x295Dc, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 2", 0x295Dc, 0x295Fc, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 3", 0x295Fc, 0x2961c, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 4", 0x2961c, 0x2963c, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 5", 0x2963c, 0x2965c, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 6", 0x2965c, 0x2967c, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 7", 0x2967c, 0x2969c, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 8", 0x2969c, 0x296Bc, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 9", 0x296Bc, 0x296Dc, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 10", 0x296Dc, 0x296Fc, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 11", 0x296Fc, 0x2971c, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 12", 0x2971c, 0x2973c, indexCPS2_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P1[] =
{
    { L"P1",         0x26A3c, 0x26A5c, indexCPS2_Storm },
    { L"P1 Extras 1: Lightning FX", 0x26A7c, 0x26A9c, indexCPS2_Storm, 0x08 }, // lightning fx
    { L"P1 Extras 2: Lightning FX", 0x26A9c, 0x26ABc, indexCPS2_Storm, 0x09 }, // head of lightning attack

    { L"P1 Extras 3", 0x26A5c, 0x26A7c, indexCPS2_Storm },
    { L"P1 Ending Sprite", 0x279Fc, 0x27A1c, indexCPS2_Storm },
    
    { L"P1 Lumin 1", 0x28ABc, 0x28ADc, indexCPS2_Storm }, // cfp
    { L"P1 Lumin 2", 0x28ADc, 0x28AFc, indexCPS2_Storm }, // cfp2
    { L"P1 Lumin 3", 0x28AFc, 0x28B1c, indexCPS2_Storm }, // cfp3
    { L"P1 Lumin 4", 0x28B1c, 0x28B3c, indexCPS2_Storm }, // cfp4
    { L"P1 Lumin 5", 0x28B3c, 0x28B5c, indexCPS2_Storm }, // cfp5

    { L"P1 Typhoon 1", 0x28BDc, 0x28BFc, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 2", 0x28BFc, 0x28C1c, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 3", 0x28C1c, 0x28C3c, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 4", 0x28C3c, 0x28C5c, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 5", 0x28C5c, 0x28C7c, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 6", 0x28C7c, 0x28C9c, indexCPS2_Storm, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P2[] =
{
    { L"P2", 0x26ABc, 0x26ADc, indexCPS2_Storm },
    { L"P2 Extras 1: Lightning FX", 0x26AFc, 0x26B1c, indexCPS2_Storm, 0x08 },
    { L"P2 Extras 2: Lightning FX", 0x26B1c, 0x26B3c, indexCPS2_Storm, 0x09 },

    { L"P2 Extras 3", 0x26ADc, 0x26AFc, indexCPS2_Storm },
    { L"P2 Ending Sprite", 0x27A3c, 0x27A5c, indexCPS2_Storm },

    { L"P2 Lumin 1", 0x28C9c, 0x28CBc, indexCPS2_Storm },
    { L"P2 Lumin 2", 0x28CBc, 0x28CDc, indexCPS2_Storm },
    { L"P2 Lumin 3", 0x28CDc, 0x28CFc, indexCPS2_Storm },
    { L"P2 Lumin 4", 0x28CFc, 0x28D1c, indexCPS2_Storm },
    { L"P2 Lumin 5", 0x28D1c, 0x28D3c, indexCPS2_Storm },

    { L"P2 Typhoon 1", 0x28DBc, 0x28DDc, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 2", 0x28DDc, 0x28DFc, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 3", 0x28DFc, 0x28E1c, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 4", 0x28E1c, 0x28E3c, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 5", 0x28E3c, 0x28E5c, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 6", 0x28E5c, 0x28E7c, indexCPS2_Storm, 12 },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P1[] =
{
    { L"Wolverine P1",    0x2713c, 0x2715c, indexCPS2_Wolverine, 0, &pairNext },
    { L"P1 Claws",        0x2715c, 0x2717c, indexCPS2_Wolverine, 1 },
    { L"P1 Berserker Barrage", 0x2717c, 0x2719c, indexCPS2_Wolverine, 2 },
    { L"P1 ?",            0x2719c, 0x271bc, indexCPS2_Wolverine },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P2[] =
{
    { L"Wolverine P2", 0x271bc, 0x271dc, indexCPS2_Wolverine, 0, &pairNext },
    { L"P2 Claws", 0x271dc, 0x271fc, indexCPS2_Wolverine, 1 },
    { L"P2 Berserker Barrage", 0x271fc, 0x2721c, indexCPS2_Wolverine, 2 },
    { L"P2 ?", 0x2721c, 0x2723c, indexCPS2_Wolverine },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P1[] = // aka Gouki
{
    { L"P1",          0x2737c, 0x2739c, indexCPS2_STAkuma },
    { L"P1 Extras 1", 0x2739c, 0x273bc, indexCPS2_STAkuma },
    { L"P1 Extras 2", 0x273bc, 0x273dc, indexCPS2_STAkuma },
    { L"P1 Extras 3", 0x273dc, 0x273fc, indexCPS2_STAkuma, 1 },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P2[] =
{
    { L"P2",          0x273fc, 0x2741c, indexCPS2_STAkuma },
    { L"P2 Extras 1", 0x2741c, 0x2743c, indexCPS2_STAkuma },
    { L"P2 Extras 2", 0x2743c, 0x2745c, indexCPS2_STAkuma },
    { L"P2 Extras 3", 0x2745c, 0x2747c, indexCPS2_STAkuma, 1 },
};

const sGame_PaletteDataset COTA_A_PORTRAIT_PALETTES[] =
{
    { L"Colossus",      0x37012, 0x37032, indexCPS2_Colossus, 0x33 },
    { L"Cyclops",       0x36F32, 0x36F52, indexCPS2_Cyclops, 0x33 },
    { L"Iceman",        0x36F52, 0x36F72, indexCPS2_Iceman, 0x33 },
    { L"Juggernaut",    0x36EF2, 0x36F12, indexCPS2_Juggy, 0x33 },
    { L"Magneto",       0x36F92, 0x36FB2, indexCPS2_Magneto, 0x33 },
    { L"Omega Red",     0x36F72, 0x36F92, indexCPS2_OmegaRed, 0x33 },
    { L"Psylocke",      0x36FD2, 0x36FF2, indexCPS2_Psylocke, 0x33 },
    { L"Sentinel",      0x36EB2, 0x36ED2, indexCPS2_Sentinel, 0x33 },
    { L"Silver Samurai", 0x36F12, 0x36F32, indexCPS2_SilverSamurai, 0x33 },
    { L"Spiral",        0x36FF2, 0x37012, indexCPS2_Spiral, 0x33 },
    { L"Storm",         0x36FB2, 0x36FD2, indexCPS2_Storm, 0x33 },
    { L"Wolverine",     0x36ED2, 0x36EF2, indexCPS2_Wolverine, 0x33 },
};

const sGame_PaletteDataset COTA_A_CSI_PALETTES[] =
{
    { L"Colossus",       0x37072, 0x37092, indexCPS2_Colossus, indexCSP2Images_COTA_CSIs },
    { L"Cyclops",        0x37052, 0x37072, indexCPS2_Cyclops, indexCSP2Images_COTA_CSIs },
    { L"Iceman",         0x370D2, 0x370F2, indexCPS2_Iceman, indexCSP2Images_COTA_CSIs },
    { L"Omega Red",      0x370B2, 0x370D2, indexCPS2_OmegaRed, indexCSP2Images_COTA_CSIs },
    { L"Psylocke",       0x370F2, 0x37112, indexCPS2_Psylocke, indexCSP2Images_COTA_CSIs },
    { L"Sentinel",       0x37032, 0x37052, indexCPS2_Sentinel, indexCSP2Images_COTA_CSIs },
    { L"Silver Samurai", 0x37092, 0x370B2, indexCPS2_SilverSamurai, indexCSP2Images_COTA_CSIs},
    { L"Spiral",         0x37132, 0x37152, indexCPS2_Spiral, indexCSP2Images_COTA_CSIs },
    { L"Storm",          0x37112, 0x37132, indexCPS2_Storm, indexCSP2Images_COTA_CSIs },
    { L"Wolverine",      0x37192, 0x371B2, indexCPS2_Wolverine, indexCSP2Images_COTA_CSIs },

    // These aren't actually exposed but are there.
    //    { L"Juggernaut",     0x37172, 0x37192 },
    //    { L"Magneto",        0x37152, 0x37172 },
};

const sGame_PaletteDataset COTA_A_BONUS_SELECT_PALETTES[] =
{
    { L"Select Screen World Map",   0x371b2, 0x371d2, indexCPS2_COTAAssets, 1 },
    { L"Select Screen Vs Text",     0x371d2, 0x371f2, indexCPS2_COTAAssets, 0 },
    { L"Select Screen Background",  0x3D434, 0x3D454, indexCPS2_COTAAssets, 0x0a },
};

const sGame_PaletteDataset COTA_A_BONUS_ENDING_PALETTES[] =
{
    { L"Mojo",                      0x2799e, 0x279be, indexCPS2_COTAAssets, 2 },
    { L"Professor X",               0x2781c, 0x2783c, indexCPS2_COTAAssets, 0x07 },
    { L"Forge",                     0x27a1c, 0x27a3c, indexCPS2_COTAAssets, 0x06 },
    { L"Cyclops (Ending sprite)",   0x2777c, 0x2779c, indexCPS2_COTAAssets, 0x03 },
    { L"Jean Grey (Holding Cyclops/Photo)",  0x2779c, 0x277Bc, indexCPS2_COTAAssets, 0x04 },
    { L"Jean Grey (Flying)",        0x2771c, 0x2773c, indexCPS2_COTAAssets, 0x05 },
    { L"Wolverine's Motorcycle",    0x279dc, 0x279fc, indexCPS2_COTAAssets, 0x09 },
    { L"Psylocke Ending (dress)",   0x2785c, 0x2787c, indexCPS2_COTAAssets, 0x08 },
    { L"Psylocke Ending (undressed)", 0x2783c, 0x2785c, indexCPS2_Psylocke, 0 },
    { L"Police (Omega Red ending)", 0x2797c, 0x2799c, indexCPS2_COTAAssets, 0x0b },
};

const sDescTreeNode COTA_A_COLOSSUS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_P1,           ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_P2,           ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_P2) },
};

const sDescTreeNode COTA_A_CYCLOPS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_P1,           ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_P2,           ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_EXTRAS,   ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_EXTRAS) },
};

const sDescTreeNode COTA_A_ICEMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P1,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P2,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_EXTRAS,   ARRAYSIZE(COTA_A_ICEMAN_PALETTES_EXTRAS) },
};

const sDescTreeNode COTA_A_JUGGY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_P1,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_P2,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_SHARED,   ARRAYSIZE(COTA_A_JUGGY_PALETTES_SHARED) },
};

const sDescTreeNode COTA_A_MAGNETO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_P1,         ARRAYSIZE(COTA_A_MAGNETO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_P2,         ARRAYSIZE(COTA_A_MAGNETO_PALETTES_P2) },
};

const sDescTreeNode COTA_A_OMEGARED_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_P1,        ARRAYSIZE(COTA_A_OMEGARED_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_P2,        ARRAYSIZE(COTA_A_OMEGARED_PALETTES_P2) },
};

const sDescTreeNode COTA_A_PSYLOCKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_P1,        ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_P2,        ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_P2) },
};

const sDescTreeNode COTA_A_SENTINEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_P1,        ARRAYSIZE(COTA_A_SENTINEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_P2,        ARRAYSIZE(COTA_A_SENTINEL_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_SHARED, ARRAYSIZE(COTA_A_SENTINEL_PALETTES_SHARED) },
};

const sDescTreeNode COTA_A_SILSAM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_P1,        ARRAYSIZE(COTA_A_SILSAM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_P2,        ARRAYSIZE(COTA_A_SILSAM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_SHARED, ARRAYSIZE(COTA_A_SILSAM_PALETTES_SHARED) },
};

const sDescTreeNode COTA_A_SPIRAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_P1,        ARRAYSIZE(COTA_A_SPIRAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_P2,        ARRAYSIZE(COTA_A_SPIRAL_PALETTES_P2) },
};

const sDescTreeNode COTA_A_STORM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_P1,        ARRAYSIZE(COTA_A_STORM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_P2,        ARRAYSIZE(COTA_A_STORM_PALETTES_P2) },
};

const sDescTreeNode COTA_A_WOLVERINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_P1,       ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_P2,       ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_P2) },
};

const sDescTreeNode COTA_A_AKUMA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_P1,       ARRAYSIZE(COTA_A_AKUMA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_P2,       ARRAYSIZE(COTA_A_AKUMA_PALETTES_P2) },
};

const sDescTreeNode COTA_A_BONUS_COLLECTION[] =
{
    { L"Portraits", DESC_NODETYPE_TREE, (void*)COTA_A_PORTRAIT_PALETTES,                ARRAYSIZE(COTA_A_PORTRAIT_PALETTES) },
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)COTA_A_CSI_PALETTES, ARRAYSIZE(COTA_A_CSI_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_SELECT_PALETTES,        ARRAYSIZE(COTA_A_BONUS_SELECT_PALETTES) },
    { L"Ending Characters", DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_ENDING_PALETTES,    ARRAYSIZE(COTA_A_BONUS_ENDING_PALETTES) },
};

const sDescTreeNode COTA_A_UNITS[] =
{
    { L"Colossus",                  DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_COLLECTION,      ARRAYSIZE(COTA_A_COLOSSUS_COLLECTION) },
    { L"Cyclops",                   DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_COLLECTION,       ARRAYSIZE(COTA_A_CYCLOPS_COLLECTION) },
    { L"Iceman",                    DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_COLLECTION,        ARRAYSIZE(COTA_A_ICEMAN_COLLECTION) },
    { L"Juggernaut",                DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_COLLECTION,         ARRAYSIZE(COTA_A_JUGGY_COLLECTION) },
    { L"Magneto",                   DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_COLLECTION,       ARRAYSIZE(COTA_A_MAGNETO_COLLECTION) },
    { L"Omega Red",                 DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_COLLECTION,      ARRAYSIZE(COTA_A_OMEGARED_COLLECTION) },
    { L"Psylocke",                  DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_COLLECTION,      ARRAYSIZE(COTA_A_PSYLOCKE_COLLECTION) },
    { L"Sentinel",                  DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_COLLECTION,      ARRAYSIZE(COTA_A_SENTINEL_COLLECTION) },
    { L"Silver Samurai",            DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_COLLECTION,        ARRAYSIZE(COTA_A_SILSAM_COLLECTION) },
    { L"Spiral",                    DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_COLLECTION,        ARRAYSIZE(COTA_A_SPIRAL_COLLECTION) },
    { L"Storm",                     DESC_NODETYPE_TREE, (void*)COTA_A_STORM_COLLECTION,         ARRAYSIZE(COTA_A_STORM_COLLECTION) },
    { L"Wolverine",                 DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_COLLECTION,     ARRAYSIZE(COTA_A_WOLVERINE_COLLECTION) },
    { L"Akuma",                     DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_COLLECTION,         ARRAYSIZE(COTA_A_AKUMA_COLLECTION) },
    { L"Bonus Stuff",               DESC_NODETYPE_TREE, (void*)COTA_A_BONUS_COLLECTION,         ARRAYSIZE(COTA_A_BONUS_COLLECTION) },
};

constexpr auto COTA_A_NUMUNIT = ARRAYSIZE(COTA_A_UNITS);
#define COTA_A_EXTRALOC COTA_A_NUMUNIT

// We extend this array with data groveled from the cotae.txt extensible extras file, if any.
const stExtraDef COTA_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

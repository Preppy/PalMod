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
    { L"P1",          0x2683e, 0x2685e, indexCPS2_Colossus },
    { L"P1 Extras 1: Armor Sparks", 0x2685e, 0x2687e, },
    { L"P1 Extras 2", 0x2687e, 0x2689e, },
    { L"P1 Shoulder Tackle Shadows", 0x2689e, 0x268be, indexCPS2_Colossus },

    { L"P1 Super Armor Shine 1", 0x27e5e, 0x27e7e, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 2", 0x27e7e, 0x27e9e, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 3", 0x27e9e, 0x27ebe, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 4", 0x27ebe, 0x27ede, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 5", 0x27ede, 0x27efe, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 6", 0x27efe, 0x27f1e, indexCPS2_Colossus },
    { L"P1 Super Armor Shine 7", 0x27f1e, 0x27f3e, indexCPS2_Colossus },

    { L"P1 Shine 1", 0x2801E, 0x2803E, indexCPS2_Colossus },
    { L"P1 Shine 2", 0x2803E, 0x2805E, indexCPS2_Colossus },
    { L"P1 Shine 3", 0x2805E, 0x2807E, indexCPS2_Colossus },
    { L"P1 Shine 4", 0x2807E, 0x2809E, indexCPS2_Colossus },
    { L"P1 Shine 5", 0x2809E, 0x280BE, indexCPS2_Colossus },
    { L"P1 Shine 6", 0x280BE, 0x280DE, indexCPS2_Colossus },
    { L"P1 Shine 7", 0x280de, 0x280fe, indexCPS2_Colossus },
    { L"P1 Shine 8", 0x280fe, 0x2811e, indexCPS2_Colossus },

    { L"P1 Power Dive 1", 0x2821e, 0x2823e, indexCPS2_Colossus },
    { L"P1 Power Dive ", 0x2823e, 0x2825e, indexCPS2_Colossus },
    { L"P1 Power Dive 3", 0x2825e, 0x2827e, indexCPS2_Colossus },
    { L"P1 Power Dive 4", 0x2827e, 0x2829e, indexCPS2_Colossus },
    { L"P1 Power Dive 5", 0x2829e, 0x282be, indexCPS2_Colossus },
    { L"P1 Power Dive 6", 0x282Be, 0x282de, indexCPS2_Colossus },
    { L"P1 Power Dive 7", 0x282De, 0x282fe, indexCPS2_Colossus },

    { L"P1 HP Shine 1", 0x283DE, 0x283FE, indexCPS2_Colossus },
    { L"P1 HP Shine 2", 0x283FE, 0x2841E, indexCPS2_Colossus },
    { L"P1 HP Shine 3", 0x2841E, 0x2843E, indexCPS2_Colossus },
    { L"P1 HP Shine 4", 0x2843E, 0x2845E, indexCPS2_Colossus },
    { L"P1 HP Shine 5", 0x2845E, 0x2847E, indexCPS2_Colossus },
    { L"P1 HP Shine 6", 0x2847E, 0x2849E, indexCPS2_Colossus },
    { L"P1 HP Shine 7", 0x2849E, 0x284BE, indexCPS2_Colossus },
    { L"P1 HP Shine 8", 0x284BE, 0x284DE, indexCPS2_Colossus },
    { L"P1 HP Shine 9", 0x284DE, 0x284FE, indexCPS2_Colossus },
    { L"P1 HP Shine 10", 0x284FE, 0x2851E, indexCPS2_Colossus },
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P2[] =
{
    { L"P2",          0x268be, 0x268DE, indexCPS2_Colossus },
    { L"P2 Extras 1: Armor Sparks", 0x268de, 0x268Fe },
    { L"P2 Extras 2", 0x268fe, 0x2691e },
    { L"P2 Shoulder Tackle Shadows", 0x2691e, 0x2693e, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct

    { L"P2 Super Armor Shine 1", 0x27f3e, 0x27f5e, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 Super Armor Shine 2", 0x27f5e, 0x27f7e, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 3", 0x27f7e, 0x27f9e, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 4", 0x27f9e, 0x27fbe, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 5", 0x27fbe, 0x27fde, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 6", 0x27fde, 0x27ffe, indexCPS2_Colossus },
    { L"P2 Super Armor Shine 7", 0x27ffe, 0x2801e, indexCPS2_Colossus },

    { L"P2 Shine 1", 0x2811e, 0x2813e, indexCPS2_Colossus },
    { L"P2 Shine 2", 0x2813e, 0x2815e, indexCPS2_Colossus },
    { L"P2 Shine 3", 0x2815e, 0x2817e, indexCPS2_Colossus },
    { L"P2 Shine 4", 0x2817e, 0x2819e, indexCPS2_Colossus },
    { L"P2 Shine 5", 0x2819e, 0x281be, indexCPS2_Colossus },
    { L"P2 Shine 6", 0x281be, 0x281de, indexCPS2_Colossus },
    { L"P2 Shine 7", 0x281de, 0x281fe, indexCPS2_Colossus },
    { L"P2 Shine 8", 0x281fe, 0x2821e, indexCPS2_Colossus },

    { L"P2 Power Dive 1", 0x282fe, 0x2831e, indexCPS2_Colossus },
    { L"P2 Power Dive 2", 0x2831e, 0x2833e, indexCPS2_Colossus },
    { L"P2 Power Dive 3", 0x2833e, 0x2835e, indexCPS2_Colossus },
    { L"P2 Power Dive 4", 0x2835e, 0x2837e, indexCPS2_Colossus },
    { L"P2 Power Dive 5", 0x2837e, 0x2839e, indexCPS2_Colossus },
    { L"P2 Power Dive 6", 0x2839e, 0x283be, indexCPS2_Colossus },
    { L"P2 Power Dive 7", 0x283be, 0x283de, indexCPS2_Colossus },

    { L"P2 HP Shine 1", 0x2851e, 0x2853E, indexCPS2_Colossus },
    { L"P2 HP Shine 2", 0x2853e, 0x2855E, indexCPS2_Colossus },
    { L"P2 HP Shine 3", 0x2855e, 0x2857E, indexCPS2_Colossus },
    { L"P2 HP Shine 4", 0x2857e, 0x2859E, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 HP Shine 5", 0x2859e, 0x285bE, indexCPS2_Colossus }, // looks like P1 but confirmed this is correct
    { L"P2 HP Shine 6", 0x285be, 0x285dE, indexCPS2_Colossus },
    { L"P2 HP Shine 7", 0x285de, 0x285fE, indexCPS2_Colossus },
    { L"P2 HP Shine 8", 0x285fe, 0x2861E, indexCPS2_Colossus },
    { L"P2 HP Shine 9", 0x2861e, 0x2863E, indexCPS2_Colossus },
    { L"P2 HP Shine 10", 0x2863e, 0x2865E, indexCPS2_Colossus },
};

// There's also a cyclops range from 0x276fE to 0x277fE: unclear what it's used for
const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P1[] =
{
    { L"P1",          0x2693E, 0x2695E, indexCPS2_Cyclops },
    { L"P1 Extras 1", 0x2695E, 0x2697E, indexCPS2_Cyclops },
    { L"P1 jHK",      0x2697E, 0x2699E, indexCPS2_Cyclops, 0x1 },
    { L"P1 Extras 3", 0x2699E, 0x269BE, indexCPS2_Cyclops, 0x2 },

    // preceded by unknown, this segment followed by P2 intro 1
    { L"P1 Optic Stance 1", 0x2865E, 0x2867E, indexCPS2_Cyclops, 13 },
    { L"P1 Optic Stance 2", 0x2867E, 0x2869E, indexCPS2_Cyclops, 13 },
    { L"P1 Intro 1", 0x2877E, 0x2879E, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 2", 0x2879E, 0x287BE, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 3", 0x287BE, 0x287DE, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 4", 0x287DE, 0x287FE, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 5", 0x287FE, 0x2881E, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 6", 0x2881E, 0x2883E, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 7", 0x2883E, 0x2885E, indexCPS2_Cyclops, 12 },
    { L"P1 Intro 8", 0x2885E, 0x2887E, indexCPS2_Cyclops, 12 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_EXTRAS[] =
{
    { L"Shared Optic Blast 1", 0x286be, 0x286de, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 2", 0x286de, 0x286fe, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 3", 0x286fe, 0x2871e, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 4", 0x2871e, 0x2873e, indexCPS2_Cyclops, 11 },
    { L"Shared Optic Blast 5", 0x2869e, 0x286be, indexCPS2_Cyclops, 11 },

    { L"Shared Optic FX 1", 0x2873E, 0x2875E, indexCPS2_Cyclops, 3 },
    { L"Shared Optic FX 2", 0x2875E, 0x2877E, indexCPS2_Cyclops, 3 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P2[] =
{
    { L"P2",          0x269BE, 0x269DE, indexCPS2_Cyclops },
    { L"P2 Extras 1", 0x269DE, 0x269FE, indexCPS2_Cyclops },
    // Yes, the purple/gold p2 cyclops is using the wrong P2 jHK palette.
    // this is just an old palette bug in COTA itself
    { L"P2 jHK",      0x269FE, 0x26A1E, indexCPS2_Cyclops, 0x1 }, 
    { L"P2 Extras 3", 0x26A1E, 0x26A3E, indexCPS2_Cyclops, 0x2 },

    { L"P2 Optic Stance 1", 0x2887E, 0x2889E, indexCPS2_Cyclops, 13 },
    { L"P2 Optic Stance 2", 0x2889E, 0x288BE, indexCPS2_Cyclops, 13 },
    { L"P2 Intro 1", 0x288BE, 0x288DE, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 2", 0x288DE, 0x288FE, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 3", 0x288FE, 0x2891E, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 4", 0x2891E, 0x2893E, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 5", 0x2893E, 0x2895E, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 6", 0x2895E, 0x2897E, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 7", 0x2897E, 0x2899E, indexCPS2_Cyclops, 12 },
    { L"P2 Intro 8", 0x2899E, 0x289BE, indexCPS2_Cyclops, 12 },
};

// missing icebeam palette
const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P1[] =
{
    { L"P1",         0x26B3E, 0x26B5E, indexCPS2_Iceman },
    { L"P1 Extras",  0x26B7E, 0x26B9E, indexCPS2_Iceman, 5 },
    { L"P1 Win Pose (Human)", 0x26B9E, 0x26BBE, indexCPS2_Iceman, 3 },
    { L"P1 Shine 1 (shared?)", 0x28E7E, 0x28E9E, indexCPS2_Iceman },
    { L"P1 Shine 2", 0x28E9E, 0x28EBE, indexCPS2_Iceman },
    { L"P1 Shine 3", 0x28EBE, 0x28EDE, indexCPS2_Iceman },
    { L"P1 Shine 4", 0x28EDE, 0x28EFE, indexCPS2_Iceman },
    { L"P1 Shine 5", 0x28EFE, 0x28F1E, indexCPS2_Iceman },
    { L"P1 Shine 6", 0x28F1E, 0x28F3E, indexCPS2_Iceman },
    { L"P1 Shine 7 (shared)", 0x28F3E, 0x28F5E, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_EXTRAS[] =
{
    { L"P2 Intro Dust (no P1 mirror)", 0x26B5E, 0x26B7E, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P2[] =
{
    { L"P2",         0x26BBE, 0x26BDE, indexCPS2_Iceman },
    // { L"P2 Extra 1", 0x26BDE, 0x26BFE, indexCPS2_Iceman, 1 }, unused apparently.
    
    { L"P2 Extras",  0x26BFE, 0x26C1E, indexCPS2_Iceman, 5 },
    { L"P2 Win Pose (Human)", 0x26C1E, 0x26C3E, indexCPS2_Iceman, 3 },
    { L"P2 Shine 1", 0x28F5E, 0x28F7E, indexCPS2_Iceman },
    { L"P2 Shine 2", 0x28F7E, 0x28F9E, indexCPS2_Iceman },
    { L"P2 Shine 3", 0x28F9E, 0x28FBE, indexCPS2_Iceman },
    { L"P2 Shine 4", 0x28FBE, 0x28FDE, indexCPS2_Iceman },
    { L"P2 Shine 5", 0x28FDE, 0x28FFE, indexCPS2_Iceman },
    { L"P2 Shine 6", 0x28FFE, 0x2901E, indexCPS2_Iceman },
    { L"P2 Shine 7", 0x2901E, 0x2903E, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P1[] = // boss
{
    { L"P1",          0x26f3e, 0x26f5e, indexCPS2_Juggy },
    { L"P1 Extras 1", 0x26f5e, 0x26f7e, indexCPS2_Juggy, 1 }, // eidrian marks this as unused
    { L"P1 Ground FX", 0x26f7e, 0x26f9e, indexCPS2_Juggy, 2 },
    { L"P1 Extras 3", 0x26f9e, 0x26fbe, indexCPS2_Juggy, 3 }, // eidrian marks this as unused
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P2[] =
{
    { L"P2",          0x26fbe, 0x26fde, indexCPS2_Juggy },
    { L"P2 Extras 1", 0x26fde, 0x26ffe, indexCPS2_Juggy, 1 },
    { L"P2 Ground FX", 0x26ffe, 0x2701e, indexCPS2_Juggy, 2 },
    { L"P2 Extras 3", 0x2701e, 0x2703e, indexCPS2_Juggy, 3 },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_SHARED[] =
{
    { L"Cyttorak Power-Up 1", 0x29B7E, 0x29B9E, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 2", 0x29B9E, 0x29BBE, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 3", 0x29BBE, 0x29BDE, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 4", 0x29BDE, 0x29BFE, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 5", 0x29BFE, 0x29C1E, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 6", 0x29C1E, 0x29C3E, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 7", 0x29C3E, 0x29C5E, indexCPS2_Juggy },
    { L"Cyttorak Power-Up 8", 0x29C5E, 0x29C7E, indexCPS2_Juggy },
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P1[] = // boss
{
    { L"P1",          0x2703e, 0x2705e, indexCPS2_Magneto },
    { L"P1 Extras 1", 0x2705e, 0x2707e, indexCPS2_Magneto, 3 }, // shockwave
    { L"P1 Extras 2", 0x2707e, 0x2709e, indexCPS2_Magneto, 2 }, // magnetic fx
    { L"P1 Extras 3", 0x2709e, 0x270be, indexCPS2_Magneto, 1 }, // em disruptor, etc
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P2[] =
{
    { L"P2",          0x270be, 0x270de, indexCPS2_Magneto },
    { L"P2 Extras 1", 0x270de, 0x270fe, indexCPS2_Magneto, 3 },
    { L"P2 Extras 2", 0x270fe, 0x2711e, indexCPS2_Magneto, 2 },
    { L"P2 Extras 3", 0x2711e, 0x2713e, indexCPS2_Magneto, 1 },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P1[] =
{
    { L"P1",          0x26D3E, 0x26D5E, indexCPS2_OmegaRed },
    { L"P1 Extras 1", 0x26D5E, 0x26D7E, indexCPS2_OmegaRed, 1 },
    { L"P1 Extras 2", 0x26D7E, 0x26D9E, indexCPS2_OmegaRed, 2 },
    { L"P1 Extras 3", 0x26D9E, 0x26DBE, indexCPS2_OmegaRed, 3 },

    { L"P1 Intro 1", 0x289BE, 0x289DE, indexCPS2_OmegaRed },
    { L"P1 Intro 2", 0x289DE, 0x289FE, indexCPS2_OmegaRed },
    { L"P1 Intro 3", 0x289FE, 0x28A1E, indexCPS2_OmegaRed },
    { L"P1 Intro 4", 0x28A1E, 0x28A3E, indexCPS2_OmegaRed },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P2[] =
{
    { L"P2",          0x26DBE, 0x26DDE, indexCPS2_OmegaRed },
    { L"P2 Extras 1", 0x26DDE, 0x26DFE, indexCPS2_OmegaRed, 1 },
    { L"P2 Extras 2", 0x26DFE, 0x26E1E, indexCPS2_OmegaRed, 2 },
    { L"P2 Extras 3", 0x26E1E, 0x26E3E, indexCPS2_OmegaRed, 3 },

    { L"P2 Intro 1", 0x28A3E, 0x28A5E, indexCPS2_OmegaRed },
    { L"P2 Intro 2", 0x28A5E, 0x28A7E, indexCPS2_OmegaRed },
    { L"P2 Intro 3", 0x28A7E, 0x28A9E, indexCPS2_OmegaRed },
    { L"P2 Intro 4", 0x28A9E, 0x28ABE, indexCPS2_OmegaRed },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P1[] =
{
    { L"Psylocke P1", 0x2673E, 0x2675E, indexCPS2_Psylocke },
    { L"P1 Extras 1", 0x2675E, 0x2677E, indexCPS2_Psylocke, 1 },
    { L"P1 Extras 2", 0x2677E, 0x2679E, indexCPS2_Psylocke, 0 },
    { L"P1 Extras 3", 0x2679E, 0x267BE, indexCPS2_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P2[] =
{
    { L"Psylocke P2", 0x267BE, 0x267DE, indexCPS2_Psylocke },
    { L"P2 Extras 1", 0x267DE, 0x267FE, indexCPS2_Psylocke, 1 },
    { L"P2 Extras 2", 0x267FE, 0x2681E, indexCPS2_Psylocke, 0 },
    { L"P2 Extras 3", 0x2681E, 0x2683E, indexCPS2_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P1[] =
{
    { L"Sentinel P1", 0x26e3E, 0x26e5E, indexCPS2_Sentinel, 0, &pairNextAndNextSkipped },
    { L"P1 Drones (bombs) / Guts", 0x26e5E, 0x26e7E, indexCPS2_Sentinel, 1 },
    { L"P1 MP / Rocket Punch wires", 0x26e7E, 0x26e9E, indexCPS2_Sentinel, 2 },
    { L"P1 Plasma Storm / Flight", 0x26e9E, 0x26ebE, indexCPS2_Sentinel, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P2[] =
{
    { L"Sentinel P2", 0x26ebE, 0x26edE, indexCPS2_Sentinel, 0, &pairNextAndNextSkipped },
    { L"P2 Drones (bombs) / Guts", 0x26edE, 0x26efE, indexCPS2_Sentinel, 1 },
    { L"P2 MP / Rocket Punch wires", 0x26efE, 0x26f1E, indexCPS2_Sentinel, 2 },
    { L"P2 Plasma Storm / Flight", 0x26f1E, 0x26f3E, indexCPS2_Sentinel, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_SHARED[] =
{
    { L"Sentinel Super FX (shared)", 0x29ABE, 0x29ADE },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P1[] =
{
    { L"P1",          0x2727E, 0x2729E, indexCPS2_SilverSamurai },
    { L"P1 Extras 1: Shadow Frame", 0x2729E, 0x272BE, indexCPS2_SilverSamurai },
    { L"P1 Extras 2: Shuriken Slash", 0x272BE, 0x272DE, indexCPS2_SilverSamurai, 0x02 },
    { L"P1 Extras 3: Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x272DE, 0x272FE, indexCPS2_SilverSamurai, 0x03 },

    { L"P1 Shine 1", 0x2973E, 0x2975E, indexCPS2_SilverSamurai }, // core rotation
    { L"P1 Shine 2", 0x2975E, 0x2977E, indexCPS2_SilverSamurai },
    
    { L"P1 Shine 3", 0x297BE, 0x297DE, indexCPS2_SilverSamurai }, // sometimes the rotation runs through the rest of these
    { L"P1 Shine 4", 0x297DE, 0x297FE, indexCPS2_SilverSamurai },
    { L"P1 Shine 5", 0x297FE, 0x2981E, indexCPS2_SilverSamurai },
    { L"P1 Shine 6", 0x2981E, 0x2983E, indexCPS2_SilverSamurai },
    { L"P1 Shine 7", 0x2983E, 0x2985E, indexCPS2_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P2[] =
{
    { L"P2",          0x272FE, 0x2731E, indexCPS2_SilverSamurai },
    { L"P2 Extras 1: Shadow Frame", 0x2731E, 0x2733E, indexCPS2_SilverSamurai, 1 },
    { L"P2 Extras 2: Shuriken Slash", 0x2733E, 0x2735E, indexCPS2_SilverSamurai, 0x02 },
    { L"P2 Extras 3: Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x2735E, 0x2737E, indexCPS2_SilverSamurai, 0x03 },

    { L"P2 Shine 1", 0x2977E, 0x2979E, indexCPS2_SilverSamurai }, // core rotation
    { L"P2 Shine 2", 0x2979E, 0x297BE, indexCPS2_SilverSamurai },

    { L"P2 Shine 3", 0x2985E, 0x2987E, indexCPS2_SilverSamurai }, // sometimes the rotation runs through the rest of these
    { L"P2 Shine 4", 0x2987E, 0x2989E, indexCPS2_SilverSamurai },
    { L"P2 Shine 5", 0x2989E, 0x298BE, indexCPS2_SilverSamurai },
    { L"P2 Shine 6", 0x298BE, 0x298DE, indexCPS2_SilverSamurai },
    { L"P2 Shine 7", 0x298DE, 0x298FE, indexCPS2_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P1[] =
{
    { L"P1",          0x26C3E, 0x26C5E, indexCPS2_Spiral },
    { L"P1 Extras 1", 0x26C5E, 0x26C7E, indexCPS2_Spiral, 1 },
    { L"P1 Extras 2", 0x26C7E, 0x26C9E, indexCPS2_Spiral, 2 },
    { L"P1 Sword flashing palette", 0x26C9E, 0x26CBE, indexCPS2_Spiral, 3 },

    { L"P1 Power Dance 1", 0x2909E, 0x290BE, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 2", 0x290BE, 0x290DE, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 3", 0x290DE, 0x290FE, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 4", 0x290FE, 0x2911E, indexCPS2_Spiral, 11 },
    { L"P1 Power Dance 5", 0x2911E, 0x2913E, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 1", 0x2913E, 0x2915E, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 2", 0x2915E, 0x2917E, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 3", 0x2917E, 0x2919E, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 4", 0x2919E, 0x291BE, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 5", 0x291BE, 0x291DE, indexCPS2_Spiral, 11 },
    { L"P1 Speed Dance 6", 0x291DE, 0x291FE, indexCPS2_Spiral, 11 },
    { L"P1 Metamorphosis 1", 0x2923E, 0x2925E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 2", 0x2925E, 0x2927E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 3", 0x2927E, 0x2929E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 4", 0x2929E, 0x292BE, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 5", 0x292BE, 0x292DE, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 6", 0x292DE, 0x292FE, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 7", 0x292FE, 0x2931E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 8", 0x2931E, 0x2933E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 9", 0x2933E, 0x2935E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 10", 0x2935E, 0x2937E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 11", 0x2937E, 0x2939E, indexCPS2_Spiral, 12 },
    { L"P1 Metamorphosis 12", 0x2939E, 0x293BE, indexCPS2_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P2[] =
{
    { L"P2",          0x26CBE, 0x26CDE, indexCPS2_Spiral },
    { L"P2 Extras 1", 0x26CDE, 0x26CFE, indexCPS2_Spiral, 1 },
    { L"P2 Extras 2", 0x26CFE, 0x26D1E, indexCPS2_Spiral, 2 },
    { L"P2 Sword flashing palette", 0x26D1E, 0x26D3E, indexCPS2_Spiral, 3 },

    { L"P2 Power Dance 1", 0x2941E, 0x2943E, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 2", 0x2943E, 0x2945E, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 3", 0x2945E, 0x2947E, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 4", 0x2947E, 0x2949E, indexCPS2_Spiral, 11 },
    { L"P2 Power Dance 5", 0x2949E, 0x294BE, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 1", 0x294BE, 0x294DE, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 2", 0x294DE, 0x294FE, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 3", 0x294FE, 0x2951E, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 4", 0x2951E, 0x2953E, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 5", 0x2953E, 0x2955E, indexCPS2_Spiral, 11 },
    { L"P2 Speed Dance 6", 0x2955E, 0x2957E, indexCPS2_Spiral, 11 },
    { L"P2 Metamorphosis 1", 0x295BE, 0x295DE, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 2", 0x295DE, 0x295FE, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 3", 0x295FE, 0x2961E, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 4", 0x2961E, 0x2963E, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 5", 0x2963E, 0x2965E, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 6", 0x2965E, 0x2967E, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 7", 0x2967E, 0x2969E, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 8", 0x2969E, 0x296BE, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 9", 0x296BE, 0x296DE, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 10", 0x296DE, 0x296FE, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 11", 0x296FE, 0x2971E, indexCPS2_Spiral, 12 },
    { L"P2 Metamorphosis 12", 0x2971E, 0x2973E, indexCPS2_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P1[] =
{
    { L"P1",         0x26A3E, 0x26A5E, indexCPS2_Storm },
    { L"P1 Extras 1: Lightning FX", 0x26A7E, 0x26A9E, indexCPS2_Storm, 0x08 }, // lightning fx
    { L"P1 Extras 2: Lightning FX", 0x26A9E, 0x26ABE, indexCPS2_Storm, 0x09 }, // head of lightning attack

    { L"P1 Extras 3", 0x26A5E, 0x26A7E, indexCPS2_Storm },
    { L"P1 Ending Sprite", 0x279FE, 0x27A1E, indexCPS2_Storm },
    
    { L"P1 Lumin 1", 0x28ABE, 0x28ADE, indexCPS2_Storm }, // cfp
    { L"P1 Lumin 2", 0x28ADE, 0x28AFE, indexCPS2_Storm }, // cfp2
    { L"P1 Lumin 3", 0x28AFE, 0x28B1E, indexCPS2_Storm }, // cfp3
    { L"P1 Lumin 4", 0x28B1E, 0x28B3E, indexCPS2_Storm }, // cfp4
    { L"P1 Lumin 5", 0x28B3E, 0x28B5E, indexCPS2_Storm }, // cfp5

    { L"P1 Typhoon 1", 0x28BDE, 0x28BFE, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 2", 0x28BFE, 0x28C1E, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 3", 0x28C1E, 0x28C3E, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 4", 0x28C3E, 0x28C5E, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 5", 0x28C5E, 0x28C7E, indexCPS2_Storm, 12 },
    { L"P1 Typhoon 6", 0x28C7E, 0x28C9E, indexCPS2_Storm, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P2[] =
{
    { L"P2", 0x26ABE, 0x26ADE, indexCPS2_Storm },
    { L"P2 Extras 1: Lightning FX", 0x26AFE, 0x26B1E, indexCPS2_Storm, 0x08 },
    { L"P2 Extras 2: Lightning FX", 0x26B1E, 0x26B3E, indexCPS2_Storm, 0x09 },

    { L"P2 Extras 3", 0x26ADE, 0x26AFE, indexCPS2_Storm },
    { L"P2 Ending Sprite", 0x27A3E, 0x27A5E, indexCPS2_Storm },

    { L"P2 Lumin 1", 0x28C9E, 0x28CBE, indexCPS2_Storm },
    { L"P2 Lumin 2", 0x28CBE, 0x28CDE, indexCPS2_Storm },
    { L"P2 Lumin 3", 0x28CDE, 0x28CFE, indexCPS2_Storm },
    { L"P2 Lumin 4", 0x28CFE, 0x28D1E, indexCPS2_Storm },
    { L"P2 Lumin 5", 0x28D1E, 0x28D3E, indexCPS2_Storm },

    { L"P2 Typhoon 1", 0x28DBE, 0x28DDE, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 2", 0x28DDE, 0x28DFE, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 3", 0x28DFE, 0x28E1E, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 4", 0x28E1E, 0x28E3E, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 5", 0x28E3E, 0x28E5E, indexCPS2_Storm, 12 },
    { L"P2 Typhoon 6", 0x28E5E, 0x28E7E, indexCPS2_Storm, 12 },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P1[] =
{
    { L"Wolverine P1",    0x2713E, 0x2715E, indexCPS2_Wolverine, 0, &pairNext },
    { L"P1 Claws",        0x2715E, 0x2717E, indexCPS2_Wolverine, 1 },
    { L"P1 Berserker Barrage", 0x2717e, 0x2719e, indexCPS2_Wolverine, 2 },
    { L"P1 ?",            0x2719e, 0x271be, indexCPS2_Wolverine },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P2[] =
{
    { L"Wolverine P2", 0x271be, 0x271dE, indexCPS2_Wolverine, 0, &pairNext },
    { L"P2 Claws", 0x271dE, 0x271fE, indexCPS2_Wolverine, 1 },
    { L"P2 Berserker Barrage", 0x271fE, 0x2721E, indexCPS2_Wolverine, 2 },
    { L"P2 ?", 0x2721E, 0x2723E, indexCPS2_Wolverine },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P1[] = // aka Gouki
{
    { L"P1",          0x2737e, 0x2739e, indexCPS2_STAkuma },
    { L"P1 Extras 1", 0x2739e, 0x273be, indexCPS2_STAkuma },
    { L"P1 Extras 2", 0x273be, 0x273de, indexCPS2_STAkuma },
    { L"P1 Extras 3", 0x273de, 0x273fe, indexCPS2_STAkuma, 1 },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P2[] =
{
    { L"P2",          0x273fe, 0x2741e, indexCPS2_STAkuma },
    { L"P2 Extras 1", 0x2741e, 0x2743e, indexCPS2_STAkuma },
    { L"P2 Extras 2", 0x2743e, 0x2745e, indexCPS2_STAkuma },
    { L"P2 Extras 3", 0x2745e, 0x2747e, indexCPS2_STAkuma, 1 },
};

const sGame_PaletteDataset COTA_A_PORTRAIT_PALETTES[] =
{
    { L"Colossus",   0x37014, 0x37034, indexCPS2_Colossus, 0x33 },
    { L"Cyclops",    0x36F34, 0x36F54, indexCPS2_Cyclops, 0x33 },
    { L"Iceman",     0x36F54, 0x36F74, indexCPS2_Iceman, 0x33 },
    { L"Juggernaut", 0x36EF4, 0x36F14, indexCPS2_Juggy, 0x33 },
    { L"Magneto",    0x36F94, 0x36FB4, indexCPS2_Magneto, 0x33 },
    { L"Omega Red",  0x36F74, 0x36F94, indexCPS2_OmegaRed, 0x33 },
    { L"Psylocke",   0x36FD4, 0x36FF4, indexCPS2_Psylocke, 0x33 },
    { L"Sentinel",   0x36EB4, 0x36ED4, indexCPS2_Sentinel, 0x33 },
    { L"Silver Samurai", 0x36F14, 0x36F34, indexCPS2_SilverSamurai, 0x33 },
    { L"Spiral",     0x36FF4, 0x37014, indexCPS2_Spiral, 0x33 },
    { L"Storm",      0x36FB4, 0x36FD4, indexCPS2_Storm, 0x33 },
    { L"Wolverine",  0x36ED4, 0x36EF4, indexCPS2_Wolverine, 0x33 },
};

const sGame_PaletteDataset COTA_A_CSI_PALETTES[] =
{
    { L"Colossus",       0x37074, 0x37094, indexCPS2_Colossus, indexCSP2Images_COTA_CSIs },
    { L"Cyclops",        0x37054, 0x37074, indexCPS2_Cyclops, indexCSP2Images_COTA_CSIs },
    { L"Iceman",         0x370D4, 0x370F4, indexCPS2_Iceman, indexCSP2Images_COTA_CSIs },
    { L"Omega Red",      0x370B4, 0x370D4, indexCPS2_OmegaRed, indexCSP2Images_COTA_CSIs },
    { L"Psylocke",       0x370F4, 0x37114, indexCPS2_Psylocke, indexCSP2Images_COTA_CSIs },
    { L"Sentinel",       0x37034, 0x37054, indexCPS2_Sentinel, indexCSP2Images_COTA_CSIs },
    { L"Silver Samurai", 0x37094, 0x370B4, indexCPS2_SilverSamurai, indexCSP2Images_COTA_CSIs},
    { L"Spiral",         0x37134, 0x37154, indexCPS2_Spiral, indexCSP2Images_COTA_CSIs },
    { L"Storm",          0x37114, 0x37134, indexCPS2_Storm, indexCSP2Images_COTA_CSIs },
    { L"Wolverine",      0x37194, 0x371B4, indexCPS2_Wolverine, indexCSP2Images_COTA_CSIs },

    // These aren't actually exposed but are there.
    //    { L"Juggernaut",     0x37174, 0x37194 },
    //    { L"Magneto",        0x37154, 0x37174 },
};

const sGame_PaletteDataset COTA_A_BONUS_SELECT_PALETTES[] =
{
    { L"Select Screen World Map",   0x371b4, 0x371d4, indexCPS2_COTAAssets, 1 },
    { L"Select Screen Vs Text",     0x371d4, 0x371f4, indexCPS2_COTAAssets, 0 },
    { L"Select Screen Background",  0x3D436, 0x3D456 },
};

const sGame_PaletteDataset COTA_A_BONUS_ENDING_PALETTES[] =
{
    { L"Mojo",                      0x279a0, 0x279c0, indexCPS2_COTAAssets, 2 },
    { L"Professor X",               0x2781E, 0x2783E, indexCPS2_COTAAssets, 0x07 },
    { L"Forge",                     0x27a1e, 0x27a3e, indexCPS2_COTAAssets, 0x06 },
    { L"Cyclops (Ending sprite)",   0x2777e, 0x2779e, indexCPS2_COTAAssets, 0x03 },
    { L"Jean Grey (Holding Cyclops/Photo)",  0x2779E, 0x277BE, indexCPS2_COTAAssets, 0x04 },
    { L"Jean Grey (Flying)",        0x2771E, 0x2773E, indexCPS2_COTAAssets, 0x05 },
    { L"Wolverine's Motorcycle",    0x279de, 0x279fe, indexCPS2_COTAAssets, 0x09 },
    { L"Psylocke Ending (dress)",   0x2785E, 0x2787E, indexCPS2_COTAAssets, 0x08 },
    { L"Psylocke Ending (undressed)", 0x2783E, 0x2785E, indexCPS2_Psylocke, 0 },
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

const sDescTreeNode COTA_UNITS[] =
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

constexpr auto COTA_A_NUMUNIT = ARRAYSIZE(COTA_UNITS);
#define COTA_A_EXTRALOC COTA_A_NUMUNIT

// We extend this array with data groveled from the cotae.txt extensible extras file, if any.
const stExtraDef COTA_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

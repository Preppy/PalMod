#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of COTA_A_SENTINEL_PALETTES. 
// * Update every array using COTA_A_NUMUNIT below
// That should be it.  Good luck.

enum SupportedCOTAPaletteListIndex
{
    indexCOTAColossus,
    indexCOTACyclops,
    indexCOTAIceman,
    indexCOTAOmegaRed,
    indexCOTAJuggernaut,
    indexCOTAMagneto,
    indexCOTAPsylocke,
    indexCOTASentinel,
    indexCOTASilverSamurai,
    indexCOTASpiral,
    indexCOTAStorm,
    indexCOTAWolverine,
    indexCOTAAkuma,
    indexCOTA_Last
};

constexpr auto COTA_A_NUMUNIT = indexCOTA_Last;

#define COTA_A_EXTRALOC COTA_A_NUMUNIT

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P1[] =
{
    {"P1",          0x2683e, 0x2685e, indexCPS2_Colossus },
    {"P1 Extras 1", 0x2685e, 0x2687e, },
    {"P1 Extras 2", 0x2687e, 0x2689e, },
    {"P1 Extras 3", 0x2689e, 0x268be, indexCPS2_Colossus },
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P2[] =
{
    {"P2",          0x268be, 0x268DE, indexCPS2_Colossus },
    {"P2 Extras 1", 0x268de, 0x268Fe },
    {"P2 Extras 2", 0x268fe, 0x2691e },
    {"P2 Extras 3", 0x2691e, 0x2693e, indexCPS2_Colossus },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P1[] =
{
    { "P1",          0x2693E, 0x2695E, indexCPS2_Cyclops },
    { "P1 Extras 1", 0x2695E, 0x2697E, indexCPS2_Cyclops },
    { "P1 HK",       0x2697E, 0x2699E, indexCPS2_Cyclops, 0x1 },
    { "P1 Extras 3", 0x2699E, 0x269BE, indexCPS2_Cyclops, 0x2 },

    { "P1 Optic Light", 0x2867E, 0x2869E, indexCPS2_Cyclops, 13 },
    { "P1 Intro 1", 0x2877E, 0x2879E, indexCPS2_Cyclops, 12 },
    { "P1 Intro 2", 0x2879E, 0x287BE, indexCPS2_Cyclops, 12 },
    { "P1 Intro 3", 0x287BE, 0x287DE, indexCPS2_Cyclops, 12 },
    { "P1 Intro 4", 0x287DE, 0x287FE, indexCPS2_Cyclops, 12 },
    { "P1 Intro 5", 0x287FE, 0x2881E, indexCPS2_Cyclops, 12 },
    { "P1 Intro 6", 0x2881E, 0x2883E, indexCPS2_Cyclops, 12 },
    { "P1 Intro 7", 0x2883E, 0x2885E, indexCPS2_Cyclops, 12 },
    { "P1 Intro 8", 0x2885E, 0x2887E, indexCPS2_Cyclops, 12 },

};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_EXTRAS[] =
{
    { "Shared Optic Blast 1", 0x2871E, 0x2873E, indexCPS2_Cyclops, 11 },
    { "Shared Optic Blast 2", 0x2873E, 0x2875E, indexCPS2_Cyclops, 11 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P2[] =
{
    { "P2",          0x269BE, 0x269DE, indexCPS2_Cyclops },
    { "P2 Extras 1", 0x269DE, 0x269FE, indexCPS2_Cyclops },
    { "P2 HK?",      0x269FE, 0x26A1E, indexCPS2_Cyclops, 0x1 },
    { "P2 Extras 3", 0x26A1E, 0x26A3E, indexCPS2_Cyclops, 0x2 },

    { "P2 Optic Light", 0x2889E, 0x288BE, indexCPS2_Cyclops, 13 },
    { "P2 Intro 1", 0x288BE, 0x288DE, indexCPS2_Cyclops, 12 },
    { "P2 Intro 2", 0x288DE, 0x288FE, indexCPS2_Cyclops, 12 },
    { "P2 Intro 3", 0x288FE, 0x2891E, indexCPS2_Cyclops, 12 },
    { "P2 Intro 4", 0x2891E, 0x2893E, indexCPS2_Cyclops, 12 },
    { "P2 Intro 5", 0x2893E, 0x2895E, indexCPS2_Cyclops, 12 },
    { "P2 Intro 6", 0x2895E, 0x2897E, indexCPS2_Cyclops, 12 },
    { "P2 Intro 7", 0x2897E, 0x2899E, indexCPS2_Cyclops, 12 },
    { "P2 Intro 8", 0x2899E, 0x289BE, indexCPS2_Cyclops, 12 },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P1[] =
{
    { "P1",         0x26B3E, 0x26B5E, indexCPS2_Iceman },
    { "P1 Extras",  0x26B7E, 0x26B9E, indexCPS2_Iceman, 5 },
    { "P1 Win Pose (Human)", 0x26B9E, 0x26BBE, indexCPS2_Iceman, 3 },
    { "P1 Shine 1 (shared?)", 0x28E7E, 0x28E9E, indexCPS2_Iceman },
    { "P1 Shine 2", 0x28E9E, 0x28EBE, indexCPS2_Iceman },
    { "P1 Shine 3", 0x28EBE, 0x28EDE, indexCPS2_Iceman },
    { "P1 Shine 4", 0x28EDE, 0x28EFE, indexCPS2_Iceman },
    { "P1 Shine 5", 0x28EFE, 0x28F1E, indexCPS2_Iceman },
    { "P1 Shine 6", 0x28F1E, 0x28F3E, indexCPS2_Iceman },
    { "P1 Shine 7 (shared)", 0x28F3E, 0x28F5E, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_EXTRAS[] =
{
    { "P2 Intro Dust (no P1 mirror)", 0x26B5E, 0x26B7E, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P2[] =
{
    { "P2",         0x26BBE, 0x26BDE, indexCPS2_Iceman },
    { "P2 Extras",  0x26BFE, 0x26C1E, indexCPS2_Iceman, 5 },
    { "P2 Win Pose (Human)", 0x26C1E, 0x26C3E, indexCPS2_Iceman, 3 },
    { "P2 Shine 1", 0x28F5E, 0x28F7E, indexCPS2_Iceman },
    { "P2 Shine 2", 0x28F7E, 0x28F9E, indexCPS2_Iceman },
    { "P2 Shine 3", 0x28F9E, 0x28FBE, indexCPS2_Iceman },
    { "P2 Shine 4", 0x28FBE, 0x28FDE, indexCPS2_Iceman },
    { "P2 Shine 5", 0x28FDE, 0x28FFE, indexCPS2_Iceman },
    { "P2 Shine 6", 0x28FFE, 0x2901E, indexCPS2_Iceman },
    { "P2 Shine 7", 0x2901E, 0x2903E, indexCPS2_Iceman },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P1[] =
{
    {"P1",          0x26f3e, 0x26f5e, 0x29 },
    {"P1 Extras 2", 0x26f5e, 0x26f7e, 0x29, 1 },
    {"P1 Extras 2", 0x26f7e, 0x26f9e, 0x29, 2 },
    {"P1 Extras 3", 0x26f9e, 0x26fbe, 0x29, 3 },
};

const sGame_PaletteDataset COTA_A_JUGGY_PALETTES_P2[] =
{
    {"P2",          0x26fbe, 0x26fde, 0x29 },
    {"P2 Extras 2", 0x26fde, 0x26ffe, 0x29, 1 },
    {"P2 Extras 2", 0x26ffe, 0x2701e, 0x29, 2 },
    {"P2 Extras 3", 0x2701e, 0x2703e, 0x29, 3 },
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P1[] =
{
    {"P1",          0x2703e, 0x2705e, 0x2C },
    {"P1 Extras 2", 0x2705e, 0x2707e, 0x2C, 1 },
    {"P1 Extras 2", 0x2707e, 0x2709e, 0x2C, 2 },
    {"P1 Extras 3", 0x2709e, 0x270be, 0x2C, 3 },
};

const sGame_PaletteDataset COTA_A_MAGNETO_PALETTES_P2[] =
{
    {"P2",          0x270be, 0x270de, 0x2C },
    {"P2 Extras 2", 0x270de, 0x270fe, 0x2C, 1 },
    {"P2 Extras 2", 0x270fe, 0x2711e, 0x2C, 2 },
    {"P2 Extras 3", 0x2711e, 0x2713e, 0x2C, 3 },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P1[] =
{
    { "P1",          0x26D3E, 0x26D5E, indexCPS2_OmegaRed },
    { "P1 Extras 1", 0x26D5E, 0x26D7E, indexCPS2_OmegaRed, 1 },
    { "P1 Extras 2", 0x26D7E, 0x26D9E, indexCPS2_OmegaRed, 2 },
    { "P1 Extras 3", 0x26D9E, 0x26DBE, indexCPS2_OmegaRed, 3 },

    { "P1 Intro 1", 0x289BE, 0x289DE, indexCPS2_OmegaRed },
    { "P1 Intro 2", 0x289DE, 0x289FE, indexCPS2_OmegaRed },
    { "P1 Intro 3", 0x289FE, 0x28A1E, indexCPS2_OmegaRed },
    { "P1 Intro 4", 0x28A1E, 0x28A3E, indexCPS2_OmegaRed },
    { "P1 Intro 5", 0x28A3E, 0x28A5E, indexCPS2_OmegaRed },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P2[] =
{
    { "P2",          0x26DBE, 0x26DDE, indexCPS2_OmegaRed },
    { "P2 Extras 1", 0x26DDE, 0x26DFE, indexCPS2_OmegaRed, 1 },
    { "P2 Extras 2", 0x26DFE, 0x26E1E, indexCPS2_OmegaRed, 2 },
    { "P2 Extras 3", 0x26E1E, 0x26E3E, indexCPS2_OmegaRed, 3 },

    { "P2 Intro 1", 0x28A5E, 0x28A7E, indexCPS2_OmegaRed },
    { "P2 Intro 2", 0x28A7E, 0x28A9E, indexCPS2_OmegaRed },
    { "P2 Intro 3", 0x28A9E, 0x28ABE, indexCPS2_OmegaRed },
    { "P2 Intro 4", 0x28ABE, 0x28ADE, indexCPS2_OmegaRed },
    { "P2 Intro 5", 0x28ADE, 0x28AFE, indexCPS2_OmegaRed },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P1[] =
{
    {"Psylocke P1", 0x2673E, 0x2675E, indexCPS2_Psylocke },
    {"P1 Extras 1", 0x2675E, 0x2677E, indexCPS2_Psylocke, 1 },
    {"P1 Extras 2", 0x2677E, 0x2679E, indexCPS2_Psylocke, 0 },
    {"P1 Extras 3", 0x2679E, 0x267BE, indexCPS2_Psylocke, 3 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P2[] =
{
    {"Psylocke P2", 0x267BE, 0x267DE, indexCPS2_Psylocke },
    {"P2 Extras 1", 0x267DE, 0x267FE, indexCPS2_Psylocke, 1 },
    {"P2 Extras 2", 0x267FE, 0x2681E, indexCPS2_Psylocke, 0 },
    {"P2 Extras 3", 0x2681E, 0x2683E, indexCPS2_Psylocke, 2 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P1[] =
{
    {"Sentinel P1", 0x26e3E, 0x26e5E, 0x34 },
    {"P1 Extras 1", 0x26e5E, 0x26e7E, 0x34, 1 },
    {"P1 Extras 2", 0x26e7E, 0x26e9E, 0x34, 2 },
    {"P1 Extras 3", 0x26e9E, 0x26ebE, 0x34, 3 },
};

const sGame_PaletteDataset COTA_A_SENTINEL_PALETTES_P2[] =
{
    {"Sentinel P2", 0x26ebE, 0x26edE, 0x34 },
    {"P2 Extras 1", 0x26edE, 0x26efE, 0x34, 1 },
    {"P2 Extras 2", 0x26efE, 0x26f1E, 0x34, 2 },
    {"P2 Extras 3", 0x26f1E, 0x26f3E, 0x34, 3 },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P1[] =
{
    { "P1",          0x2727E, 0x2729E, indexCPS2_SilverSamurai },
    { "P1 Extras 1", 0x2729E, 0x272BE, indexCPS2_SilverSamurai },
    { "P1 Extras 2", 0x272BE, 0x272DE },
    { "P1 Extras 3", 0x272DE, 0x272FE },

    { "P1 Shine 1", 0x2973E, 0x2975E, indexCPS2_SilverSamurai },
    { "P1 Shine 2", 0x2975E, 0x2977E, indexCPS2_SilverSamurai },
    { "P1 Shine 3", 0x297BE, 0x297DE, indexCPS2_SilverSamurai },
    { "P1 Shine 4", 0x297DE, 0x297FE, indexCPS2_SilverSamurai },
    { "P1 Shine 5", 0x297FE, 0x2981E, indexCPS2_SilverSamurai },
    { "P1 Shine 6", 0x2981E, 0x2983E, indexCPS2_SilverSamurai },
    { "P1 Shine 7", 0x2983E, 0x2985E, indexCPS2_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P2[] =
{
    { "P2",          0x272FE, 0x2731E, indexCPS2_SilverSamurai },
    { "P2 Extras 1", 0x2731E, 0x2733E, indexCPS2_SilverSamurai, 1 },
    { "P2 Extras 2", 0x2733E, 0x2735E },
    { "P2 Extras 3", 0x2735E, 0x2737E },

    { "P2 Shine 1", 0x2977E, 0x2979E, indexCPS2_SilverSamurai },
    { "P2 Shine 2", 0x2979E, 0x297BE, indexCPS2_SilverSamurai },
    { "P2 Shine 3", 0x2985E, 0x2987E, indexCPS2_SilverSamurai },
    { "P2 Shine 4", 0x2987E, 0x2989E, indexCPS2_SilverSamurai },
    { "P2 Shine 5", 0x2989E, 0x298BE, indexCPS2_SilverSamurai },
    { "P2 Shine 6", 0x298BE, 0x298DE, indexCPS2_SilverSamurai },
    { "P2 Shine 7", 0x298DE, 0x298FE, indexCPS2_SilverSamurai },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P1[] =
{
    { "P1", 		 0x26C3E, 0x26C5E, indexCPS2_Spiral },
    { "P1 Extras 1", 0x26C5E, 0x26C7E, indexCPS2_Spiral, 1 },
    { "P1 Extras 2", 0x26C7E, 0x26C9E, indexCPS2_Spiral, 2 },
    { "P1 Power Dance 1", 0x2909E, 0x290BE, indexCPS2_Spiral, 11 },
    { "P1 Power Dance 2", 0x290BE, 0x290DE, indexCPS2_Spiral, 11 },
    { "P1 Power Dance 3", 0x290DE, 0x290FE, indexCPS2_Spiral, 11 },
    { "P1 Power Dance 4", 0x290FE, 0x2911E, indexCPS2_Spiral, 11 },
    { "P1 Power Dance 5", 0x2911E, 0x2913E, indexCPS2_Spiral, 11 },
    { "P1 Speed Dance 1", 0x2913E, 0x2915E, indexCPS2_Spiral, 11 },
    { "P1 Speed Dance 2", 0x2915E, 0x2917E, indexCPS2_Spiral, 11 },
    { "P1 Speed Dance 3", 0x2917E, 0x2919E, indexCPS2_Spiral, 11 },
    { "P1 Speed Dance 4", 0x2919E, 0x291BE, indexCPS2_Spiral, 11 },
    { "P1 Speed Dance 5", 0x291BE, 0x291DE, indexCPS2_Spiral, 11 },
    { "P1 Speed Dance 6", 0x291DE, 0x291FE, indexCPS2_Spiral, 11 },
    { "P1 Metamorphosis 1", 0x2923E, 0x2925E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 2", 0x2925E, 0x2927E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 3", 0x2927E, 0x2929E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 4", 0x2929E, 0x292BE, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 5", 0x292BE, 0x292DE, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 6", 0x292DE, 0x292FE, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 7", 0x292FE, 0x2931E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 8", 0x2931E, 0x2933E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 9", 0x2933E, 0x2935E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 10", 0x2935E, 0x2937E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 11", 0x2937E, 0x2939E, indexCPS2_Spiral, 12 },
    { "P1 Metamorphosis 12", 0x2939E, 0x293BE, indexCPS2_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P2[] =
{
    { "P2", 		 0x26CBE, 0x26CDE, indexCPS2_Spiral },
    { "P2 Extras 1", 0x26CDE, 0x26CFE, indexCPS2_Spiral, 1 },
    { "P2 Extras 2", 0x26CFE, 0x26D1E, indexCPS2_Spiral, 2 },
    { "P2 Power Dance 1", 0x2941E, 0x2943E, indexCPS2_Spiral, 11 },
    { "P2 Power Dance 2", 0x2943E, 0x2945E, indexCPS2_Spiral, 11 },
    { "P2 Power Dance 3", 0x2945E, 0x2947E, indexCPS2_Spiral, 11 },
    { "P2 Power Dance 4", 0x2947E, 0x2949E, indexCPS2_Spiral, 11 },
    { "P2 Power Dance 5", 0x2949E, 0x294BE, indexCPS2_Spiral, 11 },
    { "P2 Speed Dance 1", 0x294BE, 0x294DE, indexCPS2_Spiral, 11 },
    { "P2 Speed Dance 2", 0x294DE, 0x294FE, indexCPS2_Spiral, 11 },
    { "P2 Speed Dance 3", 0x294FE, 0x2951E, indexCPS2_Spiral, 11 },
    { "P2 Speed Dance 4", 0x2951E, 0x2953E, indexCPS2_Spiral, 11 },
    { "P2 Speed Dance 5", 0x2953E, 0x2955E, indexCPS2_Spiral, 11 },
    { "P2 Speed Dance 6", 0x2955E, 0x2957E, indexCPS2_Spiral, 11 },
    { "P2 Metamorphosis 1", 0x295BE, 0x295DE, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 2", 0x295DE, 0x295FE, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 3", 0x295FE, 0x2961E, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 4", 0x2961E, 0x2963E, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 5", 0x2963E, 0x2965E, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 6", 0x2965E, 0x2967E, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 7", 0x2967E, 0x2969E, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 8", 0x2969E, 0x296BE, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 9", 0x296BE, 0x296DE, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 10", 0x296DE, 0x296FE, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 11", 0x296FE, 0x2971E, indexCPS2_Spiral, 12 },
    { "P2 Metamorphosis 12", 0x2971E, 0x2973E, indexCPS2_Spiral, 12 },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P1[] =
{
    {"P1",          0x26a3e, 0x26a5e, 0x2A },
    {"P1 Extras 1", 0x26a5e, 0x26a7e, 0x2A },
    {"P1 Extras 2", 0x26a7e, 0x26a9e, 0x2A },
    {"P1 Extras 3", 0x26a9e, 0x26abe, 0x2A },
};

const sGame_PaletteDataset COTA_A_STORM_PALETTES_P2[] =
{
    {"P2",          0x26abe, 0x26ade, 0x2A },
    {"P2 Extras 1", 0x26ade, 0x26afe, 0x2A },
    {"P2 Extras 2", 0x26afe, 0x26b1e, 0x2A },
    {"P2 Extras 3", 0x26b1e, 0x26b3e, 0x2A },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P1[] =
{
    {"Wolverine P1",    0x2713E, 0x2715E, 0x07, 0, true },
    {"P1 Claws",        0x2715E, 0x2717E, 0x07, 1 },
    {"P1 Berserker Barrage", 0x2717e, 0x2719e, 0x07, 2 },
    {"P1 ?",            0x2719e, 0x271be, 0x07, 2 },
};

const sGame_PaletteDataset COTA_A_WOLVERINE_PALETTES_P2[] =
{
    {"Wolverine P2", 0x271be, 0x271dE, 0x07, 0, true },
    {"P2 Claws", 0x271dE, 0x271fE, 0x07, 1 },
    {"P2 Berserker Barrage", 0x271fE, 0x2721E, 0x07, 2 },
    {"P2 ?", 0x2721E, 0x2723E, 0x07, 3 },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P1[] =
{
    {"P1",          0x2737e, 0x2739e, 0x1E },
    {"P1 Extras 1", 0x2739e, 0x273be, 0x1E },
    {"P1 Extras 2", 0x273be, 0x273de, 0x1e },
    {"P1 Extras 3", 0x273de, 0x273fe },
};

const sGame_PaletteDataset COTA_A_AKUMA_PALETTES_P2[] =
{
    {"P2",          0x273fe, 0x2741e, 0x1E },
    {"P2 Extras 1", 0x2741e, 0x2743e, 0x1E },
    {"P2 Extras 2", 0x2743e, 0x2745e, 0x1e },
    {"P2 Extras 3", 0x2745e, 0x2747e },
};

const sDescTreeNode COTA_A_COLOSSUS_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_P1,           ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_PALETTES_P2,           ARRAYSIZE(COTA_A_COLOSSUS_PALETTES_P2) },
};

const sDescTreeNode COTA_A_CYCLOPS_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_P1,           ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_P2,           ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_PALETTES_EXTRAS,   ARRAYSIZE(COTA_A_CYCLOPS_PALETTES_EXTRAS) },
    
};

const sDescTreeNode COTA_A_ICEMAN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P1,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P2,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_EXTRAS,   ARRAYSIZE(COTA_A_ICEMAN_PALETTES_EXTRAS) },
    
};

const sDescTreeNode COTA_A_JUGGY_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_P1,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_PALETTES_P2,           ARRAYSIZE(COTA_A_JUGGY_PALETTES_P2) },
};

const sDescTreeNode COTA_A_MAGNETO_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_P1,         ARRAYSIZE(COTA_A_MAGNETO_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_PALETTES_P2,         ARRAYSIZE(COTA_A_MAGNETO_PALETTES_P2) },
};

const sDescTreeNode COTA_A_OMEGARED_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_P1,        ARRAYSIZE(COTA_A_OMEGARED_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_PALETTES_P2,        ARRAYSIZE(COTA_A_OMEGARED_PALETTES_P2) },
};

const sDescTreeNode COTA_A_PSYLOCKE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_P1,        ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_PALETTES_P2,        ARRAYSIZE(COTA_A_PSYLOCKE_PALETTES_P2) },
};

const sDescTreeNode COTA_A_SENTINEL_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_P1,        ARRAYSIZE(COTA_A_SENTINEL_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_PALETTES_P2,        ARRAYSIZE(COTA_A_SENTINEL_PALETTES_P2) },
};

const sDescTreeNode COTA_A_SILSAM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_P1,        ARRAYSIZE(COTA_A_SILSAM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_PALETTES_P2,        ARRAYSIZE(COTA_A_SILSAM_PALETTES_P2) },
};

const sDescTreeNode COTA_A_SPIRAL_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_P1,        ARRAYSIZE(COTA_A_SPIRAL_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_PALETTES_P2,        ARRAYSIZE(COTA_A_SPIRAL_PALETTES_P2) },
};

const sDescTreeNode COTA_A_STORM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_P1,        ARRAYSIZE(COTA_A_STORM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_STORM_PALETTES_P2,        ARRAYSIZE(COTA_A_STORM_PALETTES_P2) },
};

const sDescTreeNode COTA_A_WOLVERINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_P1,       ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_PALETTES_P2,       ARRAYSIZE(COTA_A_WOLVERINE_PALETTES_P2) },
};

const sDescTreeNode COTA_A_AKUMA_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_P1,       ARRAYSIZE(COTA_A_AKUMA_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_PALETTES_P2,       ARRAYSIZE(COTA_A_AKUMA_PALETTES_P2) },
};

const UINT8 COTA_A_UNITSORT[COTA_A_NUMUNIT + 1] = // Plus 1 for the extra palettes
{
    indexCOTAColossus,
    indexCOTACyclops,
    indexCOTAIceman,
    indexCOTAJuggernaut,
    indexCOTAMagneto,
    indexCOTAOmegaRed,
    indexCOTAPsylocke,
    indexCOTASentinel,
    indexCOTASilverSamurai,
    indexCOTASpiral,
    indexCOTAStorm,
    indexCOTAWolverine,
    indexCOTAAkuma,

    COTA_A_EXTRALOC // Extra palettes
};

const sDescTreeNode COTA_UNITS[COTA_A_NUMUNIT] =
{
    { "Colossus",                  DESC_NODETYPE_TREE, (void*)COTA_A_COLOSSUS_COLLECTION,         ARRAYSIZE(COTA_A_COLOSSUS_COLLECTION) },
    { "Cyclops",                   DESC_NODETYPE_TREE, (void*)COTA_A_CYCLOPS_COLLECTION,         ARRAYSIZE(COTA_A_CYCLOPS_COLLECTION) },
    { "Iceman",                    DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_COLLECTION,         ARRAYSIZE(COTA_A_ICEMAN_COLLECTION) },
    { "Juggernaut",                DESC_NODETYPE_TREE, (void*)COTA_A_JUGGY_COLLECTION,            ARRAYSIZE(COTA_A_JUGGY_COLLECTION) },
    { "Magneto",                   DESC_NODETYPE_TREE, (void*)COTA_A_MAGNETO_COLLECTION,          ARRAYSIZE(COTA_A_MAGNETO_COLLECTION) },
    { "Omega Red",                 DESC_NODETYPE_TREE, (void*)COTA_A_OMEGARED_COLLECTION,         ARRAYSIZE(COTA_A_OMEGARED_COLLECTION) },
    { "Psylocke",                  DESC_NODETYPE_TREE, (void*)COTA_A_PSYLOCKE_COLLECTION,         ARRAYSIZE(COTA_A_PSYLOCKE_COLLECTION) },
    { "Sentinel",                  DESC_NODETYPE_TREE, (void*)COTA_A_SENTINEL_COLLECTION,         ARRAYSIZE(COTA_A_SENTINEL_COLLECTION) },
    { "Silver Samurai",            DESC_NODETYPE_TREE, (void*)COTA_A_SILSAM_COLLECTION,         ARRAYSIZE(COTA_A_SILSAM_COLLECTION) },
    { "Spiral",                    DESC_NODETYPE_TREE, (void*)COTA_A_SPIRAL_COLLECTION,         ARRAYSIZE(COTA_A_SPIRAL_COLLECTION) },
    { "Storm",                     DESC_NODETYPE_TREE, (void*)COTA_A_STORM_COLLECTION,         ARRAYSIZE(COTA_A_STORM_COLLECTION) },
    { "Wolverine",                 DESC_NODETYPE_TREE, (void*)COTA_A_WOLVERINE_COLLECTION,        ARRAYSIZE(COTA_A_WOLVERINE_COLLECTION) },
    { "Akuma",                     DESC_NODETYPE_TREE, (void*)COTA_A_AKUMA_COLLECTION,         ARRAYSIZE(COTA_A_AKUMA_COLLECTION) },
};


// We extend this array with data groveled from the cotae.txt extensible extras file, if any.
const stExtraDef COTA_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
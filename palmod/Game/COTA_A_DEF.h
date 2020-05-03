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
    {"P1",          0x2683e, 0x2685e, 0x32 },
    {"P1 Extras 1", 0x2685e, 0x2687e, },
    {"P1 Extras 2", 0x2687e, 0x2689e, },
    {"P1 Extras 3", 0x2689e, 0x268be, },
};

const sGame_PaletteDataset COTA_A_COLOSSUS_PALETTES_P2[] =
{
    {"P2",          0x268be, 0x268DE, 0x32 },
    {"P2 Extras 1", 0x268de, 0x268Fe },
    {"P2 Extras 2", 0x268fe, 0x2691e },
    {"P2 Extras 3", 0x2691e, 0x2693e },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P1[] =
{
    {"P1",          0x2693e, 0x2695e, 0x06 },
    {"P1 Extras 1", 0x2695e, 0x2697e, 0x06, 0x0 },
    {"P1 Extras 2", 0x2697e, 0x2699e, 0x06, 0x1 },
    {"P1 Extras 3", 0x2699e, 0x269be, 0x06, 0x2 },
};

const sGame_PaletteDataset COTA_A_CYCLOPS_PALETTES_P2[] =
{
    {"P2",          0x269be, 0x269de, 0x06 },
    {"P2 Extras 1", 0x269de, 0x269fe, 0x06, 0x0 },
    {"P2 Extras 2", 0x269fe, 0x26a1e, 0x06, 0x1 },
    {"P2 Extras 3", 0x26a1e, 0x26a3e, 0x06, 0x2 },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P1[] =
{
    {"P1",          0x26b3e, 0x26b5e, 0x09 },
    {"P1 Extras 1", 0x26b5e, 0x26b7e, 0x09 },
    {"P1 Extras 2", 0x26b7e, 0x26b9e, 0x09 },
    {"P1 Extras 3", 0x26b9e, 0x26bbe, 0x09 },
};

const sGame_PaletteDataset COTA_A_ICEMAN_PALETTES_P2[] =
{
    {"P2",          0x26bbe, 0x26bde, 0x09 },
    {"P2 Extras 1", 0x26bde, 0x26bfe, 0x09 },
    {"P2 Extras 2", 0x26bfe, 0x26c1e, 0x09 },
    {"P2 Extras 3", 0x26c1e, 0x26c3e, 0x09 },
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
    {"P1",          0x26d3e, 0x26d5e, 0x30 },
    {"P1 Extras 1", 0x26d5e, 0x26d7e, 0x30, 1 },
    {"P1 Extras 2", 0x26d7e, 0x26d9e, 0x30, 2 },
    {"P1 Extras 3", 0x26d9e, 0x26dbe, 0x30, 3 },
};

const sGame_PaletteDataset COTA_A_OMEGARED_PALETTES_P2[] =
{
    {"P2",          0x26dbe, 0x26dde, 0x30 },
    {"P2 Extras 1", 0x26dde, 0x26dfe, 0x30, 1 },
    {"P2 Extras 2", 0x26dfe, 0x26e1e, 0x30, 2 },
    {"P2 Extras 3", 0x26e1e, 0x26e3e, 0x30, 3 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P1[] =
{
    {"Psylocke P1", 0x2673E, 0x2675E, 0x08 },
    {"P1 Extras 1", 0x2675E, 0x2677E, 0x08, 1 },
    {"P1 Extras 2", 0x2677E, 0x2679E, 0x08, 0 },
    {"P1 Extras 3", 0x2679E, 0x267BE, 0x08, 3 },
};

const sGame_PaletteDataset COTA_A_PSYLOCKE_PALETTES_P2[] =
{
    {"Psylocke P2", 0x267BE, 0x267DE, 0x08 },
    {"P2 Extras 1", 0x267DE, 0x267FE, 0x08, 1 },
    {"P2 Extras 2", 0x267FE, 0x2681E, 0x08, 0 },
    {"P2 Extras 3", 0x2681E, 0x2683E, 0x08, 2 },
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
    {"P1", 0x2727e, 0x2729e, 0x2F },
    {"P1 Extras 1", 0x2729e, 0x272be, 0x2F },
    {"P1 Extras 2", 0x272be, 0x272de },
    {"P1 Extras 3", 0x272de, 0x272fe },
};

const sGame_PaletteDataset COTA_A_SILSAM_PALETTES_P2[] =
{
    {"P2", 0x272fe, 0x2731e, 0x2F },
    {"P2 Extras 1", 0x2731e, 0x2733e, 0x2F },
    {"P2 Extras 2", 0x2733e, 0x2735e },
    {"P2 Extras 3", 0x2735e, 0x2737e },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P1[] =
{
    {"P1",          0x26c3e, 0x26c5e, 0x31 },
    {"P1 Extras 1", 0x26c5e, 0x26c7e, 0x31, 1 },
    {"P1 Extras 2", 0x26c7e, 0x26c9e, 0x31, 2 },
    {"P1 Extras 3", 0x26c9e, 0x26cbe, 0x31, 3 },
};

const sGame_PaletteDataset COTA_A_SPIRAL_PALETTES_P2[] =
{
    {"P2",          0x26cbe, 0x26cde, 0x31 },
    {"P2 Extras 1", 0x26cde, 0x26cfe, 0x31, 1 },
    {"P2 Extras 2", 0x26cfe, 0x26d1e, 0x31, 2 },
    {"P2 Extras 3", 0x26d1e, 0x26d3e, 0x31, 3 },
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
};

const sDescTreeNode COTA_A_ICEMAN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P1,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)COTA_A_ICEMAN_PALETTES_P2,           ARRAYSIZE(COTA_A_ICEMAN_PALETTES_P2) },
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

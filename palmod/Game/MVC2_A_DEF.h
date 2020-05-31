#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MVC2_A_BLACKHEART_PALETTES. 
// * Update every array using MVC2_A_NUMUNIT below
// That should be it.  Good luck.

enum SupportedMVC2_A_PaletteListIndex
{
    indexMVC2ARyu,
    indexMVC2AZangief,
    indexMVC2AGuile,
    indexMVC2AMorrigan,
    indexMVC2AAnakaris,
    indexMVC2AStrider,
    indexMVC2ACyclops,
    indexMVC2AWolverine,
    indexMVC2APsylocke,
    indexMVC2AIceman,
    indexMVC2ARogue,
    indexMVC2ACaptainAmerica,
    indexMVC2ASpiderman,
    indexMVC2AHulk,
    indexMVC2AVenom,
    indexMVC2ADrDoom,
    indexMVC2ATron,
    indexMVC2AJill,
    indexMVC2AHayato,
    indexMVC2ARuby,
    indexMVC2ASonson,
    indexMVC2AAmingo,
    indexMVC2AMarrow,
    indexMVC2ACable,
    indexMVC2AAbyss1,
    indexMVC2AAbyss2,
    indexMVC2AAbyss3,
    indexMVC2AChunLi,
    indexMVC2AMegaman,
    indexMVC2ARoll,
    indexMVC2AAkuma,
    indexMVC2ABBHood,
    indexMVC2AFelicia,
    indexMVC2ANash,
    indexMVC2ASakura,
    indexMVC2ADan,
    indexMVC2ACammy,
    indexMVC2ADhalsim,
    indexMVC2MBison,
    indexMVC2AKen,
    indexMVC2AGambit,
    indexMVC2AJuggernaut,
    indexMVC2AStorm,
    indexMVC2ASabretooth,
    indexMVC2AMagneto,
    indexMVC2AShuma,
    indexMVC2AWarMachine,
    indexMVC2ASilverSamurai,
    indexMVC2AOmegaRed,
    indexMVC2ASpiral,
    indexMVC2AColossus,
    indexMVC2AIronMan,
    indexMVC2ASentinel,
    indexMVC2ABlackheart,
    indexMVC2AThanos,
    indexMVC2AJin,
    indexMVC2ACaptainCommando,
    indexMVC2ABonerine,
    indexMVC2AServbot,
    indexMVC2ALast
};

constexpr auto MVC2_A_NUMUNIT = indexMVC2ALast;

#define MVC2_A_EXTRALOC MVC2_A_NUMUNIT

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_LP[] =
{
    { "Main Color LP", 0x260a9c2, 0x260a9e2, indexCPS2_Ryu, 0 },
    { "(02) Hadouken // Shinkuu Hadouken", 0x260a9e2, 0x260aa02, indexCPS2_Ryu, 1 },
    { "(03) Shoryuken", 0x260aa02, 0x260aa22, indexCPS2_Ken, 2 },
    { "(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260aa22, 0x260aa42, indexCPS2_Ryu, 3 },
    { "(05) Not Used", 0x260aa42, 0x260aa62, indexCPS2_Ryu, 4 },
    { "(06) Not Used", 0x260aa62, 0x260aa82, indexCPS2_Ryu, 5 },
    { "(07) Not Used", 0x260aa82, 0x260aaa2, indexCPS2_Ryu, 6 },
    { "(08) Not Used", 0x260aaa2, 0x260aac2, indexCPS2_Ryu, 7 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_LK[] =
{
    { "Main Color LK", 0x260aac2, 0x260aae2, indexCPS2_Ryu, 0 },
    { "(02) Hadouken // Shinkuu Hadouken", 0x260aae2, 0x260ab02, indexCPS2_Ryu, 1 },
    { "(03) Shoryuken", 0x260ab02, 0x260ab22, indexCPS2_Ken, 2 },
    { "(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ab22, 0x260ab42, indexCPS2_Ryu, 3 },
    { "(05) Not Used", 0x260ab42, 0x260ab62, indexCPS2_Ryu, 4 },
    { "(06) Not Used", 0x260ab62, 0x260ab82, indexCPS2_Ryu, 5 },
    { "(07) Not Used", 0x260ab82, 0x260aba2, indexCPS2_Ryu, 6 },
    { "(08) Not Used", 0x260aba2, 0x260abc2, indexCPS2_Ryu, 7 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_HP[] =
{
    { "Main Color HP", 0x260abc2, 0x260abe2, indexCPS2_Ryu, 0 },
    { "(02) Hadouken // Shinkuu Hadouken", 0x260abe2, 0x260ac02, indexCPS2_Ryu, 1 },
    { "(03) Shoryuken", 0x260ac02, 0x260ac22, indexCPS2_Ken, 2 },
    { "(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ac22, 0x260ac42, indexCPS2_Ryu, 3 },
    { "(05) Not Used", 0x260ac42, 0x260ac62, indexCPS2_Ryu, 4 },
    { "(06) Not Used", 0x260ac62, 0x260ac82, indexCPS2_Ryu, 5 },
    { "(07) Not Used", 0x260ac82, 0x260aca2, indexCPS2_Ryu, 6 },
    { "(08) Not Used", 0x260aca2, 0x260acc2, indexCPS2_Ryu, 7 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_HK[] =
{
    { "Main Color HK", 0x260acc2, 0x260ace2, indexCPS2_Ryu, 0 },
    { "(02) Hadouken // Shinkuu Hadouken", 0x260ace2, 0x260ad02, indexCPS2_Ryu, 1 },
    { "(03) Shoryuken", 0x260ad02, 0x260ad22, indexCPS2_Ken, 2 },
    { "(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ad22, 0x260ad42, indexCPS2_Ryu, 3 },
    { "(05) Not Used", 0x260ad42, 0x260ad62, indexCPS2_Ryu, 4 },
    { "(06) Not Used", 0x260ad62, 0x260ad82, indexCPS2_Ryu, 5 },
    { "(07) Not Used", 0x260ad82, 0x260ada2, indexCPS2_Ryu, 6 },
    { "(08) Not Used", 0x260ada2, 0x260adc2, indexCPS2_Ryu, 7 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_A1[] =
{
    { "Main Color A1", 0x260adc2, 0x260ade2, indexCPS2_Ryu, 0 },
    { "(02) Hadouken // Shinkuu Hadouken", 0x260ade2, 0x260ae02, indexCPS2_Ryu, 1 },
    { "(03) Shoryuken", 0x260ae02, 0x260ae22, indexCPS2_Ken, 2 },
    { "(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ae22, 0x260ae42, indexCPS2_Ryu, 3 },
    { "(05) Not Used", 0x260ae42, 0x260ae62, indexCPS2_Ryu, 4 },
    { "(06) Not Used", 0x260ae62, 0x260ae82, indexCPS2_Ryu, 5 },
    { "(07) Not Used", 0x260ae82, 0x260aea2, indexCPS2_Ryu, 6 },
    { "(08) Not Used", 0x260aea2, 0x260aec2, indexCPS2_Ryu, 7 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_A2[] =
{
    { "Main Color A2", 0x260aec2, 0x260aee2, indexCPS2_Ryu, 0 },
    { "(02) Hadouken // Shinkuu Hadouken", 0x260aee2, 0x260af02, indexCPS2_Ryu, 1 },
    { "(03) Shoryuken", 0x260af02, 0x260af22, indexCPS2_Ken, 2 },
    { "(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260af22, 0x260af42, indexCPS2_Ryu, 3 },
    { "(05) Not Used", 0x260af42, 0x260af62, indexCPS2_Ryu, 4 },
    { "(06) Not Used", 0x260af62, 0x260af82, indexCPS2_Ryu, 5 },
    { "(07) Not Used", 0x260af82, 0x260afa2, indexCPS2_Ryu, 6 },
    { "(08) Not Used", 0x260afa2, 0x260afc2, indexCPS2_Ryu, 7 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x260afc2, 0x260afe2, indexCPS2_Ryu, 0 },
    { "Burning Light", 0x260afe2, 0x260b002, indexCPS2_Ryu, 0 },
    { "Shocked Dark", 0x260b002, 0x260b022, indexCPS2_Ryu, 0 },
    { "Shocked Light", 0x260b022, 0x260b042, indexCPS2_Ryu, 0 },
    { "Dark Burning Dark", 0x260b042, 0x260b062, indexCPS2_Ryu, 0 },
    { "Dark Burning Light", 0x260b062, 0x260b082, indexCPS2_Ryu, 0 },
    { "Kinetic Charge Dark", 0x260b082, 0x260b0a2, indexCPS2_Ryu, 0 },
    { "Kinetic Charge Light", 0x260b0a2, 0x260b0c2, indexCPS2_Ryu, 0 },
};

const sDescTreeNode MVC2_A_RYU_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_LP, ARRAYSIZE(MVC2_A_RYU_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_LK, ARRAYSIZE(MVC2_A_RYU_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_HP, ARRAYSIZE(MVC2_A_RYU_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_HK, ARRAYSIZE(MVC2_A_RYU_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_A1, ARRAYSIZE(MVC2_A_RYU_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_A2, ARRAYSIZE(MVC2_A_RYU_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_SHARED, ARRAYSIZE(MVC2_A_RYU_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_LP[] =
{
    { "Main Color LP", 0x26e2242, 0x26e2262, indexCPS2_Zangief, 0 },
    { "(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2262, 0x26e2282, indexCPS2_Zangief, 1 },
    { "(03) Not Used", 0x26e2282, 0x26e22a2, indexCPS2_Zangief, 2 },
    { "(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e22a2, 0x26e22c2, indexCPS2_Zangief, 3 },
    { "(05) Not Used", 0x26e22c2, 0x26e22e2, indexCPS2_Zangief, 4 },
    { "(06) Not Used", 0x26e22e2, 0x26e2302, indexCPS2_Zangief, 5 },
    { "(07) Not Used", 0x26e2302, 0x26e2322, indexCPS2_Zangief, 6 },
    { "(08) Not Used", 0x26e2322, 0x26e2342, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_LK[] =
{
    { "Main Color LK", 0x26e2342, 0x26e2362, indexCPS2_Zangief, 0 },
    { "(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2362, 0x26e2382, indexCPS2_Zangief, 1 },
    { "(03) Not Used", 0x26e2382, 0x26e23a2, indexCPS2_Zangief, 2 },
    { "(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e23a2, 0x26e23c2, indexCPS2_Zangief, 3 },
    { "(05) Not Used", 0x26e23c2, 0x26e23e2, indexCPS2_Zangief, 4 },
    { "(06) Not Used", 0x26e23e2, 0x26e2402, indexCPS2_Zangief, 5 },
    { "(07) Not Used", 0x26e2402, 0x26e2422, indexCPS2_Zangief, 6 },
    { "(08) Not Used", 0x26e2422, 0x26e2442, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_HP[] =
{
    { "Main Color HP", 0x26e2442, 0x26e2462, indexCPS2_Zangief, 0 },
    { "(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2462, 0x26e2482, indexCPS2_Zangief, 1 },
    { "(03) Not Used", 0x26e2482, 0x26e24a2, indexCPS2_Zangief, 2 },
    { "(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e24a2, 0x26e24c2, indexCPS2_Zangief, 3 },
    { "(05) Not Used", 0x26e24c2, 0x26e24e2, indexCPS2_Zangief, 4 },
    { "(06) Not Used", 0x26e24e2, 0x26e2502, indexCPS2_Zangief, 5 },
    { "(07) Not Used", 0x26e2502, 0x26e2522, indexCPS2_Zangief, 6 },
    { "(08) Not Used", 0x26e2522, 0x26e2542, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_HK[] =
{
    { "Main Color HK", 0x26e2542, 0x26e2562, indexCPS2_Zangief, 0 },
    { "(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2562, 0x26e2582, indexCPS2_Zangief, 1 },
    { "(03) Not Used", 0x26e2582, 0x26e25a2, indexCPS2_Zangief, 2 },
    { "(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e25a2, 0x26e25c2, indexCPS2_Zangief, 3 },
    { "(05) Not Used", 0x26e25c2, 0x26e25e2, indexCPS2_Zangief, 4 },
    { "(06) Not Used", 0x26e25e2, 0x26e2602, indexCPS2_Zangief, 5 },
    { "(07) Not Used", 0x26e2602, 0x26e2622, indexCPS2_Zangief, 6 },
    { "(08) Not Used", 0x26e2622, 0x26e2642, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_A1[] =
{
    { "Main Color A1", 0x26e2642, 0x26e2662, indexCPS2_Zangief, 0 },
    { "(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2662, 0x26e2682, indexCPS2_Zangief, 1 },
    { "(03) Not Used", 0x26e2682, 0x26e26a2, indexCPS2_Zangief, 2 },
    { "(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e26a2, 0x26e26c2, indexCPS2_Zangief, 3 },
    { "(05) Not Used", 0x26e26c2, 0x26e26e2, indexCPS2_Zangief, 4 },
    { "(06) Not Used", 0x26e26e2, 0x26e2702, indexCPS2_Zangief, 5 },
    { "(07) Not Used", 0x26e2702, 0x26e2722, indexCPS2_Zangief, 6 },
    { "(08) Not Used", 0x26e2722, 0x26e2742, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_A2[] =
{
    { "Main Color A2", 0x26e2742, 0x26e2762, indexCPS2_Zangief, 0 },
    { "(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2762, 0x26e2782, indexCPS2_Zangief, 1 },
    { "(03) Not Used", 0x26e2782, 0x26e27a2, indexCPS2_Zangief, 2 },
    { "(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e27a2, 0x26e27c2, indexCPS2_Zangief, 3 },
    { "(05) Not Used", 0x26e27c2, 0x26e27e2, indexCPS2_Zangief, 4 },
    { "(06) Not Used", 0x26e27e2, 0x26e2802, indexCPS2_Zangief, 5 },
    { "(07) Not Used", 0x26e2802, 0x26e2822, indexCPS2_Zangief, 6 },
    { "(08) Not Used", 0x26e2822, 0x26e2842, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x26e2842, 0x26e2862, indexCPS2_Zangief, 0 },
    { "Burning Light", 0x26e2862, 0x26e2882, indexCPS2_Zangief, 0 },
    { "Shocked Dark", 0x26e2882, 0x26e28a2, indexCPS2_Zangief, 0 },
    { "Shocked Light", 0x26e28a2, 0x26e28c2, indexCPS2_Zangief, 0 },
    { "Dark Burning Dark", 0x26e28c2, 0x26e28e2, indexCPS2_Zangief, 0 },
    { "Dark Burning Light", 0x26e28e2, 0x26e2902, indexCPS2_Zangief, 0 },
    { "Kinetic Charge Dark", 0x26e2902, 0x26e2922, indexCPS2_Zangief, 0 },
    { "Kinetic Charge Light", 0x26e2922, 0x26e2942, indexCPS2_Zangief, 0 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Unused: Extra 0x9", 0x26e2942, 0x26e2962 },
    { /* 0x0a */ "Not Used", 0x26e2962, 0x26e2982 },
    { /* 0x0b */ "Not Used", 0x26e2982, 0x26e29a2 },
    { /* 0x0c */ "Not Used", 0x26e29a2, 0x26e29c2 },
    { /* 0x0d */ "Not Used", 0x26e29c2, 0x26e29e2 },
    { /* 0x0e */ "Not Used", 0x26e29e2, 0x26e2a02 },
    { /* 0x0f */ "Not Used", 0x26e2a02, 0x26e2a22 },
    { /* 0x10 */ "Not Used", 0x26e2a22, 0x26e2a42 },
    { /* 0x11 */ "LP - Mecha Gief", 0x26e2a42, 0x26e2a62, indexCPS2_Zangief, 11 },
    { /* 0x12 */ "LK - Mecha Gief", 0x26e2a62, 0x26e2a82, indexCPS2_Zangief, 11 },
    { /* 0x13 */ "HP - Mecha Gief", 0x26e2a82, 0x26e2aa2, indexCPS2_Zangief, 11 },
    { /* 0x14 */ "HK - Mecha Gief", 0x26e2aa2, 0x26e2ac2, indexCPS2_Zangief, 11 },
    { /* 0x15 */ "A1 - Mecha Gief", 0x26e2ac2, 0x26e2ae2, indexCPS2_Zangief, 11 },
    { /* 0x16 */ "A2 - Mecha Gief", 0x26e2ae2, 0x26e2b02, indexCPS2_Zangief, 11 },
    { /* 0x17 */ "(U)FAB 15perc Effect frame - LP Color", 0x26e2b02, 0x26e2b22, indexCPS2_Zangief, 12 },
    { /* 0x18 */ "(U)FAB 35perc Effect frame - LP Color", 0x26e2b22, 0x26e2b42, indexCPS2_Zangief, 12 },
    { /* 0x19 */ "(U)FAB 75perc Effect frame - LP Color", 0x26e2b42, 0x26e2b62, indexCPS2_Zangief, 12 },
    { /* 0x1a */ "(U)FAB 15perc Effect frame - LK Color", 0x26e2b62, 0x26e2b82, indexCPS2_Zangief, 12 },
    { /* 0x1b */ "(U)FAB 35perc Effect frame - LK Color", 0x26e2b82, 0x26e2ba2, indexCPS2_Zangief, 12 },
    { /* 0x1c */ "(U)FAB 75perc Effect frame - LK Color", 0x26e2ba2, 0x26e2bc2, indexCPS2_Zangief, 12 },
    { /* 0x1d */ "(U)FAB 15perc Effect frame - HP Color", 0x26e2bc2, 0x26e2be2, indexCPS2_Zangief, 12 },
    { /* 0x1e */ "(U)FAB 35perc Effect frame - HP Color", 0x26e2be2, 0x26e2c02, indexCPS2_Zangief, 12 },
    { /* 0x1f */ "(U)FAB 75perc Effect frame - HP Color", 0x26e2c02, 0x26e2c22, indexCPS2_Zangief, 12 },
    { /* 0x20 */ "(U)FAB 15perc Effect frame - HK Color", 0x26e2c22, 0x26e2c42, indexCPS2_Zangief, 12 },
    { /* 0x21 */ "(U)FAB 35perc Effect frame - HK Color", 0x26e2c42, 0x26e2c62, indexCPS2_Zangief, 12 },
    { /* 0x22 */ "(U)FAB 75perc Effect frame - HK Color", 0x26e2c62, 0x26e2c82, indexCPS2_Zangief, 12 },
    { /* 0x23 */ "(U)FAB 15perc Effect frame - A1 Color", 0x26e2c82, 0x26e2ca2, indexCPS2_Zangief, 12 },
    { /* 0x24 */ "(U)FAB 35perc Effect frame - A1 Color", 0x26e2ca2, 0x26e2cc2, indexCPS2_Zangief, 12 },
    { /* 0x25 */ "(U)FAB 75perc Effect frame - A1 Color", 0x26e2cc2, 0x26e2ce2, indexCPS2_Zangief, 12 },
    { /* 0x26 */ "(U)FAB 15perc Effect frame - A2 Color", 0x26e2ce2, 0x26e2d02, indexCPS2_Zangief, 12 },
    { /* 0x27 */ "(U)FAB 35perc Effect frame - A2 Color", 0x26e2d02, 0x26e2d22, indexCPS2_Zangief, 12 },
    { /* 0x28 */ "(U)FAB 75perc Effect frame - A2 Color", 0x26e2d22, 0x26e2d42, indexCPS2_Zangief, 12 },
    { /* 0x29 */ "(U)FAB 15perc Effect frame - LP Mecha Gief", 0x26e2d42, 0x26e2d62, indexCPS2_Zangief, 12 },
    { /* 0x2a */ "(U)FAB 35perc Effect frame - LP Mecha Gief", 0x26e2d62, 0x26e2d82, indexCPS2_Zangief, 12 },
    { /* 0x2b */ "(U)FAB 75perc Effect frame - LP Mecha Gief", 0x26e2d82, 0x26e2da2, indexCPS2_Zangief, 12 },
    { /* 0x2c */ "(U)FAB 15perc Effect frame - LK Mecha Gief", 0x26e2da2, 0x26e2dc2, indexCPS2_Zangief, 12 },
    { /* 0x2d */ "(U)FAB 35perc Effect frame - LK Mecha Gief", 0x26e2dc2, 0x26e2de2, indexCPS2_Zangief, 12 },
    { /* 0x2e */ "(U)FAB 75perc Effect frame - LK Mecha Gief", 0x26e2de2, 0x26e2e02, indexCPS2_Zangief, 12 },
    { /* 0x2f */ "(U)FAB 15perc Effect frame - HP Mecha Gief", 0x26e2e02, 0x26e2e22, indexCPS2_Zangief, 12 },
    { /* 0x30 */ "(U)FAB 35perc Effect frame - HP Mecha Gief", 0x26e2e22, 0x26e2e42, indexCPS2_Zangief, 12 },
    { /* 0x31 */ "(U)FAB 75perc Effect frame - HP Mecha Gief", 0x26e2e42, 0x26e2e62, indexCPS2_Zangief, 12 },
    { /* 0x32 */ "(U)FAB 15perc Effect frame - HK Mecha Gief", 0x26e2e62, 0x26e2e82, indexCPS2_Zangief, 12 },
    { /* 0x33 */ "(U)FAB 35perc Effect frame - HK Mecha Gief", 0x26e2e82, 0x26e2ea2, indexCPS2_Zangief, 12 },
    { /* 0x34 */ "(U)FAB 75perc Effect frame - HK Mecha Gief", 0x26e2ea2, 0x26e2ec2, indexCPS2_Zangief, 12 },
    { /* 0x35 */ "(U)FAB 15perc Effect frame - A1 Mecha Gief", 0x26e2ec2, 0x26e2ee2, indexCPS2_Zangief, 12 },
    { /* 0x36 */ "(U)FAB 35perc Effect frame - A1 Mecha Gief", 0x26e2ee2, 0x26e2f02, indexCPS2_Zangief, 12 },
    { /* 0x37 */ "(U)FAB 75perc Effect frame - A1 Mecha Gief", 0x26e2f02, 0x26e2f22, indexCPS2_Zangief, 12 },
    { /* 0x38 */ "(U)FAB 15perc Effect frame - A2 Mecha Gief", 0x26e2f22, 0x26e2f42, indexCPS2_Zangief, 12 },
    { /* 0x39 */ "(U)FAB 35perc Effect frame - A2 Mecha Gief", 0x26e2f42, 0x26e2f62, indexCPS2_Zangief, 12 },
    { /* 0x3a */ "(U)FAB 75perc Effect frame - A2 Mecha Gief", 0x26e2f62, 0x26e2f82, indexCPS2_Zangief, 12 },
};

const sDescTreeNode MVC2_A_ZANGIEF_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_LP, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_LK, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_HP, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_HK, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_A1, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_A2, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_LP[] =
{
    { "Main Color LP", 0x2775162, 0x2775182, indexCPS2_Guile, 0 },
    { "(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775182, 0x27751a2, indexCPS2_Guile, 1 },
    { "(03) Not used", 0x27751a2, 0x27751c2, indexCPS2_Guile, 2 },
    { "(04) Not used", 0x27751c2, 0x27751e2, indexCPS2_Guile, 3 },
    { "(05) Not used", 0x27751e2, 0x2775202, indexCPS2_Guile, 4 },
    { "(06) Not used", 0x2775202, 0x2775222, indexCPS2_Guile, 5 },
    { "(07) Not used", 0x2775222, 0x2775242, indexCPS2_Guile, 6 },
    { "(08) Not used", 0x2775242, 0x2775262, indexCPS2_Guile, 7 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_LK[] =
{
    { "Main Color LK", 0x2775262, 0x2775282, indexCPS2_Guile, 0 },
    { "(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775282, 0x27752a2, indexCPS2_Guile, 1 },
    { "(03) Not used", 0x27752a2, 0x27752c2, indexCPS2_Guile, 2 },
    { "(04) Not used", 0x27752c2, 0x27752e2, indexCPS2_Guile, 3 },
    { "(05) Not used", 0x27752e2, 0x2775302, indexCPS2_Guile, 4 },
    { "(06) Not used", 0x2775302, 0x2775322, indexCPS2_Guile, 5 },
    { "(07) Not used", 0x2775322, 0x2775342, indexCPS2_Guile, 6 },
    { "(08) Not used", 0x2775342, 0x2775362, indexCPS2_Guile, 7 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_HP[] =
{
    { "Main Color HP", 0x2775362, 0x2775382, indexCPS2_Guile, 0 },
    { "(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775382, 0x27753a2, indexCPS2_Guile, 1 },
    { "(03) Not used", 0x27753a2, 0x27753c2, indexCPS2_Guile, 2 },
    { "(04) Not used", 0x27753c2, 0x27753e2, indexCPS2_Guile, 3 },
    { "(05) Not used", 0x27753e2, 0x2775402, indexCPS2_Guile, 4 },
    { "(06) Not used", 0x2775402, 0x2775422, indexCPS2_Guile, 5 },
    { "(07) Not used", 0x2775422, 0x2775442, indexCPS2_Guile, 6 },
    { "(08) Not used", 0x2775442, 0x2775462, indexCPS2_Guile, 7 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_HK[] =
{
    { "Main Color HK", 0x2775462, 0x2775482, indexCPS2_Guile, 0 },
    { "(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775482, 0x27754a2, indexCPS2_Guile, 1 },
    { "(03) Not used", 0x27754a2, 0x27754c2, indexCPS2_Guile, 2 },
    { "(04) Not used", 0x27754c2, 0x27754e2, indexCPS2_Guile, 3 },
    { "(05) Not used", 0x27754e2, 0x2775502, indexCPS2_Guile, 4 },
    { "(06) Not used", 0x2775502, 0x2775522, indexCPS2_Guile, 5 },
    { "(07) Not used", 0x2775522, 0x2775542, indexCPS2_Guile, 6 },
    { "(08) Not used", 0x2775542, 0x2775562, indexCPS2_Guile, 7 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_A1[] =
{
    { "Main Color A1", 0x2775562, 0x2775582, indexCPS2_Guile, 0 },
    { "(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775582, 0x27755a2, indexCPS2_Guile, 1 },
    { "(03) Not used", 0x27755a2, 0x27755c2, indexCPS2_Guile, 2 },
    { "(04) Not used", 0x27755c2, 0x27755e2, indexCPS2_Guile, 3 },
    { "(05) Not used", 0x27755e2, 0x2775602, indexCPS2_Guile, 4 },
    { "(06) Not used", 0x2775602, 0x2775622, indexCPS2_Guile, 5 },
    { "(07) Not used", 0x2775622, 0x2775642, indexCPS2_Guile, 6 },
    { "(08) Not used", 0x2775642, 0x2775662, indexCPS2_Guile, 7 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_A2[] =
{
    { "Main Color A2", 0x2775662, 0x2775682, indexCPS2_Guile, 0 },
    { "(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775682, 0x27756a2, indexCPS2_Guile, 1 },
    { "(03) Not used", 0x27756a2, 0x27756c2, indexCPS2_Guile, 2 },
    { "(04) Not used", 0x27756c2, 0x27756e2, indexCPS2_Guile, 3 },
    { "(05) Not used", 0x27756e2, 0x2775702, indexCPS2_Guile, 4 },
    { "(06) Not used", 0x2775702, 0x2775722, indexCPS2_Guile, 5 },
    { "(07) Not used", 0x2775722, 0x2775742, indexCPS2_Guile, 6 },
    { "(08) Not used", 0x2775742, 0x2775762, indexCPS2_Guile, 7 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2775762, 0x2775782, indexCPS2_Guile, 0 },
    { "Burning Light", 0x2775782, 0x27757a2, indexCPS2_Guile, 0 },
    { "Shocked Dark", 0x27757a2, 0x27757c2, indexCPS2_Guile, 0 },
    { "Shocked Light", 0x27757c2, 0x27757e2, indexCPS2_Guile, 0 },
    { "Dark Burning Dark", 0x27757e2, 0x2775802, indexCPS2_Guile, 0 },
    { "Dark Burning Light", 0x2775802, 0x2775822, indexCPS2_Guile, 0 },
    { "Kinetic Charge Dark", 0x2775822, 0x2775842, indexCPS2_Guile, 0 },
    { "Kinetic Charge Light", 0x2775842, 0x2775862, indexCPS2_Guile, 0 },
};

const sDescTreeNode MVC2_A_GUILE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_LP, ARRAYSIZE(MVC2_A_GUILE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_LK, ARRAYSIZE(MVC2_A_GUILE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_HP, ARRAYSIZE(MVC2_A_GUILE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_HK, ARRAYSIZE(MVC2_A_GUILE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_A1, ARRAYSIZE(MVC2_A_GUILE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_A2, ARRAYSIZE(MVC2_A_GUILE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_GUILE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_LP[] =
{
    { "Main Color LP", 0x283a362, 0x283a382, indexCPS2_Morrigan, 0 },
    { "(02) Lilith", 0x283a382, 0x283a3a2, indexCPS2_Morrigan, 1 },
    { "(03) Shines rising from the ground", 0x283a3a2, 0x283a3c2, indexCPS2_Morrigan, 2 },
    { "(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a3c2, 0x283a3e2, indexCPS2_Morrigan, 3 },
    { "(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a3e2, 0x283a402, indexCPS2_Morrigan, 4 },
    { "(06) Not used", 0x283a402, 0x283a422, indexCPS2_Morrigan, 5 },
    { "(07) Not used", 0x283a422, 0x283a442, indexCPS2_Morrigan, 6 },
    { "(08) Not used", 0x283a442, 0x283a462, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_LK[] =
{
    { "Main Color LK", 0x283a462, 0x283a482, indexCPS2_Morrigan, 0 },
    { "(02) Lilith", 0x283a482, 0x283a4a2, indexCPS2_Morrigan, 1 },
    { "(03) Shines rising from the ground", 0x283a4a2, 0x283a4c2, indexCPS2_Morrigan, 2 },
    { "(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a4c2, 0x283a4e2, indexCPS2_Morrigan, 3 },
    { "(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a4e2, 0x283a502, indexCPS2_Morrigan, 4 },
    { "(06) Not used", 0x283a502, 0x283a522, indexCPS2_Morrigan, 5 },
    { "(07) Not used", 0x283a522, 0x283a542, indexCPS2_Morrigan, 6 },
    { "(08) Not used", 0x283a542, 0x283a562, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_HP[] =
{
    { "Main Color HP", 0x283a562, 0x283a582, indexCPS2_Morrigan, 0 },
    { "(02) Lilith", 0x283a582, 0x283a5a2, indexCPS2_Morrigan, 1 },
    { "(03) Shines rising from the ground", 0x283a5a2, 0x283a5c2, indexCPS2_Morrigan, 2 },
    { "(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a5c2, 0x283a5e2, indexCPS2_Morrigan, 3 },
    { "(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a5e2, 0x283a602, indexCPS2_Morrigan, 4 },
    { "(06) Not used", 0x283a602, 0x283a622, indexCPS2_Morrigan, 5 },
    { "(07) Not used", 0x283a622, 0x283a642, indexCPS2_Morrigan, 6 },
    { "(08) Not used", 0x283a642, 0x283a662, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_HK[] =
{
    { "Main Color HK", 0x283a662, 0x283a682, indexCPS2_Morrigan, 0 },
    { "(02) Lilith", 0x283a682, 0x283a6a2, indexCPS2_Morrigan, 1 },
    { "(03) Shines rising from the ground", 0x283a6a2, 0x283a6c2, indexCPS2_Morrigan, 2 },
    { "(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a6c2, 0x283a6e2, indexCPS2_Morrigan, 3 },
    { "(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a6e2, 0x283a702, indexCPS2_Morrigan, 4 },
    { "(06) Not used", 0x283a702, 0x283a722, indexCPS2_Morrigan, 5 },
    { "(07) Not used", 0x283a722, 0x283a742, indexCPS2_Morrigan, 6 },
    { "(08) Not used", 0x283a742, 0x283a762, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_A1[] =
{
    { "Main Color A1", 0x283a762, 0x283a782, indexCPS2_Morrigan, 0 },
    { "(02) Lilith", 0x283a782, 0x283a7a2, indexCPS2_Morrigan, 1 },
    { "(03) Shines rising from the ground", 0x283a7a2, 0x283a7c2, indexCPS2_Morrigan, 2 },
    { "(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a7c2, 0x283a7e2, indexCPS2_Morrigan, 3 },
    { "(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a7e2, 0x283a802, indexCPS2_Morrigan, 4 },
    { "(06) Not used", 0x283a802, 0x283a822, indexCPS2_Morrigan, 5 },
    { "(07) Not used", 0x283a822, 0x283a842, indexCPS2_Morrigan, 6 },
    { "(08) Not used", 0x283a842, 0x283a862, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_A2[] =
{
    { "Main Color A2", 0x283a862, 0x283a882, indexCPS2_Morrigan, 0 },
    { "(02) Lilith", 0x283a882, 0x283a8a2, indexCPS2_Morrigan, 1 },
    { "(03) Shines rising from the ground", 0x283a8a2, 0x283a8c2, indexCPS2_Morrigan, 2 },
    { "(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a8c2, 0x283a8e2, indexCPS2_Morrigan, 3 },
    { "(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a8e2, 0x283a902, indexCPS2_Morrigan, 4 },
    { "(06) Not used", 0x283a902, 0x283a922, indexCPS2_Morrigan, 5 },
    { "(07) Not used", 0x283a922, 0x283a942, indexCPS2_Morrigan, 6 },
    { "(08) Not used", 0x283a942, 0x283a962, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x283a962, 0x283a982, indexCPS2_Morrigan, 0 },
    { "Burning Light", 0x283a982, 0x283a9a2, indexCPS2_Morrigan, 0 },
    { "Shocked Dark", 0x283a9a2, 0x283a9c2, indexCPS2_Morrigan, 0 },
    { "Shocked Light", 0x283a9c2, 0x283a9e2, indexCPS2_Morrigan, 0 },
    { "Dark Burning Dark", 0x283a9e2, 0x283aa02, indexCPS2_Morrigan, 0 },
    { "Dark Burning Light", 0x283aa02, 0x283aa22, indexCPS2_Morrigan, 0 },
    { "Kinetic Charge Dark", 0x283aa22, 0x283aa42, indexCPS2_Morrigan, 0 },
    { "Kinetic Charge Light", 0x283aa42, 0x283aa62, indexCPS2_Morrigan, 0 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x283aa62, 0x283aa82 },
    { /* 0x0a */ "Not Used", 0x283aa82, 0x283aaa2 },
    { /* 0x0b */ "Not Used", 0x283aaa2, 0x283aac2 },
    { /* 0x0c */ "Not Used", 0x283aac2, 0x283aae2 },
    { /* 0x0d */ "Not Used", 0x283aae2, 0x283ab02 },
    { /* 0x0e */ "Not Used", 0x283ab02, 0x283ab22 },
    { /* 0x0f */ "Not Used", 0x283ab22, 0x283ab42 },
    { /* 0x10 */ "Not Used", 0x283ab42, 0x283ab62 },
    { /* 0x11 */ "Not Used", 0x283ab62, 0x283ab82 },
    { /* 0x12 */ "Not Used", 0x283ab82, 0x283aba2 },
    { /* 0x13 */ "Not Used", 0x283aba2, 0x283abc2 },
    { /* 0x14 */ "Not Used", 0x283abc2, 0x283abe2 },
    { /* 0x15 */ "Not Used", 0x283abe2, 0x283ac02 },
    { /* 0x16 */ "Not Used", 0x283ac02, 0x283ac22 },
    { /* 0x17 */ "Not Used", 0x283ac22, 0x283ac42 },
    { /* 0x18 */ "Not Used", 0x283ac42, 0x283ac62 },
    { /* 0x19 */ "Not Used", 0x283ac62, 0x283ac82 },
    { /* 0x1a */ "Not Used", 0x283ac82, 0x283aca2 },
    { /* 0x1b */ "Not Used", 0x283aca2, 0x283acc2 },
    { /* 0x1c */ "Not Used", 0x283acc2, 0x283ace2 },
    { /* 0x1d */ "Not Used", 0x283ace2, 0x283ad02 },
    { /* 0x1e */ "Not Used", 0x283ad02, 0x283ad22 },
    { /* 0x1f */ "Not Used", 0x283ad22, 0x283ad42 },
    { /* 0x20 */ "Not Used", 0x283ad42, 0x283ad62 },
    { /* 0x21 */ "Not Used", 0x283ad62, 0x283ad82 },
    { /* 0x22 */ "Not Used", 0x283ad82, 0x283ada2 },
    { /* 0x23 */ "Not Used", 0x283ada2, 0x283adc2 },
    { /* 0x24 */ "Not Used", 0x283adc2, 0x283ade2 },
    { /* 0x25 */ "Not Used", 0x283ade2, 0x283ae02 },
    { /* 0x26 */ "Not Used", 0x283ae02, 0x283ae22 },
    { /* 0x27 */ "Not Used", 0x283ae22, 0x283ae42 },
    { /* 0x28 */ "Not Used", 0x283ae42, 0x283ae62 },
    { /* 0x29 */ "Not Used", 0x283ae62, 0x283ae82 },
    { /* 0x2a */ "Not Used", 0x283ae82, 0x283aea2 },
    { /* 0x2b */ "Not Used", 0x283aea2, 0x283aec2 },
    { /* 0x2c */ "Not Used", 0x283aec2, 0x283aee2 },
    { /* 0x2d */ "Not Used", 0x283aee2, 0x283af02 },
    { /* 0x2e */ "Not Used", 0x283af02, 0x283af22 },
    { /* 0x2f */ "Not Used", 0x283af22, 0x283af42 },
    { /* 0x30 */ "Not Used", 0x283af42, 0x283af62 },
    { /* 0x31 */ "Not Used", 0x283af62, 0x283af82 },
    { /* 0x32 */ "Not Used", 0x283af82, 0x283afa2 },
    { /* 0x33 */ "Not Used", 0x283afa2, 0x283afc2 },
    { /* 0x34 */ "Not Used", 0x283afc2, 0x283afe2 },
    { /* 0x35 */ "Not Used", 0x283afe2, 0x283b002 },
    { /* 0x36 */ "Not Used", 0x283b002, 0x283b022 },
    { /* 0x37 */ "Not Used", 0x283b022, 0x283b042 },
    { /* 0x38 */ "Not Used", 0x283b042, 0x283b062 },
    { /* 0x39 */ "separator", 0x283b062, 0x283b082 },
    { /* 0x3a */ "LP - Soul Eraser (Machine Frame 1) (brighter 3B): luminance +5", 0x283b082, 0x283b0a2, indexCPS2_Morrigan, 11 },
    { /* 0x3b */ "LP - Soul Eraser (Machine Frame 2)", 0x283b0a2, 0x283b0c2, indexCPS2_Morrigan, 11 },
    { /* 0x3c */ "separator", 0x283b0c2, 0x283b0e2 },
    { /* 0x3d */ "LK - Soul Eraser (Machine Frame 1) (brighter 3E): luminance +5", 0x283b0e2, 0x283b102, indexCPS2_Morrigan, 11 },
    { /* 0x3e */ "LK - Soul Eraser (Machine Frame 2)", 0x283b102, 0x283b122, indexCPS2_Morrigan, 11 },
    { /* 0x3f */ "separator", 0x283b122, 0x283b142 },
    { /* 0x40 */ "HP - Soul Eraser (Machine Frame 1) (brighter 41): luminance +5", 0x283b142, 0x283b162, indexCPS2_Morrigan, 11 },
    { /* 0x41 */ "HP - Soul Eraser (Machine Frame 2)", 0x283b162, 0x283b182, indexCPS2_Morrigan, 11 },
    { /* 0x42 */ "separator", 0x283b182, 0x283b1a2 },
    { /* 0x43 */ "HK - Soul Eraser (Machine Frame 1) (brighter 44): luminance +5", 0x283b1a2, 0x283b1c2, indexCPS2_Morrigan, 11 },
    { /* 0x44 */ "HK - Soul Eraser (Machine Frame 2)", 0x283b1c2, 0x283b1e2, indexCPS2_Morrigan, 11 },
    { /* 0x45 */ "separator", 0x283b1e2, 0x283b202 },
    { /* 0x46 */ "A1 - Soul Eraser (Machine Frame 1) (brighter 47): luminance +5", 0x283b202, 0x283b222, indexCPS2_Morrigan, 11 },
    { /* 0x47 */ "A1 - Soul Eraser (Machine Frame 2)", 0x283b222, 0x283b242, indexCPS2_Morrigan, 11 },
    { /* 0x48 */ "separator", 0x283b242, 0x283b262 },
    { /* 0x49 */ "A2 - Soul Eraser (Machine Frame 1) (brighter 4A): luminance +5", 0x283b262, 0x283b282, indexCPS2_Morrigan, 11 },
    { /* 0x4a */ "A2 - Soul Eraser (Machine Frame 2)", 0x283b282, 0x283b2a2, indexCPS2_Morrigan, 11 },
    { /* 0x4b */ "LP button - Lilith Same as 01 LP (Extra - 02)", 0x283b2a2, 0x283b2c2, indexCPS2_Morrigan, 12 },
    { /* 0x4c */ "LP button - Lilith Same as 01 LP (Extra - 02) & ID:01 = white", 0x283b2c2, 0x283b2e2, indexCPS2_Morrigan, 12 },
    { /* 0x4d */ "LP button - Morrigan Same as Original Color", 0x283b2e2, 0x283b302, indexCPS2_Morrigan, 13 },
    { /* 0x4e */ "LP button - Morrigan Same as Original Color & ID:01 = white", 0x283b302, 0x283b322, indexCPS2_Morrigan, 13 },
    { /* 0x4f */ "Merge Frame", 0x283b322, 0x283b342 },
    { /* 0x50 */ "LP - Intro Frame 1 LP color & then add luminance+20", 0x283b342, 0x283b362, indexCPS2_Morrigan, 13 },
    { /* 0x51 */ "LP - Intro Frame 2 LP color & then add luminance+13", 0x283b362, 0x283b382, indexCPS2_Morrigan, 13 },
    { /* 0x52 */ "LP - Intro Frame 3 LP color & then add luminance+7", 0x283b382, 0x283b3a2, indexCPS2_Morrigan, 13 },
    { /* 0x53 */ "LP - Intro Frame 4 LP color & then add luminance+0", 0x283b3a2, 0x283b3c2, indexCPS2_Morrigan, 13 },
    { /* 0x54 */ "LK button - Lilith Same as 01 LK (Extra - 02)", 0x283b3c2, 0x283b3e2, indexCPS2_Morrigan, 12 },
    { /* 0x55 */ "LK button - Lilith Same as 01 LK (Extra - 02) & ID:01 = white", 0x283b3e2, 0x283b402, indexCPS2_Morrigan, 12 },
    { /* 0x56 */ "LK button - Morrigan Same as Original Color", 0x283b402, 0x283b422, indexCPS2_Morrigan, 13 },
    { /* 0x57 */ "LK button - Morrigan Same as Original Color & ID:01 = white", 0x283b422, 0x283b442, indexCPS2_Morrigan, 13 },
    { /* 0x58 */ "Merge Frame", 0x283b442, 0x283b462 },
    { /* 0x59 */ "LK - Intro Frame 1 LK color & then add luminance+20", 0x283b462, 0x283b482, indexCPS2_Morrigan, 13 },
    { /* 0x5a */ "LK - Intro Frame 2 LK color & then add luminance+13", 0x283b482, 0x283b4a2, indexCPS2_Morrigan, 13 },
    { /* 0x5b */ "LK - Intro Frame 3 LK color & then add luminance+7", 0x283b4a2, 0x283b4c2, indexCPS2_Morrigan, 13 },
    { /* 0x5c */ "LK - Intro Frame 4 LK color & then add luminance+0", 0x283b4c2, 0x283b4e2, indexCPS2_Morrigan, 13 },
    { /* 0x5d */ "HP button - Lilith Same as 01 HP (Extra - 02)", 0x283b4e2, 0x283b502, indexCPS2_Morrigan, 12 },
    { /* 0x5e */ "HP button - Lilith Same as 01 HP (Extra - 02) & ID:01 = white", 0x283b502, 0x283b522, indexCPS2_Morrigan, 12 },
    { /* 0x5f */ "HP button - Morrigan Same as Original Color", 0x283b522, 0x283b542, indexCPS2_Morrigan, 13 },
    { /* 0x60 */ "HP button - Morrigan Same as Original Color & ID:01 = white", 0x283b542, 0x283b562, indexCPS2_Morrigan, 13 },
    { /* 0x61 */ "Merge Frame", 0x283b562, 0x283b582 },
    { /* 0x62 */ "HP - Intro Frame 1 HP color & then add luminance+20", 0x283b582, 0x283b5a2, indexCPS2_Morrigan, 13 },
    { /* 0x63 */ "HP - Intro Frame 2 HP color & then add luminance+13", 0x283b5a2, 0x283b5c2, indexCPS2_Morrigan, 13 },
    { /* 0x64 */ "HP - Intro Frame 3 HP color & then add luminance+7", 0x283b5c2, 0x283b5e2, indexCPS2_Morrigan, 13 },
    { /* 0x65 */ "HP - Intro Frame 4 HP color & then add luminance+0", 0x283b5e2, 0x283b602, indexCPS2_Morrigan, 13 },
    { /* 0x66 */ "HK button - Lilith Same as 01 HK (Extra - 02)", 0x283b602, 0x283b622, indexCPS2_Morrigan, 12 },
    { /* 0x67 */ "HK button - Lilith Same as 01 HK (Extra - 02) & ID:01 = white", 0x283b622, 0x283b642, indexCPS2_Morrigan, 12 },
    { /* 0x68 */ "HK button - Morrigan Same as Original Color", 0x283b642, 0x283b662, indexCPS2_Morrigan, 13 },
    { /* 0x69 */ "HK button - Morrigan Same as Original Color & ID:01 = white", 0x283b662, 0x283b682, indexCPS2_Morrigan, 13 },
    { /* 0x6a */ "Merge Frame", 0x283b682, 0x283b6a2 },
    { /* 0x6b */ "HK - Intro Frame 1 HK color & then add luminance+20", 0x283b6a2, 0x283b6c2, indexCPS2_Morrigan, 13 },
    { /* 0x6c */ "HK - Intro Frame 2 HK color & then add luminance+13", 0x283b6c2, 0x283b6e2, indexCPS2_Morrigan, 13 },
    { /* 0x6d */ "HK - Intro Frame 3 HK color & then add luminance+7", 0x283b6e2, 0x283b702, indexCPS2_Morrigan, 13 },
    { /* 0x6e */ "HK - Intro Frame 4 HK color & then add luminance+0", 0x283b702, 0x283b722, indexCPS2_Morrigan, 13 },
    { /* 0x6f */ "A1 button - Lilith Same as 01 A1 (Extra - 02)", 0x283b722, 0x283b742, indexCPS2_Morrigan, 12 },
    { /* 0x70 */ "A1 button - Lilith Same as 01 A1 (Extra - 02) & ID:01 = white", 0x283b742, 0x283b762, indexCPS2_Morrigan, 12 },
    { /* 0x71 */ "A1 button - Morrigan Same as Original Color", 0x283b762, 0x283b782, indexCPS2_Morrigan, 13 },
    { /* 0x72 */ "A1 button - Morrigan Same as Original Color & ID:01 = white", 0x283b782, 0x283b7a2, indexCPS2_Morrigan, 13 },
    { /* 0x73 */ "Merge Frame", 0x283b7a2, 0x283b7c2 },
    { /* 0x74 */ "A1 - Intro Frame 1 A1 color & then add luminance+20", 0x283b7c2, 0x283b7e2, indexCPS2_Morrigan, 13 },
    { /* 0x75 */ "A1 - Intro Frame 2 A1 color & then add luminance+13", 0x283b7e2, 0x283b802, indexCPS2_Morrigan, 13 },
    { /* 0x76 */ "A1 - Intro Frame 3 A1 color & then add luminance+7", 0x283b802, 0x283b822, indexCPS2_Morrigan, 13 },
    { /* 0x77 */ "A1 - Intro Frame 4 A1 color & then add luminance+0", 0x283b822, 0x283b842, indexCPS2_Morrigan, 13 },
    { /* 0x78 */ "A2 button - Lilith Same as 01 A2 (Extra - 02)", 0x283b842, 0x283b862, indexCPS2_Morrigan, 12 },
    { /* 0x79 */ "A2 button - Lilith Same as 01 A2 (Extra - 02) & ID:01 = white", 0x283b862, 0x283b882, indexCPS2_Morrigan, 12 },
    { /* 0x7a */ "A2 button - Morrigan Same as Original Color", 0x283b882, 0x283b8a2, indexCPS2_Morrigan, 13 },
    { /* 0x7b */ "A2 button - Morrigan Same as Original Color & ID:01 = white", 0x283b8a2, 0x283b8c2, indexCPS2_Morrigan, 13 },
    { /* 0x7c */ "Merge Frame", 0x283b8c2, 0x283b8e2 },
    { /* 0x7d */ "A2 - Intro Frame 1 A2 color & then add luminance+20", 0x283b8e2, 0x283b902, indexCPS2_Morrigan, 13 },
    { /* 0x7e */ "A2 - Intro Frame 2 A2 color & then add luminance+13", 0x283b902, 0x283b922, indexCPS2_Morrigan, 13 },
    { /* 0x7f */ "A2 - Intro Frame 3 A2 color & then add luminance+7", 0x283b922, 0x283b942, indexCPS2_Morrigan, 13 },
    { /* 0x80 */ "A2 - Intro Frame 4 A2 color & then add luminance+0", 0x283b942, 0x283b962, indexCPS2_Morrigan, 13 },
    { /* 0x81 */ "LP - Taunt (Morrigan)", 0x283b962, 0x283b982, indexCPS2_Morrigan, 14 },
    { /* 0x82 */ "LK - Taunt (Morrigan)", 0x283b982, 0x283b9a2, indexCPS2_Morrigan, 14 },
    { /* 0x83 */ "HP - Taunt (Morrigan)", 0x283b9a2, 0x283b9c2, indexCPS2_Morrigan, 14 },
    { /* 0x84 */ "HK - Taunt (Morrigan)", 0x283b9c2, 0x283b9e2, indexCPS2_Morrigan, 14 },
    { /* 0x85 */ "A1 - Taunt (Morrigan)", 0x283b9e2, 0x283ba02, indexCPS2_Morrigan, 14 },
    { /* 0x86 */ "A2 - Taunt (Morrigan)", 0x283ba02, 0x283ba22, indexCPS2_Morrigan, 14 },
};

const sDescTreeNode MVC2_A_MORRIGAN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_LP, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_LK, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_HP, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_HK, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_A1, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_A2, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_LP[] =
{
    { "Main Color LP", 0x2954602, 0x2954622, indexCPS2_Anakaris, 0 },
    { "(02) Not Used", 0x2954622, 0x2954642, indexCPS2_Anakaris, 1 },
    { "(03) c.FP Background Arms Effect", 0x2954642, 0x2954662, indexCPS2_Anakaris, 2 },
    { "(04) Pharaoh Magic (Special Ball)", 0x2954662, 0x2954682, indexCPS2_Anakaris, 3 },
    { "(05) Pharaoh Illusion (Background Anakaris)", 0x2954682, 0x29546a2, indexCPS2_Anakaris, 4 },
    { "(06) Pharaoh Judgement (Dummy)", 0x29546a2, 0x29546c2, indexCPS2_Anakaris, 5 },
    { "(07) Not Used", 0x29546c2, 0x29546e2, indexCPS2_Anakaris, 6 },
    { "(08) Not Used", 0x29546e2, 0x2954702, indexCPS2_Anakaris, 7 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_LK[] =
{
    { "Main Color LK", 0x2954702, 0x2954722, indexCPS2_Anakaris, 0 },
    { "(02) Not Used", 0x2954722, 0x2954742, indexCPS2_Anakaris, 1 },
    { "(03) c.FP Background Arms Effect", 0x2954742, 0x2954762, indexCPS2_Anakaris, 2 },
    { "(04) Pharaoh Magic (Special Ball)", 0x2954762, 0x2954782, indexCPS2_Anakaris, 3 },
    { "(05) Pharaoh Illusion (Background Anakaris)", 0x2954782, 0x29547a2, indexCPS2_Anakaris, 4 },
    { "(06) Pharaoh Judgement (Dummy)", 0x29547a2, 0x29547c2, indexCPS2_Anakaris, 5 },
    { "(07) Not Used", 0x29547c2, 0x29547e2, indexCPS2_Anakaris, 6 },
    { "(08) Not Used", 0x29547e2, 0x2954802, indexCPS2_Anakaris, 7 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_HP[] =
{
    { "Main Color HP", 0x2954802, 0x2954822, indexCPS2_Anakaris, 0 },
    { "(02) Not Used", 0x2954822, 0x2954842, indexCPS2_Anakaris, 1 },
    { "(03) c.FP Background Arms Effect", 0x2954842, 0x2954862, indexCPS2_Anakaris, 2 },
    { "(04) Pharaoh Magic (Special Ball)", 0x2954862, 0x2954882, indexCPS2_Anakaris, 3 },
    { "(05) Pharaoh Illusion (Background Anakaris)", 0x2954882, 0x29548a2, indexCPS2_Anakaris, 4 },
    { "(06) Pharaoh Judgement (Dummy)", 0x29548a2, 0x29548c2, indexCPS2_Anakaris, 5 },
    { "(07) Not Used", 0x29548c2, 0x29548e2, indexCPS2_Anakaris, 6 },
    { "(08) Not Used", 0x29548e2, 0x2954902, indexCPS2_Anakaris, 7 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_HK[] =
{
    { "Main Color HK", 0x2954902, 0x2954922, indexCPS2_Anakaris, 0 },
    { "(02) Not Used", 0x2954922, 0x2954942, indexCPS2_Anakaris, 1 },
    { "(03) c.FP Background Arms Effect", 0x2954942, 0x2954962, indexCPS2_Anakaris, 2 },
    { "(04) Pharaoh Magic (Special Ball)", 0x2954962, 0x2954982, indexCPS2_Anakaris, 3 },
    { "(05) Pharaoh Illusion (Background Anakaris)", 0x2954982, 0x29549a2, indexCPS2_Anakaris, 4 },
    { "(06) Pharaoh Judgement (Dummy)", 0x29549a2, 0x29549c2, indexCPS2_Anakaris, 5 },
    { "(07) Not Used", 0x29549c2, 0x29549e2, indexCPS2_Anakaris, 6 },
    { "(08) Not Used", 0x29549e2, 0x2954a02, indexCPS2_Anakaris, 7 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_A1[] =
{
    { "Main Color A1", 0x2954a02, 0x2954a22, indexCPS2_Anakaris, 0 },
    { "(02) Not Used", 0x2954a22, 0x2954a42, indexCPS2_Anakaris, 1 },
    { "(03) c.FP Background Arms Effect", 0x2954a42, 0x2954a62, indexCPS2_Anakaris, 2 },
    { "(04) Pharaoh Magic (Special Ball)", 0x2954a62, 0x2954a82, indexCPS2_Anakaris, 3 },
    { "(05) Pharaoh Illusion (Background Anakaris)", 0x2954a82, 0x2954aa2, indexCPS2_Anakaris, 4 },
    { "(06) Pharaoh Judgement (Dummy)", 0x2954aa2, 0x2954ac2, indexCPS2_Anakaris, 5 },
    { "(07) Not Used", 0x2954ac2, 0x2954ae2, indexCPS2_Anakaris, 6 },
    { "(08) Not Used", 0x2954ae2, 0x2954b02, indexCPS2_Anakaris, 7 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_A2[] =
{
    { "Main Color A2", 0x2954b02, 0x2954b22, indexCPS2_Anakaris, 0 },
    { "(02) Not Used", 0x2954b22, 0x2954b42, indexCPS2_Anakaris, 1 },
    { "(03) c.FP Background Arms Effect", 0x2954b42, 0x2954b62, indexCPS2_Anakaris, 2 },
    { "(04) Pharaoh Magic (Special Ball)", 0x2954b62, 0x2954b82, indexCPS2_Anakaris, 3 },
    { "(05) Pharaoh Illusion (Background Anakaris)", 0x2954b82, 0x2954ba2, indexCPS2_Anakaris, 4 },
    { "(06) Pharaoh Judgement (Dummy)", 0x2954ba2, 0x2954bc2, indexCPS2_Anakaris, 5 },
    { "(07) Not Used", 0x2954bc2, 0x2954be2, indexCPS2_Anakaris, 6 },
    { "(08) Not Used", 0x2954be2, 0x2954c02, indexCPS2_Anakaris, 7 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2954c02, 0x2954c22, indexCPS2_Anakaris, 0 },
    { "Burning Light", 0x2954c22, 0x2954c42, indexCPS2_Anakaris, 0 },
    { "Shocked Dark", 0x2954c42, 0x2954c62, indexCPS2_Anakaris, 0 },
    { "Shocked Light", 0x2954c62, 0x2954c82, indexCPS2_Anakaris, 0 },
    { "Dark Burning Dark", 0x2954c82, 0x2954ca2, indexCPS2_Anakaris, 0 },
    { "Dark Burning Light", 0x2954ca2, 0x2954cc2, indexCPS2_Anakaris, 0 },
    { "Kinetic Charge Dark", 0x2954cc2, 0x2954ce2, indexCPS2_Anakaris, 0 },
    { "Kinetic Charge Light", 0x2954ce2, 0x2954d02, indexCPS2_Anakaris, 0 },
};

const sDescTreeNode MVC2_A_ANAKARIS_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_LP, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_LK, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_HP, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_HK, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_A1, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_A2, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_LP[] =
{
    { "Main Color LP", 0x2a2c5e2, 0x2a2c602, indexCPS2_Strider, 0 },
    { "(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c602, 0x2a2c622, indexCPS2_Strider, 1 },
    { "(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c622, 0x2a2c642, indexCPS2_Strider, 2 },
    { "(04) Not Used", 0x2a2c642, 0x2a2c662, indexCPS2_Strider, 3 },
    { "(05) Not Used", 0x2a2c662, 0x2a2c682, indexCPS2_Strider, 4 },
    { "(06) Not Used", 0x2a2c682, 0x2a2c6a2, indexCPS2_Strider, 5 },
    { "(07) Not Used", 0x2a2c6a2, 0x2a2c6c2, indexCPS2_Strider, 6 },
    { "(08) Not Used", 0x2a2c6c2, 0x2a2c6e2, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_LK[] =
{
    { "Main Color LK", 0x2a2c6e2, 0x2a2c702, indexCPS2_Strider, 0 },
    { "(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c702, 0x2a2c722, indexCPS2_Strider, 1 },
    { "(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c722, 0x2a2c742, indexCPS2_Strider, 2 },
    { "(04) Not Used", 0x2a2c742, 0x2a2c762, indexCPS2_Strider, 3 },
    { "(05) Not Used", 0x2a2c762, 0x2a2c782, indexCPS2_Strider, 4 },
    { "(06) Not Used", 0x2a2c782, 0x2a2c7a2, indexCPS2_Strider, 5 },
    { "(07) Not Used", 0x2a2c7a2, 0x2a2c7c2, indexCPS2_Strider, 6 },
    { "(08) Not Used", 0x2a2c7c2, 0x2a2c7e2, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_HP[] =
{
    { "Main Color HP", 0x2a2c7e2, 0x2a2c802, indexCPS2_Strider, 0 },
    { "(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c802, 0x2a2c822, indexCPS2_Strider, 1 },
    { "(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c822, 0x2a2c842, indexCPS2_Strider, 2 },
    { "(04) Not Used", 0x2a2c842, 0x2a2c862, indexCPS2_Strider, 3 },
    { "(05) Not Used", 0x2a2c862, 0x2a2c882, indexCPS2_Strider, 4 },
    { "(06) Not Used", 0x2a2c882, 0x2a2c8a2, indexCPS2_Strider, 5 },
    { "(07) Not Used", 0x2a2c8a2, 0x2a2c8c2, indexCPS2_Strider, 6 },
    { "(08) Not Used", 0x2a2c8c2, 0x2a2c8e2, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_HK[] =
{
    { "Main Color HK", 0x2a2c8e2, 0x2a2c902, indexCPS2_Strider, 0 },
    { "(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c902, 0x2a2c922, indexCPS2_Strider, 1 },
    { "(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c922, 0x2a2c942, indexCPS2_Strider, 2 },
    { "(04) Not Used", 0x2a2c942, 0x2a2c962, indexCPS2_Strider, 3 },
    { "(05) Not Used", 0x2a2c962, 0x2a2c982, indexCPS2_Strider, 4 },
    { "(06) Not Used", 0x2a2c982, 0x2a2c9a2, indexCPS2_Strider, 5 },
    { "(07) Not Used", 0x2a2c9a2, 0x2a2c9c2, indexCPS2_Strider, 6 },
    { "(08) Not Used", 0x2a2c9c2, 0x2a2c9e2, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_A1[] =
{
    { "Main Color A1", 0x2a2c9e2, 0x2a2ca02, indexCPS2_Strider, 0 },
    { "(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2ca02, 0x2a2ca22, indexCPS2_Strider, 1 },
    { "(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2ca22, 0x2a2ca42, indexCPS2_Strider, 2 },
    { "(04) Not Used", 0x2a2ca42, 0x2a2ca62, indexCPS2_Strider, 3 },
    { "(05) Not Used", 0x2a2ca62, 0x2a2ca82, indexCPS2_Strider, 4 },
    { "(06) Not Used", 0x2a2ca82, 0x2a2caa2, indexCPS2_Strider, 5 },
    { "(07) Not Used", 0x2a2caa2, 0x2a2cac2, indexCPS2_Strider, 6 },
    { "(08) Not Used", 0x2a2cac2, 0x2a2cae2, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_A2[] =
{
    { "Main Color A2", 0x2a2cae2, 0x2a2cb02, indexCPS2_Strider, 0 },
    { "(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2cb02, 0x2a2cb22, indexCPS2_Strider, 1 },
    { "(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2cb22, 0x2a2cb42, indexCPS2_Strider, 2 },
    { "(04) Not Used", 0x2a2cb42, 0x2a2cb62, indexCPS2_Strider, 3 },
    { "(05) Not Used", 0x2a2cb62, 0x2a2cb82, indexCPS2_Strider, 4 },
    { "(06) Not Used", 0x2a2cb82, 0x2a2cba2, indexCPS2_Strider, 5 },
    { "(07) Not Used", 0x2a2cba2, 0x2a2cbc2, indexCPS2_Strider, 6 },
    { "(08) Not Used", 0x2a2cbc2, 0x2a2cbe2, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2a2cbe2, 0x2a2cc02, indexCPS2_Strider, 0 },
    { "Burning Light", 0x2a2cc02, 0x2a2cc22, indexCPS2_Strider, 0 },
    { "Shocked Dark", 0x2a2cc22, 0x2a2cc42, indexCPS2_Strider, 0 },
    { "Shocked Light", 0x2a2cc42, 0x2a2cc62, indexCPS2_Strider, 0 },
    { "Dark Burning Dark", 0x2a2cc62, 0x2a2cc82, indexCPS2_Strider, 0 },
    { "Dark Burning Light", 0x2a2cc82, 0x2a2cca2, indexCPS2_Strider, 0 },
    { "Kinetic Charge Dark", 0x2a2cca2, 0x2a2ccc2, indexCPS2_Strider, 0 },
    { "Kinetic Charge Light", 0x2a2ccc2, 0x2a2cce2, indexCPS2_Strider, 0 },
};

const sDescTreeNode MVC2_A_STRIDER_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_LP, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_LK, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_HP, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_HK, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_A1, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_A2, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_SHARED, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_LP[] =
{
    { "Main Color LP", 0x2b13442, 0x2b13462, indexCPS2_Cyclops, 0 },
    { "(02) s.HK, (s)j.HK Swing effect", 0x2b13462, 0x2b13482, indexCPS2_Cyclops, 1 },
    { "(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13482, 0x2b134a2, indexCPS2_Cyclops, 2 },
    { "(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b134a2, 0x2b134c2, indexCPS2_Cyclops, 3 },
    { "(05) Not Used", 0x2b134c2, 0x2b134e2, indexCPS2_Cyclops, 4 },
    { "(06) Not Used", 0x2b134e2, 0x2b13502, indexCPS2_Cyclops, 5 },
    { "(07) Not Used", 0x2b13502, 0x2b13522, indexCPS2_Cyclops, 6 },
    { "(08) Not Used", 0x2b13522, 0x2b13542, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_LK[] =
{
    { "Main Color LK", 0x2b13542, 0x2b13562, indexCPS2_Cyclops, 0 },
    { "(02) s.HK, (s)j.HK Swing effect", 0x2b13562, 0x2b13582, indexCPS2_Cyclops, 1 },
    { "(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13582, 0x2b135a2, indexCPS2_Cyclops, 2 },
    { "(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b135a2, 0x2b135c2, indexCPS2_Cyclops, 3 },
    { "(05) Not Used", 0x2b135c2, 0x2b135e2, indexCPS2_Cyclops, 4 },
    { "(06) Not Used", 0x2b135e2, 0x2b13602, indexCPS2_Cyclops, 5 },
    { "(07) Not Used", 0x2b13602, 0x2b13622, indexCPS2_Cyclops, 6 },
    { "(08) Not Used", 0x2b13622, 0x2b13642, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_HP[] =
{
    { "Main Color HP", 0x2b13642, 0x2b13662, indexCPS2_Cyclops, 0 },
    { "(02) s.HK, (s)j.HK Swing effect", 0x2b13662, 0x2b13682, indexCPS2_Cyclops, 1 },
    { "(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13682, 0x2b136a2, indexCPS2_Cyclops, 2 },
    { "(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b136a2, 0x2b136c2, indexCPS2_Cyclops, 3 },
    { "(05) Not Used", 0x2b136c2, 0x2b136e2, indexCPS2_Cyclops, 4 },
    { "(06) Not Used", 0x2b136e2, 0x2b13702, indexCPS2_Cyclops, 5 },
    { "(07) Not Used", 0x2b13702, 0x2b13722, indexCPS2_Cyclops, 6 },
    { "(08) Not Used", 0x2b13722, 0x2b13742, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_HK[] =
{
    { "Main Color HK", 0x2b13742, 0x2b13762, indexCPS2_Cyclops, 0 },
    { "(02) s.HK, (s)j.HK Swing effect", 0x2b13762, 0x2b13782, indexCPS2_Cyclops, 1 },
    { "(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13782, 0x2b137a2, indexCPS2_Cyclops, 2 },
    { "(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b137a2, 0x2b137c2, indexCPS2_Cyclops, 3 },
    { "(05) Not Used", 0x2b137c2, 0x2b137e2, indexCPS2_Cyclops, 4 },
    { "(06) Not Used", 0x2b137e2, 0x2b13802, indexCPS2_Cyclops, 5 },
    { "(07) Not Used", 0x2b13802, 0x2b13822, indexCPS2_Cyclops, 6 },
    { "(08) Not Used", 0x2b13822, 0x2b13842, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_A1[] =
{
    { "Main Color A1", 0x2b13842, 0x2b13862, indexCPS2_Cyclops, 0 },
    { "(02) s.HK, (s)j.HK Swing effect", 0x2b13862, 0x2b13882, indexCPS2_Cyclops, 1 },
    { "(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13882, 0x2b138a2, indexCPS2_Cyclops, 2 },
    { "(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b138a2, 0x2b138c2, indexCPS2_Cyclops, 3 },
    { "(05) Not Used", 0x2b138c2, 0x2b138e2, indexCPS2_Cyclops, 4 },
    { "(06) Not Used", 0x2b138e2, 0x2b13902, indexCPS2_Cyclops, 5 },
    { "(07) Not Used", 0x2b13902, 0x2b13922, indexCPS2_Cyclops, 6 },
    { "(08) Not Used", 0x2b13922, 0x2b13942, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_A2[] =
{
    { "Main Color A2", 0x2b13942, 0x2b13962, indexCPS2_Cyclops, 0 },
    { "(02) s.HK, (s)j.HK Swing effect", 0x2b13962, 0x2b13982, indexCPS2_Cyclops, 1 },
    { "(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13982, 0x2b139a2, indexCPS2_Cyclops, 2 },
    { "(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b139a2, 0x2b139c2, indexCPS2_Cyclops, 3 },
    { "(05) Not Used", 0x2b139c2, 0x2b139e2, indexCPS2_Cyclops, 4 },
    { "(06) Not Used", 0x2b139e2, 0x2b13a02, indexCPS2_Cyclops, 5 },
    { "(07) Not Used", 0x2b13a02, 0x2b13a22, indexCPS2_Cyclops, 6 },
    { "(08) Not Used", 0x2b13a22, 0x2b13a42, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2b13a42, 0x2b13a62, indexCPS2_Cyclops, 0 },
    { "Burning Light", 0x2b13a62, 0x2b13a82, indexCPS2_Cyclops, 0 },
    { "Shocked Dark", 0x2b13a82, 0x2b13aa2, indexCPS2_Cyclops, 0 },
    { "Shocked Light", 0x2b13aa2, 0x2b13ac2, indexCPS2_Cyclops, 0 },
    { "Dark Burning Dark", 0x2b13ac2, 0x2b13ae2, indexCPS2_Cyclops, 0 },
    { "Dark Burning Light", 0x2b13ae2, 0x2b13b02, indexCPS2_Cyclops, 0 },
    { "Kinetic Charge Dark", 0x2b13b02, 0x2b13b22, indexCPS2_Cyclops, 0 },
    { "Kinetic Charge Light", 0x2b13b22, 0x2b13b42, indexCPS2_Cyclops, 0 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x2b13b42, 0x2b13b62 },
    { /* 0x0a */ "Not Used", 0x2b13b62, 0x2b13b82 },
    { /* 0x0b */ "Not Used", 0x2b13b82, 0x2b13ba2 },
    { /* 0x0c */ "Not Used", 0x2b13ba2, 0x2b13bc2 },
    { /* 0x0d */ "Not Used", 0x2b13bc2, 0x2b13be2 },
    { /* 0x0e */ "Not Used", 0x2b13be2, 0x2b13c02 },
    { /* 0x0f */ "Not Used", 0x2b13c02, 0x2b13c22 },
    { /* 0x10 */ "Not Used", 0x2b13c22, 0x2b13c42 },
    { /* 0x11 */ "Not Used", 0x2b13c42, 0x2b13c62 },
    { /* 0x12 */ "Not Used", 0x2b13c62, 0x2b13c82 },
    { /* 0x13 */ "Not Used", 0x2b13c82, 0x2b13ca2 },
    { /* 0x14 */ "Not Used", 0x2b13ca2, 0x2b13cc2 },
    { /* 0x15 */ "Not Used", 0x2b13cc2, 0x2b13ce2 },
    { /* 0x16 */ "Not Used", 0x2b13ce2, 0x2b13d02 },
    { /* 0x17 */ "Not Used", 0x2b13d02, 0x2b13d22 },
    { /* 0x18 */ "Not Used", 0x2b13d22, 0x2b13d42 },
    { /* 0x19 */ "Optic Bullet / Optic Blast / Super Optic Blast Frame 1", 0x2b13d42, 0x2b13d62, indexCPS2_Cyclops, 11 },
    { /* 0x1a */ "Optic Bullet / Optic Blast / Super Optic Blast Frame 2", 0x2b13d62, 0x2b13d82, indexCPS2_Cyclops, 11 },
    { /* 0x1b */ "Optic Bullet / Optic Blast / Super Optic Blast Frame 3", 0x2b13d82, 0x2b13da2, indexCPS2_Cyclops, 11 },
    { /* 0x1c */ "Optic Bullet / Optic Blast / Super Optic Blast Frame 4", 0x2b13da2, 0x2b13dc2, indexCPS2_Cyclops, 11 },
    { /* 0x1d */ "Optic Bullet / Optic Blast / Super Optic Blast Frame 5", 0x2b13dc2, 0x2b13de2, indexCPS2_Cyclops, 11 },
    { /* 0x1e */ "?", 0x2b13de2, 0x2b13e02 },
    { /* 0x1f */ "Not Used", 0x2b13e02, 0x2b13e22 },
    { /* 0x20 */ "Not Used", 0x2b13e22, 0x2b13e42 },
    { /* 0x21 */ "Not Used", 0x2b13e42, 0x2b13e62 },
    { /* 0x22 */ "Not Used 09-15:purple+aqua", 0x2b13e62, 0x2b13e82 },
    { /* 0x23 */ "Not Used", 0x2b13e82, 0x2b13ea2 },
    { /* 0x24 */ "Not Used", 0x2b13ea2, 0x2b13ec2 },
    { /* 0x25 */ "Not Used", 0x2b13ec2, 0x2b13ee2 },
    { /* 0x26 */ "Not Used", 0x2b13ee2, 0x2b13f02 },
    { /* 0x27 */ "Not Used", 0x2b13f02, 0x2b13f22 },
    { /* 0x28 */ "Not Used", 0x2b13f22, 0x2b13f42 },
    { /* 0x29 */ "LP - Intro Frame 1", 0x2b13f42, 0x2b13f62, indexCPS2_Cyclops, 12 },
    { /* 0x2a */ "LP - Intro Frame 2", 0x2b13f62, 0x2b13f82, indexCPS2_Cyclops, 12 },
    { /* 0x2b */ "LP - Intro Frame 3", 0x2b13f82, 0x2b13fa2, indexCPS2_Cyclops, 12 },
    { /* 0x2c */ "LP - Intro Frame 4", 0x2b13fa2, 0x2b13fc2, indexCPS2_Cyclops, 12 },
    { /* 0x2d */ "LP - Intro Frame 5", 0x2b13fc2, 0x2b13fe2, indexCPS2_Cyclops, 12 },
    { /* 0x2e */ "LP - Intro Frame 6", 0x2b13fe2, 0x2b14002, indexCPS2_Cyclops, 12 },
    { /* 0x2f */ "LP - Intro Frame 7", 0x2b14002, 0x2b14022, indexCPS2_Cyclops, 12 },
    { /* 0x30 */ "LP - Intro Frame 8", 0x2b14022, 0x2b14042, indexCPS2_Cyclops, 12 },
    { /* 0x31 */ "LK - Intro Frame 1", 0x2b14042, 0x2b14062, indexCPS2_Cyclops, 12 },
    { /* 0x32 */ "LK - Intro Frame 2", 0x2b14062, 0x2b14082, indexCPS2_Cyclops, 12 },
    { /* 0x33 */ "LK - Intro Frame 3", 0x2b14082, 0x2b140a2, indexCPS2_Cyclops, 12 },
    { /* 0x34 */ "LK - Intro Frame 4", 0x2b140a2, 0x2b140c2, indexCPS2_Cyclops, 12 },
    { /* 0x35 */ "LK - Intro Frame 5", 0x2b140c2, 0x2b140e2, indexCPS2_Cyclops, 12 },
    { /* 0x36 */ "LK - Intro Frame 6", 0x2b140e2, 0x2b14102, indexCPS2_Cyclops, 12 },
    { /* 0x37 */ "LK - Intro Frame 7", 0x2b14102, 0x2b14122, indexCPS2_Cyclops, 12 },
    { /* 0x38 */ "LK - Intro Frame 8", 0x2b14122, 0x2b14142, indexCPS2_Cyclops, 12 },
    { /* 0x39 */ "HP - Intro Frame 1", 0x2b14142, 0x2b14162, indexCPS2_Cyclops, 12 },
    { /* 0x3a */ "HP - Intro Frame 2", 0x2b14162, 0x2b14182, indexCPS2_Cyclops, 12 },
    { /* 0x3b */ "HP - Intro Frame 3", 0x2b14182, 0x2b141a2, indexCPS2_Cyclops, 12 },
    { /* 0x3c */ "HP - Intro Frame 4", 0x2b141a2, 0x2b141c2, indexCPS2_Cyclops, 12 },
    { /* 0x3d */ "HP - Intro Frame 5", 0x2b141c2, 0x2b141e2, indexCPS2_Cyclops, 12 },
    { /* 0x3e */ "HP - Intro Frame 6", 0x2b141e2, 0x2b14202, indexCPS2_Cyclops, 12 },
    { /* 0x3f */ "HP - Intro Frame 7", 0x2b14202, 0x2b14222, indexCPS2_Cyclops, 12 },
    { /* 0x40 */ "HP - Intro Frame 8", 0x2b14222, 0x2b14242, indexCPS2_Cyclops, 12 },
    { /* 0x41 */ "HK - Intro Frame 1", 0x2b14242, 0x2b14262, indexCPS2_Cyclops, 12 },
    { /* 0x42 */ "HK - Intro Frame 2", 0x2b14262, 0x2b14282, indexCPS2_Cyclops, 12 },
    { /* 0x43 */ "HK - Intro Frame 3", 0x2b14282, 0x2b142a2, indexCPS2_Cyclops, 12 },
    { /* 0x44 */ "HK - Intro Frame 4", 0x2b142a2, 0x2b142c2, indexCPS2_Cyclops, 12 },
    { /* 0x45 */ "HK - Intro Frame 5", 0x2b142c2, 0x2b142e2, indexCPS2_Cyclops, 12 },
    { /* 0x46 */ "HK - Intro Frame 6", 0x2b142e2, 0x2b14302, indexCPS2_Cyclops, 12 },
    { /* 0x47 */ "HK - Intro Frame 7", 0x2b14302, 0x2b14322, indexCPS2_Cyclops, 12 },
    { /* 0x48 */ "HK - Intro Frame 8", 0x2b14322, 0x2b14342, indexCPS2_Cyclops, 12 },
    { /* 0x49 */ "A1 - Intro Frame 1", 0x2b14342, 0x2b14362, indexCPS2_Cyclops, 12 },
    { /* 0x4a */ "A1 - Intro Frame 2", 0x2b14362, 0x2b14382, indexCPS2_Cyclops, 12 },
    { /* 0x4b */ "A1 - Intro Frame 3", 0x2b14382, 0x2b143a2, indexCPS2_Cyclops, 12 },
    { /* 0x4c */ "A1 - Intro Frame 4", 0x2b143a2, 0x2b143c2, indexCPS2_Cyclops, 12 },
    { /* 0x4d */ "A1 - Intro Frame 5", 0x2b143c2, 0x2b143e2, indexCPS2_Cyclops, 12 },
    { /* 0x4e */ "A1 - Intro Frame 6", 0x2b143e2, 0x2b14402, indexCPS2_Cyclops, 12 },
    { /* 0x4f */ "A1 - Intro Frame 7", 0x2b14402, 0x2b14422, indexCPS2_Cyclops, 12 },
    { /* 0x50 */ "A1 - Intro Frame 8", 0x2b14422, 0x2b14442, indexCPS2_Cyclops, 12 },
    { /* 0x51 */ "A2 - Intro Frame 1", 0x2b14442, 0x2b14462, indexCPS2_Cyclops, 12 },
    { /* 0x52 */ "A2 - Intro Frame 2", 0x2b14462, 0x2b14482, indexCPS2_Cyclops, 12 },
    { /* 0x53 */ "A2 - Intro Frame 3", 0x2b14482, 0x2b144a2, indexCPS2_Cyclops, 12 },
    { /* 0x54 */ "A2 - Intro Frame 4", 0x2b144a2, 0x2b144c2, indexCPS2_Cyclops, 12 },
    { /* 0x55 */ "A2 - Intro Frame 5", 0x2b144c2, 0x2b144e2, indexCPS2_Cyclops, 12 },
    { /* 0x56 */ "A2 - Intro Frame 6", 0x2b144e2, 0x2b14502, indexCPS2_Cyclops, 12 },
    { /* 0x57 */ "A2 - Intro Frame 7", 0x2b14502, 0x2b14522, indexCPS2_Cyclops, 12 },
    { /* 0x58 */ "A2 - Intro Frame 8", 0x2b14522, 0x2b14542, indexCPS2_Cyclops, 12 },
    { /* 0x59 */ "LP", 0x2b14542, 0x2b14562, indexCPS2_Cyclops, 13 },
    { /* 0x5a */ "Red Highlight LP Color", 0x2b14562, 0x2b14582, indexCPS2_Cyclops, 13 },
    { /* 0x5b */ "LK", 0x2b14582, 0x2b145a2, indexCPS2_Cyclops, 13 },
    { /* 0x5c */ "Red Highlight LK Color", 0x2b145a2, 0x2b145c2, indexCPS2_Cyclops, 13 },
    { /* 0x5d */ "HP", 0x2b145c2, 0x2b145e2, indexCPS2_Cyclops, 13 },
    { /* 0x5e */ "Red Highlight HP Color", 0x2b145e2, 0x2b14602, indexCPS2_Cyclops, 13 },
    { /* 0x5f */ "HK", 0x2b14602, 0x2b14622, indexCPS2_Cyclops, 13 },
    { /* 0x60 */ "Red Highlight HK Color", 0x2b14622, 0x2b14642, indexCPS2_Cyclops, 13 },
    { /* 0x61 */ "A1", 0x2b14642, 0x2b14662, indexCPS2_Cyclops, 13 },
    { /* 0x62 */ "Red Highlight A1 Color", 0x2b14662, 0x2b14682, indexCPS2_Cyclops, 13 },
    { /* 0x63 */ "A2", 0x2b14682, 0x2b146a2, indexCPS2_Cyclops, 13 },
    { /* 0x64 */ "Red Highlight A2 Color", 0x2b146a2, 0x2b146c2, indexCPS2_Cyclops, 13 },
};

const sDescTreeNode MVC2_A_CYCLOPS_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_LP, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_LK, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_HP, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_HK, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_A1, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_A2, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_LP[] =
{
    { "Main Color LP", 0x2c0eba2, 0x2c0ebc2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "(02) Wolverine's Claws", 0x2c0ebc2, 0x2c0ebe2, indexCPS2_Wolverine, 1 },
    { "(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0ebe2, 0x2c0ec02, indexCPS2_Wolverine, 2 },
    { "(04) Not Used", 0x2c0ec02, 0x2c0ec22, indexCPS2_Wolverine, 3 },
    { "(05) Not Used", 0x2c0ec22, 0x2c0ec42, indexCPS2_Wolverine, 4 },
    { "(06) Not Used", 0x2c0ec42, 0x2c0ec62, indexCPS2_Wolverine, 5 },
    { "(07) Not Used", 0x2c0ec62, 0x2c0ec82, indexCPS2_Wolverine, 6 },
    { "(08) Not Used", 0x2c0ec82, 0x2c0eca2, indexCPS2_Wolverine, 7 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_LK[] =
{
    { "Main Color LK", 0x2c0eca2, 0x2c0ecc2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "(02) Wolverine's Claws", 0x2c0ecc2, 0x2c0ece2, indexCPS2_Wolverine, 1 },
    { "(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0ece2, 0x2c0ed02, indexCPS2_Wolverine, 2 },
    { "(04) Not Used", 0x2c0ed02, 0x2c0ed22, indexCPS2_Wolverine, 3 },
    { "(05) Not Used", 0x2c0ed22, 0x2c0ed42, indexCPS2_Wolverine, 4 },
    { "(06) Not Used", 0x2c0ed42, 0x2c0ed62, indexCPS2_Wolverine, 5 },
    { "(07) Not Used", 0x2c0ed62, 0x2c0ed82, indexCPS2_Wolverine, 6 },
    { "(08) Not Used", 0x2c0ed82, 0x2c0eda2, indexCPS2_Wolverine, 7 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_HP[] =
{
    { "Main Color HP", 0x2c0eda2, 0x2c0edc2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "(02) Wolverine's Claws", 0x2c0edc2, 0x2c0ede2, indexCPS2_Wolverine, 1 },
    { "(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0ede2, 0x2c0ee02, indexCPS2_Wolverine, 2 },
    { "(04) Not Used", 0x2c0ee02, 0x2c0ee22, indexCPS2_Wolverine, 3 },
    { "(05) Not Used", 0x2c0ee22, 0x2c0ee42, indexCPS2_Wolverine, 4 },
    { "(06) Not Used", 0x2c0ee42, 0x2c0ee62, indexCPS2_Wolverine, 5 },
    { "(07) Not Used", 0x2c0ee62, 0x2c0ee82, indexCPS2_Wolverine, 6 },
    { "(08) Not Used", 0x2c0ee82, 0x2c0eea2, indexCPS2_Wolverine, 7 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_HK[] =
{
    { "Main Color HK", 0x2c0eea2, 0x2c0eec2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "(02) Wolverine's Claws", 0x2c0eec2, 0x2c0eee2, indexCPS2_Wolverine, 1 },
    { "(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0eee2, 0x2c0ef02, indexCPS2_Wolverine, 2 },
    { "(04) Not Used", 0x2c0ef02, 0x2c0ef22, indexCPS2_Wolverine, 3 },
    { "(05) Not Used", 0x2c0ef22, 0x2c0ef42, indexCPS2_Wolverine, 4 },
    { "(06) Not Used", 0x2c0ef42, 0x2c0ef62, indexCPS2_Wolverine, 5 },
    { "(07) Not Used", 0x2c0ef62, 0x2c0ef82, indexCPS2_Wolverine, 6 },
    { "(08) Not Used", 0x2c0ef82, 0x2c0efa2, indexCPS2_Wolverine, 7 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_A1[] =
{
    { "Main Color A1", 0x2c0efa2, 0x2c0efc2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "(02) Wolverine's Claws", 0x2c0efc2, 0x2c0efe2, indexCPS2_Wolverine, 1 },
    { "(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0efe2, 0x2c0f002, indexCPS2_Wolverine, 2 },
    { "(04) Not Used", 0x2c0f002, 0x2c0f022, indexCPS2_Wolverine, 3 },
    { "(05) Not Used", 0x2c0f022, 0x2c0f042, indexCPS2_Wolverine, 4 },
    { "(06) Not Used", 0x2c0f042, 0x2c0f062, indexCPS2_Wolverine, 5 },
    { "(07) Not Used", 0x2c0f062, 0x2c0f082, indexCPS2_Wolverine, 6 },
    { "(08) Not Used", 0x2c0f082, 0x2c0f0a2, indexCPS2_Wolverine, 7 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_A2[] =
{
    { "Main Color A2", 0x2c0f0a2, 0x2c0f0c2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "(02) Wolverine's Claws", 0x2c0f0c2, 0x2c0f0e2, indexCPS2_Wolverine, 1 },
    { "(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0f0e2, 0x2c0f102, indexCPS2_Wolverine, 2 },
    { "(04) Not Used", 0x2c0f102, 0x2c0f122, indexCPS2_Wolverine, 3 },
    { "(05) Not Used", 0x2c0f122, 0x2c0f142, indexCPS2_Wolverine, 4 },
    { "(06) Not Used", 0x2c0f142, 0x2c0f162, indexCPS2_Wolverine, 5 },
    { "(07) Not Used", 0x2c0f162, 0x2c0f182, indexCPS2_Wolverine, 6 },
    { "(08) Not Used", 0x2c0f182, 0x2c0f1a2, indexCPS2_Wolverine, 7 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2c0f1a2, 0x2c0f1c2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Burning Dark 2", 0x2c0f1c2, 0x2c0f1e2, indexCPS2_Wolverine, 1 },
    { "Burning Light", 0x2c0f1e2, 0x2c0f202, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Burning Light 2", 0x2c0f202, 0x2c0f222, indexCPS2_Wolverine, 1 },
    { "Shocked Dark", 0x2c0f222, 0x2c0f242, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Shocked Dark 2", 0x2c0f242, 0x2c0f262, indexCPS2_Wolverine, 1 },
    { "Shocked Light", 0x2c0f262, 0x2c0f282, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Shocked Light 2", 0x2c0f282, 0x2c0f2a2, indexCPS2_Wolverine, 1 },
    { "Dark Burning Dark", 0x2c0f2a2, 0x2c0f2c2, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Dark Burning Dark 2", 0x2c0f2c2, 0x2c0f2e2, indexCPS2_Wolverine, 1 },
    { "Dark Burning Light", 0x2c0f2e2, 0x2c0f302, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Dark Burning Light 2", 0x2c0f302, 0x2c0f322, indexCPS2_Wolverine, 1 },
    { "Kinetic Charge Dark", 0x2c0f322, 0x2c0f342, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Kinetic Charge Dark 2", 0x2c0f342, 0x2c0f362, indexCPS2_Wolverine, 1 },
    { "Kinetic Charge Light", 0x2c0f362, 0x2c0f382, indexCPS2_Wolverine, 0, &pairWolvieClaws },
    { "Kinetic Charge Light 2", 0x2c0f382, 0x2c0f3a2, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_EXTRAS[] =
{
    { /* 0x11 */ "Fatal Claw (Effect for All buttons)", 0x2c0f3a2, 0x2c0f3c2, indexCPS2_Wolverine, 11 },
};

const sDescTreeNode MVC2_A_WOLVERINE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_LP, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_LK, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_HP, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_HK, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_A1, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_A2, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_LP[] =
{
    { "Main Color LP", 0x2d104e2, 0x2d10502, indexCPS2_Psylocke, 0 },
    { "(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10502, 0x2d10522, indexCPS2_Psylocke, 1 },
    { "(03) PsyThrust / PsyBlade / Teleport", 0x2d10522, 0x2d10542, indexCPS2_Psylocke, 2 },
    { "(04) PsyThrust (Psylocke Frame during super)", 0x2d10542, 0x2d10562, indexCPS2_Psylocke, 3 },
    { "(05) Not Used", 0x2d10562, 0x2d10582, indexCPS2_Psylocke, 4 },
    { "(06) Not Used", 0x2d10582, 0x2d105a2, indexCPS2_Psylocke, 5 },
    { "(07) Not Used", 0x2d105a2, 0x2d105c2, indexCPS2_Psylocke, 6 },
    { "(08) Not Used", 0x2d105c2, 0x2d105e2, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_LK[] =
{
    { "Main Color LK", 0x2d105e2, 0x2d10602, indexCPS2_Psylocke, 0 },
    { "(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10602, 0x2d10622, indexCPS2_Psylocke, 1 },
    { "(03) PsyThrust / PsyBlade / Teleport", 0x2d10622, 0x2d10642, indexCPS2_Psylocke, 2 },
    { "(04) PsyThrust (Psylocke Frame during super)", 0x2d10642, 0x2d10662, indexCPS2_Psylocke, 3 },
    { "(05) Not Used", 0x2d10662, 0x2d10682, indexCPS2_Psylocke, 4 },
    { "(06) Not Used", 0x2d10682, 0x2d106a2, indexCPS2_Psylocke, 5 },
    { "(07) Not Used", 0x2d106a2, 0x2d106c2, indexCPS2_Psylocke, 6 },
    { "(08) Not Used", 0x2d106c2, 0x2d106e2, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_HP[] =
{
    { "Main Color HP", 0x2d106e2, 0x2d10702, indexCPS2_Psylocke, 0 },
    { "(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10702, 0x2d10722, indexCPS2_Psylocke, 1 },
    { "(03) PsyThrust / PsyBlade / Teleport", 0x2d10722, 0x2d10742, indexCPS2_Psylocke, 2 },
    { "(04) PsyThrust (Psylocke Frame during super)", 0x2d10742, 0x2d10762, indexCPS2_Psylocke, 3 },
    { "(05) Not Used", 0x2d10762, 0x2d10782, indexCPS2_Psylocke, 4 },
    { "(06) Not Used", 0x2d10782, 0x2d107a2, indexCPS2_Psylocke, 5 },
    { "(07) Not Used", 0x2d107a2, 0x2d107c2, indexCPS2_Psylocke, 6 },
    { "(08) Not Used", 0x2d107c2, 0x2d107e2, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_HK[] =
{
    { "Main Color HK", 0x2d107e2, 0x2d10802, indexCPS2_Psylocke, 0 },
    { "(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10802, 0x2d10822, indexCPS2_Psylocke, 1 },
    { "(03) PsyThrust / PsyBlade / Teleport", 0x2d10822, 0x2d10842, indexCPS2_Psylocke, 2 },
    { "(04) PsyThrust (Psylocke Frame during super)", 0x2d10842, 0x2d10862, indexCPS2_Psylocke, 3 },
    { "(05) Not Used", 0x2d10862, 0x2d10882, indexCPS2_Psylocke, 4 },
    { "(06) Not Used", 0x2d10882, 0x2d108a2, indexCPS2_Psylocke, 5 },
    { "(07) Not Used", 0x2d108a2, 0x2d108c2, indexCPS2_Psylocke, 6 },
    { "(08) Not Used", 0x2d108c2, 0x2d108e2, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_A1[] =
{
    { "Main Color A1", 0x2d108e2, 0x2d10902, indexCPS2_Psylocke, 0 },
    { "(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10902, 0x2d10922, indexCPS2_Psylocke, 1 },
    { "(03) PsyThrust / PsyBlade / Teleport", 0x2d10922, 0x2d10942, indexCPS2_Psylocke, 2 },
    { "(04) PsyThrust (Psylocke Frame during super)", 0x2d10942, 0x2d10962, indexCPS2_Psylocke, 3 },
    { "(05) Not Used", 0x2d10962, 0x2d10982, indexCPS2_Psylocke, 4 },
    { "(06) Not Used", 0x2d10982, 0x2d109a2, indexCPS2_Psylocke, 5 },
    { "(07) Not Used", 0x2d109a2, 0x2d109c2, indexCPS2_Psylocke, 6 },
    { "(08) Not Used", 0x2d109c2, 0x2d109e2, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_A2[] =
{
    { "Main Color A2", 0x2d109e2, 0x2d10a02, indexCPS2_Psylocke, 0 },
    { "(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10a02, 0x2d10a22, indexCPS2_Psylocke, 1 },
    { "(03) PsyThrust / PsyBlade / Teleport", 0x2d10a22, 0x2d10a42, indexCPS2_Psylocke, 2 },
    { "(04) PsyThrust (Psylocke Frame during super)", 0x2d10a42, 0x2d10a62, indexCPS2_Psylocke, 3 },
    { "(05) Not Used", 0x2d10a62, 0x2d10a82, indexCPS2_Psylocke, 4 },
    { "(06) Not Used", 0x2d10a82, 0x2d10aa2, indexCPS2_Psylocke, 5 },
    { "(07) Not Used", 0x2d10aa2, 0x2d10ac2, indexCPS2_Psylocke, 6 },
    { "(08) Not Used", 0x2d10ac2, 0x2d10ae2, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2d10ae2, 0x2d10b02, indexCPS2_Psylocke, 0 },
    { "Burning Light", 0x2d10b02, 0x2d10b22, indexCPS2_Psylocke, 0 },
    { "Shocked Dark", 0x2d10b22, 0x2d10b42, indexCPS2_Psylocke, 0 },
    { "Shocked Light", 0x2d10b42, 0x2d10b62, indexCPS2_Psylocke, 0 },
    { "Dark Burning Dark", 0x2d10b62, 0x2d10b82, indexCPS2_Psylocke, 0 },
    { "Dark Burning Light", 0x2d10b82, 0x2d10ba2, indexCPS2_Psylocke, 0 },
    { "Kinetic Charge Dark", 0x2d10ba2, 0x2d10bc2, indexCPS2_Psylocke, 0 },
    { "Kinetic Charge Light", 0x2d10bc2, 0x2d10be2, indexCPS2_Psylocke, 0 },
};

const sDescTreeNode MVC2_A_PSYLOCKE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_LP, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_LK, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_HP, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_HK, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_A1, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_A2, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_LP[] =
{
    { "Main Color LP", 0x2dfb5c2, 0x2dfb5e2, indexCPS2_Iceman, 0 },
    { "(02) Stance Frame", 0x2dfb5e2, 0x2dfb602, indexCPS2_Iceman, 1 },
    { "(03) Same as Button Color (copy Main Color for that button)", 0x2dfb602, 0x2dfb622, indexCPS2_Iceman, 2 },
    { "(04) Taunt -Bobby Drake", 0x2dfb622, 0x2dfb642, indexCPS2_Iceman, 3 },
    { "(05) Intro - Iceman Letters Melting", 0x2dfb642, 0x2dfb662, indexCPS2_Iceman, 4 },
    { "(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb662, 0x2dfb682, indexCPS2_Iceman, 5 },
    { "(07) Not Used", 0x2dfb682, 0x2dfb6a2, indexCPS2_Iceman, 6 },
    { "(08) Not Used", 0x2dfb6a2, 0x2dfb6c2, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_LK[] =
{
    { "Main Color LK", 0x2dfb6c2, 0x2dfb6e2, indexCPS2_Iceman, 0 },
    { "(02) Stance Frame", 0x2dfb6e2, 0x2dfb702, indexCPS2_Iceman, 1 },
    { "(03) Same as Button Color (copy Main Color for that button)", 0x2dfb702, 0x2dfb722, indexCPS2_Iceman, 2 },
    { "(04) Taunt -Bobby Drake", 0x2dfb722, 0x2dfb742, indexCPS2_Iceman, 3 },
    { "(05) Intro - Iceman Letters Melting", 0x2dfb742, 0x2dfb762, indexCPS2_Iceman, 4 },
    { "(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb762, 0x2dfb782, indexCPS2_Iceman, 5 },
    { "(07) Not Used", 0x2dfb782, 0x2dfb7a2, indexCPS2_Iceman, 6 },
    { "(08) Not Used", 0x2dfb7a2, 0x2dfb7c2, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_HP[] =
{
    { "Main Color HP", 0x2dfb7c2, 0x2dfb7e2, indexCPS2_Iceman, 0 },
    { "(02) Stance Frame", 0x2dfb7e2, 0x2dfb802, indexCPS2_Iceman, 1 },
    { "(03) Same as Button Color (copy Main Color for that button)", 0x2dfb802, 0x2dfb822, indexCPS2_Iceman, 2 },
    { "(04) Taunt -Bobby Drake", 0x2dfb822, 0x2dfb842, indexCPS2_Iceman, 3 },
    { "(05) Intro - Iceman Letters Melting", 0x2dfb842, 0x2dfb862, indexCPS2_Iceman, 4 },
    { "(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb862, 0x2dfb882, indexCPS2_Iceman, 5 },
    { "(07) Not Used", 0x2dfb882, 0x2dfb8a2, indexCPS2_Iceman, 6 },
    { "(08) Not Used", 0x2dfb8a2, 0x2dfb8c2, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_HK[] =
{
    { "Main Color HK", 0x2dfb8c2, 0x2dfb8e2, indexCPS2_Iceman, 0 },
    { "(02) Stance Frame", 0x2dfb8e2, 0x2dfb902, indexCPS2_Iceman, 1 },
    { "(03) Same as Button Color (copy Main Color for that button)", 0x2dfb902, 0x2dfb922, indexCPS2_Iceman, 2 },
    { "(04) Taunt -Bobby Drake", 0x2dfb922, 0x2dfb942, indexCPS2_Iceman, 3 },
    { "(05) Intro - Iceman Letters Melting", 0x2dfb942, 0x2dfb962, indexCPS2_Iceman, 4 },
    { "(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb962, 0x2dfb982, indexCPS2_Iceman, 5 },
    { "(07) Not Used", 0x2dfb982, 0x2dfb9a2, indexCPS2_Iceman, 6 },
    { "(08) Not Used", 0x2dfb9a2, 0x2dfb9c2, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_A1[] =
{
    { "Main Color A1", 0x2dfb9c2, 0x2dfb9e2, indexCPS2_Iceman, 0 },
    { "(02) Stance Frame", 0x2dfb9e2, 0x2dfba02, indexCPS2_Iceman, 1 },
    { "(03) Same as Button Color (copy Main Color for that button)", 0x2dfba02, 0x2dfba22, indexCPS2_Iceman, 2 },
    { "(04) Taunt -Bobby Drake", 0x2dfba22, 0x2dfba42, indexCPS2_Iceman, 3 },
    { "(05) Intro - Iceman Letters Melting", 0x2dfba42, 0x2dfba62, indexCPS2_Iceman, 4 },
    { "(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfba62, 0x2dfba82, indexCPS2_Iceman, 5 },
    { "(07) Not Used", 0x2dfba82, 0x2dfbaa2, indexCPS2_Iceman, 6 },
    { "(08) Not Used", 0x2dfbaa2, 0x2dfbac2, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_A2[] =
{
    { "Main Color A2", 0x2dfbac2, 0x2dfbae2, indexCPS2_Iceman, 0 },
    { "(02) Stance Frame", 0x2dfbae2, 0x2dfbb02, indexCPS2_Iceman, 1 },
    { "(03) Same as Button Color (copy Main Color for that button)", 0x2dfbb02, 0x2dfbb22, indexCPS2_Iceman, 2 },
    { "(04) Taunt -Bobby Drake", 0x2dfbb22, 0x2dfbb42, indexCPS2_Iceman, 3 },
    { "(05) Intro - Iceman Letters Melting", 0x2dfbb42, 0x2dfbb62, indexCPS2_Iceman, 4 },
    { "(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfbb62, 0x2dfbb82, indexCPS2_Iceman, 5 },
    { "(07) Not Used", 0x2dfbb82, 0x2dfbba2, indexCPS2_Iceman, 6 },
    { "(08) Not Used", 0x2dfbba2, 0x2dfbbc2, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2dfbbc2, 0x2dfbbe2, indexCPS2_Iceman, 0 },
    { "Burning Light", 0x2dfbbe2, 0x2dfbc02, indexCPS2_Iceman, 0 },
    { "Shocked Dark", 0x2dfbc02, 0x2dfbc22, indexCPS2_Iceman, 0 },
    { "Shocked Light", 0x2dfbc22, 0x2dfbc42, indexCPS2_Iceman, 0 },
    { "Dark Burning Dark", 0x2dfbc42, 0x2dfbc62, indexCPS2_Iceman, 0 },
    { "Dark Burning Light", 0x2dfbc62, 0x2dfbc82, indexCPS2_Iceman, 0 },
    { "Kinetic Charge Dark", 0x2dfbc82, 0x2dfbca2, indexCPS2_Iceman, 0 },
    { "Kinetic Charge Light", 0x2dfbca2, 0x2dfbcc2, indexCPS2_Iceman, 0 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Icebeam Frame 1 (all buttons)", 0x2dfbcc2, 0x2dfbce2, indexCPS2_Iceman, 11 },
    { /* 0x0a */ "Icebeam Frame 2 (all buttons)", 0x2dfbce2, 0x2dfbd02, indexCPS2_Iceman, 11 },
    { /* 0x0b */ "Icebeam Frame 3 (all buttons)", 0x2dfbd02, 0x2dfbd22, indexCPS2_Iceman, 11 },
    { /* 0x0c */ "Icebeam Frame 4 (all buttons)", 0x2dfbd22, 0x2dfbd42, indexCPS2_Iceman, 11 },
    { /* 0x0d */ "Not Used", 0x2dfbd42, 0x2dfbd62 },
    { /* 0x0e */ "Not Used", 0x2dfbd62, 0x2dfbd82 },
    { /* 0x0f */ "Not Used", 0x2dfbd82, 0x2dfbda2 },
    { /* 0x10 */ "Not Used", 0x2dfbda2, 0x2dfbdc2 },
    { /* 0x11 */ "Not Used", 0x2dfbdc2, 0x2dfbde2 },
    { /* 0x12 */ "Not Used", 0x2dfbde2, 0x2dfbe02 },
    { /* 0x13 */ "Not Used", 0x2dfbe02, 0x2dfbe22 },
    { /* 0x14 */ "Not Used", 0x2dfbe22, 0x2dfbe42 },
    { /* 0x15 */ "Not Used", 0x2dfbe42, 0x2dfbe62 },
    { /* 0x16 */ "Not Used", 0x2dfbe62, 0x2dfbe82 },
    { /* 0x17 */ "Not Used", 0x2dfbe82, 0x2dfbea2 },
    { /* 0x18 */ "Not Used", 0x2dfbea2, 0x2dfbec2 },
    { /* 0x19 */ "Not Used", 0x2dfbec2, 0x2dfbee2 },
    { /* 0x1a */ "Not Used", 0x2dfbee2, 0x2dfbf02 },
    { /* 0x1b */ "Not Used", 0x2dfbf02, 0x2dfbf22 },
    { /* 0x1c */ "Not Used", 0x2dfbf22, 0x2dfbf42 },
    { /* 0x1d */ "Not Used", 0x2dfbf42, 0x2dfbf62 },
    { /* 0x1e */ "Not Used", 0x2dfbf62, 0x2dfbf82 },
    { /* 0x1f */ "Not Used", 0x2dfbf82, 0x2dfbfa2 },
    { /* 0x20 */ "Not Used", 0x2dfbfa2, 0x2dfbfc2 },
    { /* 0x21 */ "LP - Shine Frame 1", 0x2dfbfc2, 0x2dfbfe2, indexCPS2_Iceman, 0 },
    { /* 0x22 */ "LP - Shine Frame 2", 0x2dfbfe2, 0x2dfc002, indexCPS2_Iceman, 0 },
    { /* 0x23 */ "LP - Shine Frame 3", 0x2dfc002, 0x2dfc022, indexCPS2_Iceman, 0 },
    { /* 0x24 */ "LP - Shine Frame 4", 0x2dfc022, 0x2dfc042, indexCPS2_Iceman, 0 },
    { /* 0x25 */ "LP - Shine Frame 5", 0x2dfc042, 0x2dfc062, indexCPS2_Iceman, 0 },
    { /* 0x26 */ "LP - Shine Frame 6", 0x2dfc062, 0x2dfc082, indexCPS2_Iceman, 0 },
    { /* 0x27 */ "LP - Shine Frame 7", 0x2dfc082, 0x2dfc0a2, indexCPS2_Iceman, 0 },
    { /* 0x28 */ "LK - Shine Frame 1", 0x2dfc0a2, 0x2dfc0c2, indexCPS2_Iceman, 0 },
    { /* 0x29 */ "LK - Shine Frame 2", 0x2dfc0c2, 0x2dfc0e2, indexCPS2_Iceman, 0 },
    { /* 0x2a */ "LK - Shine Frame 3", 0x2dfc0e2, 0x2dfc102, indexCPS2_Iceman, 0 },
    { /* 0x2b */ "LK - Shine Frame 4", 0x2dfc102, 0x2dfc122, indexCPS2_Iceman, 0 },
    { /* 0x2c */ "LK - Shine Frame 5", 0x2dfc122, 0x2dfc142, indexCPS2_Iceman, 0 },
    { /* 0x2d */ "LK - Shine Frame 6", 0x2dfc142, 0x2dfc162, indexCPS2_Iceman, 0 },
    { /* 0x2e */ "LK - Shine Frame 7", 0x2dfc162, 0x2dfc182, indexCPS2_Iceman, 0 },
    { /* 0x2f */ "HP - Shine Frame 1", 0x2dfc182, 0x2dfc1a2, indexCPS2_Iceman, 0 },
    { /* 0x30 */ "HP - Shine Frame 2", 0x2dfc1a2, 0x2dfc1c2, indexCPS2_Iceman, 0 },
    { /* 0x31 */ "HP - Shine Frame 3", 0x2dfc1c2, 0x2dfc1e2, indexCPS2_Iceman, 0 },
    { /* 0x32 */ "HP - Shine Frame 4", 0x2dfc1e2, 0x2dfc202, indexCPS2_Iceman, 0 },
    { /* 0x33 */ "HP - Shine Frame 5", 0x2dfc202, 0x2dfc222, indexCPS2_Iceman, 0 },
    { /* 0x34 */ "HP - Shine Frame 6", 0x2dfc222, 0x2dfc242, indexCPS2_Iceman, 0 },
    { /* 0x35 */ "HP - Shine Frame 7", 0x2dfc242, 0x2dfc262, indexCPS2_Iceman, 0 },
    { /* 0x36 */ "HK - Shine Frame 1", 0x2dfc262, 0x2dfc282, indexCPS2_Iceman, 0 },
    { /* 0x37 */ "HK - Shine Frame 2", 0x2dfc282, 0x2dfc2a2, indexCPS2_Iceman, 0 },
    { /* 0x38 */ "HK - Shine Frame 3", 0x2dfc2a2, 0x2dfc2c2, indexCPS2_Iceman, 0 },
    { /* 0x39 */ "HK - Shine Frame 4", 0x2dfc2c2, 0x2dfc2e2, indexCPS2_Iceman, 0 },
    { /* 0x3a */ "HK - Shine Frame 5", 0x2dfc2e2, 0x2dfc302, indexCPS2_Iceman, 0 },
    { /* 0x3b */ "HK - Shine Frame 6", 0x2dfc302, 0x2dfc322, indexCPS2_Iceman, 0 },
    { /* 0x3c */ "HK - Shine Frame 7", 0x2dfc322, 0x2dfc342, indexCPS2_Iceman, 0 },
    { /* 0x3d */ "A1 - Shine Frame 1", 0x2dfc342, 0x2dfc362, indexCPS2_Iceman, 0 },
    { /* 0x3e */ "A1 - Shine Frame 2", 0x2dfc362, 0x2dfc382, indexCPS2_Iceman, 0 },
    { /* 0x3f */ "A1 - Shine Frame 3", 0x2dfc382, 0x2dfc3a2, indexCPS2_Iceman, 0 },
    { /* 0x40 */ "A1 - Shine Frame 4", 0x2dfc3a2, 0x2dfc3c2, indexCPS2_Iceman, 0 },
    { /* 0x41 */ "A1 - Shine Frame 5", 0x2dfc3c2, 0x2dfc3e2, indexCPS2_Iceman, 0 },
    { /* 0x42 */ "A1 - Shine Frame 6", 0x2dfc3e2, 0x2dfc402, indexCPS2_Iceman, 0 },
    { /* 0x43 */ "A1 - Shine Frame 7", 0x2dfc402, 0x2dfc422, indexCPS2_Iceman, 0 },
    { /* 0x44 */ "A2 - Shine Frame 1", 0x2dfc422, 0x2dfc442, indexCPS2_Iceman, 0 },
    { /* 0x45 */ "A2 - Shine Frame 2", 0x2dfc442, 0x2dfc462, indexCPS2_Iceman, 0 },
    { /* 0x46 */ "A2 - Shine Frame 3", 0x2dfc462, 0x2dfc482, indexCPS2_Iceman, 0 },
    { /* 0x47 */ "A2 - Shine Frame 4", 0x2dfc482, 0x2dfc4a2, indexCPS2_Iceman, 0 },
    { /* 0x48 */ "A2 - Shine Frame 5", 0x2dfc4a2, 0x2dfc4c2, indexCPS2_Iceman, 0 },
    { /* 0x49 */ "A2 - Shine Frame 6", 0x2dfc4c2, 0x2dfc4e2, indexCPS2_Iceman, 0 },
    { /* 0x4a */ "A2 - Shine Frame 7", 0x2dfc4e2, 0x2dfc502, indexCPS2_Iceman, 0 },
};

const sDescTreeNode MVC2_A_ICEMAN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_LP[] =
{
    { "Main Color LP", 0x2ee2142, 0x2ee2162, indexCPS2_Rogue, 0 },
    { "(02) Taunt - Heart", 0x2ee2162, 0x2ee2182, indexCPS2_Rogue, 1 },
    { "(03) Intro (Ground Dust)", 0x2ee2182, 0x2ee21a2, indexCPS2_Rogue, 2 },
    { "(04) Not Used", 0x2ee21a2, 0x2ee21c2, indexCPS2_Rogue, 3 },
    { "(05) Dash Shadows", 0x2ee21c2, 0x2ee21e2, indexCPS2_Rogue, 4 },
    { "(06) Not Used", 0x2ee21e2, 0x2ee2202, indexCPS2_Rogue, 5 },
    { "(07) Not Used", 0x2ee2202, 0x2ee2222, indexCPS2_Rogue, 6 },
    { "(08) Not Used", 0x2ee2222, 0x2ee2242, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_LK[] =
{
    { "Main Color LK", 0x2ee2242, 0x2ee2262, indexCPS2_Rogue, 0 },
    { "(02) Taunt - Heart", 0x2ee2262, 0x2ee2282, indexCPS2_Rogue, 1 },
    { "(03) Intro (Ground Dust)", 0x2ee2282, 0x2ee22a2, indexCPS2_Rogue, 2 },
    { "(04) Not Used", 0x2ee22a2, 0x2ee22c2, indexCPS2_Rogue, 3 },
    { "(05) Dash Shadows", 0x2ee22c2, 0x2ee22e2, indexCPS2_Rogue, 4 },
    { "(06) Not Used", 0x2ee22e2, 0x2ee2302, indexCPS2_Rogue, 5 },
    { "(07) Not Used", 0x2ee2302, 0x2ee2322, indexCPS2_Rogue, 6 },
    { "(08) Not Used", 0x2ee2322, 0x2ee2342, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_HP[] =
{
    { "Main Color HP", 0x2ee2342, 0x2ee2362, indexCPS2_Rogue, 0 },
    { "(02) Taunt - Heart", 0x2ee2362, 0x2ee2382, indexCPS2_Rogue, 1 },
    { "(03) Intro (Ground Dust)", 0x2ee2382, 0x2ee23a2, indexCPS2_Rogue, 2 },
    { "(04) Not Used", 0x2ee23a2, 0x2ee23c2, indexCPS2_Rogue, 3 },
    { "(05) Dash Shadows", 0x2ee23c2, 0x2ee23e2, indexCPS2_Rogue, 4 },
    { "(06) Not Used", 0x2ee23e2, 0x2ee2402, indexCPS2_Rogue, 5 },
    { "(07) Not Used", 0x2ee2402, 0x2ee2422, indexCPS2_Rogue, 6 },
    { "(08) Not Used", 0x2ee2422, 0x2ee2442, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_HK[] =
{
    { "Main Color HK", 0x2ee2442, 0x2ee2462, indexCPS2_Rogue, 0 },
    { "(02) Taunt - Heart", 0x2ee2462, 0x2ee2482, indexCPS2_Rogue, 1 },
    { "(03) Intro (Ground Dust)", 0x2ee2482, 0x2ee24a2, indexCPS2_Rogue, 2 },
    { "(04) Not Used", 0x2ee24a2, 0x2ee24c2, indexCPS2_Rogue, 3 },
    { "(05) Dash Shadows", 0x2ee24c2, 0x2ee24e2, indexCPS2_Rogue, 4 },
    { "(06) Not Used", 0x2ee24e2, 0x2ee2502, indexCPS2_Rogue, 5 },
    { "(07) Not Used", 0x2ee2502, 0x2ee2522, indexCPS2_Rogue, 6 },
    { "(08) Not Used", 0x2ee2522, 0x2ee2542, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_A1[] =
{
    { "Main Color A1", 0x2ee2542, 0x2ee2562, indexCPS2_Rogue, 0 },
    { "(02) Taunt - Heart", 0x2ee2562, 0x2ee2582, indexCPS2_Rogue, 1 },
    { "(03) Intro (Ground Dust)", 0x2ee2582, 0x2ee25a2, indexCPS2_Rogue, 2 },
    { "(04) Not Used", 0x2ee25a2, 0x2ee25c2, indexCPS2_Rogue, 3 },
    { "(05) Dash Shadows", 0x2ee25c2, 0x2ee25e2, indexCPS2_Rogue, 4 },
    { "(06) Not Used", 0x2ee25e2, 0x2ee2602, indexCPS2_Rogue, 5 },
    { "(07) Not Used", 0x2ee2602, 0x2ee2622, indexCPS2_Rogue, 6 },
    { "(08) Not Used", 0x2ee2622, 0x2ee2642, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_A2[] =
{
    { "Main Color A2", 0x2ee2642, 0x2ee2662, indexCPS2_Rogue, 0 },
    { "(02) Taunt - Heart", 0x2ee2662, 0x2ee2682, indexCPS2_Rogue, 1 },
    { "(03) Intro (Ground Dust)", 0x2ee2682, 0x2ee26a2, indexCPS2_Rogue, 2 },
    { "(04) Not Used", 0x2ee26a2, 0x2ee26c2, indexCPS2_Rogue, 3 },
    { "(05) Dash Shadows", 0x2ee26c2, 0x2ee26e2, indexCPS2_Rogue, 4 },
    { "(06) Not Used", 0x2ee26e2, 0x2ee2702, indexCPS2_Rogue, 5 },
    { "(07) Not Used", 0x2ee2702, 0x2ee2722, indexCPS2_Rogue, 6 },
    { "(08) Not Used", 0x2ee2722, 0x2ee2742, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2ee2742, 0x2ee2762, indexCPS2_Rogue, 0 },
    { "Burning Light", 0x2ee2762, 0x2ee2782, indexCPS2_Rogue, 0 },
    { "Shocked Dark", 0x2ee2782, 0x2ee27a2, indexCPS2_Rogue, 0 },
    { "Shocked Light", 0x2ee27a2, 0x2ee27c2, indexCPS2_Rogue, 0 },
    { "Dark Burning Dark", 0x2ee27c2, 0x2ee27e2, indexCPS2_Rogue, 0 },
    { "Dark Burning Light", 0x2ee27e2, 0x2ee2802, indexCPS2_Rogue, 0 },
    { "Kinetic Charge Dark", 0x2ee2802, 0x2ee2822, indexCPS2_Rogue, 0 },
    { "Kinetic Charge Light", 0x2ee2822, 0x2ee2842, indexCPS2_Rogue, 0 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x2ee2842, 0x2ee2862 },
    { /* 0x0a */ "Not Used", 0x2ee2862, 0x2ee2882 },
    { /* 0x0b */ "Not Used", 0x2ee2882, 0x2ee28a2 },
    { /* 0x0c */ "Not Used", 0x2ee28a2, 0x2ee28c2 },
    { /* 0x0d */ "Not Used", 0x2ee28c2, 0x2ee28e2 },
    { /* 0x0e */ "Not Used", 0x2ee28e2, 0x2ee2902 },
    { /* 0x0f */ "Not Used", 0x2ee2902, 0x2ee2922 },
    { /* 0x10 */ "Not Used", 0x2ee2922, 0x2ee2942 },
    { /* 0x11 */ "Not Used", 0x2ee2942, 0x2ee2962 },
    { /* 0x12 */ "Not Used", 0x2ee2962, 0x2ee2982 },
    { /* 0x13 */ "Not Used", 0x2ee2982, 0x2ee29a2 },
    { /* 0x14 */ "Not Used", 0x2ee29a2, 0x2ee29c2 },
    { /* 0x15 */ "Not Used", 0x2ee29c2, 0x2ee29e2 },
    { /* 0x16 */ "Not Used", 0x2ee29e2, 0x2ee2a02 },
    { /* 0x17 */ "Not Used", 0x2ee2a02, 0x2ee2a22 },
    { /* 0x18 */ "Not Used", 0x2ee2a22, 0x2ee2a42 },
    { /* 0x19 */ "Not Used", 0x2ee2a42, 0x2ee2a62 },
    { /* 0x1a */ "Not Used", 0x2ee2a62, 0x2ee2a82 },
    { /* 0x1b */ "Not Used", 0x2ee2a82, 0x2ee2aa2 },
    { /* 0x1c */ "Not Used", 0x2ee2aa2, 0x2ee2ac2 },
    { /* 0x1d */ "LP - Winpose", 0x2ee2ac2, 0x2ee2ae2, indexCPS2_Rogue, 11 },
    { /* 0x1e */ "LK - Winpose", 0x2ee2ae2, 0x2ee2b02, indexCPS2_Rogue, 11 },
    { /* 0x1f */ "HP - Winpose", 0x2ee2b02, 0x2ee2b22, indexCPS2_Rogue, 11 },
    { /* 0x20 */ "HK - Winpose", 0x2ee2b22, 0x2ee2b42, indexCPS2_Rogue, 11 },
    { /* 0x21 */ "A1 - Winpose", 0x2ee2b42, 0x2ee2b62, indexCPS2_Rogue, 11 },
    { /* 0x22 */ "A2 - Winpose", 0x2ee2b62, 0x2ee2b82, indexCPS2_Rogue, 11 },
};

const sDescTreeNode MVC2_A_ROGUE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_LP, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_LK, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_HP, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_HK, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_A1, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_A2, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_LP[] =
{
    { "Main Color LP", 0x2fd03e2, 0x2fd0402, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0402, 0x2fd0422, indexCPS2_CapAm, 1 },
    { "(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0422, 0x2fd0442, indexCPS2_CapAm, 2 },
    { "(04) Eagle", 0x2fd0442, 0x2fd0462, indexCPS2_CapAm, 3 },
    { "(05) Not Used", 0x2fd0462, 0x2fd0482, indexCPS2_CapAm, 4 },
    { "(06) Not Used", 0x2fd0482, 0x2fd04a2, indexCPS2_CapAm, 5 },
    { "(07) Not Used", 0x2fd04a2, 0x2fd04c2, indexCPS2_CapAm, 6 },
    { "(08) Not Used", 0x2fd04c2, 0x2fd04e2, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_LK[] =
{
    { "Main Color LK", 0x2fd04e2, 0x2fd0502, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0502, 0x2fd0522, indexCPS2_CapAm, 1 },
    { "(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0522, 0x2fd0542, indexCPS2_CapAm, 2 },
    { "(04) Eagle", 0x2fd0542, 0x2fd0562, indexCPS2_CapAm, 3 },
    { "(05) Not Used", 0x2fd0562, 0x2fd0582, indexCPS2_CapAm, 4 },
    { "(06) Not Used", 0x2fd0582, 0x2fd05a2, indexCPS2_CapAm, 5 },
    { "(07) Not Used", 0x2fd05a2, 0x2fd05c2, indexCPS2_CapAm, 6 },
    { "(08) Not Used", 0x2fd05c2, 0x2fd05e2, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_HP[] =
{
    { "Main Color HP", 0x2fd05e2, 0x2fd0602, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0602, 0x2fd0622, indexCPS2_CapAm, 1 },
    { "(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0622, 0x2fd0642, indexCPS2_CapAm, 2 },
    { "(04) Eagle", 0x2fd0642, 0x2fd0662, indexCPS2_CapAm, 3 },
    { "(05) Not Used", 0x2fd0662, 0x2fd0682, indexCPS2_CapAm, 4 },
    { "(06) Not Used", 0x2fd0682, 0x2fd06a2, indexCPS2_CapAm, 5 },
    { "(07) Not Used", 0x2fd06a2, 0x2fd06c2, indexCPS2_CapAm, 6 },
    { "(08) Not Used", 0x2fd06c2, 0x2fd06e2, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_HK[] =
{
    { "Main Color HK", 0x2fd06e2, 0x2fd0702, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0702, 0x2fd0722, indexCPS2_CapAm, 1 },
    { "(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0722, 0x2fd0742, indexCPS2_CapAm, 2 },
    { "(04) Eagle", 0x2fd0742, 0x2fd0762, indexCPS2_CapAm, 3 },
    { "(05) Not Used", 0x2fd0762, 0x2fd0782, indexCPS2_CapAm, 4 },
    { "(06) Not Used", 0x2fd0782, 0x2fd07a2, indexCPS2_CapAm, 5 },
    { "(07) Not Used", 0x2fd07a2, 0x2fd07c2, indexCPS2_CapAm, 6 },
    { "(08) Not Used", 0x2fd07c2, 0x2fd07e2, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_A1[] =
{
    { "Main Color A1", 0x2fd07e2, 0x2fd0802, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0802, 0x2fd0822, indexCPS2_CapAm, 1 },
    { "(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0822, 0x2fd0842, indexCPS2_CapAm, 2 },
    { "(04) Eagle", 0x2fd0842, 0x2fd0862, indexCPS2_CapAm, 3 },
    { "(05) Not Used", 0x2fd0862, 0x2fd0882, indexCPS2_CapAm, 4 },
    { "(06) Not Used", 0x2fd0882, 0x2fd08a2, indexCPS2_CapAm, 5 },
    { "(07) Not Used", 0x2fd08a2, 0x2fd08c2, indexCPS2_CapAm, 6 },
    { "(08) Not Used", 0x2fd08c2, 0x2fd08e2, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_A2[] =
{
    { "Main Color A2", 0x2fd08e2, 0x2fd0902, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0902, 0x2fd0922, indexCPS2_CapAm, 1 },
    { "(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0922, 0x2fd0942, indexCPS2_CapAm, 2 },
    { "(04) Eagle", 0x2fd0942, 0x2fd0962, indexCPS2_CapAm, 3 },
    { "(05) Not Used", 0x2fd0962, 0x2fd0982, indexCPS2_CapAm, 4 },
    { "(06) Not Used", 0x2fd0982, 0x2fd09a2, indexCPS2_CapAm, 5 },
    { "(07) Not Used", 0x2fd09a2, 0x2fd09c2, indexCPS2_CapAm, 6 },
    { "(08) Not Used", 0x2fd09c2, 0x2fd09e2, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x2fd09e2, 0x2fd0a02, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Burning Dark 2", 0x2fd0a02, 0x2fd0a22, indexCPS2_CapAm, 1 },
    { "Burning Light", 0x2fd0a22, 0x2fd0a42, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Burning Light 2", 0x2fd0a42, 0x2fd0a62, indexCPS2_CapAm, 1 },
    { "Shocked Dark", 0x2fd0a62, 0x2fd0a82, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Shocked Dark 2", 0x2fd0a82, 0x2fd0aa2, indexCPS2_CapAm, 1 },
    { "Shocked Light", 0x2fd0aa2, 0x2fd0ac2, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Shocked Light 2", 0x2fd0ac2, 0x2fd0ae2, indexCPS2_CapAm, 1 },
    { "Dark Burning Dark", 0x2fd0ae2, 0x2fd0b02, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Dark Burning Dark 2", 0x2fd0b02, 0x2fd0b22, indexCPS2_CapAm, 1 },
    { "Dark Burning Light", 0x2fd0b22, 0x2fd0b42, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Dark Burning Light 2", 0x2fd0b42, 0x2fd0b62, indexCPS2_CapAm, 1 },
    { "Kinetic Charge Dark", 0x2fd0b62, 0x2fd0b82, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Kinetic Charge Dark 2", 0x2fd0b82, 0x2fd0ba2, indexCPS2_CapAm, 1 },
    { "Kinetic Charge Light", 0x2fd0ba2, 0x2fd0bc2, indexCPS2_CapAm, 0, &pairCaptainAmericaShield },
    { "Kinetic Charge Light 2", 0x2fd0bc2, 0x2fd0be2, indexCPS2_CapAm, 1 },
};

const sDescTreeNode MVC2_A_CAPTAINAMERICA_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_LP, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_LK, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_HP, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_HK, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_A1, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_A2, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_LP[] =
{
    { "Main Color LP", 0x30ae9c2, 0x30ae9e2, indexCPS2_Spidey, 0 },
    { "(02) Taunt Balloon", 0x30ae9e2, 0x30aea02, indexCPS2_Spidey, 1 },
    { "(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aea02, 0x30aea22, indexCPS2_Spidey, 2 },
    { "(04) Not Used", 0x30aea22, 0x30aea42, indexCPS2_Spidey, 3 },
    { "(05) Not Used", 0x30aea42, 0x30aea62, indexCPS2_Spidey, 4 },
    { "(06) Not Used", 0x30aea62, 0x30aea82, indexCPS2_Spidey, 5 },
    { "(07) Not Used", 0x30aea82, 0x30aeaa2, indexCPS2_Spidey, 6 },
    { "(08) Not Used", 0x30aeaa2, 0x30aeac2, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_LK[] =
{
    { "Main Color LK", 0x30aeac2, 0x30aeae2, indexCPS2_Spidey, 0 },
    { "(02) Taunt Balloon", 0x30aeae2, 0x30aeb02, indexCPS2_Spidey, 1 },
    { "(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aeb02, 0x30aeb22, indexCPS2_Spidey, 2 },
    { "(04) Not Used", 0x30aeb22, 0x30aeb42, indexCPS2_Spidey, 3 },
    { "(05) Not Used", 0x30aeb42, 0x30aeb62, indexCPS2_Spidey, 4 },
    { "(06) Not Used", 0x30aeb62, 0x30aeb82, indexCPS2_Spidey, 5 },
    { "(07) Not Used", 0x30aeb82, 0x30aeba2, indexCPS2_Spidey, 6 },
    { "(08) Not Used", 0x30aeba2, 0x30aebc2, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_HP[] =
{
    { "Main Color HP", 0x30aebc2, 0x30aebe2, indexCPS2_Spidey, 0 },
    { "(02) Taunt Balloon", 0x30aebe2, 0x30aec02, indexCPS2_Spidey, 1 },
    { "(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aec02, 0x30aec22, indexCPS2_Spidey, 2 },
    { "(04) Not Used", 0x30aec22, 0x30aec42, indexCPS2_Spidey, 3 },
    { "(05) Not Used", 0x30aec42, 0x30aec62, indexCPS2_Spidey, 4 },
    { "(06) Not Used", 0x30aec62, 0x30aec82, indexCPS2_Spidey, 5 },
    { "(07) Not Used", 0x30aec82, 0x30aeca2, indexCPS2_Spidey, 6 },
    { "(08) Not Used", 0x30aeca2, 0x30aecc2, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_HK[] =
{
    { "Main Color HK", 0x30aecc2, 0x30aece2, indexCPS2_Spidey, 0 },
    { "(02) Taunt Balloon", 0x30aece2, 0x30aed02, indexCPS2_Spidey, 1 },
    { "(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aed02, 0x30aed22, indexCPS2_Spidey, 2 },
    { "(04) Not Used", 0x30aed22, 0x30aed42, indexCPS2_Spidey, 3 },
    { "(05) Not Used", 0x30aed42, 0x30aed62, indexCPS2_Spidey, 4 },
    { "(06) Not Used", 0x30aed62, 0x30aed82, indexCPS2_Spidey, 5 },
    { "(07) Not Used", 0x30aed82, 0x30aeda2, indexCPS2_Spidey, 6 },
    { "(08) Not Used", 0x30aeda2, 0x30aedc2, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_A1[] =
{
    { "Main Color A1", 0x30aedc2, 0x30aede2, indexCPS2_Spidey, 0 },
    { "(02) Taunt Balloon", 0x30aede2, 0x30aee02, indexCPS2_Spidey, 1 },
    { "(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aee02, 0x30aee22, indexCPS2_Spidey, 2 },
    { "(04) Not Used", 0x30aee22, 0x30aee42, indexCPS2_Spidey, 3 },
    { "(05) Not Used", 0x30aee42, 0x30aee62, indexCPS2_Spidey, 4 },
    { "(06) Not Used", 0x30aee62, 0x30aee82, indexCPS2_Spidey, 5 },
    { "(07) Not Used", 0x30aee82, 0x30aeea2, indexCPS2_Spidey, 6 },
    { "(08) Not Used", 0x30aeea2, 0x30aeec2, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_A2[] =
{
    { "Main Color A2", 0x30aeec2, 0x30aeee2, indexCPS2_Spidey, 0 },
    { "(02) Taunt Balloon", 0x30aeee2, 0x30aef02, indexCPS2_Spidey, 1 },
    { "(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aef02, 0x30aef22, indexCPS2_Spidey, 2 },
    { "(04) Not Used", 0x30aef22, 0x30aef42, indexCPS2_Spidey, 3 },
    { "(05) Not Used", 0x30aef42, 0x30aef62, indexCPS2_Spidey, 4 },
    { "(06) Not Used", 0x30aef62, 0x30aef82, indexCPS2_Spidey, 5 },
    { "(07) Not Used", 0x30aef82, 0x30aefa2, indexCPS2_Spidey, 6 },
    { "(08) Not Used", 0x30aefa2, 0x30aefc2, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x30aefc2, 0x30aefe2, indexCPS2_Spidey, 0 },
    { "Burning Light", 0x30aefe2, 0x30af002, indexCPS2_Spidey, 0 },
    { "Shocked Dark", 0x30af002, 0x30af022, indexCPS2_Spidey, 0 },
    { "Shocked Light", 0x30af022, 0x30af042, indexCPS2_Spidey, 0 },
    { "Dark Burning Dark", 0x30af042, 0x30af062, indexCPS2_Spidey, 0 },
    { "Dark Burning Light", 0x30af062, 0x30af082, indexCPS2_Spidey, 0 },
    { "Kinetic Charge Dark", 0x30af082, 0x30af0a2, indexCPS2_Spidey, 0 },
    { "Kinetic Charge Light", 0x30af0a2, 0x30af0c2, indexCPS2_Spidey, 0 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP Intro - Frame 1", 0x30af0c2, 0x30af0e2, indexCPS2_Spidey, 11 },
    { /* 0x0a */ "LP Intro - Frame 2", 0x30af0e2, 0x30af102, indexCPS2_Spidey, 11 },
    { /* 0x0b */ "LP Intro - Frame 3", 0x30af102, 0x30af122, indexCPS2_Spidey, 11 },
    { /* 0x0c */ "LP Intro - Frame 4", 0x30af122, 0x30af142, indexCPS2_Spidey, 11 },
    { /* 0x0d */ "LP Intro - Frame 5", 0x30af142, 0x30af162, indexCPS2_Spidey, 11 },
    { /* 0x0e */ "LP Intro - Frame 6", 0x30af162, 0x30af182, indexCPS2_Spidey, 11 },
    { /* 0x0f */ "LP Intro - Frame 7", 0x30af182, 0x30af1a2, indexCPS2_Spidey, 11 },
    { /* 0x10 */ "LP Intro - Frame 8", 0x30af1a2, 0x30af1c2, indexCPS2_Spidey, 11 },
    { /* 0x11 */ "Spider symbol", 0x30af1c2, 0x30af1e2, indexCPS2_Spidey, 12 },
    { /* 0x12 */ "Spider symbol + taunt", 0x30af1e2, 0x30af202, indexCPS2_Spidey, 13 },
    { /* 0x13 */ "HEY!", 0x30af202, 0x30af222, indexCPS2_Spidey, 14 },
    { /* 0x14 */ "Do your job!", 0x30af222, 0x30af242, indexCPS2_Spidey, 15 },
    { /* 0x15 */ "Not Used", 0x30af242, 0x30af262 },
    { /* 0x16 */ "Not Used", 0x30af262, 0x30af282 },
    { /* 0x17 */ "Not Used", 0x30af282, 0x30af2a2 },
    { /* 0x18 */ "Not Used", 0x30af2a2, 0x30af2c2 },
    { /* 0x19 */ "LK Intro - Frame 1", 0x30af2c2, 0x30af2e2, indexCPS2_Spidey, 11 },
    { /* 0x1a */ "LK Intro - Frame 2", 0x30af2e2, 0x30af302, indexCPS2_Spidey, 11 },
    { /* 0x1b */ "LK Intro - Frame 3", 0x30af302, 0x30af322, indexCPS2_Spidey, 11 },
    { /* 0x1c */ "LK Intro - Frame 4", 0x30af322, 0x30af342, indexCPS2_Spidey, 11 },
    { /* 0x1d */ "LK Intro - Frame 5", 0x30af342, 0x30af362, indexCPS2_Spidey, 11 },
    { /* 0x1e */ "LK Intro - Frame 6", 0x30af362, 0x30af382, indexCPS2_Spidey, 11 },
    { /* 0x1f */ "LK Intro - Frame 7", 0x30af382, 0x30af3a2, indexCPS2_Spidey, 11 },
    { /* 0x20 */ "LK Intro - Frame 8", 0x30af3a2, 0x30af3c2, indexCPS2_Spidey, 11 },
    { /* 0x21 */ "Spider symbol", 0x30af3c2, 0x30af3e2, indexCPS2_Spidey, 12 },
    { /* 0x22 */ "Spider symbol + taunt", 0x30af3e2, 0x30af402, indexCPS2_Spidey, 13 },
    { /* 0x23 */ "HEY!", 0x30af402, 0x30af422, indexCPS2_Spidey, 14 },
    { /* 0x24 */ "Do your job!", 0x30af422, 0x30af442, indexCPS2_Spidey, 15 },
    { /* 0x25 */ "Not Used", 0x30af442, 0x30af462 },
    { /* 0x26 */ "Not Used", 0x30af462, 0x30af482 },
    { /* 0x27 */ "Not Used", 0x30af482, 0x30af4a2 },
    { /* 0x28 */ "Not Used", 0x30af4a2, 0x30af4c2 },
    { /* 0x29 */ "HP Intro - Frame 1", 0x30af4c2, 0x30af4e2, indexCPS2_Spidey, 11 },
    { /* 0x2a */ "HP Intro - Frame 2", 0x30af4e2, 0x30af502, indexCPS2_Spidey, 11 },
    { /* 0x2b */ "HP Intro - Frame 3", 0x30af502, 0x30af522, indexCPS2_Spidey, 11 },
    { /* 0x2c */ "HP Intro - Frame 4", 0x30af522, 0x30af542, indexCPS2_Spidey, 11 },
    { /* 0x2d */ "HP Intro - Frame 5", 0x30af542, 0x30af562, indexCPS2_Spidey, 11 },
    { /* 0x2e */ "HP Intro - Frame 6", 0x30af562, 0x30af582, indexCPS2_Spidey, 11 },
    { /* 0x2f */ "HP Intro - Frame 7", 0x30af582, 0x30af5a2, indexCPS2_Spidey, 11 },
    { /* 0x30 */ "HP Intro - Frame 8", 0x30af5a2, 0x30af5c2, indexCPS2_Spidey, 11 },
    { /* 0x31 */ "Spider symbol", 0x30af5c2, 0x30af5e2, indexCPS2_Spidey, 12 },
    { /* 0x32 */ "Spider symbol + taunt", 0x30af5e2, 0x30af602, indexCPS2_Spidey, 13 },
    { /* 0x33 */ "HEY!", 0x30af602, 0x30af622, indexCPS2_Spidey, 14 },
    { /* 0x34 */ "Do your job!", 0x30af622, 0x30af642, indexCPS2_Spidey, 15 },
    { /* 0x35 */ "Not Used", 0x30af642, 0x30af662 },
    { /* 0x36 */ "Not Used", 0x30af662, 0x30af682 },
    { /* 0x37 */ "Not Used", 0x30af682, 0x30af6a2 },
    { /* 0x38 */ "Not Used", 0x30af6a2, 0x30af6c2 },
    { /* 0x39 */ "HK Intro - Frame 1", 0x30af6c2, 0x30af6e2, indexCPS2_Spidey, 11 },
    { /* 0x3a */ "HK Intro - Frame 2", 0x30af6e2, 0x30af702, indexCPS2_Spidey, 11 },
    { /* 0x3b */ "HK Intro - Frame 3", 0x30af702, 0x30af722, indexCPS2_Spidey, 11 },
    { /* 0x3c */ "HK Intro - Frame 4", 0x30af722, 0x30af742, indexCPS2_Spidey, 11 },
    { /* 0x3d */ "HK Intro - Frame 5", 0x30af742, 0x30af762, indexCPS2_Spidey, 11 },
    { /* 0x3e */ "HK Intro - Frame 6", 0x30af762, 0x30af782, indexCPS2_Spidey, 11 },
    { /* 0x3f */ "HK Intro - Frame 7", 0x30af782, 0x30af7a2, indexCPS2_Spidey, 11 },
    { /* 0x40 */ "HK Intro - Frame 8", 0x30af7a2, 0x30af7c2, indexCPS2_Spidey, 11 },
    { /* 0x41 */ "Spider symbol", 0x30af7c2, 0x30af7e2, indexCPS2_Spidey, 12 },
    { /* 0x42 */ "Spider symbol + taunt", 0x30af7e2, 0x30af802, indexCPS2_Spidey, 13 },
    { /* 0x43 */ "HEY!", 0x30af802, 0x30af822, indexCPS2_Spidey, 14 },
    { /* 0x44 */ "Do your job!", 0x30af822, 0x30af842, indexCPS2_Spidey, 15 },
    { /* 0x45 */ "Not Used", 0x30af842, 0x30af862 },
    { /* 0x46 */ "Not Used", 0x30af862, 0x30af882 },
    { /* 0x47 */ "Not Used", 0x30af882, 0x30af8a2 },
    { /* 0x48 */ "Not Used", 0x30af8a2, 0x30af8c2 },
    { /* 0x49 */ "A1 Intro - Frame 1", 0x30af8c2, 0x30af8e2, indexCPS2_Spidey, 11 },
    { /* 0x4a */ "A1 Intro - Frame 2", 0x30af8e2, 0x30af902, indexCPS2_Spidey, 11 },
    { /* 0x4b */ "A1 Intro - Frame 3", 0x30af902, 0x30af922, indexCPS2_Spidey, 11 },
    { /* 0x4c */ "A1 Intro - Frame 4", 0x30af922, 0x30af942, indexCPS2_Spidey, 11 },
    { /* 0x4d */ "A1 Intro - Frame 5", 0x30af942, 0x30af962, indexCPS2_Spidey, 11 },
    { /* 0x4e */ "A1 Intro - Frame 6", 0x30af962, 0x30af982, indexCPS2_Spidey, 11 },
    { /* 0x4f */ "A1 Intro - Frame 7", 0x30af982, 0x30af9a2, indexCPS2_Spidey, 11 },
    { /* 0x50 */ "A1 Intro - Frame 8", 0x30af9a2, 0x30af9c2, indexCPS2_Spidey, 11 },
    { /* 0x51 */ "Spider symbol", 0x30af9c2, 0x30af9e2, indexCPS2_Spidey, 12 },
    { /* 0x52 */ "Spider symbol + taunt", 0x30af9e2, 0x30afa02, indexCPS2_Spidey, 13 },
    { /* 0x53 */ "HEY!", 0x30afa02, 0x30afa22, indexCPS2_Spidey, 14 },
    { /* 0x54 */ "Do your job!", 0x30afa22, 0x30afa42, indexCPS2_Spidey, 15 },
    { /* 0x55 */ "Not Used", 0x30afa42, 0x30afa62 },
    { /* 0x56 */ "Not Used", 0x30afa62, 0x30afa82 },
    { /* 0x57 */ "Not Used", 0x30afa82, 0x30afaa2 },
    { /* 0x58 */ "Not Used", 0x30afaa2, 0x30afac2 },
    { /* 0x59 */ "A2 Intro - Frame 1", 0x30afac2, 0x30afae2, indexCPS2_Spidey, 11 },
    { /* 0x5a */ "A2 Intro - Frame 2", 0x30afae2, 0x30afb02, indexCPS2_Spidey, 11 },
    { /* 0x5b */ "A2 Intro - Frame 3", 0x30afb02, 0x30afb22, indexCPS2_Spidey, 11 },
    { /* 0x5c */ "A2 Intro - Frame 4", 0x30afb22, 0x30afb42, indexCPS2_Spidey, 11 },
    { /* 0x5d */ "A2 Intro - Frame 5", 0x30afb42, 0x30afb62, indexCPS2_Spidey, 11 },
    { /* 0x5e */ "A2 Intro - Frame 6", 0x30afb62, 0x30afb82, indexCPS2_Spidey, 11 },
    { /* 0x5f */ "A2 Intro - Frame 7", 0x30afb82, 0x30afba2, indexCPS2_Spidey, 11 },
    { /* 0x60 */ "A2 Intro - Frame 8", 0x30afba2, 0x30afbc2, indexCPS2_Spidey, 11 },
    { /* 0x61 */ "Spider symbol", 0x30afbc2, 0x30afbe2, indexCPS2_Spidey, 12 },
    { /* 0x62 */ "Spider symbol + taunt", 0x30afbe2, 0x30afc02, indexCPS2_Spidey, 13 },
    { /* 0x63 */ "HEY!", 0x30afc02, 0x30afc22, indexCPS2_Spidey, 14 },
    { /* 0x64 */ "Do your job!", 0x30afc22, 0x30afc42, indexCPS2_Spidey, 15 },
};

const sDescTreeNode MVC2_A_SPIDERMAN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_LP[] =
{
    { "Main Color LP", 0x31c9402, 0x31c9422, indexCPS2_Hulk, 0 },
    { "(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9422, 0x31c9442, indexCPS2_Hulk, 1 },
    { "(03) Gamma Quake", 0x31c9442, 0x31c9462, indexCPS2_Hulk, 2 },
    { "(04) Gamma Crush (Meteor)", 0x31c9462, 0x31c9482, indexCPS2_Hulk, 3 },
    { "(05) Not Used", 0x31c9482, 0x31c94a2, indexCPS2_Hulk, 4 },
    { "(06) Not Used", 0x31c94a2, 0x31c94c2, indexCPS2_Hulk, 5 },
    { "(07) Not Used", 0x31c94c2, 0x31c94e2, indexCPS2_Hulk, 6 },
    { "(08) Not Used", 0x31c94e2, 0x31c9502, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_LK[] =
{
    { "Main Color LK", 0x31c9502, 0x31c9522, indexCPS2_Hulk, 0 },
    { "(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9522, 0x31c9542, indexCPS2_Hulk, 1 },
    { "(03) Gamma Quake", 0x31c9542, 0x31c9562, indexCPS2_Hulk, 2 },
    { "(04) Gamma Crush (Meteor)", 0x31c9562, 0x31c9582, indexCPS2_Hulk, 3 },
    { "(05) Not Used", 0x31c9582, 0x31c95a2, indexCPS2_Hulk, 4 },
    { "(06) Not Used", 0x31c95a2, 0x31c95c2, indexCPS2_Hulk, 5 },
    { "(07) Not Used", 0x31c95c2, 0x31c95e2, indexCPS2_Hulk, 6 },
    { "(08) Not Used", 0x31c95e2, 0x31c9602, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_HP[] =
{
    { "Main Color HP", 0x31c9602, 0x31c9622, indexCPS2_Hulk, 0 },
    { "(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9622, 0x31c9642, indexCPS2_Hulk, 1 },
    { "(03) Gamma Quake", 0x31c9642, 0x31c9662, indexCPS2_Hulk, 2 },
    { "(04) Gamma Crush (Meteor)", 0x31c9662, 0x31c9682, indexCPS2_Hulk, 3 },
    { "(05) Not Used", 0x31c9682, 0x31c96a2, indexCPS2_Hulk, 4 },
    { "(06) Not Used", 0x31c96a2, 0x31c96c2, indexCPS2_Hulk, 5 },
    { "(07) Not Used", 0x31c96c2, 0x31c96e2, indexCPS2_Hulk, 6 },
    { "(08) Not Used", 0x31c96e2, 0x31c9702, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_HK[] =
{
    { "Main Color HK", 0x31c9702, 0x31c9722, indexCPS2_Hulk, 0 },
    { "(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9722, 0x31c9742, indexCPS2_Hulk, 1 },
    { "(03) Gamma Quake", 0x31c9742, 0x31c9762, indexCPS2_Hulk, 2 },
    { "(04) Gamma Crush (Meteor)", 0x31c9762, 0x31c9782, indexCPS2_Hulk, 3 },
    { "(05) Not Used", 0x31c9782, 0x31c97a2, indexCPS2_Hulk, 4 },
    { "(06) Not Used", 0x31c97a2, 0x31c97c2, indexCPS2_Hulk, 5 },
    { "(07) Not Used", 0x31c97c2, 0x31c97e2, indexCPS2_Hulk, 6 },
    { "(08) Not Used", 0x31c97e2, 0x31c9802, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_A1[] =
{
    { "Main Color A1", 0x31c9802, 0x31c9822, indexCPS2_Hulk, 0 },
    { "(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9822, 0x31c9842, indexCPS2_Hulk, 1 },
    { "(03) Gamma Quake", 0x31c9842, 0x31c9862, indexCPS2_Hulk, 2 },
    { "(04) Gamma Crush (Meteor)", 0x31c9862, 0x31c9882, indexCPS2_Hulk, 3 },
    { "(05) Not Used", 0x31c9882, 0x31c98a2, indexCPS2_Hulk, 4 },
    { "(06) Not Used", 0x31c98a2, 0x31c98c2, indexCPS2_Hulk, 5 },
    { "(07) Not Used", 0x31c98c2, 0x31c98e2, indexCPS2_Hulk, 6 },
    { "(08) Not Used", 0x31c98e2, 0x31c9902, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_A2[] =
{
    { "Main Color A2", 0x31c9902, 0x31c9922, indexCPS2_Hulk, 0 },
    { "(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9922, 0x31c9942, indexCPS2_Hulk, 1 },
    { "(03) Gamma Quake", 0x31c9942, 0x31c9962, indexCPS2_Hulk, 2 },
    { "(04) Gamma Crush (Meteor)", 0x31c9962, 0x31c9982, indexCPS2_Hulk, 3 },
    { "(05) Not Used", 0x31c9982, 0x31c99a2, indexCPS2_Hulk, 4 },
    { "(06) Not Used", 0x31c99a2, 0x31c99c2, indexCPS2_Hulk, 5 },
    { "(07) Not Used", 0x31c99c2, 0x31c99e2, indexCPS2_Hulk, 6 },
    { "(08) Not Used", 0x31c99e2, 0x31c9a02, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x31c9a02, 0x31c9a22, indexCPS2_Hulk, 0 },
    { "Burning Light", 0x31c9a22, 0x31c9a42, indexCPS2_Hulk, 0 },
    { "Shocked Dark", 0x31c9a42, 0x31c9a62, indexCPS2_Hulk, 0 },
    { "Shocked Light", 0x31c9a62, 0x31c9a82, indexCPS2_Hulk, 0 },
    { "Dark Burning Dark", 0x31c9a82, 0x31c9aa2, indexCPS2_Hulk, 0 },
    { "Dark Burning Light", 0x31c9aa2, 0x31c9ac2, indexCPS2_Hulk, 0 },
    { "Kinetic Charge Dark", 0x31c9ac2, 0x31c9ae2, indexCPS2_Hulk, 0 },
    { "Kinetic Charge Light", 0x31c9ae2, 0x31c9b02, indexCPS2_Hulk, 0 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x31c9b02, 0x31c9b22 },
    { /* 0x0a */ "Gamma Crush (Meteor Pieces)", 0x31c9b22, 0x31c9b42, indexCPS2_Hulk, 11 },
};

const sDescTreeNode MVC2_A_HULK_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_LP, ARRAYSIZE(MVC2_A_HULK_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_LK, ARRAYSIZE(MVC2_A_HULK_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_HP, ARRAYSIZE(MVC2_A_HULK_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_HK, ARRAYSIZE(MVC2_A_HULK_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_A1, ARRAYSIZE(MVC2_A_HULK_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_A2, ARRAYSIZE(MVC2_A_HULK_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_SHARED, ARRAYSIZE(MVC2_A_HULK_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_HULK_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_LP[] =
{
    { "Main Color LP", 0x32ed122, 0x32ed142, indexCPS2_Venom, 0 },
    { "(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed142, 0x32ed162, indexCPS2_Venom, 1 },
    { "(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed162, 0x32ed182, indexCPS2_Venom, 2 },
    { "(04) Not Used", 0x32ed182, 0x32ed1a2, indexCPS2_Venom, 3 },
    { "(05) Not Used", 0x32ed1a2, 0x32ed1c2, indexCPS2_Venom, 4 },
    { "(06) Not Used", 0x32ed1c2, 0x32ed1e2, indexCPS2_Venom, 5 },
    { "(07) Not Used", 0x32ed1e2, 0x32ed202, indexCPS2_Venom, 6 },
    { "(08) Not Used", 0x32ed202, 0x32ed222, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_LK[] =
{
    { "Main Color LK", 0x32ed222, 0x32ed242, indexCPS2_Venom, 0 },
    { "(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed242, 0x32ed262, indexCPS2_Venom, 1 },
    { "(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed262, 0x32ed282, indexCPS2_Venom, 2 },
    { "(04) Not Used", 0x32ed282, 0x32ed2a2, indexCPS2_Venom, 3 },
    { "(05) Not Used", 0x32ed2a2, 0x32ed2c2, indexCPS2_Venom, 4 },
    { "(06) Not Used", 0x32ed2c2, 0x32ed2e2, indexCPS2_Venom, 5 },
    { "(07) Not Used", 0x32ed2e2, 0x32ed302, indexCPS2_Venom, 6 },
    { "(08) Not Used", 0x32ed302, 0x32ed322, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_HP[] =
{
    { "Main Color HP", 0x32ed322, 0x32ed342, indexCPS2_Venom, 0 },
    { "(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed342, 0x32ed362, indexCPS2_Venom, 1 },
    { "(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed362, 0x32ed382, indexCPS2_Venom, 2 },
    { "(04) Not Used", 0x32ed382, 0x32ed3a2, indexCPS2_Venom, 3 },
    { "(05) Not Used", 0x32ed3a2, 0x32ed3c2, indexCPS2_Venom, 4 },
    { "(06) Not Used", 0x32ed3c2, 0x32ed3e2, indexCPS2_Venom, 5 },
    { "(07) Not Used", 0x32ed3e2, 0x32ed402, indexCPS2_Venom, 6 },
    { "(08) Not Used", 0x32ed402, 0x32ed422, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_HK[] =
{
    { "Main Color HK", 0x32ed422, 0x32ed442, indexCPS2_Venom, 0 },
    { "(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed442, 0x32ed462, indexCPS2_Venom, 1 },
    { "(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed462, 0x32ed482, indexCPS2_Venom, 2 },
    { "(04) Not Used", 0x32ed482, 0x32ed4a2, indexCPS2_Venom, 3 },
    { "(05) Not Used", 0x32ed4a2, 0x32ed4c2, indexCPS2_Venom, 4 },
    { "(06) Not Used", 0x32ed4c2, 0x32ed4e2, indexCPS2_Venom, 5 },
    { "(07) Not Used", 0x32ed4e2, 0x32ed502, indexCPS2_Venom, 6 },
    { "(08) Not Used", 0x32ed502, 0x32ed522, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_A1[] =
{
    { "Main Color A1", 0x32ed522, 0x32ed542, indexCPS2_Venom, 0 },
    { "(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed542, 0x32ed562, indexCPS2_Venom, 1 },
    { "(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed562, 0x32ed582, indexCPS2_Venom, 2 },
    { "(04) Not Used", 0x32ed582, 0x32ed5a2, indexCPS2_Venom, 3 },
    { "(05) Not Used", 0x32ed5a2, 0x32ed5c2, indexCPS2_Venom, 4 },
    { "(06) Not Used", 0x32ed5c2, 0x32ed5e2, indexCPS2_Venom, 5 },
    { "(07) Not Used", 0x32ed5e2, 0x32ed602, indexCPS2_Venom, 6 },
    { "(08) Not Used", 0x32ed602, 0x32ed622, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_A2[] =
{
    { "Main Color A2", 0x32ed622, 0x32ed642, indexCPS2_Venom, 0 },
    { "(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed642, 0x32ed662, indexCPS2_Venom, 1 },
    { "(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed662, 0x32ed682, indexCPS2_Venom, 2 },
    { "(04) Not Used", 0x32ed682, 0x32ed6a2, indexCPS2_Venom, 3 },
    { "(05) Not Used", 0x32ed6a2, 0x32ed6c2, indexCPS2_Venom, 4 },
    { "(06) Not Used", 0x32ed6c2, 0x32ed6e2, indexCPS2_Venom, 5 },
    { "(07) Not Used", 0x32ed6e2, 0x32ed702, indexCPS2_Venom, 6 },
    { "(08) Not Used", 0x32ed702, 0x32ed722, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x32ed722, 0x32ed742, indexCPS2_Venom, 0 },
    { "Burning Light", 0x32ed742, 0x32ed762, indexCPS2_Venom, 0 },
    { "Shocked Dark", 0x32ed762, 0x32ed782, indexCPS2_Venom, 0 },
    { "Shocked Light", 0x32ed782, 0x32ed7a2, indexCPS2_Venom, 0 },
    { "Dark Burning Dark", 0x32ed7a2, 0x32ed7c2, indexCPS2_Venom, 0 },
    { "Dark Burning Light", 0x32ed7c2, 0x32ed7e2, indexCPS2_Venom, 0 },
    { "Kinetic Charge Dark", 0x32ed7e2, 0x32ed802, indexCPS2_Venom, 0 },
    { "Kinetic Charge Light", 0x32ed802, 0x32ed822, indexCPS2_Venom, 0 },
};

const sDescTreeNode MVC2_A_VENOM_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_LP, ARRAYSIZE(MVC2_A_VENOM_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_LK, ARRAYSIZE(MVC2_A_VENOM_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_HP, ARRAYSIZE(MVC2_A_VENOM_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_HK, ARRAYSIZE(MVC2_A_VENOM_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_A1, ARRAYSIZE(MVC2_A_VENOM_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_A2, ARRAYSIZE(MVC2_A_VENOM_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_VENOM_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_LP[] =
{
    { "Main Color LP", 0x33ffa42, 0x33ffa62, indexCPS2_DrDoom, 0 },
    { "(02) FP, c.FP", 0x33ffa62, 0x33ffa82, indexCPS2_DrDoom, 1 },
    { "(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffa82, 0x33ffaa2, indexCPS2_DrDoom, 2 },
    { "(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffaa2, 0x33ffac2, indexCPS2_DrDoom, 3 },
    { "(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffac2, 0x33ffae2, indexCPS2_DrDoom, 4 },
    { "(06) Not Used", 0x33ffae2, 0x33ffb02, indexCPS2_DrDoom, 5 },
    { "(07) Not Used", 0x33ffb02, 0x33ffb22, indexCPS2_DrDoom, 6 },
    { "(08) Not Used", 0x33ffb22, 0x33ffb42, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_LK[] =
{
    { "Main Color LK", 0x33ffb42, 0x33ffb62, indexCPS2_DrDoom, 0 },
    { "(02) FP, c.FP", 0x33ffb62, 0x33ffb82, indexCPS2_DrDoom, 1 },
    { "(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffb82, 0x33ffba2, indexCPS2_DrDoom, 2 },
    { "(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffba2, 0x33ffbc2, indexCPS2_DrDoom, 3 },
    { "(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffbc2, 0x33ffbe2, indexCPS2_DrDoom, 4 },
    { "(06) Not Used", 0x33ffbe2, 0x33ffc02, indexCPS2_DrDoom, 5 },
    { "(07) Not Used", 0x33ffc02, 0x33ffc22, indexCPS2_DrDoom, 6 },
    { "(08) Not Used", 0x33ffc22, 0x33ffc42, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_HP[] =
{
    { "Main Color HP", 0x33ffc42, 0x33ffc62, indexCPS2_DrDoom, 0 },
    { "(02) FP, c.FP", 0x33ffc62, 0x33ffc82, indexCPS2_DrDoom, 1 },
    { "(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffc82, 0x33ffca2, indexCPS2_DrDoom, 2 },
    { "(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffca2, 0x33ffcc2, indexCPS2_DrDoom, 3 },
    { "(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffcc2, 0x33ffce2, indexCPS2_DrDoom, 4 },
    { "(06) Not Used", 0x33ffce2, 0x33ffd02, indexCPS2_DrDoom, 5 },
    { "(07) Not Used", 0x33ffd02, 0x33ffd22, indexCPS2_DrDoom, 6 },
    { "(08) Not Used", 0x33ffd22, 0x33ffd42, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_HK[] =
{
    { "Main Color HK", 0x33ffd42, 0x33ffd62, indexCPS2_DrDoom, 0 },
    { "(02) FP, c.FP", 0x33ffd62, 0x33ffd82, indexCPS2_DrDoom, 1 },
    { "(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffd82, 0x33ffda2, indexCPS2_DrDoom, 2 },
    { "(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffda2, 0x33ffdc2, indexCPS2_DrDoom, 3 },
    { "(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffdc2, 0x33ffde2, indexCPS2_DrDoom, 4 },
    { "(06) Not Used", 0x33ffde2, 0x33ffe02, indexCPS2_DrDoom, 5 },
    { "(07) Not Used", 0x33ffe02, 0x33ffe22, indexCPS2_DrDoom, 6 },
    { "(08) Not Used", 0x33ffe22, 0x33ffe42, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_A1[] =
{
    { "Main Color A1", 0x33ffe42, 0x33ffe62, indexCPS2_DrDoom, 0 },
    { "(02) FP, c.FP", 0x33ffe62, 0x33ffe82, indexCPS2_DrDoom, 1 },
    { "(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffe82, 0x33ffea2, indexCPS2_DrDoom, 2 },
    { "(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffea2, 0x33ffec2, indexCPS2_DrDoom, 3 },
    { "(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffec2, 0x33ffee2, indexCPS2_DrDoom, 4 },
    { "(06) Not Used", 0x33ffee2, 0x33fff02, indexCPS2_DrDoom, 5 },
    { "(07) Not Used", 0x33fff02, 0x33fff22, indexCPS2_DrDoom, 6 },
    { "(08) Not Used", 0x33fff22, 0x33fff42, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_A2[] =
{
    { "Main Color A2", 0x33fff42, 0x33fff62, indexCPS2_DrDoom, 0 },
    { "(02) FP, c.FP", 0x33fff62, 0x33fff82, indexCPS2_DrDoom, 1 },
    { "(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33fff82, 0x33fffa2, indexCPS2_DrDoom, 2 },
    { "(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33fffa2, 0x33fffc2, indexCPS2_DrDoom, 3 },
    { "(05) ID: 01-07 Molecular Shield (rocks)", 0x33fffc2, 0x33fffe2, indexCPS2_DrDoom, 4 },
    { "(06) Not Used", 0x33fffe2, 0x3400002, indexCPS2_DrDoom, 5 },
    { "(07) Not Used", 0x3400002, 0x3400022, indexCPS2_DrDoom, 6 },
    { "(08) Not Used", 0x3400022, 0x3400042, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3400042, 0x3400062, indexCPS2_DrDoom, 0 },
    { "Burning Light", 0x3400062, 0x3400082, indexCPS2_DrDoom, 0 },
    { "Shocked Dark", 0x3400082, 0x34000a2, indexCPS2_DrDoom, 0 },
    { "Shocked Light", 0x34000a2, 0x34000c2, indexCPS2_DrDoom, 0 },
    { "Dark Burning Dark", 0x34000c2, 0x34000e2, indexCPS2_DrDoom, 0 },
    { "Dark Burning Light", 0x34000e2, 0x3400102, indexCPS2_DrDoom, 0 },
    { "Kinetic Charge Dark", 0x3400102, 0x3400122, indexCPS2_DrDoom, 0 },
    { "Kinetic Charge Light", 0x3400122, 0x3400142, indexCPS2_DrDoom, 0 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP Intro", 0x3400142, 0x3400162, indexCPS2_DrDoom, 11 },
    { /* 0x0a */ "LP Intro - Chair", 0x3400162, 0x3400182, indexCPS2_DrDoom, 12 },
    { /* 0x0b */ "LP Intro - Portal", 0x3400182, 0x34001a2, indexCPS2_DrDoom, 13 },
    { /* 0x0c */ "LP Winpose (butler, chair and minions)", 0x34001a2, 0x34001c2, indexCPS2_DrDoom, 14 },
    { /* 0x0d */ "Not Used", 0x34001c2, 0x34001e2 },
    { /* 0x0e */ "Not Used", 0x34001e2, 0x3400202 },
    { /* 0x0f */ "Not Used", 0x3400202, 0x3400222 },
    { /* 0x10 */ "Not Used", 0x3400222, 0x3400242 },
    { /* 0x11 */ "Not Used", 0x3400242, 0x3400262 },
    { /* 0x12 */ "Not Used", 0x3400262, 0x3400282 },
    { /* 0x13 */ "Not Used", 0x3400282, 0x34002a2 },
    { /* 0x14 */ "Not Used", 0x34002a2, 0x34002c2 },
    { /* 0x15 */ "Not Used", 0x34002c2, 0x34002e2 },
    { /* 0x16 */ "Not Used", 0x34002e2, 0x3400302 },
    { /* 0x17 */ "Not Used", 0x3400302, 0x3400322 },
    { /* 0x18 */ "Not Used", 0x3400322, 0x3400342 },
    { /* 0x19 */ "Not Used", 0x3400342, 0x3400362 },
    { /* 0x1a */ "Not Used", 0x3400362, 0x3400382 },
    { /* 0x1b */ "Not Used", 0x3400382, 0x34003a2 },
    { /* 0x1c */ "Not Used", 0x34003a2, 0x34003c2 },
    { /* 0x1d */ "Not Used", 0x34003c2, 0x34003e2 },
    { /* 0x1e */ "Not Used", 0x34003e2, 0x3400402 },
    { /* 0x1f */ "Not Used", 0x3400402, 0x3400422 },
    { /* 0x20 */ "Not Used", 0x3400422, 0x3400442 },
    { /* 0x21 */ "Not Used", 0x3400442, 0x3400462 },
    { /* 0x22 */ "Not Used", 0x3400462, 0x3400482 },
    { /* 0x23 */ "Not Used", 0x3400482, 0x34004a2 },
    { /* 0x24 */ "Not Used", 0x34004a2, 0x34004c2 },
    { /* 0x25 */ "LK Intro", 0x34004c2, 0x34004e2, indexCPS2_DrDoom, 11 },
    { /* 0x26 */ "LK Intro - Chair", 0x34004e2, 0x3400502, indexCPS2_DrDoom, 12 },
    { /* 0x27 */ "LK Intro - Portal", 0x3400502, 0x3400522, indexCPS2_DrDoom, 13 },
    { /* 0x28 */ "LK Winpose (butler, chair and minions)", 0x3400522, 0x3400542, indexCPS2_DrDoom, 14 },
    { /* 0x29 */ "Not Used", 0x3400542, 0x3400562 },
    { /* 0x2a */ "Not Used", 0x3400562, 0x3400582 },
    { /* 0x2b */ "Not Used", 0x3400582, 0x34005a2 },
    { /* 0x2c */ "Not Used", 0x34005a2, 0x34005c2 },
    { /* 0x2d */ "Not Used", 0x34005c2, 0x34005e2 },
    { /* 0x2e */ "Not Used", 0x34005e2, 0x3400602 },
    { /* 0x2f */ "Not Used", 0x3400602, 0x3400622 },
    { /* 0x30 */ "Not Used", 0x3400622, 0x3400642 },
    { /* 0x31 */ "Not Used", 0x3400642, 0x3400662 },
    { /* 0x32 */ "Not Used", 0x3400662, 0x3400682 },
    { /* 0x33 */ "Not Used", 0x3400682, 0x34006a2 },
    { /* 0x34 */ "Not Used", 0x34006a2, 0x34006c2 },
    { /* 0x35 */ "Not Used", 0x34006c2, 0x34006e2 },
    { /* 0x36 */ "Not Used", 0x34006e2, 0x3400702 },
    { /* 0x37 */ "Not Used", 0x3400702, 0x3400722 },
    { /* 0x38 */ "Not Used", 0x3400722, 0x3400742 },
    { /* 0x39 */ "Not Used", 0x3400742, 0x3400762 },
    { /* 0x3a */ "Not Used", 0x3400762, 0x3400782 },
    { /* 0x3b */ "Not Used", 0x3400782, 0x34007a2 },
    { /* 0x3c */ "Not Used", 0x34007a2, 0x34007c2 },
    { /* 0x3d */ "Not Used", 0x34007c2, 0x34007e2 },
    { /* 0x3e */ "Not Used", 0x34007e2, 0x3400802 },
    { /* 0x3f */ "Not Used", 0x3400802, 0x3400822 },
    { /* 0x40 */ "Not Used", 0x3400822, 0x3400842 },
    { /* 0x41 */ "HP Intro", 0x3400842, 0x3400862, indexCPS2_DrDoom, 11 },
    { /* 0x42 */ "HP Intro - Chair", 0x3400862, 0x3400882, indexCPS2_DrDoom, 12 },
    { /* 0x43 */ "HP Intro - Portal", 0x3400882, 0x34008a2, indexCPS2_DrDoom, 13 },
    { /* 0x44 */ "HP Winpose (butler, chair and minions)", 0x34008a2, 0x34008c2, indexCPS2_DrDoom, 14 },
    { /* 0x45 */ "Not Used", 0x34008c2, 0x34008e2 },
    { /* 0x46 */ "Not Used", 0x34008e2, 0x3400902 },
    { /* 0x47 */ "Not Used", 0x3400902, 0x3400922 },
    { /* 0x48 */ "Not Used", 0x3400922, 0x3400942 },
    { /* 0x49 */ "Not Used", 0x3400942, 0x3400962 },
    { /* 0x4a */ "Not Used", 0x3400962, 0x3400982 },
    { /* 0x4b */ "Not Used", 0x3400982, 0x34009a2 },
    { /* 0x4c */ "Not Used", 0x34009a2, 0x34009c2 },
    { /* 0x4d */ "Not Used", 0x34009c2, 0x34009e2 },
    { /* 0x4e */ "Not Used", 0x34009e2, 0x3400a02 },
    { /* 0x4f */ "Not Used", 0x3400a02, 0x3400a22 },
    { /* 0x50 */ "Not Used", 0x3400a22, 0x3400a42 },
    { /* 0x51 */ "Not Used", 0x3400a42, 0x3400a62 },
    { /* 0x52 */ "Not Used", 0x3400a62, 0x3400a82 },
    { /* 0x53 */ "Not Used", 0x3400a82, 0x3400aa2 },
    { /* 0x54 */ "Not Used", 0x3400aa2, 0x3400ac2 },
    { /* 0x55 */ "Not Used", 0x3400ac2, 0x3400ae2 },
    { /* 0x56 */ "Not Used", 0x3400ae2, 0x3400b02 },
    { /* 0x57 */ "Not Used", 0x3400b02, 0x3400b22 },
    { /* 0x58 */ "Not Used", 0x3400b22, 0x3400b42 },
    { /* 0x59 */ "Not Used", 0x3400b42, 0x3400b62 },
    { /* 0x5a */ "Not Used", 0x3400b62, 0x3400b82 },
    { /* 0x5b */ "Not Used", 0x3400b82, 0x3400ba2 },
    { /* 0x5c */ "Not Used", 0x3400ba2, 0x3400bc2 },
    { /* 0x5d */ "HK Intro", 0x3400bc2, 0x3400be2, indexCPS2_DrDoom, 11 },
    { /* 0x5e */ "HK Intro - Chair", 0x3400be2, 0x3400c02, indexCPS2_DrDoom, 12 },
    { /* 0x5f */ "HK Intro - Portal", 0x3400c02, 0x3400c22, indexCPS2_DrDoom, 13 },
    { /* 0x60 */ "HK Winpose (butler, chair and minions)", 0x3400c22, 0x3400c42, indexCPS2_DrDoom, 14 },
    { /* 0x61 */ "Not Used", 0x3400c42, 0x3400c62 },
    { /* 0x62 */ "Not Used", 0x3400c62, 0x3400c82 },
    { /* 0x63 */ "Not Used", 0x3400c82, 0x3400ca2 },
    { /* 0x64 */ "Not Used", 0x3400ca2, 0x3400cc2 },
    { /* 0x65 */ "Not Used", 0x3400cc2, 0x3400ce2 },
    { /* 0x66 */ "Not Used", 0x3400ce2, 0x3400d02 },
    { /* 0x67 */ "Not Used", 0x3400d02, 0x3400d22 },
    { /* 0x68 */ "Not Used", 0x3400d22, 0x3400d42 },
    { /* 0x69 */ "Not Used", 0x3400d42, 0x3400d62 },
    { /* 0x6a */ "Not Used", 0x3400d62, 0x3400d82 },
    { /* 0x6b */ "Not Used", 0x3400d82, 0x3400da2 },
    { /* 0x6c */ "Not Used", 0x3400da2, 0x3400dc2 },
    { /* 0x6d */ "Not Used", 0x3400dc2, 0x3400de2 },
    { /* 0x6e */ "Not Used", 0x3400de2, 0x3400e02 },
    { /* 0x6f */ "Not Used", 0x3400e02, 0x3400e22 },
    { /* 0x70 */ "Not Used", 0x3400e22, 0x3400e42 },
    { /* 0x71 */ "Not Used", 0x3400e42, 0x3400e62 },
    { /* 0x72 */ "Not Used", 0x3400e62, 0x3400e82 },
    { /* 0x73 */ "Not Used", 0x3400e82, 0x3400ea2 },
    { /* 0x74 */ "Not Used", 0x3400ea2, 0x3400ec2 },
    { /* 0x75 */ "Not Used", 0x3400ec2, 0x3400ee2 },
    { /* 0x76 */ "Not Used", 0x3400ee2, 0x3400f02 },
    { /* 0x77 */ "Not Used", 0x3400f02, 0x3400f22 },
    { /* 0x78 */ "Not Used", 0x3400f22, 0x3400f42 },
    { /* 0x79 */ "A1 Intro", 0x3400f42, 0x3400f62, indexCPS2_DrDoom, 11 },
    { /* 0x7a */ "A1 Intro - Chair", 0x3400f62, 0x3400f82, indexCPS2_DrDoom, 12 },
    { /* 0x7b */ "A1 Intro - Portal", 0x3400f82, 0x3400fa2, indexCPS2_DrDoom, 13 },
    { /* 0x7c */ "A1 Winpose (butler, chair and minions)", 0x3400fa2, 0x3400fc2, indexCPS2_DrDoom, 14 },
    { /* 0x7d */ "Not Used", 0x3400fc2, 0x3400fe2 },
    { /* 0x7e */ "Not Used", 0x3400fe2, 0x3401002 },
    { /* 0x7f */ "Not Used", 0x3401002, 0x3401022 },
    { /* 0x80 */ "Not Used", 0x3401022, 0x3401042 },
    { /* 0x81 */ "Not Used", 0x3401042, 0x3401062 },
    { /* 0x82 */ "Not Used", 0x3401062, 0x3401082 },
    { /* 0x83 */ "Not Used", 0x3401082, 0x34010a2 },
    { /* 0x84 */ "Not Used", 0x34010a2, 0x34010c2 },
    { /* 0x85 */ "Not Used", 0x34010c2, 0x34010e2 },
    { /* 0x86 */ "Not Used", 0x34010e2, 0x3401102 },
    { /* 0x87 */ "Not Used", 0x3401102, 0x3401122 },
    { /* 0x88 */ "Not Used", 0x3401122, 0x3401142 },
    { /* 0x89 */ "Not Used", 0x3401142, 0x3401162 },
    { /* 0x8a */ "Not Used", 0x3401162, 0x3401182 },
    { /* 0x8b */ "Not Used", 0x3401182, 0x34011a2 },
    { /* 0x8c */ "Not Used", 0x34011a2, 0x34011c2 },
    { /* 0x8d */ "Not Used", 0x34011c2, 0x34011e2 },
    { /* 0x8e */ "Not Used", 0x34011e2, 0x3401202 },
    { /* 0x8f */ "Not Used", 0x3401202, 0x3401222 },
    { /* 0x90 */ "Not Used", 0x3401222, 0x3401242 },
    { /* 0x91 */ "Not Used", 0x3401242, 0x3401262 },
    { /* 0x92 */ "Not Used", 0x3401262, 0x3401282 },
    { /* 0x93 */ "Not Used", 0x3401282, 0x34012a2 },
    { /* 0x94 */ "Not Used", 0x34012a2, 0x34012c2 },
    { /* 0x95 */ "A2 Intro", 0x34012c2, 0x34012e2, indexCPS2_DrDoom, 11 },
    { /* 0x96 */ "A2 Intro - Chair", 0x34012e2, 0x3401302, indexCPS2_DrDoom, 12 },
    { /* 0x97 */ "A2 Intro - Portal", 0x3401302, 0x3401322, indexCPS2_DrDoom, 13 },
    { /* 0x98 */ "A2 Winpose (butler, chair and minions)", 0x3401322, 0x3401342, indexCPS2_DrDoom, 14 },
};

const sDescTreeNode MVC2_A_DRDOOM_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_LP, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_LK, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_HP, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_HK, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_A1, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_A2, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_LP[] =
{
    { "Main Color LP", 0x35175c2, 0x35175e2, indexCPS2_Tron, 0, &pairTronBody },
    { "(02) Tron Bonne (girl)", 0x35175e2, 0x3517602, indexCPS2_Tron, 1 },
    { "(03) Kobun", 0x3517602, 0x3517622, indexCPS2_Tron, 2 },
    { "(04) ID:01-08 - drill, lk, rock", 0x3517622, 0x3517642, indexCPS2_Tron, 3 },
    { "(05) c.fp, Dash flame", 0x3517642, 0x3517662, indexCPS2_Tron, 4 },
    { "(06) Not Used", 0x3517662, 0x3517682, indexCPS2_Tron, 5 },
    { "(07) Not Used", 0x3517682, 0x35176a2, indexCPS2_Tron, 6 },
    { "(08) Not Used", 0x35176a2, 0x35176c2, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_LK[] =
{
    { "Main Color LK", 0x35176c2, 0x35176e2, indexCPS2_Tron, 0, &pairTronBody },
    { "(02) Tron Bonne (girl)", 0x35176e2, 0x3517702, indexCPS2_Tron, 1 },
    { "(03) Kobun", 0x3517702, 0x3517722, indexCPS2_Tron, 2 },
    { "(04) ID:01-08 - drill, lk, rock", 0x3517722, 0x3517742, indexCPS2_Tron, 3 },
    { "(05) c.fp, Dash flame", 0x3517742, 0x3517762, indexCPS2_Tron, 4 },
    { "(06) Not Used", 0x3517762, 0x3517782, indexCPS2_Tron, 5 },
    { "(07) Not Used", 0x3517782, 0x35177a2, indexCPS2_Tron, 6 },
    { "(08) Not Used", 0x35177a2, 0x35177c2, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_HP[] =
{
    { "Main Color HP", 0x35177c2, 0x35177e2, indexCPS2_Tron, 0, &pairTronBody },
    { "(02) Tron Bonne (girl)", 0x35177e2, 0x3517802, indexCPS2_Tron, 1 },
    { "(03) Kobun", 0x3517802, 0x3517822, indexCPS2_Tron, 2 },
    { "(04) ID:01-08 - drill, lk, rock", 0x3517822, 0x3517842, indexCPS2_Tron, 3 },
    { "(05) c.fp, Dash flame", 0x3517842, 0x3517862, indexCPS2_Tron, 4 },
    { "(06) Not Used", 0x3517862, 0x3517882, indexCPS2_Tron, 5 },
    { "(07) Not Used", 0x3517882, 0x35178a2, indexCPS2_Tron, 6 },
    { "(08) Not Used", 0x35178a2, 0x35178c2, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_HK[] =
{
    { "Main Color HK", 0x35178c2, 0x35178e2, indexCPS2_Tron, 0, &pairTronBody },
    { "(02) Tron Bonne (girl)", 0x35178e2, 0x3517902, indexCPS2_Tron, 1 },
    { "(03) Kobun", 0x3517902, 0x3517922, indexCPS2_Tron, 2 },
    { "(04) ID:01-08 - drill, lk, rock", 0x3517922, 0x3517942, indexCPS2_Tron, 3 },
    { "(05) c.fp, Dash flame", 0x3517942, 0x3517962, indexCPS2_Tron, 4 },
    { "(06) Not Used", 0x3517962, 0x3517982, indexCPS2_Tron, 5 },
    { "(07) Not Used", 0x3517982, 0x35179a2, indexCPS2_Tron, 6 },
    { "(08) Not Used", 0x35179a2, 0x35179c2, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_A1[] =
{
    { "Main Color A1", 0x35179c2, 0x35179e2, indexCPS2_Tron, 0, &pairTronBody },
    { "(02) Tron Bonne (girl)", 0x35179e2, 0x3517a02, indexCPS2_Tron, 1 },
    { "(03) Kobun", 0x3517a02, 0x3517a22, indexCPS2_Tron, 2 },
    { "(04) ID:01-08 - drill, lk, rock", 0x3517a22, 0x3517a42, indexCPS2_Tron, 3 },
    { "(05) c.fp, Dash flame", 0x3517a42, 0x3517a62, indexCPS2_Tron, 4 },
    { "(06) Not Used", 0x3517a62, 0x3517a82, indexCPS2_Tron, 5 },
    { "(07) Not Used", 0x3517a82, 0x3517aa2, indexCPS2_Tron, 6 },
    { "(08) Not Used", 0x3517aa2, 0x3517ac2, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_A2[] =
{
    { "Main Color A2", 0x3517ac2, 0x3517ae2, indexCPS2_Tron, 0, &pairTronBody },
    { "(02) Tron Bonne (girl)", 0x3517ae2, 0x3517b02, indexCPS2_Tron, 1 },
    { "(03) Kobun", 0x3517b02, 0x3517b22, indexCPS2_Tron, 2 },
    { "(04) ID:01-08 - drill, lk, rock", 0x3517b22, 0x3517b42, indexCPS2_Tron, 3 },
    { "(05) c.fp, Dash flame", 0x3517b42, 0x3517b62, indexCPS2_Tron, 4 },
    { "(06) Not Used", 0x3517b62, 0x3517b82, indexCPS2_Tron, 5 },
    { "(07) Not Used", 0x3517b82, 0x3517ba2, indexCPS2_Tron, 6 },
    { "(08) Not Used", 0x3517ba2, 0x3517bc2, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3517bc2, 0x3517be2, indexCPS2_Tron, 0, &pairTronBody },
    { "Burning Dark 2", 0x3517be2, 0x3517c02, indexCPS2_Tron, 1 },
    { "Burning Light", 0x3517c02, 0x3517c22, indexCPS2_Tron, 0, &pairTronBody },
    { "Burning Light 2", 0x3517c22, 0x3517c42, indexCPS2_Tron, 1 },
    { "Shocked Dark", 0x3517c42, 0x3517c62, indexCPS2_Tron, 0, &pairTronBody },
    { "Shocked Dark 2", 0x3517c62, 0x3517c82, indexCPS2_Tron, 1 },
    { "Shocked Light", 0x3517c82, 0x3517ca2, indexCPS2_Tron, 0, &pairTronBody },
    { "Shocked Light 2", 0x3517ca2, 0x3517cc2, indexCPS2_Tron, 1 },
    { "Dark Burning Dark", 0x3517cc2, 0x3517ce2, indexCPS2_Tron, 0, &pairTronBody },
    { "Dark Burning Dark 2", 0x3517ce2, 0x3517d02, indexCPS2_Tron, 1 },
    { "Dark Burning Light", 0x3517d02, 0x3517d22, indexCPS2_Tron, 0, &pairTronBody },
    { "Dark Burning Light 2", 0x3517d22, 0x3517d42, indexCPS2_Tron, 1 },
    { "Kinetic Charge Dark", 0x3517d42, 0x3517d62, indexCPS2_Tron, 0, &pairTronBody },
    { "Kinetic Charge Dark 2", 0x3517d62, 0x3517d82, indexCPS2_Tron, 1 },
    { "Kinetic Charge Light", 0x3517d82, 0x3517da2, indexCPS2_Tron, 0, &pairTronBody },
    { "Kinetic Charge Light 2", 0x3517da2, 0x3517dc2, indexCPS2_Tron, 1 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_EXTRAS[] =
{
    { /* 0x11 */ "Kobun Winpose (Chef's Cart) (all buttons)", 0x3517dc2, 0x3517de2, indexCPS2_Tron, 11 },
    { /* 0x12 */ "Not Used", 0x3517de2, 0x3517e02 },
    { /* 0x13 */ "Kobun's Lunch Tray (all buttons)", 0x3517e02, 0x3517e22, indexCPS2_Tron, 12 },
    { /* 0x14 */ "c.MP (Reflect Frame on the gustaff) all buttons", 0x3517e22, 0x3517e42, indexCPS2_Tron, 13 },
    { /* 0x15 */ "Drill Flame", 0x3517e42, 0x3517e62, indexCPS2_Tron, 14 },
};

const sDescTreeNode MVC2_A_TRON_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_LP, ARRAYSIZE(MVC2_A_TRON_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_LK, ARRAYSIZE(MVC2_A_TRON_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_HP, ARRAYSIZE(MVC2_A_TRON_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_HK, ARRAYSIZE(MVC2_A_TRON_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_A1, ARRAYSIZE(MVC2_A_TRON_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_A2, ARRAYSIZE(MVC2_A_TRON_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_SHARED, ARRAYSIZE(MVC2_A_TRON_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_TRON_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_LP[] =
{
    { "Main Color LP", 0x35f3162, 0x35f3182, indexCPS2_Jill, 0 },
    { "(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3182, 0x35f31a2, indexCPS2_Jill, 1 },
    { "(03) Zombie", 0x35f31a2, 0x35f31c2, indexCPS2_Jill, 2 },
    { "(04) Dog / Crow / Fire Zombie", 0x35f31c2, 0x35f31e2, indexCPS2_Jill, 3 },
    { "(05) Tyrant", 0x35f31e2, 0x35f3202, indexCPS2_Jill, 4 },
    { "(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3202, 0x35f3222, indexCPS2_Jill, 5 },
    { "(07) Not Used", 0x35f3222, 0x35f3242, indexCPS2_Jill, 6 },
    { "(08) Not Used", 0x35f3242, 0x35f3262, indexCPS2_Jill, 7 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_LK[] =
{
    { "Main Color LK", 0x35f3262, 0x35f3282, indexCPS2_Jill, 0 },
    { "(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3282, 0x35f32a2, indexCPS2_Jill, 1 },
    { "(03) Zombie", 0x35f32a2, 0x35f32c2, indexCPS2_Jill, 2 },
    { "(04) Dog / Crow / Fire Zombie", 0x35f32c2, 0x35f32e2, indexCPS2_Jill, 3 },
    { "(05) Tyrant", 0x35f32e2, 0x35f3302, indexCPS2_Jill, 4 },
    { "(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3302, 0x35f3322, indexCPS2_Jill, 5 },
    { "(07) Not Used", 0x35f3322, 0x35f3342, indexCPS2_Jill, 6 },
    { "(08) Not Used", 0x35f3342, 0x35f3362, indexCPS2_Jill, 7 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_HP[] =
{
    { "Main Color HP", 0x35f3362, 0x35f3382, indexCPS2_Jill, 0 },
    { "(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3382, 0x35f33a2, indexCPS2_Jill, 1 },
    { "(03) Zombie", 0x35f33a2, 0x35f33c2, indexCPS2_Jill, 2 },
    { "(04) Dog / Crow / Fire Zombie", 0x35f33c2, 0x35f33e2, indexCPS2_Jill, 3 },
    { "(05) Tyrant", 0x35f33e2, 0x35f3402, indexCPS2_Jill, 4 },
    { "(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3402, 0x35f3422, indexCPS2_Jill, 5 },
    { "(07) Not Used", 0x35f3422, 0x35f3442, indexCPS2_Jill, 6 },
    { "(08) Not Used", 0x35f3442, 0x35f3462, indexCPS2_Jill, 7 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_HK[] =
{
    { "Main Color HK", 0x35f3462, 0x35f3482, indexCPS2_Jill, 0 },
    { "(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3482, 0x35f34a2, indexCPS2_Jill, 1 },
    { "(03) Zombie", 0x35f34a2, 0x35f34c2, indexCPS2_Jill, 2 },
    { "(04) Dog / Crow / Fire Zombie", 0x35f34c2, 0x35f34e2, indexCPS2_Jill, 3 },
    { "(05) Tyrant", 0x35f34e2, 0x35f3502, indexCPS2_Jill, 4 },
    { "(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3502, 0x35f3522, indexCPS2_Jill, 5 },
    { "(07) Not Used", 0x35f3522, 0x35f3542, indexCPS2_Jill, 6 },
    { "(08) Not Used", 0x35f3542, 0x35f3562, indexCPS2_Jill, 7 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_A1[] =
{
    { "Main Color A1", 0x35f3562, 0x35f3582, indexCPS2_Jill, 0 },
    { "(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3582, 0x35f35a2, indexCPS2_Jill, 1 },
    { "(03) Zombie", 0x35f35a2, 0x35f35c2, indexCPS2_Jill, 2 },
    { "(04) Dog / Crow / Fire Zombie", 0x35f35c2, 0x35f35e2, indexCPS2_Jill, 3 },
    { "(05) Tyrant", 0x35f35e2, 0x35f3602, indexCPS2_Jill, 4 },
    { "(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3602, 0x35f3622, indexCPS2_Jill, 5 },
    { "(07) Not Used", 0x35f3622, 0x35f3642, indexCPS2_Jill, 6 },
    { "(08) Not Used", 0x35f3642, 0x35f3662, indexCPS2_Jill, 7 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_A2[] =
{
    { "Main Color A2", 0x35f3662, 0x35f3682, indexCPS2_Jill, 0 },
    { "(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3682, 0x35f36a2, indexCPS2_Jill, 1 },
    { "(03) Zombie", 0x35f36a2, 0x35f36c2, indexCPS2_Jill, 2 },
    { "(04) Dog / Crow / Fire Zombie", 0x35f36c2, 0x35f36e2, indexCPS2_Jill, 3 },
    { "(05) Tyrant", 0x35f36e2, 0x35f3702, indexCPS2_Jill, 4 },
    { "(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3702, 0x35f3722, indexCPS2_Jill, 5 },
    { "(07) Not Used", 0x35f3722, 0x35f3742, indexCPS2_Jill, 6 },
    { "(08) Not Used", 0x35f3742, 0x35f3762, indexCPS2_Jill, 7 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x35f3762, 0x35f3782, indexCPS2_Jill, 0 },
    { "Burning Light", 0x35f3782, 0x35f37a2, indexCPS2_Jill, 0 },
    { "Shocked Dark", 0x35f37a2, 0x35f37c2, indexCPS2_Jill, 0 },
    { "Shocked Light", 0x35f37c2, 0x35f37e2, indexCPS2_Jill, 0 },
    { "Dark Burning Dark", 0x35f37e2, 0x35f3802, indexCPS2_Jill, 0 },
    { "Dark Burning Light", 0x35f3802, 0x35f3822, indexCPS2_Jill, 0 },
    { "Kinetic Charge Dark", 0x35f3822, 0x35f3842, indexCPS2_Jill, 0 },
    { "Kinetic Charge Light", 0x35f3842, 0x35f3862, indexCPS2_Jill, 0 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Tyrant (Claw effect) - all buttons", 0x35f3862, 0x35f3882 },
    { /* 0x0a */ "Heal Assist - Herbs / ECG - all buttons", 0x35f3882, 0x35f38a2, indexCPS2_Jill, 12 },
    { /* 0x0b */ "Zombie Frame (Shining Frame) - all buttons", 0x35f38a2, 0x35f38c2, indexCPS2_Jill, 2 },
};

const sDescTreeNode MVC2_A_JILL_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_LP, ARRAYSIZE(MVC2_A_JILL_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_LK, ARRAYSIZE(MVC2_A_JILL_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_HP, ARRAYSIZE(MVC2_A_JILL_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_HK, ARRAYSIZE(MVC2_A_JILL_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_A1, ARRAYSIZE(MVC2_A_JILL_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_A2, ARRAYSIZE(MVC2_A_JILL_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_JILL_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_JILL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_LP[] =
{
    { "Main Color LP", 0x36f0742, 0x36f0762, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0762, 0x36f0782, indexCPS2_Hayato, 1 },
    { "(03) ID: 01-08: Intro (Rising Flames)", 0x36f0782, 0x36f07a2, indexCPS2_Hayato, 2 },
    { "(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f07a2, 0x36f07c2, indexCPS2_Hayato, 3 },
    { "(05) Intro: Motorcycle", 0x36f07c2, 0x36f07e2, indexCPS2_Hayato, 4 },
    { "(06) Dark Hayato", 0x36f07e2, 0x36f0802, indexCPS2_Hayato, 5 },
    { "(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0802, 0x36f0822, indexCPS2_Hayato, 6 },
    { "(08) Super Flash Frame 2", 0x36f0822, 0x36f0842, indexCPS2_Hayato, 7 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_LK[] =
{
    { "Main Color LK", 0x36f0842, 0x36f0862, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0862, 0x36f0882, indexCPS2_Hayato, 1 },
    { "(03) ID: 01-08: Intro (Rising Flames)", 0x36f0882, 0x36f08a2, indexCPS2_Hayato, 2 },
    { "(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f08a2, 0x36f08c2, indexCPS2_Hayato, 3 },
    { "(05) Intro: Motorcycle", 0x36f08c2, 0x36f08e2, indexCPS2_Hayato, 4 },
    { "(06) Dark Hayato", 0x36f08e2, 0x36f0902, indexCPS2_Hayato, 5 },
    { "(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0902, 0x36f0922, indexCPS2_Hayato, 6 },
    { "(08) Super Flash Frame 2", 0x36f0922, 0x36f0942, indexCPS2_Hayato, 7 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_HP[] =
{
    { "Main Color HP", 0x36f0942, 0x36f0962, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0962, 0x36f0982, indexCPS2_Hayato, 1 },
    { "(03) ID: 01-08: Intro (Rising Flames)", 0x36f0982, 0x36f09a2, indexCPS2_Hayato, 2 },
    { "(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f09a2, 0x36f09c2, indexCPS2_Hayato, 3 },
    { "(05) Intro: Motorcycle", 0x36f09c2, 0x36f09e2, indexCPS2_Hayato, 4 },
    { "(06) Dark Hayato", 0x36f09e2, 0x36f0a02, indexCPS2_Hayato, 5 },
    { "(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0a02, 0x36f0a22, indexCPS2_Hayato, 6 },
    { "(08) Super Flash Frame 2", 0x36f0a22, 0x36f0a42, indexCPS2_Hayato, 7 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_HK[] =
{
    { "Main Color HK", 0x36f0a42, 0x36f0a62, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0a62, 0x36f0a82, indexCPS2_Hayato, 1 },
    { "(03) ID: 01-08: Intro (Rising Flames)", 0x36f0a82, 0x36f0aa2, indexCPS2_Hayato, 2 },
    { "(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f0aa2, 0x36f0ac2, indexCPS2_Hayato, 3 },
    { "(05) Intro: Motorcycle", 0x36f0ac2, 0x36f0ae2, indexCPS2_Hayato, 4 },
    { "(06) Dark Hayato", 0x36f0ae2, 0x36f0b02, indexCPS2_Hayato, 5 },
    { "(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0b02, 0x36f0b22, indexCPS2_Hayato, 6 },
    { "(08) Super Flash Frame 2", 0x36f0b22, 0x36f0b42, indexCPS2_Hayato, 7 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_A1[] =
{
    { "Main Color A1", 0x36f0b42, 0x36f0b62, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0b62, 0x36f0b82, indexCPS2_Hayato, 1 },
    { "(03) ID: 01-08: Intro (Rising Flames)", 0x36f0b82, 0x36f0ba2, indexCPS2_Hayato, 2 },
    { "(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f0ba2, 0x36f0bc2, indexCPS2_Hayato, 3 },
    { "(05) Intro: Motorcycle", 0x36f0bc2, 0x36f0be2, indexCPS2_Hayato, 4 },
    { "(06) Dark Hayato", 0x36f0be2, 0x36f0c02, indexCPS2_Hayato, 5 },
    { "(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0c02, 0x36f0c22, indexCPS2_Hayato, 6 },
    { "(08) Super Flash Frame 2", 0x36f0c22, 0x36f0c42, indexCPS2_Hayato, 7 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_A2[] =
{
    { "Main Color A2", 0x36f0c42, 0x36f0c62, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0c62, 0x36f0c82, indexCPS2_Hayato, 1 },
    { "(03) ID: 01-08: Intro (Rising Flames)", 0x36f0c82, 0x36f0ca2, indexCPS2_Hayato, 2 },
    { "(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f0ca2, 0x36f0cc2, indexCPS2_Hayato, 3 },
    { "(05) Intro: Motorcycle", 0x36f0cc2, 0x36f0ce2, indexCPS2_Hayato, 4 },
    { "(06) Dark Hayato", 0x36f0ce2, 0x36f0d02, indexCPS2_Hayato, 5 },
    { "(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0d02, 0x36f0d22, indexCPS2_Hayato, 6 },
    { "(08) Super Flash Frame 2", 0x36f0d22, 0x36f0d42, indexCPS2_Hayato, 7 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x36f0d42, 0x36f0d62, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Burning Dark 2", 0x36f0d62, 0x36f0d82, indexCPS2_Hayato, 1 },
    { "Burning Light", 0x36f0d82, 0x36f0da2, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Burning Light 2", 0x36f0da2, 0x36f0dc2, indexCPS2_Hayato, 1 },
    { "Shocked Dark", 0x36f0dc2, 0x36f0de2, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Shocked Dark 2", 0x36f0de2, 0x36f0e02, indexCPS2_Hayato, 1 },
    { "Shocked Light", 0x36f0e02, 0x36f0e22, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Shocked Light 2", 0x36f0e22, 0x36f0e42, indexCPS2_Hayato, 1 },
    { "Dark Burning Dark", 0x36f0e42, 0x36f0e62, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Dark Burning Dark 2", 0x36f0e62, 0x36f0e82, indexCPS2_Hayato, 1 },
    { "Dark Burning Light", 0x36f0e82, 0x36f0ea2, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Dark Burning Light 2", 0x36f0ea2, 0x36f0ec2, indexCPS2_Hayato, 1 },
    { "Kinetic Charge Dark", 0x36f0ec2, 0x36f0ee2, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Kinetic Charge Dark 2", 0x36f0ee2, 0x36f0f02, indexCPS2_Hayato, 1 },
    { "Kinetic Charge Light", 0x36f0f02, 0x36f0f22, indexCPS2_Hayato, 0, &pairHayatoSword },
    { "Kinetic Charge Light 2", 0x36f0f22, 0x36f0f42, indexCPS2_Hayato, 1 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_EXTRAS[] =
{
    { /* 0x11 */ "Not Used", 0x36f0f42, 0x36f0f62 },
    { /* 0x12 */ "Not Used", 0x36f0f62, 0x36f0f82 },
    { /* 0x13 */ "Not Used", 0x36f0f82, 0x36f0fa2 },
    { /* 0x14 */ "Winpose - Saturn", 0x36f0fa2, 0x36f0fc2 },
    { /* 0x15 */ "Winpose - Jun", 0x36f0fc2, 0x36f0fe2 },
    { /* 0x16 */ "Winpose - Jun' Ring", 0x36f0fe2, 0x36f1002 },
    { /* 0x17 */ "Winpose - Elle", 0x36f1002, 0x36f1022 },
};

const sDescTreeNode MVC2_A_HAYATO_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_LP, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_LK, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_HP, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_HK, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_A1, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_A2, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_LP[] =
{
    { "Main Color LP", 0x37f9ce2, 0x37f9d02, indexCPS2_Ruby, 0 },
    { "(02) Chest", 0x37f9d02, 0x37f9d22, indexCPS2_Ruby, 1 },
    { "(03) Phantom", 0x37f9d22, 0x37f9d42, indexCPS2_Ruby, 2 },
    { "(04) Canon fire", 0x37f9d42, 0x37f9d62, indexCPS2_Ruby, 3 },
    { "(05) Sublimation", 0x37f9d62, 0x37f9d82, indexCPS2_Ruby, 4 },
    { "(06) Ship", 0x37f9d82, 0x37f9da2, indexCPS2_Ruby, 5 },
    { "(07) Anchor/barrel/swords", 0x37f9da2, 0x37f9dc2, indexCPS2_Ruby, 6 },
    { "(08) Swartzelle (Ruby)", 0x37f9dc2, 0x37f9de2, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_LK[] =
{
    { "Main Color LK", 0x37f9de2, 0x37f9e02, indexCPS2_Ruby, 0 },
    { "(02) Chest", 0x37f9e02, 0x37f9e22, indexCPS2_Ruby, 1 },
    { "(03) Phantom", 0x37f9e22, 0x37f9e42, indexCPS2_Ruby, 2 },
    { "(04) Canon fire", 0x37f9e42, 0x37f9e62, indexCPS2_Ruby, 3 },
    { "(05) Sublimation", 0x37f9e62, 0x37f9e82, indexCPS2_Ruby, 4 },
    { "(06) Ship", 0x37f9e82, 0x37f9ea2, indexCPS2_Ruby, 5 },
    { "(07) Anchor/barrel/swords", 0x37f9ea2, 0x37f9ec2, indexCPS2_Ruby, 6 },
    { "(08) Swartzelle (Ruby)", 0x37f9ec2, 0x37f9ee2, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_HP[] =
{
    { "Main Color HP", 0x37f9ee2, 0x37f9f02, indexCPS2_Ruby, 0 },
    { "(02) Chest", 0x37f9f02, 0x37f9f22, indexCPS2_Ruby, 1 },
    { "(03) Phantom", 0x37f9f22, 0x37f9f42, indexCPS2_Ruby, 2 },
    { "(04) Canon fire", 0x37f9f42, 0x37f9f62, indexCPS2_Ruby, 3 },
    { "(05) Sublimation", 0x37f9f62, 0x37f9f82, indexCPS2_Ruby, 4 },
    { "(06) Ship", 0x37f9f82, 0x37f9fa2, indexCPS2_Ruby, 5 },
    { "(07) Anchor/barrel/swords", 0x37f9fa2, 0x37f9fc2, indexCPS2_Ruby, 6 },
    { "(08) Swartzelle (Ruby)", 0x37f9fc2, 0x37f9fe2, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_HK[] =
{
    { "Main Color HK", 0x37f9fe2, 0x37fa002, indexCPS2_Ruby, 0 },
    { "(02) Chest", 0x37fa002, 0x37fa022, indexCPS2_Ruby, 1 },
    { "(03) Phantom", 0x37fa022, 0x37fa042, indexCPS2_Ruby, 2 },
    { "(04) Canon fire", 0x37fa042, 0x37fa062, indexCPS2_Ruby, 3 },
    { "(05) Sublimation", 0x37fa062, 0x37fa082, indexCPS2_Ruby, 4 },
    { "(06) Ship", 0x37fa082, 0x37fa0a2, indexCPS2_Ruby, 5 },
    { "(07) Anchor/barrel/swords", 0x37fa0a2, 0x37fa0c2, indexCPS2_Ruby, 6 },
    { "(08) Swartzelle (Ruby)", 0x37fa0c2, 0x37fa0e2, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_A1[] =
{
    { "Main Color A1", 0x37fa0e2, 0x37fa102, indexCPS2_Ruby, 0 },
    { "(02) Chest", 0x37fa102, 0x37fa122, indexCPS2_Ruby, 1 },
    { "(03) Phantom", 0x37fa122, 0x37fa142, indexCPS2_Ruby, 2 },
    { "(04) Canon fire", 0x37fa142, 0x37fa162, indexCPS2_Ruby, 3 },
    { "(05) Sublimation", 0x37fa162, 0x37fa182, indexCPS2_Ruby, 4 },
    { "(06) Ship", 0x37fa182, 0x37fa1a2, indexCPS2_Ruby, 5 },
    { "(07) Anchor/barrel/swords", 0x37fa1a2, 0x37fa1c2, indexCPS2_Ruby, 6 },
    { "(08) Swartzelle (Ruby)", 0x37fa1c2, 0x37fa1e2, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_A2[] =
{
    { "Main Color A2", 0x37fa1e2, 0x37fa202, indexCPS2_Ruby, 0 },
    { "(02) Chest", 0x37fa202, 0x37fa222, indexCPS2_Ruby, 1 },
    { "(03) Phantom", 0x37fa222, 0x37fa242, indexCPS2_Ruby, 2 },
    { "(04) Canon fire", 0x37fa242, 0x37fa262, indexCPS2_Ruby, 3 },
    { "(05) Sublimation", 0x37fa262, 0x37fa282, indexCPS2_Ruby, 4 },
    { "(06) Ship", 0x37fa282, 0x37fa2a2, indexCPS2_Ruby, 5 },
    { "(07) Anchor/barrel/swords", 0x37fa2a2, 0x37fa2c2, indexCPS2_Ruby, 6 },
    { "(08) Swartzelle (Ruby)", 0x37fa2c2, 0x37fa2e2, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x37fa2e2, 0x37fa302, indexCPS2_Ruby, 0 },
    { "Burning Light", 0x37fa302, 0x37fa322, indexCPS2_Ruby, 0 },
    { "Shocked Dark", 0x37fa322, 0x37fa342, indexCPS2_Ruby, 0 },
    { "Shocked Light", 0x37fa342, 0x37fa362, indexCPS2_Ruby, 0 },
    { "Dark Burning Dark", 0x37fa362, 0x37fa382, indexCPS2_Ruby, 0 },
    { "Dark Burning Light", 0x37fa382, 0x37fa3a2, indexCPS2_Ruby, 0 },
    { "Kinetic Charge Dark", 0x37fa3a2, 0x37fa3c2, indexCPS2_Ruby, 0 },
    { "Kinetic Charge Light", 0x37fa3c2, 0x37fa3e2, indexCPS2_Ruby, 0 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x37fa3e2, 0x37fa402 },
    { /* 0x0a */ "Not Used", 0x37fa402, 0x37fa422 },
    { /* 0x0b */ "Pirate (Medium)", 0x37fa422, 0x37fa442 },
    { /* 0x0c */ "Pirate (Big)", 0x37fa442, 0x37fa462 },
    { /* 0x0d */ "Pirate (Holds Barrel)", 0x37fa462, 0x37fa482 },
    { /* 0x0e */ "Mystic Orb (Enhance Assist)", 0x37fa482, 0x37fa4a2 },
    { /* 0x0f */ "Not Used", 0x37fa4a2, 0x37fa4c2 },
    { /* 0x10 */ "ID: 01-16: Swartzelle (Super) ID:09-15: Not Used", 0x37fa4c2, 0x37fa4e2, indexCPS2_Ruby, 15 },
};

const sDescTreeNode MVC2_A_RUBY_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_LP, ARRAYSIZE(MVC2_A_RUBY_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_LK, ARRAYSIZE(MVC2_A_RUBY_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_HP, ARRAYSIZE(MVC2_A_RUBY_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_HK, ARRAYSIZE(MVC2_A_RUBY_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_A1, ARRAYSIZE(MVC2_A_RUBY_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_A2, ARRAYSIZE(MVC2_A_RUBY_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_SHARED, ARRAYSIZE(MVC2_A_RUBY_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_RUBY_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_LP[] =
{
    { "Main Color LP", 0x39136c2, 0x39136e2, indexCPS2_SonSon, 0 },
    { "(02) Monkeys", 0x39136e2, 0x3913702, indexCPS2_SonSon, 1 },
    { "(03) Cane Effects / Pot and Fire", 0x3913702, 0x3913722, indexCPS2_SonSon, 2 },
    { "(04) Bottled Enemy", 0x3913722, 0x3913742, indexCPS2_SonSon, 3 },
    { "(05) Huge Cane / POW", 0x3913742, 0x3913762, indexCPS2_SonSon, 4 },
    { "(06) Huge Cane (Tip)", 0x3913762, 0x3913782, indexCPS2_SonSon, 5 },
    { "(07) Burned Monkey", 0x3913782, 0x39137a2, indexCPS2_SonSon, 6 },
    { "(08) Transformation Frame for Super", 0x39137a2, 0x39137c2, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_LK[] =
{
    { "Main Color LK", 0x39137c2, 0x39137e2, indexCPS2_SonSon, 0 },
    { "(02) Monkeys", 0x39137e2, 0x3913802, indexCPS2_SonSon, 1 },
    { "(03) Cane Effects / Pot and Fire", 0x3913802, 0x3913822, indexCPS2_SonSon, 2 },
    { "(04) Bottled Enemy", 0x3913822, 0x3913842, indexCPS2_SonSon, 3 },
    { "(05) Huge Cane / POW", 0x3913842, 0x3913862, indexCPS2_SonSon, 4 },
    { "(06) Huge Cane (Tip)", 0x3913862, 0x3913882, indexCPS2_SonSon, 5 },
    { "(07) Burned Monkey", 0x3913882, 0x39138a2, indexCPS2_SonSon, 6 },
    { "(08) Transformation Frame for Super", 0x39138a2, 0x39138c2, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_HP[] =
{
    { "Main Color HP", 0x39138c2, 0x39138e2, indexCPS2_SonSon, 0 },
    { "(02) Monkeys", 0x39138e2, 0x3913902, indexCPS2_SonSon, 1 },
    { "(03) Cane Effects / Pot and Fire", 0x3913902, 0x3913922, indexCPS2_SonSon, 2 },
    { "(04) Bottled Enemy", 0x3913922, 0x3913942, indexCPS2_SonSon, 3 },
    { "(05) Huge Cane / POW", 0x3913942, 0x3913962, indexCPS2_SonSon, 4 },
    { "(06) Huge Cane (Tip)", 0x3913962, 0x3913982, indexCPS2_SonSon, 5 },
    { "(07) Burned Monkey", 0x3913982, 0x39139a2, indexCPS2_SonSon, 6 },
    { "(08) Transformation Frame for Super", 0x39139a2, 0x39139c2, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_HK[] =
{
    { "Main Color HK", 0x39139c2, 0x39139e2, indexCPS2_SonSon, 0 },
    { "(02) Monkeys", 0x39139e2, 0x3913a02, indexCPS2_SonSon, 1 },
    { "(03) Cane Effects / Pot and Fire", 0x3913a02, 0x3913a22, indexCPS2_SonSon, 2 },
    { "(04) Bottled Enemy", 0x3913a22, 0x3913a42, indexCPS2_SonSon, 3 },
    { "(05) Huge Cane / POW", 0x3913a42, 0x3913a62, indexCPS2_SonSon, 4 },
    { "(06) Huge Cane (Tip)", 0x3913a62, 0x3913a82, indexCPS2_SonSon, 5 },
    { "(07) Burned Monkey", 0x3913a82, 0x3913aa2, indexCPS2_SonSon, 6 },
    { "(08) Transformation Frame for Super", 0x3913aa2, 0x3913ac2, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_A1[] =
{
    { "Main Color A1", 0x3913ac2, 0x3913ae2, indexCPS2_SonSon, 0 },
    { "(02) Monkeys", 0x3913ae2, 0x3913b02, indexCPS2_SonSon, 1 },
    { "(03) Cane Effects / Pot and Fire", 0x3913b02, 0x3913b22, indexCPS2_SonSon, 2 },
    { "(04) Bottled Enemy", 0x3913b22, 0x3913b42, indexCPS2_SonSon, 3 },
    { "(05) Huge Cane / POW", 0x3913b42, 0x3913b62, indexCPS2_SonSon, 4 },
    { "(06) Huge Cane (Tip)", 0x3913b62, 0x3913b82, indexCPS2_SonSon, 5 },
    { "(07) Burned Monkey", 0x3913b82, 0x3913ba2, indexCPS2_SonSon, 6 },
    { "(08) Transformation Frame for Super", 0x3913ba2, 0x3913bc2, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_A2[] =
{
    { "Main Color A2", 0x3913bc2, 0x3913be2, indexCPS2_SonSon, 0 },
    { "(02) Monkeys", 0x3913be2, 0x3913c02, indexCPS2_SonSon, 1 },
    { "(03) Cane Effects / Pot and Fire", 0x3913c02, 0x3913c22, indexCPS2_SonSon, 2 },
    { "(04) Bottled Enemy", 0x3913c22, 0x3913c42, indexCPS2_SonSon, 3 },
    { "(05) Huge Cane / POW", 0x3913c42, 0x3913c62, indexCPS2_SonSon, 4 },
    { "(06) Huge Cane (Tip)", 0x3913c62, 0x3913c82, indexCPS2_SonSon, 5 },
    { "(07) Burned Monkey", 0x3913c82, 0x3913ca2, indexCPS2_SonSon, 6 },
    { "(08) Transformation Frame for Super", 0x3913ca2, 0x3913cc2, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3913cc2, 0x3913ce2, indexCPS2_SonSon, 0 },
    { "Burning Light", 0x3913ce2, 0x3913d02, indexCPS2_SonSon, 0 },
    { "Shocked Dark", 0x3913d02, 0x3913d22, indexCPS2_SonSon, 0 },
    { "Shocked Light", 0x3913d22, 0x3913d42, indexCPS2_SonSon, 0 },
    { "Dark Burning Dark", 0x3913d42, 0x3913d62, indexCPS2_SonSon, 0 },
    { "Dark Burning Light", 0x3913d62, 0x3913d82, indexCPS2_SonSon, 0 },
    { "Kinetic Charge Dark", 0x3913d82, 0x3913da2, indexCPS2_SonSon, 0 },
    { "Kinetic Charge Light", 0x3913da2, 0x3913dc2, indexCPS2_SonSon, 0 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x3913dc2, 0x3913de2 },
    { /* 0x0a */ "Not Used", 0x3913de2, 0x3913e02 },
    { /* 0x0b */ "Strawberry / Watermelon", 0x3913e02, 0x3913e22 },
    { /* 0x0c */ "Peach", 0x3913e22, 0x3913e42 },
    { /* 0x0d */ "Not Used", 0x3913e42, 0x3913e62 },
    { /* 0x0e */ "Not Used", 0x3913e62, 0x3913e82 },
    { /* 0x0f */ "LP - Monkey King", 0x3913e82, 0x3913ea2, indexCPS2_SonSon, 11 },
    { /* 0x10 */ "LK - Monkey King", 0x3913ea2, 0x3913ec2, indexCPS2_SonSon, 11 },
    { /* 0x11 */ "HP - Monkey King", 0x3913ec2, 0x3913ee2, indexCPS2_SonSon, 11 },
    { /* 0x12 */ "HK - Monkey King", 0x3913ee2, 0x3913f02, indexCPS2_SonSon, 11 },
    { /* 0x13 */ "A1 - Monkey King", 0x3913f02, 0x3913f22, indexCPS2_SonSon, 11 },
    { /* 0x14 */ "A2 - Monkey King", 0x3913f22, 0x3913f42, indexCPS2_SonSon, 11 },
    { /* 0x15 */ "Not Used", 0x3913f42, 0x3913f62 },
    { /* 0x16 */ "Monkey King (Laser) - all buttons", 0x3913f62, 0x3913f82 },
    { /* 0x17 */ "LP - Monkey King (when hit)", 0x3913f82, 0x3913fa2, indexCPS2_SonSon, 11 },
    { /* 0x18 */ "LK - Monkey King (when hit)", 0x3913fa2, 0x3913fc2, indexCPS2_SonSon, 11 },
    { /* 0x19 */ "HP - Monkey King (when hit)", 0x3913fc2, 0x3913fe2, indexCPS2_SonSon, 11 },
    { /* 0x1a */ "HK - Monkey King (when hit)", 0x3913fe2, 0x3914002, indexCPS2_SonSon, 11 },
    { /* 0x1b */ "A1 - Monkey King (when hit)", 0x3914002, 0x3914022, indexCPS2_SonSon, 11 },
    { /* 0x1c */ "A2 - Monkey King (when hit)", 0x3914022, 0x3914042, indexCPS2_SonSon, 11 },
    { /* 0x1d */ "LP - Monkey King (Laser Reflect Frame 1)", 0x3914042, 0x3914062, indexCPS2_SonSon, 11 },
    { /* 0x1e */ "LP - Monkey King (Laser Reflect Frame 2)", 0x3914062, 0x3914082, indexCPS2_SonSon, 11 },
    { /* 0x1f */ "LK - Monkey King (Laser Reflect Frame 1)", 0x3914082, 0x39140a2, indexCPS2_SonSon, 11 },
    { /* 0x20 */ "LK - Monkey King (Laser Reflect Frame 2)", 0x39140a2, 0x39140c2, indexCPS2_SonSon, 11 },
    { /* 0x21 */ "HP - Monkey King (Laser Reflect Frame 1)", 0x39140c2, 0x39140e2, indexCPS2_SonSon, 11 },
    { /* 0x22 */ "HP - Monkey King (Laser Reflect Frame 2)", 0x39140e2, 0x3914102, indexCPS2_SonSon, 11 },
    { /* 0x23 */ "HK - Monkey King (Laser Reflect Frame 1)", 0x3914102, 0x3914122, indexCPS2_SonSon, 11 },
    { /* 0x24 */ "HK - Monkey King (Laser Reflect Frame 2)", 0x3914122, 0x3914142, indexCPS2_SonSon, 11 },
    { /* 0x25 */ "A1 - Monkey King (Laser Reflect Frame 1)", 0x3914142, 0x3914162, indexCPS2_SonSon, 11 },
    { /* 0x26 */ "A1 - Monkey King (Laser Reflect Frame 2)", 0x3914162, 0x3914182, indexCPS2_SonSon, 11 },
    { /* 0x27 */ "A2 - Monkey King (Laser Reflect Frame 1)", 0x3914182, 0x39141a2, indexCPS2_SonSon, 11 },
    { /* 0x28 */ "A2 - Monkey King (Laser Reflect Frame 2)", 0x39141a2, 0x39141c2, indexCPS2_SonSon, 11 },
};

const sDescTreeNode MVC2_A_SONSON_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_LP, ARRAYSIZE(MVC2_A_SONSON_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_LK, ARRAYSIZE(MVC2_A_SONSON_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_HP, ARRAYSIZE(MVC2_A_SONSON_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_HK, ARRAYSIZE(MVC2_A_SONSON_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_A1, ARRAYSIZE(MVC2_A_SONSON_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_A2, ARRAYSIZE(MVC2_A_SONSON_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SONSON_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SONSON_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_LP[] =
{
    { "Main Color LP", 0x3a2c762, 0x3a2c782, indexCPS2_Amingo, 0 },
    { "(02) Not Used", 0x3a2c782, 0x3a2c7a2, indexCPS2_Amingo, 1 },
    { "(03) Shouting Of The Wind", 0x3a2c7a2, 0x3a2c7c2, indexCPS2_Amingo, 2 },
    { "(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2c7c2, 0x3a2c7e2, indexCPS2_Amingo, 3 },
    { "(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2c7e2, 0x3a2c802, indexCPS2_Amingo, 4 },
    { "(06) Not Used", 0x3a2c802, 0x3a2c822, indexCPS2_Amingo, 5 },
    { "(07) Not Used", 0x3a2c822, 0x3a2c842, indexCPS2_Amingo, 6 },
    { "(08) Not Used", 0x3a2c842, 0x3a2c862, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_LK[] =
{
    { "Main Color LK", 0x3a2c862, 0x3a2c882, indexCPS2_Amingo, 0 },
    { "(02) Not Used", 0x3a2c882, 0x3a2c8a2, indexCPS2_Amingo, 1 },
    { "(03) Shouting Of The Wind", 0x3a2c8a2, 0x3a2c8c2, indexCPS2_Amingo, 2 },
    { "(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2c8c2, 0x3a2c8e2, indexCPS2_Amingo, 3 },
    { "(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2c8e2, 0x3a2c902, indexCPS2_Amingo, 4 },
    { "(06) Not Used", 0x3a2c902, 0x3a2c922, indexCPS2_Amingo, 5 },
    { "(07) Not Used", 0x3a2c922, 0x3a2c942, indexCPS2_Amingo, 6 },
    { "(08) Not Used", 0x3a2c942, 0x3a2c962, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_HP[] =
{
    { "Main Color HP", 0x3a2c962, 0x3a2c982, indexCPS2_Amingo, 0 },
    { "(02) Not Used", 0x3a2c982, 0x3a2c9a2, indexCPS2_Amingo, 1 },
    { "(03) Shouting Of The Wind", 0x3a2c9a2, 0x3a2c9c2, indexCPS2_Amingo, 2 },
    { "(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2c9c2, 0x3a2c9e2, indexCPS2_Amingo, 3 },
    { "(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2c9e2, 0x3a2ca02, indexCPS2_Amingo, 4 },
    { "(06) Not Used", 0x3a2ca02, 0x3a2ca22, indexCPS2_Amingo, 5 },
    { "(07) Not Used", 0x3a2ca22, 0x3a2ca42, indexCPS2_Amingo, 6 },
    { "(08) Not Used", 0x3a2ca42, 0x3a2ca62, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_HK[] =
{
    { "Main Color HK", 0x3a2ca62, 0x3a2ca82, indexCPS2_Amingo, 0 },
    { "(02) Not Used", 0x3a2ca82, 0x3a2caa2, indexCPS2_Amingo, 1 },
    { "(03) Shouting Of The Wind", 0x3a2caa2, 0x3a2cac2, indexCPS2_Amingo, 2 },
    { "(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2cac2, 0x3a2cae2, indexCPS2_Amingo, 3 },
    { "(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2cae2, 0x3a2cb02, indexCPS2_Amingo, 4 },
    { "(06) Not Used", 0x3a2cb02, 0x3a2cb22, indexCPS2_Amingo, 5 },
    { "(07) Not Used", 0x3a2cb22, 0x3a2cb42, indexCPS2_Amingo, 6 },
    { "(08) Not Used", 0x3a2cb42, 0x3a2cb62, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_A1[] =
{
    { "Main Color A1", 0x3a2cb62, 0x3a2cb82, indexCPS2_Amingo, 0 },
    { "(02) Not Used", 0x3a2cb82, 0x3a2cba2, indexCPS2_Amingo, 1 },
    { "(03) Shouting Of The Wind", 0x3a2cba2, 0x3a2cbc2, indexCPS2_Amingo, 2 },
    { "(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2cbc2, 0x3a2cbe2, indexCPS2_Amingo, 3 },
    { "(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2cbe2, 0x3a2cc02, indexCPS2_Amingo, 4 },
    { "(06) Not Used", 0x3a2cc02, 0x3a2cc22, indexCPS2_Amingo, 5 },
    { "(07) Not Used", 0x3a2cc22, 0x3a2cc42, indexCPS2_Amingo, 6 },
    { "(08) Not Used", 0x3a2cc42, 0x3a2cc62, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_A2[] =
{
    { "Main Color A2", 0x3a2cc62, 0x3a2cc82, indexCPS2_Amingo, 0 },
    { "(02) Not Used", 0x3a2cc82, 0x3a2cca2, indexCPS2_Amingo, 1 },
    { "(03) Shouting Of The Wind", 0x3a2cca2, 0x3a2ccc2, indexCPS2_Amingo, 2 },
    { "(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2ccc2, 0x3a2cce2, indexCPS2_Amingo, 3 },
    { "(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2cce2, 0x3a2cd02, indexCPS2_Amingo, 4 },
    { "(06) Not Used", 0x3a2cd02, 0x3a2cd22, indexCPS2_Amingo, 5 },
    { "(07) Not Used", 0x3a2cd22, 0x3a2cd42, indexCPS2_Amingo, 6 },
    { "(08) Not Used", 0x3a2cd42, 0x3a2cd62, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3a2cd62, 0x3a2cd82, indexCPS2_Amingo, 0 },
    { "Burning Light", 0x3a2cd82, 0x3a2cda2, indexCPS2_Amingo, 0 },
    { "Shocked Dark", 0x3a2cda2, 0x3a2cdc2, indexCPS2_Amingo, 0 },
    { "Shocked Light", 0x3a2cdc2, 0x3a2cde2, indexCPS2_Amingo, 0 },
    { "Dark Burning Dark", 0x3a2cde2, 0x3a2ce02, indexCPS2_Amingo, 0 },
    { "Dark Burning Light", 0x3a2ce02, 0x3a2ce22, indexCPS2_Amingo, 0 },
    { "Kinetic Charge Dark", 0x3a2ce22, 0x3a2ce42, indexCPS2_Amingo, 0 },
    { "Kinetic Charge Light", 0x3a2ce42, 0x3a2ce62, indexCPS2_Amingo, 0 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "ID: 01-08 Not Used ID:09-15: Heal Assist", 0x3a2ce62, 0x3a2ce82, indexCPS2_Amingo, 11 },
    { /* 0x0a */ "Not Used", 0x3a2ce82, 0x3a2cea2 },
    { /* 0x0b */ "ID: 01-08 Not Used ID:09-15: Enhance Assist", 0x3a2cea2, 0x3a2cec2, indexCPS2_Amingo, 11 },
};

const sDescTreeNode MVC2_A_AMINGO_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_LP, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_LK, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_HP, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_HK, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_A1, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_A2, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_LP[] =
{
    { "Main Color LP", 0x3b214a2, 0x3b214c2, indexCPS2_Marrow, 0 },
    { "(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b214c2, 0x3b214e2, indexCPS2_Marrow, 1 },
    { "(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b214e2, 0x3b21502, indexCPS2_Marrow, 2 },
    { "(04) Not Used", 0x3b21502, 0x3b21522, indexCPS2_Marrow, 3 },
    { "(05) Not Used", 0x3b21522, 0x3b21542, indexCPS2_Marrow, 4 },
    { "(06) Not Used", 0x3b21542, 0x3b21562, indexCPS2_Marrow, 5 },
    { "(07) Not Used", 0x3b21562, 0x3b21582, indexCPS2_Marrow, 6 },
    { "(08) Not Used", 0x3b21582, 0x3b215a2, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_LK[] =
{
    { "Main Color LK", 0x3b215a2, 0x3b215c2, indexCPS2_Marrow, 0 },
    { "(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b215c2, 0x3b215e2, indexCPS2_Marrow, 1 },
    { "(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b215e2, 0x3b21602, indexCPS2_Marrow, 2 },
    { "(04) Not Used", 0x3b21602, 0x3b21622, indexCPS2_Marrow, 3 },
    { "(05) Not Used", 0x3b21622, 0x3b21642, indexCPS2_Marrow, 4 },
    { "(06) Not Used", 0x3b21642, 0x3b21662, indexCPS2_Marrow, 5 },
    { "(07) Not Used", 0x3b21662, 0x3b21682, indexCPS2_Marrow, 6 },
    { "(08) Not Used", 0x3b21682, 0x3b216a2, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_HP[] =
{
    { "Main Color HP", 0x3b216a2, 0x3b216c2, indexCPS2_Marrow, 0 },
    { "(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b216c2, 0x3b216e2, indexCPS2_Marrow, 1 },
    { "(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b216e2, 0x3b21702, indexCPS2_Marrow, 2 },
    { "(04) Not Used", 0x3b21702, 0x3b21722, indexCPS2_Marrow, 3 },
    { "(05) Not Used", 0x3b21722, 0x3b21742, indexCPS2_Marrow, 4 },
    { "(06) Not Used", 0x3b21742, 0x3b21762, indexCPS2_Marrow, 5 },
    { "(07) Not Used", 0x3b21762, 0x3b21782, indexCPS2_Marrow, 6 },
    { "(08) Not Used", 0x3b21782, 0x3b217a2, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_HK[] =
{
    { "Main Color HK", 0x3b217a2, 0x3b217c2, indexCPS2_Marrow, 0 },
    { "(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b217c2, 0x3b217e2, indexCPS2_Marrow, 1 },
    { "(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b217e2, 0x3b21802, indexCPS2_Marrow, 2 },
    { "(04) Not Used", 0x3b21802, 0x3b21822, indexCPS2_Marrow, 3 },
    { "(05) Not Used", 0x3b21822, 0x3b21842, indexCPS2_Marrow, 4 },
    { "(06) Not Used", 0x3b21842, 0x3b21862, indexCPS2_Marrow, 5 },
    { "(07) Not Used", 0x3b21862, 0x3b21882, indexCPS2_Marrow, 6 },
    { "(08) Not Used", 0x3b21882, 0x3b218a2, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_A1[] =
{
    { "Main Color A1", 0x3b218a2, 0x3b218c2, indexCPS2_Marrow, 0 },
    { "(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b218c2, 0x3b218e2, indexCPS2_Marrow, 1 },
    { "(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b218e2, 0x3b21902, indexCPS2_Marrow, 2 },
    { "(04) Not Used", 0x3b21902, 0x3b21922, indexCPS2_Marrow, 3 },
    { "(05) Not Used", 0x3b21922, 0x3b21942, indexCPS2_Marrow, 4 },
    { "(06) Not Used", 0x3b21942, 0x3b21962, indexCPS2_Marrow, 5 },
    { "(07) Not Used", 0x3b21962, 0x3b21982, indexCPS2_Marrow, 6 },
    { "(08) Not Used", 0x3b21982, 0x3b219a2, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_A2[] =
{
    { "Main Color A2", 0x3b219a2, 0x3b219c2, indexCPS2_Marrow, 0 },
    { "(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b219c2, 0x3b219e2, indexCPS2_Marrow, 1 },
    { "(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b219e2, 0x3b21a02, indexCPS2_Marrow, 2 },
    { "(04) Not Used", 0x3b21a02, 0x3b21a22, indexCPS2_Marrow, 3 },
    { "(05) Not Used", 0x3b21a22, 0x3b21a42, indexCPS2_Marrow, 4 },
    { "(06) Not Used", 0x3b21a42, 0x3b21a62, indexCPS2_Marrow, 5 },
    { "(07) Not Used", 0x3b21a62, 0x3b21a82, indexCPS2_Marrow, 6 },
    { "(08) Not Used", 0x3b21a82, 0x3b21aa2, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3b21aa2, 0x3b21ac2, indexCPS2_Marrow, 0 },
    { "Burning Light", 0x3b21ac2, 0x3b21ae2, indexCPS2_Marrow, 0 },
    { "Shocked Dark", 0x3b21ae2, 0x3b21b02, indexCPS2_Marrow, 0 },
    { "Shocked Light", 0x3b21b02, 0x3b21b22, indexCPS2_Marrow, 0 },
    { "Dark Burning Dark", 0x3b21b22, 0x3b21b42, indexCPS2_Marrow, 0 },
    { "Dark Burning Light", 0x3b21b42, 0x3b21b62, indexCPS2_Marrow, 0 },
    { "Kinetic Charge Dark", 0x3b21b62, 0x3b21b82, indexCPS2_Marrow, 0 },
    { "Kinetic Charge Light", 0x3b21b82, 0x3b21ba2, indexCPS2_Marrow, 0 },
};

const sDescTreeNode MVC2_A_MARROW_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_LP, ARRAYSIZE(MVC2_A_MARROW_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_LK, ARRAYSIZE(MVC2_A_MARROW_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_HP, ARRAYSIZE(MVC2_A_MARROW_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_HK, ARRAYSIZE(MVC2_A_MARROW_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_A1, ARRAYSIZE(MVC2_A_MARROW_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_A2, ARRAYSIZE(MVC2_A_MARROW_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MARROW_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_LP[] =
{
    { "Main Color LP", 0x3c2d5a2, 0x3c2d5c2, indexCPS2_Cable, 0 },
    { "(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d5c2, 0x3c2d5e2, indexCPS2_Cable, 1 },
    { "(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d5e2, 0x3c2d602, indexCPS2_Cable, 2 },
    { "(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d602, 0x3c2d622, indexCPS2_Cable, 3 },
    { "(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d622, 0x3c2d642, indexCPS2_Cable, 4 },
    { "(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d642, 0x3c2d662, indexCPS2_Cable, 5 },
    { "(07) Not Used", 0x3c2d662, 0x3c2d682, indexCPS2_Cable, 6 },
    { "(08) Not Used", 0x3c2d682, 0x3c2d6a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_LK[] =
{
    { "Main Color LK", 0x3c2d6a2, 0x3c2d6c2, indexCPS2_Cable, 0 },
    { "(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d6c2, 0x3c2d6e2, indexCPS2_Cable, 1 },
    { "(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d6e2, 0x3c2d702, indexCPS2_Cable, 2 },
    { "(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d702, 0x3c2d722, indexCPS2_Cable, 3 },
    { "(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d722, 0x3c2d742, indexCPS2_Cable, 4 },
    { "(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d742, 0x3c2d762, indexCPS2_Cable, 5 },
    { "(07) Not Used", 0x3c2d762, 0x3c2d782, indexCPS2_Cable, 6 },
    { "(08) Not Used", 0x3c2d782, 0x3c2d7a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_HP[] =
{
    { "Main Color HP", 0x3c2d7a2, 0x3c2d7c2, indexCPS2_Cable, 0 },
    { "(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d7c2, 0x3c2d7e2, indexCPS2_Cable, 1 },
    { "(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d7e2, 0x3c2d802, indexCPS2_Cable, 2 },
    { "(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d802, 0x3c2d822, indexCPS2_Cable, 3 },
    { "(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d822, 0x3c2d842, indexCPS2_Cable, 4 },
    { "(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d842, 0x3c2d862, indexCPS2_Cable, 5 },
    { "(07) Not Used", 0x3c2d862, 0x3c2d882, indexCPS2_Cable, 6 },
    { "(08) Not Used", 0x3c2d882, 0x3c2d8a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_HK[] =
{
    { "Main Color HK", 0x3c2d8a2, 0x3c2d8c2, indexCPS2_Cable, 0 },
    { "(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d8c2, 0x3c2d8e2, indexCPS2_Cable, 1 },
    { "(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d8e2, 0x3c2d902, indexCPS2_Cable, 2 },
    { "(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d902, 0x3c2d922, indexCPS2_Cable, 3 },
    { "(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d922, 0x3c2d942, indexCPS2_Cable, 4 },
    { "(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d942, 0x3c2d962, indexCPS2_Cable, 5 },
    { "(07) Not Used", 0x3c2d962, 0x3c2d982, indexCPS2_Cable, 6 },
    { "(08) Not Used", 0x3c2d982, 0x3c2d9a2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_A1[] =
{
    { "Main Color A1", 0x3c2d9a2, 0x3c2d9c2, indexCPS2_Cable, 0 },
    { "(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d9c2, 0x3c2d9e2, indexCPS2_Cable, 1 },
    { "(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d9e2, 0x3c2da02, indexCPS2_Cable, 2 },
    { "(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2da02, 0x3c2da22, indexCPS2_Cable, 3 },
    { "(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2da22, 0x3c2da42, indexCPS2_Cable, 4 },
    { "(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2da42, 0x3c2da62, indexCPS2_Cable, 5 },
    { "(07) Not Used", 0x3c2da62, 0x3c2da82, indexCPS2_Cable, 6 },
    { "(08) Not Used", 0x3c2da82, 0x3c2daa2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_A2[] =
{
    { "Main Color A2", 0x3c2daa2, 0x3c2dac2, indexCPS2_Cable, 0 },
    { "(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2dac2, 0x3c2dae2, indexCPS2_Cable, 1 },
    { "(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2dae2, 0x3c2db02, indexCPS2_Cable, 2 },
    { "(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2db02, 0x3c2db22, indexCPS2_Cable, 3 },
    { "(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2db22, 0x3c2db42, indexCPS2_Cable, 4 },
    { "(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2db42, 0x3c2db62, indexCPS2_Cable, 5 },
    { "(07) Not Used", 0x3c2db62, 0x3c2db82, indexCPS2_Cable, 6 },
    { "(08) Not Used", 0x3c2db82, 0x3c2dba2, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3c2dba2, 0x3c2dbc2, indexCPS2_Cable, 0 },
    { "Burning Light", 0x3c2dbc2, 0x3c2dbe2, indexCPS2_Cable, 0 },
    { "Shocked Dark", 0x3c2dbe2, 0x3c2dc02, indexCPS2_Cable, 0 },
    { "Shocked Light", 0x3c2dc02, 0x3c2dc22, indexCPS2_Cable, 0 },
    { "Dark Burning Dark", 0x3c2dc22, 0x3c2dc42, indexCPS2_Cable, 0 },
    { "Dark Burning Light", 0x3c2dc42, 0x3c2dc62, indexCPS2_Cable, 0 },
    { "Kinetic Charge Dark", 0x3c2dc62, 0x3c2dc82, indexCPS2_Cable, 0 },
    { "Kinetic Charge Light", 0x3c2dc82, 0x3c2dca2, indexCPS2_Cable, 0 },
};

const sDescTreeNode MVC2_A_CABLE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_LP, ARRAYSIZE(MVC2_A_CABLE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_LK, ARRAYSIZE(MVC2_A_CABLE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_HP, ARRAYSIZE(MVC2_A_CABLE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_HK, ARRAYSIZE(MVC2_A_CABLE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_A1, ARRAYSIZE(MVC2_A_CABLE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_A2, ARRAYSIZE(MVC2_A_CABLE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CABLE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_LP[] =
{
    { "Main Color (shared for all buttons) LP", 0x3d19482, 0x3d194a2, indexCPS2_Abyss1, 0 },
    { "(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d194a2, 0x3d194c2, indexCPS2_Abyss1, 1 },
    { "(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d194c2, 0x3d194e2, indexCPS2_Abyss1, 2 },
    { "(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d194e2, 0x3d19502, indexCPS2_Abyss1, 3 },
    { "(05) Super Armor Frame (when being hit)", 0x3d19502, 0x3d19522, indexCPS2_Abyss1, 4 },
    { "(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19522, 0x3d19542, indexCPS2_Abyss1, 5 },
    { "(07) Not Used", 0x3d19542, 0x3d19562, indexCPS2_Abyss1, 6 },
    { "(08) Not Used", 0x3d19562, 0x3d19582, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_LK[] =
{
    { "Main Color (shared for all buttons) LK", 0x3d19582, 0x3d195a2, indexCPS2_Abyss1, 0 },
    { "(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d195a2, 0x3d195c2, indexCPS2_Abyss1, 1 },
    { "(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d195c2, 0x3d195e2, indexCPS2_Abyss1, 2 },
    { "(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d195e2, 0x3d19602, indexCPS2_Abyss1, 3 },
    { "(05) Super Armor Frame (when being hit)", 0x3d19602, 0x3d19622, indexCPS2_Abyss1, 4 },
    { "(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19622, 0x3d19642, indexCPS2_Abyss1, 5 },
    { "(07) Not Used", 0x3d19642, 0x3d19662, indexCPS2_Abyss1, 6 },
    { "(08) Not Used", 0x3d19662, 0x3d19682, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_HP[] =
{
    { "Main Color (shared for all buttons) HP", 0x3d19682, 0x3d196a2, indexCPS2_Abyss1, 0 },
    { "(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d196a2, 0x3d196c2, indexCPS2_Abyss1, 1 },
    { "(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d196c2, 0x3d196e2, indexCPS2_Abyss1, 2 },
    { "(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d196e2, 0x3d19702, indexCPS2_Abyss1, 3 },
    { "(05) Super Armor Frame (when being hit)", 0x3d19702, 0x3d19722, indexCPS2_Abyss1, 4 },
    { "(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19722, 0x3d19742, indexCPS2_Abyss1, 5 },
    { "(07) Not Used", 0x3d19742, 0x3d19762, indexCPS2_Abyss1, 6 },
    { "(08) Not Used", 0x3d19762, 0x3d19782, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_HK[] =
{
    { "Main Color (shared for all buttons) HK", 0x3d19782, 0x3d197a2, indexCPS2_Abyss1, 0 },
    { "(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d197a2, 0x3d197c2, indexCPS2_Abyss1, 1 },
    { "(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d197c2, 0x3d197e2, indexCPS2_Abyss1, 2 },
    { "(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d197e2, 0x3d19802, indexCPS2_Abyss1, 3 },
    { "(05) Super Armor Frame (when being hit)", 0x3d19802, 0x3d19822, indexCPS2_Abyss1, 4 },
    { "(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19822, 0x3d19842, indexCPS2_Abyss1, 5 },
    { "(07) Not Used", 0x3d19842, 0x3d19862, indexCPS2_Abyss1, 6 },
    { "(08) Not Used", 0x3d19862, 0x3d19882, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_A1[] =
{
    { "Main Color (shared for all buttons) A1", 0x3d19882, 0x3d198a2, indexCPS2_Abyss1, 0 },
    { "(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d198a2, 0x3d198c2, indexCPS2_Abyss1, 1 },
    { "(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d198c2, 0x3d198e2, indexCPS2_Abyss1, 2 },
    { "(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d198e2, 0x3d19902, indexCPS2_Abyss1, 3 },
    { "(05) Super Armor Frame (when being hit)", 0x3d19902, 0x3d19922, indexCPS2_Abyss1, 4 },
    { "(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19922, 0x3d19942, indexCPS2_Abyss1, 5 },
    { "(07) Not Used", 0x3d19942, 0x3d19962, indexCPS2_Abyss1, 6 },
    { "(08) Not Used", 0x3d19962, 0x3d19982, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_A2[] =
{
    { "Main Color (shared for all buttons) A2", 0x3d19982, 0x3d199a2, indexCPS2_Abyss1, 0 },
    { "(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d199a2, 0x3d199c2, indexCPS2_Abyss1, 1 },
    { "(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d199c2, 0x3d199e2, indexCPS2_Abyss1, 2 },
    { "(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d199e2, 0x3d19a02, indexCPS2_Abyss1, 3 },
    { "(05) Super Armor Frame (when being hit)", 0x3d19a02, 0x3d19a22, indexCPS2_Abyss1, 4 },
    { "(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19a22, 0x3d19a42, indexCPS2_Abyss1, 5 },
    { "(07) Not Used", 0x3d19a42, 0x3d19a62, indexCPS2_Abyss1, 6 },
    { "(08) Not Used", 0x3d19a62, 0x3d19a82, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3d19a82, 0x3d19aa2, indexCPS2_Abyss1, 0 },
    { "Burning Light", 0x3d19aa2, 0x3d19ac2, indexCPS2_Abyss1, 0 },
    { "Shocked Dark", 0x3d19ac2, 0x3d19ae2, indexCPS2_Abyss1, 0 },
    { "Shocked Light", 0x3d19ae2, 0x3d19b02, indexCPS2_Abyss1, 0 },
    { "Dark Burning Dark", 0x3d19b02, 0x3d19b22, indexCPS2_Abyss1, 0 },
    { "Dark Burning Light", 0x3d19b22, 0x3d19b42, indexCPS2_Abyss1, 0 },
    { "Kinetic Charge Dark", 0x3d19b42, 0x3d19b62, indexCPS2_Abyss1, 0 },
    { "Kinetic Charge Light", 0x3d19b62, 0x3d19b82, indexCPS2_Abyss1, 0 },
};

const sDescTreeNode MVC2_A_ABYSS1_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_LP, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_LK, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_HP, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_HK, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_A1, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_A2, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_LP[] =
{
    { "Main Color (button specific) LP", 0x3da68e2, 0x3da6902, indexCPS2_Abyss2, 0 },
    { "(02) Not Used", 0x3da6902, 0x3da6922, indexCPS2_Abyss2, 1 },
    { "(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6922, 0x3da6942, indexCPS2_Abyss2, 2 },
    { "(04) Not Used", 0x3da6942, 0x3da6962, indexCPS2_Abyss2, 3 },
    { "(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6962, 0x3da6982, indexCPS2_Abyss2, 4 },
    { "(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6982, 0x3da69a2, indexCPS2_Abyss2, 5 },
    { "(07) ID:01-09 Plasma Flame", 0x3da69a2, 0x3da69c2, indexCPS2_Abyss2, 6 },
    { "(08) Not Used", 0x3da69c2, 0x3da69e2, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_LK[] =
{
    { "Main Color (button specific) LK", 0x3da69e2, 0x3da6a02, indexCPS2_Abyss2, 0 },
    { "(02) Not Used", 0x3da6a02, 0x3da6a22, indexCPS2_Abyss2, 1 },
    { "(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6a22, 0x3da6a42, indexCPS2_Abyss2, 2 },
    { "(04) Not Used", 0x3da6a42, 0x3da6a62, indexCPS2_Abyss2, 3 },
    { "(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6a62, 0x3da6a82, indexCPS2_Abyss2, 4 },
    { "(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6a82, 0x3da6aa2, indexCPS2_Abyss2, 5 },
    { "(07) ID:01-09 Plasma Flame", 0x3da6aa2, 0x3da6ac2, indexCPS2_Abyss2, 6 },
    { "(08) Not Used", 0x3da6ac2, 0x3da6ae2, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_HP[] =
{
    { "Main Color (button specific) HP", 0x3da6ae2, 0x3da6b02, indexCPS2_Abyss2, 0 },
    { "(02) Not Used", 0x3da6b02, 0x3da6b22, indexCPS2_Abyss2, 1 },
    { "(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6b22, 0x3da6b42, indexCPS2_Abyss2, 2 },
    { "(04) Not Used", 0x3da6b42, 0x3da6b62, indexCPS2_Abyss2, 3 },
    { "(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6b62, 0x3da6b82, indexCPS2_Abyss2, 4 },
    { "(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6b82, 0x3da6ba2, indexCPS2_Abyss2, 5 },
    { "(07) ID:01-09 Plasma Flame", 0x3da6ba2, 0x3da6bc2, indexCPS2_Abyss2, 6 },
    { "(08) Not Used", 0x3da6bc2, 0x3da6be2, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_HK[] =
{
    { "Main Color (button specific) HK", 0x3da6be2, 0x3da6c02, indexCPS2_Abyss2, 0 },
    { "(02) Not Used", 0x3da6c02, 0x3da6c22, indexCPS2_Abyss2, 1 },
    { "(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6c22, 0x3da6c42, indexCPS2_Abyss2, 2 },
    { "(04) Not Used", 0x3da6c42, 0x3da6c62, indexCPS2_Abyss2, 3 },
    { "(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6c62, 0x3da6c82, indexCPS2_Abyss2, 4 },
    { "(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6c82, 0x3da6ca2, indexCPS2_Abyss2, 5 },
    { "(07) ID:01-09 Plasma Flame", 0x3da6ca2, 0x3da6cc2, indexCPS2_Abyss2, 6 },
    { "(08) Not Used", 0x3da6cc2, 0x3da6ce2, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_A1[] =
{
    { "Main Color (button specific) A1", 0x3da6ce2, 0x3da6d02, indexCPS2_Abyss2, 0 },
    { "(02) Not Used", 0x3da6d02, 0x3da6d22, indexCPS2_Abyss2, 1 },
    { "(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6d22, 0x3da6d42, indexCPS2_Abyss2, 2 },
    { "(04) Not Used", 0x3da6d42, 0x3da6d62, indexCPS2_Abyss2, 3 },
    { "(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6d62, 0x3da6d82, indexCPS2_Abyss2, 4 },
    { "(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6d82, 0x3da6da2, indexCPS2_Abyss2, 5 },
    { "(07) ID:01-09 Plasma Flame", 0x3da6da2, 0x3da6dc2, indexCPS2_Abyss2, 6 },
    { "(08) Not Used", 0x3da6dc2, 0x3da6de2, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_A2[] =
{
    { "Main Color (button specific) A2", 0x3da6de2, 0x3da6e02, indexCPS2_Abyss2, 0 },
    { "(02) Not Used", 0x3da6e02, 0x3da6e22, indexCPS2_Abyss2, 1 },
    { "(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6e22, 0x3da6e42, indexCPS2_Abyss2, 2 },
    { "(04) Not Used", 0x3da6e42, 0x3da6e62, indexCPS2_Abyss2, 3 },
    { "(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6e62, 0x3da6e82, indexCPS2_Abyss2, 4 },
    { "(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6e82, 0x3da6ea2, indexCPS2_Abyss2, 5 },
    { "(07) ID:01-09 Plasma Flame", 0x3da6ea2, 0x3da6ec2, indexCPS2_Abyss2, 6 },
    { "(08) Not Used", 0x3da6ec2, 0x3da6ee2, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3da6ee2, 0x3da6f02, indexCPS2_Abyss2, 0 },
    { "Burning Light", 0x3da6f02, 0x3da6f22, indexCPS2_Abyss2, 0 },
    { "Shocked Dark", 0x3da6f22, 0x3da6f42, indexCPS2_Abyss2, 0 },
    { "Shocked Light", 0x3da6f42, 0x3da6f62, indexCPS2_Abyss2, 0 },
    { "Dark Burning Dark", 0x3da6f62, 0x3da6f82, indexCPS2_Abyss2, 0 },
    { "Dark Burning Light", 0x3da6f82, 0x3da6fa2, indexCPS2_Abyss2, 0 },
    { "Kinetic Charge Dark", 0x3da6fa2, 0x3da6fc2, indexCPS2_Abyss2, 0 },
    { "Kinetic Charge Light", 0x3da6fc2, 0x3da6fe2, indexCPS2_Abyss2, 0 },
};

const sDescTreeNode MVC2_A_ABYSS2_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_LP, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_LK, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_HP, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_HK, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_A1, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_A2, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_LP[] =
{
    { "Main Color (shared for all buttons) / Rising Fire LP", 0x3e80562, 0x3e80582, indexCPS2_Abyss3, 0 },
    { "(02) Beast Flame / Beast Pillar", 0x3e80582, 0x3e805a2, indexCPS2_Abyss3, 1 },
    { "(03) Not Used", 0x3e805a2, 0x3e805c2, indexCPS2_Abyss3, 2 },
    { "(04) Super Armor Frame (when being hit)", 0x3e805c2, 0x3e805e2, indexCPS2_Abyss3, 3 },
    { "(05) Not Used", 0x3e805e2, 0x3e80602, indexCPS2_Abyss3, 4 },
    { "(06) Not Used", 0x3e80602, 0x3e80622, indexCPS2_Abyss3, 5 },
    { "(07) Not Used", 0x3e80622, 0x3e80642, indexCPS2_Abyss3, 6 },
    { "(08) Not Used", 0x3e80642, 0x3e80662, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_LK[] =
{
    { "Main Color (shared for all buttons) / Rising Fire LK", 0x3e80662, 0x3e80682, indexCPS2_Abyss3, 0 },
    { "(02) Beast Flame / Beast Pillar", 0x3e80682, 0x3e806a2, indexCPS2_Abyss3, 1 },
    { "(03) Not Used", 0x3e806a2, 0x3e806c2, indexCPS2_Abyss3, 2 },
    { "(04) Super Armor Frame (when being hit)", 0x3e806c2, 0x3e806e2, indexCPS2_Abyss3, 3 },
    { "(05) Not Used", 0x3e806e2, 0x3e80702, indexCPS2_Abyss3, 4 },
    { "(06) Not Used", 0x3e80702, 0x3e80722, indexCPS2_Abyss3, 5 },
    { "(07) Not Used", 0x3e80722, 0x3e80742, indexCPS2_Abyss3, 6 },
    { "(08) Not Used", 0x3e80742, 0x3e80762, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_HP[] =
{
    { "Main Color (shared for all buttons) / Rising Fire HP", 0x3e80762, 0x3e80782, indexCPS2_Abyss3, 0 },
    { "(02) Beast Flame / Beast Pillar", 0x3e80782, 0x3e807a2, indexCPS2_Abyss3, 1 },
    { "(03) Not Used", 0x3e807a2, 0x3e807c2, indexCPS2_Abyss3, 2 },
    { "(04) Super Armor Frame (when being hit)", 0x3e807c2, 0x3e807e2, indexCPS2_Abyss3, 3 },
    { "(05) Not Used", 0x3e807e2, 0x3e80802, indexCPS2_Abyss3, 4 },
    { "(06) Not Used", 0x3e80802, 0x3e80822, indexCPS2_Abyss3, 5 },
    { "(07) Not Used", 0x3e80822, 0x3e80842, indexCPS2_Abyss3, 6 },
    { "(08) Not Used", 0x3e80842, 0x3e80862, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_HK[] =
{
    { "Main Color (shared for all buttons) / Rising Fire HK", 0x3e80862, 0x3e80882, indexCPS2_Abyss3, 0 },
    { "(02) Beast Flame / Beast Pillar", 0x3e80882, 0x3e808a2, indexCPS2_Abyss3, 1 },
    { "(03) Not Used", 0x3e808a2, 0x3e808c2, indexCPS2_Abyss3, 2 },
    { "(04) Super Armor Frame (when being hit)", 0x3e808c2, 0x3e808e2, indexCPS2_Abyss3, 3 },
    { "(05) Not Used", 0x3e808e2, 0x3e80902, indexCPS2_Abyss3, 4 },
    { "(06) Not Used", 0x3e80902, 0x3e80922, indexCPS2_Abyss3, 5 },
    { "(07) Not Used", 0x3e80922, 0x3e80942, indexCPS2_Abyss3, 6 },
    { "(08) Not Used", 0x3e80942, 0x3e80962, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_A1[] =
{
    { "Main Color (shared for all buttons) / Rising Fire A1", 0x3e80962, 0x3e80982, indexCPS2_Abyss3, 0 },
    { "(02) Beast Flame / Beast Pillar", 0x3e80982, 0x3e809a2, indexCPS2_Abyss3, 1 },
    { "(03) Not Used", 0x3e809a2, 0x3e809c2, indexCPS2_Abyss3, 2 },
    { "(04) Super Armor Frame (when being hit)", 0x3e809c2, 0x3e809e2, indexCPS2_Abyss3, 3 },
    { "(05) Not Used", 0x3e809e2, 0x3e80a02, indexCPS2_Abyss3, 4 },
    { "(06) Not Used", 0x3e80a02, 0x3e80a22, indexCPS2_Abyss3, 5 },
    { "(07) Not Used", 0x3e80a22, 0x3e80a42, indexCPS2_Abyss3, 6 },
    { "(08) Not Used", 0x3e80a42, 0x3e80a62, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_A2[] =
{
    { "Main Color (shared for all buttons) / Rising Fire A2", 0x3e80a62, 0x3e80a82, indexCPS2_Abyss3, 0 },
    { "(02) Beast Flame / Beast Pillar", 0x3e80a82, 0x3e80aa2, indexCPS2_Abyss3, 1 },
    { "(03) Not Used", 0x3e80aa2, 0x3e80ac2, indexCPS2_Abyss3, 2 },
    { "(04) Super Armor Frame (when being hit)", 0x3e80ac2, 0x3e80ae2, indexCPS2_Abyss3, 3 },
    { "(05) Not Used", 0x3e80ae2, 0x3e80b02, indexCPS2_Abyss3, 4 },
    { "(06) Not Used", 0x3e80b02, 0x3e80b22, indexCPS2_Abyss3, 5 },
    { "(07) Not Used", 0x3e80b22, 0x3e80b42, indexCPS2_Abyss3, 6 },
    { "(08) Not Used", 0x3e80b42, 0x3e80b62, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3e80b62, 0x3e80b82, indexCPS2_Abyss3, 0 },
    { "Burning Light", 0x3e80b82, 0x3e80ba2, indexCPS2_Abyss3, 0 },
    { "Shocked Dark", 0x3e80ba2, 0x3e80bc2, indexCPS2_Abyss3, 0 },
    { "Shocked Light", 0x3e80bc2, 0x3e80be2, indexCPS2_Abyss3, 0 },
    { "Dark Burning Dark", 0x3e80be2, 0x3e80c02, indexCPS2_Abyss3, 0 },
    { "Dark Burning Light", 0x3e80c02, 0x3e80c22, indexCPS2_Abyss3, 0 },
    { "Kinetic Charge Dark", 0x3e80c22, 0x3e80c42, indexCPS2_Abyss3, 0 },
    { "Kinetic Charge Light", 0x3e80c42, 0x3e80c62, indexCPS2_Abyss3, 0 },
};

const sDescTreeNode MVC2_A_ABYSS3_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_LP, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_LK, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_HP, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_HK, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_A1, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_A2, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_LP[] =
{
    { "Main Color LP", 0x3f00962, 0x3f00982, indexCPS2_ChunLi, 0 },
    { "(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00982, 0x3f009a2, indexCPS2_ChunLi, 1 },
    { "(03) Lightning Kicks / Kikouken / Kouken", 0x3f009a2, 0x3f009c2, indexCPS2_ChunLi, 2 },
    { "(04) Not Used", 0x3f009c2, 0x3f009e2, indexCPS2_ChunLi, 3 },
    { "(05) Not Used", 0x3f009e2, 0x3f00a02, indexCPS2_ChunLi, 4 },
    { "(06) Not Used", 0x3f00a02, 0x3f00a22, indexCPS2_ChunLi, 5 },
    { "(07) Not Used", 0x3f00a22, 0x3f00a42, indexCPS2_ChunLi, 6 },
    { "(08) Not Used", 0x3f00a42, 0x3f00a62, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_LK[] =
{
    { "Main Color LK", 0x3f00a62, 0x3f00a82, indexCPS2_ChunLi, 0 },
    { "(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00a82, 0x3f00aa2, indexCPS2_ChunLi, 1 },
    { "(03) Lightning Kicks / Kikouken / Kouken", 0x3f00aa2, 0x3f00ac2, indexCPS2_ChunLi, 2 },
    { "(04) Not Used", 0x3f00ac2, 0x3f00ae2, indexCPS2_ChunLi, 3 },
    { "(05) Not Used", 0x3f00ae2, 0x3f00b02, indexCPS2_ChunLi, 4 },
    { "(06) Not Used", 0x3f00b02, 0x3f00b22, indexCPS2_ChunLi, 5 },
    { "(07) Not Used", 0x3f00b22, 0x3f00b42, indexCPS2_ChunLi, 6 },
    { "(08) Not Used", 0x3f00b42, 0x3f00b62, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_HP[] =
{
    { "Main Color HP", 0x3f00b62, 0x3f00b82, indexCPS2_ChunLi, 0 },
    { "(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00b82, 0x3f00ba2, indexCPS2_ChunLi, 1 },
    { "(03) Lightning Kicks / Kikouken / Kouken", 0x3f00ba2, 0x3f00bc2, indexCPS2_ChunLi, 2 },
    { "(04) Not Used", 0x3f00bc2, 0x3f00be2, indexCPS2_ChunLi, 3 },
    { "(05) Not Used", 0x3f00be2, 0x3f00c02, indexCPS2_ChunLi, 4 },
    { "(06) Not Used", 0x3f00c02, 0x3f00c22, indexCPS2_ChunLi, 5 },
    { "(07) Not Used", 0x3f00c22, 0x3f00c42, indexCPS2_ChunLi, 6 },
    { "(08) Not Used", 0x3f00c42, 0x3f00c62, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_HK[] =
{
    { "Main Color HK", 0x3f00c62, 0x3f00c82, indexCPS2_ChunLi, 0 },
    { "(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00c82, 0x3f00ca2, indexCPS2_ChunLi, 1 },
    { "(03) Lightning Kicks / Kikouken / Kouken", 0x3f00ca2, 0x3f00cc2, indexCPS2_ChunLi, 2 },
    { "(04) Not Used", 0x3f00cc2, 0x3f00ce2, indexCPS2_ChunLi, 3 },
    { "(05) Not Used", 0x3f00ce2, 0x3f00d02, indexCPS2_ChunLi, 4 },
    { "(06) Not Used", 0x3f00d02, 0x3f00d22, indexCPS2_ChunLi, 5 },
    { "(07) Not Used", 0x3f00d22, 0x3f00d42, indexCPS2_ChunLi, 6 },
    { "(08) Not Used", 0x3f00d42, 0x3f00d62, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_A1[] =
{
    { "Main Color A1", 0x3f00d62, 0x3f00d82, indexCPS2_ChunLi, 0 },
    { "(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00d82, 0x3f00da2, indexCPS2_ChunLi, 1 },
    { "(03) Lightning Kicks / Kikouken / Kouken", 0x3f00da2, 0x3f00dc2, indexCPS2_ChunLi, 2 },
    { "(04) Not Used", 0x3f00dc2, 0x3f00de2, indexCPS2_ChunLi, 3 },
    { "(05) Not Used", 0x3f00de2, 0x3f00e02, indexCPS2_ChunLi, 4 },
    { "(06) Not Used", 0x3f00e02, 0x3f00e22, indexCPS2_ChunLi, 5 },
    { "(07) Not Used", 0x3f00e22, 0x3f00e42, indexCPS2_ChunLi, 6 },
    { "(08) Not Used", 0x3f00e42, 0x3f00e62, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_A2[] =
{
    { "Main Color A2", 0x3f00e62, 0x3f00e82, indexCPS2_ChunLi, 0 },
    { "(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00e82, 0x3f00ea2, indexCPS2_ChunLi, 1 },
    { "(03) Lightning Kicks / Kikouken / Kouken", 0x3f00ea2, 0x3f00ec2, indexCPS2_ChunLi, 2 },
    { "(04) Not Used", 0x3f00ec2, 0x3f00ee2, indexCPS2_ChunLi, 3 },
    { "(05) Not Used", 0x3f00ee2, 0x3f00f02, indexCPS2_ChunLi, 4 },
    { "(06) Not Used", 0x3f00f02, 0x3f00f22, indexCPS2_ChunLi, 5 },
    { "(07) Not Used", 0x3f00f22, 0x3f00f42, indexCPS2_ChunLi, 6 },
    { "(08) Not Used", 0x3f00f42, 0x3f00f62, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3f00f62, 0x3f00f82, indexCPS2_ChunLi, 0 },
    { "Burning Light", 0x3f00f82, 0x3f00fa2, indexCPS2_ChunLi, 0 },
    { "Shocked Dark", 0x3f00fa2, 0x3f00fc2, indexCPS2_ChunLi, 0 },
    { "Shocked Light", 0x3f00fc2, 0x3f00fe2, indexCPS2_ChunLi, 0 },
    { "Dark Burning Dark", 0x3f00fe2, 0x3f01002, indexCPS2_ChunLi, 0 },
    { "Dark Burning Light", 0x3f01002, 0x3f01022, indexCPS2_ChunLi, 0 },
    { "Kinetic Charge Dark", 0x3f01022, 0x3f01042, indexCPS2_ChunLi, 0 },
    { "Kinetic Charge Light", 0x3f01042, 0x3f01062, indexCPS2_ChunLi, 0 },
};

const sDescTreeNode MVC2_A_CHUNLI_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_LP, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_LK, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_HP, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_HK, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_A1, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_A2, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_LP[] =
{
    { "Main Color LP", 0x3f93962, 0x3f93982, indexCPS2_Megaman, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93982, 0x3f939a2, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f939a2, 0x3f939c2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f939c2, 0x3f939e2, indexCPS2_Megaman, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x3f939e2, 0x3f93a02, indexCPS2_Megaman, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93a02, 0x3f93a22, indexCPS2_Megaman, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93a22, 0x3f93a42, indexCPS2_Megaman, 6 },
    { "(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93a42, 0x3f93a62, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_LK[] =
{
    { "Main Color LK", 0x3f93a62, 0x3f93a82, indexCPS2_Megaman, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93a82, 0x3f93aa2, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93aa2, 0x3f93ac2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93ac2, 0x3f93ae2, indexCPS2_Megaman, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x3f93ae2, 0x3f93b02, indexCPS2_Megaman, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93b02, 0x3f93b22, indexCPS2_Megaman, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93b22, 0x3f93b42, indexCPS2_Megaman, 6 },
    { "(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93b42, 0x3f93b62, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_HP[] =
{
    { "Main Color HP", 0x3f93b62, 0x3f93b82, indexCPS2_Megaman, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93b82, 0x3f93ba2, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93ba2, 0x3f93bc2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93bc2, 0x3f93be2, indexCPS2_Megaman, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x3f93be2, 0x3f93c02, indexCPS2_Megaman, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93c02, 0x3f93c22, indexCPS2_Megaman, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93c22, 0x3f93c42, indexCPS2_Megaman, 6 },
    { "(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93c42, 0x3f93c62, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_HK[] =
{
    { "Main Color HK", 0x3f93c62, 0x3f93c82, indexCPS2_Megaman, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93c82, 0x3f93ca2, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93ca2, 0x3f93cc2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93cc2, 0x3f93ce2, indexCPS2_Megaman, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x3f93ce2, 0x3f93d02, indexCPS2_Megaman, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93d02, 0x3f93d22, indexCPS2_Megaman, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93d22, 0x3f93d42, indexCPS2_Megaman, 6 },
    { "(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93d42, 0x3f93d62, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_A1[] =
{
    { "Main Color A1", 0x3f93d62, 0x3f93d82, indexCPS2_Megaman, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93d82, 0x3f93da2, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93da2, 0x3f93dc2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93dc2, 0x3f93de2, indexCPS2_Megaman, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x3f93de2, 0x3f93e02, indexCPS2_Megaman, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93e02, 0x3f93e22, indexCPS2_Megaman, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93e22, 0x3f93e42, indexCPS2_Megaman, 6 },
    { "(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93e42, 0x3f93e62, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_A2[] =
{
    { "Main Color A2", 0x3f93e62, 0x3f93e82, indexCPS2_Megaman, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93e82, 0x3f93ea2, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93ea2, 0x3f93ec2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93ec2, 0x3f93ee2, indexCPS2_Megaman, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x3f93ee2, 0x3f93f02, indexCPS2_Megaman, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93f02, 0x3f93f22, indexCPS2_Megaman, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93f22, 0x3f93f42, indexCPS2_Megaman, 6 },
    { "(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93f42, 0x3f93f62, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x3f93f62, 0x3f93f82, indexCPS2_Megaman, 0 },
    { "Burning Light", 0x3f93f82, 0x3f93fa2, indexCPS2_Megaman, 0 },
    { "Shocked Dark", 0x3f93fa2, 0x3f93fc2, indexCPS2_Megaman, 0 },
    { "Shocked Light", 0x3f93fc2, 0x3f93fe2, indexCPS2_Megaman, 0 },
    { "Dark Burning Dark", 0x3f93fe2, 0x3f94002, indexCPS2_Megaman, 0 },
    { "Dark Burning Light", 0x3f94002, 0x3f94022, indexCPS2_Megaman, 0 },
    { "Kinetic Charge Dark", 0x3f94022, 0x3f94042, indexCPS2_Megaman, 0 },
    { "Kinetic Charge Light", 0x3f94042, 0x3f94062, indexCPS2_Megaman, 0 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP Megaman hair (all buttons)", 0x3f94062, 0x3f94082, indexCPS2_Megaman, 38 },
    { /* 0x0a */ "LP Death Animation (all buttons)", 0x3f94082, 0x3f940a2, indexCPS2_Megaman, 11 },
    { /* 0x0b */ "LP Megaman Intro 1", 0x3f940a2, 0x3f940c2, indexCPS2_Megaman, 0 },
    { /* 0x0c */ "LP Megaman Intro 2", 0x3f940c2, 0x3f940e2, indexCPS2_Megaman, 0 },
    { /* 0x0d */ "LP Megaman Intro 3", 0x3f940e2, 0x3f94102, indexCPS2_Megaman, 0 },
    { /* 0x0e */ "LP Megaman Intro 4", 0x3f94102, 0x3f94122, indexCPS2_Megaman, 0 },
    { /* 0x0f */ "LP Megaman Intro 5", 0x3f94122, 0x3f94142, indexCPS2_Megaman, 0 },
    { /* 0x10 */ "LP Megaman Intro 6", 0x3f94142, 0x3f94162, indexCPS2_Megaman, 0 },
    { /* 0x11 */ "LP Megaman Intro 7", 0x3f94162, 0x3f94182, indexCPS2_Megaman, 0 },
    { /* 0x12 */ "LP Megaman Intro 8", 0x3f94182, 0x3f941a2, indexCPS2_Megaman, 0 },
    { /* 0x13 */ "LP Megaman Intro 9", 0x3f941a2, 0x3f941c2, indexCPS2_Megaman, 0 },
    { /* 0x14 */ "LP Rush 1", 0x3f941c2, 0x3f941e2, indexCPS2_Megaman, 1 },
    { /* 0x15 */ "LP Rush 2", 0x3f941e2, 0x3f94202, indexCPS2_Megaman, 1 },
    { /* 0x16 */ "LP Rush 3", 0x3f94202, 0x3f94222, indexCPS2_Megaman, 1 },
    { /* 0x17 */ "LP Rush 4", 0x3f94222, 0x3f94242, indexCPS2_Megaman, 1 },
    { /* 0x18 */ "LP Rush 5", 0x3f94242, 0x3f94262, indexCPS2_Megaman, 1 },
    { /* 0x19 */ "LP Rush 6", 0x3f94262, 0x3f94282, indexCPS2_Megaman, 1 },
    { /* 0x1a */ "LP Rush 7", 0x3f94282, 0x3f942a2, indexCPS2_Megaman, 1 },
    { /* 0x1b */ "LP Rush 8", 0x3f942a2, 0x3f942c2, indexCPS2_Megaman, 1 },
    { /* 0x1c */ "LP Rush 9", 0x3f942c2, 0x3f942e2, indexCPS2_Megaman, 1 },
    { /* 0x1d */ "LP Beat 1", 0x3f942e2, 0x3f94302, indexCPS2_Megaman, 2 },
    { /* 0x1e */ "LP Beat 2", 0x3f94302, 0x3f94322, indexCPS2_Megaman, 2 },
    { /* 0x1f */ "LP Beat 3", 0x3f94322, 0x3f94342, indexCPS2_Megaman, 2 },
    { /* 0x20 */ "LP Beat 4", 0x3f94342, 0x3f94362, indexCPS2_Megaman, 2 },
    { /* 0x21 */ "LP Beat 5", 0x3f94362, 0x3f94382, indexCPS2_Megaman, 2 },
    { /* 0x22 */ "LP Beat 6", 0x3f94382, 0x3f943a2, indexCPS2_Megaman, 2 },
    { /* 0x23 */ "LP Beat 7", 0x3f943a2, 0x3f943c2, indexCPS2_Megaman, 2 },
    { /* 0x24 */ "LP Beat 8", 0x3f943c2, 0x3f943e2, indexCPS2_Megaman, 2 },
    { /* 0x25 */ "LP Beat 9", 0x3f943e2, 0x3f94402, indexCPS2_Megaman, 2 },
    { /* 0x26 */ "LP Beat Plane 1", 0x3f94402, 0x3f94422, indexCPS2_Megaman, 36 },
    { /* 0x27 */ "LP Beat Plane 2", 0x3f94422, 0x3f94442, indexCPS2_Megaman, 36 },
    { /* 0x28 */ "LP Beat Plane 3", 0x3f94442, 0x3f94462, indexCPS2_Megaman, 36 },
    { /* 0x29 */ "LP Beat Plane 4", 0x3f94462, 0x3f94482, indexCPS2_Megaman, 36 },
    { /* 0x2a */ "LP Beat Plane 5", 0x3f94482, 0x3f944a2, indexCPS2_Megaman, 36 },
    { /* 0x2b */ "LP Beat Plane 6", 0x3f944a2, 0x3f944c2, indexCPS2_Megaman, 36 },
    { /* 0x2c */ "LP Beat Plane 7", 0x3f944c2, 0x3f944e2, indexCPS2_Megaman, 36 },
    { /* 0x2d */ "LP Beat Plane 8", 0x3f944e2, 0x3f94502, indexCPS2_Megaman, 36 },
    { /* 0x2e */ "LP Beat Plane 9", 0x3f94502, 0x3f94522, indexCPS2_Megaman, 36 },
    { /* 0x2f */ "LP charging Megaman 1", 0x3f94522, 0x3f94542, indexCPS2_Megaman, 0 },
    { /* 0x30 */ "LP charging Megaman 2", 0x3f94542, 0x3f94562, indexCPS2_Megaman, 0 },
    { /* 0x31 */ "LP charging Megaman 3", 0x3f94562, 0x3f94582, indexCPS2_Megaman, 0 },
    { /* 0x32 */ "LP charging Megaman 4", 0x3f94582, 0x3f945a2, indexCPS2_Megaman, 0 },
    { /* 0x33 */ "LP charging Megaman 5", 0x3f945a2, 0x3f945c2, indexCPS2_Megaman, 0 },
    { /* 0x34 */ "LP charging Megaman 6", 0x3f945c2, 0x3f945e2, indexCPS2_Megaman, 0 },
    { /* 0x35 */ "LP charging Megaman 7", 0x3f945e2, 0x3f94602, indexCPS2_Megaman, 0 },
    { /* 0x36 */ "LP charging Megaman 8", 0x3f94602, 0x3f94622, indexCPS2_Megaman, 0 },
    { /* 0x37 */ "LP charging Megaman 9", 0x3f94622, 0x3f94642, indexCPS2_Megaman, 0 },
    { /* 0x38 */ "LP Rush Drill 1", 0x3f94642, 0x3f94662, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x39 */ "LP Rush Drill 2", 0x3f94662, 0x3f94682, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3a */ "LP Rush Drill 3", 0x3f94682, 0x3f946a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3b */ "LP Rush Drill 4", 0x3f946a2, 0x3f946c2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3c */ "LP Rush Drill 5", 0x3f946c2, 0x3f946e2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3d */ "LP Rush Drill 6", 0x3f946e2, 0x3f94702, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3e */ "LP Rush Drill 7", 0x3f94702, 0x3f94722, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3f */ "LP Rush Drill 8", 0x3f94722, 0x3f94742, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x40 */ "LP Rush Drill 9", 0x3f94742, 0x3f94762, indexCPS2_Roll, 11 },
    { /* 0x41 */ "LP Teleport Intro", 0x3f94762, 0x3f94782, indexCPS2_Megaman, 13 },
    { /* 0x42 */ "LP Dr. Light", 0x3f94782, 0x3f947a2, indexCPS2_Megaman, 37 },
    { /* 0x43 */ "LP Hyper Megaman Armor 1", 0x3f947a2, 0x3f947c2, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x44 */ "LP Hyper Megaman Armor 2", 0x3f947c2, 0x3f947e2, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x45 */ "LP Hyper Megaman Armor 3", 0x3f947e2, 0x3f94802, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x46 */ "LP Hyper Megaman Armor 4", 0x3f94802, 0x3f94822, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x47 */ "LP Hyper Megaman Armor 5", 0x3f94822, 0x3f94842, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x48 */ "LP Hyper Megaman Armor 6", 0x3f94842, 0x3f94862, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x49 */ "LP Hyper Megaman Armor 7", 0x3f94862, 0x3f94882, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x4a */ "LP Hyper Megaman Armor 8", 0x3f94882, 0x3f948a2, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x4b */ "LP Hyper Megaman Armor 9", 0x3f948a2, 0x3f948c2, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { /* 0x4c */ "LP Hyper Megaman 1", 0x3f948c2, 0x3f948e2, indexCPS2_Megaman, 40 },
    { /* 0x4d */ "LP Hyper Megaman 2", 0x3f948e2, 0x3f94902, indexCPS2_Megaman, 40 },
    { /* 0x4e */ "LP Hyper Megaman 3", 0x3f94902, 0x3f94922, indexCPS2_Megaman, 40 },
    { /* 0x4f */ "LP Hyper Megaman 4", 0x3f94922, 0x3f94942, indexCPS2_Megaman, 40 },
    { /* 0x50 */ "LP Hyper Megaman 5", 0x3f94942, 0x3f94962, indexCPS2_Megaman, 40 },
    { /* 0x51 */ "LP Hyper Megaman 6", 0x3f94962, 0x3f94982, indexCPS2_Megaman, 40 },
    { /* 0x52 */ "LP Hyper Megaman 7", 0x3f94982, 0x3f949a2, indexCPS2_Megaman, 40 },
    { /* 0x53 */ "LP Hyper Megaman 8", 0x3f949a2, 0x3f949c2, indexCPS2_Megaman, 40 },
    { /* 0x54 */ "LP Hyper Megaman 9", 0x3f949c2, 0x3f949e2, indexCPS2_Megaman, 40 },
    { /* 0x55 */ "LP Hyper Megaman Missiles", 0x3f949e2, 0x3f94a02, indexCPS2_Megaman, 41 },
    { /* 0x56 */ "LP Rush Drill metal 1", 0x3f94a02, 0x3f94a22, indexCPS2_Roll, 12 },
    { /* 0x57 */ "LP Rush Drill metal 2", 0x3f94a22, 0x3f94a42, indexCPS2_Roll, 12 },
    { /* 0x58 */ "LP Rush Drill metal 3", 0x3f94a42, 0x3f94a62, indexCPS2_Roll, 12 },
    { /* 0x59 */ "LP Rush Drill metal 4", 0x3f94a62, 0x3f94a82, indexCPS2_Roll, 12 },
    { /* 0x5a */ "LP Rush Drill metal 5", 0x3f94a82, 0x3f94aa2, indexCPS2_Roll, 12 },
    { /* 0x5b */ "LP Rush Drill metal 6", 0x3f94aa2, 0x3f94ac2, indexCPS2_Roll, 12 },
    { /* 0x5c */ "LP Rush Drill metal 7", 0x3f94ac2, 0x3f94ae2, indexCPS2_Roll, 12 },
    { /* 0x5d */ "LP Rush Drill metal 8", 0x3f94ae2, 0x3f94b02, indexCPS2_Roll, 12 },
    { /* 0x5e */ "LP Roll", 0x3f94b02, 0x3f94b22, indexCPS2_Roll, 0 },
    { /* 0x5f */ "LP Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f94b22, 0x3f94b42, indexCPS2_Megaman, 0 },
    { /* 0x60 */ "LK Megaman hair (all buttons)", 0x3f94b42, 0x3f94b62, indexCPS2_Megaman, 38 },
    { /* 0x61 */ "LK Death Animation (all buttons)", 0x3f94b62, 0x3f94b82, indexCPS2_Megaman, 11 },
    { /* 0x62 */ "LK Megaman Intro 1", 0x3f94b82, 0x3f94ba2, indexCPS2_Megaman, 0 },
    { /* 0x63 */ "LK Megaman Intro 2", 0x3f94ba2, 0x3f94bc2, indexCPS2_Megaman, 0 },
    { /* 0x64 */ "LK Megaman Intro 3", 0x3f94bc2, 0x3f94be2, indexCPS2_Megaman, 0 },
    { /* 0x65 */ "LK Megaman Intro 4", 0x3f94be2, 0x3f94c02, indexCPS2_Megaman, 0 },
    { /* 0x66 */ "LK Megaman Intro 5", 0x3f94c02, 0x3f94c22, indexCPS2_Megaman, 0 },
    { /* 0x67 */ "LK Megaman Intro 6", 0x3f94c22, 0x3f94c42, indexCPS2_Megaman, 0 },
    { /* 0x68 */ "LK Megaman Intro 7", 0x3f94c42, 0x3f94c62, indexCPS2_Megaman, 0 },
    { /* 0x69 */ "LK Megaman Intro 8", 0x3f94c62, 0x3f94c82, indexCPS2_Megaman, 0 },
    { /* 0x6a */ "LK Megaman Intro 9", 0x3f94c82, 0x3f94ca2, indexCPS2_Megaman, 0 },
    { /* 0x6b */ "LK Rush 1", 0x3f94ca2, 0x3f94cc2, indexCPS2_Megaman, 1 },
    { /* 0x6c */ "LK Rush 2", 0x3f94cc2, 0x3f94ce2, indexCPS2_Megaman, 1 },
    { /* 0x6d */ "LK Rush 3", 0x3f94ce2, 0x3f94d02, indexCPS2_Megaman, 1 },
    { /* 0x6e */ "LK Rush 4", 0x3f94d02, 0x3f94d22, indexCPS2_Megaman, 1 },
    { /* 0x6f */ "LK Rush 5", 0x3f94d22, 0x3f94d42, indexCPS2_Megaman, 1 },
    { /* 0x70 */ "LK Rush 6", 0x3f94d42, 0x3f94d62, indexCPS2_Megaman, 1 },
    { /* 0x71 */ "LK Rush 7", 0x3f94d62, 0x3f94d82, indexCPS2_Megaman, 1 },
    { /* 0x72 */ "LK Rush 8", 0x3f94d82, 0x3f94da2, indexCPS2_Megaman, 1 },
    { /* 0x73 */ "LK Rush 9", 0x3f94da2, 0x3f94dc2, indexCPS2_Megaman, 1 },
    { /* 0x74 */ "LK Beat 1", 0x3f94dc2, 0x3f94de2, indexCPS2_Megaman, 2 },
    { /* 0x75 */ "LK Beat 2", 0x3f94de2, 0x3f94e02, indexCPS2_Megaman, 2 },
    { /* 0x76 */ "LK Beat 3", 0x3f94e02, 0x3f94e22, indexCPS2_Megaman, 2 },
    { /* 0x77 */ "LK Beat 4", 0x3f94e22, 0x3f94e42, indexCPS2_Megaman, 2 },
    { /* 0x78 */ "LK Beat 5", 0x3f94e42, 0x3f94e62, indexCPS2_Megaman, 2 },
    { /* 0x79 */ "LK Beat 6", 0x3f94e62, 0x3f94e82, indexCPS2_Megaman, 2 },
    { /* 0x7a */ "LK Beat 7", 0x3f94e82, 0x3f94ea2, indexCPS2_Megaman, 2 },
    { /* 0x7b */ "LK Beat 8", 0x3f94ea2, 0x3f94ec2, indexCPS2_Megaman, 2 },
    { /* 0x7c */ "LK Beat 9", 0x3f94ec2, 0x3f94ee2, indexCPS2_Megaman, 2 },
    { /* 0x7d */ "LK Beat Plane 1", 0x3f94ee2, 0x3f94f02, indexCPS2_Megaman, 36 },
    { /* 0x7e */ "LK Beat Plane 2", 0x3f94f02, 0x3f94f22, indexCPS2_Megaman, 36 },
    { /* 0x7f */ "LK Beat Plane 3", 0x3f94f22, 0x3f94f42, indexCPS2_Megaman, 36 },
    { /* 0x80 */ "LK Beat Plane 4", 0x3f94f42, 0x3f94f62, indexCPS2_Megaman, 36 },
    { /* 0x81 */ "LK Beat Plane 5", 0x3f94f62, 0x3f94f82, indexCPS2_Megaman, 36 },
    { /* 0x82 */ "LK Beat Plane 6", 0x3f94f82, 0x3f94fa2, indexCPS2_Megaman, 36 },
    { /* 0x83 */ "LK Beat Plane 7", 0x3f94fa2, 0x3f94fc2, indexCPS2_Megaman, 36 },
    { /* 0x84 */ "LK Beat Plane 8", 0x3f94fc2, 0x3f94fe2, indexCPS2_Megaman, 36 },
    { /* 0x85 */ "LK Beat Plane 9", 0x3f94fe2, 0x3f95002, indexCPS2_Megaman, 36 },
    { /* 0x86 */ "LK charging Megaman 1", 0x3f95002, 0x3f95022, indexCPS2_Megaman, 0 },
    { /* 0x87 */ "LK charging Megaman 2", 0x3f95022, 0x3f95042, indexCPS2_Megaman, 0 },
    { /* 0x88 */ "LK charging Megaman 3", 0x3f95042, 0x3f95062, indexCPS2_Megaman, 0 },
    { /* 0x89 */ "LK charging Megaman 4", 0x3f95062, 0x3f95082, indexCPS2_Megaman, 0 },
    { /* 0x8a */ "LK charging Megaman 5", 0x3f95082, 0x3f950a2, indexCPS2_Megaman, 0 },
    { /* 0x8b */ "LK charging Megaman 6", 0x3f950a2, 0x3f950c2, indexCPS2_Megaman, 0 },
    { /* 0x8c */ "LK charging Megaman 7", 0x3f950c2, 0x3f950e2, indexCPS2_Megaman, 0 },
    { /* 0x8d */ "LK charging Megaman 8", 0x3f950e2, 0x3f95102, indexCPS2_Megaman, 0 },
    { /* 0x8e */ "LK charging Megaman 9", 0x3f95102, 0x3f95122, indexCPS2_Megaman, 0 },
    { /* 0x8f */ "LK Rush Drill 1", 0x3f95122, 0x3f95142, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x90 */ "LK Rush Drill 2", 0x3f95142, 0x3f95162, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x91 */ "LK Rush Drill 3", 0x3f95162, 0x3f95182, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x92 */ "LK Rush Drill 4", 0x3f95182, 0x3f951a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x93 */ "LK Rush Drill 5", 0x3f951a2, 0x3f951c2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x94 */ "LK Rush Drill 6", 0x3f951c2, 0x3f951e2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x95 */ "LK Rush Drill 7", 0x3f951e2, 0x3f95202, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x96 */ "LK Rush Drill 8", 0x3f95202, 0x3f95222, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x97 */ "LK Rush Drill 9", 0x3f95222, 0x3f95242, indexCPS2_Roll, 11 },
    { /* 0x98 */ "LK Teleport Intro", 0x3f95242, 0x3f95262, indexCPS2_Megaman, 13 },
    { /* 0x99 */ "LK Dr. Light", 0x3f95262, 0x3f95282, indexCPS2_Megaman, 37 },
    { /* 0x9a */ "LK Hyper Megaman (armor/skin while shooting) 1", 0x3f95282, 0x3f952a2 },
    { /* 0x9b */ "LK Hyper Megaman (armor/skin while shooting) 2", 0x3f952a2, 0x3f952c2 },
    { /* 0x9c */ "LK Hyper Megaman (armor/skin while shooting) 3", 0x3f952c2, 0x3f952e2 },
    { /* 0x9d */ "LK Hyper Megaman (armor/skin while shooting) 4", 0x3f952e2, 0x3f95302 },
    { /* 0x9e */ "LK Hyper Megaman (armor/skin while shooting) 5", 0x3f95302, 0x3f95322 },
    { /* 0x9f */ "LK Hyper Megaman (armor/skin while shooting) 6", 0x3f95322, 0x3f95342 },
    { /* 0xa0 */ "LK Hyper Megaman (armor/skin while shooting) 7", 0x3f95342, 0x3f95362 },
    { /* 0xa1 */ "LK Hyper Megaman (armor/skin while shooting) 8", 0x3f95362, 0x3f95382 },
    { /* 0xa2 */ "LK Hyper Megaman (armor/skin while shooting) 9", 0x3f95382, 0x3f953a2 },
    { /* 0xa3 */ "LK Hyper Megaman 1", 0x3f953a2, 0x3f953c2, indexCPS2_Megaman, 40 },
    { /* 0xa4 */ "LK Hyper Megaman 2", 0x3f953c2, 0x3f953e2, indexCPS2_Megaman, 40 },
    { /* 0xa5 */ "LK Hyper Megaman 3", 0x3f953e2, 0x3f95402, indexCPS2_Megaman, 40 },
    { /* 0xa6 */ "LK Hyper Megaman 4", 0x3f95402, 0x3f95422, indexCPS2_Megaman, 40 },
    { /* 0xa7 */ "LK Hyper Megaman 5", 0x3f95422, 0x3f95442, indexCPS2_Megaman, 40 },
    { /* 0xa8 */ "LK Hyper Megaman 6", 0x3f95442, 0x3f95462, indexCPS2_Megaman, 40 },
    { /* 0xa9 */ "LK Hyper Megaman 7", 0x3f95462, 0x3f95482, indexCPS2_Megaman, 40 },
    { /* 0xaa */ "LK Hyper Megaman 8", 0x3f95482, 0x3f954a2, indexCPS2_Megaman, 40 },
    { /* 0xab */ "LK Hyper Megaman 9", 0x3f954a2, 0x3f954c2, indexCPS2_Megaman, 40 },
    { /* 0xac */ "LK Hyper Megaman Missiles", 0x3f954c2, 0x3f954e2, indexCPS2_Megaman, 41 },
    { /* 0xad */ "LK Rush Drill metal 1", 0x3f954e2, 0x3f95502, indexCPS2_Roll, 12 },
    { /* 0xae */ "LK Rush Drill metal 2", 0x3f95502, 0x3f95522, indexCPS2_Roll, 12 },
    { /* 0xaf */ "LK Rush Drill metal 3", 0x3f95522, 0x3f95542, indexCPS2_Roll, 12 },
    { /* 0xb0 */ "LK Rush Drill metal 4", 0x3f95542, 0x3f95562, indexCPS2_Roll, 12 },
    { /* 0xb1 */ "LK Rush Drill metal 5", 0x3f95562, 0x3f95582, indexCPS2_Roll, 12 },
    { /* 0xb2 */ "LK Rush Drill metal 6", 0x3f95582, 0x3f955a2, indexCPS2_Roll, 12 },
    { /* 0xb3 */ "LK Rush Drill metal 7", 0x3f955a2, 0x3f955c2, indexCPS2_Roll, 12 },
    { /* 0xb4 */ "LK Rush Drill metal 8", 0x3f955c2, 0x3f955e2, indexCPS2_Roll, 12 },
    { /* 0xb5 */ "LK Roll", 0x3f955e2, 0x3f95602, indexCPS2_Roll, 0 },
    { /* 0xb6 */ "LK Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f95602, 0x3f95622, indexCPS2_Megaman, 0 },
    { /* 0xb7 */ "HP Megaman hair (all buttons)", 0x3f95622, 0x3f95642, indexCPS2_Megaman, 38 },
    { /* 0xb8 */ "HP Death Animation (all buttons)", 0x3f95642, 0x3f95662, indexCPS2_Megaman, 11 },
    { /* 0xb9 */ "HP Megaman Intro 1", 0x3f95662, 0x3f95682, indexCPS2_Megaman, 0 },
    { /* 0xba */ "HP Megaman Intro 2", 0x3f95682, 0x3f956a2, indexCPS2_Megaman, 0 },
    { /* 0xbb */ "HP Megaman Intro 3", 0x3f956a2, 0x3f956c2, indexCPS2_Megaman, 0 },
    { /* 0xbc */ "HP Megaman Intro 4", 0x3f956c2, 0x3f956e2, indexCPS2_Megaman, 0 },
    { /* 0xbd */ "HP Megaman Intro 5", 0x3f956e2, 0x3f95702, indexCPS2_Megaman, 0 },
    { /* 0xbe */ "HP Megaman Intro 6", 0x3f95702, 0x3f95722, indexCPS2_Megaman, 0 },
    { /* 0xbf */ "HP Megaman Intro 7", 0x3f95722, 0x3f95742, indexCPS2_Megaman, 0 },
    { /* 0xc0 */ "HP Megaman Intro 8", 0x3f95742, 0x3f95762, indexCPS2_Megaman, 0 },
    { /* 0xc1 */ "HP Megaman Intro 9", 0x3f95762, 0x3f95782, indexCPS2_Megaman, 0 },
    { /* 0xc2 */ "HP Rush 1", 0x3f95782, 0x3f957a2, indexCPS2_Megaman, 1 },
    { /* 0xc3 */ "HP Rush 2", 0x3f957a2, 0x3f957c2, indexCPS2_Megaman, 1 },
    { /* 0xc4 */ "HP Rush 3", 0x3f957c2, 0x3f957e2, indexCPS2_Megaman, 1 },
    { /* 0xc5 */ "HP Rush 4", 0x3f957e2, 0x3f95802, indexCPS2_Megaman, 1 },
    { /* 0xc6 */ "HP Rush 5", 0x3f95802, 0x3f95822, indexCPS2_Megaman, 1 },
    { /* 0xc7 */ "HP Rush 6", 0x3f95822, 0x3f95842, indexCPS2_Megaman, 1 },
    { /* 0xc8 */ "HP Rush 7", 0x3f95842, 0x3f95862, indexCPS2_Megaman, 1 },
    { /* 0xc9 */ "HP Rush 8", 0x3f95862, 0x3f95882, indexCPS2_Megaman, 1 },
    { /* 0xca */ "HP Rush 9", 0x3f95882, 0x3f958a2, indexCPS2_Megaman, 1 },
    { /* 0xcb */ "HP Beat 1", 0x3f958a2, 0x3f958c2, indexCPS2_Megaman, 2 },
    { /* 0xcc */ "HP Beat 2", 0x3f958c2, 0x3f958e2, indexCPS2_Megaman, 2 },
    { /* 0xcd */ "HP Beat 3", 0x3f958e2, 0x3f95902, indexCPS2_Megaman, 2 },
    { /* 0xce */ "HP Beat 4", 0x3f95902, 0x3f95922, indexCPS2_Megaman, 2 },
    { /* 0xcf */ "HP Beat 5", 0x3f95922, 0x3f95942, indexCPS2_Megaman, 2 },
    { /* 0xd0 */ "HP Beat 6", 0x3f95942, 0x3f95962, indexCPS2_Megaman, 2 },
    { /* 0xd1 */ "HP Beat 7", 0x3f95962, 0x3f95982, indexCPS2_Megaman, 2 },
    { /* 0xd2 */ "HP Beat 8", 0x3f95982, 0x3f959a2, indexCPS2_Megaman, 2 },
    { /* 0xd3 */ "HP Beat 9", 0x3f959a2, 0x3f959c2, indexCPS2_Megaman, 2 },
    { /* 0xd4 */ "HP Beat Plane 1", 0x3f959c2, 0x3f959e2, indexCPS2_Megaman, 36 },
    { /* 0xd5 */ "HP Beat Plane 2", 0x3f959e2, 0x3f95a02, indexCPS2_Megaman, 36 },
    { /* 0xd6 */ "HP Beat Plane 3", 0x3f95a02, 0x3f95a22, indexCPS2_Megaman, 36 },
    { /* 0xd7 */ "HP Beat Plane 4", 0x3f95a22, 0x3f95a42, indexCPS2_Megaman, 36 },
    { /* 0xd8 */ "HP Beat Plane 5", 0x3f95a42, 0x3f95a62, indexCPS2_Megaman, 36 },
    { /* 0xd9 */ "HP Beat Plane 6", 0x3f95a62, 0x3f95a82, indexCPS2_Megaman, 36 },
    { /* 0xda */ "HP Beat Plane 7", 0x3f95a82, 0x3f95aa2, indexCPS2_Megaman, 36 },
    { /* 0xdb */ "HP Beat Plane 8", 0x3f95aa2, 0x3f95ac2, indexCPS2_Megaman, 36 },
    { /* 0xdc */ "HP Beat Plane 9", 0x3f95ac2, 0x3f95ae2, indexCPS2_Megaman, 36 },
    { /* 0xdd */ "HP charging Megaman 1", 0x3f95ae2, 0x3f95b02, indexCPS2_Megaman, 0 },
    { /* 0xde */ "HP charging Megaman 2", 0x3f95b02, 0x3f95b22, indexCPS2_Megaman, 0 },
    { /* 0xdf */ "HP charging Megaman 3", 0x3f95b22, 0x3f95b42, indexCPS2_Megaman, 0 },
    { /* 0xe0 */ "HP charging Megaman 4", 0x3f95b42, 0x3f95b62, indexCPS2_Megaman, 0 },
    { /* 0xe1 */ "HP charging Megaman 5", 0x3f95b62, 0x3f95b82, indexCPS2_Megaman, 0 },
    { /* 0xe2 */ "HP charging Megaman 6", 0x3f95b82, 0x3f95ba2, indexCPS2_Megaman, 0 },
    { /* 0xe3 */ "HP charging Megaman 7", 0x3f95ba2, 0x3f95bc2, indexCPS2_Megaman, 0 },
    { /* 0xe4 */ "HP charging Megaman 8", 0x3f95bc2, 0x3f95be2, indexCPS2_Megaman, 0 },
    { /* 0xe5 */ "HP charging Megaman 9", 0x3f95be2, 0x3f95c02, indexCPS2_Megaman, 0 },
    { /* 0xe6 */ "HP Rush Drill 1", 0x3f95c02, 0x3f95c22, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xe7 */ "HP Rush Drill 2", 0x3f95c22, 0x3f95c42, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xe8 */ "HP Rush Drill 3", 0x3f95c42, 0x3f95c62, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xe9 */ "HP Rush Drill 4", 0x3f95c62, 0x3f95c82, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xea */ "HP Rush Drill 5", 0x3f95c82, 0x3f95ca2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xeb */ "HP Rush Drill 6", 0x3f95ca2, 0x3f95cc2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xec */ "HP Rush Drill 7", 0x3f95cc2, 0x3f95ce2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xed */ "HP Rush Drill 8", 0x3f95ce2, 0x3f95d02, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xee */ "HP Rush Drill 9", 0x3f95d02, 0x3f95d22, indexCPS2_Roll, 11 },
    { /* 0xef */ "HP Teleport Intro", 0x3f95d22, 0x3f95d42, indexCPS2_Megaman, 13 },
    { /* 0xf0 */ "HP Dr. Light", 0x3f95d42, 0x3f95d62, indexCPS2_Megaman, 37 },
    { /* 0xf1 */ "HP Hyper Megaman (armor/skin while shooting) 1", 0x3f95d62, 0x3f95d82 },
    { /* 0xf2 */ "HP Hyper Megaman (armor/skin while shooting) 2", 0x3f95d82, 0x3f95da2 },
    { /* 0xf3 */ "HP Hyper Megaman (armor/skin while shooting) 3", 0x3f95da2, 0x3f95dc2 },
    { /* 0xf4 */ "HP Hyper Megaman (armor/skin while shooting) 4", 0x3f95dc2, 0x3f95de2 },
    { /* 0xf5 */ "HP Hyper Megaman (armor/skin while shooting) 5", 0x3f95de2, 0x3f95e02 },
    { /* 0xf6 */ "HP Hyper Megaman (armor/skin while shooting) 6", 0x3f95e02, 0x3f95e22 },
    { /* 0xf7 */ "HP Hyper Megaman (armor/skin while shooting) 7", 0x3f95e22, 0x3f95e42 },
    { /* 0xf8 */ "HP Hyper Megaman (armor/skin while shooting) 8", 0x3f95e42, 0x3f95e62 },
    { /* 0xf9 */ "HP Hyper Megaman (armor/skin while shooting) 9", 0x3f95e62, 0x3f95e82 },
    { /* 0xfa */ "HP Hyper Megaman 1", 0x3f95e82, 0x3f95ea2, indexCPS2_Megaman, 40 },
    { /* 0xfb */ "HP Hyper Megaman 2", 0x3f95ea2, 0x3f95ec2, indexCPS2_Megaman, 40 },
    { /* 0xfc */ "HP Hyper Megaman 3", 0x3f95ec2, 0x3f95ee2, indexCPS2_Megaman, 40 },
    { /* 0xfd */ "HP Hyper Megaman 4", 0x3f95ee2, 0x3f95f02, indexCPS2_Megaman, 40 },
    { /* 0xfe */ "HP Hyper Megaman 5", 0x3f95f02, 0x3f95f22, indexCPS2_Megaman, 40 },
    { /* 0xff */ "HP Hyper Megaman 6", 0x3f95f22, 0x3f95f42, indexCPS2_Megaman, 40 },
    { /* 0x100 */ "HP Hyper Megaman 7", 0x3f95f42, 0x3f95f62, indexCPS2_Megaman, 40 },
    { /* 0x101 */ "HP Hyper Megaman 8", 0x3f95f62, 0x3f95f82, indexCPS2_Megaman, 40 },
    { /* 0x102 */ "HP Hyper Megaman 9", 0x3f95f82, 0x3f95fa2, indexCPS2_Megaman, 40 },
    { /* 0x103 */ "HP Hyper Megaman Missiles", 0x3f95fa2, 0x3f95fc2, indexCPS2_Megaman, 41 },
    { /* 0x104 */ "HP Rush Drill metal 1", 0x3f95fc2, 0x3f95fe2, indexCPS2_Roll, 12 },
    { /* 0x105 */ "HP Rush Drill metal 2", 0x3f95fe2, 0x3f96002, indexCPS2_Roll, 12 },
    { /* 0x106 */ "HP Rush Drill metal 3", 0x3f96002, 0x3f96022, indexCPS2_Roll, 12 },
    { /* 0x107 */ "HP Rush Drill metal 4", 0x3f96022, 0x3f96042, indexCPS2_Roll, 12 },
    { /* 0x108 */ "HP Rush Drill metal 5", 0x3f96042, 0x3f96062, indexCPS2_Roll, 12 },
    { /* 0x109 */ "HP Rush Drill metal 6", 0x3f96062, 0x3f96082, indexCPS2_Roll, 12 },
    { /* 0x10a */ "HP Rush Drill metal 7", 0x3f96082, 0x3f960a2, indexCPS2_Roll, 12 },
    { /* 0x10b */ "HP Rush Drill metal 8", 0x3f960a2, 0x3f960c2, indexCPS2_Roll, 12 },
    { /* 0x10c */ "HP Roll", 0x3f960c2, 0x3f960e2, indexCPS2_Roll, 0 },
    { /* 0x10d */ "HP Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f960e2, 0x3f96102, indexCPS2_Megaman, 0 },
    { /* 0x10e */ "HK Megaman hair (all buttons)", 0x3f96102, 0x3f96122, indexCPS2_Megaman, 38 },
    { /* 0x10f */ "HK Death Animation (all buttons)", 0x3f96122, 0x3f96142, indexCPS2_Megaman, 11 },
    { /* 0x110 */ "HK Megaman Intro 1", 0x3f96142, 0x3f96162, indexCPS2_Megaman, 0 },
    { /* 0x111 */ "HK Megaman Intro 2", 0x3f96162, 0x3f96182, indexCPS2_Megaman, 0 },
    { /* 0x112 */ "HK Megaman Intro 3", 0x3f96182, 0x3f961a2, indexCPS2_Megaman, 0 },
    { /* 0x113 */ "HK Megaman Intro 4", 0x3f961a2, 0x3f961c2, indexCPS2_Megaman, 0 },
    { /* 0x114 */ "HK Megaman Intro 5", 0x3f961c2, 0x3f961e2, indexCPS2_Megaman, 0 },
    { /* 0x115 */ "HK Megaman Intro 6", 0x3f961e2, 0x3f96202, indexCPS2_Megaman, 0 },
    { /* 0x116 */ "HK Megaman Intro 7", 0x3f96202, 0x3f96222, indexCPS2_Megaman, 0 },
    { /* 0x117 */ "HK Megaman Intro 8", 0x3f96222, 0x3f96242, indexCPS2_Megaman, 0 },
    { /* 0x118 */ "HK Megaman Intro 9", 0x3f96242, 0x3f96262, indexCPS2_Megaman, 0 },
    { /* 0x119 */ "HK Rush 1", 0x3f96262, 0x3f96282, indexCPS2_Megaman, 1 },
    { /* 0x11a */ "HK Rush 2", 0x3f96282, 0x3f962a2, indexCPS2_Megaman, 1 },
    { /* 0x11b */ "HK Rush 3", 0x3f962a2, 0x3f962c2, indexCPS2_Megaman, 1 },
    { /* 0x11c */ "HK Rush 4", 0x3f962c2, 0x3f962e2, indexCPS2_Megaman, 1 },
    { /* 0x11d */ "HK Rush 5", 0x3f962e2, 0x3f96302, indexCPS2_Megaman, 1 },
    { /* 0x11e */ "HK Rush 6", 0x3f96302, 0x3f96322, indexCPS2_Megaman, 1 },
    { /* 0x11f */ "HK Rush 7", 0x3f96322, 0x3f96342, indexCPS2_Megaman, 1 },
    { /* 0x120 */ "HK Rush 8", 0x3f96342, 0x3f96362, indexCPS2_Megaman, 1 },
    { /* 0x121 */ "HK Rush 9", 0x3f96362, 0x3f96382, indexCPS2_Megaman, 1 },
    { /* 0x122 */ "HK Beat 1", 0x3f96382, 0x3f963a2, indexCPS2_Megaman, 2 },
    { /* 0x123 */ "HK Beat 2", 0x3f963a2, 0x3f963c2, indexCPS2_Megaman, 2 },
    { /* 0x124 */ "HK Beat 3", 0x3f963c2, 0x3f963e2, indexCPS2_Megaman, 2 },
    { /* 0x125 */ "HK Beat 4", 0x3f963e2, 0x3f96402, indexCPS2_Megaman, 2 },
    { /* 0x126 */ "HK Beat 5", 0x3f96402, 0x3f96422, indexCPS2_Megaman, 2 },
    { /* 0x127 */ "HK Beat 6", 0x3f96422, 0x3f96442, indexCPS2_Megaman, 2 },
    { /* 0x128 */ "HK Beat 7", 0x3f96442, 0x3f96462, indexCPS2_Megaman, 2 },
    { /* 0x129 */ "HK Beat 8", 0x3f96462, 0x3f96482, indexCPS2_Megaman, 2 },
    { /* 0x12a */ "HK Beat 9", 0x3f96482, 0x3f964a2, indexCPS2_Megaman, 2 },
    { /* 0x12b */ "HK Beat Plane 1", 0x3f964a2, 0x3f964c2, indexCPS2_Megaman, 36 },
    { /* 0x12c */ "HK Beat Plane 2", 0x3f964c2, 0x3f964e2, indexCPS2_Megaman, 36 },
    { /* 0x12d */ "HK Beat Plane 3", 0x3f964e2, 0x3f96502, indexCPS2_Megaman, 36 },
    { /* 0x12e */ "HK Beat Plane 4", 0x3f96502, 0x3f96522, indexCPS2_Megaman, 36 },
    { /* 0x12f */ "HK Beat Plane 5", 0x3f96522, 0x3f96542, indexCPS2_Megaman, 36 },
    { /* 0x130 */ "HK Beat Plane 6", 0x3f96542, 0x3f96562, indexCPS2_Megaman, 36 },
    { /* 0x131 */ "HK Beat Plane 7", 0x3f96562, 0x3f96582, indexCPS2_Megaman, 36 },
    { /* 0x132 */ "HK Beat Plane 8", 0x3f96582, 0x3f965a2, indexCPS2_Megaman, 36 },
    { /* 0x133 */ "HK Beat Plane 9", 0x3f965a2, 0x3f965c2, indexCPS2_Megaman, 36 },
    { /* 0x134 */ "HK charging Megaman 1", 0x3f965c2, 0x3f965e2, indexCPS2_Megaman, 0 },
    { /* 0x135 */ "HK charging Megaman 2", 0x3f965e2, 0x3f96602, indexCPS2_Megaman, 0 },
    { /* 0x136 */ "HK charging Megaman 3", 0x3f96602, 0x3f96622, indexCPS2_Megaman, 0 },
    { /* 0x137 */ "HK charging Megaman 4", 0x3f96622, 0x3f96642, indexCPS2_Megaman, 0 },
    { /* 0x138 */ "HK charging Megaman 5", 0x3f96642, 0x3f96662, indexCPS2_Megaman, 0 },
    { /* 0x139 */ "HK charging Megaman 6", 0x3f96662, 0x3f96682, indexCPS2_Megaman, 0 },
    { /* 0x13a */ "HK charging Megaman 7", 0x3f96682, 0x3f966a2, indexCPS2_Megaman, 0 },
    { /* 0x13b */ "HK charging Megaman 8", 0x3f966a2, 0x3f966c2, indexCPS2_Megaman, 0 },
    { /* 0x13c */ "HK charging Megaman 9", 0x3f966c2, 0x3f966e2, indexCPS2_Megaman, 0 },
    { /* 0x13d */ "HK Rush Drill 1", 0x3f966e2, 0x3f96702, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x13e */ "HK Rush Drill 2", 0x3f96702, 0x3f96722, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x13f */ "HK Rush Drill 3", 0x3f96722, 0x3f96742, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x140 */ "HK Rush Drill 4", 0x3f96742, 0x3f96762, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x141 */ "HK Rush Drill 5", 0x3f96762, 0x3f96782, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x142 */ "HK Rush Drill 6", 0x3f96782, 0x3f967a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x143 */ "HK Rush Drill 7", 0x3f967a2, 0x3f967c2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x144 */ "HK Rush Drill 8", 0x3f967c2, 0x3f967e2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x145 */ "HK Rush Drill 9", 0x3f967e2, 0x3f96802, indexCPS2_Roll, 11 },
    { /* 0x146 */ "HK Teleport Intro", 0x3f96802, 0x3f96822, indexCPS2_Megaman, 13 },
    { /* 0x147 */ "HK Dr. Light", 0x3f96822, 0x3f96842, indexCPS2_Megaman, 37 },
    { /* 0x148 */ "HK Hyper Megaman (armor/skin while shooting) 1", 0x3f96842, 0x3f96862 },
    { /* 0x149 */ "HK Hyper Megaman (armor/skin while shooting) 2", 0x3f96862, 0x3f96882 },
    { /* 0x14a */ "HK Hyper Megaman (armor/skin while shooting) 3", 0x3f96882, 0x3f968a2 },
    { /* 0x14b */ "HK Hyper Megaman (armor/skin while shooting) 4", 0x3f968a2, 0x3f968c2 },
    { /* 0x14c */ "HK Hyper Megaman (armor/skin while shooting) 5", 0x3f968c2, 0x3f968e2 },
    { /* 0x14d */ "HK Hyper Megaman (armor/skin while shooting) 6", 0x3f968e2, 0x3f96902 },
    { /* 0x14e */ "HK Hyper Megaman (armor/skin while shooting) 7", 0x3f96902, 0x3f96922 },
    { /* 0x14f */ "HK Hyper Megaman (armor/skin while shooting) 8", 0x3f96922, 0x3f96942 },
    { /* 0x150 */ "HK Hyper Megaman (armor/skin while shooting) 9", 0x3f96942, 0x3f96962 },
    { /* 0x151 */ "HK Hyper Megaman 1", 0x3f96962, 0x3f96982, indexCPS2_Megaman, 40 },
    { /* 0x152 */ "HK Hyper Megaman 2", 0x3f96982, 0x3f969a2, indexCPS2_Megaman, 40 },
    { /* 0x153 */ "HK Hyper Megaman 3", 0x3f969a2, 0x3f969c2, indexCPS2_Megaman, 40 },
    { /* 0x154 */ "HK Hyper Megaman 4", 0x3f969c2, 0x3f969e2, indexCPS2_Megaman, 40 },
    { /* 0x155 */ "HK Hyper Megaman 5", 0x3f969e2, 0x3f96a02, indexCPS2_Megaman, 40 },
    { /* 0x156 */ "HK Hyper Megaman 6", 0x3f96a02, 0x3f96a22, indexCPS2_Megaman, 40 },
    { /* 0x157 */ "HK Hyper Megaman 7", 0x3f96a22, 0x3f96a42, indexCPS2_Megaman, 40 },
    { /* 0x158 */ "HK Hyper Megaman 8", 0x3f96a42, 0x3f96a62, indexCPS2_Megaman, 40 },
    { /* 0x159 */ "HK Hyper Megaman 9", 0x3f96a62, 0x3f96a82, indexCPS2_Megaman, 40 },
    { /* 0x15a */ "HK Hyper Megaman Missiles", 0x3f96a82, 0x3f96aa2, indexCPS2_Megaman, 41 },
    { /* 0x15b */ "HK Rush Drill metal 1", 0x3f96aa2, 0x3f96ac2, indexCPS2_Roll, 12 },
    { /* 0x15c */ "HK Rush Drill metal 2", 0x3f96ac2, 0x3f96ae2, indexCPS2_Roll, 12 },
    { /* 0x15d */ "HK Rush Drill metal 3", 0x3f96ae2, 0x3f96b02, indexCPS2_Roll, 12 },
    { /* 0x15e */ "HK Rush Drill metal 4", 0x3f96b02, 0x3f96b22, indexCPS2_Roll, 12 },
    { /* 0x15f */ "HK Rush Drill metal 5", 0x3f96b22, 0x3f96b42, indexCPS2_Roll, 12 },
    { /* 0x160 */ "HK Rush Drill metal 6", 0x3f96b42, 0x3f96b62, indexCPS2_Roll, 12 },
    { /* 0x161 */ "HK Rush Drill metal 7", 0x3f96b62, 0x3f96b82, indexCPS2_Roll, 12 },
    { /* 0x162 */ "HK Rush Drill metal 8", 0x3f96b82, 0x3f96ba2, indexCPS2_Roll, 12 },
    { /* 0x163 */ "HK Roll", 0x3f96ba2, 0x3f96bc2, indexCPS2_Roll, 0 },
    { /* 0x164 */ "HK Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f96bc2, 0x3f96be2, indexCPS2_Megaman, 0 },
    { /* 0x165 */ "A1 Megaman hair (all buttons)", 0x3f96be2, 0x3f96c02, indexCPS2_Megaman, 38 },
    { /* 0x166 */ "A1 Death Animation (all buttons)", 0x3f96c02, 0x3f96c22, indexCPS2_Megaman, 11 },
    { /* 0x167 */ "A1 Megaman Intro 1", 0x3f96c22, 0x3f96c42, indexCPS2_Megaman, 0 },
    { /* 0x168 */ "A1 Megaman Intro 2", 0x3f96c42, 0x3f96c62, indexCPS2_Megaman, 0 },
    { /* 0x169 */ "A1 Megaman Intro 3", 0x3f96c62, 0x3f96c82, indexCPS2_Megaman, 0 },
    { /* 0x16a */ "A1 Megaman Intro 4", 0x3f96c82, 0x3f96ca2, indexCPS2_Megaman, 0 },
    { /* 0x16b */ "A1 Megaman Intro 5", 0x3f96ca2, 0x3f96cc2, indexCPS2_Megaman, 0 },
    { /* 0x16c */ "A1 Megaman Intro 6", 0x3f96cc2, 0x3f96ce2, indexCPS2_Megaman, 0 },
    { /* 0x16d */ "A1 Megaman Intro 7", 0x3f96ce2, 0x3f96d02, indexCPS2_Megaman, 0 },
    { /* 0x16e */ "A1 Megaman Intro 8", 0x3f96d02, 0x3f96d22, indexCPS2_Megaman, 0 },
    { /* 0x16f */ "A1 Megaman Intro 9", 0x3f96d22, 0x3f96d42, indexCPS2_Megaman, 0 },
    { /* 0x170 */ "A1 Rush 1", 0x3f96d42, 0x3f96d62, indexCPS2_Megaman, 1 },
    { /* 0x171 */ "A1 Rush 2", 0x3f96d62, 0x3f96d82, indexCPS2_Megaman, 1 },
    { /* 0x172 */ "A1 Rush 3", 0x3f96d82, 0x3f96da2, indexCPS2_Megaman, 1 },
    { /* 0x173 */ "A1 Rush 4", 0x3f96da2, 0x3f96dc2, indexCPS2_Megaman, 1 },
    { /* 0x174 */ "A1 Rush 5", 0x3f96dc2, 0x3f96de2, indexCPS2_Megaman, 1 },
    { /* 0x175 */ "A1 Rush 6", 0x3f96de2, 0x3f96e02, indexCPS2_Megaman, 1 },
    { /* 0x176 */ "A1 Rush 7", 0x3f96e02, 0x3f96e22, indexCPS2_Megaman, 1 },
    { /* 0x177 */ "A1 Rush 8", 0x3f96e22, 0x3f96e42, indexCPS2_Megaman, 1 },
    { /* 0x178 */ "A1 Rush 9", 0x3f96e42, 0x3f96e62, indexCPS2_Megaman, 1 },
    { /* 0x179 */ "A1 Beat 1", 0x3f96e62, 0x3f96e82, indexCPS2_Megaman, 2 },
    { /* 0x17a */ "A1 Beat 2", 0x3f96e82, 0x3f96ea2, indexCPS2_Megaman, 2 },
    { /* 0x17b */ "A1 Beat 3", 0x3f96ea2, 0x3f96ec2, indexCPS2_Megaman, 2 },
    { /* 0x17c */ "A1 Beat 4", 0x3f96ec2, 0x3f96ee2, indexCPS2_Megaman, 2 },
    { /* 0x17d */ "A1 Beat 5", 0x3f96ee2, 0x3f96f02, indexCPS2_Megaman, 2 },
    { /* 0x17e */ "A1 Beat 6", 0x3f96f02, 0x3f96f22, indexCPS2_Megaman, 2 },
    { /* 0x17f */ "A1 Beat 7", 0x3f96f22, 0x3f96f42, indexCPS2_Megaman, 2 },
    { /* 0x180 */ "A1 Beat 8", 0x3f96f42, 0x3f96f62, indexCPS2_Megaman, 2 },
    { /* 0x181 */ "A1 Beat 9", 0x3f96f62, 0x3f96f82, indexCPS2_Megaman, 2 },
    { /* 0x182 */ "A1 Beat Plane 1", 0x3f96f82, 0x3f96fa2, indexCPS2_Megaman, 36 },
    { /* 0x183 */ "A1 Beat Plane 2", 0x3f96fa2, 0x3f96fc2, indexCPS2_Megaman, 36 },
    { /* 0x184 */ "A1 Beat Plane 3", 0x3f96fc2, 0x3f96fe2, indexCPS2_Megaman, 36 },
    { /* 0x185 */ "A1 Beat Plane 4", 0x3f96fe2, 0x3f97002, indexCPS2_Megaman, 36 },
    { /* 0x186 */ "A1 Beat Plane 5", 0x3f97002, 0x3f97022, indexCPS2_Megaman, 36 },
    { /* 0x187 */ "A1 Beat Plane 6", 0x3f97022, 0x3f97042, indexCPS2_Megaman, 36 },
    { /* 0x188 */ "A1 Beat Plane 7", 0x3f97042, 0x3f97062, indexCPS2_Megaman, 36 },
    { /* 0x189 */ "A1 Beat Plane 8", 0x3f97062, 0x3f97082, indexCPS2_Megaman, 36 },
    { /* 0x18a */ "A1 Beat Plane 9", 0x3f97082, 0x3f970a2, indexCPS2_Megaman, 36 },
    { /* 0x18b */ "A1 charging Megaman 1", 0x3f970a2, 0x3f970c2, indexCPS2_Megaman, 0 },
    { /* 0x18c */ "A1 charging Megaman 2", 0x3f970c2, 0x3f970e2, indexCPS2_Megaman, 0 },
    { /* 0x18d */ "A1 charging Megaman 3", 0x3f970e2, 0x3f97102, indexCPS2_Megaman, 0 },
    { /* 0x18e */ "A1 charging Megaman 4", 0x3f97102, 0x3f97122, indexCPS2_Megaman, 0 },
    { /* 0x18f */ "A1 charging Megaman 5", 0x3f97122, 0x3f97142, indexCPS2_Megaman, 0 },
    { /* 0x190 */ "A1 charging Megaman 6", 0x3f97142, 0x3f97162, indexCPS2_Megaman, 0 },
    { /* 0x191 */ "A1 charging Megaman 7", 0x3f97162, 0x3f97182, indexCPS2_Megaman, 0 },
    { /* 0x192 */ "A1 charging Megaman 8", 0x3f97182, 0x3f971a2, indexCPS2_Megaman, 0 },
    { /* 0x193 */ "A1 charging Megaman 9", 0x3f971a2, 0x3f971c2, indexCPS2_Megaman, 0 },
    { /* 0x194 */ "A1 Rush Drill 1", 0x3f971c2, 0x3f971e2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x195 */ "A1 Rush Drill 2", 0x3f971e2, 0x3f97202, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x196 */ "A1 Rush Drill 3", 0x3f97202, 0x3f97222, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x197 */ "A1 Rush Drill 4", 0x3f97222, 0x3f97242, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x198 */ "A1 Rush Drill 5", 0x3f97242, 0x3f97262, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x199 */ "A1 Rush Drill 6", 0x3f97262, 0x3f97282, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x19a */ "A1 Rush Drill 7", 0x3f97282, 0x3f972a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x19b */ "A1 Rush Drill 8", 0x3f972a2, 0x3f972c2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x19c */ "A1 Rush Drill 9", 0x3f972c2, 0x3f972e2, indexCPS2_Roll, 11 },
    { /* 0x19d */ "A1 Teleport Intro", 0x3f972e2, 0x3f97302, indexCPS2_Megaman, 13 },
    { /* 0x19e */ "A1 Dr. Light", 0x3f97302, 0x3f97322, indexCPS2_Megaman, 37 },
    { /* 0x19f */ "A1 Hyper Megaman (armor/skin while shooting) 1", 0x3f97322, 0x3f97342 },
    { /* 0x1a0 */ "A1 Hyper Megaman (armor/skin while shooting) 2", 0x3f97342, 0x3f97362 },
    { /* 0x1a1 */ "A1 Hyper Megaman (armor/skin while shooting) 3", 0x3f97362, 0x3f97382 },
    { /* 0x1a2 */ "A1 Hyper Megaman (armor/skin while shooting) 4", 0x3f97382, 0x3f973a2 },
    { /* 0x1a3 */ "A1 Hyper Megaman (armor/skin while shooting) 5", 0x3f973a2, 0x3f973c2 },
    { /* 0x1a4 */ "A1 Hyper Megaman (armor/skin while shooting) 6", 0x3f973c2, 0x3f973e2 },
    { /* 0x1a5 */ "A1 Hyper Megaman (armor/skin while shooting) 7", 0x3f973e2, 0x3f97402 },
    { /* 0x1a6 */ "A1 Hyper Megaman (armor/skin while shooting) 8", 0x3f97402, 0x3f97422 },
    { /* 0x1a7 */ "A1 Hyper Megaman (armor/skin while shooting) 9", 0x3f97422, 0x3f97442 },
    { /* 0x1a8 */ "A1 Hyper Megaman 1", 0x3f97442, 0x3f97462, indexCPS2_Megaman, 40 },
    { /* 0x1a9 */ "A1 Hyper Megaman 2", 0x3f97462, 0x3f97482, indexCPS2_Megaman, 40 },
    { /* 0x1aa */ "A1 Hyper Megaman 3", 0x3f97482, 0x3f974a2, indexCPS2_Megaman, 40 },
    { /* 0x1ab */ "A1 Hyper Megaman 4", 0x3f974a2, 0x3f974c2, indexCPS2_Megaman, 40 },
    { /* 0x1ac */ "A1 Hyper Megaman 5", 0x3f974c2, 0x3f974e2, indexCPS2_Megaman, 40 },
    { /* 0x1ad */ "A1 Hyper Megaman 6", 0x3f974e2, 0x3f97502, indexCPS2_Megaman, 40 },
    { /* 0x1ae */ "A1 Hyper Megaman 7", 0x3f97502, 0x3f97522, indexCPS2_Megaman, 40 },
    { /* 0x1af */ "A1 Hyper Megaman 8", 0x3f97522, 0x3f97542, indexCPS2_Megaman, 40 },
    { /* 0x1b0 */ "A1 Hyper Megaman 9", 0x3f97542, 0x3f97562, indexCPS2_Megaman, 40 },
    { /* 0x1b1 */ "A1 Hyper Megaman Missiles", 0x3f97562, 0x3f97582, indexCPS2_Megaman, 41 },
    { /* 0x1b2 */ "A1 Rush Drill metal 1", 0x3f97582, 0x3f975a2, indexCPS2_Roll, 12 },
    { /* 0x1b3 */ "A1 Rush Drill metal 2", 0x3f975a2, 0x3f975c2, indexCPS2_Roll, 12 },
    { /* 0x1b4 */ "A1 Rush Drill metal 3", 0x3f975c2, 0x3f975e2, indexCPS2_Roll, 12 },
    { /* 0x1b5 */ "A1 Rush Drill metal 4", 0x3f975e2, 0x3f97602, indexCPS2_Roll, 12 },
    { /* 0x1b6 */ "A1 Rush Drill metal 5", 0x3f97602, 0x3f97622, indexCPS2_Roll, 12 },
    { /* 0x1b7 */ "A1 Rush Drill metal 6", 0x3f97622, 0x3f97642, indexCPS2_Roll, 12 },
    { /* 0x1b8 */ "A1 Rush Drill metal 7", 0x3f97642, 0x3f97662, indexCPS2_Roll, 12 },
    { /* 0x1b9 */ "A1 Rush Drill metal 8", 0x3f97662, 0x3f97682, indexCPS2_Roll, 12 },
    { /* 0x1ba */ "A1 Roll", 0x3f97682, 0x3f976a2, indexCPS2_Roll, 0 },
    { /* 0x1bb */ "A1 Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f976a2, 0x3f976c2, indexCPS2_Megaman, 0 },
    { /* 0x1bc */ "A2 Megaman hair (all buttons)", 0x3f976c2, 0x3f976e2, indexCPS2_Megaman, 38 },
    { /* 0x1bd */ "A2 Death Animation (all buttons)", 0x3f976e2, 0x3f97702, indexCPS2_Megaman, 11 },
    { /* 0x1be */ "A2 Megaman Intro 1", 0x3f97702, 0x3f97722, indexCPS2_Megaman, 0 },
    { /* 0x1bf */ "A2 Megaman Intro 2", 0x3f97722, 0x3f97742, indexCPS2_Megaman, 0 },
    { /* 0x1c0 */ "A2 Megaman Intro 3", 0x3f97742, 0x3f97762, indexCPS2_Megaman, 0 },
    { /* 0x1c1 */ "A2 Megaman Intro 4", 0x3f97762, 0x3f97782, indexCPS2_Megaman, 0 },
    { /* 0x1c2 */ "A2 Megaman Intro 5", 0x3f97782, 0x3f977a2, indexCPS2_Megaman, 0 },
    { /* 0x1c3 */ "A2 Megaman Intro 6", 0x3f977a2, 0x3f977c2, indexCPS2_Megaman, 0 },
    { /* 0x1c4 */ "A2 Megaman Intro 7", 0x3f977c2, 0x3f977e2, indexCPS2_Megaman, 0 },
    { /* 0x1c5 */ "A2 Megaman Intro 8", 0x3f977e2, 0x3f97802, indexCPS2_Megaman, 0 },
    { /* 0x1c6 */ "A2 Megaman Intro 9", 0x3f97802, 0x3f97822, indexCPS2_Megaman, 0 },
    { /* 0x1c7 */ "A2 Rush 1", 0x3f97822, 0x3f97842, indexCPS2_Megaman, 1 },
    { /* 0x1c8 */ "A2 Rush 2", 0x3f97842, 0x3f97862, indexCPS2_Megaman, 1 },
    { /* 0x1c9 */ "A2 Rush 3", 0x3f97862, 0x3f97882, indexCPS2_Megaman, 1 },
    { /* 0x1ca */ "A2 Rush 4", 0x3f97882, 0x3f978a2, indexCPS2_Megaman, 1 },
    { /* 0x1cb */ "A2 Rush 5", 0x3f978a2, 0x3f978c2, indexCPS2_Megaman, 1 },
    { /* 0x1cc */ "A2 Rush 6", 0x3f978c2, 0x3f978e2, indexCPS2_Megaman, 1 },
    { /* 0x1cd */ "A2 Rush 7", 0x3f978e2, 0x3f97902, indexCPS2_Megaman, 1 },
    { /* 0x1ce */ "A2 Rush 8", 0x3f97902, 0x3f97922, indexCPS2_Megaman, 1 },
    { /* 0x1cf */ "A2 Rush 9", 0x3f97922, 0x3f97942, indexCPS2_Megaman, 1 },
    { /* 0x1d0 */ "A2 Beat 1", 0x3f97942, 0x3f97962, indexCPS2_Megaman, 2 },
    { /* 0x1d1 */ "A2 Beat 2", 0x3f97962, 0x3f97982, indexCPS2_Megaman, 2 },
    { /* 0x1d2 */ "A2 Beat 3", 0x3f97982, 0x3f979a2, indexCPS2_Megaman, 2 },
    { /* 0x1d3 */ "A2 Beat 4", 0x3f979a2, 0x3f979c2, indexCPS2_Megaman, 2 },
    { /* 0x1d4 */ "A2 Beat 5", 0x3f979c2, 0x3f979e2, indexCPS2_Megaman, 2 },
    { /* 0x1d5 */ "A2 Beat 6", 0x3f979e2, 0x3f97a02, indexCPS2_Megaman, 2 },
    { /* 0x1d6 */ "A2 Beat 7", 0x3f97a02, 0x3f97a22, indexCPS2_Megaman, 2 },
    { /* 0x1d7 */ "A2 Beat 8", 0x3f97a22, 0x3f97a42, indexCPS2_Megaman, 2 },
    { /* 0x1d8 */ "A2 Beat 9", 0x3f97a42, 0x3f97a62, indexCPS2_Megaman, 2 },
    { /* 0x1d9 */ "A2 Beat Plane 1", 0x3f97a62, 0x3f97a82, indexCPS2_Megaman, 36 },
    { /* 0x1da */ "A2 Beat Plane 2", 0x3f97a82, 0x3f97aa2, indexCPS2_Megaman, 36 },
    { /* 0x1db */ "A2 Beat Plane 3", 0x3f97aa2, 0x3f97ac2, indexCPS2_Megaman, 36 },
    { /* 0x1dc */ "A2 Beat Plane 4", 0x3f97ac2, 0x3f97ae2, indexCPS2_Megaman, 36 },
    { /* 0x1dd */ "A2 Beat Plane 5", 0x3f97ae2, 0x3f97b02, indexCPS2_Megaman, 36 },
    { /* 0x1de */ "A2 Beat Plane 6", 0x3f97b02, 0x3f97b22, indexCPS2_Megaman, 36 },
    { /* 0x1df */ "A2 Beat Plane 7", 0x3f97b22, 0x3f97b42, indexCPS2_Megaman, 36 },
    { /* 0x1e0 */ "A2 Beat Plane 8", 0x3f97b42, 0x3f97b62, indexCPS2_Megaman, 36 },
    { /* 0x1e1 */ "A2 Beat Plane 9", 0x3f97b62, 0x3f97b82, indexCPS2_Megaman, 36 },
    { /* 0x1e2 */ "A2 charging Megaman 1", 0x3f97b82, 0x3f97ba2, indexCPS2_Megaman, 0 },
    { /* 0x1e3 */ "A2 charging Megaman 2", 0x3f97ba2, 0x3f97bc2, indexCPS2_Megaman, 0 },
    { /* 0x1e4 */ "A2 charging Megaman 3", 0x3f97bc2, 0x3f97be2, indexCPS2_Megaman, 0 },
    { /* 0x1e5 */ "A2 charging Megaman 4", 0x3f97be2, 0x3f97c02, indexCPS2_Megaman, 0 },
    { /* 0x1e6 */ "A2 charging Megaman 5", 0x3f97c02, 0x3f97c22, indexCPS2_Megaman, 0 },
    { /* 0x1e7 */ "A2 charging Megaman 6", 0x3f97c22, 0x3f97c42, indexCPS2_Megaman, 0 },
    { /* 0x1e8 */ "A2 charging Megaman 7", 0x3f97c42, 0x3f97c62, indexCPS2_Megaman, 0 },
    { /* 0x1e9 */ "A2 charging Megaman 8", 0x3f97c62, 0x3f97c82, indexCPS2_Megaman, 0 },
    { /* 0x1ea */ "A2 charging Megaman 9", 0x3f97c82, 0x3f97ca2, indexCPS2_Megaman, 0 },
    { /* 0x1eb */ "A2 Rush Drill 1", 0x3f97ca2, 0x3f97cc2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ec */ "A2 Rush Drill 2", 0x3f97cc2, 0x3f97ce2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ed */ "A2 Rush Drill 3", 0x3f97ce2, 0x3f97d02, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ee */ "A2 Rush Drill 4", 0x3f97d02, 0x3f97d22, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ef */ "A2 Rush Drill 5", 0x3f97d22, 0x3f97d42, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f0 */ "A2 Rush Drill 6", 0x3f97d42, 0x3f97d62, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f1 */ "A2 Rush Drill 7", 0x3f97d62, 0x3f97d82, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f2 */ "A2 Rush Drill 8", 0x3f97d82, 0x3f97da2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f3 */ "A2 Rush Drill 9", 0x3f97da2, 0x3f97dc2, indexCPS2_Roll, 11 },
    { /* 0x1f4 */ "A2 Teleport Intro", 0x3f97dc2, 0x3f97de2, indexCPS2_Megaman, 13 },
    { /* 0x1f5 */ "A2 Dr. Light", 0x3f97de2, 0x3f97e02, indexCPS2_Megaman, 37 },
    { /* 0x1f6 */ "A2 Hyper Megaman (armor/skin while shooting) 1", 0x3f97e02, 0x3f97e22 },
    { /* 0x1f7 */ "A2 Hyper Megaman (armor/skin while shooting) 2", 0x3f97e22, 0x3f97e42 },
    { /* 0x1f8 */ "A2 Hyper Megaman (armor/skin while shooting) 3", 0x3f97e42, 0x3f97e62 },
    { /* 0x1f9 */ "A2 Hyper Megaman (armor/skin while shooting) 4", 0x3f97e62, 0x3f97e82 },
    { /* 0x1fa */ "A2 Hyper Megaman (armor/skin while shooting) 5", 0x3f97e82, 0x3f97ea2 },
    { /* 0x1fb */ "A2 Hyper Megaman (armor/skin while shooting) 6", 0x3f97ea2, 0x3f97ec2 },
    { /* 0x1fc */ "A2 Hyper Megaman (armor/skin while shooting) 7", 0x3f97ec2, 0x3f97ee2 },
    { /* 0x1fd */ "A2 Hyper Megaman (armor/skin while shooting) 8", 0x3f97ee2, 0x3f97f02 },
    { /* 0x1fe */ "A2 Hyper Megaman (armor/skin while shooting) 9", 0x3f97f02, 0x3f97f22 },
    { /* 0x1ff */ "A2 Hyper Megaman 1", 0x3f97f22, 0x3f97f42, indexCPS2_Megaman, 40 },
    { /* 0x200 */ "A2 Hyper Megaman 2", 0x3f97f42, 0x3f97f62, indexCPS2_Megaman, 40 },
    { /* 0x201 */ "A2 Hyper Megaman 3", 0x3f97f62, 0x3f97f82, indexCPS2_Megaman, 40 },
    { /* 0x202 */ "A2 Hyper Megaman 4", 0x3f97f82, 0x3f97fa2, indexCPS2_Megaman, 40 },
    { /* 0x203 */ "A2 Hyper Megaman 5", 0x3f97fa2, 0x3f97fc2, indexCPS2_Megaman, 40 },
    { /* 0x204 */ "A2 Hyper Megaman 6", 0x3f97fc2, 0x3f97fe2, indexCPS2_Megaman, 40 },
    { /* 0x205 */ "A2 Hyper Megaman 7", 0x3f97fe2, 0x3f98002, indexCPS2_Megaman, 40 },
    { /* 0x206 */ "A2 Hyper Megaman 8", 0x3f98002, 0x3f98022, indexCPS2_Megaman, 40 },
    { /* 0x207 */ "A2 Hyper Megaman 9", 0x3f98022, 0x3f98042, indexCPS2_Megaman, 40 },
    { /* 0x208 */ "A2 Hyper Megaman Missiles", 0x3f98042, 0x3f98062, indexCPS2_Megaman, 41 },
    { /* 0x209 */ "A2 Rush Drill metal 1", 0x3f98062, 0x3f98082, indexCPS2_Roll, 12 },
    { /* 0x20a */ "A2 Rush Drill metal 2", 0x3f98082, 0x3f980a2, indexCPS2_Roll, 12 },
    { /* 0x20b */ "A2 Rush Drill metal 3", 0x3f980a2, 0x3f980c2, indexCPS2_Roll, 12 },
    { /* 0x20c */ "A2 Rush Drill metal 4", 0x3f980c2, 0x3f980e2, indexCPS2_Roll, 12 },
    { /* 0x20d */ "A2 Rush Drill metal 5", 0x3f980e2, 0x3f98102, indexCPS2_Roll, 12 },
    { /* 0x20e */ "A2 Rush Drill metal 6", 0x3f98102, 0x3f98122, indexCPS2_Roll, 12 },
    { /* 0x20f */ "A2 Rush Drill metal 7", 0x3f98122, 0x3f98142, indexCPS2_Roll, 12 },
    { /* 0x210 */ "A2 Rush Drill metal 8", 0x3f98142, 0x3f98162, indexCPS2_Roll, 12 },
    { /* 0x211 */ "A2 Roll", 0x3f98162, 0x3f98182, indexCPS2_Roll, 0 },
};

const sDescTreeNode MVC2_A_MEGAMAN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_LP[] =
{
    { "Main Color LP", 0x4007742, 0x4007762, indexCPS2_Roll, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007762, 0x4007782, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007782, 0x40077a2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x40077a2, 0x40077c2, indexCPS2_Roll, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x40077c2, 0x40077e2, indexCPS2_Roll, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x40077e2, 0x4007802, indexCPS2_Roll, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007802, 0x4007822, indexCPS2_Roll, 6 },
    { "(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007822, 0x4007842, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_LK[] =
{
    { "Main Color LK", 0x4007842, 0x4007862, indexCPS2_Roll, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007862, 0x4007882, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007882, 0x40078a2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x40078a2, 0x40078c2, indexCPS2_Roll, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x40078c2, 0x40078e2, indexCPS2_Roll, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x40078e2, 0x4007902, indexCPS2_Roll, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007902, 0x4007922, indexCPS2_Roll, 6 },
    { "(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007922, 0x4007942, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_HP[] =
{
    { "Main Color HP", 0x4007942, 0x4007962, indexCPS2_Roll, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007962, 0x4007982, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007982, 0x40079a2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x40079a2, 0x40079c2, indexCPS2_Roll, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x40079c2, 0x40079e2, indexCPS2_Roll, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x40079e2, 0x4007a02, indexCPS2_Roll, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007a02, 0x4007a22, indexCPS2_Roll, 6 },
    { "(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007a22, 0x4007a42, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_HK[] =
{
    { "Main Color HK", 0x4007a42, 0x4007a62, indexCPS2_Roll, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007a62, 0x4007a82, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007a82, 0x4007aa2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x4007aa2, 0x4007ac2, indexCPS2_Roll, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x4007ac2, 0x4007ae2, indexCPS2_Roll, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x4007ae2, 0x4007b02, indexCPS2_Roll, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007b02, 0x4007b22, indexCPS2_Roll, 6 },
    { "(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007b22, 0x4007b42, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_A1[] =
{
    { "Main Color A1", 0x4007b42, 0x4007b62, indexCPS2_Roll, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007b62, 0x4007b82, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007b82, 0x4007ba2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x4007ba2, 0x4007bc2, indexCPS2_Roll, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x4007bc2, 0x4007be2, indexCPS2_Roll, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x4007be2, 0x4007c02, indexCPS2_Roll, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007c02, 0x4007c22, indexCPS2_Roll, 6 },
    { "(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007c22, 0x4007c42, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_A2[] =
{
    { "Main Color A2", 0x4007c42, 0x4007c62, indexCPS2_Roll, 0 },
    { "(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007c62, 0x4007c82, indexCPS2_Megaman, 1 },
    { "(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007c82, 0x4007ca2, indexCPS2_Megaman, 2 },
    { "(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x4007ca2, 0x4007cc2, indexCPS2_Roll, 3 },
    { "(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (fonts)", 0x4007cc2, 0x4007ce2, indexCPS2_Roll, 4 },
    { "(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x4007ce2, 0x4007d02, indexCPS2_Roll, 5 },
    { "(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007d02, 0x4007d22, indexCPS2_Roll, 6 },
    { "(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007d22, 0x4007d42, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4007d42, 0x4007d62, indexCPS2_Roll, 0 },
    { "Burning Light", 0x4007d62, 0x4007d82, indexCPS2_Roll, 0 },
    { "Shocked Dark", 0x4007d82, 0x4007da2, indexCPS2_Roll, 0 },
    { "Shocked Light", 0x4007da2, 0x4007dc2, indexCPS2_Roll, 0 },
    { "Dark Burning Dark", 0x4007dc2, 0x4007de2, indexCPS2_Roll, 0 },
    { "Dark Burning Light", 0x4007de2, 0x4007e02, indexCPS2_Roll, 0 },
    { "Kinetic Charge Dark", 0x4007e02, 0x4007e22, indexCPS2_Roll, 0 },
    { "Kinetic Charge Light", 0x4007e22, 0x4007e42, indexCPS2_Roll, 0 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP Megaman hair (all buttons)", 0x4007e42, 0x4007e62, indexCPS2_Megaman, 38 },
    { /* 0x0a */ "LP Death Animation (all buttons)", 0x4007e62, 0x4007e82, indexCPS2_Megaman, 11 },
    { /* 0x0b */ "LP Roll Intro 1", 0x4007e82, 0x4007ea2, indexCPS2_Roll, 0 },
    { /* 0x0c */ "LP Roll Intro 2", 0x4007ea2, 0x4007ec2, indexCPS2_Roll, 0 },
    { /* 0x0d */ "LP Roll Intro 3", 0x4007ec2, 0x4007ee2, indexCPS2_Roll, 0 },
    { /* 0x0e */ "LP Roll Intro 4", 0x4007ee2, 0x4007f02, indexCPS2_Roll, 0 },
    { /* 0x0f */ "LP Roll Intro 5", 0x4007f02, 0x4007f22, indexCPS2_Roll, 0 },
    { /* 0x10 */ "LP Roll Intro 6", 0x4007f22, 0x4007f42, indexCPS2_Roll, 0 },
    { /* 0x11 */ "LP Roll Intro 7", 0x4007f42, 0x4007f62, indexCPS2_Roll, 0 },
    { /* 0x12 */ "LP Roll Intro 8", 0x4007f62, 0x4007f82, indexCPS2_Roll, 0 },
    { /* 0x13 */ "LP Roll Intro 9", 0x4007f82, 0x4007fa2, indexCPS2_Roll, 0 },
    { /* 0x14 */ "LP Rush 1", 0x4007fa2, 0x4007fc2, indexCPS2_Megaman, 1 },
    { /* 0x15 */ "LP Rush 2", 0x4007fc2, 0x4007fe2, indexCPS2_Megaman, 1 },
    { /* 0x16 */ "LP Rush 3", 0x4007fe2, 0x4008002, indexCPS2_Megaman, 1 },
    { /* 0x17 */ "LP Rush 4", 0x4008002, 0x4008022, indexCPS2_Megaman, 1 },
    { /* 0x18 */ "LP Rush 5", 0x4008022, 0x4008042, indexCPS2_Megaman, 1 },
    { /* 0x19 */ "LP Rush 6", 0x4008042, 0x4008062, indexCPS2_Megaman, 1 },
    { /* 0x1a */ "LP Rush 7", 0x4008062, 0x4008082, indexCPS2_Megaman, 1 },
    { /* 0x1b */ "LP Rush 8", 0x4008082, 0x40080a2, indexCPS2_Megaman, 1 },
    { /* 0x1c */ "LP Rush 9", 0x40080a2, 0x40080c2, indexCPS2_Megaman, 1 },
    { /* 0x1d */ "LP Beat 1", 0x40080c2, 0x40080e2, indexCPS2_Megaman, 2 },
    { /* 0x1e */ "LP Beat 2", 0x40080e2, 0x4008102, indexCPS2_Megaman, 2 },
    { /* 0x1f */ "LP Beat 3", 0x4008102, 0x4008122, indexCPS2_Megaman, 2 },
    { /* 0x20 */ "LP Beat 4", 0x4008122, 0x4008142, indexCPS2_Megaman, 2 },
    { /* 0x21 */ "LP Beat 5", 0x4008142, 0x4008162, indexCPS2_Megaman, 2 },
    { /* 0x22 */ "LP Beat 6", 0x4008162, 0x4008182, indexCPS2_Megaman, 2 },
    { /* 0x23 */ "LP Beat 7", 0x4008182, 0x40081a2, indexCPS2_Megaman, 2 },
    { /* 0x24 */ "LP Beat 8", 0x40081a2, 0x40081c2, indexCPS2_Megaman, 2 },
    { /* 0x25 */ "LP Beat 9", 0x40081c2, 0x40081e2, indexCPS2_Megaman, 2 },
    { /* 0x26 */ "LP Beat Plane 1", 0x40081e2, 0x4008202, indexCPS2_Megaman, 36 },
    { /* 0x27 */ "LP Beat Plane 2", 0x4008202, 0x4008222, indexCPS2_Megaman, 36 },
    { /* 0x28 */ "LP Beat Plane 3", 0x4008222, 0x4008242, indexCPS2_Megaman, 36 },
    { /* 0x29 */ "LP Beat Plane 4", 0x4008242, 0x4008262, indexCPS2_Megaman, 36 },
    { /* 0x2a */ "LP Beat Plane 5", 0x4008262, 0x4008282, indexCPS2_Megaman, 36 },
    { /* 0x2b */ "LP Beat Plane 6", 0x4008282, 0x40082a2, indexCPS2_Megaman, 36 },
    { /* 0x2c */ "LP Beat Plane 7", 0x40082a2, 0x40082c2, indexCPS2_Megaman, 36 },
    { /* 0x2d */ "LP Beat Plane 8", 0x40082c2, 0x40082e2, indexCPS2_Megaman, 36 },
    { /* 0x2e */ "LP Beat Plane 9", 0x40082e2, 0x4008302, indexCPS2_Megaman, 36 },
    { /* 0x2f */ "LP charging Roll 1", 0x4008302, 0x4008322, indexCPS2_Roll, 0 },
    { /* 0x30 */ "LP charging Roll 2", 0x4008322, 0x4008342, indexCPS2_Roll, 0 },
    { /* 0x31 */ "LP charging Roll 3", 0x4008342, 0x4008362, indexCPS2_Roll, 0 },
    { /* 0x32 */ "LP charging Roll 4", 0x4008362, 0x4008382, indexCPS2_Roll, 0 },
    { /* 0x33 */ "LP charging Roll 5", 0x4008382, 0x40083a2, indexCPS2_Roll, 0 },
    { /* 0x34 */ "LP charging Roll 6", 0x40083a2, 0x40083c2, indexCPS2_Roll, 0 },
    { /* 0x35 */ "LP charging Roll 7", 0x40083c2, 0x40083e2, indexCPS2_Roll, 0 },
    { /* 0x36 */ "LP charging Roll 8", 0x40083e2, 0x4008402, indexCPS2_Roll, 0 },
    { /* 0x37 */ "LP charging Roll 9", 0x4008402, 0x4008422, indexCPS2_Roll, 0 },
    { /* 0x38 */ "LP Rush Drill 1", 0x4008422, 0x4008442, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x39 */ "LP Rush Drill 2", 0x4008442, 0x4008462, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3a */ "LP Rush Drill 3", 0x4008462, 0x4008482, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3b */ "LP Rush Drill 4", 0x4008482, 0x40084a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3c */ "LP Rush Drill 5", 0x40084a2, 0x40084c2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3d */ "LP Rush Drill 6", 0x40084c2, 0x40084e2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3e */ "LP Rush Drill 7", 0x40084e2, 0x4008502, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x3f */ "LP Rush Drill 8", 0x4008502, 0x4008522, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x40 */ "LP Rush Drill 9", 0x4008522, 0x4008542, indexCPS2_Roll, 11 },
    { /* 0x41 */ "LP Teleport Intro", 0x4008542, 0x4008562, indexCPS2_Megaman, 13 },
    { /* 0x42 */ "LP Dr. Light", 0x4008562, 0x4008582, indexCPS2_Megaman, 37 },
    { /* 0x43 */ "LP Hyper Roll (armor/skin while shooting) 1", 0x4008582, 0x40085a2 },
    { /* 0x44 */ "LP Hyper Roll (armor/skin while shooting) 2", 0x40085a2, 0x40085c2 },
    { /* 0x45 */ "LP Hyper Roll (armor/skin while shooting) 3", 0x40085c2, 0x40085e2 },
    { /* 0x46 */ "LP Hyper Roll (armor/skin while shooting) 4", 0x40085e2, 0x4008602 },
    { /* 0x47 */ "LP Hyper Roll (armor/skin while shooting) 5", 0x4008602, 0x4008622 },
    { /* 0x48 */ "LP Hyper Roll (armor/skin while shooting) 6", 0x4008622, 0x4008642 },
    { /* 0x49 */ "LP Hyper Roll (armor/skin while shooting) 7", 0x4008642, 0x4008662 },
    { /* 0x4a */ "LP Hyper Roll (armor/skin while shooting) 8", 0x4008662, 0x4008682 },
    { /* 0x4b */ "LP Hyper Roll (armor/skin while shooting) 9", 0x4008682, 0x40086a2 },
    { /* 0x4c */ "LP Hyper Roll 1", 0x40086a2, 0x40086c2, indexCPS2_Roll, 0 },
    { /* 0x4d */ "LP Hyper Roll 2", 0x40086c2, 0x40086e2, indexCPS2_Roll, 0 },
    { /* 0x4e */ "LP Hyper Roll 3", 0x40086e2, 0x4008702, indexCPS2_Roll, 0 },
    { /* 0x4f */ "LP Hyper Roll 4", 0x4008702, 0x4008722, indexCPS2_Roll, 0 },
    { /* 0x50 */ "LP Hyper Roll 5", 0x4008722, 0x4008742, indexCPS2_Roll, 0 },
    { /* 0x51 */ "LP Hyper Roll 6", 0x4008742, 0x4008762, indexCPS2_Roll, 0 },
    { /* 0x52 */ "LP Hyper Roll 7", 0x4008762, 0x4008782, indexCPS2_Roll, 0 },
    { /* 0x53 */ "LP Hyper Roll 8", 0x4008782, 0x40087a2, indexCPS2_Roll, 0 },
    { /* 0x54 */ "LP Hyper Roll 9", 0x40087a2, 0x40087c2, indexCPS2_Roll, 0 },
    { /* 0x55 */ "LP Hyper Roll Missiles", 0x40087c2, 0x40087e2 },
    { /* 0x56 */ "LP Rush Drill metal 1", 0x40087e2, 0x4008802, indexCPS2_Roll, 12 },
    { /* 0x57 */ "LP Rush Drill metal 2", 0x4008802, 0x4008822, indexCPS2_Roll, 12 },
    { /* 0x58 */ "LP Rush Drill metal 3", 0x4008822, 0x4008842, indexCPS2_Roll, 12 },
    { /* 0x59 */ "LP Rush Drill metal 4", 0x4008842, 0x4008862, indexCPS2_Roll, 12 },
    { /* 0x5a */ "LP Rush Drill metal 5", 0x4008862, 0x4008882, indexCPS2_Roll, 12 },
    { /* 0x5b */ "LP Rush Drill metal 6", 0x4008882, 0x40088a2, indexCPS2_Roll, 12 },
    { /* 0x5c */ "LP Rush Drill metal 7", 0x40088a2, 0x40088c2, indexCPS2_Roll, 12 },
    { /* 0x5d */ "LP Rush Drill metal 8", 0x40088c2, 0x40088e2, indexCPS2_Roll, 12 },
    { /* 0x5e */ "LP Megaman", 0x40088e2, 0x4008902, indexCPS2_Megaman, 0 },
    { /* 0x5f */ "LP Magnetic Shockwave Power Up (MvC1 Ending)", 0x4008902, 0x4008922, indexCPS2_Megaman, 0 },
    { /* 0x60 */ "LK Megaman hair (all buttons)", 0x4008922, 0x4008942, indexCPS2_Megaman, 38 },
    { /* 0x61 */ "LK Death Animation (all buttons)", 0x4008942, 0x4008962, indexCPS2_Megaman, 11 },
    { /* 0x62 */ "LK Roll Intro 1", 0x4008962, 0x4008982, indexCPS2_Roll, 0 },
    { /* 0x63 */ "LK Roll Intro 2", 0x4008982, 0x40089a2, indexCPS2_Roll, 0 },
    { /* 0x64 */ "LK Roll Intro 3", 0x40089a2, 0x40089c2, indexCPS2_Roll, 0 },
    { /* 0x65 */ "LK Roll Intro 4", 0x40089c2, 0x40089e2, indexCPS2_Roll, 0 },
    { /* 0x66 */ "LK Roll Intro 5", 0x40089e2, 0x4008a02, indexCPS2_Roll, 0 },
    { /* 0x67 */ "LK Roll Intro 6", 0x4008a02, 0x4008a22, indexCPS2_Roll, 0 },
    { /* 0x68 */ "LK Roll Intro 7", 0x4008a22, 0x4008a42, indexCPS2_Roll, 0 },
    { /* 0x69 */ "LK Roll Intro 8", 0x4008a42, 0x4008a62, indexCPS2_Roll, 0 },
    { /* 0x6a */ "LK Roll Intro 9", 0x4008a62, 0x4008a82, indexCPS2_Roll, 0 },
    { /* 0x6b */ "LK Rush 1", 0x4008a82, 0x4008aa2, indexCPS2_Megaman, 1 },
    { /* 0x6c */ "LK Rush 2", 0x4008aa2, 0x4008ac2, indexCPS2_Megaman, 1 },
    { /* 0x6d */ "LK Rush 3", 0x4008ac2, 0x4008ae2, indexCPS2_Megaman, 1 },
    { /* 0x6e */ "LK Rush 4", 0x4008ae2, 0x4008b02, indexCPS2_Megaman, 1 },
    { /* 0x6f */ "LK Rush 5", 0x4008b02, 0x4008b22, indexCPS2_Megaman, 1 },
    { /* 0x70 */ "LK Rush 6", 0x4008b22, 0x4008b42, indexCPS2_Megaman, 1 },
    { /* 0x71 */ "LK Rush 7", 0x4008b42, 0x4008b62, indexCPS2_Megaman, 1 },
    { /* 0x72 */ "LK Rush 8", 0x4008b62, 0x4008b82, indexCPS2_Megaman, 1 },
    { /* 0x73 */ "LK Rush 9", 0x4008b82, 0x4008ba2, indexCPS2_Megaman, 1 },
    { /* 0x74 */ "LK Beat 1", 0x4008ba2, 0x4008bc2, indexCPS2_Megaman, 2 },
    { /* 0x75 */ "LK Beat 2", 0x4008bc2, 0x4008be2, indexCPS2_Megaman, 2 },
    { /* 0x76 */ "LK Beat 3", 0x4008be2, 0x4008c02, indexCPS2_Megaman, 2 },
    { /* 0x77 */ "LK Beat 4", 0x4008c02, 0x4008c22, indexCPS2_Megaman, 2 },
    { /* 0x78 */ "LK Beat 5", 0x4008c22, 0x4008c42, indexCPS2_Megaman, 2 },
    { /* 0x79 */ "LK Beat 6", 0x4008c42, 0x4008c62, indexCPS2_Megaman, 2 },
    { /* 0x7a */ "LK Beat 7", 0x4008c62, 0x4008c82, indexCPS2_Megaman, 2 },
    { /* 0x7b */ "LK Beat 8", 0x4008c82, 0x4008ca2, indexCPS2_Megaman, 2 },
    { /* 0x7c */ "LK Beat 9", 0x4008ca2, 0x4008cc2, indexCPS2_Megaman, 2 },
    { /* 0x7d */ "LK Beat Plane 1", 0x4008cc2, 0x4008ce2, indexCPS2_Megaman, 36 },
    { /* 0x7e */ "LK Beat Plane 2", 0x4008ce2, 0x4008d02, indexCPS2_Megaman, 36 },
    { /* 0x7f */ "LK Beat Plane 3", 0x4008d02, 0x4008d22, indexCPS2_Megaman, 36 },
    { /* 0x80 */ "LK Beat Plane 4", 0x4008d22, 0x4008d42, indexCPS2_Megaman, 36 },
    { /* 0x81 */ "LK Beat Plane 5", 0x4008d42, 0x4008d62, indexCPS2_Megaman, 36 },
    { /* 0x82 */ "LK Beat Plane 6", 0x4008d62, 0x4008d82, indexCPS2_Megaman, 36 },
    { /* 0x83 */ "LK Beat Plane 7", 0x4008d82, 0x4008da2, indexCPS2_Megaman, 36 },
    { /* 0x84 */ "LK Beat Plane 8", 0x4008da2, 0x4008dc2, indexCPS2_Megaman, 36 },
    { /* 0x85 */ "LK Beat Plane 9", 0x4008dc2, 0x4008de2, indexCPS2_Megaman, 36 },
    { /* 0x86 */ "LK charging Roll 1", 0x4008de2, 0x4008e02, indexCPS2_Roll, 0 },
    { /* 0x87 */ "LK charging Roll 2", 0x4008e02, 0x4008e22, indexCPS2_Roll, 0 },
    { /* 0x88 */ "LK charging Roll 3", 0x4008e22, 0x4008e42, indexCPS2_Roll, 0 },
    { /* 0x89 */ "LK charging Roll 4", 0x4008e42, 0x4008e62, indexCPS2_Roll, 0 },
    { /* 0x8a */ "LK charging Roll 5", 0x4008e62, 0x4008e82, indexCPS2_Roll, 0 },
    { /* 0x8b */ "LK charging Roll 6", 0x4008e82, 0x4008ea2, indexCPS2_Roll, 0 },
    { /* 0x8c */ "LK charging Roll 7", 0x4008ea2, 0x4008ec2, indexCPS2_Roll, 0 },
    { /* 0x8d */ "LK charging Roll 8", 0x4008ec2, 0x4008ee2, indexCPS2_Roll, 0 },
    { /* 0x8e */ "LK charging Roll 9", 0x4008ee2, 0x4008f02, indexCPS2_Roll, 0 },
    { /* 0x8f */ "LK Rush Drill 1", 0x4008f02, 0x4008f22, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x90 */ "LK Rush Drill 2", 0x4008f22, 0x4008f42, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x91 */ "LK Rush Drill 3", 0x4008f42, 0x4008f62, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x92 */ "LK Rush Drill 4", 0x4008f62, 0x4008f82, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x93 */ "LK Rush Drill 5", 0x4008f82, 0x4008fa2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x94 */ "LK Rush Drill 6", 0x4008fa2, 0x4008fc2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x95 */ "LK Rush Drill 7", 0x4008fc2, 0x4008fe2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x96 */ "LK Rush Drill 8", 0x4008fe2, 0x4009002, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x97 */ "LK Rush Drill 9", 0x4009002, 0x4009022, indexCPS2_Roll, 11 },
    { /* 0x98 */ "LK Teleport Intro", 0x4009022, 0x4009042, indexCPS2_Megaman, 13 },
    { /* 0x99 */ "LK Dr. Light", 0x4009042, 0x4009062, indexCPS2_Megaman, 37 },
    { /* 0x9a */ "LK Hyper Roll (armor/skin while shooting) 1", 0x4009062, 0x4009082 },
    { /* 0x9b */ "LK Hyper Roll (armor/skin while shooting) 2", 0x4009082, 0x40090a2 },
    { /* 0x9c */ "LK Hyper Roll (armor/skin while shooting) 3", 0x40090a2, 0x40090c2 },
    { /* 0x9d */ "LK Hyper Roll (armor/skin while shooting) 4", 0x40090c2, 0x40090e2 },
    { /* 0x9e */ "LK Hyper Roll (armor/skin while shooting) 5", 0x40090e2, 0x4009102 },
    { /* 0x9f */ "LK Hyper Roll (armor/skin while shooting) 6", 0x4009102, 0x4009122 },
    { /* 0xa0 */ "LK Hyper Roll (armor/skin while shooting) 7", 0x4009122, 0x4009142 },
    { /* 0xa1 */ "LK Hyper Roll (armor/skin while shooting) 8", 0x4009142, 0x4009162 },
    { /* 0xa2 */ "LK Hyper Roll (armor/skin while shooting) 9", 0x4009162, 0x4009182 },
    { /* 0xa3 */ "LK Hyper Roll 1", 0x4009182, 0x40091a2, indexCPS2_Roll, 0 },
    { /* 0xa4 */ "LK Hyper Roll 2", 0x40091a2, 0x40091c2, indexCPS2_Roll, 0 },
    { /* 0xa5 */ "LK Hyper Roll 3", 0x40091c2, 0x40091e2, indexCPS2_Roll, 0 },
    { /* 0xa6 */ "LK Hyper Roll 4", 0x40091e2, 0x4009202, indexCPS2_Roll, 0 },
    { /* 0xa7 */ "LK Hyper Roll 5", 0x4009202, 0x4009222, indexCPS2_Roll, 0 },
    { /* 0xa8 */ "LK Hyper Roll 6", 0x4009222, 0x4009242, indexCPS2_Roll, 0 },
    { /* 0xa9 */ "LK Hyper Roll 7", 0x4009242, 0x4009262, indexCPS2_Roll, 0 },
    { /* 0xaa */ "LK Hyper Roll 8", 0x4009262, 0x4009282, indexCPS2_Roll, 0 },
    { /* 0xab */ "LK Hyper Roll 9", 0x4009282, 0x40092a2, indexCPS2_Roll, 0 },
    { /* 0xac */ "LK Hyper Roll Missiles", 0x40092a2, 0x40092c2 },
    { /* 0xad */ "LK Rush Drill metal 1", 0x40092c2, 0x40092e2, indexCPS2_Roll, 12 },
    { /* 0xae */ "LK Rush Drill metal 2", 0x40092e2, 0x4009302, indexCPS2_Roll, 12 },
    { /* 0xaf */ "LK Rush Drill metal 3", 0x4009302, 0x4009322, indexCPS2_Roll, 12 },
    { /* 0xb0 */ "LK Rush Drill metal 4", 0x4009322, 0x4009342, indexCPS2_Roll, 12 },
    { /* 0xb1 */ "LK Rush Drill metal 5", 0x4009342, 0x4009362, indexCPS2_Roll, 12 },
    { /* 0xb2 */ "LK Rush Drill metal 6", 0x4009362, 0x4009382, indexCPS2_Roll, 12 },
    { /* 0xb3 */ "LK Rush Drill metal 7", 0x4009382, 0x40093a2, indexCPS2_Roll, 12 },
    { /* 0xb4 */ "LK Rush Drill metal 8", 0x40093a2, 0x40093c2, indexCPS2_Roll, 12 },
    { /* 0xb5 */ "LK Megaman", 0x40093c2, 0x40093e2, indexCPS2_Megaman, 0 },
    { /* 0xb6 */ "LK Magnetic Shockwave Power Up (MvC1 Ending)", 0x40093e2, 0x4009402, indexCPS2_Megaman, 0 },
    { /* 0xb7 */ "HP Megaman hair (all buttons)", 0x4009402, 0x4009422, indexCPS2_Megaman, 38 },
    { /* 0xb8 */ "HP Death Animation (all buttons)", 0x4009422, 0x4009442, indexCPS2_Megaman, 11 },
    { /* 0xb9 */ "HP Roll Intro 1", 0x4009442, 0x4009462, indexCPS2_Roll, 0 },
    { /* 0xba */ "HP Roll Intro 2", 0x4009462, 0x4009482, indexCPS2_Roll, 0 },
    { /* 0xbb */ "HP Roll Intro 3", 0x4009482, 0x40094a2, indexCPS2_Roll, 0 },
    { /* 0xbc */ "HP Roll Intro 4", 0x40094a2, 0x40094c2, indexCPS2_Roll, 0 },
    { /* 0xbd */ "HP Roll Intro 5", 0x40094c2, 0x40094e2, indexCPS2_Roll, 0 },
    { /* 0xbe */ "HP Roll Intro 6", 0x40094e2, 0x4009502, indexCPS2_Roll, 0 },
    { /* 0xbf */ "HP Roll Intro 7", 0x4009502, 0x4009522, indexCPS2_Roll, 0 },
    { /* 0xc0 */ "HP Roll Intro 8", 0x4009522, 0x4009542, indexCPS2_Roll, 0 },
    { /* 0xc1 */ "HP Roll Intro 9", 0x4009542, 0x4009562, indexCPS2_Roll, 0 },
    { /* 0xc2 */ "HP Rush 1", 0x4009562, 0x4009582, indexCPS2_Megaman, 1 },
    { /* 0xc3 */ "HP Rush 2", 0x4009582, 0x40095a2, indexCPS2_Megaman, 1 },
    { /* 0xc4 */ "HP Rush 3", 0x40095a2, 0x40095c2, indexCPS2_Megaman, 1 },
    { /* 0xc5 */ "HP Rush 4", 0x40095c2, 0x40095e2, indexCPS2_Megaman, 1 },
    { /* 0xc6 */ "HP Rush 5", 0x40095e2, 0x4009602, indexCPS2_Megaman, 1 },
    { /* 0xc7 */ "HP Rush 6", 0x4009602, 0x4009622, indexCPS2_Megaman, 1 },
    { /* 0xc8 */ "HP Rush 7", 0x4009622, 0x4009642, indexCPS2_Megaman, 1 },
    { /* 0xc9 */ "HP Rush 8", 0x4009642, 0x4009662, indexCPS2_Megaman, 1 },
    { /* 0xca */ "HP Rush 9", 0x4009662, 0x4009682, indexCPS2_Megaman, 1 },
    { /* 0xcb */ "HP Beat 1", 0x4009682, 0x40096a2, indexCPS2_Megaman, 2 },
    { /* 0xcc */ "HP Beat 2", 0x40096a2, 0x40096c2, indexCPS2_Megaman, 2 },
    { /* 0xcd */ "HP Beat 3", 0x40096c2, 0x40096e2, indexCPS2_Megaman, 2 },
    { /* 0xce */ "HP Beat 4", 0x40096e2, 0x4009702, indexCPS2_Megaman, 2 },
    { /* 0xcf */ "HP Beat 5", 0x4009702, 0x4009722, indexCPS2_Megaman, 2 },
    { /* 0xd0 */ "HP Beat 6", 0x4009722, 0x4009742, indexCPS2_Megaman, 2 },
    { /* 0xd1 */ "HP Beat 7", 0x4009742, 0x4009762, indexCPS2_Megaman, 2 },
    { /* 0xd2 */ "HP Beat 8", 0x4009762, 0x4009782, indexCPS2_Megaman, 2 },
    { /* 0xd3 */ "HP Beat 9", 0x4009782, 0x40097a2, indexCPS2_Megaman, 2 },
    { /* 0xd4 */ "HP Beat Plane 1", 0x40097a2, 0x40097c2, indexCPS2_Megaman, 36 },
    { /* 0xd5 */ "HP Beat Plane 2", 0x40097c2, 0x40097e2, indexCPS2_Megaman, 36 },
    { /* 0xd6 */ "HP Beat Plane 3", 0x40097e2, 0x4009802, indexCPS2_Megaman, 36 },
    { /* 0xd7 */ "HP Beat Plane 4", 0x4009802, 0x4009822, indexCPS2_Megaman, 36 },
    { /* 0xd8 */ "HP Beat Plane 5", 0x4009822, 0x4009842, indexCPS2_Megaman, 36 },
    { /* 0xd9 */ "HP Beat Plane 6", 0x4009842, 0x4009862, indexCPS2_Megaman, 36 },
    { /* 0xda */ "HP Beat Plane 7", 0x4009862, 0x4009882, indexCPS2_Megaman, 36 },
    { /* 0xdb */ "HP Beat Plane 8", 0x4009882, 0x40098a2, indexCPS2_Megaman, 36 },
    { /* 0xdc */ "HP Beat Plane 9", 0x40098a2, 0x40098c2, indexCPS2_Megaman, 36 },
    { /* 0xdd */ "HP charging Roll 1", 0x40098c2, 0x40098e2, indexCPS2_Roll, 0 },
    { /* 0xde */ "HP charging Roll 2", 0x40098e2, 0x4009902, indexCPS2_Roll, 0 },
    { /* 0xdf */ "HP charging Roll 3", 0x4009902, 0x4009922, indexCPS2_Roll, 0 },
    { /* 0xe0 */ "HP charging Roll 4", 0x4009922, 0x4009942, indexCPS2_Roll, 0 },
    { /* 0xe1 */ "HP charging Roll 5", 0x4009942, 0x4009962, indexCPS2_Roll, 0 },
    { /* 0xe2 */ "HP charging Roll 6", 0x4009962, 0x4009982, indexCPS2_Roll, 0 },
    { /* 0xe3 */ "HP charging Roll 7", 0x4009982, 0x40099a2, indexCPS2_Roll, 0 },
    { /* 0xe4 */ "HP charging Roll 8", 0x40099a2, 0x40099c2, indexCPS2_Roll, 0 },
    { /* 0xe5 */ "HP charging Roll 9", 0x40099c2, 0x40099e2, indexCPS2_Roll, 0 },
    { /* 0xe6 */ "HP Rush Drill 1", 0x40099e2, 0x4009a02, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xe7 */ "HP Rush Drill 2", 0x4009a02, 0x4009a22, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xe8 */ "HP Rush Drill 3", 0x4009a22, 0x4009a42, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xe9 */ "HP Rush Drill 4", 0x4009a42, 0x4009a62, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xea */ "HP Rush Drill 5", 0x4009a62, 0x4009a82, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xeb */ "HP Rush Drill 6", 0x4009a82, 0x4009aa2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xec */ "HP Rush Drill 7", 0x4009aa2, 0x4009ac2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xed */ "HP Rush Drill 8", 0x4009ac2, 0x4009ae2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0xee */ "HP Rush Drill 9", 0x4009ae2, 0x4009b02, indexCPS2_Roll, 11 },
    { /* 0xef */ "HP Dr. Light", 0x4009b02, 0x4009b22, indexCPS2_Megaman, 37 },
    { /* 0xf0 */ "Unused: Extra 0xf0", 0x4009b22, 0x4009b42 },
    { /* 0xf1 */ "HP Hyper Roll (armor/skin while shooting) 1", 0x4009b42, 0x4009b62 },
    { /* 0xf2 */ "HP Hyper Roll (armor/skin while shooting) 2", 0x4009b62, 0x4009b82 },
    { /* 0xf3 */ "HP Hyper Roll (armor/skin while shooting) 3", 0x4009b82, 0x4009ba2 },
    { /* 0xf4 */ "HP Hyper Roll (armor/skin while shooting) 4", 0x4009ba2, 0x4009bc2 },
    { /* 0xf5 */ "HP Hyper Roll (armor/skin while shooting) 5", 0x4009bc2, 0x4009be2 },
    { /* 0xf6 */ "HP Hyper Roll (armor/skin while shooting) 6", 0x4009be2, 0x4009c02 },
    { /* 0xf7 */ "HP Hyper Roll (armor/skin while shooting) 7", 0x4009c02, 0x4009c22 },
    { /* 0xf8 */ "HP Hyper Roll (armor/skin while shooting) 8", 0x4009c22, 0x4009c42 },
    { /* 0xf9 */ "HP Hyper Roll (armor/skin while shooting) 9", 0x4009c42, 0x4009c62 },
    { /* 0xfa */ "HP Hyper Roll 1", 0x4009c62, 0x4009c82, indexCPS2_Roll, 0 },
    { /* 0xfb */ "HP Hyper Roll 2", 0x4009c82, 0x4009ca2, indexCPS2_Roll, 0 },
    { /* 0xfc */ "HP Hyper Roll 3", 0x4009ca2, 0x4009cc2, indexCPS2_Roll, 0 },
    { /* 0xfd */ "HP Hyper Roll 4", 0x4009cc2, 0x4009ce2, indexCPS2_Roll, 0 },
    { /* 0xfe */ "HP Hyper Roll 5", 0x4009ce2, 0x4009d02, indexCPS2_Roll, 0 },
    { /* 0xff */ "HP Hyper Roll 6", 0x4009d02, 0x4009d22, indexCPS2_Roll, 0 },
    { /* 0x100 */ "HP Hyper Roll 7", 0x4009d22, 0x4009d42, indexCPS2_Roll, 0 },
    { /* 0x101 */ "HP Hyper Roll 8", 0x4009d42, 0x4009d62, indexCPS2_Roll, 0 },
    { /* 0x102 */ "HP Hyper Roll 9", 0x4009d62, 0x4009d82, indexCPS2_Roll, 0 },
    { /* 0x103 */ "HP Hyper Roll Missiles", 0x4009d82, 0x4009da2 },
    { /* 0x104 */ "HP Rush Drill metal 1", 0x4009da2, 0x4009dc2, indexCPS2_Roll, 12 },
    { /* 0x105 */ "HP Rush Drill metal 2", 0x4009dc2, 0x4009de2, indexCPS2_Roll, 12 },
    { /* 0x106 */ "HP Rush Drill metal 3", 0x4009de2, 0x4009e02, indexCPS2_Roll, 12 },
    { /* 0x107 */ "HP Rush Drill metal 4", 0x4009e02, 0x4009e22, indexCPS2_Roll, 12 },
    { /* 0x108 */ "HP Rush Drill metal 5", 0x4009e22, 0x4009e42, indexCPS2_Roll, 12 },
    { /* 0x109 */ "HP Rush Drill metal 6", 0x4009e42, 0x4009e62, indexCPS2_Roll, 12 },
    { /* 0x10a */ "HP Rush Drill metal 7", 0x4009e62, 0x4009e82, indexCPS2_Roll, 12 },
    { /* 0x10b */ "HP Rush Drill metal 8", 0x4009e82, 0x4009ea2, indexCPS2_Roll, 12 },
    { /* 0x10c */ "HP Megaman", 0x4009ea2, 0x4009ec2, indexCPS2_Megaman, 0 },
    { /* 0x10d */ "HP Magnetic Shockwave Power Up (MvC1 Ending)", 0x4009ec2, 0x4009ee2, indexCPS2_Megaman, 0 },
    { /* 0x10e */ "HK Megaman hair (all buttons)", 0x4009ee2, 0x4009f02, indexCPS2_Megaman, 38 },
    { /* 0x10f */ "HK Death Animation (all buttons)", 0x4009f02, 0x4009f22, indexCPS2_Megaman, 11 },
    { /* 0x110 */ "HK Roll Intro 1", 0x4009f22, 0x4009f42, indexCPS2_Roll, 0 },
    { /* 0x111 */ "HK Roll Intro 2", 0x4009f42, 0x4009f62, indexCPS2_Roll, 0 },
    { /* 0x112 */ "HK Roll Intro 3", 0x4009f62, 0x4009f82, indexCPS2_Roll, 0 },
    { /* 0x113 */ "HK Roll Intro 4", 0x4009f82, 0x4009fa2, indexCPS2_Roll, 0 },
    { /* 0x114 */ "HK Roll Intro 5", 0x4009fa2, 0x4009fc2, indexCPS2_Roll, 0 },
    { /* 0x115 */ "HK Roll Intro 6", 0x4009fc2, 0x4009fe2, indexCPS2_Roll, 0 },
    { /* 0x116 */ "HK Roll Intro 7", 0x4009fe2, 0x400a002, indexCPS2_Roll, 0 },
    { /* 0x117 */ "HK Roll Intro 8", 0x400a002, 0x400a022, indexCPS2_Roll, 0 },
    { /* 0x118 */ "HK Roll Intro 9", 0x400a022, 0x400a042, indexCPS2_Roll, 0 },
    { /* 0x119 */ "HK Rush 1", 0x400a042, 0x400a062, indexCPS2_Megaman, 1 },
    { /* 0x11a */ "HK Rush 2", 0x400a062, 0x400a082, indexCPS2_Megaman, 1 },
    { /* 0x11b */ "HK Rush 3", 0x400a082, 0x400a0a2, indexCPS2_Megaman, 1 },
    { /* 0x11c */ "HK Rush 4", 0x400a0a2, 0x400a0c2, indexCPS2_Megaman, 1 },
    { /* 0x11d */ "HK Rush 5", 0x400a0c2, 0x400a0e2, indexCPS2_Megaman, 1 },
    { /* 0x11e */ "HK Rush 6", 0x400a0e2, 0x400a102, indexCPS2_Megaman, 1 },
    { /* 0x11f */ "HK Rush 7", 0x400a102, 0x400a122, indexCPS2_Megaman, 1 },
    { /* 0x120 */ "HK Rush 8", 0x400a122, 0x400a142, indexCPS2_Megaman, 1 },
    { /* 0x121 */ "HK Rush 9", 0x400a142, 0x400a162, indexCPS2_Megaman, 1 },
    { /* 0x122 */ "HK Beat 1", 0x400a162, 0x400a182, indexCPS2_Megaman, 2 },
    { /* 0x123 */ "HK Beat 2", 0x400a182, 0x400a1a2, indexCPS2_Megaman, 2 },
    { /* 0x124 */ "HK Beat 3", 0x400a1a2, 0x400a1c2, indexCPS2_Megaman, 2 },
    { /* 0x125 */ "HK Beat 4", 0x400a1c2, 0x400a1e2, indexCPS2_Megaman, 2 },
    { /* 0x126 */ "HK Beat 5", 0x400a1e2, 0x400a202, indexCPS2_Megaman, 2 },
    { /* 0x127 */ "HK Beat 6", 0x400a202, 0x400a222, indexCPS2_Megaman, 2 },
    { /* 0x128 */ "HK Beat 7", 0x400a222, 0x400a242, indexCPS2_Megaman, 2 },
    { /* 0x129 */ "HK Beat 8", 0x400a242, 0x400a262, indexCPS2_Megaman, 2 },
    { /* 0x12a */ "HK Beat 9", 0x400a262, 0x400a282, indexCPS2_Megaman, 2 },
    { /* 0x12b */ "HK Beat Plane 1", 0x400a282, 0x400a2a2, indexCPS2_Megaman, 36 },
    { /* 0x12c */ "HK Beat Plane 2", 0x400a2a2, 0x400a2c2, indexCPS2_Megaman, 36 },
    { /* 0x12d */ "HK Beat Plane 3", 0x400a2c2, 0x400a2e2, indexCPS2_Megaman, 36 },
    { /* 0x12e */ "HK Beat Plane 4", 0x400a2e2, 0x400a302, indexCPS2_Megaman, 36 },
    { /* 0x12f */ "HK Beat Plane 5", 0x400a302, 0x400a322, indexCPS2_Megaman, 36 },
    { /* 0x130 */ "HK Beat Plane 6", 0x400a322, 0x400a342, indexCPS2_Megaman, 36 },
    { /* 0x131 */ "HK Beat Plane 7", 0x400a342, 0x400a362, indexCPS2_Megaman, 36 },
    { /* 0x132 */ "HK Beat Plane 8", 0x400a362, 0x400a382, indexCPS2_Megaman, 36 },
    { /* 0x133 */ "HK Beat Plane 9", 0x400a382, 0x400a3a2, indexCPS2_Megaman, 36 },
    { /* 0x134 */ "HK charging Roll 1", 0x400a3a2, 0x400a3c2, indexCPS2_Roll, 0 },
    { /* 0x135 */ "HK charging Roll 2", 0x400a3c2, 0x400a3e2, indexCPS2_Roll, 0 },
    { /* 0x136 */ "HK charging Roll 3", 0x400a3e2, 0x400a402, indexCPS2_Roll, 0 },
    { /* 0x137 */ "HK charging Roll 4", 0x400a402, 0x400a422, indexCPS2_Roll, 0 },
    { /* 0x138 */ "HK charging Roll 5", 0x400a422, 0x400a442, indexCPS2_Roll, 0 },
    { /* 0x139 */ "HK charging Roll 6", 0x400a442, 0x400a462, indexCPS2_Roll, 0 },
    { /* 0x13a */ "HK charging Roll 7", 0x400a462, 0x400a482, indexCPS2_Roll, 0 },
    { /* 0x13b */ "HK charging Roll 8", 0x400a482, 0x400a4a2, indexCPS2_Roll, 0 },
    { /* 0x13c */ "HK charging Roll 9", 0x400a4a2, 0x400a4c2, indexCPS2_Roll, 0 },
    { /* 0x13d */ "HK Rush Drill 1", 0x400a4c2, 0x400a4e2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x13e */ "HK Rush Drill 2", 0x400a4e2, 0x400a502, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x13f */ "HK Rush Drill 3", 0x400a502, 0x400a522, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x140 */ "HK Rush Drill 4", 0x400a522, 0x400a542, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x141 */ "HK Rush Drill 5", 0x400a542, 0x400a562, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x142 */ "HK Rush Drill 6", 0x400a562, 0x400a582, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x143 */ "HK Rush Drill 7", 0x400a582, 0x400a5a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x144 */ "HK Rush Drill 8", 0x400a5a2, 0x400a5c2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x145 */ "HK Rush Drill 9", 0x400a5c2, 0x400a5e2, indexCPS2_Roll, 11 },
    { /* 0x146 */ "HK Teleport Intro", 0x400a5e2, 0x400a602, indexCPS2_Megaman, 13 },
    { /* 0x147 */ "HK Dr. Light", 0x400a602, 0x400a622, indexCPS2_Megaman, 37 },
    { /* 0x148 */ "HK Hyper Roll (armor/skin while shooting) 1", 0x400a622, 0x400a642 },
    { /* 0x149 */ "HK Hyper Roll (armor/skin while shooting) 2", 0x400a642, 0x400a662 },
    { /* 0x14a */ "HK Hyper Roll (armor/skin while shooting) 3", 0x400a662, 0x400a682 },
    { /* 0x14b */ "HK Hyper Roll (armor/skin while shooting) 4", 0x400a682, 0x400a6a2 },
    { /* 0x14c */ "HK Hyper Roll (armor/skin while shooting) 5", 0x400a6a2, 0x400a6c2 },
    { /* 0x14d */ "HK Hyper Roll (armor/skin while shooting) 6", 0x400a6c2, 0x400a6e2 },
    { /* 0x14e */ "HK Hyper Roll (armor/skin while shooting) 7", 0x400a6e2, 0x400a702 },
    { /* 0x14f */ "HK Hyper Roll (armor/skin while shooting) 8", 0x400a702, 0x400a722 },
    { /* 0x150 */ "HK Hyper Roll (armor/skin while shooting) 9", 0x400a722, 0x400a742 },
    { /* 0x151 */ "HK Hyper Roll 1", 0x400a742, 0x400a762, indexCPS2_Roll, 0 },
    { /* 0x152 */ "HK Hyper Roll 2", 0x400a762, 0x400a782, indexCPS2_Roll, 0 },
    { /* 0x153 */ "HK Hyper Roll 3", 0x400a782, 0x400a7a2, indexCPS2_Roll, 0 },
    { /* 0x154 */ "HK Hyper Roll 4", 0x400a7a2, 0x400a7c2, indexCPS2_Roll, 0 },
    { /* 0x155 */ "HK Hyper Roll 5", 0x400a7c2, 0x400a7e2, indexCPS2_Roll, 0 },
    { /* 0x156 */ "HK Hyper Roll 6", 0x400a7e2, 0x400a802, indexCPS2_Roll, 0 },
    { /* 0x157 */ "HK Hyper Roll 7", 0x400a802, 0x400a822, indexCPS2_Roll, 0 },
    { /* 0x158 */ "HK Hyper Roll 8", 0x400a822, 0x400a842, indexCPS2_Roll, 0 },
    { /* 0x159 */ "HK Hyper Roll 9", 0x400a842, 0x400a862, indexCPS2_Roll, 0 },
    { /* 0x15a */ "HK Hyper Roll Missiles", 0x400a862, 0x400a882 },
    { /* 0x15b */ "HK Rush Drill metal 1", 0x400a882, 0x400a8a2, indexCPS2_Roll, 12 },
    { /* 0x15c */ "HK Rush Drill metal 2", 0x400a8a2, 0x400a8c2, indexCPS2_Roll, 12 },
    { /* 0x15d */ "HK Rush Drill metal 3", 0x400a8c2, 0x400a8e2, indexCPS2_Roll, 12 },
    { /* 0x15e */ "HK Rush Drill metal 4", 0x400a8e2, 0x400a902, indexCPS2_Roll, 12 },
    { /* 0x15f */ "HK Rush Drill metal 5", 0x400a902, 0x400a922, indexCPS2_Roll, 12 },
    { /* 0x160 */ "HK Rush Drill metal 6", 0x400a922, 0x400a942, indexCPS2_Roll, 12 },
    { /* 0x161 */ "HK Rush Drill metal 7", 0x400a942, 0x400a962, indexCPS2_Roll, 12 },
    { /* 0x162 */ "HK Rush Drill metal 8", 0x400a962, 0x400a982, indexCPS2_Roll, 12 },
    { /* 0x163 */ "HK Megaman", 0x400a982, 0x400a9a2, indexCPS2_Megaman, 0 },
    { /* 0x164 */ "HK Magnetic Shockwave Power Up (MvC1 Ending)", 0x400a9a2, 0x400a9c2, indexCPS2_Megaman, 0 },
    { /* 0x165 */ "A1 Megaman hair (all buttons)", 0x400a9c2, 0x400a9e2, indexCPS2_Megaman, 38 },
    { /* 0x166 */ "A1 Death Animation (all buttons)", 0x400a9e2, 0x400aa02, indexCPS2_Megaman, 11 },
    { /* 0x167 */ "A1 Roll Intro 1", 0x400aa02, 0x400aa22, indexCPS2_Roll, 0 },
    { /* 0x168 */ "A1 Roll Intro 2", 0x400aa22, 0x400aa42, indexCPS2_Roll, 0 },
    { /* 0x169 */ "A1 Roll Intro 3", 0x400aa42, 0x400aa62, indexCPS2_Roll, 0 },
    { /* 0x16a */ "A1 Roll Intro 4", 0x400aa62, 0x400aa82, indexCPS2_Roll, 0 },
    { /* 0x16b */ "A1 Roll Intro 5", 0x400aa82, 0x400aaa2, indexCPS2_Roll, 0 },
    { /* 0x16c */ "A1 Roll Intro 6", 0x400aaa2, 0x400aac2, indexCPS2_Roll, 0 },
    { /* 0x16d */ "A1 Roll Intro 7", 0x400aac2, 0x400aae2, indexCPS2_Roll, 0 },
    { /* 0x16e */ "A1 Roll Intro 8", 0x400aae2, 0x400ab02, indexCPS2_Roll, 0 },
    { /* 0x16f */ "A1 Roll Intro 9", 0x400ab02, 0x400ab22, indexCPS2_Roll, 0 },
    { /* 0x170 */ "A1 Rush 1", 0x400ab22, 0x400ab42, indexCPS2_Megaman, 1 },
    { /* 0x171 */ "A1 Rush 2", 0x400ab42, 0x400ab62, indexCPS2_Megaman, 1 },
    { /* 0x172 */ "A1 Rush 3", 0x400ab62, 0x400ab82, indexCPS2_Megaman, 1 },
    { /* 0x173 */ "A1 Rush 4", 0x400ab82, 0x400aba2, indexCPS2_Megaman, 1 },
    { /* 0x174 */ "A1 Rush 5", 0x400aba2, 0x400abc2, indexCPS2_Megaman, 1 },
    { /* 0x175 */ "A1 Rush 6", 0x400abc2, 0x400abe2, indexCPS2_Megaman, 1 },
    { /* 0x176 */ "A1 Rush 7", 0x400abe2, 0x400ac02, indexCPS2_Megaman, 1 },
    { /* 0x177 */ "A1 Rush 8", 0x400ac02, 0x400ac22, indexCPS2_Megaman, 1 },
    { /* 0x178 */ "A1 Rush 9", 0x400ac22, 0x400ac42, indexCPS2_Megaman, 1 },
    { /* 0x179 */ "A1 Beat 1", 0x400ac42, 0x400ac62, indexCPS2_Megaman, 2 },
    { /* 0x17a */ "A1 Beat 2", 0x400ac62, 0x400ac82, indexCPS2_Megaman, 2 },
    { /* 0x17b */ "A1 Beat 3", 0x400ac82, 0x400aca2, indexCPS2_Megaman, 2 },
    { /* 0x17c */ "A1 Beat 4", 0x400aca2, 0x400acc2, indexCPS2_Megaman, 2 },
    { /* 0x17d */ "A1 Beat 5", 0x400acc2, 0x400ace2, indexCPS2_Megaman, 2 },
    { /* 0x17e */ "A1 Beat 6", 0x400ace2, 0x400ad02, indexCPS2_Megaman, 2 },
    { /* 0x17f */ "A1 Beat 7", 0x400ad02, 0x400ad22, indexCPS2_Megaman, 2 },
    { /* 0x180 */ "A1 Beat 8", 0x400ad22, 0x400ad42, indexCPS2_Megaman, 2 },
    { /* 0x181 */ "A1 Beat 9", 0x400ad42, 0x400ad62, indexCPS2_Megaman, 2 },
    { /* 0x182 */ "A1 Beat Plane 1", 0x400ad62, 0x400ad82, indexCPS2_Megaman, 36 },
    { /* 0x183 */ "A1 Beat Plane 2", 0x400ad82, 0x400ada2, indexCPS2_Megaman, 36 },
    { /* 0x184 */ "A1 Beat Plane 3", 0x400ada2, 0x400adc2, indexCPS2_Megaman, 36 },
    { /* 0x185 */ "A1 Beat Plane 4", 0x400adc2, 0x400ade2, indexCPS2_Megaman, 36 },
    { /* 0x186 */ "A1 Beat Plane 5", 0x400ade2, 0x400ae02, indexCPS2_Megaman, 36 },
    { /* 0x187 */ "A1 Beat Plane 6", 0x400ae02, 0x400ae22, indexCPS2_Megaman, 36 },
    { /* 0x188 */ "A1 Beat Plane 7", 0x400ae22, 0x400ae42, indexCPS2_Megaman, 36 },
    { /* 0x189 */ "A1 Beat Plane 8", 0x400ae42, 0x400ae62, indexCPS2_Megaman, 36 },
    { /* 0x18a */ "A1 Beat Plane 9", 0x400ae62, 0x400ae82, indexCPS2_Megaman, 36 },
    { /* 0x18b */ "A1 charging Roll 1", 0x400ae82, 0x400aea2, indexCPS2_Roll, 0 },
    { /* 0x18c */ "A1 charging Roll 2", 0x400aea2, 0x400aec2, indexCPS2_Roll, 0 },
    { /* 0x18d */ "A1 charging Roll 3", 0x400aec2, 0x400aee2, indexCPS2_Roll, 0 },
    { /* 0x18e */ "A1 charging Roll 4", 0x400aee2, 0x400af02, indexCPS2_Roll, 0 },
    { /* 0x18f */ "A1 charging Roll 5", 0x400af02, 0x400af22, indexCPS2_Roll, 0 },
    { /* 0x190 */ "A1 charging Roll 6", 0x400af22, 0x400af42, indexCPS2_Roll, 0 },
    { /* 0x191 */ "A1 charging Roll 7", 0x400af42, 0x400af62, indexCPS2_Roll, 0 },
    { /* 0x192 */ "A1 charging Roll 8", 0x400af62, 0x400af82, indexCPS2_Roll, 0 },
    { /* 0x193 */ "A1 charging Roll 9", 0x400af82, 0x400afa2, indexCPS2_Roll, 0 },
    { /* 0x194 */ "A1 Rush Drill 1", 0x400afa2, 0x400afc2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x195 */ "A1 Rush Drill 2", 0x400afc2, 0x400afe2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x196 */ "A1 Rush Drill 3", 0x400afe2, 0x400b002, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x197 */ "A1 Rush Drill 4", 0x400b002, 0x400b022, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x198 */ "A1 Rush Drill 5", 0x400b022, 0x400b042, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x199 */ "A1 Rush Drill 6", 0x400b042, 0x400b062, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x19a */ "A1 Rush Drill 7", 0x400b062, 0x400b082, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x19b */ "A1 Rush Drill 8", 0x400b082, 0x400b0a2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x19c */ "A1 Rush Drill 9", 0x400b0a2, 0x400b0c2, indexCPS2_Roll, 11 },
    { /* 0x19d */ "A1 Teleport Intro", 0x400b0c2, 0x400b0e2, indexCPS2_Megaman, 13 },
    { /* 0x19e */ "A1 Dr. Light", 0x400b0e2, 0x400b102, indexCPS2_Megaman, 37 },
    { /* 0x19f */ "A1 Hyper Roll (armor/skin while shooting) 1", 0x400b102, 0x400b122 },
    { /* 0x1a0 */ "A1 Hyper Roll (armor/skin while shooting) 2", 0x400b122, 0x400b142 },
    { /* 0x1a1 */ "A1 Hyper Roll (armor/skin while shooting) 3", 0x400b142, 0x400b162 },
    { /* 0x1a2 */ "A1 Hyper Roll (armor/skin while shooting) 4", 0x400b162, 0x400b182 },
    { /* 0x1a3 */ "A1 Hyper Roll (armor/skin while shooting) 5", 0x400b182, 0x400b1a2 },
    { /* 0x1a4 */ "A1 Hyper Roll (armor/skin while shooting) 6", 0x400b1a2, 0x400b1c2 },
    { /* 0x1a5 */ "A1 Hyper Roll (armor/skin while shooting) 7", 0x400b1c2, 0x400b1e2 },
    { /* 0x1a6 */ "A1 Hyper Roll (armor/skin while shooting) 8", 0x400b1e2, 0x400b202 },
    { /* 0x1a7 */ "A1 Hyper Roll (armor/skin while shooting) 9", 0x400b202, 0x400b222 },
    { /* 0x1a8 */ "A1 Hyper Roll 1", 0x400b222, 0x400b242, indexCPS2_Roll, 0 },
    { /* 0x1a9 */ "A1 Hyper Roll 2", 0x400b242, 0x400b262, indexCPS2_Roll, 0 },
    { /* 0x1aa */ "A1 Hyper Roll 3", 0x400b262, 0x400b282, indexCPS2_Roll, 0 },
    { /* 0x1ab */ "A1 Hyper Roll 4", 0x400b282, 0x400b2a2, indexCPS2_Roll, 0 },
    { /* 0x1ac */ "A1 Hyper Roll 5", 0x400b2a2, 0x400b2c2, indexCPS2_Roll, 0 },
    { /* 0x1ad */ "A1 Hyper Roll 6", 0x400b2c2, 0x400b2e2, indexCPS2_Roll, 0 },
    { /* 0x1ae */ "A1 Hyper Roll 7", 0x400b2e2, 0x400b302, indexCPS2_Roll, 0 },
    { /* 0x1af */ "A1 Hyper Roll 8", 0x400b302, 0x400b322, indexCPS2_Roll, 0 },
    { /* 0x1b0 */ "A1 Hyper Roll 9", 0x400b322, 0x400b342, indexCPS2_Roll, 0 },
    { /* 0x1b1 */ "A1 Hyper Roll Missiles", 0x400b342, 0x400b362 },
    { /* 0x1b2 */ "A1 Rush Drill metal 1", 0x400b362, 0x400b382, indexCPS2_Roll, 12 },
    { /* 0x1b3 */ "A1 Rush Drill metal 2", 0x400b382, 0x400b3a2, indexCPS2_Roll, 12 },
    { /* 0x1b4 */ "A1 Rush Drill metal 3", 0x400b3a2, 0x400b3c2, indexCPS2_Roll, 12 },
    { /* 0x1b5 */ "A1 Rush Drill metal 4", 0x400b3c2, 0x400b3e2, indexCPS2_Roll, 12 },
    { /* 0x1b6 */ "A1 Rush Drill metal 5", 0x400b3e2, 0x400b402, indexCPS2_Roll, 12 },
    { /* 0x1b7 */ "A1 Rush Drill metal 6", 0x400b402, 0x400b422, indexCPS2_Roll, 12 },
    { /* 0x1b8 */ "A1 Rush Drill metal 7", 0x400b422, 0x400b442, indexCPS2_Roll, 12 },
    { /* 0x1b9 */ "A1 Rush Drill metal 8", 0x400b442, 0x400b462, indexCPS2_Roll, 12 },
    { /* 0x1ba */ "A1 Megaman", 0x400b462, 0x400b482, indexCPS2_Megaman, 0 },
    { /* 0x1bb */ "A1 Magnetic Shockwave Power Up (MvC1 Ending)", 0x400b482, 0x400b4a2, indexCPS2_Megaman, 0 },
    { /* 0x1bc */ "A2 Megaman hair (all buttons)", 0x400b4a2, 0x400b4c2, indexCPS2_Megaman, 38 },
    { /* 0x1bd */ "A2 Death Animation (all buttons)", 0x400b4c2, 0x400b4e2, indexCPS2_Megaman, 11 },
    { /* 0x1be */ "A2 Roll Intro 1", 0x400b4e2, 0x400b502, indexCPS2_Roll, 0 },
    { /* 0x1bf */ "A2 Roll Intro 2", 0x400b502, 0x400b522, indexCPS2_Roll, 0 },
    { /* 0x1c0 */ "A2 Roll Intro 3", 0x400b522, 0x400b542, indexCPS2_Roll, 0 },
    { /* 0x1c1 */ "A2 Roll Intro 4", 0x400b542, 0x400b562, indexCPS2_Roll, 0 },
    { /* 0x1c2 */ "A2 Roll Intro 5", 0x400b562, 0x400b582, indexCPS2_Roll, 0 },
    { /* 0x1c3 */ "A2 Roll Intro 6", 0x400b582, 0x400b5a2, indexCPS2_Roll, 0 },
    { /* 0x1c4 */ "A2 Roll Intro 7", 0x400b5a2, 0x400b5c2, indexCPS2_Roll, 0 },
    { /* 0x1c5 */ "A2 Roll Intro 8", 0x400b5c2, 0x400b5e2, indexCPS2_Roll, 0 },
    { /* 0x1c6 */ "A2 Roll Intro 9", 0x400b5e2, 0x400b602, indexCPS2_Roll, 0 },
    { /* 0x1c7 */ "A2 Rush 1", 0x400b602, 0x400b622, indexCPS2_Megaman, 1 },
    { /* 0x1c8 */ "A2 Rush 2", 0x400b622, 0x400b642, indexCPS2_Megaman, 1 },
    { /* 0x1c9 */ "A2 Rush 3", 0x400b642, 0x400b662, indexCPS2_Megaman, 1 },
    { /* 0x1ca */ "A2 Rush 4", 0x400b662, 0x400b682, indexCPS2_Megaman, 1 },
    { /* 0x1cb */ "A2 Rush 5", 0x400b682, 0x400b6a2, indexCPS2_Megaman, 1 },
    { /* 0x1cc */ "A2 Rush 6", 0x400b6a2, 0x400b6c2, indexCPS2_Megaman, 1 },
    { /* 0x1cd */ "A2 Rush 7", 0x400b6c2, 0x400b6e2, indexCPS2_Megaman, 1 },
    { /* 0x1ce */ "A2 Rush 8", 0x400b6e2, 0x400b702, indexCPS2_Megaman, 1 },
    { /* 0x1cf */ "A2 Rush 9", 0x400b702, 0x400b722, indexCPS2_Megaman, 1 },
    { /* 0x1d0 */ "A2 Beat 1", 0x400b722, 0x400b742, indexCPS2_Megaman, 2 },
    { /* 0x1d1 */ "A2 Beat 2", 0x400b742, 0x400b762, indexCPS2_Megaman, 2 },
    { /* 0x1d2 */ "A2 Beat 3", 0x400b762, 0x400b782, indexCPS2_Megaman, 2 },
    { /* 0x1d3 */ "A2 Beat 4", 0x400b782, 0x400b7a2, indexCPS2_Megaman, 2 },
    { /* 0x1d4 */ "A2 Beat 5", 0x400b7a2, 0x400b7c2, indexCPS2_Megaman, 2 },
    { /* 0x1d5 */ "A2 Beat 6", 0x400b7c2, 0x400b7e2, indexCPS2_Megaman, 2 },
    { /* 0x1d6 */ "A2 Beat 7", 0x400b7e2, 0x400b802, indexCPS2_Megaman, 2 },
    { /* 0x1d7 */ "A2 Beat 8", 0x400b802, 0x400b822, indexCPS2_Megaman, 2 },
    { /* 0x1d8 */ "A2 Beat 9", 0x400b822, 0x400b842, indexCPS2_Megaman, 2 },
    { /* 0x1d9 */ "A2 Beat Plane 1", 0x400b842, 0x400b862, indexCPS2_Megaman, 36 },
    { /* 0x1da */ "A2 Beat Plane 2", 0x400b862, 0x400b882, indexCPS2_Megaman, 36 },
    { /* 0x1db */ "A2 Beat Plane 3", 0x400b882, 0x400b8a2, indexCPS2_Megaman, 36 },
    { /* 0x1dc */ "A2 Beat Plane 4", 0x400b8a2, 0x400b8c2, indexCPS2_Megaman, 36 },
    { /* 0x1dd */ "A2 Beat Plane 5", 0x400b8c2, 0x400b8e2, indexCPS2_Megaman, 36 },
    { /* 0x1de */ "A2 Beat Plane 6", 0x400b8e2, 0x400b902, indexCPS2_Megaman, 36 },
    { /* 0x1df */ "A2 Beat Plane 7", 0x400b902, 0x400b922, indexCPS2_Megaman, 36 },
    { /* 0x1e0 */ "A2 Beat Plane 8", 0x400b922, 0x400b942, indexCPS2_Megaman, 36 },
    { /* 0x1e1 */ "A2 Beat Plane 9", 0x400b942, 0x400b962, indexCPS2_Megaman, 36 },
    { /* 0x1e2 */ "A2 charging Roll 1", 0x400b962, 0x400b982, indexCPS2_Roll, 0 },
    { /* 0x1e3 */ "A2 charging Roll 2", 0x400b982, 0x400b9a2, indexCPS2_Roll, 0 },
    { /* 0x1e4 */ "A2 charging Roll 3", 0x400b9a2, 0x400b9c2, indexCPS2_Roll, 0 },
    { /* 0x1e5 */ "A2 charging Roll 4", 0x400b9c2, 0x400b9e2, indexCPS2_Roll, 0 },
    { /* 0x1e6 */ "A2 charging Roll 5", 0x400b9e2, 0x400ba02, indexCPS2_Roll, 0 },
    { /* 0x1e7 */ "A2 charging Roll 6", 0x400ba02, 0x400ba22, indexCPS2_Roll, 0 },
    { /* 0x1e8 */ "A2 charging Roll 7", 0x400ba22, 0x400ba42, indexCPS2_Roll, 0 },
    { /* 0x1e9 */ "A2 charging Roll 8", 0x400ba42, 0x400ba62, indexCPS2_Roll, 0 },
    { /* 0x1ea */ "A2 charging Roll 9", 0x400ba62, 0x400ba82, indexCPS2_Roll, 0 },
    { /* 0x1eb */ "A2 Rush Drill 1", 0x400ba82, 0x400baa2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ec */ "A2 Rush Drill 2", 0x400baa2, 0x400bac2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ed */ "A2 Rush Drill 3", 0x400bac2, 0x400bae2, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ee */ "A2 Rush Drill 4", 0x400bae2, 0x400bb02, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1ef */ "A2 Rush Drill 5", 0x400bb02, 0x400bb22, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f0 */ "A2 Rush Drill 6", 0x400bb22, 0x400bb42, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f1 */ "A2 Rush Drill 7", 0x400bb42, 0x400bb62, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f2 */ "A2 Rush Drill 8", 0x400bb62, 0x400bb82, indexCPS2_Roll, 11, &pairRushDrill },
    { /* 0x1f3 */ "A2 Rush Drill 9", 0x400bb82, 0x400bba2, indexCPS2_Roll, 11 },
    { /* 0x1f4 */ "A2 Teleport Intro", 0x400bba2, 0x400bbc2, indexCPS2_Megaman, 13 },
    { /* 0x1f5 */ "A2 Dr. Light", 0x400bbc2, 0x400bbe2, indexCPS2_Megaman, 37 },
    { /* 0x1f6 */ "A2 Hyper Roll (armor/skin while shooting) 1", 0x400bbe2, 0x400bc02 },
    { /* 0x1f7 */ "A2 Hyper Roll (armor/skin while shooting) 2", 0x400bc02, 0x400bc22 },
    { /* 0x1f8 */ "A2 Hyper Roll (armor/skin while shooting) 3", 0x400bc22, 0x400bc42 },
    { /* 0x1f9 */ "A2 Hyper Roll (armor/skin while shooting) 4", 0x400bc42, 0x400bc62 },
    { /* 0x1fa */ "A2 Hyper Roll (armor/skin while shooting) 5", 0x400bc62, 0x400bc82 },
    { /* 0x1fb */ "A2 Hyper Roll (armor/skin while shooting) 6", 0x400bc82, 0x400bca2 },
    { /* 0x1fc */ "A2 Hyper Roll (armor/skin while shooting) 7", 0x400bca2, 0x400bcc2 },
    { /* 0x1fd */ "A2 Hyper Roll (armor/skin while shooting) 8", 0x400bcc2, 0x400bce2 },
    { /* 0x1fe */ "A2 Hyper Roll (armor/skin while shooting) 9", 0x400bce2, 0x400bd02 },
    { /* 0x1ff */ "A2 Hyper Roll 1", 0x400bd02, 0x400bd22, indexCPS2_Roll, 0 },
    { /* 0x200 */ "A2 Hyper Roll 2", 0x400bd22, 0x400bd42, indexCPS2_Roll, 0 },
    { /* 0x201 */ "A2 Hyper Roll 3", 0x400bd42, 0x400bd62, indexCPS2_Roll, 0 },
    { /* 0x202 */ "A2 Hyper Roll 4", 0x400bd62, 0x400bd82, indexCPS2_Roll, 0 },
    { /* 0x203 */ "A2 Hyper Roll 5", 0x400bd82, 0x400bda2, indexCPS2_Roll, 0 },
    { /* 0x204 */ "A2 Hyper Roll 6", 0x400bda2, 0x400bdc2, indexCPS2_Roll, 0 },
    { /* 0x205 */ "A2 Hyper Roll 7", 0x400bdc2, 0x400bde2, indexCPS2_Roll, 0 },
    { /* 0x206 */ "A2 Hyper Roll 8", 0x400bde2, 0x400be02, indexCPS2_Roll, 0 },
    { /* 0x207 */ "A2 Hyper Roll 9", 0x400be02, 0x400be22, indexCPS2_Roll, 0 },
    { /* 0x208 */ "A2 Hyper Roll Missiles", 0x400be22, 0x400be42 },
    { /* 0x209 */ "A2 Rush Drill metal 1", 0x400be42, 0x400be62, indexCPS2_Roll, 12 },
    { /* 0x20a */ "A2 Rush Drill metal 2", 0x400be62, 0x400be82, indexCPS2_Roll, 12 },
    { /* 0x20b */ "A2 Rush Drill metal 3", 0x400be82, 0x400bea2, indexCPS2_Roll, 12 },
    { /* 0x20c */ "A2 Rush Drill metal 4", 0x400bea2, 0x400bec2, indexCPS2_Roll, 12 },
    { /* 0x20d */ "A2 Rush Drill metal 5", 0x400bec2, 0x400bee2, indexCPS2_Roll, 12 },
    { /* 0x20e */ "A2 Rush Drill metal 6", 0x400bee2, 0x400bf02, indexCPS2_Roll, 12 },
    { /* 0x20f */ "A2 Rush Drill metal 7", 0x400bf02, 0x400bf22, indexCPS2_Roll, 12 },
    { /* 0x210 */ "A2 Rush Drill metal 8", 0x400bf22, 0x400bf42, indexCPS2_Roll, 12 },
    { /* 0x211 */ "A2 Megaman", 0x400bf42, 0x400bf62, indexCPS2_Megaman, 0 },
};

const sDescTreeNode MVC2_A_ROLL_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_LP, ARRAYSIZE(MVC2_A_ROLL_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_LK, ARRAYSIZE(MVC2_A_ROLL_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_HP, ARRAYSIZE(MVC2_A_ROLL_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_HK, ARRAYSIZE(MVC2_A_ROLL_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_A1, ARRAYSIZE(MVC2_A_ROLL_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_A2, ARRAYSIZE(MVC2_A_ROLL_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ROLL_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ROLL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_LP[] =
{
    { "Main Color LP", 0x4090ce2, 0x4090d02, indexCPS2_Akuma, 0 },
    { "(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4090d02, 0x4090d22, indexCPS2_Akuma, 1 },
    { "(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4090d22, 0x4090d42, indexCPS2_Akuma, 2 },
    { "(04) Not Used", 0x4090d42, 0x4090d62, indexCPS2_Akuma, 3 },
    { "(05) Not Used", 0x4090d62, 0x4090d82, indexCPS2_Akuma, 4 },
    { "(06) Not Used", 0x4090d82, 0x4090da2, indexCPS2_Akuma, 5 },
    { "(07) Not Used", 0x4090da2, 0x4090dc2, indexCPS2_Akuma, 6 },
    { "(08) Not Used", 0x4090dc2, 0x4090de2, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_LK[] =
{
    { "Main Color LK", 0x4090de2, 0x4090e02, indexCPS2_Akuma, 0 },
    { "(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4090e02, 0x4090e22, indexCPS2_Akuma, 1 },
    { "(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4090e22, 0x4090e42, indexCPS2_Akuma, 2 },
    { "(04) Not Used", 0x4090e42, 0x4090e62, indexCPS2_Akuma, 3 },
    { "(05) Not Used", 0x4090e62, 0x4090e82, indexCPS2_Akuma, 4 },
    { "(06) Not Used", 0x4090e82, 0x4090ea2, indexCPS2_Akuma, 5 },
    { "(07) Not Used", 0x4090ea2, 0x4090ec2, indexCPS2_Akuma, 6 },
    { "(08) Not Used", 0x4090ec2, 0x4090ee2, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_HP[] =
{
    { "Main Color HP", 0x4090ee2, 0x4090f02, indexCPS2_Akuma, 0 },
    { "(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4090f02, 0x4090f22, indexCPS2_Akuma, 1 },
    { "(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4090f22, 0x4090f42, indexCPS2_Akuma, 2 },
    { "(04) Not Used", 0x4090f42, 0x4090f62, indexCPS2_Akuma, 3 },
    { "(05) Not Used", 0x4090f62, 0x4090f82, indexCPS2_Akuma, 4 },
    { "(06) Not Used", 0x4090f82, 0x4090fa2, indexCPS2_Akuma, 5 },
    { "(07) Not Used", 0x4090fa2, 0x4090fc2, indexCPS2_Akuma, 6 },
    { "(08) Not Used", 0x4090fc2, 0x4090fe2, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_HK[] =
{
    { "Main Color HK", 0x4090fe2, 0x4091002, indexCPS2_Akuma, 0 },
    { "(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4091002, 0x4091022, indexCPS2_Akuma, 1 },
    { "(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4091022, 0x4091042, indexCPS2_Akuma, 2 },
    { "(04) Not Used", 0x4091042, 0x4091062, indexCPS2_Akuma, 3 },
    { "(05) Not Used", 0x4091062, 0x4091082, indexCPS2_Akuma, 4 },
    { "(06) Not Used", 0x4091082, 0x40910a2, indexCPS2_Akuma, 5 },
    { "(07) Not Used", 0x40910a2, 0x40910c2, indexCPS2_Akuma, 6 },
    { "(08) Not Used", 0x40910c2, 0x40910e2, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_A1[] =
{
    { "Main Color A1", 0x40910e2, 0x4091102, indexCPS2_Akuma, 0 },
    { "(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4091102, 0x4091122, indexCPS2_Akuma, 1 },
    { "(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4091122, 0x4091142, indexCPS2_Akuma, 2 },
    { "(04) Not Used", 0x4091142, 0x4091162, indexCPS2_Akuma, 3 },
    { "(05) Not Used", 0x4091162, 0x4091182, indexCPS2_Akuma, 4 },
    { "(06) Not Used", 0x4091182, 0x40911a2, indexCPS2_Akuma, 5 },
    { "(07) Not Used", 0x40911a2, 0x40911c2, indexCPS2_Akuma, 6 },
    { "(08) Not Used", 0x40911c2, 0x40911e2, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_A2[] =
{
    { "Main Color A2", 0x40911e2, 0x4091202, indexCPS2_Akuma, 0 },
    { "(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4091202, 0x4091222, indexCPS2_Akuma, 1 },
    { "(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4091222, 0x4091242, indexCPS2_Akuma, 2 },
    { "(04) Not Used", 0x4091242, 0x4091262, indexCPS2_Akuma, 3 },
    { "(05) Not Used", 0x4091262, 0x4091282, indexCPS2_Akuma, 4 },
    { "(06) Not Used", 0x4091282, 0x40912a2, indexCPS2_Akuma, 5 },
    { "(07) Not Used", 0x40912a2, 0x40912c2, indexCPS2_Akuma, 6 },
    { "(08) Not Used", 0x40912c2, 0x40912e2, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x40912e2, 0x4091302, indexCPS2_Akuma, 0 },
    { "Burning Light", 0x4091302, 0x4091322, indexCPS2_Akuma, 0 },
    { "Shocked Dark", 0x4091322, 0x4091342, indexCPS2_Akuma, 0 },
    { "Shocked Light", 0x4091342, 0x4091362, indexCPS2_Akuma, 0 },
    { "Dark Burning Dark", 0x4091362, 0x4091382, indexCPS2_Akuma, 0 },
    { "Dark Burning Light", 0x4091382, 0x40913a2, indexCPS2_Akuma, 0 },
    { "Kinetic Charge Dark", 0x40913a2, 0x40913c2, indexCPS2_Akuma, 0 },
    { "Kinetic Charge Light", 0x40913c2, 0x40913e2, indexCPS2_Akuma, 0 },
};

const sDescTreeNode MVC2_A_GOUKI_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_LP, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_LK, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_HP, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_HK, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_A1, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_A2, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_SHARED, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_LP[] =
{
    { "Main Color LP", 0x41aae62, 0x41aae82, indexCPS2_BBHood, 0 },
    { "(02) Dog / Butterflies", 0x41aae82, 0x41aaea2, indexCPS2_BBHood, 1 },
    { "(03) Mines / Uzi / Missiles", 0x41aaea2, 0x41aaec2, indexCPS2_BBHood, 2 },
    { "(04) ID:01-08 Apples ID:09-15: Apples", 0x41aaec2, 0x41aaee2, indexCPS2_BBHood, 3 },
    { "(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41aaee2, 0x41aaf02, indexCPS2_BBHood, 4 },
    { "(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41aaf02, 0x41aaf22, indexCPS2_BBHood, 5 },
    { "(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41aaf22, 0x41aaf42, indexCPS2_BBHood, 6 },
    { "(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41aaf42, 0x41aaf62, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_LK[] =
{
    { "Main Color LK", 0x41aaf62, 0x41aaf82, indexCPS2_BBHood, 0 },
    { "(02) Dog / Butterflies", 0x41aaf82, 0x41aafa2, indexCPS2_BBHood, 1 },
    { "(03) Mines / Uzi / Missiles", 0x41aafa2, 0x41aafc2, indexCPS2_BBHood, 2 },
    { "(04) ID:01-08 Apples ID:09-15: Apples", 0x41aafc2, 0x41aafe2, indexCPS2_BBHood, 3 },
    { "(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41aafe2, 0x41ab002, indexCPS2_BBHood, 4 },
    { "(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab002, 0x41ab022, indexCPS2_BBHood, 5 },
    { "(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab022, 0x41ab042, indexCPS2_BBHood, 6 },
    { "(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab042, 0x41ab062, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_HP[] =
{
    { "Main Color HP", 0x41ab062, 0x41ab082, indexCPS2_BBHood, 0 },
    { "(02) Dog / Butterflies", 0x41ab082, 0x41ab0a2, indexCPS2_BBHood, 1 },
    { "(03) Mines / Uzi / Missiles", 0x41ab0a2, 0x41ab0c2, indexCPS2_BBHood, 2 },
    { "(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab0c2, 0x41ab0e2, indexCPS2_BBHood, 3 },
    { "(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab0e2, 0x41ab102, indexCPS2_BBHood, 4 },
    { "(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab102, 0x41ab122, indexCPS2_BBHood, 5 },
    { "(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab122, 0x41ab142, indexCPS2_BBHood, 6 },
    { "(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab142, 0x41ab162, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_HK[] =
{
    { "Main Color HK", 0x41ab162, 0x41ab182, indexCPS2_BBHood, 0 },
    { "(02) Dog / Butterflies", 0x41ab182, 0x41ab1a2, indexCPS2_BBHood, 1 },
    { "(03) Mines / Uzi / Missiles", 0x41ab1a2, 0x41ab1c2, indexCPS2_BBHood, 2 },
    { "(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab1c2, 0x41ab1e2, indexCPS2_BBHood, 3 },
    { "(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab1e2, 0x41ab202, indexCPS2_BBHood, 4 },
    { "(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab202, 0x41ab222, indexCPS2_BBHood, 5 },
    { "(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab222, 0x41ab242, indexCPS2_BBHood, 6 },
    { "(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab242, 0x41ab262, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_A1[] =
{
    { "Main Color A1", 0x41ab262, 0x41ab282, indexCPS2_BBHood, 0 },
    { "(02) Dog / Butterflies", 0x41ab282, 0x41ab2a2, indexCPS2_BBHood, 1 },
    { "(03) Mines / Uzi / Missiles", 0x41ab2a2, 0x41ab2c2, indexCPS2_BBHood, 2 },
    { "(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab2c2, 0x41ab2e2, indexCPS2_BBHood, 3 },
    { "(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab2e2, 0x41ab302, indexCPS2_BBHood, 4 },
    { "(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab302, 0x41ab322, indexCPS2_BBHood, 5 },
    { "(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab322, 0x41ab342, indexCPS2_BBHood, 6 },
    { "(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab342, 0x41ab362, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_A2[] =
{
    { "Main Color A2", 0x41ab362, 0x41ab382, indexCPS2_BBHood, 0 },
    { "(02) Dog / Butterflies", 0x41ab382, 0x41ab3a2, indexCPS2_BBHood, 1 },
    { "(03) Mines / Uzi / Missiles", 0x41ab3a2, 0x41ab3c2, indexCPS2_BBHood, 2 },
    { "(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab3c2, 0x41ab3e2, indexCPS2_BBHood, 3 },
    { "(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab3e2, 0x41ab402, indexCPS2_BBHood, 4 },
    { "(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab402, 0x41ab422, indexCPS2_BBHood, 5 },
    { "(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab422, 0x41ab442, indexCPS2_BBHood, 6 },
    { "(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab442, 0x41ab462, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x41ab462, 0x41ab482, indexCPS2_BBHood, 0 },
    { "Burning Light", 0x41ab482, 0x41ab4a2, indexCPS2_BBHood, 0 },
    { "Shocked Dark", 0x41ab4a2, 0x41ab4c2, indexCPS2_BBHood, 0 },
    { "Shocked Light", 0x41ab4c2, 0x41ab4e2, indexCPS2_BBHood, 0 },
    { "Dark Burning Dark", 0x41ab4e2, 0x41ab502, indexCPS2_BBHood, 0 },
    { "Dark Burning Light", 0x41ab502, 0x41ab522, indexCPS2_BBHood, 0 },
    { "Kinetic Charge Dark", 0x41ab522, 0x41ab542, indexCPS2_BBHood, 0 },
    { "Kinetic Charge Light", 0x41ab542, 0x41ab562, indexCPS2_BBHood, 0 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x41ab562, 0x41ab582 },
    { /* 0x0a */ "Not Used", 0x41ab582, 0x41ab5a2 },
    { /* 0x0b */ "Not Used", 0x41ab5a2, 0x41ab5c2 },
    { /* 0x0c */ "LP Cruel Hunting", 0x41ab5c2, 0x41ab5e2 },
    { /* 0x0d */ "LK Cruel Hunting", 0x41ab5e2, 0x41ab602 },
    { /* 0x0e */ "HP Cruel Hunting", 0x41ab602, 0x41ab622 },
    { /* 0x0f */ "HK Cruel Hunting", 0x41ab622, 0x41ab642 },
    { /* 0x10 */ "A1 Cruel Hunting", 0x41ab642, 0x41ab662 },
    { /* 0x11 */ "A2 Cruel Hunting", 0x41ab662, 0x41ab682 },
    { /* 0x12 */ "Not Used", 0x41ab682, 0x41ab6a2 },
    { /* 0x13 */ "Not Used", 0x41ab6a2, 0x41ab6c2 },
    { /* 0x14 */ "Man in suit", 0x41ab6c2, 0x41ab6e2 },
};

const sDescTreeNode MVC2_A_BBHOOD_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_LP, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_LK, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_HP, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_HK, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_A1, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_A2, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_LP[] =
{
    { "Main Color LP", 0x42d2082, 0x42d20a2, indexCPS2_Felicia, 0 },
    { "(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d20a2, 0x42d20c2, indexCPS2_Felicia, 1 },
    { "(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d20c2, 0x42d20e2, indexCPS2_Felicia, 2 },
    { "(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d20e2, 0x42d2102, indexCPS2_Felicia, 3 },
    { "(05) Not Used", 0x42d2102, 0x42d2122, indexCPS2_Felicia, 4 },
    { "(06) Not Used", 0x42d2122, 0x42d2142, indexCPS2_Felicia, 5 },
    { "(07) Not Used", 0x42d2142, 0x42d2162, indexCPS2_Felicia, 6 },
    { "(08) Not Used", 0x42d2162, 0x42d2182, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_LK[] =
{
    { "Main Color LK", 0x42d2182, 0x42d21a2, indexCPS2_Felicia, 0 },
    { "(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d21a2, 0x42d21c2, indexCPS2_Felicia, 1 },
    { "(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d21c2, 0x42d21e2, indexCPS2_Felicia, 2 },
    { "(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d21e2, 0x42d2202, indexCPS2_Felicia, 3 },
    { "(05) Not Used", 0x42d2202, 0x42d2222, indexCPS2_Felicia, 4 },
    { "(06) Not Used", 0x42d2222, 0x42d2242, indexCPS2_Felicia, 5 },
    { "(07) Not Used", 0x42d2242, 0x42d2262, indexCPS2_Felicia, 6 },
    { "(08) Not Used", 0x42d2262, 0x42d2282, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_HP[] =
{
    { "Main Color HP", 0x42d2282, 0x42d22a2, indexCPS2_Felicia, 0 },
    { "(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d22a2, 0x42d22c2, indexCPS2_Felicia, 1 },
    { "(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d22c2, 0x42d22e2, indexCPS2_Felicia, 2 },
    { "(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d22e2, 0x42d2302, indexCPS2_Felicia, 3 },
    { "(05) Not Used", 0x42d2302, 0x42d2322, indexCPS2_Felicia, 4 },
    { "(06) Not Used", 0x42d2322, 0x42d2342, indexCPS2_Felicia, 5 },
    { "(07) Not Used", 0x42d2342, 0x42d2362, indexCPS2_Felicia, 6 },
    { "(08) Not Used", 0x42d2362, 0x42d2382, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_HK[] =
{
    { "Main Color HK", 0x42d2382, 0x42d23a2, indexCPS2_Felicia, 0 },
    { "(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d23a2, 0x42d23c2, indexCPS2_Felicia, 1 },
    { "(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d23c2, 0x42d23e2, indexCPS2_Felicia, 2 },
    { "(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d23e2, 0x42d2402, indexCPS2_Felicia, 3 },
    { "(05) Not Used", 0x42d2402, 0x42d2422, indexCPS2_Felicia, 4 },
    { "(06) Not Used", 0x42d2422, 0x42d2442, indexCPS2_Felicia, 5 },
    { "(07) Not Used", 0x42d2442, 0x42d2462, indexCPS2_Felicia, 6 },
    { "(08) Not Used", 0x42d2462, 0x42d2482, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_A1[] =
{
    { "Main Color A1", 0x42d2482, 0x42d24a2, indexCPS2_Felicia, 0 },
    { "(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d24a2, 0x42d24c2, indexCPS2_Felicia, 1 },
    { "(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d24c2, 0x42d24e2, indexCPS2_Felicia, 2 },
    { "(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d24e2, 0x42d2502, indexCPS2_Felicia, 3 },
    { "(05) Not Used", 0x42d2502, 0x42d2522, indexCPS2_Felicia, 4 },
    { "(06) Not Used", 0x42d2522, 0x42d2542, indexCPS2_Felicia, 5 },
    { "(07) Not Used", 0x42d2542, 0x42d2562, indexCPS2_Felicia, 6 },
    { "(08) Not Used", 0x42d2562, 0x42d2582, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_A2[] =
{
    { "Main Color A2", 0x42d2582, 0x42d25a2, indexCPS2_Felicia, 0 },
    { "(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d25a2, 0x42d25c2, indexCPS2_Felicia, 1 },
    { "(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d25c2, 0x42d25e2, indexCPS2_Felicia, 2 },
    { "(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d25e2, 0x42d2602, indexCPS2_Felicia, 3 },
    { "(05) Not Used", 0x42d2602, 0x42d2622, indexCPS2_Felicia, 4 },
    { "(06) Not Used", 0x42d2622, 0x42d2642, indexCPS2_Felicia, 5 },
    { "(07) Not Used", 0x42d2642, 0x42d2662, indexCPS2_Felicia, 6 },
    { "(08) Not Used", 0x42d2662, 0x42d2682, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x42d2682, 0x42d26a2, indexCPS2_Felicia, 0 },
    { "Burning Light", 0x42d26a2, 0x42d26c2, indexCPS2_Felicia, 0 },
    { "Shocked Dark", 0x42d26c2, 0x42d26e2, indexCPS2_Felicia, 0 },
    { "Shocked Light", 0x42d26e2, 0x42d2702, indexCPS2_Felicia, 0 },
    { "Dark Burning Dark", 0x42d2702, 0x42d2722, indexCPS2_Felicia, 0 },
    { "Dark Burning Light", 0x42d2722, 0x42d2742, indexCPS2_Felicia, 0 },
    { "Kinetic Charge Dark", 0x42d2742, 0x42d2762, indexCPS2_Felicia, 0 },
    { "Kinetic Charge Light", 0x42d2762, 0x42d2782, indexCPS2_Felicia, 0 },
};

const sDescTreeNode MVC2_A_FELICIA_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_LP, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_LK, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_HP, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_HK, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_A1, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_A2, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_LP[] =
{
    { "Main Color LP", 0x433f102, 0x433f122, indexCPS2_Charlie, 0 },
    { "(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f122, 0x433f142, indexCPS2_Charlie, 1 },
    { "(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f142, 0x433f162, indexCPS2_Charlie, 2 },
    { "(04) Not Used", 0x433f162, 0x433f182, indexCPS2_Charlie, 3 },
    { "(05) Not Used", 0x433f182, 0x433f1a2, indexCPS2_Charlie, 4 },
    { "(06) Not Used", 0x433f1a2, 0x433f1c2, indexCPS2_Charlie, 5 },
    { "(07) Not Used", 0x433f1c2, 0x433f1e2, indexCPS2_Charlie, 6 },
    { "(08) Not Used", 0x433f1e2, 0x433f202, indexCPS2_Charlie, 7 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_LK[] =
{
    { "Main Color LK", 0x433f202, 0x433f222, indexCPS2_Charlie, 0 },
    { "(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f222, 0x433f242, indexCPS2_Charlie, 1 },
    { "(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f242, 0x433f262, indexCPS2_Charlie, 2 },
    { "(04) Not Used", 0x433f262, 0x433f282, indexCPS2_Charlie, 3 },
    { "(05) Not Used", 0x433f282, 0x433f2a2, indexCPS2_Charlie, 4 },
    { "(06) Not Used", 0x433f2a2, 0x433f2c2, indexCPS2_Charlie, 5 },
    { "(07) Not Used", 0x433f2c2, 0x433f2e2, indexCPS2_Charlie, 6 },
    { "(08) Not Used", 0x433f2e2, 0x433f302, indexCPS2_Charlie, 7 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_HP[] =
{
    { "Main Color HP", 0x433f302, 0x433f322, indexCPS2_Charlie, 0 },
    { "(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f322, 0x433f342, indexCPS2_Charlie, 1 },
    { "(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f342, 0x433f362, indexCPS2_Charlie, 2 },
    { "(04) Not Used", 0x433f362, 0x433f382, indexCPS2_Charlie, 3 },
    { "(05) Not Used", 0x433f382, 0x433f3a2, indexCPS2_Charlie, 4 },
    { "(06) Not Used", 0x433f3a2, 0x433f3c2, indexCPS2_Charlie, 5 },
    { "(07) Not Used", 0x433f3c2, 0x433f3e2, indexCPS2_Charlie, 6 },
    { "(08) Not Used", 0x433f3e2, 0x433f402, indexCPS2_Charlie, 7 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_HK[] =
{
    { "Main Color HK", 0x433f402, 0x433f422, indexCPS2_Charlie, 0 },
    { "(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f422, 0x433f442, indexCPS2_Charlie, 1 },
    { "(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f442, 0x433f462, indexCPS2_Charlie, 2 },
    { "(04) Not Used", 0x433f462, 0x433f482, indexCPS2_Charlie, 3 },
    { "(05) Not Used", 0x433f482, 0x433f4a2, indexCPS2_Charlie, 4 },
    { "(06) Not Used", 0x433f4a2, 0x433f4c2, indexCPS2_Charlie, 5 },
    { "(07) Not Used", 0x433f4c2, 0x433f4e2, indexCPS2_Charlie, 6 },
    { "(08) Not Used", 0x433f4e2, 0x433f502, indexCPS2_Charlie, 7 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_A1[] =
{
    { "Main Color A1", 0x433f502, 0x433f522, indexCPS2_Charlie, 0 },
    { "(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f522, 0x433f542, indexCPS2_Charlie, 1 },
    { "(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f542, 0x433f562, indexCPS2_Charlie, 2 },
    { "(04) Not Used", 0x433f562, 0x433f582, indexCPS2_Charlie, 3 },
    { "(05) Not Used", 0x433f582, 0x433f5a2, indexCPS2_Charlie, 4 },
    { "(06) Not Used", 0x433f5a2, 0x433f5c2, indexCPS2_Charlie, 5 },
    { "(07) Not Used", 0x433f5c2, 0x433f5e2, indexCPS2_Charlie, 6 },
    { "(08) Not Used", 0x433f5e2, 0x433f602, indexCPS2_Charlie, 7 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_A2[] =
{
    { "Main Color A2", 0x433f602, 0x433f622, indexCPS2_Charlie, 0 },
    { "(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f622, 0x433f642, indexCPS2_Charlie, 1 },
    { "(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f642, 0x433f662, indexCPS2_Charlie, 2 },
    { "(04) Not Used", 0x433f662, 0x433f682, indexCPS2_Charlie, 3 },
    { "(05) Not Used", 0x433f682, 0x433f6a2, indexCPS2_Charlie, 4 },
    { "(06) Not Used", 0x433f6a2, 0x433f6c2, indexCPS2_Charlie, 5 },
    { "(07) Not Used", 0x433f6c2, 0x433f6e2, indexCPS2_Charlie, 6 },
    { "(08) Not Used", 0x433f6e2, 0x433f702, indexCPS2_Charlie, 7 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x433f702, 0x433f722, indexCPS2_Charlie, 0 },
    { "Burning Light", 0x433f722, 0x433f742, indexCPS2_Charlie, 0 },
    { "Shocked Dark", 0x433f742, 0x433f762, indexCPS2_Charlie, 0 },
    { "Shocked Light", 0x433f762, 0x433f782, indexCPS2_Charlie, 0 },
    { "Dark Burning Dark", 0x433f782, 0x433f7a2, indexCPS2_Charlie, 0 },
    { "Dark Burning Light", 0x433f7a2, 0x433f7c2, indexCPS2_Charlie, 0 },
    { "Kinetic Charge Dark", 0x433f7c2, 0x433f7e2, indexCPS2_Charlie, 0 },
    { "Kinetic Charge Light", 0x433f7e2, 0x433f802, indexCPS2_Charlie, 0 },
};

const sDescTreeNode MVC2_A_CHARLIE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_LP, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_LK, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_HP, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_HK, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_A1, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_A2, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_LP[] =
{
    { "Main Color LP", 0x4405b62, 0x4405b82, indexCPS2_Sakura, 0 },
    { "(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405b82, 0x4405ba2, indexCPS2_Sakura, 1 },
    { "(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405ba2, 0x4405bc2, indexCPS2_Sakura, 2 },
    { "(04) Not Used", 0x4405bc2, 0x4405be2, indexCPS2_Sakura, 3 },
    { "(05) Not Used", 0x4405be2, 0x4405c02, indexCPS2_Sakura, 4 },
    { "(06) Not Used", 0x4405c02, 0x4405c22, indexCPS2_Sakura, 5 },
    { "(07) Not Used", 0x4405c22, 0x4405c42, indexCPS2_Sakura, 6 },
    { "(08) Not Used", 0x4405c42, 0x4405c62, indexCPS2_Sakura, 7 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_LK[] =
{
    { "Main Color LK", 0x4405c62, 0x4405c82, indexCPS2_Sakura, 0 },
    { "(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405c82, 0x4405ca2, indexCPS2_Sakura, 1 },
    { "(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405ca2, 0x4405cc2, indexCPS2_Sakura, 2 },
    { "(04) Not Used", 0x4405cc2, 0x4405ce2, indexCPS2_Sakura, 3 },
    { "(05) Not Used", 0x4405ce2, 0x4405d02, indexCPS2_Sakura, 4 },
    { "(06) Not Used", 0x4405d02, 0x4405d22, indexCPS2_Sakura, 5 },
    { "(07) Not Used", 0x4405d22, 0x4405d42, indexCPS2_Sakura, 6 },
    { "(08) Not Used", 0x4405d42, 0x4405d62, indexCPS2_Sakura, 7 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_HP[] =
{
    { "Main Color HP", 0x4405d62, 0x4405d82, indexCPS2_Sakura, 0 },
    { "(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405d82, 0x4405da2, indexCPS2_Sakura, 1 },
    { "(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405da2, 0x4405dc2, indexCPS2_Sakura, 2 },
    { "(04) Not Used", 0x4405dc2, 0x4405de2, indexCPS2_Sakura, 3 },
    { "(05) Not Used", 0x4405de2, 0x4405e02, indexCPS2_Sakura, 4 },
    { "(06) Not Used", 0x4405e02, 0x4405e22, indexCPS2_Sakura, 5 },
    { "(07) Not Used", 0x4405e22, 0x4405e42, indexCPS2_Sakura, 6 },
    { "(08) Not Used", 0x4405e42, 0x4405e62, indexCPS2_Sakura, 7 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_HK[] =
{
    { "Main Color HK", 0x4405e62, 0x4405e82, indexCPS2_Sakura, 0 },
    { "(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405e82, 0x4405ea2, indexCPS2_Sakura, 1 },
    { "(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405ea2, 0x4405ec2, indexCPS2_Sakura, 2 },
    { "(04) Not Used", 0x4405ec2, 0x4405ee2, indexCPS2_Sakura, 3 },
    { "(05) Not Used", 0x4405ee2, 0x4405f02, indexCPS2_Sakura, 4 },
    { "(06) Not Used", 0x4405f02, 0x4405f22, indexCPS2_Sakura, 5 },
    { "(07) Not Used", 0x4405f22, 0x4405f42, indexCPS2_Sakura, 6 },
    { "(08) Not Used", 0x4405f42, 0x4405f62, indexCPS2_Sakura, 7 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_A1[] =
{
    { "Main Color A1", 0x4405f62, 0x4405f82, indexCPS2_Sakura, 0 },
    { "(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405f82, 0x4405fa2, indexCPS2_Sakura, 1 },
    { "(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405fa2, 0x4405fc2, indexCPS2_Sakura, 2 },
    { "(04) Not Used", 0x4405fc2, 0x4405fe2, indexCPS2_Sakura, 3 },
    { "(05) Not Used", 0x4405fe2, 0x4406002, indexCPS2_Sakura, 4 },
    { "(06) Not Used", 0x4406002, 0x4406022, indexCPS2_Sakura, 5 },
    { "(07) Not Used", 0x4406022, 0x4406042, indexCPS2_Sakura, 6 },
    { "(08) Not Used", 0x4406042, 0x4406062, indexCPS2_Sakura, 7 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_A2[] =
{
    { "Main Color A2", 0x4406062, 0x4406082, indexCPS2_Sakura, 0 },
    { "(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4406082, 0x44060a2, indexCPS2_Sakura, 1 },
    { "(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x44060a2, 0x44060c2, indexCPS2_Sakura, 2 },
    { "(04) Not Used", 0x44060c2, 0x44060e2, indexCPS2_Sakura, 3 },
    { "(05) Not Used", 0x44060e2, 0x4406102, indexCPS2_Sakura, 4 },
    { "(06) Not Used", 0x4406102, 0x4406122, indexCPS2_Sakura, 5 },
    { "(07) Not Used", 0x4406122, 0x4406142, indexCPS2_Sakura, 6 },
    { "(08) Not Used", 0x4406142, 0x4406162, indexCPS2_Sakura, 7 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4406162, 0x4406182, indexCPS2_Sakura, 0 },
    { "Burning Light", 0x4406182, 0x44061a2, indexCPS2_Sakura, 0 },
    { "Shocked Dark", 0x44061a2, 0x44061c2, indexCPS2_Sakura, 0 },
    { "Shocked Light", 0x44061c2, 0x44061e2, indexCPS2_Sakura, 0 },
    { "Dark Burning Dark", 0x44061e2, 0x4406202, indexCPS2_Sakura, 0 },
    { "Dark Burning Light", 0x4406202, 0x4406222, indexCPS2_Sakura, 0 },
    { "Kinetic Charge Dark", 0x4406222, 0x4406242, indexCPS2_Sakura, 0 },
    { "Kinetic Charge Light", 0x4406242, 0x4406262, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x4406262, 0x4406282 },
    { /* 0x0a */ "Not Used", 0x4406282, 0x44062a2 },
    { /* 0x0b */ "Winpose - Cherry Blossoms", 0x44062a2, 0x44062c2 },
    { /* 0x0c */ "Not Used", 0x44062c2, 0x44062e2 },
    { /* 0x0d */ "Not Used", 0x44062e2, 0x4406302 },
    { /* 0x0e */ "Not Used", 0x4406302, 0x4406322 },
    { /* 0x0f */ "Not Used", 0x4406322, 0x4406342 },
    { /* 0x10 */ "Not Used", 0x4406342, 0x4406362 },
    { /* 0x11 */ "Winpose - LP Kei (Sakura's friend)", 0x4406362, 0x4406382 },
    { /* 0x12 */ "Not Used", 0x4406382, 0x44063a2 },
    { /* 0x13 */ "Winpose - LK Kei (Sakura's friend)", 0x44063a2, 0x44063c2 },
    { /* 0x14 */ "Not Used", 0x44063c2, 0x44063e2 },
    { /* 0x15 */ "Winpose - HP Kei (Sakura's friend)", 0x44063e2, 0x4406402 },
    { /* 0x16 */ "Not Used", 0x4406402, 0x4406422 },
    { /* 0x17 */ "Winpose - HK Kei (Sakura's friend)", 0x4406422, 0x4406442 },
    { /* 0x18 */ "Not Used", 0x4406442, 0x4406462 },
    { /* 0x19 */ "Winpose - A1 Kei (Sakura's friend)", 0x4406462, 0x4406482 },
    { /* 0x1a */ "Not Used", 0x4406482, 0x44064a2 },
    { /* 0x1b */ "Winpose - A2 Kei (Sakura's friend)", 0x44064a2, 0x44064c2 },
    { /* 0x1c */ "Not Used", 0x44064c2, 0x44064e2 },
    { /* 0x1d */ "LP Evil Sakura", 0x44064e2, 0x4406502, indexCPS2_Sakura, 0 },
    { /* 0x1e */ "LK Evil Sakura", 0x4406502, 0x4406522, indexCPS2_Sakura, 0 },
    { /* 0x1f */ "HP Evil Sakura", 0x4406522, 0x4406542, indexCPS2_Sakura, 0 },
    { /* 0x20 */ "HK Evil Sakura", 0x4406542, 0x4406562, indexCPS2_Sakura, 0 },
    { /* 0x21 */ "A1 Evil Sakura", 0x4406562, 0x4406582, indexCPS2_Sakura, 0 },
    { /* 0x22 */ "A2 Evil Sakura", 0x4406582, 0x44065a2, indexCPS2_Sakura, 0 },
};

const sDescTreeNode MVC2_A_SAKURA_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_LP, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_LK, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_HP, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_HK, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_A1, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_A2, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_LP[] =
{
    { "Main Color LP", 0x44540c2, 0x44540e2, indexCPS2_Dan, 0 },
    { "(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44540e2, 0x4454102, indexCPS2_Dan, 1 },
    { "(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454102, 0x4454122, indexCPS2_Dan, 2 },
    { "(04) Not Used", 0x4454122, 0x4454142, indexCPS2_Dan, 3 },
    { "(05) Not Used", 0x4454142, 0x4454162, indexCPS2_Dan, 4 },
    { "(06) Not Used", 0x4454162, 0x4454182, indexCPS2_Dan, 5 },
    { "(07) Not Used", 0x4454182, 0x44541a2, indexCPS2_Dan, 6 },
    { "(08) Not Used", 0x44541a2, 0x44541c2, indexCPS2_Dan, 7 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_LK[] =
{
    { "Main Color LK", 0x44541c2, 0x44541e2, indexCPS2_Dan, 0 },
    { "(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44541e2, 0x4454202, indexCPS2_Dan, 1 },
    { "(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454202, 0x4454222, indexCPS2_Dan, 2 },
    { "(04) Not Used", 0x4454222, 0x4454242, indexCPS2_Dan, 3 },
    { "(05) Not Used", 0x4454242, 0x4454262, indexCPS2_Dan, 4 },
    { "(06) Not Used", 0x4454262, 0x4454282, indexCPS2_Dan, 5 },
    { "(07) Not Used", 0x4454282, 0x44542a2, indexCPS2_Dan, 6 },
    { "(08) Not Used", 0x44542a2, 0x44542c2, indexCPS2_Dan, 7 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_HP[] =
{
    { "Main Color HP", 0x44542c2, 0x44542e2, indexCPS2_Dan, 0 },
    { "(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44542e2, 0x4454302, indexCPS2_Dan, 1 },
    { "(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454302, 0x4454322, indexCPS2_Dan, 2 },
    { "(04) Not Used", 0x4454322, 0x4454342, indexCPS2_Dan, 3 },
    { "(05) Not Used", 0x4454342, 0x4454362, indexCPS2_Dan, 4 },
    { "(06) Not Used", 0x4454362, 0x4454382, indexCPS2_Dan, 5 },
    { "(07) Not Used", 0x4454382, 0x44543a2, indexCPS2_Dan, 6 },
    { "(08) Not Used", 0x44543a2, 0x44543c2, indexCPS2_Dan, 7 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_HK[] =
{
    { "Main Color HK", 0x44543c2, 0x44543e2, indexCPS2_Dan, 0 },
    { "(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44543e2, 0x4454402, indexCPS2_Dan, 1 },
    { "(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454402, 0x4454422, indexCPS2_Dan, 2 },
    { "(04) Not Used", 0x4454422, 0x4454442, indexCPS2_Dan, 3 },
    { "(05) Not Used", 0x4454442, 0x4454462, indexCPS2_Dan, 4 },
    { "(06) Not Used", 0x4454462, 0x4454482, indexCPS2_Dan, 5 },
    { "(07) Not Used", 0x4454482, 0x44544a2, indexCPS2_Dan, 6 },
    { "(08) Not Used", 0x44544a2, 0x44544c2, indexCPS2_Dan, 7 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_A1[] =
{
    { "Main Color A1", 0x44544c2, 0x44544e2, indexCPS2_Dan, 0 },
    { "(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44544e2, 0x4454502, indexCPS2_Dan, 1 },
    { "(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454502, 0x4454522, indexCPS2_Dan, 2 },
    { "(04) Not Used", 0x4454522, 0x4454542, indexCPS2_Dan, 3 },
    { "(05) Not Used", 0x4454542, 0x4454562, indexCPS2_Dan, 4 },
    { "(06) Not Used", 0x4454562, 0x4454582, indexCPS2_Dan, 5 },
    { "(07) Not Used", 0x4454582, 0x44545a2, indexCPS2_Dan, 6 },
    { "(08) Not Used", 0x44545a2, 0x44545c2, indexCPS2_Dan, 7 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_A2[] =
{
    { "Main Color A2", 0x44545c2, 0x44545e2, indexCPS2_Dan, 0 },
    { "(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44545e2, 0x4454602, indexCPS2_Dan, 1 },
    { "(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454602, 0x4454622, indexCPS2_Dan, 2 },
    { "(04) Not Used", 0x4454622, 0x4454642, indexCPS2_Dan, 3 },
    { "(05) Not Used", 0x4454642, 0x4454662, indexCPS2_Dan, 4 },
    { "(06) Not Used", 0x4454662, 0x4454682, indexCPS2_Dan, 5 },
    { "(07) Not Used", 0x4454682, 0x44546a2, indexCPS2_Dan, 6 },
    { "(08) Not Used", 0x44546a2, 0x44546c2, indexCPS2_Dan, 7 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x44546c2, 0x44546e2, indexCPS2_Dan, 0 },
    { "Burning Light", 0x44546e2, 0x4454702, indexCPS2_Dan, 0 },
    { "Shocked Dark", 0x4454702, 0x4454722, indexCPS2_Dan, 0 },
    { "Shocked Light", 0x4454722, 0x4454742, indexCPS2_Dan, 0 },
    { "Dark Burning Dark", 0x4454742, 0x4454762, indexCPS2_Dan, 0 },
    { "Dark Burning Light", 0x4454762, 0x4454782, indexCPS2_Dan, 0 },
    { "Kinetic Charge Dark", 0x4454782, 0x44547a2, indexCPS2_Dan, 0 },
    { "Kinetic Charge Light", 0x44547a2, 0x44547c2, indexCPS2_Dan, 0 },
};

const sDescTreeNode MVC2_A_DAN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_LP, ARRAYSIZE(MVC2_A_DAN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_LK, ARRAYSIZE(MVC2_A_DAN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_HP, ARRAYSIZE(MVC2_A_DAN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_HK, ARRAYSIZE(MVC2_A_DAN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_A1, ARRAYSIZE(MVC2_A_DAN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_A2, ARRAYSIZE(MVC2_A_DAN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_DAN_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_LP[] =
{
    { "Main Color LP", 0x44f3b82, 0x44f3ba2, indexCPS2_Cammy, 0 },
    { "(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3ba2, 0x44f3bc2, indexCPS2_Cammy, 1 },
    { "(03) Not Used", 0x44f3bc2, 0x44f3be2, indexCPS2_Cammy, 2 },
    { "(04) Bison", 0x44f3be2, 0x44f3c02, indexCPS2_Cammy, 3 },
    { "(05) Not Used", 0x44f3c02, 0x44f3c22, indexCPS2_Cammy, 4 },
    { "(06) Not Used", 0x44f3c22, 0x44f3c42, indexCPS2_Cammy, 5 },
    { "(07) Not Used", 0x44f3c42, 0x44f3c62, indexCPS2_Cammy, 6 },
    { "(08) Not Used", 0x44f3c62, 0x44f3c82, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_LK[] =
{
    { "Main Color LK", 0x44f3c82, 0x44f3ca2, indexCPS2_Cammy, 0 },
    { "(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3ca2, 0x44f3cc2, indexCPS2_Cammy, 1 },
    { "(03) Not Used", 0x44f3cc2, 0x44f3ce2, indexCPS2_Cammy, 2 },
    { "(04) Bison", 0x44f3ce2, 0x44f3d02, indexCPS2_Cammy, 3 },
    { "(05) Not Used", 0x44f3d02, 0x44f3d22, indexCPS2_Cammy, 4 },
    { "(06) Not Used", 0x44f3d22, 0x44f3d42, indexCPS2_Cammy, 5 },
    { "(07) Not Used", 0x44f3d42, 0x44f3d62, indexCPS2_Cammy, 6 },
    { "(08) Not Used", 0x44f3d62, 0x44f3d82, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_HP[] =
{
    { "Main Color HP", 0x44f3d82, 0x44f3da2, indexCPS2_Cammy, 0 },
    { "(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3da2, 0x44f3dc2, indexCPS2_Cammy, 1 },
    { "(03) Not Used", 0x44f3dc2, 0x44f3de2, indexCPS2_Cammy, 2 },
    { "(04) Bison", 0x44f3de2, 0x44f3e02, indexCPS2_Cammy, 3 },
    { "(05) Not Used", 0x44f3e02, 0x44f3e22, indexCPS2_Cammy, 4 },
    { "(06) Not Used", 0x44f3e22, 0x44f3e42, indexCPS2_Cammy, 5 },
    { "(07) Not Used", 0x44f3e42, 0x44f3e62, indexCPS2_Cammy, 6 },
    { "(08) Not Used", 0x44f3e62, 0x44f3e82, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_HK[] =
{
    { "Main Color HK", 0x44f3e82, 0x44f3ea2, indexCPS2_Cammy, 0 },
    { "(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3ea2, 0x44f3ec2, indexCPS2_Cammy, 1 },
    { "(03) Not Used", 0x44f3ec2, 0x44f3ee2, indexCPS2_Cammy, 2 },
    { "(04) Bison", 0x44f3ee2, 0x44f3f02, indexCPS2_Cammy, 3 },
    { "(05) Not Used", 0x44f3f02, 0x44f3f22, indexCPS2_Cammy, 4 },
    { "(06) Not Used", 0x44f3f22, 0x44f3f42, indexCPS2_Cammy, 5 },
    { "(07) Not Used", 0x44f3f42, 0x44f3f62, indexCPS2_Cammy, 6 },
    { "(08) Not Used", 0x44f3f62, 0x44f3f82, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_A1[] =
{
    { "Main Color A1", 0x44f3f82, 0x44f3fa2, indexCPS2_Cammy, 0 },
    { "(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3fa2, 0x44f3fc2, indexCPS2_Cammy, 1 },
    { "(03) Not Used", 0x44f3fc2, 0x44f3fe2, indexCPS2_Cammy, 2 },
    { "(04) Bison", 0x44f3fe2, 0x44f4002, indexCPS2_Cammy, 3 },
    { "(05) Not Used", 0x44f4002, 0x44f4022, indexCPS2_Cammy, 4 },
    { "(06) Not Used", 0x44f4022, 0x44f4042, indexCPS2_Cammy, 5 },
    { "(07) Not Used", 0x44f4042, 0x44f4062, indexCPS2_Cammy, 6 },
    { "(08) Not Used", 0x44f4062, 0x44f4082, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_A2[] =
{
    { "Main Color A2", 0x44f4082, 0x44f40a2, indexCPS2_Cammy, 0 },
    { "(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f40a2, 0x44f40c2, indexCPS2_Cammy, 1 },
    { "(03) Not Used", 0x44f40c2, 0x44f40e2, indexCPS2_Cammy, 2 },
    { "(04) Bison", 0x44f40e2, 0x44f4102, indexCPS2_Cammy, 3 },
    { "(05) Not Used", 0x44f4102, 0x44f4122, indexCPS2_Cammy, 4 },
    { "(06) Not Used", 0x44f4122, 0x44f4142, indexCPS2_Cammy, 5 },
    { "(07) Not Used", 0x44f4142, 0x44f4162, indexCPS2_Cammy, 6 },
    { "(08) Not Used", 0x44f4162, 0x44f4182, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x44f4182, 0x44f41a2, indexCPS2_Cammy, 0 },
    { "Burning Light", 0x44f41a2, 0x44f41c2, indexCPS2_Cammy, 0 },
    { "Shocked Dark", 0x44f41c2, 0x44f41e2, indexCPS2_Cammy, 0 },
    { "Shocked Light", 0x44f41e2, 0x44f4202, indexCPS2_Cammy, 0 },
    { "Dark Burning Dark", 0x44f4202, 0x44f4222, indexCPS2_Cammy, 0 },
    { "Dark Burning Light", 0x44f4222, 0x44f4242, indexCPS2_Cammy, 0 },
    { "Kinetic Charge Dark", 0x44f4242, 0x44f4262, indexCPS2_Cammy, 0 },
    { "Kinetic Charge Light", 0x44f4262, 0x44f4282, indexCPS2_Cammy, 0 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Counterflash Frame 1", 0x44f4282, 0x44f42a2, indexCPS2_Cammy, 11 },
    { /* 0x0a */ "LP - Counterflash Frame 2 ( LP color + brightbluetone+14)", 0x44f42a2, 0x44f42c2, indexCPS2_Cammy, 11 },
    { /* 0x0b */ "LP - Counterflash Frame 3 ( LP color + brightbluetone+10)", 0x44f42c2, 0x44f42e2, indexCPS2_Cammy, 11 },
    { /* 0x0c */ "LP - Counterflash Frame 4 ( LP color + brightbluetone+7)", 0x44f42e2, 0x44f4302, indexCPS2_Cammy, 11 },
    { /* 0x0d */ "LP - Counterflash Frame 5 ( LP color + brightbluetone+3)", 0x44f4302, 0x44f4322, indexCPS2_Cammy, 11 },
    { /* 0x0e */ "LP - Counterflash Frame 6 LP Color", 0x44f4322, 0x44f4342, indexCPS2_Cammy, 11 },
    { /* 0x0f */ "LP - Counterflash Frame 7 ( LP color + darkbluetone+3)", 0x44f4342, 0x44f4362, indexCPS2_Cammy, 11 },
    { /* 0x10 */ "LP - Counterflash Frame 8 ( LP color + darkbluetone+5)", 0x44f4362, 0x44f4382, indexCPS2_Cammy, 11 },
    { /* 0x11 */ "LP - Counterflash Frame 9", 0x44f4382, 0x44f43a2, indexCPS2_Cammy, 11 },
    { /* 0x12 */ "LK - Counterflash Frame 1", 0x44f43a2, 0x44f43c2, indexCPS2_Cammy, 11 },
    { /* 0x13 */ "LK - Counterflash Frame 2 ( LK color + brightbluetone+14)", 0x44f43c2, 0x44f43e2, indexCPS2_Cammy, 11 },
    { /* 0x14 */ "LK - Counterflash Frame 3 ( LK color + brightbluetone+10)", 0x44f43e2, 0x44f4402, indexCPS2_Cammy, 11 },
    { /* 0x15 */ "LK - Counterflash Frame 4 ( LK color + brightbluetone+7)", 0x44f4402, 0x44f4422, indexCPS2_Cammy, 11 },
    { /* 0x16 */ "LK - Counterflash Frame 5 ( LK color + brightbluetone+3)", 0x44f4422, 0x44f4442, indexCPS2_Cammy, 11 },
    { /* 0x17 */ "LK - Counterflash Frame 6 LK Color", 0x44f4442, 0x44f4462, indexCPS2_Cammy, 11 },
    { /* 0x18 */ "LK - Counterflash Frame 7 ( LK color + darkbluetone+3)", 0x44f4462, 0x44f4482, indexCPS2_Cammy, 11 },
    { /* 0x19 */ "LK - Counterflash Frame 8 ( LK color + darkbluetone+5)", 0x44f4482, 0x44f44a2, indexCPS2_Cammy, 11 },
    { /* 0x1a */ "LK - Counterflash Frame 9", 0x44f44a2, 0x44f44c2, indexCPS2_Cammy, 11 },
    { /* 0x1b */ "HP - Counterflash Frame 1", 0x44f44c2, 0x44f44e2, indexCPS2_Cammy, 11 },
    { /* 0x1c */ "HP - Counterflash Frame 2 ( HP color + brightbluetone+14)", 0x44f44e2, 0x44f4502, indexCPS2_Cammy, 11 },
    { /* 0x1d */ "HP - Counterflash Frame 3 ( HP color + brightbluetone+10)", 0x44f4502, 0x44f4522, indexCPS2_Cammy, 11 },
    { /* 0x1e */ "HP - Counterflash Frame 4 ( HP color + brightbluetone+7)", 0x44f4522, 0x44f4542, indexCPS2_Cammy, 11 },
    { /* 0x1f */ "HP - Counterflash Frame 5 ( HP color + brightbluetone+3)", 0x44f4542, 0x44f4562, indexCPS2_Cammy, 11 },
    { /* 0x20 */ "HP - Counterflash Frame 6 HP Color", 0x44f4562, 0x44f4582, indexCPS2_Cammy, 11 },
    { /* 0x21 */ "HP - Counterflash Frame 7 ( HP color + darkbluetone+3)", 0x44f4582, 0x44f45a2, indexCPS2_Cammy, 11 },
    { /* 0x22 */ "HP - Counterflash Frame 8 ( HP color + darkbluetone+5)", 0x44f45a2, 0x44f45c2, indexCPS2_Cammy, 11 },
    { /* 0x23 */ "HP - Counterflash Frame 9", 0x44f45c2, 0x44f45e2, indexCPS2_Cammy, 11 },
    { /* 0x24 */ "HK - Counterflash Frame 1", 0x44f45e2, 0x44f4602, indexCPS2_Cammy, 11 },
    { /* 0x25 */ "HK - Counterflash Frame 2 ( HK color + brightbluetone+14)", 0x44f4602, 0x44f4622, indexCPS2_Cammy, 11 },
    { /* 0x26 */ "HK - Counterflash Frame 3 ( HK color + brightbluetone+10)", 0x44f4622, 0x44f4642, indexCPS2_Cammy, 11 },
    { /* 0x27 */ "HK - Counterflash Frame 4 ( HK color + brightbluetone+7)", 0x44f4642, 0x44f4662, indexCPS2_Cammy, 11 },
    { /* 0x28 */ "HK - Counterflash Frame 5 ( HK color + brightbluetone+3)", 0x44f4662, 0x44f4682, indexCPS2_Cammy, 11 },
    { /* 0x29 */ "HK - Counterflash Frame 6 HK Color", 0x44f4682, 0x44f46a2, indexCPS2_Cammy, 11 },
    { /* 0x2a */ "HK - Counterflash Frame 7 ( HK color + darkbluetone+3)", 0x44f46a2, 0x44f46c2, indexCPS2_Cammy, 11 },
    { /* 0x2b */ "HK - Counterflash Frame 8 ( HK color + darkbluetone+5)", 0x44f46c2, 0x44f46e2, indexCPS2_Cammy, 11 },
    { /* 0x2c */ "HK - Counterflash Frame 9", 0x44f46e2, 0x44f4702, indexCPS2_Cammy, 11 },
    { /* 0x2d */ "A1 - Counterflash Frame 1", 0x44f4702, 0x44f4722, indexCPS2_Cammy, 11 },
    { /* 0x2e */ "A1 - Counterflash Frame 2 ( A1 color + brightbluetone+14)", 0x44f4722, 0x44f4742, indexCPS2_Cammy, 11 },
    { /* 0x2f */ "A1 - Counterflash Frame 3 ( A1 color + brightbluetone+10)", 0x44f4742, 0x44f4762, indexCPS2_Cammy, 11 },
    { /* 0x30 */ "A1 - Counterflash Frame 4 ( A1 color + brightbluetone+7)", 0x44f4762, 0x44f4782, indexCPS2_Cammy, 11 },
    { /* 0x31 */ "A1 - Counterflash Frame 5 ( A1 color + brightbluetone+3)", 0x44f4782, 0x44f47a2, indexCPS2_Cammy, 11 },
    { /* 0x32 */ "A1 - Counterflash Frame 6 A1 Color", 0x44f47a2, 0x44f47c2, indexCPS2_Cammy, 11 },
    { /* 0x33 */ "A1 - Counterflash Frame 7 ( A1 color + darkbluetone+3)", 0x44f47c2, 0x44f47e2, indexCPS2_Cammy, 11 },
    { /* 0x34 */ "A1 - Counterflash Frame 8 ( A1 color + darkbluetone+5)", 0x44f47e2, 0x44f4802, indexCPS2_Cammy, 11 },
    { /* 0x35 */ "A1 - Counterflash Frame 9", 0x44f4802, 0x44f4822, indexCPS2_Cammy, 11 },
    { /* 0x36 */ "A2 - Counterflash Frame 1", 0x44f4822, 0x44f4842, indexCPS2_Cammy, 11 },
    { /* 0x37 */ "A2 - Counterflash Frame 2 ( A2 color + brightbluetone+14)", 0x44f4842, 0x44f4862, indexCPS2_Cammy, 11 },
    { /* 0x38 */ "A2 - Counterflash Frame 3 ( A2 color + brightbluetone+10)", 0x44f4862, 0x44f4882, indexCPS2_Cammy, 11 },
    { /* 0x39 */ "A2 - Counterflash Frame 4 ( A2 color + brightbluetone+7)", 0x44f4882, 0x44f48a2, indexCPS2_Cammy, 11 },
    { /* 0x3a */ "A2 - Counterflash Frame 5 ( A2 color + brightbluetone+3)", 0x44f48a2, 0x44f48c2, indexCPS2_Cammy, 11 },
    { /* 0x3b */ "A2 - Counterflash Frame 6 A2 Color", 0x44f48c2, 0x44f48e2, indexCPS2_Cammy, 11 },
    { /* 0x3c */ "A2 - Counterflash Frame 7 ( A2 color + darkbluetone+3)", 0x44f48e2, 0x44f4902, indexCPS2_Cammy, 11 },
    { /* 0x3d */ "A2 - Counterflash Frame 8 ( A2 color + darkbluetone+5)", 0x44f4902, 0x44f4922, indexCPS2_Cammy, 11 },
    { /* 0x3e */ "A2 - Counterflash Frame 9", 0x44f4922, 0x44f4942, indexCPS2_Cammy, 11 },
};

const sDescTreeNode MVC2_A_CAMMY_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_LP, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_LK, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_HP, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_HK, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_A1, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_A2, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_LP[] =
{
    { "Main Color LP", 0x45aa822, 0x45aa842, indexCPS2_Dhalsim, 0 },
    { "(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aa842, 0x45aa862, indexCPS2_Dhalsim, 1 },
    { "(03) Sally", 0x45aa862, 0x45aa882, indexCPS2_Dhalsim, 2 },
    { "(04) Not Used", 0x45aa882, 0x45aa8a2, indexCPS2_Dhalsim, 3 },
    { "(05) Not Used", 0x45aa8a2, 0x45aa8c2, indexCPS2_Dhalsim, 4 },
    { "(06) Not Used", 0x45aa8c2, 0x45aa8e2, indexCPS2_Dhalsim, 5 },
    { "(07) Not Used", 0x45aa8e2, 0x45aa902, indexCPS2_Dhalsim, 6 },
    { "(08) Not Used", 0x45aa902, 0x45aa922, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_LK[] =
{
    { "Main Color LK", 0x45aa922, 0x45aa942, indexCPS2_Dhalsim, 0 },
    { "(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aa942, 0x45aa962, indexCPS2_Dhalsim, 1 },
    { "(03) Sally", 0x45aa962, 0x45aa982, indexCPS2_Dhalsim, 2 },
    { "(04) Not Used", 0x45aa982, 0x45aa9a2, indexCPS2_Dhalsim, 3 },
    { "(05) Not Used", 0x45aa9a2, 0x45aa9c2, indexCPS2_Dhalsim, 4 },
    { "(06) Not Used", 0x45aa9c2, 0x45aa9e2, indexCPS2_Dhalsim, 5 },
    { "(07) Not Used", 0x45aa9e2, 0x45aaa02, indexCPS2_Dhalsim, 6 },
    { "(08) Not Used", 0x45aaa02, 0x45aaa22, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_HP[] =
{
    { "Main Color HP", 0x45aaa22, 0x45aaa42, indexCPS2_Dhalsim, 0 },
    { "(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aaa42, 0x45aaa62, indexCPS2_Dhalsim, 1 },
    { "(03) Sally", 0x45aaa62, 0x45aaa82, indexCPS2_Dhalsim, 2 },
    { "(04) Not Used", 0x45aaa82, 0x45aaaa2, indexCPS2_Dhalsim, 3 },
    { "(05) Not Used", 0x45aaaa2, 0x45aaac2, indexCPS2_Dhalsim, 4 },
    { "(06) Not Used", 0x45aaac2, 0x45aaae2, indexCPS2_Dhalsim, 5 },
    { "(07) Not Used", 0x45aaae2, 0x45aab02, indexCPS2_Dhalsim, 6 },
    { "(08) Not Used", 0x45aab02, 0x45aab22, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_HK[] =
{
    { "Main Color HK", 0x45aab22, 0x45aab42, indexCPS2_Dhalsim, 0 },
    { "(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aab42, 0x45aab62, indexCPS2_Dhalsim, 1 },
    { "(03) Sally", 0x45aab62, 0x45aab82, indexCPS2_Dhalsim, 2 },
    { "(04) Not Used", 0x45aab82, 0x45aaba2, indexCPS2_Dhalsim, 3 },
    { "(05) Not Used", 0x45aaba2, 0x45aabc2, indexCPS2_Dhalsim, 4 },
    { "(06) Not Used", 0x45aabc2, 0x45aabe2, indexCPS2_Dhalsim, 5 },
    { "(07) Not Used", 0x45aabe2, 0x45aac02, indexCPS2_Dhalsim, 6 },
    { "(08) Not Used", 0x45aac02, 0x45aac22, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_A1[] =
{
    { "Main Color A1", 0x45aac22, 0x45aac42, indexCPS2_Dhalsim, 0 },
    { "(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aac42, 0x45aac62, indexCPS2_Dhalsim, 1 },
    { "(03) Sally", 0x45aac62, 0x45aac82, indexCPS2_Dhalsim, 2 },
    { "(04) Not Used", 0x45aac82, 0x45aaca2, indexCPS2_Dhalsim, 3 },
    { "(05) Not Used", 0x45aaca2, 0x45aacc2, indexCPS2_Dhalsim, 4 },
    { "(06) Not Used", 0x45aacc2, 0x45aace2, indexCPS2_Dhalsim, 5 },
    { "(07) Not Used", 0x45aace2, 0x45aad02, indexCPS2_Dhalsim, 6 },
    { "(08) Not Used", 0x45aad02, 0x45aad22, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_A2[] =
{
    { "Main Color A2", 0x45aad22, 0x45aad42, indexCPS2_Dhalsim, 0 },
    { "(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aad42, 0x45aad62, indexCPS2_Dhalsim, 1 },
    { "(03) Sally", 0x45aad62, 0x45aad82, indexCPS2_Dhalsim, 2 },
    { "(04) Not Used", 0x45aad82, 0x45aada2, indexCPS2_Dhalsim, 3 },
    { "(05) Not Used", 0x45aada2, 0x45aadc2, indexCPS2_Dhalsim, 4 },
    { "(06) Not Used", 0x45aadc2, 0x45aade2, indexCPS2_Dhalsim, 5 },
    { "(07) Not Used", 0x45aade2, 0x45aae02, indexCPS2_Dhalsim, 6 },
    { "(08) Not Used", 0x45aae02, 0x45aae22, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x45aae22, 0x45aae42, indexCPS2_Dhalsim, 0 },
    { "Burning Light", 0x45aae42, 0x45aae62, indexCPS2_Dhalsim, 0 },
    { "Shocked Dark", 0x45aae62, 0x45aae82, indexCPS2_Dhalsim, 0 },
    { "Shocked Light", 0x45aae82, 0x45aaea2, indexCPS2_Dhalsim, 0 },
    { "Dark Burning Dark", 0x45aaea2, 0x45aaec2, indexCPS2_Dhalsim, 0 },
    { "Dark Burning Light", 0x45aaec2, 0x45aaee2, indexCPS2_Dhalsim, 0 },
    { "Kinetic Charge Dark", 0x45aaee2, 0x45aaf02, indexCPS2_Dhalsim, 0 },
    { "Kinetic Charge Light", 0x45aaf02, 0x45aaf22, indexCPS2_Dhalsim, 0 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Teleport Frame 1 (LP color+ lumin+15)", 0x45aaf22, 0x45aaf42, indexCPS2_Dhalsim, 11 },
    { /* 0x0a */ "LP - Teleport Frame 2 (LP color+ lumin+27)", 0x45aaf42, 0x45aaf62, indexCPS2_Dhalsim, 11 },
    { /* 0x0b */ "LP - Teleport Frame 3 (LP color+ lumin+42)", 0x45aaf62, 0x45aaf82, indexCPS2_Dhalsim, 11 },
    { /* 0x0c */ "LP - Teleport Frame 4 (LP color+ lumin+65)", 0x45aaf82, 0x45aafa2, indexCPS2_Dhalsim, 11 },
    { /* 0x0d */ "LP - Teleport Frame 5 fullwhite", 0x45aafa2, 0x45aafc2, indexCPS2_Dhalsim, 11 },
    { /* 0x0e */ "LK - Teleport Frame 1 (LK color+ lumin+15)", 0x45aafc2, 0x45aafe2, indexCPS2_Dhalsim, 11 },
    { /* 0x0f */ "LK - Teleport Frame 2 (LK color+ lumin+27)", 0x45aafe2, 0x45ab002, indexCPS2_Dhalsim, 11 },
    { /* 0x10 */ "LK - Teleport Frame 3 (LK color+ lumin+42)", 0x45ab002, 0x45ab022, indexCPS2_Dhalsim, 11 },
    { /* 0x11 */ "LK - Teleport Frame 4 (LK color+ lumin+65)", 0x45ab022, 0x45ab042, indexCPS2_Dhalsim, 11 },
    { /* 0x12 */ "LK - Teleport Frame 5 fullwhite", 0x45ab042, 0x45ab062, indexCPS2_Dhalsim, 11 },
    { /* 0x13 */ "HP - Teleport Frame 1 (HP color+ lumin+15)", 0x45ab062, 0x45ab082, indexCPS2_Dhalsim, 11 },
    { /* 0x14 */ "HP - Teleport Frame 2 (HP color+ lumin+27)", 0x45ab082, 0x45ab0a2, indexCPS2_Dhalsim, 11 },
    { /* 0x15 */ "HP - Teleport Frame 3 (HP color+ lumin+42)", 0x45ab0a2, 0x45ab0c2, indexCPS2_Dhalsim, 11 },
    { /* 0x16 */ "HP - Teleport Frame 4 (HP color+ lumin+65)", 0x45ab0c2, 0x45ab0e2, indexCPS2_Dhalsim, 11 },
    { /* 0x17 */ "HP - Teleport Frame 5 fullwhite", 0x45ab0e2, 0x45ab102, indexCPS2_Dhalsim, 11 },
    { /* 0x18 */ "HK - Teleport Frame 1 (HK color+ lumin+15)", 0x45ab102, 0x45ab122, indexCPS2_Dhalsim, 11 },
    { /* 0x19 */ "HK - Teleport Frame 2 (HK color+ lumin+27)", 0x45ab122, 0x45ab142, indexCPS2_Dhalsim, 11 },
    { /* 0x1a */ "HK - Teleport Frame 3 (HK color+ lumin+42)", 0x45ab142, 0x45ab162, indexCPS2_Dhalsim, 11 },
    { /* 0x1b */ "HK - Teleport Frame 4 (HK color+ lumin+65)", 0x45ab162, 0x45ab182, indexCPS2_Dhalsim, 11 },
    { /* 0x1c */ "HK - Teleport Frame 5 fullwhite", 0x45ab182, 0x45ab1a2, indexCPS2_Dhalsim, 11 },
    { /* 0x1d */ "A1 - Teleport Frame 1 (A1 color+ lumin+15)", 0x45ab1a2, 0x45ab1c2, indexCPS2_Dhalsim, 11 },
    { /* 0x1e */ "A1 - Teleport Frame 2 (A1 color+ lumin+27)", 0x45ab1c2, 0x45ab1e2, indexCPS2_Dhalsim, 11 },
    { /* 0x1f */ "A1 - Teleport Frame 3 (A1 color+ lumin+42)", 0x45ab1e2, 0x45ab202, indexCPS2_Dhalsim, 11 },
    { /* 0x20 */ "A1 - Teleport Frame 4 (A1 color+ lumin+65)", 0x45ab202, 0x45ab222, indexCPS2_Dhalsim, 11 },
    { /* 0x21 */ "A1 - Teleport Frame 5 fullwhite", 0x45ab222, 0x45ab242, indexCPS2_Dhalsim, 11 },
    { /* 0x22 */ "A2 - Teleport Frame 1 (A2 color+ lumin+15)", 0x45ab242, 0x45ab262, indexCPS2_Dhalsim, 11 },
    { /* 0x23 */ "A2 - Teleport Frame 2 (A2 color+ lumin+27)", 0x45ab262, 0x45ab282, indexCPS2_Dhalsim, 11 },
    { /* 0x24 */ "A2 - Teleport Frame 3 (A2 color+ lumin+42)", 0x45ab282, 0x45ab2a2, indexCPS2_Dhalsim, 11 },
    { /* 0x25 */ "A2 - Teleport Frame 4 (A2 color+ lumin+65)", 0x45ab2a2, 0x45ab2c2, indexCPS2_Dhalsim, 11 },
    { /* 0x26 */ "A2 - Teleport Frame 5 fullwhite", 0x45ab2c2, 0x45ab2e2, indexCPS2_Dhalsim, 11 },
};

const sDescTreeNode MVC2_A_DHALSIM_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_LP, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_LK, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_HP, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_HK, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_A1, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_A2, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_LP[] =
{
    { "Main Color LP", 0x462f342, 0x462f362, indexCPS2_Bison, 0 },
    { "(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f362, 0x462f382, indexCPS2_Bison, 1 },
    { "(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f382, 0x462f3a2, indexCPS2_Bison, 2 },
    { "(04) Not Used", 0x462f3a2, 0x462f3c2, indexCPS2_Bison, 3 },
    { "(05) Not Used", 0x462f3c2, 0x462f3e2, indexCPS2_Bison, 4 },
    { "(06) Not Used", 0x462f3e2, 0x462f402, indexCPS2_Bison, 5 },
    { "(07) Not Used", 0x462f402, 0x462f422, indexCPS2_Bison, 6 },
    { "(08) Not Used", 0x462f422, 0x462f442, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_LK[] =
{
    { "Main Color LK", 0x462f442, 0x462f462, indexCPS2_Bison, 0 },
    { "(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f462, 0x462f482, indexCPS2_Bison, 1 },
    { "(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f482, 0x462f4a2, indexCPS2_Bison, 2 },
    { "(04) Not Used", 0x462f4a2, 0x462f4c2, indexCPS2_Bison, 3 },
    { "(05) Not Used", 0x462f4c2, 0x462f4e2, indexCPS2_Bison, 4 },
    { "(06) Not Used", 0x462f4e2, 0x462f502, indexCPS2_Bison, 5 },
    { "(07) Not Used", 0x462f502, 0x462f522, indexCPS2_Bison, 6 },
    { "(08) Not Used", 0x462f522, 0x462f542, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_HP[] =
{
    { "Main Color HP", 0x462f542, 0x462f562, indexCPS2_Bison, 0 },
    { "(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f562, 0x462f582, indexCPS2_Bison, 1 },
    { "(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f582, 0x462f5a2, indexCPS2_Bison, 2 },
    { "(04) Not Used", 0x462f5a2, 0x462f5c2, indexCPS2_Bison, 3 },
    { "(05) Not Used", 0x462f5c2, 0x462f5e2, indexCPS2_Bison, 4 },
    { "(06) Not Used", 0x462f5e2, 0x462f602, indexCPS2_Bison, 5 },
    { "(07) Not Used", 0x462f602, 0x462f622, indexCPS2_Bison, 6 },
    { "(08) Not Used", 0x462f622, 0x462f642, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_HK[] =
{
    { "Main Color HK", 0x462f642, 0x462f662, indexCPS2_Bison, 0 },
    { "(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f662, 0x462f682, indexCPS2_Bison, 1 },
    { "(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f682, 0x462f6a2, indexCPS2_Bison, 2 },
    { "(04) Not Used", 0x462f6a2, 0x462f6c2, indexCPS2_Bison, 3 },
    { "(05) Not Used", 0x462f6c2, 0x462f6e2, indexCPS2_Bison, 4 },
    { "(06) Not Used", 0x462f6e2, 0x462f702, indexCPS2_Bison, 5 },
    { "(07) Not Used", 0x462f702, 0x462f722, indexCPS2_Bison, 6 },
    { "(08) Not Used", 0x462f722, 0x462f742, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_A1[] =
{
    { "Main Color A1", 0x462f742, 0x462f762, indexCPS2_Bison, 0 },
    { "(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f762, 0x462f782, indexCPS2_Bison, 1 },
    { "(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f782, 0x462f7a2, indexCPS2_Bison, 2 },
    { "(04) Not Used", 0x462f7a2, 0x462f7c2, indexCPS2_Bison, 3 },
    { "(05) Not Used", 0x462f7c2, 0x462f7e2, indexCPS2_Bison, 4 },
    { "(06) Not Used", 0x462f7e2, 0x462f802, indexCPS2_Bison, 5 },
    { "(07) Not Used", 0x462f802, 0x462f822, indexCPS2_Bison, 6 },
    { "(08) Not Used", 0x462f822, 0x462f842, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_A2[] =
{
    { "Main Color A2", 0x462f842, 0x462f862, indexCPS2_Bison, 0 },
    { "(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f862, 0x462f882, indexCPS2_Bison, 1 },
    { "(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f882, 0x462f8a2, indexCPS2_Bison, 2 },
    { "(04) Not Used", 0x462f8a2, 0x462f8c2, indexCPS2_Bison, 3 },
    { "(05) Not Used", 0x462f8c2, 0x462f8e2, indexCPS2_Bison, 4 },
    { "(06) Not Used", 0x462f8e2, 0x462f902, indexCPS2_Bison, 5 },
    { "(07) Not Used", 0x462f902, 0x462f922, indexCPS2_Bison, 6 },
    { "(08) Not Used", 0x462f922, 0x462f942, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x462f942, 0x462f962, indexCPS2_Bison, 0 },
    { "Burning Light", 0x462f962, 0x462f982, indexCPS2_Bison, 0 },
    { "Shocked Dark", 0x462f982, 0x462f9a2, indexCPS2_Bison, 0 },
    { "Shocked Light", 0x462f9a2, 0x462f9c2, indexCPS2_Bison, 0 },
    { "Dark Burning Dark", 0x462f9c2, 0x462f9e2, indexCPS2_Bison, 0 },
    { "Dark Burning Light", 0x462f9e2, 0x462fa02, indexCPS2_Bison, 0 },
    { "Kinetic Charge Dark", 0x462fa02, 0x462fa22, indexCPS2_Bison, 0 },
    { "Kinetic Charge Light", 0x462fa22, 0x462fa42, indexCPS2_Bison, 0 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "c.FP / Psycho Crusher (Glow Frame 1) LP color", 0x462fa42, 0x462fa62 },
    { /* 0x0a */ "Psycho Crusher (Glow Frame 2) LP color", 0x462fa62, 0x462fa82 },
    { /* 0x0b */ "c.FP / Psycho Crusher (Glow Frame 1) LK color", 0x462fa82, 0x462faa2 },
    { /* 0x0c */ "Psycho Crusher (Glow Frame 2) LK color", 0x462faa2, 0x462fac2 },
    { /* 0x0d */ "c.FP / Psycho Crusher (Glow Frame 1) HP color", 0x462fac2, 0x462fae2 },
    { /* 0x0e */ "Psycho Crusher (Glow Frame 2) HP color", 0x462fae2, 0x462fb02 },
    { /* 0x0f */ "c.FP / Psycho Crusher (Glow Frame 1) HK color", 0x462fb02, 0x462fb22 },
    { /* 0x10 */ "Psycho Crusher (Glow Frame 2) HK color", 0x462fb22, 0x462fb42 },
    { /* 0x11 */ "c.FP / Psycho Crusher (Glow Frame 1) A1 color", 0x462fb42, 0x462fb62 },
    { /* 0x12 */ "Psycho Crusher (Glow Frame 2) A1 color", 0x462fb62, 0x462fb82 },
    { /* 0x13 */ "c.FP / Psycho Crusher (Glow Frame 1) A2 color", 0x462fb82, 0x462fba2 },
    { /* 0x14 */ "Psycho Crusher (Glow Frame 2) A2 color", 0x462fba2, 0x462fbc2 },
};

const sDescTreeNode MVC2_A_MBISON_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_LP, ARRAYSIZE(MVC2_A_MBISON_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_LK, ARRAYSIZE(MVC2_A_MBISON_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_HP, ARRAYSIZE(MVC2_A_MBISON_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_HK, ARRAYSIZE(MVC2_A_MBISON_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_A1, ARRAYSIZE(MVC2_A_MBISON_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_A2, ARRAYSIZE(MVC2_A_MBISON_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MBISON_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MBISON_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_LP[] =
{
    { "Main Color LP", 0x46b5662, 0x46b5682, indexCPS2_Ken, 0 },
    { "(02) ID:02-09 Hadouken", 0x46b5682, 0x46b56a2, indexCPS2_Ken, 1 },
    { "(03) ID:02-09 Shoryuken (Flame)", 0x46b56a2, 0x46b56c2, indexCPS2_Ken, 2 },
    { "(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b56c2, 0x46b56e2, indexCPS2_Ken, 3 },
    { "(05) Not Used", 0x46b56e2, 0x46b5702, indexCPS2_Ken, 4 },
    { "(06) Not Used", 0x46b5702, 0x46b5722, indexCPS2_Ken, 5 },
    { "(07) Not Used", 0x46b5722, 0x46b5742, indexCPS2_Ken, 6 },
    { "(08) Not Used", 0x46b5742, 0x46b5762, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_LK[] =
{
    { "Main Color LK", 0x46b5762, 0x46b5782, indexCPS2_Ken, 0 },
    { "(02) ID:02-09 Hadouken", 0x46b5782, 0x46b57a2, indexCPS2_Ken, 1 },
    { "(03) ID:02-09 Shoryuken (Flame)", 0x46b57a2, 0x46b57c2, indexCPS2_Ken, 2 },
    { "(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b57c2, 0x46b57e2, indexCPS2_Ken, 3 },
    { "(05) Not Used", 0x46b57e2, 0x46b5802, indexCPS2_Ken, 4 },
    { "(06) Not Used", 0x46b5802, 0x46b5822, indexCPS2_Ken, 5 },
    { "(07) Not Used", 0x46b5822, 0x46b5842, indexCPS2_Ken, 6 },
    { "(08) Not Used", 0x46b5842, 0x46b5862, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_HP[] =
{
    { "Main Color HP", 0x46b5862, 0x46b5882, indexCPS2_Ken, 0 },
    { "(02) ID:02-09 Hadouken", 0x46b5882, 0x46b58a2, indexCPS2_Ken, 1 },
    { "(03) ID:02-09 Shoryuken (Flame)", 0x46b58a2, 0x46b58c2, indexCPS2_Ken, 2 },
    { "(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b58c2, 0x46b58e2, indexCPS2_Ken, 3 },
    { "(05) Not Used", 0x46b58e2, 0x46b5902, indexCPS2_Ken, 4 },
    { "(06) Not Used", 0x46b5902, 0x46b5922, indexCPS2_Ken, 5 },
    { "(07) Not Used", 0x46b5922, 0x46b5942, indexCPS2_Ken, 6 },
    { "(08) Not Used", 0x46b5942, 0x46b5962, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_HK[] =
{
    { "Main Color HK", 0x46b5962, 0x46b5982, indexCPS2_Ken, 0 },
    { "(02) ID:02-09 Hadouken", 0x46b5982, 0x46b59a2, indexCPS2_Ken, 1 },
    { "(03) ID:02-09 Shoryuken (Flame)", 0x46b59a2, 0x46b59c2, indexCPS2_Ken, 2 },
    { "(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b59c2, 0x46b59e2, indexCPS2_Ken, 3 },
    { "(05) Not Used", 0x46b59e2, 0x46b5a02, indexCPS2_Ken, 4 },
    { "(06) Not Used", 0x46b5a02, 0x46b5a22, indexCPS2_Ken, 5 },
    { "(07) Not Used", 0x46b5a22, 0x46b5a42, indexCPS2_Ken, 6 },
    { "(08) Not Used", 0x46b5a42, 0x46b5a62, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_A1[] =
{
    { "Main Color A1", 0x46b5a62, 0x46b5a82, indexCPS2_Ken, 0 },
    { "(02) ID:02-09 Hadouken", 0x46b5a82, 0x46b5aa2, indexCPS2_Ken, 1 },
    { "(03) ID:02-09 Shoryuken (Flame)", 0x46b5aa2, 0x46b5ac2, indexCPS2_Ken, 2 },
    { "(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b5ac2, 0x46b5ae2, indexCPS2_Ken, 3 },
    { "(05) Not Used", 0x46b5ae2, 0x46b5b02, indexCPS2_Ken, 4 },
    { "(06) Not Used", 0x46b5b02, 0x46b5b22, indexCPS2_Ken, 5 },
    { "(07) Not Used", 0x46b5b22, 0x46b5b42, indexCPS2_Ken, 6 },
    { "(08) Not Used", 0x46b5b42, 0x46b5b62, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_A2[] =
{
    { "Main Color A2", 0x46b5b62, 0x46b5b82, indexCPS2_Ken, 0 },
    { "(02) ID:02-09 Hadouken", 0x46b5b82, 0x46b5ba2, indexCPS2_Ken, 1 },
    { "(03) ID:02-09 Shoryuken (Flame)", 0x46b5ba2, 0x46b5bc2, indexCPS2_Ken, 2 },
    { "(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b5bc2, 0x46b5be2, indexCPS2_Ken, 3 },
    { "(05) Not Used", 0x46b5be2, 0x46b5c02, indexCPS2_Ken, 4 },
    { "(06) Not Used", 0x46b5c02, 0x46b5c22, indexCPS2_Ken, 5 },
    { "(07) Not Used", 0x46b5c22, 0x46b5c42, indexCPS2_Ken, 6 },
    { "(08) Not Used", 0x46b5c42, 0x46b5c62, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x46b5c62, 0x46b5c82, indexCPS2_Ken, 0 },
    { "Burning Light", 0x46b5c82, 0x46b5ca2, indexCPS2_Ken, 0 },
    { "Shocked Dark", 0x46b5ca2, 0x46b5cc2, indexCPS2_Ken, 0 },
    { "Shocked Light", 0x46b5cc2, 0x46b5ce2, indexCPS2_Ken, 0 },
    { "Dark Burning Dark", 0x46b5ce2, 0x46b5d02, indexCPS2_Ken, 0 },
    { "Dark Burning Light", 0x46b5d02, 0x46b5d22, indexCPS2_Ken, 0 },
    { "Kinetic Charge Dark", 0x46b5d22, 0x46b5d42, indexCPS2_Ken, 0 },
    { "Kinetic Charge Light", 0x46b5d42, 0x46b5d62, indexCPS2_Ken, 0 },
};

const sDescTreeNode MVC2_A_KEN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_LP, ARRAYSIZE(MVC2_A_KEN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_LK, ARRAYSIZE(MVC2_A_KEN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_HP, ARRAYSIZE(MVC2_A_KEN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_HK, ARRAYSIZE(MVC2_A_KEN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_A1, ARRAYSIZE(MVC2_A_KEN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_A2, ARRAYSIZE(MVC2_A_KEN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_KEN_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_LP[] =
{
    { "Main Color LP", 0x479ec82, 0x479eca2, indexCPS2_Gambit, 0 },
    { "(02) ID:01-08 Kinetic Card // Trick Card", 0x479eca2, 0x479ecc2, indexCPS2_Gambit, 1 },
    { "(03) ID:01-09 Cajun Strike (stick effect)", 0x479ecc2, 0x479ece2, indexCPS2_Gambit, 2 },
    { "(04) Not Used", 0x479ece2, 0x479ed02, indexCPS2_Gambit, 3 },
    { "(05) Not Used", 0x479ed02, 0x479ed22, indexCPS2_Gambit, 4 },
    { "(06) Not Used", 0x479ed22, 0x479ed42, indexCPS2_Gambit, 5 },
    { "(07) Not Used", 0x479ed42, 0x479ed62, indexCPS2_Gambit, 6 },
    { "(08) Not Used", 0x479ed62, 0x479ed82, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_LK[] =
{
    { "Main Color LK", 0x479ed82, 0x479eda2, indexCPS2_Gambit, 0 },
    { "(02) ID:01-08 Kinetic Card // Trick Card", 0x479eda2, 0x479edc2, indexCPS2_Gambit, 1 },
    { "(03) ID:01-09 Cajun Strike (stick effect)", 0x479edc2, 0x479ede2, indexCPS2_Gambit, 2 },
    { "(04) Not Used", 0x479ede2, 0x479ee02, indexCPS2_Gambit, 3 },
    { "(05) Not Used", 0x479ee02, 0x479ee22, indexCPS2_Gambit, 4 },
    { "(06) Not Used", 0x479ee22, 0x479ee42, indexCPS2_Gambit, 5 },
    { "(07) Not Used", 0x479ee42, 0x479ee62, indexCPS2_Gambit, 6 },
    { "(08) Not Used", 0x479ee62, 0x479ee82, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_HP[] =
{
    { "Main Color HP", 0x479ee82, 0x479eea2, indexCPS2_Gambit, 0 },
    { "(02) ID:01-08 Kinetic Card // Trick Card", 0x479eea2, 0x479eec2, indexCPS2_Gambit, 1 },
    { "(03) ID:01-09 Cajun Strike (stick effect)", 0x479eec2, 0x479eee2, indexCPS2_Gambit, 2 },
    { "(04) Not Used", 0x479eee2, 0x479ef02, indexCPS2_Gambit, 3 },
    { "(05) Not Used", 0x479ef02, 0x479ef22, indexCPS2_Gambit, 4 },
    { "(06) Not Used", 0x479ef22, 0x479ef42, indexCPS2_Gambit, 5 },
    { "(07) Not Used", 0x479ef42, 0x479ef62, indexCPS2_Gambit, 6 },
    { "(08) Not Used", 0x479ef62, 0x479ef82, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_HK[] =
{
    { "Main Color HK", 0x479ef82, 0x479efa2, indexCPS2_Gambit, 0 },
    { "(02) ID:01-08 Kinetic Card // Trick Card", 0x479efa2, 0x479efc2, indexCPS2_Gambit, 1 },
    { "(03) ID:01-09 Cajun Strike (stick effect)", 0x479efc2, 0x479efe2, indexCPS2_Gambit, 2 },
    { "(04) Not Used", 0x479efe2, 0x479f002, indexCPS2_Gambit, 3 },
    { "(05) Not Used", 0x479f002, 0x479f022, indexCPS2_Gambit, 4 },
    { "(06) Not Used", 0x479f022, 0x479f042, indexCPS2_Gambit, 5 },
    { "(07) Not Used", 0x479f042, 0x479f062, indexCPS2_Gambit, 6 },
    { "(08) Not Used", 0x479f062, 0x479f082, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_A1[] =
{
    { "Main Color A1", 0x479f082, 0x479f0a2, indexCPS2_Gambit, 0 },
    { "(02) ID:01-08 Kinetic Card // Trick Card", 0x479f0a2, 0x479f0c2, indexCPS2_Gambit, 1 },
    { "(03) ID:01-09 Cajun Strike (stick effect)", 0x479f0c2, 0x479f0e2, indexCPS2_Gambit, 2 },
    { "(04) Not Used", 0x479f0e2, 0x479f102, indexCPS2_Gambit, 3 },
    { "(05) Not Used", 0x479f102, 0x479f122, indexCPS2_Gambit, 4 },
    { "(06) Not Used", 0x479f122, 0x479f142, indexCPS2_Gambit, 5 },
    { "(07) Not Used", 0x479f142, 0x479f162, indexCPS2_Gambit, 6 },
    { "(08) Not Used", 0x479f162, 0x479f182, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_A2[] =
{
    { "Main Color A2", 0x479f182, 0x479f1a2, indexCPS2_Gambit, 0 },
    { "(02) ID:01-08 Kinetic Card // Trick Card", 0x479f1a2, 0x479f1c2, indexCPS2_Gambit, 1 },
    { "(03) ID:01-09 Cajun Strike (stick effect)", 0x479f1c2, 0x479f1e2, indexCPS2_Gambit, 2 },
    { "(04) Not Used", 0x479f1e2, 0x479f202, indexCPS2_Gambit, 3 },
    { "(05) Not Used", 0x479f202, 0x479f222, indexCPS2_Gambit, 4 },
    { "(06) Not Used", 0x479f222, 0x479f242, indexCPS2_Gambit, 5 },
    { "(07) Not Used", 0x479f242, 0x479f262, indexCPS2_Gambit, 6 },
    { "(08) Not Used", 0x479f262, 0x479f282, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x479f282, 0x479f2a2, indexCPS2_Gambit, 0 },
    { "Burning Light", 0x479f2a2, 0x479f2c2, indexCPS2_Gambit, 0 },
    { "Shocked Dark", 0x479f2c2, 0x479f2e2, indexCPS2_Gambit, 0 },
    { "Shocked Light", 0x479f2e2, 0x479f302, indexCPS2_Gambit, 0 },
    { "Dark Burning Dark", 0x479f302, 0x479f322, indexCPS2_Gambit, 0 },
    { "Dark Burning Light", 0x479f322, 0x479f342, indexCPS2_Gambit, 0 },
    { "Kinetic Charge Dark", 0x479f342, 0x479f362, indexCPS2_Gambit, 0 },
    { "Kinetic Charge Light", 0x479f362, 0x479f382, indexCPS2_Gambit, 0 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Winpose Frame 1 lp color + (lumin+10)", 0x479f382, 0x479f3a2, indexCPS2_Gambit, 0 },
    { /* 0x0a */ "LP - Winpose Frame 2 lp color + (lumin+5)", 0x479f3a2, 0x479f3c2, indexCPS2_Gambit, 0 },
    { /* 0x0b */ "LP - Winpose Frame 3 lp Main Color", 0x479f3c2, 0x479f3e2, indexCPS2_Gambit, 0 },
    { /* 0x0c */ "LP - Winpose Frame 4 lp color + (lumin-5)", 0x479f3e2, 0x479f402, indexCPS2_Gambit, 0 },
    { /* 0x0d */ "LP - Winpose Frame 5 lp color + (lumin-10)", 0x479f402, 0x479f422, indexCPS2_Gambit, 0 },
    { /* 0x0e */ "LK - Winpose Frame 1 lk color + (lumin+10)", 0x479f422, 0x479f442, indexCPS2_Gambit, 0 },
    { /* 0x0f */ "LK - Winpose Frame 2 lk color + (lumin+5)", 0x479f442, 0x479f462, indexCPS2_Gambit, 0 },
    { /* 0x10 */ "LK - Winpose Frame 3 lk Main Color", 0x479f462, 0x479f482, indexCPS2_Gambit, 0 },
    { /* 0x11 */ "LK - Winpose Frame 4 lk color + (lumin-5)", 0x479f482, 0x479f4a2, indexCPS2_Gambit, 0 },
    { /* 0x12 */ "LK - Winpose Frame 5 lk color + (lumin-10)", 0x479f4a2, 0x479f4c2, indexCPS2_Gambit, 0 },
    { /* 0x13 */ "HP - Winpose Frame 1 hp color + (lumin+10)", 0x479f4c2, 0x479f4e2, indexCPS2_Gambit, 0 },
    { /* 0x14 */ "HP - Winpose Frame 2 hp color + (lumin+5)", 0x479f4e2, 0x479f502, indexCPS2_Gambit, 0 },
    { /* 0x15 */ "HP - Winpose Frame 3 hp Main Color", 0x479f502, 0x479f522, indexCPS2_Gambit, 0 },
    { /* 0x16 */ "HP - Winpose Frame 4 hp color + (lumin-5)", 0x479f522, 0x479f542, indexCPS2_Gambit, 0 },
    { /* 0x17 */ "HP - Winpose Frame 5 hp color + (lumin-10)", 0x479f542, 0x479f562, indexCPS2_Gambit, 0 },
    { /* 0x18 */ "HK - Winpose Frame 1 hk color + (lumin+10)", 0x479f562, 0x479f582, indexCPS2_Gambit, 0 },
    { /* 0x19 */ "HK - Winpose Frame 2 hk color + (lumin+5)", 0x479f582, 0x479f5a2, indexCPS2_Gambit, 0 },
    { /* 0x1a */ "HK - Winpose Frame 3 hk Main Color", 0x479f5a2, 0x479f5c2, indexCPS2_Gambit, 0 },
    { /* 0x1b */ "HK - Winpose Frame 4 hk color + (lumin-5)", 0x479f5c2, 0x479f5e2, indexCPS2_Gambit, 0 },
    { /* 0x1c */ "HK - Winpose Frame 5 hk color + (lumin-10)", 0x479f5e2, 0x479f602, indexCPS2_Gambit, 0 },
    { /* 0x1d */ "A1 - Winpose Frame 1 a1 color + (lumin+10)", 0x479f602, 0x479f622, indexCPS2_Gambit, 0 },
    { /* 0x1e */ "A1 - Winpose Frame 2 a1 color + (lumin+5)", 0x479f622, 0x479f642, indexCPS2_Gambit, 0 },
    { /* 0x1f */ "A1 - Winpose Frame 3 a1 Main Color", 0x479f642, 0x479f662, indexCPS2_Gambit, 0 },
    { /* 0x20 */ "A1 - Winpose Frame 4 a1 color + (lumin-5)", 0x479f662, 0x479f682, indexCPS2_Gambit, 0 },
    { /* 0x21 */ "A1 - Winpose Frame 5 a1 color + (lumin-10)", 0x479f682, 0x479f6a2, indexCPS2_Gambit, 0 },
    { /* 0x22 */ "A2 - Winpose Frame 1 a2 color + (lumin+10)", 0x479f6a2, 0x479f6c2, indexCPS2_Gambit, 0 },
    { /* 0x23 */ "A2 - Winpose Frame 2 a2 color + (lumin+5)", 0x479f6c2, 0x479f6e2, indexCPS2_Gambit, 0 },
    { /* 0x24 */ "A2 - Winpose Frame 3 a2 Main Color", 0x479f6e2, 0x479f702, indexCPS2_Gambit, 0 },
    { /* 0x25 */ "A2 - Winpose Frame 4 a2 color + (lumin-5)", 0x479f702, 0x479f722, indexCPS2_Gambit, 0 },
    { /* 0x26 */ "A2 - Winpose Frame 5 a2 color + (lumin-10)", 0x479f722, 0x479f742, indexCPS2_Gambit, 0 },
};

const sDescTreeNode MVC2_A_GAMBIT_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_LP, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_LK, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_HP, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_HK, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_A1, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_A2, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_SHARED, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_LP[] =
{
    { "Main Color LP", 0x48cb762, 0x48cb782, indexCPS2_Juggy, 0 },
    { "(02) Not Used", 0x48cb782, 0x48cb7a2, indexCPS2_Juggy, 1 },
    { "(03) ID:01-08 Earthquake", 0x48cb7a2, 0x48cb7c2, indexCPS2_Juggy, 2 },
    { "(04) Not Used", 0x48cb7c2, 0x48cb7e2, indexCPS2_Juggy, 3 },
    { "(05) Not Used", 0x48cb7e2, 0x48cb802, indexCPS2_Juggy, 4 },
    { "(06) Not Used", 0x48cb802, 0x48cb822, indexCPS2_Juggy, 5 },
    { "(07) Not Used", 0x48cb822, 0x48cb842, indexCPS2_Juggy, 6 },
    { "(08) Not Used", 0x48cb842, 0x48cb862, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_LK[] =
{
    { "Main Color LK", 0x48cb862, 0x48cb882, indexCPS2_Juggy, 0 },
    { "(02) Not Used", 0x48cb882, 0x48cb8a2, indexCPS2_Juggy, 1 },
    { "(03) ID:01-08 Earthquake", 0x48cb8a2, 0x48cb8c2, indexCPS2_Juggy, 2 },
    { "(04) Not Used", 0x48cb8c2, 0x48cb8e2, indexCPS2_Juggy, 3 },
    { "(05) Not Used", 0x48cb8e2, 0x48cb902, indexCPS2_Juggy, 4 },
    { "(06) Not Used", 0x48cb902, 0x48cb922, indexCPS2_Juggy, 5 },
    { "(07) Not Used", 0x48cb922, 0x48cb942, indexCPS2_Juggy, 6 },
    { "(08) Not Used", 0x48cb942, 0x48cb962, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_HP[] =
{
    { "Main Color HP", 0x48cb962, 0x48cb982, indexCPS2_Juggy, 0 },
    { "(02) Not Used", 0x48cb982, 0x48cb9a2, indexCPS2_Juggy, 1 },
    { "(03) ID:01-08 Earthquake", 0x48cb9a2, 0x48cb9c2, indexCPS2_Juggy, 2 },
    { "(04) Not Used", 0x48cb9c2, 0x48cb9e2, indexCPS2_Juggy, 3 },
    { "(05) Not Used", 0x48cb9e2, 0x48cba02, indexCPS2_Juggy, 4 },
    { "(06) Not Used", 0x48cba02, 0x48cba22, indexCPS2_Juggy, 5 },
    { "(07) Not Used", 0x48cba22, 0x48cba42, indexCPS2_Juggy, 6 },
    { "(08) Not Used", 0x48cba42, 0x48cba62, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_HK[] =
{
    { "Main Color HK", 0x48cba62, 0x48cba82, indexCPS2_Juggy, 0 },
    { "(02) Not Used", 0x48cba82, 0x48cbaa2, indexCPS2_Juggy, 1 },
    { "(03) ID:01-08 Earthquake", 0x48cbaa2, 0x48cbac2, indexCPS2_Juggy, 2 },
    { "(04) Not Used", 0x48cbac2, 0x48cbae2, indexCPS2_Juggy, 3 },
    { "(05) Not Used", 0x48cbae2, 0x48cbb02, indexCPS2_Juggy, 4 },
    { "(06) Not Used", 0x48cbb02, 0x48cbb22, indexCPS2_Juggy, 5 },
    { "(07) Not Used", 0x48cbb22, 0x48cbb42, indexCPS2_Juggy, 6 },
    { "(08) Not Used", 0x48cbb42, 0x48cbb62, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_A1[] =
{
    { "Main Color A1", 0x48cbb62, 0x48cbb82, indexCPS2_Juggy, 0 },
    { "(02) Not Used", 0x48cbb82, 0x48cbba2, indexCPS2_Juggy, 1 },
    { "(03) ID:01-08 Earthquake", 0x48cbba2, 0x48cbbc2, indexCPS2_Juggy, 2 },
    { "(04) Not Used", 0x48cbbc2, 0x48cbbe2, indexCPS2_Juggy, 3 },
    { "(05) Not Used", 0x48cbbe2, 0x48cbc02, indexCPS2_Juggy, 4 },
    { "(06) Not Used", 0x48cbc02, 0x48cbc22, indexCPS2_Juggy, 5 },
    { "(07) Not Used", 0x48cbc22, 0x48cbc42, indexCPS2_Juggy, 6 },
    { "(08) Not Used", 0x48cbc42, 0x48cbc62, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_A2[] =
{
    { "Main Color A2", 0x48cbc62, 0x48cbc82, indexCPS2_Juggy, 0 },
    { "(02) Not Used", 0x48cbc82, 0x48cbca2, indexCPS2_Juggy, 1 },
    { "(03) ID:01-08 Earthquake", 0x48cbca2, 0x48cbcc2, indexCPS2_Juggy, 2 },
    { "(04) Not Used", 0x48cbcc2, 0x48cbce2, indexCPS2_Juggy, 3 },
    { "(05) Not Used", 0x48cbce2, 0x48cbd02, indexCPS2_Juggy, 4 },
    { "(06) Not Used", 0x48cbd02, 0x48cbd22, indexCPS2_Juggy, 5 },
    { "(07) Not Used", 0x48cbd22, 0x48cbd42, indexCPS2_Juggy, 6 },
    { "(08) Not Used", 0x48cbd42, 0x48cbd62, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x48cbd62, 0x48cbd82, indexCPS2_Juggy, 0 },
    { "Burning Light", 0x48cbd82, 0x48cbda2, indexCPS2_Juggy, 0 },
    { "Shocked Dark", 0x48cbda2, 0x48cbdc2, indexCPS2_Juggy, 0 },
    { "Shocked Light", 0x48cbdc2, 0x48cbde2, indexCPS2_Juggy, 0 },
    { "Dark Burning Dark", 0x48cbde2, 0x48cbe02, indexCPS2_Juggy, 0 },
    { "Dark Burning Light", 0x48cbe02, 0x48cbe22, indexCPS2_Juggy, 0 },
    { "Kinetic Charge Dark", 0x48cbe22, 0x48cbe42, indexCPS2_Juggy, 0 },
    { "Kinetic Charge Light", 0x48cbe42, 0x48cbe62, indexCPS2_Juggy, 0 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Juggernaut Headcrush Frame 1", 0x48cbe62, 0x48cbe82, indexCPS2_Juggy, 0 },
    { /* 0x0a */ "LP - Juggernaut Headcrush Frame 2", 0x48cbe82, 0x48cbea2, indexCPS2_Juggy, 0 },
    { /* 0x0b */ "LP - Power-Up Frames 1", 0x48cbea2, 0x48cbec2, indexCPS2_Juggy, 11 },
    { /* 0x0c */ "LP - Power-Up Frames 2", 0x48cbec2, 0x48cbee2, indexCPS2_Juggy, 11 },
    { /* 0x0d */ "LP - Power-Up Frames 3", 0x48cbee2, 0x48cbf02, indexCPS2_Juggy, 11 },
    { /* 0x0e */ "LP - Power-Up Frames 4", 0x48cbf02, 0x48cbf22, indexCPS2_Juggy, 11 },
    { /* 0x0f */ "LP - Power-Up Frames 5", 0x48cbf22, 0x48cbf42, indexCPS2_Juggy, 11 },
    { /* 0x10 */ "LP - Power-Up Frames 6", 0x48cbf42, 0x48cbf62, indexCPS2_Juggy, 11 },
    { /* 0x11 */ "LP - Power-Up Frames 7", 0x48cbf62, 0x48cbf82, indexCPS2_Juggy, 11 },
    { /* 0x12 */ "LP - Power-Up Frames 8", 0x48cbf82, 0x48cbfa2, indexCPS2_Juggy, 11 },
    { /* 0x13 */ "LK - Juggernaut Headcrush Frame 1", 0x48cbfa2, 0x48cbfc2, indexCPS2_Juggy, 0 },
    { /* 0x14 */ "LK - Juggernaut Headcrush Frame 2", 0x48cbfc2, 0x48cbfe2, indexCPS2_Juggy, 0 },
    { /* 0x15 */ "LK - Power-Up Frames 1", 0x48cbfe2, 0x48cc002, indexCPS2_Juggy, 11 },
    { /* 0x16 */ "LK - Power-Up Frames 2", 0x48cc002, 0x48cc022, indexCPS2_Juggy, 11 },
    { /* 0x17 */ "LK - Power-Up Frames 3", 0x48cc022, 0x48cc042, indexCPS2_Juggy, 11 },
    { /* 0x18 */ "LK - Power-Up Frames 4", 0x48cc042, 0x48cc062, indexCPS2_Juggy, 11 },
    { /* 0x19 */ "LK - Power-Up Frames 5", 0x48cc062, 0x48cc082, indexCPS2_Juggy, 11 },
    { /* 0x1a */ "LK - Power-Up Frames 6", 0x48cc082, 0x48cc0a2, indexCPS2_Juggy, 11 },
    { /* 0x1b */ "LK - Power-Up Frames 7", 0x48cc0a2, 0x48cc0c2, indexCPS2_Juggy, 11 },
    { /* 0x1c */ "LK - Power-Up Frames 8", 0x48cc0c2, 0x48cc0e2, indexCPS2_Juggy, 11 },
    { /* 0x1d */ "HP - Juggernaut Headcrush Frame 1", 0x48cc0e2, 0x48cc102, indexCPS2_Juggy, 0 },
    { /* 0x1e */ "HP - Juggernaut Headcrush Frame 2", 0x48cc102, 0x48cc122, indexCPS2_Juggy, 0 },
    { /* 0x1f */ "HP - Power-Up Frames 1", 0x48cc122, 0x48cc142, indexCPS2_Juggy, 11 },
    { /* 0x20 */ "HP - Power-Up Frames 2", 0x48cc142, 0x48cc162, indexCPS2_Juggy, 11 },
    { /* 0x21 */ "HP - Power-Up Frames 3", 0x48cc162, 0x48cc182, indexCPS2_Juggy, 11 },
    { /* 0x22 */ "HP - Power-Up Frames 4", 0x48cc182, 0x48cc1a2, indexCPS2_Juggy, 11 },
    { /* 0x23 */ "HP - Power-Up Frames 5", 0x48cc1a2, 0x48cc1c2, indexCPS2_Juggy, 11 },
    { /* 0x24 */ "HP - Power-Up Frames 6", 0x48cc1c2, 0x48cc1e2, indexCPS2_Juggy, 11 },
    { /* 0x25 */ "HP - Power-Up Frames 7", 0x48cc1e2, 0x48cc202, indexCPS2_Juggy, 11 },
    { /* 0x26 */ "HP - Power-Up Frames 8", 0x48cc202, 0x48cc222, indexCPS2_Juggy, 11 },
    { /* 0x27 */ "HK - Juggernaut Headcrush Frame 1", 0x48cc222, 0x48cc242, indexCPS2_Juggy, 0 },
    { /* 0x28 */ "HK - Juggernaut Headcrush Frame 2", 0x48cc242, 0x48cc262, indexCPS2_Juggy, 0 },
    { /* 0x29 */ "HK - Power-Up Frames 1", 0x48cc262, 0x48cc282, indexCPS2_Juggy, 11 },
    { /* 0x2a */ "HK - Power-Up Frames 2", 0x48cc282, 0x48cc2a2, indexCPS2_Juggy, 11 },
    { /* 0x2b */ "HK - Power-Up Frames 3", 0x48cc2a2, 0x48cc2c2, indexCPS2_Juggy, 11 },
    { /* 0x2c */ "HK - Power-Up Frames 4", 0x48cc2c2, 0x48cc2e2, indexCPS2_Juggy, 11 },
    { /* 0x2d */ "HK - Power-Up Frames 5", 0x48cc2e2, 0x48cc302, indexCPS2_Juggy, 11 },
    { /* 0x2e */ "HK - Power-Up Frames 6", 0x48cc302, 0x48cc322, indexCPS2_Juggy, 11 },
    { /* 0x2f */ "HK - Power-Up Frames 7", 0x48cc322, 0x48cc342, indexCPS2_Juggy, 11 },
    { /* 0x30 */ "HK - Power-Up Frames 8", 0x48cc342, 0x48cc362, indexCPS2_Juggy, 11 },
    { /* 0x31 */ "A1 - Juggernaut Headcrush Frame 1", 0x48cc362, 0x48cc382, indexCPS2_Juggy, 0 },
    { /* 0x32 */ "A1 - Juggernaut Headcrush Frame 2", 0x48cc382, 0x48cc3a2, indexCPS2_Juggy, 0 },
    { /* 0x33 */ "A1 - Power-Up Frames 1", 0x48cc3a2, 0x48cc3c2, indexCPS2_Juggy, 11 },
    { /* 0x34 */ "A1 - Power-Up Frames 2", 0x48cc3c2, 0x48cc3e2, indexCPS2_Juggy, 11 },
    { /* 0x35 */ "A1 - Power-Up Frames 3", 0x48cc3e2, 0x48cc402, indexCPS2_Juggy, 11 },
    { /* 0x36 */ "A1 - Power-Up Frames 4", 0x48cc402, 0x48cc422, indexCPS2_Juggy, 11 },
    { /* 0x37 */ "A1 - Power-Up Frames 5", 0x48cc422, 0x48cc442, indexCPS2_Juggy, 11 },
    { /* 0x38 */ "A1 - Power-Up Frames 6", 0x48cc442, 0x48cc462, indexCPS2_Juggy, 11 },
    { /* 0x39 */ "A1 - Power-Up Frames 7", 0x48cc462, 0x48cc482, indexCPS2_Juggy, 11 },
    { /* 0x3a */ "A1 - Power-Up Frames 8", 0x48cc482, 0x48cc4a2, indexCPS2_Juggy, 11 },
    { /* 0x3b */ "A2 - Juggernaut Headcrush Frame 1", 0x48cc4a2, 0x48cc4c2, indexCPS2_Juggy, 0 },
    { /* 0x3c */ "A2 - Juggernaut Headcrush Frame 2", 0x48cc4c2, 0x48cc4e2, indexCPS2_Juggy, 0 },
    { /* 0x3d */ "A2 - Power-Up Frames 1", 0x48cc4e2, 0x48cc502, indexCPS2_Juggy, 11 },
    { /* 0x3e */ "A2 - Power-Up Frames 2", 0x48cc502, 0x48cc522, indexCPS2_Juggy, 11 },
    { /* 0x3f */ "A2 - Power-Up Frames 3", 0x48cc522, 0x48cc542, indexCPS2_Juggy, 11 },
    { /* 0x40 */ "A2 - Power-Up Frames 4", 0x48cc542, 0x48cc562, indexCPS2_Juggy, 11 },
    { /* 0x41 */ "A2 - Power-Up Frames 5", 0x48cc562, 0x48cc582, indexCPS2_Juggy, 11 },
    { /* 0x42 */ "A2 - Power-Up Frames 6", 0x48cc582, 0x48cc5a2, indexCPS2_Juggy, 11 },
    { /* 0x43 */ "A2 - Power-Up Frames 7", 0x48cc5a2, 0x48cc5c2, indexCPS2_Juggy, 11 },
    { /* 0x44 */ "A2 - Power-Up Frames 8", 0x48cc5c2, 0x48cc5e2, indexCPS2_Juggy, 11 },
};

const sDescTreeNode MVC2_A_JUGGERNAUT_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_LP, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_LK, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_HP, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_HK, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_A1, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_A2, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_SHARED, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_LP[] =
{
    { "Main Color LP", 0x49d9e82, 0x49d9ea2, indexCPS2_Storm, 0 },
    { "(02) Not Used", 0x49d9ea2, 0x49d9ec2, indexCPS2_Storm, 1 },
    { "(03) Not Used", 0x49d9ec2, 0x49d9ee2, indexCPS2_Storm, 2 },
    { "(04) Not Used", 0x49d9ee2, 0x49d9f02, indexCPS2_Storm, 3 },
    { "(05) Not Used", 0x49d9f02, 0x49d9f22, indexCPS2_Storm, 4 },
    { "(06) Not Used", 0x49d9f22, 0x49d9f42, indexCPS2_Storm, 5 },
    { "(07) Not Used", 0x49d9f42, 0x49d9f62, indexCPS2_Storm, 6 },
    { "(08) Not Used", 0x49d9f62, 0x49d9f82, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_LK[] =
{
    { "Main Color LK", 0x49d9f82, 0x49d9fa2, indexCPS2_Storm, 0 },
    { "(02) Not Used", 0x49d9fa2, 0x49d9fc2, indexCPS2_Storm, 1 },
    { "(03) Not Used", 0x49d9fc2, 0x49d9fe2, indexCPS2_Storm, 2 },
    { "(04) Not Used", 0x49d9fe2, 0x49da002, indexCPS2_Storm, 3 },
    { "(05) Not Used", 0x49da002, 0x49da022, indexCPS2_Storm, 4 },
    { "(06) Not Used", 0x49da022, 0x49da042, indexCPS2_Storm, 5 },
    { "(07) Not Used", 0x49da042, 0x49da062, indexCPS2_Storm, 6 },
    { "(08) Not Used", 0x49da062, 0x49da082, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_HP[] =
{
    { "Main Color HP", 0x49da082, 0x49da0a2, indexCPS2_Storm, 0 },
    { "(02) Not Used", 0x49da0a2, 0x49da0c2, indexCPS2_Storm, 1 },
    { "(03) Not Used", 0x49da0c2, 0x49da0e2, indexCPS2_Storm, 2 },
    { "(04) Not Used", 0x49da0e2, 0x49da102, indexCPS2_Storm, 3 },
    { "(05) Not Used", 0x49da102, 0x49da122, indexCPS2_Storm, 4 },
    { "(06) Not Used", 0x49da122, 0x49da142, indexCPS2_Storm, 5 },
    { "(07) Not Used", 0x49da142, 0x49da162, indexCPS2_Storm, 6 },
    { "(08) Not Used", 0x49da162, 0x49da182, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_HK[] =
{
    { "Main Color HK", 0x49da182, 0x49da1a2, indexCPS2_Storm, 0 },
    { "(02) Not Used", 0x49da1a2, 0x49da1c2, indexCPS2_Storm, 1 },
    { "(03) Not Used", 0x49da1c2, 0x49da1e2, indexCPS2_Storm, 2 },
    { "(04) Not Used", 0x49da1e2, 0x49da202, indexCPS2_Storm, 3 },
    { "(05) Not Used", 0x49da202, 0x49da222, indexCPS2_Storm, 4 },
    { "(06) Not Used", 0x49da222, 0x49da242, indexCPS2_Storm, 5 },
    { "(07) Not Used", 0x49da242, 0x49da262, indexCPS2_Storm, 6 },
    { "(08) Not Used", 0x49da262, 0x49da282, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_A1[] =
{
    { "Main Color A1", 0x49da282, 0x49da2a2, indexCPS2_Storm, 0 },
    { "(02) Not Used", 0x49da2a2, 0x49da2c2, indexCPS2_Storm, 1 },
    { "(03) Not Used", 0x49da2c2, 0x49da2e2, indexCPS2_Storm, 2 },
    { "(04) Not Used", 0x49da2e2, 0x49da302, indexCPS2_Storm, 3 },
    { "(05) Not Used", 0x49da302, 0x49da322, indexCPS2_Storm, 4 },
    { "(06) Not Used", 0x49da322, 0x49da342, indexCPS2_Storm, 5 },
    { "(07) Not Used", 0x49da342, 0x49da362, indexCPS2_Storm, 6 },
    { "(08) Not Used", 0x49da362, 0x49da382, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_A2[] =
{
    { "Main Color A2", 0x49da382, 0x49da3a2, indexCPS2_Storm, 0 },
    { "(02) Not Used", 0x49da3a2, 0x49da3c2, indexCPS2_Storm, 1 },
    { "(03) Not Used", 0x49da3c2, 0x49da3e2, indexCPS2_Storm, 2 },
    { "(04) Not Used", 0x49da3e2, 0x49da402, indexCPS2_Storm, 3 },
    { "(05) Not Used", 0x49da402, 0x49da422, indexCPS2_Storm, 4 },
    { "(06) Not Used", 0x49da422, 0x49da442, indexCPS2_Storm, 5 },
    { "(07) Not Used", 0x49da442, 0x49da462, indexCPS2_Storm, 6 },
    { "(08) Not Used", 0x49da462, 0x49da482, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x49da482, 0x49da4a2, indexCPS2_Storm, 0 },
    { "Burning Light", 0x49da4a2, 0x49da4c2, indexCPS2_Storm, 0 },
    { "Shocked Dark", 0x49da4c2, 0x49da4e2, indexCPS2_Storm, 0 },
    { "Shocked Light", 0x49da4e2, 0x49da502, indexCPS2_Storm, 0 },
    { "Dark Burning Dark", 0x49da502, 0x49da522, indexCPS2_Storm, 0 },
    { "Dark Burning Light", 0x49da522, 0x49da542, indexCPS2_Storm, 0 },
    { "Kinetic Charge Dark", 0x49da542, 0x49da562, indexCPS2_Storm, 0 },
    { "Kinetic Charge Light", 0x49da562, 0x49da582, indexCPS2_Storm, 0 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Lightning Storm Frame 1", 0x49da582, 0x49da5a2, indexCPS2_Storm, 11 },
    { /* 0x0a */ "Lightning Storm Frame 2", 0x49da5a2, 0x49da5c2, indexCPS2_Storm, 11 },
    { /* 0x0b */ "Lightning Storm Frame 3", 0x49da5c2, 0x49da5e2, indexCPS2_Storm, 11 },
    { /* 0x0c */ "Not Used", 0x49da5e2, 0x49da602 },
    { /* 0x0d */ "Not Used", 0x49da602, 0x49da622 },
    { /* 0x0e */ "Not Used", 0x49da622, 0x49da642 },
    { /* 0x0f */ "Wind Effect 1", 0x49da642, 0x49da662, indexCPS2_Storm, 12 },
    { /* 0x10 */ "Wind Effect 2", 0x49da662, 0x49da682, indexCPS2_Storm, 12 },
    { /* 0x11 */ "Wind Effect 3", 0x49da682, 0x49da6a2, indexCPS2_Storm, 12 },
    { /* 0x12 */ "Wind Effect 4", 0x49da6a2, 0x49da6c2, indexCPS2_Storm, 12 },
    { /* 0x13 */ "LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 1", 0x49da6c2, 0x49da6e2, indexCPS2_Storm, 13 },
    { /* 0x14 */ "LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 2", 0x49da6e2, 0x49da702, indexCPS2_Storm, 13 },
    { /* 0x15 */ "LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 3", 0x49da702, 0x49da722, indexCPS2_Storm, 13 },
    { /* 0x16 */ "LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 4", 0x49da722, 0x49da742, indexCPS2_Storm, 13 },
    { /* 0x17 */ "LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 5", 0x49da742, 0x49da762, indexCPS2_Storm, 13 },
    { /* 0x18 */ "Not Used", 0x49da762, 0x49da782 },
    { /* 0x19 */ "Unused: Extra 0x19", 0x49da782, 0x49da7a2 },
    { /* 0x1a */ "Unused: Extra 0x1a", 0x49da7a2, 0x49da7c2 },
    { /* 0x1b */ "ID:02-08 Hail Storm (all buttons)", 0x49da7c2, 0x49da7e2, indexCPS2_Storm, 14 },
    { /* 0x1c */ "LK lightning effect 1 orig.color", 0x49da7e2, 0x49da802, indexCPS2_Storm, 15 },
    { /* 0x1d */ "LK lightning effect 2 ! lumin+10", 0x49da802, 0x49da822, indexCPS2_Storm, 15 },
    { /* 0x1e */ "LK lightning effect 3 ! lumin+25", 0x49da822, 0x49da842, indexCPS2_Storm, 15 },
    { /* 0x1f */ "HP lightning effect 1 orig.color", 0x49da842, 0x49da862, indexCPS2_Storm, 15 },
    { /* 0x20 */ "HP lightning effect 2 ! lumin+10", 0x49da862, 0x49da882, indexCPS2_Storm, 15 },
    { /* 0x21 */ "HP lightning effect 3 ! lumin+25", 0x49da882, 0x49da8a2, indexCPS2_Storm, 15 },
    { /* 0x22 */ "HK lightning effect 1 orig.color", 0x49da8a2, 0x49da8c2, indexCPS2_Storm, 15 },
    { /* 0x23 */ "HK lightning effect 2 ! lumin+10", 0x49da8c2, 0x49da8e2, indexCPS2_Storm, 15 },
    { /* 0x24 */ "HK lightning effect 3 ! lumin+25", 0x49da8e2, 0x49da902, indexCPS2_Storm, 15 },
    { /* 0x25 */ "A1 lightning effect 1 orig.color", 0x49da902, 0x49da922, indexCPS2_Storm, 15 },
    { /* 0x26 */ "A1 lightning effect 2 ! lumin+10", 0x49da922, 0x49da942, indexCPS2_Storm, 15 },
    { /* 0x27 */ "A1 lightning effect 3 ! lumin+25", 0x49da942, 0x49da962, indexCPS2_Storm, 15 },
    { /* 0x28 */ "A2 lightning effect 1 orig.color", 0x49da962, 0x49da982, indexCPS2_Storm, 15 },
    { /* 0x29 */ "A2 lightning effect 2 ! lumin+10", 0x49da982, 0x49da9a2, indexCPS2_Storm, 15 },
    { /* 0x2a */ "A2 lightning effect 3 ! lumin+25", 0x49da9a2, 0x49da9c2, indexCPS2_Storm, 15 },
};

const sDescTreeNode MVC2_A_STORM_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_LP, ARRAYSIZE(MVC2_A_STORM_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_LK, ARRAYSIZE(MVC2_A_STORM_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_HP, ARRAYSIZE(MVC2_A_STORM_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_HK, ARRAYSIZE(MVC2_A_STORM_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_A1, ARRAYSIZE(MVC2_A_STORM_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_A2, ARRAYSIZE(MVC2_A_STORM_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_STORM_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_STORM_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_LP[] =
{
    { "Main Color LP", 0x4adb362, 0x4adb382, indexCPS2_Sabretooth, 0 },
    { "(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb382, 0x4adb3a2, indexCPS2_Sabretooth, 1 },
    { "(03) Birdie", 0x4adb3a2, 0x4adb3c2, indexCPS2_Sabretooth, 2 },
    { "(04) Sabre's Limo", 0x4adb3c2, 0x4adb3e2, indexCPS2_Sabretooth, 3 },
    { "(05) Not Used", 0x4adb3e2, 0x4adb402, indexCPS2_Sabretooth, 4 },
    { "(06) Not Used", 0x4adb402, 0x4adb422, indexCPS2_Sabretooth, 5 },
    { "(07) Not Used", 0x4adb422, 0x4adb442, indexCPS2_Sabretooth, 6 },
    { "(08) Not Used", 0x4adb442, 0x4adb462, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_LK[] =
{
    { "Main Color LK", 0x4adb462, 0x4adb482, indexCPS2_Sabretooth, 0 },
    { "(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb482, 0x4adb4a2, indexCPS2_Sabretooth, 1 },
    { "(03) Birdie", 0x4adb4a2, 0x4adb4c2, indexCPS2_Sabretooth, 2 },
    { "(04) Sabre's Limo", 0x4adb4c2, 0x4adb4e2, indexCPS2_Sabretooth, 3 },
    { "(05) Not Used", 0x4adb4e2, 0x4adb502, indexCPS2_Sabretooth, 4 },
    { "(06) Not Used", 0x4adb502, 0x4adb522, indexCPS2_Sabretooth, 5 },
    { "(07) Not Used", 0x4adb522, 0x4adb542, indexCPS2_Sabretooth, 6 },
    { "(08) Not Used", 0x4adb542, 0x4adb562, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_HP[] =
{
    { "Main Color HP", 0x4adb562, 0x4adb582, indexCPS2_Sabretooth, 0 },
    { "(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb582, 0x4adb5a2, indexCPS2_Sabretooth, 1 },
    { "(03) Birdie", 0x4adb5a2, 0x4adb5c2, indexCPS2_Sabretooth, 2 },
    { "(04) Sabre's Limo", 0x4adb5c2, 0x4adb5e2, indexCPS2_Sabretooth, 3 },
    { "(05) Not Used", 0x4adb5e2, 0x4adb602, indexCPS2_Sabretooth, 4 },
    { "(06) Not Used", 0x4adb602, 0x4adb622, indexCPS2_Sabretooth, 5 },
    { "(07) Not Used", 0x4adb622, 0x4adb642, indexCPS2_Sabretooth, 6 },
    { "(08) Not Used", 0x4adb642, 0x4adb662, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_HK[] =
{
    { "Main Color HK", 0x4adb662, 0x4adb682, indexCPS2_Sabretooth, 0 },
    { "(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb682, 0x4adb6a2, indexCPS2_Sabretooth, 1 },
    { "(03) Birdie", 0x4adb6a2, 0x4adb6c2, indexCPS2_Sabretooth, 2 },
    { "(04) Sabre's Limo", 0x4adb6c2, 0x4adb6e2, indexCPS2_Sabretooth, 3 },
    { "(05) Not Used", 0x4adb6e2, 0x4adb702, indexCPS2_Sabretooth, 4 },
    { "(06) Not Used", 0x4adb702, 0x4adb722, indexCPS2_Sabretooth, 5 },
    { "(07) Not Used", 0x4adb722, 0x4adb742, indexCPS2_Sabretooth, 6 },
    { "(08) Not Used", 0x4adb742, 0x4adb762, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_A1[] =
{
    { "Main Color A1", 0x4adb762, 0x4adb782, indexCPS2_Sabretooth, 0 },
    { "(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb782, 0x4adb7a2, indexCPS2_Sabretooth, 1 },
    { "(03) Birdie", 0x4adb7a2, 0x4adb7c2, indexCPS2_Sabretooth, 2 },
    { "(04) Sabre's Limo", 0x4adb7c2, 0x4adb7e2, indexCPS2_Sabretooth, 3 },
    { "(05) Not Used", 0x4adb7e2, 0x4adb802, indexCPS2_Sabretooth, 4 },
    { "(06) Not Used", 0x4adb802, 0x4adb822, indexCPS2_Sabretooth, 5 },
    { "(07) Not Used", 0x4adb822, 0x4adb842, indexCPS2_Sabretooth, 6 },
    { "(08) Not Used", 0x4adb842, 0x4adb862, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_A2[] =
{
    { "Main Color A2", 0x4adb862, 0x4adb882, indexCPS2_Sabretooth, 0 },
    { "(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb882, 0x4adb8a2, indexCPS2_Sabretooth, 1 },
    { "(03) Birdie", 0x4adb8a2, 0x4adb8c2, indexCPS2_Sabretooth, 2 },
    { "(04) Sabre's Limo", 0x4adb8c2, 0x4adb8e2, indexCPS2_Sabretooth, 3 },
    { "(05) Not Used", 0x4adb8e2, 0x4adb902, indexCPS2_Sabretooth, 4 },
    { "(06) Not Used", 0x4adb902, 0x4adb922, indexCPS2_Sabretooth, 5 },
    { "(07) Not Used", 0x4adb922, 0x4adb942, indexCPS2_Sabretooth, 6 },
    { "(08) Not Used", 0x4adb942, 0x4adb962, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4adb962, 0x4adb982, indexCPS2_Sabretooth, 0 },
    { "Burning Light", 0x4adb982, 0x4adb9a2, indexCPS2_Sabretooth, 0 },
    { "Shocked Dark", 0x4adb9a2, 0x4adb9c2, indexCPS2_Sabretooth, 0 },
    { "Shocked Light", 0x4adb9c2, 0x4adb9e2, indexCPS2_Sabretooth, 0 },
    { "Dark Burning Dark", 0x4adb9e2, 0x4adba02, indexCPS2_Sabretooth, 0 },
    { "Dark Burning Light", 0x4adba02, 0x4adba22, indexCPS2_Sabretooth, 0 },
    { "Kinetic Charge Dark", 0x4adba22, 0x4adba42, indexCPS2_Sabretooth, 0 },
    { "Kinetic Charge Light", 0x4adba42, 0x4adba62, indexCPS2_Sabretooth, 0 },
};

const sDescTreeNode MVC2_A_SABRETOOTH_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_LP, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_LK, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_HP, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_HK, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_A1, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_A2, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_LP[] =
{
    { "Main Color LP", 0x4bf21c2, 0x4bf21e2, indexCPS2_Magneto, 0 },
    { "(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf21e2, 0x4bf2202, indexCPS2_Magneto, 1 },
    { "(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2202, 0x4bf2222, indexCPS2_Magneto, 2 },
    { "(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2222, 0x4bf2242, indexCPS2_Magneto, 3 },
    { "(05) Not Used", 0x4bf2242, 0x4bf2262, indexCPS2_Magneto, 4 },
    { "(06) Not Used", 0x4bf2262, 0x4bf2282, indexCPS2_Magneto, 5 },
    { "(07) Not Used", 0x4bf2282, 0x4bf22a2, indexCPS2_Magneto, 6 },
    { "(08) Not Used", 0x4bf22a2, 0x4bf22c2, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_LK[] =
{
    { "Main Color LK", 0x4bf22c2, 0x4bf22e2, indexCPS2_Magneto, 0 },
    { "(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf22e2, 0x4bf2302, indexCPS2_Magneto, 1 },
    { "(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2302, 0x4bf2322, indexCPS2_Magneto, 2 },
    { "(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2322, 0x4bf2342, indexCPS2_Magneto, 3 },
    { "(05) Not Used", 0x4bf2342, 0x4bf2362, indexCPS2_Magneto, 4 },
    { "(06) Not Used", 0x4bf2362, 0x4bf2382, indexCPS2_Magneto, 5 },
    { "(07) Not Used", 0x4bf2382, 0x4bf23a2, indexCPS2_Magneto, 6 },
    { "(08) Not Used", 0x4bf23a2, 0x4bf23c2, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_HP[] =
{
    { "Main Color HP", 0x4bf23c2, 0x4bf23e2, indexCPS2_Magneto, 0 },
    { "(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf23e2, 0x4bf2402, indexCPS2_Magneto, 1 },
    { "(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2402, 0x4bf2422, indexCPS2_Magneto, 2 },
    { "(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2422, 0x4bf2442, indexCPS2_Magneto, 3 },
    { "(05) Not Used", 0x4bf2442, 0x4bf2462, indexCPS2_Magneto, 4 },
    { "(06) Not Used", 0x4bf2462, 0x4bf2482, indexCPS2_Magneto, 5 },
    { "(07) Not Used", 0x4bf2482, 0x4bf24a2, indexCPS2_Magneto, 6 },
    { "(08) Not Used", 0x4bf24a2, 0x4bf24c2, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_HK[] =
{
    { "Main Color HK", 0x4bf24c2, 0x4bf24e2, indexCPS2_Magneto, 0 },
    { "(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf24e2, 0x4bf2502, indexCPS2_Magneto, 1 },
    { "(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2502, 0x4bf2522, indexCPS2_Magneto, 2 },
    { "(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2522, 0x4bf2542, indexCPS2_Magneto, 3 },
    { "(05) Not Used", 0x4bf2542, 0x4bf2562, indexCPS2_Magneto, 4 },
    { "(06) Not Used", 0x4bf2562, 0x4bf2582, indexCPS2_Magneto, 5 },
    { "(07) Not Used", 0x4bf2582, 0x4bf25a2, indexCPS2_Magneto, 6 },
    { "(08) Not Used", 0x4bf25a2, 0x4bf25c2, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_A1[] =
{
    { "Main Color A1", 0x4bf25c2, 0x4bf25e2, indexCPS2_Magneto, 0 },
    { "(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf25e2, 0x4bf2602, indexCPS2_Magneto, 1 },
    { "(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2602, 0x4bf2622, indexCPS2_Magneto, 2 },
    { "(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2622, 0x4bf2642, indexCPS2_Magneto, 3 },
    { "(05) Not Used", 0x4bf2642, 0x4bf2662, indexCPS2_Magneto, 4 },
    { "(06) Not Used", 0x4bf2662, 0x4bf2682, indexCPS2_Magneto, 5 },
    { "(07) Not Used", 0x4bf2682, 0x4bf26a2, indexCPS2_Magneto, 6 },
    { "(08) Not Used", 0x4bf26a2, 0x4bf26c2, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_A2[] =
{
    { "Main Color A2", 0x4bf26c2, 0x4bf26e2, indexCPS2_Magneto, 0 },
    { "(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf26e2, 0x4bf2702, indexCPS2_Magneto, 1 },
    { "(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2702, 0x4bf2722, indexCPS2_Magneto, 2 },
    { "(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2722, 0x4bf2742, indexCPS2_Magneto, 3 },
    { "(05) Not Used", 0x4bf2742, 0x4bf2762, indexCPS2_Magneto, 4 },
    { "(06) Not Used", 0x4bf2762, 0x4bf2782, indexCPS2_Magneto, 5 },
    { "(07) Not Used", 0x4bf2782, 0x4bf27a2, indexCPS2_Magneto, 6 },
    { "(08) Not Used", 0x4bf27a2, 0x4bf27c2, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4bf27c2, 0x4bf27e2, indexCPS2_Magneto, 0 },
    { "Burning Light", 0x4bf27e2, 0x4bf2802, indexCPS2_Magneto, 0 },
    { "Shocked Dark", 0x4bf2802, 0x4bf2822, indexCPS2_Magneto, 0 },
    { "Shocked Light", 0x4bf2822, 0x4bf2842, indexCPS2_Magneto, 0 },
    { "Dark Burning Dark", 0x4bf2842, 0x4bf2862, indexCPS2_Magneto, 0 },
    { "Dark Burning Light", 0x4bf2862, 0x4bf2882, indexCPS2_Magneto, 0 },
    { "Kinetic Charge Dark", 0x4bf2882, 0x4bf28a2, indexCPS2_Magneto, 0 },
    { "Kinetic Charge Light", 0x4bf28a2, 0x4bf28c2, indexCPS2_Magneto, 0 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Not Used", 0x4bf28c2, 0x4bf28e2 },
    { /* 0x0a */ "ID:01-09 Not Used - Glitched Palette ID:10-15 c.mp (ball - all buttons) / c.hk (effect after c.mp)", 0x4bf28e2, 0x4bf2902, indexCPS2_Magneto, 11 },
};

const sDescTreeNode MVC2_A_MAGNETO_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_LP, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_LK, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_HP, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_HK, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_A1, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_A2, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_LP[] =
{
    { "Main Color / Mystic Stare LP", 0x4cda622, 0x4cda642, indexCPS2_Shuma, 0, &pairUnhandled },
    { "(02) Dash Frame / Guard Frame", 0x4cda642, 0x4cda662, indexCPS2_Shuma, 1 },
    { "(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda662, 0x4cda682, indexCPS2_Shuma, 2 },
    { "(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda682, 0x4cda6a2, indexCPS2_Shuma, 3 },
    { "(05) Not Used", 0x4cda6a2, 0x4cda6c2, indexCPS2_Shuma, 4 },
    { "(06) Not Used", 0x4cda6c2, 0x4cda6e2, indexCPS2_Shuma, 5 },
    { "(07) Not Used", 0x4cda6e2, 0x4cda702, indexCPS2_Shuma, 6 },
    { "(08) Not Used", 0x4cda702, 0x4cda722, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_LK[] =
{
    { "Main Color / Mystic Stare LK", 0x4cda722, 0x4cda742, indexCPS2_Shuma, 0, &pairUnhandled },
    { "(02) Dash Frame / Guard Frame", 0x4cda742, 0x4cda762, indexCPS2_Shuma, 1 },
    { "(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda762, 0x4cda782, indexCPS2_Shuma, 2 },
    { "(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda782, 0x4cda7a2, indexCPS2_Shuma, 3 },
    { "(05) Not Used", 0x4cda7a2, 0x4cda7c2, indexCPS2_Shuma, 4 },
    { "(06) Not Used", 0x4cda7c2, 0x4cda7e2, indexCPS2_Shuma, 5 },
    { "(07) Not Used", 0x4cda7e2, 0x4cda802, indexCPS2_Shuma, 6 },
    { "(08) Not Used", 0x4cda802, 0x4cda822, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_HP[] =
{
    { "Main Color / Mystic Stare HP", 0x4cda822, 0x4cda842, indexCPS2_Shuma, 0, &pairUnhandled },
    { "(02) Dash Frame / Guard Frame", 0x4cda842, 0x4cda862, indexCPS2_Shuma, 1 },
    { "(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda862, 0x4cda882, indexCPS2_Shuma, 2 },
    { "(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda882, 0x4cda8a2, indexCPS2_Shuma, 3 },
    { "(05) Not Used", 0x4cda8a2, 0x4cda8c2, indexCPS2_Shuma, 4 },
    { "(06) Not Used", 0x4cda8c2, 0x4cda8e2, indexCPS2_Shuma, 5 },
    { "(07) Not Used", 0x4cda8e2, 0x4cda902, indexCPS2_Shuma, 6 },
    { "(08) Not Used", 0x4cda902, 0x4cda922, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_HK[] =
{
    { "Main Color / Mystic Stare HK", 0x4cda922, 0x4cda942, indexCPS2_Shuma, 0, &pairUnhandled },
    { "(02) Dash Frame / Guard Frame", 0x4cda942, 0x4cda962, indexCPS2_Shuma, 1 },
    { "(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda962, 0x4cda982, indexCPS2_Shuma, 2 },
    { "(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda982, 0x4cda9a2, indexCPS2_Shuma, 3 },
    { "(05) Not Used", 0x4cda9a2, 0x4cda9c2, indexCPS2_Shuma, 4 },
    { "(06) Not Used", 0x4cda9c2, 0x4cda9e2, indexCPS2_Shuma, 5 },
    { "(07) Not Used", 0x4cda9e2, 0x4cdaa02, indexCPS2_Shuma, 6 },
    { "(08) Not Used", 0x4cdaa02, 0x4cdaa22, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_A1[] =
{
    { "Main Color / Mystic Stare A1", 0x4cdaa22, 0x4cdaa42, indexCPS2_Shuma, 0, &pairUnhandled },
    { "(02) Dash Frame / Guard Frame", 0x4cdaa42, 0x4cdaa62, indexCPS2_Shuma, 1 },
    { "(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cdaa62, 0x4cdaa82, indexCPS2_Shuma, 2 },
    { "(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cdaa82, 0x4cdaaa2, indexCPS2_Shuma, 3 },
    { "(05) Not Used", 0x4cdaaa2, 0x4cdaac2, indexCPS2_Shuma, 4 },
    { "(06) Not Used", 0x4cdaac2, 0x4cdaae2, indexCPS2_Shuma, 5 },
    { "(07) Not Used", 0x4cdaae2, 0x4cdab02, indexCPS2_Shuma, 6 },
    { "(08) Not Used", 0x4cdab02, 0x4cdab22, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_A2[] =
{
    { "Main Color / Mystic Stare A2", 0x4cdab22, 0x4cdab42, indexCPS2_Shuma, 0, &pairUnhandled },
    { "(02) Dash Frame / Guard Frame", 0x4cdab42, 0x4cdab62, indexCPS2_Shuma, 1 },
    { "(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cdab62, 0x4cdab82, indexCPS2_Shuma, 2 },
    { "(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cdab82, 0x4cdaba2, indexCPS2_Shuma, 3 },
    { "(05) Not Used", 0x4cdaba2, 0x4cdabc2, indexCPS2_Shuma, 4 },
    { "(06) Not Used", 0x4cdabc2, 0x4cdabe2, indexCPS2_Shuma, 5 },
    { "(07) Not Used", 0x4cdabe2, 0x4cdac02, indexCPS2_Shuma, 6 },
    { "(08) Not Used", 0x4cdac02, 0x4cdac22, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4cdac22, 0x4cdac42, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Burning Dark 2", 0x4cdac42, 0x4cdac62, indexCPS2_Shuma, 1 },
    { "Burning Light", 0x4cdac62, 0x4cdac82, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Burning Light 2", 0x4cdac82, 0x4cdaca2, indexCPS2_Shuma, 1 },
    { "Shocked Dark", 0x4cdaca2, 0x4cdacc2, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Shocked Dark 2", 0x4cdacc2, 0x4cdace2, indexCPS2_Shuma, 1 },
    { "Shocked Light", 0x4cdace2, 0x4cdad02, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Shocked Light 2", 0x4cdad02, 0x4cdad22, indexCPS2_Shuma, 1 },
    { "Dark Burning Dark", 0x4cdad22, 0x4cdad42, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Dark Burning Dark 2", 0x4cdad42, 0x4cdad62, indexCPS2_Shuma, 1 },
    { "Dark Burning Light", 0x4cdad62, 0x4cdad82, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Dark Burning Light 2", 0x4cdad82, 0x4cdada2, indexCPS2_Shuma, 1 },
    { "Kinetic Charge Dark", 0x4cdada2, 0x4cdadc2, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Kinetic Charge Dark 2", 0x4cdadc2, 0x4cdade2, indexCPS2_Shuma, 1 },
    { "Kinetic Charge Light", 0x4cdade2, 0x4cdae02, indexCPS2_Shuma, 0, &pairUnhandled },
    { "Kinetic Charge Light 2", 0x4cdae02, 0x4cdae22, indexCPS2_Shuma, 1 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_EXTRAS[] =
{
    { /* 0x11 */ "LP - Stance Frame (after FP) 1", 0x4cdae22, 0x4cdae42, indexCPS2_Shuma, 0 },
    { /* 0x12 */ "LP - Stance Frame (after FP) 2", 0x4cdae42, 0x4cdae62, indexCPS2_Shuma, 0 },
    { /* 0x13 */ "LP - Stance Frame (after FP) 3", 0x4cdae62, 0x4cdae82, indexCPS2_Shuma, 0 },
    { /* 0x14 */ "LP - Stance Frame (after FP) 4", 0x4cdae82, 0x4cdaea2, indexCPS2_Shuma, 0 },
    { /* 0x15 */ "LP - Stance Frame (after FP) 5", 0x4cdaea2, 0x4cdaec2, indexCPS2_Shuma, 0 },
    { /* 0x16 */ "LP - Stone Drop (d+HK) Frames 1", 0x4cdaec2, 0x4cdaee2, indexCPS2_Shuma, 0 },
    { /* 0x17 */ "LP - Stone Drop (d+HK) Frames 2", 0x4cdaee2, 0x4cdaf02, indexCPS2_Shuma, 0 },
    { /* 0x18 */ "LP - Stone Drop (d+HK) Frames 3", 0x4cdaf02, 0x4cdaf22, indexCPS2_Shuma, 0 },
    { /* 0x19 */ "LP - Stone Drop (d+HK) Frames 4", 0x4cdaf22, 0x4cdaf42, indexCPS2_Shuma, 0 },
    { /* 0x1a */ "LP - Stone Drop (d+HK) Frames 5", 0x4cdaf42, 0x4cdaf62, indexCPS2_Shuma, 0 },
    { /* 0x1b */ "Unused: Extra 0x1b", 0x4cdaf62, 0x4cdaf82 },
    { /* 0x1c */ "Unused: Extra 0x1c", 0x4cdaf82, 0x4cdafa2 },
    { /* 0x1d */ "Unused: Extra 0x1d", 0x4cdafa2, 0x4cdafc2 },
    { /* 0x1e */ "Unused: Extra 0x1e", 0x4cdafc2, 0x4cdafe2 },
    { /* 0x1f */ "Unused: Extra 0x1f", 0x4cdafe2, 0x4cdb002 },
    { /* 0x20 */ "Unused: Extra 0x20", 0x4cdb002, 0x4cdb022 },
    { /* 0x21 */ "Unused: Extra 0x21", 0x4cdb022, 0x4cdb042 },
    { /* 0x22 */ "Unused: Extra 0x22", 0x4cdb042, 0x4cdb062 },
    { /* 0x23 */ "Unused: Extra 0x23", 0x4cdb062, 0x4cdb082 },
    { /* 0x24 */ "Unused: Extra 0x24", 0x4cdb082, 0x4cdb0a2 },
    { /* 0x25 */ "LP - HK grab (don't edit) 1", 0x4cdb0a2, 0x4cdb0c2, indexCPS2_Shuma, 0 },
    { /* 0x26 */ "LP - HK grab (don't edit) 2", 0x4cdb0c2, 0x4cdb0e2, indexCPS2_Shuma, 0 },
    { /* 0x27 */ "LP - HK grab (don't edit) 3", 0x4cdb0e2, 0x4cdb102, indexCPS2_Shuma, 0 },
    { /* 0x28 */ "LP - HK grab (don't edit) 4", 0x4cdb102, 0x4cdb122, indexCPS2_Shuma, 0 },
    { /* 0x29 */ "LP - HK grab (don't edit) 5", 0x4cdb122, 0x4cdb142, indexCPS2_Shuma, 0 },
    { /* 0x2a */ "LP - HK grab (don't edit) 6", 0x4cdb142, 0x4cdb162, indexCPS2_Shuma, 0 },
    { /* 0x2b */ "LP - HK grab (don't edit) 7", 0x4cdb162, 0x4cdb182, indexCPS2_Shuma, 0 },
    { /* 0x2c */ "LP - HK grab (don't edit) 8", 0x4cdb182, 0x4cdb1a2, indexCPS2_Shuma, 0 },
    { /* 0x2d */ "LP - HK grab (don't edit) 9", 0x4cdb1a2, 0x4cdb1c2, indexCPS2_Shuma, 0 },
    { /* 0x2e */ "LP - HK grab (don't edit) 10", 0x4cdb1c2, 0x4cdb1e2, indexCPS2_Shuma, 0 },
    { /* 0x2f */ "LP - HP Flash Frames 1", 0x4cdb1e2, 0x4cdb202, indexCPS2_Shuma, 0 },
    { /* 0x30 */ "LP - HP Flash Frames 2", 0x4cdb202, 0x4cdb222, indexCPS2_Shuma, 0 },
    { /* 0x31 */ "LP - HP Flash Frames 3", 0x4cdb222, 0x4cdb242, indexCPS2_Shuma, 0 },
    { /* 0x32 */ "LP - HP Flash Frames 4", 0x4cdb242, 0x4cdb262, indexCPS2_Shuma, 0 },
    { /* 0x33 */ "LP - HP Flash Frames 5", 0x4cdb262, 0x4cdb282, indexCPS2_Shuma, 0 },
    { /* 0x34 */ "LP - HP Flash Frames 6", 0x4cdb282, 0x4cdb2a2, indexCPS2_Shuma, 0 },
    { /* 0x35 */ "LP - HP Flash Frames 7", 0x4cdb2a2, 0x4cdb2c2, indexCPS2_Shuma, 0 },
    { /* 0x36 */ "LP - Chaos Dimension Frame 1", 0x4cdb2c2, 0x4cdb2e2, indexCPS2_Shuma, 0 },
    { /* 0x37 */ "LP - Chaos Dimension (Dash) Frame 1", 0x4cdb2e2, 0x4cdb302, indexCPS2_Shuma, 0 },
    { /* 0x38 */ "LP - Chaos Dimension Frame 2", 0x4cdb302, 0x4cdb322, indexCPS2_Shuma, 0 },
    { /* 0x39 */ "LP - Chaos Dimension (Dash) Frame 2", 0x4cdb322, 0x4cdb342, indexCPS2_Shuma, 0 },
    { /* 0x3a */ "LP - Chaos Dimension Frame 3", 0x4cdb342, 0x4cdb362, indexCPS2_Shuma, 0 },
    { /* 0x3b */ "LP - Chaos Dimension (Dash) Frame 3", 0x4cdb362, 0x4cdb382, indexCPS2_Shuma, 0 },
    { /* 0x3c */ "LP - Chaos Dimension Frame 4", 0x4cdb382, 0x4cdb3a2, indexCPS2_Shuma, 0 },
    { /* 0x3d */ "LP - Chaos Dimension (Dash) Frame 4", 0x4cdb3a2, 0x4cdb3c2, indexCPS2_Shuma, 0 },
    { /* 0x3e */ "LP - Chaos Dimension Frame 5", 0x4cdb3c2, 0x4cdb3e2, indexCPS2_Shuma, 0 },
    { /* 0x3f */ "LP - Chaos Dimension (Dash) Frame 5", 0x4cdb3e2, 0x4cdb402, indexCPS2_Shuma, 0 },
    { /* 0x40 */ "LP - Mystic Smash Shadows", 0x4cdb402, 0x4cdb422, indexCPS2_Shuma, 0 },
    { /* 0x41 */ "LK - Stance Frame (after FP) 1", 0x4cdb422, 0x4cdb442, indexCPS2_Shuma, 0 },
    { /* 0x42 */ "LK - Stance Frame (after FP) 2", 0x4cdb442, 0x4cdb462, indexCPS2_Shuma, 0 },
    { /* 0x43 */ "LK - Stance Frame (after FP) 3", 0x4cdb462, 0x4cdb482, indexCPS2_Shuma, 0 },
    { /* 0x44 */ "LK - Stance Frame (after FP) 4", 0x4cdb482, 0x4cdb4a2, indexCPS2_Shuma, 0 },
    { /* 0x45 */ "LK - Stance Frame (after FP) 5", 0x4cdb4a2, 0x4cdb4c2, indexCPS2_Shuma, 0 },
    { /* 0x46 */ "LK - Stone Drop (d+HK) Frames 1", 0x4cdb4c2, 0x4cdb4e2, indexCPS2_Shuma, 0 },
    { /* 0x47 */ "LK - Stone Drop (d+HK) Frames 2", 0x4cdb4e2, 0x4cdb502, indexCPS2_Shuma, 0 },
    { /* 0x48 */ "LK - Stone Drop (d+HK) Frames 3", 0x4cdb502, 0x4cdb522, indexCPS2_Shuma, 0 },
    { /* 0x49 */ "LK - Stone Drop (d+HK) Frames 4", 0x4cdb522, 0x4cdb542, indexCPS2_Shuma, 0 },
    { /* 0x4a */ "LK - Stone Drop (d+HK) Frames 5", 0x4cdb542, 0x4cdb562, indexCPS2_Shuma, 0 },
    { /* 0x4b */ "Unused: Extra 0x4b", 0x4cdb562, 0x4cdb582 },
    { /* 0x4c */ "Unused: Extra 0x4c", 0x4cdb582, 0x4cdb5a2 },
    { /* 0x4d */ "Unused: Extra 0x4d", 0x4cdb5a2, 0x4cdb5c2 },
    { /* 0x4e */ "Unused: Extra 0x4e", 0x4cdb5c2, 0x4cdb5e2 },
    { /* 0x4f */ "Unused: Extra 0x4f", 0x4cdb5e2, 0x4cdb602 },
    { /* 0x50 */ "Unused: Extra 0x50", 0x4cdb602, 0x4cdb622 },
    { /* 0x51 */ "Unused: Extra 0x51", 0x4cdb622, 0x4cdb642 },
    { /* 0x52 */ "Unused: Extra 0x52", 0x4cdb642, 0x4cdb662 },
    { /* 0x53 */ "Unused: Extra 0x53", 0x4cdb662, 0x4cdb682 },
    { /* 0x54 */ "Unused: Extra 0x54", 0x4cdb682, 0x4cdb6a2 },
    { /* 0x55 */ "LK - HK grab (don't edit) 1", 0x4cdb6a2, 0x4cdb6c2, indexCPS2_Shuma, 0 },
    { /* 0x56 */ "LK - HK grab (don't edit) 2", 0x4cdb6c2, 0x4cdb6e2, indexCPS2_Shuma, 0 },
    { /* 0x57 */ "LK - HK grab (don't edit) 3", 0x4cdb6e2, 0x4cdb702, indexCPS2_Shuma, 0 },
    { /* 0x58 */ "LK - HK grab (don't edit) 4", 0x4cdb702, 0x4cdb722, indexCPS2_Shuma, 0 },
    { /* 0x59 */ "LK - HK grab (don't edit) 5", 0x4cdb722, 0x4cdb742, indexCPS2_Shuma, 0 },
    { /* 0x5a */ "LK - HK grab (don't edit) 6", 0x4cdb742, 0x4cdb762, indexCPS2_Shuma, 0 },
    { /* 0x5b */ "LK - HK grab (don't edit) 7", 0x4cdb762, 0x4cdb782, indexCPS2_Shuma, 0 },
    { /* 0x5c */ "LK - HK grab (don't edit) 8", 0x4cdb782, 0x4cdb7a2, indexCPS2_Shuma, 0 },
    { /* 0x5d */ "LK - HK grab (don't edit) 9", 0x4cdb7a2, 0x4cdb7c2, indexCPS2_Shuma, 0 },
    { /* 0x5e */ "LK - HK grab (don't edit) 10", 0x4cdb7c2, 0x4cdb7e2, indexCPS2_Shuma, 0 },
    { /* 0x5f */ "LK - HP Flash Frames 1", 0x4cdb7e2, 0x4cdb802, indexCPS2_Shuma, 0 },
    { /* 0x60 */ "LK - HP Flash Frames 2", 0x4cdb802, 0x4cdb822, indexCPS2_Shuma, 0 },
    { /* 0x61 */ "LK - HP Flash Frames 3", 0x4cdb822, 0x4cdb842, indexCPS2_Shuma, 0 },
    { /* 0x62 */ "LK - HP Flash Frames 4", 0x4cdb842, 0x4cdb862, indexCPS2_Shuma, 0 },
    { /* 0x63 */ "LK - HP Flash Frames 5", 0x4cdb862, 0x4cdb882, indexCPS2_Shuma, 0 },
    { /* 0x64 */ "LK - HP Flash Frames 6", 0x4cdb882, 0x4cdb8a2, indexCPS2_Shuma, 0 },
    { /* 0x65 */ "LK - HP Flash Frames 7", 0x4cdb8a2, 0x4cdb8c2, indexCPS2_Shuma, 0 },
    { /* 0x66 */ "LK - Chaos Dimension Frame 1", 0x4cdb8c2, 0x4cdb8e2, indexCPS2_Shuma, 0 },
    { /* 0x67 */ "LK - Chaos Dimension (Dash) Frame 1", 0x4cdb8e2, 0x4cdb902, indexCPS2_Shuma, 0 },
    { /* 0x68 */ "LK - Chaos Dimension Frame 2", 0x4cdb902, 0x4cdb922, indexCPS2_Shuma, 0 },
    { /* 0x69 */ "LK - Chaos Dimension (Dash) Frame 2", 0x4cdb922, 0x4cdb942, indexCPS2_Shuma, 0 },
    { /* 0x6a */ "LK - Chaos Dimension Frame 3", 0x4cdb942, 0x4cdb962, indexCPS2_Shuma, 0 },
    { /* 0x6b */ "LK - Chaos Dimension (Dash) Frame 3", 0x4cdb962, 0x4cdb982, indexCPS2_Shuma, 0 },
    { /* 0x6c */ "LK - Chaos Dimension Frame 4", 0x4cdb982, 0x4cdb9a2, indexCPS2_Shuma, 0 },
    { /* 0x6d */ "LK - Chaos Dimension (Dash) Frame 4", 0x4cdb9a2, 0x4cdb9c2, indexCPS2_Shuma, 0 },
    { /* 0x6e */ "LK - Chaos Dimension Frame 5", 0x4cdb9c2, 0x4cdb9e2, indexCPS2_Shuma, 0 },
    { /* 0x6f */ "LK - Chaos Dimension (Dash) Frame 5", 0x4cdb9e2, 0x4cdba02, indexCPS2_Shuma, 0 },
    { /* 0x70 */ "LK - Mystic Smash Shadows", 0x4cdba02, 0x4cdba22, indexCPS2_Shuma, 0 },
    { /* 0x71 */ "HP - Stance Frame (after FP) 1", 0x4cdba22, 0x4cdba42, indexCPS2_Shuma, 0 },
    { /* 0x72 */ "HP - Stance Frame (after FP) 2", 0x4cdba42, 0x4cdba62, indexCPS2_Shuma, 0 },
    { /* 0x73 */ "HP - Stance Frame (after FP) 3", 0x4cdba62, 0x4cdba82, indexCPS2_Shuma, 0 },
    { /* 0x74 */ "HP - Stance Frame (after FP) 4", 0x4cdba82, 0x4cdbaa2, indexCPS2_Shuma, 0 },
    { /* 0x75 */ "HP - Stance Frame (after FP) 5", 0x4cdbaa2, 0x4cdbac2, indexCPS2_Shuma, 0 },
    { /* 0x76 */ "HP - Stone Drop (d+HK) Frames 1", 0x4cdbac2, 0x4cdbae2, indexCPS2_Shuma, 0 },
    { /* 0x77 */ "HP - Stone Drop (d+HK) Frames 2", 0x4cdbae2, 0x4cdbb02, indexCPS2_Shuma, 0 },
    { /* 0x78 */ "HP - Stone Drop (d+HK) Frames 3", 0x4cdbb02, 0x4cdbb22, indexCPS2_Shuma, 0 },
    { /* 0x79 */ "HP - Stone Drop (d+HK) Frames 4", 0x4cdbb22, 0x4cdbb42, indexCPS2_Shuma, 0 },
    { /* 0x7a */ "HP - Stone Drop (d+HK) Frames 5", 0x4cdbb42, 0x4cdbb62, indexCPS2_Shuma, 0 },
    { /* 0x7b */ "Unused: Extra 0x7b", 0x4cdbb62, 0x4cdbb82 },
    { /* 0x7c */ "Unused: Extra 0x7c", 0x4cdbb82, 0x4cdbba2 },
    { /* 0x7d */ "Unused: Extra 0x7d", 0x4cdbba2, 0x4cdbbc2 },
    { /* 0x7e */ "Unused: Extra 0x7e", 0x4cdbbc2, 0x4cdbbe2 },
    { /* 0x7f */ "Unused: Extra 0x7f", 0x4cdbbe2, 0x4cdbc02 },
    { /* 0x80 */ "Unused: Extra 0x80", 0x4cdbc02, 0x4cdbc22 },
    { /* 0x81 */ "Unused: Extra 0x81", 0x4cdbc22, 0x4cdbc42 },
    { /* 0x82 */ "Unused: Extra 0x82", 0x4cdbc42, 0x4cdbc62 },
    { /* 0x83 */ "Unused: Extra 0x83", 0x4cdbc62, 0x4cdbc82 },
    { /* 0x84 */ "Unused: Extra 0x84", 0x4cdbc82, 0x4cdbca2 },
    { /* 0x85 */ "HP - HK grab (don't edit) 1", 0x4cdbca2, 0x4cdbcc2, indexCPS2_Shuma, 0 },
    { /* 0x86 */ "HP - HK grab (don't edit) 2", 0x4cdbcc2, 0x4cdbce2, indexCPS2_Shuma, 0 },
    { /* 0x87 */ "HP - HK grab (don't edit) 3", 0x4cdbce2, 0x4cdbd02, indexCPS2_Shuma, 0 },
    { /* 0x88 */ "HP - HK grab (don't edit) 4", 0x4cdbd02, 0x4cdbd22, indexCPS2_Shuma, 0 },
    { /* 0x89 */ "HP - HK grab (don't edit) 5", 0x4cdbd22, 0x4cdbd42, indexCPS2_Shuma, 0 },
    { /* 0x8a */ "HP - HK grab (don't edit) 6", 0x4cdbd42, 0x4cdbd62, indexCPS2_Shuma, 0 },
    { /* 0x8b */ "HP - HK grab (don't edit) 7", 0x4cdbd62, 0x4cdbd82, indexCPS2_Shuma, 0 },
    { /* 0x8c */ "HP - HK grab (don't edit) 8", 0x4cdbd82, 0x4cdbda2, indexCPS2_Shuma, 0 },
    { /* 0x8d */ "HP - HK grab (don't edit) 9", 0x4cdbda2, 0x4cdbdc2, indexCPS2_Shuma, 0 },
    { /* 0x8e */ "HP - HK grab (don't edit) 10", 0x4cdbdc2, 0x4cdbde2, indexCPS2_Shuma, 0 },
    { /* 0x8f */ "HP - HP Flash Frames 1", 0x4cdbde2, 0x4cdbe02, indexCPS2_Shuma, 0 },
    { /* 0x90 */ "HP - HP Flash Frames 2", 0x4cdbe02, 0x4cdbe22, indexCPS2_Shuma, 0 },
    { /* 0x91 */ "HP - HP Flash Frames 3", 0x4cdbe22, 0x4cdbe42, indexCPS2_Shuma, 0 },
    { /* 0x92 */ "HP - HP Flash Frames 4", 0x4cdbe42, 0x4cdbe62, indexCPS2_Shuma, 0 },
    { /* 0x93 */ "HP - HP Flash Frames 5", 0x4cdbe62, 0x4cdbe82, indexCPS2_Shuma, 0 },
    { /* 0x94 */ "HP - HP Flash Frames 6", 0x4cdbe82, 0x4cdbea2, indexCPS2_Shuma, 0 },
    { /* 0x95 */ "HP - HP Flash Frames 7", 0x4cdbea2, 0x4cdbec2, indexCPS2_Shuma, 0 },
    { /* 0x96 */ "HP - Chaos Dimension Frame 1", 0x4cdbec2, 0x4cdbee2, indexCPS2_Shuma, 0 },
    { /* 0x97 */ "HP - Chaos Dimension (Dash) Frame 1", 0x4cdbee2, 0x4cdbf02, indexCPS2_Shuma, 0 },
    { /* 0x98 */ "HP - Chaos Dimension Frame 2", 0x4cdbf02, 0x4cdbf22, indexCPS2_Shuma, 0 },
    { /* 0x99 */ "HP - Chaos Dimension (Dash) Frame 2", 0x4cdbf22, 0x4cdbf42, indexCPS2_Shuma, 0 },
    { /* 0x9a */ "HP - Chaos Dimension Frame 3", 0x4cdbf42, 0x4cdbf62, indexCPS2_Shuma, 0 },
    { /* 0x9b */ "HP - Chaos Dimension (Dash) Frame 3", 0x4cdbf62, 0x4cdbf82, indexCPS2_Shuma, 0 },
    { /* 0x9c */ "HP - Chaos Dimension Frame 4", 0x4cdbf82, 0x4cdbfa2, indexCPS2_Shuma, 0 },
    { /* 0x9d */ "HP - Chaos Dimension (Dash) Frame 4", 0x4cdbfa2, 0x4cdbfc2, indexCPS2_Shuma, 0 },
    { /* 0x9e */ "HP - Chaos Dimension Frame 5", 0x4cdbfc2, 0x4cdbfe2, indexCPS2_Shuma, 0 },
    { /* 0x9f */ "HP - Chaos Dimension (Dash) Frame 5", 0x4cdbfe2, 0x4cdc002, indexCPS2_Shuma, 0 },
    { /* 0xa0 */ "HP - Mystic Smash Shadows", 0x4cdc002, 0x4cdc022, indexCPS2_Shuma, 0 },
    { /* 0xa1 */ "HK - Stance Frame (after FP) 1", 0x4cdc022, 0x4cdc042, indexCPS2_Shuma, 0 },
    { /* 0xa2 */ "HK - Stance Frame (after FP) 2", 0x4cdc042, 0x4cdc062, indexCPS2_Shuma, 0 },
    { /* 0xa3 */ "HK - Stance Frame (after FP) 3", 0x4cdc062, 0x4cdc082, indexCPS2_Shuma, 0 },
    { /* 0xa4 */ "HK - Stance Frame (after FP) 4", 0x4cdc082, 0x4cdc0a2, indexCPS2_Shuma, 0 },
    { /* 0xa5 */ "HK - Stance Frame (after FP) 5", 0x4cdc0a2, 0x4cdc0c2, indexCPS2_Shuma, 0 },
    { /* 0xa6 */ "HK - Stone Drop (d+HK) Frames 1", 0x4cdc0c2, 0x4cdc0e2, indexCPS2_Shuma, 0 },
    { /* 0xa7 */ "HK - Stone Drop (d+HK) Frames 2", 0x4cdc0e2, 0x4cdc102, indexCPS2_Shuma, 0 },
    { /* 0xa8 */ "HK - Stone Drop (d+HK) Frames 3", 0x4cdc102, 0x4cdc122, indexCPS2_Shuma, 0 },
    { /* 0xa9 */ "HK - Stone Drop (d+HK) Frames 4", 0x4cdc122, 0x4cdc142, indexCPS2_Shuma, 0 },
    { /* 0xaa */ "HK - Stone Drop (d+HK) Frames 5", 0x4cdc142, 0x4cdc162, indexCPS2_Shuma, 0 },
    { /* 0xab */ "Unused: Extra 0xab", 0x4cdc162, 0x4cdc182 },
    { /* 0xac */ "Unused: Extra 0xac", 0x4cdc182, 0x4cdc1a2 },
    { /* 0xad */ "Unused: Extra 0xad", 0x4cdc1a2, 0x4cdc1c2 },
    { /* 0xae */ "Unused: Extra 0xae", 0x4cdc1c2, 0x4cdc1e2 },
    { /* 0xaf */ "Unused: Extra 0xaf", 0x4cdc1e2, 0x4cdc202 },
    { /* 0xb0 */ "Unused: Extra 0xb0", 0x4cdc202, 0x4cdc222 },
    { /* 0xb1 */ "Unused: Extra 0xb1", 0x4cdc222, 0x4cdc242 },
    { /* 0xb2 */ "Unused: Extra 0xb2", 0x4cdc242, 0x4cdc262 },
    { /* 0xb3 */ "Unused: Extra 0xb3", 0x4cdc262, 0x4cdc282 },
    { /* 0xb4 */ "Unused: Extra 0xb4", 0x4cdc282, 0x4cdc2a2 },
    { /* 0xb5 */ "HK - HK grab (don't edit) 1", 0x4cdc2a2, 0x4cdc2c2, indexCPS2_Shuma, 0 },
    { /* 0xb6 */ "HK - HK grab (don't edit) 2", 0x4cdc2c2, 0x4cdc2e2, indexCPS2_Shuma, 0 },
    { /* 0xb7 */ "HK - HK grab (don't edit) 3", 0x4cdc2e2, 0x4cdc302, indexCPS2_Shuma, 0 },
    { /* 0xb8 */ "HK - HK grab (don't edit) 4", 0x4cdc302, 0x4cdc322, indexCPS2_Shuma, 0 },
    { /* 0xb9 */ "HK - HK grab (don't edit) 5", 0x4cdc322, 0x4cdc342, indexCPS2_Shuma, 0 },
    { /* 0xba */ "HK - HK grab (don't edit) 6", 0x4cdc342, 0x4cdc362, indexCPS2_Shuma, 0 },
    { /* 0xbb */ "HK - HK grab (don't edit) 7", 0x4cdc362, 0x4cdc382, indexCPS2_Shuma, 0 },
    { /* 0xbc */ "HK - HK grab (don't edit) 8", 0x4cdc382, 0x4cdc3a2, indexCPS2_Shuma, 0 },
    { /* 0xbd */ "HK - HK grab (don't edit) 9", 0x4cdc3a2, 0x4cdc3c2, indexCPS2_Shuma, 0 },
    { /* 0xbe */ "HK - HK grab (don't edit) 10", 0x4cdc3c2, 0x4cdc3e2, indexCPS2_Shuma, 0 },
    { /* 0xbf */ "HK - HP Flash Frames 1", 0x4cdc3e2, 0x4cdc402, indexCPS2_Shuma, 0 },
    { /* 0xc0 */ "HK - HP Flash Frames 2", 0x4cdc402, 0x4cdc422, indexCPS2_Shuma, 0 },
    { /* 0xc1 */ "HK - HP Flash Frames 3", 0x4cdc422, 0x4cdc442, indexCPS2_Shuma, 0 },
    { /* 0xc2 */ "HK - HP Flash Frames 4", 0x4cdc442, 0x4cdc462, indexCPS2_Shuma, 0 },
    { /* 0xc3 */ "HK - HP Flash Frames 5", 0x4cdc462, 0x4cdc482, indexCPS2_Shuma, 0 },
    { /* 0xc4 */ "HK - HP Flash Frames 6", 0x4cdc482, 0x4cdc4a2, indexCPS2_Shuma, 0 },
    { /* 0xc5 */ "HK - HP Flash Frames 7", 0x4cdc4a2, 0x4cdc4c2, indexCPS2_Shuma, 0 },
    { /* 0xc6 */ "HK - Chaos Dimension Frame 1", 0x4cdc4c2, 0x4cdc4e2, indexCPS2_Shuma, 0 },
    { /* 0xc7 */ "HK - Chaos Dimension (Dash) Frame 1", 0x4cdc4e2, 0x4cdc502, indexCPS2_Shuma, 0 },
    { /* 0xc8 */ "HK - Chaos Dimension Frame 2", 0x4cdc502, 0x4cdc522, indexCPS2_Shuma, 0 },
    { /* 0xc9 */ "HK - Chaos Dimension (Dash) Frame 2", 0x4cdc522, 0x4cdc542, indexCPS2_Shuma, 0 },
    { /* 0xca */ "HK - Chaos Dimension Frame 3", 0x4cdc542, 0x4cdc562, indexCPS2_Shuma, 0 },
    { /* 0xcb */ "HK - Chaos Dimension (Dash) Frame 3", 0x4cdc562, 0x4cdc582, indexCPS2_Shuma, 0 },
    { /* 0xcc */ "HK - Chaos Dimension Frame 4", 0x4cdc582, 0x4cdc5a2, indexCPS2_Shuma, 0 },
    { /* 0xcd */ "HK - Chaos Dimension (Dash) Frame 4", 0x4cdc5a2, 0x4cdc5c2, indexCPS2_Shuma, 0 },
    { /* 0xce */ "HK - Chaos Dimension Frame 5", 0x4cdc5c2, 0x4cdc5e2, indexCPS2_Shuma, 0 },
    { /* 0xcf */ "HK - Chaos Dimension (Dash) Frame 5", 0x4cdc5e2, 0x4cdc602, indexCPS2_Shuma, 0 },
    { /* 0xd0 */ "HK - Mystic Smash Shadows", 0x4cdc602, 0x4cdc622, indexCPS2_Shuma, 0 },
    { /* 0xd1 */ "A1 - Stance Frame (after FP) 1", 0x4cdc622, 0x4cdc642, indexCPS2_Shuma, 0 },
    { /* 0xd2 */ "A1 - Stance Frame (after FP) 2", 0x4cdc642, 0x4cdc662, indexCPS2_Shuma, 0 },
    { /* 0xd3 */ "A1 - Stance Frame (after FP) 3", 0x4cdc662, 0x4cdc682, indexCPS2_Shuma, 0 },
    { /* 0xd4 */ "A1 - Stance Frame (after FP) 4", 0x4cdc682, 0x4cdc6a2, indexCPS2_Shuma, 0 },
    { /* 0xd5 */ "A1 - Stance Frame (after FP) 5", 0x4cdc6a2, 0x4cdc6c2, indexCPS2_Shuma, 0 },
    { /* 0xd6 */ "A1 - Stone Drop (d+HK) Frames 1", 0x4cdc6c2, 0x4cdc6e2, indexCPS2_Shuma, 0 },
    { /* 0xd7 */ "A1 - Stone Drop (d+HK) Frames 2", 0x4cdc6e2, 0x4cdc702, indexCPS2_Shuma, 0 },
    { /* 0xd8 */ "A1 - Stone Drop (d+HK) Frames 3", 0x4cdc702, 0x4cdc722, indexCPS2_Shuma, 0 },
    { /* 0xd9 */ "A1 - Stone Drop (d+HK) Frames 4", 0x4cdc722, 0x4cdc742, indexCPS2_Shuma, 0 },
    { /* 0xda */ "A1 - Stone Drop (d+HK) Frames 5", 0x4cdc742, 0x4cdc762, indexCPS2_Shuma, 0 },
    { /* 0xdb */ "Unused: Extra 0xdb", 0x4cdc762, 0x4cdc782 },
    { /* 0xdc */ "Unused: Extra 0xdc", 0x4cdc782, 0x4cdc7a2 },
    { /* 0xdd */ "Unused: Extra 0xdd", 0x4cdc7a2, 0x4cdc7c2 },
    { /* 0xde */ "Unused: Extra 0xde", 0x4cdc7c2, 0x4cdc7e2 },
    { /* 0xdf */ "Unused: Extra 0xdf", 0x4cdc7e2, 0x4cdc802 },
    { /* 0xe0 */ "Unused: Extra 0xe0", 0x4cdc802, 0x4cdc822 },
    { /* 0xe1 */ "Unused: Extra 0xe1", 0x4cdc822, 0x4cdc842 },
    { /* 0xe2 */ "Unused: Extra 0xe2", 0x4cdc842, 0x4cdc862 },
    { /* 0xe3 */ "Unused: Extra 0xe3", 0x4cdc862, 0x4cdc882 },
    { /* 0xe4 */ "Unused: Extra 0xe4", 0x4cdc882, 0x4cdc8a2 },
    { /* 0xe5 */ "A1 - HK grab (don't edit) 1", 0x4cdc8a2, 0x4cdc8c2, indexCPS2_Shuma, 0 },
    { /* 0xe6 */ "A1 - HK grab (don't edit) 2", 0x4cdc8c2, 0x4cdc8e2, indexCPS2_Shuma, 0 },
    { /* 0xe7 */ "A1 - HK grab (don't edit) 3", 0x4cdc8e2, 0x4cdc902, indexCPS2_Shuma, 0 },
    { /* 0xe8 */ "A1 - HK grab (don't edit) 4", 0x4cdc902, 0x4cdc922, indexCPS2_Shuma, 0 },
    { /* 0xe9 */ "A1 - HK grab (don't edit) 5", 0x4cdc922, 0x4cdc942, indexCPS2_Shuma, 0 },
    { /* 0xea */ "A1 - HK grab (don't edit) 6", 0x4cdc942, 0x4cdc962, indexCPS2_Shuma, 0 },
    { /* 0xeb */ "A1 - HK grab (don't edit) 7", 0x4cdc962, 0x4cdc982, indexCPS2_Shuma, 0 },
    { /* 0xec */ "A1 - HK grab (don't edit) 8", 0x4cdc982, 0x4cdc9a2, indexCPS2_Shuma, 0 },
    { /* 0xed */ "A1 - HK grab (don't edit) 9", 0x4cdc9a2, 0x4cdc9c2, indexCPS2_Shuma, 0 },
    { /* 0xee */ "A1 - HK grab (don't edit) 10", 0x4cdc9c2, 0x4cdc9e2, indexCPS2_Shuma, 0 },
    { /* 0xef */ "A1 - HP Flash Frames 1", 0x4cdc9e2, 0x4cdca02, indexCPS2_Shuma, 0 },
    { /* 0xf0 */ "A1 - HP Flash Frames 2", 0x4cdca02, 0x4cdca22, indexCPS2_Shuma, 0 },
    { /* 0xf1 */ "A1 - HP Flash Frames 3", 0x4cdca22, 0x4cdca42, indexCPS2_Shuma, 0 },
    { /* 0xf2 */ "A1 - HP Flash Frames 4", 0x4cdca42, 0x4cdca62, indexCPS2_Shuma, 0 },
    { /* 0xf3 */ "A1 - HP Flash Frames 5", 0x4cdca62, 0x4cdca82, indexCPS2_Shuma, 0 },
    { /* 0xf4 */ "A1 - HP Flash Frames 6", 0x4cdca82, 0x4cdcaa2, indexCPS2_Shuma, 0 },
    { /* 0xf5 */ "A1 - HP Flash Frames 7", 0x4cdcaa2, 0x4cdcac2, indexCPS2_Shuma, 0 },
    { /* 0xf6 */ "A1 - Chaos Dimension Frame 1", 0x4cdcac2, 0x4cdcae2, indexCPS2_Shuma, 0 },
    { /* 0xf7 */ "A1 - Chaos Dimension (Dash) Frame 1", 0x4cdcae2, 0x4cdcb02, indexCPS2_Shuma, 0 },
    { /* 0xf8 */ "A1 - Chaos Dimension Frame 2", 0x4cdcb02, 0x4cdcb22, indexCPS2_Shuma, 0 },
    { /* 0xf9 */ "A1 - Chaos Dimension (Dash) Frame 2", 0x4cdcb22, 0x4cdcb42, indexCPS2_Shuma, 0 },
    { /* 0xfa */ "A1 - Chaos Dimension Frame 3", 0x4cdcb42, 0x4cdcb62, indexCPS2_Shuma, 0 },
    { /* 0xfb */ "A1 - Chaos Dimension (Dash) Frame 3", 0x4cdcb62, 0x4cdcb82, indexCPS2_Shuma, 0 },
    { /* 0xfc */ "A1 - Chaos Dimension Frame 4", 0x4cdcb82, 0x4cdcba2, indexCPS2_Shuma, 0 },
    { /* 0xfd */ "A1 - Chaos Dimension (Dash) Frame 4", 0x4cdcba2, 0x4cdcbc2, indexCPS2_Shuma, 0 },
    { /* 0xfe */ "A1 - Chaos Dimension Frame 5", 0x4cdcbc2, 0x4cdcbe2, indexCPS2_Shuma, 0 },
    { /* 0xff */ "A1 - Chaos Dimension (Dash) Frame 5", 0x4cdcbe2, 0x4cdcc02, indexCPS2_Shuma, 0 },
    { /* 0x100 */ "A1 - Mystic Smash Shadows", 0x4cdcc02, 0x4cdcc22, indexCPS2_Shuma, 0 },
    { /* 0x101 */ "A2 - Stance Frame (after FP) 1", 0x4cdcc22, 0x4cdcc42, indexCPS2_Shuma, 0 },
    { /* 0x102 */ "A2 - Stance Frame (after FP) 2", 0x4cdcc42, 0x4cdcc62, indexCPS2_Shuma, 0 },
    { /* 0x103 */ "A2 - Stance Frame (after FP) 3", 0x4cdcc62, 0x4cdcc82, indexCPS2_Shuma, 0 },
    { /* 0x104 */ "A2 - Stance Frame (after FP) 4", 0x4cdcc82, 0x4cdcca2, indexCPS2_Shuma, 0 },
    { /* 0x105 */ "A2 - Stance Frame (after FP) 5", 0x4cdcca2, 0x4cdccc2, indexCPS2_Shuma, 0 },
    { /* 0x106 */ "A2 - Stone Drop (d+HK) Frames 1", 0x4cdccc2, 0x4cdcce2, indexCPS2_Shuma, 0 },
    { /* 0x107 */ "A2 - Stone Drop (d+HK) Frames 2", 0x4cdcce2, 0x4cdcd02, indexCPS2_Shuma, 0 },
    { /* 0x108 */ "A2 - Stone Drop (d+HK) Frames 3", 0x4cdcd02, 0x4cdcd22, indexCPS2_Shuma, 0 },
    { /* 0x109 */ "A2 - Stone Drop (d+HK) Frames 4", 0x4cdcd22, 0x4cdcd42, indexCPS2_Shuma, 0 },
    { /* 0x10a */ "A2 - Stone Drop (d+HK) Frames 5", 0x4cdcd42, 0x4cdcd62, indexCPS2_Shuma, 0 },
    { /* 0x10b */ "Unused: Extra 0x10b", 0x4cdcd62, 0x4cdcd82 },
    { /* 0x10c */ "Unused: Extra 0x10c", 0x4cdcd82, 0x4cdcda2 },
    { /* 0x10d */ "Unused: Extra 0x10d", 0x4cdcda2, 0x4cdcdc2 },
    { /* 0x10e */ "Unused: Extra 0x10e", 0x4cdcdc2, 0x4cdcde2 },
    { /* 0x10f */ "Unused: Extra 0x10f", 0x4cdcde2, 0x4cdce02 },
    { /* 0x110 */ "Unused: Extra 0x110", 0x4cdce02, 0x4cdce22 },
    { /* 0x111 */ "Unused: Extra 0x111", 0x4cdce22, 0x4cdce42 },
    { /* 0x112 */ "Unused: Extra 0x112", 0x4cdce42, 0x4cdce62 },
    { /* 0x113 */ "Unused: Extra 0x113", 0x4cdce62, 0x4cdce82 },
    { /* 0x114 */ "Unused: Extra 0x114", 0x4cdce82, 0x4cdcea2 },
    { /* 0x115 */ "A2 - HK grab (don't edit) 1", 0x4cdcea2, 0x4cdcec2, indexCPS2_Shuma, 0 },
    { /* 0x116 */ "A2 - HK grab (don't edit) 2", 0x4cdcec2, 0x4cdcee2, indexCPS2_Shuma, 0 },
    { /* 0x117 */ "A2 - HK grab (don't edit) 3", 0x4cdcee2, 0x4cdcf02, indexCPS2_Shuma, 0 },
    { /* 0x118 */ "A2 - HK grab (don't edit) 4", 0x4cdcf02, 0x4cdcf22, indexCPS2_Shuma, 0 },
    { /* 0x119 */ "A2 - HK grab (don't edit) 5", 0x4cdcf22, 0x4cdcf42, indexCPS2_Shuma, 0 },
    { /* 0x11a */ "A2 - HK grab (don't edit) 6", 0x4cdcf42, 0x4cdcf62, indexCPS2_Shuma, 0 },
    { /* 0x11b */ "A2 - HK grab (don't edit) 7", 0x4cdcf62, 0x4cdcf82, indexCPS2_Shuma, 0 },
    { /* 0x11c */ "A2 - HK grab (don't edit) 8", 0x4cdcf82, 0x4cdcfa2, indexCPS2_Shuma, 0 },
    { /* 0x11d */ "A2 - HK grab (don't edit) 9", 0x4cdcfa2, 0x4cdcfc2, indexCPS2_Shuma, 0 },
    { /* 0x11e */ "A2 - HK grab (don't edit) 10", 0x4cdcfc2, 0x4cdcfe2, indexCPS2_Shuma, 0 },
    { /* 0x11f */ "A2 - HP Flash Frames 1", 0x4cdcfe2, 0x4cdd002, indexCPS2_Shuma, 0 },
    { /* 0x120 */ "A2 - HP Flash Frames 2", 0x4cdd002, 0x4cdd022, indexCPS2_Shuma, 0 },
    { /* 0x121 */ "A2 - HP Flash Frames 3", 0x4cdd022, 0x4cdd042, indexCPS2_Shuma, 0 },
    { /* 0x122 */ "A2 - HP Flash Frames 4", 0x4cdd042, 0x4cdd062, indexCPS2_Shuma, 0 },
    { /* 0x123 */ "A2 - HP Flash Frames 5", 0x4cdd062, 0x4cdd082, indexCPS2_Shuma, 0 },
    { /* 0x124 */ "A2 - HP Flash Frames 6", 0x4cdd082, 0x4cdd0a2, indexCPS2_Shuma, 0 },
    { /* 0x125 */ "A2 - HP Flash Frames 7", 0x4cdd0a2, 0x4cdd0c2, indexCPS2_Shuma, 0 },
    { /* 0x126 */ "A2 - Chaos Dimension Frame 1", 0x4cdd0c2, 0x4cdd0e2, indexCPS2_Shuma, 0 },
    { /* 0x127 */ "A2 - Chaos Dimension (Dash) Frame 1", 0x4cdd0e2, 0x4cdd102, indexCPS2_Shuma, 0 },
    { /* 0x128 */ "A2 - Chaos Dimension Frame 2", 0x4cdd102, 0x4cdd122, indexCPS2_Shuma, 0 },
    { /* 0x129 */ "A2 - Chaos Dimension (Dash) Frame 2", 0x4cdd122, 0x4cdd142, indexCPS2_Shuma, 0 },
    { /* 0x12a */ "A2 - Chaos Dimension Frame 3", 0x4cdd142, 0x4cdd162, indexCPS2_Shuma, 0 },
    { /* 0x12b */ "A2 - Chaos Dimension (Dash) Frame 3", 0x4cdd162, 0x4cdd182, indexCPS2_Shuma, 0 },
    { /* 0x12c */ "A2 - Chaos Dimension Frame 4", 0x4cdd182, 0x4cdd1a2, indexCPS2_Shuma, 0 },
    { /* 0x12d */ "A2 - Chaos Dimension (Dash) Frame 4", 0x4cdd1a2, 0x4cdd1c2, indexCPS2_Shuma, 0 },
    { /* 0x12e */ "A2 - Chaos Dimension Frame 5", 0x4cdd1c2, 0x4cdd1e2, indexCPS2_Shuma, 0 },
    { /* 0x12f */ "A2 - Chaos Dimension (Dash) Frame 5", 0x4cdd1e2, 0x4cdd202, indexCPS2_Shuma, 0 },
    { /* 0x130 */ "A2 - Mystic Smash Shadows", 0x4cdd202, 0x4cdd222, indexCPS2_Shuma, 0 },
};

const sDescTreeNode MVC2_A_SHUMA_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_LP, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_LK, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_HP, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_HK, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_A1, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_A2, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_LP[] =
{
    { "Main Color LP", 0x4ddab82, 0x4ddaba2, indexCPS2_WarMachine, 0 },
    { "(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddaba2, 0x4ddabc2, indexCPS2_WarMachine, 1 },
    { "(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddabc2, 0x4ddabe2, indexCPS2_WarMachine, 2 },
    { "(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddabe2, 0x4ddac02, indexCPS2_WarMachine, 3 },
    { "(05) Not Used", 0x4ddac02, 0x4ddac22, indexCPS2_WarMachine, 4 },
    { "(06) Not Used", 0x4ddac22, 0x4ddac42, indexCPS2_WarMachine, 5 },
    { "(07) Not Used", 0x4ddac42, 0x4ddac62, indexCPS2_WarMachine, 6 },
    { "(08) Not Used", 0x4ddac62, 0x4ddac82, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_LK[] =
{
    { "Main Color LK", 0x4ddac82, 0x4ddaca2, indexCPS2_WarMachine, 0 },
    { "(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddaca2, 0x4ddacc2, indexCPS2_WarMachine, 1 },
    { "(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddacc2, 0x4ddace2, indexCPS2_WarMachine, 2 },
    { "(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddace2, 0x4ddad02, indexCPS2_WarMachine, 3 },
    { "(05) Not Used", 0x4ddad02, 0x4ddad22, indexCPS2_WarMachine, 4 },
    { "(06) Not Used", 0x4ddad22, 0x4ddad42, indexCPS2_WarMachine, 5 },
    { "(07) Not Used", 0x4ddad42, 0x4ddad62, indexCPS2_WarMachine, 6 },
    { "(08) Not Used", 0x4ddad62, 0x4ddad82, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_HP[] =
{
    { "Main Color HP", 0x4ddad82, 0x4ddada2, indexCPS2_WarMachine, 0 },
    { "(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddada2, 0x4ddadc2, indexCPS2_WarMachine, 1 },
    { "(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddadc2, 0x4ddade2, indexCPS2_WarMachine, 2 },
    { "(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddade2, 0x4ddae02, indexCPS2_WarMachine, 3 },
    { "(05) Not Used", 0x4ddae02, 0x4ddae22, indexCPS2_WarMachine, 4 },
    { "(06) Not Used", 0x4ddae22, 0x4ddae42, indexCPS2_WarMachine, 5 },
    { "(07) Not Used", 0x4ddae42, 0x4ddae62, indexCPS2_WarMachine, 6 },
    { "(08) Not Used", 0x4ddae62, 0x4ddae82, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_HK[] =
{
    { "Main Color HK", 0x4ddae82, 0x4ddaea2, indexCPS2_WarMachine, 0 },
    { "(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddaea2, 0x4ddaec2, indexCPS2_WarMachine, 1 },
    { "(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddaec2, 0x4ddaee2, indexCPS2_WarMachine, 2 },
    { "(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddaee2, 0x4ddaf02, indexCPS2_WarMachine, 3 },
    { "(05) Not Used", 0x4ddaf02, 0x4ddaf22, indexCPS2_WarMachine, 4 },
    { "(06) Not Used", 0x4ddaf22, 0x4ddaf42, indexCPS2_WarMachine, 5 },
    { "(07) Not Used", 0x4ddaf42, 0x4ddaf62, indexCPS2_WarMachine, 6 },
    { "(08) Not Used", 0x4ddaf62, 0x4ddaf82, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_A1[] =
{
    { "Main Color A1", 0x4ddaf82, 0x4ddafa2, indexCPS2_WarMachine, 0 },
    { "(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddafa2, 0x4ddafc2, indexCPS2_WarMachine, 1 },
    { "(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddafc2, 0x4ddafe2, indexCPS2_WarMachine, 2 },
    { "(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddafe2, 0x4ddb002, indexCPS2_WarMachine, 3 },
    { "(05) Not Used", 0x4ddb002, 0x4ddb022, indexCPS2_WarMachine, 4 },
    { "(06) Not Used", 0x4ddb022, 0x4ddb042, indexCPS2_WarMachine, 5 },
    { "(07) Not Used", 0x4ddb042, 0x4ddb062, indexCPS2_WarMachine, 6 },
    { "(08) Not Used", 0x4ddb062, 0x4ddb082, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_A2[] =
{
    { "Main Color A2", 0x4ddb082, 0x4ddb0a2, indexCPS2_WarMachine, 0 },
    { "(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddb0a2, 0x4ddb0c2, indexCPS2_WarMachine, 1 },
    { "(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddb0c2, 0x4ddb0e2, indexCPS2_WarMachine, 2 },
    { "(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddb0e2, 0x4ddb102, indexCPS2_WarMachine, 3 },
    { "(05) Not Used", 0x4ddb102, 0x4ddb122, indexCPS2_WarMachine, 4 },
    { "(06) Not Used", 0x4ddb122, 0x4ddb142, indexCPS2_WarMachine, 5 },
    { "(07) Not Used", 0x4ddb142, 0x4ddb162, indexCPS2_WarMachine, 6 },
    { "(08) Not Used", 0x4ddb162, 0x4ddb182, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4ddb182, 0x4ddb1a2, indexCPS2_WarMachine, 0 },
    { "Burning Light", 0x4ddb1a2, 0x4ddb1c2, indexCPS2_WarMachine, 0 },
    { "Shocked Dark", 0x4ddb1c2, 0x4ddb1e2, indexCPS2_WarMachine, 0 },
    { "Shocked Light", 0x4ddb1e2, 0x4ddb202, indexCPS2_WarMachine, 0 },
    { "Dark Burning Dark", 0x4ddb202, 0x4ddb222, indexCPS2_WarMachine, 0 },
    { "Dark Burning Light", 0x4ddb222, 0x4ddb242, indexCPS2_WarMachine, 0 },
    { "Kinetic Charge Dark", 0x4ddb242, 0x4ddb262, indexCPS2_WarMachine, 0 },
    { "Kinetic Charge Light", 0x4ddb262, 0x4ddb282, indexCPS2_WarMachine, 0 },
};

const sDescTreeNode MVC2_A_WARMACHINE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_LP, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_LK, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_HP, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_HK, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_A1, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_A2, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_LP[] =
{
    { "Main Color LP", 0x4ef6122, 0x4ef6142, indexCPS2_SilverSamurai, 0 },
    { "(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6142, 0x4ef6162, indexCPS2_SilverSamurai, 1 },
    { "(03) Shuriken", 0x4ef6162, 0x4ef6182, indexCPS2_SilverSamurai, 2 },
    { "(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6182, 0x4ef61a2, indexCPS2_SilverSamurai, 3 },
    { "(05) Thunder Effect (sword)", 0x4ef61a2, 0x4ef61c2, indexCPS2_SilverSamurai, 4 },
    { "(06) Ice Effect (sword)", 0x4ef61c2, 0x4ef61e2, indexCPS2_SilverSamurai, 5 },
    { "(07) Not Used", 0x4ef61e2, 0x4ef6202, indexCPS2_SilverSamurai, 6 },
    { "(08) Icycle", 0x4ef6202, 0x4ef6222, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_LK[] =
{
    { "Main Color LK", 0x4ef6222, 0x4ef6242, indexCPS2_SilverSamurai, 0 },
    { "(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6242, 0x4ef6262, indexCPS2_SilverSamurai, 1 },
    { "(03) Shuriken", 0x4ef6262, 0x4ef6282, indexCPS2_SilverSamurai, 2 },
    { "(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6282, 0x4ef62a2, indexCPS2_SilverSamurai, 3 },
    { "(05) Thunder Effect (sword)", 0x4ef62a2, 0x4ef62c2, indexCPS2_SilverSamurai, 4 },
    { "(06) Ice Effect (sword)", 0x4ef62c2, 0x4ef62e2, indexCPS2_SilverSamurai, 5 },
    { "(07) Not Used", 0x4ef62e2, 0x4ef6302, indexCPS2_SilverSamurai, 6 },
    { "(08) Icycle", 0x4ef6302, 0x4ef6322, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_HP[] =
{
    { "Main Color HP", 0x4ef6322, 0x4ef6342, indexCPS2_SilverSamurai, 0 },
    { "(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6342, 0x4ef6362, indexCPS2_SilverSamurai, 1 },
    { "(03) Shuriken", 0x4ef6362, 0x4ef6382, indexCPS2_SilverSamurai, 2 },
    { "(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6382, 0x4ef63a2, indexCPS2_SilverSamurai, 3 },
    { "(05) Thunder Effect (sword)", 0x4ef63a2, 0x4ef63c2, indexCPS2_SilverSamurai, 4 },
    { "(06) Ice Effect (sword)", 0x4ef63c2, 0x4ef63e2, indexCPS2_SilverSamurai, 5 },
    { "(07) Not Used", 0x4ef63e2, 0x4ef6402, indexCPS2_SilverSamurai, 6 },
    { "(08) Icycle", 0x4ef6402, 0x4ef6422, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_HK[] =
{
    { "Main Color HK", 0x4ef6422, 0x4ef6442, indexCPS2_SilverSamurai, 0 },
    { "(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6442, 0x4ef6462, indexCPS2_SilverSamurai, 1 },
    { "(03) Shuriken", 0x4ef6462, 0x4ef6482, indexCPS2_SilverSamurai, 2 },
    { "(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6482, 0x4ef64a2, indexCPS2_SilverSamurai, 3 },
    { "(05) Thunder Effect (sword)", 0x4ef64a2, 0x4ef64c2, indexCPS2_SilverSamurai, 4 },
    { "(06) Ice Effect (sword)", 0x4ef64c2, 0x4ef64e2, indexCPS2_SilverSamurai, 5 },
    { "(07) Not Used", 0x4ef64e2, 0x4ef6502, indexCPS2_SilverSamurai, 6 },
    { "(08) Icycle", 0x4ef6502, 0x4ef6522, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_A1[] =
{
    { "Main Color A1", 0x4ef6522, 0x4ef6542, indexCPS2_SilverSamurai, 0 },
    { "(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6542, 0x4ef6562, indexCPS2_SilverSamurai, 1 },
    { "(03) Shuriken", 0x4ef6562, 0x4ef6582, indexCPS2_SilverSamurai, 2 },
    { "(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6582, 0x4ef65a2, indexCPS2_SilverSamurai, 3 },
    { "(05) Thunder Effect (sword)", 0x4ef65a2, 0x4ef65c2, indexCPS2_SilverSamurai, 4 },
    { "(06) Ice Effect (sword)", 0x4ef65c2, 0x4ef65e2, indexCPS2_SilverSamurai, 5 },
    { "(07) Not Used", 0x4ef65e2, 0x4ef6602, indexCPS2_SilverSamurai, 6 },
    { "(08) Icycle", 0x4ef6602, 0x4ef6622, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_A2[] =
{
    { "Main Color A2", 0x4ef6622, 0x4ef6642, indexCPS2_SilverSamurai, 0 },
    { "(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6642, 0x4ef6662, indexCPS2_SilverSamurai, 1 },
    { "(03) Shuriken", 0x4ef6662, 0x4ef6682, indexCPS2_SilverSamurai, 2 },
    { "(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6682, 0x4ef66a2, indexCPS2_SilverSamurai, 3 },
    { "(05) Thunder Effect (sword)", 0x4ef66a2, 0x4ef66c2, indexCPS2_SilverSamurai, 4 },
    { "(06) Ice Effect (sword)", 0x4ef66c2, 0x4ef66e2, indexCPS2_SilverSamurai, 5 },
    { "(07) Not Used", 0x4ef66e2, 0x4ef6702, indexCPS2_SilverSamurai, 6 },
    { "(08) Icycle", 0x4ef6702, 0x4ef6722, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4ef6722, 0x4ef6742, indexCPS2_SilverSamurai, 0 },
    { "Burning Light", 0x4ef6742, 0x4ef6762, indexCPS2_SilverSamurai, 0 },
    { "Shocked Dark", 0x4ef6762, 0x4ef6782, indexCPS2_SilverSamurai, 0 },
    { "Shocked Light", 0x4ef6782, 0x4ef67a2, indexCPS2_SilverSamurai, 0 },
    { "Dark Burning Dark", 0x4ef67a2, 0x4ef67c2, indexCPS2_SilverSamurai, 0 },
    { "Dark Burning Light", 0x4ef67c2, 0x4ef67e2, indexCPS2_SilverSamurai, 0 },
    { "Kinetic Charge Dark", 0x4ef67e2, 0x4ef6802, indexCPS2_SilverSamurai, 0 },
    { "Kinetic Charge Light", 0x4ef6802, 0x4ef6822, indexCPS2_SilverSamurai, 0 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Shine Frame 1 LP Color", 0x4ef6822, 0x4ef6842, indexCPS2_SilverSamurai, 0 },
    { /* 0x0a */ "LP - Shine Frame 2 LP Color + (ID: 08-15 + lumin-10)", 0x4ef6842, 0x4ef6862, indexCPS2_SilverSamurai, 0 },
    { /* 0x0b */ "LP - Shine Frame 3 LP Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6862, 0x4ef6882, indexCPS2_SilverSamurai, 0 },
    { /* 0x0c */ "LP - Shine Frame 4 LP Color + (copy ID:08,09,10 from original to ID:12,13,14)", 0x4ef6882, 0x4ef68a2, indexCPS2_SilverSamurai, 0 },
    { /* 0x0d */ "LP - Shine Frame 5 LP Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef68a2, 0x4ef68c2, indexCPS2_SilverSamurai, 0 },
    { /* 0x0e */ "LP - Shine Frame 6 LP Color", 0x4ef68c2, 0x4ef68e2, indexCPS2_SilverSamurai, 0 },
    { /* 0x0f */ "LP - Shine Frame 7 LP Color + Lumin-5", 0x4ef68e2, 0x4ef6902, indexCPS2_SilverSamurai, 0 },
    { /* 0x10 */ "Separator", 0x4ef6902, 0x4ef6922 },
    { /* 0x11 */ "LK - Shine Frame 1 LK Color", 0x4ef6922, 0x4ef6942, indexCPS2_SilverSamurai, 0 },
    { /* 0x12 */ "LK - Shine Frame 2 LK Color + (ID: 08-15 + lumin-10)", 0x4ef6942, 0x4ef6962, indexCPS2_SilverSamurai, 0 },
    { /* 0x13 */ "LK - Shine Frame 3 LK Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6962, 0x4ef6982, indexCPS2_SilverSamurai, 0 },
    { /* 0x14 */ "LK - Shine Frame 4 LK Color + (copy ID:08,09,10 from original to ID:12,13,14)", 0x4ef6982, 0x4ef69a2, indexCPS2_SilverSamurai, 0 },
    { /* 0x15 */ "LK - Shine Frame 5 LK Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef69a2, 0x4ef69c2, indexCPS2_SilverSamurai, 0 },
    { /* 0x16 */ "LK - Shine Frame 6 LK Color", 0x4ef69c2, 0x4ef69e2, indexCPS2_SilverSamurai, 0 },
    { /* 0x17 */ "LK - Shine Frame 7 LK Color + Lumin-5", 0x4ef69e2, 0x4ef6a02, indexCPS2_SilverSamurai, 0 },
    { /* 0x18 */ "Separator", 0x4ef6a02, 0x4ef6a22 },
    { /* 0x19 */ "HP - Shine Frame 1 HP Color", 0x4ef6a22, 0x4ef6a42, indexCPS2_SilverSamurai, 0 },
    { /* 0x1a */ "HP - Shine Frame 2 HP Color + (ID: 08-15 + lumin-10)", 0x4ef6a42, 0x4ef6a62, indexCPS2_SilverSamurai, 0 },
    { /* 0x1b */ "HP - Shine Frame 3 HP Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6a62, 0x4ef6a82, indexCPS2_SilverSamurai, 0 },
    { /* 0x1c */ "HP - Shine Frame 4 HP Color + (copy ID:08,09,10 from original to ID:12,13,14)", 0x4ef6a82, 0x4ef6aa2, indexCPS2_SilverSamurai, 0 },
    { /* 0x1d */ "HP - Shine Frame 5 HP Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6aa2, 0x4ef6ac2, indexCPS2_SilverSamurai, 0 },
    { /* 0x1e */ "HP - Shine Frame 6 HP Color", 0x4ef6ac2, 0x4ef6ae2, indexCPS2_SilverSamurai, 0 },
    { /* 0x1f */ "HP - Shine Frame 7 HP Color + Lumin-5", 0x4ef6ae2, 0x4ef6b02, indexCPS2_SilverSamurai, 0 },
    { /* 0x20 */ "Separator", 0x4ef6b02, 0x4ef6b22 },
    { /* 0x21 */ "HK - Shine Frame 1 HK Color", 0x4ef6b22, 0x4ef6b42, indexCPS2_SilverSamurai, 0 },
    { /* 0x22 */ "HK - Shine Frame 2 HK Color + (ID: 08-15 + lumin-10)", 0x4ef6b42, 0x4ef6b62, indexCPS2_SilverSamurai, 0 },
    { /* 0x23 */ "HK - Shine Frame 3 HK Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6b62, 0x4ef6b82, indexCPS2_SilverSamurai, 0 },
    { /* 0x24 */ "HK - Shine Frame 4 HK Color + (copy ID:08,09,10 from original to ID:12,13,14)", 0x4ef6b82, 0x4ef6ba2, indexCPS2_SilverSamurai, 0 },
    { /* 0x25 */ "HK - Shine Frame 5 HK Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6ba2, 0x4ef6bc2, indexCPS2_SilverSamurai, 0 },
    { /* 0x26 */ "HK - Shine Frame 6 HK Color", 0x4ef6bc2, 0x4ef6be2, indexCPS2_SilverSamurai, 0 },
    { /* 0x27 */ "HK - Shine Frame 7 HK Color + Lumin-5", 0x4ef6be2, 0x4ef6c02, indexCPS2_SilverSamurai, 0 },
    { /* 0x28 */ "Separator", 0x4ef6c02, 0x4ef6c22 },
    { /* 0x29 */ "A1 - Shine Frame 1 A1 Color", 0x4ef6c22, 0x4ef6c42, indexCPS2_SilverSamurai, 0 },
    { /* 0x2a */ "A1 - Shine Frame 2 A1 Color + (ID: 08-15 + lumin-10)", 0x4ef6c42, 0x4ef6c62, indexCPS2_SilverSamurai, 0 },
    { /* 0x2b */ "A1 - Shine Frame 3 A1 Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6c62, 0x4ef6c82, indexCPS2_SilverSamurai, 0 },
    { /* 0x2c */ "A1 - Shine Frame 4 A1 Color + (copy ID:08,09,10 from original to ID:12,13,14)", 0x4ef6c82, 0x4ef6ca2, indexCPS2_SilverSamurai, 0 },
    { /* 0x2d */ "A1 - Shine Frame 5 A1 Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6ca2, 0x4ef6cc2, indexCPS2_SilverSamurai, 0 },
    { /* 0x2e */ "A1 - Shine Frame 6 A1 Color", 0x4ef6cc2, 0x4ef6ce2, indexCPS2_SilverSamurai, 0 },
    { /* 0x2f */ "A1 - Shine Frame 7 A1 Color + Lumin-5", 0x4ef6ce2, 0x4ef6d02, indexCPS2_SilverSamurai, 0 },
    { /* 0x30 */ "Separator", 0x4ef6d02, 0x4ef6d22 },
    { /* 0x31 */ "A2 - Shine Frame 1 A2 Color", 0x4ef6d22, 0x4ef6d42, indexCPS2_SilverSamurai, 0 },
    { /* 0x32 */ "A2 - Shine Frame 2 A2 Color + (ID: 08-15 + lumin-10)", 0x4ef6d42, 0x4ef6d62, indexCPS2_SilverSamurai, 0 },
    { /* 0x33 */ "A2 - Shine Frame 3 A2 Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6d62, 0x4ef6d82, indexCPS2_SilverSamurai, 0 },
    { /* 0x34 */ "A2 - Shine Frame 4 A2 Color + (copy ID:08,09,10 from original to ID:12,13,14)", 0x4ef6d82, 0x4ef6da2, indexCPS2_SilverSamurai, 0 },
    { /* 0x35 */ "A2 - Shine Frame 5 A2 Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6da2, 0x4ef6dc2, indexCPS2_SilverSamurai, 0 },
    { /* 0x36 */ "A2 - Shine Frame 6 A2 Color", 0x4ef6dc2, 0x4ef6de2, indexCPS2_SilverSamurai, 0 },
    { /* 0x37 */ "A2 - Shine Frame 7 A2 Color + Lumin-5", 0x4ef6de2, 0x4ef6e02, indexCPS2_SilverSamurai, 0 },
};

const sDescTreeNode MVC2_A_SILVERSAMURAI_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_LP, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_LK, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_HP, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_HK, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_A1, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_A2, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_LP[] =
{
    { "Main Color LP", 0x4ff4942, 0x4ff4962, indexCPS2_OmegaRed, 0 },
    { "(02) Energy Drain (Coil Effect)", 0x4ff4962, 0x4ff4982, indexCPS2_OmegaRed, 1 },
    { "(03) Intro (Flames)", 0x4ff4982, 0x4ff49a2, indexCPS2_OmegaRed, 2 },
    { "(04) Energy Drain (lightning effect on Omega Red)", 0x4ff49a2, 0x4ff49c2, indexCPS2_OmegaRed, 3 },
    { "(05) Not Used", 0x4ff49c2, 0x4ff49e2, indexCPS2_OmegaRed, 4 },
    { "(06) Not Used", 0x4ff49e2, 0x4ff4a02, indexCPS2_OmegaRed, 5 },
    { "(07) Not Used", 0x4ff4a02, 0x4ff4a22, indexCPS2_OmegaRed, 6 },
    { "(08) Not Used", 0x4ff4a22, 0x4ff4a42, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_LK[] =
{
    { "Main Color LK", 0x4ff4a42, 0x4ff4a62, indexCPS2_OmegaRed, 0 },
    { "(02) Energy Drain (Coil Effect)", 0x4ff4a62, 0x4ff4a82, indexCPS2_OmegaRed, 1 },
    { "(03) Intro (Flames)", 0x4ff4a82, 0x4ff4aa2, indexCPS2_OmegaRed, 2 },
    { "(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4aa2, 0x4ff4ac2, indexCPS2_OmegaRed, 3 },
    { "(05) Not Used", 0x4ff4ac2, 0x4ff4ae2, indexCPS2_OmegaRed, 4 },
    { "(06) Not Used", 0x4ff4ae2, 0x4ff4b02, indexCPS2_OmegaRed, 5 },
    { "(07) Not Used", 0x4ff4b02, 0x4ff4b22, indexCPS2_OmegaRed, 6 },
    { "(08) Not Used", 0x4ff4b22, 0x4ff4b42, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_HP[] =
{
    { "Main Color HP", 0x4ff4b42, 0x4ff4b62, indexCPS2_OmegaRed, 0 },
    { "(02) Energy Drain (Coil Effect)", 0x4ff4b62, 0x4ff4b82, indexCPS2_OmegaRed, 1 },
    { "(03) Intro (Flames)", 0x4ff4b82, 0x4ff4ba2, indexCPS2_OmegaRed, 2 },
    { "(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4ba2, 0x4ff4bc2, indexCPS2_OmegaRed, 3 },
    { "(05) Not Used", 0x4ff4bc2, 0x4ff4be2, indexCPS2_OmegaRed, 4 },
    { "(06) Not Used", 0x4ff4be2, 0x4ff4c02, indexCPS2_OmegaRed, 5 },
    { "(07) Not Used", 0x4ff4c02, 0x4ff4c22, indexCPS2_OmegaRed, 6 },
    { "(08) Not Used", 0x4ff4c22, 0x4ff4c42, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_HK[] =
{
    { "Main Color HK", 0x4ff4c42, 0x4ff4c62, indexCPS2_OmegaRed, 0 },
    { "(02) Energy Drain (Coil Effect)", 0x4ff4c62, 0x4ff4c82, indexCPS2_OmegaRed, 1 },
    { "(03) Intro (Flames)", 0x4ff4c82, 0x4ff4ca2, indexCPS2_OmegaRed, 2 },
    { "(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4ca2, 0x4ff4cc2, indexCPS2_OmegaRed, 3 },
    { "(05) Not Used", 0x4ff4cc2, 0x4ff4ce2, indexCPS2_OmegaRed, 4 },
    { "(06) Not Used", 0x4ff4ce2, 0x4ff4d02, indexCPS2_OmegaRed, 5 },
    { "(07) Not Used", 0x4ff4d02, 0x4ff4d22, indexCPS2_OmegaRed, 6 },
    { "(08) Not Used", 0x4ff4d22, 0x4ff4d42, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_A1[] =
{
    { "Main Color A1", 0x4ff4d42, 0x4ff4d62, indexCPS2_OmegaRed, 0 },
    { "(02) Energy Drain (Coil Effect)", 0x4ff4d62, 0x4ff4d82, indexCPS2_OmegaRed, 1 },
    { "(03) Intro (Flames)", 0x4ff4d82, 0x4ff4da2, indexCPS2_OmegaRed, 2 },
    { "(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4da2, 0x4ff4dc2, indexCPS2_OmegaRed, 3 },
    { "(05) Not Used", 0x4ff4dc2, 0x4ff4de2, indexCPS2_OmegaRed, 4 },
    { "(06) Not Used", 0x4ff4de2, 0x4ff4e02, indexCPS2_OmegaRed, 5 },
    { "(07) Not Used", 0x4ff4e02, 0x4ff4e22, indexCPS2_OmegaRed, 6 },
    { "(08) Not Used", 0x4ff4e22, 0x4ff4e42, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_A2[] =
{
    { "Main Color A2", 0x4ff4e42, 0x4ff4e62, indexCPS2_OmegaRed, 0 },
    { "(02) Energy Drain (Coil Effect)", 0x4ff4e62, 0x4ff4e82, indexCPS2_OmegaRed, 1 },
    { "(03) Intro (Flames)", 0x4ff4e82, 0x4ff4ea2, indexCPS2_OmegaRed, 2 },
    { "(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4ea2, 0x4ff4ec2, indexCPS2_OmegaRed, 3 },
    { "(05) Not Used", 0x4ff4ec2, 0x4ff4ee2, indexCPS2_OmegaRed, 4 },
    { "(06) Not Used", 0x4ff4ee2, 0x4ff4f02, indexCPS2_OmegaRed, 5 },
    { "(07) Not Used", 0x4ff4f02, 0x4ff4f22, indexCPS2_OmegaRed, 6 },
    { "(08) Not Used", 0x4ff4f22, 0x4ff4f42, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x4ff4f42, 0x4ff4f62, indexCPS2_OmegaRed, 0 },
    { "Burning Light", 0x4ff4f62, 0x4ff4f82, indexCPS2_OmegaRed, 0 },
    { "Shocked Dark", 0x4ff4f82, 0x4ff4fa2, indexCPS2_OmegaRed, 0 },
    { "Shocked Light", 0x4ff4fa2, 0x4ff4fc2, indexCPS2_OmegaRed, 0 },
    { "Dark Burning Dark", 0x4ff4fc2, 0x4ff4fe2, indexCPS2_OmegaRed, 0 },
    { "Dark Burning Light", 0x4ff4fe2, 0x4ff5002, indexCPS2_OmegaRed, 0 },
    { "Kinetic Charge Dark", 0x4ff5002, 0x4ff5022, indexCPS2_OmegaRed, 0 },
    { "Kinetic Charge Light", 0x4ff5022, 0x4ff5042, indexCPS2_OmegaRed, 0 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Intro Frame 1 LP Color & then add (lumin-25)", 0x4ff5042, 0x4ff5062, indexCPS2_OmegaRed, 11 },
    { /* 0x0a */ "LP - Intro Frame 2 LP Color & then add (lumin-12)", 0x4ff5062, 0x4ff5082, indexCPS2_OmegaRed, 11 },
    { /* 0x0b */ "LP - Intro Frame 3 LP Color & then add (lumin-9)", 0x4ff5082, 0x4ff50a2, indexCPS2_OmegaRed, 11 },
    { /* 0x0c */ "LP - Intro Frame 4 LP Color & then add (lumin-5)", 0x4ff50a2, 0x4ff50c2, indexCPS2_OmegaRed, 11 },
    { /* 0x0d */ "LK - Intro Frame 1 LK Color & then add (lumin-25)", 0x4ff50c2, 0x4ff50e2, indexCPS2_OmegaRed, 11 },
    { /* 0x0e */ "LK - Intro Frame 2 LK Color & then add (lumin-12)", 0x4ff50e2, 0x4ff5102, indexCPS2_OmegaRed, 11 },
    { /* 0x0f */ "LK - Intro Frame 3 LK Color & then add (lumin-9)", 0x4ff5102, 0x4ff5122, indexCPS2_OmegaRed, 11 },
    { /* 0x10 */ "LK - Intro Frame 4 LK Color & then add (lumin-5)", 0x4ff5122, 0x4ff5142, indexCPS2_OmegaRed, 11 },
    { /* 0x11 */ "HP - Intro Frame 1 HP Color & then add (lumin-25)", 0x4ff5142, 0x4ff5162, indexCPS2_OmegaRed, 11 },
    { /* 0x12 */ "HP - Intro Frame 2 HP Color & then add (lumin-12)", 0x4ff5162, 0x4ff5182, indexCPS2_OmegaRed, 11 },
    { /* 0x13 */ "HP - Intro Frame 3 HP Color & then add (lumin-9)", 0x4ff5182, 0x4ff51a2, indexCPS2_OmegaRed, 11 },
    { /* 0x14 */ "HP - Intro Frame 4 HP Color & then add (lumin-5)", 0x4ff51a2, 0x4ff51c2, indexCPS2_OmegaRed, 11 },
    { /* 0x15 */ "LP - Intro Frame 1 LP Color & then add (lumin-25)", 0x4ff51c2, 0x4ff51e2, indexCPS2_OmegaRed, 11 },
    { /* 0x16 */ "LP - Intro Frame 2 LP Color & then add (lumin-12)", 0x4ff51e2, 0x4ff5202, indexCPS2_OmegaRed, 11 },
    { /* 0x17 */ "LP - Intro Frame 3 LP Color & then add (lumin-9)", 0x4ff5202, 0x4ff5222, indexCPS2_OmegaRed, 11 },
    { /* 0x18 */ "LP - Intro Frame 4 LP Color & then add (lumin-5)", 0x4ff5222, 0x4ff5242, indexCPS2_OmegaRed, 11 },
    { /* 0x19 */ "A1 - Intro Frame 1 A1 Color & then add (lumin-25)", 0x4ff5242, 0x4ff5262, indexCPS2_OmegaRed, 11 },
    { /* 0x1a */ "A1 - Intro Frame 2 A1 Color & then add (lumin-12)", 0x4ff5262, 0x4ff5282, indexCPS2_OmegaRed, 11 },
    { /* 0x1b */ "A1 - Intro Frame 3 A1 Color & then add (lumin-9)", 0x4ff5282, 0x4ff52a2, indexCPS2_OmegaRed, 11 },
    { /* 0x1c */ "A1 - Intro Frame 4 A1 Color & then add (lumin-5)", 0x4ff52a2, 0x4ff52c2, indexCPS2_OmegaRed, 11 },
    { /* 0x1d */ "A2 - Intro Frame 1 A2 Color & then add (lumin-25)", 0x4ff52c2, 0x4ff52e2, indexCPS2_OmegaRed, 11 },
    { /* 0x1e */ "A2 - Intro Frame 2 A2 Color & then add (lumin-12)", 0x4ff52e2, 0x4ff5302, indexCPS2_OmegaRed, 11 },
    { /* 0x1f */ "A2 - Intro Frame 3 A2 Color & then add (lumin-9)", 0x4ff5302, 0x4ff5322, indexCPS2_OmegaRed, 11 },
    { /* 0x20 */ "A2 - Intro Frame 4 A2 Color & then add (lumin-5)", 0x4ff5322, 0x4ff5342, indexCPS2_OmegaRed, 11 },
};

const sDescTreeNode MVC2_A_OMEGARED_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_LP, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_LK, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_HP, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_HK, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_A1, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_A2, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_SHARED, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_LP[] =
{
    { "Main Color LP", 0x5109fa2, 0x5109fc2, indexCPS2_Spiral, 0 },
    { "(02) Not Used", 0x5109fc2, 0x5109fe2, indexCPS2_Spiral, 1 },
    { "(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x5109fe2, 0x510a002, indexCPS2_Spiral, 2 },
    { "(04) Dancing Swords Intro - Portal", 0x510a002, 0x510a022, indexCPS2_Spiral, 3 },
    { "(05) Not Used", 0x510a022, 0x510a042, indexCPS2_Spiral, 4 },
    { "(06) Not Used", 0x510a042, 0x510a062, indexCPS2_Spiral, 5 },
    { "(07) Not Used", 0x510a062, 0x510a082, indexCPS2_Spiral, 6 },
    { "(08) Not Used", 0x510a082, 0x510a0a2, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_LK[] =
{
    { "Main Color LK", 0x510a0a2, 0x510a0c2, indexCPS2_Spiral, 0 },
    { "(02) Not Used", 0x510a0c2, 0x510a0e2, indexCPS2_Spiral, 1 },
    { "(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a0e2, 0x510a102, indexCPS2_Spiral, 2 },
    { "(04) Dancing Swords Intro - Portal", 0x510a102, 0x510a122, indexCPS2_Spiral, 3 },
    { "(05) Not Used", 0x510a122, 0x510a142, indexCPS2_Spiral, 4 },
    { "(06) Not Used", 0x510a142, 0x510a162, indexCPS2_Spiral, 5 },
    { "(07) Not Used", 0x510a162, 0x510a182, indexCPS2_Spiral, 6 },
    { "(08) Not Used", 0x510a182, 0x510a1a2, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_HP[] =
{
    { "Main Color HP", 0x510a1a2, 0x510a1c2, indexCPS2_Spiral, 0 },
    { "(02) Not Used", 0x510a1c2, 0x510a1e2, indexCPS2_Spiral, 1 },
    { "(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a1e2, 0x510a202, indexCPS2_Spiral, 2 },
    { "(04) Dancing Swords Intro - Portal", 0x510a202, 0x510a222, indexCPS2_Spiral, 3 },
    { "(05) Not Used", 0x510a222, 0x510a242, indexCPS2_Spiral, 4 },
    { "(06) Not Used", 0x510a242, 0x510a262, indexCPS2_Spiral, 5 },
    { "(07) Not Used", 0x510a262, 0x510a282, indexCPS2_Spiral, 6 },
    { "(08) Not Used", 0x510a282, 0x510a2a2, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_HK[] =
{
    { "Main Color HK", 0x510a2a2, 0x510a2c2, indexCPS2_Spiral, 0 },
    { "(02) Not Used", 0x510a2c2, 0x510a2e2, indexCPS2_Spiral, 1 },
    { "(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a2e2, 0x510a302, indexCPS2_Spiral, 2 },
    { "(04) Dancing Swords Intro - Portal", 0x510a302, 0x510a322, indexCPS2_Spiral, 3 },
    { "(05) Not Used", 0x510a322, 0x510a342, indexCPS2_Spiral, 4 },
    { "(06) Not Used", 0x510a342, 0x510a362, indexCPS2_Spiral, 5 },
    { "(07) Not Used", 0x510a362, 0x510a382, indexCPS2_Spiral, 6 },
    { "(08) Not Used", 0x510a382, 0x510a3a2, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_A1[] =
{
    { "Main Color A1", 0x510a3a2, 0x510a3c2, indexCPS2_Spiral, 0 },
    { "(02) Not Used", 0x510a3c2, 0x510a3e2, indexCPS2_Spiral, 1 },
    { "(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a3e2, 0x510a402, indexCPS2_Spiral, 2 },
    { "(04) Dancing Swords Intro - Portal", 0x510a402, 0x510a422, indexCPS2_Spiral, 3 },
    { "(05) Not Used", 0x510a422, 0x510a442, indexCPS2_Spiral, 4 },
    { "(06) Not Used", 0x510a442, 0x510a462, indexCPS2_Spiral, 5 },
    { "(07) Not Used", 0x510a462, 0x510a482, indexCPS2_Spiral, 6 },
    { "(08) Not Used", 0x510a482, 0x510a4a2, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_A2[] =
{
    { "Main Color A2", 0x510a4a2, 0x510a4c2, indexCPS2_Spiral, 0 },
    { "(02) Not Used", 0x510a4c2, 0x510a4e2, indexCPS2_Spiral, 1 },
    { "(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a4e2, 0x510a502, indexCPS2_Spiral, 2 },
    { "(04) Dancing Swords Intro - Portal", 0x510a502, 0x510a522, indexCPS2_Spiral, 3 },
    { "(05) Not Used", 0x510a522, 0x510a542, indexCPS2_Spiral, 4 },
    { "(06) Not Used", 0x510a542, 0x510a562, indexCPS2_Spiral, 5 },
    { "(07) Not Used", 0x510a562, 0x510a582, indexCPS2_Spiral, 6 },
    { "(08) Not Used", 0x510a582, 0x510a5a2, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x510a5a2, 0x510a5c2, indexCPS2_Spiral, 0 },
    { "Burning Light", 0x510a5c2, 0x510a5e2, indexCPS2_Spiral, 0 },
    { "Shocked Dark", 0x510a5e2, 0x510a602, indexCPS2_Spiral, 0 },
    { "Shocked Light", 0x510a602, 0x510a622, indexCPS2_Spiral, 0 },
    { "Dark Burning Dark", 0x510a622, 0x510a642, indexCPS2_Spiral, 0 },
    { "Dark Burning Light", 0x510a642, 0x510a662, indexCPS2_Spiral, 0 },
    { "Kinetic Charge Dark", 0x510a662, 0x510a682, indexCPS2_Spiral, 0 },
    { "Kinetic Charge Light", 0x510a682, 0x510a6a2, indexCPS2_Spiral, 0 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Cyclops Metamorphosis X Character Frame 1", 0x510a6a2, 0x510a6c2, indexCPS2_Cyclops, 0 },
    { /* 0x0a */ "Wolverine Metamorphosis X Character Frame 2", 0x510a6c2, 0x510a6e2, indexCPS2_Wolverine, 0 },
    { /* 0x0b */ "Wolverine's Claws Metamorphosis X Character Frame 3", 0x510a6e2, 0x510a702, indexCPS2_Wolverine, 1 },
    { /* 0x0c */ "Psylocke Metamorphosis X Character Frame 4", 0x510a702, 0x510a722, indexCPS2_Psylocke, 0 },
    { /* 0x0d */ "Psylocke's s.FP Metamorphosis X Character Frame 5", 0x510a722, 0x510a742, indexCPS2_Psylocke, 1 },
    { /* 0x0e */ "Iceman Metamorphosis X Character Frame 6", 0x510a742, 0x510a762, indexCPS2_Iceman, 0 },
    { /* 0x0f */ "Rogue Metamorphosis X Character Frame 7", 0x510a762, 0x510a782, indexCPS2_Rogue, 0 },
    { /* 0x10 */ "Captain America Metamorphosis X Character Frame 8", 0x510a782, 0x510a7a2, indexCPS2_CapAm, 0 },
    { /* 0x11 */ "Spider-Man Metamorphosis X Character Frame 9", 0x510a7a2, 0x510a7c2, indexCPS2_Spidey, 0 },
    { /* 0x12 */ "Hulk Metamorphosis X Character Frame 10", 0x510a7c2, 0x510a7e2, indexCPS2_Hulk, 0 },
    { /* 0x13 */ "Venom Metamorphosis X Character Frame 11", 0x510a7e2, 0x510a802, indexCPS2_Venom, 0 },
    { /* 0x14 */ "Dr. Doom Metamorphosis X Character Frame 12", 0x510a802, 0x510a822, indexCPS2_DrDoom, 0 },
    { /* 0x15 */ "Dr. Doom's s.FP Metamorphosis X Character Frame 13", 0x510a822, 0x510a842, indexCPS2_DrDoom, 1 },
    { /* 0x16 */ "Marrow Metamorphosis X Character Frame 14", 0x510a842, 0x510a862, indexCPS2_Marrow, 0 },
    { /* 0x17 */ "Not Used", 0x510a862, 0x510a882 },
    { /* 0x18 */ "Cable Metamorphosis X Character Frame 15", 0x510a882, 0x510a8a2, indexCPS2_Cable, 0 },
    { /* 0x19 */ "Not Used", 0x510a8a2, 0x510a8c2 },
    { /* 0x1a */ "Gambit Metamorphosis X Character Frame 16", 0x510a8c2, 0x510a8e2, indexCPS2_Gambit, 0 },
    { /* 0x1b */ "Juggernaut Metamorphosis X Character Frame 17", 0x510a8e2, 0x510a902, indexCPS2_Juggy, 0 },
    { /* 0x1c */ "Storm Metamorphosis X Character Frame 18", 0x510a902, 0x510a922, indexCPS2_Storm, 0 },
    { /* 0x1d */ "Storm's s.FP Metamorphosis X Character Frame 19", 0x510a922, 0x510a942, indexCPS2_Storm, 13 },
    { /* 0x1e */ "Sabretooth Metamorphosis X Character Frame 20", 0x510a942, 0x510a962, indexCPS2_Sabretooth, 0 },
    { /* 0x1f */ "Magneto Metamorphosis X Character Frame 21", 0x510a962, 0x510a982, indexCPS2_Magneto, 0 },
    { /* 0x20 */ "Not Used", 0x510a982, 0x510a9a2 },
    { /* 0x21 */ "Shuma-Gorath Metamorphosis X Character Frame 22", 0x510a9a2, 0x510a9c2, indexCPS2_Shuma, 0 },
    { /* 0x22 */ "War-Machine Metamorphosis X Character Frame 23", 0x510a9c2, 0x510a9e2, indexCPS2_WarMachine, 0 },
    { /* 0x23 */ "Silver Samurai Metamorphosis X Character Frame 24", 0x510a9e2, 0x510aa02, indexCPS2_SilverSamurai, 0 },
    { /* 0x24 */ "Omega Red Metamorphosis X Character Frame 25", 0x510aa02, 0x510aa22, indexCPS2_OmegaRed, 0 },
    { /* 0x25 */ "Colossus Metamorphosis X Character Frame 26", 0x510aa22, 0x510aa42, indexCPS2_Colossus, 0 },
    { /* 0x26 */ "Iron Man Metamorphosis X Character Frame 27", 0x510aa42, 0x510aa62, indexCPS2_IronMan, 0 },
    { /* 0x27 */ "Sentinel Metamorphosis X Character Frame 28", 0x510aa62, 0x510aa82, indexCPS2_Sentinel, 0 },
    { /* 0x28 */ "Sentinel's COTA j.d.HK Metamorphosis X Character Frame 29", 0x510aa82, 0x510aaa2, indexCPS2_Sentinel, 1 },
    { /* 0x29 */ "Blackheart Metamorphosis X Character Frame 30", 0x510aaa2, 0x510aac2, indexCPS2_Blackheart, 0 },
    { /* 0x2a */ "Thanos Metamorphosis X Character Frame 31", 0x510aac2, 0x510aae2, indexCPS2_Thanos, 0 },
    { /* 0x2b */ "Not Used", 0x510aae2, 0x510ab02 },
    { /* 0x2c */ "Not Used", 0x510ab02, 0x510ab22 },
    { /* 0x2d */ "LP - Power-Up Enhance Frames 1 ID06-15: redtint 3perc", 0x510ab22, 0x510ab42, indexCPS2_Spiral, 11 },
    { /* 0x2e */ "LP - Power-Up Enhance Frames 2 ID06-15: redtint 3perc", 0x510ab42, 0x510ab62, indexCPS2_Spiral, 11 },
    { /* 0x2f */ "LP - Power-Up Enhance Frames 3 ID06-15: redtint 3perc", 0x510ab62, 0x510ab82, indexCPS2_Spiral, 11 },
    { /* 0x30 */ "LP - Power-Up Enhance Frames 4 ID06-15: redtint 3perc", 0x510ab82, 0x510aba2, indexCPS2_Spiral, 11 },
    { /* 0x31 */ "LP - Power-Up Enhance Frames 5 ID06-15: redtint 3perc", 0x510aba2, 0x510abc2, indexCPS2_Spiral, 11 },
    { /* 0x32 */ "LP - Power-Up Enhance Frames 6 ID06-15: redtint 3perc", 0x510abc2, 0x510abe2, indexCPS2_Spiral, 11 },
    { /* 0x33 */ "LP - Speed-Up Enhance Frames 1 lumin+4", 0x510abe2, 0x510ac02, indexCPS2_Spiral, 12 },
    { /* 0x34 */ "LP - Speed-Up Enhance Frames 2 lumin+4", 0x510ac02, 0x510ac22, indexCPS2_Spiral, 12 },
    { /* 0x35 */ "LP - Speed-Up Enhance Frames 3 lumin+4", 0x510ac22, 0x510ac42, indexCPS2_Spiral, 12 },
    { /* 0x36 */ "LP - Speed-Up Enhance Frames 4 lumin+4", 0x510ac42, 0x510ac62, indexCPS2_Spiral, 12 },
    { /* 0x37 */ "LP - Speed-Up Enhance Frames 5 lumin+4", 0x510ac62, 0x510ac82, indexCPS2_Spiral, 12 },
    { /* 0x38 */ "LP - Speed-Up Enhance Frames 6 lumin+4", 0x510ac82, 0x510aca2, indexCPS2_Spiral, 12 },
    { /* 0x39 */ "Not Used", 0x510aca2, 0x510acc2 },
    { /* 0x3a */ "Not Used", 0x510acc2, 0x510ace2 },
    { /* 0x3b */ "LP - Metamorphosis Dance frames 1", 0x510ace2, 0x510ad02, indexCPS2_Spiral, 12 },
    { /* 0x3c */ "LP - Metamorphosis Dance frames 2", 0x510ad02, 0x510ad22, indexCPS2_Spiral, 12 },
    { /* 0x3d */ "LP - Metamorphosis Dance frames 3", 0x510ad22, 0x510ad42, indexCPS2_Spiral, 12 },
    { /* 0x3e */ "LP - Metamorphosis Dance frames 4", 0x510ad42, 0x510ad62, indexCPS2_Spiral, 12 },
    { /* 0x3f */ "LP - Metamorphosis Dance frames 5", 0x510ad62, 0x510ad82, indexCPS2_Spiral, 12 },
    { /* 0x40 */ "LP - Metamorphosis Dance frames 6", 0x510ad82, 0x510ada2, indexCPS2_Spiral, 12 },
    { /* 0x41 */ "LP - Metamorphosis Dance frames 7", 0x510ada2, 0x510adc2, indexCPS2_Spiral, 12 },
    { /* 0x42 */ "LP - Metamorphosis Dance frames 8", 0x510adc2, 0x510ade2, indexCPS2_Spiral, 12 },
    { /* 0x43 */ "LP - Metamorphosis Dance frames 9", 0x510ade2, 0x510ae02, indexCPS2_Spiral, 12 },
    { /* 0x44 */ "LP - Metamorphosis Dance frames 10", 0x510ae02, 0x510ae22, indexCPS2_Spiral, 12 },
    { /* 0x45 */ "LP - Metamorphosis Dance frames 11", 0x510ae22, 0x510ae42, indexCPS2_Spiral, 12 },
    { /* 0x46 */ "LP - Metamorphosis Dance frames 12", 0x510ae42, 0x510ae62, indexCPS2_Spiral, 12 },
    { /* 0x47 */ "Not Used", 0x510ae62, 0x510ae82 },
    { /* 0x48 */ "Not Used", 0x510ae82, 0x510aea2 },
    { /* 0x49 */ "LK - Power-Up Enhance Frames 1", 0x510aea2, 0x510aec2, indexCPS2_Spiral, 11 },
    { /* 0x4a */ "LK - Power-Up Enhance Frames 2", 0x510aec2, 0x510aee2, indexCPS2_Spiral, 11 },
    { /* 0x4b */ "LK - Power-Up Enhance Frames 3", 0x510aee2, 0x510af02, indexCPS2_Spiral, 11 },
    { /* 0x4c */ "LK - Power-Up Enhance Frames 4", 0x510af02, 0x510af22, indexCPS2_Spiral, 11 },
    { /* 0x4d */ "LK - Power-Up Enhance Frames 5", 0x510af22, 0x510af42, indexCPS2_Spiral, 11 },
    { /* 0x4e */ "LK - Power-Up Enhance Frames 6", 0x510af42, 0x510af62, indexCPS2_Spiral, 11 },
    { /* 0x4f */ "LK - Speed-Up Enhance Frames 1", 0x510af62, 0x510af82, indexCPS2_Spiral, 12 },
    { /* 0x50 */ "LK - Speed-Up Enhance Frames 2", 0x510af82, 0x510afa2, indexCPS2_Spiral, 12 },
    { /* 0x51 */ "LK - Speed-Up Enhance Frames 3", 0x510afa2, 0x510afc2, indexCPS2_Spiral, 12 },
    { /* 0x52 */ "LK - Speed-Up Enhance Frames 4", 0x510afc2, 0x510afe2, indexCPS2_Spiral, 12 },
    { /* 0x53 */ "LK - Speed-Up Enhance Frames 5", 0x510afe2, 0x510b002, indexCPS2_Spiral, 12 },
    { /* 0x54 */ "LK - Speed-Up Enhance Frames 6", 0x510b002, 0x510b022, indexCPS2_Spiral, 12 },
    { /* 0x55 */ "Not Used", 0x510b022, 0x510b042 },
    { /* 0x56 */ "Not Used", 0x510b042, 0x510b062 },
    { /* 0x57 */ "LK - Metamorphosis Dance frames 1", 0x510b062, 0x510b082, indexCPS2_Spiral, 12 },
    { /* 0x58 */ "LK - Metamorphosis Dance frames 2", 0x510b082, 0x510b0a2, indexCPS2_Spiral, 12 },
    { /* 0x59 */ "LK - Metamorphosis Dance frames 3", 0x510b0a2, 0x510b0c2, indexCPS2_Spiral, 12 },
    { /* 0x5a */ "LK - Metamorphosis Dance frames 4", 0x510b0c2, 0x510b0e2, indexCPS2_Spiral, 12 },
    { /* 0x5b */ "LK - Metamorphosis Dance frames 5", 0x510b0e2, 0x510b102, indexCPS2_Spiral, 12 },
    { /* 0x5c */ "LK - Metamorphosis Dance frames 6", 0x510b102, 0x510b122, indexCPS2_Spiral, 12 },
    { /* 0x5d */ "LK - Metamorphosis Dance frames 7", 0x510b122, 0x510b142, indexCPS2_Spiral, 12 },
    { /* 0x5e */ "LK - Metamorphosis Dance frames 8", 0x510b142, 0x510b162, indexCPS2_Spiral, 12 },
    { /* 0x5f */ "LK - Metamorphosis Dance frames 9", 0x510b162, 0x510b182, indexCPS2_Spiral, 12 },
    { /* 0x60 */ "LK - Metamorphosis Dance frames 10", 0x510b182, 0x510b1a2, indexCPS2_Spiral, 12 },
    { /* 0x61 */ "LK - Metamorphosis Dance frames 11", 0x510b1a2, 0x510b1c2, indexCPS2_Spiral, 12 },
    { /* 0x62 */ "LK - Metamorphosis Dance frames 12", 0x510b1c2, 0x510b1e2, indexCPS2_Spiral, 12 },
    { /* 0x63 */ "Not Used", 0x510b1e2, 0x510b202 },
    { /* 0x64 */ "Not Used", 0x510b202, 0x510b222 },
    { /* 0x65 */ "HP - Power-Up Enhance Frames 1", 0x510b222, 0x510b242, indexCPS2_Spiral, 11 },
    { /* 0x66 */ "HP - Power-Up Enhance Frames 2", 0x510b242, 0x510b262, indexCPS2_Spiral, 11 },
    { /* 0x67 */ "HP - Power-Up Enhance Frames 3", 0x510b262, 0x510b282, indexCPS2_Spiral, 11 },
    { /* 0x68 */ "HP - Power-Up Enhance Frames 4", 0x510b282, 0x510b2a2, indexCPS2_Spiral, 11 },
    { /* 0x69 */ "HP - Power-Up Enhance Frames 5", 0x510b2a2, 0x510b2c2, indexCPS2_Spiral, 11 },
    { /* 0x6a */ "HP - Power-Up Enhance Frames 6", 0x510b2c2, 0x510b2e2, indexCPS2_Spiral, 11 },
    { /* 0x6b */ "HP - Speed-Up Enhance Frames 1", 0x510b2e2, 0x510b302, indexCPS2_Spiral, 12 },
    { /* 0x6c */ "HP - Speed-Up Enhance Frames 2", 0x510b302, 0x510b322, indexCPS2_Spiral, 12 },
    { /* 0x6d */ "HP - Speed-Up Enhance Frames 3", 0x510b322, 0x510b342, indexCPS2_Spiral, 12 },
    { /* 0x6e */ "HP - Speed-Up Enhance Frames 4", 0x510b342, 0x510b362, indexCPS2_Spiral, 12 },
    { /* 0x6f */ "HP - Speed-Up Enhance Frames 5", 0x510b362, 0x510b382, indexCPS2_Spiral, 12 },
    { /* 0x70 */ "HP - Speed-Up Enhance Frames 6", 0x510b382, 0x510b3a2, indexCPS2_Spiral, 12 },
    { /* 0x71 */ "Not Used", 0x510b3a2, 0x510b3c2 },
    { /* 0x72 */ "Not Used", 0x510b3c2, 0x510b3e2 },
    { /* 0x73 */ "HP - Metamorphosis Dance frames 1", 0x510b3e2, 0x510b402, indexCPS2_Spiral, 12 },
    { /* 0x74 */ "HP - Metamorphosis Dance frames 2", 0x510b402, 0x510b422, indexCPS2_Spiral, 12 },
    { /* 0x75 */ "HP - Metamorphosis Dance frames 3", 0x510b422, 0x510b442, indexCPS2_Spiral, 12 },
    { /* 0x76 */ "HP - Metamorphosis Dance frames 4", 0x510b442, 0x510b462, indexCPS2_Spiral, 12 },
    { /* 0x77 */ "HP - Metamorphosis Dance frames 5", 0x510b462, 0x510b482, indexCPS2_Spiral, 12 },
    { /* 0x78 */ "HP - Metamorphosis Dance frames 6", 0x510b482, 0x510b4a2, indexCPS2_Spiral, 12 },
    { /* 0x79 */ "HP - Metamorphosis Dance frames 7", 0x510b4a2, 0x510b4c2, indexCPS2_Spiral, 12 },
    { /* 0x7a */ "HP - Metamorphosis Dance frames 8", 0x510b4c2, 0x510b4e2, indexCPS2_Spiral, 12 },
    { /* 0x7b */ "HP - Metamorphosis Dance frames 9", 0x510b4e2, 0x510b502, indexCPS2_Spiral, 12 },
    { /* 0x7c */ "HP - Metamorphosis Dance frames 10", 0x510b502, 0x510b522, indexCPS2_Spiral, 12 },
    { /* 0x7d */ "HP - Metamorphosis Dance frames 11", 0x510b522, 0x510b542, indexCPS2_Spiral, 12 },
    { /* 0x7e */ "HP - Metamorphosis Dance frames 12", 0x510b542, 0x510b562, indexCPS2_Spiral, 12 },
    { /* 0x7f */ "Not Used", 0x510b562, 0x510b582 },
    { /* 0x80 */ "Not Used", 0x510b582, 0x510b5a2 },
    { /* 0x81 */ "HK - Power-Up Enhance Frames 1", 0x510b5a2, 0x510b5c2, indexCPS2_Spiral, 11 },
    { /* 0x82 */ "HK - Power-Up Enhance Frames 2", 0x510b5c2, 0x510b5e2, indexCPS2_Spiral, 11 },
    { /* 0x83 */ "HK - Power-Up Enhance Frames 3", 0x510b5e2, 0x510b602, indexCPS2_Spiral, 11 },
    { /* 0x84 */ "HK - Power-Up Enhance Frames 4", 0x510b602, 0x510b622, indexCPS2_Spiral, 11 },
    { /* 0x85 */ "HK - Power-Up Enhance Frames 5", 0x510b622, 0x510b642, indexCPS2_Spiral, 11 },
    { /* 0x86 */ "HK - Power-Up Enhance Frames 6", 0x510b642, 0x510b662, indexCPS2_Spiral, 11 },
    { /* 0x87 */ "HK - Speed-Up Enhance Frames 1", 0x510b662, 0x510b682, indexCPS2_Spiral, 12 },
    { /* 0x88 */ "HK - Speed-Up Enhance Frames 2", 0x510b682, 0x510b6a2, indexCPS2_Spiral, 12 },
    { /* 0x89 */ "HK - Speed-Up Enhance Frames 3", 0x510b6a2, 0x510b6c2, indexCPS2_Spiral, 12 },
    { /* 0x8a */ "HK - Speed-Up Enhance Frames 4", 0x510b6c2, 0x510b6e2, indexCPS2_Spiral, 12 },
    { /* 0x8b */ "HK - Speed-Up Enhance Frames 5", 0x510b6e2, 0x510b702, indexCPS2_Spiral, 12 },
    { /* 0x8c */ "HK - Speed-Up Enhance Frames 6", 0x510b702, 0x510b722, indexCPS2_Spiral, 12 },
    { /* 0x8d */ "Not Used", 0x510b722, 0x510b742 },
    { /* 0x8e */ "Not Used", 0x510b742, 0x510b762 },
    { /* 0x8f */ "HK - Metamorphosis Dance frames 1", 0x510b762, 0x510b782, indexCPS2_Spiral, 12 },
    { /* 0x90 */ "HK - Metamorphosis Dance frames 2", 0x510b782, 0x510b7a2, indexCPS2_Spiral, 12 },
    { /* 0x91 */ "HK - Metamorphosis Dance frames 3", 0x510b7a2, 0x510b7c2, indexCPS2_Spiral, 12 },
    { /* 0x92 */ "HK - Metamorphosis Dance frames 4", 0x510b7c2, 0x510b7e2, indexCPS2_Spiral, 12 },
    { /* 0x93 */ "HK - Metamorphosis Dance frames 5", 0x510b7e2, 0x510b802, indexCPS2_Spiral, 12 },
    { /* 0x94 */ "HK - Metamorphosis Dance frames 6", 0x510b802, 0x510b822, indexCPS2_Spiral, 12 },
    { /* 0x95 */ "HK - Metamorphosis Dance frames 7", 0x510b822, 0x510b842, indexCPS2_Spiral, 12 },
    { /* 0x96 */ "HK - Metamorphosis Dance frames 8", 0x510b842, 0x510b862, indexCPS2_Spiral, 12 },
    { /* 0x97 */ "HK - Metamorphosis Dance frames 9", 0x510b862, 0x510b882, indexCPS2_Spiral, 12 },
    { /* 0x98 */ "HK - Metamorphosis Dance frames 10", 0x510b882, 0x510b8a2, indexCPS2_Spiral, 12 },
    { /* 0x99 */ "HK - Metamorphosis Dance frames 11", 0x510b8a2, 0x510b8c2, indexCPS2_Spiral, 12 },
    { /* 0x9a */ "HK - Metamorphosis Dance frames 12", 0x510b8c2, 0x510b8e2, indexCPS2_Spiral, 12 },
    { /* 0x9b */ "Not Used", 0x510b8e2, 0x510b902 },
    { /* 0x9c */ "Not Used", 0x510b902, 0x510b922 },
    { /* 0x9d */ "A1 - Power-Up Enhance Frames 1", 0x510b922, 0x510b942, indexCPS2_Spiral, 11 },
    { /* 0x9e */ "A1 - Power-Up Enhance Frames 2", 0x510b942, 0x510b962, indexCPS2_Spiral, 11 },
    { /* 0x9f */ "A1 - Power-Up Enhance Frames 3", 0x510b962, 0x510b982, indexCPS2_Spiral, 11 },
    { /* 0xa0 */ "A1 - Power-Up Enhance Frames 4", 0x510b982, 0x510b9a2, indexCPS2_Spiral, 11 },
    { /* 0xa1 */ "A1 - Power-Up Enhance Frames 5", 0x510b9a2, 0x510b9c2, indexCPS2_Spiral, 11 },
    { /* 0xa2 */ "A1 - Power-Up Enhance Frames 6", 0x510b9c2, 0x510b9e2, indexCPS2_Spiral, 11 },
    { /* 0xa3 */ "A1 - Speed-Up Enhance Frames 1", 0x510b9e2, 0x510ba02, indexCPS2_Spiral, 12 },
    { /* 0xa4 */ "A1 - Speed-Up Enhance Frames 2", 0x510ba02, 0x510ba22, indexCPS2_Spiral, 12 },
    { /* 0xa5 */ "A1 - Speed-Up Enhance Frames 3", 0x510ba22, 0x510ba42, indexCPS2_Spiral, 12 },
    { /* 0xa6 */ "A1 - Speed-Up Enhance Frames 4", 0x510ba42, 0x510ba62, indexCPS2_Spiral, 12 },
    { /* 0xa7 */ "A1 - Speed-Up Enhance Frames 5", 0x510ba62, 0x510ba82, indexCPS2_Spiral, 12 },
    { /* 0xa8 */ "A1 - Speed-Up Enhance Frames 6", 0x510ba82, 0x510baa2, indexCPS2_Spiral, 12 },
    { /* 0xa9 */ "Not Used", 0x510baa2, 0x510bac2 },
    { /* 0xaa */ "Not Used", 0x510bac2, 0x510bae2 },
    { /* 0xab */ "A1 - Metamorphosis Dance frames 1", 0x510bae2, 0x510bb02, indexCPS2_Spiral, 12 },
    { /* 0xac */ "A1 - Metamorphosis Dance frames 2", 0x510bb02, 0x510bb22, indexCPS2_Spiral, 12 },
    { /* 0xad */ "A1 - Metamorphosis Dance frames 3", 0x510bb22, 0x510bb42, indexCPS2_Spiral, 12 },
    { /* 0xae */ "A1 - Metamorphosis Dance frames 4", 0x510bb42, 0x510bb62, indexCPS2_Spiral, 12 },
    { /* 0xaf */ "A1 - Metamorphosis Dance frames 5", 0x510bb62, 0x510bb82, indexCPS2_Spiral, 12 },
    { /* 0xb0 */ "A1 - Metamorphosis Dance frames 6", 0x510bb82, 0x510bba2, indexCPS2_Spiral, 12 },
    { /* 0xb1 */ "A1 - Metamorphosis Dance frames 7", 0x510bba2, 0x510bbc2, indexCPS2_Spiral, 12 },
    { /* 0xb2 */ "A1 - Metamorphosis Dance frames 8", 0x510bbc2, 0x510bbe2, indexCPS2_Spiral, 12 },
    { /* 0xb3 */ "A1 - Metamorphosis Dance frames 9", 0x510bbe2, 0x510bc02, indexCPS2_Spiral, 12 },
    { /* 0xb4 */ "A1 - Metamorphosis Dance frames 10", 0x510bc02, 0x510bc22, indexCPS2_Spiral, 12 },
    { /* 0xb5 */ "A1 - Metamorphosis Dance frames 11", 0x510bc22, 0x510bc42, indexCPS2_Spiral, 12 },
    { /* 0xb6 */ "A1 - Metamorphosis Dance frames 12", 0x510bc42, 0x510bc62, indexCPS2_Spiral, 12 },
    { /* 0xb7 */ "Not Used", 0x510bc62, 0x510bc82 },
    { /* 0xb8 */ "Not Used", 0x510bc82, 0x510bca2 },
    { /* 0xb9 */ "A2 - Power-Up Enhance Frames 1", 0x510bca2, 0x510bcc2, indexCPS2_Spiral, 11 },
    { /* 0xba */ "A2 - Power-Up Enhance Frames 2", 0x510bcc2, 0x510bce2, indexCPS2_Spiral, 11 },
    { /* 0xbb */ "A2 - Power-Up Enhance Frames 3", 0x510bce2, 0x510bd02, indexCPS2_Spiral, 11 },
    { /* 0xbc */ "A2 - Power-Up Enhance Frames 4", 0x510bd02, 0x510bd22, indexCPS2_Spiral, 11 },
    { /* 0xbd */ "A2 - Power-Up Enhance Frames 5", 0x510bd22, 0x510bd42, indexCPS2_Spiral, 11 },
    { /* 0xbe */ "A2 - Power-Up Enhance Frames 6", 0x510bd42, 0x510bd62, indexCPS2_Spiral, 11 },
    { /* 0xbf */ "A2 - Speed-Up Enhance Frames 1", 0x510bd62, 0x510bd82, indexCPS2_Spiral, 12 },
    { /* 0xc0 */ "A2 - Speed-Up Enhance Frames 2", 0x510bd82, 0x510bda2, indexCPS2_Spiral, 12 },
    { /* 0xc1 */ "A2 - Speed-Up Enhance Frames 3", 0x510bda2, 0x510bdc2, indexCPS2_Spiral, 12 },
    { /* 0xc2 */ "A2 - Speed-Up Enhance Frames 4", 0x510bdc2, 0x510bde2, indexCPS2_Spiral, 12 },
    { /* 0xc3 */ "A2 - Speed-Up Enhance Frames 5", 0x510bde2, 0x510be02, indexCPS2_Spiral, 12 },
    { /* 0xc4 */ "A2 - Speed-Up Enhance Frames 6", 0x510be02, 0x510be22, indexCPS2_Spiral, 12 },
    { /* 0xc5 */ "Not Used", 0x510be22, 0x510be42 },
    { /* 0xc6 */ "Not Used", 0x510be42, 0x510be62 },
    { /* 0xc7 */ "A2 - Metamorphosis Dance frames 1", 0x510be62, 0x510be82, indexCPS2_Spiral, 12 },
    { /* 0xc8 */ "A2 - Metamorphosis Dance frames 2", 0x510be82, 0x510bea2, indexCPS2_Spiral, 12 },
    { /* 0xc9 */ "A2 - Metamorphosis Dance frames 3", 0x510bea2, 0x510bec2, indexCPS2_Spiral, 12 },
    { /* 0xca */ "A2 - Metamorphosis Dance frames 4", 0x510bec2, 0x510bee2, indexCPS2_Spiral, 12 },
    { /* 0xcb */ "A2 - Metamorphosis Dance frames 5", 0x510bee2, 0x510bf02, indexCPS2_Spiral, 12 },
    { /* 0xcc */ "A2 - Metamorphosis Dance frames 6", 0x510bf02, 0x510bf22, indexCPS2_Spiral, 12 },
    { /* 0xcd */ "A2 - Metamorphosis Dance frames 7", 0x510bf22, 0x510bf42, indexCPS2_Spiral, 12 },
    { /* 0xce */ "A2 - Metamorphosis Dance frames 8", 0x510bf42, 0x510bf62, indexCPS2_Spiral, 12 },
    { /* 0xcf */ "A2 - Metamorphosis Dance frames 9", 0x510bf62, 0x510bf82, indexCPS2_Spiral, 12 },
    { /* 0xd0 */ "A2 - Metamorphosis Dance frames 10", 0x510bf82, 0x510bfa2, indexCPS2_Spiral, 12 },
    { /* 0xd1 */ "A2 - Metamorphosis Dance frames 11", 0x510bfa2, 0x510bfc2, indexCPS2_Spiral, 12 },
    { /* 0xd2 */ "A2 - Metamorphosis Dance frames 12", 0x510bfc2, 0x510bfe2, indexCPS2_Spiral, 12 },
};

const sDescTreeNode MVC2_A_SPIRAL_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_LP, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_LK, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_HP, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_HK, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_A1, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_A2, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_LP[] =
{
    { "Main Color LP", 0x5235a62, 0x5235a82, indexCPS2_Colossus, 0 },
    { "(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235a82, 0x5235aa2, indexCPS2_Colossus, 1 },
    { "(03) Not Used", 0x5235aa2, 0x5235ac2, indexCPS2_Colossus, 2 },
    { "(04) Stance Frame Main Color + lum-4", 0x5235ac2, 0x5235ae2, indexCPS2_Colossus, 0 },
    { "(05) ID:01-13 Dash Throw (effect)", 0x5235ae2, 0x5235b02, indexCPS2_Colossus, 4 },
    { "(06) Not Used", 0x5235b02, 0x5235b22, indexCPS2_Colossus, 5 },
    { "(07) Not Used", 0x5235b22, 0x5235b42, indexCPS2_Colossus, 6 },
    { "(08) Not Used", 0x5235b42, 0x5235b62, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_LK[] =
{
    { "Main Color LK", 0x5235b62, 0x5235b82, indexCPS2_Colossus, 0 },
    { "(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235b82, 0x5235ba2, indexCPS2_Colossus, 1 },
    { "(03) Not Used", 0x5235ba2, 0x5235bc2, indexCPS2_Colossus, 2 },
    { "(04) Stance Frame Main Color + lum-4", 0x5235bc2, 0x5235be2, indexCPS2_Colossus, 0 },
    { "(05) ID:01-13 Dash Throw (effect)", 0x5235be2, 0x5235c02, indexCPS2_Colossus, 4 },
    { "(06) Not Used", 0x5235c02, 0x5235c22, indexCPS2_Colossus, 5 },
    { "(07) Not Used", 0x5235c22, 0x5235c42, indexCPS2_Colossus, 6 },
    { "(08) Not Used", 0x5235c42, 0x5235c62, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_HP[] =
{
    { "Main Color HP", 0x5235c62, 0x5235c82, indexCPS2_Colossus, 0 },
    { "(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235c82, 0x5235ca2, indexCPS2_Colossus, 1 },
    { "(03) Not Used", 0x5235ca2, 0x5235cc2, indexCPS2_Colossus, 2 },
    { "(04) Stance Frame Main Color + lum-4", 0x5235cc2, 0x5235ce2, indexCPS2_Colossus, 0 },
    { "(05) ID:01-13 Dash Throw (effect)", 0x5235ce2, 0x5235d02, indexCPS2_Colossus, 4 },
    { "(06) Not Used", 0x5235d02, 0x5235d22, indexCPS2_Colossus, 5 },
    { "(07) Not Used", 0x5235d22, 0x5235d42, indexCPS2_Colossus, 6 },
    { "(08) Not Used", 0x5235d42, 0x5235d62, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_HK[] =
{
    { "Main Color HK", 0x5235d62, 0x5235d82, indexCPS2_Colossus, 0 },
    { "(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235d82, 0x5235da2, indexCPS2_Colossus, 1 },
    { "(03) Not Used", 0x5235da2, 0x5235dc2, indexCPS2_Colossus, 2 },
    { "(04) Stance Frame Main Color + lum-4", 0x5235dc2, 0x5235de2, indexCPS2_Colossus, 0 },
    { "(05) ID:01-13 Dash Throw (effect)", 0x5235de2, 0x5235e02, indexCPS2_Colossus, 4 },
    { "(06) Not Used", 0x5235e02, 0x5235e22, indexCPS2_Colossus, 5 },
    { "(07) Not Used", 0x5235e22, 0x5235e42, indexCPS2_Colossus, 6 },
    { "(08) Not Used", 0x5235e42, 0x5235e62, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_A1[] =
{
    { "Main Color A1", 0x5235e62, 0x5235e82, indexCPS2_Colossus, 0 },
    { "(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235e82, 0x5235ea2, indexCPS2_Colossus, 1 },
    { "(03) Not Used", 0x5235ea2, 0x5235ec2, indexCPS2_Colossus, 2 },
    { "(04) Stance Frame Main Color + lum-4", 0x5235ec2, 0x5235ee2, indexCPS2_Colossus, 0 },
    { "(05) ID:01-13 Dash Throw (effect)", 0x5235ee2, 0x5235f02, indexCPS2_Colossus, 4 },
    { "(06) Not Used", 0x5235f02, 0x5235f22, indexCPS2_Colossus, 5 },
    { "(07) Not Used", 0x5235f22, 0x5235f42, indexCPS2_Colossus, 6 },
    { "(08) Not Used", 0x5235f42, 0x5235f62, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_A2[] =
{
    { "Main Color A2", 0x5235f62, 0x5235f82, indexCPS2_Colossus, 0 },
    { "(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235f82, 0x5235fa2, indexCPS2_Colossus, 1 },
    { "(03) Not Used", 0x5235fa2, 0x5235fc2, indexCPS2_Colossus, 2 },
    { "(04) Stance Frame Main Color + lum-4", 0x5235fc2, 0x5235fe2, indexCPS2_Colossus, 0 },
    { "(05) ID:01-13 Dash Throw (effect)", 0x5235fe2, 0x5236002, indexCPS2_Colossus, 4 },
    { "(06) Not Used", 0x5236002, 0x5236022, indexCPS2_Colossus, 5 },
    { "(07) Not Used", 0x5236022, 0x5236042, indexCPS2_Colossus, 6 },
    { "(08) Not Used", 0x5236042, 0x5236062, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x5236062, 0x5236082, indexCPS2_Colossus, 0 },
    { "Burning Light", 0x5236082, 0x52360a2, indexCPS2_Colossus, 0 },
    { "Shocked Dark", 0x52360a2, 0x52360c2, indexCPS2_Colossus, 0 },
    { "Shocked Light", 0x52360c2, 0x52360e2, indexCPS2_Colossus, 0 },
    { "Dark Burning Dark", 0x52360e2, 0x5236102, indexCPS2_Colossus, 0 },
    { "Dark Burning Light", 0x5236102, 0x5236122, indexCPS2_Colossus, 0 },
    { "Kinetic Charge Dark", 0x5236122, 0x5236142, indexCPS2_Colossus, 0 },
    { "Kinetic Charge Light", 0x5236142, 0x5236162, indexCPS2_Colossus, 0 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - Super Armor Shine Frame 1 LP Color then add ID:02-07 + ID:12-15 (lumin-13) & ID:07(fullwIhDite:0) 7 (shine, modify)", 0x5236162, 0x5236182, indexCPS2_Colossus, 0 },
    { /* 0x0a */ "LP - Super Armor Shine Frame 2 LP Color then add ID:02-07 + ID:12-15 (lumin-5) & ID:06(fullwhIitDe):06 (shine, modify)", 0x5236182, 0x52361a2, indexCPS2_Colossus, 0 },
    { /* 0x0b */ "LP - Super Armor Shine Frame 3 LP Color then add ID:02-07 + ID:12-15 (lumin+8) & ID:05(fullwhIiDte:)05 (shine, modify)", 0x52361a2, 0x52361c2, indexCPS2_Colossus, 0 },
    { /* 0x0c */ "LP - Super Armor Shine Frame 4 LP Color then add ID:02-07 + ID:12-15 (lumin+13) & ID:04(fullwIhDit:e0)4 (shine, modify)", 0x52361c2, 0x52361e2, indexCPS2_Colossus, 0 },
    { /* 0x0d */ "LP - Super Armor Shine Frame 5 LP Color then add ID:02-07 + ID:12-15 (lumin+29) & ID:03(fullwIhDit:e0)3 (shine, modify)", 0x52361e2, 0x5236202, indexCPS2_Colossus, 0 },
    { /* 0x0e */ "LP - Super Armor Shine Frame 6 LP Color then add ID:02-07 + ID:12-15 (lumin+46) & ID:02(fullwhite)", 0x5236202, 0x5236222, indexCPS2_Colossus, 0 },
    { /* 0x0f */ "LP - Stance Frame 1 Original color LP", 0x5236222, 0x5236242, indexCPS2_Colossus, 0 },
    { /* 0x10 */ "LP - Stance Frame 2 LP Color then add ID:02-07 (fullshine - white)", 0x5236242, 0x5236262, indexCPS2_Colossus, 0 },
    { /* 0x11 */ "LP - Stance Frame 3 LP Color then add from original, copy ID:03-04 to ID: 06-07 (shine)", 0x5236262, 0x5236282, indexCPS2_Colossus, 0 },
    { /* 0x12 */ "LP - Stance Frame 4 LP Color then add from original, copy ID:02-03 to ID: 04-05 (shine)", 0x5236282, 0x52362a2, indexCPS2_Colossus, 0 },
    { /* 0x13 */ "LP - Stance Frame 5 LP Color then add from original, ID:03 = fullwhite (shine)", 0x52362a2, 0x52362c2, indexCPS2_Colossus, 0 },
    { /* 0x14 */ "LP - Stance Frame 6 LP Color then add from original, ID:04 to ID:07", 0x52362c2, 0x52362e2, indexCPS2_Colossus, 0 },
    { /* 0x15 */ "LP - Stance Frame 7 LP Color then add from original: ID:03 to ID:06", 0x52362e2, 0x5236302, indexCPS2_Colossus, 0 },
    { /* 0x16 */ "LP - Stance Frame 8 LP Color then add from original: ID:02 to ID:05", 0x5236302, 0x5236322, indexCPS2_Colossus, 0 },
    { /* 0x17 */ "LP - Stance Frame 9 LP Color then add from original; ID:02 to ID:04", 0x5236322, 0x5236342, indexCPS2_Colossus, 0 },
    { /* 0x18 */ "LP - Power Dive Shine Frame 1 LP Color then add Original Palette & add Lum+31", 0x5236342, 0x5236362, indexCPS2_Colossus, 0 },
    { /* 0x19 */ "LP - Power Dive Shine Frame 2 LP Color then add Original Palette & add Lum+45", 0x5236362, 0x5236382, indexCPS2_Colossus, 0 },
    { /* 0x1a */ "LP - Power Dive Shine Frame 3 Fullwhite", 0x5236382, 0x52363a2, indexCPS2_Colossus, 0 },
    { /* 0x1b */ "LP - Power Dive Shine Frame 4 LP Color then add original palette + lum-18, then copy ID:09 to ID:08, and ID:03 to ID:02", 0x52363a2, 0x52363c2, indexCPS2_Colossus, 0 },
    { /* 0x1c */ "LP - Power Dive Shine Frame 5 LP Color then add original palette + lum-13, then copy ID:09 to ID:08, and ID:03 to ID:02", 0x52363c2, 0x52363e2, indexCPS2_Colossus, 0 },
    { /* 0x1d */ "LP - Power Dive Shine Frame 6 LP Color then add original palette + lum-6, then copy ID:09 to ID:08, and ID:03-06 to ID:04-07 then ID:03 to ID:02", 0x52363e2, 0x5236402, indexCPS2_Colossus, 0 },
    { /* 0x1e */ "LP - Power Dive Shine Frame 7 LP Color then add Original color LP", 0x5236402, 0x5236422, indexCPS2_Colossus, 0 },
    { /* 0x1f */ "LP - Power Dive Shine Frame 8 LP Color then add original palette + lum-5", 0x5236422, 0x5236442, indexCPS2_Colossus, 0 },
    { /* 0x20 */ "LP - Power Dive Shine Frame 9 LP Color then add original palette + lum+25", 0x5236442, 0x5236462, indexCPS2_Colossus, 0 },
    { /* 0x21 */ "LP - Power Dive Shine Frame 10 Original color LP", 0x5236462, 0x5236482, indexCPS2_Colossus, 0 },
    { /* 0x22 */ "LP - Super Armor Stance Frame 1 LP Color then add ID:02-15(lum-15), ID:07 = fullwhite (shine)", 0x5236482, 0x52364a2, indexCPS2_Colossus, 0 },
    { /* 0x23 */ "LP - Super Armor Stance Frame 2 LP Color then add ID:02-15(lum-8), ID:06 = fullwhite (shine)", 0x52364a2, 0x52364c2, indexCPS2_Colossus, 0 },
    { /* 0x24 */ "LP - Super Armor Stance Frame 3 LP Color then add ID:02-15(lum-4), ID:05 = fullwhite (shine)", 0x52364c2, 0x52364e2, indexCPS2_Colossus, 0 },
    { /* 0x25 */ "LP - Super Armor Stance Frame 4 LP Color then add original palette, ID:04 = fullwhite", 0x52364e2, 0x5236502, indexCPS2_Colossus, 0 },
    { /* 0x26 */ "LP - Super Armor Stance Frame 5 LP Color then add Original Palette & add (Lumin+30 to ID:02-15)", 0x5236502, 0x5236522, indexCPS2_Colossus, 0 },
    { /* 0x27 */ "LP - Super Armor Stance Frame 6 LP Color then add Original Palette & add (Lumin+45 to ID:02-15), then ID:11 (Lumin-7 & sat+50)", 0x5236522, 0x5236542, indexCPS2_Colossus, 0 },
    { /* 0x28 */ "LP - Super Armor Stance Frame 7 Original color LP", 0x5236542, 0x5236562, indexCPS2_Colossus, 0 },
    { /* 0x29 */ "LK - Super Armor Shine Frame 1", 0x5236562, 0x5236582, indexCPS2_Colossus, 0 },
    { /* 0x2a */ "LK - Super Armor Shine Frame 2", 0x5236582, 0x52365a2, indexCPS2_Colossus, 0 },
    { /* 0x2b */ "LK - Super Armor Shine Frame 3", 0x52365a2, 0x52365c2, indexCPS2_Colossus, 0 },
    { /* 0x2c */ "LK - Super Armor Shine Frame 4", 0x52365c2, 0x52365e2, indexCPS2_Colossus, 0 },
    { /* 0x2d */ "LK - Super Armor Shine Frame 5", 0x52365e2, 0x5236602, indexCPS2_Colossus, 0 },
    { /* 0x2e */ "LK - Super Armor Shine Frame 6", 0x5236602, 0x5236622, indexCPS2_Colossus, 0 },
    { /* 0x2f */ "LK - Stance Frame 1", 0x5236622, 0x5236642, indexCPS2_Colossus, 0 },
    { /* 0x30 */ "LK - Stance Frame 2", 0x5236642, 0x5236662, indexCPS2_Colossus, 0 },
    { /* 0x31 */ "LK - Stance Frame 3", 0x5236662, 0x5236682, indexCPS2_Colossus, 0 },
    { /* 0x32 */ "LK - Stance Frame 4", 0x5236682, 0x52366a2, indexCPS2_Colossus, 0 },
    { /* 0x33 */ "LK - Stance Frame 5", 0x52366a2, 0x52366c2, indexCPS2_Colossus, 0 },
    { /* 0x34 */ "LK - Stance Frame 6", 0x52366c2, 0x52366e2, indexCPS2_Colossus, 0 },
    { /* 0x35 */ "LK - Stance Frame 7", 0x52366e2, 0x5236702, indexCPS2_Colossus, 0 },
    { /* 0x36 */ "LK - Stance Frame 8", 0x5236702, 0x5236722, indexCPS2_Colossus, 0 },
    { /* 0x37 */ "LK - Stance Frame 9", 0x5236722, 0x5236742, indexCPS2_Colossus, 0 },
    { /* 0x38 */ "LK - Power Dive Shine Frame 1", 0x5236742, 0x5236762, indexCPS2_Colossus, 0 },
    { /* 0x39 */ "LK - Power Dive Shine Frame 2", 0x5236762, 0x5236782, indexCPS2_Colossus, 0 },
    { /* 0x3a */ "LK - Power Dive Shine Frame 3", 0x5236782, 0x52367a2, indexCPS2_Colossus, 0 },
    { /* 0x3b */ "LK - Power Dive Shine Frame 4", 0x52367a2, 0x52367c2, indexCPS2_Colossus, 0 },
    { /* 0x3c */ "LK - Power Dive Shine Frame 5", 0x52367c2, 0x52367e2, indexCPS2_Colossus, 0 },
    { /* 0x3d */ "LK - Power Dive Shine Frame 6", 0x52367e2, 0x5236802, indexCPS2_Colossus, 0 },
    { /* 0x3e */ "LK - Power Dive Shine Frame 7", 0x5236802, 0x5236822, indexCPS2_Colossus, 0 },
    { /* 0x3f */ "LK - Power Dive Shine Frame 8", 0x5236822, 0x5236842, indexCPS2_Colossus, 0 },
    { /* 0x40 */ "LK - Power Dive Shine Frame 9", 0x5236842, 0x5236862, indexCPS2_Colossus, 0 },
    { /* 0x41 */ "LK - Power Dive Shine Frame 10", 0x5236862, 0x5236882, indexCPS2_Colossus, 0 },
    { /* 0x42 */ "LK - Super Armor Stance Frame 1", 0x5236882, 0x52368a2, indexCPS2_Colossus, 0 },
    { /* 0x43 */ "LK - Super Armor Stance Frame 2", 0x52368a2, 0x52368c2, indexCPS2_Colossus, 0 },
    { /* 0x44 */ "LK - Super Armor Stance Frame 3", 0x52368c2, 0x52368e2, indexCPS2_Colossus, 0 },
    { /* 0x45 */ "LK - Super Armor Stance Frame 4", 0x52368e2, 0x5236902, indexCPS2_Colossus, 0 },
    { /* 0x46 */ "LK - Super Armor Stance Frame 5", 0x5236902, 0x5236922, indexCPS2_Colossus, 0 },
    { /* 0x47 */ "LK - Super Armor Stance Frame 6", 0x5236922, 0x5236942, indexCPS2_Colossus, 0 },
    { /* 0x48 */ "LK - Super Armor Stance Frame 7", 0x5236942, 0x5236962, indexCPS2_Colossus, 0 },
    { /* 0x49 */ "HP - Super Armor Shine Frame 1", 0x5236962, 0x5236982, indexCPS2_Colossus, 0 },
    { /* 0x4a */ "HP - Super Armor Shine Frame 2", 0x5236982, 0x52369a2, indexCPS2_Colossus, 0 },
    { /* 0x4b */ "HP - Super Armor Shine Frame 3", 0x52369a2, 0x52369c2, indexCPS2_Colossus, 0 },
    { /* 0x4c */ "HP - Super Armor Shine Frame 4", 0x52369c2, 0x52369e2, indexCPS2_Colossus, 0 },
    { /* 0x4d */ "HP - Super Armor Shine Frame 5", 0x52369e2, 0x5236a02, indexCPS2_Colossus, 0 },
    { /* 0x4e */ "HP - Super Armor Shine Frame 6", 0x5236a02, 0x5236a22, indexCPS2_Colossus, 0 },
    { /* 0x4f */ "HP - Stance Frame 1", 0x5236a22, 0x5236a42, indexCPS2_Colossus, 0 },
    { /* 0x50 */ "HP - Stance Frame 2", 0x5236a42, 0x5236a62, indexCPS2_Colossus, 0 },
    { /* 0x51 */ "HP - Stance Frame 3", 0x5236a62, 0x5236a82, indexCPS2_Colossus, 0 },
    { /* 0x52 */ "HP - Stance Frame 4", 0x5236a82, 0x5236aa2, indexCPS2_Colossus, 0 },
    { /* 0x53 */ "HP - Stance Frame 5", 0x5236aa2, 0x5236ac2, indexCPS2_Colossus, 0 },
    { /* 0x54 */ "HP - Stance Frame 6", 0x5236ac2, 0x5236ae2, indexCPS2_Colossus, 0 },
    { /* 0x55 */ "HP - Stance Frame 7", 0x5236ae2, 0x5236b02, indexCPS2_Colossus, 0 },
    { /* 0x56 */ "HP - Stance Frame 8", 0x5236b02, 0x5236b22, indexCPS2_Colossus, 0 },
    { /* 0x57 */ "HP - Stance Frame 9", 0x5236b22, 0x5236b42, indexCPS2_Colossus, 0 },
    { /* 0x58 */ "HP - Power Dive Shine Frame 1", 0x5236b42, 0x5236b62, indexCPS2_Colossus, 0 },
    { /* 0x59 */ "HP - Power Dive Shine Frame 2", 0x5236b62, 0x5236b82, indexCPS2_Colossus, 0 },
    { /* 0x5a */ "HP - Power Dive Shine Frame 3", 0x5236b82, 0x5236ba2, indexCPS2_Colossus, 0 },
    { /* 0x5b */ "HP - Power Dive Shine Frame 4", 0x5236ba2, 0x5236bc2, indexCPS2_Colossus, 0 },
    { /* 0x5c */ "HP - Power Dive Shine Frame 5", 0x5236bc2, 0x5236be2, indexCPS2_Colossus, 0 },
    { /* 0x5d */ "HP - Power Dive Shine Frame 6", 0x5236be2, 0x5236c02, indexCPS2_Colossus, 0 },
    { /* 0x5e */ "HP - Power Dive Shine Frame 7", 0x5236c02, 0x5236c22, indexCPS2_Colossus, 0 },
    { /* 0x5f */ "HP - Power Dive Shine Frame 8", 0x5236c22, 0x5236c42, indexCPS2_Colossus, 0 },
    { /* 0x60 */ "HP - Power Dive Shine Frame 9", 0x5236c42, 0x5236c62, indexCPS2_Colossus, 0 },
    { /* 0x61 */ "HP - Power Dive Shine Frame 10", 0x5236c62, 0x5236c82, indexCPS2_Colossus, 0 },
    { /* 0x62 */ "HP - Super Armor Stance Frame 1", 0x5236c82, 0x5236ca2, indexCPS2_Colossus, 0 },
    { /* 0x63 */ "HP - Super Armor Stance Frame 2", 0x5236ca2, 0x5236cc2, indexCPS2_Colossus, 0 },
    { /* 0x64 */ "HP - Super Armor Stance Frame 3", 0x5236cc2, 0x5236ce2, indexCPS2_Colossus, 0 },
    { /* 0x65 */ "HP - Super Armor Stance Frame 4", 0x5236ce2, 0x5236d02, indexCPS2_Colossus, 0 },
    { /* 0x66 */ "HP - Super Armor Stance Frame 5", 0x5236d02, 0x5236d22, indexCPS2_Colossus, 0 },
    { /* 0x67 */ "HP - Super Armor Stance Frame 6", 0x5236d22, 0x5236d42, indexCPS2_Colossus, 0 },
    { /* 0x68 */ "HP - Super Armor Stance Frame 7", 0x5236d42, 0x5236d62, indexCPS2_Colossus, 0 },
    { /* 0x69 */ "HK - Super Armor Shine Frame 1", 0x5236d62, 0x5236d82, indexCPS2_Colossus, 0 },
    { /* 0x6a */ "HK - Super Armor Shine Frame 2", 0x5236d82, 0x5236da2, indexCPS2_Colossus, 0 },
    { /* 0x6b */ "HK - Super Armor Shine Frame 3", 0x5236da2, 0x5236dc2, indexCPS2_Colossus, 0 },
    { /* 0x6c */ "HK - Super Armor Shine Frame 4", 0x5236dc2, 0x5236de2, indexCPS2_Colossus, 0 },
    { /* 0x6d */ "HK - Super Armor Shine Frame 5", 0x5236de2, 0x5236e02, indexCPS2_Colossus, 0 },
    { /* 0x6e */ "HK - Super Armor Shine Frame 6", 0x5236e02, 0x5236e22, indexCPS2_Colossus, 0 },
    { /* 0x6f */ "HK - Stance Frame 1", 0x5236e22, 0x5236e42, indexCPS2_Colossus, 0 },
    { /* 0x70 */ "HK - Stance Frame 2", 0x5236e42, 0x5236e62, indexCPS2_Colossus, 0 },
    { /* 0x71 */ "HK - Stance Frame 3", 0x5236e62, 0x5236e82, indexCPS2_Colossus, 0 },
    { /* 0x72 */ "HK - Stance Frame 4", 0x5236e82, 0x5236ea2, indexCPS2_Colossus, 0 },
    { /* 0x73 */ "HK - Stance Frame 5", 0x5236ea2, 0x5236ec2, indexCPS2_Colossus, 0 },
    { /* 0x74 */ "HK - Stance Frame 6", 0x5236ec2, 0x5236ee2, indexCPS2_Colossus, 0 },
    { /* 0x75 */ "HK - Stance Frame 7", 0x5236ee2, 0x5236f02, indexCPS2_Colossus, 0 },
    { /* 0x76 */ "HK - Stance Frame 8", 0x5236f02, 0x5236f22, indexCPS2_Colossus, 0 },
    { /* 0x77 */ "HK - Stance Frame 9", 0x5236f22, 0x5236f42, indexCPS2_Colossus, 0 },
    { /* 0x78 */ "HK - Power Dive Shine Frame 1", 0x5236f42, 0x5236f62, indexCPS2_Colossus, 0 },
    { /* 0x79 */ "HK - Power Dive Shine Frame 2", 0x5236f62, 0x5236f82, indexCPS2_Colossus, 0 },
    { /* 0x7a */ "HK - Power Dive Shine Frame 3", 0x5236f82, 0x5236fa2, indexCPS2_Colossus, 0 },
    { /* 0x7b */ "HK - Power Dive Shine Frame 4", 0x5236fa2, 0x5236fc2, indexCPS2_Colossus, 0 },
    { /* 0x7c */ "HK - Power Dive Shine Frame 5", 0x5236fc2, 0x5236fe2, indexCPS2_Colossus, 0 },
    { /* 0x7d */ "HK - Power Dive Shine Frame 6", 0x5236fe2, 0x5237002, indexCPS2_Colossus, 0 },
    { /* 0x7e */ "HK - Power Dive Shine Frame 7", 0x5237002, 0x5237022, indexCPS2_Colossus, 0 },
    { /* 0x7f */ "HK - Power Dive Shine Frame 8", 0x5237022, 0x5237042, indexCPS2_Colossus, 0 },
    { /* 0x80 */ "HK - Power Dive Shine Frame 9", 0x5237042, 0x5237062, indexCPS2_Colossus, 0 },
    { /* 0x81 */ "HK - Power Dive Shine Frame 10", 0x5237062, 0x5237082, indexCPS2_Colossus, 0 },
    { /* 0x82 */ "HK - Super Armor Stance Frame 1", 0x5237082, 0x52370a2, indexCPS2_Colossus, 0 },
    { /* 0x83 */ "HK - Super Armor Stance Frame 2", 0x52370a2, 0x52370c2, indexCPS2_Colossus, 0 },
    { /* 0x84 */ "HK - Super Armor Stance Frame 3", 0x52370c2, 0x52370e2, indexCPS2_Colossus, 0 },
    { /* 0x85 */ "HK - Super Armor Stance Frame 4", 0x52370e2, 0x5237102, indexCPS2_Colossus, 0 },
    { /* 0x86 */ "HK - Super Armor Stance Frame 5", 0x5237102, 0x5237122, indexCPS2_Colossus, 0 },
    { /* 0x87 */ "HK - Super Armor Stance Frame 6", 0x5237122, 0x5237142, indexCPS2_Colossus, 0 },
    { /* 0x88 */ "HK - Super Armor Stance Frame 7", 0x5237142, 0x5237162, indexCPS2_Colossus, 0 },
    { /* 0x89 */ "A1 - Super Armor Shine Frame 1", 0x5237162, 0x5237182, indexCPS2_Colossus, 0 },
    { /* 0x8a */ "A1 - Super Armor Shine Frame 2", 0x5237182, 0x52371a2, indexCPS2_Colossus, 0 },
    { /* 0x8b */ "A1 - Super Armor Shine Frame 3", 0x52371a2, 0x52371c2, indexCPS2_Colossus, 0 },
    { /* 0x8c */ "A1 - Super Armor Shine Frame 4", 0x52371c2, 0x52371e2, indexCPS2_Colossus, 0 },
    { /* 0x8d */ "A1 - Super Armor Shine Frame 5", 0x52371e2, 0x5237202, indexCPS2_Colossus, 0 },
    { /* 0x8e */ "A1 - Super Armor Shine Frame 6", 0x5237202, 0x5237222, indexCPS2_Colossus, 0 },
    { /* 0x8f */ "A1 - Stance Frame 1", 0x5237222, 0x5237242, indexCPS2_Colossus, 0 },
    { /* 0x90 */ "A1 - Stance Frame 2", 0x5237242, 0x5237262, indexCPS2_Colossus, 0 },
    { /* 0x91 */ "A1 - Stance Frame 3", 0x5237262, 0x5237282, indexCPS2_Colossus, 0 },
    { /* 0x92 */ "A1 - Stance Frame 4", 0x5237282, 0x52372a2, indexCPS2_Colossus, 0 },
    { /* 0x93 */ "A1 - Stance Frame 5", 0x52372a2, 0x52372c2, indexCPS2_Colossus, 0 },
    { /* 0x94 */ "A1 - Stance Frame 6", 0x52372c2, 0x52372e2, indexCPS2_Colossus, 0 },
    { /* 0x95 */ "A1 - Stance Frame 7", 0x52372e2, 0x5237302, indexCPS2_Colossus, 0 },
    { /* 0x96 */ "A1 - Stance Frame 8", 0x5237302, 0x5237322, indexCPS2_Colossus, 0 },
    { /* 0x97 */ "A1 - Stance Frame 9", 0x5237322, 0x5237342, indexCPS2_Colossus, 0 },
    { /* 0x98 */ "A1 - Power Dive Shine Frame 1", 0x5237342, 0x5237362, indexCPS2_Colossus, 0 },
    { /* 0x99 */ "A1 - Power Dive Shine Frame 2", 0x5237362, 0x5237382, indexCPS2_Colossus, 0 },
    { /* 0x9a */ "A1 - Power Dive Shine Frame 3", 0x5237382, 0x52373a2, indexCPS2_Colossus, 0 },
    { /* 0x9b */ "A1 - Power Dive Shine Frame 4", 0x52373a2, 0x52373c2, indexCPS2_Colossus, 0 },
    { /* 0x9c */ "A1 - Power Dive Shine Frame 5", 0x52373c2, 0x52373e2, indexCPS2_Colossus, 0 },
    { /* 0x9d */ "A1 - Power Dive Shine Frame 6", 0x52373e2, 0x5237402, indexCPS2_Colossus, 0 },
    { /* 0x9e */ "A1 - Power Dive Shine Frame 7", 0x5237402, 0x5237422, indexCPS2_Colossus, 0 },
    { /* 0x9f */ "A1 - Power Dive Shine Frame 8", 0x5237422, 0x5237442, indexCPS2_Colossus, 0 },
    { /* 0xa0 */ "A1 - Power Dive Shine Frame 9", 0x5237442, 0x5237462, indexCPS2_Colossus, 0 },
    { /* 0xa1 */ "A1 - Power Dive Shine Frame 10", 0x5237462, 0x5237482, indexCPS2_Colossus, 0 },
    { /* 0xa2 */ "A1 - Super Armor Stance Frame 1", 0x5237482, 0x52374a2, indexCPS2_Colossus, 0 },
    { /* 0xa3 */ "A1 - Super Armor Stance Frame 2", 0x52374a2, 0x52374c2, indexCPS2_Colossus, 0 },
    { /* 0xa4 */ "A1 - Super Armor Stance Frame 3", 0x52374c2, 0x52374e2, indexCPS2_Colossus, 0 },
    { /* 0xa5 */ "A1 - Super Armor Stance Frame 4", 0x52374e2, 0x5237502, indexCPS2_Colossus, 0 },
    { /* 0xa6 */ "A1 - Super Armor Stance Frame 5", 0x5237502, 0x5237522, indexCPS2_Colossus, 0 },
    { /* 0xa7 */ "A1 - Super Armor Stance Frame 6", 0x5237522, 0x5237542, indexCPS2_Colossus, 0 },
    { /* 0xa8 */ "A1 - Super Armor Stance Frame 7", 0x5237542, 0x5237562, indexCPS2_Colossus, 0 },
    { /* 0xa9 */ "A2 - Super Armor Shine Frame 1", 0x5237562, 0x5237582, indexCPS2_Colossus, 0 },
    { /* 0xaa */ "A2 - Super Armor Shine Frame 2", 0x5237582, 0x52375a2, indexCPS2_Colossus, 0 },
    { /* 0xab */ "A2 - Super Armor Shine Frame 3", 0x52375a2, 0x52375c2, indexCPS2_Colossus, 0 },
    { /* 0xac */ "A2 - Super Armor Shine Frame 4", 0x52375c2, 0x52375e2, indexCPS2_Colossus, 0 },
    { /* 0xad */ "A2 - Super Armor Shine Frame 5", 0x52375e2, 0x5237602, indexCPS2_Colossus, 0 },
    { /* 0xae */ "A2 - Super Armor Shine Frame 6", 0x5237602, 0x5237622, indexCPS2_Colossus, 0 },
    { /* 0xaf */ "A2 - Stance Frame 1", 0x5237622, 0x5237642, indexCPS2_Colossus, 0 },
    { /* 0xb0 */ "A2 - Stance Frame 2", 0x5237642, 0x5237662, indexCPS2_Colossus, 0 },
    { /* 0xb1 */ "A2 - Stance Frame 3", 0x5237662, 0x5237682, indexCPS2_Colossus, 0 },
    { /* 0xb2 */ "A2 - Stance Frame 4", 0x5237682, 0x52376a2, indexCPS2_Colossus, 0 },
    { /* 0xb3 */ "A2 - Stance Frame 5", 0x52376a2, 0x52376c2, indexCPS2_Colossus, 0 },
    { /* 0xb4 */ "A2 - Stance Frame 6", 0x52376c2, 0x52376e2, indexCPS2_Colossus, 0 },
    { /* 0xb5 */ "A2 - Stance Frame 7", 0x52376e2, 0x5237702, indexCPS2_Colossus, 0 },
    { /* 0xb6 */ "A2 - Stance Frame 8", 0x5237702, 0x5237722, indexCPS2_Colossus, 0 },
    { /* 0xb7 */ "A2 - Stance Frame 9", 0x5237722, 0x5237742, indexCPS2_Colossus, 0 },
    { /* 0xb8 */ "A2 - Power Dive Shine Frame 1", 0x5237742, 0x5237762, indexCPS2_Colossus, 0 },
    { /* 0xb9 */ "A2 - Power Dive Shine Frame 2", 0x5237762, 0x5237782, indexCPS2_Colossus, 0 },
    { /* 0xba */ "A2 - Power Dive Shine Frame 3", 0x5237782, 0x52377a2, indexCPS2_Colossus, 0 },
    { /* 0xbb */ "A2 - Power Dive Shine Frame 4", 0x52377a2, 0x52377c2, indexCPS2_Colossus, 0 },
    { /* 0xbc */ "A2 - Power Dive Shine Frame 5", 0x52377c2, 0x52377e2, indexCPS2_Colossus, 0 },
    { /* 0xbd */ "A2 - Power Dive Shine Frame 6", 0x52377e2, 0x5237802, indexCPS2_Colossus, 0 },
    { /* 0xbe */ "A2 - Power Dive Shine Frame 7", 0x5237802, 0x5237822, indexCPS2_Colossus, 0 },
    { /* 0xbf */ "A2 - Power Dive Shine Frame 8", 0x5237822, 0x5237842, indexCPS2_Colossus, 0 },
    { /* 0xc0 */ "A2 - Power Dive Shine Frame 9", 0x5237842, 0x5237862, indexCPS2_Colossus, 0 },
    { /* 0xc1 */ "A2 - Power Dive Shine Frame 10", 0x5237862, 0x5237882, indexCPS2_Colossus, 0 },
    { /* 0xc2 */ "A2 - Super Armor Stance Frame 1", 0x5237882, 0x52378a2, indexCPS2_Colossus, 0 },
    { /* 0xc3 */ "A2 - Super Armor Stance Frame 2", 0x52378a2, 0x52378c2, indexCPS2_Colossus, 0 },
    { /* 0xc4 */ "A2 - Super Armor Stance Frame 3", 0x52378c2, 0x52378e2, indexCPS2_Colossus, 0 },
    { /* 0xc5 */ "A2 - Super Armor Stance Frame 4", 0x52378e2, 0x5237902, indexCPS2_Colossus, 0 },
    { /* 0xc6 */ "A2 - Super Armor Stance Frame 5", 0x5237902, 0x5237922, indexCPS2_Colossus, 0 },
    { /* 0xc7 */ "A2 - Super Armor Stance Frame 6", 0x5237922, 0x5237942, indexCPS2_Colossus, 0 },
    { /* 0xc8 */ "A2 - Super Armor Stance Frame 7", 0x5237942, 0x5237962, indexCPS2_Colossus, 0 },
};

const sDescTreeNode MVC2_A_COLOSSUS_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_LP, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_LK, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_HP, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_HK, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_A1, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_A2, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_LP[] =
{
    { "Main Color LP", 0x53384c2, 0x53384e2, indexCPS2_IronMan, 0 },
    { "(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53384e2, 0x5338502, indexCPS2_IronMan, 1 },
    { "(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338502, 0x5338522, indexCPS2_IronMan, 2 },
    { "(04) Not Used", 0x5338522, 0x5338542, indexCPS2_IronMan, 3 },
    { "(05) Not Used", 0x5338542, 0x5338562, indexCPS2_IronMan, 4 },
    { "(06) Not Used", 0x5338562, 0x5338582, indexCPS2_IronMan, 5 },
    { "(07) Not Used", 0x5338582, 0x53385a2, indexCPS2_IronMan, 6 },
    { "(08) Not Used", 0x53385a2, 0x53385c2, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_LK[] =
{
    { "Main Color LK", 0x53385c2, 0x53385e2, indexCPS2_IronMan, 0 },
    { "(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53385e2, 0x5338602, indexCPS2_IronMan, 1 },
    { "(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338602, 0x5338622, indexCPS2_IronMan, 2 },
    { "(04) Not Used", 0x5338622, 0x5338642, indexCPS2_IronMan, 3 },
    { "(05) Not Used", 0x5338642, 0x5338662, indexCPS2_IronMan, 4 },
    { "(06) Not Used", 0x5338662, 0x5338682, indexCPS2_IronMan, 5 },
    { "(07) Not Used", 0x5338682, 0x53386a2, indexCPS2_IronMan, 6 },
    { "(08) Not Used", 0x53386a2, 0x53386c2, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_HP[] =
{
    { "Main Color HP", 0x53386c2, 0x53386e2, indexCPS2_IronMan, 0 },
    { "(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53386e2, 0x5338702, indexCPS2_IronMan, 1 },
    { "(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338702, 0x5338722, indexCPS2_IronMan, 2 },
    { "(04) Not Used", 0x5338722, 0x5338742, indexCPS2_IronMan, 3 },
    { "(05) Not Used", 0x5338742, 0x5338762, indexCPS2_IronMan, 4 },
    { "(06) Not Used", 0x5338762, 0x5338782, indexCPS2_IronMan, 5 },
    { "(07) Not Used", 0x5338782, 0x53387a2, indexCPS2_IronMan, 6 },
    { "(08) Not Used", 0x53387a2, 0x53387c2, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_HK[] =
{
    { "Main Color HK", 0x53387c2, 0x53387e2, indexCPS2_IronMan, 0 },
    { "(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53387e2, 0x5338802, indexCPS2_IronMan, 1 },
    { "(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338802, 0x5338822, indexCPS2_IronMan, 2 },
    { "(04) Not Used", 0x5338822, 0x5338842, indexCPS2_IronMan, 3 },
    { "(05) Not Used", 0x5338842, 0x5338862, indexCPS2_IronMan, 4 },
    { "(06) Not Used", 0x5338862, 0x5338882, indexCPS2_IronMan, 5 },
    { "(07) Not Used", 0x5338882, 0x53388a2, indexCPS2_IronMan, 6 },
    { "(08) Not Used", 0x53388a2, 0x53388c2, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_A1[] =
{
    { "Main Color A1", 0x53388c2, 0x53388e2, indexCPS2_IronMan, 0 },
    { "(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53388e2, 0x5338902, indexCPS2_IronMan, 1 },
    { "(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338902, 0x5338922, indexCPS2_IronMan, 2 },
    { "(04) Not Used", 0x5338922, 0x5338942, indexCPS2_IronMan, 3 },
    { "(05) Not Used", 0x5338942, 0x5338962, indexCPS2_IronMan, 4 },
    { "(06) Not Used", 0x5338962, 0x5338982, indexCPS2_IronMan, 5 },
    { "(07) Not Used", 0x5338982, 0x53389a2, indexCPS2_IronMan, 6 },
    { "(08) Not Used", 0x53389a2, 0x53389c2, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_A2[] =
{
    { "Main Color A2", 0x53389c2, 0x53389e2, indexCPS2_IronMan, 0 },
    { "(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53389e2, 0x5338a02, indexCPS2_IronMan, 1 },
    { "(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338a02, 0x5338a22, indexCPS2_IronMan, 2 },
    { "(04) Not Used", 0x5338a22, 0x5338a42, indexCPS2_IronMan, 3 },
    { "(05) Not Used", 0x5338a42, 0x5338a62, indexCPS2_IronMan, 4 },
    { "(06) Not Used", 0x5338a62, 0x5338a82, indexCPS2_IronMan, 5 },
    { "(07) Not Used", 0x5338a82, 0x5338aa2, indexCPS2_IronMan, 6 },
    { "(08) Not Used", 0x5338aa2, 0x5338ac2, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x5338ac2, 0x5338ae2, indexCPS2_IronMan, 0 },
    { "Burning Light", 0x5338ae2, 0x5338b02, indexCPS2_IronMan, 0 },
    { "Shocked Dark", 0x5338b02, 0x5338b22, indexCPS2_IronMan, 0 },
    { "Shocked Light", 0x5338b22, 0x5338b42, indexCPS2_IronMan, 0 },
    { "Dark Burning Dark", 0x5338b42, 0x5338b62, indexCPS2_IronMan, 0 },
    { "Dark Burning Light", 0x5338b62, 0x5338b82, indexCPS2_IronMan, 0 },
    { "Kinetic Charge Dark", 0x5338b82, 0x5338ba2, indexCPS2_IronMan, 0 },
    { "Kinetic Charge Light", 0x5338ba2, 0x5338bc2, indexCPS2_IronMan, 0 },
};

const sDescTreeNode MVC2_A_IRONMAN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_LP[] =
{
    { "Main Color LP", 0x545e422, 0x545e442, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "(02) Drones (bombs) / Guts", 0x545e442, 0x545e462, indexCPS2_Sentinel, 1 },
    { "(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e462, 0x545e482, indexCPS2_Sentinel, 2 },
    { "(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e482, 0x545e4a2, indexCPS2_Sentinel, 3 },
    { "(05) Not Used", 0x545e4a2, 0x545e4c2, indexCPS2_Sentinel, 4 },
    { "(06) Not Used", 0x545e4c2, 0x545e4e2, indexCPS2_Sentinel, 5 },
    { "(07) Not Used", 0x545e4e2, 0x545e502, indexCPS2_Sentinel, 6 },
    { "(08) Not Used", 0x545e502, 0x545e522, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_LK[] =
{
    { "Main Color LK", 0x545e522, 0x545e542, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "(02) Drones (bombs) / Guts", 0x545e542, 0x545e562, indexCPS2_Sentinel, 1 },
    { "(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e562, 0x545e582, indexCPS2_Sentinel, 2 },
    { "(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e582, 0x545e5a2, indexCPS2_Sentinel, 3 },
    { "(05) Not Used", 0x545e5a2, 0x545e5c2, indexCPS2_Sentinel, 4 },
    { "(06) Not Used", 0x545e5c2, 0x545e5e2, indexCPS2_Sentinel, 5 },
    { "(07) Not Used", 0x545e5e2, 0x545e602, indexCPS2_Sentinel, 6 },
    { "(08) Not Used", 0x545e602, 0x545e622, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_HP[] =
{
    { "Main Color HP", 0x545e622, 0x545e642, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "(02) Drones (bombs) / Guts", 0x545e642, 0x545e662, indexCPS2_Sentinel, 1 },
    { "(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e662, 0x545e682, indexCPS2_Sentinel, 2 },
    { "(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e682, 0x545e6a2, indexCPS2_Sentinel, 3 },
    { "(05) Not Used", 0x545e6a2, 0x545e6c2, indexCPS2_Sentinel, 4 },
    { "(06) Not Used", 0x545e6c2, 0x545e6e2, indexCPS2_Sentinel, 5 },
    { "(07) Not Used", 0x545e6e2, 0x545e702, indexCPS2_Sentinel, 6 },
    { "(08) Not Used", 0x545e702, 0x545e722, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_HK[] =
{
    { "Main Color HK", 0x545e722, 0x545e742, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "(02) Drones (bombs) / Guts", 0x545e742, 0x545e762, indexCPS2_Sentinel, 1 },
    { "(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e762, 0x545e782, indexCPS2_Sentinel, 2 },
    { "(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e782, 0x545e7a2, indexCPS2_Sentinel, 3 },
    { "(05) Not Used", 0x545e7a2, 0x545e7c2, indexCPS2_Sentinel, 4 },
    { "(06) Not Used", 0x545e7c2, 0x545e7e2, indexCPS2_Sentinel, 5 },
    { "(07) Not Used", 0x545e7e2, 0x545e802, indexCPS2_Sentinel, 6 },
    { "(08) Not Used", 0x545e802, 0x545e822, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_A1[] =
{
    { "Main Color A1", 0x545e822, 0x545e842, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "(02) Drones (bombs) / Guts", 0x545e842, 0x545e862, indexCPS2_Sentinel, 1 },
    { "(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e862, 0x545e882, indexCPS2_Sentinel, 2 },
    { "(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e882, 0x545e8a2, indexCPS2_Sentinel, 3 },
    { "(05) Not Used", 0x545e8a2, 0x545e8c2, indexCPS2_Sentinel, 4 },
    { "(06) Not Used", 0x545e8c2, 0x545e8e2, indexCPS2_Sentinel, 5 },
    { "(07) Not Used", 0x545e8e2, 0x545e902, indexCPS2_Sentinel, 6 },
    { "(08) Not Used", 0x545e902, 0x545e922, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_A2[] =
{
    { "Main Color A2", 0x545e922, 0x545e942, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "(02) Drones (bombs) / Guts", 0x545e942, 0x545e962, indexCPS2_Sentinel, 1 },
    { "(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e962, 0x545e982, indexCPS2_Sentinel, 2 },
    { "(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e982, 0x545e9a2, indexCPS2_Sentinel, 3 },
    { "(05) Not Used", 0x545e9a2, 0x545e9c2, indexCPS2_Sentinel, 4 },
    { "(06) Not Used", 0x545e9c2, 0x545e9e2, indexCPS2_Sentinel, 5 },
    { "(07) Not Used", 0x545e9e2, 0x545ea02, indexCPS2_Sentinel, 6 },
    { "(08) Not Used", 0x545ea02, 0x545ea22, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x545ea22, 0x545ea42, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Burning Dark 2", 0x545ea42, 0x545ea62, indexCPS2_Sentinel, 1 },
    { "Burning Light", 0x545ea62, 0x545ea82, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Burning Light 2", 0x545ea82, 0x545eaa2, indexCPS2_Sentinel, 1 },
    { "Shocked Dark", 0x545eaa2, 0x545eac2, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Shocked Dark 2", 0x545eac2, 0x545eae2, indexCPS2_Sentinel, 1 },
    { "Shocked Light", 0x545eae2, 0x545eb02, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Shocked Light 2", 0x545eb02, 0x545eb22, indexCPS2_Sentinel, 1 },
    { "Dark Burning Dark", 0x545eb22, 0x545eb42, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Dark Burning Dark 2", 0x545eb42, 0x545eb62, indexCPS2_Sentinel, 1 },
    { "Dark Burning Light", 0x545eb62, 0x545eb82, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Dark Burning Light 2", 0x545eb82, 0x545eba2, indexCPS2_Sentinel, 1 },
    { "Kinetic Charge Dark", 0x545eba2, 0x545ebc2, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Kinetic Charge Dark 2", 0x545ebc2, 0x545ebe2, indexCPS2_Sentinel, 1 },
    { "Kinetic Charge Light", 0x545ebe2, 0x545ec02, indexCPS2_Sentinel, 0, &pairUnhandled },
    { "Kinetic Charge Light 2", 0x545ec02, 0x545ec22, indexCPS2_Sentinel, 1 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_EXTRAS[] =
{
    { /* 0x11 */ "Not Used", 0x545ec22, 0x545ec42 },
    { /* 0x12 */ "PaletteGlitch: After Fly Glitch Tagout - Rocket Punch (wires)", 0x545ec42, 0x545ec62 },
    { /* 0x13 */ "PaletteGlitch: After Fly Glitch Tagout - ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames) - all buttons", 0x545ec62, 0x545ec82 },
};

const sDescTreeNode MVC2_A_SENTINEL_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_LP, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_LK, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_HP, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_HK, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_A1, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_A2, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_LP[] =
{
    { "Main Color LP", 0x5585402, 0x5585422, indexCPS2_Blackheart, 0 },
    { "(02) Not Used", 0x5585422, 0x5585442, indexCPS2_Blackheart, 1 },
    { "(03) Not Used", 0x5585442, 0x5585462, indexCPS2_Blackheart, 2 },
    { "(04) Not Used", 0x5585462, 0x5585482, indexCPS2_Blackheart, 3 },
    { "(05) Not Used", 0x5585482, 0x55854a2, indexCPS2_Blackheart, 4 },
    { "(06) Not Used", 0x55854a2, 0x55854c2, indexCPS2_Blackheart, 5 },
    { "(07) Not Used", 0x55854c2, 0x55854e2, indexCPS2_Blackheart, 6 },
    { "(08) Not Used", 0x55854e2, 0x5585502, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_LK[] =
{
    { "Main Color LK", 0x5585502, 0x5585522, indexCPS2_Blackheart, 0 },
    { "(02) Not Used", 0x5585522, 0x5585542, indexCPS2_Blackheart, 1 },
    { "(03) Not Used", 0x5585542, 0x5585562, indexCPS2_Blackheart, 2 },
    { "(04) Not Used", 0x5585562, 0x5585582, indexCPS2_Blackheart, 3 },
    { "(05) Not Used", 0x5585582, 0x55855a2, indexCPS2_Blackheart, 4 },
    { "(06) Not Used", 0x55855a2, 0x55855c2, indexCPS2_Blackheart, 5 },
    { "(07) Not Used", 0x55855c2, 0x55855e2, indexCPS2_Blackheart, 6 },
    { "(08) Not Used", 0x55855e2, 0x5585602, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_HP[] =
{
    { "Main Color HP", 0x5585602, 0x5585622, indexCPS2_Blackheart, 0 },
    { "(02) Not Used", 0x5585622, 0x5585642, indexCPS2_Blackheart, 1 },
    { "(03) Not Used", 0x5585642, 0x5585662, indexCPS2_Blackheart, 2 },
    { "(04) Not Used", 0x5585662, 0x5585682, indexCPS2_Blackheart, 3 },
    { "(05) Not Used", 0x5585682, 0x55856a2, indexCPS2_Blackheart, 4 },
    { "(06) Not Used", 0x55856a2, 0x55856c2, indexCPS2_Blackheart, 5 },
    { "(07) Not Used", 0x55856c2, 0x55856e2, indexCPS2_Blackheart, 6 },
    { "(08) Not Used", 0x55856e2, 0x5585702, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_HK[] =
{
    { "Main Color HK", 0x5585702, 0x5585722, indexCPS2_Blackheart, 0 },
    { "(02) Not Used", 0x5585722, 0x5585742, indexCPS2_Blackheart, 1 },
    { "(03) Not Used", 0x5585742, 0x5585762, indexCPS2_Blackheart, 2 },
    { "(04) Not Used", 0x5585762, 0x5585782, indexCPS2_Blackheart, 3 },
    { "(05) Not Used", 0x5585782, 0x55857a2, indexCPS2_Blackheart, 4 },
    { "(06) Not Used", 0x55857a2, 0x55857c2, indexCPS2_Blackheart, 5 },
    { "(07) Not Used", 0x55857c2, 0x55857e2, indexCPS2_Blackheart, 6 },
    { "(08) Not Used", 0x55857e2, 0x5585802, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_A1[] =
{
    { "Main Color A1", 0x5585802, 0x5585822, indexCPS2_Blackheart, 0 },
    { "(02) Not Used", 0x5585822, 0x5585842, indexCPS2_Blackheart, 1 },
    { "(03) Not Used", 0x5585842, 0x5585862, indexCPS2_Blackheart, 2 },
    { "(04) Not Used", 0x5585862, 0x5585882, indexCPS2_Blackheart, 3 },
    { "(05) Not Used", 0x5585882, 0x55858a2, indexCPS2_Blackheart, 4 },
    { "(06) Not Used", 0x55858a2, 0x55858c2, indexCPS2_Blackheart, 5 },
    { "(07) Not Used", 0x55858c2, 0x55858e2, indexCPS2_Blackheart, 6 },
    { "(08) Not Used", 0x55858e2, 0x5585902, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_A2[] =
{
    { "Main Color A2", 0x5585902, 0x5585922, indexCPS2_Blackheart, 0 },
    { "(02) Not Used", 0x5585922, 0x5585942, indexCPS2_Blackheart, 1 },
    { "(03) Not Used", 0x5585942, 0x5585962, indexCPS2_Blackheart, 2 },
    { "(04) Not Used", 0x5585962, 0x5585982, indexCPS2_Blackheart, 3 },
    { "(05) Not Used", 0x5585982, 0x55859a2, indexCPS2_Blackheart, 4 },
    { "(06) Not Used", 0x55859a2, 0x55859c2, indexCPS2_Blackheart, 5 },
    { "(07) Not Used", 0x55859c2, 0x55859e2, indexCPS2_Blackheart, 6 },
    { "(08) Not Used", 0x55859e2, 0x5585a02, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x5585a02, 0x5585a22, indexCPS2_Blackheart, 0 },
    { "Burning Light", 0x5585a22, 0x5585a42, indexCPS2_Blackheart, 0 },
    { "Shocked Dark", 0x5585a42, 0x5585a62, indexCPS2_Blackheart, 0 },
    { "Shocked Light", 0x5585a62, 0x5585a82, indexCPS2_Blackheart, 0 },
    { "Dark Burning Dark", 0x5585a82, 0x5585aa2, indexCPS2_Blackheart, 0 },
    { "Dark Burning Light", 0x5585aa2, 0x5585ac2, indexCPS2_Blackheart, 0 },
    { "Kinetic Charge Dark", 0x5585ac2, 0x5585ae2, indexCPS2_Blackheart, 0 },
    { "Kinetic Charge Light", 0x5585ae2, 0x5585b02, indexCPS2_Blackheart, 0 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Intro (portal)", 0x5585b02, 0x5585b22 },
    { /* 0x0a */ "Not Used", 0x5585b22, 0x5585b42 },
    { /* 0x0b */ "Not Used", 0x5585b42, 0x5585b62 },
    { /* 0x0c */ "Not Used", 0x5585b62, 0x5585b82 },
    { /* 0x0d */ "Demon Palettes for Higher Row Buttons (LP,HP,A1)", 0x5585b82, 0x5585ba2, indexCPS2_Blackheart, 2 },
    { /* 0x0e */ "Dark thunder (all buttons)", 0x5585ba2, 0x5585bc2, indexCPS2_Blackheart, 1 },
    { /* 0x0f */ "Not Used", 0x5585bc2, 0x5585be2 },
    { /* 0x10 */ "Inferno (all buttons)", 0x5585be2, 0x5585c02, indexCPS2_Blackheart, 8 },
    { /* 0x11 */ "Not Used", 0x5585c02, 0x5585c22 },
    { /* 0x12 */ "Tri-Eyed Demon (wings) HOD // Inferno (ground scroll) // Heart of Darkness (ground Scroll)", 0x5585c22, 0x5585c42 },
    { /* 0x13 */ "Armaggedon", 0x5585c42, 0x5585c62, indexCPS2_Blackheart, 11 },
    { /* 0x14 */ "HP Throw (Skulls) - all button", 0x5585c62, 0x5585c82, indexCPS2_Blackheart, 12 },
    { /* 0x15 */ "Not Used", 0x5585c82, 0x5585ca2 },
    { /* 0x16 */ "Not Used", 0x5585ca2, 0x5585cc2 },
    { /* 0x17 */ "Not Used", 0x5585cc2, 0x5585ce2 },
    { /* 0x18 */ "Not Used", 0x5585ce2, 0x5585d02 },
    { /* 0x19 */ "Demon Palettes for Lower Row Buttons (LK,HK,A2)", 0x5585d02, 0x5585d22, indexCPS2_Blackheart, 2 },
    { /* 0x1a */ "Winpose Skull - all buttons", 0x5585d22, 0x5585d42 },
    { /* 0x1b */ "j.MP (all buttons), s.mp (shine - all buttons)", 0x5585d42, 0x5585d62 },
};

const sDescTreeNode MVC2_A_BLACKHEART_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_LP, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_LK, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_HP, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_HK, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_A1, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_A2, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_LP[] =
{
    { "Main Color LP", 0x5673e42, 0x5673e62, indexCPS2_Thanos, 0 },
    { "(02) Stand Up Frame 2", 0x5673e62, 0x5673e82, indexCPS2_Thanos, 1 },
    { "(03) Not Used", 0x5673e82, 0x5673ea2, indexCPS2_Thanos, 2 },
    { "(04) Winpose (Materialize Frame)", 0x5673ea2, 0x5673ec2, indexCPS2_Thanos, 3 },
    { "(05) Not Used", 0x5673ec2, 0x5673ee2, indexCPS2_Thanos, 4 },
    { "(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x5673ee2, 0x5673f02, indexCPS2_Thanos, 5 },
    { "(07) Gauntlet Gems", 0x5673f02, 0x5673f22, indexCPS2_Thanos, 6 },
    { "(08) Gauntlet Gems", 0x5673f22, 0x5673f42, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_LK[] =
{
    { "Main Color LK", 0x5673f42, 0x5673f62, indexCPS2_Thanos, 0 },
    { "(02) Stand Up Frame 2", 0x5673f62, 0x5673f82, indexCPS2_Thanos, 1 },
    { "(03) Not Used", 0x5673f82, 0x5673fa2, indexCPS2_Thanos, 2 },
    { "(04) Winpose (Materialize Frame)", 0x5673fa2, 0x5673fc2, indexCPS2_Thanos, 3 },
    { "(05) Not Used", 0x5673fc2, 0x5673fe2, indexCPS2_Thanos, 4 },
    { "(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x5673fe2, 0x5674002, indexCPS2_Thanos, 5 },
    { "(07) Gauntlet Gems", 0x5674002, 0x5674022, indexCPS2_Thanos, 6 },
    { "(08) Gauntlet Gems", 0x5674022, 0x5674042, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_HP[] =
{
    { "Main Color HP", 0x5674042, 0x5674062, indexCPS2_Thanos, 0 },
    { "(02) Stand Up Frame 2", 0x5674062, 0x5674082, indexCPS2_Thanos, 1 },
    { "(03) Not Used", 0x5674082, 0x56740a2, indexCPS2_Thanos, 2 },
    { "(04) Winpose (Materialize Frame)", 0x56740a2, 0x56740c2, indexCPS2_Thanos, 3 },
    { "(05) Not Used", 0x56740c2, 0x56740e2, indexCPS2_Thanos, 4 },
    { "(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56740e2, 0x5674102, indexCPS2_Thanos, 5 },
    { "(07) Gauntlet Gems", 0x5674102, 0x5674122, indexCPS2_Thanos, 6 },
    { "(08) Gauntlet Gems", 0x5674122, 0x5674142, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_HK[] =
{
    { "Main Color HK", 0x5674142, 0x5674162, indexCPS2_Thanos, 0 },
    { "(02) Stand Up Frame 2", 0x5674162, 0x5674182, indexCPS2_Thanos, 1 },
    { "(03) Not Used", 0x5674182, 0x56741a2, indexCPS2_Thanos, 2 },
    { "(04) Winpose (Materialize Frame)", 0x56741a2, 0x56741c2, indexCPS2_Thanos, 3 },
    { "(05) Not Used", 0x56741c2, 0x56741e2, indexCPS2_Thanos, 4 },
    { "(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56741e2, 0x5674202, indexCPS2_Thanos, 5 },
    { "(07) Gauntlet Gems", 0x5674202, 0x5674222, indexCPS2_Thanos, 6 },
    { "(08) Gauntlet Gems", 0x5674222, 0x5674242, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_A1[] =
{
    { "Main Color A1", 0x5674242, 0x5674262, indexCPS2_Thanos, 0 },
    { "(02) Stand Up Frame 2", 0x5674262, 0x5674282, indexCPS2_Thanos, 1 },
    { "(03) Not Used", 0x5674282, 0x56742a2, indexCPS2_Thanos, 2 },
    { "(04) Winpose (Materialize Frame)", 0x56742a2, 0x56742c2, indexCPS2_Thanos, 3 },
    { "(05) Not Used", 0x56742c2, 0x56742e2, indexCPS2_Thanos, 4 },
    { "(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56742e2, 0x5674302, indexCPS2_Thanos, 5 },
    { "(07) Gauntlet Gems", 0x5674302, 0x5674322, indexCPS2_Thanos, 6 },
    { "(08) Gauntlet Gems", 0x5674322, 0x5674342, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_A2[] =
{
    { "Main Color A2", 0x5674342, 0x5674362, indexCPS2_Thanos, 0 },
    { "(02) Stand Up Frame 2", 0x5674362, 0x5674382, indexCPS2_Thanos, 1 },
    { "(03) Not Used", 0x5674382, 0x56743a2, indexCPS2_Thanos, 2 },
    { "(04) Winpose (Materialize Frame)", 0x56743a2, 0x56743c2, indexCPS2_Thanos, 3 },
    { "(05) Not Used", 0x56743c2, 0x56743e2, indexCPS2_Thanos, 4 },
    { "(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56743e2, 0x5674402, indexCPS2_Thanos, 5 },
    { "(07) Gauntlet Gems", 0x5674402, 0x5674422, indexCPS2_Thanos, 6 },
    { "(08) Gauntlet Gems", 0x5674422, 0x5674442, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x5674442, 0x5674462, indexCPS2_Thanos, 0 },
    { "Burning Light", 0x5674462, 0x5674482, indexCPS2_Thanos, 0 },
    { "Shocked Dark", 0x5674482, 0x56744a2, indexCPS2_Thanos, 0 },
    { "Shocked Light", 0x56744a2, 0x56744c2, indexCPS2_Thanos, 0 },
    { "Dark Burning Dark", 0x56744c2, 0x56744e2, indexCPS2_Thanos, 0 },
    { "Dark Burning Light", 0x56744e2, 0x5674502, indexCPS2_Thanos, 0 },
    { "Kinetic Charge Dark", 0x5674502, 0x5674522, indexCPS2_Thanos, 0 },
    { "Kinetic Charge Light", 0x5674522, 0x5674542, indexCPS2_Thanos, 0 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Stand Up Frame 1", 0x5674542, 0x5674562 },
    { /* 0x0a */ "Electricity Frame ( Gauntlet Soul / P throw)", 0x5674562, 0x5674582 },
    { /* 0x0b */ "Death Sphere", 0x5674582, 0x56745a2 },
    { /* 0x0c */ "Not Used", 0x56745a2, 0x56745c2 },
    { /* 0x0d */ "Not Used", 0x56745c2, 0x56745e2 },
    { /* 0x0e */ "Gauntlet Power (Frame 1)", 0x56745e2, 0x5674602 },
    { /* 0x0f */ "Not Used", 0x5674602, 0x5674622 },
    { /* 0x10 */ "Not Used", 0x5674622, 0x5674642 },
    { /* 0x11 */ "Gauntlet Power (Frame 2)", 0x5674642, 0x5674662 },
    { /* 0x12 */ "Gauntlet Reality (Wall) // Gauntlet Space (Rocks) // HK Throw (Rocks)", 0x5674662, 0x5674682 },
    { /* 0x13 */ "Not Used", 0x5674682, 0x56746a2 },
    { /* 0x14 */ "s.FP", 0x56746a2, 0x56746c2 },
    { /* 0x15 */ "Gauntlet Soul (Drain Effect Frame 1) // HP Throw Frame 1", 0x56746c2, 0x56746e2 },
    { /* 0x16 */ "Gauntlet Soul (Drain Effect Frame 2) // HP Throw Frame 2", 0x56746e2, 0x5674702 },
    { /* 0x17 */ "Diving Shoulder (d+HK)", 0x5674702, 0x5674722 },
    { /* 0x18 */ "j.FP", 0x5674722, 0x5674742 },
    { /* 0x19 */ "Gauntlet Time (Thanos) - Not Used", 0x5674742, 0x5674762 },
    { /* 0x1a */ "Gauntlet Reality (Thanos)", 0x5674762, 0x5674782 },
    { /* 0x1b */ "Gauntlet Soul (Thanos)", 0x5674782, 0x56747a2 },
    { /* 0x1c */ "Gauntlet Mind (Thanos) - Not Used", 0x56747a2, 0x56747c2 },
    { /* 0x1d */ "Gauntlet Power (Thanos)", 0x56747c2, 0x56747e2 },
    { /* 0x1e */ "Gauntlet Space (Thanos)", 0x56747e2, 0x5674802 },
    { /* 0x1f */ "Death Sphere (Thanos' hand)", 0x5674802, 0x5674822 },
};

const sDescTreeNode MVC2_A_THANOS_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_LP, ARRAYSIZE(MVC2_A_THANOS_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_LK, ARRAYSIZE(MVC2_A_THANOS_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_HP, ARRAYSIZE(MVC2_A_THANOS_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_HK, ARRAYSIZE(MVC2_A_THANOS_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_A1, ARRAYSIZE(MVC2_A_THANOS_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_A2, ARRAYSIZE(MVC2_A_THANOS_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_THANOS_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_THANOS_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_LP[] =
{
    { "Main Color LP", 0x5758482, 0x57584a2, indexCPS2_Jin, 0 },
    { "(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57584a2, 0x57584c2, indexCPS2_Jin, 1 },
    { "(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57584c2, 0x57584e2, indexCPS2_Jin, 2 },
    { "(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57584e2, 0x5758502, indexCPS2_Jin, 3 },
    { "(05) Not Used", 0x5758502, 0x5758522, indexCPS2_Jin, 4 },
    { "(06) Not Used", 0x5758522, 0x5758542, indexCPS2_Jin, 5 },
    { "(07) Not Used", 0x5758542, 0x5758562, indexCPS2_Jin, 6 },
    { "(08) Not Used", 0x5758562, 0x5758582, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_LK[] =
{
    { "Main Color LK", 0x5758582, 0x57585a2, indexCPS2_Jin, 0 },
    { "(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57585a2, 0x57585c2, indexCPS2_Jin, 1 },
    { "(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57585c2, 0x57585e2, indexCPS2_Jin, 2 },
    { "(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57585e2, 0x5758602, indexCPS2_Jin, 3 },
    { "(05) Not Used", 0x5758602, 0x5758622, indexCPS2_Jin, 4 },
    { "(06) Not Used", 0x5758622, 0x5758642, indexCPS2_Jin, 5 },
    { "(07) Not Used", 0x5758642, 0x5758662, indexCPS2_Jin, 6 },
    { "(08) Not Used", 0x5758662, 0x5758682, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_HP[] =
{
    { "Main Color HP", 0x5758682, 0x57586a2, indexCPS2_Jin, 0 },
    { "(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57586a2, 0x57586c2, indexCPS2_Jin, 1 },
    { "(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57586c2, 0x57586e2, indexCPS2_Jin, 2 },
    { "(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57586e2, 0x5758702, indexCPS2_Jin, 3 },
    { "(05) Not Used", 0x5758702, 0x5758722, indexCPS2_Jin, 4 },
    { "(06) Not Used", 0x5758722, 0x5758742, indexCPS2_Jin, 5 },
    { "(07) Not Used", 0x5758742, 0x5758762, indexCPS2_Jin, 6 },
    { "(08) Not Used", 0x5758762, 0x5758782, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_HK[] =
{
    { "Main Color HK", 0x5758782, 0x57587a2, indexCPS2_Jin, 0 },
    { "(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57587a2, 0x57587c2, indexCPS2_Jin, 1 },
    { "(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57587c2, 0x57587e2, indexCPS2_Jin, 2 },
    { "(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57587e2, 0x5758802, indexCPS2_Jin, 3 },
    { "(05) Not Used", 0x5758802, 0x5758822, indexCPS2_Jin, 4 },
    { "(06) Not Used", 0x5758822, 0x5758842, indexCPS2_Jin, 5 },
    { "(07) Not Used", 0x5758842, 0x5758862, indexCPS2_Jin, 6 },
    { "(08) Not Used", 0x5758862, 0x5758882, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_A1[] =
{
    { "Main Color A1", 0x5758882, 0x57588a2, indexCPS2_Jin, 0 },
    { "(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57588a2, 0x57588c2, indexCPS2_Jin, 1 },
    { "(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57588c2, 0x57588e2, indexCPS2_Jin, 2 },
    { "(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57588e2, 0x5758902, indexCPS2_Jin, 3 },
    { "(05) Not Used", 0x5758902, 0x5758922, indexCPS2_Jin, 4 },
    { "(06) Not Used", 0x5758922, 0x5758942, indexCPS2_Jin, 5 },
    { "(07) Not Used", 0x5758942, 0x5758962, indexCPS2_Jin, 6 },
    { "(08) Not Used", 0x5758962, 0x5758982, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_A2[] =
{
    { "Main Color A2", 0x5758982, 0x57589a2, indexCPS2_Jin, 0 },
    { "(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57589a2, 0x57589c2, indexCPS2_Jin, 1 },
    { "(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57589c2, 0x57589e2, indexCPS2_Jin, 2 },
    { "(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57589e2, 0x5758a02, indexCPS2_Jin, 3 },
    { "(05) Not Used", 0x5758a02, 0x5758a22, indexCPS2_Jin, 4 },
    { "(06) Not Used", 0x5758a22, 0x5758a42, indexCPS2_Jin, 5 },
    { "(07) Not Used", 0x5758a42, 0x5758a62, indexCPS2_Jin, 6 },
    { "(08) Not Used", 0x5758a62, 0x5758a82, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x5758a82, 0x5758aa2, indexCPS2_Jin, 0 },
    { "Burning Light", 0x5758aa2, 0x5758ac2, indexCPS2_Jin, 0 },
    { "Shocked Dark", 0x5758ac2, 0x5758ae2, indexCPS2_Jin, 0 },
    { "Shocked Light", 0x5758ae2, 0x5758b02, indexCPS2_Jin, 0 },
    { "Dark Burning Dark", 0x5758b02, 0x5758b22, indexCPS2_Jin, 0 },
    { "Dark Burning Light", 0x5758b22, 0x5758b42, indexCPS2_Jin, 0 },
    { "Kinetic Charge Dark", 0x5758b42, 0x5758b62, indexCPS2_Jin, 0 },
    { "Kinetic Charge Light", 0x5758b62, 0x5758b82, indexCPS2_Jin, 0 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP Special Armor 1", 0x5758b82, 0x5758ba2, indexCPS2_Jin, 0 },
    { /* 0x0a */ "LP Special Armor 2", 0x5758ba2, 0x5758bc2, indexCPS2_Jin, 0 },
    { /* 0x0b */ "LP Special Armor 3", 0x5758bc2, 0x5758be2, indexCPS2_Jin, 0 },
    { /* 0x0c */ "LP Special Armor 4", 0x5758be2, 0x5758c02, indexCPS2_Jin, 0 },
    { /* 0x0d */ "LP Special Armor 5", 0x5758c02, 0x5758c22, indexCPS2_Jin, 0 },
    { /* 0x0e */ "LP Special Armor 6", 0x5758c22, 0x5758c42, indexCPS2_Jin, 0 },
    { /* 0x0f */ "LK Special Armor 1", 0x5758c42, 0x5758c62, indexCPS2_Jin, 0 },
    { /* 0x10 */ "LK Special Armor 2", 0x5758c62, 0x5758c82, indexCPS2_Jin, 0 },
    { /* 0x11 */ "LK Special Armor 3", 0x5758c82, 0x5758ca2, indexCPS2_Jin, 0 },
    { /* 0x12 */ "LK Special Armor 4", 0x5758ca2, 0x5758cc2, indexCPS2_Jin, 0 },
    { /* 0x13 */ "LK Special Armor 5", 0x5758cc2, 0x5758ce2, indexCPS2_Jin, 0 },
    { /* 0x14 */ "LK Special Armor 6", 0x5758ce2, 0x5758d02, indexCPS2_Jin, 0 },
    { /* 0x15 */ "HP Special Armor 1", 0x5758d02, 0x5758d22, indexCPS2_Jin, 0 },
    { /* 0x16 */ "HP Special Armor 2", 0x5758d22, 0x5758d42, indexCPS2_Jin, 0 },
    { /* 0x17 */ "HP Special Armor 3", 0x5758d42, 0x5758d62, indexCPS2_Jin, 0 },
    { /* 0x18 */ "HP Special Armor 4", 0x5758d62, 0x5758d82, indexCPS2_Jin, 0 },
    { /* 0x19 */ "HP Special Armor 5", 0x5758d82, 0x5758da2, indexCPS2_Jin, 0 },
    { /* 0x1a */ "HP Special Armor 6", 0x5758da2, 0x5758dc2, indexCPS2_Jin, 0 },
    { /* 0x1b */ "HK Special Armor 1", 0x5758dc2, 0x5758de2, indexCPS2_Jin, 0 },
    { /* 0x1c */ "HK Special Armor 2", 0x5758de2, 0x5758e02, indexCPS2_Jin, 0 },
    { /* 0x1d */ "HK Special Armor 3", 0x5758e02, 0x5758e22, indexCPS2_Jin, 0 },
    { /* 0x1e */ "HK Special Armor 4", 0x5758e22, 0x5758e42, indexCPS2_Jin, 0 },
    { /* 0x1f */ "HK Special Armor 5", 0x5758e42, 0x5758e62, indexCPS2_Jin, 0 },
    { /* 0x20 */ "HK Special Armor 6", 0x5758e62, 0x5758e82, indexCPS2_Jin, 0 },
    { /* 0x21 */ "A1 Special Armor 1", 0x5758e82, 0x5758ea2, indexCPS2_Jin, 0 },
    { /* 0x22 */ "A1 Special Armor 2", 0x5758ea2, 0x5758ec2, indexCPS2_Jin, 0 },
    { /* 0x23 */ "A1 Special Armor 3", 0x5758ec2, 0x5758ee2, indexCPS2_Jin, 0 },
    { /* 0x24 */ "A1 Special Armor 4", 0x5758ee2, 0x5758f02, indexCPS2_Jin, 0 },
    { /* 0x25 */ "A1 Special Armor 5", 0x5758f02, 0x5758f22, indexCPS2_Jin, 0 },
    { /* 0x26 */ "A1 Special Armor 6", 0x5758f22, 0x5758f42, indexCPS2_Jin, 0 },
    { /* 0x27 */ "A2 Special Armor 1", 0x5758f42, 0x5758f62, indexCPS2_Jin, 0 },
    { /* 0x28 */ "A2 Special Armor 2", 0x5758f62, 0x5758f82, indexCPS2_Jin, 0 },
    { /* 0x29 */ "A2 Special Armor 3", 0x5758f82, 0x5758fa2, indexCPS2_Jin, 0 },
    { /* 0x2a */ "A2 Special Armor 4", 0x5758fa2, 0x5758fc2, indexCPS2_Jin, 0 },
    { /* 0x2b */ "A2 Special Armor 5", 0x5758fc2, 0x5758fe2, indexCPS2_Jin, 0 },
    { /* 0x2c */ "A2 Special Armor 6", 0x5758fe2, 0x5759002, indexCPS2_Jin, 0 },
    { /* 0x2d */ "LP Power-up Flash 1- all white", 0x5759002, 0x5759022, indexCPS2_Jin, 11 },
    { /* 0x2e */ "LP Power-up Flash 2- +64 Luminance", 0x5759022, 0x5759042, indexCPS2_Jin, 11 },
    { /* 0x2f */ "LP Power-up Flash 3- +50 Luminance", 0x5759042, 0x5759062, indexCPS2_Jin, 11 },
    { /* 0x30 */ "LP Power-up Flash 4- +32 Luminance", 0x5759062, 0x5759082, indexCPS2_Jin, 11 },
    { /* 0x31 */ "LP Power-up Flash 5- +21 Luminance", 0x5759082, 0x57590a2, indexCPS2_Jin, 11 },
    { /* 0x32 */ "LP Power-up Flash 6- gold color when power-up flash", 0x57590a2, 0x57590c2, indexCPS2_Jin, 11 },
    { /* 0x33 */ "Unused: Extra 0x33", 0x57590c2, 0x57590e2 },
    { /* 0x34 */ "Unused: Extra 0x34", 0x57590e2, 0x5759102 },
    { /* 0x35 */ "Unused: Extra 0x35", 0x5759102, 0x5759122 },
    { /* 0x36 */ "Unused: Extra 0x36", 0x5759122, 0x5759142 },
    { /* 0x37 */ "Unused: Extra 0x37", 0x5759142, 0x5759162 },
    { /* 0x38 */ "Unused: Extra 0x38", 0x5759162, 0x5759182 },
    { /* 0x39 */ "Unused: Extra 0x39", 0x5759182, 0x57591a2 },
    { /* 0x3a */ "Unused: Extra 0x3a", 0x57591a2, 0x57591c2 },
    { /* 0x3b */ "Unused: Extra 0x3b", 0x57591c2, 0x57591e2 },
    { /* 0x3c */ "Unused: Extra 0x3c", 0x57591e2, 0x5759202 },
    { /* 0x3d */ "Unused: Extra 0x3d", 0x5759202, 0x5759222 },
    { /* 0x3e */ "Unused: Extra 0x3e", 0x5759222, 0x5759242 },
    { /* 0x3f */ "Unused: Extra 0x3f", 0x5759242, 0x5759262 },
    { /* 0x40 */ "Unused: Extra 0x40", 0x5759262, 0x5759282 },
    { /* 0x41 */ "Unused: Extra 0x41", 0x5759282, 0x57592a2 },
    { /* 0x42 */ "Unused: Extra 0x42", 0x57592a2, 0x57592c2 },
    { /* 0x43 */ "Unused: Extra 0x43", 0x57592c2, 0x57592e2 },
    { /* 0x44 */ "Unused: Extra 0x44", 0x57592e2, 0x5759302 },
    { /* 0x45 */ "Unused: Extra 0x45", 0x5759302, 0x5759322 },
    { /* 0x46 */ "Unused: Extra 0x46", 0x5759322, 0x5759342 },
    { /* 0x47 */ "Unused: Extra 0x47", 0x5759342, 0x5759362 },
    { /* 0x48 */ "Unused: Extra 0x48", 0x5759362, 0x5759382 },
    { /* 0x49 */ "Unused: Extra 0x49", 0x5759382, 0x57593a2 },
    { /* 0x4a */ "Unused: Extra 0x4a", 0x57593a2, 0x57593c2 },
    { /* 0x4b */ "Unused: Extra 0x4b", 0x57593c2, 0x57593e2 },
    { /* 0x4c */ "Unused: Extra 0x4c", 0x57593e2, 0x5759402 },
    { /* 0x4d */ "Unused: Extra 0x4d", 0x5759402, 0x5759422 },
    { /* 0x4e */ "Unused: Extra 0x4e", 0x5759422, 0x5759442 },
    { /* 0x4f */ "Unused: Extra 0x4f", 0x5759442, 0x5759462 },
    { /* 0x50 */ "Unused: Extra 0x50", 0x5759462, 0x5759482 },
    { /* 0x51 */ "LP Vulcan hands", 0x5759482, 0x57594a2, indexCPS2_Jin, 12 },
    { /* 0x52 */ "LP Vulcan lasers", 0x57594a2, 0x57594c2, indexCPS2_Jin, 13 },
    { /* 0x53 */ "LP Vulcan cockpit", 0x57594c2, 0x57594e2, indexCPS2_Jin, 14 },
    { /* 0x54 */ "Unused: Extra 0x54", 0x57594e2, 0x5759502 },
    { /* 0x55 */ "Unused: Extra 0x55", 0x5759502, 0x5759522 },
    { /* 0x56 */ "Unused: Extra 0x56", 0x5759522, 0x5759542 },
    { /* 0x57 */ "Unused: Extra 0x57", 0x5759542, 0x5759562 },
    { /* 0x58 */ "Unused: Extra 0x58", 0x5759562, 0x5759582 },
    { /* 0x59 */ "Unused: Extra 0x59", 0x5759582, 0x57595a2 },
    { /* 0x5a */ "Unused: Extra 0x5a", 0x57595a2, 0x57595c2 },
    { /* 0x5b */ "Unused: Extra 0x5b", 0x57595c2, 0x57595e2 },
    { /* 0x5c */ "Unused: Extra 0x5c", 0x57595e2, 0x5759602 },
    { /* 0x5d */ "Unused: Extra 0x5d", 0x5759602, 0x5759622 },
    { /* 0x5e */ "Unused: Extra 0x5e", 0x5759622, 0x5759642 },
    { /* 0x5f */ "Unused: Extra 0x5f", 0x5759642, 0x5759662 },
    { /* 0x60 */ "Unused: Extra 0x60", 0x5759662, 0x5759682 },
    { /* 0x61 */ "Unused: Extra 0x61", 0x5759682, 0x57596a2 },
    { /* 0x62 */ "Unused: Extra 0x62", 0x57596a2, 0x57596c2 },
    { /* 0x63 */ "LP Taunt 1", 0x57596c2, 0x57596e2, indexCPS2_Jin, 15 },
    { /* 0x64 */ "LP Taunt 2", 0x57596e2, 0x5759702, indexCPS2_Jin, 15 },
    { /* 0x65 */ "LP Taunt 3", 0x5759702, 0x5759722, indexCPS2_Jin, 15 },
    { /* 0x66 */ "LP Taunt 4", 0x5759722, 0x5759742, indexCPS2_Jin, 15 },
    { /* 0x67 */ "LP Taunt 5", 0x5759742, 0x5759762, indexCPS2_Jin, 15 },
    { /* 0x68 */ "LP Taunt 6", 0x5759762, 0x5759782, indexCPS2_Jin, 15 },
    { /* 0x69 */ "LK Taunt 1", 0x5759782, 0x57597a2, indexCPS2_Jin, 15 },
    { /* 0x6a */ "LK Taunt 2", 0x57597a2, 0x57597c2, indexCPS2_Jin, 15 },
    { /* 0x6b */ "LK Taunt 3", 0x57597c2, 0x57597e2, indexCPS2_Jin, 15 },
    { /* 0x6c */ "LK Taunt 4", 0x57597e2, 0x5759802, indexCPS2_Jin, 15 },
    { /* 0x6d */ "LK Taunt 5", 0x5759802, 0x5759822, indexCPS2_Jin, 15 },
    { /* 0x6e */ "LK Taunt 6", 0x5759822, 0x5759842, indexCPS2_Jin, 15 },
    { /* 0x6f */ "HP Taunt 1", 0x5759842, 0x5759862, indexCPS2_Jin, 15 },
    { /* 0x70 */ "HP Taunt 2", 0x5759862, 0x5759882, indexCPS2_Jin, 15 },
    { /* 0x71 */ "HP Taunt 3", 0x5759882, 0x57598a2, indexCPS2_Jin, 15 },
    { /* 0x72 */ "HP Taunt 4", 0x57598a2, 0x57598c2, indexCPS2_Jin, 15 },
    { /* 0x73 */ "HP Taunt 5", 0x57598c2, 0x57598e2, indexCPS2_Jin, 15 },
    { /* 0x74 */ "HP Taunt 6", 0x57598e2, 0x5759902, indexCPS2_Jin, 15 },
    { /* 0x75 */ "HK Taunt 1", 0x5759902, 0x5759922, indexCPS2_Jin, 15 },
    { /* 0x76 */ "HK Taunt 2", 0x5759922, 0x5759942, indexCPS2_Jin, 15 },
    { /* 0x77 */ "HK Taunt 3", 0x5759942, 0x5759962, indexCPS2_Jin, 15 },
    { /* 0x78 */ "HK Taunt 4", 0x5759962, 0x5759982, indexCPS2_Jin, 15 },
    { /* 0x79 */ "HK Taunt 5", 0x5759982, 0x57599a2, indexCPS2_Jin, 15 },
    { /* 0x7a */ "HK Taunt 6", 0x57599a2, 0x57599c2, indexCPS2_Jin, 15 },
    { /* 0x7b */ "A1 Taunt 1", 0x57599c2, 0x57599e2, indexCPS2_Jin, 15 },
    { /* 0x7c */ "A1 Taunt 2", 0x57599e2, 0x5759a02, indexCPS2_Jin, 15 },
    { /* 0x7d */ "A1 Taunt 3", 0x5759a02, 0x5759a22, indexCPS2_Jin, 15 },
    { /* 0x7e */ "A1 Taunt 4", 0x5759a22, 0x5759a42, indexCPS2_Jin, 15 },
    { /* 0x7f */ "A1 Taunt 5", 0x5759a42, 0x5759a62, indexCPS2_Jin, 15 },
    { /* 0x80 */ "A1 Taunt 6", 0x5759a62, 0x5759a82, indexCPS2_Jin, 15 },
    { /* 0x81 */ "A2 Taunt 1", 0x5759a82, 0x5759aa2, indexCPS2_Jin, 15 },
    { /* 0x82 */ "A2 Taunt 2", 0x5759aa2, 0x5759ac2, indexCPS2_Jin, 15 },
    { /* 0x83 */ "A2 Taunt 3", 0x5759ac2, 0x5759ae2, indexCPS2_Jin, 15 },
    { /* 0x84 */ "A2 Taunt 4", 0x5759ae2, 0x5759b02, indexCPS2_Jin, 15 },
    { /* 0x85 */ "A2 Taunt 5", 0x5759b02, 0x5759b22, indexCPS2_Jin, 15 },
    { /* 0x86 */ "A2 Taunt 6", 0x5759b22, 0x5759b42, indexCPS2_Jin, 15 },
};

const sDescTreeNode MVC2_A_JIN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_LP, ARRAYSIZE(MVC2_A_JIN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_LK, ARRAYSIZE(MVC2_A_JIN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_HP, ARRAYSIZE(MVC2_A_JIN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_HK, ARRAYSIZE(MVC2_A_JIN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_A1, ARRAYSIZE(MVC2_A_JIN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_A2, ARRAYSIZE(MVC2_A_JIN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_JIN_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_JIN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_LP[] =
{
    { "Main Color LP", 0x5847ec2, 0x5847ee2, indexCPS2_CapCom, 0 },
    { "(02) Commando Strike (Sho, Genity, Hoover)", 0x5847ee2, 0x5847f02, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { "(03) Commando Strike (Sho, Genity, Hoover)", 0x5847f02, 0x5847f22, indexCPS2_CapCom, 2 },
    { "(04) Captain Corridor // Captain Sword", 0x5847f22, 0x5847f42, indexCPS2_CapCom, 3 },
    { "(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5847f42, 0x5847f62, indexCPS2_CapCom, 4 },
    { "(06) Hoover's Missile Burst (HP throw)", 0x5847f62, 0x5847f82, indexCPS2_CapCom, 5 },
    { "(07) Not Used", 0x5847f82, 0x5847fa2, indexCPS2_CapCom, 6 },
    { "(08) Not Used Commando Strike", 0x5847fa2, 0x5847fc2, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_LK[] =
{
    { "Main Color LK", 0x5847fc2, 0x5847fe2, indexCPS2_CapCom, 0 },
    { "(02) Commando Strike (Sho, Genity, Hoover)", 0x5847fe2, 0x5848002, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { "(03) Commando Strike (Sho, Genity, Hoover)", 0x5848002, 0x5848022, indexCPS2_CapCom, 2 },
    { "(04) Captain Corridor // Captain Sword", 0x5848022, 0x5848042, indexCPS2_CapCom, 3 },
    { "(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848042, 0x5848062, indexCPS2_CapCom, 4 },
    { "(06) Hoover's Missile Burst (HP throw)", 0x5848062, 0x5848082, indexCPS2_CapCom, 5 },
    { "(07) Not Used", 0x5848082, 0x58480a2, indexCPS2_CapCom, 6 },
    { "(08) Not Used Commando Strike", 0x58480a2, 0x58480c2, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_HP[] =
{
    { "Main Color HP", 0x58480c2, 0x58480e2, indexCPS2_CapCom, 0 },
    { "(02) Commando Strike (Sho, Genity, Hoover)", 0x58480e2, 0x5848102, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { "(03) Commando Strike (Sho, Genity, Hoover)", 0x5848102, 0x5848122, indexCPS2_CapCom, 2 },
    { "(04) Captain Corridor // Captain Sword", 0x5848122, 0x5848142, indexCPS2_CapCom, 3 },
    { "(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848142, 0x5848162, indexCPS2_CapCom, 4 },
    { "(06) Hoover's Missile Burst (HP throw)", 0x5848162, 0x5848182, indexCPS2_CapCom, 5 },
    { "(07) Not Used", 0x5848182, 0x58481a2, indexCPS2_CapCom, 6 },
    { "(08) Not Used Commando Strike", 0x58481a2, 0x58481c2, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_HK[] =
{
    { "Main Color HK", 0x58481c2, 0x58481e2, indexCPS2_CapCom, 0 },
    { "(02) Commando Strike (Sho, Genity, Hoover)", 0x58481e2, 0x5848202, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { "(03) Commando Strike (Sho, Genity, Hoover)", 0x5848202, 0x5848222, indexCPS2_CapCom, 2 },
    { "(04) Captain Corridor // Captain Sword", 0x5848222, 0x5848242, indexCPS2_CapCom, 3 },
    { "(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848242, 0x5848262, indexCPS2_CapCom, 4 },
    { "(06) Hoover's Missile Burst (HP throw)", 0x5848262, 0x5848282, indexCPS2_CapCom, 5 },
    { "(07) Not Used", 0x5848282, 0x58482a2, indexCPS2_CapCom, 6 },
    { "(08) Not Used Commando Strike", 0x58482a2, 0x58482c2, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_A1[] =
{
    { "Main Color A1", 0x58482c2, 0x58482e2, indexCPS2_CapCom, 0 },
    { "(02) Commando Strike (Sho, Genity, Hoover)", 0x58482e2, 0x5848302, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { "(03) Commando Strike (Sho, Genity, Hoover)", 0x5848302, 0x5848322, indexCPS2_CapCom, 2 },
    { "(04) Captain Corridor // Captain Sword", 0x5848322, 0x5848342, indexCPS2_CapCom, 3 },
    { "(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848342, 0x5848362, indexCPS2_CapCom, 4 },
    { "(06) Hoover's Missile Burst (HP throw)", 0x5848362, 0x5848382, indexCPS2_CapCom, 5 },
    { "(07) Not Used", 0x5848382, 0x58483a2, indexCPS2_CapCom, 6 },
    { "(08) Not Used Commando Strike", 0x58483a2, 0x58483c2, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_A2[] =
{
    { "Main Color A2", 0x58483c2, 0x58483e2, indexCPS2_CapCom, 0 },
    { "(02) Commando Strike (Sho, Genity, Hoover)", 0x58483e2, 0x5848402, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { "(03) Commando Strike (Sho, Genity, Hoover)", 0x5848402, 0x5848422, indexCPS2_CapCom, 2 },
    { "(04) Captain Corridor // Captain Sword", 0x5848422, 0x5848442, indexCPS2_CapCom, 3 },
    { "(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848442, 0x5848462, indexCPS2_CapCom, 4 },
    { "(06) Hoover's Missile Burst (HP throw)", 0x5848462, 0x5848482, indexCPS2_CapCom, 5 },
    { "(07) Not Used", 0x5848482, 0x58484a2, indexCPS2_CapCom, 6 },
    { "(08) Not Used Commando Strike", 0x58484a2, 0x58484c2, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x58484c2, 0x58484e2, indexCPS2_CapCom, 0 },
    { "Burning Light", 0x58484e2, 0x5848502, indexCPS2_CapCom, 0 },
    { "Shocked Dark", 0x5848502, 0x5848522, indexCPS2_CapCom, 0 },
    { "Shocked Light", 0x5848522, 0x5848542, indexCPS2_CapCom, 0 },
    { "Dark Burning Dark", 0x5848542, 0x5848562, indexCPS2_CapCom, 0 },
    { "Dark Burning Light", 0x5848562, 0x5848582, indexCPS2_CapCom, 0 },
    { "Kinetic Charge Dark", 0x5848582, 0x58485a2, indexCPS2_CapCom, 0 },
    { "Kinetic Charge Light", 0x58485a2, 0x58485c2, indexCPS2_CapCom, 0 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "Laser Intro 1", 0x58485c2, 0x58485e2, indexCPS2_CapCom, 11 },
    { /* 0x0a */ "Laser Intro 2", 0x58485e2, 0x5848602, indexCPS2_CapCom, 11 },
    { /* 0x0b */ "Laser Intro 3", 0x5848602, 0x5848622, indexCPS2_CapCom, 11 },
    { /* 0x0c */ "Laser Intro 4", 0x5848622, 0x5848642, indexCPS2_CapCom, 11 },
    { /* 0x0d */ "HK Grab", 0x5848642, 0x5848662, indexCPS2_CapCom, 12 },
    { /* 0x0e */ "Intro LP", 0x5848662, 0x5848682, indexCPS2_CapCom, 15 },
    { /* 0x0f */ "Taunt LP", 0x5848682, 0x58486a2, indexCPS2_CapCom, 14 },
    { /* 0x10 */ "Intro LK", 0x58486a2, 0x58486c2, indexCPS2_CapCom, 15 },
    { /* 0x11 */ "Taunt LK", 0x58486c2, 0x58486e2, indexCPS2_CapCom, 14 },
    { /* 0x12 */ "Intro HP", 0x58486e2, 0x5848702, indexCPS2_CapCom, 15 },
    { /* 0x13 */ "Taunt HP", 0x5848702, 0x5848722, indexCPS2_CapCom, 14 },
    { /* 0x14 */ "Intro HK", 0x5848722, 0x5848742, indexCPS2_CapCom, 15 },
    { /* 0x15 */ "Taunt HK", 0x5848742, 0x5848762, indexCPS2_CapCom, 14 },
    { /* 0x16 */ "Intro A1", 0x5848762, 0x5848782, indexCPS2_CapCom, 15 },
    { /* 0x17 */ "Taunt A1", 0x5848782, 0x58487a2, indexCPS2_CapCom, 14 },
    { /* 0x18 */ "Intro A2", 0x58487a2, 0x58487c2, indexCPS2_CapCom, 15 },
    { /* 0x19 */ "Taunt A2", 0x58487c2, 0x58487e2, indexCPS2_CapCom, 14 },
};

const sDescTreeNode MVC2_A_CAPTAINCOMMANDO_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_LP, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_LK, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_HP, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_HK, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_A1, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_A2, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_LP[] =
{
    { "Main Color LP", 0x59472a2, 0x59472c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "(02) Claws", 0x59472c2, 0x59472e2, indexCPS2_Bonerine, 1 },
    { "(03) Berserker Barrage", 0x59472e2, 0x5947302, indexCPS2_Bonerine, 2 },
    { "(04) Not Used", 0x5947302, 0x5947322, indexCPS2_Bonerine, 3 },
    { "(05) Not Used", 0x5947322, 0x5947342, indexCPS2_Bonerine, 4 },
    { "(06) Not Used", 0x5947342, 0x5947362, indexCPS2_Bonerine, 5 },
    { "(07) Not Used", 0x5947362, 0x5947382, indexCPS2_Bonerine, 6 },
    { "(08) Not Used", 0x5947382, 0x59473a2, indexCPS2_Bonerine, 7 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_LK[] =
{
    { "Main Color LK", 0x59473a2, 0x59473c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "(02) Claws", 0x59473c2, 0x59473e2, indexCPS2_Bonerine, 1 },
    { "(03) Berserker Barrage", 0x59473e2, 0x5947402, indexCPS2_Bonerine, 2 },
    { "(04) Not Used", 0x5947402, 0x5947422, indexCPS2_Bonerine, 3 },
    { "(05) Not Used", 0x5947422, 0x5947442, indexCPS2_Bonerine, 4 },
    { "(06) Not Used", 0x5947442, 0x5947462, indexCPS2_Bonerine, 5 },
    { "(07) Not Used", 0x5947462, 0x5947482, indexCPS2_Bonerine, 6 },
    { "(08) Not Used", 0x5947482, 0x59474a2, indexCPS2_Bonerine, 7 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_HP[] =
{
    { "Main Color HP", 0x59474a2, 0x59474c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "(02) Claws", 0x59474c2, 0x59474e2, indexCPS2_Bonerine, 1 },
    { "(03) Berserker Barrage", 0x59474e2, 0x5947502, indexCPS2_Bonerine, 2 },
    { "(04) Not Used", 0x5947502, 0x5947522, indexCPS2_Bonerine, 3 },
    { "(05) Not Used", 0x5947522, 0x5947542, indexCPS2_Bonerine, 4 },
    { "(06) Not Used", 0x5947542, 0x5947562, indexCPS2_Bonerine, 5 },
    { "(07) Not Used", 0x5947562, 0x5947582, indexCPS2_Bonerine, 6 },
    { "(08) Not Used", 0x5947582, 0x59475a2, indexCPS2_Bonerine, 7 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_HK[] =
{
    { "Main Color HK", 0x59475a2, 0x59475c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "(02) Claws", 0x59475c2, 0x59475e2, indexCPS2_Bonerine, 1 },
    { "(03) Berserker Barrage", 0x59475e2, 0x5947602, indexCPS2_Bonerine, 2 },
    { "(04) Not Used", 0x5947602, 0x5947622, indexCPS2_Bonerine, 3 },
    { "(05) Not Used", 0x5947622, 0x5947642, indexCPS2_Bonerine, 4 },
    { "(06) Not Used", 0x5947642, 0x5947662, indexCPS2_Bonerine, 5 },
    { "(07) Not Used", 0x5947662, 0x5947682, indexCPS2_Bonerine, 6 },
    { "(08) Not Used", 0x5947682, 0x59476a2, indexCPS2_Bonerine, 7 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_A1[] =
{
    { "Main Color A1", 0x59476a2, 0x59476c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "(02) Claws", 0x59476c2, 0x59476e2, indexCPS2_Bonerine, 1 },
    { "(03) Berserker Barrage", 0x59476e2, 0x5947702, indexCPS2_Bonerine, 2 },
    { "(04) Not Used", 0x5947702, 0x5947722, indexCPS2_Bonerine, 3 },
    { "(05) Not Used", 0x5947722, 0x5947742, indexCPS2_Bonerine, 4 },
    { "(06) Not Used", 0x5947742, 0x5947762, indexCPS2_Bonerine, 5 },
    { "(07) Not Used", 0x5947762, 0x5947782, indexCPS2_Bonerine, 6 },
    { "(08) Not Used", 0x5947782, 0x59477a2, indexCPS2_Bonerine, 7 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_A2[] =
{
    { "Main Color A2", 0x59477a2, 0x59477c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "(02) Claws", 0x59477c2, 0x59477e2, indexCPS2_Bonerine, 1 },
    { "(03) Berserker Barrage", 0x59477e2, 0x5947802, indexCPS2_Bonerine, 2 },
    { "(04) Not Used", 0x5947802, 0x5947822, indexCPS2_Bonerine, 3 },
    { "(05) Not Used", 0x5947822, 0x5947842, indexCPS2_Bonerine, 4 },
    { "(06) Not Used", 0x5947842, 0x5947862, indexCPS2_Bonerine, 5 },
    { "(07) Not Used", 0x5947862, 0x5947882, indexCPS2_Bonerine, 6 },
    { "(08) Not Used", 0x5947882, 0x59478a2, indexCPS2_Bonerine, 7 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x59478a2, 0x59478c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Burning Dark 2", 0x59478c2, 0x59478e2, indexCPS2_Bonerine, 1 },
    { "Burning Light", 0x59478e2, 0x5947902, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Burning Light 2", 0x5947902, 0x5947922, indexCPS2_Bonerine, 1 },
    { "Shocked Dark", 0x5947922, 0x5947942, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Shocked Dark 2", 0x5947942, 0x5947962, indexCPS2_Bonerine, 1 },
    { "Shocked Light", 0x5947962, 0x5947982, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Shocked Light 2", 0x5947982, 0x59479a2, indexCPS2_Bonerine, 1 },
    { "Dark Burning Dark", 0x59479a2, 0x59479c2, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Dark Burning Dark 2", 0x59479c2, 0x59479e2, indexCPS2_Bonerine, 1 },
    { "Dark Burning Light", 0x59479e2, 0x5947a02, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Dark Burning Light 2", 0x5947a02, 0x5947a22, indexCPS2_Bonerine, 1 },
    { "Kinetic Charge Dark", 0x5947a22, 0x5947a42, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Kinetic Charge Dark 2", 0x5947a42, 0x5947a62, indexCPS2_Bonerine, 1 },
    { "Kinetic Charge Light", 0x5947a62, 0x5947a82, indexCPS2_Bonerine, 0, &pairWolvieClaws },
    { "Kinetic Charge Light 2", 0x5947a82, 0x5947aa2, indexCPS2_Bonerine, 1 },
};

const sDescTreeNode MVC2_A_BONERINE_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_LP, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_LK, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_HP, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_HK, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_A1, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_A2, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_LP[] =
{
    { "Main Color LP", 0x59acdc2, 0x59acde2, indexCPS2_Kobun, 0 },
    { "(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59acde2, 0x59ace02, indexCPS2_Tron, 1 },
    { "(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ace02, 0x59ace22, indexCPS2_Tron, 12 },
    { "(04) Kobun Fire (Flame)", 0x59ace22, 0x59ace42, indexCPS2_Kobun, 3 },
    { "(05) Bull Mover", 0x59ace42, 0x59ace62, indexCPS2_Kobun, 4 },
    { "(06) j.MP (food coming out of the pot) / j,LK", 0x59ace62, 0x59ace82, indexCPS2_Kobun, 5 },
    { "(07) Kobun Assist", 0x59ace82, 0x59acea2, indexCPS2_Kobun, 0 },
    { "(08) Not Used", 0x59acea2, 0x59acec2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_LK[] =
{
    { "Main Color LK", 0x59acec2, 0x59acee2, indexCPS2_Kobun, 0 },
    { "(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59acee2, 0x59acf02, indexCPS2_Tron, 1 },
    { "(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59acf02, 0x59acf22, indexCPS2_Tron, 12 },
    { "(04) Kobun Fire (Flame)", 0x59acf22, 0x59acf42, indexCPS2_Kobun, 3 },
    { "(05) Bull Mover", 0x59acf42, 0x59acf62, indexCPS2_Kobun, 4 },
    { "(06) j.MP (food coming out of the pot) / j,LK", 0x59acf62, 0x59acf82, indexCPS2_Kobun, 5 },
    { "(07) Kobun Assist", 0x59acf82, 0x59acfa2, indexCPS2_Kobun, 0 },
    { "(08) Not Used", 0x59acfa2, 0x59acfc2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_HP[] =
{
    { "Main Color HP", 0x59acfc2, 0x59acfe2, indexCPS2_Kobun, 0 },
    { "(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59acfe2, 0x59ad002, indexCPS2_Tron, 1 },
    { "(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad002, 0x59ad022, indexCPS2_Tron, 12 },
    { "(04) Kobun Fire (Flame)", 0x59ad022, 0x59ad042, indexCPS2_Kobun, 3 },
    { "(05) Bull Mover", 0x59ad042, 0x59ad062, indexCPS2_Kobun, 4 },
    { "(06) j.MP (food coming out of the pot) / j,LK", 0x59ad062, 0x59ad082, indexCPS2_Kobun, 5 },
    { "(07) Kobun Assist", 0x59ad082, 0x59ad0a2, indexCPS2_Kobun, 0 },
    { "(08) Not Used", 0x59ad0a2, 0x59ad0c2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_HK[] =
{
    { "Main Color HK", 0x59ad0c2, 0x59ad0e2, indexCPS2_Kobun, 0 },
    { "(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59ad0e2, 0x59ad102, indexCPS2_Tron, 1 },
    { "(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad102, 0x59ad122, indexCPS2_Tron, 12 },
    { "(04) Kobun Fire (Flame)", 0x59ad122, 0x59ad142, indexCPS2_Kobun, 3 },
    { "(05) Bull Mover", 0x59ad142, 0x59ad162, indexCPS2_Kobun, 4 },
    { "(06) j.MP (food coming out of the pot) / j,LK", 0x59ad162, 0x59ad182, indexCPS2_Kobun, 5 },
    { "(07) Kobun Assist", 0x59ad182, 0x59ad1a2, indexCPS2_Kobun, 0 },
    { "(08) Not Used", 0x59ad1a2, 0x59ad1c2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_A1[] =
{
    { "Main Color A1", 0x59ad1c2, 0x59ad1e2, indexCPS2_Kobun, 0 },
    { "(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59ad1e2, 0x59ad202, indexCPS2_Tron, 1 },
    { "(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad202, 0x59ad222, indexCPS2_Tron, 12 },
    { "(04) Kobun Fire (Flame)", 0x59ad222, 0x59ad242, indexCPS2_Kobun, 3 },
    { "(05) Bull Mover", 0x59ad242, 0x59ad262, indexCPS2_Kobun, 4 },
    { "(06) j.MP (food coming out of the pot) / j,LK", 0x59ad262, 0x59ad282, indexCPS2_Kobun, 5 },
    { "(07) Kobun Assist", 0x59ad282, 0x59ad2a2, indexCPS2_Kobun, 0 },
    { "(08) Not Used", 0x59ad2a2, 0x59ad2c2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_A2[] =
{
    { "Main Color A2", 0x59ad2c2, 0x59ad2e2, indexCPS2_Kobun, 0 },
    { "(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59ad2e2, 0x59ad302, indexCPS2_Tron, 1 },
    { "(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad302, 0x59ad322, indexCPS2_Tron, 12 },
    { "(04) Kobun Fire (Flame)", 0x59ad322, 0x59ad342, indexCPS2_Kobun, 3 },
    { "(05) Bull Mover", 0x59ad342, 0x59ad362, indexCPS2_Kobun, 4 },
    { "(06) j.MP (food coming out of the pot) / j,LK", 0x59ad362, 0x59ad382, indexCPS2_Kobun, 5 },
    { "(07) Kobun Assist", 0x59ad382, 0x59ad3a2, indexCPS2_Kobun, 0 },
    { "(08) Not Used", 0x59ad3a2, 0x59ad3c2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_SHARED[] =
{
    { "Burning Dark", 0x59ad3c2, 0x59ad3e2, indexCPS2_Kobun, 0 },
    { "Burning Light", 0x59ad3e2, 0x59ad402, indexCPS2_Kobun, 0 },
    { "Shocked Dark", 0x59ad402, 0x59ad422, indexCPS2_Kobun, 0 },
    { "Shocked Light", 0x59ad422, 0x59ad442, indexCPS2_Kobun, 0 },
    { "Dark Burning Dark", 0x59ad442, 0x59ad462, indexCPS2_Kobun, 0 },
    { "Dark Burning Light", 0x59ad462, 0x59ad482, indexCPS2_Kobun, 0 },
    { "Kinetic Charge Dark", 0x59ad482, 0x59ad4a2, indexCPS2_Kobun, 0 },
    { "Kinetic Charge Light", 0x59ad4a2, 0x59ad4c2, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_EXTRAS[] =
{
    { /* 0x09 */ "LP - King Kobun Frame 1 LP Color", 0x59ad4c2, 0x59ad4e2 },
    { /* 0x0a */ "LP - King Kobun Frame 2 LP Color & then add Lumin+23", 0x59ad4e2, 0x59ad502 },
    { /* 0x0b */ "LP - King Kobun Frame 3 LP Color & then add Lumin+32", 0x59ad502, 0x59ad522 },
    { /* 0x0c */ "LP - King Kobun Frame 4 LP Color & then add Lumin+40", 0x59ad522, 0x59ad542 },
    { /* 0x0d */ "LP - King Kobun Frame 5 Full white", 0x59ad542, 0x59ad562 },
    { /* 0x0e */ "LK - King Kobun Frame 1 LK Color", 0x59ad562, 0x59ad582 },
    { /* 0x0f */ "LK - King Kobun Frame 2 LK Color & then add Lumin+23", 0x59ad582, 0x59ad5a2 },
    { /* 0x10 */ "LK - King Kobun Frame 3 LK Color & then add Lumin+32", 0x59ad5a2, 0x59ad5c2 },
    { /* 0x11 */ "LK - King Kobun Frame 4 LK Color & then add Lumin+40", 0x59ad5c2, 0x59ad5e2 },
    { /* 0x12 */ "LK - King Kobun Frame 5 Full white", 0x59ad5e2, 0x59ad602 },
    { /* 0x13 */ "HP - King Kobun Frame 1 HP Color", 0x59ad602, 0x59ad622 },
    { /* 0x14 */ "HP - King Kobun Frame 2 HP Color & then add Lumin+23", 0x59ad622, 0x59ad642 },
    { /* 0x15 */ "HP - King Kobun Frame 3 HP Color & then add Lumin+32", 0x59ad642, 0x59ad662 },
    { /* 0x16 */ "HP - King Kobun Frame 4 HP Color & then add Lumin+40", 0x59ad662, 0x59ad682 },
    { /* 0x17 */ "HP - King Kobun Frame 5 Full white", 0x59ad682, 0x59ad6a2 },
    { /* 0x18 */ "HK - King Kobun Frame 1 HK Color", 0x59ad6a2, 0x59ad6c2 },
    { /* 0x19 */ "HK - King Kobun Frame 2 HK Color & then add Lumin+23", 0x59ad6c2, 0x59ad6e2 },
    { /* 0x1a */ "HK - King Kobun Frame 3 HK Color & then add Lumin+32", 0x59ad6e2, 0x59ad702 },
    { /* 0x1b */ "HK - King Kobun Frame 4 HK Color & then add Lumin+40", 0x59ad702, 0x59ad722 },
    { /* 0x1c */ "HK - King Kobun Frame 5 Full white", 0x59ad722, 0x59ad742 },
    { /* 0x1d */ "A1 - King Kobun Frame 1 A1 Color", 0x59ad742, 0x59ad762 },
    { /* 0x1e */ "A1 - King Kobun Frame 2 A1 Color & then add Lumin+23", 0x59ad762, 0x59ad782 },
    { /* 0x1f */ "A1 - King Kobun Frame 3 A1 Color & then add Lumin+32", 0x59ad782, 0x59ad7a2 },
    { /* 0x20 */ "A1 - King Kobun Frame 4 A1 Color & then add Lumin+40", 0x59ad7a2, 0x59ad7c2 },
    { /* 0x21 */ "A1 - King Kobun Frame 5 Full white", 0x59ad7c2, 0x59ad7e2 },
    { /* 0x22 */ "A2 - King Kobun Frame 1 A2 Color", 0x59ad7e2, 0x59ad802 },
    { /* 0x23 */ "A2 - King Kobun Frame 2 A2 Color & then add Lumin+23", 0x59ad802, 0x59ad822 },
    { /* 0x24 */ "A2 - King Kobun Frame 3 A2 Color & then add Lumin+32", 0x59ad822, 0x59ad842 },
    { /* 0x25 */ "A2 - King Kobun Frame 4 A2 Color & then add Lumin+40", 0x59ad842, 0x59ad862 },
    { /* 0x26 */ "A2 - King Kobun Frame 5 Full white", 0x59ad862, 0x59ad882 },
};

const sDescTreeNode MVC2_A_KOBUN_COLLECTION[] =
{
    { "LP", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_LP, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_LP) },
    { "LK", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_LK, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_LK) },
    { "HP", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_HP, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_HP) },
    { "HK", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_HK, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_HK) },
    { "A1", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_A1, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_A1) },
    { "A2", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_A2, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_A2) },
    { "Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_SHARED) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_EXTRAS) },
};

const sDescTreeNode MVC2_A_UNITS[MVC2_A_NUMUNIT] =
{
    { "Ryu",                DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_COLLECTION,       ARRAYSIZE(MVC2_A_RYU_COLLECTION) },
    { "Zangief",            DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(MVC2_A_ZANGIEF_COLLECTION) },
    { "Guile",              DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_COLLECTION,       ARRAYSIZE(MVC2_A_GUILE_COLLECTION) },
    { "Morrigan",           DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_COLLECTION,       ARRAYSIZE(MVC2_A_MORRIGAN_COLLECTION) },
    { "Anakaris",           DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_COLLECTION,       ARRAYSIZE(MVC2_A_ANAKARIS_COLLECTION) },
    { "Strider Hiryu",      DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_COLLECTION,       ARRAYSIZE(MVC2_A_STRIDER_COLLECTION) },
    { "Cyclops",            DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_COLLECTION,       ARRAYSIZE(MVC2_A_CYCLOPS_COLLECTION) },
    { "Wolverine",          DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_COLLECTION,       ARRAYSIZE(MVC2_A_WOLVERINE_COLLECTION) },
    { "Psylocke",           DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_COLLECTION,       ARRAYSIZE(MVC2_A_PSYLOCKE_COLLECTION) },
    { "Iceman",             DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_COLLECTION,       ARRAYSIZE(MVC2_A_ICEMAN_COLLECTION) },
    { "Rogue",              DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_COLLECTION,       ARRAYSIZE(MVC2_A_ROGUE_COLLECTION) },
    { "Captain America",    DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_COLLECTION,       ARRAYSIZE(MVC2_A_CAPTAINAMERICA_COLLECTION) },
    { "Spider-Man",         DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_COLLECTION,       ARRAYSIZE(MVC2_A_SPIDERMAN_COLLECTION) },
    { "Hulk",               DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_COLLECTION,       ARRAYSIZE(MVC2_A_HULK_COLLECTION) },
    { "Venom",              DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_COLLECTION,       ARRAYSIZE(MVC2_A_VENOM_COLLECTION) },
    { "Dr. Doom",           DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_COLLECTION,       ARRAYSIZE(MVC2_A_DRDOOM_COLLECTION) },
    { "Tron Bonne",         DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_COLLECTION,       ARRAYSIZE(MVC2_A_TRON_COLLECTION) },
    { "Jill Valentine",     DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_COLLECTION,       ARRAYSIZE(MVC2_A_JILL_COLLECTION) },
    { "Hayato",             DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_COLLECTION,       ARRAYSIZE(MVC2_A_HAYATO_COLLECTION) },
    { "Ruby Heart",         DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_COLLECTION,       ARRAYSIZE(MVC2_A_RUBY_COLLECTION) },
    { "SonSon",             DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_COLLECTION,       ARRAYSIZE(MVC2_A_SONSON_COLLECTION) },
    { "Amingo",             DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_COLLECTION,       ARRAYSIZE(MVC2_A_AMINGO_COLLECTION) },
    { "Marrow",             DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_COLLECTION,       ARRAYSIZE(MVC2_A_MARROW_COLLECTION) },
    { "Cable",              DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_COLLECTION,       ARRAYSIZE(MVC2_A_CABLE_COLLECTION) },
    { "Abyss (Form 1)",     DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_COLLECTION,       ARRAYSIZE(MVC2_A_ABYSS1_COLLECTION) },
    { "Abyss (Form 2)",     DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_COLLECTION,       ARRAYSIZE(MVC2_A_ABYSS2_COLLECTION) },
    { "Abyss (Form 3)",     DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_COLLECTION,       ARRAYSIZE(MVC2_A_ABYSS3_COLLECTION) },
    { "Chun-Li",            DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_COLLECTION,       ARRAYSIZE(MVC2_A_CHUNLI_COLLECTION) },
    { "Megaman",            DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_COLLECTION,       ARRAYSIZE(MVC2_A_MEGAMAN_COLLECTION) },
    { "Roll",               DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_COLLECTION,       ARRAYSIZE(MVC2_A_ROLL_COLLECTION) },
    { "Akuma",              DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_COLLECTION,       ARRAYSIZE(MVC2_A_GOUKI_COLLECTION) },
    { "B.B. Hood",          DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_COLLECTION,       ARRAYSIZE(MVC2_A_BBHOOD_COLLECTION) },
    { "Felicia",            DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_COLLECTION,       ARRAYSIZE(MVC2_A_FELICIA_COLLECTION) },
    { "Charlie",            DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_COLLECTION,       ARRAYSIZE(MVC2_A_CHARLIE_COLLECTION) },
    { "Sakura",             DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_COLLECTION,       ARRAYSIZE(MVC2_A_SAKURA_COLLECTION) },
    { "Dan",                DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_COLLECTION,       ARRAYSIZE(MVC2_A_DAN_COLLECTION) },
    { "Cammy",              DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_COLLECTION,       ARRAYSIZE(MVC2_A_CAMMY_COLLECTION) },
    { "Dhalsim",            DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_COLLECTION,       ARRAYSIZE(MVC2_A_DHALSIM_COLLECTION) },
    { "M. Bison",           DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_COLLECTION,       ARRAYSIZE(MVC2_A_MBISON_COLLECTION) },
    { "Ken",                DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_COLLECTION,       ARRAYSIZE(MVC2_A_KEN_COLLECTION) },
    { "Gambit",             DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_COLLECTION,       ARRAYSIZE(MVC2_A_GAMBIT_COLLECTION) },
    { "Juggernaut",         DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_COLLECTION,       ARRAYSIZE(MVC2_A_JUGGERNAUT_COLLECTION) },
    { "Storm",              DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_COLLECTION,       ARRAYSIZE(MVC2_A_STORM_COLLECTION) },
    { "Sabretooth",         DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_COLLECTION,       ARRAYSIZE(MVC2_A_SABRETOOTH_COLLECTION) },
    { "Magneto",            DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_COLLECTION,       ARRAYSIZE(MVC2_A_MAGNETO_COLLECTION) },
    { "Shuma-Gorath",       DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_COLLECTION,       ARRAYSIZE(MVC2_A_SHUMA_COLLECTION) },
    { "War Machine",        DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_COLLECTION,       ARRAYSIZE(MVC2_A_WARMACHINE_COLLECTION) },
    { "Silver Samurai",     DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_COLLECTION,       ARRAYSIZE(MVC2_A_SILVERSAMURAI_COLLECTION) },
    { "Omega Red",          DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_COLLECTION,       ARRAYSIZE(MVC2_A_OMEGARED_COLLECTION) },
    { "Spiral",             DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_COLLECTION,       ARRAYSIZE(MVC2_A_SPIRAL_COLLECTION) },
    { "Colossus",           DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_COLLECTION,       ARRAYSIZE(MVC2_A_COLOSSUS_COLLECTION) },
    { "Iron Man",           DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_COLLECTION,       ARRAYSIZE(MVC2_A_IRONMAN_COLLECTION) },
    { "Sentinel",           DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_COLLECTION,       ARRAYSIZE(MVC2_A_SENTINEL_COLLECTION) },
    { "Blackheart",         DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_COLLECTION,       ARRAYSIZE(MVC2_A_BLACKHEART_COLLECTION) },
    { "Thanos",             DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_COLLECTION,       ARRAYSIZE(MVC2_A_THANOS_COLLECTION) },
    { "Jin Saotome",        DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_COLLECTION,       ARRAYSIZE(MVC2_A_JIN_COLLECTION) },
    { "Captain Commando",   DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_COLLECTION,       ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_COLLECTION) },
    { "Bonerine",           DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_COLLECTION,       ARRAYSIZE(MVC2_A_BONERINE_COLLECTION) },
    { "Kobun",              DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_COLLECTION,       ARRAYSIZE(MVC2_A_KOBUN_COLLECTION) },
};

// We extend this array with data groveled from the MVC2e.txt extensible extras file, if any.
const stExtraDef MVC2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

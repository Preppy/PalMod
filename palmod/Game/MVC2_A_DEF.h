#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MVC2_A_BLACKHEART_PALETTES. 
// * Update every array using MVC2_A_NUMUNIT below
// That should be it.  Good luck.

enum SupportedMVC2_A_PaletteListIndex
{
    indexMVC2ARyu,              // 0x00
    indexMVC2AZangief,          // 0x01
    indexMVC2AGuile,            // 0x02
    indexMVC2AMorrigan,         // 0x03
    indexMVC2AAnakaris,         // 0x04
    indexMVC2AStrider,          // 0x05
    indexMVC2ACyclops,          // 0x06
    indexMVC2AWolverine,        // 0x07
    indexMVC2APsylocke,         // 0x08
    indexMVC2AIceman,           // 0x09
    indexMVC2ARogue,            // 0x0a
    indexMVC2ACaptainAmerica,   // 0x0b
    indexMVC2ASpiderman,        // 0x0c
    indexMVC2AHulk,             // 0x0d
    indexMVC2AVenom,            // 0x0e
    indexMVC2ADrDoom,           // 0x0f
    indexMVC2ATron,             // 0x10
    indexMVC2AJill,             // 0x11
    indexMVC2AHayato,           // 0x12
    indexMVC2ARuby,             // 0x13
    indexMVC2ASonson,           // 0x14
    indexMVC2AAmingo,           // 0x15
    indexMVC2AMarrow,           // 0x16
    indexMVC2ACable,            // 0x17
    indexMVC2AAbyss1,           // 0x18
    indexMVC2AAbyss2,           // 0x19
    indexMVC2AAbyss3,           // 0x1a
    indexMVC2AChunLi,           // 0x1b
    indexMVC2AMegaman,          // 0x1c
    indexMVC2ARoll,             // 0x1d
    indexMVC2AAkuma,            // 0x1e
    indexMVC2ABBHood,           // 0x1f
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
    indexMVC2ATeamView,
    indexMVC2ALast
};

constexpr auto MVC2_A_NUMUNIT = indexMVC2ALast;

#define MVC2_A_EXTRALOC MVC2_A_NUMUNIT

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_LP[] =
{
    { L"Main Color LP", 0x260a9c0, 0x260a9e0, indexCPS2_Ryu, 0 },
    { L"(02) Hadouken // Shinkuu Hadouken", 0x260a9e0, 0x260aa00, indexCPS2_Ryu, 1 },
    { L"(03) Shoryuken", 0x260aa00, 0x260aa20, indexCPS2_Ken, 2 },
    { L"(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260aa20, 0x260aa40, indexCPS2_Ryu, 3 },
    { L"(05) Not Used", 0x260aa40, 0x260aa60, indexCPS2_Ryu, 4 },
    { L"(06) Not Used", 0x260aa60, 0x260aa80, indexCPS2_Ryu, 5 },
    { L"(07) Not Used: A-Groove/Super trail light", 0x260aa80, 0x260aaa0, indexCPS2_Ryu, 0 },
    { L"(08) Not Used: A-Groove/Super trail dark", 0x260aaa0, 0x260aac0, indexCPS2_Ryu, 0 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_LK[] =
{
    { L"Main Color LK", 0x260aac0, 0x260aae0, indexCPS2_Ryu, 0 },
    { L"(02) Hadouken // Shinkuu Hadouken", 0x260aae0, 0x260ab00, indexCPS2_Ryu, 1 },
    { L"(03) Shoryuken", 0x260ab00, 0x260ab20, indexCPS2_Ken, 2 },
    { L"(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ab20, 0x260ab40, indexCPS2_Ryu, 3 },
    { L"(05) Not Used", 0x260ab40, 0x260ab60, indexCPS2_Ryu, 4 },
    { L"(06) Not Used", 0x260ab60, 0x260ab80, indexCPS2_Ryu, 5 },
    { L"(07) Not Used: A-Groove/Super trail light", 0x260ab80, 0x260aba0, indexCPS2_Ryu, 0 },
    { L"(08) Not Used: A-Groove/Super trail dark", 0x260aba0, 0x260abc0, indexCPS2_Ryu, 0 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_HP[] =
{
    { L"Main Color HP", 0x260abc0, 0x260abe0, indexCPS2_Ryu, 0 },
    { L"(02) Hadouken // Shinkuu Hadouken", 0x260abe0, 0x260ac00, indexCPS2_Ryu, 1 },
    { L"(03) Shoryuken", 0x260ac00, 0x260ac20, indexCPS2_Ken, 2 },
    { L"(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ac20, 0x260ac40, indexCPS2_Ryu, 3 },
    { L"(05) Not Used", 0x260ac40, 0x260ac60, indexCPS2_Ryu, 4 },
    { L"(06) Not Used", 0x260ac60, 0x260ac80, indexCPS2_Ryu, 5 },
    { L"(07) Not Used: A-Groove/Super trail light", 0x260ac80, 0x260aca0, indexCPS2_Ryu, 0 },
    { L"(08) Not Used: A-Groove/Super trail dark", 0x260aca0, 0x260acc0, indexCPS2_Ryu, 0 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_HK[] =
{
    { L"Main Color HK", 0x260acc0, 0x260ace0, indexCPS2_Ryu, 0 },
    { L"(02) Hadouken // Shinkuu Hadouken", 0x260ace0, 0x260ad00, indexCPS2_Ryu, 1 },
    { L"(03) Shoryuken", 0x260ad00, 0x260ad20, indexCPS2_Ken, 2 },
    { L"(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ad20, 0x260ad40, indexCPS2_Ryu, 3 },
    { L"(05) Not Used", 0x260ad40, 0x260ad60, indexCPS2_Ryu, 4 },
    { L"(06) Not Used", 0x260ad60, 0x260ad80, indexCPS2_Ryu, 5 },
    { L"(07) Not Used: A-Groove/Super trail light", 0x260ad80, 0x260ada0, indexCPS2_Ryu, 0 },
    { L"(08) Not Used: A-Groove/Super trail dark", 0x260ada0, 0x260adc0, indexCPS2_Ryu, 0 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_A1[] =
{
    { L"Main Color A1", 0x260adc0, 0x260ade0, indexCPS2_Ryu, 0 },
    { L"(02) Hadouken // Shinkuu Hadouken", 0x260ade0, 0x260ae00, indexCPS2_Ryu, 1 },
    { L"(03) Shoryuken", 0x260ae00, 0x260ae20, indexCPS2_Ken, 2 },
    { L"(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260ae20, 0x260ae40, indexCPS2_Ryu, 3 },
    { L"(05) Not Used", 0x260ae40, 0x260ae60, indexCPS2_Ryu, 4 },
    { L"(06) Not Used", 0x260ae60, 0x260ae80, indexCPS2_Ryu, 5 },
    { L"(07) Not Used: A-Groove/Super trail light", 0x260ae80, 0x260aea0, indexCPS2_Ryu, 0 },
    { L"(08) Not Used: A-Groove/Super trail dark", 0x260aea0, 0x260aec0, indexCPS2_Ryu, 0 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_A2[] =
{
    { L"Main Color A2", 0x260aec0, 0x260aee0, indexCPS2_Ryu, 0 },
    { L"(02) Hadouken // Shinkuu Hadouken", 0x260aee0, 0x260af00, indexCPS2_Ryu, 1 },
    { L"(03) Shoryuken", 0x260af00, 0x260af20, indexCPS2_Ken, 2 },
    { L"(04) Hurricane Kick Super (ground effects) ID:09-14 - Not used", 0x260af20, 0x260af40, indexCPS2_Ryu, 3 },
    { L"(05) Not Used", 0x260af40, 0x260af60, indexCPS2_Ryu, 4 },
    { L"(06) Not Used", 0x260af60, 0x260af80, indexCPS2_Ryu, 5 },
    { L"(07) Not Used: A-Groove/Super trail light", 0x260af80, 0x260afa0, indexCPS2_Ryu, 0 },
    { L"(08) Not Used: A-Groove/Super trail dark", 0x260afa0, 0x260afc0, indexCPS2_Ryu, 0 },
};

const sGame_PaletteDataset MVC2_A_RYU_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x260afc0, 0x260afe0, indexCPS2_Ryu, 0 },
    { L"Burning Light", 0x260afe0, 0x260b000, indexCPS2_Ryu, 0 },
    { L"Shocked Dark", 0x260b000, 0x260b020, indexCPS2_Ryu, 0 },
    { L"Shocked Light", 0x260b020, 0x260b040, indexCPS2_Ryu, 0 },
    { L"Dark Burning Dark", 0x260b040, 0x260b060, indexCPS2_Ryu, 0 },
    { L"Dark Burning Light", 0x260b060, 0x260b080, indexCPS2_Ryu, 0 },
    { L"Kinetic Charge Dark", 0x260b080, 0x260b0a0, indexCPS2_Ryu, 0 },
    { L"Kinetic Charge Light", 0x260b0a0, 0x260b0c0, indexCPS2_Ryu, 0 },
};

const sDescTreeNode MVC2_A_RYU_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_LP, ARRAYSIZE(MVC2_A_RYU_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_LK, ARRAYSIZE(MVC2_A_RYU_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_HP, ARRAYSIZE(MVC2_A_RYU_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_HK, ARRAYSIZE(MVC2_A_RYU_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_A1, ARRAYSIZE(MVC2_A_RYU_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_A2, ARRAYSIZE(MVC2_A_RYU_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_PALETTES_SHARED, ARRAYSIZE(MVC2_A_RYU_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_LP[] =
{
    { L"Main Color LP", 0x26e2240, 0x26e2260, indexCPS2_Zangief, 0 },
    { L"(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2260, 0x26e2280, indexCPS2_Zangief, 1 },
    { L"(03) Not Used", 0x26e2280, 0x26e22a0, indexCPS2_Zangief, 2 },
    { L"(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e22a0, 0x26e22c0, indexCPS2_Zangief, 3 },
    { L"(05) Not Used", 0x26e22c0, 0x26e22e0, indexCPS2_Zangief, 4 },
    { L"(06) Not Used", 0x26e22e0, 0x26e2300, indexCPS2_Zangief, 5 },
    { L"(07) Not Used", 0x26e2300, 0x26e2320, indexCPS2_Zangief, 6 },
    { L"(08) Not Used", 0x26e2320, 0x26e2340, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_LK[] =
{
    { L"Main Color LK", 0x26e2340, 0x26e2360, indexCPS2_Zangief, 0 },
    { L"(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2360, 0x26e2380, indexCPS2_Zangief, 1 },
    { L"(03) Not Used", 0x26e2380, 0x26e23a0, indexCPS2_Zangief, 2 },
    { L"(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e23a0, 0x26e23c0, indexCPS2_Zangief, 3 },
    { L"(05) Not Used", 0x26e23c0, 0x26e23e0, indexCPS2_Zangief, 4 },
    { L"(06) Not Used", 0x26e23e0, 0x26e2400, indexCPS2_Zangief, 5 },
    { L"(07) Not Used", 0x26e2400, 0x26e2420, indexCPS2_Zangief, 6 },
    { L"(08) Not Used", 0x26e2420, 0x26e2440, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_HP[] =
{
    { L"Main Color HP", 0x26e2440, 0x26e2460, indexCPS2_Zangief, 0 },
    { L"(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2460, 0x26e2480, indexCPS2_Zangief, 1 },
    { L"(03) Not Used", 0x26e2480, 0x26e24a0, indexCPS2_Zangief, 2 },
    { L"(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e24a0, 0x26e24c0, indexCPS2_Zangief, 3 },
    { L"(05) Not Used", 0x26e24c0, 0x26e24e0, indexCPS2_Zangief, 4 },
    { L"(06) Not Used", 0x26e24e0, 0x26e2500, indexCPS2_Zangief, 5 },
    { L"(07) Not Used", 0x26e2500, 0x26e2520, indexCPS2_Zangief, 6 },
    { L"(08) Not Used", 0x26e2520, 0x26e2540, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_HK[] =
{
    { L"Main Color HK", 0x26e2540, 0x26e2560, indexCPS2_Zangief, 0 },
    { L"(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2560, 0x26e2580, indexCPS2_Zangief, 1 },
    { L"(03) Not Used", 0x26e2580, 0x26e25a0, indexCPS2_Zangief, 2 },
    { L"(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e25a0, 0x26e25c0, indexCPS2_Zangief, 3 },
    { L"(05) Not Used", 0x26e25c0, 0x26e25e0, indexCPS2_Zangief, 4 },
    { L"(06) Not Used", 0x26e25e0, 0x26e2600, indexCPS2_Zangief, 5 },
    { L"(07) Not Used", 0x26e2600, 0x26e2620, indexCPS2_Zangief, 6 },
    { L"(08) Not Used", 0x26e2620, 0x26e2640, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_A1[] =
{
    { L"Main Color A1", 0x26e2640, 0x26e2660, indexCPS2_Zangief, 0 },
    { L"(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2660, 0x26e2680, indexCPS2_Zangief, 1 },
    { L"(03) Not Used", 0x26e2680, 0x26e26a0, indexCPS2_Zangief, 2 },
    { L"(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e26a0, 0x26e26c0, indexCPS2_Zangief, 3 },
    { L"(05) Not Used", 0x26e26c0, 0x26e26e0, indexCPS2_Zangief, 4 },
    { L"(06) Not Used", 0x26e26e0, 0x26e2700, indexCPS2_Zangief, 5 },
    { L"(07) Not Used", 0x26e2700, 0x26e2720, indexCPS2_Zangief, 6 },
    { L"(08) Not Used", 0x26e2720, 0x26e2740, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_A2[] =
{
    { L"Main Color A2", 0x26e2740, 0x26e2760, indexCPS2_Zangief, 0 },
    { L"(02) ID:02-11 - Banishing Fist ID:12-15 - Banishing Fist (wristband)", 0x26e2760, 0x26e2780, indexCPS2_Zangief, 1 },
    { L"(03) Not Used", 0x26e2780, 0x26e27a0, indexCPS2_Zangief, 2 },
    { L"(04) ID:01-12 - Siberian Flame 13-15 - Not Used", 0x26e27a0, 0x26e27c0, indexCPS2_Zangief, 3 },
    { L"(05) Not Used", 0x26e27c0, 0x26e27e0, indexCPS2_Zangief, 4 },
    { L"(06) Not Used", 0x26e27e0, 0x26e2800, indexCPS2_Zangief, 5 },
    { L"(07) Not Used", 0x26e2800, 0x26e2820, indexCPS2_Zangief, 6 },
    { L"(08) Not Used", 0x26e2820, 0x26e2840, indexCPS2_Zangief, 7 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x26e2840, 0x26e2860, indexCPS2_Zangief, 0 },
    { L"Burning Light", 0x26e2860, 0x26e2880, indexCPS2_Zangief, 0 },
    { L"Shocked Dark", 0x26e2880, 0x26e28a0, indexCPS2_Zangief, 0 },
    { L"Shocked Light", 0x26e28a0, 0x26e28c0, indexCPS2_Zangief, 0 },
    { L"Dark Burning Dark", 0x26e28c0, 0x26e28e0, indexCPS2_Zangief, 0 },
    { L"Dark Burning Light", 0x26e28e0, 0x26e2900, indexCPS2_Zangief, 0 },
    { L"Kinetic Charge Dark", 0x26e2900, 0x26e2920, indexCPS2_Zangief, 0 },
    { L"Kinetic Charge Light", 0x26e2920, 0x26e2940, indexCPS2_Zangief, 0 },
};

const sGame_PaletteDataset MVC2_A_ZANGIEF_PALETTES_EXTRAS[] =
{
    { L"09: Unused Extra", 0x26e2940, 0x26e2960 },
    { L"0a: Not Used", 0x26e2960, 0x26e2980 },
    { L"0b: Not Used", 0x26e2980, 0x26e29a0 },
    { L"0c: Not Used", 0x26e29a0, 0x26e29c0 },
    { L"0d: Not Used", 0x26e29c0, 0x26e29e0 },
    { L"0e: Not Used", 0x26e29e0, 0x26e2a00 },
    { L"0f: Not Used", 0x26e2a00, 0x26e2a20 },
    { L"10: Not Used", 0x26e2a20, 0x26e2a40 },
    { L"11: LP - Mecha Gief", 0x26e2a40, 0x26e2a60, indexCPS2_Zangief, 11 },
    { L"12: LK - Mecha Gief", 0x26e2a60, 0x26e2a80, indexCPS2_Zangief, 11 },
    { L"13: HP - Mecha Gief", 0x26e2a80, 0x26e2aa0, indexCPS2_Zangief, 11 },
    { L"14: HK - Mecha Gief", 0x26e2aa0, 0x26e2ac0, indexCPS2_Zangief, 11 },
    { L"15: A1 - Mecha Gief", 0x26e2ac0, 0x26e2ae0, indexCPS2_Zangief, 11 },
    { L"16: A2 - Mecha Gief", 0x26e2ae0, 0x26e2b00, indexCPS2_Zangief, 11 },
    { L"17: (U)FAB 15perc Effect frame - LP Color", 0x26e2b00, 0x26e2b20, indexCPS2_Zangief, 12 },
    { L"18: (U)FAB 35perc Effect frame - LP Color", 0x26e2b20, 0x26e2b40, indexCPS2_Zangief, 12 },
    { L"19: (U)FAB 75perc Effect frame - LP Color", 0x26e2b40, 0x26e2b60, indexCPS2_Zangief, 12 },
    { L"1a: (U)FAB 15perc Effect frame - LK Color", 0x26e2b60, 0x26e2b80, indexCPS2_Zangief, 12 },
    { L"1b: (U)FAB 35perc Effect frame - LK Color", 0x26e2b80, 0x26e2ba0, indexCPS2_Zangief, 12 },
    { L"1c: (U)FAB 75perc Effect frame - LK Color", 0x26e2ba0, 0x26e2bc0, indexCPS2_Zangief, 12 },
    { L"1d: (U)FAB 15perc Effect frame - HP Color", 0x26e2bc0, 0x26e2be0, indexCPS2_Zangief, 12 },
    { L"1e: (U)FAB 35perc Effect frame - HP Color", 0x26e2be0, 0x26e2c00, indexCPS2_Zangief, 12 },
    { L"1f: (U)FAB 75perc Effect frame - HP Color", 0x26e2c00, 0x26e2c20, indexCPS2_Zangief, 12 },
    { L"20: (U)FAB 15perc Effect frame - HK Color", 0x26e2c20, 0x26e2c40, indexCPS2_Zangief, 12 },
    { L"21: (U)FAB 35perc Effect frame - HK Color", 0x26e2c40, 0x26e2c60, indexCPS2_Zangief, 12 },
    { L"22: (U)FAB 75perc Effect frame - HK Color", 0x26e2c60, 0x26e2c80, indexCPS2_Zangief, 12 },
    { L"23: (U)FAB 15perc Effect frame - A1 Color", 0x26e2c80, 0x26e2ca0, indexCPS2_Zangief, 12 },
    { L"24: (U)FAB 35perc Effect frame - A1 Color", 0x26e2ca0, 0x26e2cc0, indexCPS2_Zangief, 12 },
    { L"25: (U)FAB 75perc Effect frame - A1 Color", 0x26e2cc0, 0x26e2ce0, indexCPS2_Zangief, 12 },
    { L"26: (U)FAB 15perc Effect frame - A2 Color", 0x26e2ce0, 0x26e2d00, indexCPS2_Zangief, 12 },
    { L"27: (U)FAB 35perc Effect frame - A2 Color", 0x26e2d00, 0x26e2d20, indexCPS2_Zangief, 12 },
    { L"28: (U)FAB 75perc Effect frame - A2 Color", 0x26e2d20, 0x26e2d40, indexCPS2_Zangief, 12 },
    { L"29: (U)FAB 15perc Effect frame - LP Mecha Gief", 0x26e2d40, 0x26e2d60, indexCPS2_Zangief, 12 },
    { L"2a: (U)FAB 35perc Effect frame - LP Mecha Gief", 0x26e2d60, 0x26e2d80, indexCPS2_Zangief, 12 },
    { L"2b: (U)FAB 75perc Effect frame - LP Mecha Gief", 0x26e2d80, 0x26e2da0, indexCPS2_Zangief, 12 },
    { L"2c: (U)FAB 15perc Effect frame - LK Mecha Gief", 0x26e2da0, 0x26e2dc0, indexCPS2_Zangief, 12 },
    { L"2d: (U)FAB 35perc Effect frame - LK Mecha Gief", 0x26e2dc0, 0x26e2de0, indexCPS2_Zangief, 12 },
    { L"2e: (U)FAB 75perc Effect frame - LK Mecha Gief", 0x26e2de0, 0x26e2e00, indexCPS2_Zangief, 12 },
    { L"2f: (U)FAB 15perc Effect frame - HP Mecha Gief", 0x26e2e00, 0x26e2e20, indexCPS2_Zangief, 12 },
    { L"30: (U)FAB 35perc Effect frame - HP Mecha Gief", 0x26e2e20, 0x26e2e40, indexCPS2_Zangief, 12 },
    { L"31: (U)FAB 75perc Effect frame - HP Mecha Gief", 0x26e2e40, 0x26e2e60, indexCPS2_Zangief, 12 },
    { L"32: (U)FAB 15perc Effect frame - HK Mecha Gief", 0x26e2e60, 0x26e2e80, indexCPS2_Zangief, 12 },
    { L"33: (U)FAB 35perc Effect frame - HK Mecha Gief", 0x26e2e80, 0x26e2ea0, indexCPS2_Zangief, 12 },
    { L"34: (U)FAB 75perc Effect frame - HK Mecha Gief", 0x26e2ea0, 0x26e2ec0, indexCPS2_Zangief, 12 },
    { L"35: (U)FAB 15perc Effect frame - A1 Mecha Gief", 0x26e2ec0, 0x26e2ee0, indexCPS2_Zangief, 12 },
    { L"36: (U)FAB 35perc Effect frame - A1 Mecha Gief", 0x26e2ee0, 0x26e2f00, indexCPS2_Zangief, 12 },
    { L"37: (U)FAB 75perc Effect frame - A1 Mecha Gief", 0x26e2f00, 0x26e2f20, indexCPS2_Zangief, 12 },
    { L"38: (U)FAB 15perc Effect frame - A2 Mecha Gief", 0x26e2f20, 0x26e2f40, indexCPS2_Zangief, 12 },
    { L"39: (U)FAB 35perc Effect frame - A2 Mecha Gief", 0x26e2f40, 0x26e2f60, indexCPS2_Zangief, 12 },
    { L"3a: (U)FAB 75perc Effect frame - A2 Mecha Gief", 0x26e2f60, 0x26e2f80, indexCPS2_Zangief, 12 },
};

const sDescTreeNode MVC2_A_ZANGIEF_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_LP, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_LK, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_HP, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_HK, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_A1, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_A2, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ZANGIEF_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2775160, 0x2775180, indexCPS2_Guile, 0 },
    { L"(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775180, 0x27751a0, indexCPS2_Guile, 1 },
    { L"(03) Not used", 0x27751a0, 0x27751c0, indexCPS2_Guile, 2 },
    { L"(04) Not used", 0x27751c0, 0x27751e0, indexCPS2_Guile, 3 },
    { L"(05) Not used", 0x27751e0, 0x2775200, indexCPS2_Guile, 4 },
    { L"(06) Not used", 0x2775200, 0x2775220, indexCPS2_Guile, 5 },
    { L"(07) Not used", 0x2775220, 0x2775240, indexCPS2_Guile, 0 },
    { L"(08) Not used", 0x2775240, 0x2775260, indexCPS2_Guile, 0 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2775260, 0x2775280, indexCPS2_Guile, 0 },
    { L"(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775280, 0x27752a0, indexCPS2_Guile, 1 },
    { L"(03) Not used", 0x27752a0, 0x27752c0, indexCPS2_Guile, 2 },
    { L"(04) Not used", 0x27752c0, 0x27752e0, indexCPS2_Guile, 3 },
    { L"(05) Not used", 0x27752e0, 0x2775300, indexCPS2_Guile, 4 },
    { L"(06) Not used", 0x2775300, 0x2775320, indexCPS2_Guile, 5 },
    { L"(07) Not used", 0x2775320, 0x2775340, indexCPS2_Guile, 0 },
    { L"(08) Not used", 0x2775340, 0x2775360, indexCPS2_Guile, 0 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2775360, 0x2775380, indexCPS2_Guile, 0 },
    { L"(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775380, 0x27753a0, indexCPS2_Guile, 1 },
    { L"(03) Not used", 0x27753a0, 0x27753c0, indexCPS2_Guile, 2 },
    { L"(04) Not used", 0x27753c0, 0x27753e0, indexCPS2_Guile, 3 },
    { L"(05) Not used", 0x27753e0, 0x2775400, indexCPS2_Guile, 4 },
    { L"(06) Not used", 0x2775400, 0x2775420, indexCPS2_Guile, 5 },
    { L"(07) Not used", 0x2775420, 0x2775440, indexCPS2_Guile, 0 },
    { L"(08) Not used", 0x2775440, 0x2775460, indexCPS2_Guile, 0 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2775460, 0x2775480, indexCPS2_Guile, 0 },
    { L"(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775480, 0x27754a0, indexCPS2_Guile, 1 },
    { L"(03) Not used", 0x27754a0, 0x27754c0, indexCPS2_Guile, 2 },
    { L"(04) Not used", 0x27754c0, 0x27754e0, indexCPS2_Guile, 3 },
    { L"(05) Not used", 0x27754e0, 0x2775500, indexCPS2_Guile, 4 },
    { L"(06) Not used", 0x2775500, 0x2775520, indexCPS2_Guile, 5 },
    { L"(07) Not used", 0x2775520, 0x2775540, indexCPS2_Guile, 0 },
    { L"(08) Not used", 0x2775540, 0x2775560, indexCPS2_Guile, 0 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2775560, 0x2775580, indexCPS2_Guile, 0 },
    { L"(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775580, 0x27755a0, indexCPS2_Guile, 1 },
    { L"(03) Not used", 0x27755a0, 0x27755c0, indexCPS2_Guile, 2 },
    { L"(04) Not used", 0x27755c0, 0x27755e0, indexCPS2_Guile, 3 },
    { L"(05) Not used", 0x27755e0, 0x2775600, indexCPS2_Guile, 4 },
    { L"(06) Not used", 0x2775600, 0x2775620, indexCPS2_Guile, 5 },
    { L"(07) Not used", 0x2775620, 0x2775640, indexCPS2_Guile, 0 },
    { L"(08) Not used", 0x2775640, 0x2775660, indexCPS2_Guile, 0 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2775660, 0x2775680, indexCPS2_Guile, 0 },
    { L"(02) ID: 01-08 Sonic Boom/ Flash Kick/ Supers ID:09-15 Sonic Boom (tip)", 0x2775680, 0x27756a0, indexCPS2_Guile, 1 },
    { L"(03) Not used", 0x27756a0, 0x27756c0, indexCPS2_Guile, 2 },
    { L"(04) Not used", 0x27756c0, 0x27756e0, indexCPS2_Guile, 3 },
    { L"(05) Not used", 0x27756e0, 0x2775700, indexCPS2_Guile, 4 },
    { L"(06) Not used", 0x2775700, 0x2775720, indexCPS2_Guile, 5 },
    { L"(07) Not used", 0x2775720, 0x2775740, indexCPS2_Guile, 0 },
    { L"(08) Not used", 0x2775740, 0x2775760, indexCPS2_Guile, 0 },
};

const sGame_PaletteDataset MVC2_A_GUILE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2775760, 0x2775780, indexCPS2_Guile, 0 },
    { L"Burning Light", 0x2775780, 0x27757a0, indexCPS2_Guile, 0 },
    { L"Shocked Dark", 0x27757a0, 0x27757c0, indexCPS2_Guile, 0 },
    { L"Shocked Light", 0x27757c0, 0x27757e0, indexCPS2_Guile, 0 },
    { L"Dark Burning Dark", 0x27757e0, 0x2775800, indexCPS2_Guile, 0 },
    { L"Dark Burning Light", 0x2775800, 0x2775820, indexCPS2_Guile, 0 },
    { L"Kinetic Charge Dark", 0x2775820, 0x2775840, indexCPS2_Guile, 0 },
    { L"Kinetic Charge Light", 0x2775840, 0x2775860, indexCPS2_Guile, 0 },
};

const sDescTreeNode MVC2_A_GUILE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_LP, ARRAYSIZE(MVC2_A_GUILE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_LK, ARRAYSIZE(MVC2_A_GUILE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_HP, ARRAYSIZE(MVC2_A_GUILE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_HK, ARRAYSIZE(MVC2_A_GUILE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_A1, ARRAYSIZE(MVC2_A_GUILE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_A2, ARRAYSIZE(MVC2_A_GUILE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_GUILE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x283a360, 0x283a380, indexCPS2_Morrigan, 0 },
    { L"(02) Lilith", 0x283a380, 0x283a3a0, indexCPS2_Morrigan, 1 },
    { L"(03) Shines rising from the ground", 0x283a3a0, 0x283a3c0, indexCPS2_Morrigan, 2 },
    { L"(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a3c0, 0x283a3e0, indexCPS2_Morrigan, 3 },
    { L"(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a3e0, 0x283a400, indexCPS2_Morrigan, 4 },
    { L"(06) Not used", 0x283a400, 0x283a420, indexCPS2_Morrigan, 5 },
    { L"(07) Not used", 0x283a420, 0x283a440, indexCPS2_Morrigan, 0 },
    { L"(08) Not used", 0x283a440, 0x283a460, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x283a460, 0x283a480, indexCPS2_Morrigan, 0 },
    { L"(02) Lilith", 0x283a480, 0x283a4a0, indexCPS2_Morrigan, 1 },
    { L"(03) Shines rising from the ground", 0x283a4a0, 0x283a4c0, indexCPS2_Morrigan, 2 },
    { L"(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a4c0, 0x283a4e0, indexCPS2_Morrigan, 3 },
    { L"(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a4e0, 0x283a500, indexCPS2_Morrigan, 4 },
    { L"(06) Not used", 0x283a500, 0x283a520, indexCPS2_Morrigan, 5 },
    { L"(07) Not used", 0x283a520, 0x283a540, indexCPS2_Morrigan, 0 },
    { L"(08) Not used", 0x283a540, 0x283a560, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x283a560, 0x283a580, indexCPS2_Morrigan, 0 },
    { L"(02) Lilith", 0x283a580, 0x283a5a0, indexCPS2_Morrigan, 1 },
    { L"(03) Shines rising from the ground", 0x283a5a0, 0x283a5c0, indexCPS2_Morrigan, 2 },
    { L"(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a5c0, 0x283a5e0, indexCPS2_Morrigan, 3 },
    { L"(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a5e0, 0x283a600, indexCPS2_Morrigan, 4 },
    { L"(06) Not used", 0x283a600, 0x283a620, indexCPS2_Morrigan, 5 },
    { L"(07) Not used", 0x283a620, 0x283a640, indexCPS2_Morrigan, 0 },
    { L"(08) Not used", 0x283a640, 0x283a660, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x283a660, 0x283a680, indexCPS2_Morrigan, 0 },
    { L"(02) Lilith", 0x283a680, 0x283a6a0, indexCPS2_Morrigan, 1 },
    { L"(03) Shines rising from the ground", 0x283a6a0, 0x283a6c0, indexCPS2_Morrigan, 2 },
    { L"(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a6c0, 0x283a6e0, indexCPS2_Morrigan, 3 },
    { L"(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a6e0, 0x283a700, indexCPS2_Morrigan, 4 },
    { L"(06) Not used", 0x283a700, 0x283a720, indexCPS2_Morrigan, 5 },
    { L"(07) Not used", 0x283a720, 0x283a740, indexCPS2_Morrigan, 0 },
    { L"(08) Not used", 0x283a740, 0x283a760, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x283a760, 0x283a780, indexCPS2_Morrigan, 0 },
    { L"(02) Lilith", 0x283a780, 0x283a7a0, indexCPS2_Morrigan, 1 },
    { L"(03) Shines rising from the ground", 0x283a7a0, 0x283a7c0, indexCPS2_Morrigan, 2 },
    { L"(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a7c0, 0x283a7e0, indexCPS2_Morrigan, 3 },
    { L"(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a7e0, 0x283a800, indexCPS2_Morrigan, 4 },
    { L"(06) Not used", 0x283a800, 0x283a820, indexCPS2_Morrigan, 5 },
    { L"(07) Not used", 0x283a820, 0x283a840, indexCPS2_Morrigan, 0 },
    { L"(08) Not used", 0x283a840, 0x283a860, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x283a860, 0x283a880, indexCPS2_Morrigan, 0 },
    { L"(02) Lilith", 0x283a880, 0x283a8a0, indexCPS2_Morrigan, 1 },
    { L"(03) Shines rising from the ground", 0x283a8a0, 0x283a8c0, indexCPS2_Morrigan, 2 },
    { L"(04) ID: 01-08 Soul Fist ID: 09-15 Soul Fist (skull)", 0x283a8c0, 0x283a8e0, indexCPS2_Morrigan, 3 },
    { L"(05) ID: 01-08 Soul Eraser Laser ID: 09-15 Not used", 0x283a8e0, 0x283a900, indexCPS2_Morrigan, 4 },
    { L"(06) Not used", 0x283a900, 0x283a920, indexCPS2_Morrigan, 5 },
    { L"(07) Not used", 0x283a920, 0x283a940, indexCPS2_Morrigan, 0 },
    { L"(08) Not used", 0x283a940, 0x283a960, indexCPS2_Morrigan, 7 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x283a960, 0x283a980, indexCPS2_Morrigan, 0 },
    { L"Burning Light", 0x283a980, 0x283a9a0, indexCPS2_Morrigan, 0 },
    { L"Shocked Dark", 0x283a9a0, 0x283a9c0, indexCPS2_Morrigan, 0 },
    { L"Shocked Light", 0x283a9c0, 0x283a9e0, indexCPS2_Morrigan, 0 },
    { L"Dark Burning Dark", 0x283a9e0, 0x283aa00, indexCPS2_Morrigan, 0 },
    { L"Dark Burning Light", 0x283aa00, 0x283aa20, indexCPS2_Morrigan, 0 },
    { L"Kinetic Charge Dark", 0x283aa20, 0x283aa40, indexCPS2_Morrigan, 0 },
    { L"Kinetic Charge Light", 0x283aa40, 0x283aa60, indexCPS2_Morrigan, 0 },
};

const sGame_PaletteDataset MVC2_A_MORRIGAN_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x283aa60, 0x283aa80 },
    { L"0a: Not Used", 0x283aa80, 0x283aaa0 },
    { L"0b: Not Used", 0x283aaa0, 0x283aac0 },
    { L"0c: Not Used", 0x283aac0, 0x283aae0 },
    { L"0d: Not Used", 0x283aae0, 0x283ab00 },
    { L"0e: Not Used", 0x283ab00, 0x283ab20 },
    { L"0f: Not Used", 0x283ab20, 0x283ab40 },
    { L"10: Not Used", 0x283ab40, 0x283ab60 },
    { L"11: Not Used", 0x283ab60, 0x283ab80 },
    { L"12: Not Used", 0x283ab80, 0x283aba0 },
    { L"13: Not Used", 0x283aba0, 0x283abc0 },
    { L"14: Not Used", 0x283abc0, 0x283abe0 },
    { L"15: Not Used", 0x283abe0, 0x283ac00 },
    { L"16: Not Used", 0x283ac00, 0x283ac20 },
    { L"17: Not Used", 0x283ac20, 0x283ac40 },
    { L"18: Not Used", 0x283ac40, 0x283ac60 },
    { L"19: Not Used", 0x283ac60, 0x283ac80 },
    { L"1a: Not Used", 0x283ac80, 0x283aca0 },
    { L"1b: Not Used", 0x283aca0, 0x283acc0 },
    { L"1c: Not Used", 0x283acc0, 0x283ace0 },
    { L"1d: Not Used", 0x283ace0, 0x283ad00 },
    { L"1e: Not Used", 0x283ad00, 0x283ad20 },
    { L"1f: Not Used", 0x283ad20, 0x283ad40 },
    { L"20: Not Used", 0x283ad40, 0x283ad60 },
    { L"21: Not Used", 0x283ad60, 0x283ad80 },
    { L"22: Not Used", 0x283ad80, 0x283ada0 },
    { L"23: Not Used", 0x283ada0, 0x283adc0 },
    { L"24: Not Used", 0x283adc0, 0x283ade0 },
    { L"25: Not Used", 0x283ade0, 0x283ae00 },
    { L"26: Not Used", 0x283ae00, 0x283ae20 },
    { L"27: Not Used", 0x283ae20, 0x283ae40 },
    { L"28: Not Used", 0x283ae40, 0x283ae60 },
    { L"29: Not Used", 0x283ae60, 0x283ae80 },
    { L"2a: Not Used", 0x283ae80, 0x283aea0 },
    { L"2b: Not Used", 0x283aea0, 0x283aec0 },
    { L"2c: Not Used", 0x283aec0, 0x283aee0 },
    { L"2d: Not Used", 0x283aee0, 0x283af00 },
    { L"2e: Not Used", 0x283af00, 0x283af20 },
    { L"2f: Not Used", 0x283af20, 0x283af40 },
    { L"30: Not Used", 0x283af40, 0x283af60 },
    { L"31: Not Used", 0x283af60, 0x283af80 },
    { L"32: Not Used", 0x283af80, 0x283afa0 },
    { L"33: Not Used", 0x283afa0, 0x283afc0 },
    { L"34: Not Used", 0x283afc0, 0x283afe0 },
    { L"35: Not Used", 0x283afe0, 0x283b000 },
    { L"36: Not Used", 0x283b000, 0x283b020 },
    { L"37: Not Used", 0x283b020, 0x283b040 },
    { L"38: Not Used", 0x283b040, 0x283b060 },
    { L"39: separator", 0x283b060, 0x283b080 },
    { L"3a: LP - Soul Eraser (Machine Frame 1) (brighter 3B): luminance +5", 0x283b080, 0x283b0a0, indexCPS2_Morrigan, 11 },
    { L"3b: LP - Soul Eraser (Machine Frame 2)", 0x283b0a0, 0x283b0c0, indexCPS2_Morrigan, 11 },
    { L"3c: separator", 0x283b0c0, 0x283b0e0 },
    { L"3d: LK - Soul Eraser (Machine Frame 1) (brighter 3E): luminance +5", 0x283b0e0, 0x283b100, indexCPS2_Morrigan, 11 },
    { L"3e: LK - Soul Eraser (Machine Frame 2)", 0x283b100, 0x283b120, indexCPS2_Morrigan, 11 },
    { L"3f: separator", 0x283b120, 0x283b140 },
    { L"40: HP - Soul Eraser (Machine Frame 1) (brighter 41): luminance +5", 0x283b140, 0x283b160, indexCPS2_Morrigan, 11 },
    { L"41: HP - Soul Eraser (Machine Frame 2)", 0x283b160, 0x283b180, indexCPS2_Morrigan, 11 },
    { L"42: separator", 0x283b180, 0x283b1a0 },
    { L"43: HK - Soul Eraser (Machine Frame 1) (brighter 44): luminance +5", 0x283b1a0, 0x283b1c0, indexCPS2_Morrigan, 11 },
    { L"44: HK - Soul Eraser (Machine Frame 2)", 0x283b1c0, 0x283b1e0, indexCPS2_Morrigan, 11 },
    { L"45: separator", 0x283b1e0, 0x283b200 },
    { L"46: A1 - Soul Eraser (Machine Frame 1) (brighter 47): luminance +5", 0x283b200, 0x283b220, indexCPS2_Morrigan, 11 },
    { L"47: A1 - Soul Eraser (Machine Frame 2)", 0x283b220, 0x283b240, indexCPS2_Morrigan, 11 },
    { L"48: separator", 0x283b240, 0x283b260 },
    { L"49: A2 - Soul Eraser (Machine Frame 1) (brighter 4A): luminance +5", 0x283b260, 0x283b280, indexCPS2_Morrigan, 11 },
    { L"4a: A2 - Soul Eraser (Machine Frame 2)", 0x283b280, 0x283b2a0, indexCPS2_Morrigan, 11 },
    { L"4b: LP button - Lilith Same as 01 LP (Extra - 02)", 0x283b2a0, 0x283b2c0, indexCPS2_Morrigan, 12 },
    { L"4c: LP button - Lilith Same as 01 LP (Extra - 02) & ID:01 = white", 0x283b2c0, 0x283b2e0, indexCPS2_Morrigan, 12 },
    { L"4d: LP button - Morrigan Same as Original Color", 0x283b2e0, 0x283b300, indexCPS2_Morrigan, 13 },
    { L"4e: LP button - Morrigan Same as Original Color & ID:01 = white", 0x283b300, 0x283b320, indexCPS2_Morrigan, 13 },
    { L"4f: Merge Frame", 0x283b320, 0x283b340 },
    { L"50: LP - Intro Frame 1 LP color & then add luminance+20", 0x283b340, 0x283b360, indexCPS2_Morrigan, 13 },
    { L"51: LP - Intro Frame 2 LP color & then add luminance+13", 0x283b360, 0x283b380, indexCPS2_Morrigan, 13 },
    { L"52: LP - Intro Frame 3 LP color & then add luminance+7", 0x283b380, 0x283b3a0, indexCPS2_Morrigan, 13 },
    { L"53: LP - Intro Frame 4 LP color & then add luminance+0", 0x283b3a0, 0x283b3c0, indexCPS2_Morrigan, 13 },
    { L"54: LK button - Lilith Same as 01 LK (Extra - 02)", 0x283b3c0, 0x283b3e0, indexCPS2_Morrigan, 12 },
    { L"55: LK button - Lilith Same as 01 LK (Extra - 02) & ID:01 = white", 0x283b3e0, 0x283b400, indexCPS2_Morrigan, 12 },
    { L"56: LK button - Morrigan Same as Original Color", 0x283b400, 0x283b420, indexCPS2_Morrigan, 13 },
    { L"57: LK button - Morrigan Same as Original Color & ID:01 = white", 0x283b420, 0x283b440, indexCPS2_Morrigan, 13 },
    { L"58: Merge Frame", 0x283b440, 0x283b460 },
    { L"59: LK - Intro Frame 1 LK color & then add luminance+20", 0x283b460, 0x283b480, indexCPS2_Morrigan, 13 },
    { L"5a: LK - Intro Frame 2 LK color & then add luminance+13", 0x283b480, 0x283b4a0, indexCPS2_Morrigan, 13 },
    { L"5b: LK - Intro Frame 3 LK color & then add luminance+7", 0x283b4a0, 0x283b4c0, indexCPS2_Morrigan, 13 },
    { L"5c: LK - Intro Frame 4 LK color & then add luminance+0", 0x283b4c0, 0x283b4e0, indexCPS2_Morrigan, 13 },
    { L"5d: HP button - Lilith Same as 01 HP (Extra - 02)", 0x283b4e0, 0x283b500, indexCPS2_Morrigan, 12 },
    { L"5e: HP button - Lilith Same as 01 HP (Extra - 02) & ID:01 = white", 0x283b500, 0x283b520, indexCPS2_Morrigan, 12 },
    { L"5f: HP button - Morrigan Same as Original Color", 0x283b520, 0x283b540, indexCPS2_Morrigan, 13 },
    { L"60: HP button - Morrigan Same as Original Color & ID:01 = white", 0x283b540, 0x283b560, indexCPS2_Morrigan, 13 },
    { L"61: Merge Frame", 0x283b560, 0x283b580 },
    { L"62: HP - Intro Frame 1 HP color & then add luminance+20", 0x283b580, 0x283b5a0, indexCPS2_Morrigan, 13 },
    { L"63: HP - Intro Frame 2 HP color & then add luminance+13", 0x283b5a0, 0x283b5c0, indexCPS2_Morrigan, 13 },
    { L"64: HP - Intro Frame 3 HP color & then add luminance+7", 0x283b5c0, 0x283b5e0, indexCPS2_Morrigan, 13 },
    { L"65: HP - Intro Frame 4 HP color & then add luminance+0", 0x283b5e0, 0x283b600, indexCPS2_Morrigan, 13 },
    { L"66: HK button - Lilith Same as 01 HK (Extra - 02)", 0x283b600, 0x283b620, indexCPS2_Morrigan, 12 },
    { L"67: HK button - Lilith Same as 01 HK (Extra - 02) & ID:01 = white", 0x283b620, 0x283b640, indexCPS2_Morrigan, 12 },
    { L"68: HK button - Morrigan Same as Original Color", 0x283b640, 0x283b660, indexCPS2_Morrigan, 13 },
    { L"69: HK button - Morrigan Same as Original Color & ID:01 = white", 0x283b660, 0x283b680, indexCPS2_Morrigan, 13 },
    { L"6a: Merge Frame", 0x283b680, 0x283b6a0 },
    { L"6b: HK - Intro Frame 1 HK color & then add luminance+20", 0x283b6a0, 0x283b6c0, indexCPS2_Morrigan, 13 },
    { L"6c: HK - Intro Frame 2 HK color & then add luminance+13", 0x283b6c0, 0x283b6e0, indexCPS2_Morrigan, 13 },
    { L"6d: HK - Intro Frame 3 HK color & then add luminance+7", 0x283b6e0, 0x283b700, indexCPS2_Morrigan, 13 },
    { L"6e: HK - Intro Frame 4 HK color & then add luminance+0", 0x283b700, 0x283b720, indexCPS2_Morrigan, 13 },
    { L"6f: A1 button - Lilith Same as 01 A1 (Extra - 02)", 0x283b720, 0x283b740, indexCPS2_Morrigan, 12 },
    { L"70: A1 button - Lilith Same as 01 A1 (Extra - 02) & ID:01 = white", 0x283b740, 0x283b760, indexCPS2_Morrigan, 12 },
    { L"71: A1 button - Morrigan Same as Original Color", 0x283b760, 0x283b780, indexCPS2_Morrigan, 13 },
    { L"72: A1 button - Morrigan Same as Original Color & ID:01 = white", 0x283b780, 0x283b7a0, indexCPS2_Morrigan, 13 },
    { L"73: Merge Frame", 0x283b7a0, 0x283b7c0 },
    { L"74: A1 - Intro Frame 1 A1 color & then add luminance+20", 0x283b7c0, 0x283b7e0, indexCPS2_Morrigan, 13 },
    { L"75: A1 - Intro Frame 2 A1 color & then add luminance+13", 0x283b7e0, 0x283b800, indexCPS2_Morrigan, 13 },
    { L"76: A1 - Intro Frame 3 A1 color & then add luminance+7", 0x283b800, 0x283b820, indexCPS2_Morrigan, 13 },
    { L"77: A1 - Intro Frame 4 A1 color & then add luminance+0", 0x283b820, 0x283b840, indexCPS2_Morrigan, 13 },
    { L"78: A2 button - Lilith Same as 01 A2 (Extra - 02)", 0x283b840, 0x283b860, indexCPS2_Morrigan, 12 },
    { L"79: A2 button - Lilith Same as 01 A2 (Extra - 02) & ID:01 = white", 0x283b860, 0x283b880, indexCPS2_Morrigan, 12 },
    { L"7a: A2 button - Morrigan Same as Original Color", 0x283b880, 0x283b8a0, indexCPS2_Morrigan, 13 },
    { L"7b: A2 button - Morrigan Same as Original Color & ID:01 = white", 0x283b8a0, 0x283b8c0, indexCPS2_Morrigan, 13 },
    { L"7c: Merge Frame", 0x283b8c0, 0x283b8e0 },
    { L"7d: A2 - Intro Frame 1 A2 color & then add luminance+20", 0x283b8e0, 0x283b900, indexCPS2_Morrigan, 13 },
    { L"7e: A2 - Intro Frame 2 A2 color & then add luminance+13", 0x283b900, 0x283b920, indexCPS2_Morrigan, 13 },
    { L"7f: A2 - Intro Frame 3 A2 color & then add luminance+7", 0x283b920, 0x283b940, indexCPS2_Morrigan, 13 },
    { L"80: A2 - Intro Frame 4 A2 color & then add luminance+0", 0x283b940, 0x283b960, indexCPS2_Morrigan, 13 },
    { L"81: LP - Taunt (Morrigan)", 0x283b960, 0x283b980, indexCPS2_Morrigan, 14 },
    { L"82: LK - Taunt (Morrigan)", 0x283b980, 0x283b9a0, indexCPS2_Morrigan, 14 },
    { L"83: HP - Taunt (Morrigan)", 0x283b9a0, 0x283b9c0, indexCPS2_Morrigan, 14 },
    { L"84: HK - Taunt (Morrigan)", 0x283b9c0, 0x283b9e0, indexCPS2_Morrigan, 14 },
    { L"85: A1 - Taunt (Morrigan)", 0x283b9e0, 0x283ba00, indexCPS2_Morrigan, 14 },
    { L"86: A2 - Taunt (Morrigan)", 0x283ba00, 0x283ba20, indexCPS2_Morrigan, 14 },
};

const sDescTreeNode MVC2_A_MORRIGAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_LP, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_LK, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_HP, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_HK, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_A1, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_A2, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MORRIGAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2954600, 0x2954620, indexCPS2_Anakaris, 0 },
    { L"(02) Not Used", 0x2954620, 0x2954640, indexCPS2_Anakaris, 1 },
    { L"(03) c.FP Background Arms Effect", 0x2954640, 0x2954660, indexCPS2_Anakaris, 2 },
    { L"(04) Pharaoh Magic (Special Ball)", 0x2954660, 0x2954680, indexCPS2_Anakaris, 3 },
    { L"(05) Pharaoh Illusion (Background Anakaris)", 0x2954680, 0x29546a0, indexCPS2_Anakaris, 4 },
    { L"(06) Pharaoh Judgement (Dummy)", 0x29546a0, 0x29546c0, indexCPS2_Anakaris, 5 },
    { L"(07) Not Used", 0x29546c0, 0x29546e0, indexCPS2_Anakaris, 0 },
    { L"(08) Not Used", 0x29546e0, 0x2954700, indexCPS2_Anakaris, 0 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2954700, 0x2954720, indexCPS2_Anakaris, 0 },
    { L"(02) Not Used", 0x2954720, 0x2954740, indexCPS2_Anakaris, 1 },
    { L"(03) c.FP Background Arms Effect", 0x2954740, 0x2954760, indexCPS2_Anakaris, 2 },
    { L"(04) Pharaoh Magic (Special Ball)", 0x2954760, 0x2954780, indexCPS2_Anakaris, 3 },
    { L"(05) Pharaoh Illusion (Background Anakaris)", 0x2954780, 0x29547a0, indexCPS2_Anakaris, 4 },
    { L"(06) Pharaoh Judgement (Dummy)", 0x29547a0, 0x29547c0, indexCPS2_Anakaris, 5 },
    { L"(07) Not Used", 0x29547c0, 0x29547e0, indexCPS2_Anakaris, 0 },
    { L"(08) Not Used", 0x29547e0, 0x2954800, indexCPS2_Anakaris, 0 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2954800, 0x2954820, indexCPS2_Anakaris, 0 },
    { L"(02) Not Used", 0x2954820, 0x2954840, indexCPS2_Anakaris, 1 },
    { L"(03) c.FP Background Arms Effect", 0x2954840, 0x2954860, indexCPS2_Anakaris, 2 },
    { L"(04) Pharaoh Magic (Special Ball)", 0x2954860, 0x2954880, indexCPS2_Anakaris, 3 },
    { L"(05) Pharaoh Illusion (Background Anakaris)", 0x2954880, 0x29548a0, indexCPS2_Anakaris, 4 },
    { L"(06) Pharaoh Judgement (Dummy)", 0x29548a0, 0x29548c0, indexCPS2_Anakaris, 5 },
    { L"(07) Not Used", 0x29548c0, 0x29548e0, indexCPS2_Anakaris, 0 },
    { L"(08) Not Used", 0x29548e0, 0x2954900, indexCPS2_Anakaris, 0 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2954900, 0x2954920, indexCPS2_Anakaris, 0 },
    { L"(02) Not Used", 0x2954920, 0x2954940, indexCPS2_Anakaris, 1 },
    { L"(03) c.FP Background Arms Effect", 0x2954940, 0x2954960, indexCPS2_Anakaris, 2 },
    { L"(04) Pharaoh Magic (Special Ball)", 0x2954960, 0x2954980, indexCPS2_Anakaris, 3 },
    { L"(05) Pharaoh Illusion (Background Anakaris)", 0x2954980, 0x29549a0, indexCPS2_Anakaris, 4 },
    { L"(06) Pharaoh Judgement (Dummy)", 0x29549a0, 0x29549c0, indexCPS2_Anakaris, 5 },
    { L"(07) Not Used", 0x29549c0, 0x29549e0, indexCPS2_Anakaris, 0 },
    { L"(08) Not Used", 0x29549e0, 0x2954a00, indexCPS2_Anakaris, 0 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2954a00, 0x2954a20, indexCPS2_Anakaris, 0 },
    { L"(02) Not Used", 0x2954a20, 0x2954a40, indexCPS2_Anakaris, 1 },
    { L"(03) c.FP Background Arms Effect", 0x2954a40, 0x2954a60, indexCPS2_Anakaris, 2 },
    { L"(04) Pharaoh Magic (Special Ball)", 0x2954a60, 0x2954a80, indexCPS2_Anakaris, 3 },
    { L"(05) Pharaoh Illusion (Background Anakaris)", 0x2954a80, 0x2954aa0, indexCPS2_Anakaris, 4 },
    { L"(06) Pharaoh Judgement (Dummy)", 0x2954aa0, 0x2954ac0, indexCPS2_Anakaris, 5 },
    { L"(07) Not Used", 0x2954ac0, 0x2954ae0, indexCPS2_Anakaris, 0 },
    { L"(08) Not Used", 0x2954ae0, 0x2954b00, indexCPS2_Anakaris, 0 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2954b00, 0x2954b20, indexCPS2_Anakaris, 0 },
    { L"(02) Not Used", 0x2954b20, 0x2954b40, indexCPS2_Anakaris, 1 },
    { L"(03) c.FP Background Arms Effect", 0x2954b40, 0x2954b60, indexCPS2_Anakaris, 2 },
    { L"(04) Pharaoh Magic (Special Ball)", 0x2954b60, 0x2954b80, indexCPS2_Anakaris, 3 },
    { L"(05) Pharaoh Illusion (Background Anakaris)", 0x2954b80, 0x2954ba0, indexCPS2_Anakaris, 4 },
    { L"(06) Pharaoh Judgement (Dummy)", 0x2954ba0, 0x2954bc0, indexCPS2_Anakaris, 5 },
    { L"(07) Not Used", 0x2954bc0, 0x2954be0, indexCPS2_Anakaris, 0 },
    { L"(08) Not Used", 0x2954be0, 0x2954c00, indexCPS2_Anakaris, 0 },
};

const sGame_PaletteDataset MVC2_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2954c00, 0x2954c20, indexCPS2_Anakaris, 0 },
    { L"Burning Light", 0x2954c20, 0x2954c40, indexCPS2_Anakaris, 0 },
    { L"Shocked Dark", 0x2954c40, 0x2954c60, indexCPS2_Anakaris, 0 },
    { L"Shocked Light", 0x2954c60, 0x2954c80, indexCPS2_Anakaris, 0 },
    { L"Dark Burning Dark", 0x2954c80, 0x2954ca0, indexCPS2_Anakaris, 0 },
    { L"Dark Burning Light", 0x2954ca0, 0x2954cc0, indexCPS2_Anakaris, 0 },
    { L"Kinetic Charge Dark", 0x2954cc0, 0x2954ce0, indexCPS2_Anakaris, 0 },
    { L"Kinetic Charge Light", 0x2954ce0, 0x2954d00, indexCPS2_Anakaris, 0 },
};

const sDescTreeNode MVC2_A_ANAKARIS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_LP, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_LK, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_HP, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_HK, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_A1, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_A2, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ANAKARIS_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2a2c5e0, 0x2a2c600, indexCPS2_Strider, 0 },
    { L"(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c600, 0x2a2c620, indexCPS2_Strider, 1 },
    { L"(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c620, 0x2a2c640, indexCPS2_Strider, 2 },
    { L"(04) Not Used", 0x2a2c640, 0x2a2c660, indexCPS2_Strider, 3 },
    { L"(05) Not Used", 0x2a2c660, 0x2a2c680, indexCPS2_Strider, 4 },
    { L"(06) Not Used", 0x2a2c680, 0x2a2c6a0, indexCPS2_Strider, 5 },
    { L"(07) Not Used", 0x2a2c6a0, 0x2a2c6c0, indexCPS2_Strider, 6 },
    { L"(08) Not Used", 0x2a2c6c0, 0x2a2c6e0, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2a2c6e0, 0x2a2c700, indexCPS2_Strider, 0 },
    { L"(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c700, 0x2a2c720, indexCPS2_Strider, 1 },
    { L"(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c720, 0x2a2c740, indexCPS2_Strider, 2 },
    { L"(04) Not Used", 0x2a2c740, 0x2a2c760, indexCPS2_Strider, 3 },
    { L"(05) Not Used", 0x2a2c760, 0x2a2c780, indexCPS2_Strider, 4 },
    { L"(06) Not Used", 0x2a2c780, 0x2a2c7a0, indexCPS2_Strider, 5 },
    { L"(07) Not Used", 0x2a2c7a0, 0x2a2c7c0, indexCPS2_Strider, 6 },
    { L"(08) Not Used", 0x2a2c7c0, 0x2a2c7e0, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2a2c7e0, 0x2a2c800, indexCPS2_Strider, 0 },
    { L"(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c800, 0x2a2c820, indexCPS2_Strider, 1 },
    { L"(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c820, 0x2a2c840, indexCPS2_Strider, 2 },
    { L"(04) Not Used", 0x2a2c840, 0x2a2c860, indexCPS2_Strider, 3 },
    { L"(05) Not Used", 0x2a2c860, 0x2a2c880, indexCPS2_Strider, 4 },
    { L"(06) Not Used", 0x2a2c880, 0x2a2c8a0, indexCPS2_Strider, 5 },
    { L"(07) Not Used", 0x2a2c8a0, 0x2a2c8c0, indexCPS2_Strider, 6 },
    { L"(08) Not Used", 0x2a2c8c0, 0x2a2c8e0, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2a2c8e0, 0x2a2c900, indexCPS2_Strider, 0 },
    { L"(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2c900, 0x2a2c920, indexCPS2_Strider, 1 },
    { L"(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2c920, 0x2a2c940, indexCPS2_Strider, 2 },
    { L"(04) Not Used", 0x2a2c940, 0x2a2c960, indexCPS2_Strider, 3 },
    { L"(05) Not Used", 0x2a2c960, 0x2a2c980, indexCPS2_Strider, 4 },
    { L"(06) Not Used", 0x2a2c980, 0x2a2c9a0, indexCPS2_Strider, 5 },
    { L"(07) Not Used", 0x2a2c9a0, 0x2a2c9c0, indexCPS2_Strider, 6 },
    { L"(08) Not Used", 0x2a2c9c0, 0x2a2c9e0, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2a2c9e0, 0x2a2ca00, indexCPS2_Strider, 0 },
    { L"(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2ca00, 0x2a2ca20, indexCPS2_Strider, 1 },
    { L"(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2ca20, 0x2a2ca40, indexCPS2_Strider, 2 },
    { L"(04) Not Used", 0x2a2ca40, 0x2a2ca60, indexCPS2_Strider, 3 },
    { L"(05) Not Used", 0x2a2ca60, 0x2a2ca80, indexCPS2_Strider, 4 },
    { L"(06) Not Used", 0x2a2ca80, 0x2a2caa0, indexCPS2_Strider, 5 },
    { L"(07) Not Used", 0x2a2caa0, 0x2a2cac0, indexCPS2_Strider, 6 },
    { L"(08) Not Used", 0x2a2cac0, 0x2a2cae0, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2a2cae0, 0x2a2cb00, indexCPS2_Strider, 0 },
    { L"(02) ID:01-06 Ouroboros (orbs)/Teleport Kick/Sword Swing ID: 07-12 Sword Swing (Outline) ID: 13-15 Not used", 0x2a2cb00, 0x2a2cb20, indexCPS2_Strider, 1 },
    { L"(03) ID:02-08 Ouroboros (Robot)/ Eagle(body) / Tiger (body) ID: 09-12: Ouroboros (Middle Line) / Eagle (claws/peak/wing) / Tiger (eye) ID: 13-15 Not used", 0x2a2cb20, 0x2a2cb40, indexCPS2_Strider, 2 },
    { L"(04) Not Used", 0x2a2cb40, 0x2a2cb60, indexCPS2_Strider, 3 },
    { L"(05) Not Used", 0x2a2cb60, 0x2a2cb80, indexCPS2_Strider, 4 },
    { L"(06) Not Used", 0x2a2cb80, 0x2a2cba0, indexCPS2_Strider, 5 },
    { L"(07) Not Used", 0x2a2cba0, 0x2a2cbc0, indexCPS2_Strider, 6 },
    { L"(08) Not Used", 0x2a2cbc0, 0x2a2cbe0, indexCPS2_Strider, 7 },
};

const sGame_PaletteDataset MVC2_A_STRIDER_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2a2cbe0, 0x2a2cc00, indexCPS2_Strider, 0 },
    { L"Burning Light", 0x2a2cc00, 0x2a2cc20, indexCPS2_Strider, 0 },
    { L"Shocked Dark", 0x2a2cc20, 0x2a2cc40, indexCPS2_Strider, 0 },
    { L"Shocked Light", 0x2a2cc40, 0x2a2cc60, indexCPS2_Strider, 0 },
    { L"Dark Burning Dark", 0x2a2cc60, 0x2a2cc80, indexCPS2_Strider, 0 },
    { L"Dark Burning Light", 0x2a2cc80, 0x2a2cca0, indexCPS2_Strider, 0 },
    { L"Kinetic Charge Dark", 0x2a2cca0, 0x2a2ccc0, indexCPS2_Strider, 0 },
    { L"Kinetic Charge Light", 0x2a2ccc0, 0x2a2cce0, indexCPS2_Strider, 0 },
};

const sDescTreeNode MVC2_A_STRIDER_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_LP, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_LK, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_HP, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_HK, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_A1, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_A2, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_PALETTES_SHARED, ARRAYSIZE(MVC2_A_STRIDER_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2b13440, 0x2b13460, indexCPS2_Cyclops, 0 },
    { L"(02) s.HK, (s)j.HK Swing effect", 0x2b13460, 0x2b13480, indexCPS2_Cyclops, 1 },
    { L"(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13480, 0x2b134a0, indexCPS2_Cyclops, 2 },
    { L"(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b134a0, 0x2b134c0, indexCPS2_Cyclops, 3 },
    { L"(05) Not Used", 0x2b134c0, 0x2b134e0, indexCPS2_Cyclops, 4 },
    { L"(06) Not Used", 0x2b134e0, 0x2b13500, indexCPS2_Cyclops, 5 },
    { L"(07) Not Used", 0x2b13500, 0x2b13520, indexCPS2_Cyclops, 6 },
    { L"(08) Not Used", 0x2b13520, 0x2b13540, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2b13540, 0x2b13560, indexCPS2_Cyclops, 0 },
    { L"(02) s.HK, (s)j.HK Swing effect", 0x2b13560, 0x2b13580, indexCPS2_Cyclops, 1 },
    { L"(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13580, 0x2b135a0, indexCPS2_Cyclops, 2 },
    { L"(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b135a0, 0x2b135c0, indexCPS2_Cyclops, 3 },
    { L"(05) Not Used", 0x2b135c0, 0x2b135e0, indexCPS2_Cyclops, 4 },
    { L"(06) Not Used", 0x2b135e0, 0x2b13600, indexCPS2_Cyclops, 5 },
    { L"(07) Not Used", 0x2b13600, 0x2b13620, indexCPS2_Cyclops, 6 },
    { L"(08) Not Used", 0x2b13620, 0x2b13640, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2b13640, 0x2b13660, indexCPS2_Cyclops, 0 },
    { L"(02) s.HK, (s)j.HK Swing effect", 0x2b13660, 0x2b13680, indexCPS2_Cyclops, 1 },
    { L"(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13680, 0x2b136a0, indexCPS2_Cyclops, 2 },
    { L"(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b136a0, 0x2b136c0, indexCPS2_Cyclops, 3 },
    { L"(05) Not Used", 0x2b136c0, 0x2b136e0, indexCPS2_Cyclops, 4 },
    { L"(06) Not Used", 0x2b136e0, 0x2b13700, indexCPS2_Cyclops, 5 },
    { L"(07) Not Used", 0x2b13700, 0x2b13720, indexCPS2_Cyclops, 6 },
    { L"(08) Not Used", 0x2b13720, 0x2b13740, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2b13740, 0x2b13760, indexCPS2_Cyclops, 0 },
    { L"(02) s.HK, (s)j.HK Swing effect", 0x2b13760, 0x2b13780, indexCPS2_Cyclops, 1 },
    { L"(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13780, 0x2b137a0, indexCPS2_Cyclops, 2 },
    { L"(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b137a0, 0x2b137c0, indexCPS2_Cyclops, 3 },
    { L"(05) Not Used", 0x2b137c0, 0x2b137e0, indexCPS2_Cyclops, 4 },
    { L"(06) Not Used", 0x2b137e0, 0x2b13800, indexCPS2_Cyclops, 5 },
    { L"(07) Not Used", 0x2b13800, 0x2b13820, indexCPS2_Cyclops, 6 },
    { L"(08) Not Used", 0x2b13820, 0x2b13840, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2b13840, 0x2b13860, indexCPS2_Cyclops, 0 },
    { L"(02) s.HK, (s)j.HK Swing effect", 0x2b13860, 0x2b13880, indexCPS2_Cyclops, 1 },
    { L"(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13880, 0x2b138a0, indexCPS2_Cyclops, 2 },
    { L"(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b138a0, 0x2b138c0, indexCPS2_Cyclops, 3 },
    { L"(05) Not Used", 0x2b138c0, 0x2b138e0, indexCPS2_Cyclops, 4 },
    { L"(06) Not Used", 0x2b138e0, 0x2b13900, indexCPS2_Cyclops, 5 },
    { L"(07) Not Used", 0x2b13900, 0x2b13920, indexCPS2_Cyclops, 6 },
    { L"(08) Not Used", 0x2b13920, 0x2b13940, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2b13940, 0x2b13960, indexCPS2_Cyclops, 0 },
    { L"(02) s.HK, (s)j.HK Swing effect", 0x2b13960, 0x2b13980, indexCPS2_Cyclops, 1 },
    { L"(03) ID:01-08 Mega Optic Blast (Laser / Hit Frame 1) ID:09-16: Mega Optic Blast (Hit Frame 2)", 0x2b13980, 0x2b139a0, indexCPS2_Cyclops, 2 },
    { L"(04) ID:01-08 Optic Goggle Shade / Taunt Spark ID:09-16: Taunt Spark Frame 2 / Tag-In Shine", 0x2b139a0, 0x2b139c0, indexCPS2_Cyclops, 3 },
    { L"(05) Not Used", 0x2b139c0, 0x2b139e0, indexCPS2_Cyclops, 4 },
    { L"(06) Not Used", 0x2b139e0, 0x2b13a00, indexCPS2_Cyclops, 5 },
    { L"(07) Not Used", 0x2b13a00, 0x2b13a20, indexCPS2_Cyclops, 6 },
    { L"(08) Not Used", 0x2b13a20, 0x2b13a40, indexCPS2_Cyclops, 7 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2b13a40, 0x2b13a60, indexCPS2_Cyclops, 0 },
    { L"Burning Light", 0x2b13a60, 0x2b13a80, indexCPS2_Cyclops, 0 },
    { L"Shocked Dark", 0x2b13a80, 0x2b13aa0, indexCPS2_Cyclops, 0 },
    { L"Shocked Light", 0x2b13aa0, 0x2b13ac0, indexCPS2_Cyclops, 0 },
    { L"Dark Burning Dark", 0x2b13ac0, 0x2b13ae0, indexCPS2_Cyclops, 0 },
    { L"Dark Burning Light", 0x2b13ae0, 0x2b13b00, indexCPS2_Cyclops, 0 },
    { L"Kinetic Charge Dark", 0x2b13b00, 0x2b13b20, indexCPS2_Cyclops, 0 },
    { L"Kinetic Charge Light", 0x2b13b20, 0x2b13b40, indexCPS2_Cyclops, 0 },
};

const sGame_PaletteDataset MVC2_A_CYCLOPS_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x2b13b40, 0x2b13b60 },
    { L"0a: Not Used", 0x2b13b60, 0x2b13b80 },
    { L"0b: Not Used", 0x2b13b80, 0x2b13ba0 },
    { L"0c: Not Used", 0x2b13ba0, 0x2b13bc0 },
    { L"0d: Not Used", 0x2b13bc0, 0x2b13be0 },
    { L"0e: Not Used", 0x2b13be0, 0x2b13c00 },
    { L"0f: Not Used", 0x2b13c00, 0x2b13c20 },
    { L"10: Not Used", 0x2b13c20, 0x2b13c40 },
    { L"11: Not Used", 0x2b13c40, 0x2b13c60 },
    { L"12: Not Used", 0x2b13c60, 0x2b13c80 },
    { L"13: Not Used", 0x2b13c80, 0x2b13ca0 },
    { L"14: Not Used", 0x2b13ca0, 0x2b13cc0 },
    { L"15: Not Used", 0x2b13cc0, 0x2b13ce0 },
    { L"16: Not Used", 0x2b13ce0, 0x2b13d00 },
    { L"17: Not Used", 0x2b13d00, 0x2b13d20 },
    { L"18: Not Used", 0x2b13d20, 0x2b13d40 },
    { L"19: Optic Bullet / Optic Blast / Super Optic Blast Frame 1", 0x2b13d40, 0x2b13d60, indexCPS2_Cyclops, 11 },
    { L"1a: Optic Bullet / Optic Blast / Super Optic Blast Frame 2", 0x2b13d60, 0x2b13d80, indexCPS2_Cyclops, 11 },
    { L"1b: Optic Bullet / Optic Blast / Super Optic Blast Frame 3", 0x2b13d80, 0x2b13da0, indexCPS2_Cyclops, 11 },
    { L"1c: Optic Bullet / Optic Blast / Super Optic Blast Frame 4", 0x2b13da0, 0x2b13dc0, indexCPS2_Cyclops, 11 },
    { L"1d: Optic Bullet / Optic Blast / Super Optic Blast Frame 5", 0x2b13dc0, 0x2b13de0, indexCPS2_Cyclops, 11 },
    { L"1e: ?", 0x2b13de0, 0x2b13e00 },
    { L"1f: Not Used", 0x2b13e00, 0x2b13e20 },
    { L"20: Not Used", 0x2b13e20, 0x2b13e40 },
    { L"21: Not Used", 0x2b13e40, 0x2b13e60 },
    { L"22: Not Used 09-15:purple+aqua", 0x2b13e60, 0x2b13e80 },
    { L"23: Not Used", 0x2b13e80, 0x2b13ea0 },
    { L"24: Not Used", 0x2b13ea0, 0x2b13ec0 },
    { L"25: Not Used", 0x2b13ec0, 0x2b13ee0 },
    { L"26: Not Used", 0x2b13ee0, 0x2b13f00 },
    { L"27: Not Used", 0x2b13f00, 0x2b13f20 },
    { L"28: Not Used", 0x2b13f20, 0x2b13f40 },
    { L"29: LP - Intro Frame 1", 0x2b13f40, 0x2b13f60, indexCPS2_Cyclops, 12 },
    { L"2a: LP - Intro Frame 2", 0x2b13f60, 0x2b13f80, indexCPS2_Cyclops, 12 },
    { L"2b: LP - Intro Frame 3", 0x2b13f80, 0x2b13fa0, indexCPS2_Cyclops, 12 },
    { L"2c: LP - Intro Frame 4", 0x2b13fa0, 0x2b13fc0, indexCPS2_Cyclops, 12 },
    { L"2d: LP - Intro Frame 5", 0x2b13fc0, 0x2b13fe0, indexCPS2_Cyclops, 12 },
    { L"2e: LP - Intro Frame 6", 0x2b13fe0, 0x2b14000, indexCPS2_Cyclops, 12 },
    { L"2f: LP - Intro Frame 7", 0x2b14000, 0x2b14020, indexCPS2_Cyclops, 12 },
    { L"30: LP - Intro Frame 8", 0x2b14020, 0x2b14040, indexCPS2_Cyclops, 12 },
    { L"31: LK - Intro Frame 1", 0x2b14040, 0x2b14060, indexCPS2_Cyclops, 12 },
    { L"32: LK - Intro Frame 2", 0x2b14060, 0x2b14080, indexCPS2_Cyclops, 12 },
    { L"33: LK - Intro Frame 3", 0x2b14080, 0x2b140a0, indexCPS2_Cyclops, 12 },
    { L"34: LK - Intro Frame 4", 0x2b140a0, 0x2b140c0, indexCPS2_Cyclops, 12 },
    { L"35: LK - Intro Frame 5", 0x2b140c0, 0x2b140e0, indexCPS2_Cyclops, 12 },
    { L"36: LK - Intro Frame 6", 0x2b140e0, 0x2b14100, indexCPS2_Cyclops, 12 },
    { L"37: LK - Intro Frame 7", 0x2b14100, 0x2b14120, indexCPS2_Cyclops, 12 },
    { L"38: LK - Intro Frame 8", 0x2b14120, 0x2b14140, indexCPS2_Cyclops, 12 },
    { L"39: HP - Intro Frame 1", 0x2b14140, 0x2b14160, indexCPS2_Cyclops, 12 },
    { L"3a: HP - Intro Frame 2", 0x2b14160, 0x2b14180, indexCPS2_Cyclops, 12 },
    { L"3b: HP - Intro Frame 3", 0x2b14180, 0x2b141a0, indexCPS2_Cyclops, 12 },
    { L"3c: HP - Intro Frame 4", 0x2b141a0, 0x2b141c0, indexCPS2_Cyclops, 12 },
    { L"3d: HP - Intro Frame 5", 0x2b141c0, 0x2b141e0, indexCPS2_Cyclops, 12 },
    { L"3e: HP - Intro Frame 6", 0x2b141e0, 0x2b14200, indexCPS2_Cyclops, 12 },
    { L"3f: HP - Intro Frame 7", 0x2b14200, 0x2b14220, indexCPS2_Cyclops, 12 },
    { L"40: HP - Intro Frame 8", 0x2b14220, 0x2b14240, indexCPS2_Cyclops, 12 },
    { L"41: HK - Intro Frame 1", 0x2b14240, 0x2b14260, indexCPS2_Cyclops, 12 },
    { L"42: HK - Intro Frame 2", 0x2b14260, 0x2b14280, indexCPS2_Cyclops, 12 },
    { L"43: HK - Intro Frame 3", 0x2b14280, 0x2b142a0, indexCPS2_Cyclops, 12 },
    { L"44: HK - Intro Frame 4", 0x2b142a0, 0x2b142c0, indexCPS2_Cyclops, 12 },
    { L"45: HK - Intro Frame 5", 0x2b142c0, 0x2b142e0, indexCPS2_Cyclops, 12 },
    { L"46: HK - Intro Frame 6", 0x2b142e0, 0x2b14300, indexCPS2_Cyclops, 12 },
    { L"47: HK - Intro Frame 7", 0x2b14300, 0x2b14320, indexCPS2_Cyclops, 12 },
    { L"48: HK - Intro Frame 8", 0x2b14320, 0x2b14340, indexCPS2_Cyclops, 12 },
    { L"49: A1 - Intro Frame 1", 0x2b14340, 0x2b14360, indexCPS2_Cyclops, 12 },
    { L"4a: A1 - Intro Frame 2", 0x2b14360, 0x2b14380, indexCPS2_Cyclops, 12 },
    { L"4b: A1 - Intro Frame 3", 0x2b14380, 0x2b143a0, indexCPS2_Cyclops, 12 },
    { L"4c: A1 - Intro Frame 4", 0x2b143a0, 0x2b143c0, indexCPS2_Cyclops, 12 },
    { L"4d: A1 - Intro Frame 5", 0x2b143c0, 0x2b143e0, indexCPS2_Cyclops, 12 },
    { L"4e: A1 - Intro Frame 6", 0x2b143e0, 0x2b14400, indexCPS2_Cyclops, 12 },
    { L"4f: A1 - Intro Frame 7", 0x2b14400, 0x2b14420, indexCPS2_Cyclops, 12 },
    { L"50: A1 - Intro Frame 8", 0x2b14420, 0x2b14440, indexCPS2_Cyclops, 12 },
    { L"51: A2 - Intro Frame 1", 0x2b14440, 0x2b14460, indexCPS2_Cyclops, 12 },
    { L"52: A2 - Intro Frame 2", 0x2b14460, 0x2b14480, indexCPS2_Cyclops, 12 },
    { L"53: A2 - Intro Frame 3", 0x2b14480, 0x2b144a0, indexCPS2_Cyclops, 12 },
    { L"54: A2 - Intro Frame 4", 0x2b144a0, 0x2b144c0, indexCPS2_Cyclops, 12 },
    { L"55: A2 - Intro Frame 5", 0x2b144c0, 0x2b144e0, indexCPS2_Cyclops, 12 },
    { L"56: A2 - Intro Frame 6", 0x2b144e0, 0x2b14500, indexCPS2_Cyclops, 12 },
    { L"57: A2 - Intro Frame 7", 0x2b14500, 0x2b14520, indexCPS2_Cyclops, 12 },
    { L"58: A2 - Intro Frame 8", 0x2b14520, 0x2b14540, indexCPS2_Cyclops, 12 },
    { L"59: LP Mega Optic Blast Stance", 0x2b14540, 0x2b14560, indexCPS2_Cyclops, 13 },
    { L"5a: LP Mega Optic Blast Stance Glimmer", 0x2b14560, 0x2b14580, indexCPS2_Cyclops, 13 },
    { L"5b: LK Mega Optic Blast Stance", 0x2b14580, 0x2b145a0, indexCPS2_Cyclops, 13 },
    { L"5c: LK Mega Optic Blast Stance Glimmer", 0x2b145a0, 0x2b145c0, indexCPS2_Cyclops, 13 },
    { L"5d: HP Mega Optic Blast Stance", 0x2b145c0, 0x2b145e0, indexCPS2_Cyclops, 13 },
    { L"5e: HP Mega Optic Blast Stance Glimmer", 0x2b145e0, 0x2b14600, indexCPS2_Cyclops, 13 },
    { L"5f: HK Mega Optic Blast Stance", 0x2b14600, 0x2b14620, indexCPS2_Cyclops, 13 },
    { L"60: HK Mega Optic Blast Stance Glimmer", 0x2b14620, 0x2b14640, indexCPS2_Cyclops, 13 },
    { L"61: A1 Mega Optic Blast Stance", 0x2b14640, 0x2b14660, indexCPS2_Cyclops, 13 },
    { L"62: A1 Mega Optic Blast Stance Glimmer", 0x2b14660, 0x2b14680, indexCPS2_Cyclops, 13 },
    { L"63: A2 Mega Optic Blast Stance", 0x2b14680, 0x2b146a0, indexCPS2_Cyclops, 13 },
    { L"64: A2 Mega Optic Blast Stance Glimmer", 0x2b146a0, 0x2b146c0, indexCPS2_Cyclops, 13 },
};

const sDescTreeNode MVC2_A_CYCLOPS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_LP, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_LK, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_HP, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_HK, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_A1, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_A2, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_CYCLOPS_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2c0eba0, 0x2c0ebc0, indexCPS2_Wolverine, 0, &pairNext },
    { L"(02) Wolverine's Claws", 0x2c0ebc0, 0x2c0ebe0, indexCPS2_Wolverine, 1 },
    { L"(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0ebe0, 0x2c0ec00, indexCPS2_Wolverine, 2 },
    { L"(04) Not Used", 0x2c0ec00, 0x2c0ec20, indexCPS2_Wolverine, 3 },
    { L"(05) Not Used", 0x2c0ec20, 0x2c0ec40, indexCPS2_Wolverine, 4 },
    { L"(06) Not Used", 0x2c0ec40, 0x2c0ec60, indexCPS2_Wolverine, 5 },
    { L"(07) Not Used", 0x2c0ec60, 0x2c0ec80, indexCPS2_Wolverine, 0, &pairNext },
    { L"(08) Not Used", 0x2c0ec80, 0x2c0eca0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2c0eca0, 0x2c0ecc0, indexCPS2_Wolverine, 0, &pairNext },
    { L"(02) Wolverine's Claws", 0x2c0ecc0, 0x2c0ece0, indexCPS2_Wolverine, 1 },
    { L"(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0ece0, 0x2c0ed00, indexCPS2_Wolverine, 2 },
    { L"(04) Not Used", 0x2c0ed00, 0x2c0ed20, indexCPS2_Wolverine, 3 },
    { L"(05) Not Used", 0x2c0ed20, 0x2c0ed40, indexCPS2_Wolverine, 4 },
    { L"(06) Not Used", 0x2c0ed40, 0x2c0ed60, indexCPS2_Wolverine, 5 },
    { L"(07) Not Used", 0x2c0ed60, 0x2c0ed80, indexCPS2_Wolverine, 0, &pairNext },
    { L"(08) Not Used", 0x2c0ed80, 0x2c0eda0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2c0eda0, 0x2c0edc0, indexCPS2_Wolverine, 0, &pairNext },
    { L"(02) Wolverine's Claws", 0x2c0edc0, 0x2c0ede0, indexCPS2_Wolverine, 1 },
    { L"(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0ede0, 0x2c0ee00, indexCPS2_Wolverine, 2 },
    { L"(04) Not Used", 0x2c0ee00, 0x2c0ee20, indexCPS2_Wolverine, 3 },
    { L"(05) Not Used", 0x2c0ee20, 0x2c0ee40, indexCPS2_Wolverine, 4 },
    { L"(06) Not Used", 0x2c0ee40, 0x2c0ee60, indexCPS2_Wolverine, 5 },
    { L"(07) Not Used", 0x2c0ee60, 0x2c0ee80, indexCPS2_Wolverine, 0, &pairNext },
    { L"(08) Not Used", 0x2c0ee80, 0x2c0eea0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2c0eea0, 0x2c0eec0, indexCPS2_Wolverine, 0, &pairNext },
    { L"(02) Wolverine's Claws", 0x2c0eec0, 0x2c0eee0, indexCPS2_Wolverine, 1 },
    { L"(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0eee0, 0x2c0ef00, indexCPS2_Wolverine, 2 },
    { L"(04) Not Used", 0x2c0ef00, 0x2c0ef20, indexCPS2_Wolverine, 3 },
    { L"(05) Not Used", 0x2c0ef20, 0x2c0ef40, indexCPS2_Wolverine, 4 },
    { L"(06) Not Used", 0x2c0ef40, 0x2c0ef60, indexCPS2_Wolverine, 5 },
    { L"(07) Not Used", 0x2c0ef60, 0x2c0ef80, indexCPS2_Wolverine, 0, &pairNext },
    { L"(08) Not Used", 0x2c0ef80, 0x2c0efa0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2c0efa0, 0x2c0efc0, indexCPS2_Wolverine, 0, &pairNext },
    { L"(02) Wolverine's Claws", 0x2c0efc0, 0x2c0efe0, indexCPS2_Wolverine, 1 },
    { L"(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0efe0, 0x2c0f000, indexCPS2_Wolverine, 2 },
    { L"(04) Not Used", 0x2c0f000, 0x2c0f020, indexCPS2_Wolverine, 3 },
    { L"(05) Not Used", 0x2c0f020, 0x2c0f040, indexCPS2_Wolverine, 4 },
    { L"(06) Not Used", 0x2c0f040, 0x2c0f060, indexCPS2_Wolverine, 5 },
    { L"(07) Not Used", 0x2c0f060, 0x2c0f080, indexCPS2_Wolverine, 0, &pairNext },
    { L"(08) Not Used", 0x2c0f080, 0x2c0f0a0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2c0f0a0, 0x2c0f0c0, indexCPS2_Wolverine, 0, &pairNext },
    { L"(02) Wolverine's Claws", 0x2c0f0c0, 0x2c0f0e0, indexCPS2_Wolverine, 1 },
    { L"(03) FP effect / Berserker Barrage (claw effect) / Weapon X (X effect)", 0x2c0f0e0, 0x2c0f100, indexCPS2_Wolverine, 2 },
    { L"(04) Not Used", 0x2c0f100, 0x2c0f120, indexCPS2_Wolverine, 3 },
    { L"(05) Not Used", 0x2c0f120, 0x2c0f140, indexCPS2_Wolverine, 4 },
    { L"(06) Not Used", 0x2c0f140, 0x2c0f160, indexCPS2_Wolverine, 5 },
    { L"(07) Not Used", 0x2c0f160, 0x2c0f180, indexCPS2_Wolverine, 0, &pairNext },
    { L"(08) Not Used", 0x2c0f180, 0x2c0f1a0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2c0f1a0, 0x2c0f1c0, indexCPS2_Wolverine, 0, &pairNext },
    { L"Burning Dark 2", 0x2c0f1c0, 0x2c0f1e0, indexCPS2_Wolverine, 1 },
    { L"Burning Light", 0x2c0f1e0, 0x2c0f200, indexCPS2_Wolverine, 0, &pairNext },
    { L"Burning Light 2", 0x2c0f200, 0x2c0f220, indexCPS2_Wolverine, 1 },
    { L"Shocked Dark", 0x2c0f220, 0x2c0f240, indexCPS2_Wolverine, 0, &pairNext },
    { L"Shocked Dark 2", 0x2c0f240, 0x2c0f260, indexCPS2_Wolverine, 1 },
    { L"Shocked Light", 0x2c0f260, 0x2c0f280, indexCPS2_Wolverine, 0, &pairNext },
    { L"Shocked Light 2", 0x2c0f280, 0x2c0f2a0, indexCPS2_Wolverine, 1 },
    { L"Dark Burning Dark", 0x2c0f2a0, 0x2c0f2c0, indexCPS2_Wolverine, 0, &pairNext },
    { L"Dark Burning Dark 2", 0x2c0f2c0, 0x2c0f2e0, indexCPS2_Wolverine, 1 },
    { L"Dark Burning Light", 0x2c0f2e0, 0x2c0f300, indexCPS2_Wolverine, 0, &pairNext },
    { L"Dark Burning Light 2", 0x2c0f300, 0x2c0f320, indexCPS2_Wolverine, 1 },
    { L"Kinetic Charge Dark", 0x2c0f320, 0x2c0f340, indexCPS2_Wolverine, 0, &pairNext },
    { L"Kinetic Charge Dark 2", 0x2c0f340, 0x2c0f360, indexCPS2_Wolverine, 1 },
    { L"Kinetic Charge Light", 0x2c0f360, 0x2c0f380, indexCPS2_Wolverine, 0, &pairNext },
    { L"Kinetic Charge Light 2", 0x2c0f380, 0x2c0f3a0, indexCPS2_Wolverine, 1 },
};

const sGame_PaletteDataset MVC2_A_WOLVERINE_PALETTES_EXTRAS[] =
{
    { L"11: Fatal Claw (Effect for All buttons)", 0x2c0f3a0, 0x2c0f3c0, indexCPS2_Wolverine, 11 },
};

const sDescTreeNode MVC2_A_WOLVERINE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_LP, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_LK, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_HP, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_HK, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_A1, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_A2, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_WOLVERINE_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2d104e0, 0x2d10500, indexCPS2_Psylocke, 0 },
    { L"(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10500, 0x2d10520, indexCPS2_Psylocke, 1 },
    { L"(03) PsyThrust / PsyBlade / Teleport", 0x2d10520, 0x2d10540, indexCPS2_Psylocke, 2 },
    { L"(04) PsyThrust (Psylocke Frame during super)", 0x2d10540, 0x2d10560, indexCPS2_Psylocke, 3 },
    { L"(05) Not Used", 0x2d10560, 0x2d10580, indexCPS2_Psylocke, 4 },
    { L"(06) Not Used", 0x2d10580, 0x2d105a0, indexCPS2_Psylocke, 5 },
    { L"(07) Not Used", 0x2d105a0, 0x2d105c0, indexCPS2_Psylocke, 6 },
    { L"(08) Not Used", 0x2d105c0, 0x2d105e0, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2d105e0, 0x2d10600, indexCPS2_Psylocke, 0 },
    { L"(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10600, 0x2d10620, indexCPS2_Psylocke, 1 },
    { L"(03) PsyThrust / PsyBlade / Teleport", 0x2d10620, 0x2d10640, indexCPS2_Psylocke, 2 },
    { L"(04) PsyThrust (Psylocke Frame during super)", 0x2d10640, 0x2d10660, indexCPS2_Psylocke, 3 },
    { L"(05) Not Used", 0x2d10660, 0x2d10680, indexCPS2_Psylocke, 4 },
    { L"(06) Not Used", 0x2d10680, 0x2d106a0, indexCPS2_Psylocke, 5 },
    { L"(07) Not Used", 0x2d106a0, 0x2d106c0, indexCPS2_Psylocke, 6 },
    { L"(08) Not Used", 0x2d106c0, 0x2d106e0, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2d106e0, 0x2d10700, indexCPS2_Psylocke, 0 },
    { L"(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10700, 0x2d10720, indexCPS2_Psylocke, 1 },
    { L"(03) PsyThrust / PsyBlade / Teleport", 0x2d10720, 0x2d10740, indexCPS2_Psylocke, 2 },
    { L"(04) PsyThrust (Psylocke Frame during super)", 0x2d10740, 0x2d10760, indexCPS2_Psylocke, 3 },
    { L"(05) Not Used", 0x2d10760, 0x2d10780, indexCPS2_Psylocke, 4 },
    { L"(06) Not Used", 0x2d10780, 0x2d107a0, indexCPS2_Psylocke, 5 },
    { L"(07) Not Used", 0x2d107a0, 0x2d107c0, indexCPS2_Psylocke, 6 },
    { L"(08) Not Used", 0x2d107c0, 0x2d107e0, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2d107e0, 0x2d10800, indexCPS2_Psylocke, 0 },
    { L"(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10800, 0x2d10820, indexCPS2_Psylocke, 1 },
    { L"(03) PsyThrust / PsyBlade / Teleport", 0x2d10820, 0x2d10840, indexCPS2_Psylocke, 2 },
    { L"(04) PsyThrust (Psylocke Frame during super)", 0x2d10840, 0x2d10860, indexCPS2_Psylocke, 3 },
    { L"(05) Not Used", 0x2d10860, 0x2d10880, indexCPS2_Psylocke, 4 },
    { L"(06) Not Used", 0x2d10880, 0x2d108a0, indexCPS2_Psylocke, 5 },
    { L"(07) Not Used", 0x2d108a0, 0x2d108c0, indexCPS2_Psylocke, 6 },
    { L"(08) Not Used", 0x2d108c0, 0x2d108e0, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2d108e0, 0x2d10900, indexCPS2_Psylocke, 0 },
    { L"(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10900, 0x2d10920, indexCPS2_Psylocke, 1 },
    { L"(03) PsyThrust / PsyBlade / Teleport", 0x2d10920, 0x2d10940, indexCPS2_Psylocke, 2 },
    { L"(04) PsyThrust (Psylocke Frame during super)", 0x2d10940, 0x2d10960, indexCPS2_Psylocke, 3 },
    { L"(05) Not Used", 0x2d10960, 0x2d10980, indexCPS2_Psylocke, 4 },
    { L"(06) Not Used", 0x2d10980, 0x2d109a0, indexCPS2_Psylocke, 5 },
    { L"(07) Not Used", 0x2d109a0, 0x2d109c0, indexCPS2_Psylocke, 6 },
    { L"(08) Not Used", 0x2d109c0, 0x2d109e0, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2d109e0, 0x2d10a00, indexCPS2_Psylocke, 0 },
    { L"(02) FP / PsyBlast / Kochou Gakure/ Psy-Maelstrom", 0x2d10a00, 0x2d10a20, indexCPS2_Psylocke, 1 },
    { L"(03) PsyThrust / PsyBlade / Teleport", 0x2d10a20, 0x2d10a40, indexCPS2_Psylocke, 2 },
    { L"(04) PsyThrust (Psylocke Frame during super)", 0x2d10a40, 0x2d10a60, indexCPS2_Psylocke, 3 },
    { L"(05) Not Used", 0x2d10a60, 0x2d10a80, indexCPS2_Psylocke, 4 },
    { L"(06) Not Used", 0x2d10a80, 0x2d10aa0, indexCPS2_Psylocke, 5 },
    { L"(07) Not Used", 0x2d10aa0, 0x2d10ac0, indexCPS2_Psylocke, 6 },
    { L"(08) Not Used", 0x2d10ac0, 0x2d10ae0, indexCPS2_Psylocke, 7 },
};

const sGame_PaletteDataset MVC2_A_PSYLOCKE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2d10ae0, 0x2d10b00, indexCPS2_Psylocke, 0 },
    { L"Burning Light", 0x2d10b00, 0x2d10b20, indexCPS2_Psylocke, 0 },
    { L"Shocked Dark", 0x2d10b20, 0x2d10b40, indexCPS2_Psylocke, 0 },
    { L"Shocked Light", 0x2d10b40, 0x2d10b60, indexCPS2_Psylocke, 0 },
    { L"Dark Burning Dark", 0x2d10b60, 0x2d10b80, indexCPS2_Psylocke, 0 },
    { L"Dark Burning Light", 0x2d10b80, 0x2d10ba0, indexCPS2_Psylocke, 0 },
    { L"Kinetic Charge Dark", 0x2d10ba0, 0x2d10bc0, indexCPS2_Psylocke, 0 },
    { L"Kinetic Charge Light", 0x2d10bc0, 0x2d10be0, indexCPS2_Psylocke, 0 },
};

const sDescTreeNode MVC2_A_PSYLOCKE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_LP, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_LK, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_HP, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_HK, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_A1, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_A2, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_PSYLOCKE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2dfb5c0, 0x2dfb5e0, indexCPS2_Iceman, 0 },
    { L"(02) Stance Frame", 0x2dfb5e0, 0x2dfb600, indexCPS2_Iceman, 1 },
    { L"(03) Same as Button Color (copy Main Color for that button)", 0x2dfb600, 0x2dfb620, indexCPS2_Iceman, 2 },
    { L"(04) Taunt -Bobby Drake", 0x2dfb620, 0x2dfb640, indexCPS2_Iceman, 3 },
    { L"(05) Intro - Iceman Letters Melting", 0x2dfb640, 0x2dfb660, indexCPS2_Iceman, 4 },
    { L"(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb660, 0x2dfb680, indexCPS2_Iceman, 5 },
    { L"(07) Not Used", 0x2dfb680, 0x2dfb6a0, indexCPS2_Iceman, 6 },
    { L"(08) Not Used", 0x2dfb6a0, 0x2dfb6c0, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2dfb6c0, 0x2dfb6e0, indexCPS2_Iceman, 0 },
    { L"(02) Stance Frame", 0x2dfb6e0, 0x2dfb700, indexCPS2_Iceman, 1 },
    { L"(03) Same as Button Color (copy Main Color for that button)", 0x2dfb700, 0x2dfb720, indexCPS2_Iceman, 2 },
    { L"(04) Taunt -Bobby Drake", 0x2dfb720, 0x2dfb740, indexCPS2_Iceman, 3 },
    { L"(05) Intro - Iceman Letters Melting", 0x2dfb740, 0x2dfb760, indexCPS2_Iceman, 4 },
    { L"(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb760, 0x2dfb780, indexCPS2_Iceman, 5 },
    { L"(07) Not Used", 0x2dfb780, 0x2dfb7a0, indexCPS2_Iceman, 6 },
    { L"(08) Not Used", 0x2dfb7a0, 0x2dfb7c0, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2dfb7c0, 0x2dfb7e0, indexCPS2_Iceman, 0 },
    { L"(02) Stance Frame", 0x2dfb7e0, 0x2dfb800, indexCPS2_Iceman, 1 },
    { L"(03) Same as Button Color (copy Main Color for that button)", 0x2dfb800, 0x2dfb820, indexCPS2_Iceman, 2 },
    { L"(04) Taunt -Bobby Drake", 0x2dfb820, 0x2dfb840, indexCPS2_Iceman, 3 },
    { L"(05) Intro - Iceman Letters Melting", 0x2dfb840, 0x2dfb860, indexCPS2_Iceman, 4 },
    { L"(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb860, 0x2dfb880, indexCPS2_Iceman, 5 },
    { L"(07) Not Used", 0x2dfb880, 0x2dfb8a0, indexCPS2_Iceman, 6 },
    { L"(08) Not Used", 0x2dfb8a0, 0x2dfb8c0, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2dfb8c0, 0x2dfb8e0, indexCPS2_Iceman, 0 },
    { L"(02) Stance Frame", 0x2dfb8e0, 0x2dfb900, indexCPS2_Iceman, 1 },
    { L"(03) Same as Button Color (copy Main Color for that button)", 0x2dfb900, 0x2dfb920, indexCPS2_Iceman, 2 },
    { L"(04) Taunt -Bobby Drake", 0x2dfb920, 0x2dfb940, indexCPS2_Iceman, 3 },
    { L"(05) Intro - Iceman Letters Melting", 0x2dfb940, 0x2dfb960, indexCPS2_Iceman, 4 },
    { L"(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfb960, 0x2dfb980, indexCPS2_Iceman, 5 },
    { L"(07) Not Used", 0x2dfb980, 0x2dfb9a0, indexCPS2_Iceman, 6 },
    { L"(08) Not Used", 0x2dfb9a0, 0x2dfb9c0, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2dfb9c0, 0x2dfb9e0, indexCPS2_Iceman, 0 },
    { L"(02) Stance Frame", 0x2dfb9e0, 0x2dfba00, indexCPS2_Iceman, 1 },
    { L"(03) Same as Button Color (copy Main Color for that button)", 0x2dfba00, 0x2dfba20, indexCPS2_Iceman, 2 },
    { L"(04) Taunt -Bobby Drake", 0x2dfba20, 0x2dfba40, indexCPS2_Iceman, 3 },
    { L"(05) Intro - Iceman Letters Melting", 0x2dfba40, 0x2dfba60, indexCPS2_Iceman, 4 },
    { L"(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfba60, 0x2dfba80, indexCPS2_Iceman, 5 },
    { L"(07) Not Used", 0x2dfba80, 0x2dfbaa0, indexCPS2_Iceman, 6 },
    { L"(08) Not Used", 0x2dfbaa0, 0x2dfbac0, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2dfbac0, 0x2dfbae0, indexCPS2_Iceman, 0 },
    { L"(02) Stance Frame", 0x2dfbae0, 0x2dfbb00, indexCPS2_Iceman, 1 },
    { L"(03) Same as Button Color (copy Main Color for that button)", 0x2dfbb00, 0x2dfbb20, indexCPS2_Iceman, 2 },
    { L"(04) Taunt -Bobby Drake", 0x2dfbb20, 0x2dfbb40, indexCPS2_Iceman, 3 },
    { L"(05) Intro - Iceman Letters Melting", 0x2dfbb40, 0x2dfbb60, indexCPS2_Iceman, 4 },
    { L"(06) Ice Avalanche/ Arctic Attack / Iceball", 0x2dfbb60, 0x2dfbb80, indexCPS2_Iceman, 5 },
    { L"(07) Not Used", 0x2dfbb80, 0x2dfbba0, indexCPS2_Iceman, 6 },
    { L"(08) Not Used", 0x2dfbba0, 0x2dfbbc0, indexCPS2_Iceman, 7 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2dfbbc0, 0x2dfbbe0, indexCPS2_Iceman, 0 },
    { L"Burning Light", 0x2dfbbe0, 0x2dfbc00, indexCPS2_Iceman, 0 },
    { L"Shocked Dark", 0x2dfbc00, 0x2dfbc20, indexCPS2_Iceman, 0 },
    { L"Shocked Light", 0x2dfbc20, 0x2dfbc40, indexCPS2_Iceman, 0 },
    { L"Dark Burning Dark", 0x2dfbc40, 0x2dfbc60, indexCPS2_Iceman, 0 },
    { L"Dark Burning Light", 0x2dfbc60, 0x2dfbc80, indexCPS2_Iceman, 0 },
    { L"Kinetic Charge Dark", 0x2dfbc80, 0x2dfbca0, indexCPS2_Iceman, 0 },
    { L"Kinetic Charge Light", 0x2dfbca0, 0x2dfbcc0, indexCPS2_Iceman, 0 },
};

const sGame_PaletteDataset MVC2_A_ICEMAN_PALETTES_EXTRAS[] =
{
    { L"09: Icebeam Frame 1 (all buttons)", 0x2dfbcc0, 0x2dfbce0, indexCPS2_Iceman, 11 },
    { L"0a: Icebeam Frame 2 (all buttons)", 0x2dfbce0, 0x2dfbd00, indexCPS2_Iceman, 11 },
    { L"0b: Icebeam Frame 3 (all buttons)", 0x2dfbd00, 0x2dfbd20, indexCPS2_Iceman, 11 },
    { L"0c: Icebeam Frame 4 (all buttons)", 0x2dfbd20, 0x2dfbd40, indexCPS2_Iceman, 11 },
    { L"0d: Not Used", 0x2dfbd40, 0x2dfbd60 },
    { L"0e: Not Used", 0x2dfbd60, 0x2dfbd80 },
    { L"0f: Not Used", 0x2dfbd80, 0x2dfbda0 },
    { L"10: Not Used", 0x2dfbda0, 0x2dfbdc0 },
    { L"11: Not Used", 0x2dfbdc0, 0x2dfbde0 },
    { L"12: Not Used", 0x2dfbde0, 0x2dfbe00 },
    { L"13: Not Used", 0x2dfbe00, 0x2dfbe20 },
    { L"14: Not Used", 0x2dfbe20, 0x2dfbe40 },
    { L"15: Not Used", 0x2dfbe40, 0x2dfbe60 },
    { L"16: Not Used", 0x2dfbe60, 0x2dfbe80 },
    { L"17: Not Used", 0x2dfbe80, 0x2dfbea0 },
    { L"18: Not Used", 0x2dfbea0, 0x2dfbec0 },
    { L"19: Not Used", 0x2dfbec0, 0x2dfbee0 },
    { L"1a: Not Used", 0x2dfbee0, 0x2dfbf00 },
    { L"1b: Not Used", 0x2dfbf00, 0x2dfbf20 },
    { L"1c: Not Used", 0x2dfbf20, 0x2dfbf40 },
    { L"1d: Not Used", 0x2dfbf40, 0x2dfbf60 },
    { L"1e: Not Used", 0x2dfbf60, 0x2dfbf80 },
    { L"1f: Not Used", 0x2dfbf80, 0x2dfbfa0 },
    { L"20: Not Used", 0x2dfbfa0, 0x2dfbfc0 },
    { L"21: LP - Shine Frame 1", 0x2dfbfc0, 0x2dfbfe0, indexCPS2_Iceman, 0 },
    { L"22: LP - Shine Frame 2", 0x2dfbfe0, 0x2dfc000, indexCPS2_Iceman, 0 },
    { L"23: LP - Shine Frame 3", 0x2dfc000, 0x2dfc020, indexCPS2_Iceman, 0 },
    { L"24: LP - Shine Frame 4", 0x2dfc020, 0x2dfc040, indexCPS2_Iceman, 0 },
    { L"25: LP - Shine Frame 5", 0x2dfc040, 0x2dfc060, indexCPS2_Iceman, 0 },
    { L"26: LP - Shine Frame 6", 0x2dfc060, 0x2dfc080, indexCPS2_Iceman, 0 },
    { L"27: LP - Shine Frame 7", 0x2dfc080, 0x2dfc0a0, indexCPS2_Iceman, 0 },
    { L"28: LK - Shine Frame 1", 0x2dfc0a0, 0x2dfc0c0, indexCPS2_Iceman, 0 },
    { L"29: LK - Shine Frame 2", 0x2dfc0c0, 0x2dfc0e0, indexCPS2_Iceman, 0 },
    { L"2a: LK - Shine Frame 3", 0x2dfc0e0, 0x2dfc100, indexCPS2_Iceman, 0 },
    { L"2b: LK - Shine Frame 4", 0x2dfc100, 0x2dfc120, indexCPS2_Iceman, 0 },
    { L"2c: LK - Shine Frame 5", 0x2dfc120, 0x2dfc140, indexCPS2_Iceman, 0 },
    { L"2d: LK - Shine Frame 6", 0x2dfc140, 0x2dfc160, indexCPS2_Iceman, 0 },
    { L"2e: LK - Shine Frame 7", 0x2dfc160, 0x2dfc180, indexCPS2_Iceman, 0 },
    { L"2f: HP - Shine Frame 1", 0x2dfc180, 0x2dfc1a0, indexCPS2_Iceman, 0 },
    { L"30: HP - Shine Frame 2", 0x2dfc1a0, 0x2dfc1c0, indexCPS2_Iceman, 0 },
    { L"31: HP - Shine Frame 3", 0x2dfc1c0, 0x2dfc1e0, indexCPS2_Iceman, 0 },
    { L"32: HP - Shine Frame 4", 0x2dfc1e0, 0x2dfc200, indexCPS2_Iceman, 0 },
    { L"33: HP - Shine Frame 5", 0x2dfc200, 0x2dfc220, indexCPS2_Iceman, 0 },
    { L"34: HP - Shine Frame 6", 0x2dfc220, 0x2dfc240, indexCPS2_Iceman, 0 },
    { L"35: HP - Shine Frame 7", 0x2dfc240, 0x2dfc260, indexCPS2_Iceman, 0 },
    { L"36: HK - Shine Frame 1", 0x2dfc260, 0x2dfc280, indexCPS2_Iceman, 0 },
    { L"37: HK - Shine Frame 2", 0x2dfc280, 0x2dfc2a0, indexCPS2_Iceman, 0 },
    { L"38: HK - Shine Frame 3", 0x2dfc2a0, 0x2dfc2c0, indexCPS2_Iceman, 0 },
    { L"39: HK - Shine Frame 4", 0x2dfc2c0, 0x2dfc2e0, indexCPS2_Iceman, 0 },
    { L"3a: HK - Shine Frame 5", 0x2dfc2e0, 0x2dfc300, indexCPS2_Iceman, 0 },
    { L"3b: HK - Shine Frame 6", 0x2dfc300, 0x2dfc320, indexCPS2_Iceman, 0 },
    { L"3c: HK - Shine Frame 7", 0x2dfc320, 0x2dfc340, indexCPS2_Iceman, 0 },
    { L"3d: A1 - Shine Frame 1", 0x2dfc340, 0x2dfc360, indexCPS2_Iceman, 0 },
    { L"3e: A1 - Shine Frame 2", 0x2dfc360, 0x2dfc380, indexCPS2_Iceman, 0 },
    { L"3f: A1 - Shine Frame 3", 0x2dfc380, 0x2dfc3a0, indexCPS2_Iceman, 0 },
    { L"40: A1 - Shine Frame 4", 0x2dfc3a0, 0x2dfc3c0, indexCPS2_Iceman, 0 },
    { L"41: A1 - Shine Frame 5", 0x2dfc3c0, 0x2dfc3e0, indexCPS2_Iceman, 0 },
    { L"42: A1 - Shine Frame 6", 0x2dfc3e0, 0x2dfc400, indexCPS2_Iceman, 0 },
    { L"43: A1 - Shine Frame 7", 0x2dfc400, 0x2dfc420, indexCPS2_Iceman, 0 },
    { L"44: A2 - Shine Frame 1", 0x2dfc420, 0x2dfc440, indexCPS2_Iceman, 0 },
    { L"45: A2 - Shine Frame 2", 0x2dfc440, 0x2dfc460, indexCPS2_Iceman, 0 },
    { L"46: A2 - Shine Frame 3", 0x2dfc460, 0x2dfc480, indexCPS2_Iceman, 0 },
    { L"47: A2 - Shine Frame 4", 0x2dfc480, 0x2dfc4a0, indexCPS2_Iceman, 0 },
    { L"48: A2 - Shine Frame 5", 0x2dfc4a0, 0x2dfc4c0, indexCPS2_Iceman, 0 },
    { L"49: A2 - Shine Frame 6", 0x2dfc4c0, 0x2dfc4e0, indexCPS2_Iceman, 0 },
    { L"4a: A2 - Shine Frame 7", 0x2dfc4e0, 0x2dfc500, indexCPS2_Iceman, 0 },
};

const sDescTreeNode MVC2_A_ICEMAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ICEMAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2ee2140, 0x2ee2160, indexCPS2_Rogue, 0 },
    { L"(02) Taunt - Heart", 0x2ee2160, 0x2ee2180, indexCPS2_Rogue, 1 },
    { L"(03) Intro (Ground Dust)", 0x2ee2180, 0x2ee21a0, indexCPS2_Rogue, 2 },
    { L"(04) Not Used", 0x2ee21a0, 0x2ee21c0, indexCPS2_Rogue, 3 },
    { L"(05) Dash Shadows", 0x2ee21c0, 0x2ee21e0, indexCPS2_Rogue, 4 },
    { L"(06) Not Used", 0x2ee21e0, 0x2ee2200, indexCPS2_Rogue, 5 },
    { L"(07) Not Used", 0x2ee2200, 0x2ee2220, indexCPS2_Rogue, 0 },
    { L"(08) Not Used", 0x2ee2220, 0x2ee2240, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2ee2240, 0x2ee2260, indexCPS2_Rogue, 0 },
    { L"(02) Taunt - Heart", 0x2ee2260, 0x2ee2280, indexCPS2_Rogue, 1 },
    { L"(03) Intro (Ground Dust)", 0x2ee2280, 0x2ee22a0, indexCPS2_Rogue, 2 },
    { L"(04) Not Used", 0x2ee22a0, 0x2ee22c0, indexCPS2_Rogue, 3 },
    { L"(05) Dash Shadows", 0x2ee22c0, 0x2ee22e0, indexCPS2_Rogue, 4 },
    { L"(06) Not Used", 0x2ee22e0, 0x2ee2300, indexCPS2_Rogue, 5 },
    { L"(07) Not Used", 0x2ee2300, 0x2ee2320, indexCPS2_Rogue, 0 },
    { L"(08) Not Used", 0x2ee2320, 0x2ee2340, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2ee2340, 0x2ee2360, indexCPS2_Rogue, 0 },
    { L"(02) Taunt - Heart", 0x2ee2360, 0x2ee2380, indexCPS2_Rogue, 1 },
    { L"(03) Intro (Ground Dust)", 0x2ee2380, 0x2ee23a0, indexCPS2_Rogue, 2 },
    { L"(04) Not Used", 0x2ee23a0, 0x2ee23c0, indexCPS2_Rogue, 3 },
    { L"(05) Dash Shadows", 0x2ee23c0, 0x2ee23e0, indexCPS2_Rogue, 4 },
    { L"(06) Not Used", 0x2ee23e0, 0x2ee2400, indexCPS2_Rogue, 5 },
    { L"(07) Not Used", 0x2ee2400, 0x2ee2420, indexCPS2_Rogue, 0 },
    { L"(08) Not Used", 0x2ee2420, 0x2ee2440, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2ee2440, 0x2ee2460, indexCPS2_Rogue, 0 },
    { L"(02) Taunt - Heart", 0x2ee2460, 0x2ee2480, indexCPS2_Rogue, 1 },
    { L"(03) Intro (Ground Dust)", 0x2ee2480, 0x2ee24a0, indexCPS2_Rogue, 2 },
    { L"(04) Not Used", 0x2ee24a0, 0x2ee24c0, indexCPS2_Rogue, 3 },
    { L"(05) Dash Shadows", 0x2ee24c0, 0x2ee24e0, indexCPS2_Rogue, 4 },
    { L"(06) Not Used", 0x2ee24e0, 0x2ee2500, indexCPS2_Rogue, 5 },
    { L"(07) Not Used", 0x2ee2500, 0x2ee2520, indexCPS2_Rogue, 0 },
    { L"(08) Not Used", 0x2ee2520, 0x2ee2540, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2ee2540, 0x2ee2560, indexCPS2_Rogue, 0 },
    { L"(02) Taunt - Heart", 0x2ee2560, 0x2ee2580, indexCPS2_Rogue, 1 },
    { L"(03) Intro (Ground Dust)", 0x2ee2580, 0x2ee25a0, indexCPS2_Rogue, 2 },
    { L"(04) Not Used", 0x2ee25a0, 0x2ee25c0, indexCPS2_Rogue, 3 },
    { L"(05) Dash Shadows", 0x2ee25c0, 0x2ee25e0, indexCPS2_Rogue, 4 },
    { L"(06) Not Used", 0x2ee25e0, 0x2ee2600, indexCPS2_Rogue, 5 },
    { L"(07) Not Used", 0x2ee2600, 0x2ee2620, indexCPS2_Rogue, 0 },
    { L"(08) Not Used", 0x2ee2620, 0x2ee2640, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2ee2640, 0x2ee2660, indexCPS2_Rogue, 0 },
    { L"(02) Taunt - Heart", 0x2ee2660, 0x2ee2680, indexCPS2_Rogue, 1 },
    { L"(03) Intro (Ground Dust)", 0x2ee2680, 0x2ee26a0, indexCPS2_Rogue, 2 },
    { L"(04) Not Used", 0x2ee26a0, 0x2ee26c0, indexCPS2_Rogue, 3 },
    { L"(05) Dash Shadows", 0x2ee26c0, 0x2ee26e0, indexCPS2_Rogue, 4 },
    { L"(06) Not Used", 0x2ee26e0, 0x2ee2700, indexCPS2_Rogue, 5 },
    { L"(07) Not Used", 0x2ee2700, 0x2ee2720, indexCPS2_Rogue, 0 },
    { L"(08) Not Used", 0x2ee2720, 0x2ee2740, indexCPS2_Rogue, 7 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2ee2740, 0x2ee2760, indexCPS2_Rogue, 0 },
    { L"Burning Light", 0x2ee2760, 0x2ee2780, indexCPS2_Rogue, 0 },
    { L"Shocked Dark", 0x2ee2780, 0x2ee27a0, indexCPS2_Rogue, 0 },
    { L"Shocked Light", 0x2ee27a0, 0x2ee27c0, indexCPS2_Rogue, 0 },
    { L"Dark Burning Dark", 0x2ee27c0, 0x2ee27e0, indexCPS2_Rogue, 0 },
    { L"Dark Burning Light", 0x2ee27e0, 0x2ee2800, indexCPS2_Rogue, 0 },
    { L"Kinetic Charge Dark", 0x2ee2800, 0x2ee2820, indexCPS2_Rogue, 0 },
    { L"Kinetic Charge Light", 0x2ee2820, 0x2ee2840, indexCPS2_Rogue, 0 },
};

const sGame_PaletteDataset MVC2_A_ROGUE_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x2ee2840, 0x2ee2860 },
    { L"0a: Not Used", 0x2ee2860, 0x2ee2880 },
    { L"0b: Not Used", 0x2ee2880, 0x2ee28a0 },
    { L"0c: Not Used", 0x2ee28a0, 0x2ee28c0 },
    { L"0d: Not Used", 0x2ee28c0, 0x2ee28e0 },
    { L"0e: Not Used", 0x2ee28e0, 0x2ee2900 },
    { L"0f: Not Used", 0x2ee2900, 0x2ee2920 },
    { L"10: Not Used", 0x2ee2920, 0x2ee2940 },
    { L"11: LP Shadows 1", 0x2ee2940, 0x2ee2960, indexCPS2_Rogue, 4 },
    { L"12: LP Shadows 2", 0x2ee2960, 0x2ee2980, indexCPS2_Rogue, 4 },
    { L"13: LK Shadows 1", 0x2ee2980, 0x2ee29a0, indexCPS2_Rogue, 4 },
    { L"14: LK Shadows 2", 0x2ee29a0, 0x2ee29c0, indexCPS2_Rogue, 4 },
    { L"15: HP Shadows 1", 0x2ee29c0, 0x2ee29e0, indexCPS2_Rogue, 4 },
    { L"16: HP Shadows 2", 0x2ee29e0, 0x2ee2a00, indexCPS2_Rogue, 4 },
    { L"17: HK Shadows 1", 0x2ee2a00, 0x2ee2a20, indexCPS2_Rogue, 4 },
    { L"18: HK Shadows 2", 0x2ee2a20, 0x2ee2a40, indexCPS2_Rogue, 4 },
    { L"19: A1 Shadows 1", 0x2ee2a40, 0x2ee2a60, indexCPS2_Rogue, 4 },
    { L"1a: A1 Shadows 2", 0x2ee2a60, 0x2ee2a80, indexCPS2_Rogue, 4 },
    { L"1b: A2 Shadows 1", 0x2ee2a80, 0x2ee2aa0, indexCPS2_Rogue, 4 },
    { L"1c: A2 Shadows 2", 0x2ee2aa0, 0x2ee2ac0, indexCPS2_Rogue, 4 },
    { L"1d: LP - Winpose", 0x2ee2ac0, 0x2ee2ae0, indexCPS2_Rogue, 11 },
    { L"1e: LK - Winpose", 0x2ee2ae0, 0x2ee2b00, indexCPS2_Rogue, 11 },
    { L"1f: HP - Winpose", 0x2ee2b00, 0x2ee2b20, indexCPS2_Rogue, 11 },
    { L"20: HK - Winpose", 0x2ee2b20, 0x2ee2b40, indexCPS2_Rogue, 11 },
    { L"21: A1 - Winpose", 0x2ee2b40, 0x2ee2b60, indexCPS2_Rogue, 11 },
    { L"22: A2 - Winpose", 0x2ee2b60, 0x2ee2b80, indexCPS2_Rogue, 11 },
};

const sDescTreeNode MVC2_A_ROGUE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_LP, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_LK, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_HP, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_HK, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_A1, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_A2, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ROGUE_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_LP[] =
{
    { L"Main Color LP", 0x2fd03e0, 0x2fd0400, indexCPS2_CapAm, 0, &pairNext },
    { L"(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0400, 0x2fd0420, indexCPS2_CapAm, 1 },
    { L"(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0420, 0x2fd0440, indexCPS2_CapAm, 2 },
    { L"(04) Eagle", 0x2fd0440, 0x2fd0460, indexCPS2_CapAm, 3 },
    { L"(05) Not Used", 0x2fd0460, 0x2fd0480, indexCPS2_CapAm, 4 },
    { L"(06) Not Used", 0x2fd0480, 0x2fd04a0, indexCPS2_CapAm, 5 },
    { L"(07) Not Used", 0x2fd04a0, 0x2fd04c0, indexCPS2_CapAm, 6 },
    { L"(08) Not Used", 0x2fd04c0, 0x2fd04e0, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_LK[] =
{
    { L"Main Color LK", 0x2fd04e0, 0x2fd0500, indexCPS2_CapAm, 0, &pairNext },
    { L"(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0500, 0x2fd0520, indexCPS2_CapAm, 1 },
    { L"(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0520, 0x2fd0540, indexCPS2_CapAm, 2 },
    { L"(04) Eagle", 0x2fd0540, 0x2fd0560, indexCPS2_CapAm, 3 },
    { L"(05) Not Used", 0x2fd0560, 0x2fd0580, indexCPS2_CapAm, 4 },
    { L"(06) Not Used", 0x2fd0580, 0x2fd05a0, indexCPS2_CapAm, 5 },
    { L"(07) Not Used", 0x2fd05a0, 0x2fd05c0, indexCPS2_CapAm, 6 },
    { L"(08) Not Used", 0x2fd05c0, 0x2fd05e0, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_HP[] =
{
    { L"Main Color HP", 0x2fd05e0, 0x2fd0600, indexCPS2_CapAm, 0, &pairNext },
    { L"(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0600, 0x2fd0620, indexCPS2_CapAm, 1 },
    { L"(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0620, 0x2fd0640, indexCPS2_CapAm, 2 },
    { L"(04) Eagle", 0x2fd0640, 0x2fd0660, indexCPS2_CapAm, 3 },
    { L"(05) Not Used", 0x2fd0660, 0x2fd0680, indexCPS2_CapAm, 4 },
    { L"(06) Not Used", 0x2fd0680, 0x2fd06a0, indexCPS2_CapAm, 5 },
    { L"(07) Not Used", 0x2fd06a0, 0x2fd06c0, indexCPS2_CapAm, 6 },
    { L"(08) Not Used", 0x2fd06c0, 0x2fd06e0, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_HK[] =
{
    { L"Main Color HK", 0x2fd06e0, 0x2fd0700, indexCPS2_CapAm, 0, &pairNext },
    { L"(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0700, 0x2fd0720, indexCPS2_CapAm, 1 },
    { L"(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0720, 0x2fd0740, indexCPS2_CapAm, 2 },
    { L"(04) Eagle", 0x2fd0740, 0x2fd0760, indexCPS2_CapAm, 3 },
    { L"(05) Not Used", 0x2fd0760, 0x2fd0780, indexCPS2_CapAm, 4 },
    { L"(06) Not Used", 0x2fd0780, 0x2fd07a0, indexCPS2_CapAm, 5 },
    { L"(07) Not Used", 0x2fd07a0, 0x2fd07c0, indexCPS2_CapAm, 6 },
    { L"(08) Not Used", 0x2fd07c0, 0x2fd07e0, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_A1[] =
{
    { L"Main Color A1", 0x2fd07e0, 0x2fd0800, indexCPS2_CapAm, 0, &pairNext },
    { L"(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0800, 0x2fd0820, indexCPS2_CapAm, 1 },
    { L"(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0820, 0x2fd0840, indexCPS2_CapAm, 2 },
    { L"(04) Eagle", 0x2fd0840, 0x2fd0860, indexCPS2_CapAm, 3 },
    { L"(05) Not Used", 0x2fd0860, 0x2fd0880, indexCPS2_CapAm, 4 },
    { L"(06) Not Used", 0x2fd0880, 0x2fd08a0, indexCPS2_CapAm, 5 },
    { L"(07) Not Used", 0x2fd08a0, 0x2fd08c0, indexCPS2_CapAm, 6 },
    { L"(08) Not Used", 0x2fd08c0, 0x2fd08e0, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_A2[] =
{
    { L"Main Color A2", 0x2fd08e0, 0x2fd0900, indexCPS2_CapAm, 0, &pairNext },
    { L"(02) ID: 01-06 - Shield's Star ID: 07-14 - Shield", 0x2fd0900, 0x2fd0920, indexCPS2_CapAm, 1 },
    { L"(03) ID: 01-09 - Shield Slash (effect) / Super Charging Stars (effect) ID: 10-16 Super Stars and Stripes (effect)", 0x2fd0920, 0x2fd0940, indexCPS2_CapAm, 2 },
    { L"(04) Eagle", 0x2fd0940, 0x2fd0960, indexCPS2_CapAm, 3 },
    { L"(05) Not Used", 0x2fd0960, 0x2fd0980, indexCPS2_CapAm, 4 },
    { L"(06) Not Used", 0x2fd0980, 0x2fd09a0, indexCPS2_CapAm, 5 },
    { L"(07) Not Used", 0x2fd09a0, 0x2fd09c0, indexCPS2_CapAm, 6 },
    { L"(08) Not Used", 0x2fd09c0, 0x2fd09e0, indexCPS2_CapAm, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINAMERICA_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x2fd09e0, 0x2fd0a00, indexCPS2_CapAm, 0, &pairNext },
    { L"Burning Dark 2", 0x2fd0a00, 0x2fd0a20, indexCPS2_CapAm, 1 },
    { L"Burning Light", 0x2fd0a20, 0x2fd0a40, indexCPS2_CapAm, 0, &pairNext },
    { L"Burning Light 2", 0x2fd0a40, 0x2fd0a60, indexCPS2_CapAm, 1 },
    { L"Shocked Dark", 0x2fd0a60, 0x2fd0a80, indexCPS2_CapAm, 0, &pairNext },
    { L"Shocked Dark 2", 0x2fd0a80, 0x2fd0aa0, indexCPS2_CapAm, 1 },
    { L"Shocked Light", 0x2fd0aa0, 0x2fd0ac0, indexCPS2_CapAm, 0, &pairNext },
    { L"Shocked Light 2", 0x2fd0ac0, 0x2fd0ae0, indexCPS2_CapAm, 1 },
    { L"Dark Burning Dark", 0x2fd0ae0, 0x2fd0b00, indexCPS2_CapAm, 0, &pairNext },
    { L"Dark Burning Dark 2", 0x2fd0b00, 0x2fd0b20, indexCPS2_CapAm, 1 },
    { L"Dark Burning Light", 0x2fd0b20, 0x2fd0b40, indexCPS2_CapAm, 0, &pairNext },
    { L"Dark Burning Light 2", 0x2fd0b40, 0x2fd0b60, indexCPS2_CapAm, 1 },
    { L"Kinetic Charge Dark", 0x2fd0b60, 0x2fd0b80, indexCPS2_CapAm, 0, &pairNext },
    { L"Kinetic Charge Dark 2", 0x2fd0b80, 0x2fd0ba0, indexCPS2_CapAm, 1 },
    { L"Kinetic Charge Light", 0x2fd0ba0, 0x2fd0bc0, indexCPS2_CapAm, 0, &pairNext },
    { L"Kinetic Charge Light 2", 0x2fd0bc0, 0x2fd0be0, indexCPS2_CapAm, 1 },
};

const sDescTreeNode MVC2_A_CAPTAINAMERICA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_LP, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_LK, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_HP, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_HK, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_A1, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_A2, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CAPTAINAMERICA_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x30ae9c0, 0x30ae9e0, indexCPS2_Spidey, 0 },
    { L"(02) Taunt Balloon", 0x30ae9e0, 0x30aea00, indexCPS2_Spidey, 1 },
    { L"(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aea00, 0x30aea20, indexCPS2_Spidey, 2 },
    { L"(04) Not Used", 0x30aea20, 0x30aea40, indexCPS2_Spidey, 3 },
    { L"(05) Not Used", 0x30aea40, 0x30aea60, indexCPS2_Spidey, 4 },
    { L"(06) Not Used", 0x30aea60, 0x30aea80, indexCPS2_Spidey, 5 },
    { L"(07) Not Used", 0x30aea80, 0x30aeaa0, indexCPS2_Spidey, 0 },
    { L"(08) Not Used", 0x30aeaa0, 0x30aeac0, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x30aeac0, 0x30aeae0, indexCPS2_Spidey, 0 },
    { L"(02) Taunt Balloon", 0x30aeae0, 0x30aeb00, indexCPS2_Spidey, 1 },
    { L"(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aeb00, 0x30aeb20, indexCPS2_Spidey, 2 },
    { L"(04) Not Used", 0x30aeb20, 0x30aeb40, indexCPS2_Spidey, 3 },
    { L"(05) Not Used", 0x30aeb40, 0x30aeb60, indexCPS2_Spidey, 4 },
    { L"(06) Not Used", 0x30aeb60, 0x30aeb80, indexCPS2_Spidey, 5 },
    { L"(07) Not Used", 0x30aeb80, 0x30aeba0, indexCPS2_Spidey, 0 },
    { L"(08) Not Used", 0x30aeba0, 0x30aebc0, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x30aebc0, 0x30aebe0, indexCPS2_Spidey, 0 },
    { L"(02) Taunt Balloon", 0x30aebe0, 0x30aec00, indexCPS2_Spidey, 1 },
    { L"(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aec00, 0x30aec20, indexCPS2_Spidey, 2 },
    { L"(04) Not Used", 0x30aec20, 0x30aec40, indexCPS2_Spidey, 3 },
    { L"(05) Not Used", 0x30aec40, 0x30aec60, indexCPS2_Spidey, 4 },
    { L"(06) Not Used", 0x30aec60, 0x30aec80, indexCPS2_Spidey, 5 },
    { L"(07) Not Used", 0x30aec80, 0x30aeca0, indexCPS2_Spidey, 0 },
    { L"(08) Not Used", 0x30aeca0, 0x30aecc0, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x30aecc0, 0x30aece0, indexCPS2_Spidey, 0 },
    { L"(02) Taunt Balloon", 0x30aece0, 0x30aed00, indexCPS2_Spidey, 1 },
    { L"(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aed00, 0x30aed20, indexCPS2_Spidey, 2 },
    { L"(04) Not Used", 0x30aed20, 0x30aed40, indexCPS2_Spidey, 3 },
    { L"(05) Not Used", 0x30aed40, 0x30aed60, indexCPS2_Spidey, 4 },
    { L"(06) Not Used", 0x30aed60, 0x30aed80, indexCPS2_Spidey, 5 },
    { L"(07) Not Used", 0x30aed80, 0x30aeda0, indexCPS2_Spidey, 0 },
    { L"(08) Not Used", 0x30aeda0, 0x30aedc0, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x30aedc0, 0x30aede0, indexCPS2_Spidey, 0 },
    { L"(02) Taunt Balloon", 0x30aede0, 0x30aee00, indexCPS2_Spidey, 1 },
    { L"(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aee00, 0x30aee20, indexCPS2_Spidey, 2 },
    { L"(04) Not Used", 0x30aee20, 0x30aee40, indexCPS2_Spidey, 3 },
    { L"(05) Not Used", 0x30aee40, 0x30aee60, indexCPS2_Spidey, 4 },
    { L"(06) Not Used", 0x30aee60, 0x30aee80, indexCPS2_Spidey, 5 },
    { L"(07) Not Used", 0x30aee80, 0x30aeea0, indexCPS2_Spidey, 0 },
    { L"(08) Not Used", 0x30aeea0, 0x30aeec0, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x30aeec0, 0x30aeee0, indexCPS2_Spidey, 0 },
    { L"(02) Taunt Balloon", 0x30aeee0, 0x30aef00, indexCPS2_Spidey, 1 },
    { L"(03) ID: 01-03 Spider-sense Intro ID:04-07 Winpose (camera) ID: 08-15 Webs", 0x30aef00, 0x30aef20, indexCPS2_Spidey, 2 },
    { L"(04) Not Used", 0x30aef20, 0x30aef40, indexCPS2_Spidey, 3 },
    { L"(05) Not Used", 0x30aef40, 0x30aef60, indexCPS2_Spidey, 4 },
    { L"(06) Not Used", 0x30aef60, 0x30aef80, indexCPS2_Spidey, 5 },
    { L"(07) Not Used", 0x30aef80, 0x30aefa0, indexCPS2_Spidey, 0 },
    { L"(08) Not Used", 0x30aefa0, 0x30aefc0, indexCPS2_Spidey, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x30aefc0, 0x30aefe0, indexCPS2_Spidey, 0 },
    { L"Burning Light", 0x30aefe0, 0x30af000, indexCPS2_Spidey, 0 },
    { L"Shocked Dark", 0x30af000, 0x30af020, indexCPS2_Spidey, 0 },
    { L"Shocked Light", 0x30af020, 0x30af040, indexCPS2_Spidey, 0 },
    { L"Dark Burning Dark", 0x30af040, 0x30af060, indexCPS2_Spidey, 0 },
    { L"Dark Burning Light", 0x30af060, 0x30af080, indexCPS2_Spidey, 0 },
    { L"Kinetic Charge Dark", 0x30af080, 0x30af0a0, indexCPS2_Spidey, 0 },
    { L"Kinetic Charge Light", 0x30af0a0, 0x30af0c0, indexCPS2_Spidey, 0 },
};

const sGame_PaletteDataset MVC2_A_SPIDERMAN_PALETTES_EXTRAS[] =
{
    { L"09: LP Intro - Frame 1", 0x30af0c0, 0x30af0e0, indexCPS2_Spidey, 11 },
    { L"0a: LP Intro - Frame 2", 0x30af0e0, 0x30af100, indexCPS2_Spidey, 11 },
    { L"0b: LP Intro - Frame 3", 0x30af100, 0x30af120, indexCPS2_Spidey, 11 },
    { L"0c: LP Intro - Frame 4", 0x30af120, 0x30af140, indexCPS2_Spidey, 11 },
    { L"0d: LP Intro - Frame 5", 0x30af140, 0x30af160, indexCPS2_Spidey, 11 },
    { L"0e: LP Intro - Frame 6", 0x30af160, 0x30af180, indexCPS2_Spidey, 11 },
    { L"0f: LP Intro - Frame 7", 0x30af180, 0x30af1a0, indexCPS2_Spidey, 11 },
    { L"10: LP Intro - Frame 8", 0x30af1a0, 0x30af1c0, indexCPS2_Spidey, 11 },
    { L"11: Spider symbol", 0x30af1c0, 0x30af1e0, indexCPS2_Spidey, 12 },
    { L"12: Spider symbol + taunt", 0x30af1e0, 0x30af200, indexCPS2_Spidey, 13 },
    { L"13: HEY!", 0x30af200, 0x30af220, indexCPS2_Spidey, 14 },
    { L"14: Do your job!", 0x30af220, 0x30af240, indexCPS2_Spidey, 15 },
    { L"15: Not Used", 0x30af240, 0x30af260 },
    { L"16: Not Used", 0x30af260, 0x30af280 },
    { L"17: Not Used", 0x30af280, 0x30af2a0 },
    { L"18: Not Used", 0x30af2a0, 0x30af2c0 },
    { L"19: LK Intro - Frame 1", 0x30af2c0, 0x30af2e0, indexCPS2_Spidey, 11 },
    { L"1a: LK Intro - Frame 2", 0x30af2e0, 0x30af300, indexCPS2_Spidey, 11 },
    { L"1b: LK Intro - Frame 3", 0x30af300, 0x30af320, indexCPS2_Spidey, 11 },
    { L"1c: LK Intro - Frame 4", 0x30af320, 0x30af340, indexCPS2_Spidey, 11 },
    { L"1d: LK Intro - Frame 5", 0x30af340, 0x30af360, indexCPS2_Spidey, 11 },
    { L"1e: LK Intro - Frame 6", 0x30af360, 0x30af380, indexCPS2_Spidey, 11 },
    { L"1f: LK Intro - Frame 7", 0x30af380, 0x30af3a0, indexCPS2_Spidey, 11 },
    { L"20: LK Intro - Frame 8", 0x30af3a0, 0x30af3c0, indexCPS2_Spidey, 11 },
    { L"21: Spider symbol", 0x30af3c0, 0x30af3e0, indexCPS2_Spidey, 12 },
    { L"22: Spider symbol + taunt", 0x30af3e0, 0x30af400, indexCPS2_Spidey, 13 },
    { L"23: HEY!", 0x30af400, 0x30af420, indexCPS2_Spidey, 14 },
    { L"24: Do your job!", 0x30af420, 0x30af440, indexCPS2_Spidey, 15 },
    { L"25: Not Used", 0x30af440, 0x30af460 },
    { L"26: Not Used", 0x30af460, 0x30af480 },
    { L"27: Not Used", 0x30af480, 0x30af4a0 },
    { L"28: Not Used", 0x30af4a0, 0x30af4c0 },
    { L"29: HP Intro - Frame 1", 0x30af4c0, 0x30af4e0, indexCPS2_Spidey, 11 },
    { L"2a: HP Intro - Frame 2", 0x30af4e0, 0x30af500, indexCPS2_Spidey, 11 },
    { L"2b: HP Intro - Frame 3", 0x30af500, 0x30af520, indexCPS2_Spidey, 11 },
    { L"2c: HP Intro - Frame 4", 0x30af520, 0x30af540, indexCPS2_Spidey, 11 },
    { L"2d: HP Intro - Frame 5", 0x30af540, 0x30af560, indexCPS2_Spidey, 11 },
    { L"2e: HP Intro - Frame 6", 0x30af560, 0x30af580, indexCPS2_Spidey, 11 },
    { L"2f: HP Intro - Frame 7", 0x30af580, 0x30af5a0, indexCPS2_Spidey, 11 },
    { L"30: HP Intro - Frame 8", 0x30af5a0, 0x30af5c0, indexCPS2_Spidey, 11 },
    { L"31: Spider symbol", 0x30af5c0, 0x30af5e0, indexCPS2_Spidey, 12 },
    { L"32: Spider symbol + taunt", 0x30af5e0, 0x30af600, indexCPS2_Spidey, 13 },
    { L"33: HEY!", 0x30af600, 0x30af620, indexCPS2_Spidey, 14 },
    { L"34: Do your job!", 0x30af620, 0x30af640, indexCPS2_Spidey, 15 },
    { L"35: Not Used", 0x30af640, 0x30af660 },
    { L"36: Not Used", 0x30af660, 0x30af680 },
    { L"37: Not Used", 0x30af680, 0x30af6a0 },
    { L"38: Not Used", 0x30af6a0, 0x30af6c0 },
    { L"39: HK Intro - Frame 1", 0x30af6c0, 0x30af6e0, indexCPS2_Spidey, 11 },
    { L"3a: HK Intro - Frame 2", 0x30af6e0, 0x30af700, indexCPS2_Spidey, 11 },
    { L"3b: HK Intro - Frame 3", 0x30af700, 0x30af720, indexCPS2_Spidey, 11 },
    { L"3c: HK Intro - Frame 4", 0x30af720, 0x30af740, indexCPS2_Spidey, 11 },
    { L"3d: HK Intro - Frame 5", 0x30af740, 0x30af760, indexCPS2_Spidey, 11 },
    { L"3e: HK Intro - Frame 6", 0x30af760, 0x30af780, indexCPS2_Spidey, 11 },
    { L"3f: HK Intro - Frame 7", 0x30af780, 0x30af7a0, indexCPS2_Spidey, 11 },
    { L"40: HK Intro - Frame 8", 0x30af7a0, 0x30af7c0, indexCPS2_Spidey, 11 },
    { L"41: Spider symbol", 0x30af7c0, 0x30af7e0, indexCPS2_Spidey, 12 },
    { L"42: Spider symbol + taunt", 0x30af7e0, 0x30af800, indexCPS2_Spidey, 13 },
    { L"43: HEY!", 0x30af800, 0x30af820, indexCPS2_Spidey, 14 },
    { L"44: Do your job!", 0x30af820, 0x30af840, indexCPS2_Spidey, 15 },
    { L"45: Not Used", 0x30af840, 0x30af860 },
    { L"46: Not Used", 0x30af860, 0x30af880 },
    { L"47: Not Used", 0x30af880, 0x30af8a0 },
    { L"48: Not Used", 0x30af8a0, 0x30af8c0 },
    { L"49: A1 Intro - Frame 1", 0x30af8c0, 0x30af8e0, indexCPS2_Spidey, 11 },
    { L"4a: A1 Intro - Frame 2", 0x30af8e0, 0x30af900, indexCPS2_Spidey, 11 },
    { L"4b: A1 Intro - Frame 3", 0x30af900, 0x30af920, indexCPS2_Spidey, 11 },
    { L"4c: A1 Intro - Frame 4", 0x30af920, 0x30af940, indexCPS2_Spidey, 11 },
    { L"4d: A1 Intro - Frame 5", 0x30af940, 0x30af960, indexCPS2_Spidey, 11 },
    { L"4e: A1 Intro - Frame 6", 0x30af960, 0x30af980, indexCPS2_Spidey, 11 },
    { L"4f: A1 Intro - Frame 7", 0x30af980, 0x30af9a0, indexCPS2_Spidey, 11 },
    { L"50: A1 Intro - Frame 8", 0x30af9a0, 0x30af9c0, indexCPS2_Spidey, 11 },
    { L"51: Spider symbol", 0x30af9c0, 0x30af9e0, indexCPS2_Spidey, 12 },
    { L"52: Spider symbol + taunt", 0x30af9e0, 0x30afa00, indexCPS2_Spidey, 13 },
    { L"53: HEY!", 0x30afa00, 0x30afa20, indexCPS2_Spidey, 14 },
    { L"54: Do your job!", 0x30afa20, 0x30afa40, indexCPS2_Spidey, 15 },
    { L"55: Not Used", 0x30afa40, 0x30afa60 },
    { L"56: Not Used", 0x30afa60, 0x30afa80 },
    { L"57: Not Used", 0x30afa80, 0x30afaa0 },
    { L"58: Not Used", 0x30afaa0, 0x30afac0 },
    { L"59: A2 Intro - Frame 1", 0x30afac0, 0x30afae0, indexCPS2_Spidey, 11 },
    { L"5a: A2 Intro - Frame 2", 0x30afae0, 0x30afb00, indexCPS2_Spidey, 11 },
    { L"5b: A2 Intro - Frame 3", 0x30afb00, 0x30afb20, indexCPS2_Spidey, 11 },
    { L"5c: A2 Intro - Frame 4", 0x30afb20, 0x30afb40, indexCPS2_Spidey, 11 },
    { L"5d: A2 Intro - Frame 5", 0x30afb40, 0x30afb60, indexCPS2_Spidey, 11 },
    { L"5e: A2 Intro - Frame 6", 0x30afb60, 0x30afb80, indexCPS2_Spidey, 11 },
    { L"5f: A2 Intro - Frame 7", 0x30afb80, 0x30afba0, indexCPS2_Spidey, 11 },
    { L"60: A2 Intro - Frame 8", 0x30afba0, 0x30afbc0, indexCPS2_Spidey, 11 },
    { L"61: Spider symbol", 0x30afbc0, 0x30afbe0, indexCPS2_Spidey, 12 },
    { L"62: Spider symbol + taunt", 0x30afbe0, 0x30afc00, indexCPS2_Spidey, 13 },
    { L"63: HEY!", 0x30afc00, 0x30afc20, indexCPS2_Spidey, 14 },
    { L"64: Do your job!", 0x30afc20, 0x30afc40, indexCPS2_Spidey, 15 },
};

const sDescTreeNode MVC2_A_SPIDERMAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SPIDERMAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_LP[] =
{
    { L"Main Color LP", 0x31c9400, 0x31c9420, indexCPS2_Hulk, 0 },
    { L"(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9420, 0x31c9440, indexCPS2_Hulk, 1 },
    { L"(03) Gamma Quake", 0x31c9440, 0x31c9460, indexCPS2_Hulk, 2 },
    { L"(04) Gamma Crush (Meteor)", 0x31c9460, 0x31c9480, indexCPS2_Hulk, 3 },
    { L"(05) Not Used", 0x31c9480, 0x31c94a0, indexCPS2_Hulk, 4 },
    { L"(06) Not Used", 0x31c94a0, 0x31c94c0, indexCPS2_Hulk, 5 },
    { L"(07) Not Used", 0x31c94c0, 0x31c94e0, indexCPS2_Hulk, 0 },
    { L"(08) Not Used", 0x31c94e0, 0x31c9500, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_LK[] =
{
    { L"Main Color LK", 0x31c9500, 0x31c9520, indexCPS2_Hulk, 0 },
    { L"(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9520, 0x31c9540, indexCPS2_Hulk, 1 },
    { L"(03) Gamma Quake", 0x31c9540, 0x31c9560, indexCPS2_Hulk, 2 },
    { L"(04) Gamma Crush (Meteor)", 0x31c9560, 0x31c9580, indexCPS2_Hulk, 3 },
    { L"(05) Not Used", 0x31c9580, 0x31c95a0, indexCPS2_Hulk, 4 },
    { L"(06) Not Used", 0x31c95a0, 0x31c95c0, indexCPS2_Hulk, 5 },
    { L"(07) Not Used", 0x31c95c0, 0x31c95e0, indexCPS2_Hulk, 0 },
    { L"(08) Not Used", 0x31c95e0, 0x31c9600, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_HP[] =
{
    { L"Main Color HP", 0x31c9600, 0x31c9620, indexCPS2_Hulk, 0 },
    { L"(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9620, 0x31c9640, indexCPS2_Hulk, 1 },
    { L"(03) Gamma Quake", 0x31c9640, 0x31c9660, indexCPS2_Hulk, 2 },
    { L"(04) Gamma Crush (Meteor)", 0x31c9660, 0x31c9680, indexCPS2_Hulk, 3 },
    { L"(05) Not Used", 0x31c9680, 0x31c96a0, indexCPS2_Hulk, 4 },
    { L"(06) Not Used", 0x31c96a0, 0x31c96c0, indexCPS2_Hulk, 5 },
    { L"(07) Not Used", 0x31c96c0, 0x31c96e0, indexCPS2_Hulk, 0 },
    { L"(08) Not Used", 0x31c96e0, 0x31c9700, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_HK[] =
{
    { L"Main Color HK", 0x31c9700, 0x31c9720, indexCPS2_Hulk, 0 },
    { L"(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9720, 0x31c9740, indexCPS2_Hulk, 1 },
    { L"(03) Gamma Quake", 0x31c9740, 0x31c9760, indexCPS2_Hulk, 2 },
    { L"(04) Gamma Crush (Meteor)", 0x31c9760, 0x31c9780, indexCPS2_Hulk, 3 },
    { L"(05) Not Used", 0x31c9780, 0x31c97a0, indexCPS2_Hulk, 4 },
    { L"(06) Not Used", 0x31c97a0, 0x31c97c0, indexCPS2_Hulk, 5 },
    { L"(07) Not Used", 0x31c97c0, 0x31c97e0, indexCPS2_Hulk, 0 },
    { L"(08) Not Used", 0x31c97e0, 0x31c9800, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_A1[] =
{
    { L"Main Color A1", 0x31c9800, 0x31c9820, indexCPS2_Hulk, 0 },
    { L"(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9820, 0x31c9840, indexCPS2_Hulk, 1 },
    { L"(03) Gamma Quake", 0x31c9840, 0x31c9860, indexCPS2_Hulk, 2 },
    { L"(04) Gamma Crush (Meteor)", 0x31c9860, 0x31c9880, indexCPS2_Hulk, 3 },
    { L"(05) Not Used", 0x31c9880, 0x31c98a0, indexCPS2_Hulk, 4 },
    { L"(06) Not Used", 0x31c98a0, 0x31c98c0, indexCPS2_Hulk, 5 },
    { L"(07) Not Used", 0x31c98c0, 0x31c98e0, indexCPS2_Hulk, 0 },
    { L"(08) Not Used", 0x31c98e0, 0x31c9900, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_A2[] =
{
    { L"Main Color A2", 0x31c9900, 0x31c9920, indexCPS2_Hulk, 0 },
    { L"(02) j.FP (effect) / Gamma Charge (effect)", 0x31c9920, 0x31c9940, indexCPS2_Hulk, 1 },
    { L"(03) Gamma Quake", 0x31c9940, 0x31c9960, indexCPS2_Hulk, 2 },
    { L"(04) Gamma Crush (Meteor)", 0x31c9960, 0x31c9980, indexCPS2_Hulk, 3 },
    { L"(05) Not Used", 0x31c9980, 0x31c99a0, indexCPS2_Hulk, 4 },
    { L"(06) Not Used", 0x31c99a0, 0x31c99c0, indexCPS2_Hulk, 5 },
    { L"(07) Not Used", 0x31c99c0, 0x31c99e0, indexCPS2_Hulk, 0 },
    { L"(08) Not Used", 0x31c99e0, 0x31c9a00, indexCPS2_Hulk, 7 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x31c9a00, 0x31c9a20, indexCPS2_Hulk, 0 },
    { L"Burning Light", 0x31c9a20, 0x31c9a40, indexCPS2_Hulk, 0 },
    { L"Shocked Dark", 0x31c9a40, 0x31c9a60, indexCPS2_Hulk, 0 },
    { L"Shocked Light", 0x31c9a60, 0x31c9a80, indexCPS2_Hulk, 0 },
    { L"Dark Burning Dark", 0x31c9a80, 0x31c9aa0, indexCPS2_Hulk, 0 },
    { L"Dark Burning Light", 0x31c9aa0, 0x31c9ac0, indexCPS2_Hulk, 0 },
    { L"Kinetic Charge Dark", 0x31c9ac0, 0x31c9ae0, indexCPS2_Hulk, 0 },
    { L"Kinetic Charge Light", 0x31c9ae0, 0x31c9b00, indexCPS2_Hulk, 0 },
};

const sGame_PaletteDataset MVC2_A_HULK_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x31c9b00, 0x31c9b20 },
    { L"0a: Gamma Crush (Meteor Pieces)", 0x31c9b20, 0x31c9b40, indexCPS2_Hulk, 11 },
};

const sDescTreeNode MVC2_A_HULK_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_LP, ARRAYSIZE(MVC2_A_HULK_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_LK, ARRAYSIZE(MVC2_A_HULK_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_HP, ARRAYSIZE(MVC2_A_HULK_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_HK, ARRAYSIZE(MVC2_A_HULK_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_A1, ARRAYSIZE(MVC2_A_HULK_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_A2, ARRAYSIZE(MVC2_A_HULK_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_SHARED, ARRAYSIZE(MVC2_A_HULK_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_HULK_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_LP[] =
{
    { L"Main Color LP", 0x32ed120, 0x32ed140, indexCPS2_Venom, 0 },
    { L"(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed140, 0x32ed160, indexCPS2_Venom, 1 },
    { L"(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed160, 0x32ed180, indexCPS2_Venom, 2 },
    { L"(04) Not Used", 0x32ed180, 0x32ed1a0, indexCPS2_Venom, 3 },
    { L"(05) Not Used", 0x32ed1a0, 0x32ed1c0, indexCPS2_Venom, 4 },
    { L"(06) Not Used", 0x32ed1c0, 0x32ed1e0, indexCPS2_Venom, 5 },
    { L"(07) Not Used", 0x32ed1e0, 0x32ed200, indexCPS2_Venom, 6 },
    { L"(08) Not Used", 0x32ed200, 0x32ed220, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_LK[] =
{
    { L"Main Color LK", 0x32ed220, 0x32ed240, indexCPS2_Venom, 0 },
    { L"(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed240, 0x32ed260, indexCPS2_Venom, 1 },
    { L"(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed260, 0x32ed280, indexCPS2_Venom, 2 },
    { L"(04) Not Used", 0x32ed280, 0x32ed2a0, indexCPS2_Venom, 3 },
    { L"(05) Not Used", 0x32ed2a0, 0x32ed2c0, indexCPS2_Venom, 4 },
    { L"(06) Not Used", 0x32ed2c0, 0x32ed2e0, indexCPS2_Venom, 5 },
    { L"(07) Not Used", 0x32ed2e0, 0x32ed300, indexCPS2_Venom, 6 },
    { L"(08) Not Used", 0x32ed300, 0x32ed320, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_HP[] =
{
    { L"Main Color HP", 0x32ed320, 0x32ed340, indexCPS2_Venom, 0 },
    { L"(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed340, 0x32ed360, indexCPS2_Venom, 1 },
    { L"(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed360, 0x32ed380, indexCPS2_Venom, 2 },
    { L"(04) Not Used", 0x32ed380, 0x32ed3a0, indexCPS2_Venom, 3 },
    { L"(05) Not Used", 0x32ed3a0, 0x32ed3c0, indexCPS2_Venom, 4 },
    { L"(06) Not Used", 0x32ed3c0, 0x32ed3e0, indexCPS2_Venom, 5 },
    { L"(07) Not Used", 0x32ed3e0, 0x32ed400, indexCPS2_Venom, 6 },
    { L"(08) Not Used", 0x32ed400, 0x32ed420, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_HK[] =
{
    { L"Main Color HK", 0x32ed420, 0x32ed440, indexCPS2_Venom, 0 },
    { L"(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed440, 0x32ed460, indexCPS2_Venom, 1 },
    { L"(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed460, 0x32ed480, indexCPS2_Venom, 2 },
    { L"(04) Not Used", 0x32ed480, 0x32ed4a0, indexCPS2_Venom, 3 },
    { L"(05) Not Used", 0x32ed4a0, 0x32ed4c0, indexCPS2_Venom, 4 },
    { L"(06) Not Used", 0x32ed4c0, 0x32ed4e0, indexCPS2_Venom, 5 },
    { L"(07) Not Used", 0x32ed4e0, 0x32ed500, indexCPS2_Venom, 6 },
    { L"(08) Not Used", 0x32ed500, 0x32ed520, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_A1[] =
{
    { L"Main Color A1", 0x32ed520, 0x32ed540, indexCPS2_Venom, 0 },
    { L"(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed540, 0x32ed560, indexCPS2_Venom, 1 },
    { L"(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed560, 0x32ed580, indexCPS2_Venom, 2 },
    { L"(04) Not Used", 0x32ed580, 0x32ed5a0, indexCPS2_Venom, 3 },
    { L"(05) Not Used", 0x32ed5a0, 0x32ed5c0, indexCPS2_Venom, 4 },
    { L"(06) Not Used", 0x32ed5c0, 0x32ed5e0, indexCPS2_Venom, 5 },
    { L"(07) Not Used", 0x32ed5e0, 0x32ed600, indexCPS2_Venom, 6 },
    { L"(08) Not Used", 0x32ed600, 0x32ed620, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_A2[] =
{
    { L"Main Color A2", 0x32ed620, 0x32ed640, indexCPS2_Venom, 0 },
    { L"(02) ID:01-09 Taunt (Eddie Brock's Face) ID:10-15 Taunt (Ballon & Letters)", 0x32ed640, 0x32ed660, indexCPS2_Venom, 1 },
    { L"(03) ID:01-07 s.MP (Launcher - Effect) ID:08-15 Webs", 0x32ed660, 0x32ed680, indexCPS2_Venom, 2 },
    { L"(04) Not Used", 0x32ed680, 0x32ed6a0, indexCPS2_Venom, 3 },
    { L"(05) Not Used", 0x32ed6a0, 0x32ed6c0, indexCPS2_Venom, 4 },
    { L"(06) Not Used", 0x32ed6c0, 0x32ed6e0, indexCPS2_Venom, 5 },
    { L"(07) Not Used", 0x32ed6e0, 0x32ed700, indexCPS2_Venom, 6 },
    { L"(08) Not Used", 0x32ed700, 0x32ed720, indexCPS2_Venom, 7 },
};

const sGame_PaletteDataset MVC2_A_VENOM_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x32ed720, 0x32ed740, indexCPS2_Venom, 0 },
    { L"Burning Light", 0x32ed740, 0x32ed760, indexCPS2_Venom, 0 },
    { L"Shocked Dark", 0x32ed760, 0x32ed780, indexCPS2_Venom, 0 },
    { L"Shocked Light", 0x32ed780, 0x32ed7a0, indexCPS2_Venom, 0 },
    { L"Dark Burning Dark", 0x32ed7a0, 0x32ed7c0, indexCPS2_Venom, 0 },
    { L"Dark Burning Light", 0x32ed7c0, 0x32ed7e0, indexCPS2_Venom, 0 },
    { L"Kinetic Charge Dark", 0x32ed7e0, 0x32ed800, indexCPS2_Venom, 0 },
    { L"Kinetic Charge Light", 0x32ed800, 0x32ed820, indexCPS2_Venom, 0 },
};

const sDescTreeNode MVC2_A_VENOM_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_LP, ARRAYSIZE(MVC2_A_VENOM_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_LK, ARRAYSIZE(MVC2_A_VENOM_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_HP, ARRAYSIZE(MVC2_A_VENOM_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_HK, ARRAYSIZE(MVC2_A_VENOM_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_A1, ARRAYSIZE(MVC2_A_VENOM_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_A2, ARRAYSIZE(MVC2_A_VENOM_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_VENOM_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_LP[] =
{
    { L"Main Color LP", 0x33ffa40, 0x33ffa60, indexCPS2_DrDoom, 0 },
    { L"(02) FP, c.FP", 0x33ffa60, 0x33ffa80, indexCPS2_DrDoom, 1 },
    { L"(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffa80, 0x33ffaa0, indexCPS2_DrDoom, 2 },
    { L"(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffaa0, 0x33ffac0, indexCPS2_DrDoom, 3 },
    { L"(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffac0, 0x33ffae0, indexCPS2_DrDoom, 4 },
    { L"(06) Not Used", 0x33ffae0, 0x33ffb00, indexCPS2_DrDoom, 5 },
    { L"(07) Not Used", 0x33ffb00, 0x33ffb20, indexCPS2_DrDoom, 6 },
    { L"(08) Not Used", 0x33ffb20, 0x33ffb40, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_LK[] =
{
    { L"Main Color LK", 0x33ffb40, 0x33ffb60, indexCPS2_DrDoom, 0 },
    { L"(02) FP, c.FP", 0x33ffb60, 0x33ffb80, indexCPS2_DrDoom, 1 },
    { L"(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffb80, 0x33ffba0, indexCPS2_DrDoom, 2 },
    { L"(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffba0, 0x33ffbc0, indexCPS2_DrDoom, 3 },
    { L"(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffbc0, 0x33ffbe0, indexCPS2_DrDoom, 4 },
    { L"(06) Not Used", 0x33ffbe0, 0x33ffc00, indexCPS2_DrDoom, 5 },
    { L"(07) Not Used", 0x33ffc00, 0x33ffc20, indexCPS2_DrDoom, 6 },
    { L"(08) Not Used", 0x33ffc20, 0x33ffc40, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_HP[] =
{
    { L"Main Color HP", 0x33ffc40, 0x33ffc60, indexCPS2_DrDoom, 0 },
    { L"(02) FP, c.FP", 0x33ffc60, 0x33ffc80, indexCPS2_DrDoom, 1 },
    { L"(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffc80, 0x33ffca0, indexCPS2_DrDoom, 2 },
    { L"(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffca0, 0x33ffcc0, indexCPS2_DrDoom, 3 },
    { L"(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffcc0, 0x33ffce0, indexCPS2_DrDoom, 4 },
    { L"(06) Not Used", 0x33ffce0, 0x33ffd00, indexCPS2_DrDoom, 5 },
    { L"(07) Not Used", 0x33ffd00, 0x33ffd20, indexCPS2_DrDoom, 6 },
    { L"(08) Not Used", 0x33ffd20, 0x33ffd40, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_HK[] =
{
    { L"Main Color HK", 0x33ffd40, 0x33ffd60, indexCPS2_DrDoom, 0 },
    { L"(02) FP, c.FP", 0x33ffd60, 0x33ffd80, indexCPS2_DrDoom, 1 },
    { L"(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffd80, 0x33ffda0, indexCPS2_DrDoom, 2 },
    { L"(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffda0, 0x33ffdc0, indexCPS2_DrDoom, 3 },
    { L"(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffdc0, 0x33ffde0, indexCPS2_DrDoom, 4 },
    { L"(06) Not Used", 0x33ffde0, 0x33ffe00, indexCPS2_DrDoom, 5 },
    { L"(07) Not Used", 0x33ffe00, 0x33ffe20, indexCPS2_DrDoom, 6 },
    { L"(08) Not Used", 0x33ffe20, 0x33ffe40, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_A1[] =
{
    { L"Main Color A1", 0x33ffe40, 0x33ffe60, indexCPS2_DrDoom, 0 },
    { L"(02) FP, c.FP", 0x33ffe60, 0x33ffe80, indexCPS2_DrDoom, 1 },
    { L"(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33ffe80, 0x33ffea0, indexCPS2_DrDoom, 2 },
    { L"(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33ffea0, 0x33ffec0, indexCPS2_DrDoom, 3 },
    { L"(05) ID: 01-07 Molecular Shield (rocks)", 0x33ffec0, 0x33ffee0, indexCPS2_DrDoom, 4 },
    { L"(06) Not Used", 0x33ffee0, 0x33fff00, indexCPS2_DrDoom, 5 },
    { L"(07) Not Used", 0x33fff00, 0x33fff20, indexCPS2_DrDoom, 6 },
    { L"(08) Not Used", 0x33fff20, 0x33fff40, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_A2[] =
{
    { L"Main Color A2", 0x33fff40, 0x33fff60, indexCPS2_DrDoom, 0 },
    { L"(02) FP, c.FP", 0x33fff60, 0x33fff80, indexCPS2_DrDoom, 1 },
    { L"(03) ID: 01-08 - Electric Cage ID: 09-15 - Tag-in Taunt (Hand) / s.MP", 0x33fff80, 0x33fffa0, indexCPS2_DrDoom, 2 },
    { L"(04) ID: 01-08 - j.FP (laser) / Photon Beam / Flame Javelin / Rocket Flames ID: 09-15 - Photon shots", 0x33fffa0, 0x33fffc0, indexCPS2_DrDoom, 3 },
    { L"(05) ID: 01-07 Molecular Shield (rocks)", 0x33fffc0, 0x33fffe0, indexCPS2_DrDoom, 4 },
    { L"(06) Not Used", 0x33fffe0, 0x3400000, indexCPS2_DrDoom, 5 },
    { L"(07) Not Used", 0x3400000, 0x3400020, indexCPS2_DrDoom, 6 },
    { L"(08) Not Used", 0x3400020, 0x3400040, indexCPS2_DrDoom, 7 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3400040, 0x3400060, indexCPS2_DrDoom, 0 },
    { L"Burning Light", 0x3400060, 0x3400080, indexCPS2_DrDoom, 0 },
    { L"Shocked Dark", 0x3400080, 0x34000a0, indexCPS2_DrDoom, 0 },
    { L"Shocked Light", 0x34000a0, 0x34000c0, indexCPS2_DrDoom, 0 },
    { L"Dark Burning Dark", 0x34000c0, 0x34000e0, indexCPS2_DrDoom, 0 },
    { L"Dark Burning Light", 0x34000e0, 0x3400100, indexCPS2_DrDoom, 0 },
    { L"Kinetic Charge Dark", 0x3400100, 0x3400120, indexCPS2_DrDoom, 0 },
    { L"Kinetic Charge Light", 0x3400120, 0x3400140, indexCPS2_DrDoom, 0 },
};

const sGame_PaletteDataset MVC2_A_DRDOOM_PALETTES_EXTRAS[] =
{
    { L"09: LP Intro", 0x3400140, 0x3400160, indexCPS2_DrDoom, 11 },
    { L"0a: LP Intro - Chair", 0x3400160, 0x3400180, indexCPS2_DrDoom, 12 },
    { L"0b: LP Intro - Portal", 0x3400180, 0x34001a0, indexCPS2_DrDoom, 13 },
    { L"0c: LP Winpose (butler, chair and minions)", 0x34001a0, 0x34001c0, indexCPS2_DrDoom, 14 },
    { L"0d: Not Used", 0x34001c0, 0x34001e0 },
    { L"0e: Not Used", 0x34001e0, 0x3400200 },
    { L"0f: Not Used", 0x3400200, 0x3400220 },
    { L"10: Not Used", 0x3400220, 0x3400240 },
    { L"11: Not Used", 0x3400240, 0x3400260 },
    { L"12: Not Used", 0x3400260, 0x3400280 },
    { L"13: Not Used", 0x3400280, 0x34002a0 },
    { L"14: Not Used", 0x34002a0, 0x34002c0 },
    { L"15: Not Used", 0x34002c0, 0x34002e0 },
    { L"16: Not Used", 0x34002e0, 0x3400300 },
    { L"17: Not Used", 0x3400300, 0x3400320 },
    { L"18: Not Used", 0x3400320, 0x3400340 },
    { L"19: Not Used", 0x3400340, 0x3400360 },
    { L"1a: Not Used", 0x3400360, 0x3400380 },
    { L"1b: Not Used", 0x3400380, 0x34003a0 },
    { L"1c: Not Used", 0x34003a0, 0x34003c0 },
    { L"1d: Not Used", 0x34003c0, 0x34003e0 },
    { L"1e: Not Used", 0x34003e0, 0x3400400 },
    { L"1f: Not Used", 0x3400400, 0x3400420 },
    { L"20: Not Used", 0x3400420, 0x3400440 },
    { L"21: Not Used", 0x3400440, 0x3400460 },
    { L"22: Not Used", 0x3400460, 0x3400480 },
    { L"23: Not Used", 0x3400480, 0x34004a0 },
    { L"24: Not Used", 0x34004a0, 0x34004c0 },
    { L"25: LK Intro", 0x34004c0, 0x34004e0, indexCPS2_DrDoom, 11 },
    { L"26: LK Intro - Chair", 0x34004e0, 0x3400500, indexCPS2_DrDoom, 12 },
    { L"27: LK Intro - Portal", 0x3400500, 0x3400520, indexCPS2_DrDoom, 13 },
    { L"28: LK Winpose (butler, chair and minions)", 0x3400520, 0x3400540, indexCPS2_DrDoom, 14 },
    { L"29: Not Used", 0x3400540, 0x3400560 },
    { L"2a: Not Used", 0x3400560, 0x3400580 },
    { L"2b: Not Used", 0x3400580, 0x34005a0 },
    { L"2c: Not Used", 0x34005a0, 0x34005c0 },
    { L"2d: Not Used", 0x34005c0, 0x34005e0 },
    { L"2e: Not Used", 0x34005e0, 0x3400600 },
    { L"2f: Not Used", 0x3400600, 0x3400620 },
    { L"30: Not Used", 0x3400620, 0x3400640 },
    { L"31: Not Used", 0x3400640, 0x3400660 },
    { L"32: Not Used", 0x3400660, 0x3400680 },
    { L"33: Not Used", 0x3400680, 0x34006a0 },
    { L"34: Not Used", 0x34006a0, 0x34006c0 },
    { L"35: Not Used", 0x34006c0, 0x34006e0 },
    { L"36: Not Used", 0x34006e0, 0x3400700 },
    { L"37: Not Used", 0x3400700, 0x3400720 },
    { L"38: Not Used", 0x3400720, 0x3400740 },
    { L"39: Not Used", 0x3400740, 0x3400760 },
    { L"3a: Not Used", 0x3400760, 0x3400780 },
    { L"3b: Not Used", 0x3400780, 0x34007a0 },
    { L"3c: Not Used", 0x34007a0, 0x34007c0 },
    { L"3d: Not Used", 0x34007c0, 0x34007e0 },
    { L"3e: Not Used", 0x34007e0, 0x3400800 },
    { L"3f: Not Used", 0x3400800, 0x3400820 },
    { L"40: Not Used", 0x3400820, 0x3400840 },
    { L"41: HP Intro", 0x3400840, 0x3400860, indexCPS2_DrDoom, 11 },
    { L"42: HP Intro - Chair", 0x3400860, 0x3400880, indexCPS2_DrDoom, 12 },
    { L"43: HP Intro - Portal", 0x3400880, 0x34008a0, indexCPS2_DrDoom, 13 },
    { L"44: HP Winpose (butler, chair and minions)", 0x34008a0, 0x34008c0, indexCPS2_DrDoom, 14 },
    { L"45: Not Used", 0x34008c0, 0x34008e0 },
    { L"46: Not Used", 0x34008e0, 0x3400900 },
    { L"47: Not Used", 0x3400900, 0x3400920 },
    { L"48: Not Used", 0x3400920, 0x3400940 },
    { L"49: Not Used", 0x3400940, 0x3400960 },
    { L"4a: Not Used", 0x3400960, 0x3400980 },
    { L"4b: Not Used", 0x3400980, 0x34009a0 },
    { L"4c: Not Used", 0x34009a0, 0x34009c0 },
    { L"4d: Not Used", 0x34009c0, 0x34009e0 },
    { L"4e: Not Used", 0x34009e0, 0x3400a00 },
    { L"4f: Not Used", 0x3400a00, 0x3400a20 },
    { L"50: Not Used", 0x3400a20, 0x3400a40 },
    { L"51: Not Used", 0x3400a40, 0x3400a60 },
    { L"52: Not Used", 0x3400a60, 0x3400a80 },
    { L"53: Not Used", 0x3400a80, 0x3400aa0 },
    { L"54: Not Used", 0x3400aa0, 0x3400ac0 },
    { L"55: Not Used", 0x3400ac0, 0x3400ae0 },
    { L"56: Not Used", 0x3400ae0, 0x3400b00 },
    { L"57: Not Used", 0x3400b00, 0x3400b20 },
    { L"58: Not Used", 0x3400b20, 0x3400b40 },
    { L"59: Not Used", 0x3400b40, 0x3400b60 },
    { L"5a: Not Used", 0x3400b60, 0x3400b80 },
    { L"5b: Not Used", 0x3400b80, 0x3400ba0 },
    { L"5c: Not Used", 0x3400ba0, 0x3400bc0 },
    { L"5d: HK Intro", 0x3400bc0, 0x3400be0, indexCPS2_DrDoom, 11 },
    { L"5e: HK Intro - Chair", 0x3400be0, 0x3400c00, indexCPS2_DrDoom, 12 },
    { L"5f: HK Intro - Portal", 0x3400c00, 0x3400c20, indexCPS2_DrDoom, 13 },
    { L"60: HK Winpose (butler, chair and minions)", 0x3400c20, 0x3400c40, indexCPS2_DrDoom, 14 },
    { L"61: Not Used", 0x3400c40, 0x3400c60 },
    { L"62: Not Used", 0x3400c60, 0x3400c80 },
    { L"63: Not Used", 0x3400c80, 0x3400ca0 },
    { L"64: Not Used", 0x3400ca0, 0x3400cc0 },
    { L"65: Not Used", 0x3400cc0, 0x3400ce0 },
    { L"66: Not Used", 0x3400ce0, 0x3400d00 },
    { L"67: Not Used", 0x3400d00, 0x3400d20 },
    { L"68: Not Used", 0x3400d20, 0x3400d40 },
    { L"69: Not Used", 0x3400d40, 0x3400d60 },
    { L"6a: Not Used", 0x3400d60, 0x3400d80 },
    { L"6b: Not Used", 0x3400d80, 0x3400da0 },
    { L"6c: Not Used", 0x3400da0, 0x3400dc0 },
    { L"6d: Not Used", 0x3400dc0, 0x3400de0 },
    { L"6e: Not Used", 0x3400de0, 0x3400e00 },
    { L"6f: Not Used", 0x3400e00, 0x3400e20 },
    { L"70: Not Used", 0x3400e20, 0x3400e40 },
    { L"71: Not Used", 0x3400e40, 0x3400e60 },
    { L"72: Not Used", 0x3400e60, 0x3400e80 },
    { L"73: Not Used", 0x3400e80, 0x3400ea0 },
    { L"74: Not Used", 0x3400ea0, 0x3400ec0 },
    { L"75: Not Used", 0x3400ec0, 0x3400ee0 },
    { L"76: Not Used", 0x3400ee0, 0x3400f00 },
    { L"77: Not Used", 0x3400f00, 0x3400f20 },
    { L"78: Not Used", 0x3400f20, 0x3400f40 },
    { L"79: A1 Intro", 0x3400f40, 0x3400f60, indexCPS2_DrDoom, 11 },
    { L"7a: A1 Intro - Chair", 0x3400f60, 0x3400f80, indexCPS2_DrDoom, 12 },
    { L"7b: A1 Intro - Portal", 0x3400f80, 0x3400fa0, indexCPS2_DrDoom, 13 },
    { L"7c: A1 Winpose (butler, chair and minions)", 0x3400fa0, 0x3400fc0, indexCPS2_DrDoom, 14 },
    { L"7d: Not Used", 0x3400fc0, 0x3400fe0 },
    { L"7e: Not Used", 0x3400fe0, 0x3401000 },
    { L"7f: Not Used", 0x3401000, 0x3401020 },
    { L"80: Not Used", 0x3401020, 0x3401040 },
    { L"81: Not Used", 0x3401040, 0x3401060 },
    { L"82: Not Used", 0x3401060, 0x3401080 },
    { L"83: Not Used", 0x3401080, 0x34010a0 },
    { L"84: Not Used", 0x34010a0, 0x34010c0 },
    { L"85: Not Used", 0x34010c0, 0x34010e0 },
    { L"86: Not Used", 0x34010e0, 0x3401100 },
    { L"87: Not Used", 0x3401100, 0x3401120 },
    { L"88: Not Used", 0x3401120, 0x3401140 },
    { L"89: Not Used", 0x3401140, 0x3401160 },
    { L"8a: Not Used", 0x3401160, 0x3401180 },
    { L"8b: Not Used", 0x3401180, 0x34011a0 },
    { L"8c: Not Used", 0x34011a0, 0x34011c0 },
    { L"8d: Not Used", 0x34011c0, 0x34011e0 },
    { L"8e: Not Used", 0x34011e0, 0x3401200 },
    { L"8f: Not Used", 0x3401200, 0x3401220 },
    { L"90: Not Used", 0x3401220, 0x3401240 },
    { L"91: Not Used", 0x3401240, 0x3401260 },
    { L"92: Not Used", 0x3401260, 0x3401280 },
    { L"93: Not Used", 0x3401280, 0x34012a0 },
    { L"94: Not Used", 0x34012a0, 0x34012c0 },
    { L"95: A2 Intro", 0x34012c0, 0x34012e0, indexCPS2_DrDoom, 11 },
    { L"96: A2 Intro - Chair", 0x34012e0, 0x3401300, indexCPS2_DrDoom, 12 },
    { L"97: A2 Intro - Portal", 0x3401300, 0x3401320, indexCPS2_DrDoom, 13 },
    { L"98: A2 Winpose (butler, chair and minions)", 0x3401320, 0x3401340, indexCPS2_DrDoom, 14 },
};

const sDescTreeNode MVC2_A_DRDOOM_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_LP, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_LK, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_HP, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_HK, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_A1, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_A2, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_DRDOOM_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_LP[] =
{
    { L"Main Color LP", 0x35175c0, 0x35175e0, indexCPS2_Tron, 0, &pairHandledInCode },
    { L"(02) Tron Bonne (girl)", 0x35175e0, 0x3517600, indexCPS2_Tron, 1 },
    { L"(03) Kobun", 0x3517600, 0x3517620, indexCPS2_Tron, 2 },
    { L"(04) ID:01-08 - drill, lk, rock", 0x3517620, 0x3517640, indexCPS2_Tron, 3 },
    { L"(05) c.fp, Dash flame", 0x3517640, 0x3517660, indexCPS2_Tron, 4 },
    { L"(06) Not Used", 0x3517660, 0x3517680, indexCPS2_Tron, 5 },
    { L"(07) Not Used", 0x3517680, 0x35176a0, indexCPS2_Tron, 6 },
    { L"(08) Not Used", 0x35176a0, 0x35176c0, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_LK[] =
{
    { L"Main Color LK", 0x35176c0, 0x35176e0, indexCPS2_Tron, 0, &pairHandledInCode },
    { L"(02) Tron Bonne (girl)", 0x35176e0, 0x3517700, indexCPS2_Tron, 1 },
    { L"(03) Kobun", 0x3517700, 0x3517720, indexCPS2_Tron, 2 },
    { L"(04) ID:01-08 - drill, lk, rock", 0x3517720, 0x3517740, indexCPS2_Tron, 3 },
    { L"(05) c.fp, Dash flame", 0x3517740, 0x3517760, indexCPS2_Tron, 4 },
    { L"(06) Not Used", 0x3517760, 0x3517780, indexCPS2_Tron, 5 },
    { L"(07) Not Used", 0x3517780, 0x35177a0, indexCPS2_Tron, 6 },
    { L"(08) Not Used", 0x35177a0, 0x35177c0, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_HP[] =
{
    { L"Main Color HP", 0x35177c0, 0x35177e0, indexCPS2_Tron, 0, &pairHandledInCode },
    { L"(02) Tron Bonne (girl)", 0x35177e0, 0x3517800, indexCPS2_Tron, 1 },
    { L"(03) Kobun", 0x3517800, 0x3517820, indexCPS2_Tron, 2 },
    { L"(04) ID:01-08 - drill, lk, rock", 0x3517820, 0x3517840, indexCPS2_Tron, 3 },
    { L"(05) c.fp, Dash flame", 0x3517840, 0x3517860, indexCPS2_Tron, 4 },
    { L"(06) Not Used", 0x3517860, 0x3517880, indexCPS2_Tron, 5 },
    { L"(07) Not Used", 0x3517880, 0x35178a0, indexCPS2_Tron, 6 },
    { L"(08) Not Used", 0x35178a0, 0x35178c0, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_HK[] =
{
    { L"Main Color HK", 0x35178c0, 0x35178e0, indexCPS2_Tron, 0, &pairHandledInCode },
    { L"(02) Tron Bonne (girl)", 0x35178e0, 0x3517900, indexCPS2_Tron, 1 },
    { L"(03) Kobun", 0x3517900, 0x3517920, indexCPS2_Tron, 2 },
    { L"(04) ID:01-08 - drill, lk, rock", 0x3517920, 0x3517940, indexCPS2_Tron, 3 },
    { L"(05) c.fp, Dash flame", 0x3517940, 0x3517960, indexCPS2_Tron, 4 },
    { L"(06) Not Used", 0x3517960, 0x3517980, indexCPS2_Tron, 5 },
    { L"(07) Not Used", 0x3517980, 0x35179a0, indexCPS2_Tron, 6 },
    { L"(08) Not Used", 0x35179a0, 0x35179c0, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_A1[] =
{
    { L"Main Color A1", 0x35179c0, 0x35179e0, indexCPS2_Tron, 0, &pairHandledInCode },
    { L"(02) Tron Bonne (girl)", 0x35179e0, 0x3517a00, indexCPS2_Tron, 1 },
    { L"(03) Kobun", 0x3517a00, 0x3517a20, indexCPS2_Tron, 2 },
    { L"(04) ID:01-08 - drill, lk, rock", 0x3517a20, 0x3517a40, indexCPS2_Tron, 3 },
    { L"(05) c.fp, Dash flame", 0x3517a40, 0x3517a60, indexCPS2_Tron, 4 },
    { L"(06) Not Used", 0x3517a60, 0x3517a80, indexCPS2_Tron, 5 },
    { L"(07) Not Used", 0x3517a80, 0x3517aa0, indexCPS2_Tron, 6 },
    { L"(08) Not Used", 0x3517aa0, 0x3517ac0, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3517ac0, 0x3517ae0, indexCPS2_Tron, 0, &pairHandledInCode },
    { L"(02) Tron Bonne (girl)", 0x3517ae0, 0x3517b00, indexCPS2_Tron, 1 },
    { L"(03) Kobun", 0x3517b00, 0x3517b20, indexCPS2_Tron, 2 },
    { L"(04) ID:01-08 - drill, lk, rock", 0x3517b20, 0x3517b40, indexCPS2_Tron, 3 },
    { L"(05) c.fp, Dash flame", 0x3517b40, 0x3517b60, indexCPS2_Tron, 4 },
    { L"(06) Not Used", 0x3517b60, 0x3517b80, indexCPS2_Tron, 5 },
    { L"(07) Not Used", 0x3517b80, 0x3517ba0, indexCPS2_Tron, 6 },
    { L"(08) Not Used", 0x3517ba0, 0x3517bc0, indexCPS2_Tron, 7 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3517bc0, 0x3517be0, indexCPS2_Tron, 0, &pairNext },
    { L"Burning Dark 2", 0x3517be0, 0x3517c00, indexCPS2_Tron, 1 },
    { L"Burning Light", 0x3517c00, 0x3517c20, indexCPS2_Tron, 0, &pairNext },
    { L"Burning Light 2", 0x3517c20, 0x3517c40, indexCPS2_Tron, 1 },
    { L"Shocked Dark", 0x3517c40, 0x3517c60, indexCPS2_Tron, 0, &pairNext },
    { L"Shocked Dark 2", 0x3517c60, 0x3517c80, indexCPS2_Tron, 1 },
    { L"Shocked Light", 0x3517c80, 0x3517ca0, indexCPS2_Tron, 0, &pairNext },
    { L"Shocked Light 2", 0x3517ca0, 0x3517cc0, indexCPS2_Tron, 1 },
    { L"Dark Burning Dark", 0x3517cc0, 0x3517ce0, indexCPS2_Tron, 0, &pairNext },
    { L"Dark Burning Dark 2", 0x3517ce0, 0x3517d00, indexCPS2_Tron, 1 },
    { L"Dark Burning Light", 0x3517d00, 0x3517d20, indexCPS2_Tron, 0, &pairNext },
    { L"Dark Burning Light 2", 0x3517d20, 0x3517d40, indexCPS2_Tron, 1 },
    { L"Kinetic Charge Dark", 0x3517d40, 0x3517d60, indexCPS2_Tron, 0, &pairNext },
    { L"Kinetic Charge Dark 2", 0x3517d60, 0x3517d80, indexCPS2_Tron, 1 },
    { L"Kinetic Charge Light", 0x3517d80, 0x3517da0, indexCPS2_Tron, 0, &pairNext },
    { L"Kinetic Charge Light 2", 0x3517da0, 0x3517dc0, indexCPS2_Tron, 1 },
};

const sGame_PaletteDataset MVC2_A_TRON_PALETTES_EXTRAS[] =
{
    { L"11: Kobun Winpose (Chef's Cart) (all buttons)", 0x3517dc0, 0x3517de0, indexCPS2_Tron, 11 },
    { L"12: Not Used", 0x3517de0, 0x3517e00 },
    { L"13: Kobun's Lunch Tray (all buttons)", 0x3517e00, 0x3517e20, indexCPS2_Tron, 12 },
    { L"14: c.MP (Reflect Frame on the gustaff) all buttons", 0x3517e20, 0x3517e40, indexCPS2_Tron, 13 },
    { L"15: Drill Flame", 0x3517e40, 0x3517e60, indexCPS2_Tron, 14 },
};

const sDescTreeNode MVC2_A_TRON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_LP, ARRAYSIZE(MVC2_A_TRON_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_LK, ARRAYSIZE(MVC2_A_TRON_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_HP, ARRAYSIZE(MVC2_A_TRON_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_HK, ARRAYSIZE(MVC2_A_TRON_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_A1, ARRAYSIZE(MVC2_A_TRON_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_A2, ARRAYSIZE(MVC2_A_TRON_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_SHARED, ARRAYSIZE(MVC2_A_TRON_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_TRON_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_LP[] =
{
    { L"Main Color LP", 0x35f3160, 0x35f3180, indexCPS2_Jill, 0, &pairNext },
    { L"(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3180, 0x35f31a0, indexCPS2_Jill, 1 },
    { L"(03) Zombie", 0x35f31a0, 0x35f31c0, indexCPS2_Jill, 2 },
    { L"(04) Dog / Crow / Fire Zombie", 0x35f31c0, 0x35f31e0, indexCPS2_Jill, 3 },
    { L"(05) Tyrant", 0x35f31e0, 0x35f3200, indexCPS2_Jill, 4 },
    { L"(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3200, 0x35f3220, indexCPS2_Jill, 5 },
    { L"(07) Not Used", 0x35f3220, 0x35f3240, indexCPS2_Jill, 0, &pairNext },
    { L"(08) Not Used", 0x35f3240, 0x35f3260, indexCPS2_Jill, 1 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_LK[] =
{
    { L"Main Color LK", 0x35f3260, 0x35f3280, indexCPS2_Jill, 0, &pairNext },
    { L"(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3280, 0x35f32a0, indexCPS2_Jill, 1 },
    { L"(03) Zombie", 0x35f32a0, 0x35f32c0, indexCPS2_Jill, 2 },
    { L"(04) Dog / Crow / Fire Zombie", 0x35f32c0, 0x35f32e0, indexCPS2_Jill, 3 },
    { L"(05) Tyrant", 0x35f32e0, 0x35f3300, indexCPS2_Jill, 4 },
    { L"(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3300, 0x35f3320, indexCPS2_Jill, 5 },
    { L"(07) Not Used", 0x35f3320, 0x35f3340, indexCPS2_Jill, 0, &pairNext },
    { L"(08) Not Used", 0x35f3340, 0x35f3360, indexCPS2_Jill, 1 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_HP[] =
{
    { L"Main Color HP", 0x35f3360, 0x35f3380, indexCPS2_Jill, 0, &pairNext },
    { L"(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3380, 0x35f33a0, indexCPS2_Jill, 1 },
    { L"(03) Zombie", 0x35f33a0, 0x35f33c0, indexCPS2_Jill, 2 },
    { L"(04) Dog / Crow / Fire Zombie", 0x35f33c0, 0x35f33e0, indexCPS2_Jill, 3 },
    { L"(05) Tyrant", 0x35f33e0, 0x35f3400, indexCPS2_Jill, 4 },
    { L"(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3400, 0x35f3420, indexCPS2_Jill, 5 },
    { L"(07) Not Used", 0x35f3420, 0x35f3440, indexCPS2_Jill, 0, &pairNext },
    { L"(08) Not Used", 0x35f3440, 0x35f3460, indexCPS2_Jill, 1 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_HK[] =
{
    { L"Main Color HK", 0x35f3460, 0x35f3480, indexCPS2_Jill, 0, &pairNext },
    { L"(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3480, 0x35f34a0, indexCPS2_Jill, 1 },
    { L"(03) Zombie", 0x35f34a0, 0x35f34c0, indexCPS2_Jill, 2 },
    { L"(04) Dog / Crow / Fire Zombie", 0x35f34c0, 0x35f34e0, indexCPS2_Jill, 3 },
    { L"(05) Tyrant", 0x35f34e0, 0x35f3500, indexCPS2_Jill, 4 },
    { L"(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3500, 0x35f3520, indexCPS2_Jill, 5 },
    { L"(07) Not Used", 0x35f3520, 0x35f3540, indexCPS2_Jill, 0, &pairNext },
    { L"(08) Not Used", 0x35f3540, 0x35f3560, indexCPS2_Jill, 1 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_A1[] =
{
    { L"Main Color A1", 0x35f3560, 0x35f3580, indexCPS2_Jill, 0, &pairNext },
    { L"(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3580, 0x35f35a0, indexCPS2_Jill, 1 },
    { L"(03) Zombie", 0x35f35a0, 0x35f35c0, indexCPS2_Jill, 2 },
    { L"(04) Dog / Crow / Fire Zombie", 0x35f35c0, 0x35f35e0, indexCPS2_Jill, 3 },
    { L"(05) Tyrant", 0x35f35e0, 0x35f3600, indexCPS2_Jill, 4 },
    { L"(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3600, 0x35f3620, indexCPS2_Jill, 5 },
    { L"(07) Not Used", 0x35f3620, 0x35f3640, indexCPS2_Jill, 0, &pairNext },
    { L"(08) Not Used", 0x35f3640, 0x35f3660, indexCPS2_Jill, 1 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_A2[] =
{
    { L"Main Color A2", 0x35f3660, 0x35f3680, indexCPS2_Jill, 0, &pairNext },
    { L"(02) Rocket Launcher / Ribbon / Granade Launcher / Key", 0x35f3680, 0x35f36a0, indexCPS2_Jill, 1 },
    { L"(03) Zombie", 0x35f36a0, 0x35f36c0, indexCPS2_Jill, 2 },
    { L"(04) Dog / Crow / Fire Zombie", 0x35f36c0, 0x35f36e0, indexCPS2_Jill, 3 },
    { L"(05) Tyrant", 0x35f36e0, 0x35f3700, indexCPS2_Jill, 4 },
    { L"(06) Shoulder Dash / Shoulder Torpedo / Bullet Fire 1 / Rocket (Fire)", 0x35f3700, 0x35f3720, indexCPS2_Jill, 5 },
    { L"(07) Not Used", 0x35f3720, 0x35f3740, indexCPS2_Jill, 0, &pairNext },
    { L"(08) Not Used", 0x35f3740, 0x35f3760, indexCPS2_Jill, 1 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x35f3760, 0x35f3780, indexCPS2_Jill, 0 },
    { L"Burning Light", 0x35f3780, 0x35f37a0, indexCPS2_Jill, 0 },
    { L"Shocked Dark", 0x35f37a0, 0x35f37c0, indexCPS2_Jill, 0 },
    { L"Shocked Light", 0x35f37c0, 0x35f37e0, indexCPS2_Jill, 0 },
    { L"Dark Burning Dark", 0x35f37e0, 0x35f3800, indexCPS2_Jill, 0 },
    { L"Dark Burning Light", 0x35f3800, 0x35f3820, indexCPS2_Jill, 0 },
    { L"Kinetic Charge Dark", 0x35f3820, 0x35f3840, indexCPS2_Jill, 0 },
    { L"Kinetic Charge Light", 0x35f3840, 0x35f3860, indexCPS2_Jill, 0 },
};

const sGame_PaletteDataset MVC2_A_JILL_PALETTES_EXTRAS[] =
{
    { L"09: Tyrant (Claw effect) - all buttons", 0x35f3860, 0x35f3880 },
    { L"0a: Heal Assist - Herbs / ECG - all buttons", 0x35f3880, 0x35f38a0, indexCPS2_Jill, 12 },
    { L"0b: Zombie Frame (Shining Frame) - all buttons", 0x35f38a0, 0x35f38c0, indexCPS2_Jill, 2 },
};

const sDescTreeNode MVC2_A_JILL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_LP, ARRAYSIZE(MVC2_A_JILL_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_LK, ARRAYSIZE(MVC2_A_JILL_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_HP, ARRAYSIZE(MVC2_A_JILL_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_HK, ARRAYSIZE(MVC2_A_JILL_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_A1, ARRAYSIZE(MVC2_A_JILL_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_A2, ARRAYSIZE(MVC2_A_JILL_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_JILL_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_JILL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_LP[] =
{
    { L"Main Color LP", 0x36f0740, 0x36f0760, indexCPS2_Hayato, 0, &pairNext },
    { L"(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0760, 0x36f0780, indexCPS2_Hayato, 1 },
    { L"(03) ID: 01-08: Intro (Rising Flames)", 0x36f0780, 0x36f07a0, indexCPS2_Hayato, 2 },
    { L"(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f07a0, 0x36f07c0, indexCPS2_Hayato, 3 },
    { L"(05) Intro: Motorcycle", 0x36f07c0, 0x36f07e0, indexCPS2_Hayato, 4 },
    { L"(06) Dark Hayato", 0x36f07e0, 0x36f0800, indexCPS2_Hayato, 5 },
    { L"(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0800, 0x36f0820, indexCPS2_Hayato, 0 },
    { L"(08) Super Flash Frame 2", 0x36f0820, 0x36f0840, indexCPS2_Hayato, 0 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_LK[] =
{
    { L"Main Color LK", 0x36f0840, 0x36f0860, indexCPS2_Hayato, 0, &pairNext },
    { L"(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0860, 0x36f0880, indexCPS2_Hayato, 1 },
    { L"(03) ID: 01-08: Intro (Rising Flames)", 0x36f0880, 0x36f08a0, indexCPS2_Hayato, 2 },
    { L"(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f08a0, 0x36f08c0, indexCPS2_Hayato, 3 },
    { L"(05) Intro: Motorcycle", 0x36f08c0, 0x36f08e0, indexCPS2_Hayato, 4 },
    { L"(06) Dark Hayato", 0x36f08e0, 0x36f0900, indexCPS2_Hayato, 5 },
    { L"(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0900, 0x36f0920, indexCPS2_Hayato, 0 },
    { L"(08) Super Flash Frame 2", 0x36f0920, 0x36f0940, indexCPS2_Hayato, 0 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_HP[] =
{
    { L"Main Color HP", 0x36f0940, 0x36f0960, indexCPS2_Hayato, 0, &pairNext },
    { L"(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0960, 0x36f0980, indexCPS2_Hayato, 1 },
    { L"(03) ID: 01-08: Intro (Rising Flames)", 0x36f0980, 0x36f09a0, indexCPS2_Hayato, 2 },
    { L"(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f09a0, 0x36f09c0, indexCPS2_Hayato, 3 },
    { L"(05) Intro: Motorcycle", 0x36f09c0, 0x36f09e0, indexCPS2_Hayato, 4 },
    { L"(06) Dark Hayato", 0x36f09e0, 0x36f0a00, indexCPS2_Hayato, 5 },
    { L"(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0a00, 0x36f0a20, indexCPS2_Hayato, 0 },
    { L"(08) Super Flash Frame 2", 0x36f0a20, 0x36f0a40, indexCPS2_Hayato, 0 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_HK[] =
{
    { L"Main Color HK", 0x36f0a40, 0x36f0a60, indexCPS2_Hayato, 0, &pairNext },
    { L"(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0a60, 0x36f0a80, indexCPS2_Hayato, 1 },
    { L"(03) ID: 01-08: Intro (Rising Flames)", 0x36f0a80, 0x36f0aa0, indexCPS2_Hayato, 2 },
    { L"(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f0aa0, 0x36f0ac0, indexCPS2_Hayato, 3 },
    { L"(05) Intro: Motorcycle", 0x36f0ac0, 0x36f0ae0, indexCPS2_Hayato, 4 },
    { L"(06) Dark Hayato", 0x36f0ae0, 0x36f0b00, indexCPS2_Hayato, 5 },
    { L"(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0b00, 0x36f0b20, indexCPS2_Hayato, 0 },
    { L"(08) Super Flash Frame 2", 0x36f0b20, 0x36f0b40, indexCPS2_Hayato, 0 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_A1[] =
{
    { L"Main Color A1", 0x36f0b40, 0x36f0b60, indexCPS2_Hayato, 0, &pairNext },
    { L"(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0b60, 0x36f0b80, indexCPS2_Hayato, 1 },
    { L"(03) ID: 01-08: Intro (Rising Flames)", 0x36f0b80, 0x36f0ba0, indexCPS2_Hayato, 2 },
    { L"(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f0ba0, 0x36f0bc0, indexCPS2_Hayato, 3 },
    { L"(05) Intro: Motorcycle", 0x36f0bc0, 0x36f0be0, indexCPS2_Hayato, 4 },
    { L"(06) Dark Hayato", 0x36f0be0, 0x36f0c00, indexCPS2_Hayato, 5 },
    { L"(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0c00, 0x36f0c20, indexCPS2_Hayato, 0 },
    { L"(08) Super Flash Frame 2", 0x36f0c20, 0x36f0c40, indexCPS2_Hayato, 0 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_A2[] =
{
    { L"Main Color A2", 0x36f0c40, 0x36f0c60, indexCPS2_Hayato, 0, &pairNext },
    { L"(02) ID: 01-07: Not Used ID: 08-15: Hayato's Sword", 0x36f0c60, 0x36f0c80, indexCPS2_Hayato, 1 },
    { L"(03) ID: 01-08: Intro (Rising Flames)", 0x36f0c80, 0x36f0ca0, indexCPS2_Hayato, 2 },
    { L"(04) Engetsu (shockwave) / Plasma Field / Intro: motorcycle tires", 0x36f0ca0, 0x36f0cc0, indexCPS2_Hayato, 3 },
    { L"(05) Intro: Motorcycle", 0x36f0cc0, 0x36f0ce0, indexCPS2_Hayato, 4 },
    { L"(06) Dark Hayato", 0x36f0ce0, 0x36f0d00, indexCPS2_Hayato, 5 },
    { L"(07) Super Flash Frame 1 / Shiden Shadows", 0x36f0d00, 0x36f0d20, indexCPS2_Hayato, 0 },
    { L"(08) Super Flash Frame 2", 0x36f0d20, 0x36f0d40, indexCPS2_Hayato, 0 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x36f0d40, 0x36f0d60, indexCPS2_Hayato, 0, &pairNext },
    { L"Burning Dark 2", 0x36f0d60, 0x36f0d80, indexCPS2_Hayato, 1 },
    { L"Burning Light", 0x36f0d80, 0x36f0da0, indexCPS2_Hayato, 0, &pairNext },
    { L"Burning Light 2", 0x36f0da0, 0x36f0dc0, indexCPS2_Hayato, 1 },
    { L"Shocked Dark", 0x36f0dc0, 0x36f0de0, indexCPS2_Hayato, 0, &pairNext },
    { L"Shocked Dark 2", 0x36f0de0, 0x36f0e00, indexCPS2_Hayato, 1 },
    { L"Shocked Light", 0x36f0e00, 0x36f0e20, indexCPS2_Hayato, 0, &pairNext },
    { L"Shocked Light 2", 0x36f0e20, 0x36f0e40, indexCPS2_Hayato, 1 },
    { L"Dark Burning Dark", 0x36f0e40, 0x36f0e60, indexCPS2_Hayato, 0, &pairNext },
    { L"Dark Burning Dark 2", 0x36f0e60, 0x36f0e80, indexCPS2_Hayato, 1 },
    { L"Dark Burning Light", 0x36f0e80, 0x36f0ea0, indexCPS2_Hayato, 0, &pairNext },
    { L"Dark Burning Light 2", 0x36f0ea0, 0x36f0ec0, indexCPS2_Hayato, 1 },
    { L"Kinetic Charge Dark", 0x36f0ec0, 0x36f0ee0, indexCPS2_Hayato, 0, &pairNext },
    { L"Kinetic Charge Dark 2", 0x36f0ee0, 0x36f0f00, indexCPS2_Hayato, 1 },
    { L"Kinetic Charge Light", 0x36f0f00, 0x36f0f20, indexCPS2_Hayato, 0, &pairNext },
    { L"Kinetic Charge Light 2", 0x36f0f20, 0x36f0f40, indexCPS2_Hayato, 1 },
};

const sGame_PaletteDataset MVC2_A_HAYATO_PALETTES_EXTRAS[] =
{
    { L"11: Not Used", 0x36f0f40, 0x36f0f60 },
    { L"12: Not Used", 0x36f0f60, 0x36f0f80 },
    { L"13: Not Used", 0x36f0f80, 0x36f0fa0 },
    { L"14: Winpose - Saturn", 0x36f0fa0, 0x36f0fc0 },
    { L"15: Winpose - Jun", 0x36f0fc0, 0x36f0fe0 },
    { L"16: Winpose - Jun' Ring", 0x36f0fe0, 0x36f1000 },
    { L"17: Winpose - Elle", 0x36f1000, 0x36f1020 },
};

const sDescTreeNode MVC2_A_HAYATO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_LP, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_LK, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_HP, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_HK, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_A1, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_A2, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_HAYATO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_LP[] =
{
    { L"Main Color LP", 0x37f9ce0, 0x37f9d00, indexCPS2_Ruby, 0 },
    { L"(02) Chest", 0x37f9d00, 0x37f9d20, indexCPS2_Ruby, 1 },
    { L"(03) Phantom", 0x37f9d20, 0x37f9d40, indexCPS2_Ruby, 2 },
    { L"(04) Canon fire", 0x37f9d40, 0x37f9d60, indexCPS2_Ruby, 3 },
    { L"(05) Sublimation", 0x37f9d60, 0x37f9d80, indexCPS2_Ruby, 4 },
    { L"(06) Ship", 0x37f9d80, 0x37f9da0, indexCPS2_Ruby, 5 },
    { L"(07) Anchor/barrel/swords", 0x37f9da0, 0x37f9dc0, indexCPS2_Ruby, 6 },
    { L"(08) Swartzelle (Ruby)", 0x37f9dc0, 0x37f9de0, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_LK[] =
{
    { L"Main Color LK", 0x37f9de0, 0x37f9e00, indexCPS2_Ruby, 0 },
    { L"(02) Chest", 0x37f9e00, 0x37f9e20, indexCPS2_Ruby, 1 },
    { L"(03) Phantom", 0x37f9e20, 0x37f9e40, indexCPS2_Ruby, 2 },
    { L"(04) Canon fire", 0x37f9e40, 0x37f9e60, indexCPS2_Ruby, 3 },
    { L"(05) Sublimation", 0x37f9e60, 0x37f9e80, indexCPS2_Ruby, 4 },
    { L"(06) Ship", 0x37f9e80, 0x37f9ea0, indexCPS2_Ruby, 5 },
    { L"(07) Anchor/barrel/swords", 0x37f9ea0, 0x37f9ec0, indexCPS2_Ruby, 6 },
    { L"(08) Swartzelle (Ruby)", 0x37f9ec0, 0x37f9ee0, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_HP[] =
{
    { L"Main Color HP", 0x37f9ee0, 0x37f9f00, indexCPS2_Ruby, 0 },
    { L"(02) Chest", 0x37f9f00, 0x37f9f20, indexCPS2_Ruby, 1 },
    { L"(03) Phantom", 0x37f9f20, 0x37f9f40, indexCPS2_Ruby, 2 },
    { L"(04) Canon fire", 0x37f9f40, 0x37f9f60, indexCPS2_Ruby, 3 },
    { L"(05) Sublimation", 0x37f9f60, 0x37f9f80, indexCPS2_Ruby, 4 },
    { L"(06) Ship", 0x37f9f80, 0x37f9fa0, indexCPS2_Ruby, 5 },
    { L"(07) Anchor/barrel/swords", 0x37f9fa0, 0x37f9fc0, indexCPS2_Ruby, 6 },
    { L"(08) Swartzelle (Ruby)", 0x37f9fc0, 0x37f9fe0, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_HK[] =
{
    { L"Main Color HK", 0x37f9fe0, 0x37fa000, indexCPS2_Ruby, 0 },
    { L"(02) Chest", 0x37fa000, 0x37fa020, indexCPS2_Ruby, 1 },
    { L"(03) Phantom", 0x37fa020, 0x37fa040, indexCPS2_Ruby, 2 },
    { L"(04) Canon fire", 0x37fa040, 0x37fa060, indexCPS2_Ruby, 3 },
    { L"(05) Sublimation", 0x37fa060, 0x37fa080, indexCPS2_Ruby, 4 },
    { L"(06) Ship", 0x37fa080, 0x37fa0a0, indexCPS2_Ruby, 5 },
    { L"(07) Anchor/barrel/swords", 0x37fa0a0, 0x37fa0c0, indexCPS2_Ruby, 6 },
    { L"(08) Swartzelle (Ruby)", 0x37fa0c0, 0x37fa0e0, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_A1[] =
{
    { L"Main Color A1", 0x37fa0e0, 0x37fa100, indexCPS2_Ruby, 0 },
    { L"(02) Chest", 0x37fa100, 0x37fa120, indexCPS2_Ruby, 1 },
    { L"(03) Phantom", 0x37fa120, 0x37fa140, indexCPS2_Ruby, 2 },
    { L"(04) Canon fire", 0x37fa140, 0x37fa160, indexCPS2_Ruby, 3 },
    { L"(05) Sublimation", 0x37fa160, 0x37fa180, indexCPS2_Ruby, 4 },
    { L"(06) Ship", 0x37fa180, 0x37fa1a0, indexCPS2_Ruby, 5 },
    { L"(07) Anchor/barrel/swords", 0x37fa1a0, 0x37fa1c0, indexCPS2_Ruby, 6 },
    { L"(08) Swartzelle (Ruby)", 0x37fa1c0, 0x37fa1e0, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_A2[] =
{
    { L"Main Color A2", 0x37fa1e0, 0x37fa200, indexCPS2_Ruby, 0 },
    { L"(02) Chest", 0x37fa200, 0x37fa220, indexCPS2_Ruby, 1 },
    { L"(03) Phantom", 0x37fa220, 0x37fa240, indexCPS2_Ruby, 2 },
    { L"(04) Canon fire", 0x37fa240, 0x37fa260, indexCPS2_Ruby, 3 },
    { L"(05) Sublimation", 0x37fa260, 0x37fa280, indexCPS2_Ruby, 4 },
    { L"(06) Ship", 0x37fa280, 0x37fa2a0, indexCPS2_Ruby, 5 },
    { L"(07) Anchor/barrel/swords", 0x37fa2a0, 0x37fa2c0, indexCPS2_Ruby, 6 },
    { L"(08) Swartzelle (Ruby)", 0x37fa2c0, 0x37fa2e0, indexCPS2_Ruby, 7 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x37fa2e0, 0x37fa300, indexCPS2_Ruby, 0 },
    { L"Burning Light", 0x37fa300, 0x37fa320, indexCPS2_Ruby, 0 },
    { L"Shocked Dark", 0x37fa320, 0x37fa340, indexCPS2_Ruby, 0 },
    { L"Shocked Light", 0x37fa340, 0x37fa360, indexCPS2_Ruby, 0 },
    { L"Dark Burning Dark", 0x37fa360, 0x37fa380, indexCPS2_Ruby, 0 },
    { L"Dark Burning Light", 0x37fa380, 0x37fa3a0, indexCPS2_Ruby, 0 },
    { L"Kinetic Charge Dark", 0x37fa3a0, 0x37fa3c0, indexCPS2_Ruby, 0 },
    { L"Kinetic Charge Light", 0x37fa3c0, 0x37fa3e0, indexCPS2_Ruby, 0 },
};

const sGame_PaletteDataset MVC2_A_RUBY_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x37fa3e0, 0x37fa400 },
    { L"0a: Not Used", 0x37fa400, 0x37fa420 },
    { L"0b: Pirate (Medium)", 0x37fa420, 0x37fa440 },
    { L"0c: Pirate (Big)", 0x37fa440, 0x37fa460 },
    { L"0d: Pirate (Holds Barrel)", 0x37fa460, 0x37fa480, indexCPS2_Ruby, 0x0d },
    { L"0e: Mystic Orb (Enhance Assist)", 0x37fa480, 0x37fa4a0 },
    { L"0f: Not Used", 0x37fa4a0, 0x37fa4c0 },
    { L"10: ID: 01-16: Swartzelle (Super) ID:09-15: Not Used", 0x37fa4c0, 0x37fa4e0, indexCPS2_Ruby, 15 },
};

const sDescTreeNode MVC2_A_RUBY_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_LP, ARRAYSIZE(MVC2_A_RUBY_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_LK, ARRAYSIZE(MVC2_A_RUBY_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_HP, ARRAYSIZE(MVC2_A_RUBY_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_HK, ARRAYSIZE(MVC2_A_RUBY_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_A1, ARRAYSIZE(MVC2_A_RUBY_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_A2, ARRAYSIZE(MVC2_A_RUBY_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_SHARED, ARRAYSIZE(MVC2_A_RUBY_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_RUBY_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_LP[] =
{
    { L"Main Color LP", 0x39136c0, 0x39136e0, indexCPS2_SonSon, 0, &pairFullyLinkedNode },
    { L"(02) Monkeys", 0x39136e0, 0x3913700, indexCPS2_SonSon, 1 },
    { L"(03) Cane Effects / Pot and Fire", 0x3913700, 0x3913720, indexCPS2_SonSon, 2 },
    { L"(04) Bottled Enemy", 0x3913720, 0x3913740, indexCPS2_SonSon, 3 },
    { L"(05) Huge Cane / POW", 0x3913740, 0x3913760, indexCPS2_SonSon, 4 },
    { L"(06) Huge Cane (Tip)", 0x3913760, 0x3913780, indexCPS2_SonSon, 5 },
    { L"(07) Burned Monkey", 0x3913780, 0x39137a0, indexCPS2_SonSon, 6 },
    { L"(08) Transformation Frame for Super", 0x39137a0, 0x39137c0, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_LK[] =
{
    { L"Main Color LK", 0x39137c0, 0x39137e0, indexCPS2_SonSon, 0, &pairFullyLinkedNode },
    { L"(02) Monkeys", 0x39137e0, 0x3913800, indexCPS2_SonSon, 1 },
    { L"(03) Cane Effects / Pot and Fire", 0x3913800, 0x3913820, indexCPS2_SonSon, 2 },
    { L"(04) Bottled Enemy", 0x3913820, 0x3913840, indexCPS2_SonSon, 3 },
    { L"(05) Huge Cane / POW", 0x3913840, 0x3913860, indexCPS2_SonSon, 4 },
    { L"(06) Huge Cane (Tip)", 0x3913860, 0x3913880, indexCPS2_SonSon, 5 },
    { L"(07) Burned Monkey", 0x3913880, 0x39138a0, indexCPS2_SonSon, 6 },
    { L"(08) Transformation Frame for Super", 0x39138a0, 0x39138c0, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_HP[] =
{
    { L"Main Color HP", 0x39138c0, 0x39138e0, indexCPS2_SonSon, 0, &pairFullyLinkedNode },
    { L"(02) Monkeys", 0x39138e0, 0x3913900, indexCPS2_SonSon, 1 },
    { L"(03) Cane Effects / Pot and Fire", 0x3913900, 0x3913920, indexCPS2_SonSon, 2 },
    { L"(04) Bottled Enemy", 0x3913920, 0x3913940, indexCPS2_SonSon, 3 },
    { L"(05) Huge Cane / POW", 0x3913940, 0x3913960, indexCPS2_SonSon, 4 },
    { L"(06) Huge Cane (Tip)", 0x3913960, 0x3913980, indexCPS2_SonSon, 5 },
    { L"(07) Burned Monkey", 0x3913980, 0x39139a0, indexCPS2_SonSon, 6 },
    { L"(08) Transformation Frame for Super", 0x39139a0, 0x39139c0, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_HK[] =
{
    { L"Main Color HK", 0x39139c0, 0x39139e0, indexCPS2_SonSon, 0, &pairFullyLinkedNode },
    { L"(02) Monkeys", 0x39139e0, 0x3913a00, indexCPS2_SonSon, 1 },
    { L"(03) Cane Effects / Pot and Fire", 0x3913a00, 0x3913a20, indexCPS2_SonSon, 2 },
    { L"(04) Bottled Enemy", 0x3913a20, 0x3913a40, indexCPS2_SonSon, 3 },
    { L"(05) Huge Cane / POW", 0x3913a40, 0x3913a60, indexCPS2_SonSon, 4 },
    { L"(06) Huge Cane (Tip)", 0x3913a60, 0x3913a80, indexCPS2_SonSon, 5 },
    { L"(07) Burned Monkey", 0x3913a80, 0x3913aa0, indexCPS2_SonSon, 6 },
    { L"(08) Transformation Frame for Super", 0x3913aa0, 0x3913ac0, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_A1[] =
{
    { L"Main Color A1", 0x3913ac0, 0x3913ae0, indexCPS2_SonSon, 0, &pairFullyLinkedNode },
    { L"(02) Monkeys", 0x3913ae0, 0x3913b00, indexCPS2_SonSon, 1 },
    { L"(03) Cane Effects / Pot and Fire", 0x3913b00, 0x3913b20, indexCPS2_SonSon, 2 },
    { L"(04) Bottled Enemy", 0x3913b20, 0x3913b40, indexCPS2_SonSon, 3 },
    { L"(05) Huge Cane / POW", 0x3913b40, 0x3913b60, indexCPS2_SonSon, 4 },
    { L"(06) Huge Cane (Tip)", 0x3913b60, 0x3913b80, indexCPS2_SonSon, 5 },
    { L"(07) Burned Monkey", 0x3913b80, 0x3913ba0, indexCPS2_SonSon, 6 },
    { L"(08) Transformation Frame for Super", 0x3913ba0, 0x3913bc0, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3913bc0, 0x3913be0, indexCPS2_SonSon, 0, &pairFullyLinkedNode },
    { L"(02) Monkeys", 0x3913be0, 0x3913c00, indexCPS2_SonSon, 1 },
    { L"(03) Cane Effects / Pot and Fire", 0x3913c00, 0x3913c20, indexCPS2_SonSon, 2 },
    { L"(04) Bottled Enemy", 0x3913c20, 0x3913c40, indexCPS2_SonSon, 3 },
    { L"(05) Huge Cane / POW", 0x3913c40, 0x3913c60, indexCPS2_SonSon, 4 },
    { L"(06) Huge Cane (Tip)", 0x3913c60, 0x3913c80, indexCPS2_SonSon, 5 },
    { L"(07) Burned Monkey", 0x3913c80, 0x3913ca0, indexCPS2_SonSon, 6 },
    { L"(08) Transformation Frame for Super", 0x3913ca0, 0x3913cc0, indexCPS2_SonSon, 7 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3913cc0, 0x3913ce0, indexCPS2_SonSon, 0 },
    { L"Burning Light", 0x3913ce0, 0x3913d00, indexCPS2_SonSon, 0 },
    { L"Shocked Dark", 0x3913d00, 0x3913d20, indexCPS2_SonSon, 0 },
    { L"Shocked Light", 0x3913d20, 0x3913d40, indexCPS2_SonSon, 0 },
    { L"Dark Burning Dark", 0x3913d40, 0x3913d60, indexCPS2_SonSon, 0 },
    { L"Dark Burning Light", 0x3913d60, 0x3913d80, indexCPS2_SonSon, 0 },
    { L"Kinetic Charge Dark", 0x3913d80, 0x3913da0, indexCPS2_SonSon, 0 },
    { L"Kinetic Charge Light", 0x3913da0, 0x3913dc0, indexCPS2_SonSon, 0 },
};

const sGame_PaletteDataset MVC2_A_SONSON_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x3913dc0, 0x3913de0 },
    { L"0a: Not Used", 0x3913de0, 0x3913e00 },
    { L"0b: Strawberry / Watermelon", 0x3913e00, 0x3913e20, indexCPS2_SonSon, 0x09 },
    { L"0c: Peach", 0x3913e20, 0x3913e40, indexCPS2_SonSon, 0x08 },
    { L"0d: Not Used", 0x3913e40, 0x3913e60 },
    { L"0e: Not Used", 0x3913e60, 0x3913e80 },
    { L"0f: LP - Monkey King", 0x3913e80, 0x3913ea0, indexCPS2_SonSon, 11 },
    { L"10: LK - Monkey King", 0x3913ea0, 0x3913ec0, indexCPS2_SonSon, 11 },
    { L"11: HP - Monkey King", 0x3913ec0, 0x3913ee0, indexCPS2_SonSon, 11 },
    { L"12: HK - Monkey King", 0x3913ee0, 0x3913f00, indexCPS2_SonSon, 11 },
    { L"13: A1 - Monkey King", 0x3913f00, 0x3913f20, indexCPS2_SonSon, 11 },
    { L"14: A2 - Monkey King", 0x3913f20, 0x3913f40, indexCPS2_SonSon, 11 },
    { L"15: Not Used", 0x3913f40, 0x3913f60 },
    { L"16: Monkey King (Laser) - all buttons", 0x3913f60, 0x3913f80, indexCPS2_SonSon, 0x0c },
    { L"17: LP - Monkey King (when hit)", 0x3913f80, 0x3913fa0, indexCPS2_SonSon, 11 },
    { L"18: LK - Monkey King (when hit)", 0x3913fa0, 0x3913fc0, indexCPS2_SonSon, 11 },
    { L"19: HP - Monkey King (when hit)", 0x3913fc0, 0x3913fe0, indexCPS2_SonSon, 11 },
    { L"1a: HK - Monkey King (when hit)", 0x3913fe0, 0x3914000, indexCPS2_SonSon, 11 },
    { L"1b: A1 - Monkey King (when hit)", 0x3914000, 0x3914020, indexCPS2_SonSon, 11 },
    { L"1c: A2 - Monkey King (when hit)", 0x3914020, 0x3914040, indexCPS2_SonSon, 11 },
    { L"1d: LP - Monkey King (Laser Reflect Frame 1)", 0x3914040, 0x3914060, indexCPS2_SonSon, 11 },
    { L"1e: LP - Monkey King (Laser Reflect Frame 2)", 0x3914060, 0x3914080, indexCPS2_SonSon, 11 },
    { L"1f: LK - Monkey King (Laser Reflect Frame 1)", 0x3914080, 0x39140a0, indexCPS2_SonSon, 11 },
    { L"20: LK - Monkey King (Laser Reflect Frame 2)", 0x39140a0, 0x39140c0, indexCPS2_SonSon, 11 },
    { L"21: HP - Monkey King (Laser Reflect Frame 1)", 0x39140c0, 0x39140e0, indexCPS2_SonSon, 11 },
    { L"22: HP - Monkey King (Laser Reflect Frame 2)", 0x39140e0, 0x3914100, indexCPS2_SonSon, 11 },
    { L"23: HK - Monkey King (Laser Reflect Frame 1)", 0x3914100, 0x3914120, indexCPS2_SonSon, 11 },
    { L"24: HK - Monkey King (Laser Reflect Frame 2)", 0x3914120, 0x3914140, indexCPS2_SonSon, 11 },
    { L"25: A1 - Monkey King (Laser Reflect Frame 1)", 0x3914140, 0x3914160, indexCPS2_SonSon, 11 },
    { L"26: A1 - Monkey King (Laser Reflect Frame 2)", 0x3914160, 0x3914180, indexCPS2_SonSon, 11 },
    { L"27: A2 - Monkey King (Laser Reflect Frame 1)", 0x3914180, 0x39141a0, indexCPS2_SonSon, 11 },
    { L"28: A2 - Monkey King (Laser Reflect Frame 2)", 0x39141a0, 0x39141c0, indexCPS2_SonSon, 11 },
};

const sDescTreeNode MVC2_A_SONSON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_LP, ARRAYSIZE(MVC2_A_SONSON_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_LK, ARRAYSIZE(MVC2_A_SONSON_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_HP, ARRAYSIZE(MVC2_A_SONSON_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_HK, ARRAYSIZE(MVC2_A_SONSON_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_A1, ARRAYSIZE(MVC2_A_SONSON_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_A2, ARRAYSIZE(MVC2_A_SONSON_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SONSON_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SONSON_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_LP[] =
{
    { L"Main Color LP", 0x3a2c760, 0x3a2c780, indexCPS2_Amingo, 0 },
    { L"(02) Not Used", 0x3a2c780, 0x3a2c7a0, indexCPS2_Amingo, 1 },
    { L"(03) Shouting Of The Wind", 0x3a2c7a0, 0x3a2c7c0, indexCPS2_Amingo, 2 },
    { L"(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2c7c0, 0x3a2c7e0, indexCPS2_Amingo, 3 },
    { L"(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2c7e0, 0x3a2c800, indexCPS2_Amingo, 4 },
    { L"(06) Not Used", 0x3a2c800, 0x3a2c820, indexCPS2_Amingo, 5 },
    { L"(07) Not Used", 0x3a2c820, 0x3a2c840, indexCPS2_Amingo, 6 },
    { L"(08) Not Used", 0x3a2c840, 0x3a2c860, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_LK[] =
{
    { L"Main Color LK", 0x3a2c860, 0x3a2c880, indexCPS2_Amingo, 0 },
    { L"(02) Not Used", 0x3a2c880, 0x3a2c8a0, indexCPS2_Amingo, 1 },
    { L"(03) Shouting Of The Wind", 0x3a2c8a0, 0x3a2c8c0, indexCPS2_Amingo, 2 },
    { L"(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2c8c0, 0x3a2c8e0, indexCPS2_Amingo, 3 },
    { L"(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2c8e0, 0x3a2c900, indexCPS2_Amingo, 4 },
    { L"(06) Not Used", 0x3a2c900, 0x3a2c920, indexCPS2_Amingo, 5 },
    { L"(07) Not Used", 0x3a2c920, 0x3a2c940, indexCPS2_Amingo, 6 },
    { L"(08) Not Used", 0x3a2c940, 0x3a2c960, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_HP[] =
{
    { L"Main Color HP", 0x3a2c960, 0x3a2c980, indexCPS2_Amingo, 0 },
    { L"(02) Not Used", 0x3a2c980, 0x3a2c9a0, indexCPS2_Amingo, 1 },
    { L"(03) Shouting Of The Wind", 0x3a2c9a0, 0x3a2c9c0, indexCPS2_Amingo, 2 },
    { L"(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2c9c0, 0x3a2c9e0, indexCPS2_Amingo, 3 },
    { L"(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2c9e0, 0x3a2ca00, indexCPS2_Amingo, 4 },
    { L"(06) Not Used", 0x3a2ca00, 0x3a2ca20, indexCPS2_Amingo, 5 },
    { L"(07) Not Used", 0x3a2ca20, 0x3a2ca40, indexCPS2_Amingo, 6 },
    { L"(08) Not Used", 0x3a2ca40, 0x3a2ca60, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_HK[] =
{
    { L"Main Color HK", 0x3a2ca60, 0x3a2ca80, indexCPS2_Amingo, 0 },
    { L"(02) Not Used", 0x3a2ca80, 0x3a2caa0, indexCPS2_Amingo, 1 },
    { L"(03) Shouting Of The Wind", 0x3a2caa0, 0x3a2cac0, indexCPS2_Amingo, 2 },
    { L"(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2cac0, 0x3a2cae0, indexCPS2_Amingo, 3 },
    { L"(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2cae0, 0x3a2cb00, indexCPS2_Amingo, 4 },
    { L"(06) Not Used", 0x3a2cb00, 0x3a2cb20, indexCPS2_Amingo, 5 },
    { L"(07) Not Used", 0x3a2cb20, 0x3a2cb40, indexCPS2_Amingo, 6 },
    { L"(08) Not Used", 0x3a2cb40, 0x3a2cb60, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_A1[] =
{
    { L"Main Color A1", 0x3a2cb60, 0x3a2cb80, indexCPS2_Amingo, 0 },
    { L"(02) Not Used", 0x3a2cb80, 0x3a2cba0, indexCPS2_Amingo, 1 },
    { L"(03) Shouting Of The Wind", 0x3a2cba0, 0x3a2cbc0, indexCPS2_Amingo, 2 },
    { L"(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2cbc0, 0x3a2cbe0, indexCPS2_Amingo, 3 },
    { L"(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2cbe0, 0x3a2cc00, indexCPS2_Amingo, 4 },
    { L"(06) Not Used", 0x3a2cc00, 0x3a2cc20, indexCPS2_Amingo, 5 },
    { L"(07) Not Used", 0x3a2cc20, 0x3a2cc40, indexCPS2_Amingo, 6 },
    { L"(08) Not Used", 0x3a2cc40, 0x3a2cc60, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3a2cc60, 0x3a2cc80, indexCPS2_Amingo, 0 },
    { L"(02) Not Used", 0x3a2cc80, 0x3a2cca0, indexCPS2_Amingo, 1 },
    { L"(03) Shouting Of The Wind", 0x3a2cca0, 0x3a2ccc0, indexCPS2_Amingo, 2 },
    { L"(04) Thorns / mp / c.mk / s.fp / Guard thorns", 0x3a2ccc0, 0x3a2cce0, indexCPS2_Amingo, 3 },
    { L"(05) Intro Flower / Delight Of Green / Plants' Commandment", 0x3a2cce0, 0x3a2cd00, indexCPS2_Amingo, 4 },
    { L"(06) Not Used", 0x3a2cd00, 0x3a2cd20, indexCPS2_Amingo, 5 },
    { L"(07) Not Used", 0x3a2cd20, 0x3a2cd40, indexCPS2_Amingo, 6 },
    { L"(08) Not Used", 0x3a2cd40, 0x3a2cd60, indexCPS2_Amingo, 7 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3a2cd60, 0x3a2cd80, indexCPS2_Amingo, 0 },
    { L"Burning Light", 0x3a2cd80, 0x3a2cda0, indexCPS2_Amingo, 0 },
    { L"Shocked Dark", 0x3a2cda0, 0x3a2cdc0, indexCPS2_Amingo, 0 },
    { L"Shocked Light", 0x3a2cdc0, 0x3a2cde0, indexCPS2_Amingo, 0 },
    { L"Dark Burning Dark", 0x3a2cde0, 0x3a2ce00, indexCPS2_Amingo, 0 },
    { L"Dark Burning Light", 0x3a2ce00, 0x3a2ce20, indexCPS2_Amingo, 0 },
    { L"Kinetic Charge Dark", 0x3a2ce20, 0x3a2ce40, indexCPS2_Amingo, 0 },
    { L"Kinetic Charge Light", 0x3a2ce40, 0x3a2ce60, indexCPS2_Amingo, 0 },
};

const sGame_PaletteDataset MVC2_A_AMINGO_PALETTES_EXTRAS[] =
{
    { L"09: ID: 01-08 Not Used ID:09-15: Heal Assist", 0x3a2ce60, 0x3a2ce80, indexCPS2_Amingo, 11 },
    { L"0a: Not Used", 0x3a2ce80, 0x3a2cea0 },
    { L"0b: ID: 01-08 Not Used ID:09-15: Enhance Assist", 0x3a2cea0, 0x3a2cec0, indexCPS2_Amingo, 11 },
};

const sDescTreeNode MVC2_A_AMINGO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_LP, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_LK, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_HP, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_HK, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_A1, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_A2, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_AMINGO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_LP[] =
{
    { L"Main Color LP", 0x3b214a0, 0x3b214c0, indexCPS2_Marrow, 0 },
    { L"(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b214c0, 0x3b214e0, indexCPS2_Marrow, 1 },
    { L"(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b214e0, 0x3b21500, indexCPS2_Marrow, 2 },
    { L"(04) Not Used", 0x3b21500, 0x3b21520, indexCPS2_Marrow, 3 },
    { L"(05) Not Used", 0x3b21520, 0x3b21540, indexCPS2_Marrow, 4 },
    { L"(06) Not Used", 0x3b21540, 0x3b21560, indexCPS2_Marrow, 5 },
    { L"(07) Not Used", 0x3b21560, 0x3b21580, indexCPS2_Marrow, 6 },
    { L"(08) Not Used", 0x3b21580, 0x3b215a0, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_LK[] =
{
    { L"Main Color LK", 0x3b215a0, 0x3b215c0, indexCPS2_Marrow, 0 },
    { L"(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b215c0, 0x3b215e0, indexCPS2_Marrow, 1 },
    { L"(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b215e0, 0x3b21600, indexCPS2_Marrow, 2 },
    { L"(04) Not Used", 0x3b21600, 0x3b21620, indexCPS2_Marrow, 3 },
    { L"(05) Not Used", 0x3b21620, 0x3b21640, indexCPS2_Marrow, 4 },
    { L"(06) Not Used", 0x3b21640, 0x3b21660, indexCPS2_Marrow, 5 },
    { L"(07) Not Used", 0x3b21660, 0x3b21680, indexCPS2_Marrow, 6 },
    { L"(08) Not Used", 0x3b21680, 0x3b216a0, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_HP[] =
{
    { L"Main Color HP", 0x3b216a0, 0x3b216c0, indexCPS2_Marrow, 0 },
    { L"(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b216c0, 0x3b216e0, indexCPS2_Marrow, 1 },
    { L"(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b216e0, 0x3b21700, indexCPS2_Marrow, 2 },
    { L"(04) Not Used", 0x3b21700, 0x3b21720, indexCPS2_Marrow, 3 },
    { L"(05) Not Used", 0x3b21720, 0x3b21740, indexCPS2_Marrow, 4 },
    { L"(06) Not Used", 0x3b21740, 0x3b21760, indexCPS2_Marrow, 5 },
    { L"(07) Not Used", 0x3b21760, 0x3b21780, indexCPS2_Marrow, 6 },
    { L"(08) Not Used", 0x3b21780, 0x3b217a0, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_HK[] =
{
    { L"Main Color HK", 0x3b217a0, 0x3b217c0, indexCPS2_Marrow, 0 },
    { L"(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b217c0, 0x3b217e0, indexCPS2_Marrow, 1 },
    { L"(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b217e0, 0x3b21800, indexCPS2_Marrow, 2 },
    { L"(04) Not Used", 0x3b21800, 0x3b21820, indexCPS2_Marrow, 3 },
    { L"(05) Not Used", 0x3b21820, 0x3b21840, indexCPS2_Marrow, 4 },
    { L"(06) Not Used", 0x3b21840, 0x3b21860, indexCPS2_Marrow, 5 },
    { L"(07) Not Used", 0x3b21860, 0x3b21880, indexCPS2_Marrow, 6 },
    { L"(08) Not Used", 0x3b21880, 0x3b218a0, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_A1[] =
{
    { L"Main Color A1", 0x3b218a0, 0x3b218c0, indexCPS2_Marrow, 0 },
    { L"(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b218c0, 0x3b218e0, indexCPS2_Marrow, 1 },
    { L"(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b218e0, 0x3b21900, indexCPS2_Marrow, 2 },
    { L"(04) Not Used", 0x3b21900, 0x3b21920, indexCPS2_Marrow, 3 },
    { L"(05) Not Used", 0x3b21920, 0x3b21940, indexCPS2_Marrow, 4 },
    { L"(06) Not Used", 0x3b21940, 0x3b21960, indexCPS2_Marrow, 5 },
    { L"(07) Not Used", 0x3b21960, 0x3b21980, indexCPS2_Marrow, 6 },
    { L"(08) Not Used", 0x3b21980, 0x3b219a0, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3b219a0, 0x3b219c0, indexCPS2_Marrow, 0 },
    { L"(02) ID:01-07 : Not Used ID: 08-15 Sewer Lid / fp / Broken Monitor", 0x3b219c0, 0x3b219e0, indexCPS2_Marrow, 1 },
    { L"(03) ID:01-08 : Ride & Slash (flash) ID: 09-15 Not Used", 0x3b219e0, 0x3b21a00, indexCPS2_Marrow, 2 },
    { L"(04) Not Used", 0x3b21a00, 0x3b21a20, indexCPS2_Marrow, 3 },
    { L"(05) Not Used", 0x3b21a20, 0x3b21a40, indexCPS2_Marrow, 4 },
    { L"(06) Not Used", 0x3b21a40, 0x3b21a60, indexCPS2_Marrow, 5 },
    { L"(07) Not Used", 0x3b21a60, 0x3b21a80, indexCPS2_Marrow, 6 },
    { L"(08) Not Used", 0x3b21a80, 0x3b21aa0, indexCPS2_Marrow, 7 },
};

const sGame_PaletteDataset MVC2_A_MARROW_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3b21aa0, 0x3b21ac0, indexCPS2_Marrow, 0 },
    { L"Burning Light", 0x3b21ac0, 0x3b21ae0, indexCPS2_Marrow, 0 },
    { L"Shocked Dark", 0x3b21ae0, 0x3b21b00, indexCPS2_Marrow, 0 },
    { L"Shocked Light", 0x3b21b00, 0x3b21b20, indexCPS2_Marrow, 0 },
    { L"Dark Burning Dark", 0x3b21b20, 0x3b21b40, indexCPS2_Marrow, 0 },
    { L"Dark Burning Light", 0x3b21b40, 0x3b21b60, indexCPS2_Marrow, 0 },
    { L"Kinetic Charge Dark", 0x3b21b60, 0x3b21b80, indexCPS2_Marrow, 0 },
    { L"Kinetic Charge Light", 0x3b21b80, 0x3b21ba0, indexCPS2_Marrow, 0 },
};

const sDescTreeNode MVC2_A_MARROW_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_LP, ARRAYSIZE(MVC2_A_MARROW_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_LK, ARRAYSIZE(MVC2_A_MARROW_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_HP, ARRAYSIZE(MVC2_A_MARROW_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_HK, ARRAYSIZE(MVC2_A_MARROW_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_A1, ARRAYSIZE(MVC2_A_MARROW_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_A2, ARRAYSIZE(MVC2_A_MARROW_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MARROW_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x3c2d5a0, 0x3c2d5c0, indexCPS2_Cable, 0 },
    { L"(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d5c0, 0x3c2d5e0, indexCPS2_Cable, 1 },
    { L"(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d5e0, 0x3c2d600, indexCPS2_Cable, 2 },
    { L"(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d600, 0x3c2d620, indexCPS2_Cable, 3 },
    { L"(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d620, 0x3c2d640, indexCPS2_Cable, 4 },
    { L"(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d640, 0x3c2d660, indexCPS2_Cable, 5 },
    { L"(07) Not Used", 0x3c2d660, 0x3c2d680, indexCPS2_Cable, 0 },
    { L"(08) Not Used", 0x3c2d680, 0x3c2d6a0, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x3c2d6a0, 0x3c2d6c0, indexCPS2_Cable, 0 },
    { L"(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d6c0, 0x3c2d6e0, indexCPS2_Cable, 1 },
    { L"(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d6e0, 0x3c2d700, indexCPS2_Cable, 2 },
    { L"(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d700, 0x3c2d720, indexCPS2_Cable, 3 },
    { L"(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d720, 0x3c2d740, indexCPS2_Cable, 4 },
    { L"(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d740, 0x3c2d760, indexCPS2_Cable, 5 },
    { L"(07) Not Used", 0x3c2d760, 0x3c2d780, indexCPS2_Cable, 0 },
    { L"(08) Not Used", 0x3c2d780, 0x3c2d7a0, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x3c2d7a0, 0x3c2d7c0, indexCPS2_Cable, 0 },
    { L"(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d7c0, 0x3c2d7e0, indexCPS2_Cable, 1 },
    { L"(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d7e0, 0x3c2d800, indexCPS2_Cable, 2 },
    { L"(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d800, 0x3c2d820, indexCPS2_Cable, 3 },
    { L"(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d820, 0x3c2d840, indexCPS2_Cable, 4 },
    { L"(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d840, 0x3c2d860, indexCPS2_Cable, 5 },
    { L"(07) Not Used", 0x3c2d860, 0x3c2d880, indexCPS2_Cable, 0 },
    { L"(08) Not Used", 0x3c2d880, 0x3c2d8a0, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x3c2d8a0, 0x3c2d8c0, indexCPS2_Cable, 0 },
    { L"(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d8c0, 0x3c2d8e0, indexCPS2_Cable, 1 },
    { L"(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d8e0, 0x3c2d900, indexCPS2_Cable, 2 },
    { L"(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2d900, 0x3c2d920, indexCPS2_Cable, 3 },
    { L"(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2d920, 0x3c2d940, indexCPS2_Cable, 4 },
    { L"(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2d940, 0x3c2d960, indexCPS2_Cable, 5 },
    { L"(07) Not Used", 0x3c2d960, 0x3c2d980, indexCPS2_Cable, 0 },
    { L"(08) Not Used", 0x3c2d980, 0x3c2d9a0, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x3c2d9a0, 0x3c2d9c0, indexCPS2_Cable, 0 },
    { L"(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2d9c0, 0x3c2d9e0, indexCPS2_Cable, 1 },
    { L"(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2d9e0, 0x3c2da00, indexCPS2_Cable, 2 },
    { L"(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2da00, 0x3c2da20, indexCPS2_Cable, 3 },
    { L"(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2da20, 0x3c2da40, indexCPS2_Cable, 4 },
    { L"(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2da40, 0x3c2da60, indexCPS2_Cable, 5 },
    { L"(07) Not Used", 0x3c2da60, 0x3c2da80, indexCPS2_Cable, 0 },
    { L"(08) Not Used", 0x3c2da80, 0x3c2daa0, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3c2daa0, 0x3c2dac0, indexCPS2_Cable, 0 },
    { L"(02) ID: 01-08 : ElecTrap(Burst)/Intro/Crackdown/Viper Beam || ID: 09-15 : Eye & Arm Flash (stance) / Scimitar (shine) / Psy-Charge", 0x3c2dac0, 0x3c2dae0, indexCPS2_Cable, 1 },
    { L"(03) ID: 01-04: Scimitar (Blade) ID: 05-09: Not Used", 0x3c2dae0, 0x3c2db00, indexCPS2_Cable, 2 },
    { L"(04) ID: 01-08: Gunshot ID: 09-15 : Viper Beam Gun / HVB Gun / ElecTrap (Grandes)", 0x3c2db00, 0x3c2db20, indexCPS2_Cable, 3 },
    { L"(05) ID: 01-08: Hyper Viper Beam (Laser)", 0x3c2db20, 0x3c2db40, indexCPS2_Cable, 4 },
    { L"(06) ID: 01-08: Psy-Charge (Explosion)", 0x3c2db40, 0x3c2db60, indexCPS2_Cable, 5 },
    { L"(07) Not Used", 0x3c2db60, 0x3c2db80, indexCPS2_Cable, 0 },
    { L"(08) Not Used", 0x3c2db80, 0x3c2dba0, indexCPS2_Cable, 7 },
};

const sGame_PaletteDataset MVC2_A_CABLE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3c2dba0, 0x3c2dbc0, indexCPS2_Cable, 0 },
    { L"Burning Light", 0x3c2dbc0, 0x3c2dbe0, indexCPS2_Cable, 0 },
    { L"Shocked Dark", 0x3c2dbe0, 0x3c2dc00, indexCPS2_Cable, 0 },
    { L"Shocked Light", 0x3c2dc00, 0x3c2dc20, indexCPS2_Cable, 0 },
    { L"Dark Burning Dark", 0x3c2dc20, 0x3c2dc40, indexCPS2_Cable, 0 },
    { L"Dark Burning Light", 0x3c2dc40, 0x3c2dc60, indexCPS2_Cable, 0 },
    { L"Kinetic Charge Dark", 0x3c2dc60, 0x3c2dc80, indexCPS2_Cable, 0 },
    { L"Kinetic Charge Light", 0x3c2dc80, 0x3c2dca0, indexCPS2_Cable, 0 },
};

const sDescTreeNode MVC2_A_CABLE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_LP, ARRAYSIZE(MVC2_A_CABLE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_LK, ARRAYSIZE(MVC2_A_CABLE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_HP, ARRAYSIZE(MVC2_A_CABLE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_HK, ARRAYSIZE(MVC2_A_CABLE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_A1, ARRAYSIZE(MVC2_A_CABLE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_A2, ARRAYSIZE(MVC2_A_CABLE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CABLE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_LP[] =
{
    { L"Main Color (shared for all buttons) LP", 0x3d19480, 0x3d194a0, indexCPS2_Abyss1, 0 },
    { L"(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d194a0, 0x3d194c0, indexCPS2_Abyss1, 1 },
    { L"(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d194c0, 0x3d194e0, indexCPS2_Abyss1, 2 },
    { L"(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d194e0, 0x3d19500, indexCPS2_Abyss1, 3 },
    { L"(05) Super Armor Frame (when being hit)", 0x3d19500, 0x3d19520, indexCPS2_Abyss1, 0 },
    { L"(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19520, 0x3d19540, indexCPS2_Abyss1, 5 },
    { L"(07) Titan Flame", 0x3d19540, 0x3d19560, indexCPS2_Abyss1, 6 },
    { L"(08) Not Used", 0x3d19560, 0x3d19580, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_LK[] =
{
    { L"Main Color (shared for all buttons) LK", 0x3d19580, 0x3d195a0, indexCPS2_Abyss1, 0 },
    { L"(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d195a0, 0x3d195c0, indexCPS2_Abyss1, 1 },
    { L"(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d195c0, 0x3d195e0, indexCPS2_Abyss1, 2 },
    { L"(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d195e0, 0x3d19600, indexCPS2_Abyss1, 3 },
    { L"(05) Super Armor Frame (when being hit)", 0x3d19600, 0x3d19620, indexCPS2_Abyss1, 0 },
    { L"(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19620, 0x3d19640, indexCPS2_Abyss1, 5 },
    { L"(07) Titan Flame", 0x3d19640, 0x3d19660, indexCPS2_Abyss1, 6 },
    { L"(08) Not Used", 0x3d19660, 0x3d19680, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_HP[] =
{
    { L"Main Color (shared for all buttons) HP", 0x3d19680, 0x3d196a0, indexCPS2_Abyss1, 0 },
    { L"(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d196a0, 0x3d196c0, indexCPS2_Abyss1, 1 },
    { L"(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d196c0, 0x3d196e0, indexCPS2_Abyss1, 2 },
    { L"(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d196e0, 0x3d19700, indexCPS2_Abyss1, 3 },
    { L"(05) Super Armor Frame (when being hit)", 0x3d19700, 0x3d19720, indexCPS2_Abyss1, 0 },
    { L"(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19720, 0x3d19740, indexCPS2_Abyss1, 5 },
    { L"(07) Titan Flame", 0x3d19740, 0x3d19760, indexCPS2_Abyss1, 6 },
    { L"(08) Not Used", 0x3d19760, 0x3d19780, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_HK[] =
{
    { L"Main Color (shared for all buttons) HK", 0x3d19780, 0x3d197a0, indexCPS2_Abyss1, 0 },
    { L"(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d197a0, 0x3d197c0, indexCPS2_Abyss1, 1 },
    { L"(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d197c0, 0x3d197e0, indexCPS2_Abyss1, 2 },
    { L"(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d197e0, 0x3d19800, indexCPS2_Abyss1, 3 },
    { L"(05) Super Armor Frame (when being hit)", 0x3d19800, 0x3d19820, indexCPS2_Abyss1, 0 },
    { L"(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19820, 0x3d19840, indexCPS2_Abyss1, 5 },
    { L"(07) Titan Flame", 0x3d19840, 0x3d19860, indexCPS2_Abyss1, 6 },
    { L"(08) Not Used", 0x3d19860, 0x3d19880, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_A1[] =
{
    { L"Main Color (shared for all buttons) A1", 0x3d19880, 0x3d198a0, indexCPS2_Abyss1, 0 },
    { L"(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d198a0, 0x3d198c0, indexCPS2_Abyss1, 1 },
    { L"(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d198c0, 0x3d198e0, indexCPS2_Abyss1, 2 },
    { L"(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d198e0, 0x3d19900, indexCPS2_Abyss1, 3 },
    { L"(05) Super Armor Frame (when being hit)", 0x3d19900, 0x3d19920, indexCPS2_Abyss1, 0 },
    { L"(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19920, 0x3d19940, indexCPS2_Abyss1, 5 },
    { L"(07) Titan Flame", 0x3d19940, 0x3d19960, indexCPS2_Abyss1, 6 },
    { L"(08) Not Used", 0x3d19960, 0x3d19980, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_A2[] =
{
    { L"Main Color (shared for all buttons) A2", 0x3d19980, 0x3d199a0, indexCPS2_Abyss1, 0 },
    { L"(02) ID:02-09 Titan Dash // Electric Sphere ID: 10-15 Not Used", 0x3d199a0, 0x3d199c0, indexCPS2_Abyss1, 1 },
    { L"(03) ID:02-09 Titan Laser // Elecric Sphere (Hand effect) ID: 10-15 Titan Laser", 0x3d199c0, 0x3d199e0, indexCPS2_Abyss1, 2 },
    { L"(04) ID:01-11 Titan Smash (hand swipe) ID: 11-15 Not Used", 0x3d199e0, 0x3d19a00, indexCPS2_Abyss1, 3 },
    { L"(05) Super Armor Frame (when being hit)", 0x3d19a00, 0x3d19a20, indexCPS2_Abyss1, 0 },
    { L"(06) Trident (Winpose) / Titan Rage (Super) / Titan Horn", 0x3d19a20, 0x3d19a40, indexCPS2_Abyss1, 5 },
    { L"(07) Titan Flame", 0x3d19a40, 0x3d19a60, indexCPS2_Abyss1, 6 },
    { L"(08) Not Used", 0x3d19a60, 0x3d19a80, indexCPS2_Abyss1, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS1_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3d19a80, 0x3d19aa0, indexCPS2_Abyss1, 0 },
    { L"Burning Light", 0x3d19aa0, 0x3d19ac0, indexCPS2_Abyss1, 0 },
    { L"Shocked Dark", 0x3d19ac0, 0x3d19ae0, indexCPS2_Abyss1, 0 },
    { L"Shocked Light", 0x3d19ae0, 0x3d19b00, indexCPS2_Abyss1, 0 },
    { L"Dark Burning Dark", 0x3d19b00, 0x3d19b20, indexCPS2_Abyss1, 0 },
    { L"Dark Burning Light", 0x3d19b20, 0x3d19b40, indexCPS2_Abyss1, 0 },
    { L"Kinetic Charge Dark", 0x3d19b40, 0x3d19b60, indexCPS2_Abyss1, 0 },
    { L"Kinetic Charge Light", 0x3d19b60, 0x3d19b80, indexCPS2_Abyss1, 0 },
};

const sDescTreeNode MVC2_A_ABYSS1_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_LP, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_LK, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_HP, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_HK, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_A1, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_A2, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ABYSS1_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_LP[] =
{
    { L"Main Color (button specific) LP", 0x3da68e0, 0x3da6900, indexCPS2_Abyss2, 0, &pairFullyLinkedNode },
    { L"(02) Not Used", 0x3da6900, 0x3da6920, indexCPS2_Abyss2, 1 },
    { L"(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6920, 0x3da6940, indexCPS2_Abyss2, 2 },
    { L"(04) Not Used", 0x3da6940, 0x3da6960, indexCPS2_Abyss2, 3 },
    { L"(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6960, 0x3da6980, indexCPS2_Abyss2, 4 },
    { L"(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6980, 0x3da69a0, indexCPS2_Abyss2, 5 },
    { L"(07) ID:01-09 Plasma Flame", 0x3da69a0, 0x3da69c0, indexCPS2_Abyss2, 6 },
    { L"(08) Not Used", 0x3da69c0, 0x3da69e0, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_LK[] =
{
    { L"Main Color (button specific) LK", 0x3da69e0, 0x3da6a00, indexCPS2_Abyss2, 0, &pairFullyLinkedNode },
    { L"(02) Not Used", 0x3da6a00, 0x3da6a20, indexCPS2_Abyss2, 1 },
    { L"(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6a20, 0x3da6a40, indexCPS2_Abyss2, 2 },
    { L"(04) Not Used", 0x3da6a40, 0x3da6a60, indexCPS2_Abyss2, 3 },
    { L"(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6a60, 0x3da6a80, indexCPS2_Abyss2, 4 },
    { L"(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6a80, 0x3da6aa0, indexCPS2_Abyss2, 5 },
    { L"(07) ID:01-09 Plasma Flame", 0x3da6aa0, 0x3da6ac0, indexCPS2_Abyss2, 6 },
    { L"(08) Not Used", 0x3da6ac0, 0x3da6ae0, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_HP[] =
{
    { L"Main Color (button specific) HP", 0x3da6ae0, 0x3da6b00, indexCPS2_Abyss2, 0, &pairFullyLinkedNode },
    { L"(02) Not Used", 0x3da6b00, 0x3da6b20, indexCPS2_Abyss2, 1 },
    { L"(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6b20, 0x3da6b40, indexCPS2_Abyss2, 2 },
    { L"(04) Not Used", 0x3da6b40, 0x3da6b60, indexCPS2_Abyss2, 3 },
    { L"(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6b60, 0x3da6b80, indexCPS2_Abyss2, 4 },
    { L"(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6b80, 0x3da6ba0, indexCPS2_Abyss2, 5 },
    { L"(07) ID:01-09 Plasma Flame", 0x3da6ba0, 0x3da6bc0, indexCPS2_Abyss2, 6 },
    { L"(08) Not Used", 0x3da6bc0, 0x3da6be0, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_HK[] =
{
    { L"Main Color (button specific) HK", 0x3da6be0, 0x3da6c00, indexCPS2_Abyss2, 0, &pairFullyLinkedNode },
    { L"(02) Not Used", 0x3da6c00, 0x3da6c20, indexCPS2_Abyss2, 1 },
    { L"(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6c20, 0x3da6c40, indexCPS2_Abyss2, 2 },
    { L"(04) Not Used", 0x3da6c40, 0x3da6c60, indexCPS2_Abyss2, 3 },
    { L"(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6c60, 0x3da6c80, indexCPS2_Abyss2, 4 },
    { L"(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6c80, 0x3da6ca0, indexCPS2_Abyss2, 5 },
    { L"(07) ID:01-09 Plasma Flame", 0x3da6ca0, 0x3da6cc0, indexCPS2_Abyss2, 6 },
    { L"(08) Not Used", 0x3da6cc0, 0x3da6ce0, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_A1[] =
{
    { L"Main Color (button specific) A1", 0x3da6ce0, 0x3da6d00, indexCPS2_Abyss2, 0, &pairFullyLinkedNode },
    { L"(02) Not Used", 0x3da6d00, 0x3da6d20, indexCPS2_Abyss2, 1 },
    { L"(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6d20, 0x3da6d40, indexCPS2_Abyss2, 2 },
    { L"(04) Not Used", 0x3da6d40, 0x3da6d60, indexCPS2_Abyss2, 3 },
    { L"(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6d60, 0x3da6d80, indexCPS2_Abyss2, 4 },
    { L"(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6d80, 0x3da6da0, indexCPS2_Abyss2, 5 },
    { L"(07) ID:01-09 Plasma Flame", 0x3da6da0, 0x3da6dc0, indexCPS2_Abyss2, 6 },
    { L"(08) Not Used", 0x3da6dc0, 0x3da6de0, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_A2[] =
{
    { L"Main Color (button specific) A2", 0x3da6de0, 0x3da6e00, indexCPS2_Abyss2, 0, &pairFullyLinkedNode },
    { L"(02) Not Used", 0x3da6e00, 0x3da6e20, indexCPS2_Abyss2, 1 },
    { L"(03) ID:01-09 Not Used ID:10-14 Plasma Bubble ID:15 Not Used", 0x3da6e20, 0x3da6e40, indexCPS2_Abyss2, 2 },
    { L"(04) Not Used", 0x3da6e40, 0x3da6e60, indexCPS2_Abyss2, 3 },
    { L"(05) ID:01-09 Plasma Bubble (burst) ID:10-14 Plasma Beam/ Plasma Laser (glitch) ID:15 Beam (glitch)", 0x3da6e60, 0x3da6e80, indexCPS2_Abyss2, 4 },
    { L"(06) ID:01-12 Plasma Beam/ Plasma Laser / Plasma Rage (Special) ID:13-15 Plasma Beam (Loading Frame)", 0x3da6e80, 0x3da6ea0, indexCPS2_Abyss2, 5 },
    { L"(07) ID:01-09 Plasma Flame", 0x3da6ea0, 0x3da6ec0, indexCPS2_Abyss2, 6 },
    { L"(08) Not Used", 0x3da6ec0, 0x3da6ee0, indexCPS2_Abyss2, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS2_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3da6ee0, 0x3da6f00, indexCPS2_Abyss2, 0 },
    { L"Burning Light", 0x3da6f00, 0x3da6f20, indexCPS2_Abyss2, 0 },
    { L"Shocked Dark", 0x3da6f20, 0x3da6f40, indexCPS2_Abyss2, 0 },
    { L"Shocked Light", 0x3da6f40, 0x3da6f60, indexCPS2_Abyss2, 0 },
    { L"Dark Burning Dark", 0x3da6f60, 0x3da6f80, indexCPS2_Abyss2, 0 },
    { L"Dark Burning Light", 0x3da6f80, 0x3da6fa0, indexCPS2_Abyss2, 0 },
    { L"Kinetic Charge Dark", 0x3da6fa0, 0x3da6fc0, indexCPS2_Abyss2, 0 },
    { L"Kinetic Charge Light", 0x3da6fc0, 0x3da6fe0, indexCPS2_Abyss2, 0 },
};

const sDescTreeNode MVC2_A_ABYSS2_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_LP, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_LK, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_HP, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_HK, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_A1, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_A2, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ABYSS2_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_LP[] =
{
    { L"Main Color (shared for all buttons) / Rising Fire LP", 0x3e80560, 0x3e80580, indexCPS2_Abyss3, 0 },
    { L"(02) Beast Flame / Beast Pillar", 0x3e80580, 0x3e805a0, indexCPS2_Abyss3, 1 },
    { L"(03) Not Used", 0x3e805a0, 0x3e805c0, indexCPS2_Abyss3, 2 },
    { L"(04) Super Armor Frame (when being hit)", 0x3e805c0, 0x3e805e0, indexCPS2_Abyss3, 3 },
    { L"(05) Not Used", 0x3e805e0, 0x3e80600, indexCPS2_Abyss3, 4 },
    { L"(06) Not Used", 0x3e80600, 0x3e80620, indexCPS2_Abyss3, 5 },
    { L"(07) Not Used", 0x3e80620, 0x3e80640, indexCPS2_Abyss3, 6 },
    { L"(08) Not Used", 0x3e80640, 0x3e80660, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_LK[] =
{
    { L"Main Color (shared for all buttons) / Rising Fire LK", 0x3e80660, 0x3e80680, indexCPS2_Abyss3, 0 },
    { L"(02) Beast Flame / Beast Pillar", 0x3e80680, 0x3e806a0, indexCPS2_Abyss3, 1 },
    { L"(03) Not Used", 0x3e806a0, 0x3e806c0, indexCPS2_Abyss3, 2 },
    { L"(04) Super Armor Frame (when being hit)", 0x3e806c0, 0x3e806e0, indexCPS2_Abyss3, 3 },
    { L"(05) Not Used", 0x3e806e0, 0x3e80700, indexCPS2_Abyss3, 4 },
    { L"(06) Not Used", 0x3e80700, 0x3e80720, indexCPS2_Abyss3, 5 },
    { L"(07) Not Used", 0x3e80720, 0x3e80740, indexCPS2_Abyss3, 6 },
    { L"(08) Not Used", 0x3e80740, 0x3e80760, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_HP[] =
{
    { L"Main Color (shared for all buttons) / Rising Fire HP", 0x3e80760, 0x3e80780, indexCPS2_Abyss3, 0 },
    { L"(02) Beast Flame / Beast Pillar", 0x3e80780, 0x3e807a0, indexCPS2_Abyss3, 1 },
    { L"(03) Not Used", 0x3e807a0, 0x3e807c0, indexCPS2_Abyss3, 2 },
    { L"(04) Super Armor Frame (when being hit)", 0x3e807c0, 0x3e807e0, indexCPS2_Abyss3, 3 },
    { L"(05) Not Used", 0x3e807e0, 0x3e80800, indexCPS2_Abyss3, 4 },
    { L"(06) Not Used", 0x3e80800, 0x3e80820, indexCPS2_Abyss3, 5 },
    { L"(07) Not Used", 0x3e80820, 0x3e80840, indexCPS2_Abyss3, 6 },
    { L"(08) Not Used", 0x3e80840, 0x3e80860, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_HK[] =
{
    { L"Main Color (shared for all buttons) / Rising Fire HK", 0x3e80860, 0x3e80880, indexCPS2_Abyss3, 0 },
    { L"(02) Beast Flame / Beast Pillar", 0x3e80880, 0x3e808a0, indexCPS2_Abyss3, 1 },
    { L"(03) Not Used", 0x3e808a0, 0x3e808c0, indexCPS2_Abyss3, 2 },
    { L"(04) Super Armor Frame (when being hit)", 0x3e808c0, 0x3e808e0, indexCPS2_Abyss3, 3 },
    { L"(05) Not Used", 0x3e808e0, 0x3e80900, indexCPS2_Abyss3, 4 },
    { L"(06) Not Used", 0x3e80900, 0x3e80920, indexCPS2_Abyss3, 5 },
    { L"(07) Not Used", 0x3e80920, 0x3e80940, indexCPS2_Abyss3, 6 },
    { L"(08) Not Used", 0x3e80940, 0x3e80960, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_A1[] =
{
    { L"Main Color (shared for all buttons) / Rising Fire A1", 0x3e80960, 0x3e80980, indexCPS2_Abyss3, 0 },
    { L"(02) Beast Flame / Beast Pillar", 0x3e80980, 0x3e809a0, indexCPS2_Abyss3, 1 },
    { L"(03) Not Used", 0x3e809a0, 0x3e809c0, indexCPS2_Abyss3, 2 },
    { L"(04) Super Armor Frame (when being hit)", 0x3e809c0, 0x3e809e0, indexCPS2_Abyss3, 3 },
    { L"(05) Not Used", 0x3e809e0, 0x3e80a00, indexCPS2_Abyss3, 4 },
    { L"(06) Not Used", 0x3e80a00, 0x3e80a20, indexCPS2_Abyss3, 5 },
    { L"(07) Not Used", 0x3e80a20, 0x3e80a40, indexCPS2_Abyss3, 6 },
    { L"(08) Not Used", 0x3e80a40, 0x3e80a60, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_A2[] =
{
    { L"Main Color (shared for all buttons) / Rising Fire A2", 0x3e80a60, 0x3e80a80, indexCPS2_Abyss3, 0 },
    { L"(02) Beast Flame / Beast Pillar", 0x3e80a80, 0x3e80aa0, indexCPS2_Abyss3, 1 },
    { L"(03) Not Used", 0x3e80aa0, 0x3e80ac0, indexCPS2_Abyss3, 2 },
    { L"(04) Super Armor Frame (when being hit)", 0x3e80ac0, 0x3e80ae0, indexCPS2_Abyss3, 3 },
    { L"(05) Not Used", 0x3e80ae0, 0x3e80b00, indexCPS2_Abyss3, 4 },
    { L"(06) Not Used", 0x3e80b00, 0x3e80b20, indexCPS2_Abyss3, 5 },
    { L"(07) Not Used", 0x3e80b20, 0x3e80b40, indexCPS2_Abyss3, 6 },
    { L"(08) Not Used", 0x3e80b40, 0x3e80b60, indexCPS2_Abyss3, 7 },
};

const sGame_PaletteDataset MVC2_A_ABYSS3_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3e80b60, 0x3e80b80, indexCPS2_Abyss3, 0 },
    { L"Burning Light", 0x3e80b80, 0x3e80ba0, indexCPS2_Abyss3, 0 },
    { L"Shocked Dark", 0x3e80ba0, 0x3e80bc0, indexCPS2_Abyss3, 0 },
    { L"Shocked Light", 0x3e80bc0, 0x3e80be0, indexCPS2_Abyss3, 0 },
    { L"Dark Burning Dark", 0x3e80be0, 0x3e80c00, indexCPS2_Abyss3, 0 },
    { L"Dark Burning Light", 0x3e80c00, 0x3e80c20, indexCPS2_Abyss3, 0 },
    { L"Kinetic Charge Dark", 0x3e80c20, 0x3e80c40, indexCPS2_Abyss3, 0 },
    { L"Kinetic Charge Light", 0x3e80c40, 0x3e80c60, indexCPS2_Abyss3, 0 },
};

const sDescTreeNode MVC2_A_ABYSS3_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_LP, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_LK, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_HP, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_HK, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_A1, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_A2, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ABYSS3_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_LP[] =
{
    { L"Main Color LP", 0x3f00960, 0x3f00980, indexCPS2_ChunLi, 0, &pairNext },
    { L"(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00980, 0x3f009a0, indexCPS2_ChunLi, 1 },
    { L"(03) Lightning Kicks / Kikouken / Kouken", 0x3f009a0, 0x3f009c0, indexCPS2_ChunLi, 2 },
    { L"(04) Not Used", 0x3f009c0, 0x3f009e0, indexCPS2_ChunLi, 3 },
    { L"(05) Not Used", 0x3f009e0, 0x3f00a00, indexCPS2_ChunLi, 4 },
    { L"(06) Not Used", 0x3f00a00, 0x3f00a20, indexCPS2_ChunLi, 5 },
    { L"(07) Not Used", 0x3f00a20, 0x3f00a40, indexCPS2_ChunLi, 6 },
    { L"(08) Not Used", 0x3f00a40, 0x3f00a60, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_LK[] =
{
    { L"Main Color LK", 0x3f00a60, 0x3f00a80, indexCPS2_ChunLi, 0, &pairNext },
    { L"(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00a80, 0x3f00aa0, indexCPS2_ChunLi, 1 },
    { L"(03) Lightning Kicks / Kikouken / Kouken", 0x3f00aa0, 0x3f00ac0, indexCPS2_ChunLi, 2 },
    { L"(04) Not Used", 0x3f00ac0, 0x3f00ae0, indexCPS2_ChunLi, 3 },
    { L"(05) Not Used", 0x3f00ae0, 0x3f00b00, indexCPS2_ChunLi, 4 },
    { L"(06) Not Used", 0x3f00b00, 0x3f00b20, indexCPS2_ChunLi, 5 },
    { L"(07) Not Used", 0x3f00b20, 0x3f00b40, indexCPS2_ChunLi, 6 },
    { L"(08) Not Used", 0x3f00b40, 0x3f00b60, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_HP[] =
{
    { L"Main Color HP", 0x3f00b60, 0x3f00b80, indexCPS2_ChunLi, 0, &pairNext },
    { L"(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00b80, 0x3f00ba0, indexCPS2_ChunLi, 1 },
    { L"(03) Lightning Kicks / Kikouken / Kouken", 0x3f00ba0, 0x3f00bc0, indexCPS2_ChunLi, 2 },
    { L"(04) Not Used", 0x3f00bc0, 0x3f00be0, indexCPS2_ChunLi, 3 },
    { L"(05) Not Used", 0x3f00be0, 0x3f00c00, indexCPS2_ChunLi, 4 },
    { L"(06) Not Used", 0x3f00c00, 0x3f00c20, indexCPS2_ChunLi, 5 },
    { L"(07) Not Used", 0x3f00c20, 0x3f00c40, indexCPS2_ChunLi, 6 },
    { L"(08) Not Used", 0x3f00c40, 0x3f00c60, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_HK[] =
{
    { L"Main Color HK", 0x3f00c60, 0x3f00c80, indexCPS2_ChunLi, 0, &pairNext },
    { L"(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00c80, 0x3f00ca0, indexCPS2_ChunLi, 1 },
    { L"(03) Lightning Kicks / Kikouken / Kouken", 0x3f00ca0, 0x3f00cc0, indexCPS2_ChunLi, 2 },
    { L"(04) Not Used", 0x3f00cc0, 0x3f00ce0, indexCPS2_ChunLi, 3 },
    { L"(05) Not Used", 0x3f00ce0, 0x3f00d00, indexCPS2_ChunLi, 4 },
    { L"(06) Not Used", 0x3f00d00, 0x3f00d20, indexCPS2_ChunLi, 5 },
    { L"(07) Not Used", 0x3f00d20, 0x3f00d40, indexCPS2_ChunLi, 6 },
    { L"(08) Not Used", 0x3f00d40, 0x3f00d60, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_A1[] =
{
    { L"Main Color A1", 0x3f00d60, 0x3f00d80, indexCPS2_ChunLi, 0, &pairNext },
    { L"(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00d80, 0x3f00da0, indexCPS2_ChunLi, 1 },
    { L"(03) Lightning Kicks / Kikouken / Kouken", 0x3f00da0, 0x3f00dc0, indexCPS2_ChunLi, 2 },
    { L"(04) Not Used", 0x3f00dc0, 0x3f00de0, indexCPS2_ChunLi, 3 },
    { L"(05) Not Used", 0x3f00de0, 0x3f00e00, indexCPS2_ChunLi, 4 },
    { L"(06) Not Used", 0x3f00e00, 0x3f00e20, indexCPS2_ChunLi, 5 },
    { L"(07) Not Used", 0x3f00e20, 0x3f00e40, indexCPS2_ChunLi, 6 },
    { L"(08) Not Used", 0x3f00e40, 0x3f00e60, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3f00e60, 0x3f00e80, indexCPS2_ChunLi, 0, &pairNext },
    { L"(02) ID:01-05 Not Used 06-15 : Keiokuken (shades)", 0x3f00e80, 0x3f00ea0, indexCPS2_ChunLi, 1 },
    { L"(03) Lightning Kicks / Kikouken / Kouken", 0x3f00ea0, 0x3f00ec0, indexCPS2_ChunLi, 2 },
    { L"(04) Not Used", 0x3f00ec0, 0x3f00ee0, indexCPS2_ChunLi, 3 },
    { L"(05) Not Used", 0x3f00ee0, 0x3f00f00, indexCPS2_ChunLi, 4 },
    { L"(06) Not Used", 0x3f00f00, 0x3f00f20, indexCPS2_ChunLi, 5 },
    { L"(07) Not Used", 0x3f00f20, 0x3f00f40, indexCPS2_ChunLi, 6 },
    { L"(08) Not Used", 0x3f00f40, 0x3f00f60, indexCPS2_ChunLi, 7 },
};

const sGame_PaletteDataset MVC2_A_CHUNLI_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3f00f60, 0x3f00f80, indexCPS2_ChunLi, 0 },
    { L"Burning Light", 0x3f00f80, 0x3f00fa0, indexCPS2_ChunLi, 0 },
    { L"Shocked Dark", 0x3f00fa0, 0x3f00fc0, indexCPS2_ChunLi, 0 },
    { L"Shocked Light", 0x3f00fc0, 0x3f00fe0, indexCPS2_ChunLi, 0 },
    { L"Dark Burning Dark", 0x3f00fe0, 0x3f01000, indexCPS2_ChunLi, 0 },
    { L"Dark Burning Light", 0x3f01000, 0x3f01020, indexCPS2_ChunLi, 0 },
    { L"Kinetic Charge Dark", 0x3f01020, 0x3f01040, indexCPS2_ChunLi, 0 },
    { L"Kinetic Charge Light", 0x3f01040, 0x3f01060, indexCPS2_ChunLi, 0 },
};

const sDescTreeNode MVC2_A_CHUNLI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_LP, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_LK, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_HP, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_HK, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_A1, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_A2, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CHUNLI_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x3f93960, 0x3f93980, indexCPS2_Megaman, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93980, 0x3f939a0, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f939a0, 0x3f939c0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f939c0, 0x3f939e0, indexCPS2_Megaman, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x3f939e0, 0x3f93a00, indexCPS2_Megaman, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93a00, 0x3f93a20, indexCPS2_Megaman, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93a20, 0x3f93a40, indexCPS2_Megaman, 6 },
    { L"(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93a40, 0x3f93a60, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x3f93a60, 0x3f93a80, indexCPS2_Megaman, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93a80, 0x3f93aa0, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93aa0, 0x3f93ac0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93ac0, 0x3f93ae0, indexCPS2_Megaman, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x3f93ae0, 0x3f93b00, indexCPS2_Megaman, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93b00, 0x3f93b20, indexCPS2_Megaman, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93b20, 0x3f93b40, indexCPS2_Megaman, 6 },
    { L"(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93b40, 0x3f93b60, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x3f93b60, 0x3f93b80, indexCPS2_Megaman, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93b80, 0x3f93ba0, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93ba0, 0x3f93bc0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93bc0, 0x3f93be0, indexCPS2_Megaman, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x3f93be0, 0x3f93c00, indexCPS2_Megaman, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93c00, 0x3f93c20, indexCPS2_Megaman, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93c20, 0x3f93c40, indexCPS2_Megaman, 6 },
    { L"(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93c40, 0x3f93c60, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x3f93c60, 0x3f93c80, indexCPS2_Megaman, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93c80, 0x3f93ca0, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93ca0, 0x3f93cc0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93cc0, 0x3f93ce0, indexCPS2_Megaman, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x3f93ce0, 0x3f93d00, indexCPS2_Megaman, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93d00, 0x3f93d20, indexCPS2_Megaman, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93d20, 0x3f93d40, indexCPS2_Megaman, 6 },
    { L"(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93d40, 0x3f93d60, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x3f93d60, 0x3f93d80, indexCPS2_Megaman, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93d80, 0x3f93da0, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93da0, 0x3f93dc0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93dc0, 0x3f93de0, indexCPS2_Megaman, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x3f93de0, 0x3f93e00, indexCPS2_Megaman, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93e00, 0x3f93e20, indexCPS2_Megaman, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93e20, 0x3f93e40, indexCPS2_Megaman, 6 },
    { L"(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93e40, 0x3f93e60, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x3f93e60, 0x3f93e80, indexCPS2_Megaman, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x3f93e80, 0x3f93ea0, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x3f93ea0, 0x3f93ec0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Megaman (StartUp glow)", 0x3f93ec0, 0x3f93ee0, indexCPS2_Megaman, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x3f93ee0, 0x3f93f00, indexCPS2_Megaman, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x3f93f00, 0x3f93f20, indexCPS2_Megaman, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x3f93f20, 0x3f93f40, indexCPS2_Megaman, 6 },
    { L"(08) ID:01-08 Hyper Megaman (Rush Projectile) ID:09-15 Dr. Light (background)", 0x3f93f40, 0x3f93f60, indexCPS2_Megaman, 7 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x3f93f60, 0x3f93f80, indexCPS2_Megaman, 0 },
    { L"Burning Light", 0x3f93f80, 0x3f93fa0, indexCPS2_Megaman, 0 },
    { L"Shocked Dark", 0x3f93fa0, 0x3f93fc0, indexCPS2_Megaman, 0 },
    { L"Shocked Light", 0x3f93fc0, 0x3f93fe0, indexCPS2_Megaman, 0 },
    { L"Dark Burning Dark", 0x3f93fe0, 0x3f94000, indexCPS2_Megaman, 0 },
    { L"Dark Burning Light", 0x3f94000, 0x3f94020, indexCPS2_Megaman, 0 },
    { L"Kinetic Charge Dark", 0x3f94020, 0x3f94040, indexCPS2_Megaman, 0 },
    { L"Kinetic Charge Light", 0x3f94040, 0x3f94060, indexCPS2_Megaman, 0 },
};

const sGame_PaletteDataset MVC2_A_MEGAMAN_PALETTES_EXTRAS[] =
{
    { L"09: LP Megaman hair (all buttons)", 0x3f94060, 0x3f94080, indexCPS2_Megaman, 38 },
    { L"0a: LP Death Animation (all buttons)", 0x3f94080, 0x3f940a0, indexCPS2_Megaman, 11 },
    { L"0b: LP Megaman Intro 1", 0x3f940a0, 0x3f940c0, indexCPS2_Megaman, 0 },
    { L"0c: LP Megaman Intro 2", 0x3f940c0, 0x3f940e0, indexCPS2_Megaman, 0 },
    { L"0d: LP Megaman Intro 3", 0x3f940e0, 0x3f94100, indexCPS2_Megaman, 0 },
    { L"0e: LP Megaman Intro 4", 0x3f94100, 0x3f94120, indexCPS2_Megaman, 0 },
    { L"0f: LP Megaman Intro 5", 0x3f94120, 0x3f94140, indexCPS2_Megaman, 0 },
    { L"10: LP Megaman Intro 6", 0x3f94140, 0x3f94160, indexCPS2_Megaman, 0 },
    { L"11: LP Megaman Intro 7", 0x3f94160, 0x3f94180, indexCPS2_Megaman, 0 },
    { L"12: LP Megaman Intro 8", 0x3f94180, 0x3f941a0, indexCPS2_Megaman, 0 },
    { L"13: LP Megaman Intro 9", 0x3f941a0, 0x3f941c0, indexCPS2_Megaman, 0 },
    { L"14: LP Rush 1", 0x3f941c0, 0x3f941e0, indexCPS2_Megaman, 1 },
    { L"15: LP Rush 2", 0x3f941e0, 0x3f94200, indexCPS2_Megaman, 1 },
    { L"16: LP Rush 3", 0x3f94200, 0x3f94220, indexCPS2_Megaman, 1 },
    { L"17: LP Rush 4", 0x3f94220, 0x3f94240, indexCPS2_Megaman, 1 },
    { L"18: LP Rush 5", 0x3f94240, 0x3f94260, indexCPS2_Megaman, 1 },
    { L"19: LP Rush 6", 0x3f94260, 0x3f94280, indexCPS2_Megaman, 1 },
    { L"1a: LP Rush 7", 0x3f94280, 0x3f942a0, indexCPS2_Megaman, 1 },
    { L"1b: LP Rush 8", 0x3f942a0, 0x3f942c0, indexCPS2_Megaman, 1 },
    { L"1c: LP Rush 9", 0x3f942c0, 0x3f942e0, indexCPS2_Megaman, 1 },
    { L"1d: LP Beat 1", 0x3f942e0, 0x3f94300, indexCPS2_Megaman, 2 },
    { L"1e: LP Beat 2", 0x3f94300, 0x3f94320, indexCPS2_Megaman, 2 },
    { L"1f: LP Beat 3", 0x3f94320, 0x3f94340, indexCPS2_Megaman, 2 },
    { L"20: LP Beat 4", 0x3f94340, 0x3f94360, indexCPS2_Megaman, 2 },
    { L"21: LP Beat 5", 0x3f94360, 0x3f94380, indexCPS2_Megaman, 2 },
    { L"22: LP Beat 6", 0x3f94380, 0x3f943a0, indexCPS2_Megaman, 2 },
    { L"23: LP Beat 7", 0x3f943a0, 0x3f943c0, indexCPS2_Megaman, 2 },
    { L"24: LP Beat 8", 0x3f943c0, 0x3f943e0, indexCPS2_Megaman, 2 },
    { L"25: LP Beat 9", 0x3f943e0, 0x3f94400, indexCPS2_Megaman, 2 },
    { L"26: LP Beat Plane 1", 0x3f94400, 0x3f94420, indexCPS2_Megaman, 36 },
    { L"27: LP Beat Plane 2", 0x3f94420, 0x3f94440, indexCPS2_Megaman, 36 },
    { L"28: LP Beat Plane 3", 0x3f94440, 0x3f94460, indexCPS2_Megaman, 36 },
    { L"29: LP Beat Plane 4", 0x3f94460, 0x3f94480, indexCPS2_Megaman, 36 },
    { L"2a: LP Beat Plane 5", 0x3f94480, 0x3f944a0, indexCPS2_Megaman, 36 },
    { L"2b: LP Beat Plane 6", 0x3f944a0, 0x3f944c0, indexCPS2_Megaman, 36 },
    { L"2c: LP Beat Plane 7", 0x3f944c0, 0x3f944e0, indexCPS2_Megaman, 36 },
    { L"2d: LP Beat Plane 8", 0x3f944e0, 0x3f94500, indexCPS2_Megaman, 36 },
    { L"2e: LP Beat Plane 9", 0x3f94500, 0x3f94520, indexCPS2_Megaman, 36 },
    { L"2f: LP charging Megaman 1", 0x3f94520, 0x3f94540, indexCPS2_Megaman, 0 },
    { L"30: LP charging Megaman 2", 0x3f94540, 0x3f94560, indexCPS2_Megaman, 0 },
    { L"31: LP charging Megaman 3", 0x3f94560, 0x3f94580, indexCPS2_Megaman, 0 },
    { L"32: LP charging Megaman 4", 0x3f94580, 0x3f945a0, indexCPS2_Megaman, 0 },
    { L"33: LP charging Megaman 5", 0x3f945a0, 0x3f945c0, indexCPS2_Megaman, 0 },
    { L"34: LP charging Megaman 6", 0x3f945c0, 0x3f945e0, indexCPS2_Megaman, 0 },
    { L"35: LP charging Megaman 7", 0x3f945e0, 0x3f94600, indexCPS2_Megaman, 0 },
    { L"36: LP charging Megaman 8", 0x3f94600, 0x3f94620, indexCPS2_Megaman, 0 },
    { L"37: LP charging Megaman 9", 0x3f94620, 0x3f94640, indexCPS2_Megaman, 0 },
    { L"38: LP Rush Drill 1", 0x3f94640, 0x3f94660, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"39: LP Rush Drill 2", 0x3f94660, 0x3f94680, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3a: LP Rush Drill 3", 0x3f94680, 0x3f946a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3b: LP Rush Drill 4", 0x3f946a0, 0x3f946c0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3c: LP Rush Drill 5", 0x3f946c0, 0x3f946e0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3d: LP Rush Drill 6", 0x3f946e0, 0x3f94700, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3e: LP Rush Drill 7", 0x3f94700, 0x3f94720, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3f: LP Rush Drill 8", 0x3f94720, 0x3f94740, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"40: LP Rush Drill 9", 0x3f94740, 0x3f94760, indexCPS2_Roll, 11 },
    { L"41: LP Teleport Intro", 0x3f94760, 0x3f94780, indexCPS2_Megaman, 13 },
    { L"42: LP Dr. Light", 0x3f94780, 0x3f947a0, indexCPS2_Megaman, 37 },
    { L"43: LP Hyper Megaman Armor 1", 0x3f947a0, 0x3f947c0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"44: LP Hyper Megaman Armor 2", 0x3f947c0, 0x3f947e0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"45: LP Hyper Megaman Armor 3", 0x3f947e0, 0x3f94800, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"46: LP Hyper Megaman Armor 4", 0x3f94800, 0x3f94820, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"47: LP Hyper Megaman Armor 5", 0x3f94820, 0x3f94840, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"48: LP Hyper Megaman Armor 6", 0x3f94840, 0x3f94860, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"49: LP Hyper Megaman Armor 7", 0x3f94860, 0x3f94880, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"4a: LP Hyper Megaman Armor 8", 0x3f94880, 0x3f948a0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"4b: LP Hyper Megaman Armor 9", 0x3f948a0, 0x3f948c0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"4c: LP Hyper Megaman 1", 0x3f948c0, 0x3f948e0, indexCPS2_Megaman, 40 },
    { L"4d: LP Hyper Megaman 2", 0x3f948e0, 0x3f94900, indexCPS2_Megaman, 40 },
    { L"4e: LP Hyper Megaman 3", 0x3f94900, 0x3f94920, indexCPS2_Megaman, 40 },
    { L"4f: LP Hyper Megaman 4", 0x3f94920, 0x3f94940, indexCPS2_Megaman, 40 },
    { L"50: LP Hyper Megaman 5", 0x3f94940, 0x3f94960, indexCPS2_Megaman, 40 },
    { L"51: LP Hyper Megaman 6", 0x3f94960, 0x3f94980, indexCPS2_Megaman, 40 },
    { L"52: LP Hyper Megaman 7", 0x3f94980, 0x3f949a0, indexCPS2_Megaman, 40 },
    { L"53: LP Hyper Megaman 8", 0x3f949a0, 0x3f949c0, indexCPS2_Megaman, 40 },
    { L"54: LP Hyper Megaman 9", 0x3f949c0, 0x3f949e0, indexCPS2_Megaman, 40 },
    { L"55: LP Hyper Megaman Missiles", 0x3f949e0, 0x3f94a00, indexCPS2_Megaman, 41 },
    { L"56: LP Rush Drill metal 1", 0x3f94a00, 0x3f94a20, indexCPS2_Roll, 12 },
    { L"57: LP Rush Drill metal 2", 0x3f94a20, 0x3f94a40, indexCPS2_Roll, 12 },
    { L"58: LP Rush Drill metal 3", 0x3f94a40, 0x3f94a60, indexCPS2_Roll, 12 },
    { L"59: LP Rush Drill metal 4", 0x3f94a60, 0x3f94a80, indexCPS2_Roll, 12 },
    { L"5a: LP Rush Drill metal 5", 0x3f94a80, 0x3f94aa0, indexCPS2_Roll, 12 },
    { L"5b: LP Rush Drill metal 6", 0x3f94aa0, 0x3f94ac0, indexCPS2_Roll, 12 },
    { L"5c: LP Rush Drill metal 7", 0x3f94ac0, 0x3f94ae0, indexCPS2_Roll, 12 },
    { L"5d: LP Rush Drill metal 8", 0x3f94ae0, 0x3f94b00, indexCPS2_Roll, 12 },
    { L"5e: LP Roll", 0x3f94b00, 0x3f94b20, indexCPS2_Roll, 0 },
    { L"5f: LP Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f94b20, 0x3f94b40, indexCPS2_Megaman, 0 },
    { L"60: LK Megaman hair (all buttons)", 0x3f94b40, 0x3f94b60, indexCPS2_Megaman, 38 },
    { L"61: LK Death Animation (all buttons)", 0x3f94b60, 0x3f94b80, indexCPS2_Megaman, 11 },
    { L"62: LK Megaman Intro 1", 0x3f94b80, 0x3f94ba0, indexCPS2_Megaman, 0 },
    { L"63: LK Megaman Intro 2", 0x3f94ba0, 0x3f94bc0, indexCPS2_Megaman, 0 },
    { L"64: LK Megaman Intro 3", 0x3f94bc0, 0x3f94be0, indexCPS2_Megaman, 0 },
    { L"65: LK Megaman Intro 4", 0x3f94be0, 0x3f94c00, indexCPS2_Megaman, 0 },
    { L"66: LK Megaman Intro 5", 0x3f94c00, 0x3f94c20, indexCPS2_Megaman, 0 },
    { L"67: LK Megaman Intro 6", 0x3f94c20, 0x3f94c40, indexCPS2_Megaman, 0 },
    { L"68: LK Megaman Intro 7", 0x3f94c40, 0x3f94c60, indexCPS2_Megaman, 0 },
    { L"69: LK Megaman Intro 8", 0x3f94c60, 0x3f94c80, indexCPS2_Megaman, 0 },
    { L"6a: LK Megaman Intro 9", 0x3f94c80, 0x3f94ca0, indexCPS2_Megaman, 0 },
    { L"6b: LK Rush 1", 0x3f94ca0, 0x3f94cc0, indexCPS2_Megaman, 1 },
    { L"6c: LK Rush 2", 0x3f94cc0, 0x3f94ce0, indexCPS2_Megaman, 1 },
    { L"6d: LK Rush 3", 0x3f94ce0, 0x3f94d00, indexCPS2_Megaman, 1 },
    { L"6e: LK Rush 4", 0x3f94d00, 0x3f94d20, indexCPS2_Megaman, 1 },
    { L"6f: LK Rush 5", 0x3f94d20, 0x3f94d40, indexCPS2_Megaman, 1 },
    { L"70: LK Rush 6", 0x3f94d40, 0x3f94d60, indexCPS2_Megaman, 1 },
    { L"71: LK Rush 7", 0x3f94d60, 0x3f94d80, indexCPS2_Megaman, 1 },
    { L"72: LK Rush 8", 0x3f94d80, 0x3f94da0, indexCPS2_Megaman, 1 },
    { L"73: LK Rush 9", 0x3f94da0, 0x3f94dc0, indexCPS2_Megaman, 1 },
    { L"74: LK Beat 1", 0x3f94dc0, 0x3f94de0, indexCPS2_Megaman, 2 },
    { L"75: LK Beat 2", 0x3f94de0, 0x3f94e00, indexCPS2_Megaman, 2 },
    { L"76: LK Beat 3", 0x3f94e00, 0x3f94e20, indexCPS2_Megaman, 2 },
    { L"77: LK Beat 4", 0x3f94e20, 0x3f94e40, indexCPS2_Megaman, 2 },
    { L"78: LK Beat 5", 0x3f94e40, 0x3f94e60, indexCPS2_Megaman, 2 },
    { L"79: LK Beat 6", 0x3f94e60, 0x3f94e80, indexCPS2_Megaman, 2 },
    { L"7a: LK Beat 7", 0x3f94e80, 0x3f94ea0, indexCPS2_Megaman, 2 },
    { L"7b: LK Beat 8", 0x3f94ea0, 0x3f94ec0, indexCPS2_Megaman, 2 },
    { L"7c: LK Beat 9", 0x3f94ec0, 0x3f94ee0, indexCPS2_Megaman, 2 },
    { L"7d: LK Beat Plane 1", 0x3f94ee0, 0x3f94f00, indexCPS2_Megaman, 36 },
    { L"7e: LK Beat Plane 2", 0x3f94f00, 0x3f94f20, indexCPS2_Megaman, 36 },
    { L"7f: LK Beat Plane 3", 0x3f94f20, 0x3f94f40, indexCPS2_Megaman, 36 },
    { L"80: LK Beat Plane 4", 0x3f94f40, 0x3f94f60, indexCPS2_Megaman, 36 },
    { L"81: LK Beat Plane 5", 0x3f94f60, 0x3f94f80, indexCPS2_Megaman, 36 },
    { L"82: LK Beat Plane 6", 0x3f94f80, 0x3f94fa0, indexCPS2_Megaman, 36 },
    { L"83: LK Beat Plane 7", 0x3f94fa0, 0x3f94fc0, indexCPS2_Megaman, 36 },
    { L"84: LK Beat Plane 8", 0x3f94fc0, 0x3f94fe0, indexCPS2_Megaman, 36 },
    { L"85: LK Beat Plane 9", 0x3f94fe0, 0x3f95000, indexCPS2_Megaman, 36 },
    { L"86: LK charging Megaman 1", 0x3f95000, 0x3f95020, indexCPS2_Megaman, 0 },
    { L"87: LK charging Megaman 2", 0x3f95020, 0x3f95040, indexCPS2_Megaman, 0 },
    { L"88: LK charging Megaman 3", 0x3f95040, 0x3f95060, indexCPS2_Megaman, 0 },
    { L"89: LK charging Megaman 4", 0x3f95060, 0x3f95080, indexCPS2_Megaman, 0 },
    { L"8a: LK charging Megaman 5", 0x3f95080, 0x3f950a0, indexCPS2_Megaman, 0 },
    { L"8b: LK charging Megaman 6", 0x3f950a0, 0x3f950c0, indexCPS2_Megaman, 0 },
    { L"8c: LK charging Megaman 7", 0x3f950c0, 0x3f950e0, indexCPS2_Megaman, 0 },
    { L"8d: LK charging Megaman 8", 0x3f950e0, 0x3f95100, indexCPS2_Megaman, 0 },
    { L"8e: LK charging Megaman 9", 0x3f95100, 0x3f95120, indexCPS2_Megaman, 0 },
    { L"8f: LK Rush Drill 1", 0x3f95120, 0x3f95140, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"90: LK Rush Drill 2", 0x3f95140, 0x3f95160, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"91: LK Rush Drill 3", 0x3f95160, 0x3f95180, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"92: LK Rush Drill 4", 0x3f95180, 0x3f951a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"93: LK Rush Drill 5", 0x3f951a0, 0x3f951c0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"94: LK Rush Drill 6", 0x3f951c0, 0x3f951e0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"95: LK Rush Drill 7", 0x3f951e0, 0x3f95200, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"96: LK Rush Drill 8", 0x3f95200, 0x3f95220, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"97: LK Rush Drill 9", 0x3f95220, 0x3f95240, indexCPS2_Roll, 11 },
    { L"98: LK Teleport Intro", 0x3f95240, 0x3f95260, indexCPS2_Megaman, 13 },
    { L"99: LK Dr. Light", 0x3f95260, 0x3f95280, indexCPS2_Megaman, 37 },
    { L"9a: LK Hyper Megaman Armor 1", 0x3f95280, 0x3f952a0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"9b: LK Hyper Megaman Armor 2", 0x3f952a0, 0x3f952c0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"9c: LK Hyper Megaman Armor 3", 0x3f952c0, 0x3f952e0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"9d: LK Hyper Megaman Armor 4", 0x3f952e0, 0x3f95300, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"9e: LK Hyper Megaman Armor 5", 0x3f95300, 0x3f95320, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"9f: LK Hyper Megaman Armor 6", 0x3f95320, 0x3f95340, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"a0: LK Hyper Megaman Armor 7", 0x3f95340, 0x3f95360, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"a1: LK Hyper Megaman Armor 8", 0x3f95360, 0x3f95380, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"a2: LK Hyper Megaman Armor 9", 0x3f95380, 0x3f953a0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"a3: LK Hyper Megaman 1", 0x3f953a0, 0x3f953c0, indexCPS2_Megaman, 40 },
    { L"a4: LK Hyper Megaman 2", 0x3f953c0, 0x3f953e0, indexCPS2_Megaman, 40 },
    { L"a5: LK Hyper Megaman 3", 0x3f953e0, 0x3f95400, indexCPS2_Megaman, 40 },
    { L"a6: LK Hyper Megaman 4", 0x3f95400, 0x3f95420, indexCPS2_Megaman, 40 },
    { L"a7: LK Hyper Megaman 5", 0x3f95420, 0x3f95440, indexCPS2_Megaman, 40 },
    { L"a8: LK Hyper Megaman 6", 0x3f95440, 0x3f95460, indexCPS2_Megaman, 40 },
    { L"a9: LK Hyper Megaman 7", 0x3f95460, 0x3f95480, indexCPS2_Megaman, 40 },
    { L"aa: LK Hyper Megaman 8", 0x3f95480, 0x3f954a0, indexCPS2_Megaman, 40 },
    { L"ab: LK Hyper Megaman 9", 0x3f954a0, 0x3f954c0, indexCPS2_Megaman, 40 },
    { L"ac: LK Hyper Megaman Missiles", 0x3f954c0, 0x3f954e0, indexCPS2_Megaman, 41 },
    { L"ad: LK Rush Drill metal 1", 0x3f954e0, 0x3f95500, indexCPS2_Roll, 12 },
    { L"ae: LK Rush Drill metal 2", 0x3f95500, 0x3f95520, indexCPS2_Roll, 12 },
    { L"af: LK Rush Drill metal 3", 0x3f95520, 0x3f95540, indexCPS2_Roll, 12 },
    { L"b0: LK Rush Drill metal 4", 0x3f95540, 0x3f95560, indexCPS2_Roll, 12 },
    { L"b1: LK Rush Drill metal 5", 0x3f95560, 0x3f95580, indexCPS2_Roll, 12 },
    { L"b2: LK Rush Drill metal 6", 0x3f95580, 0x3f955a0, indexCPS2_Roll, 12 },
    { L"b3: LK Rush Drill metal 7", 0x3f955a0, 0x3f955c0, indexCPS2_Roll, 12 },
    { L"b4: LK Rush Drill metal 8", 0x3f955c0, 0x3f955e0, indexCPS2_Roll, 12 },
    { L"b5: LK Roll", 0x3f955e0, 0x3f95600, indexCPS2_Roll, 0 },
    { L"b6: LK Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f95600, 0x3f95620, indexCPS2_Megaman, 0 },
    { L"b7: HP Megaman hair (all buttons)", 0x3f95620, 0x3f95640, indexCPS2_Megaman, 38 },
    { L"b8: HP Death Animation (all buttons)", 0x3f95640, 0x3f95660, indexCPS2_Megaman, 11 },
    { L"b9: HP Megaman Intro 1", 0x3f95660, 0x3f95680, indexCPS2_Megaman, 0 },
    { L"ba: HP Megaman Intro 2", 0x3f95680, 0x3f956a0, indexCPS2_Megaman, 0 },
    { L"bb: HP Megaman Intro 3", 0x3f956a0, 0x3f956c0, indexCPS2_Megaman, 0 },
    { L"bc: HP Megaman Intro 4", 0x3f956c0, 0x3f956e0, indexCPS2_Megaman, 0 },
    { L"bd: HP Megaman Intro 5", 0x3f956e0, 0x3f95700, indexCPS2_Megaman, 0 },
    { L"be: HP Megaman Intro 6", 0x3f95700, 0x3f95720, indexCPS2_Megaman, 0 },
    { L"bf: HP Megaman Intro 7", 0x3f95720, 0x3f95740, indexCPS2_Megaman, 0 },
    { L"c0: HP Megaman Intro 8", 0x3f95740, 0x3f95760, indexCPS2_Megaman, 0 },
    { L"c1: HP Megaman Intro 9", 0x3f95760, 0x3f95780, indexCPS2_Megaman, 0 },
    { L"c2: HP Rush 1", 0x3f95780, 0x3f957a0, indexCPS2_Megaman, 1 },
    { L"c3: HP Rush 2", 0x3f957a0, 0x3f957c0, indexCPS2_Megaman, 1 },
    { L"c4: HP Rush 3", 0x3f957c0, 0x3f957e0, indexCPS2_Megaman, 1 },
    { L"c5: HP Rush 4", 0x3f957e0, 0x3f95800, indexCPS2_Megaman, 1 },
    { L"c6: HP Rush 5", 0x3f95800, 0x3f95820, indexCPS2_Megaman, 1 },
    { L"c7: HP Rush 6", 0x3f95820, 0x3f95840, indexCPS2_Megaman, 1 },
    { L"c8: HP Rush 7", 0x3f95840, 0x3f95860, indexCPS2_Megaman, 1 },
    { L"c9: HP Rush 8", 0x3f95860, 0x3f95880, indexCPS2_Megaman, 1 },
    { L"ca: HP Rush 9", 0x3f95880, 0x3f958a0, indexCPS2_Megaman, 1 },
    { L"cb: HP Beat 1", 0x3f958a0, 0x3f958c0, indexCPS2_Megaman, 2 },
    { L"cc: HP Beat 2", 0x3f958c0, 0x3f958e0, indexCPS2_Megaman, 2 },
    { L"cd: HP Beat 3", 0x3f958e0, 0x3f95900, indexCPS2_Megaman, 2 },
    { L"ce: HP Beat 4", 0x3f95900, 0x3f95920, indexCPS2_Megaman, 2 },
    { L"cf: HP Beat 5", 0x3f95920, 0x3f95940, indexCPS2_Megaman, 2 },
    { L"d0: HP Beat 6", 0x3f95940, 0x3f95960, indexCPS2_Megaman, 2 },
    { L"d1: HP Beat 7", 0x3f95960, 0x3f95980, indexCPS2_Megaman, 2 },
    { L"d2: HP Beat 8", 0x3f95980, 0x3f959a0, indexCPS2_Megaman, 2 },
    { L"d3: HP Beat 9", 0x3f959a0, 0x3f959c0, indexCPS2_Megaman, 2 },
    { L"d4: HP Beat Plane 1", 0x3f959c0, 0x3f959e0, indexCPS2_Megaman, 36 },
    { L"d5: HP Beat Plane 2", 0x3f959e0, 0x3f95a00, indexCPS2_Megaman, 36 },
    { L"d6: HP Beat Plane 3", 0x3f95a00, 0x3f95a20, indexCPS2_Megaman, 36 },
    { L"d7: HP Beat Plane 4", 0x3f95a20, 0x3f95a40, indexCPS2_Megaman, 36 },
    { L"d8: HP Beat Plane 5", 0x3f95a40, 0x3f95a60, indexCPS2_Megaman, 36 },
    { L"d9: HP Beat Plane 6", 0x3f95a60, 0x3f95a80, indexCPS2_Megaman, 36 },
    { L"da: HP Beat Plane 7", 0x3f95a80, 0x3f95aa0, indexCPS2_Megaman, 36 },
    { L"db: HP Beat Plane 8", 0x3f95aa0, 0x3f95ac0, indexCPS2_Megaman, 36 },
    { L"dc: HP Beat Plane 9", 0x3f95ac0, 0x3f95ae0, indexCPS2_Megaman, 36 },
    { L"dd: HP charging Megaman 1", 0x3f95ae0, 0x3f95b00, indexCPS2_Megaman, 0 },
    { L"de: HP charging Megaman 2", 0x3f95b00, 0x3f95b20, indexCPS2_Megaman, 0 },
    { L"df: HP charging Megaman 3", 0x3f95b20, 0x3f95b40, indexCPS2_Megaman, 0 },
    { L"e0: HP charging Megaman 4", 0x3f95b40, 0x3f95b60, indexCPS2_Megaman, 0 },
    { L"e1: HP charging Megaman 5", 0x3f95b60, 0x3f95b80, indexCPS2_Megaman, 0 },
    { L"e2: HP charging Megaman 6", 0x3f95b80, 0x3f95ba0, indexCPS2_Megaman, 0 },
    { L"e3: HP charging Megaman 7", 0x3f95ba0, 0x3f95bc0, indexCPS2_Megaman, 0 },
    { L"e4: HP charging Megaman 8", 0x3f95bc0, 0x3f95be0, indexCPS2_Megaman, 0 },
    { L"e5: HP charging Megaman 9", 0x3f95be0, 0x3f95c00, indexCPS2_Megaman, 0 },
    { L"e6: HP Rush Drill 1", 0x3f95c00, 0x3f95c20, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"e7: HP Rush Drill 2", 0x3f95c20, 0x3f95c40, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"e8: HP Rush Drill 3", 0x3f95c40, 0x3f95c60, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"e9: HP Rush Drill 4", 0x3f95c60, 0x3f95c80, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ea: HP Rush Drill 5", 0x3f95c80, 0x3f95ca0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"eb: HP Rush Drill 6", 0x3f95ca0, 0x3f95cc0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ec: HP Rush Drill 7", 0x3f95cc0, 0x3f95ce0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ed: HP Rush Drill 8", 0x3f95ce0, 0x3f95d00, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ee: HP Rush Drill 9", 0x3f95d00, 0x3f95d20, indexCPS2_Roll, 11 },
    { L"ef: HP Teleport Intro", 0x3f95d20, 0x3f95d40, indexCPS2_Megaman, 13 },
    { L"f0: HP Dr. Light", 0x3f95d40, 0x3f95d60, indexCPS2_Megaman, 37 },
    { L"f1: HP Hyper Megaman Armor 1", 0x3f95d60, 0x3f95d80, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f2: HP Hyper Megaman Armor 2", 0x3f95d80, 0x3f95da0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f3: HP Hyper Megaman Armor 3", 0x3f95da0, 0x3f95dc0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f4: HP Hyper Megaman Armor 4", 0x3f95dc0, 0x3f95de0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f5: HP Hyper Megaman Armor 5", 0x3f95de0, 0x3f95e00, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f6: HP Hyper Megaman Armor 6", 0x3f95e00, 0x3f95e20, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f7: HP Hyper Megaman Armor 7", 0x3f95e20, 0x3f95e40, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f8: HP Hyper Megaman Armor 8", 0x3f95e40, 0x3f95e60, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"f9: HP Hyper Megaman Armor 9", 0x3f95e60, 0x3f95e80, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"fa: HP Hyper Megaman 1", 0x3f95e80, 0x3f95ea0, indexCPS2_Megaman, 40 },
    { L"fb: HP Hyper Megaman 2", 0x3f95ea0, 0x3f95ec0, indexCPS2_Megaman, 40 },
    { L"fc: HP Hyper Megaman 3", 0x3f95ec0, 0x3f95ee0, indexCPS2_Megaman, 40 },
    { L"fd: HP Hyper Megaman 4", 0x3f95ee0, 0x3f95f00, indexCPS2_Megaman, 40 },
    { L"fe: HP Hyper Megaman 5", 0x3f95f00, 0x3f95f20, indexCPS2_Megaman, 40 },
    { L"ff: HP Hyper Megaman 6", 0x3f95f20, 0x3f95f40, indexCPS2_Megaman, 40 },
    { L"100: HP Hyper Megaman 7", 0x3f95f40, 0x3f95f60, indexCPS2_Megaman, 40 },
    { L"101: HP Hyper Megaman 8", 0x3f95f60, 0x3f95f80, indexCPS2_Megaman, 40 },
    { L"102: HP Hyper Megaman 9", 0x3f95f80, 0x3f95fa0, indexCPS2_Megaman, 40 },
    { L"103: HP Hyper Megaman Missiles", 0x3f95fa0, 0x3f95fc0, indexCPS2_Megaman, 41 },
    { L"104: HP Rush Drill metal 1", 0x3f95fc0, 0x3f95fe0, indexCPS2_Roll, 12 },
    { L"105: HP Rush Drill metal 2", 0x3f95fe0, 0x3f96000, indexCPS2_Roll, 12 },
    { L"106: HP Rush Drill metal 3", 0x3f96000, 0x3f96020, indexCPS2_Roll, 12 },
    { L"107: HP Rush Drill metal 4", 0x3f96020, 0x3f96040, indexCPS2_Roll, 12 },
    { L"108: HP Rush Drill metal 5", 0x3f96040, 0x3f96060, indexCPS2_Roll, 12 },
    { L"109: HP Rush Drill metal 6", 0x3f96060, 0x3f96080, indexCPS2_Roll, 12 },
    { L"10a: HP Rush Drill metal 7", 0x3f96080, 0x3f960a0, indexCPS2_Roll, 12 },
    { L"10b: HP Rush Drill metal 8", 0x3f960a0, 0x3f960c0, indexCPS2_Roll, 12 },
    { L"10c: HP Roll", 0x3f960c0, 0x3f960e0, indexCPS2_Roll, 0 },
    { L"10d: HP Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f960e0, 0x3f96100, indexCPS2_Megaman, 0 },
    { L"10e: HK Megaman hair (all buttons)", 0x3f96100, 0x3f96120, indexCPS2_Megaman, 38 },
    { L"10f: HK Death Animation (all buttons)", 0x3f96120, 0x3f96140, indexCPS2_Megaman, 11 },
    { L"110: HK Megaman Intro 1", 0x3f96140, 0x3f96160, indexCPS2_Megaman, 0 },
    { L"111: HK Megaman Intro 2", 0x3f96160, 0x3f96180, indexCPS2_Megaman, 0 },
    { L"112: HK Megaman Intro 3", 0x3f96180, 0x3f961a0, indexCPS2_Megaman, 0 },
    { L"113: HK Megaman Intro 4", 0x3f961a0, 0x3f961c0, indexCPS2_Megaman, 0 },
    { L"114: HK Megaman Intro 5", 0x3f961c0, 0x3f961e0, indexCPS2_Megaman, 0 },
    { L"115: HK Megaman Intro 6", 0x3f961e0, 0x3f96200, indexCPS2_Megaman, 0 },
    { L"116: HK Megaman Intro 7", 0x3f96200, 0x3f96220, indexCPS2_Megaman, 0 },
    { L"117: HK Megaman Intro 8", 0x3f96220, 0x3f96240, indexCPS2_Megaman, 0 },
    { L"118: HK Megaman Intro 9", 0x3f96240, 0x3f96260, indexCPS2_Megaman, 0 },
    { L"119: HK Rush 1", 0x3f96260, 0x3f96280, indexCPS2_Megaman, 1 },
    { L"11a: HK Rush 2", 0x3f96280, 0x3f962a0, indexCPS2_Megaman, 1 },
    { L"11b: HK Rush 3", 0x3f962a0, 0x3f962c0, indexCPS2_Megaman, 1 },
    { L"11c: HK Rush 4", 0x3f962c0, 0x3f962e0, indexCPS2_Megaman, 1 },
    { L"11d: HK Rush 5", 0x3f962e0, 0x3f96300, indexCPS2_Megaman, 1 },
    { L"11e: HK Rush 6", 0x3f96300, 0x3f96320, indexCPS2_Megaman, 1 },
    { L"11f: HK Rush 7", 0x3f96320, 0x3f96340, indexCPS2_Megaman, 1 },
    { L"120: HK Rush 8", 0x3f96340, 0x3f96360, indexCPS2_Megaman, 1 },
    { L"121: HK Rush 9", 0x3f96360, 0x3f96380, indexCPS2_Megaman, 1 },
    { L"122: HK Beat 1", 0x3f96380, 0x3f963a0, indexCPS2_Megaman, 2 },
    { L"123: HK Beat 2", 0x3f963a0, 0x3f963c0, indexCPS2_Megaman, 2 },
    { L"124: HK Beat 3", 0x3f963c0, 0x3f963e0, indexCPS2_Megaman, 2 },
    { L"125: HK Beat 4", 0x3f963e0, 0x3f96400, indexCPS2_Megaman, 2 },
    { L"126: HK Beat 5", 0x3f96400, 0x3f96420, indexCPS2_Megaman, 2 },
    { L"127: HK Beat 6", 0x3f96420, 0x3f96440, indexCPS2_Megaman, 2 },
    { L"128: HK Beat 7", 0x3f96440, 0x3f96460, indexCPS2_Megaman, 2 },
    { L"129: HK Beat 8", 0x3f96460, 0x3f96480, indexCPS2_Megaman, 2 },
    { L"12a: HK Beat 9", 0x3f96480, 0x3f964a0, indexCPS2_Megaman, 2 },
    { L"12b: HK Beat Plane 1", 0x3f964a0, 0x3f964c0, indexCPS2_Megaman, 36 },
    { L"12c: HK Beat Plane 2", 0x3f964c0, 0x3f964e0, indexCPS2_Megaman, 36 },
    { L"12d: HK Beat Plane 3", 0x3f964e0, 0x3f96500, indexCPS2_Megaman, 36 },
    { L"12e: HK Beat Plane 4", 0x3f96500, 0x3f96520, indexCPS2_Megaman, 36 },
    { L"12f: HK Beat Plane 5", 0x3f96520, 0x3f96540, indexCPS2_Megaman, 36 },
    { L"130: HK Beat Plane 6", 0x3f96540, 0x3f96560, indexCPS2_Megaman, 36 },
    { L"131: HK Beat Plane 7", 0x3f96560, 0x3f96580, indexCPS2_Megaman, 36 },
    { L"132: HK Beat Plane 8", 0x3f96580, 0x3f965a0, indexCPS2_Megaman, 36 },
    { L"133: HK Beat Plane 9", 0x3f965a0, 0x3f965c0, indexCPS2_Megaman, 36 },
    { L"134: HK charging Megaman 1", 0x3f965c0, 0x3f965e0, indexCPS2_Megaman, 0 },
    { L"135: HK charging Megaman 2", 0x3f965e0, 0x3f96600, indexCPS2_Megaman, 0 },
    { L"136: HK charging Megaman 3", 0x3f96600, 0x3f96620, indexCPS2_Megaman, 0 },
    { L"137: HK charging Megaman 4", 0x3f96620, 0x3f96640, indexCPS2_Megaman, 0 },
    { L"138: HK charging Megaman 5", 0x3f96640, 0x3f96660, indexCPS2_Megaman, 0 },
    { L"139: HK charging Megaman 6", 0x3f96660, 0x3f96680, indexCPS2_Megaman, 0 },
    { L"13a: HK charging Megaman 7", 0x3f96680, 0x3f966a0, indexCPS2_Megaman, 0 },
    { L"13b: HK charging Megaman 8", 0x3f966a0, 0x3f966c0, indexCPS2_Megaman, 0 },
    { L"13c: HK charging Megaman 9", 0x3f966c0, 0x3f966e0, indexCPS2_Megaman, 0 },
    { L"13d: HK Rush Drill 1", 0x3f966e0, 0x3f96700, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"13e: HK Rush Drill 2", 0x3f96700, 0x3f96720, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"13f: HK Rush Drill 3", 0x3f96720, 0x3f96740, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"140: HK Rush Drill 4", 0x3f96740, 0x3f96760, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"141: HK Rush Drill 5", 0x3f96760, 0x3f96780, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"142: HK Rush Drill 6", 0x3f96780, 0x3f967a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"143: HK Rush Drill 7", 0x3f967a0, 0x3f967c0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"144: HK Rush Drill 8", 0x3f967c0, 0x3f967e0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"145: HK Rush Drill 9", 0x3f967e0, 0x3f96800, indexCPS2_Roll, 11 },
    { L"146: HK Teleport Intro", 0x3f96800, 0x3f96820, indexCPS2_Megaman, 13 },
    { L"147: HK Dr. Light", 0x3f96820, 0x3f96840, indexCPS2_Megaman, 37 },
    { L"148: HK Hyper Megaman Armor 1", 0x3f96840, 0x3f96860, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"149: HK Hyper Megaman Armor 2", 0x3f96860, 0x3f96880, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"14a: HK Hyper Megaman Armor 3", 0x3f96880, 0x3f968a0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"14b: HK Hyper Megaman Armor 4", 0x3f968a0, 0x3f968c0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"14c: HK Hyper Megaman Armor 5", 0x3f968c0, 0x3f968e0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"14d: HK Hyper Megaman Armor 6", 0x3f968e0, 0x3f96900, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"14e: HK Hyper Megaman Armor 7", 0x3f96900, 0x3f96920, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"14f: HK Hyper Megaman Armor 8", 0x3f96920, 0x3f96940, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"150: HK Hyper Megaman Armor 9", 0x3f96940, 0x3f96960, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"151: HK Hyper Megaman 1", 0x3f96960, 0x3f96980, indexCPS2_Megaman, 40 },
    { L"152: HK Hyper Megaman 2", 0x3f96980, 0x3f969a0, indexCPS2_Megaman, 40 },
    { L"153: HK Hyper Megaman 3", 0x3f969a0, 0x3f969c0, indexCPS2_Megaman, 40 },
    { L"154: HK Hyper Megaman 4", 0x3f969c0, 0x3f969e0, indexCPS2_Megaman, 40 },
    { L"155: HK Hyper Megaman 5", 0x3f969e0, 0x3f96a00, indexCPS2_Megaman, 40 },
    { L"156: HK Hyper Megaman 6", 0x3f96a00, 0x3f96a20, indexCPS2_Megaman, 40 },
    { L"157: HK Hyper Megaman 7", 0x3f96a20, 0x3f96a40, indexCPS2_Megaman, 40 },
    { L"158: HK Hyper Megaman 8", 0x3f96a40, 0x3f96a60, indexCPS2_Megaman, 40 },
    { L"159: HK Hyper Megaman 9", 0x3f96a60, 0x3f96a80, indexCPS2_Megaman, 40 },
    { L"15a: HK Hyper Megaman Missiles", 0x3f96a80, 0x3f96aa0, indexCPS2_Megaman, 41 },
    { L"15b: HK Rush Drill metal 1", 0x3f96aa0, 0x3f96ac0, indexCPS2_Roll, 12 },
    { L"15c: HK Rush Drill metal 2", 0x3f96ac0, 0x3f96ae0, indexCPS2_Roll, 12 },
    { L"15d: HK Rush Drill metal 3", 0x3f96ae0, 0x3f96b00, indexCPS2_Roll, 12 },
    { L"15e: HK Rush Drill metal 4", 0x3f96b00, 0x3f96b20, indexCPS2_Roll, 12 },
    { L"15f: HK Rush Drill metal 5", 0x3f96b20, 0x3f96b40, indexCPS2_Roll, 12 },
    { L"160: HK Rush Drill metal 6", 0x3f96b40, 0x3f96b60, indexCPS2_Roll, 12 },
    { L"161: HK Rush Drill metal 7", 0x3f96b60, 0x3f96b80, indexCPS2_Roll, 12 },
    { L"162: HK Rush Drill metal 8", 0x3f96b80, 0x3f96ba0, indexCPS2_Roll, 12 },
    { L"163: HK Roll", 0x3f96ba0, 0x3f96bc0, indexCPS2_Roll, 0 },
    { L"164: HK Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f96bc0, 0x3f96be0, indexCPS2_Megaman, 0 },
    { L"165: A1 Megaman hair (all buttons)", 0x3f96be0, 0x3f96c00, indexCPS2_Megaman, 38 },
    { L"166: A1 Death Animation (all buttons)", 0x3f96c00, 0x3f96c20, indexCPS2_Megaman, 11 },
    { L"167: A1 Megaman Intro 1", 0x3f96c20, 0x3f96c40, indexCPS2_Megaman, 0 },
    { L"168: A1 Megaman Intro 2", 0x3f96c40, 0x3f96c60, indexCPS2_Megaman, 0 },
    { L"169: A1 Megaman Intro 3", 0x3f96c60, 0x3f96c80, indexCPS2_Megaman, 0 },
    { L"16a: A1 Megaman Intro 4", 0x3f96c80, 0x3f96ca0, indexCPS2_Megaman, 0 },
    { L"16b: A1 Megaman Intro 5", 0x3f96ca0, 0x3f96cc0, indexCPS2_Megaman, 0 },
    { L"16c: A1 Megaman Intro 6", 0x3f96cc0, 0x3f96ce0, indexCPS2_Megaman, 0 },
    { L"16d: A1 Megaman Intro 7", 0x3f96ce0, 0x3f96d00, indexCPS2_Megaman, 0 },
    { L"16e: A1 Megaman Intro 8", 0x3f96d00, 0x3f96d20, indexCPS2_Megaman, 0 },
    { L"16f: A1 Megaman Intro 9", 0x3f96d20, 0x3f96d40, indexCPS2_Megaman, 0 },
    { L"170: A1 Rush 1", 0x3f96d40, 0x3f96d60, indexCPS2_Megaman, 1 },
    { L"171: A1 Rush 2", 0x3f96d60, 0x3f96d80, indexCPS2_Megaman, 1 },
    { L"172: A1 Rush 3", 0x3f96d80, 0x3f96da0, indexCPS2_Megaman, 1 },
    { L"173: A1 Rush 4", 0x3f96da0, 0x3f96dc0, indexCPS2_Megaman, 1 },
    { L"174: A1 Rush 5", 0x3f96dc0, 0x3f96de0, indexCPS2_Megaman, 1 },
    { L"175: A1 Rush 6", 0x3f96de0, 0x3f96e00, indexCPS2_Megaman, 1 },
    { L"176: A1 Rush 7", 0x3f96e00, 0x3f96e20, indexCPS2_Megaman, 1 },
    { L"177: A1 Rush 8", 0x3f96e20, 0x3f96e40, indexCPS2_Megaman, 1 },
    { L"178: A1 Rush 9", 0x3f96e40, 0x3f96e60, indexCPS2_Megaman, 1 },
    { L"179: A1 Beat 1", 0x3f96e60, 0x3f96e80, indexCPS2_Megaman, 2 },
    { L"17a: A1 Beat 2", 0x3f96e80, 0x3f96ea0, indexCPS2_Megaman, 2 },
    { L"17b: A1 Beat 3", 0x3f96ea0, 0x3f96ec0, indexCPS2_Megaman, 2 },
    { L"17c: A1 Beat 4", 0x3f96ec0, 0x3f96ee0, indexCPS2_Megaman, 2 },
    { L"17d: A1 Beat 5", 0x3f96ee0, 0x3f96f00, indexCPS2_Megaman, 2 },
    { L"17e: A1 Beat 6", 0x3f96f00, 0x3f96f20, indexCPS2_Megaman, 2 },
    { L"17f: A1 Beat 7", 0x3f96f20, 0x3f96f40, indexCPS2_Megaman, 2 },
    { L"180: A1 Beat 8", 0x3f96f40, 0x3f96f60, indexCPS2_Megaman, 2 },
    { L"181: A1 Beat 9", 0x3f96f60, 0x3f96f80, indexCPS2_Megaman, 2 },
    { L"182: A1 Beat Plane 1", 0x3f96f80, 0x3f96fa0, indexCPS2_Megaman, 36 },
    { L"183: A1 Beat Plane 2", 0x3f96fa0, 0x3f96fc0, indexCPS2_Megaman, 36 },
    { L"184: A1 Beat Plane 3", 0x3f96fc0, 0x3f96fe0, indexCPS2_Megaman, 36 },
    { L"185: A1 Beat Plane 4", 0x3f96fe0, 0x3f97000, indexCPS2_Megaman, 36 },
    { L"186: A1 Beat Plane 5", 0x3f97000, 0x3f97020, indexCPS2_Megaman, 36 },
    { L"187: A1 Beat Plane 6", 0x3f97020, 0x3f97040, indexCPS2_Megaman, 36 },
    { L"188: A1 Beat Plane 7", 0x3f97040, 0x3f97060, indexCPS2_Megaman, 36 },
    { L"189: A1 Beat Plane 8", 0x3f97060, 0x3f97080, indexCPS2_Megaman, 36 },
    { L"18a: A1 Beat Plane 9", 0x3f97080, 0x3f970a0, indexCPS2_Megaman, 36 },
    { L"18b: A1 charging Megaman 1", 0x3f970a0, 0x3f970c0, indexCPS2_Megaman, 0 },
    { L"18c: A1 charging Megaman 2", 0x3f970c0, 0x3f970e0, indexCPS2_Megaman, 0 },
    { L"18d: A1 charging Megaman 3", 0x3f970e0, 0x3f97100, indexCPS2_Megaman, 0 },
    { L"18e: A1 charging Megaman 4", 0x3f97100, 0x3f97120, indexCPS2_Megaman, 0 },
    { L"18f: A1 charging Megaman 5", 0x3f97120, 0x3f97140, indexCPS2_Megaman, 0 },
    { L"190: A1 charging Megaman 6", 0x3f97140, 0x3f97160, indexCPS2_Megaman, 0 },
    { L"191: A1 charging Megaman 7", 0x3f97160, 0x3f97180, indexCPS2_Megaman, 0 },
    { L"192: A1 charging Megaman 8", 0x3f97180, 0x3f971a0, indexCPS2_Megaman, 0 },
    { L"193: A1 charging Megaman 9", 0x3f971a0, 0x3f971c0, indexCPS2_Megaman, 0 },
    { L"194: A1 Rush Drill 1", 0x3f971c0, 0x3f971e0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"195: A1 Rush Drill 2", 0x3f971e0, 0x3f97200, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"196: A1 Rush Drill 3", 0x3f97200, 0x3f97220, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"197: A1 Rush Drill 4", 0x3f97220, 0x3f97240, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"198: A1 Rush Drill 5", 0x3f97240, 0x3f97260, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"199: A1 Rush Drill 6", 0x3f97260, 0x3f97280, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"19a: A1 Rush Drill 7", 0x3f97280, 0x3f972a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"19b: A1 Rush Drill 8", 0x3f972a0, 0x3f972c0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"19c: A1 Rush Drill 9", 0x3f972c0, 0x3f972e0, indexCPS2_Roll, 11 },
    { L"19d: A1 Teleport Intro", 0x3f972e0, 0x3f97300, indexCPS2_Megaman, 13 },
    { L"19e: A1 Dr. Light", 0x3f97300, 0x3f97320, indexCPS2_Megaman, 37 },
    { L"19f: A1 Hyper Megaman Armor 1", 0x3f97320, 0x3f97340, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a0: A1 Hyper Megaman Armor 2", 0x3f97340, 0x3f97360, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a1: A1 Hyper Megaman Armor 3", 0x3f97360, 0x3f97380, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a2: A1 Hyper Megaman Armor 4", 0x3f97380, 0x3f973a0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a3: A1 Hyper Megaman Armor 5", 0x3f973a0, 0x3f973c0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a4: A1 Hyper Megaman Armor 6", 0x3f973c0, 0x3f973e0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a5: A1 Hyper Megaman Armor 7", 0x3f973e0, 0x3f97400, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a6: A1 Hyper Megaman Armor 8", 0x3f97400, 0x3f97420, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a7: A1 Hyper Megaman Armor 9", 0x3f97420, 0x3f97440, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1a8: A1 Hyper Megaman 1", 0x3f97440, 0x3f97460, indexCPS2_Megaman, 40 },
    { L"1a9: A1 Hyper Megaman 2", 0x3f97460, 0x3f97480, indexCPS2_Megaman, 40 },
    { L"1aa: A1 Hyper Megaman 3", 0x3f97480, 0x3f974a0, indexCPS2_Megaman, 40 },
    { L"1ab: A1 Hyper Megaman 4", 0x3f974a0, 0x3f974c0, indexCPS2_Megaman, 40 },
    { L"1ac: A1 Hyper Megaman 5", 0x3f974c0, 0x3f974e0, indexCPS2_Megaman, 40 },
    { L"1ad: A1 Hyper Megaman 6", 0x3f974e0, 0x3f97500, indexCPS2_Megaman, 40 },
    { L"1ae: A1 Hyper Megaman 7", 0x3f97500, 0x3f97520, indexCPS2_Megaman, 40 },
    { L"1af: A1 Hyper Megaman 8", 0x3f97520, 0x3f97540, indexCPS2_Megaman, 40 },
    { L"1b0: A1 Hyper Megaman 9", 0x3f97540, 0x3f97560, indexCPS2_Megaman, 40 },
    { L"1b1: A1 Hyper Megaman Missiles", 0x3f97560, 0x3f97580, indexCPS2_Megaman, 41 },
    { L"1b2: A1 Rush Drill metal 1", 0x3f97580, 0x3f975a0, indexCPS2_Roll, 12 },
    { L"1b3: A1 Rush Drill metal 2", 0x3f975a0, 0x3f975c0, indexCPS2_Roll, 12 },
    { L"1b4: A1 Rush Drill metal 3", 0x3f975c0, 0x3f975e0, indexCPS2_Roll, 12 },
    { L"1b5: A1 Rush Drill metal 4", 0x3f975e0, 0x3f97600, indexCPS2_Roll, 12 },
    { L"1b6: A1 Rush Drill metal 5", 0x3f97600, 0x3f97620, indexCPS2_Roll, 12 },
    { L"1b7: A1 Rush Drill metal 6", 0x3f97620, 0x3f97640, indexCPS2_Roll, 12 },
    { L"1b8: A1 Rush Drill metal 7", 0x3f97640, 0x3f97660, indexCPS2_Roll, 12 },
    { L"1b9: A1 Rush Drill metal 8", 0x3f97660, 0x3f97680, indexCPS2_Roll, 12 },
    { L"1ba: A1 Roll", 0x3f97680, 0x3f976a0, indexCPS2_Roll, 0 },
    { L"1bb: A1 Magnetic Shockwave Power Up (MvC1 Ending)", 0x3f976a0, 0x3f976c0, indexCPS2_Megaman, 0 },
    { L"1bc: A2 Megaman hair (all buttons)", 0x3f976c0, 0x3f976e0, indexCPS2_Megaman, 38 },
    { L"1bd: A2 Death Animation (all buttons)", 0x3f976e0, 0x3f97700, indexCPS2_Megaman, 11 },
    { L"1be: A2 Megaman Intro 1", 0x3f97700, 0x3f97720, indexCPS2_Megaman, 0 },
    { L"1bf: A2 Megaman Intro 2", 0x3f97720, 0x3f97740, indexCPS2_Megaman, 0 },
    { L"1c0: A2 Megaman Intro 3", 0x3f97740, 0x3f97760, indexCPS2_Megaman, 0 },
    { L"1c1: A2 Megaman Intro 4", 0x3f97760, 0x3f97780, indexCPS2_Megaman, 0 },
    { L"1c2: A2 Megaman Intro 5", 0x3f97780, 0x3f977a0, indexCPS2_Megaman, 0 },
    { L"1c3: A2 Megaman Intro 6", 0x3f977a0, 0x3f977c0, indexCPS2_Megaman, 0 },
    { L"1c4: A2 Megaman Intro 7", 0x3f977c0, 0x3f977e0, indexCPS2_Megaman, 0 },
    { L"1c5: A2 Megaman Intro 8", 0x3f977e0, 0x3f97800, indexCPS2_Megaman, 0 },
    { L"1c6: A2 Megaman Intro 9", 0x3f97800, 0x3f97820, indexCPS2_Megaman, 0 },
    { L"1c7: A2 Rush 1", 0x3f97820, 0x3f97840, indexCPS2_Megaman, 1 },
    { L"1c8: A2 Rush 2", 0x3f97840, 0x3f97860, indexCPS2_Megaman, 1 },
    { L"1c9: A2 Rush 3", 0x3f97860, 0x3f97880, indexCPS2_Megaman, 1 },
    { L"1ca: A2 Rush 4", 0x3f97880, 0x3f978a0, indexCPS2_Megaman, 1 },
    { L"1cb: A2 Rush 5", 0x3f978a0, 0x3f978c0, indexCPS2_Megaman, 1 },
    { L"1cc: A2 Rush 6", 0x3f978c0, 0x3f978e0, indexCPS2_Megaman, 1 },
    { L"1cd: A2 Rush 7", 0x3f978e0, 0x3f97900, indexCPS2_Megaman, 1 },
    { L"1ce: A2 Rush 8", 0x3f97900, 0x3f97920, indexCPS2_Megaman, 1 },
    { L"1cf: A2 Rush 9", 0x3f97920, 0x3f97940, indexCPS2_Megaman, 1 },
    { L"1d0: A2 Beat 1", 0x3f97940, 0x3f97960, indexCPS2_Megaman, 2 },
    { L"1d1: A2 Beat 2", 0x3f97960, 0x3f97980, indexCPS2_Megaman, 2 },
    { L"1d2: A2 Beat 3", 0x3f97980, 0x3f979a0, indexCPS2_Megaman, 2 },
    { L"1d3: A2 Beat 4", 0x3f979a0, 0x3f979c0, indexCPS2_Megaman, 2 },
    { L"1d4: A2 Beat 5", 0x3f979c0, 0x3f979e0, indexCPS2_Megaman, 2 },
    { L"1d5: A2 Beat 6", 0x3f979e0, 0x3f97a00, indexCPS2_Megaman, 2 },
    { L"1d6: A2 Beat 7", 0x3f97a00, 0x3f97a20, indexCPS2_Megaman, 2 },
    { L"1d7: A2 Beat 8", 0x3f97a20, 0x3f97a40, indexCPS2_Megaman, 2 },
    { L"1d8: A2 Beat 9", 0x3f97a40, 0x3f97a60, indexCPS2_Megaman, 2 },
    { L"1d9: A2 Beat Plane 1", 0x3f97a60, 0x3f97a80, indexCPS2_Megaman, 36 },
    { L"1da: A2 Beat Plane 2", 0x3f97a80, 0x3f97aa0, indexCPS2_Megaman, 36 },
    { L"1db: A2 Beat Plane 3", 0x3f97aa0, 0x3f97ac0, indexCPS2_Megaman, 36 },
    { L"1dc: A2 Beat Plane 4", 0x3f97ac0, 0x3f97ae0, indexCPS2_Megaman, 36 },
    { L"1dd: A2 Beat Plane 5", 0x3f97ae0, 0x3f97b00, indexCPS2_Megaman, 36 },
    { L"1de: A2 Beat Plane 6", 0x3f97b00, 0x3f97b20, indexCPS2_Megaman, 36 },
    { L"1df: A2 Beat Plane 7", 0x3f97b20, 0x3f97b40, indexCPS2_Megaman, 36 },
    { L"1e0: A2 Beat Plane 8", 0x3f97b40, 0x3f97b60, indexCPS2_Megaman, 36 },
    { L"1e1: A2 Beat Plane 9", 0x3f97b60, 0x3f97b80, indexCPS2_Megaman, 36 },
    { L"1e2: A2 charging Megaman 1", 0x3f97b80, 0x3f97ba0, indexCPS2_Megaman, 0 },
    { L"1e3: A2 charging Megaman 2", 0x3f97ba0, 0x3f97bc0, indexCPS2_Megaman, 0 },
    { L"1e4: A2 charging Megaman 3", 0x3f97bc0, 0x3f97be0, indexCPS2_Megaman, 0 },
    { L"1e5: A2 charging Megaman 4", 0x3f97be0, 0x3f97c00, indexCPS2_Megaman, 0 },
    { L"1e6: A2 charging Megaman 5", 0x3f97c00, 0x3f97c20, indexCPS2_Megaman, 0 },
    { L"1e7: A2 charging Megaman 6", 0x3f97c20, 0x3f97c40, indexCPS2_Megaman, 0 },
    { L"1e8: A2 charging Megaman 7", 0x3f97c40, 0x3f97c60, indexCPS2_Megaman, 0 },
    { L"1e9: A2 charging Megaman 8", 0x3f97c60, 0x3f97c80, indexCPS2_Megaman, 0 },
    { L"1ea: A2 charging Megaman 9", 0x3f97c80, 0x3f97ca0, indexCPS2_Megaman, 0 },
    { L"1eb: A2 Rush Drill 1", 0x3f97ca0, 0x3f97cc0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ec: A2 Rush Drill 2", 0x3f97cc0, 0x3f97ce0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ed: A2 Rush Drill 3", 0x3f97ce0, 0x3f97d00, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ee: A2 Rush Drill 4", 0x3f97d00, 0x3f97d20, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ef: A2 Rush Drill 5", 0x3f97d20, 0x3f97d40, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f0: A2 Rush Drill 6", 0x3f97d40, 0x3f97d60, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f1: A2 Rush Drill 7", 0x3f97d60, 0x3f97d80, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f2: A2 Rush Drill 8", 0x3f97d80, 0x3f97da0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f3: A2 Rush Drill 9", 0x3f97da0, 0x3f97dc0, indexCPS2_Roll, 11 },
    { L"1f4: A2 Teleport Intro", 0x3f97dc0, 0x3f97de0, indexCPS2_Megaman, 13 },
    { L"1f5: A2 Dr. Light", 0x3f97de0, 0x3f97e00, indexCPS2_Megaman, 37 },
    { L"1f6: A2 Hyper Megaman Armor 1", 0x3f97e00, 0x3f97e20, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1f7: A2 Hyper Megaman Armor 2", 0x3f97e20, 0x3f97e40, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1f8: A2 Hyper Megaman Armor 3", 0x3f97e40, 0x3f97e60, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1f9: A2 Hyper Megaman Armor 4", 0x3f97e60, 0x3f97e80, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1fa: A2 Hyper Megaman Armor 5", 0x3f97e80, 0x3f97ea0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1fb: A2 Hyper Megaman Armor 6", 0x3f97ea0, 0x3f97ec0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1fc: A2 Hyper Megaman Armor 7", 0x3f97ec0, 0x3f97ee0, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1fd: A2 Hyper Megaman Armor 8", 0x3f97ee0, 0x3f97f00, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1fe: A2 Hyper Megaman Armor 9", 0x3f97f00, 0x3f97f20, indexCPS2_Megaman, 39, &pairHyperMegaman },
    { L"1ff: A2 Hyper Megaman 1", 0x3f97f20, 0x3f97f40, indexCPS2_Megaman, 40 },
    { L"200: A2 Hyper Megaman 2", 0x3f97f40, 0x3f97f60, indexCPS2_Megaman, 40 },
    { L"201: A2 Hyper Megaman 3", 0x3f97f60, 0x3f97f80, indexCPS2_Megaman, 40 },
    { L"202: A2 Hyper Megaman 4", 0x3f97f80, 0x3f97fa0, indexCPS2_Megaman, 40 },
    { L"203: A2 Hyper Megaman 5", 0x3f97fa0, 0x3f97fc0, indexCPS2_Megaman, 40 },
    { L"204: A2 Hyper Megaman 6", 0x3f97fc0, 0x3f97fe0, indexCPS2_Megaman, 40 },
    { L"205: A2 Hyper Megaman 7", 0x3f97fe0, 0x3f98000, indexCPS2_Megaman, 40 },
    { L"206: A2 Hyper Megaman 8", 0x3f98000, 0x3f98020, indexCPS2_Megaman, 40 },
    { L"207: A2 Hyper Megaman 9", 0x3f98020, 0x3f98040, indexCPS2_Megaman, 40 },
    { L"208: A2 Hyper Megaman Missiles", 0x3f98040, 0x3f98060, indexCPS2_Megaman, 41 },
    { L"209: A2 Rush Drill metal 1", 0x3f98060, 0x3f98080, indexCPS2_Roll, 12 },
    { L"20a: A2 Rush Drill metal 2", 0x3f98080, 0x3f980a0, indexCPS2_Roll, 12 },
    { L"20b: A2 Rush Drill metal 3", 0x3f980a0, 0x3f980c0, indexCPS2_Roll, 12 },
    { L"20c: A2 Rush Drill metal 4", 0x3f980c0, 0x3f980e0, indexCPS2_Roll, 12 },
    { L"20d: A2 Rush Drill metal 5", 0x3f980e0, 0x3f98100, indexCPS2_Roll, 12 },
    { L"20e: A2 Rush Drill metal 6", 0x3f98100, 0x3f98120, indexCPS2_Roll, 12 },
    { L"20f: A2 Rush Drill metal 7", 0x3f98120, 0x3f98140, indexCPS2_Roll, 12 },
    { L"210: A2 Rush Drill metal 8", 0x3f98140, 0x3f98160, indexCPS2_Roll, 12 },
    { L"211: A2 Roll", 0x3f98160, 0x3f98180, indexCPS2_Roll, 0 },
};

const sDescTreeNode MVC2_A_MEGAMAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MEGAMAN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4007740, 0x4007760, indexCPS2_Roll, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007760, 0x4007780, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007780, 0x40077a0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x40077a0, 0x40077c0, indexCPS2_Roll, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x40077c0, 0x40077e0, indexCPS2_Roll, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x40077e0, 0x4007800, indexCPS2_Roll, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007800, 0x4007820, indexCPS2_Roll, 6 },
    { L"(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007820, 0x4007840, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4007840, 0x4007860, indexCPS2_Roll, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007860, 0x4007880, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007880, 0x40078a0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x40078a0, 0x40078c0, indexCPS2_Roll, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x40078c0, 0x40078e0, indexCPS2_Roll, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x40078e0, 0x4007900, indexCPS2_Roll, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007900, 0x4007920, indexCPS2_Roll, 6 },
    { L"(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007920, 0x4007940, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4007940, 0x4007960, indexCPS2_Roll, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007960, 0x4007980, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007980, 0x40079a0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x40079a0, 0x40079c0, indexCPS2_Roll, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x40079c0, 0x40079e0, indexCPS2_Roll, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x40079e0, 0x4007a00, indexCPS2_Roll, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007a00, 0x4007a20, indexCPS2_Roll, 6 },
    { L"(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007a20, 0x4007a40, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4007a40, 0x4007a60, indexCPS2_Roll, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007a60, 0x4007a80, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007a80, 0x4007aa0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x4007aa0, 0x4007ac0, indexCPS2_Roll, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x4007ac0, 0x4007ae0, indexCPS2_Roll, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x4007ae0, 0x4007b00, indexCPS2_Roll, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007b00, 0x4007b20, indexCPS2_Roll, 6 },
    { L"(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007b20, 0x4007b40, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4007b40, 0x4007b60, indexCPS2_Roll, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007b60, 0x4007b80, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007b80, 0x4007ba0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x4007ba0, 0x4007bc0, indexCPS2_Roll, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x4007bc0, 0x4007be0, indexCPS2_Roll, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x4007be0, 0x4007c00, indexCPS2_Roll, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007c00, 0x4007c20, indexCPS2_Roll, 6 },
    { L"(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007c20, 0x4007c40, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4007c40, 0x4007c60, indexCPS2_Roll, 0 },
    { L"(02) Tornado Hold Special // Rush (stance & after super frame) // FlipTop (stance & after super frame)", 0x4007c60, 0x4007c80, indexCPS2_Megaman, 1 },
    { L"(03) ID:01-04: Rockball ID:05-11 Beat // FlipTop's Cake ID:12-15: Beat (wings)", 0x4007c80, 0x4007ca0, indexCPS2_Megaman, 2 },
    { L"(04) ID:01-08: Beat Plane (Fire) ID:09-15 Hyper Roll (StartUp glow)", 0x4007ca0, 0x4007cc0, indexCPS2_Roll, 3 },
    { L"(05) ID:01-08: Rush Drill (jets) ID:09-15: Power Ups (text)", 0x4007cc0, 0x4007ce0, indexCPS2_Roll, 4 },
    { L"(06) ID:01-08: Buster Shot // RockBall (shadows) ID:09-14: Leaf Shield", 0x4007ce0, 0x4007d00, indexCPS2_Roll, 5 },
    { L"(07) ID:01-08: Mega Buster Charged ID:09-15: Not Used", 0x4007d00, 0x4007d20, indexCPS2_Roll, 6 },
    { L"(08) ID:01-08 Hyper Roll (Rush Projectile) ID:09-15 Dr. Light (background)", 0x4007d20, 0x4007d40, indexCPS2_Roll, 7 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4007d40, 0x4007d60, indexCPS2_Roll, 0 },
    { L"Burning Light", 0x4007d60, 0x4007d80, indexCPS2_Roll, 0 },
    { L"Shocked Dark", 0x4007d80, 0x4007da0, indexCPS2_Roll, 0 },
    { L"Shocked Light", 0x4007da0, 0x4007dc0, indexCPS2_Roll, 0 },
    { L"Dark Burning Dark", 0x4007dc0, 0x4007de0, indexCPS2_Roll, 0 },
    { L"Dark Burning Light", 0x4007de0, 0x4007e00, indexCPS2_Roll, 0 },
    { L"Kinetic Charge Dark", 0x4007e00, 0x4007e20, indexCPS2_Roll, 0 },
    { L"Kinetic Charge Light", 0x4007e20, 0x4007e40, indexCPS2_Roll, 0 },
};

const sGame_PaletteDataset MVC2_A_ROLL_PALETTES_EXTRAS[] =
{
    { L"09: LP Megaman hair (all buttons)", 0x4007e40, 0x4007e60, indexCPS2_Megaman, 38 },
    { L"0a: LP Death Animation (all buttons)", 0x4007e60, 0x4007e80, indexCPS2_Megaman, 11 },
    { L"0b: LP Roll Intro 1", 0x4007e80, 0x4007ea0, indexCPS2_Roll, 0 },
    { L"0c: LP Roll Intro 2", 0x4007ea0, 0x4007ec0, indexCPS2_Roll, 0 },
    { L"0d: LP Roll Intro 3", 0x4007ec0, 0x4007ee0, indexCPS2_Roll, 0 },
    { L"0e: LP Roll Intro 4", 0x4007ee0, 0x4007f00, indexCPS2_Roll, 0 },
    { L"0f: LP Roll Intro 5", 0x4007f00, 0x4007f20, indexCPS2_Roll, 0 },
    { L"10: LP Roll Intro 6", 0x4007f20, 0x4007f40, indexCPS2_Roll, 0 },
    { L"11: LP Roll Intro 7", 0x4007f40, 0x4007f60, indexCPS2_Roll, 0 },
    { L"12: LP Roll Intro 8", 0x4007f60, 0x4007f80, indexCPS2_Roll, 0 },
    { L"13: LP Roll Intro 9", 0x4007f80, 0x4007fa0, indexCPS2_Roll, 0 },
    { L"14: LP Rush 1", 0x4007fa0, 0x4007fc0, indexCPS2_Megaman, 1 },
    { L"15: LP Rush 2", 0x4007fc0, 0x4007fe0, indexCPS2_Megaman, 1 },
    { L"16: LP Rush 3", 0x4007fe0, 0x4008000, indexCPS2_Megaman, 1 },
    { L"17: LP Rush 4", 0x4008000, 0x4008020, indexCPS2_Megaman, 1 },
    { L"18: LP Rush 5", 0x4008020, 0x4008040, indexCPS2_Megaman, 1 },
    { L"19: LP Rush 6", 0x4008040, 0x4008060, indexCPS2_Megaman, 1 },
    { L"1a: LP Rush 7", 0x4008060, 0x4008080, indexCPS2_Megaman, 1 },
    { L"1b: LP Rush 8", 0x4008080, 0x40080a0, indexCPS2_Megaman, 1 },
    { L"1c: LP Rush 9", 0x40080a0, 0x40080c0, indexCPS2_Megaman, 1 },
    { L"1d: LP Beat 1", 0x40080c0, 0x40080e0, indexCPS2_Megaman, 2 },
    { L"1e: LP Beat 2", 0x40080e0, 0x4008100, indexCPS2_Megaman, 2 },
    { L"1f: LP Beat 3", 0x4008100, 0x4008120, indexCPS2_Megaman, 2 },
    { L"20: LP Beat 4", 0x4008120, 0x4008140, indexCPS2_Megaman, 2 },
    { L"21: LP Beat 5", 0x4008140, 0x4008160, indexCPS2_Megaman, 2 },
    { L"22: LP Beat 6", 0x4008160, 0x4008180, indexCPS2_Megaman, 2 },
    { L"23: LP Beat 7", 0x4008180, 0x40081a0, indexCPS2_Megaman, 2 },
    { L"24: LP Beat 8", 0x40081a0, 0x40081c0, indexCPS2_Megaman, 2 },
    { L"25: LP Beat 9", 0x40081c0, 0x40081e0, indexCPS2_Megaman, 2 },
    { L"26: LP Beat Plane 1", 0x40081e0, 0x4008200, indexCPS2_Megaman, 36 },
    { L"27: LP Beat Plane 2", 0x4008200, 0x4008220, indexCPS2_Megaman, 36 },
    { L"28: LP Beat Plane 3", 0x4008220, 0x4008240, indexCPS2_Megaman, 36 },
    { L"29: LP Beat Plane 4", 0x4008240, 0x4008260, indexCPS2_Megaman, 36 },
    { L"2a: LP Beat Plane 5", 0x4008260, 0x4008280, indexCPS2_Megaman, 36 },
    { L"2b: LP Beat Plane 6", 0x4008280, 0x40082a0, indexCPS2_Megaman, 36 },
    { L"2c: LP Beat Plane 7", 0x40082a0, 0x40082c0, indexCPS2_Megaman, 36 },
    { L"2d: LP Beat Plane 8", 0x40082c0, 0x40082e0, indexCPS2_Megaman, 36 },
    { L"2e: LP Beat Plane 9", 0x40082e0, 0x4008300, indexCPS2_Megaman, 36 },
    { L"2f: LP charging Roll 1", 0x4008300, 0x4008320, indexCPS2_Roll, 0 },
    { L"30: LP charging Roll 2", 0x4008320, 0x4008340, indexCPS2_Roll, 0 },
    { L"31: LP charging Roll 3", 0x4008340, 0x4008360, indexCPS2_Roll, 0 },
    { L"32: LP charging Roll 4", 0x4008360, 0x4008380, indexCPS2_Roll, 0 },
    { L"33: LP charging Roll 5", 0x4008380, 0x40083a0, indexCPS2_Roll, 0 },
    { L"34: LP charging Roll 6", 0x40083a0, 0x40083c0, indexCPS2_Roll, 0 },
    { L"35: LP charging Roll 7", 0x40083c0, 0x40083e0, indexCPS2_Roll, 0 },
    { L"36: LP charging Roll 8", 0x40083e0, 0x4008400, indexCPS2_Roll, 0 },
    { L"37: LP charging Roll 9", 0x4008400, 0x4008420, indexCPS2_Roll, 0 },
    { L"38: LP Rush Drill 1", 0x4008420, 0x4008440, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"39: LP Rush Drill 2", 0x4008440, 0x4008460, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3a: LP Rush Drill 3", 0x4008460, 0x4008480, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3b: LP Rush Drill 4", 0x4008480, 0x40084a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3c: LP Rush Drill 5", 0x40084a0, 0x40084c0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3d: LP Rush Drill 6", 0x40084c0, 0x40084e0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3e: LP Rush Drill 7", 0x40084e0, 0x4008500, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"3f: LP Rush Drill 8", 0x4008500, 0x4008520, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"40: LP Rush Drill 9", 0x4008520, 0x4008540, indexCPS2_Roll, 11 },
    { L"41: LP Teleport Intro", 0x4008540, 0x4008560, indexCPS2_Megaman, 13 },
    { L"42: LP Dr. Light", 0x4008560, 0x4008580, indexCPS2_Megaman, 37 },
    { L"43: LP Hyper Roll (armor/skin while shooting) 1", 0x4008580, 0x40085a0 },
    { L"44: LP Hyper Roll (armor/skin while shooting) 2", 0x40085a0, 0x40085c0 },
    { L"45: LP Hyper Roll (armor/skin while shooting) 3", 0x40085c0, 0x40085e0 },
    { L"46: LP Hyper Roll (armor/skin while shooting) 4", 0x40085e0, 0x4008600 },
    { L"47: LP Hyper Roll (armor/skin while shooting) 5", 0x4008600, 0x4008620 },
    { L"48: LP Hyper Roll (armor/skin while shooting) 6", 0x4008620, 0x4008640 },
    { L"49: LP Hyper Roll (armor/skin while shooting) 7", 0x4008640, 0x4008660 },
    { L"4a: LP Hyper Roll (armor/skin while shooting) 8", 0x4008660, 0x4008680 },
    { L"4b: LP Hyper Roll (armor/skin while shooting) 9", 0x4008680, 0x40086a0 },
    { L"4c: LP Hyper Roll 1", 0x40086a0, 0x40086c0, indexCPS2_Roll, 0 },
    { L"4d: LP Hyper Roll 2", 0x40086c0, 0x40086e0, indexCPS2_Roll, 0 },
    { L"4e: LP Hyper Roll 3", 0x40086e0, 0x4008700, indexCPS2_Roll, 0 },
    { L"4f: LP Hyper Roll 4", 0x4008700, 0x4008720, indexCPS2_Roll, 0 },
    { L"50: LP Hyper Roll 5", 0x4008720, 0x4008740, indexCPS2_Roll, 0 },
    { L"51: LP Hyper Roll 6", 0x4008740, 0x4008760, indexCPS2_Roll, 0 },
    { L"52: LP Hyper Roll 7", 0x4008760, 0x4008780, indexCPS2_Roll, 0 },
    { L"53: LP Hyper Roll 8", 0x4008780, 0x40087a0, indexCPS2_Roll, 0 },
    { L"54: LP Hyper Roll 9", 0x40087a0, 0x40087c0, indexCPS2_Roll, 0 },
    { L"55: LP Hyper Roll Missiles", 0x40087c0, 0x40087e0 },
    { L"56: LP Rush Drill metal 1", 0x40087e0, 0x4008800, indexCPS2_Roll, 12 },
    { L"57: LP Rush Drill metal 2", 0x4008800, 0x4008820, indexCPS2_Roll, 12 },
    { L"58: LP Rush Drill metal 3", 0x4008820, 0x4008840, indexCPS2_Roll, 12 },
    { L"59: LP Rush Drill metal 4", 0x4008840, 0x4008860, indexCPS2_Roll, 12 },
    { L"5a: LP Rush Drill metal 5", 0x4008860, 0x4008880, indexCPS2_Roll, 12 },
    { L"5b: LP Rush Drill metal 6", 0x4008880, 0x40088a0, indexCPS2_Roll, 12 },
    { L"5c: LP Rush Drill metal 7", 0x40088a0, 0x40088c0, indexCPS2_Roll, 12 },
    { L"5d: LP Rush Drill metal 8", 0x40088c0, 0x40088e0, indexCPS2_Roll, 12 },
    { L"5e: LP Megaman", 0x40088e0, 0x4008900, indexCPS2_Megaman, 0 },
    { L"5f: LP Magnetic Shockwave Power Up (MvC1 Ending)", 0x4008900, 0x4008920, indexCPS2_Megaman, 0 },
    { L"60: LK Megaman hair (all buttons)", 0x4008920, 0x4008940, indexCPS2_Megaman, 38 },
    { L"61: LK Death Animation (all buttons)", 0x4008940, 0x4008960, indexCPS2_Megaman, 11 },
    { L"62: LK Roll Intro 1", 0x4008960, 0x4008980, indexCPS2_Roll, 0 },
    { L"63: LK Roll Intro 2", 0x4008980, 0x40089a0, indexCPS2_Roll, 0 },
    { L"64: LK Roll Intro 3", 0x40089a0, 0x40089c0, indexCPS2_Roll, 0 },
    { L"65: LK Roll Intro 4", 0x40089c0, 0x40089e0, indexCPS2_Roll, 0 },
    { L"66: LK Roll Intro 5", 0x40089e0, 0x4008a00, indexCPS2_Roll, 0 },
    { L"67: LK Roll Intro 6", 0x4008a00, 0x4008a20, indexCPS2_Roll, 0 },
    { L"68: LK Roll Intro 7", 0x4008a20, 0x4008a40, indexCPS2_Roll, 0 },
    { L"69: LK Roll Intro 8", 0x4008a40, 0x4008a60, indexCPS2_Roll, 0 },
    { L"6a: LK Roll Intro 9", 0x4008a60, 0x4008a80, indexCPS2_Roll, 0 },
    { L"6b: LK Rush 1", 0x4008a80, 0x4008aa0, indexCPS2_Megaman, 1 },
    { L"6c: LK Rush 2", 0x4008aa0, 0x4008ac0, indexCPS2_Megaman, 1 },
    { L"6d: LK Rush 3", 0x4008ac0, 0x4008ae0, indexCPS2_Megaman, 1 },
    { L"6e: LK Rush 4", 0x4008ae0, 0x4008b00, indexCPS2_Megaman, 1 },
    { L"6f: LK Rush 5", 0x4008b00, 0x4008b20, indexCPS2_Megaman, 1 },
    { L"70: LK Rush 6", 0x4008b20, 0x4008b40, indexCPS2_Megaman, 1 },
    { L"71: LK Rush 7", 0x4008b40, 0x4008b60, indexCPS2_Megaman, 1 },
    { L"72: LK Rush 8", 0x4008b60, 0x4008b80, indexCPS2_Megaman, 1 },
    { L"73: LK Rush 9", 0x4008b80, 0x4008ba0, indexCPS2_Megaman, 1 },
    { L"74: LK Beat 1", 0x4008ba0, 0x4008bc0, indexCPS2_Megaman, 2 },
    { L"75: LK Beat 2", 0x4008bc0, 0x4008be0, indexCPS2_Megaman, 2 },
    { L"76: LK Beat 3", 0x4008be0, 0x4008c00, indexCPS2_Megaman, 2 },
    { L"77: LK Beat 4", 0x4008c00, 0x4008c20, indexCPS2_Megaman, 2 },
    { L"78: LK Beat 5", 0x4008c20, 0x4008c40, indexCPS2_Megaman, 2 },
    { L"79: LK Beat 6", 0x4008c40, 0x4008c60, indexCPS2_Megaman, 2 },
    { L"7a: LK Beat 7", 0x4008c60, 0x4008c80, indexCPS2_Megaman, 2 },
    { L"7b: LK Beat 8", 0x4008c80, 0x4008ca0, indexCPS2_Megaman, 2 },
    { L"7c: LK Beat 9", 0x4008ca0, 0x4008cc0, indexCPS2_Megaman, 2 },
    { L"7d: LK Beat Plane 1", 0x4008cc0, 0x4008ce0, indexCPS2_Megaman, 36 },
    { L"7e: LK Beat Plane 2", 0x4008ce0, 0x4008d00, indexCPS2_Megaman, 36 },
    { L"7f: LK Beat Plane 3", 0x4008d00, 0x4008d20, indexCPS2_Megaman, 36 },
    { L"80: LK Beat Plane 4", 0x4008d20, 0x4008d40, indexCPS2_Megaman, 36 },
    { L"81: LK Beat Plane 5", 0x4008d40, 0x4008d60, indexCPS2_Megaman, 36 },
    { L"82: LK Beat Plane 6", 0x4008d60, 0x4008d80, indexCPS2_Megaman, 36 },
    { L"83: LK Beat Plane 7", 0x4008d80, 0x4008da0, indexCPS2_Megaman, 36 },
    { L"84: LK Beat Plane 8", 0x4008da0, 0x4008dc0, indexCPS2_Megaman, 36 },
    { L"85: LK Beat Plane 9", 0x4008dc0, 0x4008de0, indexCPS2_Megaman, 36 },
    { L"86: LK charging Roll 1", 0x4008de0, 0x4008e00, indexCPS2_Roll, 0 },
    { L"87: LK charging Roll 2", 0x4008e00, 0x4008e20, indexCPS2_Roll, 0 },
    { L"88: LK charging Roll 3", 0x4008e20, 0x4008e40, indexCPS2_Roll, 0 },
    { L"89: LK charging Roll 4", 0x4008e40, 0x4008e60, indexCPS2_Roll, 0 },
    { L"8a: LK charging Roll 5", 0x4008e60, 0x4008e80, indexCPS2_Roll, 0 },
    { L"8b: LK charging Roll 6", 0x4008e80, 0x4008ea0, indexCPS2_Roll, 0 },
    { L"8c: LK charging Roll 7", 0x4008ea0, 0x4008ec0, indexCPS2_Roll, 0 },
    { L"8d: LK charging Roll 8", 0x4008ec0, 0x4008ee0, indexCPS2_Roll, 0 },
    { L"8e: LK charging Roll 9", 0x4008ee0, 0x4008f00, indexCPS2_Roll, 0 },
    { L"8f: LK Rush Drill 1", 0x4008f00, 0x4008f20, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"90: LK Rush Drill 2", 0x4008f20, 0x4008f40, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"91: LK Rush Drill 3", 0x4008f40, 0x4008f60, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"92: LK Rush Drill 4", 0x4008f60, 0x4008f80, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"93: LK Rush Drill 5", 0x4008f80, 0x4008fa0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"94: LK Rush Drill 6", 0x4008fa0, 0x4008fc0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"95: LK Rush Drill 7", 0x4008fc0, 0x4008fe0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"96: LK Rush Drill 8", 0x4008fe0, 0x4009000, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"97: LK Rush Drill 9", 0x4009000, 0x4009020, indexCPS2_Roll, 11 },
    { L"98: LK Teleport Intro", 0x4009020, 0x4009040, indexCPS2_Megaman, 13 },
    { L"99: LK Dr. Light", 0x4009040, 0x4009060, indexCPS2_Megaman, 37 },
    { L"9a: LK Hyper Roll (armor/skin while shooting) 1", 0x4009060, 0x4009080 },
    { L"9b: LK Hyper Roll (armor/skin while shooting) 2", 0x4009080, 0x40090a0 },
    { L"9c: LK Hyper Roll (armor/skin while shooting) 3", 0x40090a0, 0x40090c0 },
    { L"9d: LK Hyper Roll (armor/skin while shooting) 4", 0x40090c0, 0x40090e0 },
    { L"9e: LK Hyper Roll (armor/skin while shooting) 5", 0x40090e0, 0x4009100 },
    { L"9f: LK Hyper Roll (armor/skin while shooting) 6", 0x4009100, 0x4009120 },
    { L"a0: LK Hyper Roll (armor/skin while shooting) 7", 0x4009120, 0x4009140 },
    { L"a1: LK Hyper Roll (armor/skin while shooting) 8", 0x4009140, 0x4009160 },
    { L"a2: LK Hyper Roll (armor/skin while shooting) 9", 0x4009160, 0x4009180 },
    { L"a3: LK Hyper Roll 1", 0x4009180, 0x40091a0, indexCPS2_Roll, 0 },
    { L"a4: LK Hyper Roll 2", 0x40091a0, 0x40091c0, indexCPS2_Roll, 0 },
    { L"a5: LK Hyper Roll 3", 0x40091c0, 0x40091e0, indexCPS2_Roll, 0 },
    { L"a6: LK Hyper Roll 4", 0x40091e0, 0x4009200, indexCPS2_Roll, 0 },
    { L"a7: LK Hyper Roll 5", 0x4009200, 0x4009220, indexCPS2_Roll, 0 },
    { L"a8: LK Hyper Roll 6", 0x4009220, 0x4009240, indexCPS2_Roll, 0 },
    { L"a9: LK Hyper Roll 7", 0x4009240, 0x4009260, indexCPS2_Roll, 0 },
    { L"aa: LK Hyper Roll 8", 0x4009260, 0x4009280, indexCPS2_Roll, 0 },
    { L"ab: LK Hyper Roll 9", 0x4009280, 0x40092a0, indexCPS2_Roll, 0 },
    { L"ac: LK Hyper Roll Missiles", 0x40092a0, 0x40092c0 },
    { L"ad: LK Rush Drill metal 1", 0x40092c0, 0x40092e0, indexCPS2_Roll, 12 },
    { L"ae: LK Rush Drill metal 2", 0x40092e0, 0x4009300, indexCPS2_Roll, 12 },
    { L"af: LK Rush Drill metal 3", 0x4009300, 0x4009320, indexCPS2_Roll, 12 },
    { L"b0: LK Rush Drill metal 4", 0x4009320, 0x4009340, indexCPS2_Roll, 12 },
    { L"b1: LK Rush Drill metal 5", 0x4009340, 0x4009360, indexCPS2_Roll, 12 },
    { L"b2: LK Rush Drill metal 6", 0x4009360, 0x4009380, indexCPS2_Roll, 12 },
    { L"b3: LK Rush Drill metal 7", 0x4009380, 0x40093a0, indexCPS2_Roll, 12 },
    { L"b4: LK Rush Drill metal 8", 0x40093a0, 0x40093c0, indexCPS2_Roll, 12 },
    { L"b5: LK Megaman", 0x40093c0, 0x40093e0, indexCPS2_Megaman, 0 },
    { L"b6: LK Magnetic Shockwave Power Up (MvC1 Ending)", 0x40093e0, 0x4009400, indexCPS2_Megaman, 0 },
    { L"b7: HP Megaman hair (all buttons)", 0x4009400, 0x4009420, indexCPS2_Megaman, 38 },
    { L"b8: HP Death Animation (all buttons)", 0x4009420, 0x4009440, indexCPS2_Megaman, 11 },
    { L"b9: HP Roll Intro 1", 0x4009440, 0x4009460, indexCPS2_Roll, 0 },
    { L"ba: HP Roll Intro 2", 0x4009460, 0x4009480, indexCPS2_Roll, 0 },
    { L"bb: HP Roll Intro 3", 0x4009480, 0x40094a0, indexCPS2_Roll, 0 },
    { L"bc: HP Roll Intro 4", 0x40094a0, 0x40094c0, indexCPS2_Roll, 0 },
    { L"bd: HP Roll Intro 5", 0x40094c0, 0x40094e0, indexCPS2_Roll, 0 },
    { L"be: HP Roll Intro 6", 0x40094e0, 0x4009500, indexCPS2_Roll, 0 },
    { L"bf: HP Roll Intro 7", 0x4009500, 0x4009520, indexCPS2_Roll, 0 },
    { L"c0: HP Roll Intro 8", 0x4009520, 0x4009540, indexCPS2_Roll, 0 },
    { L"c1: HP Roll Intro 9", 0x4009540, 0x4009560, indexCPS2_Roll, 0 },
    { L"c2: HP Rush 1", 0x4009560, 0x4009580, indexCPS2_Megaman, 1 },
    { L"c3: HP Rush 2", 0x4009580, 0x40095a0, indexCPS2_Megaman, 1 },
    { L"c4: HP Rush 3", 0x40095a0, 0x40095c0, indexCPS2_Megaman, 1 },
    { L"c5: HP Rush 4", 0x40095c0, 0x40095e0, indexCPS2_Megaman, 1 },
    { L"c6: HP Rush 5", 0x40095e0, 0x4009600, indexCPS2_Megaman, 1 },
    { L"c7: HP Rush 6", 0x4009600, 0x4009620, indexCPS2_Megaman, 1 },
    { L"c8: HP Rush 7", 0x4009620, 0x4009640, indexCPS2_Megaman, 1 },
    { L"c9: HP Rush 8", 0x4009640, 0x4009660, indexCPS2_Megaman, 1 },
    { L"ca: HP Rush 9", 0x4009660, 0x4009680, indexCPS2_Megaman, 1 },
    { L"cb: HP Beat 1", 0x4009680, 0x40096a0, indexCPS2_Megaman, 2 },
    { L"cc: HP Beat 2", 0x40096a0, 0x40096c0, indexCPS2_Megaman, 2 },
    { L"cd: HP Beat 3", 0x40096c0, 0x40096e0, indexCPS2_Megaman, 2 },
    { L"ce: HP Beat 4", 0x40096e0, 0x4009700, indexCPS2_Megaman, 2 },
    { L"cf: HP Beat 5", 0x4009700, 0x4009720, indexCPS2_Megaman, 2 },
    { L"d0: HP Beat 6", 0x4009720, 0x4009740, indexCPS2_Megaman, 2 },
    { L"d1: HP Beat 7", 0x4009740, 0x4009760, indexCPS2_Megaman, 2 },
    { L"d2: HP Beat 8", 0x4009760, 0x4009780, indexCPS2_Megaman, 2 },
    { L"d3: HP Beat 9", 0x4009780, 0x40097a0, indexCPS2_Megaman, 2 },
    { L"d4: HP Beat Plane 1", 0x40097a0, 0x40097c0, indexCPS2_Megaman, 36 },
    { L"d5: HP Beat Plane 2", 0x40097c0, 0x40097e0, indexCPS2_Megaman, 36 },
    { L"d6: HP Beat Plane 3", 0x40097e0, 0x4009800, indexCPS2_Megaman, 36 },
    { L"d7: HP Beat Plane 4", 0x4009800, 0x4009820, indexCPS2_Megaman, 36 },
    { L"d8: HP Beat Plane 5", 0x4009820, 0x4009840, indexCPS2_Megaman, 36 },
    { L"d9: HP Beat Plane 6", 0x4009840, 0x4009860, indexCPS2_Megaman, 36 },
    { L"da: HP Beat Plane 7", 0x4009860, 0x4009880, indexCPS2_Megaman, 36 },
    { L"db: HP Beat Plane 8", 0x4009880, 0x40098a0, indexCPS2_Megaman, 36 },
    { L"dc: HP Beat Plane 9", 0x40098a0, 0x40098c0, indexCPS2_Megaman, 36 },
    { L"dd: HP charging Roll 1", 0x40098c0, 0x40098e0, indexCPS2_Roll, 0 },
    { L"de: HP charging Roll 2", 0x40098e0, 0x4009900, indexCPS2_Roll, 0 },
    { L"df: HP charging Roll 3", 0x4009900, 0x4009920, indexCPS2_Roll, 0 },
    { L"e0: HP charging Roll 4", 0x4009920, 0x4009940, indexCPS2_Roll, 0 },
    { L"e1: HP charging Roll 5", 0x4009940, 0x4009960, indexCPS2_Roll, 0 },
    { L"e2: HP charging Roll 6", 0x4009960, 0x4009980, indexCPS2_Roll, 0 },
    { L"e3: HP charging Roll 7", 0x4009980, 0x40099a0, indexCPS2_Roll, 0 },
    { L"e4: HP charging Roll 8", 0x40099a0, 0x40099c0, indexCPS2_Roll, 0 },
    { L"e5: HP charging Roll 9", 0x40099c0, 0x40099e0, indexCPS2_Roll, 0 },
    { L"e6: HP Rush Drill 1", 0x40099e0, 0x4009a00, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"e7: HP Rush Drill 2", 0x4009a00, 0x4009a20, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"e8: HP Rush Drill 3", 0x4009a20, 0x4009a40, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"e9: HP Rush Drill 4", 0x4009a40, 0x4009a60, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ea: HP Rush Drill 5", 0x4009a60, 0x4009a80, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"eb: HP Rush Drill 6", 0x4009a80, 0x4009aa0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ec: HP Rush Drill 7", 0x4009aa0, 0x4009ac0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ed: HP Rush Drill 8", 0x4009ac0, 0x4009ae0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"ee: HP Rush Drill 9", 0x4009ae0, 0x4009b00, indexCPS2_Roll, 11 },
    { L"ef: HP Teleport Intro", 0x4009b00, 0x4009b20, indexCPS2_Megaman, 13 },
    { L"f0: HP Dr. Light", 0x4009b20, 0x4009b40, indexCPS2_Megaman, 37 },
    { L"f1: HP Hyper Roll (armor/skin while shooting) 1", 0x4009b40, 0x4009b60 },
    { L"f2: HP Hyper Roll (armor/skin while shooting) 2", 0x4009b60, 0x4009b80 },
    { L"f3: HP Hyper Roll (armor/skin while shooting) 3", 0x4009b80, 0x4009ba0 },
    { L"f4: HP Hyper Roll (armor/skin while shooting) 4", 0x4009ba0, 0x4009bc0 },
    { L"f5: HP Hyper Roll (armor/skin while shooting) 5", 0x4009bc0, 0x4009be0 },
    { L"f6: HP Hyper Roll (armor/skin while shooting) 6", 0x4009be0, 0x4009c00 },
    { L"f7: HP Hyper Roll (armor/skin while shooting) 7", 0x4009c00, 0x4009c20 },
    { L"f8: HP Hyper Roll (armor/skin while shooting) 8", 0x4009c20, 0x4009c40 },
    { L"f9: HP Hyper Roll (armor/skin while shooting) 9", 0x4009c40, 0x4009c60 },
    { L"fa: HP Hyper Roll 1", 0x4009c60, 0x4009c80, indexCPS2_Roll, 0 },
    { L"fb: HP Hyper Roll 2", 0x4009c80, 0x4009ca0, indexCPS2_Roll, 0 },
    { L"fc: HP Hyper Roll 3", 0x4009ca0, 0x4009cc0, indexCPS2_Roll, 0 },
    { L"fd: HP Hyper Roll 4", 0x4009cc0, 0x4009ce0, indexCPS2_Roll, 0 },
    { L"fe: HP Hyper Roll 5", 0x4009ce0, 0x4009d00, indexCPS2_Roll, 0 },
    { L"ff: HP Hyper Roll 6", 0x4009d00, 0x4009d20, indexCPS2_Roll, 0 },
    { L"100: HP Hyper Roll 7", 0x4009d20, 0x4009d40, indexCPS2_Roll, 0 },
    { L"101: HP Hyper Roll 8", 0x4009d40, 0x4009d60, indexCPS2_Roll, 0 },
    { L"102: HP Hyper Roll 9", 0x4009d60, 0x4009d80, indexCPS2_Roll, 0 },
    { L"103: HP Hyper Roll Missiles", 0x4009d80, 0x4009da0 },
    { L"104: HP Rush Drill metal 1", 0x4009da0, 0x4009dc0, indexCPS2_Roll, 12 },
    { L"105: HP Rush Drill metal 2", 0x4009dc0, 0x4009de0, indexCPS2_Roll, 12 },
    { L"106: HP Rush Drill metal 3", 0x4009de0, 0x4009e00, indexCPS2_Roll, 12 },
    { L"107: HP Rush Drill metal 4", 0x4009e00, 0x4009e20, indexCPS2_Roll, 12 },
    { L"108: HP Rush Drill metal 5", 0x4009e20, 0x4009e40, indexCPS2_Roll, 12 },
    { L"109: HP Rush Drill metal 6", 0x4009e40, 0x4009e60, indexCPS2_Roll, 12 },
    { L"10a: HP Rush Drill metal 7", 0x4009e60, 0x4009e80, indexCPS2_Roll, 12 },
    { L"10b: HP Rush Drill metal 8", 0x4009e80, 0x4009ea0, indexCPS2_Roll, 12 },
    { L"10c: HP Megaman", 0x4009ea0, 0x4009ec0, indexCPS2_Megaman, 0 },
    { L"10d: HP Magnetic Shockwave Power Up (MvC1 Ending)", 0x4009ec0, 0x4009ee0, indexCPS2_Megaman, 0 },
    { L"10e: HK Megaman hair (all buttons)", 0x4009ee0, 0x4009f00, indexCPS2_Megaman, 38 },
    { L"10f: HK Death Animation (all buttons)", 0x4009f00, 0x4009f20, indexCPS2_Megaman, 11 },
    { L"110: HK Roll Intro 1", 0x4009f20, 0x4009f40, indexCPS2_Roll, 0 },
    { L"111: HK Roll Intro 2", 0x4009f40, 0x4009f60, indexCPS2_Roll, 0 },
    { L"112: HK Roll Intro 3", 0x4009f60, 0x4009f80, indexCPS2_Roll, 0 },
    { L"113: HK Roll Intro 4", 0x4009f80, 0x4009fa0, indexCPS2_Roll, 0 },
    { L"114: HK Roll Intro 5", 0x4009fa0, 0x4009fc0, indexCPS2_Roll, 0 },
    { L"115: HK Roll Intro 6", 0x4009fc0, 0x4009fe0, indexCPS2_Roll, 0 },
    { L"116: HK Roll Intro 7", 0x4009fe0, 0x400a000, indexCPS2_Roll, 0 },
    { L"117: HK Roll Intro 8", 0x400a000, 0x400a020, indexCPS2_Roll, 0 },
    { L"118: HK Roll Intro 9", 0x400a020, 0x400a040, indexCPS2_Roll, 0 },
    { L"119: HK Rush 1", 0x400a040, 0x400a060, indexCPS2_Megaman, 1 },
    { L"11a: HK Rush 2", 0x400a060, 0x400a080, indexCPS2_Megaman, 1 },
    { L"11b: HK Rush 3", 0x400a080, 0x400a0a0, indexCPS2_Megaman, 1 },
    { L"11c: HK Rush 4", 0x400a0a0, 0x400a0c0, indexCPS2_Megaman, 1 },
    { L"11d: HK Rush 5", 0x400a0c0, 0x400a0e0, indexCPS2_Megaman, 1 },
    { L"11e: HK Rush 6", 0x400a0e0, 0x400a100, indexCPS2_Megaman, 1 },
    { L"11f: HK Rush 7", 0x400a100, 0x400a120, indexCPS2_Megaman, 1 },
    { L"120: HK Rush 8", 0x400a120, 0x400a140, indexCPS2_Megaman, 1 },
    { L"121: HK Rush 9", 0x400a140, 0x400a160, indexCPS2_Megaman, 1 },
    { L"122: HK Beat 1", 0x400a160, 0x400a180, indexCPS2_Megaman, 2 },
    { L"123: HK Beat 2", 0x400a180, 0x400a1a0, indexCPS2_Megaman, 2 },
    { L"124: HK Beat 3", 0x400a1a0, 0x400a1c0, indexCPS2_Megaman, 2 },
    { L"125: HK Beat 4", 0x400a1c0, 0x400a1e0, indexCPS2_Megaman, 2 },
    { L"126: HK Beat 5", 0x400a1e0, 0x400a200, indexCPS2_Megaman, 2 },
    { L"127: HK Beat 6", 0x400a200, 0x400a220, indexCPS2_Megaman, 2 },
    { L"128: HK Beat 7", 0x400a220, 0x400a240, indexCPS2_Megaman, 2 },
    { L"129: HK Beat 8", 0x400a240, 0x400a260, indexCPS2_Megaman, 2 },
    { L"12a: HK Beat 9", 0x400a260, 0x400a280, indexCPS2_Megaman, 2 },
    { L"12b: HK Beat Plane 1", 0x400a280, 0x400a2a0, indexCPS2_Megaman, 36 },
    { L"12c: HK Beat Plane 2", 0x400a2a0, 0x400a2c0, indexCPS2_Megaman, 36 },
    { L"12d: HK Beat Plane 3", 0x400a2c0, 0x400a2e0, indexCPS2_Megaman, 36 },
    { L"12e: HK Beat Plane 4", 0x400a2e0, 0x400a300, indexCPS2_Megaman, 36 },
    { L"12f: HK Beat Plane 5", 0x400a300, 0x400a320, indexCPS2_Megaman, 36 },
    { L"130: HK Beat Plane 6", 0x400a320, 0x400a340, indexCPS2_Megaman, 36 },
    { L"131: HK Beat Plane 7", 0x400a340, 0x400a360, indexCPS2_Megaman, 36 },
    { L"132: HK Beat Plane 8", 0x400a360, 0x400a380, indexCPS2_Megaman, 36 },
    { L"133: HK Beat Plane 9", 0x400a380, 0x400a3a0, indexCPS2_Megaman, 36 },
    { L"134: HK charging Roll 1", 0x400a3a0, 0x400a3c0, indexCPS2_Roll, 0 },
    { L"135: HK charging Roll 2", 0x400a3c0, 0x400a3e0, indexCPS2_Roll, 0 },
    { L"136: HK charging Roll 3", 0x400a3e0, 0x400a400, indexCPS2_Roll, 0 },
    { L"137: HK charging Roll 4", 0x400a400, 0x400a420, indexCPS2_Roll, 0 },
    { L"138: HK charging Roll 5", 0x400a420, 0x400a440, indexCPS2_Roll, 0 },
    { L"139: HK charging Roll 6", 0x400a440, 0x400a460, indexCPS2_Roll, 0 },
    { L"13a: HK charging Roll 7", 0x400a460, 0x400a480, indexCPS2_Roll, 0 },
    { L"13b: HK charging Roll 8", 0x400a480, 0x400a4a0, indexCPS2_Roll, 0 },
    { L"13c: HK charging Roll 9", 0x400a4a0, 0x400a4c0, indexCPS2_Roll, 0 },
    { L"13d: HK Rush Drill 1", 0x400a4c0, 0x400a4e0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"13e: HK Rush Drill 2", 0x400a4e0, 0x400a500, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"13f: HK Rush Drill 3", 0x400a500, 0x400a520, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"140: HK Rush Drill 4", 0x400a520, 0x400a540, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"141: HK Rush Drill 5", 0x400a540, 0x400a560, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"142: HK Rush Drill 6", 0x400a560, 0x400a580, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"143: HK Rush Drill 7", 0x400a580, 0x400a5a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"144: HK Rush Drill 8", 0x400a5a0, 0x400a5c0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"145: HK Rush Drill 9", 0x400a5c0, 0x400a5e0, indexCPS2_Roll, 11 },
    { L"146: HK Teleport Intro", 0x400a5e0, 0x400a600, indexCPS2_Megaman, 13 },
    { L"147: HK Dr. Light", 0x400a600, 0x400a620, indexCPS2_Megaman, 37 },
    { L"148: HK Hyper Roll (armor/skin while shooting) 1", 0x400a620, 0x400a640 },
    { L"149: HK Hyper Roll (armor/skin while shooting) 2", 0x400a640, 0x400a660 },
    { L"14a: HK Hyper Roll (armor/skin while shooting) 3", 0x400a660, 0x400a680 },
    { L"14b: HK Hyper Roll (armor/skin while shooting) 4", 0x400a680, 0x400a6a0 },
    { L"14c: HK Hyper Roll (armor/skin while shooting) 5", 0x400a6a0, 0x400a6c0 },
    { L"14d: HK Hyper Roll (armor/skin while shooting) 6", 0x400a6c0, 0x400a6e0 },
    { L"14e: HK Hyper Roll (armor/skin while shooting) 7", 0x400a6e0, 0x400a700 },
    { L"14f: HK Hyper Roll (armor/skin while shooting) 8", 0x400a700, 0x400a720 },
    { L"150: HK Hyper Roll (armor/skin while shooting) 9", 0x400a720, 0x400a740 },
    { L"151: HK Hyper Roll 1", 0x400a740, 0x400a760, indexCPS2_Roll, 0 },
    { L"152: HK Hyper Roll 2", 0x400a760, 0x400a780, indexCPS2_Roll, 0 },
    { L"153: HK Hyper Roll 3", 0x400a780, 0x400a7a0, indexCPS2_Roll, 0 },
    { L"154: HK Hyper Roll 4", 0x400a7a0, 0x400a7c0, indexCPS2_Roll, 0 },
    { L"155: HK Hyper Roll 5", 0x400a7c0, 0x400a7e0, indexCPS2_Roll, 0 },
    { L"156: HK Hyper Roll 6", 0x400a7e0, 0x400a800, indexCPS2_Roll, 0 },
    { L"157: HK Hyper Roll 7", 0x400a800, 0x400a820, indexCPS2_Roll, 0 },
    { L"158: HK Hyper Roll 8", 0x400a820, 0x400a840, indexCPS2_Roll, 0 },
    { L"159: HK Hyper Roll 9", 0x400a840, 0x400a860, indexCPS2_Roll, 0 },
    { L"15a: HK Hyper Roll Missiles", 0x400a860, 0x400a880 },
    { L"15b: HK Rush Drill metal 1", 0x400a880, 0x400a8a0, indexCPS2_Roll, 12 },
    { L"15c: HK Rush Drill metal 2", 0x400a8a0, 0x400a8c0, indexCPS2_Roll, 12 },
    { L"15d: HK Rush Drill metal 3", 0x400a8c0, 0x400a8e0, indexCPS2_Roll, 12 },
    { L"15e: HK Rush Drill metal 4", 0x400a8e0, 0x400a900, indexCPS2_Roll, 12 },
    { L"15f: HK Rush Drill metal 5", 0x400a900, 0x400a920, indexCPS2_Roll, 12 },
    { L"160: HK Rush Drill metal 6", 0x400a920, 0x400a940, indexCPS2_Roll, 12 },
    { L"161: HK Rush Drill metal 7", 0x400a940, 0x400a960, indexCPS2_Roll, 12 },
    { L"162: HK Rush Drill metal 8", 0x400a960, 0x400a980, indexCPS2_Roll, 12 },
    { L"163: HK Megaman", 0x400a980, 0x400a9a0, indexCPS2_Megaman, 0 },
    { L"164: HK Magnetic Shockwave Power Up (MvC1 Ending)", 0x400a9a0, 0x400a9c0, indexCPS2_Megaman, 0 },
    { L"165: A1 Megaman hair (all buttons)", 0x400a9c0, 0x400a9e0, indexCPS2_Megaman, 38 },
    { L"166: A1 Death Animation (all buttons)", 0x400a9e0, 0x400aa00, indexCPS2_Megaman, 11 },
    { L"167: A1 Roll Intro 1", 0x400aa00, 0x400aa20, indexCPS2_Roll, 0 },
    { L"168: A1 Roll Intro 2", 0x400aa20, 0x400aa40, indexCPS2_Roll, 0 },
    { L"169: A1 Roll Intro 3", 0x400aa40, 0x400aa60, indexCPS2_Roll, 0 },
    { L"16a: A1 Roll Intro 4", 0x400aa60, 0x400aa80, indexCPS2_Roll, 0 },
    { L"16b: A1 Roll Intro 5", 0x400aa80, 0x400aaa0, indexCPS2_Roll, 0 },
    { L"16c: A1 Roll Intro 6", 0x400aaa0, 0x400aac0, indexCPS2_Roll, 0 },
    { L"16d: A1 Roll Intro 7", 0x400aac0, 0x400aae0, indexCPS2_Roll, 0 },
    { L"16e: A1 Roll Intro 8", 0x400aae0, 0x400ab00, indexCPS2_Roll, 0 },
    { L"16f: A1 Roll Intro 9", 0x400ab00, 0x400ab20, indexCPS2_Roll, 0 },
    { L"170: A1 Rush 1", 0x400ab20, 0x400ab40, indexCPS2_Megaman, 1 },
    { L"171: A1 Rush 2", 0x400ab40, 0x400ab60, indexCPS2_Megaman, 1 },
    { L"172: A1 Rush 3", 0x400ab60, 0x400ab80, indexCPS2_Megaman, 1 },
    { L"173: A1 Rush 4", 0x400ab80, 0x400aba0, indexCPS2_Megaman, 1 },
    { L"174: A1 Rush 5", 0x400aba0, 0x400abc0, indexCPS2_Megaman, 1 },
    { L"175: A1 Rush 6", 0x400abc0, 0x400abe0, indexCPS2_Megaman, 1 },
    { L"176: A1 Rush 7", 0x400abe0, 0x400ac00, indexCPS2_Megaman, 1 },
    { L"177: A1 Rush 8", 0x400ac00, 0x400ac20, indexCPS2_Megaman, 1 },
    { L"178: A1 Rush 9", 0x400ac20, 0x400ac40, indexCPS2_Megaman, 1 },
    { L"179: A1 Beat 1", 0x400ac40, 0x400ac60, indexCPS2_Megaman, 2 },
    { L"17a: A1 Beat 2", 0x400ac60, 0x400ac80, indexCPS2_Megaman, 2 },
    { L"17b: A1 Beat 3", 0x400ac80, 0x400aca0, indexCPS2_Megaman, 2 },
    { L"17c: A1 Beat 4", 0x400aca0, 0x400acc0, indexCPS2_Megaman, 2 },
    { L"17d: A1 Beat 5", 0x400acc0, 0x400ace0, indexCPS2_Megaman, 2 },
    { L"17e: A1 Beat 6", 0x400ace0, 0x400ad00, indexCPS2_Megaman, 2 },
    { L"17f: A1 Beat 7", 0x400ad00, 0x400ad20, indexCPS2_Megaman, 2 },
    { L"180: A1 Beat 8", 0x400ad20, 0x400ad40, indexCPS2_Megaman, 2 },
    { L"181: A1 Beat 9", 0x400ad40, 0x400ad60, indexCPS2_Megaman, 2 },
    { L"182: A1 Beat Plane 1", 0x400ad60, 0x400ad80, indexCPS2_Megaman, 36 },
    { L"183: A1 Beat Plane 2", 0x400ad80, 0x400ada0, indexCPS2_Megaman, 36 },
    { L"184: A1 Beat Plane 3", 0x400ada0, 0x400adc0, indexCPS2_Megaman, 36 },
    { L"185: A1 Beat Plane 4", 0x400adc0, 0x400ade0, indexCPS2_Megaman, 36 },
    { L"186: A1 Beat Plane 5", 0x400ade0, 0x400ae00, indexCPS2_Megaman, 36 },
    { L"187: A1 Beat Plane 6", 0x400ae00, 0x400ae20, indexCPS2_Megaman, 36 },
    { L"188: A1 Beat Plane 7", 0x400ae20, 0x400ae40, indexCPS2_Megaman, 36 },
    { L"189: A1 Beat Plane 8", 0x400ae40, 0x400ae60, indexCPS2_Megaman, 36 },
    { L"18a: A1 Beat Plane 9", 0x400ae60, 0x400ae80, indexCPS2_Megaman, 36 },
    { L"18b: A1 charging Roll 1", 0x400ae80, 0x400aea0, indexCPS2_Roll, 0 },
    { L"18c: A1 charging Roll 2", 0x400aea0, 0x400aec0, indexCPS2_Roll, 0 },
    { L"18d: A1 charging Roll 3", 0x400aec0, 0x400aee0, indexCPS2_Roll, 0 },
    { L"18e: A1 charging Roll 4", 0x400aee0, 0x400af00, indexCPS2_Roll, 0 },
    { L"18f: A1 charging Roll 5", 0x400af00, 0x400af20, indexCPS2_Roll, 0 },
    { L"190: A1 charging Roll 6", 0x400af20, 0x400af40, indexCPS2_Roll, 0 },
    { L"191: A1 charging Roll 7", 0x400af40, 0x400af60, indexCPS2_Roll, 0 },
    { L"192: A1 charging Roll 8", 0x400af60, 0x400af80, indexCPS2_Roll, 0 },
    { L"193: A1 charging Roll 9", 0x400af80, 0x400afa0, indexCPS2_Roll, 0 },
    { L"194: A1 Rush Drill 1", 0x400afa0, 0x400afc0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"195: A1 Rush Drill 2", 0x400afc0, 0x400afe0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"196: A1 Rush Drill 3", 0x400afe0, 0x400b000, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"197: A1 Rush Drill 4", 0x400b000, 0x400b020, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"198: A1 Rush Drill 5", 0x400b020, 0x400b040, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"199: A1 Rush Drill 6", 0x400b040, 0x400b060, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"19a: A1 Rush Drill 7", 0x400b060, 0x400b080, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"19b: A1 Rush Drill 8", 0x400b080, 0x400b0a0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"19c: A1 Rush Drill 9", 0x400b0a0, 0x400b0c0, indexCPS2_Roll, 11 },
    { L"19d: A1 Teleport Intro", 0x400b0c0, 0x400b0e0, indexCPS2_Megaman, 13 },
    { L"19e: A1 Dr. Light", 0x400b0e0, 0x400b100, indexCPS2_Megaman, 37 },
    { L"19f: A1 Hyper Roll (armor/skin while shooting) 1", 0x400b100, 0x400b120 },
    { L"1a0: A1 Hyper Roll (armor/skin while shooting) 2", 0x400b120, 0x400b140 },
    { L"1a1: A1 Hyper Roll (armor/skin while shooting) 3", 0x400b140, 0x400b160 },
    { L"1a2: A1 Hyper Roll (armor/skin while shooting) 4", 0x400b160, 0x400b180 },
    { L"1a3: A1 Hyper Roll (armor/skin while shooting) 5", 0x400b180, 0x400b1a0 },
    { L"1a4: A1 Hyper Roll (armor/skin while shooting) 6", 0x400b1a0, 0x400b1c0 },
    { L"1a5: A1 Hyper Roll (armor/skin while shooting) 7", 0x400b1c0, 0x400b1e0 },
    { L"1a6: A1 Hyper Roll (armor/skin while shooting) 8", 0x400b1e0, 0x400b200 },
    { L"1a7: A1 Hyper Roll (armor/skin while shooting) 9", 0x400b200, 0x400b220 },
    { L"1a8: A1 Hyper Roll 1", 0x400b220, 0x400b240, indexCPS2_Roll, 0 },
    { L"1a9: A1 Hyper Roll 2", 0x400b240, 0x400b260, indexCPS2_Roll, 0 },
    { L"1aa: A1 Hyper Roll 3", 0x400b260, 0x400b280, indexCPS2_Roll, 0 },
    { L"1ab: A1 Hyper Roll 4", 0x400b280, 0x400b2a0, indexCPS2_Roll, 0 },
    { L"1ac: A1 Hyper Roll 5", 0x400b2a0, 0x400b2c0, indexCPS2_Roll, 0 },
    { L"1ad: A1 Hyper Roll 6", 0x400b2c0, 0x400b2e0, indexCPS2_Roll, 0 },
    { L"1ae: A1 Hyper Roll 7", 0x400b2e0, 0x400b300, indexCPS2_Roll, 0 },
    { L"1af: A1 Hyper Roll 8", 0x400b300, 0x400b320, indexCPS2_Roll, 0 },
    { L"1b0: A1 Hyper Roll 9", 0x400b320, 0x400b340, indexCPS2_Roll, 0 },
    { L"1b1: A1 Hyper Roll Missiles", 0x400b340, 0x400b360 },
    { L"1b2: A1 Rush Drill metal 1", 0x400b360, 0x400b380, indexCPS2_Roll, 12 },
    { L"1b3: A1 Rush Drill metal 2", 0x400b380, 0x400b3a0, indexCPS2_Roll, 12 },
    { L"1b4: A1 Rush Drill metal 3", 0x400b3a0, 0x400b3c0, indexCPS2_Roll, 12 },
    { L"1b5: A1 Rush Drill metal 4", 0x400b3c0, 0x400b3e0, indexCPS2_Roll, 12 },
    { L"1b6: A1 Rush Drill metal 5", 0x400b3e0, 0x400b400, indexCPS2_Roll, 12 },
    { L"1b7: A1 Rush Drill metal 6", 0x400b400, 0x400b420, indexCPS2_Roll, 12 },
    { L"1b8: A1 Rush Drill metal 7", 0x400b420, 0x400b440, indexCPS2_Roll, 12 },
    { L"1b9: A1 Rush Drill metal 8", 0x400b440, 0x400b460, indexCPS2_Roll, 12 },
    { L"1ba: A1 Megaman", 0x400b460, 0x400b480, indexCPS2_Megaman, 0 },
    { L"1bb: A1 Magnetic Shockwave Power Up (MvC1 Ending)", 0x400b480, 0x400b4a0, indexCPS2_Megaman, 0 },
    { L"1bc: A2 Megaman hair (all buttons)", 0x400b4a0, 0x400b4c0, indexCPS2_Megaman, 38 },
    { L"1bd: A2 Death Animation (all buttons)", 0x400b4c0, 0x400b4e0, indexCPS2_Megaman, 11 },
    { L"1be: A2 Roll Intro 1", 0x400b4e0, 0x400b500, indexCPS2_Roll, 0 },
    { L"1bf: A2 Roll Intro 2", 0x400b500, 0x400b520, indexCPS2_Roll, 0 },
    { L"1c0: A2 Roll Intro 3", 0x400b520, 0x400b540, indexCPS2_Roll, 0 },
    { L"1c1: A2 Roll Intro 4", 0x400b540, 0x400b560, indexCPS2_Roll, 0 },
    { L"1c2: A2 Roll Intro 5", 0x400b560, 0x400b580, indexCPS2_Roll, 0 },
    { L"1c3: A2 Roll Intro 6", 0x400b580, 0x400b5a0, indexCPS2_Roll, 0 },
    { L"1c4: A2 Roll Intro 7", 0x400b5a0, 0x400b5c0, indexCPS2_Roll, 0 },
    { L"1c5: A2 Roll Intro 8", 0x400b5c0, 0x400b5e0, indexCPS2_Roll, 0 },
    { L"1c6: A2 Roll Intro 9", 0x400b5e0, 0x400b600, indexCPS2_Roll, 0 },
    { L"1c7: A2 Rush 1", 0x400b600, 0x400b620, indexCPS2_Megaman, 1 },
    { L"1c8: A2 Rush 2", 0x400b620, 0x400b640, indexCPS2_Megaman, 1 },
    { L"1c9: A2 Rush 3", 0x400b640, 0x400b660, indexCPS2_Megaman, 1 },
    { L"1ca: A2 Rush 4", 0x400b660, 0x400b680, indexCPS2_Megaman, 1 },
    { L"1cb: A2 Rush 5", 0x400b680, 0x400b6a0, indexCPS2_Megaman, 1 },
    { L"1cc: A2 Rush 6", 0x400b6a0, 0x400b6c0, indexCPS2_Megaman, 1 },
    { L"1cd: A2 Rush 7", 0x400b6c0, 0x400b6e0, indexCPS2_Megaman, 1 },
    { L"1ce: A2 Rush 8", 0x400b6e0, 0x400b700, indexCPS2_Megaman, 1 },
    { L"1cf: A2 Rush 9", 0x400b700, 0x400b720, indexCPS2_Megaman, 1 },
    { L"1d0: A2 Beat 1", 0x400b720, 0x400b740, indexCPS2_Megaman, 2 },
    { L"1d1: A2 Beat 2", 0x400b740, 0x400b760, indexCPS2_Megaman, 2 },
    { L"1d2: A2 Beat 3", 0x400b760, 0x400b780, indexCPS2_Megaman, 2 },
    { L"1d3: A2 Beat 4", 0x400b780, 0x400b7a0, indexCPS2_Megaman, 2 },
    { L"1d4: A2 Beat 5", 0x400b7a0, 0x400b7c0, indexCPS2_Megaman, 2 },
    { L"1d5: A2 Beat 6", 0x400b7c0, 0x400b7e0, indexCPS2_Megaman, 2 },
    { L"1d6: A2 Beat 7", 0x400b7e0, 0x400b800, indexCPS2_Megaman, 2 },
    { L"1d7: A2 Beat 8", 0x400b800, 0x400b820, indexCPS2_Megaman, 2 },
    { L"1d8: A2 Beat 9", 0x400b820, 0x400b840, indexCPS2_Megaman, 2 },
    { L"1d9: A2 Beat Plane 1", 0x400b840, 0x400b860, indexCPS2_Megaman, 36 },
    { L"1da: A2 Beat Plane 2", 0x400b860, 0x400b880, indexCPS2_Megaman, 36 },
    { L"1db: A2 Beat Plane 3", 0x400b880, 0x400b8a0, indexCPS2_Megaman, 36 },
    { L"1dc: A2 Beat Plane 4", 0x400b8a0, 0x400b8c0, indexCPS2_Megaman, 36 },
    { L"1dd: A2 Beat Plane 5", 0x400b8c0, 0x400b8e0, indexCPS2_Megaman, 36 },
    { L"1de: A2 Beat Plane 6", 0x400b8e0, 0x400b900, indexCPS2_Megaman, 36 },
    { L"1df: A2 Beat Plane 7", 0x400b900, 0x400b920, indexCPS2_Megaman, 36 },
    { L"1e0: A2 Beat Plane 8", 0x400b920, 0x400b940, indexCPS2_Megaman, 36 },
    { L"1e1: A2 Beat Plane 9", 0x400b940, 0x400b960, indexCPS2_Megaman, 36 },
    { L"1e2: A2 charging Roll 1", 0x400b960, 0x400b980, indexCPS2_Roll, 0 },
    { L"1e3: A2 charging Roll 2", 0x400b980, 0x400b9a0, indexCPS2_Roll, 0 },
    { L"1e4: A2 charging Roll 3", 0x400b9a0, 0x400b9c0, indexCPS2_Roll, 0 },
    { L"1e5: A2 charging Roll 4", 0x400b9c0, 0x400b9e0, indexCPS2_Roll, 0 },
    { L"1e6: A2 charging Roll 5", 0x400b9e0, 0x400ba00, indexCPS2_Roll, 0 },
    { L"1e7: A2 charging Roll 6", 0x400ba00, 0x400ba20, indexCPS2_Roll, 0 },
    { L"1e8: A2 charging Roll 7", 0x400ba20, 0x400ba40, indexCPS2_Roll, 0 },
    { L"1e9: A2 charging Roll 8", 0x400ba40, 0x400ba60, indexCPS2_Roll, 0 },
    { L"1ea: A2 charging Roll 9", 0x400ba60, 0x400ba80, indexCPS2_Roll, 0 },
    { L"1eb: A2 Rush Drill 1", 0x400ba80, 0x400baa0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ec: A2 Rush Drill 2", 0x400baa0, 0x400bac0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ed: A2 Rush Drill 3", 0x400bac0, 0x400bae0, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ee: A2 Rush Drill 4", 0x400bae0, 0x400bb00, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1ef: A2 Rush Drill 5", 0x400bb00, 0x400bb20, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f0: A2 Rush Drill 6", 0x400bb20, 0x400bb40, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f1: A2 Rush Drill 7", 0x400bb40, 0x400bb60, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f2: A2 Rush Drill 8", 0x400bb60, 0x400bb80, indexCPS2_Roll, 11, &pairMVC2RushDrill },
    { L"1f3: A2 Rush Drill 9", 0x400bb80, 0x400bba0, indexCPS2_Roll, 11 },
    { L"1f4: A2 Teleport Intro", 0x400bba0, 0x400bbc0, indexCPS2_Megaman, 13 },
    { L"1f5: A2 Dr. Light", 0x400bbc0, 0x400bbe0, indexCPS2_Megaman, 37 },
    { L"1f6: A2 Hyper Roll (armor/skin while shooting) 1", 0x400bbe0, 0x400bc00 },
    { L"1f7: A2 Hyper Roll (armor/skin while shooting) 2", 0x400bc00, 0x400bc20 },
    { L"1f8: A2 Hyper Roll (armor/skin while shooting) 3", 0x400bc20, 0x400bc40 },
    { L"1f9: A2 Hyper Roll (armor/skin while shooting) 4", 0x400bc40, 0x400bc60 },
    { L"1fa: A2 Hyper Roll (armor/skin while shooting) 5", 0x400bc60, 0x400bc80 },
    { L"1fb: A2 Hyper Roll (armor/skin while shooting) 6", 0x400bc80, 0x400bca0 },
    { L"1fc: A2 Hyper Roll (armor/skin while shooting) 7", 0x400bca0, 0x400bcc0 },
    { L"1fd: A2 Hyper Roll (armor/skin while shooting) 8", 0x400bcc0, 0x400bce0 },
    { L"1fe: A2 Hyper Roll (armor/skin while shooting) 9", 0x400bce0, 0x400bd00 },
    { L"1ff: A2 Hyper Roll 1", 0x400bd00, 0x400bd20, indexCPS2_Roll, 0 },
    { L"200: A2 Hyper Roll 2", 0x400bd20, 0x400bd40, indexCPS2_Roll, 0 },
    { L"201: A2 Hyper Roll 3", 0x400bd40, 0x400bd60, indexCPS2_Roll, 0 },
    { L"202: A2 Hyper Roll 4", 0x400bd60, 0x400bd80, indexCPS2_Roll, 0 },
    { L"203: A2 Hyper Roll 5", 0x400bd80, 0x400bda0, indexCPS2_Roll, 0 },
    { L"204: A2 Hyper Roll 6", 0x400bda0, 0x400bdc0, indexCPS2_Roll, 0 },
    { L"205: A2 Hyper Roll 7", 0x400bdc0, 0x400bde0, indexCPS2_Roll, 0 },
    { L"206: A2 Hyper Roll 8", 0x400bde0, 0x400be00, indexCPS2_Roll, 0 },
    { L"207: A2 Hyper Roll 9", 0x400be00, 0x400be20, indexCPS2_Roll, 0 },
    { L"208: A2 Hyper Roll Missiles", 0x400be20, 0x400be40 },
    { L"209: A2 Rush Drill metal 1", 0x400be40, 0x400be60, indexCPS2_Roll, 12 },
    { L"20a: A2 Rush Drill metal 2", 0x400be60, 0x400be80, indexCPS2_Roll, 12 },
    { L"20b: A2 Rush Drill metal 3", 0x400be80, 0x400bea0, indexCPS2_Roll, 12 },
    { L"20c: A2 Rush Drill metal 4", 0x400bea0, 0x400bec0, indexCPS2_Roll, 12 },
    { L"20d: A2 Rush Drill metal 5", 0x400bec0, 0x400bee0, indexCPS2_Roll, 12 },
    { L"20e: A2 Rush Drill metal 6", 0x400bee0, 0x400bf00, indexCPS2_Roll, 12 },
    { L"20f: A2 Rush Drill metal 7", 0x400bf00, 0x400bf20, indexCPS2_Roll, 12 },
    { L"210: A2 Rush Drill metal 8", 0x400bf20, 0x400bf40, indexCPS2_Roll, 12 },
    { L"211: A2 Megaman", 0x400bf40, 0x400bf60, indexCPS2_Megaman, 0 },
};

const sDescTreeNode MVC2_A_ROLL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_LP, ARRAYSIZE(MVC2_A_ROLL_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_LK, ARRAYSIZE(MVC2_A_ROLL_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_HP, ARRAYSIZE(MVC2_A_ROLL_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_HK, ARRAYSIZE(MVC2_A_ROLL_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_A1, ARRAYSIZE(MVC2_A_ROLL_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_A2, ARRAYSIZE(MVC2_A_ROLL_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_ROLL_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_ROLL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4090ce0, 0x4090d00, indexCPS2_Akuma, 0 },
    { L"(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4090d00, 0x4090d20, indexCPS2_Akuma, 1 },
    { L"(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4090d20, 0x4090d40, indexCPS2_Akuma, 2 },
    { L"(04) Not Used", 0x4090d40, 0x4090d60, indexCPS2_Akuma, 3 },
    { L"(05) Not Used", 0x4090d60, 0x4090d80, indexCPS2_Akuma, 4 },
    { L"(06) Not Used", 0x4090d80, 0x4090da0, indexCPS2_Akuma, 5 },
    { L"(07) Not Used", 0x4090da0, 0x4090dc0, indexCPS2_Akuma, 6 },
    { L"(08) Not Used", 0x4090dc0, 0x4090de0, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4090de0, 0x4090e00, indexCPS2_Akuma, 0 },
    { L"(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4090e00, 0x4090e20, indexCPS2_Akuma, 1 },
    { L"(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4090e20, 0x4090e40, indexCPS2_Akuma, 2 },
    { L"(04) Not Used", 0x4090e40, 0x4090e60, indexCPS2_Akuma, 3 },
    { L"(05) Not Used", 0x4090e60, 0x4090e80, indexCPS2_Akuma, 4 },
    { L"(06) Not Used", 0x4090e80, 0x4090ea0, indexCPS2_Akuma, 5 },
    { L"(07) Not Used", 0x4090ea0, 0x4090ec0, indexCPS2_Akuma, 6 },
    { L"(08) Not Used", 0x4090ec0, 0x4090ee0, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4090ee0, 0x4090f00, indexCPS2_Akuma, 0 },
    { L"(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4090f00, 0x4090f20, indexCPS2_Akuma, 1 },
    { L"(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4090f20, 0x4090f40, indexCPS2_Akuma, 2 },
    { L"(04) Not Used", 0x4090f40, 0x4090f60, indexCPS2_Akuma, 3 },
    { L"(05) Not Used", 0x4090f60, 0x4090f80, indexCPS2_Akuma, 4 },
    { L"(06) Not Used", 0x4090f80, 0x4090fa0, indexCPS2_Akuma, 5 },
    { L"(07) Not Used", 0x4090fa0, 0x4090fc0, indexCPS2_Akuma, 6 },
    { L"(08) Not Used", 0x4090fc0, 0x4090fe0, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4090fe0, 0x4091000, indexCPS2_Akuma, 0 },
    { L"(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4091000, 0x4091020, indexCPS2_Akuma, 1 },
    { L"(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4091020, 0x4091040, indexCPS2_Akuma, 2 },
    { L"(04) Not Used", 0x4091040, 0x4091060, indexCPS2_Akuma, 3 },
    { L"(05) Not Used", 0x4091060, 0x4091080, indexCPS2_Akuma, 4 },
    { L"(06) Not Used", 0x4091080, 0x40910a0, indexCPS2_Akuma, 5 },
    { L"(07) Not Used", 0x40910a0, 0x40910c0, indexCPS2_Akuma, 6 },
    { L"(08) Not Used", 0x40910c0, 0x40910e0, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_A1[] =
{
    { L"Main Color A1", 0x40910e0, 0x4091100, indexCPS2_Akuma, 0 },
    { L"(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4091100, 0x4091120, indexCPS2_Akuma, 1 },
    { L"(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4091120, 0x4091140, indexCPS2_Akuma, 2 },
    { L"(04) Not Used", 0x4091140, 0x4091160, indexCPS2_Akuma, 3 },
    { L"(05) Not Used", 0x4091160, 0x4091180, indexCPS2_Akuma, 4 },
    { L"(06) Not Used", 0x4091180, 0x40911a0, indexCPS2_Akuma, 5 },
    { L"(07) Not Used", 0x40911a0, 0x40911c0, indexCPS2_Akuma, 6 },
    { L"(08) Not Used", 0x40911c0, 0x40911e0, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_A2[] =
{
    { L"Main Color A2", 0x40911e0, 0x4091200, indexCPS2_Akuma, 0 },
    { L"(02) ID:02-09: Gou Hadou(Frame1) / Messatsu GouHadou / Gou Shoryuken (Flame) ID:10-15: Gou Hadou (Frame 2)", 0x4091200, 0x4091220, indexCPS2_Akuma, 1 },
    { L"(03) ID:02-09: Not Used ID:10-15: Not Used", 0x4091220, 0x4091240, indexCPS2_Akuma, 2 },
    { L"(04) Not Used", 0x4091240, 0x4091260, indexCPS2_Akuma, 3 },
    { L"(05) Not Used", 0x4091260, 0x4091280, indexCPS2_Akuma, 4 },
    { L"(06) Not Used", 0x4091280, 0x40912a0, indexCPS2_Akuma, 5 },
    { L"(07) Not Used", 0x40912a0, 0x40912c0, indexCPS2_Akuma, 6 },
    { L"(08) Not Used", 0x40912c0, 0x40912e0, indexCPS2_Akuma, 7 },
};

const sGame_PaletteDataset MVC2_A_GOUKI_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x40912e0, 0x4091300, indexCPS2_Akuma, 0 },
    { L"Burning Light", 0x4091300, 0x4091320, indexCPS2_Akuma, 0 },
    { L"Shocked Dark", 0x4091320, 0x4091340, indexCPS2_Akuma, 0 },
    { L"Shocked Light", 0x4091340, 0x4091360, indexCPS2_Akuma, 0 },
    { L"Dark Burning Dark", 0x4091360, 0x4091380, indexCPS2_Akuma, 0 },
    { L"Dark Burning Light", 0x4091380, 0x40913a0, indexCPS2_Akuma, 0 },
    { L"Kinetic Charge Dark", 0x40913a0, 0x40913c0, indexCPS2_Akuma, 0 },
    { L"Kinetic Charge Light", 0x40913c0, 0x40913e0, indexCPS2_Akuma, 0 },
};

const sDescTreeNode MVC2_A_GOUKI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_LP, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_LK, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_HP, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_HK, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_A1, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_A2, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_PALETTES_SHARED, ARRAYSIZE(MVC2_A_GOUKI_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_LP[] =
{
    { L"Main Color LP", 0x41aae60, 0x41aae80, indexCPS2_BBHood, 0 },
    { L"(02) Dog / Butterflies", 0x41aae80, 0x41aaea0, indexCPS2_BBHood, 1 },
    { L"(03) Mines / Uzi / Missiles", 0x41aaea0, 0x41aaec0, indexCPS2_BBHood, 2 },
    { L"(04) ID:01-08 Apples ID:09-15: Apples", 0x41aaec0, 0x41aaee0, indexCPS2_BBHood, 3 },
    { L"(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41aaee0, 0x41aaf00, indexCPS2_BBHood, 4 },
    { L"(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41aaf00, 0x41aaf20, indexCPS2_BBHood, 5 },
    { L"(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41aaf20, 0x41aaf40, indexCPS2_BBHood, 6 },
    { L"(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41aaf40, 0x41aaf60, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_LK[] =
{
    { L"Main Color LK", 0x41aaf60, 0x41aaf80, indexCPS2_BBHood, 0 },
    { L"(02) Dog / Butterflies", 0x41aaf80, 0x41aafa0, indexCPS2_BBHood, 1 },
    { L"(03) Mines / Uzi / Missiles", 0x41aafa0, 0x41aafc0, indexCPS2_BBHood, 2 },
    { L"(04) ID:01-08 Apples ID:09-15: Apples", 0x41aafc0, 0x41aafe0, indexCPS2_BBHood, 3 },
    { L"(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41aafe0, 0x41ab000, indexCPS2_BBHood, 4 },
    { L"(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab000, 0x41ab020, indexCPS2_BBHood, 5 },
    { L"(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab020, 0x41ab040, indexCPS2_BBHood, 6 },
    { L"(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab040, 0x41ab060, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_HP[] =
{
    { L"Main Color HP", 0x41ab060, 0x41ab080, indexCPS2_BBHood, 0 },
    { L"(02) Dog / Butterflies", 0x41ab080, 0x41ab0a0, indexCPS2_BBHood, 1 },
    { L"(03) Mines / Uzi / Missiles", 0x41ab0a0, 0x41ab0c0, indexCPS2_BBHood, 2 },
    { L"(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab0c0, 0x41ab0e0, indexCPS2_BBHood, 3 },
    { L"(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab0e0, 0x41ab100, indexCPS2_BBHood, 4 },
    { L"(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab100, 0x41ab120, indexCPS2_BBHood, 5 },
    { L"(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab120, 0x41ab140, indexCPS2_BBHood, 6 },
    { L"(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab140, 0x41ab160, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_HK[] =
{
    { L"Main Color HK", 0x41ab160, 0x41ab180, indexCPS2_BBHood, 0 },
    { L"(02) Dog / Butterflies", 0x41ab180, 0x41ab1a0, indexCPS2_BBHood, 1 },
    { L"(03) Mines / Uzi / Missiles", 0x41ab1a0, 0x41ab1c0, indexCPS2_BBHood, 2 },
    { L"(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab1c0, 0x41ab1e0, indexCPS2_BBHood, 3 },
    { L"(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab1e0, 0x41ab200, indexCPS2_BBHood, 4 },
    { L"(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab200, 0x41ab220, indexCPS2_BBHood, 5 },
    { L"(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab220, 0x41ab240, indexCPS2_BBHood, 6 },
    { L"(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab240, 0x41ab260, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_A1[] =
{
    { L"Main Color A1", 0x41ab260, 0x41ab280, indexCPS2_BBHood, 0 },
    { L"(02) Dog / Butterflies", 0x41ab280, 0x41ab2a0, indexCPS2_BBHood, 1 },
    { L"(03) Mines / Uzi / Missiles", 0x41ab2a0, 0x41ab2c0, indexCPS2_BBHood, 2 },
    { L"(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab2c0, 0x41ab2e0, indexCPS2_BBHood, 3 },
    { L"(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab2e0, 0x41ab300, indexCPS2_BBHood, 4 },
    { L"(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab300, 0x41ab320, indexCPS2_BBHood, 5 },
    { L"(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab320, 0x41ab340, indexCPS2_BBHood, 6 },
    { L"(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab340, 0x41ab360, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_A2[] =
{
    { L"Main Color A2", 0x41ab360, 0x41ab380, indexCPS2_BBHood, 0 },
    { L"(02) Dog / Butterflies", 0x41ab380, 0x41ab3a0, indexCPS2_BBHood, 1 },
    { L"(03) Mines / Uzi / Missiles", 0x41ab3a0, 0x41ab3c0, indexCPS2_BBHood, 2 },
    { L"(04) ID:01-08 Apples ID:09-15: Apples", 0x41ab3c0, 0x41ab3e0, indexCPS2_BBHood, 3 },
    { L"(05) ID:01-09 Explosion (Burst) / GunMen (Fire) ID:10-15: Not Used", 0x41ab3e0, 0x41ab400, indexCPS2_BBHood, 4 },
    { L"(06) ID:01-08: Missile Smog Trail ID:09-15 Not used", 0x41ab400, 0x41ab420, indexCPS2_BBHood, 5 },
    { L"(07) ID:01-07: Applebomb ID:08-15: Molotov Cocktail (fire)", 0x41ab420, 0x41ab440, indexCPS2_BBHood, 6 },
    { L"(08) ID:01-07: Molotov Cocktail (bottle) ID:08-14: Molotov Cocktail (Sticker!)", 0x41ab440, 0x41ab460, indexCPS2_BBHood, 7 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x41ab460, 0x41ab480, indexCPS2_BBHood, 0 },
    { L"Burning Light", 0x41ab480, 0x41ab4a0, indexCPS2_BBHood, 0 },
    { L"Shocked Dark", 0x41ab4a0, 0x41ab4c0, indexCPS2_BBHood, 0 },
    { L"Shocked Light", 0x41ab4c0, 0x41ab4e0, indexCPS2_BBHood, 0 },
    { L"Dark Burning Dark", 0x41ab4e0, 0x41ab500, indexCPS2_BBHood, 0 },
    { L"Dark Burning Light", 0x41ab500, 0x41ab520, indexCPS2_BBHood, 0 },
    { L"Kinetic Charge Dark", 0x41ab520, 0x41ab540, indexCPS2_BBHood, 0 },
    { L"Kinetic Charge Light", 0x41ab540, 0x41ab560, indexCPS2_BBHood, 0 },
};

const sGame_PaletteDataset MVC2_A_BBHOOD_PALETTES_EXTRAS[] =
{
    { L"09: Bottle", 0x41ab560, 0x41ab580, indexCPS2_BBHood, 0x07 },
    { L"0a: Water", 0x41ab580, 0x41ab5a0 },
    { L"0b: Water (unused)", 0x41ab5a0, 0x41ab5c0 },
    { L"0c: LP Cruel Hunting", 0x41ab5c0, 0x41ab5e0, indexCPS2_BBHood, 0x08 },
    { L"0d: LK Cruel Hunting", 0x41ab5e0, 0x41ab600, indexCPS2_BBHood, 0x08 },
    { L"0e: HP Cruel Hunting", 0x41ab600, 0x41ab620, indexCPS2_BBHood, 0x08 },
    { L"0f: HK Cruel Hunting", 0x41ab620, 0x41ab640, indexCPS2_BBHood, 0x08 },
    { L"10: A1 Cruel Hunting", 0x41ab640, 0x41ab660, indexCPS2_BBHood, 0x08 },
    { L"11: A2 Cruel Hunting", 0x41ab660, 0x41ab680, indexCPS2_BBHood, 0x08 },
    { L"12: Not Used", 0x41ab680, 0x41ab6a0 },
    { L"13: Not Used", 0x41ab6a0, 0x41ab6c0 },
    { L"14: Man in suit", 0x41ab6c0, 0x41ab6e0, indexCPS2_BBHood, 0x09 },
};

const sDescTreeNode MVC2_A_BBHOOD_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_LP, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_LK, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_HP, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_HK, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_A1, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_A2, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_BBHOOD_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_LP[] =
{
    { L"Main Color LP", 0x42d2080, 0x42d20a0, indexCPS2_Felicia, 0 },
    { L"(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d20a0, 0x42d20c0, indexCPS2_Felicia, 1 },
    { L"(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d20c0, 0x42d20e0, indexCPS2_Felicia, 2 },
    { L"(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d20e0, 0x42d2100, indexCPS2_Felicia, 3 },
    { L"(05) Not Used", 0x42d2100, 0x42d2120, indexCPS2_Felicia, 4 },
    { L"(06) Not Used", 0x42d2120, 0x42d2140, indexCPS2_Felicia, 5 },
    { L"(07) Not Used", 0x42d2140, 0x42d2160, indexCPS2_Felicia, 6 },
    { L"(08) Not Used", 0x42d2160, 0x42d2180, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_LK[] =
{
    { L"Main Color LK", 0x42d2180, 0x42d21a0, indexCPS2_Felicia, 0 },
    { L"(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d21a0, 0x42d21c0, indexCPS2_Felicia, 1 },
    { L"(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d21c0, 0x42d21e0, indexCPS2_Felicia, 2 },
    { L"(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d21e0, 0x42d2200, indexCPS2_Felicia, 3 },
    { L"(05) Not Used", 0x42d2200, 0x42d2220, indexCPS2_Felicia, 4 },
    { L"(06) Not Used", 0x42d2220, 0x42d2240, indexCPS2_Felicia, 5 },
    { L"(07) Not Used", 0x42d2240, 0x42d2260, indexCPS2_Felicia, 6 },
    { L"(08) Not Used", 0x42d2260, 0x42d2280, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_HP[] =
{
    { L"Main Color HP", 0x42d2280, 0x42d22a0, indexCPS2_Felicia, 0 },
    { L"(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d22a0, 0x42d22c0, indexCPS2_Felicia, 1 },
    { L"(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d22c0, 0x42d22e0, indexCPS2_Felicia, 2 },
    { L"(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d22e0, 0x42d2300, indexCPS2_Felicia, 3 },
    { L"(05) Not Used", 0x42d2300, 0x42d2320, indexCPS2_Felicia, 4 },
    { L"(06) Not Used", 0x42d2320, 0x42d2340, indexCPS2_Felicia, 5 },
    { L"(07) Not Used", 0x42d2340, 0x42d2360, indexCPS2_Felicia, 6 },
    { L"(08) Not Used", 0x42d2360, 0x42d2380, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_HK[] =
{
    { L"Main Color HK", 0x42d2380, 0x42d23a0, indexCPS2_Felicia, 0 },
    { L"(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d23a0, 0x42d23c0, indexCPS2_Felicia, 1 },
    { L"(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d23c0, 0x42d23e0, indexCPS2_Felicia, 2 },
    { L"(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d23e0, 0x42d2400, indexCPS2_Felicia, 3 },
    { L"(05) Not Used", 0x42d2400, 0x42d2420, indexCPS2_Felicia, 4 },
    { L"(06) Not Used", 0x42d2420, 0x42d2440, indexCPS2_Felicia, 5 },
    { L"(07) Not Used", 0x42d2440, 0x42d2460, indexCPS2_Felicia, 6 },
    { L"(08) Not Used", 0x42d2460, 0x42d2480, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_A1[] =
{
    { L"Main Color A1", 0x42d2480, 0x42d24a0, indexCPS2_Felicia, 0 },
    { L"(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d24a0, 0x42d24c0, indexCPS2_Felicia, 1 },
    { L"(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d24c0, 0x42d24e0, indexCPS2_Felicia, 2 },
    { L"(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d24e0, 0x42d2500, indexCPS2_Felicia, 3 },
    { L"(05) Not Used", 0x42d2500, 0x42d2520, indexCPS2_Felicia, 4 },
    { L"(06) Not Used", 0x42d2520, 0x42d2540, indexCPS2_Felicia, 5 },
    { L"(07) Not Used", 0x42d2540, 0x42d2560, indexCPS2_Felicia, 6 },
    { L"(08) Not Used", 0x42d2560, 0x42d2580, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_A2[] =
{
    { L"Main Color A2", 0x42d2580, 0x42d25a0, indexCPS2_Felicia, 0 },
    { L"(02) ID:01-07 Sand Splash / CatSpike ID:08-15 Sand Splash/ Catball", 0x42d25a0, 0x42d25c0, indexCPS2_Felicia, 1 },
    { L"(03) ID:01-06 Not Used ID:08-15 Rolling Slide (dust)", 0x42d25c0, 0x42d25e0, indexCPS2_Felicia, 2 },
    { L"(04) ID:01-07 Dancing Flash ID:08-15 Not Used", 0x42d25e0, 0x42d2600, indexCPS2_Felicia, 3 },
    { L"(05) Not Used", 0x42d2600, 0x42d2620, indexCPS2_Felicia, 4 },
    { L"(06) Not Used", 0x42d2620, 0x42d2640, indexCPS2_Felicia, 5 },
    { L"(07) Not Used", 0x42d2640, 0x42d2660, indexCPS2_Felicia, 6 },
    { L"(08) Not Used", 0x42d2660, 0x42d2680, indexCPS2_Felicia, 7 },
};

const sGame_PaletteDataset MVC2_A_FELICIA_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x42d2680, 0x42d26a0, indexCPS2_Felicia, 0 },
    { L"Burning Light", 0x42d26a0, 0x42d26c0, indexCPS2_Felicia, 0 },
    { L"Shocked Dark", 0x42d26c0, 0x42d26e0, indexCPS2_Felicia, 0 },
    { L"Shocked Light", 0x42d26e0, 0x42d2700, indexCPS2_Felicia, 0 },
    { L"Dark Burning Dark", 0x42d2700, 0x42d2720, indexCPS2_Felicia, 0 },
    { L"Dark Burning Light", 0x42d2720, 0x42d2740, indexCPS2_Felicia, 0 },
    { L"Kinetic Charge Dark", 0x42d2740, 0x42d2760, indexCPS2_Felicia, 0 },
    { L"Kinetic Charge Light", 0x42d2760, 0x42d2780, indexCPS2_Felicia, 0 },
};

const sDescTreeNode MVC2_A_FELICIA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_LP, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_LK, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_HP, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_HK, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_A1, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_A2, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_FELICIA_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x433f100, 0x433f120, indexCPS2_Charlie, 0 },
    { L"(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f120, 0x433f140, indexCPS2_Charlie, 1 },
    { L"(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f140, 0x433f160, indexCPS2_Charlie, 2 },
    { L"(04) Not Used", 0x433f160, 0x433f180, indexCPS2_Charlie, 3 },
    { L"(05) Not Used", 0x433f180, 0x433f1a0, indexCPS2_Charlie, 4 },
    { L"(06) Not Used", 0x433f1a0, 0x433f1c0, indexCPS2_Charlie, 5 },
    { L"(07) Not Used", 0x433f1c0, 0x433f1e0, indexCPS2_Charlie, 0 },
    { L"(08) Not Used", 0x433f1e0, 0x433f200, indexCPS2_Charlie, 0 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x433f200, 0x433f220, indexCPS2_Charlie, 0 },
    { L"(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f220, 0x433f240, indexCPS2_Charlie, 1 },
    { L"(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f240, 0x433f260, indexCPS2_Charlie, 2 },
    { L"(04) Not Used", 0x433f260, 0x433f280, indexCPS2_Charlie, 3 },
    { L"(05) Not Used", 0x433f280, 0x433f2a0, indexCPS2_Charlie, 4 },
    { L"(06) Not Used", 0x433f2a0, 0x433f2c0, indexCPS2_Charlie, 5 },
    { L"(07) Not Used", 0x433f2c0, 0x433f2e0, indexCPS2_Charlie, 0 },
    { L"(08) Not Used", 0x433f2e0, 0x433f300, indexCPS2_Charlie, 0 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x433f300, 0x433f320, indexCPS2_Charlie, 0 },
    { L"(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f320, 0x433f340, indexCPS2_Charlie, 1 },
    { L"(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f340, 0x433f360, indexCPS2_Charlie, 2 },
    { L"(04) Not Used", 0x433f360, 0x433f380, indexCPS2_Charlie, 3 },
    { L"(05) Not Used", 0x433f380, 0x433f3a0, indexCPS2_Charlie, 4 },
    { L"(06) Not Used", 0x433f3a0, 0x433f3c0, indexCPS2_Charlie, 5 },
    { L"(07) Not Used", 0x433f3c0, 0x433f3e0, indexCPS2_Charlie, 0 },
    { L"(08) Not Used", 0x433f3e0, 0x433f400, indexCPS2_Charlie, 0 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x433f400, 0x433f420, indexCPS2_Charlie, 0 },
    { L"(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f420, 0x433f440, indexCPS2_Charlie, 1 },
    { L"(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f440, 0x433f460, indexCPS2_Charlie, 2 },
    { L"(04) Not Used", 0x433f460, 0x433f480, indexCPS2_Charlie, 3 },
    { L"(05) Not Used", 0x433f480, 0x433f4a0, indexCPS2_Charlie, 4 },
    { L"(06) Not Used", 0x433f4a0, 0x433f4c0, indexCPS2_Charlie, 5 },
    { L"(07) Not Used", 0x433f4c0, 0x433f4e0, indexCPS2_Charlie, 0 },
    { L"(08) Not Used", 0x433f4e0, 0x433f500, indexCPS2_Charlie, 0 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x433f500, 0x433f520, indexCPS2_Charlie, 0 },
    { L"(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f520, 0x433f540, indexCPS2_Charlie, 1 },
    { L"(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f540, 0x433f560, indexCPS2_Charlie, 2 },
    { L"(04) Not Used", 0x433f560, 0x433f580, indexCPS2_Charlie, 3 },
    { L"(05) Not Used", 0x433f580, 0x433f5a0, indexCPS2_Charlie, 4 },
    { L"(06) Not Used", 0x433f5a0, 0x433f5c0, indexCPS2_Charlie, 5 },
    { L"(07) Not Used", 0x433f5c0, 0x433f5e0, indexCPS2_Charlie, 0 },
    { L"(08) Not Used", 0x433f5e0, 0x433f600, indexCPS2_Charlie, 0 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x433f600, 0x433f620, indexCPS2_Charlie, 0 },
    { L"(02) ID:01-08 Sonic Boom (inner) ID:09-15 Sonic Boom (tip)", 0x433f620, 0x433f640, indexCPS2_Charlie, 1 },
    { L"(03) ID:01-08 Flash Kick (Main) ID:09-15 Flash Kick (Shadow)", 0x433f640, 0x433f660, indexCPS2_Charlie, 2 },
    { L"(04) Not Used", 0x433f660, 0x433f680, indexCPS2_Charlie, 3 },
    { L"(05) Not Used", 0x433f680, 0x433f6a0, indexCPS2_Charlie, 4 },
    { L"(06) Not Used", 0x433f6a0, 0x433f6c0, indexCPS2_Charlie, 5 },
    { L"(07) Not Used", 0x433f6c0, 0x433f6e0, indexCPS2_Charlie, 0 },
    { L"(08) Not Used", 0x433f6e0, 0x433f700, indexCPS2_Charlie, 0 },
};

const sGame_PaletteDataset MVC2_A_CHARLIE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x433f700, 0x433f720, indexCPS2_Charlie, 0 },
    { L"Burning Light", 0x433f720, 0x433f740, indexCPS2_Charlie, 0 },
    { L"Shocked Dark", 0x433f740, 0x433f760, indexCPS2_Charlie, 0 },
    { L"Shocked Light", 0x433f760, 0x433f780, indexCPS2_Charlie, 0 },
    { L"Dark Burning Dark", 0x433f780, 0x433f7a0, indexCPS2_Charlie, 0 },
    { L"Dark Burning Light", 0x433f7a0, 0x433f7c0, indexCPS2_Charlie, 0 },
    { L"Kinetic Charge Dark", 0x433f7c0, 0x433f7e0, indexCPS2_Charlie, 0 },
    { L"Kinetic Charge Light", 0x433f7e0, 0x433f800, indexCPS2_Charlie, 0 },
};

const sDescTreeNode MVC2_A_CHARLIE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_LP, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_LK, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_HP, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_HK, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_A1, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_A2, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CHARLIE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4405b60, 0x4405b80, indexCPS2_Sakura, 0 },
    { L"(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405b80, 0x4405ba0, indexCPS2_Sakura, 1 },
    { L"(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405ba0, 0x4405bc0, indexCPS2_Sakura, 2 },
    { L"(04) Not Used", 0x4405bc0, 0x4405be0, indexCPS2_Sakura, 3 },
    { L"(05) Not Used", 0x4405be0, 0x4405c00, indexCPS2_Sakura, 4 },
    { L"(06) Not Used", 0x4405c00, 0x4405c20, indexCPS2_Sakura, 5 },
    { L"(07) Not Used", 0x4405c20, 0x4405c40, indexCPS2_Sakura, 0 },
    { L"(08) Not Used", 0x4405c40, 0x4405c60, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4405c60, 0x4405c80, indexCPS2_Sakura, 0 },
    { L"(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405c80, 0x4405ca0, indexCPS2_Sakura, 1 },
    { L"(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405ca0, 0x4405cc0, indexCPS2_Sakura, 2 },
    { L"(04) Not Used", 0x4405cc0, 0x4405ce0, indexCPS2_Sakura, 3 },
    { L"(05) Not Used", 0x4405ce0, 0x4405d00, indexCPS2_Sakura, 4 },
    { L"(06) Not Used", 0x4405d00, 0x4405d20, indexCPS2_Sakura, 5 },
    { L"(07) Not Used", 0x4405d20, 0x4405d40, indexCPS2_Sakura, 0 },
    { L"(08) Not Used", 0x4405d40, 0x4405d60, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4405d60, 0x4405d80, indexCPS2_Sakura, 0 },
    { L"(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405d80, 0x4405da0, indexCPS2_Sakura, 1 },
    { L"(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405da0, 0x4405dc0, indexCPS2_Sakura, 2 },
    { L"(04) Not Used", 0x4405dc0, 0x4405de0, indexCPS2_Sakura, 3 },
    { L"(05) Not Used", 0x4405de0, 0x4405e00, indexCPS2_Sakura, 4 },
    { L"(06) Not Used", 0x4405e00, 0x4405e20, indexCPS2_Sakura, 5 },
    { L"(07) Not Used", 0x4405e20, 0x4405e40, indexCPS2_Sakura, 0 },
    { L"(08) Not Used", 0x4405e40, 0x4405e60, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4405e60, 0x4405e80, indexCPS2_Sakura, 0 },
    { L"(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405e80, 0x4405ea0, indexCPS2_Sakura, 1 },
    { L"(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405ea0, 0x4405ec0, indexCPS2_Sakura, 2 },
    { L"(04) Not Used", 0x4405ec0, 0x4405ee0, indexCPS2_Sakura, 3 },
    { L"(05) Not Used", 0x4405ee0, 0x4405f00, indexCPS2_Sakura, 4 },
    { L"(06) Not Used", 0x4405f00, 0x4405f20, indexCPS2_Sakura, 5 },
    { L"(07) Not Used", 0x4405f20, 0x4405f40, indexCPS2_Sakura, 0 },
    { L"(08) Not Used", 0x4405f40, 0x4405f60, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4405f60, 0x4405f80, indexCPS2_Sakura, 0 },
    { L"(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4405f80, 0x4405fa0, indexCPS2_Sakura, 1 },
    { L"(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x4405fa0, 0x4405fc0, indexCPS2_Sakura, 2 },
    { L"(04) Not Used", 0x4405fc0, 0x4405fe0, indexCPS2_Sakura, 3 },
    { L"(05) Not Used", 0x4405fe0, 0x4406000, indexCPS2_Sakura, 4 },
    { L"(06) Not Used", 0x4406000, 0x4406020, indexCPS2_Sakura, 5 },
    { L"(07) Not Used", 0x4406020, 0x4406040, indexCPS2_Sakura, 0 },
    { L"(08) Not Used", 0x4406040, 0x4406060, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4406060, 0x4406080, indexCPS2_Sakura, 0 },
    { L"(02) ID:02-09 - Hadouken ID:10-15 - Not Used", 0x4406080, 0x44060a0, indexCPS2_Sakura, 1 },
    { L"(03) ID:02-09 - Not Used ID:10-15 - Shooken", 0x44060a0, 0x44060c0, indexCPS2_Sakura, 2 },
    { L"(04) Not Used", 0x44060c0, 0x44060e0, indexCPS2_Sakura, 3 },
    { L"(05) Not Used", 0x44060e0, 0x4406100, indexCPS2_Sakura, 4 },
    { L"(06) Not Used", 0x4406100, 0x4406120, indexCPS2_Sakura, 5 },
    { L"(07) Not Used", 0x4406120, 0x4406140, indexCPS2_Sakura, 0 },
    { L"(08) Not Used", 0x4406140, 0x4406160, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4406160, 0x4406180, indexCPS2_Sakura, 0 },
    { L"Burning Light", 0x4406180, 0x44061a0, indexCPS2_Sakura, 0 },
    { L"Shocked Dark", 0x44061a0, 0x44061c0, indexCPS2_Sakura, 0 },
    { L"Shocked Light", 0x44061c0, 0x44061e0, indexCPS2_Sakura, 0 },
    { L"Dark Burning Dark", 0x44061e0, 0x4406200, indexCPS2_Sakura, 0 },
    { L"Dark Burning Light", 0x4406200, 0x4406220, indexCPS2_Sakura, 0 },
    { L"Kinetic Charge Dark", 0x4406220, 0x4406240, indexCPS2_Sakura, 0 },
    { L"Kinetic Charge Light", 0x4406240, 0x4406260, indexCPS2_Sakura, 0 },
};

const sGame_PaletteDataset MVC2_A_SAKURA_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x4406260, 0x4406280 },
    { L"0a: Not Used", 0x4406280, 0x44062a0 },
    { L"0b: Winpose - Cherry Blossoms", 0x44062a0, 0x44062c0, indexCPS2_Sakura, 0x08 },
    { L"0c: Not Used", 0x44062c0, 0x44062e0 },
    { L"0d: Not Used", 0x44062e0, 0x4406300 },
    { L"0e: Not Used", 0x4406300, 0x4406320 },
    { L"0f: Not Used", 0x4406320, 0x4406340 },
    { L"10: Not Used", 0x4406340, 0x4406360 },
    { L"11: Winpose - LP Kei (Sakura's friend)", 0x4406360, 0x4406380 },
    { L"12: Not Used", 0x4406380, 0x44063a0 },
    { L"13: Winpose - LK Kei (Sakura's friend)", 0x44063a0, 0x44063c0 },
    { L"14: Not Used", 0x44063c0, 0x44063e0 },
    { L"15: Winpose - HP Kei (Sakura's friend)", 0x44063e0, 0x4406400 },
    { L"16: Not Used", 0x4406400, 0x4406420 },
    { L"17: Winpose - HK Kei (Sakura's friend)", 0x4406420, 0x4406440 },
    { L"18: Not Used", 0x4406440, 0x4406460 },
    { L"19: Winpose - A1 Kei (Sakura's friend)", 0x4406460, 0x4406480 },
    { L"1a: Not Used", 0x4406480, 0x44064a0 },
    { L"1b: Winpose - A2 Kei (Sakura's friend)", 0x44064a0, 0x44064c0 },
    { L"1c: Not Used", 0x44064c0, 0x44064e0 },
    { L"1d: LP Evil Sakura", 0x44064e0, 0x4406500, indexCPS2_Sakura, 0 },
    { L"1e: LK Evil Sakura", 0x4406500, 0x4406520, indexCPS2_Sakura, 0 },
    { L"1f: HP Evil Sakura", 0x4406520, 0x4406540, indexCPS2_Sakura, 0 },
    { L"20: HK Evil Sakura", 0x4406540, 0x4406560, indexCPS2_Sakura, 0 },
    { L"21: A1 Evil Sakura", 0x4406560, 0x4406580, indexCPS2_Sakura, 0 },
    { L"22: A2 Evil Sakura", 0x4406580, 0x44065a0, indexCPS2_Sakura, 0 },
};

const sDescTreeNode MVC2_A_SAKURA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_LP, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_LK, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_HP, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_HK, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_A1, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_A2, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SAKURA_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x44540c0, 0x44540e0, indexCPS2_Dan, 0 },
    { L"(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44540e0, 0x4454100, indexCPS2_Dan, 1 },
    { L"(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454100, 0x4454120, indexCPS2_Dan, 2 },
    { L"(04) Not Used", 0x4454120, 0x4454140, indexCPS2_Dan, 3 },
    { L"(05) Not Used", 0x4454140, 0x4454160, indexCPS2_Dan, 4 },
    { L"(06) Not Used", 0x4454160, 0x4454180, indexCPS2_Dan, 5 },
    { L"(07) Not Used", 0x4454180, 0x44541a0, indexCPS2_Dan, 0 },
    { L"(08) Not Used", 0x44541a0, 0x44541c0, indexCPS2_Dan, 0 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x44541c0, 0x44541e0, indexCPS2_Dan, 0 },
    { L"(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44541e0, 0x4454200, indexCPS2_Dan, 1 },
    { L"(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454200, 0x4454220, indexCPS2_Dan, 2 },
    { L"(04) Not Used", 0x4454220, 0x4454240, indexCPS2_Dan, 3 },
    { L"(05) Not Used", 0x4454240, 0x4454260, indexCPS2_Dan, 4 },
    { L"(06) Not Used", 0x4454260, 0x4454280, indexCPS2_Dan, 5 },
    { L"(07) Not Used", 0x4454280, 0x44542a0, indexCPS2_Dan, 0 },
    { L"(08) Not Used", 0x44542a0, 0x44542c0, indexCPS2_Dan, 0 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x44542c0, 0x44542e0, indexCPS2_Dan, 0 },
    { L"(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44542e0, 0x4454300, indexCPS2_Dan, 1 },
    { L"(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454300, 0x4454320, indexCPS2_Dan, 2 },
    { L"(04) Not Used", 0x4454320, 0x4454340, indexCPS2_Dan, 3 },
    { L"(05) Not Used", 0x4454340, 0x4454360, indexCPS2_Dan, 4 },
    { L"(06) Not Used", 0x4454360, 0x4454380, indexCPS2_Dan, 5 },
    { L"(07) Not Used", 0x4454380, 0x44543a0, indexCPS2_Dan, 0 },
    { L"(08) Not Used", 0x44543a0, 0x44543c0, indexCPS2_Dan, 0 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x44543c0, 0x44543e0, indexCPS2_Dan, 0 },
    { L"(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44543e0, 0x4454400, indexCPS2_Dan, 1 },
    { L"(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454400, 0x4454420, indexCPS2_Dan, 2 },
    { L"(04) Not Used", 0x4454420, 0x4454440, indexCPS2_Dan, 3 },
    { L"(05) Not Used", 0x4454440, 0x4454460, indexCPS2_Dan, 4 },
    { L"(06) Not Used", 0x4454460, 0x4454480, indexCPS2_Dan, 5 },
    { L"(07) Not Used", 0x4454480, 0x44544a0, indexCPS2_Dan, 0 },
    { L"(08) Not Used", 0x44544a0, 0x44544c0, indexCPS2_Dan, 0 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x44544c0, 0x44544e0, indexCPS2_Dan, 0 },
    { L"(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44544e0, 0x4454500, indexCPS2_Dan, 1 },
    { L"(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454500, 0x4454520, indexCPS2_Dan, 2 },
    { L"(04) Not Used", 0x4454520, 0x4454540, indexCPS2_Dan, 3 },
    { L"(05) Not Used", 0x4454540, 0x4454560, indexCPS2_Dan, 4 },
    { L"(06) Not Used", 0x4454560, 0x4454580, indexCPS2_Dan, 5 },
    { L"(07) Not Used", 0x4454580, 0x44545a0, indexCPS2_Dan, 0 },
    { L"(08) Not Used", 0x44545a0, 0x44545c0, indexCPS2_Dan, 0 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x44545c0, 0x44545e0, indexCPS2_Dan, 0 },
    { L"(02) 02-09 Gadouken ID:10-15 Gadouken", 0x44545e0, 0x4454600, indexCPS2_Dan, 1 },
    { L"(03) 02-09 Gadouken ID:10-15 Gadouken", 0x4454600, 0x4454620, indexCPS2_Dan, 2 },
    { L"(04) Not Used", 0x4454620, 0x4454640, indexCPS2_Dan, 3 },
    { L"(05) Not Used", 0x4454640, 0x4454660, indexCPS2_Dan, 4 },
    { L"(06) Not Used", 0x4454660, 0x4454680, indexCPS2_Dan, 5 },
    { L"(07) Not Used", 0x4454680, 0x44546a0, indexCPS2_Dan, 0 },
    { L"(08) Not Used", 0x44546a0, 0x44546c0, indexCPS2_Dan, 0 },
};

const sGame_PaletteDataset MVC2_A_DAN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x44546c0, 0x44546e0, indexCPS2_Dan, 0 },
    { L"Burning Light", 0x44546e0, 0x4454700, indexCPS2_Dan, 0 },
    { L"Shocked Dark", 0x4454700, 0x4454720, indexCPS2_Dan, 0 },
    { L"Shocked Light", 0x4454720, 0x4454740, indexCPS2_Dan, 0 },
    { L"Dark Burning Dark", 0x4454740, 0x4454760, indexCPS2_Dan, 0 },
    { L"Dark Burning Light", 0x4454760, 0x4454780, indexCPS2_Dan, 0 },
    { L"Kinetic Charge Dark", 0x4454780, 0x44547a0, indexCPS2_Dan, 0 },
    { L"Kinetic Charge Light", 0x44547a0, 0x44547c0, indexCPS2_Dan, 0 },
};

const sDescTreeNode MVC2_A_DAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_LP, ARRAYSIZE(MVC2_A_DAN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_LK, ARRAYSIZE(MVC2_A_DAN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_HP, ARRAYSIZE(MVC2_A_DAN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_HK, ARRAYSIZE(MVC2_A_DAN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_A1, ARRAYSIZE(MVC2_A_DAN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_A2, ARRAYSIZE(MVC2_A_DAN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_DAN_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_LP[] =
{
    { L"Main Color LP", 0x44f3b80, 0x44f3ba0, indexCPS2_Cammy, 0 },
    { L"(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3ba0, 0x44f3bc0, indexCPS2_Cammy, 1 },
    { L"(03) Not Used", 0x44f3bc0, 0x44f3be0, indexCPS2_Cammy, 2 },
    { L"(04) Bison", 0x44f3be0, 0x44f3c00, indexCPS2_Cammy, 3 },
    { L"(05) Not Used", 0x44f3c00, 0x44f3c20, indexCPS2_Cammy, 4 },
    { L"(06) Not Used", 0x44f3c20, 0x44f3c40, indexCPS2_Cammy, 5 },
    { L"(07) Not Used", 0x44f3c40, 0x44f3c60, indexCPS2_Cammy, 6 },
    { L"(08) Not Used", 0x44f3c60, 0x44f3c80, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_LK[] =
{
    { L"Main Color LK", 0x44f3c80, 0x44f3ca0, indexCPS2_Cammy, 0 },
    { L"(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3ca0, 0x44f3cc0, indexCPS2_Cammy, 1 },
    { L"(03) Not Used", 0x44f3cc0, 0x44f3ce0, indexCPS2_Cammy, 2 },
    { L"(04) Bison", 0x44f3ce0, 0x44f3d00, indexCPS2_Cammy, 3 },
    { L"(05) Not Used", 0x44f3d00, 0x44f3d20, indexCPS2_Cammy, 4 },
    { L"(06) Not Used", 0x44f3d20, 0x44f3d40, indexCPS2_Cammy, 5 },
    { L"(07) Not Used", 0x44f3d40, 0x44f3d60, indexCPS2_Cammy, 6 },
    { L"(08) Not Used", 0x44f3d60, 0x44f3d80, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_HP[] =
{
    { L"Main Color HP", 0x44f3d80, 0x44f3da0, indexCPS2_Cammy, 0 },
    { L"(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3da0, 0x44f3dc0, indexCPS2_Cammy, 1 },
    { L"(03) Not Used", 0x44f3dc0, 0x44f3de0, indexCPS2_Cammy, 2 },
    { L"(04) Bison", 0x44f3de0, 0x44f3e00, indexCPS2_Cammy, 3 },
    { L"(05) Not Used", 0x44f3e00, 0x44f3e20, indexCPS2_Cammy, 4 },
    { L"(06) Not Used", 0x44f3e20, 0x44f3e40, indexCPS2_Cammy, 5 },
    { L"(07) Not Used", 0x44f3e40, 0x44f3e60, indexCPS2_Cammy, 6 },
    { L"(08) Not Used", 0x44f3e60, 0x44f3e80, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_HK[] =
{
    { L"Main Color HK", 0x44f3e80, 0x44f3ea0, indexCPS2_Cammy, 0 },
    { L"(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3ea0, 0x44f3ec0, indexCPS2_Cammy, 1 },
    { L"(03) Not Used", 0x44f3ec0, 0x44f3ee0, indexCPS2_Cammy, 2 },
    { L"(04) Bison", 0x44f3ee0, 0x44f3f00, indexCPS2_Cammy, 3 },
    { L"(05) Not Used", 0x44f3f00, 0x44f3f20, indexCPS2_Cammy, 4 },
    { L"(06) Not Used", 0x44f3f20, 0x44f3f40, indexCPS2_Cammy, 5 },
    { L"(07) Not Used", 0x44f3f40, 0x44f3f60, indexCPS2_Cammy, 6 },
    { L"(08) Not Used", 0x44f3f60, 0x44f3f80, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_A1[] =
{
    { L"Main Color A1", 0x44f3f80, 0x44f3fa0, indexCPS2_Cammy, 0 },
    { L"(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f3fa0, 0x44f3fc0, indexCPS2_Cammy, 1 },
    { L"(03) Not Used", 0x44f3fc0, 0x44f3fe0, indexCPS2_Cammy, 2 },
    { L"(04) Bison", 0x44f3fe0, 0x44f4000, indexCPS2_Cammy, 3 },
    { L"(05) Not Used", 0x44f4000, 0x44f4020, indexCPS2_Cammy, 4 },
    { L"(06) Not Used", 0x44f4020, 0x44f4040, indexCPS2_Cammy, 5 },
    { L"(07) Not Used", 0x44f4040, 0x44f4060, indexCPS2_Cammy, 6 },
    { L"(08) Not Used", 0x44f4060, 0x44f4080, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_A2[] =
{
    { L"Main Color A2", 0x44f4080, 0x44f40a0, indexCPS2_Cammy, 0 },
    { L"(02) ID:02-09 Cannon Drill (effect), Gauntlet (glow)", 0x44f40a0, 0x44f40c0, indexCPS2_Cammy, 1 },
    { L"(03) Not Used", 0x44f40c0, 0x44f40e0, indexCPS2_Cammy, 2 },
    { L"(04) Bison", 0x44f40e0, 0x44f4100, indexCPS2_Cammy, 3 },
    { L"(05) Not Used", 0x44f4100, 0x44f4120, indexCPS2_Cammy, 4 },
    { L"(06) Not Used", 0x44f4120, 0x44f4140, indexCPS2_Cammy, 5 },
    { L"(07) Not Used", 0x44f4140, 0x44f4160, indexCPS2_Cammy, 6 },
    { L"(08) Not Used", 0x44f4160, 0x44f4180, indexCPS2_Cammy, 7 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x44f4180, 0x44f41a0, indexCPS2_Cammy, 0 },
    { L"Burning Light", 0x44f41a0, 0x44f41c0, indexCPS2_Cammy, 0 },
    { L"Shocked Dark", 0x44f41c0, 0x44f41e0, indexCPS2_Cammy, 0 },
    { L"Shocked Light", 0x44f41e0, 0x44f4200, indexCPS2_Cammy, 0 },
    { L"Dark Burning Dark", 0x44f4200, 0x44f4220, indexCPS2_Cammy, 0 },
    { L"Dark Burning Light", 0x44f4220, 0x44f4240, indexCPS2_Cammy, 0 },
    { L"Kinetic Charge Dark", 0x44f4240, 0x44f4260, indexCPS2_Cammy, 0 },
    { L"Kinetic Charge Light", 0x44f4260, 0x44f4280, indexCPS2_Cammy, 0 },
};

const sGame_PaletteDataset MVC2_A_CAMMY_PALETTES_EXTRAS[] =
{
    { L"09: LP - Counterflash Frame 1", 0x44f4280, 0x44f42a0, indexCPS2_Cammy, 11 },
    { L"0a: LP - Counterflash Frame 2 ( LP color + brightbluetone+14)", 0x44f42a0, 0x44f42c0, indexCPS2_Cammy, 11 },
    { L"0b: LP - Counterflash Frame 3 ( LP color + brightbluetone+10)", 0x44f42c0, 0x44f42e0, indexCPS2_Cammy, 11 },
    { L"0c: LP - Counterflash Frame 4 ( LP color + brightbluetone+7)", 0x44f42e0, 0x44f4300, indexCPS2_Cammy, 11 },
    { L"0d: LP - Counterflash Frame 5 ( LP color + brightbluetone+3)", 0x44f4300, 0x44f4320, indexCPS2_Cammy, 11 },
    { L"0e: LP - Counterflash Frame 6 LP Color", 0x44f4320, 0x44f4340, indexCPS2_Cammy, 11 },
    { L"0f: LP - Counterflash Frame 7 ( LP color + darkbluetone+3)", 0x44f4340, 0x44f4360, indexCPS2_Cammy, 11 },
    { L"10: LP - Counterflash Frame 8 ( LP color + darkbluetone+5)", 0x44f4360, 0x44f4380, indexCPS2_Cammy, 11 },
    { L"11: LP - Counterflash Frame 9", 0x44f4380, 0x44f43a0, indexCPS2_Cammy, 11 },
    { L"12: LK - Counterflash Frame 1", 0x44f43a0, 0x44f43c0, indexCPS2_Cammy, 11 },
    { L"13: LK - Counterflash Frame 2 ( LK color + brightbluetone+14)", 0x44f43c0, 0x44f43e0, indexCPS2_Cammy, 11 },
    { L"14: LK - Counterflash Frame 3 ( LK color + brightbluetone+10)", 0x44f43e0, 0x44f4400, indexCPS2_Cammy, 11 },
    { L"15: LK - Counterflash Frame 4 ( LK color + brightbluetone+7)", 0x44f4400, 0x44f4420, indexCPS2_Cammy, 11 },
    { L"16: LK - Counterflash Frame 5 ( LK color + brightbluetone+3)", 0x44f4420, 0x44f4440, indexCPS2_Cammy, 11 },
    { L"17: LK - Counterflash Frame 6 LK Color", 0x44f4440, 0x44f4460, indexCPS2_Cammy, 11 },
    { L"18: LK - Counterflash Frame 7 ( LK color + darkbluetone+3)", 0x44f4460, 0x44f4480, indexCPS2_Cammy, 11 },
    { L"19: LK - Counterflash Frame 8 ( LK color + darkbluetone+5)", 0x44f4480, 0x44f44a0, indexCPS2_Cammy, 11 },
    { L"1a: LK - Counterflash Frame 9", 0x44f44a0, 0x44f44c0, indexCPS2_Cammy, 11 },
    { L"1b: HP - Counterflash Frame 1", 0x44f44c0, 0x44f44e0, indexCPS2_Cammy, 11 },
    { L"1c: HP - Counterflash Frame 2 ( HP color + brightbluetone+14)", 0x44f44e0, 0x44f4500, indexCPS2_Cammy, 11 },
    { L"1d: HP - Counterflash Frame 3 ( HP color + brightbluetone+10)", 0x44f4500, 0x44f4520, indexCPS2_Cammy, 11 },
    { L"1e: HP - Counterflash Frame 4 ( HP color + brightbluetone+7)", 0x44f4520, 0x44f4540, indexCPS2_Cammy, 11 },
    { L"1f: HP - Counterflash Frame 5 ( HP color + brightbluetone+3)", 0x44f4540, 0x44f4560, indexCPS2_Cammy, 11 },
    { L"20: HP - Counterflash Frame 6 HP Color", 0x44f4560, 0x44f4580, indexCPS2_Cammy, 11 },
    { L"21: HP - Counterflash Frame 7 ( HP color + darkbluetone+3)", 0x44f4580, 0x44f45a0, indexCPS2_Cammy, 11 },
    { L"22: HP - Counterflash Frame 8 ( HP color + darkbluetone+5)", 0x44f45a0, 0x44f45c0, indexCPS2_Cammy, 11 },
    { L"23: HP - Counterflash Frame 9", 0x44f45c0, 0x44f45e0, indexCPS2_Cammy, 11 },
    { L"24: HK - Counterflash Frame 1", 0x44f45e0, 0x44f4600, indexCPS2_Cammy, 11 },
    { L"25: HK - Counterflash Frame 2 ( HK color + brightbluetone+14)", 0x44f4600, 0x44f4620, indexCPS2_Cammy, 11 },
    { L"26: HK - Counterflash Frame 3 ( HK color + brightbluetone+10)", 0x44f4620, 0x44f4640, indexCPS2_Cammy, 11 },
    { L"27: HK - Counterflash Frame 4 ( HK color + brightbluetone+7)", 0x44f4640, 0x44f4660, indexCPS2_Cammy, 11 },
    { L"28: HK - Counterflash Frame 5 ( HK color + brightbluetone+3)", 0x44f4660, 0x44f4680, indexCPS2_Cammy, 11 },
    { L"29: HK - Counterflash Frame 6 HK Color", 0x44f4680, 0x44f46a0, indexCPS2_Cammy, 11 },
    { L"2a: HK - Counterflash Frame 7 ( HK color + darkbluetone+3)", 0x44f46a0, 0x44f46c0, indexCPS2_Cammy, 11 },
    { L"2b: HK - Counterflash Frame 8 ( HK color + darkbluetone+5)", 0x44f46c0, 0x44f46e0, indexCPS2_Cammy, 11 },
    { L"2c: HK - Counterflash Frame 9", 0x44f46e0, 0x44f4700, indexCPS2_Cammy, 11 },
    { L"2d: A1 - Counterflash Frame 1", 0x44f4700, 0x44f4720, indexCPS2_Cammy, 11 },
    { L"2e: A1 - Counterflash Frame 2 ( A1 color + brightbluetone+14)", 0x44f4720, 0x44f4740, indexCPS2_Cammy, 11 },
    { L"2f: A1 - Counterflash Frame 3 ( A1 color + brightbluetone+10)", 0x44f4740, 0x44f4760, indexCPS2_Cammy, 11 },
    { L"30: A1 - Counterflash Frame 4 ( A1 color + brightbluetone+7)", 0x44f4760, 0x44f4780, indexCPS2_Cammy, 11 },
    { L"31: A1 - Counterflash Frame 5 ( A1 color + brightbluetone+3)", 0x44f4780, 0x44f47a0, indexCPS2_Cammy, 11 },
    { L"32: A1 - Counterflash Frame 6 A1 Color", 0x44f47a0, 0x44f47c0, indexCPS2_Cammy, 11 },
    { L"33: A1 - Counterflash Frame 7 ( A1 color + darkbluetone+3)", 0x44f47c0, 0x44f47e0, indexCPS2_Cammy, 11 },
    { L"34: A1 - Counterflash Frame 8 ( A1 color + darkbluetone+5)", 0x44f47e0, 0x44f4800, indexCPS2_Cammy, 11 },
    { L"35: A1 - Counterflash Frame 9", 0x44f4800, 0x44f4820, indexCPS2_Cammy, 11 },
    { L"36: A2 - Counterflash Frame 1", 0x44f4820, 0x44f4840, indexCPS2_Cammy, 11 },
    { L"37: A2 - Counterflash Frame 2 ( A2 color + brightbluetone+14)", 0x44f4840, 0x44f4860, indexCPS2_Cammy, 11 },
    { L"38: A2 - Counterflash Frame 3 ( A2 color + brightbluetone+10)", 0x44f4860, 0x44f4880, indexCPS2_Cammy, 11 },
    { L"39: A2 - Counterflash Frame 4 ( A2 color + brightbluetone+7)", 0x44f4880, 0x44f48a0, indexCPS2_Cammy, 11 },
    { L"3a: A2 - Counterflash Frame 5 ( A2 color + brightbluetone+3)", 0x44f48a0, 0x44f48c0, indexCPS2_Cammy, 11 },
    { L"3b: A2 - Counterflash Frame 6 A2 Color", 0x44f48c0, 0x44f48e0, indexCPS2_Cammy, 11 },
    { L"3c: A2 - Counterflash Frame 7 ( A2 color + darkbluetone+3)", 0x44f48e0, 0x44f4900, indexCPS2_Cammy, 11 },
    { L"3d: A2 - Counterflash Frame 8 ( A2 color + darkbluetone+5)", 0x44f4900, 0x44f4920, indexCPS2_Cammy, 11 },
    { L"3e: A2 - Counterflash Frame 9", 0x44f4920, 0x44f4940, indexCPS2_Cammy, 11 },
};

const sDescTreeNode MVC2_A_CAMMY_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_LP, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_LK, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_HP, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_HK, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_A1, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_A2, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_CAMMY_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_LP[] =
{
    { L"Main Color LP", 0x45aa820, 0x45aa840, indexCPS2_Dhalsim, 0 },
    { L"(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aa840, 0x45aa860, indexCPS2_Dhalsim, 1 },
    { L"(03) Sally", 0x45aa860, 0x45aa880, indexCPS2_Dhalsim, 2 },
    { L"(04) Not Used", 0x45aa880, 0x45aa8a0, indexCPS2_Dhalsim, 3 },
    { L"(05) Not Used", 0x45aa8a0, 0x45aa8c0, indexCPS2_Dhalsim, 4 },
    { L"(06) Not Used", 0x45aa8c0, 0x45aa8e0, indexCPS2_Dhalsim, 5 },
    { L"(07) Not Used", 0x45aa8e0, 0x45aa900, indexCPS2_Dhalsim, 6 },
    { L"(08) Not Used", 0x45aa900, 0x45aa920, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_LK[] =
{
    { L"Main Color LK", 0x45aa920, 0x45aa940, indexCPS2_Dhalsim, 0 },
    { L"(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aa940, 0x45aa960, indexCPS2_Dhalsim, 1 },
    { L"(03) Sally", 0x45aa960, 0x45aa980, indexCPS2_Dhalsim, 2 },
    { L"(04) Not Used", 0x45aa980, 0x45aa9a0, indexCPS2_Dhalsim, 3 },
    { L"(05) Not Used", 0x45aa9a0, 0x45aa9c0, indexCPS2_Dhalsim, 4 },
    { L"(06) Not Used", 0x45aa9c0, 0x45aa9e0, indexCPS2_Dhalsim, 5 },
    { L"(07) Not Used", 0x45aa9e0, 0x45aaa00, indexCPS2_Dhalsim, 6 },
    { L"(08) Not Used", 0x45aaa00, 0x45aaa20, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_HP[] =
{
    { L"Main Color HP", 0x45aaa20, 0x45aaa40, indexCPS2_Dhalsim, 0 },
    { L"(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aaa40, 0x45aaa60, indexCPS2_Dhalsim, 1 },
    { L"(03) Sally", 0x45aaa60, 0x45aaa80, indexCPS2_Dhalsim, 2 },
    { L"(04) Not Used", 0x45aaa80, 0x45aaaa0, indexCPS2_Dhalsim, 3 },
    { L"(05) Not Used", 0x45aaaa0, 0x45aaac0, indexCPS2_Dhalsim, 4 },
    { L"(06) Not Used", 0x45aaac0, 0x45aaae0, indexCPS2_Dhalsim, 5 },
    { L"(07) Not Used", 0x45aaae0, 0x45aab00, indexCPS2_Dhalsim, 6 },
    { L"(08) Not Used", 0x45aab00, 0x45aab20, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_HK[] =
{
    { L"Main Color HK", 0x45aab20, 0x45aab40, indexCPS2_Dhalsim, 0 },
    { L"(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aab40, 0x45aab60, indexCPS2_Dhalsim, 1 },
    { L"(03) Sally", 0x45aab60, 0x45aab80, indexCPS2_Dhalsim, 2 },
    { L"(04) Not Used", 0x45aab80, 0x45aaba0, indexCPS2_Dhalsim, 3 },
    { L"(05) Not Used", 0x45aaba0, 0x45aabc0, indexCPS2_Dhalsim, 4 },
    { L"(06) Not Used", 0x45aabc0, 0x45aabe0, indexCPS2_Dhalsim, 5 },
    { L"(07) Not Used", 0x45aabe0, 0x45aac00, indexCPS2_Dhalsim, 6 },
    { L"(08) Not Used", 0x45aac00, 0x45aac20, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_A1[] =
{
    { L"Main Color A1", 0x45aac20, 0x45aac40, indexCPS2_Dhalsim, 0 },
    { L"(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aac40, 0x45aac60, indexCPS2_Dhalsim, 1 },
    { L"(03) Sally", 0x45aac60, 0x45aac80, indexCPS2_Dhalsim, 2 },
    { L"(04) Not Used", 0x45aac80, 0x45aaca0, indexCPS2_Dhalsim, 3 },
    { L"(05) Not Used", 0x45aaca0, 0x45aacc0, indexCPS2_Dhalsim, 4 },
    { L"(06) Not Used", 0x45aacc0, 0x45aace0, indexCPS2_Dhalsim, 5 },
    { L"(07) Not Used", 0x45aace0, 0x45aad00, indexCPS2_Dhalsim, 6 },
    { L"(08) Not Used", 0x45aad00, 0x45aad20, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_A2[] =
{
    { L"Main Color A2", 0x45aad20, 0x45aad40, indexCPS2_Dhalsim, 0 },
    { L"(02) ID:01-11Yoga Fire / Yoga Flame / Yoga Inferno", 0x45aad40, 0x45aad60, indexCPS2_Dhalsim, 1 },
    { L"(03) Sally", 0x45aad60, 0x45aad80, indexCPS2_Dhalsim, 2 },
    { L"(04) Not Used", 0x45aad80, 0x45aada0, indexCPS2_Dhalsim, 3 },
    { L"(05) Not Used", 0x45aada0, 0x45aadc0, indexCPS2_Dhalsim, 4 },
    { L"(06) Not Used", 0x45aadc0, 0x45aade0, indexCPS2_Dhalsim, 5 },
    { L"(07) Not Used", 0x45aade0, 0x45aae00, indexCPS2_Dhalsim, 6 },
    { L"(08) Not Used", 0x45aae00, 0x45aae20, indexCPS2_Dhalsim, 7 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x45aae20, 0x45aae40, indexCPS2_Dhalsim, 0 },
    { L"Burning Light", 0x45aae40, 0x45aae60, indexCPS2_Dhalsim, 0 },
    { L"Shocked Dark", 0x45aae60, 0x45aae80, indexCPS2_Dhalsim, 0 },
    { L"Shocked Light", 0x45aae80, 0x45aaea0, indexCPS2_Dhalsim, 0 },
    { L"Dark Burning Dark", 0x45aaea0, 0x45aaec0, indexCPS2_Dhalsim, 0 },
    { L"Dark Burning Light", 0x45aaec0, 0x45aaee0, indexCPS2_Dhalsim, 0 },
    { L"Kinetic Charge Dark", 0x45aaee0, 0x45aaf00, indexCPS2_Dhalsim, 0 },
    { L"Kinetic Charge Light", 0x45aaf00, 0x45aaf20, indexCPS2_Dhalsim, 0 },
};

const sGame_PaletteDataset MVC2_A_DHALSIM_PALETTES_EXTRAS[] =
{
    { L"09: LP - Teleport Frame 1 (LP color+ lumin+15)", 0x45aaf20, 0x45aaf40, indexCPS2_Dhalsim, 11 },
    { L"0a: LP - Teleport Frame 2 (LP color+ lumin+27)", 0x45aaf40, 0x45aaf60, indexCPS2_Dhalsim, 11 },
    { L"0b: LP - Teleport Frame 3 (LP color+ lumin+42)", 0x45aaf60, 0x45aaf80, indexCPS2_Dhalsim, 11 },
    { L"0c: LP - Teleport Frame 4 (LP color+ lumin+65)", 0x45aaf80, 0x45aafa0, indexCPS2_Dhalsim, 11 },
    { L"0d: LP - Teleport Frame 5 fullwhite", 0x45aafa0, 0x45aafc0, indexCPS2_Dhalsim, 11 },
    { L"0e: LK - Teleport Frame 1 (LK color+ lumin+15)", 0x45aafc0, 0x45aafe0, indexCPS2_Dhalsim, 11 },
    { L"0f: LK - Teleport Frame 2 (LK color+ lumin+27)", 0x45aafe0, 0x45ab000, indexCPS2_Dhalsim, 11 },
    { L"10: LK - Teleport Frame 3 (LK color+ lumin+42)", 0x45ab000, 0x45ab020, indexCPS2_Dhalsim, 11 },
    { L"11: LK - Teleport Frame 4 (LK color+ lumin+65)", 0x45ab020, 0x45ab040, indexCPS2_Dhalsim, 11 },
    { L"12: LK - Teleport Frame 5 fullwhite", 0x45ab040, 0x45ab060, indexCPS2_Dhalsim, 11 },
    { L"13: HP - Teleport Frame 1 (HP color+ lumin+15)", 0x45ab060, 0x45ab080, indexCPS2_Dhalsim, 11 },
    { L"14: HP - Teleport Frame 2 (HP color+ lumin+27)", 0x45ab080, 0x45ab0a0, indexCPS2_Dhalsim, 11 },
    { L"15: HP - Teleport Frame 3 (HP color+ lumin+42)", 0x45ab0a0, 0x45ab0c0, indexCPS2_Dhalsim, 11 },
    { L"16: HP - Teleport Frame 4 (HP color+ lumin+65)", 0x45ab0c0, 0x45ab0e0, indexCPS2_Dhalsim, 11 },
    { L"17: HP - Teleport Frame 5 fullwhite", 0x45ab0e0, 0x45ab100, indexCPS2_Dhalsim, 11 },
    { L"18: HK - Teleport Frame 1 (HK color+ lumin+15)", 0x45ab100, 0x45ab120, indexCPS2_Dhalsim, 11 },
    { L"19: HK - Teleport Frame 2 (HK color+ lumin+27)", 0x45ab120, 0x45ab140, indexCPS2_Dhalsim, 11 },
    { L"1a: HK - Teleport Frame 3 (HK color+ lumin+42)", 0x45ab140, 0x45ab160, indexCPS2_Dhalsim, 11 },
    { L"1b: HK - Teleport Frame 4 (HK color+ lumin+65)", 0x45ab160, 0x45ab180, indexCPS2_Dhalsim, 11 },
    { L"1c: HK - Teleport Frame 5 fullwhite", 0x45ab180, 0x45ab1a0, indexCPS2_Dhalsim, 11 },
    { L"1d: A1 - Teleport Frame 1 (A1 color+ lumin+15)", 0x45ab1a0, 0x45ab1c0, indexCPS2_Dhalsim, 11 },
    { L"1e: A1 - Teleport Frame 2 (A1 color+ lumin+27)", 0x45ab1c0, 0x45ab1e0, indexCPS2_Dhalsim, 11 },
    { L"1f: A1 - Teleport Frame 3 (A1 color+ lumin+42)", 0x45ab1e0, 0x45ab200, indexCPS2_Dhalsim, 11 },
    { L"20: A1 - Teleport Frame 4 (A1 color+ lumin+65)", 0x45ab200, 0x45ab220, indexCPS2_Dhalsim, 11 },
    { L"21: A1 - Teleport Frame 5 fullwhite", 0x45ab220, 0x45ab240, indexCPS2_Dhalsim, 11 },
    { L"22: A2 - Teleport Frame 1 (A2 color+ lumin+15)", 0x45ab240, 0x45ab260, indexCPS2_Dhalsim, 11 },
    { L"23: A2 - Teleport Frame 2 (A2 color+ lumin+27)", 0x45ab260, 0x45ab280, indexCPS2_Dhalsim, 11 },
    { L"24: A2 - Teleport Frame 3 (A2 color+ lumin+42)", 0x45ab280, 0x45ab2a0, indexCPS2_Dhalsim, 11 },
    { L"25: A2 - Teleport Frame 4 (A2 color+ lumin+65)", 0x45ab2a0, 0x45ab2c0, indexCPS2_Dhalsim, 11 },
    { L"26: A2 - Teleport Frame 5 fullwhite", 0x45ab2c0, 0x45ab2e0, indexCPS2_Dhalsim, 11 },
};

const sDescTreeNode MVC2_A_DHALSIM_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_LP, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_LK, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_HP, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_HK, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_A1, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_A2, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_DHALSIM_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_LP[] =
{
    { L"Main Color LP", 0x462f340, 0x462f360, indexCPS2_Bison, 0 },
    { L"(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f360, 0x462f380, indexCPS2_Bison, 1 },
    { L"(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f380, 0x462f3a0, indexCPS2_Bison, 2 },
    { L"(04) Not Used", 0x462f3a0, 0x462f3c0, indexCPS2_Bison, 3 },
    { L"(05) Not Used", 0x462f3c0, 0x462f3e0, indexCPS2_Bison, 4 },
    { L"(06) Not Used", 0x462f3e0, 0x462f400, indexCPS2_Bison, 5 },
    { L"(07) Not Used", 0x462f400, 0x462f420, indexCPS2_Bison, 6 },
    { L"(08) Not Used", 0x462f420, 0x462f440, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_LK[] =
{
    { L"Main Color LK", 0x462f440, 0x462f460, indexCPS2_Bison, 0 },
    { L"(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f460, 0x462f480, indexCPS2_Bison, 1 },
    { L"(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f480, 0x462f4a0, indexCPS2_Bison, 2 },
    { L"(04) Not Used", 0x462f4a0, 0x462f4c0, indexCPS2_Bison, 3 },
    { L"(05) Not Used", 0x462f4c0, 0x462f4e0, indexCPS2_Bison, 4 },
    { L"(06) Not Used", 0x462f4e0, 0x462f500, indexCPS2_Bison, 5 },
    { L"(07) Not Used", 0x462f500, 0x462f520, indexCPS2_Bison, 6 },
    { L"(08) Not Used", 0x462f520, 0x462f540, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_HP[] =
{
    { L"Main Color HP", 0x462f540, 0x462f560, indexCPS2_Bison, 0 },
    { L"(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f560, 0x462f580, indexCPS2_Bison, 1 },
    { L"(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f580, 0x462f5a0, indexCPS2_Bison, 2 },
    { L"(04) Not Used", 0x462f5a0, 0x462f5c0, indexCPS2_Bison, 3 },
    { L"(05) Not Used", 0x462f5c0, 0x462f5e0, indexCPS2_Bison, 4 },
    { L"(06) Not Used", 0x462f5e0, 0x462f600, indexCPS2_Bison, 5 },
    { L"(07) Not Used", 0x462f600, 0x462f620, indexCPS2_Bison, 6 },
    { L"(08) Not Used", 0x462f620, 0x462f640, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_HK[] =
{
    { L"Main Color HK", 0x462f640, 0x462f660, indexCPS2_Bison, 0 },
    { L"(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f660, 0x462f680, indexCPS2_Bison, 1 },
    { L"(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f680, 0x462f6a0, indexCPS2_Bison, 2 },
    { L"(04) Not Used", 0x462f6a0, 0x462f6c0, indexCPS2_Bison, 3 },
    { L"(05) Not Used", 0x462f6c0, 0x462f6e0, indexCPS2_Bison, 4 },
    { L"(06) Not Used", 0x462f6e0, 0x462f700, indexCPS2_Bison, 5 },
    { L"(07) Not Used", 0x462f700, 0x462f720, indexCPS2_Bison, 6 },
    { L"(08) Not Used", 0x462f720, 0x462f740, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_A1[] =
{
    { L"Main Color A1", 0x462f740, 0x462f760, indexCPS2_Bison, 0 },
    { L"(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f760, 0x462f780, indexCPS2_Bison, 1 },
    { L"(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f780, 0x462f7a0, indexCPS2_Bison, 2 },
    { L"(04) Not Used", 0x462f7a0, 0x462f7c0, indexCPS2_Bison, 3 },
    { L"(05) Not Used", 0x462f7c0, 0x462f7e0, indexCPS2_Bison, 4 },
    { L"(06) Not Used", 0x462f7e0, 0x462f800, indexCPS2_Bison, 5 },
    { L"(07) Not Used", 0x462f800, 0x462f820, indexCPS2_Bison, 6 },
    { L"(08) Not Used", 0x462f820, 0x462f840, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_A2[] =
{
    { L"Main Color A2", 0x462f840, 0x462f860, indexCPS2_Bison, 0 },
    { L"(02) ID:02-08 Intro (dust) / Teleport / Super Spark ID:09-15 Teleport / Super Spark", 0x462f860, 0x462f880, indexCPS2_Bison, 1 },
    { L"(03) ID:02-08 Spark ID:09-15 Not Used", 0x462f880, 0x462f8a0, indexCPS2_Bison, 2 },
    { L"(04) Not Used", 0x462f8a0, 0x462f8c0, indexCPS2_Bison, 3 },
    { L"(05) Not Used", 0x462f8c0, 0x462f8e0, indexCPS2_Bison, 4 },
    { L"(06) Not Used", 0x462f8e0, 0x462f900, indexCPS2_Bison, 5 },
    { L"(07) Not Used", 0x462f900, 0x462f920, indexCPS2_Bison, 6 },
    { L"(08) Not Used", 0x462f920, 0x462f940, indexCPS2_Bison, 7 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x462f940, 0x462f960, indexCPS2_Bison, 0 },
    { L"Burning Light", 0x462f960, 0x462f980, indexCPS2_Bison, 0 },
    { L"Shocked Dark", 0x462f980, 0x462f9a0, indexCPS2_Bison, 0 },
    { L"Shocked Light", 0x462f9a0, 0x462f9c0, indexCPS2_Bison, 0 },
    { L"Dark Burning Dark", 0x462f9c0, 0x462f9e0, indexCPS2_Bison, 0 },
    { L"Dark Burning Light", 0x462f9e0, 0x462fa00, indexCPS2_Bison, 0 },
    { L"Kinetic Charge Dark", 0x462fa00, 0x462fa20, indexCPS2_Bison, 0 },
    { L"Kinetic Charge Light", 0x462fa20, 0x462fa40, indexCPS2_Bison, 0 },
};

const sGame_PaletteDataset MVC2_A_MBISON_PALETTES_EXTRAS[] =
{
    { L"09: c.FP / Psycho Crusher (Glow Frame 1) LP color", 0x462fa40, 0x462fa60, indexCPS2_Bison, 0x08 },
    { L"0a: Psycho Crusher (Glow Frame 2) LP color", 0x462fa60, 0x462fa80, indexCPS2_Bison, 0x09 },
    { L"0b: c.FP / Psycho Crusher (Glow Frame 1) LK color", 0x462fa80, 0x462faa0, indexCPS2_Bison, 0x08 },
    { L"0c: Psycho Crusher (Glow Frame 2) LK color", 0x462faa0, 0x462fac0, indexCPS2_Bison, 0x09 },
    { L"0d: c.FP / Psycho Crusher (Glow Frame 1) HP color", 0x462fac0, 0x462fae0, indexCPS2_Bison, 0x08 },
    { L"0e: Psycho Crusher (Glow Frame 2) HP color", 0x462fae0, 0x462fb00, indexCPS2_Bison, 0x09 },
    { L"0f: c.FP / Psycho Crusher (Glow Frame 1) HK color", 0x462fb00, 0x462fb20, indexCPS2_Bison, 0x08 },
    { L"10: Psycho Crusher (Glow Frame 2) HK color", 0x462fb20, 0x462fb40, indexCPS2_Bison, 0x09 },
    { L"11: c.FP / Psycho Crusher (Glow Frame 1) A1 color", 0x462fb40, 0x462fb60, indexCPS2_Bison, 0x08 },
    { L"12: Psycho Crusher (Glow Frame 2) A1 color", 0x462fb60, 0x462fb80, indexCPS2_Bison, 0x09 },
    { L"13: c.FP / Psycho Crusher (Glow Frame 1) A2 color", 0x462fb80, 0x462fba0, indexCPS2_Bison, 0x08 },
    { L"14: Psycho Crusher (Glow Frame 2) A2 color", 0x462fba0, 0x462fbc0, indexCPS2_Bison, 0x09 },
};

const sDescTreeNode MVC2_A_MBISON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_LP, ARRAYSIZE(MVC2_A_MBISON_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_LK, ARRAYSIZE(MVC2_A_MBISON_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_HP, ARRAYSIZE(MVC2_A_MBISON_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_HK, ARRAYSIZE(MVC2_A_MBISON_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_A1, ARRAYSIZE(MVC2_A_MBISON_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_A2, ARRAYSIZE(MVC2_A_MBISON_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MBISON_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MBISON_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x46b5660, 0x46b5680, indexCPS2_Ken, 0 },
    { L"(02) ID:02-09 Hadouken", 0x46b5680, 0x46b56a0, indexCPS2_Ken, 1 },
    { L"(03) ID:02-09 Shoryuken (Flame)", 0x46b56a0, 0x46b56c0, indexCPS2_Ken, 2 },
    { L"(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b56c0, 0x46b56e0, indexCPS2_Ken, 3 },
    { L"(05) Not Used", 0x46b56e0, 0x46b5700, indexCPS2_Ken, 4 },
    { L"(06) Not Used", 0x46b5700, 0x46b5720, indexCPS2_Ken, 5 },
    { L"(07) Not Used", 0x46b5720, 0x46b5740, indexCPS2_Ken, 0 },
    { L"(08) Not Used", 0x46b5740, 0x46b5760, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x46b5760, 0x46b5780, indexCPS2_Ken, 0 },
    { L"(02) ID:02-09 Hadouken", 0x46b5780, 0x46b57a0, indexCPS2_Ken, 1 },
    { L"(03) ID:02-09 Shoryuken (Flame)", 0x46b57a0, 0x46b57c0, indexCPS2_Ken, 2 },
    { L"(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b57c0, 0x46b57e0, indexCPS2_Ken, 3 },
    { L"(05) Not Used", 0x46b57e0, 0x46b5800, indexCPS2_Ken, 4 },
    { L"(06) Not Used", 0x46b5800, 0x46b5820, indexCPS2_Ken, 5 },
    { L"(07) Not Used", 0x46b5820, 0x46b5840, indexCPS2_Ken, 0 },
    { L"(08) Not Used", 0x46b5840, 0x46b5860, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x46b5860, 0x46b5880, indexCPS2_Ken, 0 },
    { L"(02) ID:02-09 Hadouken", 0x46b5880, 0x46b58a0, indexCPS2_Ken, 1 },
    { L"(03) ID:02-09 Shoryuken (Flame)", 0x46b58a0, 0x46b58c0, indexCPS2_Ken, 2 },
    { L"(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b58c0, 0x46b58e0, indexCPS2_Ken, 3 },
    { L"(05) Not Used", 0x46b58e0, 0x46b5900, indexCPS2_Ken, 4 },
    { L"(06) Not Used", 0x46b5900, 0x46b5920, indexCPS2_Ken, 5 },
    { L"(07) Not Used", 0x46b5920, 0x46b5940, indexCPS2_Ken, 0 },
    { L"(08) Not Used", 0x46b5940, 0x46b5960, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x46b5960, 0x46b5980, indexCPS2_Ken, 0 },
    { L"(02) ID:02-09 Hadouken", 0x46b5980, 0x46b59a0, indexCPS2_Ken, 1 },
    { L"(03) ID:02-09 Shoryuken (Flame)", 0x46b59a0, 0x46b59c0, indexCPS2_Ken, 2 },
    { L"(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b59c0, 0x46b59e0, indexCPS2_Ken, 3 },
    { L"(05) Not Used", 0x46b59e0, 0x46b5a00, indexCPS2_Ken, 4 },
    { L"(06) Not Used", 0x46b5a00, 0x46b5a20, indexCPS2_Ken, 5 },
    { L"(07) Not Used", 0x46b5a20, 0x46b5a40, indexCPS2_Ken, 0 },
    { L"(08) Not Used", 0x46b5a40, 0x46b5a60, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x46b5a60, 0x46b5a80, indexCPS2_Ken, 0 },
    { L"(02) ID:02-09 Hadouken", 0x46b5a80, 0x46b5aa0, indexCPS2_Ken, 1 },
    { L"(03) ID:02-09 Shoryuken (Flame)", 0x46b5aa0, 0x46b5ac0, indexCPS2_Ken, 2 },
    { L"(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b5ac0, 0x46b5ae0, indexCPS2_Ken, 3 },
    { L"(05) Not Used", 0x46b5ae0, 0x46b5b00, indexCPS2_Ken, 4 },
    { L"(06) Not Used", 0x46b5b00, 0x46b5b20, indexCPS2_Ken, 5 },
    { L"(07) Not Used", 0x46b5b20, 0x46b5b40, indexCPS2_Ken, 0 },
    { L"(08) Not Used", 0x46b5b40, 0x46b5b60, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x46b5b60, 0x46b5b80, indexCPS2_Ken, 0 },
    { L"(02) ID:02-09 Hadouken", 0x46b5b80, 0x46b5ba0, indexCPS2_Ken, 1 },
    { L"(03) ID:02-09 Shoryuken (Flame)", 0x46b5ba0, 0x46b5bc0, indexCPS2_Ken, 2 },
    { L"(04) ID:01-08 Shippu JinraiKyaku (fire)", 0x46b5bc0, 0x46b5be0, indexCPS2_Ken, 3 },
    { L"(05) Not Used", 0x46b5be0, 0x46b5c00, indexCPS2_Ken, 4 },
    { L"(06) Not Used", 0x46b5c00, 0x46b5c20, indexCPS2_Ken, 5 },
    { L"(07) Not Used", 0x46b5c20, 0x46b5c40, indexCPS2_Ken, 0 },
    { L"(08) Not Used", 0x46b5c40, 0x46b5c60, indexCPS2_Ken, 7 },
};

const sGame_PaletteDataset MVC2_A_KEN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x46b5c60, 0x46b5c80, indexCPS2_Ken, 0 },
    { L"Burning Light", 0x46b5c80, 0x46b5ca0, indexCPS2_Ken, 0 },
    { L"Shocked Dark", 0x46b5ca0, 0x46b5cc0, indexCPS2_Ken, 0 },
    { L"Shocked Light", 0x46b5cc0, 0x46b5ce0, indexCPS2_Ken, 0 },
    { L"Dark Burning Dark", 0x46b5ce0, 0x46b5d00, indexCPS2_Ken, 0 },
    { L"Dark Burning Light", 0x46b5d00, 0x46b5d20, indexCPS2_Ken, 0 },
    { L"Kinetic Charge Dark", 0x46b5d20, 0x46b5d40, indexCPS2_Ken, 0 },
    { L"Kinetic Charge Light", 0x46b5d40, 0x46b5d60, indexCPS2_Ken, 0 },
};

const sDescTreeNode MVC2_A_KEN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_LP, ARRAYSIZE(MVC2_A_KEN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_LK, ARRAYSIZE(MVC2_A_KEN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_HP, ARRAYSIZE(MVC2_A_KEN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_HK, ARRAYSIZE(MVC2_A_KEN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_A1, ARRAYSIZE(MVC2_A_KEN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_A2, ARRAYSIZE(MVC2_A_KEN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_KEN_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_LP[] =
{
    { L"Main Color LP", 0x479ec80, 0x479eca0, indexCPS2_Gambit, 0 },
    { L"(02) ID:01-08 Kinetic Card // Trick Card", 0x479eca0, 0x479ecc0, indexCPS2_Gambit, 1 },
    { L"(03) ID:01-09 Cajun Strike (stick effect)", 0x479ecc0, 0x479ece0, indexCPS2_Gambit, 2 },
    { L"(04) Not Used", 0x479ece0, 0x479ed00, indexCPS2_Gambit, 3 },
    { L"(05) Not Used", 0x479ed00, 0x479ed20, indexCPS2_Gambit, 4 },
    { L"(06) Not Used", 0x479ed20, 0x479ed40, indexCPS2_Gambit, 5 },
    { L"(07) Not Used", 0x479ed40, 0x479ed60, indexCPS2_Gambit, 0 },
    { L"(08) Not Used", 0x479ed60, 0x479ed80, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_LK[] =
{
    { L"Main Color LK", 0x479ed80, 0x479eda0, indexCPS2_Gambit, 0 },
    { L"(02) ID:01-08 Kinetic Card // Trick Card", 0x479eda0, 0x479edc0, indexCPS2_Gambit, 1 },
    { L"(03) ID:01-09 Cajun Strike (stick effect)", 0x479edc0, 0x479ede0, indexCPS2_Gambit, 2 },
    { L"(04) Not Used", 0x479ede0, 0x479ee00, indexCPS2_Gambit, 3 },
    { L"(05) Not Used", 0x479ee00, 0x479ee20, indexCPS2_Gambit, 4 },
    { L"(06) Not Used", 0x479ee20, 0x479ee40, indexCPS2_Gambit, 5 },
    { L"(07) Not Used", 0x479ee40, 0x479ee60, indexCPS2_Gambit, 0 },
    { L"(08) Not Used", 0x479ee60, 0x479ee80, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_HP[] =
{
    { L"Main Color HP", 0x479ee80, 0x479eea0, indexCPS2_Gambit, 0 },
    { L"(02) ID:01-08 Kinetic Card // Trick Card", 0x479eea0, 0x479eec0, indexCPS2_Gambit, 1 },
    { L"(03) ID:01-09 Cajun Strike (stick effect)", 0x479eec0, 0x479eee0, indexCPS2_Gambit, 2 },
    { L"(04) Not Used", 0x479eee0, 0x479ef00, indexCPS2_Gambit, 3 },
    { L"(05) Not Used", 0x479ef00, 0x479ef20, indexCPS2_Gambit, 4 },
    { L"(06) Not Used", 0x479ef20, 0x479ef40, indexCPS2_Gambit, 5 },
    { L"(07) Not Used", 0x479ef40, 0x479ef60, indexCPS2_Gambit, 0 },
    { L"(08) Not Used", 0x479ef60, 0x479ef80, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_HK[] =
{
    { L"Main Color HK", 0x479ef80, 0x479efa0, indexCPS2_Gambit, 0 },
    { L"(02) ID:01-08 Kinetic Card // Trick Card", 0x479efa0, 0x479efc0, indexCPS2_Gambit, 1 },
    { L"(03) ID:01-09 Cajun Strike (stick effect)", 0x479efc0, 0x479efe0, indexCPS2_Gambit, 2 },
    { L"(04) Not Used", 0x479efe0, 0x479f000, indexCPS2_Gambit, 3 },
    { L"(05) Not Used", 0x479f000, 0x479f020, indexCPS2_Gambit, 4 },
    { L"(06) Not Used", 0x479f020, 0x479f040, indexCPS2_Gambit, 5 },
    { L"(07) Not Used", 0x479f040, 0x479f060, indexCPS2_Gambit, 0 },
    { L"(08) Not Used", 0x479f060, 0x479f080, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_A1[] =
{
    { L"Main Color A1", 0x479f080, 0x479f0a0, indexCPS2_Gambit, 0 },
    { L"(02) ID:01-08 Kinetic Card // Trick Card", 0x479f0a0, 0x479f0c0, indexCPS2_Gambit, 1 },
    { L"(03) ID:01-09 Cajun Strike (stick effect)", 0x479f0c0, 0x479f0e0, indexCPS2_Gambit, 2 },
    { L"(04) Not Used", 0x479f0e0, 0x479f100, indexCPS2_Gambit, 3 },
    { L"(05) Not Used", 0x479f100, 0x479f120, indexCPS2_Gambit, 4 },
    { L"(06) Not Used", 0x479f120, 0x479f140, indexCPS2_Gambit, 5 },
    { L"(07) Not Used", 0x479f140, 0x479f160, indexCPS2_Gambit, 0 },
    { L"(08) Not Used", 0x479f160, 0x479f180, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_A2[] =
{
    { L"Main Color A2", 0x479f180, 0x479f1a0, indexCPS2_Gambit, 0 },
    { L"(02) ID:01-08 Kinetic Card // Trick Card", 0x479f1a0, 0x479f1c0, indexCPS2_Gambit, 1 },
    { L"(03) ID:01-09 Cajun Strike (stick effect)", 0x479f1c0, 0x479f1e0, indexCPS2_Gambit, 2 },
    { L"(04) Not Used", 0x479f1e0, 0x479f200, indexCPS2_Gambit, 3 },
    { L"(05) Not Used", 0x479f200, 0x479f220, indexCPS2_Gambit, 4 },
    { L"(06) Not Used", 0x479f220, 0x479f240, indexCPS2_Gambit, 5 },
    { L"(07) Not Used", 0x479f240, 0x479f260, indexCPS2_Gambit, 0 },
    { L"(08) Not Used", 0x479f260, 0x479f280, indexCPS2_Gambit, 7 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x479f280, 0x479f2a0, indexCPS2_Gambit, 0 },
    { L"Burning Light", 0x479f2a0, 0x479f2c0, indexCPS2_Gambit, 0 },
    { L"Shocked Dark", 0x479f2c0, 0x479f2e0, indexCPS2_Gambit, 0 },
    { L"Shocked Light", 0x479f2e0, 0x479f300, indexCPS2_Gambit, 0 },
    { L"Dark Burning Dark", 0x479f300, 0x479f320, indexCPS2_Gambit, 0 },
    { L"Dark Burning Light", 0x479f320, 0x479f340, indexCPS2_Gambit, 0 },
    { L"Kinetic Charge Dark", 0x479f340, 0x479f360, indexCPS2_Gambit, 0 },
    { L"Kinetic Charge Light", 0x479f360, 0x479f380, indexCPS2_Gambit, 0 },
};

const sGame_PaletteDataset MVC2_A_GAMBIT_PALETTES_EXTRAS[] =
{
    { L"09: LP - Winpose Frame 1 lp color + (lumin+10)", 0x479f380, 0x479f3a0, indexCPS2_Gambit, 0 },
    { L"0a: LP - Winpose Frame 2 lp color + (lumin+5)", 0x479f3a0, 0x479f3c0, indexCPS2_Gambit, 0 },
    { L"0b: LP - Winpose Frame 3 lp Main Color", 0x479f3c0, 0x479f3e0, indexCPS2_Gambit, 0 },
    { L"0c: LP - Winpose Frame 4 lp color + (lumin-5)", 0x479f3e0, 0x479f400, indexCPS2_Gambit, 0 },
    { L"0d: LP - Winpose Frame 5 lp color + (lumin-10)", 0x479f400, 0x479f420, indexCPS2_Gambit, 0 },
    { L"0e: LK - Winpose Frame 1 lk color + (lumin+10)", 0x479f420, 0x479f440, indexCPS2_Gambit, 0 },
    { L"0f: LK - Winpose Frame 2 lk color + (lumin+5)", 0x479f440, 0x479f460, indexCPS2_Gambit, 0 },
    { L"10: LK - Winpose Frame 3 lk Main Color", 0x479f460, 0x479f480, indexCPS2_Gambit, 0 },
    { L"11: LK - Winpose Frame 4 lk color + (lumin-5)", 0x479f480, 0x479f4a0, indexCPS2_Gambit, 0 },
    { L"12: LK - Winpose Frame 5 lk color + (lumin-10)", 0x479f4a0, 0x479f4c0, indexCPS2_Gambit, 0 },
    { L"13: HP - Winpose Frame 1 hp color + (lumin+10)", 0x479f4c0, 0x479f4e0, indexCPS2_Gambit, 0 },
    { L"14: HP - Winpose Frame 2 hp color + (lumin+5)", 0x479f4e0, 0x479f500, indexCPS2_Gambit, 0 },
    { L"15: HP - Winpose Frame 3 hp Main Color", 0x479f500, 0x479f520, indexCPS2_Gambit, 0 },
    { L"16: HP - Winpose Frame 4 hp color + (lumin-5)", 0x479f520, 0x479f540, indexCPS2_Gambit, 0 },
    { L"17: HP - Winpose Frame 5 hp color + (lumin-10)", 0x479f540, 0x479f560, indexCPS2_Gambit, 0 },
    { L"18: HK - Winpose Frame 1 hk color + (lumin+10)", 0x479f560, 0x479f580, indexCPS2_Gambit, 0 },
    { L"19: HK - Winpose Frame 2 hk color + (lumin+5)", 0x479f580, 0x479f5a0, indexCPS2_Gambit, 0 },
    { L"1a: HK - Winpose Frame 3 hk Main Color", 0x479f5a0, 0x479f5c0, indexCPS2_Gambit, 0 },
    { L"1b: HK - Winpose Frame 4 hk color + (lumin-5)", 0x479f5c0, 0x479f5e0, indexCPS2_Gambit, 0 },
    { L"1c: HK - Winpose Frame 5 hk color + (lumin-10)", 0x479f5e0, 0x479f600, indexCPS2_Gambit, 0 },
    { L"1d: A1 - Winpose Frame 1 a1 color + (lumin+10)", 0x479f600, 0x479f620, indexCPS2_Gambit, 0 },
    { L"1e: A1 - Winpose Frame 2 a1 color + (lumin+5)", 0x479f620, 0x479f640, indexCPS2_Gambit, 0 },
    { L"1f: A1 - Winpose Frame 3 a1 Main Color", 0x479f640, 0x479f660, indexCPS2_Gambit, 0 },
    { L"20: A1 - Winpose Frame 4 a1 color + (lumin-5)", 0x479f660, 0x479f680, indexCPS2_Gambit, 0 },
    { L"21: A1 - Winpose Frame 5 a1 color + (lumin-10)", 0x479f680, 0x479f6a0, indexCPS2_Gambit, 0 },
    { L"22: A2 - Winpose Frame 1 a2 color + (lumin+10)", 0x479f6a0, 0x479f6c0, indexCPS2_Gambit, 0 },
    { L"23: A2 - Winpose Frame 2 a2 color + (lumin+5)", 0x479f6c0, 0x479f6e0, indexCPS2_Gambit, 0 },
    { L"24: A2 - Winpose Frame 3 a2 Main Color", 0x479f6e0, 0x479f700, indexCPS2_Gambit, 0 },
    { L"25: A2 - Winpose Frame 4 a2 color + (lumin-5)", 0x479f700, 0x479f720, indexCPS2_Gambit, 0 },
    { L"26: A2 - Winpose Frame 5 a2 color + (lumin-10)", 0x479f720, 0x479f740, indexCPS2_Gambit, 0 },
};

const sDescTreeNode MVC2_A_GAMBIT_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_LP, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_LK, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_HP, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_HK, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_A1, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_A2, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_SHARED, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_GAMBIT_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_LP[] =
{
    { L"Main Color LP", 0x48cb760, 0x48cb780, indexCPS2_Juggy, 0 },
    { L"(02) Not Used", 0x48cb780, 0x48cb7a0, indexCPS2_Juggy, 1 },
    { L"(03) ID:01-08 Earthquake", 0x48cb7a0, 0x48cb7c0, indexCPS2_Juggy, 2 },
    { L"(04) Not Used", 0x48cb7c0, 0x48cb7e0, indexCPS2_Juggy, 3 },
    { L"(05) Not Used", 0x48cb7e0, 0x48cb800, indexCPS2_Juggy, 4 },
    { L"(06) Not Used", 0x48cb800, 0x48cb820, indexCPS2_Juggy, 5 },
    { L"(07) Not Used", 0x48cb820, 0x48cb840, indexCPS2_Juggy, 6 },
    { L"(08) Not Used", 0x48cb840, 0x48cb860, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_LK[] =
{
    { L"Main Color LK", 0x48cb860, 0x48cb880, indexCPS2_Juggy, 0 },
    { L"(02) Not Used", 0x48cb880, 0x48cb8a0, indexCPS2_Juggy, 1 },
    { L"(03) ID:01-08 Earthquake", 0x48cb8a0, 0x48cb8c0, indexCPS2_Juggy, 2 },
    { L"(04) Not Used", 0x48cb8c0, 0x48cb8e0, indexCPS2_Juggy, 3 },
    { L"(05) Not Used", 0x48cb8e0, 0x48cb900, indexCPS2_Juggy, 4 },
    { L"(06) Not Used", 0x48cb900, 0x48cb920, indexCPS2_Juggy, 5 },
    { L"(07) Not Used", 0x48cb920, 0x48cb940, indexCPS2_Juggy, 6 },
    { L"(08) Not Used", 0x48cb940, 0x48cb960, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_HP[] =
{
    { L"Main Color HP", 0x48cb960, 0x48cb980, indexCPS2_Juggy, 0 },
    { L"(02) Not Used", 0x48cb980, 0x48cb9a0, indexCPS2_Juggy, 1 },
    { L"(03) ID:01-08 Earthquake", 0x48cb9a0, 0x48cb9c0, indexCPS2_Juggy, 2 },
    { L"(04) Not Used", 0x48cb9c0, 0x48cb9e0, indexCPS2_Juggy, 3 },
    { L"(05) Not Used", 0x48cb9e0, 0x48cba00, indexCPS2_Juggy, 4 },
    { L"(06) Not Used", 0x48cba00, 0x48cba20, indexCPS2_Juggy, 5 },
    { L"(07) Not Used", 0x48cba20, 0x48cba40, indexCPS2_Juggy, 6 },
    { L"(08) Not Used", 0x48cba40, 0x48cba60, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_HK[] =
{
    { L"Main Color HK", 0x48cba60, 0x48cba80, indexCPS2_Juggy, 0 },
    { L"(02) Not Used", 0x48cba80, 0x48cbaa0, indexCPS2_Juggy, 1 },
    { L"(03) ID:01-08 Earthquake", 0x48cbaa0, 0x48cbac0, indexCPS2_Juggy, 2 },
    { L"(04) Not Used", 0x48cbac0, 0x48cbae0, indexCPS2_Juggy, 3 },
    { L"(05) Not Used", 0x48cbae0, 0x48cbb00, indexCPS2_Juggy, 4 },
    { L"(06) Not Used", 0x48cbb00, 0x48cbb20, indexCPS2_Juggy, 5 },
    { L"(07) Not Used", 0x48cbb20, 0x48cbb40, indexCPS2_Juggy, 6 },
    { L"(08) Not Used", 0x48cbb40, 0x48cbb60, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_A1[] =
{
    { L"Main Color A1", 0x48cbb60, 0x48cbb80, indexCPS2_Juggy, 0 },
    { L"(02) Not Used", 0x48cbb80, 0x48cbba0, indexCPS2_Juggy, 1 },
    { L"(03) ID:01-08 Earthquake", 0x48cbba0, 0x48cbbc0, indexCPS2_Juggy, 2 },
    { L"(04) Not Used", 0x48cbbc0, 0x48cbbe0, indexCPS2_Juggy, 3 },
    { L"(05) Not Used", 0x48cbbe0, 0x48cbc00, indexCPS2_Juggy, 4 },
    { L"(06) Not Used", 0x48cbc00, 0x48cbc20, indexCPS2_Juggy, 5 },
    { L"(07) Not Used", 0x48cbc20, 0x48cbc40, indexCPS2_Juggy, 6 },
    { L"(08) Not Used", 0x48cbc40, 0x48cbc60, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_A2[] =
{
    { L"Main Color A2", 0x48cbc60, 0x48cbc80, indexCPS2_Juggy, 0 },
    { L"(02) Not Used", 0x48cbc80, 0x48cbca0, indexCPS2_Juggy, 1 },
    { L"(03) ID:01-08 Earthquake", 0x48cbca0, 0x48cbcc0, indexCPS2_Juggy, 2 },
    { L"(04) Not Used", 0x48cbcc0, 0x48cbce0, indexCPS2_Juggy, 3 },
    { L"(05) Not Used", 0x48cbce0, 0x48cbd00, indexCPS2_Juggy, 4 },
    { L"(06) Not Used", 0x48cbd00, 0x48cbd20, indexCPS2_Juggy, 5 },
    { L"(07) Not Used", 0x48cbd20, 0x48cbd40, indexCPS2_Juggy, 6 },
    { L"(08) Not Used", 0x48cbd40, 0x48cbd60, indexCPS2_Juggy, 7 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x48cbd60, 0x48cbd80, indexCPS2_Juggy, 0 },
    { L"Burning Light", 0x48cbd80, 0x48cbda0, indexCPS2_Juggy, 0 },
    { L"Shocked Dark", 0x48cbda0, 0x48cbdc0, indexCPS2_Juggy, 0 },
    { L"Shocked Light", 0x48cbdc0, 0x48cbde0, indexCPS2_Juggy, 0 },
    { L"Dark Burning Dark", 0x48cbde0, 0x48cbe00, indexCPS2_Juggy, 0 },
    { L"Dark Burning Light", 0x48cbe00, 0x48cbe20, indexCPS2_Juggy, 0 },
    { L"Kinetic Charge Dark", 0x48cbe20, 0x48cbe40, indexCPS2_Juggy, 0 },
    { L"Kinetic Charge Light", 0x48cbe40, 0x48cbe60, indexCPS2_Juggy, 0 },
};

const sGame_PaletteDataset MVC2_A_JUGGERNAUT_PALETTES_EXTRAS[] =
{
    { L"09: LP - Juggernaut Headcrush Frame 1", 0x48cbe60, 0x48cbe80, indexCPS2_Juggy, 0 },
    { L"0a: LP - Juggernaut Headcrush Frame 2", 0x48cbe80, 0x48cbea0, indexCPS2_Juggy, 0 },
    { L"0b: LP - Power-Up Frames 1", 0x48cbea0, 0x48cbec0, indexCPS2_Juggy, 11 },
    { L"0c: LP - Power-Up Frames 2", 0x48cbec0, 0x48cbee0, indexCPS2_Juggy, 11 },
    { L"0d: LP - Power-Up Frames 3", 0x48cbee0, 0x48cbf00, indexCPS2_Juggy, 11 },
    { L"0e: LP - Power-Up Frames 4", 0x48cbf00, 0x48cbf20, indexCPS2_Juggy, 11 },
    { L"0f: LP - Power-Up Frames 5", 0x48cbf20, 0x48cbf40, indexCPS2_Juggy, 11 },
    { L"10: LP - Power-Up Frames 6", 0x48cbf40, 0x48cbf60, indexCPS2_Juggy, 11 },
    { L"11: LP - Power-Up Frames 7", 0x48cbf60, 0x48cbf80, indexCPS2_Juggy, 11 },
    { L"12: LP - Power-Up Frames 8", 0x48cbf80, 0x48cbfa0, indexCPS2_Juggy, 11 },
    { L"13: LK - Juggernaut Headcrush Frame 1", 0x48cbfa0, 0x48cbfc0, indexCPS2_Juggy, 0 },
    { L"14: LK - Juggernaut Headcrush Frame 2", 0x48cbfc0, 0x48cbfe0, indexCPS2_Juggy, 0 },
    { L"15: LK - Power-Up Frames 1", 0x48cbfe0, 0x48cc000, indexCPS2_Juggy, 11 },
    { L"16: LK - Power-Up Frames 2", 0x48cc000, 0x48cc020, indexCPS2_Juggy, 11 },
    { L"17: LK - Power-Up Frames 3", 0x48cc020, 0x48cc040, indexCPS2_Juggy, 11 },
    { L"18: LK - Power-Up Frames 4", 0x48cc040, 0x48cc060, indexCPS2_Juggy, 11 },
    { L"19: LK - Power-Up Frames 5", 0x48cc060, 0x48cc080, indexCPS2_Juggy, 11 },
    { L"1a: LK - Power-Up Frames 6", 0x48cc080, 0x48cc0a0, indexCPS2_Juggy, 11 },
    { L"1b: LK - Power-Up Frames 7", 0x48cc0a0, 0x48cc0c0, indexCPS2_Juggy, 11 },
    { L"1c: LK - Power-Up Frames 8", 0x48cc0c0, 0x48cc0e0, indexCPS2_Juggy, 11 },
    { L"1d: HP - Juggernaut Headcrush Frame 1", 0x48cc0e0, 0x48cc100, indexCPS2_Juggy, 0 },
    { L"1e: HP - Juggernaut Headcrush Frame 2", 0x48cc100, 0x48cc120, indexCPS2_Juggy, 0 },
    { L"1f: HP - Power-Up Frames 1", 0x48cc120, 0x48cc140, indexCPS2_Juggy, 11 },
    { L"20: HP - Power-Up Frames 2", 0x48cc140, 0x48cc160, indexCPS2_Juggy, 11 },
    { L"21: HP - Power-Up Frames 3", 0x48cc160, 0x48cc180, indexCPS2_Juggy, 11 },
    { L"22: HP - Power-Up Frames 4", 0x48cc180, 0x48cc1a0, indexCPS2_Juggy, 11 },
    { L"23: HP - Power-Up Frames 5", 0x48cc1a0, 0x48cc1c0, indexCPS2_Juggy, 11 },
    { L"24: HP - Power-Up Frames 6", 0x48cc1c0, 0x48cc1e0, indexCPS2_Juggy, 11 },
    { L"25: HP - Power-Up Frames 7", 0x48cc1e0, 0x48cc200, indexCPS2_Juggy, 11 },
    { L"26: HP - Power-Up Frames 8", 0x48cc200, 0x48cc220, indexCPS2_Juggy, 11 },
    { L"27: HK - Juggernaut Headcrush Frame 1", 0x48cc220, 0x48cc240, indexCPS2_Juggy, 0 },
    { L"28: HK - Juggernaut Headcrush Frame 2", 0x48cc240, 0x48cc260, indexCPS2_Juggy, 0 },
    { L"29: HK - Power-Up Frames 1", 0x48cc260, 0x48cc280, indexCPS2_Juggy, 11 },
    { L"2a: HK - Power-Up Frames 2", 0x48cc280, 0x48cc2a0, indexCPS2_Juggy, 11 },
    { L"2b: HK - Power-Up Frames 3", 0x48cc2a0, 0x48cc2c0, indexCPS2_Juggy, 11 },
    { L"2c: HK - Power-Up Frames 4", 0x48cc2c0, 0x48cc2e0, indexCPS2_Juggy, 11 },
    { L"2d: HK - Power-Up Frames 5", 0x48cc2e0, 0x48cc300, indexCPS2_Juggy, 11 },
    { L"2e: HK - Power-Up Frames 6", 0x48cc300, 0x48cc320, indexCPS2_Juggy, 11 },
    { L"2f: HK - Power-Up Frames 7", 0x48cc320, 0x48cc340, indexCPS2_Juggy, 11 },
    { L"30: HK - Power-Up Frames 8", 0x48cc340, 0x48cc360, indexCPS2_Juggy, 11 },
    { L"31: A1 - Juggernaut Headcrush Frame 1", 0x48cc360, 0x48cc380, indexCPS2_Juggy, 0 },
    { L"32: A1 - Juggernaut Headcrush Frame 2", 0x48cc380, 0x48cc3a0, indexCPS2_Juggy, 0 },
    { L"33: A1 - Power-Up Frames 1", 0x48cc3a0, 0x48cc3c0, indexCPS2_Juggy, 11 },
    { L"34: A1 - Power-Up Frames 2", 0x48cc3c0, 0x48cc3e0, indexCPS2_Juggy, 11 },
    { L"35: A1 - Power-Up Frames 3", 0x48cc3e0, 0x48cc400, indexCPS2_Juggy, 11 },
    { L"36: A1 - Power-Up Frames 4", 0x48cc400, 0x48cc420, indexCPS2_Juggy, 11 },
    { L"37: A1 - Power-Up Frames 5", 0x48cc420, 0x48cc440, indexCPS2_Juggy, 11 },
    { L"38: A1 - Power-Up Frames 6", 0x48cc440, 0x48cc460, indexCPS2_Juggy, 11 },
    { L"39: A1 - Power-Up Frames 7", 0x48cc460, 0x48cc480, indexCPS2_Juggy, 11 },
    { L"3a: A1 - Power-Up Frames 8", 0x48cc480, 0x48cc4a0, indexCPS2_Juggy, 11 },
    { L"3b: A2 - Juggernaut Headcrush Frame 1", 0x48cc4a0, 0x48cc4c0, indexCPS2_Juggy, 0 },
    { L"3c: A2 - Juggernaut Headcrush Frame 2", 0x48cc4c0, 0x48cc4e0, indexCPS2_Juggy, 0 },
    { L"3d: A2 - Power-Up Frames 1", 0x48cc4e0, 0x48cc500, indexCPS2_Juggy, 11 },
    { L"3e: A2 - Power-Up Frames 2", 0x48cc500, 0x48cc520, indexCPS2_Juggy, 11 },
    { L"3f: A2 - Power-Up Frames 3", 0x48cc520, 0x48cc540, indexCPS2_Juggy, 11 },
    { L"40: A2 - Power-Up Frames 4", 0x48cc540, 0x48cc560, indexCPS2_Juggy, 11 },
    { L"41: A2 - Power-Up Frames 5", 0x48cc560, 0x48cc580, indexCPS2_Juggy, 11 },
    { L"42: A2 - Power-Up Frames 6", 0x48cc580, 0x48cc5a0, indexCPS2_Juggy, 11 },
    { L"43: A2 - Power-Up Frames 7", 0x48cc5a0, 0x48cc5c0, indexCPS2_Juggy, 11 },
    { L"44: A2 - Power-Up Frames 8", 0x48cc5c0, 0x48cc5e0, indexCPS2_Juggy, 11 },
};

const sDescTreeNode MVC2_A_JUGGERNAUT_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_LP, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_LK, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_HP, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_HK, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_A1, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_A2, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_SHARED, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_JUGGERNAUT_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_LP[] =
{
    { L"Main Color LP", 0x49d9e80, 0x49d9ea0, indexCPS2_Storm, 0 },
    { L"(02) Not Used", 0x49d9ea0, 0x49d9ec0, indexCPS2_Storm, 1 },
    { L"(03) Not Used", 0x49d9ec0, 0x49d9ee0, indexCPS2_Storm, 2 },
    { L"(04) Not Used", 0x49d9ee0, 0x49d9f00, indexCPS2_Storm, 3 },
    { L"(05) Not Used", 0x49d9f00, 0x49d9f20, indexCPS2_Storm, 4 },
    { L"(06) Not Used", 0x49d9f20, 0x49d9f40, indexCPS2_Storm, 5 },
    { L"(07) Not Used", 0x49d9f40, 0x49d9f60, indexCPS2_Storm, 6 },
    { L"(08) Not Used", 0x49d9f60, 0x49d9f80, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_LK[] =
{
    { L"Main Color LK", 0x49d9f80, 0x49d9fa0, indexCPS2_Storm, 0 },
    { L"(02) Not Used", 0x49d9fa0, 0x49d9fc0, indexCPS2_Storm, 1 },
    { L"(03) Not Used", 0x49d9fc0, 0x49d9fe0, indexCPS2_Storm, 2 },
    { L"(04) Not Used", 0x49d9fe0, 0x49da000, indexCPS2_Storm, 3 },
    { L"(05) Not Used", 0x49da000, 0x49da020, indexCPS2_Storm, 4 },
    { L"(06) Not Used", 0x49da020, 0x49da040, indexCPS2_Storm, 5 },
    { L"(07) Not Used", 0x49da040, 0x49da060, indexCPS2_Storm, 6 },
    { L"(08) Not Used", 0x49da060, 0x49da080, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_HP[] =
{
    { L"Main Color HP", 0x49da080, 0x49da0a0, indexCPS2_Storm, 0 },
    { L"(02) Not Used", 0x49da0a0, 0x49da0c0, indexCPS2_Storm, 1 },
    { L"(03) Not Used", 0x49da0c0, 0x49da0e0, indexCPS2_Storm, 2 },
    { L"(04) Not Used", 0x49da0e0, 0x49da100, indexCPS2_Storm, 3 },
    { L"(05) Not Used", 0x49da100, 0x49da120, indexCPS2_Storm, 4 },
    { L"(06) Not Used", 0x49da120, 0x49da140, indexCPS2_Storm, 5 },
    { L"(07) Not Used", 0x49da140, 0x49da160, indexCPS2_Storm, 6 },
    { L"(08) Not Used", 0x49da160, 0x49da180, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_HK[] =
{
    { L"Main Color HK", 0x49da180, 0x49da1a0, indexCPS2_Storm, 0 },
    { L"(02) Not Used", 0x49da1a0, 0x49da1c0, indexCPS2_Storm, 1 },
    { L"(03) Not Used", 0x49da1c0, 0x49da1e0, indexCPS2_Storm, 2 },
    { L"(04) Not Used", 0x49da1e0, 0x49da200, indexCPS2_Storm, 3 },
    { L"(05) Not Used", 0x49da200, 0x49da220, indexCPS2_Storm, 4 },
    { L"(06) Not Used", 0x49da220, 0x49da240, indexCPS2_Storm, 5 },
    { L"(07) Not Used", 0x49da240, 0x49da260, indexCPS2_Storm, 6 },
    { L"(08) Not Used", 0x49da260, 0x49da280, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_A1[] =
{
    { L"Main Color A1", 0x49da280, 0x49da2a0, indexCPS2_Storm, 0 },
    { L"(02) Not Used", 0x49da2a0, 0x49da2c0, indexCPS2_Storm, 1 },
    { L"(03) Not Used", 0x49da2c0, 0x49da2e0, indexCPS2_Storm, 2 },
    { L"(04) Not Used", 0x49da2e0, 0x49da300, indexCPS2_Storm, 3 },
    { L"(05) Not Used", 0x49da300, 0x49da320, indexCPS2_Storm, 4 },
    { L"(06) Not Used", 0x49da320, 0x49da340, indexCPS2_Storm, 5 },
    { L"(07) Not Used", 0x49da340, 0x49da360, indexCPS2_Storm, 6 },
    { L"(08) Not Used", 0x49da360, 0x49da380, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_A2[] =
{
    { L"Main Color A2", 0x49da380, 0x49da3a0, indexCPS2_Storm, 0 },
    { L"(02) Not Used", 0x49da3a0, 0x49da3c0, indexCPS2_Storm, 1 },
    { L"(03) Not Used", 0x49da3c0, 0x49da3e0, indexCPS2_Storm, 2 },
    { L"(04) Not Used", 0x49da3e0, 0x49da400, indexCPS2_Storm, 3 },
    { L"(05) Not Used", 0x49da400, 0x49da420, indexCPS2_Storm, 4 },
    { L"(06) Not Used", 0x49da420, 0x49da440, indexCPS2_Storm, 5 },
    { L"(07) Not Used", 0x49da440, 0x49da460, indexCPS2_Storm, 6 },
    { L"(08) Not Used", 0x49da460, 0x49da480, indexCPS2_Storm, 7 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x49da480, 0x49da4a0, indexCPS2_Storm, 0 },
    { L"Burning Light", 0x49da4a0, 0x49da4c0, indexCPS2_Storm, 0 },
    { L"Shocked Dark", 0x49da4c0, 0x49da4e0, indexCPS2_Storm, 0 },
    { L"Shocked Light", 0x49da4e0, 0x49da500, indexCPS2_Storm, 0 },
    { L"Dark Burning Dark", 0x49da500, 0x49da520, indexCPS2_Storm, 0 },
    { L"Dark Burning Light", 0x49da520, 0x49da540, indexCPS2_Storm, 0 },
    { L"Kinetic Charge Dark", 0x49da540, 0x49da560, indexCPS2_Storm, 0 },
    { L"Kinetic Charge Light", 0x49da560, 0x49da580, indexCPS2_Storm, 0 },
};

const sGame_PaletteDataset MVC2_A_STORM_PALETTES_EXTRAS[] =
{
    { L"09: Lightning Storm Frame 1", 0x49da580, 0x49da5a0, indexCPS2_Storm, 11 },
    { L"0a: Lightning Storm Frame 2", 0x49da5a0, 0x49da5c0, indexCPS2_Storm, 11 },
    { L"0b: Lightning Storm Frame 3", 0x49da5c0, 0x49da5e0, indexCPS2_Storm, 11 },
    { L"0c: Not Used", 0x49da5e0, 0x49da600 },
    { L"0d: Not Used", 0x49da600, 0x49da620 },
    { L"0e: Not Used", 0x49da620, 0x49da640 },
    { L"0f: Wind Effect 1", 0x49da640, 0x49da660, indexCPS2_Storm, 12 },
    { L"10: Wind Effect 2", 0x49da660, 0x49da680, indexCPS2_Storm, 12 },
    { L"11: Wind Effect 3", 0x49da680, 0x49da6a0, indexCPS2_Storm, 12 },
    { L"12: Wind Effect 4", 0x49da6a0, 0x49da6c0, indexCPS2_Storm, 12 },
    { L"13: LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 1", 0x49da6c0, 0x49da6e0, indexCPS2_Storm, 13 },
    { L"14: LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 2", 0x49da6e0, 0x49da700, indexCPS2_Storm, 13 },
    { L"15: LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 3", 0x49da700, 0x49da720, indexCPS2_Storm, 13 },
    { L"16: LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 4", 0x49da720, 0x49da740, indexCPS2_Storm, 13 },
    { L"17: LP,FP effects / Lightning Ball / Attack / Super (lightning) Frame 5", 0x49da740, 0x49da760, indexCPS2_Storm, 13 },
    { L"18: Not Used", 0x49da760, 0x49da780 },
    { L"19: LP lightning effect 1 orig.color", 0x49da780, 0x49da7a0, indexCPS2_Storm, 15 },
    { L"1a: LP lightning effect 2 ! lumin+10", 0x49da7a0, 0x49da7c0, indexCPS2_Storm, 15 },
    { L"1b: LP lightning effect 3 ! lumin+25", 0x49da7c0, 0x49da7e0, indexCPS2_Storm, 15 },
    { L"1c: LK lightning effect 1 orig.color", 0x49da7e0, 0x49da800, indexCPS2_Storm, 15 },
    { L"1d: LK lightning effect 2 ! lumin+10", 0x49da800, 0x49da820, indexCPS2_Storm, 15 },
    { L"1e: LK lightning effect 3 ! lumin+25", 0x49da820, 0x49da840, indexCPS2_Storm, 15 },
    { L"1f: HP lightning effect 1 orig.color", 0x49da840, 0x49da860, indexCPS2_Storm, 15 },
    { L"20: HP lightning effect 2 ! lumin+10", 0x49da860, 0x49da880, indexCPS2_Storm, 15 },
    { L"21: HP lightning effect 3 ! lumin+25", 0x49da880, 0x49da8a0, indexCPS2_Storm, 15 },
    { L"22: HK lightning effect 1 orig.color", 0x49da8a0, 0x49da8c0, indexCPS2_Storm, 15 },
    { L"23: HK lightning effect 2 ! lumin+10", 0x49da8c0, 0x49da8e0, indexCPS2_Storm, 15 },
    { L"24: HK lightning effect 3 ! lumin+25", 0x49da8e0, 0x49da900, indexCPS2_Storm, 15 },
    { L"25: A1 lightning effect 1 orig.color", 0x49da900, 0x49da920, indexCPS2_Storm, 15 },
    { L"26: A1 lightning effect 2 ! lumin+10", 0x49da920, 0x49da940, indexCPS2_Storm, 15 },
    { L"27: A1 lightning effect 3 ! lumin+25", 0x49da940, 0x49da960, indexCPS2_Storm, 15 },
    { L"28: A2 lightning effect 1 orig.color", 0x49da960, 0x49da980, indexCPS2_Storm, 15 },
    { L"29: A2 lightning effect 2 ! lumin+10", 0x49da980, 0x49da9a0, indexCPS2_Storm, 15 },
    { L"2a: A2 lightning effect 3 ! lumin+25", 0x49da9a0, 0x49da9c0, indexCPS2_Storm, 15 },
};

const sDescTreeNode MVC2_A_STORM_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_LP, ARRAYSIZE(MVC2_A_STORM_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_LK, ARRAYSIZE(MVC2_A_STORM_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_HP, ARRAYSIZE(MVC2_A_STORM_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_HK, ARRAYSIZE(MVC2_A_STORM_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_A1, ARRAYSIZE(MVC2_A_STORM_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_A2, ARRAYSIZE(MVC2_A_STORM_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_SHARED, ARRAYSIZE(MVC2_A_STORM_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_STORM_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4adb360, 0x4adb380, indexCPS2_Sabretooth, 0 },
    { L"(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb380, 0x4adb3a0, indexCPS2_Sabretooth, 1 },
    { L"(03) Birdie", 0x4adb3a0, 0x4adb3c0, indexCPS2_Sabretooth, 2 },
    { L"(04) Sabre's Limo", 0x4adb3c0, 0x4adb3e0, indexCPS2_Sabretooth, 3 },
    { L"(05) Not Used", 0x4adb3e0, 0x4adb400, indexCPS2_Sabretooth, 4 },
    { L"(06) Not Used", 0x4adb400, 0x4adb420, indexCPS2_Sabretooth, 5 },
    { L"(07) Not Used", 0x4adb420, 0x4adb440, indexCPS2_Sabretooth, 0 },
    { L"(08) Not Used", 0x4adb440, 0x4adb460, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4adb460, 0x4adb480, indexCPS2_Sabretooth, 0 },
    { L"(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb480, 0x4adb4a0, indexCPS2_Sabretooth, 1 },
    { L"(03) Birdie", 0x4adb4a0, 0x4adb4c0, indexCPS2_Sabretooth, 2 },
    { L"(04) Sabre's Limo", 0x4adb4c0, 0x4adb4e0, indexCPS2_Sabretooth, 3 },
    { L"(05) Not Used", 0x4adb4e0, 0x4adb500, indexCPS2_Sabretooth, 4 },
    { L"(06) Not Used", 0x4adb500, 0x4adb520, indexCPS2_Sabretooth, 5 },
    { L"(07) Not Used", 0x4adb520, 0x4adb540, indexCPS2_Sabretooth, 0 },
    { L"(08) Not Used", 0x4adb540, 0x4adb560, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4adb560, 0x4adb580, indexCPS2_Sabretooth, 0 },
    { L"(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb580, 0x4adb5a0, indexCPS2_Sabretooth, 1 },
    { L"(03) Birdie", 0x4adb5a0, 0x4adb5c0, indexCPS2_Sabretooth, 2 },
    { L"(04) Sabre's Limo", 0x4adb5c0, 0x4adb5e0, indexCPS2_Sabretooth, 3 },
    { L"(05) Not Used", 0x4adb5e0, 0x4adb600, indexCPS2_Sabretooth, 4 },
    { L"(06) Not Used", 0x4adb600, 0x4adb620, indexCPS2_Sabretooth, 5 },
    { L"(07) Not Used", 0x4adb620, 0x4adb640, indexCPS2_Sabretooth, 0 },
    { L"(08) Not Used", 0x4adb640, 0x4adb660, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4adb660, 0x4adb680, indexCPS2_Sabretooth, 0 },
    { L"(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb680, 0x4adb6a0, indexCPS2_Sabretooth, 1 },
    { L"(03) Birdie", 0x4adb6a0, 0x4adb6c0, indexCPS2_Sabretooth, 2 },
    { L"(04) Sabre's Limo", 0x4adb6c0, 0x4adb6e0, indexCPS2_Sabretooth, 3 },
    { L"(05) Not Used", 0x4adb6e0, 0x4adb700, indexCPS2_Sabretooth, 4 },
    { L"(06) Not Used", 0x4adb700, 0x4adb720, indexCPS2_Sabretooth, 5 },
    { L"(07) Not Used", 0x4adb720, 0x4adb740, indexCPS2_Sabretooth, 0 },
    { L"(08) Not Used", 0x4adb740, 0x4adb760, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4adb760, 0x4adb780, indexCPS2_Sabretooth, 0 },
    { L"(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb780, 0x4adb7a0, indexCPS2_Sabretooth, 1 },
    { L"(03) Birdie", 0x4adb7a0, 0x4adb7c0, indexCPS2_Sabretooth, 2 },
    { L"(04) Sabre's Limo", 0x4adb7c0, 0x4adb7e0, indexCPS2_Sabretooth, 3 },
    { L"(05) Not Used", 0x4adb7e0, 0x4adb800, indexCPS2_Sabretooth, 4 },
    { L"(06) Not Used", 0x4adb800, 0x4adb820, indexCPS2_Sabretooth, 5 },
    { L"(07) Not Used", 0x4adb820, 0x4adb840, indexCPS2_Sabretooth, 0 },
    { L"(08) Not Used", 0x4adb840, 0x4adb860, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4adb860, 0x4adb880, indexCPS2_Sabretooth, 0 },
    { L"(02) Berserker Barrage (Claw) / Birdie's gun / LPx2", 0x4adb880, 0x4adb8a0, indexCPS2_Sabretooth, 1 },
    { L"(03) Birdie", 0x4adb8a0, 0x4adb8c0, indexCPS2_Sabretooth, 2 },
    { L"(04) Sabre's Limo", 0x4adb8c0, 0x4adb8e0, indexCPS2_Sabretooth, 3 },
    { L"(05) Not Used", 0x4adb8e0, 0x4adb900, indexCPS2_Sabretooth, 4 },
    { L"(06) Not Used", 0x4adb900, 0x4adb920, indexCPS2_Sabretooth, 5 },
    { L"(07) Not Used", 0x4adb920, 0x4adb940, indexCPS2_Sabretooth, 0 },
    { L"(08) Not Used", 0x4adb940, 0x4adb960, indexCPS2_Sabretooth, 7 },
};

const sGame_PaletteDataset MVC2_A_SABRETOOTH_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4adb960, 0x4adb980, indexCPS2_Sabretooth, 0 },
    { L"Burning Light", 0x4adb980, 0x4adb9a0, indexCPS2_Sabretooth, 0 },
    { L"Shocked Dark", 0x4adb9a0, 0x4adb9c0, indexCPS2_Sabretooth, 0 },
    { L"Shocked Light", 0x4adb9c0, 0x4adb9e0, indexCPS2_Sabretooth, 0 },
    { L"Dark Burning Dark", 0x4adb9e0, 0x4adba00, indexCPS2_Sabretooth, 0 },
    { L"Dark Burning Light", 0x4adba00, 0x4adba20, indexCPS2_Sabretooth, 0 },
    { L"Kinetic Charge Dark", 0x4adba20, 0x4adba40, indexCPS2_Sabretooth, 0 },
    { L"Kinetic Charge Light", 0x4adba40, 0x4adba60, indexCPS2_Sabretooth, 0 },
};

const sDescTreeNode MVC2_A_SABRETOOTH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_LP, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_LK, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_HP, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_HK, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_A1, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_A2, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SABRETOOTH_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4bf21c0, 0x4bf21e0, indexCPS2_Magneto, 0 },
    { L"(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf21e0, 0x4bf2200, indexCPS2_Magneto, 1 },
    { L"(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2200, 0x4bf2220, indexCPS2_Magneto, 2 },
    { L"(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2220, 0x4bf2240, indexCPS2_Magneto, 3 },
    { L"(05) Not Used", 0x4bf2240, 0x4bf2260, indexCPS2_Magneto, 4 },
    { L"(06) Not Used", 0x4bf2260, 0x4bf2280, indexCPS2_Magneto, 5 },
    { L"(07) Not Used", 0x4bf2280, 0x4bf22a0, indexCPS2_Magneto, 0 },
    { L"(08) Not Used", 0x4bf22a0, 0x4bf22c0, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4bf22c0, 0x4bf22e0, indexCPS2_Magneto, 0 },
    { L"(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf22e0, 0x4bf2300, indexCPS2_Magneto, 1 },
    { L"(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2300, 0x4bf2320, indexCPS2_Magneto, 2 },
    { L"(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2320, 0x4bf2340, indexCPS2_Magneto, 3 },
    { L"(05) Not Used", 0x4bf2340, 0x4bf2360, indexCPS2_Magneto, 4 },
    { L"(06) Not Used", 0x4bf2360, 0x4bf2380, indexCPS2_Magneto, 5 },
    { L"(07) Not Used", 0x4bf2380, 0x4bf23a0, indexCPS2_Magneto, 0 },
    { L"(08) Not Used", 0x4bf23a0, 0x4bf23c0, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4bf23c0, 0x4bf23e0, indexCPS2_Magneto, 0 },
    { L"(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf23e0, 0x4bf2400, indexCPS2_Magneto, 1 },
    { L"(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2400, 0x4bf2420, indexCPS2_Magneto, 2 },
    { L"(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2420, 0x4bf2440, indexCPS2_Magneto, 3 },
    { L"(05) Not Used", 0x4bf2440, 0x4bf2460, indexCPS2_Magneto, 4 },
    { L"(06) Not Used", 0x4bf2460, 0x4bf2480, indexCPS2_Magneto, 5 },
    { L"(07) Not Used", 0x4bf2480, 0x4bf24a0, indexCPS2_Magneto, 0 },
    { L"(08) Not Used", 0x4bf24a0, 0x4bf24c0, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4bf24c0, 0x4bf24e0, indexCPS2_Magneto, 0 },
    { L"(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf24e0, 0x4bf2500, indexCPS2_Magneto, 1 },
    { L"(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2500, 0x4bf2520, indexCPS2_Magneto, 2 },
    { L"(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2520, 0x4bf2540, indexCPS2_Magneto, 3 },
    { L"(05) Not Used", 0x4bf2540, 0x4bf2560, indexCPS2_Magneto, 4 },
    { L"(06) Not Used", 0x4bf2560, 0x4bf2580, indexCPS2_Magneto, 5 },
    { L"(07) Not Used", 0x4bf2580, 0x4bf25a0, indexCPS2_Magneto, 0 },
    { L"(08) Not Used", 0x4bf25a0, 0x4bf25c0, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4bf25c0, 0x4bf25e0, indexCPS2_Magneto, 0 },
    { L"(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf25e0, 0x4bf2600, indexCPS2_Magneto, 1 },
    { L"(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2600, 0x4bf2620, indexCPS2_Magneto, 2 },
    { L"(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2620, 0x4bf2640, indexCPS2_Magneto, 3 },
    { L"(05) Not Used", 0x4bf2640, 0x4bf2660, indexCPS2_Magneto, 4 },
    { L"(06) Not Used", 0x4bf2660, 0x4bf2680, indexCPS2_Magneto, 5 },
    { L"(07) Not Used", 0x4bf2680, 0x4bf26a0, indexCPS2_Magneto, 0 },
    { L"(08) Not Used", 0x4bf26a0, 0x4bf26c0, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4bf26c0, 0x4bf26e0, indexCPS2_Magneto, 0 },
    { L"(02) ID:02-06: Guard (Reflect) || ID:07-09: HyperGrav, EM Disruptor (inner), Magnetic Tempest (rocks), Guard (when hit) || ID:10-15 EM Disruptor (outer) / c.hk (effect)", 0x4bf26e0, 0x4bf2700, indexCPS2_Magneto, 1 },
    { L"(03) ID:01-09: FP,c.FP, j.RH, j.FP, LP, c.LP, j.MK, MK / airslash / Force Field / HyperGrav (hands) || ID:10-15: dash / c.hk (ground effect) / HyperGrav (creation frame)", 0x4bf2700, 0x4bf2720, indexCPS2_Magneto, 2 },
    { L"(04) ID:01-09 Magnetic Shockwave ID:10-15 Not Used", 0x4bf2720, 0x4bf2740, indexCPS2_Magneto, 3 },
    { L"(05) Not Used", 0x4bf2740, 0x4bf2760, indexCPS2_Magneto, 4 },
    { L"(06) Not Used", 0x4bf2760, 0x4bf2780, indexCPS2_Magneto, 5 },
    { L"(07) Not Used", 0x4bf2780, 0x4bf27a0, indexCPS2_Magneto, 0 },
    { L"(08) Not Used", 0x4bf27a0, 0x4bf27c0, indexCPS2_Magneto, 7 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4bf27c0, 0x4bf27e0, indexCPS2_Magneto, 0 },
    { L"Burning Light", 0x4bf27e0, 0x4bf2800, indexCPS2_Magneto, 0 },
    { L"Shocked Dark", 0x4bf2800, 0x4bf2820, indexCPS2_Magneto, 0 },
    { L"Shocked Light", 0x4bf2820, 0x4bf2840, indexCPS2_Magneto, 0 },
    { L"Dark Burning Dark", 0x4bf2840, 0x4bf2860, indexCPS2_Magneto, 0 },
    { L"Dark Burning Light", 0x4bf2860, 0x4bf2880, indexCPS2_Magneto, 0 },
    { L"Kinetic Charge Dark", 0x4bf2880, 0x4bf28a0, indexCPS2_Magneto, 0 },
    { L"Kinetic Charge Light", 0x4bf28a0, 0x4bf28c0, indexCPS2_Magneto, 0 },
};

const sGame_PaletteDataset MVC2_A_MAGNETO_PALETTES_EXTRAS[] =
{
    { L"09: Not Used", 0x4bf28c0, 0x4bf28e0 },
    { L"0a: ID:01-09 Not Used - Glitched Palette ID:10-15 c.mp (ball - all buttons) / c.hk (effect after c.mp)", 0x4bf28e0, 0x4bf2900, indexCPS2_Magneto, 11 },
};

const sDescTreeNode MVC2_A_MAGNETO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_LP, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_LK, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_HP, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_HK, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_A1, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_A2, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_MAGNETO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_LP[] =
{
    { L"Main Color / Mystic Stare LP", 0x4cda620, 0x4cda640, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"(02) Dash Frame / Guard Frame", 0x4cda640, 0x4cda660, indexCPS2_Shuma, 1 },
    { L"(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda660, 0x4cda680, indexCPS2_Shuma, 2 },
    { L"(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda680, 0x4cda6a0, indexCPS2_Shuma, 3 },
    { L"(05) Not Used", 0x4cda6a0, 0x4cda6c0, indexCPS2_Shuma, 4 },
    { L"(06) Not Used", 0x4cda6c0, 0x4cda6e0, indexCPS2_Shuma, 5 },
    { L"(07) Not Used", 0x4cda6e0, 0x4cda700, indexCPS2_Shuma, 6 },
    { L"(08) Not Used", 0x4cda700, 0x4cda720, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_LK[] =
{
    { L"Main Color / Mystic Stare LK", 0x4cda720, 0x4cda740, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"(02) Dash Frame / Guard Frame", 0x4cda740, 0x4cda760, indexCPS2_Shuma, 1 },
    { L"(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda760, 0x4cda780, indexCPS2_Shuma, 2 },
    { L"(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda780, 0x4cda7a0, indexCPS2_Shuma, 3 },
    { L"(05) Not Used", 0x4cda7a0, 0x4cda7c0, indexCPS2_Shuma, 4 },
    { L"(06) Not Used", 0x4cda7c0, 0x4cda7e0, indexCPS2_Shuma, 5 },
    { L"(07) Not Used", 0x4cda7e0, 0x4cda800, indexCPS2_Shuma, 6 },
    { L"(08) Not Used", 0x4cda800, 0x4cda820, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_HP[] =
{
    { L"Main Color / Mystic Stare HP", 0x4cda820, 0x4cda840, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"(02) Dash Frame / Guard Frame", 0x4cda840, 0x4cda860, indexCPS2_Shuma, 1 },
    { L"(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda860, 0x4cda880, indexCPS2_Shuma, 2 },
    { L"(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda880, 0x4cda8a0, indexCPS2_Shuma, 3 },
    { L"(05) Not Used", 0x4cda8a0, 0x4cda8c0, indexCPS2_Shuma, 4 },
    { L"(06) Not Used", 0x4cda8c0, 0x4cda8e0, indexCPS2_Shuma, 5 },
    { L"(07) Not Used", 0x4cda8e0, 0x4cda900, indexCPS2_Shuma, 6 },
    { L"(08) Not Used", 0x4cda900, 0x4cda920, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_HK[] =
{
    { L"Main Color / Mystic Stare HK", 0x4cda920, 0x4cda940, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"(02) Dash Frame / Guard Frame", 0x4cda940, 0x4cda960, indexCPS2_Shuma, 1 },
    { L"(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cda960, 0x4cda980, indexCPS2_Shuma, 2 },
    { L"(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cda980, 0x4cda9a0, indexCPS2_Shuma, 3 },
    { L"(05) Not Used", 0x4cda9a0, 0x4cda9c0, indexCPS2_Shuma, 4 },
    { L"(06) Not Used", 0x4cda9c0, 0x4cda9e0, indexCPS2_Shuma, 5 },
    { L"(07) Not Used", 0x4cda9e0, 0x4cdaa00, indexCPS2_Shuma, 6 },
    { L"(08) Not Used", 0x4cdaa00, 0x4cdaa20, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_A1[] =
{
    { L"Main Color / Mystic Stare A1", 0x4cdaa20, 0x4cdaa40, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"(02) Dash Frame / Guard Frame", 0x4cdaa40, 0x4cdaa60, indexCPS2_Shuma, 1 },
    { L"(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cdaa60, 0x4cdaa80, indexCPS2_Shuma, 2 },
    { L"(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cdaa80, 0x4cdaaa0, indexCPS2_Shuma, 3 },
    { L"(05) Not Used", 0x4cdaaa0, 0x4cdaac0, indexCPS2_Shuma, 4 },
    { L"(06) Not Used", 0x4cdaac0, 0x4cdaae0, indexCPS2_Shuma, 5 },
    { L"(07) Not Used", 0x4cdaae0, 0x4cdab00, indexCPS2_Shuma, 6 },
    { L"(08) Not Used", 0x4cdab00, 0x4cdab20, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_A2[] =
{
    { L"Main Color / Mystic Stare A2", 0x4cdab20, 0x4cdab40, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"(02) Dash Frame / Guard Frame", 0x4cdab40, 0x4cdab60, indexCPS2_Shuma, 1 },
    { L"(03) FP/ j.FP / c.FP / Intro (portal) / Chaos Dimension (Flash Activation)", 0x4cdab60, 0x4cdab80, indexCPS2_Shuma, 2 },
    { L"(04) ID:01-08 Not Used ID:09-15 Mystic Stare (when stuck to the opponent)", 0x4cdab80, 0x4cdaba0, indexCPS2_Shuma, 3 },
    { L"(05) Not Used", 0x4cdaba0, 0x4cdabc0, indexCPS2_Shuma, 4 },
    { L"(06) Not Used", 0x4cdabc0, 0x4cdabe0, indexCPS2_Shuma, 5 },
    { L"(07) Not Used", 0x4cdabe0, 0x4cdac00, indexCPS2_Shuma, 6 },
    { L"(08) Not Used", 0x4cdac00, 0x4cdac20, indexCPS2_Shuma, 7 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4cdac20, 0x4cdac40, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Burning Dark 2", 0x4cdac40, 0x4cdac60, indexCPS2_Shuma, 1 },
    { L"Burning Light", 0x4cdac60, 0x4cdac80, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Burning Light 2", 0x4cdac80, 0x4cdaca0, indexCPS2_Shuma, 1 },
    { L"Shocked Dark", 0x4cdaca0, 0x4cdacc0, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Shocked Dark 2", 0x4cdacc0, 0x4cdace0, indexCPS2_Shuma, 1 },
    { L"Shocked Light", 0x4cdace0, 0x4cdad00, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Shocked Light 2", 0x4cdad00, 0x4cdad20, indexCPS2_Shuma, 1 },
    { L"Dark Burning Dark", 0x4cdad20, 0x4cdad40, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Dark Burning Dark 2", 0x4cdad40, 0x4cdad60, indexCPS2_Shuma, 1 },
    { L"Dark Burning Light", 0x4cdad60, 0x4cdad80, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Dark Burning Light 2", 0x4cdad80, 0x4cdada0, indexCPS2_Shuma, 1 },
    { L"Kinetic Charge Dark", 0x4cdada0, 0x4cdadc0, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Kinetic Charge Dark 2", 0x4cdadc0, 0x4cdade0, indexCPS2_Shuma, 1 },
    { L"Kinetic Charge Light", 0x4cdade0, 0x4cdae00, indexCPS2_Shuma, 0, &pairUnhandled },
    { L"Kinetic Charge Light 2", 0x4cdae00, 0x4cdae20, indexCPS2_Shuma, 1 },
};

const sGame_PaletteDataset MVC2_A_SHUMA_PALETTES_EXTRAS[] =
{
    { L"11: LP - Stance Frame (after FP) 1", 0x4cdae20, 0x4cdae40, indexCPS2_Shuma, 0 },
    { L"12: LP - Stance Frame (after FP) 2", 0x4cdae40, 0x4cdae60, indexCPS2_Shuma, 0 },
    { L"13: LP - Stance Frame (after FP) 3", 0x4cdae60, 0x4cdae80, indexCPS2_Shuma, 0 },
    { L"14: LP - Stance Frame (after FP) 4", 0x4cdae80, 0x4cdaea0, indexCPS2_Shuma, 0 },
    { L"15: LP - Stance Frame (after FP) 5", 0x4cdaea0, 0x4cdaec0, indexCPS2_Shuma, 0 },
    { L"16: LP - Stone Drop (d+HK) Frames 1", 0x4cdaec0, 0x4cdaee0, indexCPS2_Shuma, 0 },
    { L"17: LP - Stone Drop (d+HK) Frames 2", 0x4cdaee0, 0x4cdaf00, indexCPS2_Shuma, 0 },
    { L"18: LP - Stone Drop (d+HK) Frames 3", 0x4cdaf00, 0x4cdaf20, indexCPS2_Shuma, 0 },
    { L"19: LP - Stone Drop (d+HK) Frames 4", 0x4cdaf20, 0x4cdaf40, indexCPS2_Shuma, 0 },
    { L"1a: LP - Stone Drop (d+HK) Frames 5", 0x4cdaf40, 0x4cdaf60, indexCPS2_Shuma, 0 },
    { L"1b: Unused Extra", 0x4cdaf60, 0x4cdaf80 },
    { L"1c: Unused Extra", 0x4cdaf80, 0x4cdafa0 },
    { L"1d: Unused Extra", 0x4cdafa0, 0x4cdafc0 },
    { L"1e: Unused Extra", 0x4cdafc0, 0x4cdafe0 },
    { L"1f: Unused Extra", 0x4cdafe0, 0x4cdb000 },
    { L"20: Unused Extra", 0x4cdb000, 0x4cdb020 },
    { L"21: Unused Extra", 0x4cdb020, 0x4cdb040 },
    { L"22: Unused Extra", 0x4cdb040, 0x4cdb060 },
    { L"23: Unused Extra", 0x4cdb060, 0x4cdb080 },
    { L"24: Unused Extra", 0x4cdb080, 0x4cdb0a0 },
    { L"25: LP - HK grab (don't edit) 1", 0x4cdb0a0, 0x4cdb0c0, indexCPS2_Shuma, 0 },
    { L"26: LP - HK grab (don't edit) 2", 0x4cdb0c0, 0x4cdb0e0, indexCPS2_Shuma, 0 },
    { L"27: LP - HK grab (don't edit) 3", 0x4cdb0e0, 0x4cdb100, indexCPS2_Shuma, 0 },
    { L"28: LP - HK grab (don't edit) 4", 0x4cdb100, 0x4cdb120, indexCPS2_Shuma, 0 },
    { L"29: LP - HK grab (don't edit) 5", 0x4cdb120, 0x4cdb140, indexCPS2_Shuma, 0 },
    { L"2a: LP - HK grab (don't edit) 6", 0x4cdb140, 0x4cdb160, indexCPS2_Shuma, 0 },
    { L"2b: LP - HK grab (don't edit) 7", 0x4cdb160, 0x4cdb180, indexCPS2_Shuma, 0 },
    { L"2c: LP - HK grab (don't edit) 8", 0x4cdb180, 0x4cdb1a0, indexCPS2_Shuma, 0 },
    { L"2d: LP - HK grab (don't edit) 9", 0x4cdb1a0, 0x4cdb1c0, indexCPS2_Shuma, 0 },
    { L"2e: LP - HK grab (don't edit) 10", 0x4cdb1c0, 0x4cdb1e0, indexCPS2_Shuma, 0 },
    { L"2f: LP - HP Flash Frames 1", 0x4cdb1e0, 0x4cdb200, indexCPS2_Shuma, 0 },
    { L"30: LP - HP Flash Frames 2", 0x4cdb200, 0x4cdb220, indexCPS2_Shuma, 0 },
    { L"31: LP - HP Flash Frames 3", 0x4cdb220, 0x4cdb240, indexCPS2_Shuma, 0 },
    { L"32: LP - HP Flash Frames 4", 0x4cdb240, 0x4cdb260, indexCPS2_Shuma, 0 },
    { L"33: LP - HP Flash Frames 5", 0x4cdb260, 0x4cdb280, indexCPS2_Shuma, 0 },
    { L"34: LP - HP Flash Frames 6", 0x4cdb280, 0x4cdb2a0, indexCPS2_Shuma, 0 },
    { L"35: LP - HP Flash Frames 7", 0x4cdb2a0, 0x4cdb2c0, indexCPS2_Shuma, 0 },
    { L"36: LP - Chaos Dimension Frame 1", 0x4cdb2c0, 0x4cdb2e0, indexCPS2_Shuma, 0 },
    { L"37: LP - Chaos Dimension (Dash) Frame 1", 0x4cdb2e0, 0x4cdb300, indexCPS2_Shuma, 0 },
    { L"38: LP - Chaos Dimension Frame 2", 0x4cdb300, 0x4cdb320, indexCPS2_Shuma, 0 },
    { L"39: LP - Chaos Dimension (Dash) Frame 2", 0x4cdb320, 0x4cdb340, indexCPS2_Shuma, 0 },
    { L"3a: LP - Chaos Dimension Frame 3", 0x4cdb340, 0x4cdb360, indexCPS2_Shuma, 0 },
    { L"3b: LP - Chaos Dimension (Dash) Frame 3", 0x4cdb360, 0x4cdb380, indexCPS2_Shuma, 0 },
    { L"3c: LP - Chaos Dimension Frame 4", 0x4cdb380, 0x4cdb3a0, indexCPS2_Shuma, 0 },
    { L"3d: LP - Chaos Dimension (Dash) Frame 4", 0x4cdb3a0, 0x4cdb3c0, indexCPS2_Shuma, 0 },
    { L"3e: LP - Chaos Dimension Frame 5", 0x4cdb3c0, 0x4cdb3e0, indexCPS2_Shuma, 0 },
    { L"3f: LP - Chaos Dimension (Dash) Frame 5", 0x4cdb3e0, 0x4cdb400, indexCPS2_Shuma, 0 },
    { L"40: LP - Mystic Smash Shadows", 0x4cdb400, 0x4cdb420, indexCPS2_Shuma, 0 },
    { L"41: LK - Stance Frame (after FP) 1", 0x4cdb420, 0x4cdb440, indexCPS2_Shuma, 0 },
    { L"42: LK - Stance Frame (after FP) 2", 0x4cdb440, 0x4cdb460, indexCPS2_Shuma, 0 },
    { L"43: LK - Stance Frame (after FP) 3", 0x4cdb460, 0x4cdb480, indexCPS2_Shuma, 0 },
    { L"44: LK - Stance Frame (after FP) 4", 0x4cdb480, 0x4cdb4a0, indexCPS2_Shuma, 0 },
    { L"45: LK - Stance Frame (after FP) 5", 0x4cdb4a0, 0x4cdb4c0, indexCPS2_Shuma, 0 },
    { L"46: LK - Stone Drop (d+HK) Frames 1", 0x4cdb4c0, 0x4cdb4e0, indexCPS2_Shuma, 0 },
    { L"47: LK - Stone Drop (d+HK) Frames 2", 0x4cdb4e0, 0x4cdb500, indexCPS2_Shuma, 0 },
    { L"48: LK - Stone Drop (d+HK) Frames 3", 0x4cdb500, 0x4cdb520, indexCPS2_Shuma, 0 },
    { L"49: LK - Stone Drop (d+HK) Frames 4", 0x4cdb520, 0x4cdb540, indexCPS2_Shuma, 0 },
    { L"4a: LK - Stone Drop (d+HK) Frames 5", 0x4cdb540, 0x4cdb560, indexCPS2_Shuma, 0 },
    { L"4b: Unused Extra", 0x4cdb560, 0x4cdb580 },
    { L"4c: Unused Extra", 0x4cdb580, 0x4cdb5a0 },
    { L"4d: Unused Extra", 0x4cdb5a0, 0x4cdb5c0 },
    { L"4e: Unused Extra", 0x4cdb5c0, 0x4cdb5e0 },
    { L"4f: Unused Extra", 0x4cdb5e0, 0x4cdb600 },
    { L"50: Unused Extra", 0x4cdb600, 0x4cdb620 },
    { L"51: Unused Extra", 0x4cdb620, 0x4cdb640 },
    { L"52: Unused Extra", 0x4cdb640, 0x4cdb660 },
    { L"53: Unused Extra", 0x4cdb660, 0x4cdb680 },
    { L"54: Unused Extra", 0x4cdb680, 0x4cdb6a0 },
    { L"55: LK - HK grab (don't edit) 1", 0x4cdb6a0, 0x4cdb6c0, indexCPS2_Shuma, 0 },
    { L"56: LK - HK grab (don't edit) 2", 0x4cdb6c0, 0x4cdb6e0, indexCPS2_Shuma, 0 },
    { L"57: LK - HK grab (don't edit) 3", 0x4cdb6e0, 0x4cdb700, indexCPS2_Shuma, 0 },
    { L"58: LK - HK grab (don't edit) 4", 0x4cdb700, 0x4cdb720, indexCPS2_Shuma, 0 },
    { L"59: LK - HK grab (don't edit) 5", 0x4cdb720, 0x4cdb740, indexCPS2_Shuma, 0 },
    { L"5a: LK - HK grab (don't edit) 6", 0x4cdb740, 0x4cdb760, indexCPS2_Shuma, 0 },
    { L"5b: LK - HK grab (don't edit) 7", 0x4cdb760, 0x4cdb780, indexCPS2_Shuma, 0 },
    { L"5c: LK - HK grab (don't edit) 8", 0x4cdb780, 0x4cdb7a0, indexCPS2_Shuma, 0 },
    { L"5d: LK - HK grab (don't edit) 9", 0x4cdb7a0, 0x4cdb7c0, indexCPS2_Shuma, 0 },
    { L"5e: LK - HK grab (don't edit) 10", 0x4cdb7c0, 0x4cdb7e0, indexCPS2_Shuma, 0 },
    { L"5f: LK - HP Flash Frames 1", 0x4cdb7e0, 0x4cdb800, indexCPS2_Shuma, 0 },
    { L"60: LK - HP Flash Frames 2", 0x4cdb800, 0x4cdb820, indexCPS2_Shuma, 0 },
    { L"61: LK - HP Flash Frames 3", 0x4cdb820, 0x4cdb840, indexCPS2_Shuma, 0 },
    { L"62: LK - HP Flash Frames 4", 0x4cdb840, 0x4cdb860, indexCPS2_Shuma, 0 },
    { L"63: LK - HP Flash Frames 5", 0x4cdb860, 0x4cdb880, indexCPS2_Shuma, 0 },
    { L"64: LK - HP Flash Frames 6", 0x4cdb880, 0x4cdb8a0, indexCPS2_Shuma, 0 },
    { L"65: LK - HP Flash Frames 7", 0x4cdb8a0, 0x4cdb8c0, indexCPS2_Shuma, 0 },
    { L"66: LK - Chaos Dimension Frame 1", 0x4cdb8c0, 0x4cdb8e0, indexCPS2_Shuma, 0 },
    { L"67: LK - Chaos Dimension (Dash) Frame 1", 0x4cdb8e0, 0x4cdb900, indexCPS2_Shuma, 0 },
    { L"68: LK - Chaos Dimension Frame 2", 0x4cdb900, 0x4cdb920, indexCPS2_Shuma, 0 },
    { L"69: LK - Chaos Dimension (Dash) Frame 2", 0x4cdb920, 0x4cdb940, indexCPS2_Shuma, 0 },
    { L"6a: LK - Chaos Dimension Frame 3", 0x4cdb940, 0x4cdb960, indexCPS2_Shuma, 0 },
    { L"6b: LK - Chaos Dimension (Dash) Frame 3", 0x4cdb960, 0x4cdb980, indexCPS2_Shuma, 0 },
    { L"6c: LK - Chaos Dimension Frame 4", 0x4cdb980, 0x4cdb9a0, indexCPS2_Shuma, 0 },
    { L"6d: LK - Chaos Dimension (Dash) Frame 4", 0x4cdb9a0, 0x4cdb9c0, indexCPS2_Shuma, 0 },
    { L"6e: LK - Chaos Dimension Frame 5", 0x4cdb9c0, 0x4cdb9e0, indexCPS2_Shuma, 0 },
    { L"6f: LK - Chaos Dimension (Dash) Frame 5", 0x4cdb9e0, 0x4cdba00, indexCPS2_Shuma, 0 },
    { L"70: LK - Mystic Smash Shadows", 0x4cdba00, 0x4cdba20, indexCPS2_Shuma, 0 },
    { L"71: HP - Stance Frame (after FP) 1", 0x4cdba20, 0x4cdba40, indexCPS2_Shuma, 0 },
    { L"72: HP - Stance Frame (after FP) 2", 0x4cdba40, 0x4cdba60, indexCPS2_Shuma, 0 },
    { L"73: HP - Stance Frame (after FP) 3", 0x4cdba60, 0x4cdba80, indexCPS2_Shuma, 0 },
    { L"74: HP - Stance Frame (after FP) 4", 0x4cdba80, 0x4cdbaa0, indexCPS2_Shuma, 0 },
    { L"75: HP - Stance Frame (after FP) 5", 0x4cdbaa0, 0x4cdbac0, indexCPS2_Shuma, 0 },
    { L"76: HP - Stone Drop (d+HK) Frames 1", 0x4cdbac0, 0x4cdbae0, indexCPS2_Shuma, 0 },
    { L"77: HP - Stone Drop (d+HK) Frames 2", 0x4cdbae0, 0x4cdbb00, indexCPS2_Shuma, 0 },
    { L"78: HP - Stone Drop (d+HK) Frames 3", 0x4cdbb00, 0x4cdbb20, indexCPS2_Shuma, 0 },
    { L"79: HP - Stone Drop (d+HK) Frames 4", 0x4cdbb20, 0x4cdbb40, indexCPS2_Shuma, 0 },
    { L"7a: HP - Stone Drop (d+HK) Frames 5", 0x4cdbb40, 0x4cdbb60, indexCPS2_Shuma, 0 },
    { L"7b: Unused Extra", 0x4cdbb60, 0x4cdbb80 },
    { L"7c: Unused Extra", 0x4cdbb80, 0x4cdbba0 },
    { L"7d: Unused Extra", 0x4cdbba0, 0x4cdbbc0 },
    { L"7e: Unused Extra", 0x4cdbbc0, 0x4cdbbe0 },
    { L"7f: Unused Extra", 0x4cdbbe0, 0x4cdbc00 },
    { L"80: Unused Extra", 0x4cdbc00, 0x4cdbc20 },
    { L"81: Unused Extra", 0x4cdbc20, 0x4cdbc40 },
    { L"82: Unused Extra", 0x4cdbc40, 0x4cdbc60 },
    { L"83: Unused Extra", 0x4cdbc60, 0x4cdbc80 },
    { L"84: Unused Extra", 0x4cdbc80, 0x4cdbca0 },
    { L"85: HP - HK grab (don't edit) 1", 0x4cdbca0, 0x4cdbcc0, indexCPS2_Shuma, 0 },
    { L"86: HP - HK grab (don't edit) 2", 0x4cdbcc0, 0x4cdbce0, indexCPS2_Shuma, 0 },
    { L"87: HP - HK grab (don't edit) 3", 0x4cdbce0, 0x4cdbd00, indexCPS2_Shuma, 0 },
    { L"88: HP - HK grab (don't edit) 4", 0x4cdbd00, 0x4cdbd20, indexCPS2_Shuma, 0 },
    { L"89: HP - HK grab (don't edit) 5", 0x4cdbd20, 0x4cdbd40, indexCPS2_Shuma, 0 },
    { L"8a: HP - HK grab (don't edit) 6", 0x4cdbd40, 0x4cdbd60, indexCPS2_Shuma, 0 },
    { L"8b: HP - HK grab (don't edit) 7", 0x4cdbd60, 0x4cdbd80, indexCPS2_Shuma, 0 },
    { L"8c: HP - HK grab (don't edit) 8", 0x4cdbd80, 0x4cdbda0, indexCPS2_Shuma, 0 },
    { L"8d: HP - HK grab (don't edit) 9", 0x4cdbda0, 0x4cdbdc0, indexCPS2_Shuma, 0 },
    { L"8e: HP - HK grab (don't edit) 10", 0x4cdbdc0, 0x4cdbde0, indexCPS2_Shuma, 0 },
    { L"8f: HP - HP Flash Frames 1", 0x4cdbde0, 0x4cdbe00, indexCPS2_Shuma, 0 },
    { L"90: HP - HP Flash Frames 2", 0x4cdbe00, 0x4cdbe20, indexCPS2_Shuma, 0 },
    { L"91: HP - HP Flash Frames 3", 0x4cdbe20, 0x4cdbe40, indexCPS2_Shuma, 0 },
    { L"92: HP - HP Flash Frames 4", 0x4cdbe40, 0x4cdbe60, indexCPS2_Shuma, 0 },
    { L"93: HP - HP Flash Frames 5", 0x4cdbe60, 0x4cdbe80, indexCPS2_Shuma, 0 },
    { L"94: HP - HP Flash Frames 6", 0x4cdbe80, 0x4cdbea0, indexCPS2_Shuma, 0 },
    { L"95: HP - HP Flash Frames 7", 0x4cdbea0, 0x4cdbec0, indexCPS2_Shuma, 0 },
    { L"96: HP - Chaos Dimension Frame 1", 0x4cdbec0, 0x4cdbee0, indexCPS2_Shuma, 0 },
    { L"97: HP - Chaos Dimension (Dash) Frame 1", 0x4cdbee0, 0x4cdbf00, indexCPS2_Shuma, 0 },
    { L"98: HP - Chaos Dimension Frame 2", 0x4cdbf00, 0x4cdbf20, indexCPS2_Shuma, 0 },
    { L"99: HP - Chaos Dimension (Dash) Frame 2", 0x4cdbf20, 0x4cdbf40, indexCPS2_Shuma, 0 },
    { L"9a: HP - Chaos Dimension Frame 3", 0x4cdbf40, 0x4cdbf60, indexCPS2_Shuma, 0 },
    { L"9b: HP - Chaos Dimension (Dash) Frame 3", 0x4cdbf60, 0x4cdbf80, indexCPS2_Shuma, 0 },
    { L"9c: HP - Chaos Dimension Frame 4", 0x4cdbf80, 0x4cdbfa0, indexCPS2_Shuma, 0 },
    { L"9d: HP - Chaos Dimension (Dash) Frame 4", 0x4cdbfa0, 0x4cdbfc0, indexCPS2_Shuma, 0 },
    { L"9e: HP - Chaos Dimension Frame 5", 0x4cdbfc0, 0x4cdbfe0, indexCPS2_Shuma, 0 },
    { L"9f: HP - Chaos Dimension (Dash) Frame 5", 0x4cdbfe0, 0x4cdc000, indexCPS2_Shuma, 0 },
    { L"a0: HP - Mystic Smash Shadows", 0x4cdc000, 0x4cdc020, indexCPS2_Shuma, 0 },
    { L"a1: HK - Stance Frame (after FP) 1", 0x4cdc020, 0x4cdc040, indexCPS2_Shuma, 0 },
    { L"a2: HK - Stance Frame (after FP) 2", 0x4cdc040, 0x4cdc060, indexCPS2_Shuma, 0 },
    { L"a3: HK - Stance Frame (after FP) 3", 0x4cdc060, 0x4cdc080, indexCPS2_Shuma, 0 },
    { L"a4: HK - Stance Frame (after FP) 4", 0x4cdc080, 0x4cdc0a0, indexCPS2_Shuma, 0 },
    { L"a5: HK - Stance Frame (after FP) 5", 0x4cdc0a0, 0x4cdc0c0, indexCPS2_Shuma, 0 },
    { L"a6: HK - Stone Drop (d+HK) Frames 1", 0x4cdc0c0, 0x4cdc0e0, indexCPS2_Shuma, 0 },
    { L"a7: HK - Stone Drop (d+HK) Frames 2", 0x4cdc0e0, 0x4cdc100, indexCPS2_Shuma, 0 },
    { L"a8: HK - Stone Drop (d+HK) Frames 3", 0x4cdc100, 0x4cdc120, indexCPS2_Shuma, 0 },
    { L"a9: HK - Stone Drop (d+HK) Frames 4", 0x4cdc120, 0x4cdc140, indexCPS2_Shuma, 0 },
    { L"aa: HK - Stone Drop (d+HK) Frames 5", 0x4cdc140, 0x4cdc160, indexCPS2_Shuma, 0 },
    { L"ab: Unused Extra", 0x4cdc160, 0x4cdc180 },
    { L"ac: Unused Extra", 0x4cdc180, 0x4cdc1a0 },
    { L"ad: Unused Extra", 0x4cdc1a0, 0x4cdc1c0 },
    { L"ae: Unused Extra", 0x4cdc1c0, 0x4cdc1e0 },
    { L"af: Unused Extra", 0x4cdc1e0, 0x4cdc200 },
    { L"b0: Unused Extra", 0x4cdc200, 0x4cdc220 },
    { L"b1: Unused Extra", 0x4cdc220, 0x4cdc240 },
    { L"b2: Unused Extra", 0x4cdc240, 0x4cdc260 },
    { L"b3: Unused Extra", 0x4cdc260, 0x4cdc280 },
    { L"b4: Unused Extra", 0x4cdc280, 0x4cdc2a0 },
    { L"b5: HK - HK grab (don't edit) 1", 0x4cdc2a0, 0x4cdc2c0, indexCPS2_Shuma, 0 },
    { L"b6: HK - HK grab (don't edit) 2", 0x4cdc2c0, 0x4cdc2e0, indexCPS2_Shuma, 0 },
    { L"b7: HK - HK grab (don't edit) 3", 0x4cdc2e0, 0x4cdc300, indexCPS2_Shuma, 0 },
    { L"b8: HK - HK grab (don't edit) 4", 0x4cdc300, 0x4cdc320, indexCPS2_Shuma, 0 },
    { L"b9: HK - HK grab (don't edit) 5", 0x4cdc320, 0x4cdc340, indexCPS2_Shuma, 0 },
    { L"ba: HK - HK grab (don't edit) 6", 0x4cdc340, 0x4cdc360, indexCPS2_Shuma, 0 },
    { L"bb: HK - HK grab (don't edit) 7", 0x4cdc360, 0x4cdc380, indexCPS2_Shuma, 0 },
    { L"bc: HK - HK grab (don't edit) 8", 0x4cdc380, 0x4cdc3a0, indexCPS2_Shuma, 0 },
    { L"bd: HK - HK grab (don't edit) 9", 0x4cdc3a0, 0x4cdc3c0, indexCPS2_Shuma, 0 },
    { L"be: HK - HK grab (don't edit) 10", 0x4cdc3c0, 0x4cdc3e0, indexCPS2_Shuma, 0 },
    { L"bf: HK - HP Flash Frames 1", 0x4cdc3e0, 0x4cdc400, indexCPS2_Shuma, 0 },
    { L"c0: HK - HP Flash Frames 2", 0x4cdc400, 0x4cdc420, indexCPS2_Shuma, 0 },
    { L"c1: HK - HP Flash Frames 3", 0x4cdc420, 0x4cdc440, indexCPS2_Shuma, 0 },
    { L"c2: HK - HP Flash Frames 4", 0x4cdc440, 0x4cdc460, indexCPS2_Shuma, 0 },
    { L"c3: HK - HP Flash Frames 5", 0x4cdc460, 0x4cdc480, indexCPS2_Shuma, 0 },
    { L"c4: HK - HP Flash Frames 6", 0x4cdc480, 0x4cdc4a0, indexCPS2_Shuma, 0 },
    { L"c5: HK - HP Flash Frames 7", 0x4cdc4a0, 0x4cdc4c0, indexCPS2_Shuma, 0 },
    { L"c6: HK - Chaos Dimension Frame 1", 0x4cdc4c0, 0x4cdc4e0, indexCPS2_Shuma, 0 },
    { L"c7: HK - Chaos Dimension (Dash) Frame 1", 0x4cdc4e0, 0x4cdc500, indexCPS2_Shuma, 0 },
    { L"c8: HK - Chaos Dimension Frame 2", 0x4cdc500, 0x4cdc520, indexCPS2_Shuma, 0 },
    { L"c9: HK - Chaos Dimension (Dash) Frame 2", 0x4cdc520, 0x4cdc540, indexCPS2_Shuma, 0 },
    { L"ca: HK - Chaos Dimension Frame 3", 0x4cdc540, 0x4cdc560, indexCPS2_Shuma, 0 },
    { L"cb: HK - Chaos Dimension (Dash) Frame 3", 0x4cdc560, 0x4cdc580, indexCPS2_Shuma, 0 },
    { L"cc: HK - Chaos Dimension Frame 4", 0x4cdc580, 0x4cdc5a0, indexCPS2_Shuma, 0 },
    { L"cd: HK - Chaos Dimension (Dash) Frame 4", 0x4cdc5a0, 0x4cdc5c0, indexCPS2_Shuma, 0 },
    { L"ce: HK - Chaos Dimension Frame 5", 0x4cdc5c0, 0x4cdc5e0, indexCPS2_Shuma, 0 },
    { L"cf: HK - Chaos Dimension (Dash) Frame 5", 0x4cdc5e0, 0x4cdc600, indexCPS2_Shuma, 0 },
    { L"d0: HK - Mystic Smash Shadows", 0x4cdc600, 0x4cdc620, indexCPS2_Shuma, 0 },
    { L"d1: A1 - Stance Frame (after FP) 1", 0x4cdc620, 0x4cdc640, indexCPS2_Shuma, 0 },
    { L"d2: A1 - Stance Frame (after FP) 2", 0x4cdc640, 0x4cdc660, indexCPS2_Shuma, 0 },
    { L"d3: A1 - Stance Frame (after FP) 3", 0x4cdc660, 0x4cdc680, indexCPS2_Shuma, 0 },
    { L"d4: A1 - Stance Frame (after FP) 4", 0x4cdc680, 0x4cdc6a0, indexCPS2_Shuma, 0 },
    { L"d5: A1 - Stance Frame (after FP) 5", 0x4cdc6a0, 0x4cdc6c0, indexCPS2_Shuma, 0 },
    { L"d6: A1 - Stone Drop (d+HK) Frames 1", 0x4cdc6c0, 0x4cdc6e0, indexCPS2_Shuma, 0 },
    { L"d7: A1 - Stone Drop (d+HK) Frames 2", 0x4cdc6e0, 0x4cdc700, indexCPS2_Shuma, 0 },
    { L"d8: A1 - Stone Drop (d+HK) Frames 3", 0x4cdc700, 0x4cdc720, indexCPS2_Shuma, 0 },
    { L"d9: A1 - Stone Drop (d+HK) Frames 4", 0x4cdc720, 0x4cdc740, indexCPS2_Shuma, 0 },
    { L"da: A1 - Stone Drop (d+HK) Frames 5", 0x4cdc740, 0x4cdc760, indexCPS2_Shuma, 0 },
    { L"db: Unused Extra", 0x4cdc760, 0x4cdc780 },
    { L"dc: Unused Extra", 0x4cdc780, 0x4cdc7a0 },
    { L"dd: Unused Extra", 0x4cdc7a0, 0x4cdc7c0 },
    { L"de: Unused Extra", 0x4cdc7c0, 0x4cdc7e0 },
    { L"df: Unused Extra", 0x4cdc7e0, 0x4cdc800 },
    { L"e0: Unused Extra", 0x4cdc800, 0x4cdc820 },
    { L"e1: Unused Extra", 0x4cdc820, 0x4cdc840 },
    { L"e2: Unused Extra", 0x4cdc840, 0x4cdc860 },
    { L"e3: Unused Extra", 0x4cdc860, 0x4cdc880 },
    { L"e4: Unused Extra", 0x4cdc880, 0x4cdc8a0 },
    { L"e5: A1 - HK grab (don't edit) 1", 0x4cdc8a0, 0x4cdc8c0, indexCPS2_Shuma, 0 },
    { L"e6: A1 - HK grab (don't edit) 2", 0x4cdc8c0, 0x4cdc8e0, indexCPS2_Shuma, 0 },
    { L"e7: A1 - HK grab (don't edit) 3", 0x4cdc8e0, 0x4cdc900, indexCPS2_Shuma, 0 },
    { L"e8: A1 - HK grab (don't edit) 4", 0x4cdc900, 0x4cdc920, indexCPS2_Shuma, 0 },
    { L"e9: A1 - HK grab (don't edit) 5", 0x4cdc920, 0x4cdc940, indexCPS2_Shuma, 0 },
    { L"ea: A1 - HK grab (don't edit) 6", 0x4cdc940, 0x4cdc960, indexCPS2_Shuma, 0 },
    { L"eb: A1 - HK grab (don't edit) 7", 0x4cdc960, 0x4cdc980, indexCPS2_Shuma, 0 },
    { L"ec: A1 - HK grab (don't edit) 8", 0x4cdc980, 0x4cdc9a0, indexCPS2_Shuma, 0 },
    { L"ed: A1 - HK grab (don't edit) 9", 0x4cdc9a0, 0x4cdc9c0, indexCPS2_Shuma, 0 },
    { L"ee: A1 - HK grab (don't edit) 10", 0x4cdc9c0, 0x4cdc9e0, indexCPS2_Shuma, 0 },
    { L"ef: A1 - HP Flash Frames 1", 0x4cdc9e0, 0x4cdca00, indexCPS2_Shuma, 0 },
    { L"f0: A1 - HP Flash Frames 2", 0x4cdca00, 0x4cdca20, indexCPS2_Shuma, 0 },
    { L"f1: A1 - HP Flash Frames 3", 0x4cdca20, 0x4cdca40, indexCPS2_Shuma, 0 },
    { L"f2: A1 - HP Flash Frames 4", 0x4cdca40, 0x4cdca60, indexCPS2_Shuma, 0 },
    { L"f3: A1 - HP Flash Frames 5", 0x4cdca60, 0x4cdca80, indexCPS2_Shuma, 0 },
    { L"f4: A1 - HP Flash Frames 6", 0x4cdca80, 0x4cdcaa0, indexCPS2_Shuma, 0 },
    { L"f5: A1 - HP Flash Frames 7", 0x4cdcaa0, 0x4cdcac0, indexCPS2_Shuma, 0 },
    { L"f6: A1 - Chaos Dimension Frame 1", 0x4cdcac0, 0x4cdcae0, indexCPS2_Shuma, 0 },
    { L"f7: A1 - Chaos Dimension (Dash) Frame 1", 0x4cdcae0, 0x4cdcb00, indexCPS2_Shuma, 0 },
    { L"f8: A1 - Chaos Dimension Frame 2", 0x4cdcb00, 0x4cdcb20, indexCPS2_Shuma, 0 },
    { L"f9: A1 - Chaos Dimension (Dash) Frame 2", 0x4cdcb20, 0x4cdcb40, indexCPS2_Shuma, 0 },
    { L"fa: A1 - Chaos Dimension Frame 3", 0x4cdcb40, 0x4cdcb60, indexCPS2_Shuma, 0 },
    { L"fb: A1 - Chaos Dimension (Dash) Frame 3", 0x4cdcb60, 0x4cdcb80, indexCPS2_Shuma, 0 },
    { L"fc: A1 - Chaos Dimension Frame 4", 0x4cdcb80, 0x4cdcba0, indexCPS2_Shuma, 0 },
    { L"fd: A1 - Chaos Dimension (Dash) Frame 4", 0x4cdcba0, 0x4cdcbc0, indexCPS2_Shuma, 0 },
    { L"fe: A1 - Chaos Dimension Frame 5", 0x4cdcbc0, 0x4cdcbe0, indexCPS2_Shuma, 0 },
    { L"ff: A1 - Chaos Dimension (Dash) Frame 5", 0x4cdcbe0, 0x4cdcc00, indexCPS2_Shuma, 0 },
    { L"100: A1 - Mystic Smash Shadows", 0x4cdcc00, 0x4cdcc20, indexCPS2_Shuma, 0 },
    { L"101: A2 - Stance Frame (after FP) 1", 0x4cdcc20, 0x4cdcc40, indexCPS2_Shuma, 0 },
    { L"102: A2 - Stance Frame (after FP) 2", 0x4cdcc40, 0x4cdcc60, indexCPS2_Shuma, 0 },
    { L"103: A2 - Stance Frame (after FP) 3", 0x4cdcc60, 0x4cdcc80, indexCPS2_Shuma, 0 },
    { L"104: A2 - Stance Frame (after FP) 4", 0x4cdcc80, 0x4cdcca0, indexCPS2_Shuma, 0 },
    { L"105: A2 - Stance Frame (after FP) 5", 0x4cdcca0, 0x4cdccc0, indexCPS2_Shuma, 0 },
    { L"106: A2 - Stone Drop (d+HK) Frames 1", 0x4cdccc0, 0x4cdcce0, indexCPS2_Shuma, 0 },
    { L"107: A2 - Stone Drop (d+HK) Frames 2", 0x4cdcce0, 0x4cdcd00, indexCPS2_Shuma, 0 },
    { L"108: A2 - Stone Drop (d+HK) Frames 3", 0x4cdcd00, 0x4cdcd20, indexCPS2_Shuma, 0 },
    { L"109: A2 - Stone Drop (d+HK) Frames 4", 0x4cdcd20, 0x4cdcd40, indexCPS2_Shuma, 0 },
    { L"10a: A2 - Stone Drop (d+HK) Frames 5", 0x4cdcd40, 0x4cdcd60, indexCPS2_Shuma, 0 },
    { L"10b: Unused Extra", 0x4cdcd60, 0x4cdcd80 },
    { L"10c: Unused Extra", 0x4cdcd80, 0x4cdcda0 },
    { L"10d: Unused Extra", 0x4cdcda0, 0x4cdcdc0 },
    { L"10e: Unused Extra", 0x4cdcdc0, 0x4cdcde0 },
    { L"10f: Unused Extra", 0x4cdcde0, 0x4cdce00 },
    { L"110: Unused Extra", 0x4cdce00, 0x4cdce20 },
    { L"111: Unused Extra", 0x4cdce20, 0x4cdce40 },
    { L"112: Unused Extra", 0x4cdce40, 0x4cdce60 },
    { L"113: Unused Extra", 0x4cdce60, 0x4cdce80 },
    { L"114: Unused Extra", 0x4cdce80, 0x4cdcea0 },
    { L"115: A2 - HK grab (don't edit) 1", 0x4cdcea0, 0x4cdcec0, indexCPS2_Shuma, 0 },
    { L"116: A2 - HK grab (don't edit) 2", 0x4cdcec0, 0x4cdcee0, indexCPS2_Shuma, 0 },
    { L"117: A2 - HK grab (don't edit) 3", 0x4cdcee0, 0x4cdcf00, indexCPS2_Shuma, 0 },
    { L"118: A2 - HK grab (don't edit) 4", 0x4cdcf00, 0x4cdcf20, indexCPS2_Shuma, 0 },
    { L"119: A2 - HK grab (don't edit) 5", 0x4cdcf20, 0x4cdcf40, indexCPS2_Shuma, 0 },
    { L"11a: A2 - HK grab (don't edit) 6", 0x4cdcf40, 0x4cdcf60, indexCPS2_Shuma, 0 },
    { L"11b: A2 - HK grab (don't edit) 7", 0x4cdcf60, 0x4cdcf80, indexCPS2_Shuma, 0 },
    { L"11c: A2 - HK grab (don't edit) 8", 0x4cdcf80, 0x4cdcfa0, indexCPS2_Shuma, 0 },
    { L"11d: A2 - HK grab (don't edit) 9", 0x4cdcfa0, 0x4cdcfc0, indexCPS2_Shuma, 0 },
    { L"11e: A2 - HK grab (don't edit) 10", 0x4cdcfc0, 0x4cdcfe0, indexCPS2_Shuma, 0 },
    { L"11f: A2 - HP Flash Frames 1", 0x4cdcfe0, 0x4cdd000, indexCPS2_Shuma, 0 },
    { L"120: A2 - HP Flash Frames 2", 0x4cdd000, 0x4cdd020, indexCPS2_Shuma, 0 },
    { L"121: A2 - HP Flash Frames 3", 0x4cdd020, 0x4cdd040, indexCPS2_Shuma, 0 },
    { L"122: A2 - HP Flash Frames 4", 0x4cdd040, 0x4cdd060, indexCPS2_Shuma, 0 },
    { L"123: A2 - HP Flash Frames 5", 0x4cdd060, 0x4cdd080, indexCPS2_Shuma, 0 },
    { L"124: A2 - HP Flash Frames 6", 0x4cdd080, 0x4cdd0a0, indexCPS2_Shuma, 0 },
    { L"125: A2 - HP Flash Frames 7", 0x4cdd0a0, 0x4cdd0c0, indexCPS2_Shuma, 0 },
    { L"126: A2 - Chaos Dimension Frame 1", 0x4cdd0c0, 0x4cdd0e0, indexCPS2_Shuma, 0 },
    { L"127: A2 - Chaos Dimension (Dash) Frame 1", 0x4cdd0e0, 0x4cdd100, indexCPS2_Shuma, 0 },
    { L"128: A2 - Chaos Dimension Frame 2", 0x4cdd100, 0x4cdd120, indexCPS2_Shuma, 0 },
    { L"129: A2 - Chaos Dimension (Dash) Frame 2", 0x4cdd120, 0x4cdd140, indexCPS2_Shuma, 0 },
    { L"12a: A2 - Chaos Dimension Frame 3", 0x4cdd140, 0x4cdd160, indexCPS2_Shuma, 0 },
    { L"12b: A2 - Chaos Dimension (Dash) Frame 3", 0x4cdd160, 0x4cdd180, indexCPS2_Shuma, 0 },
    { L"12c: A2 - Chaos Dimension Frame 4", 0x4cdd180, 0x4cdd1a0, indexCPS2_Shuma, 0 },
    { L"12d: A2 - Chaos Dimension (Dash) Frame 4", 0x4cdd1a0, 0x4cdd1c0, indexCPS2_Shuma, 0 },
    { L"12e: A2 - Chaos Dimension Frame 5", 0x4cdd1c0, 0x4cdd1e0, indexCPS2_Shuma, 0 },
    { L"12f: A2 - Chaos Dimension (Dash) Frame 5", 0x4cdd1e0, 0x4cdd200, indexCPS2_Shuma, 0 },
    { L"130: A2 - Mystic Smash Shadows", 0x4cdd200, 0x4cdd220, indexCPS2_Shuma, 0 },
};

const sDescTreeNode MVC2_A_SHUMA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_LP, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_LK, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_HP, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_HK, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_A1, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_A2, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SHUMA_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4ddab80, 0x4ddaba0, indexCPS2_WarMachine, 0 },
    { L"(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddaba0, 0x4ddabc0, indexCPS2_WarMachine, 1 },
    { L"(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddabc0, 0x4ddabe0, indexCPS2_WarMachine, 2 },
    { L"(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddabe0, 0x4ddac00, indexCPS2_WarMachine, 3 },
    { L"(05) Not Used", 0x4ddac00, 0x4ddac20, indexCPS2_WarMachine, 4 },
    { L"(06) Not Used", 0x4ddac20, 0x4ddac40, indexCPS2_WarMachine, 5 },
    { L"(07) Not Used", 0x4ddac40, 0x4ddac60, indexCPS2_WarMachine, 6 },
    { L"(08) Not Used", 0x4ddac60, 0x4ddac80, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4ddac80, 0x4ddaca0, indexCPS2_WarMachine, 0 },
    { L"(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddaca0, 0x4ddacc0, indexCPS2_WarMachine, 1 },
    { L"(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddacc0, 0x4ddace0, indexCPS2_WarMachine, 2 },
    { L"(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddace0, 0x4ddad00, indexCPS2_WarMachine, 3 },
    { L"(05) Not Used", 0x4ddad00, 0x4ddad20, indexCPS2_WarMachine, 4 },
    { L"(06) Not Used", 0x4ddad20, 0x4ddad40, indexCPS2_WarMachine, 5 },
    { L"(07) Not Used", 0x4ddad40, 0x4ddad60, indexCPS2_WarMachine, 6 },
    { L"(08) Not Used", 0x4ddad60, 0x4ddad80, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4ddad80, 0x4ddada0, indexCPS2_WarMachine, 0 },
    { L"(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddada0, 0x4ddadc0, indexCPS2_WarMachine, 1 },
    { L"(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddadc0, 0x4ddade0, indexCPS2_WarMachine, 2 },
    { L"(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddade0, 0x4ddae00, indexCPS2_WarMachine, 3 },
    { L"(05) Not Used", 0x4ddae00, 0x4ddae20, indexCPS2_WarMachine, 4 },
    { L"(06) Not Used", 0x4ddae20, 0x4ddae40, indexCPS2_WarMachine, 5 },
    { L"(07) Not Used", 0x4ddae40, 0x4ddae60, indexCPS2_WarMachine, 6 },
    { L"(08) Not Used", 0x4ddae60, 0x4ddae80, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4ddae80, 0x4ddaea0, indexCPS2_WarMachine, 0 },
    { L"(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddaea0, 0x4ddaec0, indexCPS2_WarMachine, 1 },
    { L"(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddaec0, 0x4ddaee0, indexCPS2_WarMachine, 2 },
    { L"(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddaee0, 0x4ddaf00, indexCPS2_WarMachine, 3 },
    { L"(05) Not Used", 0x4ddaf00, 0x4ddaf20, indexCPS2_WarMachine, 4 },
    { L"(06) Not Used", 0x4ddaf20, 0x4ddaf40, indexCPS2_WarMachine, 5 },
    { L"(07) Not Used", 0x4ddaf40, 0x4ddaf60, indexCPS2_WarMachine, 6 },
    { L"(08) Not Used", 0x4ddaf60, 0x4ddaf80, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4ddaf80, 0x4ddafa0, indexCPS2_WarMachine, 0 },
    { L"(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddafa0, 0x4ddafc0, indexCPS2_WarMachine, 1 },
    { L"(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddafc0, 0x4ddafe0, indexCPS2_WarMachine, 2 },
    { L"(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddafe0, 0x4ddb000, indexCPS2_WarMachine, 3 },
    { L"(05) Not Used", 0x4ddb000, 0x4ddb020, indexCPS2_WarMachine, 4 },
    { L"(06) Not Used", 0x4ddb020, 0x4ddb040, indexCPS2_WarMachine, 5 },
    { L"(07) Not Used", 0x4ddb040, 0x4ddb060, indexCPS2_WarMachine, 6 },
    { L"(08) Not Used", 0x4ddb060, 0x4ddb080, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4ddb080, 0x4ddb0a0, indexCPS2_WarMachine, 0 },
    { L"(02) ID:01-08 Proton Cannon ID:09-15 Rocket (Flame)", 0x4ddb0a0, 0x4ddb0c0, indexCPS2_WarMachine, 1 },
    { L"(03) ID:01-08 HP, s.HK, c.HP, Repulsor Blast, s.MK / Smart Bombs (Frame 1) || ID:09-15: Proton Cannon (appearance) / Smart Bombs (Frame 2)", 0x4ddb0c0, 0x4ddb0e0, indexCPS2_WarMachine, 2 },
    { L"(04) ID:01-08 Smart Bomb (burst) ID:09-15 Not Used", 0x4ddb0e0, 0x4ddb100, indexCPS2_WarMachine, 3 },
    { L"(05) Not Used", 0x4ddb100, 0x4ddb120, indexCPS2_WarMachine, 4 },
    { L"(06) Not Used", 0x4ddb120, 0x4ddb140, indexCPS2_WarMachine, 5 },
    { L"(07) Not Used", 0x4ddb140, 0x4ddb160, indexCPS2_WarMachine, 6 },
    { L"(08) Not Used", 0x4ddb160, 0x4ddb180, indexCPS2_WarMachine, 7 },
};

const sGame_PaletteDataset MVC2_A_WARMACHINE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4ddb180, 0x4ddb1a0, indexCPS2_WarMachine, 0 },
    { L"Burning Light", 0x4ddb1a0, 0x4ddb1c0, indexCPS2_WarMachine, 0 },
    { L"Shocked Dark", 0x4ddb1c0, 0x4ddb1e0, indexCPS2_WarMachine, 0 },
    { L"Shocked Light", 0x4ddb1e0, 0x4ddb200, indexCPS2_WarMachine, 0 },
    { L"Dark Burning Dark", 0x4ddb200, 0x4ddb220, indexCPS2_WarMachine, 0 },
    { L"Dark Burning Light", 0x4ddb220, 0x4ddb240, indexCPS2_WarMachine, 0 },
    { L"Kinetic Charge Dark", 0x4ddb240, 0x4ddb260, indexCPS2_WarMachine, 0 },
    { L"Kinetic Charge Light", 0x4ddb260, 0x4ddb280, indexCPS2_WarMachine, 0 },
};

const sDescTreeNode MVC2_A_WARMACHINE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_LP, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_LK, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_HP, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_HK, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_A1, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_A2, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_WARMACHINE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4ef6120, 0x4ef6140, indexCPS2_SilverSamurai, 0 },
    { L"(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6140, 0x4ef6160, indexCPS2_SilverSamurai, 0 },
    { L"(03) Shuriken / Slash", 0x4ef6160, 0x4ef6180, indexCPS2_SilverSamurai, 2 },
    { L"(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6180, 0x4ef61a0, indexCPS2_SilverSamurai, 3 },
    { L"(05) Thunder Effect (sword)", 0x4ef61a0, 0x4ef61c0, indexCPS2_SilverSamurai, 4 },
    { L"(06) Ice Effect (sword)", 0x4ef61c0, 0x4ef61e0, indexCPS2_SilverSamurai, 5 },
    { L"(07) Not Used", 0x4ef61e0, 0x4ef6200, indexCPS2_SilverSamurai, 0 },
    { L"(08) Icicle", 0x4ef6200, 0x4ef6220, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4ef6220, 0x4ef6240, indexCPS2_SilverSamurai, 0 },
    { L"(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6240, 0x4ef6260, indexCPS2_SilverSamurai, 0 },
    { L"(03) Shuriken / Slash", 0x4ef6260, 0x4ef6280, indexCPS2_SilverSamurai, 2 },
    { L"(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6280, 0x4ef62a0, indexCPS2_SilverSamurai, 3 },
    { L"(05) Thunder Effect (sword)", 0x4ef62a0, 0x4ef62c0, indexCPS2_SilverSamurai, 4 },
    { L"(06) Ice Effect (sword)", 0x4ef62c0, 0x4ef62e0, indexCPS2_SilverSamurai, 5 },
    { L"(07) Not Used", 0x4ef62e0, 0x4ef6300, indexCPS2_SilverSamurai, 0 },
    { L"(08) Icicle", 0x4ef6300, 0x4ef6320, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4ef6320, 0x4ef6340, indexCPS2_SilverSamurai, 0 },
    { L"(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6340, 0x4ef6360, indexCPS2_SilverSamurai, 0 },
    { L"(03) Shuriken / Slash", 0x4ef6360, 0x4ef6380, indexCPS2_SilverSamurai, 2 },
    { L"(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6380, 0x4ef63a0, indexCPS2_SilverSamurai, 3 },
    { L"(05) Thunder Effect (sword)", 0x4ef63a0, 0x4ef63c0, indexCPS2_SilverSamurai, 4 },
    { L"(06) Ice Effect (sword)", 0x4ef63c0, 0x4ef63e0, indexCPS2_SilverSamurai, 5 },
    { L"(07) Not Used", 0x4ef63e0, 0x4ef6400, indexCPS2_SilverSamurai, 0 },
    { L"(08) Icicle", 0x4ef6400, 0x4ef6420, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4ef6420, 0x4ef6440, indexCPS2_SilverSamurai, 0 },
    { L"(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6440, 0x4ef6460, indexCPS2_SilverSamurai, 0 },
    { L"(03) Shuriken / Slash", 0x4ef6460, 0x4ef6480, indexCPS2_SilverSamurai, 2 },
    { L"(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6480, 0x4ef64a0, indexCPS2_SilverSamurai, 3 },
    { L"(05) Thunder Effect (sword)", 0x4ef64a0, 0x4ef64c0, indexCPS2_SilverSamurai, 4 },
    { L"(06) Ice Effect (sword)", 0x4ef64c0, 0x4ef64e0, indexCPS2_SilverSamurai, 5 },
    { L"(07) Not Used", 0x4ef64e0, 0x4ef6500, indexCPS2_SilverSamurai, 0 },
    { L"(08) Icicle", 0x4ef6500, 0x4ef6520, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4ef6520, 0x4ef6540, indexCPS2_SilverSamurai, 0 },
    { L"(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6540, 0x4ef6560, indexCPS2_SilverSamurai, 0 },
    { L"(03) Shuriken / Slash", 0x4ef6560, 0x4ef6580, indexCPS2_SilverSamurai, 2 },
    { L"(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6580, 0x4ef65a0, indexCPS2_SilverSamurai, 3 },
    { L"(05) Thunder Effect (sword)", 0x4ef65a0, 0x4ef65c0, indexCPS2_SilverSamurai, 4 },
    { L"(06) Ice Effect (sword)", 0x4ef65c0, 0x4ef65e0, indexCPS2_SilverSamurai, 5 },
    { L"(07) Not Used", 0x4ef65e0, 0x4ef6600, indexCPS2_SilverSamurai, 0 },
    { L"(08) Icicle", 0x4ef6600, 0x4ef6620, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4ef6620, 0x4ef6640, indexCPS2_SilverSamurai, 0 },
    { L"(02) LP Color - Shadow Frame LP Color + Lumin-5", 0x4ef6640, 0x4ef6660, indexCPS2_SilverSamurai, 0 },
    { L"(03) Shuriken / Slash", 0x4ef6660, 0x4ef6680, indexCPS2_SilverSamurai, 2 },
    { L"(04) Fire Effect (Sword) / Lightning Super / Shuriken (hand shadow)", 0x4ef6680, 0x4ef66a0, indexCPS2_SilverSamurai, 3 },
    { L"(05) Thunder Effect (sword)", 0x4ef66a0, 0x4ef66c0, indexCPS2_SilverSamurai, 4 },
    { L"(06) Ice Effect (sword)", 0x4ef66c0, 0x4ef66e0, indexCPS2_SilverSamurai, 5 },
    { L"(07) Not Used", 0x4ef66e0, 0x4ef6700, indexCPS2_SilverSamurai, 0 },
    { L"(08) Icicle", 0x4ef6700, 0x4ef6720, indexCPS2_SilverSamurai, 7 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4ef6720, 0x4ef6740, indexCPS2_SilverSamurai, 0 },
    { L"Burning Light", 0x4ef6740, 0x4ef6760, indexCPS2_SilverSamurai, 0 },
    { L"Shocked Dark", 0x4ef6760, 0x4ef6780, indexCPS2_SilverSamurai, 0 },
    { L"Shocked Light", 0x4ef6780, 0x4ef67a0, indexCPS2_SilverSamurai, 0 },
    { L"Dark Burning Dark", 0x4ef67a0, 0x4ef67c0, indexCPS2_SilverSamurai, 0 },
    { L"Dark Burning Light", 0x4ef67c0, 0x4ef67e0, indexCPS2_SilverSamurai, 0 },
    { L"Kinetic Charge Dark", 0x4ef67e0, 0x4ef6800, indexCPS2_SilverSamurai, 0 },
    { L"Kinetic Charge Light", 0x4ef6800, 0x4ef6820, indexCPS2_SilverSamurai, 0 },
};

const sGame_PaletteDataset MVC2_A_SILVERSAMURAI_PALETTES_EXTRAS[] =
{
    { L"09: LP - Shine Frame 1 LP Color", 0x4ef6820, 0x4ef6840, indexCPS2_SilverSamurai, 0 },
    { L"0a: LP - Shine Frame 2 LP Color + (ID: 08-15 + lumin-10)", 0x4ef6840, 0x4ef6860, indexCPS2_SilverSamurai, 0 },
    { L"0b: LP - Shine Frame 3 LP Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6860, 0x4ef6880, indexCPS2_SilverSamurai, 0 },
    { L"0c: LP - Shine Frame 4 LP Color + (copy ID:08,09,10 from original to ID:10,13,14)", 0x4ef6880, 0x4ef68a0, indexCPS2_SilverSamurai, 0 },
    { L"0d: LP - Shine Frame 5 LP Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef68a0, 0x4ef68c0, indexCPS2_SilverSamurai, 0 },
    { L"0e: LP - Shine Frame 6 LP Color", 0x4ef68c0, 0x4ef68e0, indexCPS2_SilverSamurai, 0 },
    { L"0f: LP - Shine Frame 7 LP Color + Lumin-5", 0x4ef68e0, 0x4ef6900, indexCPS2_SilverSamurai, 0 },
    { L"10: Separator", 0x4ef6900, 0x4ef6920 },
    { L"11: LK - Shine Frame 1 LK Color", 0x4ef6920, 0x4ef6940, indexCPS2_SilverSamurai, 0 },
    { L"12: LK - Shine Frame 2 LK Color + (ID: 08-15 + lumin-10)", 0x4ef6940, 0x4ef6960, indexCPS2_SilverSamurai, 0 },
    { L"13: LK - Shine Frame 3 LK Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6960, 0x4ef6980, indexCPS2_SilverSamurai, 0 },
    { L"14: LK - Shine Frame 4 LK Color + (copy ID:08,09,10 from original to ID:10,13,14)", 0x4ef6980, 0x4ef69a0, indexCPS2_SilverSamurai, 0 },
    { L"15: LK - Shine Frame 5 LK Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef69a0, 0x4ef69c0, indexCPS2_SilverSamurai, 0 },
    { L"16: LK - Shine Frame 6 LK Color", 0x4ef69c0, 0x4ef69e0, indexCPS2_SilverSamurai, 0 },
    { L"17: LK - Shine Frame 7 LK Color + Lumin-5", 0x4ef69e0, 0x4ef6a00, indexCPS2_SilverSamurai, 0 },
    { L"18: Separator", 0x4ef6a00, 0x4ef6a20 },
    { L"19: HP - Shine Frame 1 HP Color", 0x4ef6a20, 0x4ef6a40, indexCPS2_SilverSamurai, 0 },
    { L"1a: HP - Shine Frame 2 HP Color + (ID: 08-15 + lumin-10)", 0x4ef6a40, 0x4ef6a60, indexCPS2_SilverSamurai, 0 },
    { L"1b: HP - Shine Frame 3 HP Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6a60, 0x4ef6a80, indexCPS2_SilverSamurai, 0 },
    { L"1c: HP - Shine Frame 4 HP Color + (copy ID:08,09,10 from original to ID:10,13,14)", 0x4ef6a80, 0x4ef6aa0, indexCPS2_SilverSamurai, 0 },
    { L"1d: HP - Shine Frame 5 HP Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6aa0, 0x4ef6ac0, indexCPS2_SilverSamurai, 0 },
    { L"1e: HP - Shine Frame 6 HP Color", 0x4ef6ac0, 0x4ef6ae0, indexCPS2_SilverSamurai, 0 },
    { L"1f: HP - Shine Frame 7 HP Color + Lumin-5", 0x4ef6ae0, 0x4ef6b00, indexCPS2_SilverSamurai, 0 },
    { L"20: Separator", 0x4ef6b00, 0x4ef6b20 },
    { L"21: HK - Shine Frame 1 HK Color", 0x4ef6b20, 0x4ef6b40, indexCPS2_SilverSamurai, 0 },
    { L"22: HK - Shine Frame 2 HK Color + (ID: 08-15 + lumin-10)", 0x4ef6b40, 0x4ef6b60, indexCPS2_SilverSamurai, 0 },
    { L"23: HK - Shine Frame 3 HK Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6b60, 0x4ef6b80, indexCPS2_SilverSamurai, 0 },
    { L"24: HK - Shine Frame 4 HK Color + (copy ID:08,09,10 from original to ID:10,13,14)", 0x4ef6b80, 0x4ef6ba0, indexCPS2_SilverSamurai, 0 },
    { L"25: HK - Shine Frame 5 HK Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6ba0, 0x4ef6bc0, indexCPS2_SilverSamurai, 0 },
    { L"26: HK - Shine Frame 6 HK Color", 0x4ef6bc0, 0x4ef6be0, indexCPS2_SilverSamurai, 0 },
    { L"27: HK - Shine Frame 7 HK Color + Lumin-5", 0x4ef6be0, 0x4ef6c00, indexCPS2_SilverSamurai, 0 },
    { L"28: Separator", 0x4ef6c00, 0x4ef6c20 },
    { L"29: A1 - Shine Frame 1 A1 Color", 0x4ef6c20, 0x4ef6c40, indexCPS2_SilverSamurai, 0 },
    { L"2a: A1 - Shine Frame 2 A1 Color + (ID: 08-15 + lumin-10)", 0x4ef6c40, 0x4ef6c60, indexCPS2_SilverSamurai, 0 },
    { L"2b: A1 - Shine Frame 3 A1 Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6c60, 0x4ef6c80, indexCPS2_SilverSamurai, 0 },
    { L"2c: A1 - Shine Frame 4 A1 Color + (copy ID:08,09,10 from original to ID:10,13,14)", 0x4ef6c80, 0x4ef6ca0, indexCPS2_SilverSamurai, 0 },
    { L"2d: A1 - Shine Frame 5 A1 Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6ca0, 0x4ef6cc0, indexCPS2_SilverSamurai, 0 },
    { L"2e: A1 - Shine Frame 6 A1 Color", 0x4ef6cc0, 0x4ef6ce0, indexCPS2_SilverSamurai, 0 },
    { L"2f: A1 - Shine Frame 7 A1 Color + Lumin-5", 0x4ef6ce0, 0x4ef6d00, indexCPS2_SilverSamurai, 0 },
    { L"30: Separator", 0x4ef6d00, 0x4ef6d20 },
    { L"31: A2 - Shine Frame 1 A2 Color", 0x4ef6d20, 0x4ef6d40, indexCPS2_SilverSamurai, 0 },
    { L"32: A2 - Shine Frame 2 A2 Color + (ID: 08-15 + lumin-10)", 0x4ef6d40, 0x4ef6d60, indexCPS2_SilverSamurai, 0 },
    { L"33: A2 - Shine Frame 3 A2 Color + (copy ID:08,09,10 from original to ID:14,15,16)", 0x4ef6d60, 0x4ef6d80, indexCPS2_SilverSamurai, 0 },
    { L"34: A2 - Shine Frame 4 A2 Color + (copy ID:08,09,10 from original to ID:10,13,14)", 0x4ef6d80, 0x4ef6da0, indexCPS2_SilverSamurai, 0 },
    { L"35: A2 - Shine Frame 5 A2 Color + (copy ID:08,09,10 from original to ID:10,11,12)", 0x4ef6da0, 0x4ef6dc0, indexCPS2_SilverSamurai, 0 },
    { L"36: A2 - Shine Frame 6 A2 Color", 0x4ef6dc0, 0x4ef6de0, indexCPS2_SilverSamurai, 0 },
    { L"37: A2 - Shine Frame 7 A2 Color + Lumin-5", 0x4ef6de0, 0x4ef6e00, indexCPS2_SilverSamurai, 0 },
};

const sDescTreeNode MVC2_A_SILVERSAMURAI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_LP, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_LK, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_HP, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_HK, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_A1, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_A2, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SILVERSAMURAI_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_LP[] =
{
    { L"Main Color LP", 0x4ff4940, 0x4ff4960, indexCPS2_OmegaRed, 0 },
    { L"(02) Energy Drain (Coil Effect)", 0x4ff4960, 0x4ff4980, indexCPS2_OmegaRed, 1 },
    { L"(03) Intro (Flames)", 0x4ff4980, 0x4ff49a0, indexCPS2_OmegaRed, 2 },
    { L"(04) Energy Drain (lightning effect on Omega Red)", 0x4ff49a0, 0x4ff49c0, indexCPS2_OmegaRed, 3 },
    { L"(05) Not Used", 0x4ff49c0, 0x4ff49e0, indexCPS2_OmegaRed, 4 },
    { L"(06) Not Used", 0x4ff49e0, 0x4ff4a00, indexCPS2_OmegaRed, 5 },
    { L"(07) Not Used", 0x4ff4a00, 0x4ff4a20, indexCPS2_OmegaRed, 6 },
    { L"(08) Not Used", 0x4ff4a20, 0x4ff4a40, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_LK[] =
{
    { L"Main Color LK", 0x4ff4a40, 0x4ff4a60, indexCPS2_OmegaRed, 0 },
    { L"(02) Energy Drain (Coil Effect)", 0x4ff4a60, 0x4ff4a80, indexCPS2_OmegaRed, 1 },
    { L"(03) Intro (Flames)", 0x4ff4a80, 0x4ff4aa0, indexCPS2_OmegaRed, 2 },
    { L"(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4aa0, 0x4ff4ac0, indexCPS2_OmegaRed, 3 },
    { L"(05) Not Used", 0x4ff4ac0, 0x4ff4ae0, indexCPS2_OmegaRed, 4 },
    { L"(06) Not Used", 0x4ff4ae0, 0x4ff4b00, indexCPS2_OmegaRed, 5 },
    { L"(07) Not Used", 0x4ff4b00, 0x4ff4b20, indexCPS2_OmegaRed, 6 },
    { L"(08) Not Used", 0x4ff4b20, 0x4ff4b40, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_HP[] =
{
    { L"Main Color HP", 0x4ff4b40, 0x4ff4b60, indexCPS2_OmegaRed, 0 },
    { L"(02) Energy Drain (Coil Effect)", 0x4ff4b60, 0x4ff4b80, indexCPS2_OmegaRed, 1 },
    { L"(03) Intro (Flames)", 0x4ff4b80, 0x4ff4ba0, indexCPS2_OmegaRed, 2 },
    { L"(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4ba0, 0x4ff4bc0, indexCPS2_OmegaRed, 3 },
    { L"(05) Not Used", 0x4ff4bc0, 0x4ff4be0, indexCPS2_OmegaRed, 4 },
    { L"(06) Not Used", 0x4ff4be0, 0x4ff4c00, indexCPS2_OmegaRed, 5 },
    { L"(07) Not Used", 0x4ff4c00, 0x4ff4c20, indexCPS2_OmegaRed, 6 },
    { L"(08) Not Used", 0x4ff4c20, 0x4ff4c40, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_HK[] =
{
    { L"Main Color HK", 0x4ff4c40, 0x4ff4c60, indexCPS2_OmegaRed, 0 },
    { L"(02) Energy Drain (Coil Effect)", 0x4ff4c60, 0x4ff4c80, indexCPS2_OmegaRed, 1 },
    { L"(03) Intro (Flames)", 0x4ff4c80, 0x4ff4ca0, indexCPS2_OmegaRed, 2 },
    { L"(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4ca0, 0x4ff4cc0, indexCPS2_OmegaRed, 3 },
    { L"(05) Not Used", 0x4ff4cc0, 0x4ff4ce0, indexCPS2_OmegaRed, 4 },
    { L"(06) Not Used", 0x4ff4ce0, 0x4ff4d00, indexCPS2_OmegaRed, 5 },
    { L"(07) Not Used", 0x4ff4d00, 0x4ff4d20, indexCPS2_OmegaRed, 6 },
    { L"(08) Not Used", 0x4ff4d20, 0x4ff4d40, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_A1[] =
{
    { L"Main Color A1", 0x4ff4d40, 0x4ff4d60, indexCPS2_OmegaRed, 0 },
    { L"(02) Energy Drain (Coil Effect)", 0x4ff4d60, 0x4ff4d80, indexCPS2_OmegaRed, 1 },
    { L"(03) Intro (Flames)", 0x4ff4d80, 0x4ff4da0, indexCPS2_OmegaRed, 2 },
    { L"(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4da0, 0x4ff4dc0, indexCPS2_OmegaRed, 3 },
    { L"(05) Not Used", 0x4ff4dc0, 0x4ff4de0, indexCPS2_OmegaRed, 4 },
    { L"(06) Not Used", 0x4ff4de0, 0x4ff4e00, indexCPS2_OmegaRed, 5 },
    { L"(07) Not Used", 0x4ff4e00, 0x4ff4e20, indexCPS2_OmegaRed, 6 },
    { L"(08) Not Used", 0x4ff4e20, 0x4ff4e40, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_A2[] =
{
    { L"Main Color A2", 0x4ff4e40, 0x4ff4e60, indexCPS2_OmegaRed, 0 },
    { L"(02) Energy Drain (Coil Effect)", 0x4ff4e60, 0x4ff4e80, indexCPS2_OmegaRed, 1 },
    { L"(03) Intro (Flames)", 0x4ff4e80, 0x4ff4ea0, indexCPS2_OmegaRed, 2 },
    { L"(04) Energy Drain (lightning effect on Omega Red)", 0x4ff4ea0, 0x4ff4ec0, indexCPS2_OmegaRed, 3 },
    { L"(05) Not Used", 0x4ff4ec0, 0x4ff4ee0, indexCPS2_OmegaRed, 4 },
    { L"(06) Not Used", 0x4ff4ee0, 0x4ff4f00, indexCPS2_OmegaRed, 5 },
    { L"(07) Not Used", 0x4ff4f00, 0x4ff4f20, indexCPS2_OmegaRed, 6 },
    { L"(08) Not Used", 0x4ff4f20, 0x4ff4f40, indexCPS2_OmegaRed, 7 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x4ff4f40, 0x4ff4f60, indexCPS2_OmegaRed, 0 },
    { L"Burning Light", 0x4ff4f60, 0x4ff4f80, indexCPS2_OmegaRed, 0 },
    { L"Shocked Dark", 0x4ff4f80, 0x4ff4fa0, indexCPS2_OmegaRed, 0 },
    { L"Shocked Light", 0x4ff4fa0, 0x4ff4fc0, indexCPS2_OmegaRed, 0 },
    { L"Dark Burning Dark", 0x4ff4fc0, 0x4ff4fe0, indexCPS2_OmegaRed, 0 },
    { L"Dark Burning Light", 0x4ff4fe0, 0x4ff5000, indexCPS2_OmegaRed, 0 },
    { L"Kinetic Charge Dark", 0x4ff5000, 0x4ff5020, indexCPS2_OmegaRed, 0 },
    { L"Kinetic Charge Light", 0x4ff5020, 0x4ff5040, indexCPS2_OmegaRed, 0 },
};

const sGame_PaletteDataset MVC2_A_OMEGARED_PALETTES_EXTRAS[] =
{
    { L"09: LP - Intro Frame 1 LP Color & then add (lumin-25)", 0x4ff5040, 0x4ff5060, indexCPS2_OmegaRed, 11 },
    { L"0a: LP - Intro Frame 2 LP Color & then add (lumin-12)", 0x4ff5060, 0x4ff5080, indexCPS2_OmegaRed, 11 },
    { L"0b: LP - Intro Frame 3 LP Color & then add (lumin-9)", 0x4ff5080, 0x4ff50a0, indexCPS2_OmegaRed, 11 },
    { L"0c: LP - Intro Frame 4 LP Color & then add (lumin-5)", 0x4ff50a0, 0x4ff50c0, indexCPS2_OmegaRed, 11 },
    { L"0d: LK - Intro Frame 1 LK Color & then add (lumin-25)", 0x4ff50c0, 0x4ff50e0, indexCPS2_OmegaRed, 11 },
    { L"0e: LK - Intro Frame 2 LK Color & then add (lumin-12)", 0x4ff50e0, 0x4ff5100, indexCPS2_OmegaRed, 11 },
    { L"0f: LK - Intro Frame 3 LK Color & then add (lumin-9)", 0x4ff5100, 0x4ff5120, indexCPS2_OmegaRed, 11 },
    { L"10: LK - Intro Frame 4 LK Color & then add (lumin-5)", 0x4ff5120, 0x4ff5140, indexCPS2_OmegaRed, 11 },
    { L"11: HP - Intro Frame 1 HP Color & then add (lumin-25)", 0x4ff5140, 0x4ff5160, indexCPS2_OmegaRed, 11 },
    { L"12: HP - Intro Frame 2 HP Color & then add (lumin-12)", 0x4ff5160, 0x4ff5180, indexCPS2_OmegaRed, 11 },
    { L"13: HP - Intro Frame 3 HP Color & then add (lumin-9)", 0x4ff5180, 0x4ff51a0, indexCPS2_OmegaRed, 11 },
    { L"14: HP - Intro Frame 4 HP Color & then add (lumin-5)", 0x4ff51a0, 0x4ff51c0, indexCPS2_OmegaRed, 11 },
    { L"15: LP - Intro Frame 1 LP Color & then add (lumin-25)", 0x4ff51c0, 0x4ff51e0, indexCPS2_OmegaRed, 11 },
    { L"16: LP - Intro Frame 2 LP Color & then add (lumin-12)", 0x4ff51e0, 0x4ff5200, indexCPS2_OmegaRed, 11 },
    { L"17: LP - Intro Frame 3 LP Color & then add (lumin-9)", 0x4ff5200, 0x4ff5220, indexCPS2_OmegaRed, 11 },
    { L"18: LP - Intro Frame 4 LP Color & then add (lumin-5)", 0x4ff5220, 0x4ff5240, indexCPS2_OmegaRed, 11 },
    { L"19: A1 - Intro Frame 1 A1 Color & then add (lumin-25)", 0x4ff5240, 0x4ff5260, indexCPS2_OmegaRed, 11 },
    { L"1a: A1 - Intro Frame 2 A1 Color & then add (lumin-12)", 0x4ff5260, 0x4ff5280, indexCPS2_OmegaRed, 11 },
    { L"1b: A1 - Intro Frame 3 A1 Color & then add (lumin-9)", 0x4ff5280, 0x4ff52a0, indexCPS2_OmegaRed, 11 },
    { L"1c: A1 - Intro Frame 4 A1 Color & then add (lumin-5)", 0x4ff52a0, 0x4ff52c0, indexCPS2_OmegaRed, 11 },
    { L"1d: A2 - Intro Frame 1 A2 Color & then add (lumin-25)", 0x4ff52c0, 0x4ff52e0, indexCPS2_OmegaRed, 11 },
    { L"1e: A2 - Intro Frame 2 A2 Color & then add (lumin-12)", 0x4ff52e0, 0x4ff5300, indexCPS2_OmegaRed, 11 },
    { L"1f: A2 - Intro Frame 3 A2 Color & then add (lumin-9)", 0x4ff5300, 0x4ff5320, indexCPS2_OmegaRed, 11 },
    { L"20: A2 - Intro Frame 4 A2 Color & then add (lumin-5)", 0x4ff5320, 0x4ff5340, indexCPS2_OmegaRed, 11 },
};

const sDescTreeNode MVC2_A_OMEGARED_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_LP, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_LK, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_HP, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_HK, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_A1, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_A2, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_SHARED, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_OMEGARED_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_LP[] =
{
    { L"Main Color LP", 0x5109fa0, 0x5109fc0, indexCPS2_Spiral, 0 },
    { L"(02) Not Used", 0x5109fc0, 0x5109fe0, indexCPS2_Spiral, 1 },
    { L"(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x5109fe0, 0x510a000, indexCPS2_Spiral, 2 },
    { L"(04) Dancing Swords Intro - Portal", 0x510a000, 0x510a020, indexCPS2_Spiral, 3 },
    { L"(05) Not Used", 0x510a020, 0x510a040, indexCPS2_Spiral, 4 },
    { L"(06) Not Used", 0x510a040, 0x510a060, indexCPS2_Spiral, 5 },
    { L"(07) Not Used", 0x510a060, 0x510a080, indexCPS2_Spiral, 6 },
    { L"(08) Not Used", 0x510a080, 0x510a0a0, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_LK[] =
{
    { L"Main Color LK", 0x510a0a0, 0x510a0c0, indexCPS2_Spiral, 0 },
    { L"(02) Not Used", 0x510a0c0, 0x510a0e0, indexCPS2_Spiral, 1 },
    { L"(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a0e0, 0x510a100, indexCPS2_Spiral, 2 },
    { L"(04) Dancing Swords Intro - Portal", 0x510a100, 0x510a120, indexCPS2_Spiral, 3 },
    { L"(05) Not Used", 0x510a120, 0x510a140, indexCPS2_Spiral, 4 },
    { L"(06) Not Used", 0x510a140, 0x510a160, indexCPS2_Spiral, 5 },
    { L"(07) Not Used", 0x510a160, 0x510a180, indexCPS2_Spiral, 6 },
    { L"(08) Not Used", 0x510a180, 0x510a1a0, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_HP[] =
{
    { L"Main Color HP", 0x510a1a0, 0x510a1c0, indexCPS2_Spiral, 0 },
    { L"(02) Not Used", 0x510a1c0, 0x510a1e0, indexCPS2_Spiral, 1 },
    { L"(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a1e0, 0x510a200, indexCPS2_Spiral, 2 },
    { L"(04) Dancing Swords Intro - Portal", 0x510a200, 0x510a220, indexCPS2_Spiral, 3 },
    { L"(05) Not Used", 0x510a220, 0x510a240, indexCPS2_Spiral, 4 },
    { L"(06) Not Used", 0x510a240, 0x510a260, indexCPS2_Spiral, 5 },
    { L"(07) Not Used", 0x510a260, 0x510a280, indexCPS2_Spiral, 6 },
    { L"(08) Not Used", 0x510a280, 0x510a2a0, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_HK[] =
{
    { L"Main Color HK", 0x510a2a0, 0x510a2c0, indexCPS2_Spiral, 0 },
    { L"(02) Not Used", 0x510a2c0, 0x510a2e0, indexCPS2_Spiral, 1 },
    { L"(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a2e0, 0x510a300, indexCPS2_Spiral, 2 },
    { L"(04) Dancing Swords Intro - Portal", 0x510a300, 0x510a320, indexCPS2_Spiral, 3 },
    { L"(05) Not Used", 0x510a320, 0x510a340, indexCPS2_Spiral, 4 },
    { L"(06) Not Used", 0x510a340, 0x510a360, indexCPS2_Spiral, 5 },
    { L"(07) Not Used", 0x510a360, 0x510a380, indexCPS2_Spiral, 6 },
    { L"(08) Not Used", 0x510a380, 0x510a3a0, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_A1[] =
{
    { L"Main Color A1", 0x510a3a0, 0x510a3c0, indexCPS2_Spiral, 0 },
    { L"(02) Not Used", 0x510a3c0, 0x510a3e0, indexCPS2_Spiral, 1 },
    { L"(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a3e0, 0x510a400, indexCPS2_Spiral, 2 },
    { L"(04) Dancing Swords Intro - Portal", 0x510a400, 0x510a420, indexCPS2_Spiral, 3 },
    { L"(05) Not Used", 0x510a420, 0x510a440, indexCPS2_Spiral, 4 },
    { L"(06) Not Used", 0x510a440, 0x510a460, indexCPS2_Spiral, 5 },
    { L"(07) Not Used", 0x510a460, 0x510a480, indexCPS2_Spiral, 6 },
    { L"(08) Not Used", 0x510a480, 0x510a4a0, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_A2[] =
{
    { L"Main Color A2", 0x510a4a0, 0x510a4c0, indexCPS2_Spiral, 0 },
    { L"(02) Not Used", 0x510a4c0, 0x510a4e0, indexCPS2_Spiral, 1 },
    { L"(03) Dancing Swords (Casting Effect) Metamorphosis X (Super Flash Effect)", 0x510a4e0, 0x510a500, indexCPS2_Spiral, 2 },
    { L"(04) Dancing Swords Intro - Portal", 0x510a500, 0x510a520, indexCPS2_Spiral, 3 },
    { L"(05) Not Used", 0x510a520, 0x510a540, indexCPS2_Spiral, 4 },
    { L"(06) Not Used", 0x510a540, 0x510a560, indexCPS2_Spiral, 5 },
    { L"(07) Not Used", 0x510a560, 0x510a580, indexCPS2_Spiral, 6 },
    { L"(08) Not Used", 0x510a580, 0x510a5a0, indexCPS2_Spiral, 7 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x510a5a0, 0x510a5c0, indexCPS2_Spiral, 0 },
    { L"Burning Light", 0x510a5c0, 0x510a5e0, indexCPS2_Spiral, 0 },
    { L"Shocked Dark", 0x510a5e0, 0x510a600, indexCPS2_Spiral, 0 },
    { L"Shocked Light", 0x510a600, 0x510a620, indexCPS2_Spiral, 0 },
    { L"Dark Burning Dark", 0x510a620, 0x510a640, indexCPS2_Spiral, 0 },
    { L"Dark Burning Light", 0x510a640, 0x510a660, indexCPS2_Spiral, 0 },
    { L"Kinetic Charge Dark", 0x510a660, 0x510a680, indexCPS2_Spiral, 0 },
    { L"Kinetic Charge Light", 0x510a680, 0x510a6a0, indexCPS2_Spiral, 0 },
};

const sGame_PaletteDataset MVC2_A_SPIRAL_PALETTES_EXTRAS[] =
{
    { L"09: Cyclops Metamorphosis X Character Frame 1", 0x510a6a0, 0x510a6c0, indexCPS2_Cyclops, 0 },
    { L"0a: Wolverine Metamorphosis X Character Frame 2", 0x510a6c0, 0x510a6e0, indexCPS2_Wolverine, 0 },
    { L"0b: Wolverine's Claws Metamorphosis X Character Frame 3", 0x510a6e0, 0x510a700, indexCPS2_Wolverine, 1 },
    { L"0c: Psylocke Metamorphosis X Character Frame 4", 0x510a700, 0x510a720, indexCPS2_Psylocke, 0 },
    { L"0d: Psylocke's s.FP Metamorphosis X Character Frame 5", 0x510a720, 0x510a740, indexCPS2_Psylocke, 1 },
    { L"0e: Iceman Metamorphosis X Character Frame 6", 0x510a740, 0x510a760, indexCPS2_Iceman, 0 },
    { L"0f: Rogue Metamorphosis X Character Frame 7", 0x510a760, 0x510a780, indexCPS2_Rogue, 0 },
    { L"10: Captain America Metamorphosis X Character Frame 8", 0x510a780, 0x510a7a0, indexCPS2_CapAm, 0 },
    { L"11: Spider-Man Metamorphosis X Character Frame 9", 0x510a7a0, 0x510a7c0, indexCPS2_Spidey, 0 },
    { L"12: Hulk Metamorphosis X Character Frame 10", 0x510a7c0, 0x510a7e0, indexCPS2_Hulk, 0 },
    { L"13: Venom Metamorphosis X Character Frame 11", 0x510a7e0, 0x510a800, indexCPS2_Venom, 0 },
    { L"14: Dr. Doom Metamorphosis X Character Frame 12", 0x510a800, 0x510a820, indexCPS2_DrDoom, 0 },
    { L"15: Dr. Doom's s.FP Metamorphosis X Character Frame 13", 0x510a820, 0x510a840, indexCPS2_DrDoom, 1 },
    { L"16: Marrow Metamorphosis X Character Frame 14", 0x510a840, 0x510a860, indexCPS2_Marrow, 0 },
    { L"17: Not Used", 0x510a860, 0x510a880 },
    { L"18: Cable Metamorphosis X Character Frame 15", 0x510a880, 0x510a8a0, indexCPS2_Cable, 0 },
    { L"19: Not Used", 0x510a8a0, 0x510a8c0 },
    { L"1a: Gambit Metamorphosis X Character Frame 16", 0x510a8c0, 0x510a8e0, indexCPS2_Gambit, 0 },
    { L"1b: Juggernaut Metamorphosis X Character Frame 17", 0x510a8e0, 0x510a900, indexCPS2_Juggy, 0 },
    { L"1c: Storm Metamorphosis X Character Frame 18", 0x510a900, 0x510a920, indexCPS2_Storm, 0 },
    { L"1d: Storm's s.FP Metamorphosis X Character Frame 19", 0x510a920, 0x510a940, indexCPS2_Storm, 13 },
    { L"1e: Sabretooth Metamorphosis X Character Frame 20", 0x510a940, 0x510a960, indexCPS2_Sabretooth, 0 },
    { L"1f: Magneto Metamorphosis X Character Frame 21", 0x510a960, 0x510a980, indexCPS2_Magneto, 0 },
    { L"20: Not Used", 0x510a980, 0x510a9a0 },
    { L"21: Shuma-Gorath Metamorphosis X Character Frame 22", 0x510a9a0, 0x510a9c0, indexCPS2_Shuma, 0 },
    { L"22: War Machine Metamorphosis X Character Frame 23", 0x510a9c0, 0x510a9e0, indexCPS2_WarMachine, 0 },
    { L"23: Silver Samurai Metamorphosis X Character Frame 24", 0x510a9e0, 0x510aa00, indexCPS2_SilverSamurai, 0 },
    { L"24: Omega Red Metamorphosis X Character Frame 25", 0x510aa00, 0x510aa20, indexCPS2_OmegaRed, 0 },
    { L"25: Colossus Metamorphosis X Character Frame 26", 0x510aa20, 0x510aa40, indexCPS2_Colossus, 0 },
    { L"26: Iron Man Metamorphosis X Character Frame 27", 0x510aa40, 0x510aa60, indexCPS2_IronMan, 0 },
    { L"27: Sentinel Metamorphosis X Character Frame 28", 0x510aa60, 0x510aa80, indexCPS2_Sentinel, 0, &pairNext },
    { L"28: Sentinel's COTA j.d.HK Metamorphosis X Character Frame 29", 0x510aa80, 0x510aaa0, indexCPS2_Sentinel, 1 },
    { L"29: Blackheart Metamorphosis X Character Frame 30", 0x510aaa0, 0x510aac0, indexCPS2_Blackheart, 0 },
    { L"2a: Thanos Metamorphosis X Character Frame 31", 0x510aac0, 0x510aae0, indexCPS2_Thanos, 0 },
    { L"2b: Not Used", 0x510aae0, 0x510ab00 },
    { L"2c: Not Used", 0x510ab00, 0x510ab20 },
    { L"2d: LP - Power-Up Enhance Frames 1 ID06-15: redtint 3perc", 0x510ab20, 0x510ab40, indexCPS2_Spiral, 11 },
    { L"2e: LP - Power-Up Enhance Frames 2 ID06-15: redtint 3perc", 0x510ab40, 0x510ab60, indexCPS2_Spiral, 11 },
    { L"2f: LP - Power-Up Enhance Frames 3 ID06-15: redtint 3perc", 0x510ab60, 0x510ab80, indexCPS2_Spiral, 11 },
    { L"30: LP - Power-Up Enhance Frames 4 ID06-15: redtint 3perc", 0x510ab80, 0x510aba0, indexCPS2_Spiral, 11 },
    { L"31: LP - Power-Up Enhance Frames 5 ID06-15: redtint 3perc", 0x510aba0, 0x510abc0, indexCPS2_Spiral, 11 },
    { L"32: LP - Power-Up Enhance Frames 6 ID06-15: redtint 3perc", 0x510abc0, 0x510abe0, indexCPS2_Spiral, 11 },
    { L"33: LP - Speed-Up Enhance Frames 1 lumin+4", 0x510abe0, 0x510ac00, indexCPS2_Spiral, 12 },
    { L"34: LP - Speed-Up Enhance Frames 2 lumin+4", 0x510ac00, 0x510ac20, indexCPS2_Spiral, 12 },
    { L"35: LP - Speed-Up Enhance Frames 3 lumin+4", 0x510ac20, 0x510ac40, indexCPS2_Spiral, 12 },
    { L"36: LP - Speed-Up Enhance Frames 4 lumin+4", 0x510ac40, 0x510ac60, indexCPS2_Spiral, 12 },
    { L"37: LP - Speed-Up Enhance Frames 5 lumin+4", 0x510ac60, 0x510ac80, indexCPS2_Spiral, 12 },
    { L"38: LP - Speed-Up Enhance Frames 6 lumin+4", 0x510ac80, 0x510aca0, indexCPS2_Spiral, 12 },
    { L"39: Not Used", 0x510aca0, 0x510acc0 },
    { L"3a: Not Used", 0x510acc0, 0x510ace0 },
    { L"3b: LP - Metamorphosis Dance frames 1", 0x510ace0, 0x510ad00, indexCPS2_Spiral, 12 },
    { L"3c: LP - Metamorphosis Dance frames 2", 0x510ad00, 0x510ad20, indexCPS2_Spiral, 12 },
    { L"3d: LP - Metamorphosis Dance frames 3", 0x510ad20, 0x510ad40, indexCPS2_Spiral, 12 },
    { L"3e: LP - Metamorphosis Dance frames 4", 0x510ad40, 0x510ad60, indexCPS2_Spiral, 12 },
    { L"3f: LP - Metamorphosis Dance frames 5", 0x510ad60, 0x510ad80, indexCPS2_Spiral, 12 },
    { L"40: LP - Metamorphosis Dance frames 6", 0x510ad80, 0x510ada0, indexCPS2_Spiral, 12 },
    { L"41: LP - Metamorphosis Dance frames 7", 0x510ada0, 0x510adc0, indexCPS2_Spiral, 12 },
    { L"42: LP - Metamorphosis Dance frames 8", 0x510adc0, 0x510ade0, indexCPS2_Spiral, 12 },
    { L"43: LP - Metamorphosis Dance frames 9", 0x510ade0, 0x510ae00, indexCPS2_Spiral, 12 },
    { L"44: LP - Metamorphosis Dance frames 10", 0x510ae00, 0x510ae20, indexCPS2_Spiral, 12 },
    { L"45: LP - Metamorphosis Dance frames 11", 0x510ae20, 0x510ae40, indexCPS2_Spiral, 12 },
    { L"46: LP - Metamorphosis Dance frames 12", 0x510ae40, 0x510ae60, indexCPS2_Spiral, 12 },
    { L"47: Not Used", 0x510ae60, 0x510ae80 },
    { L"48: Not Used", 0x510ae80, 0x510aea0 },
    { L"49: LK - Power-Up Enhance Frames 1", 0x510aea0, 0x510aec0, indexCPS2_Spiral, 11 },
    { L"4a: LK - Power-Up Enhance Frames 2", 0x510aec0, 0x510aee0, indexCPS2_Spiral, 11 },
    { L"4b: LK - Power-Up Enhance Frames 3", 0x510aee0, 0x510af00, indexCPS2_Spiral, 11 },
    { L"4c: LK - Power-Up Enhance Frames 4", 0x510af00, 0x510af20, indexCPS2_Spiral, 11 },
    { L"4d: LK - Power-Up Enhance Frames 5", 0x510af20, 0x510af40, indexCPS2_Spiral, 11 },
    { L"4e: LK - Power-Up Enhance Frames 6", 0x510af40, 0x510af60, indexCPS2_Spiral, 11 },
    { L"4f: LK - Speed-Up Enhance Frames 1", 0x510af60, 0x510af80, indexCPS2_Spiral, 12 },
    { L"50: LK - Speed-Up Enhance Frames 2", 0x510af80, 0x510afa0, indexCPS2_Spiral, 12 },
    { L"51: LK - Speed-Up Enhance Frames 3", 0x510afa0, 0x510afc0, indexCPS2_Spiral, 12 },
    { L"52: LK - Speed-Up Enhance Frames 4", 0x510afc0, 0x510afe0, indexCPS2_Spiral, 12 },
    { L"53: LK - Speed-Up Enhance Frames 5", 0x510afe0, 0x510b000, indexCPS2_Spiral, 12 },
    { L"54: LK - Speed-Up Enhance Frames 6", 0x510b000, 0x510b020, indexCPS2_Spiral, 12 },
    { L"55: Not Used", 0x510b020, 0x510b040 },
    { L"56: Not Used", 0x510b040, 0x510b060 },
    { L"57: LK - Metamorphosis Dance frames 1", 0x510b060, 0x510b080, indexCPS2_Spiral, 12 },
    { L"58: LK - Metamorphosis Dance frames 2", 0x510b080, 0x510b0a0, indexCPS2_Spiral, 12 },
    { L"59: LK - Metamorphosis Dance frames 3", 0x510b0a0, 0x510b0c0, indexCPS2_Spiral, 12 },
    { L"5a: LK - Metamorphosis Dance frames 4", 0x510b0c0, 0x510b0e0, indexCPS2_Spiral, 12 },
    { L"5b: LK - Metamorphosis Dance frames 5", 0x510b0e0, 0x510b100, indexCPS2_Spiral, 12 },
    { L"5c: LK - Metamorphosis Dance frames 6", 0x510b100, 0x510b120, indexCPS2_Spiral, 12 },
    { L"5d: LK - Metamorphosis Dance frames 7", 0x510b120, 0x510b140, indexCPS2_Spiral, 12 },
    { L"5e: LK - Metamorphosis Dance frames 8", 0x510b140, 0x510b160, indexCPS2_Spiral, 12 },
    { L"5f: LK - Metamorphosis Dance frames 9", 0x510b160, 0x510b180, indexCPS2_Spiral, 12 },
    { L"60: LK - Metamorphosis Dance frames 10", 0x510b180, 0x510b1a0, indexCPS2_Spiral, 12 },
    { L"61: LK - Metamorphosis Dance frames 11", 0x510b1a0, 0x510b1c0, indexCPS2_Spiral, 12 },
    { L"62: LK - Metamorphosis Dance frames 12", 0x510b1c0, 0x510b1e0, indexCPS2_Spiral, 12 },
    { L"63: Not Used", 0x510b1e0, 0x510b200 },
    { L"64: Not Used", 0x510b200, 0x510b220 },
    { L"65: HP - Power-Up Enhance Frames 1", 0x510b220, 0x510b240, indexCPS2_Spiral, 11 },
    { L"66: HP - Power-Up Enhance Frames 2", 0x510b240, 0x510b260, indexCPS2_Spiral, 11 },
    { L"67: HP - Power-Up Enhance Frames 3", 0x510b260, 0x510b280, indexCPS2_Spiral, 11 },
    { L"68: HP - Power-Up Enhance Frames 4", 0x510b280, 0x510b2a0, indexCPS2_Spiral, 11 },
    { L"69: HP - Power-Up Enhance Frames 5", 0x510b2a0, 0x510b2c0, indexCPS2_Spiral, 11 },
    { L"6a: HP - Power-Up Enhance Frames 6", 0x510b2c0, 0x510b2e0, indexCPS2_Spiral, 11 },
    { L"6b: HP - Speed-Up Enhance Frames 1", 0x510b2e0, 0x510b300, indexCPS2_Spiral, 12 },
    { L"6c: HP - Speed-Up Enhance Frames 2", 0x510b300, 0x510b320, indexCPS2_Spiral, 12 },
    { L"6d: HP - Speed-Up Enhance Frames 3", 0x510b320, 0x510b340, indexCPS2_Spiral, 12 },
    { L"6e: HP - Speed-Up Enhance Frames 4", 0x510b340, 0x510b360, indexCPS2_Spiral, 12 },
    { L"6f: HP - Speed-Up Enhance Frames 5", 0x510b360, 0x510b380, indexCPS2_Spiral, 12 },
    { L"70: HP - Speed-Up Enhance Frames 6", 0x510b380, 0x510b3a0, indexCPS2_Spiral, 12 },
    { L"71: Not Used", 0x510b3a0, 0x510b3c0 },
    { L"72: Not Used", 0x510b3c0, 0x510b3e0 },
    { L"73: HP - Metamorphosis Dance frames 1", 0x510b3e0, 0x510b400, indexCPS2_Spiral, 12 },
    { L"74: HP - Metamorphosis Dance frames 2", 0x510b400, 0x510b420, indexCPS2_Spiral, 12 },
    { L"75: HP - Metamorphosis Dance frames 3", 0x510b420, 0x510b440, indexCPS2_Spiral, 12 },
    { L"76: HP - Metamorphosis Dance frames 4", 0x510b440, 0x510b460, indexCPS2_Spiral, 12 },
    { L"77: HP - Metamorphosis Dance frames 5", 0x510b460, 0x510b480, indexCPS2_Spiral, 12 },
    { L"78: HP - Metamorphosis Dance frames 6", 0x510b480, 0x510b4a0, indexCPS2_Spiral, 12 },
    { L"79: HP - Metamorphosis Dance frames 7", 0x510b4a0, 0x510b4c0, indexCPS2_Spiral, 12 },
    { L"7a: HP - Metamorphosis Dance frames 8", 0x510b4c0, 0x510b4e0, indexCPS2_Spiral, 12 },
    { L"7b: HP - Metamorphosis Dance frames 9", 0x510b4e0, 0x510b500, indexCPS2_Spiral, 12 },
    { L"7c: HP - Metamorphosis Dance frames 10", 0x510b500, 0x510b520, indexCPS2_Spiral, 12 },
    { L"7d: HP - Metamorphosis Dance frames 11", 0x510b520, 0x510b540, indexCPS2_Spiral, 12 },
    { L"7e: HP - Metamorphosis Dance frames 12", 0x510b540, 0x510b560, indexCPS2_Spiral, 12 },
    { L"7f: Not Used", 0x510b560, 0x510b580 },
    { L"80: Not Used", 0x510b580, 0x510b5a0 },
    { L"81: HK - Power-Up Enhance Frames 1", 0x510b5a0, 0x510b5c0, indexCPS2_Spiral, 11 },
    { L"82: HK - Power-Up Enhance Frames 2", 0x510b5c0, 0x510b5e0, indexCPS2_Spiral, 11 },
    { L"83: HK - Power-Up Enhance Frames 3", 0x510b5e0, 0x510b600, indexCPS2_Spiral, 11 },
    { L"84: HK - Power-Up Enhance Frames 4", 0x510b600, 0x510b620, indexCPS2_Spiral, 11 },
    { L"85: HK - Power-Up Enhance Frames 5", 0x510b620, 0x510b640, indexCPS2_Spiral, 11 },
    { L"86: HK - Power-Up Enhance Frames 6", 0x510b640, 0x510b660, indexCPS2_Spiral, 11 },
    { L"87: HK - Speed-Up Enhance Frames 1", 0x510b660, 0x510b680, indexCPS2_Spiral, 12 },
    { L"88: HK - Speed-Up Enhance Frames 2", 0x510b680, 0x510b6a0, indexCPS2_Spiral, 12 },
    { L"89: HK - Speed-Up Enhance Frames 3", 0x510b6a0, 0x510b6c0, indexCPS2_Spiral, 12 },
    { L"8a: HK - Speed-Up Enhance Frames 4", 0x510b6c0, 0x510b6e0, indexCPS2_Spiral, 12 },
    { L"8b: HK - Speed-Up Enhance Frames 5", 0x510b6e0, 0x510b700, indexCPS2_Spiral, 12 },
    { L"8c: HK - Speed-Up Enhance Frames 6", 0x510b700, 0x510b720, indexCPS2_Spiral, 12 },
    { L"8d: Not Used", 0x510b720, 0x510b740 },
    { L"8e: Not Used", 0x510b740, 0x510b760 },
    { L"8f: HK - Metamorphosis Dance frames 1", 0x510b760, 0x510b780, indexCPS2_Spiral, 12 },
    { L"90: HK - Metamorphosis Dance frames 2", 0x510b780, 0x510b7a0, indexCPS2_Spiral, 12 },
    { L"91: HK - Metamorphosis Dance frames 3", 0x510b7a0, 0x510b7c0, indexCPS2_Spiral, 12 },
    { L"92: HK - Metamorphosis Dance frames 4", 0x510b7c0, 0x510b7e0, indexCPS2_Spiral, 12 },
    { L"93: HK - Metamorphosis Dance frames 5", 0x510b7e0, 0x510b800, indexCPS2_Spiral, 12 },
    { L"94: HK - Metamorphosis Dance frames 6", 0x510b800, 0x510b820, indexCPS2_Spiral, 12 },
    { L"95: HK - Metamorphosis Dance frames 7", 0x510b820, 0x510b840, indexCPS2_Spiral, 12 },
    { L"96: HK - Metamorphosis Dance frames 8", 0x510b840, 0x510b860, indexCPS2_Spiral, 12 },
    { L"97: HK - Metamorphosis Dance frames 9", 0x510b860, 0x510b880, indexCPS2_Spiral, 12 },
    { L"98: HK - Metamorphosis Dance frames 10", 0x510b880, 0x510b8a0, indexCPS2_Spiral, 12 },
    { L"99: HK - Metamorphosis Dance frames 11", 0x510b8a0, 0x510b8c0, indexCPS2_Spiral, 12 },
    { L"9a: HK - Metamorphosis Dance frames 12", 0x510b8c0, 0x510b8e0, indexCPS2_Spiral, 12 },
    { L"9b: Not Used", 0x510b8e0, 0x510b900 },
    { L"9c: Not Used", 0x510b900, 0x510b920 },
    { L"9d: A1 - Power-Up Enhance Frames 1", 0x510b920, 0x510b940, indexCPS2_Spiral, 11 },
    { L"9e: A1 - Power-Up Enhance Frames 2", 0x510b940, 0x510b960, indexCPS2_Spiral, 11 },
    { L"9f: A1 - Power-Up Enhance Frames 3", 0x510b960, 0x510b980, indexCPS2_Spiral, 11 },
    { L"a0: A1 - Power-Up Enhance Frames 4", 0x510b980, 0x510b9a0, indexCPS2_Spiral, 11 },
    { L"a1: A1 - Power-Up Enhance Frames 5", 0x510b9a0, 0x510b9c0, indexCPS2_Spiral, 11 },
    { L"a2: A1 - Power-Up Enhance Frames 6", 0x510b9c0, 0x510b9e0, indexCPS2_Spiral, 11 },
    { L"a3: A1 - Speed-Up Enhance Frames 1", 0x510b9e0, 0x510ba00, indexCPS2_Spiral, 12 },
    { L"a4: A1 - Speed-Up Enhance Frames 2", 0x510ba00, 0x510ba20, indexCPS2_Spiral, 12 },
    { L"a5: A1 - Speed-Up Enhance Frames 3", 0x510ba20, 0x510ba40, indexCPS2_Spiral, 12 },
    { L"a6: A1 - Speed-Up Enhance Frames 4", 0x510ba40, 0x510ba60, indexCPS2_Spiral, 12 },
    { L"a7: A1 - Speed-Up Enhance Frames 5", 0x510ba60, 0x510ba80, indexCPS2_Spiral, 12 },
    { L"a8: A1 - Speed-Up Enhance Frames 6", 0x510ba80, 0x510baa0, indexCPS2_Spiral, 12 },
    { L"a9: Not Used", 0x510baa0, 0x510bac0 },
    { L"aa: Not Used", 0x510bac0, 0x510bae0 },
    { L"ab: A1 - Metamorphosis Dance frames 1", 0x510bae0, 0x510bb00, indexCPS2_Spiral, 12 },
    { L"ac: A1 - Metamorphosis Dance frames 2", 0x510bb00, 0x510bb20, indexCPS2_Spiral, 12 },
    { L"ad: A1 - Metamorphosis Dance frames 3", 0x510bb20, 0x510bb40, indexCPS2_Spiral, 12 },
    { L"ae: A1 - Metamorphosis Dance frames 4", 0x510bb40, 0x510bb60, indexCPS2_Spiral, 12 },
    { L"af: A1 - Metamorphosis Dance frames 5", 0x510bb60, 0x510bb80, indexCPS2_Spiral, 12 },
    { L"b0: A1 - Metamorphosis Dance frames 6", 0x510bb80, 0x510bba0, indexCPS2_Spiral, 12 },
    { L"b1: A1 - Metamorphosis Dance frames 7", 0x510bba0, 0x510bbc0, indexCPS2_Spiral, 12 },
    { L"b2: A1 - Metamorphosis Dance frames 8", 0x510bbc0, 0x510bbe0, indexCPS2_Spiral, 12 },
    { L"b3: A1 - Metamorphosis Dance frames 9", 0x510bbe0, 0x510bc00, indexCPS2_Spiral, 12 },
    { L"b4: A1 - Metamorphosis Dance frames 10", 0x510bc00, 0x510bc20, indexCPS2_Spiral, 12 },
    { L"b5: A1 - Metamorphosis Dance frames 11", 0x510bc20, 0x510bc40, indexCPS2_Spiral, 12 },
    { L"b6: A1 - Metamorphosis Dance frames 12", 0x510bc40, 0x510bc60, indexCPS2_Spiral, 12 },
    { L"b7: Not Used", 0x510bc60, 0x510bc80 },
    { L"b8: Not Used", 0x510bc80, 0x510bca0 },
    { L"b9: A2 - Power-Up Enhance Frames 1", 0x510bca0, 0x510bcc0, indexCPS2_Spiral, 11 },
    { L"ba: A2 - Power-Up Enhance Frames 2", 0x510bcc0, 0x510bce0, indexCPS2_Spiral, 11 },
    { L"bb: A2 - Power-Up Enhance Frames 3", 0x510bce0, 0x510bd00, indexCPS2_Spiral, 11 },
    { L"bc: A2 - Power-Up Enhance Frames 4", 0x510bd00, 0x510bd20, indexCPS2_Spiral, 11 },
    { L"bd: A2 - Power-Up Enhance Frames 5", 0x510bd20, 0x510bd40, indexCPS2_Spiral, 11 },
    { L"be: A2 - Power-Up Enhance Frames 6", 0x510bd40, 0x510bd60, indexCPS2_Spiral, 11 },
    { L"bf: A2 - Speed-Up Enhance Frames 1", 0x510bd60, 0x510bd80, indexCPS2_Spiral, 12 },
    { L"c0: A2 - Speed-Up Enhance Frames 2", 0x510bd80, 0x510bda0, indexCPS2_Spiral, 12 },
    { L"c1: A2 - Speed-Up Enhance Frames 3", 0x510bda0, 0x510bdc0, indexCPS2_Spiral, 12 },
    { L"c2: A2 - Speed-Up Enhance Frames 4", 0x510bdc0, 0x510bde0, indexCPS2_Spiral, 12 },
    { L"c3: A2 - Speed-Up Enhance Frames 5", 0x510bde0, 0x510be00, indexCPS2_Spiral, 12 },
    { L"c4: A2 - Speed-Up Enhance Frames 6", 0x510be00, 0x510be20, indexCPS2_Spiral, 12 },
    { L"c5: Not Used", 0x510be20, 0x510be40 },
    { L"c6: Not Used", 0x510be40, 0x510be60 },
    { L"c7: A2 - Metamorphosis Dance frames 1", 0x510be60, 0x510be80, indexCPS2_Spiral, 12 },
    { L"c8: A2 - Metamorphosis Dance frames 2", 0x510be80, 0x510bea0, indexCPS2_Spiral, 12 },
    { L"c9: A2 - Metamorphosis Dance frames 3", 0x510bea0, 0x510bec0, indexCPS2_Spiral, 12 },
    { L"ca: A2 - Metamorphosis Dance frames 4", 0x510bec0, 0x510bee0, indexCPS2_Spiral, 12 },
    { L"cb: A2 - Metamorphosis Dance frames 5", 0x510bee0, 0x510bf00, indexCPS2_Spiral, 12 },
    { L"cc: A2 - Metamorphosis Dance frames 6", 0x510bf00, 0x510bf20, indexCPS2_Spiral, 12 },
    { L"cd: A2 - Metamorphosis Dance frames 7", 0x510bf20, 0x510bf40, indexCPS2_Spiral, 12 },
    { L"ce: A2 - Metamorphosis Dance frames 8", 0x510bf40, 0x510bf60, indexCPS2_Spiral, 12 },
    { L"cf: A2 - Metamorphosis Dance frames 9", 0x510bf60, 0x510bf80, indexCPS2_Spiral, 12 },
    { L"d0: A2 - Metamorphosis Dance frames 10", 0x510bf80, 0x510bfa0, indexCPS2_Spiral, 12 },
    { L"d1: A2 - Metamorphosis Dance frames 11", 0x510bfa0, 0x510bfc0, indexCPS2_Spiral, 12 },
    { L"d2: A2 - Metamorphosis Dance frames 12", 0x510bfc0, 0x510bfe0, indexCPS2_Spiral, 12 },
};

const sDescTreeNode MVC2_A_SPIRAL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_LP, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_LK, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_HP, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_HK, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_A1, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_A2, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SPIRAL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_LP[] =
{
    { L"Main Color LP", 0x5235a60, 0x5235a80, indexCPS2_Colossus, 0 },
    { L"(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235a80, 0x5235aa0, indexCPS2_Colossus, 1 },
    { L"(03) Not Used", 0x5235aa0, 0x5235ac0, indexCPS2_Colossus, 2 },
    { L"(04) Stance Frame Main Color + lum-4", 0x5235ac0, 0x5235ae0, indexCPS2_Colossus, 0 },
    { L"(05) ID:01-13 Dash Throw (effect)", 0x5235ae0, 0x5235b00, indexCPS2_Colossus, 4 },
    { L"(06) Not Used", 0x5235b00, 0x5235b20, indexCPS2_Colossus, 5 },
    { L"(07) Not Used", 0x5235b20, 0x5235b40, indexCPS2_Colossus, 0 },
    { L"(08) Not Used", 0x5235b40, 0x5235b60, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_LK[] =
{
    { L"Main Color LK", 0x5235b60, 0x5235b80, indexCPS2_Colossus, 0 },
    { L"(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235b80, 0x5235ba0, indexCPS2_Colossus, 1 },
    { L"(03) Not Used", 0x5235ba0, 0x5235bc0, indexCPS2_Colossus, 2 },
    { L"(04) Stance Frame Main Color + lum-4", 0x5235bc0, 0x5235be0, indexCPS2_Colossus, 0 },
    { L"(05) ID:01-13 Dash Throw (effect)", 0x5235be0, 0x5235c00, indexCPS2_Colossus, 4 },
    { L"(06) Not Used", 0x5235c00, 0x5235c20, indexCPS2_Colossus, 5 },
    { L"(07) Not Used", 0x5235c20, 0x5235c40, indexCPS2_Colossus, 0 },
    { L"(08) Not Used", 0x5235c40, 0x5235c60, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_HP[] =
{
    { L"Main Color HP", 0x5235c60, 0x5235c80, indexCPS2_Colossus, 0 },
    { L"(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235c80, 0x5235ca0, indexCPS2_Colossus, 1 },
    { L"(03) Not Used", 0x5235ca0, 0x5235cc0, indexCPS2_Colossus, 2 },
    { L"(04) Stance Frame Main Color + lum-4", 0x5235cc0, 0x5235ce0, indexCPS2_Colossus, 0 },
    { L"(05) ID:01-13 Dash Throw (effect)", 0x5235ce0, 0x5235d00, indexCPS2_Colossus, 4 },
    { L"(06) Not Used", 0x5235d00, 0x5235d20, indexCPS2_Colossus, 5 },
    { L"(07) Not Used", 0x5235d20, 0x5235d40, indexCPS2_Colossus, 0 },
    { L"(08) Not Used", 0x5235d40, 0x5235d60, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_HK[] =
{
    { L"Main Color HK", 0x5235d60, 0x5235d80, indexCPS2_Colossus, 0 },
    { L"(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235d80, 0x5235da0, indexCPS2_Colossus, 1 },
    { L"(03) Not Used", 0x5235da0, 0x5235dc0, indexCPS2_Colossus, 2 },
    { L"(04) Stance Frame Main Color + lum-4", 0x5235dc0, 0x5235de0, indexCPS2_Colossus, 0 },
    { L"(05) ID:01-13 Dash Throw (effect)", 0x5235de0, 0x5235e00, indexCPS2_Colossus, 4 },
    { L"(06) Not Used", 0x5235e00, 0x5235e20, indexCPS2_Colossus, 5 },
    { L"(07) Not Used", 0x5235e20, 0x5235e40, indexCPS2_Colossus, 0 },
    { L"(08) Not Used", 0x5235e40, 0x5235e60, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_A1[] =
{
    { L"Main Color A1", 0x5235e60, 0x5235e80, indexCPS2_Colossus, 0 },
    { L"(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235e80, 0x5235ea0, indexCPS2_Colossus, 1 },
    { L"(03) Not Used", 0x5235ea0, 0x5235ec0, indexCPS2_Colossus, 2 },
    { L"(04) Stance Frame Main Color + lum-4", 0x5235ec0, 0x5235ee0, indexCPS2_Colossus, 0 },
    { L"(05) ID:01-13 Dash Throw (effect)", 0x5235ee0, 0x5235f00, indexCPS2_Colossus, 4 },
    { L"(06) Not Used", 0x5235f00, 0x5235f20, indexCPS2_Colossus, 5 },
    { L"(07) Not Used", 0x5235f20, 0x5235f40, indexCPS2_Colossus, 0 },
    { L"(08) Not Used", 0x5235f40, 0x5235f60, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_A2[] =
{
    { L"Main Color A2", 0x5235f60, 0x5235f80, indexCPS2_Colossus, 0 },
    { L"(02) ID:01-09 Armor Shine (sparks) / FP ID:10-15 Not Used", 0x5235f80, 0x5235fa0, indexCPS2_Colossus, 1 },
    { L"(03) Not Used", 0x5235fa0, 0x5235fc0, indexCPS2_Colossus, 2 },
    { L"(04) Stance Frame Main Color + lum-4", 0x5235fc0, 0x5235fe0, indexCPS2_Colossus, 0 },
    { L"(05) ID:01-13 Dash Throw (effect)", 0x5235fe0, 0x5236000, indexCPS2_Colossus, 4 },
    { L"(06) Not Used", 0x5236000, 0x5236020, indexCPS2_Colossus, 5 },
    { L"(07) Not Used", 0x5236020, 0x5236040, indexCPS2_Colossus, 0 },
    { L"(08) Not Used", 0x5236040, 0x5236060, indexCPS2_Colossus, 7 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x5236060, 0x5236080, indexCPS2_Colossus, 0 },
    { L"Burning Light", 0x5236080, 0x52360a0, indexCPS2_Colossus, 0 },
    { L"Shocked Dark", 0x52360a0, 0x52360c0, indexCPS2_Colossus, 0 },
    { L"Shocked Light", 0x52360c0, 0x52360e0, indexCPS2_Colossus, 0 },
    { L"Dark Burning Dark", 0x52360e0, 0x5236100, indexCPS2_Colossus, 0 },
    { L"Dark Burning Light", 0x5236100, 0x5236120, indexCPS2_Colossus, 0 },
    { L"Kinetic Charge Dark", 0x5236120, 0x5236140, indexCPS2_Colossus, 0 },
    { L"Kinetic Charge Light", 0x5236140, 0x5236160, indexCPS2_Colossus, 0 },
};

const sGame_PaletteDataset MVC2_A_COLOSSUS_PALETTES_EXTRAS[] =
{
    { L"09: LP - Super Armor Shine Frame 1 LP Color then add ID:02-07 + ID:12-15 (lumin-13) & ID:07(fullwIhDite:0) 7 (shine, modify)", 0x5236160, 0x5236180, indexCPS2_Colossus, 0 },
    { L"0a: LP - Super Armor Shine Frame 2 LP Color then add ID:02-07 + ID:12-15 (lumin-5) & ID:06(fullwhIitDe):06 (shine, modify)", 0x5236180, 0x52361a0, indexCPS2_Colossus, 0 },
    { L"0b: LP - Super Armor Shine Frame 3 LP Color then add ID:02-07 + ID:12-15 (lumin+8) & ID:05(fullwhIiDte:)05 (shine, modify)", 0x52361a0, 0x52361c0, indexCPS2_Colossus, 0 },
    { L"0c: LP - Super Armor Shine Frame 4 LP Color then add ID:02-07 + ID:12-15 (lumin+13) & ID:04(fullwIhDit:e0)4 (shine, modify)", 0x52361c0, 0x52361e0, indexCPS2_Colossus, 0 },
    { L"0d: LP - Super Armor Shine Frame 5 LP Color then add ID:02-07 + ID:12-15 (lumin+29) & ID:03(fullwIhDit:e0)3 (shine, modify)", 0x52361e0, 0x5236200, indexCPS2_Colossus, 0 },
    { L"0e: LP - Super Armor Shine Frame 6 LP Color then add ID:02-07 + ID:12-15 (lumin+46) & ID:02(fullwhite)", 0x5236200, 0x5236220, indexCPS2_Colossus, 0 },
    { L"0f: LP - Stance Frame 1 Original color LP", 0x5236220, 0x5236240, indexCPS2_Colossus, 0 },
    { L"10: LP - Stance Frame 2 LP Color then add ID:02-07 (fullshine - white)", 0x5236240, 0x5236260, indexCPS2_Colossus, 0 },
    { L"11: LP - Stance Frame 3 LP Color then add from original, copy ID:03-04 to ID: 06-07 (shine)", 0x5236260, 0x5236280, indexCPS2_Colossus, 0 },
    { L"12: LP - Stance Frame 4 LP Color then add from original, copy ID:02-03 to ID: 04-05 (shine)", 0x5236280, 0x52362a0, indexCPS2_Colossus, 0 },
    { L"13: LP - Stance Frame 5 LP Color then add from original, ID:03 = fullwhite (shine)", 0x52362a0, 0x52362c0, indexCPS2_Colossus, 0 },
    { L"14: LP - Stance Frame 6 LP Color then add from original, ID:04 to ID:07", 0x52362c0, 0x52362e0, indexCPS2_Colossus, 0 },
    { L"15: LP - Stance Frame 7 LP Color then add from original: ID:03 to ID:06", 0x52362e0, 0x5236300, indexCPS2_Colossus, 0 },
    { L"16: LP - Stance Frame 8 LP Color then add from original: ID:02 to ID:05", 0x5236300, 0x5236320, indexCPS2_Colossus, 0 },
    { L"17: LP - Stance Frame 9 LP Color then add from original; ID:02 to ID:04", 0x5236320, 0x5236340, indexCPS2_Colossus, 0 },
    { L"18: LP - Power Dive Shine Frame 1 LP Color then add Original Palette & add Lum+31", 0x5236340, 0x5236360, indexCPS2_Colossus, 0 },
    { L"19: LP - Power Dive Shine Frame 2 LP Color then add Original Palette & add Lum+45", 0x5236360, 0x5236380, indexCPS2_Colossus, 0 },
    { L"1a: LP - Power Dive Shine Frame 3 Fullwhite", 0x5236380, 0x52363a0, indexCPS2_Colossus, 0 },
    { L"1b: LP - Power Dive Shine Frame 4 LP Color then add original palette + lum-18, then copy ID:09 to ID:08, and ID:03 to ID:02", 0x52363a0, 0x52363c0, indexCPS2_Colossus, 0 },
    { L"1c: LP - Power Dive Shine Frame 5 LP Color then add original palette + lum-13, then copy ID:09 to ID:08, and ID:03 to ID:02", 0x52363c0, 0x52363e0, indexCPS2_Colossus, 0 },
    { L"1d: LP - Power Dive Shine Frame 6 LP Color then add original palette + lum-6, then copy ID:09 to ID:08, and ID:03-06 to ID:04-07 then ID:03 to ID:02", 0x52363e0, 0x5236400, indexCPS2_Colossus, 0 },
    { L"1e: LP - Power Dive Shine Frame 7 LP Color then add Original color LP", 0x5236400, 0x5236420, indexCPS2_Colossus, 0 },
    { L"1f: LP - Power Dive Shine Frame 8 LP Color then add original palette + lum-5", 0x5236420, 0x5236440, indexCPS2_Colossus, 0 },
    { L"20: LP - Power Dive Shine Frame 9 LP Color then add original palette + lum+25", 0x5236440, 0x5236460, indexCPS2_Colossus, 0 },
    { L"21: LP - Power Dive Shine Frame 10 Original color LP", 0x5236460, 0x5236480, indexCPS2_Colossus, 0 },
    { L"22: LP - Super Armor Stance Frame 1 LP Color then add ID:02-15(lum-15), ID:07 = fullwhite (shine)", 0x5236480, 0x52364a0, indexCPS2_Colossus, 0 },
    { L"23: LP - Super Armor Stance Frame 2 LP Color then add ID:02-15(lum-8), ID:06 = fullwhite (shine)", 0x52364a0, 0x52364c0, indexCPS2_Colossus, 0 },
    { L"24: LP - Super Armor Stance Frame 3 LP Color then add ID:02-15(lum-4), ID:05 = fullwhite (shine)", 0x52364c0, 0x52364e0, indexCPS2_Colossus, 0 },
    { L"25: LP - Super Armor Stance Frame 4 LP Color then add original palette, ID:04 = fullwhite", 0x52364e0, 0x5236500, indexCPS2_Colossus, 0 },
    { L"26: LP - Super Armor Stance Frame 5 LP Color then add Original Palette & add (Lumin+30 to ID:02-15)", 0x5236500, 0x5236520, indexCPS2_Colossus, 0 },
    { L"27: LP - Super Armor Stance Frame 6 LP Color then add Original Palette & add (Lumin+45 to ID:02-15), then ID:11 (Lumin-7 & sat+50)", 0x5236520, 0x5236540, indexCPS2_Colossus, 0 },
    { L"28: LP - Super Armor Stance Frame 7 Original color LP", 0x5236540, 0x5236560, indexCPS2_Colossus, 0 },
    { L"29: LK - Super Armor Shine Frame 1", 0x5236560, 0x5236580, indexCPS2_Colossus, 0 },
    { L"2a: LK - Super Armor Shine Frame 2", 0x5236580, 0x52365a0, indexCPS2_Colossus, 0 },
    { L"2b: LK - Super Armor Shine Frame 3", 0x52365a0, 0x52365c0, indexCPS2_Colossus, 0 },
    { L"2c: LK - Super Armor Shine Frame 4", 0x52365c0, 0x52365e0, indexCPS2_Colossus, 0 },
    { L"2d: LK - Super Armor Shine Frame 5", 0x52365e0, 0x5236600, indexCPS2_Colossus, 0 },
    { L"2e: LK - Super Armor Shine Frame 6", 0x5236600, 0x5236620, indexCPS2_Colossus, 0 },
    { L"2f: LK - Stance Frame 1", 0x5236620, 0x5236640, indexCPS2_Colossus, 0 },
    { L"30: LK - Stance Frame 2", 0x5236640, 0x5236660, indexCPS2_Colossus, 0 },
    { L"31: LK - Stance Frame 3", 0x5236660, 0x5236680, indexCPS2_Colossus, 0 },
    { L"32: LK - Stance Frame 4", 0x5236680, 0x52366a0, indexCPS2_Colossus, 0 },
    { L"33: LK - Stance Frame 5", 0x52366a0, 0x52366c0, indexCPS2_Colossus, 0 },
    { L"34: LK - Stance Frame 6", 0x52366c0, 0x52366e0, indexCPS2_Colossus, 0 },
    { L"35: LK - Stance Frame 7", 0x52366e0, 0x5236700, indexCPS2_Colossus, 0 },
    { L"36: LK - Stance Frame 8", 0x5236700, 0x5236720, indexCPS2_Colossus, 0 },
    { L"37: LK - Stance Frame 9", 0x5236720, 0x5236740, indexCPS2_Colossus, 0 },
    { L"38: LK - Power Dive Shine Frame 1", 0x5236740, 0x5236760, indexCPS2_Colossus, 0 },
    { L"39: LK - Power Dive Shine Frame 2", 0x5236760, 0x5236780, indexCPS2_Colossus, 0 },
    { L"3a: LK - Power Dive Shine Frame 3", 0x5236780, 0x52367a0, indexCPS2_Colossus, 0 },
    { L"3b: LK - Power Dive Shine Frame 4", 0x52367a0, 0x52367c0, indexCPS2_Colossus, 0 },
    { L"3c: LK - Power Dive Shine Frame 5", 0x52367c0, 0x52367e0, indexCPS2_Colossus, 0 },
    { L"3d: LK - Power Dive Shine Frame 6", 0x52367e0, 0x5236800, indexCPS2_Colossus, 0 },
    { L"3e: LK - Power Dive Shine Frame 7", 0x5236800, 0x5236820, indexCPS2_Colossus, 0 },
    { L"3f: LK - Power Dive Shine Frame 8", 0x5236820, 0x5236840, indexCPS2_Colossus, 0 },
    { L"40: LK - Power Dive Shine Frame 9", 0x5236840, 0x5236860, indexCPS2_Colossus, 0 },
    { L"41: LK - Power Dive Shine Frame 10", 0x5236860, 0x5236880, indexCPS2_Colossus, 0 },
    { L"42: LK - Super Armor Stance Frame 1", 0x5236880, 0x52368a0, indexCPS2_Colossus, 0 },
    { L"43: LK - Super Armor Stance Frame 2", 0x52368a0, 0x52368c0, indexCPS2_Colossus, 0 },
    { L"44: LK - Super Armor Stance Frame 3", 0x52368c0, 0x52368e0, indexCPS2_Colossus, 0 },
    { L"45: LK - Super Armor Stance Frame 4", 0x52368e0, 0x5236900, indexCPS2_Colossus, 0 },
    { L"46: LK - Super Armor Stance Frame 5", 0x5236900, 0x5236920, indexCPS2_Colossus, 0 },
    { L"47: LK - Super Armor Stance Frame 6", 0x5236920, 0x5236940, indexCPS2_Colossus, 0 },
    { L"48: LK - Super Armor Stance Frame 7", 0x5236940, 0x5236960, indexCPS2_Colossus, 0 },
    { L"49: HP - Super Armor Shine Frame 1", 0x5236960, 0x5236980, indexCPS2_Colossus, 0 },
    { L"4a: HP - Super Armor Shine Frame 2", 0x5236980, 0x52369a0, indexCPS2_Colossus, 0 },
    { L"4b: HP - Super Armor Shine Frame 3", 0x52369a0, 0x52369c0, indexCPS2_Colossus, 0 },
    { L"4c: HP - Super Armor Shine Frame 4", 0x52369c0, 0x52369e0, indexCPS2_Colossus, 0 },
    { L"4d: HP - Super Armor Shine Frame 5", 0x52369e0, 0x5236a00, indexCPS2_Colossus, 0 },
    { L"4e: HP - Super Armor Shine Frame 6", 0x5236a00, 0x5236a20, indexCPS2_Colossus, 0 },
    { L"4f: HP - Stance Frame 1", 0x5236a20, 0x5236a40, indexCPS2_Colossus, 0 },
    { L"50: HP - Stance Frame 2", 0x5236a40, 0x5236a60, indexCPS2_Colossus, 0 },
    { L"51: HP - Stance Frame 3", 0x5236a60, 0x5236a80, indexCPS2_Colossus, 0 },
    { L"52: HP - Stance Frame 4", 0x5236a80, 0x5236aa0, indexCPS2_Colossus, 0 },
    { L"53: HP - Stance Frame 5", 0x5236aa0, 0x5236ac0, indexCPS2_Colossus, 0 },
    { L"54: HP - Stance Frame 6", 0x5236ac0, 0x5236ae0, indexCPS2_Colossus, 0 },
    { L"55: HP - Stance Frame 7", 0x5236ae0, 0x5236b00, indexCPS2_Colossus, 0 },
    { L"56: HP - Stance Frame 8", 0x5236b00, 0x5236b20, indexCPS2_Colossus, 0 },
    { L"57: HP - Stance Frame 9", 0x5236b20, 0x5236b40, indexCPS2_Colossus, 0 },
    { L"58: HP - Power Dive Shine Frame 1", 0x5236b40, 0x5236b60, indexCPS2_Colossus, 0 },
    { L"59: HP - Power Dive Shine Frame 2", 0x5236b60, 0x5236b80, indexCPS2_Colossus, 0 },
    { L"5a: HP - Power Dive Shine Frame 3", 0x5236b80, 0x5236ba0, indexCPS2_Colossus, 0 },
    { L"5b: HP - Power Dive Shine Frame 4", 0x5236ba0, 0x5236bc0, indexCPS2_Colossus, 0 },
    { L"5c: HP - Power Dive Shine Frame 5", 0x5236bc0, 0x5236be0, indexCPS2_Colossus, 0 },
    { L"5d: HP - Power Dive Shine Frame 6", 0x5236be0, 0x5236c00, indexCPS2_Colossus, 0 },
    { L"5e: HP - Power Dive Shine Frame 7", 0x5236c00, 0x5236c20, indexCPS2_Colossus, 0 },
    { L"5f: HP - Power Dive Shine Frame 8", 0x5236c20, 0x5236c40, indexCPS2_Colossus, 0 },
    { L"60: HP - Power Dive Shine Frame 9", 0x5236c40, 0x5236c60, indexCPS2_Colossus, 0 },
    { L"61: HP - Power Dive Shine Frame 10", 0x5236c60, 0x5236c80, indexCPS2_Colossus, 0 },
    { L"62: HP - Super Armor Stance Frame 1", 0x5236c80, 0x5236ca0, indexCPS2_Colossus, 0 },
    { L"63: HP - Super Armor Stance Frame 2", 0x5236ca0, 0x5236cc0, indexCPS2_Colossus, 0 },
    { L"64: HP - Super Armor Stance Frame 3", 0x5236cc0, 0x5236ce0, indexCPS2_Colossus, 0 },
    { L"65: HP - Super Armor Stance Frame 4", 0x5236ce0, 0x5236d00, indexCPS2_Colossus, 0 },
    { L"66: HP - Super Armor Stance Frame 5", 0x5236d00, 0x5236d20, indexCPS2_Colossus, 0 },
    { L"67: HP - Super Armor Stance Frame 6", 0x5236d20, 0x5236d40, indexCPS2_Colossus, 0 },
    { L"68: HP - Super Armor Stance Frame 7", 0x5236d40, 0x5236d60, indexCPS2_Colossus, 0 },
    { L"69: HK - Super Armor Shine Frame 1", 0x5236d60, 0x5236d80, indexCPS2_Colossus, 0 },
    { L"6a: HK - Super Armor Shine Frame 2", 0x5236d80, 0x5236da0, indexCPS2_Colossus, 0 },
    { L"6b: HK - Super Armor Shine Frame 3", 0x5236da0, 0x5236dc0, indexCPS2_Colossus, 0 },
    { L"6c: HK - Super Armor Shine Frame 4", 0x5236dc0, 0x5236de0, indexCPS2_Colossus, 0 },
    { L"6d: HK - Super Armor Shine Frame 5", 0x5236de0, 0x5236e00, indexCPS2_Colossus, 0 },
    { L"6e: HK - Super Armor Shine Frame 6", 0x5236e00, 0x5236e20, indexCPS2_Colossus, 0 },
    { L"6f: HK - Stance Frame 1", 0x5236e20, 0x5236e40, indexCPS2_Colossus, 0 },
    { L"70: HK - Stance Frame 2", 0x5236e40, 0x5236e60, indexCPS2_Colossus, 0 },
    { L"71: HK - Stance Frame 3", 0x5236e60, 0x5236e80, indexCPS2_Colossus, 0 },
    { L"72: HK - Stance Frame 4", 0x5236e80, 0x5236ea0, indexCPS2_Colossus, 0 },
    { L"73: HK - Stance Frame 5", 0x5236ea0, 0x5236ec0, indexCPS2_Colossus, 0 },
    { L"74: HK - Stance Frame 6", 0x5236ec0, 0x5236ee0, indexCPS2_Colossus, 0 },
    { L"75: HK - Stance Frame 7", 0x5236ee0, 0x5236f00, indexCPS2_Colossus, 0 },
    { L"76: HK - Stance Frame 8", 0x5236f00, 0x5236f20, indexCPS2_Colossus, 0 },
    { L"77: HK - Stance Frame 9", 0x5236f20, 0x5236f40, indexCPS2_Colossus, 0 },
    { L"78: HK - Power Dive Shine Frame 1", 0x5236f40, 0x5236f60, indexCPS2_Colossus, 0 },
    { L"79: HK - Power Dive Shine Frame 2", 0x5236f60, 0x5236f80, indexCPS2_Colossus, 0 },
    { L"7a: HK - Power Dive Shine Frame 3", 0x5236f80, 0x5236fa0, indexCPS2_Colossus, 0 },
    { L"7b: HK - Power Dive Shine Frame 4", 0x5236fa0, 0x5236fc0, indexCPS2_Colossus, 0 },
    { L"7c: HK - Power Dive Shine Frame 5", 0x5236fc0, 0x5236fe0, indexCPS2_Colossus, 0 },
    { L"7d: HK - Power Dive Shine Frame 6", 0x5236fe0, 0x5237000, indexCPS2_Colossus, 0 },
    { L"7e: HK - Power Dive Shine Frame 7", 0x5237000, 0x5237020, indexCPS2_Colossus, 0 },
    { L"7f: HK - Power Dive Shine Frame 8", 0x5237020, 0x5237040, indexCPS2_Colossus, 0 },
    { L"80: HK - Power Dive Shine Frame 9", 0x5237040, 0x5237060, indexCPS2_Colossus, 0 },
    { L"81: HK - Power Dive Shine Frame 10", 0x5237060, 0x5237080, indexCPS2_Colossus, 0 },
    { L"82: HK - Super Armor Stance Frame 1", 0x5237080, 0x52370a0, indexCPS2_Colossus, 0 },
    { L"83: HK - Super Armor Stance Frame 2", 0x52370a0, 0x52370c0, indexCPS2_Colossus, 0 },
    { L"84: HK - Super Armor Stance Frame 3", 0x52370c0, 0x52370e0, indexCPS2_Colossus, 0 },
    { L"85: HK - Super Armor Stance Frame 4", 0x52370e0, 0x5237100, indexCPS2_Colossus, 0 },
    { L"86: HK - Super Armor Stance Frame 5", 0x5237100, 0x5237120, indexCPS2_Colossus, 0 },
    { L"87: HK - Super Armor Stance Frame 6", 0x5237120, 0x5237140, indexCPS2_Colossus, 0 },
    { L"88: HK - Super Armor Stance Frame 7", 0x5237140, 0x5237160, indexCPS2_Colossus, 0 },
    { L"89: A1 - Super Armor Shine Frame 1", 0x5237160, 0x5237180, indexCPS2_Colossus, 0 },
    { L"8a: A1 - Super Armor Shine Frame 2", 0x5237180, 0x52371a0, indexCPS2_Colossus, 0 },
    { L"8b: A1 - Super Armor Shine Frame 3", 0x52371a0, 0x52371c0, indexCPS2_Colossus, 0 },
    { L"8c: A1 - Super Armor Shine Frame 4", 0x52371c0, 0x52371e0, indexCPS2_Colossus, 0 },
    { L"8d: A1 - Super Armor Shine Frame 5", 0x52371e0, 0x5237200, indexCPS2_Colossus, 0 },
    { L"8e: A1 - Super Armor Shine Frame 6", 0x5237200, 0x5237220, indexCPS2_Colossus, 0 },
    { L"8f: A1 - Stance Frame 1", 0x5237220, 0x5237240, indexCPS2_Colossus, 0 },
    { L"90: A1 - Stance Frame 2", 0x5237240, 0x5237260, indexCPS2_Colossus, 0 },
    { L"91: A1 - Stance Frame 3", 0x5237260, 0x5237280, indexCPS2_Colossus, 0 },
    { L"92: A1 - Stance Frame 4", 0x5237280, 0x52372a0, indexCPS2_Colossus, 0 },
    { L"93: A1 - Stance Frame 5", 0x52372a0, 0x52372c0, indexCPS2_Colossus, 0 },
    { L"94: A1 - Stance Frame 6", 0x52372c0, 0x52372e0, indexCPS2_Colossus, 0 },
    { L"95: A1 - Stance Frame 7", 0x52372e0, 0x5237300, indexCPS2_Colossus, 0 },
    { L"96: A1 - Stance Frame 8", 0x5237300, 0x5237320, indexCPS2_Colossus, 0 },
    { L"97: A1 - Stance Frame 9", 0x5237320, 0x5237340, indexCPS2_Colossus, 0 },
    { L"98: A1 - Power Dive Shine Frame 1", 0x5237340, 0x5237360, indexCPS2_Colossus, 0 },
    { L"99: A1 - Power Dive Shine Frame 2", 0x5237360, 0x5237380, indexCPS2_Colossus, 0 },
    { L"9a: A1 - Power Dive Shine Frame 3", 0x5237380, 0x52373a0, indexCPS2_Colossus, 0 },
    { L"9b: A1 - Power Dive Shine Frame 4", 0x52373a0, 0x52373c0, indexCPS2_Colossus, 0 },
    { L"9c: A1 - Power Dive Shine Frame 5", 0x52373c0, 0x52373e0, indexCPS2_Colossus, 0 },
    { L"9d: A1 - Power Dive Shine Frame 6", 0x52373e0, 0x5237400, indexCPS2_Colossus, 0 },
    { L"9e: A1 - Power Dive Shine Frame 7", 0x5237400, 0x5237420, indexCPS2_Colossus, 0 },
    { L"9f: A1 - Power Dive Shine Frame 8", 0x5237420, 0x5237440, indexCPS2_Colossus, 0 },
    { L"a0: A1 - Power Dive Shine Frame 9", 0x5237440, 0x5237460, indexCPS2_Colossus, 0 },
    { L"a1: A1 - Power Dive Shine Frame 10", 0x5237460, 0x5237480, indexCPS2_Colossus, 0 },
    { L"a2: A1 - Super Armor Stance Frame 1", 0x5237480, 0x52374a0, indexCPS2_Colossus, 0 },
    { L"a3: A1 - Super Armor Stance Frame 2", 0x52374a0, 0x52374c0, indexCPS2_Colossus, 0 },
    { L"a4: A1 - Super Armor Stance Frame 3", 0x52374c0, 0x52374e0, indexCPS2_Colossus, 0 },
    { L"a5: A1 - Super Armor Stance Frame 4", 0x52374e0, 0x5237500, indexCPS2_Colossus, 0 },
    { L"a6: A1 - Super Armor Stance Frame 5", 0x5237500, 0x5237520, indexCPS2_Colossus, 0 },
    { L"a7: A1 - Super Armor Stance Frame 6", 0x5237520, 0x5237540, indexCPS2_Colossus, 0 },
    { L"a8: A1 - Super Armor Stance Frame 7", 0x5237540, 0x5237560, indexCPS2_Colossus, 0 },
    { L"a9: A2 - Super Armor Shine Frame 1", 0x5237560, 0x5237580, indexCPS2_Colossus, 0 },
    { L"aa: A2 - Super Armor Shine Frame 2", 0x5237580, 0x52375a0, indexCPS2_Colossus, 0 },
    { L"ab: A2 - Super Armor Shine Frame 3", 0x52375a0, 0x52375c0, indexCPS2_Colossus, 0 },
    { L"ac: A2 - Super Armor Shine Frame 4", 0x52375c0, 0x52375e0, indexCPS2_Colossus, 0 },
    { L"ad: A2 - Super Armor Shine Frame 5", 0x52375e0, 0x5237600, indexCPS2_Colossus, 0 },
    { L"ae: A2 - Super Armor Shine Frame 6", 0x5237600, 0x5237620, indexCPS2_Colossus, 0 },
    { L"af: A2 - Stance Frame 1", 0x5237620, 0x5237640, indexCPS2_Colossus, 0 },
    { L"b0: A2 - Stance Frame 2", 0x5237640, 0x5237660, indexCPS2_Colossus, 0 },
    { L"b1: A2 - Stance Frame 3", 0x5237660, 0x5237680, indexCPS2_Colossus, 0 },
    { L"b2: A2 - Stance Frame 4", 0x5237680, 0x52376a0, indexCPS2_Colossus, 0 },
    { L"b3: A2 - Stance Frame 5", 0x52376a0, 0x52376c0, indexCPS2_Colossus, 0 },
    { L"b4: A2 - Stance Frame 6", 0x52376c0, 0x52376e0, indexCPS2_Colossus, 0 },
    { L"b5: A2 - Stance Frame 7", 0x52376e0, 0x5237700, indexCPS2_Colossus, 0 },
    { L"b6: A2 - Stance Frame 8", 0x5237700, 0x5237720, indexCPS2_Colossus, 0 },
    { L"b7: A2 - Stance Frame 9", 0x5237720, 0x5237740, indexCPS2_Colossus, 0 },
    { L"b8: A2 - Power Dive Shine Frame 1", 0x5237740, 0x5237760, indexCPS2_Colossus, 0 },
    { L"b9: A2 - Power Dive Shine Frame 2", 0x5237760, 0x5237780, indexCPS2_Colossus, 0 },
    { L"ba: A2 - Power Dive Shine Frame 3", 0x5237780, 0x52377a0, indexCPS2_Colossus, 0 },
    { L"bb: A2 - Power Dive Shine Frame 4", 0x52377a0, 0x52377c0, indexCPS2_Colossus, 0 },
    { L"bc: A2 - Power Dive Shine Frame 5", 0x52377c0, 0x52377e0, indexCPS2_Colossus, 0 },
    { L"bd: A2 - Power Dive Shine Frame 6", 0x52377e0, 0x5237800, indexCPS2_Colossus, 0 },
    { L"be: A2 - Power Dive Shine Frame 7", 0x5237800, 0x5237820, indexCPS2_Colossus, 0 },
    { L"bf: A2 - Power Dive Shine Frame 8", 0x5237820, 0x5237840, indexCPS2_Colossus, 0 },
    { L"c0: A2 - Power Dive Shine Frame 9", 0x5237840, 0x5237860, indexCPS2_Colossus, 0 },
    { L"c1: A2 - Power Dive Shine Frame 10", 0x5237860, 0x5237880, indexCPS2_Colossus, 0 },
    { L"c2: A2 - Super Armor Stance Frame 1", 0x5237880, 0x52378a0, indexCPS2_Colossus, 0 },
    { L"c3: A2 - Super Armor Stance Frame 2", 0x52378a0, 0x52378c0, indexCPS2_Colossus, 0 },
    { L"c4: A2 - Super Armor Stance Frame 3", 0x52378c0, 0x52378e0, indexCPS2_Colossus, 0 },
    { L"c5: A2 - Super Armor Stance Frame 4", 0x52378e0, 0x5237900, indexCPS2_Colossus, 0 },
    { L"c6: A2 - Super Armor Stance Frame 5", 0x5237900, 0x5237920, indexCPS2_Colossus, 0 },
    { L"c7: A2 - Super Armor Stance Frame 6", 0x5237920, 0x5237940, indexCPS2_Colossus, 0 },
    { L"c8: A2 - Super Armor Stance Frame 7", 0x5237940, 0x5237960, indexCPS2_Colossus, 0 },
};

const sDescTreeNode MVC2_A_COLOSSUS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_LP, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_LK, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_HP, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_HK, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_A1, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_A2, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_COLOSSUS_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x53384c0, 0x53384e0, indexCPS2_IronMan, 0 },
    { L"(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53384e0, 0x5338500, indexCPS2_IronMan, 1 },
    { L"(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338500, 0x5338520, indexCPS2_IronMan, 2 },
    { L"(04) Not Used", 0x5338520, 0x5338540, indexCPS2_IronMan, 3 },
    { L"(05) Not Used", 0x5338540, 0x5338560, indexCPS2_IronMan, 4 },
    { L"(06) Not Used", 0x5338560, 0x5338580, indexCPS2_IronMan, 5 },
    { L"(07) Not Used", 0x5338580, 0x53385a0, indexCPS2_IronMan, 6 },
    { L"(08) Not Used", 0x53385a0, 0x53385c0, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x53385c0, 0x53385e0, indexCPS2_IronMan, 0 },
    { L"(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53385e0, 0x5338600, indexCPS2_IronMan, 1 },
    { L"(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338600, 0x5338620, indexCPS2_IronMan, 2 },
    { L"(04) Not Used", 0x5338620, 0x5338640, indexCPS2_IronMan, 3 },
    { L"(05) Not Used", 0x5338640, 0x5338660, indexCPS2_IronMan, 4 },
    { L"(06) Not Used", 0x5338660, 0x5338680, indexCPS2_IronMan, 5 },
    { L"(07) Not Used", 0x5338680, 0x53386a0, indexCPS2_IronMan, 6 },
    { L"(08) Not Used", 0x53386a0, 0x53386c0, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x53386c0, 0x53386e0, indexCPS2_IronMan, 0 },
    { L"(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53386e0, 0x5338700, indexCPS2_IronMan, 1 },
    { L"(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338700, 0x5338720, indexCPS2_IronMan, 2 },
    { L"(04) Not Used", 0x5338720, 0x5338740, indexCPS2_IronMan, 3 },
    { L"(05) Not Used", 0x5338740, 0x5338760, indexCPS2_IronMan, 4 },
    { L"(06) Not Used", 0x5338760, 0x5338780, indexCPS2_IronMan, 5 },
    { L"(07) Not Used", 0x5338780, 0x53387a0, indexCPS2_IronMan, 6 },
    { L"(08) Not Used", 0x53387a0, 0x53387c0, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x53387c0, 0x53387e0, indexCPS2_IronMan, 0 },
    { L"(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53387e0, 0x5338800, indexCPS2_IronMan, 1 },
    { L"(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338800, 0x5338820, indexCPS2_IronMan, 2 },
    { L"(04) Not Used", 0x5338820, 0x5338840, indexCPS2_IronMan, 3 },
    { L"(05) Not Used", 0x5338840, 0x5338860, indexCPS2_IronMan, 4 },
    { L"(06) Not Used", 0x5338860, 0x5338880, indexCPS2_IronMan, 5 },
    { L"(07) Not Used", 0x5338880, 0x53388a0, indexCPS2_IronMan, 6 },
    { L"(08) Not Used", 0x53388a0, 0x53388c0, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x53388c0, 0x53388e0, indexCPS2_IronMan, 0 },
    { L"(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53388e0, 0x5338900, indexCPS2_IronMan, 1 },
    { L"(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338900, 0x5338920, indexCPS2_IronMan, 2 },
    { L"(04) Not Used", 0x5338920, 0x5338940, indexCPS2_IronMan, 3 },
    { L"(05) Not Used", 0x5338940, 0x5338960, indexCPS2_IronMan, 4 },
    { L"(06) Not Used", 0x5338960, 0x5338980, indexCPS2_IronMan, 5 },
    { L"(07) Not Used", 0x5338980, 0x53389a0, indexCPS2_IronMan, 6 },
    { L"(08) Not Used", 0x53389a0, 0x53389c0, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x53389c0, 0x53389e0, indexCPS2_IronMan, 0 },
    { L"(02) ID:01-08 Proton Cannon, ID:09-15 Rocket Flames (fly)", 0x53389e0, 0x5338a00, indexCPS2_IronMan, 1 },
    { L"(03) ID:01-08 Proton Cannon (laser) Unibeam / c.fp / Smart Bombs", 0x5338a00, 0x5338a20, indexCPS2_IronMan, 2 },
    { L"(04) Not Used", 0x5338a20, 0x5338a40, indexCPS2_IronMan, 3 },
    { L"(05) Not Used", 0x5338a40, 0x5338a60, indexCPS2_IronMan, 4 },
    { L"(06) Not Used", 0x5338a60, 0x5338a80, indexCPS2_IronMan, 5 },
    { L"(07) Not Used", 0x5338a80, 0x5338aa0, indexCPS2_IronMan, 6 },
    { L"(08) Not Used", 0x5338aa0, 0x5338ac0, indexCPS2_IronMan, 7 },
};

const sGame_PaletteDataset MVC2_A_IRONMAN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x5338ac0, 0x5338ae0, indexCPS2_IronMan, 0 },
    { L"Burning Light", 0x5338ae0, 0x5338b00, indexCPS2_IronMan, 0 },
    { L"Shocked Dark", 0x5338b00, 0x5338b20, indexCPS2_IronMan, 0 },
    { L"Shocked Light", 0x5338b20, 0x5338b40, indexCPS2_IronMan, 0 },
    { L"Dark Burning Dark", 0x5338b40, 0x5338b60, indexCPS2_IronMan, 0 },
    { L"Dark Burning Light", 0x5338b60, 0x5338b80, indexCPS2_IronMan, 0 },
    { L"Kinetic Charge Dark", 0x5338b80, 0x5338ba0, indexCPS2_IronMan, 0 },
    { L"Kinetic Charge Light", 0x5338ba0, 0x5338bc0, indexCPS2_IronMan, 0 },
};

const sDescTreeNode MVC2_A_IRONMAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_LP, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_LK, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_HP, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_HK, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_A1, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_A2, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_IRONMAN_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_LP[] =
{
    { L"Main Color LP", 0x545e420, 0x545e440, indexCPS2_Sentinel, 0, &pairHandledInCode },
    { L"(02) Drones (bombs) / Guts", 0x545e440, 0x545e460, indexCPS2_Sentinel, 1 },
    { L"(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e460, 0x545e480, indexCPS2_Sentinel, 2 },
    { L"(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e480, 0x545e4a0, indexCPS2_Sentinel, 3 },
    { L"(05) Not Used", 0x545e4a0, 0x545e4c0, indexCPS2_Sentinel, 4 },
    { L"(06) Not Used", 0x545e4c0, 0x545e4e0, indexCPS2_Sentinel, 5 },
    { L"(07) Not Used", 0x545e4e0, 0x545e500, indexCPS2_Sentinel, 0 },
    { L"(08) Not Used", 0x545e500, 0x545e520, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_LK[] =
{
    { L"Main Color LK", 0x545e520, 0x545e540, indexCPS2_Sentinel, 0, &pairHandledInCode },
    { L"(02) Drones (bombs) / Guts", 0x545e540, 0x545e560, indexCPS2_Sentinel, 1 },
    { L"(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e560, 0x545e580, indexCPS2_Sentinel, 2 },
    { L"(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e580, 0x545e5a0, indexCPS2_Sentinel, 3 },
    { L"(05) Not Used", 0x545e5a0, 0x545e5c0, indexCPS2_Sentinel, 4 },
    { L"(06) Not Used", 0x545e5c0, 0x545e5e0, indexCPS2_Sentinel, 5 },
    { L"(07) Not Used", 0x545e5e0, 0x545e600, indexCPS2_Sentinel, 0 },
    { L"(08) Not Used", 0x545e600, 0x545e620, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_HP[] =
{
    { L"Main Color HP", 0x545e620, 0x545e640, indexCPS2_Sentinel, 0, &pairHandledInCode },
    { L"(02) Drones (bombs) / Guts", 0x545e640, 0x545e660, indexCPS2_Sentinel, 1 },
    { L"(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e660, 0x545e680, indexCPS2_Sentinel, 2 },
    { L"(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e680, 0x545e6a0, indexCPS2_Sentinel, 3 },
    { L"(05) Not Used", 0x545e6a0, 0x545e6c0, indexCPS2_Sentinel, 4 },
    { L"(06) Not Used", 0x545e6c0, 0x545e6e0, indexCPS2_Sentinel, 5 },
    { L"(07) Not Used", 0x545e6e0, 0x545e700, indexCPS2_Sentinel, 0 },
    { L"(08) Not Used", 0x545e700, 0x545e720, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_HK[] =
{
    { L"Main Color HK", 0x545e720, 0x545e740, indexCPS2_Sentinel, 0, &pairHandledInCode },
    { L"(02) Drones (bombs) / Guts", 0x545e740, 0x545e760, indexCPS2_Sentinel, 1 },
    { L"(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e760, 0x545e780, indexCPS2_Sentinel, 2 },
    { L"(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e780, 0x545e7a0, indexCPS2_Sentinel, 3 },
    { L"(05) Not Used", 0x545e7a0, 0x545e7c0, indexCPS2_Sentinel, 4 },
    { L"(06) Not Used", 0x545e7c0, 0x545e7e0, indexCPS2_Sentinel, 5 },
    { L"(07) Not Used", 0x545e7e0, 0x545e800, indexCPS2_Sentinel, 0 },
    { L"(08) Not Used", 0x545e800, 0x545e820, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_A1[] =
{
    { L"Main Color A1", 0x545e820, 0x545e840, indexCPS2_Sentinel, 0, &pairHandledInCode },
    { L"(02) Drones (bombs) / Guts", 0x545e840, 0x545e860, indexCPS2_Sentinel, 1 },
    { L"(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e860, 0x545e880, indexCPS2_Sentinel, 2 },
    { L"(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e880, 0x545e8a0, indexCPS2_Sentinel, 3 },
    { L"(05) Not Used", 0x545e8a0, 0x545e8c0, indexCPS2_Sentinel, 4 },
    { L"(06) Not Used", 0x545e8c0, 0x545e8e0, indexCPS2_Sentinel, 5 },
    { L"(07) Not Used", 0x545e8e0, 0x545e900, indexCPS2_Sentinel, 0 },
    { L"(08) Not Used", 0x545e900, 0x545e920, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_A2[] =
{
    { L"Main Color A2", 0x545e920, 0x545e940, indexCPS2_Sentinel, 0, &pairHandledInCode },
    { L"(02) Drones (bombs) / Guts", 0x545e940, 0x545e960, indexCPS2_Sentinel, 1 },
    { L"(03) s.MP, c.MP / ID:01&14-15 Rocket Punch (wires)", 0x545e960, 0x545e980, indexCPS2_Sentinel, 2 },
    { L"(04) ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames)", 0x545e980, 0x545e9a0, indexCPS2_Sentinel, 3 },
    { L"(05) Not Used", 0x545e9a0, 0x545e9c0, indexCPS2_Sentinel, 4 },
    { L"(06) Not Used", 0x545e9c0, 0x545e9e0, indexCPS2_Sentinel, 5 },
    { L"(07) Not Used", 0x545e9e0, 0x545ea00, indexCPS2_Sentinel, 0 },
    { L"(08) Not Used", 0x545ea00, 0x545ea20, indexCPS2_Sentinel, 7 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x545ea20, 0x545ea40, indexCPS2_Sentinel, 0, &pairNext },
    { L"Burning Dark 2", 0x545ea40, 0x545ea60, indexCPS2_Sentinel, 1 },
    { L"Burning Light", 0x545ea60, 0x545ea80, indexCPS2_Sentinel, 0, &pairNext },
    { L"Burning Light 2", 0x545ea80, 0x545eaa0, indexCPS2_Sentinel, 1 },
    { L"Shocked Dark", 0x545eaa0, 0x545eac0, indexCPS2_Sentinel, 0, &pairNext },
    { L"Shocked Dark 2", 0x545eac0, 0x545eae0, indexCPS2_Sentinel, 1 },
    { L"Shocked Light", 0x545eae0, 0x545eb00, indexCPS2_Sentinel, 0, &pairNext },
    { L"Shocked Light 2", 0x545eb00, 0x545eb20, indexCPS2_Sentinel, 1 },
    { L"Dark Burning Dark", 0x545eb20, 0x545eb40, indexCPS2_Sentinel, 0, &pairNext },
    { L"Dark Burning Dark 2", 0x545eb40, 0x545eb60, indexCPS2_Sentinel, 1 },
    { L"Dark Burning Light", 0x545eb60, 0x545eb80, indexCPS2_Sentinel, 0, &pairNext },
    { L"Dark Burning Light 2", 0x545eb80, 0x545eba0, indexCPS2_Sentinel, 1 },
    { L"Kinetic Charge Dark", 0x545eba0, 0x545ebc0, indexCPS2_Sentinel, 0, &pairNext },
    { L"Kinetic Charge Dark 2", 0x545ebc0, 0x545ebe0, indexCPS2_Sentinel, 1 },
    { L"Kinetic Charge Light", 0x545ebe0, 0x545ec00, indexCPS2_Sentinel, 0, &pairNext },
    { L"Kinetic Charge Light 2", 0x545ec00, 0x545ec20, indexCPS2_Sentinel, 1 },
};

const sGame_PaletteDataset MVC2_A_SENTINEL_PALETTES_EXTRAS[] =
{
    { L"11: Not Used", 0x545ec20, 0x545ec40 },
    { L"12: PaletteGlitch: After Fly Glitch Tagout - Rocket Punch (wires)", 0x545ec40, 0x545ec60 },
    { L"13: PaletteGlitch: After Fly Glitch Tagout - ID:02-07: Plasma Storm ID:08-15: FP, c.FP, Flight (flames) - all buttons", 0x545ec60, 0x545ec80 },
};

const sDescTreeNode MVC2_A_SENTINEL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_LP, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_LK, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_HP, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_HK, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_A1, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_A2, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_SHARED, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_SENTINEL_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_LP[] =
{
    { L"Main Color LP", 0x5585400, 0x5585420, indexCPS2_Blackheart, 0 },
    { L"(02) Not Used", 0x5585420, 0x5585440, indexCPS2_Blackheart, 1 },
    { L"(03) Not Used", 0x5585440, 0x5585460, indexCPS2_Blackheart, 2 },
    { L"(04) Not Used", 0x5585460, 0x5585480, indexCPS2_Blackheart, 3 },
    { L"(05) Not Used", 0x5585480, 0x55854a0, indexCPS2_Blackheart, 4 },
    { L"(06) Not Used", 0x55854a0, 0x55854c0, indexCPS2_Blackheart, 5 },
    { L"(07) Not Used", 0x55854c0, 0x55854e0, indexCPS2_Blackheart, 6 },
    { L"(08) Not Used", 0x55854e0, 0x5585500, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_LK[] =
{
    { L"Main Color LK", 0x5585500, 0x5585520, indexCPS2_Blackheart, 0 },
    { L"(02) Not Used", 0x5585520, 0x5585540, indexCPS2_Blackheart, 1 },
    { L"(03) Not Used", 0x5585540, 0x5585560, indexCPS2_Blackheart, 2 },
    { L"(04) Not Used", 0x5585560, 0x5585580, indexCPS2_Blackheart, 3 },
    { L"(05) Not Used", 0x5585580, 0x55855a0, indexCPS2_Blackheart, 4 },
    { L"(06) Not Used", 0x55855a0, 0x55855c0, indexCPS2_Blackheart, 5 },
    { L"(07) Not Used", 0x55855c0, 0x55855e0, indexCPS2_Blackheart, 6 },
    { L"(08) Not Used", 0x55855e0, 0x5585600, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_HP[] =
{
    { L"Main Color HP", 0x5585600, 0x5585620, indexCPS2_Blackheart, 0 },
    { L"(02) Not Used", 0x5585620, 0x5585640, indexCPS2_Blackheart, 1 },
    { L"(03) Not Used", 0x5585640, 0x5585660, indexCPS2_Blackheart, 2 },
    { L"(04) Not Used", 0x5585660, 0x5585680, indexCPS2_Blackheart, 3 },
    { L"(05) Not Used", 0x5585680, 0x55856a0, indexCPS2_Blackheart, 4 },
    { L"(06) Not Used", 0x55856a0, 0x55856c0, indexCPS2_Blackheart, 5 },
    { L"(07) Not Used", 0x55856c0, 0x55856e0, indexCPS2_Blackheart, 6 },
    { L"(08) Not Used", 0x55856e0, 0x5585700, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_HK[] =
{
    { L"Main Color HK", 0x5585700, 0x5585720, indexCPS2_Blackheart, 0 },
    { L"(02) Not Used", 0x5585720, 0x5585740, indexCPS2_Blackheart, 1 },
    { L"(03) Not Used", 0x5585740, 0x5585760, indexCPS2_Blackheart, 2 },
    { L"(04) Not Used", 0x5585760, 0x5585780, indexCPS2_Blackheart, 3 },
    { L"(05) Not Used", 0x5585780, 0x55857a0, indexCPS2_Blackheart, 4 },
    { L"(06) Not Used", 0x55857a0, 0x55857c0, indexCPS2_Blackheart, 5 },
    { L"(07) Not Used", 0x55857c0, 0x55857e0, indexCPS2_Blackheart, 6 },
    { L"(08) Not Used", 0x55857e0, 0x5585800, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_A1[] =
{
    { L"Main Color A1", 0x5585800, 0x5585820, indexCPS2_Blackheart, 0 },
    { L"(02) Not Used", 0x5585820, 0x5585840, indexCPS2_Blackheart, 1 },
    { L"(03) Not Used", 0x5585840, 0x5585860, indexCPS2_Blackheart, 2 },
    { L"(04) Not Used", 0x5585860, 0x5585880, indexCPS2_Blackheart, 3 },
    { L"(05) Not Used", 0x5585880, 0x55858a0, indexCPS2_Blackheart, 4 },
    { L"(06) Not Used", 0x55858a0, 0x55858c0, indexCPS2_Blackheart, 5 },
    { L"(07) Not Used", 0x55858c0, 0x55858e0, indexCPS2_Blackheart, 6 },
    { L"(08) Not Used", 0x55858e0, 0x5585900, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_A2[] =
{
    { L"Main Color A2", 0x5585900, 0x5585920, indexCPS2_Blackheart, 0 },
    { L"(02) Not Used", 0x5585920, 0x5585940, indexCPS2_Blackheart, 1 },
    { L"(03) Not Used", 0x5585940, 0x5585960, indexCPS2_Blackheart, 2 },
    { L"(04) Not Used", 0x5585960, 0x5585980, indexCPS2_Blackheart, 3 },
    { L"(05) Not Used", 0x5585980, 0x55859a0, indexCPS2_Blackheart, 4 },
    { L"(06) Not Used", 0x55859a0, 0x55859c0, indexCPS2_Blackheart, 5 },
    { L"(07) Not Used", 0x55859c0, 0x55859e0, indexCPS2_Blackheart, 6 },
    { L"(08) Not Used", 0x55859e0, 0x5585a00, indexCPS2_Blackheart, 7 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x5585a00, 0x5585a20, indexCPS2_Blackheart, 0 },
    { L"Burning Light", 0x5585a20, 0x5585a40, indexCPS2_Blackheart, 0 },
    { L"Shocked Dark", 0x5585a40, 0x5585a60, indexCPS2_Blackheart, 0 },
    { L"Shocked Light", 0x5585a60, 0x5585a80, indexCPS2_Blackheart, 0 },
    { L"Dark Burning Dark", 0x5585a80, 0x5585aa0, indexCPS2_Blackheart, 0 },
    { L"Dark Burning Light", 0x5585aa0, 0x5585ac0, indexCPS2_Blackheart, 0 },
    { L"Kinetic Charge Dark", 0x5585ac0, 0x5585ae0, indexCPS2_Blackheart, 0 },
    { L"Kinetic Charge Light", 0x5585ae0, 0x5585b00, indexCPS2_Blackheart, 0 },
};

const sGame_PaletteDataset MVC2_A_BLACKHEART_PALETTES_EXTRAS[] =
{
    { L"09: Intro (portal)", 0x5585b00, 0x5585b20 },
    { L"0a: Not Used", 0x5585b20, 0x5585b40 },
    { L"0b: Not Used", 0x5585b40, 0x5585b60 },
    { L"0c: Not Used", 0x5585b60, 0x5585b80 },
    { L"0d: Demon Palettes for Higher Row Buttons (LP,HP,A1)", 0x5585b80, 0x5585ba0, indexCPS2_Blackheart, 2 },
    { L"0e: Dark thunder (all buttons)", 0x5585ba0, 0x5585bc0, indexCPS2_Blackheart, 1 },
    { L"0f: Not Used", 0x5585bc0, 0x5585be0 },
    { L"10: Inferno (all buttons)", 0x5585be0, 0x5585c00, indexCPS2_Blackheart, 8 },
    { L"11: Not Used", 0x5585c00, 0x5585c20 },
    { L"12: Tri-Eyed Demon (wings) HOD // Inferno (ground scroll) // Heart of Darkness (ground Scroll)", 0x5585c20, 0x5585c40 },
    { L"13: Armaggedon", 0x5585c40, 0x5585c60, indexCPS2_Blackheart, 11 },
    { L"14: HP Throw (Skulls) - all button", 0x5585c60, 0x5585c80, indexCPS2_Blackheart, 12 },
    { L"15: Not Used", 0x5585c80, 0x5585ca0 },
    { L"16: Not Used", 0x5585ca0, 0x5585cc0 },
    { L"17: Not Used", 0x5585cc0, 0x5585ce0 },
    { L"18: Not Used", 0x5585ce0, 0x5585d00 },
    { L"19: Demon Palettes for Lower Row Buttons (LK,HK,A2)", 0x5585d00, 0x5585d20, indexCPS2_Blackheart, 2 },
    { L"1a: Winpose Skull - all buttons", 0x5585d20, 0x5585d40 },
    { L"1b: j.MP (all buttons), s.mp (shine - all buttons)", 0x5585d40, 0x5585d60 },
};

const sDescTreeNode MVC2_A_BLACKHEART_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_LP, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_LK, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_HP, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_HK, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_A1, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_A2, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_BLACKHEART_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_LP[] =
{
    { L"Main Color LP", 0x5673e40, 0x5673e60, indexCPS2_Thanos, 0 },
    { L"(02) Stand Up Frame 2", 0x5673e60, 0x5673e80, indexCPS2_Thanos, 1 },
    { L"(03) Not Used", 0x5673e80, 0x5673ea0, indexCPS2_Thanos, 2 },
    { L"(04) Winpose (Materialize Frame)", 0x5673ea0, 0x5673ec0, indexCPS2_Thanos, 3 },
    { L"(05) Not Used", 0x5673ec0, 0x5673ee0, indexCPS2_Thanos, 4 },
    { L"(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x5673ee0, 0x5673f00, indexCPS2_Thanos, 5 },
    { L"(07) Gauntlet Gems", 0x5673f00, 0x5673f20, indexCPS2_Thanos, 6 },
    { L"(08) Gauntlet Gems", 0x5673f20, 0x5673f40, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_LK[] =
{
    { L"Main Color LK", 0x5673f40, 0x5673f60, indexCPS2_Thanos, 0 },
    { L"(02) Stand Up Frame 2", 0x5673f60, 0x5673f80, indexCPS2_Thanos, 1 },
    { L"(03) Not Used", 0x5673f80, 0x5673fa0, indexCPS2_Thanos, 2 },
    { L"(04) Winpose (Materialize Frame)", 0x5673fa0, 0x5673fc0, indexCPS2_Thanos, 3 },
    { L"(05) Not Used", 0x5673fc0, 0x5673fe0, indexCPS2_Thanos, 4 },
    { L"(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x5673fe0, 0x5674000, indexCPS2_Thanos, 5 },
    { L"(07) Gauntlet Gems", 0x5674000, 0x5674020, indexCPS2_Thanos, 6 },
    { L"(08) Gauntlet Gems", 0x5674020, 0x5674040, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_HP[] =
{
    { L"Main Color HP", 0x5674040, 0x5674060, indexCPS2_Thanos, 0 },
    { L"(02) Stand Up Frame 2", 0x5674060, 0x5674080, indexCPS2_Thanos, 1 },
    { L"(03) Not Used", 0x5674080, 0x56740a0, indexCPS2_Thanos, 2 },
    { L"(04) Winpose (Materialize Frame)", 0x56740a0, 0x56740c0, indexCPS2_Thanos, 3 },
    { L"(05) Not Used", 0x56740c0, 0x56740e0, indexCPS2_Thanos, 4 },
    { L"(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56740e0, 0x5674100, indexCPS2_Thanos, 5 },
    { L"(07) Gauntlet Gems", 0x5674100, 0x5674120, indexCPS2_Thanos, 6 },
    { L"(08) Gauntlet Gems", 0x5674120, 0x5674140, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_HK[] =
{
    { L"Main Color HK", 0x5674140, 0x5674160, indexCPS2_Thanos, 0 },
    { L"(02) Stand Up Frame 2", 0x5674160, 0x5674180, indexCPS2_Thanos, 1 },
    { L"(03) Not Used", 0x5674180, 0x56741a0, indexCPS2_Thanos, 2 },
    { L"(04) Winpose (Materialize Frame)", 0x56741a0, 0x56741c0, indexCPS2_Thanos, 3 },
    { L"(05) Not Used", 0x56741c0, 0x56741e0, indexCPS2_Thanos, 4 },
    { L"(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56741e0, 0x5674200, indexCPS2_Thanos, 5 },
    { L"(07) Gauntlet Gems", 0x5674200, 0x5674220, indexCPS2_Thanos, 6 },
    { L"(08) Gauntlet Gems", 0x5674220, 0x5674240, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_A1[] =
{
    { L"Main Color A1", 0x5674240, 0x5674260, indexCPS2_Thanos, 0 },
    { L"(02) Stand Up Frame 2", 0x5674260, 0x5674280, indexCPS2_Thanos, 1 },
    { L"(03) Not Used", 0x5674280, 0x56742a0, indexCPS2_Thanos, 2 },
    { L"(04) Winpose (Materialize Frame)", 0x56742a0, 0x56742c0, indexCPS2_Thanos, 3 },
    { L"(05) Not Used", 0x56742c0, 0x56742e0, indexCPS2_Thanos, 4 },
    { L"(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56742e0, 0x5674300, indexCPS2_Thanos, 5 },
    { L"(07) Gauntlet Gems", 0x5674300, 0x5674320, indexCPS2_Thanos, 6 },
    { L"(08) Gauntlet Gems", 0x5674320, 0x5674340, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_A2[] =
{
    { L"Main Color A2", 0x5674340, 0x5674360, indexCPS2_Thanos, 0 },
    { L"(02) Stand Up Frame 2", 0x5674360, 0x5674380, indexCPS2_Thanos, 1 },
    { L"(03) Not Used", 0x5674380, 0x56743a0, indexCPS2_Thanos, 2 },
    { L"(04) Winpose (Materialize Frame)", 0x56743a0, 0x56743c0, indexCPS2_Thanos, 3 },
    { L"(05) Not Used", 0x56743c0, 0x56743e0, indexCPS2_Thanos, 4 },
    { L"(06) ID:01-08 Space Gem (portal) ID:09-15 Space Gem (portal)", 0x56743e0, 0x5674400, indexCPS2_Thanos, 5 },
    { L"(07) Gauntlet Gems", 0x5674400, 0x5674420, indexCPS2_Thanos, 6 },
    { L"(08) Gauntlet Gems", 0x5674420, 0x5674440, indexCPS2_Thanos, 7 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x5674440, 0x5674460, indexCPS2_Thanos, 0 },
    { L"Burning Light", 0x5674460, 0x5674480, indexCPS2_Thanos, 0 },
    { L"Shocked Dark", 0x5674480, 0x56744a0, indexCPS2_Thanos, 0 },
    { L"Shocked Light", 0x56744a0, 0x56744c0, indexCPS2_Thanos, 0 },
    { L"Dark Burning Dark", 0x56744c0, 0x56744e0, indexCPS2_Thanos, 0 },
    { L"Dark Burning Light", 0x56744e0, 0x5674500, indexCPS2_Thanos, 0 },
    { L"Kinetic Charge Dark", 0x5674500, 0x5674520, indexCPS2_Thanos, 0 },
    { L"Kinetic Charge Light", 0x5674520, 0x5674540, indexCPS2_Thanos, 0 },
};

const sGame_PaletteDataset MVC2_A_THANOS_PALETTES_EXTRAS[] =
{
    { L"09: Stand Up Frame 1", 0x5674540, 0x5674560 },
    { L"0a: Electricity Frame ( Gauntlet Soul / P throw)", 0x5674560, 0x5674580 },
    { L"0b: Death Sphere", 0x5674580, 0x56745a0 },
    { L"0c: Win pose flash", 0x56745a0, 0x56745c0, indexCPS2_Thanos, 0 },
    { L"0d: Win pose: Terraxia teleport", 0x56745c0, 0x56745e0, indexCPS2_Thanos, 0x08 },
    { L"0e: Gauntlet Power (Frame 1)", 0x56745e0, 0x5674600 },
    { L"0f: Win pose: Terraxia incoming", 0x5674600, 0x5674620, indexCPS2_Thanos, 0x08 },
    { L"10: Win pose: Terraxia hugging", 0x5674620, 0x5674640, indexCPS2_Thanos, 0x09 },
    { L"11: Gauntlet Power (Frame 2)", 0x5674640, 0x5674660 },
    { L"12: Gauntlet Reality (Wall) // Gauntlet Space (Rocks) // HK Throw (Rocks)", 0x5674660, 0x5674680 },
    { L"13: Not Used", 0x5674680, 0x56746a0 },
    { L"14: s.FP", 0x56746a0, 0x56746c0 },
    { L"15: Gauntlet Soul (Drain Effect Frame 1) // HP Throw Frame 1", 0x56746c0, 0x56746e0 },
    { L"16: Gauntlet Soul (Drain Effect Frame 2) // HP Throw Frame 2", 0x56746e0, 0x5674700 },
    { L"17: Diving Shoulder (d+HK)", 0x5674700, 0x5674720 },
    { L"18: j.FP", 0x5674720, 0x5674740 },
    { L"19: Gauntlet Time (Thanos) - Not Used", 0x5674740, 0x5674760 },
    { L"1a: Gauntlet Reality (Thanos)", 0x5674760, 0x5674780 },
    { L"1b: Gauntlet Soul (Thanos)", 0x5674780, 0x56747a0 },
    { L"1c: Gauntlet Mind (Thanos) - Not Used", 0x56747a0, 0x56747c0 },
    { L"1d: Gauntlet Power (Thanos)", 0x56747c0, 0x56747e0 },
    { L"1e: Gauntlet Space (Thanos)", 0x56747e0, 0x5674800 },
    { L"1f: Death Sphere (Thanos' hand)", 0x5674800, 0x5674820 },
};

const sDescTreeNode MVC2_A_THANOS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_LP, ARRAYSIZE(MVC2_A_THANOS_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_LK, ARRAYSIZE(MVC2_A_THANOS_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_HP, ARRAYSIZE(MVC2_A_THANOS_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_HK, ARRAYSIZE(MVC2_A_THANOS_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_A1, ARRAYSIZE(MVC2_A_THANOS_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_A2, ARRAYSIZE(MVC2_A_THANOS_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_SHARED, ARRAYSIZE(MVC2_A_THANOS_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_THANOS_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x5758480, 0x57584a0, indexCPS2_Jin, 0 },
    { L"(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57584a0, 0x57584c0, indexCPS2_Jin, 1 },
    { L"(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57584c0, 0x57584e0, indexCPS2_Jin, 2 },
    { L"(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57584e0, 0x5758500, indexCPS2_Jin, 3 },
    { L"(05) Not Used", 0x5758500, 0x5758520, indexCPS2_Jin, 4 },
    { L"(06) Not Used", 0x5758520, 0x5758540, indexCPS2_Jin, 5 },
    { L"(07) Not Used", 0x5758540, 0x5758560, indexCPS2_Jin, 6 },
    { L"(08) Not Used", 0x5758560, 0x5758580, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x5758580, 0x57585a0, indexCPS2_Jin, 0 },
    { L"(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57585a0, 0x57585c0, indexCPS2_Jin, 1 },
    { L"(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57585c0, 0x57585e0, indexCPS2_Jin, 2 },
    { L"(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57585e0, 0x5758600, indexCPS2_Jin, 3 },
    { L"(05) Not Used", 0x5758600, 0x5758620, indexCPS2_Jin, 4 },
    { L"(06) Not Used", 0x5758620, 0x5758640, indexCPS2_Jin, 5 },
    { L"(07) Not Used", 0x5758640, 0x5758660, indexCPS2_Jin, 6 },
    { L"(08) Not Used", 0x5758660, 0x5758680, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x5758680, 0x57586a0, indexCPS2_Jin, 0 },
    { L"(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57586a0, 0x57586c0, indexCPS2_Jin, 1 },
    { L"(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57586c0, 0x57586e0, indexCPS2_Jin, 2 },
    { L"(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57586e0, 0x5758700, indexCPS2_Jin, 3 },
    { L"(05) Not Used", 0x5758700, 0x5758720, indexCPS2_Jin, 4 },
    { L"(06) Not Used", 0x5758720, 0x5758740, indexCPS2_Jin, 5 },
    { L"(07) Not Used", 0x5758740, 0x5758760, indexCPS2_Jin, 6 },
    { L"(08) Not Used", 0x5758760, 0x5758780, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x5758780, 0x57587a0, indexCPS2_Jin, 0 },
    { L"(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57587a0, 0x57587c0, indexCPS2_Jin, 1 },
    { L"(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57587c0, 0x57587e0, indexCPS2_Jin, 2 },
    { L"(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57587e0, 0x5758800, indexCPS2_Jin, 3 },
    { L"(05) Not Used", 0x5758800, 0x5758820, indexCPS2_Jin, 4 },
    { L"(06) Not Used", 0x5758820, 0x5758840, indexCPS2_Jin, 5 },
    { L"(07) Not Used", 0x5758840, 0x5758860, indexCPS2_Jin, 6 },
    { L"(08) Not Used", 0x5758860, 0x5758880, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x5758880, 0x57588a0, indexCPS2_Jin, 0 },
    { L"(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57588a0, 0x57588c0, indexCPS2_Jin, 1 },
    { L"(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57588c0, 0x57588e0, indexCPS2_Jin, 2 },
    { L"(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57588e0, 0x5758900, indexCPS2_Jin, 3 },
    { L"(05) Not Used", 0x5758900, 0x5758920, indexCPS2_Jin, 4 },
    { L"(06) Not Used", 0x5758920, 0x5758940, indexCPS2_Jin, 5 },
    { L"(07) Not Used", 0x5758940, 0x5758960, indexCPS2_Jin, 6 },
    { L"(08) Not Used", 0x5758960, 0x5758980, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x5758980, 0x57589a0, indexCPS2_Jin, 0 },
    { L"(02) ID: 01-08: FP// HK // Saotome Typhoon // Saotome Dynamite", 0x57589a0, 0x57589c0, indexCPS2_Jin, 1 },
    { L"(03) ID: 01-07 Blodia (robot) // Winpose (sword) ID: 08-13 Blodia Punch", 0x57589c0, 0x57589e0, indexCPS2_Jin, 2 },
    { L"(04) ID: 01-08 Saotome Dynamite (Explosion) 09-14 purple", 0x57589e0, 0x5758a00, indexCPS2_Jin, 3 },
    { L"(05) Not Used", 0x5758a00, 0x5758a20, indexCPS2_Jin, 4 },
    { L"(06) Not Used", 0x5758a20, 0x5758a40, indexCPS2_Jin, 5 },
    { L"(07) Not Used", 0x5758a40, 0x5758a60, indexCPS2_Jin, 6 },
    { L"(08) Not Used", 0x5758a60, 0x5758a80, indexCPS2_Jin, 7 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x5758a80, 0x5758aa0, indexCPS2_Jin, 0 },
    { L"Burning Light", 0x5758aa0, 0x5758ac0, indexCPS2_Jin, 0 },
    { L"Shocked Dark", 0x5758ac0, 0x5758ae0, indexCPS2_Jin, 0 },
    { L"Shocked Light", 0x5758ae0, 0x5758b00, indexCPS2_Jin, 0 },
    { L"Dark Burning Dark", 0x5758b00, 0x5758b20, indexCPS2_Jin, 0 },
    { L"Dark Burning Light", 0x5758b20, 0x5758b40, indexCPS2_Jin, 0 },
    { L"Kinetic Charge Dark", 0x5758b40, 0x5758b60, indexCPS2_Jin, 0 },
    { L"Kinetic Charge Light", 0x5758b60, 0x5758b80, indexCPS2_Jin, 0 },
};

const sGame_PaletteDataset MVC2_A_JIN_PALETTES_EXTRAS[] =
{
    { L"09: LP Special Armor 1", 0x5758b80, 0x5758ba0, indexCPS2_Jin, 0 },
    { L"0a: LP Special Armor 2", 0x5758ba0, 0x5758bc0, indexCPS2_Jin, 0 },
    { L"0b: LP Special Armor 3", 0x5758bc0, 0x5758be0, indexCPS2_Jin, 0 },
    { L"0c: LP Special Armor 4", 0x5758be0, 0x5758c00, indexCPS2_Jin, 0 },
    { L"0d: LP Special Armor 5", 0x5758c00, 0x5758c20, indexCPS2_Jin, 0 },
    { L"0e: LP Special Armor 6", 0x5758c20, 0x5758c40, indexCPS2_Jin, 0 },
    { L"0f: LK Special Armor 1", 0x5758c40, 0x5758c60, indexCPS2_Jin, 0 },
    { L"10: LK Special Armor 2", 0x5758c60, 0x5758c80, indexCPS2_Jin, 0 },
    { L"11: LK Special Armor 3", 0x5758c80, 0x5758ca0, indexCPS2_Jin, 0 },
    { L"12: LK Special Armor 4", 0x5758ca0, 0x5758cc0, indexCPS2_Jin, 0 },
    { L"13: LK Special Armor 5", 0x5758cc0, 0x5758ce0, indexCPS2_Jin, 0 },
    { L"14: LK Special Armor 6", 0x5758ce0, 0x5758d00, indexCPS2_Jin, 0 },
    { L"15: HP Special Armor 1", 0x5758d00, 0x5758d20, indexCPS2_Jin, 0 },
    { L"16: HP Special Armor 2", 0x5758d20, 0x5758d40, indexCPS2_Jin, 0 },
    { L"17: HP Special Armor 3", 0x5758d40, 0x5758d60, indexCPS2_Jin, 0 },
    { L"18: HP Special Armor 4", 0x5758d60, 0x5758d80, indexCPS2_Jin, 0 },
    { L"19: HP Special Armor 5", 0x5758d80, 0x5758da0, indexCPS2_Jin, 0 },
    { L"1a: HP Special Armor 6", 0x5758da0, 0x5758dc0, indexCPS2_Jin, 0 },
    { L"1b: HK Special Armor 1", 0x5758dc0, 0x5758de0, indexCPS2_Jin, 0 },
    { L"1c: HK Special Armor 2", 0x5758de0, 0x5758e00, indexCPS2_Jin, 0 },
    { L"1d: HK Special Armor 3", 0x5758e00, 0x5758e20, indexCPS2_Jin, 0 },
    { L"1e: HK Special Armor 4", 0x5758e20, 0x5758e40, indexCPS2_Jin, 0 },
    { L"1f: HK Special Armor 5", 0x5758e40, 0x5758e60, indexCPS2_Jin, 0 },
    { L"20: HK Special Armor 6", 0x5758e60, 0x5758e80, indexCPS2_Jin, 0 },
    { L"21: A1 Special Armor 1", 0x5758e80, 0x5758ea0, indexCPS2_Jin, 0 },
    { L"22: A1 Special Armor 2", 0x5758ea0, 0x5758ec0, indexCPS2_Jin, 0 },
    { L"23: A1 Special Armor 3", 0x5758ec0, 0x5758ee0, indexCPS2_Jin, 0 },
    { L"24: A1 Special Armor 4", 0x5758ee0, 0x5758f00, indexCPS2_Jin, 0 },
    { L"25: A1 Special Armor 5", 0x5758f00, 0x5758f20, indexCPS2_Jin, 0 },
    { L"26: A1 Special Armor 6", 0x5758f20, 0x5758f40, indexCPS2_Jin, 0 },
    { L"27: A2 Special Armor 1", 0x5758f40, 0x5758f60, indexCPS2_Jin, 0 },
    { L"28: A2 Special Armor 2", 0x5758f60, 0x5758f80, indexCPS2_Jin, 0 },
    { L"29: A2 Special Armor 3", 0x5758f80, 0x5758fa0, indexCPS2_Jin, 0 },
    { L"2a: A2 Special Armor 4", 0x5758fa0, 0x5758fc0, indexCPS2_Jin, 0 },
    { L"2b: A2 Special Armor 5", 0x5758fc0, 0x5758fe0, indexCPS2_Jin, 0 },
    { L"2c: A2 Special Armor 6", 0x5758fe0, 0x5759000, indexCPS2_Jin, 0 },
    { L"2d: LP Power-up Flash 1- all white", 0x5759000, 0x5759020, indexCPS2_Jin, 11 },
    { L"2e: LP Power-up Flash 2- +64 Luminance", 0x5759020, 0x5759040, indexCPS2_Jin, 11 },
    { L"2f: LP Power-up Flash 3- +50 Luminance", 0x5759040, 0x5759060, indexCPS2_Jin, 11 },
    { L"30: LP Power-up Flash 4- +32 Luminance", 0x5759060, 0x5759080, indexCPS2_Jin, 11 },
    { L"31: LP Power-up Flash 5- +21 Luminance", 0x5759080, 0x57590a0, indexCPS2_Jin, 11 },
    { L"32: LP Power-up Flash 6- gold color when power-up flash", 0x57590a0, 0x57590c0, indexCPS2_Jin, 11 },
    { L"33: LK Power-up Flash 1", 0x57590c0, 0x57590e0, indexCPS2_Jin, 11 },
    { L"34: LK Power-up Flash 2", 0x57590e0, 0x5759100, indexCPS2_Jin, 11 },
    { L"35: LK Power-up Flash 3", 0x5759100, 0x5759120, indexCPS2_Jin, 11 },
    { L"36: LK Power-up Flash 4", 0x5759120, 0x5759140, indexCPS2_Jin, 11 },
    { L"37: LK Power-up Flash 5", 0x5759140, 0x5759160, indexCPS2_Jin, 11 },
    { L"38: LK Power-up Flash 6", 0x5759160, 0x5759180, indexCPS2_Jin, 11 },
    { L"39: HP Power-up Flash 1", 0x5759180, 0x57591a0, indexCPS2_Jin, 11 },
    { L"3a: HP Power-up Flash 2", 0x57591a0, 0x57591c0, indexCPS2_Jin, 11 },
    { L"3b: HP Power-up Flash 3", 0x57591c0, 0x57591e0, indexCPS2_Jin, 11 },
    { L"3c: HP Power-up Flash 4", 0x57591e0, 0x5759200, indexCPS2_Jin, 11 },
    { L"3d: HP Power-up Flash 5", 0x5759200, 0x5759220, indexCPS2_Jin, 11 },
    { L"3e: HP Power-up Flash 6", 0x5759220, 0x5759240, indexCPS2_Jin, 11 },
    { L"3f: HK Power-up Flash 1", 0x5759240, 0x5759260, indexCPS2_Jin, 11 },
    { L"40: HK Power-up Flash 2", 0x5759260, 0x5759280, indexCPS2_Jin, 11 },
    { L"41: HK Power-up Flash 3", 0x5759280, 0x57592a0, indexCPS2_Jin, 11 },
    { L"42: HK Power-up Flash 4", 0x57592a0, 0x57592c0, indexCPS2_Jin, 11 },
    { L"43: HK Power-up Flash 5", 0x57592c0, 0x57592e0, indexCPS2_Jin, 11 },
    { L"44: HK Power-up Flash 6", 0x57592e0, 0x5759300, indexCPS2_Jin, 11 },
    { L"45: A1 Power-up Flash 1", 0x5759300, 0x5759320, indexCPS2_Jin, 11 },
    { L"46: A1 Power-up Flash 2", 0x5759320, 0x5759340, indexCPS2_Jin, 11 },
    { L"47: A1 Power-up Flash 3", 0x5759340, 0x5759360, indexCPS2_Jin, 11 },
    { L"48: A1 Power-up Flash 4", 0x5759360, 0x5759380, indexCPS2_Jin, 11 },
    { L"49: A1 Power-up Flash 5", 0x5759380, 0x57593a0, indexCPS2_Jin, 11 },
    { L"4a: A1 Power-up Flash 6", 0x57593a0, 0x57593c0, indexCPS2_Jin, 11 },
    { L"4b: A2 Power-up Flash 1", 0x57593c0, 0x57593e0, indexCPS2_Jin, 11 },
    { L"4c: A2 Power-up Flash 2", 0x57593e0, 0x5759400, indexCPS2_Jin, 11 },
    { L"4d: A2 Power-up Flash 3", 0x5759400, 0x5759420, indexCPS2_Jin, 11 },
    { L"4e: A2 Power-up Flash 4", 0x5759420, 0x5759440, indexCPS2_Jin, 11 },
    { L"4f: A2 Power-up Flash 5", 0x5759440, 0x5759460, indexCPS2_Jin, 11 },
    { L"50: A2 Power-up Flash 6", 0x5759460, 0x5759480, indexCPS2_Jin, 11 },
    { L"51: LP Vulcan hands", 0x5759480, 0x57594a0, indexCPS2_Jin, 12 },
    { L"52: LP Vulcan lasers", 0x57594a0, 0x57594c0, indexCPS2_Jin, 13 },
    { L"53: LP Vulcan cockpit", 0x57594c0, 0x57594e0, indexCPS2_Jin, 14 },
    { L"54: LK Vulcan hands", 0x57594e0, 0x5759500, indexCPS2_Jin, 12 },
    { L"55: LK Vulcan lasers", 0x5759500, 0x5759520, indexCPS2_Jin, 13 },
    { L"56: LK Vulcan cockpit", 0x5759520, 0x5759540, indexCPS2_Jin, 14 },
    { L"57: HP Vulcan hands", 0x5759540, 0x5759560, indexCPS2_Jin, 12 },
    { L"58: HP Vulcan lasers", 0x5759560, 0x5759580, indexCPS2_Jin, 13 },
    { L"59: HP Vulcan cockpit", 0x5759580, 0x57595a0, indexCPS2_Jin, 14 },
    { L"5a: HK Vulcan hands", 0x57595a0, 0x57595c0, indexCPS2_Jin, 12 },
    { L"5b: HK Vulcan lasers", 0x57595c0, 0x57595e0, indexCPS2_Jin, 13 },
    { L"5c: HK Vulcan cockpit", 0x57595e0, 0x5759600, indexCPS2_Jin, 14 },
    { L"5d: A1 Vulcan hands", 0x5759600, 0x5759620, indexCPS2_Jin, 12 },
    { L"5e: A1 Vulcan lasers", 0x5759620, 0x5759640, indexCPS2_Jin, 13 },
    { L"5f: A1 Vulcan cockpit", 0x5759640, 0x5759660, indexCPS2_Jin, 14 },
    { L"60: A2 Vulcan hands", 0x5759660, 0x5759680, indexCPS2_Jin, 12 },
    { L"61: A2 Vulcan lasers", 0x5759680, 0x57596a0, indexCPS2_Jin, 13 },
    { L"62: A2 Vulcan cockpit", 0x57596a0, 0x57596c0, indexCPS2_Jin, 14 },
    { L"63: LP Taunt 1", 0x57596c0, 0x57596e0, indexCPS2_Jin, 15 },
    { L"64: LP Taunt 2", 0x57596e0, 0x5759700, indexCPS2_Jin, 15 },
    { L"65: LP Taunt 3", 0x5759700, 0x5759720, indexCPS2_Jin, 15 },
    { L"66: LP Taunt 4", 0x5759720, 0x5759740, indexCPS2_Jin, 15 },
    { L"67: LP Taunt 5", 0x5759740, 0x5759760, indexCPS2_Jin, 15 },
    { L"68: LP Taunt 6", 0x5759760, 0x5759780, indexCPS2_Jin, 15 },
    { L"69: LK Taunt 1", 0x5759780, 0x57597a0, indexCPS2_Jin, 15 },
    { L"6a: LK Taunt 2", 0x57597a0, 0x57597c0, indexCPS2_Jin, 15 },
    { L"6b: LK Taunt 3", 0x57597c0, 0x57597e0, indexCPS2_Jin, 15 },
    { L"6c: LK Taunt 4", 0x57597e0, 0x5759800, indexCPS2_Jin, 15 },
    { L"6d: LK Taunt 5", 0x5759800, 0x5759820, indexCPS2_Jin, 15 },
    { L"6e: LK Taunt 6", 0x5759820, 0x5759840, indexCPS2_Jin, 15 },
    { L"6f: HP Taunt 1", 0x5759840, 0x5759860, indexCPS2_Jin, 15 },
    { L"70: HP Taunt 2", 0x5759860, 0x5759880, indexCPS2_Jin, 15 },
    { L"71: HP Taunt 3", 0x5759880, 0x57598a0, indexCPS2_Jin, 15 },
    { L"72: HP Taunt 4", 0x57598a0, 0x57598c0, indexCPS2_Jin, 15 },
    { L"73: HP Taunt 5", 0x57598c0, 0x57598e0, indexCPS2_Jin, 15 },
    { L"74: HP Taunt 6", 0x57598e0, 0x5759900, indexCPS2_Jin, 15 },
    { L"75: HK Taunt 1", 0x5759900, 0x5759920, indexCPS2_Jin, 15 },
    { L"76: HK Taunt 2", 0x5759920, 0x5759940, indexCPS2_Jin, 15 },
    { L"77: HK Taunt 3", 0x5759940, 0x5759960, indexCPS2_Jin, 15 },
    { L"78: HK Taunt 4", 0x5759960, 0x5759980, indexCPS2_Jin, 15 },
    { L"79: HK Taunt 5", 0x5759980, 0x57599a0, indexCPS2_Jin, 15 },
    { L"7a: HK Taunt 6", 0x57599a0, 0x57599c0, indexCPS2_Jin, 15 },
    { L"7b: A1 Taunt 1", 0x57599c0, 0x57599e0, indexCPS2_Jin, 15 },
    { L"7c: A1 Taunt 2", 0x57599e0, 0x5759a00, indexCPS2_Jin, 15 },
    { L"7d: A1 Taunt 3", 0x5759a00, 0x5759a20, indexCPS2_Jin, 15 },
    { L"7e: A1 Taunt 4", 0x5759a20, 0x5759a40, indexCPS2_Jin, 15 },
    { L"7f: A1 Taunt 5", 0x5759a40, 0x5759a60, indexCPS2_Jin, 15 },
    { L"80: A1 Taunt 6", 0x5759a60, 0x5759a80, indexCPS2_Jin, 15 },
    { L"81: A2 Taunt 1", 0x5759a80, 0x5759aa0, indexCPS2_Jin, 15 },
    { L"82: A2 Taunt 2", 0x5759aa0, 0x5759ac0, indexCPS2_Jin, 15 },
    { L"83: A2 Taunt 3", 0x5759ac0, 0x5759ae0, indexCPS2_Jin, 15 },
    { L"84: A2 Taunt 4", 0x5759ae0, 0x5759b00, indexCPS2_Jin, 15 },
    { L"85: A2 Taunt 5", 0x5759b00, 0x5759b20, indexCPS2_Jin, 15 },
    { L"86: A2 Taunt 6", 0x5759b20, 0x5759b40, indexCPS2_Jin, 15 },
};

const sDescTreeNode MVC2_A_JIN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_LP, ARRAYSIZE(MVC2_A_JIN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_LK, ARRAYSIZE(MVC2_A_JIN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_HP, ARRAYSIZE(MVC2_A_JIN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_HK, ARRAYSIZE(MVC2_A_JIN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_A1, ARRAYSIZE(MVC2_A_JIN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_A2, ARRAYSIZE(MVC2_A_JIN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_JIN_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_JIN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_LP[] =
{
    { L"Main Color LP", 0x5847ec0, 0x5847ee0, indexCPS2_CapCom, 0 },
    { L"(02) Commando Strike (Sho, Genity, Hoover)", 0x5847ee0, 0x5847f00, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"(03) Commando Strike (Sho, Genity, Hoover)", 0x5847f00, 0x5847f20, indexCPS2_CapCom, 2 },
    { L"(04) Captain Corridor // Captain Sword", 0x5847f20, 0x5847f40, indexCPS2_CapCom, 3 },
    { L"(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5847f40, 0x5847f60, indexCPS2_CapCom, 4 },
    { L"(06) Hoover's Missile Burst (HP throw)", 0x5847f60, 0x5847f80, indexCPS2_CapCom, 5 },
    { L"(07) Not Used", 0x5847f80, 0x5847fa0, indexCPS2_CapCom, 0 },
    { L"(08) Not Used Commando Strike", 0x5847fa0, 0x5847fc0, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_LK[] =
{
    { L"Main Color LK", 0x5847fc0, 0x5847fe0, indexCPS2_CapCom, 0 },
    { L"(02) Commando Strike (Sho, Genity, Hoover)", 0x5847fe0, 0x5848000, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"(03) Commando Strike (Sho, Genity, Hoover)", 0x5848000, 0x5848020, indexCPS2_CapCom, 2 },
    { L"(04) Captain Corridor // Captain Sword", 0x5848020, 0x5848040, indexCPS2_CapCom, 3 },
    { L"(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848040, 0x5848060, indexCPS2_CapCom, 4 },
    { L"(06) Hoover's Missile Burst (HP throw)", 0x5848060, 0x5848080, indexCPS2_CapCom, 5 },
    { L"(07) Not Used", 0x5848080, 0x58480a0, indexCPS2_CapCom, 0 },
    { L"(08) Not Used Commando Strike", 0x58480a0, 0x58480c0, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_HP[] =
{
    { L"Main Color HP", 0x58480c0, 0x58480e0, indexCPS2_CapCom, 0 },
    { L"(02) Commando Strike (Sho, Genity, Hoover)", 0x58480e0, 0x5848100, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"(03) Commando Strike (Sho, Genity, Hoover)", 0x5848100, 0x5848120, indexCPS2_CapCom, 2 },
    { L"(04) Captain Corridor // Captain Sword", 0x5848120, 0x5848140, indexCPS2_CapCom, 3 },
    { L"(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848140, 0x5848160, indexCPS2_CapCom, 4 },
    { L"(06) Hoover's Missile Burst (HP throw)", 0x5848160, 0x5848180, indexCPS2_CapCom, 5 },
    { L"(07) Not Used", 0x5848180, 0x58481a0, indexCPS2_CapCom, 0 },
    { L"(08) Not Used Commando Strike", 0x58481a0, 0x58481c0, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_HK[] =
{
    { L"Main Color HK", 0x58481c0, 0x58481e0, indexCPS2_CapCom, 0 },
    { L"(02) Commando Strike (Sho, Genity, Hoover)", 0x58481e0, 0x5848200, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"(03) Commando Strike (Sho, Genity, Hoover)", 0x5848200, 0x5848220, indexCPS2_CapCom, 2 },
    { L"(04) Captain Corridor // Captain Sword", 0x5848220, 0x5848240, indexCPS2_CapCom, 3 },
    { L"(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848240, 0x5848260, indexCPS2_CapCom, 4 },
    { L"(06) Hoover's Missile Burst (HP throw)", 0x5848260, 0x5848280, indexCPS2_CapCom, 5 },
    { L"(07) Not Used", 0x5848280, 0x58482a0, indexCPS2_CapCom, 0 },
    { L"(08) Not Used Commando Strike", 0x58482a0, 0x58482c0, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_A1[] =
{
    { L"Main Color A1", 0x58482c0, 0x58482e0, indexCPS2_CapCom, 0 },
    { L"(02) Commando Strike (Sho, Genity, Hoover)", 0x58482e0, 0x5848300, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"(03) Commando Strike (Sho, Genity, Hoover)", 0x5848300, 0x5848320, indexCPS2_CapCom, 2 },
    { L"(04) Captain Corridor // Captain Sword", 0x5848320, 0x5848340, indexCPS2_CapCom, 3 },
    { L"(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848340, 0x5848360, indexCPS2_CapCom, 4 },
    { L"(06) Hoover's Missile Burst (HP throw)", 0x5848360, 0x5848380, indexCPS2_CapCom, 5 },
    { L"(07) Not Used", 0x5848380, 0x58483a0, indexCPS2_CapCom, 0 },
    { L"(08) Not Used Commando Strike", 0x58483a0, 0x58483c0, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_A2[] =
{
    { L"Main Color A2", 0x58483c0, 0x58483e0, indexCPS2_CapCom, 0 },
    { L"(02) Commando Strike (Sho, Genity, Hoover)", 0x58483e0, 0x5848400, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"(03) Commando Strike (Sho, Genity, Hoover)", 0x5848400, 0x5848420, indexCPS2_CapCom, 2 },
    { L"(04) Captain Corridor // Captain Sword", 0x5848420, 0x5848440, indexCPS2_CapCom, 3 },
    { L"(05) ID:01-08 FP // Captain Fire // Captain Kick ID:09-15 Shoo's Shuriken (HP throw)", 0x5848440, 0x5848460, indexCPS2_CapCom, 4 },
    { L"(06) Hoover's Missile Burst (HP throw)", 0x5848460, 0x5848480, indexCPS2_CapCom, 5 },
    { L"(07) Not Used", 0x5848480, 0x58484a0, indexCPS2_CapCom, 0 },
    { L"(08) Not Used Commando Strike", 0x58484a0, 0x58484c0, indexCPS2_CapCom, 7 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x58484c0, 0x58484e0, indexCPS2_CapCom, 0 },
    { L"Burning Light", 0x58484e0, 0x5848500, indexCPS2_CapCom, 0 },
    { L"Shocked Dark", 0x5848500, 0x5848520, indexCPS2_CapCom, 0 },
    { L"Shocked Light", 0x5848520, 0x5848540, indexCPS2_CapCom, 0 },
    { L"Dark Burning Dark", 0x5848540, 0x5848560, indexCPS2_CapCom, 0 },
    { L"Dark Burning Light", 0x5848560, 0x5848580, indexCPS2_CapCom, 0 },
    { L"Kinetic Charge Dark", 0x5848580, 0x58485a0, indexCPS2_CapCom, 0 },
    { L"Kinetic Charge Light", 0x58485a0, 0x58485c0, indexCPS2_CapCom, 0 },
};

const sGame_PaletteDataset MVC2_A_CAPTAINCOMMANDO_PALETTES_EXTRAS[] =
{
    { L"09: Laser Intro 1", 0x58485c0, 0x58485e0, indexCPS2_CapCom, 11 },
    { L"0a: Laser Intro 2", 0x58485e0, 0x5848600, indexCPS2_CapCom, 11 },
    { L"0b: Laser Intro 3", 0x5848600, 0x5848620, indexCPS2_CapCom, 11 },
    { L"0c: Laser Intro 4", 0x5848620, 0x5848640, indexCPS2_CapCom, 11 },
    { L"0d: HK Grab", 0x5848640, 0x5848660, indexCPS2_CapCom, 12 },
    { L"0e: Intro LP", 0x5848660, 0x5848680, indexCPS2_CapCom, 15 },
    { L"0f: Taunt LP", 0x5848680, 0x58486a0, indexCPS2_CapCom, 14 },
    { L"10: Intro LK", 0x58486a0, 0x58486c0, indexCPS2_CapCom, 15 },
    { L"11: Taunt LK", 0x58486c0, 0x58486e0, indexCPS2_CapCom, 14 },
    { L"12: Intro HP", 0x58486e0, 0x5848700, indexCPS2_CapCom, 15 },
    { L"13: Taunt HP", 0x5848700, 0x5848720, indexCPS2_CapCom, 14 },
    { L"14: Intro HK", 0x5848720, 0x5848740, indexCPS2_CapCom, 15 },
    { L"15: Taunt HK", 0x5848740, 0x5848760, indexCPS2_CapCom, 14 },
    { L"16: Intro A1", 0x5848760, 0x5848780, indexCPS2_CapCom, 15 },
    { L"17: Taunt A1", 0x5848780, 0x58487a0, indexCPS2_CapCom, 14 },
    { L"18: Intro A2", 0x58487a0, 0x58487c0, indexCPS2_CapCom, 15 },
    { L"19: Taunt A2", 0x58487c0, 0x58487e0, indexCPS2_CapCom, 14 },
};

const sDescTreeNode MVC2_A_CAPTAINCOMMANDO_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_LP, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_LK, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_HP, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_HK, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_A1, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_A2, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_SHARED, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_LP[] =
{
    { L"Main Color LP", 0x59472a0, 0x59472c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"(02) Claws", 0x59472c0, 0x59472e0, indexCPS2_Bonerine, 1 },
    { L"(03) Berserker Barrage", 0x59472e0, 0x5947300, indexCPS2_Bonerine, 2 },
    { L"(04) Not Used", 0x5947300, 0x5947320, indexCPS2_Bonerine, 3 },
    { L"(05) Not Used", 0x5947320, 0x5947340, indexCPS2_Bonerine, 4 },
    { L"(06) Not Used", 0x5947340, 0x5947360, indexCPS2_Bonerine, 5 },
    { L"(07) Not Used", 0x5947360, 0x5947380, indexCPS2_Bonerine, 0, &pairNext },
    { L"(08) Not Used", 0x5947380, 0x59473a0, indexCPS2_Bonerine, 1 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_LK[] =
{
    { L"Main Color LK", 0x59473a0, 0x59473c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"(02) Claws", 0x59473c0, 0x59473e0, indexCPS2_Bonerine, 1 },
    { L"(03) Berserker Barrage", 0x59473e0, 0x5947400, indexCPS2_Bonerine, 2 },
    { L"(04) Not Used", 0x5947400, 0x5947420, indexCPS2_Bonerine, 3 },
    { L"(05) Not Used", 0x5947420, 0x5947440, indexCPS2_Bonerine, 4 },
    { L"(06) Not Used", 0x5947440, 0x5947460, indexCPS2_Bonerine, 5 },
    { L"(07) Not Used", 0x5947460, 0x5947480, indexCPS2_Bonerine, 0, &pairNext },
    { L"(08) Not Used", 0x5947480, 0x59474a0, indexCPS2_Bonerine, 1 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_HP[] =
{
    { L"Main Color HP", 0x59474a0, 0x59474c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"(02) Claws", 0x59474c0, 0x59474e0, indexCPS2_Bonerine, 1 },
    { L"(03) Berserker Barrage", 0x59474e0, 0x5947500, indexCPS2_Bonerine, 2 },
    { L"(04) Not Used", 0x5947500, 0x5947520, indexCPS2_Bonerine, 3 },
    { L"(05) Not Used", 0x5947520, 0x5947540, indexCPS2_Bonerine, 4 },
    { L"(06) Not Used", 0x5947540, 0x5947560, indexCPS2_Bonerine, 5 },
    { L"(07) Not Used", 0x5947560, 0x5947580, indexCPS2_Bonerine, 0, &pairNext },
    { L"(08) Not Used", 0x5947580, 0x59475a0, indexCPS2_Bonerine, 1 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_HK[] =
{
    { L"Main Color HK", 0x59475a0, 0x59475c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"(02) Claws", 0x59475c0, 0x59475e0, indexCPS2_Bonerine, 1 },
    { L"(03) Berserker Barrage", 0x59475e0, 0x5947600, indexCPS2_Bonerine, 2 },
    { L"(04) Not Used", 0x5947600, 0x5947620, indexCPS2_Bonerine, 3 },
    { L"(05) Not Used", 0x5947620, 0x5947640, indexCPS2_Bonerine, 4 },
    { L"(06) Not Used", 0x5947640, 0x5947660, indexCPS2_Bonerine, 5 },
    { L"(07) Not Used", 0x5947660, 0x5947680, indexCPS2_Bonerine, 0, &pairNext },
    { L"(08) Not Used", 0x5947680, 0x59476a0, indexCPS2_Bonerine, 1 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_A1[] =
{
    { L"Main Color A1", 0x59476a0, 0x59476c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"(02) Claws", 0x59476c0, 0x59476e0, indexCPS2_Bonerine, 1 },
    { L"(03) Berserker Barrage", 0x59476e0, 0x5947700, indexCPS2_Bonerine, 2 },
    { L"(04) Not Used", 0x5947700, 0x5947720, indexCPS2_Bonerine, 3 },
    { L"(05) Not Used", 0x5947720, 0x5947740, indexCPS2_Bonerine, 4 },
    { L"(06) Not Used", 0x5947740, 0x5947760, indexCPS2_Bonerine, 5 },
    { L"(07) Not Used", 0x5947760, 0x5947780, indexCPS2_Bonerine, 0, &pairNext },
    { L"(08) Not Used", 0x5947780, 0x59477a0, indexCPS2_Bonerine, 1 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_A2[] =
{
    { L"Main Color A2", 0x59477a0, 0x59477c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"(02) Claws", 0x59477c0, 0x59477e0, indexCPS2_Bonerine, 1 },
    { L"(03) Berserker Barrage", 0x59477e0, 0x5947800, indexCPS2_Bonerine, 2 },
    { L"(04) Not Used", 0x5947800, 0x5947820, indexCPS2_Bonerine, 3 },
    { L"(05) Not Used", 0x5947820, 0x5947840, indexCPS2_Bonerine, 4 },
    { L"(06) Not Used", 0x5947840, 0x5947860, indexCPS2_Bonerine, 5 },
    { L"(07) Not Used", 0x5947860, 0x5947880, indexCPS2_Bonerine, 0, &pairNext },
    { L"(08) Not Used", 0x5947880, 0x59478a0, indexCPS2_Bonerine, 1 },
};

const sGame_PaletteDataset MVC2_A_BONERINE_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x59478a0, 0x59478c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"Burning Dark 2", 0x59478c0, 0x59478e0, indexCPS2_Bonerine, 1 },
    { L"Burning Light", 0x59478e0, 0x5947900, indexCPS2_Bonerine, 0, &pairNext },
    { L"Burning Light 2", 0x5947900, 0x5947920, indexCPS2_Bonerine, 1 },
    { L"Shocked Dark", 0x5947920, 0x5947940, indexCPS2_Bonerine, 0, &pairNext },
    { L"Shocked Dark 2", 0x5947940, 0x5947960, indexCPS2_Bonerine, 1 },
    { L"Shocked Light", 0x5947960, 0x5947980, indexCPS2_Bonerine, 0, &pairNext },
    { L"Shocked Light 2", 0x5947980, 0x59479a0, indexCPS2_Bonerine, 1 },
    { L"Dark Burning Dark", 0x59479a0, 0x59479c0, indexCPS2_Bonerine, 0, &pairNext },
    { L"Dark Burning Dark 2", 0x59479c0, 0x59479e0, indexCPS2_Bonerine, 1 },
    { L"Dark Burning Light", 0x59479e0, 0x5947a00, indexCPS2_Bonerine, 0, &pairNext },
    { L"Dark Burning Light 2", 0x5947a00, 0x5947a20, indexCPS2_Bonerine, 1 },
    { L"Kinetic Charge Dark", 0x5947a20, 0x5947a40, indexCPS2_Bonerine, 0, &pairNext },
    { L"Kinetic Charge Dark 2", 0x5947a40, 0x5947a60, indexCPS2_Bonerine, 1 },
    { L"Kinetic Charge Light", 0x5947a60, 0x5947a80, indexCPS2_Bonerine, 0, &pairNext },
    { L"Kinetic Charge Light 2", 0x5947a80, 0x5947aa0, indexCPS2_Bonerine, 1 },
};

const sDescTreeNode MVC2_A_BONERINE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_LP, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_LK, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_HP, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_HK, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_A1, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_A2, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_PALETTES_SHARED, ARRAYSIZE(MVC2_A_BONERINE_PALETTES_SHARED) },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_LP[] =
{
    { L"Main Color LP", 0x59acdc0, 0x59acde0, indexCPS2_Kobun, 0 },
    { L"(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59acde0, 0x59ace00, indexCPS2_Tron, 1 },
    { L"(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ace00, 0x59ace20, indexCPS2_Tron, 12 },
    { L"(04) Kobun Fire (Flame)", 0x59ace20, 0x59ace40, indexCPS2_Kobun, 3 },
    { L"(05) Bull Mover", 0x59ace40, 0x59ace60, indexCPS2_Kobun, 4 },
    { L"(06) j.MP (food coming out of the pot) / j,LK", 0x59ace60, 0x59ace80, indexCPS2_Kobun, 5 },
    { L"(07) Kobun Assist", 0x59ace80, 0x59acea0, indexCPS2_Kobun, 0 },
    { L"(08) Not Used", 0x59acea0, 0x59acec0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_LK[] =
{
    { L"Main Color LK", 0x59acec0, 0x59acee0, indexCPS2_Kobun, 0 },
    { L"(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59acee0, 0x59acf00, indexCPS2_Tron, 1 },
    { L"(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59acf00, 0x59acf20, indexCPS2_Tron, 12 },
    { L"(04) Kobun Fire (Flame)", 0x59acf20, 0x59acf40, indexCPS2_Kobun, 3 },
    { L"(05) Bull Mover", 0x59acf40, 0x59acf60, indexCPS2_Kobun, 4 },
    { L"(06) j.MP (food coming out of the pot) / j,LK", 0x59acf60, 0x59acf80, indexCPS2_Kobun, 5 },
    { L"(07) Kobun Assist", 0x59acf80, 0x59acfa0, indexCPS2_Kobun, 0 },
    { L"(08) Not Used", 0x59acfa0, 0x59acfc0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_HP[] =
{
    { L"Main Color HP", 0x59acfc0, 0x59acfe0, indexCPS2_Kobun, 0 },
    { L"(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59acfe0, 0x59ad000, indexCPS2_Tron, 1 },
    { L"(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad000, 0x59ad020, indexCPS2_Tron, 12 },
    { L"(04) Kobun Fire (Flame)", 0x59ad020, 0x59ad040, indexCPS2_Kobun, 3 },
    { L"(05) Bull Mover", 0x59ad040, 0x59ad060, indexCPS2_Kobun, 4 },
    { L"(06) j.MP (food coming out of the pot) / j,LK", 0x59ad060, 0x59ad080, indexCPS2_Kobun, 5 },
    { L"(07) Kobun Assist", 0x59ad080, 0x59ad0a0, indexCPS2_Kobun, 0 },
    { L"(08) Not Used", 0x59ad0a0, 0x59ad0c0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_HK[] =
{
    { L"Main Color HK", 0x59ad0c0, 0x59ad0e0, indexCPS2_Kobun, 0 },
    { L"(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59ad0e0, 0x59ad100, indexCPS2_Tron, 1 },
    { L"(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad100, 0x59ad120, indexCPS2_Tron, 12 },
    { L"(04) Kobun Fire (Flame)", 0x59ad120, 0x59ad140, indexCPS2_Kobun, 3 },
    { L"(05) Bull Mover", 0x59ad140, 0x59ad160, indexCPS2_Kobun, 4 },
    { L"(06) j.MP (food coming out of the pot) / j,LK", 0x59ad160, 0x59ad180, indexCPS2_Kobun, 5 },
    { L"(07) Kobun Assist", 0x59ad180, 0x59ad1a0, indexCPS2_Kobun, 0 },
    { L"(08) Not Used", 0x59ad1a0, 0x59ad1c0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_A1[] =
{
    { L"Main Color A1", 0x59ad1c0, 0x59ad1e0, indexCPS2_Kobun, 0 },
    { L"(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59ad1e0, 0x59ad200, indexCPS2_Tron, 1 },
    { L"(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad200, 0x59ad220, indexCPS2_Tron, 12 },
    { L"(04) Kobun Fire (Flame)", 0x59ad220, 0x59ad240, indexCPS2_Kobun, 3 },
    { L"(05) Bull Mover", 0x59ad240, 0x59ad260, indexCPS2_Kobun, 4 },
    { L"(06) j.MP (food coming out of the pot) / j,LK", 0x59ad260, 0x59ad280, indexCPS2_Kobun, 5 },
    { L"(07) Kobun Assist", 0x59ad280, 0x59ad2a0, indexCPS2_Kobun, 0 },
    { L"(08) Not Used", 0x59ad2a0, 0x59ad2c0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_A2[] =
{
    { L"Main Color A2", 0x59ad2c0, 0x59ad2e0, indexCPS2_Kobun, 0 },
    { L"(02) ID:01-04 Zenny ID:05-08 Potato (LP) / Cart / Data ID: 09-15 Rat / Potato / Cart / Data", 0x59ad2e0, 0x59ad300, indexCPS2_Tron, 1 },
    { L"(03) ID:01-05 Food ID:06-08 Tray / Food ID:09-15 Food / Dishes / j.MK", 0x59ad300, 0x59ad320, indexCPS2_Tron, 12 },
    { L"(04) Kobun Fire (Flame)", 0x59ad320, 0x59ad340, indexCPS2_Kobun, 3 },
    { L"(05) Bull Mover", 0x59ad340, 0x59ad360, indexCPS2_Kobun, 4 },
    { L"(06) j.MP (food coming out of the pot) / j,LK", 0x59ad360, 0x59ad380, indexCPS2_Kobun, 5 },
    { L"(07) Kobun Assist", 0x59ad380, 0x59ad3a0, indexCPS2_Kobun, 0 },
    { L"(08) Not Used", 0x59ad3a0, 0x59ad3c0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_SHARED[] =
{
    { L"Burning Dark", 0x59ad3c0, 0x59ad3e0, indexCPS2_Kobun, 0 },
    { L"Burning Light", 0x59ad3e0, 0x59ad400, indexCPS2_Kobun, 0 },
    { L"Shocked Dark", 0x59ad400, 0x59ad420, indexCPS2_Kobun, 0 },
    { L"Shocked Light", 0x59ad420, 0x59ad440, indexCPS2_Kobun, 0 },
    { L"Dark Burning Dark", 0x59ad440, 0x59ad460, indexCPS2_Kobun, 0 },
    { L"Dark Burning Light", 0x59ad460, 0x59ad480, indexCPS2_Kobun, 0 },
    { L"Kinetic Charge Dark", 0x59ad480, 0x59ad4a0, indexCPS2_Kobun, 0 },
    { L"Kinetic Charge Light", 0x59ad4a0, 0x59ad4c0, indexCPS2_Kobun, 0 },
};

const sGame_PaletteDataset MVC2_A_KOBUN_PALETTES_EXTRAS[] =
{
    { L"09: LP - King Kobun Frame 1 LP Color", 0x59ad4c0, 0x59ad4e0 },
    { L"0a: LP - King Kobun Frame 2 LP Color & then add Lumin+23", 0x59ad4e0, 0x59ad500 },
    { L"0b: LP - King Kobun Frame 3 LP Color & then add Lumin+32", 0x59ad500, 0x59ad520 },
    { L"0c: LP - King Kobun Frame 4 LP Color & then add Lumin+40", 0x59ad520, 0x59ad540 },
    { L"0d: LP - King Kobun Frame 5 Full white", 0x59ad540, 0x59ad560 },
    { L"0e: LK - King Kobun Frame 1 LK Color", 0x59ad560, 0x59ad580 },
    { L"0f: LK - King Kobun Frame 2 LK Color & then add Lumin+23", 0x59ad580, 0x59ad5a0 },
    { L"10: LK - King Kobun Frame 3 LK Color & then add Lumin+32", 0x59ad5a0, 0x59ad5c0 },
    { L"11: LK - King Kobun Frame 4 LK Color & then add Lumin+40", 0x59ad5c0, 0x59ad5e0 },
    { L"12: LK - King Kobun Frame 5 Full white", 0x59ad5e0, 0x59ad600 },
    { L"13: HP - King Kobun Frame 1 HP Color", 0x59ad600, 0x59ad620 },
    { L"14: HP - King Kobun Frame 2 HP Color & then add Lumin+23", 0x59ad620, 0x59ad640 },
    { L"15: HP - King Kobun Frame 3 HP Color & then add Lumin+32", 0x59ad640, 0x59ad660 },
    { L"16: HP - King Kobun Frame 4 HP Color & then add Lumin+40", 0x59ad660, 0x59ad680 },
    { L"17: HP - King Kobun Frame 5 Full white", 0x59ad680, 0x59ad6a0 },
    { L"18: HK - King Kobun Frame 1 HK Color", 0x59ad6a0, 0x59ad6c0 },
    { L"19: HK - King Kobun Frame 2 HK Color & then add Lumin+23", 0x59ad6c0, 0x59ad6e0 },
    { L"1a: HK - King Kobun Frame 3 HK Color & then add Lumin+32", 0x59ad6e0, 0x59ad700 },
    { L"1b: HK - King Kobun Frame 4 HK Color & then add Lumin+40", 0x59ad700, 0x59ad720 },
    { L"1c: HK - King Kobun Frame 5 Full white", 0x59ad720, 0x59ad740 },
    { L"1d: A1 - King Kobun Frame 1 A1 Color", 0x59ad740, 0x59ad760 },
    { L"1e: A1 - King Kobun Frame 2 A1 Color & then add Lumin+23", 0x59ad760, 0x59ad780 },
    { L"1f: A1 - King Kobun Frame 3 A1 Color & then add Lumin+32", 0x59ad780, 0x59ad7a0 },
    { L"20: A1 - King Kobun Frame 4 A1 Color & then add Lumin+40", 0x59ad7a0, 0x59ad7c0 },
    { L"21: A1 - King Kobun Frame 5 Full white", 0x59ad7c0, 0x59ad7e0 },
    { L"22: A2 - King Kobun Frame 1 A2 Color", 0x59ad7e0, 0x59ad800 },
    { L"23: A2 - King Kobun Frame 2 A2 Color & then add Lumin+23", 0x59ad800, 0x59ad820 },
    { L"24: A2 - King Kobun Frame 3 A2 Color & then add Lumin+32", 0x59ad820, 0x59ad840 },
    { L"25: A2 - King Kobun Frame 4 A2 Color & then add Lumin+40", 0x59ad840, 0x59ad860 },
    { L"26: A2 - King Kobun Frame 5 Full white", 0x59ad860, 0x59ad880 },
};

const sDescTreeNode MVC2_A_KOBUN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_LP, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_LP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_LK, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_LK) },
    { L"HP", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_HP, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_HP) },
    { L"HK", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_HK, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_HK) },
    { L"A1", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_A1, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_A1) },
    { L"A2", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_A2, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_A2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_SHARED, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_SHARED) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_PALETTES_EXTRAS, ARRAYSIZE(MVC2_A_KOBUN_PALETTES_EXTRAS) },
};

const sGame_PaletteDataset MVC2_A_GENERICSET_PALETTES[] =
{
    { L"LP", INVALID_UNIT_VALUE, INVALID_UNIT_VALUE },
    { L"LK", INVALID_UNIT_VALUE, INVALID_UNIT_VALUE },
    { L"HP", INVALID_UNIT_VALUE, INVALID_UNIT_VALUE },
    { L"HK", INVALID_UNIT_VALUE, INVALID_UNIT_VALUE },
    { L"A1", INVALID_UNIT_VALUE, INVALID_UNIT_VALUE },
    { L"A2", INVALID_UNIT_VALUE, INVALID_UNIT_VALUE },
};

struct MVC2_TEAM_GROUPING
{
    LPCWSTR pszTeamName = nullptr;
    UINT16 nCharacterOne = indexMVC2ARyu;
    UINT16 nCharacterTwo = indexMVC2ARyu;
    UINT16 nCharacterThree = indexMVC2ARyu;
};

constexpr auto k_nSpecialTeamSpriteImageIndex = 0x80;

const MVC2_TEAM_GROUPING mvc2TeamList[] =
{
    { L"MSP", indexMVC2AMagneto, indexMVC2AStorm, indexMVC2APsylocke },
    { L"MSS", indexMVC2AMagneto, indexMVC2AStorm, indexMVC2ASentinel },
    { L"Santhrax", indexMVC2AStorm, indexMVC2ASentinel, indexMVC2ACaptainCommando },
    { L"Scrub", indexMVC2ACable, indexMVC2ASentinel, indexMVC2ACaptainCommando },
    { L"SSCable", indexMVC2AStorm, indexMVC2ASentinel, indexMVC2ACable },
    { L"Rowtron", indexMVC2AMagneto, indexMVC2ACable, indexMVC2ASentinel },
    { L"Matrix", indexMVC2AStorm, indexMVC2ASentinel, indexMVC2ACyclops },
    { L"Duc", indexMVC2ASpiral, indexMVC2ACable, indexMVC2ASentinel },
    { L"Clockw0rk", indexMVC2ASentinel, indexMVC2AStrider, indexMVC2ADrDoom },
    { L"Combofiend", indexMVC2AMagneto, indexMVC2AIronMan, indexMVC2ASentinel },
    { L"Watts", indexMVC2ABlackheart, indexMVC2ASentinel, indexMVC2ACaptainCommando },
    
    { L"VDO", indexMVC2ARogue, indexMVC2AColossus, indexMVC2AKen },
//    { L"MikeZ", indexMVC2AJuggernaut, indexMVC2ADrDoom, indexMVC2ATron },
    { L"Shoto", indexMVC2ARyu, indexMVC2AKen, indexMVC2AAkuma},
};

const sDescTreeNode MVC2_A_TEAMVIEW_COLLECTION[ARRAYSIZE(mvc2TeamList)] =
{
    { L"MSP", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"MSS", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Santhrax", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Scrub", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"SSCable", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Rowtron", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Matrix", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Duc", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Clockw0rk", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Combofiend", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Watts", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },

    { L"VDO", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    // The problem with Tron is that she's already a joined palette...
//    { L"MikeZ", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
    { L"Shoto", DESC_NODETYPE_TREE, (void*)MVC2_A_GENERICSET_PALETTES, ARRAYSIZE(MVC2_A_GENERICSET_PALETTES) },
};

const UINT8 MVC2_A_UNITSORT[MVC2_A_NUMUNIT + 1] // Plus for extras
{
   indexMVC2AAkuma,
   indexMVC2AAmingo,
   indexMVC2AAnakaris,
   indexMVC2ABBHood,
   indexMVC2ABlackheart,
   indexMVC2ACable,
   indexMVC2ACammy,
   indexMVC2ACaptainAmerica,
   indexMVC2ACaptainCommando,
   indexMVC2AChunLi,
   indexMVC2AColossus,
   indexMVC2ACyclops,
   indexMVC2ADan,
   indexMVC2ADhalsim,
   indexMVC2ADrDoom,
   indexMVC2AFelicia,
   indexMVC2AGambit,
   indexMVC2AGuile,
   indexMVC2AHayato,
   indexMVC2AHulk,
   indexMVC2AIceman,
   indexMVC2AIronMan,
   indexMVC2AJill,
   indexMVC2AJin,
   indexMVC2AJuggernaut,
   indexMVC2AKen,
   indexMVC2AMagneto,
   indexMVC2AMarrow,
   indexMVC2MBison,
   indexMVC2AMegaman,
   indexMVC2AMorrigan,
   indexMVC2ANash,
   indexMVC2AOmegaRed,
   indexMVC2APsylocke,
   indexMVC2ARogue,
   indexMVC2ARoll,
   indexMVC2ARuby,
   indexMVC2ARyu,
   indexMVC2ASabretooth,
   indexMVC2ASakura,
   indexMVC2ASentinel,
   indexMVC2AServbot,
   indexMVC2AShuma,
   indexMVC2ASilverSamurai,
   indexMVC2ASonson,
   indexMVC2ASpiderman,
   indexMVC2ASpiral,
   indexMVC2AStorm,
   indexMVC2AStrider,
   indexMVC2AThanos,
   indexMVC2ATron,
   indexMVC2AVenom,
   indexMVC2AWarMachine,
   indexMVC2AWolverine,
   indexMVC2ABonerine,
   indexMVC2AZangief,
   indexMVC2AAbyss1,
   indexMVC2AAbyss2,
   indexMVC2AAbyss3,
   indexMVC2ATeamView,

   MVC2_A_EXTRALOC
};

const sDescTreeNode MVC2_A_UNITS[MVC2_A_NUMUNIT] =
{
    { L"Ryu",                DESC_NODETYPE_TREE, (void*)MVC2_A_RYU_COLLECTION,               ARRAYSIZE(MVC2_A_RYU_COLLECTION) },
    { L"Zangief",            DESC_NODETYPE_TREE, (void*)MVC2_A_ZANGIEF_COLLECTION,           ARRAYSIZE(MVC2_A_ZANGIEF_COLLECTION) },
    { L"Guile",              DESC_NODETYPE_TREE, (void*)MVC2_A_GUILE_COLLECTION,             ARRAYSIZE(MVC2_A_GUILE_COLLECTION) },
    { L"Morrigan",           DESC_NODETYPE_TREE, (void*)MVC2_A_MORRIGAN_COLLECTION,          ARRAYSIZE(MVC2_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",           DESC_NODETYPE_TREE, (void*)MVC2_A_ANAKARIS_COLLECTION,          ARRAYSIZE(MVC2_A_ANAKARIS_COLLECTION) },
    { L"Strider Hiryu",      DESC_NODETYPE_TREE, (void*)MVC2_A_STRIDER_COLLECTION,           ARRAYSIZE(MVC2_A_STRIDER_COLLECTION) },
    { L"Cyclops",            DESC_NODETYPE_TREE, (void*)MVC2_A_CYCLOPS_COLLECTION,           ARRAYSIZE(MVC2_A_CYCLOPS_COLLECTION) },
    { L"Wolverine",          DESC_NODETYPE_TREE, (void*)MVC2_A_WOLVERINE_COLLECTION,         ARRAYSIZE(MVC2_A_WOLVERINE_COLLECTION) },
    { L"Psylocke",           DESC_NODETYPE_TREE, (void*)MVC2_A_PSYLOCKE_COLLECTION,          ARRAYSIZE(MVC2_A_PSYLOCKE_COLLECTION) },
    { L"Iceman",             DESC_NODETYPE_TREE, (void*)MVC2_A_ICEMAN_COLLECTION,            ARRAYSIZE(MVC2_A_ICEMAN_COLLECTION) },
    { L"Rogue",              DESC_NODETYPE_TREE, (void*)MVC2_A_ROGUE_COLLECTION,             ARRAYSIZE(MVC2_A_ROGUE_COLLECTION) },
    { L"Captain America",    DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINAMERICA_COLLECTION,    ARRAYSIZE(MVC2_A_CAPTAINAMERICA_COLLECTION) },
    { L"Spider-Man",         DESC_NODETYPE_TREE, (void*)MVC2_A_SPIDERMAN_COLLECTION,         ARRAYSIZE(MVC2_A_SPIDERMAN_COLLECTION) },
    { L"Hulk",               DESC_NODETYPE_TREE, (void*)MVC2_A_HULK_COLLECTION,              ARRAYSIZE(MVC2_A_HULK_COLLECTION) },
    { L"Venom",              DESC_NODETYPE_TREE, (void*)MVC2_A_VENOM_COLLECTION,             ARRAYSIZE(MVC2_A_VENOM_COLLECTION) },
    { L"Dr. Doom",           DESC_NODETYPE_TREE, (void*)MVC2_A_DRDOOM_COLLECTION,            ARRAYSIZE(MVC2_A_DRDOOM_COLLECTION) },
    { L"Tron Bonne",         DESC_NODETYPE_TREE, (void*)MVC2_A_TRON_COLLECTION,              ARRAYSIZE(MVC2_A_TRON_COLLECTION) },
    { L"Jill Valentine",     DESC_NODETYPE_TREE, (void*)MVC2_A_JILL_COLLECTION,              ARRAYSIZE(MVC2_A_JILL_COLLECTION) },
    { L"Hayato",             DESC_NODETYPE_TREE, (void*)MVC2_A_HAYATO_COLLECTION,            ARRAYSIZE(MVC2_A_HAYATO_COLLECTION) },
    { L"Ruby Heart",         DESC_NODETYPE_TREE, (void*)MVC2_A_RUBY_COLLECTION,              ARRAYSIZE(MVC2_A_RUBY_COLLECTION) },
    { L"SonSon",             DESC_NODETYPE_TREE, (void*)MVC2_A_SONSON_COLLECTION,            ARRAYSIZE(MVC2_A_SONSON_COLLECTION) },
    { L"Amingo",             DESC_NODETYPE_TREE, (void*)MVC2_A_AMINGO_COLLECTION,            ARRAYSIZE(MVC2_A_AMINGO_COLLECTION) },
    { L"Marrow",             DESC_NODETYPE_TREE, (void*)MVC2_A_MARROW_COLLECTION,            ARRAYSIZE(MVC2_A_MARROW_COLLECTION) },
    { L"Cable",              DESC_NODETYPE_TREE, (void*)MVC2_A_CABLE_COLLECTION,             ARRAYSIZE(MVC2_A_CABLE_COLLECTION) },
    { L"Abyss (Form 1)",     DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS1_COLLECTION,            ARRAYSIZE(MVC2_A_ABYSS1_COLLECTION) },
    { L"Abyss (Form 2)",     DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS2_COLLECTION,            ARRAYSIZE(MVC2_A_ABYSS2_COLLECTION) },
    { L"Abyss (Form 3)",     DESC_NODETYPE_TREE, (void*)MVC2_A_ABYSS3_COLLECTION,            ARRAYSIZE(MVC2_A_ABYSS3_COLLECTION) },
    { L"Chun-Li",            DESC_NODETYPE_TREE, (void*)MVC2_A_CHUNLI_COLLECTION,            ARRAYSIZE(MVC2_A_CHUNLI_COLLECTION) },
    { L"Megaman",            DESC_NODETYPE_TREE, (void*)MVC2_A_MEGAMAN_COLLECTION,           ARRAYSIZE(MVC2_A_MEGAMAN_COLLECTION) },
    { L"Roll",               DESC_NODETYPE_TREE, (void*)MVC2_A_ROLL_COLLECTION,              ARRAYSIZE(MVC2_A_ROLL_COLLECTION) },
    { L"Akuma",              DESC_NODETYPE_TREE, (void*)MVC2_A_GOUKI_COLLECTION,             ARRAYSIZE(MVC2_A_GOUKI_COLLECTION) },
    { L"B.B. Hood",          DESC_NODETYPE_TREE, (void*)MVC2_A_BBHOOD_COLLECTION,            ARRAYSIZE(MVC2_A_BBHOOD_COLLECTION) },
    { L"Felicia",            DESC_NODETYPE_TREE, (void*)MVC2_A_FELICIA_COLLECTION,           ARRAYSIZE(MVC2_A_FELICIA_COLLECTION) },
    { L"Charlie",            DESC_NODETYPE_TREE, (void*)MVC2_A_CHARLIE_COLLECTION,           ARRAYSIZE(MVC2_A_CHARLIE_COLLECTION) },
    { L"Sakura",             DESC_NODETYPE_TREE, (void*)MVC2_A_SAKURA_COLLECTION,            ARRAYSIZE(MVC2_A_SAKURA_COLLECTION) },
    { L"Dan",                DESC_NODETYPE_TREE, (void*)MVC2_A_DAN_COLLECTION,               ARRAYSIZE(MVC2_A_DAN_COLLECTION) },
    { L"Cammy",              DESC_NODETYPE_TREE, (void*)MVC2_A_CAMMY_COLLECTION,             ARRAYSIZE(MVC2_A_CAMMY_COLLECTION) },
    { L"Dhalsim",            DESC_NODETYPE_TREE, (void*)MVC2_A_DHALSIM_COLLECTION,           ARRAYSIZE(MVC2_A_DHALSIM_COLLECTION) },
    { L"M. Bison",           DESC_NODETYPE_TREE, (void*)MVC2_A_MBISON_COLLECTION,            ARRAYSIZE(MVC2_A_MBISON_COLLECTION) },
    { L"Ken",                DESC_NODETYPE_TREE, (void*)MVC2_A_KEN_COLLECTION,               ARRAYSIZE(MVC2_A_KEN_COLLECTION) },
    { L"Gambit",             DESC_NODETYPE_TREE, (void*)MVC2_A_GAMBIT_COLLECTION,            ARRAYSIZE(MVC2_A_GAMBIT_COLLECTION) },
    { L"Juggernaut",         DESC_NODETYPE_TREE, (void*)MVC2_A_JUGGERNAUT_COLLECTION,        ARRAYSIZE(MVC2_A_JUGGERNAUT_COLLECTION) },
    { L"Storm",              DESC_NODETYPE_TREE, (void*)MVC2_A_STORM_COLLECTION,             ARRAYSIZE(MVC2_A_STORM_COLLECTION) },
    { L"Sabretooth",         DESC_NODETYPE_TREE, (void*)MVC2_A_SABRETOOTH_COLLECTION,        ARRAYSIZE(MVC2_A_SABRETOOTH_COLLECTION) },
    { L"Magneto",            DESC_NODETYPE_TREE, (void*)MVC2_A_MAGNETO_COLLECTION,           ARRAYSIZE(MVC2_A_MAGNETO_COLLECTION) },
    { L"Shuma-Gorath",       DESC_NODETYPE_TREE, (void*)MVC2_A_SHUMA_COLLECTION,             ARRAYSIZE(MVC2_A_SHUMA_COLLECTION) },
    { L"War Machine",        DESC_NODETYPE_TREE, (void*)MVC2_A_WARMACHINE_COLLECTION,        ARRAYSIZE(MVC2_A_WARMACHINE_COLLECTION) },
    { L"Silver Samurai",     DESC_NODETYPE_TREE, (void*)MVC2_A_SILVERSAMURAI_COLLECTION,     ARRAYSIZE(MVC2_A_SILVERSAMURAI_COLLECTION) },
    { L"Omega Red",          DESC_NODETYPE_TREE, (void*)MVC2_A_OMEGARED_COLLECTION,          ARRAYSIZE(MVC2_A_OMEGARED_COLLECTION) },
    { L"Spiral",             DESC_NODETYPE_TREE, (void*)MVC2_A_SPIRAL_COLLECTION,            ARRAYSIZE(MVC2_A_SPIRAL_COLLECTION) },
    { L"Colossus",           DESC_NODETYPE_TREE, (void*)MVC2_A_COLOSSUS_COLLECTION,          ARRAYSIZE(MVC2_A_COLOSSUS_COLLECTION) },
    { L"Iron Man",           DESC_NODETYPE_TREE, (void*)MVC2_A_IRONMAN_COLLECTION,           ARRAYSIZE(MVC2_A_IRONMAN_COLLECTION) },
    { L"Sentinel",           DESC_NODETYPE_TREE, (void*)MVC2_A_SENTINEL_COLLECTION,          ARRAYSIZE(MVC2_A_SENTINEL_COLLECTION) },
    { L"Blackheart",         DESC_NODETYPE_TREE, (void*)MVC2_A_BLACKHEART_COLLECTION,        ARRAYSIZE(MVC2_A_BLACKHEART_COLLECTION) },
    { L"Thanos",             DESC_NODETYPE_TREE, (void*)MVC2_A_THANOS_COLLECTION,            ARRAYSIZE(MVC2_A_THANOS_COLLECTION) },
    { L"Jin Saotome",        DESC_NODETYPE_TREE, (void*)MVC2_A_JIN_COLLECTION,               ARRAYSIZE(MVC2_A_JIN_COLLECTION) },
    { L"Captain Commando",   DESC_NODETYPE_TREE, (void*)MVC2_A_CAPTAINCOMMANDO_COLLECTION,   ARRAYSIZE(MVC2_A_CAPTAINCOMMANDO_COLLECTION) },
    { L"Bonerine",           DESC_NODETYPE_TREE, (void*)MVC2_A_BONERINE_COLLECTION,          ARRAYSIZE(MVC2_A_BONERINE_COLLECTION) },
    { L"Servbot",            DESC_NODETYPE_TREE, (void*)MVC2_A_KOBUN_COLLECTION,             ARRAYSIZE(MVC2_A_KOBUN_COLLECTION) },
    { L"Team Views",         DESC_NODETYPE_TREE, (void*)MVC2_A_TEAMVIEW_COLLECTION,          ARRAYSIZE(MVC2_A_TEAMVIEW_COLLECTION) },
};

// We extend this array with data groveled from the MVC2e.txt extensible extras file, if any.
const stExtraDef MVC2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

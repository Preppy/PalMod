#pragma once

const std::vector<uint16_t> CFE_P_IMG_UNITS =
{
    // Darkstalker versions
    indexCPS2Sprites_Anakaris,      // 0x04
    indexCPS2Sprites_Vamp_Demitri,  // 0x6A
    indexCPS2Sprites_Felicia,       // 0x20
    indexCPS2Sprites_Vamp_Jedah,    // 0x6D
    indexCPS2Sprites_Vamp_Pyron,    // 0x72

    // "sf2" cvs2 versions
    indexCVS2Sprites_Guile,         // 0xc8
    indexCVS2Sprites_MBison,        // 0xd2
    indexCVS2Sprites_Ryu,           // 0xdd
    indexCVS2Sprites_ShinAkuma,     // 0xe2
    indexCVS2Sprites_Zangief,       // 0xe8

    // sfa versions
    indexCPS2Sprites_Sakura,        // 0x22
    indexCPS2Sprites_Guy,           // 0x3F
    indexCPS2Sprites_Rose,          // 0x41
    indexCPS2Sprites_Karin,         // 0x4B

    // cfe unique
    indexCFJSprites_Ingrid,         // 0x102

    // Yes, this is CPS3 SF3.  We have code in LoadSpecificPalette to swap image sets as needed
    index3SSprites_Alex,      // 0x00
    index3SSprites_Yun,       // 0x02
    index3SSprites_Urien,     // 0x0c
    index3SSprites_ChunLi,    // 0x0f

    // Red Earth peeps.  We also swap for these as needed.
    indexRedEarthSprites_Hauzer,    // 0x02
    indexRedEarthSprites_Hydron,    // 0x03
    indexRedEarthSprites_Kenji,     // 0x04
    indexRedEarthSprites_Leo,       // 0x07
};

// Darkstalkers/Vampire
const sGame_PaletteDataset CFE_P_DEMITRI_PUNCH[] =
{
    { L"Demitri #1 Punch", 0x1e4e10, 0x1e4e30, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri #2 Punch", 0x1e4e50, 0x1e4e70, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset CFE_P_DEMITRI_KICK[] =
{
    { L"Demitri #1 Kick", 0x1e4e30, 0x1e4e50, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri #2 Kick", 0x1e4e70, 0x1e4e90, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset CFE_P_ANAKARIS_PUNCH[] =
{
    { L"Anakaris Punch", 0x1e4e90, 0x1e4eb0, indexCPS2Sprites_Anakaris },
};

const sGame_PaletteDataset CFE_P_ANAKARIS_KICK[] =
{
    { L"Anakaris Kick", 0x1e4eb0, 0x1e4ed0, indexCPS2Sprites_Anakaris },
};

const sGame_PaletteDataset CFE_P_FELICIA_PUNCH[] =
{
    { L"Felicia Punch", 0x1e4ed0, 0x1e4ef0, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset CFE_P_FELICIA_KICK[] =
{
    { L"Felicia Kick", 0x1e4ef0, 0x1e4f10, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset CFE_P_JEDAH_PUNCH[] =
{
    // Note that Jedah-PS2 doesn't appear to have his Blood palettes
    { L"Jedah Punch", 0x1e4f10, 0x1e4f30, indexCPS2Sprites_Vamp_Jedah, 0x00 },
};

const sGame_PaletteDataset CFE_P_JEDAH_KICK[] =
{
    { L"Jedah Kick", 0x1e4f30, 0x1e4f50, indexCPS2Sprites_Vamp_Jedah, 0x00 },
};

const sGame_PaletteDataset CFE_P_PYRON_PUNCH[] =
{
    { L"Pyron Punch", 0x1e4f50, 0x1e4f70, indexCPS2Sprites_Vamp_Pyron },
};

const sGame_PaletteDataset CFE_P_PYRON_KICK[] =
{
    { L"Pyron Kick", 0x1e4f70, 0x1e4f90, indexCPS2Sprites_Vamp_Pyron },
};

// Street Fighter II
const sGame_PaletteDataset CFE_P_RYU_PUNCH[] =
{
    { L"Ryu Punch", 0x1e4f90, 0x1e4fb0, indexCVS2Sprites_Ryu },
};

const sGame_PaletteDataset CFE_P_RYU_KICK[] =
{
    { L"Ryu Kick", 0x1e4fb0, 0x1e4fd0, indexCVS2Sprites_Ryu },
};

const sGame_PaletteDataset CFE_P_GUILE_PUNCH[] =
{
    { L"Guile Punch", 0x1e4fd0, 0x1e4ff0, indexCVS2Sprites_Guile },
};

const sGame_PaletteDataset CFE_P_GUILE_KICK[] =
{
    { L"Guile Kick", 0x1e4ff0, 0x1e5010, indexCVS2Sprites_Guile },
};

const sGame_PaletteDataset CFE_P_ZANGIEF_PUNCH[] =
{
    { L"Zangief Punch", 0x1e5010, 0x1e5030, indexCVS2Sprites_Zangief },
};

const sGame_PaletteDataset CFE_P_ZANGIEF_KICK[] =
{
    { L"Zangief Kick", 0x1e5030, 0x1e5050, indexCVS2Sprites_Zangief },
};

const sGame_PaletteDataset CFE_P_BISON_PUNCH[] =
{
    { L"M. Bison Punch", 0x1e5050, 0x1e5070, indexCVS2Sprites_MBison },
};

const sGame_PaletteDataset CFE_P_BISON_KICK[] =
{
    { L"M. Bison Kick", 0x1e5070, 0x1e5090, indexCVS2Sprites_MBison },
};

const sGame_PaletteDataset CFE_P_SHINAKUMA_PUNCH[] =
{
    { L"Shin Akuma Punch", 0x1e5090, 0x1e50b0, indexCVS2Sprites_ShinAkuma },
};

const sGame_PaletteDataset CFE_P_SHINAKUMA_KICK[] =
{
    { L"Shin Akuma Kick", 0x1e50b0, 0x1e50d0, indexCVS2Sprites_ShinAkuma },
};

// Street Fighter Alpha/Zero
const sGame_PaletteDataset CFE_P_GUY_PUNCH[] =
{
    { L"Guy Punch", 0x1e50d0, 0x1e50f0, indexCPS2Sprites_Guy },
};

const sGame_PaletteDataset CFE_P_GUY_KICK[] =
{
    { L"Guy Kick", 0x1e50f0, 0x1e5110, indexCPS2Sprites_Guy },
};

const sGame_PaletteDataset CFE_P_ROSE_PUNCH[] =
{
    { L"Rose Punch", 0x1e5110, 0x1e5130, indexCPS2Sprites_Rose },
};

const sGame_PaletteDataset CFE_P_ROSE_KICK[] =
{
    { L"Rose Kick", 0x1e5130, 0x1e5150, indexCPS2Sprites_Rose },
};

const sGame_PaletteDataset CFE_P_SAKURA_PUNCH[] =
{
    { L"Sakura Punch", 0x1e5150, 0x1e5170, indexCPS2Sprites_Sakura },
};

const sGame_PaletteDataset CFE_P_SAKURA_KICK[] =
{
    { L"Sakura Kick", 0x1e5170, 0x1e5190, indexCPS2Sprites_Sakura },
};

const sGame_PaletteDataset CFE_P_KARIN_PUNCH[] =
{
    { L"Karin Punch", 0x1e5190, 0x1e51b0, indexCPS2Sprites_Karin },
};

const sGame_PaletteDataset CFE_P_KARIN_KICK[] =
{
    { L"Karin Kick", 0x1e51b0, 0x1e51d0, indexCPS2Sprites_Karin },
};

const sGame_PaletteDataset CFE_P_INGRID_PUNCH[] =
{
    { L"Ingrid Punch", 0x1e59d0, 0x1e5a50, indexCFJSprites_Ingrid, 0x00 },
};

// Street Fighter III (Scrambled palettes)
const sGame_PaletteDataset CFE_P_INGRID_KICK[] =
{
    { L"Ingrid Kick", 0x1e5a50, 0x1e5ad0, indexCFJSprites_Ingrid, 0x00 },
};

const sGame_PaletteDataset CFE_P_CHUNLI_PUNCH[] =
{
    { L"Chun-Li Punch", 0x1e51d0, 0x1e5250, index3SSprites_ChunLi, 0x00  },
};

const sGame_PaletteDataset CFE_P_CHUNLI_KICK[] =
{
    { L"Chun-Li Kick", 0x1e5250, 0x1e52d0, index3SSprites_ChunLi, 0x00  },
};

const sGame_PaletteDataset CFE_P_YUN_PUNCH[] =
{
    { L"Yun Punch", 0x1e52d0, 0x1e5350, index3SSprites_Yun, 0x00 },
};

const sGame_PaletteDataset CFE_P_YUN_KICK[] =
{
    { L"Yun Kick", 0x1e5350, 0x1e53d0, index3SSprites_Yun, 0x00 },
};

const sGame_PaletteDataset CFE_P_ALEX_PUNCH[] =
{
    { L"Alex Punch", 0x1e53d0, 0x1e5450, index3SSprites_Alex, 0x00 },
};

const sGame_PaletteDataset CFE_P_ALEX_KICK[] =
{
    { L"Alex Kick", 0x1e5450, 0x1e54d0, index3SSprites_Alex, 0x00 },
};

const sGame_PaletteDataset CFE_P_URIEN_PUNCH[] =
{
    { L"Urien Punch", 0x1e54d0, 0x1e5550, index3SSprites_Urien, 0x00 },
};

const sGame_PaletteDataset CFE_P_URIEN_KICK[] =
{
    { L"Urien Kick", 0x1e5550, 0x1e55d0, index3SSprites_Urien, 0x00 },
};

// Red Earth/Warzard
const sGame_PaletteDataset CFE_P_LEO_PUNCH[] =
{
    { L"Leo Punch", 0x1e55d0, 0x1e5650, indexRedEarthSprites_Leo, 0x00 },
};

const sGame_PaletteDataset CFE_P_LEO_KICK[] =
{
    { L"Leo Kick", 0x1e5650, 0x1e56d0, indexRedEarthSprites_Leo, 0x00 },
};

const sGame_PaletteDataset CFE_P_KENJI_PUNCH[] =
{
    // Note that Kenji-PS2 is different than Kenji-RedEarth or Kenji-Steam
    { L"Kenji Punch", 0x1e56d0, 0x1e5750, indexRedEarthSprites_Kenji, 0x00 },
};

const sGame_PaletteDataset CFE_P_KENJI_KICK[] =
{
    { L"Kenji Kick", 0x1e5750, 0x1e57d0, indexRedEarthSprites_Kenji, 0x00 },
};

const sGame_PaletteDataset CFE_P_HAUZER_PUNCH[] =
{
    { L"Hauzer Punch", 0x1e57d0, 0x1e5850, indexRedEarthSprites_Hauzer, 0x00 },
};

const sGame_PaletteDataset CFE_P_HAUZER_KICK[] =
{
    { L"Hauzer Kick", 0x1e5850, 0x1e58d0, indexRedEarthSprites_Hauzer, 0x00 },
};

const sGame_PaletteDataset CFE_P_HYDRON_PUNCH[] =
{
    { L"Hydron Punch", 0x1e58d0, 0x1e5950, indexRedEarthSprites_Hydron, 0x00 },
};

const sGame_PaletteDataset CFE_P_HYDRON_KICK[] =
{
    { L"Hydron Kick", 0x1e5950, 0x1e59d0, indexRedEarthSprites_Hydron, 0x00 },
};

// Effects/EX
const sGame_PaletteDataset CFE_P_CHUNLI_EXTRAS[] =
{
    { L"Chun-Li EX", 0x1e62c0, 0x1e6340 },
};

const sGame_PaletteDataset CFE_P_YUN_EXTRAS[] =
{
    { L"Yun EX", 0x1e6340, 0x1e63c0 },
};

const sGame_PaletteDataset CFE_P_ALEX_EXTRAS[] =
{
    { L"Alex EX", 0x1e63c0, 0x1e6440 },
};

const sGame_PaletteDataset CFE_P_URIEN_EXTRAS[] =
{
    { L"Urien EX", 0x1e6440, 0x1e64c0 },
};

// Darkstalkers ES/EX effects found by chloe !
const sGame_PaletteDataset CFE_P_DEMITRI_EXTRAS[] =
{
    { L"Demitri ES (1/4)", 0x1e5b40, 0x1e5b60, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES (2/4)", 0x1e5b60, 0x1e5b80, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES (3/4)", 0x1e5b80, 0x1e5ba0, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES (4/4)", 0x1e5ba0, 0x1e5bc0, indexCPS2Sprites_Vamp_Demitri },

    { L"Demitri EX (1/8)", 0x1e5bc0, 0x1e5be0, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (2/8)", 0x1e5be0, 0x1e5c00, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (3/8)", 0x1e5c00, 0x1e5c20, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (4/8)", 0x1e5c20, 0x1e5c40, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (5/8)", 0x1e5c40, 0x1e5c60, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (6/8)", 0x1e5c60, 0x1e5c80, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (7/8)", 0x1e5c80, 0x1e5ca0, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX (8/8)", 0x1e5ca0, 0x1e5cc0, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset CFE_P_ANAKARIS_EXTRAS[] =
{
    { L"Anakaris ES (1/4)", 0x1e5cc0, 0x1e5ce0, indexCPS2Sprites_Anakaris },
    { L"Anakaris ES (2/4)", 0x1e5ce0, 0x1e5d00, indexCPS2Sprites_Anakaris },
    { L"Anakaris ES (3/4)", 0x1e5d00, 0x1e5d20, indexCPS2Sprites_Anakaris },
    { L"Anakaris ES (4/4)", 0x1e5d20, 0x1e5d40, indexCPS2Sprites_Anakaris },

    { L"Anakaris EX (1/8)", 0x1e5d40, 0x1e5d60, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (2/8)", 0x1e5d60, 0x1e5d80, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (3/8)", 0x1e5d80, 0x1e5da0, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (4/8)", 0x1e5da0, 0x1e5dc0, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (5/8)", 0x1e5dc0, 0x1e5de0, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (6/8)", 0x1e5de0, 0x1e5e00, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (7/8)", 0x1e5e00, 0x1e5e20, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX (8/8)", 0x1e5e20, 0x1e5e40, indexCPS2Sprites_Anakaris },
};

const sGame_PaletteDataset CFE_P_FELICIA_EXTRAS[] =
{
    { L"Felicia ES (1/4)", 0x1e5e40, 0x1e5e60, indexCPS2Sprites_Felicia },
    { L"Felicia ES (2/4)", 0x1e5e60, 0x1e5e80, indexCPS2Sprites_Felicia },
    { L"Felicia ES (3/4)", 0x1e5e80, 0x1e5ea0, indexCPS2Sprites_Felicia },
    { L"Felicia ES (4/4)", 0x1e5ea0, 0x1e5ec0, indexCPS2Sprites_Felicia },

    { L"Felicia EX (1/8)", 0x1e5ec0, 0x1e5ee0, indexCPS2Sprites_Felicia },
    { L"Felicia EX (2/8)", 0x1e5ee0, 0x1e5f00, indexCPS2Sprites_Felicia },
    { L"Felicia EX (3/8)", 0x1e5f00, 0x1e5f20, indexCPS2Sprites_Felicia },
    { L"Felicia EX (4/8)", 0x1e5f20, 0x1e5f40, indexCPS2Sprites_Felicia },
    { L"Felicia EX (5/8)", 0x1e5f40, 0x1e5f60, indexCPS2Sprites_Felicia },
    { L"Felicia EX (6/8)", 0x1e5f60, 0x1e5f80, indexCPS2Sprites_Felicia },
    { L"Felicia EX (7/8)", 0x1e5f80, 0x1e5fa0, indexCPS2Sprites_Felicia },
    { L"Felicia EX (8/8)", 0x1e5fa0, 0x1e5fc0, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset CFE_P_JEDAH_EXTRAS[] =
{
    { L"Jedah ES (1/4)", 0x1e5fc0, 0x1e5fe0, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES (2/4)", 0x1e5fe0, 0x1e6000, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES (3/4)", 0x1e6000, 0x1e6020, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES (4/4)", 0x1e6020, 0x1e6040, indexCPS2Sprites_Vamp_Jedah },

    { L"Jedah EX (1/8)", 0x1e6040, 0x1e6060, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (2/8)", 0x1e6060, 0x1e6080, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (3/8)", 0x1e6080, 0x1e60a0, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (4/8)", 0x1e60a0, 0x1e60c0, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (5/8)", 0x1e60c0, 0x1e60e0, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (6/8)", 0x1e60e0, 0x1e6100, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (7/8)", 0x1e6100, 0x1e6120, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX (8/8)", 0x1e6120, 0x1e6140, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset CFE_P_PYRON_EXTRAS[] =
{
    { L"Pyron ES (1/4)", 0x1e6140, 0x1e6160, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ES (2/4)", 0x1e6160, 0x1e6180, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ES (3/4)", 0x1e6180, 0x1e61a0, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron ES (4/4)", 0x1e61a0, 0x1e61c0, indexCPS2Sprites_Vamp_Pyron },

    { L"Pyron EX (1/8)", 0x1e61c0, 0x1e61e0, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (2/8)", 0x1e61e0, 0x1e6200, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (3/8)", 0x1e6200, 0x1e6220, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (4/8)", 0x1e6220, 0x1e6240, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (5/8)", 0x1e6240, 0x1e6260, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (6/8)", 0x1e6260, 0x1e6280, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (7/8)", 0x1e6280, 0x1e62a0, indexCPS2Sprites_Vamp_Pyron },
    { L"Pyron EX (8/8)", 0x1e62a0, 0x1e62c0, indexCPS2Sprites_Vamp_Pyron },
};

const sDescTreeNode CFE_P_DEMITRI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_DEMITRI_PUNCH, ARRAYSIZE(CFE_P_DEMITRI_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_DEMITRI_KICK, ARRAYSIZE(CFE_P_DEMITRI_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_DEMITRI_EXTRAS, ARRAYSIZE(CFE_P_DEMITRI_EXTRAS) },
};

const sDescTreeNode CFE_P_ANAKARIS_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_ANAKARIS_PUNCH, ARRAYSIZE(CFE_P_ANAKARIS_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_ANAKARIS_KICK, ARRAYSIZE(CFE_P_ANAKARIS_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_ANAKARIS_EXTRAS, ARRAYSIZE(CFE_P_ANAKARIS_EXTRAS) },
};

const sDescTreeNode CFE_P_FELICIA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_FELICIA_PUNCH, ARRAYSIZE(CFE_P_FELICIA_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_FELICIA_KICK, ARRAYSIZE(CFE_P_FELICIA_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_FELICIA_EXTRAS, ARRAYSIZE(CFE_P_FELICIA_EXTRAS) },
};

const sDescTreeNode CFE_P_JEDAH_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_JEDAH_PUNCH, ARRAYSIZE(CFE_P_JEDAH_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_JEDAH_KICK, ARRAYSIZE(CFE_P_JEDAH_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_JEDAH_EXTRAS, ARRAYSIZE(CFE_P_JEDAH_EXTRAS) },
};

const sDescTreeNode CFE_P_PYRON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_PYRON_PUNCH, ARRAYSIZE(CFE_P_PYRON_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_PYRON_KICK, ARRAYSIZE(CFE_P_PYRON_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_PYRON_EXTRAS, ARRAYSIZE(CFE_P_PYRON_EXTRAS) },
};

const sDescTreeNode CFE_P_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_RYU_PUNCH, ARRAYSIZE(CFE_P_RYU_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_RYU_KICK, ARRAYSIZE(CFE_P_RYU_KICK) },
};

const sDescTreeNode CFE_P_GUILE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_GUILE_PUNCH, ARRAYSIZE(CFE_P_GUILE_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_GUILE_KICK, ARRAYSIZE(CFE_P_GUILE_KICK) },
};

const sDescTreeNode CFE_P_ZANGIEF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_ZANGIEF_PUNCH, ARRAYSIZE(CFE_P_ZANGIEF_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_ZANGIEF_KICK, ARRAYSIZE(CFE_P_ZANGIEF_KICK) },
};

const sDescTreeNode CFE_P_BISON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_BISON_PUNCH, ARRAYSIZE(CFE_P_BISON_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_BISON_KICK, ARRAYSIZE(CFE_P_BISON_KICK) },
};

const sDescTreeNode CFE_P_SHINAKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_SHINAKUMA_PUNCH, ARRAYSIZE(CFE_P_SHINAKUMA_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_SHINAKUMA_KICK, ARRAYSIZE(CFE_P_SHINAKUMA_KICK) },
};

const sDescTreeNode CFE_P_GUY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_GUY_PUNCH, ARRAYSIZE(CFE_P_GUY_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_GUY_KICK, ARRAYSIZE(CFE_P_GUY_KICK) },
};

const sDescTreeNode CFE_P_ROSE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_ROSE_PUNCH, ARRAYSIZE(CFE_P_ROSE_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_ROSE_KICK, ARRAYSIZE(CFE_P_ROSE_KICK) },
};

const sDescTreeNode CFE_P_SAKURA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_SAKURA_PUNCH, ARRAYSIZE(CFE_P_SAKURA_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_SAKURA_KICK, ARRAYSIZE(CFE_P_SAKURA_KICK) },
};

const sDescTreeNode CFE_P_KARIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_KARIN_PUNCH, ARRAYSIZE(CFE_P_KARIN_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_KARIN_KICK, ARRAYSIZE(CFE_P_KARIN_KICK) },
};

const sDescTreeNode CFE_P_INGRID_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_INGRID_PUNCH, ARRAYSIZE(CFE_P_INGRID_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_INGRID_KICK, ARRAYSIZE(CFE_P_INGRID_KICK) },
};

const sDescTreeNode CFE_P_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_CHUNLI_PUNCH, ARRAYSIZE(CFE_P_CHUNLI_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_CHUNLI_KICK, ARRAYSIZE(CFE_P_CHUNLI_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_CHUNLI_EXTRAS, ARRAYSIZE(CFE_P_CHUNLI_EXTRAS) },
};

const sDescTreeNode CFE_P_YUN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_YUN_PUNCH, ARRAYSIZE(CFE_P_YUN_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_YUN_KICK, ARRAYSIZE(CFE_P_YUN_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_YUN_EXTRAS, ARRAYSIZE(CFE_P_YUN_EXTRAS) },
};

const sDescTreeNode CFE_P_ALEX_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_ALEX_PUNCH, ARRAYSIZE(CFE_P_ALEX_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_ALEX_KICK, ARRAYSIZE(CFE_P_ALEX_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_ALEX_EXTRAS, ARRAYSIZE(CFE_P_ALEX_EXTRAS) },
};

const sDescTreeNode CFE_P_URIEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_URIEN_PUNCH, ARRAYSIZE(CFE_P_URIEN_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_URIEN_KICK, ARRAYSIZE(CFE_P_URIEN_KICK) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)CFE_P_URIEN_EXTRAS, ARRAYSIZE(CFE_P_URIEN_EXTRAS) },
};

const sDescTreeNode CFE_P_LEO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_LEO_PUNCH, ARRAYSIZE(CFE_P_LEO_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_LEO_KICK, ARRAYSIZE(CFE_P_LEO_KICK) },
};

const sDescTreeNode CFE_P_KENJI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_KENJI_PUNCH, ARRAYSIZE(CFE_P_KENJI_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_KENJI_KICK, ARRAYSIZE(CFE_P_KENJI_KICK) },
};

const sDescTreeNode CFE_P_HAUZER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_HAUZER_PUNCH, ARRAYSIZE(CFE_P_HAUZER_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_HAUZER_KICK, ARRAYSIZE(CFE_P_HAUZER_KICK) },
};

const sDescTreeNode CFE_P_HYDRON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFE_P_HYDRON_PUNCH, ARRAYSIZE(CFE_P_HYDRON_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFE_P_HYDRON_KICK, ARRAYSIZE(CFE_P_HYDRON_KICK) },
};

const sDescTreeNode CFE_P_UNITS[] =
{
    { L"Demitri",       DESC_NODETYPE_TREE, (void*)CFE_P_DEMITRI_COLLECTION, ARRAYSIZE(CFE_P_DEMITRI_COLLECTION) },
    { L"Anakaris",      DESC_NODETYPE_TREE, (void*)CFE_P_ANAKARIS_COLLECTION, ARRAYSIZE(CFE_P_ANAKARIS_COLLECTION) },
    { L"Felicia",       DESC_NODETYPE_TREE, (void*)CFE_P_FELICIA_COLLECTION, ARRAYSIZE(CFE_P_FELICIA_COLLECTION) },
    { L"Jedah",         DESC_NODETYPE_TREE, (void*)CFE_P_JEDAH_COLLECTION, ARRAYSIZE(CFE_P_JEDAH_COLLECTION) },
    { L"Pyron",         DESC_NODETYPE_TREE, (void*)CFE_P_PYRON_COLLECTION, ARRAYSIZE(CFE_P_PYRON_COLLECTION) },
    { L"Ryu",           DESC_NODETYPE_TREE, (void*)CFE_P_RYU_COLLECTION, ARRAYSIZE(CFE_P_RYU_COLLECTION) },
    { L"Guile",         DESC_NODETYPE_TREE, (void*)CFE_P_GUILE_COLLECTION, ARRAYSIZE(CFE_P_GUILE_COLLECTION) },
    { L"Zangief",       DESC_NODETYPE_TREE, (void*)CFE_P_ZANGIEF_COLLECTION, ARRAYSIZE(CFE_P_ZANGIEF_COLLECTION) },
    { L"M.Bison",       DESC_NODETYPE_TREE, (void*)CFE_P_BISON_COLLECTION, ARRAYSIZE(CFE_P_BISON_COLLECTION) },
    { L"Shin Akuma",    DESC_NODETYPE_TREE, (void*)CFE_P_SHINAKUMA_COLLECTION, ARRAYSIZE(CFE_P_SHINAKUMA_COLLECTION) },
    { L"Guy",           DESC_NODETYPE_TREE, (void*)CFE_P_GUY_COLLECTION, ARRAYSIZE(CFE_P_GUY_COLLECTION) },
    { L"Rose",          DESC_NODETYPE_TREE, (void*)CFE_P_ROSE_COLLECTION, ARRAYSIZE(CFE_P_ROSE_COLLECTION) },
    { L"Sakura",        DESC_NODETYPE_TREE, (void*)CFE_P_SAKURA_COLLECTION, ARRAYSIZE(CFE_P_SAKURA_COLLECTION) },
    { L"Karin",         DESC_NODETYPE_TREE, (void*)CFE_P_KARIN_COLLECTION, ARRAYSIZE(CFE_P_KARIN_COLLECTION) },
    { L"Ingrid",        DESC_NODETYPE_TREE, (void*)CFE_P_INGRID_COLLECTION, ARRAYSIZE(CFE_P_INGRID_COLLECTION) },
    { L"Chun-Li",       DESC_NODETYPE_TREE, (void*)CFE_P_CHUNLI_COLLECTION, ARRAYSIZE(CFE_P_CHUNLI_COLLECTION) },
    { L"Yun",           DESC_NODETYPE_TREE, (void*)CFE_P_YUN_COLLECTION, ARRAYSIZE(CFE_P_YUN_COLLECTION) },
    { L"Alex",          DESC_NODETYPE_TREE, (void*)CFE_P_ALEX_COLLECTION, ARRAYSIZE(CFE_P_ALEX_COLLECTION) },
    { L"Urien",         DESC_NODETYPE_TREE, (void*)CFE_P_URIEN_COLLECTION, ARRAYSIZE(CFE_P_URIEN_COLLECTION) },
    { L"Leo",           DESC_NODETYPE_TREE, (void*)CFE_P_LEO_COLLECTION, ARRAYSIZE(CFE_P_LEO_COLLECTION) },
    { L"Kenji",         DESC_NODETYPE_TREE, (void*)CFE_P_KENJI_COLLECTION, ARRAYSIZE(CFE_P_KENJI_COLLECTION) },
    { L"Hauzer",        DESC_NODETYPE_TREE, (void*)CFE_P_HAUZER_COLLECTION, ARRAYSIZE(CFE_P_HAUZER_COLLECTION) },
    { L"Hydron",        DESC_NODETYPE_TREE, (void*)CFE_P_HYDRON_COLLECTION, ARRAYSIZE(CFE_P_HYDRON_COLLECTION) },
};

// CFJ palette storage is quite odd.  They are striped as 8 color chunks in sets of 32 
// vertically, as in:
//  11111111 33333333
//  22222222 44444444

// Darkstalkers/Vampire
const sGame_PaletteDataset CFJ_S_DEMITRI_PUNCH[] =
{
    { L"Demitri #1 Punch", 0x1d8c500, 0x1d8c520, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri #2 Punch", 0x1d8c540, 0x1d8c560, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset CFJ_S_DEMITRI_KICK[] =
{
    { L"Demitri #1 Kick", 0x1d8c800, 0x1d8c820, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri #2 Kick", 0x1d8c840, 0x1d8c860, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset CFJ_S_ANAKARIS_PUNCH[] =
{
    { L"Anakaris Punch", 0x1f32eb0, 0x1f32ed0, indexCPS2Sprites_Anakaris },
};

const sGame_PaletteDataset CFJ_S_ANAKARIS_KICK[] =
{
    { L"Anakaris Kick", 0x1f331b0, 0x1f331d0, indexCPS2Sprites_Anakaris },
};

const sGame_PaletteDataset CFJ_S_FELICIA_PUNCH[] =
{
    { L"Felicia Punch", 0x2a83984, 0x2a839a4, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset CFJ_S_FELICIA_KICK[] =
{
    { L"Felicia Kick", 0x2a83c84, 0x2a83ca4, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset CFJ_S_JEDAH_PUNCH[] =
{
    { L"Jedah Punch", 0x20f9c7c, 0x20f9c9c, indexCPS2Sprites_Vamp_Jedah, 0x00, &pairNext },
    { L"Punch Blood", 0x20f9cbc, 0x20f9cdc, indexCPS2Sprites_Vamp_Jedah, 0x01 },
};

const sGame_PaletteDataset CFJ_S_JEDAH_KICK[] =
{
    { L"Jedah Kick", 0x20f9efc, 0x20f9f1c, indexCPS2Sprites_Vamp_Jedah, 0x00, &pairNext },
    { L"Kick Blood", 0x20f9fbc, 0x20f9fdc, indexCPS2Sprites_Vamp_Jedah, 0x01 },
};

const sGame_PaletteDataset CFJ_S_PYRON_PUNCH[] =
{
    { L"Pyron Punch", 0x137da38, 0x137da58, indexCPS2Sprites_Vamp_Pyron },
};

const sGame_PaletteDataset CFJ_S_PYRON_KICK[] =
{
    { L"Pyron Kick", 0x1c87f62, 0x1c87f82, indexCPS2Sprites_Vamp_Pyron },
};

// Street Fighter II
const sGame_PaletteDataset CFJ_S_RYU_PUNCH[] =
{
    { L"Ryu Punch", 0xe39710, 0xe39730, indexCVS2Sprites_Ryu },
};

const sGame_PaletteDataset CFJ_S_RYU_KICK[] =
{
    { L"Ryu Kick", 0xe39a10, 0xe39a30, indexCVS2Sprites_Ryu },
};

const sGame_PaletteDataset CFJ_S_GUILE_PUNCH[] =
{
    { L"Guile Punch", 0x1184a7e, 0x1184a9e, indexCVS2Sprites_Guile },
};

const sGame_PaletteDataset CFJ_S_GUILE_KICK[] =
{
    { L"Guile Kick", 0x1184d7e, 0x1184d9e, indexCVS2Sprites_Guile },
};

const sGame_PaletteDataset CFJ_S_ZANGIEF_PUNCH[] =
{
    { L"Zangief Punch", 0x128e838, 0x128e858, indexCVS2Sprites_Zangief },
};

const sGame_PaletteDataset CFJ_S_ZANGIEF_KICK[] =
{
    { L"Zangief Kick", 0x128eb38, 0x128eb58, indexCVS2Sprites_Zangief },
};

const sGame_PaletteDataset CFJ_S_BISON_PUNCH[] =
{
    { L"M. Bison Punch", 0x137d7b8, 0x137d7f8, indexCVS2Sprites_MBison },
};

const sGame_PaletteDataset CFJ_S_BISON_KICK[] =
{
    { L"M. Bison Kick", 0x137dab8, 0x137daf8, indexCVS2Sprites_MBison },
};

const sGame_PaletteDataset CFJ_S_SHINAKUMA_PUNCH[] =
{
    { L"Shin Akuma Punch", 0x2f4a328, 0x2f4a348, indexCVS2Sprites_ShinAkuma },
};

const sGame_PaletteDataset CFJ_S_SHINAKUMA_KICK[] =
{
    { L"Shin Akuma Kick", 0x2f4a628, 0x2f4a648, indexCVS2Sprites_ShinAkuma },
};

// Street Fighter Alpha/Zero
const sGame_PaletteDataset CFJ_S_GUY_PUNCH[] =
{
    { L"Guy Punch", 0x19d5166, 0x19d5186, indexCPS2Sprites_Guy },
};

const sGame_PaletteDataset CFJ_S_GUY_KICK[] =
{
    { L"Guy Kick", 0x19d5466, 0x19d5486, indexCPS2Sprites_Guy },
};

const sGame_PaletteDataset CFJ_S_ROSE_PUNCH[] =
{
    { L"Rose Punch", 0x1a63758, 0x1a63778, indexCPS2Sprites_Rose },
    // Second location, doesn't do anything either.
    // Uses a different sprite...?
    //{ L"Rose Punch", 0x668f1f4, 0x668f214, indexCPS2Sprites_Rose },
};

const sGame_PaletteDataset CFJ_S_ROSE_KICK[] =
{
    { L"Rose Kick", 0x1a63a58, 0x1a63a78, indexCPS2Sprites_Rose },
    //{ L"Rose Kick", 0x668f234, 0x668f254, indexCPS2Sprites_Rose },
};

const sGame_PaletteDataset CFJ_S_SAKURA_PUNCH[] =
{
    { L"Sakura Punch", 0x149087e, 0x149089e, indexCPS2Sprites_Sakura },
};

const sGame_PaletteDataset CFJ_S_SAKURA_KICK[] =
{
    { L"Sakura Kick", 0x1490b7e, 0x1490b9e, indexCPS2Sprites_Sakura },
};

const sGame_PaletteDataset CFJ_S_KARIN_PUNCH[] =
{
    { L"Karin Punch", 0x1afe242, 0x1afe262, indexCPS2Sprites_Karin },
};

const sGame_PaletteDataset CFJ_S_KARIN_KICK[] =
{
    { L"Karin Kick", 0x1afe542, 0x1afe562, indexCPS2Sprites_Karin },
};

const sGame_PaletteDataset CFJ_S_INGRID_PUNCH[] =
{
    { L"Ingrid Punch", 0x2bc8e14, 0x2bc8e14 + 0x80 },
};

const sGame_PaletteDataset CFJ_S_INGRID_KICK[] =
{
    { L"Ingrid Kick", 0x2bc9114, 0x2bc9114 + 0x80 },
};

const sGame_PaletteDataset CFJ_S_CHUNLI_PUNCH[] =
{
    { L"Chun-Li Punch", 0x4f9a990, 0x4f9a990 + 0x80, index3SSprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset CFJ_S_CHUNLI_KICK[] =
{
    { L"Chun-Li Kick", 0x4f9af10, 0x4f9af10 + 0x80, index3SSprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset CFJ_S_YUN_PUNCH[] =
{
    { L"Yun Punch", 0x2df17ee, 0x2df17ee + 0x80, index3SSprites_Yun, 0x00 },
};

const sGame_PaletteDataset CFJ_S_YUN_KICK[] =
{
    { L"Yun Kick", 0x2df1aee, 0x2df1aee + 0x80, index3SSprites_Yun, 0x00 },
};

const sGame_PaletteDataset CFJ_S_ALEX_PUNCH[] =
{
    { L"Alex Punch", 0x2319782, 0x2319782 + 0x80, index3SSprites_Alex, 0x00 },
};

const sGame_PaletteDataset CFJ_S_ALEX_KICK[] =
{
    { L"Alex Kick", 0x2319a82, 0x2319a82 + 0x80, index3SSprites_Alex, 0x00 },
};

const sGame_PaletteDataset CFJ_S_URIEN_PUNCH[] =
{
    { L"Urien Punch", 0x24f7174, 0x24f7174 + 0x80, index3SSprites_Urien, 0x00 },
};

const sGame_PaletteDataset CFJ_S_URIEN_KICK[] =
{
    { L"Urien Kick", 0x24f7474, 0x24f7474 + 0x80, index3SSprites_Urien, 0x00 },
};

// Red Earth/Warzard
const sGame_PaletteDataset CFJ_S_LEO_PUNCH[] =
{
    { L"Leo Punch", 0x27051a4, 0x27051a4 + 0x80, indexRedEarthSprites_Leo, 0x00 },
};

const sGame_PaletteDataset CFJ_S_LEO_KICK[] =
{
    { L"Leo Kick", 0x27054a4, 0x27054a4 + 0x80, indexRedEarthSprites_Leo, 0x00 },
};

const sGame_PaletteDataset CFJ_S_KENJI_PUNCH[] =
{
    { L"Kenji Punch", 0x29901b4, 0x29901b4 + 0x80, indexRedEarthSprites_Kenji, 0x00, &pairNextAndNext },
    { L"Chains, Kunai", 0x29902b4, 0x29902b4 + 0x80, indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro", 0x2990434, 0x2990434 + 0x80, indexRedEarthSprites_Kenji, 0x02 },
};

const sGame_PaletteDataset CFJ_S_KENJI_KICK[] =
{
    { L"Kenji Kick", 0x29904b4, 0x29904b4 + 0x80, indexRedEarthSprites_Kenji, 0x00, &pairNextAndNext },
    { L"Chains, Kunai", 0x29905b4, 0x29905b4 + 0x80, indexRedEarthSprites_Kenji, 0x01 },
    { L"Hat intro", 0x2990734, 0x2990734 + 0x80, indexRedEarthSprites_Kenji, 0x02 },
};

const sGame_PaletteDataset CFJ_S_HAUZER_PUNCH[] =
{
    { L"Hauzer Punch", 0x176dd70, 0x176dd70 + 0x80, indexRedEarthSprites_Hauzer, 0x00 },
};

const sGame_PaletteDataset CFJ_S_HAUZER_KICK[] =
{
    { L"Hauzer Kick", 0x176e070, 0x176e070 + 0x80, indexRedEarthSprites_Hauzer, 0x00 },
};

const sGame_PaletteDataset CFJ_S_HYDRON_PUNCH[] =
{
    { L"Hydron Punch", 0x196dce4, 0x196dce4 + 0x80, indexRedEarthSprites_Hydron, 0x00 },
};

const sGame_PaletteDataset CFJ_S_HYDRON_KICK[] =
{
    { L"Hydron Kick", 0x196dfe4, 0x196dfe4 + 0x80, indexRedEarthSprites_Hydron, 0x00 },
};

const sDescTreeNode CFJ_S_DEMITRI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_DEMITRI_PUNCH, ARRAYSIZE(CFJ_S_DEMITRI_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_DEMITRI_KICK, ARRAYSIZE(CFJ_S_DEMITRI_KICK) },
};

const sDescTreeNode CFJ_S_ANAKARIS_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_ANAKARIS_PUNCH, ARRAYSIZE(CFJ_S_ANAKARIS_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_ANAKARIS_KICK, ARRAYSIZE(CFJ_S_ANAKARIS_KICK) },
};

const sDescTreeNode CFJ_S_FELICIA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_FELICIA_PUNCH, ARRAYSIZE(CFJ_S_FELICIA_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_FELICIA_KICK, ARRAYSIZE(CFJ_S_FELICIA_KICK) },
};

const sDescTreeNode CFJ_S_JEDAH_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_JEDAH_PUNCH, ARRAYSIZE(CFJ_S_JEDAH_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_JEDAH_KICK, ARRAYSIZE(CFJ_S_JEDAH_KICK) },
};

const sDescTreeNode CFJ_S_PYRON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_PYRON_PUNCH, ARRAYSIZE(CFJ_S_PYRON_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_PYRON_KICK, ARRAYSIZE(CFJ_S_PYRON_KICK) },
};

const sDescTreeNode CFJ_S_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_RYU_PUNCH, ARRAYSIZE(CFJ_S_RYU_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_RYU_KICK, ARRAYSIZE(CFJ_S_RYU_KICK) },
};

const sDescTreeNode CFJ_S_GUILE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_GUILE_PUNCH, ARRAYSIZE(CFJ_S_GUILE_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_GUILE_KICK, ARRAYSIZE(CFJ_S_GUILE_KICK) },
};

const sDescTreeNode CFJ_S_ZANGIEF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_ZANGIEF_PUNCH, ARRAYSIZE(CFJ_S_ZANGIEF_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_ZANGIEF_KICK, ARRAYSIZE(CFJ_S_ZANGIEF_KICK) },
};

const sDescTreeNode CFJ_S_BISON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_BISON_PUNCH, ARRAYSIZE(CFJ_S_BISON_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_BISON_KICK, ARRAYSIZE(CFJ_S_BISON_KICK) },
};

const sDescTreeNode CFJ_S_SHINAKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_SHINAKUMA_PUNCH, ARRAYSIZE(CFJ_S_SHINAKUMA_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_SHINAKUMA_KICK, ARRAYSIZE(CFJ_S_SHINAKUMA_KICK) },
};

const sDescTreeNode CFJ_S_GUY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_GUY_PUNCH, ARRAYSIZE(CFJ_S_GUY_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_GUY_KICK, ARRAYSIZE(CFJ_S_GUY_KICK) },
};

const sDescTreeNode CFJ_S_ROSE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_ROSE_PUNCH, ARRAYSIZE(CFJ_S_ROSE_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_ROSE_KICK, ARRAYSIZE(CFJ_S_ROSE_KICK) },
};

const sDescTreeNode CFJ_S_SAKURA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_SAKURA_PUNCH, ARRAYSIZE(CFJ_S_SAKURA_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_SAKURA_KICK, ARRAYSIZE(CFJ_S_SAKURA_KICK) },
};

const sDescTreeNode CFJ_S_KARIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_KARIN_PUNCH, ARRAYSIZE(CFJ_S_KARIN_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_KARIN_KICK, ARRAYSIZE(CFJ_S_KARIN_KICK) },
};

const sDescTreeNode CFJ_S_INGRID_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_INGRID_PUNCH, ARRAYSIZE(CFJ_S_INGRID_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_INGRID_KICK, ARRAYSIZE(CFJ_S_INGRID_KICK) },
};

const sDescTreeNode CFJ_S_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_CHUNLI_PUNCH, ARRAYSIZE(CFJ_S_CHUNLI_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_CHUNLI_KICK, ARRAYSIZE(CFJ_S_CHUNLI_KICK) },
};

const sDescTreeNode CFJ_S_YUN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_YUN_PUNCH, ARRAYSIZE(CFJ_S_YUN_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_YUN_KICK, ARRAYSIZE(CFJ_S_YUN_KICK) },
};

const sDescTreeNode CFJ_S_ALEX_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_ALEX_PUNCH, ARRAYSIZE(CFJ_S_ALEX_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_ALEX_KICK, ARRAYSIZE(CFJ_S_ALEX_KICK) },
};

const sDescTreeNode CFJ_S_URIEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_URIEN_PUNCH, ARRAYSIZE(CFJ_S_URIEN_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_URIEN_KICK, ARRAYSIZE(CFJ_S_URIEN_KICK) },
};

const sDescTreeNode CFJ_S_LEO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_LEO_PUNCH, ARRAYSIZE(CFJ_S_LEO_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_LEO_KICK, ARRAYSIZE(CFJ_S_LEO_KICK) },
};

const sDescTreeNode CFJ_S_KENJI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_KENJI_PUNCH, ARRAYSIZE(CFJ_S_KENJI_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_KENJI_KICK, ARRAYSIZE(CFJ_S_KENJI_KICK) },
};

const sDescTreeNode CFJ_S_HAUZER_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_HAUZER_PUNCH, ARRAYSIZE(CFJ_S_HAUZER_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_HAUZER_KICK, ARRAYSIZE(CFJ_S_HAUZER_KICK) },
};

const sDescTreeNode CFJ_S_HYDRON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)CFJ_S_HYDRON_PUNCH, ARRAYSIZE(CFJ_S_HYDRON_PUNCH) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)CFJ_S_HYDRON_KICK, ARRAYSIZE(CFJ_S_HYDRON_KICK) },
};

const sDescTreeNode CFJ_S_UNITS[] =
{
    // darkstalker
    { L"Demitri",       DESC_NODETYPE_TREE, (void*)CFJ_S_DEMITRI_COLLECTION, ARRAYSIZE(CFJ_S_DEMITRI_COLLECTION) },
    { L"Anakaris",      DESC_NODETYPE_TREE, (void*)CFJ_S_ANAKARIS_COLLECTION, ARRAYSIZE(CFJ_S_ANAKARIS_COLLECTION) },
    { L"Felicia",       DESC_NODETYPE_TREE, (void*)CFJ_S_FELICIA_COLLECTION, ARRAYSIZE(CFJ_S_FELICIA_COLLECTION) },
    { L"Jedah",         DESC_NODETYPE_TREE, (void*)CFJ_S_JEDAH_COLLECTION, ARRAYSIZE(CFJ_S_JEDAH_COLLECTION) },
    { L"Pyron",         DESC_NODETYPE_TREE, (void*)CFJ_S_PYRON_COLLECTION, ARRAYSIZE(CFJ_S_PYRON_COLLECTION) },

    // sf2
    { L"Ryu",           DESC_NODETYPE_TREE, (void*)CFJ_S_RYU_COLLECTION, ARRAYSIZE(CFJ_S_RYU_COLLECTION) },
    { L"Guile",         DESC_NODETYPE_TREE, (void*)CFJ_S_GUILE_COLLECTION, ARRAYSIZE(CFJ_S_GUILE_COLLECTION) },
    { L"Zangief",       DESC_NODETYPE_TREE, (void*)CFJ_S_ZANGIEF_COLLECTION, ARRAYSIZE(CFJ_S_ZANGIEF_COLLECTION) },
    { L"M.Bison",       DESC_NODETYPE_TREE, (void*)CFJ_S_BISON_COLLECTION, ARRAYSIZE(CFJ_S_BISON_COLLECTION) },
    { L"Shin Akuma",    DESC_NODETYPE_TREE, (void*)CFJ_S_SHINAKUMA_COLLECTION, ARRAYSIZE(CFJ_S_SHINAKUMA_COLLECTION) },
    
    // sf alpha
    { L"Guy",           DESC_NODETYPE_TREE, (void*)CFJ_S_GUY_COLLECTION, ARRAYSIZE(CFJ_S_GUY_COLLECTION) },
    { L"Rose",          DESC_NODETYPE_TREE, (void*)CFJ_S_ROSE_COLLECTION, ARRAYSIZE(CFJ_S_ROSE_COLLECTION) },
    { L"Sakura",        DESC_NODETYPE_TREE, (void*)CFJ_S_SAKURA_COLLECTION, ARRAYSIZE(CFJ_S_SAKURA_COLLECTION) },
    { L"Karin",         DESC_NODETYPE_TREE, (void*)CFJ_S_KARIN_COLLECTION, ARRAYSIZE(CFJ_S_KARIN_COLLECTION) },
    
    // sfiii
    { L"Ingrid",        DESC_NODETYPE_TREE, (void*)CFJ_S_INGRID_COLLECTION, ARRAYSIZE(CFJ_S_INGRID_COLLECTION) },
    { L"Chun-Li",       DESC_NODETYPE_TREE, (void*)CFJ_S_CHUNLI_COLLECTION, ARRAYSIZE(CFJ_S_CHUNLI_COLLECTION) },
    { L"Yun",           DESC_NODETYPE_TREE, (void*)CFJ_S_YUN_COLLECTION, ARRAYSIZE(CFJ_S_YUN_COLLECTION) },
    { L"Alex",          DESC_NODETYPE_TREE, (void*)CFJ_S_ALEX_COLLECTION, ARRAYSIZE(CFJ_S_ALEX_COLLECTION) },
    { L"Urien",         DESC_NODETYPE_TREE, (void*)CFJ_S_URIEN_COLLECTION, ARRAYSIZE(CFJ_S_URIEN_COLLECTION) },
    
    // redearth
    { L"Leo",           DESC_NODETYPE_TREE, (void*)CFJ_S_LEO_COLLECTION, ARRAYSIZE(CFJ_S_LEO_COLLECTION) },
    { L"Kenji",         DESC_NODETYPE_TREE, (void*)CFJ_S_KENJI_COLLECTION, ARRAYSIZE(CFJ_S_KENJI_COLLECTION) },
    { L"Hauzer",        DESC_NODETYPE_TREE, (void*)CFJ_S_HAUZER_COLLECTION, ARRAYSIZE(CFJ_S_HAUZER_COLLECTION) },
    { L"Hydron",        DESC_NODETYPE_TREE, (void*)CFJ_S_HYDRON_COLLECTION, ARRAYSIZE(CFJ_S_HYDRON_COLLECTION) },
};

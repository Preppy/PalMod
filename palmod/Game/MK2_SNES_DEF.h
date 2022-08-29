#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to MK2_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> MK2_SNES_IMGIDS_USED =
{
    indexMK2Sprites_Baraka,              // 0xB6
    indexMK2Sprites_Jade,                // 0xB7
    indexMK2Sprites_Jax,                 // 0xB8
    indexMK2Sprites_JohnnyCage,          // 0xB9
    indexMK2Sprites_Kintaro,             // 0xBA
    indexMK2Sprites_Kitana,              // 0xBB
    indexMK2Sprites_KungLao,             // 0xBC
    indexMK2Sprites_LiuKang,             // 0xBD
    indexMK2Sprites_Mileena,             // 0xBE
    indexMK2Sprites_NoobSaibot,          // 0xBF
    indexMK2Sprites_Raiden,              // 0xC0
    indexMK2Sprites_Reptile,             // 0xC1
    indexMK2Sprites_Scorpion,            // 0xC2
    indexMK2Sprites_ShangTsung,          // 0xC3
    indexMK2Sprites_ShaoKahn,            // 0xC4
    indexMK2Sprites_Smoke,               // 0xC5
    indexMK2Sprites_SubZero,             // 0xC6
    indexMK2Sprites_Bonus,               // 0xC7
    indexMK2Sprites_Stages,              // 0xC8
};

const sGame_PaletteDataset MK2_SNES_LIUKANG_P1_PALETTES[] =
{
    { L"Liu Kang P1", 0x2fc24e, 0x2fc26e, indexMK2Sprites_LiuKang },
};

const sGame_PaletteDataset MK2_SNES_LIUKANG_P2_PALETTES[] =
{
    { L"Liu Kang P2", 0x2fc22e, 0x2fc24e, indexMK2Sprites_LiuKang },
};

const sGame_PaletteDataset MK2_SNES_LIUKANG_EFFECT_PALETTES[] =
{
    { L"Liu Kang Fire", 0x2fa168, 0x2fa188, indexMK2Sprites_LiuKang, 0x01 },
    { L"Liu Kang Dragon", 0x2FC30E, 0x2FC32E, indexMK2Sprites_LiuKang, 0x08 },
};

const sGame_PaletteDataset MK2_SNES_KUNGLAO_P1_PALETTES[] =
{
    { L"Kung Lao P1", 0x2fd190, 0x2fd1b0, indexMK2Sprites_KungLao },
};

const sGame_PaletteDataset MK2_SNES_KUNGLAO_P2_PALETTES[] =
{
    { L"Kung Lao P2", 0x2fd1b0, 0x2fd1d0, indexMK2Sprites_KungLao },
};

const sGame_PaletteDataset MK2_SNES_KUNGLAO_EFFECT_PALETTES[] =
{
    { L"Kung Lao Hat Toss", 0x2FA148, 0x2FA168 },
};

const sGame_PaletteDataset MK2_SNES_JOHNNYCAGE_P1_PALETTES[] =
{
    { L"Johnny Cage P1", 0x2f88be, 0x2f88de, indexMK2Sprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_SNES_JOHNNYCAGE_P2_PALETTES[] =
{
    { L"Johnny Cage P2", 0x2f88de, 0x2f88fe, indexMK2Sprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_SNES_JOHNNYCAGE_EFFECT_PALETTES[] =
{
    { L"Johnny Cage Force Ball", 0x2FA1A8, 0x2FA1C8 },
    { L"Johnny Cage Shadow Kick", 0x2F88FE, 0x2F891E },
};

const sGame_PaletteDataset MK2_SNES_REPTILE_P1_PALETTES[] =
{
    { L"Reptile P1", 0x2f3ece, 0x2f3eee, indexMK2Sprites_Reptile },
};

const sGame_PaletteDataset MK2_SNES_REPTILE_P2_PALETTES[] =
{
    { L"Reptile P2", 0x2f3f2e, 0x2f3f4e, indexMK2Sprites_Reptile },
};

const sGame_PaletteDataset MK2_SNES_REPTILE_EFFECT_PALETTES[] =
{
    { L"Reptile Spit Acid", 0x2f9013, 0xf9033, indexMK2Sprites_Reptile, 0x01 },
    { L"Reptile Force Ball", 0x2f9053, 0xf9073 },
};

const sGame_PaletteDataset MK2_SNES_SUBZERO_P1_PALETTES[] =
{
    { L"Sub-Zero P1", 0x2f3eae, 0x2f3ece, indexMK2Sprites_SubZero },
};

const sGame_PaletteDataset MK2_SNES_SUBZERO_P2_PALETTES[] =
{
    { L"Sub-Zero P2", 0x2f3f0e, 0x2f3f2e, indexMK2Sprites_SubZero },
};

const sGame_PaletteDataset MK2_SNES_SUBZERO_EFFECT_PALETTES[] =
{
    { L"Sub-Zero Freeze", 0x2f9033, 0xf9053, indexMK2Sprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK2_SNES_SHANGTSUNG_P1_PALETTES[] =
{
    { L"Shang Tsung P1", 0xe7d9f, 0xe7dbf, indexMK2Sprites_ShangTsung },
};

const sGame_PaletteDataset MK2_SNES_SHANGTSUNG_P2_PALETTES[] =
{
    { L"Shang Tsung P2", 0xe7dbf, 0xe7ddf, indexMK2Sprites_ShangTsung },
};

const sGame_PaletteDataset MK2_SNES_KITANA_P1_PALETTES[] =
{
    { L"Kitana P1", 0x2f9173, 0x2f9193, indexMK2Sprites_Kitana },
};

const sGame_PaletteDataset MK2_SNES_KITANA_P2_PALETTES[] =
{
    { L"Kitana P2", 0x2f9193, 0x2f91b3, indexMK2Sprites_Kitana },
};

const sGame_PaletteDataset MK2_SNES_JAX_P1_PALETTES[] =
{
    { L"Jax P1", 0x2fd570, 0x2fd590, indexMK2Sprites_Jax, 0x00 },
};

const sGame_PaletteDataset MK2_SNES_JAX_P2_PALETTES[] =
{
    { L"Jax P2", 0x2fd550, 0x2fd570, indexMK2Sprites_Jax, 0x00 },
};

const sGame_PaletteDataset MK2_SNES_JAX_EFFECT_PALETTES[] =
{
    { L"Jax Projectile", 0x2F9133, 0x2F9153 },
};

const sGame_PaletteDataset MK2_SNES_MILEENA_P1_PALETTES[] =
{
    { L"Mileena P1", 0x2f91b3, 0x2f91d3, indexMK2Sprites_Mileena },
};

const sGame_PaletteDataset MK2_SNES_MILEENA_P2_PALETTES[] =
{
    { L"Mileena P2", 0x2f91d3, 0x2f91f3, indexMK2Sprites_Mileena },
};

const sGame_PaletteDataset MK2_SNES_BARAKA_P1_PALETTES[] =
{
    { L"Baraka P1", 0x2fcad4, 0x2fcaf4, indexMK2Sprites_Baraka },
};

const sGame_PaletteDataset MK2_SNES_BARAKA_P2_PALETTES[] =
{
    { L"Baraka P2", 0x2fcaf4, 0x2fcb14, indexMK2Sprites_Baraka },
};

const sGame_PaletteDataset MK2_SNES_SCORPION_P1_PALETTES[] =
{
    { L"Scorpion P1", 0x2f3eee, 0x2f3f0e, indexMK2Sprites_Scorpion },
};

const sGame_PaletteDataset MK2_SNES_SCORPION_P2_PALETTES[] =
{
    { L"Scorpion P2", 0x2f3f4e, 0x2f3f6e, indexMK2Sprites_Scorpion },
};

const sGame_PaletteDataset MK2_SNES_SCORPION_EFFECTS_PALETTES[] =
{
    { L"Scorpion Spear", 0x2F90B3, 0x2F90D3 },
    { L"Scorpion Skull", 0x2F9073, 0x2F9093, indexMK2Sprites_Scorpion, 0x01 },
};

const sGame_PaletteDataset MK2_SNES_RAIDEN_P1_PALETTES[] =
{
    { L"Raiden P1", 0x2fcbb4, 0x2fcbd4, indexMK2Sprites_Raiden },
};

const sGame_PaletteDataset MK2_SNES_RAIDEN_P2_PALETTES[] =
{
    { L"Raiden P2", 0x2fcbd4, 0x2fcbf4, indexMK2Sprites_Raiden },
};

const sGame_PaletteDataset MK2_SNES_RAIDEN_EFFECT_PALETTES[] =
{
    { L"Raiden Lighting Bolt", 0x2F90F3, 0x2F9113, indexMK2Sprites_Raiden, 0x01 },
    { L"Raiden Teleport", 0x2F9113, 0x2F9133 },
};

const sGame_PaletteDataset MK2_SNES_JADE_PALETTES[] =
{
    { L"Jade", 0x2f91f3, 0x2f9213, indexMK2Sprites_Kitana },
};

const sGame_PaletteDataset MK2_SNES_KHAN_PALETTES[] =
{
    { L"Shao Khan", 0x2FD850, 0x2FD870 },
};

const sGame_PaletteDataset MK2_SNES_KINTARO_1dot0_PALETTES[] =
{
    { L"Kintaro", 0x2FF2BD, 0x2FF2DD },
};

const sGame_PaletteDataset MK2_SNES_KINTARO_1dot1_PALETTES[] =
{
    { L"Kintaro", 0x2FF32b, 0x2FF34b },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_TOMB[] =
{
    { L"Kombat Tomb", 0x2fd250, 0x2fd310 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_WASTELAND[] =
{
    { L"Wasteland", 0x2fd910, 0x2fd9d0 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_TOWER[] =
{
    { L"The Tower", 0x2fd610, 0x2fd6d0 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_FOREST[] =
{
    { L"Living Forest", 0x2fd790, 0x2fd850 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_ARMORY[] =
{
    { L"The Armory", 0x2fda90, 0x2fdb50 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_PIT2[] =
{
    { L"The Pit 2", 0x2fd9d0, 0x2fda90 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_DEADPOOL[] =
{
    { L"Dead Pool", 0x2FD310, 0x2FD3D0 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_PORTAL[] =
{
    { L"The Portal", 0x2fd6d0, 0x2fd790 },
};

const sGame_PaletteDataset MK2_SNES_STAGE_PALETTES_ARENA[] =
{
    { L"Khan's Arena", 0x2fd3d0, 0x2fd490 },
};

const sGame_PaletteDataset MK2_SNES_BONUS_PALETTES_SELECT[] =
{
    { L"Select 1/2", 0x2F40AE, 0x2F41AE },
    { L"Select 2/2", 0x2F41AE, 0x2F426E },
};

const sDescTreeNode MK2_SNES_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_P1_PALETTES, ARRAYSIZE(MK2_SNES_LIUKANG_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_P2_PALETTES, ARRAYSIZE(MK2_SNES_LIUKANG_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_LIUKANG_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_P1_PALETTES, ARRAYSIZE(MK2_SNES_KUNGLAO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_P2_PALETTES, ARRAYSIZE(MK2_SNES_KUNGLAO_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_KUNGLAO_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_P1_PALETTES, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_P2_PALETTES, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_REPTILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_P1_PALETTES, ARRAYSIZE(MK2_SNES_REPTILE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_P2_PALETTES, ARRAYSIZE(MK2_SNES_REPTILE_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_REPTILE_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_P1_PALETTES, ARRAYSIZE(MK2_SNES_SUBZERO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_P2_PALETTES, ARRAYSIZE(MK2_SNES_SUBZERO_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_SUBZERO_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_SHANGTSUNG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_SHANGTSUNG_P1_PALETTES, ARRAYSIZE(MK2_SNES_SHANGTSUNG_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_SHANGTSUNG_P2_PALETTES, ARRAYSIZE(MK2_SNES_SHANGTSUNG_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_KITANA_P1_PALETTES, ARRAYSIZE(MK2_SNES_KITANA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_KITANA_P2_PALETTES, ARRAYSIZE(MK2_SNES_KITANA_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_JAX_P1_PALETTES, ARRAYSIZE(MK2_SNES_JAX_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_JAX_P2_PALETTES, ARRAYSIZE(MK2_SNES_JAX_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_JAX_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_JAX_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_MILEENA_P1_PALETTES, ARRAYSIZE(MK2_SNES_MILEENA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_MILEENA_P2_PALETTES, ARRAYSIZE(MK2_SNES_MILEENA_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_BARAKA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_BARAKA_P1_PALETTES, ARRAYSIZE(MK2_SNES_BARAKA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_BARAKA_P2_PALETTES, ARRAYSIZE(MK2_SNES_BARAKA_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_SCORPION_P1_PALETTES, ARRAYSIZE(MK2_SNES_SCORPION_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_SCORPION_P2_PALETTES, ARRAYSIZE(MK2_SNES_SCORPION_P2_PALETTES) },

    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_SCORPION_EFFECTS_PALETTES, ARRAYSIZE(MK2_SNES_SCORPION_EFFECTS_PALETTES) },
};

const sDescTreeNode MK2_SNES_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_P1_PALETTES, ARRAYSIZE(MK2_SNES_RAIDEN_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_P2_PALETTES, ARRAYSIZE(MK2_SNES_RAIDEN_P2_PALETTES) },
    
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_EFFECT_PALETTES, ARRAYSIZE(MK2_SNES_RAIDEN_EFFECT_PALETTES) },
};

const sDescTreeNode MK2_SNES_JADE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_JADE_PALETTES, ARRAYSIZE(MK2_SNES_JADE_PALETTES) },
};

const sDescTreeNode MK2_SNES_KINTARO_1dot0_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_KINTARO_1dot0_PALETTES, ARRAYSIZE(MK2_SNES_KINTARO_1dot0_PALETTES) },
};

const sDescTreeNode MK2_SNES_KINTARO_1dot1_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_KINTARO_1dot1_PALETTES, ARRAYSIZE(MK2_SNES_KINTARO_1dot1_PALETTES) },
};

const sDescTreeNode MK2_SNES_KHAN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_KHAN_PALETTES, ARRAYSIZE(MK2_SNES_KHAN_PALETTES) },
};

const sDescTreeNode MK2_SNES_STAGE_COLLECTION[] =
{
    { L"Dead Pool", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_DEADPOOL, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_DEADPOOL) },
    { L"Kombat Tomb", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_TOMB, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_TOMB) },
    { L"Wasteland", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_WASTELAND, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_WASTELAND) },
    { L"The Tower", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_TOWER, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_TOWER) },
    { L"Living Forest", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_FOREST, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_FOREST) },
    { L"The Armory", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_ARMORY, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_ARMORY) },
    { L"The Pit 2", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_PIT2, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_PIT2) },
    { L"The Portal", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_PORTAL, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_PORTAL) },
    { L"Khan's Arena", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_PALETTES_ARENA, ARRAYSIZE(MK2_SNES_STAGE_PALETTES_ARENA) },
};

const sDescTreeNode MK2_SNES_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)MK2_SNES_BONUS_PALETTES_SELECT, ARRAYSIZE(MK2_SNES_BONUS_PALETTES_SELECT) },
};

const sDescTreeNode MK2_1dot0_SNES_UNITS[] =
{
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_COLLECTION, ARRAYSIZE(MK2_SNES_LIUKANG_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_COLLECTION, ARRAYSIZE(MK2_SNES_KUNGLAO_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_COLLECTION, ARRAYSIZE(MK2_SNES_REPTILE_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_COLLECTION, ARRAYSIZE(MK2_SNES_SUBZERO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK2_SNES_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK2_SNES_SHANGTSUNG_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)MK2_SNES_KITANA_COLLECTION, ARRAYSIZE(MK2_SNES_KITANA_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)MK2_SNES_JAX_COLLECTION, ARRAYSIZE(MK2_SNES_JAX_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)MK2_SNES_MILEENA_COLLECTION, ARRAYSIZE(MK2_SNES_MILEENA_COLLECTION) },
    { L"Baraka", DESC_NODETYPE_TREE, (void*)MK2_SNES_BARAKA_COLLECTION, ARRAYSIZE(MK2_SNES_BARAKA_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK2_SNES_SCORPION_COLLECTION, ARRAYSIZE(MK2_SNES_SCORPION_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_COLLECTION, ARRAYSIZE(MK2_SNES_RAIDEN_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)MK2_SNES_JADE_COLLECTION, ARRAYSIZE(MK2_SNES_JADE_COLLECTION) },
    { L"Kintaro", DESC_NODETYPE_TREE, (void*)MK2_SNES_KINTARO_1dot0_COLLECTION, ARRAYSIZE(MK2_SNES_KINTARO_1dot0_COLLECTION) },
    { L"Shao Khan", DESC_NODETYPE_TREE, (void*)MK2_SNES_KHAN_COLLECTION, ARRAYSIZE(MK2_SNES_KHAN_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_COLLECTION, ARRAYSIZE(MK2_SNES_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_BONUS_COLLECTION, ARRAYSIZE(MK2_SNES_BONUS_COLLECTION) },
};

const sDescTreeNode MK2_1dot1_SNES_UNITS[] =
{
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_COLLECTION, ARRAYSIZE(MK2_SNES_LIUKANG_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_COLLECTION, ARRAYSIZE(MK2_SNES_KUNGLAO_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_COLLECTION, ARRAYSIZE(MK2_SNES_REPTILE_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_COLLECTION, ARRAYSIZE(MK2_SNES_SUBZERO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK2_SNES_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK2_SNES_SHANGTSUNG_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)MK2_SNES_KITANA_COLLECTION, ARRAYSIZE(MK2_SNES_KITANA_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)MK2_SNES_JAX_COLLECTION, ARRAYSIZE(MK2_SNES_JAX_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)MK2_SNES_MILEENA_COLLECTION, ARRAYSIZE(MK2_SNES_MILEENA_COLLECTION) },
    { L"Baraka", DESC_NODETYPE_TREE, (void*)MK2_SNES_BARAKA_COLLECTION, ARRAYSIZE(MK2_SNES_BARAKA_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK2_SNES_SCORPION_COLLECTION, ARRAYSIZE(MK2_SNES_SCORPION_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_COLLECTION, ARRAYSIZE(MK2_SNES_RAIDEN_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)MK2_SNES_JADE_COLLECTION, ARRAYSIZE(MK2_SNES_JADE_COLLECTION) },
    { L"Kintaro", DESC_NODETYPE_TREE, (void*)MK2_SNES_KINTARO_1dot1_COLLECTION, ARRAYSIZE(MK2_SNES_KINTARO_1dot1_COLLECTION) },
    { L"Shao Khan", DESC_NODETYPE_TREE, (void*)MK2_SNES_KHAN_COLLECTION, ARRAYSIZE(MK2_SNES_KHAN_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)MK2_SNES_STAGE_COLLECTION, ARRAYSIZE(MK2_SNES_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_BONUS_COLLECTION, ARRAYSIZE(MK2_SNES_BONUS_COLLECTION) },
};

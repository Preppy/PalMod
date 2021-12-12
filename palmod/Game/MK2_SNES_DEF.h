#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to MK2_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<UINT16> MK2_SNES_IMGIDS_USED =
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

const sGame_PaletteDataset MK2_SNES_KUNGLAO_P1_PALETTES[] =
{
    { L"Kung Lao P1", 0x2fd190, 0x2fd1b0, indexMK2Sprites_KungLao },
};

const sGame_PaletteDataset MK2_SNES_KUNGLAO_P2_PALETTES[] =
{
    { L"Kung Lao P2", 0x2fd1b0, 0x2fd1d0, indexMK2Sprites_KungLao },
};

const sGame_PaletteDataset MK2_SNES_JOHNNYCAGE_P1_PALETTES[] =
{
    { L"Johnny Cage P1", 0x2f88be, 0x2f88de, indexMK2Sprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_SNES_JOHNNYCAGE_P2_PALETTES[] =
{
    { L"Johnny Cage P2", 0x2f88de, 0x2f88fe, indexMK2Sprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_SNES_REPTILE_P1_PALETTES[] =
{
    { L"Reptile P1", 0x2f3ece, 0x2f3eee, indexMK2Sprites_Reptile },
};

const sGame_PaletteDataset MK2_SNES_REPTILE_P2_PALETTES[] =
{
    { L"Reptile P2", 0x2f3f2e, 0x2f3f4e, indexMK2Sprites_Reptile },
};

const sGame_PaletteDataset MK2_SNES_SUBZERO_P1_PALETTES[] =
{
    { L"Sub-Zero P1", 0x2f3eae, 0x2f3ece, indexMK2Sprites_SubZero },
};

const sGame_PaletteDataset MK2_SNES_SUBZERO_P2_PALETTES[] =
{
    { L"Sub-Zero P2", 0x2f3f0e, 0x2f3f2e, indexMK2Sprites_SubZero },
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
    { L"Jax P1", 0x2fd570, 0x2fd590, indexMK2Sprites_Jax },
};

const sGame_PaletteDataset MK2_SNES_JAX_P2_PALETTES[] =
{
    { L"Jax P2", 0x2fd550, 0x2fd570, indexMK2Sprites_Jax },
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

const sGame_PaletteDataset MK2_SNES_RAIDEN_P1_PALETTES[] =
{
    { L"Raiden P1", 0x2fcbb4, 0x2fcbd4, indexMK2Sprites_Raiden },
};

const sGame_PaletteDataset MK2_SNES_RAIDEN_P2_PALETTES[] =
{
    { L"Raiden P2", 0x2fcbd4, 0x2fcbf4, indexMK2Sprites_Raiden },
};

const sGame_PaletteDataset MK2_SNES_JADE_PALETTES[] =
{
    { L"Jade", 0x2f91f3, 0x2f9213, indexMK2Sprites_Jade },
};

const sDescTreeNode MK2_SNES_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_P1_PALETTES, ARRAYSIZE(MK2_SNES_LIUKANG_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_LIUKANG_P2_PALETTES, ARRAYSIZE(MK2_SNES_LIUKANG_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_P1_PALETTES, ARRAYSIZE(MK2_SNES_KUNGLAO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_KUNGLAO_P2_PALETTES, ARRAYSIZE(MK2_SNES_KUNGLAO_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_P1_PALETTES, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_JOHNNYCAGE_P2_PALETTES, ARRAYSIZE(MK2_SNES_JOHNNYCAGE_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_REPTILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_P1_PALETTES, ARRAYSIZE(MK2_SNES_REPTILE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_REPTILE_P2_PALETTES, ARRAYSIZE(MK2_SNES_REPTILE_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_P1_PALETTES, ARRAYSIZE(MK2_SNES_SUBZERO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_SUBZERO_P2_PALETTES, ARRAYSIZE(MK2_SNES_SUBZERO_P2_PALETTES) },
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
};

const sDescTreeNode MK2_SNES_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_P1_PALETTES, ARRAYSIZE(MK2_SNES_RAIDEN_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_SNES_RAIDEN_P2_PALETTES, ARRAYSIZE(MK2_SNES_RAIDEN_P2_PALETTES) },
};

const sDescTreeNode MK2_SNES_JADE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_SNES_JADE_PALETTES, ARRAYSIZE(MK2_SNES_JADE_PALETTES) },
};

const sDescTreeNode MK2_SNES_UNITS[] =
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
};

constexpr auto MK2_SNES_NUMUNIT = ARRAYSIZE(MK2_SNES_UNITS);

constexpr auto MK2_SNES_EXTRALOC = MK2_SNES_NUMUNIT;

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MK2_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

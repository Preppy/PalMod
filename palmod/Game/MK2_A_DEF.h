#pragma once

// Rev 1.1 palettes begin at around 0xa4dd4
// Rev 1.4: no data
// Rev 2.1: First official release, adds Smoke and Jade.
// Rev 3.1: Adds Noob Saibot
// Rev 3.2: EU, no data.

// rom sort order:
// P2 kung lao, liu kang, johnny cage, baraka, raiden, jax, shang tsung, reptile, scorpion, kitana, mileena

const std::vector<uint16_t> MK2_A_IMGIDS_USED =
{
    indexMK2ASprites_Baraka,            // 0x6c
    indexMK2ASprites_Jade,              // 0x6d
    indexMK2ASprites_Jax,               // 0x6e
    indexMK2ASprites_JohnnyCage,        // 0x6f
    indexMK2ASprites_Kintaro,           // 0x70
    indexMK2ASprites_Kitana,            // 0x71
    indexMK2ASprites_KungLao,           // 0x72
    indexMK2ASprites_LiuKang,           // 0x73
    indexMK2ASprites_Mileena,           // 0x74
    indexMK2ASprites_NoobSaibot,        // 0x75
    indexMK2ASprites_Raiden,            // 0x76
    indexMK2ASprites_Reptile,           // 0x77
    indexMK2ASprites_Scorpion,          // 0x78
    indexMK2ASprites_ShangTsung,        // 0x79
    indexMK2ASprites_ShaoKahn,          // 0x7a
    indexMK2ASprites_Smoke,             // 0x7b
    indexMK2ASprites_SubZero,           // 0x7c
    indexMK2ASprites_Bonus,             // 0x7d
    indexMK2ASprites_Stages,            // 0x7e
};

const sGame_PaletteDataset MK2_A_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0x5b918, 0x5b998, indexMK2ASprites_LiuKang },
};

const sGame_PaletteDataset MK2_A_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x21164, 0x211e4, indexMK2ASprites_LiuKang },
};

const sGame_PaletteDataset MK2_A_LIUKANG_PALETTES_SHARED[] =
{
    { L"Liu Kang Fireball", 0x5b99a, 0x5ba1a, indexMK2ASprites_LiuKang, 0x01 },
};

const sGame_PaletteDataset MK2_A_KUNGLAO_PALETTES_P1[] =
{
    { L"Kung Lao P1", 0x5b77c, 0x5b7fc, indexMK2ASprites_KungLao },
};

const sGame_PaletteDataset MK2_A_KUNGLAO_PALETTES_P2[] =
{
    { L"Kung Lao P2", 0x210e2, 0x21162, indexMK2ASprites_KungLao },
};

const sGame_PaletteDataset MK2_A_JOHNNYCAGE_PALETTES_P1[] =
{
    { L"Johnny Cage P1", 0x5ba9e, 0x5bb1e, indexMK2ASprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_A_JOHNNYCAGE_PALETTES_P2[] =
{
    { L"Johnny Cage P2", 0x211e6, 0x21266, indexMK2ASprites_JohnnyCage },
};

const sGame_PaletteDataset MK2_A_REPTILE_PALETTES_P1[] =
{
    { L"Reptile P1", 0x5c984, 0x5ca04, indexMK2ASprites_Reptile },
};

const sGame_PaletteDataset MK2_A_REPTILE_PALETTES_P2[] =
{
    { L"Reptile P2", 0x21574, 0x215f4, indexMK2ASprites_Reptile },
};

const sGame_PaletteDataset MK2_A_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0x5c902, 0x5c982, indexMK2ASprites_SubZero },
};

const sGame_PaletteDataset MK2_A_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x214f2, 0x21572, indexMK2ASprites_SubZero },
};

const sGame_PaletteDataset MK2_A_SHANGTSUNG_PALETTES_P1[] =
{
    { L"Shang Tsung P1", 0x5c088, 0x5c108, indexMK2ASprites_ShangTsung },
};

const sGame_PaletteDataset MK2_A_SHANGTSUNG_PALETTES_P2[] =
{
    { L"Shang Tsung P2", 0x21470, 0x214f0, indexMK2ASprites_ShangTsung },
};

const sGame_PaletteDataset MK2_A_KITANA_PALETTES_P1[] =
{
    { L"Kitana P1", 0x5bdaa, 0x5be2a, indexMK2ASprites_Kitana },
};

const sGame_PaletteDataset MK2_A_KITANA_PALETTES_P2[] =
{
    { L"Kitana P2", 0x21678, 0x216f8, indexMK2ASprites_Kitana },
};

const sGame_PaletteDataset MK2_A_JAX_PALETTES_P1[] =
{
    { L"Jax P1", 0x5cc68, 0x5cce8, indexMK2ASprites_Jax },
};

const sGame_PaletteDataset MK2_A_JAX_PALETTES_P2[] =
{
    { L"Jax P2", 0x213ee, 0x2146e, indexMK2ASprites_Jax },
};

const sGame_PaletteDataset MK2_A_MILEENA_PALETTES_P1[] =
{
    { L"Mileena P1", 0x5be2c, 0x5beac, indexMK2ASprites_Mileena },
};

const sGame_PaletteDataset MK2_A_MILEENA_PALETTES_P2[] =
{
    { L"Mileena P2", 0x216fa, 0x2177a, indexMK2ASprites_Mileena },
};

const sGame_PaletteDataset MK2_A_BARAKA_PALETTES_P1[] =
{
    { L"Baraka P1", 0x5bc24, 0x5bca4, indexMK2ASprites_Baraka },
};

const sGame_PaletteDataset MK2_A_BARAKA_PALETTES_P2[] =
{
    { L"Baraka P2", 0x212ea, 0x2136a, indexMK2ASprites_Baraka },
};

const sGame_PaletteDataset MK2_A_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0x5ca06, 0x5ca86, indexMK2ASprites_Scorpion },
};

const sGame_PaletteDataset MK2_A_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x215f6, 0x21676, indexMK2ASprites_Scorpion },
};

const sGame_PaletteDataset MK2_A_RAIDEN_PALETTES_P1[] =
{
    { L"Raiden P1", 0x5c792, 0x5c812, indexMK2ASprites_Raiden },
};

const sGame_PaletteDataset MK2_A_RAIDEN_PALETTES_P2[] =
{
    { L"Raiden P2", 0x2136c, 0x213ec, indexMK2ASprites_Raiden },
};

const sGame_PaletteDataset MK2_A_KINTARO_PALETTES[] =
{
    { L"Kintaro", 0x5cdd0, 0x5ce50, indexMK2ASprites_Kintaro },
};

const sGame_PaletteDataset MK2_A_SHAOKHAN_PALETTES[] =
{
    { L"Shao Kahn", 0x5ce52, 0x5ced2, indexMK2ASprites_ShaoKahn },
};

const sGame_PaletteDataset MK2_A_SMOKE_PALETTES[] =
{
    { L"Smoke", 0x2177c, 0x217fc, indexMK2ASprites_Smoke },
};

const sGame_PaletteDataset MK2_A_NOOB_PALETTES[] =
{
    { L"Noob Saibot", 0x217fe, 0x2187e, indexMK2ASprites_NoobSaibot },
};

const sGame_PaletteDataset MK2_A_JADE_PALETTES[] =
{
    { L"Jade", 0x5FA24, 0x5FAa4, indexMK2ASprites_Jade},
};

const sGame_PaletteDataset MK2_A_BONUS_PALETTES_BONUS[] =
{
    { L"Mortal Kombat CD Offer", 0x6278A, 0x6298A },
};

const sDescTreeNode MK2_A_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_PALETTES_P1, ARRAYSIZE(MK2_A_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_PALETTES_P2, ARRAYSIZE(MK2_A_LIUKANG_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_PALETTES_SHARED, ARRAYSIZE(MK2_A_LIUKANG_PALETTES_SHARED) },
};

const sDescTreeNode MK2_A_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_KUNGLAO_PALETTES_P1, ARRAYSIZE(MK2_A_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_KUNGLAO_PALETTES_P2, ARRAYSIZE(MK2_A_KUNGLAO_PALETTES_P2) },
};

const sDescTreeNode MK2_A_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_JOHNNYCAGE_PALETTES_P1, ARRAYSIZE(MK2_A_JOHNNYCAGE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_JOHNNYCAGE_PALETTES_P2, ARRAYSIZE(MK2_A_JOHNNYCAGE_PALETTES_P2) },
};

const sDescTreeNode MK2_A_REPTILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_REPTILE_PALETTES_P1, ARRAYSIZE(MK2_A_REPTILE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_REPTILE_PALETTES_P2, ARRAYSIZE(MK2_A_REPTILE_PALETTES_P2) },
};

const sDescTreeNode MK2_A_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_SUBZERO_PALETTES_P1, ARRAYSIZE(MK2_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_SUBZERO_PALETTES_P2, ARRAYSIZE(MK2_A_SUBZERO_PALETTES_P2) },
};

const sDescTreeNode MK2_A_SHANGTSUNG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_SHANGTSUNG_PALETTES_P1, ARRAYSIZE(MK2_A_SHANGTSUNG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_SHANGTSUNG_PALETTES_P2, ARRAYSIZE(MK2_A_SHANGTSUNG_PALETTES_P2) },
};

const sDescTreeNode MK2_A_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_KITANA_PALETTES_P1, ARRAYSIZE(MK2_A_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_KITANA_PALETTES_P2, ARRAYSIZE(MK2_A_KITANA_PALETTES_P2) },
};

const sDescTreeNode MK2_A_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_JAX_PALETTES_P1, ARRAYSIZE(MK2_A_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_JAX_PALETTES_P2, ARRAYSIZE(MK2_A_JAX_PALETTES_P2) },
};

const sDescTreeNode MK2_A_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_MILEENA_PALETTES_P1, ARRAYSIZE(MK2_A_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_MILEENA_PALETTES_P2, ARRAYSIZE(MK2_A_MILEENA_PALETTES_P2) },
};

const sDescTreeNode MK2_A_BARAKA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_BARAKA_PALETTES_P1, ARRAYSIZE(MK2_A_BARAKA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_BARAKA_PALETTES_P2, ARRAYSIZE(MK2_A_BARAKA_PALETTES_P2) },
};

const sDescTreeNode MK2_A_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_SCORPION_PALETTES_P1, ARRAYSIZE(MK2_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_SCORPION_PALETTES_P2, ARRAYSIZE(MK2_A_SCORPION_PALETTES_P2) },
};

const sDescTreeNode MK2_A_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK2_A_RAIDEN_PALETTES_P1, ARRAYSIZE(MK2_A_RAIDEN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK2_A_RAIDEN_PALETTES_P2, ARRAYSIZE(MK2_A_RAIDEN_PALETTES_P2) },
};

const sDescTreeNode MK2_A_KINTARO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_KINTARO_PALETTES, ARRAYSIZE(MK2_A_KINTARO_PALETTES) },
};

const sDescTreeNode MK2_A_SHAOKHAN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_SHAOKHAN_PALETTES, ARRAYSIZE(MK2_A_SHAOKHAN_PALETTES) },
};

const sDescTreeNode MK2_A_SMOKE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_SMOKE_PALETTES, ARRAYSIZE(MK2_A_SMOKE_PALETTES) },
};

const sDescTreeNode MK2_A_NOOB_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_NOOB_PALETTES, ARRAYSIZE(MK2_A_NOOB_PALETTES) },
};

const sDescTreeNode MK2_A_JADE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_JADE_PALETTES, ARRAYSIZE(MK2_A_JADE_PALETTES) },
};

const sDescTreeNode MK2_A_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_BONUS_PALETTES_BONUS, ARRAYSIZE(MK2_A_BONUS_PALETTES_BONUS) },
};

const sDescTreeNode MK2_A_UNITS[] =
{
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK2_A_LIUKANG_COLLECTION, ARRAYSIZE(MK2_A_LIUKANG_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)MK2_A_KUNGLAO_COLLECTION, ARRAYSIZE(MK2_A_KUNGLAO_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK2_A_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK2_A_JOHNNYCAGE_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK2_A_REPTILE_COLLECTION, ARRAYSIZE(MK2_A_REPTILE_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK2_A_SUBZERO_COLLECTION, ARRAYSIZE(MK2_A_SUBZERO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK2_A_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK2_A_SHANGTSUNG_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)MK2_A_KITANA_COLLECTION, ARRAYSIZE(MK2_A_KITANA_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)MK2_A_JAX_COLLECTION, ARRAYSIZE(MK2_A_JAX_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)MK2_A_MILEENA_COLLECTION, ARRAYSIZE(MK2_A_MILEENA_COLLECTION) },
    { L"Baraka", DESC_NODETYPE_TREE, (void*)MK2_A_BARAKA_COLLECTION, ARRAYSIZE(MK2_A_BARAKA_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK2_A_SCORPION_COLLECTION, ARRAYSIZE(MK2_A_SCORPION_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK2_A_RAIDEN_COLLECTION, ARRAYSIZE(MK2_A_RAIDEN_COLLECTION) },

    { L"Kintaro", DESC_NODETYPE_TREE, (void*)MK2_A_KINTARO_COLLECTION, ARRAYSIZE(MK2_A_KINTARO_COLLECTION) },
    { L"Shao Khan", DESC_NODETYPE_TREE, (void*)MK2_A_SHAOKHAN_COLLECTION, ARRAYSIZE(MK2_A_SHAOKHAN_COLLECTION) },

    { L"Jade", DESC_NODETYPE_TREE, (void*)MK2_A_JADE_COLLECTION, ARRAYSIZE(MK2_A_JADE_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)MK2_A_SMOKE_COLLECTION, ARRAYSIZE(MK2_A_SMOKE_COLLECTION) },
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)MK2_A_NOOB_COLLECTION, ARRAYSIZE(MK2_A_NOOB_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK2_A_BONUS_COLLECTION, ARRAYSIZE(MK2_A_BONUS_COLLECTION) },
};

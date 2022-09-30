#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to UMK3_DS_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> UMK3_DS_IMGIDS_USED =
{
    indexUMK3Sprites_DS_Cyrax,              // 0x48
    indexUMK3Sprites_DS_Ermac,              // 0x49
    indexUMK3Sprites_DS_Jade,               // 0x4A
    indexUMK3Sprites_DS_Jax,                // 0x4B
    indexUMK3Sprites_DS_Kabal,              // 0x4C
    indexUMK3Sprites_DS_Kano,               // 0x4D
    indexUMK3Sprites_DS_Kitana,             // 0x4E
    indexUMK3Sprites_DS_KungLao,            // 0x4F
    indexUMK3Sprites_DS_LiuKang,            // 0x50
    indexUMK3Sprites_DS_Mileena,            // 0x51
    indexUMK3Sprites_DS_Motaro,             // 0x52
    indexUMK3Sprites_DS_Nightwolf,          // 0x53
    indexUMK3Sprites_DS_NoobSaibot,         // 0x54
    indexUMK3Sprites_DS_Reptile,            // 0x55
    indexUMK3Sprites_DS_Scorpion,           // 0x56
    indexUMK3Sprites_DS_Sektor,             // 0x57
    indexUMK3Sprites_DS_ShangTsung,         // 0x58
    indexUMK3Sprites_DS_ShaoKhan,           // 0x59
    indexUMK3Sprites_DS_Sheeva,             // 0x5A
    indexUMK3Sprites_DS_Sindel,             // 0x5B
    indexUMK3Sprites_DS_Smoke,              // 0x5C
    indexUMK3Sprites_DS_SmokeHuman,         // 0x5D
    indexUMK3Sprites_DS_SonyaBlade,         // 0x5E
    indexUMK3Sprites_DS_Stryker,            // 0x5F
    indexUMK3Sprites_DS_SubZeroBiHan,       // 0x60
    indexUMK3Sprites_DS_SubZeroKuaiLiang,   // 0x61
    indexUMK3Sprites_DS_Stages,             // 0x62
    indexUMK3Sprites_DS_Bonus,              // 0x63

};

const sGame_PaletteDataset UMK3_DS_CYRAX_PALETTES_P1[] =
{
    { L"Cyrax P1", 0x2107BC, 0x21083C, indexUMK3Sprites_DS_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_CYRAX_PALETTES_P2[] =
{
    { L"Cyrax P2", 0x21083E, 0x2108BE, indexUMK3Sprites_DS_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_ERMAC_PALETTES_P1[] =
{
    { L"Ermac P1", 0x1B26A0, 0x1B2720, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_ERMAC_PALETTES_P2[] =
{
    { L"Ermac P2", 0x1B355C, 0x1B35DC, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JADE_PALETTES_P1[] =
{
    { L"Jade P1", 0x21696A, 0x2169EA, indexUMK3Sprites_DS_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JADE_PALETTES_P2[] =
{
    { L"Jade P2", 0x1B33D6, 0x1B3456, indexUMK3Sprites_DS_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JAX_PALETTES_P1[] =
{
    { L"Jax P1", 0x20FF9E, 0x21001E, indexUMK3Sprites_DS_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JAX_PALETTES_P2[] =
{
    { L"Jax P2", 0x210020, 0x2100A0, indexUMK3Sprites_DS_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KABAL_PALETTES_P1[] =
{
    { L"Kabal P1", 0x210C62, 0x210CE2, indexUMK3Sprites_DS_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KABAL_PALETTES_P2[] =
{
    { L"Kabal P2", 0x210CE4, 0x210D64, indexUMK3Sprites_DS_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KANO_PALETTES_P1[] =
{
    { L"Kano P1", 0x20FCC2, 0x20FD42, indexUMK3Sprites_DS_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KANO_PALETTES_P2[] =
{
    { L"Kano P2", 0x20FD44, 0x20FDC4, indexUMK3Sprites_DS_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KITANA_PALETTES_P1[] =
{
    { L"Kitana P1", 0x216866, 0x2168E6, indexUMK3Sprites_DS_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KITANA_PALETTES_P2[] =
{
    { L"Kitana P2", 0x1B32D2, 0x1B3352, indexUMK3Sprites_DS_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KUNGLAO_PALETTES_P1[] =
{
    { L"Kung Lao P1", 0x210ABE, 0x210B3E, indexUMK3Sprites_DS_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KUNGLAO_PALETTES_P2[] =
{
    { L"Kung Lao P2", 0x210B40, 0x210BC0, indexUMK3Sprites_DS_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0x21174C, 0x2117CC, indexUMK3Sprites_DS_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x2117CE, 0x21184E, indexUMK3Sprites_DS_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_MILEENA_PALETTES_P1[] =
{
    { L"Mileena P1", 0x2168E8, 0x216968, indexUMK3Sprites_DS_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_MILEENA_PALETTES_P2[] =
{
    { L"Mileena P2", 0x1B3354, 0x1B33D4, indexUMK3Sprites_DS_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_NIGHTWOLF_PALETTES_P1[] =
{
    { L"Nightwolf P1", 0x210128, 0x2101A8, indexUMK3Sprites_DS_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_NIGHTWOLF_PALETTES_P2[] =
{
    { L"Nightwolf P2", 0x1B28A8, 0x1B2928, indexUMK3Sprites_DS_Nightwolf, 0x00 },
};

#ifdef NOTFOUND
const sGame_PaletteDataset UMK3_DS_NOOB_PALETTES_P1[] =
{
    { L"Noob Saibot P1", 0x3EAF8F, 0x3EAFAF, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_NOOB_PALETTES_P2[] =
{
    { L"Noob Saibot P2", 0x8C4ED, 0x8C50D, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_RAIN_PALETTES_P1[] =
{
    { L"Rain P1", 0x3EAFAF, 0x3EAFCF, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_RAIN_PALETTES_P2[] =
{
    { L"Rain P2", 0x8C4AD, 0x8C4CD, indexUMK3Sprites_DS_Scorpion, 0x00 },
};
#endif

const sGame_PaletteDataset UMK3_DS_REPTILE_PALETTES_P1[] =
{
    { L"Reptile P1", 0x216AF4, 0x216B74, indexUMK3Sprites_DS_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_REPTILE_PALETTES_P2[] =
{
    { L"Reptile P2", 0x1B34DA, 0x1B355A, indexUMK3Sprites_DS_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0x216A72, 0x216AF2, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x1B3458, 0x1B34D8, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SEKTOR_PALETTES_P1[] =
{
    { L"Sektor P1", 0x2106B8, 0x210738, indexUMK3Sprites_DS_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SEKTOR_PALETTES_P2[] =
{
    { L"Sektor P2", 0x21073A, 0x2107BA, indexUMK3Sprites_DS_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHANG_PALETTES_P1[] =
{
    { L"Shang Tsung P1", 0x210F7E, 0x210FFE, indexUMK3Sprites_DS_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHANG_PALETTES_P2[] =
{
    { L"Shang Tsung P2", 0x211000, 0x211080, indexUMK3Sprites_DS_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SINDEL_PALETTES_P1[] =
{
    { L"Sindel P1", 0x2104DE, 0x21055E, indexUMK3Sprites_DS_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SINDEL_PALETTES_P2[] =
{
    { L"Sindel P2", 0x1B29AA, 0x1B2A2A, indexUMK3Sprites_DS_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SMOKE_PALETTES_P1[] =
{
    { L"Smoke P1", 0x1B27A4, 0x1B2824, indexUMK3Sprites_DS_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SMOKE_PALETTES_P2[] =
{
    { L"Smoke P2", 0x1B2826, 0x1B28A6, indexUMK3Sprites_DS_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SMOKE_HUMAN_PALETTES_P1[] =
{
    { L"Smoke (Human) P1", 0x1B3660, 0x1B36E0, indexUMK3Sprites_DS_SmokeHuman, 0x00 },
};

#ifdef NOTFOUND
const sGame_PaletteDataset UMK3_DS_SMOKE_HUMAN_PALETTES_P2[] =
{
    { L"Smoke (Human) P2", 0x8C48D, 0x8C4AD, indexUMK3Sprites_DS_SmokeHuman, 0x00 },
};

#endif

const sGame_PaletteDataset UMK3_DS_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0x21AB34, 0x21ABB4, indexUMK3Sprites_DS_SonyaBlade, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0x20FE7A, 0x20FEFA, indexUMK3Sprites_DS_SonyaBlade, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_STRYKER_PALETTES_P1[] =
{
    { L"Stryker P1", 0x2103B2, 0x210432, indexUMK3Sprites_DS_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_STRYKER_PALETTES_P2[] =
{
    { L"Stryker P2", 0x1B292A, 0x1B29AA, indexUMK3Sprites_DS_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0x1B2722, 0x1B27A2, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x1B35DE, 0x1B365E, indexUMK3Sprites_DS_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_HUMAN_PALETTES_P1[] =
{
    { L"Sub-Zero (Human) P1", 0x2101E8, 0x210268, indexUMK3Sprites_DS_SubZeroKuaiLiang, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_HUMAN_PALETTES_P2[] =
{
    { L"Sub-Zero (Human) P2", 0x21026A, 0x2102EA, indexUMK3Sprites_DS_SubZeroKuaiLiang, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHEEVA_PALETTES_P1[] =
{
    { L"Sheeva P1", 0x210E5A, 0x210EDA, indexUMK3Sprites_DS_Sheeva, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHEEVA_PALETTES_P2[] =
{
    { L"Sheeva P2", 0x210EDC, 0x210F5C, indexUMK3Sprites_DS_Sheeva, 0x00 },
};


#ifdef NOTFOUND
const sGame_PaletteDataset UMK3_DS_MOTARO_PALETTES[] =
{
    { L"Motaro", 0x3FCCAE, 0x3FCCCE, indexUMK3Sprites_DS_Motaro, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHAOKAHN_PALETTES[] =
{
    { L"Shao Khan", 0x3FC279, 0x3FC299, indexUMK3Sprites_DS_ShaoKahn, 0x00 },
};
#endif

const sDescTreeNode UMK3_DS_CYRAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_CYRAX_PALETTES_P1, ARRAYSIZE(UMK3_DS_CYRAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_CYRAX_PALETTES_P2, ARRAYSIZE(UMK3_DS_CYRAX_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_ERMAC_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_ERMAC_PALETTES_P1, ARRAYSIZE(UMK3_DS_ERMAC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_ERMAC_PALETTES_P2, ARRAYSIZE(UMK3_DS_ERMAC_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_JADE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_JADE_PALETTES_P1, ARRAYSIZE(UMK3_DS_JADE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_JADE_PALETTES_P2, ARRAYSIZE(UMK3_DS_JADE_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_JAX_PALETTES_P1, ARRAYSIZE(UMK3_DS_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_JAX_PALETTES_P2, ARRAYSIZE(UMK3_DS_JAX_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_KABAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_KABAL_PALETTES_P1, ARRAYSIZE(UMK3_DS_KABAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_KABAL_PALETTES_P2, ARRAYSIZE(UMK3_DS_KABAL_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_KANO_PALETTES_P1, ARRAYSIZE(UMK3_DS_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_KANO_PALETTES_P2, ARRAYSIZE(UMK3_DS_KANO_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_KITANA_PALETTES_P1, ARRAYSIZE(UMK3_DS_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_KITANA_PALETTES_P2, ARRAYSIZE(UMK3_DS_KITANA_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_KUNGLAO_PALETTES_P1, ARRAYSIZE(UMK3_DS_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_KUNGLAO_PALETTES_P2, ARRAYSIZE(UMK3_DS_KUNGLAO_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_LIUKANG_PALETTES_P1, ARRAYSIZE(UMK3_DS_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_LIUKANG_PALETTES_P2, ARRAYSIZE(UMK3_DS_LIUKANG_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_MILEENA_PALETTES_P1, ARRAYSIZE(UMK3_DS_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_MILEENA_PALETTES_P2, ARRAYSIZE(UMK3_DS_MILEENA_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_NIGHTWOLF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_NIGHTWOLF_PALETTES_P1, ARRAYSIZE(UMK3_DS_NIGHTWOLF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_NIGHTWOLF_PALETTES_P2, ARRAYSIZE(UMK3_DS_NIGHTWOLF_PALETTES_P2) },
};

#ifdef NOTFOUND
const sDescTreeNode UMK3_DS_NOOB_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_NOOB_PALETTES_P1, ARRAYSIZE(UMK3_DS_NOOB_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_NOOB_PALETTES_P2, ARRAYSIZE(UMK3_DS_NOOB_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_RAIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_RAIN_PALETTES_P1, ARRAYSIZE(UMK3_DS_RAIN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_RAIN_PALETTES_P2, ARRAYSIZE(UMK3_DS_RAIN_PALETTES_P2) },
};

#endif

const sDescTreeNode UMK3_DS_REPTILE_COLLECTION[] =
{
    // These are unequal, so opt out of pairing via affixing _
    { L"P1_", DESC_NODETYPE_TREE, (void*)UMK3_DS_REPTILE_PALETTES_P1, ARRAYSIZE(UMK3_DS_REPTILE_PALETTES_P1) },
    { L"P2_", DESC_NODETYPE_TREE, (void*)UMK3_DS_REPTILE_PALETTES_P2, ARRAYSIZE(UMK3_DS_REPTILE_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SCORPION_PALETTES_P1, ARRAYSIZE(UMK3_DS_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SCORPION_PALETTES_P2, ARRAYSIZE(UMK3_DS_SCORPION_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SEKTOR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SEKTOR_PALETTES_P1, ARRAYSIZE(UMK3_DS_SEKTOR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SEKTOR_PALETTES_P2, ARRAYSIZE(UMK3_DS_SEKTOR_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SHANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHANG_PALETTES_P1, ARRAYSIZE(UMK3_DS_SHANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHANG_PALETTES_P2, ARRAYSIZE(UMK3_DS_SHANG_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SINDEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SINDEL_PALETTES_P1, ARRAYSIZE(UMK3_DS_SINDEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SINDEL_PALETTES_P2, ARRAYSIZE(UMK3_DS_SINDEL_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SMOKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_PALETTES_P1, ARRAYSIZE(UMK3_DS_SMOKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_PALETTES_P2, ARRAYSIZE(UMK3_DS_SMOKE_PALETTES_P2) },
};


const sDescTreeNode UMK3_DS_SMOKE_HUMAN_COLLECTION[] =
{
    { L"P1_", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_HUMAN_PALETTES_P1, ARRAYSIZE(UMK3_DS_SMOKE_HUMAN_PALETTES_P1) },
//    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_HUMAN_PALETTES_P2, ARRAYSIZE(UMK3_DS_SMOKE_HUMAN_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SONYA_PALETTES_P1, ARRAYSIZE(UMK3_DS_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SONYA_PALETTES_P2, ARRAYSIZE(UMK3_DS_SONYA_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_STRYKER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_STRYKER_PALETTES_P1, ARRAYSIZE(UMK3_DS_STRYKER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_STRYKER_PALETTES_P2, ARRAYSIZE(UMK3_DS_STRYKER_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_PALETTES_P1, ARRAYSIZE(UMK3_DS_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_PALETTES_P2, ARRAYSIZE(UMK3_DS_SUBZERO_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SUBZERO_HUMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_HUMAN_PALETTES_P1, ARRAYSIZE(UMK3_DS_SUBZERO_HUMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_HUMAN_PALETTES_P2, ARRAYSIZE(UMK3_DS_SUBZERO_HUMAN_PALETTES_P2) },
};

const sDescTreeNode UMK3_DS_SHEEVA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHEEVA_PALETTES_P1, ARRAYSIZE(UMK3_DS_SHEEVA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHEEVA_PALETTES_P2, ARRAYSIZE(UMK3_DS_SHEEVA_PALETTES_P2) },
};

#ifdef NOTFOUND
const sDescTreeNode UMK3_DS_MOTARO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_MOTARO_PALETTES, ARRAYSIZE(UMK3_DS_MOTARO_PALETTES) },
};

const sDescTreeNode UMK3_DS_SHAOKAHN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHAOKAHN_PALETTES, ARRAYSIZE(UMK3_DS_SHAOKAHN_PALETTES) },
};
#endif

const sDescTreeNode UMK3_DS_UNITS[] =
{
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)UMK3_DS_CYRAX_COLLECTION, ARRAYSIZE(UMK3_DS_CYRAX_COLLECTION) },
    { L"Ermac", DESC_NODETYPE_TREE, (void*)UMK3_DS_ERMAC_COLLECTION, ARRAYSIZE(UMK3_DS_ERMAC_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)UMK3_DS_JADE_COLLECTION, ARRAYSIZE(UMK3_DS_JADE_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3_DS_JAX_COLLECTION, ARRAYSIZE(UMK3_DS_JAX_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3_DS_KABAL_COLLECTION, ARRAYSIZE(UMK3_DS_KABAL_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3_DS_KANO_COLLECTION, ARRAYSIZE(UMK3_DS_KANO_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3_DS_KITANA_COLLECTION, ARRAYSIZE(UMK3_DS_KITANA_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3_DS_KUNGLAO_COLLECTION, ARRAYSIZE(UMK3_DS_KUNGLAO_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3_DS_LIUKANG_COLLECTION, ARRAYSIZE(UMK3_DS_LIUKANG_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)UMK3_DS_MILEENA_COLLECTION, ARRAYSIZE(UMK3_DS_MILEENA_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3_DS_NIGHTWOLF_COLLECTION, ARRAYSIZE(UMK3_DS_NIGHTWOLF_COLLECTION) },
    //{ L"Noob Saibot", DESC_NODETYPE_TREE, (void*)UMK3_DS_NOOB_COLLECTION, ARRAYSIZE(UMK3_DS_NOOB_COLLECTION) },
    //{ L"Rain", DESC_NODETYPE_TREE, (void*)UMK3_DS_RAIN_COLLECTION, ARRAYSIZE(UMK3_DS_RAIN_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)UMK3_DS_REPTILE_COLLECTION, ARRAYSIZE(UMK3_DS_REPTILE_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)UMK3_DS_SCORPION_COLLECTION, ARRAYSIZE(UMK3_DS_SCORPION_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3_DS_SEKTOR_COLLECTION, ARRAYSIZE(UMK3_DS_SEKTOR_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHANG_COLLECTION, ARRAYSIZE(UMK3_DS_SHANG_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3_DS_SINDEL_COLLECTION, ARRAYSIZE(UMK3_DS_SINDEL_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_COLLECTION, ARRAYSIZE(UMK3_DS_SMOKE_COLLECTION) },
    { L"Smoke (Human)", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_HUMAN_COLLECTION, ARRAYSIZE(UMK3_DS_SMOKE_HUMAN_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3_DS_SONYA_COLLECTION, ARRAYSIZE(UMK3_DS_SONYA_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3_DS_STRYKER_COLLECTION, ARRAYSIZE(UMK3_DS_STRYKER_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_COLLECTION, ARRAYSIZE(UMK3_DS_SUBZERO_COLLECTION) },
    { L"Sub-Zero (Human)", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_HUMAN_COLLECTION, ARRAYSIZE(UMK3_DS_SUBZERO_HUMAN_COLLECTION) },

    { L"Sheeva", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHEEVA_COLLECTION, ARRAYSIZE(UMK3_DS_SHEEVA_COLLECTION) },

    //{ L"Motaro", DESC_NODETYPE_TREE, (void*)UMK3_DS_MOTARO_COLLECTION, ARRAYSIZE(UMK3_DS_MOTARO_COLLECTION) },
    //{ L"Shao Kahn", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHAOKAHN_COLLECTION, ARRAYSIZE(UMK3_DS_SHAOKAHN_COLLECTION) },
};

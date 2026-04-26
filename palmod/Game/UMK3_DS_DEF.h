#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to UMK3_DS_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> UMK3_DS_IMGIDS_USED =
{
    indexMK2ASprites_ShaoKahn,          // 0x7a

    indexUMK3ArcadeSprites_Kitana,      // 0xd9
    indexUMK3ArcadeSprites_Reptile,     // 0xda
    indexUMK3ArcadeSprites_Sonya,       // 0xdb
    indexUMK3ArcadeSprites_Jax,         // 0xdc
    indexUMK3ArcadeSprites_Nightwolf,   // 0xdd
    indexUMK3ArcadeSprites_Jade,        // 0xde
    indexUMK3ArcadeSprites_Scorpion,    // 0xdf
    indexUMK3ArcadeSprites_Kano,        // 0xe0
    indexUMK3ArcadeSprites_SubZero,     // 0xe1
    indexUMK3ArcadeSprites_Sektor,      // 0xe2
    indexUMK3ArcadeSprites_Sindel,      // 0xe3
    indexUMK3ArcadeSprites_Stryker,     // 0xe4
    indexUMK3ArcadeSprites_Cyrax,       // 0xe5
    indexUMK3ArcadeSprites_KungLao,     // 0xe6
    indexUMK3ArcadeSprites_Kabal,       // 0xe7
    indexUMK3ArcadeSprites_Sheeva,      // 0xe8
    indexUMK3ArcadeSprites_ShangTsung,  // 0xe9
    indexUMK3ArcadeSprites_LiuKang,     // 0xea
    indexUMK3ArcadeSprites_Smoke,       // 0xeb
    indexUMK3ArcadeSprites_HumanSmoke,  // 0xec
    indexUMK3ArcadeSprites_ClassicSubZero, // 0xed
    indexUMK3ArcadeSprites_Ermac,       // 0xee
    indexUMK3ArcadeSprites_Mileena,     // 0xef
    indexUMK3ArcadeSprites_Motaro,      // 0xf0
    indexUMK3ArcadeSprites_ShaoKhan,    // 0xf1
    indexUMK3ArcadeSprites_NoobSaibot,  // 0xf2
    indexUMK3ArcadeSprites_Rain,        // 0xf3
    indexUMK3ArcadeSprites_Stages,      // 0xf4
    indexUMK3ArcadeSprites_Bonus,       // 0xf5
};

const sGame_PaletteDataset UMK3_DS_CYRAX_PALETTES_P1[] =
{
    { L"Cyrax P1", 0x2107BC, 0x21083C, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_CYRAX_PALETTES_P2[] =
{
    { L"Cyrax P2", 0x21083E, 0x2108BE, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_ERMAC_PALETTES_P1[] =
{
    { L"Ermac P1", 0x1B26A0, 0x1B2720, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_ERMAC_PALETTES_P2[] =
{
    { L"Ermac P2", 0x1B355C, 0x1B35DC, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JADE_PALETTES_P1[] =
{
    { L"Jade P1", 0x21696A, 0x2169EA, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JADE_PALETTES_P2[] =
{
    { L"Jade P2", 0x1B33D6, 0x1B3456, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JAX_PALETTES_P1[] =
{
    { L"Jax P1", 0x20FF9E, 0x21001E, indexUMK3ArcadeSprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_JAX_PALETTES_P2[] =
{
    { L"Jax P2", 0x210020, 0x2100A0, indexUMK3ArcadeSprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KABAL_PALETTES_P1[] =
{
    { L"Kabal P1", 0x210C62, 0x210CE2, indexUMK3ArcadeSprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KABAL_PALETTES_P2[] =
{
    { L"Kabal P2", 0x210CE4, 0x210D64, indexUMK3ArcadeSprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KANO_PALETTES_P1[] =
{
    { L"Kano P1", 0x20FCC2, 0x20FD42, indexUMK3ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KANO_PALETTES_P2[] =
{
    { L"Kano P2", 0x20FD44, 0x20FDC4, indexUMK3ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KITANA_PALETTES_P1[] =
{
    { L"Kitana P1", 0x216866, 0x2168E6, indexUMK3ArcadeSprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KITANA_PALETTES_P2[] =
{
    { L"Kitana P2", 0x1B32D2, 0x1B3352, indexUMK3ArcadeSprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KUNGLAO_PALETTES_P1[] =
{
    { L"Kung Lao P1", 0x210ABE, 0x210B3E, indexUMK3ArcadeSprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_KUNGLAO_PALETTES_P2[] =
{
    { L"Kung Lao P2", 0x210B40, 0x210BC0, indexUMK3ArcadeSprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0x21174C, 0x2117CC, indexUMK3ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x2117CE, 0x21184E, indexUMK3ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_MILEENA_PALETTES_P1[] =
{
    { L"Mileena P1", 0x2168E8, 0x216968, indexUMK3ArcadeSprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_MILEENA_PALETTES_P2[] =
{
    { L"Mileena P2", 0x1B3354, 0x1B33D4, indexUMK3ArcadeSprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_NIGHTWOLF_PALETTES_P1[] =
{
    { L"Nightwolf P1", 0x210128, 0x2101A8, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_NIGHTWOLF_PALETTES_P2[] =
{
    { L"Nightwolf P2", 0x1B28A8, 0x1B2928, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
};

#ifdef GOOD_LUCK_SEARCHER
// No idea where this is
const sGame_PaletteDataset UMK3_DS_NOOB_PALETTES[] =
{
    { L"Noob Saibot", 0x3EAF8F, 0x3EAFAF, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};
#endif

const sGame_PaletteDataset UMK3_DS_RAIN_PALETTES[] =
{
    { L"Rain", 0x1bfdce, 0x1bfe4e, indexUMK3ArcadeSprites_Rain  },
};

const sGame_PaletteDataset UMK3_DS_REPTILE_PALETTES_P1[] =
{
    { L"Reptile P1", 0x216AF4, 0x216B74, indexUMK3ArcadeSprites_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_REPTILE_PALETTES_P2[] =
{
    { L"Reptile P2", 0x1B34DA, 0x1B355A, indexUMK3ArcadeSprites_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0x216A72, 0x216AF2, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x1B3458, 0x1B34D8, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SEKTOR_PALETTES_P1[] =
{
    { L"Sektor P1", 0x2106B8, 0x210738, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SEKTOR_PALETTES_P2[] =
{
    { L"Sektor P2", 0x21073A, 0x2107BA, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHANG_PALETTES_P1[] =
{
    { L"Shang Tsung P1", 0x210F7E, 0x210FFE, indexUMK3ArcadeSprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHANG_PALETTES_P2[] =
{
    { L"Shang Tsung P2", 0x211000, 0x211080, indexUMK3ArcadeSprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SINDEL_PALETTES_P1[] =
{
    { L"Sindel P1", 0x2104DE, 0x21055E, indexUMK3ArcadeSprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SINDEL_PALETTES_P2[] =
{
    { L"Sindel P2", 0x1B29AA, 0x1B2A2A, indexUMK3ArcadeSprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SMOKE_PALETTES_P1[] =
{
    { L"Smoke P1", 0x1B27A4, 0x1B2824, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SMOKE_PALETTES_P2[] =
{
    { L"Smoke P2", 0x1B2826, 0x1B28A6, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SMOKE_HUMAN_PALETTES[] =
{
    { L"Human Smoke", 0x1B3660, 0x1B36E0, indexUMK3ArcadeSprites_HumanSmoke, 0x00 },
};

#ifdef NOTFOUND
const sGame_PaletteDataset UMK3_DS_SMOKE_HUMAN_PALETTES_P2[] =
{
    { L"Smoke (Human) P2", 0x8C48D, 0x8C4AD, indexUMK3ArcadeSprites_SmokeHuman, 0x00 },
};

#endif

const sGame_PaletteDataset UMK3_DS_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0x21AB34, 0x21ABB4, indexUMK3ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0x20FE7A, 0x20FEFA, indexUMK3ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_STRYKER_PALETTES_P1[] =
{
    { L"Stryker P1", 0x2103B2, 0x210432, indexUMK3ArcadeSprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_STRYKER_PALETTES_P2[] =
{
    { L"Stryker P2", 0x1B292A, 0x1B29AA, indexUMK3ArcadeSprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0x1B2722, 0x1B27A2, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x1B35DE, 0x1B365E, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_HUMAN_PALETTES_P1[] =
{
    { L"Sub-Zero (Human) P1", 0x2101E8, 0x210268, indexUMK3ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SUBZERO_HUMAN_PALETTES_P2[] =
{
    { L"Sub-Zero (Human) P2", 0x21026A, 0x2102EA, indexUMK3ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHEEVA_PALETTES_P1[] =
{
    { L"Sheeva P1", 0x210E5A, 0x210EDA, indexUMK3ArcadeSprites_Sheeva, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHEEVA_PALETTES_P2[] =
{
    { L"Sheeva P2", 0x210EDC, 0x210F5C, indexUMK3ArcadeSprites_Sheeva, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_MOTARO_PALETTES[] =
{
    { L"Motaro", 0x2118d0, 0x211950, indexUMK3ArcadeSprites_Motaro, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_SHAOKAHN_PALETTES[] =
{
    { L"Shao Khan", 0x211a46, 0x211ac6, indexMK2ASprites_ShaoKahn, 0x00 },
};

const sGame_PaletteDataset UMK3_DS_BONUS_PALETTES_FROZEN[] =
{
    { L"Ninja (Male)",  0x1b2b34, 0x1b2bb4, indexUMK3ArcadeSprites_Scorpion, 0x00 }, /* Delta: 0x151af2 */
    { L"Ninja (Female)", 0x1b2bb6, 0x1b2c36, indexUMK3ArcadeSprites_Kitana, 0x00 }, /* Delta: 0x151af2 */
    { L"Liu Kang",      0x1b2c38, 0x1b2cb8, indexUMK3ArcadeSprites_LiuKang, 0x00 }, /* Delta: 0x151af2 */
    { L"Shang Tsung",   0x1b2cba, 0x1b2d3a, indexUMK3ArcadeSprites_ShangTsung, 0x00 }, /* Delta: 0x151af2 */
    { L"Sheeva",        0x1b2d3c, 0x1b2dbc, indexUMK3ArcadeSprites_Sheeva, 0x00 }, /* Delta: 0x151af2 */
    { L"Kabal",         0x1b2dbe, 0x1b2e3e, indexUMK3ArcadeSprites_Kabal, 0x00 }, /* Delta: 0x151af2 */
    { L"Sonya",         0x1b2e40, 0x1b2ec0, indexUMK3ArcadeSprites_Sonya, 0x00 }, /* Delta: 0x151af2 */
    { L"Nightwolf",     0x1b2ec2, 0x1b2f42, indexUMK3ArcadeSprites_Nightwolf, 0x00 }, /* Delta: 0x151af2 */
    { L"Sindel",        0x1b2f44, 0x1b2fc4, indexUMK3ArcadeSprites_Sindel, 0x00 }, /* Delta: 0x151af2 */
    { L"Stryker",       0x1b2fc6, 0x1b3046, indexUMK3ArcadeSprites_Stryker, 0x00 }, /* Delta: 0x151af2 */
    { L"Jax",           0x1b3048, 0x1b30c8, indexUMK3ArcadeSprites_Jax, 0x00 }, /* Delta: 0x151af2 */
    { L"Ninja (Robot)", 0x1b30ca, 0x1b314a, indexUMK3ArcadeSprites_Cyrax, 0x00 }, /* Delta: 0x151af2 */
    { L"Sub-Zero",      0x1b314c, 0x1b31cc, indexUMK3ArcadeSprites_SubZero, 0x00 }, /* Delta: 0x151af2 */
    { L"Kano",          0x1b31ce, 0x1b324e, indexUMK3ArcadeSprites_Kano, 0x00 }, /* Delta: 0x151af2 */
    { L"Kung Lao",      0x1b3250, 0x1b32d0, indexUMK3ArcadeSprites_KungLao, 0x00 }, /* Delta: 0x151af2 */
};

const sGame_PaletteDataset UMK3_DS_BONUS_PALETTES_HIDDEN[] =
{
    { L"Explosions", 0x21abb6, 0x21abd6, indexUMK3ArcadeSprites_Bonus, 0x01, &pairFullyLinkedNode }, /* Delta: 0x15fec2 */
    { L"Main Ships", 0x21abd6, 0x21abf6, indexUMK3ArcadeSprites_Bonus, 0x02 }, /* Delta: 0x15fec2 */
    { L"Enemies", 0x21abf6, 0x21ac16, indexUMK3ArcadeSprites_Bonus, 0x00 }, /* Delta: 0x15fec2 */
};

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

#ifdef GOOD_LUCK_SEARCHER
// No idea where this is
const sDescTreeNode UMK3_DS_NOOB_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_NOOB_PALETTES, ARRAYSIZE(UMK3_DS_NOOB_PALETTES) },
};
#endif

const sDescTreeNode UMK3_DS_RAIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_RAIN_PALETTES, ARRAYSIZE(UMK3_DS_RAIN_PALETTES) },
};

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
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_HUMAN_PALETTES, ARRAYSIZE(UMK3_DS_SMOKE_HUMAN_PALETTES) },
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

const sDescTreeNode UMK3_DS_MOTARO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_MOTARO_PALETTES, ARRAYSIZE(UMK3_DS_MOTARO_PALETTES) },
};

const sDescTreeNode UMK3_DS_SHAOKAHN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHAOKAHN_PALETTES, ARRAYSIZE(UMK3_DS_SHAOKAHN_PALETTES) },
};

const sDescTreeNode UMK3_DS_BONUS_COLLECTION[] =
{
    { L"Frozen Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_BONUS_PALETTES_FROZEN, ARRAYSIZE(UMK3_DS_BONUS_PALETTES_FROZEN) },
    { L"Hidden Game", DESC_NODETYPE_TREE, (void*)UMK3_DS_BONUS_PALETTES_HIDDEN, ARRAYSIZE(UMK3_DS_BONUS_PALETTES_HIDDEN) },
};

const sDescTreeNode UMK3_DS_UNITS[] =
{
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3_DS_KITANA_COLLECTION, ARRAYSIZE(UMK3_DS_KITANA_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)UMK3_DS_REPTILE_COLLECTION, ARRAYSIZE(UMK3_DS_REPTILE_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3_DS_SONYA_COLLECTION, ARRAYSIZE(UMK3_DS_SONYA_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3_DS_JAX_COLLECTION, ARRAYSIZE(UMK3_DS_JAX_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3_DS_NIGHTWOLF_COLLECTION, ARRAYSIZE(UMK3_DS_NIGHTWOLF_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)UMK3_DS_JADE_COLLECTION, ARRAYSIZE(UMK3_DS_JADE_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)UMK3_DS_SCORPION_COLLECTION, ARRAYSIZE(UMK3_DS_SCORPION_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3_DS_KANO_COLLECTION, ARRAYSIZE(UMK3_DS_KANO_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_HUMAN_COLLECTION, ARRAYSIZE(UMK3_DS_SUBZERO_HUMAN_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3_DS_SEKTOR_COLLECTION, ARRAYSIZE(UMK3_DS_SEKTOR_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3_DS_SINDEL_COLLECTION, ARRAYSIZE(UMK3_DS_SINDEL_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3_DS_STRYKER_COLLECTION, ARRAYSIZE(UMK3_DS_STRYKER_COLLECTION) },
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)UMK3_DS_CYRAX_COLLECTION, ARRAYSIZE(UMK3_DS_CYRAX_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3_DS_KUNGLAO_COLLECTION, ARRAYSIZE(UMK3_DS_KUNGLAO_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3_DS_KABAL_COLLECTION, ARRAYSIZE(UMK3_DS_KABAL_COLLECTION) },
    { L"Sheeva", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHEEVA_COLLECTION, ARRAYSIZE(UMK3_DS_SHEEVA_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHANG_COLLECTION, ARRAYSIZE(UMK3_DS_SHANG_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3_DS_LIUKANG_COLLECTION, ARRAYSIZE(UMK3_DS_LIUKANG_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_COLLECTION, ARRAYSIZE(UMK3_DS_SMOKE_COLLECTION) },
    { L"Human Smoke", DESC_NODETYPE_TREE, (void*)UMK3_DS_SMOKE_HUMAN_COLLECTION, ARRAYSIZE(UMK3_DS_SMOKE_HUMAN_COLLECTION) },

    { L"Classic Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_DS_SUBZERO_COLLECTION, ARRAYSIZE(UMK3_DS_SUBZERO_COLLECTION) },
    { L"Ermac", DESC_NODETYPE_TREE, (void*)UMK3_DS_ERMAC_COLLECTION, ARRAYSIZE(UMK3_DS_ERMAC_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)UMK3_DS_MILEENA_COLLECTION, ARRAYSIZE(UMK3_DS_MILEENA_COLLECTION) },

    { L"Motaro", DESC_NODETYPE_TREE, (void*)UMK3_DS_MOTARO_COLLECTION, ARRAYSIZE(UMK3_DS_MOTARO_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)UMK3_DS_SHAOKAHN_COLLECTION, ARRAYSIZE(UMK3_DS_SHAOKAHN_COLLECTION) },

#ifdef GOOD_LUCK_SEARCHER
    // No idea where this is
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)UMK3_DS_NOOB_COLLECTION, ARRAYSIZE(UMK3_DS_NOOB_COLLECTION) },
#endif
    { L"Rain", DESC_NODETYPE_TREE, (void*)UMK3_DS_RAIN_COLLECTION, ARRAYSIZE(UMK3_DS_RAIN_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)UMK3_DS_BONUS_COLLECTION, ARRAYSIZE(UMK3_DS_BONUS_COLLECTION) },
};

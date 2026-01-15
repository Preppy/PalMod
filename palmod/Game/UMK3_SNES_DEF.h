#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to UMK3_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> UMK3_SNES_IMGIDS_USED =
{
    indexUMK3Sprites_Cyrax,              // 0xC9
    indexUMK3Sprites_Ermac,              // 0xCA
    indexUMK3Sprites_Jade,               // 0xCB
    indexUMK3Sprites_Jax,                // 0xCC
    indexUMK3Sprites_Kabal,              // 0xCD
    indexUMK3Sprites_Kano,               // 0xCE
    indexUMK3Sprites_Kitana,             // 0xCF
    indexUMK3Sprites_KungLao,            // 0xD0
    indexUMK3Sprites_LiuKang,            // 0xD1
    indexUMK3Sprites_Mileena,            // 0xD2
    indexUMK3Sprites_Motaro,             // 0xD3
    indexUMK3Sprites_Nightwolf,          // 0xD4
    indexUMK3Sprites_NoobSaibot,         // 0xD5
    indexUMK3Sprites_Rain,               // 0xD6
    indexUMK3Sprites_Reptile,            // 0xD7
    indexUMK3Sprites_Scorpion,           // 0xD8
    indexUMK3Sprites_Sektor,             // 0xD9
    indexUMK3Sprites_ShangTsung,         // 0xDA
    indexUMK3Sprites_ShaoKahn,           // 0xDB
    indexUMK3Sprites_Sheeva,             // 0xDC
    indexUMK3Sprites_Sindel,             // 0xDD
    indexUMK3Sprites_Smoke,              // 0xDE
    indexUMK3Sprites_SmokeHuman,         // 0xDF
    indexUMK3Sprites_Sonya,              // 0xE0
    indexUMK3Sprites_Stryker,            // 0xE1
    indexUMK3Sprites_SubZero,            // 0xE2
    indexUMK3Sprites_SubZeroClassic,     // 0xE3
    indexUMK3Sprites_Bonus,              // 0xE4
    indexUMK3Sprites_Stages,             // 0xE5
};

const sGame_PaletteDataset UMK3_SNES_CYRAX_PALETTES_P1[] =
{
    { L"Cyrax P1", 0x3EAD0F, 0x3EAD2F, indexUMK3Sprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_CYRAX_PALETTES_P2[] =
{
    { L"Cyrax P2", 0x3EAD2F, 0x3EAD4F, indexUMK3Sprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_ERMAC_PALETTES_P1[] =
{
    { L"Ermac P1", 0x3EAF2F, 0x3EAF4F, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_ERMAC_PALETTES_P2[] =
{
    { L"Ermac P2", 0x8C44D, 0x8C46D, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_JADE_PALETTES_P1[] =
{
    { L"Jade P1", 0x3ED46D, 0x3ED48D, indexUMK3Sprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_JADE_PALETTES_P2[] =
{
    { L"Jade P2", 0x3ED4CD, 0x3ED4ED, indexUMK3Sprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_JAX_PALETTES_P1[] =
{
    { L"Jax P1", 0x3FB8D0, 0x3FB8F0, indexUMK3Sprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_JAX_PALETTES_P2[] =
{
    { L"Jax P2", 0x3FB8F0, 0x3FB910, indexUMK3Sprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KABAL_PALETTES_P1[] =
{
    { L"Kabal P1", 0x3FA21B, 0x3FA23B, indexUMK3Sprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KABAL_PALETTES_P2[] =
{
    { L"Kabal P2", 0x3FA23B, 0x3FA25B, indexUMK3Sprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KANO_PALETTES_P1[] =
{
    { L"Kano P1", 0xBFF20, 0xBFF40, indexUMK3Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KANO_PALETTES_P2[] =
{
    { L"Kano P2", 0xBFF00, 0xBFF20, indexUMK3Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KITANA_PALETTES_P1[] =
{
    { L"Kitana P1", 0x3ED48D, 0x3ED4AD, indexUMK3Sprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KITANA_PALETTES_P2[] =
{
    { L"Kitana P2", 0x3ED4ED, 0x3ED50D, indexUMK3Sprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KUNGLAO_PALETTES_P1[] =
{
    { L"Kung Lao P1", 0x3F9290, 0x3F92B0, indexUMK3Sprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_KUNGLAO_PALETTES_P2[] =
{
    { L"Kung Lao P2", 0x3F92B0, 0x3F92D0, indexUMK3Sprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0x3FA2DB, 0x3FA2FB, indexUMK3Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x3FA2FB, 0x3FA31B, indexUMK3Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_MILEENA_PALETTES_P1[] =
{
    { L"Mileena P1", 0x3ED44d, 0x3ED46d, indexUMK3Sprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_MILEENA_PALETTES_P2[] =
{
    { L"Mileena P2", 0x3ED4Ad, 0x3ED4Cd, indexUMK3Sprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_NIGHTWOLF_PALETTES_P1[] =
{
    { L"Nightwolf P1", 0x3FB650, 0x3FB670, indexUMK3Sprites_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_NIGHTWOLF_PALETTES_P2[] =
{
    { L"Nightwolf P2", 0x3FB670, 0x3FB690, indexUMK3Sprites_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_NOOB_PALETTES_P1[] =
{
    { L"Noob Saibot P1", 0x3EAF8F, 0x3EAFAF, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_NOOB_PALETTES_P2[] =
{
    { L"Noob Saibot P2", 0x8C4ED, 0x8C50D, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_RAIN_PALETTES_P1[] =
{
    { L"Rain P1", 0x3EAFAF, 0x3EAFCF, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_RAIN_PALETTES_P2[] =
{
    { L"Rain P2", 0x8C4AD, 0x8C4CD, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_REPTILE_PALETTES_P1[] =
{
    { L"Reptile P1", 0x3EAFCF, 0x3EAFEF, indexUMK3Sprites_Reptile, 0x00 },
    { L"Reptile P1 FX", 0x3EAFEF, 0x3EB00F },
};

const sGame_PaletteDataset UMK3_SNES_REPTILE_PALETTES_P2[] =
{
    { L"Reptile P2", 0x8C4CD, 0x8C4ED, indexUMK3Sprites_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0x3EAF0F, 0x3EAF2F, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x8C42d, 0x8C44d, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SEKTOR_PALETTES_P1[] =
{
    { L"Sektor P1", 0x3EACCF, 0x3EACEF, indexUMK3Sprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SEKTOR_PALETTES_P2[] =
{
    { L"Sektor P2", 0x3EACEF, 0x3EAD0F, indexUMK3Sprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SHANG_PALETTES_P1[] =
{
    { L"Shang Tsung P1", 0xDFF00, 0xDFF20, indexUMK3Sprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SHANG_PALETTES_P2[] =
{
    { L"Shang Tsung P2", 0xDFF20, 0xDFF40, indexUMK3Sprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SINDEL_PALETTES_P1[] =
{
    { L"Sindel P1", 0x15FF00, 0x15FF20, indexUMK3Sprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SINDEL_PALETTES_P2[] =
{
    { L"Sindel P2", 0x15FF20, 0x15FF40, indexUMK3Sprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SMOKE_PALETTES_P1[] =
{
    { L"Smoke P1", 0x3EAD6F, 0x3EAD8F, indexUMK3Sprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SMOKE_PALETTES_P2[] =
{
    { L"Smoke P2", 0x3EAD8F, 0x3EADAF, indexUMK3Sprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SMOKE_HUMAN_PALETTES_P1[] =
{
    { L"Smoke (Human) P1", 0x3EAF6F, 0x3EAF8F, indexUMK3Sprites_SmokeHuman, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SMOKE_HUMAN_PALETTES_P2[] =
{
    { L"Smoke (Human) P2", 0x8C48D, 0x8C4AD, indexUMK3Sprites_SmokeHuman, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0xCFF00, 0xCFF20, indexUMK3Sprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0xCFF20, 0xCFF40, indexUMK3Sprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_STRYKER_PALETTES_P1[] =
{
    { L"Stryker P1", 0xAFF00, 0xAFF20, indexUMK3Sprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_STRYKER_PALETTES_P2[] =
{
    { L"Stryker P2", 0xAFF20, 0xAFF40, indexUMK3Sprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SUBZERO_HUMAN_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0x3F91B0, 0x3F91D0, indexUMK3Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SUBZERO_HUMAN_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x3F91D0, 0x3F91F0, indexUMK3Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero (Original) P1", 0x3EAF4F, 0x3EAF6F, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero (Original) P2", 0x8C46D, 0x8C48D, indexUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_MOTARO_PALETTES[] =
{
    { L"Motaro", 0x3FCCAE, 0x3FCCCE, indexUMK3Sprites_Motaro, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_SHAOKAHN_PALETTES[] =
{
    { L"Shao Khan", 0x3FC279, 0x3FC299, indexUMK3Sprites_ShaoKahn, 0x00 },
};

const sGame_PaletteDataset UMK3_SNES_STAGE_PALETTES_DESERT[] =
{
    { L"Jade's Desert", 0x6549F, 0x6555F },
};

const sGame_PaletteDataset UMK3_SNES_STAGE_PALETTES_SCORPION[] =
{
    { L"Scorpion's Lair", 0x55865, 0x55945 },
};

const sGame_PaletteDataset UMK3_SNES_STAGE_PALETTES_KAVE[] =
{
    { L"Kahn's Kave", 0x166D3, 0x16793 },
};

const sGame_PaletteDataset UMK3_SNES_STAGE_PALETTES_THEPIT[] =
{
    { L"The Pit 3", 0x7155, 0x7215 },
};

const sGame_PaletteDataset UMK3_SNES_STAGE_PALETTES_WATERFRONT[] =
{
    { L"River Kombat (Waterfront)", 0x83D0C, 0x83DEC },
};

const sGame_PaletteDataset UMK3_SNES_BONUS_PALETTES_SECRETGAME[] =
{
    { L"Enemies", 0x3f071b, 0x3f073b, indexUMK3Sprites_Bonus, 0x02, &pairFullyLinkedNode },
    { L"Main Ships", 0x3f073b, 0x3f075b, indexUMK3Sprites_Bonus, 0x03 },
    { L"Explosions", 0x3f075b, 0x3f077b, indexUMK3Sprites_Bonus, 0x04 },
    { L"Background", 0x38c384, 0x38c38c, indexUMK3Sprites_Bonus, 0x05 },
};

const sGame_PaletteDataset UMK3_SNES_BONUS_PALETTES_BONUS[] =
{
    { L"Title", 0x7797A, 0x77A7A },
    { L"Options Title", 0x96559, 0x965F9 },
    { L"Continue Screen", 0x87E88, 0x87EA8 },
    { L"Ultimate Mortal Kombat Screen", 0x87EAC, 0x87ECC, indexUMK3Sprites_Bonus, 0x01 },

    { L"Tower Select/Lost 1/2", 0x45610, 0x45690, indexUMK3Sprites_Stages, 0x00, &pairNext },
    { L"Tower Select/Lost 2/2", 0x45690, 0x456F0, indexUMK3Sprites_Stages, 0x01, &pairPrevious },
    { L"\"FIGHT!\" text", 0x3F9110, 0x3F9130 },
    { L"\"FIGHT!\" text flash", 0x3F9130, 0x3F9150 },
    { L"Frozen Robots", 0x3EAD4F, 0x3EAD6F, indexUMK3Sprites_Sektor, 0x00 },
    { L"Normal Blood", 0x3FB970, 0x3FB990, indexUMK3Sprites_Bonus, 0x00 },
    { L"Robot Blood", 0x3FB990, 0x3FB9B0, indexUMK3Sprites_Bonus, 0x00 },
    { L"Reptile's Blood", 0x3FB9B0, 0x3FB9D0, indexUMK3Sprites_Bonus, 0x00 },
    { L"Frozen Ninjas", 0x3EB0CF, 0x3EB0EF },

    { L"Select Coin Icon", 0x3ED76D, 0x3ED78D },
};

const sDescTreeNode UMK3_SNES_CYRAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_CYRAX_PALETTES_P1, ARRAYSIZE(UMK3_SNES_CYRAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_CYRAX_PALETTES_P2, ARRAYSIZE(UMK3_SNES_CYRAX_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_ERMAC_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_ERMAC_PALETTES_P1, ARRAYSIZE(UMK3_SNES_ERMAC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_ERMAC_PALETTES_P2, ARRAYSIZE(UMK3_SNES_ERMAC_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_JADE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_JADE_PALETTES_P1, ARRAYSIZE(UMK3_SNES_JADE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_JADE_PALETTES_P2, ARRAYSIZE(UMK3_SNES_JADE_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_JAX_PALETTES_P1, ARRAYSIZE(UMK3_SNES_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_JAX_PALETTES_P2, ARRAYSIZE(UMK3_SNES_JAX_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_KABAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KABAL_PALETTES_P1, ARRAYSIZE(UMK3_SNES_KABAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KABAL_PALETTES_P2, ARRAYSIZE(UMK3_SNES_KABAL_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KANO_PALETTES_P1, ARRAYSIZE(UMK3_SNES_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KANO_PALETTES_P2, ARRAYSIZE(UMK3_SNES_KANO_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KITANA_PALETTES_P1, ARRAYSIZE(UMK3_SNES_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KITANA_PALETTES_P2, ARRAYSIZE(UMK3_SNES_KITANA_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KUNGLAO_PALETTES_P1, ARRAYSIZE(UMK3_SNES_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KUNGLAO_PALETTES_P2, ARRAYSIZE(UMK3_SNES_KUNGLAO_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_LIUKANG_PALETTES_P1, ARRAYSIZE(UMK3_SNES_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_LIUKANG_PALETTES_P2, ARRAYSIZE(UMK3_SNES_LIUKANG_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_MILEENA_PALETTES_P1, ARRAYSIZE(UMK3_SNES_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_MILEENA_PALETTES_P2, ARRAYSIZE(UMK3_SNES_MILEENA_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_NIGHTWOLF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_NIGHTWOLF_PALETTES_P1, ARRAYSIZE(UMK3_SNES_NIGHTWOLF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_NIGHTWOLF_PALETTES_P2, ARRAYSIZE(UMK3_SNES_NIGHTWOLF_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_NOOB_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_NOOB_PALETTES_P1, ARRAYSIZE(UMK3_SNES_NOOB_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_NOOB_PALETTES_P2, ARRAYSIZE(UMK3_SNES_NOOB_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_RAIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_RAIN_PALETTES_P1, ARRAYSIZE(UMK3_SNES_RAIN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_RAIN_PALETTES_P2, ARRAYSIZE(UMK3_SNES_RAIN_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_REPTILE_COLLECTION[] =
{
    // These are unequal, so opt out of pairing via affixing _
    { L"P1_", DESC_NODETYPE_TREE, (void*)UMK3_SNES_REPTILE_PALETTES_P1, ARRAYSIZE(UMK3_SNES_REPTILE_PALETTES_P1) },
    { L"P2_", DESC_NODETYPE_TREE, (void*)UMK3_SNES_REPTILE_PALETTES_P2, ARRAYSIZE(UMK3_SNES_REPTILE_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SCORPION_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SCORPION_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SCORPION_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SEKTOR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SEKTOR_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SEKTOR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SEKTOR_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SEKTOR_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SHANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SHANG_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SHANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SHANG_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SHANG_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SINDEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SINDEL_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SINDEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SINDEL_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SINDEL_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SMOKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SMOKE_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SMOKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SMOKE_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SMOKE_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SMOKE_HUMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SMOKE_HUMAN_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SMOKE_HUMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SMOKE_HUMAN_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SMOKE_HUMAN_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SONYA_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SONYA_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SONYA_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_STRYKER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STRYKER_PALETTES_P1, ARRAYSIZE(UMK3_SNES_STRYKER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STRYKER_PALETTES_P2, ARRAYSIZE(UMK3_SNES_STRYKER_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SUBZERO_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SUBZERO_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SUBZERO_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_SUBZERO_HUMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SUBZERO_HUMAN_PALETTES_P1, ARRAYSIZE(UMK3_SNES_SUBZERO_HUMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SUBZERO_HUMAN_PALETTES_P2, ARRAYSIZE(UMK3_SNES_SUBZERO_HUMAN_PALETTES_P2) },
};

const sDescTreeNode UMK3_SNES_MOTARO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_SNES_MOTARO_PALETTES, ARRAYSIZE(UMK3_SNES_MOTARO_PALETTES) },
};

const sDescTreeNode UMK3_SNES_SHAOKAHN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SHAOKAHN_PALETTES, ARRAYSIZE(UMK3_SNES_SHAOKAHN_PALETTES) },
};

const sDescTreeNode UMK3_SNES_STAGE_COLLECTION[] =
{
    { L"Jade's Desert", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STAGE_PALETTES_DESERT, ARRAYSIZE(UMK3_SNES_STAGE_PALETTES_DESERT) },
    { L"Scorpion's Lair", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STAGE_PALETTES_SCORPION, ARRAYSIZE(UMK3_SNES_STAGE_PALETTES_SCORPION) },
    { L"Kahn's Kave", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STAGE_PALETTES_KAVE, ARRAYSIZE(UMK3_SNES_STAGE_PALETTES_KAVE) },
    { L"The Pit 3", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STAGE_PALETTES_THEPIT, ARRAYSIZE(UMK3_SNES_STAGE_PALETTES_THEPIT) },
    { L"River Kombat (Waterfront)", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STAGE_PALETTES_WATERFRONT, ARRAYSIZE(UMK3_SNES_STAGE_PALETTES_WATERFRONT) },
};

const sDescTreeNode UMK3_SNES_BONUS_COLLECTION[] =
{
    { L"Hidden Game", DESC_NODETYPE_TREE, (void*)UMK3_SNES_BONUS_PALETTES_SECRETGAME, ARRAYSIZE(UMK3_SNES_BONUS_PALETTES_SECRETGAME) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)UMK3_SNES_BONUS_PALETTES_BONUS, ARRAYSIZE(UMK3_SNES_BONUS_PALETTES_BONUS) },
};

const sDescTreeNode UMK3_SNES_UNITS[] =
{
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)UMK3_SNES_CYRAX_COLLECTION, ARRAYSIZE(UMK3_SNES_CYRAX_COLLECTION) },
    { L"Ermac", DESC_NODETYPE_TREE, (void*)UMK3_SNES_ERMAC_COLLECTION, ARRAYSIZE(UMK3_SNES_ERMAC_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)UMK3_SNES_JADE_COLLECTION, ARRAYSIZE(UMK3_SNES_JADE_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3_SNES_JAX_COLLECTION, ARRAYSIZE(UMK3_SNES_JAX_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KABAL_COLLECTION, ARRAYSIZE(UMK3_SNES_KABAL_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KANO_COLLECTION, ARRAYSIZE(UMK3_SNES_KANO_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KITANA_COLLECTION, ARRAYSIZE(UMK3_SNES_KITANA_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3_SNES_KUNGLAO_COLLECTION, ARRAYSIZE(UMK3_SNES_KUNGLAO_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3_SNES_LIUKANG_COLLECTION, ARRAYSIZE(UMK3_SNES_LIUKANG_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)UMK3_SNES_MILEENA_COLLECTION, ARRAYSIZE(UMK3_SNES_MILEENA_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3_SNES_NIGHTWOLF_COLLECTION, ARRAYSIZE(UMK3_SNES_NIGHTWOLF_COLLECTION) },
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)UMK3_SNES_NOOB_COLLECTION, ARRAYSIZE(UMK3_SNES_NOOB_COLLECTION) },
    { L"Rain", DESC_NODETYPE_TREE, (void*)UMK3_SNES_RAIN_COLLECTION, ARRAYSIZE(UMK3_SNES_RAIN_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)UMK3_SNES_REPTILE_COLLECTION, ARRAYSIZE(UMK3_SNES_REPTILE_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SCORPION_COLLECTION, ARRAYSIZE(UMK3_SNES_SCORPION_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SEKTOR_COLLECTION, ARRAYSIZE(UMK3_SNES_SEKTOR_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SHANG_COLLECTION, ARRAYSIZE(UMK3_SNES_SHANG_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SINDEL_COLLECTION, ARRAYSIZE(UMK3_SNES_SINDEL_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SMOKE_COLLECTION, ARRAYSIZE(UMK3_SNES_SMOKE_COLLECTION) },
    { L"Smoke (Human)", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SMOKE_HUMAN_COLLECTION, ARRAYSIZE(UMK3_SNES_SMOKE_HUMAN_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SONYA_COLLECTION, ARRAYSIZE(UMK3_SNES_SONYA_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STRYKER_COLLECTION, ARRAYSIZE(UMK3_SNES_STRYKER_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SUBZERO_COLLECTION, ARRAYSIZE(UMK3_SNES_SUBZERO_COLLECTION) },
    { L"Sub-Zero (Human)", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SUBZERO_HUMAN_COLLECTION, ARRAYSIZE(UMK3_SNES_SUBZERO_HUMAN_COLLECTION) },

    { L"Motaro", DESC_NODETYPE_TREE, (void*)UMK3_SNES_MOTARO_COLLECTION, ARRAYSIZE(UMK3_SNES_MOTARO_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)UMK3_SNES_SHAOKAHN_COLLECTION, ARRAYSIZE(UMK3_SNES_SHAOKAHN_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)UMK3_SNES_STAGE_COLLECTION, ARRAYSIZE(UMK3_SNES_STAGE_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)UMK3_SNES_BONUS_COLLECTION, ARRAYSIZE(UMK3_SNES_BONUS_COLLECTION) },
};

#pragma once

const std::vector<uint16_t> UMK3_A_IMGIDS_USED =
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
    indexUMK3ArcadeSprites_ShaoKahn,    // 0xf1
    indexUMK3ArcadeSprites_NoobSaibot,  // 0xf2
    indexUMK3ArcadeSprites_Rain,        // 0xf3
    indexUMK3ArcadeSprites_Stages,      // 0xf4
    indexUMK3ArcadeSprites_Bonus,       // 0xf5
};

const sGame_PaletteDataset UMK3_A_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0xb188c, 0xb190c, indexUMK3ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_A_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0xb190e, 0xb198e, indexUMK3ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KUNGLAO_PALETTES_P1[] =
{
    { L"Kung Lao P1", 0xb0bfe, 0xb0c7e, indexUMK3ArcadeSprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KUNGLAO_PALETTES_P2[] =
{
    { L"Kung Lao P2", 0xb0c80, 0xb0d00, indexUMK3ArcadeSprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3_A_REPTILE_PALETTES_P1[] =
{
    { L"Reptile P1", 0xb6c34, 0xb6cb4, indexUMK3ArcadeSprites_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_A_REPTILE_PALETTES_P2[] =
{
    { L"Reptile P2", 0x619e8, 0x61a68, indexUMK3ArcadeSprites_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0xb0328, 0xb03a8, indexUMK3ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0xb03aa, 0xb042a, indexUMK3ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SHANGTSUNG_PALETTES_P1[] =
{
    { L"Shang Tsung P1", 0xb10be, 0xb113e, indexUMK3ArcadeSprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SHANGTSUNG_PALETTES_P2[] =
{
    { L"Shang Tsung P2", 0xb1140, 0xb11c0, indexUMK3ArcadeSprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KITANA_PALETTES_P1[] =
{
    { L"Kitana P1", 0xb69a6, 0xb6a26, indexUMK3ArcadeSprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KITANA_PALETTES_P2[] =
{
    { L"Kitana P2", 0x617e0, 0x61860, indexUMK3ArcadeSprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3_A_JAX_PALETTES_P1[] =
{
    { L"Jax P1", 0xb00de, 0xb015e, indexUMK3ArcadeSprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_A_JAX_PALETTES_P2[] =
{
    { L"Jax P2", 0xb0160, 0xb01e0, indexUMK3ArcadeSprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3_A_MILEENA_PALETTES_P1[] =
{
    { L"Mileena P1", 0xb6a28, 0xb6aa8, indexUMK3ArcadeSprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_A_MILEENA_PALETTES_P2[] =
{
    { L"Mileena P2", 0x61862, 0x618e2, indexUMK3ArcadeSprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0xb6bb2, 0xb6c32, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x61966, 0x619e6, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0xaff38, 0xaffb8, indexUMK3ArcadeSprites_Sonya, 0x00 },
    { L"Ring Toss P1", 0xb003c, 0xb00bc, indexUMK3ArcadeSprites_Sonya, 0x04 },
};

const sGame_PaletteDataset UMK3_A_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0xaffba, 0xb003a, indexUMK3ArcadeSprites_Sonya, 0x00 },
    { L"Ring Toss P2", 0x35cf4, 0x35d74, indexUMK3ArcadeSprites_Sonya, 0x04 },
};

const sGame_PaletteDataset UMK3_A_NIGHTWOLF_PALETTES_P1[] =
{
    { L"Nightwolf P1", 0xb0268, 0xb02e8, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3_A_NIGHTWOLF_PALETTES_P2[] =
{
    { L"Nightwolf P2", 0x60dc6, 0x60e46, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3_A_JADE_PALETTES_P1[] =
{
    { L"Jade P1", 0xb6aaa, 0xb6b2a, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_A_JADE_PALETTES_P2[] =
{
    { L"Jade P2", 0x618e4, 0x61964, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KANO_PALETTES_P1[] =
{
    { L"Kano P1", 0xafe02, 0xafe82, indexUMK3ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KANO_PALETTES_P2[] =
{
    { L"Kano P2", 0xafe84, 0xaff04, indexUMK3ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3_A_ERMAC_PALETTES_P1[] =
{
    { L"Ermac P1", 0x60bbe, 0x60c3e, indexUMK3ArcadeSprites_Ermac, 0x00 },
};

const sGame_PaletteDataset UMK3_A_ERMAC_PALETTES_P2[] =
{
    { L"Ermac P2", 0x61a6a, 0x61aea, indexUMK3ArcadeSprites_Ermac, 0x00 },
};

const sGame_PaletteDataset UMK3_A_CLASSUB_PALETTES_P1[] =
{
    { L"Classic Sub-Zero P1", 0x60c40, 0x60cc0, indexUMK3ArcadeSprites_ClassicSubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_A_CLASSUB_PALETTES_P2[] =
{
    { L"Classic Sub-Zero P2", 0x61aec, 0x61b6c, indexUMK3ArcadeSprites_ClassicSubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SEKTOR_PALETTES_P1[] =
{
    { L"Sektor P1", 0xb07f8, 0xb0878, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SEKTOR_PALETTES_P2[] =
{
    { L"Sektor P2", 0xb087a, 0xb08fa, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SINDEL_PALETTES_P1[] =
{
    { L"Sindel P1", 0xb061e, 0xb069c, indexUMK3ArcadeSprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SINDEL_PALETTES_P2[] =
{
    { L"Sindel P2", 0x60ec8, 0x60f46, indexUMK3ArcadeSprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3_A_STRYKER_PALETTES_P1[] =
{
    { L"Stryker P1", 0xb04f2, 0xb0570, indexUMK3ArcadeSprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_A_STRYKER_PALETTES_P2[] =
{
    { L"Stryker P2", 0x60e48, 0x60ec6, indexUMK3ArcadeSprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3_A_CYRAX_PALETTES_P1[] =
{
    { L"Cyrax P1", 0xb08fc, 0xb097c, indexUMK3ArcadeSprites_Cyrax, 0x00 },
};

const sGame_PaletteDataset UMK3_A_CYRAX_PALETTES_P2[] =
{
    { L"Cyrax P2", 0xb097e, 0xb09fe, indexUMK3ArcadeSprites_Cyrax, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KABAL_PALETTES_P1[] =
{
    { L"Kabal P1", 0xb0da2, 0xb0e22, indexUMK3ArcadeSprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_A_KABAL_PALETTES_P2[] =
{
    { L"Kabal P2", 0xb0e24, 0xb0ea4, indexUMK3ArcadeSprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SHEEVA_PALETTES_P1[] =
{
    { L"Sheeva P1", 0xb0f9a, 0xb101a, indexUMK3ArcadeSprites_Sheeva, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SHEEVA_PALETTES_P2[] =
{
    { L"Sheeva P2", 0xb101c, 0xb109c, indexUMK3ArcadeSprites_Sheeva, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SMOKE_PALETTES_P1[] =
{
    { L"Smoke P1", 0x60cc2, 0x60d42, indexUMK3ArcadeSprites_Smoke, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SMOKE_PALETTES_P2[] =
{
    { L"Smoke P2", 0x60d44, 0x60dc4, indexUMK3ArcadeSprites_Smoke, 0x00 },
};

const sGame_PaletteDataset UMK3_A_SHAOKAHN_PALETTES[] =
{
    { L"Shao Kahn", 0xb1b86, 0xb1c06, indexMK2ASprites_ShaoKahn, 0x00 },
};

const sGame_PaletteDataset UMK3_A_HUMANSMOKE_PALETTES[] =
{
    { L"Human Smoke", 0x61b6e, 0x61bee, indexUMK3ArcadeSprites_HumanSmoke, 0x00 },
};

const sGame_PaletteDataset UMK3_A_MOTARO_PALETTES[] =
{
    { L"Motaro", 0xb1a10, 0xb1a8e, indexUMK3ArcadeSprites_Motaro, 0x00 },
    { L"Projectile", 0xb1a90, 0xb1b08 },
    { L"Teleport", 0xb1b0a, 0xb1b84 },
};

const sGame_PaletteDataset UMK3_A_NOOB_PALETTES[] =
{
    { L"Noob Saibot", 0x60b3c, 0x60bbc, indexUMK3ArcadeSprites_NoobSaibot, 0x00 },
};

const sGame_PaletteDataset UMK3_A_RAIN_PALETTES[] =
{
    { L"Rain", 0x67658, 0x676d8, indexUMK3ArcadeSprites_Rain, 0x00 },
};

const sGame_PaletteDataset UMK3_A_Kitana_Extras[] =
{
    { L"Gibs",      0xba6e6, 0xba766, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality",  0xb7e76, 0xb7eb6, indexUMK3ArcadeSprites_Kitana, 0x02 },
    { L"Animality", 0xbb458, 0xbb46a, indexUMK3ArcadeSprites_Kitana, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Kitana_P3[] =
{
    { L"Kitana P3", 0xd4414, 0xd4494, indexUMK3ArcadeSprites_Kitana, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Kitana_Extras[] =
{
    { L"Gibs P1",   0xba6e6, 0xba766, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Gibs P2",   0xc1788, 0xc1808, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Gibs P3",   0xd7ec2, 0xd7f42, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality",  0xb7e76, 0xb7eb6, indexUMK3ArcadeSprites_Kitana, 0x02 },
    { L"Animality", 0xbb458, 0xbb46a, indexUMK3ArcadeSprites_Kitana, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Reptile_Extras[] =
{
    { L"Gibs",      0x42700, 0x42780, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x58510, 0x58550, indexUMK3ArcadeSprites_Reptile, 0x02 },
    { L"Animality", 0xbb4d2, 0xbb4ea, indexUMK3ArcadeSprites_Reptile, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Reptile_P3[] =
{
    { L"Reptile P3", 0xd461c, 0xd469c, indexUMK3ArcadeSprites_Reptile, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Reptile_Extras[] =
{
    { L"Gibs P1",   0x42700, 0x42780, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P2",   0xc1706, 0xc1786, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P3",   0xd80ca, 0xd814a, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x58510, 0x58550, indexUMK3ArcadeSprites_Reptile, 0x02 },
    { L"Animality", 0xbb4d2, 0xbb4ea, indexUMK3ArcadeSprites_Reptile, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Sonya_Extras[] =
{
    { L"Gibs",      0xba45e, 0xba4de, indexUMK3ArcadeSprites_Sonya, 0x01 },
    { L"Babality",  0xb7b22, 0xb7b62, indexUMK3ArcadeSprites_Sonya, 0x02 },
    { L"Animality", 0xb8d3c, 0xb8d4a, indexUMK3ArcadeSprites_Sonya, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0xaff38, 0xaffb8, indexUMK3ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0xaffba, 0xb003a, indexUMK3ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Sonya_P3[] =
{
    { L"Sonya P3", 0xd3cfc, 0xd3d7c, indexUMK3ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Sonya_Extras[] =
{
    { L"Gibs P1",   0xba45e, 0xba4de, indexUMK3ArcadeSprites_Sonya, 0x01 },
    { L"Gibs P2",   0xd6fa2, 0xd7022, indexUMK3ArcadeSprites_Sonya, 0x01 },
    { L"Gibs P3",   0xd77c4, 0xd7844, indexUMK3ArcadeSprites_Sonya, 0x01 },
    { L"Babality",  0xb7b22, 0xb7b62, indexUMK3ArcadeSprites_Sonya, 0x02 },
    { L"Animality", 0xb8d3c, 0xb8d4a, indexUMK3ArcadeSprites_Sonya, 0x03 },
    { L"Ring Toss P1/P3", 0xb003c, 0xb00bc, indexUMK3ArcadeSprites_Sonya, 0x04 },
    { L"Ring Toss P2", 0x35cf4, 0x35d74, indexUMK3ArcadeSprites_Sonya, 0x04 },
};

const sGame_PaletteDataset UMK3_A_Jax_Extras[] =
{
    { L"Gibs P1",   0xba154, 0xba1d2, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Gibs P2",   0x42804, 0x42882, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Babality",  0xb7ba6, 0xb7be2, indexUMK3ArcadeSprites_Jax, 0x02 },
    { L"Animality", 0xb8d4c, 0xb8d5c, indexUMK3ArcadeSprites_Jax, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Jax_P3[] =
{
    { L"Jax P3", 0xd3d7e, 0xd3dfe, indexUMK3ArcadeSprites_Jax, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Jax_Extras[] =
{
    { L"Gibs P1",   0xba154, 0xba1d2, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Gibs P2",   0x42804, 0x42882, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Gibs P3",   0xd7846, 0xd78c2, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Babality",  0xb7ba6, 0xb7be2, indexUMK3ArcadeSprites_Jax, 0x02 },
    { L"Animality", 0xb8d4c, 0xb8d5c, indexUMK3ArcadeSprites_Jax, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Nightwolf_Extras[] =
{
    { L"Gibs",                  0xba0d2, 0xba152, indexUMK3ArcadeSprites_Nightwolf, 0x01 },
    { L"Babality",              0xb7d6e, 0xb7dae, indexUMK3ArcadeSprites_Nightwolf, 0x02 },
    { L"Animality",             0xb8d70, 0xb8d80, indexUMK3ArcadeSprites_Nightwolf, 0x03 },
    { L"Shoulder Charge",       0x6a4b2, 0x6a532, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
    { L"Raiden Transformation", 0xb8e48, 0xb8ec8 },
    { L"Arcade Cabinet",        0xbabf0, 0xbac70 },
};

const sGame_PaletteDataset UMK3Plus_A_Nightwolf_P3[] =
{
    { L"Nightwolf P3", 0xd3e00, 0xd3e80, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Nightwolf_Extras[] =
{
    { L"Gibs P1",               0xba0d2, 0xba152, indexUMK3ArcadeSprites_Nightwolf, 0x01 },
    { L"Gibs P2",               0xd7024, 0xd70a4, indexUMK3ArcadeSprites_Nightwolf, 0x01 },
    { L"Gibs P3",               0xd78c4, 0xd7944, indexUMK3ArcadeSprites_Nightwolf, 0x01 },
    { L"Babality",              0xb7d6e, 0xb7dae, indexUMK3ArcadeSprites_Nightwolf, 0x02 },
    { L"Animality",             0xb8d70, 0xb8d80, indexUMK3ArcadeSprites_Nightwolf, 0x03 },
    { L"Shoulder Charge",       0x6a4b2, 0x6a532, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
    { L"Raiden Transformation", 0xb8e48, 0xb8ec8 },
    { L"Arcade Cabinet",        0xbabf0, 0xbac70 },
};

const sGame_PaletteDataset UMK3_A_Jade_Extras[] =
{
    { L"Gibs",          0x425fc, 0x4267c, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality",      0x58552, 0x58592, indexUMK3ArcadeSprites_Kitana, 0x02 },
    { L"Animality",     0xbb46c, 0xbb48c, indexUMK3ArcadeSprites_Jade, 0x03 },
    { L"Shadow Kick",   0x4a21e, 0x4a29e, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Jade_P3[] =
{
    { L"Jade P3", 0xd4496, 0xd4516, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Jade_Extras[] =
{
    { L"Gibs P1",       0x425fc, 0x4267c, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Gibs P2",       0xd7428, 0xd74a8, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Gibs P3",       0xd7f44, 0xd7fc4, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality",      0x58552, 0x58592, indexUMK3ArcadeSprites_Kitana, 0x02 },
    { L"Animality",     0xbb46c, 0xbb48c, indexUMK3ArcadeSprites_Jade, 0x03 },
    { L"Shadow Kick",   0x4a21e, 0x4a29e, indexUMK3ArcadeSprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_A_Scorpion_Extras[] =
{
    { L"Gibs",      0x4257a, 0x425fa, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x5848c, 0x584cc, indexUMK3ArcadeSprites_Reptile, 0x02 },
    { L"Animality", 0xbb52a, 0xbb552, indexUMK3ArcadeSprites_Scorpion, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Scorpion_P3[] =
{
    { L"Scorpion P3", 0xd459a, 0xd461a, indexUMK3ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Scorpion_Extras[] =
{
    { L"Gibs P1",   0x4257a, 0x425fa, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P2",   0xd752c, 0xd75ac, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P3",   0xd8048, 0xd80c8, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x5848c, 0x584cc, indexUMK3ArcadeSprites_Reptile, 0x02 },
    { L"Animality", 0xbb52a, 0xbb552, indexUMK3ArcadeSprites_Scorpion, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Kano_Extras[] =
{
    { L"Gibs",      0xba258, 0xba2d8, indexUMK3ArcadeSprites_Kano, 0x01 },
    { L"Babality",  0xb7a60, 0xb7a9c, indexUMK3ArcadeSprites_Kano, 0x02 },
    { L"Animality", 0xb8db8, 0xb8dc8, indexUMK3ArcadeSprites_Kano, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Kano_P3[] =
{
    { L"Kano P3", 0xd3c7a, 0xd3cfa, indexUMK3ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Kano_Extras[] =
{
    { L"Gibs P1",   0xba258, 0xba2d8, indexUMK3ArcadeSprites_Kano, 0x01 },
    { L"Gibs P2",   0xd6f24, 0xd6fa0, indexUMK3ArcadeSprites_Kano, 0x01 },
    { L"Gibs P3",   0xd7746, 0xd77c2, indexUMK3ArcadeSprites_Kano, 0x01 },
    { L"Babality",  0xb7a60, 0xb7a9c, indexUMK3ArcadeSprites_Kano, 0x02 },
    { L"Animality", 0xb8db8, 0xb8dc8, indexUMK3ArcadeSprites_Kano, 0x03 },
};

const sGame_PaletteDataset UMK3_A_SubZero_Extras[] =
{
    { L"Gibs",      0xba562, 0xba5e2, indexUMK3ArcadeSprites_SubZero, 0x01 },
    { L"Babality",  0xb7c26, 0xb7c66, indexUMK3ArcadeSprites_SubZero, 0x02 },
    { L"Animality", 0xb8d5e, 0xb8d6e, indexUMK3ArcadeSprites_SubZero, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_SubZero_P3[] =
{
    { L"Sub-Zero P3", 0xd3e82, 0xd3f02, indexUMK3ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_SubZero_Extras[] =
{
    { L"Gibs P1",   0xba562, 0xba5e2, indexUMK3ArcadeSprites_SubZero, 0x01 },
    { L"Gibs P2",   0xd70a6, 0xd7126, indexUMK3ArcadeSprites_SubZero, 0x01 },
    { L"Gibs P3",   0xd7946, 0xd79c0, indexUMK3ArcadeSprites_SubZero, 0x01 },
    { L"Babality",  0xb7c26, 0xb7c66, indexUMK3ArcadeSprites_SubZero, 0x02 },
    { L"Animality", 0xb8d5e, 0xb8d6e, indexUMK3ArcadeSprites_SubZero, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Sektor_Extras[] =
{
    { L"Gibs",      0x424f8, 0x42578, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality",  0xb7c68, 0xb7ca8, indexUMK3ArcadeSprites_Sektor, 0x02 },
    { L"Animality", 0xb8d94, 0xb8da4, indexUMK3ArcadeSprites_Sektor, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Sektor_P3[] =
{
    { L"Sektor P3", 0xd4004, 0xd4084, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Sektor_Extras[] =
{
    { L"Gibs P1",   0x424f8, 0x42578, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P2",   0xc19ac, 0xc1a2c, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P3",   0xd7ac4, 0xd7b40, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality",  0xb7c68, 0xb7ca8, indexUMK3ArcadeSprites_Sektor, 0x02 },
    { L"Animality", 0xb8d94, 0xb8da4, indexUMK3ArcadeSprites_Sektor, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Sindel_Extras[] =
{
    { L"Gibs",      0xba2da, 0xba358, indexUMK3ArcadeSprites_Sindel, 0x01 },
    { L"Babality",  0xb7a9e, 0xb7ade, indexUMK3ArcadeSprites_Sindel, 0x02 },
    { L"Animality", 0xb8dca, 0xb8dda, indexUMK3ArcadeSprites_Sindel, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Sindel_P3[] =
{
    { L"Sindel P3", 0xd3f84, 0xd4002, indexUMK3ArcadeSprites_Sindel, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Sindel_Extras[] =
{
    { L"Gibs P1",   0xba2da, 0xba358, indexUMK3ArcadeSprites_Sindel, 0x01 },
    { L"Gibs P2",   0xd7128, 0xd71a6, indexUMK3ArcadeSprites_Sindel, 0x01 },
    { L"Gibs P3",   0xd7a44, 0xd7ac2, indexUMK3ArcadeSprites_Sindel, 0x01 },
    { L"Babality",  0xb7a9e, 0xb7ade, indexUMK3ArcadeSprites_Sindel, 0x02 },
    { L"Animality", 0xb8dca, 0xb8dda, indexUMK3ArcadeSprites_Sindel, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Stryker_Extras[] =
{
    { L"Gibs",      0xba3dc, 0xba45c, indexUMK3ArcadeSprites_Stryker, 0x01 },
    { L"Babality",  0xb7d2c, 0xb7d6c, indexUMK3ArcadeSprites_Stryker, 0x02 },
    { L"Animality", 0xb8e12, 0xb8e22, indexUMK3ArcadeSprites_Stryker, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Stryker_P3[] =
{
    { L"Stryker P3", 0xd3f04, 0xd3f82, indexUMK3ArcadeSprites_Stryker, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Stryker_Extras[] =
{
    { L"Gibs P1",   0xba3dc, 0xba45c, indexUMK3ArcadeSprites_Stryker, 0x01 },
    { L"Gibs P2",   0xc188c, 0xc190c, indexUMK3ArcadeSprites_Stryker, 0x01 },
    { L"Gibs P3",   0xd79c2, 0xd7a42, indexUMK3ArcadeSprites_Stryker, 0x01 },
    { L"Babality",  0xb7d2c, 0xb7d6c, indexUMK3ArcadeSprites_Stryker, 0x02 },
    { L"Animality", 0xb8e12, 0xb8e22, indexUMK3ArcadeSprites_Stryker, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Cyrax_Extras[] =
{
    { L"Gibs",      0x42904, 0x42982, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality",  0xb7db0, 0xb7df0, indexUMK3ArcadeSprites_Sektor, 0x02 },
    { L"Animality", 0xb8ddc, 0xb8dec, indexUMK3ArcadeSprites_Cyrax, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Cyrax_P3[] =
{
    { L"Cyrax P3", 0xd4086, 0xd4106, indexUMK3ArcadeSprites_Cyrax, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Cyrax_Extras[] =
{
    { L"Gibs P1",   0x42904, 0x42982, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P2",   0xd71a8, 0xd7224, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P3",   0xd7b42, 0xd7bbe, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality",  0xb7db0, 0xb7df0, indexUMK3ArcadeSprites_Sektor, 0x02 },
    { L"Animality", 0xb8ddc, 0xb8dec, indexUMK3ArcadeSprites_Cyrax, 0x03 },
};

const sGame_PaletteDataset UMK3_A_KungLao_Extras[] =
{
    { L"Gibs P1",           0xba1d6, 0xba254, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Gibs P2",           0x42984, 0x42a02, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Babality",          0xb7b64, 0xb7ba4, indexUMK3ArcadeSprites_KungLao, 0x02 },
    { L"Animality",         0xb8d82, 0xb8d92, indexUMK3ArcadeSprites_KungLao, 0x03 },
    { L"Deadly Whirlwind",  0xb9fce, 0xba04e },
};

const sGame_PaletteDataset UMK3Plus_A_KungLao_P3[] =
{
    { L"Kung Lao P3", 0xd4108, 0xd4188, indexUMK3ArcadeSprites_KungLao, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_KungLao_Extras[] =
{
    { L"Gibs P1",           0xba1d6, 0xba254, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Gibs P2",           0x42984, 0x42a02, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Gibs P3",           0xd7bc0, 0xd7c3c, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Babality",          0xb7b64, 0xb7ba4, indexUMK3ArcadeSprites_KungLao, 0x02 },
    { L"Animality",         0xb8d82, 0xb8d92, indexUMK3ArcadeSprites_KungLao, 0x03 },
    { L"Deadly Whirlwind",  0xb9fce, 0xba04e },
};

const sGame_PaletteDataset UMK3_A_Kabal_Extras[] =
{
    { L"Gibs",          0xba5e4, 0xba664, indexUMK3ArcadeSprites_Kabal, 0x01 },
    { L"Babality",      0xb7ae0, 0xb7b20, indexUMK3ArcadeSprites_Kabal, 0x02 },
    { L"Animality",     0xb8e36, 0xb8e46, indexUMK3ArcadeSprites_Kabal, 0x03 },
    { L"Soul Scream",   0xb7efa, 0xb7f7a },
};

const sGame_PaletteDataset UMK3Plus_A_Kabal_P3[] =
{
    { L"Kabal P3", 0xd418a, 0xd420a, indexUMK3ArcadeSprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Kabal_Extras[] =
{
    { L"Gibs P1",       0xba5e4, 0xba664, indexUMK3ArcadeSprites_Kabal, 0x01 },
    { L"Gibs P2",       0xd7226, 0xd72a6, indexUMK3ArcadeSprites_Kabal, 0x01 },
    { L"Gibs P3",       0xd7c3e, 0xd7cbe, indexUMK3ArcadeSprites_Kabal, 0x01 },
    { L"Babality",      0xb7ae0, 0xb7b20, indexUMK3ArcadeSprites_Kabal, 0x02 },
    { L"Animality",     0xb8e36, 0xb8e46, indexUMK3ArcadeSprites_Kabal, 0x03 },
    { L"Soul Scream",   0xb7efa, 0xb7f7a },
};

const sGame_PaletteDataset UMK3_A_Sheeva_Extras[] =
{
    { L"Gibs",      0xba4e0, 0xba560, indexUMK3ArcadeSprites_Sheeva, 0x01 },
    { L"Babality",  0xb7cec, 0xb7d2a, indexUMK3ArcadeSprites_Sheeva, 0x02 },
    { L"Animality", 0xb8e00, 0xb8e10, indexUMK3ArcadeSprites_Sheeva, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Sheeva_P3[] =
{
    { L"Sheeva P3", 0xd420c, 0xd428c, indexUMK3ArcadeSprites_Sheeva, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Sheeva_Extras[] =
{
    { L"Gibs P1",   0xba4e0, 0xba560, indexUMK3ArcadeSprites_Sheeva, 0x01 },
    { L"Gibs P2",   0xd72a8, 0xd7328, indexUMK3ArcadeSprites_Sheeva, 0x01 },
    { L"Gibs P3",   0xd7cc0, 0xd7d40, indexUMK3ArcadeSprites_Sheeva, 0x01 },
    { L"Babality",  0xb7cec, 0xb7d2a, indexUMK3ArcadeSprites_Sheeva, 0x02 },
    { L"Animality", 0xb8e00, 0xb8e10, indexUMK3ArcadeSprites_Sheeva, 0x03 },
};

const sGame_PaletteDataset UMK3_A_ShangTsung_Extras[] =
{
    { L"Gibs",      0xba666, 0xba6e4, indexUMK3ArcadeSprites_ShangTsung, 0x01 },
    { L"Babality",  0xb7caa, 0xb7cea, indexUMK3ArcadeSprites_ShangTsung, 0x02 },
    { L"Animality", 0xb8da6, 0xb8db6, indexUMK3ArcadeSprites_ShangTsung, 0x03 },
};

const sGame_PaletteDataset UMK3_A_ShangTsung_Morphs[] =
{
    { L"Sub-Zero",      0xb1286, 0xb1306, indexUMK3ArcadeSprites_ShangTsung, 0x10 },
    { L"Sindel",        0xb1308, 0xb1384, indexUMK3ArcadeSprites_ShangTsung, 0x11 },
    { L"Robots",        0xb1386, 0xb1406, indexUMK3ArcadeSprites_ShangTsung, 0x12 },
    { L"Stryker",       0xb1408, 0xb1488, indexUMK3ArcadeSprites_ShangTsung, 0x13 },
    { L"Kung Lao",      0xb148a, 0xb1504, indexUMK3ArcadeSprites_ShangTsung, 0x14 },
    { L"Kano",          0xb1506, 0xb1586, indexUMK3ArcadeSprites_ShangTsung, 0x15 },
    { L"Jax",           0xb1588, 0xb1608, indexUMK3ArcadeSprites_ShangTsung, 0x16 },
    { L"Nightwolf",     0xb160a, 0xb1686, indexUMK3ArcadeSprites_ShangTsung, 0x17 },
    { L"Sonya",         0xb1688, 0xb1706, indexUMK3ArcadeSprites_ShangTsung, 0x18 },
    { L"Kabal",         0xb1708, 0xb1788, indexUMK3ArcadeSprites_ShangTsung, 0x19 },
    { L"Sheeva",        0xb178a, 0xb1808, indexUMK3ArcadeSprites_ShangTsung, 0x1a },
    { L"Liu Kang",      0xb180a, 0xb188a, indexUMK3ArcadeSprites_ShangTsung, 0x1b },
    { L"Female Ninja",  0xbb554, 0xbb5d4, indexUMK3ArcadeSprites_ShangTsung, 0x1c },
    { L"Male Ninja",    0xbb5d6, 0xbb654, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
};

const sGame_PaletteDataset UMK3Plus_A_ShangTsung_P3[] =
{
    { L"Shang Tsung P3", 0xd428e, 0xd430e, indexUMK3ArcadeSprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_ShangTsung_Morphs[] =
{
    { L"Sub-Zero",      0xb1286, 0xb1306, indexUMK3ArcadeSprites_ShangTsung, 0x10 },
    { L"Sindel",        0xb1308, 0xb1384, indexUMK3ArcadeSprites_ShangTsung, 0x11 },
    // this is now just for sektor
    { L"Sektor",        0xb1386, 0xb1406, indexUMK3ArcadeSprites_ShangTsung, 0x12 },
    { L"Stryker",       0xb1408, 0xb1488, indexUMK3ArcadeSprites_ShangTsung, 0x13 },
    { L"Kung Lao",      0xb148a, 0xb1504, indexUMK3ArcadeSprites_ShangTsung, 0x14 },
    { L"Kano",          0xb1506, 0xb1586, indexUMK3ArcadeSprites_ShangTsung, 0x15 },
    { L"Jax",           0xb1588, 0xb1608, indexUMK3ArcadeSprites_ShangTsung, 0x16 },
    { L"Nightwolf",     0xb160a, 0xb1686, indexUMK3ArcadeSprites_ShangTsung, 0x17 },
    { L"Sonya",         0xb1688, 0xb1706, indexUMK3ArcadeSprites_ShangTsung, 0x18 },
    { L"Kabal",         0xb1708, 0xb1788, indexUMK3ArcadeSprites_ShangTsung, 0x19 },
    { L"Sheeva",        0xb178a, 0xb1808, indexUMK3ArcadeSprites_ShangTsung, 0x1a },
    { L"Liu Kang",      0xb180a, 0xb188a, indexUMK3ArcadeSprites_ShangTsung, 0x1b },

    { L"Kitana",        0xbb554, 0xbb5d4, indexUMK3ArcadeSprites_ShangTsung, 0x1c },
    { L"Scorpion",      0xbb5d6, 0xbb654, indexUMK3ArcadeSprites_ShangTsung, 0x1d },

    { L"Ermac",             0xc1ac2, 0xc1b40, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
    { L"Reptile",           0xc1bd2, 0xc1c50, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
    { L"Classic Sub-Zero",  0xc1ce2, 0xc1d60, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
    { L"Human Smoke",       0xc1df2, 0xc1e70, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
    { L"Mileena",           0xc1eb2, 0xc1f32, indexUMK3ArcadeSprites_ShangTsung, 0x1c },
    { L"Jade",              0xc1fa2, 0xc2022, indexUMK3ArcadeSprites_ShangTsung, 0x1c },
    { L"Cyrax",             0xc6d6c, 0xc6dec, indexUMK3ArcadeSprites_ShangTsung, 0x12 },
    { L"Smoke",             0xc6e2c, 0xc6eac, indexUMK3ArcadeSprites_ShangTsung, 0x12 },
    { L"Noob Saibot",       0xc8392, 0xc8410, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
    { L"Rain",              0xc84a2, 0xc8520, indexUMK3ArcadeSprites_ShangTsung, 0x1d },
};

const sGame_PaletteDataset UMK3Plus_A_ShangTsung_Extras[] =
{
    { L"Gibs P1",   0xba666, 0xba6e4, indexUMK3ArcadeSprites_ShangTsung, 0x01 },
    { L"Gibs P2",   0xd732a, 0xd73a8, indexUMK3ArcadeSprites_ShangTsung, 0x01 },
    { L"Gibs P3",   0xd7d42, 0xd7dc0, indexUMK3ArcadeSprites_ShangTsung, 0x01 },
    { L"Babality",  0xb7caa, 0xb7cea, indexUMK3ArcadeSprites_ShangTsung, 0x02 },
    { L"Animality", 0xb8da6, 0xb8db6, indexUMK3ArcadeSprites_ShangTsung, 0x03 },
};

const sGame_PaletteDataset UMK3_A_LiuKang_Extras[] =
{
    { L"Gibs",              0xba35a, 0xba3da, indexUMK3ArcadeSprites_LiuKang, 0x01 },
    { L"Babality",          0xb7be4, 0xb7c24, indexUMK3ArcadeSprites_LiuKang, 0x02 },
    { L"Animality",         0xb8dee, 0xb8dfe, indexUMK3ArcadeSprites_LiuKang, 0x03 },
    { L"Arcade Cabinet",    0xbab70, 0xbabee },
};

const sGame_PaletteDataset UMK3Plus_A_LiuKang_P3[] =
{
    { L"Liu Kang P3", 0xd4310, 0xd4390, indexUMK3ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_LiuKang_Extras[] =
{
    { L"Gibs P1",           0xba35a, 0xba3da, indexUMK3ArcadeSprites_LiuKang, 0x01 },
    { L"Gibs P2",           0xc180a, 0xc188a, indexUMK3ArcadeSprites_LiuKang, 0x01 },
    { L"Gibs P3",           0xd7dc2, 0xd7e42, indexUMK3ArcadeSprites_LiuKang, 0x01 },
    { L"Babality",          0xb7be4, 0xb7c24, indexUMK3ArcadeSprites_LiuKang, 0x02 },
    { L"Animality",         0xb8dee, 0xb8dfe, indexUMK3ArcadeSprites_LiuKang, 0x03 },
    { L"Arcade Cabinet",    0xbab70, 0xbabee },
};

const sGame_PaletteDataset UMK3_A_Smoke_Extras[] =
{
    { L"Gibs",      0x42884, 0x42902, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality",  0xb7df2, 0xb7e32, indexUMK3ArcadeSprites_Sektor, 0x02 },
    { L"Animality", 0xb8e24, 0xb8e34, indexUMK3ArcadeSprites_Smoke, 0x03 },
};

const sGame_PaletteDataset UMK3Plus_A_Smoke_P3[] =
{
    { L"Smoke P3", 0xd4392, 0xd4412, indexUMK3ArcadeSprites_Smoke, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Smoke_Extras[] =
{
    { L"Gibs P1",   0x42884, 0x42902, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P2",   0xd73aa, 0xd7426, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P3",   0xd7e44, 0xd7ec0, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality",  0xb7df2, 0xb7e32, indexUMK3ArcadeSprites_Sektor, 0x02 },
    { L"Animality", 0xb8e24, 0xb8e34, indexUMK3ArcadeSprites_Smoke, 0x03 },
};

const sGame_PaletteDataset UMK3_A_HumanSmoke_Extras[] =
{
    { L"Gibs",      0x42476, 0x424f6, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x5844a, 0x5848a, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3Plus_A_HumanSmoke_P2[] =
{
    { L"Human Smoke P2", 0xbf482, 0xbf502, indexUMK3ArcadeSprites_HumanSmoke, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_HumanSmoke_P3[] =
{
    { L"Human Smoke P3", 0xd47a2, 0xd4822, indexUMK3ArcadeSprites_HumanSmoke, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_HumanSmoke_Extras[] =
{
    { L"Gibs P1",   0x42476, 0x424f6, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P2",   0xc1602, 0xc1682, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P3",   0xd8250, 0xd82d0, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x5844a, 0x5848a, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3_A_ClassicSubZero_Extras[] =
{
    { L"Gibs",      0x42782, 0x42802, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x584ce, 0x5850e, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3Plus_A_ClasicSubZero_P3[] =
{
    { L"Classic Sub-Zero P3", 0xd4720, 0xd47a0, indexUMK3ArcadeSprites_ClassicSubZero, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_ClasicSubZero_Extras[] =
{
    { L"Gibs P1",   0x42782, 0x42802, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P2",   0xd75ae, 0xd762e, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P3",   0xd81ce, 0xd824e, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0x584ce, 0x5850e, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3_A_Ermac_Extras[] =
{
    { L"Gibs",      0xba768, 0xba7e8, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0xb7e34, 0xb7e74, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3Plus_A_Ermac_P3[] =
{
    { L"Ermac P3", 0xd469e, 0xd471e, indexUMK3ArcadeSprites_Ermac, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Ermac_Extras[] =
{
    { L"Gibs P1",   0xba768, 0xba7e8, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P2",   0xc1684, 0xc1704, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P3",   0xd814c, 0xd81cc, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0xb7e34, 0xb7e74, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3_A_Mileena_Extras[] =
{
    { L"Gibs",              0x4267e, 0x426fe, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality",          0x58594, 0x585d4, indexUMK3ArcadeSprites_Kitana, 0x02 },
    { L"Animality",         0xbb48e, 0xbb4ae, indexUMK3ArcadeSprites_Mileena, 0x03 },
    { L"Animality Extra",   0xbb4b0, 0xbb4d0, indexUMK3ArcadeSprites_Mileena, 0x04 },
};

const sGame_PaletteDataset UMK3Plus_A_Mileena_P3[] =
{
    { L"Mileena P3", 0xd4518, 0xd4598, indexUMK3ArcadeSprites_Mileena, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Mileena_Extras[] =
{
    { L"Gibs P1",           0x4267e, 0x426fe, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Gibs P2",           0xd74aa, 0xd752a, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Gibs P3",           0xd7fc6, 0xd8046, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality",          0x58594, 0x585d4, indexUMK3ArcadeSprites_Kitana, 0x02 },
    { L"Animality",         0xbb48e, 0xbb4ae, indexUMK3ArcadeSprites_Mileena, 0x03 },
    { L"Animality Extra",   0xbb4b0, 0xbb4d0, indexUMK3ArcadeSprites_Mileena, 0x04 },
};

const sGame_PaletteDataset UMK3Plus_A_NoobSaibot_P2[] =
{
    { L"Noob Saibot P2", 0xbf504, 0xbf584, indexUMK3ArcadeSprites_NoobSaibot, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_NoobSaibot_P3[] =
{
    { L"Noob Saibot P3", 0xd4824, 0xd48a4, indexUMK3ArcadeSprites_NoobSaibot, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Rain_P2[] =
{
    { L"Rain P2", 0xc36d2, 0xc3752, indexUMK3ArcadeSprites_Rain, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Rain_P3[] =
{
    { L"Rain P3", 0xd48a6, 0xd4926, indexUMK3ArcadeSprites_Rain, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Rain_Extras[] =
{
    { L"Gibs P1",   0xc3134, 0xc31b4, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P2",   0xc192a, 0xc19aa, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Gibs P3",   0xd82d2, 0xd8352, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality",  0xc4072, 0xc40b2, indexUMK3ArcadeSprites_Reptile, 0x02 },
};

const sGame_PaletteDataset UMK3Plus_A_Triborg_P1[] =
{
    { L"Triborg P1", 0xf40c0, 0xf4140, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Triborg_P2[] =
{
    { L"Triborg P2", 0xf4142, 0xf41c2, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Triborg_P3[] =
{
    { L"Triborg P3", 0xd849a, 0xd851a, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3Plus_A_Triborg_Extras[] =
{
    { L"Gibs P1", 0xf44ce, 0xf454e, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P2", 0xd7630, 0xd76b0, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Gibs P3", 0xd8354, 0xd83d4, indexUMK3ArcadeSprites_Sektor, 0x01 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_VSScreen[] =
{
    { L"Background",            0xa6a56, 0xa6a76, indexUMK3ArcadeSprites_Stages, 0x09, &pairNext2AndNext4 },
    { L"VS",                    0xb5bd0, 0xb5c4e, indexUMK3ArcadeSprites_Stages, 0x0d },
    { L"Kombat Kode Box",       0xb563e, 0xb5674, indexUMK3ArcadeSprites_Stages, 0x0b },
    { L"Battle Text",           0xb5676, 0xb56b6, indexUMK3ArcadeSprites_Stages, 0x0a },
    { L"Top Corner Dragons",    0xb56b8, 0xb56f8, indexUMK3ArcadeSprites_Stages, 0x0c },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Kitana[] =
{
    { L"Accent Color",  0xb936a, 0xb93ea, indexUMK3ArcadeSprites_Bonus, 0x5e, &pairNextAndNext },
    { L"Skin",          0xb9268, 0xb9368, indexUMK3ArcadeSprites_Bonus, 0x60 },
    { L"Darks",         0xb9226, 0xb9266, indexUMK3ArcadeSprites_Bonus, 0x5f },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Kitana[] =
{
    { L"Accent Color P1",   0xb936a, 0xb93ea, indexUMK3ArcadeSprites_Bonus, 0x5e, &pairNext3AndNext4 },
    { L"Accent Color P2",   0xb9a02, 0xb9a82, indexUMK3ArcadeSprites_Bonus, 0x5e, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd6362, 0xd63e2, indexUMK3ArcadeSprites_Bonus, 0x5e, &pairNextAndNext },
    { L"Skin",              0xb9268, 0xb9368, indexUMK3ArcadeSprites_Bonus, 0x60 },
    { L"Darks",             0xb9226, 0xb9266, indexUMK3ArcadeSprites_Bonus, 0x5f },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_JadeandMileena[] =
{
    { L"Jade Accent Color",         0xb9530, 0xb95b0, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNextAndNext5 },
    { L"Jade Skin",                 0xb942e, 0xb952e, indexUMK3ArcadeSprites_Bonus, 0x52 },
    { L"Mileena Accent Color P1",   0x53828, 0x538a8, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNext2AndNext3 },
    { L"Mileena Accent Color P2",   0x51ef8, 0x51f78, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNextAndNext },
    { L"Mileena Skin",              0x51f7a, 0x5207a, indexUMK3ArcadeSprites_Bonus, 0x52 },
    { L"Shared Darks",              0xb93ec, 0xb942c, indexUMK3ArcadeSprites_Bonus, 0x53 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_JadeandMileena[] =
{
    { L"Jade Accent Color P2",      0xb9530, 0xb95b0, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNext2AndNext8 },
    { L"Jade Accent Color P3",      0xd63e4, 0xd6464, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNextAndNext7 },
    { L"Jade Skin",                 0xb942e, 0xb952e, indexUMK3ArcadeSprites_Bonus, 0x52 },
    { L"Mileena Accent Color P1",   0x53828, 0x538a8, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNext3AndNext5 },
    { L"Mileena/Rain Accent Color P2", 0x51ef8, 0x51f78, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNext2AndNext4 },
    { L"Mileena Accent Color P3",   0xd6466, 0xd64e6, indexUMK3ArcadeSprites_Bonus, 0x51, &pairNext2AndNext3 },
    { L"Mileena Skin P1/P2",        0x51f7a, 0x5207a, indexUMK3ArcadeSprites_Bonus, 0x52 },
    { L"Mileena Skin P3",           0xd64e6, 0xd65e6, indexUMK3ArcadeSprites_Bonus, 0x52 },
    { L"Shared Darks",              0xb93ec, 0xb942c, indexUMK3ArcadeSprites_Bonus, 0x53 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_MaleNinja1[] =
{
    // Noob Saibot Accent Color P2 is somewhere in the ROM.  I have yet to find it.
    // Smoke and Noob portraits appear during the demo or hacks/cheats.
    { L"Scorpion Accent Color",             0xb96f6, 0xb9776, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext2AndNext4 },
    { L"Human Smoke Accent Color",          0x5238a, 0x5240a, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNextAndNext3 },
    { L"Scorpion and Human Smoke Skin",     0xb95f4, 0xb96f4, indexUMK3ArcadeSprites_Bonus, 0x68 },
    { L"Noob Saibot Skin/Accent Color P1",  0x52488, 0x52588, indexUMK3ArcadeSprites_Bonus, 0x67, &pairNext },
    { L"Shared Darks",                      0xb95b2, 0xb95f2, indexUMK3ArcadeSprites_Bonus, 0x6a },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_MaleNinja1[] =
{
    { L"Scorpion Accent Color P1",          0xb96f6, 0xb9776, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext8And9And12 },
    { L"Scorpion Accent Color P2",          0x53620, 0x536a0, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext7And9And11 },
    { L"Scorpion Accent Color P3",          0xd65e8, 0xd6668, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext6And9And10 },

    { L"Human Smoke Accent Color P1",       0x5238a, 0x5240a, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext5AndNext9 },
    { L"Human Smoke Accent Color P2",       0xc47a2, 0xc4822, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext4AndNext8 },
    { L"Human Smoke Accent Color P3",       0xd6872, 0xd68f2, indexUMK3ArcadeSprites_Bonus, 0x69, &pairNext3AndNext7 },

    { L"Noob Saibot Accent Color P1",       0xc4824, 0xc48a4, indexUMK3ArcadeSprites_Bonus, 0x67, &pairNext2AndNext6 },
    { L"Noob Saibot Skin/Accent Color P2",  0x52488, 0x52588, indexUMK3ArcadeSprites_Bonus, 0x67, &pairNext5 },

    { L"Scorpion and Human Smoke Skin",     0xb95f4, 0xb96f4, indexUMK3ArcadeSprites_Bonus, 0x68 },

    // this needs to be drawn over accent color and skin.  rip
    { L"Scorpion Face P1",                  0xb9778, 0xb97f8, indexUMK3ArcadeSprites_Bonus, 0x85 },
    { L"Scorpion Face P2",                  0xffdee, 0xffe6e, indexUMK3ArcadeSprites_Bonus, 0x85 },
    { L"Scorpion Face P3",                  0xd666a, 0xd66ea, indexUMK3ArcadeSprites_Bonus, 0x85 },

    { L"Shared Darks",                      0xb95b2, 0xb95f2, indexUMK3ArcadeSprites_Bonus, 0x6a },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_MaleNinja2[] =
{
    { L"Ermac Accent Color P1",             0x5349a, 0x5351a, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext6AndNext7 },
    { L"Ermac Accent Color P2",             0x53418, 0x53498, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext5AndNext6 },
    { L"Classic Sub-Zero Accent Color P1",  0x5359e, 0x5361e, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext4AndNext5 },
    { L"Classic Sub-Zero Accent Color P2",  0x5351c, 0x5359c, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext3AndNext4 },
    { L"Reptile Accent Color P1",           0xb91a4, 0xb9224, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext2AndNext3 },
    { L"Reptile Accent Color P2",           0x537a6, 0x53826, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNextAndNext },
    { L"Shared Skin",                       0xb90a2, 0xb91a2, indexUMK3ArcadeSprites_Bonus, 0x6d },
    { L"Shared Darks",                      0xb9060, 0xb90a0, indexUMK3ArcadeSprites_Bonus, 0x6c },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_MaleNinja2[] =
{
    { L"Ermac Accent Color P1",             0x5349a, 0x5351a, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext11AndNext12 },
    { L"Ermac Accent Color P2",             0x53418, 0x53498, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext10AndNext11 },
    { L"Ermac Accent Color P3",             0xd676e, 0xd67ee, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext9AndNext10 },

    { L"Classic Sub-Zero Accent Color P1",  0x5359e, 0x5361e, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext8AndNext9 },
    { L"Classic Sub-Zero Accent Color P2",  0x5351c, 0x5359c, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext7AndNext8 },
    { L"Classic Sub-Zero Accent Color P3",  0xd67f0, 0xd6870, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext6AndNext7 },

    { L"Reptile/Jade Accent Color P1",      0xb91a4, 0xb9224, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext5AndNext6 },
    { L"Reptile Accent Color P2",           0x537a6, 0x53826, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext4AndNext5 },
    { L"Reptile Accent Color P3",           0xd66ec, 0xd676c, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext3AndNext4 },

    { L"Rain Accent Color P1",              0xc448c, 0xc450c, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNext2AndNext3 },
    // Rain Accent Color P2
    { L"Rain Accent Color P3",              0xd68f4, 0xd6974, indexUMK3ArcadeSprites_Bonus, 0x6b, &pairNextAndNext },

    { L"Shared Skin",                       0xb90a2, 0xb91a2, indexUMK3ArcadeSprites_Bonus, 0x6d },
    { L"Shared Darks",                      0xb9060, 0xb90a0, indexUMK3ArcadeSprites_Bonus, 0x6c },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_CyraxandSmoke[] =
{
    { L"Cyrax Accent Color P1", 0xb3252, 0xb3352, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext4 },
    { L"Cyrax Accent Color P2", 0x52fd4, 0x530d4, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext3 },
    { L"Smoke Accent Color P1", 0x51abe, 0x51bbe, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext2 },
    { L"Smoke Accent Color P2", 0x53316, 0x53416, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext },
    { L"Shared Darks",          0xb3354, 0xb3394, indexUMK3ArcadeSprites_Bonus, 0x50 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_CyraxandSmoke[] =
{
    { L"Cyrax Accent Color P1", 0xb3252, 0xb3352, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext6 },
    { L"Cyrax Accent Color P2", 0x52fd4, 0x530d4, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext5 },
    { L"Cyrax Accent Color P3", 0xd5ae6, 0xd5be6, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext4 },

    { L"Smoke Accent Color P1", 0x51abe, 0x51bbe, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext3 },
    { L"Smoke Accent Color P2", 0x53316, 0x53416, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext2 },
    { L"Smoke Accent Color P3", 0xd6260, 0xd6360, indexUMK3ArcadeSprites_Bonus, 0x4f, &pairNext },

    { L"Shared Darks",          0xb3354, 0xb3394, indexUMK3ArcadeSprites_Bonus, 0x50 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Sektor[] =
{
    { L"Accent Color P1",   0xb33d8, 0xb34d4, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext2 },
    { L"Accent Color P2",   0x52ed2, 0x52fce, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext },
    { L"Darks",             0xb3396, 0xb33d6, indexUMK3ArcadeSprites_Bonus, 0x72 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Sektor[] =
{
    { L"Sektor Accent Color P1",    0xb33d8, 0xb34d4, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext6 },
    { L"Sektor Accent Color P2",    0x52ed2, 0x52fce, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext5 },
    { L"Sektor Accent Color P3",    0xd59a2, 0xd5a9e, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext5 },
    { L"Triborg Accent Color P1",   0xf41c4, 0xf42c4, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext3 },
    { L"Triborg Accent Color P2",   0xf42c6, 0xf43c6, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext2 },
    { L"Triborg Accent Color P3",   0xd851c, 0xd861c, indexUMK3ArcadeSprites_Bonus, 0x71, &pairNext },
    { L"Darks",                     0xb3396, 0xb33d6, indexUMK3ArcadeSprites_Bonus, 0x72 },
    { L"Sektor Darks P3",           0xd5aa4, 0xd5ae4, indexUMK3ArcadeSprites_Bonus, 0x72 },
};
const sGame_PaletteDataset UMK3_A_VSBioPortraits_Sonya[] =
{
    { L"Accent Color P1",   0xb1e68, 0xb1f64, indexUMK3ArcadeSprites_Bonus, 0x7c, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x529cc, 0x52ac8, indexUMK3ArcadeSprites_Bonus, 0x7c, &pairNextAndNext },
    { L"Skin and Hair",     0xb1c68, 0xb1e66, indexUMK3ArcadeSprites_Bonus, 0x7e },
    { L"Darks",             0xb1f66, 0xb1fa4, indexUMK3ArcadeSprites_Bonus, 0x7d },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Sonya[] =
{
    { L"Accent Color P1",   0xb1e68, 0xb1f64, indexUMK3ArcadeSprites_Bonus, 0x7c, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x529cc, 0x52ac8, indexUMK3ArcadeSprites_Bonus, 0x7c, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd539a, 0xd5496, indexUMK3ArcadeSprites_Bonus, 0x7c, &pairNextAndNext },
    { L"Skin and Hair",     0xb1c68, 0xb1e66, indexUMK3ArcadeSprites_Bonus, 0x7e },
    { L"Darks",             0xb1f66, 0xb1fa4, indexUMK3ArcadeSprites_Bonus, 0x7d },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Kano[] =
{
    { L"Accent Color P1",       0xb21a4, 0xb22a2, indexUMK3ArcadeSprites_Bonus, 0x5a, &pairNextSkippedAndNextPair },
    { L"Accent Color P2",       0x528cc, 0x529ca, indexUMK3ArcadeSprites_Bonus, 0x5a, &pairNext3Palettes },
    { L"Skin",                  0xb1fa6, 0xb21a2, indexUMK3ArcadeSprites_Bonus, 0x5d },
    { L"Darks and Eyeplate",    0xb22a4, 0xb22e2, indexUMK3ArcadeSprites_Bonus, 0x5c },
    { L"Core and Eye",          0xb22e4, 0xb234e, indexUMK3ArcadeSprites_Bonus, 0x5b },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Kano[] =
{
    { L"Accent Color P1",       0xb21a4, 0xb22a2, indexUMK3ArcadeSprites_Bonus, 0x5a, &pairNext3And4And5 },
    { L"Accent Color P2",       0x528cc, 0x529ca, indexUMK3ArcadeSprites_Bonus, 0x5a, &pairNextSkippedAndNextPair },
    { L"Accent Color P3",       0xd529a, 0xd5398, indexUMK3ArcadeSprites_Bonus, 0x5a, &pairNext3Palettes },
    { L"Skin",                  0xb1fa6, 0xb21a2, indexUMK3ArcadeSprites_Bonus, 0x5d },
    { L"Darks and Eyeplate",    0xb22a4, 0xb22e2, indexUMK3ArcadeSprites_Bonus, 0x5c },
    { L"Core and Eye",          0xb22e4, 0xb234e, indexUMK3ArcadeSprites_Bonus, 0x5b },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Stryker[] =
{
    { L"Accent Color P1",   0xb2350, 0xb2450, indexUMK3ArcadeSprites_Bonus, 0x7f, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x52cce, 0x52dce, indexUMK3ArcadeSprites_Bonus, 0x7f, &pairNextAndNext },
    { L"Skin",              0xb2452, 0xb264c, indexUMK3ArcadeSprites_Bonus, 0x81 },
    { L"Darks",             0xb264e, 0xb268e, indexUMK3ArcadeSprites_Bonus, 0x80 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Stryker[] =
{
    { L"Accent Color P1",   0xb2350, 0xb2450, indexUMK3ArcadeSprites_Bonus, 0x7f, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x52cce, 0x52dce, indexUMK3ArcadeSprites_Bonus, 0x7f, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd579e, 0xd589e, indexUMK3ArcadeSprites_Bonus, 0x7f, &pairNextAndNext3 },
    { L"Skin",              0xb2452, 0xb264c, indexUMK3ArcadeSprites_Bonus, 0x81 },
    { L"Darks P1/P2",       0xb264e, 0xb268e, indexUMK3ArcadeSprites_Bonus, 0x80 },
    { L"Darks P3",          0xd575c, 0xd579c, indexUMK3ArcadeSprites_Bonus, 0x80 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Kabal[] =
{
    { L"Accent Color P1",   0xb2992, 0xb29ce, indexUMK3ArcadeSprites_Bonus, 0x57, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x53114, 0x53150, indexUMK3ArcadeSprites_Bonus, 0x57, &pairNextAndNext },
    { L"Skin",              0xb2690, 0xb288e, indexUMK3ArcadeSprites_Bonus, 0x59 },
    { L"Darks and Vest",    0xb2890, 0xb2990, indexUMK3ArcadeSprites_Bonus, 0x58 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Kabal[] =
{
    { L"Accent Color P1",       0xb2992, 0xb29ce, indexUMK3ArcadeSprites_Bonus, 0x57, &pairNext3AndNext4 },
    { L"Accent Color P2",       0x53114, 0x53150, indexUMK3ArcadeSprites_Bonus, 0x57, &pairNext2AndNext3 },
    { L"Accent Color P3",       0xd5e2e, 0xd5e6a, indexUMK3ArcadeSprites_Bonus, 0x57, &pairNextAndNext3 },
    { L"Skin",                  0xb2690, 0xb288e, indexUMK3ArcadeSprites_Bonus, 0x59 },
    { L"Darks and Vest P1/P2",  0xb2890, 0xb2990, indexUMK3ArcadeSprites_Bonus, 0x58 },
    { L"Darks and Vest P3",     0xd5d2c, 0xd5e2c, indexUMK3ArcadeSprites_Bonus, 0x58 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_KungLao[] =
{
    { L"Accent Color P1",   0xb2c0c, 0xb2c48, indexUMK3ArcadeSprites_Bonus, 0x61, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x530d6, 0x53112, indexUMK3ArcadeSprites_Bonus, 0x61, &pairNextAndNext },
    { L"Skin and Harness",  0xb29d0, 0xb2bc8, indexUMK3ArcadeSprites_Bonus, 0x63 },
    { L"Darks",             0xb2bca, 0xb2c0a, indexUMK3ArcadeSprites_Bonus, 0x62 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_KungLao[] =
{
    { L"Accent Color P1",   0xb2c0c, 0xb2c48, indexUMK3ArcadeSprites_Bonus, 0x61, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x530d6, 0x53112, indexUMK3ArcadeSprites_Bonus, 0x61, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd5cea, 0xd5d26, indexUMK3ArcadeSprites_Bonus, 0x61, &pairNextAndNext },
    { L"Skin and Harness",  0xb29d0, 0xb2bc8, indexUMK3ArcadeSprites_Bonus, 0x63 },
    { L"Darks",             0xb2bca, 0xb2c0a, indexUMK3ArcadeSprites_Bonus, 0x62 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Sindel[] =
{
    { L"Accent Color P1",   0xb2e8c, 0xb2f8c, indexUMK3ArcadeSprites_Bonus, 0x79, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x52dd0, 0x52ed0, indexUMK3ArcadeSprites_Bonus, 0x79, &pairNextAndNext },
    { L"Skin",              0xb2c4a, 0xb2e48, indexUMK3ArcadeSprites_Bonus, 0x7b },
    { L"Darks",             0xb2e4a, 0xb2e8a, indexUMK3ArcadeSprites_Bonus, 0x7a },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Sindel[] =
{
    { L"Accent Color P1",   0xb2e8c, 0xb2f8c, indexUMK3ArcadeSprites_Bonus, 0x79, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x52dd0, 0x52ed0, indexUMK3ArcadeSprites_Bonus, 0x79, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd58a0, 0xd59a0, indexUMK3ArcadeSprites_Bonus, 0x79, &pairNextAndNext },
    { L"Skin",              0xb2c4a, 0xb2e48, indexUMK3ArcadeSprites_Bonus, 0x7b },
    { L"Darks",             0xb2e4a, 0xb2e8a, indexUMK3ArcadeSprites_Bonus, 0x7a },
};


const sGame_PaletteDataset UMK3_A_VSBioPortraits_LiuKang[] =
{
    { L"Accent Color P1",   0xb31d0, 0xb3250, indexUMK3ArcadeSprites_Bonus, 0x64, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x53294, 0x53314, indexUMK3ArcadeSprites_Bonus, 0x64, &pairNextAndNext },
    { L"Skin",              0xb2f8e, 0xb318c, indexUMK3ArcadeSprites_Bonus, 0x66 },
    { L"Darks",             0xb318e, 0xb31ce, indexUMK3ArcadeSprites_Bonus, 0x65 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_LiuKang[] =
{
    { L"Accent Color P1",   0xb31d0, 0xb3250, indexUMK3ArcadeSprites_Bonus, 0x64, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x53294, 0x53314, indexUMK3ArcadeSprites_Bonus, 0x64, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd619e, 0xd621c, indexUMK3ArcadeSprites_Bonus, 0x64, &pairNextAndNext },
    { L"Skin",              0xb2f8e, 0xb318c, indexUMK3ArcadeSprites_Bonus, 0x66 },
    { L"Darks",             0xb318e, 0xb31ce, indexUMK3ArcadeSprites_Bonus, 0x65 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_SubZero[] =
{
    { L"Accent Color P1",   0xb34d6, 0xb35d6, indexUMK3ArcadeSprites_Bonus, 0x82, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x52bcc, 0x52ccc, indexUMK3ArcadeSprites_Bonus, 0x82, &pairNextAndNext },
    { L"Skin",              0xb35d8, 0xb37d6, indexUMK3ArcadeSprites_Bonus, 0x84 },
    { L"Darks",             0xb37d8, 0xb3818, indexUMK3ArcadeSprites_Bonus, 0x83 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_SubZero[] =
{
    { L"Accent Color P1",   0xb34d6, 0xb35d6, indexUMK3ArcadeSprites_Bonus, 0x82, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x52bcc, 0x52ccc, indexUMK3ArcadeSprites_Bonus, 0x82, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd565a, 0xd575a, indexUMK3ArcadeSprites_Bonus, 0x82, &pairNextAndNext },
    { L"Skin",              0xb35d8, 0xb37d6, indexUMK3ArcadeSprites_Bonus, 0x84 },
    { L"Darks",             0xb37d8, 0xb3818, indexUMK3ArcadeSprites_Bonus, 0x83 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_ShangTsung[] =
{
    { L"Accent Color P1",   0xb3a56, 0xb3a96, indexUMK3ArcadeSprites_Bonus, 0x73, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x53252, 0x53292, indexUMK3ArcadeSprites_Bonus, 0x73, &pairNextAndNext },
    { L"Skin",              0xb381a, 0xb3a12, indexUMK3ArcadeSprites_Bonus, 0x75 },
    { L"Darks",             0xb3a14, 0xb3a54, indexUMK3ArcadeSprites_Bonus, 0x74 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_ShangTsung[] =
{
    { L"Accent Color P1",   0xb3a56, 0xb3a96, indexUMK3ArcadeSprites_Bonus, 0x73, &pairNext3AndNext5 },
    { L"Accent Color P2",   0x53252, 0x53292, indexUMK3ArcadeSprites_Bonus, 0x73, &pairNext2AndNext4 },
    { L"Accent Color P3",   0xd6166, 0xd619c, indexUMK3ArcadeSprites_Bonus, 0x73, &pairNext2AndNext3 },
    { L"Skin P1/P2",        0xb381a, 0xb3a12, indexUMK3ArcadeSprites_Bonus, 0x75 },
    { L"Skin P3",           0xd5f6c, 0xd6164, indexUMK3ArcadeSprites_Bonus, 0x75 },
    { L"Darks",             0xb3a14, 0xb3a54, indexUMK3ArcadeSprites_Bonus, 0x74 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Nightwolf[] =
{
    { L"Accent Color P1",   0xb3ada, 0xb3b58, indexUMK3ArcadeSprites_Bonus, 0x6e, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x52b4c, 0x52bca, indexUMK3ArcadeSprites_Bonus, 0x6e, &pairNextAndNext },
    { L"Skin",              0xb3b5a, 0xb3d58, indexUMK3ArcadeSprites_Bonus, 0x70 },
    { L"Darks",             0xb3a98, 0xb3ad8, indexUMK3ArcadeSprites_Bonus, 0x6f },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Nightwolf[] =
{
    { L"Accent Color P1",   0xb3ada, 0xb3b58, indexUMK3ArcadeSprites_Bonus, 0x6e, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x52b4c, 0x52bca, indexUMK3ArcadeSprites_Bonus, 0x6e, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd55da, 0xd5658, indexUMK3ArcadeSprites_Bonus, 0x6e, &pairNextAndNext },
    { L"Skin",              0xb3b5a, 0xb3d58, indexUMK3ArcadeSprites_Bonus, 0x70 },
    { L"Darks",             0xb3a98, 0xb3ad8, indexUMK3ArcadeSprites_Bonus, 0x6f },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Sheeva[] =
{
    { L"Accent Color P1",   0xb3f9c, 0xb409a, indexUMK3ArcadeSprites_Bonus, 0x76, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x53152, 0x53250, indexUMK3ArcadeSprites_Bonus, 0x76, &pairNextAndNext },
    { L"Skin",              0xb3d5a, 0xb3f58, indexUMK3ArcadeSprites_Bonus, 0x78 },
    { L"Darks",             0xb3f5a, 0xb3f9a, indexUMK3ArcadeSprites_Bonus, 0x77 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Sheeva[] =
{
    { L"Accent Color P1",   0xb3f9c, 0xb409a, indexUMK3ArcadeSprites_Bonus, 0x76, &pairNext3AndNext4 },
    { L"Accent Color P2",   0x53152, 0x53250, indexUMK3ArcadeSprites_Bonus, 0x76, &pairNext2AndNext3 },
    { L"Accent Color P3",   0xd5e6c, 0xd5f6a, indexUMK3ArcadeSprites_Bonus, 0x76, &pairNextAndNext },
    { L"Skin",              0xb3d5a, 0xb3f58, indexUMK3ArcadeSprites_Bonus, 0x78 },
    { L"Darks",             0xb3f5a, 0xb3f9a, indexUMK3ArcadeSprites_Bonus, 0x77 },
};

const sGame_PaletteDataset UMK3_A_VSBioPortraits_Jax[] =
{
    { L"Accent Color P1",   0xb429c, 0xb4318, indexUMK3ArcadeSprites_Bonus, 0x54, &pairNext2AndNext3 },
    { L"Accent Color P2",   0x52aca, 0x52b46, indexUMK3ArcadeSprites_Bonus, 0x54, &pairNextAndNext },
    { L"Skin",              0xb409c, 0xb429a, indexUMK3ArcadeSprites_Bonus, 0x56 },
    { L"Darks and Arms",    0xb431a, 0xb439a, indexUMK3ArcadeSprites_Bonus, 0x55 },
};

const sGame_PaletteDataset UMK3Plus_A_VSBioPortraits_Jax[] =
{
    { L"Accent Color P1",       0xb429c, 0xb4318, indexUMK3ArcadeSprites_Bonus, 0x54, &pairNext3AndNext4 },
    { L"Accent Color P2",       0x52aca, 0x52b46, indexUMK3ArcadeSprites_Bonus, 0x54, &pairNext2AndNext3 },
    { L"Accent Color P3",       0xd5498, 0xd5514, indexUMK3ArcadeSprites_Bonus, 0x54, &pairNextAndNext3 },
    { L"Skin",                  0xb409c, 0xb429a, indexUMK3ArcadeSprites_Bonus, 0x56 },
    { L"Darks and Arms P1/P2",  0xb431a, 0xb439a, indexUMK3ArcadeSprites_Bonus, 0x55 },
    { L"Darks and Arms P3",     0xd5516, 0xd5596, indexUMK3ArcadeSprites_Bonus, 0x55 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_KombatKode[] =
{
    { L"0 (Dragon)",        0xb56fa, 0xb5770, indexUMK3ArcadeSprites_Bonus, 0x45 },
    { L"1 (MK)",            0xb5868, 0xb58e8, indexUMK3ArcadeSprites_Bonus, 0x46 },
    { L"2 (Yin Yang)",      0xb5b52, 0xb5bce, indexUMK3ArcadeSprites_Bonus, 0x47 },
    { L"3 (3)",             0xb5ada, 0xb5b50, indexUMK3ArcadeSprites_Bonus, 0x48 },
    { L"4 (Question Mark)", 0xb58ea, 0xb5968, indexUMK3ArcadeSprites_Bonus, 0x49 },
    { L"5 (Lightning)",     0xb57e6, 0xb5866, indexUMK3ArcadeSprites_Bonus, 0x4a },
    { L"6 (Scorpion)",      0xb5772, 0xb57e4, indexUMK3ArcadeSprites_Bonus, 0x4b },
    { L"7 (Raiden)",        0xb596a, 0xb59ea, indexUMK3ArcadeSprites_Bonus, 0x4c },
    { L"8 (Shao Kahn)",     0xb59ec, 0xb5a64, indexUMK3ArcadeSprites_Bonus, 0x4d },
    { L"9 (Skull)",         0xb5a66, 0xb5ad8, indexUMK3ArcadeSprites_Bonus, 0x4e },
};

const sGame_PaletteDataset UMK3_A_Portraits_Normal[] =
{
    { L"Shang Tsung",       0xb439c, 0xb449c, indexUMK3ArcadeSprites_Bonus, 0x1b },
    { L"Sub-Zero",          0xb449e, 0xb459e, indexUMK3ArcadeSprites_Bonus, 0x21 },
    { L"Stryker",           0xb45a0, 0xb46a0, indexUMK3ArcadeSprites_Bonus, 0x20 },
    { L"Sindel",            0xb46a2, 0xb47a2, indexUMK3ArcadeSprites_Bonus, 0x1e },
    { L"Jax",               0xb47a4, 0xb48a4, indexUMK3ArcadeSprites_Bonus, 0x0f },
    { L"Kung Lao",          0xb48a6, 0xb49a6, indexUMK3ArcadeSprites_Bonus, 0x13 },
    { L"Sonya",             0xb49a8, 0xb4aa8, indexUMK3ArcadeSprites_Bonus, 0x1f },
    { L"Kano",              0xb4aaa, 0xb4baa, indexUMK3ArcadeSprites_Bonus, 0x11 },
    { L"Cyrax",             0xb4bac, 0xb4cac, indexUMK3ArcadeSprites_Bonus, 0x0b },
    { L"Liu Kang",          0xb4cae, 0xb4dae, indexUMK3ArcadeSprites_Bonus, 0x14 },
    { L"Sheeva",            0xb4db0, 0xb4eb0, indexUMK3ArcadeSprites_Bonus, 0x1d },
    { L"Nightwolf",         0xb4eb2, 0xb4fb2, indexUMK3ArcadeSprites_Bonus, 0x17 },
    { L"Sektor",            0xb4fb4, 0xb50b4, indexUMK3ArcadeSprites_Bonus, 0x1a },
    { L"Kabal",             0xb50b6, 0xb51b6, indexUMK3ArcadeSprites_Bonus, 0x10 },
    { L"Motaro",            0xb51b8, 0xb52b8, indexUMK3ArcadeSprites_Bonus, 0x16 },
    { L"Shao Kahn",         0xb52ba, 0xb53ba, indexUMK3ArcadeSprites_Bonus, 0x1c },
    { L"Smoke/Dragon Icons", 0xb543c, 0xb563c, indexUMK3ArcadeSprites_Bonus, 0x22 },
    { L"Ermac",             0xb6e78, 0xb6f78, indexUMK3ArcadeSprites_Bonus, 0x0d },
    { L"Reptile",           0xb6f7a, 0xb707a, indexUMK3ArcadeSprites_Bonus, 0x18 },
    { L"Classic Sub-Zero",  0xb707c, 0xb717c, indexUMK3ArcadeSprites_Bonus, 0x0a },
    { L"Jade",              0xb717e, 0xb727e, indexUMK3ArcadeSprites_Bonus, 0x0e },
    { L"Mileena",           0xb7280, 0xb7380, indexUMK3ArcadeSprites_Bonus, 0x15 },
    { L"Kitana",            0xb7380, 0xb747e, indexUMK3ArcadeSprites_Bonus, 0x12 },
    { L"Scorpion",          0xb7480, 0xb7580, indexUMK3ArcadeSprites_Bonus, 0x19 },
    { L"Endurance 1",       0xb7610, 0xb7690, indexUMK3ArcadeSprites_Bonus, 0x0c },
    { L"Endurance 2",       0xb7692, 0xb7712, indexUMK3ArcadeSprites_Bonus, 0x0c },
    { L"Endurance 3",       0xb7714, 0xb7794, indexUMK3ArcadeSprites_Bonus, 0x0c },
    { L"Endurance 4",       0xb7796, 0xb7816, indexUMK3ArcadeSprites_Bonus, 0x0c },
    { L"Endurance 5",       0xb7818, 0xb7898, indexUMK3ArcadeSprites_Bonus, 0x0c },
};

const sGame_PaletteDataset UMK3_A_Portraits_Faded[] =
{
    { L"Smoke/Dragon Icons", 0x4ec64, 0x4ee64, indexUMK3ArcadeSprites_Bonus, 0x22 },
    { L"Scorpion",          0x4ee66, 0x4ef66, indexUMK3ArcadeSprites_Bonus, 0x19 },
    { L"Kitana",            0x4ef68, 0x4f066, indexUMK3ArcadeSprites_Bonus, 0x12 },
    { L"Mileena",           0x4f06a, 0x4f16a, indexUMK3ArcadeSprites_Bonus, 0x15 },
    { L"Jade",              0x4f16c, 0x4f26c, indexUMK3ArcadeSprites_Bonus, 0x0e },
    { L"Classic Sub-Zero",  0x4f26e, 0x4f36e, indexUMK3ArcadeSprites_Bonus, 0x0a },
    { L"Reptile",           0x4f370, 0x4f470, indexUMK3ArcadeSprites_Bonus, 0x18 },
    { L"Ermac",             0x4f472, 0x4f572, indexUMK3ArcadeSprites_Bonus, 0x0d },
    { L"Kano",              0x4f574, 0x4f674, indexUMK3ArcadeSprites_Bonus, 0x11 },
    { L"Sonya",             0x4f676, 0x4f776, indexUMK3ArcadeSprites_Bonus, 0x1f },
    { L"Jax",               0x4f778, 0x4f878, indexUMK3ArcadeSprites_Bonus, 0x0f },
    { L"Nightwolf",         0x4f87a, 0x4f97a, indexUMK3ArcadeSprites_Bonus, 0x17 },
    { L"Sub-Zero",          0x4f97c, 0x4fa7c, indexUMK3ArcadeSprites_Bonus, 0x21 },
    { L"Stryker",           0x4fa7e, 0x4fb7e, indexUMK3ArcadeSprites_Bonus, 0x20 },
    { L"Sindel",            0x4fb80, 0x4fc80, indexUMK3ArcadeSprites_Bonus, 0x1e },
    { L"Sektor",            0x4fc82, 0x4fd82, indexUMK3ArcadeSprites_Bonus, 0x1a },
    { L"Cyrax",             0x4fd84, 0x4fe84, indexUMK3ArcadeSprites_Bonus, 0x0b },
    { L"Kung Lao",          0x4fe86, 0x4ff86, indexUMK3ArcadeSprites_Bonus, 0x13 },
    { L"Kabal",             0x4ff88, 0x50088, indexUMK3ArcadeSprites_Bonus, 0x10 },
    { L"Sheeva",            0x5008a, 0x5018a, indexUMK3ArcadeSprites_Bonus, 0x1d },
    { L"Shang Tsung",       0x5018c, 0x5028c, indexUMK3ArcadeSprites_Bonus, 0x1b },
    { L"Liu Kang",          0x5028e, 0x5038e, indexUMK3ArcadeSprites_Bonus, 0x14 },
};

const sGame_PaletteDataset UMK3Plus_A_Portraits_PlusCharacters[] =
{
    { L"Rain",                  0xc4c30, 0xc4d30 },
    { L"Human Smoke",           0xbf020, 0xbf120 },
    { L"Human Smoke (Faded)",   0xbef16, 0xbf016 },
    { L"Noob Saibot",           0xbf152, 0xbf252 },
    { L"Noob Saibot (Faded)",   0xbf372, 0xbf472 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_CharacterSelect[] =
{
    { L"Character Select 1/5", 0xa6c94, 0xa6d14, indexUMK3ArcadeSprites_Stages, 0x00, &pairNext4Palettes },
    { L"Character Select 2/5", 0xa6d16, 0xa6d96, indexUMK3ArcadeSprites_Stages, 0x01 },
    { L"Character Select 3/5", 0xa6d98, 0xa6e0e, indexUMK3ArcadeSprites_Stages, 0x02 },
    { L"Character Select 4/5", 0xa6e10, 0xa6e90, indexUMK3ArcadeSprites_Stages, 0x03 },
    { L"Character Select 5/5", 0xa6e92, 0xa6f12, indexUMK3ArcadeSprites_Stages, 0x04 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_OptionSelect[] =
{
    { L"Option Select 1/4", 0xa6a7c, 0xa6afc, indexUMK3ArcadeSprites_Stages, 0x05, &pairNext3Palettes },
    { L"Option Select 2/4", 0xa6afe, 0xa6b7e, indexUMK3ArcadeSprites_Stages, 0x06 },
    { L"Option Select 3/4", 0xa6b80, 0xa6c00, indexUMK3ArcadeSprites_Stages, 0x07 },
    { L"Option Select 4/4", 0xa6c02, 0xa6c82, indexUMK3ArcadeSprites_Stages, 0x08 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_TowerSelectTheBridge[] =
{
    { L"Palette 1/4",                   0xa6f28, 0xa6fa8 },
    { L"Palette 2/4",                   0xa6faa, 0xa702a },
    { L"Palette 3/4",                   0xa7140, 0xa71c0 },
    { L"Palette 4/4",                   0xa71c2, 0xa7242 },
    { L"Tower Select Pillars",          0xb60e6, 0xb6164 },
    { L"Tower Select Pillars Flash",    0x51210, 0x5128e },
    { L"Tower Select Pillar Flooring",  0xb626a, 0xb62ea },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_ContinueScreen[] =
{
    { L"Continue Screen", 0xa6a10, 0xa6a50, indexUMK3ArcadeSprites_Bonus, 0x03 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_CharacterBiography[] =
{
    { L"Character Biography 1/4", 0xa7254, 0xa72d4 },
    { L"Character Biography 2/4", 0xa72d6, 0xa7356 },
    { L"Character Biography 3/4", 0xa7358, 0xa73d8 },
    { L"Character Biography 4/4", 0xa73da, 0xa745a },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_Messages[] =
{
    { L"Ultimate Kombat Kode/Error",    0x31da8, 0x31de8, indexUMK3ArcadeSprites_Bonus, 0x04 },
    { L"Bootup Warning Message",        0x382ae, 0x382ee, indexUMK3ArcadeSprites_Bonus, 0x04 },
    { L"Entering Hidden Game",          0x5aa92, 0x5aad2, indexUMK3ArcadeSprites_Bonus, 0x04 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_FrozenPalettes[] =
{
    { L"Male Ninja",    0x61042, 0x610c2, indexUMK3ArcadeSprites_Bonus, 0x06 },
    { L"Female Ninja",  0x610c4, 0x61144, indexUMK3ArcadeSprites_Bonus, 0x05 },
    { L"Liu Kang",      0x61146, 0x611c6, indexUMK3ArcadeSprites_LiuKang },
    { L"Shang Tsung",   0x611c8, 0x61248, indexUMK3ArcadeSprites_ShangTsung },
    { L"Sheeva",        0x6124a, 0x612ca, indexUMK3ArcadeSprites_Sheeva },
    { L"Kabal",         0x612cc, 0x6134c, indexUMK3ArcadeSprites_Kabal },
    { L"Sonya",         0x6134e, 0x613ce, indexUMK3ArcadeSprites_Sonya },
    { L"Nightwolf",     0x613d0, 0x61450, indexUMK3ArcadeSprites_Nightwolf },
    { L"Sindel",        0x61452, 0x614d2, indexUMK3ArcadeSprites_Sindel },
    { L"Stryker",       0x614d4, 0x61554, indexUMK3ArcadeSprites_Stryker },
    { L"Jax",           0x61556, 0x615d6, indexUMK3ArcadeSprites_Jax },
    { L"Robots",        0x615d8, 0x61658, indexUMK3ArcadeSprites_Bonus, 0x07 },
    { L"Sub-Zero",      0x6165a, 0x616da, indexUMK3ArcadeSprites_SubZero },
    { L"Kano",          0x616dc, 0x6175c, indexUMK3ArcadeSprites_Kano },
    { L"Kung Lao",      0x6175e, 0x617de, indexUMK3ArcadeSprites_KungLao },
    { L"Noob Saibot",   0x60fbe, 0x6103e, indexUMK3ArcadeSprites_NoobSaibot },
    { L"Shao Kahn",     0x6a534, 0x6a5b4, indexMK2ASprites_ShaoKahn },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_SharedEffects[] =
{
    { L"Cyrax Smoke Bombs", 0xb0afe, 0xb0b3e },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_TitleScreen[] =
{
    { L"Title Screen", 0xcf008, 0xcf206, indexUMK3ArcadeSprites_Bonus, 0x09 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_SoulScream[] =
{
    { L"Male Ninja",                0x4517e, 0x451fe, indexUMK3ArcadeSprites_Bonus, 0x06 },
    { L"Female Ninja",              0x45200, 0x45280, indexUMK3ArcadeSprites_Bonus, 0x05 },
    { L"Kano",                      0x45282, 0x45302, indexUMK3ArcadeSprites_Kano, 0x00 },
    { L"Sonya",                     0x45304, 0x45384, indexUMK3ArcadeSprites_Sonya, 0x00 },
    { L"Jax",                       0x45386, 0x45406, indexUMK3ArcadeSprites_Jax, 0x00 },
    { L"Nightwolf",                 0x45408, 0x45488, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
    { L"Sub-Zero",                  0x4548a, 0x4550a, indexUMK3ArcadeSprites_SubZero, 0x00 },
    { L"Stryker",                   0x4550c, 0x4558c, indexUMK3ArcadeSprites_Stryker, 0x00 },
    { L"Sindel",                    0x4558e, 0x4560e, indexUMK3ArcadeSprites_Sindel, 0x00 },
    { L"Cyrax",                     0x45610, 0x45690, indexUMK3ArcadeSprites_Bonus, 0x07 },
    { L"Kung Lao",                  0x45692, 0x45712, indexUMK3ArcadeSprites_KungLao, 0x00 },
    { L"Kabal",                     0x45714, 0x45794, indexUMK3ArcadeSprites_Kabal, 0x00 },
    { L"Sheeva",                    0x45796, 0x45816, indexUMK3ArcadeSprites_Sheeva, 0x00 },
    { L"Shang Tsung and Liu Kang",  0x45818, 0x45898, indexUMK3ArcadeSprites_Bonus, 0x08 },
    { L"Sektor and Smoke",          0x4589a, 0x4591a, indexUMK3ArcadeSprites_Bonus, 0x07 },
};

const sGame_PaletteDataset UMK3Plus_A_BonusPalettes_SoulScream[] =
{
    { L"Scorpion",                  0x4517e, 0x451fe, indexUMK3ArcadeSprites_Bonus, 0x06 },
    { L"Kitana",                    0x45200, 0x45280, indexUMK3ArcadeSprites_Bonus, 0x05 },

    { L"Kano",                      0x45282, 0x45302, indexUMK3ArcadeSprites_Kano, 0x00 },
    { L"Sonya",                     0x45304, 0x45384, indexUMK3ArcadeSprites_Sonya, 0x00 },
    { L"Jax",                       0x45386, 0x45406, indexUMK3ArcadeSprites_Jax, 0x00 },
    { L"Nightwolf",                 0x45408, 0x45488, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
    { L"Sub-Zero",                  0x4548a, 0x4550a, indexUMK3ArcadeSprites_SubZero, 0x00 },
    { L"Stryker",                   0x4550c, 0x4558c, indexUMK3ArcadeSprites_Stryker, 0x00 },
    { L"Sindel",                    0x4558e, 0x4560e, indexUMK3ArcadeSprites_Sindel, 0x00 },
    { L"Cyrax",                     0x45610, 0x45690, indexUMK3ArcadeSprites_Bonus, 0x07 },
    { L"Kung Lao",                  0x45692, 0x45712, indexUMK3ArcadeSprites_KungLao, 0x00 },
    { L"Kabal",                     0x45714, 0x45794, indexUMK3ArcadeSprites_Kabal, 0x00 },
    { L"Sheeva",                    0x45796, 0x45816, indexUMK3ArcadeSprites_Sheeva, 0x00 },
    { L"Shang Tsung and Liu Kang",  0x45818, 0x45898, indexUMK3ArcadeSprites_Bonus, 0x08 },
    
    { L"Smoke",                     0x4589a, 0x4591a, indexUMK3ArcadeSprites_Bonus, 0x07 },
    { L"Ermac",                         0xbe928, 0xbe9a8, indexUMK3ArcadeSprites_Ermac, 0x00 },
    { L"Reptile",                       0xbe9aa, 0xbea2a, indexUMK3ArcadeSprites_Reptile, 0x00 },
    { L"Classic Sub-Zero/Noob Saibot",  0xbea2c, 0xbeaac, indexUMK3ArcadeSprites_ClassicSubZero, 0x00 },
    { L"Human Smoke",                   0xbeaae, 0xbeb2e, indexUMK3ArcadeSprites_HumanSmoke, 0x00 },
    { L"Mileena",                       0xbeb30, 0xbebb0, indexUMK3ArcadeSprites_Mileena, 0x00 },
    { L"Jade",                          0xbebb2, 0xbec32, indexUMK3ArcadeSprites_Jade, 0x00 },
    { L"Sektor",                        0xbec34, 0xbecb4, indexUMK3ArcadeSprites_Sektor, 0x00 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_HUD[] =
{
    { L"Lifebars",          0xbade8, 0xbae68, indexUMK3ArcadeSprites_Bonus, 0x3e, &pairNext },
    { L"Shadows and Meters", 0xbad54, 0xbad74, indexUMK3ArcadeSprites_Bonus, 0x42 },
    { L"Main Font (Red)",   0x4ca7a, 0x4ca9a, indexUMK3ArcadeSprites_Bonus, 0x3f },
    { L"Main Font (White)", 0xbae8c, 0xbaeac, indexUMK3ArcadeSprites_Bonus, 0x3f },
    { L"FIGHT!",            0xb8fdc, 0xb901c, indexUMK3ArcadeSprites_Bonus, 0x3b },
    { L"FIGHT! Flash",      0xb901e, 0xb905e, indexUMK3ArcadeSprites_Bonus, 0x3b },
    { L"Fatality",          0xbb004, 0xbb044, indexUMK3ArcadeSprites_Bonus, 0x3a },
    { L"Friendship 1/2",    0xba80c, 0xba87a, indexUMK3ArcadeSprites_Bonus, 0x3c, &pairNext },
    { L"Friendship 2/2",    0xba87c, 0xba8fc, indexUMK3ArcadeSprites_Bonus, 0x3d },
    { L"Babality 1/6",      0xba8fe, 0xba93e, indexUMK3ArcadeSprites_Bonus, 0x34, &pairNext5Palettes },
    { L"Babality 2/6",      0xba940, 0xba980, indexUMK3ArcadeSprites_Bonus, 0x35 },
    { L"Babality 3/6",      0xba982, 0xba9be, indexUMK3ArcadeSprites_Bonus, 0x36 },
    { L"Babality 4/6",      0xba9c0, 0xba9fa, indexUMK3ArcadeSprites_Bonus, 0x37 },
    { L"Babality 5/6",      0xba9fc, 0xbaa30, indexUMK3ArcadeSprites_Bonus, 0x38 },
    { L"Babality 6/6",      0xbaa32, 0xbaa6c, indexUMK3ArcadeSprites_Bonus, 0x39 },
    { L"Animality",         0xbaa6e, 0xbaaec, indexUMK3ArcadeSprites_Bonus, 0x33 },
    { L"Mercy",             0xbb064, 0xbb0e4, indexUMK3ArcadeSprites_Bonus, 0x41 },
    { L"Mercy Flash",       0xbb0e6, 0xbb166, indexUMK3ArcadeSprites_Bonus, 0x40 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_TowerSelect[] =
{
    { L"Dragon Coin", 0xbaeae, 0xbaf2c, indexUMK3ArcadeSprites_Bonus, 0x43 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_InGameEffects[] =
{
    { L"Dan \"Toasty\" Forden",         0xb62ea, 0xb636a, indexUMK3ArcadeSprites_Bonus, 0x44 },
    { L"Explosion Gibs (Arms, Legs)",   0xbb250, 0xbb2d0 },
    { L"Explosion Gibs (Skull, Bones)", 0xbb2d2, 0xbb352 },
    { L"Explosion Gibs (Ribcages)",     0xbb354, 0xbb3d4 },
    { L"Sindel Sheeva Bloody Skeleton", 0xb9b40, 0xb9bc0 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_FatalScream[] =
{
    { L"Cyrax",         0x13bce, 0x13c0e, indexUMK3ArcadeSprites_Bonus, 0x23 },
    { L"Smoke",         0x13c32, 0x13c72, indexUMK3ArcadeSprites_Bonus, 0x23 },
    { L"Kung Lao",      0xb9bc2, 0xb9c02, indexUMK3ArcadeSprites_Bonus, 0x28 },
    { L"Stryker",       0xb9c04, 0xb9c44, indexUMK3ArcadeSprites_Bonus, 0x31 },
    { L"Sindel P1",     0xb9c46, 0xb9c86, indexUMK3ArcadeSprites_Bonus, 0x2e },
    { L"Sindel P2",     0x13c96, 0x13cd6, indexUMK3ArcadeSprites_Bonus, 0x2f },
    { L"Sonya",         0xb9c88, 0xb9cc4, indexUMK3ArcadeSprites_Bonus, 0x30 },
    { L"Kano",          0xb9cc6, 0xb9d04, indexUMK3ArcadeSprites_Bonus, 0x27 },
    { L"Sheeva",        0xb9d06, 0xb9d44, indexUMK3ArcadeSprites_Bonus, 0x2d },
    { L"Jax",           0xb9d46, 0xb9d84, indexUMK3ArcadeSprites_Bonus, 0x25 },
    { L"Liu Kang",      0xb9da8, 0xb9de8, indexUMK3ArcadeSprites_Bonus, 0x29 },
    { L"Shang Tsung",   0xb9dea, 0xb9e2a, indexUMK3ArcadeSprites_Bonus, 0x2c },
    { L"Kabal",         0xb9e2c, 0xb9e6c, indexUMK3ArcadeSprites_Bonus, 0x26 },
    { L"Nightwolf",     0xb9e6e, 0xb9eae, indexUMK3ArcadeSprites_Bonus, 0x2b },
    { L"Sub-Zero",      0xb9eb0, 0xb9ef0, indexUMK3ArcadeSprites_Bonus, 0x32 },
    { L"Sektor",        0xb9ef2, 0xb9f32, indexUMK3ArcadeSprites_Bonus, 0x23 },
    { L"Female Ninja",  0xb9f34, 0xb9f74, indexUMK3ArcadeSprites_Bonus, 0x24 },
    { L"Male Ninja",    0xb9f76, 0xb9fb6, indexUMK3ArcadeSprites_Bonus, 0x2a },
};

const sGame_PaletteDataset UMK3Plus_A_BonusPalettes_FatalScream[] =
{
    { L"Cyrax",         0x13bce, 0x13c0e, indexUMK3ArcadeSprites_Bonus, 0x23 },
    { L"Smoke",         0x13c32, 0x13c72, indexUMK3ArcadeSprites_Bonus, 0x23 },
    { L"Kung Lao",      0xb9bc2, 0xb9c02, indexUMK3ArcadeSprites_Bonus, 0x28 },
    { L"Stryker",       0xb9c04, 0xb9c44, indexUMK3ArcadeSprites_Bonus, 0x31 },
    { L"Sindel P1",     0xb9c46, 0xb9c86, indexUMK3ArcadeSprites_Bonus, 0x2e },
    { L"Sindel P2",     0x13c96, 0x13cd6, indexUMK3ArcadeSprites_Bonus, 0x2f },
    { L"Sonya",         0xb9c88, 0xb9cc4, indexUMK3ArcadeSprites_Bonus, 0x30 },
    { L"Kano",          0xb9cc6, 0xb9d04, indexUMK3ArcadeSprites_Bonus, 0x27 },
    { L"Sheeva",        0xb9d06, 0xb9d44, indexUMK3ArcadeSprites_Bonus, 0x2d },
    { L"Jax",           0xb9d46, 0xb9d84, indexUMK3ArcadeSprites_Bonus, 0x25 },
    { L"Liu Kang",      0xb9da8, 0xb9de8, indexUMK3ArcadeSprites_Bonus, 0x29 },
    { L"Shang Tsung",   0xb9dea, 0xb9e2a, indexUMK3ArcadeSprites_Bonus, 0x2c },
    { L"Kabal",         0xb9e2c, 0xb9e6c, indexUMK3ArcadeSprites_Bonus, 0x26 },
    { L"Nightwolf",     0xb9e6e, 0xb9eae, indexUMK3ArcadeSprites_Bonus, 0x2b },
    { L"Sub-Zero",      0xb9eb0, 0xb9ef0, indexUMK3ArcadeSprites_Bonus, 0x32 },
    { L"Sektor",        0xb9ef2, 0xb9f32, indexUMK3ArcadeSprites_Bonus, 0x23 },

    { L"Kitana",            0xb9f34, 0xb9f74, indexUMK3ArcadeSprites_Bonus, 0x24 },
    { L"Scorpion",          0xb9f76, 0xb9fb6, indexUMK3ArcadeSprites_Bonus, 0x2a },

    { L"Reptile",           0xc6978, 0xc69b8, indexUMK3ArcadeSprites_Bonus, 0x2a },
    { L"Ermac",             0xc69f8, 0xc6a38, indexUMK3ArcadeSprites_Bonus, 0x2a },
    { L"Classic Sub-Zero",  0xc6a78, 0xc6ab8, indexUMK3ArcadeSprites_Bonus, 0x2a },
    { L"Smoke",             0xc6af8, 0xc6b38, indexUMK3ArcadeSprites_Bonus, 0x2a },
    { L"Noob Saibot",       0xc6b78, 0xc6bb8, indexUMK3ArcadeSprites_Bonus, 0x2a },
    { L"Rain",              0xc6bf8, 0xc6c38, indexUMK3ArcadeSprites_Bonus, 0x2a },
    { L"Jade",              0xc6c78, 0xc6cb8, indexUMK3ArcadeSprites_Bonus, 0x24 },
    { L"Mileena",           0xc6ce8, 0xc6d28, indexUMK3ArcadeSprites_Bonus, 0x24 },
};

const sGame_PaletteDataset UMK3_A_BONUS_PALETTES_HIDDENGAME[] =
{
    { L"Explosions",    0xbacf4, 0xbad14, indexUMK3ArcadeSprites_Bonus, 0x01, &pairFullyLinkedNode },
    { L"Main Ships",    0xbad14, 0xbad34, indexUMK3ArcadeSprites_Bonus, 0x02 },
    { L"Enemies",       0xbad34, 0xbad54, indexUMK3ArcadeSprites_Bonus, 0x00 },
};

const sDescTreeNode UMK3_A_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_LIUKANG_PALETTES_P1, ARRAYSIZE(UMK3_A_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_LIUKANG_PALETTES_P2, ARRAYSIZE(UMK3_A_LIUKANG_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_LiuKang_Extras, ARRAYSIZE(UMK3_A_LiuKang_Extras) },
};

const sDescTreeNode UMK3Plus_A_LiuKang_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_LIUKANG_PALETTES_P1, ARRAYSIZE(UMK3_A_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_LIUKANG_PALETTES_P2, ARRAYSIZE(UMK3_A_LIUKANG_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_LiuKang_P3, ARRAYSIZE(UMK3Plus_A_LiuKang_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_LiuKang_Extras, ARRAYSIZE(UMK3Plus_A_LiuKang_Extras) },
};

const sDescTreeNode UMK3_A_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_PALETTES_P1, ARRAYSIZE(UMK3_A_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_PALETTES_P2, ARRAYSIZE(UMK3_A_KUNGLAO_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_KungLao_Extras, ARRAYSIZE(UMK3_A_KungLao_Extras) },
};

const sDescTreeNode UMK3Plus_A_KungLao_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_PALETTES_P1, ARRAYSIZE(UMK3_A_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_PALETTES_P2, ARRAYSIZE(UMK3_A_KUNGLAO_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_KungLao_P3, ARRAYSIZE(UMK3Plus_A_KungLao_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_KungLao_Extras, ARRAYSIZE(UMK3Plus_A_KungLao_Extras) },
};

const sDescTreeNode UMK3_A_REPTILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_PALETTES_P1, ARRAYSIZE(UMK3_A_REPTILE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_PALETTES_P2, ARRAYSIZE(UMK3_A_REPTILE_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Reptile_Extras, ARRAYSIZE(UMK3_A_Reptile_Extras) },
};

const sDescTreeNode UMK3Plus_A_Reptile_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_PALETTES_P1, ARRAYSIZE(UMK3_A_REPTILE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_PALETTES_P2, ARRAYSIZE(UMK3_A_REPTILE_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Reptile_P3, ARRAYSIZE(UMK3Plus_A_Reptile_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Reptile_Extras, ARRAYSIZE(UMK3Plus_A_Reptile_Extras) },
};

const sDescTreeNode UMK3_A_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_PALETTES_P1, ARRAYSIZE(UMK3_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_PALETTES_P2, ARRAYSIZE(UMK3_A_SUBZERO_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_SubZero_Extras, ARRAYSIZE(UMK3_A_SubZero_Extras) },
};

const sDescTreeNode UMK3Plus_A_SubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_PALETTES_P1, ARRAYSIZE(UMK3_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_PALETTES_P2, ARRAYSIZE(UMK3_A_SUBZERO_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_SubZero_P3, ARRAYSIZE(UMK3Plus_A_SubZero_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_SubZero_Extras, ARRAYSIZE(UMK3Plus_A_SubZero_Extras) },
};

const sDescTreeNode UMK3_A_SHANGTSUNG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_PALETTES_P1, ARRAYSIZE(UMK3_A_SHANGTSUNG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_PALETTES_P2, ARRAYSIZE(UMK3_A_SHANGTSUNG_PALETTES_P2) },
    { L"Morphs", DESC_NODETYPE_TREE, (void*)UMK3_A_ShangTsung_Morphs, ARRAYSIZE(UMK3_A_ShangTsung_Morphs) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_ShangTsung_Extras, ARRAYSIZE(UMK3_A_ShangTsung_Extras) },
};

const sDescTreeNode UMK3Plus_A_ShangTsung_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_PALETTES_P1, ARRAYSIZE(UMK3_A_SHANGTSUNG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_PALETTES_P2, ARRAYSIZE(UMK3_A_SHANGTSUNG_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ShangTsung_P3, ARRAYSIZE(UMK3Plus_A_ShangTsung_P3) },
    { L"Morphs", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ShangTsung_Morphs, ARRAYSIZE(UMK3Plus_A_ShangTsung_Morphs) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ShangTsung_Extras, ARRAYSIZE(UMK3Plus_A_ShangTsung_Extras) },
};

const sDescTreeNode UMK3_A_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_PALETTES_P1, ARRAYSIZE(UMK3_A_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_PALETTES_P2, ARRAYSIZE(UMK3_A_KITANA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Kitana_Extras, ARRAYSIZE(UMK3_A_Kitana_Extras) },
};

const sDescTreeNode UMK3Plus_A_Kitana_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_PALETTES_P1, ARRAYSIZE(UMK3_A_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_PALETTES_P2, ARRAYSIZE(UMK3_A_KITANA_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kitana_P3, ARRAYSIZE(UMK3Plus_A_Kitana_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kitana_Extras, ARRAYSIZE(UMK3Plus_A_Kitana_Extras) },
};

const sDescTreeNode UMK3_A_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_PALETTES_P1, ARRAYSIZE(UMK3_A_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_PALETTES_P2, ARRAYSIZE(UMK3_A_JAX_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Jax_Extras, ARRAYSIZE(UMK3_A_Jax_Extras) },
};

const sDescTreeNode UMK3Plus_A_Jax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_PALETTES_P1, ARRAYSIZE(UMK3_A_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_PALETTES_P2, ARRAYSIZE(UMK3_A_JAX_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Jax_P3, ARRAYSIZE(UMK3Plus_A_Jax_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Jax_Extras, ARRAYSIZE(UMK3Plus_A_Jax_Extras) },
};

const sDescTreeNode UMK3_A_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_PALETTES_P1, ARRAYSIZE(UMK3_A_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_PALETTES_P2, ARRAYSIZE(UMK3_A_MILEENA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Mileena_Extras, ARRAYSIZE(UMK3_A_Mileena_Extras) },
};

const sDescTreeNode UMK3Plus_A_Mileena_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_PALETTES_P1, ARRAYSIZE(UMK3_A_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_PALETTES_P2, ARRAYSIZE(UMK3_A_MILEENA_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Mileena_P3, ARRAYSIZE(UMK3Plus_A_Mileena_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Mileena_Extras, ARRAYSIZE(UMK3Plus_A_Mileena_Extras) },
};

const sDescTreeNode UMK3_A_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_PALETTES_P1, ARRAYSIZE(UMK3_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_PALETTES_P2, ARRAYSIZE(UMK3_A_SCORPION_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Scorpion_Extras, ARRAYSIZE(UMK3_A_Scorpion_Extras) },
};

const sDescTreeNode UMK3Plus_A_Scorpion_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_PALETTES_P1, ARRAYSIZE(UMK3_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_PALETTES_P2, ARRAYSIZE(UMK3_A_SCORPION_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Scorpion_P3, ARRAYSIZE(UMK3Plus_A_Scorpion_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Scorpion_Extras, ARRAYSIZE(UMK3Plus_A_Scorpion_Extras) },
};

const sDescTreeNode UMK3_A_SHAOKAHN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_SHAOKAHN_PALETTES, ARRAYSIZE(UMK3_A_SHAOKAHN_PALETTES) },
};

const sDescTreeNode UMK3_A_SMOKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SMOKE_PALETTES_P1, ARRAYSIZE(UMK3_A_SMOKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SMOKE_PALETTES_P2, ARRAYSIZE(UMK3_A_SMOKE_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Smoke_Extras, ARRAYSIZE(UMK3_A_Smoke_Extras) },
};

const sDescTreeNode UMK3Plus_A_Smoke_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SMOKE_PALETTES_P1, ARRAYSIZE(UMK3_A_SMOKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SMOKE_PALETTES_P2, ARRAYSIZE(UMK3_A_SMOKE_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Smoke_P3, ARRAYSIZE(UMK3Plus_A_Smoke_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Smoke_Extras, ARRAYSIZE(UMK3Plus_A_Smoke_Extras) },
};

const sDescTreeNode UMK3_A_NOOB_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_NOOB_PALETTES, ARRAYSIZE(UMK3_A_NOOB_PALETTES) },
};

const sDescTreeNode UMK3Plus_A_NoobSaibot_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_NOOB_PALETTES, ARRAYSIZE(UMK3_A_NOOB_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_NoobSaibot_P2, ARRAYSIZE(UMK3Plus_A_NoobSaibot_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_NoobSaibot_P3, ARRAYSIZE(UMK3Plus_A_NoobSaibot_P3) },
};

const sDescTreeNode UMK3_A_MOTARO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_MOTARO_PALETTES, ARRAYSIZE(UMK3_A_MOTARO_PALETTES) },
};

const sDescTreeNode UMK3_A_JADE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_JADE_PALETTES_P1, ARRAYSIZE(UMK3_A_JADE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_JADE_PALETTES_P2, ARRAYSIZE(UMK3_A_JADE_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Jade_Extras, ARRAYSIZE(UMK3_A_Jade_Extras) },    
};

const sDescTreeNode UMK3Plus_A_Jade_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_JADE_PALETTES_P1, ARRAYSIZE(UMK3_A_JADE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_JADE_PALETTES_P2, ARRAYSIZE(UMK3_A_JADE_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Jade_P3, ARRAYSIZE(UMK3Plus_A_Jade_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Jade_Extras, ARRAYSIZE(UMK3Plus_A_Jade_Extras) },
};

const sDescTreeNode UMK3_A_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SONYA_PALETTES_P1, ARRAYSIZE(UMK3_A_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SONYA_PALETTES_P2, ARRAYSIZE(UMK3_A_SONYA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sonya_Extras, ARRAYSIZE(UMK3_A_Sonya_Extras) },
};

const sDescTreeNode UMK3Plus_A_Sonya_COLLECTION[] =
{
    // fork the p1/p2s as well since the ring toss extras are shared between p1/p3
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_SONYA_PALETTES_P1, ARRAYSIZE(UMK3Plus_A_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_SONYA_PALETTES_P2, ARRAYSIZE(UMK3Plus_A_SONYA_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sonya_P3, ARRAYSIZE(UMK3Plus_A_Sonya_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sonya_Extras, ARRAYSIZE(UMK3Plus_A_Sonya_Extras) },
};

const sDescTreeNode UMK3_A_NIGHTWOLF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_PALETTES_P1, ARRAYSIZE(UMK3_A_NIGHTWOLF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_PALETTES_P2, ARRAYSIZE(UMK3_A_NIGHTWOLF_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Nightwolf_Extras, ARRAYSIZE(UMK3_A_Nightwolf_Extras) },
};

const sDescTreeNode UMK3Plus_A_Nightwolf_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_PALETTES_P1, ARRAYSIZE(UMK3_A_NIGHTWOLF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_PALETTES_P2, ARRAYSIZE(UMK3_A_NIGHTWOLF_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Nightwolf_P3, ARRAYSIZE(UMK3Plus_A_Nightwolf_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Nightwolf_Extras, ARRAYSIZE(UMK3Plus_A_Nightwolf_Extras) },
};

const sDescTreeNode UMK3_A_RAIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_RAIN_PALETTES, ARRAYSIZE(UMK3_A_RAIN_PALETTES) },
};

const sDescTreeNode UMK3Plus_A_Rain_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_RAIN_PALETTES, ARRAYSIZE(UMK3_A_RAIN_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Rain_P2, ARRAYSIZE(UMK3Plus_A_Rain_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Rain_P3, ARRAYSIZE(UMK3Plus_A_Rain_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Rain_Extras, ARRAYSIZE(UMK3Plus_A_Rain_Extras) },
};

const sDescTreeNode UMK3_A_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_PALETTES_P1, ARRAYSIZE(UMK3_A_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_PALETTES_P2, ARRAYSIZE(UMK3_A_KANO_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Kano_Extras, ARRAYSIZE(UMK3_A_Kano_Extras) },
};

const sDescTreeNode UMK3Plus_A_Kano_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_PALETTES_P1, ARRAYSIZE(UMK3_A_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_PALETTES_P2, ARRAYSIZE(UMK3_A_KANO_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kano_P3, ARRAYSIZE(UMK3Plus_A_Kano_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kano_Extras, ARRAYSIZE(UMK3Plus_A_Kano_Extras) },
};

const sDescTreeNode UMK3_A_ERMAC_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_PALETTES_P1, ARRAYSIZE(UMK3_A_ERMAC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_PALETTES_P2, ARRAYSIZE(UMK3_A_ERMAC_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Ermac_Extras, ARRAYSIZE(UMK3_A_Ermac_Extras) },
};

const sDescTreeNode UMK3Plus_A_Ermac_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_PALETTES_P1, ARRAYSIZE(UMK3_A_ERMAC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_PALETTES_P2, ARRAYSIZE(UMK3_A_ERMAC_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Ermac_P3, ARRAYSIZE(UMK3Plus_A_Ermac_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Ermac_Extras, ARRAYSIZE(UMK3Plus_A_Ermac_Extras) },
};

const sDescTreeNode UMK3_A_SEKTOR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_PALETTES_P1, ARRAYSIZE(UMK3_A_SEKTOR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_PALETTES_P2, ARRAYSIZE(UMK3_A_SEKTOR_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sektor_Extras, ARRAYSIZE(UMK3_A_Sektor_Extras) },
};

const sDescTreeNode UMK3Plus_A_Sektor_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_PALETTES_P1, ARRAYSIZE(UMK3_A_SEKTOR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_PALETTES_P2, ARRAYSIZE(UMK3_A_SEKTOR_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sektor_P3, ARRAYSIZE(UMK3Plus_A_Sektor_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sektor_Extras, ARRAYSIZE(UMK3Plus_A_Sektor_Extras) },
};

const sDescTreeNode UMK3_A_SINDEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_PALETTES_P1, ARRAYSIZE(UMK3_A_SINDEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_PALETTES_P2, ARRAYSIZE(UMK3_A_SINDEL_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sindel_Extras, ARRAYSIZE(UMK3_A_Sindel_Extras) },
};

const sDescTreeNode UMK3Plus_A_Sindel_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_PALETTES_P1, ARRAYSIZE(UMK3_A_SINDEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_PALETTES_P2, ARRAYSIZE(UMK3_A_SINDEL_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sindel_P3, ARRAYSIZE(UMK3Plus_A_Sindel_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sindel_Extras, ARRAYSIZE(UMK3Plus_A_Sindel_Extras) },
};

const sDescTreeNode UMK3_A_STRYKER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_PALETTES_P1, ARRAYSIZE(UMK3_A_STRYKER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_PALETTES_P2, ARRAYSIZE(UMK3_A_STRYKER_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Stryker_Extras, ARRAYSIZE(UMK3_A_Stryker_Extras) },
};

const sDescTreeNode UMK3Plus_A_Stryker_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_PALETTES_P1, ARRAYSIZE(UMK3_A_STRYKER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_PALETTES_P2, ARRAYSIZE(UMK3_A_STRYKER_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Stryker_P3, ARRAYSIZE(UMK3Plus_A_Stryker_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Stryker_Extras, ARRAYSIZE(UMK3Plus_A_Stryker_Extras) },
};

const sDescTreeNode UMK3_A_CYRAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_PALETTES_P1, ARRAYSIZE(UMK3_A_CYRAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_PALETTES_P2, ARRAYSIZE(UMK3_A_CYRAX_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Cyrax_Extras, ARRAYSIZE(UMK3_A_Cyrax_Extras) },
};

const sDescTreeNode UMK3Plus_A_Cyrax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_PALETTES_P1, ARRAYSIZE(UMK3_A_CYRAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_PALETTES_P2, ARRAYSIZE(UMK3_A_CYRAX_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Cyrax_P3, ARRAYSIZE(UMK3Plus_A_Cyrax_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Cyrax_Extras, ARRAYSIZE(UMK3Plus_A_Cyrax_Extras) },
};

const sDescTreeNode UMK3_A_KABAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_PALETTES_P1, ARRAYSIZE(UMK3_A_KABAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_PALETTES_P2, ARRAYSIZE(UMK3_A_KABAL_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Kabal_Extras, ARRAYSIZE(UMK3_A_Kabal_Extras) },
};

const sDescTreeNode UMK3Plus_A_Kabal_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_PALETTES_P1, ARRAYSIZE(UMK3_A_KABAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_PALETTES_P2, ARRAYSIZE(UMK3_A_KABAL_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kabal_P3, ARRAYSIZE(UMK3Plus_A_Kabal_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kabal_Extras, ARRAYSIZE(UMK3Plus_A_Kabal_Extras) },
};

const sDescTreeNode UMK3_A_SHEEVA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_PALETTES_P1, ARRAYSIZE(UMK3_A_SHEEVA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_PALETTES_P2, ARRAYSIZE(UMK3_A_SHEEVA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sheeva_Extras, ARRAYSIZE(UMK3_A_Sheeva_Extras) },
};

const sDescTreeNode UMK3Plus_A_Sheeva_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_PALETTES_P1, ARRAYSIZE(UMK3_A_SHEEVA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_PALETTES_P2, ARRAYSIZE(UMK3_A_SHEEVA_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sheeva_P3, ARRAYSIZE(UMK3Plus_A_Sheeva_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sheeva_Extras, ARRAYSIZE(UMK3Plus_A_Sheeva_Extras) },
};

const sDescTreeNode UMK3_A_HUMSMOKE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_HUMANSMOKE_PALETTES, ARRAYSIZE(UMK3_A_HUMANSMOKE_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_HumanSmoke_Extras, ARRAYSIZE(UMK3_A_HumanSmoke_Extras) },
};

const sDescTreeNode UMK3Plus_A_HumanSmoke_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_HUMANSMOKE_PALETTES, ARRAYSIZE(UMK3_A_HUMANSMOKE_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_HumanSmoke_P2, ARRAYSIZE(UMK3Plus_A_HumanSmoke_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_HumanSmoke_P3, ARRAYSIZE(UMK3Plus_A_HumanSmoke_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_HumanSmoke_Extras, ARRAYSIZE(UMK3Plus_A_HumanSmoke_Extras) },
};

const sDescTreeNode UMK3_A_CLASSUB_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_PALETTES_P1, ARRAYSIZE(UMK3_A_CLASSUB_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_PALETTES_P2, ARRAYSIZE(UMK3_A_CLASSUB_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_ClassicSubZero_Extras, ARRAYSIZE(UMK3_A_ClassicSubZero_Extras) },
};

const sDescTreeNode UMK3Plus_A_ClasicSubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_PALETTES_P1, ARRAYSIZE(UMK3_A_CLASSUB_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_PALETTES_P2, ARRAYSIZE(UMK3_A_CLASSUB_PALETTES_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ClasicSubZero_P3, ARRAYSIZE(UMK3Plus_A_ClasicSubZero_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ClasicSubZero_Extras, ARRAYSIZE(UMK3Plus_A_ClasicSubZero_Extras) },
};

const sDescTreeNode UMK3Plus_A_Triborg_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Triborg_P1, ARRAYSIZE(UMK3Plus_A_Triborg_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Triborg_P2, ARRAYSIZE(UMK3Plus_A_Triborg_P2) },
    { L"P3", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Triborg_P3, ARRAYSIZE(UMK3Plus_A_Triborg_P3) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Triborg_Extras, ARRAYSIZE(UMK3Plus_A_Triborg_Extras) },
};

const sDescTreeNode UMK3_A_Portraits_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_Normal, ARRAYSIZE(UMK3_A_Portraits_Normal) },
    { L"Faded", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_Faded, ARRAYSIZE(UMK3_A_Portraits_Faded) },
};

const sDescTreeNode UMK3Plus_A_Portraits_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_Normal, ARRAYSIZE(UMK3_A_Portraits_Normal) },
    { L"Faded", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_Faded, ARRAYSIZE(UMK3_A_Portraits_Faded) },
    { L"Plus Characters", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Portraits_PlusCharacters, ARRAYSIZE(UMK3Plus_A_Portraits_PlusCharacters) },
};

const sDescTreeNode UMK3_A_Backgrounds_COLLECTION[] =
{
    { L"Character Select", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_CharacterSelect, ARRAYSIZE(UMK3_A_Backgrounds_CharacterSelect) },
    { L"VS Screen", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_VSScreen, ARRAYSIZE(UMK3_A_Backgrounds_VSScreen) },
    { L"Option Select", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_OptionSelect, ARRAYSIZE(UMK3_A_Backgrounds_OptionSelect) },
    { L"Tower Select/The Bridge", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_TowerSelectTheBridge, ARRAYSIZE(UMK3_A_Backgrounds_TowerSelectTheBridge) },
    { L"Continue Screen", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_ContinueScreen, ARRAYSIZE(UMK3_A_Backgrounds_ContinueScreen) },
    { L"Character Biography", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_CharacterBiography, ARRAYSIZE(UMK3_A_Backgrounds_CharacterBiography) },
    { L"Messages", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_Messages, ARRAYSIZE(UMK3_A_Backgrounds_Messages) },
};

const sDescTreeNode UMK3_A_VSBioPortraits_COLLECTION[] =
{
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Kitana, ARRAYSIZE(UMK3_A_VSBioPortraits_Kitana) },
    { L"Jade and Mileena", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_JadeandMileena, ARRAYSIZE(UMK3_A_VSBioPortraits_JadeandMileena) },
    { L"Male Ninja 1", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_MaleNinja1, ARRAYSIZE(UMK3_A_VSBioPortraits_MaleNinja1) },
    { L"Male Ninja 2", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_MaleNinja2, ARRAYSIZE(UMK3_A_VSBioPortraits_MaleNinja2) },
    { L"Cyrax and Smoke", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_CyraxandSmoke, ARRAYSIZE(UMK3_A_VSBioPortraits_CyraxandSmoke) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Sektor, ARRAYSIZE(UMK3_A_VSBioPortraits_Sektor) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Sonya, ARRAYSIZE(UMK3_A_VSBioPortraits_Sonya) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Kano, ARRAYSIZE(UMK3_A_VSBioPortraits_Kano) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Stryker, ARRAYSIZE(UMK3_A_VSBioPortraits_Stryker) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Kabal, ARRAYSIZE(UMK3_A_VSBioPortraits_Kabal) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_KungLao, ARRAYSIZE(UMK3_A_VSBioPortraits_KungLao) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Sindel, ARRAYSIZE(UMK3_A_VSBioPortraits_Sindel) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_LiuKang, ARRAYSIZE(UMK3_A_VSBioPortraits_LiuKang) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_SubZero, ARRAYSIZE(UMK3_A_VSBioPortraits_SubZero) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_ShangTsung, ARRAYSIZE(UMK3_A_VSBioPortraits_ShangTsung) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Nightwolf, ARRAYSIZE(UMK3_A_VSBioPortraits_Nightwolf) },
    { L"Sheeva", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Sheeva, ARRAYSIZE(UMK3_A_VSBioPortraits_Sheeva) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_Jax, ARRAYSIZE(UMK3_A_VSBioPortraits_Jax) },
};

const sDescTreeNode UMK3Plus_A_VSBioPortraits_COLLECTION[] =
{
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Kitana, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Kitana) },
    { L"Jade and Mileena", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_JadeandMileena, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_JadeandMileena) },
    { L"Male Ninja 1", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_MaleNinja1, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_MaleNinja1) },
    { L"Male Ninja 2", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_MaleNinja2, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_MaleNinja2) },
    { L"Cyrax and Smoke", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_CyraxandSmoke, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_CyraxandSmoke) },
    { L"Sektor and Triborg", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Sektor, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Sektor) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Sonya, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Sonya) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Kano, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Kano) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Stryker, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Stryker) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Kabal, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Kabal) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_KungLao, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_KungLao) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Sindel, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Sindel) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_LiuKang, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_LiuKang) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_SubZero, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_SubZero) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_ShangTsung, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_ShangTsung) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Nightwolf, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Nightwolf) },
    { L"Sheeva", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Sheeva, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Sheeva) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_Jax, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_Jax) },
};

const sDescTreeNode UMK3_A_BONUS_COLLECTION[] =
{
    { L"Frozen Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_FrozenPalettes, ARRAYSIZE(UMK3_A_BonusPalettes_FrozenPalettes) },
    { L"Soul Scream", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_SoulScream, ARRAYSIZE(UMK3_A_BonusPalettes_SoulScream) },
    { L"Fatal Scream", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_FatalScream, ARRAYSIZE(UMK3_A_BonusPalettes_FatalScream) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_HUD, ARRAYSIZE(UMK3_A_BonusPalettes_HUD) },
    { L"Tower Select", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_TowerSelect, ARRAYSIZE(UMK3_A_BonusPalettes_TowerSelect) },
    { L"In-Game Effects", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_InGameEffects, ARRAYSIZE(UMK3_A_BonusPalettes_InGameEffects) },
    { L"Shared Effects", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_SharedEffects, ARRAYSIZE(UMK3_A_BonusPalettes_SharedEffects) },
    { L"Title Screen", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_TitleScreen, ARRAYSIZE(UMK3_A_BonusPalettes_TitleScreen) },
    { L"Kombat Kode", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_KombatKode, ARRAYSIZE(UMK3_A_BonusPalettes_KombatKode) },
    { L"Hidden Game", DESC_NODETYPE_TREE, (void*)UMK3_A_BONUS_PALETTES_HIDDENGAME, ARRAYSIZE(UMK3_A_BONUS_PALETTES_HIDDENGAME) },
};

const sDescTreeNode UMK3Plus_A_BonusPalettes_COLLECTION[] =
{
    { L"Frozen Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_FrozenPalettes, ARRAYSIZE(UMK3_A_BonusPalettes_FrozenPalettes) },
    { L"Soul Scream", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_BonusPalettes_SoulScream, ARRAYSIZE(UMK3Plus_A_BonusPalettes_SoulScream) },
    { L"Fatal Scream", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_BonusPalettes_FatalScream, ARRAYSIZE(UMK3Plus_A_BonusPalettes_FatalScream) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_HUD, ARRAYSIZE(UMK3_A_BonusPalettes_HUD) },
    { L"Tower Select", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_TowerSelect, ARRAYSIZE(UMK3_A_BonusPalettes_TowerSelect) },
    { L"In-Game Effects", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_InGameEffects, ARRAYSIZE(UMK3_A_BonusPalettes_InGameEffects) },
    { L"Shared Effects", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_SharedEffects, ARRAYSIZE(UMK3_A_BonusPalettes_SharedEffects) },
    // Not at this location for Plus
    //{ L"Title Screen", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_TitleScreen, ARRAYSIZE(UMK3_A_BonusPalettes_TitleScreen) },
    { L"Kombat Kode", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_KombatKode, ARRAYSIZE(UMK3_A_BonusPalettes_KombatKode) },
    { L"Hidden Game", DESC_NODETYPE_TREE, (void*)UMK3_A_BONUS_PALETTES_HIDDENGAME, ARRAYSIZE(UMK3_A_BONUS_PALETTES_HIDDENGAME) },
};

const sDescTreeNode UMK3_A_UNITS[] =
{
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_COLLECTION, ARRAYSIZE(UMK3_A_KITANA_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_COLLECTION, ARRAYSIZE(UMK3_A_REPTILE_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3_A_SONYA_COLLECTION, ARRAYSIZE(UMK3_A_SONYA_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_COLLECTION, ARRAYSIZE(UMK3_A_JAX_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_COLLECTION, ARRAYSIZE(UMK3_A_NIGHTWOLF_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)UMK3_A_JADE_COLLECTION, ARRAYSIZE(UMK3_A_JADE_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_COLLECTION, ARRAYSIZE(UMK3_A_SCORPION_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_COLLECTION, ARRAYSIZE(UMK3_A_KANO_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_COLLECTION, ARRAYSIZE(UMK3_A_SUBZERO_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_COLLECTION, ARRAYSIZE(UMK3_A_SEKTOR_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_COLLECTION, ARRAYSIZE(UMK3_A_SINDEL_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_COLLECTION, ARRAYSIZE(UMK3_A_STRYKER_COLLECTION) },
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_COLLECTION, ARRAYSIZE(UMK3_A_CYRAX_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_COLLECTION, ARRAYSIZE(UMK3_A_KUNGLAO_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_COLLECTION, ARRAYSIZE(UMK3_A_KABAL_COLLECTION) },
    { L"Sheeva", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_COLLECTION, ARRAYSIZE(UMK3_A_SHEEVA_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_COLLECTION, ARRAYSIZE(UMK3_A_SHANGTSUNG_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3_A_LIUKANG_COLLECTION, ARRAYSIZE(UMK3_A_LIUKANG_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)UMK3_A_SMOKE_COLLECTION, ARRAYSIZE(UMK3_A_SMOKE_COLLECTION) },
    { L"Human Smoke", DESC_NODETYPE_TREE, (void*)UMK3_A_HUMSMOKE_COLLECTION, ARRAYSIZE(UMK3_A_HUMSMOKE_COLLECTION) },

    { L"Classic Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_COLLECTION, ARRAYSIZE(UMK3_A_CLASSUB_COLLECTION) },
    { L"Ermac", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_COLLECTION, ARRAYSIZE(UMK3_A_ERMAC_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_COLLECTION, ARRAYSIZE(UMK3_A_MILEENA_COLLECTION) },
    
    { L"Motaro", DESC_NODETYPE_TREE, (void*)UMK3_A_MOTARO_COLLECTION, ARRAYSIZE(UMK3_A_MOTARO_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)UMK3_A_SHAOKAHN_COLLECTION, ARRAYSIZE(UMK3_A_SHAOKAHN_COLLECTION) },

    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)UMK3_A_NOOB_COLLECTION, ARRAYSIZE(UMK3_A_NOOB_COLLECTION) },
    { L"Rain", DESC_NODETYPE_TREE, (void*)UMK3_A_RAIN_COLLECTION, ARRAYSIZE(UMK3_A_RAIN_COLLECTION) },

    { L"Portraits", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_COLLECTION, ARRAYSIZE(UMK3_A_Portraits_COLLECTION) },
    { L"Backgrounds", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_COLLECTION, ARRAYSIZE(UMK3_A_Backgrounds_COLLECTION) },
    { L"VS/Bio Portraits", DESC_NODETYPE_TREE, (void*)UMK3_A_VSBioPortraits_COLLECTION, ARRAYSIZE(UMK3_A_VSBioPortraits_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_BONUS_COLLECTION, ARRAYSIZE(UMK3_A_BONUS_COLLECTION) },
};

const sDescTreeNode UMK3Plus_A_UNITS[] =
{
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kitana_COLLECTION, ARRAYSIZE(UMK3Plus_A_Kitana_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Reptile_COLLECTION, ARRAYSIZE(UMK3Plus_A_Reptile_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sonya_COLLECTION, ARRAYSIZE(UMK3Plus_A_Sonya_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Jax_COLLECTION, ARRAYSIZE(UMK3Plus_A_Jax_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Nightwolf_COLLECTION, ARRAYSIZE(UMK3Plus_A_Nightwolf_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Jade_COLLECTION, ARRAYSIZE(UMK3Plus_A_Jade_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Scorpion_COLLECTION, ARRAYSIZE(UMK3Plus_A_Scorpion_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kano_COLLECTION, ARRAYSIZE(UMK3Plus_A_Kano_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_SubZero_COLLECTION, ARRAYSIZE(UMK3Plus_A_SubZero_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sektor_COLLECTION, ARRAYSIZE(UMK3Plus_A_Sektor_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sindel_COLLECTION, ARRAYSIZE(UMK3Plus_A_Sindel_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Stryker_COLLECTION, ARRAYSIZE(UMK3Plus_A_Stryker_COLLECTION) },
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Cyrax_COLLECTION, ARRAYSIZE(UMK3Plus_A_Cyrax_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_KungLao_COLLECTION, ARRAYSIZE(UMK3Plus_A_KungLao_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Kabal_COLLECTION, ARRAYSIZE(UMK3Plus_A_Kabal_COLLECTION) },
    { L"Sheeva", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Sheeva_COLLECTION, ARRAYSIZE(UMK3Plus_A_Sheeva_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ShangTsung_COLLECTION, ARRAYSIZE(UMK3Plus_A_ShangTsung_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_LiuKang_COLLECTION, ARRAYSIZE(UMK3Plus_A_LiuKang_COLLECTION) },
    { L"Smoke", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Smoke_COLLECTION, ARRAYSIZE(UMK3Plus_A_Smoke_COLLECTION) },
    { L"Human Smoke", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_HumanSmoke_COLLECTION, ARRAYSIZE(UMK3Plus_A_HumanSmoke_COLLECTION) },
    { L"Clasic Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_ClasicSubZero_COLLECTION, ARRAYSIZE(UMK3Plus_A_ClasicSubZero_COLLECTION) },
    { L"Ermac", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Ermac_COLLECTION, ARRAYSIZE(UMK3Plus_A_Ermac_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Mileena_COLLECTION, ARRAYSIZE(UMK3Plus_A_Mileena_COLLECTION) },
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_NoobSaibot_COLLECTION, ARRAYSIZE(UMK3Plus_A_NoobSaibot_COLLECTION) },
    { L"Rain", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Rain_COLLECTION, ARRAYSIZE(UMK3Plus_A_Rain_COLLECTION) },
    { L"Triborg", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Triborg_COLLECTION, ARRAYSIZE(UMK3Plus_A_Triborg_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_Portraits_COLLECTION, ARRAYSIZE(UMK3Plus_A_Portraits_COLLECTION) },
    { L"VS/Bio Portraits", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_VSBioPortraits_COLLECTION, ARRAYSIZE(UMK3Plus_A_VSBioPortraits_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)UMK3Plus_A_BonusPalettes_COLLECTION, ARRAYSIZE(UMK3Plus_A_BonusPalettes_COLLECTION) },
};

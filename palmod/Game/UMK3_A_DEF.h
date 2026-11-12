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
    { L"Ring Toss P1", 0xb003c, 0xb00bc, indexUMK3ArcadeSprites_Sonya, 0x02 },
};

const sGame_PaletteDataset UMK3_A_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0xaffba, 0xb003a, indexUMK3ArcadeSprites_Sonya, 0x00 },
    { L"Ring Toss P2", 0x35cf4, 0x35d74, indexUMK3ArcadeSprites_Sonya, 0x02 },
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

const sGame_PaletteDataset UMK3_A_Jade_Extras[] =
{
    { L"Gibs", 0x425fc, 0x4267c, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality", 0x58552, 0x58592 },
    { L"Animality", 0xbb46c, 0xbb48c },
    { L"Shadow Kick", 0x4a21e, 0x4a29e, indexUMK3ArcadeSprites_Jade, 0x00 },
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
    { L"Gibs", 0xba6e6, 0xba766, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality", 0xb7e76, 0xb7eb6 },
    { L"Animality", 0xbb458, 0xbb46a },
};

const sGame_PaletteDataset UMK3_A_Reptile_Extras[] =
{
    { L"Gibs", 0x42700, 0x42780, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality", 0x58510, 0x58550 },
    { L"Animality", 0xbb4d2, 0xbb4ea },
};

const sGame_PaletteDataset UMK3_A_Sonya_Extras[] =
{
    { L"Gibs", 0xba45e, 0xba4de, indexUMK3ArcadeSprites_Sonya, 0x01 },
    { L"Babality", 0xb7b22, 0xb7b62 },
    { L"Animality", 0xb8d3c, 0xb8d4a },
};

const sGame_PaletteDataset UMK3_A_Jax_Extras[] =
{
    { L"Gibs P1", 0xba154, 0xba1d2, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Gibs P2", 0x42804, 0x42882, indexUMK3ArcadeSprites_Jax, 0x01 },
    { L"Babality", 0xb7ba6, 0xb7be2 },
    { L"Animality", 0xb8d4c, 0xb8d5c },
};

const sGame_PaletteDataset UMK3_A_Nightwolf_Extras[] =
{
    { L"Gibs", 0xba0d2, 0xba152, indexUMK3ArcadeSprites_Nightwolf, 0x01 },
    { L"Babality", 0xb7d6e, 0xb7dae },
    { L"Animality", 0xb8d70, 0xb8d80 },
    { L"Shoulder Charge", 0x6a4b2, 0x6a532, indexUMK3ArcadeSprites_Nightwolf, 0x00 },
    { L"Raiden Transformation", 0xb8e48, 0xb8ec8 },
    { L"Arcade Cabinet", 0xbabf0, 0xbac70 },
};

const sGame_PaletteDataset UMK3_A_Scorpion_Extras[] =
{
    { L"Gibs", 0x4257a, 0x425fa, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality", 0x5848c, 0x584cc },
    { L"Animality", 0xbb52a, 0xbb552 },
};

const sGame_PaletteDataset UMK3_A_Kano_Extras[] =
{
    { L"Gibs", 0xba258, 0xba2d8, indexUMK3ArcadeSprites_Kano, 0x01 },
    { L"Babality", 0xb7a60, 0xb7a9c },
    { L"Animality", 0xb8db8, 0xb8dc8 },
};

const sGame_PaletteDataset UMK3_A_SubZero_Extras[] =
{
    { L"Gibs", 0xba562, 0xba5e2, indexUMK3ArcadeSprites_SubZero, 0x01 },
    { L"Babality", 0xb7c26, 0xb7c66 },
    { L"Animality", 0xb8d5e, 0xb8d6e },
};

const sGame_PaletteDataset UMK3_A_Sektor_Extras[] =
{
    { L"Gibs", 0x424f8, 0x42578, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality", 0xb7c68, 0xb7ca8 },
    { L"Animality", 0xb8d94, 0xb8da4 },
};

const sGame_PaletteDataset UMK3_A_Sindel_Extras[] =
{
    { L"Gibs", 0xba2da, 0xba358, indexUMK3ArcadeSprites_Sindel, 0x01 },
    { L"Babality", 0xb7a9e, 0xb7ade },
    { L"Animality", 0xb8dca, 0xb8dda },
};

const sGame_PaletteDataset UMK3_A_Stryker_Extras[] =
{
    { L"Gibs", 0xba3dc, 0xba45c, indexUMK3ArcadeSprites_Stryker, 0x01 },
    { L"Babality", 0xb7d2c, 0xb7d6c },
    { L"Animality", 0xb8e12, 0xb8e22 },
};

const sGame_PaletteDataset UMK3_A_Cyrax_Extras[] =
{
    { L"Gibs", 0x42904, 0x42982, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality", 0xb7db0, 0xb7df0 },
    { L"Animality", 0xb8ddc, 0xb8dec },
};

const sGame_PaletteDataset UMK3_A_KungLao_Extras[] =
{
    { L"Gibs P1", 0xba1d6, 0xba254, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Gibs P2", 0x42984, 0x42a02, indexUMK3ArcadeSprites_KungLao, 0x01 },
    { L"Babality", 0xb7b64, 0xb7ba4 },
    { L"Animality", 0xb8d82, 0xb8d92 },
    { L"Deadly Whirlwind", 0xb9fce, 0xba04e },
};

const sGame_PaletteDataset UMK3_A_Kabal_Extras[] =
{
    { L"Gibs", 0xba5e4, 0xba664, indexUMK3ArcadeSprites_Kabal, 0x01 },
    { L"Babality", 0xb7ae0, 0xb7b20 },
    { L"Animality", 0xb8e36, 0xb8e46 },
    { L"Soul Scream", 0xb7efa, 0xb7f7a, indexUMK3ArcadeSprites_Kabal, 0x00 },
};

const sGame_PaletteDataset UMK3_A_Sheeva_Extras[] =
{
    { L"Gibs", 0xba4e0, 0xba560, indexUMK3ArcadeSprites_Sheeva, 0x01 },
    { L"Babality", 0xb7cec, 0xb7d2a },
    { L"Animality", 0xb8e00, 0xb8e10 },
};

const sGame_PaletteDataset UMK3_A_ShangTsung_Extras[] =
{
    { L"Gibs", 0xba666, 0xba6e4, indexUMK3ArcadeSprites_ShangTsung, 0x01 },
    { L"Babality", 0xb7caa, 0xb7cea },
    { L"Animality", 0xb8da6, 0xb8db6 },
};

const sGame_PaletteDataset UMK3_A_ShangTsung_Morphs[] =
{
    { L"Sub-Zero", 0xb1286, 0xb1306 },
    { L"Sindel", 0xb1308, 0xb1384 },
    { L"Robots", 0xb1386, 0xb1406 },
    { L"Stryker", 0xb1408, 0xb1488 },
    { L"Kung Lao", 0xb148a, 0xb1504 },
    { L"Kano", 0xb1506, 0xb1586 },
    { L"Jax", 0xb1588, 0xb1608 },
    { L"Nightwolf", 0xb160a, 0xb1686 },
    { L"Sonya", 0xb1688, 0xb1706 },
    { L"Kabal", 0xb1708, 0xb1788 },
    { L"Sheeva", 0xb178a, 0xb1808 },
    { L"Liu Kang", 0xb180a, 0xb188a },
    { L"Female Ninja", 0xbb554, 0xbb5d4 },
    { L"Male Ninja", 0xbb5d6, 0xbb654 },
};

const sGame_PaletteDataset UMK3_A_LiuKang_Extras[] =
{
    { L"Gibs", 0xba35a, 0xba3da, indexUMK3ArcadeSprites_LiuKang, 0x01 },
    { L"Babality", 0xb7be4, 0xb7c24 },
    { L"Animality", 0xb8dee, 0xb8dfe },
    { L"Arcade Cabinet", 0xbab70, 0xbabee },
};

const sGame_PaletteDataset UMK3_A_Smoke_Extras[] =
{
    { L"Gibs", 0x42884, 0x42902, indexUMK3ArcadeSprites_Sektor, 0x01 },
    { L"Babality", 0xb7df2, 0xb7e32 },
    { L"Animality", 0xb8e24, 0xb8e34 },
};

const sGame_PaletteDataset UMK3_A_HumanSmoke_Extras[] =
{
    { L"Gibs", 0x42476, 0x424f6, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality", 0x5844a, 0x5848a },
};

const sGame_PaletteDataset UMK3_A_ClassicSubZero_Extras[] =
{
    { L"Gibs", 0x42782, 0x42802, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality", 0x584ce, 0x5850e },
};

const sGame_PaletteDataset UMK3_A_Ermac_Extras[] =
{
    { L"Gibs", 0xba768, 0xba7e8, indexUMK3ArcadeSprites_Reptile, 0x01 },
    { L"Babality", 0xb7e34, 0xb7e74 },
};

const sGame_PaletteDataset UMK3_A_Mileena_Extras[] =
{
    { L"Gibs", 0x4267e, 0x426fe, indexUMK3ArcadeSprites_Kitana, 0x01 },
    { L"Babality", 0x58594, 0x585d4 },
    { L"Animality", 0xbb48e, 0xbb4ae },
    { L"Animality Extra", 0xbb4b0, 0xbb4d0 },
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

const sGame_PaletteDataset UMK3_A_Backgrounds_CharacterSelect[] =
{
    { L"Character Select 1/5", 0xa6c94, 0xa6d14 },
    { L"Character Select 2/5", 0xa6d16, 0xa6d96 },
    { L"Character Select 3/5", 0xa6d98, 0xa6e0e },
    { L"Character Select 4/5", 0xa6e10, 0xa6e90 },
    { L"Character Select 5/5", 0xa6e92, 0xa6f12 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_OptionSelect[] =
{
    { L"Option Select 1/4", 0xa6a7c, 0xa6afc },
    { L"Option Select 2/4", 0xa6afe, 0xa6b7e },
    { L"Option Select 3/4", 0xa6b80, 0xa6c00 },
    { L"Option Select 4/4", 0xa6c02, 0xa6c82 },
};

const sGame_PaletteDataset UMK3_A_Backgrounds_TowerSelectTheBridge[] =
{
    { L"Palette 1/4", 0xa6f28, 0xa6fa8 },
    { L"Palette 2/4", 0xa6faa, 0xa702a },
    { L"Palette 3/4", 0xa7140, 0xa71c0 },
    { L"Palette 4/4", 0xa71c2, 0xa7242 },
    { L"Tower Select Pillars", 0xb60e6, 0xb6164 },
    { L"Tower Select Pillars Flash", 0x51210, 0x5128e },
    { L"Tower Select Pillar Flooring", 0xb626a, 0xb62ea },
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
    { L"Ultimate Kombat Kode/Error", 0x31da8, 0x31de8, indexUMK3ArcadeSprites_Bonus, 0x04 },
    { L"Bootup Warning Message",    0x382ae, 0x382ee, indexUMK3ArcadeSprites_Bonus, 0x04 },
    { L"Entering Hidden Game",      0x5aa92, 0x5aad2, indexUMK3ArcadeSprites_Bonus, 0x04 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_FrozenPalettes[] =
{
    { L"Ninja (Male)",  0x61042, 0x610c2, indexUMK3ArcadeSprites_Bonus, 0x06 },
    { L"Ninja (Female)", 0x610c4, 0x61144, indexUMK3ArcadeSprites_Bonus, 0x05 },
    { L"Liu Kang",      0x61146, 0x611c6, indexUMK3ArcadeSprites_LiuKang },
    { L"Shang Tsung",   0x611c8, 0x61248, indexUMK3ArcadeSprites_ShangTsung },
    { L"Sheeva",        0x6124a, 0x612ca, indexUMK3ArcadeSprites_Sheeva },
    { L"Kabal",         0x612cc, 0x6134c, indexUMK3ArcadeSprites_Kabal },
    { L"Sonya",         0x6134e, 0x613ce, indexUMK3ArcadeSprites_Sonya },
    { L"Nightwolf",     0x613d0, 0x61450, indexUMK3ArcadeSprites_Nightwolf },
    { L"Sindel",        0x61452, 0x614d2, indexUMK3ArcadeSprites_Sindel },
    { L"Stryker",       0x614d4, 0x61554, indexUMK3ArcadeSprites_Stryker },
    { L"Jax",           0x61556, 0x615d6, indexUMK3ArcadeSprites_Jax },
    { L"Ninja (Robot)", 0x615d8, 0x61658, indexUMK3ArcadeSprites_Bonus, 0x07 },
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
    { L"Ninja (Male)",              0x4517e, 0x451fe, indexUMK3ArcadeSprites_Bonus, 0x06 },
    { L"Ninja (Female)",            0x45200, 0x45280, indexUMK3ArcadeSprites_Bonus, 0x05 },
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

const sGame_PaletteDataset UMK3_A_BonusPalettes_HUD[] =
{
    { L"Lifebars",          0xbade8, 0xbae68 },
    { L"Shadows and Meters", 0xbad54, 0xbad74 },
    { L"Main Font (Red)",   0x4ca7a, 0x4ca9a },
    { L"Main Font (White)", 0xbae8c, 0xbaeac },
    { L"FIGHT!",            0xb8fdc, 0xb901c },
    { L"FIGHT! Flash",      0xb901e, 0xb905e },
    { L"Fatality",          0xbb004, 0xbb044 },
    { L"Friendship 1/2",    0xba80c, 0xba87a },
    { L"Friendship 2/2",    0xba87c, 0xba8fc },
    { L"Babality 1/6",      0xba8fe, 0xba93e },
    { L"Babality 2/6",      0xba940, 0xba980 },
    { L"Babality 3/6",      0xba982, 0xba9be },
    { L"Babality 4/6",      0xba9c0, 0xba9fa },
    { L"Babality 5/6",      0xba9fc, 0xbaa30 },
    { L"Babality 6/6",      0xbaa32, 0xbaa6c },
    { L"Animality",         0xbaa6e, 0xbaaec },
    { L"Mercy",             0xbb064, 0xbb0e4 },
    { L"Mercy Flash",       0xbb0e6, 0xbb166 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_TowerSelect[] =
{
    { L"Dragon Coin", 0xbaeae, 0xbaf2c },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_InGameEffects[] =
{
    { L"Dan \"Toasty\" Forden",         0xb62ea, 0xb636a },
    { L"Explosion Gibs (Arms, Legs)",   0xbb250, 0xbb2d0 },
    { L"Explosion Gibs (Skull, Bones)", 0xbb2d2, 0xbb352 },
    { L"Explosion Gibs (Ribcages)",     0xbb354, 0xbb3d4 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_FatalScream[] =
{
    { L"Cyrax",         0x13bce, 0x13c0e },
    { L"Smoke",         0x13c32, 0x13c72 },
    { L"Kung Lao",      0xb9bc2, 0xb9c02 },
    { L"Stryker",       0xb9c04, 0xb9c44 },
    { L"Sindel P1",     0xb9c46, 0xb9c86 },
    { L"Sindel P2",     0x13c96, 0x13cd6 },
    { L"Sonya",         0xb9c88, 0xb9cc4 },
    { L"Kano",          0xb9cc6, 0xb9d04 },
    { L"Sheeva",        0xb9d06, 0xb9d44 },
    { L"Jax",           0xb9d46, 0xb9d84 },
    { L"Liu Kang",      0xb9da8, 0xb9de8 },
    { L"Shang Tsung",   0xb9dea, 0xb9e2a },
    { L"Kabal",         0xb9e2c, 0xb9e6c },
    { L"Nightwolf",     0xb9e6e, 0xb9eae },
    { L"Sub-Zero",      0xb9eb0, 0xb9ef0 },
    { L"Sektor",        0xb9ef2, 0xb9f32 },
    { L"Female Ninja",  0xb9f34, 0xb9f74 },
    { L"Male Ninja",    0xb9f76, 0xb9fb6 },
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

const sDescTreeNode UMK3_A_KUNGLAO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_PALETTES_P1, ARRAYSIZE(UMK3_A_KUNGLAO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KUNGLAO_PALETTES_P2, ARRAYSIZE(UMK3_A_KUNGLAO_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_KungLao_Extras, ARRAYSIZE(UMK3_A_KungLao_Extras) },
};

const sDescTreeNode UMK3_A_REPTILE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_PALETTES_P1, ARRAYSIZE(UMK3_A_REPTILE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_REPTILE_PALETTES_P2, ARRAYSIZE(UMK3_A_REPTILE_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Reptile_Extras, ARRAYSIZE(UMK3_A_Reptile_Extras) },
};

const sDescTreeNode UMK3_A_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_PALETTES_P1, ARRAYSIZE(UMK3_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SUBZERO_PALETTES_P2, ARRAYSIZE(UMK3_A_SUBZERO_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_SubZero_Extras, ARRAYSIZE(UMK3_A_SubZero_Extras) },
};

const sDescTreeNode UMK3_A_SHANGTSUNG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_PALETTES_P1, ARRAYSIZE(UMK3_A_SHANGTSUNG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SHANGTSUNG_PALETTES_P2, ARRAYSIZE(UMK3_A_SHANGTSUNG_PALETTES_P2) },
    { L"Morphs", DESC_NODETYPE_TREE, (void*)UMK3_A_ShangTsung_Morphs, ARRAYSIZE(UMK3_A_ShangTsung_Morphs) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_ShangTsung_Extras, ARRAYSIZE(UMK3_A_ShangTsung_Extras) },
};

const sDescTreeNode UMK3_A_KITANA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_PALETTES_P1, ARRAYSIZE(UMK3_A_KITANA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KITANA_PALETTES_P2, ARRAYSIZE(UMK3_A_KITANA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Kitana_Extras, ARRAYSIZE(UMK3_A_Kitana_Extras) },
};

const sDescTreeNode UMK3_A_JAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_PALETTES_P1, ARRAYSIZE(UMK3_A_JAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_JAX_PALETTES_P2, ARRAYSIZE(UMK3_A_JAX_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Jax_Extras, ARRAYSIZE(UMK3_A_Jax_Extras) },
};

const sDescTreeNode UMK3_A_MILEENA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_PALETTES_P1, ARRAYSIZE(UMK3_A_MILEENA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_MILEENA_PALETTES_P2, ARRAYSIZE(UMK3_A_MILEENA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Mileena_Extras, ARRAYSIZE(UMK3_A_Mileena_Extras) },
};

const sDescTreeNode UMK3_A_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_PALETTES_P1, ARRAYSIZE(UMK3_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SCORPION_PALETTES_P2, ARRAYSIZE(UMK3_A_SCORPION_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Scorpion_Extras, ARRAYSIZE(UMK3_A_Scorpion_Extras) },
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

const sDescTreeNode UMK3_A_NOOB_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_NOOB_PALETTES, ARRAYSIZE(UMK3_A_NOOB_PALETTES) },
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

const sDescTreeNode UMK3_A_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SONYA_PALETTES_P1, ARRAYSIZE(UMK3_A_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SONYA_PALETTES_P2, ARRAYSIZE(UMK3_A_SONYA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sonya_Extras, ARRAYSIZE(UMK3_A_Sonya_Extras) },
};

const sDescTreeNode UMK3_A_NIGHTWOLF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_PALETTES_P1, ARRAYSIZE(UMK3_A_NIGHTWOLF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_NIGHTWOLF_PALETTES_P2, ARRAYSIZE(UMK3_A_NIGHTWOLF_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Nightwolf_Extras, ARRAYSIZE(UMK3_A_Nightwolf_Extras) },
};

const sDescTreeNode UMK3_A_RAIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_RAIN_PALETTES, ARRAYSIZE(UMK3_A_RAIN_PALETTES) },
};

const sDescTreeNode UMK3_A_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_PALETTES_P1, ARRAYSIZE(UMK3_A_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KANO_PALETTES_P2, ARRAYSIZE(UMK3_A_KANO_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Kano_Extras, ARRAYSIZE(UMK3_A_Kano_Extras) },
};

const sDescTreeNode UMK3_A_ERMAC_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_PALETTES_P1, ARRAYSIZE(UMK3_A_ERMAC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_ERMAC_PALETTES_P2, ARRAYSIZE(UMK3_A_ERMAC_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Ermac_Extras, ARRAYSIZE(UMK3_A_Ermac_Extras) },
};

const sDescTreeNode UMK3_A_SEKTOR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_PALETTES_P1, ARRAYSIZE(UMK3_A_SEKTOR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SEKTOR_PALETTES_P2, ARRAYSIZE(UMK3_A_SEKTOR_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sektor_Extras, ARRAYSIZE(UMK3_A_Sektor_Extras) },
};

const sDescTreeNode UMK3_A_SINDEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_PALETTES_P1, ARRAYSIZE(UMK3_A_SINDEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SINDEL_PALETTES_P2, ARRAYSIZE(UMK3_A_SINDEL_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sindel_Extras, ARRAYSIZE(UMK3_A_Sindel_Extras) },
};

const sDescTreeNode UMK3_A_STRYKER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_PALETTES_P1, ARRAYSIZE(UMK3_A_STRYKER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_STRYKER_PALETTES_P2, ARRAYSIZE(UMK3_A_STRYKER_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Stryker_Extras, ARRAYSIZE(UMK3_A_Stryker_Extras) },
};

const sDescTreeNode UMK3_A_CYRAX_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_PALETTES_P1, ARRAYSIZE(UMK3_A_CYRAX_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_CYRAX_PALETTES_P2, ARRAYSIZE(UMK3_A_CYRAX_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Cyrax_Extras, ARRAYSIZE(UMK3_A_Cyrax_Extras) },
};

const sDescTreeNode UMK3_A_KABAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_PALETTES_P1, ARRAYSIZE(UMK3_A_KABAL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_KABAL_PALETTES_P2, ARRAYSIZE(UMK3_A_KABAL_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Kabal_Extras, ARRAYSIZE(UMK3_A_Kabal_Extras) },
};

const sDescTreeNode UMK3_A_SHEEVA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_PALETTES_P1, ARRAYSIZE(UMK3_A_SHEEVA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_SHEEVA_PALETTES_P2, ARRAYSIZE(UMK3_A_SHEEVA_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_Sheeva_Extras, ARRAYSIZE(UMK3_A_Sheeva_Extras) },
};

const sDescTreeNode UMK3_A_HUMSMOKE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_HUMANSMOKE_PALETTES, ARRAYSIZE(UMK3_A_HUMANSMOKE_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_HumanSmoke_Extras, ARRAYSIZE(UMK3_A_HumanSmoke_Extras) },
};

const sDescTreeNode UMK3_A_CLASSUB_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_PALETTES_P1, ARRAYSIZE(UMK3_A_CLASSUB_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_A_CLASSUB_PALETTES_P2, ARRAYSIZE(UMK3_A_CLASSUB_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_A_ClassicSubZero_Extras, ARRAYSIZE(UMK3_A_ClassicSubZero_Extras) },
};

const sDescTreeNode UMK3_A_Portraits_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_Normal, ARRAYSIZE(UMK3_A_Portraits_Normal) },
    { L"Faded", DESC_NODETYPE_TREE, (void*)UMK3_A_Portraits_Faded, ARRAYSIZE(UMK3_A_Portraits_Faded) },
};

const sDescTreeNode UMK3_A_Backgrounds_COLLECTION[] =
{
    { L"Character Select", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_CharacterSelect, ARRAYSIZE(UMK3_A_Backgrounds_CharacterSelect) },
    { L"Option Select", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_OptionSelect, ARRAYSIZE(UMK3_A_Backgrounds_OptionSelect) },
    { L"Tower Select/The Bridge", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_TowerSelectTheBridge, ARRAYSIZE(UMK3_A_Backgrounds_TowerSelectTheBridge) },
    { L"Continue Screen", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_ContinueScreen, ARRAYSIZE(UMK3_A_Backgrounds_ContinueScreen) },
    { L"Character Biography", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_CharacterBiography, ARRAYSIZE(UMK3_A_Backgrounds_CharacterBiography) },
    { L"Messages", DESC_NODETYPE_TREE, (void*)UMK3_A_Backgrounds_Messages, ARRAYSIZE(UMK3_A_Backgrounds_Messages) },
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
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)UMK3_A_BONUS_COLLECTION, ARRAYSIZE(UMK3_A_BONUS_COLLECTION) },
};

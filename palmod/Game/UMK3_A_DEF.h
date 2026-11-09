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
    { L"Ring Toss P1", 0xb003c, 0xb00bc },
};

const sGame_PaletteDataset UMK3_A_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0xaffba, 0xb003a, indexUMK3ArcadeSprites_Sonya, 0x00 },
    { L"Ring Toss P2", 0x35cf4, 0x35d74 },
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
    { L"Gibs", 0x425fc, 0x4267c },
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
    { L"Gibs", 0xba6e6, 0xba766 },
};

const sGame_PaletteDataset UMK3_A_Reptile_Extras[] =
{
    { L"Gibs", 0x42700, 0x42780 },
};

const sGame_PaletteDataset UMK3_A_Sonya_Extras[] =
{
    { L"Gibs", 0xba45e, 0xba4de },
};

const sGame_PaletteDataset UMK3_A_Jax_Extras[] =
{
    { L"Gibs P1", 0xba154, 0xba1d2 },
    { L"Gibs P2", 0x42804, 0x42882 },
};

const sGame_PaletteDataset UMK3_A_Nightwolf_Extras[] =
{
    { L"Gibs", 0xba0d2, 0xba152 },
};

const sGame_PaletteDataset UMK3_A_Scorpion_Extras[] =
{
    { L"Gibs", 0x4257a, 0x425fa },
};

const sGame_PaletteDataset UMK3_A_Kano_Extras[] =
{
    { L"Gibs", 0xba258, 0xba2d8 },
};

const sGame_PaletteDataset UMK3_A_SubZero_Extras[] =
{
    { L"Gibs", 0xba562, 0xba5e2 },
};

const sGame_PaletteDataset UMK3_A_Sektor_Extras[] =
{
    { L"Gibs", 0x424f8, 0x42578 },
};

const sGame_PaletteDataset UMK3_A_Sindel_Extras[] =
{
    { L"Gibs", 0xba2da, 0xba358 },
};

const sGame_PaletteDataset UMK3_A_Stryker_Extras[] =
{
    { L"Gibs", 0xba3dc, 0xba45c },
};

const sGame_PaletteDataset UMK3_A_Cyrax_Extras[] =
{
    { L"Gibs", 0x42904, 0x42982 },
};

const sGame_PaletteDataset UMK3_A_KungLao_Extras[] =
{
    { L"Gibs P1", 0xba1d6, 0xba254 },
    { L"Gibs P2", 0x42984, 0x42a02 },
};

const sGame_PaletteDataset UMK3_A_Kabal_Extras[] =
{
    { L"Gibs", 0xba5e4, 0xba664 },
};

const sGame_PaletteDataset UMK3_A_Sheeva_Extras[] =
{
    { L"Gibs", 0xba4e0, 0xba560 },
};

const sGame_PaletteDataset UMK3_A_ShangTsung_Extras[] =
{
    { L"Gibs", 0xba666, 0xba6e4 },
};

const sGame_PaletteDataset UMK3_A_LiuKang_Extras[] =
{
    { L"Gibs", 0xba35a, 0xba3da },
};

const sGame_PaletteDataset UMK3_A_Smoke_Extras[] =
{
    { L"Gibs", 0x42884, 0x42902 },
};

const sGame_PaletteDataset UMK3_A_HumanSmoke_Extras[] =
{
    { L"Gibs", 0x42476, 0x424f6 },
};

const sGame_PaletteDataset UMK3_A_ClassicSubZero_Extras[] =
{
    { L"Gibs", 0x42782, 0x42802 },
};

const sGame_PaletteDataset UMK3_A_Ermac_Extras[] =
{
    { L"Gibs", 0xba768, 0xba7e8 },
};

const sGame_PaletteDataset UMK3_A_Mileena_Extras[] =
{
    { L"Gibs", 0x4267e, 0x426fe },
};

const sGame_PaletteDataset UMK3_A_Portraits_Normal[] =
{
    { L"Shang Tsung", 0xb439c, 0xb449c },
    { L"Sub-Zero", 0xb449e, 0xb459e },
    { L"Stryker", 0xb45a0, 0xb46a0 },
    { L"Sindel", 0xb46a2, 0xb47a2 },
    { L"Jax", 0xb47a4, 0xb48a4 },
    { L"Kung Lao", 0xb48a6, 0xb49a6 },
    { L"Sonya", 0xb49a8, 0xb4aa8 },
    { L"Kano", 0xb4aaa, 0xb4baa },
    { L"Cyrax", 0xb4bac, 0xb4cac },
    { L"Liu Kang", 0xb4cae, 0xb4dae },
    { L"Sheeva", 0xb4db0, 0xb4eb0 },
    { L"Nightwolf", 0xb4eb2, 0xb4fb2 },
    { L"Sektor", 0xb4fb4, 0xb50b4 },
    { L"Kabal", 0xb50b6, 0xb51b6 },
    { L"Motaro", 0xb51b8, 0xb52b8 },
    { L"Shao Kahn", 0xb52ba, 0xb53ba },
    { L"Smoke/Dragon Icons", 0xb543c, 0xb563c },
    { L"Ermac", 0xb6e78, 0xb6f78 },
    { L"Reptile", 0xb6f7a, 0xb7078 },
    { L"Classic Sub-Zero", 0xb707c, 0xb717c },
    { L"Jade", 0xb717e, 0xb727e },
    { L"Mileena", 0xb7280, 0xb7380 },
    { L"Kitana", 0xb7380, 0xb7480 },
    { L"Scorpion", 0xb7480, 0xb7580 },
    { L"Endurance 1", 0xb7610, 0xb7690 },
    { L"Endurance 2", 0xb7692, 0xb7712 },
    { L"Endurance 3", 0xb7714, 0xb7794 },
    { L"Endurance 4", 0xb7796, 0xb7816 },
    { L"Endurance 5", 0xb7818, 0xb7898 },
};

const sGame_PaletteDataset UMK3_A_Portraits_Faded[] =
{
    { L"Somke/Dragon Icons", 0x4ec64, 0x4ee64 },
    { L"Scorpion", 0x4ee66, 0x4ef66 },
    { L"Kitana", 0x4ef68, 0x4f068 },
    { L"Mileena", 0x4f06a, 0x4f16a },
    { L"Jade", 0x4f16c, 0x4f26c },
    { L"Classic Sub-Zero", 0x4f26e, 0x4f36e },
    { L"Reptile", 0x4f370, 0x4f470 },
    { L"Ermac", 0x4f472, 0x4f572 },
    { L"Kano", 0x4f574, 0x4f674 },
    { L"Sonya", 0x4f676, 0x4f776 },
    { L"Jax", 0x4f778, 0x4f878 },
    { L"Nightwolf", 0x4f87a, 0x4f97a },
    { L"Sub-Zero", 0x4f97c, 0x4fa7c },
    { L"Stryker", 0x4fa7e, 0x4fb7e },
    { L"Sindel", 0x4fb80, 0x4fc80 },
    { L"Sektor", 0x4fc82, 0x4fd82 },
    { L"Cyrax", 0x4fd84, 0x4fe84 },
    { L"Kung Lao", 0x4fe86, 0x4ff86 },
    { L"Kabal", 0x4ff88, 0x50088 },
    { L"Sheeva", 0x5008a, 0x5018a },
    { L"Shang Tsung", 0x5018c, 0x5028c },
    { L"Liu Kang", 0x5028e, 0x5038e },
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
    { L"Continue Screen ", 0xa6a10, 0xa6a50 },
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
    { L"Ultimate Kombat Kode/Error", 0x31da8, 0x31de8 },
    { L"Bootup Warning Message", 0x382ae, 0x382ee },
    { L"Entering Hidden Game", 0x5aa92, 0x5aad2 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_FrozenPalettes[] =
{
    { L"Ninja (Male)",  0x61042, 0x610c2, indexUMK3ArcadeSprites_Scorpion },
    { L"Ninja (Female)", 0x610c4, 0x61144, indexUMK3ArcadeSprites_Kitana },
    { L"Liu Kang",      0x61146, 0x611c6, indexUMK3ArcadeSprites_LiuKang },
    { L"Shang Tsung",   0x611c8, 0x61248, indexUMK3ArcadeSprites_ShangTsung },
    { L"Sheeva",        0x6124a, 0x612ca, indexUMK3ArcadeSprites_Sheeva },
    { L"Kabal",         0x612cc, 0x6134c, indexUMK3ArcadeSprites_Kabal },
    { L"Sonya",         0x6134e, 0x613ce, indexUMK3ArcadeSprites_Sonya },
    { L"Nightwolf",     0x613d0, 0x61450, indexUMK3ArcadeSprites_Nightwolf },
    { L"Sindel",        0x61452, 0x614d2, indexUMK3ArcadeSprites_Sindel },
    { L"Stryker",       0x614d4, 0x61554, indexUMK3ArcadeSprites_Stryker },
    { L"Jax",           0x61556, 0x615d6, indexUMK3ArcadeSprites_Jax },
    { L"Ninja (Robot)", 0x615d8, 0x61658, indexUMK3ArcadeSprites_Cyrax },
    { L"Sub-Zero",      0x6165a, 0x616da, indexUMK3ArcadeSprites_SubZero },
    { L"Kano",          0x616dc, 0x6175c, indexUMK3ArcadeSprites_Kano },
    { L"Kung Lao",      0x6175e, 0x617de, indexUMK3ArcadeSprites_KungLao },
    { L"Noob Saibot",   0x60fbe, 0x6103e, indexUMK3ArcadeSprites_NoobSaibot },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_HUD[] =
{
    { L"Lifebars", 0xbade8, 0xbae68 },
    { L"Shadows and Meters", 0xbad54, 0xbad74 },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_SharedEffects[] =
{
    { L"Cyrax Smoke Bombs", 0xb0afe, 0xb0b3e },
};

const sGame_PaletteDataset UMK3_A_BonusPalettes_TitleScreen[] =
{
    { L"Title Screen", 0xcf008, 0xcf206 },
};

const sGame_PaletteDataset UMK3_A_BONUS_PALETTES_HIDDENGAME[] =
{
    { L"Explosions", 0xbacf4, 0xbad14, indexUMK3ArcadeSprites_Bonus, 0x01, &pairFullyLinkedNode },
    { L"Main Ships", 0xbad14, 0xbad34, indexUMK3ArcadeSprites_Bonus, 0x02 },
    { L"Enemies", 0xbad34, 0xbad54, indexUMK3ArcadeSprites_Bonus, 0x00 },
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
    { L"HUD", DESC_NODETYPE_TREE, (void*)UMK3_A_BonusPalettes_HUD, ARRAYSIZE(UMK3_A_BonusPalettes_HUD) },
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

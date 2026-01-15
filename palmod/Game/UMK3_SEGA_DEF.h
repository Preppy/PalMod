#pragma once

const std::vector<uint16_t> UMK3_SEGA_IMGIDS_USED =
{
    indexSegaMK3Sprites_Cyrax,          // 0x0a
    indexSegaMK3Sprites_Jax,            // 0x0b
    indexSegaMK3Sprites_Kabal,          // 0x0c
    indexSegaMK3Sprites_Kano,           // 0x0d
    indexSegaMK3Sprites_KungLao,        // 0x0e
    indexSegaMK3Sprites_LiuKang,        // 0x0f
    indexSegaMK3Sprites_Motaro,         // 0x10
    indexSegaMK3Sprites_Nightwolf,      // 0x11
    indexSegaMK3Sprites_RSmoke,         // 0x13
    indexSegaMK3Sprites_Sektor,         // 0x14
    indexSegaMK3Sprites_ShangTsung,     // 0x15
    indexSegaMK3Sprites_ShaoKhan,       // 0x16
    indexSegaMK3Sprites_Sheeva,         // 0x17
    indexSegaMK3Sprites_Sindel,         // 0x29
    indexSegaMK3Sprites_Sonya,          // 0x18
    indexSegaMK3Sprites_Stryker,        // 0x19
    indexSegaMK3Sprites_UnSubZero,      // 0x1a
    indexSegaMK3Sprites_Bonus,          // 0x1b

    indexSegaUMK3Sprites_CSubZero,      // 0x1d
    indexSegaUMK3Sprites_Ermac,         // 0x1e
    indexSegaUMK3Sprites_HSmoke,        // 0x1f
    indexSegaUMK3Sprites_Jade,          // 0x20
    indexSegaUMK3Sprites_Kitana,        // 0x21
    indexSegaUMK3Sprites_Mileena,       // 0x22
    indexSegaUMK3Sprites_Noob,          // 0x23
    indexSegaUMK3Sprites_Rain,          // 0x24
    indexSegaUMK3Sprites_Reptile,       // 0x25
    indexSegaUMK3Sprites_Scorpion,      // 0x26
    indexSegaUMK3Sprites_Bonus,         // 0x27
    indexSegaUMK3Sprites_Stages,        // 0x28
};

const sGame_PaletteDataset UMK3_SEGA_Kano_P1[] =
{
    { L"Kano P1", 0xe02a2, 0xe02c2, indexSegaMK3Sprites_Kano, 0x00 },
    { L"Optic Blast P1", 0xe0302, 0xe0322, indexSegaMK3Sprites_Kano, 0x01 },
    { L"Friendship P1", 0xe03c2, 0xe03e2, indexSegaMK3Sprites_Kano, 0x15 },
    { L"Gibs P1", 0xe0382, 0xe03a2, indexSegaMK3Sprites_Kano, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Kano_P2[] =
{
    { L"Kano P2", 0xe02c2, 0xe02e2, indexSegaMK3Sprites_Kano, 0x00 },
    { L"Optic Blast P2", 0xe0322, 0xe0342, indexSegaMK3Sprites_Kano, 0x01 },
    { L"Friendship P2", 0xe03e2, 0xe0402, indexSegaMK3Sprites_Kano, 0x15 },
    { L"Gibs P2", 0xe03a2, 0xe03c2, indexSegaMK3Sprites_Kano, 0x010 },
};

const sGame_PaletteDataset UMK3_SEGA_Kano_Extras[] =
{
    { L"Frozen", 0xe02e2, 0xe0302, indexSegaMK3Sprites_Kano, 0x00 },
    { L"Babality", 0xe0362, 0xe0382, indexSegaMK3Sprites_Kano, 0x12 },
    { L"Scream of Death", 0xe0402, 0xe0422, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Unknown", 0xe0442, 0xe0462 },
};

const sGame_PaletteDataset UMK3_SEGA_Sonya_P1[] =
{
    { L"Sonya P1", 0x10bf2a, 0x10bf4a, indexSegaMK3Sprites_Sonya, 0x00 },
    { L"Ring Toss P1", 0x10c02a, 0x10c04a, indexSegaMK3Sprites_Sonya, 0x01 },
    { L"Gibs P1", 0x10bfaa, 0x10bfca, indexSegaMK3Sprites_Sonya, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Sonya_P2[] =
{
    { L"Sonya P2", 0x10bf4a, 0x10bf6a, indexSegaMK3Sprites_Sonya, 0x00 },
    { L"Ring Toss P2", 0x10c04a, 0x10c06a, indexSegaMK3Sprites_Sonya, 0x01 },
    { L"Gibs P2", 0x10bfca, 0x10bfea, indexSegaMK3Sprites_Sonya, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Sonya_Extras[] =
{
    { L"Frozen", 0x10bf6a, 0x10bf8a, indexSegaMK3Sprites_Sonya, 0x00 },
    { L"Ring Toss Frozen", 0x10c06a, 0x10c08a, indexSegaMK3Sprites_Sonya, 0x01 },
    { L"Babality", 0x10bf8a, 0x10bfaa, indexSegaMK3Sprites_Sonya, 0x12 },
    { L"Scream of Death", 0x10c00a, 0x10c02a, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Jax_P1[] =
{
    { L"Jax P1", 0x13d5b2, 0x13d5d2, indexSegaMK3Sprites_Jax, 0x00 },
    { L"Ground Pound P1", 0x13d5f2, 0x13d612, indexSegaMK3Sprites_Jax, 0x01 },
    { L"Gibs P1", 0x13d672, 0x13d692, indexSegaMK3Sprites_Jax, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Jax_P2[] =
{
    { L"Jax P2", 0x13d5d2, 0x13d5f2, indexSegaMK3Sprites_Jax, 0x00 },
    { L"Ground Pound P2", 0x13d612, 0x13d632, indexSegaMK3Sprites_Jax, 0x01 },
    { L"Gibs P2", 0x13d692, 0x13d6b2, indexSegaMK3Sprites_Jax, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Jax_Extras[] =
{
    { L"Frozen", 0x13d632, 0x13d652, indexSegaMK3Sprites_Jax, 0x00 },
    { L"Babality", 0x13d652, 0x13d672, indexSegaMK3Sprites_Jax, 0x12 },
    { L"Scream of Death", 0x13d6b2, 0x13d6d2, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Nightwolf_P1[] =
{
    { L"Nightwolf P1", 0x16e540, 0x16e560, indexSegaMK3Sprites_Nightwolf, 0x00 },
    { L"Red Shoulder Charge P1", 0x16e6a0, 0x16e6c0, indexSegaMK3Sprites_Nightwolf, 0x20 },
    { L"Lightning Summon P1", 0x16e660, 0x16e680, indexSegaMK3Sprites_Nightwolf, 0x01 },
    { L"Gibs P1", 0x16e5c0, 0x16e5e0, indexSegaMK3Sprites_Nightwolf, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Nightwolf_P2[] =
{
    { L"Nightwolf P2", 0x16e560, 0x16e580, indexSegaMK3Sprites_Nightwolf, 0x00 },
    { L"Red Shoulder Charge P2", 0x16e6c0, 0x16e6e0, indexSegaMK3Sprites_Nightwolf, 0x20 },
    { L"Lightning Summon P2", 0x16e680, 0x16e6a0, indexSegaMK3Sprites_Nightwolf, 0x01 },
    { L"Gibs P2", 0x16e5e0, 0x16e600, indexSegaMK3Sprites_Nightwolf, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Nightwolf_Extras[] =
{
    { L"Frozen", 0x16e580, 0x16e5a0, indexSegaMK3Sprites_Nightwolf, 0x00 },
    { L"Babality", 0x16e5a0, 0x16e5c0, indexSegaMK3Sprites_Nightwolf, 0x12 },
    { L"Spirit Light", 0x16e620, 0x16e640, indexSegaMK3Sprites_Nightwolf, 0x02 },
    { L"Scream of Death", 0x16e600, 0x16e620, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_UnmaskedSubZero_P1[] =
{
    { L"Unmasked Sub-Zero P1", 0x19a684, 0x19a6a4, indexSegaMK3Sprites_UnSubZero, 0x00 },
    { L"Unknown P1", 0x19a6e4, 0x19a704 },
    { L"Ice Ball P1", 0x19a724, 0x19a744, indexSegaMK3Sprites_UnSubZero, 0x01 },
    { L"Friendship P1", 0x19a764, 0x19a784, indexSegaMK3Sprites_UnSubZero, 0x15 },
    { L"Gibs P1", 0x19a7a4, 0x19a7c4, indexSegaMK3Sprites_UnSubZero, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_UnmaskedSubZero_P2[] =
{
    { L"Unmasked Sub-Zero P2", 0x19a6a4, 0x19a6c4, indexSegaMK3Sprites_UnSubZero, 0x00 },
    { L"Unknown P2", 0x19a704, 0x19a724 },
    { L"Ice Ball P2", 0x19a744, 0x19a764, indexSegaMK3Sprites_UnSubZero, 0x01 },
    { L"Friendship P2", 0x19a784, 0x19a7a4, indexSegaMK3Sprites_UnSubZero, 0x15 },
    { L"Gibs P2", 0x19a7c4, 0x19a7e4, indexSegaMK3Sprites_UnSubZero, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_UnmaskedSubZero_Extras[] =
{
    { L"Frozen", 0x19a6c4, 0x19a6e4, indexSegaMK3Sprites_UnSubZero, 0x00 },
    { L"Babality", 0x19a7e4, 0x19a804, indexSegaMK3Sprites_UnSubZero, 0x12 },
    { L"Scream of Death", 0x19a804, 0x19a824, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Overhead Ice Shatter/Gibs", 0x19a824, 0x19a844, indexSegaMK3Sprites_UnSubZero, 0x02 },
};

const sGame_PaletteDataset UMK3_SEGA_Stryker_P1[] =
{
    { L"Stryker P1", 0x1bdf6a, 0x1bdf8a, indexSegaMK3Sprites_Stryker, 0x00 },
    { L"Gibs P1", 0x1bdfca, 0x1bdfea, indexSegaMK3Sprites_Stryker, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Stryker_P2[] =
{
    { L"Stryker P2", 0x1bdf8a, 0x1bdfaa, indexSegaMK3Sprites_Stryker, 0x00 },
    { L"Gibs P2", 0x1bdfea, 0x1be00a, indexSegaMK3Sprites_Stryker, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Stryker_Extras[] =
{
    { L"Frozen", 0x1bdfaa, 0x1bdfca, indexSegaMK3Sprites_Stryker, 0x00 },
    { L"Babality", 0x1be00a, 0x1be02a, indexSegaMK3Sprites_Stryker, 0x12 },
    { L"Scream of Death", 0x1be02a, 0x1be04a, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Sindel_P1[] =
{
    { L"Sindel P1 (Fireball)", 0x1ec4a4, 0x1ec4c4, indexSegaMK3Sprites_Sindel, 0x00 },
    { L"Sindel P1 (Scream)", 0x1ec524, 0x1ec544, indexSegaMK3Sprites_Sindel, 0x01 },
    { L"Gibs P1", 0x1ec564, 0x1ec584, indexSegaMK3Sprites_Sindel, 0x10 },
    { L"Scream of Death P1", 0x1ec5a4, 0x1ec5c4, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Sindel_P2[] =
{
    { L"Sindel P2 (Fireball)", 0x1ec4c4, 0x1ec4e4, indexSegaMK3Sprites_Sindel, 0x00 },
    { L"Sindel P2 (Scream)", 0x1ec544, 0x1ec564, indexSegaMK3Sprites_Sindel, 0x01 },
    { L"Gibs P2", 0x1ec584, 0x1ec5a4, indexSegaMK3Sprites_Sindel, 0x10 },
    { L"Scream of Death P2", 0x1ec5c4, 0x1ec5e4, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Sindel_Extras[] =
{
    { L"Frozen", 0x1ec4e4, 0x1ec504, indexSegaMK3Sprites_Sindel, 0x00 },
    { L"Babality", 0x1ec504, 0x1ec524, indexSegaMK3Sprites_Sindel, 0x12 },
};

const sGame_PaletteDataset UMK3_SEGA_Sektor_P1[] =
{
    { L"Sektor P1", 0x226aa4, 0x226ac4, indexSegaMK3Sprites_Sektor, 0x00 },
    { L"Gibs P1", 0x226c04, 0x226c24, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Sektor_P2[] =
{
    { L"Sektor P2", 0x226ac4, 0x226ae4, indexSegaMK3Sprites_Sektor, 0x00 },
    { L"Gibs P2", 0x226c24, 0x226c44, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Sektor_Extras[] =
{
    { L"Frozen", 0x226d24, 0x226d44, indexSegaMK3Sprites_Sektor, 0x00 },
    { L"Babality", 0x226ba4, 0x226bc4, indexSegaMK3Sprites_Sektor, 0x12 },
    { L"Scream of Death", 0x226cc4, 0x226ce4, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Unknown", 0x226d64, 0x226d84 },
};

const sGame_PaletteDataset UMK3_SEGA_Cyrax_P1[] =
{
    { L"Cyrax P1", 0x226ae4, 0x226b04, indexSegaMK3Sprites_Cyrax, 0x00 },
    { L"Gibs P1", 0x226c44, 0x226c64, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Cyrax_P2[] =
{
    { L"Cyrax P2", 0x226b04, 0x226b24, indexSegaMK3Sprites_Cyrax, 0x00 },
    { L"Gibs P2", 0x226c64, 0x226c84, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Cyrax_Extras[] =
{
    { L"Babality", 0x226bc4, 0x226be4, indexSegaMK3Sprites_Sektor, 0x12 },
    { L"Scream of Death", 0x226ce4, 0x226d04, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_RobotSmoke_P1[] =
{
    { L"Robot Smoke P1", 0x226b24, 0x226b44, indexSegaMK3Sprites_RSmoke, 0x00 },
    { L"Gibs P1", 0x226c84, 0x226ca4, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_RobotSmoke_P2[] =
{
    { L"Robot Smoke P2", 0x226b44, 0x226b64, indexSegaMK3Sprites_RSmoke, 0x00 },
    { L"Gibs P2", 0x226ca4, 0x226cc4, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_RobotSmoke_Extras[] =
{
    { L"Babality", 0x226be4, 0x226c04, indexSegaMK3Sprites_Sektor, 0x12 },
    { L"Scream of Death", 0x226d04, 0x226d24, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Complete Destruction (Moon)", 0xe0422, 0xe0442, indexSegaMK3Sprites_RSmoke, 0x02 },
};

const sGame_PaletteDataset UMK3_SEGA_KungLao_P1[] =
{
    { L"Kung Lao P1", 0x252a82, 0x252aa2, indexSegaMK3Sprites_KungLao, 0x00 },
    { L"Gibs P1", 0x252ae2, 0x252b02, indexSegaMK3Sprites_KungLao, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_KungLao_P2[] =
{
    { L"Kung Lao P2", 0x252aa2, 0x252ac2, indexSegaMK3Sprites_KungLao, 0x00 },
    { L"Gibs P2", 0x252b02, 0x252b22, indexSegaMK3Sprites_KungLao, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_KungLao_Extras[] =
{
    { L"Frozen", 0x252ac2, 0x252ae2, indexSegaMK3Sprites_KungLao, 0x00 },
    { L"Babality", 0x252b22, 0x252b42, indexSegaMK3Sprites_KungLao, 0x12 },
    { L"Scream of Death", 0x252b42, 0x252b62, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Unknown", 0x252b62, 0x252b82 },
};

const sGame_PaletteDataset UMK3_SEGA_Kabal_P1[] =
{
    { L"Kabal P1", 0x286c82, 0x286ca2, indexSegaMK3Sprites_Kabal, 0x00 },
    { L"Heart Attack P1", 0x286d42, 0x286d62, indexSegaMK3Sprites_Kabal, 0x01 },
    { L"Gibs P1", 0x286d02, 0x286d22, indexSegaMK3Sprites_Kabal, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Kabal_P2[] =
{
    { L"Kabal P2", 0x286ca2, 0x286cc2, indexSegaMK3Sprites_Kabal, 0x00 },
    { L"Heart Attack P2", 0x286d62, 0x286d82, indexSegaMK3Sprites_Kabal, 0x01 },
    { L"Gibs P2", 0x286d22, 0x286d42, indexSegaMK3Sprites_Kabal, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Kabal_Extras[] =
{
    { L"Frozen", 0x286cc2, 0x286ce2, indexSegaMK3Sprites_Kabal, 0x00 },
    { L"Babality", 0x286ce2, 0x286d02, indexSegaMK3Sprites_Kabal, 0x12 },
};

const sGame_PaletteDataset UMK3_SEGA_ShangTsung_P1[] =
{
    { L"Shang Tsung P1", 0x2b0cb8, 0x2b0cd8, indexSegaMK3Sprites_ShangTsung, 0x00 },
    { L"Winpose P1", 0x2b0d18, 0x2b0d38, indexSegaMK3Sprites_ShangTsung, 0x02 },
    { L"Gibs P1", 0x2b0f18, 0x2b0f38, indexSegaMK3Sprites_ShangTsung, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_ShangTsung_P2[] =
{
    { L"Shang Tsung P2", 0x2b0cd8, 0x2b0cf8, indexSegaMK3Sprites_ShangTsung, 0x00 },
    { L"Winpose P2", 0x2b0d38, 0x2b0d58, indexSegaMK3Sprites_ShangTsung, 0x02 },
    { L"Gibs P2", 0x2b0f38, 0x2b0f58, indexSegaMK3Sprites_ShangTsung, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_ShangTsung_Extras[] =
{
    { L"Frozen", 0x2b0cf8, 0x2b0d18, indexSegaMK3Sprites_ShangTsung, 0x00 },
    { L"Joust (Friendship)", 0x2b0ed8, 0x2b0ef8, indexSegaMK3Sprites_ShangTsung, 0x15 },
    { L"Babality", 0x2b0ef8, 0x2b0f18, indexSegaMK3Sprites_ShangTsung, 0x12 },
    { L"Scream of Death", 0x2b0f58, 0x2b0f78, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Soul Steal", 0x2b0f78, 0x2b0f98, indexSegaMK3Sprites_ShangTsung, 0x01 },
};

const sGame_PaletteDataset UMK3_SEGA_ShangTsung_Morphs[] =
{
    { L"Kano", 0x2b0d58, 0x2b0d78, indexSegaMK3Sprites_ShangTsung, 0x20 },
    { L"Sonya", 0x2b0d78, 0x2b0d98, indexSegaMK3Sprites_ShangTsung, 0x21 },
    { L"Jax", 0x2b0d98, 0x2b0db8, indexSegaMK3Sprites_ShangTsung, 0x22 },
    { L"Nightwolf", 0x2b0db8, 0x2b0dd8, indexSegaMK3Sprites_ShangTsung, 0x23 },
    { L"Unmasked Sub-Zero", 0x2b0dd8, 0x2b0df8, indexSegaMK3Sprites_ShangTsung, 0x24 },
    { L"Stryker", 0x2b0df8, 0x2b0e18, indexSegaMK3Sprites_ShangTsung, 0x25 },
    { L"Sindel", 0x2b0e18, 0x2b0e38, indexSegaMK3Sprites_ShangTsung, 0x26 },
    { L"Robots", 0x2b0e38, 0x2b0e58, indexSegaMK3Sprites_ShangTsung, 0x27 },
    { L"Kung Lao", 0x2b0e58, 0x2b0e78, indexSegaMK3Sprites_ShangTsung, 0x28 },
    { L"Kabal", 0x2b0e78, 0x2b0e98, indexSegaMK3Sprites_ShangTsung, 0x29 },
    { L"Sheeva (Removed)", 0x2b0e98, 0x2b0eb8, indexSegaMK3Sprites_ShangTsung, 0x2a },
    { L"Liu Kang", 0x2b0eb8, 0x2b0ed8, indexSegaMK3Sprites_ShangTsung, 0x2b },
    { L"Female Ninjas", 0x2b0f98, 0x2b0fb8, indexSegaMK3Sprites_ShangTsung, 0x2c },
    { L"Male Ninjas", 0x2b0fb8, 0x2b0fd8, indexSegaMK3Sprites_ShangTsung, 0x2d },
};

const sGame_PaletteDataset UMK3_SEGA_LiuKang_P1[] =
{
    { L"Liu Kang P1", 0x2d93e8, 0x2d9408, indexSegaMK3Sprites_LiuKang, 0x00 },
    { L"Gibs P1", 0x2d9488, 0x2d94a8, indexSegaMK3Sprites_LiuKang, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_LiuKang_P2[] =
{
    { L"Liu Kang P2", 0x2d9408, 0x2d9428, indexSegaMK3Sprites_LiuKang, 0x00 },
    { L"Gibs P2", 0x2d94a8, 0x2d94c8, indexSegaMK3Sprites_LiuKang, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_LiuKang_Extras[] =
{
    { L"Frozen", 0x2d9428, 0x2d9448, indexSegaMK3Sprites_LiuKang, 0x00 },
    { L"Fire Chi", 0x2d9448, 0x2d9468, indexSegaMK3Sprites_LiuKang, 0x01 },
    { L"Babality", 0x2d94c8, 0x2d94e8, indexSegaMK3Sprites_LiuKang, 0x12 },
    { L"Scream of Death", 0x2d94e8, 0x2d9508, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Unknown", 0x2d9468, 0x2d9488 },
};

const sGame_PaletteDataset UMK3_SEGA_Kitana_P1[] =
{
    { L"Kitana P1", 0x30fb7e, 0x30fb9e, indexSegaUMK3Sprites_Kitana, 0x00 },
    { L"Gibs P1", 0x30fdde, 0x30fdfe, indexSegaUMK3Sprites_Kitana, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Kitana_P2[] =
{
    { L"Kitana P2", 0x30fb9e, 0x30fbbe, indexSegaUMK3Sprites_Kitana, 0x00 },
    { L"Gibs P2", 0x31011e, 0x31013e, indexSegaUMK3Sprites_Kitana, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Kitana_Extras[] =
{
    { L"Friendship", 0x30fcfe, 0x30fd1e, indexSegaUMK3Sprites_Kitana, 0x15 },
    { L"Babality", 0x30fd1e, 0x30fd3e, indexSegaUMK3Sprites_Kitana, 0x12 },
    { L"Scream of Death", 0x30fd7e, 0x30fd9e, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Jade_P1[] =
{
    { L"Jade P1", 0x30fbbe, 0x30fbde, indexSegaUMK3Sprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_Jade_P2[] =
{
    { L"Jade P2", 0x30fbde, 0x30fbfe, indexSegaUMK3Sprites_Jade, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_Jade_Extras[] =
{
    { L"Projectile Shield", 0x30fc5e, 0x30fc7e, indexSegaUMK3Sprites_Jade, 0x00 },
    { L"Shadow Kick", 0x30fc7e, 0x30fc9e, indexSegaUMK3Sprites_Jade, 0x01 },
    { L"Staff Shaker", 0x30fcde, 0x30fcfe, indexSegaUMK3Sprites_Jade, 0x02 },
    { L"Babality", 0x30fd3e, 0x30fd5e, indexSegaUMK3Sprites_Kitana, 0x12 },
    { L"Scream of Death", 0x30fd9e, 0x30fdbe, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Gibs", 0x30fdfe, 0x30fe1e, indexSegaUMK3Sprites_Kitana, 0x10 },
    { L"Unknown", 0x30fc9e, 0x30fcbe },
};

const sGame_PaletteDataset UMK3_SEGA_Mileena_P1[] =
{
    { L"Mileena P1", 0x30fbfe, 0x30fc1e, indexSegaUMK3Sprites_Mileena, 0x00 },
    { L"Winpose and Finishers P1", 0x30fcbe, 0x30fcde, indexSegaUMK3Sprites_Mileena, 0x02 },
};

const sGame_PaletteDataset UMK3_SEGA_Mileena_P2[] =
{
    { L"Mileena P2", 0x30fc1e, 0x30fc3e, indexSegaUMK3Sprites_Mileena, 0x00 },
    { L"Winpose and Finishers P2", 0x31013e, 0x31015e, indexSegaUMK3Sprites_Mileena, 0x02 },
};

const sGame_PaletteDataset UMK3_SEGA_Mileena_Extras[] =
{
    { L"Babality", 0x30fd5e, 0x30fd7e, indexSegaUMK3Sprites_Kitana, 0x12 },
    { L"Scream of Death", 0x30fdbe, 0x30fdde, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Gibs", 0x30fe1e, 0x30fe3e, indexSegaUMK3Sprites_Kitana, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Mileena_ManEater[] =
{
    { L"Kano", 0x30fe3e, 0x30fe5e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Sonya", 0x30fe5e, 0x30fe7e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Jax", 0x30fe7e, 0x30fe9e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Nightwolf", 0x30fe9e, 0x30febe, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Stryker", 0x30febe, 0x30fede, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Sindel", 0x30fede, 0x30fefe, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Sektor", 0x30fefe, 0x30ff1e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Cyrax", 0x30ff1e, 0x30ff3e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Kung Lao", 0x30ff3e, 0x30ff5e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Kabal", 0x30ff5e, 0x30ff7e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Shang Tsung", 0x30ff7e, 0x30ff9e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Liu Kang", 0x30ff9e, 0x30ffbe, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Robot Smoke", 0x30ffbe, 0x30ffde, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Unmasked Sub-Zero/Kitana", 0x30ffde, 0x30fffe, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Jade", 0x30fffe, 0x31001e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Mileena", 0x31001e, 0x31003e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Scorpion", 0x31003e, 0x31005e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Reptile", 0x31005e, 0x31007e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Ermac", 0x31007e, 0x31009e, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Klassic Sub-Zero", 0x31009e, 0x3100be, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Human Smoke", 0x3100be, 0x3100de, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Noob Saibot", 0x3100de, 0x3100fe, indexSegaUMK3Sprites_Mileena, 0x01 },
    { L"Rain", 0x3100fe, 0x31011e, indexSegaUMK3Sprites_Mileena, 0x01 },
};

const sGame_PaletteDataset UMK3_SEGA_Scorpion_P1[] =
{
    { L"Scorpion P1", 0x3469e8, 0x346a08, indexSegaUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_Scorpion_P2[] =
{
    { L"Scorpion P2", 0x346a08, 0x346a28, indexSegaUMK3Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_Scorpion_Extras[] =
{
    { L"Toasty!", 0x346ba8, 0x346bc8, indexSegaUMK3Sprites_Scorpion, 0x01 },
    { L"Babality", 0x346d68, 0x346d88, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346e48, 0x346e68, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Gibs", 0x346c48, 0x346c68, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Reptile_P1[] =
{
    { L"Reptile P1", 0x346a28, 0x346a48, indexSegaUMK3Sprites_Reptile, 0x00 },
    { L"Gibs P1", 0x346c68, 0x346c88, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Reptile_P2[] =
{
    { L"Reptile P2", 0x346a48, 0x346a68, indexSegaUMK3Sprites_Reptile, 0x00 },
    { L"Gibs P2", 0x346d28, 0x346d48, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Reptile_Extras[] =
{
    { L"Yummy!", 0x346bc8, 0x346be8, indexSegaUMK3Sprites_Reptile, 0x02 },
    { L"Acid Puke", 0x346be8, 0x346c08, indexSegaUMK3Sprites_Reptile, 0x01 },
    { L"Friendship", 0x346c08, 0x346c28, indexSegaUMK3Sprites_Reptile, 0x15 },
    { L"Babality", 0x346d88, 0x346da8, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346e68, 0x346e88, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Ermac_P1[] =
{
    { L"Ermac P1", 0x346a68, 0x346a88, indexSegaUMK3Sprites_Ermac, 0x00 },
    { L"Gibs P1", 0x346c88, 0x346ca8, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Ermac_P2[] =
{
    { L"Ermac P2", 0x346a88, 0x346aa8, indexSegaUMK3Sprites_Ermac, 0x00 },
    { L"Gibs P2", 0x346d48, 0x346d68, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Ermac_Extras[] =
{
    { L"Babality", 0x346da8, 0x346dc8, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346e88, 0x346ea8, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_KlassicSubZero_P1[] =
{
    { L"Klassic Sub-Zero P1", 0x346aa8, 0x346ac8, indexSegaUMK3Sprites_CSubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_KlassicSubZero_P2[] =
{
    { L"Klassic Sub-Zero P2", 0x346ac8, 0x346ae8, indexSegaUMK3Sprites_CSubZero, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_KlassicSubZero_Extras[] =
{
    { L"Gibs", 0x346ca8, 0x346cc8, indexSegaUMK3Sprites_Scorpion, 0x10 },
    { L"Babality", 0x346dc8, 0x346de8, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346ea8, 0x346ec8, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Unknown", 0x346c28, 0x346c48 },
};

const sGame_PaletteDataset UMK3_SEGA_HumanSmoke_P1[] =
{
    { L"Human Smoke P1", 0x346ae8, 0x346b08, indexSegaUMK3Sprites_HSmoke, 0x00 },
    { L"Gibs P1", 0x346cc8, 0x346ce8, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_HumanSmoke_P2[] =
{
    { L"Human Smoke P2", 0x346b08, 0x346b28, indexSegaUMK3Sprites_HSmoke, 0x00 },
    { L"Gibs P2", 0x346f88, 0x346fa8, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_HumanSmoke_Extras[] =
{
    { L"Babality", 0x346de8, 0x346e08, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346ec8, 0x346ee8, indexSegaMK3Sprites_Sindel, 0x13 },
};

const sGame_PaletteDataset UMK3_SEGA_Rain_P1[] =
{
    { L"Rain P1", 0x346b28, 0x346b48, indexSegaUMK3Sprites_Rain, 0x00 },
    { L"Lightning P1", 0x346f28, 0x346f48, indexSegaUMK3Sprites_Rain, 0x01 },
};

const sGame_PaletteDataset UMK3_SEGA_Rain_P2[] =
{
    { L"Rain P2", 0x346b48, 0x346b68, indexSegaUMK3Sprites_Rain, 0x00 },
    { L"Lightning P2", 0x346f48, 0x346f68, indexSegaUMK3Sprites_Rain, 0x01 },
};

const sGame_PaletteDataset UMK3_SEGA_Rain_Extras[] =
{
    { L"Babality", 0x346e08, 0x346e28, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346f08, 0x346f28, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Gibs", 0x346d08, 0x346d28, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_NoobSaibot_Palettes[] =
{
    { L"Noob Saibot (P1 & P2)", 0x346b68, 0x346b88, indexSegaUMK3Sprites_Noob, 0x00 },
    { L"Babality", 0x346e28, 0x346e48, indexSegaUMK3Sprites_Scorpion, 0x12 },
    { L"Scream of Death", 0x346ee8, 0x346f08, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"No Block Ball Flash (Unused)", 0x346f68, 0x346f88 },
    { L"Gibs", 0x346ce8, 0x346d08, indexSegaUMK3Sprites_Scorpion, 0x10 },
};

const sGame_PaletteDataset UMK3_SEGA_Motaro_Palettes[] =
{
    { L"Motaro", 0x3682fc, 0x36831c, indexSegaMK3Sprites_Motaro, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_ShaoKahn_P1[] =
{
    { L"Shao Kahn P1", 0x37e8bc, 0x37e8dc, indexSegaMK3Sprites_ShaoKhan, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_ShaoKahn_P2Unused[] =
{
    { L"Shao Kahn P2 (Unused)", 0x37e8dc, 0x37e8fc, indexSegaMK3Sprites_ShaoKhan, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_ShaoKahn_Extras[] =
{
    { L"Frozen", 0x37e8fc, 0x37e91c, indexSegaMK3Sprites_ShaoKhan, 0x00 },
    { L"Arcade Loss", 0x37e91c, 0x37e93c, indexSegaMK3Sprites_ShaoKhan, 0x01 },
    { L"Arcade Loss Stage Extra", 0x9b13c, 0x9b14c, indexSegaMK3Sprites_ShaoKhan, 0x02 },
};

const sGame_PaletteDataset UMK3_SEGA_SharedExtras_Robots[] =
{
    { L"Frozen (Cyrax and Smoke)", 0x226d44, 0x226d64, indexSegaMK3Sprites_Bonus, 0x05 },
    { L"Dizzy State", 0x226b84, 0x226ba4, indexSegaMK3Sprites_Bonus, 0x04 },
};

const sGame_PaletteDataset UMK3_SEGA_SharedExtras_FemaleNinjas[] =
{
    { L"Frozen", 0x30fc3e, 0x30fc5e, indexSegaUMK3Sprites_Bonus, 0x00 },
};

const sGame_PaletteDataset UMK3_SEGA_SharedExtras_MaleNinjas[] =
{
    { L"Frozen", 0x346b88, 0x346ba8, indexSegaUMK3Sprites_Bonus, 0x01 },
};

const sGame_PaletteDataset UMK3_SEGA_SharedExtras_FatalityMoveExtras[] =
{
    { L"Bones", 0xe0342, 0xe0362 },
    { L"Flaming Skeleton", 0x10bfea, 0x10c00a, indexSegaMK3Sprites_Bonus, 0x00 },
    { L"Rayden and Arcade Cabinet", 0x16e640, 0x16e660, indexSegaMK3Sprites_Bonus, 0x02 },
    { L"Nightwolf/Stryker Electric Skeleton", 0x1be04a, 0x1be06a, indexSegaMK3Sprites_Bonus, 0x01 },
    { L"Spin Effect", 0x1ec5e4, 0x1ec604, indexSegaMK3Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset UMK3_SEGA_BonusPalettes_Fonts[] =
{
    { L"Font (Unselected)", 0x66756, 0x66776 },
    { L"Font (Selected)", 0x66776, 0x66796 },
};

const sDescTreeNode UMK3_SEGA_Kano_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kano_P1, ARRAYSIZE(UMK3_SEGA_Kano_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kano_P2, ARRAYSIZE(UMK3_SEGA_Kano_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kano_Extras, ARRAYSIZE(UMK3_SEGA_Kano_Extras) },
};

const sDescTreeNode UMK3_SEGA_Sonya_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sonya_P1, ARRAYSIZE(UMK3_SEGA_Sonya_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sonya_P2, ARRAYSIZE(UMK3_SEGA_Sonya_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sonya_Extras, ARRAYSIZE(UMK3_SEGA_Sonya_Extras) },
};

const sDescTreeNode UMK3_SEGA_Jax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jax_P1, ARRAYSIZE(UMK3_SEGA_Jax_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jax_P2, ARRAYSIZE(UMK3_SEGA_Jax_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jax_Extras, ARRAYSIZE(UMK3_SEGA_Jax_Extras) },
};

const sDescTreeNode UMK3_SEGA_Nightwolf_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Nightwolf_P1, ARRAYSIZE(UMK3_SEGA_Nightwolf_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Nightwolf_P2, ARRAYSIZE(UMK3_SEGA_Nightwolf_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Nightwolf_Extras, ARRAYSIZE(UMK3_SEGA_Nightwolf_Extras) },
};

const sDescTreeNode UMK3_SEGA_UnmaskedSubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_UnmaskedSubZero_P1, ARRAYSIZE(UMK3_SEGA_UnmaskedSubZero_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_UnmaskedSubZero_P2, ARRAYSIZE(UMK3_SEGA_UnmaskedSubZero_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_UnmaskedSubZero_Extras, ARRAYSIZE(UMK3_SEGA_UnmaskedSubZero_Extras) },
};

const sDescTreeNode UMK3_SEGA_Stryker_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Stryker_P1, ARRAYSIZE(UMK3_SEGA_Stryker_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Stryker_P2, ARRAYSIZE(UMK3_SEGA_Stryker_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Stryker_Extras, ARRAYSIZE(UMK3_SEGA_Stryker_Extras) },
};

const sDescTreeNode UMK3_SEGA_Sindel_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sindel_P1, ARRAYSIZE(UMK3_SEGA_Sindel_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sindel_P2, ARRAYSIZE(UMK3_SEGA_Sindel_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sindel_Extras, ARRAYSIZE(UMK3_SEGA_Sindel_Extras) },
};

const sDescTreeNode UMK3_SEGA_Sektor_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sektor_P1, ARRAYSIZE(UMK3_SEGA_Sektor_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sektor_P2, ARRAYSIZE(UMK3_SEGA_Sektor_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sektor_Extras, ARRAYSIZE(UMK3_SEGA_Sektor_Extras) },
};

const sDescTreeNode UMK3_SEGA_Cyrax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Cyrax_P1, ARRAYSIZE(UMK3_SEGA_Cyrax_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Cyrax_P2, ARRAYSIZE(UMK3_SEGA_Cyrax_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Cyrax_Extras, ARRAYSIZE(UMK3_SEGA_Cyrax_Extras) },
};

const sDescTreeNode UMK3_SEGA_RobotSmoke_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_RobotSmoke_P1, ARRAYSIZE(UMK3_SEGA_RobotSmoke_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_RobotSmoke_P2, ARRAYSIZE(UMK3_SEGA_RobotSmoke_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_RobotSmoke_Extras, ARRAYSIZE(UMK3_SEGA_RobotSmoke_Extras) },
};

const sDescTreeNode UMK3_SEGA_KungLao_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KungLao_P1, ARRAYSIZE(UMK3_SEGA_KungLao_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KungLao_P2, ARRAYSIZE(UMK3_SEGA_KungLao_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KungLao_Extras, ARRAYSIZE(UMK3_SEGA_KungLao_Extras) },
};

const sDescTreeNode UMK3_SEGA_Kabal_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kabal_P1, ARRAYSIZE(UMK3_SEGA_Kabal_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kabal_P2, ARRAYSIZE(UMK3_SEGA_Kabal_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kabal_Extras, ARRAYSIZE(UMK3_SEGA_Kabal_Extras) },
};

const sDescTreeNode UMK3_SEGA_ShangTsung_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShangTsung_P1, ARRAYSIZE(UMK3_SEGA_ShangTsung_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShangTsung_P2, ARRAYSIZE(UMK3_SEGA_ShangTsung_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShangTsung_Extras, ARRAYSIZE(UMK3_SEGA_ShangTsung_Extras) },
    { L"Morphs", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShangTsung_Morphs, ARRAYSIZE(UMK3_SEGA_ShangTsung_Morphs) },
};

const sDescTreeNode UMK3_SEGA_LiuKang_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_LiuKang_P1, ARRAYSIZE(UMK3_SEGA_LiuKang_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_LiuKang_P2, ARRAYSIZE(UMK3_SEGA_LiuKang_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_LiuKang_Extras, ARRAYSIZE(UMK3_SEGA_LiuKang_Extras) },
};

const sDescTreeNode UMK3_SEGA_Kitana_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kitana_P1, ARRAYSIZE(UMK3_SEGA_Kitana_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kitana_P2, ARRAYSIZE(UMK3_SEGA_Kitana_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kitana_Extras, ARRAYSIZE(UMK3_SEGA_Kitana_Extras) },
};

const sDescTreeNode UMK3_SEGA_Jade_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jade_P1, ARRAYSIZE(UMK3_SEGA_Jade_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jade_P2, ARRAYSIZE(UMK3_SEGA_Jade_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jade_Extras, ARRAYSIZE(UMK3_SEGA_Jade_Extras) },
};

const sDescTreeNode UMK3_SEGA_Mileena_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Mileena_P1, ARRAYSIZE(UMK3_SEGA_Mileena_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Mileena_P2, ARRAYSIZE(UMK3_SEGA_Mileena_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Mileena_Extras, ARRAYSIZE(UMK3_SEGA_Mileena_Extras) },
    { L"Man-Eater", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Mileena_ManEater, ARRAYSIZE(UMK3_SEGA_Mileena_ManEater) },
};

const sDescTreeNode UMK3_SEGA_Scorpion_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Scorpion_P1, ARRAYSIZE(UMK3_SEGA_Scorpion_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Scorpion_P2, ARRAYSIZE(UMK3_SEGA_Scorpion_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Scorpion_Extras, ARRAYSIZE(UMK3_SEGA_Scorpion_Extras) },
};

const sDescTreeNode UMK3_SEGA_Reptile_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Reptile_P1, ARRAYSIZE(UMK3_SEGA_Reptile_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Reptile_P2, ARRAYSIZE(UMK3_SEGA_Reptile_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Reptile_Extras, ARRAYSIZE(UMK3_SEGA_Reptile_Extras) },
};

const sDescTreeNode UMK3_SEGA_Ermac_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Ermac_P1, ARRAYSIZE(UMK3_SEGA_Ermac_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Ermac_P2, ARRAYSIZE(UMK3_SEGA_Ermac_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Ermac_Extras, ARRAYSIZE(UMK3_SEGA_Ermac_Extras) },
};

const sDescTreeNode UMK3_SEGA_KlassicSubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KlassicSubZero_P1, ARRAYSIZE(UMK3_SEGA_KlassicSubZero_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KlassicSubZero_P2, ARRAYSIZE(UMK3_SEGA_KlassicSubZero_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KlassicSubZero_Extras, ARRAYSIZE(UMK3_SEGA_KlassicSubZero_Extras) },
};

const sDescTreeNode UMK3_SEGA_HumanSmoke_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_HumanSmoke_P1, ARRAYSIZE(UMK3_SEGA_HumanSmoke_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_HumanSmoke_P2, ARRAYSIZE(UMK3_SEGA_HumanSmoke_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_HumanSmoke_Extras, ARRAYSIZE(UMK3_SEGA_HumanSmoke_Extras) },
};

const sDescTreeNode UMK3_SEGA_Rain_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Rain_P1, ARRAYSIZE(UMK3_SEGA_Rain_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Rain_P2, ARRAYSIZE(UMK3_SEGA_Rain_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Rain_Extras, ARRAYSIZE(UMK3_SEGA_Rain_Extras) },
};

const sDescTreeNode UMK3_SEGA_NoobSaibot_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_NoobSaibot_Palettes, ARRAYSIZE(UMK3_SEGA_NoobSaibot_Palettes) },
};

const sDescTreeNode UMK3_SEGA_Motaro_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Motaro_Palettes, ARRAYSIZE(UMK3_SEGA_Motaro_Palettes) },
};

const sDescTreeNode UMK3_SEGA_ShaoKahn_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShaoKahn_P1, ARRAYSIZE(UMK3_SEGA_ShaoKahn_P1) },
    { L"P2 (Unused)", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShaoKahn_P2Unused, ARRAYSIZE(UMK3_SEGA_ShaoKahn_P2Unused) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShaoKahn_Extras, ARRAYSIZE(UMK3_SEGA_ShaoKahn_Extras) },
};

const sDescTreeNode UMK3_SEGA_SharedExtras_COLLECTION[] =
{
    { L"Robots", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_SharedExtras_Robots, ARRAYSIZE(UMK3_SEGA_SharedExtras_Robots) },
    { L"Female Ninjas", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_SharedExtras_FemaleNinjas, ARRAYSIZE(UMK3_SEGA_SharedExtras_FemaleNinjas) },
    { L"Male Ninjas", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_SharedExtras_MaleNinjas, ARRAYSIZE(UMK3_SEGA_SharedExtras_MaleNinjas) },
    { L"Fatality/Move Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_SharedExtras_FatalityMoveExtras, ARRAYSIZE(UMK3_SEGA_SharedExtras_FatalityMoveExtras) },
};

const sDescTreeNode UMK3_SEGA_BonusPalettes_COLLECTION[] =
{
    { L"Fonts", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_BonusPalettes_Fonts, ARRAYSIZE(UMK3_SEGA_BonusPalettes_Fonts) },
};

const sDescTreeNode UMK3_SEGA_UNITS[] =
{
    { L"Kano", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kano_COLLECTION, ARRAYSIZE(UMK3_SEGA_Kano_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sonya_COLLECTION, ARRAYSIZE(UMK3_SEGA_Sonya_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jax_COLLECTION, ARRAYSIZE(UMK3_SEGA_Jax_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Nightwolf_COLLECTION, ARRAYSIZE(UMK3_SEGA_Nightwolf_COLLECTION) },
    { L"Unmasked Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_UnmaskedSubZero_COLLECTION, ARRAYSIZE(UMK3_SEGA_UnmaskedSubZero_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Stryker_COLLECTION, ARRAYSIZE(UMK3_SEGA_Stryker_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sindel_COLLECTION, ARRAYSIZE(UMK3_SEGA_Sindel_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Sektor_COLLECTION, ARRAYSIZE(UMK3_SEGA_Sektor_COLLECTION) },
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Cyrax_COLLECTION, ARRAYSIZE(UMK3_SEGA_Cyrax_COLLECTION) },
    { L"Robot Smoke", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_RobotSmoke_COLLECTION, ARRAYSIZE(UMK3_SEGA_RobotSmoke_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KungLao_COLLECTION, ARRAYSIZE(UMK3_SEGA_KungLao_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kabal_COLLECTION, ARRAYSIZE(UMK3_SEGA_Kabal_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShangTsung_COLLECTION, ARRAYSIZE(UMK3_SEGA_ShangTsung_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_LiuKang_COLLECTION, ARRAYSIZE(UMK3_SEGA_LiuKang_COLLECTION) },
    { L"Kitana", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Kitana_COLLECTION, ARRAYSIZE(UMK3_SEGA_Kitana_COLLECTION) },
    { L"Jade", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Jade_COLLECTION, ARRAYSIZE(UMK3_SEGA_Jade_COLLECTION) },
    { L"Mileena", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Mileena_COLLECTION, ARRAYSIZE(UMK3_SEGA_Mileena_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Scorpion_COLLECTION, ARRAYSIZE(UMK3_SEGA_Scorpion_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Reptile_COLLECTION, ARRAYSIZE(UMK3_SEGA_Reptile_COLLECTION) },
    { L"Ermac", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Ermac_COLLECTION, ARRAYSIZE(UMK3_SEGA_Ermac_COLLECTION) },
    { L"Klassic Sub-Zero", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_KlassicSubZero_COLLECTION, ARRAYSIZE(UMK3_SEGA_KlassicSubZero_COLLECTION) },
    { L"Human Smoke", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_HumanSmoke_COLLECTION, ARRAYSIZE(UMK3_SEGA_HumanSmoke_COLLECTION) },
    { L"Rain", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Rain_COLLECTION, ARRAYSIZE(UMK3_SEGA_Rain_COLLECTION) },
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_NoobSaibot_COLLECTION, ARRAYSIZE(UMK3_SEGA_NoobSaibot_COLLECTION) },
    { L"Motaro", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_Motaro_COLLECTION, ARRAYSIZE(UMK3_SEGA_Motaro_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_ShaoKahn_COLLECTION, ARRAYSIZE(UMK3_SEGA_ShaoKahn_COLLECTION) },
    { L"Shared Extras", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_SharedExtras_COLLECTION, ARRAYSIZE(UMK3_SEGA_SharedExtras_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)UMK3_SEGA_BonusPalettes_COLLECTION, ARRAYSIZE(UMK3_SEGA_BonusPalettes_COLLECTION) },
};

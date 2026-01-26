#pragma once

const std::vector<uint16_t> MK3_SEGA_IMGIDS_USED =
{
    indexSegaMK3Sprites_Cyrax,          // 0x0a
    indexSegaMK3Sprites_Jax,            // 0x0b
    indexSegaMK3Sprites_Kabal,          // 0x0c
    indexSegaMK3Sprites_Kano,           // 0x0d
    indexSegaMK3Sprites_KungLao,        // 0x0e
    indexSegaMK3Sprites_LiuKang,        // 0x0f
    indexSegaMK3Sprites_Motaro,         // 0x10
    indexSegaMK3Sprites_Nightwolf,      // 0x11
    indexSegaMK3Sprites_Noob,           // 0x12
    indexSegaMK3Sprites_RSmoke,         // 0x13
    indexSegaMK3Sprites_Sektor,         // 0x14
    indexSegaMK3Sprites_ShangTsung,     // 0x15
    indexSegaMK3Sprites_ShaoKhan,       // 0x16
    indexSegaMK3Sprites_Sheeva,         // 0x17
    indexSegaMK3Sprites_Sonya,          // 0x18
    indexSegaMK3Sprites_Stryker,        // 0x19
    indexSegaMK3Sprites_UnSubZero,      // 0x1a
    indexSegaMK3Sprites_Bonus,          // 0x1b
    indexSegaMK3Sprites_Stages,         // 0x1c

    indexSegaMK3Sprites_Sindel,         // 0x29
};

const sGame_PaletteDataset MK3_SEGA_Kano_P1[] =
{
    { L"Kano P1", 0xc862c, 0xc864c, indexSegaMK3Sprites_Kano, 0x00 },
    { L"Optic Blast P1", 0xc868c, 0xc86ac, indexSegaMK3Sprites_Kano, 0x01 },
    { L"Friendship P1", 0xc874c, 0xc876c, indexSegaMK3Sprites_Kano, 0x15 },
    { L"Gibs P1", 0xc870c, 0xc872c, indexSegaMK3Sprites_Kano, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Kano_P2[] =
{
    { L"Kano P2", 0xc864c, 0xc866c, indexSegaMK3Sprites_Kano, 0x00 },
    { L"Optic Blast P2", 0xc86ac, 0xc86cc, indexSegaMK3Sprites_Kano, 0x01 },
    { L"Friendship P2", 0xc876c, 0xc878c, indexSegaMK3Sprites_Kano, 0x15 },
    { L"Gibs P2", 0xc872c, 0xc874c, indexSegaMK3Sprites_Kano, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Kano_Extras[] =
{
    { L"Frozen", 0xc866c, 0xc868c, indexSegaMK3Sprites_Kano, 0x00 },
    { L"Babality", 0xc86ec, 0xc870c, indexSegaMK3Sprites_Kano, 0x12 },
    { L"Scream of Death", 0xc878c, 0xc87ac, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355916, 0x355936, indexSegaMK3Sprites_Kano, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Sonya_P1[] =
{
    { L"Sonya P1", 0xf48e2, 0xf4902, indexSegaMK3Sprites_Sonya, 0x00 },
    { L"Ring Toss P1", 0xf49e2, 0xf4a02, indexSegaMK3Sprites_Sonya, 0x01 },
    { L"Gibs P1", 0xf4962, 0xf4982, indexSegaMK3Sprites_Sonya, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sonya_P2[] =
{
    { L"Sonya P2", 0xf4902, 0xf4922, indexSegaMK3Sprites_Sonya, 0x00 },
    { L"Ring Toss P2", 0xf4a02, 0xf4a22, indexSegaMK3Sprites_Sonya, 0x01 },
    { L"Gibs P2", 0xf4982, 0xf49a2, indexSegaMK3Sprites_Sonya, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sonya_Extras[] =
{
    { L"Frozen", 0xf4922, 0xf4942, indexSegaMK3Sprites_Sonya, 0x00 },
    { L"Ring Toss Frozen", 0xf4a22, 0xf4a42, indexSegaMK3Sprites_Sonya, 0x01 },
    { L"Babality", 0xf4942, 0xf4962, indexSegaMK3Sprites_Sonya, 0x12 },
    { L"Scream of Death", 0xf49c2, 0xf49e2, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355936, 0x355956, indexSegaMK3Sprites_Sonya, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Jax_P1[] =
{
    { L"Jax P1", 0x126636, 0x126656, indexSegaMK3Sprites_Jax, 0x00 },
    { L"Ground Pound P1", 0x126676, 0x126696, indexSegaMK3Sprites_Jax, 0x01 },
    { L"Gibs P1", 0x1266f6, 0x126716, indexSegaMK3Sprites_Jax, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Jax_P2[] =
{
    { L"Jax P2", 0x126656, 0x126676, indexSegaMK3Sprites_Jax, 0x00 },
    { L"Ground Pound P2", 0x126696, 0x1266b6, indexSegaMK3Sprites_Jax, 0x01 },
    { L"Gibs P2", 0x126716, 0x126736, indexSegaMK3Sprites_Jax, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Jax_Extras[] =
{
    { L"Frozen", 0x1266b6, 0x1266d6, indexSegaMK3Sprites_Jax, 0x00 },
    { L"Babality", 0x1266d6, 0x1266f6, indexSegaMK3Sprites_Jax, 0x12 },
    { L"Scream of Death", 0x126736, 0x126756, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355956, 0x355976, indexSegaMK3Sprites_Jax, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Nightwolf_P1[] =
{
    { L"Nightwolf P1", 0x1580a8, 0x1580c8, indexSegaMK3Sprites_Nightwolf, 0x00 },
    { L"Lightning Summon P1", 0x1581c8, 0x1581e8, indexSegaMK3Sprites_Nightwolf, 0x01 },
    { L"Gibs P1", 0x158128, 0x158148, indexSegaMK3Sprites_Nightwolf, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Nightwolf_P2[] =
{
    { L"Nightwolf P2", 0x1580c8, 0x1580e8, indexSegaMK3Sprites_Nightwolf, 0x00 },
    { L"Lightning Summon P2", 0x1581e8, 0x158208, indexSegaMK3Sprites_Nightwolf, 0x01 },
    { L"Gibs P2", 0x158148, 0x158168, indexSegaMK3Sprites_Nightwolf, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Nightwolf_Extras[] =
{
    { L"Frozen", 0x1580e8, 0x158108, indexSegaMK3Sprites_Nightwolf, 0x00 },
    { L"Babality", 0x158108, 0x158128, indexSegaMK3Sprites_Nightwolf, 0x12 },
    { L"Scream of Death", 0x158168, 0x158188, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Spirit Light", 0x158188, 0x1581a8, indexSegaMK3Sprites_Nightwolf, 0x02 },
    { L"Animality", 0x355976, 0x355996, indexSegaMK3Sprites_Nightwolf, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_UnmaskedSubZero_P1[] =
{
    { L"Unmasked Sub-Zero P1", 0x1848a6, 0x1848c6, indexSegaMK3Sprites_UnSubZero, 0x00 },
    { L"Unknown P1", 0x184906, 0x184926 },
    { L"Ice Ball P1", 0x184946, 0x184966, indexSegaMK3Sprites_UnSubZero, 0x01 },
    { L"Friendship P1", 0x184986, 0x1849a6, indexSegaMK3Sprites_UnSubZero, 0x15 },
    { L"Gibs P1", 0x1849c6, 0x1849e6, indexSegaMK3Sprites_UnSubZero, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_UnmaskedSubZero_P2[] =
{
    { L"Unmasked Sub-Zero P2", 0x1848c6, 0x1848e6, indexSegaMK3Sprites_UnSubZero, 0x00 },
    { L"Unknown P2", 0x184926, 0x184946 },
    { L"Ice Ball P2", 0x184966, 0x184986, indexSegaMK3Sprites_UnSubZero, 0x01 },
    { L"Friendship P2", 0x1849a6, 0x1849c6, indexSegaMK3Sprites_UnSubZero, 0x15 },
    { L"Gibs P2", 0x1849e6, 0x184a06, indexSegaMK3Sprites_UnSubZero, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_UnmaskedSubZero_Extras[] =
{
    { L"Frozen", 0x1848e6, 0x184906, indexSegaMK3Sprites_UnSubZero, 0x00 },
    { L"Babality", 0x184a06, 0x184a26, indexSegaMK3Sprites_UnSubZero, 0x12 },
    { L"Scream of Death", 0x184a26, 0x184a46, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Overhead Ice Shatter/Gibs", 0x184a46, 0x184a66, indexSegaMK3Sprites_UnSubZero, 0x02 },
    { L"Animality", 0x355996, 0x3559b6, indexSegaMK3Sprites_UnSubZero, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Stryker_P1[] =
{
    { L"Stryker P1", 0x1a7938, 0x1a7958, indexSegaMK3Sprites_Stryker, 0x00 },
    { L"Gibs P1", 0x1a7998, 0x1a79b8, indexSegaMK3Sprites_Stryker, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Stryker_P2[] =
{
    { L"Stryker P2", 0x1a7958, 0x1a7978, indexSegaMK3Sprites_Stryker, 0x00 },
    { L"Gibs P2", 0x1a79b8, 0x1a79d8, indexSegaMK3Sprites_Stryker, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Stryker_Extras[] =
{
    { L"Frozen", 0x1a7978, 0x1a7998, indexSegaMK3Sprites_Stryker, 0x00 },
    { L"Babality", 0x1a79d8, 0x1a79f8, indexSegaMK3Sprites_Stryker, 0x12 },
    { L"Scream of Death", 0x1a79f8, 0x1a7a18, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x3559b6, 0x3559d6, indexSegaMK3Sprites_Stryker, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Sindel_P1[] =
{
    { L"Sindel P1 (Fireball)", 0x1d6736, 0x1d6756, indexSegaMK3Sprites_Sindel, 0x00 },
    { L"Sindel P1 (Scream)", 0x1d67b6, 0x1d67d6, indexSegaMK3Sprites_Sindel, 0x01 },
    { L"Scream of Death P1", 0x1d6836, 0x1d6856, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Gibs P1", 0x1d67f6, 0x1d6816, indexSegaMK3Sprites_Sindel, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sindel_P2[] =
{
    { L"Sindel P2 (Fireball)", 0x1d6756, 0x1d6776, indexSegaMK3Sprites_Sindel, 0x00 },
    { L"Sindel P2 (Scream)", 0x1d67d6, 0x1d67f6, indexSegaMK3Sprites_Sindel, 0x01 },
    { L"Scream of Death P2", 0x1d6856, 0x1d6876, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Gibs P2", 0x1d6816, 0x1d6836, indexSegaMK3Sprites_Sindel, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sindel_Extras[] =
{
    { L"Frozen", 0x1d6776, 0x1d6796, indexSegaMK3Sprites_Sindel, 0x00 },
    { L"Babality", 0x1d6796, 0x1d67b6, indexSegaMK3Sprites_Sindel, 0x12 },
    { L"Animality", 0x3559d6, 0x3559f6, indexSegaMK3Sprites_Sindel, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Sektor_P1[] =
{
    { L"Sektor P1", 0x211914, 0x211934, indexSegaMK3Sprites_Sektor, 0x00 },
    { L"Gibs P1", 0x211a74, 0x211a94, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sektor_P2[] =
{
    { L"Sektor P2", 0x211934, 0x211954, indexSegaMK3Sprites_Sektor, 0x00 },
    { L"Gibs P2", 0x211a94, 0x211ab4, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sektor_Extras[] =
{
    { L"Frozen", 0x211b94, 0x211bb4, indexSegaMK3Sprites_Sektor, 0x00 },
    { L"Babality", 0x211a14, 0x211a34, indexSegaMK3Sprites_Sektor, 0x12 },
    { L"Scream of Death", 0x211b34, 0x211b54, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x3559f6, 0x355a16, indexSegaMK3Sprites_Sektor, 0x14 },
    { L"Unknown", 0x211bd4, 0x211bf4 },
};

const sGame_PaletteDataset MK3_SEGA_Cyrax_P1[] =
{
    { L"Cyrax P1", 0x211954, 0x211974, indexSegaMK3Sprites_Cyrax, 0x00 },
    { L"Gibs P1", 0x211ab4, 0x211ad4, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Cyrax_P2[] =
{
    { L"Cyrax P2", 0x211974, 0x211994, indexSegaMK3Sprites_Cyrax, 0x00 },
    { L"Gibs P2", 0x211ad4, 0x211af4, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Cyrax_Extras[] =
{
    { L"Babality", 0x211a34, 0x211a54, indexSegaMK3Sprites_Sektor, 0x12 },
    { L"Scream of Death", 0x211b54, 0x211b74, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355a16, 0x355a36, indexSegaMK3Sprites_Cyrax, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_RobotSmoke_P1[] =
{
    { L"Robot Smoke P1", 0x211994, 0x2119b4, indexSegaMK3Sprites_RSmoke, 0x00 },
    { L"Gibs P1", 0x211af4, 0x211b14, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_RobotSmoke_P2[] =
{
    { L"Robot Smoke P2", 0x2119b4, 0x2119d4, indexSegaMK3Sprites_RSmoke, 0x00 },
    { L"Gibs P2", 0x211b14, 0x211b34, indexSegaMK3Sprites_Sektor, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_RobotSmoke_Extras[] =
{
    { L"Babality", 0x211a54, 0x211a74, indexSegaMK3Sprites_Sektor, 0x12 },
    { L"Scream of Death", 0x211b74, 0x211b94, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355ad6, 0x355af6, indexSegaMK3Sprites_RSmoke, 0x14 },
    { L"Complete Destruction (Moon)", 0xc87ac, 0xc87cc, indexSegaMK3Sprites_RSmoke, 0x02 },
};

const sGame_PaletteDataset MK3_SEGA_KungLao_P1[] =
{
    { L"Kung Lao P1", 0x23dd72, 0x23dd92, indexSegaMK3Sprites_KungLao, 0x00 },
    { L"Gibs P1", 0x23ddd2, 0x23ddf2, indexSegaMK3Sprites_KungLao, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_KungLao_P2[] =
{
    { L"Kung Lao P2", 0x23dd92, 0x23ddb2, indexSegaMK3Sprites_KungLao, 0x00 },
    { L"Gibs P2", 0x23ddf2, 0x23de12, indexSegaMK3Sprites_KungLao, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_KungLao_Extras[] =
{
    { L"Frozen", 0x23ddb2, 0x23ddd2, indexSegaMK3Sprites_KungLao, 0x00 },
    { L"Babality", 0x23de12, 0x23de32, indexSegaMK3Sprites_KungLao, 0x12 },
    { L"Scream of Death", 0x23de32, 0x23de52, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355a36, 0x355a56, indexSegaMK3Sprites_KungLao, 0x14 },
    { L"Unknown", 0x23de52, 0x23de72 },
};

const sGame_PaletteDataset MK3_SEGA_Kabal_P1[] =
{
    { L"Kabal P1", 0x2727a6, 0x2727c6, indexSegaMK3Sprites_Kabal, 0x00 },
    { L"Heart Attack P1", 0x272866, 0x272886, indexSegaMK3Sprites_Kabal, 0x01 },
    { L"Gibs P1", 0x272826, 0x272846, indexSegaMK3Sprites_Kabal, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Kabal_P2[] =
{
    { L"Kabal P2", 0x2727c6, 0x2727e6, indexSegaMK3Sprites_Kabal, 0x00 },
    { L"Heart Attack P2", 0x272886, 0x2728a6, indexSegaMK3Sprites_Kabal, 0x01 },
    { L"Gibs P2", 0x272846, 0x272866, indexSegaMK3Sprites_Kabal, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Kabal_Extras[] =
{
    { L"Frozen", 0x2727e6, 0x272806, indexSegaMK3Sprites_Kabal, 0x00 },
    { L"Babality", 0x272806, 0x272826, indexSegaMK3Sprites_Kabal, 0x12 },
    { L"Scream of Death", 0x2728a6, 0x2728c6, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355a56, 0x355a76, indexSegaMK3Sprites_Kabal, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_Sheeva_P1[] =
{
    { L"Sheeva P1", 0x2aa778, 0x2aa798, indexSegaMK3Sprites_Sheeva, 0x00 },
    { L"Gibs P1", 0x2aa7d8, 0x2aa7f8, indexSegaMK3Sprites_Sheeva, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sheeva_P2[] =
{
    { L"Sheeva P2", 0x2aa798, 0x2aa7b8, indexSegaMK3Sprites_Sheeva, 0x00 },
    { L"Gibs P2", 0x2aa7f8, 0x2aa818, indexSegaMK3Sprites_Sheeva, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_Sheeva_Extras[] =
{
    { L"Frozen", 0x2aa7b8, 0x2aa7d8, indexSegaMK3Sprites_Sheeva, 0x00 },
    { L"Babality", 0x2aa818, 0x2aa838, indexSegaMK3Sprites_Sheeva, 0x12 },
    { L"Scream of Death", 0x2aa838, 0x2aa858, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355a76, 0x355a96, indexSegaMK3Sprites_Sheeva, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_ShangTsung_P1[] =
{
    { L"Shang Tsung P1", 0x2d5d26, 0x2d5d46, indexSegaMK3Sprites_ShangTsung, 0x00 },
    { L"Winpose P1", 0x2d5d86, 0x2d5da6, indexSegaMK3Sprites_ShangTsung, 0x02 },
    { L"Gibs P1", 0x2d5f86, 0x2d5fa6, indexSegaMK3Sprites_ShangTsung, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_ShangTsung_P2[] =
{
    { L"Shang Tsung P2", 0x2d5d46, 0x2d5d66, indexSegaMK3Sprites_ShangTsung, 0x00 },
    { L"Winpose P2", 0x2d5da6, 0x2d5dc6, indexSegaMK3Sprites_ShangTsung, 0x02 },
    { L"Gibs P2", 0x2d5fa6, 0x2d5fc6, indexSegaMK3Sprites_ShangTsung, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_ShangTsung_Extras[] =
{
    { L"Frozen", 0x2d5d66, 0x2d5d86, indexSegaMK3Sprites_ShangTsung, 0x00 },
    { L"Joust (Friendship)", 0x2d5f46, 0x2d5f66, indexSegaMK3Sprites_ShangTsung, 0x15 },
    { L"Babality", 0x2d5f66, 0x2d5f86, indexSegaMK3Sprites_ShangTsung, 0x12 },
    { L"Scream of Death", 0x2d5fc6, 0x2d5fe6, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Soul Steal", 0x2d5fe6, 0x2d6006, indexSegaMK3Sprites_ShangTsung, 0x01 },
    { L"Animality", 0x355a96, 0x355ab6, indexSegaMK3Sprites_ShangTsung, 0x14 },
};

const sGame_PaletteDataset MK3_SEGA_ShangTsung_Morphs[] =
{
    { L"Kano", 0x2d5dc6, 0x2d5de6, indexSegaMK3Sprites_ShangTsung, 0x20 },
    { L"Sonya", 0x2d5de6, 0x2d5e06, indexSegaMK3Sprites_ShangTsung, 0x21 },
    { L"Jax", 0x2d5e06, 0x2d5e26, indexSegaMK3Sprites_ShangTsung, 0x22 },
    { L"Nightwolf", 0x2d5e26, 0x2d5e46, indexSegaMK3Sprites_ShangTsung, 0x23 },
    { L"Unmasked Sub-Zero", 0x2d5e46, 0x2d5e66, indexSegaMK3Sprites_ShangTsung, 0x24 },
    { L"Stryker", 0x2d5e66, 0x2d5e86, indexSegaMK3Sprites_ShangTsung, 0x25 },
    { L"Sindel", 0x2d5e86, 0x2d5ea6, indexSegaMK3Sprites_ShangTsung, 0x26 },
    { L"Robots", 0x2d5ea6, 0x2d5ec6, indexSegaMK3Sprites_ShangTsung, 0x27 },
    { L"Kung Lao", 0x2d5ec6, 0x2d5ee6, indexSegaMK3Sprites_ShangTsung, 0x28 },
    { L"Kabal", 0x2d5ee6, 0x2d5f06, indexSegaMK3Sprites_ShangTsung, 0x29 },
    { L"Sheeva", 0x2d5f06, 0x2d5f26, indexSegaMK3Sprites_ShangTsung, 0x2a },
    { L"Liu Kang", 0x2d5f26, 0x2d5f46, indexSegaMK3Sprites_ShangTsung, 0x2b },
};

const sGame_PaletteDataset MK3_SEGA_LiuKang_P1[] =
{
    { L"Liu Kang P1", 0x2fe8bc, 0x2fe8dc, indexSegaMK3Sprites_LiuKang, 0x00 },
    { L"Gibs P1", 0x2fe95c, 0x2fe97c, indexSegaMK3Sprites_LiuKang, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_LiuKang_P2[] =
{
    { L"Liu Kang P2", 0x2fe8dc, 0x2fe8fc, indexSegaMK3Sprites_LiuKang, 0x00 },
    { L"Gibs P2", 0x2fe97c, 0x2fe99c, indexSegaMK3Sprites_LiuKang, 0x10 },
};

const sGame_PaletteDataset MK3_SEGA_LiuKang_Extras[] =
{
    { L"Frozen", 0x2fe8fc, 0x2fe91c, indexSegaMK3Sprites_LiuKang, 0x00 },
    { L"Fire Chi", 0x2fe91c, 0x2fe93c, indexSegaMK3Sprites_LiuKang, 0x01 },
    { L"Babality", 0x2fe99c, 0x2fe9bc, indexSegaMK3Sprites_LiuKang, 0x12 },
    { L"Scream of Death", 0x2fe9bc, 0x2fe9dc, indexSegaMK3Sprites_Sindel, 0x13 },
    { L"Animality", 0x355ab6, 0x355ad6, indexSegaMK3Sprites_LiuKang, 0x14 },
    { L"Unknown", 0x2fe93c, 0x2fe95c },
};

const sGame_PaletteDataset MK3_SEGA_Motaro_Palettes[] =
{
    { L"Motaro", 0x3203a0, 0x3203c0, indexSegaMK3Sprites_Motaro, 0x00 },
};

const sGame_PaletteDataset MK3_SEGA_ShaoKahn_P1[] =
{
    { L"Shao Kahn P1", 0x33674c, 0x33676c, indexSegaMK3Sprites_ShaoKhan, 0x00 },
};

const sGame_PaletteDataset MK3_SEGA_ShaoKahn_P2[] =
{
    { L"Shao Kahn P2 (Unused)", 0x33676c, 0x33678c, indexSegaMK3Sprites_ShaoKhan, 0x00 },
};

const sGame_PaletteDataset MK3_SEGA_ShaoKahn_Extras[] =
{
    { L"Frozen", 0x33678c, 0x3367ac, indexSegaMK3Sprites_ShaoKhan, 0x00 },
    { L"Arcade Loss", 0x3367ac, 0x3367cc, indexSegaMK3Sprites_ShaoKhan, 0x01 },
    { L"Arcade Loss Stage Extra", 0x9dd42, 0x9dd52, indexSegaMK3Sprites_ShaoKhan, 0x02 },
};

const sGame_PaletteDataset MK3_SEGA_NoobSaibot_Palettes[] =
{
    { L"Noob Saibot", 0xc87cc, 0xc87ec, indexSegaMK3Sprites_Noob, 0x00 },
};

const sGame_PaletteDataset MK3_SEGA_SharedExtras_Robots[] =
{
    { L"Frozen (Cyrax and Smoke)", 0x211bb4, 0x211bd4, indexSegaMK3Sprites_Bonus, 0x05 },
    { L"Dizzy State", 0x2119f4, 0x211a14, indexSegaMK3Sprites_Bonus, 0x04 },
};

const sGame_PaletteDataset MK3_SEGA_SharedExtras_FatalityMoveExtras[] =
{
    { L"Bones", 0xc86cc, 0xc86ec },
    { L"Flaming Skeleton", 0xf49a2, 0xf49c2, indexSegaMK3Sprites_Bonus, 0x00 },
    { L"Raiden and Arcade Cabinet", 0x1581a8, 0x1581c8, indexSegaMK3Sprites_Bonus, 0x02 },
    { L"Nightwolf/Stryker Skeleton", 0x1a7a18, 0x1a7a38, indexSegaMK3Sprites_Bonus, 0x01 },
    { L"Spin Effect", 0x1d6876, 0x1d6896, indexSegaMK3Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset MK3_SEGA_BonusPalettes_Fonts[] =
{
    { L"Main Menu Font", 0x4f374, 0x4f394 },
    { L"Main Menu Font (Selected)", 0x4f394, 0x4f3b4 },
    { L"Submenu Font", 0x56b6c, 0x56b8c },
    { L"Submenu Font (Selected)", 0x56b8c, 0x56bac },
};

const sDescTreeNode MK3_SEGA_Kano_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kano_P1, ARRAYSIZE(MK3_SEGA_Kano_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kano_P2, ARRAYSIZE(MK3_SEGA_Kano_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kano_Extras, ARRAYSIZE(MK3_SEGA_Kano_Extras) },
};

const sDescTreeNode MK3_SEGA_Sonya_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sonya_P1, ARRAYSIZE(MK3_SEGA_Sonya_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sonya_P2, ARRAYSIZE(MK3_SEGA_Sonya_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sonya_Extras, ARRAYSIZE(MK3_SEGA_Sonya_Extras) },
};

const sDescTreeNode MK3_SEGA_Jax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Jax_P1, ARRAYSIZE(MK3_SEGA_Jax_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Jax_P2, ARRAYSIZE(MK3_SEGA_Jax_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Jax_Extras, ARRAYSIZE(MK3_SEGA_Jax_Extras) },
};

const sDescTreeNode MK3_SEGA_Nightwolf_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Nightwolf_P1, ARRAYSIZE(MK3_SEGA_Nightwolf_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Nightwolf_P2, ARRAYSIZE(MK3_SEGA_Nightwolf_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Nightwolf_Extras, ARRAYSIZE(MK3_SEGA_Nightwolf_Extras) },
};

const sDescTreeNode MK3_SEGA_UnmaskedSubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_UnmaskedSubZero_P1, ARRAYSIZE(MK3_SEGA_UnmaskedSubZero_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_UnmaskedSubZero_P2, ARRAYSIZE(MK3_SEGA_UnmaskedSubZero_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_UnmaskedSubZero_Extras, ARRAYSIZE(MK3_SEGA_UnmaskedSubZero_Extras) },
};

const sDescTreeNode MK3_SEGA_Stryker_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Stryker_P1, ARRAYSIZE(MK3_SEGA_Stryker_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Stryker_P2, ARRAYSIZE(MK3_SEGA_Stryker_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Stryker_Extras, ARRAYSIZE(MK3_SEGA_Stryker_Extras) },
};

const sDescTreeNode MK3_SEGA_Sindel_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sindel_P1, ARRAYSIZE(MK3_SEGA_Sindel_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sindel_P2, ARRAYSIZE(MK3_SEGA_Sindel_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sindel_Extras, ARRAYSIZE(MK3_SEGA_Sindel_Extras) },
};

const sDescTreeNode MK3_SEGA_Sektor_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sektor_P1, ARRAYSIZE(MK3_SEGA_Sektor_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sektor_P2, ARRAYSIZE(MK3_SEGA_Sektor_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sektor_Extras, ARRAYSIZE(MK3_SEGA_Sektor_Extras) },
};

const sDescTreeNode MK3_SEGA_Cyrax_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Cyrax_P1, ARRAYSIZE(MK3_SEGA_Cyrax_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Cyrax_P2, ARRAYSIZE(MK3_SEGA_Cyrax_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Cyrax_Extras, ARRAYSIZE(MK3_SEGA_Cyrax_Extras) },
};

const sDescTreeNode MK3_SEGA_RobotSmoke_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_RobotSmoke_P1, ARRAYSIZE(MK3_SEGA_RobotSmoke_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_RobotSmoke_P2, ARRAYSIZE(MK3_SEGA_RobotSmoke_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_RobotSmoke_Extras, ARRAYSIZE(MK3_SEGA_RobotSmoke_Extras) },
};

const sDescTreeNode MK3_SEGA_KungLao_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_KungLao_P1, ARRAYSIZE(MK3_SEGA_KungLao_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_KungLao_P2, ARRAYSIZE(MK3_SEGA_KungLao_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_KungLao_Extras, ARRAYSIZE(MK3_SEGA_KungLao_Extras) },
};

const sDescTreeNode MK3_SEGA_Kabal_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kabal_P1, ARRAYSIZE(MK3_SEGA_Kabal_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kabal_P2, ARRAYSIZE(MK3_SEGA_Kabal_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kabal_Extras, ARRAYSIZE(MK3_SEGA_Kabal_Extras) },
};

const sDescTreeNode MK3_SEGA_Sheeva_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sheeva_P1, ARRAYSIZE(MK3_SEGA_Sheeva_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sheeva_P2, ARRAYSIZE(MK3_SEGA_Sheeva_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sheeva_Extras, ARRAYSIZE(MK3_SEGA_Sheeva_Extras) },
};

const sDescTreeNode MK3_SEGA_ShangTsung_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShangTsung_P1, ARRAYSIZE(MK3_SEGA_ShangTsung_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShangTsung_P2, ARRAYSIZE(MK3_SEGA_ShangTsung_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShangTsung_Extras, ARRAYSIZE(MK3_SEGA_ShangTsung_Extras) },
    { L"Morphs", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShangTsung_Morphs, ARRAYSIZE(MK3_SEGA_ShangTsung_Morphs) },    
};

const sDescTreeNode MK3_SEGA_LiuKang_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_LiuKang_P1, ARRAYSIZE(MK3_SEGA_LiuKang_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK3_SEGA_LiuKang_P2, ARRAYSIZE(MK3_SEGA_LiuKang_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_LiuKang_Extras, ARRAYSIZE(MK3_SEGA_LiuKang_Extras) },
};

const sDescTreeNode MK3_SEGA_Motaro_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Motaro_Palettes, ARRAYSIZE(MK3_SEGA_Motaro_Palettes) },
};

const sDescTreeNode MK3_SEGA_ShaoKahn_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShaoKahn_P1, ARRAYSIZE(MK3_SEGA_ShaoKahn_P2) },
    { L"P2 (Unused)", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShaoKahn_P2, ARRAYSIZE(MK3_SEGA_ShaoKahn_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShaoKahn_Extras, ARRAYSIZE(MK3_SEGA_ShaoKahn_Extras) },
};

const sDescTreeNode MK3_SEGA_NoobSaibot_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK3_SEGA_NoobSaibot_Palettes, ARRAYSIZE(MK3_SEGA_NoobSaibot_Palettes) },
};

const sDescTreeNode MK3_SEGA_SharedExtras_COLLECTION[] =
{
    { L"Robots", DESC_NODETYPE_TREE, (void*)MK3_SEGA_SharedExtras_Robots, ARRAYSIZE(MK3_SEGA_SharedExtras_Robots) },
    { L"Fatality/Move Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_SharedExtras_FatalityMoveExtras, ARRAYSIZE(MK3_SEGA_SharedExtras_FatalityMoveExtras) },
};

const sDescTreeNode MK3_SEGA_BonusPalettes_COLLECTION[] =
{
    { L"Fonts", DESC_NODETYPE_TREE, (void*)MK3_SEGA_BonusPalettes_Fonts, ARRAYSIZE(MK3_SEGA_BonusPalettes_Fonts) },
};

const sDescTreeNode MK3_SEGA_UNITS[] =
{
    { L"Kano", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kano_COLLECTION, ARRAYSIZE(MK3_SEGA_Kano_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sonya_COLLECTION, ARRAYSIZE(MK3_SEGA_Sonya_COLLECTION) },
    { L"Jax", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Jax_COLLECTION, ARRAYSIZE(MK3_SEGA_Jax_COLLECTION) },
    { L"Nightwolf", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Nightwolf_COLLECTION, ARRAYSIZE(MK3_SEGA_Nightwolf_COLLECTION) },
    { L"Unmasked Sub-Zero", DESC_NODETYPE_TREE, (void*)MK3_SEGA_UnmaskedSubZero_COLLECTION, ARRAYSIZE(MK3_SEGA_UnmaskedSubZero_COLLECTION) },
    { L"Stryker", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Stryker_COLLECTION, ARRAYSIZE(MK3_SEGA_Stryker_COLLECTION) },
    { L"Sindel", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sindel_COLLECTION, ARRAYSIZE(MK3_SEGA_Sindel_COLLECTION) },
    { L"Sektor", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sektor_COLLECTION, ARRAYSIZE(MK3_SEGA_Sektor_COLLECTION) },
    { L"Cyrax", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Cyrax_COLLECTION, ARRAYSIZE(MK3_SEGA_Cyrax_COLLECTION) },
    { L"Robot Smoke", DESC_NODETYPE_TREE, (void*)MK3_SEGA_RobotSmoke_COLLECTION, ARRAYSIZE(MK3_SEGA_RobotSmoke_COLLECTION) },
    { L"Kung Lao", DESC_NODETYPE_TREE, (void*)MK3_SEGA_KungLao_COLLECTION, ARRAYSIZE(MK3_SEGA_KungLao_COLLECTION) },
    { L"Kabal", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Kabal_COLLECTION, ARRAYSIZE(MK3_SEGA_Kabal_COLLECTION) },
    { L"Sheeva", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Sheeva_COLLECTION, ARRAYSIZE(MK3_SEGA_Sheeva_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShangTsung_COLLECTION, ARRAYSIZE(MK3_SEGA_ShangTsung_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK3_SEGA_LiuKang_COLLECTION, ARRAYSIZE(MK3_SEGA_LiuKang_COLLECTION) },
    { L"Motaro", DESC_NODETYPE_TREE, (void*)MK3_SEGA_Motaro_COLLECTION, ARRAYSIZE(MK3_SEGA_Motaro_COLLECTION) },
    { L"Shao Kahn", DESC_NODETYPE_TREE, (void*)MK3_SEGA_ShaoKahn_COLLECTION, ARRAYSIZE(MK3_SEGA_ShaoKahn_COLLECTION) },
    { L"Noob Saibot", DESC_NODETYPE_TREE, (void*)MK3_SEGA_NoobSaibot_COLLECTION, ARRAYSIZE(MK3_SEGA_NoobSaibot_COLLECTION) },
    { L"Shared Extras", DESC_NODETYPE_TREE, (void*)MK3_SEGA_SharedExtras_COLLECTION, ARRAYSIZE(MK3_SEGA_SharedExtras_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK3_SEGA_BonusPalettes_COLLECTION, ARRAYSIZE(MK3_SEGA_BonusPalettes_COLLECTION) },
};

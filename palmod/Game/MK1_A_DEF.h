#pragma once

const std::vector<uint16_t> MK1_A_IMGIDS_USED =
{
    indexMK1ArcadeSprites_Goro,         // 0xf7
    indexMK1ArcadeSprites_JohnnyCage,   // 0xf8
    indexMK1ArcadeSprites_Kano,         // 0xf9
    indexMK1ArcadeSprites_LiuKang,      // 0xfa
    indexMK1ArcadeSprites_Raiden,       // 0xfb
    indexMK1ArcadeSprites_Reptile,      // 0xfc
    indexMK1ArcadeSprites_Scorpion,     // 0xfd
    indexMK1ArcadeSprites_ShangTsung,   // 0xfe
    indexMK1ArcadeSprites_Sonya,        // 0xff
    indexMK1ArcadeSprites_SubZero,      // 0x100
    indexMK1ArcadeSprites_Stages,       // 0x101
    indexMK1ArcadeSprites_Bonus,        // 0x102
};

const sGame_PaletteDataset MK1_A_JOHNNYCAGE_PALETTES_P1[] =
{
    { L"Johnny Cage P1", 0xd3362, 0xd33e2, indexMK1ArcadeSprites_JohnnyCage },
};

const sGame_PaletteDataset MK1_A_JOHNNYCAGE_PALETTES_P2[] =
{
    { L"Johnny Cage P2", 0x90850, 0x908d0, indexMK1ArcadeSprites_JohnnyCage },
};

const sGame_PaletteDataset MK1_A_JOHNNYCAGE_PALETTES_SHARED[] =
{
    { L"Frozen Johnny Cage", 0x9ac54, 0x9acd4, indexMK1ArcadeSprites_JohnnyCage },
    { L"Johnny Cage Forceball", 0xd33e4, 0xd3464, indexMK1ArcadeSprites_JohnnyCage, 0x01 },
};

const sGame_PaletteDataset MK1_A_KANO_PALETTES_P1[] =
{
    { L"Kano P1", 0xd3466, 0xd34e6, indexMK1ArcadeSprites_Kano },
};

const sGame_PaletteDataset MK1_A_KANO_PALETTES_P2[] =
{
    { L"Kano P2", 0x908d2, 0x90952, indexMK1ArcadeSprites_Kano },
};

const sGame_PaletteDataset MK1_A_KANO_PALETTES_SHARED[] =
{
    { L"Frozen Kano", 0x9ad58, 0x9add8, indexMK1ArcadeSprites_Kano },
    { L"Kano Blue Knives", 0xd34e8, 0xd3568, indexMK1ArcadeSprites_Kano, 0x01 },
};

const sGame_PaletteDataset MK1_A_SUBZERO_PALETTES_P1[] =
{
    { L"Sub-Zero P1", 0xd37f4, 0xd3874, indexMK1ArcadeSprites_SubZero },
};

const sGame_PaletteDataset MK1_A_SUBZERO_PALETTES_P2[] =
{
    { L"Sub-Zero P2", 0x90ada, 0x90b5a, indexMK1ArcadeSprites_SubZero },
};

const sGame_PaletteDataset MK1_A_SUBZERO_PALETTES_SHARED[] =
{
    { L"Frozen Sub-Zero", 0x9aede, 0x9af5e, indexMK1ArcadeSprites_SubZero },
    { L"Sub-Zero Ice Ball", 0xd3876, 0xd38f6, indexMK1ArcadeSprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK1_A_SONYA_PALETTES_P1[] =
{
    { L"Sonya P1", 0xd3e0c, 0xd3e8c, indexMK1ArcadeSprites_Sonya },
};

const sGame_PaletteDataset MK1_A_SONYA_PALETTES_P2[] =
{
    { L"Sonya P2", 0x90b5c, 0x90bdc, indexMK1ArcadeSprites_Sonya },
};

const sGame_PaletteDataset MK1_A_SONYA_PALETTES_SHARED[] =
{
    { L"Frozen Sonya", 0x9af60, 0x9afe0, indexMK1ArcadeSprites_Sonya },
    { L"Sonya Ring Toss", 0xd3e8e, 0xd3f0e, indexMK1ArcadeSprites_Sonya, 0x01 },
};

const sGame_PaletteDataset MK1_A_RAIDEN_PALETTES_P1[] =
{
    { L"Raiden P1", 0xd356a, 0xd35ea, indexMK1ArcadeSprites_Raiden },
};

const sGame_PaletteDataset MK1_A_RAIDEN_PALETTES_P2[] =
{
    { L"Raiden P2", 0x90954, 0x909d4, indexMK1ArcadeSprites_Raiden },
};

const sGame_PaletteDataset MK1_A_RAIDEN_PALETTES_SHARED[] =
{
    { L"Frozen Raiden", 0x9adda, 0x9ae5a, indexMK1ArcadeSprites_Raiden },
    { L"Electricity", 0xd3d88, 0xd3e08, indexMK1ArcadeSprites_Raiden, 0x01 },
};

const sGame_PaletteDataset MK1_A_LIUKANG_PALETTES_P1[] =
{
    { L"Liu Kang P1", 0xd366e, 0xd36ee, indexMK1ArcadeSprites_LiuKang },
};

const sGame_PaletteDataset MK1_A_LIUKANG_PALETTES_P2[] =
{
    { L"Liu Kang P2", 0x909d6, 0x90a56, indexMK1ArcadeSprites_LiuKang },
};

const sGame_PaletteDataset MK1_A_LIUKANG_PALETTES_SHARED[] =
{
    { L"Frozen Liu Kang", 0x9acd6, 0x9ad56, indexMK1ArcadeSprites_LiuKang },
    { L"Liu Kang Fireball", 0xd36f0, 0xd3770, indexMK1ArcadeSprites_LiuKang, 0x01 },
};

const sGame_PaletteDataset MK1_A_SCORPION_PALETTES_P1[] =
{
    { L"Scorpion P1", 0xd3772, 0xd37f2, indexMK1ArcadeSprites_Scorpion },
};

const sGame_PaletteDataset MK1_A_SCORPION_PALETTES_P2[] =
{
    { L"Scorpion P2", 0x90a58, 0x90ad8, indexMK1ArcadeSprites_Scorpion },
};

const sGame_PaletteDataset MK1_A_SCORPION_PALETTES_SHARED[] =
{
    { L"Frozen Scorpion", 0x9ae5c, 0x9aedc, indexMK1ArcadeSprites_Scorpion },
    { L"Kunai", 0xd4ebe, 0xd4eea, indexMK1ArcadeSprites_Scorpion, 0x01 },
};

const sGame_PaletteDataset MK1_A_GORO_PALETTES[] =
{
    { L"Goro", 0xd397a, 0xd39fa, indexMK1ArcadeSprites_Goro },
    { L"Frozen Goro", 0x9afe2, 0x9b062, indexMK1ArcadeSprites_Goro },
};

const sGame_PaletteDataset MK1_A_SHANGTSUNG_PALETTES[] =
{
    { L"Shang Tsung", 0xd3ff8, 0xd4078, indexMK1ArcadeSprites_ShangTsung },
    { L"Frozen Shang Tsung", 0x9b064, 0x9b0e4, indexMK1ArcadeSprites_ShangTsung },
    { L"Flaming Skull", 0xd407a, 0xd40fa, indexMK1ArcadeSprites_ShangTsung, 0x01 },
};

const sGame_PaletteDataset MK1_A_REPTILE_PALETTES[] =
{
    { L"Reptile", 0x907ce, 0x9084e, indexMK1ArcadeSprites_Scorpion },
};

const sGame_PaletteDataset MK1_A_BONUS_CHARSEL_PALETTES[] =
{
    { L"Johnny Cage",   0xd411e, 0xd419e, indexMK1ArcadeSprites_JohnnyCage, 0x20 },
    { L"Kano",          0xd41a0, 0xd4220, indexMK1ArcadeSprites_Kano, 0x20 },
    { L"Liu Kang",      0xd4222, 0xd42a2, indexMK1ArcadeSprites_LiuKang, 0x20 },
    { L"Scorpion",      0xd42a4, 0xd4324, indexMK1ArcadeSprites_Scorpion, 0x20 },
    { L"Raiden",        0xd4326, 0xd43a6, indexMK1ArcadeSprites_Raiden, 0x20 },
    { L"Sub-Zero",      0xd43a8, 0xd4428, indexMK1ArcadeSprites_SubZero, 0x20 },
    { L"Sonya",         0xd442a, 0xd44aa, indexMK1ArcadeSprites_Sonya, 0x20 },
    { L"Goro",          0xd44ac, 0xd452c, indexMK1ArcadeSprites_Goro, 0x20 },
    { L"Shang Tsung",   0xd452e, 0xd45a0, indexMK1ArcadeSprites_ShangTsung, 0x20 },
};

const sGame_PaletteDataset MK1_A_BONUS_CHARSEL_PALETTES_INACTIVE[] =
{
    { L"Johnny Cage",   0xb722a, 0xb72aa, indexMK1ArcadeSprites_JohnnyCage, 0x20 },
    { L"Kano",          0xb72ac, 0xb732c, indexMK1ArcadeSprites_Kano, 0x20 },
    { L"Liu Kang",      0xb732e, 0xb73ae, indexMK1ArcadeSprites_LiuKang, 0x20 },
    { L"Scorpion",      0xb73ae, 0xb742e, indexMK1ArcadeSprites_Scorpion, 0x20 },
    { L"Raiden",        0xb7432, 0xb74b2, indexMK1ArcadeSprites_Raiden, 0x20 },
    { L"Sub-Zero",      0xb74b4, 0xb7534, indexMK1ArcadeSprites_SubZero, 0x20 },
    { L"Sonya",         0xb7536, 0xb75b6, indexMK1ArcadeSprites_Sonya, 0x20 },
};

const sGame_PaletteDataset MK1_A_BONUS_TYM_PALETTES[] =
{
    { L"Johnny Cage",   0xd45aa, 0xd46aa, indexMK1ArcadeSprites_Bonus, 0x00 },
    { L"Kano",          0xd46ac, 0xd47ac, indexMK1ArcadeSprites_Bonus, 0x01 },
    { L"Raiden",        0xd47ae, 0xd48ae, indexMK1ArcadeSprites_Bonus, 0x02 },
    { L"Liu Kang",      0xd48ae, 0xd492e, indexMK1ArcadeSprites_Bonus, 0x03 },
    { L"Scorpion / Sub-Zero shared", 0xd499a, 0xd4b1e, indexMK1ArcadeSprites_Bonus, 0x04 },
    { L"Sonya",         0xd4b20, 0xd4c20, indexMK1ArcadeSprites_Bonus, 0x05 },
    { L"Sonya P2 Clothes", 0xb94ee, 0xb956e, indexMK1ArcadeSprites_Bonus, 0x0b },
    { L"Meter Frame",   0xd4c6a, 0xd4c80, indexMK1ArcadeSprites_Bonus, 0x06 },
    { L"Wood",          0xd4c2a, 0xd4c6a, indexMK1ArcadeSprites_Bonus, 0x07 },
    { L"Stone",         0xd4d38, 0xd4db8, indexMK1ArcadeSprites_Bonus, 0x08 },
    { L"Steel",         0xd4d00, 0xd4d34, indexMK1ArcadeSprites_Bonus, 0x09 },
    { L"Ruby",          0xb946c, 0xb94ec, indexMK1ArcadeSprites_Bonus, 0x0a },
    { L"Diamond",       0xd4c80, 0xd4d00, indexMK1ArcadeSprites_Bonus, 0x0a },
};

const sGame_PaletteDataset MK1_A_BONUS_STAGESPRITE_PALETTES[] =
{
    { L"Drifting Cloud",  0xd51a4, 0xd5224, indexMK1ArcadeSprites_Stages, 0x00 },
    { L"Background Moon", 0xd5226, 0xd52a6, indexMK1ArcadeSprites_Stages, 0x01 },
    { L"Background Hill", 0xd532a, 0xd53aa, indexMK1ArcadeSprites_Stages, 0x02 },
    { L"More Clouds",     0xd52a8, 0xd5328, indexMK1ArcadeSprites_Stages, 0x03 },
};

const sDescTreeNode MK1_A_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_PALETTES_P1, ARRAYSIZE(MK1_A_JOHNNYCAGE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_PALETTES_P2, ARRAYSIZE(MK1_A_JOHNNYCAGE_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_PALETTES_SHARED, ARRAYSIZE(MK1_A_JOHNNYCAGE_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_PALETTES_P1, ARRAYSIZE(MK1_A_KANO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_PALETTES_P2, ARRAYSIZE(MK1_A_KANO_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_PALETTES_SHARED, ARRAYSIZE(MK1_A_KANO_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_PALETTES_P1, ARRAYSIZE(MK1_A_SUBZERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_PALETTES_P2, ARRAYSIZE(MK1_A_SUBZERO_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_PALETTES_SHARED, ARRAYSIZE(MK1_A_SUBZERO_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_PALETTES_P1, ARRAYSIZE(MK1_A_SONYA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_PALETTES_P2, ARRAYSIZE(MK1_A_SONYA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_PALETTES_SHARED, ARRAYSIZE(MK1_A_SONYA_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_PALETTES_P1, ARRAYSIZE(MK1_A_LIUKANG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_PALETTES_P2, ARRAYSIZE(MK1_A_LIUKANG_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_PALETTES_SHARED, ARRAYSIZE(MK1_A_LIUKANG_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_PALETTES_P1, ARRAYSIZE(MK1_A_SCORPION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_PALETTES_P2, ARRAYSIZE(MK1_A_SCORPION_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_PALETTES_SHARED, ARRAYSIZE(MK1_A_SCORPION_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_PALETTES_P1, ARRAYSIZE(MK1_A_RAIDEN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_PALETTES_P2, ARRAYSIZE(MK1_A_RAIDEN_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_PALETTES_SHARED, ARRAYSIZE(MK1_A_RAIDEN_PALETTES_SHARED) },
};

const sDescTreeNode MK1_A_GORO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_GORO_PALETTES, ARRAYSIZE(MK1_A_GORO_PALETTES) },
};

const sDescTreeNode MK1_A_SHANGTSUNG_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_SHANGTSUNG_PALETTES, ARRAYSIZE(MK1_A_SHANGTSUNG_PALETTES) },
};

const sDescTreeNode MK1_A_REPTILE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_REPTILE_PALETTES, ARRAYSIZE(MK1_A_REPTILE_PALETTES) },
};

const sDescTreeNode MK1_A_BONUS_COLLECTION[] =
{
    { L"Character Select/Tower (Active)", DESC_NODETYPE_TREE, (void*)MK1_A_BONUS_CHARSEL_PALETTES, ARRAYSIZE(MK1_A_BONUS_CHARSEL_PALETTES) },
    { L"Character Select/Tower (Inactive)", DESC_NODETYPE_TREE, (void*)MK1_A_BONUS_CHARSEL_PALETTES_INACTIVE, ARRAYSIZE(MK1_A_BONUS_CHARSEL_PALETTES_INACTIVE) },
    { L"Test Your Might", DESC_NODETYPE_TREE, (void*)MK1_A_BONUS_TYM_PALETTES, ARRAYSIZE(MK1_A_BONUS_TYM_PALETTES) },
    { L"Stage Sprites", DESC_NODETYPE_TREE, (void*)MK1_A_BONUS_STAGESPRITE_PALETTES, ARRAYSIZE(MK1_A_BONUS_STAGESPRITE_PALETTES) },
};

const sDescTreeNode MK1_A_UNITS[] =
{
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK1_A_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK1_A_JOHNNYCAGE_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)MK1_A_KANO_COLLECTION, ARRAYSIZE(MK1_A_KANO_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK1_A_SUBZERO_COLLECTION, ARRAYSIZE(MK1_A_SUBZERO_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)MK1_A_SONYA_COLLECTION, ARRAYSIZE(MK1_A_SONYA_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK1_A_RAIDEN_COLLECTION, ARRAYSIZE(MK1_A_RAIDEN_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK1_A_LIUKANG_COLLECTION, ARRAYSIZE(MK1_A_LIUKANG_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK1_A_SCORPION_COLLECTION, ARRAYSIZE(MK1_A_SCORPION_COLLECTION) },
    { L"Goro", DESC_NODETYPE_TREE, (void*)MK1_A_GORO_COLLECTION, ARRAYSIZE(MK1_A_GORO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK1_A_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK1_A_SHANGTSUNG_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK1_A_REPTILE_COLLECTION, ARRAYSIZE(MK1_A_REPTILE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK1_A_BONUS_COLLECTION, ARRAYSIZE(MK1_A_BONUS_COLLECTION) },
};

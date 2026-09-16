#pragma once

const std::vector<uint16_t> MK1_PS2_IMGIDS_USED =
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

// The PS2 sprites move around compared to the rev0 arcade version we currently support
// There are a couple different shifts, so this is handled here via hardcoding as 
// opposed to just a unit-based shift

const sGame_PaletteDataset MK1_PS2_JohnnyCage_P1[] =
{
    { L"Johnny Cage P1", 0xdf208, 0xdf288, indexMK1ArcadeSprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_JohnnyCage_P2[] =
{
    { L"Johnny Cage P2", 0x9bea0, 0x9bf20, indexMK1ArcadeSprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_JohnnyCage_Shared[] =
{
    { L"Frozen Johnny Cage", 0xa63d6, 0xa6456, indexMK1ArcadeSprites_JohnnyCage, 0x00 },
    { L"Johnny Cage Forceball", 0xdf28a, 0xdf30a, indexMK1ArcadeSprites_JohnnyCage, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_Kano_P1[] =
{
    { L"Kano P1", 0xdf30c, 0xdf38c, indexMK1ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Kano_P2[] =
{
    { L"Kano P2", 0x9bf22, 0x9bfa2, indexMK1ArcadeSprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Kano_Shared[] =
{
    { L"Frozen Kano", 0xa64da, 0xa655a, indexMK1ArcadeSprites_Kano, 0x00 },
    { L"Kano Blue Knives", 0xdf38e, 0xdf40e, indexMK1ArcadeSprites_Kano, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_SubZero_P1[] =
{
    { L"Sub-Zero P1", 0xdf69a, 0xdf71a, indexMK1ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_SubZero_P2[] =
{
    { L"Sub-Zero P2", 0x9c12a, 0x9c1aa, indexMK1ArcadeSprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_SubZero_Shared[] =
{
    { L"Frozen Sub-Zero", 0xa6660, 0xa66e0, indexMK1ArcadeSprites_SubZero, 0x00 },
    { L"Sub-Zero Ice Ball", 0xdf71c, 0xdf79c, indexMK1ArcadeSprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_Sonya_P1[] =
{
    { L"Sonya P1", 0xdfcb2, 0xdfd32, indexMK1ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Sonya_P2[] =
{
    { L"Sonya P2", 0x9c1ac, 0x9c22c, indexMK1ArcadeSprites_Sonya, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Sonya_Shared[] =
{
    { L"Frozen Sonya", 0xa66e2, 0xa6762, indexMK1ArcadeSprites_Sonya, 0x00 },
    { L"Sonya Ring Toss", 0xdfd34, 0xdfdb4, indexMK1ArcadeSprites_Sonya, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_Raiden_P1[] =
{
    { L"Raiden P1", 0xdf410, 0xdf490, indexMK1ArcadeSprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Raiden_P2[] =
{
    { L"Raiden P2", 0x9bfa4, 0x9c024, indexMK1ArcadeSprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Raiden_Shared[] =
{
    { L"Frozen Raiden", 0xa655c, 0xa65dc, indexMK1ArcadeSprites_Raiden, 0x00 },
    { L"Electricity", 0xdfc2e, 0xdfcae, indexMK1ArcadeSprites_Raiden, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_LiuKang_P1[] =
{
    { L"Liu Kang P1", 0xdf514, 0xdf594, indexMK1ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_LiuKang_P2[] =
{
    { L"Liu Kang P2", 0x9c026, 0x9c0a6, indexMK1ArcadeSprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_LiuKang_Shared[] =
{
    { L"Frozen Liu Kang", 0xa6458, 0xa64d8, indexMK1ArcadeSprites_LiuKang, 0x00 },
    { L"Liu Kang Fireball", 0xdf596, 0xdf616, indexMK1ArcadeSprites_LiuKang, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_Scorpion_P1[] =
{
    { L"Scorpion P1", 0xdf618, 0xdf698, indexMK1ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Scorpion_P2[] =
{
    { L"Scorpion P2", 0x9c0a8, 0x9c128, indexMK1ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_Scorpion_Shared[] =
{
    { L"Frozen Scorpion", 0xa65de, 0xa665e, indexMK1ArcadeSprites_Scorpion, 0x00 },
    { L"Kunai", 0xe0d66, 0xe0d92, indexMK1ArcadeSprites_Scorpion, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_Goro_Palettes[] =
{
    { L"Goro", 0xdf820, 0xdf8a0, indexMK1ArcadeSprites_Goro, 0x00 },
    { L"Frozen Goro", 0xa6764, 0xa67e4, indexMK1ArcadeSprites_Goro, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_ShangTsung_Palettes[] =
{
    { L"Shang Tsung", 0xdfea0, 0xdff20, indexMK1ArcadeSprites_ShangTsung, 0x00 },
    { L"Frozen Shang Tsung", 0xa67e6, 0xa6866, indexMK1ArcadeSprites_ShangTsung, 0x00 },
    { L"Flaming Skull", 0xdff22, 0xdffa2, indexMK1ArcadeSprites_ShangTsung, 0x01 },
};

const sGame_PaletteDataset MK1_PS2_Reptile_Palettes[] =
{
    { L"Reptile", 0x9be1e, 0x9be9e, indexMK1ArcadeSprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_PS2_BonusPalettes_CharacterSelectTowerActive[] =
{
    { L"Johnny Cage", 0xdffc6, 0xe0046, indexMK1ArcadeSprites_JohnnyCage, 0x20 },
    { L"Kano", 0xe0048, 0xe00c8, indexMK1ArcadeSprites_Kano, 0x20 },
    { L"Liu Kang", 0xe00ca, 0xe014a, indexMK1ArcadeSprites_LiuKang, 0x20 },
    { L"Scorpion", 0xe014c, 0xe01cc, indexMK1ArcadeSprites_Scorpion, 0x20 },
    { L"Raiden", 0xe01ce, 0xe024e, indexMK1ArcadeSprites_Raiden, 0x20 },
    { L"Sub-Zero", 0xe0250, 0xe02d0, indexMK1ArcadeSprites_SubZero, 0x20 },
    { L"Sonya", 0xe02d2, 0xe0352, indexMK1ArcadeSprites_Sonya, 0x20 },
    { L"Goro", 0xe0354, 0xe03d4, indexMK1ArcadeSprites_Goro, 0x20 },
    { L"Shang Tsung", 0xe03d6, 0xe0448, indexMK1ArcadeSprites_ShangTsung, 0x20 },
};

const sGame_PaletteDataset MK1_PS2_BonusPalettes_CharacterSelectTowerInactive[] =
{
    { L"Johnny Cage", 0xc2a00, 0xc2a80, indexMK1ArcadeSprites_JohnnyCage, 0x20 },
    { L"Kano", 0xc2a82, 0xc2b02, indexMK1ArcadeSprites_Kano, 0x20 },
    { L"Liu Kang", 0xc2b04, 0xc2b84, indexMK1ArcadeSprites_LiuKang, 0x20 },
    { L"Scorpion", 0xc2b84, 0xc2c04, indexMK1ArcadeSprites_Scorpion, 0x20 },
    { L"Raiden", 0xc2c08, 0xc2c88, indexMK1ArcadeSprites_Raiden, 0x20 },
    { L"Sub-Zero", 0xc2c8a, 0xc2d0a, indexMK1ArcadeSprites_SubZero, 0x20 },
    { L"Sonya", 0xc2d0c, 0xc2d8c, indexMK1ArcadeSprites_Sonya, 0x20 },
};

const sGame_PaletteDataset MK1_PS2_BonusPalettes_TestYourMight[] =
{
    { L"Johnny Cage", 0xe0452, 0xe0552, indexMK1ArcadeSprites_Bonus, 0x00 },
    { L"Kano", 0xe0554, 0xe0654, indexMK1ArcadeSprites_Bonus, 0x01 },
    { L"Raiden", 0xe0656, 0xe0756, indexMK1ArcadeSprites_Bonus, 0x02 },
    { L"Liu Kang", 0xe0756, 0xe07d6, indexMK1ArcadeSprites_Bonus, 0x03 },
    { L"Scorpion / Sub-Zero shared", 0xe0842, 0xe09c6 },
    { L"Sonya", 0xe09c8, 0xe0ac8, indexMK1ArcadeSprites_Bonus, 0x05 },
    { L"Sonya P2 Clothes", 0xc4cce, 0xc4d4e, indexMK1ArcadeSprites_Bonus, 0x0b },
    { L"Meter Frame", 0xe0b12, 0xe0b28, indexMK1ArcadeSprites_Bonus, 0x06 },
    { L"Wood", 0xe0ad2, 0xe0b12, indexMK1ArcadeSprites_Bonus, 0x07 },
    { L"Stone", 0xe0be0, 0xe0c60, indexMK1ArcadeSprites_Bonus, 0x08 },
    { L"Steel", 0xe0ba8, 0xe0bdc, indexMK1ArcadeSprites_Bonus, 0x09 },
    { L"Ruby", 0xc4c4c, 0xc4ccc, indexMK1ArcadeSprites_Bonus, 0x0a },
    { L"Diamond", 0xe0b28, 0xe0ba8, indexMK1ArcadeSprites_Bonus, 0x0a },
};

const sGame_PaletteDataset MK1_PS2_BonusPalettes_Bonus[] =
{
    { L"HUD", 0xdfe3a, 0xdfe9e, indexMK1ArcadeSprites_Bonus, 0x0c },
};

const sDescTreeNode MK1_PS2_JohnnyCage_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_JohnnyCage_P1, ARRAYSIZE(MK1_PS2_JohnnyCage_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_JohnnyCage_P2, ARRAYSIZE(MK1_PS2_JohnnyCage_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_JohnnyCage_Shared, ARRAYSIZE(MK1_PS2_JohnnyCage_Shared) },
};

const sDescTreeNode MK1_PS2_Kano_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_Kano_P1, ARRAYSIZE(MK1_PS2_Kano_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_Kano_P2, ARRAYSIZE(MK1_PS2_Kano_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_Kano_Shared, ARRAYSIZE(MK1_PS2_Kano_Shared) },
};

const sDescTreeNode MK1_PS2_SubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_SubZero_P1, ARRAYSIZE(MK1_PS2_SubZero_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_SubZero_P2, ARRAYSIZE(MK1_PS2_SubZero_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_SubZero_Shared, ARRAYSIZE(MK1_PS2_SubZero_Shared) },
};

const sDescTreeNode MK1_PS2_Sonya_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_Sonya_P1, ARRAYSIZE(MK1_PS2_Sonya_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_Sonya_P2, ARRAYSIZE(MK1_PS2_Sonya_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_Sonya_Shared, ARRAYSIZE(MK1_PS2_Sonya_Shared) },
};

const sDescTreeNode MK1_PS2_Raiden_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_Raiden_P1, ARRAYSIZE(MK1_PS2_Raiden_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_Raiden_P2, ARRAYSIZE(MK1_PS2_Raiden_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_Raiden_Shared, ARRAYSIZE(MK1_PS2_Raiden_Shared) },
};

const sDescTreeNode MK1_PS2_LiuKang_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_LiuKang_P1, ARRAYSIZE(MK1_PS2_LiuKang_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_LiuKang_P2, ARRAYSIZE(MK1_PS2_LiuKang_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_LiuKang_Shared, ARRAYSIZE(MK1_PS2_LiuKang_Shared) },
};

const sDescTreeNode MK1_PS2_Scorpion_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_PS2_Scorpion_P1, ARRAYSIZE(MK1_PS2_Scorpion_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_PS2_Scorpion_P2, ARRAYSIZE(MK1_PS2_Scorpion_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MK1_PS2_Scorpion_Shared, ARRAYSIZE(MK1_PS2_Scorpion_Shared) },
};

const sDescTreeNode MK1_PS2_Goro_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_PS2_Goro_Palettes, ARRAYSIZE(MK1_PS2_Goro_Palettes) },
};

const sDescTreeNode MK1_PS2_ShangTsung_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_PS2_ShangTsung_Palettes, ARRAYSIZE(MK1_PS2_ShangTsung_Palettes) },
};

const sDescTreeNode MK1_PS2_Reptile_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_PS2_Reptile_Palettes, ARRAYSIZE(MK1_PS2_Reptile_Palettes) },
};

const sDescTreeNode MK1_PS2_BonusPalettes_COLLECTION[] =
{
    { L"Character Select/Tower (Active)", DESC_NODETYPE_TREE, (void*)MK1_PS2_BonusPalettes_CharacterSelectTowerActive, ARRAYSIZE(MK1_PS2_BonusPalettes_CharacterSelectTowerActive) },
    { L"Character Select/Tower (Inactive)", DESC_NODETYPE_TREE, (void*)MK1_PS2_BonusPalettes_CharacterSelectTowerInactive, ARRAYSIZE(MK1_PS2_BonusPalettes_CharacterSelectTowerInactive) },
    { L"Test Your Might", DESC_NODETYPE_TREE, (void*)MK1_PS2_BonusPalettes_TestYourMight, ARRAYSIZE(MK1_PS2_BonusPalettes_TestYourMight) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)MK1_PS2_BonusPalettes_Bonus, ARRAYSIZE(MK1_PS2_BonusPalettes_Bonus) },
};

const sDescTreeNode MK1_PS2_UNITS[] =
{
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK1_PS2_JohnnyCage_COLLECTION, ARRAYSIZE(MK1_PS2_JohnnyCage_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)MK1_PS2_Kano_COLLECTION, ARRAYSIZE(MK1_PS2_Kano_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK1_PS2_SubZero_COLLECTION, ARRAYSIZE(MK1_PS2_SubZero_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)MK1_PS2_Sonya_COLLECTION, ARRAYSIZE(MK1_PS2_Sonya_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK1_PS2_Raiden_COLLECTION, ARRAYSIZE(MK1_PS2_Raiden_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK1_PS2_LiuKang_COLLECTION, ARRAYSIZE(MK1_PS2_LiuKang_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK1_PS2_Scorpion_COLLECTION, ARRAYSIZE(MK1_PS2_Scorpion_COLLECTION) },
    { L"Goro", DESC_NODETYPE_TREE, (void*)MK1_PS2_Goro_COLLECTION, ARRAYSIZE(MK1_PS2_Goro_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK1_PS2_ShangTsung_COLLECTION, ARRAYSIZE(MK1_PS2_ShangTsung_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK1_PS2_Reptile_COLLECTION, ARRAYSIZE(MK1_PS2_Reptile_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK1_PS2_BonusPalettes_COLLECTION, ARRAYSIZE(MK1_PS2_BonusPalettes_COLLECTION) },
};

#pragma once

const std::vector<uint16_t> MK1_SEGA_IMGIDS_USED =
{
    indexSegaMK1Sprites_Goro,           // 0x2a
    indexSegaMK1Sprites_JohnnyCage,     // 0x2b
    indexSegaMK1Sprites_Kano,           // 0x2c
    indexSegaMK1Sprites_LiuKang,        // 0x2d
    indexSegaMK1Sprites_Raiden,         // 0x2e
    indexSegaMK1Sprites_Reptile,        // 0x2f
    indexSegaMK1Sprites_Scorpion,       // 0x30
    indexSegaMK1Sprites_ShangTsung,     // 0x31
    indexSegaMK1Sprites_SonyaBlade,     // 0x32
    indexSegaMK1Sprites_SubZero,        // 0x33

    indexSegaMK1Sprites_Bonus,          // 0x34
    indexSegaMK1Sprites_Stages,         // 0x35
};

const sGame_PaletteDataset MK1_SEGA_SubZero_P1[] =
{
    { L"P1", 0x1da4d4, 0x1da4f4, indexSegaMK1Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_SubZero_P2[] =
{
    { L"P2", 0x1da5f4, 0x1da614, indexSegaMK1Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Scorpion_P1[] =
{
    { L"P1", 0x1da4f4, 0x1da514, indexSegaMK1Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Scorpion_P2[] =
{
    { L"P2", 0x1da614, 0x1da634, indexSegaMK1Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Raiden_P1[] =
{
    { L"P1", 0x1da514, 0x1da534, indexSegaMK1Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Raiden_P2[] =
{
    { L"P2", 0x1da634, 0x1da654, indexSegaMK1Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Raiden_Frozen[] =
{
    { L"Frozen", 0x1da3f4, 0x1da414, indexSegaMK1Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Sonya_P1[] =
{
    { L"P1", 0x1da534, 0x1da554, indexSegaMK1Sprites_SonyaBlade, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Sonya_P2[] =
{
    { L"P2", 0x1da654, 0x1da674, indexSegaMK1Sprites_SonyaBlade, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Sonya_Frozen[] =
{
    { L"Frozen", 0x1da3d4, 0x1da3f4, indexSegaMK1Sprites_SonyaBlade, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_LiuKang_P1[] =
{
    { L"P1", 0x1da554, 0x1da574, indexSegaMK1Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_LiuKang_P2[] =
{
    { L"P2", 0x1da674, 0x1da694, indexSegaMK1Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_LiuKang_Frozen[] =
{
    { L"Frozen", 0x1da434, 0x1da454, indexSegaMK1Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Kano_P1[] =
{
    { L"P1", 0x1da574, 0x1da594, indexSegaMK1Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Kano_P2[] =
{
    { L"P2", 0x1da694, 0x1da6b4, indexSegaMK1Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Kano_Frozen[] =
{
    { L"Frozen", 0x1da414, 0x1da434, indexSegaMK1Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_JohnnyCage_P1[] =
{
    { L"P1", 0x1da594, 0x1da5b4, indexSegaMK1Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_JohnnyCage_P2[] =
{
    { L"P2", 0x1da6b4, 0x1da6d4, indexSegaMK1Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_JohnnyCage_Frozen[] =
{
    { L"Frozen", 0x1da474, 0x1da494, indexSegaMK1Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Goro_Palettes[] =
{
    { L"Goro", 0x1da5b4, 0x1da5d4, indexSegaMK1Sprites_Goro, 0x00 },
    { L"Frozen", 0x1da494, 0x1da4b4, indexSegaMK1Sprites_Goro, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_ShangTsung_Palettes[] =
{
    { L"Shang Tsung", 0x1da5d4, 0x1da5f4, indexSegaMK1Sprites_ShangTsung, 0x00 },
    { L"Frozen", 0x1da4b4, 0x1da4d4, indexSegaMK1Sprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_Reptile_Palettes[] =
{
    { L"Reptile", 0x1da3b4, 0x1da3d4, indexSegaMK1Sprites_Reptile, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_SharedExtras_MaleNinja[] =
{
    { L"Frozen", 0x1da454, 0x1da474, indexSegaMK1Sprites_Reptile, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_TestYourMight_Kombatants[] =
{
    { L"Sub-Zero",  0x1a01e0, 0x1a0200, indexSegaMK1Sprites_Bonus, 0x05 },
    { L"Scorpion",  0x1a01c0, 0x1a01e0, indexSegaMK1Sprites_Bonus, 0x05 },
    { L"Raiden",    0x1a0180, 0x1a01a0, indexSegaMK1Sprites_Bonus, 0x03 },
    { L"Sonya",     0x1a0200, 0x1a0220, indexSegaMK1Sprites_Bonus, 0x04 },
    { L"Liu Kang",  0x1a01a0, 0x1a01c0, indexSegaMK1Sprites_Bonus, 0x02 },
    { L"Kano",      0x1a0160, 0x1a0180, indexSegaMK1Sprites_Bonus, 0x01 },
    { L"Johnny Cage", 0x1a0140, 0x1a0160, indexSegaMK1Sprites_Bonus, 0x00 },
};

const sGame_PaletteDataset MK1_SEGA_TestYourMight_Materials[] =
{
    { L"Wood",      0x1a00a0, 0x1a00c0, indexSegaMK1Sprites_Bonus, 0x09 },
    { L"Stone",     0x1a00c0, 0x1a00e0, indexSegaMK1Sprites_Bonus, 0x08 },
    { L"Steel",     0x1a00e0, 0x1a0100, indexSegaMK1Sprites_Bonus, 0x07 },
    { L"Ruby",      0x1a0100, 0x1a0120, indexSegaMK1Sprites_Bonus, 0x06 },
    { L"Diamond",   0x1a0120, 0x1a0140, indexSegaMK1Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset MK1_SEGA_Stages_GorosLair[] =
{
    { L"Main Layer", 0x19597a, 0x19599a },
    { L"HUD Layer", 0x19599a, 0x1959ba },
};

const sGame_PaletteDataset MK1_SEGA_Stages_TheThroneRoom[] =
{
    { L"Main Layer", 0x199400, 0x199420 },
    { L"HUD Layer", 0x199420, 0x199440 },
};

const sGame_PaletteDataset MK1_SEGA_Stages_PalaceGates[] =
{
    { L"Main Layer", 0x19d126, 0x19d146 },
    { L"HUD Layer", 0x19d146, 0x19d166 },
};

const sGame_PaletteDataset MK1_SEGA_Stages_TheCourtyard[] =
{
    { L"Main Layer", 0x19f6d8, 0x19f6f8 },
    { L"HUD Layer", 0x19f6f8, 0x19f718 },
};

const sGame_PaletteDataset MK1_SEGA_Stages_WarriorShrine[] =
{
    { L"Main Layer", 0x19f9e2, 0x19fa02 },
    { L"HUD Layer", 0x19fa02, 0x19fa22 },
};

const sGame_PaletteDataset MK1_SEGA_Stages_ThePit[] =
{
    { L"Main Layer", 0x19fab2, 0x19fad2 },
    { L"HUD Layer", 0x19fa92, 0x19fab2 },
};

const sGame_PaletteDataset MK1_SEGA_CharacterBiosEndings_Bios[] =
{
    { L"Sub-Zero",      0x1a0400, 0x1a0420, indexSegaMK1Sprites_Bonus, 0x17 },
    { L"Scorpion",      0x1a03a0, 0x1a03c0, indexSegaMK1Sprites_Bonus, 0x15 },
    { L"Raiden",        0x1a0340, 0x1a0360, indexSegaMK1Sprites_Bonus, 0x14 },
    { L"Sonya",         0x1a0460, 0x1a0480, indexSegaMK1Sprites_Bonus, 0x16 },
    { L"Liu Kang",      0x1a0280, 0x1a02a0, indexSegaMK1Sprites_Bonus, 0x13 },
    { L"Kano",          0x1a02e0, 0x1a0300, indexSegaMK1Sprites_Bonus, 0x12 },
    { L"Johnny Cage",   0x1a0220, 0x1a0240, indexSegaMK1Sprites_Bonus, 0x11 },
    { L"Goro",          0x1a0020, 0x1a0040, indexSegaMK1Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset MK1_SEGA_CharacterBiosEndings_Endings[] =
{
    { L"Sub-Zero 1",    0x1a0420, 0x1a0440, indexSegaMK1Sprites_Bonus, 0x24 },
    { L"Sub-Zero 2",    0x1a0440, 0x1a0460, indexSegaMK1Sprites_Bonus, 0x25 },
    { L"Scorpion 1",    0x1a03c0, 0x1a03e0, indexSegaMK1Sprites_Bonus, 0x20 },
    { L"Scorpion 2",    0x1a03e0, 0x1a0400, indexSegaMK1Sprites_Bonus, 0x21 },
    { L"Raiden 1",      0x1a0360, 0x1a0380, indexSegaMK1Sprites_Bonus, 0x1e },
    { L"Raiden 2",      0x1a0380, 0x1a03a0, indexSegaMK1Sprites_Bonus, 0x1f },
    { L"Sonya 1",       0x1a0480, 0x1a04a0, indexSegaMK1Sprites_Bonus, 0x22 },
    { L"Sonya 2",       0x1a04a0, 0x1a04c0, indexSegaMK1Sprites_Bonus, 0x23 },
    { L"Liu Kang 1",    0x1a02a0, 0x1a02c0, indexSegaMK1Sprites_Bonus, 0x1c },
    { L"Liu Kang 2",    0x1a02c0, 0x1a02e0, indexSegaMK1Sprites_Bonus, 0x1d },
    { L"Kano 1",        0x1a0300, 0x1a0320, indexSegaMK1Sprites_Bonus, 0x1a },
    { L"Kano 2",        0x1a0320, 0x1a0340, indexSegaMK1Sprites_Bonus, 0x1b },
    { L"Johnny Cage 1", 0x1a0240, 0x1a0260, indexSegaMK1Sprites_Bonus, 0x18 },
    { L"Johnny Cage 2", 0x1a0260, 0x1a0280, indexSegaMK1Sprites_Bonus, 0x19 },
};

const sGame_PaletteDataset MK1_SEGA_BonusPalettes_Palettes[] =
{
    { L"Arena Presents",        0x1b37a, 0x1b39a },
    { L"A Probe Development",   0x1a2fa, 0x1a31a },
    { L"Title Screen",          0x1a0000, 0x1a0020 },
    { L"Font/Background",       0x1a0040, 0x1a0060 },
    { L"Portraits",             0x1a0060, 0x1a0080 },
    { L"New Champ",             0x1a0080, 0x1a00a0 },
    { L"Shang Tsung Portrait",  0x1a04e0, 0x1a0500 },
    { L"Goro Portrait",         0x1a0500, 0x1a0520 },
};

const sDescTreeNode MK1_SEGA_SubZero_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_SubZero_P1, ARRAYSIZE(MK1_SEGA_SubZero_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_SubZero_P2, ARRAYSIZE(MK1_SEGA_SubZero_P2) },
};

const sDescTreeNode MK1_SEGA_Scorpion_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Scorpion_P1, ARRAYSIZE(MK1_SEGA_Scorpion_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Scorpion_P2, ARRAYSIZE(MK1_SEGA_Scorpion_P2) },
};

const sDescTreeNode MK1_SEGA_Raiden_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Raiden_P1, ARRAYSIZE(MK1_SEGA_Raiden_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Raiden_P2, ARRAYSIZE(MK1_SEGA_Raiden_P2) },
    { L"Frozen", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Raiden_Frozen, ARRAYSIZE(MK1_SEGA_Raiden_Frozen) },
};

const sDescTreeNode MK1_SEGA_Sonya_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Sonya_P1, ARRAYSIZE(MK1_SEGA_Sonya_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Sonya_P2, ARRAYSIZE(MK1_SEGA_Sonya_P2) },
    { L"Frozen", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Sonya_Frozen, ARRAYSIZE(MK1_SEGA_Sonya_Frozen) },
};

const sDescTreeNode MK1_SEGA_LiuKang_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_LiuKang_P1, ARRAYSIZE(MK1_SEGA_LiuKang_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_LiuKang_P2, ARRAYSIZE(MK1_SEGA_LiuKang_P2) },
    { L"Frozen", DESC_NODETYPE_TREE, (void*)MK1_SEGA_LiuKang_Frozen, ARRAYSIZE(MK1_SEGA_LiuKang_Frozen) },
};

const sDescTreeNode MK1_SEGA_Kano_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Kano_P1, ARRAYSIZE(MK1_SEGA_Kano_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Kano_P2, ARRAYSIZE(MK1_SEGA_Kano_P2) },
    { L"Frozen", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Kano_Frozen, ARRAYSIZE(MK1_SEGA_Kano_Frozen) },
};

const sDescTreeNode MK1_SEGA_JohnnyCage_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SEGA_JohnnyCage_P1, ARRAYSIZE(MK1_SEGA_JohnnyCage_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SEGA_JohnnyCage_P2, ARRAYSIZE(MK1_SEGA_JohnnyCage_P2) },
    { L"Frozen", DESC_NODETYPE_TREE, (void*)MK1_SEGA_JohnnyCage_Frozen, ARRAYSIZE(MK1_SEGA_JohnnyCage_Frozen) },
};

const sDescTreeNode MK1_SEGA_Goro_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Goro_Palettes, ARRAYSIZE(MK1_SEGA_Goro_Palettes) },
};

const sDescTreeNode MK1_SEGA_ShangTsung_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SEGA_ShangTsung_Palettes, ARRAYSIZE(MK1_SEGA_ShangTsung_Palettes) },
};

const sDescTreeNode MK1_SEGA_Reptile_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Reptile_Palettes, ARRAYSIZE(MK1_SEGA_Reptile_Palettes) },
};

const sDescTreeNode MK1_SEGA_SharedExtras_COLLECTION[] =
{
    { L"Male Ninja", DESC_NODETYPE_TREE, (void*)MK1_SEGA_SharedExtras_MaleNinja, ARRAYSIZE(MK1_SEGA_SharedExtras_MaleNinja) },
};

const sDescTreeNode MK1_SEGA_TestYourMight_COLLECTION[] =
{
    { L"Kombatants", DESC_NODETYPE_TREE, (void*)MK1_SEGA_TestYourMight_Kombatants, ARRAYSIZE(MK1_SEGA_TestYourMight_Kombatants) },
    { L"Materials", DESC_NODETYPE_TREE, (void*)MK1_SEGA_TestYourMight_Materials, ARRAYSIZE(MK1_SEGA_TestYourMight_Materials) },
};

const sDescTreeNode MK1_SEGA_Stages_COLLECTION[] =
{
    { L"Goro's Lair", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_GorosLair, ARRAYSIZE(MK1_SEGA_Stages_GorosLair) },
    { L"The Throne Room", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_TheThroneRoom, ARRAYSIZE(MK1_SEGA_Stages_TheThroneRoom) },
    { L"Palace Gates", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_PalaceGates, ARRAYSIZE(MK1_SEGA_Stages_PalaceGates) },
    { L"The Courtyard", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_TheCourtyard, ARRAYSIZE(MK1_SEGA_Stages_TheCourtyard) },
    { L"Warrior Shrine", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_WarriorShrine, ARRAYSIZE(MK1_SEGA_Stages_WarriorShrine) },
    { L"The Pit", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_ThePit, ARRAYSIZE(MK1_SEGA_Stages_ThePit) },
};

const sDescTreeNode MK1_SEGA_CharacterBiosEndings_COLLECTION[] =
{
    { L"Bios", DESC_NODETYPE_TREE, (void*)MK1_SEGA_CharacterBiosEndings_Bios, ARRAYSIZE(MK1_SEGA_CharacterBiosEndings_Bios) },
    { L"Endings", DESC_NODETYPE_TREE, (void*)MK1_SEGA_CharacterBiosEndings_Endings, ARRAYSIZE(MK1_SEGA_CharacterBiosEndings_Endings) },
};

const sDescTreeNode MK1_SEGA_BonusPalettes_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SEGA_BonusPalettes_Palettes, ARRAYSIZE(MK1_SEGA_BonusPalettes_Palettes) },
};

const sDescTreeNode MK1_SEGA_UNITS[] =
{
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK1_SEGA_SubZero_COLLECTION, ARRAYSIZE(MK1_SEGA_SubZero_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Scorpion_COLLECTION, ARRAYSIZE(MK1_SEGA_Scorpion_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Raiden_COLLECTION, ARRAYSIZE(MK1_SEGA_Raiden_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Sonya_COLLECTION, ARRAYSIZE(MK1_SEGA_Sonya_COLLECTION) },
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK1_SEGA_LiuKang_COLLECTION, ARRAYSIZE(MK1_SEGA_LiuKang_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Kano_COLLECTION, ARRAYSIZE(MK1_SEGA_Kano_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK1_SEGA_JohnnyCage_COLLECTION, ARRAYSIZE(MK1_SEGA_JohnnyCage_COLLECTION) },
    { L"Goro", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Goro_COLLECTION, ARRAYSIZE(MK1_SEGA_Goro_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK1_SEGA_ShangTsung_COLLECTION, ARRAYSIZE(MK1_SEGA_ShangTsung_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Reptile_COLLECTION, ARRAYSIZE(MK1_SEGA_Reptile_COLLECTION) },
    { L"Shared Extras", DESC_NODETYPE_TREE, (void*)MK1_SEGA_SharedExtras_COLLECTION, ARRAYSIZE(MK1_SEGA_SharedExtras_COLLECTION) },
    { L"Test Your Might", DESC_NODETYPE_TREE, (void*)MK1_SEGA_TestYourMight_COLLECTION, ARRAYSIZE(MK1_SEGA_TestYourMight_COLLECTION) },
    // These are compressed: we thus won't expose those at this time.
    //{ L"Stages", DESC_NODETYPE_TREE, (void*)MK1_SEGA_Stages_COLLECTION, ARRAYSIZE(MK1_SEGA_Stages_COLLECTION) },
    { L"Character Bios/Endings", DESC_NODETYPE_TREE, (void*)MK1_SEGA_CharacterBiosEndings_COLLECTION, ARRAYSIZE(MK1_SEGA_CharacterBiosEndings_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK1_SEGA_BonusPalettes_COLLECTION, ARRAYSIZE(MK1_SEGA_BonusPalettes_COLLECTION) },
};

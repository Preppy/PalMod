#pragma once

const std::vector<uint16_t> WORLDHEROES_A_IMGIDS_USED =
{
    indexWH1Sprites_Brocken,                // 0xef
    indexWH1Sprites_Dragon,                 // 0xf0
    indexWH1Sprites_Fuuma,                  // 0xf1
    indexWH1Sprites_Geegus,                 // 0xf2
    indexWH1Sprites_Hanzou,                 // 0xf3
    indexWH1Sprites_JCarn,                  // 0xf4
    indexWH1Sprites_Jeanne,                 // 0xf5
    indexWH1Sprites_MusclePower,            // 0xf6
    indexWH1Sprites_Rasputin,               // 0xf7
    indexWH1Sprites_Portraits,              // 0xf8
    indexWH1Sprites_Stages,                 // 0xf9

    indexWH1Sprites_Bonus,                  // 0xff
};

const sGame_PaletteDataset WorldHeroes_A_HanzouHattori_Palettes[] =
{
    { L"Hanzou", 0x1200, 0x1220, indexWH1Sprites_Hanzou, 0x00 },
    { L"Unused Palette", 0x1220, 0x1240, indexWH1Sprites_Hanzou, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_JeanneDArc_Palettes[] =
{
    { L"Jeanne", 0x1240, 0x1260, indexWH1Sprites_Jeanne, 0x00 },
    { L"Unused Palette", 0x1260, 0x1280, indexWH1Sprites_Jeanne, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_KimDragon_Palettes[] =
{
    { L"Dragon", 0x1280, 0x12a0, indexWH1Sprites_Dragon, 0x00 },
    { L"Unused Palette", 0x12a0, 0x12c0, indexWH1Sprites_Dragon, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_Rasputin[] =
{
    { L"Rasputin", 0x12c0, 0x12e0, indexWH1Sprites_Rasputin, 0x00 },
    { L"Unused Palette", 0x12e0, 0x1300, indexWH1Sprites_Rasputin, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_JuliusCarn_Palettes[] =
{
    { L"J. Carn", 0x1300, 0x1320, indexWH1Sprites_JCarn, 0x00 },
    { L"Unused Palette", 0x1320, 0x1340, indexWH1Sprites_JCarn, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_MusclePower_Palettes[] =
{
    { L"Muscle Power", 0x1340, 0x1360, indexWH1Sprites_MusclePower, 0x00 },
    { L"Unused Palette", 0x1480, 0x14a0, indexWH1Sprites_MusclePower, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_Brocken_Palettes[] =
{
    { L"Brocken", 0x1360, 0x1380, indexWH1Sprites_Brocken, 0x00, &pairNext },
    { L"Attack Effects", 0x1500, 0x1520, indexWH1Sprites_Brocken, 0x01 },
    { L"Unused Palette", 0x1440, 0x1460, indexWH1Sprites_Brocken, 0x00, &pairNext },
    { L"Unused Attack Effects", 0x14a0, 0x14c0, indexWH1Sprites_Brocken, 0x01 },
    { L"Unused Palette 2", 0x1380, 0x13a0 },
};

const sGame_PaletteDataset WorldHeroes_A_FuumaKotaro_Palettes[] =
{
    { L"Fuuma", 0x1400, 0x1420, indexWH1Sprites_Fuuma, 0x00 },
    { L"Unused Palette", 0x1460, 0x1480, indexWH1Sprites_Fuuma, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_Geegus_Palettes[] =
{
    { L"Geegus (Base Form)", 0x1420, 0x1440, indexWH1Sprites_Geegus, 0x00 },
    { L"Muscle Power",      0x5a40, 0x5a60, indexWH1Sprites_MusclePower, 0x00 },
    { L"Jeanne",            0x5a60, 0x5a80, indexWH1Sprites_Jeanne, 0x00 },
    { L"J. Carn",           0x5a80, 0x5aa0, indexWH1Sprites_JCarn, 0x00 },
    { L"Brocken",           0x5aa0, 0x5ac0, indexWH1Sprites_Geegus, 0x01 },
    { L"Dragon",            0x5ac0, 0x5ae0, indexWH1Sprites_Dragon, 0x00 },
    { L"Hanzou",            0x5ae0, 0x5b00, indexWH1Sprites_Hanzou, 0x00 },
    { L"Fuuma",             0x5b00, 0x5b20, indexWH1Sprites_Fuuma, 0x00 },
    { L"Rasputin",          0x5b20, 0x5b40, indexWH1Sprites_Rasputin, 0x00 },
};

const sGame_PaletteDataset WorldHeroes_A_Portraits_Lifebar[] =
{
    { L"Main Characters",   0x1100, 0x1160, indexWH1Sprites_Portraits, 0x10 },
    { L"Geegus",            0x11a0, 0x11c0, indexWH1Sprites_Portraits, 0x11 },
};

const sGame_PaletteDataset WorldHeroes_A_Portraits_VSWinScreen[] =
{
    { L"Hanzou",        0x1c00, 0x1c60, indexWH1Sprites_Portraits, 0x04 },
    { L"Jeanne",        0x1d20, 0x1da0, indexWH1Sprites_Portraits, 0x06 },
    { L"Dragon",        0x1ce0, 0x1d20, indexWH1Sprites_Portraits, 0x01 },
    { L"Rasputin",      0x1e00, 0x1e60, indexWH1Sprites_Portraits, 0x08 },
    { L"J. Carn",       0x1f00, 0x1f60, indexWH1Sprites_Portraits, 0x05 },
    { L"Muscle Power",  0x1da0, 0x1e00, indexWH1Sprites_Portraits, 0x07 },
    { L"Brocken",       0x1e60, 0x1f00, indexWH1Sprites_Portraits, 0x00 },
    { L"Fuuma",         0x1c60, 0x1ce0, indexWH1Sprites_Portraits, 0x02 },
    { L"Geegus",        0x1740, 0x1760, indexWH1Sprites_Portraits, 0x03 },
};

const sDescTreeNode WorldHeroes_A_HanzouHattori_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_HanzouHattori_Palettes, ARRAYSIZE(WorldHeroes_A_HanzouHattori_Palettes) },
};

const sDescTreeNode WorldHeroes_A_JeanneDArc_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_JeanneDArc_Palettes, ARRAYSIZE(WorldHeroes_A_JeanneDArc_Palettes) },
};

const sDescTreeNode WorldHeroes_A_KimDragon_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_KimDragon_Palettes, ARRAYSIZE(WorldHeroes_A_KimDragon_Palettes) },
};

const sDescTreeNode WorldHeroes_A_Rasputin_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Rasputin, ARRAYSIZE(WorldHeroes_A_Rasputin) },
};

const sDescTreeNode WorldHeroes_A_JuliusCarn_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_JuliusCarn_Palettes, ARRAYSIZE(WorldHeroes_A_JuliusCarn_Palettes) },
};

const sDescTreeNode WorldHeroes_A_MusclePower_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_MusclePower_Palettes, ARRAYSIZE(WorldHeroes_A_MusclePower_Palettes) },
};

const sDescTreeNode WorldHeroes_A_Brocken_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Brocken_Palettes, ARRAYSIZE(WorldHeroes_A_Brocken_Palettes) },
};

const sDescTreeNode WorldHeroes_A_FuumaKotaro_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_FuumaKotaro_Palettes, ARRAYSIZE(WorldHeroes_A_FuumaKotaro_Palettes) },
};

const sDescTreeNode WorldHeroes_A_Geegus_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Geegus_Palettes, ARRAYSIZE(WorldHeroes_A_Geegus_Palettes) },
};

const sDescTreeNode WorldHeroes_A_Portraits_COLLECTION[] =
{
    { L"Lifebar", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Portraits_Lifebar, ARRAYSIZE(WorldHeroes_A_Portraits_Lifebar) },
    { L"VS/Win Screen", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Portraits_VSWinScreen, ARRAYSIZE(WorldHeroes_A_Portraits_VSWinScreen) },
};

const sDescTreeNode WorldHeroes_A_UNITS[] =
{
    { L"Hanzou Hattori", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_HanzouHattori_COLLECTION, ARRAYSIZE(WorldHeroes_A_HanzouHattori_COLLECTION) },
    { L"Jeanne D'Arc", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_JeanneDArc_COLLECTION, ARRAYSIZE(WorldHeroes_A_JeanneDArc_COLLECTION) },
    { L"Kim Dragon", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_KimDragon_COLLECTION, ARRAYSIZE(WorldHeroes_A_KimDragon_COLLECTION) },
    { L"Rasputin", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Rasputin_COLLECTION, ARRAYSIZE(WorldHeroes_A_Rasputin_COLLECTION) },
    { L"Julius Carn", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_JuliusCarn_COLLECTION, ARRAYSIZE(WorldHeroes_A_JuliusCarn_COLLECTION) },
    { L"Muscle Power", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_MusclePower_COLLECTION, ARRAYSIZE(WorldHeroes_A_MusclePower_COLLECTION) },
    { L"Brocken", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Brocken_COLLECTION, ARRAYSIZE(WorldHeroes_A_Brocken_COLLECTION) },
    { L"Fuuma Kotaro", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_FuumaKotaro_COLLECTION, ARRAYSIZE(WorldHeroes_A_FuumaKotaro_COLLECTION) },
    { L"Geegus", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Geegus_COLLECTION, ARRAYSIZE(WorldHeroes_A_Geegus_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Portraits_COLLECTION, ARRAYSIZE(WorldHeroes_A_Portraits_COLLECTION) },
};
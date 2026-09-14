#pragma once

const std::vector<uint16_t> WORLDHEROES_A_IMGIDS_USED =
{
    indexWHPSprites_Brocken,                // 0xda
    indexWHPSprites_CaptainKidd,            // 0xdb
    indexWHPSprites_Dragon,                 // 0xdc
    indexWHPSprites_Erick,                  // 0xdd
    indexWHPSprites_Fuuma,                  // 0xde
    indexWHPSprites_Hanzou,                 // 0xdf
    indexWHPSprites_Jack,                   // 0xe0
    indexWHPSprites_JCarn,                  // 0xe1
    indexWHPSprites_Jeanne,                 // 0xe2
    indexWHPSprites_JMax,                   // 0xe3
    indexWHPSprites_Mudman,                 // 0xe4
    indexWHPSprites_MusclePower,            // 0xe5
    indexWHPSprites_NeoDio,                 // 0xe6
    indexWHPSprites_Rasputin,               // 0xe7
    indexWHPSprites_Ryofu,                  // 0xe8
    indexWHPSprites_Ryoko,                  // 0xe9
    indexWHPSprites_Shura,                  // 0xea
    indexWHPSprites_SonGokuu,               // 0xeb
    indexWHPSprites_Zeus,                   // 0xec
    indexWHPSprites_Stages,                 // 0xed
    indexWHPSprites_Bonus,                  // 0xee
};

const sGame_PaletteDataset WorldHeroes_A_HanzouHattori_Palettes[] =
{
    { L"Hanzou", 0x1200, 0x1220 },
    { L"Unused Palette", 0x1220, 0x1240 },
};

const sGame_PaletteDataset WorldHeroes_A_JeanneDArc_Palettes[] =
{
    { L"Jeanne", 0x1240, 0x1260 },
    { L"Unused Palette", 0x1260, 0x1280 },
};

const sGame_PaletteDataset WorldHeroes_A_KimDragon_Palettes[] =
{
    { L"Dragon", 0x1280, 0x12a0 },
    { L"Unused Palette", 0x12a0, 0x12c0 },
};

const sGame_PaletteDataset WorldHeroes_A_Rasputin_P1[] =
{
    { L"Rasputin", 0x12c0, 0x12e0 },
    { L"Unused Palette", 0x12e0, 0x1300 },
};

const sGame_PaletteDataset WorldHeroes_A_JuliusCarn_Palettes[] =
{
    { L"J. Carn", 0x1300, 0x1320 },
    { L"Unused Palette", 0x1320, 0x1340 },
};

const sGame_PaletteDataset WorldHeroes_A_MusclePower_Palettes[] =
{
    { L"Muscle Power", 0x1340, 0x1360 },
    { L"Unused Palette", 0x1480, 0x14a0 },
};

const sGame_PaletteDataset WorldHeroes_A_Brocken_Palettes[] =
{
    { L"Brocken", 0x1360, 0x1380 },
    { L"Attack Effects", 0x1500, 0x1520 },
    { L"Unused Palette", 0x1440, 0x1460 },
    { L"Unused Attack Effects", 0x14a0, 0x14c0 },
    { L"Unused Palette 2", 0x1380, 0x13a0 },
};

const sGame_PaletteDataset WorldHeroes_A_FuumaKotaro_Palettes[] =
{
    { L"Fuuma", 0x1400, 0x1420 },
    { L"Unused Palette", 0x1460, 0x1480 },
};

const sGame_PaletteDataset WorldHeroes_A_Geegus_Palettes[] =
{
    { L"Geegus (Base Form)", 0x1420, 0x1440 },
    { L"Muscle Power", 0x5a40, 0x5a60 },
    { L"Jeanne", 0x5a60, 0x5a80 },
    { L"J. Carn", 0x5a80, 0x5aa0 },
    { L"Brocken", 0x5aa0, 0x5ac0 },
    { L"Dragon", 0x5ac0, 0x5ae0 },
    { L"Hanzou", 0x5ae0, 0x5b00 },
    { L"Fuuma", 0x5b00, 0x5b20 },
    { L"Rasputin", 0x5b20, 0x5b40 },
};

const sGame_PaletteDataset WorldHeroes_A_Portraits_Lifebar[] =
{
    { L"Main Characters", 0x1100, 0x1160 },
    { L"Geegus", 0x11a0, 0x11c0 },
};

const sGame_PaletteDataset WorldHeroes_A_Portraits_VSWinScreen[] =
{
    { L"Hanzou", 0x1c00, 0x1c60 },
    { L"Jeanne", 0x1d20, 0x1da0 },
    { L"Dragon", 0x1ce0, 0x1d20 },
    { L"Rasputin", 0x1e00, 0x1e60 },
    { L"J. Carn", 0x1f00, 0x1f60 },
    { L"Muscle Power", 0x1da0, 0x1e00 },
    { L"Brocken", 0x1e60, 0x1f00 },
    { L"Fuuma", 0x1c60, 0x1ce0 },
    { L"Geegus", 0x1740, 0x1760 },
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
    { L"P1", DESC_NODETYPE_TREE, (void*)WorldHeroes_A_Rasputin_P1, ARRAYSIZE(WorldHeroes_A_Rasputin_P1) },
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
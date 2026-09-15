#pragma once

const std::vector<uint16_t> WORLDHEROES2_A_IMGIDS_USED =
{
    indexWHPSprites_CaptainKidd,            // 0xdb
    indexWHPSprites_Erick,                  // 0xdd
    indexWHPSprites_JMax,                   // 0xe3
    indexWHPSprites_Mudman,                 // 0xe4
    indexWHPSprites_NeoDio,                 // 0xe6
    indexWHPSprites_Ryoko,                  // 0xe9
    indexWHPSprites_Shura,                  // 0xea

    indexWH1Sprites_Brocken,                // 0xef
    indexWH1Sprites_Dragon,                 // 0xf0
    indexWH1Sprites_Fuuma,                  // 0xf0
    indexWH1Sprites_Geegus,                 // 0xf1
    indexWH1Sprites_Hanzou,                 // 0xf2
    indexWH1Sprites_JCarn,                  // 0xf3
    indexWH1Sprites_Jeanne,                 // 0xf4
    indexWH1Sprites_MusclePower,            // 0xf5
    indexWH1Sprites_Rasputin,               // 0xf6
};

const sGame_PaletteDataset WorldHeroes2_A_HanzouHattori_A[] =
{
    { L"Hanzou A", 0x101200, 0x101220, indexWH1Sprites_Hanzou, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_HanzouHattori_B[] =
{
    { L"Hanzou B", 0x101220, 0x101240, indexWH1Sprites_Hanzou, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_FuumaKotaro_A[] =
{
    { L"Fuuma A", 0x101240, 0x101260, indexWH1Sprites_Fuuma, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_FuumaKotaro_B[] =
{
    { L"Fuuma B", 0x101260, 0x101280, indexWH1Sprites_Fuuma, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_KimDragon_A[] =
{
    { L"Dragon A", 0x101280, 0x1012a0, indexWH1Sprites_Dragon, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_KimDragon_B[] =
{
    { L"Dragon B", 0x1012a0, 0x1012c0, indexWH1Sprites_Dragon, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_JeannedArc_A[] =
{
    { L"Jeanne A", 0x1012c0, 0x1012e0, indexWH1Sprites_Jeanne, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_JeannedArc_B[] =
{
    { L"Jeanne B", 0x1012e0, 0x101300, indexWH1Sprites_Jeanne, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_JuliusCarn_A[] =
{
    { L"J. Carn A", 0x101300, 0x101320, indexWH1Sprites_JCarn, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_JuliusCarn_B[] =
{
    { L"J. Carn B", 0x101320, 0x101340, indexWH1Sprites_JCarn, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_MusclePower_A[] =
{
    { L"Muscle Power A", 0x101340, 0x101360, indexWH1Sprites_MusclePower, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_MusclePower_B[] =
{
    { L"Muscle Power B", 0x101360, 0x101380, indexWH1Sprites_MusclePower, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_Brocken_A[] =
{
    { L"Brocken A", 0x101380, 0x1013a0, indexWH1Sprites_Brocken, 0x00, &pairNext },
    { L"Attack Effects A", 0x101600, 0x101620, indexWH1Sprites_Brocken, 0x01 },
};

const sGame_PaletteDataset WorldHeroes2_A_Brocken_B[] =
{
    { L"Brocken B", 0x1013a0, 0x1013c0, indexWH1Sprites_Brocken, 0x00, &pairNext },
    { L"Attack Effects B", 0x101620, 0x101640, indexWH1Sprites_Brocken, 0x01 },
};

const sGame_PaletteDataset WorldHeroes2_A_Rasputin_A[] =
{
    { L"Rasputin A", 0x1013c0, 0x1013e0, indexWH1Sprites_Rasputin, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_Rasputin_B[] =
{
    { L"Rasputin B", 0x1013e0, 0x101400, indexWH1Sprites_Rasputin, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_ShuraNaiKhanotmtom_A[] =
{
    { L"Shura A", 0x101400, 0x101420, indexWHPSprites_Shura, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_ShuraNaiKhanotmtom_B[] =
{
    { L"Shura B", 0x101420, 0x101440, indexWHPSprites_Shura, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_RyokoIzumo_A[] =
{
    { L"Ryoko A", 0x101440, 0x101460, indexWHPSprites_Ryoko, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_RyokoIzumo_B[] =
{
    { L"Ryoko B", 0x101460, 0x101480, indexWHPSprites_Ryoko, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_CaptainKidd_A[] =
{
    { L"Captain Kidd A", 0x101480, 0x1014a0, indexWHPSprites_CaptainKidd, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_CaptainKidd_B[] =
{
    { L"Captain Kidd B", 0x1014a0, 0x1014c0, indexWHPSprites_CaptainKidd, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_Mudman_A[] =
{
    { L"Mudman A", 0x1014c0, 0x1014e0, indexWHPSprites_Mudman, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_Mudman_B[] =
{
    { L"Mudman B", 0x1014e0, 0x101500, indexWHPSprites_Mudman, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_EricktheViking_A[] =
{
    { L"Erick A", 0x101500, 0x101520, indexWHPSprites_Erick, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_EricktheViking_B[] =
{
    { L"Erick B", 0x101520, 0x101540, indexWHPSprites_Erick, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_JohnnyMaximum_A[] =
{
    { L"J. Max A", 0x101540, 0x101560, indexWHPSprites_JMax, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_JohnnyMaximum_B[] =
{
    { L"J. Max B", 0x101560, 0x101580, indexWHPSprites_JMax, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_NeoDio_Palettes[] =
{
    { L"Neo Dio", 0x101580, 0x1015a0, indexWHPSprites_NeoDio, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2_A_NeoGeegus_Palettes[] =
{
    { L"Neo Geegus", 0x1015a0, 0x1015c0, indexWH1Sprites_Geegus, 0x00 },
    { L"Hanzou, Fuuma, Ryoko, J. Max", 0x101d40, 0x101d60, indexWH1Sprites_Hanzou, 0x00 },
    { L"Dragon", 0x101d60, 0x101d80, indexWH1Sprites_Dragon, 0x00 },
    { L"Jeanne", 0x101d80, 0x101da0, indexWH1Sprites_Jeanne, 0x00 },
    { L"J. Carn", 0x101da0, 0x101dc0, indexWH1Sprites_JCarn, 0x00 },
    { L"Muscle Power", 0x101dc0, 0x101de0, indexWH1Sprites_MusclePower, 0x00 },
    { L"Brocken", 0x101de0, 0x101e00, indexWH1Sprites_Geegus, 0x01 },
    { L"Rasputin", 0x101e00, 0x101e20, indexWH1Sprites_Rasputin, 0x00 },
    { L"Shura", 0x101e20, 0x101e40, indexWHPSprites_Shura, 0x00 },
    { L"Captain Kidd and Mudman", 0x101e40, 0x101e60, indexWHPSprites_CaptainKidd, 0x00 },
    { L"Erick", 0x101e60, 0x101e80, indexWHPSprites_Erick, 0x00 },
    { L"???", 0x101e80, 0x101ea0 },
};

const sGame_PaletteDataset WorldHeroes2_A_Portraits_Palettes[] =
{
    { L"Fuuma A", 0x101800, 0x101840 },
    { L"Fuuma B", 0x1082c0, 0x108300 },
    { L"Hanzou A 1/2", 0x101840, 0x101860 },
    { L"Hanzou A 2/2", 0x101b40, 0x101b60 },
    { L"Hanzou B 1/2", 0x108420, 0x108440 },
    { L"Hanzou B 2/2", 0x108c00, 0x108c20 },
    { L"Jeanne A 1/2", 0x101860, 0x101880 },
    { L"Rasputin A 1/2", 0x101940, 0x101960 },
    { L"Neo Dio A 1/2", 0x101a80, 0x101aa0 },
    { L"Jeanne Rasputin and Neo Dio A 2/2", 0x101880, 0x1018a0 },
    { L"Jeanne B 1/2", 0x108460, 0x108480 },
    { L"Jeanne B 2/2", 0x108480, 0x1084a0 },
    { L"Rasputin B 1/2", 0x1084a0, 0x1084c0 },
    { L"Rasputin B 2/2", 0x1084c0, 0x1084e0 },
    { L"J. Carn A", 0x1018a0, 0x1018e0 },
    { L"J. Carn B", 0x1084e0, 0x108520 },
    { L"Geegus", 0x1018e0, 0x101900 },
    { L"Dragon A 1/2", 0x101920, 0x101940 },
    { L"Dragon A 2/2", 0x101b60, 0x101b80 },
    { L"Dragon B 1/2", 0x108320, 0x108340 },
    { L"Dragon B 2/2", 0x108ea0, 0x108ec0 },
    { L"J. Max A", 0x101960, 0x1019a0 },
    { L"J. Max B", 0x108340, 0x108380 },
    { L"Captain Kidd A", 0x1019a0, 0x1019e0 },
    { L"Captain Kidd B", 0x108380, 0x1083c0 },
    { L"Brocken A 1/2", 0x1019e0, 0x101a00 },
    { L"Brocken B 1/2", 0x108520, 0x108540 },
    { L"Mudman A 1/2", 0x101a20, 0x101a40 },
    { L"Mudman B 1/2", 0x108540, 0x108560 },
    { L"Brocken and Mudman A 2/2", 0x101a00, 0x101a20 },
    { L"Muscle Power A", 0x101a40, 0x101a80 },
    { L"Muscle Power B", 0x108560, 0x1085a0 },
    { L"Ryoko A and Erick 1/2", 0x101aa0, 0x101ac0 },
    { L"Ryoko A 2/2", 0x101ac0, 0x101ae0 },
    { L"Ryoko B 1/2", 0x108440, 0x108460 },
    { L"Ryoko B 2/2", 0x108400, 0x108420 },
    { L"Erick A 2/2", 0x101ae0, 0x101b00 },
    { L"Erick B 2/2", 0x1083e0, 0x108400 },
    { L"Shura A", 0x101b00, 0x101b40 },
    { L"Shura B 1/2", 0x108300, 0x108320 },
    { L"Shura B 2/2", 0x108be0, 0x108c00 },
};

const sGame_PaletteDataset WorldHeroes2_A_BonusPalettes_HUD[] =
{
    { L"Erick Portrait Extra, Text 1/2", 0x101000, 0x101020 },
    { L"Text 2/2", 0x1011a0, 0x1011c0 },
    { L"Lifebar", 0x101020, 0x101040 },
};

const sGame_PaletteDataset WorldHeroes2_A_BonusPalettes_CharacterSelect[] =
{
    { L"Country Flags", 0x1011e0, 0x101200 },
    { L"Mode Select Coin", 0x103e40, 0x103e60 },
};

const sDescTreeNode WorldHeroes2_A_HanzouHattori_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_HanzouHattori_A, ARRAYSIZE(WorldHeroes2_A_HanzouHattori_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_HanzouHattori_B, ARRAYSIZE(WorldHeroes2_A_HanzouHattori_B) },
};

const sDescTreeNode WorldHeroes2_A_FuumaKotaro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_FuumaKotaro_A, ARRAYSIZE(WorldHeroes2_A_FuumaKotaro_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_FuumaKotaro_B, ARRAYSIZE(WorldHeroes2_A_FuumaKotaro_B) },
};

const sDescTreeNode WorldHeroes2_A_KimDragon_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_KimDragon_A, ARRAYSIZE(WorldHeroes2_A_KimDragon_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_KimDragon_B, ARRAYSIZE(WorldHeroes2_A_KimDragon_B) },
};

const sDescTreeNode WorldHeroes2_A_JeannedArc_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JeannedArc_A, ARRAYSIZE(WorldHeroes2_A_JeannedArc_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JeannedArc_B, ARRAYSIZE(WorldHeroes2_A_JeannedArc_B) },
};

const sDescTreeNode WorldHeroes2_A_JuliusCarn_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JuliusCarn_A, ARRAYSIZE(WorldHeroes2_A_JuliusCarn_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JuliusCarn_B, ARRAYSIZE(WorldHeroes2_A_JuliusCarn_B) },
};

const sDescTreeNode WorldHeroes2_A_MusclePower_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_MusclePower_A, ARRAYSIZE(WorldHeroes2_A_MusclePower_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_MusclePower_B, ARRAYSIZE(WorldHeroes2_A_MusclePower_B) },
};

const sDescTreeNode WorldHeroes2_A_Brocken_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Brocken_A, ARRAYSIZE(WorldHeroes2_A_Brocken_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Brocken_B, ARRAYSIZE(WorldHeroes2_A_Brocken_B) },
};

const sDescTreeNode WorldHeroes2_A_Rasputin_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Rasputin_A, ARRAYSIZE(WorldHeroes2_A_Rasputin_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Rasputin_B, ARRAYSIZE(WorldHeroes2_A_Rasputin_B) },
};

const sDescTreeNode WorldHeroes2_A_ShuraNaiKhanotmtom_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_ShuraNaiKhanotmtom_A, ARRAYSIZE(WorldHeroes2_A_ShuraNaiKhanotmtom_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_ShuraNaiKhanotmtom_B, ARRAYSIZE(WorldHeroes2_A_ShuraNaiKhanotmtom_B) },
};

const sDescTreeNode WorldHeroes2_A_RyokoIzumo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_RyokoIzumo_A, ARRAYSIZE(WorldHeroes2_A_RyokoIzumo_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_RyokoIzumo_B, ARRAYSIZE(WorldHeroes2_A_RyokoIzumo_B) },
};

const sDescTreeNode WorldHeroes2_A_CaptainKidd_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_CaptainKidd_A, ARRAYSIZE(WorldHeroes2_A_CaptainKidd_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_CaptainKidd_B, ARRAYSIZE(WorldHeroes2_A_CaptainKidd_B) },
};

const sDescTreeNode WorldHeroes2_A_Mudman_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Mudman_A, ARRAYSIZE(WorldHeroes2_A_Mudman_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Mudman_B, ARRAYSIZE(WorldHeroes2_A_Mudman_B) },
};

const sDescTreeNode WorldHeroes2_A_EricktheViking_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_EricktheViking_A, ARRAYSIZE(WorldHeroes2_A_EricktheViking_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_EricktheViking_B, ARRAYSIZE(WorldHeroes2_A_EricktheViking_B) },
};

const sDescTreeNode WorldHeroes2_A_JohnnyMaximum_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JohnnyMaximum_A, ARRAYSIZE(WorldHeroes2_A_JohnnyMaximum_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JohnnyMaximum_B, ARRAYSIZE(WorldHeroes2_A_JohnnyMaximum_B) },
};

const sDescTreeNode WorldHeroes2_A_NeoDio_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_NeoDio_Palettes, ARRAYSIZE(WorldHeroes2_A_NeoDio_Palettes) },
};

const sDescTreeNode WorldHeroes2_A_NeoGeegus_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_NeoGeegus_Palettes, ARRAYSIZE(WorldHeroes2_A_NeoGeegus_Palettes) },
};

const sDescTreeNode WorldHeroes2_A_Portraits_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Portraits_Palettes, ARRAYSIZE(WorldHeroes2_A_Portraits_Palettes) },
};

const sDescTreeNode WorldHeroes2_A_BonusPalettes_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_BonusPalettes_HUD, ARRAYSIZE(WorldHeroes2_A_BonusPalettes_HUD) },
    { L"Character Select", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_BonusPalettes_CharacterSelect, ARRAYSIZE(WorldHeroes2_A_BonusPalettes_CharacterSelect) },
};

const sDescTreeNode WorldHeroes2_A_UNITS[] =
{
    { L"Hanzou Hattori", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_HanzouHattori_COLLECTION, ARRAYSIZE(WorldHeroes2_A_HanzouHattori_COLLECTION) },
    { L"Fuuma Kotaro", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_FuumaKotaro_COLLECTION, ARRAYSIZE(WorldHeroes2_A_FuumaKotaro_COLLECTION) },
    { L"Kim Dragon", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_KimDragon_COLLECTION, ARRAYSIZE(WorldHeroes2_A_KimDragon_COLLECTION) },
    { L"Jeanne d'Arc", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JeannedArc_COLLECTION, ARRAYSIZE(WorldHeroes2_A_JeannedArc_COLLECTION) },
    { L"Julius Carn", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JuliusCarn_COLLECTION, ARRAYSIZE(WorldHeroes2_A_JuliusCarn_COLLECTION) },
    { L"Muscle Power", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_MusclePower_COLLECTION, ARRAYSIZE(WorldHeroes2_A_MusclePower_COLLECTION) },
    { L"Brocken", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Brocken_COLLECTION, ARRAYSIZE(WorldHeroes2_A_Brocken_COLLECTION) },
    { L"Rasputin", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Rasputin_COLLECTION, ARRAYSIZE(WorldHeroes2_A_Rasputin_COLLECTION) },
    { L"Shura Nai Khanotmtom", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_ShuraNaiKhanotmtom_COLLECTION, ARRAYSIZE(WorldHeroes2_A_ShuraNaiKhanotmtom_COLLECTION) },
    { L"Ryoko Izumo", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_RyokoIzumo_COLLECTION, ARRAYSIZE(WorldHeroes2_A_RyokoIzumo_COLLECTION) },
    { L"Captain Kidd", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_CaptainKidd_COLLECTION, ARRAYSIZE(WorldHeroes2_A_CaptainKidd_COLLECTION) },
    { L"Mudman", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Mudman_COLLECTION, ARRAYSIZE(WorldHeroes2_A_Mudman_COLLECTION) },
    { L"Erick the Viking", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_EricktheViking_COLLECTION, ARRAYSIZE(WorldHeroes2_A_EricktheViking_COLLECTION) },
    { L"Johnny Maximum", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_JohnnyMaximum_COLLECTION, ARRAYSIZE(WorldHeroes2_A_JohnnyMaximum_COLLECTION) },
    { L"Neo Dio", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_NeoDio_COLLECTION, ARRAYSIZE(WorldHeroes2_A_NeoDio_COLLECTION) },
    { L"Neo Geegus", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_NeoGeegus_COLLECTION, ARRAYSIZE(WorldHeroes2_A_NeoGeegus_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_Portraits_COLLECTION, ARRAYSIZE(WorldHeroes2_A_Portraits_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes2_A_BonusPalettes_COLLECTION, ARRAYSIZE(WorldHeroes2_A_BonusPalettes_COLLECTION) },
};

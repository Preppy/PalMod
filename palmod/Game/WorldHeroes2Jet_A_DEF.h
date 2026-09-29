#pragma once

const std::vector<uint16_t> WORLDHEROES2JET_A_IMGIDS_USED =
{
    indexWHPSprites_Brocken,                // 0xda

    indexWH2Sprites_Brocken,                // 0xfb
    indexWH2Sprites_CaptainKidd,            // 0xfc
    indexWH2Sprites_Dio,                    // 0xfd
    indexWH2Sprites_Dragon,                 // 0xfe
    indexWH2Sprites_Erick,                  // 0xff
    indexWH2Sprites_Fuuma,                  // 0x100
    indexWH2Sprites_Hanzou,                 // 0x101
    indexWH2Sprites_Jack,                   // 0x102
    indexWH2Sprites_JCarn,                  // 0x103
    indexWH2Sprites_Jeanne,                 // 0x104
    indexWH2Sprites_JMax,                   // 0x105
    indexWH2Sprites_Mudman,                 // 0x106
    indexWH2Sprites_MusclePower,            // 0x107
    indexWH2Sprites_NeoGeegus,              // 0x108
    indexWH2Sprites_Rasputin,               // 0x109
    indexWH2Sprites_Ryofu,                  // 0x10a
    indexWH2Sprites_Ryoko,                  // 0x10b
    indexWH2Sprites_Shura,                  // 0x10c
    indexWH2Sprites_Zeus,                   // 0x10d

    indexWH2Sprites_Portraits,              // 0x10e
    indexWH2Sprites_Stages,                 // 0x10f
    indexWH2Sprites_Bonus,                  // 0x110
};

const sGame_PaletteDataset WorldHeroes2Jet_A_HanzouHattori_A[] =
{
    { L"Hanzou A", 0x101200, 0x101220, indexWH2Sprites_Hanzou, 0x00 },
    { L"Tournament Entry Portrait A", 0x108040, 0x108060, indexWH2Sprites_Hanzou, 0x10 },
    { L"VS Portrait A 1/2", 0x108480, 0x1084a0, indexWH2Sprites_Hanzou, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x1084c0, 0x1084e0, indexWH2Sprites_Hanzou, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_HanzouHattori_B[] =
{
    { L"Hanzou B", 0x101220, 0x101240, indexWH2Sprites_Hanzou, 0x00 },
    { L"Tournament Entry Portrait B", 0x108060, 0x108080, indexWH2Sprites_Hanzou, 0x10 },
    { L"VS Portrait B 1/2", 0x1084a0, 0x1084c0, indexWH2Sprites_Hanzou, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x1084e0, 0x108500, indexWH2Sprites_Hanzou, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_FuumaKotaro_A[] =
{
    { L"Fuuma A", 0x101240, 0x101260, indexWH2Sprites_Fuuma, 0x00 },
    { L"Tournament Entry Portrait A", 0x108180, 0x1081a0, indexWH2Sprites_Fuuma, 0x10 },
    { L"VS Portrait A 1/2", 0x108700, 0x108720, indexWH2Sprites_Fuuma, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108740, 0x108760, indexWH2Sprites_Fuuma, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_FuumaKotaro_B[] =
{
    { L"Fuuma B", 0x101260, 0x101280, indexWH2Sprites_Fuuma, 0x00 },
    { L"Tournament Entry Portrait B", 0x1081a0, 0x1081c0, indexWH2Sprites_Fuuma, 0x10 },
    { L"VS Portrait B 1/2", 0x108720, 0x108740, indexWH2Sprites_Fuuma, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108760, 0x108780, indexWH2Sprites_Fuuma, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_KimDragon_A[] =
{
    { L"Dragon A", 0x101280, 0x1012a0, indexWH2Sprites_Dragon, 0x00 },
    { L"Tournament Entry Portrait A", 0x108000, 0x108020, indexWH2Sprites_Dragon, 0x10 },
    { L"VS Portrait A 1/2", 0x108400, 0x108420, indexWH2Sprites_Dragon, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108440, 0x108460, indexWH2Sprites_Dragon, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_KimDragon_B[] =
{
    { L"Dragon B", 0x1012a0, 0x1012c0, indexWH2Sprites_Dragon, 0x00 },
    { L"Tournament Entry Portrait B", 0x108020, 0x108040, indexWH2Sprites_Dragon, 0x10 },
    { L"VS Portrait B 1/2", 0x108420, 0x108440, indexWH2Sprites_Dragon, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108460, 0x108480, indexWH2Sprites_Dragon, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JeannedArc_A[] =
{
    { L"Jeanne A", 0x1012c0, 0x1012e0, indexWH2Sprites_Jeanne, 0x00 },
    { L"Tournament Entry Portrait A", 0x108100, 0x108120, indexWH2Sprites_Jeanne, 0x10 },
    { L"Tournament/Select Portrait A", 0x108e00, 0x108e20, indexWH2Sprites_Jeanne, 0x11 },
    { L"VS Portrait A 1/2", 0x108600, 0x108620, indexWH2Sprites_Jeanne, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108640, 0x108660, indexWH2Sprites_Jeanne, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JeannedArc_B[] =
{
    { L"Jeanne B", 0x1012e0, 0x101300, indexWH2Sprites_Jeanne, 0x00 },
    { L"Tournament Entry Portrait B", 0x108120, 0x108140, indexWH2Sprites_Jeanne, 0x10 },
    { L"Tournament/Select Portrait B", 0x108e20, 0x108e40, indexWH2Sprites_Jeanne, 0x11 },
    { L"VS Portrait B 1/2", 0x108620, 0x108640, indexWH2Sprites_Jeanne, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108660, 0x108680, indexWH2Sprites_Jeanne, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JuliusCarn_A[] =
{
    { L"J. Carn A", 0x101300, 0x101320, indexWH2Sprites_JCarn, 0x00 },
    { L"Tournament Entry Portrait A", 0x1080c0, 0x1080e0, indexWH2Sprites_JCarn, 0x10 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JuliusCarn_B[] =
{
    { L"J. Carn B", 0x101320, 0x101340, indexWH2Sprites_JCarn, 0x00 },
    { L"Tournament Entry Portrait B", 0x1080e0, 0x108100, indexWH2Sprites_JCarn, 0x10 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_MusclePower_A[] =
{
    { L"Muscle Power A", 0x101340, 0x101360, indexWH2Sprites_MusclePower, 0x00 },
    { L"Tournament Entry Portrait A", 0x108080, 0x1080a0, indexWH2Sprites_MusclePower, 0x10 },
    { L"VS Portrait A 1/2", 0x108500, 0x108520, indexWH2Sprites_MusclePower, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108540, 0x108560, indexWH2Sprites_MusclePower, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_MusclePower_B[] =
{
    { L"Muscle Power B", 0x101360, 0x101380, indexWH2Sprites_MusclePower, 0x00 },
    { L"Tournament Entry Portrait B", 0x1080a0, 0x1080c0, indexWH2Sprites_MusclePower, 0x10 },
    { L"VS Portrait B 1/2", 0x108520, 0x108540, indexWH2Sprites_MusclePower, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108560, 0x108580, indexWH2Sprites_MusclePower, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Brocken_A[] =
{
    { L"Brocken A", 0x101380, 0x1013a0, indexWH2Sprites_Brocken, 0x00, &pairNext },
    { L"Attack Effects A", 0x101600, 0x101620, indexWH2Sprites_Brocken, 0x01 },
    { L"Rocket Punch A", 0x101f40, 0x101f60, indexWHPSprites_Brocken, 0x01 },
    { L"Tournament Entry Portrait A", 0x1081c0, 0x1081e0, indexWH2Sprites_Brocken, 0x10 },
    { L"Tournament/Select Portrait A", 0x108e40, 0x108e60, indexWH2Sprites_Brocken, 0x11 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Brocken_B[] =
{
    { L"Brocken B", 0x1013a0, 0x1013c0, indexWH2Sprites_Brocken, 0x00, &pairNext },
    { L"Attack Effects B", 0x101620, 0x101640, indexWH2Sprites_Brocken, 0x01 },
    { L"Rocket Punch B", 0x101f60, 0x101f80, indexWHPSprites_Brocken, 0x01 },
    { L"Tournament Entry Portrait B", 0x1081e0, 0x108200, indexWH2Sprites_Brocken, 0x10 },
    { L"Tournament/Select Portrait B", 0x108e60, 0x108e80, indexWH2Sprites_Brocken, 0x11 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Rasputin_A[] =
{
    { L"Rasputin A", 0x1013c0, 0x1013e0, indexWH2Sprites_Rasputin, 0x00 },
    { L"Tournament Entry Portrait A", 0x108140, 0x108160, indexWH2Sprites_Rasputin, 0x10 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Rasputin_B[] =
{
    { L"Rasputin B", 0x1013e0, 0x101400, indexWH2Sprites_Rasputin, 0x00 },
    { L"Tournament Entry Portrait B", 0x108160, 0x108180, indexWH2Sprites_Rasputin, 0x10 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_ShuraNaiKhanomtom_A[] =
{
    { L"Shura A", 0x101400, 0x101420, indexWH2Sprites_Shura, 0x00 },
    { L"Tournament Entry Portrait A", 0x108200, 0x108220, indexWH2Sprites_Shura, 0x10 },
    { L"VS Portrait A 1/2", 0x108800, 0x108820, indexWH2Sprites_Shura, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108840, 0x108860, indexWH2Sprites_Shura, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_ShuraNaiKhanomtom_B[] =
{
    { L"Shura B", 0x101420, 0x101440, indexWH2Sprites_Shura, 0x00 },
    { L"Tournament Entry Portrait B", 0x108220, 0x108240, indexWH2Sprites_Shura, 0x10 },
    { L"VS Portrait B 1/2", 0x108820, 0x108840, indexWH2Sprites_Shura, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108860, 0x108880, indexWH2Sprites_Shura, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_RyokoIzumo_A[] =
{
    { L"Ryoko A", 0x101440, 0x101460, indexWH2Sprites_Ryoko, 0x00 },
    { L"Tournament Entry Portrait A", 0x108240, 0x108260, indexWH2Sprites_Ryoko, 0x10 },
    { L"VS Portrait A 1/2", 0x108880, 0x1088a0, indexWH2Sprites_Ryoko, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x1088c0, 0x1088e0, indexWH2Sprites_Ryoko, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_RyokoIzumo_B[] =
{
    { L"Ryoko B", 0x101460, 0x101480, indexWH2Sprites_Ryoko, 0x00 },
    { L"Tournament Entry Portrait B", 0x108260, 0x108280, indexWH2Sprites_Ryoko, 0x10 },
    { L"VS Portrait B 1/2", 0x1088a0, 0x1088c0, indexWH2Sprites_Ryoko, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x1088e0, 0x108900, indexWH2Sprites_Ryoko, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_CaptainKidd_A[] =
{
    { L"Captain Kidd A", 0x101480, 0x1014a0, indexWH2Sprites_CaptainKidd, 0x00 },
    { L"Tournament Entry Portrait A", 0x108280, 0x1082a0, indexWH2Sprites_CaptainKidd, 0x10 },
    { L"Tournament/Select Portrait A", 0x101a60, 0x101a80, indexWH2Sprites_CaptainKidd, 0x11 },
    { L"VS Portrait A 1/2", 0x108900, 0x108920, indexWH2Sprites_CaptainKidd, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108940, 0x108960, indexWH2Sprites_CaptainKidd, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_CaptainKidd_B[] =
{
    { L"Captain Kidd B", 0x1014a0, 0x1014c0, indexWH2Sprites_CaptainKidd, 0x00 },
    { L"Tournament Entry Portrait B", 0x1082a0, 0x1082c0, indexWH2Sprites_CaptainKidd, 0x10 },
    { L"Tournament/Select Portrait B", 0x101a80, 0x101aa0, indexWH2Sprites_CaptainKidd, 0x11 },
    { L"VS Portrait B 1/2", 0x108920, 0x108940, indexWH2Sprites_CaptainKidd, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108960, 0x108980, indexWH2Sprites_CaptainKidd, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Mudman_A[] =
{
    { L"Mudman A", 0x1014c0, 0x1014e0, indexWH2Sprites_Mudman, 0x00 },
    { L"Tournament Entry Portrait A", 0x1082c0, 0x1082e0, indexWH2Sprites_Mudman, 0x10 },
    { L"Tournament/Select Portrait A", 0x108e80, 0x108ea0, indexWH2Sprites_Mudman, 0x11 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Mudman_B[] =
{
    { L"Mudman B", 0x1014e0, 0x101500, indexWH2Sprites_Mudman, 0x00 },
    { L"Tournament Entry Portrait B", 0x1082e0, 0x108300, indexWH2Sprites_Mudman, 0x10 },
    { L"Tournament/Select Portrait B", 0x108ea0, 0x108ec0, indexWH2Sprites_Mudman, 0x11 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_EricktheViking_A[] =
{
    { L"Erick A", 0x101500, 0x101520, indexWH2Sprites_Erick, 0x00 },
    { L"Tournament Entry Portrait A", 0x108300, 0x108320, indexWH2Sprites_Erick, 0x10 },
    { L"VS Portrait A 1/2", 0x108a00, 0x108a20, indexWH2Sprites_Erick, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108a40, 0x108a60, indexWH2Sprites_Erick, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_EricktheViking_B[] =
{
    { L"Erick B", 0x101520, 0x101540, indexWH2Sprites_Erick, 0x00 },
    { L"Tournament Entry Portrait B", 0x108320, 0x108340, indexWH2Sprites_Erick, 0x10 },
    { L"VS Portrait B 1/2", 0x108a20, 0x108a40, indexWH2Sprites_Erick, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108a60, 0x108a80, indexWH2Sprites_Erick, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JohnnyMaximum_A[] =
{
    { L"J. Max A", 0x101540, 0x101560, indexWH2Sprites_JMax, 0x00 },
    { L"Tournament Entry Portrait A", 0x108340, 0x108360, indexWH2Sprites_JMax, 0x10 },
    { L"Tournament/Select Portrait A", 0x108ec0, 0x108ee0, indexWH2Sprites_JMax, 0x11 },
    { L"VS Portrait A 1/2", 0x108a80, 0x108aa0, indexWH2Sprites_JMax, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108ac0, 0x108ae0, indexWH2Sprites_JMax, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JohnnyMaximum_B[] =
{
    { L"J. Max B", 0x101560, 0x101580, indexWH2Sprites_JMax, 0x00 },
    { L"Tournament Entry Portrait B", 0x108360, 0x108380, indexWH2Sprites_JMax, 0x10 },
    { L"Tournament/Select Portrait B", 0x108ee0, 0x108f00, indexWH2Sprites_JMax, 0x11 },
    { L"VS Portrait B 1/2", 0x108aa0, 0x108ac0, indexWH2Sprites_JMax, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108ae0, 0x108b00, indexWH2Sprites_JMax, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JacktheRipper_A[] =
{
    { L"Jack A", 0x101d40, 0x101d60, indexWH2Sprites_Jack, 0x00 },
    { L"Tournament Entry Portrait A", 0x108380, 0x1083a0, indexWH2Sprites_Jack, 0x10 },
    { L"VS Portrait A 1/2", 0x108b00, 0x108b20, indexWH2Sprites_Jack, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108b40, 0x108b60, indexWH2Sprites_Jack, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_JacktheRipper_B[] =
{
    { L"Jack B", 0x101d60, 0x101d80, indexWH2Sprites_Jack, 0x00 },
    { L"Tournament Entry Portrait B", 0x1083a0, 0x1083c0, indexWH2Sprites_Jack, 0x10 },
    { L"VS Portrait B 1/2", 0x108b20, 0x108b40, indexWH2Sprites_Jack, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108b60, 0x108b80, indexWH2Sprites_Jack, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Ryofu_A[] =
{
    { L"Ryofu A", 0x101d80, 0x101da0, indexWH2Sprites_Ryofu, 0x00 },
    { L"Tournament Entry Portrait A", 0x1083c0, 0x1083e0, indexWH2Sprites_Ryofu, 0x10 },
    { L"VS Portrait A 1/2", 0x108b80, 0x108ba0, indexWH2Sprites_Ryofu, 0x20, &pairNext },
    { L"VS Portrait A 2/2", 0x108bc0, 0x108be0, indexWH2Sprites_Ryofu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Ryofu_B[] =
{
    { L"Ryofu B", 0x101da0, 0x101dc0, indexWH2Sprites_Ryofu, 0x00 },
    { L"Tournament Entry Portrait B", 0x1083e0, 0x108400, indexWH2Sprites_Ryofu, 0x10 },
    { L"VS Portrait B 1/2", 0x108ba0, 0x108bc0, indexWH2Sprites_Ryofu, 0x20, &pairNext },
    { L"VS Portrait B 2/2", 0x108be0, 0x108c00, indexWH2Sprites_Ryofu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Zeus_A[] =
{
    { L"Zeus A", 0x101dc0, 0x101de0, indexWH2Sprites_Zeus, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Zeus_B[] =
{
    { L"Zeus B", 0x101de0, 0x101e00, indexWH2Sprites_Zeus, 0x00 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_Zeus_Extras[] =
{
    { L"VS Portrait", 0x108fe0, 0x109000, indexWH2Sprites_Zeus, 0x20 },
};

const sGame_PaletteDataset WorldHeroes2Jet_A_SharedPortraits_Palettes[] =
{
    { L"J. Carn VS Portrait A 1/2", 0x108580, 0x1085a0, indexWH2Sprites_Portraits, 0x21, &pairNext3Palettes },
    { L"J. Carn VS Portrait A 2/2", 0x1085c0, 0x1085e0, indexWH2Sprites_Portraits, 0x22, &pairPrevious },
    { L"Rasputin VS Portrait A 1/2", 0x108680, 0x1086a0, indexWH2Sprites_Portraits, 0x25, &pairNext },
    { L"Rasputin VS Portrait A 2/2", 0x1086c0, 0x1086e0, indexWH2Sprites_Portraits, 0x26, &pairPrevious },

    { L"Brocken VS Portrait A 1/2", 0x108780, 0x1087a0, indexWH2Sprites_Portraits, 0x1f, &pairNext3Palettes },
    { L"Brocken VS Portrait A 2/2", 0x1087c0, 0x1087e0, indexWH2Sprites_Portraits, 0x20, &pairPrevious },
    { L"Mudman VS Portrait A 1/2", 0x108980, 0x1089a0, indexWH2Sprites_Portraits, 0x23, &pairNext },
    { L"Mudman VS Portrait A 2/2", 0x1089c0, 0x1089e0, indexWH2Sprites_Portraits, 0x24, &pairPrevious },

    { L"J. Carn VS Portrait B 1/2", 0x1085a0, 0x1085c0, indexWH2Sprites_Portraits, 0x21, &pairNext3Palettes },
    { L"J. Carn VS Portrait B 2/2", 0x1085e0, 0x108600, indexWH2Sprites_Portraits, 0x22, &pairPrevious },
    { L"Rasputin VS Portrait B 1/2", 0x1086a0, 0x1086c0, indexWH2Sprites_Portraits, 0x25, &pairNext },
    { L"Rasputin VS Portrait B 2/2", 0x1086e0, 0x108700, indexWH2Sprites_Portraits, 0x26, &pairPrevious },

    { L"Brocken VS Portrait B 1/2", 0x1087a0, 0x1087c0, indexWH2Sprites_Portraits, 0x1f, &pairNext3Palettes },
    { L"Brocken VS Portrait B 2/2", 0x1087e0, 0x108800, indexWH2Sprites_Portraits, 0x20, &pairPrevious },
    { L"Mudman VS Portrait B 1/2", 0x1089a0, 0x1089c0, indexWH2Sprites_Portraits, 0x23, &pairNext },
    { L"Mudman VS Portrait B 2/2", 0x1089e0, 0x108a00, indexWH2Sprites_Portraits, 0x24, &pairPrevious },
};

const sDescTreeNode WorldHeroes2Jet_A_HanzouHattori_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_HanzouHattori_A, ARRAYSIZE(WorldHeroes2Jet_A_HanzouHattori_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_HanzouHattori_B, ARRAYSIZE(WorldHeroes2Jet_A_HanzouHattori_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_FuumaKotaro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_FuumaKotaro_A, ARRAYSIZE(WorldHeroes2Jet_A_FuumaKotaro_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_FuumaKotaro_B, ARRAYSIZE(WorldHeroes2Jet_A_FuumaKotaro_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_KimDragon_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_KimDragon_A, ARRAYSIZE(WorldHeroes2Jet_A_KimDragon_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_KimDragon_B, ARRAYSIZE(WorldHeroes2Jet_A_KimDragon_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_JeannedArc_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JeannedArc_A, ARRAYSIZE(WorldHeroes2Jet_A_JeannedArc_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JeannedArc_B, ARRAYSIZE(WorldHeroes2Jet_A_JeannedArc_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_JuliusCarn_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JuliusCarn_A, ARRAYSIZE(WorldHeroes2Jet_A_JuliusCarn_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JuliusCarn_B, ARRAYSIZE(WorldHeroes2Jet_A_JuliusCarn_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_MusclePower_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_MusclePower_A, ARRAYSIZE(WorldHeroes2Jet_A_MusclePower_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_MusclePower_B, ARRAYSIZE(WorldHeroes2Jet_A_MusclePower_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_Brocken_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Brocken_A, ARRAYSIZE(WorldHeroes2Jet_A_Brocken_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Brocken_B, ARRAYSIZE(WorldHeroes2Jet_A_Brocken_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_Rasputin_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Rasputin_A, ARRAYSIZE(WorldHeroes2Jet_A_Rasputin_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Rasputin_B, ARRAYSIZE(WorldHeroes2Jet_A_Rasputin_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_ShuraNaiKhanomtom_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_ShuraNaiKhanomtom_A, ARRAYSIZE(WorldHeroes2Jet_A_ShuraNaiKhanomtom_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_ShuraNaiKhanomtom_B, ARRAYSIZE(WorldHeroes2Jet_A_ShuraNaiKhanomtom_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_RyokoIzumo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_RyokoIzumo_A, ARRAYSIZE(WorldHeroes2Jet_A_RyokoIzumo_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_RyokoIzumo_B, ARRAYSIZE(WorldHeroes2Jet_A_RyokoIzumo_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_CaptainKidd_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_CaptainKidd_A, ARRAYSIZE(WorldHeroes2Jet_A_CaptainKidd_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_CaptainKidd_B, ARRAYSIZE(WorldHeroes2Jet_A_CaptainKidd_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_Mudman_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Mudman_A, ARRAYSIZE(WorldHeroes2Jet_A_Mudman_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Mudman_B, ARRAYSIZE(WorldHeroes2Jet_A_Mudman_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_EricktheViking_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_EricktheViking_A, ARRAYSIZE(WorldHeroes2Jet_A_EricktheViking_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_EricktheViking_B, ARRAYSIZE(WorldHeroes2Jet_A_EricktheViking_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_JohnnyMaximum_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JohnnyMaximum_A, ARRAYSIZE(WorldHeroes2Jet_A_JohnnyMaximum_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JohnnyMaximum_B, ARRAYSIZE(WorldHeroes2Jet_A_JohnnyMaximum_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_JacktheRipper_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JacktheRipper_A, ARRAYSIZE(WorldHeroes2Jet_A_JacktheRipper_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JacktheRipper_B, ARRAYSIZE(WorldHeroes2Jet_A_JacktheRipper_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_Ryofu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Ryofu_A, ARRAYSIZE(WorldHeroes2Jet_A_Ryofu_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Ryofu_B, ARRAYSIZE(WorldHeroes2Jet_A_Ryofu_B) },
};

const sDescTreeNode WorldHeroes2Jet_A_Zeus_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Zeus_A, ARRAYSIZE(WorldHeroes2Jet_A_Zeus_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Zeus_B, ARRAYSIZE(WorldHeroes2Jet_A_Zeus_B) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Zeus_Extras, ARRAYSIZE(WorldHeroes2Jet_A_Zeus_Extras) },
};

const sDescTreeNode WorldHeroes2Jet_A_SharedPortraits_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_SharedPortraits_Palettes, ARRAYSIZE(WorldHeroes2Jet_A_SharedPortraits_Palettes) },
};

const sDescTreeNode WorldHeroes2Jet_A_UNITS[] =
{
    { L"Hanzou Hattori", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_HanzouHattori_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_HanzouHattori_COLLECTION) },
    { L"Fuuma Kotaro", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_FuumaKotaro_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_FuumaKotaro_COLLECTION) },
    { L"Kim Dragon", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_KimDragon_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_KimDragon_COLLECTION) },
    { L"Jeanne d'Arc", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JeannedArc_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_JeannedArc_COLLECTION) },
    { L"Julius Carn", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JuliusCarn_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_JuliusCarn_COLLECTION) },
    { L"Muscle Power", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_MusclePower_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_MusclePower_COLLECTION) },
    { L"Brocken", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Brocken_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_Brocken_COLLECTION) },
    { L"Rasputin", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Rasputin_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_Rasputin_COLLECTION) },
    { L"Shura Nai Khanomtom", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_ShuraNaiKhanomtom_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_ShuraNaiKhanomtom_COLLECTION) },
    { L"Ryoko Izumo", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_RyokoIzumo_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_RyokoIzumo_COLLECTION) },
    { L"Captain Kidd", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_CaptainKidd_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_CaptainKidd_COLLECTION) },
    { L"Mudman", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Mudman_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_Mudman_COLLECTION) },
    { L"Erick the Viking", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_EricktheViking_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_EricktheViking_COLLECTION) },
    { L"Johnny Maximum", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JohnnyMaximum_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_JohnnyMaximum_COLLECTION) },
    { L"Jack the Ripper", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_JacktheRipper_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_JacktheRipper_COLLECTION) },
    { L"Ryofu", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Ryofu_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_Ryofu_COLLECTION) },
    { L"Zeus", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_Zeus_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_Zeus_COLLECTION) },
    { L"Shared Portraits", DESC_NODETYPE_TREE, (void*)WorldHeroes2Jet_A_SharedPortraits_COLLECTION, ARRAYSIZE(WorldHeroes2Jet_A_SharedPortraits_COLLECTION) },
};

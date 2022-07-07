#pragma once

const std::vector<uint16_t> SAMSHO2_A_IMGIDS_USED =
{
    indexSamSho2Sprites_ChamCham,   // 0x4E
    indexSamSho2Sprites_Charlotte,  // 0x4F
    indexSamSho2Sprites_Earthquake, // 0x50
    indexSamSho2Sprites_Galford,    // 0x51
    indexSamSho2Sprites_Genan,      // 0x52
    indexSamSho2Sprites_Genjuro,    // 0x53
    indexSamSho2Sprites_Haohmaru,   // 0x54
    indexSamSho2Sprites_Hanzo,      // 0x55
    indexSamSho2Sprites_Jubei,      // 0x56
    indexSamSho2Sprites_Kuroko,     // 0x57
    indexSamSho2Sprites_Kyoshiro,   // 0x58
    indexSamSho2Sprites_Mizuki,     // 0x59
    indexSamSho2Sprites_Nakoruru,   // 0x5A
    indexSamSho2Sprites_Nicotine,   // 0x5B
    indexSamSho2Sprites_Sieger,     // 0x5C
    indexSamSho2Sprites_Ukyo,       // 0x5D
    indexSamSho2Sprites_WanFu,      // 0x5E
    indexSamSho2Sprites_Bonus,      // 0x5F
};

const sGame_PaletteDataset SAMSHO2_A_HAOHMARU_P[] =
{
    { L"Haohmaru P", 0x14a00, 0x14a20, indexSamSho2Sprites_Haohmaru, 0x00, &pairNext3 },
    { L"Haohmaru P Rage 1", 0x14a20, 0x14a40, indexSamSho2Sprites_Haohmaru, 0x00, &pairNext2 },
    { L"Haohmaru P Rage 2", 0x14a40, 0x14a60, indexSamSho2Sprites_Haohmaru, 0x00, &pairNext2 },
    { L"Haohmaru P Weapon 1", 0x14a60, 0x14a80, indexSamSho2Sprites_Haohmaru, 0x01 },
    { L"Haohmaru P Weapon 2", 0x14a80, 0x14aa0, indexSamSho2Sprites_Haohmaru, 0x01 },
    { L"Haohmaru P Burned", 0x14aa0, 0x14ac0, indexSamSho2Sprites_Haohmaru, 0x00 },
    { L"Haohmaru P Zapped", 0x14ac0, 0x14ae0, indexSamSho2Sprites_Haohmaru, 0x00 },
    { L"Haohmaru P Poisoned", 0x14ae0, 0x14b00, indexSamSho2Sprites_Haohmaru, 0x00 },
    { L"Haohmaru P Portrait/Doll", 0x16800, 0x16840 },
};

const sGame_PaletteDataset SAMSHO2_A_HAOHMARU_K[] =
{
    { L"Haohmaru K", 0x14b00, 0x14b20, indexSamSho2Sprites_Haohmaru, 0x00, &pairNext3 },
    { L"Haohmaru K Rage 1", 0x14b20, 0x14b40, indexSamSho2Sprites_Haohmaru, 0x00, &pairNext2 },
    { L"Haohmaru K Rage 2", 0x14b40, 0x14b60, indexSamSho2Sprites_Haohmaru, 0x00, &pairNext2 },
    { L"Haohmaru K Weapon 1", 0x14b60, 0x14b80, indexSamSho2Sprites_Haohmaru, 0x01 },
    { L"Haohmaru K Weapon 2", 0x14b80, 0x14ba0, indexSamSho2Sprites_Haohmaru, 0x01 },
    { L"Haohmaru K Burned", 0x14ba0, 0x14bc0, indexSamSho2Sprites_Haohmaru, 0x00 },
    { L"Haohmaru K Zapped", 0x14bc0, 0x14be0, indexSamSho2Sprites_Haohmaru, 0x00 },
    { L"Haohmaru K Poisoned", 0x14be0, 0x14c00, indexSamSho2Sprites_Haohmaru, 0x00 },
    { L"Haohmaru K Portrait/Doll", 0x16840, 0x16880 },
};

const sGame_PaletteDataset SAMSHO2_A_HAOHMARU_Shared[] =
{
    { L"Haohmaru Sake", 0x16740, 0x16760 },
    { L"Haohmaru Trail", 0x166e0, 0x16700 },
};

const sGame_PaletteDataset SAMSHO2_A_NAKORURU_P[] =
{
    { L"Nakoruru P", 0x14400, 0x14420, indexSamSho2Sprites_Nakoruru, 0x00, &pairNext3AndNext8 },
    { L"Nakoruru P Rage 1", 0x14420, 0x14440, indexSamSho2Sprites_Nakoruru, 0x00, &pairNext3AndNext7 },
    { L"Nakoruru P Rage 2", 0x14440, 0x14460, indexSamSho2Sprites_Nakoruru, 0x00, &pairNext2AndNext6 },
    { L"Nakoruru P Weapon 1", 0x14460, 0x14480, indexSamSho2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru P Weapon 2", 0x14480, 0x144a0, indexSamSho2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru P Burned", 0x144a0, 0x144c0, indexSamSho2Sprites_Nakoruru, 0x00 },
    { L"Nakoruru P Zapped", 0x144c0, 0x144e0, indexSamSho2Sprites_Nakoruru, 0x00 },
    { L"Nakoruru P Poisoned", 0x144e0, 0x14500, indexSamSho2Sprites_Nakoruru, 0x00 },
    { L"Mamahaha P", 0x17320, 0x17340, indexSamSho2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru P Portrait/Doll", 0x16d00, 0x16d40 },
};

const sGame_PaletteDataset SAMSHO2_A_NAKORURU_K[] =
{
    { L"Nakoruru K", 0x14500, 0x14520, indexSamSho2Sprites_Nakoruru, 0x00, &pairNext3AndNext8 },
    { L"Nakoruru K Rage 1", 0x14520, 0x14540, indexSamSho2Sprites_Nakoruru, 0x00, &pairNext3AndNext7 },
    { L"Nakoruru K Rage 2", 0x14540, 0x14560, indexSamSho2Sprites_Nakoruru, 0x00, &pairNext2AndNext6 },
    { L"Nakoruru K Weapon 1", 0x14560, 0x14580, indexSamSho2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru K Weapon 2", 0x14580, 0x145a0, indexSamSho2Sprites_Nakoruru, 0x01 },
    { L"Nakoruru K Burned", 0x145a0, 0x145c0, indexSamSho2Sprites_Nakoruru, 0x00 },
    { L"Nakoruru K Zapped", 0x145c0, 0x145e0, indexSamSho2Sprites_Nakoruru, 0x00 },
    { L"Nakoruru K Poisoned", 0x145e0, 0x14600, indexSamSho2Sprites_Nakoruru, 0x00 },
    { L"Mamahaha K", 0x17340, 0x17360, indexSamSho2Sprites_Nakoruru, 0x02 },
    { L"Nakoruru K Portrait/Doll", 0x16d40, 0x16d80 },
};

const sGame_PaletteDataset SAMSHO2_A_NAKORURU_Shared[] =
{
    { L"Mamahaha K Portrait", 0x17360, 0x17380 },
    { L"Nakoruru Mutsube Palette", 0x167c0, 0x167e0 },
};

const sGame_PaletteDataset SAMSHO2_A_HANZO_P[] =
{
    { L"Hanzo P", 0x14e00, 0x14e20, indexSamSho2Sprites_Hanzo, 0x00, &pairNext3  },
    { L"Hanzo P Rage 1", 0x14e20, 0x14e40, indexSamSho2Sprites_Hanzo, 0x00, &pairNext2 },
    { L"Hanzo P Rage 2", 0x14e40, 0x14e60, indexSamSho2Sprites_Hanzo, 0x00, &pairNext2 },
    { L"Hanzo P Weapon 1", 0x14e60, 0x14e80, indexSamSho2Sprites_Hanzo, 0x01 },
    { L"Hanzo P Weapon 2", 0x14e80, 0x14ea0, indexSamSho2Sprites_Hanzo, 0x01 },
    { L"Hanzo P Burned", 0x14ea0, 0x14ec0, indexSamSho2Sprites_Hanzo, 0x00 },
    { L"Hanzo P Zapped", 0x14ec0, 0x14ee0, indexSamSho2Sprites_Hanzo, 0x00 },
    { L"Hanzo P Poisoned", 0x14ee0, 0x14f00, indexSamSho2Sprites_Hanzo, 0x00 },
    { L"Hanzo P Portrait/Doll", 0x16880, 0x168c0 },
};

const sGame_PaletteDataset SAMSHO2_A_HANZO_K[] =
{
    { L"Hanzo K", 0x14f00, 0x14f20, indexSamSho2Sprites_Hanzo, 0x00, &pairNext3 },
    { L"Hanzo K Rage 1", 0x14f20, 0x14f40, indexSamSho2Sprites_Hanzo, 0x00, &pairNext2 },
    { L"Hanzo K Rage 2", 0x14f40, 0x14f60, indexSamSho2Sprites_Hanzo, 0x00, &pairNext2 },
    { L"Hanzo K Weapon 1", 0x14f60, 0x14f80, indexSamSho2Sprites_Hanzo, 0x01 },
    { L"Hanzo K Weapon 2", 0x14f80, 0x14fa0, indexSamSho2Sprites_Hanzo, 0x01 },
    { L"Hanzo K Burned", 0x14fa0, 0x14fc0, indexSamSho2Sprites_Hanzo, 0x00 },
    { L"Hanzo K Zapped", 0x14fc0, 0x14fe0, indexSamSho2Sprites_Hanzo, 0x00 },
    { L"Hanzo K Poisoned", 0x14fe0, 0x15000, indexSamSho2Sprites_Hanzo, 0x00 },
    { L"Hanzo K Portrait/Doll", 0x168c0, 0x16900 },
};

const sGame_PaletteDataset SAMSHO2_A_GALFORD_P[] =
{
    { L"Galford P", 0x15000, 0x15020, indexSamSho2Sprites_Galford, 0x00, &pairNext3AndNext8 },
    { L"Galford P Rage 1", 0x15020, 0x15040, indexSamSho2Sprites_Galford, 0x00, &pairNext3AndNext7 },
    { L"Galford P Rage 2", 0x15040, 0x15060, indexSamSho2Sprites_Galford, 0x00, &pairNext2AndNext6 },
    { L"Galford P Weapon 1", 0x15060, 0x15080, indexSamSho2Sprites_Galford, 0x01 },
    { L"Galford P Weapon 2", 0x15080, 0x150a0, indexSamSho2Sprites_Galford, 0x01 },
    { L"Galford P Burned", 0x150a0, 0x150c0, indexSamSho2Sprites_Galford, 0x00 },
    { L"Galford P Zapped", 0x150c0, 0x150e0, indexSamSho2Sprites_Galford, 0x00 },
    { L"Galford P Poisoned", 0x150e0, 0x15100, indexSamSho2Sprites_Galford, 0x00 },
    { L"Poppy P", 0x172a0, 0x172c0, indexSamSho2Sprites_Galford, 0x02 },
    { L"Poppy P Extra", 0x172e0, 0x17300 },
    { L"Galford P Portrait/Doll", 0x16900, 0x16940 },
    { L"Poppy P Portrait/Doll", 0x16da0, 0x16dc0 },
};

const sGame_PaletteDataset SAMSHO2_A_GALFORD_K[] =
{
    { L"Galford K", 0x15100, 0x15120, indexSamSho2Sprites_Galford, 0x00, &pairNext3AndNext8 },
    { L"Galford K Rage 1", 0x15120, 0x15140, indexSamSho2Sprites_Galford, 0x00, &pairNext3AndNext7 },
    { L"Galford K Rage 2", 0x15140, 0x15160, indexSamSho2Sprites_Galford, 0x00, &pairNext2AndNext6 },
    { L"Galford K Weapon 1", 0x15160, 0x15180, indexSamSho2Sprites_Galford, 0x01 },
    { L"Galford K Weapon 2", 0x15180, 0x151a0, indexSamSho2Sprites_Galford, 0x01 },
    { L"Galford K Burned", 0x151a0, 0x151c0, indexSamSho2Sprites_Galford, 0x00 },
    { L"Galford K Zapped", 0x151c0, 0x151e0, indexSamSho2Sprites_Galford, 0x00 },
    { L"Galford K Poisoned", 0x151e0, 0x15200, indexSamSho2Sprites_Galford, 0x00 },
    { L"Poppy K", 0x172c0, 0x172e0, indexSamSho2Sprites_Galford, 0x02 },
    { L"Poppy K Extra", 0x17300, 0x17320 },
    { L"Galford K Portrait/Doll", 0x16940, 0x16980 },
    { L"Poppy K Portrait/Doll", 0x16de0, 0x16e00 },
};

const sGame_PaletteDataset SAMSHO2_A_GALFORD_Shared[] =
{
    { L"Poppy Bone", 0x17380, 0x173a0 },
};

const sGame_PaletteDataset SAMSHO2_A_WANFU_P[] =
{
    { L"Wan-Fu P", 0x15c00, 0x15c20, indexSamSho2Sprites_WanFu, 0x00, &pairNext3 },
    { L"Wan-Fu P Rage 1", 0x15c20, 0x15c40, indexSamSho2Sprites_WanFu, 0x00, &pairNext2 },
    { L"Wan-Fu P Rage 2", 0x15c40, 0x15c60, indexSamSho2Sprites_WanFu, 0x00, &pairNext2 },
    { L"Wan-Fu P Weapon 1", 0x15c60, 0x15c80, indexSamSho2Sprites_WanFu, 0x01 },
    { L"Wan-Fu P Weapon 2", 0x15c80, 0x15ca0, indexSamSho2Sprites_WanFu, 0x01 },
    { L"Wan-Fu P Burned", 0x15ca0, 0x15cc0, indexSamSho2Sprites_WanFu, 0x00 },
    { L"Wan-Fu P Zapped", 0x15cc0, 0x15ce0, indexSamSho2Sprites_WanFu, 0x00 },
    { L"Wan-Fu P Poisoned", 0x15ce0, 0x15d00, indexSamSho2Sprites_WanFu, 0x00 },
    { L"Wan-Fu P Portrait / Doll", 0x16b80, 0x16bc0 },
};

const sGame_PaletteDataset SAMSHO2_A_WANFU_K[] =
{
    { L"Wan-Fu K", 0x15d00, 0x15d20, indexSamSho2Sprites_WanFu, 0x00, &pairNext3 },
    { L"Wan-Fu K Rage 1", 0x15d20, 0x15d40, indexSamSho2Sprites_WanFu, 0x00, &pairNext2 },
    { L"Wan-Fu K Rage 2", 0x15d40, 0x15d60, indexSamSho2Sprites_WanFu, 0x00, &pairNext2 },
    { L"Wan-Fu K Weapon 1", 0x15d60, 0x15d80, indexSamSho2Sprites_WanFu, 0x01 },
    { L"Wan-Fu K Weapon 2", 0x15d80, 0x15da0, indexSamSho2Sprites_WanFu, 0x01 },
    { L"Wan-Fu K Burned", 0x15da0, 0x15dc0, indexSamSho2Sprites_WanFu, 0x00 },
    { L"Wan-Fu K Zapped", 0x15dc0, 0x15de0, indexSamSho2Sprites_WanFu, 0x00 },
    { L"Wan-Fu K Poisoned", 0x15de0, 0x15e00, indexSamSho2Sprites_WanFu, 0x00 },
    { L"Wan-Fu K Portrait/Doll", 0x16bc0, 0x16c00 },
};

const sGame_PaletteDataset SAMSHO2_A_WANFU_Shared[] =
{
    { L"Wan-Fu Tongue Portrait", 0x17220, 0x17240 },
};

const sGame_PaletteDataset SAMSHO2_A_UKYO_P[] =
{
    { L"Ukyo P", 0x14600, 0x14620, indexSamSho2Sprites_Ukyo, 0x00, &pairNext3 },
    { L"Ukyo P Rage 1", 0x14620, 0x14640, indexSamSho2Sprites_Ukyo, 0x00, &pairNext2 },
    { L"Ukyo P Rage 2", 0x14640, 0x14660, indexSamSho2Sprites_Ukyo, 0x00, &pairNext2 },
    { L"Ukyo P Weapon 1", 0x14660, 0x14680, indexSamSho2Sprites_Ukyo, 0x01 },
    { L"Ukyo P Weapon 2", 0x14680, 0x146a0, indexSamSho2Sprites_Ukyo, 0x01 },
    { L"Ukyo P Burned", 0x146a0, 0x146c0, indexSamSho2Sprites_Ukyo, 0x00 },
    { L"Ukyo P Zapped", 0x146c0, 0x146e0, indexSamSho2Sprites_Ukyo, 0x00 },
    { L"Ukyo P Poisoned", 0x146e0, 0x14700, indexSamSho2Sprites_Ukyo, 0x00 },
    { L"Ukyo P Portrait/Doll", 0x16c00, 0x16c40 },
};

const sGame_PaletteDataset SAMSHO2_A_UKYO_K[] =
{
    { L"Ukyo K", 0x14700, 0x14720, indexSamSho2Sprites_Ukyo, 0x00, &pairNext3 },
    { L"Ukyo K Rage 1", 0x14720, 0x14740, indexSamSho2Sprites_Ukyo, 0x00, &pairNext2 },
    { L"Ukyo K Rage 2", 0x14740, 0x14760, indexSamSho2Sprites_Ukyo, 0x00, &pairNext2 },
    { L"Ukyo K Weapon 1", 0x14760, 0x14780, indexSamSho2Sprites_Ukyo, 0x01 },
    { L"Ukyo K Weapon 2", 0x14780, 0x147a0, indexSamSho2Sprites_Ukyo, 0x01 },
    { L"Ukyo K Burned", 0x147a0, 0x147c0, indexSamSho2Sprites_Ukyo, 0x00 },
    { L"Ukyo K Zapped", 0x147c0, 0x147e0, indexSamSho2Sprites_Ukyo, 0x00 },
    { L"Ukyo K Poisoned", 0x147e0, 0x14800, indexSamSho2Sprites_Ukyo, 0x00 },
    { L"Ukyo K Portrait/Doll", 0x16c40, 0x16c80 },
};

const sGame_PaletteDataset SAMSHO2_A_UKYO_Shared[] =
{
    { L"Kei Odagari", 0x16620, 0x16640 },
};

const sGame_PaletteDataset SAMSHO2_A_KYOSHIRO_P[] =
{
    { L"Kyoshiro P", 0x15200, 0x15220, indexSamSho2Sprites_Kyoshiro, 0x00, &pairNext3 },
    { L"Kyoshiro P Rage 1", 0x15220, 0x15240, indexSamSho2Sprites_Kyoshiro, 0x00, &pairNext2 },
    { L"Kyoshiro P Rage 2", 0x15240, 0x15260, indexSamSho2Sprites_Kyoshiro, 0x00, &pairNext2 },
    { L"Kyoshiro P Weapon 1", 0x15260, 0x15280, indexSamSho2Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro P Weapon 2", 0x15280, 0x152a0, indexSamSho2Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro P Burned", 0x152a0, 0x152c0, indexSamSho2Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro P Zapped", 0x152c0, 0x152e0, indexSamSho2Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro P Poisoned", 0x152e0, 0x15300, indexSamSho2Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro P Portrait/Doll", 0x16c80, 0x16cc0 },
};

const sGame_PaletteDataset SAMSHO2_A_KYOSHIRO_K[] =
{
    { L"Kyoshiro K", 0x15300, 0x15320, indexSamSho2Sprites_Kyoshiro, 0x00, &pairNext3 },
    { L"Kyoshiro K Rage 1", 0x15320, 0x15340, indexSamSho2Sprites_Kyoshiro, 0x00, &pairNext2 },
    { L"Kyoshiro K Rage 2", 0x15340, 0x15360, indexSamSho2Sprites_Kyoshiro, 0x00, &pairNext2 },
    { L"Kyoshiro K Weapon 1", 0x15360, 0x15380, indexSamSho2Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro K Weapon 2", 0x15380, 0x153a0, indexSamSho2Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro K Burned", 0x153a0, 0x153c0, indexSamSho2Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro K Zapped", 0x153c0, 0x153e0, indexSamSho2Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro K Poisoned", 0x153e0, 0x15400, indexSamSho2Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro K Portrait/Doll", 0x16cc0, 0x16d00 },
};

const sGame_PaletteDataset SAMSHO2_A_GENAN_P[] =
{
    { L"Gen-an P", 0x15400, 0x15420, indexSamSho2Sprites_Genan, 0x00, &pairNext3 },
    { L"Gen-an P Rage 1", 0x15420, 0x15440, indexSamSho2Sprites_Genan, 0x00, &pairNext2 },
    { L"Gen-an P Rage 2", 0x15440, 0x15460, indexSamSho2Sprites_Genan, 0x00, &pairNext2 },
    { L"Gen-an P Weapon 1", 0x15460, 0x15480, indexSamSho2Sprites_Genan, 0x01 },
    { L"Gen-an P Weapon 2", 0x15480, 0x154a0, indexSamSho2Sprites_Genan, 0x01 },
    { L"Gen-an P Burned", 0x154a0, 0x154c0, indexSamSho2Sprites_Genan, 0x00 },
    { L"Gen-an P Zapped", 0x154c0, 0x154e0, indexSamSho2Sprites_Genan, 0x00 },
    { L"Gen-an P Poisoned", 0x154e0, 0x15500, indexSamSho2Sprites_Genan, 0x00 },
    { L"Gen-an P Portrait/Doll", 0x16a00, 0x16a40 },
};

const sGame_PaletteDataset SAMSHO2_A_GENAN_K[] =
{
    { L"Gen-an K", 0x15500, 0x15520, indexSamSho2Sprites_Genan, 0x00, &pairNext3 },
    { L"Gen-an K Rage 1", 0x15520, 0x15540, indexSamSho2Sprites_Genan, 0x00, &pairNext2 },
    { L"Gen-an K Rage 2", 0x15540, 0x15560, indexSamSho2Sprites_Genan, 0x00, &pairNext2 },
    { L"Gen-an K Weapon 1", 0x15560, 0x15580, indexSamSho2Sprites_Genan, 0x01 },
    { L"Gen-an K Weapon 2", 0x15580, 0x155a0, indexSamSho2Sprites_Genan, 0x01 },
    { L"Gen-an K Burned", 0x155a0, 0x155c0, indexSamSho2Sprites_Genan, 0x00 },
    { L"Gen-an K Zapped", 0x155c0, 0x155e0, indexSamSho2Sprites_Genan, 0x00 },
    { L"Gen-an K Poisoned", 0x155e0, 0x15600, indexSamSho2Sprites_Genan, 0x00 },
    { L"Gen-an K Portrait/Doll", 0x16a40, 0x16a80 },
};

const sGame_PaletteDataset SAMSHO2_A_GENAN_Shared[] =
{
    { L"Gen-an Effects", 0x16780, 0x167a0 },
};

const sGame_PaletteDataset SAMSHO2_A_EARTHQUAKE_P[] =
{
    { L"Earthquake P", 0x14c00, 0x14c20, indexSamSho2Sprites_Earthquake, 0x00, &pairNext3 },
    { L"Earthquake P Rage 1", 0x14c20, 0x14c40, indexSamSho2Sprites_Earthquake, 0x00, &pairNext2 },
    { L"Earthquake P Rage 2", 0x14c40, 0x14c60, indexSamSho2Sprites_Earthquake, 0x00, &pairNext2 },
    { L"Earthquake P Weapon 1", 0x14c60, 0x14c80, indexSamSho2Sprites_Earthquake, 0x01 },
    { L"Earthquake P Weapon 2", 0x14c80, 0x14ca0, indexSamSho2Sprites_Earthquake, 0x01 },
    { L"Earthquake P Burned", 0x14ca0, 0x14cc0, indexSamSho2Sprites_Earthquake, 0x00 },
    { L"Earthquake P Zapped", 0x14cc0, 0x14ce0, indexSamSho2Sprites_Earthquake, 0x00 },
    { L"Earthquake P Poisoned", 0x14ce0, 0x14d00, indexSamSho2Sprites_Earthquake, 0x00 },
    { L"Earthquake P Portrait/Doll", 0x16b00, 0x16b40 },
};

const sGame_PaletteDataset SAMSHO2_A_EARTHQUAKE_K[] =
{
    { L"Earthquake K", 0x14d00, 0x14d20, indexSamSho2Sprites_Earthquake, 0x00, &pairNext3 },
    { L"Earthquake K Rage 1", 0x14d20, 0x14d40, indexSamSho2Sprites_Earthquake, 0x00, &pairNext2 },
    { L"Earthquake K Rage 2", 0x14d40, 0x14d60, indexSamSho2Sprites_Earthquake, 0x00, &pairNext2 },
    { L"Earthquake K Weapon 1", 0x14d60, 0x14d80, indexSamSho2Sprites_Earthquake, 0x01 },
    { L"Earthquake K Weapon 2", 0x14d80, 0x14da0, indexSamSho2Sprites_Earthquake, 0x01 },
    { L"Earthquake K Burned", 0x14da0, 0x14dc0, indexSamSho2Sprites_Earthquake, 0x00 },
    { L"Earthquake K Zapped", 0x14dc0, 0x14de0, indexSamSho2Sprites_Earthquake, 0x00 },
    { L"Earthquake K Poisoned", 0x14de0, 0x14e00, indexSamSho2Sprites_Earthquake, 0x00 },
    { L"Earthquake K Portrait/Doll", 0x16b40, 0x16b80 },
};

const sGame_PaletteDataset SAMSHO2_A_JUBEI_P[] =
{
    { L"Jubei P", 0x15800, 0x15820, indexSamSho2Sprites_Jubei, 0x00, &pairNext3 },
    { L"Jubei P Rage 1", 0x15820, 0x15840, indexSamSho2Sprites_Jubei, 0x00, &pairNext2 },
    { L"Jubei P Rage 2", 0x15840, 0x15860, indexSamSho2Sprites_Jubei, 0x00, &pairNext2 },
    { L"Jubei P Weapon 1", 0x15860, 0x15880, indexSamSho2Sprites_Jubei, 0x01 },
    { L"Jubei P Weapon 2", 0x15880, 0x158a0, indexSamSho2Sprites_Jubei, 0x01 },
    { L"Jubei P Burned", 0x158a0, 0x158c0, indexSamSho2Sprites_Jubei, 0x00 },
    { L"Jubei P Zapped", 0x158c0, 0x158e0, indexSamSho2Sprites_Jubei, 0x00 },
    { L"Jubei P Poisoned", 0x158e0, 0x15900, indexSamSho2Sprites_Jubei, 0x00 },
    { L"Jubei P Portrait/Doll", 0x16980, 0x169c0 },
};

const sGame_PaletteDataset SAMSHO2_A_JUBEI_K[] =
{
    { L"Jubei K", 0x15900, 0x15920, indexSamSho2Sprites_Jubei, 0x00, &pairNext3 },
    { L"Jubei K Rage 1", 0x15920, 0x15940, indexSamSho2Sprites_Jubei, 0x00, &pairNext2 },
    { L"Jubei K Rage 2", 0x15940, 0x15960, indexSamSho2Sprites_Jubei, 0x00, &pairNext2 },
    { L"Jubei K Weapon 1", 0x15960, 0x15980, indexSamSho2Sprites_Jubei, 0x01 },
    { L"Jubei K Weapon 2", 0x15980, 0x159a0, indexSamSho2Sprites_Jubei, 0x01 },
    { L"Jubei K Burned", 0x159a0, 0x159c0, indexSamSho2Sprites_Jubei, 0x00 },
    { L"Jubei K Zapped", 0x159c0, 0x159e0, indexSamSho2Sprites_Jubei, 0x00 },
    { L"Jubei K Poisoned", 0x159e0, 0x15a00, indexSamSho2Sprites_Jubei, 0x00 },
    { L"Jubei K Portrait/Doll", 0x169c0, 0x16a00 },
};

const sGame_PaletteDataset SAMSHO2_A_CHARLOTTE_P[] =
{
    { L"Charlotte P", 0x14800, 0x14820, indexSamSho2Sprites_Charlotte, 0x00, &pairNext3 },
    { L"Charlotte P Rage 1", 0x14820, 0x14840, indexSamSho2Sprites_Charlotte, 0x00, &pairNext2 },
    { L"Charlotte P Rage 2", 0x14840, 0x14860, indexSamSho2Sprites_Charlotte, 0x00, &pairNext2 },
    { L"Charlotte P Weapon 1", 0x14860, 0x14880, indexSamSho2Sprites_Charlotte, 0x01 },
    { L"Charlotte P Weapon 2", 0x14880, 0x148a0, indexSamSho2Sprites_Charlotte, 0x01 },
    { L"Charlotte P Burned", 0x148a0, 0x148c0, indexSamSho2Sprites_Charlotte, 0x00 },
    { L"Charlotte P Zapped", 0x148c0, 0x148e0, indexSamSho2Sprites_Charlotte, 0x00 },
    { L"Charlotte P Poisoned", 0x148e0, 0x14900, indexSamSho2Sprites_Charlotte, 0x00 },
    { L"Charlotte P Portrait/Doll", 0x16a80, 0x16ac0 },
};

const sGame_PaletteDataset SAMSHO2_A_CHARLOTTE_K[] =
{
    { L"Charlotte K", 0x14900, 0x14920, indexSamSho2Sprites_Charlotte, 0x00, &pairNext3 },
    { L"Charlotte K Rage 1", 0x14920, 0x14940, indexSamSho2Sprites_Charlotte, 0x00, &pairNext2 },
    { L"Charlotte K Rage 2", 0x14940, 0x14960, indexSamSho2Sprites_Charlotte, 0x00, &pairNext2 },
    { L"Charlotte K Weapon 1", 0x14960, 0x14980, indexSamSho2Sprites_Charlotte, 0x01 },
    { L"Charlotte K Weapon 2", 0x14980, 0x149a0, indexSamSho2Sprites_Charlotte, 0x01 },
    { L"Charlotte K Burned", 0x149a0, 0x149c0, indexSamSho2Sprites_Charlotte, 0x00 },
    { L"Charlotte K Zapped", 0x149c0, 0x149e0, indexSamSho2Sprites_Charlotte, 0x00 },
    { L"Charlotte K Poisoned", 0x149e0, 0x14a00, indexSamSho2Sprites_Charlotte, 0x00 },
    { L"Charlotte K Portrait/Doll", 0x16ac0, 0x16b00 },
};

const sGame_PaletteDataset SAMSHO2_A_CHARLOTTE_Shared[] =
{
    { L"Charlotte Tri-Slash", 0x166a0, 0x166c0 },
};

const sGame_PaletteDataset SAMSHO2_A_GENJURO_P[] =
{
    { L"Genjuro P", 0x15600, 0x15620, indexSamSho2Sprites_Genjuro, 0x00, &pairNext3 },
    { L"Genjuro P Rage 1", 0x15620, 0x15640, indexSamSho2Sprites_Genjuro, 0x00, &pairNext2 },
    { L"Genjuro P Rage 2", 0x15640, 0x15660, indexSamSho2Sprites_Genjuro, 0x00, &pairNext2 },
    { L"Genjuro P Weapon 1", 0x15660, 0x15680, indexSamSho2Sprites_Genjuro, 0x01 },
    { L"Genjuro P Weapon 2", 0x15680, 0x156a0, indexSamSho2Sprites_Genjuro, 0x01 },
    { L"Genjuro P Burned", 0x156a0, 0x156c0, indexSamSho2Sprites_Genjuro, 0x00 },
    { L"Genjuro P Zapped", 0x156c0, 0x156e0, indexSamSho2Sprites_Genjuro, 0x00 },
    { L"Genjuro P Poisoned", 0x156e0, 0x15700, indexSamSho2Sprites_Genjuro, 0x00 },
    { L"Genjuro P Portrait/Doll", 0x16e80, 0x16ec0 },
};

const sGame_PaletteDataset SAMSHO2_A_GENJURO_K[] =
{
    { L"Genjuro K", 0x15700, 0x15720, indexSamSho2Sprites_Genjuro, 0x00, &pairNext3 },
    { L"Genjuro K Rage 1", 0x15720, 0x15740, indexSamSho2Sprites_Genjuro, 0x00, &pairNext2 },
    { L"Genjuro K Rage 2", 0x15740, 0x15760, indexSamSho2Sprites_Genjuro, 0x00, &pairNext2 },
    { L"Genjuro K Weapon 1", 0x15760, 0x15780, indexSamSho2Sprites_Genjuro, 0x01 },
    { L"Genjuro K Weapon 2", 0x15780, 0x157a0, indexSamSho2Sprites_Genjuro, 0x01 },
    { L"Genjuro K Burned", 0x157a0, 0x157c0, indexSamSho2Sprites_Genjuro, 0x00 },
    { L"Genjuro K Zapped", 0x157c0, 0x157e0, indexSamSho2Sprites_Genjuro, 0x00 },
    { L"Genjuro K Poisoned", 0x157e0, 0x15800, indexSamSho2Sprites_Genjuro, 0x00 },
    { L"Genjuro K Portrait/Doll", 0x16ec0, 0x16f00 },
};

const sGame_PaletteDataset SAMSHO2_A_GENJURO_Shared[] =
{
    { L"Genjuro DP/Rekka 1", 0x16520, 0x16540 },
    { L"Genjuro DP/Rekka 2", 0x16540, 0x16560 },
    { L"Genjuro Leaf/Umbrella/Card", 0x16700, 0x16720 },
    { L"Genjuro Bowl/Cloth Extra", 0x17580, 0x175a0 },
};

const sGame_PaletteDataset SAMSHO2_A_CHAMCHAM_P[] =
{
    { L"Cham Cham P", 0x15a00, 0x15a20, indexSamSho2Sprites_ChamCham, 0x00, &pairNext3AndNext8 },
    { L"Cham Cham P Rage 1", 0x15a20, 0x15a40, indexSamSho2Sprites_ChamCham, 0x00, &pairNext3AndNext7 },
    { L"Cham Cham P Rage 2", 0x15a40, 0x15a60, indexSamSho2Sprites_ChamCham, 0x00, &pairNext2AndNext6 },
    { L"Cham Cham P Weapon 1", 0x15a60, 0x15a80, indexSamSho2Sprites_ChamCham, 0x01 },
    { L"Cham Cham P Weapon 2", 0x15a80, 0x15aa0, indexSamSho2Sprites_ChamCham, 0x01 },
    { L"Cham Cham P Burned", 0x15aa0, 0x15ac0, indexSamSho2Sprites_ChamCham, 0x00 },
    { L"Cham Cham P Zapped", 0x15ac0, 0x15ae0, indexSamSho2Sprites_ChamCham, 0x00 },
    { L"Cham Cham P Poisoned", 0x15ae0, 0x15b00, indexSamSho2Sprites_ChamCham, 0x00 },
    { L"Paku Paku P", 0x17660, 0x17680, indexSamSho2Sprites_ChamCham, 0x02 },
    { L"Cham-Cham P Portrait/Doll", 0x16f80, 0x16fc0 },
};

const sGame_PaletteDataset SAMSHO2_A_CHAMCHAM_K[] =
{
    { L"Cham Cham K", 0x15b00, 0x15b20, indexSamSho2Sprites_ChamCham, 0x00, &pairNext3AndNext8 },
    { L"Cham Cham K Rage 1", 0x15b20, 0x15b40, indexSamSho2Sprites_ChamCham, 0x00, &pairNext3AndNext7 },
    { L"Cham Cham K Rage 2", 0x15b40, 0x15b60, indexSamSho2Sprites_ChamCham, 0x00, &pairNext2AndNext6 },
    { L"Cham Cham K Weapon 1", 0x15b60, 0x15b80, indexSamSho2Sprites_ChamCham, 0x01 },
    { L"Cham Cham K Weapon 2", 0x15b80, 0x15ba0, indexSamSho2Sprites_ChamCham, 0x01 },
    { L"Cham Cham K Burned", 0x15ba0, 0x15bc0, indexSamSho2Sprites_ChamCham, 0x00 },
    { L"Cham Cham K Zapped", 0x15bc0, 0x15be0, indexSamSho2Sprites_ChamCham, 0x00 },
    { L"Cham Cham K Poisoned", 0x15be0, 0x15c00, indexSamSho2Sprites_ChamCham, 0x00 },
    { L"Paku Paku K", 0x17680, 0x176a0, indexSamSho2Sprites_ChamCham, 0x02 },
    { L"Cham-Cham K Portrait/Doll", 0x16fc0, 0x17000 },
};

const sGame_PaletteDataset SAMSHO2_A_CHAMCHAM_Shared[] =
{
    { L"Metamoranimal Attack", 0x174a0, 0x174c0 },
};

const sGame_PaletteDataset SAMSHO2_A_SIEGER_P[] =
{
    { L"Sieger P", 0x15e00, 0x15e20, indexSamSho2Sprites_Sieger, 0x00, &pairNext3 },
    { L"Sieger P Rage 1", 0x15e20, 0x15e40, indexSamSho2Sprites_Sieger, 0x00, &pairNext2 },
    { L"Sieger P Rage 2", 0x15e40, 0x15e60, indexSamSho2Sprites_Sieger, 0x00, &pairNext2 },
    { L"Sieger P Weapon 1", 0x15e60, 0x15e80, indexSamSho2Sprites_Sieger, 0x01 },
    { L"Sieger P Weapon 2", 0x15e80, 0x15ea0, indexSamSho2Sprites_Sieger, 0x01 },
    { L"Sieger P Burned", 0x15ea0, 0x15ec0, indexSamSho2Sprites_Sieger, 0x00 },
    { L"Sieger P Zapped", 0x15ec0, 0x15ee0, indexSamSho2Sprites_Sieger, 0x00 },
    { L"Sieger P Poisoned", 0x15ee0, 0x15f00, indexSamSho2Sprites_Sieger, 0x00 },
    { L"Sieger P Portrait/Doll", 0x16e00, 0x16e40 },
};

const sGame_PaletteDataset SAMSHO2_A_SIEGER_K[] =
{
    { L"Sieger K", 0x15f00, 0x15f20, indexSamSho2Sprites_Sieger, 0x00, &pairNext3 },
    { L"Sieger K Rage 1", 0x15f20, 0x15f40, indexSamSho2Sprites_Sieger, 0x00, &pairNext2 },
    { L"Sieger K Rage 2", 0x15f40, 0x15f60, indexSamSho2Sprites_Sieger, 0x00, &pairNext2 },
    { L"Sieger K Weapon 1", 0x15f60, 0x15f80, indexSamSho2Sprites_Sieger, 0x01 },
    { L"Sieger K Weapon 2", 0x15f80, 0x15fa0, indexSamSho2Sprites_Sieger, 0x01 },
    { L"Sieger K Burned", 0x15fa0, 0x15fc0, indexSamSho2Sprites_Sieger, 0x00 },
    { L"Sieger K Zapped", 0x15fc0, 0x15fe0, indexSamSho2Sprites_Sieger, 0x00 },
    { L"Sieger K Poisoned", 0x15fe0, 0x16000, indexSamSho2Sprites_Sieger, 0x00 },
    { L"Sieger K Portrait/Doll", 0x16e40, 0x16e80 },
};

const sGame_PaletteDataset SAMSHO2_A_NICOTINE_P[] =
{
    { L"Nicotine P", 0x16000, 0x16020, indexSamSho2Sprites_Nicotine, 0x00, &pairNext3 },
    { L"Nicotine P Rage 1", 0x16020, 0x16040, indexSamSho2Sprites_Nicotine, 0x00, &pairNext2 },
    { L"Nicotine P Rage 2", 0x16040, 0x16060, indexSamSho2Sprites_Nicotine, 0x00, &pairNext2 },
    { L"Nicotine P Weapon 1", 0x16060, 0x16080, indexSamSho2Sprites_Nicotine, 0x01 },
    { L"Nicotine P Weapon 2", 0x16080, 0x160a0, indexSamSho2Sprites_Nicotine, 0x01 },
    { L"Nicotine P Burned", 0x160a0, 0x160c0, indexSamSho2Sprites_Nicotine, 0x00 },
    { L"Nicotine P Zapped", 0x160c0, 0x160e0, indexSamSho2Sprites_Nicotine, 0x00 },
    { L"Nicotine P Poisoned", 0x160e0, 0x16100, indexSamSho2Sprites_Nicotine, 0x00 },
    { L"Nicotine P Portrait/Doll", 0x16f00, 0x16f40 },
};

const sGame_PaletteDataset SAMSHO2_A_NICOTINE_K[] =
{
    { L"Nicotine K", 0x16100, 0x16120, indexSamSho2Sprites_Nicotine, 0x00, &pairNext3 },
    { L"Nicotine K Rage 1", 0x16120, 0x16140, indexSamSho2Sprites_Nicotine, 0x00, &pairNext2 },
    { L"Nicotine K Rage 2", 0x16140, 0x16160, indexSamSho2Sprites_Nicotine, 0x00, &pairNext2 },
    { L"Nicotine K Weapon 1", 0x16160, 0x16180, indexSamSho2Sprites_Nicotine, 0x01 },
    { L"Nicotine K Weapon 2", 0x16180, 0x161a0, indexSamSho2Sprites_Nicotine, 0x01 },
    { L"Nicotine K Burned", 0x161a0, 0x161c0, indexSamSho2Sprites_Nicotine, 0x00 },
    { L"Nicotine K Zapped", 0x161c0, 0x161e0, indexSamSho2Sprites_Nicotine, 0x00 },
    { L"Nicotine K Poisoned", 0x161e0, 0x16200, indexSamSho2Sprites_Nicotine, 0x00 },
    { L"Nicotine K Portrait/Doll", 0x16f40, 0x16f80 },
};

const sGame_PaletteDataset SAMSHO2_A_NICOTINE_Shared[] =
{
    { L"Nicotine Cards Portrait", 0x16d80, 0x16da0 },
    { L"Nicotine Poison Grab", 0x167a0, 0x167c0 },
};

const sGame_PaletteDataset SAMSHO2_A_MIZUKI[] =
{
    { L"Mizuki", 0x16300, 0x16320, indexSamSho2Sprites_Mizuki, 0x00, &pairNext3 },
    { L"Mizuki Rage 1", 0x16320, 0x16340, indexSamSho2Sprites_Mizuki, 0x00, &pairNext3 },
    { L"Mizuki Rage 2", 0x16340, 0x16360, indexSamSho2Sprites_Mizuki, 0x00, &pairNext2 },
    { L"Mizuki Weapon 1", 0x16360, 0x16380, indexSamSho2Sprites_Mizuki, 0x01 },
    { L"Mizuki Weapon 2", 0x16380, 0x163a0, indexSamSho2Sprites_Mizuki, 0x01 },
    { L"Mizuki Burned", 0x163a0, 0x163c0, indexSamSho2Sprites_Mizuki, 0x00 },
    { L"Mizuki Zapped", 0x163c0, 0x163e0 , indexSamSho2Sprites_Mizuki, 0x00},
    { L"Mizuki Poisoned", 0x163e0, 0x16400, indexSamSho2Sprites_Mizuki, 0x00 },
    { L"Maju", 0x17700, 0x17720, indexSamSho2Sprites_Mizuki, 0x02, &pairNext2 },
    { L"Maju Changing Pal", 0x17720, 0x17740, indexSamSho2Sprites_Mizuki, 0x02 },
    { L"Maju Dog Form", 0x17740, 0x17760, indexSamSho2Sprites_Mizuki, 0x03 },
    { L"Mizuki Portrait", 0x16dc0, 0x16de0 },
    { L"Maju Portrait", 0x17280, 0x172a0 },
};

const sGame_PaletteDataset SAMSHO2_A_KUROKO[] =
{
    { L"Kuroko", 0x16200, 0x16220, indexSamSho2Sprites_Kuroko, 0x00 },
    { L"Kuroko Rage 1", 0x16220, 0x16240, indexSamSho2Sprites_Kuroko, 0x00 },
    { L"Kuroko Rage 2", 0x16240, 0x16260, indexSamSho2Sprites_Kuroko, 0x00 },
    { L"Kuroko Unused 1", 0x16260, 0x16280 },
    { L"Kuroko Unused 2", 0x16280, 0x162a0 },
    { L"Kuroko Burned", 0x162a0, 0x162c0, indexSamSho2Sprites_Kuroko, 0x00 },
    { L"Kuroko Zapped", 0x162c0, 0x162e0, indexSamSho2Sprites_Kuroko, 0x00 },
    { L"Kuroko Poisoned", 0x162e0, 0x16300, indexSamSho2Sprites_Kuroko, 0x00 },
    { L"Kuroko Slick Unleashed", 0x176e0, 0x17700 },
    { L"Kuroko Portrait/Doll", 0x17500, 0x17520 },
};

const sGame_PaletteDataset SAMSHO2_A_BONUS_SharedEffects[] =
{
    { L"Cham Cham/Charlotte Effects", 0x16680, 0x166a0 },
    { L"Plasma Effects", 0x166c0, 0x166e0 },
    { L"Mizuki Ghost/Pig Forms", 0x17620, 0x17640 },
    { L"Shichikapu Kamui Irusuka", 0x167e0, 0x16800 },
};

const sGame_PaletteDataset SAMSHO2_A_BONUS_Intro[] =
{
    { L"SNK Logo", 0x17060, 0x170a0 },
    { L"Intro Sakura Leafs", 0x170a0, 0x170c0 },
    { L"Intro Flying Cards", 0x170e0, 0x17100 },
    { L"Intro Flying Wings", 0x17100, 0x17120 },
    { L"Samurai Shodown Logo 1/2", 0x171a0, 0x171e0, indexSamSho2Sprites_Bonus, 0x00, &pairNext },
    { L"Samurai Shodown Logo 2/2", 0x17240, 0x17260, indexSamSho2Sprites_Bonus, 0x01 },
    { L"Black Screen", 0x176c0, 0x176e0 },
    { L"Text Board", 0x170c0, 0x170e0 },
    { L"Tutorial Joystick", 0x17460, 0x17480 },
};

const sGame_PaletteDataset SAMSHO2_A_BONUS_IngameExtras[] =
{
    { L"Left Kuroko (Referee)", 0x173a0, 0x173c0 },
    { L"Right Kuroko (Referee)", 0x173c0, 0x173e0 },
    { L"Bomb/Food Thrower", 0x173e0, 0x17400 },
    { L"Food", 0x17400, 0x17420 },
    { L"Explosion", 0x17420, 0x17440 },
    { L"Win Screen Referee", 0x175e0, 0x17600 },
    { L"Win Screen Referee Straw", 0x17600, 0x17620 },
    { L"Bonus Text", 0x177c0, 0x177e0 },
    { L"Challenger Text", 0x177e0, 0x17800 },
};
    
const sDescTreeNode SAMSHO2_A_HAOHMARU_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HAOHMARU_P, ARRAYSIZE(SAMSHO2_A_HAOHMARU_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HAOHMARU_K, ARRAYSIZE(SAMSHO2_A_HAOHMARU_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HAOHMARU_Shared, ARRAYSIZE(SAMSHO2_A_HAOHMARU_Shared) },
};

const sDescTreeNode SAMSHO2_A_NAKORURU_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NAKORURU_P, ARRAYSIZE(SAMSHO2_A_NAKORURU_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NAKORURU_K, ARRAYSIZE(SAMSHO2_A_NAKORURU_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NAKORURU_Shared, ARRAYSIZE(SAMSHO2_A_NAKORURU_Shared) },
};

const sDescTreeNode SAMSHO2_A_HANZO_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HANZO_P, ARRAYSIZE(SAMSHO2_A_HANZO_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HANZO_K, ARRAYSIZE(SAMSHO2_A_HANZO_K) },
};

const sDescTreeNode SAMSHO2_A_GALFORD_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GALFORD_P, ARRAYSIZE(SAMSHO2_A_GALFORD_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GALFORD_K, ARRAYSIZE(SAMSHO2_A_GALFORD_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GALFORD_Shared, ARRAYSIZE(SAMSHO2_A_GALFORD_Shared) },
};

const sDescTreeNode SAMSHO2_A_WANFU_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_WANFU_P, ARRAYSIZE(SAMSHO2_A_WANFU_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_WANFU_K, ARRAYSIZE(SAMSHO2_A_WANFU_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_WANFU_Shared, ARRAYSIZE(SAMSHO2_A_WANFU_Shared) },
};

const sDescTreeNode SAMSHO2_A_UKYO_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_UKYO_P, ARRAYSIZE(SAMSHO2_A_UKYO_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_UKYO_K, ARRAYSIZE(SAMSHO2_A_UKYO_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_UKYO_Shared, ARRAYSIZE(SAMSHO2_A_UKYO_Shared) },
};

const sDescTreeNode SAMSHO2_A_KYOSHIRO_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_KYOSHIRO_P, ARRAYSIZE(SAMSHO2_A_KYOSHIRO_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_KYOSHIRO_K, ARRAYSIZE(SAMSHO2_A_KYOSHIRO_K) },
};

const sDescTreeNode SAMSHO2_A_GENAN_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENAN_P, ARRAYSIZE(SAMSHO2_A_GENAN_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENAN_K, ARRAYSIZE(SAMSHO2_A_GENAN_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENAN_Shared, ARRAYSIZE(SAMSHO2_A_GENAN_Shared) },
};

const sDescTreeNode SAMSHO2_A_EARTHQUAKE_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_EARTHQUAKE_P, ARRAYSIZE(SAMSHO2_A_EARTHQUAKE_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_EARTHQUAKE_K, ARRAYSIZE(SAMSHO2_A_EARTHQUAKE_K) },
};

const sDescTreeNode SAMSHO2_A_JUBEI_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_JUBEI_P, ARRAYSIZE(SAMSHO2_A_JUBEI_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_JUBEI_K, ARRAYSIZE(SAMSHO2_A_JUBEI_K) },
};

const sDescTreeNode SAMSHO2_A_CHARLOTTE_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHARLOTTE_P, ARRAYSIZE(SAMSHO2_A_CHARLOTTE_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHARLOTTE_K, ARRAYSIZE(SAMSHO2_A_CHARLOTTE_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHARLOTTE_Shared, ARRAYSIZE(SAMSHO2_A_CHARLOTTE_Shared) },
};

const sDescTreeNode SAMSHO2_A_GENJURO_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENJURO_P, ARRAYSIZE(SAMSHO2_A_GENJURO_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENJURO_K, ARRAYSIZE(SAMSHO2_A_GENJURO_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENJURO_Shared, ARRAYSIZE(SAMSHO2_A_GENJURO_Shared) },
};

const sDescTreeNode SAMSHO2_A_CHAMCHAM_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHAMCHAM_P, ARRAYSIZE(SAMSHO2_A_CHAMCHAM_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHAMCHAM_K, ARRAYSIZE(SAMSHO2_A_CHAMCHAM_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHAMCHAM_Shared, ARRAYSIZE(SAMSHO2_A_CHAMCHAM_Shared) },
};

const sDescTreeNode SAMSHO2_A_SIEGER_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_SIEGER_P, ARRAYSIZE(SAMSHO2_A_SIEGER_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_SIEGER_K, ARRAYSIZE(SAMSHO2_A_SIEGER_K) },
};

const sDescTreeNode SAMSHO2_A_NICOTINE_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NICOTINE_P, ARRAYSIZE(SAMSHO2_A_NICOTINE_P) },
    { L"K", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NICOTINE_K, ARRAYSIZE(SAMSHO2_A_NICOTINE_K) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NICOTINE_Shared, ARRAYSIZE(SAMSHO2_A_NICOTINE_Shared) },
};

const sDescTreeNode SAMSHO2_A_MIZUKI_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_MIZUKI, ARRAYSIZE(SAMSHO2_A_MIZUKI) },
};

const sDescTreeNode SAMSHO2_A_KUROKO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_KUROKO, ARRAYSIZE(SAMSHO2_A_KUROKO) },
};

const sDescTreeNode SAMSHO2_A_BONUS_COLLECTION[] =
{
    { L"Shared Effects", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_BONUS_SharedEffects, ARRAYSIZE(SAMSHO2_A_BONUS_SharedEffects) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_BONUS_Intro, ARRAYSIZE(SAMSHO2_A_BONUS_Intro) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_BONUS_IngameExtras, ARRAYSIZE(SAMSHO2_A_BONUS_IngameExtras) },
};

const sDescTreeNode SAMSHO2_A_UNITS[] =
{
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HAOHMARU_COLLECTION, ARRAYSIZE(SAMSHO2_A_HAOHMARU_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NAKORURU_COLLECTION, ARRAYSIZE(SAMSHO2_A_NAKORURU_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_UKYO_COLLECTION, ARRAYSIZE(SAMSHO2_A_UKYO_COLLECTION) },
    { L"Charlotte", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHARLOTTE_COLLECTION, ARRAYSIZE(SAMSHO2_A_CHARLOTTE_COLLECTION) },
    { L"Earthquake", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_EARTHQUAKE_COLLECTION, ARRAYSIZE(SAMSHO2_A_EARTHQUAKE_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_HANZO_COLLECTION, ARRAYSIZE(SAMSHO2_A_HANZO_COLLECTION) },
    { L"Galford", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GALFORD_COLLECTION, ARRAYSIZE(SAMSHO2_A_GALFORD_COLLECTION) },
    { L"Kyoshiro", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_KYOSHIRO_COLLECTION, ARRAYSIZE(SAMSHO2_A_KYOSHIRO_COLLECTION) },
    { L"Gen-an", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENAN_COLLECTION, ARRAYSIZE(SAMSHO2_A_GENAN_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_GENJURO_COLLECTION, ARRAYSIZE(SAMSHO2_A_GENJURO_COLLECTION) },
    { L"Jubei", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_JUBEI_COLLECTION, ARRAYSIZE(SAMSHO2_A_JUBEI_COLLECTION) },
    { L"Cham Cham", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_CHAMCHAM_COLLECTION, ARRAYSIZE(SAMSHO2_A_CHAMCHAM_COLLECTION) },
    { L"Wan-Fu", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_WANFU_COLLECTION, ARRAYSIZE(SAMSHO2_A_WANFU_COLLECTION) },
    { L"Neinhalt Sieger", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_SIEGER_COLLECTION, ARRAYSIZE(SAMSHO2_A_SIEGER_COLLECTION) },
    { L"Nicotine", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_NICOTINE_COLLECTION, ARRAYSIZE(SAMSHO2_A_NICOTINE_COLLECTION) },
    { L"Kuroko", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_KUROKO_COLLECTION, ARRAYSIZE(SAMSHO2_A_KUROKO_COLLECTION) },
    { L"Mizuki", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_MIZUKI_COLLECTION, ARRAYSIZE(SAMSHO2_A_MIZUKI_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_BONUS_COLLECTION, ARRAYSIZE(SAMSHO2_A_BONUS_COLLECTION) },
};

constexpr auto SAMSHO2_A_NUMUNIT = ARRAYSIZE(SAMSHO2_A_UNITS);

constexpr auto SAMSHO2_A_EXTRALOC = SAMSHO2_A_NUMUNIT;

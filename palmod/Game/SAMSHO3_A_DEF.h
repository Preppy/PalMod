#pragma once

const UINT16 SAMSHO3_A_IMGIDS_USED[] =
{
    indexSamSho5Sprites_Amakusa,    // 0
    indexSamSho5Sprites_Gaira,      // 4
    indexSamSho5Sprites_Galford,    // 5
    indexSamSho5Sprites_Kyoshiro,   // d
    indexSamSho5Sprites_Nakoruru,   // 10
    indexSamSho5Sprites_Rera,       // 12 not in the game: just want the shikuru sprite for nakoruru Bust form
    indexSamSho5Sprites_Rimururu,   // 13
    indexSamSho5Sprites_Shizumaru,  // 14
    indexSamSho5Sprites_Zankuro,    // 1b

    indexSamSho3Sprites_Amakusa,    // 1F
    indexSamSho3Sprites_Basara,     // 20
    indexSamSho3Sprites_Gaira,      // 21
    indexSamSho3Sprites_Galford,    // 22
    indexSamSho3Sprites_Genjuro,    // 23
    indexSamSho3Sprites_Hanzo,      // 24
    indexSamSho3Sprites_Haohmaru,   // 25
    indexSamSho3Sprites_Jubei,      // 26
    indexSamSho3Sprites_KimUngChe,  // 27
    indexSamSho3Sprites_Kuroko,     // 28
    indexSamSho3Sprites_Kyoshiro,   // 29
    indexSamSho3Sprites_Nakoruru,   // 2A
    indexSamSho3Sprites_Rimururu,   // 2B
    indexSamSho3Sprites_Shizumaru,  // 2C
    indexSamSho3Sprites_Ukyo,       // 2D
    indexSamSho3Sprites_Zankuro,    // 2E
    indexSamSho3Sprites_Bonus,      // 2F
    indexSamSho3Sprites_Stages,     // 30
};

const sGame_PaletteDataset SAMSHO3_A_HAOHMARU_PALETTES_S1[] =
{
    { L"Main", 0x1000, 0x1040, indexSamSho3Sprites_Haohmaru },
    { L"Rage Flash", 0x1040, 0x1080, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 2", 0x1080, 0x10c0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 3", 0x10c0, 0x1100, indexSamSho3Sprites_Haohmaru },
    { L"Shocked", 0x1100, 0x1140, indexSamSho3Sprites_Haohmaru },
    { L"Frozen", 0x1140, 0x1180, indexSamSho3Sprites_Haohmaru },
    { L"Burning", 0x1180, 0x11c0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 7", 0x11c0, 0x1200 },
    { L"Daylight", 0x1200, 0x1240, indexSamSho3Sprites_Haohmaru },
    { L"Moonlight", 0x1240, 0x1280, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 10", 0x1280, 0x12c0 },
    { L"Extra Palette 11", 0x12c0, 0x1300 },
    { L"Extra Palette 12", 0x1300, 0x1340 },
    { L"Slashes (1+2/3)", 0x1340, 0x1380 },
    { L"Slashes (3/3) / Start of Portrait", 0x1380, 0x13c0 },
    { L"End of Portrait / Character Extra 5", 0x13c0, 0x1400 },
};

const sGame_PaletteDataset SAMSHO3_A_HAOHMARU_PALETTES_S2[] =
{
    { L"Main", 0x1400, 0x1440, indexSamSho3Sprites_Haohmaru },
    { L"Rage Flash", 0x1440, 0x1480, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 2", 0x1480, 0x14c0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 3", 0x14c0, 0x1500, indexSamSho3Sprites_Haohmaru },
    { L"Shocked", 0x1500, 0x1540, indexSamSho3Sprites_Haohmaru },
    { L"Frozen", 0x1540, 0x1580, indexSamSho3Sprites_Haohmaru },
    { L"Burning", 0x1580, 0x15c0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 7", 0x15c0, 0x1600 },
    { L"Daylight", 0x1600, 0x1640, indexSamSho3Sprites_Haohmaru },
    { L"Moonlight", 0x1640, 0x1680, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 10", 0x1680, 0x16c0 },
    { L"Extra Palette 11", 0x16c0, 0x1700 },
    { L"Extra Palette 12", 0x1700, 0x1740 },
    { L"Slashes (1+2/3)", 0x1740, 0x1780 },
    { L"Slashes (3/3) / Start of Portrait", 0x1780, 0x17c0 },
    { L"End of Portrait / Character Extra 5", 0x17c0, 0x1800 },
};

const sGame_PaletteDataset SAMSHO3_A_HAOHMARU_PALETTES_B1[] =
{
    { L"Main", 0x1800, 0x1840, indexSamSho3Sprites_Haohmaru },
    { L"Rage Flash", 0x1840, 0x1880, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 2", 0x1880, 0x18c0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 3", 0x18c0, 0x1900, indexSamSho3Sprites_Haohmaru },
    { L"Shocked", 0x1900, 0x1940, indexSamSho3Sprites_Haohmaru },
    { L"Frozen", 0x1940, 0x1980, indexSamSho3Sprites_Haohmaru },
    { L"Burning", 0x1980, 0x19c0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 7", 0x19c0, 0x1a00 },
    { L"Daylight", 0x1a00, 0x1a40, indexSamSho3Sprites_Haohmaru },
    { L"Moonlight", 0x1a40, 0x1a80, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 10", 0x1a80, 0x1ac0 },
    { L"Extra Palette 11", 0x1ac0, 0x1b00 },
    { L"Extra Palette 12", 0x1b00, 0x1b40 },
    { L"Slashes (1+2/3)", 0x1b40, 0x1b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x1b80, 0x1bc0 },
    { L"End of Portrait / Character Extra 5", 0x1bc0, 0x1c00 },
};

const sGame_PaletteDataset SAMSHO3_A_HAOHMARU_PALETTES_B2[] =
{
    { L"Main", 0x1c00, 0x1c40, indexSamSho3Sprites_Haohmaru },
    { L"Rage Flash", 0x1c40, 0x1c80, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 2", 0x1c80, 0x1cc0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 3", 0x1cc0, 0x1d00, indexSamSho3Sprites_Haohmaru },
    { L"Shocked", 0x1d00, 0x1d40, indexSamSho3Sprites_Haohmaru },
    { L"Frozen", 0x1d40, 0x1d80, indexSamSho3Sprites_Haohmaru },
    { L"Burning", 0x1d80, 0x1dc0, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 7", 0x1dc0, 0x1e00 },
    { L"Daylight", 0x1e00, 0x1e40, indexSamSho3Sprites_Haohmaru },
    { L"Moonlight", 0x1e40, 0x1e80, indexSamSho3Sprites_Haohmaru },
    { L"Extra Palette 10", 0x1e80, 0x1ec0 },
    { L"Extra Palette 11", 0x1ec0, 0x1f00 },
    { L"Extra Palette 12", 0x1f00, 0x1f40 },
    { L"Slashes (1+2/3)", 0x1f40, 0x1f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x1f80, 0x1fc0 },
    { L"End of Portrait / Character Extra 5", 0x1fc0, 0x2000 },
};

const sGame_PaletteDataset SAMSHO3_A_NAKORURU_PALETTES_S1[] =
{
    { L"Main", 0x2000, 0x2040, indexSamSho5Sprites_Nakoruru, 0, &pairNext10 },
    { L"Rage Flash", 0x2040, 0x2080, indexSamSho5Sprites_Nakoruru, 0, &pairNext10 },
    { L"Extra Palette 2", 0x2080, 0x20c0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 3", 0x20c0, 0x2100, indexSamSho5Sprites_Nakoruru },
    { L"Shocked", 0x2100, 0x2140, indexSamSho5Sprites_Nakoruru },
    { L"Frozen", 0x2140, 0x2180, indexSamSho5Sprites_Nakoruru },
    { L"Burning", 0x2180, 0x21c0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 7", 0x21c0, 0x2200 },
    { L"Daylight", 0x2200, 0x2240, indexSamSho5Sprites_Nakoruru },
    { L"Moonlight", 0x2240, 0x2280, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 10: Mamahaha", 0x2280, 0x22c0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Extra Palette 11: Mamahaha", 0x22c0, 0x2300, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Extra Palette 12: Mamahaha", 0x2300, 0x2340, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Slashes (1+2/3)", 0x2340, 0x2380 },
    { L"Slashes (3/3) / Start of Portrait", 0x2380, 0x23c0 },
    { L"End of Portrait / Character Extra 5", 0x23c0, 0x2400 },
};

const sGame_PaletteDataset SAMSHO3_A_NAKORURU_PALETTES_S2[] =
{
    { L"Main", 0x2400, 0x2440, indexSamSho5Sprites_Nakoruru, 0, &pairNext10 },
    { L"Rage Flash", 0x2440, 0x2480, indexSamSho5Sprites_Nakoruru, 0, &pairNext10 },
    { L"Extra Palette 2", 0x2480, 0x24c0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 3", 0x24c0, 0x2500, indexSamSho5Sprites_Nakoruru },
    { L"Shocked", 0x2500, 0x2540, indexSamSho5Sprites_Nakoruru },
    { L"Frozen", 0x2540, 0x2580, indexSamSho5Sprites_Nakoruru },
    { L"Burning", 0x2580, 0x25c0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 7", 0x25c0, 0x2600 },
    { L"Daylight", 0x2600, 0x2640, indexSamSho5Sprites_Nakoruru },
    { L"Moonlight", 0x2640, 0x2680, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 10: Mamahaha", 0x2680, 0x26c0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Extra Palette 11: Mamahaha", 0x26c0, 0x2700, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Extra Palette 12: Mamahaha", 0x2700, 0x2740, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Slashes (1+2/3)", 0x2740, 0x2780 },
    { L"Slashes (3/3) / Start of Portrait", 0x2780, 0x27c0 },
    { L"End of Portrait / Character Extra 5", 0x27c0, 0x2800 },
};

const sGame_PaletteDataset SAMSHO3_A_NAKORURU_PALETTES_B1[] =
{
    { L"Main", 0x2800, 0x2840, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Rage Flash", 0x2840, 0x2880, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Extra Palette 2", 0x2880, 0x28c0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 3", 0x28c0, 0x2900, indexSamSho5Sprites_Nakoruru },
    { L"Shocked", 0x2900, 0x2940, indexSamSho5Sprites_Nakoruru },
    { L"Frozen", 0x2940, 0x2980, indexSamSho5Sprites_Nakoruru },
    { L"Burning", 0x2980, 0x29c0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 7", 0x29c0, 0x2a00 },
    { L"Daylight", 0x2a00, 0x2a40, indexSamSho5Sprites_Nakoruru },
    { L"Moonlight", 0x2a40, 0x2a80, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 10: Shikuru", 0x2aa0, 0x2ac0, indexSamSho5Sprites_Rera, 1 },
    { L"Extra Palette 11: Shikuru", 0x2ae0, 0x2b00, indexSamSho5Sprites_Rera, 1 },
    { L"Extra Palette 12: Shikuru", 0x2b20, 0x2b40, indexSamSho5Sprites_Rera, 1 },
    { L"Slashes (1+2/3)", 0x2b40, 0x2b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x2b80, 0x2bc0 },
    { L"End of Portrait / Character Extra 5", 0x2bc0, 0x2c00 },
};

const sGame_PaletteDataset SAMSHO3_A_NAKORURU_PALETTES_B2[] =
{
    { L"Main", 0x2c00, 0x2c40, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Rage Flash", 0x2c40, 0x2c80, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Extra Palette 2", 0x2c80, 0x2cc0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 3", 0x2cc0, 0x2d00, indexSamSho5Sprites_Nakoruru },
    { L"Shocked", 0x2d00, 0x2d40, indexSamSho5Sprites_Nakoruru },
    { L"Frozen", 0x2d40, 0x2d80, indexSamSho5Sprites_Nakoruru },
    { L"Burning", 0x2d80, 0x2dc0, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 7", 0x2dc0, 0x2e00 },
    { L"Daylight", 0x2e00, 0x2e40, indexSamSho5Sprites_Nakoruru },
    { L"Moonlight", 0x2e40, 0x2e80, indexSamSho5Sprites_Nakoruru },
    { L"Extra Palette 10: Shikuru", 0x2ea0, 0x2ec0, indexSamSho5Sprites_Rera, 1 },
    { L"Extra Palette 11: Shikuru", 0x2ee0, 0x2f00, indexSamSho5Sprites_Rera, 1 },
    { L"Extra Palette 12: Shikuru", 0x2f20, 0x2f40, indexSamSho5Sprites_Rera, 1 },
    { L"Slashes (1+2/3)", 0x2f40, 0x2f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x2f80, 0x2fc0 },
    { L"End of Portrait / Character Extra 5", 0x2fc0, 0x3000 },
};

const sGame_PaletteDataset SAMSHO3_A_RIMURURU_PALETTES_S1[] =
{
    { L"Main", 0x3000, 0x3040, indexSamSho5Sprites_Rimururu },
    { L"Rage Flash", 0x3040, 0x3080, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 2", 0x3080, 0x30c0 },
    { L"Extra Palette 3", 0x30c0, 0x3100, indexSamSho5Sprites_Rimururu },
    { L"Shocked", 0x3100, 0x3140, indexSamSho5Sprites_Rimururu },
    { L"Frozen", 0x3140, 0x3180, indexSamSho5Sprites_Rimururu },
    { L"Burning", 0x3180, 0x31c0, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 7", 0x31c0, 0x3200 },
    { L"Daylight", 0x3200, 0x3240, indexSamSho5Sprites_Rimururu },
    { L"Moonlight", 0x3240, 0x3280, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 10", 0x3280, 0x32c0 },
    { L"Extra Palette 11", 0x32c0, 0x3300 },
    { L"Extra Palette 12", 0x3300, 0x3340 },
    { L"Slashes (1+2/3)", 0x3340, 0x3380 },
    { L"Slashes (3/3) / Start of Portrait", 0x3380, 0x33c0 },
    { L"End of Portrait / Character Extra 5", 0x33c0, 0x3400 },
};

const sGame_PaletteDataset SAMSHO3_A_RIMURURU_PALETTES_S2[] =
{
    { L"Main", 0x3400, 0x3440, indexSamSho5Sprites_Rimururu },
    { L"Rage Flash", 0x3440, 0x3480, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 2", 0x3480, 0x34c0 },
    { L"Extra Palette 3", 0x34c0, 0x3500, indexSamSho5Sprites_Rimururu },
    { L"Shocked", 0x3500, 0x3540, indexSamSho5Sprites_Rimururu },
    { L"Frozen", 0x3540, 0x3580, indexSamSho5Sprites_Rimururu },
    { L"Burning", 0x3580, 0x35c0, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 7", 0x35c0, 0x3600 },
    { L"Daylight", 0x3600, 0x3640, indexSamSho5Sprites_Rimururu },
    { L"Moonlight", 0x3640, 0x3680, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 10", 0x3680, 0x36c0 },
    { L"Extra Palette 11", 0x36c0, 0x3700 },
    { L"Extra Palette 12", 0x3700, 0x3740 },
    { L"Slashes (1+2/3)", 0x3740, 0x3780 },
    { L"Slashes (3/3) / Start of Portrait", 0x3780, 0x37c0 },
    { L"End of Portrait / Character Extra 5", 0x37c0, 0x3800 },
};

const sGame_PaletteDataset SAMSHO3_A_RIMURURU_PALETTES_B1[] =
{
    { L"Main", 0x3800, 0x3840, indexSamSho5Sprites_Rimururu },
    { L"Rage Flash", 0x3840, 0x3880, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 2", 0x3880, 0x38c0 },
    { L"Extra Palette 3", 0x38c0, 0x3900, indexSamSho5Sprites_Rimururu },
    { L"Shocked", 0x3900, 0x3940, indexSamSho5Sprites_Rimururu },
    { L"Frozen", 0x3940, 0x3980, indexSamSho5Sprites_Rimururu },
    { L"Burning", 0x3980, 0x39c0, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 7", 0x39c0, 0x3a00 },
    { L"Daylight", 0x3a00, 0x3a40, indexSamSho5Sprites_Rimururu },
    { L"Moonlight", 0x3a40, 0x3a80, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 10", 0x3a80, 0x3ac0 },
    { L"Extra Palette 11", 0x3ac0, 0x3b00 },
    { L"Extra Palette 12", 0x3b00, 0x3b40 },
    { L"Slashes (1+2/3)", 0x3b40, 0x3b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x3b80, 0x3bc0 },
    { L"End of Portrait / Character Extra 5", 0x3bc0, 0x3c00 },
};

const sGame_PaletteDataset SAMSHO3_A_RIMURURU_PALETTES_B2[] =
{
    { L"Main", 0x3c00, 0x3c40, indexSamSho5Sprites_Rimururu },
    { L"Rage Flash", 0x3c40, 0x3c80, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 2", 0x3c80, 0x3cc0 },
    { L"Extra Palette 3", 0x3cc0, 0x3d00, indexSamSho5Sprites_Rimururu },
    { L"Shocked", 0x3d00, 0x3d40, indexSamSho5Sprites_Rimururu },
    { L"Frozen", 0x3d40, 0x3d80, indexSamSho5Sprites_Rimururu },
    { L"Burning", 0x3d80, 0x3dc0, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 7", 0x3dc0, 0x3e00 },
    { L"Daylight", 0x3e00, 0x3e40, indexSamSho5Sprites_Rimururu },
    { L"Moonlight", 0x3e40, 0x3e80, indexSamSho5Sprites_Rimururu },
    { L"Extra Palette 10", 0x3e80, 0x3ec0 },
    { L"Extra Palette 11", 0x3ec0, 0x3f00 },
    { L"Extra Palette 12", 0x3f00, 0x3f40 },
    { L"Slashes (1+2/3)", 0x3f40, 0x3f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x3f80, 0x3fc0 },
    { L"End of Portrait / Character Extra 5", 0x3fc0, 0x4000 },
};

const sGame_PaletteDataset SAMSHO3_A_HANZO_PALETTES_S1[] =
{
    { L"Main", 0x4000, 0x4040, indexSamSho3Sprites_Hanzo },
    { L"Rage Flash", 0x4040, 0x4080, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 2", 0x4080, 0x40c0 },
    { L"Extra Palette 3", 0x40c0, 0x4100, indexSamSho3Sprites_Hanzo },
    { L"Shocked", 0x4100, 0x4140, indexSamSho3Sprites_Hanzo },
    { L"Frozen", 0x4140, 0x4180, indexSamSho3Sprites_Hanzo },
    { L"Burning", 0x4180, 0x41c0, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 7", 0x41c0, 0x4200 },
    { L"Daylight", 0x4200, 0x4240, indexSamSho3Sprites_Hanzo },
    { L"Moonlight", 0x4240, 0x4280, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 10", 0x4280, 0x42c0 },
    { L"Extra Palette 11", 0x42c0, 0x4300 },
    { L"Extra Palette 12", 0x4300, 0x4340 },
    { L"Slashes (1+2/3)", 0x4340, 0x4380 },
    { L"Slashes (3/3) / Start of Portrait", 0x4380, 0x43c0 },
    { L"End of Portrait / Character Extra 5", 0x43c0, 0x4400 },
};

const sGame_PaletteDataset SAMSHO3_A_HANZO_PALETTES_S2[] =
{
    { L"Main", 0x4400, 0x4440, indexSamSho3Sprites_Hanzo },
    { L"Rage Flash", 0x4440, 0x4480, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 2", 0x4480, 0x44c0 },
    { L"Extra Palette 3", 0x44c0, 0x4500, indexSamSho3Sprites_Hanzo },
    { L"Shocked", 0x4500, 0x4540, indexSamSho3Sprites_Hanzo },
    { L"Frozen", 0x4540, 0x4580, indexSamSho3Sprites_Hanzo },
    { L"Burning", 0x4580, 0x45c0, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 7", 0x45c0, 0x4600 },
    { L"Daylight", 0x4600, 0x4640, indexSamSho3Sprites_Hanzo },
    { L"Moonlight", 0x4640, 0x4680, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 10", 0x4680, 0x46c0 },
    { L"Extra Palette 11", 0x46c0, 0x4700 },
    { L"Extra Palette 12", 0x4700, 0x4740 },
    { L"Slashes (1+2/3)", 0x4740, 0x4780 },
    { L"Slashes (3/3) / Start of Portrait", 0x4780, 0x47c0 },
    { L"End of Portrait / Character Extra 5", 0x47c0, 0x4800 },
};

const sGame_PaletteDataset SAMSHO3_A_HANZO_PALETTES_B1[] =
{
    { L"Main", 0x4800, 0x4840, indexSamSho3Sprites_Hanzo },
    { L"Rage Flash", 0x4840, 0x4880, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 2", 0x4880, 0x48c0 },
    { L"Extra Palette 3", 0x48c0, 0x4900, indexSamSho3Sprites_Hanzo },
    { L"Shocked", 0x4900, 0x4940, indexSamSho3Sprites_Hanzo },
    { L"Frozen", 0x4940, 0x4980, indexSamSho3Sprites_Hanzo },
    { L"Burning", 0x4980, 0x49c0, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 7", 0x49c0, 0x4a00 },
    { L"Daylight", 0x4a00, 0x4a40, indexSamSho3Sprites_Hanzo },
    { L"Moonlight", 0x4a40, 0x4a80, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 10", 0x4a80, 0x4ac0 },
    { L"Extra Palette 11", 0x4ac0, 0x4b00 },
    { L"Extra Palette 12", 0x4b00, 0x4b40 },
    { L"Slashes (1+2/3)", 0x4b40, 0x4b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x4b80, 0x4bc0 },
    { L"End of Portrait / Character Extra 5", 0x4bc0, 0x4c00 },
};

const sGame_PaletteDataset SAMSHO3_A_HANZO_PALETTES_B2[] =
{
    { L"Main", 0x4c00, 0x4c40, indexSamSho3Sprites_Hanzo },
    { L"Rage Flash", 0x4c40, 0x4c80, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 2", 0x4c80, 0x4cc0 },
    { L"Extra Palette 3", 0x4cc0, 0x4d00, indexSamSho3Sprites_Hanzo },
    { L"Shocked", 0x4d00, 0x4d40, indexSamSho3Sprites_Hanzo },
    { L"Frozen", 0x4d40, 0x4d80, indexSamSho3Sprites_Hanzo },
    { L"Burning", 0x4d80, 0x4dc0, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 7", 0x4dc0, 0x4e00 },
    { L"Daylight", 0x4e00, 0x4e40, indexSamSho3Sprites_Hanzo },
    { L"Moonlight", 0x4e40, 0x4e80, indexSamSho3Sprites_Hanzo },
    { L"Extra Palette 10", 0x4e80, 0x4ec0 },
    { L"Extra Palette 11", 0x4ec0, 0x4f00 },
    { L"Extra Palette 12", 0x4f00, 0x4f40 },
    { L"Slashes (1+2/3)", 0x4f40, 0x4f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x4f80, 0x4fc0 },
    { L"End of Portrait / Character Extra 5", 0x4fc0, 0x5000 },
};

const sGame_PaletteDataset SAMSHO3_A_GALFORD_PALETTES_S1[] =
{
    { L"Main",   0x5000, 0x5040, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Rage Flash", 0x5040, 0x5080, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Extra Palette 2", 0x5080, 0x50c0 },
    { L"Extra Palette 3", 0x50c0, 0x5100, indexSamSho5Sprites_Galford },
    { L"Shocked", 0x5100, 0x5140, indexSamSho5Sprites_Galford },
    { L"Frozen", 0x5140, 0x5180, indexSamSho5Sprites_Galford },
    { L"Burning", 0x5180, 0x51c0, indexSamSho5Sprites_Galford },
    { L"Extra Palette 7", 0x51c0, 0x5200 },
    { L"Daylight", 0x5200, 0x5240, indexSamSho5Sprites_Galford },
    { L"Moonlight", 0x5240, 0x5280, indexSamSho5Sprites_Galford },
    { L"Extra Palette 10: Poppy", 0x5280, 0x52c0, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 11: Poppy", 0x52c0, 0x5300, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 12: Poppy", 0x5300, 0x5340, indexSamSho5Sprites_Galford, 1 },
    { L"Slashes (1+2/3)", 0x5340, 0x5380 },
    { L"Slashes (3/3) / Start of Portrait", 0x5380, 0x53c0 },
    { L"End of Portrait / Character Extra 5", 0x53c0, 0x5400 },
};

const sGame_PaletteDataset SAMSHO3_A_GALFORD_PALETTES_S2[] =
{
    { L"Main", 0x5400, 0x5440, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Rage Flash", 0x5440, 0x5480, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Extra Palette 2", 0x5480, 0x54c0 },
    { L"Extra Palette 3", 0x54c0, 0x5500, indexSamSho5Sprites_Galford },
    { L"Shocked", 0x5500, 0x5540, indexSamSho5Sprites_Galford },
    { L"Frozen", 0x5540, 0x5580, indexSamSho5Sprites_Galford },
    { L"Burning", 0x5580, 0x55c0, indexSamSho5Sprites_Galford },
    { L"Extra Palette 7", 0x55c0, 0x5600 },
    { L"Daylight", 0x5600, 0x5640, indexSamSho5Sprites_Galford },
    { L"Moonlight", 0x5640, 0x5680, indexSamSho5Sprites_Galford },
    { L"Extra Palette 10: Poppy", 0x5680, 0x56c0, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 11: Poppy", 0x56c0, 0x5700, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 12: Poppy", 0x5700, 0x5740, indexSamSho5Sprites_Galford, 1 },
    { L"Slashes (1+2/3)", 0x5740, 0x5780 },
    { L"Slashes (3/3) / Start of Portrait", 0x5780, 0x57c0 },
    { L"End of Portrait / Character Extra 5", 0x57c0, 0x5800 },
};

const sGame_PaletteDataset SAMSHO3_A_GALFORD_PALETTES_B1[] =
{
    { L"Main", 0x5800, 0x5840, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Rage Flash", 0x5840, 0x5880, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Extra Palette 2", 0x5880, 0x58c0 },
    { L"Extra Palette 3", 0x58c0, 0x5900, indexSamSho5Sprites_Galford },
    { L"Shocked", 0x5900, 0x5940, indexSamSho5Sprites_Galford },
    { L"Frozen", 0x5940, 0x5980, indexSamSho5Sprites_Galford },
    { L"Burning", 0x5980, 0x59c0, indexSamSho5Sprites_Galford },
    { L"Extra Palette 7", 0x59c0, 0x5a00 },
    { L"Daylight", 0x5a00, 0x5a40, indexSamSho5Sprites_Galford },
    { L"Moonlight", 0x5a40, 0x5a80, indexSamSho5Sprites_Galford },
    { L"Extra Palette 10: Poppy", 0x5a80, 0x5ac0, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 11: Poppy", 0x5ac0, 0x5b00, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 12: Poppy", 0x5b00, 0x5b40, indexSamSho5Sprites_Galford, 1 },
    { L"Slashes (1+2/3)", 0x5b40, 0x5b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x5b80, 0x5bc0 },
    { L"End of Portrait / Character Extra 5", 0x5bc0, 0x5c00 },
};

const sGame_PaletteDataset SAMSHO3_A_GALFORD_PALETTES_B2[] =
{
    { L"Main", 0x5c00, 0x5c40, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Rage Flash", 0x5c40, 0x5c80, indexSamSho5Sprites_Galford, 0, &pairNext10 },
    { L"Extra Palette 2", 0x5c80, 0x5cc0 },
    { L"Extra Palette 3", 0x5cc0, 0x5d00, indexSamSho5Sprites_Galford },
    { L"Shocked", 0x5d00, 0x5d40, indexSamSho5Sprites_Galford },
    { L"Frozen", 0x5d40, 0x5d80, indexSamSho5Sprites_Galford },
    { L"Burning", 0x5d80, 0x5dc0, indexSamSho5Sprites_Galford },
    { L"Extra Palette 7", 0x5dc0, 0x5e00 },
    { L"Daylight", 0x5e00, 0x5e40, indexSamSho5Sprites_Galford },
    { L"Moonlight", 0x5e40, 0x5e80, indexSamSho5Sprites_Galford },
    { L"Extra Palette 10: Poppy", 0x5e80, 0x5ec0, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 11: Poppy", 0x5ec0, 0x5f00, indexSamSho5Sprites_Galford, 1 },
    { L"Extra Palette 12: Poppy", 0x5f00, 0x5f40, indexSamSho5Sprites_Galford, 1 },
    { L"Slashes (1+2/3)", 0x5f40, 0x5f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x5f80, 0x5fc0 },
    { L"End of Portrait / Character Extra 5", 0x5fc0, 0x6000 },
};

const sGame_PaletteDataset SAMSHO3_A_KYOSHIRO_PALETTES_S1[] =
{
    { L"Main", 0x6000, 0x6040, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Rage Flash", 0x6040, 0x6080, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Extra Palette 2", 0x6080, 0x60c0 },
    { L"Extra Palette 3", 0x60c0, 0x6100, indexSamSho5Sprites_Kyoshiro },
    { L"Shocked", 0x6100, 0x6140, indexSamSho5Sprites_Kyoshiro },
    { L"Frozen", 0x6140, 0x6180, indexSamSho5Sprites_Kyoshiro },
    { L"Burning", 0x6180, 0x61c0, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 7", 0x61c0, 0x6200 },
    { L"Daylight", 0x6200, 0x6240, indexSamSho5Sprites_Kyoshiro },
    { L"Moonlight", 0x6240, 0x6280, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 10: Toad", 0x6280, 0x62c0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 11: Toad", 0x62c0, 0x6300, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 12: Toad", 0x6300, 0x6340, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Slashes (1+2/3)", 0x6340, 0x6380 },
    { L"Slashes (3/3) / Start of Portrait", 0x6380, 0x63c0 },
    { L"End of Portrait / Character Extra 5", 0x63c0, 0x6400 },
};

const sGame_PaletteDataset SAMSHO3_A_KYOSHIRO_PALETTES_S2[] =
{
    { L"Main", 0x6400, 0x6440, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Rage Flash", 0x6440, 0x6480, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Extra Palette 2", 0x6480, 0x64c0 },
    { L"Extra Palette 3", 0x64c0, 0x6500, indexSamSho5Sprites_Kyoshiro },
    { L"Shocked", 0x6500, 0x6540, indexSamSho5Sprites_Kyoshiro },
    { L"Frozen", 0x6540, 0x6580, indexSamSho5Sprites_Kyoshiro },
    { L"Burning", 0x6580, 0x65c0, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 7", 0x65c0, 0x6600 },
    { L"Daylight", 0x6600, 0x6640, indexSamSho5Sprites_Kyoshiro },
    { L"Moonlight", 0x6640, 0x6680, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 10: Toad", 0x6680, 0x66c0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 11: Toad", 0x66c0, 0x6700, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 12: Toad", 0x6700, 0x6740, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Slashes (1+2/3)", 0x6740, 0x6780 },
    { L"Slashes (3/3) / Start of Portrait", 0x6780, 0x67c0 },
    { L"End of Portrait / Character Extra 5", 0x67c0, 0x6800 },
};

const sGame_PaletteDataset SAMSHO3_A_KYOSHIRO_PALETTES_B1[] =
{
    { L"Main", 0x6800, 0x6840, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Rage Flash", 0x6840, 0x6880, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Extra Palette 2", 0x6880, 0x68c0 },
    { L"Extra Palette 3", 0x68c0, 0x6900, indexSamSho5Sprites_Kyoshiro },
    { L"Shocked", 0x6900, 0x6940, indexSamSho5Sprites_Kyoshiro },
    { L"Frozen", 0x6940, 0x6980, indexSamSho5Sprites_Kyoshiro },
    { L"Burning", 0x6980, 0x69c0, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 7", 0x69c0, 0x6a00 },
    { L"Daylight", 0x6a00, 0x6a40, indexSamSho5Sprites_Kyoshiro },
    { L"Moonlight", 0x6a40, 0x6a80, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 10: Toad", 0x6a80, 0x6ac0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 11: Toad", 0x6ac0, 0x6b00, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 12: Toad", 0x6b00, 0x6b40, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Slashes (1+2/3)", 0x6b40, 0x6b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x6b80, 0x6bc0 },
    { L"End of Portrait / Character Extra 5", 0x6bc0, 0x6c00 },
};

const sGame_PaletteDataset SAMSHO3_A_KYOSHIRO_PALETTES_B2[] =
{
    { L"Main", 0x6c00, 0x6c40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Rage Flash", 0x6c40, 0x6c80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext10 },
    { L"Extra Palette 2", 0x6c80, 0x6cc0 },
    { L"Extra Palette 3", 0x6cc0, 0x6d00, indexSamSho5Sprites_Kyoshiro },
    { L"Shocked", 0x6d00, 0x6d40, indexSamSho5Sprites_Kyoshiro },
    { L"Frozen", 0x6d40, 0x6d80, indexSamSho5Sprites_Kyoshiro },
    { L"Burning", 0x6d80, 0x6dc0, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 7", 0x6dc0, 0x6e00 },
    { L"Daylight", 0x6e00, 0x6e40, indexSamSho5Sprites_Kyoshiro },
    { L"Moonlight", 0x6e40, 0x6e80, indexSamSho5Sprites_Kyoshiro },
    { L"Extra Palette 10: Toad", 0x6e80, 0x6ec0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 11: Toad", 0x6ec0, 0x6f00, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Extra Palette 12: Toad", 0x6f00, 0x6f40, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Slashes (1+2/3)", 0x6f40, 0x6f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x6f80, 0x6fc0 },
    { L"End of Portrait / Character Extra 5", 0x6fc0, 0x7000 },
};

const sGame_PaletteDataset SAMSHO3_A_UKYO_PALETTES_S1[] =
{
    { L"Main", 0x7000, 0x7040, indexSamSho3Sprites_Ukyo },
    { L"Rage Flash", 0x7040, 0x7080, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 2", 0x7080, 0x70c0 },
    { L"Extra Palette 3", 0x70c0, 0x7100, indexSamSho3Sprites_Ukyo },
    { L"Shocked", 0x7100, 0x7140, indexSamSho3Sprites_Ukyo },
    { L"Frozen", 0x7140, 0x7180, indexSamSho3Sprites_Ukyo },
    { L"Burning", 0x7180, 0x71c0, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 7", 0x71c0, 0x7200 },
    { L"Daylight", 0x7200, 0x7240, indexSamSho3Sprites_Ukyo },
    { L"Moonlight", 0x7240, 0x7280, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 10", 0x7280, 0x72c0 },
    { L"Extra Palette 11", 0x72c0, 0x7300 },
    { L"Extra Palette 12", 0x7300, 0x7340 },
    { L"Slashes (1+2/3)", 0x7340, 0x7380 },
    { L"Slashes (3/3) / Start of Portrait", 0x7380, 0x73c0 },
    { L"End of Portrait / Character Extra 5", 0x73c0, 0x7400 },
};

const sGame_PaletteDataset SAMSHO3_A_UKYO_PALETTES_S2[] =
{
    { L"Main", 0x7400, 0x7440, indexSamSho3Sprites_Ukyo },
    { L"Rage Flash", 0x7440, 0x7480, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 2", 0x7480, 0x74c0 },
    { L"Extra Palette 3", 0x74c0, 0x7500, indexSamSho3Sprites_Ukyo },
    { L"Shocked", 0x7500, 0x7540, indexSamSho3Sprites_Ukyo },
    { L"Frozen", 0x7540, 0x7580, indexSamSho3Sprites_Ukyo },
    { L"Burning", 0x7580, 0x75c0, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 7", 0x75c0, 0x7600 },
    { L"Daylight", 0x7600, 0x7640, indexSamSho3Sprites_Ukyo },
    { L"Moonlight", 0x7640, 0x7680, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 10", 0x7680, 0x76c0 },
    { L"Extra Palette 11", 0x76c0, 0x7700 },
    { L"Extra Palette 12", 0x7700, 0x7740 },
    { L"Slashes (1+2/3)", 0x7740, 0x7780 },
    { L"Slashes (3/3) / Start of Portrait", 0x7780, 0x77c0 },
    { L"End of Portrait / Character Extra 5", 0x77c0, 0x7800 },
};

const sGame_PaletteDataset SAMSHO3_A_UKYO_PALETTES_B1[] =
{
    { L"Main", 0x7800, 0x7840, indexSamSho3Sprites_Ukyo },
    { L"Rage Flash", 0x7840, 0x7880, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 2", 0x7880, 0x78c0 },
    { L"Extra Palette 3", 0x78c0, 0x7900, indexSamSho3Sprites_Ukyo },
    { L"Shocked", 0x7900, 0x7940, indexSamSho3Sprites_Ukyo },
    { L"Frozen", 0x7940, 0x7980, indexSamSho3Sprites_Ukyo },
    { L"Burning", 0x7980, 0x79c0, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 7", 0x79c0, 0x7a00 },
    { L"Daylight", 0x7a00, 0x7a40, indexSamSho3Sprites_Ukyo },
    { L"Moonlight", 0x7a40, 0x7a80, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 10", 0x7a80, 0x7ac0 },
    { L"Extra Palette 11", 0x7ac0, 0x7b00 },
    { L"Extra Palette 12", 0x7b00, 0x7b40 },
    { L"Slashes (1+2/3)", 0x7b40, 0x7b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x7b80, 0x7bc0 },
    { L"End of Portrait / Character Extra 5", 0x7bc0, 0x7c00 },
};

const sGame_PaletteDataset SAMSHO3_A_UKYO_PALETTES_B2[] =
{
    { L"Main", 0x7c00, 0x7c40, indexSamSho3Sprites_Ukyo },
    { L"Rage Flash", 0x7c40, 0x7c80, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 2", 0x7c80, 0x7cc0 },
    { L"Extra Palette 3", 0x7cc0, 0x7d00, indexSamSho3Sprites_Ukyo },
    { L"Shocked", 0x7d00, 0x7d40, indexSamSho3Sprites_Ukyo },
    { L"Frozen", 0x7d40, 0x7d80, indexSamSho3Sprites_Ukyo },
    { L"Burning", 0x7d80, 0x7dc0, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 7", 0x7dc0, 0x7e00 },
    { L"Daylight", 0x7e00, 0x7e40, indexSamSho3Sprites_Ukyo },
    { L"Moonlight", 0x7e40, 0x7e80, indexSamSho3Sprites_Ukyo },
    { L"Extra Palette 10", 0x7e80, 0x7ec0 },
    { L"Extra Palette 11", 0x7ec0, 0x7f00 },
    { L"Extra Palette 12", 0x7f00, 0x7f40 },
    { L"Slashes (1+2/3)", 0x7f40, 0x7f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x7f80, 0x7fc0 },
    { L"End of Portrait / Character Extra 5", 0x7fc0, 0x8000 },
};

const sGame_PaletteDataset SAMSHO3_A_GENJURO_PALETTES_S1[] =
{
    { L"Main", 0x8000, 0x8040, indexSamSho3Sprites_Genjuro },
    { L"Rage Flash", 0x8040, 0x8080, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 2", 0x8080, 0x80c0 },
    { L"Extra Palette 3", 0x80c0, 0x8100, indexSamSho3Sprites_Genjuro },
    { L"Shocked", 0x8100, 0x8140, indexSamSho3Sprites_Genjuro },
    { L"Frozen", 0x8140, 0x8180, indexSamSho3Sprites_Genjuro },
    { L"Burning", 0x8180, 0x81c0, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 7", 0x81c0, 0x8200 },
    { L"Daylight", 0x8200, 0x8240, indexSamSho3Sprites_Genjuro },
    { L"Moonlight", 0x8240, 0x8280, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 10", 0x8280, 0x82c0 },
    { L"Extra Palette 11", 0x82c0, 0x8300 },
    { L"Extra Palette 12", 0x8300, 0x8340 },
    { L"Slashes (1+2/3)", 0x8340, 0x8380 },
    { L"Slashes (3/3) / Start of Portrait", 0x8380, 0x83c0 },
    { L"End of Portrait / Character Extra 5", 0x83c0, 0x8400 },
};

const sGame_PaletteDataset SAMSHO3_A_GENJURO_PALETTES_S2[] =
{
    { L"Main", 0x8400, 0x8440, indexSamSho3Sprites_Genjuro },
    { L"Rage Flash", 0x8440, 0x8480, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 2", 0x8480, 0x84c0 },
    { L"Extra Palette 3", 0x84c0, 0x8500, indexSamSho3Sprites_Genjuro },
    { L"Shocked", 0x8500, 0x8540, indexSamSho3Sprites_Genjuro },
    { L"Frozen", 0x8540, 0x8580, indexSamSho3Sprites_Genjuro },
    { L"Burning", 0x8580, 0x85c0, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 7", 0x85c0, 0x8600 },
    { L"Daylight", 0x8600, 0x8640, indexSamSho3Sprites_Genjuro },
    { L"Moonlight", 0x8640, 0x8680, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 10", 0x8680, 0x86c0 },
    { L"Extra Palette 11", 0x86c0, 0x8700 },
    { L"Extra Palette 12", 0x8700, 0x8740 },
    { L"Slashes (1+2/3)", 0x8740, 0x8780 },
    { L"Slashes (3/3) / Start of Portrait", 0x8780, 0x87c0 },
    { L"End of Portrait / Character Extra 5", 0x87c0, 0x8800 },
};

const sGame_PaletteDataset SAMSHO3_A_GENJURO_PALETTES_B1[] =
{
    { L"Main", 0x8800, 0x8840, indexSamSho3Sprites_Genjuro },
    { L"Rage Flash", 0x8840, 0x8880, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 2", 0x8880, 0x88c0 },
    { L"Extra Palette 3", 0x88c0, 0x8900, indexSamSho3Sprites_Genjuro },
    { L"Shocked", 0x8900, 0x8940, indexSamSho3Sprites_Genjuro },
    { L"Frozen", 0x8940, 0x8980, indexSamSho3Sprites_Genjuro },
    { L"Burning", 0x8980, 0x89c0, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 7", 0x89c0, 0x8a00 },
    { L"Daylight", 0x8a00, 0x8a40, indexSamSho3Sprites_Genjuro },
    { L"Moonlight", 0x8a40, 0x8a80, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 10", 0x8a80, 0x8ac0 },
    { L"Extra Palette 11", 0x8ac0, 0x8b00 },
    { L"Extra Palette 12", 0x8b00, 0x8b40 },
    { L"Slashes (1+2/3)", 0x8b40, 0x8b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x8b80, 0x8bc0 },
    { L"End of Portrait / Character Extra 5", 0x8bc0, 0x8c00 },
};

const sGame_PaletteDataset SAMSHO3_A_GENJURO_PALETTES_B2[] =
{
    { L"Main", 0x8c00, 0x8c40, indexSamSho3Sprites_Genjuro },
    { L"Rage Flash", 0x8c40, 0x8c80, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 2", 0x8c80, 0x8cc0 },
    { L"Extra Palette 3", 0x8cc0, 0x8d00, indexSamSho3Sprites_Genjuro },
    { L"Shocked", 0x8d00, 0x8d40, indexSamSho3Sprites_Genjuro },
    { L"Frozen", 0x8d40, 0x8d80, indexSamSho3Sprites_Genjuro },
    { L"Burning", 0x8d80, 0x8dc0, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 7", 0x8dc0, 0x8e00 },
    { L"Daylight", 0x8e00, 0x8e40, indexSamSho3Sprites_Genjuro },
    { L"Moonlight", 0x8e40, 0x8e80, indexSamSho3Sprites_Genjuro },
    { L"Extra Palette 10", 0x8e80, 0x8ec0 },
    { L"Extra Palette 11", 0x8ec0, 0x8f00 },
    { L"Extra Palette 12", 0x8f00, 0x8f40 },
    { L"Slashes (1+2/3)", 0x8f40, 0x8f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x8f80, 0x8fc0 },
    { L"End of Portrait / Character Extra 5", 0x8fc0, 0x9000 },
};

const sGame_PaletteDataset SAMSHO3_A_BASARA_PALETTES_S1[] =
{
    { L"Main", 0x9000, 0x9040, indexSamSho3Sprites_Basara },
    { L"Rage Flash", 0x9040, 0x9080, indexSamSho3Sprites_Basara },
    { L"Extra Palette 2", 0x9080, 0x90c0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 3", 0x90c0, 0x9100, indexSamSho3Sprites_Basara },
    { L"Shocked", 0x9100, 0x9140, indexSamSho3Sprites_Basara },
    { L"Frozen", 0x9140, 0x9180, indexSamSho3Sprites_Basara },
    { L"Burning", 0x9180, 0x91c0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 7", 0x91c0, 0x9200 },
    { L"Daylight", 0x9200, 0x9240, indexSamSho3Sprites_Basara },
    { L"Moonlight", 0x9240, 0x9280, indexSamSho3Sprites_Basara },
    { L"Extra Palette 10", 0x9280, 0x92c0 },
    { L"Extra Palette 11", 0x92c0, 0x9300 },
    { L"Extra Palette 12", 0x9300, 0x9340 },
    { L"Slashes (1+2/3)", 0x9340, 0x9380 },
    { L"Slashes (3/3) / Start of Portrait", 0x9380, 0x93c0 },
    { L"End of Portrait / Character Extra 5", 0x93c0, 0x9400 },
};

const sGame_PaletteDataset SAMSHO3_A_BASARA_PALETTES_S2[] =
{
    { L"Main", 0x9400, 0x9440, indexSamSho3Sprites_Basara },
    { L"Rage Flash", 0x9440, 0x9480, indexSamSho3Sprites_Basara },
    { L"Extra Palette 2", 0x9480, 0x94c0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 3", 0x94c0, 0x9500, indexSamSho3Sprites_Basara },
    { L"Shocked", 0x9500, 0x9540, indexSamSho3Sprites_Basara },
    { L"Frozen", 0x9540, 0x9580, indexSamSho3Sprites_Basara },
    { L"Burning", 0x9580, 0x95c0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 7", 0x95c0, 0x9600 },
    { L"Daylight", 0x9600, 0x9640, indexSamSho3Sprites_Basara },
    { L"Moonlight", 0x9640, 0x9680, indexSamSho3Sprites_Basara },
    { L"Extra Palette 10", 0x9680, 0x96c0 },
    { L"Extra Palette 11", 0x96c0, 0x9700 },
    { L"Extra Palette 12", 0x9700, 0x9740 },
    { L"Slashes (1+2/3)", 0x9740, 0x9780 },
    { L"Slashes (3/3) / Start of Portrait", 0x9780, 0x97c0 },
    { L"End of Portrait / Character Extra 5", 0x97c0, 0x9800 },
};

const sGame_PaletteDataset SAMSHO3_A_BASARA_PALETTES_B1[] =
{
    { L"Main", 0x9800, 0x9840, indexSamSho3Sprites_Basara },
    { L"Rage Flash", 0x9840, 0x9880, indexSamSho3Sprites_Basara },
    { L"Extra Palette 2", 0x9880, 0x98c0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 3", 0x98c0, 0x9900, indexSamSho3Sprites_Basara },
    { L"Shocked", 0x9900, 0x9940, indexSamSho3Sprites_Basara },
    { L"Frozen", 0x9940, 0x9980, indexSamSho3Sprites_Basara },
    { L"Burning", 0x9980, 0x99c0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 7", 0x99c0, 0x9a00 },
    { L"Daylight", 0x9a00, 0x9a40, indexSamSho3Sprites_Basara },
    { L"Moonlight", 0x9a40, 0x9a80, indexSamSho3Sprites_Basara },
    { L"Extra Palette 10", 0x9a80, 0x9ac0 },
    { L"Extra Palette 11", 0x9ac0, 0x9b00 },
    { L"Extra Palette 12", 0x9b00, 0x9b40 },
    { L"Slashes (1+2/3)", 0x9b40, 0x9b80 },
    { L"Slashes (3/3) / Start of Portrait", 0x9b80, 0x9bc0 },
    { L"End of Portrait / Character Extra 5", 0x9bc0, 0x9c00 },
};

const sGame_PaletteDataset SAMSHO3_A_BASARA_PALETTES_B2[] =
{
    { L"Main", 0x9c00, 0x9c40, indexSamSho3Sprites_Basara },
    { L"Rage Flash", 0x9c40, 0x9c80, indexSamSho3Sprites_Basara },
    { L"Extra Palette 2", 0x9c80, 0x9cc0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 3", 0x9cc0, 0x9d00, indexSamSho3Sprites_Basara },
    { L"Shocked", 0x9d00, 0x9d40, indexSamSho3Sprites_Basara },
    { L"Frozen", 0x9d40, 0x9d80, indexSamSho3Sprites_Basara },
    { L"Burning", 0x9d80, 0x9dc0, indexSamSho3Sprites_Basara },
    { L"Extra Palette 7", 0x9dc0, 0x9e00 },
    { L"Daylight", 0x9e00, 0x9e40, indexSamSho3Sprites_Basara },
    { L"Moonlight", 0x9e40, 0x9e80, indexSamSho3Sprites_Basara },
    { L"Extra Palette 10", 0x9e80, 0x9ec0 },
    { L"Extra Palette 11", 0x9ec0, 0x9f00 },
    { L"Extra Palette 12", 0x9f00, 0x9f40 },
    { L"Slashes (1+2/3)", 0x9f40, 0x9f80 },
    { L"Slashes (3/3) / Start of Portrait", 0x9f80, 0x9fc0 },
    { L"End of Portrait / Character Extra 5", 0x9fc0, 0xa000 },
};

const sGame_PaletteDataset SAMSHO3_A_SHIZUMARU_PALETTES_S1[] =
{
    { L"Main", 0xa000, 0xa040, indexSamSho5Sprites_Shizumaru },
    { L"Rage Flash", 0xa040, 0xa080, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 2", 0xa080, 0xa0c0 },
    { L"Extra Palette 3", 0xa0c0, 0xa100, indexSamSho5Sprites_Shizumaru },
    { L"Shocked", 0xa100, 0xa140, indexSamSho5Sprites_Shizumaru },
    { L"Frozen", 0xa140, 0xa180, indexSamSho5Sprites_Shizumaru },
    { L"Burning", 0xa180, 0xa1c0, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 7", 0xa1c0, 0xa200 },
    { L"Daylight", 0xa200, 0xa240, indexSamSho5Sprites_Shizumaru },
    { L"Moonlight", 0xa240, 0xa280, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 10", 0xa280, 0xa2c0 },
    { L"Extra Palette 11", 0xa2c0, 0xa300 },
    { L"Extra Palette 12", 0xa300, 0xa340 },
    { L"Slashes (1+2/3)", 0xa340, 0xa380 },
    { L"Slashes (3/3) / Start of Portrait", 0xa380, 0xa3c0 },
    { L"End of Portrait / Character Extra 5", 0xa3c0, 0xa400 },
};

const sGame_PaletteDataset SAMSHO3_A_SHIZUMARU_PALETTES_S2[] =
{
    { L"Main", 0xa400, 0xa440, indexSamSho5Sprites_Shizumaru },
    { L"Rage Flash", 0xa440, 0xa480, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 2", 0xa480, 0xa4c0 },
    { L"Extra Palette 3", 0xa4c0, 0xa500, indexSamSho5Sprites_Shizumaru },
    { L"Shocked", 0xa500, 0xa540, indexSamSho5Sprites_Shizumaru },
    { L"Frozen", 0xa540, 0xa580, indexSamSho5Sprites_Shizumaru },
    { L"Burning", 0xa580, 0xa5c0, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 7", 0xa5c0, 0xa600 },
    { L"Daylight", 0xa600, 0xa640, indexSamSho5Sprites_Shizumaru },
    { L"Moonlight", 0xa640, 0xa680, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 10", 0xa680, 0xa6c0 },
    { L"Extra Palette 11", 0xa6c0, 0xa700 },
    { L"Extra Palette 12", 0xa700, 0xa740 },
    { L"Slashes (1+2/3)", 0xa740, 0xa780 },
    { L"Slashes (3/3) / Start of Portrait", 0xa780, 0xa7c0 },
    { L"End of Portrait / Character Extra 5", 0xa7c0, 0xa800 },
};

const sGame_PaletteDataset SAMSHO3_A_SHIZUMARU_PALETTES_B1[] =
{
    { L"Main", 0xa800, 0xa840, indexSamSho5Sprites_Shizumaru },
    { L"Rage Flash", 0xa840, 0xa880, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 2", 0xa880, 0xa8c0 },
    { L"Extra Palette 3", 0xa8c0, 0xa900, indexSamSho5Sprites_Shizumaru },
    { L"Shocked", 0xa900, 0xa940, indexSamSho5Sprites_Shizumaru },
    { L"Frozen", 0xa940, 0xa980, indexSamSho5Sprites_Shizumaru },
    { L"Burning", 0xa980, 0xa9c0, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 7", 0xa9c0, 0xaa00 },
    { L"Daylight", 0xaa00, 0xaa40, indexSamSho5Sprites_Shizumaru },
    { L"Moonlight", 0xaa40, 0xaa80, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 10", 0xaa80, 0xaac0 },
    { L"Extra Palette 11", 0xaac0, 0xab00 },
    { L"Extra Palette 12", 0xab00, 0xab40 },
    { L"Slashes (1+2/3)", 0xab40, 0xab80 },
    { L"Slashes (3/3) / Start of Portrait", 0xab80, 0xabc0 },
    { L"End of Portrait / Character Extra 5", 0xabc0, 0xac00 },
};

const sGame_PaletteDataset SAMSHO3_A_SHIZUMARU_PALETTES_B2[] =
{
    { L"Main", 0xac00, 0xac40, indexSamSho5Sprites_Shizumaru },
    { L"Rage Flash", 0xac40, 0xac80, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 2", 0xac80, 0xacc0 },
    { L"Extra Palette 3", 0xacc0, 0xad00, indexSamSho5Sprites_Shizumaru },
    { L"Shocked", 0xad00, 0xad40, indexSamSho5Sprites_Shizumaru },
    { L"Frozen", 0xad40, 0xad80, indexSamSho5Sprites_Shizumaru },
    { L"Burning", 0xad80, 0xadc0, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 7", 0xadc0, 0xae00 },
    { L"Daylight", 0xae00, 0xae40, indexSamSho5Sprites_Shizumaru },
    { L"Moonlight", 0xae40, 0xae80, indexSamSho5Sprites_Shizumaru },
    { L"Extra Palette 10", 0xae80, 0xaec0 },
    { L"Extra Palette 11", 0xaec0, 0xaf00 },
    { L"Extra Palette 12", 0xaf00, 0xaf40 },
    { L"Slashes (1+2/3)", 0xaf40, 0xaf80 },
    { L"Slashes (3/3) / Start of Portrait", 0xaf80, 0xafc0 },
    { L"End of Portrait / Character Extra 5", 0xafc0, 0xb000 },
};

const sGame_PaletteDataset SAMSHO3_A_GAIRA_PALETTES_S1[] =
{
    { L"Main", 0xb000, 0xb040, indexSamSho5Sprites_Gaira },
    { L"Rage Flash", 0xb040, 0xb080, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 2", 0xb080, 0xb0c0 },
    { L"Extra Palette 3", 0xb0c0, 0xb100, indexSamSho5Sprites_Gaira },
    { L"Shocked", 0xb100, 0xb140, indexSamSho5Sprites_Gaira },
    { L"Frozen", 0xb140, 0xb180, indexSamSho5Sprites_Gaira },
    { L"Burning", 0xb180, 0xb1c0, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 7", 0xb1c0, 0xb200 },
    { L"Daylight", 0xb200, 0xb240, indexSamSho5Sprites_Gaira },
    { L"Moonlight", 0xb240, 0xb280, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 10", 0xb280, 0xb2c0 },
    { L"Extra Palette 11", 0xb2c0, 0xb300 },
    { L"Extra Palette 12", 0xb300, 0xb340 },
    { L"Slashes (1+2/3)", 0xb340, 0xb380 },
    { L"Slashes (3/3) / Start of Portrait", 0xb380, 0xb3c0 },
    { L"End of Portrait / Character Extra 5", 0xb3c0, 0xb400 },
};

const sGame_PaletteDataset SAMSHO3_A_GAIRA_PALETTES_S2[] =
{
    { L"Main", 0xb400, 0xb440, indexSamSho5Sprites_Gaira },
    { L"Rage Flash", 0xb440, 0xb480, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 2", 0xb480, 0xb4c0 },
    { L"Extra Palette 3", 0xb4c0, 0xb500, indexSamSho5Sprites_Gaira },
    { L"Shocked", 0xb500, 0xb540, indexSamSho5Sprites_Gaira },
    { L"Frozen", 0xb540, 0xb580, indexSamSho5Sprites_Gaira },
    { L"Burning", 0xb580, 0xb5c0, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 7", 0xb5c0, 0xb600 },
    { L"Daylight", 0xb600, 0xb640, indexSamSho5Sprites_Gaira },
    { L"Moonlight", 0xb640, 0xb680, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 10", 0xb680, 0xb6c0 },
    { L"Extra Palette 11", 0xb6c0, 0xb700 },
    { L"Extra Palette 12", 0xb700, 0xb740 },
    { L"Slashes (1+2/3)", 0xb740, 0xb780 },
    { L"Slashes (3/3) / Start of Portrait", 0xb780, 0xb7c0 },
    { L"End of Portrait / Character Extra 5", 0xb7c0, 0xb800 },
};

const sGame_PaletteDataset SAMSHO3_A_GAIRA_PALETTES_B1[] =
{
    { L"Main", 0xb800, 0xb840, indexSamSho5Sprites_Gaira },
    { L"Rage Flash", 0xb840, 0xb880, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 2", 0xb880, 0xb8c0 },
    { L"Extra Palette 3", 0xb8c0, 0xb900, indexSamSho5Sprites_Gaira },
    { L"Shocked", 0xb900, 0xb940, indexSamSho5Sprites_Gaira },
    { L"Frozen", 0xb940, 0xb980, indexSamSho5Sprites_Gaira },
    { L"Burning", 0xb980, 0xb9c0, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 7", 0xb9c0, 0xba00 },
    { L"Daylight", 0xba00, 0xba40, indexSamSho5Sprites_Gaira },
    { L"Moonlight", 0xba40, 0xba80, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 10", 0xba80, 0xbac0 },
    { L"Extra Palette 11", 0xbac0, 0xbb00 },
    { L"Extra Palette 12", 0xbb00, 0xbb40 },
    { L"Slashes (1+2/3)", 0xbb40, 0xbb80 },
    { L"Slashes (3/3) / Start of Portrait", 0xbb80, 0xbbc0 },
    { L"End of Portrait / Character Extra 5", 0xbbc0, 0xbc00 },
};

const sGame_PaletteDataset SAMSHO3_A_GAIRA_PALETTES_B2[] =
{
    { L"Main", 0xbc00, 0xbc40, indexSamSho5Sprites_Gaira },
    { L"Rage Flash", 0xbc40, 0xbc80, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 2", 0xbc80, 0xbcc0 },
    { L"Extra Palette 3", 0xbcc0, 0xbd00, indexSamSho5Sprites_Gaira },
    { L"Shocked", 0xbd00, 0xbd40, indexSamSho5Sprites_Gaira },
    { L"Frozen", 0xbd40, 0xbd80, indexSamSho5Sprites_Gaira },
    { L"Burning", 0xbd80, 0xbdc0, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 7", 0xbdc0, 0xbe00 },
    { L"Daylight", 0xbe00, 0xbe40, indexSamSho5Sprites_Gaira },
    { L"Moonlight", 0xbe40, 0xbe80, indexSamSho5Sprites_Gaira },
    { L"Extra Palette 10", 0xbe80, 0xbec0 },
    { L"Extra Palette 11", 0xbec0, 0xbf00 },
    { L"Extra Palette 12", 0xbf00, 0xbf40 },
    { L"Slashes (1+2/3)", 0xbf40, 0xbf80 },
    { L"Slashes (3/3) / Start of Portrait", 0xbf80, 0xbfc0 },
    { L"End of Portrait / Character Extra 5", 0xbfc0, 0xc000 },
};

const sGame_PaletteDataset SAMSHO3_A_AMAKUSA_PALETTES_S1[] =
{
    { L"Main", 0xc000, 0xc040, indexSamSho5Sprites_Amakusa },
    { L"Rage Flash", 0xc040, 0xc080, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 2", 0xc080, 0xc0c0 },
    { L"Extra Palette 3", 0xc0c0, 0xc100, indexSamSho5Sprites_Amakusa },
    { L"Shocked", 0xc100, 0xc140, indexSamSho5Sprites_Amakusa },
    { L"Frozen", 0xc140, 0xc180, indexSamSho5Sprites_Amakusa },
    { L"Burning", 0xc180, 0xc1c0, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 7", 0xc1c0, 0xc200 },
    { L"Daylight", 0xc200, 0xc240, indexSamSho5Sprites_Amakusa },
    { L"Moonlight", 0xc240, 0xc280, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 10", 0xc280, 0xc2c0 },
    { L"Extra Palette 11", 0xc2c0, 0xc300 },
    { L"Extra Palette 12", 0xc300, 0xc340 },
    { L"Slashes (1+2/3)", 0xc340, 0xc380 },
    { L"Slashes (3/3) / Start of Portrait", 0xc380, 0xc3c0 },
    { L"End of Portrait / Character Extra 5", 0xc3c0, 0xc400 },
};

const sGame_PaletteDataset SAMSHO3_A_AMAKUSA_PALETTES_S2[] =
{
    { L"Main", 0xc400, 0xc440, indexSamSho5Sprites_Amakusa },
    { L"Rage Flash", 0xc440, 0xc480, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 2", 0xc480, 0xc4c0 },
    { L"Extra Palette 3", 0xc4c0, 0xc500, indexSamSho5Sprites_Amakusa },
    { L"Shocked", 0xc500, 0xc540, indexSamSho5Sprites_Amakusa },
    { L"Frozen", 0xc540, 0xc580, indexSamSho5Sprites_Amakusa },
    { L"Burning", 0xc580, 0xc5c0, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 7", 0xc5c0, 0xc600 },
    { L"Daylight", 0xc600, 0xc640, indexSamSho5Sprites_Amakusa },
    { L"Moonlight", 0xc640, 0xc680, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 10", 0xc680, 0xc6c0 },
    { L"Extra Palette 11", 0xc6c0, 0xc700 },
    { L"Extra Palette 12", 0xc700, 0xc740 },
    { L"Slashes (1+2/3)", 0xc740, 0xc780 },
    { L"Slashes (3/3) / Start of Portrait", 0xc780, 0xc7c0 },
    { L"End of Portrait / Character Extra 5", 0xc7c0, 0xc800 },
};

const sGame_PaletteDataset SAMSHO3_A_AMAKUSA_PALETTES_B1[] =
{
    { L"Main", 0xc800, 0xc840, indexSamSho5Sprites_Amakusa },
    { L"Rage Flash", 0xc840, 0xc880, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 2", 0xc880, 0xc8c0 },
    { L"Extra Palette 3", 0xc8c0, 0xc900, indexSamSho5Sprites_Amakusa },
    { L"Shocked", 0xc900, 0xc940, indexSamSho5Sprites_Amakusa },
    { L"Frozen", 0xc940, 0xc980, indexSamSho5Sprites_Amakusa },
    { L"Burning", 0xc980, 0xc9c0, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 7", 0xc9c0, 0xca00 },
    { L"Daylight", 0xca00, 0xca40, indexSamSho5Sprites_Amakusa },
    { L"Moonlight", 0xca40, 0xca80, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 10", 0xca80, 0xcac0 },
    { L"Extra Palette 11", 0xcac0, 0xcb00 },
    { L"Extra Palette 12", 0xcb00, 0xcb40 },
    { L"Slashes (1+2/3)", 0xcb40, 0xcb80 },
    { L"Slashes (3/3) / Start of Portrait", 0xcb80, 0xcbc0 },
    { L"End of Portrait / Character Extra 5", 0xcbc0, 0xcc00 },
};

const sGame_PaletteDataset SAMSHO3_A_AMAKUSA_PALETTES_B2[] =
{
    { L"Main", 0xcc00, 0xcc40, indexSamSho5Sprites_Amakusa },
    { L"Rage Flash", 0xcc40, 0xcc80, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 2", 0xcc80, 0xccc0 },
    { L"Extra Palette 3", 0xccc0, 0xcd00, indexSamSho5Sprites_Amakusa },
    { L"Shocked", 0xcd00, 0xcd40, indexSamSho5Sprites_Amakusa },
    { L"Frozen", 0xcd40, 0xcd80, indexSamSho5Sprites_Amakusa },
    { L"Burning", 0xcd80, 0xcdc0, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 7", 0xcdc0, 0xce00 },
    { L"Daylight", 0xce00, 0xce40, indexSamSho5Sprites_Amakusa },
    { L"Moonlight", 0xce40, 0xce80, indexSamSho5Sprites_Amakusa },
    { L"Extra Palette 10", 0xce80, 0xcec0 },
    { L"Extra Palette 11", 0xcec0, 0xcf00 },
    { L"Extra Palette 12", 0xcf00, 0xcf40 },
    { L"Slashes (1+2/3)", 0xcf40, 0xcf80 },
    { L"Slashes (3/3) / Start of Portrait", 0xcf80, 0xcfc0 },
    { L"End of Portrait / Character Extra 5", 0xcfc0, 0xd000 },
};

const sGame_PaletteDataset SAMSHO3_A_ZANKURO_PALETTES_S1[] =
{
    { L"Main", 0xe000, 0xe040, indexSamSho5Sprites_Zankuro },
    { L"Rage Flash", 0xe040, 0xe080, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 2", 0xe080, 0xe0c0 },
    { L"Extra Palette 3", 0xe0c0, 0xe100, indexSamSho5Sprites_Zankuro },
    { L"Shocked", 0xe100, 0xe140, indexSamSho5Sprites_Zankuro },
    { L"Frozen", 0xe140, 0xe180, indexSamSho5Sprites_Zankuro },
    { L"Burning", 0xe180, 0xe1c0, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 7", 0xe1c0, 0xe200 },
    { L"Daylight", 0xe200, 0xe240, indexSamSho5Sprites_Zankuro },
    { L"Moonlight", 0xe240, 0xe280, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 10", 0xe280, 0xe2c0 },
    { L"Extra Palette 11", 0xe2c0, 0xe300 },
    { L"Extra Palette 12", 0xe300, 0xe340 },
    { L"Slashes (1+2/3)", 0xe340, 0xe380 },
    { L"Slashes (3/3) / Start of Portrait", 0xe380, 0xe3c0 },
    { L"End of Portrait / Character Extra 5", 0xe3c0, 0xe400 },
};

const sGame_PaletteDataset SAMSHO3_A_ZANKURO_PALETTES_S2[] =
{
    { L"Main", 0xe400, 0xe440, indexSamSho5Sprites_Zankuro },
    { L"Rage Flash", 0xe440, 0xe480, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 2", 0xe480, 0xe4c0 },
    { L"Extra Palette 3", 0xe4c0, 0xe500, indexSamSho5Sprites_Zankuro },
    { L"Shocked", 0xe500, 0xe540, indexSamSho5Sprites_Zankuro },
    { L"Frozen", 0xe540, 0xe580, indexSamSho5Sprites_Zankuro },
    { L"Burning", 0xe580, 0xe5c0, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 7", 0xe5c0, 0xe600 },
    { L"Daylight", 0xe600, 0xe640, indexSamSho5Sprites_Zankuro },
    { L"Moonlight", 0xe640, 0xe680, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 10", 0xe680, 0xe6c0 },
    { L"Extra Palette 11", 0xe6c0, 0xe700 },
    { L"Extra Palette 12", 0xe700, 0xe740 },
    { L"Slashes (1+2/3)", 0xe740, 0xe780 },
    { L"Slashes (3/3) / Start of Portrait", 0xe780, 0xe7c0 },
    { L"End of Portrait / Character Extra 5", 0xe7c0, 0xe800 },
};

const sGame_PaletteDataset SAMSHO3_A_ZANKURO_PALETTES_B1[] =
{
    { L"Main", 0xe800, 0xe840, indexSamSho5Sprites_Zankuro },
    { L"Rage Flash", 0xe840, 0xe880, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 2", 0xe880, 0xe8c0 },
    { L"Extra Palette 3", 0xe8c0, 0xe900, indexSamSho5Sprites_Zankuro },
    { L"Shocked", 0xe900, 0xe940, indexSamSho5Sprites_Zankuro },
    { L"Frozen", 0xe940, 0xe980, indexSamSho5Sprites_Zankuro },
    { L"Burning", 0xe980, 0xe9c0, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 7", 0xe9c0, 0xea00 },
    { L"Daylight", 0xea00, 0xea40, indexSamSho5Sprites_Zankuro },
    { L"Moonlight", 0xea40, 0xea80, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 10", 0xea80, 0xeac0 },
    { L"Extra Palette 11", 0xeac0, 0xeb00 },
    { L"Extra Palette 12", 0xeb00, 0xeb40 },
    { L"Slashes (1+2/3)", 0xeb40, 0xeb80 },
    { L"Slashes (3/3) / Start of Portrait", 0xeb80, 0xebc0 },
    { L"End of Portrait / Character Extra 5", 0xebc0, 0xec00 },
};

const sGame_PaletteDataset SAMSHO3_A_ZANKURO_PALETTES_B2[] =
{
    { L"Main", 0xec00, 0xec40, indexSamSho5Sprites_Zankuro },
    { L"Rage Flash", 0xec40, 0xec80, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 2", 0xec80, 0xecc0 },
    { L"Extra Palette 3", 0xecc0, 0xed00, indexSamSho5Sprites_Zankuro },
    { L"Shocked", 0xed00, 0xed40, indexSamSho5Sprites_Zankuro },
    { L"Frozen", 0xed40, 0xed80, indexSamSho5Sprites_Zankuro },
    { L"Burning", 0xed80, 0xedc0, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 7", 0xedc0, 0xee00 },
    { L"Daylight", 0xee00, 0xee40, indexSamSho5Sprites_Zankuro },
    { L"Moonlight", 0xee40, 0xee80, indexSamSho5Sprites_Zankuro },
    { L"Extra Palette 10", 0xee80, 0xeec0 },
    { L"Extra Palette 11", 0xeec0, 0xef00 },
    { L"Extra Palette 12", 0xef00, 0xef40 },
    { L"Slashes (1+2/3)", 0xef40, 0xef80 },
    { L"Slashes (3/3) / Start of Portrait", 0xef80, 0xefc0 },
    { L"End of Portrait / Character Extra 5", 0xefc0, 0xf000 },
};

const sDescTreeNode SAMSHO3_A_HAOHMARU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HAOHMARU_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_HAOHMARU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HAOHMARU_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_HAOHMARU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HAOHMARU_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_HAOHMARU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HAOHMARU_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_HAOHMARU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_NAKORURU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_NAKORURU_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_NAKORURU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_NAKORURU_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_NAKORURU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_NAKORURU_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_NAKORURU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_NAKORURU_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_NAKORURU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_RIMURURU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_RIMURURU_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_RIMURURU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_RIMURURU_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_RIMURURU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_RIMURURU_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_RIMURURU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_RIMURURU_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_RIMURURU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_HANZO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HANZO_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_HANZO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HANZO_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_HANZO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HANZO_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_HANZO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HANZO_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_HANZO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_GALFORD_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GALFORD_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_GALFORD_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GALFORD_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_GALFORD_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GALFORD_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_GALFORD_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GALFORD_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_GALFORD_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_KYOSHIRO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_KYOSHIRO_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_KYOSHIRO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_KYOSHIRO_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_KYOSHIRO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_KYOSHIRO_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_KYOSHIRO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_KYOSHIRO_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_KYOSHIRO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_UKYO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_UKYO_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_UKYO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_UKYO_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_UKYO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_UKYO_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_UKYO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_UKYO_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_UKYO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_GENJURO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GENJURO_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_GENJURO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GENJURO_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_GENJURO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GENJURO_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_GENJURO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GENJURO_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_GENJURO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_BASARA_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_BASARA_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_BASARA_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_BASARA_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_BASARA_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_BASARA_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_BASARA_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_BASARA_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_BASARA_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_SHIZUMARU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_SHIZUMARU_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_SHIZUMARU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_SHIZUMARU_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_SHIZUMARU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_SHIZUMARU_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_SHIZUMARU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_SHIZUMARU_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_SHIZUMARU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_GAIRA_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GAIRA_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_GAIRA_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GAIRA_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_GAIRA_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GAIRA_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_GAIRA_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GAIRA_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_GAIRA_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_AMAKUSA_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_AMAKUSA_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_AMAKUSA_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_AMAKUSA_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_AMAKUSA_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_AMAKUSA_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_AMAKUSA_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_AMAKUSA_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_AMAKUSA_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_ZANKURO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_ZANKURO_PALETTES_S1, ARRAYSIZE(SAMSHO3_A_ZANKURO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_ZANKURO_PALETTES_S2, ARRAYSIZE(SAMSHO3_A_ZANKURO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_ZANKURO_PALETTES_B1, ARRAYSIZE(SAMSHO3_A_ZANKURO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_ZANKURO_PALETTES_B2, ARRAYSIZE(SAMSHO3_A_ZANKURO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO3_A_UNITS[] =
{
    { L"Amakusa", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_AMAKUSA_COLLECTION, ARRAYSIZE(SAMSHO3_A_AMAKUSA_COLLECTION) },
    { L"Basara", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_BASARA_COLLECTION, ARRAYSIZE(SAMSHO3_A_BASARA_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GAIRA_COLLECTION, ARRAYSIZE(SAMSHO3_A_GAIRA_COLLECTION) },
    { L"Galford", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GALFORD_COLLECTION, ARRAYSIZE(SAMSHO3_A_GALFORD_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_GENJURO_COLLECTION, ARRAYSIZE(SAMSHO3_A_GENJURO_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HANZO_COLLECTION, ARRAYSIZE(SAMSHO3_A_HANZO_COLLECTION) },
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_HAOHMARU_COLLECTION, ARRAYSIZE(SAMSHO3_A_HAOHMARU_COLLECTION) },
    { L"Kyoshiro", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_KYOSHIRO_COLLECTION, ARRAYSIZE(SAMSHO3_A_KYOSHIRO_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_NAKORURU_COLLECTION, ARRAYSIZE(SAMSHO3_A_NAKORURU_COLLECTION) },
    { L"Rimururu", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_RIMURURU_COLLECTION, ARRAYSIZE(SAMSHO3_A_RIMURURU_COLLECTION) },
    { L"Shizumaru", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_SHIZUMARU_COLLECTION, ARRAYSIZE(SAMSHO3_A_SHIZUMARU_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_UKYO_COLLECTION, ARRAYSIZE(SAMSHO3_A_UKYO_COLLECTION) },
    { L"Zankuro", DESC_NODETYPE_TREE, (void*)SAMSHO3_A_ZANKURO_COLLECTION, ARRAYSIZE(SAMSHO3_A_ZANKURO_COLLECTION) },
};

constexpr auto SAMSHO3_A_NUMUNIT = ARRAYSIZE(SAMSHO3_A_UNITS);

#define SAMSHO3_A_EXTRALOC SAMSHO3_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAMSHO3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

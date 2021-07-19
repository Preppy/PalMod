#pragma once

const UINT16 SAMSHO4_A_IMGIDS_USED[] =
{
    indexSamSho5Sprites_Amakusa,    // 0
    indexSamSho5Sprites_Basara,     // 1
    indexSamSho5Sprites_Charlotte,  // 2
    indexSamSho5Sprites_Gaira,      // 4
    indexSamSho5Sprites_Galford,    // 5
    indexSamSho5Sprites_Genjuro,    // 7
    indexSamSho5Sprites_Hanzo,      // 8
    indexSamSho5Sprites_Haohmaru,   // 9
    indexSamSho5Sprites_Jubei,      // a
    indexSamSho5Sprites_Kazuki,     // b
    indexSamSho5Sprites_Kyoshiro,   // d
    indexSamSho5Sprites_Nakoruru,   // 10
    indexSamSho5Sprites_Rera,       // 12  not in the game: just want the shikuru sprite for nakoruru Bust form
    indexSamSho5Sprites_Rimururu,   // 13
    indexSamSho5Sprites_Shizumaru,  // 14
    indexSamSho5Sprites_Sogetsu,    // 15
    indexSamSho5Sprites_TamTam,     // 17
    indexSamSho5Sprites_Ukyo,       // 18
    indexSamSho5Sprites_Zankuro,    // 1b


    indexSamSho5Sprites_Portrait,
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_S1[] =
{
    { L"Haohmaru Slash A", 0x0c1000, 0x0c1040, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash Rage A", 0x0c1040, 0x0c1080, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash A Victory", 0x0c13a0, 0x0c13e0 },

    { L"Haohmaru Slash A (Burning)", 0xc10c0, 0xc1100, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash A (Shocked)", 0xc1100, 0xc1140, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash A (Frozen/Wet)", 0xc1140, 0xc1180, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash A (Ki)", 0xc1180, 0xc11c0, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash A (Issen Trail)", 0xc1200, 0xc1240, indexSamSho5Sprites_Haohmaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_S2[] =
{
    { L"Haohmaru Slash B", 0x0c1400, 0x0c1440, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash Rage B", 0x0c1440, 0x0c1480, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash B Victory", 0x0c17a0, 0x0c17e0 },

    { L"Haohmaru Slash B (Burning)", 0xc14c0, 0xc1500, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash B (Shocked)", 0xc1500, 0xc1540, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash B (Frozen/Wet)", 0xc1540, 0xc1580, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash B (Ki)", 0xc1580, 0xc15c0, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Slash B (Issen Trail)", 0xc1600, 0xc1640, indexSamSho5Sprites_Haohmaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_B1[] =
{
    { L"Haohmaru Bust A", 0x0c1800, 0x0c1840, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust Rage A", 0x0c1840, 0x0c1880, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust A Victory", 0x0c1ba0, 0x0c1be0 },

    { L"Haohmaru Bust A (Burning)", 0xc18c0, 0xc1900, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust A (Shocked)", 0xc1900, 0xc1940, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust A (Frozen/Wet)", 0xc1940, 0xc1980, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust A (Ki)", 0xc1980, 0xc19c0, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust A (Issen Trail)", 0xc1a00, 0xc1a40, indexSamSho5Sprites_Haohmaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_B2[] =
{
    { L"Haohmaru Bust B", 0x0c1c00, 0x0c1c40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust Rage B", 0x0c1c40, 0x0c1c80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust B Victory", 0x0c1fa0, 0x0c1fe0 },

    { L"Haohmaru Bust B (Burning)", 0xc1cc0, 0xc1d00, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust B (Shocked)", 0xc1d00, 0xc1d40, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust B (Frozen/Wet)", 0xc1d40, 0xc1d80, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust B (Ki)", 0xc1d80, 0xc1dc0, indexSamSho5Sprites_Haohmaru, 0x00 },
    { L"Haohmaru Bust B (Issen Trail)", 0xc1e00, 0xc1e40, indexSamSho5Sprites_Haohmaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_S1[] =
{
    { L"Nakoruru Slash A", 0x0c2000, 0x0c2040, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru Slash Rage A", 0x0c2040, 0x0c2080, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha A", 0x0c2280, 0x0c22a0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru Slash A Victory", 0x0c23a0, 0x0c23e0 },
    { L"Mamahaha Victory A", 0x0c23e0, 0x0c2400 },

    { L"Nakoruru Slash A (Burning)", 0xc20c0, 0xc2100, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash A (Shocked)", 0xc2100, 0xc2140, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash A (Frozen/Wet)", 0xc2140, 0xc2180, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash A (Ki)", 0xc2180, 0xc21c0, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash A (Issen Trail)", 0xc2200, 0xc2240, indexSamSho5Sprites_Nakoruru, 0x00 },

};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_S2[] =
{
    { L"Nakoruru Slash B", 0x0c2400, 0x0c2440, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru Slash Rage B", 0x0c2440, 0x0c2480, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha B", 0x0c2680, 0x0c26a0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru Slash B Victory", 0x0c27a0, 0x0c27e0 },
    { L"Mamahaha Victory B", 0x0c27e0, 0x0c2800 },

    { L"Nakoruru Slash B (Burning)", 0xc24c0, 0xc2500, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash B (Shocked)", 0xc2500, 0xc2540, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash B (Frozen/Wet)", 0xc2540, 0xc2580, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash B (Ki)", 0xc2580, 0xc25c0, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Slash B (Issen Trail)", 0xc2600, 0xc2640, indexSamSho5Sprites_Nakoruru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_B1[] =
{
    { L"Nakoruru Bust A", 0x0c2800, 0x0c2840, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Nakoruru Bust A Rage", 0x0c2840, 0x0c2880, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Shikuru A", 0x0c2aa0, 0x0c2ac0, indexSamSho5Sprites_Rera, 1 },
    { L"Nakoruru Bust A Victory", 0x0c2ba0, 0x0c2be0 },
    { L"Shikuru Victory A", 0x0c2be0, 0x0c2c00 },

    { L"Nakoruru Bust A (Burning)", 0xc28c0, 0xc2900, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust A (Shocked)", 0xc2900, 0xc2940, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust A (Frozen/Wet)", 0xc2940, 0xc2980, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust A (Ki)", 0xc2980, 0xc29c0, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust A (Issen Trail)", 0xc2a00, 0xc2a40, indexSamSho5Sprites_Nakoruru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_B2[] =
{
    { L"Nakoruru Bust B", 0x0c2c00, 0x0c2c40, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Nakoruru Bust B Rage", 0x0c2c40, 0x0c2c80, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Shikuru B", 0x0c2ea0, 0x0c2ec0, indexSamSho5Sprites_Rera, 1 },
    { L"Nakoruru Bust B Victory", 0x0c2fa0, 0x0c2fe0 },
    { L"Shikuru Victory B", 0x0c2fe0, 0x0c3000 },

    { L"Nakoruru Bust B (Burning)", 0xc2cc0, 0xc2d00, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust B (Shocked)", 0xc2d00, 0xc2d40, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust B (Frozen/Wet)", 0xc2d40, 0xc2d80, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust B (Ki)", 0xc2d80, 0xc2dc0, indexSamSho5Sprites_Nakoruru, 0x00 },
    { L"Nakoruru Bust B (Issen Trail)", 0xc2e00, 0xc2e40, indexSamSho5Sprites_Nakoruru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_S1[] =
{
    { L"Rimururu Slash A", 0x0c3000, 0x0c3040, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Slash A Rage", 0x0c3040, 0x0c3080, indexSamSho5Sprites_Rimururu },
    { L"Konru Slash A", 0x0c32c0, 0x0c32e0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Slash A Victory", 0x0c33a0, 0x0c33e0 },

    { L"Rimururu Slash A (Burning)", 0xc30c0, 0xc3100, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash A (Shocked)", 0xc3100, 0xc3140, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash A (Frozen/Wet)", 0xc3140, 0xc3180, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash A (Ki)", 0xc3180, 0xc31c0, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash A (Issen Trail)", 0xc3200, 0xc3240, indexSamSho5Sprites_Rimururu, 0x00 },

};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_S2[] =
{
    { L"Rimururu Slash B", 0x0c3400, 0x0c3440, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Slash B Rage", 0x0c3440, 0x0c3480, indexSamSho5Sprites_Rimururu },
    { L"Konru Slash B", 0x0c36c0, 0x0c36e0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Slash B Victory", 0x0c37a0, 0x0c37e0 },

    { L"Rimururu Slash B (Burning)", 0xc34c0, 0xc3500, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash B (Shocked)", 0xc3500, 0xc3540, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash B (Frozen/Wet)", 0xc3540, 0xc3580, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash B (Ki)", 0xc3580, 0xc35c0, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Slash B (Issen Trail)", 0xc3600, 0xc3640, indexSamSho5Sprites_Rimururu, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_B1[] =
{
    { L"Rimururu Bust A", 0x0c3800, 0x0c3840, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Bust A Rage", 0x0c3840, 0x0c3880, indexSamSho5Sprites_Rimururu },
    { L"Konru Bust A", 0x0c3ac0, 0x0c3ae0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Bust A Victory", 0x0c3ba0, 0x0c3be0 },

    { L"Rimururu Bust A (Burning)", 0xc38c0, 0xc3900, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust A (Shocked)", 0xc3900, 0xc3940, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust A (Frozen/Wet)", 0xc3940, 0xc3980, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust A (Ki)", 0xc3980, 0xc39c0, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust A (Issen Trail)", 0xc3a00, 0xc3a40, indexSamSho5Sprites_Rimururu, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_B2[] =
{
    { L"Rimururu Bust B", 0x0c3c00, 0x0c3c40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Bust B Rage", 0x0c3c40, 0x0c3c80, indexSamSho5Sprites_Rimururu },
    { L"Konru Bust B", 0x0c3ec0, 0x0c3ee0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Bust B Victory", 0x0c3fa0, 0x0c3fe0 },

    { L"Rimururu Bust B (Burning)", 0xc3cc0, 0xc3d00, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust B (Shocked)", 0xc3d00, 0xc3d40, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust B (Frozen/Wet)", 0xc3d40, 0xc3d80, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust B (Ki)", 0xc3d80, 0xc3dc0, indexSamSho5Sprites_Rimururu, 0x00 },
    { L"Rimururu Bust B (Issen Trail)", 0xc3e00, 0xc3e40, indexSamSho5Sprites_Rimururu, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_S1[] =
{
    { L"Hanzo Slash A", 0x0c4000, 0x0c4040, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash A Rage", 0x0c4040, 0x0c4080, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash A Victory", 0x0c43c0, 0x0c43f0 },

    { L"Hanzo Slash A (Burning)", 0xc40c0, 0xc4100, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash A (Shocked)", 0xc4100, 0xc4140, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash A (Frozen/Wet)", 0xc4140, 0xc4180, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash A (Ki)", 0xc4180, 0xc41c0, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash A (Issen Trail)", 0xc4200, 0xc4240, indexSamSho5Sprites_Hanzo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_S2[] =
{
    { L"Hanzo Slash B", 0x0c4400, 0x0c4440, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash B Rage", 0x0c4440, 0x0c4480, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash B Victory", 0x0c47c0, 0x0c47f0 },

    { L"Hanzo Slash B (Burning)", 0xc44c0, 0xc4500, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash B (Shocked)", 0xc4500, 0xc4540, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash B (Frozen/Wet)", 0xc4540, 0xc4580, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash B (Ki)", 0xc4580, 0xc45c0, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Slash B (Issen Trail)", 0xc4600, 0xc4640, indexSamSho5Sprites_Hanzo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_B1[] =
{
    { L"Hanzo Bust A", 0x0c4800, 0x0c4840, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust A Rage", 0x0c4840, 0x0c4880, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust A Victory", 0x0c4bc0, 0x0c4bf0 },

    { L"Hanzo Bust A (Burning)", 0xc48c0, 0xc4900, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust A (Shocked)", 0xc4900, 0xc4940, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust A (Frozen/Wet)", 0xc4940, 0xc4980, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust A (Ki)", 0xc4980, 0xc49c0, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust A (Issen Trail)", 0xc4a00, 0xc4a40, indexSamSho5Sprites_Hanzo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_B2[] =
{
    { L"Hanzo Bust B", 0x0c4c00, 0x0c4c40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust B Rage", 0x0c4c40, 0x0c4c80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust B Victory", 0x0c4fc0, 0x0c4ff0 },

    { L"Hanzo Bust B (Burning)", 0xc4cc0, 0xc4d00, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust B (Shocked)", 0xc4d00, 0xc4d40, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust B (Frozen/Wet)", 0xc4d40, 0xc4d80, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust B (Ki)", 0xc4d80, 0xc4dc0, indexSamSho5Sprites_Hanzo, 0x00 },
    { L"Hanzo Bust B (Issen Trail)", 0xc4e00, 0xc4e40, indexSamSho5Sprites_Hanzo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_S1[] =
{
    { L"Galford Slash A", 0x0c5000, 0x0c5040, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Slash A Rage", 0x0c5040, 0x0c5080, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Slash A", 0x0c5280, 0x0c52a0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Slash A Victory", 0x0c53a0, 0x0c53e0 },
    { L"Poppy Slash A Victory", 0x0c53e0, 0x0c5400 },

    { L"Galford Slash A (Burning)", 0xc50c0, 0xc5100, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash A (Shocked)", 0xc5100, 0xc5140, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash A (Frozen/Wet)", 0xc5140, 0xc5180, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash A (Ki)", 0xc5180, 0xc51c0, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash A (Issen Trail)", 0xc5200, 0xc5240, indexSamSho5Sprites_Galford, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_S2[] =
{
    { L"Galford Slash B", 0x0c5400, 0x0c5440, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Slash B Rage", 0x0c5440, 0x0c5480, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Slash B", 0x0c5680, 0x0c56a0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Slash B Victory ", 0x0c57a0, 0x0c57e0 },
    { L"Poppy Slash B Victory", 0x0c57e0, 0x0c5800 },

    { L"Galford Slash B (Burning)", 0xc54c0, 0xc5500, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash B (Shocked)", 0xc5500, 0xc5540, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash B (Frozen/Wet)", 0xc5540, 0xc5580, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash B (Ki)", 0xc5580, 0xc55c0, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Slash B (Issen Trail)", 0xc5600, 0xc5640, indexSamSho5Sprites_Galford, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_B1[] =
{
    { L"Galford Bust A", 0x0c5800, 0x0c5840, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Bust A Rage", 0x0c5840, 0x0c5880, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Bust A", 0x0c5a80, 0x0c5aa0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Bust A Victory", 0x0c5ba0, 0x0c5be0 },

    { L"Galford Bust A (Burning)", 0xc58c0, 0xc5900, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust A (Shocked)", 0xc5900, 0xc5940, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust A (Frozen/Wet)", 0xc5940, 0xc5980, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust A (Ki)", 0xc5980, 0xc59c0, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust A (Issen Trail)", 0xc5a00, 0xc5a40, indexSamSho5Sprites_Galford, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_B2[] =
{
    { L"Galford Bust B", 0x0c5c00, 0x0c5c40, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Bust B Rage", 0x0c5c40, 0x0c5c80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Bust B", 0x0c5e80, 0x0c5ea0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Bust B Victory", 0x0c5fa0, 0x0c5fe0 },

    { L"Galford Bust B (Burning)", 0xc5cc0, 0xc5d00, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust B (Shocked)", 0xc5d00, 0xc5d40, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust B (Frozen/Wet)", 0xc5d40, 0xc5d80, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust B (Ki)", 0xc5d80, 0xc5dc0, indexSamSho5Sprites_Galford, 0x00 },
    { L"Galford Bust B (Issen Trail)", 0xc5e00, 0xc5e40, indexSamSho5Sprites_Galford, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_S1[] =
{
    { L"Kyoshiro Slash A", 0x0c6000, 0x0c6040, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro Slash A Rage", 0x0c6040, 0x0c6080, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Toad A", 0x0c6280, 0x0c62a0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro Slash A Victory", 0x0c63a0, 0x0c63e0 },

    { L"Kyoshiro Slash A (Burning)", 0xc60c0, 0xc6100, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash A (Shocked)", 0xc6100, 0xc6140, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash A (Frozen/Wet)", 0xc6140, 0xc6180, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash A (Ki)", 0xc6180, 0xc61c0, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash A (Issen Trail)", 0xc6200, 0xc6240, indexSamSho5Sprites_Kyoshiro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_S2[] =
{
    { L"Kyoshiro Slash B", 0x0c6400, 0x0c6440, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro Slash B Rage", 0x0c6440, 0x0c6480, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Toad B", 0x0c6680, 0x0c66a0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro Slash B Victory", 0x0c67a0, 0x0c67e0 },

    { L"Kyoshiro Slash B (Burning)", 0xc64c0, 0xc6500, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash B (Shocked)", 0xc6500, 0xc6540, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash B (Frozen/Wet)", 0xc6540, 0xc6580, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash B (Ki)", 0xc6580, 0xc65c0, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Slash B (Issen Trail)", 0xc6600, 0xc6640, indexSamSho5Sprites_Kyoshiro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_B1[] =
{
    { L"Kyoshiro Bust A", 0x0c6800, 0x0c6840, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust A Rage", 0x0c6840, 0x0c6880, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust A Victory", 0x0c6ba0, 0x0c6be0 },

    { L"Kyoshiro Bust A (Burning)", 0xc68c0, 0xc6900, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust A (Shocked)", 0xc6900, 0xc6940, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust A (Frozen/Wet)", 0xc6940, 0xc6980, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust A (Ki)", 0xc6980, 0xc69c0, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust A (Issen Trail)", 0xc6a00, 0xc6a40, indexSamSho5Sprites_Kyoshiro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_B2[] =
{
    { L"Kyoshiro Bust B", 0x0c6c00, 0x0c6c40, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust B Rage", 0x0c6c40, 0x0c6c80, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust B Victory", 0x0c6fa0, 0x0c6fe0 },

    { L"Kyoshiro Bust B (Burning)", 0xc6cc0, 0xc6d00, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust B (Shocked)", 0xc6d00, 0xc6d40, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust B (Frozen/Wet)", 0xc6d40, 0xc6d80, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust B (Ki)", 0xc6d80, 0xc6dc0, indexSamSho5Sprites_Kyoshiro, 0x00 },
    { L"Kyoshiro Bust B (Issen Trail)", 0xc6e00, 0xc6e40, indexSamSho5Sprites_Kyoshiro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_S1[] =
{
    { L"Ukyo Slash A", 0x0c7000, 0x0c7040, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash A Rage", 0x0c7040, 0x0c7080, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash A Victory", 0x0c73a0, 0x0c73e0 },

    { L"Ukyo Slash A (Burning)", 0xc70c0, 0xc7100, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash A (Shocked)", 0xc7100, 0xc7140, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash A (Frozen/Wet)", 0xc7140, 0xc7180, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash A (Ki)", 0xc7180, 0xc71c0, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash A (Issen Trail)", 0xc7200, 0xc7240, indexSamSho5Sprites_Ukyo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_S2[] =
{
    { L"Ukyo Slash B", 0x0c7400, 0x0c7440, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash B Rage", 0x0c7440, 0x0c7480, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash B Victory", 0x0c77a0, 0x0c77e0 },

    { L"Ukyo Slash B (Burning)", 0xc74c0, 0xc7500, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash B (Shocked)", 0xc7500, 0xc7540, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash B (Frozen/Wet)", 0xc7540, 0xc7580, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash B (Ki)", 0xc7580, 0xc75c0, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Slash B (Issen Trail)", 0xc7600, 0xc7640, indexSamSho5Sprites_Ukyo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_B1[] =
{
    { L"Ukyo Bust A", 0x0c7800, 0x0c7840, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust A Rage", 0x0c7840, 0x0c7880, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust A Victory", 0x0c7ba0, 0x0c7be0 },

    { L"Ukyo Bust A (Burning)", 0xc78c0, 0xc7900, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust A (Shocked)", 0xc7900, 0xc7940, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust A (Frozen/Wet)", 0xc7940, 0xc7980, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust A (Ki)", 0xc7980, 0xc79c0, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust A (Issen Trail)", 0xc7a00, 0xc7a40, indexSamSho5Sprites_Ukyo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_B2[] =
{
    { L"Ukyo Bust B", 0x0c7c00, 0x0c7c40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust B Rage", 0x0c7c40, 0x0c7c80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust B Victory", 0x0c7fa0, 0x0c7fe0 },

    { L"Ukyo Bust B (Burning)", 0xc7cc0, 0xc7d00, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust B (Shocked)", 0xc7d00, 0xc7d40, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust B (Frozen/Wet)", 0xc7d40, 0xc7d80, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust B (Ki)", 0xc7d80, 0xc7dc0, indexSamSho5Sprites_Ukyo, 0x00 },
    { L"Ukyo Bust B (Issen Trail)", 0xc7e00, 0xc7e40, indexSamSho5Sprites_Ukyo, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_S1[] =
{
    { L"Genjuro Slash A", 0x0c8000, 0x0c8040, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash A Rage", 0x0c8040, 0x0c8080, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash A Victory", 0x0c83a0, 0x0c83e0 },

    { L"Genjuro Slash A (Burning)", 0xc80c0, 0xc8100, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash A (Shocked)", 0xc8100, 0xc8140, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash A (Frozen/Wet)", 0xc8140, 0xc8180, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash A (Ki)", 0xc8180, 0xc81c0, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash A (Issen Trail)", 0xc8200, 0xc8240, indexSamSho5Sprites_Genjuro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_S2[] =
{
    { L"Genjuro Slash B", 0x0c8400, 0x0c8440, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash B Rage", 0x0c8440, 0x0c8480, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash B Victory", 0x0c87a0, 0x0c87e0 },

    { L"Genjuro Slash B (Burning)", 0xc84c0, 0xc8500, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash B (Shocked)", 0xc8500, 0xc8540, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash B (Frozen/Wet)", 0xc8540, 0xc8580, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash B (Ki)", 0xc8580, 0xc85c0, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Slash B (Issen Trail)", 0xc8600, 0xc8640, indexSamSho5Sprites_Genjuro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_B1[] =
{
    { L"Genjuro Bust A", 0x0c8800, 0x0c8840, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust A Rage", 0x0c8840, 0x0c8880, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust A Victory", 0x0c8ba0, 0x0c8be0 },

    { L"Genjuro Bust A (Burning)", 0xc88c0, 0xc8900, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust A (Shocked)", 0xc8900, 0xc8940, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust A (Frozen/Wet)", 0xc8940, 0xc8980, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust A (Ki)", 0xc8980, 0xc89c0, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust A (Issen Trail)", 0xc8a00, 0xc8a40, indexSamSho5Sprites_Genjuro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_B2[] =
{
    { L"Genjuro Bust B", 0x0c8c00, 0x0c8c40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust B Rage", 0x0c8c40, 0x0c8c80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust B Victory", 0x0c8fa0, 0x0c8fe0 },

    { L"Genjuro Bust B (Burning)", 0xc8cc0, 0xc8d00, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust B (Shocked)", 0xc8d00, 0xc8d40, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust B (Frozen/Wet)", 0xc8d40, 0xc8d80, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust B (Ki)", 0xc8d80, 0xc8dc0, indexSamSho5Sprites_Genjuro, 0x00 },
    { L"Genjuro Bust B (Issen Trail)", 0xc8e00, 0xc8e40, indexSamSho5Sprites_Genjuro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_S1[] =
{
    { L"Basara Slash A", 0x0c9000, 0x0c9040, indexSamSho5Sprites_Basara },
    { L"Basara Slash A Rage", 0x0c9040, 0x0c9080, indexSamSho5Sprites_Basara },
    { L"Basara Slash A Victory", 0x0c93a0, 0x0c93e0 },

    { L"Basara Slash A (Burning)", 0xc90c0, 0xc9100, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash A (Shocked)", 0xc9100, 0xc9140, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash A (Frozen/Wet)", 0xc9140, 0xc9180, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash A (Ki)", 0xc9180, 0xc91c0, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash A (Issen Trail)", 0xc9200, 0xc9240, indexSamSho5Sprites_Basara, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_S2[] =
{
    { L"Basara Slash B", 0x0c9400, 0x0c9440, indexSamSho5Sprites_Basara },
    { L"Basara Slash B Rage", 0x0c9440, 0x0c9480, indexSamSho5Sprites_Basara },
    { L"Basara Slash B Victory", 0x0c97a0, 0x0c97e0 },

    { L"Basara Slash B (Burning)", 0xc94c0, 0xc9500, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash B (Shocked)", 0xc9500, 0xc9540, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash B (Frozen/Wet)", 0xc9540, 0xc9580, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash B (Ki)", 0xc9580, 0xc95c0, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Slash B (Issen Trail)", 0xc9600, 0xc9640, indexSamSho5Sprites_Basara, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_B1[] =
{
    { L"Basara Bust A", 0x0c9800, 0x0c9840, indexSamSho5Sprites_Basara },
    { L"Basara Bust A Rage", 0x0c9840, 0x0c9880, indexSamSho5Sprites_Basara },
    { L"Basara Bust A Victory", 0x0c9ba0, 0x0c9be0 },

    { L"Basara Bust A (Burning)", 0xc98c0, 0xc9900, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust A (Shocked)", 0xc9900, 0xc9940, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust A (Frozen/Wet)", 0xc9940, 0xc9980, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust A (Ki)", 0xc9980, 0xc99c0, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust A (Issen Trail)", 0xc9a00, 0xc9a40, indexSamSho5Sprites_Basara, 0x00 },

};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_B2[] =
{
    { L"Basara Bust B", 0x0c9c00, 0x0c9c40, indexSamSho5Sprites_Basara },
    { L"Basara Bust B Rage", 0x0c9c40, 0x0c9c80, indexSamSho5Sprites_Basara },
    { L"Basara Bust B Victory", 0x0c9fa0, 0x0c9fe0 },

    { L"Basara Bust B (Burning)", 0xc9cc0, 0xc9d00, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust B (Shocked)", 0xc9d00, 0xc9d40, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust B (Frozen/Wet)", 0xc9d40, 0xc9d80, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust B (Ki)", 0xc9d80, 0xc9dc0, indexSamSho5Sprites_Basara, 0x00 },
    { L"Basara Bust B (Issen Trail)", 0xc9e00, 0xc9e40, indexSamSho5Sprites_Basara, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_S1[] =
{
    { L"Shizumaru Slash A", 0x0ca000, 0x0ca040, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash A Rage", 0x0ca040, 0x0ca080, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash A Victory", 0x0ca3a0, 0x0ca3e0 },

    { L"Shizumaru Slash A (Burning)", 0xca0c0, 0xca100, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash A (Shocked)", 0xca100, 0xca140, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash A (Frozen/Wet)", 0xca140, 0xca180, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash A (Ki)", 0xca180, 0xca1c0, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash A (Issen Trail)", 0xca200, 0xca240, indexSamSho5Sprites_Shizumaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_S2[] =
{
    { L"Shizumaru Slash B", 0x0ca400, 0x0ca440, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash B Rage", 0x0ca440, 0x0ca480, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash B Victory", 0x0ca7a0, 0x0ca7e0 },

    { L"Shizumaru Slash B (Burning)", 0xca4c0, 0xca500, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash B (Shocked)", 0xca500, 0xca540, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash B (Frozen/Wet)", 0xca540, 0xca580, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash B (Ki)", 0xca580, 0xca5c0, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Slash B (Issen Trail)", 0xca600, 0xca640, indexSamSho5Sprites_Shizumaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_B1[] =
{
    { L"Shizumaru Bust A", 0x0ca800, 0x0ca840, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust A Rage", 0x0ca840, 0x0ca880, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust A Victory", 0x0caba0, 0x0cabe0 },

    { L"Shizumaru Bust A (Burning)", 0xca8c0, 0xca900, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust A (Shocked)", 0xca900, 0xca940, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust A (Frozen/Wet)", 0xca940, 0xca980, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust A (Ki)", 0xca980, 0xca9c0, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust A (Issen Trail)", 0xcaa00, 0xcaa40, indexSamSho5Sprites_Shizumaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_B2[] =
{
    { L"Shizumaru Bust B", 0x0cac00, 0x0cac40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust B Rage", 0x0cac40, 0x0cac80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust B Victory", 0x0cafa0, 0x0cafe0 },

    { L"Shizumaru Bust B (Burning)", 0xcacc0, 0xcad00, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust B (Shocked)", 0xcad00, 0xcad40, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust B (Frozen/Wet)", 0xcad40, 0xcad80, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust B (Ki)", 0xcad80, 0xcadc0, indexSamSho5Sprites_Shizumaru, 0x00 },
    { L"Shizumaru Bust B (Issen Trail)", 0xcae00, 0xcae40, indexSamSho5Sprites_Shizumaru, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_S1[] =
{
    { L"Gaira Slash A", 0x0cb000, 0x0cb040, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash A Rage", 0x0cb040, 0x0cb080, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash A Victory", 0x0cb3a0, 0x0cb3e0 },

    { L"Gaira Slash A (Burning)", 0xcb0c0, 0xcb100, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash A (Shocked)", 0xcb100, 0xcb140, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash A (Frozen/Wet)", 0xcb140, 0xcb180, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash A (Ki)", 0xcb180, 0xcb1c0, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash A (Issen Trail)", 0xcb200, 0xcb240, indexSamSho5Sprites_Gaira, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_S2[] =
{
    { L"Gaira Slash B", 0x0cb400, 0x0cb440, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash B Rage", 0x0cb440, 0x0cb480, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash B Victory", 0x0cb7a0, 0x0cb7e0 },

    { L"Gaira Slash B (Burning)", 0xcb4c0, 0xcb500, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash B (Shocked)", 0xcb500, 0xcb540, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash B (Frozen/Wet)", 0xcb540, 0xcb580, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash B (Ki)", 0xcb580, 0xcb5c0, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Slash B (Issen Trail)", 0xcb600, 0xcb640, indexSamSho5Sprites_Gaira, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_B1[] =
{
    { L"Gaira Bust A", 0x0cb800, 0x0cb840, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust A Rage", 0x0cb840, 0x0cb880, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust A Victory", 0x0cbba0, 0x0cbbe0 },

    { L"Gaira Bust A (Burning)", 0xcb8c0, 0xcb900, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust A (Shocked)", 0xcb900, 0xcb940, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust A (Frozen/Wet)", 0xcb940, 0xcb980, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust A (Ki)", 0xcb980, 0xcb9c0, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust A (Issen Trail)", 0xcba00, 0xcba40, indexSamSho5Sprites_Gaira, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_B2[] =
{
    { L"Gaira Bust B", 0x0cbc00, 0x0cbc40, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust B Rage", 0x0cbc40, 0x0cbc80, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust B Victory", 0x0cbfa0, 0x0cbfe0 },

    { L"Gaira Bust B (Burning)", 0xcbcc0, 0xcbd00, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust B (Shocked)", 0xcbd00, 0xcbd40, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust B (Frozen/Wet)", 0xcbd40, 0xcbd80, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust B (Ki)", 0xcbd80, 0xcbdc0, indexSamSho5Sprites_Gaira, 0x00 },
    { L"Gaira Bust B (Issen Trail)", 0xcbe00, 0xcbe40, indexSamSho5Sprites_Gaira, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_S1[] =
{
    { L"Amakusa Slash A", 0x0cc000, 0x0cc040, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash A Rage", 0x0cc040, 0x0cc080, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash A Victory", 0x0cc3c0, 0x0cc400 },

    { L"Amakusa Slash A (Burning)", 0xcc0c0, 0xcc100, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash A (Shocked)", 0xcc100, 0xcc140, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash A (Frozen/Wet)", 0xcc140, 0xcc180, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash A (Ki)", 0xcc180, 0xcc1c0, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash A (Issen Trail)", 0xcc200, 0xcc240, indexSamSho5Sprites_Amakusa, 0x00 },

};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_S2[] =
{
    { L"Amakusa Slash B", 0x0cc400, 0x0cc440, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash B Rage", 0x0cc440, 0x0cc480, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash B Victory", 0x0cc7c0, 0x0cc800 },

    { L"Amakusa Slash B (Burning)", 0xcc4c0, 0xcc500, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash B (Shocked)", 0xcc500, 0xcc540, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash B (Frozen/Wet)", 0xcc540, 0xcc580, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash B (Ki)", 0xcc580, 0xcc5c0, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Slash B (Issen Trail)", 0xcc600, 0xcc640, indexSamSho5Sprites_Amakusa, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_B1[] =
{
    { L"Amakusa Bust A", 0x0cc800, 0x0cc840, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust A Rage", 0x0cc840, 0x0cc880, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust A Victory", 0x0ccbc0, 0x0ccc00 },

    { L"Amakusa Bust A (Burning)", 0xcc8c0, 0xcc900, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust A (Shocked)", 0xcc900, 0xcc940, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust A (Frozen/Wet)", 0xcc940, 0xcc980, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust A (Ki)", 0xcc980, 0xcc9c0, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust A (Issen Trail)", 0xcca00, 0xcca40, indexSamSho5Sprites_Amakusa, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_B2[] =
{
    { L"Amakusa Bust B", 0x0ccc00, 0x0ccc40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust B Rage", 0x0ccc40, 0x0ccc80, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust B Victory", 0x0ccfc0, 0x0cd000 },

    { L"Amakusa Bust B (Burning)", 0xcccc0, 0xccd00, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust B (Shocked)", 0xccd00, 0xccd40, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust B (Frozen/Wet)", 0xccd40, 0xccd80, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust B (Ki)", 0xccd80, 0xccdc0, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Bust B (Issen Trail)", 0xcce00, 0xcce40, indexSamSho5Sprites_Amakusa, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_ZANKURO_PALETTES[] =
{
    { L"Zankuro", 0x0ce000, 0x0ce040, indexSamSho5Sprites_Zankuro },
    { L"Zankuro Rage", 0x0ce040, 0x0ce080, indexSamSho5Sprites_Zankuro },
    { L"Zankuro Victory", 0x0ce3a0, 0x0ce3e0 },

    { L"Zankuro (Burning)", 0xce0c0, 0xce100, indexSamSho5Sprites_Zankuro, 0x00 },
    { L"Zankuro (Shocked)", 0xce100, 0xce140, indexSamSho5Sprites_Zankuro, 0x00 },
    { L"Zankuro (Frozen/Wet)", 0xce140, 0xce180, indexSamSho5Sprites_Zankuro, 0x00 },
    { L"Zankuro (Ki)", 0xce180, 0xce1c0, indexSamSho5Sprites_Zankuro, 0x00 },
    { L"Zankuro (Issen Trail)", 0xce200, 0xce240, indexSamSho5Sprites_Zankuro, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_S1[] =
{
    { L"Jubei Slash A", 0x0cd000, 0x0cd040, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash A Rage", 0x0cd040, 0x0cd080, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash A Victory", 0x0cd3a0, 0x0cd3e0 },

    { L"Jubei Slash A (Burning)", 0xcd0c0, 0xcd100, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash A (Shocked)", 0xcd100, 0xcd140, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash A (Frozen/Wet)", 0xcd140, 0xcd180, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash A (Ki)", 0xcd180, 0xcd1c0, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash A (Issen Trail)", 0xcd200, 0xcd240, indexSamSho5Sprites_Jubei, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_S2[] =
{
    { L"Jubei Slash B", 0x0cd400, 0x0cd440, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash B Rage", 0x0cd440, 0x0cd480, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash B Victory", 0x0cd7a0, 0x0cd7e0 },

    { L"Jubei Slash B (Burning)", 0xcd4c0, 0xcd500, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash B (Shocked)", 0xcd500, 0xcd540, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash B (Frozen/Wet)", 0xcd540, 0xcd580, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash B (Ki)", 0xcd580, 0xcd5c0, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Slash B (Issen Trail)", 0xcd600, 0xcd640, indexSamSho5Sprites_Jubei, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_B1[] =
{
    { L"Jubei Bust A", 0x0cd800, 0x0cd840, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust A Rage", 0x0cd840, 0x0cd880, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust A Victory", 0x0cdba0, 0x0cdbe0 },

    { L"Jubei Bust A (Burning)", 0xcd8c0, 0xcd900, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust A (Shocked)", 0xcd900, 0xcd940, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust A (Frozen/Wet)", 0xcd940, 0xcd980, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust A (Ki)", 0xcd980, 0xcd9c0, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust A (Issen Trail)", 0xcda00, 0xcda40, indexSamSho5Sprites_Jubei, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_B2[] =
{
    { L"Jubei Bust B", 0x0cdc00, 0x0cdc40, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust B Rage", 0x0cdc40, 0x0cdc80, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust B Victory", 0x0cdfa0, 0x0cdfe0 },

    { L"Jubei Bust B (Burning)", 0xcdcc0, 0xcdd00, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust B (Shocked)", 0xcdd00, 0xcdd40, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust B (Frozen/Wet)", 0xcdd40, 0xcdd80, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust B (Ki)", 0xcdd80, 0xcddc0, indexSamSho5Sprites_Jubei, 0x00 },
    { L"Jubei Bust B (Issen Trail)", 0xcde00, 0xcde40, indexSamSho5Sprites_Jubei, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_S1[] =
{
    { L"Charlotte Slash A", 0x0cf000, 0x0cf040, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash A Rage", 0x0cf040, 0x0cf080, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash A Victory", 0x0cf3a0, 0x0cf400 },

    { L"Charlotte Slash A (Burning)", 0xcf0c0, 0xcf100, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash A (Shocked)", 0xcf100, 0xcf140, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash A (Frozen/Wet)", 0xcf140, 0xcf180, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash A (Ki)", 0xcf180, 0xcf1c0, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash A (Issen Trail)", 0xcf200, 0xcf240, indexSamSho5Sprites_Charlotte, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_S2[] =
{
    { L"Charlotte Slash B", 0x0cf400, 0x0cf440, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash B Rage", 0x0cf440, 0x0cf480, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash B Victory", 0x0cf7a0, 0x0cf800 },

    { L"Charlotte Slash B (Burning)", 0xcf4c0, 0xcf500, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash B (Shocked)", 0xcf500, 0xcf540, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash B (Frozen/Wet)", 0xcf540, 0xcf580, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash B (Ki)", 0xcf580, 0xcf5c0, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Slash B (Issen Trail)", 0xcf600, 0xcf640, indexSamSho5Sprites_Charlotte, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_B1[] =
{
    { L"Charlotte Bust A", 0x0cf800, 0x0cf840, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust A Rage", 0x0cf840, 0x0cf880, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust A Victory", 0x0cfba0, 0x0cfc00 },

    { L"Charlotte Bust A (Burning)", 0xcf8c0, 0xcf900, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust A (Shocked)", 0xcf900, 0xcf940, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust A (Frozen/Wet)", 0xcf940, 0xcf980, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust A (Ki)", 0xcf980, 0xcf9c0, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust A (Issen Trail)", 0xcfa00, 0xcfa40, indexSamSho5Sprites_Charlotte, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_B2[] =
{
    { L"Charlotte Bust B", 0x0cfc00, 0x0cfc40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust B Rage", 0x0cfc40, 0x0cfc80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust B Victory", 0x0cffa0, 0x0d0000 },

    { L"Charlotte Bust B (Burning)", 0xcfcc0, 0xcfd00, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust B (Shocked)", 0xcfd00, 0xcfd40, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust B (Frozen/Wet)", 0xcfd40, 0xcfd80, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust B (Ki)", 0xcfd80, 0xcfdc0, indexSamSho5Sprites_Charlotte, 0x00 },
    { L"Charlotte Bust B (Issen Trail)", 0xcfe00, 0xcfe40, indexSamSho5Sprites_Charlotte, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_S1[] =
{
    { L"Tam Tam Slash A", 0x0d0000, 0x0d0040, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash A Rage", 0x0d0040, 0x0d0080, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash A Victory", 0x0d03c0, 0x0d0400 },

    { L"Tam Tam Slash A (Burning)", 0xd00c0, 0xd0100, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash A (Shocked)", 0xd0100, 0xd0140, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash A (Frozen/Wet)", 0xd0140, 0xd0180, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash A (Ki)", 0xd0180, 0xd01c0, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash A (Issen Trail)", 0xd0200, 0xd0240, indexSamSho5Sprites_TamTam, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_S2[] =
{
    { L"Tam Tam Slash B", 0x0d0400, 0x0d0440, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash B Rage", 0x0d0440, 0x0d0480, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash B Victory", 0x0d07c0, 0x0d0800 },

    { L"Tam Tam Slash B (Burning)", 0xd04c0, 0xd0500, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash B (Shocked)", 0xd0500, 0xd0540, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash B (Frozen/Wet)", 0xd0540, 0xd0580, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash B (Ki)", 0xd0580, 0xd05c0, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Slash B (Issen Trail)", 0xd0600, 0xd0640, indexSamSho5Sprites_TamTam, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_B1[] =
{
    { L"Tam Tam Bust A", 0x0d0800, 0x0d0840, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust A Rage", 0x0d0840, 0x0d0880, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust A Victory", 0x0d0bc0, 0x0d0c00 },

    { L"Tam Tam Bust A (Burning)", 0xd08c0, 0xd0900, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust A (Shocked)", 0xd0900, 0xd0940, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust A (Frozen/Wet)", 0xd0940, 0xd0980, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust A (Ki)", 0xd0980, 0xd09c0, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust A (Issen Trail)", 0xd0a00, 0xd0a40, indexSamSho5Sprites_TamTam, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_B2[] =
{
    { L"Tam Tam Bust B", 0x0d0c00, 0x0d0c40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust B Rage", 0x0d0c40, 0x0d0c80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust B Victory", 0x0d0fc0, 0x0d1000 },

    { L"Tam Tam Bust B (Burning)", 0xd0cc0, 0xd0d00, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust B (Shocked)", 0xd0d00, 0xd0d40, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust B (Frozen/Wet)", 0xd0d40, 0xd0d80, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust B (Ki)", 0xd0d80, 0xd0dc0, indexSamSho5Sprites_TamTam, 0x00 },
    { L"Tam Tam Bust B (Issen Trail)", 0xd0e00, 0xd0e40, indexSamSho5Sprites_TamTam, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_S1[] =
{
    { L"Kazuki Slash A", 0x0d1000, 0x0d1040, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash A Rage", 0x0d1040, 0x0d1080, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash A Victory", 0x0d13a0, 0x0d13e0 },

    { L"Kazuki Slash A (Burning)", 0xd10c0, 0xd1100, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash A (Shocked)", 0xd1100, 0xd1140, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash A (Frozen/Wet)", 0xd1140, 0xd1180, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash A (Ki)", 0xd1180, 0xd11c0, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash A (Issen Trail)", 0xd1200, 0xd1240, indexSamSho5Sprites_Kazuki, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_S2[] =
{
    { L"Kazuki Slash B", 0x0d1400, 0x0d1440, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash B Rage", 0x0d1440, 0x0d1480, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash B Victory", 0x0d17a0, 0x0d17e0 },

    { L"Kazuki Slash B (Burning)", 0xd14c0, 0xd1500, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash B (Shocked)", 0xd1500, 0xd1540, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash B (Frozen/Wet)", 0xd1540, 0xd1580, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash B (Ki)", 0xd1580, 0xd15c0, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Slash B (Issen Trail)", 0xd1600, 0xd1640, indexSamSho5Sprites_Kazuki, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_B1[] =
{
    { L"Kazuki Bust A", 0x0d1800, 0x0d1840, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust A Rage", 0x0d1840, 0x0d1880, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust A Victory", 0x0d1ba0, 0x0d1be0 },

    { L"Kazuki Bust A (Burning)", 0xd18c0, 0xd1900, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust A (Shocked)", 0xd1900, 0xd1940, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust A (Frozen/Wet)", 0xd1940, 0xd1980, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust A (Ki)", 0xd1980, 0xd19c0, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust A (Issen Trail)", 0xd1a00, 0xd1a40, indexSamSho5Sprites_Kazuki, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_B2[] =
{
    { L"Kazuki Bust B", 0x0d1c00, 0x0d1c40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust B Rage", 0x0d1c40, 0x0d1c80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust B Victory", 0x0d1fa0, 0x0d1fe0 },

    { L"Kazuki Bust B (Burning)", 0xd1cc0, 0xd1d00, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust B (Shocked)", 0xd1d00, 0xd1d40, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust B (Frozen/Wet)", 0xd1d40, 0xd1d80, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust B (Ki)", 0xd1d80, 0xd1dc0, indexSamSho5Sprites_Kazuki, 0x00 },
    { L"Kazuki Bust B (Issen Trail)", 0xd1e00, 0xd1e40, indexSamSho5Sprites_Kazuki, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_S1[] =
{
    { L"Sogetsu Slash A", 0x0d2000, 0x0d2040, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash A Rage", 0x0d2040, 0x0d2080, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash A Victory", 0x0d23a0, 0x0d23e0 },

    { L"Sogetsu Slash A (Burning)", 0xd20c0, 0xd2100, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash A (Shocked)", 0xd2100, 0xd2140, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash A (Frozen/Wet)", 0xd2140, 0xd2180, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash A (Ki)", 0xd2180, 0xd21c0, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash A (Issen Trail)", 0xd2200, 0xd2240, indexSamSho5Sprites_Sogetsu, 0x00 },

};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_S2[] =
{
    { L"Sogetsu Slash B", 0x0d2400, 0x0d2440, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash B Rage", 0x0d2440, 0x0d2480, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash B Victory", 0x0d27a0, 0x0d27e0 },

    { L"Sogetsu Slash B (Burning)", 0xd24c0, 0xd2500, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash B (Shocked)", 0xd2500, 0xd2540, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash B (Frozen/Wet)", 0xd2540, 0xd2580, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash B (Ki)", 0xd2580, 0xd25c0, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Slash B (Issen Trail)", 0xd2600, 0xd2640, indexSamSho5Sprites_Sogetsu, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_B1[] =
{
    { L"Sogetsu Bust A", 0x0d2800, 0x0d2840, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust A Rage", 0x0d2840, 0x0d2880, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust A Victory", 0x0d2ba0, 0x0d2be0 },

    { L"Sogetsu Bust A (Burning)", 0xd28c0, 0xd2900, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust A (Shocked)", 0xd2900, 0xd2940, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust A (Frozen/Wet)", 0xd2940, 0xd2980, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust A (Ki)", 0xd2980, 0xd29c0, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust A (Issen Trail)", 0xd2a00, 0xd2a40, indexSamSho5Sprites_Sogetsu, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_B2[] =
{
    { L"Sogetsu Bust B", 0x0d2c00, 0x0d2c40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust B Rage", 0x0d2c40, 0x0d2c80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust B Victory", 0x0d2fa0, 0x0d2fe0 },

    { L"Sogetsu Bust B (Burning)", 0xd2cc0, 0xd2d00, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust B (Shocked)", 0xd2d00, 0xd2d40, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust B (Frozen/Wet)", 0xd2d40, 0xd2d80, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust B (Ki)", 0xd2d80, 0xd2dc0, indexSamSho5Sprites_Sogetsu, 0x00 },
    { L"Sogetsu Bust B (Issen Trail)", 0xd2e00, 0xd2e40, indexSamSho5Sprites_Sogetsu, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSABOSS_PALETTES[] =
{
    { L"Amakusa Boss", 0xce800, 0xce840, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Boss Rage", 0xce840, 0xce880, indexSamSho5Sprites_Amakusa },

    { L"Amakusa Boss (Burning)", 0xce8c0, 0xce900, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Boss (Shocked)", 0xce900, 0xce940, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Boss (Frozen/Wet)", 0xce940, 0xce980, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Boss (Ki)", 0xce980, 0xce9c0, indexSamSho5Sprites_Amakusa, 0x00 },
    { L"Amakusa Boss (Issen Trail)", 0xcea00, 0xcea40, indexSamSho5Sprites_Amakusa, 0x00 },
};

const sGame_PaletteDataset SAMSHO4_A_PORTRAIT_PALETTES[] =
{
    { L"Haohmaru Character Select Portrait", 0x0c09e0, 0x0c0a00 },
    { L"Nakoruru Character Select Portrait", 0x0c0a00, 0x0c0a20 },
    { L"Rimururu Character Select Portrait", 0x0c0a20, 0x0c0a40 },
    { L"Hanzo Character Select Portrait", 0x0c0a40, 0x0c0a60 },
    { L"Galford Character Select Portrait", 0x0c0a60, 0x0c0a80 },
    { L"Kyoshiro Character Select Portrait", 0x0c0a80, 0x0c0aa0 },
    { L"Ukyo Character Select Portrait", 0x0c0aa0, 0x0c0ac0 },
    { L"Genjuro Character Select Portrait", 0x0c0ac0, 0x0c0ae0 },
    { L"Basara Character Select Portrait", 0x0c0ae0, 0x0c0b00 },
    { L"Shizumaru Character Select Portrait", 0x0c0b00, 0x0c0b20 },
    { L"Gaira Character Select Portrait", 0x0c0b20, 0x0c0b40 },
    { L"Amakusa Character Select Portrait", 0x0c0b40, 0x0c0b60 },
    { L"Jubei Character Select Portrait", 0x0c0b60, 0x0c0b80 },
    { L"Charlotte Character Select Portrait", 0x0c0b80, 0x0c0ba0 },
    { L"Tam Tam Character Select Portrait", 0x0c0ba0, 0x0c0bc0 },
    { L"Sogetsu Character Select Portrait", 0x0c0bc0, 0x0c0be0 },
    { L"Kazuki Character Select Portrait", 0x0c0be0, 0x0c0c00 },
};

const sDescTreeNode SAMSHO4_A_HAOHMARU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HAOHMARU_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_HAOHMARU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HAOHMARU_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_HAOHMARU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HAOHMARU_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_HAOHMARU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HAOHMARU_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_HAOHMARU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_NAKORURU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_NAKORURU_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_NAKORURU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_NAKORURU_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_NAKORURU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_NAKORURU_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_NAKORURU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_NAKORURU_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_NAKORURU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_RIMURURU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_RIMURURU_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_RIMURURU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_RIMURURU_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_RIMURURU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_RIMURURU_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_RIMURURU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_RIMURURU_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_RIMURURU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_HANZO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HANZO_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_HANZO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HANZO_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_HANZO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HANZO_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_HANZO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HANZO_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_HANZO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_GALFORD_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GALFORD_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_GALFORD_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GALFORD_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_GALFORD_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GALFORD_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_GALFORD_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GALFORD_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_GALFORD_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_KYOSHIRO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KYOSHIRO_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_KYOSHIRO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KYOSHIRO_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_KYOSHIRO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KYOSHIRO_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_KYOSHIRO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KYOSHIRO_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_KYOSHIRO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_UKYO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_UKYO_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_UKYO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_UKYO_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_UKYO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_UKYO_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_UKYO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_UKYO_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_UKYO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_GENJURO_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GENJURO_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_GENJURO_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GENJURO_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_GENJURO_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GENJURO_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_GENJURO_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GENJURO_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_GENJURO_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_BASARA_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_BASARA_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_BASARA_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_BASARA_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_BASARA_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_BASARA_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_BASARA_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_BASARA_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_BASARA_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_SHIZUMARU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SHIZUMARU_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_SHIZUMARU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SHIZUMARU_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_SHIZUMARU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SHIZUMARU_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_SHIZUMARU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SHIZUMARU_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_SHIZUMARU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_GAIRA_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GAIRA_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_GAIRA_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GAIRA_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_GAIRA_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GAIRA_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_GAIRA_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GAIRA_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_GAIRA_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_AMAKUSA_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSA_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_AMAKUSA_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSA_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_AMAKUSA_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSA_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_AMAKUSA_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSA_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_AMAKUSA_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_ZANKURO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_ZANKURO_PALETTES, ARRAYSIZE(SAMSHO4_A_ZANKURO_PALETTES) },
};

const sDescTreeNode SAMSHO4_A_JUBEI_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_JUBEI_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_JUBEI_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_JUBEI_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_JUBEI_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_JUBEI_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_JUBEI_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_JUBEI_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_JUBEI_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_CHARLOTTE_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_CHARLOTTE_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_CHARLOTTE_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_CHARLOTTE_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_CHARLOTTE_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_CHARLOTTE_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_CHARLOTTE_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_CHARLOTTE_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_CHARLOTTE_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_TAMTAM_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_TAMTAM_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_TAMTAM_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_TAMTAM_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_TAMTAM_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_TAMTAM_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_TAMTAM_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_TAMTAM_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_TAMTAM_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_KAZUKI_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KAZUKI_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_KAZUKI_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KAZUKI_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_KAZUKI_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KAZUKI_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_KAZUKI_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KAZUKI_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_KAZUKI_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_SOGETSU_COLLECTION[] =
{
    { L"Slash 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SOGETSU_PALETTES_S1, ARRAYSIZE(SAMSHO4_A_SOGETSU_PALETTES_S1) },
    { L"Slash 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SOGETSU_PALETTES_S2, ARRAYSIZE(SAMSHO4_A_SOGETSU_PALETTES_S2) },
    { L"Bust 1", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SOGETSU_PALETTES_B1, ARRAYSIZE(SAMSHO4_A_SOGETSU_PALETTES_B1) },
    { L"Bust 2", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SOGETSU_PALETTES_B2, ARRAYSIZE(SAMSHO4_A_SOGETSU_PALETTES_B2) },
};

const sDescTreeNode SAMSHO4_A_AMAKUSABOSS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSABOSS_PALETTES, ARRAYSIZE(SAMSHO4_A_AMAKUSABOSS_PALETTES) },
    
};

const sDescTreeNode SAMSHO4_A_PORTRAITS_COLLECTION[] =
{
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_PORTRAIT_PALETTES, ARRAYSIZE(SAMSHO4_A_PORTRAIT_PALETTES) },
};

const sDescTreeNode SAMSHO4_A_UNITS[] =
{
    { L"Amakusa", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSA_COLLECTION, ARRAYSIZE(SAMSHO4_A_AMAKUSA_COLLECTION) },
    { L"Basara", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_BASARA_COLLECTION, ARRAYSIZE(SAMSHO4_A_BASARA_COLLECTION) },
    { L"Charlotte", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_CHARLOTTE_COLLECTION, ARRAYSIZE(SAMSHO4_A_CHARLOTTE_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GAIRA_COLLECTION, ARRAYSIZE(SAMSHO4_A_GAIRA_COLLECTION) },
    { L"Galford", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GALFORD_COLLECTION, ARRAYSIZE(SAMSHO4_A_GALFORD_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_GENJURO_COLLECTION, ARRAYSIZE(SAMSHO4_A_GENJURO_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HANZO_COLLECTION, ARRAYSIZE(SAMSHO4_A_HANZO_COLLECTION) },
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_HAOHMARU_COLLECTION, ARRAYSIZE(SAMSHO4_A_HAOHMARU_COLLECTION) },
    { L"Jubei", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_JUBEI_COLLECTION, ARRAYSIZE(SAMSHO4_A_JUBEI_COLLECTION) },
    { L"Kazuki", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KAZUKI_COLLECTION, ARRAYSIZE(SAMSHO4_A_KAZUKI_COLLECTION) },
    { L"Kyoshiro", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_KYOSHIRO_COLLECTION, ARRAYSIZE(SAMSHO4_A_KYOSHIRO_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_NAKORURU_COLLECTION, ARRAYSIZE(SAMSHO4_A_NAKORURU_COLLECTION) },
    { L"Rimururu", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_RIMURURU_COLLECTION, ARRAYSIZE(SAMSHO4_A_RIMURURU_COLLECTION) },
    { L"Shizumaru", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SHIZUMARU_COLLECTION, ARRAYSIZE(SAMSHO4_A_SHIZUMARU_COLLECTION) },
    { L"Sogetsu", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_SOGETSU_COLLECTION, ARRAYSIZE(SAMSHO4_A_SOGETSU_COLLECTION) },
    { L"Tam Tam", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_TAMTAM_COLLECTION, ARRAYSIZE(SAMSHO4_A_TAMTAM_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_UKYO_COLLECTION, ARRAYSIZE(SAMSHO4_A_UKYO_COLLECTION) },
    { L"Zankuro", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_ZANKURO_COLLECTION, ARRAYSIZE(SAMSHO4_A_ZANKURO_COLLECTION) },
    { L"Amakusa Boss", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_AMAKUSABOSS_COLLECTION, ARRAYSIZE(SAMSHO4_A_AMAKUSABOSS_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO4_A_PORTRAITS_COLLECTION, ARRAYSIZE(SAMSHO4_A_PORTRAITS_COLLECTION) },
};

constexpr auto SAMSHO4_A_NUMUNIT = ARRAYSIZE(SAMSHO4_A_UNITS);

#define SAMSHO4_A_EXTRALOC SAMSHO4_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAMSHO4_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

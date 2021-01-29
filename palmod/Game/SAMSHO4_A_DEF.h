#pragma once

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_S1[] =
{
    { L"Haohmaru Slash A", 0x0c1000, 0x0c1040, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash Rage A", 0x0c1040, 0x0c1080, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash A Victory", 0x0c13a0, 0x0c13e0 },
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_S2[] =
{
    { L"Haohmaru Slash B", 0x0c1400, 0x0c1440, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash Rage B", 0x0c1440, 0x0c1480, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Slash B Victory", 0x0c17a0, 0x0c17e0 },
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_B1[] =
{
    { L"Haohmaru Bust A", 0x0c1800, 0x0c1840, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust Rage A", 0x0c1840, 0x0c1880, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust A Victory", 0x0c1ba0, 0x0c1be0 },
};

const sGame_PaletteDataset SAMSHO4_A_HAOHMARU_PALETTES_B2[] =
{
    { L"Haohmaru Bust B", 0x0c1c00, 0x0c1c40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust Rage B", 0x0c1c40, 0x0c1c80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru Bust B Victory", 0x0c1fa0, 0x0c1fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_S1[] =
{
    { L"Nakoruru Slash A", 0x0c2000, 0x0c2040, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru Slash Rage A", 0x0c2040, 0x0c2080, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha A", 0x0c2280, 0x0c22a0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru Slash A Victory", 0x0c23a0, 0x0c23e0 },
    { L"Mamahaha Victory A", 0x0c23e0, 0x0c2400 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_S2[] =
{
    { L"Nakoruru Slash B", 0x0c2400, 0x0c2440, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru Slash Rage B", 0x0c2440, 0x0c2480, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha B", 0x0c2680, 0x0c26a0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru Slash B Victory", 0x0c27a0, 0x0c27e0 },
    { L"Mamahaha Victory B", 0x0c27e0, 0x0c2800 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_B1[] =
{
    { L"Nakoruru Bust A", 0x0c2800, 0x0c2840, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Nakoruru Bust A Rage", 0x0c2840, 0x0c2880, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Shikuru A", 0x0c2aa0, 0x0c2ac0, indexSamSho5Sprites_Rera, 1 },
    { L"Nakoruru Bust A Victory", 0x0c2ba0, 0x0c2be0 },
    { L"Shikuru Victory A", 0x0c2be0, 0x0c2c00 },
};

const sGame_PaletteDataset SAMSHO4_A_NAKORURU_PALETTES_B2[] =
{
    { L"Nakoruru Bust B", 0x0c2c00, 0x0c2c40, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Nakoruru Bust B Rage", 0x0c2c40, 0x0c2c80, indexSamSho5Sprites_Nakoruru, 0 },
    { L"Shikuru B", 0x0c2ea0, 0x0c2ec0, indexSamSho5Sprites_Rera, 1 },
    { L"Nakoruru Bust B Victory", 0x0c2fa0, 0x0c2fe0 },
    { L"Shikuru Victory B", 0x0c2fe0, 0x0c3000 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_S1[] =
{
    { L"Rimururu Slash A", 0x0c3000, 0x0c3040, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Slash A Rage", 0x0c3040, 0x0c3080, indexSamSho5Sprites_Rimururu },
    { L"Konru Slash A", 0x0c32c0, 0x0c32e0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Slash A Victory", 0x0c33a0, 0x0c33e0 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_S2[] =
{
    { L"Rimururu Slash B", 0x0c3400, 0x0c3440, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Slash B Rage", 0x0c3440, 0x0c3480, indexSamSho5Sprites_Rimururu },
    { L"Konru Slash B", 0x0c36c0, 0x0c36e0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Slash B Victory", 0x0c37a0, 0x0c37e0 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_B1[] =
{
    { L"Rimururu Bust A", 0x0c3800, 0x0c3840, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Bust A Rage", 0x0c3840, 0x0c3880, indexSamSho5Sprites_Rimururu },
    { L"Konru Bust A", 0x0c3ac0, 0x0c3ae0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Bust A Victory", 0x0c3ba0, 0x0c3be0 },
};

const sGame_PaletteDataset SAMSHO4_A_RIMURURU_PALETTES_B2[] =
{
    { L"Rimururu Bust B", 0x0c3c00, 0x0c3c40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu Bust B Rage", 0x0c3c40, 0x0c3c80, indexSamSho5Sprites_Rimururu },
    { L"Konru Bust B", 0x0c3ec0, 0x0c3ee0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu Bust B Victory", 0x0c3fa0, 0x0c3fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_S1[] =
{
    { L"Hanzo Slash A", 0x0c4000, 0x0c4040, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash A Rage", 0x0c4040, 0x0c4080, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash A Victory", 0x0c43c0, 0x0c43f0 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_S2[] =
{
    { L"Hanzo Slash B", 0x0c4400, 0x0c4440, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash B Rage", 0x0c4440, 0x0c4480, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Slash B Victory", 0x0c47c0, 0x0c47f0 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_B1[] =
{
    { L"Hanzo Bust A", 0x0c4800, 0x0c4840, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust A Rage", 0x0c4840, 0x0c4880, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust A Victory", 0x0c4bc0, 0x0c4bf0 },
};

const sGame_PaletteDataset SAMSHO4_A_HANZO_PALETTES_B2[] =
{
    { L"Hanzo Bust B", 0x0c4c00, 0x0c4c40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust B Rage", 0x0c4c40, 0x0c4c80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo Bust B Victory", 0x0c4fc0, 0x0c4ff0 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_S1[] =
{
    { L"Galford Slash A", 0x0c5000, 0x0c5040, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Slash A Rage", 0x0c5040, 0x0c5080, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Slash A", 0x0c5280, 0x0c52a0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Slash A Victory", 0x0c53a0, 0x0c53e0 },
    { L"Poppy Slash A Victory", 0x0c53e0, 0x0c5400 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_S2[] =
{
    { L"Galford Slash B", 0x0c5400, 0x0c5440, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Slash B Rage", 0x0c5440, 0x0c5480, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Slash B", 0x0c5680, 0x0c56a0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Slash B Victory ", 0x0c57a0, 0x0c57e0 },
    { L"Poppy Slash B Victory", 0x0c57e0, 0x0c5800 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_B1[] =
{
    { L"Galford Bust A", 0x0c5800, 0x0c5840, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Bust A Rage", 0x0c5840, 0x0c5880, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Bust A", 0x0c5a80, 0x0c5aa0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Bust A Victory", 0x0c5ba0, 0x0c5be0 },
};

const sGame_PaletteDataset SAMSHO4_A_GALFORD_PALETTES_B2[] =
{
    { L"Galford Bust B", 0x0c5c00, 0x0c5c40, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford Bust B Rage", 0x0c5c40, 0x0c5c80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy Bust B", 0x0c5e80, 0x0c5ea0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford Bust B Victory", 0x0c5fa0, 0x0c5fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_S1[] =
{
    { L"Kyoshiro Slash A", 0x0c6000, 0x0c6040, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro Slash A Rage", 0x0c6040, 0x0c6080, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Toad A", 0x0c6280, 0x0c62a0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro Slash A Victory", 0x0c63a0, 0x0c63e0 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_S2[] =
{
    { L"Kyoshiro Slash B", 0x0c6400, 0x0c6440, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro Slash B Rage", 0x0c6440, 0x0c6480, indexSamSho5Sprites_Kyoshiro, 0, &pairNext },
    { L"Toad B", 0x0c6680, 0x0c66a0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro Slash B Victory", 0x0c67a0, 0x0c67e0 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_B1[] =
{
    { L"Kyoshiro Bust A", 0x0c6800, 0x0c6840, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust A Rage", 0x0c6840, 0x0c6880, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust A Victory", 0x0c6ba0, 0x0c6be0 },
};

const sGame_PaletteDataset SAMSHO4_A_KYOSHIRO_PALETTES_B2[] =
{
    { L"Kyoshiro Bust B", 0x0c6c00, 0x0c6c40, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust B Rage", 0x0c6c40, 0x0c6c80, indexSamSho5Sprites_Kyoshiro, 0 },
    { L"Kyoshiro Bust B Victory", 0x0c6fa0, 0x0c6fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_S1[] =
{
    { L"Ukyo Slash A", 0x0c7000, 0x0c7040, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash A Rage", 0x0c7040, 0x0c7080, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash A Victory", 0x0c73a0, 0x0c73e0 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_S2[] =
{
    { L"Ukyo Slash B", 0x0c7400, 0x0c7440, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash B Rage", 0x0c7440, 0x0c7480, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Slash B Victory", 0x0c77a0, 0x0c77e0 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_B1[] =
{
    { L"Ukyo Bust A", 0x0c7800, 0x0c7840, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust A Rage", 0x0c7840, 0x0c7880, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust A Victory", 0x0c7ba0, 0x0c7be0 },
};

const sGame_PaletteDataset SAMSHO4_A_UKYO_PALETTES_B2[] =
{
    { L"Ukyo Bust B", 0x0c7c00, 0x0c7c40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust B Rage", 0x0c7c40, 0x0c7c80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo Bust B Victory", 0x0c7fa0, 0x0c7fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_S1[] =
{
    { L"Genjuro Slash A", 0x0c8000, 0x0c8040, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash A Rage", 0x0c8040, 0x0c8080, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash A Victory", 0x0c83a0, 0x0c83e0 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_S2[] =
{
    { L"Genjuro Slash B", 0x0c8400, 0x0c8440, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash B Rage", 0x0c8440, 0x0c8480, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Slash B Victory", 0x0c87a0, 0x0c87e0 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_B1[] =
{
    { L"Genjuro Bust A", 0x0c8800, 0x0c8840, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust A Rage", 0x0c8840, 0x0c8880, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust A Victory", 0x0c8ba0, 0x0c8be0 },
};

const sGame_PaletteDataset SAMSHO4_A_GENJURO_PALETTES_B2[] =
{
    { L"Genjuro Bust B", 0x0c8c00, 0x0c8c40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust B Rage", 0x0c8c40, 0x0c8c80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro Bust B Victory", 0x0c8fa0, 0x0c8fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_S1[] =
{
    { L"Basara Slash A", 0x0c9000, 0x0c9040, indexSamSho5Sprites_Basara },
    { L"Basara Slash A Rage", 0x0c9040, 0x0c9080, indexSamSho5Sprites_Basara },
    { L"Basara Slash A Victory", 0x0c93a0, 0x0c93e0 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_S2[] =
{
    { L"Basara Slash B", 0x0c9400, 0x0c9440, indexSamSho5Sprites_Basara },
    { L"Basara Slash B Rage", 0x0c9440, 0x0c9480, indexSamSho5Sprites_Basara },
    { L"Basara Slash B Victory", 0x0c97a0, 0x0c97e0 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_B1[] =
{
    { L"Basara Bust A", 0x0c9800, 0x0c9840, indexSamSho5Sprites_Basara },
    { L"Basara Bust A Rage", 0x0c9840, 0x0c9880, indexSamSho5Sprites_Basara },
    { L"Basara Bust A Victory", 0x0c9ba0, 0x0c9be0 },
};

const sGame_PaletteDataset SAMSHO4_A_BASARA_PALETTES_B2[] =
{
    { L"Basara Bust B", 0x0c9c00, 0x0c9c40, indexSamSho5Sprites_Basara },
    { L"Basara Bust B Rage", 0x0c9c40, 0x0c9c80, indexSamSho5Sprites_Basara },
    { L"Basara Bust B Victory", 0x0c9fa0, 0x0c9fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_S1[] =
{
    { L"Shizumaru Slash A", 0x0ca000, 0x0ca040, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash A Rage", 0x0ca040, 0x0ca080, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash A Victory", 0x0ca3a0, 0x0ca3e0 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_S2[] =
{
    { L"Shizumaru Slash B", 0x0ca400, 0x0ca440, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash B Rage", 0x0ca440, 0x0ca480, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Slash B Victory", 0x0ca7a0, 0x0ca7e0 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_B1[] =
{
    { L"Shizumaru Bust A", 0x0ca800, 0x0ca840, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust A Rage", 0x0ca840, 0x0ca880, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust A Victory", 0x0caba0, 0x0cabe0 },
};

const sGame_PaletteDataset SAMSHO4_A_SHIZUMARU_PALETTES_B2[] =
{
    { L"Shizumaru Bust B", 0x0cac00, 0x0cac40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust B Rage", 0x0cac40, 0x0cac80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru Bust B Victory", 0x0cafa0, 0x0cafe0 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_S1[] =
{
    { L"Gaira Slash A", 0x0cb000, 0x0cb040, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash A Rage", 0x0cb040, 0x0cb080, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash A Victory", 0x0cb3a0, 0x0cb3e0 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_S2[] =
{
    { L"Gaira Slash B", 0x0cb400, 0x0cb440, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash B Rage", 0x0cb440, 0x0cb480, indexSamSho5Sprites_Gaira },
    { L"Gaira Slash B Victory", 0x0cb7a0, 0x0cb7e0 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_B1[] =
{
    { L"Gaira Bust A", 0x0cb800, 0x0cb840, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust A Rage", 0x0cb840, 0x0cb880, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust A Victory", 0x0cbba0, 0x0cbbe0 },
};

const sGame_PaletteDataset SAMSHO4_A_GAIRA_PALETTES_B2[] =
{
    { L"Gaira Bust B", 0x0cbc00, 0x0cbc40, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust B Rage", 0x0cbc40, 0x0cbc80, indexSamSho5Sprites_Gaira },
    { L"Gaira Bust B Victory", 0x0cbfa0, 0x0cbfe0 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_S1[] =
{
    { L"Amakusa Slash A", 0x0cc000, 0x0cc040, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash A Rage", 0x0cc040, 0x0cc080, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash A Victory", 0x0cc3c0, 0x0cc400 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_S2[] =
{
    { L"Amakusa Slash B", 0x0cc400, 0x0cc440, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash B Rage", 0x0cc440, 0x0cc480, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Slash B Victory", 0x0cc7c0, 0x0cc800 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_B1[] =
{
    { L"Amakusa Bust A", 0x0cc800, 0x0cc840, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust A Rage", 0x0cc840, 0x0cc880, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust A Victory", 0x0ccbc0, 0x0ccc00 },
};

const sGame_PaletteDataset SAMSHO4_A_AMAKUSA_PALETTES_B2[] =
{
    { L"Amakusa Bust B", 0x0ccc00, 0x0ccc40, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust B Rage", 0x0ccc40, 0x0ccc80, indexSamSho5Sprites_Amakusa },
    { L"Amakusa Bust B Victory", 0x0ccfc0, 0x0cd000 },
};

const sGame_PaletteDataset SAMSHO4_A_ZANKURO_PALETTES[] =
{
    { L"Zankuro", 0x0ce000, 0x0ce040, indexSamSho5Sprites_Zankuro },
    { L"Zankuro Rage", 0x0ce040, 0x0ce080, indexSamSho5Sprites_Zankuro },
    { L"Zankuro Victory", 0x0ce3a0, 0x0ce3e0 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_S1[] =
{
    { L"Jubei Slash A", 0x0cd000, 0x0cd040, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash A Rage", 0x0cd040, 0x0cd080, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash A Victory", 0x0cd3a0, 0x0cd3e0 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_S2[] =
{
    { L"Jubei Slash B", 0x0cd400, 0x0cd440, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash B Rage", 0x0cd440, 0x0cd480, indexSamSho5Sprites_Jubei },
    { L"Jubei Slash B Victory", 0x0cd7a0, 0x0cd7e0 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_B1[] =
{
    { L"Jubei Bust A", 0x0cd800, 0x0cd840, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust A Rage", 0x0cd840, 0x0cd880, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust A Victory", 0x0cdba0, 0x0cdbe0 },
};

const sGame_PaletteDataset SAMSHO4_A_JUBEI_PALETTES_B2[] =
{
    { L"Jubei Bust B", 0x0cdc00, 0x0cdc40, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust B Rage", 0x0cdc40, 0x0cdc80, indexSamSho5Sprites_Jubei },
    { L"Jubei Bust B Victory", 0x0cdfa0, 0x0cdfe0 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_S1[] =
{
    { L"Charlotte Slash A", 0x0cf000, 0x0cf040, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash A Rage", 0x0cf040, 0x0cf080, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash A Victory", 0x0cf3a0, 0x0cf400 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_S2[] =
{
    { L"Charlotte Slash B", 0x0cf400, 0x0cf440, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash B Rage", 0x0cf440, 0x0cf480, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Slash B Victory", 0x0cf7a0, 0x0cf800 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_B1[] =
{
    { L"Charlotte Bust A", 0x0cf800, 0x0cf840, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust A Rage", 0x0cf840, 0x0cf880, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust A Victory", 0x0cfba0, 0x0cfc00 },
};

const sGame_PaletteDataset SAMSHO4_A_CHARLOTTE_PALETTES_B2[] =
{
    { L"Charlotte Bust B", 0x0cfc00, 0x0cfc40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust B Rage", 0x0cfc40, 0x0cfc80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte Bust B Victory", 0x0cffa0, 0x0d0000 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_S1[] =
{
    { L"Tam Tam Slash A", 0x0d0000, 0x0d0040, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash A Rage", 0x0d0040, 0x0d0080, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash A Victory", 0x0d03c0, 0x0d0400 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_S2[] =
{
    { L"Tam Tam Slash B", 0x0d0400, 0x0d0440, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash B Rage", 0x0d0440, 0x0d0480, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Slash B Victory", 0x0d07c0, 0x0d0800 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_B1[] =
{
    { L"Tam Tam Bust A", 0x0d0800, 0x0d0840, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust A Rage", 0x0d0840, 0x0d0880, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust A Victory", 0x0d0bc0, 0x0d0c00 },
};

const sGame_PaletteDataset SAMSHO4_A_TAMTAM_PALETTES_B2[] =
{
    { L"Tam Tam Bust B", 0x0d0c00, 0x0d0c40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust B Rage", 0x0d0c40, 0x0d0c80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam Bust B Victory", 0x0d0fc0, 0x0d1000 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_S1[] =
{
    { L"Kazuki Slash A", 0x0d1000, 0x0d1040, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash A Rage", 0x0d1040, 0x0d1080, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash A Victory", 0x0d13a0, 0x0d13e0 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_S2[] =
{
    { L"Kazuki Slash B", 0x0d1400, 0x0d1440, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash B Rage", 0x0d1440, 0x0d1480, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Slash B Victory", 0x0d17a0, 0x0d17e0 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_B1[] =
{
    { L"Kazuki Bust A", 0x0d1800, 0x0d1840, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust A Rage", 0x0d1840, 0x0d1880, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust A Victory", 0x0d1ba0, 0x0d1be0 },
};

const sGame_PaletteDataset SAMSHO4_A_KAZUKI_PALETTES_B2[] =
{
    { L"Kazuki Bust B", 0x0d1c00, 0x0d1c40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust B Rage", 0x0d1c40, 0x0d1c80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki Bust B Victory", 0x0d1fa0, 0x0d1fe0 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_S1[] =
{
    { L"Sogetsu Slash A", 0x0d2000, 0x0d2040, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash A Rage", 0x0d2040, 0x0d2080, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash A Victory", 0x0d23a0, 0x0d23e0 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_S2[] =
{
    { L"Sogetsu Slash B", 0x0d2400, 0x0d2440, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash B Rage", 0x0d2440, 0x0d2480, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Slash B Victory", 0x0d27a0, 0x0d27e0 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_B1[] =
{
    { L"Sogetsu Bust A", 0x0d2800, 0x0d2840, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust A Rage", 0x0d2840, 0x0d2880, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust A Victory", 0x0d2ba0, 0x0d2be0 },
};

const sGame_PaletteDataset SAMSHO4_A_SOGETSU_PALETTES_B2[] =
{
    { L"Sogetsu Bust B", 0x0d2c00, 0x0d2c40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust B Rage", 0x0d2c40, 0x0d2c80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu Bust B Victory", 0x0d2fa0, 0x0d2fe0 },
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

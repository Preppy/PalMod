#pragma once

const std::vector<uint16_t> SAMSHO1_A_IMGIDS_USED =
{
    indexSamSho1Sprites_Amakusa,    // 0x60
    indexSamSho1Sprites_Charlotte,  // 0x61
    indexSamSho1Sprites_Earthquake, // 0x62
    indexSamSho1Sprites_Galford,    // 0x63
    indexSamSho1Sprites_Genan,      // 0x64
    indexSamSho1Sprites_Hanzo,      // 0x66
    indexSamSho1Sprites_Haohmaru,   // 0x67
    indexSamSho1Sprites_Jubei,      // 0x68
    indexSamSho1Sprites_Kyoshiro,   // 0x69
    indexSamSho1Sprites_Nakoruru,   // 0x6a
    indexSamSho1Sprites_TamTam,     // 0x6b
    indexSamSho1Sprites_Ukyo,       // 0x6c
    indexSamSho1Sprites_Wanfu,      // 0x6d
    indexSamSho1Sprites_Bonus,      // 0x6e
    indexSamSho1Sprites_Stages,     // 0x6f
};

const sGame_PaletteDataset SAMSHO1_A_HAOHMARU_P[] =
{
    //P
    { L"Haohmaru P", 0x0e4c8a, 0x0e4caa, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext4 },
    { L"Haohmaru P Rage 1", 0x0e4caa, 0x0e4cca, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext4 },
    { L"Haohmaru P Rage 2", 0x0e4cca, 0x0e4cea, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext4 },
    { L"Haohmaru P Zapped/Burned", 0x0e4cea, 0x0e4d0a, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext },
    { L"Haohmaru P Weapon 1", 0x0e4d0a, 0x0e4d2a, indexSamSho1Sprites_Haohmaru, 0x01 },
    { L"Haohmaru P Weapon 2", 0x0e4d2a, 0x0e4d4a, indexSamSho1Sprites_Haohmaru, 0x01 },
    { L"Haohmaru P Weapon 3", 0x0e4d4a, 0x0e4d6a, indexSamSho1Sprites_Haohmaru, 0x01 },
    { L"Haohmaru P Poisoned", 0x0e4d6a, 0x0e4d8a, indexSamSho1Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHO1_A_HAOHMARU_K[] =
{
    { L"Haohmaru K", 0x0e588a, 0x0e58aa, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext4 },
    { L"Haohmaru K Rage 1", 0x0e58aa, 0x0e58ca, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext4 },
    { L"Haohmaru K Rage 2", 0x0e58ca, 0x0e58ea, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext4 },
    { L"Haohmaru K Zapped/Burned", 0x0e58ea, 0x0e590a, indexSamSho1Sprites_Haohmaru, 0x00, &pairNext },
    { L"Haohmaru K Weapon 1", 0x0e590a, 0x0e592a, indexSamSho1Sprites_Haohmaru, 0x01 },
    { L"Haohmaru K Weapon 2", 0x0e592a, 0x0e594a, indexSamSho1Sprites_Haohmaru, 0x01 },
    { L"Haohmaru K Weapon 3", 0x0e594a, 0x0e596a, indexSamSho1Sprites_Haohmaru, 0x01 },
    { L"Haohmaru K Poisoned", 0x0e596a, 0x0e598a, indexSamSho1Sprites_Haohmaru },
};

const sGame_PaletteDataset SAMSHO1_A_HAOHMARU_EFFECTS[] =
{
    { L"Haohmaru Kogetsu Zan Trail", 0x0e66ea, 0x0e670a, indexSamSho1Sprites_Haohmaru, 0x02 },
};

const sGame_PaletteDataset SAMSHO1_A_NAKORURU_P[] =
{
    { L"Nakoruru P", 0x0e508a, 0x0e50aa, indexSamSho1Sprites_Nakoruru, 0, &pairNext4AndNext8AndNext9 },
    { L"Nakoruru P Rage 1", 0x0e50aa, 0x0e50ca, indexSamSho1Sprites_Nakoruru, 0, &pairNext4AndNext7AndNext8 },
    { L"Nakoruru P Rage 2", 0x0e50ca, 0x0e50ea, indexSamSho1Sprites_Nakoruru, 0, &pairNext4AndNext6AndNext7 },
    { L"Nakoruru P Zapped/Burned", 0x0e50ea, 0x0e510a, indexSamSho1Sprites_Nakoruru, 0, &pairNext },
    { L"Nakoruru P Weapon 1", 0x0e510a, 0x0e512a, indexSamSho1Sprites_Nakoruru, 0x01 },
    { L"Nakoruru P Weapon 2", 0x0e512a, 0x0e514a, indexSamSho1Sprites_Nakoruru, 0x01 },
    { L"Nakoruru P Weapon 3", 0x0e514a, 0x0e516a, indexSamSho1Sprites_Nakoruru, 0x01 },
    { L"Nakoruru P Poisoned", 0x0e516a, 0x0e518a, indexSamSho1Sprites_Nakoruru, 0 },
    { L"Mamahaha P", 0x0e672a, 0x0e674a, indexSamSho1Sprites_Nakoruru, 0x02 },

    { L"Nakoruru P Win Portrait Extra", 0xe6c4a, 0xe6c6a, indexSamSho1Sprites_Nakoruru, 0x03 },
};

const sGame_PaletteDataset SAMSHO1_A_NAKORURU_K[] =
{
    { L"Nakoruru K", 0x0e5c8a, 0x0e5caa, indexSamSho1Sprites_Nakoruru, 0, &pairNext4AndNext8AndNext9 },
    { L"Nakoruru K Rage 1", 0x0e5caa, 0x0e5cca, indexSamSho1Sprites_Nakoruru, 0, &pairNext4AndNext7AndNext8 },
    { L"Nakoruru K Rage 2", 0x0e5cca, 0x0e5cea, indexSamSho1Sprites_Nakoruru, 0, &pairNext4AndNext6AndNext7 },
    { L"Nakoruru K Zapped/Burned", 0x0e5cea, 0x0e5d0a, indexSamSho1Sprites_Nakoruru, 0, &pairNext },
    { L"Nakoruru K Weapon 1", 0x0e5d0a, 0x0e5d2a, indexSamSho1Sprites_Nakoruru, 0x01 },
    { L"Nakoruru K Weapon 2", 0x0e5d2a, 0x0e5d4a, indexSamSho1Sprites_Nakoruru, 0x01 },
    { L"Nakoruru K Weapon 3", 0x0e5d4a, 0x0e5d6a, indexSamSho1Sprites_Nakoruru, 0x01 },
    { L"Nakoruru K Poisoned", 0x0e5d6a, 0x0e5d8a, indexSamSho1Sprites_Nakoruru, 0 },
    { L"Mamahaha K", 0x0e674a, 0x0e676a, indexSamSho1Sprites_Nakoruru, 0x02 },

    { L"Nakoruru K Win Portrait Extra", 0xe6c6a, 0xe6c8a, indexSamSho1Sprites_Nakoruru, 03 },
};

const sGame_PaletteDataset SAMSHO1_A_TAMTAM_P[] =
{
    { L"Tam Tam P", 0x0e4d8a, 0x0e4daa, indexSamSho1Sprites_TamTam, 0x00, &pairNext4 },
    { L"Tam Tam P Rage 1", 0x0e4daa, 0x0e4dca, indexSamSho1Sprites_TamTam, 0x00, &pairNext4 },
    { L"Tam Tam P Rage 2", 0x0e4dca, 0x0e4dea, indexSamSho1Sprites_TamTam, 0x00, &pairNext4 },
    { L"Tam Tam P Zapped/Burned", 0x0e4dea, 0x0e4e0a, indexSamSho1Sprites_TamTam, 0x00, &pairNext },
    { L"Tam Tam P Weapon 1", 0x0e4e0a, 0x0e4e2a, indexSamSho1Sprites_TamTam, 0x01 },
    { L"Tam Tam P Weapon 2", 0x0e4e2a, 0x0e4e4a, indexSamSho1Sprites_TamTam, 0x01 },
    { L"Tam Tam P Weapon 3", 0x0e4e4a, 0x0e4e6a, indexSamSho1Sprites_TamTam, 0x01 },
    { L"Tam Tam P Poisoned", 0x0e4e6a, 0x0e4e8a, indexSamSho1Sprites_TamTam, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_TAMTAM_K[] =
{
    { L"Tam Tam K", 0x0e598a, 0x0e59aa, indexSamSho1Sprites_TamTam, 0x00, &pairNext4 },
    { L"Tam Tam K Rage 1", 0x0e59aa, 0x0e59ca, indexSamSho1Sprites_TamTam, 0x00, &pairNext4 },
    { L"Tam Tam K Rage 2", 0x0e59ca, 0x0e59ea, indexSamSho1Sprites_TamTam, 0x00, &pairNext4 },
    { L"Tam Tam K Zapped/Burned", 0x0e59ea, 0x0e5a0a, indexSamSho1Sprites_TamTam, 0x00, &pairNext },
    { L"Tam Tam K Weapon 1", 0x0e5a0a, 0x0e5a2a, indexSamSho1Sprites_TamTam, 0x01 },
    { L"Tam Tam K Weapon 2", 0x0e5a2a, 0x0e5a4a, indexSamSho1Sprites_TamTam, 0x01 },
    { L"Tam Tam K Weapon 3", 0x0e5a4a, 0x0e5a6a, indexSamSho1Sprites_TamTam, 0x01 },
    { L"Tam Tam K Poisoned", 0x0e5a6a, 0x0e5a8a, indexSamSho1Sprites_TamTam, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_GALFORD_P[] =
{
    { L"Galford P", 0x0e4e8a, 0x0e4eaa, indexSamSho1Sprites_Galford, 0x00, &pairNext4 },
    { L"Galford P Rage 1", 0x0e4eaa, 0x0e4eca, indexSamSho1Sprites_Galford, 0x00, &pairNext4 },
    { L"Galford P Rage 2", 0x0e4eca, 0x0e4eea, indexSamSho1Sprites_Galford, 0x00, &pairNext4 },
    { L"Galford P Zapped/Burned", 0x0e4eea, 0x0e4f0a, indexSamSho1Sprites_Galford, 0x00, &pairNext },
    { L"Galford P Weapon 1", 0x0e4f0a, 0x0e4f2a, indexSamSho1Sprites_Galford, 0x01 },
    { L"Galford P Weapon 2", 0x0e4f2a, 0x0e4f4a, indexSamSho1Sprites_Galford, 0x01 },
    { L"Galford P Weapon 3", 0x0e4f4a, 0x0e4f6a, indexSamSho1Sprites_Galford, 0x01 },
    { L"Galford P Poisoned", 0x0e4f6a, 0x0e4f8a, indexSamSho1Sprites_Galford, 0x00 },
    { L"Poppy P", 0x0e676a, 0x0e678a, indexSamSho1Sprites_Galford, 0x02 },
};

const sGame_PaletteDataset SAMSHO1_A_GALFORD_K[] =
{
    { L"Galford K", 0x0e5a8a, 0x0e5aaa, indexSamSho1Sprites_Galford, 0x00, &pairNext4 },
    { L"Galford K Rage 1", 0x0e5aaa, 0x0e5aca, indexSamSho1Sprites_Galford, 0x00, &pairNext4 },
    { L"Galford K Rage 2", 0x0e5aca, 0x0e5aea, indexSamSho1Sprites_Galford, 0x00, &pairNext4 },
    { L"Galford K Zapped/Burned", 0x0e5aea, 0x0e5b0a, indexSamSho1Sprites_Galford, 0x00, &pairNext },
    { L"Galford K Weapon 1", 0x0e5b0a, 0x0e5b2a, indexSamSho1Sprites_Galford, 0x01 },
    { L"Galford K Weapon 2", 0x0e5b2a, 0x0e5b4a, indexSamSho1Sprites_Galford, 0x01 },
    { L"Galford K Weapon 3", 0x0e5b4a, 0x0e5b6a, indexSamSho1Sprites_Galford, 0x0 },
    { L"Galford K Poisoned", 0x0e5b6a, 0x0e5b8a, indexSamSho1Sprites_Galford, 0x00 },
    { L"Poppy K", 0x0e678a, 0x0e67aa, indexSamSho1Sprites_Galford, 0x02 },
};

const sGame_PaletteDataset SAMSHO1_A_HANZO_P[] =
{
    { L"Hanzo P", 0x0e4f8a, 0x0e4faa, indexSamSho1Sprites_Hanzo, 0x00, &pairNext4 },
    { L"Hanzo P Rage 1", 0x0e4faa, 0x0e4fca, indexSamSho1Sprites_Hanzo, 0x00, &pairNext4 },
    { L"Hanzo P Rage 2", 0x0e4fca, 0x0e4fea, indexSamSho1Sprites_Hanzo, 0x00, &pairNext4 },
    { L"Hanzo P Zapped/Burned", 0x0e4fea, 0x0e500a, indexSamSho1Sprites_Hanzo, 0x00, &pairNext },
    { L"Hanzo P Weapon 1", 0x0e500a, 0x0e502a, indexSamSho1Sprites_Hanzo, 0x01 },
    { L"Hanzo P Weapon 2", 0x0e502a, 0x0e504a, indexSamSho1Sprites_Hanzo, 0x01 },
    { L"Hanzo P Weapon 3", 0x0e504a, 0x0e506a, indexSamSho1Sprites_Hanzo, 0x01 },
    { L"Hanzo P Poisoned", 0x0e506a, 0x0e508a, indexSamSho1Sprites_Hanzo, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_HANZO_K[] =
{
    { L"Hanzo K", 0x0e5b8a, 0x0e5baa, indexSamSho1Sprites_Hanzo, 0x00, &pairNext4 },
    { L"Hanzo K Rage 1", 0x0e5baa, 0x0e5bca, indexSamSho1Sprites_Hanzo, 0x00, &pairNext4 },
    { L"Hanzo K Rage 2", 0x0e5bca, 0x0e5bea, indexSamSho1Sprites_Hanzo, 0x00, &pairNext4 },
    { L"Hanzo K Zapped/Burned", 0x0e5bea, 0x0e5c0a, indexSamSho1Sprites_Hanzo, 0x00, &pairNext },
    { L"Hanzo K Weapon 1", 0x0e5c0a, 0x0e5c2a, indexSamSho1Sprites_Hanzo, 0x01 },
    { L"Hanzo K Weapon 2", 0x0e5c2a, 0x0e5c4a, indexSamSho1Sprites_Hanzo, 0x01 },
    { L"Hanzo K Weapon 3", 0x0e5c4a, 0x0e5c6a, indexSamSho1Sprites_Hanzo, 0x0 },
    { L"Hanzo K Poisoned", 0x0e5c6a, 0x0e5c8a, indexSamSho1Sprites_Hanzo, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_WANFU_P[] =
{
    { L"Wan-Fu P", 0x0e518a, 0x0e51aa, indexSamSho1Sprites_Wanfu, 0x00, &pairNext4 },
    { L"Wan-Fu P Rage 1", 0x0e51aa, 0x0e51ca, indexSamSho1Sprites_Wanfu, 0x00, &pairNext4 },
    { L"Wan-Fu P Rage 2", 0x0e51ca, 0x0e51ea, indexSamSho1Sprites_Wanfu, 0x00, &pairNext4 },
    { L"Wan-Fu P Zapped/Burned", 0x0e51ea, 0x0e520a, indexSamSho1Sprites_Wanfu, 0x00, &pairNext },
    { L"Wan-Fu P Weapon 1", 0x0e520a, 0x0e522a, indexSamSho1Sprites_Wanfu, 0x01 },
    { L"Wan-Fu P Weapon 2", 0x0e522a, 0x0e524a, indexSamSho1Sprites_Wanfu, 0x01 },
    { L"Wan-Fu P Weapon 3", 0x0e524a, 0x0e526a, indexSamSho1Sprites_Wanfu, 0x01 },
    { L"Wan-Fu P Poisoned", 0x0e526a, 0x0e528a, indexSamSho1Sprites_Wanfu, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_WANFU_K[] =
{
    { L"Wan-Fu K", 0x0e5d8a, 0x0e5daa, indexSamSho1Sprites_Wanfu, 0x00, &pairNext4 },
    { L"Wan-Fu K Rage 1", 0x0e5daa, 0x0e5dca, indexSamSho1Sprites_Wanfu, 0x00, &pairNext4 },
    { L"Wan-Fu K Rage 2", 0x0e5dca, 0x0e5dea, indexSamSho1Sprites_Wanfu, 0x00, &pairNext4 },
    { L"Wan-Fu K Zapped/Burned", 0x0e5dea, 0x0e5e0a, indexSamSho1Sprites_Wanfu, 0x00, &pairNext },
    { L"Wan-Fu K Weapon 1", 0x0e5e0a, 0x0e5e2a, indexSamSho1Sprites_Wanfu, 0x01 },
    { L"Wan-Fu K Weapon 2", 0x0e5e2a, 0x0e5e4a, indexSamSho1Sprites_Wanfu, 0x01 },
    { L"Wan-Fu K Weapon 3", 0x0e5e4a, 0x0e5e6a, indexSamSho1Sprites_Wanfu, 0x01 },
    { L"Wan-Fu K Poisoned", 0x0e5e6a, 0x0e5e8a, indexSamSho1Sprites_Wanfu, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_KYOSHIRO_P[] =
{
    { L"Kyoshiro P", 0x0e528a, 0x0e52aa, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext4 },
    { L"Kyoshiro P Rage 1", 0x0e52aa, 0x0e52ca, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext4 },
    { L"Kyoshiro P Rage 2", 0x0e52ca, 0x0e52ea, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext4 },
    { L"Kyoshiro P Zapped/Burned", 0x0e52ea, 0x0e530a, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext },
    { L"Kyoshiro P Weapon 1", 0x0e530a, 0x0e532a, indexSamSho1Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro P Weapon 2", 0x0e532a, 0x0e534a, indexSamSho1Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro P Weapon 3", 0x0e534a, 0x0e536a, indexSamSho1Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro P Poisoned", 0x0e536a, 0x0e538a, indexSamSho1Sprites_Kyoshiro, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_KYOSHIRO_K[] =
{
    { L"Kyoshiro K", 0x0e5e8a, 0x0e5eaa, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext4 },
    { L"Kyoshiro K Rage 1", 0x0e5eaa, 0x0e5eca, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext4 },
    { L"Kyoshiro K Rage 2", 0x0e5eca, 0x0e5eea, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext4 },
    { L"Kyoshiro K Zapped/Burned", 0x0e5eea, 0x0e5f0a, indexSamSho1Sprites_Kyoshiro, 0x00, &pairNext },
    { L"Kyoshiro K Weapon 1", 0x0e5f0a, 0x0e5f2a, indexSamSho1Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro K Weapon 2", 0x0e5f2a, 0x0e5f4a, indexSamSho1Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro K Weapon 3", 0x0e5f4a, 0x0e5f6a, indexSamSho1Sprites_Kyoshiro, 0x01 },
    { L"Kyoshiro K Poisoned", 0x0e5f6a, 0x0e5f8a, indexSamSho1Sprites_Kyoshiro, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_UKYO_P[] =
{
    { L"Ukyo P", 0x0e538a, 0x0e53aa, indexSamSho1Sprites_Ukyo, 0x00, &pairNext4 },
    { L"Ukyo P Rage 1", 0x0e53aa, 0x0e53ca, indexSamSho1Sprites_Ukyo, 0x00, &pairNext4 },
    { L"Ukyo P Rage 2", 0x0e53ca, 0x0e53ea, indexSamSho1Sprites_Ukyo, 0x00, &pairNext4 },
    { L"Ukyo P Zapped/Burned", 0x0e53ea, 0x0e540a, indexSamSho1Sprites_Ukyo, 0x00, &pairNext },
    { L"Ukyo P Weapon 1", 0x0e540a, 0x0e542a, indexSamSho1Sprites_Ukyo, 0x01 },
    { L"Ukyo P Weapon 2", 0x0e542a, 0x0e544a, indexSamSho1Sprites_Ukyo, 0x01 },
    { L"Ukyo P Weapon 3", 0x0e544a, 0x0e546a, indexSamSho1Sprites_Ukyo, 0x01 },
    { L"Ukyo P Poisoned", 0x0e546a, 0x0e548a, indexSamSho1Sprites_Ukyo, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_UKYO_K[] =
{
    { L"Ukyo K", 0x0e5f8a, 0x0e5faa, indexSamSho1Sprites_Ukyo, 0x00, &pairNext4 },
    { L"Ukyo K Rage 1", 0x0e5faa, 0x0e5fca, indexSamSho1Sprites_Ukyo, 0x00, &pairNext4 },
    { L"Ukyo K Rage 2", 0x0e5fca, 0x0e5fea, indexSamSho1Sprites_Ukyo, 0x00, &pairNext4 },
    { L"Ukyo K Zapped/Burned", 0x0e5fea, 0x0e600a, indexSamSho1Sprites_Ukyo, 0x00, &pairNext },
    { L"Ukyo K Weapon 1", 0x0e600a, 0x0e602a, indexSamSho1Sprites_Ukyo, 0x01 },
    { L"Ukyo K Weapon 2", 0x0e602a, 0x0e604a, indexSamSho1Sprites_Ukyo, 0x01 },
    { L"Ukyo K Weapon 3", 0x0e604a, 0x0e606a, indexSamSho1Sprites_Ukyo, 0x01 },
    { L"Ukyo K Poisoned", 0x0e606a, 0x0e608a, indexSamSho1Sprites_Ukyo, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_GENAN_P[] =
{
    { L"Gen-an P", 0x0e548a, 0x0e54aa, indexSamSho1Sprites_Genan, 0x00, &pairNext4 },
    { L"Gen-an P Rage 1", 0x0e54aa, 0x0e54ca, indexSamSho1Sprites_Genan, 0x00, &pairNext4 },
    { L"Gen-an P Rage 2", 0x0e54ca, 0x0e54ea, indexSamSho1Sprites_Genan, 0x00, &pairNext4 },
    { L"Gen-an P Zapped/Burned", 0x0e54ea, 0x0e550a, indexSamSho1Sprites_Genan, 0x00, &pairNext },
    { L"Gen-an P Weapon 1", 0x0e550a, 0x0e552a, indexSamSho1Sprites_Genan, 0x01 },
    { L"Gen-an P Weapon 2", 0x0e552a, 0x0e554a, indexSamSho1Sprites_Genan, 0x01 },
    { L"Gen-an P Weapon 3", 0x0e554a, 0x0e556a, indexSamSho1Sprites_Genan, 0x01 },
    { L"Gen-an P Poisoned", 0x0e556a, 0x0e558a, indexSamSho1Sprites_Genan, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_GENAN_K[] =
{
    { L"Gen-an K", 0x0e608a, 0x0e60aa, indexSamSho1Sprites_Genan, 0x00, &pairNext4 },
    { L"Gen-an K Rage 1", 0x0e60aa, 0x0e60ca, indexSamSho1Sprites_Genan, 0x00, &pairNext4 },
    { L"Gen-an K Rage 2", 0x0e60ca, 0x0e60ea, indexSamSho1Sprites_Genan, 0x00, &pairNext4 },
    { L"Gen-an K Zapped/Burned", 0x0e60ea, 0x0e610a, indexSamSho1Sprites_Genan, 0x00, &pairNext },
    { L"Gen-an K Weapon 1", 0x0e610a, 0x0e612a, indexSamSho1Sprites_Genan, 0x01 },
    { L"Gen-an K Weapon 2", 0x0e612a, 0x0e614a, indexSamSho1Sprites_Genan, 0x01 },
    { L"Gen-an K Weapon 3", 0x0e614a, 0x0e616a, indexSamSho1Sprites_Genan, 0x01 },
    { L"Gen-an K Poisoned", 0x0e616a, 0x0e618a, indexSamSho1Sprites_Genan, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_GENAN_EFFECTS[] =
{
    { L"Gen-an Poison Blizzard", 0x0e686a, 0x0e688a },
};

const sGame_PaletteDataset SAMSHO1_A_EARTHQUAKE_P[] =
{
    { L"Earthquake P", 0x0e558a, 0x0e55aa, indexSamSho1Sprites_Earthquake, 0x00, &pairNext4 },
    { L"Earthquake P Rage 1", 0x0e55aa, 0x0e55ca, indexSamSho1Sprites_Earthquake, 0x00, &pairNext4 },
    { L"Earthquake P Rage 2", 0x0e55ca, 0x0e55ea, indexSamSho1Sprites_Earthquake, 0x00, &pairNext4 },
    { L"Earthquake P Zapped/Burned", 0x0e55ea, 0x0e560a, indexSamSho1Sprites_Earthquake, 0x00, &pairNext },
    { L"Earthquake P Weapon 1", 0x0e560a, 0x0e562a, indexSamSho1Sprites_Earthquake, 0x01 },
    { L"Earthquake P Weapon 2", 0x0e562a, 0x0e564a, indexSamSho1Sprites_Earthquake, 0x01 },
    { L"Earthquake P Weapon 3", 0x0e564a, 0x0e566a, indexSamSho1Sprites_Earthquake, 0x01 },
    { L"Earthquake P Poisoned", 0x0e566a, 0x0e568a, indexSamSho1Sprites_Earthquake, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_EARTHQUAKE_K[] =
{
    { L"Earthquake K", 0x0e618a, 0x0e61aa, indexSamSho1Sprites_Earthquake, 0x00, &pairNext4 },
    { L"Earthquake K Rage 1", 0x0e61aa, 0x0e61ca, indexSamSho1Sprites_Earthquake, 0x00, &pairNext4 },
    { L"Earthquake K Rage 2", 0x0e61ca, 0x0e61ea, indexSamSho1Sprites_Earthquake, 0x00, &pairNext4 },
    { L"Earthquake K Zapped/Burned", 0x0e61ea, 0x0e620a, indexSamSho1Sprites_Earthquake, 0x00, &pairNext },
    { L"Earthquake K Weapon 1", 0x0e620a, 0x0e622a, indexSamSho1Sprites_Earthquake, 0x01 },
    { L"Earthquake K Weapon 2", 0x0e622a, 0x0e624a, indexSamSho1Sprites_Earthquake, 0x01 },
    { L"Earthquake K Weapon 3", 0x0e624a, 0x0e626a, indexSamSho1Sprites_Earthquake, 0x01 },
    { L"Earthquake K Poisoned", 0x0e626a, 0x0e628a, indexSamSho1Sprites_Earthquake, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_JUBEI_P[] =
{
    { L"Jubei P", 0x0e568a, 0x0e56aa, indexSamSho1Sprites_Jubei, 0x00, &pairNext4 },
    { L"Jubei P Rage 1", 0x0e56aa, 0x0e56ca, indexSamSho1Sprites_Jubei, 0x00, &pairNext4 },
    { L"Jubei P Rage 2", 0x0e56ca, 0x0e56ea, indexSamSho1Sprites_Jubei, 0x00, &pairNext4 },
    { L"Jubei P Zapped/Burned", 0x0e56ea, 0x0e570a, indexSamSho1Sprites_Jubei, 0x00, &pairNext },
    { L"Jubei P Weapon 1", 0x0e570a, 0x0e572a, indexSamSho1Sprites_Jubei, 0x01 },
    { L"Jubei P Weapon 2", 0x0e572a, 0x0e574a, indexSamSho1Sprites_Jubei, 0x01 },
    { L"Jubei P Weapon 3", 0x0e574a, 0x0e576a, indexSamSho1Sprites_Jubei, 0x01 },
    { L"Jubei P Poisoned", 0x0e576a, 0x0e578a, indexSamSho1Sprites_Jubei, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_JUBEI_K[] =
{
    { L"Jubei K", 0x0e628a, 0x0e62aa, indexSamSho1Sprites_Jubei, 0x00, &pairNext4 },
    { L"Jubei K Rage 1", 0x0e62aa, 0x0e62ca, indexSamSho1Sprites_Jubei, 0x00, &pairNext4 },
    { L"Jubei K Rage 2", 0x0e62ca, 0x0e62ea, indexSamSho1Sprites_Jubei, 0x00, &pairNext4 },
    { L"Jubei K Zapped/Burned", 0x0e62ea, 0x0e630a, indexSamSho1Sprites_Jubei, 0x00, &pairNext },
    { L"Jubei K Weapon 1", 0x0e630a, 0x0e632a, indexSamSho1Sprites_Jubei, 0x01 },
    { L"Jubei K Weapon 2", 0x0e632a, 0x0e634a, indexSamSho1Sprites_Jubei, 0x01 },
    { L"Jubei K Weapon 3", 0x0e634a, 0x0e636a, indexSamSho1Sprites_Jubei, 0x01 },
    { L"Jubei K Poisoned", 0x0e636a, 0x0e638a, indexSamSho1Sprites_Jubei, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_CHARLOTTE_P[] =
{
    { L"Charlotte P", 0x0e578a, 0x0e57aa, indexSamSho1Sprites_Charlotte, 0x00, &pairNext4 },
    { L"Charlotte P Rage 1", 0x0e57aa, 0x0e57ca, indexSamSho1Sprites_Charlotte, 0x00, &pairNext4 },
    { L"Charlotte P Rage 2", 0x0e57ca, 0x0e57ea, indexSamSho1Sprites_Charlotte, 0x00, &pairNext4 },
    { L"Charlotte P Zapped/Burned", 0x0e57ea, 0x0e580a, indexSamSho1Sprites_Charlotte, 0x00, &pairNext },
    { L"Charlotte P Weapon 1", 0x0e580a, 0x0e582a, indexSamSho1Sprites_Charlotte, 0x01 },
    { L"Charlotte P Weapon 2", 0x0e582a, 0x0e584a, indexSamSho1Sprites_Charlotte, 0x01 },
    { L"Charlotte P Weapon 3", 0x0e584a, 0x0e586a, indexSamSho1Sprites_Charlotte, 0x01 },
    { L"Charlotte P Poisoned", 0x0e586a, 0x0e588a, indexSamSho1Sprites_Charlotte, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_CHARLOTTE_K[] =
{
    { L"Charlotte K", 0x0e638a, 0x0e63aa, indexSamSho1Sprites_Charlotte, 0x00, &pairNext4 },
    { L"Charlotte K Rage 1", 0x0e63aa, 0x0e63ca, indexSamSho1Sprites_Charlotte, 0x00, &pairNext4 },
    { L"Charlotte K Rage 2", 0x0e63ca, 0x0e63ea, indexSamSho1Sprites_Charlotte, 0x00, &pairNext4 },
    { L"Charlotte K Zapped/Burned", 0x0e63ea, 0x0e640a, indexSamSho1Sprites_Charlotte, 0x00, &pairNext },
    { L"Charlotte K Weapon 1", 0x0e640a, 0x0e642a, indexSamSho1Sprites_Charlotte, 0x01 },
    { L"Charlotte K Weapon 2", 0x0e642a, 0x0e644a, indexSamSho1Sprites_Charlotte, 0x01 },
    { L"Charlotte K Weapon 3", 0x0e644a, 0x0e646a, indexSamSho1Sprites_Charlotte, 0x01 },
    { L"Charlotte K Poisoned", 0x0e646a, 0x0e648a, indexSamSho1Sprites_Charlotte, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_CHARLOTTE_EFFECTS[] =
{
    { L"Charlotte Power Gradation", 0x0e67aa, 0x0e67ca },
};

const sGame_PaletteDataset SAMSHO1_A_AMAKUSA[] =
{
    { L"Amakusa", 0x0ea88a, 0x0ea8aa, indexSamSho1Sprites_Amakusa, 0x00, &pairNext4 },
    { L"Amakusa Rage 1", 0x0ea8aa, 0x0ea8ca, indexSamSho1Sprites_Amakusa, 0x00, &pairNext4 },
    { L"Amakusa Rage 2", 0x0ea8ca, 0x0ea8ea, indexSamSho1Sprites_Amakusa, 0x00, &pairNext4 },
    { L"Amakusa Zapped/Burned", 0x0ea8ea, 0x0ea90a, indexSamSho1Sprites_Amakusa, 0x00, &pairNext },
    { L"Amakusa Weapon 1", 0x0ea90a, 0x0ea92a, indexSamSho1Sprites_Amakusa, 0x01 },
    { L"Amakusa Weapon 2", 0x0ea92a, 0x0ea94a, indexSamSho1Sprites_Amakusa, 0x01 },
    { L"Amakusa Weapon 3", 0x0ea94a, 0x0ea96a, indexSamSho1Sprites_Amakusa, 0x01 },
    { L"Amakusa Poisoned", 0x0ea96a, 0x0ea98a, indexSamSho1Sprites_Amakusa, 0x00 },
};

const sGame_PaletteDataset SAMSHO1_A_Amakusa_Effects[] =
{
    { L"Amakusa Fireball", 0x0e688a, 0x0e68aa },
    // duped into the stage { L"Amakusa Smoke/Super Fireball", 0x0e694a, 0x0e696a },
};

const sGame_PaletteDataset SAMSHO1_A_STAGES_PALETTES[] =
{
    { L"USA Spanish Texas Earthquake Stage", 0xe6bea, 0xe6c0a },
    { L"Shiro Tokisada Amakusa Stage ", 0xe68ca, 0xe696a },
    { L"Japan Jokamachi Haohmaru Stage", 0xe6c8a, 0xe6e8a },
    { L"China Seian Wan-Fu Stage (1/2) 0xe6e8a", 0xe6e8a, 0xe708a },
    { L"China Seian Wan-Fu Stage (2/2) 0xe708a", 0xe708a, 0xe720a },
    { L"Japan Bamboo Forest  Jubei Yagyu Stage", 0xe722a, 0xe724a },
    { L"Japan Mountains of Deva Hanzo Hattori Stage (1/2) 0xe768a", 0xe768a, 0xe788a },
    { L"Japan Mountains of Deva Hanzo Hattori Stage (2/2) 0xe788a", 0xe788a, 0xe7a6a },
    { L"Japan Bamboo Forest  Jubei Yagyu Stage", 0xe7b8a, 0xe7d8a },
    { L"Japan Jokamachi Haohmaru Stage", 0xe7eaa, 0xe7f2a },
    { L"Japan Koka Ukyo Tachibana Stage", 0xe808a, 0xe828a },
    { L"Japan Edo Kyoshiro Senryo Stage", 0xe828a, 0xe82aa },
    { L"Japan Onigami Isle Genan Shiranui Stage", 0xe82ca, 0xe848a },
    { L"Japan Edo Kyoshiro Senryo Stage", 0xe848a, 0xe868a },
    { L"USA San Francisco Galford D. Weller Stage ", 0xe868a, 0xe888a },
    { L"USA Spanish Texas Earthquake Stage (1/2) 0xe888a", 0xe888a, 0xe8a8a },
    { L"USA Spanish Texas Earthquake Stage (2/2) 0xe8a8a", 0xe8a8a, 0xe8b0a },
    { L"USA San Francisco Galford D. Weller Stage", 0xe8b0a, 0xe8bca },
    { L"France Paris Charlotte Christine de Colde Stage", 0xe8bca, 0xe8d0a },
    { L"France Paris Charlotte Christine de Colde Stage (1/2) 0xe8e8a", 0xe8e8a, 0xe908a },
    { L"France Paris Charlotte Christine de Colde Stage (2/2) 0xe908a", 0xe908a, 0xe912a },
    { L"Japan Kōka Ukyo Tachibana Stage", 0xe912a, 0xe91ca },
    { L"France Paris Charlotte Christine de Colde Stage", 0xe91ca, 0xe924a },
    { L"USA San Francisco Galford D. Weller Stage", 0xe924a, 0xe926a },
    { L"Japan Koka Ukyo Tachibana Stage", 0xe92aa, 0xe932a },
    { L"Japan Hokkaido Nakoruru Stage (1/3) 0xe948a", 0xe948a, 0xe968a },
    { L"Japan Hokkaido Nakoruru Stage (2/3) 0xe968a", 0xe968a, 0xe988a },
    { L"Japan Hokkaido Nakoruru Stage (3/3) 0xe988a", 0xe988a, 0xe998a },
    { L"Japan Hokkaido Nakoruru Stage", 0xe9caa, 0xe9cca },
    { L"Shiro Tokisada Amakusa Stage (1/4) 0xe9cca", 0xe9cca, 0xe9eca },
    { L"Shiro Tokisada Amakusa Stage (2/4) 0xe9eca", 0xe9eca, 0xea0ca },
    { L"Shiro Tokisada Amakusa Stage (3/4) 0xea0ca", 0xea0ca, 0xea2ca },
    { L"Shiro Tokisada Amakusa Stage (4/4) 0xea2ca", 0xea2ca, 0xea30a },
    { L"South America Green Hell Tam Tam Stage (1/2) 0xea30a", 0xea30a, 0xea50a },
    { L"South America Green Hell Tam Tam Stage (2/2) 0xea50a", 0xea50a, 0xea64a },
};

const sGame_PaletteDataset SAMSHO1_A_BONUS_INGAME[] =
{
    //Ingame Extras
    { L"Shadow/Thrower", 0x0e648a, 0x0e64aa },
    { L"Thrower Extra 1", 0x0e64ea, 0x0e650a },
    { L"Thrower Extra 2", 0x0e650a, 0x0e652a },
    { L"Thrower Extra 3/Smoke", 0x0e654a, 0x0e656a },
    { L"Thrower Extra 4/Blood 2", 0x0e656a, 0x0e658a },
    { L"Bomb", 0x0e670a, 0x0e672a },
    { L"Lifebar/Tutorial Text", 0x0e4aea, 0x0e4b0a },
    { L"Low Lifebar Changing 1", 0x0e4b0a, 0x0e4b2a },
    { L"Low Lifebar Changing 2", 0x0e4b8a, 0x0e4baa },
    { L"Flash", 0x0e4b2a, 0x0e4b4a },
    { L"Pow Bar", 0x0e4b4a, 0x0e4b6a },
    { L"Right Kuroko (Referee)", 0x0e67ea, 0x0e680a },
    { L"Left Kuroko (Referee)", 0x0e680a, 0x0e682a },
};

const sGame_PaletteDataset SAMSHO1_A_BONUS_ThrowedWeapons[] =
{
    { L"Charlotte Weapon", 0x0e682a, 0x0e684a },
    { L"Earthquake Weapon", 0x0e65ea, 0x0e660a },
    { L"Galford/Hanzo Weapon", 0x0e66aa, 0x0e66ca },
    { L"Gen-an Weapon", 0x0e658a, 0x0e65aa },
    { L"Haohmaru Weapon ", 0x0e664a, 0x0e666a },
    { L"Jubei Weapon", 0x0e668a, 0x0e66aa },
    { L"Kyoshiro Weapon ", 0x0e660a, 0x0e662a },
    { L"Nakoruru Weapon", 0x0e666a, 0x0e668a },
    { L"Tam Tam Weapon", 0x0e65aa, 0x0e65ca },
    { L"Ukyo Weapon ", 0x0e662a, 0x0e664a },
    { L"Wan-Fu Weapon", 0x0e65ca, 0x0e65ea },
};

const sGame_PaletteDataset SAMSHO1_A_BONUS_SharedEffects[] =
{
    { L"Hitsparks/Dust/Blood 1", 0x0e64aa, 0x0e64ca },
    { L"Weaponsparks/N-J Effects", 0x0e64ca, 0x0e64ea },
    { L"Imitate Replica", 0x0e652a, 0x0e654a },
    //{ L"Tam Tam/Amakusa Effects 1", 0x0e68ca, 0x0e68ea },
    //{ L"Tam Tam/Amakusa Effects 2", 0x0e68ea, 0x0e690a },
    //{ L"Tam Tam/Amakusa Effects 3", 0x0e690a, 0x0e692a },
    //{ L"Tam Tam/Amakusa Effects 4", 0x0e692a, 0x0e694a },
    { L"Apple/Fire Effects 1", 0x0e66ca, 0x0e66ea },
    { L"Fire Effects 2", 0x0e67ca, 0x0e67ea },
    { L"Fire Effects 3", 0x0e684a, 0x0e686a },
};

const sGame_PaletteDataset SAMSHO1_A_BONUS_Intro[] =
{
    { L"Intro Background", 0x0e69ea, 0x0e6a0a },
    { L"Intro Sword", 0x0e696a, 0x0e698a },
    { L"Intro Tree", 0x0e698a, 0x0e69aa },
    { L"Intro Lamp", 0x0e69aa, 0x0e69ca },
    { L"Intro Leafs/Tam Tam Extra", 0x0e69ca, 0x0e69ea },
    { L"SNK Logo", 0x0e4aca, 0x0e4aea },
    { L"Logo/Challenger Text", 0x0e4baa, 0x0e4bca },
};

const sGame_PaletteDataset SAMSHO1_A_BONUS_SelectScreen[] =
{
    { L"Text Board", 0x0e6a6a, 0x0e6a8a },
    { L"Various Text 1", 0x0e4a8a, 0x0e4aaa },
    { L"Various Text 2", 0x0e4aaa, 0x0e4aca },
    { L"Map Text", 0x0e4bea, 0x0e4c0a },
    { L"Menu Background", 0x0e4c0a, 0x0e4c2a },
    { L"Map Background 1", 0x0e4c2a, 0x0e4c4a },
    { L"Map Background 2", 0x0e4c4a, 0x0e4c6a },
    { L"Map Background 3", 0x0e4c6a, 0x0e4c8a },
    { L"Select Screen Icons", 0x0ea68a, 0x0ea82a, indexSamSho1Sprites_Bonus, 0x00 },
};

const sDescTreeNode SAMSHO1_A_HAOHMARU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HAOHMARU_P, ARRAYSIZE(SAMSHO1_A_HAOHMARU_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HAOHMARU_K, ARRAYSIZE(SAMSHO1_A_HAOHMARU_K) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HAOHMARU_EFFECTS, ARRAYSIZE(SAMSHO1_A_HAOHMARU_EFFECTS) },
};

const sDescTreeNode SAMSHO1_A_NAKORURU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_NAKORURU_P, ARRAYSIZE(SAMSHO1_A_NAKORURU_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_NAKORURU_K, ARRAYSIZE(SAMSHO1_A_NAKORURU_K) },
};

const sDescTreeNode SAMSHO1_A_TAMTAM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_TAMTAM_P, ARRAYSIZE(SAMSHO1_A_TAMTAM_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_TAMTAM_K, ARRAYSIZE(SAMSHO1_A_TAMTAM_K) },
};

const sDescTreeNode SAMSHO1_A_GALFORD_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GALFORD_P, ARRAYSIZE(SAMSHO1_A_GALFORD_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GALFORD_K, ARRAYSIZE(SAMSHO1_A_GALFORD_K) },
};

const sDescTreeNode SAMSHO1_A_HANZO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HANZO_P, ARRAYSIZE(SAMSHO1_A_HANZO_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HANZO_K, ARRAYSIZE(SAMSHO1_A_HANZO_K) },
};

const sDescTreeNode SAMSHO1_A_WANFU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_WANFU_P, ARRAYSIZE(SAMSHO1_A_WANFU_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_WANFU_K, ARRAYSIZE(SAMSHO1_A_WANFU_K) },
};

const sDescTreeNode SAMSHO1_A_KYOSHIRO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_KYOSHIRO_P, ARRAYSIZE(SAMSHO1_A_KYOSHIRO_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_KYOSHIRO_K, ARRAYSIZE(SAMSHO1_A_KYOSHIRO_K) },
};

const sDescTreeNode SAMSHO1_A_UKYO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_UKYO_P, ARRAYSIZE(SAMSHO1_A_UKYO_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_UKYO_K, ARRAYSIZE(SAMSHO1_A_UKYO_K) },
};

const sDescTreeNode SAMSHO1_A_GENAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GENAN_P, ARRAYSIZE(SAMSHO1_A_GENAN_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GENAN_K, ARRAYSIZE(SAMSHO1_A_GENAN_K) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GENAN_EFFECTS, ARRAYSIZE(SAMSHO1_A_GENAN_EFFECTS) },
};

const sDescTreeNode SAMSHO1_A_EARTHQUAKE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_EARTHQUAKE_P, ARRAYSIZE(SAMSHO1_A_EARTHQUAKE_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_EARTHQUAKE_K, ARRAYSIZE(SAMSHO1_A_EARTHQUAKE_K) },
};

const sDescTreeNode SAMSHO1_A_JUBEI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_JUBEI_P, ARRAYSIZE(SAMSHO1_A_JUBEI_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_JUBEI_K, ARRAYSIZE(SAMSHO1_A_JUBEI_K) },
};

const sDescTreeNode SAMSHO1_A_CHARLOTTE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_CHARLOTTE_P, ARRAYSIZE(SAMSHO1_A_CHARLOTTE_P) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_CHARLOTTE_K, ARRAYSIZE(SAMSHO1_A_CHARLOTTE_K) },
};

const sDescTreeNode SAMSHO1_A_AMAKUSA_COLLECTION[] =
{
    { L"Amakusa", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_AMAKUSA, ARRAYSIZE(SAMSHO1_A_AMAKUSA) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_Amakusa_Effects, ARRAYSIZE(SAMSHO1_A_Amakusa_Effects) },
};

const sDescTreeNode SAMSHO1_A_STAGES_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_STAGES_PALETTES, ARRAYSIZE(SAMSHO1_A_STAGES_PALETTES) },
};

const sDescTreeNode SAMSHO1_A_BONUS_COLLECTION[] =
{
    { L"In-Game", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_BONUS_INGAME, ARRAYSIZE(SAMSHO1_A_BONUS_INGAME) },
    { L"Thrown Weapons", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_BONUS_ThrowedWeapons, ARRAYSIZE(SAMSHO1_A_BONUS_ThrowedWeapons) },
    { L"Shared Effects", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_BONUS_SharedEffects, ARRAYSIZE(SAMSHO1_A_BONUS_SharedEffects) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_BONUS_Intro, ARRAYSIZE(SAMSHO1_A_BONUS_Intro) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_BONUS_SelectScreen, ARRAYSIZE(SAMSHO1_A_BONUS_SelectScreen) },
};

const sDescTreeNode SAMSHO1_A_UNITS[] =
{
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HAOHMARU_COLLECTION, ARRAYSIZE(SAMSHO1_A_HAOHMARU_COLLECTION) },
    { L"Tam Tam", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_TAMTAM_COLLECTION, ARRAYSIZE(SAMSHO1_A_TAMTAM_COLLECTION) },
    { L"Galford", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GALFORD_COLLECTION, ARRAYSIZE(SAMSHO1_A_GALFORD_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_HANZO_COLLECTION, ARRAYSIZE(SAMSHO1_A_HANZO_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_NAKORURU_COLLECTION, ARRAYSIZE(SAMSHO1_A_NAKORURU_COLLECTION) },
    { L"Wan-Fu", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_WANFU_COLLECTION, ARRAYSIZE(SAMSHO1_A_WANFU_COLLECTION) },
    { L"Kyoshiro", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_KYOSHIRO_COLLECTION, ARRAYSIZE(SAMSHO1_A_KYOSHIRO_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_UKYO_COLLECTION, ARRAYSIZE(SAMSHO1_A_UKYO_COLLECTION) },
    { L"Gen-an", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_GENAN_COLLECTION, ARRAYSIZE(SAMSHO1_A_GENAN_COLLECTION) },
    { L"Earthquake", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_EARTHQUAKE_COLLECTION, ARRAYSIZE(SAMSHO1_A_EARTHQUAKE_COLLECTION) },
    { L"Jubei", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_JUBEI_COLLECTION, ARRAYSIZE(SAMSHO1_A_JUBEI_COLLECTION) },
    { L"Charlotte", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_CHARLOTTE_COLLECTION, ARRAYSIZE(SAMSHO1_A_CHARLOTTE_COLLECTION) },
    { L"Amakusa", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_AMAKUSA_COLLECTION, ARRAYSIZE(SAMSHO1_A_AMAKUSA_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_BONUS_COLLECTION, ARRAYSIZE(SAMSHO1_A_BONUS_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)SAMSHO1_A_STAGES_COLLECTION, ARRAYSIZE(SAMSHO1_A_STAGES_COLLECTION) },
};

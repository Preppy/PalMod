#pragma once

// These are hand-generated: don't remove these.
const UINT16 KOF99AE_A_IMG_UNITS[] =
{
    indexKOFSprites_98Kensou,
    indexKOFSprites_02UM_Chin,
    indexKOFSprites_98Choi,

    indexKOFSprites_02UM_Bao,

    indexKOF99Sprites_Andy,         // 0x17f
    indexKOF99Sprites_Athena,       // 0x180
    indexKOF99Sprites_Bao,          // 0x181
    indexKOF99Sprites_Benimaru,     // 0x182
    indexKOF99Sprites_BlueMary,     // 0x183
    indexKOF99Sprites_BossKrizalid, // 0x184
    indexKOF99Sprites_Chang,        // 0x185
    indexKOF99Sprites_Chin,         // 0x186
    indexKOF99Sprites_Choi,         // 0x187
    indexKOF99Sprites_Clark,        // 0x188
    indexKOF99Sprites_Iori,         // 0x189
    indexKOF99Sprites_JacketKrizalid, // 0x18a
    indexKOF99Sprites_Jhun,         // 0x18b
    indexKOF99Sprites_Joe,          // 0x18c
    indexKOF99Sprites_K,            // 0x18d
    indexKOF99Sprites_Kasumi,       // 0x18e
    indexKOF99Sprites_Kensou,       // 0x18f
    indexKOF99Sprites_Kim,          // 0x190
    indexKOF99Sprites_King,         // 0x191
    indexKOF99Sprites_Kyo1,         // 0x192
    indexKOF99Sprites_Kyo2,         // 0x193
    indexKOF99Sprites_Kyo,          // 0x194
    indexKOF99Sprites_Leona,        // 0x195
    indexKOF99Sprites_Mai,          // 0x196
    indexKOF99Sprites_Maxima,       // 0x197
    indexKOF99Sprites_Ralf,         // 0x198
    indexKOF99Sprites_Robert,       // 0x199
    indexKOF99Sprites_Ryo,          // 0x19a
    indexKOF99Sprites_Shingo,       // 0x19b
    indexKOF99Sprites_Takuma,       // 0x19c
    indexKOF99Sprites_Terry,        // 0x19d
    indexKOF99Sprites_Whip,         // 0x19e
    indexKOF99Sprites_Xiangfei,     // 0x19f
    indexKOF99Sprites_Yuri,         // 0x1a0
    indexKOF99Sprites_Stages,       // 0x1a1
    indexKOF99Sprites_Bonus,        // 0x1a2
};

const sGame_PaletteDataset KOF99AE_A_EFFECTS_PALETTES[] =
{
    { L"Main Fire Palette", 0x2fa7f0, 0x2fa9f0 },
    { L"Orochi Fire Palette", 0x2fa9f0, 0x2fabf0 },
    { L"SDM Super Flash", 0x2fadf0, 0x2faff0 },
    { L"MAX Super Flash", 0x2faff0, 0x2fb1f0 },
};

const sDescTreeNode KOF99AE_A_BONUS_COLLECTION[] =
{
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_EFFECTS_PALETTES, ARRAYSIZE(KOF99AE_A_EFFECTS_PALETTES) },
};

// This is auto-generated via DumpPaletteHeaders

const sGame_PaletteDataset KOF99AE_A_K_A_PALETTES[] =
{
    { L"Main", 0x2d97f0, 0x2d9810, indexKOF99Sprites_K, 0x00 },
    { L"Extra 1", 0x2d9810, 0x2d9830, indexKOF99Sprites_K, 0x00 },
    { L"Extra 2", 0x2d9830, 0x2d9850, indexKOF99Sprites_K, 0x00 },
    { L"Electric Palette", 0x2d9850, 0x2d9870, indexKOF99Sprites_K, 0x00 },
    { L"Extra 3", 0x2d9870, 0x2d9890, indexKOF99Sprites_K, 0x00 },
    { L"Counter Mode Flash", 0x2d9890, 0x2d98b0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 1", 0x2d98b0, 0x2d98d0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 2", 0x2d98d0, 0x2d98f0, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Flash", 0x2d98f0, 0x2d9910, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9910, 0x2d9930, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9930, 0x2d9950, indexKOF99Sprites_K, 0x00 },
    { L"Super Trail Palette", 0x2d9950, 0x2d9970, indexKOF99Sprites_K, 0x00 },
    { L"Extra 4", 0x2d9970, 0x2d9990, indexKOF99Sprites_K, 0x00 },
    { L"Extra 5", 0x2d9990, 0x2d99b0, indexKOF99Sprites_K, 0x00 },
    { L"Lifebar Portrait", 0x2d99b0, 0x2d99d0 },
    { L"Character Portrait", 0x2d99d0, 0x2d99f0, indexKOF99Sprites_K, 0x31 },
    { L"Striker Portrait", 0x2f9bf0, 0x2f9c10 },
    { L"Win Portrait", 0x2e5df0, 0x2e5f70, indexKOF99Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_K_B_PALETTES[] =
{
    { L"Main", 0x2d99f0, 0x2d9a10, indexKOF99Sprites_K, 0x00 },
    { L"Extra 1", 0x2d9a10, 0x2d9a30, indexKOF99Sprites_K, 0x00 },
    { L"Extra 2", 0x2d9a30, 0x2d9a50, indexKOF99Sprites_K, 0x00 },
    { L"Electric Palette", 0x2d9a50, 0x2d9a70, indexKOF99Sprites_K, 0x00 },
    { L"Extra 3", 0x2d9a70, 0x2d9a90, indexKOF99Sprites_K, 0x00 },
    { L"Counter Mode Flash", 0x2d9a90, 0x2d9ab0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 1", 0x2d9ab0, 0x2d9ad0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 2", 0x2d9ad0, 0x2d9af0, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Flash", 0x2d9af0, 0x2d9b10, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9b10, 0x2d9b30, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9b30, 0x2d9b50, indexKOF99Sprites_K, 0x00 },
    { L"Super Trail Palette", 0x2d9b50, 0x2d9b70, indexKOF99Sprites_K, 0x00 },
    { L"Extra 4", 0x2d9b70, 0x2d9b90, indexKOF99Sprites_K, 0x00 },
    { L"Extra 5", 0x2d9b90, 0x2d9bb0, indexKOF99Sprites_K, 0x00 },
    { L"Lifebar Portrait", 0x2d9bb0, 0x2d9bd0 },
    { L"Character Portrait", 0x2d9bd0, 0x2d9bf0, indexKOF99Sprites_K, 0x31 },
    { L"Striker Portrait", 0x2f9c10, 0x2f9c30 },
    { L"Win Portrait", 0x2e5f70, 0x2e60f0, indexKOF99Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_A_PALETTES[] =
{
    { L"Main", 0x2d9bf0, 0x2d9c10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 1", 0x2d9c10, 0x2d9c30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 2", 0x2d9c30, 0x2d9c50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Electric Palette", 0x2d9c50, 0x2d9c70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 3", 0x2d9c70, 0x2d9c90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Mode Flash", 0x2d9c90, 0x2d9cb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 1", 0x2d9cb0, 0x2d9cd0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 2", 0x2d9cd0, 0x2d9cf0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Flash", 0x2d9cf0, 0x2d9d10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9d10, 0x2d9d30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9d30, 0x2d9d50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Super Trail Palette", 0x2d9d50, 0x2d9d70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 4", 0x2d9d70, 0x2d9d90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 5", 0x2d9d90, 0x2d9db0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Lifebar Portrait", 0x2d9db0, 0x2d9dd0 },
    { L"Character Portrait", 0x2d9dd0, 0x2d9df0, indexKOF99Sprites_Maxima, 0x31 },
    { L"Striker Portrait", 0x2f9c30, 0x2f9c50 },
    { L"Win Portrait", 0x2e60f0, 0x2e6270, indexKOF99Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_B_PALETTES[] =
{
    { L"Main", 0x2d9df0, 0x2d9e10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 1", 0x2d9e10, 0x2d9e30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 2", 0x2d9e30, 0x2d9e50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Electric Palette", 0x2d9e50, 0x2d9e70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 3", 0x2d9e70, 0x2d9e90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Mode Flash", 0x2d9e90, 0x2d9eb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 1", 0x2d9eb0, 0x2d9ed0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 2", 0x2d9ed0, 0x2d9ef0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Flash", 0x2d9ef0, 0x2d9f10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9f10, 0x2d9f30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9f30, 0x2d9f50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Super Trail Palette", 0x2d9f50, 0x2d9f70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 4", 0x2d9f70, 0x2d9f90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 5", 0x2d9f90, 0x2d9fb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Lifebar Portrait", 0x2d9fb0, 0x2d9fd0 },
    { L"Character Portrait", 0x2d9fd0, 0x2d9ff0, indexKOF99Sprites_Maxima, 0x31 },
    { L"Striker Portrait", 0x2f9c50, 0x2f9c70 },
    { L"Win Portrait", 0x2e6270, 0x2e63f0, indexKOF99Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_A_PALETTES[] =
{
    { L"Main", 0x2d9ff0, 0x2da010, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x2da010, 0x2da030, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x2da030, 0x2da050, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x2da050, 0x2da070, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x2da070, 0x2da090, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Mode Flash", 0x2da090, 0x2da0b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 1", 0x2da0b0, 0x2da0d0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 2", 0x2da0d0, 0x2da0f0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Flash", 0x2da0f0, 0x2da110, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 1", 0x2da110, 0x2da130, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 2", 0x2da130, 0x2da150, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Super Trail Palette", 0x2da150, 0x2da170, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x2da170, 0x2da190, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 5", 0x2da190, 0x2da1b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Lifebar Portrait", 0x2da1b0, 0x2da1d0 },
    { L"Character Portrait", 0x2da1d0, 0x2da1f0, indexKOF99Sprites_Benimaru, 0x31 },
    { L"Striker Portrait", 0x2f9c70, 0x2f9c90 },
    { L"Win Portrait", 0x2e63f0, 0x2e6570, indexKOF99Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_B_PALETTES[] =
{
    { L"Main", 0x2da1f0, 0x2da210, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x2da210, 0x2da230, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x2da230, 0x2da250, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x2da250, 0x2da270, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x2da270, 0x2da290, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Mode Flash", 0x2da290, 0x2da2b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 1", 0x2da2b0, 0x2da2d0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 2", 0x2da2d0, 0x2da2f0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Flash", 0x2da2f0, 0x2da310, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 1", 0x2da310, 0x2da330, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 2", 0x2da330, 0x2da350, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Super Trail Palette", 0x2da350, 0x2da370, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x2da370, 0x2da390, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 5", 0x2da390, 0x2da3b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Lifebar Portrait", 0x2da3b0, 0x2da3d0 },
    { L"Character Portrait", 0x2da3d0, 0x2da3f0, indexKOF99Sprites_Benimaru, 0x31 },
    { L"Striker Portrait", 0x2f9c90, 0x2f9cb0 },
    { L"Win Portrait", 0x2e6570, 0x2e66f0, indexKOF99Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_SHINGO_A_PALETTES[] =
{
    { L"Main", 0x2da3f0, 0x2da410, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 1", 0x2da410, 0x2da430, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 2", 0x2da430, 0x2da450, indexKOF99Sprites_Shingo, 0x00 },
    { L"Electric Palette", 0x2da450, 0x2da470, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 3", 0x2da470, 0x2da490, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Mode Flash", 0x2da490, 0x2da4b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 1", 0x2da4b0, 0x2da4d0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 2", 0x2da4d0, 0x2da4f0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Flash", 0x2da4f0, 0x2da510, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 1", 0x2da510, 0x2da530, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 2", 0x2da530, 0x2da550, indexKOF99Sprites_Shingo, 0x00 },
    { L"Super Trail Palette", 0x2da550, 0x2da570, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 4", 0x2da570, 0x2da590, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 5", 0x2da590, 0x2da5b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Lifebar Portrait", 0x2da5b0, 0x2da5d0 },
    { L"Character Portrait", 0x2da5d0, 0x2da5f0, indexKOF99Sprites_Shingo, 0x31 },
    { L"Striker Portrait", 0x2f9cb0, 0x2f9cd0 },
    { L"Win Portrait", 0x2e66f0, 0x2e6870, indexKOF99Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_SHINGO_B_PALETTES[] =
{
    { L"Main", 0x2da5f0, 0x2da610, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 1", 0x2da610, 0x2da630, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 2", 0x2da630, 0x2da650, indexKOF99Sprites_Shingo, 0x00 },
    { L"Electric Palette", 0x2da650, 0x2da670, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 3", 0x2da670, 0x2da690, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Mode Flash", 0x2da690, 0x2da6b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 1", 0x2da6b0, 0x2da6d0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 2", 0x2da6d0, 0x2da6f0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Flash", 0x2da6f0, 0x2da710, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 1", 0x2da710, 0x2da730, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 2", 0x2da730, 0x2da750, indexKOF99Sprites_Shingo, 0x00 },
    { L"Super Trail Palette", 0x2da750, 0x2da770, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 4", 0x2da770, 0x2da790, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 5", 0x2da790, 0x2da7b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Lifebar Portrait", 0x2da7b0, 0x2da7d0 },
    { L"Character Portrait", 0x2da7d0, 0x2da7f0, indexKOF99Sprites_Shingo, 0x31 },
    { L"Striker Portrait", 0x2f9cd0, 0x2f9cf0 },
    { L"Win Portrait", 0x2e6870, 0x2e69f0, indexKOF99Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_A_PALETTES[] =
{
    { L"Main", 0x2da7f0, 0x2da810, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 1", 0x2da810, 0x2da830, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 2", 0x2da830, 0x2da850, indexKOF99Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x2da850, 0x2da870, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 3", 0x2da870, 0x2da890, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Mode Flash", 0x2da890, 0x2da8b0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 1", 0x2da8b0, 0x2da8d0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 2", 0x2da8d0, 0x2da8f0, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Flash", 0x2da8f0, 0x2da910, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 1", 0x2da910, 0x2da930, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 2", 0x2da930, 0x2da950, indexKOF99Sprites_Terry, 0x00 },
    { L"Super Trail Palette", 0x2da950, 0x2da970, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 4", 0x2da970, 0x2da990, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 5", 0x2da990, 0x2da9b0, indexKOF99Sprites_Terry, 0x00 },
    { L"Lifebar Portrait", 0x2da9b0, 0x2da9d0 },
    { L"Character Portrait", 0x2da9d0, 0x2da9f0, indexKOF99Sprites_Terry, 0x31 },
    { L"Striker Portrait", 0x2f9cf0, 0x2f9d10 },
    { L"Win Portrait", 0x2e69f0, 0x2e6b70, indexKOF99Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_B_PALETTES[] =
{
    { L"Main", 0x2da9f0, 0x2daa10, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 1", 0x2daa10, 0x2daa30, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 2", 0x2daa30, 0x2daa50, indexKOF99Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x2daa50, 0x2daa70, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 3", 0x2daa70, 0x2daa90, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Mode Flash", 0x2daa90, 0x2daab0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 1", 0x2daab0, 0x2daad0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 2", 0x2daad0, 0x2daaf0, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Flash", 0x2daaf0, 0x2dab10, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 1", 0x2dab10, 0x2dab30, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 2", 0x2dab30, 0x2dab50, indexKOF99Sprites_Terry, 0x00 },
    { L"Super Trail Palette", 0x2dab50, 0x2dab70, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 4", 0x2dab70, 0x2dab90, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 5", 0x2dab90, 0x2dabb0, indexKOF99Sprites_Terry, 0x00 },
    { L"Lifebar Portrait", 0x2dabb0, 0x2dabd0 },
    { L"Character Portrait", 0x2dabd0, 0x2dabf0, indexKOF99Sprites_Terry, 0x31 },
    { L"Striker Portrait", 0x2f9d10, 0x2f9d30 },
    { L"Win Portrait", 0x2e6b70, 0x2e6cf0, indexKOF99Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_A_PALETTES[] =
{
    { L"Main", 0x2dabf0, 0x2dac10, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 1", 0x2dac10, 0x2dac30, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 2", 0x2dac30, 0x2dac50, indexKOF99Sprites_Andy, 0x00 },
    { L"Electric Palette", 0x2dac50, 0x2dac70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 3", 0x2dac70, 0x2dac90, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Mode Flash", 0x2dac90, 0x2dacb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 1", 0x2dacb0, 0x2dacd0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 2", 0x2dacd0, 0x2dacf0, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Flash", 0x2dacf0, 0x2dad10, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 1", 0x2dad10, 0x2dad30, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 2", 0x2dad30, 0x2dad50, indexKOF99Sprites_Andy, 0x00 },
    { L"Super Trail Palette", 0x2dad50, 0x2dad70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 4", 0x2dad70, 0x2dad90, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 5", 0x2dad90, 0x2dadb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Lifebar Portrait", 0x2dadb0, 0x2dadd0 },
    { L"Character Portrait", 0x2dadd0, 0x2dadf0, indexKOF99Sprites_Andy, 0x31 },
    { L"Striker Portrait", 0x2f9d30, 0x2f9d50 },
    { L"Win Portrait", 0x2e6cf0, 0x2e6e70, indexKOF99Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_B_PALETTES[] =
{
    { L"Main", 0x2dadf0, 0x2dae10, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 1", 0x2dae10, 0x2dae30, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 2", 0x2dae30, 0x2dae50, indexKOF99Sprites_Andy, 0x00 },
    { L"Electric Palette", 0x2dae50, 0x2dae70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 3", 0x2dae70, 0x2dae90, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Mode Flash", 0x2dae90, 0x2daeb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 1", 0x2daeb0, 0x2daed0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 2", 0x2daed0, 0x2daef0, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Flash", 0x2daef0, 0x2daf10, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 1", 0x2daf10, 0x2daf30, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 2", 0x2daf30, 0x2daf50, indexKOF99Sprites_Andy, 0x00 },
    { L"Super Trail Palette", 0x2daf50, 0x2daf70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 4", 0x2daf70, 0x2daf90, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 5", 0x2daf90, 0x2dafb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Lifebar Portrait", 0x2dafb0, 0x2dafd0 },
    { L"Character Portrait", 0x2dafd0, 0x2daff0, indexKOF99Sprites_Andy, 0x31 },
    { L"Striker Portrait", 0x2f9d50, 0x2f9d70 },
    { L"Win Portrait", 0x2e6e70, 0x2e6ff0, indexKOF99Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_A_PALETTES[] =
{
    { L"Main", 0x2daff0, 0x2db010, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 1", 0x2db010, 0x2db030, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 2", 0x2db030, 0x2db050, indexKOF99Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x2db050, 0x2db070, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 3", 0x2db070, 0x2db090, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Mode Flash", 0x2db090, 0x2db0b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 1", 0x2db0b0, 0x2db0d0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 2", 0x2db0d0, 0x2db0f0, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Flash", 0x2db0f0, 0x2db110, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 1", 0x2db110, 0x2db130, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 2", 0x2db130, 0x2db150, indexKOF99Sprites_Joe, 0x00 },
    { L"Super Trail Palette", 0x2db150, 0x2db170, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 4", 0x2db170, 0x2db190, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 5", 0x2db190, 0x2db1b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Lifebar Portrait", 0x2db1b0, 0x2db1d0 },
    { L"Character Portrait", 0x2db1d0, 0x2db1f0, indexKOF99Sprites_Joe, 0x31 },
    { L"Striker Portrait", 0x2f9d70, 0x2f9d90 },
    { L"Win Portrait", 0x2e6ff0, 0x2e7170, indexKOF99Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_B_PALETTES[] =
{
    { L"Main", 0x2db1f0, 0x2db210, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 1", 0x2db210, 0x2db230, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 2", 0x2db230, 0x2db250, indexKOF99Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x2db250, 0x2db270, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 3", 0x2db270, 0x2db290, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Mode Flash", 0x2db290, 0x2db2b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 1", 0x2db2b0, 0x2db2d0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 2", 0x2db2d0, 0x2db2f0, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Flash", 0x2db2f0, 0x2db310, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 1", 0x2db310, 0x2db330, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 2", 0x2db330, 0x2db350, indexKOF99Sprites_Joe, 0x00 },
    { L"Super Trail Palette", 0x2db350, 0x2db370, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 4", 0x2db370, 0x2db390, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 5", 0x2db390, 0x2db3b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Lifebar Portrait", 0x2db3b0, 0x2db3d0 },
    { L"Character Portrait", 0x2db3d0, 0x2db3f0, indexKOF99Sprites_Joe, 0x31 },
    { L"Striker Portrait", 0x2f9d90, 0x2f9db0 },
    { L"Win Portrait", 0x2e7170, 0x2e72f0, indexKOF99Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_A_PALETTES[] =
{
    { L"Main", 0x2db3f0, 0x2db410, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 1", 0x2db410, 0x2db430, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 2", 0x2db430, 0x2db450, indexKOF99Sprites_Mai, 0x00 },
    { L"Electric Palette", 0x2db450, 0x2db470, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 3", 0x2db470, 0x2db490, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Mode Flash", 0x2db490, 0x2db4b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 1", 0x2db4b0, 0x2db4d0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 2", 0x2db4d0, 0x2db4f0, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Flash", 0x2db4f0, 0x2db510, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 1", 0x2db510, 0x2db530, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 2", 0x2db530, 0x2db550, indexKOF99Sprites_Mai, 0x00 },
    { L"Super Trail Palette", 0x2db550, 0x2db570, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 4", 0x2db570, 0x2db590, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 5", 0x2db590, 0x2db5b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Lifebar Portrait", 0x2db5b0, 0x2db5d0 },
    { L"Character Portrait", 0x2db5d0, 0x2db5f0, indexKOF99Sprites_Mai, 0x31 },
    { L"Striker Portrait", 0x2f9db0, 0x2f9dd0 },
    { L"Win Portrait", 0x2e72f0, 0x2e7470, indexKOF99Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_B_PALETTES[] =
{
    { L"Main", 0x2db5f0, 0x2db610, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 1", 0x2db610, 0x2db630, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 2", 0x2db630, 0x2db650, indexKOF99Sprites_Mai, 0x00 },
    { L"Electric Palette", 0x2db650, 0x2db670, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 3", 0x2db670, 0x2db690, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Mode Flash", 0x2db690, 0x2db6b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 1", 0x2db6b0, 0x2db6d0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 2", 0x2db6d0, 0x2db6f0, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Flash", 0x2db6f0, 0x2db710, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 1", 0x2db710, 0x2db730, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 2", 0x2db730, 0x2db750, indexKOF99Sprites_Mai, 0x00 },
    { L"Super Trail Palette", 0x2db750, 0x2db770, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 4", 0x2db770, 0x2db790, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 5", 0x2db790, 0x2db7b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Lifebar Portrait", 0x2db7b0, 0x2db7d0 },
    { L"Character Portrait", 0x2db7d0, 0x2db7f0, indexKOF99Sprites_Mai, 0x31 },
    { L"Striker Portrait", 0x2f9dd0, 0x2f9df0 },
    { L"Win Portrait", 0x2e7470, 0x2e75f0, indexKOF99Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_A_PALETTES[] =
{
    { L"Main", 0x2db7f0, 0x2db810, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x2db810, 0x2db830, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x2db830, 0x2db850, indexKOF99Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x2db850, 0x2db870, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x2db870, 0x2db890, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Mode Flash", 0x2db890, 0x2db8b0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 1", 0x2db8b0, 0x2db8d0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 2", 0x2db8d0, 0x2db8f0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Flash", 0x2db8f0, 0x2db910, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 1", 0x2db910, 0x2db930, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 2", 0x2db930, 0x2db950, indexKOF99Sprites_Ryo, 0x00 },
    { L"Super Trail Palette", 0x2db950, 0x2db970, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x2db970, 0x2db990, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 5", 0x2db990, 0x2db9b0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Lifebar Portrait", 0x2db9b0, 0x2db9d0 },
    { L"Character Portrait", 0x2db9d0, 0x2db9f0, indexKOF99Sprites_Ryo, 0x31 },
    { L"Striker Portrait", 0x2f9df0, 0x2f9e10 },
    { L"Win Portrait", 0x2e75f0, 0x2e7770, indexKOF99Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_B_PALETTES[] =
{
    { L"Main", 0x2db9f0, 0x2dba10, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x2dba10, 0x2dba30, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x2dba30, 0x2dba50, indexKOF99Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x2dba50, 0x2dba70, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x2dba70, 0x2dba90, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Mode Flash", 0x2dba90, 0x2dbab0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 1", 0x2dbab0, 0x2dbad0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 2", 0x2dbad0, 0x2dbaf0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Flash", 0x2dbaf0, 0x2dbb10, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 1", 0x2dbb10, 0x2dbb30, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 2", 0x2dbb30, 0x2dbb50, indexKOF99Sprites_Ryo, 0x00 },
    { L"Super Trail Palette", 0x2dbb50, 0x2dbb70, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x2dbb70, 0x2dbb90, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 5", 0x2dbb90, 0x2dbbb0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Lifebar Portrait", 0x2dbbb0, 0x2dbbd0 },
    { L"Character Portrait", 0x2dbbd0, 0x2dbbf0, indexKOF99Sprites_Ryo, 0x31 },
    { L"Striker Portrait", 0x2f9e10, 0x2f9e30 },
    { L"Win Portrait", 0x2e7770, 0x2e78f0, indexKOF99Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_A_PALETTES[] =
{
    { L"Main", 0x2dbbf0, 0x2dbc10, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 1", 0x2dbc10, 0x2dbc30, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 2", 0x2dbc30, 0x2dbc50, indexKOF99Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x2dbc50, 0x2dbc70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 3", 0x2dbc70, 0x2dbc90, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Mode Flash", 0x2dbc90, 0x2dbcb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 1", 0x2dbcb0, 0x2dbcd0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 2", 0x2dbcd0, 0x2dbcf0, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Flash", 0x2dbcf0, 0x2dbd10, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 1", 0x2dbd10, 0x2dbd30, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 2", 0x2dbd30, 0x2dbd50, indexKOF99Sprites_Robert, 0x00 },
    { L"Super Trail Palette", 0x2dbd50, 0x2dbd70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 4", 0x2dbd70, 0x2dbd90, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 5", 0x2dbd90, 0x2dbdb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Lifebar Portrait", 0x2dbdb0, 0x2dbdd0 },
    { L"Character Portrait", 0x2dbdd0, 0x2dbdf0, indexKOF99Sprites_Robert, 0x31 },
    { L"Striker Portrait", 0x2f9e30, 0x2f9e50 },
    { L"Win Portrait", 0x2e78f0, 0x2e7a70, indexKOF99Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_B_PALETTES[] =
{
    { L"Main", 0x2dbdf0, 0x2dbe10, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 1", 0x2dbe10, 0x2dbe30, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 2", 0x2dbe30, 0x2dbe50, indexKOF99Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x2dbe50, 0x2dbe70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 3", 0x2dbe70, 0x2dbe90, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Mode Flash", 0x2dbe90, 0x2dbeb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 1", 0x2dbeb0, 0x2dbed0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 2", 0x2dbed0, 0x2dbef0, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Flash", 0x2dbef0, 0x2dbf10, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 1", 0x2dbf10, 0x2dbf30, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 2", 0x2dbf30, 0x2dbf50, indexKOF99Sprites_Robert, 0x00 },
    { L"Super Trail Palette", 0x2dbf50, 0x2dbf70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 4", 0x2dbf70, 0x2dbf90, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 5", 0x2dbf90, 0x2dbfb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Lifebar Portrait", 0x2dbfb0, 0x2dbfd0 },
    { L"Character Portrait", 0x2dbfd0, 0x2dbff0, indexKOF99Sprites_Robert, 0x31 },
    { L"Striker Portrait", 0x2f9e50, 0x2f9e70 },
    { L"Win Portrait", 0x2e7a70, 0x2e7bf0, indexKOF99Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_A_PALETTES[] =
{
    { L"Main", 0x2dbff0, 0x2dc010, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x2dc010, 0x2dc030, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x2dc030, 0x2dc050, indexKOF99Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x2dc050, 0x2dc070, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x2dc070, 0x2dc090, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Mode Flash", 0x2dc090, 0x2dc0b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 1", 0x2dc0b0, 0x2dc0d0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 2", 0x2dc0d0, 0x2dc0f0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Flash", 0x2dc0f0, 0x2dc110, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc110, 0x2dc130, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc130, 0x2dc150, indexKOF99Sprites_Yuri, 0x00 },
    { L"Super Trail Palette", 0x2dc150, 0x2dc170, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x2dc170, 0x2dc190, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 5", 0x2dc190, 0x2dc1b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Lifebar Portrait", 0x2dc1b0, 0x2dc1d0 },
    { L"Character Portrait", 0x2dc1d0, 0x2dc1f0, indexKOF99Sprites_Yuri, 0x31 },
    { L"Striker Portrait", 0x2f9e70, 0x2f9e90 },
    { L"Win Portrait", 0x2e7bf0, 0x2e7d70, indexKOF99Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_B_PALETTES[] =
{
    { L"Main", 0x2dc1f0, 0x2dc210, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x2dc210, 0x2dc230, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x2dc230, 0x2dc250, indexKOF99Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x2dc250, 0x2dc270, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x2dc270, 0x2dc290, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Mode Flash", 0x2dc290, 0x2dc2b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 1", 0x2dc2b0, 0x2dc2d0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 2", 0x2dc2d0, 0x2dc2f0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Flash", 0x2dc2f0, 0x2dc310, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc310, 0x2dc330, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc330, 0x2dc350, indexKOF99Sprites_Yuri, 0x00 },
    { L"Super Trail Palette", 0x2dc350, 0x2dc370, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x2dc370, 0x2dc390, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 5", 0x2dc390, 0x2dc3b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Lifebar Portrait", 0x2dc3b0, 0x2dc3d0 },
    { L"Character Portrait", 0x2dc3d0, 0x2dc3f0, indexKOF99Sprites_Yuri, 0x31 },
    { L"Striker Portrait", 0x2f9e90, 0x2f9eb0 },
    { L"Win Portrait", 0x2e7d70, 0x2e7ef0, indexKOF99Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_A_PALETTES[] =
{
    { L"Main", 0x2dc3f0, 0x2dc410, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x2dc410, 0x2dc430, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x2dc430, 0x2dc450, indexKOF99Sprites_Takuma, 0x00 },
    { L"Electric Palette", 0x2dc450, 0x2dc470, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x2dc470, 0x2dc490, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Mode Flash", 0x2dc490, 0x2dc4b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 1", 0x2dc4b0, 0x2dc4d0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 2", 0x2dc4d0, 0x2dc4f0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Flash", 0x2dc4f0, 0x2dc510, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc510, 0x2dc530, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc530, 0x2dc550, indexKOF99Sprites_Takuma, 0x00 },
    { L"Super Trail Palette", 0x2dc550, 0x2dc570, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x2dc570, 0x2dc590, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 5", 0x2dc590, 0x2dc5b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Lifebar Portrait", 0x2dc5b0, 0x2dc5d0 },
    { L"Character Portrait", 0x2dc5d0, 0x2dc5f0, indexKOF99Sprites_Takuma, 0x31 },
    { L"Striker Portrait", 0x2f9eb0, 0x2f9ed0 },
    { L"Win Portrait", 0x2e7ef0, 0x2e8070, indexKOF99Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_B_PALETTES[] =
{
    { L"Main", 0x2dc5f0, 0x2dc610, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x2dc610, 0x2dc630, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x2dc630, 0x2dc650, indexKOF99Sprites_Takuma, 0x00 },
    { L"Electric Palette", 0x2dc650, 0x2dc670, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x2dc670, 0x2dc690, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Mode Flash", 0x2dc690, 0x2dc6b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 1", 0x2dc6b0, 0x2dc6d0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 2", 0x2dc6d0, 0x2dc6f0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Flash", 0x2dc6f0, 0x2dc710, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc710, 0x2dc730, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc730, 0x2dc750, indexKOF99Sprites_Takuma, 0x00 },
    { L"Super Trail Palette", 0x2dc750, 0x2dc770, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x2dc770, 0x2dc790, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 5", 0x2dc790, 0x2dc7b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Lifebar Portrait", 0x2dc7b0, 0x2dc7d0 },
    { L"Character Portrait", 0x2dc7d0, 0x2dc7f0, indexKOF99Sprites_Takuma, 0x31 },
    { L"Striker Portrait", 0x2f9ed0, 0x2f9ef0 },
    { L"Win Portrait", 0x2e8070, 0x2e81f0, indexKOF99Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_A_PALETTES[] =
{
    { L"Main", 0x2dc7f0, 0x2dc810, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 1", 0x2dc810, 0x2dc830, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 2", 0x2dc830, 0x2dc850, indexKOF99Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x2dc850, 0x2dc870, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 3", 0x2dc870, 0x2dc890, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Mode Flash", 0x2dc890, 0x2dc8b0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 1", 0x2dc8b0, 0x2dc8d0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 2", 0x2dc8d0, 0x2dc8f0, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Flash", 0x2dc8f0, 0x2dc910, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc910, 0x2dc930, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc930, 0x2dc950, indexKOF99Sprites_Leona, 0x00 },
    { L"Super Trail Palette", 0x2dc950, 0x2dc970, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 4", 0x2dc970, 0x2dc990, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 5", 0x2dc990, 0x2dc9b0, indexKOF99Sprites_Leona, 0x00 },
    { L"Lifebar Portrait", 0x2dc9b0, 0x2dc9d0 },
    { L"Character Portrait", 0x2dc9d0, 0x2dc9f0, indexKOF99Sprites_Leona, 0x31 },
    { L"Striker Portrait", 0x2f9ef0, 0x2f9f10 },
    { L"Win Portrait", 0x2e81f0, 0x2e8370, indexKOF99Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_B_PALETTES[] =
{
    { L"Main", 0x2dc9f0, 0x2dca10, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 1", 0x2dca10, 0x2dca30, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 2", 0x2dca30, 0x2dca50, indexKOF99Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x2dca50, 0x2dca70, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 3", 0x2dca70, 0x2dca90, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Mode Flash", 0x2dca90, 0x2dcab0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 1", 0x2dcab0, 0x2dcad0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 2", 0x2dcad0, 0x2dcaf0, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Flash", 0x2dcaf0, 0x2dcb10, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 1", 0x2dcb10, 0x2dcb30, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 2", 0x2dcb30, 0x2dcb50, indexKOF99Sprites_Leona, 0x00 },
    { L"Super Trail Palette", 0x2dcb50, 0x2dcb70, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 4", 0x2dcb70, 0x2dcb90, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 5", 0x2dcb90, 0x2dcbb0, indexKOF99Sprites_Leona, 0x00 },
    { L"Lifebar Portrait", 0x2dcbb0, 0x2dcbd0 },
    { L"Character Portrait", 0x2dcbd0, 0x2dcbf0, indexKOF99Sprites_Leona, 0x31 },
    { L"Striker Portrait", 0x2f9f10, 0x2f9f30 },
    { L"Win Portrait", 0x2e8370, 0x2e84f0, indexKOF99Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RALF_A_PALETTES[] =
{
    { L"Main", 0x2dcbf0, 0x2dcc10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 1", 0x2dcc10, 0x2dcc30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 2", 0x2dcc30, 0x2dcc50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Electric Palette", 0x2dcc50, 0x2dcc70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 3", 0x2dcc70, 0x2dcc90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Mode Flash", 0x2dcc90, 0x2dccb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 1", 0x2dccb0, 0x2dccd0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 2", 0x2dccd0, 0x2dccf0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Flash", 0x2dccf0, 0x2dcd10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 1", 0x2dcd10, 0x2dcd30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 2", 0x2dcd30, 0x2dcd50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Super Trail Palette", 0x2dcd50, 0x2dcd70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 4", 0x2dcd70, 0x2dcd90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 5", 0x2dcd90, 0x2dcdb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Lifebar Portrait", 0x2dcdb0, 0x2dcdd0 },
    { L"Character Portrait", 0x2dcdd0, 0x2dcdf0, indexKOF99Sprites_Ralf, 0x31 },
    { L"Striker Portrait", 0x2f9f30, 0x2f9f50 },
    { L"Win Portrait", 0x2e84f0, 0x2e8670, indexKOF99Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RALF_B_PALETTES[] =
{
    { L"Main", 0x2dcdf0, 0x2dce10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 1", 0x2dce10, 0x2dce30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 2", 0x2dce30, 0x2dce50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Electric Palette", 0x2dce50, 0x2dce70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 3", 0x2dce70, 0x2dce90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Mode Flash", 0x2dce90, 0x2dceb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 1", 0x2dceb0, 0x2dced0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 2", 0x2dced0, 0x2dcef0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Flash", 0x2dcef0, 0x2dcf10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 1", 0x2dcf10, 0x2dcf30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 2", 0x2dcf30, 0x2dcf50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Super Trail Palette", 0x2dcf50, 0x2dcf70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 4", 0x2dcf70, 0x2dcf90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 5", 0x2dcf90, 0x2dcfb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Lifebar Portrait", 0x2dcfb0, 0x2dcfd0 },
    { L"Character Portrait", 0x2dcfd0, 0x2dcff0, indexKOF99Sprites_Ralf, 0x31 },
    { L"Striker Portrait", 0x2f9f50, 0x2f9f70 },
    { L"Win Portrait", 0x2e8670, 0x2e87f0, indexKOF99Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CLARK_A_PALETTES[] =
{
    { L"Main", 0x2dcff0, 0x2dd010, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 1", 0x2dd010, 0x2dd030, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 2", 0x2dd030, 0x2dd050, indexKOF99Sprites_Clark, 0x00 },
    { L"Electric Palette", 0x2dd050, 0x2dd070, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 3", 0x2dd070, 0x2dd090, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Mode Flash", 0x2dd090, 0x2dd0b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 1", 0x2dd0b0, 0x2dd0d0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 2", 0x2dd0d0, 0x2dd0f0, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Flash", 0x2dd0f0, 0x2dd110, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd110, 0x2dd130, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd130, 0x2dd150, indexKOF99Sprites_Clark, 0x00 },
    { L"Super Trail Palette", 0x2dd150, 0x2dd170, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 4", 0x2dd170, 0x2dd190, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 5", 0x2dd190, 0x2dd1b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Lifebar Portrait", 0x2dd1b0, 0x2dd1d0 },
    { L"Character Portrait", 0x2dd1d0, 0x2dd1f0, indexKOF99Sprites_Clark, 0x31 },
    { L"Striker Portrait", 0x2f9f70, 0x2f9f90 },
    { L"Win Portrait", 0x2e87f0, 0x2e8970, indexKOF99Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CLARK_B_PALETTES[] =
{
    { L"Main", 0x2dd1f0, 0x2dd210, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 1", 0x2dd210, 0x2dd230, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 2", 0x2dd230, 0x2dd250, indexKOF99Sprites_Clark, 0x00 },
    { L"Electric Palette", 0x2dd250, 0x2dd270, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 3", 0x2dd270, 0x2dd290, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Mode Flash", 0x2dd290, 0x2dd2b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 1", 0x2dd2b0, 0x2dd2d0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 2", 0x2dd2d0, 0x2dd2f0, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Flash", 0x2dd2f0, 0x2dd310, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd310, 0x2dd330, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd330, 0x2dd350, indexKOF99Sprites_Clark, 0x00 },
    { L"Super Trail Palette", 0x2dd350, 0x2dd370, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 4", 0x2dd370, 0x2dd390, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 5", 0x2dd390, 0x2dd3b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Lifebar Portrait", 0x2dd3b0, 0x2dd3d0 },
    { L"Character Portrait", 0x2dd3d0, 0x2dd3f0, indexKOF99Sprites_Clark, 0x31 },
    { L"Striker Portrait", 0x2f9f90, 0x2f9fb0 },
    { L"Win Portrait", 0x2e8970, 0x2e8af0, indexKOF99Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_A_PALETTES[] =
{
    { L"Main", 0x2dd3f0, 0x2dd410, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 1", 0x2dd410, 0x2dd430, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 2", 0x2dd430, 0x2dd450, indexKOF99Sprites_Whip, 0x00 },
    { L"Electric Palette", 0x2dd450, 0x2dd470, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 3", 0x2dd470, 0x2dd490, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Mode Flash", 0x2dd490, 0x2dd4b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 1", 0x2dd4b0, 0x2dd4d0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 2", 0x2dd4d0, 0x2dd4f0, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Flash", 0x2dd4f0, 0x2dd510, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd510, 0x2dd530, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd530, 0x2dd550, indexKOF99Sprites_Whip, 0x00 },
    { L"Super Trail Palette", 0x2dd550, 0x2dd570, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 4", 0x2dd570, 0x2dd590, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 5", 0x2dd590, 0x2dd5b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Lifebar Portrait", 0x2dd5b0, 0x2dd5d0 },
    { L"Character Portrait", 0x2dd5d0, 0x2dd5f0, indexKOF99Sprites_Whip, 0x31 },
    { L"Striker Portrait", 0x2f9fb0, 0x2f9fd0 },
    { L"Win Portrait", 0x2e8af0, 0x2e8c70, indexKOF99Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_B_PALETTES[] =
{
    { L"Main", 0x2dd5f0, 0x2dd610, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 1", 0x2dd610, 0x2dd630, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 2", 0x2dd630, 0x2dd650, indexKOF99Sprites_Whip, 0x00 },
    { L"Electric Palette", 0x2dd650, 0x2dd670, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 3", 0x2dd670, 0x2dd690, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Mode Flash", 0x2dd690, 0x2dd6b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 1", 0x2dd6b0, 0x2dd6d0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 2", 0x2dd6d0, 0x2dd6f0, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Flash", 0x2dd6f0, 0x2dd710, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd710, 0x2dd730, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd730, 0x2dd750, indexKOF99Sprites_Whip, 0x00 },
    { L"Super Trail Palette", 0x2dd750, 0x2dd770, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 4", 0x2dd770, 0x2dd790, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 5", 0x2dd790, 0x2dd7b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Lifebar Portrait", 0x2dd7b0, 0x2dd7d0 },
    { L"Character Portrait", 0x2dd7d0, 0x2dd7f0, indexKOF99Sprites_Whip, 0x31 },
    { L"Striker Portrait", 0x2f9fd0, 0x2f9ff0 },
    { L"Win Portrait", 0x2e8c70, 0x2e8df0, indexKOF99Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_A_PALETTES[] =
{
    { L"Main", 0x2dd7f0, 0x2dd810, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 1", 0x2dd810, 0x2dd830, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 2", 0x2dd830, 0x2dd850, indexKOF99Sprites_Athena, 0x00 },
    { L"Electric Palette", 0x2dd850, 0x2dd870, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 3", 0x2dd870, 0x2dd890, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Mode Flash", 0x2dd890, 0x2dd8b0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 1", 0x2dd8b0, 0x2dd8d0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 2", 0x2dd8d0, 0x2dd8f0, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Flash", 0x2dd8f0, 0x2dd910, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd910, 0x2dd930, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd930, 0x2dd950, indexKOF99Sprites_Athena, 0x00 },
    { L"Super Trail Palette", 0x2dd950, 0x2dd970, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 4", 0x2dd970, 0x2dd990, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 5", 0x2dd990, 0x2dd9b0, indexKOF99Sprites_Athena, 0x00 },
    { L"Lifebar Portrait", 0x2dd9b0, 0x2dd9d0 },
    { L"Character Portrait", 0x2dd9d0, 0x2dd9f0, indexKOF99Sprites_Athena, 0x31 },
    { L"Striker Portrait", 0x2f9ff0, 0x2fa010 },
    { L"Win Portrait", 0x2e8df0, 0x2e8f70, indexKOF99Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_B_PALETTES[] =
{
    { L"Main", 0x2dd9f0, 0x2dda10, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 1", 0x2dda10, 0x2dda30, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 2", 0x2dda30, 0x2dda50, indexKOF99Sprites_Athena, 0x00 },
    { L"Electric Palette", 0x2dda50, 0x2dda70, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 3", 0x2dda70, 0x2dda90, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Mode Flash", 0x2dda90, 0x2ddab0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 1", 0x2ddab0, 0x2ddad0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 2", 0x2ddad0, 0x2ddaf0, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Flash", 0x2ddaf0, 0x2ddb10, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 1", 0x2ddb10, 0x2ddb30, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 2", 0x2ddb30, 0x2ddb50, indexKOF99Sprites_Athena, 0x00 },
    { L"Super Trail Palette", 0x2ddb50, 0x2ddb70, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 4", 0x2ddb70, 0x2ddb90, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 5", 0x2ddb90, 0x2ddbb0, indexKOF99Sprites_Athena, 0x00 },
    { L"Lifebar Portrait", 0x2ddbb0, 0x2ddbd0 },
    { L"Character Portrait", 0x2ddbd0, 0x2ddbf0, indexKOF99Sprites_Athena, 0x31 },
    { L"Striker Portrait", 0x2fa010, 0x2fa030 },
    { L"Win Portrait", 0x2e8f70, 0x2e90f0, indexKOF99Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_A_PALETTES[] =
{
    { L"Main", 0x2ddbf0, 0x2ddc10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x2ddc10, 0x2ddc30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x2ddc30, 0x2ddc50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Electric Palette", 0x2ddc50, 0x2ddc70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x2ddc70, 0x2ddc90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Mode Flash", 0x2ddc90, 0x2ddcb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 1", 0x2ddcb0, 0x2ddcd0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 2", 0x2ddcd0, 0x2ddcf0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Flash", 0x2ddcf0, 0x2ddd10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 1", 0x2ddd10, 0x2ddd30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 2", 0x2ddd30, 0x2ddd50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Super Trail Palette", 0x2ddd50, 0x2ddd70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x2ddd70, 0x2ddd90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 5", 0x2ddd90, 0x2dddb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Lifebar Portrait", 0x2dddb0, 0x2dddd0 },
    { L"Character Portrait", 0x2dddd0, 0x2dddf0, indexKOF99Sprites_Kensou, 0x31 },
    { L"Striker Portrait", 0x2fa030, 0x2fa050 },
    { L"Win Portrait", 0x2e90f0, 0x2e9270, indexKOF99Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_B_PALETTES[] =
{
    { L"Main", 0x2dddf0, 0x2dde10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x2dde10, 0x2dde30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x2dde30, 0x2dde50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Electric Palette", 0x2dde50, 0x2dde70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x2dde70, 0x2dde90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Mode Flash", 0x2dde90, 0x2ddeb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 1", 0x2ddeb0, 0x2dded0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 2", 0x2dded0, 0x2ddef0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Flash", 0x2ddef0, 0x2ddf10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 1", 0x2ddf10, 0x2ddf30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 2", 0x2ddf30, 0x2ddf50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Super Trail Palette", 0x2ddf50, 0x2ddf70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x2ddf70, 0x2ddf90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 5", 0x2ddf90, 0x2ddfb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Lifebar Portrait", 0x2ddfb0, 0x2ddfd0 },
    { L"Character Portrait", 0x2ddfd0, 0x2ddff0, indexKOF99Sprites_Kensou, 0x31 },
    { L"Striker Portrait", 0x2fa050, 0x2fa070 },
    { L"Win Portrait", 0x2e9270, 0x2e93f0, indexKOF99Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_A_PALETTES[] =
{
    { L"Main", 0x2ddff0, 0x2de010, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 1", 0x2de010, 0x2de030, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 2", 0x2de030, 0x2de050, indexKOF99Sprites_Chin, 0x00 },
    { L"Electric Palette", 0x2de050, 0x2de070, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 3", 0x2de070, 0x2de090, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Mode Flash", 0x2de090, 0x2de0b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 1", 0x2de0b0, 0x2de0d0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 2", 0x2de0d0, 0x2de0f0, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Flash", 0x2de0f0, 0x2de110, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 1", 0x2de110, 0x2de130, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 2", 0x2de130, 0x2de150, indexKOF99Sprites_Chin, 0x00 },
    { L"Super Trail Palette", 0x2de150, 0x2de170, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 4", 0x2de170, 0x2de190, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 5", 0x2de190, 0x2de1b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Lifebar Portrait", 0x2de1b0, 0x2de1d0 },
    { L"Character Portrait", 0x2de1d0, 0x2de1f0, indexKOF99Sprites_Chin, 0x31 },
    { L"Striker Portrait", 0x2fa070, 0x2fa090 },
    { L"Win Portrait", 0x2e93f0, 0x2e9570, indexKOF99Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_B_PALETTES[] =
{
    { L"Main", 0x2de1f0, 0x2de210, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 1", 0x2de210, 0x2de230, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 2", 0x2de230, 0x2de250, indexKOF99Sprites_Chin, 0x00 },
    { L"Electric Palette", 0x2de250, 0x2de270, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 3", 0x2de270, 0x2de290, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Mode Flash", 0x2de290, 0x2de2b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 1", 0x2de2b0, 0x2de2d0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 2", 0x2de2d0, 0x2de2f0, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Flash", 0x2de2f0, 0x2de310, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 1", 0x2de310, 0x2de330, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 2", 0x2de330, 0x2de350, indexKOF99Sprites_Chin, 0x00 },
    { L"Super Trail Palette", 0x2de350, 0x2de370, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 4", 0x2de370, 0x2de390, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 5", 0x2de390, 0x2de3b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Lifebar Portrait", 0x2de3b0, 0x2de3d0 },
    { L"Character Portrait", 0x2de3d0, 0x2de3f0, indexKOF99Sprites_Chin, 0x31 },
    { L"Striker Portrait", 0x2fa090, 0x2fa0b0 },
    { L"Win Portrait", 0x2e9570, 0x2e96f0, indexKOF99Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_A_PALETTES[] =
{
    { L"Main", 0x2de3f0, 0x2de410, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 1", 0x2de410, 0x2de430, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 2", 0x2de430, 0x2de450, indexKOF99Sprites_Bao, 0x00 },
    { L"Electric Palette", 0x2de450, 0x2de470, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 3", 0x2de470, 0x2de490, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Mode Flash", 0x2de490, 0x2de4b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 1", 0x2de4b0, 0x2de4d0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 2", 0x2de4d0, 0x2de4f0, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Flash", 0x2de4f0, 0x2de510, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 1", 0x2de510, 0x2de530, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 2", 0x2de530, 0x2de550, indexKOF99Sprites_Bao, 0x00 },
    { L"Super Trail Palette", 0x2de550, 0x2de570, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 4", 0x2de570, 0x2de590, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 5", 0x2de590, 0x2de5b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Lifebar Portrait", 0x2de5b0, 0x2de5d0 },
    { L"Character Portrait", 0x2de5d0, 0x2de5f0, indexKOF99Sprites_Bao, 0x31 },
    { L"Striker Portrait", 0x2fa0b0, 0x2fa0d0 },
    { L"Win Portrait", 0x2e96f0, 0x2e9870, indexKOF99Sprites_Bao, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_B_PALETTES[] =
{
    { L"Main", 0x2de5f0, 0x2de610, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 1", 0x2de610, 0x2de630, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 2", 0x2de630, 0x2de650, indexKOF99Sprites_Bao, 0x00 },
    { L"Electric Palette", 0x2de650, 0x2de670, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 3", 0x2de670, 0x2de690, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Mode Flash", 0x2de690, 0x2de6b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 1", 0x2de6b0, 0x2de6d0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 2", 0x2de6d0, 0x2de6f0, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Flash", 0x2de6f0, 0x2de710, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 1", 0x2de710, 0x2de730, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 2", 0x2de730, 0x2de750, indexKOF99Sprites_Bao, 0x00 },
    { L"Super Trail Palette", 0x2de750, 0x2de770, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 4", 0x2de770, 0x2de790, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 5", 0x2de790, 0x2de7b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Lifebar Portrait", 0x2de7b0, 0x2de7d0 },
    { L"Character Portrait", 0x2de7d0, 0x2de7f0, indexKOF99Sprites_Bao, 0x31 },
    { L"Striker Portrait", 0x2fa0d0, 0x2fa0f0 },
    { L"Win Portrait", 0x2e9870, 0x2e99f0, indexKOF99Sprites_Bao, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KING_A_PALETTES[] =
{
    { L"Main", 0x2de7f0, 0x2de810, indexKOF99Sprites_King, 0x00 },
    { L"Extra 1", 0x2de810, 0x2de830, indexKOF99Sprites_King, 0x00 },
    { L"Extra 2", 0x2de830, 0x2de850, indexKOF99Sprites_King, 0x00 },
    { L"Electric Palette", 0x2de850, 0x2de870, indexKOF99Sprites_King, 0x00 },
    { L"Extra 3", 0x2de870, 0x2de890, indexKOF99Sprites_King, 0x00 },
    { L"Counter Mode Flash", 0x2de890, 0x2de8b0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 1", 0x2de8b0, 0x2de8d0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 2", 0x2de8d0, 0x2de8f0, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Flash", 0x2de8f0, 0x2de910, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 1", 0x2de910, 0x2de930, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 2", 0x2de930, 0x2de950, indexKOF99Sprites_King, 0x00 },
    { L"Super Trail Palette", 0x2de950, 0x2de970, indexKOF99Sprites_King, 0x00 },
    { L"Extra 4", 0x2de970, 0x2de990, indexKOF99Sprites_King, 0x00 },
    { L"Extra 5", 0x2de990, 0x2de9b0, indexKOF99Sprites_King, 0x00 },
    { L"Lifebar Portrait", 0x2de9b0, 0x2de9d0 },
    { L"Character Portrait", 0x2de9d0, 0x2de9f0, indexKOF99Sprites_King, 0x31 },
    { L"Striker Portrait", 0x2fa0f0, 0x2fa110 },
    { L"Win Portrait", 0x2e99f0, 0x2e9b70, indexKOF99Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KING_B_PALETTES[] =
{
    { L"Main", 0x2de9f0, 0x2dea10, indexKOF99Sprites_King, 0x00 },
    { L"Extra 1", 0x2dea10, 0x2dea30, indexKOF99Sprites_King, 0x00 },
    { L"Extra 2", 0x2dea30, 0x2dea50, indexKOF99Sprites_King, 0x00 },
    { L"Electric Palette", 0x2dea50, 0x2dea70, indexKOF99Sprites_King, 0x00 },
    { L"Extra 3", 0x2dea70, 0x2dea90, indexKOF99Sprites_King, 0x00 },
    { L"Counter Mode Flash", 0x2dea90, 0x2deab0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 1", 0x2deab0, 0x2dead0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 2", 0x2dead0, 0x2deaf0, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Flash", 0x2deaf0, 0x2deb10, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 1", 0x2deb10, 0x2deb30, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 2", 0x2deb30, 0x2deb50, indexKOF99Sprites_King, 0x00 },
    { L"Super Trail Palette", 0x2deb50, 0x2deb70, indexKOF99Sprites_King, 0x00 },
    { L"Extra 4", 0x2deb70, 0x2deb90, indexKOF99Sprites_King, 0x00 },
    { L"Extra 5", 0x2deb90, 0x2debb0, indexKOF99Sprites_King, 0x00 },
    { L"Lifebar Portrait", 0x2debb0, 0x2debd0 },
    { L"Character Portrait", 0x2debd0, 0x2debf0, indexKOF99Sprites_King, 0x31 },
    { L"Striker Portrait", 0x2fa110, 0x2fa130 },
    { L"Win Portrait", 0x2e9b70, 0x2e9cf0, indexKOF99Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_A_PALETTES[] =
{
    { L"Main", 0x2debf0, 0x2dec10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 1", 0x2dec10, 0x2dec30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 2", 0x2dec30, 0x2dec50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Electric Palette", 0x2dec50, 0x2dec70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 3", 0x2dec70, 0x2dec90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Mode Flash", 0x2dec90, 0x2decb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 1", 0x2decb0, 0x2decd0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 2", 0x2decd0, 0x2decf0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Flash", 0x2decf0, 0x2ded10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 1", 0x2ded10, 0x2ded30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 2", 0x2ded30, 0x2ded50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Super Trail Palette", 0x2ded50, 0x2ded70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 4", 0x2ded70, 0x2ded90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 5", 0x2ded90, 0x2dedb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Lifebar Portrait", 0x2dedb0, 0x2dedd0 },
    { L"Character Portrait", 0x2dedd0, 0x2dedf0, indexKOF99Sprites_BlueMary, 0x31 },
    { L"Striker Portrait", 0x2fa130, 0x2fa150 },
    { L"Win Portrait", 0x2e9cf0, 0x2e9e70, indexKOF99Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_B_PALETTES[] =
{
    { L"Main", 0x2dedf0, 0x2dee10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 1", 0x2dee10, 0x2dee30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 2", 0x2dee30, 0x2dee50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Electric Palette", 0x2dee50, 0x2dee70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 3", 0x2dee70, 0x2dee90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Mode Flash", 0x2dee90, 0x2deeb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 1", 0x2deeb0, 0x2deed0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 2", 0x2deed0, 0x2deef0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Flash", 0x2deef0, 0x2def10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 1", 0x2def10, 0x2def30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 2", 0x2def30, 0x2def50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Super Trail Palette", 0x2def50, 0x2def70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 4", 0x2def70, 0x2def90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 5", 0x2def90, 0x2defb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Lifebar Portrait", 0x2defb0, 0x2defd0 },
    { L"Character Portrait", 0x2defd0, 0x2deff0, indexKOF99Sprites_BlueMary, 0x31 },
    { L"Striker Portrait", 0x2fa150, 0x2fa170 },
    { L"Win Portrait", 0x2e9e70, 0x2e9ff0, indexKOF99Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_A_PALETTES[] =
{
    { L"Main", 0x2deff0, 0x2df010, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x2df010, 0x2df030, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 2", 0x2df030, 0x2df050, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x2df050, 0x2df070, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 3", 0x2df070, 0x2df090, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Mode Flash", 0x2df090, 0x2df0b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 1", 0x2df0b0, 0x2df0d0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 2", 0x2df0d0, 0x2df0f0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Flash", 0x2df0f0, 0x2df110, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 1", 0x2df110, 0x2df130, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 2", 0x2df130, 0x2df150, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Super Trail Palette", 0x2df150, 0x2df170, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 4", 0x2df170, 0x2df190, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 5", 0x2df190, 0x2df1b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Lifebar Portrait", 0x2df1b0, 0x2df1d0 },
    { L"Character Portrait", 0x2df1d0, 0x2df1f0, indexKOF99Sprites_Kasumi, 0x31 },
    { L"Striker Portrait", 0x2fa170, 0x2fa190 },
    { L"Win Portrait", 0x2e9ff0, 0x2ea170, indexKOF99Sprites_Kasumi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_B_PALETTES[] =
{
    { L"Main", 0x2df1f0, 0x2df210, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x2df210, 0x2df230, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 2", 0x2df230, 0x2df250, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x2df250, 0x2df270, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 3", 0x2df270, 0x2df290, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Mode Flash", 0x2df290, 0x2df2b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 1", 0x2df2b0, 0x2df2d0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 2", 0x2df2d0, 0x2df2f0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Flash", 0x2df2f0, 0x2df310, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 1", 0x2df310, 0x2df330, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 2", 0x2df330, 0x2df350, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Super Trail Palette", 0x2df350, 0x2df370, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 4", 0x2df370, 0x2df390, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 5", 0x2df390, 0x2df3b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Lifebar Portrait", 0x2df3b0, 0x2df3d0 },
    { L"Character Portrait", 0x2df3d0, 0x2df3f0, indexKOF99Sprites_Kasumi, 0x31 },
    { L"Striker Portrait", 0x2fa190, 0x2fa1b0 },
    { L"Win Portrait", 0x2ea170, 0x2ea2f0, indexKOF99Sprites_Kasumi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_A_PALETTES[] =
{
    { L"Main", 0x2df3f0, 0x2df410, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 1", 0x2df410, 0x2df430, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 2", 0x2df430, 0x2df450, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Electric Palette", 0x2df450, 0x2df470, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 3", 0x2df470, 0x2df490, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Mode Flash", 0x2df490, 0x2df4b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 1", 0x2df4b0, 0x2df4d0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 2", 0x2df4d0, 0x2df4f0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Flash", 0x2df4f0, 0x2df510, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 1", 0x2df510, 0x2df530, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 2", 0x2df530, 0x2df550, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Super Trail Palette", 0x2df550, 0x2df570, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 4", 0x2df570, 0x2df590, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 5", 0x2df590, 0x2df5b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Lifebar Portrait", 0x2df5b0, 0x2df5d0 },
    { L"Character Portrait", 0x2df5d0, 0x2df5f0, indexKOF99Sprites_Xiangfei, 0x31 },
    { L"Striker Portrait", 0x2fa1b0, 0x2fa1d0 },
    { L"Win Portrait", 0x2ea2f0, 0x2ea470, indexKOF99Sprites_Xiangfei, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_B_PALETTES[] =
{
    { L"Main", 0x2df5f0, 0x2df610, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 1", 0x2df610, 0x2df630, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 2", 0x2df630, 0x2df650, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Electric Palette", 0x2df650, 0x2df670, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 3", 0x2df670, 0x2df690, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Mode Flash", 0x2df690, 0x2df6b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 1", 0x2df6b0, 0x2df6d0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 2", 0x2df6d0, 0x2df6f0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Flash", 0x2df6f0, 0x2df710, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 1", 0x2df710, 0x2df730, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 2", 0x2df730, 0x2df750, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Super Trail Palette", 0x2df750, 0x2df770, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 4", 0x2df770, 0x2df790, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 5", 0x2df790, 0x2df7b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Lifebar Portrait", 0x2df7b0, 0x2df7d0 },
    { L"Character Portrait", 0x2df7d0, 0x2df7f0, indexKOF99Sprites_Xiangfei, 0x31 },
    { L"Striker Portrait", 0x2fa1d0, 0x2fa1f0 },
    { L"Win Portrait", 0x2ea470, 0x2ea5f0, indexKOF99Sprites_Xiangfei, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KIM_A_PALETTES[] =
{
    { L"Main", 0x2df7f0, 0x2df810, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 1", 0x2df810, 0x2df830, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 2", 0x2df830, 0x2df850, indexKOF99Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x2df850, 0x2df870, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 3", 0x2df870, 0x2df890, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Mode Flash", 0x2df890, 0x2df8b0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 1", 0x2df8b0, 0x2df8d0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 2", 0x2df8d0, 0x2df8f0, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Flash", 0x2df8f0, 0x2df910, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 1", 0x2df910, 0x2df930, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 2", 0x2df930, 0x2df950, indexKOF99Sprites_Kim, 0x00 },
    { L"Super Trail Palette", 0x2df950, 0x2df970, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 4", 0x2df970, 0x2df990, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 5", 0x2df990, 0x2df9b0, indexKOF99Sprites_Kim, 0x00 },
    { L"Lifebar Portrait", 0x2df9b0, 0x2df9d0 },
    { L"Character Portrait", 0x2df9d0, 0x2df9f0, indexKOF99Sprites_Kim, 0x31 },
    { L"Striker Portrait", 0x2fa1f0, 0x2fa210 },
    { L"Win Portrait", 0x2ea5f0, 0x2ea770, indexKOF99Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KIM_B_PALETTES[] =
{
    { L"Main", 0x2df9f0, 0x2dfa10, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 1", 0x2dfa10, 0x2dfa30, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 2", 0x2dfa30, 0x2dfa50, indexKOF99Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x2dfa50, 0x2dfa70, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 3", 0x2dfa70, 0x2dfa90, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Mode Flash", 0x2dfa90, 0x2dfab0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 1", 0x2dfab0, 0x2dfad0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 2", 0x2dfad0, 0x2dfaf0, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Flash", 0x2dfaf0, 0x2dfb10, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 1", 0x2dfb10, 0x2dfb30, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 2", 0x2dfb30, 0x2dfb50, indexKOF99Sprites_Kim, 0x00 },
    { L"Super Trail Palette", 0x2dfb50, 0x2dfb70, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 4", 0x2dfb70, 0x2dfb90, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 5", 0x2dfb90, 0x2dfbb0, indexKOF99Sprites_Kim, 0x00 },
    { L"Lifebar Portrait", 0x2dfbb0, 0x2dfbd0 },
    { L"Character Portrait", 0x2dfbd0, 0x2dfbf0, indexKOF99Sprites_Kim, 0x31 },
    { L"Striker Portrait", 0x2fa210, 0x2fa230 },
    { L"Win Portrait", 0x2ea770, 0x2ea8f0, indexKOF99Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_A_PALETTES[] =
{
    { L"Main", 0x2dfbf0, 0x2dfc10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x2dfc10, 0x2dfc30, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 2", 0x2dfc30, 0x2dfc50, indexKOF99Sprites_Chang, 0x00 },
    { L"Electric Palette", 0x2dfc50, 0x2dfc70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 3", 0x2dfc70, 0x2dfc90, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Mode Flash", 0x2dfc90, 0x2dfcb0, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2dfcb0, 0x2dfcd0, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Extra 2", 0x2dfcd0, 0x2dfcf0, indexKOF99Sprites_Chang, 0x00 },
    { L"Armor Mode Flash", 0x2dfcf0, 0x2dfd10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2dfd10, 0x2dfd30, indexKOF99Sprites_Chang, 0x01 },
    { L"Armor Mode Extra 2", 0x2dfd30, 0x2dfd50, indexKOF99Sprites_Chang, 0x00 },
    { L"Super Trail Palette", 0x2dfd50, 0x2dfd70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 4", 0x2dfd70, 0x2dfd90, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 5", 0x2dfd90, 0x2dfdb0, indexKOF99Sprites_Chang, 0x00 },
    { L"Lifebar Portrait", 0x2dfdb0, 0x2dfdd0 },
    { L"Character Portrait", 0x2dfdd0, 0x2dfdf0, indexKOF99Sprites_Chang, 0x31 },
    { L"Striker Portrait", 0x2fa230, 0x2fa250 },
    { L"Win Portrait", 0x2ea8f0, 0x2eaa70, indexKOF99Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_B_PALETTES[] =
{
    { L"Main", 0x2dfdf0, 0x2dfe10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x2dfe10, 0x2dfe30, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 2", 0x2dfe30, 0x2dfe50, indexKOF99Sprites_Chang, 0x00 },
    { L"Electric Palette", 0x2dfe50, 0x2dfe70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 3", 0x2dfe70, 0x2dfe90, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Mode Flash", 0x2dfe90, 0x2dfeb0, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2dfeb0, 0x2dfed0, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Extra 2", 0x2dfed0, 0x2dfef0, indexKOF99Sprites_Chang, 0x00 },
    { L"Armor Mode Flash", 0x2dfef0, 0x2dff10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2dff10, 0x2dff30, indexKOF99Sprites_Chang, 0x01 },
    { L"Armor Mode Extra 2", 0x2dff30, 0x2dff50, indexKOF99Sprites_Chang, 0x00 },
    { L"Super Trail Palette", 0x2dff50, 0x2dff70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 4", 0x2dff70, 0x2dff90, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 5", 0x2dff90, 0x2dffb0, indexKOF99Sprites_Chang, 0x00 },
    { L"Lifebar Portrait", 0x2dffb0, 0x2dffd0 },
    { L"Character Portrait", 0x2dffd0, 0x2dfff0, indexKOF99Sprites_Chang, 0x31 },
    { L"Striker Portrait", 0x2fa250, 0x2fa270 },
    { L"Win Portrait", 0x2eaa70, 0x2eabf0, indexKOF99Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_A_PALETTES[] =
{
    { L"Main", 0x2dfff0, 0x2e0010, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 1", 0x2e0010, 0x2e0030, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 2", 0x2e0030, 0x2e0050, indexKOF99Sprites_Choi, 0x00 },
    { L"Electric Palette", 0x2e0050, 0x2e0070, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 3", 0x2e0070, 0x2e0090, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Mode Flash", 0x2e0090, 0x2e00b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 1", 0x2e00b0, 0x2e00d0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 2", 0x2e00d0, 0x2e00f0, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Flash", 0x2e00f0, 0x2e0110, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0110, 0x2e0130, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0130, 0x2e0150, indexKOF99Sprites_Choi, 0x00 },
    { L"Super Trail Palette", 0x2e0150, 0x2e0170, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 4", 0x2e0170, 0x2e0190, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 5", 0x2e0190, 0x2e01b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Lifebar Portrait", 0x2e01b0, 0x2e01d0 },
    { L"Character Portrait", 0x2e01d0, 0x2e01f0, indexKOF99Sprites_Choi, 0x31 },
    { L"Striker Portrait", 0x2fa270, 0x2fa290 },
    { L"Win Portrait", 0x2eabf0, 0x2ead70, indexKOF99Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_B_PALETTES[] =
{
    { L"Main", 0x2e01f0, 0x2e0210, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 1", 0x2e0210, 0x2e0230, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 2", 0x2e0230, 0x2e0250, indexKOF99Sprites_Choi, 0x00 },
    { L"Electric Palette", 0x2e0250, 0x2e0270, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 3", 0x2e0270, 0x2e0290, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Mode Flash", 0x2e0290, 0x2e02b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 1", 0x2e02b0, 0x2e02d0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 2", 0x2e02d0, 0x2e02f0, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Flash", 0x2e02f0, 0x2e0310, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0310, 0x2e0330, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0330, 0x2e0350, indexKOF99Sprites_Choi, 0x00 },
    { L"Super Trail Palette", 0x2e0350, 0x2e0370, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 4", 0x2e0370, 0x2e0390, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 5", 0x2e0390, 0x2e03b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Lifebar Portrait", 0x2e03b0, 0x2e03d0 },
    { L"Character Portrait", 0x2e03d0, 0x2e03f0, indexKOF99Sprites_Choi, 0x31 },
    { L"Striker Portrait", 0x2fa290, 0x2fa2b0 },
    { L"Win Portrait", 0x2ead70, 0x2eaef0, indexKOF99Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_A_PALETTES[] =
{
    { L"Main", 0x2e03f0, 0x2e0410, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 1", 0x2e0410, 0x2e0430, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 2", 0x2e0430, 0x2e0450, indexKOF99Sprites_Jhun, 0x00 },
    { L"Electric Palette", 0x2e0450, 0x2e0470, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 3", 0x2e0470, 0x2e0490, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Mode Flash", 0x2e0490, 0x2e04b0, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e04b0, 0x2e04d0, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Extra 2", 0x2e04d0, 0x2e04f0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Armor Mode Flash", 0x2e04f0, 0x2e0510, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e0510, 0x2e0530, indexKOF99Sprites_Jhun, 0x01 },
    { L"Armor Mode Extra 2", 0x2e0530, 0x2e0550, indexKOF99Sprites_Jhun, 0x00 },
    { L"Super Trail Palette", 0x2e0550, 0x2e0570, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 4", 0x2e0570, 0x2e0590, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 5", 0x2e0590, 0x2e05b0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Lifebar Portrait", 0x2e05b0, 0x2e05d0 },
    { L"Character Portrait", 0x2e05d0, 0x2e05f0, indexKOF99Sprites_Jhun, 0x31 },
    { L"Striker Portrait", 0x2fa2b0, 0x2fa2d0 },
    { L"Win Portrait", 0x2eaef0, 0x2eb070, indexKOF99Sprites_Jhun, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_B_PALETTES[] =
{
    { L"Main", 0x2e05f0, 0x2e0610, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 1", 0x2e0610, 0x2e0630, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 2", 0x2e0630, 0x2e0650, indexKOF99Sprites_Jhun, 0x00 },
    { L"Electric Palette", 0x2e0650, 0x2e0670, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 3", 0x2e0670, 0x2e0690, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Mode Flash", 0x2e0690, 0x2e06b0, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e06b0, 0x2e06d0, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Extra 2", 0x2e06d0, 0x2e06f0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Armor Mode Flash", 0x2e06f0, 0x2e0710, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e0710, 0x2e0730, indexKOF99Sprites_Jhun, 0x01 },
    { L"Armor Mode Extra 2", 0x2e0730, 0x2e0750, indexKOF99Sprites_Jhun, 0x00 },
    { L"Super Trail Palette", 0x2e0750, 0x2e0770, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 4", 0x2e0770, 0x2e0790, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 5", 0x2e0790, 0x2e07b0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Lifebar Portrait", 0x2e07b0, 0x2e07d0 },
    { L"Character Portrait", 0x2e07d0, 0x2e07f0, indexKOF99Sprites_Jhun, 0x31 },
    { L"Striker Portrait", 0x2fa2d0, 0x2fa2f0 },
    { L"Win Portrait", 0x2eb070, 0x2eb1f0, indexKOF99Sprites_Jhun, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_A_PALETTES[] =
{
    { L"Main", 0x2e07f0, 0x2e0810, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x2e0810, 0x2e0830, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x2e0830, 0x2e0850, indexKOF99Sprites_Kyo, 0x00 },
    { L"Electric Palette", 0x2e0850, 0x2e0870, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x2e0870, 0x2e0890, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Mode Flash", 0x2e0890, 0x2e08b0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 1", 0x2e08b0, 0x2e08d0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 2", 0x2e08d0, 0x2e08f0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Flash", 0x2e08f0, 0x2e0910, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0910, 0x2e0930, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0930, 0x2e0950, indexKOF99Sprites_Kyo, 0x00 },
    { L"Super Trail Palette", 0x2e0950, 0x2e0970, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x2e0970, 0x2e0990, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 5", 0x2e0990, 0x2e09b0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Lifebar Portrait", 0x2e09b0, 0x2e09d0 },
    { L"Character Portrait", 0x2e09d0, 0x2e09f0, indexKOF99Sprites_Kyo, 0x31 },
    { L"Striker Portrait", 0x2fa2f0, 0x2fa310 },
    { L"Win Portrait", 0x2eb1f0, 0x2eb370, indexKOF99Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_B_PALETTES[] =
{
    { L"Main", 0x2e09f0, 0x2e0a10, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x2e0a10, 0x2e0a30, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x2e0a30, 0x2e0a50, indexKOF99Sprites_Kyo, 0x00 },
    { L"Electric Palette", 0x2e0a50, 0x2e0a70, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x2e0a70, 0x2e0a90, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Mode Flash", 0x2e0a90, 0x2e0ab0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 1", 0x2e0ab0, 0x2e0ad0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 2", 0x2e0ad0, 0x2e0af0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Flash", 0x2e0af0, 0x2e0b10, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0b10, 0x2e0b30, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0b30, 0x2e0b50, indexKOF99Sprites_Kyo, 0x00 },
    { L"Super Trail Palette", 0x2e0b50, 0x2e0b70, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x2e0b70, 0x2e0b90, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 5", 0x2e0b90, 0x2e0bb0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Lifebar Portrait", 0x2e0bb0, 0x2e0bd0 },
    { L"Character Portrait", 0x2e0bd0, 0x2e0bf0, indexKOF99Sprites_Kyo, 0x31 },
    { L"Striker Portrait", 0x2fa310, 0x2fa330 },
    { L"Win Portrait", 0x2eb370, 0x2eb4f0, indexKOF99Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_A_PALETTES[] =
{
    { L"Main", 0x2e0bf0, 0x2e0c10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 1", 0x2e0c10, 0x2e0c30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 2", 0x2e0c30, 0x2e0c50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Electric Palette", 0x2e0c50, 0x2e0c70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 3", 0x2e0c70, 0x2e0c90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Mode Flash", 0x2e0c90, 0x2e0cb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 1", 0x2e0cb0, 0x2e0cd0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 2", 0x2e0cd0, 0x2e0cf0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Flash", 0x2e0cf0, 0x2e0d10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0d10, 0x2e0d30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0d30, 0x2e0d50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Super Trail Palette", 0x2e0d50, 0x2e0d70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 4", 0x2e0d70, 0x2e0d90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 5", 0x2e0d90, 0x2e0db0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Lifebar Portrait", 0x2e0db0, 0x2e0dd0 },
    { L"Character Portrait", 0x2e0dd0, 0x2e0df0, indexKOF99Sprites_Kyo1, 0x31 },
    { L"Striker Portrait", 0x2fa330, 0x2fa350 },
    { L"Win Portrait", 0x2eb4f0, 0x2eb670, indexKOF99Sprites_Kyo1, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_B_PALETTES[] =
{
    { L"Main", 0x2e0df0, 0x2e0e10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 1", 0x2e0e10, 0x2e0e30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 2", 0x2e0e30, 0x2e0e50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Electric Palette", 0x2e0e50, 0x2e0e70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 3", 0x2e0e70, 0x2e0e90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Mode Flash", 0x2e0e90, 0x2e0eb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 1", 0x2e0eb0, 0x2e0ed0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 2", 0x2e0ed0, 0x2e0ef0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Flash", 0x2e0ef0, 0x2e0f10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0f10, 0x2e0f30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0f30, 0x2e0f50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Super Trail Palette", 0x2e0f50, 0x2e0f70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 4", 0x2e0f70, 0x2e0f90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 5", 0x2e0f90, 0x2e0fb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Lifebar Portrait", 0x2e0fb0, 0x2e0fd0 },
    { L"Character Portrait", 0x2e0fd0, 0x2e0ff0, indexKOF99Sprites_Kyo1, 0x31 },
    { L"Striker Portrait", 0x2fa350, 0x2fa370 },
    { L"Win Portrait", 0x2eb670, 0x2eb7f0, indexKOF99Sprites_Kyo1, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_A_PALETTES[] =
{
    { L"Main", 0x2e0ff0, 0x2e1010, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 1", 0x2e1010, 0x2e1030, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 2", 0x2e1030, 0x2e1050, indexKOF99Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x2e1050, 0x2e1070, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 3", 0x2e1070, 0x2e1090, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Mode Flash", 0x2e1090, 0x2e10b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 1", 0x2e10b0, 0x2e10d0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 2", 0x2e10d0, 0x2e10f0, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Flash", 0x2e10f0, 0x2e1110, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1110, 0x2e1130, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1130, 0x2e1150, indexKOF99Sprites_Iori, 0x00 },
    { L"Super Trail Palette", 0x2e1150, 0x2e1170, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 4", 0x2e1170, 0x2e1190, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 5", 0x2e1190, 0x2e11b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Lifebar Portrait", 0x2e11b0, 0x2e11d0 },
    { L"Character Portrait", 0x2e11d0, 0x2e11f0, indexKOF99Sprites_Iori, 0x31 },
    { L"Striker Portrait", 0x2fa370, 0x2fa390 },
    { L"Win Portrait", 0x2eb7f0, 0x2eb970, indexKOF99Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_B_PALETTES[] =
{
    { L"Main", 0x2e11f0, 0x2e1210, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 1", 0x2e1210, 0x2e1230, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 2", 0x2e1230, 0x2e1250, indexKOF99Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x2e1250, 0x2e1270, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 3", 0x2e1270, 0x2e1290, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Mode Flash", 0x2e1290, 0x2e12b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 1", 0x2e12b0, 0x2e12d0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 2", 0x2e12d0, 0x2e12f0, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Flash", 0x2e12f0, 0x2e1310, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1310, 0x2e1330, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1330, 0x2e1350, indexKOF99Sprites_Iori, 0x00 },
    { L"Super Trail Palette", 0x2e1350, 0x2e1370, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 4", 0x2e1370, 0x2e1390, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 5", 0x2e1390, 0x2e13b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Lifebar Portrait", 0x2e13b0, 0x2e13d0 },
    { L"Character Portrait", 0x2e13d0, 0x2e13f0, indexKOF99Sprites_Iori, 0x31 },
    { L"Striker Portrait", 0x2fa390, 0x2fa3b0 },
    { L"Win Portrait", 0x2eb970, 0x2ebaf0, indexKOF99Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_A_PALETTES[] =
{
    { L"Main", 0x2e13f0, 0x2e1410, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 1", 0x2e1410, 0x2e1430, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 2", 0x2e1430, 0x2e1450, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1450, 0x2e1470, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 3", 0x2e1470, 0x2e1490, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Mode Flash", 0x2e1490, 0x2e14b0, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e14b0, 0x2e14d0, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Extra 2", 0x2e14d0, 0x2e14f0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e14f0, 0x2e1510, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e1510, 0x2e1530, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Armor Mode Extra 2", 0x2e1530, 0x2e1550, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1550, 0x2e1570, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 4", 0x2e1570, 0x2e1590, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 5", 0x2e1590, 0x2e15b0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e15b0, 0x2e15d0 },
    { L"Character Portrait", 0x2e15d0, 0x2e15f0, indexKOF99Sprites_JacketKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa3b0, 0x2fa3d0 },
    { L"Win Portrait", 0x2ebaf0, 0x2ebc70, indexKOF99Sprites_JacketKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_B_PALETTES[] =
{
    { L"Main", 0x2e15f0, 0x2e1610, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 1", 0x2e1610, 0x2e1630, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 2", 0x2e1630, 0x2e1650, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1650, 0x2e1670, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 3", 0x2e1670, 0x2e1690, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Mode Flash", 0x2e1690, 0x2e16b0, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e16b0, 0x2e16d0, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Extra 2", 0x2e16d0, 0x2e16f0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e16f0, 0x2e1710, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e1710, 0x2e1730, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Armor Mode Extra 2", 0x2e1730, 0x2e1750, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1750, 0x2e1770, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 4", 0x2e1770, 0x2e1790, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 5", 0x2e1790, 0x2e17b0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e17b0, 0x2e17d0 },
    { L"Character Portrait", 0x2e17d0, 0x2e17f0, indexKOF99Sprites_JacketKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa3d0, 0x2fa3f0 },
    { L"Win Portrait", 0x2ebc70, 0x2ebdf0, indexKOF99Sprites_JacketKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_A_PALETTES[] =
{
    { L"Main", 0x2e17f0, 0x2e1810, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 1", 0x2e1810, 0x2e1830, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 2", 0x2e1830, 0x2e1850, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1850, 0x2e1870, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 3", 0x2e1870, 0x2e1890, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Mode Flash", 0x2e1890, 0x2e18b0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 1", 0x2e18b0, 0x2e18d0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 2", 0x2e18d0, 0x2e18f0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e18f0, 0x2e1910, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1910, 0x2e1930, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1930, 0x2e1950, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1950, 0x2e1970, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 4", 0x2e1970, 0x2e1990, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 5", 0x2e1990, 0x2e19b0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e19b0, 0x2e19d0 },
    { L"Character Portrait", 0x2e19d0, 0x2e19f0, indexKOF99Sprites_BossKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa3f0, 0x2fa410 },
    { L"Win Portrait", 0x2ebdf0, 0x2ebf70, indexKOF99Sprites_BossKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_B_PALETTES[] =
{
    { L"Main", 0x2e19f0, 0x2e1a10, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 1", 0x2e1a10, 0x2e1a30, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 2", 0x2e1a30, 0x2e1a50, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1a50, 0x2e1a70, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 3", 0x2e1a70, 0x2e1a90, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Mode Flash", 0x2e1a90, 0x2e1ab0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 1", 0x2e1ab0, 0x2e1ad0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 2", 0x2e1ad0, 0x2e1af0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e1af0, 0x2e1b10, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1b10, 0x2e1b30, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1b30, 0x2e1b50, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1b50, 0x2e1b70, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 4", 0x2e1b70, 0x2e1b90, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 5", 0x2e1b90, 0x2e1bb0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e1bb0, 0x2e1bd0 },
    { L"Character Portrait", 0x2e1bd0, 0x2e1bf0, indexKOF99Sprites_BossKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa410, 0x2fa430 },
    { L"Win Portrait", 0x2ebf70, 0x2ec0f0, indexKOF99Sprites_BossKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_A_PALETTES[] =
{
    { L"Main", 0x2fb1f0, 0x2fb210, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 1", 0x2fb210, 0x2fb230, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 2", 0x2fb230, 0x2fb250, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Electric Palette", 0x2fb250, 0x2fb270, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 3", 0x2fb270, 0x2fb290, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Mode Flash", 0x2fb290, 0x2fb2b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 1", 0x2fb2b0, 0x2fb2d0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 2", 0x2fb2d0, 0x2fb2f0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Flash", 0x2fb2f0, 0x2fb310, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 1", 0x2fb310, 0x2fb330, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 2", 0x2fb330, 0x2fb350, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Super Trail Palette", 0x2fb350, 0x2fb370, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 4", 0x2fb370, 0x2fb390, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 5", 0x2fb390, 0x2fb3b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Lifebar Portrait", 0x2fb3b0, 0x2fb3d0 },
    { L"Character Portrait", 0x2fb3d0, 0x2fb3f0, indexKOF99Sprites_Kyo2, 0x31 },
    { L"Striker Portrait", 0x2fbaf0, 0x2fbb10 },
    { L"Win Portrait", 0x2fb7f0, 0x2fb970, indexKOF99Sprites_Kyo2, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_B_PALETTES[] =
{
    { L"Main", 0x2fb3f0, 0x2fb410, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 1", 0x2fb410, 0x2fb430, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 2", 0x2fb430, 0x2fb450, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Electric Palette", 0x2fb450, 0x2fb470, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 3", 0x2fb470, 0x2fb490, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Mode Flash", 0x2fb490, 0x2fb4b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 1", 0x2fb4b0, 0x2fb4d0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 2", 0x2fb4d0, 0x2fb4f0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Flash", 0x2fb4f0, 0x2fb510, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 1", 0x2fb510, 0x2fb530, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 2", 0x2fb530, 0x2fb550, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Super Trail Palette", 0x2fb550, 0x2fb570, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 4", 0x2fb570, 0x2fb590, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 5", 0x2fb590, 0x2fb5b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Lifebar Portrait", 0x2fb5b0, 0x2fb5d0 },
    { L"Character Portrait", 0x2fb5d0, 0x2fb5f0, indexKOF99Sprites_Kyo2, 0x31 },
    { L"Striker Portrait", 0x2fbb10, 0x2fbb30 },
    { L"Win Portrait", 0x2fb970, 0x2fbaf0, indexKOF99Sprites_Kyo2, 0x30 },
};

const sDescTreeNode KOF99AE_A_P2_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_A_PALETTES, ARRAYSIZE(KOF99AE_A_K_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_B_PALETTES, ARRAYSIZE(KOF99AE_A_K_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_MAXIMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_A_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_B_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_A_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_B_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_SHINGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_SHINGO_A_PALETTES, ARRAYSIZE(KOF99AE_A_SHINGO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_SHINGO_B_PALETTES, ARRAYSIZE(KOF99AE_A_SHINGO_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_A_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_B_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_A_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_B_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_A_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_B_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_A_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_B_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_A_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_B_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_A_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_B_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_A_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_B_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_TAKUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_A_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_B_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_A_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_B_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RALF_A_PALETTES, ARRAYSIZE(KOF99AE_A_RALF_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RALF_B_PALETTES, ARRAYSIZE(KOF99AE_A_RALF_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CLARK_A_PALETTES, ARRAYSIZE(KOF99AE_A_CLARK_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CLARK_B_PALETTES, ARRAYSIZE(KOF99AE_A_CLARK_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_WHIP_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_A_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_B_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_A_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_B_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KENSOU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_A_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_B_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_CHIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_A_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_B_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_BAO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_A_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_B_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_A_PALETTES, ARRAYSIZE(KOF99AE_A_KING_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_B_PALETTES, ARRAYSIZE(KOF99AE_A_KING_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_A_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_B_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KASUMI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_A_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_B_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_XIANGFEI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_A_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_B_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KIM_A_PALETTES, ARRAYSIZE(KOF99AE_A_KIM_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KIM_B_PALETTES, ARRAYSIZE(KOF99AE_A_KIM_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_A_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_B_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_CHOI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_A_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_B_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_JHUN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_A_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_B_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_A_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_B_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KYO1_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_A_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_B_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_A_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_B_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_JACKETKRIZALID_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_A_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_B_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_BOSSKRIZALID_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_A_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_B_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_KYO2_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_A_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_B_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_B_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P2_UNITS[] =
{
    { L"K'", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_K_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_K_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_MAXIMA_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_MAXIMA_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_BENIMARU_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_BENIMARU_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_SHINGO_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_SHINGO_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_TERRY_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_ANDY_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_JOE_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_JOE_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_MAI_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_MAI_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_RYO_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_ROBERT_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_ROBERT_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_YURI_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_YURI_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_TAKUMA_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_TAKUMA_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_LEONA_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_LEONA_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_RALF_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_CLARK_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_CLARK_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_WHIP_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_WHIP_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_ATHENA_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KENSOU_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_CHIN_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_CHIN_COLLECTION) },
    { L"Bao", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_BAO_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_BAO_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KING_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KING_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_BLUEMARY_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_BLUEMARY_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KASUMI_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KASUMI_COLLECTION) },
    { L"Xiangfei", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_XIANGFEI_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_XIANGFEI_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KIM_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_CHANG_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_CHOI_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_CHOI_COLLECTION) },
    { L"Jhun", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_JHUN_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_JHUN_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KYO_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KYO_COLLECTION) },
    { L"Kyo-1", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KYO1_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KYO1_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_IORI_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_IORI_COLLECTION) },
    { L"Jacket Krizalid", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_JACKETKRIZALID_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_JACKETKRIZALID_COLLECTION) },
    { L"Boss Krizalid", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_BOSSKRIZALID_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_BOSSKRIZALID_COLLECTION) },
    { L"Kyo-2", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P2_KYO2_COLLECTION, ARRAYSIZE(KOF99AE_A_P2_KYO2_COLLECTION) },
};

const sGame_PaletteDataset KOF99AE_A_K_C_PALETTES[] =
{
    { L"Main", 0x1d97f0, 0x1d9810, indexKOF99Sprites_K, 0x00 },
    { L"Extra 1", 0x1d9810, 0x1d9830, indexKOF99Sprites_K, 0x00 },
    { L"Extra 2", 0x1d9830, 0x1d9850, indexKOF99Sprites_K, 0x00 },
    { L"Electric Palette", 0x1d9850, 0x1d9870, indexKOF99Sprites_K, 0x00 },
    { L"Extra 3", 0x1d9870, 0x1d9890, indexKOF99Sprites_K, 0x00 },
    { L"Counter Mode Flash", 0x1d9890, 0x1d98b0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 1", 0x1d98b0, 0x1d98d0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 2", 0x1d98d0, 0x1d98f0, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Flash", 0x1d98f0, 0x1d9910, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 1", 0x1d9910, 0x1d9930, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 2", 0x1d9930, 0x1d9950, indexKOF99Sprites_K, 0x00 },
    { L"Super Trail Palette", 0x1d9950, 0x1d9970, indexKOF99Sprites_K, 0x00 },
    { L"Extra 4", 0x1d9970, 0x1d9990, indexKOF99Sprites_K, 0x00 },
    { L"Extra 5", 0x1d9990, 0x1d99b0, indexKOF99Sprites_K, 0x00 },
    { L"Lifebar Portrait", 0x1d99b0, 0x1d99d0 },
    { L"Character Portrait", 0x1d99d0, 0x1d99f0, indexKOF99Sprites_K, 0x31 },
    { L"Striker Portrait", 0x1f9bf0, 0x1f9c10 },
    { L"Win Portrait", 0x1e5df0, 0x1e5f70, indexKOF99Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_K_D_PALETTES[] =
{
    { L"Main", 0x1d99f0, 0x1d9a10, indexKOF99Sprites_K, 0x00 },
    { L"Extra 1", 0x1d9a10, 0x1d9a30, indexKOF99Sprites_K, 0x00 },
    { L"Extra 2", 0x1d9a30, 0x1d9a50, indexKOF99Sprites_K, 0x00 },
    { L"Electric Palette", 0x1d9a50, 0x1d9a70, indexKOF99Sprites_K, 0x00 },
    { L"Extra 3", 0x1d9a70, 0x1d9a90, indexKOF99Sprites_K, 0x00 },
    { L"Counter Mode Flash", 0x1d9a90, 0x1d9ab0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 1", 0x1d9ab0, 0x1d9ad0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 2", 0x1d9ad0, 0x1d9af0, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Flash", 0x1d9af0, 0x1d9b10, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 1", 0x1d9b10, 0x1d9b30, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 2", 0x1d9b30, 0x1d9b50, indexKOF99Sprites_K, 0x00 },
    { L"Super Trail Palette", 0x1d9b50, 0x1d9b70, indexKOF99Sprites_K, 0x00 },
    { L"Extra 4", 0x1d9b70, 0x1d9b90, indexKOF99Sprites_K, 0x00 },
    { L"Extra 5", 0x1d9b90, 0x1d9bb0, indexKOF99Sprites_K, 0x00 },
    { L"Lifebar Portrait", 0x1d9bb0, 0x1d9bd0 },
    { L"Character Portrait", 0x1d9bd0, 0x1d9bf0, indexKOF99Sprites_K, 0x31 },
    { L"Striker Portrait", 0x1f9c10, 0x1f9c30 },
    { L"Win Portrait", 0x1e5f70, 0x1e60f0, indexKOF99Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_K_AC_PALETTES[] =
{
    { L"Main", 0x2d97f0, 0x2d9810, indexKOF99Sprites_K, 0x00 },
    { L"Extra 1", 0x2d9810, 0x2d9830, indexKOF99Sprites_K, 0x00 },
    { L"Extra 2", 0x2d9830, 0x2d9850, indexKOF99Sprites_K, 0x00 },
    { L"Electric Palette", 0x2d9850, 0x2d9870, indexKOF99Sprites_K, 0x00 },
    { L"Extra 3", 0x2d9870, 0x2d9890, indexKOF99Sprites_K, 0x00 },
    { L"Counter Mode Flash", 0x2d9890, 0x2d98b0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 1", 0x2d98b0, 0x2d98d0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 2", 0x2d98d0, 0x2d98f0, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Flash", 0x2d98f0, 0x2d9910, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9910, 0x2d9930, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9930, 0x2d9950, indexKOF99Sprites_K, 0x00 },
    { L"Super Trail Palette", 0x2d9950, 0x2d9970, indexKOF99Sprites_K, 0x00 },
    { L"Extra 4", 0x2d9970, 0x2d9990, indexKOF99Sprites_K, 0x00 },
    { L"Extra 5", 0x2d9990, 0x2d99b0, indexKOF99Sprites_K, 0x00 },
    { L"Lifebar Portrait", 0x2d99b0, 0x2d99d0 },
    { L"Character Portrait", 0x2d99d0, 0x2d99f0, indexKOF99Sprites_K, 0x31 },
    { L"Striker Portrait", 0x2f9bf0, 0x2f9c10 },
    { L"Win Portrait", 0x2e5df0, 0x2e5f70, indexKOF99Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_K_BD_PALETTES[] =
{
    { L"Main", 0x2d99f0, 0x2d9a10, indexKOF99Sprites_K, 0x00 },
    { L"Extra 1", 0x2d9a10, 0x2d9a30, indexKOF99Sprites_K, 0x00 },
    { L"Extra 2", 0x2d9a30, 0x2d9a50, indexKOF99Sprites_K, 0x00 },
    { L"Electric Palette", 0x2d9a50, 0x2d9a70, indexKOF99Sprites_K, 0x00 },
    { L"Extra 3", 0x2d9a70, 0x2d9a90, indexKOF99Sprites_K, 0x00 },
    { L"Counter Mode Flash", 0x2d9a90, 0x2d9ab0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 1", 0x2d9ab0, 0x2d9ad0, indexKOF99Sprites_K, 0x00 },
    { L"Counter Extra 2", 0x2d9ad0, 0x2d9af0, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Flash", 0x2d9af0, 0x2d9b10, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9b10, 0x2d9b30, indexKOF99Sprites_K, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9b30, 0x2d9b50, indexKOF99Sprites_K, 0x00 },
    { L"Super Trail Palette", 0x2d9b50, 0x2d9b70, indexKOF99Sprites_K, 0x00 },
    { L"Extra 4", 0x2d9b70, 0x2d9b90, indexKOF99Sprites_K, 0x00 },
    { L"Extra 5", 0x2d9b90, 0x2d9bb0, indexKOF99Sprites_K, 0x00 },
    { L"Lifebar Portrait", 0x2d9bb0, 0x2d9bd0 },
    { L"Character Portrait", 0x2d9bd0, 0x2d9bf0, indexKOF99Sprites_K, 0x31 },
    { L"Striker Portrait", 0x2f9c10, 0x2f9c30 },
    { L"Win Portrait", 0x2e5f70, 0x2e60f0, indexKOF99Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_K_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e1bf0, 0x2e1c10 },
    { L"Effect 1", 0x2e1c10, 0x2e1c30 },
    { L"Effect 2", 0x2e1c30, 0x2e1c50 },
    { L"Effect 3", 0x2e1c50, 0x2e1c70 },
    { L"Effect 4", 0x2e1c70, 0x2e1c90 },
    { L"Effect 5", 0x2e1c90, 0x2e1cb0 },
    { L"Effect 6", 0x2e1cb0, 0x2e1cd0 },
    { L"Effect 7", 0x2e1cd0, 0x2e1cf0 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_C_PALETTES[] =
{
    { L"Main", 0x1d9bf0, 0x1d9c10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 1", 0x1d9c10, 0x1d9c30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 2", 0x1d9c30, 0x1d9c50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Electric Palette", 0x1d9c50, 0x1d9c70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 3", 0x1d9c70, 0x1d9c90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Mode Flash", 0x1d9c90, 0x1d9cb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 1", 0x1d9cb0, 0x1d9cd0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 2", 0x1d9cd0, 0x1d9cf0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Flash", 0x1d9cf0, 0x1d9d10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 1", 0x1d9d10, 0x1d9d30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 2", 0x1d9d30, 0x1d9d50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Super Trail Palette", 0x1d9d50, 0x1d9d70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 4", 0x1d9d70, 0x1d9d90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 5", 0x1d9d90, 0x1d9db0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Lifebar Portrait", 0x1d9db0, 0x1d9dd0 },
    { L"Character Portrait", 0x1d9dd0, 0x1d9df0, indexKOF99Sprites_Maxima, 0x31 },
    { L"Striker Portrait", 0x1f9c30, 0x1f9c50 },
    { L"Win Portrait", 0x1e60f0, 0x1e6270, indexKOF99Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_D_PALETTES[] =
{
    { L"Main", 0x1d9df0, 0x1d9e10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 1", 0x1d9e10, 0x1d9e30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 2", 0x1d9e30, 0x1d9e50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Electric Palette", 0x1d9e50, 0x1d9e70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 3", 0x1d9e70, 0x1d9e90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Mode Flash", 0x1d9e90, 0x1d9eb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 1", 0x1d9eb0, 0x1d9ed0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 2", 0x1d9ed0, 0x1d9ef0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Flash", 0x1d9ef0, 0x1d9f10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 1", 0x1d9f10, 0x1d9f30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 2", 0x1d9f30, 0x1d9f50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Super Trail Palette", 0x1d9f50, 0x1d9f70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 4", 0x1d9f70, 0x1d9f90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 5", 0x1d9f90, 0x1d9fb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Lifebar Portrait", 0x1d9fb0, 0x1d9fd0 },
    { L"Character Portrait", 0x1d9fd0, 0x1d9ff0, indexKOF99Sprites_Maxima, 0x31 },
    { L"Striker Portrait", 0x1f9c50, 0x1f9c70 },
    { L"Win Portrait", 0x1e6270, 0x1e63f0, indexKOF99Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_AC_PALETTES[] =
{
    { L"Main", 0x2d9bf0, 0x2d9c10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 1", 0x2d9c10, 0x2d9c30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 2", 0x2d9c30, 0x2d9c50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Electric Palette", 0x2d9c50, 0x2d9c70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 3", 0x2d9c70, 0x2d9c90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Mode Flash", 0x2d9c90, 0x2d9cb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 1", 0x2d9cb0, 0x2d9cd0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 2", 0x2d9cd0, 0x2d9cf0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Flash", 0x2d9cf0, 0x2d9d10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9d10, 0x2d9d30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9d30, 0x2d9d50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Super Trail Palette", 0x2d9d50, 0x2d9d70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 4", 0x2d9d70, 0x2d9d90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 5", 0x2d9d90, 0x2d9db0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Lifebar Portrait", 0x2d9db0, 0x2d9dd0 },
    { L"Character Portrait", 0x2d9dd0, 0x2d9df0, indexKOF99Sprites_Maxima, 0x31 },
    { L"Striker Portrait", 0x2f9c30, 0x2f9c50 },
    { L"Win Portrait", 0x2e60f0, 0x2e6270, indexKOF99Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_BD_PALETTES[] =
{
    { L"Main", 0x2d9df0, 0x2d9e10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 1", 0x2d9e10, 0x2d9e30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 2", 0x2d9e30, 0x2d9e50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Electric Palette", 0x2d9e50, 0x2d9e70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 3", 0x2d9e70, 0x2d9e90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Mode Flash", 0x2d9e90, 0x2d9eb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 1", 0x2d9eb0, 0x2d9ed0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Counter Extra 2", 0x2d9ed0, 0x2d9ef0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Flash", 0x2d9ef0, 0x2d9f10, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 1", 0x2d9f10, 0x2d9f30, indexKOF99Sprites_Maxima, 0x00 },
    { L"Armor Mode Extra 2", 0x2d9f30, 0x2d9f50, indexKOF99Sprites_Maxima, 0x00 },
    { L"Super Trail Palette", 0x2d9f50, 0x2d9f70, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 4", 0x2d9f70, 0x2d9f90, indexKOF99Sprites_Maxima, 0x00 },
    { L"Extra 5", 0x2d9f90, 0x2d9fb0, indexKOF99Sprites_Maxima, 0x00 },
    { L"Lifebar Portrait", 0x2d9fb0, 0x2d9fd0 },
    { L"Character Portrait", 0x2d9fd0, 0x2d9ff0, indexKOF99Sprites_Maxima, 0x31 },
    { L"Striker Portrait", 0x2f9c50, 0x2f9c70 },
    { L"Win Portrait", 0x2e6270, 0x2e63f0, indexKOF99Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAXIMA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e1df0, 0x2e1e10 },
    { L"Effect 1", 0x2e1e10, 0x2e1e30 },
    { L"Effect 2", 0x2e1e30, 0x2e1e50 },
    { L"Effect 3", 0x2e1e50, 0x2e1e70 },
    { L"Effect 4", 0x2e1e70, 0x2e1e90 },
    { L"Effect 5", 0x2e1e90, 0x2e1eb0 },
    { L"Effect 6", 0x2e1eb0, 0x2e1ed0 },
    { L"Effect 7", 0x2e1ed0, 0x2e1ef0 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_C_PALETTES[] =
{
    { L"Main", 0x1d9ff0, 0x1da010, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x1da010, 0x1da030, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x1da030, 0x1da050, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x1da050, 0x1da070, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x1da070, 0x1da090, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Mode Flash", 0x1da090, 0x1da0b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 1", 0x1da0b0, 0x1da0d0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 2", 0x1da0d0, 0x1da0f0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Flash", 0x1da0f0, 0x1da110, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 1", 0x1da110, 0x1da130, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 2", 0x1da130, 0x1da150, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Super Trail Palette", 0x1da150, 0x1da170, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x1da170, 0x1da190, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 5", 0x1da190, 0x1da1b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Lifebar Portrait", 0x1da1b0, 0x1da1d0 },
    { L"Character Portrait", 0x1da1d0, 0x1da1f0, indexKOF99Sprites_Benimaru, 0x31 },
    { L"Striker Portrait", 0x1f9c70, 0x1f9c90 },
    { L"Win Portrait", 0x1e63f0, 0x1e6570, indexKOF99Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_D_PALETTES[] =
{
    { L"Main", 0x1da1f0, 0x1da210, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x1da210, 0x1da230, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x1da230, 0x1da250, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x1da250, 0x1da270, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x1da270, 0x1da290, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Mode Flash", 0x1da290, 0x1da2b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 1", 0x1da2b0, 0x1da2d0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 2", 0x1da2d0, 0x1da2f0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Flash", 0x1da2f0, 0x1da310, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 1", 0x1da310, 0x1da330, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 2", 0x1da330, 0x1da350, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Super Trail Palette", 0x1da350, 0x1da370, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x1da370, 0x1da390, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 5", 0x1da390, 0x1da3b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Lifebar Portrait", 0x1da3b0, 0x1da3d0 },
    { L"Character Portrait", 0x1da3d0, 0x1da3f0, indexKOF99Sprites_Benimaru, 0x31 },
    { L"Striker Portrait", 0x1f9c90, 0x1f9cb0 },
    { L"Win Portrait", 0x1e6570, 0x1e66f0, indexKOF99Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_AC_PALETTES[] =
{
    { L"Main", 0x2d9ff0, 0x2da010, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x2da010, 0x2da030, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x2da030, 0x2da050, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x2da050, 0x2da070, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x2da070, 0x2da090, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Mode Flash", 0x2da090, 0x2da0b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 1", 0x2da0b0, 0x2da0d0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 2", 0x2da0d0, 0x2da0f0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Flash", 0x2da0f0, 0x2da110, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 1", 0x2da110, 0x2da130, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 2", 0x2da130, 0x2da150, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Super Trail Palette", 0x2da150, 0x2da170, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x2da170, 0x2da190, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 5", 0x2da190, 0x2da1b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Lifebar Portrait", 0x2da1b0, 0x2da1d0 },
    { L"Character Portrait", 0x2da1d0, 0x2da1f0, indexKOF99Sprites_Benimaru, 0x31 },
    { L"Striker Portrait", 0x2f9c70, 0x2f9c90 },
    { L"Win Portrait", 0x2e63f0, 0x2e6570, indexKOF99Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_BD_PALETTES[] =
{
    { L"Main", 0x2da1f0, 0x2da210, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 1", 0x2da210, 0x2da230, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 2", 0x2da230, 0x2da250, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Electric Palette", 0x2da250, 0x2da270, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 3", 0x2da270, 0x2da290, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Mode Flash", 0x2da290, 0x2da2b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 1", 0x2da2b0, 0x2da2d0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Counter Extra 2", 0x2da2d0, 0x2da2f0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Flash", 0x2da2f0, 0x2da310, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 1", 0x2da310, 0x2da330, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Armor Mode Extra 2", 0x2da330, 0x2da350, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Super Trail Palette", 0x2da350, 0x2da370, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 4", 0x2da370, 0x2da390, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Extra 5", 0x2da390, 0x2da3b0, indexKOF99Sprites_Benimaru, 0x00 },
    { L"Lifebar Portrait", 0x2da3b0, 0x2da3d0 },
    { L"Character Portrait", 0x2da3d0, 0x2da3f0, indexKOF99Sprites_Benimaru, 0x31 },
    { L"Striker Portrait", 0x2f9c90, 0x2f9cb0 },
    { L"Win Portrait", 0x2e6570, 0x2e66f0, indexKOF99Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BENIMARU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e1ff0, 0x2e2010 },
    { L"Effect 1", 0x2e2010, 0x2e2030 },
    { L"Effect 2", 0x2e2030, 0x2e2050 },
    { L"Effect 3", 0x2e2050, 0x2e2070 },
    { L"Effect 4", 0x2e2070, 0x2e2090 },
    { L"Effect 5", 0x2e2090, 0x2e20b0 },
    { L"Effect 6", 0x2e20b0, 0x2e20d0 },
    { L"Effect 7", 0x2e20d0, 0x2e20f0 },
};

const sGame_PaletteDataset KOF99AE_A_SHINGO_C_PALETTES[] =
{
    { L"Main", 0x1da3f0, 0x1da410, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 1", 0x1da410, 0x1da430, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 2", 0x1da430, 0x1da450, indexKOF99Sprites_Shingo, 0x00 },
    { L"Electric Palette", 0x1da450, 0x1da470, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 3", 0x1da470, 0x1da490, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Mode Flash", 0x1da490, 0x1da4b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 1", 0x1da4b0, 0x1da4d0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 2", 0x1da4d0, 0x1da4f0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Flash", 0x1da4f0, 0x1da510, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 1", 0x1da510, 0x1da530, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 2", 0x1da530, 0x1da550, indexKOF99Sprites_Shingo, 0x00 },
    { L"Super Trail Palette", 0x1da550, 0x1da570, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 4", 0x1da570, 0x1da590, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 5", 0x1da590, 0x1da5b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Lifebar Portrait", 0x1da5b0, 0x1da5d0 },
    { L"Character Portrait", 0x1da5d0, 0x1da5f0, indexKOF99Sprites_Shingo, 0x31 },
    { L"Striker Portrait", 0x1f9cb0, 0x1f9cd0 },
    { L"Win Portrait", 0x1e66f0, 0x1e6870, indexKOF99Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_SHINGO_D_PALETTES[] =
{
    { L"Main", 0x1da5f0, 0x1da610, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 1", 0x1da610, 0x1da630, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 2", 0x1da630, 0x1da650, indexKOF99Sprites_Shingo, 0x00 },
    { L"Electric Palette", 0x1da650, 0x1da670, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 3", 0x1da670, 0x1da690, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Mode Flash", 0x1da690, 0x1da6b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 1", 0x1da6b0, 0x1da6d0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 2", 0x1da6d0, 0x1da6f0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Flash", 0x1da6f0, 0x1da710, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 1", 0x1da710, 0x1da730, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 2", 0x1da730, 0x1da750, indexKOF99Sprites_Shingo, 0x00 },
    { L"Super Trail Palette", 0x1da750, 0x1da770, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 4", 0x1da770, 0x1da790, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 5", 0x1da790, 0x1da7b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Lifebar Portrait", 0x1da7b0, 0x1da7d0 },
    { L"Character Portrait", 0x1da7d0, 0x1da7f0, indexKOF99Sprites_Shingo, 0x31 },
    { L"Striker Portrait", 0x1f9cd0, 0x1f9cf0 },
    { L"Win Portrait", 0x1e6870, 0x1e69f0, indexKOF99Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_SHINGO_AC_PALETTES[] =
{
    { L"Main", 0x2da3f0, 0x2da410, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 1", 0x2da410, 0x2da430, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 2", 0x2da430, 0x2da450, indexKOF99Sprites_Shingo, 0x00 },
    { L"Electric Palette", 0x2da450, 0x2da470, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 3", 0x2da470, 0x2da490, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Mode Flash", 0x2da490, 0x2da4b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 1", 0x2da4b0, 0x2da4d0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 2", 0x2da4d0, 0x2da4f0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Flash", 0x2da4f0, 0x2da510, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 1", 0x2da510, 0x2da530, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 2", 0x2da530, 0x2da550, indexKOF99Sprites_Shingo, 0x00 },
    { L"Super Trail Palette", 0x2da550, 0x2da570, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 4", 0x2da570, 0x2da590, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 5", 0x2da590, 0x2da5b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Lifebar Portrait", 0x2da5b0, 0x2da5d0 },
    { L"Character Portrait", 0x2da5d0, 0x2da5f0, indexKOF99Sprites_Shingo, 0x31 },
    { L"Striker Portrait", 0x2f9cb0, 0x2f9cd0 },
    { L"Win Portrait", 0x2e66f0, 0x2e6870, indexKOF99Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_SHINGO_BD_PALETTES[] =
{
    { L"Main", 0x2da5f0, 0x2da610, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 1", 0x2da610, 0x2da630, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 2", 0x2da630, 0x2da650, indexKOF99Sprites_Shingo, 0x00 },
    { L"Electric Palette", 0x2da650, 0x2da670, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 3", 0x2da670, 0x2da690, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Mode Flash", 0x2da690, 0x2da6b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 1", 0x2da6b0, 0x2da6d0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Counter Extra 2", 0x2da6d0, 0x2da6f0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Flash", 0x2da6f0, 0x2da710, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 1", 0x2da710, 0x2da730, indexKOF99Sprites_Shingo, 0x00 },
    { L"Armor Mode Extra 2", 0x2da730, 0x2da750, indexKOF99Sprites_Shingo, 0x00 },
    { L"Super Trail Palette", 0x2da750, 0x2da770, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 4", 0x2da770, 0x2da790, indexKOF99Sprites_Shingo, 0x00 },
    { L"Extra 5", 0x2da790, 0x2da7b0, indexKOF99Sprites_Shingo, 0x00 },
    { L"Lifebar Portrait", 0x2da7b0, 0x2da7d0 },
    { L"Character Portrait", 0x2da7d0, 0x2da7f0, indexKOF99Sprites_Shingo, 0x31 },
    { L"Striker Portrait", 0x2f9cd0, 0x2f9cf0 },
    { L"Win Portrait", 0x2e6870, 0x2e69f0, indexKOF99Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_C_PALETTES[] =
{
    { L"Main", 0x1da7f0, 0x1da810, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 1", 0x1da810, 0x1da830, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 2", 0x1da830, 0x1da850, indexKOF99Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x1da850, 0x1da870, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 3", 0x1da870, 0x1da890, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Mode Flash", 0x1da890, 0x1da8b0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 1", 0x1da8b0, 0x1da8d0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 2", 0x1da8d0, 0x1da8f0, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Flash", 0x1da8f0, 0x1da910, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 1", 0x1da910, 0x1da930, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 2", 0x1da930, 0x1da950, indexKOF99Sprites_Terry, 0x00 },
    { L"Super Trail Palette", 0x1da950, 0x1da970, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 4", 0x1da970, 0x1da990, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 5", 0x1da990, 0x1da9b0, indexKOF99Sprites_Terry, 0x00 },
    { L"Lifebar Portrait", 0x1da9b0, 0x1da9d0 },
    { L"Character Portrait", 0x1da9d0, 0x1da9f0, indexKOF99Sprites_Terry, 0x31 },
    { L"Striker Portrait", 0x1f9cf0, 0x1f9d10 },
    { L"Win Portrait", 0x1e69f0, 0x1e6b70, indexKOF99Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_D_PALETTES[] =
{
    { L"Main", 0x1da9f0, 0x1daa10, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 1", 0x1daa10, 0x1daa30, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 2", 0x1daa30, 0x1daa50, indexKOF99Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x1daa50, 0x1daa70, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 3", 0x1daa70, 0x1daa90, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Mode Flash", 0x1daa90, 0x1daab0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 1", 0x1daab0, 0x1daad0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 2", 0x1daad0, 0x1daaf0, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Flash", 0x1daaf0, 0x1dab10, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 1", 0x1dab10, 0x1dab30, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 2", 0x1dab30, 0x1dab50, indexKOF99Sprites_Terry, 0x00 },
    { L"Super Trail Palette", 0x1dab50, 0x1dab70, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 4", 0x1dab70, 0x1dab90, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 5", 0x1dab90, 0x1dabb0, indexKOF99Sprites_Terry, 0x00 },
    { L"Lifebar Portrait", 0x1dabb0, 0x1dabd0 },
    { L"Character Portrait", 0x1dabd0, 0x1dabf0, indexKOF99Sprites_Terry, 0x31 },
    { L"Striker Portrait", 0x1f9d10, 0x1f9d30 },
    { L"Win Portrait", 0x1e6b70, 0x1e6cf0, indexKOF99Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_AC_PALETTES[] =
{
    { L"Main", 0x2da7f0, 0x2da810, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 1", 0x2da810, 0x2da830, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 2", 0x2da830, 0x2da850, indexKOF99Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x2da850, 0x2da870, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 3", 0x2da870, 0x2da890, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Mode Flash", 0x2da890, 0x2da8b0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 1", 0x2da8b0, 0x2da8d0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 2", 0x2da8d0, 0x2da8f0, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Flash", 0x2da8f0, 0x2da910, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 1", 0x2da910, 0x2da930, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 2", 0x2da930, 0x2da950, indexKOF99Sprites_Terry, 0x00 },
    { L"Super Trail Palette", 0x2da950, 0x2da970, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 4", 0x2da970, 0x2da990, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 5", 0x2da990, 0x2da9b0, indexKOF99Sprites_Terry, 0x00 },
    { L"Lifebar Portrait", 0x2da9b0, 0x2da9d0 },
    { L"Character Portrait", 0x2da9d0, 0x2da9f0, indexKOF99Sprites_Terry, 0x31 },
    { L"Striker Portrait", 0x2f9cf0, 0x2f9d10 },
    { L"Win Portrait", 0x2e69f0, 0x2e6b70, indexKOF99Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_BD_PALETTES[] =
{
    { L"Main", 0x2da9f0, 0x2daa10, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 1", 0x2daa10, 0x2daa30, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 2", 0x2daa30, 0x2daa50, indexKOF99Sprites_Terry, 0x00 },
    { L"Electric Palette", 0x2daa50, 0x2daa70, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 3", 0x2daa70, 0x2daa90, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Mode Flash", 0x2daa90, 0x2daab0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 1", 0x2daab0, 0x2daad0, indexKOF99Sprites_Terry, 0x00 },
    { L"Counter Extra 2", 0x2daad0, 0x2daaf0, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Flash", 0x2daaf0, 0x2dab10, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 1", 0x2dab10, 0x2dab30, indexKOF99Sprites_Terry, 0x00 },
    { L"Armor Mode Extra 2", 0x2dab30, 0x2dab50, indexKOF99Sprites_Terry, 0x00 },
    { L"Super Trail Palette", 0x2dab50, 0x2dab70, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 4", 0x2dab70, 0x2dab90, indexKOF99Sprites_Terry, 0x00 },
    { L"Extra 5", 0x2dab90, 0x2dabb0, indexKOF99Sprites_Terry, 0x00 },
    { L"Lifebar Portrait", 0x2dabb0, 0x2dabd0 },
    { L"Character Portrait", 0x2dabd0, 0x2dabf0, indexKOF99Sprites_Terry, 0x31 },
    { L"Striker Portrait", 0x2f9d10, 0x2f9d30 },
    { L"Win Portrait", 0x2e6b70, 0x2e6cf0, indexKOF99Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TERRY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e23f0, 0x2e2410 },
    { L"Effect 1", 0x2e2410, 0x2e2430 },
    { L"Effect 2", 0x2e2430, 0x2e2450 },
    { L"Effect 3", 0x2e2450, 0x2e2470 },
    { L"Effect 4", 0x2e2470, 0x2e2490 },
    { L"Effect 5", 0x2e2490, 0x2e24b0 },
    { L"Effect 6", 0x2e24b0, 0x2e24d0 },
    { L"Effect 7", 0x2e24d0, 0x2e24f0 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_C_PALETTES[] =
{
    { L"Main", 0x1dabf0, 0x1dac10, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 1", 0x1dac10, 0x1dac30, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 2", 0x1dac30, 0x1dac50, indexKOF99Sprites_Andy, 0x00 },
    { L"Electric Palette", 0x1dac50, 0x1dac70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 3", 0x1dac70, 0x1dac90, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Mode Flash", 0x1dac90, 0x1dacb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 1", 0x1dacb0, 0x1dacd0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 2", 0x1dacd0, 0x1dacf0, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Flash", 0x1dacf0, 0x1dad10, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 1", 0x1dad10, 0x1dad30, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 2", 0x1dad30, 0x1dad50, indexKOF99Sprites_Andy, 0x00 },
    { L"Super Trail Palette", 0x1dad50, 0x1dad70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 4", 0x1dad70, 0x1dad90, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 5", 0x1dad90, 0x1dadb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Lifebar Portrait", 0x1dadb0, 0x1dadd0 },
    { L"Character Portrait", 0x1dadd0, 0x1dadf0, indexKOF99Sprites_Andy, 0x31 },
    { L"Striker Portrait", 0x1f9d30, 0x1f9d50 },
    { L"Win Portrait", 0x1e6cf0, 0x1e6e70, indexKOF99Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_D_PALETTES[] =
{
    { L"Main", 0x1dadf0, 0x1dae10, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 1", 0x1dae10, 0x1dae30, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 2", 0x1dae30, 0x1dae50, indexKOF99Sprites_Andy, 0x00 },
    { L"Electric Palette", 0x1dae50, 0x1dae70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 3", 0x1dae70, 0x1dae90, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Mode Flash", 0x1dae90, 0x1daeb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 1", 0x1daeb0, 0x1daed0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 2", 0x1daed0, 0x1daef0, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Flash", 0x1daef0, 0x1daf10, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 1", 0x1daf10, 0x1daf30, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 2", 0x1daf30, 0x1daf50, indexKOF99Sprites_Andy, 0x00 },
    { L"Super Trail Palette", 0x1daf50, 0x1daf70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 4", 0x1daf70, 0x1daf90, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 5", 0x1daf90, 0x1dafb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Lifebar Portrait", 0x1dafb0, 0x1dafd0 },
    { L"Character Portrait", 0x1dafd0, 0x1daff0, indexKOF99Sprites_Andy, 0x31 },
    { L"Striker Portrait", 0x1f9d50, 0x1f9d70 },
    { L"Win Portrait", 0x1e6e70, 0x1e6ff0, indexKOF99Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_AC_PALETTES[] =
{
    { L"Main", 0x2dabf0, 0x2dac10, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 1", 0x2dac10, 0x2dac30, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 2", 0x2dac30, 0x2dac50, indexKOF99Sprites_Andy, 0x00 },
    { L"Electric Palette", 0x2dac50, 0x2dac70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 3", 0x2dac70, 0x2dac90, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Mode Flash", 0x2dac90, 0x2dacb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 1", 0x2dacb0, 0x2dacd0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 2", 0x2dacd0, 0x2dacf0, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Flash", 0x2dacf0, 0x2dad10, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 1", 0x2dad10, 0x2dad30, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 2", 0x2dad30, 0x2dad50, indexKOF99Sprites_Andy, 0x00 },
    { L"Super Trail Palette", 0x2dad50, 0x2dad70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 4", 0x2dad70, 0x2dad90, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 5", 0x2dad90, 0x2dadb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Lifebar Portrait", 0x2dadb0, 0x2dadd0 },
    { L"Character Portrait", 0x2dadd0, 0x2dadf0, indexKOF99Sprites_Andy, 0x31 },
    { L"Striker Portrait", 0x2f9d30, 0x2f9d50 },
    { L"Win Portrait", 0x2e6cf0, 0x2e6e70, indexKOF99Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_BD_PALETTES[] =
{
    { L"Main", 0x2dadf0, 0x2dae10, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 1", 0x2dae10, 0x2dae30, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 2", 0x2dae30, 0x2dae50, indexKOF99Sprites_Andy, 0x00 },
    { L"Electric Palette", 0x2dae50, 0x2dae70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 3", 0x2dae70, 0x2dae90, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Mode Flash", 0x2dae90, 0x2daeb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 1", 0x2daeb0, 0x2daed0, indexKOF99Sprites_Andy, 0x00 },
    { L"Counter Extra 2", 0x2daed0, 0x2daef0, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Flash", 0x2daef0, 0x2daf10, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 1", 0x2daf10, 0x2daf30, indexKOF99Sprites_Andy, 0x00 },
    { L"Armor Mode Extra 2", 0x2daf30, 0x2daf50, indexKOF99Sprites_Andy, 0x00 },
    { L"Super Trail Palette", 0x2daf50, 0x2daf70, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 4", 0x2daf70, 0x2daf90, indexKOF99Sprites_Andy, 0x00 },
    { L"Extra 5", 0x2daf90, 0x2dafb0, indexKOF99Sprites_Andy, 0x00 },
    { L"Lifebar Portrait", 0x2dafb0, 0x2dafd0 },
    { L"Character Portrait", 0x2dafd0, 0x2daff0, indexKOF99Sprites_Andy, 0x31 },
    { L"Striker Portrait", 0x2f9d50, 0x2f9d70 },
    { L"Win Portrait", 0x2e6e70, 0x2e6ff0, indexKOF99Sprites_Andy, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ANDY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e25f0, 0x2e2610 },
    { L"Effect 1", 0x2e2610, 0x2e2630 },
    { L"Effect 2", 0x2e2630, 0x2e2650 },
    { L"Effect 3", 0x2e2650, 0x2e2670 },
    { L"Effect 4", 0x2e2670, 0x2e2690 },
    { L"Effect 5", 0x2e2690, 0x2e26b0 },
    { L"Effect 6", 0x2e26b0, 0x2e26d0 },
    { L"Effect 7", 0x2e26d0, 0x2e26f0 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_C_PALETTES[] =
{
    { L"Main", 0x1daff0, 0x1db010, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 1", 0x1db010, 0x1db030, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 2", 0x1db030, 0x1db050, indexKOF99Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x1db050, 0x1db070, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 3", 0x1db070, 0x1db090, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Mode Flash", 0x1db090, 0x1db0b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 1", 0x1db0b0, 0x1db0d0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 2", 0x1db0d0, 0x1db0f0, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Flash", 0x1db0f0, 0x1db110, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 1", 0x1db110, 0x1db130, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 2", 0x1db130, 0x1db150, indexKOF99Sprites_Joe, 0x00 },
    { L"Super Trail Palette", 0x1db150, 0x1db170, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 4", 0x1db170, 0x1db190, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 5", 0x1db190, 0x1db1b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Lifebar Portrait", 0x1db1b0, 0x1db1d0 },
    { L"Character Portrait", 0x1db1d0, 0x1db1f0, indexKOF99Sprites_Joe, 0x31 },
    { L"Striker Portrait", 0x1f9d70, 0x1f9d90 },
    { L"Win Portrait", 0x1e6ff0, 0x1e7170, indexKOF99Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_D_PALETTES[] =
{
    { L"Main", 0x1db1f0, 0x1db210, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 1", 0x1db210, 0x1db230, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 2", 0x1db230, 0x1db250, indexKOF99Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x1db250, 0x1db270, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 3", 0x1db270, 0x1db290, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Mode Flash", 0x1db290, 0x1db2b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 1", 0x1db2b0, 0x1db2d0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 2", 0x1db2d0, 0x1db2f0, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Flash", 0x1db2f0, 0x1db310, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 1", 0x1db310, 0x1db330, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 2", 0x1db330, 0x1db350, indexKOF99Sprites_Joe, 0x00 },
    { L"Super Trail Palette", 0x1db350, 0x1db370, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 4", 0x1db370, 0x1db390, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 5", 0x1db390, 0x1db3b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Lifebar Portrait", 0x1db3b0, 0x1db3d0 },
    { L"Character Portrait", 0x1db3d0, 0x1db3f0, indexKOF99Sprites_Joe, 0x31 },
    { L"Striker Portrait", 0x1f9d90, 0x1f9db0 },
    { L"Win Portrait", 0x1e7170, 0x1e72f0, indexKOF99Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_AC_PALETTES[] =
{
    { L"Main", 0x2daff0, 0x2db010, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 1", 0x2db010, 0x2db030, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 2", 0x2db030, 0x2db050, indexKOF99Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x2db050, 0x2db070, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 3", 0x2db070, 0x2db090, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Mode Flash", 0x2db090, 0x2db0b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 1", 0x2db0b0, 0x2db0d0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 2", 0x2db0d0, 0x2db0f0, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Flash", 0x2db0f0, 0x2db110, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 1", 0x2db110, 0x2db130, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 2", 0x2db130, 0x2db150, indexKOF99Sprites_Joe, 0x00 },
    { L"Super Trail Palette", 0x2db150, 0x2db170, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 4", 0x2db170, 0x2db190, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 5", 0x2db190, 0x2db1b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Lifebar Portrait", 0x2db1b0, 0x2db1d0 },
    { L"Character Portrait", 0x2db1d0, 0x2db1f0, indexKOF99Sprites_Joe, 0x31 },
    { L"Striker Portrait", 0x2f9d70, 0x2f9d90 },
    { L"Win Portrait", 0x2e6ff0, 0x2e7170, indexKOF99Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_BD_PALETTES[] =
{
    { L"Main", 0x2db1f0, 0x2db210, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 1", 0x2db210, 0x2db230, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 2", 0x2db230, 0x2db250, indexKOF99Sprites_Joe, 0x00 },
    { L"Electric Palette", 0x2db250, 0x2db270, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 3", 0x2db270, 0x2db290, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Mode Flash", 0x2db290, 0x2db2b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 1", 0x2db2b0, 0x2db2d0, indexKOF99Sprites_Joe, 0x00 },
    { L"Counter Extra 2", 0x2db2d0, 0x2db2f0, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Flash", 0x2db2f0, 0x2db310, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 1", 0x2db310, 0x2db330, indexKOF99Sprites_Joe, 0x00 },
    { L"Armor Mode Extra 2", 0x2db330, 0x2db350, indexKOF99Sprites_Joe, 0x00 },
    { L"Super Trail Palette", 0x2db350, 0x2db370, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 4", 0x2db370, 0x2db390, indexKOF99Sprites_Joe, 0x00 },
    { L"Extra 5", 0x2db390, 0x2db3b0, indexKOF99Sprites_Joe, 0x00 },
    { L"Lifebar Portrait", 0x2db3b0, 0x2db3d0 },
    { L"Character Portrait", 0x2db3d0, 0x2db3f0, indexKOF99Sprites_Joe, 0x31 },
    { L"Striker Portrait", 0x2f9d90, 0x2f9db0 },
    { L"Win Portrait", 0x2e7170, 0x2e72f0, indexKOF99Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JOE_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e27f0, 0x2e2810 },
    { L"Effect 1", 0x2e2810, 0x2e2830 },
    { L"Effect 2", 0x2e2830, 0x2e2850 },
    { L"Effect 3", 0x2e2850, 0x2e2870 },
    { L"Effect 4", 0x2e2870, 0x2e2890 },
    { L"Effect 5", 0x2e2890, 0x2e28b0 },
    { L"Effect 6", 0x2e28b0, 0x2e28d0 },
    { L"Effect 7", 0x2e28d0, 0x2e28f0 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_C_PALETTES[] =
{
    { L"Main", 0x1db3f0, 0x1db410, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 1", 0x1db410, 0x1db430, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 2", 0x1db430, 0x1db450, indexKOF99Sprites_Mai, 0x00 },
    { L"Electric Palette", 0x1db450, 0x1db470, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 3", 0x1db470, 0x1db490, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Mode Flash", 0x1db490, 0x1db4b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 1", 0x1db4b0, 0x1db4d0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 2", 0x1db4d0, 0x1db4f0, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Flash", 0x1db4f0, 0x1db510, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 1", 0x1db510, 0x1db530, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 2", 0x1db530, 0x1db550, indexKOF99Sprites_Mai, 0x00 },
    { L"Super Trail Palette", 0x1db550, 0x1db570, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 4", 0x1db570, 0x1db590, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 5", 0x1db590, 0x1db5b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Lifebar Portrait", 0x1db5b0, 0x1db5d0 },
    { L"Character Portrait", 0x1db5d0, 0x1db5f0, indexKOF99Sprites_Mai, 0x31 },
    { L"Striker Portrait", 0x1f9db0, 0x1f9dd0 },
    { L"Win Portrait", 0x1e72f0, 0x1e7470, indexKOF99Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_D_PALETTES[] =
{
    { L"Main", 0x1db5f0, 0x1db610, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 1", 0x1db610, 0x1db630, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 2", 0x1db630, 0x1db650, indexKOF99Sprites_Mai, 0x00 },
    { L"Electric Palette", 0x1db650, 0x1db670, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 3", 0x1db670, 0x1db690, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Mode Flash", 0x1db690, 0x1db6b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 1", 0x1db6b0, 0x1db6d0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 2", 0x1db6d0, 0x1db6f0, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Flash", 0x1db6f0, 0x1db710, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 1", 0x1db710, 0x1db730, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 2", 0x1db730, 0x1db750, indexKOF99Sprites_Mai, 0x00 },
    { L"Super Trail Palette", 0x1db750, 0x1db770, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 4", 0x1db770, 0x1db790, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 5", 0x1db790, 0x1db7b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Lifebar Portrait", 0x1db7b0, 0x1db7d0 },
    { L"Character Portrait", 0x1db7d0, 0x1db7f0, indexKOF99Sprites_Mai, 0x31 },
    { L"Striker Portrait", 0x1f9dd0, 0x1f9df0 },
    { L"Win Portrait", 0x1e7470, 0x1e75f0, indexKOF99Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_AC_PALETTES[] =
{
    { L"Main", 0x2db3f0, 0x2db410, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 1", 0x2db410, 0x2db430, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 2", 0x2db430, 0x2db450, indexKOF99Sprites_Mai, 0x00 },
    { L"Electric Palette", 0x2db450, 0x2db470, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 3", 0x2db470, 0x2db490, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Mode Flash", 0x2db490, 0x2db4b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 1", 0x2db4b0, 0x2db4d0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 2", 0x2db4d0, 0x2db4f0, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Flash", 0x2db4f0, 0x2db510, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 1", 0x2db510, 0x2db530, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 2", 0x2db530, 0x2db550, indexKOF99Sprites_Mai, 0x00 },
    { L"Super Trail Palette", 0x2db550, 0x2db570, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 4", 0x2db570, 0x2db590, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 5", 0x2db590, 0x2db5b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Lifebar Portrait", 0x2db5b0, 0x2db5d0 },
    { L"Character Portrait", 0x2db5d0, 0x2db5f0, indexKOF99Sprites_Mai, 0x31 },
    { L"Striker Portrait", 0x2f9db0, 0x2f9dd0 },
    { L"Win Portrait", 0x2e72f0, 0x2e7470, indexKOF99Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_BD_PALETTES[] =
{
    { L"Main", 0x2db5f0, 0x2db610, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 1", 0x2db610, 0x2db630, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 2", 0x2db630, 0x2db650, indexKOF99Sprites_Mai, 0x00 },
    { L"Electric Palette", 0x2db650, 0x2db670, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 3", 0x2db670, 0x2db690, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Mode Flash", 0x2db690, 0x2db6b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 1", 0x2db6b0, 0x2db6d0, indexKOF99Sprites_Mai, 0x00 },
    { L"Counter Extra 2", 0x2db6d0, 0x2db6f0, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Flash", 0x2db6f0, 0x2db710, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 1", 0x2db710, 0x2db730, indexKOF99Sprites_Mai, 0x00 },
    { L"Armor Mode Extra 2", 0x2db730, 0x2db750, indexKOF99Sprites_Mai, 0x00 },
    { L"Super Trail Palette", 0x2db750, 0x2db770, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 4", 0x2db770, 0x2db790, indexKOF99Sprites_Mai, 0x00 },
    { L"Extra 5", 0x2db790, 0x2db7b0, indexKOF99Sprites_Mai, 0x00 },
    { L"Lifebar Portrait", 0x2db7b0, 0x2db7d0 },
    { L"Character Portrait", 0x2db7d0, 0x2db7f0, indexKOF99Sprites_Mai, 0x31 },
    { L"Striker Portrait", 0x2f9dd0, 0x2f9df0 },
    { L"Win Portrait", 0x2e7470, 0x2e75f0, indexKOF99Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_MAI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e29f0, 0x2e2a10 },
    { L"Effect 1", 0x2e2a10, 0x2e2a30 },
    { L"Effect 2", 0x2e2a30, 0x2e2a50 },
    { L"Effect 3", 0x2e2a50, 0x2e2a70 },
    { L"Effect 4", 0x2e2a70, 0x2e2a90 },
    { L"Effect 5", 0x2e2a90, 0x2e2ab0 },
    { L"Effect 6", 0x2e2ab0, 0x2e2ad0 },
    { L"Effect 7", 0x2e2ad0, 0x2e2af0 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_C_PALETTES[] =
{
    { L"Main", 0x1db7f0, 0x1db810, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x1db810, 0x1db830, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x1db830, 0x1db850, indexKOF99Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x1db850, 0x1db870, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x1db870, 0x1db890, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Mode Flash", 0x1db890, 0x1db8b0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 1", 0x1db8b0, 0x1db8d0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 2", 0x1db8d0, 0x1db8f0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Flash", 0x1db8f0, 0x1db910, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 1", 0x1db910, 0x1db930, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 2", 0x1db930, 0x1db950, indexKOF99Sprites_Ryo, 0x00 },
    { L"Super Trail Palette", 0x1db950, 0x1db970, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x1db970, 0x1db990, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 5", 0x1db990, 0x1db9b0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Lifebar Portrait", 0x1db9b0, 0x1db9d0 },
    { L"Character Portrait", 0x1db9d0, 0x1db9f0, indexKOF99Sprites_Ryo, 0x31 },
    { L"Striker Portrait", 0x1f9df0, 0x1f9e10 },
    { L"Win Portrait", 0x1e75f0, 0x1e7770, indexKOF99Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_D_PALETTES[] =
{
    { L"Main", 0x1db9f0, 0x1dba10, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x1dba10, 0x1dba30, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x1dba30, 0x1dba50, indexKOF99Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x1dba50, 0x1dba70, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x1dba70, 0x1dba90, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Mode Flash", 0x1dba90, 0x1dbab0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 1", 0x1dbab0, 0x1dbad0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 2", 0x1dbad0, 0x1dbaf0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Flash", 0x1dbaf0, 0x1dbb10, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 1", 0x1dbb10, 0x1dbb30, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 2", 0x1dbb30, 0x1dbb50, indexKOF99Sprites_Ryo, 0x00 },
    { L"Super Trail Palette", 0x1dbb50, 0x1dbb70, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x1dbb70, 0x1dbb90, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 5", 0x1dbb90, 0x1dbbb0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Lifebar Portrait", 0x1dbbb0, 0x1dbbd0 },
    { L"Character Portrait", 0x1dbbd0, 0x1dbbf0, indexKOF99Sprites_Ryo, 0x31 },
    { L"Striker Portrait", 0x1f9e10, 0x1f9e30 },
    { L"Win Portrait", 0x1e7770, 0x1e78f0, indexKOF99Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_AC_PALETTES[] =
{
    { L"Main", 0x2db7f0, 0x2db810, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x2db810, 0x2db830, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x2db830, 0x2db850, indexKOF99Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x2db850, 0x2db870, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x2db870, 0x2db890, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Mode Flash", 0x2db890, 0x2db8b0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 1", 0x2db8b0, 0x2db8d0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 2", 0x2db8d0, 0x2db8f0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Flash", 0x2db8f0, 0x2db910, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 1", 0x2db910, 0x2db930, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 2", 0x2db930, 0x2db950, indexKOF99Sprites_Ryo, 0x00 },
    { L"Super Trail Palette", 0x2db950, 0x2db970, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x2db970, 0x2db990, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 5", 0x2db990, 0x2db9b0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Lifebar Portrait", 0x2db9b0, 0x2db9d0 },
    { L"Character Portrait", 0x2db9d0, 0x2db9f0, indexKOF99Sprites_Ryo, 0x31 },
    { L"Striker Portrait", 0x2f9df0, 0x2f9e10 },
    { L"Win Portrait", 0x2e75f0, 0x2e7770, indexKOF99Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_BD_PALETTES[] =
{
    { L"Main", 0x2db9f0, 0x2dba10, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 1", 0x2dba10, 0x2dba30, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 2", 0x2dba30, 0x2dba50, indexKOF99Sprites_Ryo, 0x00 },
    { L"Electric Palette", 0x2dba50, 0x2dba70, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 3", 0x2dba70, 0x2dba90, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Mode Flash", 0x2dba90, 0x2dbab0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 1", 0x2dbab0, 0x2dbad0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Counter Extra 2", 0x2dbad0, 0x2dbaf0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Flash", 0x2dbaf0, 0x2dbb10, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 1", 0x2dbb10, 0x2dbb30, indexKOF99Sprites_Ryo, 0x00 },
    { L"Armor Mode Extra 2", 0x2dbb30, 0x2dbb50, indexKOF99Sprites_Ryo, 0x00 },
    { L"Super Trail Palette", 0x2dbb50, 0x2dbb70, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 4", 0x2dbb70, 0x2dbb90, indexKOF99Sprites_Ryo, 0x00 },
    { L"Extra 5", 0x2dbb90, 0x2dbbb0, indexKOF99Sprites_Ryo, 0x00 },
    { L"Lifebar Portrait", 0x2dbbb0, 0x2dbbd0 },
    { L"Character Portrait", 0x2dbbd0, 0x2dbbf0, indexKOF99Sprites_Ryo, 0x31 },
    { L"Striker Portrait", 0x2f9e10, 0x2f9e30 },
    { L"Win Portrait", 0x2e7770, 0x2e78f0, indexKOF99Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RYO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e2bf0, 0x2e2c10 },
    { L"Effect 1", 0x2e2c10, 0x2e2c30 },
    { L"Effect 2", 0x2e2c30, 0x2e2c50 },
    { L"Effect 3", 0x2e2c50, 0x2e2c70 },
    { L"Effect 4", 0x2e2c70, 0x2e2c90 },
    { L"Effect 5", 0x2e2c90, 0x2e2cb0 },
    { L"Effect 6", 0x2e2cb0, 0x2e2cd0 },
    { L"Effect 7", 0x2e2cd0, 0x2e2cf0 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_C_PALETTES[] =
{
    { L"Main", 0x1dbbf0, 0x1dbc10, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 1", 0x1dbc10, 0x1dbc30, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 2", 0x1dbc30, 0x1dbc50, indexKOF99Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x1dbc50, 0x1dbc70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 3", 0x1dbc70, 0x1dbc90, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Mode Flash", 0x1dbc90, 0x1dbcb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 1", 0x1dbcb0, 0x1dbcd0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 2", 0x1dbcd0, 0x1dbcf0, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Flash", 0x1dbcf0, 0x1dbd10, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 1", 0x1dbd10, 0x1dbd30, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 2", 0x1dbd30, 0x1dbd50, indexKOF99Sprites_Robert, 0x00 },
    { L"Super Trail Palette", 0x1dbd50, 0x1dbd70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 4", 0x1dbd70, 0x1dbd90, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 5", 0x1dbd90, 0x1dbdb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Lifebar Portrait", 0x1dbdb0, 0x1dbdd0 },
    { L"Character Portrait", 0x1dbdd0, 0x1dbdf0, indexKOF99Sprites_Robert, 0x31 },
    { L"Striker Portrait", 0x1f9e30, 0x1f9e50 },
    { L"Win Portrait", 0x1e78f0, 0x1e7a70, indexKOF99Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_D_PALETTES[] =
{
    { L"Main", 0x1dbdf0, 0x1dbe10, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 1", 0x1dbe10, 0x1dbe30, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 2", 0x1dbe30, 0x1dbe50, indexKOF99Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x1dbe50, 0x1dbe70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 3", 0x1dbe70, 0x1dbe90, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Mode Flash", 0x1dbe90, 0x1dbeb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 1", 0x1dbeb0, 0x1dbed0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 2", 0x1dbed0, 0x1dbef0, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Flash", 0x1dbef0, 0x1dbf10, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 1", 0x1dbf10, 0x1dbf30, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 2", 0x1dbf30, 0x1dbf50, indexKOF99Sprites_Robert, 0x00 },
    { L"Super Trail Palette", 0x1dbf50, 0x1dbf70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 4", 0x1dbf70, 0x1dbf90, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 5", 0x1dbf90, 0x1dbfb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Lifebar Portrait", 0x1dbfb0, 0x1dbfd0 },
    { L"Character Portrait", 0x1dbfd0, 0x1dbff0, indexKOF99Sprites_Robert, 0x31 },
    { L"Striker Portrait", 0x1f9e50, 0x1f9e70 },
    { L"Win Portrait", 0x1e7a70, 0x1e7bf0, indexKOF99Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_AC_PALETTES[] =
{
    { L"Main", 0x2dbbf0, 0x2dbc10, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 1", 0x2dbc10, 0x2dbc30, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 2", 0x2dbc30, 0x2dbc50, indexKOF99Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x2dbc50, 0x2dbc70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 3", 0x2dbc70, 0x2dbc90, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Mode Flash", 0x2dbc90, 0x2dbcb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 1", 0x2dbcb0, 0x2dbcd0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 2", 0x2dbcd0, 0x2dbcf0, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Flash", 0x2dbcf0, 0x2dbd10, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 1", 0x2dbd10, 0x2dbd30, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 2", 0x2dbd30, 0x2dbd50, indexKOF99Sprites_Robert, 0x00 },
    { L"Super Trail Palette", 0x2dbd50, 0x2dbd70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 4", 0x2dbd70, 0x2dbd90, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 5", 0x2dbd90, 0x2dbdb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Lifebar Portrait", 0x2dbdb0, 0x2dbdd0 },
    { L"Character Portrait", 0x2dbdd0, 0x2dbdf0, indexKOF99Sprites_Robert, 0x31 },
    { L"Striker Portrait", 0x2f9e30, 0x2f9e50 },
    { L"Win Portrait", 0x2e78f0, 0x2e7a70, indexKOF99Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_BD_PALETTES[] =
{
    { L"Main", 0x2dbdf0, 0x2dbe10, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 1", 0x2dbe10, 0x2dbe30, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 2", 0x2dbe30, 0x2dbe50, indexKOF99Sprites_Robert, 0x00 },
    { L"Electric Palette", 0x2dbe50, 0x2dbe70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 3", 0x2dbe70, 0x2dbe90, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Mode Flash", 0x2dbe90, 0x2dbeb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 1", 0x2dbeb0, 0x2dbed0, indexKOF99Sprites_Robert, 0x00 },
    { L"Counter Extra 2", 0x2dbed0, 0x2dbef0, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Flash", 0x2dbef0, 0x2dbf10, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 1", 0x2dbf10, 0x2dbf30, indexKOF99Sprites_Robert, 0x00 },
    { L"Armor Mode Extra 2", 0x2dbf30, 0x2dbf50, indexKOF99Sprites_Robert, 0x00 },
    { L"Super Trail Palette", 0x2dbf50, 0x2dbf70, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 4", 0x2dbf70, 0x2dbf90, indexKOF99Sprites_Robert, 0x00 },
    { L"Extra 5", 0x2dbf90, 0x2dbfb0, indexKOF99Sprites_Robert, 0x00 },
    { L"Lifebar Portrait", 0x2dbfb0, 0x2dbfd0 },
    { L"Character Portrait", 0x2dbfd0, 0x2dbff0, indexKOF99Sprites_Robert, 0x31 },
    { L"Striker Portrait", 0x2f9e50, 0x2f9e70 },
    { L"Win Portrait", 0x2e7a70, 0x2e7bf0, indexKOF99Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ROBERT_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e2df0, 0x2e2e10 },
    { L"Effect 1", 0x2e2e10, 0x2e2e30 },
    { L"Effect 2", 0x2e2e30, 0x2e2e50 },
    { L"Effect 3", 0x2e2e50, 0x2e2e70 },
    { L"Effect 4", 0x2e2e70, 0x2e2e90 },
    { L"Effect 5", 0x2e2e90, 0x2e2eb0 },
    { L"Effect 6", 0x2e2eb0, 0x2e2ed0 },
    { L"Effect 7", 0x2e2ed0, 0x2e2ef0 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_C_PALETTES[] =
{
    { L"Main", 0x1dbff0, 0x1dc010, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x1dc010, 0x1dc030, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x1dc030, 0x1dc050, indexKOF99Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x1dc050, 0x1dc070, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x1dc070, 0x1dc090, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Mode Flash", 0x1dc090, 0x1dc0b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 1", 0x1dc0b0, 0x1dc0d0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 2", 0x1dc0d0, 0x1dc0f0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Flash", 0x1dc0f0, 0x1dc110, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 1", 0x1dc110, 0x1dc130, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 2", 0x1dc130, 0x1dc150, indexKOF99Sprites_Yuri, 0x00 },
    { L"Super Trail Palette", 0x1dc150, 0x1dc170, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x1dc170, 0x1dc190, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 5", 0x1dc190, 0x1dc1b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Lifebar Portrait", 0x1dc1b0, 0x1dc1d0 },
    { L"Character Portrait", 0x1dc1d0, 0x1dc1f0, indexKOF99Sprites_Yuri, 0x31 },
    { L"Striker Portrait", 0x1f9e70, 0x1f9e90 },
    { L"Win Portrait", 0x1e7bf0, 0x1e7d70, indexKOF99Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_D_PALETTES[] =
{
    { L"Main", 0x1dc1f0, 0x1dc210, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x1dc210, 0x1dc230, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x1dc230, 0x1dc250, indexKOF99Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x1dc250, 0x1dc270, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x1dc270, 0x1dc290, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Mode Flash", 0x1dc290, 0x1dc2b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 1", 0x1dc2b0, 0x1dc2d0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 2", 0x1dc2d0, 0x1dc2f0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Flash", 0x1dc2f0, 0x1dc310, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 1", 0x1dc310, 0x1dc330, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 2", 0x1dc330, 0x1dc350, indexKOF99Sprites_Yuri, 0x00 },
    { L"Super Trail Palette", 0x1dc350, 0x1dc370, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x1dc370, 0x1dc390, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 5", 0x1dc390, 0x1dc3b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Lifebar Portrait", 0x1dc3b0, 0x1dc3d0 },
    { L"Character Portrait", 0x1dc3d0, 0x1dc3f0, indexKOF99Sprites_Yuri, 0x31 },
    { L"Striker Portrait", 0x1f9e90, 0x1f9eb0 },
    { L"Win Portrait", 0x1e7d70, 0x1e7ef0, indexKOF99Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_AC_PALETTES[] =
{
    { L"Main", 0x2dbff0, 0x2dc010, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x2dc010, 0x2dc030, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x2dc030, 0x2dc050, indexKOF99Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x2dc050, 0x2dc070, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x2dc070, 0x2dc090, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Mode Flash", 0x2dc090, 0x2dc0b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 1", 0x2dc0b0, 0x2dc0d0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 2", 0x2dc0d0, 0x2dc0f0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Flash", 0x2dc0f0, 0x2dc110, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc110, 0x2dc130, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc130, 0x2dc150, indexKOF99Sprites_Yuri, 0x00 },
    { L"Super Trail Palette", 0x2dc150, 0x2dc170, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x2dc170, 0x2dc190, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 5", 0x2dc190, 0x2dc1b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Lifebar Portrait", 0x2dc1b0, 0x2dc1d0 },
    { L"Character Portrait", 0x2dc1d0, 0x2dc1f0, indexKOF99Sprites_Yuri, 0x31 },
    { L"Striker Portrait", 0x2f9e70, 0x2f9e90 },
    { L"Win Portrait", 0x2e7bf0, 0x2e7d70, indexKOF99Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_BD_PALETTES[] =
{
    { L"Main", 0x2dc1f0, 0x2dc210, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 1", 0x2dc210, 0x2dc230, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 2", 0x2dc230, 0x2dc250, indexKOF99Sprites_Yuri, 0x00 },
    { L"Electric Palette", 0x2dc250, 0x2dc270, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 3", 0x2dc270, 0x2dc290, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Mode Flash", 0x2dc290, 0x2dc2b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 1", 0x2dc2b0, 0x2dc2d0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Counter Extra 2", 0x2dc2d0, 0x2dc2f0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Flash", 0x2dc2f0, 0x2dc310, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc310, 0x2dc330, indexKOF99Sprites_Yuri, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc330, 0x2dc350, indexKOF99Sprites_Yuri, 0x00 },
    { L"Super Trail Palette", 0x2dc350, 0x2dc370, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 4", 0x2dc370, 0x2dc390, indexKOF99Sprites_Yuri, 0x00 },
    { L"Extra 5", 0x2dc390, 0x2dc3b0, indexKOF99Sprites_Yuri, 0x00 },
    { L"Lifebar Portrait", 0x2dc3b0, 0x2dc3d0 },
    { L"Character Portrait", 0x2dc3d0, 0x2dc3f0, indexKOF99Sprites_Yuri, 0x31 },
    { L"Striker Portrait", 0x2f9e90, 0x2f9eb0 },
    { L"Win Portrait", 0x2e7d70, 0x2e7ef0, indexKOF99Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_YURI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e2ff0, 0x2e3010 },
    { L"Effect 1", 0x2e3010, 0x2e3030 },
    { L"Effect 2", 0x2e3030, 0x2e3050 },
    { L"Effect 3", 0x2e3050, 0x2e3070 },
    { L"Effect 4", 0x2e3070, 0x2e3090 },
    { L"Effect 5", 0x2e3090, 0x2e30b0 },
    { L"Effect 6", 0x2e30b0, 0x2e30d0 },
    { L"Effect 7", 0x2e30d0, 0x2e30f0 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_C_PALETTES[] =
{
    { L"Main", 0x1dc3f0, 0x1dc410, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x1dc410, 0x1dc430, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x1dc430, 0x1dc450, indexKOF99Sprites_Takuma, 0x00 },
    { L"Electric Palette", 0x1dc450, 0x1dc470, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x1dc470, 0x1dc490, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Mode Flash", 0x1dc490, 0x1dc4b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 1", 0x1dc4b0, 0x1dc4d0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 2", 0x1dc4d0, 0x1dc4f0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Flash", 0x1dc4f0, 0x1dc510, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 1", 0x1dc510, 0x1dc530, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 2", 0x1dc530, 0x1dc550, indexKOF99Sprites_Takuma, 0x00 },
    { L"Super Trail Palette", 0x1dc550, 0x1dc570, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x1dc570, 0x1dc590, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 5", 0x1dc590, 0x1dc5b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Lifebar Portrait", 0x1dc5b0, 0x1dc5d0 },
    { L"Character Portrait", 0x1dc5d0, 0x1dc5f0, indexKOF99Sprites_Takuma, 0x31 },
    { L"Striker Portrait", 0x1f9eb0, 0x1f9ed0 },
    { L"Win Portrait", 0x1e7ef0, 0x1e8070, indexKOF99Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_D_PALETTES[] =
{
    { L"Main", 0x1dc5f0, 0x1dc610, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x1dc610, 0x1dc630, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x1dc630, 0x1dc650, indexKOF99Sprites_Takuma, 0x00 },
    { L"Electric Palette", 0x1dc650, 0x1dc670, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x1dc670, 0x1dc690, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Mode Flash", 0x1dc690, 0x1dc6b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 1", 0x1dc6b0, 0x1dc6d0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 2", 0x1dc6d0, 0x1dc6f0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Flash", 0x1dc6f0, 0x1dc710, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 1", 0x1dc710, 0x1dc730, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 2", 0x1dc730, 0x1dc750, indexKOF99Sprites_Takuma, 0x00 },
    { L"Super Trail Palette", 0x1dc750, 0x1dc770, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x1dc770, 0x1dc790, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 5", 0x1dc790, 0x1dc7b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Lifebar Portrait", 0x1dc7b0, 0x1dc7d0 },
    { L"Character Portrait", 0x1dc7d0, 0x1dc7f0, indexKOF99Sprites_Takuma, 0x31 },
    { L"Striker Portrait", 0x1f9ed0, 0x1f9ef0 },
    { L"Win Portrait", 0x1e8070, 0x1e81f0, indexKOF99Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_AC_PALETTES[] =
{
    { L"Main", 0x2dc3f0, 0x2dc410, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x2dc410, 0x2dc430, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x2dc430, 0x2dc450, indexKOF99Sprites_Takuma, 0x00 },
    { L"Electric Palette", 0x2dc450, 0x2dc470, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x2dc470, 0x2dc490, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Mode Flash", 0x2dc490, 0x2dc4b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 1", 0x2dc4b0, 0x2dc4d0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 2", 0x2dc4d0, 0x2dc4f0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Flash", 0x2dc4f0, 0x2dc510, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc510, 0x2dc530, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc530, 0x2dc550, indexKOF99Sprites_Takuma, 0x00 },
    { L"Super Trail Palette", 0x2dc550, 0x2dc570, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x2dc570, 0x2dc590, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 5", 0x2dc590, 0x2dc5b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Lifebar Portrait", 0x2dc5b0, 0x2dc5d0 },
    { L"Character Portrait", 0x2dc5d0, 0x2dc5f0, indexKOF99Sprites_Takuma, 0x31 },
    { L"Striker Portrait", 0x2f9eb0, 0x2f9ed0 },
    { L"Win Portrait", 0x2e7ef0, 0x2e8070, indexKOF99Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_BD_PALETTES[] =
{
    { L"Main", 0x2dc5f0, 0x2dc610, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 1", 0x2dc610, 0x2dc630, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 2", 0x2dc630, 0x2dc650, indexKOF99Sprites_Takuma, 0x00 },
    { L"Electric Palette", 0x2dc650, 0x2dc670, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 3", 0x2dc670, 0x2dc690, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Mode Flash", 0x2dc690, 0x2dc6b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 1", 0x2dc6b0, 0x2dc6d0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Counter Extra 2", 0x2dc6d0, 0x2dc6f0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Flash", 0x2dc6f0, 0x2dc710, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc710, 0x2dc730, indexKOF99Sprites_Takuma, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc730, 0x2dc750, indexKOF99Sprites_Takuma, 0x00 },
    { L"Super Trail Palette", 0x2dc750, 0x2dc770, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 4", 0x2dc770, 0x2dc790, indexKOF99Sprites_Takuma, 0x00 },
    { L"Extra 5", 0x2dc790, 0x2dc7b0, indexKOF99Sprites_Takuma, 0x00 },
    { L"Lifebar Portrait", 0x2dc7b0, 0x2dc7d0 },
    { L"Character Portrait", 0x2dc7d0, 0x2dc7f0, indexKOF99Sprites_Takuma, 0x31 },
    { L"Striker Portrait", 0x2f9ed0, 0x2f9ef0 },
    { L"Win Portrait", 0x2e8070, 0x2e81f0, indexKOF99Sprites_Takuma, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_TAKUMA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e31f0, 0x2e3210 },
    { L"Effect 1", 0x2e3210, 0x2e3230 },
    { L"Effect 2", 0x2e3230, 0x2e3250 },
    { L"Effect 3", 0x2e3250, 0x2e3270 },
    { L"Effect 4", 0x2e3270, 0x2e3290 },
    { L"Effect 5", 0x2e3290, 0x2e32b0 },
    { L"Effect 6", 0x2e32b0, 0x2e32d0 },
    { L"Effect 7", 0x2e32d0, 0x2e32f0 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_C_PALETTES[] =
{
    { L"Main", 0x1dc7f0, 0x1dc810, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 1", 0x1dc810, 0x1dc830, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 2", 0x1dc830, 0x1dc850, indexKOF99Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x1dc850, 0x1dc870, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 3", 0x1dc870, 0x1dc890, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Mode Flash", 0x1dc890, 0x1dc8b0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 1", 0x1dc8b0, 0x1dc8d0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 2", 0x1dc8d0, 0x1dc8f0, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Flash", 0x1dc8f0, 0x1dc910, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 1", 0x1dc910, 0x1dc930, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 2", 0x1dc930, 0x1dc950, indexKOF99Sprites_Leona, 0x00 },
    { L"Super Trail Palette", 0x1dc950, 0x1dc970, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 4", 0x1dc970, 0x1dc990, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 5", 0x1dc990, 0x1dc9b0, indexKOF99Sprites_Leona, 0x00 },
    { L"Lifebar Portrait", 0x1dc9b0, 0x1dc9d0 },
    { L"Character Portrait", 0x1dc9d0, 0x1dc9f0, indexKOF99Sprites_Leona, 0x31 },
    { L"Striker Portrait", 0x1f9ef0, 0x1f9f10 },
    { L"Win Portrait", 0x1e81f0, 0x1e8370, indexKOF99Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_D_PALETTES[] =
{
    { L"Main", 0x1dc9f0, 0x1dca10, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 1", 0x1dca10, 0x1dca30, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 2", 0x1dca30, 0x1dca50, indexKOF99Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x1dca50, 0x1dca70, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 3", 0x1dca70, 0x1dca90, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Mode Flash", 0x1dca90, 0x1dcab0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 1", 0x1dcab0, 0x1dcad0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 2", 0x1dcad0, 0x1dcaf0, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Flash", 0x1dcaf0, 0x1dcb10, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 1", 0x1dcb10, 0x1dcb30, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 2", 0x1dcb30, 0x1dcb50, indexKOF99Sprites_Leona, 0x00 },
    { L"Super Trail Palette", 0x1dcb50, 0x1dcb70, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 4", 0x1dcb70, 0x1dcb90, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 5", 0x1dcb90, 0x1dcbb0, indexKOF99Sprites_Leona, 0x00 },
    { L"Lifebar Portrait", 0x1dcbb0, 0x1dcbd0 },
    { L"Character Portrait", 0x1dcbd0, 0x1dcbf0, indexKOF99Sprites_Leona, 0x31 },
    { L"Striker Portrait", 0x1f9f10, 0x1f9f30 },
    { L"Win Portrait", 0x1e8370, 0x1e84f0, indexKOF99Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_AC_PALETTES[] =
{
    { L"Main", 0x2dc7f0, 0x2dc810, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 1", 0x2dc810, 0x2dc830, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 2", 0x2dc830, 0x2dc850, indexKOF99Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x2dc850, 0x2dc870, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 3", 0x2dc870, 0x2dc890, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Mode Flash", 0x2dc890, 0x2dc8b0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 1", 0x2dc8b0, 0x2dc8d0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 2", 0x2dc8d0, 0x2dc8f0, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Flash", 0x2dc8f0, 0x2dc910, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 1", 0x2dc910, 0x2dc930, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 2", 0x2dc930, 0x2dc950, indexKOF99Sprites_Leona, 0x00 },
    { L"Super Trail Palette", 0x2dc950, 0x2dc970, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 4", 0x2dc970, 0x2dc990, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 5", 0x2dc990, 0x2dc9b0, indexKOF99Sprites_Leona, 0x00 },
    { L"Lifebar Portrait", 0x2dc9b0, 0x2dc9d0 },
    { L"Character Portrait", 0x2dc9d0, 0x2dc9f0, indexKOF99Sprites_Leona, 0x31 },
    { L"Striker Portrait", 0x2f9ef0, 0x2f9f10 },
    { L"Win Portrait", 0x2e81f0, 0x2e8370, indexKOF99Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_BD_PALETTES[] =
{
    { L"Main", 0x2dc9f0, 0x2dca10, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 1", 0x2dca10, 0x2dca30, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 2", 0x2dca30, 0x2dca50, indexKOF99Sprites_Leona, 0x00 },
    { L"Electric Palette", 0x2dca50, 0x2dca70, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 3", 0x2dca70, 0x2dca90, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Mode Flash", 0x2dca90, 0x2dcab0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 1", 0x2dcab0, 0x2dcad0, indexKOF99Sprites_Leona, 0x00 },
    { L"Counter Extra 2", 0x2dcad0, 0x2dcaf0, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Flash", 0x2dcaf0, 0x2dcb10, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 1", 0x2dcb10, 0x2dcb30, indexKOF99Sprites_Leona, 0x00 },
    { L"Armor Mode Extra 2", 0x2dcb30, 0x2dcb50, indexKOF99Sprites_Leona, 0x00 },
    { L"Super Trail Palette", 0x2dcb50, 0x2dcb70, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 4", 0x2dcb70, 0x2dcb90, indexKOF99Sprites_Leona, 0x00 },
    { L"Extra 5", 0x2dcb90, 0x2dcbb0, indexKOF99Sprites_Leona, 0x00 },
    { L"Lifebar Portrait", 0x2dcbb0, 0x2dcbd0 },
    { L"Character Portrait", 0x2dcbd0, 0x2dcbf0, indexKOF99Sprites_Leona, 0x31 },
    { L"Striker Portrait", 0x2f9f10, 0x2f9f30 },
    { L"Win Portrait", 0x2e8370, 0x2e84f0, indexKOF99Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_LEONA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e33f0, 0x2e3410 },
    { L"Effect 1", 0x2e3410, 0x2e3430 },
    { L"Effect 2", 0x2e3430, 0x2e3450 },
    { L"Effect 3", 0x2e3450, 0x2e3470 },
    { L"Effect 4", 0x2e3470, 0x2e3490 },
    { L"Effect 5", 0x2e3490, 0x2e34b0 },
    { L"Effect 6", 0x2e34b0, 0x2e34d0 },
    { L"Effect 7", 0x2e34d0, 0x2e34f0 },
};

const sGame_PaletteDataset KOF99AE_A_RALF_C_PALETTES[] =
{
    { L"Main", 0x1dcbf0, 0x1dcc10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 1", 0x1dcc10, 0x1dcc30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 2", 0x1dcc30, 0x1dcc50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Electric Palette", 0x1dcc50, 0x1dcc70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 3", 0x1dcc70, 0x1dcc90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Mode Flash", 0x1dcc90, 0x1dccb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 1", 0x1dccb0, 0x1dccd0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 2", 0x1dccd0, 0x1dccf0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Flash", 0x1dccf0, 0x1dcd10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 1", 0x1dcd10, 0x1dcd30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 2", 0x1dcd30, 0x1dcd50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Super Trail Palette", 0x1dcd50, 0x1dcd70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 4", 0x1dcd70, 0x1dcd90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 5", 0x1dcd90, 0x1dcdb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Lifebar Portrait", 0x1dcdb0, 0x1dcdd0 },
    { L"Character Portrait", 0x1dcdd0, 0x1dcdf0, indexKOF99Sprites_Ralf, 0x31 },
    { L"Striker Portrait", 0x1f9f30, 0x1f9f50 },
    { L"Win Portrait", 0x1e84f0, 0x1e8670, indexKOF99Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RALF_D_PALETTES[] =
{
    { L"Main", 0x1dcdf0, 0x1dce10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 1", 0x1dce10, 0x1dce30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 2", 0x1dce30, 0x1dce50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Electric Palette", 0x1dce50, 0x1dce70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 3", 0x1dce70, 0x1dce90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Mode Flash", 0x1dce90, 0x1dceb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 1", 0x1dceb0, 0x1dced0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 2", 0x1dced0, 0x1dcef0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Flash", 0x1dcef0, 0x1dcf10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 1", 0x1dcf10, 0x1dcf30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 2", 0x1dcf30, 0x1dcf50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Super Trail Palette", 0x1dcf50, 0x1dcf70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 4", 0x1dcf70, 0x1dcf90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 5", 0x1dcf90, 0x1dcfb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Lifebar Portrait", 0x1dcfb0, 0x1dcfd0 },
    { L"Character Portrait", 0x1dcfd0, 0x1dcff0, indexKOF99Sprites_Ralf, 0x31 },
    { L"Striker Portrait", 0x1f9f50, 0x1f9f70 },
    { L"Win Portrait", 0x1e8670, 0x1e87f0, indexKOF99Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RALF_AC_PALETTES[] =
{
    { L"Main", 0x2dcbf0, 0x2dcc10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 1", 0x2dcc10, 0x2dcc30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 2", 0x2dcc30, 0x2dcc50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Electric Palette", 0x2dcc50, 0x2dcc70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 3", 0x2dcc70, 0x2dcc90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Mode Flash", 0x2dcc90, 0x2dccb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 1", 0x2dccb0, 0x2dccd0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 2", 0x2dccd0, 0x2dccf0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Flash", 0x2dccf0, 0x2dcd10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 1", 0x2dcd10, 0x2dcd30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 2", 0x2dcd30, 0x2dcd50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Super Trail Palette", 0x2dcd50, 0x2dcd70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 4", 0x2dcd70, 0x2dcd90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 5", 0x2dcd90, 0x2dcdb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Lifebar Portrait", 0x2dcdb0, 0x2dcdd0 },
    { L"Character Portrait", 0x2dcdd0, 0x2dcdf0, indexKOF99Sprites_Ralf, 0x31 },
    { L"Striker Portrait", 0x2f9f30, 0x2f9f50 },
    { L"Win Portrait", 0x2e84f0, 0x2e8670, indexKOF99Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_RALF_BD_PALETTES[] =
{
    { L"Main", 0x2dcdf0, 0x2dce10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 1", 0x2dce10, 0x2dce30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 2", 0x2dce30, 0x2dce50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Electric Palette", 0x2dce50, 0x2dce70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 3", 0x2dce70, 0x2dce90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Mode Flash", 0x2dce90, 0x2dceb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 1", 0x2dceb0, 0x2dced0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Counter Extra 2", 0x2dced0, 0x2dcef0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Flash", 0x2dcef0, 0x2dcf10, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 1", 0x2dcf10, 0x2dcf30, indexKOF99Sprites_Ralf, 0x00 },
    { L"Armor Mode Extra 2", 0x2dcf30, 0x2dcf50, indexKOF99Sprites_Ralf, 0x00 },
    { L"Super Trail Palette", 0x2dcf50, 0x2dcf70, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 4", 0x2dcf70, 0x2dcf90, indexKOF99Sprites_Ralf, 0x00 },
    { L"Extra 5", 0x2dcf90, 0x2dcfb0, indexKOF99Sprites_Ralf, 0x00 },
    { L"Lifebar Portrait", 0x2dcfb0, 0x2dcfd0 },
    { L"Character Portrait", 0x2dcfd0, 0x2dcff0, indexKOF99Sprites_Ralf, 0x31 },
    { L"Striker Portrait", 0x2f9f50, 0x2f9f70 },
    { L"Win Portrait", 0x2e8670, 0x2e87f0, indexKOF99Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CLARK_C_PALETTES[] =
{
    { L"Main", 0x1dcff0, 0x1dd010, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 1", 0x1dd010, 0x1dd030, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 2", 0x1dd030, 0x1dd050, indexKOF99Sprites_Clark, 0x00 },
    { L"Electric Palette", 0x1dd050, 0x1dd070, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 3", 0x1dd070, 0x1dd090, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Mode Flash", 0x1dd090, 0x1dd0b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 1", 0x1dd0b0, 0x1dd0d0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 2", 0x1dd0d0, 0x1dd0f0, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Flash", 0x1dd0f0, 0x1dd110, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 1", 0x1dd110, 0x1dd130, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 2", 0x1dd130, 0x1dd150, indexKOF99Sprites_Clark, 0x00 },
    { L"Super Trail Palette", 0x1dd150, 0x1dd170, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 4", 0x1dd170, 0x1dd190, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 5", 0x1dd190, 0x1dd1b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Lifebar Portrait", 0x1dd1b0, 0x1dd1d0 },
    { L"Character Portrait", 0x1dd1d0, 0x1dd1f0, indexKOF99Sprites_Clark, 0x31 },
    { L"Striker Portrait", 0x1f9f70, 0x1f9f90 },
    { L"Win Portrait", 0x1e87f0, 0x1e8970, indexKOF99Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CLARK_D_PALETTES[] =
{
    { L"Main", 0x1dd1f0, 0x1dd210, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 1", 0x1dd210, 0x1dd230, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 2", 0x1dd230, 0x1dd250, indexKOF99Sprites_Clark, 0x00 },
    { L"Electric Palette", 0x1dd250, 0x1dd270, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 3", 0x1dd270, 0x1dd290, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Mode Flash", 0x1dd290, 0x1dd2b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 1", 0x1dd2b0, 0x1dd2d0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 2", 0x1dd2d0, 0x1dd2f0, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Flash", 0x1dd2f0, 0x1dd310, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 1", 0x1dd310, 0x1dd330, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 2", 0x1dd330, 0x1dd350, indexKOF99Sprites_Clark, 0x00 },
    { L"Super Trail Palette", 0x1dd350, 0x1dd370, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 4", 0x1dd370, 0x1dd390, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 5", 0x1dd390, 0x1dd3b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Lifebar Portrait", 0x1dd3b0, 0x1dd3d0 },
    { L"Character Portrait", 0x1dd3d0, 0x1dd3f0, indexKOF99Sprites_Clark, 0x31 },
    { L"Striker Portrait", 0x1f9f90, 0x1f9fb0 },
    { L"Win Portrait", 0x1e8970, 0x1e8af0, indexKOF99Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CLARK_AC_PALETTES[] =
{
    { L"Main", 0x2dcff0, 0x2dd010, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 1", 0x2dd010, 0x2dd030, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 2", 0x2dd030, 0x2dd050, indexKOF99Sprites_Clark, 0x00 },
    { L"Electric Palette", 0x2dd050, 0x2dd070, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 3", 0x2dd070, 0x2dd090, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Mode Flash", 0x2dd090, 0x2dd0b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 1", 0x2dd0b0, 0x2dd0d0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 2", 0x2dd0d0, 0x2dd0f0, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Flash", 0x2dd0f0, 0x2dd110, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd110, 0x2dd130, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd130, 0x2dd150, indexKOF99Sprites_Clark, 0x00 },
    { L"Super Trail Palette", 0x2dd150, 0x2dd170, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 4", 0x2dd170, 0x2dd190, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 5", 0x2dd190, 0x2dd1b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Lifebar Portrait", 0x2dd1b0, 0x2dd1d0 },
    { L"Character Portrait", 0x2dd1d0, 0x2dd1f0, indexKOF99Sprites_Clark, 0x31 },
    { L"Striker Portrait", 0x2f9f70, 0x2f9f90 },
    { L"Win Portrait", 0x2e87f0, 0x2e8970, indexKOF99Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CLARK_BD_PALETTES[] =
{
    { L"Main", 0x2dd1f0, 0x2dd210, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 1", 0x2dd210, 0x2dd230, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 2", 0x2dd230, 0x2dd250, indexKOF99Sprites_Clark, 0x00 },
    { L"Electric Palette", 0x2dd250, 0x2dd270, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 3", 0x2dd270, 0x2dd290, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Mode Flash", 0x2dd290, 0x2dd2b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 1", 0x2dd2b0, 0x2dd2d0, indexKOF99Sprites_Clark, 0x00 },
    { L"Counter Extra 2", 0x2dd2d0, 0x2dd2f0, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Flash", 0x2dd2f0, 0x2dd310, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd310, 0x2dd330, indexKOF99Sprites_Clark, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd330, 0x2dd350, indexKOF99Sprites_Clark, 0x00 },
    { L"Super Trail Palette", 0x2dd350, 0x2dd370, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 4", 0x2dd370, 0x2dd390, indexKOF99Sprites_Clark, 0x00 },
    { L"Extra 5", 0x2dd390, 0x2dd3b0, indexKOF99Sprites_Clark, 0x00 },
    { L"Lifebar Portrait", 0x2dd3b0, 0x2dd3d0 },
    { L"Character Portrait", 0x2dd3d0, 0x2dd3f0, indexKOF99Sprites_Clark, 0x31 },
    { L"Striker Portrait", 0x2f9f90, 0x2f9fb0 },
    { L"Win Portrait", 0x2e8970, 0x2e8af0, indexKOF99Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_C_PALETTES[] =
{
    { L"Main", 0x1dd3f0, 0x1dd410, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 1", 0x1dd410, 0x1dd430, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 2", 0x1dd430, 0x1dd450, indexKOF99Sprites_Whip, 0x00 },
    { L"Electric Palette", 0x1dd450, 0x1dd470, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 3", 0x1dd470, 0x1dd490, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Mode Flash", 0x1dd490, 0x1dd4b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 1", 0x1dd4b0, 0x1dd4d0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 2", 0x1dd4d0, 0x1dd4f0, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Flash", 0x1dd4f0, 0x1dd510, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 1", 0x1dd510, 0x1dd530, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 2", 0x1dd530, 0x1dd550, indexKOF99Sprites_Whip, 0x00 },
    { L"Super Trail Palette", 0x1dd550, 0x1dd570, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 4", 0x1dd570, 0x1dd590, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 5", 0x1dd590, 0x1dd5b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Lifebar Portrait", 0x1dd5b0, 0x1dd5d0 },
    { L"Character Portrait", 0x1dd5d0, 0x1dd5f0, indexKOF99Sprites_Whip, 0x31 },
    { L"Striker Portrait", 0x1f9fb0, 0x1f9fd0 },
    { L"Win Portrait", 0x1e8af0, 0x1e8c70, indexKOF99Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_D_PALETTES[] =
{
    { L"Main", 0x1dd5f0, 0x1dd610, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 1", 0x1dd610, 0x1dd630, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 2", 0x1dd630, 0x1dd650, indexKOF99Sprites_Whip, 0x00 },
    { L"Electric Palette", 0x1dd650, 0x1dd670, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 3", 0x1dd670, 0x1dd690, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Mode Flash", 0x1dd690, 0x1dd6b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 1", 0x1dd6b0, 0x1dd6d0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 2", 0x1dd6d0, 0x1dd6f0, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Flash", 0x1dd6f0, 0x1dd710, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 1", 0x1dd710, 0x1dd730, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 2", 0x1dd730, 0x1dd750, indexKOF99Sprites_Whip, 0x00 },
    { L"Super Trail Palette", 0x1dd750, 0x1dd770, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 4", 0x1dd770, 0x1dd790, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 5", 0x1dd790, 0x1dd7b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Lifebar Portrait", 0x1dd7b0, 0x1dd7d0 },
    { L"Character Portrait", 0x1dd7d0, 0x1dd7f0, indexKOF99Sprites_Whip, 0x31 },
    { L"Striker Portrait", 0x1f9fd0, 0x1f9ff0 },
    { L"Win Portrait", 0x1e8c70, 0x1e8df0, indexKOF99Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_AC_PALETTES[] =
{
    { L"Main", 0x2dd3f0, 0x2dd410, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 1", 0x2dd410, 0x2dd430, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 2", 0x2dd430, 0x2dd450, indexKOF99Sprites_Whip, 0x00 },
    { L"Electric Palette", 0x2dd450, 0x2dd470, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 3", 0x2dd470, 0x2dd490, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Mode Flash", 0x2dd490, 0x2dd4b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 1", 0x2dd4b0, 0x2dd4d0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 2", 0x2dd4d0, 0x2dd4f0, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Flash", 0x2dd4f0, 0x2dd510, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd510, 0x2dd530, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd530, 0x2dd550, indexKOF99Sprites_Whip, 0x00 },
    { L"Super Trail Palette", 0x2dd550, 0x2dd570, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 4", 0x2dd570, 0x2dd590, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 5", 0x2dd590, 0x2dd5b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Lifebar Portrait", 0x2dd5b0, 0x2dd5d0 },
    { L"Character Portrait", 0x2dd5d0, 0x2dd5f0, indexKOF99Sprites_Whip, 0x31 },
    { L"Striker Portrait", 0x2f9fb0, 0x2f9fd0 },
    { L"Win Portrait", 0x2e8af0, 0x2e8c70, indexKOF99Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_BD_PALETTES[] =
{
    { L"Main", 0x2dd5f0, 0x2dd610, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 1", 0x2dd610, 0x2dd630, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 2", 0x2dd630, 0x2dd650, indexKOF99Sprites_Whip, 0x00 },
    { L"Electric Palette", 0x2dd650, 0x2dd670, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 3", 0x2dd670, 0x2dd690, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Mode Flash", 0x2dd690, 0x2dd6b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 1", 0x2dd6b0, 0x2dd6d0, indexKOF99Sprites_Whip, 0x00 },
    { L"Counter Extra 2", 0x2dd6d0, 0x2dd6f0, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Flash", 0x2dd6f0, 0x2dd710, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd710, 0x2dd730, indexKOF99Sprites_Whip, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd730, 0x2dd750, indexKOF99Sprites_Whip, 0x00 },
    { L"Super Trail Palette", 0x2dd750, 0x2dd770, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 4", 0x2dd770, 0x2dd790, indexKOF99Sprites_Whip, 0x00 },
    { L"Extra 5", 0x2dd790, 0x2dd7b0, indexKOF99Sprites_Whip, 0x00 },
    { L"Lifebar Portrait", 0x2dd7b0, 0x2dd7d0 },
    { L"Character Portrait", 0x2dd7d0, 0x2dd7f0, indexKOF99Sprites_Whip, 0x31 },
    { L"Striker Portrait", 0x2f9fd0, 0x2f9ff0 },
    { L"Win Portrait", 0x2e8c70, 0x2e8df0, indexKOF99Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_WHIP_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e39f0, 0x2e3a10 },
    { L"Effect 1", 0x2e3a10, 0x2e3a30 },
    { L"Effect 2", 0x2e3a30, 0x2e3a50 },
    { L"Effect 3", 0x2e3a50, 0x2e3a70 },
    { L"Effect 4", 0x2e3a70, 0x2e3a90 },
    { L"Effect 5", 0x2e3a90, 0x2e3ab0 },
    { L"Effect 6", 0x2e3ab0, 0x2e3ad0 },
    { L"Effect 7", 0x2e3ad0, 0x2e3af0 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_C_PALETTES[] =
{
    { L"Main", 0x1dd7f0, 0x1dd810, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 1", 0x1dd810, 0x1dd830, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 2", 0x1dd830, 0x1dd850, indexKOF99Sprites_Athena, 0x00 },
    { L"Electric Palette", 0x1dd850, 0x1dd870, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 3", 0x1dd870, 0x1dd890, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Mode Flash", 0x1dd890, 0x1dd8b0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 1", 0x1dd8b0, 0x1dd8d0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 2", 0x1dd8d0, 0x1dd8f0, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Flash", 0x1dd8f0, 0x1dd910, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 1", 0x1dd910, 0x1dd930, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 2", 0x1dd930, 0x1dd950, indexKOF99Sprites_Athena, 0x00 },
    { L"Super Trail Palette", 0x1dd950, 0x1dd970, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 4", 0x1dd970, 0x1dd990, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 5", 0x1dd990, 0x1dd9b0, indexKOF99Sprites_Athena, 0x00 },
    { L"Lifebar Portrait", 0x1dd9b0, 0x1dd9d0 },
    { L"Character Portrait", 0x1dd9d0, 0x1dd9f0, indexKOF99Sprites_Athena, 0x31 },
    { L"Striker Portrait", 0x1f9ff0, 0x1fa010 },
    { L"Win Portrait", 0x1e8df0, 0x1e8f70, indexKOF99Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_D_PALETTES[] =
{
    { L"Main", 0x1dd9f0, 0x1dda10, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 1", 0x1dda10, 0x1dda30, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 2", 0x1dda30, 0x1dda50, indexKOF99Sprites_Athena, 0x00 },
    { L"Electric Palette", 0x1dda50, 0x1dda70, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 3", 0x1dda70, 0x1dda90, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Mode Flash", 0x1dda90, 0x1ddab0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 1", 0x1ddab0, 0x1ddad0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 2", 0x1ddad0, 0x1ddaf0, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Flash", 0x1ddaf0, 0x1ddb10, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 1", 0x1ddb10, 0x1ddb30, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 2", 0x1ddb30, 0x1ddb50, indexKOF99Sprites_Athena, 0x00 },
    { L"Super Trail Palette", 0x1ddb50, 0x1ddb70, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 4", 0x1ddb70, 0x1ddb90, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 5", 0x1ddb90, 0x1ddbb0, indexKOF99Sprites_Athena, 0x00 },
    { L"Lifebar Portrait", 0x1ddbb0, 0x1ddbd0 },
    { L"Character Portrait", 0x1ddbd0, 0x1ddbf0, indexKOF99Sprites_Athena, 0x31 },
    { L"Striker Portrait", 0x1fa010, 0x1fa030 },
    { L"Win Portrait", 0x1e8f70, 0x1e90f0, indexKOF99Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_AC_PALETTES[] =
{
    { L"Main", 0x2dd7f0, 0x2dd810, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 1", 0x2dd810, 0x2dd830, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 2", 0x2dd830, 0x2dd850, indexKOF99Sprites_Athena, 0x00 },
    { L"Electric Palette", 0x2dd850, 0x2dd870, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 3", 0x2dd870, 0x2dd890, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Mode Flash", 0x2dd890, 0x2dd8b0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 1", 0x2dd8b0, 0x2dd8d0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 2", 0x2dd8d0, 0x2dd8f0, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Flash", 0x2dd8f0, 0x2dd910, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 1", 0x2dd910, 0x2dd930, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 2", 0x2dd930, 0x2dd950, indexKOF99Sprites_Athena, 0x00 },
    { L"Super Trail Palette", 0x2dd950, 0x2dd970, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 4", 0x2dd970, 0x2dd990, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 5", 0x2dd990, 0x2dd9b0, indexKOF99Sprites_Athena, 0x00 },
    { L"Lifebar Portrait", 0x2dd9b0, 0x2dd9d0 },
    { L"Character Portrait", 0x2dd9d0, 0x2dd9f0, indexKOF99Sprites_Athena, 0x31 },
    { L"Striker Portrait", 0x2f9ff0, 0x2fa010 },
    { L"Win Portrait", 0x2e8df0, 0x2e8f70, indexKOF99Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_BD_PALETTES[] =
{
    { L"Main", 0x2dd9f0, 0x2dda10, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 1", 0x2dda10, 0x2dda30, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 2", 0x2dda30, 0x2dda50, indexKOF99Sprites_Athena, 0x00 },
    { L"Electric Palette", 0x2dda50, 0x2dda70, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 3", 0x2dda70, 0x2dda90, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Mode Flash", 0x2dda90, 0x2ddab0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 1", 0x2ddab0, 0x2ddad0, indexKOF99Sprites_Athena, 0x00 },
    { L"Counter Extra 2", 0x2ddad0, 0x2ddaf0, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Flash", 0x2ddaf0, 0x2ddb10, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 1", 0x2ddb10, 0x2ddb30, indexKOF99Sprites_Athena, 0x00 },
    { L"Armor Mode Extra 2", 0x2ddb30, 0x2ddb50, indexKOF99Sprites_Athena, 0x00 },
    { L"Super Trail Palette", 0x2ddb50, 0x2ddb70, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 4", 0x2ddb70, 0x2ddb90, indexKOF99Sprites_Athena, 0x00 },
    { L"Extra 5", 0x2ddb90, 0x2ddbb0, indexKOF99Sprites_Athena, 0x00 },
    { L"Lifebar Portrait", 0x2ddbb0, 0x2ddbd0 },
    { L"Character Portrait", 0x2ddbd0, 0x2ddbf0, indexKOF99Sprites_Athena, 0x31 },
    { L"Striker Portrait", 0x2fa010, 0x2fa030 },
    { L"Win Portrait", 0x2e8f70, 0x2e90f0, indexKOF99Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_ATHENA_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e3bf0, 0x2e3c10 },
    { L"Effect 1", 0x2e3c10, 0x2e3c30 },
    { L"Effect 2", 0x2e3c30, 0x2e3c50 },
    { L"Effect 3", 0x2e3c50, 0x2e3c70 },
    { L"Effect 4", 0x2e3c70, 0x2e3c90 },
    { L"Effect 5", 0x2e3c90, 0x2e3cb0 },
    { L"Effect 6", 0x2e3cb0, 0x2e3cd0 },
    { L"Effect 7", 0x2e3cd0, 0x2e3cf0 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_C_PALETTES[] =
{
    { L"Main", 0x1ddbf0, 0x1ddc10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x1ddc10, 0x1ddc30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x1ddc30, 0x1ddc50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Electric Palette", 0x1ddc50, 0x1ddc70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x1ddc70, 0x1ddc90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Mode Flash", 0x1ddc90, 0x1ddcb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 1", 0x1ddcb0, 0x1ddcd0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 2", 0x1ddcd0, 0x1ddcf0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Flash", 0x1ddcf0, 0x1ddd10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 1", 0x1ddd10, 0x1ddd30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 2", 0x1ddd30, 0x1ddd50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Super Trail Palette", 0x1ddd50, 0x1ddd70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x1ddd70, 0x1ddd90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 5", 0x1ddd90, 0x1dddb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Lifebar Portrait", 0x1dddb0, 0x1dddd0 },
    { L"Character Portrait", 0x1dddd0, 0x1dddf0, indexKOF99Sprites_Kensou, 0x31 },
    { L"Striker Portrait", 0x1fa030, 0x1fa050 },
    { L"Win Portrait", 0x1e90f0, 0x1e9270, indexKOF99Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_D_PALETTES[] =
{
    { L"Main", 0x1dddf0, 0x1dde10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x1dde10, 0x1dde30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x1dde30, 0x1dde50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Electric Palette", 0x1dde50, 0x1dde70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x1dde70, 0x1dde90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Mode Flash", 0x1dde90, 0x1ddeb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 1", 0x1ddeb0, 0x1dded0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 2", 0x1dded0, 0x1ddef0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Flash", 0x1ddef0, 0x1ddf10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 1", 0x1ddf10, 0x1ddf30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 2", 0x1ddf30, 0x1ddf50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Super Trail Palette", 0x1ddf50, 0x1ddf70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x1ddf70, 0x1ddf90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 5", 0x1ddf90, 0x1ddfb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Lifebar Portrait", 0x1ddfb0, 0x1ddfd0 },
    { L"Character Portrait", 0x1ddfd0, 0x1ddff0, indexKOF99Sprites_Kensou, 0x31 },
    { L"Striker Portrait", 0x1fa050, 0x1fa070 },
    { L"Win Portrait", 0x1e9270, 0x1e93f0, indexKOF99Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_AC_PALETTES[] =
{
    { L"Main", 0x2ddbf0, 0x2ddc10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x2ddc10, 0x2ddc30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x2ddc30, 0x2ddc50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Electric Palette", 0x2ddc50, 0x2ddc70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x2ddc70, 0x2ddc90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Mode Flash", 0x2ddc90, 0x2ddcb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 1", 0x2ddcb0, 0x2ddcd0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 2", 0x2ddcd0, 0x2ddcf0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Flash", 0x2ddcf0, 0x2ddd10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 1", 0x2ddd10, 0x2ddd30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 2", 0x2ddd30, 0x2ddd50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Super Trail Palette", 0x2ddd50, 0x2ddd70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x2ddd70, 0x2ddd90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 5", 0x2ddd90, 0x2dddb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Lifebar Portrait", 0x2dddb0, 0x2dddd0 },
    { L"Character Portrait", 0x2dddd0, 0x2dddf0, indexKOF99Sprites_Kensou, 0x31 },
    { L"Striker Portrait", 0x2fa030, 0x2fa050 },
    { L"Win Portrait", 0x2e90f0, 0x2e9270, indexKOF99Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_BD_PALETTES[] =
{
    { L"Main", 0x2dddf0, 0x2dde10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 1", 0x2dde10, 0x2dde30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 2", 0x2dde30, 0x2dde50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Electric Palette", 0x2dde50, 0x2dde70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 3", 0x2dde70, 0x2dde90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Mode Flash", 0x2dde90, 0x2ddeb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 1", 0x2ddeb0, 0x2dded0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Counter Extra 2", 0x2dded0, 0x2ddef0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Flash", 0x2ddef0, 0x2ddf10, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 1", 0x2ddf10, 0x2ddf30, indexKOF99Sprites_Kensou, 0x00 },
    { L"Armor Mode Extra 2", 0x2ddf30, 0x2ddf50, indexKOF99Sprites_Kensou, 0x00 },
    { L"Super Trail Palette", 0x2ddf50, 0x2ddf70, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 4", 0x2ddf70, 0x2ddf90, indexKOF99Sprites_Kensou, 0x00 },
    { L"Extra 5", 0x2ddf90, 0x2ddfb0, indexKOF99Sprites_Kensou, 0x00 },
    { L"Lifebar Portrait", 0x2ddfb0, 0x2ddfd0 },
    { L"Character Portrait", 0x2ddfd0, 0x2ddff0, indexKOF99Sprites_Kensou, 0x31 },
    { L"Striker Portrait", 0x2fa050, 0x2fa070 },
    { L"Win Portrait", 0x2e9270, 0x2e93f0, indexKOF99Sprites_Kensou, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KENSOU_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e3df0, 0x2e3e10 },
    { L"Effect 1", 0x2e3e10, 0x2e3e30 },
    { L"Effect 2", 0x2e3e30, 0x2e3e50 },
    { L"Effect 3", 0x2e3e50, 0x2e3e70 },
    { L"Effect 4", 0x2e3e70, 0x2e3e90 },
    { L"Effect 5", 0x2e3e90, 0x2e3eb0 },
    { L"Effect 6", 0x2e3eb0, 0x2e3ed0 },
    { L"Effect 7", 0x2e3ed0, 0x2e3ef0 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_C_PALETTES[] =
{
    { L"Main", 0x1ddff0, 0x1de010, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 1", 0x1de010, 0x1de030, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 2", 0x1de030, 0x1de050, indexKOF99Sprites_Chin, 0x00 },
    { L"Electric Palette", 0x1de050, 0x1de070, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 3", 0x1de070, 0x1de090, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Mode Flash", 0x1de090, 0x1de0b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 1", 0x1de0b0, 0x1de0d0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 2", 0x1de0d0, 0x1de0f0, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Flash", 0x1de0f0, 0x1de110, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 1", 0x1de110, 0x1de130, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 2", 0x1de130, 0x1de150, indexKOF99Sprites_Chin, 0x00 },
    { L"Super Trail Palette", 0x1de150, 0x1de170, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 4", 0x1de170, 0x1de190, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 5", 0x1de190, 0x1de1b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Lifebar Portrait", 0x1de1b0, 0x1de1d0 },
    { L"Character Portrait", 0x1de1d0, 0x1de1f0, indexKOF99Sprites_Chin, 0x31 },
    { L"Striker Portrait", 0x1fa070, 0x1fa090 },
    { L"Win Portrait", 0x1e93f0, 0x1e9570, indexKOF99Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_D_PALETTES[] =
{
    { L"Main", 0x1de1f0, 0x1de210, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 1", 0x1de210, 0x1de230, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 2", 0x1de230, 0x1de250, indexKOF99Sprites_Chin, 0x00 },
    { L"Electric Palette", 0x1de250, 0x1de270, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 3", 0x1de270, 0x1de290, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Mode Flash", 0x1de290, 0x1de2b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 1", 0x1de2b0, 0x1de2d0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 2", 0x1de2d0, 0x1de2f0, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Flash", 0x1de2f0, 0x1de310, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 1", 0x1de310, 0x1de330, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 2", 0x1de330, 0x1de350, indexKOF99Sprites_Chin, 0x00 },
    { L"Super Trail Palette", 0x1de350, 0x1de370, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 4", 0x1de370, 0x1de390, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 5", 0x1de390, 0x1de3b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Lifebar Portrait", 0x1de3b0, 0x1de3d0 },
    { L"Character Portrait", 0x1de3d0, 0x1de3f0, indexKOF99Sprites_Chin, 0x31 },
    { L"Striker Portrait", 0x1fa090, 0x1fa0b0 },
    { L"Win Portrait", 0x1e9570, 0x1e96f0, indexKOF99Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_AC_PALETTES[] =
{
    { L"Main", 0x2ddff0, 0x2de010, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 1", 0x2de010, 0x2de030, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 2", 0x2de030, 0x2de050, indexKOF99Sprites_Chin, 0x00 },
    { L"Electric Palette", 0x2de050, 0x2de070, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 3", 0x2de070, 0x2de090, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Mode Flash", 0x2de090, 0x2de0b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 1", 0x2de0b0, 0x2de0d0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 2", 0x2de0d0, 0x2de0f0, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Flash", 0x2de0f0, 0x2de110, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 1", 0x2de110, 0x2de130, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 2", 0x2de130, 0x2de150, indexKOF99Sprites_Chin, 0x00 },
    { L"Super Trail Palette", 0x2de150, 0x2de170, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 4", 0x2de170, 0x2de190, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 5", 0x2de190, 0x2de1b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Lifebar Portrait", 0x2de1b0, 0x2de1d0 },
    { L"Character Portrait", 0x2de1d0, 0x2de1f0, indexKOF99Sprites_Chin, 0x31 },
    { L"Striker Portrait", 0x2fa070, 0x2fa090 },
    { L"Win Portrait", 0x2e93f0, 0x2e9570, indexKOF99Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_BD_PALETTES[] =
{
    { L"Main", 0x2de1f0, 0x2de210, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 1", 0x2de210, 0x2de230, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 2", 0x2de230, 0x2de250, indexKOF99Sprites_Chin, 0x00 },
    { L"Electric Palette", 0x2de250, 0x2de270, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 3", 0x2de270, 0x2de290, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Mode Flash", 0x2de290, 0x2de2b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 1", 0x2de2b0, 0x2de2d0, indexKOF99Sprites_Chin, 0x00 },
    { L"Counter Extra 2", 0x2de2d0, 0x2de2f0, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Flash", 0x2de2f0, 0x2de310, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 1", 0x2de310, 0x2de330, indexKOF99Sprites_Chin, 0x00 },
    { L"Armor Mode Extra 2", 0x2de330, 0x2de350, indexKOF99Sprites_Chin, 0x00 },
    { L"Super Trail Palette", 0x2de350, 0x2de370, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 4", 0x2de370, 0x2de390, indexKOF99Sprites_Chin, 0x00 },
    { L"Extra 5", 0x2de390, 0x2de3b0, indexKOF99Sprites_Chin, 0x00 },
    { L"Lifebar Portrait", 0x2de3b0, 0x2de3d0 },
    { L"Character Portrait", 0x2de3d0, 0x2de3f0, indexKOF99Sprites_Chin, 0x31 },
    { L"Striker Portrait", 0x2fa090, 0x2fa0b0 },
    { L"Win Portrait", 0x2e9570, 0x2e96f0, indexKOF99Sprites_Chin, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHIN_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e3ff0, 0x2e4010 },
    { L"Effect 1", 0x2e4010, 0x2e4030 },
    { L"Effect 2", 0x2e4030, 0x2e4050 },
    { L"Effect 3", 0x2e4050, 0x2e4070 },
    { L"Effect 4", 0x2e4070, 0x2e4090 },
    { L"Effect 5", 0x2e4090, 0x2e40b0 },
    { L"Effect 6", 0x2e40b0, 0x2e40d0 },
    { L"Effect 7", 0x2e40d0, 0x2e40f0 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_C_PALETTES[] =
{
    { L"Main", 0x1de3f0, 0x1de410, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 1", 0x1de410, 0x1de430, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 2", 0x1de430, 0x1de450, indexKOF99Sprites_Bao, 0x00 },
    { L"Electric Palette", 0x1de450, 0x1de470, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 3", 0x1de470, 0x1de490, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Mode Flash", 0x1de490, 0x1de4b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 1", 0x1de4b0, 0x1de4d0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 2", 0x1de4d0, 0x1de4f0, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Flash", 0x1de4f0, 0x1de510, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 1", 0x1de510, 0x1de530, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 2", 0x1de530, 0x1de550, indexKOF99Sprites_Bao, 0x00 },
    { L"Super Trail Palette", 0x1de550, 0x1de570, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 4", 0x1de570, 0x1de590, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 5", 0x1de590, 0x1de5b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Lifebar Portrait", 0x1de5b0, 0x1de5d0 },
    { L"Character Portrait", 0x1de5d0, 0x1de5f0, indexKOF99Sprites_Bao, 0x31 },
    { L"Striker Portrait", 0x1fa0b0, 0x1fa0d0 },
    { L"Win Portrait", 0x1e96f0, 0x1e9870, indexKOF99Sprites_Bao, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_D_PALETTES[] =
{
    { L"Main", 0x1de5f0, 0x1de610, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 1", 0x1de610, 0x1de630, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 2", 0x1de630, 0x1de650, indexKOF99Sprites_Bao, 0x00 },
    { L"Electric Palette", 0x1de650, 0x1de670, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 3", 0x1de670, 0x1de690, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Mode Flash", 0x1de690, 0x1de6b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 1", 0x1de6b0, 0x1de6d0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 2", 0x1de6d0, 0x1de6f0, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Flash", 0x1de6f0, 0x1de710, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 1", 0x1de710, 0x1de730, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 2", 0x1de730, 0x1de750, indexKOF99Sprites_Bao, 0x00 },
    { L"Super Trail Palette", 0x1de750, 0x1de770, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 4", 0x1de770, 0x1de790, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 5", 0x1de790, 0x1de7b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Lifebar Portrait", 0x1de7b0, 0x1de7d0 },
    { L"Character Portrait", 0x1de7d0, 0x1de7f0, indexKOF99Sprites_Bao, 0x31 },
    { L"Striker Portrait", 0x1fa0d0, 0x1fa0f0 },
    { L"Win Portrait", 0x1e9870, 0x1e99f0, indexKOF99Sprites_Bao, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_AC_PALETTES[] =
{
    { L"Main", 0x2de3f0, 0x2de410, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 1", 0x2de410, 0x2de430, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 2", 0x2de430, 0x2de450, indexKOF99Sprites_Bao, 0x00 },
    { L"Electric Palette", 0x2de450, 0x2de470, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 3", 0x2de470, 0x2de490, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Mode Flash", 0x2de490, 0x2de4b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 1", 0x2de4b0, 0x2de4d0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 2", 0x2de4d0, 0x2de4f0, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Flash", 0x2de4f0, 0x2de510, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 1", 0x2de510, 0x2de530, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 2", 0x2de530, 0x2de550, indexKOF99Sprites_Bao, 0x00 },
    { L"Super Trail Palette", 0x2de550, 0x2de570, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 4", 0x2de570, 0x2de590, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 5", 0x2de590, 0x2de5b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Lifebar Portrait", 0x2de5b0, 0x2de5d0 },
    { L"Character Portrait", 0x2de5d0, 0x2de5f0, indexKOF99Sprites_Bao, 0x31 },
    { L"Striker Portrait", 0x2fa0b0, 0x2fa0d0 },
    { L"Win Portrait", 0x2e96f0, 0x2e9870, indexKOF99Sprites_Bao, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_BD_PALETTES[] =
{
    { L"Main", 0x2de5f0, 0x2de610, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 1", 0x2de610, 0x2de630, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 2", 0x2de630, 0x2de650, indexKOF99Sprites_Bao, 0x00 },
    { L"Electric Palette", 0x2de650, 0x2de670, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 3", 0x2de670, 0x2de690, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Mode Flash", 0x2de690, 0x2de6b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 1", 0x2de6b0, 0x2de6d0, indexKOF99Sprites_Bao, 0x00 },
    { L"Counter Extra 2", 0x2de6d0, 0x2de6f0, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Flash", 0x2de6f0, 0x2de710, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 1", 0x2de710, 0x2de730, indexKOF99Sprites_Bao, 0x00 },
    { L"Armor Mode Extra 2", 0x2de730, 0x2de750, indexKOF99Sprites_Bao, 0x00 },
    { L"Super Trail Palette", 0x2de750, 0x2de770, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 4", 0x2de770, 0x2de790, indexKOF99Sprites_Bao, 0x00 },
    { L"Extra 5", 0x2de790, 0x2de7b0, indexKOF99Sprites_Bao, 0x00 },
    { L"Lifebar Portrait", 0x2de7b0, 0x2de7d0 },
    { L"Character Portrait", 0x2de7d0, 0x2de7f0, indexKOF99Sprites_Bao, 0x31 },
    { L"Striker Portrait", 0x2fa0d0, 0x2fa0f0 },
    { L"Win Portrait", 0x2e9870, 0x2e99f0, indexKOF99Sprites_Bao, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BAO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e41f0, 0x2e4210 },
    { L"Effect 1", 0x2e4210, 0x2e4230 },
    { L"Effect 2", 0x2e4230, 0x2e4250 },
    { L"Effect 3", 0x2e4250, 0x2e4270 },
    { L"Effect 4", 0x2e4270, 0x2e4290 },
    { L"Effect 5", 0x2e4290, 0x2e42b0 },
    { L"Effect 6", 0x2e42b0, 0x2e42d0 },
    { L"Effect 7", 0x2e42d0, 0x2e42f0 },
};

const sGame_PaletteDataset KOF99AE_A_KING_C_PALETTES[] =
{
    { L"Main", 0x1de7f0, 0x1de810, indexKOF99Sprites_King, 0x00 },
    { L"Extra 1", 0x1de810, 0x1de830, indexKOF99Sprites_King, 0x00 },
    { L"Extra 2", 0x1de830, 0x1de850, indexKOF99Sprites_King, 0x00 },
    { L"Electric Palette", 0x1de850, 0x1de870, indexKOF99Sprites_King, 0x00 },
    { L"Extra 3", 0x1de870, 0x1de890, indexKOF99Sprites_King, 0x00 },
    { L"Counter Mode Flash", 0x1de890, 0x1de8b0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 1", 0x1de8b0, 0x1de8d0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 2", 0x1de8d0, 0x1de8f0, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Flash", 0x1de8f0, 0x1de910, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 1", 0x1de910, 0x1de930, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 2", 0x1de930, 0x1de950, indexKOF99Sprites_King, 0x00 },
    { L"Super Trail Palette", 0x1de950, 0x1de970, indexKOF99Sprites_King, 0x00 },
    { L"Extra 4", 0x1de970, 0x1de990, indexKOF99Sprites_King, 0x00 },
    { L"Extra 5", 0x1de990, 0x1de9b0, indexKOF99Sprites_King, 0x00 },
    { L"Lifebar Portrait", 0x1de9b0, 0x1de9d0 },
    { L"Character Portrait", 0x1de9d0, 0x1de9f0, indexKOF99Sprites_King, 0x31 },
    { L"Striker Portrait", 0x1fa0f0, 0x1fa110 },
    { L"Win Portrait", 0x1e99f0, 0x1e9b70, indexKOF99Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KING_D_PALETTES[] =
{
    { L"Main", 0x1de9f0, 0x1dea10, indexKOF99Sprites_King, 0x00 },
    { L"Extra 1", 0x1dea10, 0x1dea30, indexKOF99Sprites_King, 0x00 },
    { L"Extra 2", 0x1dea30, 0x1dea50, indexKOF99Sprites_King, 0x00 },
    { L"Electric Palette", 0x1dea50, 0x1dea70, indexKOF99Sprites_King, 0x00 },
    { L"Extra 3", 0x1dea70, 0x1dea90, indexKOF99Sprites_King, 0x00 },
    { L"Counter Mode Flash", 0x1dea90, 0x1deab0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 1", 0x1deab0, 0x1dead0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 2", 0x1dead0, 0x1deaf0, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Flash", 0x1deaf0, 0x1deb10, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 1", 0x1deb10, 0x1deb30, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 2", 0x1deb30, 0x1deb50, indexKOF99Sprites_King, 0x00 },
    { L"Super Trail Palette", 0x1deb50, 0x1deb70, indexKOF99Sprites_King, 0x00 },
    { L"Extra 4", 0x1deb70, 0x1deb90, indexKOF99Sprites_King, 0x00 },
    { L"Extra 5", 0x1deb90, 0x1debb0, indexKOF99Sprites_King, 0x00 },
    { L"Lifebar Portrait", 0x1debb0, 0x1debd0 },
    { L"Character Portrait", 0x1debd0, 0x1debf0, indexKOF99Sprites_King, 0x31 },
    { L"Striker Portrait", 0x1fa110, 0x1fa130 },
    { L"Win Portrait", 0x1e9b70, 0x1e9cf0, indexKOF99Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KING_AC_PALETTES[] =
{
    { L"Main", 0x2de7f0, 0x2de810, indexKOF99Sprites_King, 0x00 },
    { L"Extra 1", 0x2de810, 0x2de830, indexKOF99Sprites_King, 0x00 },
    { L"Extra 2", 0x2de830, 0x2de850, indexKOF99Sprites_King, 0x00 },
    { L"Electric Palette", 0x2de850, 0x2de870, indexKOF99Sprites_King, 0x00 },
    { L"Extra 3", 0x2de870, 0x2de890, indexKOF99Sprites_King, 0x00 },
    { L"Counter Mode Flash", 0x2de890, 0x2de8b0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 1", 0x2de8b0, 0x2de8d0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 2", 0x2de8d0, 0x2de8f0, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Flash", 0x2de8f0, 0x2de910, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 1", 0x2de910, 0x2de930, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 2", 0x2de930, 0x2de950, indexKOF99Sprites_King, 0x00 },
    { L"Super Trail Palette", 0x2de950, 0x2de970, indexKOF99Sprites_King, 0x00 },
    { L"Extra 4", 0x2de970, 0x2de990, indexKOF99Sprites_King, 0x00 },
    { L"Extra 5", 0x2de990, 0x2de9b0, indexKOF99Sprites_King, 0x00 },
    { L"Lifebar Portrait", 0x2de9b0, 0x2de9d0 },
    { L"Character Portrait", 0x2de9d0, 0x2de9f0, indexKOF99Sprites_King, 0x31 },
    { L"Striker Portrait", 0x2fa0f0, 0x2fa110 },
    { L"Win Portrait", 0x2e99f0, 0x2e9b70, indexKOF99Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KING_BD_PALETTES[] =
{
    { L"Main", 0x2de9f0, 0x2dea10, indexKOF99Sprites_King, 0x00 },
    { L"Extra 1", 0x2dea10, 0x2dea30, indexKOF99Sprites_King, 0x00 },
    { L"Extra 2", 0x2dea30, 0x2dea50, indexKOF99Sprites_King, 0x00 },
    { L"Electric Palette", 0x2dea50, 0x2dea70, indexKOF99Sprites_King, 0x00 },
    { L"Extra 3", 0x2dea70, 0x2dea90, indexKOF99Sprites_King, 0x00 },
    { L"Counter Mode Flash", 0x2dea90, 0x2deab0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 1", 0x2deab0, 0x2dead0, indexKOF99Sprites_King, 0x00 },
    { L"Counter Extra 2", 0x2dead0, 0x2deaf0, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Flash", 0x2deaf0, 0x2deb10, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 1", 0x2deb10, 0x2deb30, indexKOF99Sprites_King, 0x00 },
    { L"Armor Mode Extra 2", 0x2deb30, 0x2deb50, indexKOF99Sprites_King, 0x00 },
    { L"Super Trail Palette", 0x2deb50, 0x2deb70, indexKOF99Sprites_King, 0x00 },
    { L"Extra 4", 0x2deb70, 0x2deb90, indexKOF99Sprites_King, 0x00 },
    { L"Extra 5", 0x2deb90, 0x2debb0, indexKOF99Sprites_King, 0x00 },
    { L"Lifebar Portrait", 0x2debb0, 0x2debd0 },
    { L"Character Portrait", 0x2debd0, 0x2debf0, indexKOF99Sprites_King, 0x31 },
    { L"Striker Portrait", 0x2fa110, 0x2fa130 },
    { L"Win Portrait", 0x2e9b70, 0x2e9cf0, indexKOF99Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KING_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e43f0, 0x2e4410 },
    { L"Effect 1", 0x2e4410, 0x2e4430 },
    { L"Effect 2", 0x2e4430, 0x2e4450 },
    { L"Effect 3", 0x2e4450, 0x2e4470 },
    { L"Effect 4", 0x2e4470, 0x2e4490 },
    { L"Effect 5", 0x2e4490, 0x2e44b0 },
    { L"Effect 6", 0x2e44b0, 0x2e44d0 },
    { L"Effect 7", 0x2e44d0, 0x2e44f0 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_C_PALETTES[] =
{
    { L"Main", 0x1debf0, 0x1dec10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 1", 0x1dec10, 0x1dec30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 2", 0x1dec30, 0x1dec50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Electric Palette", 0x1dec50, 0x1dec70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 3", 0x1dec70, 0x1dec90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Mode Flash", 0x1dec90, 0x1decb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 1", 0x1decb0, 0x1decd0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 2", 0x1decd0, 0x1decf0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Flash", 0x1decf0, 0x1ded10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 1", 0x1ded10, 0x1ded30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 2", 0x1ded30, 0x1ded50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Super Trail Palette", 0x1ded50, 0x1ded70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 4", 0x1ded70, 0x1ded90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 5", 0x1ded90, 0x1dedb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Lifebar Portrait", 0x1dedb0, 0x1dedd0 },
    { L"Character Portrait", 0x1dedd0, 0x1dedf0, indexKOF99Sprites_BlueMary, 0x31 },
    { L"Striker Portrait", 0x1fa130, 0x1fa150 },
    { L"Win Portrait", 0x1e9cf0, 0x1e9e70, indexKOF99Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_D_PALETTES[] =
{
    { L"Main", 0x1dedf0, 0x1dee10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 1", 0x1dee10, 0x1dee30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 2", 0x1dee30, 0x1dee50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Electric Palette", 0x1dee50, 0x1dee70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 3", 0x1dee70, 0x1dee90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Mode Flash", 0x1dee90, 0x1deeb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 1", 0x1deeb0, 0x1deed0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 2", 0x1deed0, 0x1deef0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Flash", 0x1deef0, 0x1def10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 1", 0x1def10, 0x1def30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 2", 0x1def30, 0x1def50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Super Trail Palette", 0x1def50, 0x1def70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 4", 0x1def70, 0x1def90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 5", 0x1def90, 0x1defb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Lifebar Portrait", 0x1defb0, 0x1defd0 },
    { L"Character Portrait", 0x1defd0, 0x1deff0, indexKOF99Sprites_BlueMary, 0x31 },
    { L"Striker Portrait", 0x1fa150, 0x1fa170 },
    { L"Win Portrait", 0x1e9e70, 0x1e9ff0, indexKOF99Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_AC_PALETTES[] =
{
    { L"Main", 0x2debf0, 0x2dec10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 1", 0x2dec10, 0x2dec30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 2", 0x2dec30, 0x2dec50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Electric Palette", 0x2dec50, 0x2dec70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 3", 0x2dec70, 0x2dec90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Mode Flash", 0x2dec90, 0x2decb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 1", 0x2decb0, 0x2decd0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 2", 0x2decd0, 0x2decf0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Flash", 0x2decf0, 0x2ded10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 1", 0x2ded10, 0x2ded30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 2", 0x2ded30, 0x2ded50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Super Trail Palette", 0x2ded50, 0x2ded70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 4", 0x2ded70, 0x2ded90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 5", 0x2ded90, 0x2dedb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Lifebar Portrait", 0x2dedb0, 0x2dedd0 },
    { L"Character Portrait", 0x2dedd0, 0x2dedf0, indexKOF99Sprites_BlueMary, 0x31 },
    { L"Striker Portrait", 0x2fa130, 0x2fa150 },
    { L"Win Portrait", 0x2e9cf0, 0x2e9e70, indexKOF99Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_BD_PALETTES[] =
{
    { L"Main", 0x2dedf0, 0x2dee10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 1", 0x2dee10, 0x2dee30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 2", 0x2dee30, 0x2dee50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Electric Palette", 0x2dee50, 0x2dee70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 3", 0x2dee70, 0x2dee90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Mode Flash", 0x2dee90, 0x2deeb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 1", 0x2deeb0, 0x2deed0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Counter Extra 2", 0x2deed0, 0x2deef0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Flash", 0x2deef0, 0x2def10, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 1", 0x2def10, 0x2def30, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Armor Mode Extra 2", 0x2def30, 0x2def50, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Super Trail Palette", 0x2def50, 0x2def70, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 4", 0x2def70, 0x2def90, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Extra 5", 0x2def90, 0x2defb0, indexKOF99Sprites_BlueMary, 0x00 },
    { L"Lifebar Portrait", 0x2defb0, 0x2defd0 },
    { L"Character Portrait", 0x2defd0, 0x2deff0, indexKOF99Sprites_BlueMary, 0x31 },
    { L"Striker Portrait", 0x2fa150, 0x2fa170 },
    { L"Win Portrait", 0x2e9e70, 0x2e9ff0, indexKOF99Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BLUEMARY_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e45f0, 0x2e4610 },
    { L"Effect 1", 0x2e4610, 0x2e4630 },
    { L"Effect 2", 0x2e4630, 0x2e4650 },
    { L"Effect 3", 0x2e4650, 0x2e4670 },
    { L"Effect 4", 0x2e4670, 0x2e4690 },
    { L"Effect 5", 0x2e4690, 0x2e46b0 },
    { L"Effect 6", 0x2e46b0, 0x2e46d0 },
    { L"Effect 7", 0x2e46d0, 0x2e46f0 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_C_PALETTES[] =
{
    { L"Main", 0x1deff0, 0x1df010, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x1df010, 0x1df030, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 2", 0x1df030, 0x1df050, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x1df050, 0x1df070, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 3", 0x1df070, 0x1df090, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Mode Flash", 0x1df090, 0x1df0b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 1", 0x1df0b0, 0x1df0d0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 2", 0x1df0d0, 0x1df0f0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Flash", 0x1df0f0, 0x1df110, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 1", 0x1df110, 0x1df130, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 2", 0x1df130, 0x1df150, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Super Trail Palette", 0x1df150, 0x1df170, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 4", 0x1df170, 0x1df190, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 5", 0x1df190, 0x1df1b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Lifebar Portrait", 0x1df1b0, 0x1df1d0 },
    { L"Character Portrait", 0x1df1d0, 0x1df1f0, indexKOF99Sprites_Kasumi, 0x31 },
    { L"Striker Portrait", 0x1fa170, 0x1fa190 },
    { L"Win Portrait", 0x1e9ff0, 0x1ea170, indexKOF99Sprites_Kasumi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_D_PALETTES[] =
{
    { L"Main", 0x1df1f0, 0x1df210, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x1df210, 0x1df230, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 2", 0x1df230, 0x1df250, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x1df250, 0x1df270, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 3", 0x1df270, 0x1df290, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Mode Flash", 0x1df290, 0x1df2b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 1", 0x1df2b0, 0x1df2d0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 2", 0x1df2d0, 0x1df2f0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Flash", 0x1df2f0, 0x1df310, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 1", 0x1df310, 0x1df330, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 2", 0x1df330, 0x1df350, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Super Trail Palette", 0x1df350, 0x1df370, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 4", 0x1df370, 0x1df390, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 5", 0x1df390, 0x1df3b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Lifebar Portrait", 0x1df3b0, 0x1df3d0 },
    { L"Character Portrait", 0x1df3d0, 0x1df3f0, indexKOF99Sprites_Kasumi, 0x31 },
    { L"Striker Portrait", 0x1fa190, 0x1fa1b0 },
    { L"Win Portrait", 0x1ea170, 0x1ea2f0, indexKOF99Sprites_Kasumi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_AC_PALETTES[] =
{
    { L"Main", 0x2deff0, 0x2df010, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x2df010, 0x2df030, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 2", 0x2df030, 0x2df050, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x2df050, 0x2df070, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 3", 0x2df070, 0x2df090, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Mode Flash", 0x2df090, 0x2df0b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 1", 0x2df0b0, 0x2df0d0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 2", 0x2df0d0, 0x2df0f0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Flash", 0x2df0f0, 0x2df110, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 1", 0x2df110, 0x2df130, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 2", 0x2df130, 0x2df150, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Super Trail Palette", 0x2df150, 0x2df170, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 4", 0x2df170, 0x2df190, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 5", 0x2df190, 0x2df1b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Lifebar Portrait", 0x2df1b0, 0x2df1d0 },
    { L"Character Portrait", 0x2df1d0, 0x2df1f0, indexKOF99Sprites_Kasumi, 0x31 },
    { L"Striker Portrait", 0x2fa170, 0x2fa190 },
    { L"Win Portrait", 0x2e9ff0, 0x2ea170, indexKOF99Sprites_Kasumi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_BD_PALETTES[] =
{
    { L"Main", 0x2df1f0, 0x2df210, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 1", 0x2df210, 0x2df230, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 2", 0x2df230, 0x2df250, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Electric Palette", 0x2df250, 0x2df270, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 3", 0x2df270, 0x2df290, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Mode Flash", 0x2df290, 0x2df2b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 1", 0x2df2b0, 0x2df2d0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Counter Extra 2", 0x2df2d0, 0x2df2f0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Flash", 0x2df2f0, 0x2df310, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 1", 0x2df310, 0x2df330, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Armor Mode Extra 2", 0x2df330, 0x2df350, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Super Trail Palette", 0x2df350, 0x2df370, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 4", 0x2df370, 0x2df390, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Extra 5", 0x2df390, 0x2df3b0, indexKOF99Sprites_Kasumi, 0x00 },
    { L"Lifebar Portrait", 0x2df3b0, 0x2df3d0 },
    { L"Character Portrait", 0x2df3d0, 0x2df3f0, indexKOF99Sprites_Kasumi, 0x31 },
    { L"Striker Portrait", 0x2fa190, 0x2fa1b0 },
    { L"Win Portrait", 0x2ea170, 0x2ea2f0, indexKOF99Sprites_Kasumi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KASUMI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e47f0, 0x2e4810 },
    { L"Effect 1", 0x2e4810, 0x2e4830 },
    { L"Effect 2", 0x2e4830, 0x2e4850 },
    { L"Effect 3", 0x2e4850, 0x2e4870 },
    { L"Effect 4", 0x2e4870, 0x2e4890 },
    { L"Effect 5", 0x2e4890, 0x2e48b0 },
    { L"Effect 6", 0x2e48b0, 0x2e48d0 },
    { L"Effect 7", 0x2e48d0, 0x2e48f0 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_C_PALETTES[] =
{
    { L"Main", 0x1df3f0, 0x1df410, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 1", 0x1df410, 0x1df430, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 2", 0x1df430, 0x1df450, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Electric Palette", 0x1df450, 0x1df470, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 3", 0x1df470, 0x1df490, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Mode Flash", 0x1df490, 0x1df4b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 1", 0x1df4b0, 0x1df4d0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 2", 0x1df4d0, 0x1df4f0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Flash", 0x1df4f0, 0x1df510, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 1", 0x1df510, 0x1df530, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 2", 0x1df530, 0x1df550, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Super Trail Palette", 0x1df550, 0x1df570, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 4", 0x1df570, 0x1df590, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 5", 0x1df590, 0x1df5b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Lifebar Portrait", 0x1df5b0, 0x1df5d0 },
    { L"Character Portrait", 0x1df5d0, 0x1df5f0, indexKOF99Sprites_Xiangfei, 0x31 },
    { L"Striker Portrait", 0x1fa1b0, 0x1fa1d0 },
    { L"Win Portrait", 0x1ea2f0, 0x1ea470, indexKOF99Sprites_Xiangfei, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_D_PALETTES[] =
{
    { L"Main", 0x1df5f0, 0x1df610, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 1", 0x1df610, 0x1df630, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 2", 0x1df630, 0x1df650, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Electric Palette", 0x1df650, 0x1df670, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 3", 0x1df670, 0x1df690, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Mode Flash", 0x1df690, 0x1df6b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 1", 0x1df6b0, 0x1df6d0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 2", 0x1df6d0, 0x1df6f0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Flash", 0x1df6f0, 0x1df710, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 1", 0x1df710, 0x1df730, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 2", 0x1df730, 0x1df750, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Super Trail Palette", 0x1df750, 0x1df770, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 4", 0x1df770, 0x1df790, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 5", 0x1df790, 0x1df7b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Lifebar Portrait", 0x1df7b0, 0x1df7d0 },
    { L"Character Portrait", 0x1df7d0, 0x1df7f0, indexKOF99Sprites_Xiangfei, 0x31 },
    { L"Striker Portrait", 0x1fa1d0, 0x1fa1f0 },
    { L"Win Portrait", 0x1ea470, 0x1ea5f0, indexKOF99Sprites_Xiangfei, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_AC_PALETTES[] =
{
    { L"Main", 0x2df3f0, 0x2df410, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 1", 0x2df410, 0x2df430, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 2", 0x2df430, 0x2df450, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Electric Palette", 0x2df450, 0x2df470, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 3", 0x2df470, 0x2df490, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Mode Flash", 0x2df490, 0x2df4b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 1", 0x2df4b0, 0x2df4d0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 2", 0x2df4d0, 0x2df4f0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Flash", 0x2df4f0, 0x2df510, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 1", 0x2df510, 0x2df530, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 2", 0x2df530, 0x2df550, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Super Trail Palette", 0x2df550, 0x2df570, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 4", 0x2df570, 0x2df590, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 5", 0x2df590, 0x2df5b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Lifebar Portrait", 0x2df5b0, 0x2df5d0 },
    { L"Character Portrait", 0x2df5d0, 0x2df5f0, indexKOF99Sprites_Xiangfei, 0x31 },
    { L"Striker Portrait", 0x2fa1b0, 0x2fa1d0 },
    { L"Win Portrait", 0x2ea2f0, 0x2ea470, indexKOF99Sprites_Xiangfei, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_BD_PALETTES[] =
{
    { L"Main", 0x2df5f0, 0x2df610, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 1", 0x2df610, 0x2df630, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 2", 0x2df630, 0x2df650, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Electric Palette", 0x2df650, 0x2df670, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 3", 0x2df670, 0x2df690, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Mode Flash", 0x2df690, 0x2df6b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 1", 0x2df6b0, 0x2df6d0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Counter Extra 2", 0x2df6d0, 0x2df6f0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Flash", 0x2df6f0, 0x2df710, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 1", 0x2df710, 0x2df730, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Armor Mode Extra 2", 0x2df730, 0x2df750, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Super Trail Palette", 0x2df750, 0x2df770, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 4", 0x2df770, 0x2df790, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Extra 5", 0x2df790, 0x2df7b0, indexKOF99Sprites_Xiangfei, 0x00 },
    { L"Lifebar Portrait", 0x2df7b0, 0x2df7d0 },
    { L"Character Portrait", 0x2df7d0, 0x2df7f0, indexKOF99Sprites_Xiangfei, 0x31 },
    { L"Striker Portrait", 0x2fa1d0, 0x2fa1f0 },
    { L"Win Portrait", 0x2ea470, 0x2ea5f0, indexKOF99Sprites_Xiangfei, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_XIANGFEI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e49f0, 0x2e4a10 },
    { L"Effect 1", 0x2e4a10, 0x2e4a30 },
    { L"Effect 2", 0x2e4a30, 0x2e4a50 },
    { L"Effect 3", 0x2e4a50, 0x2e4a70 },
    { L"Effect 4", 0x2e4a70, 0x2e4a90 },
    { L"Effect 5", 0x2e4a90, 0x2e4ab0 },
    { L"Effect 6", 0x2e4ab0, 0x2e4ad0 },
    { L"Effect 7", 0x2e4ad0, 0x2e4af0 },
};

const sGame_PaletteDataset KOF99AE_A_KIM_C_PALETTES[] =
{
    { L"Main", 0x1df7f0, 0x1df810, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 1", 0x1df810, 0x1df830, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 2", 0x1df830, 0x1df850, indexKOF99Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x1df850, 0x1df870, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 3", 0x1df870, 0x1df890, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Mode Flash", 0x1df890, 0x1df8b0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 1", 0x1df8b0, 0x1df8d0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 2", 0x1df8d0, 0x1df8f0, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Flash", 0x1df8f0, 0x1df910, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 1", 0x1df910, 0x1df930, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 2", 0x1df930, 0x1df950, indexKOF99Sprites_Kim, 0x00 },
    { L"Super Trail Palette", 0x1df950, 0x1df970, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 4", 0x1df970, 0x1df990, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 5", 0x1df990, 0x1df9b0, indexKOF99Sprites_Kim, 0x00 },
    { L"Lifebar Portrait", 0x1df9b0, 0x1df9d0 },
    { L"Character Portrait", 0x1df9d0, 0x1df9f0, indexKOF99Sprites_Kim, 0x31 },
    { L"Striker Portrait", 0x1fa1f0, 0x1fa210 },
    { L"Win Portrait", 0x1ea5f0, 0x1ea770, indexKOF99Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KIM_D_PALETTES[] =
{
    { L"Main", 0x1df9f0, 0x1dfa10, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 1", 0x1dfa10, 0x1dfa30, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 2", 0x1dfa30, 0x1dfa50, indexKOF99Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x1dfa50, 0x1dfa70, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 3", 0x1dfa70, 0x1dfa90, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Mode Flash", 0x1dfa90, 0x1dfab0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 1", 0x1dfab0, 0x1dfad0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 2", 0x1dfad0, 0x1dfaf0, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Flash", 0x1dfaf0, 0x1dfb10, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 1", 0x1dfb10, 0x1dfb30, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 2", 0x1dfb30, 0x1dfb50, indexKOF99Sprites_Kim, 0x00 },
    { L"Super Trail Palette", 0x1dfb50, 0x1dfb70, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 4", 0x1dfb70, 0x1dfb90, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 5", 0x1dfb90, 0x1dfbb0, indexKOF99Sprites_Kim, 0x00 },
    { L"Lifebar Portrait", 0x1dfbb0, 0x1dfbd0 },
    { L"Character Portrait", 0x1dfbd0, 0x1dfbf0, indexKOF99Sprites_Kim, 0x31 },
    { L"Striker Portrait", 0x1fa210, 0x1fa230 },
    { L"Win Portrait", 0x1ea770, 0x1ea8f0, indexKOF99Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KIM_AC_PALETTES[] =
{
    { L"Main", 0x2df7f0, 0x2df810, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 1", 0x2df810, 0x2df830, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 2", 0x2df830, 0x2df850, indexKOF99Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x2df850, 0x2df870, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 3", 0x2df870, 0x2df890, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Mode Flash", 0x2df890, 0x2df8b0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 1", 0x2df8b0, 0x2df8d0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 2", 0x2df8d0, 0x2df8f0, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Flash", 0x2df8f0, 0x2df910, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 1", 0x2df910, 0x2df930, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 2", 0x2df930, 0x2df950, indexKOF99Sprites_Kim, 0x00 },
    { L"Super Trail Palette", 0x2df950, 0x2df970, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 4", 0x2df970, 0x2df990, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 5", 0x2df990, 0x2df9b0, indexKOF99Sprites_Kim, 0x00 },
    { L"Lifebar Portrait", 0x2df9b0, 0x2df9d0 },
    { L"Character Portrait", 0x2df9d0, 0x2df9f0, indexKOF99Sprites_Kim, 0x31 },
    { L"Striker Portrait", 0x2fa1f0, 0x2fa210 },
    { L"Win Portrait", 0x2ea5f0, 0x2ea770, indexKOF99Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KIM_BD_PALETTES[] =
{
    { L"Main", 0x2df9f0, 0x2dfa10, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 1", 0x2dfa10, 0x2dfa30, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 2", 0x2dfa30, 0x2dfa50, indexKOF99Sprites_Kim, 0x00 },
    { L"Electric Palette", 0x2dfa50, 0x2dfa70, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 3", 0x2dfa70, 0x2dfa90, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Mode Flash", 0x2dfa90, 0x2dfab0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 1", 0x2dfab0, 0x2dfad0, indexKOF99Sprites_Kim, 0x00 },
    { L"Counter Extra 2", 0x2dfad0, 0x2dfaf0, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Flash", 0x2dfaf0, 0x2dfb10, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 1", 0x2dfb10, 0x2dfb30, indexKOF99Sprites_Kim, 0x00 },
    { L"Armor Mode Extra 2", 0x2dfb30, 0x2dfb50, indexKOF99Sprites_Kim, 0x00 },
    { L"Super Trail Palette", 0x2dfb50, 0x2dfb70, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 4", 0x2dfb70, 0x2dfb90, indexKOF99Sprites_Kim, 0x00 },
    { L"Extra 5", 0x2dfb90, 0x2dfbb0, indexKOF99Sprites_Kim, 0x00 },
    { L"Lifebar Portrait", 0x2dfbb0, 0x2dfbd0 },
    { L"Character Portrait", 0x2dfbd0, 0x2dfbf0, indexKOF99Sprites_Kim, 0x31 },
    { L"Striker Portrait", 0x2fa210, 0x2fa230 },
    { L"Win Portrait", 0x2ea770, 0x2ea8f0, indexKOF99Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_C_PALETTES[] =
{
    { L"Main", 0x1dfbf0, 0x1dfc10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x1dfc10, 0x1dfc30, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 2", 0x1dfc30, 0x1dfc50, indexKOF99Sprites_Chang, 0x00 },
    { L"Electric Palette", 0x1dfc50, 0x1dfc70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 3", 0x1dfc70, 0x1dfc90, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Mode Flash", 0x1dfc90, 0x1dfcb0, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Counter Extra 1", 0x1dfcb0, 0x1dfcd0, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Extra 2", 0x1dfcd0, 0x1dfcf0, indexKOF99Sprites_Chang, 0x00 },
    { L"Armor Mode Flash", 0x1dfcf0, 0x1dfd10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x1dfd10, 0x1dfd30, indexKOF99Sprites_Chang, 0x01 },
    { L"Armor Mode Extra 2", 0x1dfd30, 0x1dfd50, indexKOF99Sprites_Chang, 0x00 },
    { L"Super Trail Palette", 0x1dfd50, 0x1dfd70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 4", 0x1dfd70, 0x1dfd90, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 5", 0x1dfd90, 0x1dfdb0, indexKOF99Sprites_Chang, 0x00 },
    { L"Lifebar Portrait", 0x1dfdb0, 0x1dfdd0 },
    { L"Character Portrait", 0x1dfdd0, 0x1dfdf0, indexKOF99Sprites_Chang, 0x31 },
    { L"Striker Portrait", 0x1fa230, 0x1fa250 },
    { L"Win Portrait", 0x1ea8f0, 0x1eaa70, indexKOF99Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_D_PALETTES[] =
{
    { L"Main", 0x1dfdf0, 0x1dfe10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x1dfe10, 0x1dfe30, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 2", 0x1dfe30, 0x1dfe50, indexKOF99Sprites_Chang, 0x00 },
    { L"Electric Palette", 0x1dfe50, 0x1dfe70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 3", 0x1dfe70, 0x1dfe90, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Mode Flash", 0x1dfe90, 0x1dfeb0, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Counter Extra 1", 0x1dfeb0, 0x1dfed0, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Extra 2", 0x1dfed0, 0x1dfef0, indexKOF99Sprites_Chang, 0x00 },
    { L"Armor Mode Flash", 0x1dfef0, 0x1dff10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x1dff10, 0x1dff30, indexKOF99Sprites_Chang, 0x01 },
    { L"Armor Mode Extra 2", 0x1dff30, 0x1dff50, indexKOF99Sprites_Chang, 0x00 },
    { L"Super Trail Palette", 0x1dff50, 0x1dff70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 4", 0x1dff70, 0x1dff90, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 5", 0x1dff90, 0x1dffb0, indexKOF99Sprites_Chang, 0x00 },
    { L"Lifebar Portrait", 0x1dffb0, 0x1dffd0 },
    { L"Character Portrait", 0x1dffd0, 0x1dfff0, indexKOF99Sprites_Chang, 0x31 },
    { L"Striker Portrait", 0x1fa250, 0x1fa270 },
    { L"Win Portrait", 0x1eaa70, 0x1eabf0, indexKOF99Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_AC_PALETTES[] =
{
    { L"Main", 0x2dfbf0, 0x2dfc10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x2dfc10, 0x2dfc30, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 2", 0x2dfc30, 0x2dfc50, indexKOF99Sprites_Chang, 0x00 },
    { L"Electric Palette", 0x2dfc50, 0x2dfc70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 3", 0x2dfc70, 0x2dfc90, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Mode Flash", 0x2dfc90, 0x2dfcb0, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2dfcb0, 0x2dfcd0, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Extra 2", 0x2dfcd0, 0x2dfcf0, indexKOF99Sprites_Chang, 0x00 },
    { L"Armor Mode Flash", 0x2dfcf0, 0x2dfd10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2dfd10, 0x2dfd30, indexKOF99Sprites_Chang, 0x01 },
    { L"Armor Mode Extra 2", 0x2dfd30, 0x2dfd50, indexKOF99Sprites_Chang, 0x00 },
    { L"Super Trail Palette", 0x2dfd50, 0x2dfd70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 4", 0x2dfd70, 0x2dfd90, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 5", 0x2dfd90, 0x2dfdb0, indexKOF99Sprites_Chang, 0x00 },
    { L"Lifebar Portrait", 0x2dfdb0, 0x2dfdd0 },
    { L"Character Portrait", 0x2dfdd0, 0x2dfdf0, indexKOF99Sprites_Chang, 0x31 },
    { L"Striker Portrait", 0x2fa230, 0x2fa250 },
    { L"Win Portrait", 0x2ea8f0, 0x2eaa70, indexKOF99Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_BD_PALETTES[] =
{
    { L"Main", 0x2dfdf0, 0x2dfe10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 1", 0x2dfe10, 0x2dfe30, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 2", 0x2dfe30, 0x2dfe50, indexKOF99Sprites_Chang, 0x00 },
    { L"Electric Palette", 0x2dfe50, 0x2dfe70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 3", 0x2dfe70, 0x2dfe90, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Mode Flash", 0x2dfe90, 0x2dfeb0, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2dfeb0, 0x2dfed0, indexKOF99Sprites_Chang, 0x01 },
    { L"Counter Extra 2", 0x2dfed0, 0x2dfef0, indexKOF99Sprites_Chang, 0x00 },
    { L"Armor Mode Flash", 0x2dfef0, 0x2dff10, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2dff10, 0x2dff30, indexKOF99Sprites_Chang, 0x01 },
    { L"Armor Mode Extra 2", 0x2dff30, 0x2dff50, indexKOF99Sprites_Chang, 0x00 },
    { L"Super Trail Palette", 0x2dff50, 0x2dff70, indexKOF99Sprites_Chang, 0x00, &pairNext },
    { L"Extra 4", 0x2dff70, 0x2dff90, indexKOF99Sprites_Chang, 0x01 },
    { L"Extra 5", 0x2dff90, 0x2dffb0, indexKOF99Sprites_Chang, 0x00 },
    { L"Lifebar Portrait", 0x2dffb0, 0x2dffd0 },
    { L"Character Portrait", 0x2dffd0, 0x2dfff0, indexKOF99Sprites_Chang, 0x31 },
    { L"Striker Portrait", 0x2fa250, 0x2fa270 },
    { L"Win Portrait", 0x2eaa70, 0x2eabf0, indexKOF99Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHANG_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e4df0, 0x2e4e10 },
    { L"Effect 1", 0x2e4e10, 0x2e4e30 },
    { L"Effect 2", 0x2e4e30, 0x2e4e50 },
    { L"Effect 3", 0x2e4e50, 0x2e4e70 },
    { L"Effect 4", 0x2e4e70, 0x2e4e90 },
    { L"Effect 5", 0x2e4e90, 0x2e4eb0 },
    { L"Effect 6", 0x2e4eb0, 0x2e4ed0 },
    { L"Effect 7", 0x2e4ed0, 0x2e4ef0 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_C_PALETTES[] =
{
    { L"Main", 0x1dfff0, 0x1e0010, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 1", 0x1e0010, 0x1e0030, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 2", 0x1e0030, 0x1e0050, indexKOF99Sprites_Choi, 0x00 },
    { L"Electric Palette", 0x1e0050, 0x1e0070, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 3", 0x1e0070, 0x1e0090, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Mode Flash", 0x1e0090, 0x1e00b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 1", 0x1e00b0, 0x1e00d0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 2", 0x1e00d0, 0x1e00f0, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Flash", 0x1e00f0, 0x1e0110, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 1", 0x1e0110, 0x1e0130, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 2", 0x1e0130, 0x1e0150, indexKOF99Sprites_Choi, 0x00 },
    { L"Super Trail Palette", 0x1e0150, 0x1e0170, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 4", 0x1e0170, 0x1e0190, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 5", 0x1e0190, 0x1e01b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Lifebar Portrait", 0x1e01b0, 0x1e01d0 },
    { L"Character Portrait", 0x1e01d0, 0x1e01f0, indexKOF99Sprites_Choi, 0x31 },
    { L"Striker Portrait", 0x1fa270, 0x1fa290 },
    { L"Win Portrait", 0x1eabf0, 0x1ead70, indexKOF99Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_D_PALETTES[] =
{
    { L"Main", 0x1e01f0, 0x1e0210, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 1", 0x1e0210, 0x1e0230, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 2", 0x1e0230, 0x1e0250, indexKOF99Sprites_Choi, 0x00 },
    { L"Electric Palette", 0x1e0250, 0x1e0270, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 3", 0x1e0270, 0x1e0290, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Mode Flash", 0x1e0290, 0x1e02b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 1", 0x1e02b0, 0x1e02d0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 2", 0x1e02d0, 0x1e02f0, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Flash", 0x1e02f0, 0x1e0310, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 1", 0x1e0310, 0x1e0330, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 2", 0x1e0330, 0x1e0350, indexKOF99Sprites_Choi, 0x00 },
    { L"Super Trail Palette", 0x1e0350, 0x1e0370, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 4", 0x1e0370, 0x1e0390, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 5", 0x1e0390, 0x1e03b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Lifebar Portrait", 0x1e03b0, 0x1e03d0 },
    { L"Character Portrait", 0x1e03d0, 0x1e03f0, indexKOF99Sprites_Choi, 0x31 },
    { L"Striker Portrait", 0x1fa290, 0x1fa2b0 },
    { L"Win Portrait", 0x1ead70, 0x1eaef0, indexKOF99Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_AC_PALETTES[] =
{
    { L"Main", 0x2dfff0, 0x2e0010, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 1", 0x2e0010, 0x2e0030, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 2", 0x2e0030, 0x2e0050, indexKOF99Sprites_Choi, 0x00 },
    { L"Electric Palette", 0x2e0050, 0x2e0070, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 3", 0x2e0070, 0x2e0090, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Mode Flash", 0x2e0090, 0x2e00b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 1", 0x2e00b0, 0x2e00d0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 2", 0x2e00d0, 0x2e00f0, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Flash", 0x2e00f0, 0x2e0110, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0110, 0x2e0130, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0130, 0x2e0150, indexKOF99Sprites_Choi, 0x00 },
    { L"Super Trail Palette", 0x2e0150, 0x2e0170, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 4", 0x2e0170, 0x2e0190, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 5", 0x2e0190, 0x2e01b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Lifebar Portrait", 0x2e01b0, 0x2e01d0 },
    { L"Character Portrait", 0x2e01d0, 0x2e01f0, indexKOF99Sprites_Choi, 0x31 },
    { L"Striker Portrait", 0x2fa270, 0x2fa290 },
    { L"Win Portrait", 0x2eabf0, 0x2ead70, indexKOF99Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_BD_PALETTES[] =
{
    { L"Main", 0x2e01f0, 0x2e0210, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 1", 0x2e0210, 0x2e0230, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 2", 0x2e0230, 0x2e0250, indexKOF99Sprites_Choi, 0x00 },
    { L"Electric Palette", 0x2e0250, 0x2e0270, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 3", 0x2e0270, 0x2e0290, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Mode Flash", 0x2e0290, 0x2e02b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 1", 0x2e02b0, 0x2e02d0, indexKOF99Sprites_Choi, 0x00 },
    { L"Counter Extra 2", 0x2e02d0, 0x2e02f0, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Flash", 0x2e02f0, 0x2e0310, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0310, 0x2e0330, indexKOF99Sprites_Choi, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0330, 0x2e0350, indexKOF99Sprites_Choi, 0x00 },
    { L"Super Trail Palette", 0x2e0350, 0x2e0370, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 4", 0x2e0370, 0x2e0390, indexKOF99Sprites_Choi, 0x00 },
    { L"Extra 5", 0x2e0390, 0x2e03b0, indexKOF99Sprites_Choi, 0x00 },
    { L"Lifebar Portrait", 0x2e03b0, 0x2e03d0 },
    { L"Character Portrait", 0x2e03d0, 0x2e03f0, indexKOF99Sprites_Choi, 0x31 },
    { L"Striker Portrait", 0x2fa290, 0x2fa2b0 },
    { L"Win Portrait", 0x2ead70, 0x2eaef0, indexKOF99Sprites_Choi, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_CHOI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e4ff0, 0x2e5010 },
    { L"Effect 1", 0x2e5010, 0x2e5030 },
    { L"Effect 2", 0x2e5030, 0x2e5050 },
    { L"Effect 3", 0x2e5050, 0x2e5070 },
    { L"Effect 4", 0x2e5070, 0x2e5090 },
    { L"Effect 5", 0x2e5090, 0x2e50b0 },
    { L"Effect 6", 0x2e50b0, 0x2e50d0 },
    { L"Effect 7", 0x2e50d0, 0x2e50f0 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_C_PALETTES[] =
{
    { L"Main", 0x1e03f0, 0x1e0410, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 1", 0x1e0410, 0x1e0430, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 2", 0x1e0430, 0x1e0450, indexKOF99Sprites_Jhun, 0x00 },
    { L"Electric Palette", 0x1e0450, 0x1e0470, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 3", 0x1e0470, 0x1e0490, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Mode Flash", 0x1e0490, 0x1e04b0, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Counter Extra 1", 0x1e04b0, 0x1e04d0, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Extra 2", 0x1e04d0, 0x1e04f0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Armor Mode Flash", 0x1e04f0, 0x1e0510, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x1e0510, 0x1e0530, indexKOF99Sprites_Jhun, 0x01 },
    { L"Armor Mode Extra 2", 0x1e0530, 0x1e0550, indexKOF99Sprites_Jhun, 0x00 },
    { L"Super Trail Palette", 0x1e0550, 0x1e0570, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 4", 0x1e0570, 0x1e0590, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 5", 0x1e0590, 0x1e05b0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Lifebar Portrait", 0x1e05b0, 0x1e05d0 },
    { L"Character Portrait", 0x1e05d0, 0x1e05f0, indexKOF99Sprites_Jhun, 0x31 },
    { L"Striker Portrait", 0x1fa2b0, 0x1fa2d0 },
    { L"Win Portrait", 0x1eaef0, 0x1eb070, indexKOF99Sprites_Jhun, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_D_PALETTES[] =
{
    { L"Main", 0x1e05f0, 0x1e0610, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 1", 0x1e0610, 0x1e0630, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 2", 0x1e0630, 0x1e0650, indexKOF99Sprites_Jhun, 0x00 },
    { L"Electric Palette", 0x1e0650, 0x1e0670, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 3", 0x1e0670, 0x1e0690, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Mode Flash", 0x1e0690, 0x1e06b0, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Counter Extra 1", 0x1e06b0, 0x1e06d0, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Extra 2", 0x1e06d0, 0x1e06f0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Armor Mode Flash", 0x1e06f0, 0x1e0710, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x1e0710, 0x1e0730, indexKOF99Sprites_Jhun, 0x01 },
    { L"Armor Mode Extra 2", 0x1e0730, 0x1e0750, indexKOF99Sprites_Jhun, 0x00 },
    { L"Super Trail Palette", 0x1e0750, 0x1e0770, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 4", 0x1e0770, 0x1e0790, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 5", 0x1e0790, 0x1e07b0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Lifebar Portrait", 0x1e07b0, 0x1e07d0 },
    { L"Character Portrait", 0x1e07d0, 0x1e07f0, indexKOF99Sprites_Jhun, 0x31 },
    { L"Striker Portrait", 0x1fa2d0, 0x1fa2f0 },
    { L"Win Portrait", 0x1eb070, 0x1eb1f0, indexKOF99Sprites_Jhun, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_AC_PALETTES[] =
{
    { L"Main", 0x2e03f0, 0x2e0410, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 1", 0x2e0410, 0x2e0430, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 2", 0x2e0430, 0x2e0450, indexKOF99Sprites_Jhun, 0x00 },
    { L"Electric Palette", 0x2e0450, 0x2e0470, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 3", 0x2e0470, 0x2e0490, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Mode Flash", 0x2e0490, 0x2e04b0, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e04b0, 0x2e04d0, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Extra 2", 0x2e04d0, 0x2e04f0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Armor Mode Flash", 0x2e04f0, 0x2e0510, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e0510, 0x2e0530, indexKOF99Sprites_Jhun, 0x01 },
    { L"Armor Mode Extra 2", 0x2e0530, 0x2e0550, indexKOF99Sprites_Jhun, 0x00 },
    { L"Super Trail Palette", 0x2e0550, 0x2e0570, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 4", 0x2e0570, 0x2e0590, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 5", 0x2e0590, 0x2e05b0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Lifebar Portrait", 0x2e05b0, 0x2e05d0 },
    { L"Character Portrait", 0x2e05d0, 0x2e05f0, indexKOF99Sprites_Jhun, 0x31 },
    { L"Striker Portrait", 0x2fa2b0, 0x2fa2d0 },
    { L"Win Portrait", 0x2eaef0, 0x2eb070, indexKOF99Sprites_Jhun, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_BD_PALETTES[] =
{
    { L"Main", 0x2e05f0, 0x2e0610, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 1", 0x2e0610, 0x2e0630, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 2", 0x2e0630, 0x2e0650, indexKOF99Sprites_Jhun, 0x00 },
    { L"Electric Palette", 0x2e0650, 0x2e0670, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 3", 0x2e0670, 0x2e0690, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Mode Flash", 0x2e0690, 0x2e06b0, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e06b0, 0x2e06d0, indexKOF99Sprites_Jhun, 0x01 },
    { L"Counter Extra 2", 0x2e06d0, 0x2e06f0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Armor Mode Flash", 0x2e06f0, 0x2e0710, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e0710, 0x2e0730, indexKOF99Sprites_Jhun, 0x01 },
    { L"Armor Mode Extra 2", 0x2e0730, 0x2e0750, indexKOF99Sprites_Jhun, 0x00 },
    { L"Super Trail Palette", 0x2e0750, 0x2e0770, indexKOF99Sprites_Jhun, 0x00, &pairNext },
    { L"Extra 4", 0x2e0770, 0x2e0790, indexKOF99Sprites_Jhun, 0x01 },
    { L"Extra 5", 0x2e0790, 0x2e07b0, indexKOF99Sprites_Jhun, 0x00 },
    { L"Lifebar Portrait", 0x2e07b0, 0x2e07d0 },
    { L"Character Portrait", 0x2e07d0, 0x2e07f0, indexKOF99Sprites_Jhun, 0x31 },
    { L"Striker Portrait", 0x2fa2d0, 0x2fa2f0 },
    { L"Win Portrait", 0x2eb070, 0x2eb1f0, indexKOF99Sprites_Jhun, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JHUN_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e51f0, 0x2e5210 },
    { L"Effect 1", 0x2e5210, 0x2e5230 },
    { L"Effect 2", 0x2e5230, 0x2e5250 },
    { L"Effect 3", 0x2e5250, 0x2e5270 },
    { L"Effect 4", 0x2e5270, 0x2e5290 },
    { L"Effect 5", 0x2e5290, 0x2e52b0 },
    { L"Effect 6", 0x2e52b0, 0x2e52d0 },
    { L"Effect 7", 0x2e52d0, 0x2e52f0 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_C_PALETTES[] =
{
    { L"Main", 0x1e07f0, 0x1e0810, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x1e0810, 0x1e0830, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x1e0830, 0x1e0850, indexKOF99Sprites_Kyo, 0x00 },
    { L"Electric Palette", 0x1e0850, 0x1e0870, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x1e0870, 0x1e0890, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Mode Flash", 0x1e0890, 0x1e08b0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 1", 0x1e08b0, 0x1e08d0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 2", 0x1e08d0, 0x1e08f0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Flash", 0x1e08f0, 0x1e0910, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 1", 0x1e0910, 0x1e0930, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 2", 0x1e0930, 0x1e0950, indexKOF99Sprites_Kyo, 0x00 },
    { L"Super Trail Palette", 0x1e0950, 0x1e0970, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x1e0970, 0x1e0990, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 5", 0x1e0990, 0x1e09b0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Lifebar Portrait", 0x1e09b0, 0x1e09d0 },
    { L"Character Portrait", 0x1e09d0, 0x1e09f0, indexKOF99Sprites_Kyo, 0x31 },
    { L"Striker Portrait", 0x1fa2f0, 0x1fa310 },
    { L"Win Portrait", 0x1eb1f0, 0x1eb370, indexKOF99Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_D_PALETTES[] =
{
    { L"Main", 0x1e09f0, 0x1e0a10, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x1e0a10, 0x1e0a30, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x1e0a30, 0x1e0a50, indexKOF99Sprites_Kyo, 0x00 },
    { L"Electric Palette", 0x1e0a50, 0x1e0a70, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x1e0a70, 0x1e0a90, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Mode Flash", 0x1e0a90, 0x1e0ab0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 1", 0x1e0ab0, 0x1e0ad0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 2", 0x1e0ad0, 0x1e0af0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Flash", 0x1e0af0, 0x1e0b10, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 1", 0x1e0b10, 0x1e0b30, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 2", 0x1e0b30, 0x1e0b50, indexKOF99Sprites_Kyo, 0x00 },
    { L"Super Trail Palette", 0x1e0b50, 0x1e0b70, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x1e0b70, 0x1e0b90, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 5", 0x1e0b90, 0x1e0bb0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Lifebar Portrait", 0x1e0bb0, 0x1e0bd0 },
    { L"Character Portrait", 0x1e0bd0, 0x1e0bf0, indexKOF99Sprites_Kyo, 0x31 },
    { L"Striker Portrait", 0x1fa310, 0x1fa330 },
    { L"Win Portrait", 0x1eb370, 0x1eb4f0, indexKOF99Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_AC_PALETTES[] =
{
    { L"Main", 0x2e07f0, 0x2e0810, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x2e0810, 0x2e0830, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x2e0830, 0x2e0850, indexKOF99Sprites_Kyo, 0x00 },
    { L"Electric Palette", 0x2e0850, 0x2e0870, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x2e0870, 0x2e0890, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Mode Flash", 0x2e0890, 0x2e08b0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 1", 0x2e08b0, 0x2e08d0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 2", 0x2e08d0, 0x2e08f0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Flash", 0x2e08f0, 0x2e0910, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0910, 0x2e0930, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0930, 0x2e0950, indexKOF99Sprites_Kyo, 0x00 },
    { L"Super Trail Palette", 0x2e0950, 0x2e0970, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x2e0970, 0x2e0990, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 5", 0x2e0990, 0x2e09b0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Lifebar Portrait", 0x2e09b0, 0x2e09d0 },
    { L"Character Portrait", 0x2e09d0, 0x2e09f0, indexKOF99Sprites_Kyo, 0x31 },
    { L"Striker Portrait", 0x2fa2f0, 0x2fa310 },
    { L"Win Portrait", 0x2eb1f0, 0x2eb370, indexKOF99Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_BD_PALETTES[] =
{
    { L"Main", 0x2e09f0, 0x2e0a10, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 1", 0x2e0a10, 0x2e0a30, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 2", 0x2e0a30, 0x2e0a50, indexKOF99Sprites_Kyo, 0x00 },
    { L"Electric Palette", 0x2e0a50, 0x2e0a70, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 3", 0x2e0a70, 0x2e0a90, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Mode Flash", 0x2e0a90, 0x2e0ab0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 1", 0x2e0ab0, 0x2e0ad0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Counter Extra 2", 0x2e0ad0, 0x2e0af0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Flash", 0x2e0af0, 0x2e0b10, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0b10, 0x2e0b30, indexKOF99Sprites_Kyo, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0b30, 0x2e0b50, indexKOF99Sprites_Kyo, 0x00 },
    { L"Super Trail Palette", 0x2e0b50, 0x2e0b70, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 4", 0x2e0b70, 0x2e0b90, indexKOF99Sprites_Kyo, 0x00 },
    { L"Extra 5", 0x2e0b90, 0x2e0bb0, indexKOF99Sprites_Kyo, 0x00 },
    { L"Lifebar Portrait", 0x2e0bb0, 0x2e0bd0 },
    { L"Character Portrait", 0x2e0bd0, 0x2e0bf0, indexKOF99Sprites_Kyo, 0x31 },
    { L"Striker Portrait", 0x2fa310, 0x2fa330 },
    { L"Win Portrait", 0x2eb370, 0x2eb4f0, indexKOF99Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e53f0, 0x2e5410 },
    { L"Effect 1", 0x2e5410, 0x2e5430 },
    { L"Effect 2", 0x2e5430, 0x2e5450 },
    { L"Effect 3", 0x2e5450, 0x2e5470 },
    { L"Effect 4", 0x2e5470, 0x2e5490 },
    { L"Effect 5", 0x2e5490, 0x2e54b0 },
    { L"Effect 6", 0x2e54b0, 0x2e54d0 },
    { L"Effect 7", 0x2e54d0, 0x2e54f0 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_C_PALETTES[] =
{
    { L"Main", 0x1e0bf0, 0x1e0c10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 1", 0x1e0c10, 0x1e0c30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 2", 0x1e0c30, 0x1e0c50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Electric Palette", 0x1e0c50, 0x1e0c70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 3", 0x1e0c70, 0x1e0c90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Mode Flash", 0x1e0c90, 0x1e0cb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 1", 0x1e0cb0, 0x1e0cd0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 2", 0x1e0cd0, 0x1e0cf0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Flash", 0x1e0cf0, 0x1e0d10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 1", 0x1e0d10, 0x1e0d30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 2", 0x1e0d30, 0x1e0d50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Super Trail Palette", 0x1e0d50, 0x1e0d70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 4", 0x1e0d70, 0x1e0d90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 5", 0x1e0d90, 0x1e0db0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Lifebar Portrait", 0x1e0db0, 0x1e0dd0 },
    { L"Character Portrait", 0x1e0dd0, 0x1e0df0, indexKOF99Sprites_Kyo1, 0x31 },
    { L"Striker Portrait", 0x1fa330, 0x1fa350 },
    { L"Win Portrait", 0x1eb4f0, 0x1eb670, indexKOF99Sprites_Kyo1, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_D_PALETTES[] =
{
    { L"Main", 0x1e0df0, 0x1e0e10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 1", 0x1e0e10, 0x1e0e30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 2", 0x1e0e30, 0x1e0e50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Electric Palette", 0x1e0e50, 0x1e0e70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 3", 0x1e0e70, 0x1e0e90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Mode Flash", 0x1e0e90, 0x1e0eb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 1", 0x1e0eb0, 0x1e0ed0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 2", 0x1e0ed0, 0x1e0ef0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Flash", 0x1e0ef0, 0x1e0f10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 1", 0x1e0f10, 0x1e0f30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 2", 0x1e0f30, 0x1e0f50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Super Trail Palette", 0x1e0f50, 0x1e0f70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 4", 0x1e0f70, 0x1e0f90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 5", 0x1e0f90, 0x1e0fb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Lifebar Portrait", 0x1e0fb0, 0x1e0fd0 },
    { L"Character Portrait", 0x1e0fd0, 0x1e0ff0, indexKOF99Sprites_Kyo1, 0x31 },
    { L"Striker Portrait", 0x1fa350, 0x1fa370 },
    { L"Win Portrait", 0x1eb670, 0x1eb7f0, indexKOF99Sprites_Kyo1, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_AC_PALETTES[] =
{
    { L"Main", 0x2e0bf0, 0x2e0c10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 1", 0x2e0c10, 0x2e0c30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 2", 0x2e0c30, 0x2e0c50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Electric Palette", 0x2e0c50, 0x2e0c70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 3", 0x2e0c70, 0x2e0c90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Mode Flash", 0x2e0c90, 0x2e0cb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 1", 0x2e0cb0, 0x2e0cd0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 2", 0x2e0cd0, 0x2e0cf0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Flash", 0x2e0cf0, 0x2e0d10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0d10, 0x2e0d30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0d30, 0x2e0d50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Super Trail Palette", 0x2e0d50, 0x2e0d70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 4", 0x2e0d70, 0x2e0d90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 5", 0x2e0d90, 0x2e0db0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Lifebar Portrait", 0x2e0db0, 0x2e0dd0 },
    { L"Character Portrait", 0x2e0dd0, 0x2e0df0, indexKOF99Sprites_Kyo1, 0x31 },
    { L"Striker Portrait", 0x2fa330, 0x2fa350 },
    { L"Win Portrait", 0x2eb4f0, 0x2eb670, indexKOF99Sprites_Kyo1, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_BD_PALETTES[] =
{
    { L"Main", 0x2e0df0, 0x2e0e10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 1", 0x2e0e10, 0x2e0e30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 2", 0x2e0e30, 0x2e0e50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Electric Palette", 0x2e0e50, 0x2e0e70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 3", 0x2e0e70, 0x2e0e90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Mode Flash", 0x2e0e90, 0x2e0eb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 1", 0x2e0eb0, 0x2e0ed0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Counter Extra 2", 0x2e0ed0, 0x2e0ef0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Flash", 0x2e0ef0, 0x2e0f10, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 1", 0x2e0f10, 0x2e0f30, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Armor Mode Extra 2", 0x2e0f30, 0x2e0f50, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Super Trail Palette", 0x2e0f50, 0x2e0f70, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 4", 0x2e0f70, 0x2e0f90, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Extra 5", 0x2e0f90, 0x2e0fb0, indexKOF99Sprites_Kyo1, 0x00 },
    { L"Lifebar Portrait", 0x2e0fb0, 0x2e0fd0 },
    { L"Character Portrait", 0x2e0fd0, 0x2e0ff0, indexKOF99Sprites_Kyo1, 0x31 },
    { L"Striker Portrait", 0x2fa350, 0x2fa370 },
    { L"Win Portrait", 0x2eb670, 0x2eb7f0, indexKOF99Sprites_Kyo1, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO1_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e55f0, 0x2e5610 },
    { L"Effect 1", 0x2e5610, 0x2e5630 },
    { L"Effect 2", 0x2e5630, 0x2e5650 },
    { L"Effect 3", 0x2e5650, 0x2e5670 },
    { L"Effect 4", 0x2e5670, 0x2e5690 },
    { L"Effect 5", 0x2e5690, 0x2e56b0 },
    { L"Effect 6", 0x2e56b0, 0x2e56d0 },
    { L"Effect 7", 0x2e56d0, 0x2e56f0 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_C_PALETTES[] =
{
    { L"Main", 0x1e0ff0, 0x1e1010, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 1", 0x1e1010, 0x1e1030, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 2", 0x1e1030, 0x1e1050, indexKOF99Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x1e1050, 0x1e1070, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 3", 0x1e1070, 0x1e1090, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Mode Flash", 0x1e1090, 0x1e10b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 1", 0x1e10b0, 0x1e10d0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 2", 0x1e10d0, 0x1e10f0, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Flash", 0x1e10f0, 0x1e1110, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 1", 0x1e1110, 0x1e1130, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 2", 0x1e1130, 0x1e1150, indexKOF99Sprites_Iori, 0x00 },
    { L"Super Trail Palette", 0x1e1150, 0x1e1170, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 4", 0x1e1170, 0x1e1190, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 5", 0x1e1190, 0x1e11b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Lifebar Portrait", 0x1e11b0, 0x1e11d0 },
    { L"Character Portrait", 0x1e11d0, 0x1e11f0, indexKOF99Sprites_Iori, 0x31 },
    { L"Striker Portrait", 0x1fa370, 0x1fa390 },
    { L"Win Portrait", 0x1eb7f0, 0x1eb970, indexKOF99Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_D_PALETTES[] =
{
    { L"Main", 0x1e11f0, 0x1e1210, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 1", 0x1e1210, 0x1e1230, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 2", 0x1e1230, 0x1e1250, indexKOF99Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x1e1250, 0x1e1270, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 3", 0x1e1270, 0x1e1290, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Mode Flash", 0x1e1290, 0x1e12b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 1", 0x1e12b0, 0x1e12d0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 2", 0x1e12d0, 0x1e12f0, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Flash", 0x1e12f0, 0x1e1310, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 1", 0x1e1310, 0x1e1330, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 2", 0x1e1330, 0x1e1350, indexKOF99Sprites_Iori, 0x00 },
    { L"Super Trail Palette", 0x1e1350, 0x1e1370, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 4", 0x1e1370, 0x1e1390, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 5", 0x1e1390, 0x1e13b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Lifebar Portrait", 0x1e13b0, 0x1e13d0 },
    { L"Character Portrait", 0x1e13d0, 0x1e13f0, indexKOF99Sprites_Iori, 0x31 },
    { L"Striker Portrait", 0x1fa390, 0x1fa3b0 },
    { L"Win Portrait", 0x1eb970, 0x1ebaf0, indexKOF99Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_AC_PALETTES[] =
{
    { L"Main", 0x2e0ff0, 0x2e1010, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 1", 0x2e1010, 0x2e1030, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 2", 0x2e1030, 0x2e1050, indexKOF99Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x2e1050, 0x2e1070, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 3", 0x2e1070, 0x2e1090, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Mode Flash", 0x2e1090, 0x2e10b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 1", 0x2e10b0, 0x2e10d0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 2", 0x2e10d0, 0x2e10f0, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Flash", 0x2e10f0, 0x2e1110, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1110, 0x2e1130, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1130, 0x2e1150, indexKOF99Sprites_Iori, 0x00 },
    { L"Super Trail Palette", 0x2e1150, 0x2e1170, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 4", 0x2e1170, 0x2e1190, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 5", 0x2e1190, 0x2e11b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Lifebar Portrait", 0x2e11b0, 0x2e11d0 },
    { L"Character Portrait", 0x2e11d0, 0x2e11f0, indexKOF99Sprites_Iori, 0x31 },
    { L"Striker Portrait", 0x2fa370, 0x2fa390 },
    { L"Win Portrait", 0x2eb7f0, 0x2eb970, indexKOF99Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_BD_PALETTES[] =
{
    { L"Main", 0x2e11f0, 0x2e1210, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 1", 0x2e1210, 0x2e1230, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 2", 0x2e1230, 0x2e1250, indexKOF99Sprites_Iori, 0x00 },
    { L"Electric Palette", 0x2e1250, 0x2e1270, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 3", 0x2e1270, 0x2e1290, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Mode Flash", 0x2e1290, 0x2e12b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 1", 0x2e12b0, 0x2e12d0, indexKOF99Sprites_Iori, 0x00 },
    { L"Counter Extra 2", 0x2e12d0, 0x2e12f0, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Flash", 0x2e12f0, 0x2e1310, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1310, 0x2e1330, indexKOF99Sprites_Iori, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1330, 0x2e1350, indexKOF99Sprites_Iori, 0x00 },
    { L"Super Trail Palette", 0x2e1350, 0x2e1370, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 4", 0x2e1370, 0x2e1390, indexKOF99Sprites_Iori, 0x00 },
    { L"Extra 5", 0x2e1390, 0x2e13b0, indexKOF99Sprites_Iori, 0x00 },
    { L"Lifebar Portrait", 0x2e13b0, 0x2e13d0 },
    { L"Character Portrait", 0x2e13d0, 0x2e13f0, indexKOF99Sprites_Iori, 0x31 },
    { L"Striker Portrait", 0x2fa390, 0x2fa3b0 },
    { L"Win Portrait", 0x2eb970, 0x2ebaf0, indexKOF99Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_IORI_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e57f0, 0x2e5810 },
    { L"Effect 1", 0x2e5810, 0x2e5830 },
    { L"Effect 2", 0x2e5830, 0x2e5850 },
    { L"Effect 3", 0x2e5850, 0x2e5870 },
    { L"Effect 4", 0x2e5870, 0x2e5890 },
    { L"Effect 5", 0x2e5890, 0x2e58b0 },
    { L"Effect 6", 0x2e58b0, 0x2e58d0 },
    { L"Effect 7", 0x2e58d0, 0x2e58f0 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_C_PALETTES[] =
{
    { L"Main", 0x1e13f0, 0x1e1410, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 1", 0x1e1410, 0x1e1430, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 2", 0x1e1430, 0x1e1450, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Electric Palette", 0x1e1450, 0x1e1470, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 3", 0x1e1470, 0x1e1490, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Mode Flash", 0x1e1490, 0x1e14b0, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Counter Extra 1", 0x1e14b0, 0x1e14d0, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Extra 2", 0x1e14d0, 0x1e14f0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x1e14f0, 0x1e1510, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x1e1510, 0x1e1530, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Armor Mode Extra 2", 0x1e1530, 0x1e1550, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Super Trail Palette", 0x1e1550, 0x1e1570, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 4", 0x1e1570, 0x1e1590, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 5", 0x1e1590, 0x1e15b0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x1e15b0, 0x1e15d0 },
    { L"Character Portrait", 0x1e15d0, 0x1e15f0, indexKOF99Sprites_JacketKrizalid, 0x31 },
    { L"Striker Portrait", 0x1fa3b0, 0x1fa3d0 },
    { L"Win Portrait", 0x1ebaf0, 0x1ebc70, indexKOF99Sprites_JacketKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_D_PALETTES[] =
{
    { L"Main", 0x1e15f0, 0x1e1610, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 1", 0x1e1610, 0x1e1630, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 2", 0x1e1630, 0x1e1650, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Electric Palette", 0x1e1650, 0x1e1670, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 3", 0x1e1670, 0x1e1690, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Mode Flash", 0x1e1690, 0x1e16b0, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Counter Extra 1", 0x1e16b0, 0x1e16d0, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Extra 2", 0x1e16d0, 0x1e16f0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x1e16f0, 0x1e1710, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x1e1710, 0x1e1730, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Armor Mode Extra 2", 0x1e1730, 0x1e1750, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Super Trail Palette", 0x1e1750, 0x1e1770, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 4", 0x1e1770, 0x1e1790, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 5", 0x1e1790, 0x1e17b0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x1e17b0, 0x1e17d0 },
    { L"Character Portrait", 0x1e17d0, 0x1e17f0, indexKOF99Sprites_JacketKrizalid, 0x31 },
    { L"Striker Portrait", 0x1fa3d0, 0x1fa3f0 },
    { L"Win Portrait", 0x1ebc70, 0x1ebdf0, indexKOF99Sprites_JacketKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_AC_PALETTES[] =
{
    { L"Main", 0x2e13f0, 0x2e1410, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 1", 0x2e1410, 0x2e1430, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 2", 0x2e1430, 0x2e1450, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1450, 0x2e1470, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 3", 0x2e1470, 0x2e1490, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Mode Flash", 0x2e1490, 0x2e14b0, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e14b0, 0x2e14d0, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Extra 2", 0x2e14d0, 0x2e14f0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e14f0, 0x2e1510, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e1510, 0x2e1530, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Armor Mode Extra 2", 0x2e1530, 0x2e1550, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1550, 0x2e1570, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 4", 0x2e1570, 0x2e1590, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 5", 0x2e1590, 0x2e15b0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e15b0, 0x2e15d0 },
    { L"Character Portrait", 0x2e15d0, 0x2e15f0, indexKOF99Sprites_JacketKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa3b0, 0x2fa3d0 },
    { L"Win Portrait", 0x2ebaf0, 0x2ebc70, indexKOF99Sprites_JacketKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_BD_PALETTES[] =
{
    { L"Main", 0x2e15f0, 0x2e1610, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 1", 0x2e1610, 0x2e1630, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 2", 0x2e1630, 0x2e1650, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1650, 0x2e1670, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 3", 0x2e1670, 0x2e1690, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Mode Flash", 0x2e1690, 0x2e16b0, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Counter Extra 1", 0x2e16b0, 0x2e16d0, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Counter Extra 2", 0x2e16d0, 0x2e16f0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e16f0, 0x2e1710, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Armor Mode Extra 1", 0x2e1710, 0x2e1730, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Armor Mode Extra 2", 0x2e1730, 0x2e1750, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1750, 0x2e1770, indexKOF99Sprites_JacketKrizalid, 0x00, &pairNext },
    { L"Extra 4", 0x2e1770, 0x2e1790, indexKOF99Sprites_JacketKrizalid, 0x01 },
    { L"Extra 5", 0x2e1790, 0x2e17b0, indexKOF99Sprites_JacketKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e17b0, 0x2e17d0 },
    { L"Character Portrait", 0x2e17d0, 0x2e17f0, indexKOF99Sprites_JacketKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa3d0, 0x2fa3f0 },
    { L"Win Portrait", 0x2ebc70, 0x2ebdf0, indexKOF99Sprites_JacketKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_JACKETKRIZALID_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e59f0, 0x2e5a10 },
    { L"Effect 1", 0x2e5a10, 0x2e5a30 },
    { L"Effect 2", 0x2e5a30, 0x2e5a50 },
    { L"Effect 3", 0x2e5a50, 0x2e5a70 },
    { L"Effect 4", 0x2e5a70, 0x2e5a90 },
    { L"Effect 5", 0x2e5a90, 0x2e5ab0 },
    { L"Effect 6", 0x2e5ab0, 0x2e5ad0 },
    { L"Effect 7", 0x2e5ad0, 0x2e5af0 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_C_PALETTES[] =
{
    { L"Main", 0x1e17f0, 0x1e1810, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 1", 0x1e1810, 0x1e1830, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 2", 0x1e1830, 0x1e1850, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Electric Palette", 0x1e1850, 0x1e1870, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 3", 0x1e1870, 0x1e1890, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Mode Flash", 0x1e1890, 0x1e18b0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 1", 0x1e18b0, 0x1e18d0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 2", 0x1e18d0, 0x1e18f0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x1e18f0, 0x1e1910, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 1", 0x1e1910, 0x1e1930, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 2", 0x1e1930, 0x1e1950, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Super Trail Palette", 0x1e1950, 0x1e1970, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 4", 0x1e1970, 0x1e1990, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 5", 0x1e1990, 0x1e19b0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x1e19b0, 0x1e19d0 },
    { L"Character Portrait", 0x1e19d0, 0x1e19f0, indexKOF99Sprites_BossKrizalid, 0x31 },
    { L"Striker Portrait", 0x1fa3f0, 0x1fa410 },
    { L"Win Portrait", 0x1ebdf0, 0x1ebf70, indexKOF99Sprites_BossKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_D_PALETTES[] =
{
    { L"Main", 0x1e19f0, 0x1e1a10, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 1", 0x1e1a10, 0x1e1a30, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 2", 0x1e1a30, 0x1e1a50, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Electric Palette", 0x1e1a50, 0x1e1a70, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 3", 0x1e1a70, 0x1e1a90, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Mode Flash", 0x1e1a90, 0x1e1ab0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 1", 0x1e1ab0, 0x1e1ad0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 2", 0x1e1ad0, 0x1e1af0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x1e1af0, 0x1e1b10, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 1", 0x1e1b10, 0x1e1b30, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 2", 0x1e1b30, 0x1e1b50, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Super Trail Palette", 0x1e1b50, 0x1e1b70, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 4", 0x1e1b70, 0x1e1b90, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 5", 0x1e1b90, 0x1e1bb0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x1e1bb0, 0x1e1bd0 },
    { L"Character Portrait", 0x1e1bd0, 0x1e1bf0, indexKOF99Sprites_BossKrizalid, 0x31 },
    { L"Striker Portrait", 0x1fa410, 0x1fa430 },
    { L"Win Portrait", 0x1ebf70, 0x1ec0f0, indexKOF99Sprites_BossKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_AC_PALETTES[] =
{
    { L"Main", 0x2e17f0, 0x2e1810, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 1", 0x2e1810, 0x2e1830, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 2", 0x2e1830, 0x2e1850, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1850, 0x2e1870, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 3", 0x2e1870, 0x2e1890, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Mode Flash", 0x2e1890, 0x2e18b0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 1", 0x2e18b0, 0x2e18d0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 2", 0x2e18d0, 0x2e18f0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e18f0, 0x2e1910, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1910, 0x2e1930, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1930, 0x2e1950, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1950, 0x2e1970, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 4", 0x2e1970, 0x2e1990, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 5", 0x2e1990, 0x2e19b0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e19b0, 0x2e19d0 },
    { L"Character Portrait", 0x2e19d0, 0x2e19f0, indexKOF99Sprites_BossKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa3f0, 0x2fa410 },
    { L"Win Portrait", 0x2ebdf0, 0x2ebf70, indexKOF99Sprites_BossKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_BD_PALETTES[] =
{
    { L"Main", 0x2e19f0, 0x2e1a10, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 1", 0x2e1a10, 0x2e1a30, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 2", 0x2e1a30, 0x2e1a50, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Electric Palette", 0x2e1a50, 0x2e1a70, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 3", 0x2e1a70, 0x2e1a90, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Mode Flash", 0x2e1a90, 0x2e1ab0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 1", 0x2e1ab0, 0x2e1ad0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Counter Extra 2", 0x2e1ad0, 0x2e1af0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Flash", 0x2e1af0, 0x2e1b10, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 1", 0x2e1b10, 0x2e1b30, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Armor Mode Extra 2", 0x2e1b30, 0x2e1b50, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Super Trail Palette", 0x2e1b50, 0x2e1b70, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 4", 0x2e1b70, 0x2e1b90, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Extra 5", 0x2e1b90, 0x2e1bb0, indexKOF99Sprites_BossKrizalid, 0x00 },
    { L"Lifebar Portrait", 0x2e1bb0, 0x2e1bd0 },
    { L"Character Portrait", 0x2e1bd0, 0x2e1bf0, indexKOF99Sprites_BossKrizalid, 0x31 },
    { L"Striker Portrait", 0x2fa410, 0x2fa430 },
    { L"Win Portrait", 0x2ebf70, 0x2ec0f0, indexKOF99Sprites_BossKrizalid, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_BOSSKRIZALID_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2e5bf0, 0x2e5c10 },
    { L"Effect 1", 0x2e5c10, 0x2e5c30 },
    { L"Effect 2", 0x2e5c30, 0x2e5c50 },
    { L"Effect 3", 0x2e5c50, 0x2e5c70 },
    { L"Effect 4", 0x2e5c70, 0x2e5c90 },
    { L"Effect 5", 0x2e5c90, 0x2e5cb0 },
    { L"Effect 6", 0x2e5cb0, 0x2e5cd0 },
    { L"Effect 7", 0x2e5cd0, 0x2e5cf0 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_C_PALETTES[] =
{
    { L"Main", 0x1fb1f0, 0x1fb210, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 1", 0x1fb210, 0x1fb230, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 2", 0x1fb230, 0x1fb250, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Electric Palette", 0x1fb250, 0x1fb270, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 3", 0x1fb270, 0x1fb290, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Mode Flash", 0x1fb290, 0x1fb2b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 1", 0x1fb2b0, 0x1fb2d0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 2", 0x1fb2d0, 0x1fb2f0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Flash", 0x1fb2f0, 0x1fb310, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 1", 0x1fb310, 0x1fb330, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 2", 0x1fb330, 0x1fb350, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Super Trail Palette", 0x1fb350, 0x1fb370, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 4", 0x1fb370, 0x1fb390, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 5", 0x1fb390, 0x1fb3b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Lifebar Portrait", 0x1fb3b0, 0x1fb3d0 },
    { L"Character Portrait", 0x1fb3d0, 0x1fb3f0, indexKOF99Sprites_Kyo2, 0x31 },
    { L"Striker Portrait", 0x1fbaf0, 0x1fbb10 },
    { L"Win Portrait", 0x1fb7f0, 0x1fb970, indexKOF99Sprites_Kyo2, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_D_PALETTES[] =
{
    { L"Main", 0x1fb3f0, 0x1fb410, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 1", 0x1fb410, 0x1fb430, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 2", 0x1fb430, 0x1fb450, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Electric Palette", 0x1fb450, 0x1fb470, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 3", 0x1fb470, 0x1fb490, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Mode Flash", 0x1fb490, 0x1fb4b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 1", 0x1fb4b0, 0x1fb4d0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 2", 0x1fb4d0, 0x1fb4f0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Flash", 0x1fb4f0, 0x1fb510, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 1", 0x1fb510, 0x1fb530, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 2", 0x1fb530, 0x1fb550, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Super Trail Palette", 0x1fb550, 0x1fb570, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 4", 0x1fb570, 0x1fb590, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 5", 0x1fb590, 0x1fb5b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Lifebar Portrait", 0x1fb5b0, 0x1fb5d0 },
    { L"Character Portrait", 0x1fb5d0, 0x1fb5f0, indexKOF99Sprites_Kyo2, 0x31 },
    { L"Striker Portrait", 0x1fbb10, 0x1fbb30 },
    { L"Win Portrait", 0x1fb970, 0x1fbaf0, indexKOF99Sprites_Kyo2, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_AC_PALETTES[] =
{
    { L"Main", 0x2fb1f0, 0x2fb210, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 1", 0x2fb210, 0x2fb230, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 2", 0x2fb230, 0x2fb250, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Electric Palette", 0x2fb250, 0x2fb270, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 3", 0x2fb270, 0x2fb290, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Mode Flash", 0x2fb290, 0x2fb2b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 1", 0x2fb2b0, 0x2fb2d0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 2", 0x2fb2d0, 0x2fb2f0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Flash", 0x2fb2f0, 0x2fb310, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 1", 0x2fb310, 0x2fb330, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 2", 0x2fb330, 0x2fb350, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Super Trail Palette", 0x2fb350, 0x2fb370, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 4", 0x2fb370, 0x2fb390, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 5", 0x2fb390, 0x2fb3b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Lifebar Portrait", 0x2fb3b0, 0x2fb3d0 },
    { L"Character Portrait", 0x2fb3d0, 0x2fb3f0, indexKOF99Sprites_Kyo2, 0x31 },
    { L"Striker Portrait", 0x2fbaf0, 0x2fbb10 },
    { L"Win Portrait", 0x2fb7f0, 0x2fb970, indexKOF99Sprites_Kyo2, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_BD_PALETTES[] =
{
    { L"Main", 0x2fb3f0, 0x2fb410, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 1", 0x2fb410, 0x2fb430, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 2", 0x2fb430, 0x2fb450, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Electric Palette", 0x2fb450, 0x2fb470, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 3", 0x2fb470, 0x2fb490, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Mode Flash", 0x2fb490, 0x2fb4b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 1", 0x2fb4b0, 0x2fb4d0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Counter Extra 2", 0x2fb4d0, 0x2fb4f0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Flash", 0x2fb4f0, 0x2fb510, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 1", 0x2fb510, 0x2fb530, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Armor Mode Extra 2", 0x2fb530, 0x2fb550, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Super Trail Palette", 0x2fb550, 0x2fb570, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 4", 0x2fb570, 0x2fb590, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Extra 5", 0x2fb590, 0x2fb5b0, indexKOF99Sprites_Kyo2, 0x00 },
    { L"Lifebar Portrait", 0x2fb5b0, 0x2fb5d0 },
    { L"Character Portrait", 0x2fb5d0, 0x2fb5f0, indexKOF99Sprites_Kyo2, 0x31 },
    { L"Striker Portrait", 0x2fbb10, 0x2fbb30 },
    { L"Win Portrait", 0x2fb970, 0x2fbaf0, indexKOF99Sprites_Kyo2, 0x30 },
};

const sGame_PaletteDataset KOF99AE_A_KYO2_EFFECT_PALETTES[] =
{
    { L"Effect 0", 0x2fb5f0, 0x2fb610 },
    { L"Effect 1", 0x2fb610, 0x2fb630 },
    { L"Effect 2", 0x2fb630, 0x2fb650 },
    { L"Effect 3", 0x2fb650, 0x2fb670 },
    { L"Effect 4", 0x2fb670, 0x2fb690 },
    { L"Effect 5", 0x2fb690, 0x2fb6b0 },
    { L"Effect 6", 0x2fb6b0, 0x2fb6d0 },
    { L"Effect 7", 0x2fb6d0, 0x2fb6f0 },
};

const sDescTreeNode KOF99AE_A_P3_K_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_C_PALETTES, ARRAYSIZE(KOF99AE_A_K_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_D_PALETTES, ARRAYSIZE(KOF99AE_A_K_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_AC_PALETTES, ARRAYSIZE(KOF99AE_A_K_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_BD_PALETTES, ARRAYSIZE(KOF99AE_A_K_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_K_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_K_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_MAXIMA_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_C_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_D_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_AC_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_BD_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAXIMA_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_MAXIMA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_BENIMARU_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_C_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_D_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_AC_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_BD_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BENIMARU_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_BENIMARU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_SHINGO_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_SHINGO_C_PALETTES, ARRAYSIZE(KOF99AE_A_SHINGO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_SHINGO_D_PALETTES, ARRAYSIZE(KOF99AE_A_SHINGO_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_SHINGO_AC_PALETTES, ARRAYSIZE(KOF99AE_A_SHINGO_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_SHINGO_BD_PALETTES, ARRAYSIZE(KOF99AE_A_SHINGO_BD_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_TERRY_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_C_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_D_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_AC_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_BD_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TERRY_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_TERRY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_ANDY_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_C_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_D_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_AC_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_BD_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ANDY_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_ANDY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_JOE_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_C_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_D_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_AC_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_BD_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JOE_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_JOE_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_MAI_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_C_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_D_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_AC_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_BD_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_MAI_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_MAI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_RYO_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_C_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_D_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_AC_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_BD_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RYO_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_RYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_ROBERT_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_C_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_D_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_AC_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_BD_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ROBERT_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_ROBERT_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_YURI_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_C_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_D_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_AC_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_BD_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_YURI_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_YURI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_TAKUMA_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_C_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_D_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_AC_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_BD_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_TAKUMA_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_TAKUMA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_LEONA_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_C_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_D_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_AC_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_BD_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_LEONA_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_LEONA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_RALF_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RALF_C_PALETTES, ARRAYSIZE(KOF99AE_A_RALF_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RALF_D_PALETTES, ARRAYSIZE(KOF99AE_A_RALF_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RALF_AC_PALETTES, ARRAYSIZE(KOF99AE_A_RALF_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_RALF_BD_PALETTES, ARRAYSIZE(KOF99AE_A_RALF_BD_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_CLARK_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CLARK_C_PALETTES, ARRAYSIZE(KOF99AE_A_CLARK_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CLARK_D_PALETTES, ARRAYSIZE(KOF99AE_A_CLARK_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CLARK_AC_PALETTES, ARRAYSIZE(KOF99AE_A_CLARK_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CLARK_BD_PALETTES, ARRAYSIZE(KOF99AE_A_CLARK_BD_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_WHIP_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_C_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_D_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_AC_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_BD_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_WHIP_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_WHIP_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_ATHENA_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_C_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_D_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_AC_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_BD_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_ATHENA_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_ATHENA_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KENSOU_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_C_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_D_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KENSOU_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_KENSOU_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_CHIN_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_C_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_D_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_AC_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_BD_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHIN_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_CHIN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_BAO_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_C_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_D_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_AC_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_BD_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BAO_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_BAO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KING_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_C_PALETTES, ARRAYSIZE(KOF99AE_A_KING_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_D_PALETTES, ARRAYSIZE(KOF99AE_A_KING_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KING_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KING_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KING_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_KING_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_BLUEMARY_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_C_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_D_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_AC_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_BD_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BLUEMARY_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_BLUEMARY_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KASUMI_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_C_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_D_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KASUMI_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_KASUMI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_XIANGFEI_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_C_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_D_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_AC_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_BD_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_XIANGFEI_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_XIANGFEI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KIM_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KIM_C_PALETTES, ARRAYSIZE(KOF99AE_A_KIM_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KIM_D_PALETTES, ARRAYSIZE(KOF99AE_A_KIM_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KIM_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KIM_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KIM_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KIM_BD_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_CHANG_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_C_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_D_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_AC_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_BD_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHANG_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_CHANG_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_CHOI_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_C_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_D_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_AC_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_BD_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_CHOI_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_CHOI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_JHUN_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_C_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_D_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_AC_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_BD_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JHUN_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_JHUN_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KYO_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_C_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_D_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_KYO_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KYO1_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_C_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_D_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO1_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_KYO1_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_IORI_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_C_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_D_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_AC_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_BD_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_IORI_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_IORI_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_JACKETKRIZALID_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_C_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_D_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_AC_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_BD_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_JACKETKRIZALID_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_JACKETKRIZALID_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_BOSSKRIZALID_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_C_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_D_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_AC_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_BD_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BOSSKRIZALID_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_BOSSKRIZALID_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_KYO2_COLLECTION[] =
{
    { L"C", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_C_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_D_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_D_PALETTES) },
    { L"AC", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_AC_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_AC_PALETTES) },
    { L"BD", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_BD_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_BD_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF99AE_A_KYO2_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_KYO2_EFFECT_PALETTES) },
};

const sDescTreeNode KOF99AE_A_P3_UNITS[] =
{
    { L"K'", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_K_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_K_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_MAXIMA_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_MAXIMA_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_BENIMARU_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_BENIMARU_COLLECTION) },
    { L"Shingo", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_SHINGO_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_SHINGO_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_TERRY_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_ANDY_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_JOE_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_JOE_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_MAI_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_MAI_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_RYO_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_ROBERT_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_ROBERT_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_YURI_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_YURI_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_TAKUMA_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_TAKUMA_COLLECTION) },
    { L"Leona", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_LEONA_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_LEONA_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_RALF_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_CLARK_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_CLARK_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_WHIP_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_WHIP_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_ATHENA_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KENSOU_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_CHIN_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_CHIN_COLLECTION) },
    { L"Bao", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_BAO_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_BAO_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KING_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KING_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_BLUEMARY_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_BLUEMARY_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KASUMI_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KASUMI_COLLECTION) },
    { L"Xiangfei", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_XIANGFEI_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_XIANGFEI_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KIM_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_CHANG_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_CHOI_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_CHOI_COLLECTION) },
    { L"Jhun", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_JHUN_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_JHUN_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KYO_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KYO_COLLECTION) },
    { L"Kyo-1", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KYO1_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KYO1_COLLECTION) },
    { L"Iori", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_IORI_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_IORI_COLLECTION) },
    { L"Jacket Krizalid", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_JACKETKRIZALID_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_JACKETKRIZALID_COLLECTION) },
    { L"Boss Krizalid", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_BOSSKRIZALID_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_BOSSKRIZALID_COLLECTION) },
    { L"Kyo-2", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P3_KYO2_COLLECTION, ARRAYSIZE(KOF99AE_A_P3_KYO2_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KOF99AE_A_BONUS_COLLECTION, ARRAYSIZE(KOF99AE_A_BONUS_COLLECTION) },
};

constexpr auto KOF99AE_A_P2_NUMUNIT = ARRAYSIZE(KOF99AE_A_P2_UNITS);
#define KOF99AE_A_P2_EXTRALOC KOF99AE_A_P2_NUMUNIT

constexpr auto KOF99AE_A_P3_NUMUNIT = ARRAYSIZE(KOF99AE_A_P3_UNITS);
#define KOF99AE_A_P3_EXTRALOC KOF99AE_A_P3_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF99AE_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

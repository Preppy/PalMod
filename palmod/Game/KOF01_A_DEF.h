#pragma once

// This is mostly auto-generated using DumpPaletteHeaders

const UINT16 KOF01_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_K,
    indexKOFSprites_02UM_Maxima,
    indexKOFSprites_02UM_Whip,
    indexKOFSprites_02UM_Lin,
    indexKOFSprites_02UM_KyoKusa,
    indexKOFSprites_02UM_Benimaru,
    indexKOF03Sprites_Goro,
    indexKOFSprites_02UM_Shingo,
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_Vanessa,
    indexKOFSprites_02UM_Seth,
    indexKOFSprites_02UM_Ramon,
    indexKOFSprites_02UM_Leona,
    indexKOFSprites_02UM_Ralf,
    indexKOFSprites_02UM_Clark,
    indexKOFSprites_02UM_Terry,
    indexKOFSprites_02UM_Andy,
    indexKOFSprites_02UM_Joe,
    indexKOFSprites_02UM_BlueMary,
    indexKOFSprites_02UM_Ryo,
    indexKOFSprites_02UM_Robert,
    indexKOFSprites_02UM_Yuri,
    indexKOFSprites_02UM_Takuma,
    indexKOFSprites_02UM_King,
    indexKOFSprites_02UM_Mai,
    indexKOFSprites_02UM_Hinako,
    indexKOF01Sprites_Xiangfei,
    indexKOFSprites_02UM_Kula,
    indexKOFSprites_02UM_K9999,
    indexKOFSprites_02UM_Angel,
    indexKOFSprites_02UM_Kensou,
    indexKOFSprites_02UM_Chin,
    indexKOFSprites_02UM_Kim,
    indexKOFSprites_02UM_Chang,
    indexKOFSprites_02UM_Choi,
    indexKOFSprites_02UM_MayLee,
    indexKOFSprites_02UM_CloneZero,
    indexKOFSprites_02UM_Igniz,
    indexKOFSprites_02UM_Daimon,
    indexKOFSprites_02UM_Bao,
    indexKOFSprites_02UM_Foxy,
    indexKOFSprites_02UM_Athena,
    indexKOFSprites_02UM_ZeroOG,

    indexKOF01Sprites_Athena,       // 0x147
    indexKOF01Sprites_Bao,          // 0x148
    indexKOF01Sprites_Foxy,         // 0x149

    indexKOF01Sprites_Andy,         // 0x1af
    indexKOF01Sprites_Angel,        // 0x1b0
    // indexKOF01Sprites_Athena,    // 0x147
    // indexKOF01Sprites_Bao,       // 0x148
    indexKOF01Sprites_Benimaru,     // 0x1b1
    indexKOF01Sprites_BlueMary,     // 0x1b2
    indexKOF01Sprites_Chang,        // 0x1b3
    indexKOF01Sprites_Chin,         // 0x1b4
    indexKOF01Sprites_Choi,         // 0x1b5
    indexKOF01Sprites_Clark,        // 0x1b6
    // indexKOF01Sprites_Foxy,      // 0x149
    indexKOF01Sprites_GoroDaimon,   // 0x1b7
    indexKOF01Sprites_Heidern,      // 0x1b8
    indexKOF01Sprites_Hinako,       // 0x1b9
    indexKOF01Sprites_Igniz,        // 0x1ba
    indexKOF01Sprites_Iori,         // 0x1bb
    indexKOF01Sprites_Joe,          // 0x1bc
    indexKOF01Sprites_K,            // 0x1bd
    indexKOF01Sprites_K9999,        // 0x1be
    indexKOF01Sprites_Kensou,       // 0x1bf
    indexKOF01Sprites_Kim,          // 0x1c0
    indexKOF01Sprites_King,         // 0x1c1
    indexKOF01Sprites_Kula,         // 0x1c2
    indexKOF01Sprites_Kyo,          // 0x1c3
    indexKOF01Sprites_Leona,        // 0x1c4
    indexKOF01Sprites_Lin,          // 0x1c5
    indexKOF01Sprites_Mai,          // 0x1c6
    indexKOF01Sprites_Maxima,       // 0x1c7
    indexKOF01Sprites_MayLee,       // 0x1c8
    indexKOF01Sprites_Ralf,         // 0x1c9
    indexKOF01Sprites_Ramon,        // 0x1ca
    indexKOF01Sprites_Robert,       // 0x1cb
    indexKOF01Sprites_Ryo,          // 0x1cc
    indexKOF01Sprites_Seth,         // 0x1cd
    indexKOF01Sprites_Shingo,       // 0x1ce
    indexKOF01Sprites_Takuma,       // 0x1cf
    indexKOF01Sprites_Terry,        // 0x1d0
    indexKOF01Sprites_Vanessa,      // 0x1d1
    // indexKOF01Sprites_Xiangfei,  // 47
    indexKOF01Sprites_Whip,         // 0x1d2
    indexKOF01Sprites_Yuri,         // 0x1d3
    indexKOF01Sprites_Zero,         // 0x1d4
};

#pragma region hand-crafted offsets

const sGame_PaletteDataset KOF01_A_ZERO_STRIKER_PALETTES[] =
{
    { L"Krizalid Striker Portrait", 0x399222, 0x399242 },
    { L"Lon Striker Portrait", 0x399242, 0x399262 },
    { L"Glugan Striker Portrait", 0x399262, 0x399282 }, 
};

const sGame_PaletteDataset KOF01_A_BONUS_EFFECTS_PALETTES[] =
{
    { L"Main Fire Palette", 0x386722, 0x386922 },
    { L"Orochi Fire Palette", 0x386922, 0x386b22 },
    { L"Lin Poison Palette", 0x386b22, 0x386d22 },
    { L"Freeze Palette", 0x386d22, 0x386f22 },
};

const sDescTreeNode KOF01_A_BONUS_COLLECTION[] =
{
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_BONUS_EFFECTS_PALETTES, ARRAYSIZE(KOF01_A_BONUS_EFFECTS_PALETTES) },
};

#pragma endregion 

#pragma region Auto-generated via DumpPaletteHeaders

const sGame_PaletteDataset KOF01_A_K_PUNCH_PALETTES[] =
{
    { L"K' Punch", 0x387122, 0x387142, indexKOFSprites_02UM_K },
    { L"Character Extra 1", 0x387142, 0x387162, indexKOFSprites_02UM_K },
    { L"Character Extra 2", 0x387162, 0x387182, indexKOFSprites_02UM_K },
    { L"Electric Palette", 0x387182, 0x3871a2, indexKOFSprites_02UM_K },
    { L"Lin Poison Palette (Unused)", 0x3871a2, 0x3871c2, indexKOFSprites_02UM_K },
    { L"Freeze Palette (Unused)", 0x3871c2, 0x3871e2, indexKOFSprites_02UM_K },
    { L"Super Trail", 0x3871e2, 0x387202, indexKOFSprites_02UM_K },
    { L"Striker Portrait", 0x398322, 0x398342 },
    { L"Order Select Portrait", 0x399322, 0x399342 },
    { L"Select Portrait", 0x399f22, 0x399f62 },
    { L"Win Portrait", 0x39d122, 0x39d162 },
    { L"Lifebar Portrait", 0x3b8922, 0x3b8942 },
    { L"Next Character Lifebar Portrait", 0x3b7d22, 0x3b7d42 },
};

const sGame_PaletteDataset KOF01_A_K_KICK_PALETTES[] =
{
    { L"K' Kick", 0x387322, 0x387342, indexKOFSprites_02UM_K },
    { L"Character Extra 1", 0x387342, 0x387362, indexKOFSprites_02UM_K },
    { L"Character Extra 2", 0x387362, 0x387382, indexKOFSprites_02UM_K },
    { L"Electric Palette", 0x387382, 0x3873a2, indexKOFSprites_02UM_K },
    { L"Lin Poison Palette (Unused)", 0x3873a2, 0x3873c2, indexKOFSprites_02UM_K },
    { L"Freeze Palette (Unused)", 0x3873c2, 0x3873e2, indexKOFSprites_02UM_K },
    { L"Super Trail", 0x3873e2, 0x387402, indexKOFSprites_02UM_K },
    { L"Striker Portrait", 0x398342, 0x398362 },
    { L"Order Select Portrait", 0x399342, 0x399362 },
    { L"Select Portrait", 0x399f62, 0x399fa2 },
    { L"Win Portrait", 0x39d162, 0x39d1a2 },
    { L"Lifebar Portrait", 0x3b8942, 0x3b8962 },
    { L"Next Character Lifebar Portrait", 0x3b8222, 0x3b8242 },
};

const sGame_PaletteDataset KOF01_A_MAXIMA_PUNCH_PALETTES[] =
{
    { L"Maxima Punch", 0x387522, 0x387542, indexKOFSprites_02UM_Maxima },
    { L"Character Extra 1", 0x387542, 0x387562, indexKOFSprites_02UM_Maxima },
    { L"Character Extra 2", 0x387562, 0x387582, indexKOFSprites_02UM_Maxima },
    { L"Electric Palette", 0x387582, 0x3875a2, indexKOFSprites_02UM_Maxima },
    { L"Lin Poison Palette (Unused)", 0x3875a2, 0x3875c2, indexKOFSprites_02UM_Maxima },
    { L"Freeze Palette (Unused)", 0x3875c2, 0x3875e2, indexKOFSprites_02UM_Maxima },
    { L"Super Trail", 0x3875e2, 0x387602, indexKOFSprites_02UM_Maxima },
    { L"Striker Portrait", 0x398382, 0x3983a2 },
    { L"Order Select Portrait", 0x399362, 0x399382 },
    { L"Select Portrait", 0x39a062, 0x39a0a2 },
    { L"Win Portrait", 0x39d1a2, 0x39d1e2 },
    { L"Lifebar Portrait", 0x3b8962, 0x3b8982 },
    { L"Next Character Lifebar Portrait", 0x3b7d42, 0x3b7d62 },
};

const sGame_PaletteDataset KOF01_A_MAXIMA_KICK_PALETTES[] =
{
    { L"Maxima Kick", 0x387722, 0x387742, indexKOFSprites_02UM_Maxima },
    { L"Character Extra 1", 0x387742, 0x387762, indexKOFSprites_02UM_Maxima },
    { L"Character Extra 2", 0x387762, 0x387782, indexKOFSprites_02UM_Maxima },
    { L"Electric Palette", 0x387782, 0x3877a2, indexKOFSprites_02UM_Maxima },
    { L"Lin Poison Palette (Unused)", 0x3877a2, 0x3877c2, indexKOFSprites_02UM_Maxima },
    { L"Freeze Palette (Unused)", 0x3877c2, 0x3877e2, indexKOFSprites_02UM_Maxima },
    { L"Super Trail", 0x3877e2, 0x387802, indexKOFSprites_02UM_Maxima },
    { L"Striker Portrait", 0x3983a2, 0x3983c2 },
    { L"Order Select Portrait", 0x399382, 0x3993a2 },
    { L"Select Portrait", 0x39a0a2, 0x39a0e2 },
    { L"Win Portrait", 0x39d1e2, 0x39d222 },
    { L"Lifebar Portrait", 0x3b8982, 0x3b89a2 },
    { L"Next Character Lifebar Portrait", 0x3b8242, 0x3b8262 },
};

const sGame_PaletteDataset KOF01_A_WHIP_PUNCH_PALETTES[] =
{
    { L"Whip Punch", 0x387922, 0x387942, indexKOFSprites_02UM_Whip },
    { L"Character Extra 1", 0x387942, 0x387962, indexKOFSprites_02UM_Whip },
    { L"Character Extra 2", 0x387962, 0x387982, indexKOFSprites_02UM_Whip },
    { L"Electric Palette", 0x387982, 0x3879a2, indexKOFSprites_02UM_Whip },
    { L"Lin Poison Palette (Unused)", 0x3879a2, 0x3879c2, indexKOFSprites_02UM_Whip },
    { L"Freeze Palette (Unused)", 0x3879c2, 0x3879e2, indexKOFSprites_02UM_Whip },
    { L"Super Trail", 0x3879e2, 0x387a02, indexKOFSprites_02UM_Whip },
    { L"Striker Portrait", 0x3983e2, 0x398402 },
    { L"Order Select Portrait", 0x3993a2, 0x3993c2 },
    { L"Select Portrait", 0x39a1a2, 0x39a1e2 },
    { L"Win Portrait", 0x39d222, 0x39d262 },
    { L"Lifebar Portrait", 0x3b89a2, 0x3b89c2 },
    { L"Next Character Lifebar Portrait", 0x3b7d62, 0x3b7d82 },
};

const sGame_PaletteDataset KOF01_A_WHIP_KICK_PALETTES[] =
{
    { L"Whip Kick", 0x387b22, 0x387b42, indexKOFSprites_02UM_Whip },
    { L"Character Extra 1", 0x387b42, 0x387b62, indexKOFSprites_02UM_Whip },
    { L"Character Extra 2", 0x387b62, 0x387b82, indexKOFSprites_02UM_Whip },
    { L"Electric Palette", 0x387b82, 0x387ba2, indexKOFSprites_02UM_Whip },
    { L"Lin Poison Palette (Unused)", 0x387ba2, 0x387bc2, indexKOFSprites_02UM_Whip },
    { L"Freeze Palette (Unused)", 0x387bc2, 0x387be2, indexKOFSprites_02UM_Whip },
    { L"Super Trail", 0x387be2, 0x387c02, indexKOFSprites_02UM_Whip },
    { L"Striker Portrait", 0x398402, 0x398422 },
    { L"Order Select Portrait", 0x3993c2, 0x3993e2 },
    { L"Select Portrait", 0x39a1e2, 0x39a222 },
    { L"Win Portrait", 0x39d262, 0x39d2a2 },
    { L"Lifebar Portrait", 0x3b89c2, 0x3b89e2 },
    { L"Next Character Lifebar Portrait", 0x3b8262, 0x3b8282 },
};

const sGame_PaletteDataset KOF01_A_LIN_PUNCH_PALETTES[] =
{
    { L"Lin Punch", 0x387d22, 0x387d42, indexKOFSprites_02UM_Lin },
    { L"Character Extra 1", 0x387d42, 0x387d62, indexKOFSprites_02UM_Lin },
    { L"Character Extra 2", 0x387d62, 0x387d82, indexKOFSprites_02UM_Lin },
    { L"Electric Palette", 0x387d82, 0x387da2, indexKOFSprites_02UM_Lin },
    { L"Lin Poison Palette (Unused)", 0x387da2, 0x387dc2, indexKOFSprites_02UM_Lin },
    { L"Freeze Palette (Unused)", 0x387dc2, 0x387de2, indexKOFSprites_02UM_Lin },
    { L"Super Trail", 0x387de2, 0x387e02, indexKOFSprites_02UM_Lin },
    { L"Striker Portrait", 0x398442, 0x398462 },
    { L"Order Select Portrait", 0x3993e2, 0x399402 },
    { L"Select Portrait", 0x39a2e2, 0x39a322 },
    { L"Win Portrait", 0x39d2a2, 0x39d2e2 },
    { L"Lifebar Portrait", 0x3b89e2, 0x3b8a02 },
    { L"Next Character Lifebar Portrait", 0x3b7d82, 0x3b7da2 },
};

const sGame_PaletteDataset KOF01_A_LIN_KICK_PALETTES[] =
{
    { L"Lin Kick", 0x387f22, 0x387f42, indexKOFSprites_02UM_Lin },
    { L"Character Extra 1", 0x387f42, 0x387f62, indexKOFSprites_02UM_Lin },
    { L"Character Extra 2", 0x387f62, 0x387f82, indexKOFSprites_02UM_Lin },
    { L"Electric Palette", 0x387f82, 0x387fa2, indexKOFSprites_02UM_Lin },
    { L"Lin Poison Palette (Unused)", 0x387fa2, 0x387fc2, indexKOFSprites_02UM_Lin },
    { L"Freeze Palette (Unused)", 0x387fc2, 0x387fe2, indexKOFSprites_02UM_Lin },
    { L"Super Trail", 0x387fe2, 0x388002, indexKOFSprites_02UM_Lin },
    { L"Striker Portrait", 0x398462, 0x398482 },
    { L"Order Select Portrait", 0x399402, 0x399422 },
    { L"Select Portrait", 0x39a322, 0x39a362 },
    { L"Win Portrait", 0x39d2e2, 0x39d322 },
    { L"Lifebar Portrait", 0x3b8a02, 0x3b8a22 },
    { L"Next Character Lifebar Portrait", 0x3b8282, 0x3b82a2 },
};

const sGame_PaletteDataset KOF01_A_KYO_PUNCH_PALETTES[] =
{
    { L"Kyo Punch", 0x388122, 0x388142, indexKOFSprites_02UM_KyoKusa },
    { L"Character Extra 1", 0x388142, 0x388162, indexKOFSprites_02UM_KyoKusa },
    { L"Character Extra 2", 0x388162, 0x388182, indexKOFSprites_02UM_KyoKusa },
    { L"Electric Palette", 0x388182, 0x3881a2, indexKOFSprites_02UM_KyoKusa },
    { L"Lin Poison Palette (Unused)", 0x3881a2, 0x3881c2, indexKOFSprites_02UM_KyoKusa },
    { L"Freeze Palette (Unused)", 0x3881c2, 0x3881e2, indexKOFSprites_02UM_KyoKusa },
    { L"Super Trail", 0x3881e2, 0x388202, indexKOFSprites_02UM_KyoKusa },
    { L"Striker Portrait", 0x3984a2, 0x3984c2 },
    { L"Order Select Portrait", 0x399422, 0x399442 },
    { L"Select Portrait", 0x39a422, 0x39a462 },
    { L"Win Portrait", 0x39d322, 0x39d362 },
    { L"Lifebar Portrait", 0x3b8a22, 0x3b8a42 },
    { L"Next Character Lifebar Portrait", 0x3b7da2, 0x3b7dc2 },
};

const sGame_PaletteDataset KOF01_A_KYO_KICK_PALETTES[] =
{
    { L"Kyo Kick", 0x388322, 0x388342, indexKOFSprites_02UM_KyoKusa },
    { L"Character Extra 1", 0x388342, 0x388362, indexKOFSprites_02UM_KyoKusa },
    { L"Character Extra 2", 0x388362, 0x388382, indexKOFSprites_02UM_KyoKusa },
    { L"Electric Palette", 0x388382, 0x3883a2, indexKOFSprites_02UM_KyoKusa },
    { L"Lin Poison Palette (Unused)", 0x3883a2, 0x3883c2, indexKOFSprites_02UM_KyoKusa },
    { L"Freeze Palette (Unused)", 0x3883c2, 0x3883e2, indexKOFSprites_02UM_KyoKusa },
    { L"Super Trail", 0x3883e2, 0x388402, indexKOFSprites_02UM_KyoKusa },
    { L"Striker Portrait", 0x3984c2, 0x3984e2 },
    { L"Order Select Portrait", 0x399442, 0x399462 },
    { L"Select Portrait", 0x39a462, 0x39a4a2 },
    { L"Win Portrait", 0x39d362, 0x39d3a2 },
    { L"Lifebar Portrait", 0x3b8a42, 0x3b8a62 },
    { L"Next Character Lifebar Portrait", 0x3b82a2, 0x3b82c2 },
};

const sGame_PaletteDataset KOF01_A_BENIMARU_PUNCH_PALETTES[] =
{
    { L"Benimaru Punch", 0x388522, 0x388542, indexKOFSprites_02UM_Benimaru },
    { L"Character Extra 1", 0x388542, 0x388562, indexKOFSprites_02UM_Benimaru },
    { L"Character Extra 2", 0x388562, 0x388582, indexKOFSprites_02UM_Benimaru },
    { L"Electric Palette", 0x388582, 0x3885a2, indexKOFSprites_02UM_Benimaru },
    { L"Lin Poison Palette (Unused)", 0x3885a2, 0x3885c2, indexKOFSprites_02UM_Benimaru },
    { L"Freeze Palette (Unused)", 0x3885c2, 0x3885e2, indexKOFSprites_02UM_Benimaru },
    { L"Super Trail", 0x3885e2, 0x388602, indexKOFSprites_02UM_Benimaru },
    { L"Striker Portrait", 0x398502, 0x398522 },
    { L"Order Select Portrait", 0x399462, 0x399482 },
    { L"Select Portrait", 0x39a562, 0x39a5a2 },
    { L"Win Portrait", 0x39d3a2, 0x39d3e2 },
    { L"Lifebar Portrait", 0x3b8a62, 0x3b8a82 },
    { L"Next Character Lifebar Portrait", 0x3b7dc2, 0x3b7de2 },
};

const sGame_PaletteDataset KOF01_A_BENIMARU_KICK_PALETTES[] =
{
    { L"Benimaru Kick", 0x388722, 0x388742, indexKOFSprites_02UM_Benimaru },
    { L"Character Extra 1", 0x388742, 0x388762, indexKOFSprites_02UM_Benimaru },
    { L"Character Extra 2", 0x388762, 0x388782, indexKOFSprites_02UM_Benimaru },
    { L"Electric Palette", 0x388782, 0x3887a2, indexKOFSprites_02UM_Benimaru },
    { L"Lin Poison Palette (Unused)", 0x3887a2, 0x3887c2, indexKOFSprites_02UM_Benimaru },
    { L"Freeze Palette (Unused)", 0x3887c2, 0x3887e2, indexKOFSprites_02UM_Benimaru },
    { L"Super Trail", 0x3887e2, 0x388802, indexKOFSprites_02UM_Benimaru },
    { L"Striker Portrait", 0x398522, 0x398542 },
    { L"Order Select Portrait", 0x399482, 0x3994a2 },
    { L"Select Portrait", 0x39a5a2, 0x39a5e2 },
    { L"Win Portrait", 0x39d3e2, 0x39d422 },
    { L"Lifebar Portrait", 0x3b8a82, 0x3b8aa2 },
    { L"Next Character Lifebar Portrait", 0x3b82c2, 0x3b82e2 },
};

const sGame_PaletteDataset KOF01_A_GORO_PUNCH_PALETTES[] =
{
    { L"Goro Punch", 0x388922, 0x388942, indexKOFSprites_02UM_Daimon },
    { L"Character Extra 1", 0x388942, 0x388962, indexKOFSprites_02UM_Daimon },
    { L"Character Extra 2", 0x388962, 0x388982, indexKOFSprites_02UM_Daimon },
    { L"Electric Palette", 0x388982, 0x3889a2, indexKOFSprites_02UM_Daimon },
    { L"Lin Poison Palette (Unused)", 0x3889a2, 0x3889c2, indexKOFSprites_02UM_Daimon },
    { L"Freeze Palette (Unused)", 0x3889c2, 0x3889e2, indexKOFSprites_02UM_Daimon },
    { L"Super Trail", 0x3889e2, 0x388a02, indexKOFSprites_02UM_Daimon },
    { L"Striker Portrait", 0x398562, 0x398582 },
    { L"Order Select Portrait", 0x3994a2, 0x3994c2 },
    { L"Select Portrait", 0x39a6a2, 0x39a6e2 },
    { L"Win Portrait", 0x39d422, 0x39d462 },
    { L"Lifebar Portrait", 0x3b8aa2, 0x3b8ac2 },
    { L"Next Character Lifebar Portrait", 0x3b7de2, 0x3b7e02 },
};

const sGame_PaletteDataset KOF01_A_GORO_KICK_PALETTES[] =
{
    { L"Goro Kick", 0x388b22, 0x388b42, indexKOFSprites_02UM_Daimon },
    { L"Character Extra 1", 0x388b42, 0x388b62, indexKOFSprites_02UM_Daimon },
    { L"Character Extra 2", 0x388b62, 0x388b82, indexKOFSprites_02UM_Daimon },
    { L"Electric Palette", 0x388b82, 0x388ba2, indexKOFSprites_02UM_Daimon },
    { L"Lin Poison Palette (Unused)", 0x388ba2, 0x388bc2, indexKOFSprites_02UM_Daimon },
    { L"Freeze Palette (Unused)", 0x388bc2, 0x388be2, indexKOFSprites_02UM_Daimon },
    { L"Super Trail", 0x388be2, 0x388c02, indexKOFSprites_02UM_Daimon },
    { L"Striker Portrait", 0x398582, 0x3985a2 },
    { L"Order Select Portrait", 0x3994c2, 0x3994e2 },
    { L"Select Portrait", 0x39a6e2, 0x39a722 },
    { L"Win Portrait", 0x39d462, 0x39d4a2 },
    { L"Lifebar Portrait", 0x3b8ac2, 0x3b8ae2 },
    { L"Next Character Lifebar Portrait", 0x3b82e2, 0x3b8302 },
};

const sGame_PaletteDataset KOF01_A_SHINGO_PUNCH_PALETTES[] =
{
    { L"Shingo Punch", 0x388d22, 0x388d42, indexKOFSprites_02UM_Shingo },
    { L"Character Extra 1", 0x388d42, 0x388d62, indexKOFSprites_02UM_Shingo },
    { L"Character Extra 2", 0x388d62, 0x388d82, indexKOFSprites_02UM_Shingo },
    { L"Electric Palette", 0x388d82, 0x388da2, indexKOFSprites_02UM_Shingo },
    { L"Lin Poison Palette (Unused)", 0x388da2, 0x388dc2, indexKOFSprites_02UM_Shingo },
    { L"Freeze Palette (Unused)", 0x388dc2, 0x388de2, indexKOFSprites_02UM_Shingo },
    { L"Super Trail", 0x388de2, 0x388e02, indexKOFSprites_02UM_Shingo },
    { L"Striker Portrait", 0x3985c2, 0x3985e2 },
    { L"Order Select Portrait", 0x3994e2, 0x399502 },
    { L"Select Portrait", 0x39a7e2, 0x39a822 },
    { L"Win Portrait", 0x39d4a2, 0x39d4e2 },
    { L"Lifebar Portrait", 0x3b8ae2, 0x3b8b02 },
    { L"Next Character Lifebar Portrait", 0x3b7e02, 0x3b7e22 },
};

const sGame_PaletteDataset KOF01_A_SHINGO_KICK_PALETTES[] =
{
    { L"Shingo Kick", 0x388f22, 0x388f42, indexKOFSprites_02UM_Shingo },
    { L"Character Extra 1", 0x388f42, 0x388f62, indexKOFSprites_02UM_Shingo },
    { L"Character Extra 2", 0x388f62, 0x388f82, indexKOFSprites_02UM_Shingo },
    { L"Electric Palette", 0x388f82, 0x388fa2, indexKOFSprites_02UM_Shingo },
    { L"Lin Poison Palette (Unused)", 0x388fa2, 0x388fc2, indexKOFSprites_02UM_Shingo },
    { L"Freeze Palette (Unused)", 0x388fc2, 0x388fe2, indexKOFSprites_02UM_Shingo },
    { L"Super Trail", 0x388fe2, 0x389002, indexKOFSprites_02UM_Shingo },
    { L"Striker Portrait", 0x3985e2, 0x398602 },
    { L"Order Select Portrait", 0x399502, 0x399522 },
    { L"Select Portrait", 0x39a822, 0x39a862 },
    { L"Win Portrait", 0x39d4e2, 0x39d522 },
    { L"Lifebar Portrait", 0x3b8b02, 0x3b8b22 },
    { L"Next Character Lifebar Portrait", 0x3b8302, 0x3b8322 },
};

const sGame_PaletteDataset KOF01_A_IORI_PUNCH_PALETTES[] =
{
    { L"Iori Punch", 0x389122, 0x389142, indexKOFSprites_02UM_Iori },
    { L"Character Extra 1", 0x389142, 0x389162, indexKOFSprites_02UM_Iori },
    { L"Character Extra 2", 0x389162, 0x389182, indexKOFSprites_02UM_Iori },
    { L"Electric Palette", 0x389182, 0x3891a2, indexKOFSprites_02UM_Iori },
    { L"Lin Poison Palette (Unused)", 0x3891a2, 0x3891c2, indexKOFSprites_02UM_Iori },
    { L"Freeze Palette (Unused)", 0x3891c2, 0x3891e2, indexKOFSprites_02UM_Iori },
    { L"Super Trail", 0x3891e2, 0x389202, indexKOFSprites_02UM_Iori },
    { L"Striker Portrait", 0x398622, 0x398642 },
    { L"Order Select Portrait", 0x399522, 0x399542 },
    { L"Select Portrait", 0x39a922, 0x39a962 },
    { L"Win Portrait", 0x39d522, 0x39d562 },
    { L"Lifebar Portrait", 0x3b8b22, 0x3b8b42 },
    { L"Next Character Lifebar Portrait", 0x3b7e22, 0x3b7e42 },
};

const sGame_PaletteDataset KOF01_A_IORI_KICK_PALETTES[] =
{
    { L"Iori Kick", 0x389322, 0x389342, indexKOFSprites_02UM_Iori },
    { L"Character Extra 1", 0x389342, 0x389362, indexKOFSprites_02UM_Iori },
    { L"Character Extra 2", 0x389362, 0x389382, indexKOFSprites_02UM_Iori },
    { L"Electric Palette", 0x389382, 0x3893a2, indexKOFSprites_02UM_Iori },
    { L"Lin Poison Palette (Unused)", 0x3893a2, 0x3893c2, indexKOFSprites_02UM_Iori },
    { L"Freeze Palette (Unused)", 0x3893c2, 0x3893e2, indexKOFSprites_02UM_Iori },
    { L"Super Trail", 0x3893e2, 0x389402, indexKOFSprites_02UM_Iori },
    { L"Striker Portrait", 0x398642, 0x398662 },
    { L"Order Select Portrait", 0x399542, 0x399562 },
    { L"Select Portrait", 0x39a962, 0x39a9a2 },
    { L"Win Portrait", 0x39d562, 0x39d5a2 },
    { L"Lifebar Portrait", 0x3b8b42, 0x3b8b62 },
    { L"Next Character Lifebar Portrait", 0x3b8322, 0x3b8342 },
};

const sGame_PaletteDataset KOF01_A_VANESSA_PUNCH_PALETTES[] =
{
    { L"Vanessa Punch", 0x389522, 0x389542, indexKOFSprites_02UM_Vanessa },
    { L"Character Extra 1", 0x389542, 0x389562, indexKOFSprites_02UM_Vanessa },
    { L"Character Extra 2", 0x389562, 0x389582, indexKOFSprites_02UM_Vanessa },
    { L"Electric Palette", 0x389582, 0x3895a2, indexKOFSprites_02UM_Vanessa },
    { L"Lin Poison Palette (Unused)", 0x3895a2, 0x3895c2, indexKOFSprites_02UM_Vanessa },
    { L"Freeze Palette (Unused)", 0x3895c2, 0x3895e2, indexKOFSprites_02UM_Vanessa },
    { L"Super Trail", 0x3895e2, 0x389602, indexKOFSprites_02UM_Vanessa },
    { L"Striker Portrait", 0x398682, 0x3986a2 },
    { L"Order Select Portrait", 0x399562, 0x399582 },
    { L"Select Portrait", 0x39aa62, 0x39aaa2 },
    { L"Win Portrait", 0x39d5a2, 0x39d5e2 },
    { L"Lifebar Portrait", 0x3b8b62, 0x3b8b82 },
    { L"Next Character Lifebar Portrait", 0x3b7e42, 0x3b7e62 },
};

const sGame_PaletteDataset KOF01_A_VANESSA_KICK_PALETTES[] =
{
    { L"Vanessa Kick", 0x389722, 0x389742, indexKOFSprites_02UM_Vanessa },
    { L"Character Extra 1", 0x389742, 0x389762, indexKOFSprites_02UM_Vanessa },
    { L"Character Extra 2", 0x389762, 0x389782, indexKOFSprites_02UM_Vanessa },
    { L"Electric Palette", 0x389782, 0x3897a2, indexKOFSprites_02UM_Vanessa },
    { L"Lin Poison Palette (Unused)", 0x3897a2, 0x3897c2, indexKOFSprites_02UM_Vanessa },
    { L"Freeze Palette (Unused)", 0x3897c2, 0x3897e2, indexKOFSprites_02UM_Vanessa },
    { L"Super Trail", 0x3897e2, 0x389802, indexKOFSprites_02UM_Vanessa },
    { L"Striker Portrait", 0x3986a2, 0x3986c2 },
    { L"Order Select Portrait", 0x399582, 0x3995a2 },
    { L"Select Portrait", 0x39aaa2, 0x39aae2 },
    { L"Win Portrait", 0x39d5e2, 0x39d622 },
    { L"Lifebar Portrait", 0x3b8b82, 0x3b8ba2 },
    { L"Next Character Lifebar Portrait", 0x3b8342, 0x3b8362 },
};

const sGame_PaletteDataset KOF01_A_SETH_PUNCH_PALETTES[] =
{
    { L"Seth Punch", 0x389922, 0x389942, indexKOFSprites_02UM_Seth },
    { L"Character Extra 1", 0x389942, 0x389962, indexKOFSprites_02UM_Seth },
    { L"Character Extra 2", 0x389962, 0x389982, indexKOFSprites_02UM_Seth },
    { L"Electric Palette", 0x389982, 0x3899a2, indexKOFSprites_02UM_Seth },
    { L"Lin Poison Palette (Unused)", 0x3899a2, 0x3899c2, indexKOFSprites_02UM_Seth },
    { L"Freeze Palette (Unused)", 0x3899c2, 0x3899e2, indexKOFSprites_02UM_Seth },
    { L"Super Trail", 0x3899e2, 0x389a02, indexKOFSprites_02UM_Seth },
    { L"Striker Portrait", 0x3986e2, 0x398702 },
    { L"Order Select Portrait", 0x3995a2, 0x3995c2 },
    { L"Select Portrait", 0x39aba2, 0x39abe2 },
    { L"Win Portrait", 0x39d622, 0x39d662 },
    { L"Lifebar Portrait", 0x3b8ba2, 0x3b8bc2 },
    { L"Next Character Lifebar Portrait", 0x3b7e62, 0x3b7e82 },
};

const sGame_PaletteDataset KOF01_A_SETH_KICK_PALETTES[] =
{
    { L"Seth Kick", 0x389b22, 0x389b42, indexKOFSprites_02UM_Seth },
    { L"Character Extra 1", 0x389b42, 0x389b62, indexKOFSprites_02UM_Seth },
    { L"Character Extra 2", 0x389b62, 0x389b82, indexKOFSprites_02UM_Seth },
    { L"Electric Palette", 0x389b82, 0x389ba2, indexKOFSprites_02UM_Seth },
    { L"Lin Poison Palette (Unused)", 0x389ba2, 0x389bc2, indexKOFSprites_02UM_Seth },
    { L"Freeze Palette (Unused)", 0x389bc2, 0x389be2, indexKOFSprites_02UM_Seth },
    { L"Super Trail", 0x389be2, 0x389c02, indexKOFSprites_02UM_Seth },
    { L"Striker Portrait", 0x398702, 0x398722 },
    { L"Order Select Portrait", 0x3995c2, 0x3995e2 },
    { L"Select Portrait", 0x39abe2, 0x39ac22 },
    { L"Win Portrait", 0x39d662, 0x39d6a2 },
    { L"Lifebar Portrait", 0x3b8bc2, 0x3b8be2 },
    { L"Next Character Lifebar Portrait", 0x3b8362, 0x3b8382 },
};

const sGame_PaletteDataset KOF01_A_RAMON_PUNCH_PALETTES[] =
{
    { L"Ramon Punch", 0x389d22, 0x389d42, indexKOFSprites_02UM_Ramon },
    { L"Character Extra 1", 0x389d42, 0x389d62, indexKOFSprites_02UM_Ramon },
    { L"Character Extra 2", 0x389d62, 0x389d82, indexKOFSprites_02UM_Ramon },
    { L"Electric Palette", 0x389d82, 0x389da2, indexKOFSprites_02UM_Ramon },
    { L"Lin Poison Palette (Unused)", 0x389da2, 0x389dc2, indexKOFSprites_02UM_Ramon },
    { L"Freeze Palette (Unused)", 0x389dc2, 0x389de2, indexKOFSprites_02UM_Ramon },
    { L"Super Trail", 0x389de2, 0x389e02, indexKOFSprites_02UM_Ramon },
    { L"Striker Portrait", 0x398742, 0x398762 },
    { L"Order Select Portrait", 0x3995e2, 0x399602 },
    { L"Select Portrait", 0x39ace2, 0x39ad22 },
    { L"Win Portrait", 0x39d6a2, 0x39d6e2 },
    { L"Lifebar Portrait", 0x3b8be2, 0x3b8c02 },
    { L"Next Character Lifebar Portrait", 0x3b7e82, 0x3b7ea2 },
};

const sGame_PaletteDataset KOF01_A_RAMON_KICK_PALETTES[] =
{
    { L"Ramon Kick", 0x389f22, 0x389f42, indexKOFSprites_02UM_Ramon },
    { L"Character Extra 1", 0x389f42, 0x389f62, indexKOFSprites_02UM_Ramon },
    { L"Character Extra 2", 0x389f62, 0x389f82, indexKOFSprites_02UM_Ramon },
    { L"Electric Palette", 0x389f82, 0x389fa2, indexKOFSprites_02UM_Ramon },
    { L"Lin Poison Palette (Unused)", 0x389fa2, 0x389fc2, indexKOFSprites_02UM_Ramon },
    { L"Freeze Palette (Unused)", 0x389fc2, 0x389fe2, indexKOFSprites_02UM_Ramon },
    { L"Super Trail", 0x389fe2, 0x38a002, indexKOFSprites_02UM_Ramon },
    { L"Striker Portrait", 0x398762, 0x398782 },
    { L"Order Select Portrait", 0x399602, 0x399622 },
    { L"Select Portrait", 0x39ad22, 0x39ad62 },
    { L"Win Portrait", 0x39d6e2, 0x39d722 },
    { L"Lifebar Portrait", 0x3b8c02, 0x3b8c22 },
    { L"Next Character Lifebar Portrait", 0x3b8382, 0x3b83a2 },
};

const sGame_PaletteDataset KOF01_A_LEONA_PUNCH_PALETTES[] =
{
    { L"Leona Punch", 0x38a122, 0x38a142, indexKOFSprites_02UM_Leona },
    { L"Character Extra 1", 0x38a142, 0x38a162, indexKOFSprites_02UM_Leona },
    { L"Character Extra 2", 0x38a162, 0x38a182, indexKOFSprites_02UM_Leona },
    { L"Electric Palette", 0x38a182, 0x38a1a2, indexKOFSprites_02UM_Leona },
    { L"Lin Poison Palette (Unused)", 0x38a1a2, 0x38a1c2, indexKOFSprites_02UM_Leona },
    { L"Freeze Palette (Unused)", 0x38a1c2, 0x38a1e2, indexKOFSprites_02UM_Leona },
    { L"Super Trail", 0x38a1e2, 0x38a202, indexKOFSprites_02UM_Leona },
    { L"Striker Portrait", 0x3987a2, 0x3987c2 },
    { L"Order Select Portrait", 0x399622, 0x399642 },
    { L"Select Portrait", 0x39ae22, 0x39ae62 },
    { L"Win Portrait", 0x39d722, 0x39d762 },
    { L"Lifebar Portrait", 0x3b8c22, 0x3b8c42 },
    { L"Next Character Lifebar Portrait", 0x3b7ea2, 0x3b7ec2 },
};

const sGame_PaletteDataset KOF01_A_LEONA_KICK_PALETTES[] =
{
    { L"Leona Kick", 0x38a322, 0x38a342, indexKOFSprites_02UM_Leona },
    { L"Character Extra 1", 0x38a342, 0x38a362, indexKOFSprites_02UM_Leona },
    { L"Character Extra 2", 0x38a362, 0x38a382, indexKOFSprites_02UM_Leona },
    { L"Electric Palette", 0x38a382, 0x38a3a2, indexKOFSprites_02UM_Leona },
    { L"Lin Poison Palette (Unused)", 0x38a3a2, 0x38a3c2, indexKOFSprites_02UM_Leona },
    { L"Freeze Palette (Unused)", 0x38a3c2, 0x38a3e2, indexKOFSprites_02UM_Leona },
    { L"Super Trail", 0x38a3e2, 0x38a402, indexKOFSprites_02UM_Leona },
    { L"Striker Portrait", 0x3987c2, 0x3987e2 },
    { L"Order Select Portrait", 0x399642, 0x399662 },
    { L"Select Portrait", 0x39ae62, 0x39aea2 },
    { L"Win Portrait", 0x39d762, 0x39d7a2 },
    { L"Lifebar Portrait", 0x3b8c42, 0x3b8c62 },
    { L"Next Character Lifebar Portrait", 0x3b83a2, 0x3b83c2 },
};

const sGame_PaletteDataset KOF01_A_RALF_PUNCH_PALETTES[] =
{
    { L"Ralf Punch", 0x38a522, 0x38a542, indexKOFSprites_02UM_Ralf },
    { L"Character Extra 1", 0x38a542, 0x38a562, indexKOFSprites_02UM_Ralf },
    { L"Character Extra 2", 0x38a562, 0x38a582, indexKOFSprites_02UM_Ralf },
    { L"Electric Palette", 0x38a582, 0x38a5a2, indexKOFSprites_02UM_Ralf },
    { L"Lin Poison Palette (Unused)", 0x38a5a2, 0x38a5c2, indexKOFSprites_02UM_Ralf },
    { L"Freeze Palette (Unused)", 0x38a5c2, 0x38a5e2, indexKOFSprites_02UM_Ralf },
    { L"Super Trail", 0x38a5e2, 0x38a602, indexKOFSprites_02UM_Ralf },
    { L"Striker Portrait", 0x398802, 0x398822 },
    { L"Order Select Portrait", 0x399662, 0x399682 },
    { L"Select Portrait", 0x39af62, 0x39afa2 },
    { L"Win Portrait", 0x39d7a2, 0x39d7e2 },
    { L"Lifebar Portrait", 0x3b8c62, 0x3b8c82 },
    { L"Next Character Lifebar Portrait", 0x3b7ec2, 0x3b7ee2 },
};

const sGame_PaletteDataset KOF01_A_RALF_KICK_PALETTES[] =
{
    { L"Ralf Kick", 0x38a722, 0x38a742, indexKOFSprites_02UM_Ralf },
    { L"Character Extra 1", 0x38a742, 0x38a762, indexKOFSprites_02UM_Ralf },
    { L"Character Extra 2", 0x38a762, 0x38a782, indexKOFSprites_02UM_Ralf },
    { L"Electric Palette", 0x38a782, 0x38a7a2, indexKOFSprites_02UM_Ralf },
    { L"Lin Poison Palette (Unused)", 0x38a7a2, 0x38a7c2, indexKOFSprites_02UM_Ralf },
    { L"Freeze Palette (Unused)", 0x38a7c2, 0x38a7e2, indexKOFSprites_02UM_Ralf },
    { L"Super Trail", 0x38a7e2, 0x38a802, indexKOFSprites_02UM_Ralf },
    { L"Striker Portrait", 0x398822, 0x398842 },
    { L"Order Select Portrait", 0x399682, 0x3996a2 },
    { L"Select Portrait", 0x39afa2, 0x39afe2 },
    { L"Win Portrait", 0x39d7e2, 0x39d822 },
    { L"Lifebar Portrait", 0x3b8c82, 0x3b8ca2 },
    { L"Next Character Lifebar Portrait", 0x3b83c2, 0x3b83e2 },
};

const sGame_PaletteDataset KOF01_A_CLARK_PUNCH_PALETTES[] =
{
    { L"Clark Punch", 0x38a922, 0x38a942, indexKOFSprites_02UM_Clark },
    { L"Character Extra 1", 0x38a942, 0x38a962, indexKOFSprites_02UM_Clark },
    { L"Character Extra 2", 0x38a962, 0x38a982, indexKOFSprites_02UM_Clark },
    { L"Electric Palette", 0x38a982, 0x38a9a2, indexKOFSprites_02UM_Clark },
    { L"Lin Poison Palette (Unused)", 0x38a9a2, 0x38a9c2, indexKOFSprites_02UM_Clark },
    { L"Freeze Palette (Unused)", 0x38a9c2, 0x38a9e2, indexKOFSprites_02UM_Clark },
    { L"Super Trail", 0x38a9e2, 0x38aa02, indexKOFSprites_02UM_Clark },
    { L"Striker Portrait", 0x398862, 0x398882 },
    { L"Order Select Portrait", 0x3996a2, 0x3996c2 },
    { L"Select Portrait", 0x39b0a2, 0x39b0e2 },
    { L"Win Portrait", 0x39d822, 0x39d862 },
    { L"Lifebar Portrait", 0x3b8ca2, 0x3b8cc2 },
    { L"Next Character Lifebar Portrait", 0x3b7ee2, 0x3b7f02 },
};

const sGame_PaletteDataset KOF01_A_CLARK_KICK_PALETTES[] =
{
    { L"Clark Kick", 0x38ab22, 0x38ab42, indexKOFSprites_02UM_Clark },
    { L"Character Extra 1", 0x38ab42, 0x38ab62, indexKOFSprites_02UM_Clark },
    { L"Character Extra 2", 0x38ab62, 0x38ab82, indexKOFSprites_02UM_Clark },
    { L"Electric Palette", 0x38ab82, 0x38aba2, indexKOFSprites_02UM_Clark },
    { L"Lin Poison Palette (Unused)", 0x38aba2, 0x38abc2, indexKOFSprites_02UM_Clark },
    { L"Freeze Palette (Unused)", 0x38abc2, 0x38abe2, indexKOFSprites_02UM_Clark },
    { L"Super Trail", 0x38abe2, 0x38ac02, indexKOFSprites_02UM_Clark },
    { L"Striker Portrait", 0x398882, 0x3988a2 },
    { L"Order Select Portrait", 0x3996c2, 0x3996e2 },
    { L"Select Portrait", 0x39b0e2, 0x39b122 },
    { L"Win Portrait", 0x39d862, 0x39d8a2 },
    { L"Lifebar Portrait", 0x3b8cc2, 0x3b8ce2 },
    { L"Next Character Lifebar Portrait", 0x3b83e2, 0x3b8402 },
};

const sGame_PaletteDataset KOF01_A_HEIDERN_PUNCH_PALETTES[] =
{
    { L"Heidern Punch", 0x38ad22, 0x38ad42, indexKOF01Sprites_Heidern },
    { L"Character Extra 1", 0x38ad42, 0x38ad62, indexKOF01Sprites_Heidern },
    { L"Character Extra 2", 0x38ad62, 0x38ad82, indexKOF01Sprites_Heidern },
    { L"Electric Palette", 0x38ad82, 0x38ada2, indexKOF01Sprites_Heidern },
    { L"Lin Poison Palette (Unused)", 0x38ada2, 0x38adc2, indexKOF01Sprites_Heidern },
    { L"Freeze Palette (Unused)", 0x38adc2, 0x38ade2, indexKOF01Sprites_Heidern },
    { L"Super Trail", 0x38ade2, 0x38ae02, indexKOF01Sprites_Heidern },
    { L"Striker Portrait", 0x3988c2, 0x3988e2 },
    { L"Order Select Portrait", 0x3996e2, 0x399702 },
    { L"Select Portrait", 0x39b1e2, 0x39b222 },
    { L"Win Portrait", 0x39d8a2, 0x39d8e2 },
    { L"Lifebar Portrait", 0x3b8ce2, 0x3b8d02 },
    { L"Next Character Lifebar Portrait", 0x3b7f02, 0x3b7f22 },
};

const sGame_PaletteDataset KOF01_A_HEIDERN_KICK_PALETTES[] =
{
    { L"Heidern Kick", 0x38af22, 0x38af42, indexKOF01Sprites_Heidern },
    { L"Character Extra 1", 0x38af42, 0x38af62, indexKOF01Sprites_Heidern },
    { L"Character Extra 2", 0x38af62, 0x38af82, indexKOF01Sprites_Heidern },
    { L"Electric Palette", 0x38af82, 0x38afa2, indexKOF01Sprites_Heidern },
    { L"Lin Poison Palette (Unused)", 0x38afa2, 0x38afc2, indexKOF01Sprites_Heidern },
    { L"Freeze Palette (Unused)", 0x38afc2, 0x38afe2, indexKOF01Sprites_Heidern },
    { L"Super Trail", 0x38afe2, 0x38b002, indexKOF01Sprites_Heidern },
    { L"Striker Portrait", 0x3988e2, 0x398902 },
    { L"Order Select Portrait", 0x399702, 0x399722 },
    { L"Select Portrait", 0x39b222, 0x39b262 },
    { L"Win Portrait", 0x39d8e2, 0x39d922 },
    { L"Lifebar Portrait", 0x3b8d02, 0x3b8d22 },
    { L"Next Character Lifebar Portrait", 0x3b8402, 0x3b8422 },
};

const sGame_PaletteDataset KOF01_A_TERRY_PUNCH_PALETTES[] =
{
    { L"Terry Punch", 0x38b122, 0x38b142, indexKOFSprites_02UM_Terry },
    { L"Character Extra 1", 0x38b142, 0x38b162, indexKOFSprites_02UM_Terry },
    { L"Character Extra 2", 0x38b162, 0x38b182, indexKOFSprites_02UM_Terry },
    { L"Electric Palette", 0x38b182, 0x38b1a2, indexKOFSprites_02UM_Terry },
    { L"Lin Poison Palette (Unused)", 0x38b1a2, 0x38b1c2, indexKOFSprites_02UM_Terry },
    { L"Freeze Palette (Unused)", 0x38b1c2, 0x38b1e2, indexKOFSprites_02UM_Terry },
    { L"Super Trail", 0x38b1e2, 0x38b202, indexKOFSprites_02UM_Terry },
    { L"Striker Portrait", 0x398922, 0x398942 },
    { L"Order Select Portrait", 0x399722, 0x399742 },
    { L"Select Portrait", 0x39b322, 0x39b362 },
    { L"Win Portrait", 0x39d922, 0x39d962 },
    { L"Lifebar Portrait", 0x3b8d22, 0x3b8d42 },
    { L"Next Character Lifebar Portrait", 0x3b7f22, 0x3b7f42 },
};

const sGame_PaletteDataset KOF01_A_TERRY_KICK_PALETTES[] =
{
    { L"Terry Kick", 0x38b322, 0x38b342, indexKOFSprites_02UM_Terry },
    { L"Character Extra 1", 0x38b342, 0x38b362, indexKOFSprites_02UM_Terry },
    { L"Character Extra 2", 0x38b362, 0x38b382, indexKOFSprites_02UM_Terry },
    { L"Electric Palette", 0x38b382, 0x38b3a2, indexKOFSprites_02UM_Terry },
    { L"Lin Poison Palette (Unused)", 0x38b3a2, 0x38b3c2, indexKOFSprites_02UM_Terry },
    { L"Freeze Palette (Unused)", 0x38b3c2, 0x38b3e2, indexKOFSprites_02UM_Terry },
    { L"Super Trail", 0x38b3e2, 0x38b402, indexKOFSprites_02UM_Terry },
    { L"Striker Portrait", 0x398942, 0x398962 },
    { L"Order Select Portrait", 0x399742, 0x399762 },
    { L"Select Portrait", 0x39b362, 0x39b3a2 },
    { L"Win Portrait", 0x39d962, 0x39d9a2 },
    { L"Lifebar Portrait", 0x3b8d42, 0x3b8d62 },
    { L"Next Character Lifebar Portrait", 0x3b8422, 0x3b8442 },
};

const sGame_PaletteDataset KOF01_A_ANDY_PUNCH_PALETTES[] =
{
    { L"Andy Punch", 0x38b522, 0x38b542, indexKOFSprites_02UM_Andy },
    { L"Character Extra 1", 0x38b542, 0x38b562, indexKOFSprites_02UM_Andy },
    { L"Character Extra 2", 0x38b562, 0x38b582, indexKOFSprites_02UM_Andy },
    { L"Electric Palette", 0x38b582, 0x38b5a2, indexKOFSprites_02UM_Andy },
    { L"Lin Poison Palette (Unused)", 0x38b5a2, 0x38b5c2, indexKOFSprites_02UM_Andy },
    { L"Freeze Palette (Unused)", 0x38b5c2, 0x38b5e2, indexKOFSprites_02UM_Andy },
    { L"Super Trail", 0x38b5e2, 0x38b602, indexKOFSprites_02UM_Andy },
    { L"Striker Portrait", 0x398982, 0x3989a2 },
    { L"Order Select Portrait", 0x399762, 0x399782 },
    { L"Select Portrait", 0x39b462, 0x39b4a2 },
    { L"Win Portrait", 0x39d9a2, 0x39d9e2 },
    { L"Lifebar Portrait", 0x3b8d62, 0x3b8d82 },
    { L"Next Character Lifebar Portrait", 0x3b7f42, 0x3b7f62 },
};

const sGame_PaletteDataset KOF01_A_ANDY_KICK_PALETTES[] =
{
    { L"Andy Kick", 0x38b722, 0x38b742, indexKOFSprites_02UM_Andy },
    { L"Character Extra 1", 0x38b742, 0x38b762, indexKOFSprites_02UM_Andy },
    { L"Character Extra 2", 0x38b762, 0x38b782, indexKOFSprites_02UM_Andy },
    { L"Electric Palette", 0x38b782, 0x38b7a2, indexKOFSprites_02UM_Andy },
    { L"Lin Poison Palette (Unused)", 0x38b7a2, 0x38b7c2, indexKOFSprites_02UM_Andy },
    { L"Freeze Palette (Unused)", 0x38b7c2, 0x38b7e2, indexKOFSprites_02UM_Andy },
    { L"Super Trail", 0x38b7e2, 0x38b802, indexKOFSprites_02UM_Andy },
    { L"Striker Portrait", 0x3989a2, 0x3989c2 },
    { L"Order Select Portrait", 0x399782, 0x3997a2 },
    { L"Select Portrait", 0x39b4a2, 0x39b4e2 },
    { L"Win Portrait", 0x39d9e2, 0x39da22 },
    { L"Lifebar Portrait", 0x3b8d82, 0x3b8da2 },
    { L"Next Character Lifebar Portrait", 0x3b8442, 0x3b8462 },
};

const sGame_PaletteDataset KOF01_A_JOE_PUNCH_PALETTES[] =
{
    { L"Joe Punch", 0x38b922, 0x38b942, indexKOFSprites_02UM_Joe },
    { L"Character Extra 1", 0x38b942, 0x38b962, indexKOFSprites_02UM_Joe },
    { L"Character Extra 2", 0x38b962, 0x38b982, indexKOFSprites_02UM_Joe },
    { L"Electric Palette", 0x38b982, 0x38b9a2, indexKOFSprites_02UM_Joe },
    { L"Lin Poison Palette (Unused)", 0x38b9a2, 0x38b9c2, indexKOFSprites_02UM_Joe },
    { L"Freeze Palette (Unused)", 0x38b9c2, 0x38b9e2, indexKOFSprites_02UM_Joe },
    { L"Super Trail", 0x38b9e2, 0x38ba02, indexKOFSprites_02UM_Joe },
    { L"Striker Portrait", 0x3989e2, 0x398a02 },
    { L"Order Select Portrait", 0x3997a2, 0x3997c2 },
    { L"Select Portrait", 0x39b5a2, 0x39b5e2 },
    { L"Win Portrait", 0x39da22, 0x39da62 },
    { L"Lifebar Portrait", 0x3b8da2, 0x3b8dc2 },
    { L"Next Character Lifebar Portrait", 0x3b7f62, 0x3b7f82 },
};

const sGame_PaletteDataset KOF01_A_JOE_KICK_PALETTES[] =
{
    { L"Joe Kick", 0x38bb22, 0x38bb42, indexKOFSprites_02UM_Joe },
    { L"Character Extra 1", 0x38bb42, 0x38bb62, indexKOFSprites_02UM_Joe },
    { L"Character Extra 2", 0x38bb62, 0x38bb82, indexKOFSprites_02UM_Joe },
    { L"Electric Palette", 0x38bb82, 0x38bba2, indexKOFSprites_02UM_Joe },
    { L"Lin Poison Palette (Unused)", 0x38bba2, 0x38bbc2, indexKOFSprites_02UM_Joe },
    { L"Freeze Palette (Unused)", 0x38bbc2, 0x38bbe2, indexKOFSprites_02UM_Joe },
    { L"Super Trail", 0x38bbe2, 0x38bc02, indexKOFSprites_02UM_Joe },
    { L"Striker Portrait", 0x398a02, 0x398a22 },
    { L"Order Select Portrait", 0x3997c2, 0x3997e2 },
    { L"Select Portrait", 0x39b5e2, 0x39b622 },
    { L"Win Portrait", 0x39da62, 0x39daa2 },
    { L"Lifebar Portrait", 0x3b8dc2, 0x3b8de2 },
    { L"Next Character Lifebar Portrait", 0x3b8462, 0x3b8482 },
};

const sGame_PaletteDataset KOF01_A_MARY_PUNCH_PALETTES[] =
{
    { L"Mary Punch", 0x38bd22, 0x38bd42, indexKOFSprites_02UM_BlueMary },
    { L"Character Extra 1", 0x38bd42, 0x38bd62, indexKOFSprites_02UM_BlueMary },
    { L"Character Extra 2", 0x38bd62, 0x38bd82, indexKOFSprites_02UM_BlueMary },
    { L"Electric Palette", 0x38bd82, 0x38bda2, indexKOFSprites_02UM_BlueMary },
    { L"Lin Poison Palette (Unused)", 0x38bda2, 0x38bdc2, indexKOFSprites_02UM_BlueMary },
    { L"Freeze Palette (Unused)", 0x38bdc2, 0x38bde2, indexKOFSprites_02UM_BlueMary },
    { L"Super Trail", 0x38bde2, 0x38be02, indexKOFSprites_02UM_BlueMary },
    { L"Striker Portrait", 0x398a42, 0x398a62 },
    { L"Order Select Portrait", 0x3997e2, 0x399802 },
    { L"Select Portrait", 0x39b6e2, 0x39b722 },
    { L"Win Portrait", 0x39daa2, 0x39dae2 },
    { L"Lifebar Portrait", 0x3b8de2, 0x3b8e02 },
    { L"Next Character Lifebar Portrait", 0x3b7f82, 0x3b7fa2 },
};

const sGame_PaletteDataset KOF01_A_MARY_KICK_PALETTES[] =
{
    { L"Mary Kick", 0x38bf22, 0x38bf42, indexKOFSprites_02UM_BlueMary },
    { L"Character Extra 1", 0x38bf42, 0x38bf62, indexKOFSprites_02UM_BlueMary },
    { L"Character Extra 2", 0x38bf62, 0x38bf82, indexKOFSprites_02UM_BlueMary },
    { L"Electric Palette", 0x38bf82, 0x38bfa2, indexKOFSprites_02UM_BlueMary },
    { L"Lin Poison Palette (Unused)", 0x38bfa2, 0x38bfc2, indexKOFSprites_02UM_BlueMary },
    { L"Freeze Palette (Unused)", 0x38bfc2, 0x38bfe2, indexKOFSprites_02UM_BlueMary },
    { L"Super Trail", 0x38bfe2, 0x38c002, indexKOFSprites_02UM_BlueMary },
    { L"Striker Portrait", 0x398a62, 0x398a82 },
    { L"Order Select Portrait", 0x399802, 0x399822 },
    { L"Select Portrait", 0x39b722, 0x39b762 },
    { L"Win Portrait", 0x39dae2, 0x39db22 },
    { L"Lifebar Portrait", 0x3b8e02, 0x3b8e22 },
    { L"Next Character Lifebar Portrait", 0x3b8482, 0x3b84a2 },
};

const sGame_PaletteDataset KOF01_A_RYO_PUNCH_PALETTES[] =
{
    { L"Ryo Punch", 0x38c122, 0x38c142, indexKOFSprites_02UM_Ryo },
    { L"Character Extra 1", 0x38c142, 0x38c162, indexKOFSprites_02UM_Ryo },
    { L"Character Extra 2", 0x38c162, 0x38c182, indexKOFSprites_02UM_Ryo },
    { L"Electric Palette", 0x38c182, 0x38c1a2, indexKOFSprites_02UM_Ryo },
    { L"Lin Poison Palette (Unused)", 0x38c1a2, 0x38c1c2, indexKOFSprites_02UM_Ryo },
    { L"Freeze Palette (Unused)", 0x38c1c2, 0x38c1e2, indexKOFSprites_02UM_Ryo },
    { L"Super Trail", 0x38c1e2, 0x38c202, indexKOFSprites_02UM_Ryo },
    { L"Striker Portrait", 0x398aa2, 0x398ac2 },
    { L"Order Select Portrait", 0x399822, 0x399842 },
    { L"Select Portrait", 0x39b822, 0x39b862 },
    { L"Win Portrait", 0x39db22, 0x39db62 },
    { L"Lifebar Portrait", 0x3b8e22, 0x3b8e42 },
    { L"Next Character Lifebar Portrait", 0x3b7fa2, 0x3b7fc2 },
};

const sGame_PaletteDataset KOF01_A_RYO_KICK_PALETTES[] =
{
    { L"Ryo Kick", 0x38c322, 0x38c342, indexKOFSprites_02UM_Ryo },
    { L"Character Extra 1", 0x38c342, 0x38c362, indexKOFSprites_02UM_Ryo },
    { L"Character Extra 2", 0x38c362, 0x38c382, indexKOFSprites_02UM_Ryo },
    { L"Electric Palette", 0x38c382, 0x38c3a2, indexKOFSprites_02UM_Ryo },
    { L"Lin Poison Palette (Unused)", 0x38c3a2, 0x38c3c2, indexKOFSprites_02UM_Ryo },
    { L"Freeze Palette (Unused)", 0x38c3c2, 0x38c3e2, indexKOFSprites_02UM_Ryo },
    { L"Super Trail", 0x38c3e2, 0x38c402, indexKOFSprites_02UM_Ryo },
    { L"Striker Portrait", 0x398ac2, 0x398ae2 },
    { L"Order Select Portrait", 0x399842, 0x399862 },
    { L"Select Portrait", 0x39b862, 0x39b8a2 },
    { L"Win Portrait", 0x39db62, 0x39dba2 },
    { L"Lifebar Portrait", 0x3b8e42, 0x3b8e62 },
    { L"Next Character Lifebar Portrait", 0x3b84a2, 0x3b84c2 },
};

const sGame_PaletteDataset KOF01_A_ROBERT_PUNCH_PALETTES[] =
{
    { L"Robert Punch", 0x38c522, 0x38c542, indexKOFSprites_02UM_Robert },
    { L"Character Extra 1", 0x38c542, 0x38c562, indexKOFSprites_02UM_Robert },
    { L"Character Extra 2", 0x38c562, 0x38c582, indexKOFSprites_02UM_Robert },
    { L"Electric Palette", 0x38c582, 0x38c5a2, indexKOFSprites_02UM_Robert },
    { L"Lin Poison Palette (Unused)", 0x38c5a2, 0x38c5c2, indexKOFSprites_02UM_Robert },
    { L"Freeze Palette (Unused)", 0x38c5c2, 0x38c5e2, indexKOFSprites_02UM_Robert },
    { L"Super Trail", 0x38c5e2, 0x38c602, indexKOFSprites_02UM_Robert },
    { L"Striker Portrait", 0x398b02, 0x398b22 },
    { L"Order Select Portrait", 0x399862, 0x399882 },
    { L"Select Portrait", 0x39b962, 0x39b9a2 },
    { L"Win Portrait", 0x39dba2, 0x39dbe2 },
    { L"Lifebar Portrait", 0x3b8e62, 0x3b8e82 },
    { L"Next Character Lifebar Portrait", 0x3b7fc2, 0x3b7fe2 },
};

const sGame_PaletteDataset KOF01_A_ROBERT_KICK_PALETTES[] =
{
    { L"Robert Kick", 0x38c722, 0x38c742, indexKOFSprites_02UM_Robert },
    { L"Character Extra 1", 0x38c742, 0x38c762, indexKOFSprites_02UM_Robert },
    { L"Character Extra 2", 0x38c762, 0x38c782, indexKOFSprites_02UM_Robert },
    { L"Electric Palette", 0x38c782, 0x38c7a2, indexKOFSprites_02UM_Robert },
    { L"Lin Poison Palette (Unused)", 0x38c7a2, 0x38c7c2, indexKOFSprites_02UM_Robert },
    { L"Freeze Palette (Unused)", 0x38c7c2, 0x38c7e2, indexKOFSprites_02UM_Robert },
    { L"Super Trail", 0x38c7e2, 0x38c802, indexKOFSprites_02UM_Robert },
    { L"Striker Portrait", 0x398b22, 0x398b42 },
    { L"Order Select Portrait", 0x399882, 0x3998a2 },
    { L"Select Portrait", 0x39b9a2, 0x39b9e2 },
    { L"Win Portrait", 0x39dbe2, 0x39dc22 },
    { L"Lifebar Portrait", 0x3b8e82, 0x3b8ea2 },
    { L"Next Character Lifebar Portrait", 0x3b84c2, 0x3b84e2 },
};

const sGame_PaletteDataset KOF01_A_YURI_PUNCH_PALETTES[] =
{
    { L"Yuri Punch", 0x38c922, 0x38c942, indexKOFSprites_02UM_Yuri },
    { L"Character Extra 1", 0x38c942, 0x38c962, indexKOFSprites_02UM_Yuri },
    { L"Character Extra 2", 0x38c962, 0x38c982, indexKOFSprites_02UM_Yuri },
    { L"Electric Palette", 0x38c982, 0x38c9a2, indexKOFSprites_02UM_Yuri },
    { L"Lin Poison Palette (Unused)", 0x38c9a2, 0x38c9c2, indexKOFSprites_02UM_Yuri },
    { L"Freeze Palette (Unused)", 0x38c9c2, 0x38c9e2, indexKOFSprites_02UM_Yuri },
    { L"Super Trail", 0x38c9e2, 0x38ca02, indexKOFSprites_02UM_Yuri },
    { L"Striker Portrait", 0x398b62, 0x398b82 },
    { L"Order Select Portrait", 0x3998a2, 0x3998c2 },
    { L"Select Portrait", 0x39baa2, 0x39bae2 },
    { L"Win Portrait", 0x39dc22, 0x39dc62 },
    { L"Lifebar Portrait", 0x3b8ea2, 0x3b8ec2 },
    { L"Next Character Lifebar Portrait", 0x3b7fe2, 0x3b8002 },
};

const sGame_PaletteDataset KOF01_A_YURI_KICK_PALETTES[] =
{
    { L"Yuri Kick", 0x38cb22, 0x38cb42, indexKOFSprites_02UM_Yuri },
    { L"Character Extra 1", 0x38cb42, 0x38cb62, indexKOFSprites_02UM_Yuri },
    { L"Character Extra 2", 0x38cb62, 0x38cb82, indexKOFSprites_02UM_Yuri },
    { L"Electric Palette", 0x38cb82, 0x38cba2, indexKOFSprites_02UM_Yuri },
    { L"Lin Poison Palette (Unused)", 0x38cba2, 0x38cbc2, indexKOFSprites_02UM_Yuri },
    { L"Freeze Palette (Unused)", 0x38cbc2, 0x38cbe2, indexKOFSprites_02UM_Yuri },
    { L"Super Trail", 0x38cbe2, 0x38cc02, indexKOFSprites_02UM_Yuri },
    { L"Striker Portrait", 0x398b82, 0x398ba2 },
    { L"Order Select Portrait", 0x3998c2, 0x3998e2 },
    { L"Select Portrait", 0x39bae2, 0x39bb22 },
    { L"Win Portrait", 0x39dc62, 0x39dca2 },
    { L"Lifebar Portrait", 0x3b8ec2, 0x3b8ee2 },
    { L"Next Character Lifebar Portrait", 0x3b84e2, 0x3b8502 },
};

const sGame_PaletteDataset KOF01_A_TAKUMA_PUNCH_PALETTES[] =
{
    { L"Takuma Punch", 0x38cd22, 0x38cd42, indexKOFSprites_02UM_Takuma },
    { L"Character Extra 1", 0x38cd42, 0x38cd62, indexKOFSprites_02UM_Takuma },
    { L"Character Extra 2", 0x38cd62, 0x38cd82, indexKOFSprites_02UM_Takuma },
    { L"Electric Palette", 0x38cd82, 0x38cda2, indexKOFSprites_02UM_Takuma },
    { L"Lin Poison Palette (Unused)", 0x38cda2, 0x38cdc2, indexKOFSprites_02UM_Takuma },
    { L"Freeze Palette (Unused)", 0x38cdc2, 0x38cde2, indexKOFSprites_02UM_Takuma },
    { L"Super Trail", 0x38cde2, 0x38ce02, indexKOFSprites_02UM_Takuma },
    { L"Striker Portrait", 0x398bc2, 0x398be2 },
    { L"Order Select Portrait", 0x3998e2, 0x399902 },
    { L"Select Portrait", 0x39bbe2, 0x39bc22 },
    { L"Win Portrait", 0x39dca2, 0x39dce2 },
    { L"Lifebar Portrait", 0x3b8ee2, 0x3b8f02 },
    { L"Next Character Lifebar Portrait", 0x3b8002, 0x3b8022 },
};

const sGame_PaletteDataset KOF01_A_TAKUMA_KICK_PALETTES[] =
{
    { L"Takuma Kick", 0x38cf22, 0x38cf42, indexKOFSprites_02UM_Takuma },
    { L"Character Extra 1", 0x38cf42, 0x38cf62, indexKOFSprites_02UM_Takuma },
    { L"Character Extra 2", 0x38cf62, 0x38cf82, indexKOFSprites_02UM_Takuma },
    { L"Electric Palette", 0x38cf82, 0x38cfa2, indexKOFSprites_02UM_Takuma },
    { L"Lin Poison Palette (Unused)", 0x38cfa2, 0x38cfc2, indexKOFSprites_02UM_Takuma },
    { L"Freeze Palette (Unused)", 0x38cfc2, 0x38cfe2, indexKOFSprites_02UM_Takuma },
    { L"Super Trail", 0x38cfe2, 0x38d002, indexKOFSprites_02UM_Takuma },
    { L"Striker Portrait", 0x398be2, 0x398c02 },
    { L"Order Select Portrait", 0x399902, 0x399922 },
    { L"Select Portrait", 0x39bc22, 0x39bc62 },
    { L"Win Portrait", 0x39dce2, 0x39dd22 },
    { L"Lifebar Portrait", 0x3b8f02, 0x3b8f22 },
    { L"Next Character Lifebar Portrait", 0x3b8502, 0x3b8522 },
};

const sGame_PaletteDataset KOF01_A_KING_PUNCH_PALETTES[] =
{
    { L"King Punch", 0x38d122, 0x38d142, indexKOFSprites_02UM_King },
    { L"Character Extra 1", 0x38d142, 0x38d162, indexKOFSprites_02UM_King },
    { L"Character Extra 2", 0x38d162, 0x38d182, indexKOFSprites_02UM_King },
    { L"Electric Palette", 0x38d182, 0x38d1a2, indexKOFSprites_02UM_King },
    { L"Lin Poison Palette (Unused)", 0x38d1a2, 0x38d1c2, indexKOFSprites_02UM_King },
    { L"Freeze Palette (Unused)", 0x38d1c2, 0x38d1e2, indexKOFSprites_02UM_King },
    { L"Super Trail", 0x38d1e2, 0x38d202, indexKOFSprites_02UM_King },
    { L"Striker Portrait", 0x398c22, 0x398c42 },
    { L"Order Select Portrait", 0x399922, 0x399942 },
    { L"Select Portrait", 0x39bd22, 0x39bd62 },
    { L"Win Portrait", 0x39dd22, 0x39dd62 },
    { L"Lifebar Portrait", 0x3b8f22, 0x3b8f42 },
    { L"Next Character Lifebar Portrait", 0x3b8022, 0x3b8042 },
};

const sGame_PaletteDataset KOF01_A_KING_KICK_PALETTES[] =
{
    { L"King Kick", 0x38d322, 0x38d342, indexKOFSprites_02UM_King },
    { L"Character Extra 1", 0x38d342, 0x38d362, indexKOFSprites_02UM_King },
    { L"Character Extra 2", 0x38d362, 0x38d382, indexKOFSprites_02UM_King },
    { L"Electric Palette", 0x38d382, 0x38d3a2, indexKOFSprites_02UM_King },
    { L"Lin Poison Palette (Unused)", 0x38d3a2, 0x38d3c2, indexKOFSprites_02UM_King },
    { L"Freeze Palette (Unused)", 0x38d3c2, 0x38d3e2, indexKOFSprites_02UM_King },
    { L"Super Trail", 0x38d3e2, 0x38d402, indexKOFSprites_02UM_King },
    { L"Striker Portrait", 0x398c42, 0x398c62 },
    { L"Order Select Portrait", 0x399942, 0x399962 },
    { L"Select Portrait", 0x39bd62, 0x39bda2 },
    { L"Win Portrait", 0x39dd62, 0x39dda2 },
    { L"Lifebar Portrait", 0x3b8f42, 0x3b8f62 },
    { L"Next Character Lifebar Portrait", 0x3b8522, 0x3b8542 },
};

const sGame_PaletteDataset KOF01_A_MAI_PUNCH_PALETTES[] =
{
    { L"Mai Punch", 0x38d522, 0x38d542, indexKOFSprites_02UM_Mai },
    { L"Character Extra 1", 0x38d542, 0x38d562, indexKOFSprites_02UM_Mai },
    { L"Character Extra 2", 0x38d562, 0x38d582, indexKOFSprites_02UM_Mai },
    { L"Electric Palette", 0x38d582, 0x38d5a2, indexKOFSprites_02UM_Mai },
    { L"Lin Poison Palette (Unused)", 0x38d5a2, 0x38d5c2, indexKOFSprites_02UM_Mai },
    { L"Freeze Palette (Unused)", 0x38d5c2, 0x38d5e2, indexKOFSprites_02UM_Mai },
    { L"Super Trail", 0x38d5e2, 0x38d602, indexKOFSprites_02UM_Mai },
    { L"Striker Portrait", 0x398c82, 0x398ca2 },
    { L"Order Select Portrait", 0x399962, 0x399982 },
    { L"Select Portrait", 0x39be62, 0x39bea2 },
    { L"Win Portrait", 0x39dda2, 0x39dde2 },
    { L"Lifebar Portrait", 0x3b8f62, 0x3b8f82 },
    { L"Next Character Lifebar Portrait", 0x3b8042, 0x3b8062 },
};

const sGame_PaletteDataset KOF01_A_MAI_KICK_PALETTES[] =
{
    { L"Mai Kick", 0x38d722, 0x38d742, indexKOFSprites_02UM_Mai },
    { L"Character Extra 1", 0x38d742, 0x38d762, indexKOFSprites_02UM_Mai },
    { L"Character Extra 2", 0x38d762, 0x38d782, indexKOFSprites_02UM_Mai },
    { L"Electric Palette", 0x38d782, 0x38d7a2, indexKOFSprites_02UM_Mai },
    { L"Lin Poison Palette (Unused)", 0x38d7a2, 0x38d7c2, indexKOFSprites_02UM_Mai },
    { L"Freeze Palette (Unused)", 0x38d7c2, 0x38d7e2, indexKOFSprites_02UM_Mai },
    { L"Super Trail", 0x38d7e2, 0x38d802, indexKOFSprites_02UM_Mai },
    { L"Striker Portrait", 0x398ca2, 0x398cc2 },
    { L"Order Select Portrait", 0x399982, 0x3999a2 },
    { L"Select Portrait", 0x39bea2, 0x39bee2 },
    { L"Win Portrait", 0x39dde2, 0x39de22 },
    { L"Lifebar Portrait", 0x3b8f82, 0x3b8fa2 },
    { L"Next Character Lifebar Portrait", 0x3b8542, 0x3b8562 },
};

const sGame_PaletteDataset KOF01_A_HINAKO_PUNCH_PALETTES[] =
{
    { L"Hinako Punch", 0x38d922, 0x38d942, indexKOFSprites_02UM_Hinako },
    { L"Character Extra 1", 0x38d942, 0x38d962, indexKOFSprites_02UM_Hinako },
    { L"Character Extra 2", 0x38d962, 0x38d982, indexKOFSprites_02UM_Hinako },
    { L"Electric Palette", 0x38d982, 0x38d9a2, indexKOFSprites_02UM_Hinako },
    { L"Lin Poison Palette (Unused)", 0x38d9a2, 0x38d9c2, indexKOFSprites_02UM_Hinako },
    { L"Freeze Palette (Unused)", 0x38d9c2, 0x38d9e2, indexKOFSprites_02UM_Hinako },
    { L"Super Trail", 0x38d9e2, 0x38da02, indexKOFSprites_02UM_Hinako },
    { L"Striker Portrait", 0x398ce2, 0x398d02 },
    { L"Order Select Portrait", 0x3999a2, 0x3999c2 },
    { L"Select Portrait", 0x39bfa2, 0x39bfe2 },
    { L"Win Portrait", 0x39de22, 0x39de62 },
    { L"Lifebar Portrait", 0x3b8fa2, 0x3b8fc2 },
    { L"Next Character Lifebar Portrait", 0x3b8062, 0x3b8082 },
};

const sGame_PaletteDataset KOF01_A_HINAKO_KICK_PALETTES[] =
{
    { L"Hinako Kick", 0x38db22, 0x38db42, indexKOFSprites_02UM_Hinako },
    { L"Character Extra 1", 0x38db42, 0x38db62, indexKOFSprites_02UM_Hinako },
    { L"Character Extra 2", 0x38db62, 0x38db82, indexKOFSprites_02UM_Hinako },
    { L"Electric Palette", 0x38db82, 0x38dba2, indexKOFSprites_02UM_Hinako },
    { L"Lin Poison Palette (Unused)", 0x38dba2, 0x38dbc2, indexKOFSprites_02UM_Hinako },
    { L"Freeze Palette (Unused)", 0x38dbc2, 0x38dbe2, indexKOFSprites_02UM_Hinako },
    { L"Super Trail", 0x38dbe2, 0x38dc02, indexKOFSprites_02UM_Hinako },
    { L"Striker Portrait", 0x398d02, 0x398d22 },
    { L"Order Select Portrait", 0x3999c2, 0x3999e2 },
    { L"Select Portrait", 0x39bfe2, 0x39c022 },
    { L"Win Portrait", 0x39de62, 0x39dea2 },
    { L"Lifebar Portrait", 0x3b8fc2, 0x3b8fe2 },
    { L"Next Character Lifebar Portrait", 0x3b8562, 0x3b8582 },
};

const sGame_PaletteDataset KOF01_A_XIANGFEI_PUNCH_PALETTES[] =
{
    { L"Xiangfei Punch", 0x38dd22, 0x38dd42, indexKOF01Sprites_Xiangfei },
    { L"Character Extra 1", 0x38dd42, 0x38dd62, indexKOF01Sprites_Xiangfei },
    { L"Character Extra 2", 0x38dd62, 0x38dd82, indexKOF01Sprites_Xiangfei },
    { L"Electric Palette", 0x38dd82, 0x38dda2, indexKOF01Sprites_Xiangfei },
    { L"Lin Poison Palette (Unused)", 0x38dda2, 0x38ddc2, indexKOF01Sprites_Xiangfei },
    { L"Freeze Palette (Unused)", 0x38ddc2, 0x38dde2, indexKOF01Sprites_Xiangfei },
    { L"Super Trail", 0x38dde2, 0x38de02, indexKOF01Sprites_Xiangfei },
    { L"Striker Portrait", 0x398d42, 0x398d62 },
    { L"Order Select Portrait", 0x3999e2, 0x399a02 },
    { L"Select Portrait", 0x39c0e2, 0x39c122 },
    { L"Win Portrait", 0x39dea2, 0x39dee2 },
    { L"Lifebar Portrait", 0x3b8fe2, 0x3b9002 },
    { L"Next Character Lifebar Portrait", 0x3b8082, 0x3b80a2 },
};

const sGame_PaletteDataset KOF01_A_XIANGFEI_KICK_PALETTES[] =
{
    { L"Xiangfei Kick", 0x38df22, 0x38df42, indexKOF01Sprites_Xiangfei },
    { L"Character Extra 1", 0x38df42, 0x38df62, indexKOF01Sprites_Xiangfei },
    { L"Character Extra 2", 0x38df62, 0x38df82, indexKOF01Sprites_Xiangfei },
    { L"Electric Palette", 0x38df82, 0x38dfa2, indexKOF01Sprites_Xiangfei },
    { L"Lin Poison Palette (Unused)", 0x38dfa2, 0x38dfc2, indexKOF01Sprites_Xiangfei },
    { L"Freeze Palette (Unused)", 0x38dfc2, 0x38dfe2, indexKOF01Sprites_Xiangfei },
    { L"Super Trail", 0x38dfe2, 0x38e002, indexKOF01Sprites_Xiangfei },
    { L"Striker Portrait", 0x398d62, 0x398d82 },
    { L"Order Select Portrait", 0x399a02, 0x399a22 },
    { L"Select Portrait", 0x39c122, 0x39c162 },
    { L"Win Portrait", 0x39dee2, 0x39df22 },
    { L"Lifebar Portrait", 0x3b9002, 0x3b9022 },
    { L"Next Character Lifebar Portrait", 0x3b8582, 0x3b85a2 },
};

const sGame_PaletteDataset KOF01_A_KULA_PUNCH_PALETTES[] =
{
    { L"Kula Punch", 0x38e122, 0x38e142, indexKOFSprites_02UM_Kula },
    { L"Character Extra 1", 0x38e142, 0x38e162, indexKOFSprites_02UM_Kula },
    { L"Character Extra 2", 0x38e162, 0x38e182, indexKOFSprites_02UM_Kula },
    { L"Electric Palette", 0x38e182, 0x38e1a2, indexKOFSprites_02UM_Kula },
    { L"Lin Poison Palette (Unused)", 0x38e1a2, 0x38e1c2, indexKOFSprites_02UM_Kula },
    { L"Freeze Palette (Unused)", 0x38e1c2, 0x38e1e2, indexKOFSprites_02UM_Kula },
    { L"Super Trail", 0x38e1e2, 0x38e202, indexKOFSprites_02UM_Kula },
    { L"Striker Portrait", 0x398da2, 0x398dc2 },
    { L"Order Select Portrait", 0x399a22, 0x399a42 },
    { L"Select Portrait", 0x39c222, 0x39c262 },
    { L"Win Portrait", 0x39df22, 0x39df62 },
    { L"Lifebar Portrait", 0x3b9022, 0x3b9042 },
    { L"Next Character Lifebar Portrait", 0x3b80a2, 0x3b80c2 },
};

const sGame_PaletteDataset KOF01_A_KULA_KICK_PALETTES[] =
{
    { L"Kula Kick", 0x38e322, 0x38e342, indexKOFSprites_02UM_Kula },
    { L"Character Extra 1", 0x38e342, 0x38e362, indexKOFSprites_02UM_Kula },
    { L"Character Extra 2", 0x38e362, 0x38e382, indexKOFSprites_02UM_Kula },
    { L"Electric Palette", 0x38e382, 0x38e3a2, indexKOFSprites_02UM_Kula },
    { L"Lin Poison Palette (Unused)", 0x38e3a2, 0x38e3c2, indexKOFSprites_02UM_Kula },
    { L"Freeze Palette (Unused)", 0x38e3c2, 0x38e3e2, indexKOFSprites_02UM_Kula },
    { L"Super Trail", 0x38e3e2, 0x38e402, indexKOFSprites_02UM_Kula },
    { L"Striker Portrait", 0x398dc2, 0x398de2 },
    { L"Order Select Portrait", 0x399a42, 0x399a62 },
    { L"Select Portrait", 0x39c262, 0x39c2a2 },
    { L"Win Portrait", 0x39df62, 0x39dfa2 },
    { L"Lifebar Portrait", 0x3b9042, 0x3b9062 },
    { L"Next Character Lifebar Portrait", 0x3b85a2, 0x3b85c2 },
};

const sGame_PaletteDataset KOF01_A_FOXY_PUNCH_PALETTES[] =
{
    { L"Foxy Punch", 0x38e522, 0x38e542, indexKOF01Sprites_Foxy },
    { L"Character Extra 1", 0x38e542, 0x38e562, indexKOF01Sprites_Foxy },
    { L"Character Extra 2", 0x38e562, 0x38e582, indexKOF01Sprites_Foxy },
    { L"Electric Palette", 0x38e582, 0x38e5a2, indexKOF01Sprites_Foxy },
    { L"Lin Poison Palette (Unused)", 0x38e5a2, 0x38e5c2, indexKOF01Sprites_Foxy },
    { L"Freeze Palette (Unused)", 0x38e5c2, 0x38e5e2, indexKOF01Sprites_Foxy },
    { L"Super Trail", 0x38e5e2, 0x38e602, indexKOF01Sprites_Foxy },
    { L"Striker Portrait", 0x398e02, 0x398e22 },
    { L"Order Select Portrait", 0x399a62, 0x399a82 },
    { L"Select Portrait", 0x39c362, 0x39c3a2 },
    { L"Win Portrait", 0x39dfa2, 0x39dfe2 },
    { L"Lifebar Portrait", 0x3b9062, 0x3b9082 },
    { L"Next Character Lifebar Portrait", 0x3b80c2, 0x3b80e2 },
};

const sGame_PaletteDataset KOF01_A_FOXY_KICK_PALETTES[] =
{
    { L"Foxy Kick", 0x38e722, 0x38e742, indexKOF01Sprites_Foxy },
    { L"Character Extra 1", 0x38e742, 0x38e762, indexKOF01Sprites_Foxy },
    { L"Character Extra 2", 0x38e762, 0x38e782, indexKOF01Sprites_Foxy },
    { L"Electric Palette", 0x38e782, 0x38e7a2, indexKOF01Sprites_Foxy },
    { L"Lin Poison Palette (Unused)", 0x38e7a2, 0x38e7c2, indexKOF01Sprites_Foxy },
    { L"Freeze Palette (Unused)", 0x38e7c2, 0x38e7e2, indexKOF01Sprites_Foxy },
    { L"Super Trail", 0x38e7e2, 0x38e802, indexKOF01Sprites_Foxy },
    { L"Striker Portrait", 0x398e22, 0x398e42 },
    { L"Order Select Portrait", 0x399a82, 0x399aa2 },
    { L"Select Portrait", 0x39c3a2, 0x39c3e2 },
    { L"Win Portrait", 0x39dfe2, 0x39e022 },
    { L"Lifebar Portrait", 0x3b9082, 0x3b90a2 },
    { L"Next Character Lifebar Portrait", 0x3b85c2, 0x3b85e2 },
};

const sGame_PaletteDataset KOF01_A_K9999_PUNCH_PALETTES[] =
{
    { L"K9999 Punch", 0x38e922, 0x38e942, indexKOFSprites_02UM_K9999 },
    { L"Character Extra 1", 0x38e942, 0x38e962, indexKOFSprites_02UM_K9999 },
    { L"Character Extra 2", 0x38e962, 0x38e982, indexKOFSprites_02UM_K9999 },
    { L"Electric Palette", 0x38e982, 0x38e9a2, indexKOFSprites_02UM_K9999 },
    { L"Lin Poison Palette (Unused)", 0x38e9a2, 0x38e9c2, indexKOFSprites_02UM_K9999 },
    { L"Freeze Palette (Unused)", 0x38e9c2, 0x38e9e2, indexKOFSprites_02UM_K9999 },
    { L"Super Trail", 0x38e9e2, 0x38ea02, indexKOFSprites_02UM_K9999 },
    { L"Striker Portrait", 0x398e62, 0x398e82 },
    { L"Order Select Portrait", 0x399aa2, 0x399ac2 },
    { L"Select Portrait", 0x39c4a2, 0x39c4e2 },
    { L"Win Portrait", 0x39e022, 0x39e062 },
    { L"Lifebar Portrait", 0x3b90a2, 0x3b90c2 },
    { L"Next Character Lifebar Portrait", 0x3b80e2, 0x3b8102 },
};

const sGame_PaletteDataset KOF01_A_K9999_KICK_PALETTES[] =
{
    { L"K9999 Kick", 0x38eb22, 0x38eb42, indexKOFSprites_02UM_K9999 },
    { L"Character Extra 1", 0x38eb42, 0x38eb62, indexKOFSprites_02UM_K9999 },
    { L"Character Extra 2", 0x38eb62, 0x38eb82, indexKOFSprites_02UM_K9999 },
    { L"Electric Palette", 0x38eb82, 0x38eba2, indexKOFSprites_02UM_K9999 },
    { L"Lin Poison Palette (Unused)", 0x38eba2, 0x38ebc2, indexKOFSprites_02UM_K9999 },
    { L"Freeze Palette (Unused)", 0x38ebc2, 0x38ebe2, indexKOFSprites_02UM_K9999 },
    { L"Super Trail", 0x38ebe2, 0x38ec02, indexKOFSprites_02UM_K9999 },
    { L"Striker Portrait", 0x398e82, 0x398ea2 },
    { L"Order Select Portrait", 0x399ac2, 0x399ae2 },
    { L"Select Portrait", 0x39c4e2, 0x39c522 },
    { L"Win Portrait", 0x39e062, 0x39e0a2 },
    { L"Lifebar Portrait", 0x3b90c2, 0x3b90e2 },
    { L"Next Character Lifebar Portrait", 0x3b85e2, 0x3b8602 },
};

const sGame_PaletteDataset KOF01_A_ANGEL_PUNCH_PALETTES[] =
{
    { L"Angel Punch", 0x38ed22, 0x38ed42, indexKOFSprites_02UM_Angel },
    { L"Character Extra 1", 0x38ed42, 0x38ed62, indexKOFSprites_02UM_Angel },
    { L"Character Extra 2", 0x38ed62, 0x38ed82, indexKOFSprites_02UM_Angel },
    { L"Electric Palette", 0x38ed82, 0x38eda2, indexKOFSprites_02UM_Angel },
    { L"Lin Poison Palette (Unused)", 0x38eda2, 0x38edc2, indexKOFSprites_02UM_Angel },
    { L"Freeze Palette (Unused)", 0x38edc2, 0x38ede2, indexKOFSprites_02UM_Angel },
    { L"Super Trail", 0x38ede2, 0x38ee02, indexKOFSprites_02UM_Angel },
    { L"Striker Portrait", 0x398ec2, 0x398ee2 },
    { L"Order Select Portrait", 0x399ae2, 0x399b02 },
    { L"Select Portrait", 0x39c5e2, 0x39c622 },
    { L"Win Portrait", 0x39e0a2, 0x39e0e2 },
    { L"Lifebar Portrait", 0x3b90e2, 0x3b9102 },
    { L"Next Character Lifebar Portrait", 0x3b8102, 0x3b8122 },
};

const sGame_PaletteDataset KOF01_A_ANGEL_KICK_PALETTES[] =
{
    { L"Angel Kick", 0x38ef22, 0x38ef42, indexKOFSprites_02UM_Angel },
    { L"Character Extra 1", 0x38ef42, 0x38ef62, indexKOFSprites_02UM_Angel },
    { L"Character Extra 2", 0x38ef62, 0x38ef82, indexKOFSprites_02UM_Angel },
    { L"Electric Palette", 0x38ef82, 0x38efa2, indexKOFSprites_02UM_Angel },
    { L"Lin Poison Palette (Unused)", 0x38efa2, 0x38efc2, indexKOFSprites_02UM_Angel },
    { L"Freeze Palette (Unused)", 0x38efc2, 0x38efe2, indexKOFSprites_02UM_Angel },
    { L"Super Trail", 0x38efe2, 0x38f002, indexKOFSprites_02UM_Angel },
    { L"Striker Portrait", 0x398ee2, 0x398f02 },
    { L"Order Select Portrait", 0x399b02, 0x399b22 },
    { L"Select Portrait", 0x39c622, 0x39c662 },
    { L"Win Portrait", 0x39e0e2, 0x39e122 },
    { L"Lifebar Portrait", 0x3b9102, 0x3b9122 },
    { L"Next Character Lifebar Portrait", 0x3b8602, 0x3b8622 },
};

const sGame_PaletteDataset KOF01_A_ATHENA_PUNCH_PALETTES[] =
{
    { L"Athena Punch", 0x38f122, 0x38f142, indexKOF01Sprites_Athena },
    { L"Character Extra 1", 0x38f142, 0x38f162, indexKOF01Sprites_Athena },
    { L"Character Extra 2", 0x38f162, 0x38f182, indexKOF01Sprites_Athena },
    { L"Electric Palette", 0x38f182, 0x38f1a2, indexKOF01Sprites_Athena },
    { L"Lin Poison Palette (Unused)", 0x38f1a2, 0x38f1c2, indexKOF01Sprites_Athena },
    { L"Freeze Palette (Unused)", 0x38f1c2, 0x38f1e2, indexKOF01Sprites_Athena },
    { L"Super Trail", 0x38f1e2, 0x38f202, indexKOF01Sprites_Athena },
    { L"Striker Portrait", 0x398f22, 0x398f42 },
    { L"Order Select Portrait", 0x399b22, 0x399b42 },
    { L"Select Portrait", 0x39c722, 0x39c762 },
    { L"Win Portrait", 0x39e122, 0x39e162 },
    { L"Lifebar Portrait", 0x3b9122, 0x3b9142 },
    { L"Next Character Lifebar Portrait", 0x3b8122, 0x3b8142 },
};

const sGame_PaletteDataset KOF01_A_ATHENA_KICK_PALETTES[] =
{
    { L"Athena Kick", 0x38f322, 0x38f342, indexKOF01Sprites_Athena },
    { L"Character Extra 1", 0x38f342, 0x38f362, indexKOF01Sprites_Athena },
    { L"Character Extra 2", 0x38f362, 0x38f382, indexKOF01Sprites_Athena },
    { L"Electric Palette", 0x38f382, 0x38f3a2, indexKOF01Sprites_Athena },
    { L"Lin Poison Palette (Unused)", 0x38f3a2, 0x38f3c2, indexKOF01Sprites_Athena },
    { L"Freeze Palette (Unused)", 0x38f3c2, 0x38f3e2, indexKOF01Sprites_Athena },
    { L"Super Trail", 0x38f3e2, 0x38f402, indexKOF01Sprites_Athena },
    { L"Striker Portrait", 0x398f42, 0x398f62 },
    { L"Order Select Portrait", 0x399b42, 0x399b62 },
    { L"Select Portrait", 0x39c762, 0x39c7a2 },
    { L"Win Portrait", 0x39e162, 0x39e1a2 },
    { L"Lifebar Portrait", 0x3b9142, 0x3b9162 },
    { L"Next Character Lifebar Portrait", 0x3b8622, 0x3b8642 },
};

const sGame_PaletteDataset KOF01_A_KENSOU_PUNCH_PALETTES[] =
{
    { L"Kensou Punch", 0x38f522, 0x38f542, indexKOFSprites_02UM_Kensou },
    { L"Character Extra 1", 0x38f542, 0x38f562, indexKOFSprites_02UM_Kensou },
    { L"Character Extra 2", 0x38f562, 0x38f582, indexKOFSprites_02UM_Kensou },
    { L"Electric Palette", 0x38f582, 0x38f5a2, indexKOFSprites_02UM_Kensou },
    { L"Lin Poison Palette (Unused)", 0x38f5a2, 0x38f5c2, indexKOFSprites_02UM_Kensou },
    { L"Freeze Palette (Unused)", 0x38f5c2, 0x38f5e2, indexKOFSprites_02UM_Kensou },
    { L"Super Trail", 0x38f5e2, 0x38f602, indexKOFSprites_02UM_Kensou },
    { L"Striker Portrait", 0x398f82, 0x398fa2 },
    { L"Order Select Portrait", 0x399b62, 0x399b82 },
    { L"Select Portrait", 0x39c862, 0x39c8a2 },
    { L"Win Portrait", 0x39e1a2, 0x39e1e2 },
    { L"Lifebar Portrait", 0x3b9162, 0x3b9182 },
    { L"Next Character Lifebar Portrait", 0x3b8142, 0x3b8162 },
};

const sGame_PaletteDataset KOF01_A_KENSOU_KICK_PALETTES[] =
{
    { L"Kensou Kick", 0x38f722, 0x38f742, indexKOFSprites_02UM_Kensou },
    { L"Character Extra 1", 0x38f742, 0x38f762, indexKOFSprites_02UM_Kensou },
    { L"Character Extra 2", 0x38f762, 0x38f782, indexKOFSprites_02UM_Kensou },
    { L"Electric Palette", 0x38f782, 0x38f7a2, indexKOFSprites_02UM_Kensou },
    { L"Lin Poison Palette (Unused)", 0x38f7a2, 0x38f7c2, indexKOFSprites_02UM_Kensou },
    { L"Freeze Palette (Unused)", 0x38f7c2, 0x38f7e2, indexKOFSprites_02UM_Kensou },
    { L"Super Trail", 0x38f7e2, 0x38f802, indexKOFSprites_02UM_Kensou },
    { L"Striker Portrait", 0x398fa2, 0x398fc2 },
    { L"Order Select Portrait", 0x399b82, 0x399ba2 },
    { L"Select Portrait", 0x39c8a2, 0x39c8e2 },
    { L"Win Portrait", 0x39e1e2, 0x39e222 },
    { L"Lifebar Portrait", 0x3b9182, 0x3b91a2 },
    { L"Next Character Lifebar Portrait", 0x3b8642, 0x3b8662 },
};

const sGame_PaletteDataset KOF01_A_CHIN_PUNCH_PALETTES[] =
{
    { L"Chin Punch", 0x38f922, 0x38f942, indexKOFSprites_02UM_Chin },
    { L"Character Extra 1", 0x38f942, 0x38f962, indexKOFSprites_02UM_Chin },
    { L"Character Extra 2", 0x38f962, 0x38f982, indexKOFSprites_02UM_Chin },
    { L"Electric Palette", 0x38f982, 0x38f9a2, indexKOFSprites_02UM_Chin },
    { L"Lin Poison Palette (Unused)", 0x38f9a2, 0x38f9c2, indexKOFSprites_02UM_Chin },
    { L"Freeze Palette (Unused)", 0x38f9c2, 0x38f9e2, indexKOFSprites_02UM_Chin },
    { L"Super Trail", 0x38f9e2, 0x38fa02, indexKOFSprites_02UM_Chin },
    { L"Striker Portrait", 0x398fe2, 0x399002 },
    { L"Order Select Portrait", 0x399ba2, 0x399bc2 },
    { L"Select Portrait", 0x39c9a2, 0x39c9e2 },
    { L"Win Portrait", 0x39e222, 0x39e262 },
    { L"Lifebar Portrait", 0x3b91a2, 0x3b91c2 },
    { L"Next Character Lifebar Portrait", 0x3b8162, 0x3b8182 },
};

const sGame_PaletteDataset KOF01_A_CHIN_KICK_PALETTES[] =
{
    { L"Chin Kick", 0x38fb22, 0x38fb42, indexKOFSprites_02UM_Chin },
    { L"Character Extra 1", 0x38fb42, 0x38fb62, indexKOFSprites_02UM_Chin },
    { L"Character Extra 2", 0x38fb62, 0x38fb82, indexKOFSprites_02UM_Chin },
    { L"Electric Palette", 0x38fb82, 0x38fba2, indexKOFSprites_02UM_Chin },
    { L"Lin Poison Palette (Unused)", 0x38fba2, 0x38fbc2, indexKOFSprites_02UM_Chin },
    { L"Freeze Palette (Unused)", 0x38fbc2, 0x38fbe2, indexKOFSprites_02UM_Chin },
    { L"Super Trail", 0x38fbe2, 0x38fc02, indexKOFSprites_02UM_Chin },
    { L"Striker Portrait", 0x399002, 0x399022 },
    { L"Order Select Portrait", 0x399bc2, 0x399be2 },
    { L"Select Portrait", 0x39c9e2, 0x39ca22 },
    { L"Win Portrait", 0x39e262, 0x39e2a2 },
    { L"Lifebar Portrait", 0x3b91c2, 0x3b91e2 },
    { L"Next Character Lifebar Portrait", 0x3b8662, 0x3b8682 },
};

const sGame_PaletteDataset KOF01_A_BAO_PUNCH_PALETTES[] =
{
    { L"Bao Punch", 0x38fd22, 0x38fd42, indexKOFSprites_02UM_Bao },
    { L"Character Extra 1", 0x38fd42, 0x38fd62, indexKOFSprites_02UM_Bao },
    { L"Character Extra 2", 0x38fd62, 0x38fd82, indexKOFSprites_02UM_Bao },
    { L"Electric Palette", 0x38fd82, 0x38fda2, indexKOFSprites_02UM_Bao },
    { L"Lin Poison Palette (Unused)", 0x38fda2, 0x38fdc2, indexKOFSprites_02UM_Bao },
    { L"Freeze Palette (Unused)", 0x38fdc2, 0x38fde2, indexKOFSprites_02UM_Bao },
    { L"Super Trail", 0x38fde2, 0x38fe02, indexKOFSprites_02UM_Bao },
    { L"Striker Portrait", 0x399042, 0x399062 },
    { L"Order Select Portrait", 0x399be2, 0x399c02 },
    { L"Select Portrait", 0x39cae2, 0x39cb22 },
    { L"Win Portrait", 0x39e2a2, 0x39e2e2 },
    { L"Lifebar Portrait", 0x3b91e2, 0x3b9202 },
    { L"Next Character Lifebar Portrait", 0x3b8182, 0x3b81a2 },
};

const sGame_PaletteDataset KOF01_A_BAO_KICK_PALETTES[] =
{
    { L"Bao Kick", 0x38ff22, 0x38ff42, indexKOFSprites_02UM_Bao },
    { L"Character Extra 1", 0x38ff42, 0x38ff62, indexKOFSprites_02UM_Bao },
    { L"Character Extra 2", 0x38ff62, 0x38ff82, indexKOFSprites_02UM_Bao },
    { L"Electric Palette", 0x38ff82, 0x38ffa2, indexKOFSprites_02UM_Bao },
    { L"Lin Poison Palette (Unused)", 0x38ffa2, 0x38ffc2, indexKOFSprites_02UM_Bao },
    { L"Freeze Palette (Unused)", 0x38ffc2, 0x38ffe2, indexKOFSprites_02UM_Bao },
    { L"Super Trail", 0x38ffe2, 0x390002, indexKOFSprites_02UM_Bao },
    { L"Striker Portrait", 0x399062, 0x399082 },
    { L"Order Select Portrait", 0x399c02, 0x399c22 },
    { L"Select Portrait", 0x39cb22, 0x39cb62 },
    { L"Win Portrait", 0x39e2e2, 0x39e322 },
    { L"Lifebar Portrait", 0x3b9202, 0x3b9222 },
    { L"Next Character Lifebar Portrait", 0x3b8682, 0x3b86a2 },
};

const sGame_PaletteDataset KOF01_A_KIM_PUNCH_PALETTES[] =
{
    { L"Kim Punch", 0x390122, 0x390142, indexKOFSprites_02UM_Kim },
    { L"Character Extra 1", 0x390142, 0x390162, indexKOFSprites_02UM_Kim },
    { L"Character Extra 2", 0x390162, 0x390182, indexKOFSprites_02UM_Kim },
    { L"Electric Palette", 0x390182, 0x3901a2, indexKOFSprites_02UM_Kim },
    { L"Lin Poison Palette (Unused)", 0x3901a2, 0x3901c2, indexKOFSprites_02UM_Kim },
    { L"Freeze Palette (Unused)", 0x3901c2, 0x3901e2, indexKOFSprites_02UM_Kim },
    { L"Super Trail", 0x3901e2, 0x390202, indexKOFSprites_02UM_Kim },
    { L"Striker Portrait", 0x3990a2, 0x3990c2 },
    { L"Order Select Portrait", 0x399c22, 0x399c42 },
    { L"Select Portrait", 0x39cc22, 0x39cc62 },
    { L"Win Portrait", 0x39e322, 0x39e362 },
    { L"Lifebar Portrait", 0x3b9222, 0x3b9242 },
    { L"Next Character Lifebar Portrait", 0x3b81a2, 0x3b81c2 },
};

const sGame_PaletteDataset KOF01_A_KIM_KICK_PALETTES[] =
{
    { L"Kim Kick", 0x390322, 0x390342, indexKOFSprites_02UM_Kim },
    { L"Character Extra 1", 0x390342, 0x390362, indexKOFSprites_02UM_Kim },
    { L"Character Extra 2", 0x390362, 0x390382, indexKOFSprites_02UM_Kim },
    { L"Electric Palette", 0x390382, 0x3903a2, indexKOFSprites_02UM_Kim },
    { L"Lin Poison Palette (Unused)", 0x3903a2, 0x3903c2, indexKOFSprites_02UM_Kim },
    { L"Freeze Palette (Unused)", 0x3903c2, 0x3903e2, indexKOFSprites_02UM_Kim },
    { L"Super Trail", 0x3903e2, 0x390402, indexKOFSprites_02UM_Kim },
    { L"Striker Portrait", 0x3990c2, 0x3990e2 },
    { L"Order Select Portrait", 0x399c42, 0x399c62 },
    { L"Select Portrait", 0x39cc62, 0x39cca2 },
    { L"Win Portrait", 0x39e362, 0x39e3a2 },
    { L"Lifebar Portrait", 0x3b9242, 0x3b9262 },
    { L"Next Character Lifebar Portrait", 0x3b86a2, 0x3b86c2 },
};

const sGame_PaletteDataset KOF01_A_CHANG_PUNCH_PALETTES[] =
{
    { L"Chang Punch", 0x390522, 0x390542, indexKOFSprites_02UM_Chang },
    { L"Character Extra 1", 0x390542, 0x390562, indexKOFSprites_02UM_Chang },
    { L"Character Extra 2", 0x390562, 0x390582, indexKOFSprites_02UM_Chang },
    { L"Electric Palette", 0x390582, 0x3905a2, indexKOFSprites_02UM_Chang },
    { L"Lin Poison Palette (Unused)", 0x3905a2, 0x3905c2, indexKOFSprites_02UM_Chang },
    { L"Freeze Palette (Unused)", 0x3905c2, 0x3905e2, indexKOFSprites_02UM_Chang },
    { L"Super Trail", 0x3905e2, 0x390602, indexKOFSprites_02UM_Chang },
    { L"Striker Portrait", 0x399102, 0x399122 },
    { L"Order Select Portrait", 0x399c62, 0x399c82 },
    { L"Select Portrait", 0x39cd62, 0x39cda2 },
    { L"Win Portrait", 0x39e3a2, 0x39e3e2 },
    { L"Lifebar Portrait", 0x3b9262, 0x3b9282 },
    { L"Next Character Lifebar Portrait", 0x3b81c2, 0x3b81e2 },
};

const sGame_PaletteDataset KOF01_A_CHANG_KICK_PALETTES[] =
{
    { L"Chang Kick", 0x390722, 0x390742, indexKOFSprites_02UM_Chang },
    { L"Character Extra 1", 0x390742, 0x390762, indexKOFSprites_02UM_Chang },
    { L"Character Extra 2", 0x390762, 0x390782, indexKOFSprites_02UM_Chang },
    { L"Electric Palette", 0x390782, 0x3907a2, indexKOFSprites_02UM_Chang },
    { L"Lin Poison Palette (Unused)", 0x3907a2, 0x3907c2, indexKOFSprites_02UM_Chang },
    { L"Freeze Palette (Unused)", 0x3907c2, 0x3907e2, indexKOFSprites_02UM_Chang },
    { L"Super Trail", 0x3907e2, 0x390802, indexKOFSprites_02UM_Chang },
    { L"Striker Portrait", 0x399122, 0x399142 },
    { L"Order Select Portrait", 0x399c82, 0x399ca2 },
    { L"Select Portrait", 0x39cda2, 0x39cde2 },
    { L"Win Portrait", 0x39e3e2, 0x39e422 },
    { L"Lifebar Portrait", 0x3b9282, 0x3b92a2 },
    { L"Next Character Lifebar Portrait", 0x3b86c2, 0x3b86e2 },
};

const sGame_PaletteDataset KOF01_A_CHOI_PUNCH_PALETTES[] =
{
    { L"Choi Punch", 0x390922, 0x390942, indexKOFSprites_02UM_Choi },
    { L"Character Extra 1", 0x390942, 0x390962, indexKOFSprites_02UM_Choi },
    { L"Character Extra 2", 0x390962, 0x390982, indexKOFSprites_02UM_Choi },
    { L"Electric Palette", 0x390982, 0x3909a2, indexKOFSprites_02UM_Choi },
    { L"Lin Poison Palette (Unused)", 0x3909a2, 0x3909c2, indexKOFSprites_02UM_Choi },
    { L"Freeze Palette (Unused)", 0x3909c2, 0x3909e2, indexKOFSprites_02UM_Choi },
    { L"Super Trail", 0x3909e2, 0x390a02, indexKOFSprites_02UM_Choi },
    { L"Striker Portrait", 0x399162, 0x399182 },
    { L"Order Select Portrait", 0x399ca2, 0x399cc2 },
    { L"Select Portrait", 0x39cea2, 0x39cee2 },
    { L"Win Portrait", 0x39e422, 0x39e462 },
    { L"Lifebar Portrait", 0x3b92a2, 0x3b92c2 },
    { L"Next Character Lifebar Portrait", 0x3b81e2, 0x3b8202 },
};

const sGame_PaletteDataset KOF01_A_CHOI_KICK_PALETTES[] =
{
    { L"Choi Kick", 0x390b22, 0x390b42, indexKOFSprites_02UM_Choi },
    { L"Character Extra 1", 0x390b42, 0x390b62, indexKOFSprites_02UM_Choi },
    { L"Character Extra 2", 0x390b62, 0x390b82, indexKOFSprites_02UM_Choi },
    { L"Electric Palette", 0x390b82, 0x390ba2, indexKOFSprites_02UM_Choi },
    { L"Lin Poison Palette (Unused)", 0x390ba2, 0x390bc2, indexKOFSprites_02UM_Choi },
    { L"Freeze Palette (Unused)", 0x390bc2, 0x390be2, indexKOFSprites_02UM_Choi },
    { L"Super Trail", 0x390be2, 0x390c02, indexKOFSprites_02UM_Choi },
    { L"Striker Portrait", 0x399182, 0x3991a2 },
    { L"Order Select Portrait", 0x399cc2, 0x399ce2 },
    { L"Select Portrait", 0x39cee2, 0x39cf22 },
    { L"Win Portrait", 0x39e462, 0x39e4a2 },
    { L"Lifebar Portrait", 0x3b92c2, 0x3b92e2 },
    { L"Next Character Lifebar Portrait", 0x3b86e2, 0x3b8702 },
};

const sGame_PaletteDataset KOF01_A_MAYLEE_PUNCH_PALETTES[] =
{
    { L"May Lee Punch", 0x390d22, 0x390d42, indexKOFSprites_02UM_MayLee },
    { L"Character Extra 1", 0x390d42, 0x390d62, indexKOFSprites_02UM_MayLee },
    { L"Character Extra 2", 0x390d62, 0x390d82, indexKOFSprites_02UM_MayLee },
    { L"Electric Palette", 0x390d82, 0x390da2, indexKOFSprites_02UM_MayLee },
    { L"Lin Poison Palette (Unused)", 0x390da2, 0x390dc2, indexKOFSprites_02UM_MayLee },
    { L"Freeze Palette (Unused)", 0x390dc2, 0x390de2, indexKOFSprites_02UM_MayLee },
    { L"Super Trail", 0x390de2, 0x390e02, indexKOFSprites_02UM_MayLee },
    { L"Striker Portrait", 0x3991c2, 0x3991e2 },
    { L"Order Select Portrait", 0x399ce2, 0x399d02 },
    { L"Select Portrait", 0x39cfe2, 0x39d022 },
    { L"Win Portrait", 0x39e4a2, 0x39e4e2 },
    { L"Lifebar Portrait", 0x3b92e2, 0x3b9302 },
    { L"Next Character Lifebar Portrait", 0x3b8202, 0x3b8222 },
};

const sGame_PaletteDataset KOF01_A_MAYLEE_KICK_PALETTES[] =
{
    { L"May Lee Kick", 0x390f22, 0x390f42, indexKOFSprites_02UM_MayLee },
    { L"Character Extra 1", 0x390f42, 0x390f62, indexKOFSprites_02UM_MayLee },
    { L"Character Extra 2", 0x390f62, 0x390f82, indexKOFSprites_02UM_MayLee },
    { L"Electric Palette", 0x390f82, 0x390fa2, indexKOFSprites_02UM_MayLee },
    { L"Lin Poison Palette (Unused)", 0x390fa2, 0x390fc2, indexKOFSprites_02UM_MayLee },
    { L"Freeze Palette (Unused)", 0x390fc2, 0x390fe2, indexKOFSprites_02UM_MayLee },
    { L"Super Trail", 0x390fe2, 0x391002, indexKOFSprites_02UM_MayLee },
    { L"Striker Portrait", 0x3991e2, 0x399202 },
    { L"Order Select Portrait", 0x399d02, 0x399d22 },
    { L"Select Portrait", 0x39d022, 0x39d062 },
    { L"Win Portrait", 0x39e4e2, 0x39e522 },
    { L"Lifebar Portrait", 0x3b9302, 0x3b9322 },
    { L"Next Character Lifebar Portrait", 0x3b8702, 0x3b8722 },
};

const sGame_PaletteDataset KOF01_A_ZERO_PUNCH_PALETTES[] =
{
    { L"Zero Punch", 0x391122, 0x391142, indexKOFSprites_02UM_ZeroOG },
    { L"Character Extra 1", 0x391142, 0x391162, indexKOFSprites_02UM_ZeroOG },
    { L"Character Extra 2", 0x391162, 0x391182, indexKOFSprites_02UM_ZeroOG },
    { L"Electric Palette", 0x391182, 0x3911a2, indexKOFSprites_02UM_ZeroOG },
    { L"Lin Poison Palette (Unused)", 0x3911a2, 0x3911c2, indexKOFSprites_02UM_ZeroOG },
    { L"Freeze Palette (Unused)", 0x3911c2, 0x3911e2, indexKOFSprites_02UM_ZeroOG },
    { L"Super Trail", 0x3911e2, 0x391202, indexKOFSprites_02UM_ZeroOG },
    { L"Order Select Portrait", 0x399d22, 0x399d42 },
    { L"Win Portrait", 0x39e522, 0x39e562 },
    { L"Lifebar Portrait", 0x3b9322, 0x3b9342 },
};

const sGame_PaletteDataset KOF01_A_ZERO_KICK_PALETTES[] =
{
    { L"Zero Kick", 0x391322, 0x391342, indexKOFSprites_02UM_ZeroOG },
    { L"Character Extra 1", 0x391342, 0x391362, indexKOFSprites_02UM_ZeroOG },
    { L"Character Extra 2", 0x391362, 0x391382, indexKOFSprites_02UM_ZeroOG },
    { L"Electric Palette", 0x391382, 0x3913a2, indexKOFSprites_02UM_ZeroOG },
    { L"Lin Poison Palette (Unused)", 0x3913a2, 0x3913c2, indexKOFSprites_02UM_ZeroOG },
    { L"Freeze Palette (Unused)", 0x3913c2, 0x3913e2, indexKOFSprites_02UM_ZeroOG },
    { L"Super Trail", 0x3913e2, 0x391402, indexKOFSprites_02UM_ZeroOG },
    { L"Order Select Portrait", 0x399d42, 0x399d62 },
    { L"Win Portrait", 0x39e562, 0x39e5a2 },
    { L"Lifebar Portrait", 0x3b9342, 0x3b9362 },
};

const sGame_PaletteDataset KOF01_A_IGNIZ_PUNCH_PALETTES[] =
{
    { L"Igniz Punch", 0x391522, 0x391542, indexKOFSprites_02UM_Igniz },
    { L"Character Extra 1", 0x391542, 0x391562, indexKOFSprites_02UM_Igniz },
    { L"Character Extra 2", 0x391562, 0x391582, indexKOFSprites_02UM_Igniz },
    { L"Electric Palette", 0x391582, 0x3915a2, indexKOFSprites_02UM_Igniz },
    { L"Lin Poison Palette (Unused)", 0x3915a2, 0x3915c2, indexKOFSprites_02UM_Igniz },
    { L"Freeze Palette (Unused)", 0x3915c2, 0x3915e2, indexKOFSprites_02UM_Igniz },
    { L"Super Trail", 0x3915e2, 0x391602, indexKOFSprites_02UM_Igniz },
    { L"Order Select Portrait", 0x399d62, 0x399d82 },
    { L"Win Portrait", 0x39e5a2, 0x39e5e2 },
    { L"Lifebar Portrait", 0x3b9362, 0x3b9382 },
};

const sGame_PaletteDataset KOF01_A_IGNIZ_KICK_PALETTES[] =
{
    { L"Igniz Kick", 0x391722, 0x391742, indexKOFSprites_02UM_Igniz },
    { L"Character Extra 1", 0x391742, 0x391762, indexKOFSprites_02UM_Igniz },
    { L"Character Extra 2", 0x391762, 0x391782, indexKOFSprites_02UM_Igniz },
    { L"Electric Palette", 0x391782, 0x3917a2, indexKOFSprites_02UM_Igniz },
    { L"Lin Poison Palette (Unused)", 0x3917a2, 0x3917c2, indexKOFSprites_02UM_Igniz },
    { L"Freeze Palette (Unused)", 0x3917c2, 0x3917e2, indexKOFSprites_02UM_Igniz },
    { L"Super Trail", 0x3917e2, 0x391802, indexKOFSprites_02UM_Igniz },
    { L"Order Select Portrait", 0x399d82, 0x399da2 },
    { L"Win Portrait", 0x39e5e2, 0x39e622 },
    { L"Lifebar Portrait", 0x3b9382, 0x3b93a2 },
};

const sGame_PaletteDataset KOF01_A_K_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x399fa2, 0x399fe2 },
    { L"Win Portrait Assist 2", 0x399fe2, 0x39a022 },
    { L"Win Portrait Assist 3", 0x39a022, 0x39a062 },
};

const sGame_PaletteDataset KOF01_A_MAXIMA_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a0e2, 0x39a122 },
    { L"Win Portrait Assist 2", 0x39a122, 0x39a162 },
    { L"Win Portrait Assist 3", 0x39a162, 0x39a1a2 },
};

const sGame_PaletteDataset KOF01_A_WHIP_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a222, 0x39a262 },
    { L"Win Portrait Assist 2", 0x39a262, 0x39a2a2 },
    { L"Win Portrait Assist 3", 0x39a2a2, 0x39a2e2 },
};

const sGame_PaletteDataset KOF01_A_LIN_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a362, 0x39a3a2 },
    { L"Win Portrait Assist 2", 0x39a3a2, 0x39a3e2 },
    { L"Win Portrait Assist 3", 0x39a3e2, 0x39a422 },
};

const sGame_PaletteDataset KOF01_A_KYO_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a4a2, 0x39a4e2 },
    { L"Win Portrait Assist 2", 0x39a4e2, 0x39a522 },
    { L"Win Portrait Assist 3", 0x39a522, 0x39a562 },
};

const sGame_PaletteDataset KOF01_A_BENIMARU_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a5e2, 0x39a622 },
    { L"Win Portrait Assist 2", 0x39a622, 0x39a662 },
    { L"Win Portrait Assist 3", 0x39a662, 0x39a6a2 },
};

const sGame_PaletteDataset KOF01_A_GORO_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a722, 0x39a762 },
    { L"Win Portrait Assist 2", 0x39a762, 0x39a7a2 },
    { L"Win Portrait Assist 3", 0x39a7a2, 0x39a7e2 },
};

const sGame_PaletteDataset KOF01_A_SHINGO_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a862, 0x39a8a2 },
    { L"Win Portrait Assist 2", 0x39a8a2, 0x39a8e2 },
    { L"Win Portrait Assist 3", 0x39a8e2, 0x39a922 },
};

const sGame_PaletteDataset KOF01_A_IORI_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39a9a2, 0x39a9e2 },
    { L"Win Portrait Assist 2", 0x39a9e2, 0x39aa22 },
    { L"Win Portrait Assist 3", 0x39aa22, 0x39aa62 },
};

const sGame_PaletteDataset KOF01_A_VANESSA_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39aae2, 0x39ab22 },
    { L"Win Portrait Assist 2", 0x39ab22, 0x39ab62 },
    { L"Win Portrait Assist 3", 0x39ab62, 0x39aba2 },
};

const sGame_PaletteDataset KOF01_A_SETH_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39ac22, 0x39ac62 },
    { L"Win Portrait Assist 2", 0x39ac62, 0x39aca2 },
    { L"Win Portrait Assist 3", 0x39aca2, 0x39ace2 },
};

const sGame_PaletteDataset KOF01_A_RAMON_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39ad62, 0x39ada2 },
    { L"Win Portrait Assist 2", 0x39ada2, 0x39ade2 },
    { L"Win Portrait Assist 3", 0x39ade2, 0x39ae22 },
};

const sGame_PaletteDataset KOF01_A_LEONA_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39aea2, 0x39aee2 },
    { L"Win Portrait Assist 2", 0x39aee2, 0x39af22 },
    { L"Win Portrait Assist 3", 0x39af22, 0x39af62 },
};

const sGame_PaletteDataset KOF01_A_RALF_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39afe2, 0x39b022 },
    { L"Win Portrait Assist 2", 0x39b022, 0x39b062 },
    { L"Win Portrait Assist 3", 0x39b062, 0x39b0a2 },
};

const sGame_PaletteDataset KOF01_A_CLARK_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b122, 0x39b162 },
    { L"Win Portrait Assist 2", 0x39b162, 0x39b1a2 },
    { L"Win Portrait Assist 3", 0x39b1a2, 0x39b1e2 },
};

const sGame_PaletteDataset KOF01_A_HEIDERN_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b262, 0x39b2a2 },
    { L"Win Portrait Assist 2", 0x39b2a2, 0x39b2e2 },
    { L"Win Portrait Assist 3", 0x39b2e2, 0x39b322 },
};

const sGame_PaletteDataset KOF01_A_TERRY_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b3a2, 0x39b3e2 },
    { L"Win Portrait Assist 2", 0x39b3e2, 0x39b422 },
    { L"Win Portrait Assist 3", 0x39b422, 0x39b462 },
};

const sGame_PaletteDataset KOF01_A_ANDY_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b4e2, 0x39b522 },
    { L"Win Portrait Assist 2", 0x39b522, 0x39b562 },
    { L"Win Portrait Assist 3", 0x39b562, 0x39b5a2 },
};

const sGame_PaletteDataset KOF01_A_JOE_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b622, 0x39b662 },
    { L"Win Portrait Assist 2", 0x39b662, 0x39b6a2 },
    { L"Win Portrait Assist 3", 0x39b6a2, 0x39b6e2 },
};

const sGame_PaletteDataset KOF01_A_MARY_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b762, 0x39b7a2 },
    { L"Win Portrait Assist 2", 0x39b7a2, 0x39b7e2 },
    { L"Win Portrait Assist 3", 0x39b7e2, 0x39b822 },
};

const sGame_PaletteDataset KOF01_A_RYO_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b8a2, 0x39b8e2 },
    { L"Win Portrait Assist 2", 0x39b8e2, 0x39b922 },
    { L"Win Portrait Assist 3", 0x39b922, 0x39b962 },
};

const sGame_PaletteDataset KOF01_A_ROBERT_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39b9e2, 0x39ba22 },
    { L"Win Portrait Assist 2", 0x39ba22, 0x39ba62 },
    { L"Win Portrait Assist 3", 0x39ba62, 0x39baa2 },
};

const sGame_PaletteDataset KOF01_A_YURI_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39bb22, 0x39bb62 },
    { L"Win Portrait Assist 2", 0x39bb62, 0x39bba2 },
    { L"Win Portrait Assist 3", 0x39bba2, 0x39bbe2 },
};

const sGame_PaletteDataset KOF01_A_TAKUMA_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39bc62, 0x39bca2 },
    { L"Win Portrait Assist 2", 0x39bca2, 0x39bce2 },
    { L"Win Portrait Assist 3", 0x39bce2, 0x39bd22 },
};

const sGame_PaletteDataset KOF01_A_KING_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39bda2, 0x39bde2 },
    { L"Win Portrait Assist 2", 0x39bde2, 0x39be22 },
    { L"Win Portrait Assist 3", 0x39be22, 0x39be62 },
};

const sGame_PaletteDataset KOF01_A_MAI_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39bee2, 0x39bf22 },
    { L"Win Portrait Assist 2", 0x39bf22, 0x39bf62 },
    { L"Win Portrait Assist 3", 0x39bf62, 0x39bfa2 },
};

const sGame_PaletteDataset KOF01_A_HINAKO_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c022, 0x39c062 },
    { L"Win Portrait Assist 2", 0x39c062, 0x39c0a2 },
    { L"Win Portrait Assist 3", 0x39c0a2, 0x39c0e2 },
};

const sGame_PaletteDataset KOF01_A_XIANGFEI_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c162, 0x39c1a2 },
    { L"Win Portrait Assist 2", 0x39c1a2, 0x39c1e2 },
    { L"Win Portrait Assist 3", 0x39c1e2, 0x39c222 },
};

const sGame_PaletteDataset KOF01_A_KULA_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c2a2, 0x39c2e2 },
    { L"Win Portrait Assist 2", 0x39c2e2, 0x39c322 },
    { L"Win Portrait Assist 3", 0x39c322, 0x39c362 },
};

const sGame_PaletteDataset KOF01_A_FOXY_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c3e2, 0x39c422 },
    { L"Win Portrait Assist 2", 0x39c422, 0x39c462 },
    { L"Win Portrait Assist 3", 0x39c462, 0x39c4a2 },
};

const sGame_PaletteDataset KOF01_A_K9999_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c522, 0x39c562 },
    { L"Win Portrait Assist 2", 0x39c562, 0x39c5a2 },
    { L"Win Portrait Assist 3", 0x39c5a2, 0x39c5e2 },
};

const sGame_PaletteDataset KOF01_A_ANGEL_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c662, 0x39c6a2 },
    { L"Win Portrait Assist 2", 0x39c6a2, 0x39c6e2 },
    { L"Win Portrait Assist 3", 0x39c6e2, 0x39c722 },
};

const sGame_PaletteDataset KOF01_A_ATHENA_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c7a2, 0x39c7e2 },
    { L"Win Portrait Assist 2", 0x39c7e2, 0x39c822 },
    { L"Win Portrait Assist 3", 0x39c822, 0x39c862 },
};

const sGame_PaletteDataset KOF01_A_KENSOU_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39c8e2, 0x39c922 },
    { L"Win Portrait Assist 2", 0x39c922, 0x39c962 },
    { L"Win Portrait Assist 3", 0x39c962, 0x39c9a2 },
};

const sGame_PaletteDataset KOF01_A_CHIN_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39ca22, 0x39ca62 },
    { L"Win Portrait Assist 2", 0x39ca62, 0x39caa2 },
    { L"Win Portrait Assist 3", 0x39caa2, 0x39cae2 },
};

const sGame_PaletteDataset KOF01_A_BAO_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39cb62, 0x39cba2 },
    { L"Win Portrait Assist 2", 0x39cba2, 0x39cbe2 },
    { L"Win Portrait Assist 3", 0x39cbe2, 0x39cc22 },
};

const sGame_PaletteDataset KOF01_A_KIM_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39cca2, 0x39cce2 },
    { L"Win Portrait Assist 2", 0x39cce2, 0x39cd22 },
    { L"Win Portrait Assist 3", 0x39cd22, 0x39cd62 },
};

const sGame_PaletteDataset KOF01_A_CHANG_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39cde2, 0x39ce22 },
    { L"Win Portrait Assist 2", 0x39ce22, 0x39ce62 },
    { L"Win Portrait Assist 3", 0x39ce62, 0x39cea2 },
};

const sGame_PaletteDataset KOF01_A_CHOI_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39cf22, 0x39cf62 },
    { L"Win Portrait Assist 2", 0x39cf62, 0x39cfa2 },
    { L"Win Portrait Assist 3", 0x39cfa2, 0x39cfe2 },
};

const sGame_PaletteDataset KOF01_A_MAYLEE_WINPORTRAIT_PALETTES[] =
{
    { L"Win Portrait Assist 1", 0x39d062, 0x39d0a2 },
    { L"Win Portrait Assist 2", 0x39d0a2, 0x39d0e2 },
    { L"Win Portrait Assist 3", 0x39d0e2, 0x39d122 },
};

const sGame_PaletteDataset KOF01_A_KEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392522, 0x392542 },
    { L"Effect 1", 0x392542, 0x392562 },
    { L"Effect 2", 0x392562, 0x392582 },
    { L"Effect 3", 0x392582, 0x3925a2 },
    { L"Effect 4", 0x3925a2, 0x3925c2 },
    { L"Effect 5", 0x3925c2, 0x3925e2 },
    { L"Effect 6", 0x3925e2, 0x392602 },
    { L"Effect 7", 0x392602, 0x392622 },
};

const sGame_PaletteDataset KOF01_A_MAXIMAEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392722, 0x392742 },
    { L"Effect 1", 0x392742, 0x392762 },
    { L"Effect 2", 0x392762, 0x392782 },
    { L"Effect 3", 0x392782, 0x3927a2 },
    { L"Effect 4", 0x3927a2, 0x3927c2 },
    { L"Effect 5", 0x3927c2, 0x3927e2 },
    { L"Effect 6", 0x3927e2, 0x392802 },
    { L"Effect 7", 0x392802, 0x392822 },
};

const sGame_PaletteDataset KOF01_A_WHIPEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392922, 0x392942 },
    { L"Effect 1", 0x392942, 0x392962 },
    { L"Effect 2", 0x392962, 0x392982 },
    { L"Effect 3", 0x392982, 0x3929a2 },
    { L"Effect 4", 0x3929a2, 0x3929c2 },
    { L"Effect 5", 0x3929c2, 0x3929e2 },
    { L"Effect 6", 0x3929e2, 0x392a02 },
    { L"Effect 7", 0x392a02, 0x392a22 },
};

const sGame_PaletteDataset KOF01_A_LINEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392b22, 0x392b42 },
    { L"Effect 1", 0x392b42, 0x392b62 },
    { L"Effect 2", 0x392b62, 0x392b82 },
    { L"Effect 3", 0x392b82, 0x392ba2 },
    { L"Effect 4", 0x392ba2, 0x392bc2 },
    { L"Effect 5", 0x392bc2, 0x392be2 },
    { L"Effect 6", 0x392be2, 0x392c02 },
    { L"Effect 7", 0x392c02, 0x392c22 },
};

const sGame_PaletteDataset KOF01_A_KYOEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392d22, 0x392d42 },
    { L"Effect 1", 0x392d42, 0x392d62 },
    { L"Effect 2", 0x392d62, 0x392d82 },
    { L"Effect 3", 0x392d82, 0x392da2 },
    { L"Effect 4", 0x392da2, 0x392dc2 },
    { L"Effect 5", 0x392dc2, 0x392de2 },
    { L"Effect 6", 0x392de2, 0x392e02 },
    { L"Effect 7", 0x392e02, 0x392e22 },
};

const sGame_PaletteDataset KOF01_A_BENIMARUEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x392f22, 0x392f42 },
    { L"Effect 1", 0x392f42, 0x392f62 },
    { L"Effect 2", 0x392f62, 0x392f82 },
    { L"Effect 3", 0x392f82, 0x392fa2 },
    { L"Effect 4", 0x392fa2, 0x392fc2 },
    { L"Effect 5", 0x392fc2, 0x392fe2 },
    { L"Effect 6", 0x392fe2, 0x393002 },
    { L"Effect 7", 0x393002, 0x393022 },
};

const sGame_PaletteDataset KOF01_A_IORIEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x393522, 0x393542 },
    { L"Effect 1", 0x393542, 0x393562 },
    { L"Effect 2", 0x393562, 0x393582 },
    { L"Effect 3", 0x393582, 0x3935a2 },
    { L"Effect 4", 0x3935a2, 0x3935c2 },
    { L"Effect 5", 0x3935c2, 0x3935e2 },
    { L"Effect 6", 0x3935e2, 0x393602 },
    { L"Effect 7", 0x393602, 0x393622 },
};

const sGame_PaletteDataset KOF01_A_SETHEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x393922, 0x393942 },
    { L"Effect 1", 0x393942, 0x393962 },
    { L"Effect 2", 0x393962, 0x393982 },
    { L"Effect 3", 0x393982, 0x3939a2 },
    { L"Effect 4", 0x3939a2, 0x3939c2 },
    { L"Effect 5", 0x3939c2, 0x3939e2 },
    { L"Effect 6", 0x3939e2, 0x393a02 },
    { L"Effect 7", 0x393a02, 0x393a22 },
};

const sGame_PaletteDataset KOF01_A_LEONAEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x393d22, 0x393d42 },
    { L"Effect 1", 0x393d42, 0x393d62 },
    { L"Effect 2", 0x393d62, 0x393d82 },
    { L"Effect 3", 0x393d82, 0x393da2 },
    { L"Effect 4", 0x393da2, 0x393dc2 },
    { L"Effect 5", 0x393dc2, 0x393de2 },
    { L"Effect 6", 0x393de2, 0x393e02 },
    { L"Effect 7", 0x393e02, 0x393e22 },
};

const sGame_PaletteDataset KOF01_A_HEIDERNEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394322, 0x394342 },
    { L"Effect 1", 0x394342, 0x394362 },
    { L"Effect 2", 0x394362, 0x394382 },
    { L"Effect 3", 0x394382, 0x3943a2 },
    { L"Effect 4", 0x3943a2, 0x3943c2 },
    { L"Effect 5", 0x3943c2, 0x3943e2 },
    { L"Effect 6", 0x3943e2, 0x394402 },
    { L"Effect 7", 0x394402, 0x394422 },
};

const sGame_PaletteDataset KOF01_A_TERRYEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394522, 0x394542 },
    { L"Effect 1", 0x394542, 0x394562 },
    { L"Effect 2", 0x394562, 0x394582 },
    { L"Effect 3", 0x394582, 0x3945a2 },
    { L"Effect 4", 0x3945a2, 0x3945c2 },
    { L"Effect 5", 0x3945c2, 0x3945e2 },
    { L"Effect 6", 0x3945e2, 0x394602 },
    { L"Effect 7", 0x394602, 0x394622 },
};

const sGame_PaletteDataset KOF01_A_ANDYEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394722, 0x394742 },
    { L"Effect 1", 0x394742, 0x394762 },
    { L"Effect 2", 0x394762, 0x394782 },
    { L"Effect 3", 0x394782, 0x3947a2 },
    { L"Effect 4", 0x3947a2, 0x3947c2 },
    { L"Effect 5", 0x3947c2, 0x3947e2 },
    { L"Effect 6", 0x3947e2, 0x394802 },
    { L"Effect 7", 0x394802, 0x394822 },
};

const sGame_PaletteDataset KOF01_A_JOEEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394922, 0x394942 },
    { L"Effect 1", 0x394942, 0x394962 },
    { L"Effect 2", 0x394962, 0x394982 },
    { L"Effect 3", 0x394982, 0x3949a2 },
    { L"Effect 4", 0x3949a2, 0x3949c2 },
    { L"Effect 5", 0x3949c2, 0x3949e2 },
    { L"Effect 6", 0x3949e2, 0x394a02 },
    { L"Effect 7", 0x394a02, 0x394a22 },
};

const sGame_PaletteDataset KOF01_A_MARYEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394b22, 0x394b42 },
    { L"Effect 1", 0x394b42, 0x394b62 },
    { L"Effect 2", 0x394b62, 0x394b82 },
    { L"Effect 3", 0x394b82, 0x394ba2 },
    { L"Effect 4", 0x394ba2, 0x394bc2 },
    { L"Effect 5", 0x394bc2, 0x394be2 },
    { L"Effect 6", 0x394be2, 0x394c02 },
    { L"Effect 7", 0x394c02, 0x394c22 },
};

const sGame_PaletteDataset KOF01_A_RYOEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394d22, 0x394d42 },
    { L"Effect 1", 0x394d42, 0x394d62 },
    { L"Effect 2", 0x394d62, 0x394d82 },
    { L"Effect 3", 0x394d82, 0x394da2 },
    { L"Effect 4", 0x394da2, 0x394dc2 },
    { L"Effect 5", 0x394dc2, 0x394de2 },
    { L"Effect 6", 0x394de2, 0x394e02 },
    { L"Effect 7", 0x394e02, 0x394e22 },
};

const sGame_PaletteDataset KOF01_A_ROBERTEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x394f22, 0x394f42 },
    { L"Effect 1", 0x394f42, 0x394f62 },
    { L"Effect 2", 0x394f62, 0x394f82 },
    { L"Effect 3", 0x394f82, 0x394fa2 },
    { L"Effect 4", 0x394fa2, 0x394fc2 },
    { L"Effect 5", 0x394fc2, 0x394fe2 },
    { L"Effect 6", 0x394fe2, 0x395002 },
    { L"Effect 7", 0x395002, 0x395022 },
};

const sGame_PaletteDataset KOF01_A_YURIEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395122, 0x395142 },
    { L"Effect 1", 0x395142, 0x395162 },
    { L"Effect 2", 0x395162, 0x395182 },
    { L"Effect 3", 0x395182, 0x3951a2 },
    { L"Effect 4", 0x3951a2, 0x3951c2 },
    { L"Effect 5", 0x3951c2, 0x3951e2 },
    { L"Effect 6", 0x3951e2, 0x395202 },
    { L"Effect 7", 0x395202, 0x395222 },
};

const sGame_PaletteDataset KOF01_A_TAKUMAEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395322, 0x395342 },
    { L"Effect 1", 0x395342, 0x395362 },
    { L"Effect 2", 0x395362, 0x395382 },
    { L"Effect 3", 0x395382, 0x3953a2 },
    { L"Effect 4", 0x3953a2, 0x3953c2 },
    { L"Effect 5", 0x3953c2, 0x3953e2 },
    { L"Effect 6", 0x3953e2, 0x395402 },
    { L"Effect 7", 0x395402, 0x395422 },
};

const sGame_PaletteDataset KOF01_A_KINGEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395522, 0x395542 },
    { L"Effect 1", 0x395542, 0x395562 },
    { L"Effect 2", 0x395562, 0x395582 },
    { L"Effect 3", 0x395582, 0x3955a2 },
    { L"Effect 4", 0x3955a2, 0x3955c2 },
    { L"Effect 5", 0x3955c2, 0x3955e2 },
    { L"Effect 6", 0x3955e2, 0x395602 },
    { L"Effect 7", 0x395602, 0x395622 },
};

const sGame_PaletteDataset KOF01_A_MAIEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395722, 0x395742 },
    { L"Effect 1", 0x395742, 0x395762 },
    { L"Effect 2", 0x395762, 0x395782 },
    { L"Effect 3", 0x395782, 0x3957a2 },
    { L"Effect 4", 0x3957a2, 0x3957c2 },
    { L"Effect 5", 0x3957c2, 0x3957e2 },
    { L"Effect 6", 0x3957e2, 0x395802 },
    { L"Effect 7", 0x395802, 0x395822 },
};

const sGame_PaletteDataset KOF01_A_XIANGFEIEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395b22, 0x395b42 },
    { L"Effect 1", 0x395b42, 0x395b62 },
    { L"Effect 2", 0x395b62, 0x395b82 },
    { L"Effect 3", 0x395b82, 0x395ba2 },
    { L"Effect 4", 0x395ba2, 0x395bc2 },
    { L"Effect 5", 0x395bc2, 0x395be2 },
    { L"Effect 6", 0x395be2, 0x395c02 },
    { L"Effect 7", 0x395c02, 0x395c22 },
};

const sGame_PaletteDataset KOF01_A_KULAEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395d22, 0x395d42 },
    { L"Effect 1", 0x395d42, 0x395d62 },
    { L"Effect 2", 0x395d62, 0x395d82 },
    { L"Effect 3", 0x395d82, 0x395da2 },
    { L"Effect 4", 0x395da2, 0x395dc2 },
    { L"Effect 5", 0x395dc2, 0x395de2 },
    { L"Effect 6", 0x395de2, 0x395e02 },
    { L"Effect 7", 0x395e02, 0x395e22 },
};

const sGame_PaletteDataset KOF01_A_FOXYEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x395f22, 0x395f42 },
    { L"Effect 1", 0x395f42, 0x395f62 },
    { L"Effect 2", 0x395f62, 0x395f82 },
    { L"Effect 3", 0x395f82, 0x395fa2 },
    { L"Effect 4", 0x395fa2, 0x395fc2 },
    { L"Effect 5", 0x395fc2, 0x395fe2 },
    { L"Effect 6", 0x395fe2, 0x396002 },
    { L"Effect 7", 0x396002, 0x396022 },
};

const sGame_PaletteDataset KOF01_A_K9999EFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396122, 0x396142 },
    { L"Effect 1", 0x396142, 0x396162 },
    { L"Effect 2", 0x396162, 0x396182 },
    { L"Effect 3", 0x396182, 0x3961a2 },
    { L"Effect 4", 0x3961a2, 0x3961c2 },
    { L"Effect 5", 0x3961c2, 0x3961e2 },
    { L"Effect 6", 0x3961e2, 0x396202 },
    { L"Effect 7", 0x396202, 0x396222 },
};

const sGame_PaletteDataset KOF01_A_ATHENAEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396522, 0x396542 },
    { L"Effect 1", 0x396542, 0x396562 },
    { L"Effect 2", 0x396562, 0x396582 },
    { L"Effect 3", 0x396582, 0x3965a2 },
    { L"Effect 4", 0x3965a2, 0x3965c2 },
    { L"Effect 5", 0x3965c2, 0x3965e2 },
    { L"Effect 6", 0x3965e2, 0x396602 },
    { L"Effect 7", 0x396602, 0x396622 },
};

const sGame_PaletteDataset KOF01_A_KENSOUEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396722, 0x396742 },
    { L"Effect 1", 0x396742, 0x396762 },
    { L"Effect 2", 0x396762, 0x396782 },
    { L"Effect 3", 0x396782, 0x3967a2 },
    { L"Effect 4", 0x3967a2, 0x3967c2 },
    { L"Effect 5", 0x3967c2, 0x3967e2 },
    { L"Effect 6", 0x3967e2, 0x396802 },
    { L"Effect 7", 0x396802, 0x396822 },
};

const sGame_PaletteDataset KOF01_A_CHINEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396922, 0x396942 },
    { L"Effect 1", 0x396942, 0x396962 },
    { L"Effect 2", 0x396962, 0x396982 },
    { L"Effect 3", 0x396982, 0x3969a2 },
    { L"Effect 4", 0x3969a2, 0x3969c2 },
    { L"Effect 5", 0x3969c2, 0x3969e2 },
    { L"Effect 6", 0x3969e2, 0x396a02 },
    { L"Effect 7", 0x396a02, 0x396a22 },
};

const sGame_PaletteDataset KOF01_A_BAOEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396b22, 0x396b42 },
    { L"Effect 1", 0x396b42, 0x396b62 },
    { L"Effect 2", 0x396b62, 0x396b82 },
    { L"Effect 3", 0x396b82, 0x396ba2 },
    { L"Effect 4", 0x396ba2, 0x396bc2 },
    { L"Effect 5", 0x396bc2, 0x396be2 },
    { L"Effect 6", 0x396be2, 0x396c02 },
    { L"Effect 7", 0x396c02, 0x396c22 },
};

const sGame_PaletteDataset KOF01_A_CHANGEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x396f22, 0x396f42 },
    { L"Effect 1", 0x396f42, 0x396f62 },
    { L"Effect 2", 0x396f62, 0x396f82 },
    { L"Effect 3", 0x396f82, 0x396fa2 },
    { L"Effect 4", 0x396fa2, 0x396fc2 },
    { L"Effect 5", 0x396fc2, 0x396fe2 },
    { L"Effect 6", 0x396fe2, 0x397002 },
    { L"Effect 7", 0x397002, 0x397022 },
};

const sGame_PaletteDataset KOF01_A_CHOIEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x397122, 0x397142 },
    { L"Effect 1", 0x397142, 0x397162 },
    { L"Effect 2", 0x397162, 0x397182 },
    { L"Effect 3", 0x397182, 0x3971a2 },
    { L"Effect 4", 0x3971a2, 0x3971c2 },
    { L"Effect 5", 0x3971c2, 0x3971e2 },
    { L"Effect 6", 0x3971e2, 0x397202 },
    { L"Effect 7", 0x397202, 0x397222 },
};

const sGame_PaletteDataset KOF01_A_ZEROEXTRAS_PALETTES[] =
{
    { L"Effect 0", 0x397522, 0x397542 },
    { L"Effect 1", 0x397542, 0x397562 },
    { L"Effect 2", 0x397562, 0x397582 },
    { L"Effect 3", 0x397582, 0x3975a2 },
    { L"Effect 4", 0x3975a2, 0x3975c2 },
    { L"Effect 5", 0x3975c2, 0x3975e2 },
    { L"Effect 6", 0x3975e2, 0x397602 },
    { L"Effect 7", 0x397602, 0x397622 },
};

const sGame_PaletteDataset KOF01_A_IGNIZEXTRAS_PALETTES[] =
{
    { L"Effect 0", 0x397722, 0x397742 },
    { L"Effect 1", 0x397742, 0x397762 },
    { L"Effect 2", 0x397762, 0x397782 },
    { L"Effect 3", 0x397782, 0x3977a2 },
    { L"Effect 4", 0x3977a2, 0x3977c2 },
    { L"Effect 5", 0x3977c2, 0x3977e2 },
    { L"Effect 6", 0x3977e2, 0x397802 },
    { L"Effect 7", 0x397802, 0x397822 },
};

const sGame_PaletteDataset KOF01_A_STRIKERKRIZALIDEFFECTS_PALETTES[] =
{
    { L"Effect 0", 0x397922, 0x397942 },
    { L"Effect 1", 0x397942, 0x397962 },
    { L"Effect 2", 0x397962, 0x397982 },
    { L"Effect 3", 0x397982, 0x3979a2 },
    { L"Effect 4", 0x3979a2, 0x3979c2 },
    { L"Effect 5", 0x3979c2, 0x3979e2 },
    { L"Effect 6", 0x3979e2, 0x397a02 },
    { L"Effect 7", 0x397a02, 0x397a22 },
};

const sDescTreeNode KOF01_A_K_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_K_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_K_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_K_KICK_PALETTES, ARRAYSIZE(KOF01_A_K_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_K_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_K_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_KEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_KEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_MAXIMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_MAXIMA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_KICK_PALETTES, ARRAYSIZE(KOF01_A_MAXIMA_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_MAXIMA_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMAEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_MAXIMAEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_WHIP_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_WHIP_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_WHIP_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_WHIP_KICK_PALETTES, ARRAYSIZE(KOF01_A_WHIP_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_WHIP_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_WHIP_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_WHIPEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_WHIPEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_LIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_LIN_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_LIN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_LIN_KICK_PALETTES, ARRAYSIZE(KOF01_A_LIN_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_LIN_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_LIN_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_LINEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_LINEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_KYO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_KYO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_KYO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_KYO_KICK_PALETTES, ARRAYSIZE(KOF01_A_KYO_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_KYO_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_KYO_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_KYOEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_KYOEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_BENIMARU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_BENIMARU_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_BENIMARU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_BENIMARU_KICK_PALETTES, ARRAYSIZE(KOF01_A_BENIMARU_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_BENIMARU_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_BENIMARU_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_BENIMARUEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_BENIMARUEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_GORO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_GORO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_GORO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_GORO_KICK_PALETTES, ARRAYSIZE(KOF01_A_GORO_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_GORO_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_GORO_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_SHINGO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_SHINGO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_SHINGO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_SHINGO_KICK_PALETTES, ARRAYSIZE(KOF01_A_SHINGO_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_SHINGO_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_SHINGO_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_IORI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_IORI_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_IORI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_IORI_KICK_PALETTES, ARRAYSIZE(KOF01_A_IORI_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_IORI_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_IORI_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_IORIEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_IORIEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_VANESSA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_VANESSA_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_VANESSA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_VANESSA_KICK_PALETTES, ARRAYSIZE(KOF01_A_VANESSA_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_VANESSA_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_VANESSA_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_SETH_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_SETH_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_SETH_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_SETH_KICK_PALETTES, ARRAYSIZE(KOF01_A_SETH_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_SETH_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_SETH_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_SETHEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_SETHEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_RAMON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_RAMON_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_RAMON_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_RAMON_KICK_PALETTES, ARRAYSIZE(KOF01_A_RAMON_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_RAMON_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_RAMON_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_LEONA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_LEONA_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_LEONA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_LEONA_KICK_PALETTES, ARRAYSIZE(KOF01_A_LEONA_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_LEONA_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_LEONA_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_LEONAEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_LEONAEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_RALF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_RALF_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_RALF_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_RALF_KICK_PALETTES, ARRAYSIZE(KOF01_A_RALF_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_RALF_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_RALF_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_CLARK_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_CLARK_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_CLARK_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_CLARK_KICK_PALETTES, ARRAYSIZE(KOF01_A_CLARK_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_CLARK_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_CLARK_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_HEIDERN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_HEIDERN_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_HEIDERN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_HEIDERN_KICK_PALETTES, ARRAYSIZE(KOF01_A_HEIDERN_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_HEIDERN_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_HEIDERN_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_HEIDERNEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_HEIDERNEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_TERRY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_TERRY_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_TERRY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_TERRY_KICK_PALETTES, ARRAYSIZE(KOF01_A_TERRY_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_TERRY_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_TERRY_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_TERRYEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_TERRYEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_ANDY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_ANDY_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_ANDY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_ANDY_KICK_PALETTES, ARRAYSIZE(KOF01_A_ANDY_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_ANDY_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_ANDY_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_ANDYEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_ANDYEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_JOE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_JOE_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_JOE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_JOE_KICK_PALETTES, ARRAYSIZE(KOF01_A_JOE_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_JOE_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_JOE_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_JOEEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_JOEEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_MARY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_MARY_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_MARY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_MARY_KICK_PALETTES, ARRAYSIZE(KOF01_A_MARY_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_MARY_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_MARY_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_MARYEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_MARYEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_RYO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_RYO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_RYO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_RYO_KICK_PALETTES, ARRAYSIZE(KOF01_A_RYO_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_RYO_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_RYO_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_RYOEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_RYOEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_ROBERT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_ROBERT_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_ROBERT_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_ROBERT_KICK_PALETTES, ARRAYSIZE(KOF01_A_ROBERT_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_ROBERT_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_ROBERT_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_ROBERTEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_ROBERTEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_YURI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_YURI_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_YURI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_YURI_KICK_PALETTES, ARRAYSIZE(KOF01_A_YURI_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_YURI_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_YURI_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_YURIEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_YURIEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_TAKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_TAKUMA_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_TAKUMA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_TAKUMA_KICK_PALETTES, ARRAYSIZE(KOF01_A_TAKUMA_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_TAKUMA_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_TAKUMA_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_TAKUMAEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_TAKUMAEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_KING_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_KING_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_KING_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_KING_KICK_PALETTES, ARRAYSIZE(KOF01_A_KING_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_KING_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_KING_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_KINGEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_KINGEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_MAI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_MAI_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_MAI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_MAI_KICK_PALETTES, ARRAYSIZE(KOF01_A_MAI_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_MAI_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_MAI_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_MAIEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_MAIEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_HINAKO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_HINAKO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_HINAKO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_HINAKO_KICK_PALETTES, ARRAYSIZE(KOF01_A_HINAKO_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_HINAKO_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_HINAKO_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_XIANGFEI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_XIANGFEI_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_XIANGFEI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_XIANGFEI_KICK_PALETTES, ARRAYSIZE(KOF01_A_XIANGFEI_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_XIANGFEI_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_XIANGFEI_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_XIANGFEIEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_XIANGFEIEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_KULA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_KULA_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_KULA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_KULA_KICK_PALETTES, ARRAYSIZE(KOF01_A_KULA_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_KULA_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_KULA_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_KULAEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_KULAEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_FOXY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_FOXY_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_FOXY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_FOXY_KICK_PALETTES, ARRAYSIZE(KOF01_A_FOXY_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_FOXY_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_FOXY_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_FOXYEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_FOXYEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_K9999_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_K9999_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_KICK_PALETTES, ARRAYSIZE(KOF01_A_K9999_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_K9999_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_K9999EFFECTS_PALETTES, ARRAYSIZE(KOF01_A_K9999EFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_ANGEL_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_ANGEL_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_ANGEL_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_ANGEL_KICK_PALETTES, ARRAYSIZE(KOF01_A_ANGEL_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_ANGEL_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_ANGEL_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_ATHENA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_ATHENA_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_ATHENA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_ATHENA_KICK_PALETTES, ARRAYSIZE(KOF01_A_ATHENA_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_ATHENA_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_ATHENA_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_ATHENAEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_ATHENAEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_KENSOU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_KENSOU_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_KENSOU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_KENSOU_KICK_PALETTES, ARRAYSIZE(KOF01_A_KENSOU_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_KENSOU_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_KENSOU_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_KENSOUEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_KENSOUEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_CHIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_CHIN_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_CHIN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_CHIN_KICK_PALETTES, ARRAYSIZE(KOF01_A_CHIN_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_CHIN_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_CHIN_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_CHINEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_CHINEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_BAO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_BAO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_BAO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_BAO_KICK_PALETTES, ARRAYSIZE(KOF01_A_BAO_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_BAO_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_BAO_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_BAOEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_BAOEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_KIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_KIM_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_KIM_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_KIM_KICK_PALETTES, ARRAYSIZE(KOF01_A_KIM_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_KIM_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_KIM_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_CHANG_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_CHANG_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_CHANG_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_CHANG_KICK_PALETTES, ARRAYSIZE(KOF01_A_CHANG_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_CHANG_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_CHANG_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_CHANGEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_CHANGEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_CHOI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_CHOI_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_CHOI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_CHOI_KICK_PALETTES, ARRAYSIZE(KOF01_A_CHOI_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_CHOI_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_CHOI_WINPORTRAIT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_CHOIEFFECTS_PALETTES, ARRAYSIZE(KOF01_A_CHOIEFFECTS_PALETTES) },
};

const sDescTreeNode KOF01_A_MAYLEE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_MAYLEE_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_MAYLEE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_MAYLEE_KICK_PALETTES, ARRAYSIZE(KOF01_A_MAYLEE_KICK_PALETTES) },
    { L"Win Portrait Assist", DESC_NODETYPE_TREE, (void*)KOF01_A_MAYLEE_WINPORTRAIT_PALETTES, ARRAYSIZE(KOF01_A_MAYLEE_WINPORTRAIT_PALETTES) },
};

const sDescTreeNode KOF01_A_IGNIZ_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_IGNIZ_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_IGNIZ_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_IGNIZ_KICK_PALETTES, ARRAYSIZE(KOF01_A_IGNIZ_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_IGNIZEXTRAS_PALETTES, ARRAYSIZE(KOF01_A_IGNIZEXTRAS_PALETTES) },
};

#pragma endregion

// Zero needs unique striker portraits
const sDescTreeNode KOF01_A_ZERO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KOF01_A_ZERO_PUNCH_PALETTES, ARRAYSIZE(KOF01_A_ZERO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KOF01_A_ZERO_KICK_PALETTES, ARRAYSIZE(KOF01_A_ZERO_KICK_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF01_A_ZEROEXTRAS_PALETTES, ARRAYSIZE(KOF01_A_ZEROEXTRAS_PALETTES) },
    { L"Striker Portraits", DESC_NODETYPE_TREE, (void*)KOF01_A_ZERO_STRIKER_PALETTES, ARRAYSIZE(KOF01_A_ZERO_STRIKER_PALETTES) },
};

const sDescTreeNode KOF01_A_UNITS[] =
{
    { L"K'",                DESC_NODETYPE_TREE, (void*)KOF01_A_K_COLLECTION, ARRAYSIZE(KOF01_A_K_COLLECTION) },
    { L"Maxima",            DESC_NODETYPE_TREE, (void*)KOF01_A_MAXIMA_COLLECTION, ARRAYSIZE(KOF01_A_MAXIMA_COLLECTION) },
    { L"Whip",              DESC_NODETYPE_TREE, (void*)KOF01_A_WHIP_COLLECTION, ARRAYSIZE(KOF01_A_WHIP_COLLECTION) },
    { L"Lin",               DESC_NODETYPE_TREE, (void*)KOF01_A_LIN_COLLECTION, ARRAYSIZE(KOF01_A_LIN_COLLECTION) },
    { L"Kyo",               DESC_NODETYPE_TREE, (void*)KOF01_A_KYO_COLLECTION, ARRAYSIZE(KOF01_A_KYO_COLLECTION) },
    { L"Benimaru",          DESC_NODETYPE_TREE, (void*)KOF01_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF01_A_BENIMARU_COLLECTION) },
    { L"Goro Daimon",       DESC_NODETYPE_TREE, (void*)KOF01_A_GORO_COLLECTION, ARRAYSIZE(KOF01_A_GORO_COLLECTION) },
    { L"Shingo",            DESC_NODETYPE_TREE, (void*)KOF01_A_SHINGO_COLLECTION, ARRAYSIZE(KOF01_A_SHINGO_COLLECTION) },
    { L"Iori",              DESC_NODETYPE_TREE, (void*)KOF01_A_IORI_COLLECTION, ARRAYSIZE(KOF01_A_IORI_COLLECTION) },
    { L"Vanessa",           DESC_NODETYPE_TREE, (void*)KOF01_A_VANESSA_COLLECTION, ARRAYSIZE(KOF01_A_VANESSA_COLLECTION) },
    { L"Seth",              DESC_NODETYPE_TREE, (void*)KOF01_A_SETH_COLLECTION, ARRAYSIZE(KOF01_A_SETH_COLLECTION) },
    { L"Ramon",             DESC_NODETYPE_TREE, (void*)KOF01_A_RAMON_COLLECTION, ARRAYSIZE(KOF01_A_RAMON_COLLECTION) },
    { L"Leona",             DESC_NODETYPE_TREE, (void*)KOF01_A_LEONA_COLLECTION, ARRAYSIZE(KOF01_A_LEONA_COLLECTION) },
    { L"Ralf",              DESC_NODETYPE_TREE, (void*)KOF01_A_RALF_COLLECTION, ARRAYSIZE(KOF01_A_RALF_COLLECTION) },
    { L"Clark",             DESC_NODETYPE_TREE, (void*)KOF01_A_CLARK_COLLECTION, ARRAYSIZE(KOF01_A_CLARK_COLLECTION) },
    { L"Heidern",           DESC_NODETYPE_TREE, (void*)KOF01_A_HEIDERN_COLLECTION, ARRAYSIZE(KOF01_A_HEIDERN_COLLECTION) },
    { L"Terry",             DESC_NODETYPE_TREE, (void*)KOF01_A_TERRY_COLLECTION, ARRAYSIZE(KOF01_A_TERRY_COLLECTION) },
    { L"Andy",              DESC_NODETYPE_TREE, (void*)KOF01_A_ANDY_COLLECTION, ARRAYSIZE(KOF01_A_ANDY_COLLECTION) },
    { L"Joe",               DESC_NODETYPE_TREE, (void*)KOF01_A_JOE_COLLECTION, ARRAYSIZE(KOF01_A_JOE_COLLECTION) },
    { L"Blue Mary",         DESC_NODETYPE_TREE, (void*)KOF01_A_MARY_COLLECTION, ARRAYSIZE(KOF01_A_MARY_COLLECTION) },
    { L"Ryo",               DESC_NODETYPE_TREE, (void*)KOF01_A_RYO_COLLECTION, ARRAYSIZE(KOF01_A_RYO_COLLECTION) },
    { L"Robert",            DESC_NODETYPE_TREE, (void*)KOF01_A_ROBERT_COLLECTION, ARRAYSIZE(KOF01_A_ROBERT_COLLECTION) },
    { L"Yuri",              DESC_NODETYPE_TREE, (void*)KOF01_A_YURI_COLLECTION, ARRAYSIZE(KOF01_A_YURI_COLLECTION) },
    { L"Takuma",            DESC_NODETYPE_TREE, (void*)KOF01_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF01_A_TAKUMA_COLLECTION) },
    { L"King",              DESC_NODETYPE_TREE, (void*)KOF01_A_KING_COLLECTION, ARRAYSIZE(KOF01_A_KING_COLLECTION) },
    { L"Mai",               DESC_NODETYPE_TREE, (void*)KOF01_A_MAI_COLLECTION, ARRAYSIZE(KOF01_A_MAI_COLLECTION) },
    { L"Hinako",            DESC_NODETYPE_TREE, (void*)KOF01_A_HINAKO_COLLECTION, ARRAYSIZE(KOF01_A_HINAKO_COLLECTION) },
    { L"Xiangfei",          DESC_NODETYPE_TREE, (void*)KOF01_A_XIANGFEI_COLLECTION, ARRAYSIZE(KOF01_A_XIANGFEI_COLLECTION) },
    { L"Kula",              DESC_NODETYPE_TREE, (void*)KOF01_A_KULA_COLLECTION, ARRAYSIZE(KOF01_A_KULA_COLLECTION) },
    { L"Foxy",              DESC_NODETYPE_TREE, (void*)KOF01_A_FOXY_COLLECTION, ARRAYSIZE(KOF01_A_FOXY_COLLECTION) },
    { L"K9999",             DESC_NODETYPE_TREE, (void*)KOF01_A_K9999_COLLECTION, ARRAYSIZE(KOF01_A_K9999_COLLECTION) },
    { L"Angel",             DESC_NODETYPE_TREE, (void*)KOF01_A_ANGEL_COLLECTION, ARRAYSIZE(KOF01_A_ANGEL_COLLECTION) },
    { L"Athena",            DESC_NODETYPE_TREE, (void*)KOF01_A_ATHENA_COLLECTION, ARRAYSIZE(KOF01_A_ATHENA_COLLECTION) },
    { L"Kensou",            DESC_NODETYPE_TREE, (void*)KOF01_A_KENSOU_COLLECTION, ARRAYSIZE(KOF01_A_KENSOU_COLLECTION) },
    { L"Chin",              DESC_NODETYPE_TREE, (void*)KOF01_A_CHIN_COLLECTION, ARRAYSIZE(KOF01_A_CHIN_COLLECTION) },
    { L"Bao",               DESC_NODETYPE_TREE, (void*)KOF01_A_BAO_COLLECTION, ARRAYSIZE(KOF01_A_BAO_COLLECTION) },
    { L"Kim",               DESC_NODETYPE_TREE, (void*)KOF01_A_KIM_COLLECTION, ARRAYSIZE(KOF01_A_KIM_COLLECTION) },
    { L"Chang",             DESC_NODETYPE_TREE, (void*)KOF01_A_CHANG_COLLECTION, ARRAYSIZE(KOF01_A_CHANG_COLLECTION) },
    { L"Choi",              DESC_NODETYPE_TREE, (void*)KOF01_A_CHOI_COLLECTION, ARRAYSIZE(KOF01_A_CHOI_COLLECTION) },
    { L"May Lee",           DESC_NODETYPE_TREE, (void*)KOF01_A_MAYLEE_COLLECTION, ARRAYSIZE(KOF01_A_MAYLEE_COLLECTION) },
    { L"Zero",              DESC_NODETYPE_TREE, (void*)KOF01_A_ZERO_COLLECTION, ARRAYSIZE(KOF01_A_ZERO_COLLECTION) },
    { L"Igniz",             DESC_NODETYPE_TREE, (void*)KOF01_A_IGNIZ_COLLECTION, ARRAYSIZE(KOF01_A_IGNIZ_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)KOF01_A_BONUS_COLLECTION, ARRAYSIZE(KOF01_A_BONUS_COLLECTION) },
};

constexpr auto KOF01_A_NUMUNIT = ARRAYSIZE(KOF01_A_UNITS);
#define KOF01_A_EXTRALOC KOF01_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF01_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

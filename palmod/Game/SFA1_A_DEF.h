#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA1_A_RYU_PALETTES. 
// * Update every array using SFA1_A_NUM_IND below
// * Update the index lookups in Game_SFA1_A.cpp that are marked 
//       - look for usage of index_SFA1_Ryu to find them
// That should be it.  Good luck.

enum Supported_SFA1_PaletteListIndex
{
    index_SFA1_Ryu,
    index_SFA1_Ken,
    index_SFA1_Gouki,
    index_SFA1_Charlie,
    index_SFA1_ChunLi,
    index_SFA1_Adon,
    index_SFA1_Sodom,
    index_SFA1_Guy,
    index_SFA1_Birdie,
    index_SFA1_Rose,
    index_SFA1_MBison,
    index_SFA1_Sagat,
    index_SFA1_Dan,
    index_SFA1_Last
};

constexpr auto SFA1_A_NUM_IND = index_SFA1_Last;

#define SFA1_A_EXTRALOC SFA1_A_NUM_IND

const UINT8 SFA1_A_UNITSORT[SFA1_A_NUM_IND + 1] = // Plus 1 for the extra palettes
{
    index_SFA1_Adon,
    index_SFA1_Birdie,
    index_SFA1_Charlie,
    index_SFA1_ChunLi,
    index_SFA1_Dan,
    index_SFA1_Gouki,
    index_SFA1_Guy,
    index_SFA1_Ken,
    index_SFA1_MBison,
    index_SFA1_Rose,
    index_SFA1_Ryu,
    index_SFA1_Sagat,
    index_SFA1_Sodom,
   
    SFA1_A_EXTRALOC // Extra palettes
};

const sGame_PaletteDataset SFA1_A_RYU_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6795e, 0x6797e, indexCPS2_Ryu, 0x00 },
    { L"Super Trail 1",  0x6797e, 0x6799e, indexCPS2_Ryu, 0x00 },
    { L"Super Trail 2",  0x6799e, 0x679be, indexCPS2_Ryu, 0x00 },
    { L"Super Trail 3",  0x679be, 0x679de, indexCPS2_Ryu, 0x00 },
    { L"Hadouken",       0x679de, 0x679fe, indexCPS2_Ryu, 0x01 },
    { L"Extra 2",        0x679fe, 0x67A1e },
    { L"Psycho Power Burned Effect", 0x67A1e, 0x67A3e, indexCPS2_Ryu, 0x00 },
    { L"Burned Status",   0x67A3e, 0x67A5e, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA1_A_RYU_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x67A5e, 0x67A7e, indexCPS2_Ryu, 0x00 },
    { L"Super Trail 1",  0x67A7e, 0x67A9e, indexCPS2_Ryu, 0x00 },
    { L"Super Trail 2",  0x67A9e, 0x67Abe, indexCPS2_Ryu, 0x00 },
    { L"Super Trail 3",  0x67Abe, 0x67Ade, indexCPS2_Ryu, 0x00 },
    { L"Hadouken",       0x67Ade, 0x67afe, indexCPS2_Ryu, 0x01 },
    { L"Extra 2",        0x67afe, 0x67B1e },
    { L"Psycho Power Burned Effect", 0x67B1e, 0x67B3e, indexCPS2_Ryu, 0x00 },
    { L"Burned Status",   0x67B3e, 0x67B5e, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA1_A_RYU_PORTRAIT_PALETTES[] =
{
    { L"Ryu Punch Portrait", 0x7d77e, 0x7d79e, indexCPS2_SFA1_Portraits, indexCPS2_Ryu },
    { L"Ryu Kick Portrait", 0x7da7e, 0x7da9e, indexCPS2_SFA1_Portraits, indexCPS2_Ryu },
};

const sGame_PaletteDataset SFA1_A_KEN_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x67B5e, 0x67B7e, indexCPS2_Ken, 0x00 },
    { L"Super Trail 1",  0x67B7e, 0x67B9e, indexCPS2_Ken, 0x00 },
    { L"Super Trail 2",  0x67B9e, 0x67Bbe, indexCPS2_Ken, 0x00 },
    { L"Super Trail 3",  0x67Bbe, 0x67Bde, indexCPS2_Ken, 0x00 },
    { L"Hadouken",       0x67Bde, 0x67bfe, indexCPS2_Ken, 0x01 },
    { L"Shoryuken",      0x67bfe, 0x67C1e, indexCPS2_Ken, 0x08 },
    { L"Psycho Power Burned Effect", 0x67C1e, 0x67C3e, indexCPS2_Ken, 0x00 },
    { L"Burned Status",   0x67C3e, 0x67C5e, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA1_A_KEN_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x67C5e, 0x67C7e, indexCPS2_Ken, 0x00 },
    { L"Super Trail 1",  0x67C7e, 0x67C9e, indexCPS2_Ken, 0x00 },
    { L"Super Trail 2",  0x67C9e, 0x67Cbe, indexCPS2_Ken, 0x00 },
    { L"Super Trail 3",  0x67Cbe, 0x67Cde, indexCPS2_Ken, 0x00 },
    { L"Hadouken",       0x67Cde, 0x67cfe, indexCPS2_Ken, 0x01 },
    { L"Shoryuken",      0x67cfe, 0x67D1e, indexCPS2_Ken, 0x08 },
    { L"Psycho Power Burned Effect", 0x67D1e, 0x67D3e, indexCPS2_Ken, 0x00 },
    { L"Burned Status",   0x67D3e, 0x67D5e, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA1_A_KEN_PORTRAIT_PALETTES[] =
{
    { L"Ken Punch Portrait", 0x7d7be, 0x7d7de, indexCPS2_SFA1_Portraits, indexCPS2_Ken },
    { L"Ken Kick Portrait", 0x7dabe, 0x7dade, indexCPS2_SFA1_Portraits, indexCPS2_Ken },
};

const sGame_PaletteDataset SFA1_A_AKUMA_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x67d5e, 0x67d7e, indexCPS2_Akuma, 0x00 },
    { L"Super Trail 1",  0x67d7e, 0x67d9e, indexCPS2_Akuma, 0x00 },
    { L"Super Trail 2",  0x67d9e, 0x67dbe, indexCPS2_Akuma, 0x00 },
    { L"Super Trail 3",  0x67dbe, 0x67dde, indexCPS2_Akuma, 0x00 },
    { L"Hadouken",       0x67dde, 0x67dfe, indexCPS2_Akuma, 0x0c },
    { L"Extra 2",        0x67dfe, 0x67e1e },
    { L"Psycho Power Burned Effect", 0x67e1e, 0x67e3e, indexCPS2_Akuma, 0x00 },
    { L"Burned Status",   0x67e3e, 0x67e5e, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA1_A_AKUMA_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x67e5e, 0x67e7e, indexCPS2_Akuma, 0x00 },
    { L"Super Trail 1",  0x67e7e, 0x67e9e, indexCPS2_Akuma, 0x00 },
    { L"Super Trail 2",  0x67e9e, 0x67ebe, indexCPS2_Akuma, 0x00 },
    { L"Super Trail 3",  0x67ebe, 0x67ede, indexCPS2_Akuma, 0x00 },
    { L"Hadouken",       0x67ede, 0x67efe, indexCPS2_Akuma, 0x0c },
    { L"Extra 2",        0x67efe, 0x67f1e },
    { L"Psycho Power Burned Effect", 0x67f1e, 0x67f3e, indexCPS2_Akuma, 0x00 },
    { L"Burned Status",   0x67f3e, 0x67f5e, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA1_A_AKUMA_PORTRAIT_PALETTES[] =
{
    { L"Akuma Punch Portrait", 0x7d7fe, 0x7d83e, indexCPS2_SFA1_Portraits, indexCPS2_Akuma },
    { L"Akuma Kick Portrait", 0x7dafe, 0x7db3e, indexCPS2_SFA1_Portraits, indexCPS2_Akuma },
};

const sGame_PaletteDataset SFA1_A_CHARLIE_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x67f5e, 0x67f7e, indexCPS2_Charlie, 0x00 },
    { L"Super Trail 1",  0x67f7e, 0x67f9e, indexCPS2_Charlie, 0x00 },
    { L"Super Trail 2",  0x67f9e, 0x67fbe, indexCPS2_Charlie, 0x00 },
    { L"Super Trail 3",  0x67fbe, 0x67fde, indexCPS2_Charlie, 0x00 },
    { L"Sonic Boom",     0x67fde, 0x67ffe, indexCPS2_Charlie, 0x01 },
    { L"Flash Kick",     0x67ffe, 0x6801e, indexCPS2_Charlie, 0x02 },
    { L"Psycho Power Burned Effect", 0x6801e, 0x6803e, indexCPS2_Charlie, 0x00 },
    { L"Burned Status",   0x6803e, 0x6805e, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_CHARLIE_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6805e, 0x6807e, indexCPS2_Charlie, 0x00 },
    { L"Super Trail 1",  0x6807e, 0x6809e, indexCPS2_Charlie, 0x00 },
    { L"Super Trail 2",  0x6809e, 0x680be, indexCPS2_Charlie, 0x00 },
    { L"Super Trail 3",  0x680be, 0x680de, indexCPS2_Charlie, 0x00 },
    { L"Sonic Boom",     0x680de, 0x680fe, indexCPS2_Charlie, 0x01 },
    { L"Flash Kick",     0x680fe, 0x6811e, indexCPS2_Charlie, 0x02 },
    { L"Psycho Power Burned Effect", 0x6811e, 0x6813e, indexCPS2_Charlie, 0x00 },
    { L"Burned Status",   0x6813e, 0x6815e, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_CHARLIE_PORTRAIT_PALETTES[] =
{
    { L"Charlie Punch Portrait", 0x7d83e, 0x7d85e, indexCPS2_SFA1_Portraits, indexCPS2_Charlie },
    { L"Charlie Kick Portrait", 0x7db3e, 0x7db5e, indexCPS2_SFA1_Portraits, indexCPS2_Charlie },
};

const sGame_PaletteDataset SFA1_A_CHUNLI_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6815e, 0x6817e, indexCPS2_ChunLi, 0x0C, &pairNext },
    { L"Keiokuken (shades)", 0x681de, 0x681fe, indexCPS2_ChunLi, 0x0F },
    { L"Extra 2",        0x681fe, 0x6821e, indexCPS2_ChunLi, 0x02 },
    { L"Super Trail 1",  0x6817e, 0x6819e, indexCPS2_ChunLi, 0x0C },
    { L"Super Trail 2",  0x6819e, 0x681be, indexCPS2_ChunLi, 0x0C },
    { L"Super Trail 3",  0x681be, 0x681de, indexCPS2_ChunLi, 0x0C },
    { L"Psycho Power Burned Effect", 0x6821e, 0x6823e, indexCPS2_ChunLi, 0x0C },
    { L"Burned Status",   0x6823e, 0x6825e, indexCPS2_ChunLi, 0x0C },
};

const sGame_PaletteDataset SFA1_A_CHUNLI_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6825e, 0x6827e, indexCPS2_ChunLi, 0x0C, &pairNext },
    { L"Keiokuken (shades)", 0x682de, 0x682fe, indexCPS2_ChunLi, 0x0F },
    { L"Extra 2",        0x682fe, 0x6831e, indexCPS2_ChunLi, 0x02 },
    { L"Super Trail 1",  0x6827e, 0x6829e, indexCPS2_ChunLi, 0x0C },
    { L"Super Trail 2",  0x6829e, 0x682be, indexCPS2_ChunLi, 0x0C },
    { L"Super Trail 3",  0x682be, 0x682de, indexCPS2_ChunLi, 0x0C },
    { L"Psycho Power Burned Effect", 0x6831e, 0x6833e, indexCPS2_ChunLi, 0x0C },
    { L"Burned Status",   0x6833e, 0x6835e, indexCPS2_ChunLi, 0x0C },
};

const sGame_PaletteDataset SFA1_A_CHUNLI_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Punch Portrait", 0x7d87e, 0x7d8be, indexCPS2_SFA1_Portraits, indexCPS2_ChunLi },
    { L"Chun-Li Kick Portrait", 0x7db7e, 0x7dbbe, indexCPS2_SFA1_Portraits, indexCPS2_ChunLi },
};

const sGame_PaletteDataset SFA1_A_ADON_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6835e, 0x6837e, indexCPS2_Adon, 0x00 },
    { L"Super Trail 1",  0x6837e, 0x6839e, indexCPS2_Adon, 0x00 },
    { L"Super Trail 2",  0x6839e, 0x683be, indexCPS2_Adon, 0x00 },
    { L"Super Trail 3",  0x683be, 0x683de, indexCPS2_Adon, 0x00 },
    { L"Extra 1",        0x683de, 0x683fe, indexCPS2_Adon, 0x01 },
    { L"Extra 2",        0x683fe, 0x6841e },
    { L"Psycho Power Burned Effect", 0x6841e, 0x6843e, indexCPS2_Adon, 0x00 },
    { L"Burned Status",   0x6843e, 0x6845e, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ADON_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6845e, 0x6847e, indexCPS2_Adon, 0x00 },
    { L"Super Trail 1",  0x6847e, 0x6849e, indexCPS2_Adon, 0x00 },
    { L"Super Trail 2",  0x6849e, 0x684be, indexCPS2_Adon, 0x00 },
    { L"Super Trail 3",  0x684be, 0x684de, indexCPS2_Adon, 0x00 },
    { L"Extra 1",        0x684de, 0x684fe, indexCPS2_Adon, 0x01 },
    { L"Extra 2",        0x684fe, 0x6851e },
    { L"Psycho Power Burned Effect", 0x6851e, 0x6853e, indexCPS2_Adon, 0x00 },
    { L"Burned Status",   0x6853e, 0x6855e, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ADON_PORTRAIT_PALETTES[] =
{
    { L"Adon Punch Portrait", 0x7d8be, 0x7d8fe, indexCPS2_SFA1_Portraits, indexCPS2_Adon },
    { L"Adon Kick Portrait", 0x7dbbe, 0x7dbfe, indexCPS2_SFA1_Portraits, indexCPS2_Adon },
};

const sGame_PaletteDataset SFA1_A_SODOM_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6855e, 0x6857e, indexCPS2_Sodom, 0x01 },
    { L"Super Trail 1",  0x6857e, 0x6859e, indexCPS2_Sodom, 0x01 },
    { L"Super Trail 2",  0x6859e, 0x685be, indexCPS2_Sodom, 0x01 },
    { L"Super Trail 3",  0x685be, 0x685de, indexCPS2_Sodom, 0x01 },
    { L"Extra 1: Slashes", 0x685de, 0x685fe, indexCPS2_Sodom, 0x04 },
    { L"Extra 2: Intro",   0x685fe, 0x6861e, indexCPS2_Sodom, 0x03 },
    { L"Psycho Power Burned Effect", 0x6861e, 0x6863e, indexCPS2_Sodom, 0x01 },
    { L"Burned Status",   0x6863e, 0x6865e, indexCPS2_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA1_A_SODOM_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6865e, 0x6867e, indexCPS2_Sodom, 0x01 },
    { L"Super Trail 1",  0x6867e, 0x6869e, indexCPS2_Sodom, 0x01 },
    { L"Super Trail 2",  0x6869e, 0x686be, indexCPS2_Sodom, 0x01 },
    { L"Super Trail 3",  0x686be, 0x686de, indexCPS2_Sodom, 0x01 },
    { L"Extra 1: Slashes", 0x686de, 0x686fe, indexCPS2_Sodom, 0x04 },
    { L"Extra 2: Intro",   0x686fe, 0x6871e, indexCPS2_Sodom, 0x03 },
    { L"Psycho Power Burned Effect", 0x6871e, 0x6873e, indexCPS2_Sodom, 0x01 },
    { L"Burned Status",   0x6873e, 0x6875e, indexCPS2_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA1_A_SODOM_PORTRAIT_PALETTES[] =
{
    { L"Sodom Punch Portrait", 0x7d8fe, 0x7d91e, indexCPS2_SFA1_Portraits, indexCPS2_Sodom },
    { L"Sodom Kick Portrait", 0x7dbfe, 0x7dc1e, indexCPS2_SFA1_Portraits, indexCPS2_Sodom },
};

const sGame_PaletteDataset SFA1_A_GUY_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6875e, 0x6877e, indexCPS2_Guy, 0x00 },
    { L"Super Trail 1",  0x6877e, 0x6879e, indexCPS2_Guy, 0x00 },
    { L"Super Trail 2",  0x6879e, 0x687be, indexCPS2_Guy, 0x00 },
    { L"Super Trail 3",  0x687be, 0x687de, indexCPS2_Guy, 0x00 },
    { L"Extra 1",        0x687de, 0x687fe, indexCPS2_Guy, 0x01 },
    { L"Extra 2",        0x687fe, 0x6881e },
    { L"Psycho Power Burned Effect", 0x6881e, 0x6883e, indexCPS2_Guy, 0x00 },
    { L"Burned Status",   0x6883e, 0x6885e, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA1_A_GUY_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6885e, 0x6887e, indexCPS2_Guy, 0x00 },
    { L"Super Trail 1",  0x6887e, 0x6889e, indexCPS2_Guy, 0x00 },
    { L"Super Trail 2",  0x6889e, 0x688be, indexCPS2_Guy, 0x00 },
    { L"Super Trail 3",  0x688be, 0x688de, indexCPS2_Guy, 0x00 },
    { L"Extra 1",        0x688de, 0x688fe, indexCPS2_Guy, 0x01 },
    { L"Extra 2",        0x688fe, 0x6891e },
    { L"Psycho Power Burned Effect", 0x6891e, 0x6893e, indexCPS2_Guy, 0x00 },
    { L"Burned Status",   0x6893e, 0x6895e, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA1_A_GUY_PORTRAIT_PALETTES[] =
{
    { L"Guy Punch Portrait", 0x7d93e, 0x7d95e, indexCPS2_SFA1_Portraits, indexCPS2_Guy },
    { L"Guy Kick Portrait", 0x7dc3e, 0x7dc5e, indexCPS2_SFA1_Portraits, indexCPS2_Guy },
};

const sGame_PaletteDataset SFA1_A_BIRDIE_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6895e, 0x6897e, indexCPS2_Birdie, 0x00 },
    { L"Super Trail 1",  0x6897e, 0x6899e, indexCPS2_Birdie, 0x00 },
    { L"Super Trail 2",  0x6899e, 0x689be, indexCPS2_Birdie, 0x00 },
    { L"Super Trail 3",  0x689be, 0x689de, indexCPS2_Birdie, 0x00 },
    { L"Extra 1",        0x689de, 0x689fe, indexCPS2_Birdie, 0x01 },
    { L"Extra 2",        0x689fe, 0x68a1e },
    { L"Psycho Power Burned Effect", 0x68a1e, 0x68a3e, indexCPS2_Birdie, 0x00 },
    { L"Burned Status",   0x68a3e, 0x68a5e, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_BIRDIE_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x68a5e, 0x68a7e, indexCPS2_Birdie, 0x00 },
    { L"Super Trail 1",  0x68a7e, 0x68a9e, indexCPS2_Birdie, 0x00 },
    { L"Super Trail 2",  0x68a9e, 0x68abe, indexCPS2_Birdie, 0x00 },
    { L"Super Trail 3",  0x68abe, 0x68ade, indexCPS2_Birdie, 0x00 },
    { L"Extra 1",        0x68ade, 0x68afe, indexCPS2_Birdie, 0x01 },
    { L"Extra 2",        0x68afe, 0x68b1e },
    { L"Psycho Power Burned Effect", 0x68b1e, 0x68b3e, indexCPS2_Birdie, 0x00 },
    { L"Burned Status",   0x68b3e, 0x68b5e, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_BIRDIE_PORTRAIT_PALETTES[] =
{
    { L"Birdie Punch Portrait", 0x7d97e, 0x7d99e, indexCPS2_SFA1_Portraits, indexCPS2_Birdie },
    { L"Birdie Kick Portrait", 0x7dc7e, 0x7dc9e, indexCPS2_SFA1_Portraits, indexCPS2_Birdie },
};

const sGame_PaletteDataset SFA1_A_ROSE_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x68b5e, 0x68b7e, indexCPS2_Rose, 0x00 },
    { L"Super Trail 1",  0x68b7e, 0x68b9e, indexCPS2_Rose, 0x00 },
    { L"Super Trail 2",  0x68b9e, 0x68bbe, indexCPS2_Rose, 0x00 },
    { L"Super Trail 3",  0x68bbe, 0x68bde, indexCPS2_Rose, 0x00 },
    { L"Soul  Power",    0x68bde, 0x68bfe, indexCPS2_Rose, 0x02 },
    { L"Extra 2",        0x68bfe, 0x68c1e },
    { L"Psycho Power Burned Effect", 0x68c1e, 0x68c3e, indexCPS2_Rose, 0x00 },
    { L"Burned Status",   0x68c3e, 0x68c5e, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ROSE_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x68c5e, 0x68c7e, indexCPS2_Rose, 0x00 },
    { L"Super Trail 1",  0x68c7e, 0x68c9e, indexCPS2_Rose, 0x00 },
    { L"Super Trail 2",  0x68c9e, 0x68cbe, indexCPS2_Rose, 0x00 },
    { L"Super Trail 3",  0x68cbe, 0x68cde, indexCPS2_Rose, 0x00 },
    { L"Soul  Power",    0x68cde, 0x68cfe, indexCPS2_Rose, 0x02 },
    { L"Extra 2",        0x68cfe, 0x68d1e },
    { L"Psycho Power Burned Effect", 0x68d1e, 0x68d3e, indexCPS2_Rose, 0x00 },
    { L"Burned Status",   0x68d3e, 0x68d5e, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ROSE_PORTRAIT_PALETTES[] =
{
    { L"Rose Punch Portrait", 0x7d9be, 0x7d9fe, indexCPS2_SFA1_Portraits, indexCPS2_Rose },
    { L"Rose Kick Portrait", 0x7dcbe, 0x7dcfe, indexCPS2_SFA1_Portraits, indexCPS2_Rose },
};

const sGame_PaletteDataset SFA1_A_MBISON_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x68d5e, 0x68d7e, indexCPS2_Bison, 0x00 },
    { L"Super Trail 1",  0x68d7e, 0x68d9e, indexCPS2_Bison, 0x00 },
    { L"Super Trail 2",  0x68d9e, 0x68dbe, indexCPS2_Bison, 0x00 },
    { L"Super Trail 3",  0x68dbe, 0x68dde, indexCPS2_Bison, 0x00 },
    { L"Extra 1",        0x68dde, 0x68dfe, indexCPS2_Bison, 0x08 },
    { L"Extra 2",        0x68dfe, 0x68e1e, indexCPS2_Bison, 0x09 },
    { L"Psycho Power Burned Effect", 0x68e1e, 0x68e3e, indexCPS2_Bison, 0x00 },
    { L"Burned Status",   0x68e3e, 0x68e5e, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA1_A_MBISON_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x68e5e, 0x68e7e, indexCPS2_Bison, 0x00 },
    { L"Super Trail 1",  0x68e7e, 0x68e9e, indexCPS2_Bison, 0x00 },
    { L"Super Trail 2",  0x68e9e, 0x68ebe, indexCPS2_Bison, 0x00 },
    { L"Super Trail 3",  0x68ebe, 0x68ede, indexCPS2_Bison, 0x00 },
    { L"Extra 1",        0x68ede, 0x68efe, indexCPS2_Bison, 0x08 },
    { L"Extra 2",        0x68efe, 0x68f1e, indexCPS2_Bison, 0x09 },
    { L"Psycho Power Burned Effect", 0x68f1e, 0x68f3e, indexCPS2_Bison, 0x00 },
    { L"Burned Status",   0x68f3e, 0x68f5e, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA1_A_MBISON_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Punch Portrait", 0x7d9fe, 0x7da3e, indexCPS2_SFA1_Portraits, indexCPS2_Bison },
    { L"M.Bison Kick Portrait", 0x7dcfe, 0x7dd3e, indexCPS2_SFA1_Portraits, indexCPS2_Bison },
};

const sGame_PaletteDataset SFA1_A_SAGAT_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x68f5e, 0x68f7e, indexCPS2_Sagat, 0x00 },
    { L"Super Trail 1",  0x68f7e, 0x68f9e, indexCPS2_Sagat, 0x00 },
    { L"Super Trail 2",  0x68f9e, 0x68fbe, indexCPS2_Sagat, 0x00 },
    { L"Super Trail 3",  0x68fbe, 0x68fde, indexCPS2_Sagat, 0x00 },
    { L"Extra 1",        0x68fde, 0x68ffe, indexCPS2_Sagat, 0x01 },
    { L"Extra 2",        0x68ffe, 0x6901e, indexCPS2_Sagat, 0x02 },
    { L"Psycho Power Burned Effect", 0x6901e, 0x6903e, indexCPS2_Sagat, 0x00 },
    { L"Burned Status",   0x6903e, 0x6905e, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA1_A_SAGAT_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6905e, 0x6907e, indexCPS2_Sagat, 0x00 },
    { L"Super Trail 1",  0x6907e, 0x6909e, indexCPS2_Sagat, 0x00 },
    { L"Super Trail 2",  0x6909e, 0x690be, indexCPS2_Sagat, 0x00 },
    { L"Super Trail 3",  0x690be, 0x690de, indexCPS2_Sagat, 0x00 },
    { L"Extra 1",        0x690de, 0x690fe, indexCPS2_Sagat, 0x01 },
    { L"Extra 2",        0x690fe, 0x6911e, indexCPS2_Sagat, 0x02 },
    { L"Psycho Power Burned Effect", 0x6911e, 0x6913e, indexCPS2_Sagat, 0x00 },
    { L"Burned Status",   0x6913e, 0x6915e, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA1_A_SAGAT_PORTRAIT_PALETTES[] =
{
    { L"Sagat Punch Portrait", 0x7da3e, 0x7da5e, indexCPS2_SFA1_Portraits, indexCPS2_Sagat },
    { L"Sagat Kick Portrait", 0x7dd3e, 0x7dd5e, indexCPS2_SFA1_Portraits, indexCPS2_Sagat },
};

const sGame_PaletteDataset SFA1_A_DAN_PUNCH_PALETTES[] =
{
    { L"Main Sprite",    0x6915e, 0x6917e, indexCPS2_Dan, 0x00 },
    { L"Super Trail 1",  0x6917e, 0x6919e, indexCPS2_Dan, 0x00 },
    { L"Super Trail 2",  0x6919e, 0x691be, indexCPS2_Dan, 0x00 },
    { L"Super Trail 3",  0x691be, 0x691de, indexCPS2_Dan, 0x00 },
    { L"Gadouken",       0x691de, 0x691fe, indexCPS2_Dan, 0x01 },
    { L"Extra 2",        0x691fe, 0x6921e },
    { L"Psycho Power Burned Effect", 0x6921e, 0x6923e, indexCPS2_Dan, 0x00 },
    { L"Burned Status",   0x6923e, 0x6925e, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA1_A_DAN_KICK_PALETTES[] =
{
    { L"Main Sprite",    0x6925e, 0x6927e, indexCPS2_Dan, 0x00 },
    { L"Super Trail 1",  0x6927e, 0x6929e, indexCPS2_Dan, 0x00 },
    { L"Super Trail 2",  0x6929e, 0x692be, indexCPS2_Dan, 0x00 },
    { L"Super Trail 3",  0x692be, 0x692de, indexCPS2_Dan, 0x00 },
    { L"Gadouken",       0x692de, 0x692fe, indexCPS2_Dan, 0x01 },
    { L"Extra 2",        0x692fe, 0x6931e },
    { L"Psycho Power Burned Effect", 0x6931e, 0x6933e, indexCPS2_Dan, 0x00 },
    { L"Burned Status",   0x6933e, 0x6935e, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA1_A_DAN_PORTRAIT_PALETTES[] =
{
    { L"Dan Punch Portrait", 0x7ec1e, 0x7ec3e, indexCPS2_SFA1_Portraits, indexCPS2_Dan },
    { L"Dan Kick Portrait", 0x7ec3e, 0x7ec5e, indexCPS2_SFA1_Portraits, indexCPS2_Dan },
};

const sDescTreeNode SFA1_A_RYU_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_RYU_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_KICK_PALETTES,    ARRAYSIZE(SFA1_A_RYU_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_RYU_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_KEN_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_KEN_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_KICK_PALETTES,    ARRAYSIZE(SFA1_A_KEN_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_KEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_GOUKI_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_AKUMA_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_AKUMA_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_AKUMA_KICK_PALETTES,    ARRAYSIZE(SFA1_A_AKUMA_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_AKUMA_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_AKUMA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_CHARLIE_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_CHARLIE_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_KICK_PALETTES,    ARRAYSIZE(SFA1_A_CHARLIE_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_CHARLIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_CHUNLI_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_CHUNLI_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_KICK_PALETTES,    ARRAYSIZE(SFA1_A_CHUNLI_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_CHUNLI_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_ADON_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_ADON_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_KICK_PALETTES,    ARRAYSIZE(SFA1_A_ADON_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_ADON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_SODOM_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_SODOM_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_KICK_PALETTES,    ARRAYSIZE(SFA1_A_SODOM_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_SODOM_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_GUY_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_GUY_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_KICK_PALETTES,    ARRAYSIZE(SFA1_A_GUY_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_GUY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_BIRDIE_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_BIRDIE_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_KICK_PALETTES,    ARRAYSIZE(SFA1_A_BIRDIE_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_BIRDIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_ROSE_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_ROSE_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_KICK_PALETTES,    ARRAYSIZE(SFA1_A_ROSE_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_ROSE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_MBISON_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_MBISON_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_KICK_PALETTES,    ARRAYSIZE(SFA1_A_MBISON_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_MBISON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_SAGAT_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_SAGAT_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_KICK_PALETTES,    ARRAYSIZE(SFA1_A_SAGAT_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_SAGAT_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_DAN_COLLECTION[] =
{
    { L"Punch",  DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_DAN_PUNCH_PALETTES) },
    { L"Kick",   DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_KICK_PALETTES,    ARRAYSIZE(SFA1_A_DAN_KICK_PALETTES) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_DAN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_UNITS[SFA1_A_NUM_IND] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_COLLECTION,          ARRAYSIZE(SFA1_A_ADON_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA1_A_BIRDIE_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA1_A_CHARLIE_COLLECTION) },
    { L"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA1_A_CHUNLI_COLLECTION) },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_COLLECTION,           ARRAYSIZE(SFA1_A_DAN_COLLECTION) },
    { L"Gouki",           DESC_NODETYPE_TREE, (void*)SFA1_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA1_A_GOUKI_COLLECTION) },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_COLLECTION,           ARRAYSIZE(SFA1_A_GUY_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_COLLECTION,           ARRAYSIZE(SFA1_A_KEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_COLLECTION,        ARRAYSIZE(SFA1_A_MBISON_COLLECTION) },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_COLLECTION,          ARRAYSIZE(SFA1_A_ROSE_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_COLLECTION,           ARRAYSIZE(SFA1_A_RYU_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA1_A_SAGAT_COLLECTION) },
    { L"Sodom",           DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_COLLECTION,         ARRAYSIZE(SFA1_A_SODOM_COLLECTION) },
};

// We extend this array with data groveled from the SFA1e.txt extensible extras file, if any.
const stExtraDef SFA1_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

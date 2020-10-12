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
    { _T("Main Sprite"),    0x67960, 0x67980, indexCPS2_Ryu, 0x00 },
    { _T("Super Trail 1"),  0x67980, 0x679A0, indexCPS2_Ryu, 0x00 },
    { _T("Super Trail 2"),  0x679A0, 0x679C0, indexCPS2_Ryu, 0x00 },
    { _T("Super Trail 3"),  0x679C0, 0x679E0, indexCPS2_Ryu, 0x00 },
    { _T("Hadouken"),       0x679E0, 0x67A00, indexCPS2_Ryu, 0x01 },
    { _T("Extra 2"),        0x67A00, 0x67A20 },
    { _T("Psycho Power Burned Effect"), 0x67A20, 0x67A40, indexCPS2_Ryu, 0x00 },
    { _T("Burned Status"),   0x67A40, 0x67A60, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA1_A_RYU_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x67A60, 0x67A80, indexCPS2_Ryu, 0x00 },
    { _T("Super Trail 1"),  0x67A80, 0x67AA0, indexCPS2_Ryu, 0x00 },
    { _T("Super Trail 2"),  0x67AA0, 0x67AC0, indexCPS2_Ryu, 0x00 },
    { _T("Super Trail 3"),  0x67AC0, 0x67AE0, indexCPS2_Ryu, 0x00 },
    { _T("Hadouken"),       0x67AE0, 0x67B00, indexCPS2_Ryu, 0x01 },
    { _T("Extra 2"),        0x67B00, 0x67B20 },
    { _T("Psycho Power Burned Effect"), 0x67B20, 0x67B40, indexCPS2_Ryu, 0x00 },
    { _T("Burned Status"),   0x67B40, 0x67B60, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA1_A_RYU_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Punch Portrait"), 0x7d780, 0x7d7a0, indexCPS2_SFA1_Portraits, indexCPS2_Ryu },
    { _T("Ryu Kick Portrait"), 0x7da80, 0x7daa0, indexCPS2_SFA1_Portraits, indexCPS2_Ryu },
};

const sGame_PaletteDataset SFA1_A_KEN_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x67B60, 0x67B80, indexCPS2_Ken, 0x00 },
    { _T("Super Trail 1"),  0x67B80, 0x67BA0, indexCPS2_Ken, 0x00 },
    { _T("Super Trail 2"),  0x67BA0, 0x67BC0, indexCPS2_Ken, 0x00 },
    { _T("Super Trail 3"),  0x67BC0, 0x67BE0, indexCPS2_Ken, 0x00 },
    { _T("Hadouken"),       0x67BE0, 0x67C00, indexCPS2_Ken, 0x01 },
    { _T("Shoryuken"),      0x67C00, 0x67C20, indexCPS2_Ken, 0x02 },
    { _T("Psycho Power Burned Effect"), 0x67C20, 0x67C40, indexCPS2_Ken, 0x00 },
    { _T("Burned Status"),   0x67C40, 0x67C60, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA1_A_KEN_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x67C60, 0x67C80, indexCPS2_Ken, 0x00 },
    { _T("Super Trail 1"),  0x67C80, 0x67CA0, indexCPS2_Ken, 0x00 },
    { _T("Super Trail 2"),  0x67CA0, 0x67CC0, indexCPS2_Ken, 0x00 },
    { _T("Super Trail 3"),  0x67CC0, 0x67CE0, indexCPS2_Ken, 0x00 },
    { _T("Hadouken"),       0x67CE0, 0x67D00, indexCPS2_Ken, 0x01 },
    { _T("Shoryuken"),      0x67D00, 0x67D20, indexCPS2_Ken, 0x02 },
    { _T("Psycho Power Burned Effect"), 0x67D20, 0x67D40, indexCPS2_Ken, 0x00 },
    { _T("Burned Status"),   0x67D40, 0x67D60, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA1_A_KEN_PORTRAIT_PALETTES[] =
{
    { _T("Ken Punch Portrait"), 0x7d7c0, 0x7d7e0, indexCPS2_SFA1_Portraits, indexCPS2_Ken },
    { _T("Ken Kick Portrait"), 0x7dac0, 0x7dae0, indexCPS2_SFA1_Portraits, indexCPS2_Ken },
};

const sGame_PaletteDataset SFA1_A_AKUMA_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x67d60, 0x67d80, indexCPS2_Akuma, 0x00 },
    { _T("Super Trail 1"),  0x67d80, 0x67dA0, indexCPS2_Akuma, 0x00 },
    { _T("Super Trail 2"),  0x67dA0, 0x67dC0, indexCPS2_Akuma, 0x00 },
    { _T("Super Trail 3"),  0x67dC0, 0x67dE0, indexCPS2_Akuma, 0x00 },
    { _T("Hadouken"),       0x67dE0, 0x67e00, indexCPS2_Akuma, 0x0c },
    { _T("Extra 2"),        0x67e00, 0x67e20 },
    { _T("Psycho Power Burned Effect"), 0x67e20, 0x67e40, indexCPS2_Akuma, 0x00 },
    { _T("Burned Status"),   0x67e40, 0x67e60, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA1_A_AKUMA_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x67e60, 0x67e80, indexCPS2_Akuma, 0x00 },
    { _T("Super Trail 1"),  0x67e80, 0x67eA0, indexCPS2_Akuma, 0x00 },
    { _T("Super Trail 2"),  0x67eA0, 0x67eC0, indexCPS2_Akuma, 0x00 },
    { _T("Super Trail 3"),  0x67eC0, 0x67eE0, indexCPS2_Akuma, 0x00 },
    { _T("Hadouken"),       0x67eE0, 0x67f00, indexCPS2_Akuma, 0x0c },
    { _T("Extra 2"),        0x67f00, 0x67f20 },
    { _T("Psycho Power Burned Effect"), 0x67f20, 0x67f40, indexCPS2_Akuma, 0x00 },
    { _T("Burned Status"),   0x67f40, 0x67f60, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA1_A_AKUMA_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Punch Portrait"), 0x7d800, 0x7d840, indexCPS2_SFA1_Portraits, indexCPS2_Akuma },
    { _T("Akuma Kick Portrait"), 0x7db00, 0x7db40, indexCPS2_SFA1_Portraits, indexCPS2_Akuma },
};

const sGame_PaletteDataset SFA1_A_CHARLIE_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x67f60, 0x67f80, indexCPS2_Charlie, 0x00 },
    { _T("Super Trail 1"),  0x67f80, 0x67fA0, indexCPS2_Charlie, 0x00 },
    { _T("Super Trail 2"),  0x67fA0, 0x67fC0, indexCPS2_Charlie, 0x00 },
    { _T("Super Trail 3"),  0x67fC0, 0x67fE0, indexCPS2_Charlie, 0x00 },
    { _T("Sonic Boom"),     0x67fE0, 0x68000, indexCPS2_Charlie, 0x01 },
    { _T("Flash Kick"),     0x68000, 0x68020, indexCPS2_Charlie, 0x02 },
    { _T("Psycho Power Burned Effect"), 0x68020, 0x68040, indexCPS2_Charlie, 0x00 },
    { _T("Burned Status"),   0x68040, 0x68060, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_CHARLIE_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68060, 0x68080, indexCPS2_Charlie, 0x00 },
    { _T("Super Trail 1"),  0x68080, 0x680A0, indexCPS2_Charlie, 0x00 },
    { _T("Super Trail 2"),  0x680A0, 0x680C0, indexCPS2_Charlie, 0x00 },
    { _T("Super Trail 3"),  0x680C0, 0x680E0, indexCPS2_Charlie, 0x00 },
    { _T("Sonic Boom"),     0x680E0, 0x68100, indexCPS2_Charlie, 0x01 },
    { _T("Flash Kick"),     0x68100, 0x68120, indexCPS2_Charlie, 0x02 },
    { _T("Psycho Power Burned Effect"), 0x68120, 0x68140, indexCPS2_Charlie, 0x00 },
    { _T("Burned Status"),   0x68140, 0x68160, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_CHARLIE_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Punch Portrait"), 0x7d840, 0x7d860, indexCPS2_SFA1_Portraits, indexCPS2_Charlie },
    { _T("Charlie Kick Portrait"), 0x7db40, 0x7db60, indexCPS2_SFA1_Portraits, indexCPS2_Charlie },
};

const sGame_PaletteDataset SFA1_A_CHUNLI_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68160, 0x68180, indexCPS2_ChunLi, 0x0C, &pairNext },
    { _T("Keiokuken (shades)"), 0x681E0, 0x68200, indexCPS2_ChunLi, 0x0F },
    { _T("Extra 2"),        0x68200, 0x68220, indexCPS2_ChunLi, 0x02 },
    { _T("Super Trail 1"),  0x68180, 0x681A0, indexCPS2_ChunLi, 0x0C },
    { _T("Super Trail 2"),  0x681A0, 0x681C0, indexCPS2_ChunLi, 0x0C },
    { _T("Super Trail 3"),  0x681C0, 0x681E0, indexCPS2_ChunLi, 0x0C },
    { _T("Psycho Power Burned Effect"), 0x68220, 0x68240, indexCPS2_ChunLi, 0x0C },
    { _T("Burned Status"),   0x68240, 0x68260, indexCPS2_ChunLi, 0x0C },
};

const sGame_PaletteDataset SFA1_A_CHUNLI_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68260, 0x68280, indexCPS2_ChunLi, 0x0C, &pairNext },
    { _T("Keiokuken (shades)"), 0x682E0, 0x68300, indexCPS2_ChunLi, 0x0F },
    { _T("Extra 2"),        0x68300, 0x68320, indexCPS2_ChunLi, 0x02 },
    { _T("Super Trail 1"),  0x68280, 0x682A0, indexCPS2_ChunLi, 0x0C },
    { _T("Super Trail 2"),  0x682A0, 0x682C0, indexCPS2_ChunLi, 0x0C },
    { _T("Super Trail 3"),  0x682C0, 0x682E0, indexCPS2_ChunLi, 0x0C },
    { _T("Psycho Power Burned Effect"), 0x68320, 0x68340, indexCPS2_ChunLi, 0x0C },
    { _T("Burned Status"),   0x68340, 0x68360, indexCPS2_ChunLi, 0x0C },
};

const sGame_PaletteDataset SFA1_A_CHUNLI_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Punch Portrait"), 0x7d880, 0x7d8c0, indexCPS2_SFA1_Portraits, indexCPS2_ChunLi },
    { _T("Chun-Li Kick Portrait"), 0x7db80, 0x7dbc0, indexCPS2_SFA1_Portraits, indexCPS2_ChunLi },
};

const sGame_PaletteDataset SFA1_A_ADON_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68360, 0x68380, indexCPS2_Adon, 0x00 },
    { _T("Super Trail 1"),  0x68380, 0x683A0, indexCPS2_Adon, 0x00 },
    { _T("Super Trail 2"),  0x683A0, 0x683C0, indexCPS2_Adon, 0x00 },
    { _T("Super Trail 3"),  0x683C0, 0x683E0, indexCPS2_Adon, 0x00 },
    { _T("Extra 1"),        0x683E0, 0x68400, indexCPS2_Adon, 0x01 },
    { _T("Extra 2"),        0x68400, 0x68420 },
    { _T("Psycho Power Burned Effect"), 0x68420, 0x68440, indexCPS2_Adon, 0x00 },
    { _T("Burned Status"),   0x68440, 0x68460, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ADON_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68460, 0x68480, indexCPS2_Adon, 0x00 },
    { _T("Super Trail 1"),  0x68480, 0x684A0, indexCPS2_Adon, 0x00 },
    { _T("Super Trail 2"),  0x684A0, 0x684C0, indexCPS2_Adon, 0x00 },
    { _T("Super Trail 3"),  0x684C0, 0x684E0, indexCPS2_Adon, 0x00 },
    { _T("Extra 1"),        0x684E0, 0x68500, indexCPS2_Adon, 0x01 },
    { _T("Extra 2"),        0x68500, 0x68520 },
    { _T("Psycho Power Burned Effect"), 0x68520, 0x68540, indexCPS2_Adon, 0x00 },
    { _T("Burned Status"),   0x68540, 0x68560, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ADON_PORTRAIT_PALETTES[] =
{
    { _T("Adon Punch Portrait"), 0x7d8c0, 0x7d900, indexCPS2_SFA1_Portraits, indexCPS2_Adon },
    { _T("Adon Kick Portrait"), 0x7dbc0, 0x7dc00, indexCPS2_SFA1_Portraits, indexCPS2_Adon },
};

const sGame_PaletteDataset SFA1_A_SODOM_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68560, 0x68580, indexCPS2_Sodom, 0x00 },
    { _T("Super Trail 1"),  0x68580, 0x685A0, indexCPS2_Sodom, 0x00 },
    { _T("Super Trail 2"),  0x685A0, 0x685C0, indexCPS2_Sodom, 0x00 },
    { _T("Super Trail 3"),  0x685C0, 0x685E0, indexCPS2_Sodom, 0x00 },
    { _T("Extra 1"),        0x685E0, 0x68600 },
    { _T("Extra 2"),        0x68600, 0x68620 },
    { _T("Psycho Power Burned Effect"), 0x68620, 0x68640, indexCPS2_Sodom, 0x00 },
    { _T("Burned Status"),   0x68640, 0x68660, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA1_A_SODOM_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68660, 0x68680, indexCPS2_Sodom, 0x00 },
    { _T("Super Trail 1"),  0x68680, 0x686A0, indexCPS2_Sodom, 0x00 },
    { _T("Super Trail 2"),  0x686A0, 0x686C0, indexCPS2_Sodom, 0x00 },
    { _T("Super Trail 3"),  0x686C0, 0x686E0, indexCPS2_Sodom, 0x00 },
    { _T("Extra 1"),        0x686E0, 0x68700 },
    { _T("Extra 2"),        0x68700, 0x68720 },
    { _T("Psycho Power Burned Effect"), 0x68720, 0x68740, indexCPS2_Sodom, 0x00 },
    { _T("Burned Status"),   0x68740, 0x68760, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA1_A_SODOM_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Punch Portrait"), 0x7d900, 0x7d920, indexCPS2_SFA1_Portraits, indexCPS2_Sodom },
    { _T("Sodom Kick Portrait"), 0x7dc00, 0x7dc20, indexCPS2_SFA1_Portraits, indexCPS2_Sodom },
};

const sGame_PaletteDataset SFA1_A_GUY_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68760, 0x68780, indexCPS2_Guy, 0x00 },
    { _T("Super Trail 1"),  0x68780, 0x687A0, indexCPS2_Guy, 0x00 },
    { _T("Super Trail 2"),  0x687A0, 0x687C0, indexCPS2_Guy, 0x00 },
    { _T("Super Trail 3"),  0x687C0, 0x687E0, indexCPS2_Guy, 0x00 },
    { _T("Extra 1"),        0x687E0, 0x68800, indexCPS2_Guy, 0x01 },
    { _T("Extra 2"),        0x68800, 0x68820 },
    { _T("Psycho Power Burned Effect"), 0x68820, 0x68840, indexCPS2_Guy, 0x00 },
    { _T("Burned Status"),   0x68840, 0x68860, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA1_A_GUY_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68860, 0x68880, indexCPS2_Guy, 0x00 },
    { _T("Super Trail 1"),  0x68880, 0x688A0, indexCPS2_Guy, 0x00 },
    { _T("Super Trail 2"),  0x688A0, 0x688C0, indexCPS2_Guy, 0x00 },
    { _T("Super Trail 3"),  0x688C0, 0x688E0, indexCPS2_Guy, 0x00 },
    { _T("Extra 1"),        0x688E0, 0x68900, indexCPS2_Guy, 0x01 },
    { _T("Extra 2"),        0x68900, 0x68920 },
    { _T("Psycho Power Burned Effect"), 0x68920, 0x68940, indexCPS2_Guy, 0x00 },
    { _T("Burned Status"),   0x68940, 0x68960, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA1_A_GUY_PORTRAIT_PALETTES[] =
{
    { _T("Guy Punch Portrait"), 0x7d940, 0x7d960, indexCPS2_SFA1_Portraits, indexCPS2_Guy },
    { _T("Guy Kick Portrait"), 0x7dc40, 0x7dc60, indexCPS2_SFA1_Portraits, indexCPS2_Guy },
};

const sGame_PaletteDataset SFA1_A_BIRDIE_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68960, 0x68980, indexCPS2_Birdie, 0x00 },
    { _T("Super Trail 1"),  0x68980, 0x689A0, indexCPS2_Birdie, 0x00 },
    { _T("Super Trail 2"),  0x689A0, 0x689C0, indexCPS2_Birdie, 0x00 },
    { _T("Super Trail 3"),  0x689C0, 0x689E0, indexCPS2_Birdie, 0x00 },
    { _T("Extra 1"),        0x689E0, 0x68a00, indexCPS2_Birdie, 0x01 },
    { _T("Extra 2"),        0x68a00, 0x68a20 },
    { _T("Psycho Power Burned Effect"), 0x68a20, 0x68a40, indexCPS2_Birdie, 0x00 },
    { _T("Burned Status"),   0x68a40, 0x68a60, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_BIRDIE_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68a60, 0x68a80, indexCPS2_Birdie, 0x00 },
    { _T("Super Trail 1"),  0x68a80, 0x68aA0, indexCPS2_Birdie, 0x00 },
    { _T("Super Trail 2"),  0x68aA0, 0x68aC0, indexCPS2_Birdie, 0x00 },
    { _T("Super Trail 3"),  0x68aC0, 0x68aE0, indexCPS2_Birdie, 0x00 },
    { _T("Extra 1"),        0x68aE0, 0x68b00, indexCPS2_Birdie, 0x01 },
    { _T("Extra 2"),        0x68b00, 0x68b20 },
    { _T("Psycho Power Burned Effect"), 0x68b20, 0x68b40, indexCPS2_Birdie, 0x00 },
    { _T("Burned Status"),   0x68b40, 0x68b60, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA1_A_BIRDIE_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Punch Portrait"), 0x7d980, 0x7d9a0, indexCPS2_SFA1_Portraits, indexCPS2_Birdie },
    { _T("Birdie Kick Portrait"), 0x7dc80, 0x7dca0, indexCPS2_SFA1_Portraits, indexCPS2_Birdie },
};

const sGame_PaletteDataset SFA1_A_ROSE_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68b60, 0x68b80, indexCPS2_Rose, 0x00 },
    { _T("Super Trail 1"),  0x68b80, 0x68bA0, indexCPS2_Rose, 0x00 },
    { _T("Super Trail 2"),  0x68bA0, 0x68bC0, indexCPS2_Rose, 0x00 },
    { _T("Super Trail 3"),  0x68bC0, 0x68bE0, indexCPS2_Rose, 0x00 },
    { _T("Soul  Power"),    0x68bE0, 0x68c00, indexCPS2_Rose, 0x02 },
    { _T("Extra 2"),        0x68c00, 0x68c20 },
    { _T("Psycho Power Burned Effect"), 0x68c20, 0x68c40, indexCPS2_Rose, 0x00 },
    { _T("Burned Status"),   0x68c40, 0x68c60, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ROSE_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68c60, 0x68c80, indexCPS2_Rose, 0x00 },
    { _T("Super Trail 1"),  0x68c80, 0x68cA0, indexCPS2_Rose, 0x00 },
    { _T("Super Trail 2"),  0x68cA0, 0x68cC0, indexCPS2_Rose, 0x00 },
    { _T("Super Trail 3"),  0x68cC0, 0x68cE0, indexCPS2_Rose, 0x00 },
    { _T("Soul  Power"),    0x68cE0, 0x68d00, indexCPS2_Rose, 0x02 },
    { _T("Extra 2"),        0x68d00, 0x68d20 },
    { _T("Psycho Power Burned Effect"), 0x68d20, 0x68d40, indexCPS2_Rose, 0x00 },
    { _T("Burned Status"),   0x68d40, 0x68d60, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA1_A_ROSE_PORTRAIT_PALETTES[] =
{
    { _T("Rose Punch Portrait"), 0x7d9c0, 0x7da00, indexCPS2_SFA1_Portraits, indexCPS2_Rose },
    { _T("Rose Kick Portrait"), 0x7dcc0, 0x7dd00, indexCPS2_SFA1_Portraits, indexCPS2_Rose },
};

const sGame_PaletteDataset SFA1_A_MBISON_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68d60, 0x68d80, indexCPS2_Bison, 0x00 },
    { _T("Super Trail 1"),  0x68d80, 0x68dA0, indexCPS2_Bison, 0x00 },
    { _T("Super Trail 2"),  0x68dA0, 0x68dC0, indexCPS2_Bison, 0x00 },
    { _T("Super Trail 3"),  0x68dC0, 0x68dE0, indexCPS2_Bison, 0x00 },
    { _T("Extra 1"),        0x68dE0, 0x68e00 },
    { _T("Extra 2"),        0x68e00, 0x68e20 },
    { _T("Psycho Power Burned Effect"), 0x68e20, 0x68e40, indexCPS2_Bison, 0x00 },
    { _T("Burned Status"),   0x68e40, 0x68e60, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA1_A_MBISON_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x68e60, 0x68e80, indexCPS2_Bison, 0x00 },
    { _T("Super Trail 1"),  0x68e80, 0x68eA0, indexCPS2_Bison, 0x00 },
    { _T("Super Trail 2"),  0x68eA0, 0x68eC0, indexCPS2_Bison, 0x00 },
    { _T("Super Trail 3"),  0x68eC0, 0x68eE0, indexCPS2_Bison, 0x00 },
    { _T("Extra 1"),        0x68eE0, 0x68f00 },
    { _T("Extra 2"),        0x68f00, 0x68f20 },
    { _T("Psycho Power Burned Effect"), 0x68f20, 0x68f40, indexCPS2_Bison, 0x00 },
    { _T("Burned Status"),   0x68f40, 0x68f60, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA1_A_MBISON_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Punch Portrait"), 0x7da00, 0x7da40, indexCPS2_SFA1_Portraits, indexCPS2_Bison },
    { _T("M.Bison Kick Portrait"), 0x7dd00, 0x7dd40, indexCPS2_SFA1_Portraits, indexCPS2_Bison },
};

const sGame_PaletteDataset SFA1_A_SAGAT_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x68f60, 0x68f80, indexCPS2_Sagat, 0x00 },
    { _T("Super Trail 1"),  0x68f80, 0x68fA0, indexCPS2_Sagat, 0x00 },
    { _T("Super Trail 2"),  0x68fA0, 0x68fC0, indexCPS2_Sagat, 0x00 },
    { _T("Super Trail 3"),  0x68fC0, 0x68fE0, indexCPS2_Sagat, 0x00 },
    { _T("Extra 1"),        0x68fE0, 0x69000 },
    { _T("Extra 2"),        0x69000, 0x69020 },
    { _T("Psycho Power Burned Effect"), 0x69020, 0x69040, indexCPS2_Sagat, 0x00 },
    { _T("Burned Status"),   0x69040, 0x69060, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA1_A_SAGAT_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x69060, 0x69080, indexCPS2_Sagat, 0x00 },
    { _T("Super Trail 1"),  0x69080, 0x690A0, indexCPS2_Sagat, 0x00 },
    { _T("Super Trail 2"),  0x690A0, 0x690C0, indexCPS2_Sagat, 0x00 },
    { _T("Super Trail 3"),  0x690C0, 0x690E0, indexCPS2_Sagat, 0x00 },
    { _T("Extra 1"),        0x690E0, 0x69100 },
    { _T("Extra 2"),        0x69100, 0x69120 },
    { _T("Psycho Power Burned Effect"), 0x69120, 0x69140, indexCPS2_Sagat, 0x00 },
    { _T("Burned Status"),   0x69140, 0x69160, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA1_A_SAGAT_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Punch Portrait"), 0x7da40, 0x7da60, indexCPS2_SFA1_Portraits, indexCPS2_Sagat },
    { _T("Sagat Kick Portrait"), 0x7dd40, 0x7dd60, indexCPS2_SFA1_Portraits, indexCPS2_Sagat },
};

const sGame_PaletteDataset SFA1_A_DAN_PUNCH_PALETTES[] =
{
    { _T("Main Sprite"),    0x69160, 0x69180, indexCPS2_Dan, 0x00 },
    { _T("Super Trail 1"),  0x69180, 0x691A0, indexCPS2_Dan, 0x00 },
    { _T("Super Trail 2"),  0x691A0, 0x691C0, indexCPS2_Dan, 0x00 },
    { _T("Super Trail 3"),  0x691C0, 0x691E0, indexCPS2_Dan, 0x00 },
    { _T("Gadouken"),       0x691E0, 0x69200, indexCPS2_Dan, 0x01 },
    { _T("Extra 2"),        0x69200, 0x69220 },
    { _T("Psycho Power Burned Effect"), 0x69220, 0x69240, indexCPS2_Dan, 0x00 },
    { _T("Burned Status"),   0x69240, 0x69260, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA1_A_DAN_KICK_PALETTES[] =
{
    { _T("Main Sprite"),    0x69260, 0x69280, indexCPS2_Dan, 0x00 },
    { _T("Super Trail 1"),  0x69280, 0x692A0, indexCPS2_Dan, 0x00 },
    { _T("Super Trail 2"),  0x692A0, 0x692C0, indexCPS2_Dan, 0x00 },
    { _T("Super Trail 3"),  0x692C0, 0x692E0, indexCPS2_Dan, 0x00 },
    { _T("Gadouken"),       0x692E0, 0x69300, indexCPS2_Dan, 0x01 },
    { _T("Extra 2"),        0x69300, 0x69320 },
    { _T("Psycho Power Burned Effect"), 0x69320, 0x69340, indexCPS2_Dan, 0x00 },
    { _T("Burned Status"),   0x69340, 0x69360, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA1_A_DAN_PORTRAIT_PALETTES[] =
{
    { _T("Dan Punch Portrait"), 0x7ec20, 0x7ec40, indexCPS2_SFA1_Portraits, indexCPS2_Dan },
    { _T("Dan Kick Portrait"), 0x7ec40, 0x7ec60, indexCPS2_SFA1_Portraits, indexCPS2_Dan },
};

const sDescTreeNode SFA1_A_RYU_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_RYU_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_KICK_PALETTES,    ARRAYSIZE(SFA1_A_RYU_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_RYU_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_KEN_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_KEN_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_KICK_PALETTES,    ARRAYSIZE(SFA1_A_KEN_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_KEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_GOUKI_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_AKUMA_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_AKUMA_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_AKUMA_KICK_PALETTES,    ARRAYSIZE(SFA1_A_AKUMA_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_AKUMA_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_AKUMA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_CHARLIE_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_CHARLIE_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_KICK_PALETTES,    ARRAYSIZE(SFA1_A_CHARLIE_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_CHARLIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_CHUNLI_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_CHUNLI_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_KICK_PALETTES,    ARRAYSIZE(SFA1_A_CHUNLI_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_CHUNLI_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_ADON_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_ADON_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_KICK_PALETTES,    ARRAYSIZE(SFA1_A_ADON_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_ADON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_SODOM_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_SODOM_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_KICK_PALETTES,    ARRAYSIZE(SFA1_A_SODOM_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_SODOM_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_GUY_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_GUY_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_KICK_PALETTES,    ARRAYSIZE(SFA1_A_GUY_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_GUY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_BIRDIE_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_BIRDIE_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_KICK_PALETTES,    ARRAYSIZE(SFA1_A_BIRDIE_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_BIRDIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_ROSE_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_ROSE_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_KICK_PALETTES,    ARRAYSIZE(SFA1_A_ROSE_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_ROSE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_MBISON_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_MBISON_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_KICK_PALETTES,    ARRAYSIZE(SFA1_A_MBISON_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_MBISON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_SAGAT_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_SAGAT_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_KICK_PALETTES,    ARRAYSIZE(SFA1_A_SAGAT_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_SAGAT_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_DAN_COLLECTION[] =
{
    { _T("Punch"),  DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_PUNCH_PALETTES,   ARRAYSIZE(SFA1_A_DAN_PUNCH_PALETTES) },
    { _T("Kick"),   DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_KICK_PALETTES,    ARRAYSIZE(SFA1_A_DAN_KICK_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_PORTRAIT_PALETTES, ARRAYSIZE(SFA1_A_DAN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA1_A_UNITS[SFA1_A_NUM_IND] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA1_A_ADON_COLLECTION,          ARRAYSIZE(SFA1_A_ADON_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA1_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA1_A_BIRDIE_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA1_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA1_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA1_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA1_A_CHUNLI_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA1_A_DAN_COLLECTION,           ARRAYSIZE(SFA1_A_DAN_COLLECTION) },
    { _T("Gouki"),           DESC_NODETYPE_TREE, (void*)SFA1_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA1_A_GOUKI_COLLECTION) },
    { _T("Guy"),             DESC_NODETYPE_TREE, (void*)SFA1_A_GUY_COLLECTION,           ARRAYSIZE(SFA1_A_GUY_COLLECTION) },
    { _T("Ken"),             DESC_NODETYPE_TREE, (void*)SFA1_A_KEN_COLLECTION,           ARRAYSIZE(SFA1_A_KEN_COLLECTION) },
    { _T("M. Bison"),        DESC_NODETYPE_TREE, (void*)SFA1_A_MBISON_COLLECTION,        ARRAYSIZE(SFA1_A_MBISON_COLLECTION) },
    { _T("Rose"),            DESC_NODETYPE_TREE, (void*)SFA1_A_ROSE_COLLECTION,          ARRAYSIZE(SFA1_A_ROSE_COLLECTION) },
    { _T("Ryu"),             DESC_NODETYPE_TREE, (void*)SFA1_A_RYU_COLLECTION,           ARRAYSIZE(SFA1_A_RYU_COLLECTION) },
    { _T("Sagat"),           DESC_NODETYPE_TREE, (void*)SFA1_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA1_A_SAGAT_COLLECTION) },
    { _T("Sodom"),           DESC_NODETYPE_TREE, (void*)SFA1_A_SODOM_COLLECTION,         ARRAYSIZE(SFA1_A_SODOM_COLLECTION) },
};

// We extend this array with data groveled from the SFA1e.txt extensible extras file, if any.
const stExtraDef SFA1_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

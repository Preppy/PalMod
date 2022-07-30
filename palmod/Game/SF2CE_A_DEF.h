#pragma once

#include "SF2HF_A_DEF.h"

//FILE 22 PALETTES START
const sGame_PaletteDataset SF2CE_A_RYU_P1_NODE[] =
{
    { L"Ryu", 0x24286, 0x242a6, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SF2CE_A_RYU_P2_NODE[] =
{
    { L"Ryu", 0x16834, 0x16854, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SF2CE_A_EHONDA_P1_NODE[] =
{
    { L"E.Honda", 0x242a6, 0x242c6, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SF2CE_A_EHONDA_P2_NODE[] =
{
    { L"E.Honda", 0x16856, 0x16876, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SF2CE_A_BLANKA_P1_NODE[] =
{
    { L"Blanka", 0x242c6, 0x242e6, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SF2CE_A_BLANKA_P2_NODE[] =
{
    { L"Blanka", 0x16878, 0x16898, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SF2CE_A_GUILE_P1_NODE[] =
{
    { L"Guile", 0x242e6, 0x24306, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SF2CE_A_GUILE_P2_NODE[] =
{
    { L"Guile", 0x1689a, 0x168ba, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SF2CE_A_KEN_P1_NODE[] =
{
    { L"Ken", 0x24306, 0x24326, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SF2CE_A_KEN_P2_NODE[] =
{
    { L"Ken", 0x168bc, 0x168dc, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SF2CE_A_CHUNLI_P1_NODE[] =
{
    { L"Chun-Li", 0x24326, 0x24346, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SF2CE_A_CHUNLI_P2_NODE[] =
{
    { L"Chun-Li", 0x168e0 - 0x02, 0x16900 - 0x02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SF2CE_A_ZANGIEF_P1_NODE[] =
{
    { L"Zangief", 0x24346, 0x24366, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset SF2CE_A_ZANGIEF_P2_NODE[] =
{
    { L"Zangief", 0x16900, 0x16920, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset SF2CE_A_DHALSIM_P1_NODE[] =
{
    { L"Dhalsim", 0x24366, 0x24386, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SF2CE_A_DHALSIM_P2_NODE[] =
{
    { L"Dhalsim", 0x16922, 0x16942, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SF2CE_A_DICTATOR_P1_NODE[] =
{
    { L"Dictator", 0x16aec, 0x16bec, indexSF2Sprites_Bison, 0x8 },
};

const sGame_PaletteDataset SF2CE_A_DICTATOR_P2_NODE[] =
{
    { L"Dictator", 0x16944, 0x16a44, indexSF2Sprites_Bison, 0x8 },
};

const sGame_PaletteDataset SF2CE_A_SAGAT_P1_NODE[] =
{
    { L"Sagat", 0x16BF0 - 0x02, 0x16c10 - 0x02, indexSF2Sprites_Sagat },
    { L"Tiger Shot", 0x16c2e, 0x16c4e, indexSF2Sprites_Sagat, 0x08 },
};

const sGame_PaletteDataset SF2CE_A_SAGAT_P2_NODE[] =
{
    { L"Sagat", 0x16a46, 0x16a66, indexSF2Sprites_Sagat },
    { L"Tiger Shot", 0x16a86, 0x16aa6, indexSF2Sprites_Sagat, 0x08 },
};

const sGame_PaletteDataset SF2CE_A_BOXER_P1_NODE[] =
{
    { L"Boxer", 0x16c50, 0x16c70, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SF2CE_A_BOXER_P2_NODE[] =
{
    { L"Boxer", 0x16aa8, 0x16ac8, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SF2CE_A_CLAW_P1_NODE[] =
{
    { L"Claw", 0x16c72, 0x16c92, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SF2CE_A_CLAW_P2_NODE[] =
{
    { L"Claw", 0x16aca, 0x16aea, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SF2CE_A_IN_GAME_NODE[] =
{
    { L"Insert Coin Text", 0x24266, 0x24286, indexSF2Sprites_Bonus, 0x2e },
    { L"HUD and Text", 0x243e6, 0x24426, indexSF2Sprites_Bonus, 0x2c },
    { L"In-Game Black FX", 0x24386, 0x243a6, indexSF2Sprites_Bonus, 0x29, &pairNextAndNext },
    { L"Dust and Green Hitsparks", 0x243c6, 0x243e6, indexSF2Sprites_Bonus, 0x28 },
    { L"Various In-Game FX", 0x24426, 0x24466, indexSF2Sprites_Bonus, 0x2a },
};

const sGame_PaletteDataset SF2CE_A_BONUS_NODE[] =
{
    { L"Intro Characters", 0x264e6, 0x26626, indexSF2Sprites_Bonus, 0x2d },
    { L"Game Title", 0x26646, 0x26666, indexSF2Sprites_Bonus, 0x2b },
    { L"Character Select Extras", 0x26806, 0x26866, indexSF2Sprites_Bonus, 0x24 },
    { L"World Map M.Bison", 0x26786, 0x267a6, indexSF2Sprites_Bonus, 0x2f },
};
//FILE 22 PALETTES END

//FILE 21 PALETTES START
const sGame_PaletteDataset SF2CE_A_RYU_PORTRAITS_NODE[] =
{
    { L"Ryu P1", 0x9400 - 0x02, 0x9420 - 0x02, indexSF2Sprites_Bonus, 0x16 },
    { L"Ryu P2 1/2", 0x9600 - 0x02, 0x9620 - 0x02, indexSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Ryu P2 2/2", 0x959e, 0x95be, indexSF2Sprites_Ryu, 0x21 },
};

const sGame_PaletteDataset SF2CE_A_EHONDA_PORTRAITS_NODE[] =
{
    { L"E.Honda P1", 0x9420 - 0x02, 0x9440 - 0x02, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda P2", 0x9620 - 0x02, 0x9640 - 0x02, indexSF2Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset SF2CE_A_BLANKA_PORTRAITS_NODE[] =
{
    { L"Blanka P1", 0x9440 - 0x02, 0x9460 - 0x02, indexSF2Sprites_Bonus, 0x03 },
    { L"Blanka P2", 0x9640 - 0x02, 0x9660 - 0x02, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset SF2CE_A_GUILE_PORTRAITS_NODE[] =
{
    { L"Guile P1", 0x9460 - 0x02, 0x9480 - 0x02, indexSF2Sprites_Bonus, 0x12 },
    { L"Guile P2", 0x9660 - 0x02, 0x9680 - 0x02, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset SF2CE_A_KEN_PORTRAITS_NODE[] =
{
    { L"Ken P1", 0x9480 - 0x02, 0x94a0 - 0x02, indexSF2Sprites_Bonus, 0x14 },
    { L"Ken P2", 0x9680 - 0x02, 0x96a0 - 0x02, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset SF2CE_A_CHUNLI_PORTRAITS_NODE[] =
{
    { L"Chun-Li P1", 0x94a0 - 0x02, 0x94c0 - 0x02, indexSF2Sprites_Bonus, 0x06 },
    { L"Chun-Li P2", 0x96a0 - 0x02, 0x96c0 - 0x02, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset SF2CE_A_ZANGIEF_PORTRAITS_NODE[] =
{
    { L"Zangief P1", 0x94c0 - 0x02, 0x94e0 - 0x02, indexSF2Sprites_Bonus, 0x1a },
    { L"Zangief P2 1/2", 0x96c0 - 0x02, 0x96e0 - 0x02, indexSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Zangief P2 2/2", 0x95de , 0x95fe, indexSF2Sprites_Zangief, 0x21 },
};

const sGame_PaletteDataset SF2CE_A_DHALSIM_PORTRAITS_NODE[] =
{
    { L"Dhalsim P1 1/2", 0x94e0 - 0x02, 0x9500 - 0x02, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim P1 2/2", 0x9580 - 0x02, 0x95a0 - 0x02, indexSF2Sprites_Bonus, 0x0b },
    { L"Dhalsim P2 1/3", 0x96e0 - 0x02, 0x9700 - 0x02, indexSF2Sprites_Dhalsim, 0x20, &pairNextAndNext },
    { L"Dhalsim P2 2/3", 0x9780 - 0x02, 0x97a0 - 0x02, indexSF2Sprites_Dhalsim, 0x21 },
    { L"Dhalsim P2 3/3", 0x979e, 0x97be, indexSF2Sprites_Dhalsim, 0x22 },
};

const sGame_PaletteDataset SF2CE_A_DICTATOR_PORTRAITS_NODE[] =
{
    { L"Dictator P1 1/2", 0x9500 - 0x02, 0x9520 - 0x02, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"Dictator P1 2/2", 0x95c0 - 0x02, 0x95e0 - 0x02, indexSF2Sprites_Bonus, 0x0e },
    { L"Dictator P2 1/2", 0x9700 - 0x02, 0x9720 - 0x02, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"Dictator P2 2/2", 0x97c0 - 0x02, 0x97E0 - 0x02, indexSF2Sprites_Bonus, 0x0e },
};

const sGame_PaletteDataset SF2CE_A_BOXER_PORTRAITS_NODE[] =
{
    { L"Boxer P1", 0x9540 - 0x02, 0x9560 - 0x02, indexSF2Sprites_Bonus, 0x05 },
    { L"Boxer P2", 0x9740 - 0x02, 0x9760 - 0x02, indexSF2Sprites_Bonus, 0x05 },
};

const sGame_PaletteDataset SF2CE_A_SAGAT_PORTRAITS_NODE[] =
{
    { L"Sagat P1", 0x9520 - 0x02, 0x9540 - 0x02, indexSF2Sprites_Bonus, 0x19 },
    { L"Sagat P2", 0x9720 - 0x02, 0x9740 - 0x02, indexSF2Sprites_Bonus, 0x19 },
};

const sGame_PaletteDataset SF2CE_A_CLAW_PORTRAITS_NODE[] =
{
    { L"Claw P1", 0x9560 - 0x02, 0x9580 - 0x02, indexSF2Sprites_Bonus, 0x08 },
    { L"Claw P2", 0x9760 - 0x02, 0x9780 - 0x02, indexSF2Sprites_Bonus, 0x08 },
};

const sGame_PaletteDataset SF2CE_A_SELSCREEN_NODE[] =
{
    { L"Select Portraits (1/2)", 0xe41e, 0xe51e, indexSF2Sprites_Bonus, 0x26, &pairNext },
    { L"Shadaloo Portraits (2/2)", 0xe71e, 0xe77e, indexSF2Sprites_Bonus, 0x27, &pairPrevious },
    { L"Grayed Portraits (1/2)", 0xe61e, 0xe71e, indexSF2Sprites_Bonus, 0x26, &pairNext },
    { L"Grayed Portraits (2/2)", 0xe77e, 0xe7de, indexSF2Sprites_Bonus, 0x27, &pairPrevious },
    { L"World Map Background", 0xe51e, 0xe5de, indexSF2Sprites_Bonus, 0x25 },
};
//FILE 21 PALETTES END

//FILE 23 PALETTES START
const sGame_PaletteDataset SF2CE_A_RYU_23_PORTRAITS_NODE[] =
{
    { L"Ryu P1", 0x1dff8, 0x1e018, indexSF2Sprites_Bonus, 0x16 },
    { L"Ryu P2", 0x1e118, 0x1e138, indexSF2Sprites_Bonus, 0x16 },
};

const sGame_PaletteDataset SF2CE_A_EHONDA_23_PORTRAITS_NODE[] =
{
    { L"E.Honda P1", 0x1e018, 0x1e038, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda P2", 0x1e138, 0x1e158, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda Shared Extra", 0x1e0f8, 0x1e118, indexSF2Sprites_Bonus, 0x30 },
};

const sGame_PaletteDataset SF2CE_A_BLANKA_23_PORTRAITS_NODE[] =
{
    { L"Blanka P1", 0x1e038, 0x1e058, indexSF2Sprites_Bonus, 0x03 },
    { L"Blanka P2", 0x1e158, 0x1e178, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset SF2CE_A_GUILE_23_PORTRAITS_NODE[] =
{
    { L"Guile P1", 0x1e058, 0x1e078, indexSF2Sprites_Bonus, 0x12 },
    { L"Guile P2", 0x1e178, 0x1e198, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset SF2CE_A_KEN_23_PORTRAITS_NODE[] =
{
    { L"Ken P1", 0x1e078, 0x1e098, indexSF2Sprites_Bonus, 0x14 },
    { L"Ken P2", 0x1e198, 0x1e1b8, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset SF2CE_A_CHUNLI_23_PORTRAITS_NODE[] =
{
    { L"Chun-Li P1", 0x1e098, 0x1e0b8, indexSF2Sprites_Bonus, 0x06 },
    { L"Chun-Li P2", 0x1e1b8, 0x1e1d8, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset SF2CE_A_ZANGIEF_23_PORTRAITS_NODE[] =
{
    { L"Zangief P1", 0x1e0b8, 0x1e0d8, indexSF2Sprites_Bonus, 0x1a },
    { L"Zangief P2", 0x1e1d8, 0x1e1f8, indexSF2Sprites_Bonus, 0x1a },
};

const sGame_PaletteDataset SF2CE_A_DHALSIM_23_PORTRAITS_NODE[] =
{
    { L"Dhalsim P1", 0x1e0d8, 0x1e0f8, indexSF2Sprites_Dhalsim, 0x23 },
    { L"Dhalsim P2", 0x1e1f8, 0x1e218, indexSF2Sprites_Dhalsim, 0x23 },
};
//FILE 23 PALETTES END

//FILE 21 COLLECTION START
const sDescTreeNode SF2CE_A_PORTRAITS_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2CE_A_BLANKA_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_BLANKA_PORTRAITS_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2CE_A_CHUNLI_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_CHUNLI_PORTRAITS_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2CE_A_DHALSIM_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_DHALSIM_PORTRAITS_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2CE_A_EHONDA_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_EHONDA_PORTRAITS_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2CE_A_GUILE_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_GUILE_PORTRAITS_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2CE_A_KEN_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_KEN_PORTRAITS_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2CE_A_RYU_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_RYU_PORTRAITS_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2CE_A_ZANGIEF_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_ZANGIEF_PORTRAITS_NODE) },

    { L"Boxer",      DESC_NODETYPE_TREE, (void*)SF2CE_A_BOXER_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_BOXER_PORTRAITS_NODE) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2CE_A_CLAW_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_CLAW_PORTRAITS_NODE) },
    { L"Sagat",      DESC_NODETYPE_TREE, (void*)SF2CE_A_SAGAT_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_SAGAT_PORTRAITS_NODE) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2CE_A_DICTATOR_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_DICTATOR_PORTRAITS_NODE) },
};

const sDescTreeNode SF2CE_A_SELSCREEN_COLLECTION[] =
{
    { L"Select Screen",        DESC_NODETYPE_TREE, (void*)SF2CE_A_SELSCREEN_NODE, ARRAYSIZE(SF2CE_A_SELSCREEN_NODE) },
};
//FILE 21 COLLECTION END

//FILE 23 COLLECTION START
const sDescTreeNode SF2CE_A_23_PORTRAITS_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2CE_A_BLANKA_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_BLANKA_23_PORTRAITS_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2CE_A_CHUNLI_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_CHUNLI_23_PORTRAITS_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2CE_A_DHALSIM_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_DHALSIM_23_PORTRAITS_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2CE_A_EHONDA_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_EHONDA_23_PORTRAITS_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2CE_A_GUILE_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_GUILE_23_PORTRAITS_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2CE_A_KEN_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_KEN_23_PORTRAITS_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2CE_A_RYU_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_RYU_23_PORTRAITS_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2CE_A_ZANGIEF_23_PORTRAITS_NODE, ARRAYSIZE(SF2CE_A_ZANGIEF_23_PORTRAITS_NODE) },
};
//FILE 23 COLLECTION END

//FILE 22 COLLECTION START
const sDescTreeNode SF2CE_A_BLANKA_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_BLANKA_P1_NODE, ARRAYSIZE(SF2CE_A_BLANKA_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_BLANKA_P2_NODE, ARRAYSIZE(SF2CE_A_BLANKA_P2_NODE) },
};

const sDescTreeNode SF2CE_A_CHUNLI_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_CHUNLI_P1_NODE, ARRAYSIZE(SF2CE_A_CHUNLI_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_CHUNLI_P2_NODE, ARRAYSIZE(SF2CE_A_CHUNLI_P2_NODE) },
};

const sDescTreeNode SF2CE_A_DHALSIM_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_DHALSIM_P1_NODE, ARRAYSIZE(SF2CE_A_DHALSIM_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_DHALSIM_P2_NODE, ARRAYSIZE(SF2CE_A_DHALSIM_P2_NODE) },
};

const sDescTreeNode SF2CE_A_EHONDA_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_EHONDA_P1_NODE, ARRAYSIZE(SF2CE_A_EHONDA_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_EHONDA_P2_NODE, ARRAYSIZE(SF2CE_A_EHONDA_P2_NODE) },
};

const sDescTreeNode SF2CE_A_GUILE_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_GUILE_P1_NODE, ARRAYSIZE(SF2CE_A_GUILE_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_GUILE_P2_NODE, ARRAYSIZE(SF2CE_A_GUILE_P2_NODE) },
};

const sDescTreeNode SF2CE_A_KEN_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_KEN_P1_NODE, ARRAYSIZE(SF2CE_A_KEN_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_KEN_P2_NODE, ARRAYSIZE(SF2CE_A_KEN_P2_NODE) },
};

const sDescTreeNode SF2CE_A_RYU_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_RYU_P1_NODE, ARRAYSIZE(SF2CE_A_RYU_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_RYU_P2_NODE, ARRAYSIZE(SF2CE_A_RYU_P2_NODE) },
};

const sDescTreeNode SF2CE_A_ZANGIEF_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_ZANGIEF_P1_NODE, ARRAYSIZE(SF2CE_A_ZANGIEF_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_ZANGIEF_P2_NODE, ARRAYSIZE(SF2CE_A_ZANGIEF_P2_NODE) },
};

const sDescTreeNode SF2CE_A_BOXER_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_BOXER_P1_NODE, ARRAYSIZE(SF2CE_A_BOXER_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_BOXER_P2_NODE, ARRAYSIZE(SF2CE_A_BOXER_P2_NODE) },
};

const sDescTreeNode SF2CE_A_CLAW_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_CLAW_P1_NODE, ARRAYSIZE(SF2CE_A_CLAW_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_CLAW_P2_NODE, ARRAYSIZE(SF2CE_A_CLAW_P2_NODE) },
};

const sDescTreeNode SF2CE_A_SAGAT_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_SAGAT_P1_NODE, ARRAYSIZE(SF2CE_A_SAGAT_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_SAGAT_P2_NODE, ARRAYSIZE(SF2CE_A_SAGAT_P2_NODE) },
};

const sDescTreeNode SF2CE_A_DICTATOR_COLLECTION[] =
{
    { L"P1",         DESC_NODETYPE_TREE, (void*)SF2CE_A_DICTATOR_P1_NODE, ARRAYSIZE(SF2CE_A_DICTATOR_P1_NODE) },
    { L"P2",         DESC_NODETYPE_TREE, (void*)SF2CE_A_DICTATOR_P2_NODE, ARRAYSIZE(SF2CE_A_DICTATOR_P2_NODE) },
};

const sDescTreeNode SF2CE_A_BONUS_COLLECTION[] =
{
    { L"In-Game Palettes",         DESC_NODETYPE_TREE, (void*)SF2CE_A_IN_GAME_NODE, ARRAYSIZE(SF2CE_A_IN_GAME_NODE) },
    { L"Bonus Palettes",         DESC_NODETYPE_TREE, (void*)SF2CE_A_BONUS_NODE, ARRAYSIZE(SF2CE_A_BONUS_NODE) },
};
//FILE 22 COLLECTION END

//FILE 21 UNITS START
const sDescTreeNode SF2CE_A_21_UNITS[] =
{
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2CE_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2CE_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2CE_A_SELSCREEN_COLLECTION, ARRAYSIZE(SF2CE_A_SELSCREEN_COLLECTION) },
};

constexpr auto SF2CE_A_21_NUMUNIT = ARRAYSIZE(SF2CE_A_21_UNITS);
constexpr auto SF2CE_A_21_EXTRALOC = SF2CE_A_21_NUMUNIT;
//FILE 21 UNITS END

//FILE 22 UNITS START
const sDescTreeNode SF2CE_A_22_UNITS[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2CE_A_BLANKA_COLLECTION, ARRAYSIZE(SF2CE_A_BLANKA_COLLECTION) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2CE_A_CHUNLI_COLLECTION, ARRAYSIZE(SF2CE_A_CHUNLI_COLLECTION) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2CE_A_DHALSIM_COLLECTION, ARRAYSIZE(SF2CE_A_DHALSIM_COLLECTION) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2CE_A_EHONDA_COLLECTION, ARRAYSIZE(SF2CE_A_EHONDA_COLLECTION) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2CE_A_GUILE_COLLECTION, ARRAYSIZE(SF2CE_A_GUILE_COLLECTION) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2CE_A_KEN_COLLECTION, ARRAYSIZE(SF2CE_A_KEN_COLLECTION) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2CE_A_RYU_COLLECTION, ARRAYSIZE(SF2CE_A_RYU_COLLECTION) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2CE_A_ZANGIEF_COLLECTION, ARRAYSIZE(SF2CE_A_ZANGIEF_COLLECTION) },

    { L"Boxer",      DESC_NODETYPE_TREE, (void*)SF2CE_A_BOXER_COLLECTION, ARRAYSIZE(SF2CE_A_BOXER_COLLECTION) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2CE_A_CLAW_COLLECTION, ARRAYSIZE(SF2CE_A_CLAW_COLLECTION) },
    { L"Sagat",      DESC_NODETYPE_TREE, (void*)SF2CE_A_SAGAT_COLLECTION, ARRAYSIZE(SF2CE_A_SAGAT_COLLECTION) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2CE_A_DICTATOR_COLLECTION, ARRAYSIZE(SF2CE_A_DICTATOR_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2CE_A_BONUS_COLLECTION, ARRAYSIZE(SF2CE_A_BONUS_COLLECTION) },
};

constexpr auto SF2CE_A_22_NUMUNIT = ARRAYSIZE(SF2CE_A_22_UNITS);
constexpr auto SF2CE_A_22_EXTRALOC = SF2CE_A_22_NUMUNIT;
//FILE 22 UNITS END

//FILE 23 UNITS START
const sDescTreeNode SF2CE_A_23_UNITS[] =
{
    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)SF2CE_A_23_PORTRAITS_COLLECTION, ARRAYSIZE(SF2CE_A_23_PORTRAITS_COLLECTION) },
};

constexpr auto SF2CE_A_23_NUMUNIT = ARRAYSIZE(SF2CE_A_23_UNITS);
constexpr auto SF2CE_A_23_EXTRALOC = SF2CE_A_23_NUMUNIT;
//FILE 23 UNITS END

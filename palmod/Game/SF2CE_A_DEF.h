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
    { L"Dictator", 0x16aec, 0x16b0c, indexSF2Sprites_Bison, 0x08, &pairNext2 },
    { L"Cape", 0x16b0c, 0x16b2c, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks 1", 0x16b6c, 0x16bac, indexSF2Sprites_Bison, 0x09, &pairPrevious2 },
    { L"Psycho Attacks 2", 0x16bac, 0x16bec, indexSF2Sprites_Bison, 0x09, &pairPrevious3 },
    { L"Psycho Crusher", 0x16b2c, 0x16b6c, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SF2CE_A_DICTATOR_P2_NODE[] =
{
    { L"Dictator", 0x16944, 0x16964, indexSF2Sprites_Bison, 0x08, &pairNext2 },
    { L"Cape", 0x16964, 0x16984, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks 1", 0x169c4, 0x16a04, indexSF2Sprites_Bison, 0x09, &pairPrevious2 },
    { L"Psycho Attacks 2", 0x16a04, 0x16a44, indexSF2Sprites_Bison, 0x09, &pairPrevious3 },
    { L"Psycho Crusher", 0x16984, 0x169c4, indexSF2Sprites_Bison, 0x03 },
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

const sGame_PaletteDataset SF2CE_A_22_BONUS_OPENING_NODE[] =
{
    { L"Intro Characters", 0x264e6, 0x26626, indexSF2Sprites_Bonus, 0x2d },
};

const sGame_PaletteDataset SF2CE_A_22_BONUS_TITLE_NODE[] =
{
    { L"Street Fighter II'", 0x26646, 0x26666, indexSF2Sprites_Bonus, 0x2b },
};

const sGame_PaletteDataset SF2CE_A_22_BONUS_CSELECT_NODE[] =
{
    { L"Character Select Extras", 0x26806, 0x26866, indexSF2Sprites_Bonus, 0x24 },
    { L"World Map Dictator", 0x26786, 0x267a6, indexSF2Sprites_Bonus, 0x2f },
};

const sGame_PaletteDataset SF2CE_A_IN_GAME_NODE[] =
{
    { L"Insert Coin Text", 0x24266, 0x24286, indexSF2Sprites_Bonus, 0x2e },
    { L"HUD and Text", 0x243e6, 0x24426, indexSF2Sprites_Bonus, 0x2c },
    { L"In-Game Black FX", 0x24386, 0x243a6, indexSF2Sprites_Bonus, 0x29, &pairNextAndNext },
    { L"Dust and Green Hitsparks", 0x243c6, 0x243e6, indexSF2Sprites_Bonus, 0x28 },
    { L"Various In-Game FX", 0x24426, 0x24466, indexSF2Sprites_Bonus, 0x2a },
};
//FILE 22 PALETTES END

//FILE 21 PALETTES START
const sGame_PaletteDataset SF2CE_A_RYU_PORTRAITS_NODE[] =
{
    { L"Ryu P1", 0x9400 - 0x02, 0x9420 - 0x02, indexSF2Sprites_Ryu, 0x24 },
    { L"Ryu P2 1/2", 0x9600 - 0x02, 0x9620 - 0x02, indexSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Ryu P2 2/2", 0x959e, 0x95be, indexSF2Sprites_Ryu, 0x21 },
};

const sGame_PaletteDataset SF2CE_A_EHONDA_PORTRAITS_NODE[] =
{
    { L"E.Honda P1", 0x9420 - 0x02, 0x9440 - 0x02, indexSF2Sprites_EHonda, 0x24 },
    { L"E.Honda P2", 0x9620 - 0x02, 0x9640 - 0x02, indexSF2Sprites_EHonda, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_BLANKA_PORTRAITS_NODE[] =
{
    { L"Blanka P1", 0x9440 - 0x02, 0x9460 - 0x02, indexSF2Sprites_Blanka, 0x24 },
    { L"Blanka P2", 0x9640 - 0x02, 0x9660 - 0x02, indexSF2Sprites_Blanka, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_GUILE_PORTRAITS_NODE[] =
{
    { L"Guile P1", 0x9460 - 0x02, 0x9480 - 0x02, indexSF2Sprites_Guile, 0x24 },
    { L"Guile P2", 0x9660 - 0x02, 0x9680 - 0x02, indexSF2Sprites_Guile, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_KEN_PORTRAITS_NODE[] =
{
    { L"Ken P1", 0x9480 - 0x02, 0x94a0 - 0x02, indexSF2Sprites_Ken, 0x24 },
    { L"Ken P2", 0x9680 - 0x02, 0x96a0 - 0x02, indexSF2Sprites_Ken, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_CHUNLI_PORTRAITS_NODE[] =
{
    { L"Chun-Li P1", 0x94a0 - 0x02, 0x94c0 - 0x02, indexSF2Sprites_ChunLi, 0x24 },
    { L"Chun-Li P2", 0x96a0 - 0x02, 0x96c0 - 0x02, indexSF2Sprites_ChunLi, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_ZANGIEF_PORTRAITS_NODE[] =
{
    { L"Zangief P1", 0x94c0 - 0x02, 0x94e0 - 0x02, indexSF2Sprites_Zangief, 0x24 },
    { L"Zangief P2 1/2", 0x96c0 - 0x02, 0x96e0 - 0x02, indexSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Zangief P2 2/2", 0x95de , 0x95fe, indexSF2Sprites_Zangief, 0x21 },
};

const sGame_PaletteDataset SF2CE_A_DHALSIM_PORTRAITS_NODE[] =
{
    { L"Dhalsim P1 1/2", 0x94e0 - 0x02, 0x9500 - 0x02, indexSF2Sprites_Dhalsim, 0x24, &pairNext },
    { L"Dhalsim P1 2/2", 0x9580 - 0x02, 0x95a0 - 0x02, indexSF2Sprites_Dhalsim, 0x25 },
    { L"Dhalsim P2 1/3", 0x96e0 - 0x02, 0x9700 - 0x02, indexSF2Sprites_Dhalsim, 0x20, &pairNextAndNext },
    { L"Dhalsim P2 2/3", 0x9780 - 0x02, 0x97a0 - 0x02, indexSF2Sprites_Dhalsim, 0x21 },
    { L"Dhalsim P2 3/3", 0x979e, 0x97be, indexSF2Sprites_Dhalsim, 0x22 },
};

const sGame_PaletteDataset SF2CE_A_DICTATOR_PORTRAITS_NODE[] =
{
    { L"Dictator P1 1/2", 0x9500 - 0x02, 0x9520 - 0x02, indexSF2Sprites_Bison, 0x24, &pairNext },
    { L"Dictator P1 2/2", 0x95c0 - 0x02, 0x95e0 - 0x02, indexSF2Sprites_Bison, 0x25 },
    { L"Dictator P2 1/2", 0x9700 - 0x02, 0x9720 - 0x02, indexSF2Sprites_Bison, 0x24, &pairNext },
    { L"Dictator P2 2/2", 0x97c0 - 0x02, 0x97E0 - 0x02, indexSF2Sprites_Bison, 0x25 },
};

const sGame_PaletteDataset SF2CE_A_BOXER_PORTRAITS_NODE[] =
{
    { L"Boxer P1", 0x9540 - 0x02, 0x9560 - 0x02, indexSF2Sprites_Balrog, 0x24 },
    { L"Boxer P2", 0x9740 - 0x02, 0x9760 - 0x02, indexSF2Sprites_Balrog, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_SAGAT_PORTRAITS_NODE[] =
{
    { L"Sagat P1", 0x9520 - 0x02, 0x9540 - 0x02, indexSF2Sprites_Sagat, 0x24 },
    { L"Sagat P2", 0x9720 - 0x02, 0x9740 - 0x02, indexSF2Sprites_Sagat, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_CLAW_PORTRAITS_NODE[] =
{
    { L"Claw P1", 0x9560 - 0x02, 0x9580 - 0x02, indexSF2Sprites_Vega, 0x24 },
    { L"Claw P2", 0x9760 - 0x02, 0x9780 - 0x02, indexSF2Sprites_Vega, 0x24 },
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

//FILE 23 PALETTES START: Continue Portraits
const sGame_PaletteDataset SF2CE_A_RYU_23_PORTRAITS_NODE[] =
{
    { L"Ryu P1", 0x1dff8, 0x1e018, indexSF2Sprites_Ryu, 0x24 },
    { L"Ryu P2", 0x1e118, 0x1e138, indexSF2Sprites_Ryu, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_EHONDA_23_PORTRAITS_NODE[] =
{
    { L"E.Honda P1", 0x1e018, 0x1e038, indexSF2Sprites_EHonda, 0x24 },
    { L"E.Honda P2", 0x1e138, 0x1e158, indexSF2Sprites_EHonda, 0x24 },
    { L"E.Honda Shared Extra", 0x1e0f8, 0x1e118, indexSF2Sprites_Bonus, 0x30 },
};

const sGame_PaletteDataset SF2CE_A_BLANKA_23_PORTRAITS_NODE[] =
{
    { L"Blanka P1", 0x1e038, 0x1e058, indexSF2Sprites_Blanka, 0x24 },
    { L"Blanka P2", 0x1e158, 0x1e178, indexSF2Sprites_Blanka, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_GUILE_23_PORTRAITS_NODE[] =
{
    { L"Guile P1", 0x1e058, 0x1e078, indexSF2Sprites_Guile, 0x24 },
    { L"Guile P2", 0x1e178, 0x1e198, indexSF2Sprites_Guile, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_KEN_23_PORTRAITS_NODE[] =
{
    { L"Ken P1", 0x1e078, 0x1e098, indexSF2Sprites_Ken, 0x24 },
    { L"Ken P2", 0x1e198, 0x1e1b8, indexSF2Sprites_Ken, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_CHUNLI_23_PORTRAITS_NODE[] =
{
    { L"Chun-Li P1", 0x1e098, 0x1e0b8, indexSF2Sprites_ChunLi, 0x24 },
    { L"Chun-Li P2", 0x1e1b8, 0x1e1d8, indexSF2Sprites_ChunLi, 0x24 },
};

const sGame_PaletteDataset SF2CE_A_ZANGIEF_23_PORTRAITS_NODE[] =
{
    { L"Zangief P1", 0x1e0b8, 0x1e0d8, indexSF2Sprites_Zangief, 0x24 },
    { L"Zangief P2", 0x1e1d8, 0x1e1f8, indexSF2Sprites_Zangief, 0x24 },
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

const sGame_PaletteDataset SF2CE_A_22_STAGES_BLANKA_NODE[] =
{
    { L"Posts", 0x249c6, 0x249e6, indexSF2HFSprites_Stages, 0x49, &pairFullyLinkedNode },
    { L"Crowd & Stump", 0x249e6, 0x24a06, indexSF2HFSprites_Stages, 0x4a },
    { L"Crowd & Right Hut", 0x24a06, 0x24a26, indexSF2HFSprites_Stages, 0x4b },
    { L"Crowd", 0x24a26, 0x24a46, indexSF2HFSprites_Stages, 0x4c },
    { L"Fish", 0x24a46, 0x24a66, indexSF2HFSprites_Stages, 0x4d },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_BOXER_NODE[] =
{
    { L"Show Girls", 0x259a6, 0x25a66, indexSF2Sprites_Stages, 0x1b },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_CHUNLI_NODE[] =
{
    { L"Blue Biker", 0x25006, 0x25026, indexSF2Sprites_Stages, 0x29, &pairFullyLinkedNode },
    { L"Green Biker", 0x25026, 0x25046, indexSF2Sprites_Stages, 0x2a },
    { L"Red Biker", 0x25046, 0x25066, indexSF2Sprites_Stages, 0x2b },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_DHALSIM_NODE[] =
{
    { L"Pots", 0x25428, 0x25468, indexSF2Sprites_Stages, 0x58 },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_DICTATOR_NODE[] =
{
    { L"Statues (Destroyed)", 0x25646, 0x25666, indexSF2HFSprites_Stages, 0x55 },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_EHONDA_NODE[] =
{
    { L"Left Side Wall", 0x247c6, 0x247e6, indexSF2HFSprites_Stages, 0x13, &pairNext3Palettes },
    { L"Soap & Bucket", 0x247a6, 0x247c6, indexSF2HFSprites_Stages, 0x15 },
    { L"Water Droplets & Bathtub Overspill", 0x247e6, 0x24806, indexSF2HFSprites_Stages, 0x14 },
    { L"Lantern", 0x24846, 0x24866, indexSF2HFSprites_Stages, 0x16 },
    { L"Lantern After KO", 0x24806, 0x24846, indexSF2HFSprites_Stages, 0x17 },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_GUILE_NODE[] =
{
    { L"Crates", 0x24c06, 0x24c26, indexSF2HFSprites_Stages, 0x30, &pairFullyLinkedNode },
    { L"Jet", 0x24c26, 0x24c66, indexSF2HFSprites_Stages, 0x2f },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_KEN_NODE[] =
{
    { L"Foreground Bollards", 0x24de6, 0x24e06, indexSF2HFSprites_Stages, 0x46 },
    { L"Background Bollards & Steamboat", 0x24e26, 0x24e46, indexSF2HFSprites_Stages, 0x45 },
    { L"Drum", 0x24e46, 0x24e66, indexSF2HFSprites_Stages, 0x47 },
    { L"Drum (Destroyed)", 0x24d86, 0x24da6, indexSF2HFSprites_Stages, 0x48 },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_RYU_NODE[] =
{
    { L"Intermediate Rooftop & Birds", 0x24606, 0x24626, indexSF2HFSprites_Stages, 0x03, &pairFullyLinkedNode },
    { L"Background Building", 0x24646, 0x24666, indexSF2HFSprites_Stages, 0x01 },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_ZANGIEF_NODE[] =
{
    { L"Chain", 0x251c6, 0x251e6, indexSF2HFSprites_Stages, 0x69, &pairNext },
    { L"Extinguisher", 0x251e6, 0x25206, indexSF2HFSprites_Stages, 0x6a },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_BONUSCAR_NODE[] =
{
    { L"Car 1", 0x25da6, 0x25e26, indexSF2HFSprites_Stages, 0x4e, &pairFullyLinkedNode },
    { L"Car 2", 0x25e46, 0x25e66, indexSF2HFSprites_Stages, 0x4f },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_BONUSCASKS_NODE[] =
{
    { L"P2 Scoreboard", 0x25fe6, 0x26006, indexSF2HFSprites_Stages, 0x50, &pairFullyLinkedNode },
    { L"Scoreboard Tallies", 0x26006, 0x26026, indexSF2HFSprites_Stages, 0x51 },
    { L"Rolling Casks", 0x26046, 0x26066, indexSF2HFSprites_Stages, 0x52 },
};

const sGame_PaletteDataset SF2CE_A_22_STAGES_BONUSDRUMS_NODE[] =
{
    { L"Drums", 0x26246, 0x26266, indexSF2HFSprites_Stages, 0x53, &pairFullyLinkedNode },
    { L"Flames", 0x26226, 0x26246, indexSF2HFSprites_Stages, 0x54 },
};

const sDescTreeNode SF2CE_A_BONUS22_COLLECTION[] =
{
    { L"Opening Cinematic",     DESC_NODETYPE_TREE, (void*)SF2CE_A_22_BONUS_OPENING_NODE, ARRAYSIZE(SF2CE_A_22_BONUS_OPENING_NODE) },
    { L"Title Screen",          DESC_NODETYPE_TREE, (void*)SF2CE_A_22_BONUS_TITLE_NODE, ARRAYSIZE(SF2CE_A_22_BONUS_TITLE_NODE) },
    { L"Character Select",      DESC_NODETYPE_TREE, (void*)SF2CE_A_22_BONUS_CSELECT_NODE, ARRAYSIZE(SF2CE_A_22_BONUS_CSELECT_NODE) },
    { L"In-Game Palettes",      DESC_NODETYPE_TREE, (void*)SF2CE_A_IN_GAME_NODE, ARRAYSIZE(SF2CE_A_IN_GAME_NODE) },
};

const sDescTreeNode SF2CE_A_STAGES22_COLLECTION[] =
{
    { L"Blanka",                DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_BLANKA_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_BLANKA_NODE) },
    { L"Boxer",                 DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_BOXER_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_BOXER_NODE) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_CHUNLI_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_CHUNLI_NODE) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_DHALSIM_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_DHALSIM_NODE) },
    { L"Dictator",              DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_DICTATOR_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_DICTATOR_NODE) },
    { L"E.Honda",               DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_EHONDA_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_EHONDA_NODE) },
    { L"Guile",                 DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_GUILE_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_GUILE_NODE) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_KEN_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_KEN_NODE) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_RYU_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_RYU_NODE) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_ZANGIEF_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_ZANGIEF_NODE) },

    { L"Bonus Stage (Car)",     DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_BONUSCAR_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_BONUSCAR_NODE) },
    { L"Bonus Stage (Casks)",   DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_BONUSCASKS_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_BONUSCASKS_NODE) },
    { L"Bonus Stage (Drums)",   DESC_NODETYPE_TREE, (void*)SF2CE_A_22_STAGES_BONUSDRUMS_NODE, ARRAYSIZE(SF2CE_A_22_STAGES_BONUSDRUMS_NODE) },
};
//FILE 22 COLLECTION END

//FILE 21 UNITS START
const sDescTreeNode SF2CE_A_21_UNITS[] =
{
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2CE_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2CE_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2CE_A_SELSCREEN_COLLECTION, ARRAYSIZE(SF2CE_A_SELSCREEN_COLLECTION) },
    // NOTE: These are being picked up from the Hyper Fighting definitions as they are identical
    { L"Stages",         DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_COLLECTION,  ARRAYSIZE(SF2HF_A_STAGES21_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_COLLECTION, ARRAYSIZE(SF2HF_A_BONUS21_COLLECTION) },
};

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

    // These are different between CE and HF
    { L"Stages",         DESC_NODETYPE_TREE, (void*)SF2CE_A_STAGES22_COLLECTION,  ARRAYSIZE(SF2CE_A_STAGES22_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2CE_A_BONUS22_COLLECTION, ARRAYSIZE(SF2CE_A_BONUS22_COLLECTION) },
};
//FILE 22 UNITS END

//FILE 23 UNITS START
const sDescTreeNode SF2CE_A_23_UNITS[] =
{
    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)SF2CE_A_23_PORTRAITS_COLLECTION, ARRAYSIZE(SF2CE_A_23_PORTRAITS_COLLECTION) },
};

//FILE 23 UNITS END

const sDescTreeNode SF2CE_A_UNITS_MONO[] =
{
    // WARNING: The loader for this unit presumes that the logic is
    //  ROM 22 / ROM 21 / ROM 23
    // If you change the layout you MUST update LoadSpecificPaletteData or things won't load correctly

    // ROM 22
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

    { L"Stages (ROM22 Parts)",          DESC_NODETYPE_TREE, (void*)SF2CE_A_STAGES22_COLLECTION,  ARRAYSIZE(SF2CE_A_STAGES22_COLLECTION) },
    { L"Bonus Palettes (ROM22 parts)",  DESC_NODETYPE_TREE, (void*)SF2CE_A_BONUS22_COLLECTION, ARRAYSIZE(SF2CE_A_BONUS22_COLLECTION) },

    // ROM 21
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2CE_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2CE_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2CE_A_SELSCREEN_COLLECTION, ARRAYSIZE(SF2CE_A_SELSCREEN_COLLECTION) },
    { L"Stages (ROM21 Parts)",          DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_COLLECTION,  ARRAYSIZE(SF2HF_A_STAGES21_COLLECTION) },
    { L"Bonus Palettes (ROM21 parts)",  DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_COLLECTION, ARRAYSIZE(SF2HF_A_BONUS21_COLLECTION) },

    // ROM 23 
    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)SF2CE_A_23_PORTRAITS_COLLECTION, ARRAYSIZE(SF2CE_A_23_PORTRAITS_COLLECTION) },

};

#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VSAV2_A_MORRIGAN_PALETTES. 
// * Update every array using VSAV2_A_NUMUNIT below
// That should be it.  Good luck.

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LP[] =
{
    { _T("LP Bulleta"), 0x16c9c, 0x16cbc, indexCPS2_BBHood, 0x0 },
    { _T("LP Critters"), 0x16cbc, 0x16cdc },
    { _T("LP Weapons"), 0x16cdc, 0x16cfc },
    { _T("LP Explosions "), 0x16cfc, 0x16d1c },
    { _T("LP Select Portrait"), 0x4117c, 0x4119c, indexCPS2_BBHood, 0x20 },
    { _T("LP Win Portrait"), 0x42bbc, 0x42c5c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MP[] =
{
    { _T("MP Bulleta"), 0x16d1c, 0x16d3c, indexCPS2_BBHood, 0x0 },
    { _T("MP Critters"), 0x16d3c, 0x16d5c },
    { _T("MP Weapons"), 0x16d5c, 0x16d7c },
    { _T("MP Explosions "), 0x16d7c, 0x16d9c },
    { _T("MP Select Portrait"), 0x4137c, 0x4139c, indexCPS2_BBHood, 0x20 },
    { _T("MP Win Portrait"), 0x436fc, 0x4379c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HP[] =
{
    { _T("HP Bulleta"), 0x16d9c, 0x16dbc, indexCPS2_BBHood, 0x0 },
    { _T("HP Critters"), 0x16dbc, 0x16ddc },
    { _T("HP Weapons"), 0x16ddc, 0x16dfc },
    { _T("HP Explosions "), 0x16dfc, 0x16e1c },
    { _T("HP Select Portrait"), 0x4157c, 0x4159c, indexCPS2_BBHood, 0x20 },
    { _T("HP Win Portrait"), 0x4423c, 0x442dc },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LK[] =
{
    { _T("LK Bulleta"), 0x16e1c, 0x16e3c, indexCPS2_BBHood, 0x0 },
    { _T("LK Critters"), 0x16e3c, 0x16e5c },
    { _T("LK Weapons"), 0x16e5c, 0x16e7c },
    { _T("LK Explosions "), 0x16e7c, 0x16e9c },
    { _T("LK Select Portrait"), 0x4177c, 0x4179c, indexCPS2_BBHood, 0x20 },
    { _T("LK Win Portrait"), 0x44d7c, 0x44e1c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MK[] =
{
    { _T("MK Bulleta"), 0x16e9c, 0x16ebc, indexCPS2_BBHood, 0x0 },
    { _T("MK Critters"), 0x16ebc, 0x16edc },
    { _T("MK Weapons"), 0x16edc, 0x16efc },
    { _T("MK Explosions "), 0x16efc, 0x16f1c },
    { _T("MK Select Portrait"), 0x4197c, 0x4199c, indexCPS2_BBHood, 0x20 },
    { _T("MK Win Portrait"), 0x458bc, 0x4595c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HK[] =
{
    { _T("HK Bulleta"), 0x16f1c, 0x16f3c, indexCPS2_BBHood, 0x0 },
    { _T("HK Critters"), 0x16f3c, 0x16f5c },
    { _T("HK Weapons"), 0x16f5c, 0x16f7c },
    { _T("HK Explosions "), 0x16f7c, 0x16f9c },
    { _T("HK Select Portrait"), 0x41b7c, 0x41b9c, indexCPS2_BBHood, 0x20 },
    { _T("HK Win Portrait"), 0x463fc, 0x4649c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_PP[] =
{
    { _T("PP Bulleta"), 0x16f9c, 0x16fbc, indexCPS2_BBHood, 0x0 },
    { _T("PP Critters"), 0x16fbc, 0x16fdc },
    { _T("PP Weapons"), 0x16fdc, 0x16ffc },
    { _T("PP Explosions "), 0x16ffc, 0x1701c },
    { _T("PP Select Portrait"), 0x41d7c, 0x41d9c, indexCPS2_BBHood, 0x20 },
    { _T("PP Win Portrait"), 0x46f3c, 0x46fdc },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_KK[] =
{
    { _T("KK Bulleta"), 0x1701c, 0x1703c, indexCPS2_BBHood, 0x0 },
    { _T("KK Critters"), 0x1703c, 0x1705c },
    { _T("KK Weapons"), 0x1705c, 0x1707c },
    { _T("KK Explosions "), 0x1707c, 0x1709c },
    { _T("KK Select Portrait"), 0x41f7c, 0x41f9c, indexCPS2_BBHood, 0x20 },
    { _T("KK Win Portrait"), 0x47a7c, 0x47b1c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AP[] =
{
    { _T("AP Bulleta"), 0x1709c, 0x170bc, indexCPS2_BBHood, 0x0 },
    { _T("AP Critters"), 0x170bc, 0x170dc },
    { _T("AP Weapons"), 0x170dc, 0x170fc },
    { _T("AP Explosions "), 0x170fc, 0x1711c },
    { _T("AP Select Portrait"), 0x4217c, 0x4219c, indexCPS2_BBHood, 0x20 },
    { _T("AP Win Portrait"), 0x485bc, 0x4865c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AK[] =
{
    { _T("AK Bulleta"), 0x1711c, 0x1713c, indexCPS2_BBHood, 0x0 },
    { _T("AK Critters"), 0x1713c, 0x1715c },
    { _T("AK Weapons"), 0x1715c, 0x1717c },
    { _T("AK Explosions "), 0x1717c, 0x1719c },
    { _T("AK Select Portrait"), 0x4237c, 0x4239c, indexCPS2_BBHood, 0x20 },
    { _T("AK Win Portrait"), 0x490fc, 0x4919c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_SPECIAL[] =
{
    { _T("Bulleta LP Poisoned"),        0x1DA9C + (0 * 0x20), 0x1DABC + (0 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MP Poisoned"),        0x1DA9C + (1 * 0x20), 0x1DABC + (1 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HP Poisoned"),        0x1DA9C + (2 * 0x20), 0x1DABC + (2 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LK Poisoned"),        0x1DA9C + (3 * 0x20), 0x1DABC + (3 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MK Poisoned"),        0x1DA9C + (4 * 0x20), 0x1DABC + (4 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HK Poisoned"),        0x1DA9C + (5 * 0x20), 0x1DABC + (5 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta PP Poisoned"),        0x1DA9C + (6 * 0x20), 0x1DABC + (6 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta KK Poisoned"),        0x1DA9C + (7 * 0x20), 0x1DABC + (7 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AP Poisoned"),        0x1DA9C + (8 * 0x20), 0x1DABC + (8 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AK Poisoned"),        0x1DA9C + (9 * 0x20), 0x1DABC + (9 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Zapped"),          0x1DA9C + (10 * 0x20), 0x1DABC + (10 * 0x20) },
    { _T("Bulleta MP Zapped"),          0x1DA9C + (11 * 0x20), 0x1DABC + (11 * 0x20) },
    { _T("Bulleta HP Zapped"),          0x1DA9C + (12 * 0x20), 0x1DABC + (12 * 0x20) },
    { _T("Bulleta LK Zapped"),          0x1DA9C + (13 * 0x20), 0x1DABC + (13 * 0x20) },
    { _T("Bulleta MK Zapped"),          0x1DA9C + (14 * 0x20), 0x1DABC + (14 * 0x20) },
    { _T("Bulleta HK Zapped"),          0x1DA9C + (15 * 0x20), 0x1DABC + (15 * 0x20) },
    { _T("Bulleta PP Zapped"),          0x1DA9C + (16 * 0x20), 0x1DABC + (16 * 0x20) },
    { _T("Bulleta KK Zapped"),          0x1DA9C + (17 * 0x20), 0x1DABC + (17 * 0x20) },
    { _T("Bulleta AP Zapped"),          0x1DA9C + (18 * 0x20), 0x1DABC + (18 * 0x20) },
    { _T("Bulleta AK Zapped"),          0x1DA9C + (19 * 0x20), 0x1DABC + (19 * 0x20) },
    { _T("Bulleta LP Burned"),          0x1DA9C + (20 * 0x20), 0x1DABC + (20 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MP Burned"),          0x1DA9C + (21 * 0x20), 0x1DABC + (21 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HP Burned"),          0x1DA9C + (22 * 0x20), 0x1DABC + (22 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LK Burned"),          0x1DA9C + (23 * 0x20), 0x1DABC + (23 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MK Burned"),          0x1DA9C + (24 * 0x20), 0x1DABC + (24 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HK Burned"),          0x1DA9C + (25 * 0x20), 0x1DABC + (25 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta PP Burned"),          0x1DA9C + (26 * 0x20), 0x1DABC + (26 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta KK Burned"),          0x1DA9C + (27 * 0x20), 0x1DABC + (27 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AP Burned"),          0x1DA9C + (28 * 0x20), 0x1DABC + (28 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AK Burned"),          0x1DA9C + (29 * 0x20), 0x1DABC + (29 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Kotodama Gaeshi"), 0x1DA9C + (30 * 0x20), 0x1DABC + (30 * 0x20) },
    { _T("Bulleta MP Kotodama Gaeshi"), 0x1DA9C + (31 * 0x20), 0x1DABC + (31 * 0x20) },
    { _T("Bulleta HP Kotodama Gaeshi"), 0x1DA9C + (32 * 0x20), 0x1DABC + (32 * 0x20) },
    { _T("Bulleta LK Kotodama Gaeshi"), 0x1DA9C + (33 * 0x20), 0x1DABC + (33 * 0x20) },
    { _T("Bulleta MK Kotodama Gaeshi"), 0x1DA9C + (34 * 0x20), 0x1DABC + (34 * 0x20) },
    { _T("Bulleta HK Kotodama Gaeshi"), 0x1DA9C + (35 * 0x20), 0x1DABC + (35 * 0x20) },
    { _T("Bulleta PP Kotodama Gaeshi"), 0x1DA9C + (36 * 0x20), 0x1DABC + (36 * 0x20) },
    { _T("Bulleta KK Kotodama Gaeshi"), 0x1DA9C + (37 * 0x20), 0x1DABC + (37 * 0x20) },
    { _T("Bulleta AP Kotodama Gaeshi"), 0x1DA9C + (38 * 0x20), 0x1DABC + (38 * 0x20) },
    { _T("Bulleta AK Kotodama Gaeshi"), 0x1DA9C + (39 * 0x20), 0x1DABC + (39 * 0x20) },
    { _T("Bulleta ES 1"),               0x1DA9C + (40 * 0x20), 0x1DABC + (40 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ES 2"),               0x1DA9C + (41 * 0x20), 0x1DABC + (41 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ES 3"),               0x1DA9C + (42 * 0x20), 0x1DABC + (42 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ES 4"),               0x1DA9C + (43 * 0x20), 0x1DABC + (43 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 1"),               0x1DA9C + (44 * 0x20), 0x1DABC + (44 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 2"),               0x1DA9C + (45 * 0x20), 0x1DABC + (45 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 3"),               0x1DA9C + (46 * 0x20), 0x1DABC + (46 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 4"),               0x1DA9C + (47 * 0x20), 0x1DABC + (47 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 5"),               0x1DA9C + (48 * 0x20), 0x1DABC + (48 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 6"),               0x1DA9C + (49 * 0x20), 0x1DABC + (49 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 7"),               0x1DA9C + (50 * 0x20), 0x1DABC + (50 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta EX 8"),               0x1DA9C + (51 * 0x20), 0x1DABC + (51 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta Prova di Servo"),     0x1DA9C + (52 * 0x20), 0x1DABC + (52 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta Finale Rosso"),       0x1DA9C + (53 * 0x20), 0x1DABC + (53 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta Stone"),              0x1DA9C + (54 * 0x20), 0x1DABC + (54 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Midnight Bliss"),  0x1DA9C + (55 * 0x20), 0x1DABC + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta MP Midnight Bliss"),  0x1DA9C + (56 * 0x20), 0x1DABC + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta HP Midnight Bliss"),  0x1DA9C + (57 * 0x20), 0x1DABC + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta LK Midnight Bliss"),  0x1DA9C + (58 * 0x20), 0x1DABC + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta MK Midnight Bliss"),  0x1DA9C + (59 * 0x20), 0x1DABC + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta HK Midnight Bliss"),  0x1DA9C + (60 * 0x20), 0x1DABC + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta PP Midnight Bliss"),  0x1DA9C + (61 * 0x20), 0x1DABC + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta KK Midnight Bliss"),  0x1DA9C + (62 * 0x20), 0x1DABC + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta AP Midnight Bliss"),  0x1DA9C + (63 * 0x20), 0x1DABC + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta AK Midnight Bliss"),  0x1DA9C + (64 * 0x20), 0x1DABC + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { _T("Bulleta Q-Bee's QJ Honey"),   0x1DA9C + (65 * 0x20), 0x1DABC + (65 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Dark Force 1"),    0x1DA9C + (66 * 0x20), 0x1DABC + (66 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Dark Force 2"),    0x1DA9C + (67 * 0x20), 0x1DABC + (67 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Dark Force 3"),    0x1DA9C + (68 * 0x20), 0x1DABC + (68 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LP Dark Force 4"),    0x1DA9C + (69 * 0x20), 0x1DABC + (69 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MP Dark Force 1"),    0x1DA9C + (70 * 0x20), 0x1DABC + (70 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MP Dark Force 2"),    0x1DA9C + (71 * 0x20), 0x1DABC + (71 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MP Dark Force 3"),    0x1DA9C + (72 * 0x20), 0x1DABC + (72 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MP Dark Force 4"),    0x1DA9C + (73 * 0x20), 0x1DABC + (73 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HP Dark Force 1"),    0x1DA9C + (74 * 0x20), 0x1DABC + (74 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HP Dark Force 2"),    0x1DA9C + (75 * 0x20), 0x1DABC + (75 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HP Dark Force 3"),    0x1DA9C + (76 * 0x20), 0x1DABC + (76 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HP Dark Force 4"),    0x1DA9C + (77 * 0x20), 0x1DABC + (77 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LK Dark Force 1"),    0x1DA9C + (78 * 0x20), 0x1DABC + (78 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LK Dark Force 2"),    0x1DA9C + (79 * 0x20), 0x1DABC + (79 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LK Dark Force 3"),    0x1DA9C + (80 * 0x20), 0x1DABC + (80 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta LK Dark Force 4"),    0x1DA9C + (81 * 0x20), 0x1DABC + (81 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MK Dark Force 1"),    0x1DA9C + (82 * 0x20), 0x1DABC + (82 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MK Dark Force 2"),    0x1DA9C + (83 * 0x20), 0x1DABC + (83 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MK Dark Force 3"),    0x1DA9C + (84 * 0x20), 0x1DABC + (84 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta MK Dark Force 4"),    0x1DA9C + (85 * 0x20), 0x1DABC + (85 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HK Dark Force 1"),    0x1DA9C + (86 * 0x20), 0x1DABC + (86 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HK Dark Force 2"),    0x1DA9C + (87 * 0x20), 0x1DABC + (87 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HK Dark Force 3"),    0x1DA9C + (88 * 0x20), 0x1DABC + (88 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta HK Dark Force 4"),    0x1DA9C + (89 * 0x20), 0x1DABC + (89 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta PP Dark Force 1"),    0x1DA9C + (90 * 0x20), 0x1DABC + (90 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta PP Dark Force 2"),    0x1DA9C + (91 * 0x20), 0x1DABC + (91 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta PP Dark Force 3"),    0x1DA9C + (92 * 0x20), 0x1DABC + (92 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta PP Dark Force 4"),    0x1DA9C + (93 * 0x20), 0x1DABC + (93 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta KK Dark Force 1"),    0x1DA9C + (94 * 0x20), 0x1DABC + (94 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta KK Dark Force 2"),    0x1DA9C + (95 * 0x20), 0x1DABC + (95 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta KK Dark Force 3"),    0x1DA9C + (96 * 0x20), 0x1DABC + (96 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta KK Dark Force 4"),    0x1DA9C + (97 * 0x20), 0x1DABC + (97 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AP Dark Force 1"),    0x1DA9C + (98 * 0x20), 0x1DABC + (98 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AP Dark Force 2"),    0x1DA9C + (99 * 0x20), 0x1DABC + (99 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AP Dark Force 3"),    0x1DA9C + (100 * 0x20), 0x1DABC + (100 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AP Dark Force 4"),    0x1DA9C + (101 * 0x20), 0x1DABC + (101 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AK Dark Force 1"),    0x1DA9C + (102 * 0x20), 0x1DABC + (102 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AK Dark Force 2"),    0x1DA9C + (103 * 0x20), 0x1DABC + (103 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AK Dark Force 3"),    0x1DA9C + (104 * 0x20), 0x1DABC + (104 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta AK Dark Force 4"),    0x1DA9C + (105 * 0x20), 0x1DABC + (105 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ??? 1"),              0x1DA9C + (106 * 0x20), 0x1DABC + (106 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ??? 2"),              0x1DA9C + (107 * 0x20), 0x1DABC + (107 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ??? 3"),              0x1DA9C + (108 * 0x20), 0x1DABC + (108 * 0x20), indexCPS2_BBHood },
    { _T("Bulleta ??? 4"),              0x1DA9C + (109 * 0x20), 0x1DABC + (109 * 0x20), indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LP[] =
{
    { _T("LP Demitri"), 0x1719c, 0x171bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Demitri 2nd palette"), 0x257bc, 0x257dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Teledash 1"), 0x171fc, 0x1721c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Teledash 2"), 0x171bc, 0x171dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Fireball"), 0x171dc, 0x171fc },
    { _T("LP Select Portrait"), 0x4119c, 0x411bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("LP Win Portrait"), 0x42c5c, 0x42cfc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MP[] =
{
    { _T("MP Demitri "), 0x1721c, 0x1723c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Demitri 2nd palette"), 0x257dc, 0x257fc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Teledash 1"), 0x1727c, 0x1729c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Teledash 2"), 0x1723c, 0x1725c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Fireball"), 0x1725c, 0x1727c },
    { _T("MP Select Portrait"), 0x4139c, 0x413bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("MP Win Portrait"), 0x4379c, 0x4383c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HP[] =
{
    { _T("HP Demitri"), 0x1729c, 0x172bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Demitri 2nd palette"), 0x257fc, 0x2581c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Teledash 1"), 0x172fc, 0x1731c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Teledash 2"), 0x172bc, 0x172dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Fireball"), 0x172dc, 0x172fc },
    { _T("HP Select Portrait"), 0x4159c, 0x415bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("HP Win Portrait"), 0x442dc, 0x4437c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LK[] =
{
    { _T("LK Demitri"), 0x1731c, 0x1733c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Demitri 2nd palette"), 0x2581c, 0x2583c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Teledash 1"), 0x1737c, 0x1739c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Teledash 2"), 0x1733c, 0x1735c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Fireball"), 0x1735c, 0x1737c },
    { _T("LK Select Portrait"), 0x4179c, 0x417bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("LK Win Portrait"), 0x44e1c, 0x44ebc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MK[] =
{
    { _T("MK Demitri"), 0x1739c, 0x173bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Demitri 2nd palette"), 0x2583c, 0x2585c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Teledash 1"), 0x173fc, 0x1741c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Teledash 2"), 0x173bc, 0x173dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Fireball"), 0x173dc, 0x173fc },
    { _T("MK Select Portrait"), 0x4199c, 0x419bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("MK Win Portrait"), 0x4595c, 0x459fc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HK[] =
{
    { _T("HK Demitri"), 0x1741c, 0x1743c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Demitri 2nd palette"), 0x2585c, 0x2587c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Teledash 1"), 0x1747c, 0x1749c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Teledash 2"), 0x1743c, 0x1745c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Fireball"), 0x1745c, 0x1747c },
    { _T("HK Select Portrait"), 0x41b9c, 0x41bbc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("HK Win Portrait"), 0x4649c, 0x4653c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_PP[] =
{
    { _T("PP Demitri"), 0x1749c, 0x174bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Demitri 2nd palette"), 0x2587c, 0x2589c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Teledash 1"), 0x174fc, 0x1751c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Teledash 2"), 0x174bc, 0x174dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Fireball"), 0x174dc, 0x174fc },
    { _T("PP Select Portrait"), 0x41d9c, 0x41dbc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("PP Win Portrait"), 0x46fdc, 0x4707c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_KK[] =
{
    { _T("KK Demitri"), 0x1751c, 0x1753c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Demitri 2nd palette"), 0x2589c, 0x258bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Teledash 1"), 0x1757c, 0x1759c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Teledash 2"), 0x1753c, 0x1755c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Fireball"), 0x1755c, 0x1757c },
    { _T("KK Select Portrait"), 0x41f9c, 0x41fbc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("KK Win Portrait"), 0x47b1c, 0x47bbc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AP[] =
{
    { _T("AP Demitri"), 0x1759c, 0x175bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Demitri 2nd palette"), 0x258bc, 0x258dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Teledash 1"), 0x175fc, 0x1761c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Teledash 2"), 0x175bc, 0x175dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Fireball"), 0x175dc, 0x175fc },
    { _T("AP Select Portrait"), 0x4219c, 0x421bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("AP Win Portrait"), 0x4865c, 0x486fc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AK[] =
{
    { _T("AK Demitri"), 0x1761c, 0x1763c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Demitri 2nd palette"), 0x258dc, 0x258fc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Teledash 1"), 0x1767c, 0x1769c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Teledash 2"), 0x1763c, 0x1765c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Fireball"), 0x1765c, 0x1767c },
    { _T("AK Select Portrait"), 0x4239c, 0x423bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("AK Win Portrait"), 0x4919c, 0x4923c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { _T("Demitri LP Poisoned"),        0x1e85c + (0 * 0x20), 0x1e87c + (0 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Poisoned"),        0x1e85c + (1 * 0x20), 0x1e87c + (1 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Poisoned"),        0x1e85c + (2 * 0x20), 0x1e87c + (2 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Poisoned"),        0x1e85c + (3 * 0x20), 0x1e87c + (3 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Poisoned"),        0x1e85c + (4 * 0x20), 0x1e87c + (4 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Poisoned"),        0x1e85c + (5 * 0x20), 0x1e87c + (5 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Poisoned"),        0x1e85c + (6 * 0x20), 0x1e87c + (6 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Poisoned"),        0x1e85c + (7 * 0x20), 0x1e87c + (7 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Poisoned"),        0x1e85c + (8 * 0x20), 0x1e87c + (8 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Poisoned"),        0x1e85c + (9 * 0x20), 0x1e87c + (9 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Zapped"),          0x1e85c + (10 * 0x20), 0x1e87c + (10 * 0x20) },
    { _T("Demitri MP Zapped"),          0x1e85c + (11 * 0x20), 0x1e87c + (11 * 0x20) },
    { _T("Demitri HP Zapped"),          0x1e85c + (12 * 0x20), 0x1e87c + (12 * 0x20) },
    { _T("Demitri LK Zapped"),          0x1e85c + (13 * 0x20), 0x1e87c + (13 * 0x20) },
    { _T("Demitri MK Zapped"),          0x1e85c + (14 * 0x20), 0x1e87c + (14 * 0x20) },
    { _T("Demitri HK Zapped"),          0x1e85c + (15 * 0x20), 0x1e87c + (15 * 0x20) },
    { _T("Demitri PP Zapped"),          0x1e85c + (16 * 0x20), 0x1e87c + (16 * 0x20) },
    { _T("Demitri KK Zapped"),          0x1e85c + (17 * 0x20), 0x1e87c + (17 * 0x20) },
    { _T("Demitri AP Zapped"),          0x1e85c + (18 * 0x20), 0x1e87c + (18 * 0x20) },
    { _T("Demitri AK Zapped"),          0x1e85c + (19 * 0x20), 0x1e87c + (19 * 0x20) },
    { _T("Demitri LP Burned"),          0x1e85c + (20 * 0x20), 0x1e87c + (20 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Burned"),          0x1e85c + (21 * 0x20), 0x1e87c + (21 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Burned"),          0x1e85c + (22 * 0x20), 0x1e87c + (22 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Burned"),          0x1e85c + (23 * 0x20), 0x1e87c + (23 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Burned"),          0x1e85c + (24 * 0x20), 0x1e87c + (24 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Burned"),          0x1e85c + (25 * 0x20), 0x1e87c + (25 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Burned"),          0x1e85c + (26 * 0x20), 0x1e87c + (26 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Burned"),          0x1e85c + (27 * 0x20), 0x1e87c + (27 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Burned"),          0x1e85c + (28 * 0x20), 0x1e87c + (28 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Burned"),          0x1e85c + (29 * 0x20), 0x1e87c + (29 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Kotodama Gaeshi"), 0x1e85c + (30 * 0x20), 0x1e87c + (30 * 0x20) },
    { _T("Demitri MP Kotodama Gaeshi"), 0x1e85c + (31 * 0x20), 0x1e87c + (31 * 0x20) },
    { _T("Demitri HP Kotodama Gaeshi"), 0x1e85c + (32 * 0x20), 0x1e87c + (32 * 0x20) },
    { _T("Demitri LK Kotodama Gaeshi"), 0x1e85c + (33 * 0x20), 0x1e87c + (33 * 0x20) },
    { _T("Demitri MK Kotodama Gaeshi"), 0x1e85c + (34 * 0x20), 0x1e87c + (34 * 0x20) },
    { _T("Demitri HK Kotodama Gaeshi"), 0x1e85c + (35 * 0x20), 0x1e87c + (35 * 0x20) },
    { _T("Demitri PP Kotodama Gaeshi"), 0x1e85c + (36 * 0x20), 0x1e87c + (36 * 0x20) },
    { _T("Demitri KK Kotodama Gaeshi"), 0x1e85c + (37 * 0x20), 0x1e87c + (37 * 0x20) },
    { _T("Demitri AP Kotodama Gaeshi"), 0x1e85c + (38 * 0x20), 0x1e87c + (38 * 0x20) },
    { _T("Demitri AK Kotodama Gaeshi"), 0x1e85c + (39 * 0x20), 0x1e87c + (39 * 0x20) },
    { _T("Demitri ES 1"),               0x1e85c + (40 * 0x20), 0x1e87c + (40 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ES 2"),               0x1e85c + (41 * 0x20), 0x1e87c + (41 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ES 3"),               0x1e85c + (42 * 0x20), 0x1e87c + (42 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ES 4"),               0x1e85c + (43 * 0x20), 0x1e87c + (43 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 1"),               0x1e85c + (44 * 0x20), 0x1e87c + (44 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 2"),               0x1e85c + (45 * 0x20), 0x1e87c + (45 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 3"),               0x1e85c + (46 * 0x20), 0x1e87c + (46 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 4"),               0x1e85c + (47 * 0x20), 0x1e87c + (47 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 5"),               0x1e85c + (48 * 0x20), 0x1e87c + (48 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 6"),               0x1e85c + (49 * 0x20), 0x1e87c + (49 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 7"),               0x1e85c + (50 * 0x20), 0x1e87c + (50 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri EX 8"),               0x1e85c + (51 * 0x20), 0x1e87c + (51 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri Prova di Servo"),     0x1e85c + (52 * 0x20), 0x1e87c + (52 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri Finale Rosso"),       0x1e85c + (53 * 0x20), 0x1e87c + (53 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri Stone"),              0x1e85c + (54 * 0x20), 0x1e87c + (54 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Midnight Bliss"),  0x1e85c + (55 * 0x20), 0x1e87c + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Midnight Bliss"),  0x1e85c + (56 * 0x20), 0x1e87c + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Midnight Bliss"),  0x1e85c + (57 * 0x20), 0x1e87c + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Midnight Bliss"),  0x1e85c + (58 * 0x20), 0x1e87c + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Midnight Bliss"),  0x1e85c + (59 * 0x20), 0x1e87c + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Midnight Bliss"),  0x1e85c + (60 * 0x20), 0x1e87c + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Midnight Bliss"),  0x1e85c + (61 * 0x20), 0x1e87c + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Midnight Bliss"),  0x1e85c + (62 * 0x20), 0x1e87c + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Midnight Bliss"),  0x1e85c + (63 * 0x20), 0x1e87c + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Midnight Bliss"),  0x1e85c + (64 * 0x20), 0x1e87c + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { _T("Demitri Q-Bee's QJ Honey"),   0x1e85c + (65 * 0x20), 0x1e87c + (65 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Dark Force 1"),    0x1e85c + (66 * 0x20), 0x1e87c + (66 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Dark Force 2"),    0x1e85c + (67 * 0x20), 0x1e87c + (67 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Dark Force 3"),    0x1e85c + (68 * 0x20), 0x1e87c + (68 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LP Dark Force 4"),    0x1e85c + (69 * 0x20), 0x1e87c + (69 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Dark Force 1"),    0x1e85c + (70 * 0x20), 0x1e87c + (70 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Dark Force 2"),    0x1e85c + (71 * 0x20), 0x1e87c + (71 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Dark Force 3"),    0x1e85c + (72 * 0x20), 0x1e87c + (72 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MP Dark Force 4"),    0x1e85c + (73 * 0x20), 0x1e87c + (73 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Dark Force 1"),    0x1e85c + (74 * 0x20), 0x1e87c + (74 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Dark Force 2"),    0x1e85c + (75 * 0x20), 0x1e87c + (75 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Dark Force 3"),    0x1e85c + (76 * 0x20), 0x1e87c + (76 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HP Dark Force 4"),    0x1e85c + (77 * 0x20), 0x1e87c + (77 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Dark Force 1"),    0x1e85c + (78 * 0x20), 0x1e87c + (78 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Dark Force 2"),    0x1e85c + (79 * 0x20), 0x1e87c + (79 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Dark Force 3"),    0x1e85c + (80 * 0x20), 0x1e87c + (80 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri LK Dark Force 4"),    0x1e85c + (81 * 0x20), 0x1e87c + (81 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Dark Force 1"),    0x1e85c + (82 * 0x20), 0x1e87c + (82 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Dark Force 2"),    0x1e85c + (83 * 0x20), 0x1e87c + (83 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Dark Force 3"),    0x1e85c + (84 * 0x20), 0x1e87c + (84 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri MK Dark Force 4"),    0x1e85c + (85 * 0x20), 0x1e87c + (85 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Dark Force 1"),    0x1e85c + (86 * 0x20), 0x1e87c + (86 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Dark Force 2"),    0x1e85c + (87 * 0x20), 0x1e87c + (87 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Dark Force 3"),    0x1e85c + (88 * 0x20), 0x1e87c + (88 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri HK Dark Force 4"),    0x1e85c + (89 * 0x20), 0x1e87c + (89 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Dark Force 1"),    0x1e85c + (90 * 0x20), 0x1e87c + (90 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Dark Force 2"),    0x1e85c + (91 * 0x20), 0x1e87c + (91 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Dark Force 3"),    0x1e85c + (92 * 0x20), 0x1e87c + (92 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri PP Dark Force 4"),    0x1e85c + (93 * 0x20), 0x1e87c + (93 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Dark Force 1"),    0x1e85c + (94 * 0x20), 0x1e87c + (94 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Dark Force 2"),    0x1e85c + (95 * 0x20), 0x1e87c + (95 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Dark Force 3"),    0x1e85c + (96 * 0x20), 0x1e87c + (96 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri KK Dark Force 4"),    0x1e85c + (97 * 0x20), 0x1e87c + (97 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Dark Force 1"),    0x1e85c + (98 * 0x20), 0x1e87c + (98 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Dark Force 2"),    0x1e85c + (99 * 0x20), 0x1e87c + (99 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Dark Force 3"),    0x1e85c + (100 * 0x20), 0x1e87c + (100 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AP Dark Force 4"),    0x1e85c + (101 * 0x20), 0x1e87c + (101 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Dark Force 1"),    0x1e85c + (102 * 0x20), 0x1e87c + (102 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Dark Force 2"),    0x1e85c + (103 * 0x20), 0x1e87c + (103 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Dark Force 3"),    0x1e85c + (104 * 0x20), 0x1e87c + (104 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri AK Dark Force 4"),    0x1e85c + (105 * 0x20), 0x1e87c + (105 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ??? 1"),              0x1e85c + (106 * 0x20), 0x1e87c + (106 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ??? 2"),              0x1e85c + (107 * 0x20), 0x1e87c + (107 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ??? 3"),              0x1e85c + (108 * 0x20), 0x1e87c + (108 * 0x20), indexCPS2_Vamp_Demitri },
    { _T("Demitri ??? 4"),              0x1e85c + (109 * 0x20), 0x1e87c + (109 * 0x20), indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LP[] =
{
    { _T("LP Gallon"), 0x1769c, 0x176bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LP Intro/Outro"), 0x176bc, 0x176dc },
    { _T("LP 236P/41236KK/j.HP"), 0x176dc, 0x176fc },
    { _T("LP 236P/28K/Outro Flash"), 0x176fc, 0x1771c },
    { _T("LP Select Portrait"), 0x411bc, 0x411dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("LP Win Portrait"), 0x42cfc, 0x42d9c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MP[] =
{
    { _T("MP Gallon"), 0x1771c, 0x1773c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MP Intro/Outro"), 0x1773c, 0x1775c },
    { _T("MP 236P/41236KK/j.HP"), 0x1775c, 0x1777c },
    { _T("MP 236P/28K/Outro Flash"), 0x1777c, 0x1779c },
    { _T("MP Select Portrait"), 0x413bc, 0x413dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("MP Win Portrait"), 0x4383c, 0x438dc },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HP[] =
{
    { _T("HP Gallon"), 0x1779c, 0x177bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HP Intro/Outro"), 0x177bc, 0x177dc },
    { _T("HP 236P/41236KK/j.HP"), 0x177dc, 0x177fc },
    { _T("HP 236P/28K/Outro Flash"), 0x177fc, 0x1781c },
    { _T("HP Select Portrait"), 0x415bc, 0x415dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("HP Win Portrait"), 0x4437c, 0x4441c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LK[] =
{
    { _T("LK Gallon"), 0x1781c, 0x1783c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LK Intro/Outro"), 0x1783c, 0x1785c },
    { _T("LK 236P/41236KK/j.HP"), 0x1785c, 0x1787c },
    { _T("LK 236P/28K/Outro Flash"), 0x1787c, 0x1789c },
    { _T("LK Select Portrait"), 0x417bc, 0x417dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("LK Win Portrait"), 0x44ebc, 0x44f5c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MK[] =
{
    { _T("MK Gallon"), 0x1789c, 0x178bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MK Intro/Outro"), 0x178bc, 0x178dc },
    { _T("MK 236P/41236KK/j.HP"), 0x178dc, 0x178fc },
    { _T("MK 236P/28K/Outro Flash"), 0x178fc, 0x1791c },
    { _T("MK Select Portrait"), 0x419bc, 0x419dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("MK Win Portrait"), 0x459fc, 0x45a9c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HK[] =
{
    { _T("HK Gallon"), 0x1791c, 0x1793c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HK Intro/Outro"), 0x1793c, 0x1795c },
    { _T("HK 236P/41236KK/j.HP"), 0x1795c, 0x1797c },
    { _T("HK 236P/28K/Outro Flash"), 0x1797c, 0x1799c },
    { _T("HK Select Portrait"), 0x41bbc, 0x41bdc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("HK Win Portrait"), 0x4653c, 0x465dc },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_PP[] =
{
    { _T("PP Gallon"), 0x1799c, 0x179bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("PP Intro/Outro"), 0x179bc, 0x179dc },
    { _T("PP 236P/41236KK/j.HP"), 0x179dc, 0x179fc },
    { _T("PP 236P/28K/Outro Flash"), 0x179fc, 0x17a1c },
    { _T("PP Select Portrait"), 0x41dbc, 0x41ddc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("PP Win Portrait"), 0x4707c, 0x4711c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_KK[] =
{
    { _T("KK Gallon"), 0x17a1c, 0x17a3c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("KK Intro/Outro"), 0x17a3c, 0x17a5c },
    { _T("KK 236P/41236KK/j.HP"), 0x17a5c, 0x17a7c },
    { _T("KK 236P/28K/Outro Flash"), 0x17a7c, 0x17a9c },
    { _T("KK Select Portrait"), 0x41fbc, 0x41fdc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("KK Win Portrait"), 0x47bbc, 0x47c5c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AP[] =
{
    { _T("AP Gallon"), 0x17a9c, 0x17abc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AP Intro/Outro"), 0x17abc, 0x17adc },
    { _T("AP 236P/41236KK/j.HP"), 0x17adc, 0x17afc },
    { _T("AP 236P/28K/Outro Flash"), 0x17afc, 0x17b1c },
    { _T("AP Select Portrait"), 0x421bc, 0x421dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("AP Win Portrait"), 0x486fc, 0x4879c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AK[] =
{
    { _T("AK Gallon"), 0x17b1c, 0x17b3c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AK Intro/Outro"), 0x17b3c, 0x17b5c },
    { _T("AK 236P/41236KK/j.HP"), 0x17b5c, 0x17b7c },
    { _T("AK 236P/28K/Outro Flash"), 0x17b7c, 0x17b9c },
    { _T("AK Select Portrait"), 0x423bc, 0x423dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("AK Win Portrait"), 0x4923c, 0x492dc },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_SPECIAL[] =
{
    { _T("Gallon LP Poisoned"),        0x1f61c + (0 * 0x20), 0x1f63c + (0 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Poisoned"),        0x1f61c + (1 * 0x20), 0x1f63c + (1 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Poisoned"),        0x1f61c + (2 * 0x20), 0x1f63c + (2 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Poisoned"),        0x1f61c + (3 * 0x20), 0x1f63c + (3 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Poisoned"),        0x1f61c + (4 * 0x20), 0x1f63c + (4 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Poisoned"),        0x1f61c + (5 * 0x20), 0x1f63c + (5 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Poisoned"),        0x1f61c + (6 * 0x20), 0x1f63c + (6 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Poisoned"),        0x1f61c + (7 * 0x20), 0x1f63c + (7 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Poisoned"),        0x1f61c + (8 * 0x20), 0x1f63c + (8 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Poisoned"),        0x1f61c + (9 * 0x20), 0x1f63c + (9 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Zapped"),          0x1f61c + (10 * 0x20), 0x1f63c + (10 * 0x20) },
    { _T("Gallon MP Zapped"),          0x1f61c + (11 * 0x20), 0x1f63c + (11 * 0x20) },
    { _T("Gallon HP Zapped"),          0x1f61c + (12 * 0x20), 0x1f63c + (12 * 0x20) },
    { _T("Gallon LK Zapped"),          0x1f61c + (13 * 0x20), 0x1f63c + (13 * 0x20) },
    { _T("Gallon MK Zapped"),          0x1f61c + (14 * 0x20), 0x1f63c + (14 * 0x20) },
    { _T("Gallon HK Zapped"),          0x1f61c + (15 * 0x20), 0x1f63c + (15 * 0x20) },
    { _T("Gallon PP Zapped"),          0x1f61c + (16 * 0x20), 0x1f63c + (16 * 0x20) },
    { _T("Gallon KK Zapped"),          0x1f61c + (17 * 0x20), 0x1f63c + (17 * 0x20) },
    { _T("Gallon AP Zapped"),          0x1f61c + (18 * 0x20), 0x1f63c + (18 * 0x20) },
    { _T("Gallon AK Zapped"),          0x1f61c + (19 * 0x20), 0x1f63c + (19 * 0x20) },
    { _T("Gallon LP Burned"),          0x1f61c + (20 * 0x20), 0x1f63c + (20 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Burned"),          0x1f61c + (21 * 0x20), 0x1f63c + (21 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Burned"),          0x1f61c + (22 * 0x20), 0x1f63c + (22 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Burned"),          0x1f61c + (23 * 0x20), 0x1f63c + (23 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Burned"),          0x1f61c + (24 * 0x20), 0x1f63c + (24 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Burned"),          0x1f61c + (25 * 0x20), 0x1f63c + (25 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Burned"),          0x1f61c + (26 * 0x20), 0x1f63c + (26 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Burned"),          0x1f61c + (27 * 0x20), 0x1f63c + (27 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Burned"),          0x1f61c + (28 * 0x20), 0x1f63c + (28 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Burned"),          0x1f61c + (29 * 0x20), 0x1f63c + (29 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Kotodama Gaeshi"), 0x1f61c + (30 * 0x20), 0x1f63c + (30 * 0x20) },
    { _T("Gallon MP Kotodama Gaeshi"), 0x1f61c + (31 * 0x20), 0x1f63c + (31 * 0x20) },
    { _T("Gallon HP Kotodama Gaeshi"), 0x1f61c + (32 * 0x20), 0x1f63c + (32 * 0x20) },
    { _T("Gallon LK Kotodama Gaeshi"), 0x1f61c + (33 * 0x20), 0x1f63c + (33 * 0x20) },
    { _T("Gallon MK Kotodama Gaeshi"), 0x1f61c + (34 * 0x20), 0x1f63c + (34 * 0x20) },
    { _T("Gallon HK Kotodama Gaeshi"), 0x1f61c + (35 * 0x20), 0x1f63c + (35 * 0x20) },
    { _T("Gallon PP Kotodama Gaeshi"), 0x1f61c + (36 * 0x20), 0x1f63c + (36 * 0x20) },
    { _T("Gallon KK Kotodama Gaeshi"), 0x1f61c + (37 * 0x20), 0x1f63c + (37 * 0x20) },
    { _T("Gallon AP Kotodama Gaeshi"), 0x1f61c + (38 * 0x20), 0x1f63c + (38 * 0x20) },
    { _T("Gallon AK Kotodama Gaeshi"), 0x1f61c + (39 * 0x20), 0x1f63c + (39 * 0x20) },
    { _T("Gallon ES 1"),               0x1f61c + (40 * 0x20), 0x1f63c + (40 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ES 2"),               0x1f61c + (41 * 0x20), 0x1f63c + (41 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ES 3"),               0x1f61c + (42 * 0x20), 0x1f63c + (42 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ES 4"),               0x1f61c + (43 * 0x20), 0x1f63c + (43 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 1"),               0x1f61c + (44 * 0x20), 0x1f63c + (44 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 2"),               0x1f61c + (45 * 0x20), 0x1f63c + (45 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 3"),               0x1f61c + (46 * 0x20), 0x1f63c + (46 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 4"),               0x1f61c + (47 * 0x20), 0x1f63c + (47 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 5"),               0x1f61c + (48 * 0x20), 0x1f63c + (48 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 6"),               0x1f61c + (49 * 0x20), 0x1f63c + (49 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 7"),               0x1f61c + (50 * 0x20), 0x1f63c + (50 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon EX 8"),               0x1f61c + (51 * 0x20), 0x1f63c + (51 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon Prova di Servo"),     0x1f61c + (52 * 0x20), 0x1f63c + (52 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon Finale Rosso"),       0x1f61c + (53 * 0x20), 0x1f63c + (53 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon Stone"),              0x1f61c + (54 * 0x20), 0x1f63c + (54 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Midnight Bliss"),  0x1f61c + (55 * 0x20), 0x1f63c + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Midnight Bliss"),  0x1f61c + (56 * 0x20), 0x1f63c + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Midnight Bliss"),  0x1f61c + (57 * 0x20), 0x1f63c + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Midnight Bliss"),  0x1f61c + (58 * 0x20), 0x1f63c + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Midnight Bliss"),  0x1f61c + (59 * 0x20), 0x1f63c + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Midnight Bliss"),  0x1f61c + (60 * 0x20), 0x1f63c + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Midnight Bliss"),  0x1f61c + (61 * 0x20), 0x1f63c + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Midnight Bliss"),  0x1f61c + (62 * 0x20), 0x1f63c + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Midnight Bliss"),  0x1f61c + (63 * 0x20), 0x1f63c + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Midnight Bliss"),  0x1f61c + (64 * 0x20), 0x1f63c + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { _T("Gallon Q-Bee's QJ Honey"),   0x1f61c + (65 * 0x20), 0x1f63c + (65 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Dark Force 1"),    0x1f61c + (66 * 0x20), 0x1f63c + (66 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Dark Force 2"),    0x1f61c + (67 * 0x20), 0x1f63c + (67 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Dark Force 3"),    0x1f61c + (68 * 0x20), 0x1f63c + (68 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LP Dark Force 4"),    0x1f61c + (69 * 0x20), 0x1f63c + (69 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Dark Force 1"),    0x1f61c + (70 * 0x20), 0x1f63c + (70 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Dark Force 2"),    0x1f61c + (71 * 0x20), 0x1f63c + (71 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Dark Force 3"),    0x1f61c + (72 * 0x20), 0x1f63c + (72 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MP Dark Force 4"),    0x1f61c + (73 * 0x20), 0x1f63c + (73 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Dark Force 1"),    0x1f61c + (74 * 0x20), 0x1f63c + (74 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Dark Force 2"),    0x1f61c + (75 * 0x20), 0x1f63c + (75 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Dark Force 3"),    0x1f61c + (76 * 0x20), 0x1f63c + (76 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HP Dark Force 4"),    0x1f61c + (77 * 0x20), 0x1f63c + (77 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Dark Force 1"),    0x1f61c + (78 * 0x20), 0x1f63c + (78 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Dark Force 2"),    0x1f61c + (79 * 0x20), 0x1f63c + (79 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Dark Force 3"),    0x1f61c + (80 * 0x20), 0x1f63c + (80 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon LK Dark Force 4"),    0x1f61c + (81 * 0x20), 0x1f63c + (81 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Dark Force 1"),    0x1f61c + (82 * 0x20), 0x1f63c + (82 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Dark Force 2"),    0x1f61c + (83 * 0x20), 0x1f63c + (83 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Dark Force 3"),    0x1f61c + (84 * 0x20), 0x1f63c + (84 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon MK Dark Force 4"),    0x1f61c + (85 * 0x20), 0x1f63c + (85 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Dark Force 1"),    0x1f61c + (86 * 0x20), 0x1f63c + (86 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Dark Force 2"),    0x1f61c + (87 * 0x20), 0x1f63c + (87 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Dark Force 3"),    0x1f61c + (88 * 0x20), 0x1f63c + (88 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon HK Dark Force 4"),    0x1f61c + (89 * 0x20), 0x1f63c + (89 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Dark Force 1"),    0x1f61c + (90 * 0x20), 0x1f63c + (90 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Dark Force 2"),    0x1f61c + (91 * 0x20), 0x1f63c + (91 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Dark Force 3"),    0x1f61c + (92 * 0x20), 0x1f63c + (92 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon PP Dark Force 4"),    0x1f61c + (93 * 0x20), 0x1f63c + (93 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Dark Force 1"),    0x1f61c + (94 * 0x20), 0x1f63c + (94 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Dark Force 2"),    0x1f61c + (95 * 0x20), 0x1f63c + (95 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Dark Force 3"),    0x1f61c + (96 * 0x20), 0x1f63c + (96 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon KK Dark Force 4"),    0x1f61c + (97 * 0x20), 0x1f63c + (97 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Dark Force 1"),    0x1f61c + (98 * 0x20), 0x1f63c + (98 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Dark Force 2"),    0x1f61c + (99 * 0x20), 0x1f63c + (99 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Dark Force 3"),    0x1f61c + (100 * 0x20), 0x1f63c + (100 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AP Dark Force 4"),    0x1f61c + (101 * 0x20), 0x1f63c + (101 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Dark Force 1"),    0x1f61c + (102 * 0x20), 0x1f63c + (102 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Dark Force 2"),    0x1f61c + (103 * 0x20), 0x1f63c + (103 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Dark Force 3"),    0x1f61c + (104 * 0x20), 0x1f63c + (104 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon AK Dark Force 4"),    0x1f61c + (105 * 0x20), 0x1f63c + (105 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ??? 1"),              0x1f61c + (106 * 0x20), 0x1f63c + (106 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ??? 2"),              0x1f61c + (107 * 0x20), 0x1f63c + (107 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ??? 3"),              0x1f61c + (108 * 0x20), 0x1f63c + (108 * 0x20), indexCPS2_Vamp_Gallon },
    { _T("Gallon ??? 4"),              0x1f61c + (109 * 0x20), 0x1f63c + (109 * 0x20), indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LP[] =
{
    { _T("LP Victor"), 0x17b9c, 0x17bbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LP Electric Flash"), 0x17bfc, 0x17c1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LP [2]8p/[4]6P/DF Startup"), 0x17bbc, 0x17bdc },
    { _T("LP Electricity"), 0x17bdc, 0x17bfc },
    { _T("LP Select Portrait"), 0x411dc, 0x411fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("LP Win Portrait"), 0x42d9c, 0x42e3c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MP[] =
{
    { _T("MP Victor"), 0x17c1c, 0x17c3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MP Electric Flash"), 0x17c7c, 0x17c9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MP [2]8p/[4]6P/DF Startup"), 0x17c3c, 0x17c5c },
    { _T("MP Electricity"), 0x17c5c, 0x17c7c },
    { _T("MP Select Portrait"), 0x413dc, 0x413fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("MP Win Portrait"), 0x438dc, 0x4397c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HP[] =
{
    { _T("HP Victor"), 0x17c9c, 0x17cbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HP Electric Flash"), 0x17cfc, 0x17d1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HP [2]8p/[4]6P/DF Startup"), 0x17cbc, 0x17cdc },
    { _T("HP Electricity"), 0x17cdc, 0x17cfc },
    { _T("HP Select Portrait"), 0x415dc, 0x415fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("HP Win Portrait"), 0x4441c, 0x444bc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LK[] =
{
    { _T("LK Victor"), 0x17d1c, 0x17d3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LK Electric Flash"), 0x17d7c, 0x17d9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LK [2]8p/[4]6P/DF Startup"), 0x17d3c, 0x17d5c },
    { _T("LK Electricity"), 0x17d5c, 0x17d7c },
    { _T("LK Select Portrait"), 0x417dc, 0x417fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("LK Win Portrait"), 0x44f5c, 0x44ffc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MK[] =
{
    { _T("MK Victor"), 0x17d9c, 0x17dbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MK Electric Flash"), 0x17dfc, 0x17e1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MK [2]8p/[4]6P/DF Startup"), 0x17dbc, 0x17ddc },
    { _T("MK Electricity"), 0x17ddc, 0x17dfc },
    { _T("MK Select Portrait"), 0x419dc, 0x419fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("MK Win Portrait"), 0x45a9c, 0x45b3c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HK[] =
{
    { _T("HK Victor"), 0x17e1c, 0x17e3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HK Electric Flash"), 0x17e7c, 0x17e9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HK [2]8p/[4]6P/DF Startup"), 0x17e3c, 0x17e5c },
    { _T("HK Electricity"), 0x17e5c, 0x17e7c },
    { _T("HK Select Portrait"), 0x41bdc, 0x41bfc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("HK Win Portrait"), 0x465dc, 0x4667c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_PP[] =
{
    { _T("PP Victor"), 0x17e9c, 0x17ebc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("PP Electric Flash"), 0x17efc, 0x17f1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("PP [2]8p/[4]6P/DF Startup"), 0x17ebc, 0x17edc },
    { _T("PP Electricity"), 0x17edc, 0x17efc },
    { _T("PP Select Portrait"), 0x41ddc, 0x41dfc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("PP Win Portrait"), 0x4711c, 0x471bc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_KK[] =
{
    { _T("KK Victor"), 0x17f1c, 0x17f3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("KK Electric Flash"), 0x17f7c, 0x17f9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("KK [2]8p/[4]6P/DF Startup"), 0x17f3c, 0x17f5c },
    { _T("KK Electricity"), 0x17f5c, 0x17f7c },
    { _T("KK Select Portrait"), 0x41fdc, 0x41ffc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("KK Win Portrait"), 0x47c5c, 0x47cfc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AP[] =
{
    { _T("AP Victor"), 0x17f9c, 0x17fbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AP Electric Flash"), 0x17ffc, 0x1801c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AP [2]8p/[4]6P/DF Startup"), 0x17fbc, 0x17fdc },
    { _T("AP Electricity"), 0x17fdc, 0x17ffc },
    { _T("AP Select Portrait"), 0x421dc, 0x421fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("AP Win Portrait"), 0x4879c, 0x4883c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AK[] =
{
    { _T("AK Victor"), 0x1801c, 0x1803c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AK Electric Flash"), 0x1807c, 0x1809c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AK [2]8p/[4]6P/DF Startup"), 0x1803c, 0x1805c },
    { _T("AK Electricity"), 0x1805c, 0x1807c },
    { _T("AK Select Portrait"), 0x423dc, 0x423fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("AK Win Portrait"), 0x492dc, 0x4937c },
};

const sGame_PaletteDataset VSAV2_A_Victor_PALETTES_SPECIAL[] =
{
    { _T("Victor LP Poisoned"),        0x203dc + (0 * 0x20), 0x203fc + (0 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MP Poisoned"),        0x203dc + (1 * 0x20), 0x203fc + (1 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HP Poisoned"),        0x203dc + (2 * 0x20), 0x203fc + (2 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LK Poisoned"),        0x203dc + (3 * 0x20), 0x203fc + (3 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MK Poisoned"),        0x203dc + (4 * 0x20), 0x203fc + (4 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HK Poisoned"),        0x203dc + (5 * 0x20), 0x203fc + (5 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor PP Poisoned"),        0x203dc + (6 * 0x20), 0x203fc + (6 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor KK Poisoned"),        0x203dc + (7 * 0x20), 0x203fc + (7 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AP Poisoned"),        0x203dc + (8 * 0x20), 0x203fc + (8 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AK Poisoned"),        0x203dc + (9 * 0x20), 0x203fc + (9 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Zapped"),          0x203dc + (10 * 0x20), 0x203fc + (10 * 0x20) },
    { _T("Victor MP Zapped"),          0x203dc + (11 * 0x20), 0x203fc + (11 * 0x20) },
    { _T("Victor HP Zapped"),          0x203dc + (12 * 0x20), 0x203fc + (12 * 0x20) },
    { _T("Victor LK Zapped"),          0x203dc + (13 * 0x20), 0x203fc + (13 * 0x20) },
    { _T("Victor MK Zapped"),          0x203dc + (14 * 0x20), 0x203fc + (14 * 0x20) },
    { _T("Victor HK Zapped"),          0x203dc + (15 * 0x20), 0x203fc + (15 * 0x20) },
    { _T("Victor PP Zapped"),          0x203dc + (16 * 0x20), 0x203fc + (16 * 0x20) },
    { _T("Victor KK Zapped"),          0x203dc + (17 * 0x20), 0x203fc + (17 * 0x20) },
    { _T("Victor AP Zapped"),          0x203dc + (18 * 0x20), 0x203fc + (18 * 0x20) },
    { _T("Victor AK Zapped"),          0x203dc + (19 * 0x20), 0x203fc + (19 * 0x20) },
    { _T("Victor LP Burned"),          0x203dc + (20 * 0x20), 0x203fc + (20 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MP Burned"),          0x203dc + (21 * 0x20), 0x203fc + (21 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HP Burned"),          0x203dc + (22 * 0x20), 0x203fc + (22 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LK Burned"),          0x203dc + (23 * 0x20), 0x203fc + (23 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MK Burned"),          0x203dc + (24 * 0x20), 0x203fc + (24 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HK Burned"),          0x203dc + (25 * 0x20), 0x203fc + (25 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor PP Burned"),          0x203dc + (26 * 0x20), 0x203fc + (26 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor KK Burned"),          0x203dc + (27 * 0x20), 0x203fc + (27 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AP Burned"),          0x203dc + (28 * 0x20), 0x203fc + (28 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AK Burned"),          0x203dc + (29 * 0x20), 0x203fc + (29 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Kotodama Gaeshi"), 0x203dc + (30 * 0x20), 0x203fc + (30 * 0x20) },
    { _T("Victor MP Kotodama Gaeshi"), 0x203dc + (31 * 0x20), 0x203fc + (31 * 0x20) },
    { _T("Victor HP Kotodama Gaeshi"), 0x203dc + (32 * 0x20), 0x203fc + (32 * 0x20) },
    { _T("Victor LK Kotodama Gaeshi"), 0x203dc + (33 * 0x20), 0x203fc + (33 * 0x20) },
    { _T("Victor MK Kotodama Gaeshi"), 0x203dc + (34 * 0x20), 0x203fc + (34 * 0x20) },
    { _T("Victor HK Kotodama Gaeshi"), 0x203dc + (35 * 0x20), 0x203fc + (35 * 0x20) },
    { _T("Victor PP Kotodama Gaeshi"), 0x203dc + (36 * 0x20), 0x203fc + (36 * 0x20) },
    { _T("Victor KK Kotodama Gaeshi"), 0x203dc + (37 * 0x20), 0x203fc + (37 * 0x20) },
    { _T("Victor AP Kotodama Gaeshi"), 0x203dc + (38 * 0x20), 0x203fc + (38 * 0x20) },
    { _T("Victor AK Kotodama Gaeshi"), 0x203dc + (39 * 0x20), 0x203fc + (39 * 0x20) },
    { _T("Victor ES 1"),               0x203dc + (40 * 0x20), 0x203fc + (40 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ES 2"),               0x203dc + (41 * 0x20), 0x203fc + (41 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ES 3"),               0x203dc + (42 * 0x20), 0x203fc + (42 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ES 4"),               0x203dc + (43 * 0x20), 0x203fc + (43 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 1"),               0x203dc + (44 * 0x20), 0x203fc + (44 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 2"),               0x203dc + (45 * 0x20), 0x203fc + (45 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 3"),               0x203dc + (46 * 0x20), 0x203fc + (46 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 4"),               0x203dc + (47 * 0x20), 0x203fc + (47 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 5"),               0x203dc + (48 * 0x20), 0x203fc + (48 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 6"),               0x203dc + (49 * 0x20), 0x203fc + (49 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 7"),               0x203dc + (50 * 0x20), 0x203fc + (50 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor EX 8"),               0x203dc + (51 * 0x20), 0x203fc + (51 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor Prova di Servo"),     0x203dc + (52 * 0x20), 0x203fc + (52 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor Finale Rosso"),       0x203dc + (53 * 0x20), 0x203fc + (53 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor Stone"),              0x203dc + (54 * 0x20), 0x203fc + (54 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Midnight Bliss"),  0x203dc + (55 * 0x20), 0x203fc + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor MP Midnight Bliss"),  0x203dc + (56 * 0x20), 0x203fc + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor HP Midnight Bliss"),  0x203dc + (57 * 0x20), 0x203fc + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor LK Midnight Bliss"),  0x203dc + (58 * 0x20), 0x203fc + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor MK Midnight Bliss"),  0x203dc + (59 * 0x20), 0x203fc + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor HK Midnight Bliss"),  0x203dc + (60 * 0x20), 0x203fc + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor PP Midnight Bliss"),  0x203dc + (61 * 0x20), 0x203fc + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor KK Midnight Bliss"),  0x203dc + (62 * 0x20), 0x203fc + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor AP Midnight Bliss"),  0x203dc + (63 * 0x20), 0x203fc + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor AK Midnight Bliss"),  0x203dc + (64 * 0x20), 0x203fc + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { _T("Victor Q-Bee's QJ Honey"),   0x203dc + (65 * 0x20), 0x203fc + (65 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Dark Force 1"),    0x203dc + (66 * 0x20), 0x203fc + (66 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Dark Force 2"),    0x203dc + (67 * 0x20), 0x203fc + (67 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Dark Force 3"),    0x203dc + (68 * 0x20), 0x203fc + (68 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LP Dark Force 4"),    0x203dc + (69 * 0x20), 0x203fc + (69 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MP Dark Force 1"),    0x203dc + (70 * 0x20), 0x203fc + (70 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MP Dark Force 2"),    0x203dc + (71 * 0x20), 0x203fc + (71 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MP Dark Force 3"),    0x203dc + (72 * 0x20), 0x203fc + (72 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MP Dark Force 4"),    0x203dc + (73 * 0x20), 0x203fc + (73 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HP Dark Force 1"),    0x203dc + (74 * 0x20), 0x203fc + (74 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HP Dark Force 2"),    0x203dc + (75 * 0x20), 0x203fc + (75 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HP Dark Force 3"),    0x203dc + (76 * 0x20), 0x203fc + (76 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HP Dark Force 4"),    0x203dc + (77 * 0x20), 0x203fc + (77 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LK Dark Force 1"),    0x203dc + (78 * 0x20), 0x203fc + (78 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LK Dark Force 2"),    0x203dc + (79 * 0x20), 0x203fc + (79 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LK Dark Force 3"),    0x203dc + (80 * 0x20), 0x203fc + (80 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor LK Dark Force 4"),    0x203dc + (81 * 0x20), 0x203fc + (81 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MK Dark Force 1"),    0x203dc + (82 * 0x20), 0x203fc + (82 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MK Dark Force 2"),    0x203dc + (83 * 0x20), 0x203fc + (83 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MK Dark Force 3"),    0x203dc + (84 * 0x20), 0x203fc + (84 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor MK Dark Force 4"),    0x203dc + (85 * 0x20), 0x203fc + (85 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HK Dark Force 1"),    0x203dc + (86 * 0x20), 0x203fc + (86 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HK Dark Force 2"),    0x203dc + (87 * 0x20), 0x203fc + (87 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HK Dark Force 3"),    0x203dc + (88 * 0x20), 0x203fc + (88 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor HK Dark Force 4"),    0x203dc + (89 * 0x20), 0x203fc + (89 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor PP Dark Force 1"),    0x203dc + (90 * 0x20), 0x203fc + (90 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor PP Dark Force 2"),    0x203dc + (91 * 0x20), 0x203fc + (91 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor PP Dark Force 3"),    0x203dc + (92 * 0x20), 0x203fc + (92 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor PP Dark Force 4"),    0x203dc + (93 * 0x20), 0x203fc + (93 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor KK Dark Force 1"),    0x203dc + (94 * 0x20), 0x203fc + (94 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor KK Dark Force 2"),    0x203dc + (95 * 0x20), 0x203fc + (95 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor KK Dark Force 3"),    0x203dc + (96 * 0x20), 0x203fc + (96 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor KK Dark Force 4"),    0x203dc + (97 * 0x20), 0x203fc + (97 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AP Dark Force 1"),    0x203dc + (98 * 0x20), 0x203fc + (98 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AP Dark Force 2"),    0x203dc + (99 * 0x20), 0x203fc + (99 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AP Dark Force 3"),    0x203dc + (100 * 0x20), 0x203fc + (100 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AP Dark Force 4"),    0x203dc + (101 * 0x20), 0x203fc + (101 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AK Dark Force 1"),    0x203dc + (102 * 0x20), 0x203fc + (102 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AK Dark Force 2"),    0x203dc + (103 * 0x20), 0x203fc + (103 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AK Dark Force 3"),    0x203dc + (104 * 0x20), 0x203fc + (104 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor AK Dark Force 4"),    0x203dc + (105 * 0x20), 0x203fc + (105 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ??? 1"),              0x203dc + (106 * 0x20), 0x203fc + (106 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ??? 2"),              0x203dc + (107 * 0x20), 0x203fc + (107 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ??? 3"),              0x203dc + (108 * 0x20), 0x203fc + (108 * 0x20), indexCPS2_Vamp_Victor },
    { _T("Victor ??? 4"),              0x203dc + (109 * 0x20), 0x203fc + (109 * 0x20), indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LP[] =
{
    { _T("LP Zabel"), 0x1809c, 0x180bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("LP 64PP/63214KK/intro/winpose"), 0x180bc, 0x180dc },
    { _T("LP Unused 1"), 0x180dc, 0x180fc },
    { _T("LP Unused 2"), 0x180fc, 0x1811c },
    { _T("LP Select Portrait"), 0x411fc, 0x4121c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("LP Win Portrait"), 0x42e3c, 0x42edc },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MP[] =
{
    { _T("MP Zabel"), 0x1811c, 0x1813c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("MP 64PP/63214KK/intro/winpose"), 0x1813c, 0x1815c },
    { _T("MP Unused 1"), 0x1815c, 0x1817c },
    { _T("MP Unused 2"), 0x1817c, 0x1819c },
    { _T("MP Select Portrait"), 0x413fc, 0x4141c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("MP Win Portrait"), 0x4397c, 0x43a1c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HP[] =
{
    { _T("HP Zabel"), 0x1819c, 0x181bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("HP 64PP/63214KK/intro/winpose"), 0x181bc, 0x181dc },
    { _T("HP Unused 1"), 0x181dc, 0x181fc },
    { _T("HP Unused 2"), 0x181fc, 0x1821c },
    { _T("HP Select Portrait"), 0x415fc, 0x4161c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("HP Win Portrait"), 0x444bc, 0x4455c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LK[] =
{
    { _T("LK Zabel"), 0x1821c, 0x1823c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("LK 64PP/63214KK/intro/winpose"), 0x1823c, 0x1825c },
    { _T("LK Unused 1"), 0x1825c, 0x1827c },
    { _T("LK Unused 2"), 0x1827c, 0x1829c },
    { _T("LK Select Portrait"), 0x417fc, 0x4181c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("LK Win Portrait"), 0x44ffc, 0x4509c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MK[] =
{
    { _T("MK Zabel"), 0x1829c, 0x182bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("MK 64PP/63214KK/intro/winpose"), 0x182bc, 0x182dc },
    { _T("MK Unused 1"), 0x182dc, 0x182fc },
    { _T("MK Unused 2"), 0x182fc, 0x1831c },
    { _T("MK Select Portrait"), 0x419fc, 0x41a1c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("MK Win Portrait"), 0x45b3c, 0x45bdc },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HK[] =
{
    { _T("HK Zabel"), 0x1831c, 0x1833c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("HK 64PP/63214KK/intro/winpose"), 0x1833c, 0x1835c },
    { _T("HK Unused 1"), 0x1835c, 0x1837c },
    { _T("HK Unused 2"), 0x1837c, 0x1839c },
    { _T("HK Select Portrait"), 0x41bfc, 0x41c1c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("HK Win Portrait"), 0x4667c, 0x4671c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_PP[] =
{
    { _T("PP Zabel"), 0x1839c, 0x183bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("PP 64PP/63214KK/intro/winpose"), 0x183bc, 0x183dc },
    { _T("PP Unused 1"), 0x183dc, 0x183fc },
    { _T("PP Unused 2"), 0x183fc, 0x1841c },
    { _T("PP Select Portrait"), 0x41dfc, 0x41e1c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("PP Win Portrait"), 0x471bc, 0x4725c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_KK[] =
{
    { _T("KK Zabel"), 0x1841c, 0x1843c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("KK 64PP/63214KK/intro/winpose"), 0x1843c, 0x1845c },
    { _T("KK Unused 1"), 0x1845c, 0x1847c },
    { _T("KK Unused 2"), 0x1847c, 0x1849c },
    { _T("KK Select Portrait"), 0x41ffc, 0x4201c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("KK Win Portrait"), 0x47cfc, 0x47d9c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AP[] =
{
    { _T("AP Zabel"), 0x1849c, 0x184bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("AP 64PP/63214KK/intro/winpose"), 0x184bc, 0x184dc },
    { _T("AP Unused 1"), 0x184dc, 0x184fc },
    { _T("AP Unused 2"), 0x184fc, 0x1851c },
    { _T("AP Select Portrait"), 0x421fc, 0x4221c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("AP Win Portrait"), 0x4883c, 0x488dc },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AK[] =
{
    { _T("AK Zabel"), 0x1851c, 0x1853c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("AK 64PP/63214KK/intro/winpose"), 0x1853c, 0x1855c },
    { _T("AK Unused 1"), 0x1855c, 0x1857c },
    { _T("AK Unused 2"), 0x1857c, 0x1859c },
    { _T("AK Select Portrait"), 0x423fc, 0x4241c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("AK Win Portrait"), 0x4937c, 0x4941c },
};

const sGame_PaletteDataset VSAV2_A_Zabel_PALETTES_SPECIAL[] =
{
    { _T("Zabel LP Poisoned"),        0x2119C + (0 * 0x20), 0x211BC + (0 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Poisoned"),        0x2119C + (1 * 0x20), 0x211BC + (1 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Poisoned"),        0x2119C + (2 * 0x20), 0x211BC + (2 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Poisoned"),        0x2119C + (3 * 0x20), 0x211BC + (3 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Poisoned"),        0x2119C + (4 * 0x20), 0x211BC + (4 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Poisoned"),        0x2119C + (5 * 0x20), 0x211BC + (5 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Poisoned"),        0x2119C + (6 * 0x20), 0x211BC + (6 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Poisoned"),        0x2119C + (7 * 0x20), 0x211BC + (7 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Poisoned"),        0x2119C + (8 * 0x20), 0x211BC + (8 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Poisoned"),        0x2119C + (9 * 0x20), 0x211BC + (9 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Zapped"),          0x2119C + (10 * 0x20), 0x211BC + (10 * 0x20) },
    { _T("Zabel MP Zapped"),          0x2119C + (11 * 0x20), 0x211BC + (11 * 0x20) },
    { _T("Zabel HP Zapped"),          0x2119C + (12 * 0x20), 0x211BC + (12 * 0x20) },
    { _T("Zabel LK Zapped"),          0x2119C + (13 * 0x20), 0x211BC + (13 * 0x20) },
    { _T("Zabel MK Zapped"),          0x2119C + (14 * 0x20), 0x211BC + (14 * 0x20) },
    { _T("Zabel HK Zapped"),          0x2119C + (15 * 0x20), 0x211BC + (15 * 0x20) },
    { _T("Zabel PP Zapped"),          0x2119C + (16 * 0x20), 0x211BC + (16 * 0x20) },
    { _T("Zabel KK Zapped"),          0x2119C + (17 * 0x20), 0x211BC + (17 * 0x20) },
    { _T("Zabel AP Zapped"),          0x2119C + (18 * 0x20), 0x211BC + (18 * 0x20) },
    { _T("Zabel AK Zapped"),          0x2119C + (19 * 0x20), 0x211BC + (19 * 0x20) },
    { _T("Zabel LP Burned"),          0x2119C + (20 * 0x20), 0x211BC + (20 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Burned"),          0x2119C + (21 * 0x20), 0x211BC + (21 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Burned"),          0x2119C + (22 * 0x20), 0x211BC + (22 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Burned"),          0x2119C + (23 * 0x20), 0x211BC + (23 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Burned"),          0x2119C + (24 * 0x20), 0x211BC + (24 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Burned"),          0x2119C + (25 * 0x20), 0x211BC + (25 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Burned"),          0x2119C + (26 * 0x20), 0x211BC + (26 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Burned"),          0x2119C + (27 * 0x20), 0x211BC + (27 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Burned"),          0x2119C + (28 * 0x20), 0x211BC + (28 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Burned"),          0x2119C + (29 * 0x20), 0x211BC + (29 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Kotodama Gaeshi"), 0x2119C + (30 * 0x20), 0x211BC + (30 * 0x20) },
    { _T("Zabel MP Kotodama Gaeshi"), 0x2119C + (31 * 0x20), 0x211BC + (31 * 0x20) },
    { _T("Zabel HP Kotodama Gaeshi"), 0x2119C + (32 * 0x20), 0x211BC + (32 * 0x20) },
    { _T("Zabel LK Kotodama Gaeshi"), 0x2119C + (33 * 0x20), 0x211BC + (33 * 0x20) },
    { _T("Zabel MK Kotodama Gaeshi"), 0x2119C + (34 * 0x20), 0x211BC + (34 * 0x20) },
    { _T("Zabel HK Kotodama Gaeshi"), 0x2119C + (35 * 0x20), 0x211BC + (35 * 0x20) },
    { _T("Zabel PP Kotodama Gaeshi"), 0x2119C + (36 * 0x20), 0x211BC + (36 * 0x20) },
    { _T("Zabel KK Kotodama Gaeshi"), 0x2119C + (37 * 0x20), 0x211BC + (37 * 0x20) },
    { _T("Zabel AP Kotodama Gaeshi"), 0x2119C + (38 * 0x20), 0x211BC + (38 * 0x20) },
    { _T("Zabel AK Kotodama Gaeshi"), 0x2119C + (39 * 0x20), 0x211BC + (39 * 0x20) },
    { _T("Zabel ES 1"),               0x2119C + (40 * 0x20), 0x211BC + (40 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ES 2"),               0x2119C + (41 * 0x20), 0x211BC + (41 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ES 3"),               0x2119C + (42 * 0x20), 0x211BC + (42 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ES 4"),               0x2119C + (43 * 0x20), 0x211BC + (43 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 1"),               0x2119C + (44 * 0x20), 0x211BC + (44 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 2"),               0x2119C + (45 * 0x20), 0x211BC + (45 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 3"),               0x2119C + (46 * 0x20), 0x211BC + (46 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 4"),               0x2119C + (47 * 0x20), 0x211BC + (47 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 5"),               0x2119C + (48 * 0x20), 0x211BC + (48 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 6"),               0x2119C + (49 * 0x20), 0x211BC + (49 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 7"),               0x2119C + (50 * 0x20), 0x211BC + (50 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel EX 8"),               0x2119C + (51 * 0x20), 0x211BC + (51 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel Prova di Servo"),     0x2119C + (52 * 0x20), 0x211BC + (52 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel Finale Rosso"),       0x2119C + (53 * 0x20), 0x211BC + (53 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel Stone"),              0x2119C + (54 * 0x20), 0x211BC + (54 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Midnight Bliss"),  0x2119C + (55 * 0x20), 0x211BC + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Midnight Bliss"),  0x2119C + (56 * 0x20), 0x211BC + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Midnight Bliss"),  0x2119C + (57 * 0x20), 0x211BC + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Midnight Bliss"),  0x2119C + (58 * 0x20), 0x211BC + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Midnight Bliss"),  0x2119C + (59 * 0x20), 0x211BC + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Midnight Bliss"),  0x2119C + (60 * 0x20), 0x211BC + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Midnight Bliss"),  0x2119C + (61 * 0x20), 0x211BC + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Midnight Bliss"),  0x2119C + (62 * 0x20), 0x211BC + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Midnight Bliss"),  0x2119C + (63 * 0x20), 0x211BC + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Midnight Bliss"),  0x2119C + (64 * 0x20), 0x211BC + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { _T("Zabel Q-Bee's QJ Honey"),   0x2119C + (65 * 0x20), 0x211BC + (65 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Dark Force 1"),    0x2119C + (66 * 0x20), 0x211BC + (66 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Dark Force 2"),    0x2119C + (67 * 0x20), 0x211BC + (67 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Dark Force 3"),    0x2119C + (68 * 0x20), 0x211BC + (68 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LP Dark Force 4"),    0x2119C + (69 * 0x20), 0x211BC + (69 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Dark Force 1"),    0x2119C + (70 * 0x20), 0x211BC + (70 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Dark Force 2"),    0x2119C + (71 * 0x20), 0x211BC + (71 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Dark Force 3"),    0x2119C + (72 * 0x20), 0x211BC + (72 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MP Dark Force 4"),    0x2119C + (73 * 0x20), 0x211BC + (73 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Dark Force 1"),    0x2119C + (74 * 0x20), 0x211BC + (74 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Dark Force 2"),    0x2119C + (75 * 0x20), 0x211BC + (75 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Dark Force 3"),    0x2119C + (76 * 0x20), 0x211BC + (76 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HP Dark Force 4"),    0x2119C + (77 * 0x20), 0x211BC + (77 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Dark Force 1"),    0x2119C + (78 * 0x20), 0x211BC + (78 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Dark Force 2"),    0x2119C + (79 * 0x20), 0x211BC + (79 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Dark Force 3"),    0x2119C + (80 * 0x20), 0x211BC + (80 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel LK Dark Force 4"),    0x2119C + (81 * 0x20), 0x211BC + (81 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Dark Force 1"),    0x2119C + (82 * 0x20), 0x211BC + (82 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Dark Force 2"),    0x2119C + (83 * 0x20), 0x211BC + (83 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Dark Force 3"),    0x2119C + (84 * 0x20), 0x211BC + (84 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel MK Dark Force 4"),    0x2119C + (85 * 0x20), 0x211BC + (85 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Dark Force 1"),    0x2119C + (86 * 0x20), 0x211BC + (86 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Dark Force 2"),    0x2119C + (87 * 0x20), 0x211BC + (87 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Dark Force 3"),    0x2119C + (88 * 0x20), 0x211BC + (88 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel HK Dark Force 4"),    0x2119C + (89 * 0x20), 0x211BC + (89 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Dark Force 1"),    0x2119C + (90 * 0x20), 0x211BC + (90 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Dark Force 2"),    0x2119C + (91 * 0x20), 0x211BC + (91 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Dark Force 3"),    0x2119C + (92 * 0x20), 0x211BC + (92 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel PP Dark Force 4"),    0x2119C + (93 * 0x20), 0x211BC + (93 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Dark Force 1"),    0x2119C + (94 * 0x20), 0x211BC + (94 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Dark Force 2"),    0x2119C + (95 * 0x20), 0x211BC + (95 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Dark Force 3"),    0x2119C + (96 * 0x20), 0x211BC + (96 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel KK Dark Force 4"),    0x2119C + (97 * 0x20), 0x211BC + (97 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Dark Force 1"),    0x2119C + (98 * 0x20), 0x211BC + (98 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Dark Force 2"),    0x2119C + (99 * 0x20), 0x211BC + (99 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Dark Force 3"),    0x2119C + (100 * 0x20), 0x211BC + (100 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AP Dark Force 4"),    0x2119C + (101 * 0x20), 0x211BC + (101 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Dark Force 1"),    0x2119C + (102 * 0x20), 0x211BC + (102 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Dark Force 2"),    0x2119C + (103 * 0x20), 0x211BC + (103 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Dark Force 3"),    0x2119C + (104 * 0x20), 0x211BC + (104 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel AK Dark Force 4"),    0x2119C + (105 * 0x20), 0x211BC + (105 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ??? 1"),              0x2119C + (106 * 0x20), 0x211BC + (106 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ??? 2"),              0x2119C + (107 * 0x20), 0x211BC + (107 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ??? 3"),              0x2119C + (108 * 0x20), 0x211BC + (108 * 0x20), indexCPS2_Vamp_Zabel },
    { _T("Zabel ??? 4"),              0x2119C + (109 * 0x20), 0x211BC + (109 * 0x20), indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LP[] =
{
    { _T("LP Morrigan"), 0x1859c, 0x185bc, indexCPS2_Morrigan, 0x0f },
    { _T("LP Idle sparkles/Raging demon"), 0x185bc, 0x185dc, indexCPS2_Morrigan, 0x2 },
    { _T("LP Bats"), 0x185dc, 0x185fc },
    { _T("LP Unknown Extra"), 0x185fc, 0x1861c },
    { _T("LP Select Portrait"), 0x4121c, 0x4123c, indexCPS2_Morrigan, 0x20 },
    { _T("LP Win Portrait"), 0x42edc, 0x42f7c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MP[] =
{
    { _T("MP Morrigan"), 0x1861c, 0x1863c, indexCPS2_Morrigan, 0x0f },
    { _T("MP Idle sparkles/Raging demon"), 0x1863c, 0x1865c, indexCPS2_Morrigan, 0x2 },
    { _T("MP Bats"), 0x1865c, 0x1867c },
    { _T("MP Unknown Extra"), 0x1867c, 0x1869c },
    { _T("MP Select Portrait"), 0x4141c, 0x4143c, indexCPS2_Morrigan, 0x20 },
    { _T("MP Win Portrait"), 0x43a1c, 0x43abc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HP[] =
{
    { _T("HP Morrigan"), 0x1869c, 0x186bc, indexCPS2_Morrigan, 0x0f },
    { _T("HP Idle sparkles/Raging demon"), 0x186bc, 0x186dc, indexCPS2_Morrigan, 0x2 },
    { _T("HP Bats"), 0x186dc, 0x186fc },
    { _T("HP Unknown Extra"), 0x186fc, 0x1871c },
    { _T("HP Select Portrait"), 0x4161c, 0x4163c, indexCPS2_Morrigan, 0x20 },
    { _T("HP Win Portrait"), 0x4455c, 0x445fc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LK[] =
{
    { _T("LK Morrigan"), 0x1871c, 0x1873c, indexCPS2_Morrigan, 0x0f },
    { _T("LK Idle sparkles/Raging demon"), 0x1873c, 0x1875c, indexCPS2_Morrigan, 0x2 },
    { _T("LK Bats"), 0x1875c, 0x1877c },
    { _T("LK Unknown Extra"), 0x1877c, 0x1879c },
    { _T("LK Select Portrait"), 0x4181c, 0x4183c, indexCPS2_Morrigan, 0x20 },
    { _T("LK Win Portrait"), 0x4509c, 0x4513c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MK[] =
{
    { _T("MK Morrigan"), 0x1879c, 0x187bc, indexCPS2_Morrigan, 0x0f },
    { _T("MK Idle sparkles/Raging demon"), 0x187bc, 0x187dc, indexCPS2_Morrigan, 0x2 },
    { _T("MK Bats"), 0x187dc, 0x187fc },
    { _T("MK Unknown Extra"), 0x187fc, 0x1881c },
    { _T("MK Select Portrait"), 0x41a1c, 0x41a3c, indexCPS2_Morrigan, 0x20 },
    { _T("MK Win Portrait"), 0x45bdc, 0x45c7c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HK[] =
{
    { _T("HK Morrigan"), 0x1881c, 0x1883c, indexCPS2_Morrigan, 0x0f },
    { _T("HK Idle sparkles/Raging demon"), 0x1883c, 0x1885c, indexCPS2_Morrigan, 0x2 },
    { _T("HK Bats"), 0x1885c, 0x1887c },
    { _T("HK Unknown Extra"), 0x1887c, 0x1889c },
    { _T("HK Select Portrait"), 0x41c1c, 0x41c3c, indexCPS2_Morrigan, 0x20 },
    { _T("HK Win Portrait"), 0x4671c, 0x467bc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_PP[] =
{
    { _T("PP Morrigan"), 0x1889c, 0x188bc, indexCPS2_Morrigan, 0x0f },
    { _T("PP Idle sparkles/Raging demon"), 0x188bc, 0x188dc, indexCPS2_Morrigan, 0x2 },
    { _T("PP Bats"), 0x188dc, 0x188fc },
    { _T("PP Unknown Extra"), 0x188fc, 0x1891c },
    { _T("PP Select Portrait"), 0x41e1c, 0x41e3c, indexCPS2_Morrigan, 0x20 },
    { _T("PP Win Portrait"), 0x4725c, 0x472fc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_KK[] =
{
    { _T("KK Morrigan"), 0x1891c, 0x1893c, indexCPS2_Morrigan, 0x0f },
    { _T("KK Idle sparkles/Raging demon"), 0x1893c, 0x1895c, indexCPS2_Morrigan, 0x2 },
    { _T("KK Bats"), 0x1895c, 0x1897c },
    { _T("KK Unknown Extra"), 0x1897c, 0x1899c },
    { _T("KK Select Portrait"), 0x4201c, 0x4203c, indexCPS2_Morrigan, 0x20 },
    { _T("KK Win Portrait"), 0x47d9c, 0x47e3c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AP[] =
{
    { _T("AP Morrigan"), 0x1899c, 0x189bc, indexCPS2_Morrigan, 0x0f },
    { _T("AP Idle sparkles/Raging demon"), 0x189bc, 0x189dc, indexCPS2_Morrigan, 0x2 },
    { _T("AP Bats"), 0x189dc, 0x189fc },
    { _T("AP Unknown Extra"), 0x189fc, 0x18a1c },
    { _T("AP Select Portrait"), 0x4221c, 0x4223c, indexCPS2_Morrigan, 0x20 },
    { _T("AP Win Portrait"), 0x488dc, 0x4897c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AK[] =
{
    { _T("AK Morrigan"), 0x18a1c, 0x18a3c, indexCPS2_Morrigan, 0x0f },
    { _T("AK Idle sparkles/Raging demon"), 0x18a3c, 0x18a5c, indexCPS2_Morrigan, 0x2 },
    { _T("AK Bats"), 0x18a5c, 0x18a7c },
    { _T("AK Unknown Extra"), 0x18a7c, 0x18a9c },
    { _T("AK Select Portrait"), 0x4241c, 0x4243c, indexCPS2_Morrigan, 0x20 },
    { _T("AK Win Portrait"), 0x4941c, 0x494bc },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LP[] =
{
    { _T("LP Anakaris"), 0x18a9c, 0x18abc, indexCPS2_Anakaris, 0x0 },
    { _T("LP 2.HP/Mummies"), 0x18adc, 0x18afc, indexCPS2_Anakaris, 0x2 },
    { _T("LP 426KK/62KK Light"), 0x18abc, 0x18adc },
    { _T("LP Pharaoh Magic Orbs"), 0x18afc, 0x18b1c, indexCPS2_Anakaris, 0x3 },
    { _T("LP Select Portrait"), 0x4123c, 0x4125c, indexCPS2_Anakaris, 0x20 },
    { _T("LP Win Portrait"), 0x42f7c, 0x4301c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MP[] =
{
    { _T("MP Anakaris"), 0x18b1c, 0x18b3c, indexCPS2_Anakaris, 0x0 },
    { _T("MP 2.HP/Mummies"), 0x18b5c, 0x18b7c, indexCPS2_Anakaris, 0x2 },
    { _T("MP 426KK/62KK Light"), 0x18b3c, 0x18b5c },
    { _T("MP Pharaoh Magic Orbs"), 0x18b7c, 0x18b9c, indexCPS2_Anakaris, 0x3 },
    { _T("MP Select Portrait"), 0x4143c, 0x4145c, indexCPS2_Anakaris, 0x20 },
    { _T("MP Win Portrait"), 0x43abc, 0x43b5c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HP[] =
{
    { _T("HP Anakaris"), 0x18b9c, 0x18bbc, indexCPS2_Anakaris, 0x0 },
    { _T("HP 2.HP/Mummies"), 0x18bdc, 0x18bfc, indexCPS2_Anakaris, 0x2 },
    { _T("HP 426KK/62KK Light"), 0x18bbc, 0x18bdc },
    { _T("HP Pharaoh Magic Orbs"), 0x18bfc, 0x18c1c, indexCPS2_Anakaris, 0x3 },
    { _T("HP Select Portrait"), 0x4163c, 0x4165c, indexCPS2_Anakaris, 0x20 },
    { _T("HP Win Portrait"), 0x445fc, 0x4469c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LK[] =
{
    { _T("LK Anakaris"), 0x18c1c, 0x18c3c, indexCPS2_Anakaris, 0x0 },
    { _T("LK 2.HP/Mummies"), 0x18c5c, 0x18c7c, indexCPS2_Anakaris, 0x2 },
    { _T("LK 426KK/62KK Light"), 0x18c3c, 0x18c5c },
    { _T("LK Pharaoh Magic Orbs"), 0x18c7c, 0x18c9c, indexCPS2_Anakaris, 0x3 },
    { _T("LK Select Portrait"), 0x4183c, 0x4185c, indexCPS2_Anakaris, 0x20 },
    { _T("LK Win Portrait"), 0x4513c, 0x451dc },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MK[] =
{
    { _T("MK Anakaris"), 0x18c9c, 0x18cbc, indexCPS2_Anakaris, 0x0 },
    { _T("MK 2.HP/Mummies"), 0x18cdc, 0x18cfc, indexCPS2_Anakaris, 0x2 },
    { _T("MK 426KK/62KK Light"), 0x18cbc, 0x18cdc },
    { _T("MK Pharaoh Magic Orbs"), 0x18cfc, 0x18d1c, indexCPS2_Anakaris, 0x3 },
    { _T("MK Select Portrait"), 0x41a3c, 0x41a5c, indexCPS2_Anakaris, 0x20 },
    { _T("MK Win Portrait"), 0x45c7c, 0x45d1c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HK[] =
{
    { _T("HK Anakaris"), 0x18d1c, 0x18d3c, indexCPS2_Anakaris, 0x0 },
    { _T("HK 2.HP/Mummies"), 0x18d5c, 0x18d7c, indexCPS2_Anakaris, 0x2 },
    { _T("HK 426KK/62KK Light"), 0x18d3c, 0x18d5c },
    { _T("HK Pharaoh Magic Orbs"), 0x18d7c, 0x18d9c, indexCPS2_Anakaris, 0x3 },
    { _T("HK Select Portrait"), 0x41c3c, 0x41c5c, indexCPS2_Anakaris, 0x20 },
    { _T("HK Win Portrait"), 0x467bc, 0x4685c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_PP[] =
{
    { _T("PP Anakaris"), 0x18d9c, 0x18dbc, indexCPS2_Anakaris, 0x0 },
    { _T("PP 2.HP/Mummies"), 0x18ddc, 0x18dfc, indexCPS2_Anakaris, 0x2 },
    { _T("PP 426KK/62KK Light"), 0x18dbc, 0x18ddc },
    { _T("PP Pharaoh Magic Orbs"), 0x18dfc, 0x18e1c, indexCPS2_Anakaris, 0x3 },
    { _T("PP Select Portrait"), 0x41e3c, 0x41e5c, indexCPS2_Anakaris, 0x20 },
    { _T("PP Win Portrait"), 0x472fc, 0x4739c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_KK[] =
{
    { _T("KK Anakaris"), 0x18e1c, 0x18e3c, indexCPS2_Anakaris, 0x0 },
    { _T("KK 2.HP/Mummies"), 0x18e5c, 0x18e7c, indexCPS2_Anakaris, 0x2 },
    { _T("KK 426KK/62KK Light"), 0x18e3c, 0x18e5c },
    { _T("KK Pharaoh Magic Orbs"), 0x18e7c, 0x18e9c, indexCPS2_Anakaris, 0x3 },
    { _T("KK Select Portrait"), 0x4203c, 0x4205c, indexCPS2_Anakaris, 0x20 },
    { _T("KK Win Portrait"), 0x47e3c, 0x47edc },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AP[] =
{
    { _T("AP Anakaris"), 0x18e9c, 0x18ebc, indexCPS2_Anakaris, 0x0 },
    { _T("AP 2.HP/Mummies"), 0x18edc, 0x18efc, indexCPS2_Anakaris, 0x2 },
    { _T("AP 426KK/62KK Light"), 0x18ebc, 0x18edc },
    { _T("AP Pharaoh Magic Orbs"), 0x18efc, 0x18f1c, indexCPS2_Anakaris, 0x3 },
    { _T("AP Select Portrait"), 0x4223c, 0x4225c, indexCPS2_Anakaris, 0x20 },
    { _T("AP Win Portrait"), 0x4897c, 0x48a1c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AK[] =
{
    { _T("AK Anakaris"), 0x18f1c, 0x18f3c, indexCPS2_Anakaris, 0x0 },
    { _T("AK 2.HP/Mummies"), 0x18f5c, 0x18f7c, indexCPS2_Anakaris, 0x2 },
    { _T("AK 426KK/62KK Light"), 0x18f3c, 0x18f5c },
    { _T("AK Pharaoh Magic Orbs"), 0x18f7c, 0x18f9c, indexCPS2_Anakaris, 0x3 },
    { _T("AK Select Portrait"), 0x4243c, 0x4245c, indexCPS2_Anakaris, 0x20 },
    { _T("AK Win Portrait"), 0x494bc, 0x4955c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LP[] =
{
    { _T("LP Felicia"), 0x18f9c, 0x18fbc, indexCPS2_Felicia, 0x0 },
    { _T("LP Helpers/Mouse"), 0x18fbc, 0x18fdc },
    { _T("LP Bubble/Butterfly"), 0x18fdc, 0x18ffc },
    { _T("LP Unknown Extra"), 0x18ffc, 0x1901c },
    { _T("LP Select portrait"), 0x4125c, 0x4127c, indexCPS2_Felicia, 0x20 },
    { _T("LP Win Portrait"), 0x4301c, 0x430bc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MP[] =
{
    { _T("MP Felicia"), 0x1901c, 0x1903c, indexCPS2_Felicia, 0x0 },
    { _T("MP Helpers/Mouse"), 0x1903c, 0x1905c },
    { _T("MP Bubble/Butterfly"), 0x1905c, 0x1907c },
    { _T("MP Unknown Extra"), 0x1907c, 0x1909c },
    { _T("MP Select Portrait"), 0x4145c, 0x4147c, indexCPS2_Felicia, 0x20 },
    { _T("MP Win Portrait"), 0x43b5c, 0x43bfc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HP[] =
{
    { _T("HP Felicia"), 0x1909c, 0x190bc, indexCPS2_Felicia, 0x0 },
    { _T("HP Helpers/Mouse"), 0x190bc, 0x190dc },
    { _T("HP Bubble/Butterfly"), 0x190dc, 0x190fc },
    { _T("HP Unknown Extra"), 0x190fc, 0x1911c },
    { _T("HP Select Portrait"), 0x4165c, 0x4167c, indexCPS2_Felicia, 0x20 },
    { _T("HP Win Portrait"), 0x4469c, 0x4473c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LK[] =
{
    { _T("LK Felicia"), 0x1911c, 0x1913c, indexCPS2_Felicia, 0x0 },
    { _T("LK Helpers/Mouse"), 0x1913c, 0x1915c },
    { _T("LK Bubble/Butterfly"), 0x1915c, 0x1917c },
    { _T("LK Unknown Extra"), 0x1917c, 0x1919c },
    { _T("LK Select Portrait"), 0x4185c, 0x4187c, indexCPS2_Felicia, 0x20 },
    { _T("LK Win Portrait"), 0x451dc, 0x4527c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MK[] =
{
    { _T("MK Felicia"), 0x1919c, 0x191bc, indexCPS2_Felicia, 0x0 },
    { _T("MK Helpers/Mouse"), 0x191bc, 0x191dc },
    { _T("MK Bubble/Butterfly"), 0x191dc, 0x191fc },
    { _T("MK Unknown Extra"), 0x191fc, 0x1921c },
    { _T("MK Select Portrait"), 0x41a5c, 0x41a7c, indexCPS2_Felicia, 0x20 },
    { _T("MK Win Portrait"), 0x45d1c, 0x45dbc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HK[] =
{
    { _T("HK Felicia"), 0x1921c, 0x1923c, indexCPS2_Felicia, 0x0 },
    { _T("HK Helpers/Mouse"), 0x1923c, 0x1925c },
    { _T("HK Bubble/Butterfly"), 0x1925c, 0x1927c },
    { _T("HK Unknown Extra"), 0x1927c, 0x1929c },
    { _T("HK Select Portrait"), 0x41c5c, 0x41c7c, indexCPS2_Felicia, 0x20 },
    { _T("HK Win Portrait"), 0x4685c, 0x468fc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_PP[] =
{
    { _T("PP Felicia"), 0x1929c, 0x192bc, indexCPS2_Felicia, 0x0 },
    { _T("PP Helpers/Mouse"), 0x192bc, 0x192dc },
    { _T("PP Bubble/Butterfly"), 0x192dc, 0x192fc },
    { _T("PP Unknown Extra"), 0x192fc, 0x1931c },
    { _T("PP Select Portrait"), 0x41e5c, 0x41e7c, indexCPS2_Felicia, 0x20 },
    { _T("PP Win Portrait"), 0x4739c, 0x4743c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_KK[] =
{
    { _T("KK Felicia"), 0x1931c, 0x1933c, indexCPS2_Felicia, 0x0 },
    { _T("KK Helpers/Mouse"), 0x1933c, 0x1935c },
    { _T("KK Bubble/Butterfly"), 0x1935c, 0x1937c },
    { _T("KK Unknown Extra"), 0x1937c, 0x1939c },
    { _T("KK Select Portrait"), 0x4205c, 0x4207c, indexCPS2_Felicia, 0x20 },
    { _T("KK Win Portrait"), 0x47edc, 0x47f7c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AP[] =
{
    { _T("AP Felicia"), 0x1939c, 0x193bc, indexCPS2_Felicia, 0x0 },
    { _T("AP Helpers/Mouse"), 0x193bc, 0x193dc },
    { _T("AP Bubble/Butterfly"), 0x193dc, 0x193fc },
    { _T("AP Unknown Extra"), 0x193fc, 0x1941c },
    { _T("AP Select Portrait"), 0x4225c, 0x4227c, indexCPS2_Felicia, 0x20 },
    { _T("AP Win Portrait"), 0x48a1c, 0x48abc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AK[] =
{
    { _T("AK Felicia"), 0x1941c, 0x1943c, indexCPS2_Felicia, 0x0 },
    { _T("AK Helpers/Mouse"), 0x1943c, 0x1945c },
    { _T("AK Bubble/Butterfly"), 0x1945c, 0x1947c },
    { _T("AK Unknown Extra"), 0x1947c, 0x1949c },
    { _T("AK Select Portrait"), 0x4245c, 0x4247c, indexCPS2_Felicia, 0x20 },
    { _T("AK Win Portrait"), 0x4955c, 0x495fc },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LP[] =
{
    { _T("LP Bishamon"), 0x1949c, 0x194bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Ghosts/Hitsparks"), 0x194dc, 0x194fc },
    { _T("LP 41236KK"), 0x194bc, 0x194dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Unknown Extra"), 0x194fc, 0x1951c },
    { _T("LP Select Portrait"), 0x4127c, 0x4129c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LP Win Portrait"), 0x430bc, 0x4315c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MP[] =
{
    { _T("MP Bishamon"), 0x1951c, 0x1953c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Ghosts/Hitsparks"), 0x1955c, 0x1957c },
    { _T("MP 41236KK"), 0x1953c, 0x1955c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Unknown Extra"), 0x1957c, 0x1959c },
    { _T("MP Select Portrait"), 0x4147c, 0x4149c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MP Win Portrait"), 0x43bfc, 0x43c9c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HP[] =
{
    { _T("HP Bishamon"), 0x1959c, 0x195bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Ghosts/Hitsparks"), 0x195dc, 0x195fc },
    { _T("HP 41236KK"), 0x195bc, 0x195dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Unknown Extra"), 0x195fc, 0x1961c },
    { _T("HP Select Portrait"), 0x4167c, 0x4169c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HP Win Portrait"), 0x4473c, 0x447dc },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LK[] =
{
    { _T("LK Bishamon"), 0x1961c, 0x1963c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Ghosts/Hitsparks"), 0x1965c, 0x1967c },
    { _T("LK 41236KK"), 0x1963c, 0x1965c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Unknown Extra"), 0x1967c, 0x1969c },
    { _T("LK Select Portrait"), 0x4187c, 0x4189c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("LK Win Portrait"), 0x4527c, 0x4531c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MK[] =
{
    { _T("MK Bishamon"), 0x1969c, 0x196bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Ghosts/Hitsparks"), 0x196dc, 0x196fc },
    { _T("MK 41236KK"), 0x196bc, 0x196dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Unknown Extra"), 0x196fc, 0x1971c },
    { _T("MK Select Portrait"), 0x41a7c, 0x41a9c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("MK Win Portrait"), 0x45dbc, 0x45e5c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HK[] =
{
    { _T("HK Bishamon"), 0x1971c, 0x1973c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Ghosts/Hitsparks"), 0x1975c, 0x1977c },
    { _T("HK 41236KK"), 0x1973c, 0x1975c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Unknown Extra"), 0x1977c, 0x1979c },
    { _T("HK Select Portrait"), 0x41c7c, 0x41c9c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("HK Win Portrait"), 0x468fc, 0x4699c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_PP[] =
{
    { _T("PP Bishamon"), 0x1979c, 0x197bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Ghosts/Hitsparks"), 0x197dc, 0x197fc },
    { _T("PP 41236KK"), 0x197bc, 0x197dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Unknown Extra"), 0x197fc, 0x1981c },
    { _T("PP Select Portrait"), 0x41e7c, 0x41e9c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("PP Win Portrait"), 0x4743c, 0x474dc },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_KK[] =
{
    { _T("KK Bishamon"), 0x1981c, 0x1983c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Ghosts/Hitsparks"), 0x1985c, 0x1987c },
    { _T("KK 41236KK"), 0x1983c, 0x1985c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Unknown Extra"), 0x1987c, 0x1989c },
    { _T("KK Select Portrait"), 0x4207c, 0x4209c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("KK Win Portrait"), 0x47f7c, 0x4801c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AP[] =
{
    { _T("AP Bishamon"), 0x1989c, 0x198bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Ghosts/Hitsparks"), 0x198dc, 0x198fc },
    { _T("AP 41236KK"), 0x198bc, 0x198dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Unknown Extra"), 0x198fc, 0x1991c },
    { _T("AP Select Portrait"), 0x4227c, 0x4229c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("AP Win Portrait"), 0x48abc, 0x48b5c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AK[] =
{
    { _T("AK Bishamon"), 0x1991c, 0x1993c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Ghosts/Hitsparks"), 0x1995c, 0x1997c },
    { _T("AK 41236KK"), 0x1993c, 0x1995c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Unknown Extra"), 0x1997c, 0x1999c },
    { _T("AK Select Portrait"), 0x4247c, 0x4249c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("AK Win Portrait"), 0x495fc, 0x4969c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LP[] =
{
    { _T("LP Aulbath"), 0x1999c, 0x199bc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("LP Water/s.MK/j.MP"), 0x199bc, 0x199dc },
    { _T("LP Poison Cloud "), 0x199fc, 0x19a1c },
    { _T("LP Mach Crab (not full pal)"), 0x199dc, 0x199fc },
    { _T("LP Select Portrait"), 0x4129c, 0x412bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("LP Win Portrait"), 0x4315c, 0x431fc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MP[] =
{
    { _T("MP Aulbath"), 0x19a1c, 0x19a3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("MP Water/s.MK/j.MP"), 0x19a3c, 0x19a5c },
    { _T("MP Poison Cloud "), 0x19a7c, 0x19a9c },
    { _T("MP Mach Crab (not full pal)"), 0x19a5c, 0x19a7c },
    { _T("MP Select Portrait"), 0x4149c, 0x414bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("MP Win Portrait"), 0x43c9c, 0x43d3c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HP[] =
{
    { _T("HP Aulbath"), 0x19a9c, 0x19abc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("HP Water/s.MK/j.MP"), 0x19abc, 0x19adc },
    { _T("HP Poison Cloud "), 0x19afc, 0x19b1c },
    { _T("HP Mach Crab (not full pal)"), 0x19adc, 0x19afc },
    { _T("HP Select Portrait"), 0x4169c, 0x416bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("HP Win Portrait"), 0x447dc, 0x4487c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LK[] =
{
    { _T("LK Aulbath"), 0x19b1c, 0x19b3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("LK Water/s.MK/j.MP"), 0x19b3c, 0x19b5c },
    { _T("LK Poison Cloud "), 0x19b7c, 0x19b9c },
    { _T("LK Mach Crab (not full pal)"), 0x19b5c, 0x19b7c },
    { _T("LK Select Portrait"), 0x4189c, 0x418bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("LK Win Portrait"), 0x4531c, 0x453bc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MK[] =
{
    { _T("MK Aulbath"), 0x19b9c, 0x19bbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("MK Water/s.MK/j.MP"), 0x19bbc, 0x19bdc },
    { _T("MK Poison Cloud "), 0x19bfc, 0x19c1c },
    { _T("MK Mach Crab (not full pal)"), 0x19bdc, 0x19bfc },
    { _T("MK Select Portrait"), 0x41a9c, 0x41abc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("MK Win Portrait"), 0x45e5c, 0x45efc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HK[] =
{
    { _T("HK Aulbath"), 0x19c1c, 0x19c3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("HK Water/s.MK/j.MP"), 0x19c3c, 0x19c5c },
    { _T("HK Poison Cloud "), 0x19c7c, 0x19c9c },
    { _T("HK Mach Crab (not full pal)"), 0x19c5c, 0x19c7c },
    { _T("HK Select Portrait"), 0x41c9c, 0x41cbc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("HK Win Portrait"), 0x4699c, 0x46a3c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_PP[] =
{
    { _T("PP Aulbath"), 0x19c9c, 0x19cbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("PP Poison Cloud "), 0x19cfc, 0x19d1c },
    { _T("PP Water/s.MK/j.MP"), 0x19cbc, 0x19cdc },
    { _T("PP Mach Crab (not full pal)"), 0x19cdc, 0x19cfc },
    { _T("PP Select Portrait"), 0x41e9c, 0x41ebc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("PP Win Portrait"), 0x474dc, 0x4757c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_KK[] =
{
    { _T("KK Aulbath"), 0x19d1c, 0x19d3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("KK Water/s.MK/j.MP"), 0x19d3c, 0x19d5c },
    { _T("KK Poison Cloud "), 0x19d7c, 0x19d9c },
    { _T("KK Mach Crab (not full pal)"), 0x19d5c, 0x19d7c },
    { _T("KK Select Portrait"), 0x4209c, 0x420bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("KK Win Portrait"), 0x4801c, 0x480bc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AP[] =
{
    { _T("AP Aulbath"), 0x19d9c, 0x19dbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("AP Water/s.MK/j.MP"), 0x19dbc, 0x19ddc },
    { _T("AP Poison Cloud "), 0x19dfc, 0x19e1c },
    { _T("AP Mach Crab (not full pal)"), 0x19ddc, 0x19dfc },
    { _T("AP Select Portrait"), 0x4229c, 0x422bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("AP Win Portrait"), 0x48b5c, 0x48bfc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AK[] =
{
    { _T("AK Aulbath"), 0x19e1c, 0x19e3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("AK Water/s.MK/j.MP"), 0x19e3c, 0x19e5c },
    { _T("AK Poison Cloud "), 0x19e7c, 0x19e9c },
    { _T("AK Mach Crab (not full pal)"), 0x19e5c, 0x19e7c },
    { _T("AK Select Portrait"), 0x4249c, 0x424bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("AK Win Portrait"), 0x4969c, 0x4973c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LP[] =
{
    { _T("LP Sasquatch"), 0x19e9c, 0x19ebc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("LP Ice Extras"), 0x19efc, 0x19f1c },
    { _T("LP Banana"), 0x19ebc, 0x19edc },
    { _T("LP Smoke"), 0x19edc, 0x19efc },
    { _T("LP Select Portrait"), 0x412bc, 0x412dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("LP Win Portrait"), 0x431fc, 0x4329c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MP[] =
{
    { _T("MP Sasquatch"), 0x19f1c, 0x19f3c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("MP Ice Extras"), 0x19f7c, 0x19f9c },
    { _T("MP Banana"), 0x19f3c, 0x19f5c },
    { _T("MP Smoke"), 0x19f5c, 0x19f7c },
    { _T("MP Select Portrait"), 0x414bc, 0x414dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("MP Win Portrait"), 0x43d3c, 0x43ddc },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HP[] =
{
    { _T("HP Sasquatch"), 0x19f9c, 0x19fbc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("HP Ice Extras"), 0x19ffc, 0x1a01c },
    { _T("HP Banana"), 0x19fbc, 0x19fdc },
    { _T("HP Smoke"), 0x19fdc, 0x19ffc },
    { _T("HP Select Portrait"), 0x416bc, 0x416dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("HP Win Portrait"), 0x4487c, 0x4491c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LK[] =
{
    { _T("LK Sasquatch"), 0x1a01c, 0x1a03c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("LK Ice Extras"), 0x1a07c, 0x1a09c },
    { _T("LK Banana"), 0x1a03c, 0x1a05c },
    { _T("LK Smoke"), 0x1a05c, 0x1a07c },
    { _T("LK Select Portrait"), 0x418bc, 0x418dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("LK Win Portrait"), 0x453bc, 0x4545c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MK[] =
{
    { _T("MK Sasquatch"), 0x1a09c, 0x1a0bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("MK Ice Extras"), 0x1a0fc, 0x1a11c },
    { _T("MK Banana"), 0x1a0bc, 0x1a0dc },
    { _T("MK Smoke"), 0x1a0dc, 0x1a0fc },
    { _T("MK Select Portrait"), 0x41abc, 0x41adc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("MK Win Portrait"), 0x45efc, 0x45f9c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HK[] =
{
    { _T("HK Sasquatch"), 0x1a11c, 0x1a13c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("HK Ice Extras"), 0x1a17c, 0x1a19c },
    { _T("HK Banana"), 0x1a13c, 0x1a15c },
    { _T("HK Smoke"), 0x1a15c, 0x1a17c },
    { _T("HK Select Portrait"), 0x3fabc, 0x3fadc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("HK Win Portrait"), 0x46a3c, 0x46adc },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_PP[] =
{
    { _T("PP Sasquatch"), 0x1a19c, 0x1a1bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("PP Ice Extras"), 0x1a1fc, 0x1a21c },
    { _T("PP Banana"), 0x1a1bc, 0x1a1dc },
    { _T("PP Smoke"), 0x1a1dc, 0x1a1fc },
    { _T("PP Select Portrait"), 0x41ebc, 0x41edc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("PP Win Portrait"), 0x4757c, 0x4761c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_KK[] =
{
    { _T("KK Sasquatch"), 0x1a21c, 0x1a23c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("KK Ice Extras"), 0x1a27c, 0x1a29c },
    { _T("KK Banana"), 0x1a23c, 0x1a25c },
    { _T("KK Smoke"), 0x1a25c, 0x1a27c },
    { _T("KK Select Portrait"), 0x420bc, 0x420dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("KK Win Portrait"), 0x480bc, 0x4815c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AP[] =
{
    { _T("AP Sasquatch"), 0x1a29c, 0x1a2bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("AP Ice Extras"), 0x1a2fc, 0x1a31c },
    { _T("AP Banana"), 0x1a2bc, 0x1a2dc },
    { _T("AP Smoke"), 0x1a2dc, 0x1a2fc },
    { _T("AP Select Portrait"), 0x422bc, 0x422dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("AP Win Portrait"), 0x48bfc, 0x48c9c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AK[] =
{
    { _T("AK Sasquatch"), 0x1a31c, 0x1a33c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("AK Ice Extras"), 0x1a37c, 0x1a39c },
    { _T("AK Banana"), 0x1a33c, 0x1a35c },
    { _T("AK Smoke"), 0x1a35c, 0x1a37c },
    { _T("AK Select Portrait"), 0x424bc, 0x424dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("AK Win Portrait"), 0x4973c, 0x497dc },
};

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_1[] =
{
    { _T("Alt Zabel"), 0x1a79c, 0x1a7bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("Alt Zabel 64PP/63214KK/intro/winpose"), 0x1a7bc, 0x1a7dc },
    { _T("Alt Zabel Unused 1"), 0x1a7dc, 0x1a7fc },
    { _T("Alt Zabel Unused 2"), 0x1a7fc, 0x1a81c },
};

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_2[] =
{
    { _T("Alt Zabel 2 "), 0x1a81c, 0x1a83c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("Alt Zabel 2 64PP/63214KK/intro/winpos"), 0x1a83c, 0x1a85c },
    { _T("Alt Zabel 2 Unused 1"), 0x1a85c, 0x1a87c },
    { _T("Alt Zabel 2 Unused 2"), 0x1a87c, 0x1a89c },
};


// BUGBUG: TODO: The "Intro/ES 412PP  " entries

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LP[] =
{
    { _T("LP Q-Bee"), 0x1a89c, 0x1a8bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("LP Wings/Honey"), 0x1a8bc, 0x1a8dc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("LP Egg"), 0x1a8dc, 0x1a8fc },
    { _T("LP Bees"), 0x1a8fc, 0x1a91c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("LP Select Portrait"), 0x412fc, 0x4131c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("LP Win Portrait"), 0x4333c, 0x433dc },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MP[] =
{
    { _T("MP Q-Bee"), 0x1a91c, 0x1a93c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("MP Wings/Honey"), 0x1a93c, 0x1a95c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("MP Egg"), 0x1a95c, 0x1a97c },
    { _T("MP Bees"), 0x1a97c, 0x1a99c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("MP Select Portrait"), 0x414fc, 0x4151c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("MP Win Portrait"), 0x43e7c, 0x43f1c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HP[] =
{
    { _T("HP Q-Bee"), 0x1a99c, 0x1a9bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("HP Wings/Honey"), 0x1a9bc, 0x1a9dc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("HP Egg"), 0x1a9dc, 0x1a9fc },
    { _T("HP Bees"), 0x1a9fc, 0x1aa1c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("HP Select Portrait"), 0x416fc, 0x4171c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("HP Win Portrait"), 0x449bc, 0x44a5c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LK[] =
{
    { _T("LK Q-Bee"), 0x1aa1c, 0x1aa3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("LK Wings/Honey"), 0x1aa3c, 0x1aa5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("LK Egg"), 0x1aa5c, 0x1aa7c },
    { _T("LK Bees"), 0x1aa7c, 0x1aa9c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("LK Select Portrait"), 0x418fc, 0x4191c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("LK Win Portrait"), 0x454fc, 0x4559c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MK[] =
{
    { _T("MK Q-Bee"), 0x1aa9c, 0x1aabc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("MK Wings/Honey"), 0x1aabc, 0x1aadc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("MK Egg"), 0x1aadc, 0x1aafc },
    { _T("MK Bees"), 0x1aafc, 0x1ab1c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("MK Select Portrait"), 0x41afc, 0x41b1c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("MK Win Portrait"), 0x4603c, 0x460dc },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HK[] =
{
    { _T("HK Q-Bee"), 0x1ab1c, 0x1ab3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("HK Wings/Honey"), 0x1ab3c, 0x1ab5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("HK Egg"), 0x1ab5c, 0x1ab7c },
    { _T("HK Bees"), 0x1ab7c, 0x1ab9c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("HK Select Portrait"), 0x41cfc, 0x41d1c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("HK Win Portrait"), 0x46b7c, 0x46c1c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_PP[] =
{
    { _T("PP Q-Bee"), 0x1ab9c, 0x1abbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("PP Wings/Honey"), 0x1abbc, 0x1abdc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("PP Egg"), 0x1abdc, 0x1abfc },
    { _T("PP Bees"), 0x1abfc, 0x1ac1c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("PP Select Portrait"), 0x41efc, 0x41f1c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("PP Win Portrait"), 0x476bc, 0x4775c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_KK[] =
{
    { _T("KK Q-Bee"), 0x1ac1c, 0x1ac3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("KK Wings/Honey"), 0x1ac3c, 0x1ac5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("KK Egg"), 0x1ac5c, 0x1ac7c },
    { _T("KK Bees"), 0x1ac7c, 0x1ac9c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("KK Select Portrait"), 0x420fc, 0x4211c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("KK Win Portrait"), 0x481fc, 0x4829c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AP[] =
{
    { _T("AP Q-Bee"), 0x1ac9c, 0x1acbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("AP Wings/Honey"), 0x1acbc, 0x1acdc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("AP Egg"), 0x1acdc, 0x1acfc },
    { _T("AP Bees"), 0x1acfc, 0x1ad1c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("AP Select Portrait"), 0x422fc, 0x4231c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("AP Win Portrait"), 0x48d3c, 0x48ddc },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AK[] =
{
    { _T("AK Q-Bee"), 0x1ad1c, 0x1ad3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("AK Wings/Honey"), 0x1ad3c, 0x1ad5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("AK Egg"), 0x1ad5c, 0x1ad7c },
    { _T("AK Bees"), 0x1ad7c, 0x1ad9c, indexCPS2_Vamp_QBee, 0x0 },
    { _T("AK Select Portrait"), 0x424fc, 0x4251c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("AK Win Portrait"), 0x4987c, 0x4991c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LP[] =
{
    { _T("LP Lei-Lei"), 0x1ad9c, 0x1adbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("LP Lin-Lin"), 0x1adbc, 0x1addc },
    { _T("LP Dust, Weapons"), 0x1addc, 0x1adfc },
    { _T("LP Unknown Extra"), 0x1adfc, 0x1ae1c },
    { _T("LP Select Portrait"), 0x4131c, 0x4133c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("LP Win Portrait"), 0x433dc, 0x4347c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MP[] =
{
    { _T("MP Lei-Lei"), 0x1ae1c, 0x1ae3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("MP Lin-Lin"), 0x1ae3c, 0x1ae5c },
    { _T("MP Dust, Weapons"), 0x1ae5c, 0x1ae7c },
    { _T("MP Unknown Extra"), 0x1ae7c, 0x1ae9c },
    { _T("MP Select Portrait"), 0x4151c, 0x4153c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("MP Win Portrait"), 0x43f1c, 0x43fbc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HP[] =
{
    { _T("HP Lei-Lei"), 0x1ae9c, 0x1aebc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("HP Lin-Lin"), 0x1aebc, 0x1aedc },
    { _T("HP Dust, Weapons"), 0x1aedc, 0x1aefc },
    { _T("HP Unknown Extra"), 0x1aefc, 0x1af1c },
    { _T("HP Select Portrait"), 0x4171c, 0x4173c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("HP Win Portrait"), 0x44a5c, 0x44afc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LK[] =
{
    { _T("LK Lei-Lei"), 0x1af1c, 0x1af3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("LK Lin-Lin"), 0x1af3c, 0x1af5c },
    { _T("LK Dust, Weapons"), 0x1af5c, 0x1af7c },
    { _T("LK Unknown Extra"), 0x1af7c, 0x1af9c },
    { _T("LK Select Portrait"), 0x4191c, 0x4193c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("LK Win Portrait"), 0x4559c, 0x4563c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MK[] =
{
    { _T("MK Lei-Lei"), 0x1af9c, 0x1afbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("MK Lin-Lin"), 0x1afbc, 0x1afdc },
    { _T("MK Dust, Weapons"), 0x1afdc, 0x1affc },
    { _T("MK Unknown Extra"), 0x1affc, 0x1b01c },
    { _T("MK Select Portrait"), 0x41b1c, 0x41b3c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("MK Win Portrait"), 0x460dc, 0x4617c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HK[] =
{
    { _T("HK Lei-Lei"), 0x1b01c, 0x1b03c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("HK Lin-Lin"), 0x1b03c, 0x1b05c },
    { _T("HK Dust, Weapons"), 0x1b05c, 0x1b07c },
    { _T("HK Unknown Extra"), 0x1b07c, 0x1b09c },
    { _T("HK Select Portrait"), 0x41d1c, 0x41d3c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("HK Win Portrait"), 0x46c1c, 0x46cbc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_PP[] =
{
    { _T("PP Lei-Lei"), 0x1b09c, 0x1b0bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("PP Lin-Lin"), 0x1b0bc, 0x1b0dc },
    { _T("PP Dust, Weapons"), 0x1b0dc, 0x1b0fc },
    { _T("PP Unknown Extra"), 0x1b0fc, 0x1b11c },
    { _T("PP Select Portrait"), 0x41f1c, 0x41f3c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("PP Win Portrait"), 0x4775c, 0x477fc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_KK[] =
{
    { _T("KK Lei-Lei"), 0x1b11c, 0x1b13c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("KK Lin-Lin"), 0x1b13c, 0x1b15c },
    { _T("KK Dust, Weapons"), 0x1b15c, 0x1b17c },
    { _T("KK Unknown Extra"), 0x1b17c, 0x1b19c },
    { _T("KK Select Portrait"), 0x4211c, 0x4213c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("KK Win Portrait"), 0x4829c, 0x4833c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AP[] =
{
    { _T("AP Lei-Lei"), 0x1b19c, 0x1b1bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("AP Lin-Lin"), 0x1b1bc, 0x1b1dc },
    { _T("AP Dust, Weapons"), 0x1b1dc, 0x1b1fc },
    { _T("AP Unknown Extra"), 0x1b1fc, 0x1b21c },
    { _T("AP Select Portrait"), 0x4231c, 0x4233c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("AP Win Portrait"), 0x48ddc, 0x48e7c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AK[] =
{
    { _T("AK Lei-Lei"), 0x1b21c, 0x1b23c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("AK Lin-Lin"), 0x1b23c, 0x1b25c },
    { _T("AK Dust, Weapons"), 0x1b25c, 0x1b27c },
    { _T("AK Unknown Extra"), 0x1b27c, 0x1b29c },
    { _T("AK Select Portrait"), 0x4251c, 0x4253c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("AK Win Portrait"), 0x4991c, 0x499bc },
};


///// real lilith

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LP[] =
{
    { _T("LP Lilith"), 0x1b29c, 0x1b2bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("LP Hearts"), 0x1b2bc, 0x1b2dc },
    { _T("LP Luminous Illusion/62KKK bats"), 0x1b2dc, 0x1b2fc },
    { _T("LP Sparkles"), 0x1b2fc, 0x1b31c },
    { _T("LP Select Portrait"), 0x4133c, 0x4135c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("LP Win Portrait"), 0x4347c, 0x4351c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MP[] =
{
    { _T("MP Lilith"), 0x1b31c, 0x1b33c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("MP Hearts"), 0x1b33c, 0x1b35c },
    { _T("MP Luminous Illusion/62KKK bats"), 0x1b35c, 0x1b37c },
    { _T("MP Sparkles"), 0x1b37c, 0x1b39c },
    { _T("MP Select Portrait"), 0x4153c, 0x4155c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("MP Win Portrait"), 0x43fbc, 0x4405c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HP[] =
{
    { _T("HP Lilith"), 0x1b39c, 0x1b3bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("HP Hearts"), 0x1b3bc, 0x1b3dc },
    { _T("HP Luminous Illusion/62KKK bats"), 0x1b3dc, 0x1b3fc },
    { _T("HP Sparkles"), 0x1b3fc, 0x1b41c },
    { _T("HP Select Portrait"), 0x4173c, 0x4175c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("HP Win Portrait"), 0x44afc, 0x44b9c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LK[] =
{
    { _T("LK Lilith"), 0x1b41c, 0x1b43c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("LK Hearts"), 0x1b43c, 0x1b45c },
    { _T("LK Luminous Illusion/62KKK bats"), 0x1b45c, 0x1b47c },
    { _T("LK Sparkles"), 0x1b47c, 0x1b49c },
    { _T("LK Select Portrait"), 0x4193c, 0x4195c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("LK Win Portrait"), 0x4563c, 0x456dc },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MK[] =
{
    { _T("MK Lilith"), 0x1b49c, 0x1b4bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("MK Hearts"), 0x1b4bc, 0x1b4dc },
    { _T("MK Luminous Illusion/62KKK bats"), 0x1b4dc, 0x1b4fc },
    { _T("MK Sparkles"), 0x1b4fc, 0x1b51c },
    { _T("MK Select Portrait"), 0x41b3c, 0x41b5c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("MK Win Portrait"), 0x4617c, 0x4621c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HK[] =
{
    { _T("HK Lilith"), 0x1b51c, 0x1b53c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("HK Hearts"), 0x1b53c, 0x1b55c },
    { _T("HK Luminous Illusion/62KKK bats"), 0x1b55c, 0x1b57c },
    { _T("HK Sparkles"), 0x1b57c, 0x1b59c },
    { _T("HK Select Portrait"), 0x41d3c, 0x41d5c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("HK Win Portrait"), 0x46cbc, 0x46d5c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_PP[] =
{
    { _T("PP Lilith"), 0x1b59c, 0x1b5bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("PP Hearts"), 0x1b5bc, 0x1b5dc },
    { _T("PP Luminous Illusion/62KKK bats"), 0x1b5dc, 0x1b5fc },
    { _T("PP Sparkles"), 0x1b5fc, 0x1b61c },
    { _T("PP Select Portrait"), 0x41f3c, 0x41f5c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("PP Win Portrait"), 0x477fc, 0x4789c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_KK[] =
{
    { _T("KK Lilith"), 0x1b61c, 0x1b63c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("KK Hearts"), 0x1b63c, 0x1b65c },
    { _T("KK Luminous Illusion/62KKK bats"), 0x1b65c, 0x1b67c },
    { _T("KK Sparkles"), 0x1b67c, 0x1b69c },
    { _T("KK Select Portrait"), 0x4213c, 0x4215c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("KK Win Portrait"), 0x4833c, 0x483dc },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AP[] =
{
    { _T("AP Lilith"), 0x1b69c, 0x1b6bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("AP Hearts"), 0x1b6bc, 0x1b6dc },
    { _T("AP Luminous Illusion/62KKK bats"), 0x1b6dc, 0x1b6fc },
    { _T("AP Sparkles"), 0x1b6fc, 0x1b71c },
    { _T("AP Select Portrait"), 0x4233c, 0x4235c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("AP Win Portrait"), 0x48e7c, 0x48f1c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AK[] =
{
    { _T("AK Lilith"), 0x1b71c, 0x1b73c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("AK Hearts"), 0x1b73c, 0x1b75c },
    { _T("AK Luminous Illusion/62KKK bats"), 0x1b75c, 0x1b77c },
    { _T("AK Sparkles"), 0x1b77c, 0x1b79c },
    { _T("AK Select Portrait"), 0x4253c, 0x4255c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("AK Win Portrait"), 0x499bc, 0x49a5c },
};



const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LP[] =
{
    { _T("LP Jedah"), 0x1b79c, 0x1b7bc, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("LP Prova di Servo"), 0x1b7bc, 0x1b7dc },
    { _T("LP Blood"), 0x1b7dc, 0x1b7fc, indexCPS2_Vamp_Jedah, 1 },
    { _T("LP Intro"), 0x1b7fc, 0x1b81c },
    { _T("LP Select Portrait"), 0x4135c, 0x4137c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("LP Win Portrait"), 0x4351c, 0x435bc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MP[] =
{
    { _T("MP Jedah"), 0x1b81c, 0x1b83c, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("MP Prova di Servo"), 0x1b83c, 0x1b85c },
    { _T("MP Blood"), 0x1b85c, 0x1b87c, indexCPS2_Vamp_Jedah, 1 },
    { _T("MP Intro"), 0x1b87c, 0x1b89c },
    { _T("MP Select Portrait"), 0x4155c, 0x4157c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("MP Win Portrait"), 0x4405c, 0x440fc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HP[] =
{
    { _T("HP Jedah"), 0x1b89c, 0x1b8bc, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("HP Prova di Servo"), 0x1b8bc, 0x1b8dc },
    { _T("HP Blood"), 0x1b8dc, 0x1b8fc, indexCPS2_Vamp_Jedah, 1 },
    { _T("HP Intro"), 0x1b8fc, 0x1b91c },
    { _T("HP Select Portrait"), 0x4175c, 0x4177c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("HP Win Portrait"), 0x44b9c, 0x44c3c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LK[] =
{
	{ _T("LK Jedah"), 0x1b91c, 0x1b93c, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("LK Prova di Servo"), 0x1b93c, 0x1b95c },
    { _T("LK Blood"), 0x1b95c, 0x1b97c, indexCPS2_Vamp_Jedah, 1 },
    { _T("LK Intro"), 0x1b97c, 0x1b99c },
    { _T("LK Select Portrait"), 0x4195c, 0x4197c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("LK Win Portrait"), 0x456dc, 0x4577c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MK[] =
{
    { _T("MK Jedah"), 0x1b99c, 0x1b9bc, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("MK Prova di Servo"), 0x1b9bc, 0x1b9dc },
    { _T("MK Blood"), 0x1b9dc, 0x1b9fc, indexCPS2_Vamp_Jedah, 1 },
    { _T("MK Intro"), 0x1b9fc, 0x1ba1c },
    { _T("MK Select Portrait"), 0x41b5c, 0x41b7c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("MK Win Portrait"), 0x4621c, 0x462bc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HK[] =
{
    { _T("HK Jedah"), 0x1ba1c, 0x1ba3c, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("HK Prova di Servo"), 0x1ba3c, 0x1ba5c },
    { _T("HK Blood"), 0x1ba5c, 0x1ba7c, indexCPS2_Vamp_Jedah, 1 },
    { _T("HK Intro"), 0x1ba7c, 0x1ba9c },
    { _T("HK Select Portrait"), 0x41d5c, 0x41d7c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("HK Win Portrait"), 0x46d5c, 0x46dfc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_PP[] =
{
    { _T("PP Jedah"), 0x1ba9c, 0x1babc, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("PP Prova di Servo"), 0x1babc, 0x1badc },
    { _T("PP Blood"), 0x1badc, 0x1bafc, indexCPS2_Vamp_Jedah, 1 },
    { _T("PP Intro"), 0x1bafc, 0x1bb1c },
    { _T("PP Select Portrait"), 0x41f5c, 0x41f7c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("PP Win Portrait"), 0x4789c, 0x4793c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_KK[] =
{
    { _T("KK Jedah"), 0x1bb1c, 0x1bb3c, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("KK Prova di Servo"), 0x1bb3c, 0x1bb5c },
    { _T("KK Blood"), 0x1bb5c, 0x1bb7c, indexCPS2_Vamp_Jedah, 1 },
    { _T("KK Intro"), 0x1bb7c, 0x1bb9c },
    { _T("KK Select Portrait"), 0x4215c, 0x4217c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("KK Win Portrait"), 0x483dc, 0x4847c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AP[] =
{
    { _T("AP Jedah"), 0x1bb9c, 0x1bbbc, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("AP Prova di Servo"), 0x1bbbc, 0x1bbdc },
    { _T("AP Blood"), 0x1bbdc, 0x1bbfc, indexCPS2_Vamp_Jedah, 1 },
    { _T("AP Intro"), 0x1bbfc, 0x1bc1c },
    { _T("AP Select Portrait"), 0x4235c, 0x4237c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("AP Win Portrait"), 0x48f1c, 0x48fbc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AK[] =
{
    { _T("AK Jedah"), 0x1bc1c, 0x1bc3c, indexCPS2_Vamp_Jedah, 0x0, &pairNextNext },
    { _T("AK Prova di Servo"), 0x1bc3c, 0x1bc5c },
    { _T("AK Blood"), 0x1bc5c, 0x1bc7c, indexCPS2_Vamp_Jedah, 1 },
    { _T("AK Intro"), 0x1bc7c, 0x1bc9c },
    { _T("AK Select Portrait"), 0x4255c, 0x4257c, indexCPS2_Vamp_Jedah, 0x20 },
    { _T("AK Win Portrait"), 0x49a5c, 0x49afc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_SHARED[] =
{
    { _T("Shared blood"),           0x35a9c, 0x35abc },
    { _T("Shared blood 2"),         0x35abc, 0x35adc },
    { _T("Shared Prova di Servo "), 0x35adc, 0x35afc },
    { _T("Shared Prova di Servo 2"), 0x35afc, 0x35b1c },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LP[] =
{
    { _T("LP Phobos"),          0x1bc9c, 0x1bcbc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("LP Unknown Extra 1"), 0x1bcbc, 0x1bcdc },
    { _T("LP Unknown Extra 2"), 0x1bcdc, 0x1bcfc },
    { _T("LP Cecil"),           0x1bcfc, 0x1bd1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MP[] =
{
    { _T("MP Phobos"),          0x1bd1c, 0x1bd3c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("MP Unknown Extra 1"), 0x1bd3c, 0x1bd5c },
    { _T("MP Unknown Extra 2"), 0x1bd5c, 0x1bd7c },
    { _T("MP Cecil"),           0x1bd7c, 0x1bd9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HP[] =
{
    { _T("HP Phobos"),          0x1bd9c, 0x1bdbc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("HP Unknown Extra 1"), 0x1bdbc, 0x1bddc },
    { _T("HP Unknown Extra 2"), 0x1bddc, 0x1bdfc },
    { _T("HP Cecil"),           0x1bdfc, 0x1be1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LK[] =
{
    { _T("LK Phobos"),          0x1be1c, 0x1be3c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("LK Unknown Extra 1"), 0x1be3c, 0x1be5c },
    { _T("LK Unknown Extra 2"), 0x1be5c, 0x1be7c },
    { _T("LK Cecil"),           0x1be7c, 0x1be9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MK[] =
{
    { _T("MK Phobos"),          0x1be9c, 0x1bebc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("MK Unknown Extra 1"), 0x1bebc, 0x1bedc },
    { _T("MK Unknown Extra 2"), 0x1bedc, 0x1befc },
    { _T("MK Cecil"),           0x1befc, 0x1bf1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HK[] =
{
    { _T("HK Phobos"),          0x1bf1c, 0x1bf3c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("HK Unknown Extra 1"), 0x1bf3c, 0x1bf5c },
    { _T("HK Unknown Extra 2"), 0x1bf5c, 0x1bf7c },
    { _T("HK Cecil"),           0x1bf7c, 0x1bf9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_PP[] =
{
    { _T("PP Phobos"),          0x1bf9c, 0x1bfbc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("PP Unknown Extra 1"), 0x1bfbc, 0x1bfdc },
    { _T("PP Unknown Extra 2"), 0x1bfdc, 0x1bffc },
    { _T("PP Cecil"),           0x1bffc, 0x1c01c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_KK[] =
{
    { _T("KK Phobos"),          0x1c01c, 0x1c03c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("KK Unknown Extra 1"), 0x1c03c, 0x1c05c },
    { _T("KK Unknown Extra 2"), 0x1c05c, 0x1c07c },
    { _T("KK Cecil"),           0x1c07c, 0x1c09c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AP[] =
{
    { _T("AP Phobos"),          0x1c09c, 0x1c0bc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("AP Unknown Extra 1"), 0x1c0bc, 0x1c0dc },
    { _T("AP Unknown Extra 2"), 0x1c0dc, 0x1c0fc },
    { _T("AP Cecil"),           0x1c0fc, 0x1c11c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AK[] =
{
    { _T("AK Phobos"),          0x1c11c, 0x1c13c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("AK Unknown Extra 1"), 0x1c13c, 0x1c15c },
    { _T("AK Unknown Extra 2"), 0x1c15c, 0x1c17c },
    { _T("AK Cecil"),           0x1c17c, 0x1c19c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LP[] =
{
    { _T("LP Pyron"),           0x1c19c, 0x1c1bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("LP Unknown Extra 1"), 0x1c1bc, 0x1c1dc },
    { _T("LP Unknown Extra 2"), 0x1c1dc, 0x1c1fc },
    { _T("LP Unknown Extra 3"), 0x1c1fc, 0x1c21c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MP[] =
{
    { _T("MP Pyron"),           0x1c21c, 0x1c23c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("MP Unknown Extra 1"), 0x1c23c, 0x1c25c },
    { _T("MP Unknown Extra 2"), 0x1c25c, 0x1c27c },
    { _T("MP Unknown Extra 3"), 0x1c27c, 0x1c29c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HP[] =
{
    { _T("HP Pyron"),           0x1c29c, 0x1c2bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("HP Unknown Extra 1"), 0x1c2bc, 0x1c2dc },
    { _T("HP Unknown Extra 2"), 0x1c2dc, 0x1c2fc },
    { _T("HP Unknown Extra 3"), 0x1c2fc, 0x1c31c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LK[] =
{
    { _T("LK Pyron"),           0x1c31c, 0x1c33c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("LK Unknown Extra 1"), 0x1c33c, 0x1c35c },
    { _T("LK Unknown Extra 2"), 0x1c35c, 0x1c37c },
    { _T("LK Unknown Extra 3"), 0x1c37c, 0x1c39c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MK[] =
{
    { _T("MK Pyron"),           0x1c39c, 0x1c3bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("MK Unknown Extra 1"), 0x1c3bc, 0x1c3dc },
    { _T("MK Unknown Extra 2"), 0x1c3dc, 0x1c3fc },
    { _T("MK Unknown Extra 3"), 0x1c3fc, 0x1c41c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HK[] =
{
    { _T("HK Pyron"),           0x1c41c, 0x1c43c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("HK Unknown Extra 1"), 0x1c43c, 0x1c45c },
    { _T("HK Unknown Extra 2"), 0x1c45c, 0x1c47c },
    { _T("HK Unknown Extra 3"), 0x1c47c, 0x1c49c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_PP[] =
{
    { _T("PP Pyron"),           0x1c49c, 0x1c4bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("PP Unknown Extra 1"), 0x1c4bc, 0x1c4dc },
    { _T("PP Unknown Extra 2"), 0x1c4dc, 0x1c4fc },
    { _T("PP Unknown Extra 3"), 0x1c4fc, 0x1c51c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_KK[] =
{
    { _T("KK Pyron"),           0x1c51c, 0x1c53c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("KK Unknown Extra 1"), 0x1c53c, 0x1c55c },
    { _T("KK Unknown Extra 2"), 0x1c55c, 0x1c57c },
    { _T("KK Unknown Extra 3"), 0x1c57c, 0x1c59c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AP[] =
{
    { _T("AP Pyron"),           0x1c59c, 0x1c5bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("AP Unknown Extra 1"), 0x1c5bc, 0x1c5dc },
    { _T("AP Unknown Extra 2"), 0x1c5dc, 0x1c5fc },
    { _T("AP Unknown Extra 3"), 0x1c5fc, 0x1c61c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AK[] =
{
    { _T("AK Pyron"),           0x1c61c, 0x1c63c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("AK Unknown Extra 1"), 0x1c63c, 0x1c65c },
    { _T("AK Unknown Extra 2"), 0x1c65c, 0x1c67c },
    { _T("AK Unknown Extra 3"), 0x1c67c, 0x1c69c, indexCPS2_Vamp_Pyron, 0x0 },
};

// portraits / dark effects

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LP[] =
{
    { _T("LP Dark Gallon"), 0x1C69C, 0x1c1bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LP Intro/Outro"), 0x1c1bc + 0x500, 0x1c1dc + 0x500 },
    { _T("LP 236P/41236KK/j.HP"), 0x1c1dc + 0x500, 0x1c1fc + 0x500 },
    { _T("LP 236P/28K/Outro Flash"), 0x1c1fc + 0x500, 0x1c21c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MP[] =
{
    { _T("MP Dark Gallon"), 0x1c21c + 0x500, 0x1c23c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MP Intro/Outro"), 0x1c23c + 0x500, 0x1c25c + 0x500 },
    { _T("MP 236P/41236KK/j.HP"), 0x1c25c + 0x500, 0x1c27c + 0x500 },
    { _T("MP 236P/28K/Outro Flash"), 0x1c27c + 0x500, 0x1c29c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HP[] =
{
    { _T("HP Dark Gallon"), 0x1c29c + 0x500, 0x1c2bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HP Intro/Outro"), 0x1c2bc + 0x500, 0x1c2dc + 0x500 },
    { _T("HP 236P/41236KK/j.HP"), 0x1c2dc + 0x500, 0x1c2fc + 0x500 },
    { _T("HP 236P/28K/Outro Flash"), 0x1c2fc + 0x500, 0x1c31c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LK[] =
{
    { _T("LK Dark Gallon"), 0x1c31c + 0x500, 0x1c33c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LK Intro/Outro"), 0x1c33c + 0x500, 0x1c35c + 0x500 },
    { _T("LK 236P/41236KK/j.HP"), 0x1c35c + 0x500, 0x1c37c + 0x500 },
    { _T("LK 236P/28K/Outro Flash"), 0x1c37c + 0x500, 0x1c39c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MK[] =
{
    { _T("MK Dark Gallon"), 0x1c39c + 0x500, 0x1c3bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MK Intro/Outro"), 0x1c3bc + 0x500, 0x1c3dc + 0x500 },
    { _T("MK 236P/41236KK/j.HP"), 0x1c3dc + 0x500, 0x1c3fc + 0x500 },
    { _T("MK 236P/28K/Outro Flash"), 0x1c3fc + 0x500, 0x1c41c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HK[] =
{
    { _T("HK Dark Gallon"), 0x1c41c + 0x500, 0x1c43c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HK Intro/Outro"), 0x1c43c + 0x500, 0x1c45c + 0x500 },
    { _T("HK 236P/41236KK/j.HP"), 0x1c45c + 0x500, 0x1c47c + 0x500 },
    { _T("HK 236P/28K/Outro Flash"), 0x1c47c + 0x500, 0x1c49c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_PP[] =
{
    { _T("PP Dark Gallon"), 0x1c49c + 0x500, 0x1c4bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("PP Intro/Outro"), 0x1c4bc + 0x500, 0x1c4dc + 0x500 },
    { _T("PP 236P/41236KK/j.HP"), 0x1c4dc + 0x500, 0x1c4fc + 0x500 },
    { _T("PP 236P/28K/Outro Flash"), 0x1c4fc + 0x500, 0x1c51c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_KK[] =
{
    { _T("KK Dark Gallon"), 0x1c51c + 0x500, 0x1c53c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("KK Intro/Outro"), 0x1c53c + 0x500, 0x1c55c + 0x500 },
    { _T("KK 236P/41236KK/j.HP"), 0x1c55c + 0x500, 0x1c57c + 0x500 },
    { _T("KK 236P/28K/Outro Flash"), 0x1c57c + 0x500, 0x1c59c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AP[] =
{
    { _T("AP Dark Gallon"), 0x1c59c + 0x500, 0x1c5bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AP Intro/Outro"), 0x1c5bc + 0x500, 0x1c5dc + 0x500 },
    { _T("AP 236P/41236KK/j.HP"), 0x1c5dc + 0x500, 0x1c5fc + 0x500 },
    { _T("AP 236P/28K/Outro Flash"), 0x1c5fc + 0x500, 0x1c61c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AK[] =
{
    { _T("AK Dark Gallon"), 0x1c61c + 0x500, 0x1c63c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AK Intro/Outro"), 0x1c63c + 0x500, 0x1c65c + 0x500 },
    { _T("AK 236P/41236KK/j.HP"), 0x1c65c + 0x500, 0x1c67c + 0x500 },
    { _T("AK 236P/28K/Outro Flash"), 0x1c67c + 0x500, 0x1CB9C },
};



const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LP[] =
{
    //bugbug: portraits maybe at 0x3649c or a // 3b61c  3bafc  
    { _T("LP Donovan"),         0x1cb9c, 0x1cbbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("LP Unknown Extra"),   0x1cbbc, 0x1cbdc },
    { _T("LP Weapons"),         0x1cbdc, 0x1cbfc, indexCPS2_Anita, 1 },
    { _T("LP Anita"),           0x1cbfc, 0x1cc1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MP[] =
{
    { _T("MP Donovan"),         0x1cc1c, 0x1cc3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("MP Unknown Extra"),   0x1cc3c, 0x1cc5c },
    { _T("MP Weapons"),         0x1cc5c, 0x1cc7c, indexCPS2_Anita, 1 },
    { _T("MP Anita"),           0x1cc7c, 0x1cc9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HP[] =
{
    { _T("HP Donovan"),         0x1cc9c, 0x1ccbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("HP Unknown Extra"),   0x1ccbc, 0x1ccdc },
    { _T("HP Weapons"),         0x1ccdc, 0x1ccfc, indexCPS2_Anita, 1 },
    { _T("HP Anita"),           0x1ccfc, 0x1cd1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LK[] =
{
    { _T("LK Donovan"),         0x1cd1c, 0x1cd3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("LK Unknown Extra"),   0x1cd3c, 0x1cd5c },
    { _T("LK Weapons"),         0x1cd5c, 0x1cd7c, indexCPS2_Anita, 1 },
    { _T("LK Anita"),           0x1cd7c, 0x1cd9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MK[] =
{
    { _T("MK Donovan"),         0x1cd9c, 0x1cdbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("MK Unknown Extra"),   0x1cdbc, 0x1cddc },
    { _T("MK Weapons"),         0x1cddc, 0x1cdfc, indexCPS2_Anita, 1 },
    { _T("MK Anita"),           0x1cdfc, 0x1ce1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HK[] =
{
    { _T("HK Donovan"),         0x1ce1c, 0x1ce3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("HK Unknown Extra"),   0x1ce3c, 0x1ce5c },
    { _T("HK Weapons"),         0x1ce5c, 0x1ce7c, indexCPS2_Anita, 1 },
    { _T("HK Anita"),           0x1ce7c, 0x1ce9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_PP[] =
{
    { _T("PP Donovan"),         0x1ce9c, 0x1cebc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("PP Unknown Extra"),   0x1cebc, 0x1cedc },
    { _T("PP Weapons"),         0x1cedc, 0x1cefc, indexCPS2_Anita, 1 },
    { _T("PP Anita"),           0x1cefc, 0x1cf1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_KK[] =
{
    { _T("KK Donovan"),         0x1cf1c, 0x1cf3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("KK Unknown Extra"),   0x1cf3c, 0x1cf5c },
    { _T("KK Weapons"),         0x1cf5c, 0x1cf7c, indexCPS2_Anita, 1 },
    { _T("KK Anita"),           0x1cf7c, 0x1cf9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AP[] =
{
    { _T("AP Donovan"),         0x1cf9c, 0x1cfbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("AP Unknown Extra"),   0x1cfbc, 0x1cfdc },
    { _T("AP Weapons"),         0x1cfdc, 0x1cffc, indexCPS2_Anita, 1 },
    { _T("AP Anita"),           0x1cffc, 0x1d01c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AK[] =
{
    { _T("AK Donovan"),         0x1d01c, 0x1d03c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("AK Unknown Extra"),   0x1d03c, 0x1d05c },
    { _T("AK Weapons"),         0x1d05c, 0x1d07c, indexCPS2_Anita, 1 },
    { _T("AK Anita"),           0x1d07c, 0x1d09c, indexCPS2_Anita, 0 },
};


const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_LP[] =
{
    { _T("LP Unknown"),         0x1d09c, 0x1d0bc },
    { _T("LP Unknown Extra 1"), 0x1d0bc, 0x1d0dc },
    { _T("LP Unknown Extra 2"), 0x1d0dc, 0x1d0fc },
    { _T("LP Unknown Extra 3"), 0x1d0fc, 0x1d11c },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_MP[] =
{
    { _T("MP Unknown"),          0x1d11c, 0x1d13c },
    { _T("MP Unknown Extra 1"), 0x1d13c, 0x1d15c },
    { _T("MP Unknown Extra 2"), 0x1d15c, 0x1d17c },
    { _T("MP Unknown Extra 3"), 0x1d17c, 0x1d19c },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_HP[] =
{
    { _T("HP Unknown"),          0x1d19c, 0x1c1bc + 0x1000 },
    { _T("HP Unknown Extra 1"), 0x1c1bc + 0x1000, 0x1c1dc + 0x1000 },
    { _T("HP Unknown Extra 2"), 0x1c1dc + 0x1000, 0x1c1fc + 0x1000 },
    { _T("HP Unknown Extra 3"), 0x1c1fc + 0x1000, 0x1c21c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_LK[] =
{
    { _T("LK Unknown"),          0x1c21c + 0x1000, 0x1c23c + 0x1000 },
    { _T("LK Unknown Extra 1"), 0x1c23c + 0x1000, 0x1c25c + 0x1000 },
    { _T("LK Unknown Extra 2"), 0x1c25c + 0x1000, 0x1c27c + 0x1000 },
    { _T("LK Unknown Extra 3"), 0x1c27c + 0x1000, 0x1c29c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_MK[] =
{
    { _T("MK Unknown"),          0x1c29c + 0x1000, 0x1c2bc + 0x1000 },
    { _T("MK Unknown Extra 1"), 0x1c2bc + 0x1000, 0x1c2dc + 0x1000 },
    { _T("MK Unknown Extra 2"), 0x1c2dc + 0x1000, 0x1c2fc + 0x1000 },
    { _T("MK Unknown Extra 3"), 0x1c2fc + 0x1000, 0x1c31c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_HK[] =
{
    { _T("HK Unknown"),          0x1c31c + 0x1000, 0x1c33c + 0x1000 },
    { _T("HK Unknown Extra 1"), 0x1c33c + 0x1000, 0x1c35c + 0x1000 },
    { _T("HK Unknown Extra 2"), 0x1c35c + 0x1000, 0x1c37c + 0x1000 },
    { _T("HK Unknown Extra 3"), 0x1c37c + 0x1000, 0x1c39c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_PP[] =
{
    { _T("PP Unknown"),          0x1c39c + 0x1000, 0x1c3bc + 0x1000 },
    { _T("PP Unknown Extra 1"), 0x1c3bc + 0x1000, 0x1c3dc + 0x1000 },
    { _T("PP Unknown Extra 2"), 0x1c3dc + 0x1000, 0x1c3fc + 0x1000 },
    { _T("PP Unknown Extra 3"), 0x1c3fc + 0x1000, 0x1c41c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_KK[] =
{
    { _T("KK Unknown"),          0x1c41c + 0x1000, 0x1c43c + 0x1000 },
    { _T("KK Unknown Extra 1"), 0x1c43c + 0x1000, 0x1c45c + 0x1000 },
    { _T("KK Unknown Extra 2"), 0x1c45c + 0x1000, 0x1c47c + 0x1000 },
    { _T("KK Unknown Extra 3"), 0x1c47c + 0x1000, 0x1c49c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_AP[] =
{
    { _T("AP Unknown"),          0x1c49c + 0x1000, 0x1c4bc + 0x1000 },
    { _T("AP Unknown Extra 1"), 0x1c4bc + 0x1000, 0x1c4dc + 0x1000 },
    { _T("AP Unknown Extra 2"), 0x1c4dc + 0x1000, 0x1c4fc + 0x1000 },
    { _T("AP Unknown Extra 3"), 0x1c4fc + 0x1000, 0x1c51c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_AK[] =
{
    { _T("AK Unknown"),          0x1c51c + 0x1000, 0x1c53c + 0x1000 },
    { _T("AK Unknown Extra 1"), 0x1c53c + 0x1000, 0x1c55c + 0x1000 },
    { _T("AK Unknown Extra 2"), 0x1c55c + 0x1000, 0x1c57c + 0x1000 },
    { _T("AK Unknown Extra 3"), 0x1c57c + 0x1000, 0x1c59c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { _T("LP Oboro Bishamon"),    0x1c59c + 0x1000, 0x1c5bc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Intro"), 0x1c5bc + 0x1000, 0x1c5dc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Ghosts/Hitsparks"), 0x1c5dc + 0x1000, 0x1c5fc + 0x1000 },
    { _T("LP Unknown Extra"), 0x1c5fc + 0x1000, 0x1c61c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { _T("MP Oboro Bishamon"),    0x1c61c + 0x1000, 0x1c63c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Intro"), 0x1c63c + 0x1000, 0x1c65c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Ghosts/Hitsparks"), 0x1c65c + 0x1000, 0x1c67c + 0x1000 },
    { _T("MP Unknown Extra"), 0x1c67c + 0x1000, 0x1c69c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { _T("HP Oboro Bishamon"),     0x1c19c + 0x1500, 0x1c1bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Intro"), 0x1c1bc + 0x1500, 0x1c1dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Ghosts/Hitsparks"), 0x1c1dc + 0x1500, 0x1c1fc + 0x1500 },
    { _T("HP Unknown Extra"), 0x1c1fc + 0x1500, 0x1c21c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { _T("LK Oboro Bishamon"),     0x1c21c + 0x1500, 0x1c23c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Intro"), 0x1c23c + 0x1500, 0x1c25c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Ghosts/Hitsparks"), 0x1c25c + 0x1500, 0x1c27c + 0x1500 },
    { _T("LK Unknown Extra"), 0x1c27c + 0x1500, 0x1c29c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { _T("MK Oboro Bishamon"),     0x1c29c + 0x1500, 0x1c2bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Intro"), 0x1c2bc + 0x1500, 0x1c2dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Ghosts/Hitsparks"), 0x1c2dc + 0x1500, 0x1c2fc + 0x1500 },
    { _T("MK Unknown Extra"), 0x1c2fc + 0x1500, 0x1c31c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { _T("HK Oboro Bishamon"),     0x1c31c + 0x1500, 0x1c33c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Intro"), 0x1c33c + 0x1500, 0x1c35c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Ghosts/Hitsparks"), 0x1c35c + 0x1500, 0x1c37c + 0x1500 },
    { _T("HK Unknown Extra"), 0x1c37c + 0x1500, 0x1c39c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { _T("PP Oboro Bishamon"),     0x1c39c + 0x1500, 0x1c3bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Intro"), 0x1c3bc + 0x1500, 0x1c3dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Ghosts/Hitsparks"), 0x1c3dc + 0x1500, 0x1c3fc + 0x1500 },
    { _T("PP Unknown Extra"), 0x1c3fc + 0x1500, 0x1c41c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { _T("KK Oboro Bishamon"),     0x1c41c + 0x1500, 0x1c43c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Intro"), 0x1c43c + 0x1500, 0x1c45c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Ghosts/Hitsparks"), 0x1c45c + 0x1500, 0x1c47c + 0x1500 },
    { _T("KK Unknown Extra"), 0x1c47c + 0x1500, 0x1c49c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { _T("AP Oboro Bishamon"),     0x1c49c + 0x1500, 0x1c4bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Intro"), 0x1c4bc + 0x1500, 0x1c4dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Ghosts/Hitsparks"), 0x1c4dc + 0x1500, 0x1c4fc + 0x1500 },
    { _T("AP Unknown Extra"), 0x1c4fc + 0x1500, 0x1c51c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { _T("AK Oboro Bishamon"),      0x1DA1C, 0x1c53c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Intro"),               0x1c53c + 0x1500, 0x1c55c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Ghosts/Hitsparks"),    0x1c55c + 0x1500, 0x1c57c + 0x1500 },
    { _T("AK Unknown Extra"),       0x1c57c + 0x1500, 0x1DA9C },
};

const sGame_PaletteDataset VSAV2_A_ENDING_PALETTES_PORTRAITS[] =
{
    { _T("Bulleta Portrait"),    0x4257c, 0x4259c, indexCPS2_BBHood, 0x20 },
    { _T("Demitri Portrait"),    0x4259c, 0x425bc, indexCPS2_Vamp_Demitri, 0x20 },
    { _T("Gallon Portrait"),     0x425bc, 0x425dc, indexCPS2_Vamp_Gallon, 0x20 },
    { _T("Victor Portrait"),     0x425dc, 0x425fc, indexCPS2_Vamp_Victor, 0x20 },
    { _T("Zabel Portrait"),      0x425fc, 0x4261c, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("Morrigan Portrait"),   0x4261c, 0x4263c, indexCPS2_Morrigan, 0x20 },
    { _T("Anakaris Portrait"),   0x4263c, 0x4265c, indexCPS2_Anakaris, 0x20 },
    { _T("Felicia Portrait"),    0x4265c, 0x4267c, indexCPS2_Felicia, 0x20 },
    { _T("Bishamon Portrait"),   0x4267c, 0x4269c, indexCPS2_Vamp_Bishamon, 0x20 },
    { _T("Aulbath Portrait"),    0x4269c, 0x426bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { _T("Sasquatch Portrait"),  0x426bc, 0x426dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { _T("Alt Zabel Portrait"),  0x426dc, 0x426fc, indexCPS2_Vamp_Zabel, 0x20 },
    { _T("Q-Bee Portrait"),      0x426fc, 0x4271c, indexCPS2_Vamp_QBee, 0x20 },
    { _T("Lei-Lei Portrait"),    0x4271c, 0x4273c, indexCPS2_Vamp_LeiLei, 0x20 },
    { _T("Lilith Portrait"),     0x4273c, 0x4275c, indexCPS2_Vamp_Lilith, 0x20 },
    { _T("Jedah Portrait"),      0x4275c, 0x4277c, indexCPS2_Vamp_Jedah, 0x20 },
};

const sDescTreeNode VSAV2_A_BULLETA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_LP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_MP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_HP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_LK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_MK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_HK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_PP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_KK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_AP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_AK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_DEMITRI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_MK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_PP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_KK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_AP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_AK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_GALLON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_GALLON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_VICTOR_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_MK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_PP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_KK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_AP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_AK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV2_A_Victor_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Victor_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_ZABEL_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_LP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_MP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_HP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_LK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_MK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_HK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_PP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_KK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_AP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_AK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_AK) },
    { _T("Special"), DESC_NODETYPE_TREE, (void*)VSAV2_A_Zabel_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Zabel_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_MORRIGAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_LP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_MP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_HP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_LK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_MK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_HK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_PP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_KK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_AP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_AK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_ANAKARIS_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_MK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_PP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_KK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_AP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_AK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_FELICIA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_MK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_PP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_KK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_AP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_AK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_BISHAMON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_AULBATH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_MK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_PP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_KK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_AP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_AK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_SASQUATCH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_LP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_MP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_HP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_LK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_MK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_HK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_PP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_KK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_AP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_AK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_ALTZABEL_COLLECTION[] =
{
    { _T("Alt Zabel"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_PALETTES_1,  ARRAYSIZE(VSAV2_A_ALTZABEL_PALETTES_1) },
    { _T("Alt Zabel"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_PALETTES_2,  ARRAYSIZE(VSAV2_A_ALTZABEL_PALETTES_2) },
};

const sDescTreeNode VSAV2_A_QUEENBEE_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_LP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_MP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_HP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_LK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_MK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_HK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_PP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_KK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_AP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_AK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_LEILEI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_MK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_PP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_KK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_AP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_AK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_LILITH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_LP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_MP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_HP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_LK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_MK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_HK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_PP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_KK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_AP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_AK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_JEDAH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_LP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_MP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_HP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_LK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_MK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_HK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_PP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_KK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_AP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_AK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_AK) },
    { _T("Shared"), DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV2_A_PHOBOS_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_LP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_MP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_HP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_LK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_MK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_HK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_PP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_KK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_AP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_AK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_PYRON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_DARKGALLON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_UNKNOWN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_LP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_MP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_HP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_LK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_MK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_HK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_PP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_KK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_AP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_AK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_OBOROBISHAMON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_DONOVAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_LP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_MP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_HP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_LK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_MK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_HK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_PP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_KK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_AP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_AK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_ENDING_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)VSAV2_A_ENDING_PALETTES_PORTRAITS,  ARRAYSIZE(VSAV2_A_ENDING_PALETTES_PORTRAITS) },
};

const sDescTreeNode VSAV2_UNITS[] =
{
    { _T("Bulleta"),            DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_COLLECTION,       ARRAYSIZE(VSAV2_A_BULLETA_COLLECTION) }, // BB-Hood
    { _T("Demitri"),            DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_COLLECTION,       ARRAYSIZE(VSAV2_A_DEMITRI_COLLECTION) },
    // next is the unplayable gallon: moved to end
    { _T("Victor"),             DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_COLLECTION,        ARRAYSIZE(VSAV2_A_VICTOR_COLLECTION) },
    { _T("Zabel"),              DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_COLLECTION,         ARRAYSIZE(VSAV2_A_ZABEL_COLLECTION) }, // Lord Raptor
    { _T("Morrigan"),           DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VSAV2_A_MORRIGAN_COLLECTION) },
    { _T("Anakaris"),           DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VSAV2_A_ANAKARIS_COLLECTION) },
    { _T("Felicia"),            DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_COLLECTION,       ARRAYSIZE(VSAV2_A_FELICIA_COLLECTION) },
    { _T("Bishamon"),           DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_COLLECTION,      ARRAYSIZE(VSAV2_A_BISHAMON_COLLECTION) },
    // next is the unplayable aulbath: moved to end
    // next is the unplayable sasquatch: moved to end

    { _T("Alt Zabel"),          DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_COLLECTION,      ARRAYSIZE(VSAV2_A_ALTZABEL_COLLECTION) },

    { _T("Q-Bee"),              DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VSAV2_A_QUEENBEE_COLLECTION) },
    { _T("Lei-Lei"),            DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_COLLECTION,        ARRAYSIZE(VSAV2_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { _T("Lilith"),             DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_COLLECTION,        ARRAYSIZE(VSAV2_A_LILITH_COLLECTION) },
    { _T("Jedah"),              DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_COLLECTION,         ARRAYSIZE(VSAV2_A_JEDAH_COLLECTION) },

    { _T("Phobos"),             DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_COLLECTION,        ARRAYSIZE(VSAV2_A_PHOBOS_COLLECTION) },
    { _T("Pyron"),              DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_COLLECTION,         ARRAYSIZE(VSAV2_A_PYRON_COLLECTION) },
    { _T("Donovan"),            DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_COLLECTION,       ARRAYSIZE(VSAV2_A_DONOVAN_COLLECTION) },
    //{ _T("Unknown"),          DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_COLLECTION,       ARRAYSIZE(VSAV2_A_UNKNOWN_COLLECTION) },
    { _T("Oboro Bishamon"),     DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VSAV2_A_OBOROBISHAMON_COLLECTION) },
    { _T("Ending Portraits"),   DESC_NODETYPE_TREE, (void*)VSAV2_A_ENDING_COLLECTION,       ARRAYSIZE(VSAV2_A_ENDING_COLLECTION) },
    { _T("Gallon (unplayable)"), DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_COLLECTION,       ARRAYSIZE(VSAV2_A_GALLON_COLLECTION) }, // Jon Talbain
    { _T("Aulbath (unplayable)"), DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_COLLECTION,     ARRAYSIZE(VSAV2_A_AULBATH_COLLECTION) }, // Rikuo
    { _T("Sasquatch (unplayable)"), DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_COLLECTION, ARRAYSIZE(VSAV2_A_SASQUATCH_COLLECTION) },
    { _T("Dark Gallon (unplayable)"), DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_COLLECTION, ARRAYSIZE(VSAV2_A_DARKGALLON_COLLECTION) },
};

constexpr auto VSAV2_A_NUMUNIT = ARRAYSIZE(VSAV2_UNITS);

#define VSAV2_A_EXTRALOC VSAV2_A_NUMUNIT

// We extend this array with data groveled from the VSAV2e.txt extensible extras file, if any.
const stExtraDef VSAV2_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to SVG_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 SVG_SNES_IMGIDS_USED[] =
{
    indexSVGSprites_Ayako,              // 0x64
    indexSVGSprites_Chiho,              // 0x65
    indexSVGSprites_Erina,              // 0x66
    indexSVGSprites_Jun,                // 0x67
    indexSVGSprites_Kaori,              // 0x68
    indexSVGSprites_Manami,             // 0x69
    indexSVGSprites_Reimi,              // 0x6A
    indexSVGSprites_Satomi,             // 0x6B
    indexSVGSprites_Yuka,               // 0x6C
    indexSVGSprites_Bonus,              // 0x6D
};

const sGame_PaletteDataset SVG_SNES_YUKA_P1_PALETTES[] =
{
    { L"Yuka Takeuchi P1", 0xC9D0, 0xC9F0, indexSVGSprites_Yuka },
    { L"Yuka Takeuchi P1 Portrait", 0xBAB0, 0xBAF0 },
};

const sGame_PaletteDataset SVG_SNES_YUKA_P2_PALETTES[] =
{
    { L"Yuka Takeuchi P2", 0xC9F0, 0xCA10, indexSVGSprites_Yuka },
    { L"Yuka Takeuchi P2 Portrait", 0xBAF0, 0xBB30 },
};

const sGame_PaletteDataset SVG_SNES_CHIHO_P1_PALETTES[] =
{
    { L"Chiho Masuda P1", 0xCA10, 0xCA30, indexSVGSprites_Chiho },
    { L"Chiho Masuda P1 Portrait", 0xBB30, 0xBBB0 },
};

const sGame_PaletteDataset SVG_SNES_CHIHO_P2_PALETTES[] =
{
    { L"Chiho Masuda P2", 0xCA30, 0xCA50, indexSVGSprites_Chiho },
    { L"Chiho Masuda P2 Portrait", 0xBBB0, 0xBC30 },
};

const sGame_PaletteDataset SVG_SNES_MANAMI_P1_PALETTES[] =
{
    { L"Manami Kusonki P1", 0xCA50, 0xCA70, indexSVGSprites_Manami },
    { L"Manami Kusonki P1 Portrait", 0xBC30, 0xBCB0 },
};

const sGame_PaletteDataset SVG_SNES_MANAMI_P2_PALETTES[] =
{
    { L"Manami Kusonki P2", 0xCA70, 0xCA90, indexSVGSprites_Manami },
    { L"Manami Kusonki P2 Portrait", 0xBCB0, 0xBD30 },
};

const sGame_PaletteDataset SVG_SNES_JUN_P1_PALETTES[] =
{
    { L"Jun Kubota P1", 0xCA90, 0xCAB0, indexSVGSprites_Jun },
    { L"Jun Kobota P1 Portrait", 0xBD30, 0xBD90 },
};

const sGame_PaletteDataset SVG_SNES_JUN_P2_PALETTES[] =
{
    { L"Jun Kubota P2", 0xCAB0, 0xCAD0, indexSVGSprites_Jun },
    { L"Jun Portrait P2 Portrait", 0xBD90, 0xBDF0 },
};

const sGame_PaletteDataset SVG_SNES_AYAKO_P1_PALETTES[] =
{
    { L"Ayako Yuuki P1", 0xCAD0, 0xCAF0, indexSVGSprites_Ayako },
    { L"Ayako Yuuki P1 Portrait", 0xBE30, 0xBEB0 },
};

const sGame_PaletteDataset SVG_SNES_AYAKO_P2_PALETTES[] =
{
    { L"Ayako Yuuki P2", 0xCAF0, 0xCB10, indexSVGSprites_Ayako },
    { L"Ayako Yuuki P2 Portrait", 0xBEB0, 0xBF30 },
};

const sGame_PaletteDataset SVG_SNES_ERINA_P1_PALETTES[] =
{
    { L"Erina P1", 0xCB10, 0xCB30, indexSVGSprites_Erina },
    { L"Erina P1 Portrait", 0xBF30, 0xBF70 },
};

const sGame_PaletteDataset SVG_SNES_ERINA_P2_PALETTES[] =
{
    { L"Erina P2", 0xCB30, 0xCB50, indexSVGSprites_Erina },
    { L"Erina P2 Portrait", 0xBF70, 0xBFB0 },
};

const sGame_PaletteDataset SVG_SNES_SATOMI_P1_PALETTES[] =
{
    { L"Satomi Yajima P1", 0xCB70, 0xCB90, indexSVGSprites_Satomi },
    { L"Satomi Yajima P1 Portrait", 0xBDF0, 0xBE10 },
};

const sGame_PaletteDataset SVG_SNES_SATOMI_P2_PALETTES[] =
{
    { L"Satomi Yajima P2", 0xCB50, 0xCB70, indexSVGSprites_Satomi },
    { L"Satomi Yajima P2 Portrait", 0xBE10, 0xBE30 },
};

const sGame_PaletteDataset SVG_SNES_KAORI_P1_PALETTES[] =
{
    { L"Kaori Yanase P1", 0xCBD0, 0xCBF0, indexSVGSprites_Kaori },
    { L"Kaori Yanase P1 Portrait", 0xBFB0, 0xBFD0 },
};

const sGame_PaletteDataset SVG_SNES_KAORI_P2_PALETTES[] =
{
    { L"Kaori Yanase P2", 0xCBF0, 0xCC10, indexSVGSprites_Kaori },
    { L"Kaori Yanase P2 Portrait", 0xBFD0, 0xBFF0 },
};

const sGame_PaletteDataset SVG_SNES_REIMI_P1_PALETTES[] =
{
    { L"Reimi Jahana P1", 0xCC10, 0xCC30, indexSVGSprites_Reimi },
    { L"Reimi Jahana P1 Portrait", 0xBFF0, 0xC030 },
};

const sGame_PaletteDataset SVG_SNES_REIMI_P2_PALETTES[] =
{
    { L"Reimi Jahana P2", 0xCC30, 0xCC50, indexSVGSprites_Reimi },
    { L"Reimi Jahana P2 Portrait", 0xC030, 0xC070 },
};

const sGame_PaletteDataset SVG_SNES_BONUS_HUD_PALETTES[] =
{
    { L"P1 and P2 Select Icons", 0xC990, 0xC9B0 },
    { L"\"CHARACTER SELECT\" / CS BG", 0xB870, 0xB890 },
    { L"Yuka / Manami / Satomi / Erina CSI", 0xDA10, 0xDA30 },
    { L"Jun CSI / \"2P\" / \"VS MODE\"", 0xDA30, 0xDA50 },
    { L"Chiho CSI", 0xDA50, 0xDA70 },
    { L"Manami CSI", 0xDA70, 0xDA90 },
    { L"Kaori CSI", 0xDA90, 0xDAB0 },
    { L"Reimi CSI / \"1P\"", 0xDAB0, 0xDAD0 },
    { L"Hitsparks", 0xCC50, 0xCC70 },
};

const sDescTreeNode SVG_SNES_YUKA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_YUKA_P1_PALETTES, ARRAYSIZE(SVG_SNES_YUKA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_YUKA_P2_PALETTES, ARRAYSIZE(SVG_SNES_YUKA_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_CHIHO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_CHIHO_P1_PALETTES, ARRAYSIZE(SVG_SNES_CHIHO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_CHIHO_P2_PALETTES, ARRAYSIZE(SVG_SNES_CHIHO_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_MANAMI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_MANAMI_P1_PALETTES, ARRAYSIZE(SVG_SNES_MANAMI_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_MANAMI_P2_PALETTES, ARRAYSIZE(SVG_SNES_MANAMI_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_JUN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_JUN_P1_PALETTES, ARRAYSIZE(SVG_SNES_JUN_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_JUN_P2_PALETTES, ARRAYSIZE(SVG_SNES_JUN_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_AYAKO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_AYAKO_P1_PALETTES, ARRAYSIZE(SVG_SNES_AYAKO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_AYAKO_P2_PALETTES, ARRAYSIZE(SVG_SNES_AYAKO_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_ERINA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_ERINA_P1_PALETTES, ARRAYSIZE(SVG_SNES_ERINA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_ERINA_P2_PALETTES, ARRAYSIZE(SVG_SNES_ERINA_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_SATOMI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_SATOMI_P1_PALETTES, ARRAYSIZE(SVG_SNES_SATOMI_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_SATOMI_P2_PALETTES, ARRAYSIZE(SVG_SNES_SATOMI_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_KAORI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_KAORI_P1_PALETTES, ARRAYSIZE(SVG_SNES_KAORI_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_KAORI_P2_PALETTES, ARRAYSIZE(SVG_SNES_KAORI_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_REIMI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SVG_SNES_REIMI_P1_PALETTES, ARRAYSIZE(SVG_SNES_REIMI_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SVG_SNES_REIMI_P2_PALETTES, ARRAYSIZE(SVG_SNES_REIMI_P2_PALETTES) },
};

const sDescTreeNode SVG_SNES_BONUS_COLLECTION[] =
{
    { L"HUD and CSIs", DESC_NODETYPE_TREE, (void*)SVG_SNES_BONUS_HUD_PALETTES, ARRAYSIZE(SVG_SNES_BONUS_HUD_PALETTES) },
};

const sDescTreeNode SVG_SNES_UNITS[] =
{
    { L"Yuka Takeuchi", DESC_NODETYPE_TREE, (void*)SVG_SNES_YUKA_COLLECTION, ARRAYSIZE(SVG_SNES_YUKA_COLLECTION) },
    { L"Chiho Masuda", DESC_NODETYPE_TREE, (void*)SVG_SNES_CHIHO_COLLECTION, ARRAYSIZE(SVG_SNES_CHIHO_COLLECTION) },
    { L"Manami Kusonki", DESC_NODETYPE_TREE, (void*)SVG_SNES_MANAMI_COLLECTION, ARRAYSIZE(SVG_SNES_MANAMI_COLLECTION) },
    { L"Jun Kubota", DESC_NODETYPE_TREE, (void*)SVG_SNES_JUN_COLLECTION, ARRAYSIZE(SVG_SNES_JUN_COLLECTION) },
    { L"Ayako Yuuki", DESC_NODETYPE_TREE, (void*)SVG_SNES_AYAKO_COLLECTION, ARRAYSIZE(SVG_SNES_AYAKO_COLLECTION) },
    { L"Erina", DESC_NODETYPE_TREE, (void*)SVG_SNES_ERINA_COLLECTION, ARRAYSIZE(SVG_SNES_ERINA_COLLECTION) },
    { L"Satomi Yajima", DESC_NODETYPE_TREE, (void*)SVG_SNES_SATOMI_COLLECTION, ARRAYSIZE(SVG_SNES_SATOMI_COLLECTION) },
    { L"Kaori Yanase", DESC_NODETYPE_TREE, (void*)SVG_SNES_KAORI_COLLECTION, ARRAYSIZE(SVG_SNES_KAORI_COLLECTION) },
    { L"Reimi Jahana", DESC_NODETYPE_TREE, (void*)SVG_SNES_REIMI_COLLECTION, ARRAYSIZE(SVG_SNES_REIMI_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SVG_SNES_BONUS_COLLECTION, ARRAYSIZE(SVG_SNES_BONUS_COLLECTION) },
};

constexpr auto SVG_SNES_NUMUNIT = ARRAYSIZE(SVG_SNES_UNITS);

#define SVG_SNES_EXTRALOC SVG_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef SVG_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

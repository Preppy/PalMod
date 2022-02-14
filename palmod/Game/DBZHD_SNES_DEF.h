#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to DBZHD_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<UINT16> DBZHD_SNES_IMGIDS_USED =
{
    indexDBZHDSprites_Cell,             // 0x9B
    indexDBZHDSprites_Frieza,           // 0x9C
    indexDBZHDSprites_Gohan,            // 0x9D
    indexDBZHDSprites_Goku,             // 0x9E
    indexDBZHDSprites_Gotenks,          // 0x9F
    indexDBZHDSprites_KidBuu,           // 0xA0
    indexDBZHDSprites_MajinBuu,         // 0xA1
    indexDBZHDSprites_Piccolo,          // 0xA2
    indexDBZHDSprites_Vegeta,           // 0xA3
    indexDBZHDSprites_Vegito,           // 0xA4
    indexDBZHDSprites_Bonus,            // 0xA5,
};

const sGame_PaletteDataset DBZHD_SNES_GOKU_PALETTES_P1[] =
{
    { L"Goku P1 (Day)", 0xB0000, 0xB0020, indexDBZHDSprites_Goku },
    { L"Goku P1 portrait", 0x18140, 0x18160, indexDBZHDSprites_Goku, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_GOKU_PALETTES_P2[] =
{
    { L"Goku P2 (Day)", 0xB0020, 0xB0040, indexDBZHDSprites_Goku },
    { L"Goku P2 portrait", 0x18160, 0x18180, indexDBZHDSprites_Goku, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_GOKU_PALETTES_NORMAL[] =
{
    { L"Normal Goku", 0x27B161, 0x27B181 },
    { L"Normal Goku Sunset", 0x27B1E1, 0x27B201 },
    { L"Normal Goku Nighttime", 0x27B201, 0x27B221 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGETA_PALETTES_P1[] =
{
    { L"Vegeta P1 (Day)", 0xB0200, 0xB0220, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 portrait", 0x18180, 0x181a0, indexDBZHDSprites_Vegeta, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGETA_PALETTES_P2[] =
{
    { L"Vegeta P2 (Day)", 0xB0220, 0xB0240, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 portrait", 0x181a0, 0x181c0, indexDBZHDSprites_Vegeta, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_GOTENKS_PALETTES_P1[] =
{
    { L"Gotenks P1 (Day)", 0xB0A80, 0xB0AA0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 portrait", 0x18200, 0x18220, indexDBZHDSprites_Gotenks, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_GOTENKS_PALETTES_P2[] =
{
    { L"Gotenks P2 (Day)", 0xB0AA0, 0xB0AC0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 portrait", 0x18220, 0x18240, indexDBZHDSprites_Gotenks, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_GOHAN_PALETTES_P1[] =
{
    { L"Gohan P1 (Day)", 0xB0500, 0xB0520, indexDBZHDSprites_Gohan },
    { L"Gohan P1 portrait", 0x181c0, 0x181e0, indexDBZHDSprites_Gohan, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_GOHAN_PALETTES_P2[] =
{
    { L"Gohan P2 (Day)", 0xB0520, 0xB0540, indexDBZHDSprites_Gohan },
    { L"Gohan P2 portrait", 0x181e0, 0x18200, indexDBZHDSprites_Gohan, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGITO_PALETTES_P1[] =
{
    { L"Vegito P1 (Day)", 0xB0EB0, 0xB0ED0, indexDBZHDSprites_Vegito },
    { L"Vegito Intro P1", 0xB10B0, 0xB10D0, indexDBZHDSprites_Bonus, 0x01 },
    { L"Vegito P1 portrait", 0x18240, 0x18260, indexDBZHDSprites_Vegito, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGITO_PALETTES_P2[] =
{
    { L"Vegito P2 (Day)", 0xB0ED0, 0xB0EF0, indexDBZHDSprites_Vegito},
    { L"Vegito Intro P2", 0xB10D0, 0xB10F0, indexDBZHDSprites_Bonus, 0x01 },
    { L"Vegito P2 portrait", 0x18260, 0x18280, indexDBZHDSprites_Vegito, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_PICCOLO_PALETTES_P1[] =
{
    { L"Piccolo P1 (Day)", 0xB10F0, 0xB1110, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 portrait", 0x18280, 0x182a0, indexDBZHDSprites_Piccolo, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_PICCOLO_PALETTES_P2[] =
{
    { L"Piccolo P2 (Day)", 0xB1110, 0xB1130, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 portrait", 0x182a0, 0x182c0, indexDBZHDSprites_Piccolo, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_BUU_PALETTES_P1[] =
{
    { L"Buu P1 (Day)", 0xB1A70, 0xB1A90, indexDBZHDSprites_MajinBuu },
    { L"Majin Buu P1 portrait", 0x18340, 0x18360, indexDBZHDSprites_MajinBuu, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_BUU_PALETTES_P2[] =
{
    { L"Buu P2 (Day)", 0xB1A90, 0xB1AB0, indexDBZHDSprites_MajinBuu },
    { L"Majin Buu P2 portrait", 0x18360, 0x18380, indexDBZHDSprites_MajinBuu, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_KIDBUU_PALETTES_P1[] =
{
    { L"Kid Buu P1 (Day)", 0xB1870, 0xB1890, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P1 portrait", 0x18380, 0x183a0, indexDBZHDSprites_KidBuu, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_KIDBUU_PALETTES_P2[] =
{
    { L"Kid Buu P2 (Day)", 0xB1890, 0xB18B0, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P2 portrait", 0x183a0, 0x183c0, indexDBZHDSprites_KidBuu, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_FRIEZA_PALETTES_P1[] =
{
    { L"Frieza P1 (Day)", 0xB07C0, 0xB07E0, indexDBZHDSprites_Frieza },
    { L"Frieza P1 portrait", 0x182c0, 0x182e0, indexDBZHDSprites_Frieza, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_FRIEZA_PALETTES_P2[] =
{
    { L"Frieza P2 (Day)", 0xB07E0, 0xB0800, indexDBZHDSprites_Frieza },
    { L"Frieza P2 portrait", 0x182e0, 0x18300, indexDBZHDSprites_Frieza, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_FRIEZA_PALETTES_SHARED[] =
{
    { L"Intro: Base to 2nd Form", 0x0b09c0, 0x0B0A20, indexDBZHDSprites_Frieza, 0x08 },
};

const sGame_PaletteDataset DBZHD_SNES_CELL_PALETTES_P1[] =
{
    { L"Cell P1 (Day)", 0xB13F0, 0xB1410, indexDBZHDSprites_Cell },
    { L"Cell P1 portrait", 0x18300, 0x18320, indexDBZHDSprites_Cell, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_CELL_PALETTES_P2[] =
{
    { L"Cell P2 (Day)", 0xB1410, 0xB1430, indexDBZHDSprites_Cell },
    { L"Cell P2 portrait", 0x18320, 0x18340, indexDBZHDSprites_Cell, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_CELL_PALETTES_SHARED[] =
{
    { L"Intro: Semi-Perfect Cell", 0xB16F0, 0xB1710, indexDBZHDSprites_Cell, 0x08 },
    { L"Cell Jr and Cell Kamehameha", 0x2ab093, 0x2ab0d3, indexDBZHDSprites_Cell , 0x10 },
};

const sGame_PaletteDataset DBZHD_SNES_STAGE_PALETTES[] =
{
    { L"Tournament Day", 0x50C6E, 0x50D0E },
    { L"Tournament Sunset", 0x50D0E, 0x50DAE },
    { L"Tournament Night", 0x50DAE, 0x50E4E },
    { L"Lookout Day", 0x536B7, 0x53757 },
    { L"Lookout Sunset", 0x53757, 0x537F7 },
    { L"Lookout Night", 0x537F7, 0x53897 },
    { L"Goku Intro", 0x232F1, 0x23311 },
};

const sGame_PaletteDataset DBZHD_SNES_BONUS_PALETTES[] =
{
    { L"Character Select icons 1/2", 0x1B48A, 0x1b4aa },
    { L"Character Select icons 2/2", 0x1B4aA, 0x1b4ca },
    { L"Super Buu", 0x1b4ca, 0x1b51e, indexDBZHDSprites_Bonus, 0x00 },
    { L"Sand 1", 0x2e5a2, 0x2e7a2 },
    { L"Sand 2", 0x2e7a2, 0x2e942 },
};

const sDescTreeNode DBZHD_SNES_GOKU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_GOKU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_GOKU_PALETTES_P2) },
    { L"Normal", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_PALETTES_NORMAL, ARRAYSIZE(DBZHD_SNES_GOKU_PALETTES_NORMAL) },
};

const sDescTreeNode DBZHD_SNES_VEGETA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_VEGETA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_VEGETA_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_GOTENKS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOTENKS_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_GOTENKS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOTENKS_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_GOTENKS_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_GOHAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOHAN_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_GOHAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOHAN_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_GOHAN_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_VEGITO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGITO_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_VEGITO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGITO_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_VEGITO_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_PICCOLO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_PICCOLO_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_PICCOLO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_PICCOLO_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_PICCOLO_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_BUU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_BUU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_BUU_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_KIDBUU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_KIDBUU_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_KIDBUU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_KIDBUU_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_KIDBUU_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_FRIEZA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_FRIEZA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_FRIEZA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_PALETTES_SHARED, ARRAYSIZE(DBZHD_SNES_FRIEZA_PALETTES_SHARED) },
};

const sDescTreeNode DBZHD_SNES_CELL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_CELL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_CELL_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_PALETTES_SHARED, ARRAYSIZE(DBZHD_SNES_CELL_PALETTES_SHARED) },
};

const sDescTreeNode DBZHD_SNES_STAGE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_STAGE_PALETTES, ARRAYSIZE(DBZHD_SNES_STAGE_PALETTES) },
};

const sDescTreeNode DBZHD_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BONUS_PALETTES, ARRAYSIZE(DBZHD_SNES_BONUS_PALETTES) },
};

const sDescTreeNode DBZHD_SNES_UNITS[] =
{
    { L"Goku", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_COLLECTION, ARRAYSIZE(DBZHD_SNES_GOKU_COLLECTION) },
    { L"Vegeta", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_COLLECTION, ARRAYSIZE(DBZHD_SNES_VEGETA_COLLECTION) },
    { L"Gotenks", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOTENKS_COLLECTION, ARRAYSIZE(DBZHD_SNES_GOTENKS_COLLECTION) },
    { L"Gohan", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOHAN_COLLECTION, ARRAYSIZE(DBZHD_SNES_GOHAN_COLLECTION) },
    { L"Vegito", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGITO_COLLECTION, ARRAYSIZE(DBZHD_SNES_VEGITO_COLLECTION) },
    { L"Piccolo", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_PICCOLO_COLLECTION, ARRAYSIZE(DBZHD_SNES_PICCOLO_COLLECTION) },
    { L"Buu", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_COLLECTION, ARRAYSIZE(DBZHD_SNES_BUU_COLLECTION) },
    { L"Kid Buu", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_KIDBUU_COLLECTION, ARRAYSIZE(DBZHD_SNES_KIDBUU_COLLECTION) },
    { L"Frieza", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_COLLECTION, ARRAYSIZE(DBZHD_SNES_FRIEZA_COLLECTION) },
    { L"Cell", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_COLLECTION, ARRAYSIZE(DBZHD_SNES_CELL_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_STAGE_COLLECTION, ARRAYSIZE(DBZHD_SNES_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BONUS_COLLECTION, ARRAYSIZE(DBZHD_SNES_BONUS_COLLECTION) },
};

constexpr auto DBZHD_SNES_NUMUNIT = ARRAYSIZE(DBZHD_SNES_UNITS);

constexpr auto DBZHD_SNES_EXTRALOC = DBZHD_SNES_NUMUNIT;

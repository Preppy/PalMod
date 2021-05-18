#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to BSSMSJR_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 BSSMSJR_SNES_IMGIDS_USED[] =
{
    indexBSSMSJRSprites_ChibiMoon,      // 0x91
    indexBSSMSJRSprites_Jupiter,        // 0x92
    indexBSSMSJRSprites_Mars,           // 0x93
    indexBSSMSJRSprites_Mercury,        // 0x94
    indexBSSMSJRSprites_Neptune,        // 0x95
    indexBSSMSJRSprites_Pluto,          // 0x96
    indexBSSMSJRSprites_SailorMoon,     // 0x97
    indexBSSMSJRSprites_Uranus,         // 0x98
    indexBSSMSJRSprites_Venus,          // 0x99
    indexBSSMSJRSprites_Bonus,          // 0x9a
};

const sGame_PaletteDataset BSSMSJR_SNES_SMoon_A_PALETTES[] =
{
    { L"Sailor Moon A", 0x20057e, 0x20059e, indexBSSMSJRSprites_SailorMoon },
};

const sGame_PaletteDataset BSSMSJR_SNES_SMoon_B_PALETTES[] =
{
    { L"Sailor Moon B", 0x20059e, 0x2005be, indexBSSMSJRSprites_SailorMoon },
};

const sGame_PaletteDataset BSSMSJR_SNES_Mercury_A_PALETTES[] =
{
    { L"Mercury A", 0x2005be, 0x2005de, indexBSSMSJRSprites_Mercury },
};

const sGame_PaletteDataset BSSMSJR_SNES_Mercury_B_PALETTES[] =
{
    { L"Mercury B", 0x2005de, 0x2005fe, indexBSSMSJRSprites_Mercury },
};

const sGame_PaletteDataset BSSMSJR_SNES_Mars_A_PALETTES[] =
{
    { L"Mars A", 0x2005fe, 0x20061e, indexBSSMSJRSprites_Mars },
};

const sGame_PaletteDataset BSSMSJR_SNES_Mars_B_PALETTES[] =
{
    { L"Mars B", 0x20061e, 0x20063e, indexBSSMSJRSprites_Mars },
};

const sGame_PaletteDataset BSSMSJR_SNES_Jupiter_A_PALETTES[] =
{
    { L"Jupiter A", 0x20063e, 0x20065e, indexBSSMSJRSprites_Jupiter },
};

const sGame_PaletteDataset BSSMSJR_SNES_Jupiter_B_PALETTES[] =
{
    { L"Jupiter B", 0x20065e, 0x20067e, indexBSSMSJRSprites_Jupiter },
};

const sGame_PaletteDataset BSSMSJR_SNES_Venus_A_PALETTES[] =
{
    { L"Venus A", 0x20067e, 0x20069e, indexBSSMSJRSprites_Venus },
};

const sGame_PaletteDataset BSSMSJR_SNES_Venus_B_PALETTES[] =
{
    { L"Venus B", 0x20069e, 0x2006be, indexBSSMSJRSprites_Venus },
};

const sGame_PaletteDataset BSSMSJR_SNES_Uranus_A_PALETTES[] =
{
    { L"Uranus A", 0x2006be, 0x2006de, indexBSSMSJRSprites_Uranus },
};

const sGame_PaletteDataset BSSMSJR_SNES_Uranus_B_PALETTES[] =
{
    { L"Uranus B", 0x2006de, 0x2006fe, indexBSSMSJRSprites_Uranus },
};

const sGame_PaletteDataset BSSMSJR_SNES_Neptune_A_PALETTES[] =
{
    { L"Neptune A", 0x2006fe, 0x20071e, indexBSSMSJRSprites_Neptune },
};

const sGame_PaletteDataset BSSMSJR_SNES_Neptune_B_PALETTES[] =
{
    { L"Neptune B", 0x20071e, 0x20073e, indexBSSMSJRSprites_Neptune },
};

const sGame_PaletteDataset BSSMSJR_SNES_Pluto_A_PALETTES[] =
{
    { L"Pluto A", 0x20073e, 0x20075e, indexBSSMSJRSprites_Pluto },
};

const sGame_PaletteDataset BSSMSJR_SNES_Pluto_B_PALETTES[] =
{
    { L"Pluto B", 0x20075e, 0x20077e, indexBSSMSJRSprites_Pluto },
};

const sGame_PaletteDataset BSSMSJR_SNES_Chibi_A_PALETTES[] =
{
    { L"Chibi Moon A", 0x20077e, 0x20079e, indexBSSMSJRSprites_ChibiMoon },
};

const sGame_PaletteDataset BSSMSJR_SNES_Chibi_B_PALETTES[] =
{
    { L"Chibi Moon B", 0x20079e, 0x2007be, indexBSSMSJRSprites_ChibiMoon },
};

const sDescTreeNode BSSMSJR_SNES_SMoon_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_SMoon_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_SMoon_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_SMoon_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_SMoon_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Mercury_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Mercury_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Mercury_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Mercury_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Mercury_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Mars_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Mars_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Mars_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Mars_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Mars_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Jupiter_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Jupiter_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Jupiter_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Jupiter_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Jupiter_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Venus_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Venus_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Venus_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Venus_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Venus_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Uranus_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Uranus_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Uranus_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Uranus_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Uranus_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Neptune_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Neptune_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Neptune_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Neptune_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Neptune_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Pluto_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Pluto_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Pluto_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Pluto_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Pluto_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_Chibi_COLLECTION[] =
{
    { L"A",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Chibi_A_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Chibi_A_PALETTES) },
    { L"B",     DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Chibi_B_PALETTES, ARRAYSIZE(BSSMSJR_SNES_Chibi_B_PALETTES) },
};

const sDescTreeNode BSSMSJR_SNES_UNITS[] =
{
    { L"Sailor Moon", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_SMoon_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_SMoon_COLLECTION) },
    { L"Mercury", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Mercury_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Mercury_COLLECTION) },
    { L"Mars", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Mars_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Mars_COLLECTION) },
    { L"Jupiter", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Jupiter_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Jupiter_COLLECTION) },
    { L"Venus", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Venus_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Venus_COLLECTION) },
    { L"Uranus", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Uranus_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Uranus_COLLECTION) },
    { L"Neptune", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Neptune_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Neptune_COLLECTION) },
    { L"Pluto ", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Pluto_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Pluto_COLLECTION) },
    { L"Chibi Moon", DESC_NODETYPE_TREE, (void*)BSSMSJR_SNES_Chibi_COLLECTION, ARRAYSIZE(BSSMSJR_SNES_Chibi_COLLECTION) },
};

constexpr auto BSSMSJR_SNES_NUMUNIT = ARRAYSIZE(BSSMSJR_SNES_UNITS);

#define BSSMSJR_SNES_EXTRALOC BSSMSJR_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef BSSMSJR_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

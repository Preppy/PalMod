#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to NEWGAME_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset NEWGAME_A_FAKE_PALETTES_P1[] =
{
    { L"Fake P1",               0x00, 0x10 },
    { L"Fake P1 - More Data",   0x10, 0x20 },
};

const sGame_PaletteDataset NEWGAME_A_FAKE_PALETTES_P2[] =
{
    { L"Fake P2",               0x50, 0x60 },
    { L"Fake P12 - More Data",  0x60, 0x70 },
};

const sGame_PaletteDataset NEWGAME_A_SAMPLE_PALETTES_P1[] =
{
    { L"Sample P1",             0x100, 0x110 },
    { L"Sample P1 - More Data", 0x110, 0x120 },
};

const sGame_PaletteDataset NEWGAME_A_SAMPLE_PALETTES_P2[] =
{
    { L"Sample P2",             0x150, 0x160 },
    { L"Sample P2 - More Data", 0x160, 0x170 },
};

const sDescTreeNode NEWGAME_A_FAKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)NEWGAME_A_FAKE_PALETTES_P1, ARRAYSIZE(NEWGAME_A_FAKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)NEWGAME_A_FAKE_PALETTES_P2, ARRAYSIZE(NEWGAME_A_FAKE_PALETTES_P2) },
};

const sDescTreeNode NEWGAME_A_SAMPLE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)NEWGAME_A_SAMPLE_PALETTES_P1, ARRAYSIZE(NEWGAME_A_SAMPLE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)NEWGAME_A_SAMPLE_PALETTES_P2, ARRAYSIZE(NEWGAME_A_SAMPLE_PALETTES_P2) },
};

const sDescTreeNode NEWGAME_A_UNITS[] =
{
    { L"Fake", DESC_NODETYPE_TREE, (void*)NEWGAME_A_FAKE_COLLECTION, ARRAYSIZE(NEWGAME_A_FAKE_COLLECTION) },
    { L"Sample", DESC_NODETYPE_TREE, (void*)NEWGAME_A_SAMPLE_COLLECTION, ARRAYSIZE(NEWGAME_A_SAMPLE_COLLECTION) },
};

constexpr auto NEWGAME_A_NUMUNIT = ARRAYSIZE(NEWGAME_A_UNITS);

#define NEWGAME_A_EXTRALOC NEWGAME_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef NEWGAME_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

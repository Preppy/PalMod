#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to MMX3_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset MMX3_SNES_MAIN_PALETTES[] =
{
    { L"X", 0x62400, 0x62420 },
    { L"X Charging 1", 0x62F60, 0x62F80 },
    { L"X Charge shots", 0x62460, 0x62480 },
    { L"Zero", 0x63580, 0x635A0 },
    { L"Zero Charge shots / Saber", 0x635A0, 0x635C0 },
    { L"Zero Final charge", 0x625E0, 0x62600 },
};

const sGame_PaletteDataset MMX3_SNES_BOSSES_PALETTES[] =
{
    { L"Mac", 0x66E88, 0x66EA8 },
    { L"Intro Boss Pt.1", 0x63D20, 0x63D40 },
    { L"Intro Boss Pt.2", 0x66908, 0x66928 },
    { L"Blast Hornet", 0x669A8, 0x669C8 },
    { L"Blizzard Buffalo", 0x66AC8, 0x66AE8 },
    { L"Crush Crawfish", 0x66B48, 0x66B68 },
    { L"Gravity Beetle", 0x66A88, 0x66AA8 },
    { L"Neon Tiger", 0x66C08, 0x66C28 },
    { L"Toxic Seahorse", 0x66F08, 0x66F28 },
    { L"Tunnel Rhino", 0x66628, 0x66648 },
    { L"Volt Catfish", 0x671E8, 0x67208 },
};

const sDescTreeNode MMX3_SNES_MAIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX3_SNES_MAIN_PALETTES, ARRAYSIZE(MMX3_SNES_MAIN_PALETTES) },
};

const sDescTreeNode MMX3_SNES_BOSSES_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX3_SNES_BOSSES_PALETTES, ARRAYSIZE(MMX3_SNES_BOSSES_PALETTES) },
};

const sDescTreeNode MMX3_SNES_UNITS[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)MMX3_SNES_MAIN_COLLECTION, ARRAYSIZE(MMX3_SNES_MAIN_COLLECTION) },
    { L"Bosses", DESC_NODETYPE_TREE, (void*)MMX3_SNES_BOSSES_COLLECTION, ARRAYSIZE(MMX3_SNES_BOSSES_COLLECTION) },
};

constexpr auto MMX3_SNES_NUMUNIT = ARRAYSIZE(MMX3_SNES_UNITS);

#define MMX3_SNES_EXTRALOC MMX3_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MMX3_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

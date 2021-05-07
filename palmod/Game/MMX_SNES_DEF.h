#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to MMX_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset MMX_SNES_MAIN_PALETTES[] =
{
    { L"X ", 0x2B700, 0x2B720 },
    { L"X Charging 1", 0x2C440, 0x2C460 },
    { L"X - Charging 2", 0x2C460, 0x2C480 },
    { L"X Charge Shots", 0x2B860, 0x2B880 },
    { L"X Intro Portrait 1", 0x2F680, 0x2F6A0 },
    { L"X Intro Portrait 2", 0x2F6A0, 0x2F6C0 },
    { L"X Scanner - Intro", 0x2CB80, 0x2CBA0 },
    { L"Zero", 0x2C0C0, 0x2C0E0 },
    { L"Vile and Mech (Intro stage)", 0x2C0A0, 0x2C0C0 },
    { L"Vile and Mech (Sigma stage 1)", 0x2CC20, 0x2CC40 },
};

const sGame_PaletteDataset MMX_SNES_BOSSES_PALETTES[] =
{
    { L"Armored Armadillo 1", 0x2C2A0, 0x2C2C0 },
    { L"Armored Armadillo 2", 0x2C2C0, 0x2C2E0 },
    { L"Boomer Kuwanger", 0x2C4A0, 0x2C4C0 },
    { L"Chill Penguin (real)", 0x2C380, 0x2C3A0 },
    { L"Flame Mammoth", 0x2C6C0, 0x2C6E0 },
    { L"Launch Octopus 1", 0x2C4E0, 0x2C500 },
    { L"Launch Octopus 2", 0x2C500, 0x2C520 },
    { L"Spark Mandrill", 0x2C840, 0x2C860 },
    { L"Sting Chameleon", 0x2BA60, 0x2BA80 },
    { L"Storm Eagle", 0x2C7A0, 0x2C7C0 },
};

const sDescTreeNode MMX_SNES_MAIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_MAIN_PALETTES, ARRAYSIZE(MMX_SNES_MAIN_PALETTES) },
};

const sDescTreeNode MMX_SNES_BOSSES_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_BOSSES_PALETTES, ARRAYSIZE(MMX_SNES_BOSSES_PALETTES) },
};

const sDescTreeNode MMX_SNES_UNITS[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)MMX_SNES_MAIN_COLLECTION, ARRAYSIZE(MMX_SNES_MAIN_COLLECTION) },
    { L"Bosses", DESC_NODETYPE_TREE, (void*)MMX_SNES_BOSSES_COLLECTION, ARRAYSIZE(MMX_SNES_BOSSES_COLLECTION) },
};

constexpr auto MMX_SNES_NUMUNIT = ARRAYSIZE(MMX_SNES_UNITS);

#define MMX_SNES_EXTRALOC MMX_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MMX_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

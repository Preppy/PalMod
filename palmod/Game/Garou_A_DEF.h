#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of Garou_A_ROCK_PALETTES. 
// * Update every array using Garou_A_NUMUNIT below
// That should be it.  Good luck.

enum SupportedGarou_A_PaletteListIndex
{
    indexGarouARockHoward,
    indexGarouALast
};

constexpr auto Garou_A_NUMUNIT = indexGarouALast;

#define Garou_A_EXTRALOC Garou_A_NUMUNIT

const sGame_PaletteDataset Garou_ROCKHOWARD_PALETTES[] =
{
    { "Rock Howard Color A", 0xff00, 0xff20 }
};

const sDescTreeNode Garou_A_ROCKHOWARD_COLLECTION[] =
{
    { "Who knows", DESC_NODETYPE_TREE, (void*)Garou_ROCKHOWARD_PALETTES, ARRAYSIZE(Garou_ROCKHOWARD_PALETTES) },
};

const UINT8 Garou_A_UNITSORT[Garou_A_NUMUNIT + 1] // Plus for extras
{
   indexGarouARockHoward,
};

const sDescTreeNode Garou_A_UNITS[Garou_A_NUMUNIT] =
{
    { "Rock Howard", DESC_NODETYPE_TREE, (void*)Garou_A_ROCKHOWARD_COLLECTION, ARRAYSIZE(Garou_A_ROCKHOWARD_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef Garou_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

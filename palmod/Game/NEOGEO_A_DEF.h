#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of NEOGEO_A_STUB_PALETTE. 
// * Update every array using NEOGEO_A_NUMUNIT below
// That should be it.  Good luck.

const sGame_PaletteDataset NEOGEO_A_STUB_PALETTE[] =
{
    { L"Test Only - Don't Edit", 0x0, 0x20 },
};

const sDescTreeNode NEOGEO_A_STUB_COLLECTION[] =
{
    { L"Stub Palette Set", DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB_PALETTE, ARRAYSIZE(NEOGEO_A_STUB_PALETTE) },
};

const sDescTreeNode NEOGEO_A_UNITS[] =
{
    { L"Stub Unit", DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB_COLLECTION, ARRAYSIZE(NEOGEO_A_STUB_COLLECTION) },
};

constexpr auto NEOGEO_A_NUMUNIT = ARRAYSIZE(NEOGEO_A_UNITS);

// We extend this array with data groveled from the extras file, if any.
const stExtraDef NEOGEO_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

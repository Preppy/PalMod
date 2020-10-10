#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of NEOGEO_A_STUB_PALETTE. 
// * Update every array using NEOGEO_A_NUMUNIT below
// That should be it.  Good luck.

constexpr auto NEOGEO_A_NUMUNIT = indexNEOGEO_A_Last;

#define NEOGEO_A_EXTRALOC NEOGEO_A_NUMUNIT

const sGame_PaletteDataset NEOGEO_A_STUB_PALETTE[] =
{
    { _T("Test Only - Don't Change"), 0x200, 0x220 },
};

const sGame_PaletteDataset NEOGEO_A_STUB2_PALETTE[] =
{
    { _T("Test Only - Don't Change"), 0x220, 0x240 },
};

const sDescTreeNode NEOGEO_A_STUB_COLLECTION[] =
{
    { _T("Stub Palette Set 1"), DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB_PALETTE, ARRAYSIZE(NEOGEO_A_STUB_PALETTE) },
};

const sDescTreeNode NEOGEO_A_STUB2_COLLECTION[] =
{
    { _T("Stub Palette Set 2"), DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB2_PALETTE, ARRAYSIZE(NEOGEO_A_STUB2_PALETTE) },
};

const sDescTreeNode NEOGEO_A_UNITS[NEOGEO_A_NUMUNIT] =
{
    { _T("Stub Unit"), DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB_COLLECTION, ARRAYSIZE(NEOGEO_A_STUB_COLLECTION) },
    { _T("Stub Unit 2"), DESC_NODETYPE_TREE, (void*)NEOGEO_A_STUB2_COLLECTION, ARRAYSIZE(NEOGEO_A_STUB2_COLLECTION) },
};

// We extend this array with data groveled from the GarouE.txt extensible extras file, if any.
const stExtraDef NEOGEO_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of StreetFighter_A_RYU_PALETTES_A. 
// * Update every array using StreetFighter_A_NUMUNITS below
// That should be it.  Good luck.

const std::vector<uint16_t> StreetFighter_A_IMGIDS_USED =
{
};

const sGame_PaletteDataset StreetFighter_A_RYU_PALETTES[] =
{
    { L"Ryu Test", 0x1BA68, 0x1BA88 },
};

const sDescTreeNode StreetFighter_A_Ryu_COLLECTION[] =
{
    { L"Test", DESC_NODETYPE_TREE, (void*)StreetFighter_A_RYU_PALETTES, ARRAYSIZE(StreetFighter_A_RYU_PALETTES) },
};

const sDescTreeNode StreetFighter_A_UNITS[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Ryu_COLLECTION, ARRAYSIZE(StreetFighter_A_Ryu_COLLECTION) },
};

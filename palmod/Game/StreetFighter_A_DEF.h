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
    { L"Ryu", 0x1BA68, 0x1BA88 },
};

const sDescTreeNode StreetFighter_A_Ryu_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_RYU_PALETTES, ARRAYSIZE(StreetFighter_A_RYU_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Ken_PALETTES[] =
{
    { L"Ken", 0x1BA88, 0x1BAa8 },
};

const sDescTreeNode StreetFighter_A_Ken_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Ken_PALETTES, ARRAYSIZE(StreetFighter_A_Ken_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Geki_PALETTES[] =
{
    { L"Geki", 0x1BAa8, 0x1BAc8 },
};

const sDescTreeNode StreetFighter_A_Geki_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Geki_PALETTES, ARRAYSIZE(StreetFighter_A_Geki_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Retsu_PALETTES[] =
{
    { L"Retsu", 0x1BAc8, 0x1BAe8 },
};

const sDescTreeNode StreetFighter_A_Retsu_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Retsu_PALETTES, ARRAYSIZE(StreetFighter_A_Retsu_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_IDK_PALETTES[] =
{
    { L"Unknown", 0x1BAe8, 0x1Bb08 },
};

const sDescTreeNode StreetFighter_A_IDK_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_IDK_PALETTES, ARRAYSIZE(StreetFighter_A_IDK_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Joe_PALETTES[] =
{
    { L"Joe", 0x1Bb08, 0x1Bb28 },
};

const sDescTreeNode StreetFighter_A_Joe_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Joe_PALETTES, ARRAYSIZE(StreetFighter_A_Joe_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Lee_PALETTES[] =
{
    { L"Lee", 0x1Bb28, 0x1Bb48 },
};

const sDescTreeNode StreetFighter_A_Lee_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Lee_PALETTES, ARRAYSIZE(StreetFighter_A_Lee_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Mike_PALETTES[] =
{
    { L"Mike", 0x1Bb48, 0x1Bb68 },
};

const sDescTreeNode StreetFighter_A_Mike_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Mike_PALETTES, ARRAYSIZE(StreetFighter_A_Mike_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Gen_PALETTES[] =
{
    { L"Gen", 0x1Bb68, 0x1Bb88 },
};

const sDescTreeNode StreetFighter_A_Gen_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Gen_PALETTES, ARRAYSIZE(StreetFighter_A_Gen_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Birdie_PALETTES[] =
{
    { L"Birdie", 0x1Bb88, 0x1Bba8 },
};

const sDescTreeNode StreetFighter_A_Birdie_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Birdie_PALETTES, ARRAYSIZE(StreetFighter_A_Birdie_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Eagle_PALETTES[] =
{
    { L"Eagle", 0x1Bba8, 0x1Bbc8 },
};

const sDescTreeNode StreetFighter_A_Eagle_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Eagle_PALETTES, ARRAYSIZE(StreetFighter_A_Eagle_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Adon_PALETTES[] =
{
    { L"Adon", 0x1Bbc8, 0x1Bbe8 },
};

const sDescTreeNode StreetFighter_A_Adon_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Adon_PALETTES, ARRAYSIZE(StreetFighter_A_Adon_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Sagat_PALETTES[] =
{
    { L"Sagat", 0x1Bbe8, 0x1Bc08 },
};

const sDescTreeNode StreetFighter_A_Sagat_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Sagat_PALETTES, ARRAYSIZE(StreetFighter_A_Sagat_PALETTES) },
};

const sDescTreeNode StreetFighter_A_UNITS[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Ryu_COLLECTION, ARRAYSIZE(StreetFighter_A_Ryu_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Ken_COLLECTION, ARRAYSIZE(StreetFighter_A_Ken_COLLECTION) },
    { L"Geki", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Geki_COLLECTION, ARRAYSIZE(StreetFighter_A_Geki_COLLECTION) },
    { L"Retsu", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Retsu_COLLECTION, ARRAYSIZE(StreetFighter_A_Retsu_COLLECTION) },
    { L"Unknown", DESC_NODETYPE_TREE, (void*)StreetFighter_A_IDK_COLLECTION, ARRAYSIZE(StreetFighter_A_IDK_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Joe_COLLECTION, ARRAYSIZE(StreetFighter_A_Joe_COLLECTION) },
    { L"Lee", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Lee_COLLECTION, ARRAYSIZE(StreetFighter_A_Lee_COLLECTION) },
    { L"Mike", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Mike_COLLECTION, ARRAYSIZE(StreetFighter_A_Mike_COLLECTION) },

    { L"Gen", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Gen_COLLECTION, ARRAYSIZE(StreetFighter_A_Gen_COLLECTION) },
    { L"Birdie", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Birdie_COLLECTION, ARRAYSIZE(StreetFighter_A_Birdie_COLLECTION) },
    { L"Eagle", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Eagle_COLLECTION, ARRAYSIZE(StreetFighter_A_Eagle_COLLECTION) },
    { L"Adon", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Adon_COLLECTION, ARRAYSIZE(StreetFighter_A_Adon_COLLECTION) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Sagat_COLLECTION, ARRAYSIZE(StreetFighter_A_Sagat_COLLECTION) },
};

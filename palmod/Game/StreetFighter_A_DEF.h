#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of StreetFighter_A_RYU_PALETTES_A. 
// * Update every array using StreetFighter_A_NUMUNITS below
// That should be it.  Good luck.

const std::vector<uint16_t> StreetFighter_A_IMGIDS_USED =
{
    indexSF1Sprites_Adon,               // 0x7f
    indexSF1Sprites_Birdie,             // 0x80
    indexSF1Sprites_Eagle,              // 0x81
    indexSF1Sprites_Geki,               // 0x82
    indexSF1Sprites_Gen,                // 0x83
    indexSF1Sprites_Joe,                // 0x84
    indexSF1Sprites_Ken,                // 0x85
    indexSF1Sprites_Lee,                // 0x86
    indexSF1Sprites_Mike,               // 0x87
    indexSF1Sprites_Retsu,              // 0x88
    indexSF1Sprites_Ryu,                // 0x89
    indexSF1Sprites_Sagat,              // 0x8a
    indexSF1Sprites_Bonus,              // 0x8b
};

const sGame_PaletteDataset StreetFighter_A_RYU_PALETTES[] =
{
    { L"Ryu", 0x1BA66, 0x1BA86, indexSF1Sprites_Ryu },
};

const sDescTreeNode StreetFighter_A_Ryu_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_RYU_PALETTES, ARRAYSIZE(StreetFighter_A_RYU_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Ken_PALETTES[] =
{
    { L"Ken", 0x1BA86, 0x1BAa6, indexSF1Sprites_Ken },
};

const sDescTreeNode StreetFighter_A_Ken_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Ken_PALETTES, ARRAYSIZE(StreetFighter_A_Ken_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Geki_PALETTES[] =
{
    { L"Geki", 0x1BAa6, 0x1BAc6, indexSF1Sprites_Geki },
};

const sDescTreeNode StreetFighter_A_Geki_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Geki_PALETTES, ARRAYSIZE(StreetFighter_A_Geki_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Retsu_PALETTES[] =
{
    { L"Retsu", 0x1BAc6, 0x1BAe6, indexSF1Sprites_Retsu },
};

const sDescTreeNode StreetFighter_A_Retsu_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Retsu_PALETTES, ARRAYSIZE(StreetFighter_A_Retsu_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_BoardBreakers_PALETTES[] =
{
    { L"Helpers", 0x1BAe6, 0x1Bb06 },
};

const sDescTreeNode StreetFighter_A_BoardBreaking_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_BoardBreakers_PALETTES, ARRAYSIZE(StreetFighter_A_BoardBreakers_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Joe_PALETTES[] =
{
    { L"Joe", 0x1Bb06, 0x1Bb26, indexSF1Sprites_Joe },
};

const sDescTreeNode StreetFighter_A_Joe_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Joe_PALETTES, ARRAYSIZE(StreetFighter_A_Joe_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Lee_PALETTES[] =
{
    { L"Lee", 0x1Bb26, 0x1Bb46, indexSF1Sprites_Lee },
};

const sDescTreeNode StreetFighter_A_Lee_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Lee_PALETTES, ARRAYSIZE(StreetFighter_A_Lee_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Mike_PALETTES[] =
{
    { L"Mike", 0x1Bb46, 0x1Bb66, indexSF1Sprites_Mike },
};

const sDescTreeNode StreetFighter_A_Mike_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Mike_PALETTES, ARRAYSIZE(StreetFighter_A_Mike_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Gen_PALETTES[] =
{
    { L"Gen", 0x1Bb66, 0x1Bb86, indexSF1Sprites_Gen },
};

const sDescTreeNode StreetFighter_A_Gen_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Gen_PALETTES, ARRAYSIZE(StreetFighter_A_Gen_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Birdie_PALETTES[] =
{
    { L"Birdie", 0x1Bb86, 0x1Bba6, indexSF1Sprites_Birdie },
};

const sDescTreeNode StreetFighter_A_Birdie_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Birdie_PALETTES, ARRAYSIZE(StreetFighter_A_Birdie_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Eagle_PALETTES[] =
{
    { L"Eagle", 0x1Bba6, 0x1Bbc6, indexSF1Sprites_Eagle },
};

const sDescTreeNode StreetFighter_A_Eagle_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Eagle_PALETTES, ARRAYSIZE(StreetFighter_A_Eagle_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Adon_PALETTES[] =
{
    { L"Adon", 0x1Bbc6, 0x1Bbe6, indexSF1Sprites_Adon },
};

const sDescTreeNode StreetFighter_A_Adon_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Adon_PALETTES, ARRAYSIZE(StreetFighter_A_Adon_PALETTES) },
};

const sGame_PaletteDataset StreetFighter_A_Sagat_PALETTES[] =
{
    { L"Sagat", 0x1Bbe6, 0x1Bc06, indexSF1Sprites_Sagat },
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
    { L"Joe", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Joe_COLLECTION, ARRAYSIZE(StreetFighter_A_Joe_COLLECTION) },
    { L"Lee", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Lee_COLLECTION, ARRAYSIZE(StreetFighter_A_Lee_COLLECTION) },
    { L"Mike", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Mike_COLLECTION, ARRAYSIZE(StreetFighter_A_Mike_COLLECTION) },

    { L"Gen", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Gen_COLLECTION, ARRAYSIZE(StreetFighter_A_Gen_COLLECTION) },
    { L"Birdie", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Birdie_COLLECTION, ARRAYSIZE(StreetFighter_A_Birdie_COLLECTION) },
    { L"Eagle", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Eagle_COLLECTION, ARRAYSIZE(StreetFighter_A_Eagle_COLLECTION) },
    { L"Adon", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Adon_COLLECTION, ARRAYSIZE(StreetFighter_A_Adon_COLLECTION) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Sagat_COLLECTION, ARRAYSIZE(StreetFighter_A_Sagat_COLLECTION) },

    { L"Board Breaking Game", DESC_NODETYPE_TREE, (void*)StreetFighter_A_BoardBreaking_COLLECTION, ARRAYSIZE(StreetFighter_A_BoardBreaking_COLLECTION) },
};

const sGame_PaletteDataset StreetFighter_S_RYU_PALETTES[] =
{
    { L"Ryu", 0x1a446, 0x1a466, indexSF1Sprites_Ryu },
};

const sDescTreeNode StreetFighter_S_Ryu_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)StreetFighter_S_RYU_PALETTES, ARRAYSIZE(StreetFighter_S_RYU_PALETTES) },
};

// Ryu alone moves relative to everybody else, so we'll fork to handle that
const sDescTreeNode StreetFighter_S_UNITS[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)StreetFighter_S_Ryu_COLLECTION, ARRAYSIZE(StreetFighter_S_Ryu_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Ken_COLLECTION, ARRAYSIZE(StreetFighter_A_Ken_COLLECTION) },
    { L"Geki", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Geki_COLLECTION, ARRAYSIZE(StreetFighter_A_Geki_COLLECTION) },
    { L"Retsu", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Retsu_COLLECTION, ARRAYSIZE(StreetFighter_A_Retsu_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Joe_COLLECTION, ARRAYSIZE(StreetFighter_A_Joe_COLLECTION) },
    { L"Lee", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Lee_COLLECTION, ARRAYSIZE(StreetFighter_A_Lee_COLLECTION) },
    { L"Mike", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Mike_COLLECTION, ARRAYSIZE(StreetFighter_A_Mike_COLLECTION) },

    { L"Gen", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Gen_COLLECTION, ARRAYSIZE(StreetFighter_A_Gen_COLLECTION) },
    { L"Birdie", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Birdie_COLLECTION, ARRAYSIZE(StreetFighter_A_Birdie_COLLECTION) },
    { L"Eagle", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Eagle_COLLECTION, ARRAYSIZE(StreetFighter_A_Eagle_COLLECTION) },
    { L"Adon", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Adon_COLLECTION, ARRAYSIZE(StreetFighter_A_Adon_COLLECTION) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)StreetFighter_A_Sagat_COLLECTION, ARRAYSIZE(StreetFighter_A_Sagat_COLLECTION) },

    { L"Board Breaking Game", DESC_NODETYPE_TREE, (void*)StreetFighter_A_BoardBreaking_COLLECTION, ARRAYSIZE(StreetFighter_A_BoardBreaking_COLLECTION) },
};

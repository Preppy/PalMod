#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to KI_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 KI_SNES_IMGIDS_USED[] =
{
    indexKISprites_Cinder,              // 0x6E
    indexKISprites_Eyedol,              // 0x6F
    indexKISprites_Fulgore,             // 0x70
    indexKISprites_Glacius,             // 0x71
    indexKISprites_Jago,                // 0x72
    indexKISprites_Orchid,              // 0x73
    indexKISprites_Riptor,              // 0x74
    indexKISprites_Sabrewulf,           // 0x75
    indexKISprites_Spinal,              // 0x76
    indexKISprites_Thunder,             // 0x77
    indexKISprites_TJCombo,             // 0x78
    indexKISprites_Bonus,               // 0x79
};

const sGame_PaletteDataset KI_SNES_Jago_PALETTES[] =
{
    { L"Jago 1", 0x1949, 0x1969, indexKISprites_Jago },
    { L"Jago 2", 0x1969, 0x1989, indexKISprites_Jago },
    { L"Jago 3", 0x1989, 0x19A9, indexKISprites_Jago },
    { L"Jago 4", 0x19A9, 0x19C9, indexKISprites_Jago },
    { L"Jago 5", 0x19C9, 0x19E9, indexKISprites_Jago },
    { L"Jago 6", 0x19E9, 0x1A09, indexKISprites_Jago },
    { L"Jago 7", 0x1A09, 0x1A29, indexKISprites_Jago },
    { L"Jago 8", 0x1A29, 0x1A49, indexKISprites_Jago },
};

const sGame_PaletteDataset KI_SNES_Combo_PALETTES[] =
{
    { L"Combo 1", 0x1A49, 0x1A69, indexKISprites_TJCombo },
    { L"Combo 2", 0x1A69, 0x1A89, indexKISprites_TJCombo },
    { L"Combo 3", 0x1A89, 0x1AA9, indexKISprites_TJCombo },
    { L"Combo 4", 0x1AA9, 0x1AC9, indexKISprites_TJCombo },
    { L"Combo 5", 0x1AC9, 0x1AE9, indexKISprites_TJCombo },
    { L"Combo 6", 0x1AE9, 0x1B09, indexKISprites_TJCombo },
    { L"Combo 7", 0x1B09, 0x1B29, indexKISprites_TJCombo },
    { L"Combo 8", 0x1B29, 0x1B49, indexKISprites_TJCombo },
};

const sGame_PaletteDataset KI_SNES_Spinal_PALETTES[] =
{
    { L"Spinal 1", 0x1B49, 0x1B69, indexKISprites_Spinal },
    { L"Spinal 2", 0x1B69, 0x1B89, indexKISprites_Spinal },
    { L"Spinal 3", 0x1B89, 0x1BA9, indexKISprites_Spinal },
    { L"Spinal 4", 0x1BA9, 0x1BC9, indexKISprites_Spinal },
    { L"Spinal 5", 0x1BC9, 0x1BE9, indexKISprites_Spinal },
    { L"Spinal 6", 0x1BE9, 0x1C09, indexKISprites_Spinal },
    { L"Spinal 7", 0x1C09, 0x1C29, indexKISprites_Spinal },
    { L"Spinal 8", 0x1C29, 0x1C49, indexKISprites_Spinal },
};

const sGame_PaletteDataset KI_SNES_Thunder_PALETTES[] =
{
    { L"Thunder 1", 0x1C49, 0x1C69, indexKISprites_Thunder },
    { L"Thunder 2", 0x1C69, 0x1C89, indexKISprites_Thunder },
    { L"Thunder 3", 0x1C89, 0x1CA9, indexKISprites_Thunder },
    { L"Thunder 4", 0x1CA9, 0x1CC9, indexKISprites_Thunder },
    { L"Thunder 5", 0x1CC9, 0x1CE9, indexKISprites_Thunder },
    { L"Thunder 6", 0x1CE9, 0x1D09, indexKISprites_Thunder },
    { L"Thunder 7", 0x1D09, 0x1D29, indexKISprites_Thunder },
    { L"Thunder 8", 0x1D29, 0x1D49, indexKISprites_Thunder },
};

const sGame_PaletteDataset KI_SNES_Glacius_PALETTES[] =
{
    { L"Glacius 1", 0x1D49, 0x1D69, indexKISprites_Glacius },
    { L"Glacius 2", 0x1D69, 0x1D89, indexKISprites_Glacius },
    { L"Glacius 3", 0x1D89, 0x1DA9, indexKISprites_Glacius },
    { L"Glacius 4", 0x1DA9, 0x1DC9, indexKISprites_Glacius },
    { L"Glacius 5", 0x1DC9, 0x1DE9, indexKISprites_Glacius },
    { L"Glacius 6", 0x1DE9, 0x1E09, indexKISprites_Glacius },
    { L"Glacius 7", 0x1E09, 0x1E29, indexKISprites_Glacius },
    { L"Glacius 8", 0x1E29, 0x1E49, indexKISprites_Glacius },
};

const sGame_PaletteDataset KI_SNES_Fulgore_PALETTES[] =
{
    { L"Fulgore 1", 0x1E49, 0x1E69, indexKISprites_Fulgore },
    { L"Fulgore 2", 0x1E69, 0x1E89, indexKISprites_Fulgore },
    { L"Fulgore 3", 0x1E89, 0x1EA9, indexKISprites_Fulgore },
    { L"Fulgore 4", 0x1EA9, 0x1EC9, indexKISprites_Fulgore },
    { L"Fulgore 5", 0x1EC9, 0x1EE9, indexKISprites_Fulgore },
    { L"Fulgore 6", 0x1EE9, 0x1F09, indexKISprites_Fulgore },
    { L"Fulgore 7", 0x1F09, 0x1F29, indexKISprites_Fulgore },
    { L"Fulgore 8", 0x1F29, 0x1F49, indexKISprites_Fulgore },
};

const sGame_PaletteDataset KI_SNES_Cinder_PALETTES[] =
{
    { L"Cinder 1", 0x1F49, 0x1F69, indexKISprites_Cinder },
    { L"Cinder 2", 0x1F69, 0x1F89, indexKISprites_Cinder },
    { L"Cinder 3", 0x1F89, 0x1FA9, indexKISprites_Cinder },
    { L"Cinder 4", 0x1FA9, 0x1FC9, indexKISprites_Cinder },
    { L"Cinder 5", 0x1FC9, 0x1FE9, indexKISprites_Cinder },
    { L"Cinder 6", 0x1FE9, 0x2009, indexKISprites_Cinder },
    { L"Cinder 7", 0x2009, 0x2029, indexKISprites_Cinder },
    { L"Cinder 8", 0x2029, 0x2049, indexKISprites_Cinder },
};

const sGame_PaletteDataset KI_SNES_Sabrewulf_PALETTES[] =
{
    { L"Sabrewulf 1", 0x2049, 0x2069, indexKISprites_Sabrewulf },
    { L"Sabrewulf 2", 0x2069, 0x2089, indexKISprites_Sabrewulf },
    { L"Sabrewulf 3", 0x2089, 0x20A9, indexKISprites_Sabrewulf },
    { L"Sabrewulf 4", 0x20A9, 0x20C9, indexKISprites_Sabrewulf },
    { L"Sabrewulf 5", 0x20C9, 0x20E9, indexKISprites_Sabrewulf },
    { L"Sabrewulf 6", 0x20E9, 0x2109, indexKISprites_Sabrewulf },
    { L"Sabrewulf 7", 0x2109, 0x2129, indexKISprites_Sabrewulf },
    { L"Sabrewulf 8", 0x2129, 0x2149, indexKISprites_Sabrewulf },
};

const sGame_PaletteDataset KI_SNES_Orchid_PALETTES[] =
{
    { L"Orchid 1", 0x2149, 0x2169, indexKISprites_Orchid },
    { L"Orchid 2", 0x2169, 0x2189, indexKISprites_Orchid },
    { L"Orchid 3", 0x2189, 0x21A9, indexKISprites_Orchid },
    { L"Orchid 4", 0x21A9, 0x21C9, indexKISprites_Orchid },
    { L"Orchid 5", 0x21C9, 0x21E9, indexKISprites_Orchid },
    { L"Orchid 6", 0x21E9, 0x2209, indexKISprites_Orchid },
    { L"Orchid 7", 0x2209, 0x2229, indexKISprites_Orchid },
    { L"Orchid 8", 0x2229, 0x2249, indexKISprites_Orchid },
};

const sGame_PaletteDataset KI_SNES_Riptor_PALETTES[] =
{
    { L"Riptor 1", 0x2249, 0x2269, indexKISprites_Riptor },
    { L"Riptor 2", 0x2269, 0x2289, indexKISprites_Riptor },
    { L"Riptor 3", 0x2289, 0x22A9, indexKISprites_Riptor },
    { L"Riptor 4", 0x22A9, 0x22C9, indexKISprites_Riptor },
    { L"Riptor 5", 0x22C9, 0x22E9, indexKISprites_Riptor },
    { L"Riptor 6", 0x22E9, 0x2309, indexKISprites_Riptor },
    { L"Riptor 7", 0x2309, 0x2329, indexKISprites_Riptor },
    { L"Riptor 8", 0x2329, 0x2349, indexKISprites_Riptor },
};

const sGame_PaletteDataset KI_SNES_Eyedol_PALETTES[] =
{
    { L"Eyedol 1", 0x2349, 0x2369, indexKISprites_Eyedol },
    { L"Eyedol 2", 0x2369, 0x2389, indexKISprites_Eyedol },
};

const sDescTreeNode KI_SNES_JAGO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Jago_PALETTES, ARRAYSIZE(KI_SNES_Jago_PALETTES) },
};

const sDescTreeNode KI_SNES_COMBO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Combo_PALETTES, ARRAYSIZE(KI_SNES_Combo_PALETTES) },
};

const sDescTreeNode KI_SNES_SPINAL_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Spinal_PALETTES, ARRAYSIZE(KI_SNES_Spinal_PALETTES) },
};

const sDescTreeNode KI_SNES_THUNDER_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Thunder_PALETTES, ARRAYSIZE(KI_SNES_Thunder_PALETTES) },
};

const sDescTreeNode KI_SNES_GLACIUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Glacius_PALETTES, ARRAYSIZE(KI_SNES_Glacius_PALETTES) },
};

const sDescTreeNode KI_SNES_FULGORE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Fulgore_PALETTES, ARRAYSIZE(KI_SNES_Fulgore_PALETTES) },
};

const sDescTreeNode KI_SNES_CINDER_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Cinder_PALETTES, ARRAYSIZE(KI_SNES_Cinder_PALETTES) },
};

const sDescTreeNode KI_SNES_SABREWULF_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Sabrewulf_PALETTES, ARRAYSIZE(KI_SNES_Sabrewulf_PALETTES) },
};

const sDescTreeNode KI_SNES_ORCHID_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Orchid_PALETTES, ARRAYSIZE(KI_SNES_Orchid_PALETTES) },
};

const sDescTreeNode KI_SNES_RIPTOR_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Riptor_PALETTES, ARRAYSIZE(KI_SNES_Riptor_PALETTES) },
};

const sDescTreeNode KI_SNES_EYEDOL_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_Eyedol_PALETTES, ARRAYSIZE(KI_SNES_Eyedol_PALETTES) },
};

const sDescTreeNode KI_SNES_UNITS[] =
{
    { L"Jago", DESC_NODETYPE_TREE, (void*)KI_SNES_JAGO_COLLECTION, ARRAYSIZE(KI_SNES_JAGO_COLLECTION) },
    { L"Combo", DESC_NODETYPE_TREE, (void*)KI_SNES_COMBO_COLLECTION, ARRAYSIZE(KI_SNES_COMBO_COLLECTION) },
    { L"Spinal", DESC_NODETYPE_TREE, (void*)KI_SNES_SPINAL_COLLECTION, ARRAYSIZE(KI_SNES_SPINAL_COLLECTION) },
    { L"Thunder", DESC_NODETYPE_TREE, (void*)KI_SNES_THUNDER_COLLECTION, ARRAYSIZE(KI_SNES_THUNDER_COLLECTION) },
    { L"Glacius", DESC_NODETYPE_TREE, (void*)KI_SNES_GLACIUS_COLLECTION, ARRAYSIZE(KI_SNES_GLACIUS_COLLECTION) },
    { L"Fulgore", DESC_NODETYPE_TREE, (void*)KI_SNES_FULGORE_COLLECTION, ARRAYSIZE(KI_SNES_FULGORE_COLLECTION) },
    { L"Cinder", DESC_NODETYPE_TREE, (void*)KI_SNES_CINDER_COLLECTION, ARRAYSIZE(KI_SNES_CINDER_COLLECTION) },
    { L"Sabrewulf", DESC_NODETYPE_TREE, (void*)KI_SNES_SABREWULF_COLLECTION, ARRAYSIZE(KI_SNES_SABREWULF_COLLECTION) },
    { L"Orchid", DESC_NODETYPE_TREE, (void*)KI_SNES_ORCHID_COLLECTION, ARRAYSIZE(KI_SNES_ORCHID_COLLECTION) },
    { L"Riptor", DESC_NODETYPE_TREE, (void*)KI_SNES_RIPTOR_COLLECTION, ARRAYSIZE(KI_SNES_RIPTOR_COLLECTION) },
    { L"Eyedol", DESC_NODETYPE_TREE, (void*)KI_SNES_EYEDOL_COLLECTION, ARRAYSIZE(KI_SNES_EYEDOL_COLLECTION) },
};

constexpr auto KI_SNES_NUMUNIT = ARRAYSIZE(KI_SNES_UNITS);

#define KI_SNES_EXTRALOC KI_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef KI_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

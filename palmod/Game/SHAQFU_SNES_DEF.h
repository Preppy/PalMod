#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to SHAQFU_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> SHAQFU_SNES_IMGIDS_USED =
{
    // Just stub this until we get sprites
    indexMK1Sprites_Goro,                // 0xAA
};

const sGame_PaletteDataset SHAQFU_SNES_SHAQ_P1_PALETTES[] =
{
    { L"Shaq P1", 0x13FFAC, 0x13FFCC },
    { L"Shaq Fu P1 Portrait", 0x1fdf88, 0x1fdfa8 },
};

const sGame_PaletteDataset SHAQFU_SNES_SHAQ_P2_PALETTES[] =
{
    { L"Shaq P2", 0x13FFCC, 0x13FFEC },
    { L"Shaq Fu P2 Portrait", 0x1fe068, 0x1fe088 },
};

const sGame_PaletteDataset SHAQFU_SNES_KAORI_P1_PALETTES[] =
{
    { L"Kaori P1", 0x1FD921, 0x1FD941 },
    { L"Kaori P1 Portrait", 0x1fdfa8, 0x1fdfc8 },
};

const sGame_PaletteDataset SHAQFU_SNES_KAORI_P2_PALETTES[] =
{
    { L"Kaori P2", 0x1FD941, 0x1FD961 },
    { L"Kaori P2 Portrait", 0x1fe088, 0x1fe0a8 },
};

const sGame_PaletteDataset SHAQFU_SNES_BEAST_P1_PALETTES[] =
{
    { L"Beast P1", 0x1FD961, 0x1FD981 },
    { L"Beast P1 Portrait", 0x1fdfc8, 0x1fdfe8 },
};

const sGame_PaletteDataset SHAQFU_SNES_BEAST_P2_PALETTES[] =
{
    { L"Beast P2", 0x1FD981, 0x1FD9A1 },
    { L"Beast P2 Portrait", 0x1fe0a8, 0x1fe0c8 },
};

const sGame_PaletteDataset SHAQFU_SNES_SETT_P1_PALETTES[] =
{
    { L"Sett P1", 0x1FD8E1, 0x1FD901 },
    { L"Sett P1 Portrait", 0x1fdfe8, 0x1fe008 },
};

const sGame_PaletteDataset SHAQFU_SNES_SETT_P2_PALETTES[] =
{
    { L"Sett P2", 0x1FD901, 0x1FD921 },
    { L"Sett P2 Portrait", 0x1fe0c8, 0x1fe0e8 },
};

const sGame_PaletteDataset SHAQFU_SNES_MEMPHIS_P1_PALETTES[] =
{
    { L"Memphis P1", 0x1FD8A1, 0x1FD8C1 },
    { L"Memphis P1 Portrait", 0x1fe008, 0x1fe028 },
};

const sGame_PaletteDataset SHAQFU_SNES_MEMPHIS_P2_PALETTES[] =
{
    { L"Memphis P2", 0x1FD8C1, 0x1FD8E1 },
    { L"Memphis P2 Portrait", 0x1fe0e8, 0x1fe108 },
};

const sGame_PaletteDataset SHAQFU_SNES_VOODOO_P1_PALETTES[] =
{
    { L"Voodoo P1", 0x1FD9A1, 0x1FD9C1 },
    { L"Voodoo P1 Portrait", 0x1fe028, 0x1fe048 },
};

const sGame_PaletteDataset SHAQFU_SNES_VOODOO_P2_PALETTES[] =
{
    { L"Voodoo P2", 0x1FD9C1, 0x1FD9E1 },
    { L"Voodoo P2 Portrait", 0x1fe108, 0x1fe128 },
};

const sGame_PaletteDataset SHAQFU_SNES_RAJAH_P1_PALETTES[] =
{
    { L"Rajah P1", 0x1FD9E1, 0x1FDA01 },
    { L"Rajah P1 Portrait", 0x1fe048, 0x1fe068 },
};

const sGame_PaletteDataset SHAQFU_SNES_RAJAH_P2_PALETTES[] =
{
    { L"Rajah P2", 0x1FDA01, 0x1FDA21 },
    { L"Rajah P2 Portrait", 0x1fe128, 0x1fe148 },
};

const sGame_PaletteDataset SHAQFU_SNES_BONUS_PALETTES[] =
{    
    { L"CSS Icon (Kaori, Voodoo)", 0x1FBD56, 0x1FBD76 },
    { L"CSS Icon (Beast, Sett)", 0x1FBD76, 0x1FBD96 },
    { L"CSS Icon (Memphis)", 0x1FBD96, 0x1FBDB6 },
    { L"CSS Icon (Shaq, Rajah)", 0x1FBDB6, 0x1FBDD6 },
    { L"1P/2P Select Cursor", 0x1FBD36, 0x1FBD56 },
    { L"VS Text", 0x1fdf68, 0x1fdf88 },
};

const sDescTreeNode SHAQFU_SNES_SHAQ_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_SHAQ_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_SHAQ_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_SHAQ_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_SHAQ_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_KAORI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_KAORI_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_KAORI_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_KAORI_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_KAORI_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_BEAST_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_BEAST_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_BEAST_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_BEAST_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_BEAST_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_SETT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_SETT_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_SETT_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_SETT_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_SETT_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_MEMPHIS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_MEMPHIS_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_MEMPHIS_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_MEMPHIS_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_MEMPHIS_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_VOODOO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_VOODOO_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_VOODOO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_VOODOO_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_VOODOO_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_RAJAH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_RAJAH_P1_PALETTES, ARRAYSIZE(SHAQFU_SNES_RAJAH_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_RAJAH_P2_PALETTES, ARRAYSIZE(SHAQFU_SNES_RAJAH_P2_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_BONUS_PALETTES, ARRAYSIZE(SHAQFU_SNES_BONUS_PALETTES) },
};

const sDescTreeNode SHAQFU_SNES_UNITS[] =
{
    { L"Shaq", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_SHAQ_COLLECTION, ARRAYSIZE(SHAQFU_SNES_SHAQ_COLLECTION) },
    { L"Kaori", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_KAORI_COLLECTION, ARRAYSIZE(SHAQFU_SNES_KAORI_COLLECTION) },
    { L"Beast", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_BEAST_COLLECTION, ARRAYSIZE(SHAQFU_SNES_BEAST_COLLECTION) },
    { L"Sett", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_SETT_COLLECTION, ARRAYSIZE(SHAQFU_SNES_SETT_COLLECTION) },
    { L"Memphis", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_MEMPHIS_COLLECTION, ARRAYSIZE(SHAQFU_SNES_MEMPHIS_COLLECTION) },
    { L"Voodoo", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_VOODOO_COLLECTION, ARRAYSIZE(SHAQFU_SNES_VOODOO_COLLECTION) },
    { L"Rajah", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_RAJAH_COLLECTION, ARRAYSIZE(SHAQFU_SNES_RAJAH_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SHAQFU_SNES_BONUS_COLLECTION, ARRAYSIZE(SHAQFU_SNES_BONUS_COLLECTION) },
};

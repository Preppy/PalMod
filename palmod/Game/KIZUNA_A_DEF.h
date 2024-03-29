#pragma once

const std::vector<uint16_t> Kizuna_A_IMGIDS_USED =
{
    indexKizunaESprites_Chung,              // 0xA6
    indexKizunaESprites_Eagle,              // 0xA7
    indexKizunaESprites_Gordon,             // 0xA8
    indexKizunaESprites_Gozu,               // 0xA9
    indexKizunaESprites_Hayate,             // 0xAA
    indexKizunaESprites_Jazu,               // 0xAB
    indexKizunaESprites_Joker,              // 0xAC
    indexKizunaESprites_Kim,                // 0xAD
    indexKizunaESprites_KingLion,           // 0xAE
    indexKizunaESprites_Mezu,               // 0xAF
    indexKizunaESprites_Rosa,               // 0xB0
    indexKizunaESprites_Bonus,              // 0xB1
};

const sGame_PaletteDataset Kizuna_A_HAYATE_PALETTES_A[] =
{
    { L"Hayate A", 0x170200, 0x170240, indexKizunaESprites_Hayate, 0x00 },
    { L"Hayate Background A", 0x170400, 0x170440, indexKizunaESprites_Hayate, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_HAYATE_PALETTES_D[] =
{
    { L"Hayate D", 0x172900, 0x172940, indexKizunaESprites_Hayate, 0x00 },
    { L"Hayate Background D", 0x172b00, 0x172b40, indexKizunaESprites_Hayate, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_EAGLE_PALETTES_A[] =
{
    { L"Eagle A", 0x170500, 0x170540, indexKizunaESprites_Eagle, 0x00 },
    { L"Eagle Background A", 0x1706e0, 0x170720, indexKizunaESprites_Eagle, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_EAGLE_PALETTES_D[] =
{
    { L"Eagle D", 0x172c00, 0x172c40, indexKizunaESprites_Eagle, 0x00 },
    { L"Eagle Background D", 0x172de0, 0x172e20, indexKizunaESprites_Eagle, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_GOZU_PALETTES_A[] =
{
    { L"Gozu A", 0x170800, 0x170840, indexKizunaESprites_Gozu, 0x00 },
    { L"Gozu Background A", 0x170a00, 0x170a20, indexKizunaESprites_Gozu, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_GOZU_PALETTES_D[] =
{
    { L"Gozu D", 0x172f00, 0x172f40, indexKizunaESprites_Gozu, 0x00 },
    { L"Gozu Background D", 0x173100, 0x173120, indexKizunaESprites_Gozu, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_MEZU_PALETTES_A[] =
{
    { L"Mezu A", 0x170b00, 0x170b40, indexKizunaESprites_Mezu, 0x00 },
    { L"Mezu Background A", 0x170d00, 0x170d20, indexKizunaESprites_Mezu, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_MEZU_PALETTES_D[] =
{
    { L"Mezu D", 0x173200, 0x173240, indexKizunaESprites_Mezu, 0x00 },
    { L"Mezu Background D", 0x173400, 0x173420, indexKizunaESprites_Mezu, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_ROSA_PALETTES_A[] =
{
    { L"Rosa A", 0x170e00, 0x170e40, indexKizunaESprites_Rosa, 0x00, &pairNext2 },
    { L"Rosa Background A", 0x171000, 0x171040, indexKizunaESprites_Rosa, 0x00, &pairNext },
    { L"Rosa's Sword A", 0x170f60, 0x170f80, indexKizunaESprites_Rosa, 0x01 },
};

const sGame_PaletteDataset Kizuna_A_ROSA_PALETTES_D[] =
{
    { L"Rosa D", 0x173500, 0x173540, indexKizunaESprites_Rosa, 0x00, &pairNext2 },
    { L"Rosa Background D", 0x173700, 0x173740, indexKizunaESprites_Rosa, 0x00, &pairNext },
    { L"Rosa's Sword D", 0x173660, 0x173680, indexKizunaESprites_Rosa, 0x01 },
};

const sGame_PaletteDataset Kizuna_A_KIM_PALETTES_A[] =
{
    { L"Kim A", 0x171100, 0x171140, indexKizunaESprites_Kim, 0x00 },
    { L"Kim Background A", 0x171300, 0x171320, indexKizunaESprites_Kim, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_KIM_PALETTES_D[] =
{
    { L"Kim D", 0x173800, 0x173840, indexKizunaESprites_Kim, 0x00 },
    { L"Kim Background D", 0x173a00, 0x173a20, indexKizunaESprites_Kim, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_JOKER_PALETTES_A[] =
{
    { L"Joker A", 0x171400, 0x171440, indexKizunaESprites_Joker, 0x00 },
    { L"Joker Background A", 0x171600, 0x171640, indexKizunaESprites_Joker, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_JOKER_PALETTES_D[] =
{
    { L"Joker D", 0x173b00, 0x173b40, indexKizunaESprites_Joker, 0x00 },
    { L"Joker Background D", 0x173d00, 0x173d20, indexKizunaESprites_Joker, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_CHUNG_PALETTES_A[] =
{
    { L"Chung A", 0x171700, 0x171740, indexKizunaESprites_Chung, 0x00 },
    { L"Chung Background A", 0x171900, 0x171940, indexKizunaESprites_Chung, 0x00 },
    { L"Chung Rage A", 0x171840, 0x171880, indexKizunaESprites_Chung, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_CHUNG_PALETTES_D[] =
{
    { L"Chung D", 0x173e00, 0x173e40, indexKizunaESprites_Chung, 0x00 },
    { L"Chung Background D", 0x174000, 0x174040, indexKizunaESprites_Chung, 0x00 },
    { L"Chung Rage D", 0x173f40, 0x173f80, indexKizunaESprites_Chung, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_GORDON_PALETTES_A[] =
{
    { L"Gordon A", 0x171a00, 0x171a40, indexKizunaESprites_Gordon, 0x00 },
    { L"Gordon Background A", 0x171c00, 0x171c20, indexKizunaESprites_Gordon, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_GORDON_PALETTES_D[] =
{
    { L"Gordon D", 0x174100, 0x174140, indexKizunaESprites_Gordon, 0x00 },
    { L"Gordon Background D", 0x174300, 0x174320, indexKizunaESprites_Gordon, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_KINGLION_PALETTES_A[] =
{
    { L"King Lion A", 0x171d00, 0x171d40, indexKizunaESprites_KingLion, 0x00 },
    { L"King Lion Background A", 0x171ee0, 0x171f20, indexKizunaESprites_KingLion, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_KINGLION_PALETTES_D[] =
{
    { L"King Lion D", 0x174400, 0x174440, indexKizunaESprites_KingLion, 0x00 },
    { L"King Lion Background D", 0x174600, 0x174620, indexKizunaESprites_KingLion, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_KINGLION_PALETTES_SHARED[] =
{
    { L"Shin King Lion", 0x172000, 0x172040, indexKizunaESprites_KingLion, 0x00 },
};

const sGame_PaletteDataset Kizuna_A_JAZU_PALETTES[] =
{
    { L"Jazu", 0x172600, 0x172640, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Jazu's Mask", 0x1727c0, 0x1727e0, indexKizunaESprites_Jazu, 0x01 },
};

const sGame_PaletteDataset Kizuna_A_VICTORYPORTRAITS_PALETTES[] =
{
    { L"Hayate Victory Portrait A", 0x17c600, 0x17c640 },
    { L"Eagle Victory Portrait A", 0x17c640, 0x17c660 },
    { L"Gozu Victory Portrait A", 0x17c680, 0x17c6a0 },
    { L"Mezu Victory Portrait A", 0x17c6c0, 0x17c6e0 },
    { L"Rosa Victory Portrait A", 0x17c700, 0x17c720 },
};

const sDescTreeNode Kizuna_A_HAYATE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_PALETTES_A, ARRAYSIZE(Kizuna_A_HAYATE_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_PALETTES_D, ARRAYSIZE(Kizuna_A_HAYATE_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_EAGLE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_PALETTES_A, ARRAYSIZE(Kizuna_A_EAGLE_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_PALETTES_D, ARRAYSIZE(Kizuna_A_EAGLE_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_GOZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_PALETTES_A, ARRAYSIZE(Kizuna_A_GOZU_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_PALETTES_D, ARRAYSIZE(Kizuna_A_GOZU_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_MEZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_PALETTES_A, ARRAYSIZE(Kizuna_A_MEZU_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_PALETTES_D, ARRAYSIZE(Kizuna_A_MEZU_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_ROSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_PALETTES_A, ARRAYSIZE(Kizuna_A_ROSA_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_PALETTES_D, ARRAYSIZE(Kizuna_A_ROSA_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_PALETTES_A, ARRAYSIZE(Kizuna_A_KIM_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_PALETTES_D, ARRAYSIZE(Kizuna_A_KIM_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_JOKER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_PALETTES_A, ARRAYSIZE(Kizuna_A_JOKER_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_PALETTES_D, ARRAYSIZE(Kizuna_A_JOKER_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_CHUNG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_PALETTES_A, ARRAYSIZE(Kizuna_A_CHUNG_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_PALETTES_D, ARRAYSIZE(Kizuna_A_CHUNG_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_GORDON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_PALETTES_A, ARRAYSIZE(Kizuna_A_GORDON_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_PALETTES_D, ARRAYSIZE(Kizuna_A_GORDON_PALETTES_D) },
};

const sDescTreeNode Kizuna_A_KINGLION_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_PALETTES_A, ARRAYSIZE(Kizuna_A_KINGLION_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_PALETTES_D, ARRAYSIZE(Kizuna_A_KINGLION_PALETTES_D) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_PALETTES_SHARED, ARRAYSIZE(Kizuna_A_KINGLION_PALETTES_SHARED) },
};

const sDescTreeNode Kizuna_A_JAZU_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Kizuna_A_JAZU_PALETTES, ARRAYSIZE(Kizuna_A_JAZU_PALETTES) },
};

const sDescTreeNode Kizuna_A_PORTRAITS_COLLECTION[] =
{
    { L"Victory Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_VICTORYPORTRAITS_PALETTES, ARRAYSIZE(Kizuna_A_VICTORYPORTRAITS_PALETTES) },
};

const sDescTreeNode Kizuna_A_UNITS[] =
{
    { L"Hayate", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_COLLECTION, ARRAYSIZE(Kizuna_A_HAYATE_COLLECTION) },
    { L"Eagle", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_COLLECTION, ARRAYSIZE(Kizuna_A_EAGLE_COLLECTION) },
    { L"Gozu", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_COLLECTION, ARRAYSIZE(Kizuna_A_GOZU_COLLECTION) },
    { L"Mezu", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_COLLECTION, ARRAYSIZE(Kizuna_A_MEZU_COLLECTION) },
    { L"Rosa", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_COLLECTION, ARRAYSIZE(Kizuna_A_ROSA_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_COLLECTION, ARRAYSIZE(Kizuna_A_KIM_COLLECTION) },
    { L"Joker", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_COLLECTION, ARRAYSIZE(Kizuna_A_JOKER_COLLECTION) },
    { L"Chung", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_COLLECTION, ARRAYSIZE(Kizuna_A_CHUNG_COLLECTION) },
    { L"Gordon", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_COLLECTION, ARRAYSIZE(Kizuna_A_GORDON_COLLECTION) },
    { L"King Lion", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_COLLECTION, ARRAYSIZE(Kizuna_A_KINGLION_COLLECTION) },
    { L"Jazu", DESC_NODETYPE_TREE, (void*)Kizuna_A_JAZU_COLLECTION, ARRAYSIZE(Kizuna_A_JAZU_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_PORTRAITS_COLLECTION, ARRAYSIZE(Kizuna_A_PORTRAITS_COLLECTION) },
};

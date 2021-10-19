#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to Cyberbots_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 Cyberbots_A_IMGIDS_USED[] =
{
    indexCPS2Sprites_Jin,          // not actually used: placeholder
};

const sGame_PaletteDataset Cyberbots_A_JIN_PALETTES[] =
{
    { L"Jin Select + Intro", 0x54fe4, 0x55024 },
    { L"Jin In-Game", 0x549e4, 0x54a44 },
    { L"Jin HUD Portrait", 0x54ee4, 0x54f04 },
};

const sGame_PaletteDataset Cyberbots_A_SANTANA_PALETTES[] =
{
    { L"Santana Select + Intro", 0x55064, 0x550a4 },
    { L"Santana In-Game", 0x54a44, 0x54aa4 },
    { L"Santana HUD Portrait", 0x54f04, 0x54f24 },
};

const sGame_PaletteDataset Cyberbots_A_MARY_PALETTES[] =
{
    { L"Mary Select + Intro", 0x550e4, 0x55124 },
    { L"Mary In-Game", 0x54aa4, 0x54b04 },
    { L"Mary HUD Portrait", 0x54f24, 0x54f44 },
};

const sGame_PaletteDataset Cyberbots_A_ARIETA_PALETTES[] =
{
    { L"Arieta Select + Intro", 0x55164, 0x551c4 },
    { L"Arieta In-Game", 0x54b04, 0x54b64 },
    { L"Arieta HUD Portrait", 0x54f44, 0x54f64 },
    { L"Arieta Extra BG", 0x54e64, 0x54e84 },
};

const sGame_PaletteDataset Cyberbots_A_GAWAINE_PALETTES[] =
{
    { L"Gawaine Select + Intro", 0x551e4, 0x55264 },
    { L"Gawaine In-Game", 0x54b64, 0x54bc4 },
    { L"Gawaine HUD", 0x54f64, 0x54f84 },
};

const sGame_PaletteDataset Cyberbots_A_BAO_PALETTES[] =
{
    { L"Bao & Mao Select + Intro", 0x55264, 0x552c4 },
    { L"Bao & Mao In-Game (1/2)", 0x54bc4, 0x54c24, -1, -1, &pairNext },
    { L"Bao & Mao In-Game (2/2)", 0x54e04, 0x54e64, -1, -1, &pairPrevious },
    { L"Bao & Mao HUD", 0x54f84, 0x54fa4 },

    { L"Shared Background (Bao Mao/Mary)", 0x54e84, 0x54ea4 },
};

const sGame_PaletteDataset Cyberbots_A_DEVILOTTE_PALETTES[] =
{
    { L"Devilotte", 0x54c24, 0x54c84 },
};

const sGame_PaletteDataset Cyberbots_A_CHIYOMARU_PALETTES[] =
{
    { L"Chiyomaru & Tessan", 0x54c84, 0x54ce4 },
};

const sGame_PaletteDataset Cyberbots_A_SHADE_PALETTES[] =
{
    { L"Shade", 0x54ce4, 0x54d44 },
};

const sGame_PaletteDataset Cyberbots_A_GOD_PALETTES[] =
{
    { L"G.O.D.", 0x54d44, 0x54da4 }, 
};

const sDescTreeNode Cyberbots_A_JIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JIN_PALETTES, ARRAYSIZE(Cyberbots_A_JIN_PALETTES) },
};

const sDescTreeNode Cyberbots_A_SANTANA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SANTANA_PALETTES, ARRAYSIZE(Cyberbots_A_SANTANA_PALETTES) },
};

const sDescTreeNode Cyberbots_A_MARY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_MARY_PALETTES, ARRAYSIZE(Cyberbots_A_MARY_PALETTES) },
};

const sDescTreeNode Cyberbots_A_ARIETA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_ARIETA_PALETTES, ARRAYSIZE(Cyberbots_A_ARIETA_PALETTES) },
};

const sDescTreeNode Cyberbots_A_GAWAINE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAWAINE_PALETTES, ARRAYSIZE(Cyberbots_A_GAWAINE_PALETTES) },
};

const sDescTreeNode Cyberbots_A_BAO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BAO_PALETTES, ARRAYSIZE(Cyberbots_A_BAO_PALETTES) },
};

const sDescTreeNode Cyberbots_A_DEVILOTTE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_DEVILOTTE_PALETTES, ARRAYSIZE(Cyberbots_A_DEVILOTTE_PALETTES) },
};

const sDescTreeNode Cyberbots_A_CHIYOMARU_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CHIYOMARU_PALETTES, ARRAYSIZE(Cyberbots_A_CHIYOMARU_PALETTES) },
};

const sDescTreeNode Cyberbots_A_SHADE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SHADE_PALETTES, ARRAYSIZE(Cyberbots_A_SHADE_PALETTES) },
};

const sDescTreeNode Cyberbots_A_GOD_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GOD_PALETTES, ARRAYSIZE(Cyberbots_A_GOD_PALETTES) },
};

const sDescTreeNode Cyberbots_A_UNITS[] =
{
    { L"Jin Saotome", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JIN_COLLECTION, ARRAYSIZE(Cyberbots_A_JIN_COLLECTION) },
    { L"Santana Laurence", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SANTANA_COLLECTION, ARRAYSIZE(Cyberbots_A_SANTANA_COLLECTION) },
    { L"Mary Miyabi", DESC_NODETYPE_TREE, (void*)Cyberbots_A_MARY_COLLECTION, ARRAYSIZE(Cyberbots_A_MARY_COLLECTION) },
    { L"Arieta", DESC_NODETYPE_TREE, (void*)Cyberbots_A_ARIETA_COLLECTION, ARRAYSIZE(Cyberbots_A_ARIETA_COLLECTION) },
    { L"Gawaine Murdock", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAWAINE_COLLECTION, ARRAYSIZE(Cyberbots_A_GAWAINE_COLLECTION) },
    { L"Bao and Mao", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BAO_COLLECTION, ARRAYSIZE(Cyberbots_A_BAO_COLLECTION) },
    { L"Princess Devilotte", DESC_NODETYPE_TREE, (void*)Cyberbots_A_DEVILOTTE_COLLECTION, ARRAYSIZE(Cyberbots_A_DEVILOTTE_COLLECTION) },
    { L"Chiyomaru and Tessan", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CHIYOMARU_COLLECTION, ARRAYSIZE(Cyberbots_A_CHIYOMARU_COLLECTION) },
    { L"Shade", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SHADE_COLLECTION, ARRAYSIZE(Cyberbots_A_SHADE_COLLECTION) },
    { L"G.O.D.", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GOD_COLLECTION, ARRAYSIZE(Cyberbots_A_GOD_COLLECTION) },
};

constexpr auto Cyberbots_A_NUMUNIT = ARRAYSIZE(Cyberbots_A_UNITS);

#define Cyberbots_A_EXTRALOC Cyberbots_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef Cyberbots_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

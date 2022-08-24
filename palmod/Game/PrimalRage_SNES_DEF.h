#pragma once

const std::vector<uint16_t> PrimalRage_SNES_IMGIDS_USED =
{
};

const sGame_PaletteDataset PrimalRage_SNES_SAURON_PALETTES_A[] =
{
    { L"Sauron A", 0x19071, 0x19091 },
};

const sGame_PaletteDataset PrimalRage_SNES_SAURON_PALETTES_XA[] =
{
    { L"Sauron X+A", 0x19091, 0x190b1 },
};

const sGame_PaletteDataset PrimalRage_SNES_SAURON_PALETTES_BA[] =
{
    { L"Sauron B+A", 0x190b1, 0x190d1 },
};

const sGame_PaletteDataset PrimalRage_SNES_SAURON_PALETTES_YA[] =
{
    { L"Sauron Y+A", 0x190d1, 0x190f1 },
};

const sGame_PaletteDataset PrimalRage_SNES_TALON_PALETTES_A[] =
{
    { L"Talon A", 0x191f1, 0x19211 },
};

const sGame_PaletteDataset PrimalRage_SNES_TALON_PALETTES_XA[] =
{
    { L"Talon X+A", 0x19211, 0x19231 },
};

const sGame_PaletteDataset PrimalRage_SNES_TALON_PALETTES_BA[] =
{
    { L"Talon B+A", 0x19231, 0x19251 },
};

const sGame_PaletteDataset PrimalRage_SNES_TALON_PALETTES_YA[] =
{
    { L"Talon Y+A", 0x19251, 0x19271 },
};

const sGame_PaletteDataset PrimalRage_SNES_VERTIGO_PALETTES_A[] =
{
    { L"Vertigo A", 0x192b1, 0x192d1 },
};

const sGame_PaletteDataset PrimalRage_SNES_VERTIGO_PALETTES_XA[] =
{
    { L"Vertigo X+A", 0x192d1, 0x192f1 },
};

const sGame_PaletteDataset PrimalRage_SNES_VERTIGO_PALETTES_BA[] =
{
    { L"Vertigo B+A", 0x192f1, 0x19311 },
};

const sGame_PaletteDataset PrimalRage_SNES_VERTIGO_PALETTES_YA[] =
{
    { L"Vertigo Y+A", 0x19311, 0x19331 },
};

const sGame_PaletteDataset PrimalRage_SNES_BLIZZARD_PALETTES_A[] =
{
    { L"Blizzard A", 0x19131, 0x19151 },
};

const sGame_PaletteDataset PrimalRage_SNES_BLIZZARD_PALETTES_XA[] =
{
    { L"Blizzard X+A", 0x19151, 0x19171 },
};

const sGame_PaletteDataset PrimalRage_SNES_BLIZZARD_PALETTES_BA[] =
{
    { L"Blizzard B+A", 0x19171, 0x19191 },
};

const sGame_PaletteDataset PrimalRage_SNES_BLIZZARD_PALETTES_YA[] =
{
    { L"Blizzard Y+A", 0x19191, 0x191b1 },
};

const sGame_PaletteDataset PrimalRage_SNES_CHAOS_PALETTES_A[] =
{
    { L"Chaos A", 0x194f1, 0x19511 },
};

const sGame_PaletteDataset PrimalRage_SNES_CHAOS_PALETTES_XA[] =
{
    { L"Chaos X+A", 0x19511, 0x19531 },
};

const sGame_PaletteDataset PrimalRage_SNES_CHAOS_PALETTES_BA[] =
{
    { L"Chaos B+A", 0x19531, 0x19551 },
};

const sGame_PaletteDataset PrimalRage_SNES_CHAOS_PALETTES_YA[] =
{
    { L"Chaos Y+A", 0x19551, 0x19571 },
};

const sGame_PaletteDataset PrimalRage_SNES_ARMADON_PALETTES_A[] =
{
    { L"Armadon A", 0x19371, 0x19391 },
};

const sGame_PaletteDataset PrimalRage_SNES_ARMADON_PALETTES_XA[] =
{
    { L"Armadon X+A", 0x19391, 0x193b1 },
};

const sGame_PaletteDataset PrimalRage_SNES_ARMADON_PALETTES_BA[] =
{
    { L"Armadon B+A", 0x193b1, 0x193d1 },
};

const sGame_PaletteDataset PrimalRage_SNES_ARMADON_PALETTES_YA[] =
{
    { L"Armadon Y+A", 0x193d1, 0x193f1 },
};

const sGame_PaletteDataset PrimalRage_SNES_DIABLO_PALETTES_A[] =
{
    { L"Diablo A ", 0x19431, 0x19451 },
};

const sGame_PaletteDataset PrimalRage_SNES_DIABLO_PALETTES_XA[] =
{
    { L"Diablo X+A", 0x19451, 0x19471 },
};

const sGame_PaletteDataset PrimalRage_SNES_DIABLO_PALETTES_BA[] =
{
    { L"Diablo B+A", 0x19471, 0x19491 },
};

const sGame_PaletteDataset PrimalRage_SNES_DIABLO_PALETTES_YA[] =
{
    { L"Diablo Y+A", 0x19491, 0x194b1 },
};

const sGame_PaletteDataset PrimalRage_SNES_BONUS_PALETTES[] =
{
    { L"Time Warner Interactive logo", 0x44722, 0x447a2 },
    { L"Bitmasters logo", 0x42308, 0x42468 },
    { L"Character Names & Effects", 0x19651, 0x19671 },
};

const sDescTreeNode PrimalRage_SNES_SAURON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_SAURON_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_SAURON_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_SAURON_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_SAURON_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_SAURON_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_SAURON_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_SAURON_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_SAURON_PALETTES_YA) },
   
};

const sDescTreeNode PrimalRage_SNES_TALON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_TALON_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_TALON_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_TALON_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_TALON_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_TALON_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_TALON_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_TALON_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_TALON_PALETTES_YA) },

};

const sDescTreeNode PrimalRage_SNES_VERTIGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_VERTIGO_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_VERTIGO_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_VERTIGO_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_VERTIGO_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_VERTIGO_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_VERTIGO_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_VERTIGO_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_VERTIGO_PALETTES_YA) },

};

const sDescTreeNode PrimalRage_SNES_BLIZZARD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BLIZZARD_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_BLIZZARD_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BLIZZARD_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_BLIZZARD_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BLIZZARD_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_BLIZZARD_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BLIZZARD_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_BLIZZARD_PALETTES_YA) },
};

const sDescTreeNode PrimalRage_SNES_CHAOS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_CHAOS_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_CHAOS_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_CHAOS_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_CHAOS_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_CHAOS_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_CHAOS_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_CHAOS_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_CHAOS_PALETTES_YA) },
};

const sDescTreeNode PrimalRage_SNES_ARMADON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_ARMADON_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_ARMADON_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_ARMADON_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_ARMADON_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_ARMADON_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_ARMADON_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_ARMADON_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_ARMADON_PALETTES_YA) },

};

const sDescTreeNode PrimalRage_SNES_DIABLO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_DIABLO_PALETTES_A, ARRAYSIZE(PrimalRage_SNES_DIABLO_PALETTES_A) },
    { L"X+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_DIABLO_PALETTES_XA, ARRAYSIZE(PrimalRage_SNES_DIABLO_PALETTES_XA) },
    { L"B+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_DIABLO_PALETTES_BA, ARRAYSIZE(PrimalRage_SNES_DIABLO_PALETTES_BA) },
    { L"Y+A", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_DIABLO_PALETTES_YA, ARRAYSIZE(PrimalRage_SNES_DIABLO_PALETTES_YA) },
};

const sDescTreeNode PrimalRage_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BONUS_PALETTES, ARRAYSIZE(PrimalRage_SNES_BONUS_PALETTES) },
};

const sDescTreeNode PrimalRage_SNES_UNITS[] =
{
    { L"Sauron",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_SAURON_COLLECTION, ARRAYSIZE(PrimalRage_SNES_SAURON_COLLECTION) },
    { L"Talon",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_TALON_COLLECTION, ARRAYSIZE(PrimalRage_SNES_TALON_COLLECTION) },
    { L"Vertigo",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_VERTIGO_COLLECTION, ARRAYSIZE(PrimalRage_SNES_VERTIGO_COLLECTION) },
    { L"Blizzard",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BLIZZARD_COLLECTION, ARRAYSIZE(PrimalRage_SNES_BLIZZARD_COLLECTION) },
    { L"Chaos",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_CHAOS_COLLECTION, ARRAYSIZE(PrimalRage_SNES_CHAOS_COLLECTION) },
    { L"Armadon",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_ARMADON_COLLECTION, ARRAYSIZE(PrimalRage_SNES_ARMADON_COLLECTION) },
    { L"Diablo",            DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_DIABLO_COLLECTION, ARRAYSIZE(PrimalRage_SNES_DIABLO_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)PrimalRage_SNES_BONUS_COLLECTION, ARRAYSIZE(PrimalRage_SNES_BONUS_COLLECTION) },
};

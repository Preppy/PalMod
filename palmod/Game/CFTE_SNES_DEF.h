#pragma once

const sGame_PaletteDataset CFTE_MRFROSTY_PALETTES[] =
{
    { L"Bad Mr. Frosty - Main Sprite (Shared)", 0x10000, 0x10020 },
    { L"Bad Mr. Frosty - Blue Hat", 0x10040, 0x10060 },
    { L"Bad Mr. Frosty - Green Hat", 0x241B4D, 0x241B6D },
    { L"Bad Mr. Frosty - Yellow Hat", 0x241CED, 0x241D0D },
    { L"Bad Mr. Frosty - Red Hat", 0x241D0D, 0x241D2D },
};

const sGame_PaletteDataset CFTE_TAFFY_PALETTES[] =
{
    { L"Taffy - Yellow", 0x10060, 0x10080 },
    { L"Taffy - Pink", 0x241B0D, 0x241B2D },
    { L"Taffy - Blue", 0x241DAD, 0x241DCD },
    { L"Taffy - Grey", 0x241DCD, 0x241DED },
};

const sGame_PaletteDataset CFTE_TINY_PALETTES[] =
{
    { L"Tiny - Main", 0x100A0, 0x100C0 },
    { L"Tiny - Red ", 0x100C0, 0x100E0 },
    { L"Tiny - Purple ", 0x241B8D, 0x241BAD },
    { L"Tiny - Green ", 0x241DED, 0x241E0D },
    { L"Tiny - Blue", 0x241E0D, 0x241E2D },
};

const sGame_PaletteDataset CFTE_BLOB_PALETTES[] =
{
    { L"Blob - Green", 0x10080, 0x100A0 },
    { L"Blob - Purple", 0x241A8D, 0x241AAD },
    { L"Blob - Yellow", 0x241C2D, 0x241C4D },
    { L"Blob - Blue", 0x241C4D, 0x241C6D },
};

const sGame_PaletteDataset CFTE_BLUESUEDEGOO_PALETTES[] =
{
    { L"Blue Suede Goo - Main Sprite (Shared)", 0x10220, 0x10240 },
    { L"Blue Suede Goo - Silver", 0x10200, 0x10220 },
    { L"Blue Suede Goo - Gold", 0x241AED, 0x241B0D },
    { L"Blue Suede Goo - Purple", 0x241CCD, 0x241CED },
    { L"Blue Suede Goo - Red", 0x241CAD, 0x241CCD },
};

const sGame_PaletteDataset CFTE_ICKYBOD_PALETTES[] =
{
    { L"Ickybod Clay - Main Sprite (Shared)", 0x10240, 0x10260 },
    { L"Ickybod Clay - Orange ", 0x10260, 0x10280 },
    { L"Ickybod Clay - Green ", 0x241ACD, 0x241AED },
    { L"Ickybod Clay - Blue", 0x241D8D, 0x241DAD },
    { L"Ickybod Clay - Pink", 0x241D6D, 0x241D8D },
};

const sGame_PaletteDataset CFTE_HELGA_PALETTES[] =
{
    { L"Helga - Main Sprite (Shared)", 0x102A0, 0x102C0 },
    { L"Helga - Blue", 0x10280, 0x102A0 },
    { L"Helga - Green", 0x241D2D, 0x241D4D },
    { L"Helga - Purple", 0x241B2D, 0x241B4D },
    { L"Helga - Yellow", 0x241D4D, 0x241D6D },
};

const sGame_PaletteDataset CFTE_BONKER_PALETTES[] =
{
    { L"Bonker - Clown Makeup (Shared)", 0x10120, 0x10140 },
    { L"Bonker - Blue", 0x10100, 0x10120 },
    { L"Bonker - Green", 0x241AAD, 0x241ACD },
    { L"Bonker - Yellow", 0x241C8D, 0x241CAD },
    { L"Bonker - Purple", 0x241C6D, 0x241C8D },
};

const sGame_PaletteDataset CFTE_PORTRAITS_VSMODE_PALETTES[] =
{
    { L"Bad Mr. Frosty", 0x244043, 0x244103 },
    { L"Taffy", 0x244103, 0x2441C3 },
    { L"Tiny", 0x2441C3, 0x244283 },
    { L"Blob", 0x244283, 0x244343 },
    { L"Blue Suede Goo", 0x244343, 0x244403 },
    { L"Ickybod Clay", 0x244403, 0x2444C3 },
    { L"Helga", 0x2444C3, 0x244583 },
    { L"Bonker", 0x244583, 0x244643 },
};

const sGame_PaletteDataset CFTE_BONUS_PALETTES[] =
{
    { L"Interplay Logo", 0x1F0A3B ,0x1F0A5B },
    { L"Visual Concepts Logo", 0x1EEA8B, 0x1EEB8B },
    { L"Clay Fighter Logo", 0x1B2EF9, 0x1B2F59 },
    { L"Clay Fighter Logo Subtitle", 0x107A0, 0x107C0 },
    { L"Intro Gradient", 0x1ABC84, 0x1ABCA4 },
    { L"Title Screen BG", 0x1A6B0D, 0x1A6B2D },
    { L"Mode Select Text", 0x1A0C06, 0x1A0C26 },
    { L"Pre-Match 'VS.' Icon", 0x10760, 0x10780 },
    { L"VS Mode Portrait Frame pt.1", 0x1EF121, 0x1EF141 },
    { L"VS Mode Portrait Frame pt.2", 0x10160, 0x10180 },
};

const sDescTreeNode CFTE_MRFROSTY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_MRFROSTY_PALETTES, ARRAYSIZE(CFTE_MRFROSTY_PALETTES) },
};

const sDescTreeNode CFTE_TAFFY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_TAFFY_PALETTES, ARRAYSIZE(CFTE_TAFFY_PALETTES) },
};

const sDescTreeNode CFTE_TINY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_TINY_PALETTES, ARRAYSIZE(CFTE_TINY_PALETTES) },
};

const sDescTreeNode CFTE_BLOB_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_BLOB_PALETTES, ARRAYSIZE(CFTE_BLOB_PALETTES) },
};

const sDescTreeNode CFTE_BLUESUEDEGOO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_BLUESUEDEGOO_PALETTES, ARRAYSIZE(CFTE_BLUESUEDEGOO_PALETTES) },
};

const sDescTreeNode CFTE_ICKYBOD_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_ICKYBOD_PALETTES, ARRAYSIZE(CFTE_ICKYBOD_PALETTES) },
};

const sDescTreeNode CFTE_HELGA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_HELGA_PALETTES, ARRAYSIZE(CFTE_HELGA_PALETTES) },
};

const sDescTreeNode CFTE_BONKER_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)CFTE_BONKER_PALETTES, ARRAYSIZE(CFTE_BONKER_PALETTES) },
};

const sDescTreeNode CFTE_PORTRAITS_COLLECTION[] =
{
    { L"VS Mode", DESC_NODETYPE_TREE, (void*)CFTE_PORTRAITS_VSMODE_PALETTES, ARRAYSIZE(CFTE_PORTRAITS_VSMODE_PALETTES) },
};

const sDescTreeNode CFTE_BONUS_COLLECTION[] =
{
    { L"Bonus", DESC_NODETYPE_TREE, (void*)CFTE_BONUS_PALETTES, ARRAYSIZE(CFTE_BONUS_PALETTES) },
};

const sDescTreeNode CFTE_SNES_UNITS[] =
{
    { L"Bad Mr. Frosty", DESC_NODETYPE_TREE, (void*)CFTE_MRFROSTY_COLLECTION, ARRAYSIZE(CFTE_MRFROSTY_COLLECTION) },
    { L"Taffy", DESC_NODETYPE_TREE, (void*)CFTE_TAFFY_COLLECTION, ARRAYSIZE(CFTE_TAFFY_COLLECTION) },
    { L"Tiny", DESC_NODETYPE_TREE, (void*)CFTE_TINY_COLLECTION, ARRAYSIZE(CFTE_TINY_COLLECTION) },
    { L"Blob", DESC_NODETYPE_TREE, (void*)CFTE_BLOB_COLLECTION, ARRAYSIZE(CFTE_BLOB_COLLECTION) },
    { L"Blue Suede Goo", DESC_NODETYPE_TREE, (void*)CFTE_BLUESUEDEGOO_COLLECTION, ARRAYSIZE(CFTE_BLUESUEDEGOO_COLLECTION) },
    { L"Ickybod Clay", DESC_NODETYPE_TREE, (void*)CFTE_ICKYBOD_COLLECTION, ARRAYSIZE(CFTE_ICKYBOD_COLLECTION) },
    { L"Helga", DESC_NODETYPE_TREE, (void*)CFTE_HELGA_COLLECTION, ARRAYSIZE(CFTE_HELGA_COLLECTION) },
    { L"Bonker", DESC_NODETYPE_TREE, (void*)CFTE_BONKER_COLLECTION, ARRAYSIZE(CFTE_BONKER_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)CFTE_PORTRAITS_COLLECTION, ARRAYSIZE(CFTE_PORTRAITS_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)CFTE_BONUS_COLLECTION, ARRAYSIZE(CFTE_BONUS_COLLECTION) },
};

constexpr auto CFTE_SNES_NUMUNIT = ARRAYSIZE(CFTE_SNES_UNITS);

#define CFTE_SNES_EXTRALOC CFTE_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef CFTE_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

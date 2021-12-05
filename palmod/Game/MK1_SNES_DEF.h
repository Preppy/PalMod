#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to MK1_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<UINT16> MK1_SNES_IMGIDS_USED =
{
    indexMK1Sprites_Goro,                // 0xAA
    indexMK1Sprites_JohnnyCage,          // 0xAB
    indexMK1Sprites_Kano,                // 0xAC
    indexMK1Sprites_LiuKang,             // 0xAD
    indexMK1Sprites_Raiden,              // 0xAE
    indexMK1Sprites_Reptile,             // 0xAF
    indexMK1Sprites_Scorpion,            // 0xB0
    indexMK1Sprites_ShangTsung,          // 0xB1
    indexMK1Sprites_Sonya,               // 0xB2
    indexMK1Sprites_SubZero,             // 0xB3
    indexMK1Sprites_Bonus,               // 0xB4
    indexMK1Sprites_Stages,              // 0xB5
};

const sGame_PaletteDataset MK1_SNES_LIUKANG_P1_PALETTES[] =
{
    { L"Liu Kang P1", 0x1CFD06, 0x1CFD26, indexMK1Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_LIUKANG_P2_PALETTES[] =
{
    { L"Liu Kang P2", 0x1CFD66, 0x1CFD86, indexMK1Sprites_LiuKang, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_LIUKANG_EFFECT_PALETTES[] =
{
    { L"Liu Kang's Fireball", 0x1CFD26, 0x1CFD46, indexMK1Sprites_LiuKang, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_JOHNNYCAGE_P1_PALETTES[] =
{
    { L"Johnny Cage P1", 0x1CFB86, 0x1CFBA6, indexMK1Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_JOHNNYCAGE_P2_PALETTES[] =
{
    { L"Johnny Cage P2", 0x1CFBE6, 0x1CFC06, indexMK1Sprites_JohnnyCage, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_JOHNNYCAGE_EFFECT_PALETTES[] =
{
    { L"Cage's Green Forceball", 0x1CFBA6, 0x1CFBC6, indexMK1Sprites_JohnnyCage, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_REPTILE_PALETTES[] =
{
    { L"Reptile", 0x1CFFC6, 0x1CFFE6, indexMK1Sprites_Reptile, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SUBZERO_P1_PALETTES[] =
{
    { L"Sub-Zero P1", 0x1CFE06, 0x1CFE26, indexMK1Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SUBZERO_P2_PALETTES[] =
{
    { L"Sub-Zero P2", 0x1CFE66, 0x1CFE86, indexMK1Sprites_SubZero, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SUBZERO_EFFECT_PALETTES[] =
{
    { L"Sub-Zero's Ice", 0x1CFE26, 0x1CFE46, indexMK1Sprites_SubZero, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_SCORPION_P1_PALETTES[] =
{
    { L"Scorpion P1", 0x1CFD86, 0x1CFDA6, indexMK1Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SCORPION_P2_PALETTES[] =
{
    { L"Scorpion P2", 0x1CFDE6, 0x1CFE06, indexMK1Sprites_Scorpion, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SCORPION_EFFECT_PALETTES[] =
{
    { L"Skeleton (Scorpion Fatality)", 0x5BE9, 0x5C09, indexMK1Sprites_Scorpion, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_RAIDEN_P1_PALETTES[] =
{
    { L"Raiden P1", 0x1CFC86, 0x1CFCA6, indexMK1Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_RAIDEN_P2_PALETTES[] =
{
    { L"Raiden P2", 0x1CFCE6, 0x1CFD06, indexMK1Sprites_Raiden, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_RAIDEN_EFFECT_PALETTES[] =
{
    { L"Raiden's Lightning/Ext", 0x1CFCA6, 0x1CFCC6, indexMK1Sprites_Raiden, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_KANO_P1_PALETTES[] =
{
    { L"Kano P1", 0x1CFC06, 0x1CFC26, indexMK1Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_KANO_P2_PALETTES[] =
{
    { L"Kano P2", 0x1CFC66, 0x1CFC86, indexMK1Sprites_Kano, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_KANO_EFFECT_PALETTES[] =
{
    { L"Kano's Blue Knives", 0x1CFC26, 0x1CFC46, indexMK1Sprites_Kano, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_SONYA_P1_PALETTES[] =
{
    { L"Sonya P1", 0x1CFE86, 0x1CFEA6, indexMK1Sprites_Sonya, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SONYA_P2_PALETTES[] =
{
    { L"Sonya P2", 0x1CFEE6, 0x1CFF06, indexMK1Sprites_Sonya, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_SONYA_EFFECT_PALETTES[] =
{
    { L"Sonya's Beam/Fire", 0x1CFEA6, 0x1CFEC6, indexMK1Sprites_Sonya, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_GORO_PALETTES[] =
{
    { L"Goro", 0x1CFF06, 0x1CFF26, indexMK1Sprites_Goro, 0x00 },
    { L"Goro's Fireball", 0x1CFF26, 0x1CFF46, indexMK1Sprites_Goro, 0x01 },
};

const sGame_PaletteDataset MK1_SNES_SHANGTSUNG_PALETTES[] =
{
    { L"Shang Tsung", 0x1CFF86, 0x1CFFA6, indexMK1Sprites_ShangTsung, 0x00 },
};

const sGame_PaletteDataset MK1_SNES_BONUS_PALETTES[] =
{
    { L"Sweat/Blood", 0x1C16, 0x1C36 },
};

const sDescTreeNode MK1_SNES_LIUKANG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_LIUKANG_P1_PALETTES, ARRAYSIZE(MK1_SNES_LIUKANG_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_LIUKANG_P2_PALETTES, ARRAYSIZE(MK1_SNES_LIUKANG_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_LIUKANG_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_LIUKANG_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_JOHNNYCAGE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_JOHNNYCAGE_P1_PALETTES, ARRAYSIZE(MK1_SNES_JOHNNYCAGE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_JOHNNYCAGE_P2_PALETTES, ARRAYSIZE(MK1_SNES_JOHNNYCAGE_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_JOHNNYCAGE_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_JOHNNYCAGE_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_REPTILE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SNES_REPTILE_PALETTES, ARRAYSIZE(MK1_SNES_REPTILE_PALETTES) },
};

const sDescTreeNode MK1_SNES_SUBZERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_SUBZERO_P1_PALETTES, ARRAYSIZE(MK1_SNES_SUBZERO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_SUBZERO_P2_PALETTES, ARRAYSIZE(MK1_SNES_SUBZERO_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_SUBZERO_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_SUBZERO_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_SCORPION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_SCORPION_P1_PALETTES, ARRAYSIZE(MK1_SNES_SCORPION_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_SCORPION_P2_PALETTES, ARRAYSIZE(MK1_SNES_SCORPION_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_SCORPION_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_SCORPION_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_KANO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_KANO_P1_PALETTES, ARRAYSIZE(MK1_SNES_KANO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_KANO_P2_PALETTES, ARRAYSIZE(MK1_SNES_KANO_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_KANO_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_KANO_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_SONYA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_SONYA_P1_PALETTES, ARRAYSIZE(MK1_SNES_SONYA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_SONYA_P2_PALETTES, ARRAYSIZE(MK1_SNES_SONYA_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_SONYA_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_SONYA_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_RAIDEN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MK1_SNES_RAIDEN_P1_PALETTES, ARRAYSIZE(MK1_SNES_RAIDEN_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MK1_SNES_RAIDEN_P2_PALETTES, ARRAYSIZE(MK1_SNES_RAIDEN_P2_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MK1_SNES_RAIDEN_EFFECT_PALETTES, ARRAYSIZE(MK1_SNES_RAIDEN_EFFECT_PALETTES) },
};

const sDescTreeNode MK1_SNES_GORO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SNES_GORO_PALETTES, ARRAYSIZE(MK1_SNES_GORO_PALETTES) },
};

const sDescTreeNode MK1_SNES_SHANGTSUNG_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SNES_SHANGTSUNG_PALETTES, ARRAYSIZE(MK1_SNES_SHANGTSUNG_PALETTES) },
};

const sDescTreeNode MK1_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MK1_SNES_BONUS_PALETTES, ARRAYSIZE(MK1_SNES_BONUS_PALETTES) },
};

const sDescTreeNode MK1_SNES_UNITS[] =
{
    { L"Liu Kang", DESC_NODETYPE_TREE, (void*)MK1_SNES_LIUKANG_COLLECTION, ARRAYSIZE(MK1_SNES_LIUKANG_COLLECTION) },
    { L"Kano", DESC_NODETYPE_TREE, (void*)MK1_SNES_KANO_COLLECTION, ARRAYSIZE(MK1_SNES_KANO_COLLECTION) },
    { L"Johnny Cage", DESC_NODETYPE_TREE, (void*)MK1_SNES_JOHNNYCAGE_COLLECTION, ARRAYSIZE(MK1_SNES_JOHNNYCAGE_COLLECTION) },
    { L"Reptile", DESC_NODETYPE_TREE, (void*)MK1_SNES_REPTILE_COLLECTION, ARRAYSIZE(MK1_SNES_REPTILE_COLLECTION) },
    { L"Sub-Zero", DESC_NODETYPE_TREE, (void*)MK1_SNES_SUBZERO_COLLECTION, ARRAYSIZE(MK1_SNES_SUBZERO_COLLECTION) },
    { L"Scorpion", DESC_NODETYPE_TREE, (void*)MK1_SNES_SCORPION_COLLECTION, ARRAYSIZE(MK1_SNES_SCORPION_COLLECTION) },
    { L"Sonya", DESC_NODETYPE_TREE, (void*)MK1_SNES_SONYA_COLLECTION, ARRAYSIZE(MK1_SNES_SONYA_COLLECTION) },
    { L"Raiden", DESC_NODETYPE_TREE, (void*)MK1_SNES_RAIDEN_COLLECTION, ARRAYSIZE(MK1_SNES_RAIDEN_COLLECTION) },
    { L"Goro", DESC_NODETYPE_TREE, (void*)MK1_SNES_GORO_COLLECTION, ARRAYSIZE(MK1_SNES_GORO_COLLECTION) },
    { L"Shang Tsung", DESC_NODETYPE_TREE, (void*)MK1_SNES_SHANGTSUNG_COLLECTION, ARRAYSIZE(MK1_SNES_SHANGTSUNG_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MK1_SNES_BONUS_COLLECTION, ARRAYSIZE(MK1_SNES_BONUS_COLLECTION) },
};

constexpr auto MK1_SNES_NUMUNIT = ARRAYSIZE(MK1_SNES_UNITS);

#define MK1_SNES_EXTRALOC MK1_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MK1_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

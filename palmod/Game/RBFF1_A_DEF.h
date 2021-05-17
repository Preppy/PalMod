#pragma once

const UINT16 RBFF1_A_IMGIDS_USED[] =
{
    indexRBFFSSprites_Billy,        // 0x134
    indexRBFFSSprites_Bob,          // 0x136
    indexRBFFSSprites_Chonrei,      // 0x138
    indexRBFFSSprites_Chonshu,      // 0x139
    indexRBFFSSprites_DuckKing,     // 0x13a
    indexRBFFSSprites_Franco,       // 0x13b
    indexRBFFSSprites_Geese,        // 0x13c
    indexRBFFSSprites_Hon,          // 0x13d
    indexRBFFSSprites_Joe,          // 0x13e
    indexRBFFSSprites_Kim,          // 0x13f
    indexRBFFSSprites_Mai,          // 0x142
    indexRBFFSSprites_Sokaku,       // 0x143
};

const sGame_PaletteDataset RBFF1_A_TERRY_PALETTES_A[] =
{
    { L"Terry Bogard A", 0x0c0200, 0x0c0220 },
    { L"Terry Bogard Bottom Plane A", 0x0c0240, 0x0c0260 },
};

const sGame_PaletteDataset RBFF1_A_TERRY_PALETTES_D[] =
{
    { L"Terry Bogard D", 0x0c0220, 0x0c0240 },
    { L"Terry Bogard Bottom Plane D", 0x0c0260, 0x0c0280 },
};

const sGame_PaletteDataset RBFF1_A_ANDY_PALETTES_A[] =
{
    { L"Andy Bogard A", 0x0c0280, 0x0c02a0 },
    { L"Andy Bogard Bottom Plane A", 0x0c02c0, 0x0c02e0 },
};

const sGame_PaletteDataset RBFF1_A_ANDY_PALETTES_D[] =
{
    { L"Andy Bogard D", 0x0c02a0, 0x0c02c0 },
    { L"Andy Bogard Bottom Plane D", 0x0c02e0, 0x0c0300 },
};

const sGame_PaletteDataset RBFF1_A_JOE_PALETTES_A[] =
{
    { L"Joe Higashi A", 0x0c0300, 0x0c0320, indexRBFFSSprites_Joe },
    { L"Joe Higashi Bottom Plane A", 0x0c0340, 0x0c0360, indexRBFFSSprites_Joe },
};

const sGame_PaletteDataset RBFF1_A_JOE_PALETTES_D[] =
{
    { L"Joe Higashi D", 0x0c0320, 0x0c0340, indexRBFFSSprites_Joe },
    { L"Joe Higashi Bottom Plane D", 0x0c0360, 0x0c0380, indexRBFFSSprites_Joe },
};

const sGame_PaletteDataset RBFF1_A_MAI_PALETTES_A[] =
{
    { L"Shiranui Mai A", 0x0c0380, 0x0c03a0, indexRBFFSSprites_Mai },
    { L"Shiranui Mai Bottom Plane A", 0x0c03c0, 0x0c03e0, indexRBFFSSprites_Mai },
};

const sGame_PaletteDataset RBFF1_A_MAI_PALETTES_D[] =
{
    { L"Shiranui Mai D", 0x0c03a0, 0x0c03c0, indexRBFFSSprites_Mai },
    { L"Shiranui Mai Bottom Plane D", 0x0c03e0, 0x0c0400, indexRBFFSSprites_Mai },
};

const sGame_PaletteDataset RBFF1_A_FRANCO_PALETTES_A[] =
{
    { L"Franco Bash A", 0x0c0400, 0x0c0420, indexRBFFSSprites_Franco },
    { L"Franco Bash Bottom Plane A", 0x0c0440, 0x0c0460, indexRBFFSSprites_Franco },
};

const sGame_PaletteDataset RBFF1_A_FRANCO_PALETTES_D[] =
{
    { L"Franco Bash D", 0x0c0420, 0x0c0440, indexRBFFSSprites_Franco },
    { L"Franco Bash Bottom Plane D", 0x0c0460, 0x0c0480, indexRBFFSSprites_Franco },
};

const sGame_PaletteDataset RBFF1_A_HONFU_PALETTES_A[] =
{
    { L"Hon Fu A", 0x0c0480, 0x0c04a0, indexRBFFSSprites_Hon, 0x00 },
    { L"Hon Fu Bottom Plane A", 0x0c04c0, 0x0c04e0, indexRBFFSSprites_Hon },
};

const sGame_PaletteDataset RBFF1_A_HONFU_PALETTES_D[] =
{
    { L"Hon Fu D", 0x0c04a0, 0x0c04c0, indexRBFFSSprites_Hon, 0x00 },
    { L"Hon Fu Bottom Plane D", 0x0c04e0, 0x0c0500, indexRBFFSSprites_Hon },
};

const sGame_PaletteDataset RBFF1_A_BOB_PALETTES_A[] =
{
    { L"Bob Wilson A", 0x0c0500, 0x0c0520, indexRBFFSSprites_Bob },
    { L"Bob Wilson Bottom Plane A", 0x0c0540, 0x0c0560, indexRBFFSSprites_Bob },
};

const sGame_PaletteDataset RBFF1_A_BOB_PALETTES_D[] =
{
    { L"Bob Wilson D", 0x0c0520, 0x0c0540, indexRBFFSSprites_Bob },
    { L"Bob Wilson Bottom Plane D", 0x0c0560, 0x0c0580, indexRBFFSSprites_Bob },
};

const sGame_PaletteDataset RBFF1_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0x0c0580, 0x0c05a0 },
    { L"Blue Mary Bottom Plane A", 0x0c05c0, 0x0c05e0 },
};

const sGame_PaletteDataset RBFF1_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0x0c05a0, 0x0c05c0 },
    { L"Blue Mary Bottom Plane D", 0x0c05e0, 0x0c0600 },
};

const sGame_PaletteDataset RBFF1_A_Sokaku_PALETTES_A[] =
{
    { L"Sokaku Mochizuki A", 0x0c0600, 0x0c0620, indexRBFFSSprites_Sokaku },
    { L"Sokaku Mochizuki Bottom Plane A", 0x0c0640, 0x0c0660, indexRBFFSSprites_Sokaku },
};

const sGame_PaletteDataset RBFF1_A_Sokaku_PALETTES_D[] =
{
    { L"Sokaku Mochizuki D", 0x0c0620, 0x0c0640, indexRBFFSSprites_Sokaku },
    { L"Sokaku Mochizuki Bottom Plane D", 0x0c0660, 0x0c0680, indexRBFFSSprites_Sokaku },
};

const sGame_PaletteDataset RBFF1_A_GEESE_PALETTES_A[] =
{
    { L"Geese Howard A", 0x0c0680, 0x0c06a0, indexRBFFSSprites_Geese },
    { L"Geese Howard Bottom Plane A", 0x0c06c0, 0x0c06e0, indexRBFFSSprites_Geese },
};

const sGame_PaletteDataset RBFF1_A_GEESE_PALETTES_D[] =
{
    { L"Geese Howard D", 0x0c06a0, 0x0c06c0, indexRBFFSSprites_Geese },
    { L"Geese Howard Bottom Plane D", 0x0c06e0, 0x0c0700, indexRBFFSSprites_Geese },
};

const sGame_PaletteDataset RBFF1_A_YAMAZAKI_PALETTES_A[] =
{
    { L"Ryuji Yamazaki A", 0x0c0700, 0x0c0720 },
    { L"Ryuji Yamazaki Bottom Plane A", 0x0c0740, 0x0c0760 },
};

const sGame_PaletteDataset RBFF1_A_YAMAZAKI_PALETTES_D[] =
{
    { L"Ryuji Yamazaki D", 0x0c0720, 0x0c0740 },
    { L"Ryuji Yamazaki Bottom Plane D", 0x0c0760, 0x0c0780 },
};

const sGame_PaletteDataset RBFF1_A_CHONREI_PALETTES_A[] =
{
    { L"Jin Chonrei A", 0x0c0780, 0x0c07a0, indexRBFFSSprites_Chonrei },
    { L"Jin Chonrei Bottom Plane A", 0x0c07c0, 0x0c07e0, indexRBFFSSprites_Chonrei },
};

const sGame_PaletteDataset RBFF1_A_CHONREI_PALETTES_D[] =
{
    { L"Jin Chonrei D", 0x0c07a0, 0x0c07c0, indexRBFFSSprites_Chonrei },
    { L"Jin Chonrei Bottom Plane D", 0x0c07e0, 0x0c0800, indexRBFFSSprites_Chonrei },
};

const sGame_PaletteDataset RBFF1_A_CHONSHU_PALETTES_A[] =
{
    { L"Jin Chonshu A", 0x0c0800, 0x0c0820, indexRBFFSSprites_Chonshu },
    { L"Jin Chonshu Bottom Plane A", 0x0c0840, 0x0c0860, indexRBFFSSprites_Chonshu },
};

const sGame_PaletteDataset RBFF1_A_CHONSHU_PALETTES_D[] =
{
    { L"Jin Chonshu D", 0x0c0820, 0x0c0840, indexRBFFSSprites_Chonshu },
    { L"Jin Chonshu Bottom Plane D", 0x0c0860, 0x0c0880, indexRBFFSSprites_Chonshu },
};

const sGame_PaletteDataset RBFF1_A_DUCKKING_PALETTES_A[] =
{
    { L"Duck King A", 0x0c0e00, 0x0c0e20, indexRBFFSSprites_DuckKing },
    { L"Duck King Bottom Plane A", 0x0c0e40, 0x0c0e60, indexRBFFSSprites_DuckKing },
};

const sGame_PaletteDataset RBFF1_A_DUCKKING_PALETTES_D[] =
{
    { L"Duck King D", 0x0c0e20, 0x0c0e40, indexRBFFSSprites_DuckKing },
    { L"Duck King Bottom Plane D", 0x0c0e60, 0x0c0e80, indexRBFFSSprites_DuckKing },
};

const sGame_PaletteDataset RBFF1_A_KIM_PALETTES_A[] =
{
    { L"Kim Kaphwan A", 0x0c0e80, 0x0c0ea0, indexRBFFSSprites_Kim },
    { L"Kim Kaphwan Bottom Plane A", 0x0c0ec0, 0x0c0ee0, indexRBFFSSprites_Kim },
};

const sGame_PaletteDataset RBFF1_A_KIM_PALETTES_D[] =
{
    { L"Kim Kaphwan D", 0x0c0ea0, 0x0c0ec0, indexRBFFSSprites_Kim },
    { L"Kim Kaphwan Bottom Plane D", 0x0c0ee0, 0x0c0f00, indexRBFFSSprites_Kim },
};

const sGame_PaletteDataset RBFF1_A_BILLY_PALETTES_A[] =
{
    { L"Billy Kane A", 0x0c0f00, 0x0c0f20, indexRBFFSSprites_Billy },
    { L"Billy Kane Bottom Plane A", 0x0c0f40, 0x0c0f60, indexRBFFSSprites_Billy },
};
const sGame_PaletteDataset RBFF1_A_BILLY_PALETTES_D[] =
{
    { L"Billy Kane D", 0x0c0f20, 0x0c0f40, indexRBFFSSprites_Billy },
    { L"Billy Kane Bottom Plane D", 0x0c0f60, 0x0c0f80, indexRBFFSSprites_Billy },
};

const sDescTreeNode RBFF1_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_TERRY_PALETTES_A, ARRAYSIZE(RBFF1_A_TERRY_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_TERRY_PALETTES_D, ARRAYSIZE(RBFF1_A_TERRY_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_ANDY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_ANDY_PALETTES_A, ARRAYSIZE(RBFF1_A_ANDY_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_ANDY_PALETTES_D, ARRAYSIZE(RBFF1_A_ANDY_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_JOE_PALETTES_A, ARRAYSIZE(RBFF1_A_JOE_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_JOE_PALETTES_D, ARRAYSIZE(RBFF1_A_JOE_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_MAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_MAI_PALETTES_A, ARRAYSIZE(RBFF1_A_MAI_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_MAI_PALETTES_D, ARRAYSIZE(RBFF1_A_MAI_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_FRANCO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_FRANCO_PALETTES_A, ARRAYSIZE(RBFF1_A_FRANCO_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_FRANCO_PALETTES_D, ARRAYSIZE(RBFF1_A_FRANCO_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_HONFU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_HONFU_PALETTES_A, ARRAYSIZE(RBFF1_A_HONFU_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_HONFU_PALETTES_D, ARRAYSIZE(RBFF1_A_HONFU_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_BOB_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_BOB_PALETTES_A, ARRAYSIZE(RBFF1_A_BOB_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_BOB_PALETTES_D, ARRAYSIZE(RBFF1_A_BOB_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_BLUEMARY_PALETTES_A, ARRAYSIZE(RBFF1_A_BLUEMARY_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_BLUEMARY_PALETTES_D, ARRAYSIZE(RBFF1_A_BLUEMARY_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_Sokaku_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_Sokaku_PALETTES_A, ARRAYSIZE(RBFF1_A_Sokaku_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_Sokaku_PALETTES_D, ARRAYSIZE(RBFF1_A_Sokaku_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_GEESE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_GEESE_PALETTES_A, ARRAYSIZE(RBFF1_A_GEESE_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_GEESE_PALETTES_D, ARRAYSIZE(RBFF1_A_GEESE_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_YAMAZAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_YAMAZAKI_PALETTES_A, ARRAYSIZE(RBFF1_A_YAMAZAKI_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_YAMAZAKI_PALETTES_D, ARRAYSIZE(RBFF1_A_YAMAZAKI_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_CHONREI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_CHONREI_PALETTES_A, ARRAYSIZE(RBFF1_A_CHONREI_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_CHONREI_PALETTES_D, ARRAYSIZE(RBFF1_A_CHONREI_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_CHONSHU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_CHONSHU_PALETTES_A, ARRAYSIZE(RBFF1_A_CHONSHU_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_CHONSHU_PALETTES_D, ARRAYSIZE(RBFF1_A_CHONSHU_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_DUCKKING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_DUCKKING_PALETTES_A, ARRAYSIZE(RBFF1_A_DUCKKING_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_DUCKKING_PALETTES_D, ARRAYSIZE(RBFF1_A_DUCKKING_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_KIM_PALETTES_A, ARRAYSIZE(RBFF1_A_KIM_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_KIM_PALETTES_D, ARRAYSIZE(RBFF1_A_KIM_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)RBFF1_A_BILLY_PALETTES_A, ARRAYSIZE(RBFF1_A_BILLY_PALETTES_A) },
    { L"D", DESC_NODETYPE_TREE, (void*)RBFF1_A_BILLY_PALETTES_D, ARRAYSIZE(RBFF1_A_BILLY_PALETTES_D) },
};

const sDescTreeNode RBFF1_A_UNITS[] =
{
    { L"Terry", DESC_NODETYPE_TREE, (void*)RBFF1_A_TERRY_COLLECTION, ARRAYSIZE(RBFF1_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)RBFF1_A_ANDY_COLLECTION, ARRAYSIZE(RBFF1_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)RBFF1_A_JOE_COLLECTION, ARRAYSIZE(RBFF1_A_JOE_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)RBFF1_A_MAI_COLLECTION, ARRAYSIZE(RBFF1_A_MAI_COLLECTION) },
    { L"Franco", DESC_NODETYPE_TREE, (void*)RBFF1_A_FRANCO_COLLECTION, ARRAYSIZE(RBFF1_A_FRANCO_COLLECTION) },
    { L"Hon Fu", DESC_NODETYPE_TREE, (void*)RBFF1_A_HONFU_COLLECTION, ARRAYSIZE(RBFF1_A_HONFU_COLLECTION) },
    { L"Bob", DESC_NODETYPE_TREE, (void*)RBFF1_A_BOB_COLLECTION, ARRAYSIZE(RBFF1_A_BOB_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)RBFF1_A_BLUEMARY_COLLECTION, ARRAYSIZE(RBFF1_A_BLUEMARY_COLLECTION) },
    { L"Sokaku", DESC_NODETYPE_TREE, (void*)RBFF1_A_Sokaku_COLLECTION, ARRAYSIZE(RBFF1_A_Sokaku_COLLECTION) },
    { L"Geese", DESC_NODETYPE_TREE, (void*)RBFF1_A_GEESE_COLLECTION, ARRAYSIZE(RBFF1_A_GEESE_COLLECTION) },
    { L"Yamazaki", DESC_NODETYPE_TREE, (void*)RBFF1_A_YAMAZAKI_COLLECTION, ARRAYSIZE(RBFF1_A_YAMAZAKI_COLLECTION) },
    { L"Chonrei", DESC_NODETYPE_TREE, (void*)RBFF1_A_CHONREI_COLLECTION, ARRAYSIZE(RBFF1_A_CHONREI_COLLECTION) },
    { L"Chonshu", DESC_NODETYPE_TREE, (void*)RBFF1_A_CHONSHU_COLLECTION, ARRAYSIZE(RBFF1_A_CHONSHU_COLLECTION) },
    { L"Duck King", DESC_NODETYPE_TREE, (void*)RBFF1_A_DUCKKING_COLLECTION, ARRAYSIZE(RBFF1_A_DUCKKING_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)RBFF1_A_KIM_COLLECTION, ARRAYSIZE(RBFF1_A_KIM_COLLECTION) },
    { L"Billy", DESC_NODETYPE_TREE, (void*)RBFF1_A_BILLY_COLLECTION, ARRAYSIZE(RBFF1_A_BILLY_COLLECTION) },
};

constexpr auto RBFF1_A_NUMUNIT = ARRAYSIZE(RBFF1_A_UNITS);

#define RBFF1_A_EXTRALOC RBFF1_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef RBFF1_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

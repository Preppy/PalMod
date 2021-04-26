#pragma once

const sGame_PaletteDataset FatalFury1_A_Character_PALETTES[] =
{
    { L"Terry Bogard", 0x32d6c, 0x32d8c },
    { L"Andy Bogard", 0x32d8c, 0x32dac },
    { L"Joe Higashi", 0x32dac, 0x32dcc },
};

const sGame_PaletteDataset FatalFury1_A_Bosses_PALETTES[] =
{
    { L"Richard Meyer", 0x3306c, 0x3308c },
    { L"Duck King", 0x32f6c, 0x32f8c },
    { L"Michael Max", 0x32f8c, 0x32fac },
    { L"Tung Fu Rue", 0x3308c, 0x330ac },
    { L"Hwa Jai", 0x3356c, 0x3358c },
    { L"Drunk Hwa Jai", 0x34c4c, 0x34c6c },
    { L"Raiden", 0x3366c, 0x3368c },
    { L"Billy Kane", 0x3358c, 0x335ac },
    { L"Geese Howard", 0x3368c, 0x336ac },
};

const sGame_PaletteDataset FatalFury1_A_Effects_PALETTES[] =
{
    { L"Hitsparks/Dust", 0x32dcc, 0x32dec },
    { L"Hwa Jai/Billy Thrower", 0x335ac, 0x335cc },
    { L"Terry Power Wave", 0x32dec, 0x32dfc },
    { L"Andy Hisho Ken", 0x32e2c, 0x32e4c },
    { L"Joe Hurricane/Michael Tornado", 0x32dfc, 0x32e0c },
    { L"Tung Dai Sharin Kyaku", 0x3300c, 0x3302c },
    { L"Hwa Jai Elixir Bottle", 0x336ac, 0x336cc },
    { L"Raiden Poison Spray", 0x3364c, 0x3366c },
    { L"Billy Hexagonal Stick", 0x336cc, 0x336ec },
    { L"Geese Reppu Ken", 0x335ec, 0x3360c },
};

const sGame_PaletteDataset FatalFury1_A_Portraits_PALETTES[] =
{
    { L"Terry Bogard Portrait", 0x3396c, 0x3398c },
    { L"Andy Bogard Portrait", 0x3398c, 0x339ac },
    { L"Joe Higashi Portrait", 0x339ac, 0x339cc },
    { L"Duck King Portrait", 0x339cc, 0x339ec },
    { L"Richard Meyer Portrait", 0x339ec, 0x33a0c },
    { L"Michael Max Portrait", 0x33a0c, 0x33a2c },
    { L"Tung Fu Rue Portrait", 0x33a2c, 0x33a4c },
    { L"Hwa Jai Portrait", 0x33a4c, 0x33a6c },
    { L"Raiden Portrait", 0x33a6c, 0x33a8c },
    { L"Billy Kane Portrait", 0x33a8c, 0x33aac },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageShadows_PALETTES[] =
{
    { L"Richard Stage Shadow", 0x34b6c, 0x34b8c },
    { L"Duck King Stage Shadow", 0x32fcc, 0x32fec },
    { L"Michael Stage Shadow", 0x34b8c, 0x34bac },
    { L"Tung Stage Shadow", 0x34bac, 0x34bcc },
    { L"Hwa Jai Stage Shadow", 0x34bcc, 0x34bec },
    { L"Raiden Stage Shadow", 0x34bec, 0x34c0c },
    { L"Billy Stage Shadow", 0x34c0c, 0x34c2c },
    { L"Geese Stage Shadow", 0x34c2c, 0x34c4c },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_GAMES_PALETTES[]
{
    { L"Bonus Guy 1", 0x33aac, 0x33aec },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_Cutscenes_PALETTES[] =
{
    { L"Geese Death Background", 0x33aec, 0x33b0c },
    { L"Geese VS Terry GameOver", 0x33b0c, 0x33b2c },
    { L"Geese VS Andy GameOver", 0x33b2c, 0x33b4c },
    { L"Geese VS Joe GameOver", 0x33b4c, 0x33b6c}
};

const sDescTreeNode FatalFury1_A_CHARACTER_COLLECTION[] =
{
   { L"Palettes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_Character_PALETTES, ARRAYSIZE(FatalFury1_A_Character_PALETTES) },
};

const sDescTreeNode FatalFury1_A_BOSSES_COLLECTION[] =
{
   { L"Palettes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_Bosses_PALETTES, ARRAYSIZE(FatalFury1_A_Bosses_PALETTES) },
};

const sDescTreeNode FatalFury1_A_EFFECTS_COLLECTION[] =
{
   { L"Palettes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_Effects_PALETTES, ARRAYSIZE(FatalFury1_A_Effects_PALETTES) },
};

const sDescTreeNode FatalFury1_A_PORTRAITS_COLLECTION[] =
{
   { L"Palettes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_Portraits_PALETTES, ARRAYSIZE(FatalFury1_A_Portraits_PALETTES) },
};

const sDescTreeNode FatalFury1_A_BONUS_COLLECTION[] =
{
   { L"Stage Shadows", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageShadows_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageShadows_PALETTES) },
   { L"Bonus Games", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_GAMES_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_GAMES_PALETTES) },
   { L"Cutscenes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_Cutscenes_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_Cutscenes_PALETTES) },
};

const sDescTreeNode FatalFury1_A_UNITS[] =
{
    { L"Characters",        DESC_NODETYPE_TREE, (void*)FatalFury1_A_CHARACTER_COLLECTION,   ARRAYSIZE(FatalFury1_A_CHARACTER_COLLECTION) },
    { L"Bosses",            DESC_NODETYPE_TREE, (void*)FatalFury1_A_BOSSES_COLLECTION,      ARRAYSIZE(FatalFury1_A_BOSSES_COLLECTION) },
    { L"Effects",           DESC_NODETYPE_TREE, (void*)FatalFury1_A_EFFECTS_COLLECTION,     ARRAYSIZE(FatalFury1_A_EFFECTS_COLLECTION) },
    { L"Portraits",         DESC_NODETYPE_TREE, (void*)FatalFury1_A_PORTRAITS_COLLECTION,   ARRAYSIZE(FatalFury1_A_PORTRAITS_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_COLLECTION,       ARRAYSIZE(FatalFury1_A_BONUS_COLLECTION) },
};

constexpr auto FatalFury1_A_NUMUNIT = ARRAYSIZE(FatalFury1_A_UNITS);

#define FatalFury1_A_EXTRALOC FatalFury1_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef FatalFury1_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

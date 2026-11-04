#pragma once

const std::vector<uint16_t> FFS_SNES_IMGIDS_USED =
{
    indexFFSSprites_Andy,               // 0x2ce
    indexFFSSprites_Axel,               // 0x2cf
    indexFFSSprites_BigBear,            // 0x2d0
    indexFFSSprites_Billy,              // 0x2d1
    indexFFSSprites_Cheng,              // 0x2d2
    indexFFSSprites_DuckKing,           // 0x2d3
    indexFFSSprites_Geese,              // 0x2d4
    indexFFSSprites_Joe,                // 0x2d5
    indexFFSSprites_Jubei,              // 0x2d6
    indexFFSSprites_Kim,                // 0x2d7
    indexFFSSprites_Krauser,            // 0x2d8
    indexFFSSprites_Laurence,           // 0x2d9
    indexFFSSprites_Mai,                // 0x2da
    indexFFSSprites_Ryo,                // 0x2db
    indexFFSSprites_Terry,              // 0x2dc
    indexFFSSprites_Tung,               // 0x2dd
    indexFFSSprites_Bonus,              // 0x2de
    indexFFSSprites_Stages,             // 0x2df
};

const sGame_PaletteDataset FatalFuryS_SNES_Terry_PALETTES_A[] =
{
    { L"Terry A", 0x13f1a0, 0x13f1c0, indexFFSSprites_Terry, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Terry_PALETTES_B[] =
{
    { L"Terry B", 0x13f1c0, 0x13f1e0, indexFFSSprites_Terry, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Terry_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Terry_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Terry_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Terry_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Terry_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Andy_PALETTES_A[] =
{
    { L"Andy A", 0x13f1e0, 0x13f200, indexFFSSprites_Andy, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Andy_PALETTES_B[] =
{
    { L"Andy B", 0x13f200, 0x13f220, indexFFSSprites_Andy, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Andy_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Andy_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Andy_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Andy_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Andy_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Joe_PALETTES_A[] =
{
    { L"Joe A", 0x13f220, 0x13f240, indexFFSSprites_Joe, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Joe_PALETTES_B[] =
{
    { L"Joe B", 0x13f240, 0x13f260, indexFFSSprites_Joe, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Joe_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Joe_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Joe_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Joe_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Joe_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_BigBear_PALETTES_A[] =
{
    { L"Big Bear A", 0x13f2a0, 0x13f2c0 },
};

const sGame_PaletteDataset FatalFuryS_SNES_BigBear_PALETTES_B[] =
{
    { L"Big Bear B", 0x13f2c0, 0x13f2e0 },
};

const sDescTreeNode FatalFuryS_SNES_BigBear_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_BigBear_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_BigBear_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_BigBear_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_BigBear_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Jubei_PALETTES_A[] =
{
    { L"Jubei A", 0x13f2e0, 0x13f300 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Jubei_PALETTES_B[] =
{
    { L"Jubei B", 0x13f300, 0x13f320 },
};

const sDescTreeNode FatalFuryS_SNES_Jubei_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Jubei_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Jubei_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Jubei_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Jubei_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Cheng_PALETTES_A[] =
{
    { L"Cheng A", 0x13f320, 0x13f340 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Cheng_PALETTES_B[] =
{
    { L"Cheng B", 0x13f340, 0x13f360 },
};

const sDescTreeNode FatalFuryS_SNES_Cheng_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Cheng_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Cheng_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Cheng_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Cheng_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Kim_PALETTES_A[] =
{
    { L"Kim A", 0x13f260, 0x13f280 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Kim_PALETTES_B[] =
{
    { L"Kim B", 0x13f280, 0x13f2a0 },
};

const sDescTreeNode FatalFuryS_SNES_Kim_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Kim_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Kim_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Kim_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Kim_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Mai_PALETTES_A[] =
{
    { L"Mai A", 0x13f360, 0x13f380, indexFFSSprites_Mai, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Mai_PALETTES_B[] =
{
    { L"Mai B", 0x13f380, 0x13f3a0, indexFFSSprites_Mai, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Mai_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Mai_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Mai_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Mai_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Mai_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Duck_PALETTES_A[] =
{
    { L"Duck A", 0x13f3a0, 0x13f3c0, indexFFSSprites_DuckKing, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Duck_PALETTES_B[] =
{
    { L"Duck B", 0x13f3c0, 0x13f3e0, indexFFSSprites_DuckKing, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Duck_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Duck_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Duck_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Duck_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Duck_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Tung_PALETTES_A[] =
{
    { L"Tung A", 0x13f3e0, 0x13f400, indexFFSSprites_Tung, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Tung_PALETTES_B[] =
{
    { L"Tung B", 0x13f400, 0x13f420, indexFFSSprites_Tung, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Tung_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Tung_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Tung_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Tung_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Tung_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Billy_PALETTES_A[] =
{
    { L"Billy A", 0x13f420, 0x13f440, indexFFSSprites_Billy, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Billy_PALETTES_B[] =
{
    { L"Billy B", 0x13f440, 0x13f460, indexFFSSprites_Billy, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Billy_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Billy_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Billy_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Billy_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Billy_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_AxelHawk_PALETTES_A[] =
{
    { L"Axel Hawk A", 0x13f460, 0x13f480, indexFFSSprites_Axel, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_AxelHawk_PALETTES_B[] =
{
    { L"Axel Hawk B", 0x13f480, 0x13f4a0, indexFFSSprites_Axel, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_AxelHawk_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_AxelHawk_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_AxelHawk_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_AxelHawk_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_AxelHawk_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Laurence_PALETTES_A[] =
{
    { L"Laurence A", 0x13f4a0, 0x13f4c0, indexFFSSprites_Laurence, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Laurence_PALETTES_B[] =
{
    { L"Laurence B", 0x13f4c0, 0x13f4e0, indexFFSSprites_Laurence, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Laurence_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Laurence_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Laurence_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Laurence_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Laurence_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Geese_PALETTES_A[] =
{
    { L"Geese A", 0x13f4e0, 0x13f500, indexFFSSprites_Geese, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Geese_PALETTES_B[] =
{
    { L"Geese B", 0x13f500, 0x13f520, indexFFSSprites_Geese, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Geese_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Geese_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Geese_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Geese_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Geese_PALETTES_B) },
};

const sGame_PaletteDataset FatalFuryS_SNES_Wolfgang_PALETTES_A[] =
{
    { L"Wolfgang A", 0x13f520, 0x13f540, indexFFSSprites_Krauser, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Wolfgang_PALETTES_B[] =
{
    { L"Wolfgang B", 0x13f540, 0x13f560, indexFFSSprites_Krauser, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Ryo_PALETTES_A[] =
{
    { L"Ryo A", 0x13f560, 0x13f580, indexFFSSprites_Ryo, 0x00 },
};

const sGame_PaletteDataset FatalFuryS_SNES_Ryo_PALETTES_B[] =
{
    { L"Ryo B", 0x13f580, 0x13f5a0, indexFFSSprites_Ryo, 0x00 },
};

const sDescTreeNode FatalFuryS_SNES_Wolfgang_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Wolfgang_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Wolfgang_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Wolfgang_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Wolfgang_PALETTES_B) },
};

const sDescTreeNode FatalFuryS_SNES_Ryo_COLLECTION[] =
{
   { L"A", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Ryo_PALETTES_A, ARRAYSIZE(FatalFuryS_SNES_Ryo_PALETTES_A) },
   { L"B", DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Ryo_PALETTES_B, ARRAYSIZE(FatalFuryS_SNES_Ryo_PALETTES_B) },
};

const sDescTreeNode FatalFuryS_SNES_UNITS[] =
{
    { L"Terry",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Terry_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Terry_COLLECTION) },
    { L"Andy",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Andy_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Andy_COLLECTION) },
    { L"Joe",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Joe_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Joe_COLLECTION) },
    { L"Big Bear",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_BigBear_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_BigBear_COLLECTION) },
    { L"Jubei",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Jubei_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Jubei_COLLECTION) },
    { L"Cheng",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Cheng_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Cheng_COLLECTION) },
    { L"Kim",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Kim_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Kim_COLLECTION) },
    { L"Mai",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Mai_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Mai_COLLECTION) },
    { L"Duck",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Duck_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Duck_COLLECTION) },
    { L"Tung",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Tung_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Tung_COLLECTION) },
    { L"Billy",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Billy_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Billy_COLLECTION) },
    { L"Axel Hawk",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_AxelHawk_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_AxelHawk_COLLECTION) },
    { L"Laurence",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Laurence_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Laurence_COLLECTION) },
    { L"Geese",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Geese_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Geese_COLLECTION) },
    { L"Wolfgang Krauser",  DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Wolfgang_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Wolfgang_COLLECTION) },
    { L"Ryo Sakazaki",      DESC_NODETYPE_TREE, (void*)FatalFuryS_SNES_Ryo_COLLECTION,   ARRAYSIZE(FatalFuryS_SNES_Ryo_COLLECTION) },
};

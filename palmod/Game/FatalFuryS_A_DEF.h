#pragma once

const std::vector<uint16_t> FFS_A_IMGIDS_USED =
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

const sGame_PaletteDataset FatalFuryS_A_Terry_PALETTES_P1[] =
{
    { L"Terry Bogard P1", 0x40200, 0x40220, indexFFSSprites_Terry, 0x00 },
    { L"Terry Bogard Portrait P1", 0x408a0, 0x408c0, indexFFSSprites_Terry, 0x40 },
};

const sGame_PaletteDataset FatalFuryS_A_Terry_PALETTES_P2[] =
{
    { L"Terry Bogard P2", 0x41000, 0x41020, indexFFSSprites_Terry, 0x00 },
    { L"Terry Bogard Portrait P2", 0x418a0, 0x418c0, indexFFSSprites_Terry, 0x40 },
};

const sDescTreeNode FatalFuryS_A_Terry_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Terry_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Terry_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Terry_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Terry_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Andy_PALETTES_P1[] =
{
    { L"Andy Bogard P1", 0x40220, 0x40240, indexFFSSprites_Andy, 0x00 },
    { L"Andy Bogard Portrait P1", 0x408c0, 0x408e0, indexFFSSprites_Andy, 0x40 },
};

const sGame_PaletteDataset FatalFuryS_A_Andy_PALETTES_P2[] =
{
    { L"Andy Bogard P2", 0x41020, 0x41040, indexFFSSprites_Andy, 0x00 },
    { L"Andy Bogard Portrait P2", 0x418c0, 0x418e0, indexFFSSprites_Andy, 0x40 },
};

const sDescTreeNode FatalFuryS_A_Andy_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Andy_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Andy_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Andy_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Andy_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Joe_PALETTES_P1[] =
{
    { L"Joe Higashi P1", 0x40240, 0x40260, indexFFSSprites_Joe, 0x00 },
    { L"Joe Higashi Portrait P1", 0x408e0, 0x40900, indexFFSSprites_Joe, 0x40 },
    { L"Joe Higashi Hurricane Upper P1", 0x40480, 0x404a0 },
};

const sGame_PaletteDataset FatalFuryS_A_Joe_PALETTES_P2[] =
{
    { L"Joe Higashi P2", 0x41040, 0x41060, indexFFSSprites_Joe, 0x00 },
    { L"Joe Higashi Portrait P2", 0x418e0, 0x41900, indexFFSSprites_Joe, 0x40 },
    { L"Joe Higashi Hurricane Upper P2", 0x41280, 0x412a0 },
};

const sDescTreeNode FatalFuryS_A_Joe_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Joe_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Joe_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Joe_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Joe_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_BigBear_PALETTES_P1[] =
{
    { L"Big Bear P1", 0x40260, 0x40280, indexFFSSprites_BigBear, 0x00 },
    { L"Big Bear Portrait P1", 0x40900, 0x40920, indexFFSSprites_BigBear, 0x40 },
};

const sGame_PaletteDataset FatalFuryS_A_BigBear_PALETTES_P2[] =
{
    { L"Big Bear P2", 0x41060, 0x41080, indexFFSSprites_BigBear, 0x00 },
    { L"Big Bear Portrait P2", 0x41900, 0x41920, indexFFSSprites_BigBear, 0x40 },
};

const sDescTreeNode FatalFuryS_A_BigBear_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BigBear_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_BigBear_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BigBear_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_BigBear_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Jubei_PALETTES_P1[] =
{
    { L"Jubei Yamada P1", 0x40280, 0x402a0, indexFFSSprites_Jubei, 0x00 },
    { L"Jubei Yamada Portrait P1", 0x40920, 0x40940, indexFFSSprites_Jubei, 0x40 },
    { L"Jubei Yamada Geta Shoes P1", 0x40400, 0x40420 },
    { L"Jubei Yamada Rice Cracker Dirks P1", 0x405e0, 0x40600 },
};

const sGame_PaletteDataset FatalFuryS_A_Jubei_PALETTES_P2[] =
{
    { L"Jubei Yamada P2", 0x41080, 0x410a0, indexFFSSprites_Jubei, 0x00 },
    { L"Jubei Yamada Portrait P2", 0x41920, 0x41940, indexFFSSprites_Jubei, 0x40 },
    { L"Jubei Yamada Geta Shoes P2", 0x41200, 0x41220 },
    { L"Jubei Yamada Rice Cracker Dirks P2", 0x413e0, 0x41400 },
};

const sDescTreeNode FatalFuryS_A_Jubei_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Jubei_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Jubei_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Jubei_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Jubei_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Cheng_PALETTES_P1[] =
{
    { L"Cheng Sinzan P1", 0x402a0, 0x402c0, indexFFSSprites_Cheng, 0x00 },
    { L"Cheng Sinzan Portrait P1", 0x40940, 0x40960, indexFFSSprites_Cheng, 0x40 },
};

const sGame_PaletteDataset FatalFuryS_A_Cheng_PALETTES_P2[] =
{
    { L"Cheng Sinzan P2", 0x410a0, 0x410c0, indexFFSSprites_Cheng, 0x00 },
    { L"Cheng Sinzan Portrait P2", 0x41940, 0x41960, indexFFSSprites_Cheng, 0x40 },
};

const sDescTreeNode FatalFuryS_A_Cheng_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Cheng_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Cheng_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Cheng_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Cheng_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Kim_PALETTES_P1[] =
{
    { L"Kim Kaphwan P1", 0x402c0, 0x402e0, indexFFSSprites_Kim, 0x00 },
    { L"Kim Kaphwan Portrait P1", 0x40960, 0x40980, indexFFSSprites_Kim, 0x40 },
};

const sGame_PaletteDataset FatalFuryS_A_Kim_PALETTES_P2[] =
{
    { L"Kim Kaphwan P2", 0x410c0, 0x410e0, indexFFSSprites_Kim, 0x00 },
    { L"Kim Kaphwan Portrait P2", 0x41960, 0x41980, indexFFSSprites_Kim, 0x40 },
};

const sDescTreeNode FatalFuryS_A_Kim_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Kim_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Kim_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Kim_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Kim_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Mai_PALETTES_P1[] =
{
    { L"Mai Shiranui P1", 0x40300, 0x40320, indexFFSSprites_Mai, 0x00 },
    { L"Mai Shiranui Portrait P1", 0x409a0, 0x409c0, indexFFSSprites_Mai, 0x40 },
    { L"Mai Flames P1", 0x404e0, 0x40500 },
};

const sGame_PaletteDataset FatalFuryS_A_Mai_PALETTES_P2[] =
{
    { L"Mai Shiranui P2", 0x41100, 0x41120, indexFFSSprites_Mai, 0x00 },
    { L"Mai Shiranui Portrait P2", 0x419a0, 0x419c0, indexFFSSprites_Mai, 0x40 },
    { L"Mai Shiranui Flames P2", 0x412e0, 0x41300 },
};

const sDescTreeNode FatalFuryS_A_Mai_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Mai_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Mai_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Mai_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Mai_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Duck_PALETTES_P1[] =
{
    { L"Duck King P1", 0x40380, 0x403a0, indexFFSSprites_DuckKing, 0x00 },
    { L"Duck King Portrait P1", 0x40b20, 0x40b40, indexFFSSprites_DuckKing, 0x40 },
    { L"Duck King P-Chan P1", 0x40640, 0x40660 },
};

const sGame_PaletteDataset FatalFuryS_A_Duck_PALETTES_P2[] =
{
    { L"Duck King P2", 0x41180, 0x411a0, indexFFSSprites_DuckKing, 0x00 },
    { L"Duck King Portrait P2", 0x41b20, 0x41b40, indexFFSSprites_DuckKing, 0x40 },
    { L"Duck King P-Chan P2", 0x41440, 0x41460 },
};

const sDescTreeNode FatalFuryS_A_Duck_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Duck_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Duck_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Duck_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Duck_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Tung_PALETTES_P1[] =
{
    { L"Tung Fu Rue P1", 0x403a0, 0x403c0, indexFFSSprites_Tung, 0x00 },
    { L"Tung Fu Rue Portrait P1", 0x40b40, 0x40b60, indexFFSSprites_Tung, 0x40 },
    { L"Tung Fu Rue Effects P1", 0x40600, 0x40620 },
};

const sGame_PaletteDataset FatalFuryS_A_Tung_PALETTES_P2[] =
{
    { L"Tung Fu Rue P2", 0x411a0, 0x411c0, indexFFSSprites_Tung, 0x00 },
    { L"Tung Fu Rue Portrait P2", 0x41b40, 0x41b60, indexFFSSprites_Tung, 0x40 },
    { L"Tung Fu Rue Effects P2", 0x41400, 0x41420 },
};

const sDescTreeNode FatalFuryS_A_Tung_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Tung_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Tung_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Tung_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Tung_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Billy_PALETTES_P1[] =
{
    { L"Billy Kane P1", 0x402e0, 0x40300, indexFFSSprites_Billy, 0x00 },
    { L"Billy Kane Portrait P1", 0x40980, 0x409a0, indexFFSSprites_Billy, 0x40 },
    { L"Billy Kane Flames P1", 0x40520, 0x40540 },
};

const sGame_PaletteDataset FatalFuryS_A_Billy_PALETTES_P2[] =
{
    { L"Billy Kane P2", 0x410e0, 0x41100, indexFFSSprites_Billy, 0x00 },
    { L"Billy Kane Portrait P2", 0x41980, 0x419a0, indexFFSSprites_Billy, 0x40 },
    { L"Billy Kane Flames P2", 0x41320, 0x41340 },
};

const sDescTreeNode FatalFuryS_A_Billy_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Billy_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Billy_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Billy_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Billy_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_AxelHawk_PALETTES_P1[] =
{
    { L"Axel Hawk P1", 0x40340, 0x40360, indexFFSSprites_Axel, 0x00 },
    { L"Axel Hawk Portrait P1", 0x409c0, 0x409e0, indexFFSSprites_Axel, 0x40 },
    { L"Axel Hawk Tornado Upper P1", 0x40660, 0x40680 },
};

const sGame_PaletteDataset FatalFuryS_A_AxelHawk_PALETTES_P2[] =
{
    { L"Axel Hawk P2", 0x41140, 0x41160, indexFFSSprites_Axel, 0x00 },
    { L"Axel Hawk Portrait P2", 0x419c0, 0x419e0, indexFFSSprites_Axel, 0x40 },
    { L"Axel Hawk Tornado Upper P2", 0x41460, 0x41480 },
};

const sDescTreeNode FatalFuryS_A_AxelHawk_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_AxelHawk_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_AxelHawk_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_AxelHawk_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_AxelHawk_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Laurence_PALETTES_P1[] =
{
    { L"Laurence Blood P1", 0x40320, 0x40340, indexFFSSprites_Laurence, 0x00 },
    { L"Laurence Blood Portrait P1", 0x409e0, 0x40a00, indexFFSSprites_Laurence, 0x40 },
    { L"Laurence Blood Slashes P1", 0x40540, 0x40560 },
    { L"Laurence Blood Flower P1", 0x40560, 0x40580 },
};

const sGame_PaletteDataset FatalFuryS_A_Laurence_PALETTES_P2[] =
{
    { L"Laurence Blood P2", 0x41120, 0x41140, indexFFSSprites_Laurence, 0x00 },
    { L"Laurence Blood Portrait P2", 0x419e0, 0x41a00, indexFFSSprites_Laurence, 0x40 },
    { L"Laurence Blood Slashes P2", 0x41340, 0x41360 },
    { L"Laurence Blood Flower P2", 0x41360, 0x41380 },
};

const sDescTreeNode FatalFuryS_A_Laurence_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Laurence_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Laurence_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Laurence_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Laurence_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Geese_PALETTES_P1[] =
{
    { L"Geese Howard P1", 0x403c0, 0x403e0, indexFFSSprites_Geese, 0x00 },
    { L"Geese Howard Portrait P1", 0x40ba0, 0x40bc0, indexFFSSprites_Geese, 0x40 },
    { L"Geese Howard Effects P1", 0x40500, 0x40520 },
};

const sGame_PaletteDataset FatalFuryS_A_Geese_PALETTES_P2[] =
{
    { L"Geese Howard P2", 0x411c0, 0x411e0, indexFFSSprites_Geese, 0x00 },
    { L"Geese Howard Portrait P2", 0x41ba0, 0x41bc0, indexFFSSprites_Geese, 0x40 },
    { L"Geese Howard Effects P2", 0x41300, 0x41320 },
};

const sDescTreeNode FatalFuryS_A_Geese_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Geese_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Geese_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Geese_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Geese_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Wolfgang_PALETTES_P1[] =
{
    { L"Wolfgang Krauser P1", 0x40360, 0x40380, indexFFSSprites_Krauser, 0x00 },
    { L"Wolfgang Krauser Portrait P1", 0x40c80, 0x40ca0, indexFFSSprites_Krauser, 0x40 },
    { L"Wolfgang Krauser Cape & Armor P1", 0x404a0, 0x404c0 },
};

const sGame_PaletteDataset FatalFuryS_A_Wolfgang_PALETTES_P2[] =
{
    { L"Wolfgang Krauser P2", 0x41160, 0x41180, indexFFSSprites_Krauser, 0x00 },
    { L"Wolfgang Krauser Portrait P2", 0x41c80, 0x41ca0, indexFFSSprites_Krauser, 0x40 },
    { L"Wolfgang Krauser Cape & Armor P2", 0x412a0, 0x412c0 },
};

const sDescTreeNode FatalFuryS_A_Wolfgang_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Wolfgang_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Wolfgang_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Wolfgang_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Wolfgang_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_Ryo_PALETTES_P1[] =
{
    { L"Ryo Sakazaki P1", 0x403e0, 0x40400, indexFFSSprites_Ryo, 0x00 },
    { L"Ryo Sakazaki Portrait P1", 0x40bc0, 0x40be0, indexFFSSprites_Ryo, 0x40 },
    { L"Ryo Sakazaki Effects P1", 0x405a0, 0x405c0 },
};

const sGame_PaletteDataset FatalFuryS_A_Ryo_PALETTES_P2[] =
{
    { L"Ryo Sakazaki P2", 0x411e0, 0x41200, indexFFSSprites_Ryo, 0x00 },
    { L"Ryo Sakazaki Portrait P2", 0x41bc0, 0x41be0, indexFFSSprites_Ryo, 0x40 },
    { L"Ryo Sakazaki Effects P2", 0x413a0, 0x413c0 },
};

const sDescTreeNode FatalFuryS_A_Ryo_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Ryo_PALETTES_P1, ARRAYSIZE(FatalFuryS_A_Ryo_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Ryo_PALETTES_P2, ARRAYSIZE(FatalFuryS_A_Ryo_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFuryS_A_BONUS_INTRO_PALETTES[] =
{
    { L"Terry Intro", 0x40a40, 0x40a60, indexFFSSprites_Bonus, 0x0b },
    { L"Andy Intro", 0x40a60, 0x40a80, indexFFSSprites_Bonus, 0x04 },
    { L"Joe Intro", 0x40a80, 0x40aa0, indexFFSSprites_Bonus, 0x09 },
    { L"Geese Intro", 0x40aa0, 0x40ac0, indexFFSSprites_Bonus, 0x08 },
    { L"Krauser Intro", 0x40ac0, 0x40ae0, indexFFSSprites_Bonus, 0x0a },
    { L"Intro Extra 1", 0x40a00, 0x40a20, indexFFSSprites_Bonus, 0x06 },
    { L"Intro Extra 2", 0x40a20, 0x40a40, indexFFSSprites_Bonus, 0x07 },
    { L"Blue Intro Background", 0x40be0, 0x40c00, indexFFSSprites_Bonus, 0x05 },
    { L"Red Intro Background", 0x40c00, 0x40c20, indexFFSSprites_Bonus, 0x05 },
};

const sGame_PaletteDataset FatalFuryS_A_BONUS_STARTMENU_PALETTES[] =
{
    { L"GAROU Logo 1/6", 0x40800, 0x40820, indexFFSSprites_Bonus, 0x0f },
    { L"GAROU Logo 2/6", 0x47040, 0x47060, indexFFSSprites_Bonus, 0x0f },
    { L"GAROU Logo 3/6", 0x47060, 0x47080, indexFFSSprites_Bonus, 0x0f },
    { L"GAROU Logo 4/6", 0x47080, 0x470a0, indexFFSSprites_Bonus, 0x0f },
    { L"GAROU Logo 5/6", 0x470a0, 0x470c0, indexFFSSprites_Bonus, 0x0f },
    { L"GAROU Logo 6/6", 0x470c0, 0x470e0, indexFFSSprites_Bonus, 0x0f },
    { L"FATAL FURY Logo 1/6", 0x40c60, 0x40c80, indexFFSSprites_Bonus, 0x0e },
    { L"FATAL FURY Logo 2/6", 0x47100, 0x47120, indexFFSSprites_Bonus, 0x0e },
    { L"FATAL FURY Logo 3/6", 0x47120, 0x47140, indexFFSSprites_Bonus, 0x0e },
    { L"FATAL FURY Logo 4/6", 0x47140, 0x47160, indexFFSSprites_Bonus, 0x0e },
    { L"FATAL FURY Logo 5/6", 0x47160, 0x47180, indexFFSSprites_Bonus, 0x0e },
    { L"FATAL FURY Logo 6/6", 0x47180, 0x471a0, indexFFSSprites_Bonus, 0x0e },
    { L"SPECIAL Logo", 0x40ae0, 0x40b00, indexFFSSprites_Bonus, 0x0c },
    { L"SPECIAL Logo Shadow", 0x401c0, 0x401e0, indexFFSSprites_Bonus, 0x0c },
    { L"Mini SNK Logo", 0x40020, 0x40040, indexFFSSprites_Bonus, 0x10 },
    { L"Demo Logo", 0x40040, 0x40060, indexFFSSprites_Bonus, 0x0d },
};

const sGame_PaletteDataset FatalFuryS_A_BONUS_INGAME_PALETTES[] =
{
    { L"Hitsparks/Dust/Blood P1", 0x40420, 0x40440 },
    { L"Hitsparks/Dust/Blood P2", 0x41220, 0x41240 },
    { L"Terry/Krauser/Shadow Effects P1", 0x40440, 0x40460 },
    { L"Terry/Krauser/Shadow Effects P2", 0x41240, 0x41260 },
    { L"Andy/Big Bear/Billy/Cheng/Mai Effects P1", 0x40460, 0x40480 },
    { L"Andy/Big Bear/Billy/Cheng/Mai Effects P2", 0x41260, 0x41280 },
    { L"Burned Effect P1", 0x405c0, 0x405e0 },
    { L"Burned Effect P2", 0x413c0, 0x413e0 },
    { L"Zapped Effect P1", 0x40580, 0x405a0 },
    { L"Zapped Effect P2", 0x41380, 0x413a0 },
};

const sGame_PaletteDataset FatalFuryS_A_BONUS_HUD_PALETTES[] =
{
    { L"Hud Extras", 0x40080, 0x40120 },
    { L"Score Extras", 0x40120, 0x401c0 },
    { L"Win Icon/Various Text", 0x40000, 0x40020 },
    { L"Fight/Winner Text", 0x40820, 0x40840 },
    { L"Continue Text", 0x40d00, 0x40d20 },
    { L"Various Text", 0x40840, 0x40860 },
    { L"Challenger Portrait Background", 0x41a80, 0x41aa0 },
    { L"Score Portrait Background", 0x41ac0, 0x41ae0 },
};

const sGame_PaletteDataset FatalFuryS_A_BONUS_SELECTSCREEN_PALETTES[] =
{
    { L"Select Background", 0x40b00, 0x40b20, indexFFSSprites_Bonus, 0x01 },
    { L"Select Cursor", 0x40dc0, 0x40de0, indexFFSSprites_Bonus, 0x02 },
    { L"Select Icons", 0x40e00, 0x40fe0, indexFFSSprites_Bonus, 0x03 },
    { L"Defeated Icons", 0x41e00, 0x41fe0, indexFFSSprites_Bonus, 0x03 },
    { L"Ryo Select Icon", 0x40ca0, 0x40cc0, indexFFSSprites_Bonus, 0x11 },
    { L"Character Names P1", 0x41a40, 0x41a60, indexFFSSprites_Bonus, 0x00 },
    { L"Faded Character Names P1", 0x41a60, 0x41a80, indexFFSSprites_Bonus, 0x00 },
    { L"Character Names P2 ", 0x41420, 0x41440, indexFFSSprites_Bonus, 0x00 },
    { L"Faded Character Names P2", 0x41820, 0x41840, indexFFSSprites_Bonus, 0x00 },
    { L"VS Map", 0x40c20, 0x40c60, indexFFSSprites_Bonus, 0x15 },
    { L"VS Logo", 0x40860, 0x40880, indexFFSSprites_Bonus, 0x14 },
    { L"Tutorial Things", 0x40cc0, 0x40d00, indexFFSSprites_Bonus, 0x12 },
    { L"Tutorial Things Flash", 0x41cc0, 0x41d00, indexFFSSprites_Bonus, 0x12 },
    { L"Tutorial/Win Background", 0x40880, 0x408a0, indexFFSSprites_Bonus, 0x13 },
};

const sDescTreeNode FatalFuryS_A_BONUS_COLLECTION[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BONUS_INTRO_PALETTES, ARRAYSIZE(FatalFuryS_A_BONUS_INTRO_PALETTES) },
    { L"Start Menu", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BONUS_STARTMENU_PALETTES, ARRAYSIZE(FatalFuryS_A_BONUS_STARTMENU_PALETTES) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BONUS_INGAME_PALETTES, ARRAYSIZE(FatalFuryS_A_BONUS_INGAME_PALETTES) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BONUS_HUD_PALETTES, ARRAYSIZE(FatalFuryS_A_BONUS_HUD_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BONUS_SELECTSCREEN_PALETTES, ARRAYSIZE(FatalFuryS_A_BONUS_SELECTSCREEN_PALETTES) },
};

const sDescTreeNode FatalFuryS_A_UNITS[] =
{
    { L"Terry Bogard",      DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Terry_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Terry_COLLECTION) },
    { L"Andy Bogard",       DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Andy_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Andy_COLLECTION) },
    { L"Joe Higashi",       DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Joe_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Joe_COLLECTION) },
    { L"Big Bear",          DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BigBear_COLLECTION,   ARRAYSIZE(FatalFuryS_A_BigBear_COLLECTION) },
    { L"Jubei Yamada",      DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Jubei_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Jubei_COLLECTION) },
    { L"Cheng Sinzan",      DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Cheng_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Cheng_COLLECTION) },
    { L"Kim Kaphwan",       DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Kim_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Kim_COLLECTION) },
    { L"Mai Shiranui",      DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Mai_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Mai_COLLECTION) },
    { L"Duck King",         DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Duck_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Duck_COLLECTION) },
    { L"Tung Fu Rae",       DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Tung_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Tung_COLLECTION) },
    { L"Billy Kane",        DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Billy_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Billy_COLLECTION) },
    { L"Axel Hawk",         DESC_NODETYPE_TREE, (void*)FatalFuryS_A_AxelHawk_COLLECTION,   ARRAYSIZE(FatalFuryS_A_AxelHawk_COLLECTION) },
    { L"Laurence Blood",    DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Laurence_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Laurence_COLLECTION) },
    { L"Geese Howard",      DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Geese_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Geese_COLLECTION) },
    { L"Wolfgang Krauser",  DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Wolfgang_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Wolfgang_COLLECTION) },
    { L"Ryo Sakazaki",      DESC_NODETYPE_TREE, (void*)FatalFuryS_A_Ryo_COLLECTION,   ARRAYSIZE(FatalFuryS_A_Ryo_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)FatalFuryS_A_BONUS_COLLECTION,       ARRAYSIZE(FatalFuryS_A_BONUS_COLLECTION) },
};

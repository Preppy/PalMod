#pragma once

const std::vector<uint16_t> FatalFury2_A_IMGIDS_USED =
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

const sGame_PaletteDataset FatalFury2_A_Terry_PALETTES_P1[] =
{
    { L"Terry Bogard P1", 0x38800, 0x38820, indexFFSSprites_Terry, 0x00 },
    { L"Terry Bogard Portrait P1", 0x382a0, 0x382c0, indexFFSSprites_Terry, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Terry_PALETTES_P2[] =
{
    { L"Terry Bogard P2", 0x39000, 0x39020, indexFFSSprites_Terry, 0x00 },
    { L"Terry Bogard Portrait P2", 0x394a0, 0x394c0, indexFFSSprites_Terry, 0x40 },
};

const sDescTreeNode FatalFury2_A_Terry_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Terry_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Terry_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Terry_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Terry_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Andy_PALETTES_P1[] =
{
    { L"Andy Bogard P1", 0x38820, 0x38840, indexFFSSprites_Andy, 0x00 },
    { L"Andy Bogard Portrait P1", 0x382c0, 0x382e0, indexFFSSprites_Andy, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Andy_PALETTES_P2[] =
{
    { L"Andy Bogard P2", 0x39020, 0x39040, indexFFSSprites_Andy, 0x00 },
    { L"Andy Bogard Portrait P2", 0x394c0, 0x394e0, indexFFSSprites_Andy, 0x40 },
};

const sDescTreeNode FatalFury2_A_Andy_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Andy_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Andy_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Andy_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Andy_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Joe_PALETTES_P1[] =
{
    { L"Joe Higashi P1", 0x38840, 0x38860, indexFFSSprites_Joe, 0x00 },
    { L"Joe Higashi Portrait P1", 0x382e0, 0x38300, indexFFSSprites_Joe, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Joe_PALETTES_P2[] =
{
    { L"Joe Higashi P2", 0x39040, 0x39060, indexFFSSprites_Joe, 0x00 },
    { L"Joe Higashi Portrait P2", 0x394e0, 0x39500, indexFFSSprites_Joe, 0x40 },
};

const sDescTreeNode FatalFury2_A_Joe_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Joe_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Joe_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Joe_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Joe_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_BigBear_PALETTES_P1[] =
{
    { L"Big Bear P1", 0x38860, 0x38880, indexFFSSprites_BigBear, 0x00 },
    { L"Big Bear Portrait P1", 0x38300, 0x38320, indexFFSSprites_BigBear, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_BigBear_PALETTES_P2[] =
{
    { L"Big Bear P2", 0x39060, 0x39080, indexFFSSprites_BigBear, 0x00 },
    { L"Big Bear Portrait P2", 0x39500, 0x39520, indexFFSSprites_BigBear, 0x40 },
};

const sDescTreeNode FatalFury2_A_BigBear_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BigBear_PALETTES_P1, ARRAYSIZE(FatalFury2_A_BigBear_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BigBear_PALETTES_P2, ARRAYSIZE(FatalFury2_A_BigBear_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Jubei_PALETTES_P1[] =
{
    { L"Jubei Yamada P1", 0x38880, 0x388a0, indexFFSSprites_Jubei, 0x00 },
    { L"Jubei Yamada Portrait P1", 0x38320, 0x38340, indexFFSSprites_Jubei, 0x40 },
    { L"Jubei Yamada Geta Shoes P1", 0x38a00, 0x38a20 },
    { L"Jubei Yamada Rice Cracker Dirks", 0x38be0, 0x38c00 },
};

const sGame_PaletteDataset FatalFury2_A_Jubei_PALETTES_P2[] =
{
    { L"Jubei Yamada P2", 0x39080, 0x390a0, indexFFSSprites_Jubei, 0x00 },
    { L"Jubei Yamada Portrait P2", 0x39520, 0x39540, indexFFSSprites_Jubei, 0x40 },
    { L"Jubei Yamada Geta Shoes P2", 0x39200, 0x39220 },
    { L"Jubei Yamada Rice Cracker Dirks", 0x393e0, 0x39400 },
};

const sDescTreeNode FatalFury2_A_Jubei_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Jubei_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Jubei_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Jubei_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Jubei_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Cheng_PALETTES_P1[] =
{
    { L"Cheng Sinzan P1", 0x388a0, 0x388c0, indexFFSSprites_Cheng, 0x00 },
    { L"Cheng Sinzan Portrait P1", 0x38340, 0x38360, indexFFSSprites_Cheng, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Cheng_PALETTES_P2[] =
{
    { L"Cheng Sinzan P2", 0x390a0, 0x390c0, indexFFSSprites_Cheng, 0x00 },
    { L"Cheng Sinzan Portrait P2", 0x39540, 0x39560, indexFFSSprites_Cheng, 0x40 },
};

const sDescTreeNode FatalFury2_A_Cheng_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Cheng_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Cheng_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Cheng_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Cheng_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Kim_PALETTES_P1[] =
{
    { L"Kim Kaphwan P1", 0x388c0, 0x388e0, indexFFSSprites_Kim, 0x00 },
    { L"Kim Kaphwan Portrait P1", 0x38360, 0x38380, indexFFSSprites_Kim, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Kim_PALETTES_P2[] =
{
    { L"Kim Kaphwan P2", 0x390c0, 0x390e0, indexFFSSprites_Kim, 0x00 },
    { L"Kim Kaphwan Portrait P2", 0x39560, 0x39580, indexFFSSprites_Kim, 0x40 },
};

const sDescTreeNode FatalFury2_A_Kim_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Kim_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Kim_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Kim_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Kim_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Mai_PALETTES_P1[] =
{
    { L"Mai Shiranui P1", 0x38900, 0x38920, indexFFSSprites_Mai, 0x00 },
    { L"Mai Shiranui Portrait P1", 0x383a0, 0x383c0, indexFFSSprites_Mai, 0x40 },
    { L"Mai Shiranui Flames P1", 0x38ae0, 0x38b00 },
};

const sGame_PaletteDataset FatalFury2_A_Mai_PALETTES_P2[] =
{
    { L"Mai Shiranui P2", 0x39100, 0x39120, indexFFSSprites_Mai, 0x00 },
    { L"Mai Shiranui Portrait P2", 0x395a0, 0x395c0, indexFFSSprites_Mai, 0x40 },
    { L"Mai Shiranui Flames P2", 0x392e0, 0x39300 },
};

const sDescTreeNode FatalFury2_A_Mai_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Mai_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Mai_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Mai_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Mai_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Billy_PALETTES_P1[] =
{
    { L"Billy Kane P1", 0x388e0, 0x38900, indexFFSSprites_Billy, 0x00 },
    { L"Billy Kane Portrait P1", 0x38380, 0x383a0, indexFFSSprites_Billy, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Billy_PALETTES_P2[] =
{
    { L"Billy Kane P2", 0x390e0, 0x39100, indexFFSSprites_Billy, 0x00 },
    { L"Billy Kane Portrait P2", 0x39580, 0x395a0, indexFFSSprites_Billy, 0x40 },
};

const sDescTreeNode FatalFury2_A_Billy_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Billy_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Billy_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Billy_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Billy_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_AxelHawk_PALETTES_P1[] =
{
    { L"Axel Hawk P1", 0x38940, 0x38960, indexFFSSprites_Axel, 0x00 },
    { L"Axel Hawk Portrait P1", 0x383c0, 0x383e0, indexFFSSprites_Axel, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_AxelHawk_PALETTES_P2[] =
{
    { L"Axel Hawk P2", 0x39140, 0x39160, indexFFSSprites_Axel, 0x00 },
    { L"Axel Hawk Portrait P2", 0x395c0, 0x395e0, indexFFSSprites_Axel, 0x40 },
};

const sDescTreeNode FatalFury2_A_AxelHawk_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_AxelHawk_PALETTES_P1, ARRAYSIZE(FatalFury2_A_AxelHawk_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_AxelHawk_PALETTES_P2, ARRAYSIZE(FatalFury2_A_AxelHawk_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Laurence_PALETTES_P1[] =
{
    { L"Laurence Blood P1", 0x38920, 0x38940, indexFFSSprites_Laurence, 0x00 },
    { L"Laurence Blood Portrait P1", 0x383e0, 0x38400, indexFFSSprites_Laurence, 0x40 },
};

const sGame_PaletteDataset FatalFury2_A_Laurence_PALETTES_P2[] =
{
    { L"Laurence Blood P2", 0x39120, 0x39140, indexFFSSprites_Laurence, 0x00 },
    { L"Laurence Blood Portrait P2", 0x395e0, 0x39600, indexFFSSprites_Laurence, 0x40 },
};

const sDescTreeNode FatalFury2_A_Laurence_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Laurence_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Laurence_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Laurence_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Laurence_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_Wolfgang_PALETTES_P1[] =
{
    { L"Wolfgang Krauser P1", 0x38960, 0x38980, indexFFSSprites_Krauser, 0x00 },
    { L"Wolfgang Krauser Portrait P1", 0x38680, 0x386a0, indexFFSSprites_Krauser, 0x40 },
    { L"Wolfgang Krauser Cape & Armor P", 0x38aa0, 0x38ac0 },
};

const sGame_PaletteDataset FatalFury2_A_Wolfgang_PALETTES_P2[] =
{
    { L"Wolfgang Krauser P2", 0x39160, 0x39180, indexFFSSprites_Krauser, 0x00 },
    { L"Wolfgang Krauser Portrait P2", 0x39880, 0x398a0, indexFFSSprites_Krauser, 0x40 },
    { L"Wolfgang Krauser Cape & Armor P", 0x392a0, 0x392c0 },
};

const sDescTreeNode FatalFury2_A_Wolfgang_COLLECTION[] =
{
   { L"P1", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Wolfgang_PALETTES_P1, ARRAYSIZE(FatalFury2_A_Wolfgang_PALETTES_P1) },
   { L"P2", DESC_NODETYPE_TREE, (void*)FatalFury2_A_Wolfgang_PALETTES_P2, ARRAYSIZE(FatalFury2_A_Wolfgang_PALETTES_P2) },
};

const sGame_PaletteDataset FatalFury2_A_BONUS_INTRO_PALETTES[] =
{
    { L"Terry Intro", 0x386a0, 0x386c0 },
    { L"Andy Intro", 0x38720, 0x38740 },
    { L"Joe Intro", 0x38740, 0x38760 },
    { L"Intro Black and White Effects ", 0x381c0, 0x38200 },
    { L"Intro Background and Text", 0x38400, 0x38460 },
    { L"GAROU Logo", 0x38200, 0x38220, indexFFSSprites_Bonus, 0x0f },
    { L"Fatal Fury Logo", 0x38660, 0x38680 },
    { L"2 Logo", 0x38640, 0x38660 },
    { L"100 Mega Shock and World Map", 0x387c0, 0x38800 },
};

const sGame_PaletteDataset FatalFury2_A_BONUS_ARCADE_PALETTES[] =
{
    { L"Arcade Mode Background", 0x38280, 0x382a0 },
    { L"Arcade Cutscenes", 0x38460, 0x38580 },
    { L"Boxes and Bonus Stage Text", 0x38260, 0x38280 },
    { L"Challenger Boxes", 0x38ba0, 0x38bc0 },
    { L"Bonus Game - Rock Pillars", 0x386c0, 0x386e0 },
    { L"Bonus Game 2 - Bricks", 0x386e0, 0x38700 },
};

const sGame_PaletteDataset FatalFury2_A_BONUS_INGAME_PALETTES[] =
{
    { L"Hitsparks/Dust/Blood", 0x38a20, 0x38a40 },
    { L"Terry/Krauser/Shadow Effects", 0x38a40, 0x38a60 },
    { L"Andy/Axel/Big Bear/Cheng/Mai Ef", 0x38a60, 0x38a80 },
    { L"Andy/Axel/Big Bear/Cheng/Mai Ef", 0x39260, 0x39280 },
    { L"Joe Hurricane Upper", 0x38a80, 0x38aa0 },
    { L"Joe Screw Upper", 0x38ac0, 0x38ae0 },
};

const sGame_PaletteDataset FatalFury2_A_BONUS_HUD_PALETTES[] =
{
    { L"Round Markers and Text Boxes", 0x38000, 0x38020 },
    { L"Lifebar Portaits", 0x38080, 0x380a0 },
    { L"Timers and Text", 0x380a0, 0x380c0 },
    { L"Have a Match With Me! Text", 0x38180, 0x381a0 },
    { L"VS Names/Fight Text", 0x38220, 0x38240 },
    { L"Round Won/Lost Text", 0x38240, 0x38260 },
    { L"Perfect Text", 0x38780, 0x387a0 },
};

const sGame_PaletteDataset FatalFury2_A_BONUS_SELECTSCREEN_PALETTES[] =
{
    { L"SNK Logo and Character Select Player Text", 0x38020, 0x38040 },
    { L"AES Dificulty Select Text", 0x38140, 0x38180 },
    { L"VS/Demo Logo", 0x38060, 0x38080 },
    { L"Stage Country Text", 0x38120, 0x38140 },
    { L"World Map Flags", 0x38620, 0x38640 },
    { L"Continue Screen", 0x38700, 0x38720 },
    { L"Defeated Grayed Character Select", 0x38c00, 0x38d20 },
    { L"Selected Character Player Buttons", 0x38de0, 0x38e00 },
    { L"Tutorial Buttons", 0x38d40, 0x38dc0 },
};

const sGame_PaletteDataset FatalFury2_A_STAGE_PALETTES[] =
{
    { L"Terry (1/3) 0x3c400", 0x3c400, 0x3c600 },
    { L"Terry (2/3) 0x3c600", 0x3c600, 0x3c800 },
    { L"Terry (3/3) 0x3c800", 0x3c800, 0x3c9e0 },
    { L"Kim (1/2) 0x39c00", 0x39c00, 0x39e00 },
    { L"Kim (2/2) 0x39e00", 0x39e00, 0x39fe0 },
    { L"Mai (1/2) 0x3a600", 0x3a600, 0x3a800 },
    { L"Mai (2/2) 0x3a800", 0x3a800, 0x3a940 },
    { L"Joe (1/2) 0x3bc00", 0x3bc00, 0x3be00 },
    { L"Joe (2/2) 0x3be00", 0x3be00, 0x3bfe0 },
    { L"Andy (1/2) 0x3b200", 0x3b200, 0x3b400 },
    { L"Andy (2/2) 0x3b400", 0x3b400, 0x3b5e0 },
    { L"Cheng Sinzan (1/2) 0x3a200", 0x3a200, 0x3a400 },
    { L"Cheng Sinzan (2/2) 0x3a400", 0x3a400, 0x3a5e0 },
    { L"Jubei Yamada 0x3a000", 0x3a000, 0x3a200 },
    { L"Bonus + Stage Bully (1/2) 0x3c000", 0x3c000, 0x3c200 },
    { L"Bonus + Stage Bully (2/2) 0x3c200", 0x3c200, 0x3c3a0 },
    { L"Axel Hawk (1/2) 0x3b600", 0x3b600, 0x3b800 },
    { L"Axel Hawk (2/2) 0x3b800", 0x3b800, 0x3b9e0 },
    { L"Laurence (1/2) 0x3ae00", 0x3ae00, 0x3b000 },
    { L"Laurence (2/2) 0x3b000", 0x3b000, 0x3b1e0 },
    { L"W.Krauser (1/2) 0x3aa00", 0x3aa00, 0x3ac00 },
    { L"W.Krauser (2/2) 0x3ac00", 0x3ac00, 0x3ade0 }, 
};

const sDescTreeNode FatalFury2_A_STAGE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)FatalFury2_A_STAGE_PALETTES, ARRAYSIZE(FatalFury2_A_STAGE_PALETTES) },
};

const sDescTreeNode FatalFury2_A_BONUS_COLLECTION[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BONUS_INTRO_PALETTES, ARRAYSIZE(FatalFury2_A_BONUS_INTRO_PALETTES) },
    { L"Start Menu", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BONUS_ARCADE_PALETTES, ARRAYSIZE(FatalFury2_A_BONUS_ARCADE_PALETTES) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BONUS_INGAME_PALETTES, ARRAYSIZE(FatalFury2_A_BONUS_INGAME_PALETTES) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BONUS_HUD_PALETTES, ARRAYSIZE(FatalFury2_A_BONUS_HUD_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)FatalFury2_A_BONUS_SELECTSCREEN_PALETTES, ARRAYSIZE(FatalFury2_A_BONUS_SELECTSCREEN_PALETTES) },
};

// Stage hexes - not ready yet.
//      { L"Kim Stage Bikers", 0x389a0, 0x38a00 }, 
//      { L"Kim Stage People", 0x38b00, 0x38b80 },
//      { L"Stage Wooden Barrels", 0x38b80, 0x38ba0 },
//      { L"Big Bear Stage (INCOMPLETE)", 0x38e00, 0x38fc0 },
//      { L"Stage Wooden Boxes", 0x38fe0, 0x39000 },

const sDescTreeNode FatalFury2_A_UNITS[] =
{
    { L"Terry Bogard",      DESC_NODETYPE_TREE, (void*)FatalFury2_A_Terry_COLLECTION,   ARRAYSIZE(FatalFury2_A_Terry_COLLECTION) },
    { L"Andy Bogard",       DESC_NODETYPE_TREE, (void*)FatalFury2_A_Andy_COLLECTION,   ARRAYSIZE(FatalFury2_A_Andy_COLLECTION) },
    { L"Joe Higashi",       DESC_NODETYPE_TREE, (void*)FatalFury2_A_Joe_COLLECTION,   ARRAYSIZE(FatalFury2_A_Joe_COLLECTION) },
    { L"Big Bear",          DESC_NODETYPE_TREE, (void*)FatalFury2_A_BigBear_COLLECTION,   ARRAYSIZE(FatalFury2_A_BigBear_COLLECTION) },
    { L"Jubei Yamada",      DESC_NODETYPE_TREE, (void*)FatalFury2_A_Jubei_COLLECTION,   ARRAYSIZE(FatalFury2_A_Jubei_COLLECTION) },
    { L"Cheng Sinzan",      DESC_NODETYPE_TREE, (void*)FatalFury2_A_Cheng_COLLECTION,   ARRAYSIZE(FatalFury2_A_Cheng_COLLECTION) },
    { L"Kim Kaphwan",       DESC_NODETYPE_TREE, (void*)FatalFury2_A_Kim_COLLECTION,   ARRAYSIZE(FatalFury2_A_Kim_COLLECTION) },
    { L"Mai Shiranui",      DESC_NODETYPE_TREE, (void*)FatalFury2_A_Mai_COLLECTION,   ARRAYSIZE(FatalFury2_A_Mai_COLLECTION) },
    { L"Billy Kane",        DESC_NODETYPE_TREE, (void*)FatalFury2_A_Billy_COLLECTION,   ARRAYSIZE(FatalFury2_A_Billy_COLLECTION) },
    { L"Axel Hawk",         DESC_NODETYPE_TREE, (void*)FatalFury2_A_AxelHawk_COLLECTION,   ARRAYSIZE(FatalFury2_A_AxelHawk_COLLECTION) },
    { L"Laurence Blood",    DESC_NODETYPE_TREE, (void*)FatalFury2_A_Laurence_COLLECTION,   ARRAYSIZE(FatalFury2_A_Laurence_COLLECTION) },
    { L"Wolfgang Krauser",  DESC_NODETYPE_TREE, (void*)FatalFury2_A_Wolfgang_COLLECTION,   ARRAYSIZE(FatalFury2_A_Wolfgang_COLLECTION) },
    { L"Stages",            DESC_NODETYPE_TREE, (void*)FatalFury2_A_STAGE_COLLECTION,       ARRAYSIZE(FatalFury2_A_STAGE_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)FatalFury2_A_BONUS_COLLECTION,       ARRAYSIZE(FatalFury2_A_BONUS_COLLECTION) },
};

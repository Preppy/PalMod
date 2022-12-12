#pragma once

const std::vector<uint16_t> FatalFury1_A_IMGIDS_USED =
{
    indexFF1Sprites_AndyBogard,     // 0x289
    indexFF1Sprites_BillyKane,      // 0x28a
    indexFF1Sprites_DrunkHwaJai,    // 0x28b
    indexFF1Sprites_DuckKing,       // 0x28c
    indexFF1Sprites_GeeseHoward,    // 0x28d
    indexFF1Sprites_HwaJai,         // 0x28e
    indexFF1Sprites_JoeHigashi,     // 0x28f
    indexFF1Sprites_MichaelMax,     // 0x290
    indexFF1Sprites_Raiden,         // 0x291
    indexFF1Sprites_RichardMeyer,   // 0x292
    indexFF1Sprites_TerryBogard,    // 0x293
    indexFF1Sprites_TungFuRue,      // 0x294
    indexFF1Sprites_Bonus,          // 0x295
    indexFF1Sprites_Stages,         // 0x296
};

const sGame_PaletteDataset FatalFury1_A_Character_PALETTES[] =
{
    { L"Terry Bogard",  0x32d6c, 0x32d8c, indexFF1Sprites_TerryBogard, 0x00 },
    { L"Andy Bogard",   0x32d8c, 0x32dac, indexFF1Sprites_AndyBogard, 0x00 },
    { L"Joe Higashi",   0x32dac, 0x32dcc, indexFF1Sprites_JoeHigashi, 0x00 },
};

const sGame_PaletteDataset FatalFury1_A_Bosses_PALETTES[] =
{
    { L"Richard Meyer", 0x3306c, 0x3308c, indexFF1Sprites_RichardMeyer, 0x00 },
    { L"Duck King",     0x32f6c, 0x32f8c, indexFF1Sprites_DuckKing, 0x00 },
    { L"Michael Max",   0x32f8c, 0x32fac, indexFF1Sprites_MichaelMax, 0x00 },
    { L"Tung Fu Rue",   0x3308c, 0x330ac, indexFF1Sprites_TungFuRue, 0x00 },
    { L"Hwa Jai",       0x3356c, 0x3358c, indexFF1Sprites_DrunkHwaJai, 0x00 },
    { L"Drunk Hwa Jai", 0x34c4c, 0x34c6c, indexFF1Sprites_DrunkHwaJai, 0x00 },
    { L"Raiden",        0x3366c, 0x3368c, indexFF1Sprites_Raiden, 0x00 },
    { L"Billy Kane",    0x3358c, 0x335ac, indexFF1Sprites_BillyKane, 0x00, &pairNext },
    { L"Billy Hexagonal Stick", 0x336cc, 0x336ec, indexFF1Sprites_BillyKane, 0x01 },
    { L"Geese Howard",  0x3368c, 0x336ac, indexFF1Sprites_GeeseHoward, 0x00 },
};

const sGame_PaletteDataset FatalFury1_A_Effects_PALETTES[] =
{
    { L"Hitsparks/Dust", 0x32dcc, 0x32dec, indexFF1Sprites_Bonus, 0x11 },
    // This is used above so we don't need to reach cross-unit for the palette pairing
    //{ L"Hwa Jai/Billy Thrower", 0x335ac, 0x335cc },
    { L"Terry Power Wave", 0x32dec, 0x32dfc, indexFF1Sprites_Bonus, 0x25 },
    { L"Andy Hisho Ken", 0x32e2c, 0x32e4c, indexFF1Sprites_Bonus, 0x10 },
    { L"Joe Hurricane/Michael Tornado", 0x32dfc, 0x32e0c, indexFF1Sprites_Bonus, 0x14 },
    { L"Tung Dai Sharin Kyaku", 0x3300c, 0x3302c, indexFF1Sprites_Bonus, 0x10 },
    { L"Hwa Jai Elixir Bottle", 0x336ac, 0x336cc, indexFF1Sprites_Bonus, 0x08 },
    { L"Raiden Poison Spray", 0x3364c, 0x3366c, indexFF1Sprites_Bonus, 0x24 },
    { L"Hwa Jai/Billy Kane Thrower", 0x335ac, 0x335cc, indexFF1Sprites_Bonus, 0x29 },
    { L"Geese Reppu Ken", 0x335ec, 0x3360c, indexFF1Sprites_Bonus, 0x25 },
};

const sGame_PaletteDataset FatalFury1_A_Portraits_PALETTES[] =
{
    { L"Terry Bogard Portrait",     0x3396c, 0x3398c, indexFF1Sprites_TerryBogard, 0x40 },
    { L"Andy Bogard Portrait",      0x3398c, 0x339ac, indexFF1Sprites_AndyBogard, 0x40 },
    { L"Joe Higashi Portrait",      0x339ac, 0x339cc, indexFF1Sprites_JoeHigashi, 0x40 },
    { L"Duck King Portrait",        0x339cc, 0x339ec, indexFF1Sprites_DuckKing, 0x40 },
    { L"Richard Meyer Portrait",    0x339ec, 0x33a0c, indexFF1Sprites_RichardMeyer, 0x40 },
    { L"Michael Max Portrait",      0x33a0c, 0x33a2c, indexFF1Sprites_MichaelMax, 0x40 },
    { L"Tung Fu Rue Portrait",      0x33a2c, 0x33a4c, indexFF1Sprites_TungFuRue, 0x40 },
    { L"Hwa Jai Portrait",          0x33a4c, 0x33a6c, indexFF1Sprites_HwaJai, 0x40 },
    { L"Raiden Portrait",           0x33a6c, 0x33a8c, indexFF1Sprites_Raiden, 0x40 },
    { L"Billy Kane Portrait",       0x33a8c, 0x33aac, indexFF1Sprites_BillyKane, 0x40 },
};

const sGame_PaletteDataset FatalFury1_A_CharExtraPortraits_PALETTES[]
{
    { L"Main Portraits", 0x3296c, 0x329cc, indexFF1Sprites_Bonus, 0x27 },
    { L"Intro Terry", 0x32f2c, 0x32f4c, indexFF1Sprites_Bonus, 0x1c },
    { L"Intro Joe", 0x32f4c, 0x32f6c, indexFF1Sprites_Bonus, 0x19 },
    { L"Player Select Glow 1", 0x379ec, 0x37b6c, indexFF1Sprites_Bonus, 0x22 },
    { L"Player Select Glow 2", 0x37d4c, 0x37e0c, indexFF1Sprites_Bonus, 0x23 },
    { L"Terry VS Geese GameOver", 0x33b0c, 0x33b2c, indexFF1Sprites_Bonus, 0x28 },
    { L"Andy VS Geese GameOver", 0x33b2c, 0x33b4c, indexFF1Sprites_Bonus, 0x00 },
    { L"Joe VS Geese GameOver", 0x33b4c, 0x33b6c, indexFF1Sprites_Bonus, 0x1d },
    { L"Credits Characters", 0x3376c, 0x337ec, indexFF1Sprites_Bonus, 0x07 },
};

const sGame_PaletteDataset FatalFury1_A_INTRO_PALETTES[]
{
    { L"Intro Rocky Ground and Portrait Boxes", 0x32c8c, 0x32cac, indexFF1Sprites_Bonus, 0x1a },
    { L"Intro Taxi", 0x329ec, 0x32a0c, indexFF1Sprites_Bonus, 0x1b },
    { L"Intro Fatal Fury Text", 0x3346c, 0x3348c, indexFF1Sprites_Bonus, 0x18 },
    { L"Intro Background 1", 0x32a0c, 0x32a2c, indexFF1Sprites_Bonus, 0x16 },
    { L"Intro Background 2", 0x32a2c, 0x32a6c, indexFF1Sprites_Bonus, 0x17 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_GAMES_PALETTES[]
{
    { L"Bonus Guy 1", 0x33aac, 0x33aec, indexFF1Sprites_Bonus, 0x02 },
    { L"Bonus Guy 2", 0x32ccc, 0x32cec },
    { L"Bonus Arms", 0x32cac, 0x32ccc },
    { L"Bonus Background", 0x32cec, 0x32d6c},
    { L"Bonus Background Extras", 0x334ec, 0x3356c },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_Cutscenes_PALETTES[] =
{
    { L"Geese", 0x32bac, 0x32bcc, indexFF1Sprites_Bonus, 0x0c },
    { L"Boss Geese", 0x32bec, 0x32c0c, indexFF1Sprites_Bonus, 0x04 },
    { L"Falling Geese", 0x328ac, 0x328cc, indexFF1Sprites_Bonus, 0x0b },
    { L"Womans", 0x32c2c, 0x32c4c, indexFF1Sprites_Bonus, 0x2c },
    { L"Geese's Mens", 0x32c4c, 0x32c6c, indexFF1Sprites_Bonus, 0x0f },
    { L"Geese Background", 0x32bcc, 0x32bec, indexFF1Sprites_Bonus, 0x0d, &pairNextAndNext }, // pair the next two palettes (KOF Winner and Boss Geese Background) because the preview is joined
    { L"KOF Winner Background", 0x32c6c, 0x32c8c, indexFF1Sprites_Bonus, 0x1e },
    { L"Boss Geese Background", 0x32c0c, 0x32c2c, indexFF1Sprites_Bonus, 0x05 },
    { L"Geese Death Background", 0x33aec, 0x33b0c, indexFF1Sprites_Bonus, 0x0e },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_PALETTES[] =
{
    { L"HUD and Text (1/2)", 0x3276c, 0x3278c, indexFF1Sprites_Bonus, 0x13, &pairNext }, // pair with the next palette (Lifebar) because the preview is joined
    { L"Lifebar and Flashing Timer (2/2)", 0x327ec, 0x3286c, indexFF1Sprites_Bonus, 0x20 },
    { L"Bonus Text", 0x3278c, 0x327ac, indexFF1Sprites_Bonus, 0x03 },
    { L"Credits and Bonus Text", 0x3286c, 0x3288c, indexFF1Sprites_Bonus, 0x06 },
    { L"Level Select Text", 0x32ecc, 0x32f2c, indexFF1Sprites_Bonus, 0x1f },
    { L"Map Characters and SNK", 0x327ac, 0x327cc, indexFF1Sprites_Bonus, 0x21 },
    { L"How to Play Buttons", 0x327cc, 0x327ec, indexFF1Sprites_Bonus, 0x12 },
    { L"In-Game Text", 0x32aec, 0x32b0c, indexFF1Sprites_Bonus, 0x15 },
    { L"Titles", 0x32acc, 0x32aec, indexFF1Sprites_Bonus, 0x2a },
    { L"Versus", 0x32b8c, 0x32bac, indexFF1Sprites_Bonus, 0x2b },
    { L"South Town Map", 0x32a6c, 0x32acc, indexFF1Sprites_Bonus, 0x26 },
    { L"Area Select Enemy", 0x328cc, 0x3294c, indexFF1Sprites_Bonus, 0x09, &pairNext }, // pair with the next palette (Area Select Stages) because the preview is joined
    { L"Area Select Stages", 0x32b0c, 0x32b8c, indexFF1Sprites_Bonus, 0x0a },
    { L"Area Select Stages Glow 1", 0x37b6c, 0x37cec, indexFF1Sprites_Stages, 0x01 },
    { L"Area Select Stages Glow 2", 0x37e0c, 0x37e8c, indexFF1Sprites_Bonus, 0x0a },
    { L"Area Select Enemy Glow", 0x37eac, 0x380ac, indexFF1Sprites_Bonus, 0x09 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StagePaoPao_PALETTES[] =
{
    { L"Pao Pao Cafe", 0x337ec, 0x3396c, indexFF1Sprites_Stages, 0x00 },
    { L"Pao Pao Cafe Stage Shadow", 0x34b6c, 0x34b8c, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageWestSub_PALETTES[] =
{
    { L"The West Subway People", 0x330ac, 0x3312c, indexFF1Sprites_Stages, 0x19 },
    { L"The West Subway Round 1(1/2)", 0x3316c, 0x3336c, indexFF1Sprites_Stages, 0x17, &pairNext },
    { L"The West Subway Round 1(2/2)", 0x3336c, 0x3346c, indexFF1Sprites_Stages, 0x18 },
    { L"The West Subway Round 2(1/2)", 0x3536c, 0x3556c, indexFF1Sprites_Stages, 0x17, &pairNext },
    { L"The West Subway Round 2(2/2)", 0x3556c, 0x3566c, indexFF1Sprites_Stages, 0x18 },
    { L"The West Subway Round 3(1/2)", 0x3656c, 0x3676c, indexFF1Sprites_Stages, 0x17, &pairNext },
    { L"The West Subway Round 3(2/2)", 0x3676c, 0x3686c, indexFF1Sprites_Stages, 0x18 },
    { L"The West Subway Stage Shadow", 0x32fcc, 0x32fec, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageSoundBeach_PALETTES[] =
{
    { L"Sound Beach Round 1(1/3)", 0x33b6c, 0x33d6c, indexFF1Sprites_Stages, 0x0c, &pairNextAndNext },
    { L"Sound Beach Round 1(2/3)", 0x341ac, 0x3420c, indexFF1Sprites_Stages, 0x0d },
    { L"Sound Beach Round 1(3/3)", 0x3428c, 0x3434c, indexFF1Sprites_Stages, 0x0e },
    { L"Sound Beach Round 2(1/3)", 0x3576c, 0x3596c, indexFF1Sprites_Stages, 0x0c, &pairNextAndNext },
    { L"Sound Beach Round 2(2/3)", 0x359ac, 0x35a0c, indexFF1Sprites_Stages, 0x0d },
    { L"Sound Beach Round 2(3/3)", 0x35a8c, 0x35b4c, indexFF1Sprites_Stages, 0x0e },
    { L"Sound Beach Round 3(1/3)", 0x3696c, 0x36b6c, indexFF1Sprites_Stages, 0x0c, &pairNextAndNext },
    { L"Sound Beach Round 3(2/3)", 0x36bac, 0x36c0c, indexFF1Sprites_Stages, 0x0d },
    { L"Sound Beach Round 3(3/3)", 0x36c8c, 0x36d4c, indexFF1Sprites_Stages, 0x0e },
    { L"Sound Beach Stage Shadow", 0x34b8c, 0x34bac, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageHowardArena_PALETTES[] =
{
    { L"Howard Arena Round 1", 0x33d8c, 0x33f2c, indexFF1Sprites_Stages, 0x09 },
    { L"Howard Arena Round 1 Extra 1", 0x34d6c, 0x34e0c, indexFF1Sprites_Stages, 0x0a },
    { L"Howard Arena Round 1 Extra 2", 0x34e0c, 0x34eac, indexFF1Sprites_Stages, 0x0a },
    { L"Howard Arena Round 2", 0x35b8c, 0x35d2c, indexFF1Sprites_Stages, 0x09 },
    { L"Howard Arena Round 2 Extra", 0x34eac, 0x34f4c, indexFF1Sprites_Stages, 0x0a },
    { L"Howard Arena Round 3", 0x36d8c, 0x36f2c, indexFF1Sprites_Stages, 0x09 },
    { L"Howard Arena Round 3 Extra", 0x34f4c, 0x3508c, indexFF1Sprites_Stages, 0x0b },
    { L"Howard Arena Stage Shadow", 0x34bac, 0x34bcc, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageHappyPark_PALETTES[] =
{
    { L"The Happy Park Round 1(1/4)", 0x33f6c, 0x3416c, indexFF1Sprites_Stages, 0x13, &pairNext3Palettes },
    { L"The Happy Park Round 1(2/4)", 0x3416c, 0x341ac, indexFF1Sprites_Stages, 0x14 },
    { L"The Happy Park Round 1(3/4)", 0x3420c, 0x3428c, indexFF1Sprites_Stages, 0x15 },
    { L"The Happy Park Round 1(4/4)", 0x3434c, 0x3436c, indexFF1Sprites_Stages, 0x16 },
    { L"The Happy Park Round 1 Extra", 0x3526c, 0x352cc, indexFF1Sprites_Stages, 0x12 },
    { L"The Happy Park Round 2(1/4)", 0x35d6c, 0x35f6c, indexFF1Sprites_Stages, 0x13, &pairNext3Palettes },
    { L"The Happy Park Round 2(2/4)", 0x3596c, 0x359ac, indexFF1Sprites_Stages, 0x14 },
    { L"The Happy Park Round 2(3/4)", 0x35a0c, 0x35a8c, indexFF1Sprites_Stages, 0x15 },
    { L"The Happy Park Round 2(4/4)", 0x35b4c, 0x35b6c , indexFF1Sprites_Stages, 0x16},
    { L"The Happy Park Round 2 Extra", 0x352cc, 0x3532c, indexFF1Sprites_Stages, 0x12 },
    { L"The Happy Park Round 3(1/4)", 0x36f6c, 0x3716c, indexFF1Sprites_Stages, 0x13, &pairNext3Palettes },
    { L"The Happy Park Round 3(2/4)", 0x36b6c, 0x36bac, indexFF1Sprites_Stages, 0x14 },
    { L"The Happy Park Round 3(3/4)", 0x36c0c, 0x36c8c, indexFF1Sprites_Stages, 0x15 },
    { L"The Happy Park Round 3(4/4)", 0x36d4c, 0x36d6c, indexFF1Sprites_Stages, 0x16 },
    { L"The Happy Park Round 3 Extra ", 0x3348c, 0x334ec, indexFF1Sprites_Stages, 0x12 },
    { L"The Happy Park Stage Shadow", 0x34bcc, 0x34bec, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageDreamPark_PALETTES[] =
{
    { L"Dream Amusement Park Round 1 & 2(1/2)", 0x3436c, 0x3456c, indexFF1Sprites_Stages, 0x02, &pairNext },
    { L"Dream Amusement Park Round 1 & 2(2/2)", 0x3456c, 0x345ac, indexFF1Sprites_Stages, 0x03 },
    { L"Dream Amusement Park Round 1 & 2 Extra", 0x3508c, 0x3522c, indexFF1Sprites_Stages, 0x04 },
    { L"Dream Amusement Park Round 3(1/2)", 0x3716c, 0x3736c, indexFF1Sprites_Stages, 0x02, &pairNext },
    { L"Dream Amusement Park Round 3(2/2)", 0x3736c, 0x373ac, indexFF1Sprites_Stages, 0x03 },
    { L"Dream Amusement Park Round 3 Extra(1/2)", 0x3566c, 0x3576c, indexFF1Sprites_Stages, 0x05 },
    { L"Dream Amusement Park Round 3 Extra(2/2)", 0x3686c, 0x3690c, indexFF1Sprites_Stages, 0x06 },
    { L"Dream Amusement Park Stage Shadow", 0x34bec, 0x34c0c, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageSouthVillage_PALETTES[] =
{
    { L"South Town Village Round 1(1/2)", 0x345ac, 0x3476c, indexFF1Sprites_Stages, 0x0f, &pairNext },
    { L"South Town Village Round 1(2/2)", 0x348ec, 0x3496c, indexFF1Sprites_Stages, 0x10 },
    { L"South Town Village Round 2(1/2)", 0x361ac, 0x3636c, indexFF1Sprites_Stages, 0x0f, &pairNext },
    { L"South Town Village Round 2(2/2)", 0x360ec, 0x3616c, indexFF1Sprites_Stages, 0x10 },
    { L"South Town Village Round 3(1/2)", 0x373ac, 0x3756c, indexFF1Sprites_Stages, 0x0f, &pairNext },
    { L"South Town Village Round 3(2/2)", 0x376ec, 0x3776c, indexFF1Sprites_Stages, 0x10 },
    { L"South Town Village Stage Shadow", 0x34c0c, 0x34c2c, indexFF1Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset FatalFury1_A_BONUS_StageGeese_PALETTES[] =
{
    { L"Geese Stage Round 1(1/2)", 0x3476c, 0x348ec, indexFF1Sprites_Stages, 0x07, &pairNext },
    { L"Geese Stage Round 1(2/2)", 0x3496c, 0x34a2c, indexFF1Sprites_Stages, 0x08 },
    { L"Geese Stage Round 2(1/2)", 0x35f6c, 0x360ec, indexFF1Sprites_Stages, 0x07, &pairNext },
    { L"Geese Stage Round 2(2/2)", 0x3636c, 0x3642c, indexFF1Sprites_Stages, 0x08 },
    { L"Geese Stage Round 3(1/2)", 0x3756c, 0x376ec, indexFF1Sprites_Stages, 0x07, &pairNext },
    { L"Geese Stage Round 3(2/2)", 0x3776c, 0x3782c, indexFF1Sprites_Stages, 0x08 },
    { L"Geese Stage Shadow", 0x34c2c, 0x34c4c, indexFF1Sprites_Stages, 0x11 },
};

//JUST A HELPFUL DIVISION, IGNORE THIS

const sDescTreeNode FatalFury1_A_CHARACTER_COLLECTION[] =
{
    { L"In-Game Palettes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_Character_PALETTES, ARRAYSIZE(FatalFury1_A_Character_PALETTES) },
    { L"Extra Portraits", DESC_NODETYPE_TREE, (void*)FatalFury1_A_CharExtraPortraits_PALETTES, ARRAYSIZE(FatalFury1_A_CharExtraPortraits_PALETTES) },
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
    { L"Intro", DESC_NODETYPE_TREE, (void*)FatalFury1_A_INTRO_PALETTES, ARRAYSIZE(FatalFury1_A_INTRO_PALETTES) },
    { L"Bonus Games", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_GAMES_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_GAMES_PALETTES) },
    { L"Cutscenes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_Cutscenes_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_Cutscenes_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_PALETTES) },

};
const sDescTreeNode FatalFury1_A_STAGES_COLLECTION[] =
{
    { L"Pao Pao Cafe Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StagePaoPao_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StagePaoPao_PALETTES) },
    { L"The West Subway Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageWestSub_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageWestSub_PALETTES) },
    { L"Sound Beach Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageSoundBeach_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageSoundBeach_PALETTES) },
    { L"Howard Arena Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageHowardArena_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageHowardArena_PALETTES) },
    { L"The Happy Park Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageHappyPark_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageHappyPark_PALETTES) },
    { L"Dream Amusement Park Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageDreamPark_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageDreamPark_PALETTES) },
    { L"South Town Village Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageSouthVillage_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageSouthVillage_PALETTES) },
    { L"Geese's Stage", DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_StageGeese_PALETTES, ARRAYSIZE(FatalFury1_A_BONUS_StageGeese_PALETTES) },
};

const sDescTreeNode FatalFury1_A_UNITS[] =
{
    { L"Characters",        DESC_NODETYPE_TREE, (void*)FatalFury1_A_CHARACTER_COLLECTION,   ARRAYSIZE(FatalFury1_A_CHARACTER_COLLECTION) },
    { L"Bosses",            DESC_NODETYPE_TREE, (void*)FatalFury1_A_BOSSES_COLLECTION,      ARRAYSIZE(FatalFury1_A_BOSSES_COLLECTION) },
    { L"Effects",           DESC_NODETYPE_TREE, (void*)FatalFury1_A_EFFECTS_COLLECTION,     ARRAYSIZE(FatalFury1_A_EFFECTS_COLLECTION) },
    { L"Portraits",         DESC_NODETYPE_TREE, (void*)FatalFury1_A_PORTRAITS_COLLECTION,   ARRAYSIZE(FatalFury1_A_PORTRAITS_COLLECTION) },
    { L"Stages",            DESC_NODETYPE_TREE, (void*)FatalFury1_A_STAGES_COLLECTION,       ARRAYSIZE(FatalFury1_A_STAGES_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)FatalFury1_A_BONUS_COLLECTION,       ARRAYSIZE(FatalFury1_A_BONUS_COLLECTION) },
};

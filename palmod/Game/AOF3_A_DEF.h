#pragma once

const UINT16 AOF3_A_IMGIDS_USED[] =
{
    indexAoF3Sprites_Jin,           // 0x1A3
    indexAoF3Sprites_Karman,        // 0x1A4
    indexAoF3Sprites_Kasumi,        // 0x1A5
    indexAoF3Sprites_Lenny,         // 0x1A6
    indexAoF3Sprites_Robert,        // 0x1A7
    indexAoF3Sprites_Rody,          // 0x1A8
    indexAoF3Sprites_Ryo,           // 0x1A9
    indexAoF3Sprites_Sinclair,      // 0x1AA
    indexAoF3Sprites_Wang,          // 0x1AB
    indexAoF3Sprites_Wyler,         // 0x1AC
    indexAoF3Sprites_Bonus,         // 0x1AD
    indexAoF3Sprites_Stages,        // 0x1AE
};

//-CHARACTERS//-
 //Robert Garcia
const sGame_PaletteDataset AOF3_A_Robert_A_PALETTES[] =
{
    { L"Robert Garcia A", 0x058000, 0x058020, indexAoF3Sprites_Robert },
    { L"Charging Power A", 0x058060, 0x058080 },
    { L"Ryuu Geki Ken A", 0x0580c0, 0x0580e0, indexAoF3Sprites_Robert, 0x08 },
    { L"Portrait A", 0x05fac0, 0x05fae0, indexAoF3Sprites_Robert, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Robert_D_PALETTES[] =
{
    { L"Robert Garcia D", 0x058100, 0x058120, indexAoF3Sprites_Robert },
    { L"Charging Power D", 0x058160, 0x058180 },
    { L"Ryuu Geki Ken D", 0x0581c0, 0x0581e0, indexAoF3Sprites_Robert, 0x08 },
    { L"Portrait D", 0x06fb80, 0x06fba0, indexAoF3Sprites_Robert, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Robert_RAGE_PALETTES[] =
{
    { L"Robert Garcia Rage", 0x058200, 0x058220, indexAoF3Sprites_Robert },
    { L"Charging Power Rage", 0x058260, 0x058280 },
    { L"Ryuu Geki Ken Rage", 0x0582c0, 0x0582e0, indexAoF3Sprites_Robert, 0x08 },
};

 //Ryo Sakazaki
const sGame_PaletteDataset AOF3_A_Ryo_A_PALETTES[] =
{
    { L"Ryo Sakazaki A", 0x058800, 0x058820, indexAoF3Sprites_Ryo },
    { L"Charging Power A", 0x058840, 0x058860 },
    { L"Ko Ou Ken A", 0x058860, 0x058880, indexAoF3Sprites_Ryo, 0x08 },
    { L"Ending Costume A", 0x0588e0, 0x058900, indexAoF3Sprites_Ryo, 0x01 },
    { L"Portrait A", 0x05fb00, 0x05fb20, indexAoF3Sprites_Ryo, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Ryo_D_PALETTES[] =
{
    { L"Ryo Sakazaki D", 0x058900, 0x058920, indexAoF3Sprites_Ryo },
    { L"Charging Power D", 0x058940, 0x058960 },
    { L"Ko Ou Ken D", 0x058960, 0x058980, indexAoF3Sprites_Ryo, 0x08 },
    { L"Ending Costume D", 0x0589e0, 0x058a00, indexAoF3Sprites_Ryo, 0x01 },
    { L"Portrait D", 0x06fbc0, 0x06fbe0, indexAoF3Sprites_Ryo, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Ryo_RAGE_PALETTES[] =
{
    { L"Ryo Sakazaki Rage", 0x058a00, 0x058a20, indexAoF3Sprites_Ryo },
    { L"Charging Power Rage", 0x058a40, 0x058a60 },
    { L"Ko Ou Ken Rage", 0x058a60, 0x058a80, indexAoF3Sprites_Ryo, 0x08 },
};

 //Karman Cole
const sGame_PaletteDataset AOF3_A_Karman_A_PALETTES[] =
{
    { L"Karman Cole A", 0x059000, 0x059020, indexAoF3Sprites_Karman },
    { L"Charging Power A", 0x059060, 0x059080, indexAoF3Sprites_Karman, 0x02 },
    { L"Gebarutiga Fuusutoritto A", 0x0590c0, 0x0590e0, indexAoF3Sprites_Karman, 0x01 },
    { L"Portrait A", 0x05fa60, 0x05fa80, indexAoF3Sprites_Karman, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Karman_D_PALETTES[] =
{
    { L"Karman Cole D", 0x059100, 0x059120, indexAoF3Sprites_Karman },
    { L"Charging Power D", 0x059160, 0x059180, indexAoF3Sprites_Karman, 0x02 },
    { L"Gebarutiga Fuusutoritto D", 0x0591c0, 0x0591e0, indexAoF3Sprites_Karman, 0x01 },
    { L"Portrait D", 0x06fb20, 0x06fb40, indexAoF3Sprites_Karman, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Karman_RAGE_PALETTES[] =
{
    { L"Karman Cole Rage", 0x059200, 0x059220, indexAoF3Sprites_Karman },
    { L"Charging Power Rage", 0x059260, 0x059280, indexAoF3Sprites_Karman, 0x02 },
    { L"Gebarutiga Fuusutoritto Rage", 0x0592c0, 0x0592e0, indexAoF3Sprites_Karman, 0x01 },
};

 //Kasumi Todoh
const sGame_PaletteDataset AOF3_A_Kasumi_A_PALETTES[] =
{
    { L"Kasumi Todoh A", 0x059800, 0x059820, indexAoF3Sprites_Kasumi, 0, &pairNext },
    { L"Book & Bag A", 0x059820, 0x059840, indexAoF3Sprites_Kasumi, 0x01 },
    { L"Charging Power A", 0x059860, 0x059880 },
    { L"Portrait A", 0x05fa80, 0x05faa0, indexAoF3Sprites_Kasumi, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Kasumi_D_PALETTES[] =
{
    { L"Kasumi Todoh D", 0x059900, 0x059920, indexAoF3Sprites_Kasumi, 0, &pairNext },
    { L"Book & Bag D", 0x059920, 0x059940, indexAoF3Sprites_Kasumi, 0x01 },
    { L"Charging Power D", 0x059960, 0x059980 },
    { L"Portrait D", 0x06fb40, 0x06fb60, indexAoF3Sprites_Kasumi, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Kasumi_RAGE_PALETTES[] =
{
    { L"Kasumi Todoh Rage", 0x059a00, 0x059a20, indexAoF3Sprites_Kasumi },
    { L"Charging Power Rage", 0x059a60, 0x059a80 },
};

 //Shared
const sGame_PaletteDataset AOF3_A_Kasumi_Shared_PALETTES[] =
{
    { L"Kasane Ate", 0x05fde0, 0x05fdf4, indexAoF3Sprites_Kasumi, 0x02 },
    { L"Kasane Ate Impact", 0x05fc40, 0x05fc60 },
};
	
 //Rody Birts
const sGame_PaletteDataset AOF3_A_Rody_A_PALETTES[] =
{
    { L"Rody Birts A", 0x05a000, 0x05a020, indexAoF3Sprites_Rody, 0, &pairNext },
    { L"Tonfas A", 0x05a020, 0x05a040, indexAoF3Sprites_Rody, 0x01 },
    { L"Charging Power A", 0x05a040, 0x05a060 },
    { L"Middle Impact TT A", 0x05a060, 0x05a080 },
    { L"Portrait A", 0x05fae0, 0x05fb00, indexAoF3Sprites_Rody, 0x30, &pairNext },
    { L"Tonfas Portrait A", 0x05fdf4, 0x05fe00, indexAoF3Sprites_Rody, 0x31 },
 };

const sGame_PaletteDataset AOF3_A_Rody_D_PALETTES[] =
{
    { L"Rody Birts D", 0x05a100, 0x05a120, indexAoF3Sprites_Rody, 0, &pairNext },
    { L"Tonfas D", 0x05a120, 0x05a140, indexAoF3Sprites_Rody, 0x01 },
    { L"Charging Power D", 0x05a140, 0x05a160 },
    { L"Middle Impact TT D", 0x05a160, 0x05a180 },
    { L"Portrait D", 0x06fba0, 0x06fbc0, indexAoF3Sprites_Rody, 0x30, &pairNext },
    { L"Tonfas Portrait D", 0x06fc54, 0x06fc60, indexAoF3Sprites_Rody, 0x31 },
 };

const sGame_PaletteDataset AOF3_A_Rody_RAGE_PALETTES[] =
{
    { L"Rody Birts Rage", 0x05a200, 0x05a220, indexAoF3Sprites_Rody, 0, &pairNext },
    { L"Tonfas Rage", 0x05a220, 0x05a240, indexAoF3Sprites_Rody, 0x01 },
    { L"Charging Power Rage", 0x05a240, 0x05a260 },
    { L"Middle Impact TT Rage", 0x05a260, 0x05a280 },
};

 //Lenny Creston
const sGame_PaletteDataset AOF3_A_Lenny_A_PALETTES[] =
{
    { L"Lenny Creston A", 0x05a800, 0x05a820, indexAoF3Sprites_Lenny, 0, &pairNext },
    { L"Whip A", 0x05a820, 0x05a840, indexAoF3Sprites_Lenny, 1 },
    { L"Charging Power A", 0x05a880, 0x05a8a0 },
    { L"Flick Shot A", 0x05a8c0, 0x05a8e0, indexAoF3Sprites_Lenny, 0x02 },
    { L"Portrait A", 0x05faa0, 0x05fac0, indexAoF3Sprites_Lenny, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Lenny_D_PALETTES[] =
{
    { L"Lenny Creston D", 0x05a900, 0x05a920, indexAoF3Sprites_Lenny, 0, &pairNext },
    { L"Whip D", 0x05a920, 0x05a940, indexAoF3Sprites_Lenny, 1 },
    { L"Charging Power D", 0x05a980, 0x05a9a0 },
    { L"Flick Shot D", 0x05a9c0, 0x05a9e0, indexAoF3Sprites_Lenny, 0x02 },
    { L"Portrait D", 0x06fb60, 0x06fb80, indexAoF3Sprites_Lenny, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Lenny_RAGE_PALETTES[] =
{
    { L"Lenny Creston Rage", 0x05aa00, 0x05aa20, indexAoF3Sprites_Lenny, 0, &pairNext },
    { L"Whip Rage", 0x05aa20, 0x05aa40, indexAoF3Sprites_Lenny, 1 },
    { L"Charging Power Rage", 0x05aa80, 0x05aaa0 },
    { L"Flick Shot Rage", 0x05aac0, 0x05aae0, indexAoF3Sprites_Lenny, 0x02 },
};

 //Shared
const sGame_PaletteDataset AOF3_A_Lenny_SHARED_PALETTES[] =
{
    { L"Flick Shot/Whipsparks", 0x05ff60, 0x05ff80, indexAoF3Sprites_Lenny, 0x03 },
};
	
 //Wang Koh San
const sGame_PaletteDataset AOF3_A_Wang_A_PALETTES[] =
{
    { L"Wang Koh San A", 0x05b000, 0x05b020, indexAoF3Sprites_Wang, 0, &pairNext },
    { L"Wang Pelican A", 0x05b020, 0x05b040, indexAoF3Sprites_Wang, 1 },
    { L"Charging Power A", 0x05b060, 0x05b080 },
    { L"Muteki Ranbu Kun A", 0x05b0c0, 0x05b0e0, indexAoF3Sprites_Wang, 0x02 },
    { L"Portrait A", 0x05fb60, 0x05fb80, indexAoF3Sprites_Wang, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Wang_D_PALETTES[] =
{
    { L"Wang Koh San D", 0x05b100, 0x05b120, indexAoF3Sprites_Wang, 0, &pairNext },
    { L"Wang Pelican D", 0x05b120, 0x05b140, indexAoF3Sprites_Wang, 1 },
    { L"Charging Power D", 0x05b160, 0x05b180 },
    { L"Muteki Ranbu Kun D", 0x05b1c0, 0x05b1e0, indexAoF3Sprites_Wang, 0x02 },
    { L"Portrait D", 0x06fc20, 0x06fc40, indexAoF3Sprites_Wang, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Wang_RAGE_PALETTES[] =
{
    { L"Wang Koh San Rage", 0x05b200, 0x05b220, indexAoF3Sprites_Wang, 0, &pairNext },
    { L"Wang Pelican Rage", 0x05b220, 0x05b240, indexAoF3Sprites_Wang, 1 },
    { L"Charging Power Rage", 0x05b260, 0x05b280 },
    { L"Muteki Ranbu Kun Rage", 0x05b2c0, 0x05b2e0, indexAoF3Sprites_Wang, 0x02 },
};

 //Jin Fuha
const sGame_PaletteDataset AOF3_A_Jin_A_PALETTES[] =
{
    { L"Jin Fuha A", 0x05b800, 0x05b820, indexAoF3Sprites_Jin },
    { L"Charging Power A", 0x05b860, 0x05b880 },
    { L"Ryu Eijin A", 0x05b8c0, 0x05b8e0, indexAoF3Sprites_Jin, 1 },
    { L"Portrait A", 0x05fa40, 0x05fa60, indexAoF3Sprites_Jin, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Jin_D_PALETTES[] =
{
    { L"Jin Fuha D", 0x05b900, 0x05b920, indexAoF3Sprites_Jin },
    { L"Charging Power D", 0x05b960, 0x05b980 },
    { L"Ryu Eijin D", 0x05b9c0, 0x05b9e0, indexAoF3Sprites_Jin, 1 },
    { L"Portrait D", 0x06fb00, 0x06fb20, indexAoF3Sprites_Jin, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Jin_RAGE_PALETTES[] =
{
    { L"Jin Fuha Rage", 0x05ba00, 0x05ba20, indexAoF3Sprites_Jin },
    { L"Charging Power Rage", 0x05ba60, 0x05ba80 },
    { L"Ryu Eijin Rage", 0x05bac0, 0x05bae0 },
};

 //Shared
const sGame_PaletteDataset AOF3_A_Jin_SHARED_PALETTES[] =
{
    { L"Smoke", 0x05f820, 0x05f840, indexAoF3Sprites_Jin, 0x02 },
    { L"Tohshin Shoh", 0x05fec0, 0x05fee0 },
};
	
 //Sinclair
const sGame_PaletteDataset AOF3_A_Sinclair_A_PALETTES[] =
{
    { L"Sinclair A", 0x05c000, 0x05c020, indexAoF3Sprites_Sinclair, 0, &pairNext },
    { L"Sword A", 0x05c020, 0x05c040, indexAoF3Sprites_Sinclair, 1 },
    { L"Charging Power A", 0x05c060, 0x05c080 },
    { L"Portrait A", 0x05fb20, 0x05fb40, indexAoF3Sprites_Sinclair, 0x30, &pairNext8 },
 };

const sGame_PaletteDataset AOF3_A_Sinclair_D_PALETTES[] =
{
    { L"Sinclair D", 0x05c100, 0x05c120, indexAoF3Sprites_Sinclair, 0, &pairNext },
    { L"Sword D", 0x05c120, 0x05c140, indexAoF3Sprites_Sinclair, 1 },
    { L"Charging Power D", 0x05c160, 0x05c180 },
    { L"Portrait D", 0x06fbe0, 0x06fc00, indexAoF3Sprites_Sinclair, 0x30, &pairNext4 },
 };

const sGame_PaletteDataset AOF3_A_Sinclair_RAGE_PALETTES[] =
{
    { L"Sinclair Rage", 0x05c200, 0x05c220, indexAoF3Sprites_Sinclair, 0, &pairNext },
    { L"Sword Rage", 0x05c220, 0x05c240, indexAoF3Sprites_Sinclair, 1 },
    { L"Charging Power Rage", 0x05c260, 0x05c280 },
};

//Shared
const sGame_PaletteDataset AOF3_A_Sinclair_SHARED_PALETTES[] =
{
    { L"Sword Portrait", 0x05fc00, 0x05fc1c, indexAoF3Sprites_Sinclair, 0x31 },
    { L"Sword Trail", 0x05fb80, 0x05fba0 },
    { L"Vision Cutter", 0x05fea0, 0x05fec0 },
};
	
 //Wyler
const sGame_PaletteDataset AOF3_A_Wyler_A_PALETTES[] =
{
    { L"Wyler A", 0x05c800, 0x05c820, indexAoF3Sprites_Wyler, 0 },
    { L"Red Shoulder A", 0x05c840, 0x05c860, indexAoF3Sprites_Wyler, 1 },
    { L"Charging Power A", 0x05c860, 0x05c880 },
    { L"Unknown Extra A", 0x05c880, 0x05c8a0 },
    { L"Destransformation A", 0x05c8a0, 0x05c8c0, indexAoF3Sprites_Wyler, 0x03 },
    { L"Transformation A", 0x05c8c0, 0x05c8e0, indexAoF3Sprites_Wyler, 0x05 },
    { L"Normal Form A", 0x05c8e0, 0x05c900, indexAoF3Sprites_Wyler, 0x04 },
    { L"Portrait A", 0x05fb40, 0x05fb60, indexAoF3Sprites_Wyler, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Wyler_D_PALETTES[] =
{
    { L"Wyler D", 0x05c900, 0x05c920, indexAoF3Sprites_Wyler, 0 },
    { L"Red Shoulder D", 0x05c940, 0x05c960, indexAoF3Sprites_Wyler, 1 },
    { L"Charging Power D", 0x05c960, 0x05c980 },
    { L"Unknown Extra D", 0x05c980, 0x05c9a0 },
    { L"Destransformation D", 0x05c9a0, 0x05c9c0, indexAoF3Sprites_Wyler, 0x03 },
    { L"Transformation D", 0x05c9c0, 0x05c9e0, indexAoF3Sprites_Wyler, 0x05 },
    { L"Normal Form D", 0x05c9e0, 0x05ca00, indexAoF3Sprites_Wyler, 0x04 },
    { L"Portrait D", 0x06fc00, 0x06fc20, indexAoF3Sprites_Wyler, 0x30 },
 };

const sGame_PaletteDataset AOF3_A_Wyler_RAGE_PALETTES[] =
{
    { L"Wyler Rage", 0x05ca00, 0x05ca20, indexAoF3Sprites_Wyler, 0 },
    { L"Red Shoulder Rage", 0x05ca40, 0x05ca60, indexAoF3Sprites_Wyler, 1 },
    { L"Charging Power Rage", 0x05ca60, 0x05ca80 },
};

//Shared
const sGame_PaletteDataset AOF3_A_Wyler_SHARED_PALETTES[] =
{
    { L"Black Out", 0x05f8a0, 0x05f8c0, indexAoF3Sprites_Wyler, 0x02 },
};

//-BONUS//-
 //Intro
const sGame_PaletteDataset AOF3_A_BONUS_INTRO_PALETTES[] =
{
    { L"SNK Logo", 0x05fc20, 0x05fc40, indexAoF3Sprites_Bonus, 0x05 },
    { L"Ryo Intro Background", 0x06e420, 0x06e440, indexAoF3Sprites_Bonus, 0x04 },
    { L"Robert Intro Background", 0x06e4a0, 0x06e4c0, indexAoF3Sprites_Bonus, 0x03 },
    { L"Main Menu Background 1/2", 0x06e460, 0x06e480, indexAoF3Sprites_Bonus, 0x01, &pairNext },
    { L"Main Menu Background 2/2", 0x06e480, 0x06e4a0, indexAoF3Sprites_Bonus, 0x02 },
    { L"Intro Flames", 0x05fc60, 0x05fc80, indexAoF3Sprites_Bonus, 0x10 },
    { L"Intro Text", 0x05fda0, 0x05fdc0 },
    { L"Freia Lawrence Intro", 0x05fa00, 0x05fa20, indexAoF3Sprites_Bonus, 0x00 },
};

 //Tutorial
const sGame_PaletteDataset AOF3_A_BONUS_TUTORIAL_PALETTES[] =
{
    { L"Joystick/Arrows", 0x05fce0, 0x05fd00, indexAoF3Sprites_Bonus, 0x0f, &pairFullyLinkedNode },
    { L"A/C Button", 0x05fd20, 0x05fd40, indexAoF3Sprites_Bonus, 0x0d },
    { L"B/D Button", 0x05fd00, 0x05fd20, indexAoF3Sprites_Bonus, 0x0e },
};

//Start Menu
const sGame_PaletteDataset AOF3_A_BONUS_STARTMENU_PALETTES[] =
{
    { L"Black Screen", 0x05fc1c, 0x05fc20, indexAoF3Sprites_Bonus, 0x08 },
    { L"Logo 1", 0x05fa20, 0x05fa40, indexAoF3Sprites_Bonus, 0x06, &pairNext },
    { L"Logo 2", 0x05fbe0, 0x05fc00, indexAoF3Sprites_Bonus, 0x07 },
    { L"Little SNK Logo", 0x05f160, 0x05f180 },
    { L"Demo Logo", 0x05f020, 0x05f040 },
    { L"Weekly Top Text 1", 0x05f1a0, 0x05f1c0 },
    { L"Weekly Top Text 2", 0x05f1c0, 0x05f1e0 },
};
 
//Select Screen
const sGame_PaletteDataset AOF3_A_BONUS_SELECTSCREEN_PALETTES[] =
{
    { L"Character Select Text/Timer", 0x05f0c0, 0x05f0e0 },
    { L"Character Screen Names", 0x05fcc0, 0x05fce0 },
    { L"P1 Cursor 1/8", 0x06e900, 0x06e920 },
    { L"P1 Cursor 2/8", 0x06e920, 0x06e940 },
    { L"P1 Cursor 3/8", 0x06e940, 0x06e960 },
    { L"P1 Cursor 4/8", 0x06e960, 0x06e980 },
    { L"P1 Cursor 5/8", 0x06e980, 0x06e9a0 },
    { L"P1 Cursor 6/8", 0x06e9a0, 0x06e9c0 },
    { L"P1 Cursor 7/8", 0x06e9c0, 0x06e9e0 },
    { L"P1 Cursor 8/8", 0x06e9e0, 0x06ea00 },
    { L"P2 Cursor 1/8", 0x06ea00, 0x06ea20 },
    { L"P2 Cursor 2/8", 0x06ea20, 0x06ea40 },
    { L"P2 Cursor 3/8", 0x06ea40, 0x06ea60 },
    { L"P2 Cursor 4/8", 0x06ea60, 0x06ea80 },
    { L"P2 Cursor 5/8", 0x06ea80, 0x06eaa0 },
    { L"P2 Cursor 6/8", 0x06eaa0, 0x06eac0 },
    { L"P2 Cursor 7/8", 0x06eac0, 0x06eae0 },
    { L"P2 Cursor 8/8", 0x06eae0, 0x06eb00 },
    { L"Here Comes a New Challenger", 0x05f000, 0x05f020 },
    { L"Level/Credits Text", 0x05f1e0, 0x05f200 },
    { L"Continue Number", 0x05f8c0, 0x05f8e0 },
    { L"Continue Text", 0x05f8e0, 0x05f900 },
    { L"GAME OVER Text", 0x05f900, 0x05f920 },
};

 //Hud
const sGame_PaletteDataset AOF3_A_BONUS_HUD_PALETTES[] =
{
    { L"Lifebar", 0x05f060, 0x05f080 },
    { L"Medium Power", 0x05f120, 0x05f140 },
    { L"Low Power", 0x05f140, 0x05f160 },
    { L"Win Icon", 0x05f080, 0x05f0a0 },
    { L"Lifebar Names/Insert Coin Screen", 0x05f100, 0x05f120 },
    { L"Insert Coin/Push Start Text", 0x05f0a0, 0x05f0c0 },
    { L"Stage Text/Score Text", 0x05f0e0, 0x05f100 },
    { L"Round/Tutorial Text", 0x05fd40, 0x05fd60 },
    { L"FIGHT/KO/Perfect Text", 0x05fd60, 0x05fd80 },
};

 //Shared Extras
const sGame_PaletteDataset AOF3_A_BONUS_SHARED_PALETTES[] =
{
    { L"Blood", 0x05fe40, 0x05fe60 },
    { L"Hitsparks", 0x05fee0, 0x05ff00 },
    { L"Blocksparks", 0x05fe60, 0x05fe80 },
    { L"Dust/Shadow/Text", 0x05f840, 0x05f860 },
    { L"Ryo/Robert Fireball", 0x05f800, 0x05f820 },
    { L"Ryo/Robert Firekick", 0x05fe80, 0x05fea0 },
};

 //Story Mode
const sGame_PaletteDataset AOF3_A_BONUS_STORY_PALETTES[] =
{
    { L"Freia Lawrence", 0x05ff20, 0x05ff40, indexAoF3Sprites_Bonus, 0x0c },
    { L"Yuri Sakazaki", 0x05f940, 0x05f960, indexAoF3Sprites_Ryo, 0x02 },
    { L"Mizuho Todoh", 0x05f920, 0x05f940, indexAoF3Sprites_Bonus, 0x0a },
    { L"Kasumi Story Cutscene", 0x05fd80, 0x05fda0, indexAoF3Sprites_Bonus, 0x09 },
    { L"Pelican", 0x05ff00, 0x05ff20, indexAoF3Sprites_Bonus, 0x0b },
    { L"Wang Sheet Ending", 0x05ff40, 0x05ff60 },
    { L"Story Mode Map 1/4", 0x06f300, 0x06f500 },
    { L"Story Mode Map 2/4", 0x06f500, 0x06f700 },
    { L"Story Mode Map 3/4", 0x06f700, 0x06f900 },
    { L"Story Mode Map 4/4", 0x06f900, 0x06fa40 },
    { L"Ryo/Robert Ending Stage 1/4", 0x06eb00, 0x06ed00 },
    { L"Ryo/Robert Ending Stage 2/4", 0x06ed00, 0x06ef00 },
    { L"Ryo/Robert Ending Stage 3/4", 0x06ef00, 0x06f100 },
    { L"Ryo/Robert Ending Stage 4/4", 0x06f100, 0x06f180 },
};

const sDescTreeNode AOF3_A_P1_Robert_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Robert_A_PALETTES, ARRAYSIZE(AOF3_A_Robert_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Robert_D_PALETTES, ARRAYSIZE(AOF3_A_Robert_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Robert_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Robert_RAGE_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Ryo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Ryo_A_PALETTES, ARRAYSIZE(AOF3_A_Ryo_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Ryo_D_PALETTES, ARRAYSIZE(AOF3_A_Ryo_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Ryo_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Ryo_RAGE_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Karman_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Karman_A_PALETTES, ARRAYSIZE(AOF3_A_Karman_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Karman_D_PALETTES, ARRAYSIZE(AOF3_A_Karman_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Karman_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Karman_RAGE_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Kasumi_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Kasumi_A_PALETTES, ARRAYSIZE(AOF3_A_Kasumi_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Kasumi_D_PALETTES, ARRAYSIZE(AOF3_A_Kasumi_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Kasumi_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Kasumi_RAGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF3_A_Kasumi_Shared_PALETTES, ARRAYSIZE(AOF3_A_Kasumi_Shared_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Rody_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Rody_A_PALETTES, ARRAYSIZE(AOF3_A_Rody_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Rody_D_PALETTES, ARRAYSIZE(AOF3_A_Rody_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Rody_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Rody_RAGE_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Lenny_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Lenny_A_PALETTES, ARRAYSIZE(AOF3_A_Lenny_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Lenny_D_PALETTES, ARRAYSIZE(AOF3_A_Lenny_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Lenny_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Lenny_RAGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF3_A_Lenny_SHARED_PALETTES, ARRAYSIZE(AOF3_A_Lenny_SHARED_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Wang_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Wang_A_PALETTES, ARRAYSIZE(AOF3_A_Wang_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Wang_D_PALETTES, ARRAYSIZE(AOF3_A_Wang_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Wang_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Wang_RAGE_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Jin_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Jin_A_PALETTES, ARRAYSIZE(AOF3_A_Jin_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Jin_D_PALETTES, ARRAYSIZE(AOF3_A_Jin_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Jin_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Jin_RAGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF3_A_Jin_SHARED_PALETTES, ARRAYSIZE(AOF3_A_Jin_SHARED_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Sinclair_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Sinclair_A_PALETTES, ARRAYSIZE(AOF3_A_Sinclair_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Sinclair_D_PALETTES, ARRAYSIZE(AOF3_A_Sinclair_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Sinclair_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Sinclair_RAGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF3_A_Sinclair_SHARED_PALETTES, ARRAYSIZE(AOF3_A_Sinclair_SHARED_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_Wyler_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AOF3_A_Wyler_A_PALETTES, ARRAYSIZE(AOF3_A_Wyler_A_PALETTES) },
    { L"D", DESC_NODETYPE_TREE, (void*)AOF3_A_Wyler_D_PALETTES, ARRAYSIZE(AOF3_A_Wyler_D_PALETTES) },
    { L"Rage", DESC_NODETYPE_TREE, (void*)AOF3_A_Wyler_RAGE_PALETTES, ARRAYSIZE(AOF3_A_Wyler_RAGE_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AOF3_A_Wyler_SHARED_PALETTES, ARRAYSIZE(AOF3_A_Wyler_SHARED_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_BONUS_COLLECTION[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_INTRO_PALETTES, ARRAYSIZE(AOF3_A_BONUS_INTRO_PALETTES) },
    { L"Tutorial", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_TUTORIAL_PALETTES, ARRAYSIZE(AOF3_A_BONUS_TUTORIAL_PALETTES) },
    { L"Start Menu", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_STARTMENU_PALETTES, ARRAYSIZE(AOF3_A_BONUS_STARTMENU_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_SELECTSCREEN_PALETTES, ARRAYSIZE(AOF3_A_BONUS_SELECTSCREEN_PALETTES) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_HUD_PALETTES, ARRAYSIZE(AOF3_A_BONUS_HUD_PALETTES) },
    { L"Shared Extras", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_SHARED_PALETTES, ARRAYSIZE(AOF3_A_BONUS_SHARED_PALETTES) },
    { L"Story", DESC_NODETYPE_TREE, (void*)AOF3_A_BONUS_STORY_PALETTES, ARRAYSIZE(AOF3_A_BONUS_STORY_PALETTES) },
};

const sDescTreeNode AOF3_A_P1_UNITS[] =
{
    { L"Robert", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Robert_COLLECTION, ARRAYSIZE(AOF3_A_P1_Robert_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Ryo_COLLECTION, ARRAYSIZE(AOF3_A_P1_Ryo_COLLECTION) },
    { L"Karman", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Karman_COLLECTION, ARRAYSIZE(AOF3_A_P1_Karman_COLLECTION) },
    { L"Kasumi", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Kasumi_COLLECTION, ARRAYSIZE(AOF3_A_P1_Kasumi_COLLECTION) },
    { L"Rody", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Rody_COLLECTION, ARRAYSIZE(AOF3_A_P1_Rody_COLLECTION) },
    { L"Lenny", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Lenny_COLLECTION, ARRAYSIZE(AOF3_A_P1_Lenny_COLLECTION) },
    { L"Wang", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Wang_COLLECTION, ARRAYSIZE(AOF3_A_P1_Wang_COLLECTION) },
    { L"Jin", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Jin_COLLECTION, ARRAYSIZE(AOF3_A_P1_Jin_COLLECTION) },
    { L"Sinclair", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Sinclair_COLLECTION, ARRAYSIZE(AOF3_A_P1_Sinclair_COLLECTION) },
    { L"Wyler", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_Wyler_COLLECTION, ARRAYSIZE(AOF3_A_P1_Wyler_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)AOF3_A_P1_BONUS_COLLECTION, ARRAYSIZE(AOF3_A_P1_BONUS_COLLECTION) },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_CACTUSDAY_PALETTES[] =
{
    { L"Cactus Gas Station Day 1", 0x1f0000, 0x1f0200 },
    { L"Cactus Gas Station Day 2", 0x1f0200, 0x1f0400 },
    { L"Cactus Gas Station Day 3", 0x1f0400, 0x1f0600 },
    { L"Cactus Gas Station Day 4", 0x1f0600, 0x1f0800 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_CACTUSNIGHT_PALETTES[] =
{
    { L"Cactus Gas Station Night 1", 0x1f1000, 0x1f1200 },
    { L"Cactus Gas Station Night 2", 0x1f1200, 0x1f1400 },
    { L"Cactus Gas Station Night 3", 0x1f1400, 0x1f1600 },
    { L"Cactus Gas Station Night 4", 0x1f1600, 0x1f1800 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_TRAINDAY_PALETTES[] =
{
    { L"Train Yard Day 1", 0x1f2000, 0x1f2200 },
    { L"Train Yard Day 2", 0x1f2200, 0x1f2400 },
    { L"Train Yard Day 3", 0x1f2400, 0x1f2600 },
    { L"Train Yard Day 4", 0x1f2600, 0x1f2800 },
    { L"Train Yard Day 5", 0x1f2800, 0x1f29e0 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_TRAINNIGHT_PALETTES[] =
{
    { L"Train Yard Night 1", 0x1f3000, 0x1f3200 },
    { L"Train Yard Night 2", 0x1f3200, 0x1f3400 },
    { L"Train Yard Night 3", 0x1f3400, 0x1f3600 },
    { L"Train Yard Night 4", 0x1f3600, 0x1f3800 },
    { L"Train Yard Night 5", 0x1f3800, 0x1f3a00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_CINCO_PALETTES[] =
{
    { L"Cinco de Mayo 1", 0x1f4000, 0x1f4200 },
    { L"Cinco de Mayo 2", 0x1f4200, 0x1f4400 },
    { L"Cinco de Mayo 3", 0x1f4400, 0x1f4600 },
    { L"Cinco de Mayo 4", 0x1f4600, 0x1f4800 },
    { L"Cinco de Mayo 5", 0x1f4800, 0x1f4a00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_SIESTA_PALETTES[] =
{
    { L"Siesta Café 1", 0x1f5000, 0x1f5200 },
    { L"Siesta Café 2", 0x1f5200, 0x1f5400 },
    { L"Siesta Café 3", 0x1f5400, 0x1f5600 },
    { L"Siesta Café 4", 0x1f5600, 0x1f5800 },
    { L"Siesta Café 5", 0x1f5800, 0x1f5a00 },
    { L"Siesta Café 6", 0x1f5a00, 0x1f5c00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_BAR_PALETTES[] =
{
    { L"Bar Santana 1", 0x1f6000, 0x1f6200 },
    { L"Bar Santana 2", 0x1f6200, 0x1f6400 },
    { L"Bar Santana 3", 0x1f6400, 0x1f6600 },
    { L"Bar Santana 4", 0x1f6600, 0x1f6800 },
    { L"Bar Santana 5", 0x1f6800, 0x1f6a00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_WYLERINTRO_PALETTES[] =
{
    { L"Wyler Mansion Intro 1", 0x1f7000, 0x1f7200 },
    { L"Wyler Mansion Intro 2", 0x1f7200, 0x1f7400 },
    { L"Wyler Mansion Intro 3", 0x1f7400, 0x1f7600 },
    { L"Wyler Mansion Intro 4", 0x1f7600, 0x1f7800 },
    { L"Wyler Mansion Intro 5", 0x1f7800, 0x1f7a00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_WYLER_PALETTES[] =
{
    { L"Wyler Mansion 1", 0x1f8000, 0x1f8200 },
    { L"Wyler Mansion 2", 0x1f8200, 0x1f8400 },
    { L"Wyler Mansion 3", 0x1f8400, 0x1f8600 },
    { L"Wyler Mansion 4", 0x1f8600, 0x1f8800 },
    { L"Wyler Mansion 5", 0x1f8800, 0x1f8a00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_CINCOFLASHING_PALETTES[] =
{
    { L"Cinco de Mayo Flashing 1", 0x1fa000, 0x1fa200 },
    { L"Cinco de Mayo Flashing 2", 0x1fa200, 0x1fa400 },
    { L"Cinco de Mayo Flashing 3", 0x1fa400, 0x1fa600 },
    { L"Cinco de Mayo Flashing 4", 0x1fa600, 0x1fa800 },
    { L"Cinco de Mayo Flashing 5", 0x1fa800, 0x1faa00 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_QUIXOTECDAY_PALETTES[] =
{
    { L"Quixotec Temple Day 1", 0x1fb000, 0x1fb200 },
    { L"Quixotec Temple Day 2", 0x1fb200, 0x1fb400 },
    { L"Quixotec Temple Day 3", 0x1fb400, 0x1fb600 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_QUIXOTECNIGHT_PALETTES[] =
{
    { L"Quixotec Temple Night 1", 0x1fc000, 0x1fc200 },
    { L"Quixotec Temple Night 2", 0x1fc200, 0x1fc400 },
    { L"Quixotec Temple Night 3", 0x1fc400, 0x1fc600 },
};

const sGame_PaletteDataset AOF3_A_P2_STAGE_CEMETARYPALETTES[] =
{
    { L"Cemetery 1", 0x1fd000, 0x1fd200 },
    { L"Cemetery 2", 0x1fd200, 0x1fd400 },
    { L"Cemetery 3", 0x1fd400, 0x1fd600 },
    { L"Cemetery 4", 0x1fd600, 0x1fd800 },
    { L"Cemetery 5", 0x1fd800, 0x1fda00 },
    { L"Cemetery 6", 0x1fda00, 0x1fdc00 },
    { L"Cemetery 7", 0x1fdc00, 0x1fde00 },
    { L"Cemetery 8", 0x1fde00, 0x1fe000 },
};

const sDescTreeNode AOF3_A_P2_STAGES_COLLECTION[] =
{
    { L"Cactus Gas Station Day",    DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_CACTUSDAY_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_CACTUSDAY_PALETTES) },
    { L"Cactus Gas Station Night",  DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_CACTUSNIGHT_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_CACTUSNIGHT_PALETTES) },
    { L"Train Yard Day",            DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_TRAINDAY_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_TRAINDAY_PALETTES) },
    { L"Train Yard Night",          DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_TRAINNIGHT_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_TRAINNIGHT_PALETTES) },
    { L"Cinco de Mayo",             DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_CINCO_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_CINCO_PALETTES) },
    { L"Siesta Café",               DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_SIESTA_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_SIESTA_PALETTES) },
    { L"Bar Santana",               DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_BAR_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_BAR_PALETTES) },
    { L"Wyler Mansion Intro",       DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_WYLERINTRO_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_WYLERINTRO_PALETTES) },
    { L"Wyler Mansion",             DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_WYLER_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_WYLER_PALETTES) },
    { L"Cinco de Mayo Flashing",    DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_CINCOFLASHING_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_CINCOFLASHING_PALETTES) },
    { L"Quixotec Temple Day",       DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_QUIXOTECDAY_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_QUIXOTECDAY_PALETTES) },
    { L"Quixotec Temple Night",     DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_QUIXOTECNIGHT_PALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_QUIXOTECNIGHT_PALETTES) },
    { L"Cemetery",                  DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGE_CEMETARYPALETTES, ARRAYSIZE(AOF3_A_P2_STAGE_CEMETARYPALETTES) },
};

const sDescTreeNode AOF3_A_P2_UNITS[] =
{
    { L"Stages", DESC_NODETYPE_TREE, (void*)AOF3_A_P2_STAGES_COLLECTION, ARRAYSIZE(AOF3_A_P2_STAGES_COLLECTION) },
};

constexpr auto AOF3_A_P1_NUMUNIT = ARRAYSIZE(AOF3_A_P1_UNITS);
#define AOF3_A_P1_EXTRALOC AOF3_A_P1_NUMUNIT

constexpr auto AOF3_A_P2_NUMUNIT = ARRAYSIZE(AOF3_A_P2_UNITS);
#define AOF3_A_P2_EXTRALOC AOF3_A_P2_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef AOF3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

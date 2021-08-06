#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to JOJOSRPG_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 JOJOSRPG_SNES_IMGIDS_USED[] =
{
    indexJoJoRPGSprites_Enemies,         // 0xA6
    indexJoJoRPGSprites_Heroes,          // 0xA7
    indexJoJoRPGSprites_NPCs,            // 0xA8
    indexJoJoRPGSprites_Bonus,           // 0xA9
};

const sGame_PaletteDataset JOJOSRPG_SNES_HERO_PALETTES[] =
{
    //Heros & Stands
    { L"Jotaro", 0x8fba, 0x8FDa, indexJoJoRPGSprites_Heroes, 0x05 },
    { L"Star Platinum", 0x90da, 0x90Fa, indexJoJoRPGSprites_Heroes, 0x0a },
    { L"Joseph", 0x8fda, 0x8FFa, indexJoJoRPGSprites_Heroes, 0x04 },
    { L"Hermit Purple", 0x945c, 0x947C, indexJoJoRPGSprites_Heroes, 0x01 },

    { L"Kakyoin", 0x901a, 0x903a, indexJoJoRPGSprites_Heroes, 0x06 },
    { L"Hierophant Green", 0x913a, 0x915a, indexJoJoRPGSprites_Heroes, 0x02 },
    { L"Avdol", 0x8ffa, 0x901a, indexJoJoRPGSprites_Heroes, 0x00 },
    { L"Magician's Red", 0x90fa, 0x911a, indexJoJoRPGSprites_Heroes, 0x07 },
    { L"Polnareff", 0x903a, 0x905a, indexJoJoRPGSprites_Heroes, 0x08 },
    { L"Silver Chariot", 0x919a, 0x91Ba, indexJoJoRPGSprites_Heroes, 0x09 },
    { L"Iggy", 0x921a, 0x923a, indexJoJoRPGSprites_Heroes, 0x03 },
    { L"The Fool", 0x91fa, 0x921a, indexJoJoRPGSprites_Heroes, 0x0b },
    { L"Hero Portraits", 0x819a, 0x821a, indexJoJoRPGSprites_Bonus, 0x40 },
};

const sGame_PaletteDataset JOJOSRPG_SNES_ENEMY_PALETTES[] =
{
//Enemys
    { L"Gray Fly", 0x915a, 0x917a, indexJoJoRPGSprites_Enemies, 0x09 },
    { L"Captain Tennille and dream flowers", 0x935a, 0x937a, indexJoJoRPGSprites_Enemies, 0x00 },
    { L"Dark Blue Moon", 0x941a, 0x943a, indexJoJoRPGSprites_Enemies, 0x01 },
    { L"Vampires", 0x927a, 0x929a, indexJoJoRPGSprites_Enemies, 0x0d },
    { L"DEATH13", 0x93ba, 0x93Da, indexJoJoRPGSprites_Enemies, 0x02 },
    { L"High Priestess", 0x923a, 0x925a, indexJoJoRPGSprites_Enemies, 0x0a },
    { L"Intro DIO", 0x95da, 0x95Fa, indexJoJoRPGSprites_Enemies, 0x07 },
    { L"Intro DIO (Coffin)", 0x931a, 0x933a, indexJoJoRPGSprites_Enemies, 0x05 },
    { L"DIO (Intro menu only)", 0x817a, 0x819a, indexJoJoRPGSprites_Enemies, 0x06 },
    { L"DIO", 0x96da, 0x96Fa, indexJoJoRPGSprites_Enemies, 0x04 },
    { L"The World", 0x96ba, 0x96Da, indexJoJoRPGSprites_Enemies, 0x0c },
    { L"Vanilla Ice And cream", 0x963a, 0x967a, indexJoJoRPGSprites_Enemies, 0x0e },
    { L"Strength and ebony devil (other assets not in palette)", 0x94da, 0x94fa, indexJoJoRPGSprites_Enemies, 0x0b },
    { L"Devo", 0x94ba, 0x94da, indexJoJoRPGSprites_Enemies, 0x03 },
};

const sGame_PaletteDataset JOJOSRPG_SNES_NPC_PALETTES[] =
{
//NPCs
	{ L"Holly (Linked to NPCs)", 0x953a, 0x955a, indexJoJoRPGSprites_NPCs, 0x02 },
    { L"Sick Holly", 0x899a, 0x89da, indexJoJoRPGSprites_NPCs, 0x03 },
    { L"Various students", 0x909a, 0x90Ba, indexJoJoRPGSprites_NPCs, 0x01 },
    { L"Student", 0x90ba, 0x90da, indexJoJoRPGSprites_NPCs, 0x00 },
    { L"Doctor (Linked to NPCs)", 0x905a, 0x907a, indexJoJoRPGSprites_Enemies, 0x0f },
    { L"Hotel Managers", 0x971a, 0x973a, indexJoJoRPGSprites_NPCs, 0x04 },
    { L"India NPCs", 0x91ba, 0x91da, indexJoJoRPGSprites_NPCs, 0x05 },
};

const sGame_PaletteDataset JOJOSRPG_SNES_BONUS_PALETTES[] =
{
//Bonus
	{ L"Titlescreen", 0x95ba, 0x95da, indexJoJoRPGSprites_Bonus, 0x00 },
	{ L"Start area 1/2", 0x821a, 0x825a, indexJoJoRPGSprites_Bonus, 0x80, &pairNext },
    { L"Start area 2/2", 0x82ba, 0x82da, indexJoJoRPGSprites_Bonus, 0x84 },
};

const sDescTreeNode JOJOSRPG_SNES_HERO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_HERO_PALETTES, ARRAYSIZE(JOJOSRPG_SNES_HERO_PALETTES) },
};

const sDescTreeNode JOJOSRPG_SNES_ENEMY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_ENEMY_PALETTES, ARRAYSIZE(JOJOSRPG_SNES_ENEMY_PALETTES) },
};

const sDescTreeNode JOJOSRPG_SNES_NPC_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_NPC_PALETTES, ARRAYSIZE(JOJOSRPG_SNES_NPC_PALETTES) },
};

const sDescTreeNode JOJOSRPG_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_BONUS_PALETTES, ARRAYSIZE(JOJOSRPG_SNES_BONUS_PALETTES) },
};

const sDescTreeNode JOJOSRPG_SNES_UNITS[] =
{
    { L"Heroes", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_HERO_COLLECTION, ARRAYSIZE(JOJOSRPG_SNES_HERO_COLLECTION) },
    { L"Enemies", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_ENEMY_COLLECTION, ARRAYSIZE(JOJOSRPG_SNES_ENEMY_COLLECTION) },
    { L"NPCs", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_NPC_COLLECTION, ARRAYSIZE(JOJOSRPG_SNES_NPC_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)JOJOSRPG_SNES_BONUS_COLLECTION, ARRAYSIZE(JOJOSRPG_SNES_BONUS_COLLECTION) },
};

constexpr auto JOJOSRPG_SNES_NUMUNIT = ARRAYSIZE(JOJOSRPG_SNES_UNITS);

#define JOJOSRPG_SNES_EXTRALOC JOJOSRPG_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef JOJOSRPG_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

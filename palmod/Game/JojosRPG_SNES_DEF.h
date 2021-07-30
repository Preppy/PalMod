#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to JOJOSRPG_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 JOJOSRPG_SNES_IMGIDS_USED[] =
{
    indexSVGSprites_Ayako,              // 0x64
};

const sGame_PaletteDataset JOJOSRPG_SNES_HERO_PALETTES[] =
{
    //Heros & Stands
    { L"Jotaro", 0x8fba, 0x8FDa },
    { L"Star Platinum", 0x90da, 0x90Fa },
    { L"Joseph", 0x8fda, 0x8FFa },
    { L"Hermit Purple", 0x945c, 0x947C },

    { L"Kakyoin", 0x901a, 0x903a },
    { L"Hierophant Green", 0x913a, 0x915a },
    { L"Avdol", 0x8ffa, 0x901a },
    { L"Magician's Red", 0x90fa, 0x911a },
    { L"Polnareff", 0x903a, 0x905a },
    { L"Silver Chariot", 0x919a, 0x91Ba },
    { L"Iggy", 0x921a, 0x923a },
    { L"The Fool", 0x91fa, 0x921a },
    { L"Hero Portraits", 0x819a, 0x821a },
};

const sGame_PaletteDataset JOJOSRPG_SNES_ENEMY_PALETTES[] =
{
//Enemys
    { L"Gray Fly", 0x915a, 0x917a },
    { L"Captain Tennille and dream flowers", 0x935a, 0x937a },
    { L"Dark Blue Moon", 0x941a, 0x943a },
    { L"Vampires", 0x927a, 0x929a },
    { L"DEATH13", 0x93ba, 0x93Da },
    { L"High Priestess", 0x923a, 0x925a },
    { L"Intro DIO", 0x95da, 0x95Fa },
    { L"Intro DIO (Coffin)", 0x931a, 0x933a },
    { L"DIO (Intro menu only)", 0x817a, 0x819a },
    { L"DIO", 0x96da, 0x96Fa },
    { L"The World", 0x96ba, 0x96Da },
    { L"Vanilla Ice And cream", 0x963a, 0x967a },
    { L"Strength and ebony devil (other assets not in palette)", 0x94da, 0x94fa },
    { L"Devo", 0x94ba, 0x94da },
};

const sGame_PaletteDataset JOJOSRPG_SNES_NPC_PALETTES[] =
{
//NPCs
	{ L"Holly (Linked to NPCs)", 0x953a, 0x955a },
    { L"Sick Holly", 0x899a, 0x89da },
    { L"Various students", 0x909a, 0x90Ba },
    { L"Student", 0x90ba, 0x90da },
    { L"Doctor (Linked to NPCs)", 0x905a, 0x907a },
    { L"Hotel Managers", 0x971a, 0x973a },
};

const sGame_PaletteDataset JOJOSRPG_SNES_BONUS_PALETTES[] =
{
//Bonus
	{ L"Titlescreen", 0x95ba, 0x95da },
	{ L"Start area", 0x821a, 0x825a },
    { L"Start area part", 0x82ba, 0x82da },
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

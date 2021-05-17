#pragma once

const UINT16 WINDJAMMERS_A_IMGIDS_USED[] =
{
    indexWindjammersSprites_Germany,
    indexWindjammersSprites_Italy,
    indexWindjammersSprites_Japan,
    indexWindjammersSprites_Spain,
    indexWindjammersSprites_UK_Korea,
    indexWindjammersSprites_USA,
    indexWindjammersSprites_Bonus,
};

const sGame_PaletteDataset Windjammers_A_USA_P1[] =
{
    { L"Player 1", 0x30400, 0x30420, indexWindjammersSprites_USA },
    { L"P1 Portraits", 0x31240, 0x31280, indexWindjammersSprites_USA, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_USA_P2[] =
{
    { L"Player 2", 0x30420, 0x30440, indexWindjammersSprites_USA },
    { L"P2 Portraits", 0x31c40, 0x31c80, indexWindjammersSprites_USA, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_SPAIN_P1[] =
{
    { L"Player 1", 0x30440, 0x30460, indexWindjammersSprites_Spain },
    { L"P1 Portraits", 0x312c0, 0x31300, indexWindjammersSprites_Spain, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_SPAIN_P2[] =
{
    { L"Player 2", 0x30460, 0x30480, indexWindjammersSprites_Spain },
    { L"P2 Portraits", 0x31cc0, 0x31d00, indexWindjammersSprites_Spain, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_GERMANY_P1[] =
{
    { L"Player 1", 0x30480, 0x304a0, indexWindjammersSprites_Germany },
    { L"P1 Portraits", 0x31300, 0x31320, indexWindjammersSprites_Germany, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_GERMANY_P2[] =
{
    { L"Player 2", 0x304a0, 0x304c0, indexWindjammersSprites_Germany },
    { L"P2 Portraits", 0x31d00, 0x31d20, indexWindjammersSprites_Germany, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_BRITAIN_P1[] =
{
    { L"Player 1", 0x304c0, 0x304e0, indexWindjammersSprites_UK_Korea },
    { L"P1 Portraits", 0x31200, 0x31240, indexWindjammersSprites_UK_Korea, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_BRITAIN_P2[] =
{
    { L"Player 2", 0x304e0, 0x30500, indexWindjammersSprites_UK_Korea },
    { L"P2 Portraits", 0x31c00, 0x31c40, indexWindjammersSprites_UK_Korea, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_ITALY_P1[] =
{
    { L"Player 1", 0x30500, 0x30520, indexWindjammersSprites_Italy },
    { L"P1 Portraits", 0x31340, 0x31380, indexWindjammersSprites_Italy, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_ITALY_P2[] =
{
    { L"Player 2", 0x30520, 0x30540, indexWindjammersSprites_Italy },
    { L"P2 Portraits", 0x31d40, 0x31d80, indexWindjammersSprites_Italy, 0x80 },
};

const sGame_PaletteDataset Windjammers_A_JAPAN_P1[] =
{
    { L"Player 1", 0x30540, 0x30560, indexWindjammersSprites_Japan },
    { L"P1 Portraits (A)", 0x31280, 0x312c0, indexWindjammersSprites_Japan, 0x80, &pairNext },
    { L"P1 Portraits (B)", 0x31380, 0x313a0, indexWindjammersSprites_Japan, 0x81 },
};

const sGame_PaletteDataset Windjammers_A_JAPAN_P2[] =
{
    { L"Player 2", 0x30560, 0x30580, indexWindjammersSprites_Japan },
    { L"P2 Portraits", 0x31c80, 0x31cc0, indexWindjammersSprites_Japan, 0x82 },
};

const sGame_PaletteDataset Windjammers_A_STATS[] =
{
    { L"Character Stat Portraits", 0x31700, 0x317c0, indexWindjammersSprites_Bonus, 0x03 },
};

const sGame_PaletteDataset Windjammers_A_LOGOS[] =
{
    { L"Main logo", 0x31960, 0x319e0, indexWindjammersSprites_Bonus, 0x01 },
    { L"Mini logo", 0x30080, 0x300a0, indexWindjammersSprites_Bonus, 0x02 },
};

const sGame_PaletteDataset Windjammers_A_STAGES_BEACH[] =
{
    { L"Stage Beach", 0x30800, 0x30a00, indexWindjammersSprites_Bonus, 0x05, &pairNext },
    { L"Stage Beach Net", 0x313c0, 0x31400, indexWindjammersSprites_Bonus, 0x04 },
};

const sGame_PaletteDataset Windjammers_A_STAGES_LAWN[] =
{
    { L"Stage Lawn", 0x30600, 0x30800, indexWindjammersSprites_Bonus, 0x08 },
};

const sGame_PaletteDataset Windjammers_A_STAGES_TILED[] =
{
    { L"Stage Tiled", 0x30a00, 0x30c00, indexWindjammersSprites_Bonus, 0x0a },
};

const sGame_PaletteDataset Windjammers_A_STAGES_CONCRETE[] =
{
    { L"Stage Concrete", 0x31000, 0x31200, indexWindjammersSprites_Bonus, 0x07 },
};

const sGame_PaletteDataset Windjammers_A_STAGES_CLAY[] =
{
    { L"Stage Clay", 0x30e00, 0x31000, indexWindjammersSprites_Bonus, 0x06 },
};

const sGame_PaletteDataset Windjammers_A_STAGES_STADIUM[] =
{
    { L"Stage Stadium", 0x30c00, 0x30e00, indexWindjammersSprites_Bonus, 0x09 },
};

const sDescTreeNode Windjammers_A_USA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE,   (void*)Windjammers_A_USA_P1, ARRAYSIZE(Windjammers_A_USA_P1) },
    { L"P2", DESC_NODETYPE_TREE,   (void*)Windjammers_A_USA_P2, ARRAYSIZE(Windjammers_A_USA_P2) },
};

const sDescTreeNode Windjammers_A_SPAIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE,   (void*)Windjammers_A_SPAIN_P1, ARRAYSIZE(Windjammers_A_SPAIN_P1) },
    { L"P2", DESC_NODETYPE_TREE,   (void*)Windjammers_A_SPAIN_P2, ARRAYSIZE(Windjammers_A_SPAIN_P2) },
};

const sDescTreeNode Windjammers_A_GERMANY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE,   (void*)Windjammers_A_GERMANY_P1, ARRAYSIZE(Windjammers_A_GERMANY_P1) },
    { L"P2", DESC_NODETYPE_TREE,   (void*)Windjammers_A_GERMANY_P2, ARRAYSIZE(Windjammers_A_GERMANY_P2) },
};

const sDescTreeNode Windjammers_A_BRITAIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE,   (void*)Windjammers_A_BRITAIN_P1, ARRAYSIZE(Windjammers_A_BRITAIN_P1) },
    { L"P2", DESC_NODETYPE_TREE,   (void*)Windjammers_A_BRITAIN_P2, ARRAYSIZE(Windjammers_A_BRITAIN_P2) },
};

const sDescTreeNode Windjammers_A_ITALY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE,   (void*)Windjammers_A_ITALY_P1, ARRAYSIZE(Windjammers_A_ITALY_P1) },
    { L"P2", DESC_NODETYPE_TREE,   (void*)Windjammers_A_ITALY_P2, ARRAYSIZE(Windjammers_A_ITALY_P2) },
};

const sDescTreeNode Windjammers_A_JAPAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE,   (void*)Windjammers_A_JAPAN_P1, ARRAYSIZE(Windjammers_A_JAPAN_P1) },
    { L"P2", DESC_NODETYPE_TREE,   (void*)Windjammers_A_JAPAN_P2, ARRAYSIZE(Windjammers_A_JAPAN_P2) },
};

const sDescTreeNode Windjammers_A_STAGES_COLLECTION[] =
{
    { L"Beach",     DESC_NODETYPE_TREE,   (void*)Windjammers_A_STAGES_BEACH, ARRAYSIZE(Windjammers_A_STAGES_BEACH) },
    { L"Clay",      DESC_NODETYPE_TREE,   (void*)Windjammers_A_STAGES_CLAY, ARRAYSIZE(Windjammers_A_STAGES_CLAY) },
    { L"Concrete",  DESC_NODETYPE_TREE,   (void*)Windjammers_A_STAGES_CONCRETE, ARRAYSIZE(Windjammers_A_STAGES_CONCRETE) },
    { L"Lawn",      DESC_NODETYPE_TREE,   (void*)Windjammers_A_STAGES_LAWN, ARRAYSIZE(Windjammers_A_STAGES_LAWN) },
    { L"Stadium",   DESC_NODETYPE_TREE,   (void*)Windjammers_A_STAGES_STADIUM, ARRAYSIZE(Windjammers_A_STAGES_STADIUM) },
    { L"Tiled",     DESC_NODETYPE_TREE,   (void*)Windjammers_A_STAGES_TILED, ARRAYSIZE(Windjammers_A_STAGES_TILED) },
};

const sDescTreeNode Windjammers_A_BONUS_COLLECTION[] =
{
    { L"Stat Portraits",    DESC_NODETYPE_TREE,   (void*)Windjammers_A_STATS, ARRAYSIZE(Windjammers_A_STATS) },
    { L"Logos",             DESC_NODETYPE_TREE,   (void*)Windjammers_A_LOGOS, ARRAYSIZE(Windjammers_A_LOGOS) },
};

const sDescTreeNode Windjammers_A_UNITS[] =
{
    { L"Japan",     DESC_NODETYPE_TREE, (void*)Windjammers_A_JAPAN_COLLECTION,      ARRAYSIZE(Windjammers_A_JAPAN_COLLECTION) },
    { L"UK/Korea",  DESC_NODETYPE_TREE, (void*)Windjammers_A_BRITAIN_COLLECTION,    ARRAYSIZE(Windjammers_A_BRITAIN_COLLECTION) },
    { L"Spain",     DESC_NODETYPE_TREE, (void*)Windjammers_A_SPAIN_COLLECTION,      ARRAYSIZE(Windjammers_A_SPAIN_COLLECTION) },
    { L"Italy",     DESC_NODETYPE_TREE, (void*)Windjammers_A_ITALY_COLLECTION,      ARRAYSIZE(Windjammers_A_ITALY_COLLECTION) },
    { L"USA",       DESC_NODETYPE_TREE, (void*)Windjammers_A_USA_COLLECTION,        ARRAYSIZE(Windjammers_A_USA_COLLECTION) },
    { L"Germany",   DESC_NODETYPE_TREE, (void*)Windjammers_A_GERMANY_COLLECTION,    ARRAYSIZE(Windjammers_A_GERMANY_COLLECTION) },
    { L"Stages",    DESC_NODETYPE_TREE, (void*)Windjammers_A_STAGES_COLLECTION,     ARRAYSIZE(Windjammers_A_STAGES_COLLECTION) },
    { L"Bonus",     DESC_NODETYPE_TREE, (void*)Windjammers_A_BONUS_COLLECTION,      ARRAYSIZE(Windjammers_A_BONUS_COLLECTION) },
};

constexpr auto Windjammers_A_NUMUNIT = ARRAYSIZE(Windjammers_A_UNITS);
#define Windjammers_A_EXTRALOC Windjammers_A_NUMUNIT

const stExtraDef Windjammers_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    //Extra
    { INVALID_UNIT_VALUE }
};

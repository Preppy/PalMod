#pragma once

const sGame_PaletteDataset Windjammers_A_USA_PALETTES[] =
{
    { L"Character A", 0x30400, 0x30420, indexWindjammersSprites_USA },
    { L"Character B", 0x30420, 0x30440, indexWindjammersSprites_USA },
};

const sGame_PaletteDataset Windjammers_A_SPAIN_PALETTES[] =
{
    { L"Character A", 0x30440, 0x30460, indexWindjammersSprites_Spain },
    { L"Character B", 0x30460, 0x30480, indexWindjammersSprites_Spain },
};

const sGame_PaletteDataset Windjammers_A_GERMANY_PALETTES[] =
{
    { L"Character A", 0x30480, 0x304a0, indexWindjammersSprites_Germany },
    { L"Character B", 0x304a0, 0x304c0, indexWindjammersSprites_Germany },
};

const sGame_PaletteDataset Windjammers_A_BRITAIN_PALETTES[] =
{
    { L"Character A", 0x304c0, 0x304e0, indexWindjammersSprites_UK_Korea },
    { L"Character B", 0x304e0, 0x30500, indexWindjammersSprites_UK_Korea },
};

const sGame_PaletteDataset Windjammers_A_ITALY_PALETTES[] =
{
    { L"Character A", 0x30500, 0x30520, indexWindjammersSprites_Italy },
    { L"Character B", 0x30520, 0x30540, indexWindjammersSprites_Italy },
};

const sGame_PaletteDataset Windjammers_A_JAPAN_PALETTES[] =
{
    { L"Character A", 0x30540, 0x30560, indexWindjammersSprites_Japan },
    { L"Character B", 0x30560, 0x30580, indexWindjammersSprites_Japan },
};

const sDescTreeNode Windjammers_A_USA_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE,   (void*)Windjammers_A_USA_PALETTES, ARRAYSIZE(Windjammers_A_USA_PALETTES) },
};

const sDescTreeNode Windjammers_A_SPAIN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE,   (void*)Windjammers_A_SPAIN_PALETTES, ARRAYSIZE(Windjammers_A_SPAIN_PALETTES) },
};

const sDescTreeNode Windjammers_A_GERMANY_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE,   (void*)Windjammers_A_GERMANY_PALETTES, ARRAYSIZE(Windjammers_A_GERMANY_PALETTES) },
};

const sDescTreeNode Windjammers_A_BRITAIN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE,   (void*)Windjammers_A_BRITAIN_PALETTES, ARRAYSIZE(Windjammers_A_BRITAIN_PALETTES) },
};

const sDescTreeNode Windjammers_A_ITALY_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE,   (void*)Windjammers_A_ITALY_PALETTES, ARRAYSIZE(Windjammers_A_ITALY_PALETTES) },
};

const sDescTreeNode Windjammers_A_JAPAN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE,   (void*)Windjammers_A_JAPAN_PALETTES, ARRAYSIZE(Windjammers_A_JAPAN_PALETTES) },
};

const sDescTreeNode Windjammers_A_UNITS[] =
{
    { _T("USA"),        DESC_NODETYPE_TREE, (void*)Windjammers_A_USA_COLLECTION,      ARRAYSIZE(Windjammers_A_USA_COLLECTION) },
    { _T("Spain"),      DESC_NODETYPE_TREE, (void*)Windjammers_A_SPAIN_COLLECTION,      ARRAYSIZE(Windjammers_A_SPAIN_COLLECTION) },
    { _T("Germany"),    DESC_NODETYPE_TREE, (void*)Windjammers_A_GERMANY_COLLECTION,      ARRAYSIZE(Windjammers_A_GERMANY_COLLECTION) },
    { _T("Britain"),    DESC_NODETYPE_TREE, (void*)Windjammers_A_BRITAIN_COLLECTION,      ARRAYSIZE(Windjammers_A_BRITAIN_COLLECTION) },
    { _T("Italy"),      DESC_NODETYPE_TREE, (void*)Windjammers_A_ITALY_COLLECTION,      ARRAYSIZE(Windjammers_A_ITALY_COLLECTION) },
    { _T("Japan"),      DESC_NODETYPE_TREE, (void*)Windjammers_A_JAPAN_COLLECTION,      ARRAYSIZE(Windjammers_A_JAPAN_COLLECTION) },
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

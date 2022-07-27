#pragma once

const std::vector<uint16_t> MWarr_A_IMGIDS_USED =
{
};

const sGame_PaletteDataset MWarr_A_ALL_PALETTES[] =
{
    { L"Marcus - P1 Rome", 0x92c24, 0x92c82 },
    { L"Caius - P2 Rome", 0x92ce6, 0x92d44 },
    { L"Hang Sing - P1 Mongolia", 0x92de6, 0x92e4c },
    { L"Chang Kien - P2 Mongolia", 0x92ee6, 0x92f4c },
    { L"Hang Sing Alt (Unused)", 0x92d66, 0x92dcc },
    { L"Chang Kien Alt (Unused)", 0x92e66, 0x92ecc },
    { L"Mongolian Intro Palette", 0x92c80, 0x92ce6 },
    { L"Gurdaf - P1 Scandinavian", 0x92f66, 0x92fd8 },
    { L"Gandalf - P2 Scandinavian", 0x92fe6, 0x93058 },
    { L"Selim - P1 Africa", 0x93066, 0x930e6 },
    { L"Hamyr - P2 Africa", 0x930e6, 0x93166 },
    { L"Hamyr Alt (Unused)", 0x93166, 0x931e6 },
    { L"Eknaton - P1 Egypt", 0x931e6, 0x93250 },
    { L"Nektas - P2 Egypt", 0x93250, 0x932ba },
    { L"Nabonedo - P1 Babylon/Akkad", 0x932d0, 0x9334a },
    { L"Sargon - P2 Babylon/Akkad", 0x9334a, 0x933c4 },
    { L"Mc-Datho - P1 Celtic", 0x933ca, 0x9342e },
    { L"Mc-Matach - P2 Celtic", 0x93436, 0x9349a },
    { L"Eteocles - P1 Greece", 0x934b6, 0x9352d },
    { L"Arakis - P2 Greece", 0x9352c, 0x935a2 },
    { L"Cypher - Boss", 0x93a3a, 0x93aaa },
};

const sDescTreeNode MWarr_A_FULL_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MWarr_A_ALL_PALETTES, ARRAYSIZE(MWarr_A_ALL_PALETTES) },
};

const sDescTreeNode MWarr_A_UNITS[] =
{
    { L"Everything",    DESC_NODETYPE_TREE, (void*)MWarr_A_FULL_COLLECTION, ARRAYSIZE(MWarr_A_FULL_COLLECTION) },
};

constexpr auto MWarr_A_NUMUNIT = ARRAYSIZE(MWarr_A_UNITS);
constexpr auto MWarr_A_EXTRALOC = MWarr_A_NUMUNIT;

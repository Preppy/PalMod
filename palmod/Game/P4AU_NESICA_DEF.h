#pragma once

struct PersonaNodeData
{
    LPCWSTR pszNodeName = L"uninit";
    UINT32 nAdjustmentFromBaseNode = 0;
};

const PersonaNodeData PersonaPaletteNodes[] =
{
    { L"Color 1",	0x0 },
    { L"Color 2",	0x2100 },
    { L"Color 3",	0x4200 },
    { L"Color 4",	0x6300 },
    { L"Color 5",	0x8400 },
    { L"Color 6",	0xA500 },
    { L"Color 7",	0xC600 },
    { L"Color 8",	0xE700 },
    { L"Color 9",	0x10800 },
    { L"Color 10",  0x12900 },
    { L"Color 11",  0x14A00 },
    { L"Color 12",  0x16B00 },
    { L"Color 13",  0x18C00 },
    { L"Color 14",  0x1AD00 },
    { L"Color 15",  0x1CE00 },
    { L"Color 16",  0x1EF00 },
    { L"Color 17",  0x21000 },
    { L"Color 18",  0x23100 },
    { L"Color 19",  0x25200 },
    { L"Color 20",  0x27300 },
    { L"Color 21",  0x29400 },
    { L"Color 22",  0x2B500 },
    { L"Color 23",  0x2D600 },
    { L"Color 24",  0x2F700 },
    { L"Color 25",  0x31800 },
    { L"Color 26",  0x33900 },
    { L"Color 27",  0x35A00 },
    { L"Color 28",  0x37B00 },
    { L"Color 29",  0x39C00 },
    { L"Color 30",  0x3BD00 },
    { L"Color 31",  0x3DE00 },
    { L"Color 32",  0x3FF00 },
};

const LPCWSTR Persona4Names[] =
{
    L"Main",
    L"Persona",
    L"Extra 1",
    L"Extra 2",
    L"Extra 3",
    L"Extra 4",
    L"Extra 5",
    L"Extra 6",
};

const LPCWSTR Persona4NamesKen[] =
{
    L"Ken - Main",
    L"Ken - Persona",
    L"Koromaru - Main",
    L"Koromaru - Persona",
    L"Extra 1",
    L"Extra 2",
    L"Extra 3",
    L"Extra 4",
};

struct PersonaFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = 0;
};

PersonaFileData PersonaCharacterData[] =
{
    //Persona 3, alphabetical
        { L"char_ag_pal.pac",    L"Aigis",                  278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ak_pal.pac",    L"Akihiko Sanada",         278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_am_pal.pac",    L"Ken Amada and Koromaru", 278560,    Persona4NamesKen, ARRAYSIZE(Persona4NamesKen),  0x2040, 0x0 },
        { L"char_el_pal.pac",    L"Elizabeth",              278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ju_pal.pac",    L"Junpei Iori",            278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_mi_pal.pac",    L"Mitsuru Kirijo",         278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_yk_pal.pac",    L"Yukari",                 278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
    //Persona 4, alphabetical
        { L"char_ce_pal.pac",    L"Chie Satonaka",          278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ka_pal.pac",    L"Kanji Tatsumi",          278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ku_pal.pac",    L"Kuma/Teddie",            278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_la_pal.pac",    L"Labrys",                 278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ls_pal.pac",    L"Shadow Labrys",          278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_nx_pal.pac",    L"Margaret",               278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_mr_pal.pac",    L"Marie",                  278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_na_pal.pac",    L"Naoto Shirogane",        278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ri_pal.pac",    L"Rise Kujikawa",          278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_no_pal.pac",    L"Sho Minazuki",           278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_nb_pal.pac",    L"Sho (Solo)",             278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_ad_pal.pac",    L"Tohru Adachi",           278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_yo_pal.pac",    L"Yosuke Hanamura",        278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_bc_pal.pac",    L"Yu Narukami",            278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },
        { L"char_yu_pal.pac",    L"Yukiko Amagi",           278560,    Persona4Names,    ARRAYSIZE(Persona4Names), 0x2040, 0x0 },

    //Unknown, doesnt follow the same format as other characters
    //    { L"char_e0_pal.pac",    L"Unknown?",           13280,     Persona4Names,    ARRAYSIZE(Persona4Names), 0x280,  0x0 },
};

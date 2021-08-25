#pragma once

#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>

enum PersonaSpriteList
{
    indexP4AUSprites_Aigis,         // 0x00
    indexP4AUSprites_Akihiko,       // 0x01
    indexP4AUSprites_Chie,          // 0x02
    indexP4AUSprites_Elizabeth,     // 0x03
    indexP4AUSprites_Junpei,        // 0x04
    indexP4AUSprites_Kanji,         // 0x05
    indexP4AUSprites_Ken,           // 0x06
    indexP4AUSprites_Labrys,        // 0x07
    indexP4AUSprites_Margaret,      // 0x08
    indexP4AUSprites_Marie,         // 0x09
    indexP4AUSprites_Mitsuru,       // 0x0a
    indexP4AUSprites_Naoto,         // 0x0b
    indexP4AUSprites_Rise,          // 0x0c
    indexP4AUSprites_Shadow,        // 0x0d
    indexP4AUSprites_Sho,           // 0x0e
    indexP4AUSprites_Solo,          // 0x0f
    indexP4AUSprites_Teddie,        // 0x10
    indexP4AUSprites_Tohru,         // 0x11
    indexP4AUSprites_Yosuke,        // 0x12
    indexP4AUSprites_Yu,            // 0x13
    indexP4AUSprites_Yukari,        // 0x14
    indexP4AUSprites_Yukiko,        // 0x15
    indexP4AUSprites_Bonus,         // 0x16
};

const UINT16 P4AU_S_IMGIDS_USED[] =
{
    indexP4AUSprites_Aigis,         // 0x00
    indexP4AUSprites_Akihiko,       // 0x01
    indexP4AUSprites_Chie,          // 0x02
    indexP4AUSprites_Elizabeth,     // 0x03
    indexP4AUSprites_Junpei,        // 0x04
    indexP4AUSprites_Kanji,         // 0x05
    indexP4AUSprites_Ken,           // 0x06
    indexP4AUSprites_Labrys,        // 0x07
    indexP4AUSprites_Margaret,      // 0x08
    indexP4AUSprites_Marie,         // 0x09
    indexP4AUSprites_Mitsuru,       // 0x0a
    indexP4AUSprites_Naoto,         // 0x0b
    indexP4AUSprites_Rise,          // 0x0c
    indexP4AUSprites_Shadow,        // 0x0d
    indexP4AUSprites_Sho,           // 0x0e
    indexP4AUSprites_Solo,          // 0x0f
    indexP4AUSprites_Teddie,        // 0x10
    indexP4AUSprites_Tohru,         // 0x11
    indexP4AUSprites_Yosuke,        // 0x12
    indexP4AUSprites_Yu,            // 0x13
    indexP4AUSprites_Yukari,        // 0x14
    indexP4AUSprites_Yukiko,        // 0x15
    indexP4AUSprites_Bonus,         // 0x16
};

struct PersonaNodeData
{
    std::wstring pszNodeName = L"uninit";
    uint32_t nAdjustmentFromBaseNode = 0;
};

std::array<PersonaNodeData, 32> PersonaPaletteNodes =
{ {
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
} };

struct Persona4PaletteData
{
    std::wstring strName;
    int16_t nImageSet = -1;
    int16_t nImageIndex = -1;
};

std::array<Persona4PaletteData, 8> Persona4PalettesDefault =
{ {
    { L"Main" },
    { L"Persona" },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesAigis =
{ {
    { L"Main", indexP4AUSprites_Aigis, 0x00 },
    { L"Persona: Athena", indexP4AUSprites_Aigis, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesAkihiko =
{ {
    { L"Main", indexP4AUSprites_Akihiko, 0x00 },
    { L"Persona: Caesar", indexP4AUSprites_Akihiko, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesKen =
{ {
    { L"Main", indexP4AUSprites_Ken, 0x00 },
    { L"Persona: Kala-Nemi (Ken)", indexP4AUSprites_Ken, 0x40 },
    { L"Koromaru - Main", indexP4AUSprites_Ken, 0x20 },
    { L"Koromaru - Persona: Cerberus", indexP4AUSprites_Ken, 0x60 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesChie =
{ {
    { L"Main", indexP4AUSprites_Chie, 0x00 },
    { L"Persona: Tomoe", indexP4AUSprites_Chie, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesElizabeth =
{ {
    { L"Main", indexP4AUSprites_Elizabeth, 0x00 },
    { L"Persona: Thanatos", indexP4AUSprites_Elizabeth, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesJunpei =
{ {
    { L"Main", indexP4AUSprites_Junpei, 0x00 },
    { L"Persona: Trismegistus", indexP4AUSprites_Junpei, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesKanji =
{ {
    { L"Main", indexP4AUSprites_Kanji, 0x00 },
    { L"Persona: Take-Mikazuchi", indexP4AUSprites_Kanji, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesLabrys =
{ {
    { L"Main", indexP4AUSprites_Labrys, 0x00 },
    { L"Persona: Ariadne", indexP4AUSprites_Labrys, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesMargaret =
{ {
    { L"Main", indexP4AUSprites_Margaret, 0x00 },
    { L"Persona: Ardha", indexP4AUSprites_Margaret, 0x20 },
    { L"Extra 1: Cu Chulainn", indexP4AUSprites_Margaret, 0x40 },
    { L"Extra 2: Yoshitsune", indexP4AUSprites_Margaret, 0x60 },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesMarie =
{ {
    { L"Main", indexP4AUSprites_Marie, 0x00 },
    { L"Persona: Kaguya", indexP4AUSprites_Marie, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesMitsuru =
{ {
    { L"Main", indexP4AUSprites_Mitsuru, 0x00 },
    { L"Persona: Artemisia", indexP4AUSprites_Mitsuru, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesNaoto =
{ {
    { L"Main", indexP4AUSprites_Naoto, 0x00 },
    { L"Persona: Sukuna-Hikona", indexP4AUSprites_Naoto, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesRise =
{ {
    { L"Main", indexP4AUSprites_Rise, 0x00 },
    { L"Persona: Himiko", indexP4AUSprites_Rise, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesShadow =
{ {
    { L"Main", indexP4AUSprites_Shadow, 0x00 },
    { L"Persona: Asterius", indexP4AUSprites_Shadow, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesSho =
{ {
    { L"Main", indexP4AUSprites_Sho, 0x00 },
    { L"Persona: Tsukiyomi", indexP4AUSprites_Sho, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4: Tsukiyomi IK", indexP4AUSprites_Sho, 0x40 },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesSolo =
{ {
    { L"Main", indexP4AUSprites_Solo, 0x00 },
    { L"Persona (None)" },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesTeddie =
{ {
    { L"Main", indexP4AUSprites_Teddie, 0x00 },
    { L"Persona: Kintoki-Douji", indexP4AUSprites_Teddie, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesTohru =
{ {
    { L"Main", indexP4AUSprites_Tohru, 0x00 },
    { L"Persona: Magatsu Izanagi", indexP4AUSprites_Tohru, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesYosuke =
{ {
    { L"Main", indexP4AUSprites_Yosuke, 0x00 },
    { L"Persona: Jiraiya", indexP4AUSprites_Yosuke, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesYu =
{ {
    { L"Main", indexP4AUSprites_Yu, 0x00 },
    { L"Persona: Izanagi", indexP4AUSprites_Yu, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3: Izanagi no Okami", indexP4AUSprites_Yu, 0x40 },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesYukari =
{ {
    { L"Main", indexP4AUSprites_Yukari, 0x00 },
    { L"Persona: Isis", indexP4AUSprites_Yukari, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

std::array<Persona4PaletteData, 8> Persona4PalettesYukiko =
{ {
    { L"Main", indexP4AUSprites_Yukiko, 0x00 },
    { L"Persona: Konohana-Sakuya", indexP4AUSprites_Yukiko, 0x20 },
    { L"Extra 1" },
    { L"Extra 2" },
    { L"Extra 3" },
    { L"Extra 4" },
    { L"Extra 5" },
    { L"Extra 6" },
} };

struct PersonaFileData
{
    std::wstring pszFileName;
    std::wstring pszCharacter;
    size_t nExpectedFileSize = 0;
    std::array<Persona4PaletteData, 8> *paletteInfo = nullptr;
    uint32_t nInitialLocation = 0;
};

std::array<PersonaFileData, 22> PersonaCharacterData =
{ {
    //Persona 3, alphabetical
        { L"char_ag_pal.pac",    L"Aigis",                  278560,    &Persona4PalettesAigis,      0x2040 },
        { L"char_ak_pal.pac",    L"Akihiko Sanada",         278560,    &Persona4PalettesAkihiko,    0x2040 },
        { L"char_am_pal.pac",    L"Ken Amada and Koromaru", 278560,    &Persona4PalettesKen,        0x2040 },
        { L"char_el_pal.pac",    L"Elizabeth",              278560,    &Persona4PalettesElizabeth,  0x2040 },
        { L"char_ju_pal.pac",    L"Junpei Iori",            278560,    &Persona4PalettesJunpei,     0x2040 },
        { L"char_mi_pal.pac",    L"Mitsuru Kirijo",         278560,    &Persona4PalettesMitsuru,    0x2040 },
        { L"char_yk_pal.pac",    L"Yukari",                 278560,    &Persona4PalettesYukari,     0x2040 },
    //Persona 4, alphabetical
        { L"char_ce_pal.pac",    L"Chie Satonaka",          278560,    &Persona4PalettesChie,       0x2040 },
        { L"char_ka_pal.pac",    L"Kanji Tatsumi",          278560,    &Persona4PalettesKanji,      0x2040 },
        { L"char_ku_pal.pac",    L"Kuma/Teddie",            278560,    &Persona4PalettesTeddie,     0x2040 },
        { L"char_la_pal.pac",    L"Labrys",                 278560,    &Persona4PalettesLabrys,     0x2040 },
        { L"char_ls_pal.pac",    L"Shadow Labrys",          278560,    &Persona4PalettesShadow,     0x2040 },
        { L"char_nx_pal.pac",    L"Margaret",               278560,    &Persona4PalettesMargaret,   0x2040 },
        { L"char_mr_pal.pac",    L"Marie",                  278560,    &Persona4PalettesMarie,      0x2040 },
        { L"char_na_pal.pac",    L"Naoto Shirogane",        278560,    &Persona4PalettesNaoto,      0x2040 },
        { L"char_ri_pal.pac",    L"Rise Kujikawa",          278560,    &Persona4PalettesRise,       0x2040 },
        { L"char_nb_pal.pac",    L"Sho Minazuki",           278560,    &Persona4PalettesSho,        0x2040 },
        { L"char_no_pal.pac",    L"Sho (Solo)",             278560,    &Persona4PalettesSolo,       0x2040 },
        { L"char_ad_pal.pac",    L"Tohru Adachi",           278560,    &Persona4PalettesTohru,      0x2040 },
        { L"char_yo_pal.pac",    L"Yosuke Hanamura",        278560,    &Persona4PalettesYosuke,     0x2040 },
        { L"char_bc_pal.pac",    L"Yu Narukami",            278560,    &Persona4PalettesYu,         0x2040 },
        { L"char_yu_pal.pac",    L"Yukiko Amagi",           278560,    &Persona4PalettesYukiko,     0x2040 },

    //Unknown, doesnt follow the same format as other characters
    //    { L"char_e0_pal.pac",    L"Unknown?",           13280,     Persona4Names,    ARRAYSIZE(Persona4Names), 0x280,  0x0 },
} };

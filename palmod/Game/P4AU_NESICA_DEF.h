#pragma once

#include <iterator>
#include <iostream>
#include <algorithm>

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

const std::vector<UINT16> P4AU_S_IMGIDS_USED =
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

const std::vector<LPCWSTR> PersonaPaletteNodes =
{
    L"Color 1",
    L"Color 2",
    L"Color 3",
    L"Color 4",
    L"Color 5",
    L"Color 6",
    L"Color 7",
    L"Color 8",
    L"Color 9",
    L"Color 10",
    L"Color 11",
    L"Color 12",
    L"Color 13",
    L"Color 14",
    L"Color 15",
    L"Color 16",
    L"Color 17",
    L"Color 18",
    L"Color 19",
    L"Color 20",
    L"Color 21",
    L"Color 22",
    L"Color 23",
    L"Color 24",
    L"Color 25",
    L"Color 26",
    L"Color 27",
    L"Color 28",
    L"Color 29",
    L"Color 30",
    L"Color 31",
    L"Color 32",
};

struct Persona4PaletteData
{
    std::wstring strName;
    int16_t nImageSet = -1;
    int16_t nImageIndex = -1;
};

const std::vector<Persona4PaletteData> Persona4PalettesDefault =
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

const std::vector<Persona4PaletteData> Persona4PalettesAigis =
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

const std::vector<Persona4PaletteData> Persona4PalettesAkihiko =
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

const std::vector<Persona4PaletteData> Persona4PalettesKen =
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

const std::vector<Persona4PaletteData> Persona4PalettesChie =
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

const std::vector<Persona4PaletteData> Persona4PalettesElizabeth =
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

const std::vector<Persona4PaletteData> Persona4PalettesJunpei =
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

const std::vector<Persona4PaletteData> Persona4PalettesKanji =
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

const std::vector<Persona4PaletteData> Persona4PalettesLabrys =
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

const std::vector<Persona4PaletteData> Persona4PalettesMargaret =
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

const std::vector<Persona4PaletteData> Persona4PalettesMarie =
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

const std::vector<Persona4PaletteData> Persona4PalettesMitsuru =
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

const std::vector<Persona4PaletteData> Persona4PalettesNaoto =
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

const std::vector<Persona4PaletteData> Persona4PalettesRise =
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

const std::vector<Persona4PaletteData> Persona4PalettesShadow =
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

const std::vector<Persona4PaletteData> Persona4PalettesSho =
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

const std::vector<Persona4PaletteData> Persona4PalettesSolo =
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

const std::vector<Persona4PaletteData> Persona4PalettesTeddie =
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

const std::vector<Persona4PaletteData> Persona4PalettesTohru =
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

const std::vector<Persona4PaletteData> Persona4PalettesYosuke =
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

const std::vector<Persona4PaletteData> Persona4PalettesYu =
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

const std::vector<Persona4PaletteData> Persona4PalettesYukari =
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

const std::vector<Persona4PaletteData> Persona4PalettesYukiko =
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
    uint32_t nExpectedFileSize = 0;
    const std::vector<Persona4PaletteData> *paletteInfo = nullptr;
    uint32_t nInitialLocation = 0;
    uint32_t nPaletteSetLength = 0;
};

const std::vector<PersonaFileData> PersonaCharacterData =
{ {
    //Persona 3, alphabetical
        { L"char\\char_ag_pal.pac",    L"Aigis",                   278560,    &Persona4PalettesAigis,      0x2040,      0x2100 },
        { L"char\\char_ak_pal.pac",    L"Akihiko Sanada",          278560,    &Persona4PalettesAkihiko,    0x2040,      0x2100 },
        { L"char\\char_am_pal.pac",    L"Ken Amada & Koromaru",    278560,    &Persona4PalettesKen,        0x2040,      0x2100 },
        { L"char\\char_el_pal.pac",    L"Elizabeth",               278560,    &Persona4PalettesElizabeth,  0x2040,      0x2100 },
        { L"char\\char_ju_pal.pac",    L"Junpei Iori",             278560,    &Persona4PalettesJunpei,     0x2040,      0x2100 },
        { L"char\\char_mi_pal.pac",    L"Mitsuru Kirijo",          278560,    &Persona4PalettesMitsuru,    0x2040,      0x2100 },
        { L"char\\char_yk_pal.pac",    L"Yukari",                  278560,    &Persona4PalettesYukari,     0x2040,      0x2100 },
        //Persona 4, alphabetical
        { L"char\\char_ce_pal.pac",    L"Chie Satonaka",           278560,    &Persona4PalettesChie,       0x2040,      0x2100 },
        { L"char\\char_ka_pal.pac",    L"Kanji Tatsumi",           278560,    &Persona4PalettesKanji,      0x2040,      0x2100 },
        { L"char\\char_ku_pal.pac",    L"Teddie/Kuma",             278560,    &Persona4PalettesTeddie,     0x2040,      0x2100 },
        { L"char\\char_la_pal.pac",    L"Labrys",                  278560,    &Persona4PalettesLabrys,     0x2040,      0x2100 },
        { L"char\\char_ls_pal.pac",    L"Shadow Labrys",           278560,    &Persona4PalettesShadow,     0x2040,      0x2100 },
        { L"char\\char_nx_pal.pac",    L"Margaret",                278560,    &Persona4PalettesMargaret,   0x2040,      0x2100 },
        { L"char\\char_mr_pal.pac",    L"Marie",                   278560,    &Persona4PalettesMarie,      0x2040,      0x2100 },
        { L"char\\char_na_pal.pac",    L"Naoto Shirogane",         278560,    &Persona4PalettesNaoto,      0x2040,      0x2100 },
        { L"char\\char_ri_pal.pac",    L"Rise Kujikawa",           278560,    &Persona4PalettesRise,       0x2040,      0x2100 },
        { L"char\\char_nb_pal.pac",    L"Sho Minazuki",            278560,    &Persona4PalettesSho,        0x2040,      0x2100 },
        { L"char\\char_no_pal.pac",    L"Sho (Solo)",              278560,    &Persona4PalettesSolo,       0x2040,      0x2100 },
        { L"char\\char_ad_pal.pac",    L"Tohru Adachi",            278560,    &Persona4PalettesTohru,      0x2040,      0x2100 },
        { L"char\\char_yo_pal.pac",    L"Yosuke Hanamura",         278560,    &Persona4PalettesYosuke,     0x2040,      0x2100 },
        { L"char\\char_bc_pal.pac",    L"Yu Narukami",             278560,    &Persona4PalettesYu,         0x2040,      0x2100 },
        { L"char\\char_yu_pal.pac",    L"Yukiko Amagi",            278560,    &Persona4PalettesYukiko,     0x2040,      0x2100 },

        //Persona 3, alphabetical
        { L"ETC\\CHSLDotV.pac",    L"Aigis (CSel)",                19154912,   &Persona4PalettesAigis,     0x191a90,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Akihiko Sanada (CSel)",       19154912,   &Persona4PalettesAkihiko,   0x24BE20,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Ken Amada & Koromaru (CSel)", 19154912,   &Persona4PalettesAkihiko,   0x2E9CD0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Elizabeth (CSel)",            19154912,   &Persona4PalettesElizabeth, 0x5577D0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Junpei Iori (CSel)",          19154912,   &Persona4PalettesJunpei,    0x5FE500,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Mitsuru Kirijo (CSel)",       19154912,   &Persona4PalettesMitsuru,   0xBA8150,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Yukari (CSel)",               19154912,   &Persona4PalettesYukari,    0xBA8150,    0x840 },
        //Persona 4, alphabetical
        { L"ETC\\CHSLDotV.pac",    L"Chie Satonaka (CSel)",        19154912,   &Persona4PalettesChie,      0x412340,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Kanji Tatsumi (CSel)",        19154912,   &Persona4PalettesKanji,     0x746950,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Teddie/Kuma (CSel)",          19154912,   &Persona4PalettesTeddie,    0x7E18E0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Labrys (CSel)",               19154912,   &Persona4PalettesLabrys,    0x90E2F0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Shadow Labrys (CSel)",        19154912,   &Persona4PalettesShadow,    0xAC5990,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Margaret (CSel)",             19154912,   &Persona4PalettesMargaret,  0xF4E5A0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Marie (CSel)",                19154912,   &Persona4PalettesMarie,     0xC857B0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Naoto Shirogane (CSel)",      19154912,   &Persona4PalettesNaoto,     0xD17BD0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Rise Kujikawa (CSel)",        19154912,   &Persona4PalettesNaoto,     0x1026140,   0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Sho Minazuki (CSel)",         19154912,   &Persona4PalettesSho,       0xDF51D0,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Sho (Solo) (CSel)",           19154912,   &Persona4PalettesSolo,      0xEB3630,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Tohru Adachi (CSel)",         19154912,   &Persona4PalettesTohru,     0xA0840 ,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Yosuke Hanamura (CSel)",      19154912,   &Persona4PalettesYosuke,    0x112DB70,   0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Yu Narukami (CSel)",          19154912,   &Persona4PalettesYu,        0x38EC60,    0x840 },
        { L"ETC\\CHSLDotV.pac",    L"Yukiko Amagi (CSel)",         19154912,   &Persona4PalettesYukiko,    0x1234000,   0x840 },

    // Unknown, doesnt follow the same format as other characters
    // { L"char_e0_pal.pac",    L"Unknown?",           13280,     Persona4Names,    ARRAYSIZE(Persona4Names), 0x280,  0x0 },
} };

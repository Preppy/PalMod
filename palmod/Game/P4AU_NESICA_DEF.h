#pragma once

#include <iterator>
#include <iostream>
#include <algorithm>
#include "P4AU_Common.h"

const std::vector<PersonaFileData> PersonaCharacterData =
{ {
    //Alphabetical
    { L"char\\char_ag_pal.pac",    L"Aigis",                          278560,    &Persona4PalettesAigis,      0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Aigis (CharaSelect)",            19154912,  &Persona4PalettesAigisCSEL,  0x191a90,    0x840 },
    { L"char\\char_ak_pal.pac",    L"Akihiko Sanada",                 278560,    &Persona4PalettesAkihiko,    0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Akihiko Sanada (CharaSelect)",   19154912,  &Persona4PalettesAkihikoCSEL,0x24BE20,    0x840 },
    { L"char\\char_ce_pal.pac",    L"Chie Satonaka",                  278560,    &Persona4PalettesChie,       0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Chie Satonaka (CharaSelect)",    19154912,  &Persona4PalettesChieCSEL,   0x412340,    0x840 },
    { L"char\\char_el_pal.pac",    L"Elizabeth",                      278560,    &Persona4PalettesElizabeth,  0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Elizabeth (CharaSelect)",        19154912,  &Persona4PalettesElizabethCSEL,0x5577D0,  0x840 },
    { L"char\\char_ju_pal.pac",    L"Junpei Iori",                    278560,    &Persona4PalettesJunpei,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Junpei Iori (CharaSelect)",      19154912,  &Persona4PalettesJunpeiCSEL, 0x5FE500,    0x840 },
    { L"char\\char_ka_pal.pac",    L"Kanji Tatsumi",                  278560,    &Persona4PalettesKanji,      0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Kanji Tatsumi (CharaSelect)",    19154912,  &Persona4PalettesKanjiCSEL,  0x746950,    0x840 },
    { L"char\\char_am_pal.pac",    L"Ken Amada & Koromaru",           278560,    &Persona4PalettesKen,        0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Ken Amada & Koromaru (CharaSelect)",19154912, &Persona4PalettesKenCSEL, 0x2E9CD0,    0x840 },
    { L"char\\char_la_pal.pac",    L"Labrys",                         278560,    &Persona4PalettesLabrys,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Labrys (CharaSelect)",           19154912,  &Persona4PalettesLabrysCSEL, 0x90E2F0,    0x840 },
    { L"char\\char_nx_pal.pac",    L"Margaret",                       278560,    &Persona4PalettesMargaret,   0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Margaret (CharaSelect)",         19154912,  &Persona4PalettesMargaretCSEL,0xF4E5A0,   0x840 },
    { L"char\\char_mr_pal.pac",    L"Marie",                          278560,    &Persona4PalettesMarie,      0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Marie (CharaSelect)",            19154912,  &Persona4PalettesMarieCSEL,  0xC857B0,    0x840 },
    { L"char\\char_mi_pal.pac",    L"Mitsuru Kirijo",                 278560,    &Persona4PalettesMitsuru,    0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Mitsuru Kirijo (CharaSelect)",   19154912,  &Persona4PalettesMitsuruCSEL,0xBA8150,    0x840 },
    { L"char\\char_na_pal.pac",    L"Naoto Shirogane",                278560,    &Persona4PalettesNaoto,      0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Naoto Shirogane (CharaSelect)",  19154912,  &Persona4PalettesNaotoCSEL,  0xD17BD0,    0x840 },
    { L"char\\char_ri_pal.pac",    L"Rise Kujikawa",                  278560,    &Persona4PalettesRise,       0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Rise Kujikawa (CharaSelect)",    19154912,  &Persona4PalettesRiseCSEL,   0x1026140,   0x840 },
    { L"char\\char_ls_pal.pac",    L"Shadow Labrys",                  278560,    &Persona4PalettesShadow,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Shadow Labrys (CharaSelect)",    19154912,  &Persona4PalettesShadowCSEL, 0xAC5990,    0x840 },
    { L"char\\char_no_pal.pac",    L"Sho (Solo)",                     278560,    &Persona4PalettesSolo,       0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Sho (Solo) (CharaSelect)",       19154912,  &Persona4PalettesSoloCSEL,   0xEB3630,    0x840 },
    { L"char\\char_nb_pal.pac",    L"Sho Minazuki",                   278560,    &Persona4PalettesSho,        0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Sho Minazuki (CharaSelect)",     19154912,  &Persona4PalettesShoCSEL,    0xDF51D0,    0x840 },
    { L"char\\char_ku_pal.pac",    L"Teddie/Kuma",                    278560,    &Persona4PalettesTeddie,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Teddie/Kuma (CharaSelect)",      19154912,  &Persona4PalettesTeddieCSEL, 0x7E18E0,    0x840 },
    { L"char\\char_ad_pal.pac",    L"Tohru Adachi",                   278560,    &Persona4PalettesTohru,      0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Tohru Adachi (CharaSelect)",     19154912,  &Persona4PalettesTohruCSEL,  0xA0840 ,    0x840 },
    { L"char\\char_yo_pal.pac",    L"Yosuke Hanamura",                278560,    &Persona4PalettesYosuke,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Yosuke Hanamura (CharaSelect)",  19154912,  &Persona4PalettesYosukeCSEL, 0x112DB70,   0x840 },
    { L"char\\char_bc_pal.pac",    L"Yu Narukami",                    278560,    &Persona4PalettesYu,         0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Yu Narukami (CharaSelect)",      19154912,  &Persona4PalettesYuCSEL,     0x38EC60,    0x840 },
    { L"char\\char_yk_pal.pac",    L"Yukari Takeba",                  278560,    &Persona4PalettesYukari,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Yukari Takeba (CharaSelect)",    19154912,  &Persona4PalettesYukariCSEL, 0x10BCCD0,   0x840 },
    { L"char\\char_yu_pal.pac",    L"Yukiko Amagi",                   278560,    &Persona4PalettesYukiko,     0x2040,      0x2100 },
    { L"ETC\\CHSLDotV.pac",        L"Yukiko Amagi (CharaSelect)",     19154912,  &Persona4PalettesYukikoCSEL, 0x1234000,   0x840 },

    //Unknown, doesnt follow the same format as other characters
    //{ L"char_e0_pal.pac",    L"Unknown?",           13280,     Persona4Names,    ARRAYSIZE(Persona4Names), 0x280,  0x0 },
} };

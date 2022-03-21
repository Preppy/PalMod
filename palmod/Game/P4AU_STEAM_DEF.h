#pragma once

#include <iterator>
#include <iostream>
#include <algorithm>
#include "P4AU_Common.h"

const std::vector<PersonaFileData> PersonaCharacterData =
{ {
      //Alphabetical
    { L"data\\char\\char_ag_pal.pac",    L"Aigis",                          282672,    &Persona4PalettesAigis,      0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Aigis (CharaSelect)",            19190960,  &Persona4PalettesAigisCSEL,  0x192860,    0x840 },
    { L"data\\char\\char_ak_pal.pac",    L"Akihiko Sanada",                 282672,    &Persona4PalettesAkihiko,    0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Akihiko Sanada (CharaSelect)",   19190960,  &Persona4PalettesAkihikoCSEL,0x24D210,    0x840 },
    { L"data\\char\\char_ce_pal.pac",    L"Chie Satonaka",                  282672,    &Persona4PalettesChie,       0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Chie Satonaka (CharaSelect)",    19190960,  &Persona4PalettesChieCSEL,   0x4148D0,    0x840 },
    { L"data\\char\\char_el_pal.pac",    L"Elizabeth",                      282672,    &Persona4PalettesElizabeth,  0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Elizabeth (CharaSelect)",        19190960,  &Persona4PalettesElizabethCSEL,0x55A470,  0x840 },
    { L"data\\char\\char_ju_pal.pac",    L"Junpei Iori",                    282672,    &Persona4PalettesJunpei,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Junpei Iori (CharaSelect)",      19190960,  &Persona4PalettesJunpeiCSEL, 0x6017A0,    0x840 },
    { L"data\\char\\char_ka_pal.pac",    L"Kanji Tatsumi",                  282672,    &Persona4PalettesKanji,      0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Kanji Tatsumi (CharaSelect)",    19190960,  &Persona4PalettesKanjiCSEL,  0x74A2C0,    0x840 },
    { L"data\\char\\char_am_pal.pac",    L"Ken Amada & Koromaru",           282672,    &Persona4PalettesKen,        0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Ken Amada & Koromaru (CharaSelect)",19190960, &Persona4PalettesKenCSEL,  0x2EB630,    0x840 },
    { L"data\\char\\char_la_pal.pac",    L"Labrys",                         282672,    &Persona4PalettesLabrys,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Labrys (CharaSelect)",           19190960,  &Persona4PalettesLabrysCSEL, 0x912950,    0x840 },
    { L"data\\char\\char_nx_pal.pac",    L"Margaret",                       282672,    &Persona4PalettesMargaret,   0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Margaret (CharaSelect)",         19190960,  &Persona4PalettesMargaretCSEL,0xF558E0,   0x840 },
    { L"data\\char\\char_mr_pal.pac",    L"Marie",                          282672,    &Persona4PalettesMarie,      0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Marie (CharaSelect)",            19190960,  &Persona4PalettesMarieCSEL,  0xC8B140,    0x840 },
    { L"data\\char\\char_mi_pal.pac",    L"Mitsuru Kirijo",                 282672,    &Persona4PalettesMitsuru,    0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Mitsuru Kirijo (CharaSelect)",   19190960,  &Persona4PalettesMitsuruCSEL,0xBAD4A0,    0x840 },
    { L"data\\char\\char_na_pal.pac",    L"Naoto Shirogane",                282672,    &Persona4PalettesNaoto,      0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Naoto Shirogane (CharaSelect)",  19190960,  &Persona4PalettesNaotoCSEL,  0xD1DBF0,    0x840 },
    { L"data\\char\\char_ri_pal.pac",    L"Rise Kujikawa",                  282672,    &Persona4PalettesRise,       0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Rise Kujikawa (CharaSelect)",    19190960,  &Persona4PalettesRiseCSEL,   0x102DB50,   0x840 },
    { L"data\\char\\char_ls_pal.pac",    L"Shadow Labrys",                  282672,    &Persona4PalettesShadow,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Shadow Labrys (CharaSelect)",    19190960,  &Persona4PalettesShadowCSEL, 0xACA6A0,    0x840 },
    { L"data\\char\\char_no_pal.pac",    L"Sho (Solo)",                     282672,    &Persona4PalettesSolo,       0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Sho (Solo) (CharaSelect)",       19190960,  &Persona4PalettesSoloCSEL,   0xEBA380,    0x840 },
    { L"data\\char\\char_nb_pal.pac",    L"Sho Minazuki",                   282672,    &Persona4PalettesSho,        0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Sho Minazuki (CharaSelect)",     19190960,  &Persona4PalettesShoCSEL,    0xDFB8A0,    0x840 },
    { L"data\\char\\char_ku_pal.pac",    L"Teddie/Kuma",                    282672,    &Persona4PalettesTeddie,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Teddie/Kuma (CharaSelect)",      19190960,  &Persona4PalettesTeddieCSEL, 0x7E58C0,    0x840 },
    { L"data\\char\\char_ad_pal.pac",    L"Tohru Adachi",                   282672,    &Persona4PalettesTohru,      0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Tohru Adachi (CharaSelect)",     19190960,  &Persona4PalettesTohruCSEL,  0xA0FB0,     0x840 },
    { L"data\\char\\char_yo_pal.pac",    L"Yosuke Hanamura",                282672,    &Persona4PalettesYosuke,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Yosuke Hanamura (CharaSelect)",  19190960,  &Persona4PalettesYosukeCSEL, 0x1136110,   0x840 },
    { L"data\\char\\char_bc_pal.pac",    L"Yu Narukami",                    282672,    &Persona4PalettesYu,         0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Yu Narukami (CharaSelect)",      19190960,  &Persona4PalettesYuCSEL,     0x390BE0,    0x840 },
    { L"data\\char\\char_yk_pal.pac",    L"Yukari Takeba",                  282672,    &Persona4PalettesYukari,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Yukari Takeba (CharaSelect)",    19190960,  &Persona4PalettesYukariCSEL, 0x10C4CD0,   0x840 },
    { L"data\\char\\char_yu_pal.pac",    L"Yukiko Amagi",                   282672,    &Persona4PalettesYukiko,     0x3040,      0x2100 },
    { L"data\\ETC\\CHSLDotV.pac",        L"Yukiko Amagi (CharaSelect)",     19190960,  &Persona4PalettesYukikoCSEL, 0x123CCC0,   0x840 },
} };

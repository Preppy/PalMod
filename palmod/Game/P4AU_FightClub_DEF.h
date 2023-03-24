#pragma once

#include "P4AU_Common.h"

const std::vector<sGCBUPF_BasicFileData> PersonaCharacterData_FightClub =
{
    //Alphabetical
    { L"char\\char_ag_pal.pac",    L"Aigis",                          0x44020,    PersonaNodes_Normal, Persona4PalettesAigis,      0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Aigis (CharaSelect)",            0x115df10,  PersonaNodes_CSel, Persona4PalettesAigisCSEL,  0x174090 }, // 0x181710 // 0x174090? // 1da00
    { L"char\\char_ak_pal.pac",    L"Akihiko Sanada",                 0x44020,    PersonaNodes_Normal, Persona4PalettesAkihiko,    0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Akihiko Sanada (CharaSelect)",   0x115df10,  PersonaNodes_CSel, Persona4PalettesAkihikoCSEL, 0x234860 }, // 0x234860 // 175c0
    { L"char\\char_ce_pal.pac",    L"Chie Satonaka",                  0x44020,    PersonaNodes_Normal, Persona4PalettesChie,       0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Chie Satonaka (CharaSelect)",    0x115df10,  PersonaNodes_CSel, Persona4PalettesChieCSEL,   0x3e2e20 }, // 0x3e2e20 // 0x2F520
    { L"char\\char_el_pal.pac",    L"Elizabeth",                      0x44020,    PersonaNodes_Normal, Persona4PalettesElizabeth,  0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Elizabeth (CharaSelect)",        0x115df10,  PersonaNodes_CSel, Persona4PalettesElizabethCSEL,0x4f2090 },
    { L"char\\char_ju_pal.pac",    L"Junpei Iori",                    0x44020,    PersonaNodes_Normal, Persona4PalettesJunpei,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Junpei Iori (CharaSelect)",      0x115df10,  PersonaNodes_CSel, Persona4PalettesJunpeiCSEL, 0x59f310 },
    { L"char\\char_ka_pal.pac",    L"Kanji Tatsumi",                  0x44020,    PersonaNodes_Normal, Persona4PalettesKanji,      0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Kanji Tatsumi (CharaSelect)",    0x115df10,  PersonaNodes_CSel, Persona4PalettesKanjiCSEL,  0x6e9fb0 },
    { L"char\\char_am_pal.pac",    L"Ken Amada & Koromaru",           0x44020,    PersonaNodes_Normal, Persona4PalettesKen,        0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Ken Amada & Koromaru (CharaSelect)", 0x115df10, PersonaNodes_CSel, Persona4PalettesKenCSEL,  0x2cf910 },
    { L"char\\char_la_pal.pac",    L"Labrys",                         0x44020,    PersonaNodes_Normal, Persona4PalettesLabrys,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Labrys (CharaSelect)",           0x115df10,  PersonaNodes_CSel, Persona4PalettesLabrysCSEL, 0x8905e0 },
    { L"char\\char_nx_pal.pac",    L"Margaret",                       0x44020,    PersonaNodes_Normal, Persona4PalettesMargaret,   0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Margaret (CharaSelect)",         0x115df10,  PersonaNodes_CSel, Persona4PalettesMargaretCSEL,0xe8fd80 },
    { L"char\\char_mr_pal.pac",    L"Marie",                          0x44020,    PersonaNodes_Normal, Persona4PalettesMarie,      0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Marie (CharaSelect)",            0x115df10,  PersonaNodes_CSel, Persona4PalettesMarieCSEL,  0xbe0650 },
    { L"char\\char_mi_pal.pac",    L"Mitsuru Kirijo",                 0x44020,    PersonaNodes_Normal, Persona4PalettesMitsuru,    0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Mitsuru Kirijo (CharaSelect)",   0x115df10,  PersonaNodes_CSel, Persona4PalettesMitsuruCSEL, 0xb1a990 },
    { L"char\\char_na_pal.pac",    L"Naoto Shirogane",                0x44020,    PersonaNodes_Normal, Persona4PalettesNaoto,      0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Naoto Shirogane (CharaSelect)",  0x115df10,  PersonaNodes_CSel, Persona4PalettesNaotoCSEL,  0xc6b270 },
    { L"char\\char_ri_pal.pac",    L"Rise Kujikawa",                  0x44020,    PersonaNodes_Normal, Persona4PalettesRise,       0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Rise Kujikawa (CharaSelect)",    0x115df10,  PersonaNodes_CSel, Persona4PalettesRiseCSEL,   0xf687d0 },
    { L"char\\char_ls_pal.pac",    L"Shadow Labrys",                  0x44020,    PersonaNodes_Normal, Persona4PalettesShadow,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Shadow Labrys (CharaSelect)",    0x115df10,  PersonaNodes_CSel, Persona4PalettesShadowCSEL, 0xa45400 },
    { L"char\\char_no_pal.pac",    L"Sho (Solo)",                     0x44020,    PersonaNodes_Normal, Persona4PalettesSolo,       0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Sho (Solo) (CharaSelect)",       0x115df10,  PersonaNodes_CSel, Persona4PalettesSoloCSEL,   0xe08180 },
    { L"char\\char_nb_pal.pac",    L"Sho Minazuki",                   0x44020,    PersonaNodes_Normal, Persona4PalettesSho,        0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Sho Minazuki (CharaSelect)",     0x115df10,  PersonaNodes_CSel, Persona4PalettesShoCSEL,    0xd4ee90 },
    { L"char\\char_ku_pal.pac",    L"Teddie/Kuma",                    0x44020,    PersonaNodes_Normal, Persona4PalettesTeddie,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Teddie/Kuma (CharaSelect)",      0x115df10,  PersonaNodes_CSel, Persona4PalettesTeddieCSEL, 0x773c90 },
    { L"char\\char_ad_pal.pac",    L"Tohru Adachi",                   0x44020,    PersonaNodes_Normal, Persona4PalettesTohru,      0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Tohru Adachi (CharaSelect)",     0x115df10,  PersonaNodes_CSel, Persona4PalettesTohruCSEL,  0x90990 },
    { L"char\\char_yo_pal.pac",    L"Yosuke Hanamura",                0x44020,    PersonaNodes_Normal, Persona4PalettesYosuke,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Yosuke Hanamura (CharaSelect)",  0x115df10,  PersonaNodes_CSel, Persona4PalettesYosukeCSEL, 0x1057880 },
    { L"char\\char_bc_pal.pac",    L"Yu Narukami",                    0x44020,    PersonaNodes_Normal, Persona4PalettesYu,         0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Yu Narukami (CharaSelect)",      0x115df10,  PersonaNodes_CSel, Persona4PalettesYuCSEL,     0x372300 },
    { L"char\\char_yk_pal.pac",    L"Yukari Takeba",                  0x44020,    PersonaNodes_Normal, Persona4PalettesYukari,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Yukari Takeba (CharaSelect)",    0x115df10,  PersonaNodes_CSel, Persona4PalettesYukariCSEL, 0xfecc60 },
    { L"char\\char_yu_pal.pac",    L"Yukiko Amagi",                   0x44020,    PersonaNodes_Normal, Persona4PalettesYukiko,     0x2040 },
    { L"ETC\\CHSLDotV.pac",        L"Yukiko Amagi (CharaSelect)",     0x115df10,  PersonaNodes_CSel, Persona4PalettesYukikoCSEL, 0x114d730 },

    //Unknown, doesnt follow the same format as other characters
    //{ L"char_e0_pal.pac",    L"Unknown?",           13280,     Persona4Names,    ARRAYSIZE(Persona4Names), 0x280,  0x0 },
};

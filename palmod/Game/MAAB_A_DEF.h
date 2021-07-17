#pragma once

#include "MAAB_Common.h"

struct MAABFileData
{
    LPCWSTR pszFileName = nullptr;
    LPCWSTR pszCharacter = nullptr;
    LPCWSTR pszNodeName = nullptr;
    UINT32 nExpectedFileSize = 0;
    const LPCWSTR* ppszPaletteList = nullptr;
    UINT32 nPaletteListSize = 0;
    UINT32 nInitialLocation = 0;
    UINT32 nSpriteIndex = -1;
    const sGame_PaletteDataset* prgExtraPalettes = nullptr;
    UINT16 nCountExtras = 0;
};

MAABFileData MAAB_A_CharacterData[] =
{
    //Alphabetical by character name, not by file name
    { L"act\\chara\\chara_05_00.pal",       L"Biscarvert",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_01_00.pal",       L"Blade Protector Arthur",  nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_06_00.pal",       L"Eternal Flame",           nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_04_00.pal",       L"Hybrid Nimue",            nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_09_00.pal",       L"Iai Arthur",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_0C_00.pal",       L"Iori Yagami",             nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_0A_00.pal",       L"Koume Sakiyama",          nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira},
    //Extra
    { L"act\\chara\\chara_0As_00.pal",      L"Koume Sakiyama Extras",   nullptr,                        65552,    MAABPaletteNamesNormal,   ARRAYSIZE(MAABPaletteNamesNormal), 0x10, },

    { L"act\\chara\\chara_08_00.pal",       L"Riesz",                   nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_07_00.pal",       L"Snow White",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_02_00.pal",       L"Thief Arthur",            nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_00_00.pal",       L"Twinblade Arthur",        nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_0B_00.pal",       L"Wildcat Arthur",          nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_02_00.pal",       L"Zechs Siegfried",         nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },

    //Support
    { L"act\\partner\\partner_11_00.pal",   L"Support Knight",          L"Clone Aife",                  65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_1C_00.pal",   L"Support Knight",          L"Clone Azia Kriemhild",        65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_12_00.pal",   L"Support Knight",          L"Clone Cuchulainn",            65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_0E_00.pal",   L"Support Knight",          L"Clone Diva Arthur",           65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_04_00.pal",   L"Support Knight",          L"Clone Elle",                  65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_02_00.pal",   L"Support Knight",          L"Clone Fay",                   65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_03_00.pal",   L"Support Knight",          L"Clone Lifee",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_01_00.pal",   L"Support Knight",          L"Clone Magic Guard Arthur",    65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_0C_00.pal",   L"Support Knight",          L"Clone Mercenary Arthur",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_0D_00.pal",   L"Support Knight",          L"Clone Merchant Arthur",       65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_13_00.pal",   L"Support Knight",          L"Clone Pharsalia",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_0F_00.pal",   L"Support Knight",          L"Clone Scathach",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_00_00.pal",   L"Support Knight",          L"Clone Techno-Smith Arthur",   65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_10_00.pal",   L"Support Knight",          L"Clone Uathach",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_1B_00.pal",   L"Support Knight",          L"Foible Elle",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_0A_00.pal",   L"Support Knight",          L"Monarch Constantine",         65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_1E_00.pal",   L"Support Knight",          L"Otherworldly Akira Ono",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_1D_00.pal",   L"Support Knight",          L"Otherworldly Hawkeye",        65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_08_00.pal",   L"Support Knight",          L"Ruler Supreme Guinevere",     65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_14_00.pal",   L"Support Knight",          L"Summer Evaine",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_17_00.pal",   L"Support Knight",          L"Supporter Claire",            65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_15_00.pal",   L"Support Knight",          L"Supporter Enide",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_07_00.pal",   L"Support Knight",          L"Type I Galahad",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_06_00.pal",   L"Support Knight",          L"Type I Gawain",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_05_00.pal",   L"Support Knight",          L"Type I Lancelot",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_09_00.pal",   L"Support Knight",          L"Type I Mordred",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_19_00.pal",   L"Support Knight",          L"Type II Balin",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_0B_00.pal",   L"Support Knight",          L"Type II Peridod",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_18_00.pal",   L"Support Knight",          L"Type II Tor",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_1A_00.pal",   L"Support Knight",          L"Unique Little Grey",          65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
    { L"act\\partner\\partner_16_00.pal",   L"Support Knight",          L"Woeful Princess Kagura",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  },
};

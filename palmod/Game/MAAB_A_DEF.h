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
    { L"act\\chara\\chara_0A_00.pal",       L"Koume Sakiyama",          nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    //{ L"act\\chara\\chara_0As_00.pal",      L"Koume Sakiyama",          L"Extra Palettes",              65552,         0x10, 0x810, indexFrenchBreadSprites_DBFCI_Akira, 0x0,},
    { L"act\\chara\\chara_08_00.pal",       L"Riesz",                   nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_07_00.pal",       L"Snow White",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_02_00.pal",       L"Thief Arthur",            nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_00_00.pal",       L"Twinblade Arthur",        nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_0B_00.pal",       L"Wildcat Arthur",          nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },
    { L"act\\chara\\chara_02_00.pal",       L"Zechs Siegfried",         nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10,  indexFrenchBreadSprites_DBFCI_Akira },

    //Support
    { L"act\\partner\\partner_11_00.pal",   L"Support",                 L"Clone Aife",                  65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_1C_00.pal",   L"Support",                 L"Clone Azia Kriemhild",        65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_12_00.pal",   L"Support",                 L"Clone Cuchulainn",            65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_0E_00.pal",   L"Support",                 L"Clone Diva Arthur",           65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_04_00.pal",   L"Support",                 L"Clone Elle",                  65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_02_00.pal",   L"Support",                 L"Clone Fay",                   65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_03_00.pal",   L"Support",                 L"Clone Lifee",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_01_00.pal",   L"Support",                 L"Clone Magic Guard Arthur",    65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_0C_00.pal",   L"Support",                 L"Clone Mercenary Arthur",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_0D_00.pal",   L"Support",                 L"Clone Merchant Arthur",       65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_13_00.pal",   L"Support",                 L"Clone Pharsalia",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_0F_00.pal",   L"Support",                 L"Clone Scathach",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_00_00.pal",   L"Support",                 L"Clone Techno-Smith Arthur",   65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_10_00.pal",   L"Support",                 L"Clone Uathach",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_1B_00.pal",   L"Support",                 L"Foible Elle",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_0A_00.pal",   L"Support",                 L"Monarch Constantine",         65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_1E_00.pal",   L"Support",                 L"Otherworldly Akira Ono",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_1D_00.pal",   L"Support",                 L"Otherworldly Hawkeye",        65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
    { L"act\\partner\\partner_08_00.pal",   L"Support",                 L"Ruler Supreme Guinevere",     65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10,  indexFrenchBreadSprites_DBFCI_Akira,},
};

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
    UINT32 nSpriteUnitIndex = -1;
    UINT32 nSpriteImageIndex = 0x00;
    const sGame_PaletteDataset* prgExtraPalettes = nullptr;
    UINT16 nCountExtras = 0;
};

MAABFileData MAAB_A_CharacterData[] =
{
    //Alphabetical by character name, not by file name
    { L"act\\chara\\chara_05_00.pal",       L"Bisclavret",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Bisclavret },
    { L"act\\chara\\chara_01_00.pal",       L"Blade Protector Arthur",  nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_BladeProtector },
    { L"act\\chara\\chara_06_00.pal",       L"Eternal Flame",           nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_EternalFlame },
    { L"act\\chara\\chara_04_00.pal",       L"Hybrid Nimue",            nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Nimue },
    { L"act\\chara\\chara_09_00.pal",       L"Iai Arthur",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_IaiArthur },
    { L"act\\chara\\chara_0C_00.pal",       L"Iori Yagami",             nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_IoriYagami },
    { L"act\\chara\\chara_0A_00.pal",       L"Koume Sakiyama",          nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume},
    { L"act\\chara\\chara_08_00.pal",       L"Riesz",                   nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Riesz },
    { L"act\\chara\\chara_07_00.pal",       L"Snow White",              nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite },
    { L"act\\chara\\chara_02_00.pal",       L"Thief Arthur",            nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Thief },
    { L"act\\chara\\chara_00_00.pal",       L"Twinblade Arthur",        nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Twinblade },
    { L"act\\chara\\chara_0B_00.pal",       L"Wildcat Arthur",          nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Wildcat },
    { L"act\\chara\\chara_03_00.pal",       L"Zechs Siegfried",         nullptr,                        65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Zechs },

    //Extras
    { L"act\\chara\\chara_05s_00.pal",      L"Bisclavret Extra",        nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Bisclavret, 0x08 },
    { L"act\\chara\\chara_06s_00.pal",      L"Eternal Flame Extra",     nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_EternalFlame, 0x08 },
    { L"act\\chara\\chara_04s_00.pal",      L"Hybrid Nimue Extra",      nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Nimue, 0x08 },
    { L"act\\chara\\chara_09s_00.pal",      L"Iai Arthur Extra",        nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_IaiArthur, 0x08 },
    { L"act\\chara\\chara_09s_01.pal",      L"Iai Arthur Nyneue",       nullptr,                       65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_IaiArthur, 0x09 },
    { L"act\\chara\\chara_09p_01.pal",      L"Iai Arthur Cat",          nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Bonus, 0x00 },
    { L"act\\chara\\chara_0As_00.pal",      L"Koume Sakiyama Extra",    nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x08 },
    { L"act\\chara\\chara_0As_01.pal",      L"Koume March Hare",        nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x0b },
    { L"act\\chara\\chara_0As_02.pal",      L"Koume Tri-Horn",          nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x0d },
    { L"act\\chara\\chara_0As_03.pal",      L"Koume Stolas",            nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x0c },
    { L"act\\chara\\chara_0As_04.pal",      L"Koume Fia",               nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x0e },
    { L"act\\chara\\chara_0As_05.pal",      L"Koume Eligos",            nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x0a },
    { L"act\\chara\\chara_0As_06.pal",      L"Koume Dantalion",         nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x09 },
    { L"act\\chara\\chara_0As_07.pal",      L"Koume Wadatsumi",         nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Koume, 0x0f },
    { L"act\\chara\\chara_08s_00.pal",      L"Riesz Extra",             nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Riesz, 0x08 },
    { L"act\\chara\\chara_07s_00.pal",      L"Snow White Extra",        nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x08 },
    { L"act\\chara\\chara_07p_00.pal",      L"Snow White Blue Dwarve",  nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_01.pal",      L"Snow White White Dwarve", nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_02.pal",      L"Snow White Green Dwarve", nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_03.pal",      L"Snow White Brown Dwarve", nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_04.pal",      L"Snow White Gray Dwarve",  nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_05.pal",      L"Snow White Pink Dwarve",  nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_07p_06.pal",      L"Snow White Red Dwarve",   nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_SnowWhite, 0x09 },
    { L"act\\chara\\chara_02s_00.pal",      L"Thief Arthur Extra",      nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Thief, 0x08 },
    { L"act\\chara\\chara_00s_01.pal",      L"Twinblade Arthur Extra",  nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Twinblade, 0x08 },
    { L"act\\chara\\chara_00s_00.pal",      L"Twinblade Arthur Nimane", nullptr,                       65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Twinblade, 0x09  },
    { L"act\\chara\\chara_00p_00.pal",      L"Twinblade Arthur Cats",   nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Bonus, 0x00 },
    { L"act\\chara\\chara_0Bs_02.pal",      L"Wildcat Arthur Extra",    nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Wildcat, 0x08 },
    { L"act\\chara\\chara_0Bs_00.pal",      L"Wildcat Arthur Coupy",    nullptr,                       65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Wildcat, 0x09 },
    { L"act\\chara\\chara_0Bs_01.pal",      L"Wildcat Arthur Angelic Disaster",   nullptr,             65552,    MAABPaletteNamesNormal,    ARRAYSIZE(MAABPaletteNamesNormal), 0x10, indexArcanaSprites_Wildcat, 0x0a },


    //Support
    { L"act\\partner\\partner_11_00.pal",   L"Support Knight",          L"Clone Aife",                  65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x01 },
    { L"act\\partner\\partner_1C_00.pal",   L"Support Knight",          L"Clone Azia Kriemhild",        65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x02 },
    { L"act\\partner\\partner_12_00.pal",   L"Support Knight",          L"Clone Cuchulainn",            65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x03 },
    { L"act\\partner\\partner_0E_00.pal",   L"Support Knight",          L"Clone Diva Arthur",           65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x04 },
    { L"act\\partner\\partner_04_00.pal",   L"Support Knight",          L"Clone Elle",                  65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x05 },
    { L"act\\partner\\partner_02_00.pal",   L"Support Knight",          L"Clone Fay",                   65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x06 },
    { L"act\\partner\\partner_03_00.pal",   L"Support Knight",          L"Clone Lifee",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x07 },
    { L"act\\partner\\partner_01_00.pal",   L"Support Knight",          L"Clone Magic Guard Arthur",    65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x08 },
    { L"act\\partner\\partner_0C_00.pal",   L"Support Knight",          L"Clone Mercenary Arthur",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x09 },
    { L"act\\partner\\partner_0D_00.pal",   L"Support Knight",          L"Clone Merchant Arthur",       65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x12 },
    { L"act\\partner\\partner_13_00.pal",   L"Support Knight",          L"Clone Pharsalia",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x0a },
    { L"act\\partner\\partner_0F_00.pal",   L"Support Knight",          L"Clone Scathach",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x0b },
    { L"act\\partner\\partner_00_00.pal",   L"Support Knight",          L"Clone Techno-Smith Arthur",   65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, -1 }, // not available yet
    { L"act\\partner\\partner_10_00.pal",   L"Support Knight",          L"Clone Uathach",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x0c },
    { L"act\\partner\\partner_1B_00.pal",   L"Support Knight",          L"Foible Elle",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x0e },
    { L"act\\partner\\partner_0A_00.pal",   L"Support Knight",          L"Monarch Constantine",         65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x0d },
    { L"act\\partner\\partner_1E_00.pal",   L"Support Knight",          L"Otherworldly Akira Ono",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x00 },
    { L"act\\partner\\partner_1D_00.pal",   L"Support Knight",          L"Otherworldly Hawkeye",        65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x10 },
    { L"act\\partner\\partner_08_00.pal",   L"Support Knight",          L"Ruler Supreme Guinevere",     65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x0f },
    { L"act\\partner\\partner_14_00.pal",   L"Support Knight",          L"Summer Evaine",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x14 },
    { L"act\\partner\\partner_17_00.pal",   L"Support Knight",          L"Supporter Claire",            65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x15 },
    { L"act\\partner\\partner_15_00.pal",   L"Support Knight",          L"Supporter Enide",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x16 },
    { L"act\\partner\\partner_07_00.pal",   L"Support Knight",          L"Type I Galahad",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x17 },
    { L"act\\partner\\partner_06_00.pal",   L"Support Knight",          L"Type I Gawain",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x18 },
    { L"act\\partner\\partner_05_00.pal",   L"Support Knight",          L"Type I Lancelot",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x1c },
    { L"act\\partner\\partner_09_00.pal",   L"Support Knight",          L"Type I Mordred",              65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x1d },
    { L"act\\partner\\partner_19_00.pal",   L"Support Knight",          L"Type II Balin",               65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x19 },
    { L"act\\partner\\partner_0B_00.pal",   L"Support Knight",          L"Type II Peridod",             65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x1a },
    { L"act\\partner\\partner_18_00.pal",   L"Support Knight",          L"Type II Tor",                 65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x1b },
    { L"act\\partner\\partner_1A_00.pal",   L"Support Knight",          L"Unique Little Grey",          65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x11 },
    { L"act\\partner\\partner_16_00.pal",   L"Support Knight",          L"Woeful Princess Kagura",      65552,    MAABPaletteNamesSupport,   ARRAYSIZE(MAABPaletteNamesSupport), 0x10, indexArcanaSprites_Support, 0x13 },
};

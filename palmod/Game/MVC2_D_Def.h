#pragma once
#include "Default.h"

// Number of colors per each palette
constexpr UINT16 MVC2_D_PALSZ = 16;

constexpr UINT16 EXTRA_START = 0x0F00;
constexpr UINT16 EXTRA_END = 0xFFFF;

// 59 characters, including the three Abyss forms
constexpr auto MVC2_D_NUMUNIT = 59;
// add one for the team view
constexpr auto MVC2_D_NUMUNIT_WITH_TEAMVIEW = MVC2_D_NUMUNIT + 1;

// Extras for a character are located at an zero-based offset of (6 colors * 8 base palettes)
extern size_t EXTRA_OMNI; // = default of 47:  (8 * 6) - 1;
constexpr auto MVC2_D_TEAMVIEW_LOCATION = MVC2_D_NUMUNIT;

struct sMoveDescription
{
    UINT16 nCharacterIndex = 0;
    LPCWSTR szMoveName = L"uninit";
    UINT16 nImageIndex = 0xFF;
    UINT16 nImageUnitOverride = 0xFF;
    const stPairedPaletteInfo *pPairedPaletteInfo = nullptr;
};

// These are the filesizes for each normal MVC2 PAL file.
// This is sorted by character ID: Ryu is 0x0
const UINT32 MVC2_D_FILESIZES_6COLORS[MVC2_D_NUMUNIT_WITH_TEAMVIEW] = {

    557408, 
    926400, 
    640928, 
    857952, 
    1196800, 
    931904, 
    997088, 
    1071200, 
    1101504, 
    1007904, 
    994272, 
    1041248, 
    951136, 
    1191648, 
    1241600, 
    1167392, 
    1191136, 
    941920, 
    1085344, 
    1132992, 
    1202112, 
    1187520, 
    1041408, 
    1139360, 
    989952, 
    601376, 
    923712, 
    568512, 
    667648, 
    523552, 
    586336, 
    1206144, 
    1250752, 
    485120, 
    864480, 
    353792, 
    697504, 
    788992, 
    577440, 
    589056, 
    1000704, 
    1269088, 
    1157888, 
    1091424, 
    1196096, 
    1001888, 
    1093376, 
    1212096, 
    1082656, 
    1178688, 
    1263552, 
    1107104, 
    1243296, 
    1259360, 
    1009760, 
    983712, 
    1025152, 
    1091648, 
    464448,
    0
};

// These are the filesizes for the MVC2 PAL files created for the palette expansion
const UINT32 MVC2_D_FILESIZES_16COLORS[MVC2_D_NUMUNIT_WITH_TEAMVIEW] =
{
    561792,
    934592,
    645312,
    870496,
    1201920,
    936288,
    1007584,
    1075872,
    1105920,
    1017888,
    999168,
    1046208,
    963680,
    1196064,
    1245984,
    1186080,
    1195904,
    946368,
    1090176,
    1137952,
    1208768,
    1191968,
    1045792,
    1143744,
    994336,
    605760,
    928096,
    572896,
    716544,
    572448,
    590720,
    1211936,
    1255136,
    489504,
    870624,
    358176,
    706976,
    795904,
    582816,
    595968,
    1007616,
    1278560,
    1164288,
    1095808,
    1200512,
    1031072,
    1101824,
    1220544,
    1089088,
    1198432,
    1284288,
    1111552,
    1248224,
    1266784,
    1014912,
    998848,
    1030688,
    1096320,
    471872,
    0
};

const UINT32 MVC2_D_PALDATASIZE_6COLORS[MVC2_D_NUMUNIT_WITH_TEAMVIEW] =
{
    0x00000720,
    0x00000D40,
    0x00000720,
    0x00001780,
    0x00000A00,
    0x00000720,
    0x00001280,
    0x00000840,
    0x00000740,
    0x00000F40,
    0x00000A40,
    0x00000960,
    0x00001300,
    0x00000740,
    0x00000720,
    0x00001C00,
    0x000008A0,
    0x00000760,
    0x000008E0,
    0x00000960,
    0x00000B00,
    0x00000760,
    0x00000720,
    0x00000720,
    0x00000720,
    0x00000720,
    0x00000720,
    0x00000720,
    0x00004840,
    0x00004840,
    0x00000720,
    0x00000960,
    0x00000720,
    0x00000720,
    0x00000A40,
    0x00000720,
    0x00000DC0,
    0x00000AC0,
    0x00000880,
    0x00000720,
    0x00000AC0,
    0x00000E80,
    0x00000B40,
    0x00000720,
    0x00000740,
    0x00002C00,
    0x00000720,
    0x00000D00,
    0x00000A20,
    0x00002040,
    0x00001F00,
    0x00000760,
    0x00000940,
    0x00000E00,
    0x00000A20,
    0x000016E0,
    0x00000920,
    0x00000840,
    0x00000B80,
    0x00000720
};

const UINT32 MVC2_D_PALDATASIZE_16COLORS[MVC2_D_NUMUNIT_WITH_TEAMVIEW] =
{
    0x0001a720,
    0x0001c400,
    0x0001afa0,
    0x0001e5e0,
    0x0001c1c0,
    0x0001cc40,
    0x0001e600,
    0x0001bd60,
    0x0001c7a0,
    0x0001cf20,
    0x0001d860,
    0x000214e0,
    0x000204c0,
    0x0001a180,
    0x0001c600,
    0x0001db00,
    0x0001d740,
    0x0001b640,
    0x0001cb00,
    0x0001c6e0,
    0x0001d620,
    0x0001a300,
    0x0001a800,
    0x0001b2a0,
    0x00016d20,
    0x000169c0,
    0x00018cc0,
    0x0001b9c0,
    0x00027dc0,
    0x00027e20,
    0x0001aee0,
    0x0001da40,
    0x0001b6e0,
    0x0001a780,
    0x0001db40,
    0x000194c0,
    0x0001c820,
    0x0001bb40,
    0x00019ba0,
    0x0001b620,
    0x0001c620,
    0x0001b3a0,
    0x0001e000,
    0x0001a7a0,
    0x0001e2e0,
    0x00021260,
    0x0001ef60,
    0x0001e420,
    0x0001d8e0,
    0x0001dcc0,
    0x0001df20,
    0x0001e320,
    //0x00013780,
    0x0001aa80,
    0x0001dfa0,
    0x00019600,
    0x0001eaa0,
    0x0001cd80,
    0x0001c760,
    0x0001d4c0,
};

const WCHAR MVC2_D_UNITDESC[MVC2_D_NUMUNIT_WITH_TEAMVIEW][MAX_DESCRIPTION_LENGTH] =
{
    L"Ryu",
    L"Zangief",
    L"Guile",
    L"Morrigan",
    L"Anakaris",
    L"Strider",
    L"Cyclops",
    L"Wolverine",
    L"Psylocke",
    L"Iceman",
    L"Rogue",
    L"Captain America",
    L"Spider-Man",
    L"Hulk",
    L"Venom",
    L"Dr. Doom",
    L"Tron Bonne",
    L"Jill Valentine",
    L"Hayato",
    L"Ruby Heart",
    L"SonSon",
    L"Amingo",
    L"Marrow",
    L"Cable",
    L"Abyss (Form 1)",
    L"Abyss (Form 2)",
    L"Abyss (Form 3)",
    L"Chun-Li",
    L"Megaman",
    L"Roll",
    L"Gouki",
    L"B.B. Hood",
    L"Felicia",
    L"Charlie",
    L"Sakura",
    L"Dan",
    L"Cammy",
    L"Dhalsim",
    L"M.Bison",
    L"Ken",
    L"Gambit",
    L"Juggernaut",
    L"Storm",
    L"Sabretooth",
    L"Magneto",
    L"Shuma-Gorath",
    L"War Machine",
    L"Silver Samurai",
    L"Omega Red",
    L"Spiral",
    L"Colossus",
    L"Iron Man",
    L"Sentinel",
    L"Blackheart",
    L"Thanos",
    L"Jin",
    L"Captain Commando",
    L"Bonerine",
    L"Kobun / Servbot",
    L"Team View"
};

const UINT8 MVC2_D_UNITSORT[MVC2_D_NUMUNIT_WITH_TEAMVIEW + 1] = // plus one for terminal entry
{
    0x18,
    0x19,
    0x1A,
    0x15,
    0x04,
    0x1F,
    0x35,
    0x39,
    0x17,
    0x24,
    0x0B,
    0x38,
    0x21,
    0x1B,
    0x32,
    0x06,
    0x23,
    0x25,
    0x0F,
    0x20,
    0x28,
    0x1E,
    0x02,
    0x12, 
    0x0D,
    0x09,
    0x33,
    0x11,
    0x37,
    0x29,
    0x27,
    0x3A,
    0x2C,
    0x16,
    0x26,
    0x1C,
    0x03,
    0x30,
    0x08,
    0x0A,
    0x1D,
    0x13,
    0x00,
    0x2B,
    0x22,
    indexCPS2Sprites_Sentinel,
    0x2D,
    0x2F,
    0x14,
    0x0C,
    0x31,
    0x2A,
    0x05,
    0x36,
    0x10,
    0x0E,
    0x2E,
    0x07,
    0x01, // Zangief
    MVC2_D_TEAMVIEW_LOCATION,
    0xFF
};

// This is all for Spiral's Metamorphosis super....
const UINT16 MVC2_D_0x31_EXTRAREDIR[] = 
{
    0x06, 0,
    0x07, 0,
    0x07, 1,
    0x08, 0,
    0x08, 1,
    0x09, 0,
    0x0A, 0,
    0x0B, 0,
    0x0C, 0,
    0x0D, 0,
    0x0E, 0,
    0x0F, 0,
    0x0F, 1,
    0x16, 0,
    0, 0,
    0x17, 0,
    0, 0,
    0x28, 0,
    0x29, 0,
    0x2A, 0,
    0x2A, 13,
    0x2B, 0,
    0x2C, 0,
    0, 0,
    0x2D, 0,
    0x2E, 0,
    0x2F, 0,
    0x30, 0,
    0x32, 0,
    0x33, 0,
    indexCPS2Sprites_Sentinel, 0,
    indexCPS2Sprites_Sentinel, 1, // Sentinel FX
    0x35, 0,
    0x36, 0
};

// For these entries we use the EXTRA_START offset.
// For each palette entry item the BOOL value indicates whether or not to show a sprite.
// the second line is unique Extras sprites from [location 1] to [location 2]
//     <CHAR_OFFSET>,
//      1, 0, 0, 0, 0, 0, 0, // One "extra" sprite exists, use it for the 0x1 (%button%) extras
//      0x11, 0x11 // Add an Extra node: that will use 0x11 for that palette entry.  Each entry is START_POS and END_POS.
//      An unpaired entry other than 0 is going to do very bad things, so be careful.
const std::vector<UINT16> MVC2_D_6COLORS_EXTRADEF =
{
    0,

    EXTRA_START | 0x00, //Ryu
    1, 0, 1, 0, 0, 0, 0, // Hadouken, Hurricane kick
    0,
    EXTRA_START | 0x01, //Zangief
    1, 0, 1, 0, 0, 0, 0, // Banishing fist, mecha flame breath
    0x11, 0x3A,            // mecha gief, piledriver...?
    EXTRA_START | 0x02, //Guile
    1, 0, 0, 0, 0, 0, 0, // sonic boom
    0,
    EXTRA_START | 0x03, //Morrigan
    1, 1, 1, 1, 0, 0, 0, // lilith, ???, fireball, super fireball
    0x3A, 0x3B, 0x3D, 0x3E, 0x40, 0x41, 0x43, 0x44, 0x46, 0x47, 0x49, 0x86,
    // 0x3a == super gun, 
    // 3b -49: rotates between lilith and morrigan up-poses as the cloak comes down
    // 86 taunt
    EXTRA_START | 0x04, // Anakaris
    0, 1, 1, 1, 1, 0, 0, // up hands, ... weird balls, giant super body, worshipper doll
    0,
    EXTRA_START | 0x05, // Strider    
    1, 1, 0, 0, 0, 0, 0, // weapons, dogs
    0,
    EXTRA_START | 0x06, // Cyclops
    1, 1, 1, 0, 0, 0, 0, // HK, super, eye laser
    0x19, 0x1E, 0x29, 0x64,
    EXTRA_START | 0x07, // Wolverine
    1, 1, 0, 0, 0, 0, 0, // claws, slash effects
    0x11, 0x11,
    EXTRA_START | 0x08, // Psylocke
    1, 1, 1, 0, 0, 0, 0, // psyblade, super psyblade, charged forward move,
    0,
    EXTRA_START | 0x09, // Iceman
    1, 1, 1, 1, 1, 0, 0, // glow, taunt, iceballs, big ice balls
    0x09, 0x0C, 0x21, 0x4A, // ice beam, various glows
    EXTRA_START | 0x0A, // Rogue
    1, 1, 0, 1, 1, 0, 0, // heart, dust cloud, ?, forward dash, forward dash, ?, ?
    0x11, 0x22, // dash, taunt and win pose
    EXTRA_START | 0x0B, // Captain America
    1, 1, 1, 0, 0, 0, 0, // shield, charging star / shield throw, eagle, 
    0,
    EXTRA_START | 0x0C, // Spider-Man
    1, 1, 0, 0, 0, 0, 0, // web, 
    0x09, 0x10, 0x11, 0x14, 0x19, 0x20, 0x21, 0x24, 0x29, 0x30, 0x31, 0x34, 0x39, 0x40, 0x41, 0x44, 0x49, 0x50, 0x51, 0x54, 0x59, 0x60, 0x61, 0x64,
    EXTRA_START | 0x0D, // Hulk
    1, 1, 1, 0, 0, 0, 0, // charge effects, rocks, gamma crush, 
    0x0A, 0x0A, // exploding gamma crush
    EXTRA_START | 0x0E, // Venom
    1, 1, 0, 0, 0, 0, 0, // taunt, webs
    0,
    EXTRA_START | 0x0F, // Dr. Doom
    1, 1, 1, 1, 0, 0, 0, // cFP laser effects, FP laser effects, laser beams, rocks, 
    0x09, 0x0C, 0x25, 0x28, 0x41, 0x44, 0x5D, 0x60, 0x79, 0x7C, 0x95, 0x98,
    EXTRA_START | 0x10, //Tron Bonne
    1, 1, 1, 1, 0, 0, 0, // tron body, kobun, drill parts, fire effects
    0x11, 0x11, 0x13, 0x15,
    EXTRA_START | 0x11, // Jill Valentine
    1, 1, 1, 1, 1, 0, 0,
    0x09, 0x0B,
    EXTRA_START | 0x12, // Hayato
    1, 1, 1, 1, 1, 1, 1,
    0x14, 0x17,
    EXTRA_START | 0x13, // Ruby Heart
    1, 1, 1, 1, 1, 1, 1,
    0x0B, 0x0E, 0x10, 0x10,
    EXTRA_START | 0x14, // Sonson
    1, 1, 1, 1, 1, 1, 1,
    0x0B, 0x0C, 0x0F, 0x14, 0x16, 0x28,
    EXTRA_START | 0x15, // Amingo
    1, 1, 1, 1, 1, 1, 0,
    0x09, 0x0B,
    EXTRA_START | 0x16, // Marrow
    1, 1, 0, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x17, // Cable
    1, 1, 1, 1, 1, 0, 0,
    0,
    EXTRA_START | 0x18, // Abyss Form 1
    1, 1, 1, 1, 1, 0, 0,
    0,
    EXTRA_START | 0x19, // Abyss Form 2
    0, 1, 0, 1, 1, 1, 0,
    0,
    EXTRA_START | 0x1A, // Abyss Form 3
    1, 0, 1, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x1B, // Chun-Li
    1, 1, 0, 0, 0, 0, 0, // up-leg, kikosho
    0,
    EXTRA_START | 0x1C, // Megaman
    1, 1, 1, 1, 1, 1, 1, // none of these appear to actually be in the dat
    0x09, 0x5E, 0x60, 0xB5, 0xB7, 0x10C, 0x10E, 0x163, 0x165, 0x1BA, 0x1BC, 0x211,
    EXTRA_START | 0x1D, // Roll
    1, 1, 1, 1, 1, 1, 1,
    0x09, 0x5E, 0x60, 0xB5, 0xB7, 0x10C, 0x10E, 0x163, 0x165, 0x1BA, 0x1BC, 0x211,
    EXTRA_START | 0x1E, // Gouki
    1, 1, 0, 0, 0, 0, 0,
    EXTRA_START | 0x1F, // B.B. Hood
    1, 1, 1, 1, 1, 1, 1,
    0x09, 0x11, 0x13, 0x14,  // Cheer and Fire, Cruel Hunting, Apple For You Mr. K
    EXTRA_START | 0x20, // Felicia
    1, 1, 1, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x21, // Nash
    1, 1, 0, 0, 0, 0, 0, // sonic booms, flash kicks
    0,
    EXTRA_START | 0x22, // Sakura
    1, 1, 0, 0, 0, 0, 0,
    0x0B, 0x0B, 0x11, 0x1c, 0x1D, 0x22,
    EXTRA_START | 0x23, // Dan
    1, 1, 0, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x24, // Cammy
    1, 0, 1, 1, 0, 0, 0,
    0x09, 0x3E,
    EXTRA_START | 0x25, // Dhalsim
    1, 0, 0, 0, 0, 0, 0,
    0x09, 0x26,
    EXTRA_START | 0x26, // M. Bison
    1, 1, 0, 0, 0, 0, 0,
    0x09, 0x14,
    EXTRA_START | 0x27, // Ken
    1, 1, 1, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x28, // Gambit
    1, 1, 0, 0, 0, 0, 0, // charged cards, super blue
    0x09, 0x26, // taunt
    EXTRA_START | 0x29, // Juggernaut
    0, 1, 0, 0, 0, 0, 0, // head crush, dirt
    0x09, 0x44, // power-up, 
    EXTRA_START | 0x2A, // Storm
    0, 0, 0, 0, 0, 0, 0,
    0x09, 0x0B, 0x0F, 0x16, 0x19, 0x2A,
    EXTRA_START | 0x2B, // Sabretooth
    1, 1, 1, 0, 0, 0, 0, // slashes, birdie, car
    0,
    EXTRA_START | 0x2C, // Magneto
    1, 1, 1, 0, 0, 0, 0,
    0x0A, 0x0A,
    EXTRA_START | 0x2D, // Shuma-Gorath
    1, 1, 1, 0, 0, 0, 0,
    0x11, 0x15, 0x16, 0x1A, 0x25, 0x2E, 0x2F, 0x4A, 0x55, 0x7A, 0x85, 0xAA, 0xB5, 0xDA, 0xE5, 0x10A, 0x115, 0x130,
    EXTRA_START | 0x2E, // War Machine
    1, 1, 1, 0, 0, 0, 0, // none in the file: uses iron man in the game i think?
    EXTRA_START | 0x2F, // Silver Samurai
    1, 1, 1, 1, 1, 0, 1,
    0x09, 0x0F, 0x11, 0x17, 0x19, 0x1F, 0x21, 0x27, 0x29, 0x2F, 0x31, 0x37,
    EXTRA_START | 0x30, // Omega Red
    1, 1, 1, 0, 0, 0, 0,
    0x09, 0x20,
    EXTRA_START | 0x31, // Spiral
    0, 1, 1, 0, 0, 0, 0,
    0x09, 0x16, 0x18, 0x18, 0x1A, 0x1F, 0x21, 0x2A, 0x2D, 0x38, 0x3B, 0x46, 0x49, 0x4E, 0x4F, 0x54, 0x57, 0x62, 0x65, 0x70, 0x73, 0x7E, 0x81, 0x8C, 0x8F,         0x9A, 0x9D, 0xA8, 0xAB, 0xB6, 0xB9, 0xC4, 0xC7, 0xD2,
    EXTRA_START | 0x32, // Colossus
    1, 0, 1, 1, 0, 0, 0,
    0x09, 0xC8,
    EXTRA_START | 0x33, // Iron Man
    1, 1, 0, 0, 0, 0, 0, // proton cannon, proton laser
    0,
    EXTRA_START | indexCPS2Sprites_Sentinel, // Sentinel
    1, 1, 1, 0, 0, 0, 0,
    0x12, 0x13,
    EXTRA_START | 0x35, // Blackheart
    0, 0, 0, 0, 0, 0, 0,
    0x09, 0x0D, 0x0E, 0x10, 0x12, 0x14, 0x19, 0x1B,
    EXTRA_START | 0x36, // Thanos
    1, 0, 1, 0, 1, 1, 1,
    0x09, 0x12, 0x14, 0x1F,
    EXTRA_START | 0x37, // Jin
    1, 1, 1, 0, 0, 0, 0,
    0x09, 0x86,
    EXTRA_START | 0x38, // Captain Commando
    1, 1, 1, 1, 1, 0, 0, // ninjas, hoover, corridor, fireball, 
    0x09, 0x19, // activation laser-up, mashable throw
    EXTRA_START | 0x39, // Bonerine
    1, 1, 0, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x3A, // Kobun
    1, 1, 1, 1, 1, 1, 0,
    0x09, 0x26,
    EXTRA_START | 0x3B, // Team View
    0, 0, 0, 0, 0, 0,
    0,

    EXTRA_END
};

// 16 color version for the palette expansion
// For these entries we use the EXTRA_START offset.
// For each palette entry item the BOOL value indicates whether or not to show a sprite.
// the second line is unique Extras sprites from [location 1] to [location 2]
//     <CHAR_OFFSET>,
//      1, 0, 0, 0, 0, 0, 0, // One "extra" sprite exists, use it for the 0x1 (%button%) extras
//      0x11, 0x11 // Add an Extra node: that will use 0x11 for that palette entry.  Each entry is START_POS and END_POS.
//      An unpaired entry other than 0 is going to do very bad things, so be careful.
const std::vector<UINT16> MVC2_D_16COLORS_EXTRADEF =
{
    0,

    EXTRA_START | 0x00, //Ryu
    1, 0, 1, 0, 0, 0, 0, // Hadouken, Hurricane kick
    0,
    EXTRA_START | 0x01, //Zangief
    1, 0, 1, 0, 0, 0, 0, // Banishing fist, mecha flame breath
    0x11, 0x3A,            // mecha gief, piledriver...?
    EXTRA_START | 0x02, //Guile
    1, 0, 0, 0, 0, 0, 0, // sonic boom
    0,
    EXTRA_START | 0x03, //Morrigan
    1, 1, 1, 1, 0, 0, 0, // lilith, ???, fireball, super fireball
    0x3A, 0x3B, 0x3D, 0x3E, 0x40, 0x41, 0x43, 0x44, 0x46, 0x47, 0x49, 0x4a, 0x4c, 0x4d, 0x4f, 0x50, 0x52, 0x53, 0x55, 0x56, 0x58, 0x59, 0x5b, 0x5c, 0x5e, 0x5f, 0x61, 0x62, 0x64, 0x65, 0x67, 0x68,
        0x69, 0x108,
    // 0x3a == super gun, 
    // 3b -49: rotates between lilith and morrigan up-poses as the cloak comes down
    // 86 taunt
    EXTRA_START | 0x04, // Anakaris
    0, 1, 1, 1, 1, 0, 0, // up hands, ... weird balls, giant super body, worshipper doll
    0,
    EXTRA_START | 0x05, // Strider    
    1, 1, 0, 0, 0, 0, 0, // weapons, dogs
    0,
    EXTRA_START | 0x06, // Cyclops
    1, 1, 1, 0, 0, 0, 0, // HK, super, eye laser
    0x19, 0x1E, 0x29, 0x64,
    EXTRA_START | 0x07, // Wolverine
    1, 1, 0, 0, 0, 0, 0, // claws, slash effects
    0x11, 0x11,
    EXTRA_START | 0x08, // Psylocke
    1, 1, 1, 0, 0, 0, 0, // psyblade, super psyblade, charged forward move,
    0,
    EXTRA_START | 0x09, // Iceman
    1, 1, 1, 1, 1, 0, 0, // glow, taunt, iceballs, big ice balls
    0x09, 0x0C, 0x21, 0x4A, // ice beam, various glows
    EXTRA_START | 0x0A, // Rogue
    1, 1, 0, 1, 1, 0, 0, // heart, dust cloud, ?, forward dash, forward dash, ?, ?
    0x0A, 0x19, // taunt and win pose
    EXTRA_START | 0x0B, // Captain America
    1, 1, 1, 0, 0, 0, 0, // shield, charging star / shield throw, eagle, 
    0,
    EXTRA_START | 0x0C, // Spider-Man
    1, 1, 0, 0, 0, 0, 0, // web, 
    0x09, 0x10, 0x11, 0x14, 0x19, 0x20, 0x21, 0x24, 0x29, 0x30, 0x31, 0x34, 0x39, 0x40, 0x41, 0x44, 0x49, 0x50, 0x51, 0x54, 0x59, 0x60, 0x61, 0x64,
    EXTRA_START | 0x0D, // Hulk
    1, 1, 1, 0, 0, 0, 0, // charge effects, rocks, gamma crush, 
    0x0A, 0x0A, // exploding gamma crush
    EXTRA_START | 0x0E, // Venom
    1, 1, 0, 0, 0, 0, 0, // taunt, webs
    0,
    EXTRA_START | 0x0F, // Dr. Doom
    1, 1, 1, 1, 0, 0, 0, // cFP laser effects, FP laser effects, laser beams, rocks, 
    0x09, 0x0C, 0x25, 0x28, 0x41, 0x44, 0x5D, 0x60, 0x79, 0x7C, 0x95, 0x98,
    EXTRA_START | 0x10, //Tron Bonne
    1, 1, 1, 1, 0, 0, 0, // tron body, kobun, drill parts, fire effects
    0x11, 0x11, 0x13, 0x15,
    EXTRA_START | 0x11, // Jill Valentine
    1, 1, 1, 1, 1, 0, 0,
    0x09, 0x0B,
    EXTRA_START | 0x12, // Hayato
    1, 1, 1, 1, 1, 1, 1,
    0x14, 0x17,
    EXTRA_START | 0x13, // Ruby Heart
    1, 1, 1, 1, 1, 1, 1,
    0x0B, 0x0E, 0x10, 0x10,
    EXTRA_START | 0x14, // Sonson
    1, 1, 1, 1, 1, 1, 1,
    0x0B, 0x0C, 0x0F, 0x14, 0x16, 0x28,
    EXTRA_START | 0x15, // Amingo
    1, 1, 1, 1, 1, 1, 0,
    0x09, 0x0B,
    EXTRA_START | 0x16, // Marrow
    1, 1, 0, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x17, // Cable
    1, 1, 1, 1, 1, 0, 0,
    0,
    EXTRA_START | 0x18, // Abyss Form 1
    1, 1, 1, 1, 1, 0, 0,
    0,
    EXTRA_START | 0x19, // Abyss Form 2
    0, 1, 0, 1, 1, 1, 0,
    0,
    EXTRA_START | 0x1A, // Abyss Form 3
    1, 0, 1, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x1B, // Chun-Li
    1, 1, 0, 0, 0, 0, 0, // up-leg, kikosho
    0,
    EXTRA_START | 0x1C, // Megaman
    1, 1, 1, 1, 1, 1, 1, // none of these appear to actually be in the dat
    0x09, 0x5E, 0x60, 0xB5, 0xB7, 0x10C, 0x10E, 0x163, 0x165, 0x1BA, 0x1BC, 0x211,
    EXTRA_START | 0x1D, // Roll
    1, 1, 1, 1, 1, 1, 1,
    0x09, 0x5E, 0x60, 0xB5, 0xB7, 0x10C, 0x10E, 0x163, 0x165, 0x1BA, 0x1BC, 0x211,
    EXTRA_START | 0x1E, // Gouki
    1, 1, 0, 0, 0, 0, 0,
    EXTRA_START | 0x1F, // B.B. Hood
    1, 1, 1, 1, 1, 1, 1,
    0x09, 0x1b, 0x1d, 0x1e, // Cheer and Fire, Cruel Hunting, Apple For You Mr. K
    EXTRA_START | 0x20, // Felicia
    1, 1, 1, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x21, // Nash
    1, 1, 0, 0, 0, 0, 0, // sonic booms, flash kicks
    0,
    EXTRA_START | 0x22, // Sakura
    1, 1, 0, 0, 0, 0, 0,
    0x0B, 0x0B, 0x11, 0x40,
    EXTRA_START | 0x23, // Dan
    1, 1, 0, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x24, // Cammy
    1, 0, 1, 1, 0, 0, 0,
    0x09, 0x3E,
    EXTRA_START | 0x25, // Dhalsim
    1, 0, 0, 0, 0, 0, 0,
    0x09, 0x26,
    EXTRA_START | 0x26, // M. Bison
    1, 1, 0, 0, 0, 0, 0,
    0x09, 0x14,
    EXTRA_START | 0x27, // Ken
    1, 1, 1, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x28, // Gambit
    1, 1, 0, 0, 0, 0, 0, // charged cards, super blue
    0x09, 0x58, // taunt
    EXTRA_START | 0x29, // Juggernaut
    0, 1, 0, 0, 0, 0, 0, // head crush, dirt
    0x09, 0x44, // power-up, 
    EXTRA_START | 0x2A, // Storm
    0, 0, 0, 0, 0, 0, 0,
    0x09, 0x0B, 0x0F, 0x16, 0x19, 0x2A,
    EXTRA_START | 0x2B, // Sabretooth
    1, 1, 1, 0, 0, 0, 0, // slashes, birdie, car
    0,
    EXTRA_START | 0x2C, // Magneto
    1, 1, 1, 0, 0, 0, 0,
    0x0A, 0x0A,
    EXTRA_START | 0x2D, // Shuma-Gorath
    1, 1, 1, 0, 0, 0, 0,
    0x11, 0x15, 0x16, 0x1A, 0x25, 0x2E, 0x2F, 0x4A, 0x55, 0x7A, 0x85, 0xAA, 0xB5, 0xDA, 0xE5, 0x10A, 0x115, 0x130,
    EXTRA_START | 0x2E, // War Machine
    1, 1, 1, 0, 0, 0, 0, // none in the file: uses iron man in the game i think?
    EXTRA_START | 0x2F, // Silver Samurai
    1, 1, 1, 1, 1, 0, 1,
    0x09, 0x0F, 0x11, 0x17, 0x19, 0x1F, 0x21, 0x27, 0x29, 0x2F, 0x31, 0x37, 0x39, 0x3F, 0x41, 0x47, 0x49, 0x4F, 0x51, 0x57, 0x59, 0x5F, 0x61, 0x67, 0x69, 0x6F, 0x71, 0x77, 0x79, 0x7F, 0x81, 0x87,
    EXTRA_START | 0x30, // Omega Red
    1, 1, 1, 0, 0, 0, 0,
    0x09, 0x48,
    EXTRA_START | 0x31, // Spiral
    0, 1, 1, 0, 0, 0, 0,
    0x09, 0x16, 0x18, 0x18, 0x1A, 0x1F, 0x21, 0x2A, 0x2D, 0x38, 0x3B, 0x46, 0x49, 0x4E, 0x4F, 0x54, 0x57, 0x62, 0x65, 0x70, 0x73, 0x7E, 0x81, 0x8C, 0x8F,         0x9A, 0x9D, 0xA8, 0xAB, 0xB6, 0xB9, 0xC4, 0xC7, 0xD2,
    EXTRA_START | 0x32, // Colossus
    1, 0, 1, 1, 0, 0, 0,
    0x09, 0xC8,
    EXTRA_START | 0x33, // Iron Man
    1, 1, 0, 0, 0, 0, 0, // proton cannon, proton laser
    0,
    EXTRA_START | indexCPS2Sprites_Sentinel, // Sentinel
    1, 1, 1, 0, 0, 0, 0,
    0x12, 0x13,
    EXTRA_START | 0x35, // Blackheart
    0, 0, 0, 0, 0, 0, 0,
    0x09, 0x0D, 0x0E, 0x10, 0x12, 0x14, 0x19, 0x1B,
    EXTRA_START | 0x36, // Thanos
    1, 0, 1, 0, 1, 1, 1,
    0x09, 0x12, 0x14, 0x1F,
    EXTRA_START | 0x37, // Jin
    1, 1, 1, 0, 0, 0, 0,
    0x09, 0x86,
    EXTRA_START | 0x38, // Captain Commando
    1, 1, 1, 1, 1, 0, 0, // ninjas, hoover, corridor, fireball, 
    0x09, 0x2d, // activation laser-up, mashable throw
    EXTRA_START | 0x39, // Bonerine
    1, 1, 0, 0, 0, 0, 0,
    0,
    EXTRA_START | 0x3A, // Kobun
    1, 1, 1, 1, 1, 1, 0,
    0x09, 0x26,
    EXTRA_START | 0x3B, // Team View
    0, 0, 0, 0, 0, 0,
    0,

    EXTRA_END
};

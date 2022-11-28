#pragma once

#include "GameClassByUnitPerFile.h"

const std::vector<uint16_t>LandMaker_P_IMGIDS_USED =
{
};


#define LandMaker_P_TILE(addr) addr, addr + 0x10*2
#define LandMaker_P_PORTRAIT(addr) addr, addr + 0x40*2

#define LANDMAKER_P_CHARIMG_STRUCTURES     { L"Structures - Red",    0x0,  INVALID_UNIT_VALUE, 0x00 }, \
    { L"Structures - Blue",   0x40,  INVALID_UNIT_VALUE, 0x00 },\
    { L"Structures - Orange", 0x80,  INVALID_UNIT_VALUE, 0x00 },\
    { L"Structures - Yellow", 0xC0,  INVALID_UNIT_VALUE, 0x00 },\
    { L"Structures - Green",  0x100, INVALID_UNIT_VALUE, 0x00 },\
    { L"Structures - Purple", 0x140, INVALID_UNIT_VALUE, 0x00 },\
    { L"Structures - Gray",   0x180, INVALID_UNIT_VALUE, 0x00 }

const sGCBUPF_BasicNodeData LandMaker_P_PaletteNodesNormal =
{
    { L"Palettes" }, 0x0
};
const sGCBUPF_BasicNodeData LandMaker_P_StructureNodesNormal =
{
    { L"Palettes" }, 0x0
};
const sGCBUPF_BasicNodeData LandMaker_P_SpriteNodesNormal =
{
    { L"Palettes" }, 0x0
};

const std::vector<sGCBUPF_RelativePaletteData> LandMaker_P_Palettes_GAME_Common =
{
    { L"Tiles - Red",    0x0,   INVALID_UNIT_VALUE, 0x00 },
    { L"Tiles - Blue",   0x20,  INVALID_UNIT_VALUE, 0x00 },
    { L"Tiles - Orange", 0x40,  INVALID_UNIT_VALUE, 0x00 },
    { L"Tiles - Yellow", 0x60,  INVALID_UNIT_VALUE, 0x00 },
    { L"Tiles - Green",  0x80,  INVALID_UNIT_VALUE, 0x00 },
    { L"Tiles - Purple", 0xA0,  INVALID_UNIT_VALUE, 0x00 },
    { L"Tiles - Gray",   0xC0,  INVALID_UNIT_VALUE, 0x00 },
    
    { L"Efx Spread - Red",     0x63C,      INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Spread - Blue",    0x63C+0x20, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Spread - Orange",  0x63C+0x40, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Spread - Yellow",  0x63C+0x60, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Spread - Green",   0x63C+0x80, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Spread - Purple",  0x63C+0xA0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Spread - Gray",    0x63C+0xC0, INVALID_UNIT_VALUE, 0x00 },

    { L"Efx Corner Shine - Red",     0xA64,      INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Corner Shine - Blue",    0xA64+0x40, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Corner Shine - Orange",  0xA64+0x80, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Corner Shine - Yellow",  0xA64+0xC0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Corner Shine - Green",   0xA64+0x100, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Corner Shine - Purple",  0xA64+0x140, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx Corner Shine - Gray",    0xA64+0x180, INVALID_UNIT_VALUE, 0x00 },

    // a bunch of unknown little things
    { L"Item - Arrow/Star", 0xE0, INVALID_UNIT_VALUE, 0x00 },
    { L"Item - Moon",       0x100, INVALID_UNIT_VALUE, 0x00 },
    { L"Item - Flare",      0x120, INVALID_UNIT_VALUE, 0x00 },
    { L"Item - Pedestal",   0x140, INVALID_UNIT_VALUE, 0x00 },
    { L"Item Efx (Break)",  0x160, INVALID_UNIT_VALUE, 0x00 },
};

const std::vector<sGCBUPF_RelativePaletteData> LandMaker_P_Palettes_CHARIMG_Structures =
{
    LANDMAKER_P_CHARIMG_STRUCTURES
};

const std::vector<sGCBUPF_RelativePaletteData> LandMaker_P_Palettes_CHARIMG_Sprites =
{
    { L"Chibi Sprites",          0x0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 1 (Attack)",         0x40, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 2 (Win)",            0x80, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 3 (Unknown/Unused)", 0xC0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 4 (Unknown/Unused)", 0x100, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 5 (Unknown/Unused)", 0x140, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 6 (Unknown/Unused)", 0x180, INVALID_UNIT_VALUE, 0x00 },

    // inconsistent
    { L"Damage - Burned?",  0x214, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Frozen?",  0x254, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Renki?",   0x294, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Shocked?", 0x2D4, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Infatuated?", 0x314, INVALID_UNIT_VALUE, 0x00 },
};

const std::vector<sGCBUPF_RelativePaletteData> LandMaker_P_Palettes_CHARIMG_HIRYU =
{
    LANDMAKER_P_CHARIMG_STRUCTURES,
    { L"Chibi Sprites",          0x17450+0x0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 1 (Attack)",         0x17450+0x40, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 2 (Win)",            0x17450+0x80, INVALID_UNIT_VALUE, 0x00 },

    // inconsistent
    { L"Damage - Burned?",  0x17450+0x214, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Frozen?",  0x17450+0x254, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Renki?",   0x17450+0x294, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Shocked?", 0x17450+0x2D4, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Infatuated?", 0x17450+0x314, INVALID_UNIT_VALUE, 0x00 },
};

const std::vector<sGCBUPF_RelativePaletteData> LandMaker_P_Palettes_CHARIMG_AIFA =
{
    LANDMAKER_P_CHARIMG_STRUCTURES,
    { L"Chibi Sprites",          0x1956C+0x0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 1 (Attack)",         0x1956C+0x40, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 2 (Win)",            0x1956C+0x80, INVALID_UNIT_VALUE, 0x00 },

    // inconsistent
    { L"Damage - Burned?",  0x1956C+0x214, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Frozen?",  0x1956C+0x254, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Renki?",   0x1956C+0x294, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Shocked?", 0x1956C+0x2D4, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Infatuated?", 0x1956C+0x314, INVALID_UNIT_VALUE, 0x00 },
};


const sGCBUPF_ExtrasCollection LandMaker_P_HIRYU_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x6A98), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xD17C), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x15DE0), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_AIFA_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x5E58), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xD47C), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x14460), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_SOUMEI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x8528), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xEDBC), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x15864), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_RENKI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x8568), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xFF5C), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x15C30), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_YOUEN_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x9518), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0x1081C), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x18B00), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_KOUKO_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x62BC), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xC430), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x118A4), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_RINREI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x9138), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0x11F6C), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x1B040), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_ROUSHINSHI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x57C8), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xA50C), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x11AD0), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_RANJU_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0x6CE8), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0xC2EC), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x13D40), INVALID_UNIT_VALUE, 0x00 },
    }
};
const sGCBUPF_ExtrasCollection LandMaker_P_GAIRA_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LandMaker_P_PORTRAIT(0xA7A8), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 2", LandMaker_P_PORTRAIT(0x12DFC), INVALID_UNIT_VALUE, 0x00 },
        { L"Attack Art 3", LandMaker_P_PORTRAIT(0x1CF0C), INVALID_UNIT_VALUE, 0x00 },
    }
};

const sGCBUPF_ExtrasCollection LandMaker_P_BOARD_BG_NORMAL =
{
    L"Board Palettes",
    {
        { L"Board Enclosure", LandMaker_P_PORTRAIT(0xFF10), INVALID_UNIT_VALUE, 0x00 },
        { L"Board Grid",     LandMaker_P_PORTRAIT(0xFF90), INVALID_UNIT_VALUE, 0x00 },
        { L"Board Grid (Danger Flash 1)", LandMaker_P_PORTRAIT(0x10010), INVALID_UNIT_VALUE, 0x00 },
        { L"Board Grid (Danger Flash 2)", LandMaker_P_PORTRAIT(0x10090), INVALID_UNIT_VALUE, 0x00 },
    }
};

const sGCBUPF_ExtrasCollection LandMaker_P_CHARSEL_TILES =
{
    L"Palettes",
    {
        { L"Tile - Red",    LandMaker_P_TILE(0x117C8), INVALID_UNIT_VALUE, 0x00 },
        { L"Tile - Blue",   LandMaker_P_TILE(0x117C8+0x20), INVALID_UNIT_VALUE, 0x00 },
        { L"Tile - Orange", LandMaker_P_TILE(0x117C8+0x40), INVALID_UNIT_VALUE, 0x00 },
        { L"Tile - Yellow", LandMaker_P_TILE(0x117C8+0x60), INVALID_UNIT_VALUE, 0x00 },
        { L"Tile - Green",  LandMaker_P_TILE(0x117C8+0x80), INVALID_UNIT_VALUE, 0x00 },
        { L"Tile - Purple", LandMaker_P_TILE(0x117C8+0xA0), INVALID_UNIT_VALUE, 0x00 },
    }
};


const std::vector<sGCBUPF_BasicFileData> LandMaker_P_CharacterData =
{
    { L"GAME\\GAME1.IMG", L"Common (Normal)", 109048, LandMaker_P_PaletteNodesNormal, LandMaker_P_Palettes_GAME_Common, 0x1996C },
    { L"GAME\\GAME2.IMG", L"Common (Another World)", 109048, LandMaker_P_PaletteNodesNormal, LandMaker_P_Palettes_GAME_Common, 0x1996C },
    { L"SEL\\ASELECT1.CMP", L"Character Select Tiles", 71836, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_CHARSEL_TILES }, 
    
    { L"CHAR\\PAIMG.IMG", L"Hiryu", 96376, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_HIRYU, 0x14 },
    //    { L"CHAR\\PAIMG.IMG", L"Hiryu", 96376, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x17464 },
    { L"GAME2\\PICA.IMG", L"Hiryu Portraits", 90200, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_HIRYU_EXTRAS },
    
    { L"CHAR\\PBIMG.IMG", L"Aifa", 104852, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_AIFA, 0x14 },
    //{ L"CHAR\\PBIMG.IMG", L"Aifa", 104852, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x19580 },
    { L"GAME2\\PICB.IMG", L"Aifa Portraits", 83672, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_AIFA_EXTRAS },
    
    { L"CHAR\\PCIMG.IMG", L"Soumei", 133392, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PCIMG.IMG", L"Soumei", 133392, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x204FC },
    { L"GAME2\\PICC.IMG", L"Soumei Portraits", 88796, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_SOUMEI_EXTRAS },

    { L"CHAR\\PDIMG.IMG", L"Renki", 118272, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PDIMG.IMG", L"Renki", 118272, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x1C9EC },
    { L"GAME2\\PICD.IMG", L"Renki Portraits", 89768, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_RENKI_EXTRAS },
    
    { L"CHAR\\PEIMG.IMG", L"Youen", 90244, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PEIMG.IMG", L"Youen", 90244, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x15C70 },
    { L"GAME2\\PICE.IMG", L"Youen Portraits", 101752, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_YOUEN_EXTRAS },
    
    { L"CHAR\\PFIMG.IMG", L"Kouko", 85124, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PFIMG.IMG", L"Kouko", 85124, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x14870 },
    { L"GAME2\\PICF.IMG", L"Kouko Portraits", 72476, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_KOUKO_EXTRAS },
    
    { L"CHAR\\PGIMG.IMG", L"Rinrei", 114696, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PGIMG.IMG", L"Rinrei", 114696, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x1BBF4 },
    { L"GAME2\\PICG.IMG", L"Rinrei Portraits", 111288, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_RINREI_EXTRAS },
    
    { L"CHAR\\PHIMG.IMG", L"Roushinshi", 115180, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PHIMG.IMG", L"Roushinshi", 115180, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x1BDD8 },
    { L"GAME2\\PICH.IMG", L"Roushinshi Portraits", 73032, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_ROUSHINSHI_EXTRAS },
    
    { L"CHAR\\PIIMG.IMG", L"Ranju", 121228, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PIIMG.IMG", L"Ranju", 121228, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x1D578 },
    { L"GAME2\\PICI.IMG", L"Ranju Portraits", 81848, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_RANJU_EXTRAS },
    
    { L"CHAR\\PZIMG.IMG", L"Gaira", 137920, LandMaker_P_StructureNodesNormal, LandMaker_P_Palettes_CHARIMG_Structures, 0x14 },
    { L"CHAR\\PZIMG.IMG", L"Gaira", 137920, LandMaker_P_SpriteNodesNormal, LandMaker_P_Palettes_CHARIMG_Sprites, 0x216AC },
    { L"GAME2\\PICZ.IMG", L"Gaira Portraits", 119172, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LandMaker_P_GAIRA_EXTRAS },

    // DEMO\\RANKING.IMG "High Score Icons" @0xE050 (32 colors (64B) ea.)
};
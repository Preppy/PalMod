#pragma once

#include "GameClassByUnitPerFile.h"

const std::vector<uint16_t>LandMaker_P_IMGIDS_USED =
{
    indexLandMaker_Common,          // 0x0D
    indexLandMaker_Intro,           // 0x0E
    indexLandMaker_Stages,          // 0x0F
    indexLandMaker_Aifa,            // 0x10
    indexLandMaker_Gaira,           // 0x11
    indexLandMaker_Hiryu,           // 0x12
    indexLandMaker_Kouko,           // 0x13
    indexLandMaker_Ranju,           // 0x14
    indexLandMaker_Renki,           // 0x15
    indexLandMaker_Rinrei,          // 0x16
    indexLandMaker_Roushinshi,      // 0x17
    indexLandMaker_Soumei,          // 0x18
    indexLandMaker_Youen,           // 0x19
};


#define LANDMAKER_P_TILE(addr) addr, addr + 0x10*2
#define LANDMAKER_P_SPREAD(addr) addr, addr + 0x10*2
#define LANDMAKER_P_SHINE(addr) addr, addr + 0x20*2
#define LANDMAKER_P_PORTRAIT(addr) addr, addr + 0x40*2

#define LANDMAKER_P_CHARIMG_STRUCTURES(unit)\
    { L"Structures - Red",    0x0+0x14,   unit, 0x00 }, \
    { L"Structures - Blue",   0x40+0x14,  unit, 0x00 },\
    { L"Structures - Orange", 0x80+0x14,  unit, 0x00 },\
    { L"Structures - Yellow", 0xC0+0x14,  unit, 0x00 },\
    { L"Structures - Green",  0x100+0x14, unit, 0x00 },\
    { L"Structures - Purple", 0x140+0x14, unit, 0x00 },\
    { L"Structures - Gray",   0x180+0x14, unit, 0x00 }

const sGCBUPF_BasicNodeData LANDMAKER_P_PaletteNodesNormal =
{
    { L"Palettes" }, 0x0
};

const sGCBUPF_ExtrasCollection LANDMAKER_P_Palettes_GAME_Common =
{
    L"Palettes",
    {
        { L"Tiles - Red",    LANDMAKER_P_TILE(0x1996C+0x0),   indexLandMaker_Common, 0x00 },
        { L"Tiles - Blue",   LANDMAKER_P_TILE(0x1996C+0x20),  indexLandMaker_Common, 0x00 },
        { L"Tiles - Orange", LANDMAKER_P_TILE(0x1996C+0x40),  indexLandMaker_Common, 0x00 },
        { L"Tiles - Yellow", LANDMAKER_P_TILE(0x1996C+0x60),  indexLandMaker_Common, 0x00 },
        { L"Tiles - Green",  LANDMAKER_P_TILE(0x1996C+0x80),  indexLandMaker_Common, 0x00 },
        { L"Tiles - Purple", LANDMAKER_P_TILE(0x1996C+0xA0),  indexLandMaker_Common, 0x00 },
        { L"Tiles - Gray",   LANDMAKER_P_TILE(0x1996C+0xC0),  indexLandMaker_Common, 0x00 },
        
        { L"Efx Spread - Red",     LANDMAKER_P_SPREAD(0x1996C+0x63C),      indexLandMaker_Common, 0x01 },
        { L"Efx Spread - Blue",    LANDMAKER_P_SPREAD(0x1996C+0x63C+0x20), indexLandMaker_Common, 0x01 },
        { L"Efx Spread - Orange",  LANDMAKER_P_SPREAD(0x1996C+0x63C+0x40), indexLandMaker_Common, 0x01 },
        { L"Efx Spread - Yellow",  LANDMAKER_P_SPREAD(0x1996C+0x63C+0x60), indexLandMaker_Common, 0x01 },
        { L"Efx Spread - Green",   LANDMAKER_P_SPREAD(0x1996C+0x63C+0x80), indexLandMaker_Common, 0x01 },
        { L"Efx Spread - Purple",  LANDMAKER_P_SPREAD(0x1996C+0x63C+0xA0), indexLandMaker_Common, 0x01 },
        { L"Efx Spread - Gray",    LANDMAKER_P_SPREAD(0x1996C+0x63C+0xC0), indexLandMaker_Common, 0x01 },

        { L"Efx Corner Shine - Red",     LANDMAKER_P_SHINE(0x1996C+0xA64),       indexLandMaker_Common, 0x02 },
        { L"Efx Corner Shine - Blue",    LANDMAKER_P_SHINE(0x1996C+0xA64+0x40),  indexLandMaker_Common, 0x02 },
        { L"Efx Corner Shine - Orange",  LANDMAKER_P_SHINE(0x1996C+0xA64+0x80),  indexLandMaker_Common, 0x02 },
        { L"Efx Corner Shine - Yellow",  LANDMAKER_P_SHINE(0x1996C+0xA64+0xC0),  indexLandMaker_Common, 0x02 },
        { L"Efx Corner Shine - Green",   LANDMAKER_P_SHINE(0x1996C+0xA64+0x100), indexLandMaker_Common, 0x02 },
        { L"Efx Corner Shine - Purple",  LANDMAKER_P_SHINE(0x1996C+0xA64+0x140), indexLandMaker_Common, 0x02 },
        { L"Efx Corner Shine - Gray",    LANDMAKER_P_SHINE(0x1996C+0xA64+0x180), indexLandMaker_Common, 0x02 },

        // a bunch of unknown little things
        { L"Item - Arrow/Star", LANDMAKER_P_TILE(0x1996C+0xE0),  INVALID_UNIT_VALUE, 0x00 },
        { L"Item - Moon",       LANDMAKER_P_TILE(0x1996C+0x100), INVALID_UNIT_VALUE, 0x00 },
        { L"Item - Flare",      LANDMAKER_P_TILE(0x1996C+0x120), INVALID_UNIT_VALUE, 0x00 },
        { L"Item - Pedestal",   LANDMAKER_P_TILE(0x1996C+0x140), INVALID_UNIT_VALUE, 0x00 },
        { L"Item Efx (Break)",  LANDMAKER_P_TILE(0x1996C+0x160), INVALID_UNIT_VALUE, 0x00 },
    }
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_HIRYU =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Hiryu),
    { L"Chibi Sprites",           0x17464+0x0, indexLandMaker_Hiryu, 0x01 },
    { L"Efx 1 (Transportation)",  0x17464+0x40, indexLandMaker_Hiryu, 0x02 },
    { L"Efx 2 (Win Grid Flames)", 0x17464+0x80, indexLandMaker_Hiryu, 0x03 },
    { L"Efx 3 (Unknown/Unused)",  0x17464+0xC0, indexLandMaker_Hiryu, 0x04 },
    { L"Efx 4 (Attack)",          0x17464+0x100, indexLandMaker_Hiryu, 0x05 },
    { L"Efx 5 (Fire, General)",   0x17464+0x140, indexLandMaker_Hiryu, 0x06 },

    { L"Damage - Burned?",  0x17464+0x214, indexLandMaker_Hiryu, 0x08 },
    { L"Damage - Frozen",   0x17464+0x254, indexLandMaker_Hiryu, 0x09 },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_AIFA =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Aifa),
    { L"Chibi Sprites",          0x19580+0x0, indexLandMaker_Aifa, 0x01 },
    { L"Efx 1 (Transportation)", 0x19580+0x40, indexLandMaker_Aifa, 0x02 },
    { L"Efx 2 (Win Flowers)",    0x19580+0x80, indexLandMaker_Aifa, 0x03 },
    { L"Efx 4 (Attack)",         0x19580+0x100, indexLandMaker_Aifa, 0x05 },
    { L"Efx 5 (5x5)",            0x19580+0x140, indexLandMaker_Aifa, 0x06 },

    // inconsistent
    //{ L"Damage - Burned?",  0x19580+0x214, indexLandMaker_Aifa, 0x00 },
    { L"Damage - Frozen",  0x19580+0x254, indexLandMaker_Aifa, 0x09 },
    { L"Damage - Mud",     0x19580+0x294, indexLandMaker_Aifa, 0x0a },
    { L"Damage - Zapped", 0x19580+0x2D4, indexLandMaker_Aifa, 0x0b },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_SOUMEI =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Soumei),
    { L"Chibi Sprites",       0x204FC+0x0,  indexLandMaker_Soumei, 0x01 },
    { L"Efx 1 (5x5)",         0x204FC+0x40, INVALID_UNIT_VALUE, 0x02 },
    //{ L"Efx 2 (Win?)",           0x204FC+0x80, INVALID_UNIT_VALUE, 0x00 },
    //{ L"Efx 3 (Unknown/Unused)", 0x204FC+0xC0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 4 (Attack Splash)", 0x204FC+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (Ice)",           0x204FC+0x140, INVALID_UNIT_VALUE, 0x06 },

    // inconsistent
    { L"Damage - Burned",     0x204FC+0x214, INVALID_UNIT_VALUE, 0x08 },
    { L"Damage - Unknown 1?", 0x204FC+0x254, INVALID_UNIT_VALUE, 0x0a },
    { L"Damage - Frozen",     0x204FC+0x294, INVALID_UNIT_VALUE, 0x09 },
    { L"Damage - Unknown 2?", 0x204FC+0x2D4, INVALID_UNIT_VALUE, 0x0b },
    { L"Attack (Ice Pillar)", 0x204FC+0x314, INVALID_UNIT_VALUE, 0x0f },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_RENKI =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Renki),
    { L"Chibi Sprites",              0x1C9EC+0x0,  indexLandMaker_Renki, 0x01 },
    { L"Efx 1 (Transportation End)", 0x1C9EC+0x40, INVALID_UNIT_VALUE, 0x02 },
    { L"Efx 2 (Unknown/Unused)",     0x1C9EC+0x80, INVALID_UNIT_VALUE, 0x03 },
    { L"Efx 3 (Win Sinkhole)",       0x1C9EC+0xC0, INVALID_UNIT_VALUE, 0x04 },
    { L"Efx 4 (Attack, Transportation)", 0x1C9EC+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (Mud, General)",       0x1C9EC+0x140, INVALID_UNIT_VALUE, 0x06 },
    { L"Efx 6 (Bats/Balls)",         0x1C9EC+0x180, INVALID_UNIT_VALUE, 0x07 },
    
    // inconsistent
    //{ L"Damage - Burned?",   0x1C9EC+0x214, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Frozen?",     0x1C9EC+0x254, INVALID_UNIT_VALUE, 0x09 },
    //{ L"Damage - Zapped?",  0x1C9EC+0x294, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Infatuated?", 0x1C9EC+0x2D4, INVALID_UNIT_VALUE, 0x0c },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_YOUEN =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Youen),
    { L"Chibi Sprites",               0x15C70+0x0,  indexLandMaker_Youen, 0x01 },
    { L"Efx 1 (Transportation)",      0x15C70+0x40, INVALID_UNIT_VALUE, 0x02 },
    { L"Efx 2 (2x2,3x3,5x5 Dancers)", 0x15C70+0x80, INVALID_UNIT_VALUE, 0x03 },
    //
    //
    { L"Efx 5 (Cherry Petals)",       0x15C70+0x140, INVALID_UNIT_VALUE, 0x06 },
    
    // inconsistent
    { L"Damage - Frozen",   0x15C70+0x214, INVALID_UNIT_VALUE, 0x09 },
    { L"Damage - Mud?",     0x15C70+0x254, INVALID_UNIT_VALUE, 0x0d },
    //{ L"Damage - Zapped?",   0x15C70+0x294, INVALID_UNIT_VALUE, 0x00 },
    //{ L"Damage - Infatuated?", 0x15C70+0x2D4, INVALID_UNIT_VALUE, 0x00 },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_KOUKO =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Kouko),
    { L"Chibi Sprites",        0x14870+0x0, indexLandMaker_Kouko, 0x01 },
    //{ L"Efx 1 (Unused?)",        0x14870+0x40, INVALID_UNIT_VALUE, 0x00 },
    //{ L"Efx 2 (Unused?)",        0x14870+0x80, INVALID_UNIT_VALUE, 0x00 },
    //{ L"Efx 3 (Unknown/Unused)", 0x14870+0xC0, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 4 (Rock Attack)",  0x14870+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (2x2 Soldiers)", 0x14870+0x140, INVALID_UNIT_VALUE, 0x06 },
    
    // inconsistent
    { L"Damage - Unknown?", 0x14870+0x214, INVALID_UNIT_VALUE, 0x08 },
    { L"Damage - Frozen",   0x14870+0x254, INVALID_UNIT_VALUE, 0x09 },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_RINREI =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Rinrei),
    { L"Chibi Sprites",                 0x1BBF4+0x0,  indexLandMaker_Rinrei, 0x01 },
    //{ L"Efx 1 (Unknown/Unused?)",     0x1BBF4+0x40, INVALID_UNIT_VALUE, 0x00 },
    { L"Efx 2 (5x5 Grasshopper)",       0x1BBF4+0x80, INVALID_UNIT_VALUE, 0x03 },
    //
    { L"Efx 4 (Spikes Attack/Zapped)", 0x1BBF4+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (Flying Ring)",           0x1BBF4+0x140, INVALID_UNIT_VALUE, 0x06 },
    
    // inconsistent
    //{ L"Damage - Unknown?",  0x1BBF4+0x214, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Frozen?",              0x1BBF4+0x254, INVALID_UNIT_VALUE, 0x09 },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_ROUSHINSHI =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Roushinshi),
    { L"Chibi Sprites",                      0x1BDD8+0x0,  indexLandMaker_Roushinshi, 0x01 },
    { L"Efx 1 (Transportation/4x4,5x5 Efx)", 0x1BDD8+0x40, INVALID_UNIT_VALUE, 0x02 },
    { L"Efx 2 (Win Waves/Zapped)",          0x1BDD8+0x80, INVALID_UNIT_VALUE, 0x03 },
    //{ L"Efx 3 (Unknown/Unused)",           0x1BDD8+0xC0, INVALID_UNIT_VALUE, 0x04 },
    { L"Efx 4 (Attack (Lower))",             0x1BDD8+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (3x3 Effect)",                 0x1BDD8+0x140, INVALID_UNIT_VALUE, 0x06 },
    { L"Efx 6 (Intro Lightning)",            0x1BDD8+0x180, INVALID_UNIT_VALUE, 0x07 },
    //{ L"Efx 7 (Unknown/Unused)",           0x1BDD8+0x1C0, INVALID_UNIT_VALUE, 0x00 },
    
    // inconsistent
    { L"Damage - Frozen",        0x1BDD8+0x214, INVALID_UNIT_VALUE, 0x09 },
    { L"Damage - Burned/Mud",    0x1BDD8+0x254, INVALID_UNIT_VALUE, 0x08 },
    //{ L"Damage - Zapped?",     0x1BDD8+0x294, INVALID_UNIT_VALUE, 0x00 },
    //{ L"Damage - Infatuated?",  0x1BDD8+0x2D4, INVALID_UNIT_VALUE, 0x00 },
    { L"Attack Lighting (Upper)", 0x1BDD8+0x314, INVALID_UNIT_VALUE, 0x0f },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_RANJU =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Ranju),
    { L"Chibi Sprites",          0x1D578+0x0,  indexLandMaker_Ranju, 0x01 },
    { L"Efx 1 (Transportation)", 0x1D578+0x40, INVALID_UNIT_VALUE, 0x02 },
    { L"Efx 2 (Attack/Unused?)", 0x1D578+0x80, INVALID_UNIT_VALUE, 0x03 },
    //{ L"Efx 3 (Unknown/Unused)", 0x1D578+0xC0, INVALID_UNIT_VALUE, 0x04 },
    { L"Efx 4 (2x2 Ranju/3x3 Efx/Hearts Efx)", 0x1D578+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (Attack Heart Eyes)",            0x1D578+0x140, INVALID_UNIT_VALUE, 0x06 },
    { L"Efx 6 (2x2 Efx/Damage - Mud)",         0x1D578+0x180, INVALID_UNIT_VALUE, 0x07 },
    { L"Efx 7 (Fire?)",                        0x1D578+0x1C0, INVALID_UNIT_VALUE, 0x0f },
    
    // inconsistent
    { L"Damage - Frozen",   0x1D578+0x214, INVALID_UNIT_VALUE, 0x09 },
    //{ L"Damage - Mud?",   0x1D578+0x254, INVALID_UNIT_VALUE, 0x00 },
    { L"Damage - Zapped?", 0x1D578+0x294, INVALID_UNIT_VALUE, 0x0b },
};

const std::vector<sGCBUPF_RelativePaletteData> LANDMAKER_P_Palettes_CHARIMG_GAIRA =
{
    LANDMAKER_P_CHARIMG_STRUCTURES(indexLandMaker_Gaira),
    { L"Chibi Sprites",               0x216AC+0x0, indexLandMaker_Gaira, 0x01 },
    //{ L"Efx 1 (Unknown)",           0x216AC+0x40, INVALID_UNIT_VALUE, 0x02 },
    //{ L"Efx 2 (Attack)",            0x216AC+0x80, INVALID_UNIT_VALUE, 0x03 },
    { L"Efx 3 (Chibi (Ranju Stage))", 0x216AC+0xC0, INVALID_UNIT_VALUE, 0x04 },
    { L"Efx 4 (Attack Blast)",        0x216AC+0x100, INVALID_UNIT_VALUE, 0x05 },
    { L"Efx 5 (Win Fire 1/2x2 Efx)",  0x216AC+0x140, INVALID_UNIT_VALUE, 0x06 },
    { L"Efx 6 (Win Fire 2)",          0x216AC+0x180, INVALID_UNIT_VALUE, 0x07 },
    
    // inconsistent
    { L"Damage - Unknown/Unused?",    0x216AC+0x214, INVALID_UNIT_VALUE, 0x08 },
    { L"Damage - Frozen",             0x216AC+0x254, INVALID_UNIT_VALUE, 0x09 },
};



const sGCBUPF_ExtrasCollection LANDMAKER_P_HIRYU_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x6A98), indexLandMaker_Hiryu, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xD17C), indexLandMaker_Hiryu, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x15DE0), indexLandMaker_Hiryu, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_AIFA_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x5E58), indexLandMaker_Aifa, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xD47C), indexLandMaker_Aifa, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x14460), indexLandMaker_Aifa, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_SOUMEI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x8528), indexLandMaker_Soumei, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xEDBC), indexLandMaker_Soumei, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x15864), indexLandMaker_Soumei, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_RENKI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x8568), indexLandMaker_Renki, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xFF5C), indexLandMaker_Renki, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x15C30), indexLandMaker_Renki, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_YOUEN_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x9518), indexLandMaker_Youen, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0x1081C), indexLandMaker_Youen, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x18B00), indexLandMaker_Youen, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_KOUKO_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x62BC), indexLandMaker_Kouko, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xC430), indexLandMaker_Kouko, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x118A4), indexLandMaker_Kouko, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_RINREI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x9138), indexLandMaker_Rinrei, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0x11F6C), indexLandMaker_Rinrei, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x1B040), indexLandMaker_Rinrei, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_ROUSHINSHI_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x57C8), indexLandMaker_Roushinshi, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xA50C), indexLandMaker_Roushinshi, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x11AD0), indexLandMaker_Roushinshi, 0x26 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_RANJU_EXTRAS =
{
    L"Attack Cut-Ins", // ranju has censored portraits for playstation
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0x6CE8), indexLandMaker_Ranju, 0x27 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0xC2EC), indexLandMaker_Ranju, 0x28 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x13D40), indexLandMaker_Ranju, 0x29 },
    }
};
const sGCBUPF_ExtrasCollection LANDMAKER_P_GAIRA_EXTRAS =
{
    L"Attack Cut-Ins",
    {
        { L"Attack Art 1", LANDMAKER_P_PORTRAIT(0xA7A8), indexLandMaker_Gaira, 0x24 },
        { L"Attack Art 2", LANDMAKER_P_PORTRAIT(0x12DFC), indexLandMaker_Gaira, 0x25 },
        { L"Attack Art 3", LANDMAKER_P_PORTRAIT(0x1CF0C), indexLandMaker_Gaira, 0x26 },
    }
};

// board bg palettes not supported yet, but handle similarly to CHARIMG
#define LANDMAKER_P_BOARD_BG(idx)    \
    { L"Board Case", LANDMAKER_P_PORTRAIT(0xFF10), indexLandMaker_Stages, idx+0x0 },\
    { L"Board Grid", LANDMAKER_P_PORTRAIT(0xFF90), indexLandMaker_Stages, idx+0x1 },\
    { L"Board Grid (Danger Flash 1)", LANDMAKER_P_PORTRAIT(0x10010), indexLandMaker_Stages, idx+0x1 },\
    { L"Board Grid (Danger Flash 2)", LANDMAKER_P_PORTRAIT(0x10090), indexLandMaker_Stages, idx+0x1 },


const sGCBUPF_ExtrasCollection LANDMAKER_P_CHARSEL_TILES =
{
    L"Palettes",
    {
        { L"Tile - Red",    LANDMAKER_P_TILE(0x117C8), indexLandMaker_Common, 0x00 },
        { L"Tile - Blue",   LANDMAKER_P_TILE(0x117C8+0x20), indexLandMaker_Common, 0x00 },
        { L"Tile - Orange", LANDMAKER_P_TILE(0x117C8+0x40), indexLandMaker_Common, 0x00 },
        { L"Tile - Yellow", LANDMAKER_P_TILE(0x117C8+0x60), indexLandMaker_Common, 0x00 },
        { L"Tile - Green",  LANDMAKER_P_TILE(0x117C8+0x80), indexLandMaker_Common, 0x00 },
        { L"Tile - Purple", LANDMAKER_P_TILE(0x117C8+0xA0), indexLandMaker_Common, 0x00 },
    }
};


const std::vector<sGCBUPF_BasicFileData> LandMaker_P_CharacterData =
{
    { L"GAME\\GAME1.IMG", L"Common (Normal)", 109048, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_Palettes_GAME_Common },
    { L"GAME\\GAME2.IMG", L"Common (Another World)", 109048, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_Palettes_GAME_Common },
    { L"SEL\\ASELECT1.CMP", L"Character Select Tiles", 71836, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_CHARSEL_TILES }, 
    
    { L"CHAR\\PAIMG.IMG", L"Hiryu", 96376, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_HIRYU, 0x0 },
    { L"GAME2\\PICA.IMG", L"Hiryu Portraits", 90200, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_HIRYU_EXTRAS },
    
    { L"CHAR\\PBIMG.IMG", L"Aifa", 104852, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_AIFA, 0x0 },
    { L"GAME2\\PICB.IMG", L"Aifa Portraits", 83672, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_AIFA_EXTRAS },
    
    { L"CHAR\\PCIMG.IMG", L"Soumei", 133392, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_SOUMEI, 0x0 },
    { L"GAME2\\PICC.IMG", L"Soumei Portraits", 88796, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_SOUMEI_EXTRAS },

    { L"CHAR\\PDIMG.IMG", L"Renki", 118272, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_RENKI, 0x0 },
    { L"GAME2\\PICD.IMG", L"Renki Portraits", 89768, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_RENKI_EXTRAS },
    
    { L"CHAR\\PEIMG.IMG", L"Youen", 90244, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_YOUEN, 0x0 },
    { L"GAME2\\PICE.IMG", L"Youen Portraits", 101752, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_YOUEN_EXTRAS },
    
    { L"CHAR\\PFIMG.IMG", L"Kouko", 85124, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_KOUKO, 0x0 },
    { L"GAME2\\PICF.IMG", L"Kouko Portraits", 72476, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_KOUKO_EXTRAS },
    
    { L"CHAR\\PGIMG.IMG", L"Rinrei", 114696, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_RINREI, 0x0 },
    { L"GAME2\\PICG.IMG", L"Rinrei Portraits", 111288, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_RINREI_EXTRAS },
    
    { L"CHAR\\PHIMG.IMG", L"Roushinshi", 115180, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_ROUSHINSHI, 0x0 },
    { L"GAME2\\PICH.IMG", L"Roushinshi Portraits", 73032, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_ROUSHINSHI_EXTRAS },
    
    { L"CHAR\\PIIMG.IMG", L"Ranju", 121228, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_RANJU, 0x0 },
    { L"GAME2\\PICI.IMG", L"Ranju Portraits", 81848, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_RANJU_EXTRAS },
    
    { L"CHAR\\PZIMG.IMG", L"Gaira", 137920, LANDMAKER_P_PaletteNodesNormal, LANDMAKER_P_Palettes_CHARIMG_GAIRA, 0x0 },
    { L"GAME2\\PICZ.IMG", L"Gaira Portraits", 119172, {}, {}, 0x0, INVALID_UNIT_VALUE, 0, LANDMAKER_P_GAIRA_EXTRAS },

    // DEMO\\RANKING.IMG "High Score Icons" @0xE050 (32 colors (64B) ea.)
};
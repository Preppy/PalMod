#pragma once

#define LandMaker_A_STRUCTURE(addr) addr, addr + 0x20*4
#define LandMaker_A_PORTRAIT(addr) addr, addr + 0x40*4
#define LandMaker_A_CHIBI(addr) addr, addr + 0x20*4
#define LandMaker_A_ICON(addr) addr, addr + 0x20*4
#define LandMaker_A_TILE(addr) addr, addr + 0x10*4
#define LandMaker_A_SPARKLE(addr) addr, addr + 0x20*4
#define LandMaker_A_BG(addr) addr, addr + 0x40*4

const std::vector<uint16_t>LandMaker_A_IMGIDS_USED =
{
};

// 2.02 O (landmakr) addresses
// ref table at 0x979ee
const sGame_PaletteDataset LandMaker_A_202O_HIRYU_PALETTES[] =
{
    { L"Hiryu/Soumei Structures - Red",    LandMaker_A_STRUCTURE(0x01d9b0) },
    { L"Hiryu/Soumei Structures - Blue",   LandMaker_A_STRUCTURE(0x01d5b0) },
    { L"Hiryu/Soumei Structures - Orange", LandMaker_A_STRUCTURE(0x0d3234) },
    { L"Hiryu/Soumei Structures - Green",  LandMaker_A_STRUCTURE(0x01d430) },
    { L"Hiryu Structures - Yellow",        LandMaker_A_STRUCTURE(0x0d2d34) }, // [sic], only yellow unique
    { L"Hiryu/Soumei Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2db4) },
    { L"Hiryu/Soumei Structures - Purple", LandMaker_A_STRUCTURE(0x01d130) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01ceb0) },
    { L"Hiryu/Gaira Efx/Attack - Fire", LandMaker_A_CHIBI(0x01bebc+0x3F4) },
    { L"Hiryu/Youen Efx 2",       LandMaker_A_CHIBI(0x01bf3c+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x019cbc+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x027a3c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x029030) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x029130) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x023a30) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x027b3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x018c3c+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_AIFA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019f30) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x017d30) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01adb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017fb0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0194b0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2e34) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x016fb0) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01a1b0) },
    { L"Aifa Efx - Leaves",LandMaker_A_CHIBI(0x01c43c+0x3F4) },
    { L"Aifa Efx 2",     LandMaker_A_CHIBI(0x0185bc+0x3F4) },
    { L"Aifa Attack - Vines", LandMaker_A_CHIBI(0x01c4bc+0x3F4) },
    { L"Aifa Damaged Fire",   LandMaker_A_CHIBI(0x01cc3c+0x3F4) },
    { L"Aifa Damaged Mud",    LandMaker_A_CHIBI(0x01a43c+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x01bcbc+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02693c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x028b30) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x028c30) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x028430) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x024c3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x01723c+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_SOUMEI_PALETTES[] =
{
    { L"Soumei Structures - Yellow",        LandMaker_A_STRUCTURE(0x01dd30) }, // [sic], only yellow unique
    { L"Chibi Sprites",         LandMaker_A_CHIBI(0x01b6b0) },
    { L"Soumei Efx 1 - Ice",    LandMaker_A_CHIBI(0x01713c+0x3F4) },
    { L"Soumei Efx 2",          LandMaker_A_CHIBI(0x01e03c+0x3F4) },
    { L"Soumei Attack - Ice",   LandMaker_A_CHIBI(0x01703c+0x3F4) },
    { L"Soumei Damaged Fire",   LandMaker_A_CHIBI(0x01b43c+0x3F4) },
    { L"Soumei Damaged Frozen", LandMaker_A_CHIBI(0x016f3c+0x3F4) },
    { L"Soumei Damaged Shock",  LandMaker_A_CHIBI(0x01b3bc+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x01b13c+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x023c3c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x023e30) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x024b30) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x025630) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x023b3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x016c3c+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_RENKI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01dbb0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01d630) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01dcb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x01d6b0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01ddb0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2eb4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01d730) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01bab0) },
    { L"Renki Efx 1 - Mud",  LandMaker_A_CHIBI(0x01a03c+0x3F4) },
    { L"Renki Efx 2",        LandMaker_A_CHIBI(0x01b63c+0x3F4) },
    { L"Renki Attack - Mud", LandMaker_A_CHIBI(0x01a33c+0x3F4) },
    { L"Renki Damaged Fire", LandMaker_A_CHIBI(0x01a53c+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x01adbc+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02663c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x027430) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x027330) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x027730) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x02553c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x017f3c+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_YOUEN_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019eb0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x017cb0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01ad30) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017f30) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x019ab0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2f34) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x0197b0) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01c3b0) },
    // Youen Efx 1 to palram 0x7a00 is shared with hiryu efx (1bf3c (j))
    { L"Youen Efx 2",         LandMaker_A_CHIBI(0x01c23c+0x3F4) },
    { L"Youen Attack - Song", LandMaker_A_CHIBI(0x01c1bc+0x3F4) },
    { L"Youen Damaged Frozen",LandMaker_A_CHIBI(0x016fbc+0x3F4) },
    { L"Youen Damaged Mud",   LandMaker_A_CHIBI(0x01a1bc+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x0197bc+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02763c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x025c30) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x025d30) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x025830) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x02443c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x018dbc+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_KOUKO_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019db0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x018730) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01abb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x018130) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x018cb0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2fb4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x018a30) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f4b0) },
    // kouko efx 1 uses normal sprite palette
    { L"Kouko Efx 2",         LandMaker_A_CHIBI(0x01603c+0x3F4) },
    { L"Kouko Attack - Rock", LandMaker_A_CHIBI(0x01ef3c+0x3F4) },
    { L"Kouko Damaged Frozen",LandMaker_A_CHIBI(0x01e8bc+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x019f3c+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x026c3c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x029730) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x029630) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x029d30) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x026e3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x018f3c+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_RINREI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019e30) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x017bb0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01afb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x0181b0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0195b0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d3034) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x019830) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f030) },
    // rinrei efx 1 uses normal sprite palette
    { L"Rinrei Efx 2",           LandMaker_A_CHIBI(0x01f4bc+0x3F4) },
    { L"Rinrei Attack - Spikes", LandMaker_A_CHIBI(0x01f5bc+0x3F4) },
    { L"Rinrei Damaged Frozen",  LandMaker_A_CHIBI(0x01e93c+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x01dbbc+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02753c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x025330) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x025e30) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x025530) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x029e3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x0192bc+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_ROUSHINSHI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01af30) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x018830) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01ae30) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x018230) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x019a30) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d30b4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x019130) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f6b0) },
    { L"Roushinshi Efx 1 - Lightning", LandMaker_A_CHIBI(0x01f73c+0x3F4) },
    { L"Roushinshi Efx 2", LandMaker_A_CHIBI(0x01f63c+0x3F4) },
    { L"Roushinshi Attack - Shock", LandMaker_A_CHIBI(0x01f43c+0x3F4) },
    { L"Roushinshi/Boss Damaged Frozen", LandMaker_A_CHIBI(0x01e83c+0x3F4) },
    { L"Roushinshi Damaged Mud", LandMaker_A_CHIBI(0x01ee3c+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x01903c+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02423c+0x3F4) },
    { L"Attack Art 1",     LandMaker_A_PORTRAIT(0x028030) },
    { L"Attack Art 2",     LandMaker_A_PORTRAIT(0x024330) },
    { L"Attack Art 3",     LandMaker_A_PORTRAIT(0x024430) },
    { L"Win Portrait (Roushinshi)",   LandMaker_A_PORTRAIT(0x02433c+0x3F4) },
    { L"Win Portrait (Shaoren)",      LandMaker_A_PORTRAIT(0x026d3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x016a3c+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_RANJU_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01a9b0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0187b0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01ac30) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x018930) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x019b30) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d3134) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x0183b0) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f7b0) },
    // ranju efx 1 uses normal sprite palette
    { L"Ranju Efx 2",           LandMaker_A_CHIBI(0x0f6b94+0x460) },
    { L"Ranju Attack - Hearts", LandMaker_A_CHIBI(0x01e1bc+0x3F4) },
    { L"Ranju Damaged Mud",    LandMaker_A_CHIBI(0x01ecbc+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x01db3c+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02533c+0x3F4) },
    { L"Attack Art 1",   LandMaker_A_PORTRAIT(0x027b30) },
    { L"Attack Art 2",   LandMaker_A_PORTRAIT(0x025f30) },
    { L"Attack Art 3",   LandMaker_A_PORTRAIT(0x026e30) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x02713c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x018cbc+0x3F4) },
};
const sGame_PaletteDataset LandMaker_A_202O_GAIRA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019230) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0184b0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x0185b0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x0180b0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x018c30) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d31b4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x018530) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01ee30) },
    // gaira efx 1 uses normal sprite palette
    // gaira efx 2 is shared with hiryu
    // gaira has a sneaky presence on the select screen
    { L"Gaira Attack - Blast/Select Orb",  LandMaker_A_CHIBI(0x016b3c+0x3F4) },
    { L"Select Icon",    LandMaker_A_ICON(0x018b3c+0x3F4) },
    { L"Select Portrait",LandMaker_A_PORTRAIT(0x02463c+0x3F4) },
    { L"Attack Art 1",   LandMaker_A_PORTRAIT(0x027d30) },
    { L"Attack Art 2",   LandMaker_A_PORTRAIT(0x02a130) },
    { L"Attack Art 3",   LandMaker_A_PORTRAIT(0x026f30) },
    { L"Win Portrait",   LandMaker_A_PORTRAIT(0x028e3c+0x3F4) },
    { L"Map Buildings", LandMaker_A_STRUCTURE(0x01773c+0x3F4) },
};

const sGame_PaletteDataset LandMaker_A_202O_COMMON_PALETTES[] =
{
    { L"Tiles - Red",    LandMaker_A_TILE(0x01b0b0) },
    { L"Tiles - Blue",   LandMaker_A_TILE(0x0199b0) },
    { L"Tiles - Orange", LandMaker_A_TILE(0x01b330) },
    { L"Tiles - Green",  LandMaker_A_TILE(0x0182b0) },
    { L"Tiles - L. Blue",LandMaker_A_TILE(0x01b0f0) },
    { L"Tiles - Yellow", LandMaker_A_TILE(0x0199f0) },
    { L"Tiles - Gray",   LandMaker_A_TILE(0x01b370) },
    { L"Tiles - Purple", LandMaker_A_TILE(0x0182f0) },
    { L"Efx Corner Shine - Red",    LandMaker_A_SPARKLE(0x016830) },
    { L"Efx Corner Shine - Blue",   LandMaker_A_SPARKLE(0x0165b0) },
    { L"Efx Corner Shine - Orange", LandMaker_A_SPARKLE(0x0168b0) },
    { L"Efx Corner Shine - Green",  LandMaker_A_SPARKLE(0x016530) },
    { L"Efx Corner Shine - L. Blue",LandMaker_A_SPARKLE(0x016630) },
    { L"Efx Corner Shine - Yellow", LandMaker_A_SPARKLE(0x016730) },
    { L"Efx Corner Shine - Gray",   LandMaker_A_SPARKLE(0x0167b0) },
    { L"Efx Corner Shine - Purple", LandMaker_A_SPARKLE(0x0166b0) },
    { L"Efx Color Spread - Red",    LandMaker_A_SPARKLE(0x016c30) },
    { L"Efx Color Spread - Blue",   LandMaker_A_SPARKLE(0x0169b0) },
    { L"Efx Color Spread - Orange", LandMaker_A_SPARKLE(0x016d30) },
    { L"Efx Color Spread - Green",  LandMaker_A_SPARKLE(0x016930) },
    { L"Efx Color Spread - L. Blue",LandMaker_A_SPARKLE(0x016a30) },
    { L"Efx Color Spread - Yellow", LandMaker_A_SPARKLE(0x016b30) },
    { L"Efx Color Spread - Gray",   LandMaker_A_SPARKLE(0x0d27b4) },
    { L"Efx Color Spread - Purple", LandMaker_A_SPARKLE(0x016ab0) },
    { L"Structures - Flash", LandMaker_A_STRUCTURE(0x1d530) },
};

const sGame_PaletteDataset LandMaker_A_202O_BOARD_PALETTES[] =
{
    { L"Hiryu Board Enclosure", LandMaker_A_BG(0x1f93c+0x3f4) },
    { L"Hiryu Board Grid", LandMaker_A_BG(0x2323c+0x3f4) },
    { L"Aifa Board Enclosure", LandMaker_A_BG(0x20d3c+0x3f4) },
    { L"Aifa Board Grid", LandMaker_A_BG(0x2153c+0x3f4) },
    { L"Soumei Board Enclosure", LandMaker_A_BG(0x2193c+0x3f4) },
    { L"Soumei Board Grid", LandMaker_A_BG(0x22d3c+0x3f4) },
    { L"Renki Board Enclosure", LandMaker_A_BG(0x21c3c+0x3f4) },
    { L"Renki Board Grid", LandMaker_A_BG(0x21d3c+0x3f4) },
    { L"Youen Board Enclosure", LandMaker_A_BG(0x2233c+0x3f4) },
    { L"Youen Board Grid", LandMaker_A_BG(0x23e3c+0x3f4) },
    { L"Kouko Board Enclosure", LandMaker_A_BG(0x2173c+0x3f4) },
    { L"Kouko Board Grid", LandMaker_A_BG(0x2373c+0x3f4) },
    { L"Rinrei Board Enclosure", LandMaker_A_BG(0x2383c+0x3f4) },
    { L"Rinrei Board Grid", LandMaker_A_BG(0x22c3c+0x3f4) },
    { L"Roushinshi Board Enclosure", LandMaker_A_BG(0x2223c+0x3f4) },
    { L"Roushinshi Board Grid", LandMaker_A_BG(0x2283c+0x3f4) },
    { L"Ranju Board Enclosure", LandMaker_A_BG(0x2053c+0x3f4) },
    { L"Ranju Board Grid", LandMaker_A_BG(0x20e3c+0x3f4) },
    { L"Gaira Board Enclosure", LandMaker_A_BG(0x2203c+0x3f4) },
    { L"Gaira Board Grid", LandMaker_A_BG(0x2393c+0x3f4) },
};
const sGame_PaletteDataset LandMaker_A_202O_BOARD_AW_PALETTES[] =
{
    // alternate board graphics:
    { L"(Another World)Hiryu Board Enclosure", LandMaker_A_BG(0x2653c+0x3f4) },
    { L"(Another World)Hiryu Board Grid", LandMaker_A_BG(0x2783c+0x3f4) },
    { L"(Another World)Aifa Board Enclosure", LandMaker_A_BG(0x27d3c+0x3f4) },
    { L"(Another World)Aifa Board Grid", LandMaker_A_BG(0x2943c+0x3f4) },
    { L"(Another World)Soumei Board Enclosure", LandMaker_A_BG(0x2483c+0x3f4) },
    { L"(Another World)Soumei Board Grid", LandMaker_A_BG(0x2623c+0x3f4) },
    { L"(Another World)Renki Board Enclosure", LandMaker_A_BG(0x24a3c+0x3f4) },
    { L"(Another World)Renki Board Grid", LandMaker_A_BG(0x2813c+0x3f4) },
    // palette swap only:
    { L"(Another World)Youen Board Enclosure", LandMaker_A_BG(0x24b3c+0x3f4) },
    { L"(Another World)Youen Board Grid", LandMaker_A_BG(0x25c3c+0x3f4) },
    { L"(Another World)Kouko Board Enclosure", LandMaker_A_BG(0x2743c+0x3f4) },
    { L"(Another World)Kouko Board Grid", LandMaker_A_BG(0x25d3c+0x3f4) },
    // alternate board graphics:
    { L"(Another World)Rinrei Board Enclosure", LandMaker_A_BG(0x29b3c+0x3f4) },
    { L"(Another World)Rinrei Board Grid", LandMaker_A_BG(0x29c3c+0x3f4) },
    // palette swap only:
    { L"(Another World)Roushinshi Board Enclosure", LandMaker_A_BG(0x22e3c+0x3f4) },
    { L"(Another World)Roushinshi Board Grid", LandMaker_A_BG(0x2633c+0x3f4) },
    { L"(Another World)Ranju Board Enclosure", LandMaker_A_BG(0x2293c+0x3f4) },
    { L"(Another World)Ranju Board Grid", LandMaker_A_BG(0x27e3c+0x3f4) },
    { L"(Another World)Gaira Board Enclosure", LandMaker_A_BG(0x2353c+0x3f4) },
    { L"(Another World)Gaira Board Grid", LandMaker_A_BG(0x2683c+0x3f4) },
};

const sDescTreeNode LandMaker_A_202O_HIRYU_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_HIRYU_PALETTES, ARRAYSIZE(LandMaker_A_202O_HIRYU_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_AIFA_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_AIFA_PALETTES, ARRAYSIZE(LandMaker_A_202O_AIFA_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_SOUMEI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_SOUMEI_PALETTES, ARRAYSIZE(LandMaker_A_202O_SOUMEI_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_RENKI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_RENKI_PALETTES, ARRAYSIZE(LandMaker_A_202O_RENKI_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_YOUEN_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_YOUEN_PALETTES, ARRAYSIZE(LandMaker_A_202O_YOUEN_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_KOUKO_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_KOUKO_PALETTES, ARRAYSIZE(LandMaker_A_202O_KOUKO_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_RINREI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_RINREI_PALETTES, ARRAYSIZE(LandMaker_A_202O_RINREI_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_ROUSHINSHI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_ROUSHINSHI_PALETTES, ARRAYSIZE(LandMaker_A_202O_ROUSHINSHI_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_RANJU_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_RANJU_PALETTES, ARRAYSIZE(LandMaker_A_202O_RANJU_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_GAIRA_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_GAIRA_PALETTES, ARRAYSIZE(LandMaker_A_202O_GAIRA_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_COMMON_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_COMMON_PALETTES, ARRAYSIZE(LandMaker_A_202O_COMMON_PALETTES) }
};
const sDescTreeNode LandMaker_A_202O_BOARD_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_BOARD_PALETTES, ARRAYSIZE(LandMaker_A_202O_BOARD_PALETTES) },
    { L"Another World", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_BOARD_AW_PALETTES, ARRAYSIZE(LandMaker_A_202O_BOARD_AW_PALETTES) }
};

const sDescTreeNode LandMaker_A_202O_UNITS[] =
{
    { L"Common", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_COMMON_COLLECTION, ARRAYSIZE(LandMaker_A_202O_COMMON_COLLECTION) },
    { L"Hiryu", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_HIRYU_COLLECTION, ARRAYSIZE(LandMaker_A_202O_HIRYU_COLLECTION) },
    { L"Aifa", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_AIFA_COLLECTION, ARRAYSIZE(LandMaker_A_202O_AIFA_COLLECTION) },
    { L"Soumei", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_SOUMEI_COLLECTION, ARRAYSIZE(LandMaker_A_202O_SOUMEI_COLLECTION) },
    { L"Renki", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_RENKI_COLLECTION, ARRAYSIZE(LandMaker_A_202O_RENKI_COLLECTION) },
    { L"Youen", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_YOUEN_COLLECTION, ARRAYSIZE(LandMaker_A_202O_YOUEN_COLLECTION) },
    { L"Kouko", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_KOUKO_COLLECTION, ARRAYSIZE(LandMaker_A_202O_KOUKO_COLLECTION) },
    { L"Rinrei", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_RINREI_COLLECTION, ARRAYSIZE(LandMaker_A_202O_RINREI_COLLECTION) },
    { L"Roushinshi", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_ROUSHINSHI_COLLECTION, ARRAYSIZE(LandMaker_A_202O_ROUSHINSHI_COLLECTION) },
    { L"Ranju", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_RANJU_COLLECTION, ARRAYSIZE(LandMaker_A_202O_RANJU_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_GAIRA_COLLECTION, ARRAYSIZE(LandMaker_A_202O_GAIRA_COLLECTION) },
    { L"Board BGs", DESC_NODETYPE_TREE, (void*)LandMaker_A_202O_BOARD_COLLECTION, ARRAYSIZE(LandMaker_A_202O_BOARD_COLLECTION) },
};

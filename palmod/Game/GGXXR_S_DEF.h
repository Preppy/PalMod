#pragma once

#include "GGXXACR_Common.h"

const std::vector<uint16_t> GGXX_Rld_IMGIDS_USED =
{
    indexGGXXSprites_ACR_ABA,   // 0x00
    indexGGXXSprites_ACR_Anji,  // 0x01
    indexGGXXSprites_ACR_Axl,   // 0x02
    indexGGXXSprites_ACR_Baiken,// 0x03
    indexGGXXSprites_ACR_Bridget,   // 0x04
    indexGGXXSprites_ACR_Chipp, // 0x05
    indexGGXXSprites_ACR_Dizzy, // 0x06
    indexGGXXSprites_ACR_Eddie, // 0x07
    indexGGXXSprites_ACR_Faust, // 0x08
    indexGGXXSprites_ACR_Ino,   // 0x09
    indexGGXXSprites_ACR_Jam,   // 0x0a
    indexGGXXSprites_ACR_Johnny,// 0x0b
    indexGGXXSprites_ACR_Justice,   // 0x0c
    indexGGXXSprites_ACR_Kliff, // 0x0d
    indexGGXXSprites_ACR_Ky,// 0x0e
    indexGGXXSprites_ACR_May,   // 0x0f
    indexGGXXSprites_ACR_Millia,// 0x10
    indexGGXXSprites_ACR_OrderSol,  // 0x11
    indexGGXXSprites_ACR_Potemkin,  // 0x12
    indexGGXXSprites_ACR_RoboKy,// 0x13
    indexGGXXSprites_ACR_Slayer,// 0x14
    indexGGXXSprites_ACR_Sol,   // 0x15
    indexGGXXSprites_ACR_Testament, // 0x16
    indexGGXXSprites_ACR_Venom, // 0x17
    indexGGXXSprites_ACR_Zappa, // 0x18
    indexGGXXSprites_ACR_Bonus, // 0x19

    indexGGXXRldSprites_Baiken,             // 0x1A
    indexGGXXRldSprites_Bridget,            // 0x1B
    indexGGXXRldSprites_Ino,                // 0x1C
    indexGGXXRldSprites_Testament,          // 0x1D
};

const std::vector<LPCWSTR> GGXXRPaletteNames_Text =
{
    { L"Punch" },
    { L"Kick", },
    { L"Slash" },
    { L"Heavy Slash" },
    { L"Start" },
    { L"Dust" },

    { L"SP Punch" },
    { L"SP Kick" },
    { L"SP Slash"},
    { L"SP Heavy Slash" },
    { L"SP Start" },
    { L"SP Dust" },
};

const std::vector<sGCBUPF_RelativePaletteData> GGXXRPaletteNamesNormal =
{
    { L"Punch" },
    { L"Kick", 0x10 },
    { L"Slash", 0x20 },
    { L"Heavy Slash", 0x30 },
    { L"Start", 0x40 },
    { L"Dust", 0x50 },

    { L"SP Punch", 0x60 },
    { L"SP Kick", 0x70 },
    { L"SP Slash", 0x80 },
    { L"SP Heavy Slash", 0x90 },
    { L"SP Start", 0xa0 },
    { L"SP Dust", 0xb0 },
};

const sGCBUPF_BasicNodeData GGXXR_S_NormalNode =
{
    { L"Core Palettes" }, 0x0, GGXXRPaletteNames_Text
};

const std::vector<sGCBUPF_BasicFileData> GGXXR_S_CharacterData =
{
    { L"cddata03.bin",    L"Anji Mito",         64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x32051b0, indexGGXXSprites_ACR_Anji },
    { L"cddata03.bin",    L"Axl Low",           64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x14cea30, indexGGXXSprites_ACR_Axl },
    { L"cddata03.bin",    L"Baiken",            64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x2255cc0, indexGGXXSprites_ACR_Baiken },
    { L"cddata04.bin",    L"Bridget",           63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x124e830, indexGGXXRldSprites_Bridget },
    { L"cddata03.bin",    L"Chipp Zanuff",      64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x1c56e80, indexGGXXSprites_ACR_Chipp },
    { L"cddata03.bin",    L"Dizzy",             64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x3d19e80, indexGGXXSprites_ACR_Dizzy },
    { L"cddata03.bin",    L"Eddie",             64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x1f19600, indexGGXXSprites_ACR_Eddie },
    { L"cddata03.bin",    L"Faust",             64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x265d930, indexGGXXSprites_ACR_Faust },
    { L"cddata04.bin",    L"I-no",              63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x895050,  indexGGXXRldSprites_Ino },
    { L"cddata03.bin",    L"Jam Kuradoberi",    64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x2da6940, indexGGXXSprites_ACR_Jam },
    { L"cddata03.bin",    L"Johnny",            64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x35987c0, indexGGXXSprites_ACR_Johnny },
    { L"cddata04.bin",    L"Justice",           63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x1cb87d0, indexGGXXSprites_ACR_Justice },
    { L"cddata04.bin",    L"Kliff Undersn",     63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x1956c10, indexGGXXSprites_ACR_Kliff },
    { L"cddata03.bin",    L"Ky Kiske",          64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0xabc530,  indexGGXXSprites_ACR_Ky },
    { L"cddata03.bin",    L"May",               64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0xe85510,  indexGGXXSprites_ACR_May },
    { L"cddata03.bin",    L"Millia Rage",       64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x11b5930, indexGGXXSprites_ACR_Millia },
    { L"cddata03.bin",    L"Potemkin",          64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x1986470, indexGGXXSprites_ACR_Potemkin },
    { L"cddata04.bin",    L"Robo-Ky",           63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x1691310, indexGGXXSprites_ACR_RoboKy }, //Different sprites from ACR, but these work for now
    { L"cddata04.bin",    L"Slayer",            63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x35d820,  indexGGXXSprites_ACR_Slayer },
    { L"cddata03.bin",    L"Sol Badguy",        64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x692d20,  indexGGXXSprites_ACR_Sol },
    { L"cddata03.bin",    L"Testament",         64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x2a764f0  }, //Different sprites from ACR, our current ones wont work
    { L"cddata03.bin",    L"Venom",             64798720,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0x3852ea0, indexGGXXSprites_ACR_Venom },
    { L"cddata04.bin",    L"Zappa",             63557632,    GGXXR_S_NormalNode, GGXXRPaletteNamesNormal,    0xc68530,  indexGGXXSprites_ACR_Zappa },
};

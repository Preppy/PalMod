#pragma once

#include "GameClassByUnitPerFile.h"

const std::vector<uint16_t> GGXX_ACR_IMGIDS_USED =
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
};

// For the smaller Export listbox
const std::vector<LPCWSTR> GGXXACRPaletteNamesShort =
{
    L"Punch",
    L"Kick",
    L"Slash",
    L"Heavy",
    L"Dust",

    L"E. Punch",
    L"E. Kick",
    L"E. Slash",
    L"E. Heavy",
    L"E. Dust",

    L"S. Punch",
    L"S. Kick",
    L"S. Slash",
    L"S. Heavy",
    L"Gold",

    L"R. Punch",
    L"R. Kick",
    L"R. Slash",
    L"R. Heavy",
    L"Shadow",

    L"VsS. Dust",
    L"VsR. Dust",
};

const std::vector<LPCWSTR> GGXXACRExPaletteNamesShort =
{
    L"Punch",
    L"Kick",
    L"Slash",
    L"Heavy",
    L"Dust",

    L"E. Punch",
    L"E. Kick",
    L"E. Slash",
    L"E. Heavy",
    L"E. Dust",

    L"S. Punch",
    L"S. Kick",
    L"S. Slash",
    L"S. Heavy",
    L"Gold",

    L"R. Punch",
    L"R. Kick",
    L"R. Slash",
    L"R. Heavy",
    L"Shadow",
};

const sGCBUPF_BasicNodeData GGXXACR_NormalNode =
{
    { L"Core Palettes" }, 0x0, GGXXACRPaletteNamesShort
};

const sGCBUPF_BasicNodeData GGXXACR_EXNode =
{
    { L"Core Palettes" }, 0x0, GGXXACRExPaletteNamesShort
};

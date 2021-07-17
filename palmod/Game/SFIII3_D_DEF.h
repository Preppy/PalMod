#pragma once

const WCHAR SFIII3_D_UNITDESC[][16] = 
{
    L"Gill",          //0x00 on disc
    L"Alex",          //0x01
    L"Ryu",           //0x02
    L"Yun",           //0x03
    L"Dudley",        //0x04
    L"Necro",         //0x05
    L"Hugo",          //0x06
    L"Ibuki",         //0x07
    L"Elena",         //0x08
    L"Oro",           //0x09
    L"Yang",          //0x0a
    L"Ken",           //0x0b
    L"Sean",          //0x0c
    L"Urien",         //0x0d
    L"Gouki",         //0x0e
    //L"Shin Gouki",    //0x0f  // Shin Gouki is not present on the Dreamcast/PS2/PS3 versions
    L"Chun-Li",       //0x10
    L"Makoto",        //0x11
    L"Q",             //0x12
    L"Twelve",        //0x13
    L"Remy"           //0x14
};

constexpr auto SFIII3_D_NUMUNIT = ARRAYSIZE(SFIII3_D_UNITDESC);

// We use this to align the sorted units to their associated imgids
const UINT16 SFIII3_D_IMGID_SORTED_BY_UNIT[SFIII3_D_NUMUNIT] =
{
    index3SSprites_Gill,      // 0x16
    index3SSprites_Alex,      // 0x00
    index3SSprites_Ryu,       // 0x01
    index3SSprites_Yun,       // 0x02
    index3SSprites_Dudley,    // 0x03
    index3SSprites_Necro,     // 0x04
    index3SSprites_Hugo,      // 0x05
    index3SSprites_Ibuki,     // 0x06
    index3SSprites_Elena,     // 0x07
    index3SSprites_Oro,       // 0x08
    index3SSprites_Yang,      // 0x09
    index3SSprites_Ken,       // 0x0a
    index3SSprites_Sean,      // 0x0b
    index3SSprites_Urien,     // 0x0c
    index3SSprites_Gouki,     // 0x0d
    // index3SSprites_ShinGouki,  Shin Gouki is not present on the home game
    index3SSprites_ChunLi,    // 0x0f
    index3SSprites_Makoto,    // 0x10
    index3SSprites_Q,         // 0x11
    index3SSprites_Twelve,    // 0x12
    index3SSprites_Remy,      // 0x13
};

#pragma once

const WCHAR SFIII3_D_UNITDESC[][16] = 
{
    //L"Gill",        //0x00 on disc
    L"Alex",          //0x00 
    L"Ryu",           //0x01
    L"Yun",           //0x02
    L"Dudley",        //0x03
    L"Necro",         //0x04
    L"Hugo",          //0x05
    L"Ibuki",         //0x06
    L"Elena",         //0x07
    L"Oro",           //0x08
    L"Yang",          //0x09
    L"Ken",           //0x0A
    L"Sean",          //0x0B
    L"Urien",         //0x0C
    L"Gouki",         //0x0D
    //L"Shin Gouki",    //0x0E  // Shin Gouki is not present on the Dreamcast
    L"Chun-Li",       //0x0F
    L"Makoto",        //0x10
    L"Q",             //0x11
    L"Twelve",        //0x12
    L"Remy"           //0x13
};

constexpr auto SFIII3_D_NUMUNIT = ARRAYSIZE(SFIII3_D_UNITDESC);

const UINT8 SFIII3_D_UNITSORT[SFIII3_D_NUMUNIT] = //Plus 1 for the extra palettes
{
    0x00, 
    0x0F, 
    0x03, 
    0x07, 
    0x0D, 
    0x05, 
    0x06, 
    0x0A, 
    0x10, 
    0x04, 
    0x08, 
    0x11, 
    0x13, 
    0x01, 
    0x0B, 
    //0x0E,  // Shin Gouki is not present nor available on DC.
    0x12, 
    0x0C, 
    0x09, 
    0x02
};

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

const UINT8 SFIII3_D_IMGID_SORT[SFIII3_D_NUMUNIT] =
{
    index3S_CPS3_Gill,
    index3S_CPS3_Alex,
    index3S_CPS3_Ryu,
    index3S_CPS3_Yun,
    index3S_CPS3_Dudley,
    index3S_CPS3_Necro,
    index3S_CPS3_Hugo,
    index3S_CPS3_Ibuki,
    index3S_CPS3_Elena,
    index3S_CPS3_Oro,
    index3S_CPS3_Yang,
    index3S_CPS3_Ken,
    index3S_CPS3_Sean,
    index3S_CPS3_Urien,
    index3S_CPS3_Gouki,
    // index3S_CPS3_ShinGouki,  Shin Gouki is not present on the home game
    index3S_CPS3_ChunLi,
    index3S_CPS3_Makoto,
    index3S_CPS3_Q,
    index3S_CPS3_Twelve,
    index3S_CPS3_Remy,
};

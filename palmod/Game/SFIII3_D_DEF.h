#pragma once

const TCHAR SFIII3_D_UNITDESC[][16] = 
{
    //"Gill"),        //0x00 on disc
    _T("Alex"),          //0x00 
    _T("Ryu"),           //0x01
    _T("Yun"),           //0x02
    _T("Dudley"),        //0x03
    _T("Necro"),         //0x04
    _T("Hugo"),          //0x05
    _T("Ibuki"),         //0x06
    _T("Elena"),         //0x07
    _T("Oro"),           //0x08
    _T("Yang"),          //0x09
    _T("Ken"),           //0x0A
    _T("Sean"),          //0x0B
    _T("Urien"),         //0x0C
    _T("Gouki"),         //0x0D
    //_T("Shin Gouki"),    //0x0E  // Shin Gouki is not present on the Dreamcast
    _T("Chun-Li"),       //0x0F
    _T("Makoto"),        //0x10
    _T("Q"),             //0x11
    _T("Twelve"),        //0x12
    _T("Remy")           //0x13
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

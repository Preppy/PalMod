#pragma once

constexpr auto SFIII3_A_PALETTESIZE = 64; // unused

#define SFIII3_A_EXTRALOC SFIII3_A_NUMUNIT

const TCHAR SFIII3_A_UNITDESC[SFIII3_A_NUMUNIT + 1][16] = 
{
    //"Gill"),        //0x?
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
    _T("Shin-Gouki"),    //0x0E
    _T("Chun-Li"),       //0x0F
    _T("Makoto"),        //0x10
    _T("Q"),             //0x11
    _T("Twelve"),        //0x12
    _T("Remy"),          //0x13
    _T("Extra Palettes")
};

const UINT8 SFIII3_A_UNITSORT[SFIII3_A_NUMUNIT + 1] = //Plus 1 for the extra palettes
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
    0x0E, 
    0x12, 
    0x0C, 
    0x09, 
    0x02,

    SFIII3_A_EXTRALOC //Extra palettes
};

const stExtraDef SFIII3_A_EXTRA[] = 
{
    //Start

    { UNIT_START_VALUE },

    //Ryu
    { 0x01, _T("Hadouken"), 0x00704B00, 30 * 2},
    { 0x01, _T("Hadouken Impact"), 0x00704BA0, 16},

    //Oro
    { 0x08, _T("Tengu Stones"), 0x00763100, 0x80},
    // Bricks are folded into the Tengu Stones display
    { 0x08, _T("Bricks"), 0x00763180, 0x20, 1},

    //Ken
    { 0x0A, _T("Hadouken"), 0x00706400, 30 * 2},
    { 0x0A, _T("Shoryuken Flames"), 0x00706560, 16 * 2},
    { 0x0A, _T("Hadouken Impact"), 0x007064A0, 16},

    //Urien
    { 0x0C, _T("Intro"), 0x00706600, 0x80 },
    { 0x0C, _T("Morph"), 0x00706680, 0x80 },

    //{ SFIII3_A_EXTRALOC, _T("Check"), 0x00706580, 0x80 },
    
    //{ SFIII3_A_EXTRALOC, _T("Check Tengu"), 0x00763180, 0x80 },

    //{ SFIII3_A_EXTRALOC, _T("Elena's Stage"), 0x740B80, 0x2E00 },

    //Extra

    { INVALID_UNIT_VALUE }
};

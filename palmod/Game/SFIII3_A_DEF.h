#pragma once

constexpr auto SFIII3_A_PALETTESIZE = 64; // unused

#define SFIII3_A_EXTRALOC SFIII3_A_NUMUNIT

const char SFIII3_A_UNITDESC[SFIII3_A_NUMUNIT][16] = 
{
    //"Gill",        //0x?
    "Alex",          //0x00 
    "Ryu",           //0x01
    "Yun",           //0x02
    "Dudley",        //0x03
    "Necro",         //0x04
    "Hugo",          //0x05
    "Ibuki",         //0x06
    "Elena",         //0x07
    "Oro",           //0x08
    "Yang",          //0x09
    "Ken",           //0x0A
    "Sean",          //0x0B
    "Urien",         //0x0C
    "Gouki",         //0x0D
    "Shin-Gouki",    //0x0E
    "Chun-Li",       //0x0F
    "Makoto",        //0x10
    "Q",             //0x11
    "Twelve",        //0x12
    "Remy"           //0x13
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
    { 0x01, "Hadouken", 0x00704B00, 30 * 2},
    { 0x01, "Hadouken Impact", 0x00704BA0, 16},

    //Oro
    { 0x08, "Tengu Stones", 0x00763100, 0x80},
    // Bricks are folded into the Tengu Stones display
    { 0x08, "Bricks", 0x00763180, 0x20, 1},

    //Ken
    { 0x0A, "Hadouken", 0x00706400, 30 * 2},
    { 0x0A, "Shoryuken Flames", 0x00706560, 16 * 2},
    { 0x0A, "Hadouken Impact", 0x007064A0, 16},

    //Urien
    { 0x0C, "Intro", 0x00706600, 0x80 },
    { 0x0C, "Morph", 0x00706680, 0x80 },

    //{ SFIII3_A_EXTRALOC, "Check", 0x00706580, 0x80 },
    
    //{ SFIII3_A_EXTRALOC, "Check Tengu", 0x00763180, 0x80 },

    //{ SFIII3_A_EXTRALOC, "Elena's Stage", 0x740B80, 0x2E00 },

    //Extra

    { INVALID_UNIT_VALUE }
};

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
    { 0x01, _T("Hadouken"), 0x00704B00, 30 * 2}, // Yes, 30: the last two colors are not used
    { 0x01, _T("Hadouken Impact"), 0x00704BA0, 16 },

    //Necro
    { 0x04, _T("Effie LP"), 0x704F00, 16 * 2 * 4, false, 0x04, 0x02 },
    { 0x04, _T("Effie MP"), 0x705080, 16 * 2 * 4, false, 0x04, 0x02 },
    { 0x04, _T("Effie HP"), 0x705200, 16 * 2 * 4, false, 0x04, 0x02 },
    { 0x04, _T("Effie LK"), 0x705380, 16 * 2 * 4, false, 0x04, 0x02 },
    { 0x04, _T("Effie MP"), 0x705500, 16 * 2 * 4, false, 0x04, 0x02 },
    { 0x04, _T("Effie HK"), 0x705680, 16 * 2 * 4, false, 0x04, 0x02 },
    { 0x04, _T("Effie EX"), 0x705800, 16 * 2 * 4, false, 0x04, 0x02 },

    //Hugo
    { 0x05, _T("Poison P1"), 0x705880, 16 * 2 * 4, false, 0x05, 0x02 },
    { 0x05, _T("Poison P2"), 0x705900, 16 * 2 * 4, false, 0x05, 0x02 },
    { 0x05, _T("Poison EX"), 0x705980, 16 * 2 * 4, false, 0x05, 0x02 },

    //Oro
    { 0x08, _T("Tengu Stones"), 0x00763100, 0x80 },
    // Bricks are folded into the Tengu Stones display
    { 0x08, _T("Bricks"), 0x00763180, 0x20, 1 },

    //Ken
    { 0x0A, _T("Hadouken"), 0x00706400, 30 * 2 }, // Yes, 30: the last two colors are not used
    { 0x0A, _T("Shoryuken Flames"), 0x00706560, 16 * 2 },
    { 0x0A, _T("Hadouken Impact"), 0x007064A0, 16 },

    //Urien
    { 0x0C, _T("Intro"), 0x00706600, 0x80 },
    { 0x0C, _T("Morph"), 0x00706680, 0x80 },

    // Akuma/Gouki
    { 0x0D, _T("Shun Goku Satsu KO Screen"), 0x706b80, 16 * 2 * 4, false, 0x0D, 0x0F },
    { 0x0D, _T("Messatsu Go Hadou / Air Fireball"), 0x706a80, 16 * 2 * 4 },
    { 0x0D, _T("Kongou Kokuretzu Zan"), 0x706a00, 16 * 2 * 4 },

    { 0x0D, _T("Parry Animation"), 0x769080, 0x80 },
    { 0x0D, _T("Burning Effects"), 0x708480, 0x80 },
    { 0x0D, _T("SA Animation 1"), 0x769080, 0x80 },
    { 0x0D, _T("SA Animation 2"), 0x769100, 0x80 },
    { 0x0D, _T("SA Animation 3"), 0x769180, 0x80 },
    { 0x0D, _T("SA Animation 4"), 0x707900, 0x80 },
    { 0x0D, _T("SA Animation(1, 2, 3 together)"), 0x769080, 0x80 * 3},

    // Q
    { 0x11, _T("SA3 charge / all arts burning"), 0x708680, 0x80 },
    { 0x11, _T("SA3 main explosion"), 0x708700, 0x80 },
    { 0x11, _T("SA3 explosion flames"), 0x708a80, 0x80 },

    //{ SFIII3_A_EXTRALOC, _T("Check"), 0x00706580, 0x80 },
    
    //{ SFIII3_A_EXTRALOC, _T("Check Tengu"), 0x00763180, 0x80 },

    { SFIII3_A_EXTRALOC, _T("Select Background"), 0x709D80, 0x709E00 - 0x709D80 },

    //{ SFIII3_A_EXTRALOC, _T("Elena's Stage"), 0x740B80, 0x2E00 },

    { SFIII3_A_EXTRALOC, _T("Akuma Stage Part 1"), 0x74C180, 0x200, false, 0x15, 0x0F },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage Part 2"), 0x74C380, 0x200, false, 0x15, 0x10 },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage Part 3"), 0x74C580, 0x200, false, 0x15, 0x11 },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage Part 4"), 0x74C780, 0x200, false, 0x15, 0x12 },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage Part 5"), 0x74C980, 0x80, false, 0x15, 0x13 },

    { SFIII3_A_EXTRALOC, _T("Akuma Stage (Faded) Part 1"), 0x74CA00, 0x200, false, 0x15, 0x0F },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage (Faded) Part 2"), 0x74CC00, 0x200, false, 0x15, 0x10 },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage (Faded) Part 3"), 0x74CE00, 0x200, false, 0x15, 0x11 },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage (Faded) Part 4"), 0x74D000, 0x200, false, 0x15, 0x12 },
    { SFIII3_A_EXTRALOC, _T("Akuma Stage (Faded) Part 5"), 0x74D200, 0x80, false, 0x15, 0x13 },


    { SFIII3_A_EXTRALOC, _T("Elena Stage - Grass"), 0x743380, 0x80, false, 0x15, 0x00 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage - Bushes"), 0x743400, 0x80, false, 0x15, 0x01 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage - Sun"), 0x743480, 0x80, false, 0x15, 0x02 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage - Grass Pond Elephants"), 0x743500, 0x80, false, 0x15, 0x03 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage - Tree Left Side"), 0x743580, 0x80, false, 0x15, 0x04 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage - Tree Right Side"), 0x743600, 0x80, false, 0x15, 0x05 },

    { SFIII3_A_EXTRALOC, _T("Elena Stage (Faded) - Grass"), 0x743680, 0x80, false, 0x15, 0x00 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage (Faded) - Bushes"), 0x743700, 0x80, false, 0x15, 0x01 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage (Faded) - Sun"), 0x743780, 0x80, false, 0x15, 0x02 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage (Faded) - Grass Pond Elephants"), 0x743800, 0x80, false, 0x15, 0x03 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage (Faded) - Tree Left Side"), 0x743880, 0x80, false, 0x15, 0x04 },
    { SFIII3_A_EXTRALOC, _T("Elena Stage (Faded) - Tree Right Side"), 0x743900, 0x80, false, 0x15, 0x05 },

    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 1"), 0x752F80, 0x200, false, 0x15, 0x06 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 2"), 0x753180, 0x200, false, 0x15, 0x07 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 3"), 0x753380, 0x200, false, 0x15, 0x08 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 4"), 0x753580, 0x200, false, 0x15, 0x09 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 5"), 0x753780, 0x200, false, 0x15, 0x0A },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 6"), 0x753980, 0x200, false, 0x15, 0x0B },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 7"), 0x753b80, 0x200, false, 0x15, 0x0C },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 8"), 0x753d80, 0x200, false, 0x15, 0x0D },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage Part 9"), 0x753f80, 0x80, false, 0x15, 0x0E },

    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 1"), 0x753F80 + 0x80, 0x200, false, 0x15, 0x06 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 2"), 0x754180 + 0x80, 0x200, false, 0x15, 0x07 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 3"), 0x754380 + 0x80, 0x200, false, 0x15, 0x08 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 4"), 0x754580 + 0x80, 0x200, false, 0x15, 0x09 },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 5"), 0x754780 + 0x80, 0x200, false, 0x15, 0x0A },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 6"), 0x754980 + 0x80, 0x200, false, 0x15, 0x0B },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 7"), 0x754b80 + 0x80, 0x200, false, 0x15, 0x0C },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 8"), 0x754d80 + 0x80, 0x200, false, 0x15, 0x0D },
    { SFIII3_A_EXTRALOC, _T("Makoto Stage (Faded) Part 9"), 0x754f80 + 0x80, 0x80, false, 0x15, 0x0E },

    //Extra

    { INVALID_UNIT_VALUE }
};

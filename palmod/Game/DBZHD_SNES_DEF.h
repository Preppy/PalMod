#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to DBZHD_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> DBZHD_SNES_IMGIDS_USED =
{
    indexDBZHDSprites_Cell,             // 0x9B
    indexDBZHDSprites_Frieza,           // 0x9C
    indexDBZHDSprites_Gohan,            // 0x9D
    indexDBZHDSprites_Goku,             // 0x9E
    indexDBZHDSprites_Gotenks,          // 0x9F
    indexDBZHDSprites_KidBuu,           // 0xA0
    indexDBZHDSprites_MajinBuu,         // 0xA1
    indexDBZHDSprites_Piccolo,          // 0xA2
    indexDBZHDSprites_Vegeta,           // 0xA3
    indexDBZHDSprites_Vegito,           // 0xA4
    indexDBZHDSprites_Bonus,            // 0xA5,
};

const sGame_PaletteDataset DBZHD_SNES_GOKU_PALETTES_P1[] =
{
    { L"Goku P1 (Day)", 0xB0000, 0xB0020, indexDBZHDSprites_Goku, 0x00, &pairNext8 }, // pair to Hair Lighting
    { L"Goku P1 (Sunset)", 0xb0040, 0xb0060, indexDBZHDSprites_Goku, 0x00, &pairNext7 },
    { L"Goku P1 (Night)", 0xb0080, 0xb00a0, indexDBZHDSprites_Goku, 0x00, &pairNext6 },
    { L"Goku P1 portrait", 0x18140, 0x18160, indexDBZHDSprites_Goku, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_GOKU_PALETTES_P2[] =
{
    { L"Goku P2 (Day)", 0xB0020, 0xB0040, indexDBZHDSprites_Goku, 0x00, &pairNext4 },
    { L"Goku P2 (Sunset)", 0xb0060, 0xb0080, indexDBZHDSprites_Goku, 0x00, &pairNext3 },
    { L"Goku P2 (Night)", 0xb00a0, 0xb00c0, indexDBZHDSprites_Goku, 0x00, &pairNext2 },
    { L"Goku P2 portrait", 0x18160, 0x18180, indexDBZHDSprites_Goku, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_GOKU_PALETTES_NORMAL[] =
{
    { L"Goku's Hair lighting and KI Blast effects", 0x27B161, 0x27B181, indexDBZHDSprites_Goku, 0x08 },
    { L"Goku (Sunset)", 0x27B1E1, 0x27B201 },
    { L"Goku (Nighttime)", 0x27B201, 0x27B221 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGETA_PALETTES_P1[] =
{
    { L"Vegeta P1 (Day)", 0xB0200, 0xB0220, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 (Sunset)", 0xb0240, 0xb0260, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 (Night)", 0xb0280, 0xb02a0, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 Charge (Day)", 0xb0300, 0xb0320, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 Charge (Sunset)", 0xb0340, 0xb0360, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 Charge (Night)", 0xb0380, 0xb03a0, indexDBZHDSprites_Vegeta },
    { L"Vegeta P1 portrait", 0x18180, 0x181a0, indexDBZHDSprites_Vegeta, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGETA_PALETTES_P2[] =
{
    { L"Vegeta P2 (Day)", 0xB0220, 0xB0240, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 (Sunset)", 0xb0260, 0xb0280, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 (Night)", 0xb02a0, 0xb02c0, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 Charge (Day)", 0xb0320, 0xb0340, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 Charge (Sunset)", 0xb0360, 0xb0380, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 Charge (Night)", 0xb03a0, 0xb03c0, indexDBZHDSprites_Vegeta },
    { L"Vegeta P2 portrait", 0x181a0, 0x181c0, indexDBZHDSprites_Vegeta, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGETA_PALETTES_SHARED[] =
{
    { L"Vegeta Ki Blast", 0x27bd24, 0x27bd44 },
    { L"Vegeta Ki Blast 1/4", 0x27bd44, 0x27bd5c },
    { L"Vegeta Ki Blast 2/4", 0x27bd5c, 0x27bd74 },
    { L"Vegeta Ki Blast 3/4", 0x27bd74, 0x27bd8c },
    { L"Vegeta Ki Blast 4/4", 0x27bd8c, 0x27bda4 },
};

const sGame_PaletteDataset DBZHD_SNES_GOTENKS_PALETTES_P1[] =
{
    { L"Gotenks P1 (Day)", 0xB0A80, 0xB0AA0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 (Sunset)", 0xb0ac0, 0xb0ae0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 (Night)", 0xb0b00, 0xb0b20, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 Charge (Day)", 0xb0b90, 0xb0bb0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 Charge (Sunset)", 0xb0bd0, 0xb0bf0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 Charge (Night)", 0xb0c10, 0xb0c30, indexDBZHDSprites_Gotenks },
    { L"Gotenks P1 portrait", 0x18200, 0x18220, indexDBZHDSprites_Gotenks, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_GOTENKS_PALETTES_P2[] =
{
    { L"Gotenks P2 (Day)", 0xB0AA0, 0xB0AC0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 (Sunset)", 0xb0ae0, 0xb0b00, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 (Night)", 0xb0b20, 0xb0b40, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 Charge (Day)", 0xb0bb0, 0xb0bd0, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 Charge (Sunset)", 0xb0bf0, 0xb0c10, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 Charge (Night)", 0xb0c30, 0xb0c50, indexDBZHDSprites_Gotenks },
    { L"Gotenks P2 portrait", 0x18220, 0x18240, indexDBZHDSprites_Gotenks, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_GOHAN_PALETTES_P1[] =
{
    { L"Gohan P1 (Day)", 0xB0500, 0xB0520, indexDBZHDSprites_Gohan },
    { L"Gohan P1 (Sunset)", 0xb0540, 0xb0560, indexDBZHDSprites_Gohan },
    { L"Gohan P1 (Night)", 0xb0580, 0xb05a0, indexDBZHDSprites_Gohan },
    { L"Gohan P1 Charge (Day)", 0xb0600, 0xb0620, indexDBZHDSprites_Gohan, 0x01 },
    { L"Gohan P1 Charge (Sunset)", 0xb0640, 0xb0660, indexDBZHDSprites_Gohan, 0x01 },
    { L"Gohan P1 Charge (Night)", 0xb0680, 0xb06a0, indexDBZHDSprites_Gohan, 0x01 },
    { L"Gohan P1 portrait", 0x181c0, 0x181e0, indexDBZHDSprites_Gohan, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_GOHAN_PALETTES_P2[] =
{
    { L"Gohan P2 (Day)", 0xB0520, 0xB0540, indexDBZHDSprites_Gohan },
    { L"Gohan P2 (Sunset)", 0xb0560, 0xb0580, indexDBZHDSprites_Gohan },
    { L"Gohan P2 (Night)", 0xb05a0, 0xb05c0, indexDBZHDSprites_Gohan },
    { L"Gohan P2 Charge (Day)", 0xb0620, 0xb0640, indexDBZHDSprites_Gohan, 0x01 },
    { L"Gohan P2 Charge (Sunset)", 0xb0660, 0xb0680, indexDBZHDSprites_Gohan, 0x01 },
    { L"Gohan P2 Charge (Night)", 0xb06a0, 0xb06c0, indexDBZHDSprites_Gohan, 0x01 },
    { L"Gohan P2 portrait", 0x181e0, 0x18200, indexDBZHDSprites_Gohan, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGITO_PALETTES_P1[] =
{
    { L"Vegito P1 (Day)", 0xB0EB0, 0xB0ED0, indexDBZHDSprites_Vegito },
    { L"Vegito P1 (Sunset)", 0xb0ef0, 0xb0f10, indexDBZHDSprites_Vegito },
    { L"Vegito P1 (Night)", 0xb0f30, 0xb0f50, indexDBZHDSprites_Vegito },
    { L"Vegito P1 Charge (Day)", 0xb0fb0, 0xb0fd0, indexDBZHDSprites_Vegito },
    { L"Vegito P1 Charge (Sunset)", 0xb0ff0, 0xb1010, indexDBZHDSprites_Vegito },
    { L"Vegito P1 Charge (Night)", 0xb1030, 0xb1050, indexDBZHDSprites_Vegito },
    { L"Vegito Intro P1", 0xB10B0, 0xB10D0, indexDBZHDSprites_Bonus, 0x01 },
    { L"Vegito P1 portrait", 0x18240, 0x18260, indexDBZHDSprites_Vegito, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_VEGITO_PALETTES_P2[] =
{
    { L"Vegito P2 (Day)", 0xB0ED0, 0xB0EF0, indexDBZHDSprites_Vegito},
    { L"Vegito P2 (Sunset)", 0xb0f10, 0xb0f30, indexDBZHDSprites_Vegito },
    { L"Vegito P2 (Night)", 0xb0f50, 0xb0f70, indexDBZHDSprites_Vegito },
    { L"Vegito P2 Charge (Day)", 0xb0fd0, 0xb0ff0, indexDBZHDSprites_Vegito },
    { L"Vegito P2 Charge (Sunset)", 0xb1010, 0xb1030, indexDBZHDSprites_Vegito },
    { L"Vegito P2 Charge (Night)", 0xb1050, 0xb1070, indexDBZHDSprites_Vegito },
    { L"Vegito Intro P2", 0xB10D0, 0xB10F0, indexDBZHDSprites_Bonus, 0x01 },
    { L"Vegito P2 portrait", 0x18260, 0x18280, indexDBZHDSprites_Vegito, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_PICCOLO_PALETTES_P1[] =
{
    { L"Piccolo P1 (Day)", 0xB10F0, 0xB1110, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 (Sunset)", 0xb1130, 0xb1150, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 (Night)", 0xb1170, 0xb1190, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 Charge (Day)", 0xb11f0, 0xb1210, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 Charge (Sunset)", 0xb1230, 0xb1250, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 Charge (Night)", 0xb1270, 0xb1290, indexDBZHDSprites_Piccolo },
    { L"Piccolo P1 portrait", 0x18280, 0x182a0, indexDBZHDSprites_Piccolo, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_PICCOLO_PALETTES_P2[] =
{
    { L"Piccolo P2 (Day)", 0xB1110, 0xB1130, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 (Sunset)", 0xb1150, 0xb1170, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 (Night)", 0xb1190, 0xb11b0, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 Charge (Day)", 0xb1210, 0xb1230, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 Charge (Sunset)", 0xb1250, 0xb1270, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 Charge (Night)", 0xb1290, 0xb12b0, indexDBZHDSprites_Piccolo },
    { L"Piccolo P2 portrait", 0x182a0, 0x182c0, indexDBZHDSprites_Piccolo, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_BUU_PALETTES_P1[] =
{
    { L"Buu P1 (Day)", 0xB1A70, 0xB1A90, indexDBZHDSprites_MajinBuu },
    { L"Buu P1 (Sunset)", 0xb1ab0, 0xb1ad0, indexDBZHDSprites_MajinBuu },
    { L"Buu P1 (Night)", 0xb1af0, 0xb1b10, indexDBZHDSprites_MajinBuu },
    { L"Majin Buu P1 portrait", 0x18340, 0x18360, indexDBZHDSprites_MajinBuu, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_BUU_PALETTES_P2[] =
{
    { L"Buu P2 (Day)", 0xB1A90, 0xB1AB0, indexDBZHDSprites_MajinBuu },
    { L"Buu P2 (Sunset)", 0xb1ad0, 0xb1af0, indexDBZHDSprites_MajinBuu },
    { L"Buu P2 (Night)", 0xb1b10, 0xb1b30, indexDBZHDSprites_MajinBuu },
    { L"Majin Buu P2 portrait", 0x18360, 0x18380, indexDBZHDSprites_MajinBuu, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_BUU_PALETTES_SHARED[] =
{
    { L"Buu Charge", 0x27d749, 0x27d769 },
};

const sGame_PaletteDataset DBZHD_SNES_KIDBUU_PALETTES_P1[] =
{
    { L"Kid Buu P1 (Day)", 0xB1870, 0xB1890, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P1 (Sunset)", 0xb18b0, 0xb18d0, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P1 (Night)", 0xb18f0, 0xb1910, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P1 Charge (Sunset)", 0xb19b0, 0xb19d0, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P1 Charge (Night)", 0xb19f0, 0xb1a10, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P1 portrait", 0x18380, 0x183a0, indexDBZHDSprites_KidBuu, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_KIDBUU_PALETTES_P2[] =
{
    { L"Kid Buu P2 (Day)", 0xB1890, 0xB18B0, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P2 (Sunset)", 0xb18d0, 0xb18f0, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P2 (Night)", 0xb1910, 0xb1930, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P2 Charge (Sunset)", 0xb19d0, 0xb19f0, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P2 Charge (Night)", 0xb1a10, 0xb1a30, indexDBZHDSprites_KidBuu },
    { L"Kid Buu P2 portrait", 0x183a0, 0x183c0, indexDBZHDSprites_KidBuu, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_FRIEZA_PALETTES_P1[] =
{
    { L"Frieza P1 (Day)", 0xB07C0, 0xB07E0, indexDBZHDSprites_Frieza },
    { L"Frieza P1 (Sunset)", 0xb0800, 0xb0820, indexDBZHDSprites_Frieza },
    { L"Frieza P1 (Night)", 0xb0840, 0xb0860, indexDBZHDSprites_Frieza },
    { L"Frieza P1 portrait", 0x182c0, 0x182e0, indexDBZHDSprites_Frieza, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_FRIEZA_PALETTES_P2[] =
{
    { L"Frieza P2 (Day)", 0xB07E0, 0xB0800, indexDBZHDSprites_Frieza },
    { L"Frieza P2 (Sunset)", 0xb0820, 0xb0840, indexDBZHDSprites_Frieza },
    { L"Frieza P2 (Night)", 0xb0860, 0xb0880, indexDBZHDSprites_Frieza },
    { L"Frieza P2 portrait", 0x182e0, 0x18300, indexDBZHDSprites_Frieza, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_FRIEZA_PALETTES_SHARED[] =
{
    { L"Intro: Base to 2nd Form", 0x0b09c0, 0x0B0A20, indexDBZHDSprites_Frieza, 0x08 },
};

const sGame_PaletteDataset DBZHD_SNES_CELL_PALETTES_P1[] =
{
    { L"Cell P1 (Day)", 0xB13F0, 0xB1410, indexDBZHDSprites_Cell },
    { L"Cell P1 (Sunset)", 0xb1430, 0xb1450, indexDBZHDSprites_Cell },
    { L"Cell P1 (Night)", 0xb1470, 0xb1490, indexDBZHDSprites_Cell },
    { L"Cell P1 Charge (Day)", 0xb14f0, 0xb1510, indexDBZHDSprites_Cell },
    { L"Cell P1 Charge (Sunset)", 0xb1530, 0xb1550, indexDBZHDSprites_Cell },
    { L"Cell P1 Charge (Night)", 0xb1570, 0xb1590, indexDBZHDSprites_Cell },
    { L"Cell P1 portrait", 0x18300, 0x18320, indexDBZHDSprites_Cell, 0x40 },
};

const sGame_PaletteDataset DBZHD_SNES_CELL_PALETTES_P2[] =
{
    { L"Cell P2 (Day)", 0xB1410, 0xB1430, indexDBZHDSprites_Cell },
    { L"Cell P2 (Sunset)", 0xb1450, 0xb1470, indexDBZHDSprites_Cell },
    { L"Cell P2 (Night)", 0xb1490, 0xb14b0, indexDBZHDSprites_Cell },
    { L"Cell P2 Charge (Day)", 0xb1510, 0xb1530, indexDBZHDSprites_Cell },
    { L"Cell P2 Charge (Sunset)", 0xb1550, 0xb1570, indexDBZHDSprites_Cell },
    { L"Cell P2 Charge (Night)", 0xb1590, 0xb15b0, indexDBZHDSprites_Cell },
    { L"Cell P2 portrait", 0x18320, 0x18340, indexDBZHDSprites_Cell, 0x41 },
};

const sGame_PaletteDataset DBZHD_SNES_CELL_PALETTES_SHARED[] =
{
    { L"Intro: Semi-Perfect Cell", 0xB16F0, 0xB1710, indexDBZHDSprites_Cell, 0x08 },
    { L"Cell Jr and Cell Kamehameha", 0x2ab093, 0x2ab0d3, indexDBZHDSprites_Cell , 0x10 },
};

const sGame_PaletteDataset DBZHD_SNES_STAGE_PALETTES[] =
{
    { L"Stage icons", 0x1b56a, 0x1b5aa, indexDBZHDSprites_Bonus, 0x08 },
    { L"Stage icons faded", 0x1b5aa, 0x1b5ea, indexDBZHDSprites_Bonus, 0x08 },

    { L"Tournament Day", 0x50C6E, 0x50D0E, indexDBZHDSprites_Bonus, 0x05 },
    { L"Tournament Sunset", 0x50D0E, 0x50DAE, indexDBZHDSprites_Bonus, 0x05 },
    { L"Tournament Night", 0x50DAE, 0x50E4E, indexDBZHDSprites_Bonus, 0x05 },
    { L"Lookout Day", 0x536B7, 0x53757, indexDBZHDSprites_Bonus, 0x04 },
    { L"Lookout Sunset", 0x53757, 0x537F7, indexDBZHDSprites_Bonus, 0x04 },
    { L"Lookout Night", 0x537F7, 0x53897, indexDBZHDSprites_Bonus, 0x04 },
    { L"Sky (Day)", 0x528a1, 0x52921 },
    { L"Sky (Sunset)", 0x52921, 0x529a1 },
    { L"Sky Lookout (Day)", 0x519ba, 0x51a5a, indexDBZHDSprites_Bonus, 0x09 },
    { L"Sky Lookout (Night)", 0x51afa, 0x51b9a, indexDBZHDSprites_Bonus, 0x09 },
    { L"Sky Lookout (Sunset)", 0x51a5a, 0x51afa, indexDBZHDSprites_Bonus, 0x09 },
    { L"WasteLand (Day)", 0x2e8000, 0x2e8080, indexDBZHDSprites_Bonus, 0x0a },
    { L"WasteLand (Night)", 0x2e8900, 0x2e8980, indexDBZHDSprites_Bonus, 0x0a },

    { L"Namek section 1", 0x2e9300, 0x2e93c0 },
    { L"Namek section 2", 0x2e8d80, 0x2e8e40 },
};

const sGame_PaletteDataset DBZHD_SNES_STAGE_CLOUD_PALETTES[] =
{
    { L"WasteLand Clouds Night 1/31", 0x2e8980, 0x2e89a0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 2/31", 0x2e89a0, 0x2e89c0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 3/31", 0x2e89c0, 0x2e89e0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 4/31", 0x2e89e0, 0x2e8a00, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 5/31", 0x2e8a00, 0x2e8a20, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 6/31", 0x2e8a20, 0x2e8a40, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 7/31", 0x2e8a40, 0x2e8a60, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 8/31", 0x2e8a60, 0x2e8a80, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 9/31", 0x2e8a80, 0x2e8aa0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 10/31", 0x2e8aa0, 0x2e8ac0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 11/31", 0x2e8ac0, 0x2e8ae0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 12/31", 0x2e8ae0, 0x2e8b00, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 13/32", 0x2e8b20, 0x2e8b40, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 14/31", 0x2e8b40, 0x2e8b60, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 15/31", 0x2e8b60, 0x2e8b80, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 16/31", 0x2e8b80, 0x2e8ba0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 17/31", 0x2e8ba0, 0x2e8bc0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 18/31", 0x2e8bc0, 0x2e8be0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 19/31", 0x2e8be0, 0x2e8c00, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 20/31", 0x2e8c00, 0x2e8c20, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 21/31", 0x2e8c20, 0x2e8c40, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 22/31", 0x2e8c40, 0x2e8c60, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 23/31", 0x2e8c60, 0x2e8c80, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 24/31", 0x2e8c80, 0x2e8ca0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 25/31", 0x2e8ca0, 0x2e8cc0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 26/31", 0x2e8cc0, 0x2e8ce0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 27/31", 0x2e8ce0, 0x2e8d00, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 28/31", 0x2e8d00, 0x2e8d20, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 29/31", 0x2e8d20, 0x2e8d40, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 30/31", 0x2e8d40, 0x2e8d60, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Night 31/31", 0x2e8d60, 0x2e8d80, indexDBZHDSprites_Bonus, 0x0b },
};

const sGame_PaletteDataset DBZHD_SNES_STAGE_CLOUD_DAY_PALETTES[] =
{
    { L"WasteLand Clouds Day 1/32", 0x2e8080, 0x2e80a0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 2/32", 0x2e80a0, 0x2e80c0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 3/32", 0x2e80c0, 0x2e80e0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 4/32", 0x2e80e0, 0x2e8100, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 5/32", 0x2e8100, 0x2e8120, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 6/32", 0x2e8120, 0x2e8140, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 7/32", 0x2e8140, 0x2e8160, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 8/32", 0x2e8160, 0x2e8180, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 9/32", 0x2e8180, 0x2e81a0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 10/32", 0x2e81a0, 0x2e81c0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 11/32", 0x2e81c0, 0x2e81e0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 12/32", 0x2e81e0, 0x2e8200, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 13/32", 0x2e8200, 0x2e8220, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 14/32", 0x2e8220, 0x2e8240, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 15/32", 0x2e8240, 0x2e8260, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 16/32", 0x2e8260, 0x2e8280, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 17/32", 0x2e8280, 0x2e82a0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 18/32", 0x2e82a0, 0x2e82c0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 19/32", 0x2e82c0, 0x2e82e0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 20/32", 0x2e82e0, 0x2e8300, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 21/32", 0x2e8300, 0x2e8320, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 22/32", 0x2e8320, 0x2e8340, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 23/32", 0x2e8340, 0x2e8360, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 24/32", 0x2e8360, 0x2e8380, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 25/32", 0x2e8380, 0x2e83a0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 26/32", 0x2e83a0, 0x2e83c0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 27/32", 0x2e83c0, 0x2e83e0, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 28/32", 0x2e83e0, 0x2e8400, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 29/32", 0x2e8400, 0x2e8420, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 30/32", 0x2e8420, 0x2e8440, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 31/32", 0x2e8440, 0x2e8460, indexDBZHDSprites_Bonus, 0x0b },
    { L"WasteLand Clouds Day 32/32", 0x2e8460, 0x2e8480, indexDBZHDSprites_Bonus, 0x0b },
};

const sGame_PaletteDataset DBZHD_SNES_BONUS_PALETTES[] =
{
    { L"Character Select icons 1/2", 0x1B48A, 0x1b4aa, indexDBZHDSprites_Bonus, 0x02, &pairNext },
    { L"Character Select icons 2/2", 0x1B4aA, 0x1b4ca, indexDBZHDSprites_Bonus, 0x03, &pairPrevious },
    { L"Super Buu", 0x1b4ca, 0x1b51e, indexDBZHDSprites_Bonus, 0x00 },
    { L"Sand 1", 0x2e5a2, 0x2e7a2 },
    { L"Sand 2", 0x2e7a2, 0x2e942 },

    { L"Goku Intro", 0x232F1, 0x23311 },

    { L"HUD", 0x47917, 0x47937, indexDBZHDSprites_Bonus, 0x06 },
    { L"Title Screen", 0x1ef9a, 0x1efda, indexDBZHDSprites_Bonus, 0x0c },
    { L"Hyper Dimension title", 0x27f5d, 0x27f7d },
    { L"7 Dragon Balls intro", 0x18000, 0x18020 },
    { L"Story", 0x259e2, 0x25a02 },

    { L"Kamehameha 1/5", 0x2ade1c, 0x2ade3c, indexDBZHDSprites_Bonus, 0x07 },
    { L"Kamehameha 2/5", 0x2ade3c, 0x2ade5c, indexDBZHDSprites_Bonus, 0x07 },
    { L"Kamehameha 3/5", 0x2ade5c, 0x2ade7c, indexDBZHDSprites_Bonus, 0x07 },
    { L"Kamehameha 4/5", 0x2ade7c, 0x2ade9c, indexDBZHDSprites_Bonus, 0x07 },
    { L"Kamehameha 5/5", 0x2ade9c, 0x2adebc, indexDBZHDSprites_Bonus, 0x07 },
};

const sDescTreeNode DBZHD_SNES_GOKU_COLLECTION[] =
{
    // These aren't equal length so can't be paired.
    { L"P1_", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_GOKU_PALETTES_P1) },
    { L"P2_", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_GOKU_PALETTES_P2) },
    { L"Normal", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_PALETTES_NORMAL, ARRAYSIZE(DBZHD_SNES_GOKU_PALETTES_NORMAL) },
};

const sDescTreeNode DBZHD_SNES_VEGETA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_VEGETA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_VEGETA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_PALETTES_SHARED, ARRAYSIZE(DBZHD_SNES_VEGETA_PALETTES_SHARED) },
};

const sDescTreeNode DBZHD_SNES_GOTENKS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOTENKS_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_GOTENKS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOTENKS_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_GOTENKS_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_GOHAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOHAN_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_GOHAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOHAN_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_GOHAN_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_VEGITO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGITO_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_VEGITO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGITO_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_VEGITO_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_PICCOLO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_PICCOLO_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_PICCOLO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_PICCOLO_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_PICCOLO_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_BUU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_BUU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_BUU_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_PALETTES_SHARED, ARRAYSIZE(DBZHD_SNES_BUU_PALETTES_SHARED) },
};

const sDescTreeNode DBZHD_SNES_KIDBUU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_KIDBUU_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_KIDBUU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_KIDBUU_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_KIDBUU_PALETTES_P2) },
};

const sDescTreeNode DBZHD_SNES_FRIEZA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_FRIEZA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_FRIEZA_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_PALETTES_SHARED, ARRAYSIZE(DBZHD_SNES_FRIEZA_PALETTES_SHARED) },
};

const sDescTreeNode DBZHD_SNES_CELL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_PALETTES_P1, ARRAYSIZE(DBZHD_SNES_CELL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_PALETTES_P2, ARRAYSIZE(DBZHD_SNES_CELL_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_PALETTES_SHARED, ARRAYSIZE(DBZHD_SNES_CELL_PALETTES_SHARED) },
};

const sDescTreeNode DBZHD_SNES_STAGE_COLLECTION[] =
{
    { L"Stages", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_STAGE_PALETTES, ARRAYSIZE(DBZHD_SNES_STAGE_PALETTES) },
    { L"Cloud Day Cycle", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_STAGE_CLOUD_DAY_PALETTES, ARRAYSIZE(DBZHD_SNES_STAGE_CLOUD_DAY_PALETTES) },
    { L"Cloud Night Cycle", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_STAGE_CLOUD_PALETTES, ARRAYSIZE(DBZHD_SNES_STAGE_CLOUD_PALETTES) },
};

const sDescTreeNode DBZHD_SNES_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BONUS_PALETTES, ARRAYSIZE(DBZHD_SNES_BONUS_PALETTES) },
};

const sDescTreeNode DBZHD_SNES_UNITS[] =
{
    { L"Goku", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOKU_COLLECTION, ARRAYSIZE(DBZHD_SNES_GOKU_COLLECTION) },
    { L"Vegeta", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGETA_COLLECTION, ARRAYSIZE(DBZHD_SNES_VEGETA_COLLECTION) },
    { L"Gotenks", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOTENKS_COLLECTION, ARRAYSIZE(DBZHD_SNES_GOTENKS_COLLECTION) },
    { L"Gohan", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_GOHAN_COLLECTION, ARRAYSIZE(DBZHD_SNES_GOHAN_COLLECTION) },
    { L"Vegito", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_VEGITO_COLLECTION, ARRAYSIZE(DBZHD_SNES_VEGITO_COLLECTION) },
    { L"Piccolo", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_PICCOLO_COLLECTION, ARRAYSIZE(DBZHD_SNES_PICCOLO_COLLECTION) },
    { L"Buu", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BUU_COLLECTION, ARRAYSIZE(DBZHD_SNES_BUU_COLLECTION) },
    { L"Kid Buu", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_KIDBUU_COLLECTION, ARRAYSIZE(DBZHD_SNES_KIDBUU_COLLECTION) },
    { L"Frieza", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_FRIEZA_COLLECTION, ARRAYSIZE(DBZHD_SNES_FRIEZA_COLLECTION) },
    { L"Cell", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_CELL_COLLECTION, ARRAYSIZE(DBZHD_SNES_CELL_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_STAGE_COLLECTION, ARRAYSIZE(DBZHD_SNES_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)DBZHD_SNES_BONUS_COLLECTION, ARRAYSIZE(DBZHD_SNES_BONUS_COLLECTION) },
};

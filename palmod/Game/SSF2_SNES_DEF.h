#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to SSF2_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> SSF2_SNES_IMGIDS_USED =
{
    indexSNES_SSF2Sprites_Ryu,          // 0xf9
    indexSNES_SSF2Sprites_EHonda,       // 0xfa
    indexSNES_SSF2Sprites_Blanka,       // 0xfb
    indexSNES_SSF2Sprites_Guile,        // 0xfc
    indexSNES_SSF2Sprites_Ken,          // 0xfd
    indexSNES_SSF2Sprites_ChunLi,       // 0xfe
    indexSNES_SSF2Sprites_Zangief,      // 0xff
    indexSNES_SSF2Sprites_Dhalsim,      // 0x100
    indexSNES_SSF2Sprites_MBison,       // 0x101
    indexSNES_SSF2Sprites_Sagat,        // 0x102
    indexSNES_SSF2Sprites_Balrog,       // 0x103
    indexSNES_SSF2Sprites_Vega,         // 0x104
    indexSNES_SSF2Sprites_Cammy,        // 0x105
    indexSNES_SSF2Sprites_THawk,        // 0x106
    indexSNES_SSF2Sprites_FeiLong,      // 0x107
    indexSNES_SSF2Sprites_DeeJay,       // 0x108
    indexSNES_SSF2Sprites_Stages,       // 0x109
    indexSNES_SSF2Sprites_Bonus,        // 0x10a
};

const sGame_PaletteDataset SSF2_SNES_RYU_Y_PALETTES[] =
{
    { L"Ryu", 0x152540, 0x152560, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x150640, 0x150660, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150740, 0x150760, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_X_PALETTES[] =
{
    { L"Ryu", 0x152560, 0x152580, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x150660, 0x150680, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150760, 0x150780, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_B_PALETTES[] =
{
    { L"Ryu", 0x152580, 0x1525a0, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x150680, 0x1506a0, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150780, 0x1507a0, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_A_PALETTES[] =
{
    { L"Ryu", 0x1525a0, 0x1525c0, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x1506a0, 0x1506c0, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1507a0, 0x1507c0, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_L_PALETTES[] =
{
    { L"Ryu", 0x1525c0, 0x1525e0, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x1506c0, 0x1506e0, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1507c0, 0x1507e0, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_R_PALETTES[] =
{
    { L"Ryu", 0x1525e0, 0x152600, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x1506e0, 0x150700, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1507e0, 0x150800, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_Start_PALETTES[] =
{
    { L"Ryu", 0x152600, 0x152620, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x150700, 0x150720, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150800, 0x150820, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_RYU_Hold_PALETTES[] =
{
    { L"Ryu", 0x152620, 0x152640, indexSNES_SSF2Sprites_Ryu, 0x00 },
    { L"Portrait 1/2", 0x150720, 0x150740, indexSNES_SSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150820, 0x150840, indexSNES_SSF2Sprites_Ryu, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_Y_PALETTES[] =
{
    { L"E. Honda", 0x152640, 0x152660, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x150840, 0x150860, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_X_PALETTES[] =
{
    { L"E. Honda", 0x152660, 0x152680, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x150860, 0x150880, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_B_PALETTES[] =
{
    { L"E. Honda", 0x152680, 0x1526a0, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x150880, 0x1508a0, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_A_PALETTES[] =
{
    { L"E. Honda", 0x1526a0, 0x1526c0, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x1508a0, 0x1508c0, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_L_PALETTES[] =
{
    { L"E. Honda", 0x1526c0, 0x1526e0, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x1508c0, 0x1508e0, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_R_PALETTES[] =
{
    { L"E. Honda", 0x1526e0, 0x152700, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x1508e0, 0x150900, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_Start_PALETTES[] =
{
    { L"E. Honda", 0x152700, 0x152720, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x150900, 0x150920, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_EHONDA_Hold_PALETTES[] =
{
    { L"E. Honda", 0x152720, 0x152740, indexSNES_SSF2Sprites_EHonda, 0x00 },
    { L"Portrait", 0x150920, 0x150940, indexSNES_SSF2Sprites_EHonda, 0x20 },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_Y_PALETTES[] =
{
    { L"Blanka", 0x152740, 0x152760, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x150940, 0x150960, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150a40, 0x150a60, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_X_PALETTES[] =
{
    { L"Blanka", 0x152760, 0x152780, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x150960, 0x150980, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150a60, 0x150a80, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_B_PALETTES[] =
{
    { L"Blanka", 0x152780, 0x1527a0, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x150980, 0x1509a0, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150a80, 0x150aa0, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_A_PALETTES[] =
{
    { L"Blanka", 0x1527a0, 0x1527c0, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x1509a0, 0x1509c0, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150aa0, 0x150ac0, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_L_PALETTES[] =
{
    { L"Blanka", 0x1527c0, 0x1527e0, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x1509c0, 0x1509e0, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ac0, 0x150ae0, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_R_PALETTES[] =
{
    { L"Blanka", 0x1527e0, 0x152800, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x1509e0, 0x150a00, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ae0, 0x150b00, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_Start_PALETTES[] =
{
    { L"Blanka", 0x152800, 0x152820, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x150a00, 0x150a20, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150b00, 0x150b20, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BLANKA_Hold_PALETTES[] =
{
    { L"Blanka", 0x152820, 0x152840, indexSNES_SSF2Sprites_Blanka, 0x00 },
    { L"Portrait 1/2", 0x150a20, 0x150a40, indexSNES_SSF2Sprites_Blanka, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150b20, 0x150b40, indexSNES_SSF2Sprites_Blanka, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_Y_PALETTES[] =
{
    { L"Guile", 0x152840, 0x152860, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150b40, 0x150b60, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150c40, 0x150c60, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_X_PALETTES[] =
{
    { L"Guile", 0x152860, 0x152880, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150b60, 0x150b80, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150c60, 0x150c80, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_B_PALETTES[] =
{
    { L"Guile", 0x152880, 0x1528a0, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150b80, 0x150ba0, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150c80, 0x150ca0, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_A_PALETTES[] =
{
    { L"Guile", 0x1528a0, 0x1528c0, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150ba0, 0x150bc0, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ca0, 0x150cc0, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_L_PALETTES[] =
{
    { L"Guile", 0x1528c0, 0x1528e0, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150bc0, 0x150be0, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150cc0, 0x150ce0, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_R_PALETTES[] =
{
    { L"Guile", 0x1528e0, 0x152900, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150be0, 0x150c00, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ce0, 0x150d00, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_Start_PALETTES[] =
{
    { L"Guile", 0x152900, 0x152920, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150c00, 0x150c20, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150d00, 0x150d20, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_GUILE_Hold_PALETTES[] =
{
    { L"Guile", 0x152920, 0x152940, indexSNES_SSF2Sprites_Guile, 0x00 },
    { L"Portrait 1/2", 0x150c20, 0x150c40, indexSNES_SSF2Sprites_Guile, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150d20, 0x150d40, indexSNES_SSF2Sprites_Guile, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_Y_PALETTES[] =
{
    { L"Ken", 0x152940, 0x152960, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150d40, 0x150d60, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150e40, 0x150e60, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_X_PALETTES[] =
{
    { L"Ken", 0x152960, 0x152980, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150d60, 0x150d80, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150e60, 0x150e80, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_B_PALETTES[] =
{
    { L"Ken", 0x152980, 0x1529a0, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150d80, 0x150da0, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150e80, 0x150ea0, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_A_PALETTES[] =
{
    { L"Ken", 0x1529a0, 0x1529c0, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150da0, 0x150dc0, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ea0, 0x150ec0, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_L_PALETTES[] =
{
    { L"Ken", 0x1529c0, 0x1529e0, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150dc0, 0x150de0, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ec0, 0x150ee0, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_R_PALETTES[] =
{
    { L"Ken", 0x1529e0, 0x152a00, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150de0, 0x150e00, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150ee0, 0x150f00, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_Start_PALETTES[] =
{
    { L"Ken", 0x152a00, 0x152a20, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150e00, 0x150e20, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150f00, 0x150f20, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_KEN_Hold_PALETTES[] =
{
    { L"Ken", 0x152a20, 0x152a40, indexSNES_SSF2Sprites_Ken, 0x00 },
    { L"Portrait 1/2", 0x150e20, 0x150e40, indexSNES_SSF2Sprites_Ken, 0x20, &pairNext },
    { L"Portrait 2/2", 0x150f20, 0x150f40, indexSNES_SSF2Sprites_Ken, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_Y_PALETTES[] =
{
    { L"Chun-Li", 0x152a40, 0x152a60, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x150f40, 0x150f60, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151040, 0x151060, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_X_PALETTES[] =
{
    { L"Chun-Li", 0x152a60, 0x152a80, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x150f60, 0x150f80, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151060, 0x151080, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_B_PALETTES[] =
{
    { L"Chun-Li", 0x152a80, 0x152aa0, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x150f80, 0x150fa0, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151080, 0x1510a0, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_A_PALETTES[] =
{
    { L"Chun-Li", 0x152aa0, 0x152ac0, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x150fa0, 0x150fc0, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1510a0, 0x1510c0, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_L_PALETTES[] =
{
    { L"Chun-Li", 0x152ac0, 0x152ae0, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x150fc0, 0x150fe0, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1510c0, 0x1510e0, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_R_PALETTES[] =
{
    { L"Chun-Li", 0x152ae0, 0x152b00, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x150fe0, 0x151000, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1510e0, 0x151100, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_Start_PALETTES[] =
{
    { L"Chun-Li", 0x152b00, 0x152b20, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x151000, 0x151020, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151100, 0x151120, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CHUNLI_Hold_PALETTES[] =
{
    { L"Chun-Li", 0x152b20, 0x152b40, indexSNES_SSF2Sprites_ChunLi, 0x00 },
    { L"Portrait 1/2", 0x151020, 0x151040, indexSNES_SSF2Sprites_ChunLi, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151120, 0x151140, indexSNES_SSF2Sprites_ChunLi, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_Y_PALETTES[] =
{
    { L"Zangief", 0x152b40, 0x152b60, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x151140, 0x151160, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151240, 0x151260, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_X_PALETTES[] =
{
    { L"Zangief", 0x152b60, 0x152b80, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x151160, 0x151180, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151260, 0x151280, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_B_PALETTES[] =
{
    { L"Zangief", 0x152b80, 0x152ba0, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x151180, 0x1511a0, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151280, 0x1512a0, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_A_PALETTES[] =
{
    { L"Zangief", 0x152ba0, 0x152bc0, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x1511a0, 0x1511c0, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1512a0, 0x1512c0, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_L_PALETTES[] =
{
    { L"Zangief", 0x152bc0, 0x152be0, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x1511c0, 0x1511e0, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1512c0, 0x1512e0, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_R_PALETTES[] =
{
    { L"Zangief", 0x152be0, 0x152c00, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x1511e0, 0x151200, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1512e0, 0x151300, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_Start_PALETTES[] =
{
    { L"Zangief", 0x152c00, 0x152c20, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x151200, 0x151220, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151300, 0x151320, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_ZANGIEF_Hold_PALETTES[] =
{
    { L"Zangief", 0x152c20, 0x152c40, indexSNES_SSF2Sprites_Zangief, 0x00 },
    { L"Portrait 1/2", 0x151220, 0x151240, indexSNES_SSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151320, 0x151340, indexSNES_SSF2Sprites_Zangief, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_Y_PALETTES[] =
{
    { L"Dhalsim", 0x152c40, 0x152c60, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x151340, 0x151360, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151440, 0x151460, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_X_PALETTES[] =
{
    { L"Dhalsim", 0x152c60, 0x152c80, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x151360, 0x151380, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151460, 0x151480, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_B_PALETTES[] =
{
    { L"Dhalsim", 0x152c80, 0x152ca0, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x151380, 0x1513a0, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151480, 0x1514a0, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_A_PALETTES[] =
{
    { L"Dhalsim", 0x152ca0, 0x152cc0, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x1513a0, 0x1513c0, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1514a0, 0x1514c0, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_L_PALETTES[] =
{
    { L"Dhalsim", 0x152cc0, 0x152ce0, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x1513c0, 0x1513e0, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1514c0, 0x1514e0, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_R_PALETTES[] =
{
    { L"Dhalsim", 0x152ce0, 0x152d00, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x1513e0, 0x151400, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1514e0, 0x151500, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_Start_PALETTES[] =
{
    { L"Dhalsim", 0x152d00, 0x152d20, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x151400, 0x151420, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151500, 0x151520, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DHALSIM_Hold_PALETTES[] =
{
    { L"Dhalsim", 0x152d20, 0x152d40, indexSNES_SSF2Sprites_Dhalsim, 0x00 },
    { L"Portrait 1/2", 0x151420, 0x151440, indexSNES_SSF2Sprites_Dhalsim, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151520, 0x151540, indexSNES_SSF2Sprites_Dhalsim, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_Y_PALETTES[] =
{
    { L"M. Bison", 0x152d40, 0x152d60, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x151540, 0x151560, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151640, 0x151660, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (0 * 0x20), 0x157738 + (1 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (0 * 0x20), 0x157938 + (1 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (0 * 0x20), 0x157a38 + (1 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_X_PALETTES[] =
{
    { L"M. Bison", 0x152d60, 0x152d80, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x151560, 0x151580, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151660, 0x151680, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (1 * 0x20), 0x157738 + (2 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (1 * 0x20), 0x157938 + (2 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (1 * 0x20), 0x157a38 + (2 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_B_PALETTES[] =
{
    { L"M. Bison", 0x152d80, 0x152da0, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x151580, 0x1515a0, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151680, 0x1516a0, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (2 * 0x20), 0x157738 + (3 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (2 * 0x20), 0x157938 + (3 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (2 * 0x20), 0x157a38 + (3 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_A_PALETTES[] =
{
    { L"M. Bison", 0x152da0, 0x152dc0, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x1515a0, 0x1515c0, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1516a0, 0x1516c0, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (3 * 0x20), 0x157738 + (4 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (3 * 0x20), 0x157938 + (4 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (3 * 0x20), 0x157a38 + (4 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_L_PALETTES[] =
{
    { L"M. Bison", 0x152dc0, 0x152de0, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x1515c0, 0x1515e0, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1516c0, 0x1516e0, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (4 * 0x20), 0x157738 + (5 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (4 * 0x20), 0x157938 + (5 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (4 * 0x20), 0x157a38 + (5 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_R_PALETTES[] =
{
    { L"M. Bison", 0x152de0, 0x152e00, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x1515e0, 0x151600, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1516e0, 0x151700, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (5 * 0x20), 0x157738 + (6 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (5 * 0x20), 0x157938 + (6 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (5 * 0x20), 0x157a38 + (6 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_Start_PALETTES[] =
{
    { L"M. Bison", 0x152e00, 0x152e20, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x151600, 0x151620, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151700, 0x151720, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (6 * 0x20), 0x157738 + (7 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (6 * 0x20), 0x157938 + (7 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (6 * 0x20), 0x157a38 + (7 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_MBISON_Hold_PALETTES[] =
{
    { L"M. Bison", 0x152e20, 0x152e40, indexSNES_SSF2Sprites_MBison, 0x00 },
    { L"Portrait 1/2", 0x151620, 0x151640, indexSNES_SSF2Sprites_MBison, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151720, 0x151740, indexSNES_SSF2Sprites_MBison, 0x21, &pairPrevious },
    { L"Psycho Crusher",        0x157738 + (7 * 0x20), 0x157738 + (8 * 0x20), indexSNES_SSF2Sprites_MBison, 0x01 },
    { L"Psycho Fist: Green",    0x157938 + (7 * 0x20), 0x157938 + (8 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
    { L"Psycho Fist: Red",      0x157a38 + (7 * 0x20), 0x157a38 + (8 * 0x20), indexSNES_SSF2Sprites_MBison, 0x02 },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_Y_PALETTES[] =
{
    { L"Sagat", 0x152e40, 0x152e60, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x151740, 0x151760, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151840, 0x151860, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_X_PALETTES[] =
{
    { L"Sagat", 0x152e60, 0x152e80, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x151760, 0x151780, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151860, 0x151880, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_B_PALETTES[] =
{
    { L"Sagat", 0x152e80, 0x152ea0, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x151780, 0x1517a0, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151880, 0x1518a0, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_A_PALETTES[] =
{
    { L"Sagat", 0x152ea0, 0x152ec0, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x1517a0, 0x1517c0, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1518a0, 0x1518c0, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_L_PALETTES[] =
{
    { L"Sagat", 0x152ec0, 0x152ee0, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x1517c0, 0x1517e0, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1518c0, 0x1518e0, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_R_PALETTES[] =
{
    { L"Sagat", 0x152ee0, 0x152f00, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x1517e0, 0x151800, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1518e0, 0x151900, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_Start_PALETTES[] =
{
    { L"Sagat", 0x152f00, 0x152f20, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x151800, 0x151820, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151900, 0x151920, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_SAGAT_Hold_PALETTES[] =
{
    { L"Sagat", 0x152f20, 0x152f40, indexSNES_SSF2Sprites_Sagat, 0x00 },
    { L"Portrait 1/2", 0x151820, 0x151840, indexSNES_SSF2Sprites_Sagat, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151920, 0x151940, indexSNES_SSF2Sprites_Sagat, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_Y_PALETTES[] =
{
    { L"Balrog", 0x152f40, 0x152f60, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x151940, 0x151960, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151a40, 0x151a60, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_X_PALETTES[] =
{
    { L"Balrog", 0x152f60, 0x152f80, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x151960, 0x151980, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151a60, 0x151a80, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_B_PALETTES[] =
{
    { L"Balrog", 0x152f80, 0x152fa0, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x151980, 0x1519a0, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151a80, 0x151aa0, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_A_PALETTES[] =
{
    { L"Balrog", 0x152fa0, 0x152fc0, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x1519a0, 0x1519c0, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151aa0, 0x151ac0, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_L_PALETTES[] =
{
    { L"Balrog", 0x152fc0, 0x152fe0, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x1519c0, 0x1519e0, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ac0, 0x151ae0, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_R_PALETTES[] =
{
    { L"Balrog", 0x152fe0, 0x153000, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x1519e0, 0x151a00, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ae0, 0x151b00, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_Start_PALETTES[] =
{
    { L"Balrog", 0x153000, 0x153020, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x151a00, 0x151a20, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151b00, 0x151b20, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_BALROG_Hold_PALETTES[] =
{
    { L"Balrog", 0x153020, 0x153040, indexSNES_SSF2Sprites_Balrog, 0x00 },
    { L"Portrait 1/2", 0x151a20, 0x151a40, indexSNES_SSF2Sprites_Balrog, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151b20, 0x151b40, indexSNES_SSF2Sprites_Balrog, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_Y_PALETTES[] =
{
    { L"Vega", 0x153040, 0x153060, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151b40, 0x151b60, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151c40, 0x151c60, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_X_PALETTES[] =
{
    { L"Vega", 0x153060, 0x153080, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151b60, 0x151b80, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151c60, 0x151c80, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_B_PALETTES[] =
{
    { L"Vega", 0x153080, 0x1530a0, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151b80, 0x151ba0, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151c80, 0x151ca0, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_A_PALETTES[] =
{
    { L"Vega", 0x1530a0, 0x1530c0, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151ba0, 0x151bc0, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ca0, 0x151cc0, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_L_PALETTES[] =
{
    { L"Vega", 0x1530c0, 0x1530e0, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151bc0, 0x151be0, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151cc0, 0x151ce0, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_R_PALETTES[] =
{
    { L"Vega", 0x1530e0, 0x153100, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151be0, 0x151c00, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ce0, 0x151d00, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_Start_PALETTES[] =
{
    { L"Vega", 0x153100, 0x153120, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151c00, 0x151c20, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151d00, 0x151d20, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_VEGA_Hold_PALETTES[] =
{
    { L"Vega", 0x153120, 0x153140, indexSNES_SSF2Sprites_Vega, 0x00 },
    { L"Portrait 1/2", 0x151c20, 0x151c40, indexSNES_SSF2Sprites_Vega, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151d20, 0x151d40, indexSNES_SSF2Sprites_Vega, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_Y_PALETTES[] =
{
    { L"Cammy", 0x153140, 0x153160, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151d40, 0x151d60, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151e40, 0x151e60, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_X_PALETTES[] =
{
    { L"Cammy", 0x153160, 0x153180, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151d60, 0x151d80, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151e60, 0x151e80, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_B_PALETTES[] =
{
    { L"Cammy", 0x153180, 0x1531a0, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151d80, 0x151da0, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151e80, 0x151ea0, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_A_PALETTES[] =
{
    { L"Cammy", 0x1531a0, 0x1531c0, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151da0, 0x151dc0, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ea0, 0x151ec0, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_L_PALETTES[] =
{
    { L"Cammy", 0x1531c0, 0x1531e0, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151dc0, 0x151de0, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ec0, 0x151ee0, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_R_PALETTES[] =
{
    { L"Cammy", 0x1531e0, 0x153200, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151de0, 0x151e00, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151ee0, 0x151f00, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_Start_PALETTES[] =
{
    { L"Cammy", 0x153200, 0x153220, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151e00, 0x151e20, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151f00, 0x151f20, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_CAMMY_Hold_PALETTES[] =
{
    { L"Cammy", 0x153220, 0x153240, indexSNES_SSF2Sprites_Cammy, 0x00 },
    { L"Portrait 1/2", 0x151e20, 0x151e40, indexSNES_SSF2Sprites_Cammy, 0x20, &pairNext },
    { L"Portrait 2/2", 0x151f20, 0x151f40, indexSNES_SSF2Sprites_Cammy, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_Y_PALETTES[] =
{
    { L"T-Hawk", 0x153240, 0x153260, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x151f40, 0x151f60, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152040, 0x152060, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_X_PALETTES[] =
{
    { L"T-Hawk", 0x153260, 0x153280, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x151f60, 0x151f80, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152060, 0x152080, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_B_PALETTES[] =
{
    { L"T-Hawk", 0x153280, 0x1532a0, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x151f80, 0x151fa0, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152080, 0x1520a0, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_A_PALETTES[] =
{
    { L"T-Hawk", 0x1532a0, 0x1532c0, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x151fa0, 0x151fc0, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1520a0, 0x1520c0, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_L_PALETTES[] =
{
    { L"T-Hawk", 0x1532c0, 0x1532e0, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x151fc0, 0x151fe0, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1520c0, 0x1520e0, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_R_PALETTES[] =
{
    { L"T-Hawk", 0x1532e0, 0x153300, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x151fe0, 0x152000, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1520e0, 0x152100, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_Start_PALETTES[] =
{
    { L"T-Hawk", 0x153300, 0x153320, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x152000, 0x152020, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152100, 0x152120, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_THAWK_Hold_PALETTES[] =
{
    { L"T-Hawk", 0x153320, 0x153340, indexSNES_SSF2Sprites_THawk, 0x00 },
    { L"Portrait 1/2", 0x152020, 0x152040, indexSNES_SSF2Sprites_THawk, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152120, 0x152140, indexSNES_SSF2Sprites_THawk, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_Y_PALETTES[] =
{
    { L"Fei Long", 0x153340, 0x153360, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x152140, 0x152160, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152240, 0x152260, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_X_PALETTES[] =
{
    { L"Fei Long", 0x153360, 0x153380, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x152160, 0x152180, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152260, 0x152280, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_B_PALETTES[] =
{
    { L"Fei Long", 0x153380, 0x1533a0, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x152180, 0x1521a0, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152280, 0x1522a0, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_A_PALETTES[] =
{
    { L"Fei Long", 0x1533a0, 0x1533c0, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x1521a0, 0x1521c0, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1522a0, 0x1522c0, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_L_PALETTES[] =
{
    { L"Fei Long", 0x1533c0, 0x1533e0, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x1521c0, 0x1521e0, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1522c0, 0x1522e0, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_R_PALETTES[] =
{
    { L"Fei Long", 0x1533e0, 0x153400, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x1521e0, 0x152200, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1522e0, 0x152300, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_Start_PALETTES[] =
{
    { L"Fei Long", 0x153400, 0x153420, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x152200, 0x152220, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152300, 0x152320, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_FEILONG_Hold_PALETTES[] =
{
    { L"Fei Long", 0x153420, 0x153440, indexSNES_SSF2Sprites_FeiLong, 0x00 },
    { L"Portrait 1/2", 0x152220, 0x152240, indexSNES_SSF2Sprites_FeiLong, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152320, 0x152340, indexSNES_SSF2Sprites_FeiLong, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_Y_PALETTES[] =
{
    { L"Dee Jay", 0x153440, 0x153460, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x152340, 0x152360, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152440, 0x152460, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_X_PALETTES[] =
{
    { L"Dee Jay", 0x153460, 0x153480, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x152360, 0x152380, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152460, 0x152480, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_B_PALETTES[] =
{
    { L"Dee Jay", 0x153480, 0x1534a0, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x152380, 0x1523a0, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152480, 0x1524a0, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_A_PALETTES[] =
{
    { L"Dee Jay", 0x1534a0, 0x1534c0, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x1523a0, 0x1523c0, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1524a0, 0x1524c0, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_L_PALETTES[] =
{
    { L"Dee Jay", 0x1534c0, 0x1534e0, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x1523c0, 0x1523e0, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1524c0, 0x1524e0, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_R_PALETTES[] =
{
    { L"Dee Jay", 0x1534e0, 0x153500, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x1523e0, 0x152400, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x1524e0, 0x152500, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_Start_PALETTES[] =
{
    { L"Dee Jay", 0x153500, 0x153520, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x152400, 0x152420, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152500, 0x152520, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_DEEJAY_Hold_PALETTES[] =
{
    { L"Dee Jay", 0x153520, 0x153540, indexSNES_SSF2Sprites_DeeJay, 0x00 },
    { L"Portrait 1/2", 0x152420, 0x152440, indexSNES_SSF2Sprites_DeeJay, 0x20, &pairNext },
    { L"Portrait 2/2", 0x152520, 0x152540, indexSNES_SSF2Sprites_DeeJay, 0x21, &pairPrevious },
};

const sGame_PaletteDataset SSF2_SNES_STAGE_PALETTES_RYU[] =
{
    { L"Background Temple",         0x153b40, 0x153b60, indexSNES_SSF2Sprites_Stages, -1, &pairFullyLinkedNode },
    { L"Temple Slanted Roof",       0x153b60, 0x153b80 },
    { L"Left Upper Temple",         0x153b80, 0x153ba0 },
    { L"Right Temple Piece",        0x1556d8, 0x1556f8 },
    { L"Background Tower / Wall",   0x153bc0, 0x153be0 },
    { L"Clouds",                    0x153be0, 0x153c00 },
        //{ L"Sky?",                      0x153ba0, 0x153bc0 },
    { L"Flooring",                  0x153c00, 0x153c20 },
};

const sGame_PaletteDataset SSF2_SNES_STAGE_PALETTES_EHONDA[] =
{
    { L"Floor and Wall",    0x153c40, 0x153c60, indexSNES_SSF2Sprites_Stages, -1, &pairFullyLinkedNode },
    { L"Lower Wall",        0x153ca0, 0x153cc0 },
    { L"Ceiling",           0x153c60, 0x153c80 },
    { L"Tub",               0x153c80, 0x153ca0 },
    { L"Wall Painting",     0x153ce0, 0x153d00 },
    { L"Big Lantern",       0x153cc0, 0x153ce0 },
    { L"Left Wall Stuff",   0x153c20, 0x153c40 },
    { L"Bucket / water drops", 0x155718, 0x155738 },

    // maybe? { L"Mystery 1", 0x153d00, 0x153d20 },
    { L"Painting Victory Animation 1/2", 0x153d20, 0x153d40 },
    { L"Painting Victory Animation 1/2", 0x153d40, 0x153d60 },
};

const sGame_PaletteDataset SSF2_SNES_STAGE_PALETTES_BLANKA[] =
{
    // this seems askew
    // cloud inset                  0x153d48, 0x153d68??
    // blanka sky?                  0x153d68, 0x153d88
    { L"Big Tree",                  0x153d88, 0x153da8 },
    { L"Left Building",             0x153da8, 0x153dc8 },
    { L"Insets / Right Building",   0x153dc8, 0x153de8 },
    { L"Flooring",                  0x153de8, 0x153e08 },
};

const sGame_PaletteDataset SSF2_SNES_BONUS_PALETTES_SELECT[] =
{
    { L"Select Screen",             0x153a40, 0x153b40, indexSNES_SSF2Sprites_Bonus, 0x00 },
    { L"World Map",                 0x150560, 0x1505c0, indexSNES_SSF2Sprites_Bonus, 0x0d },
};

const sGame_PaletteDataset SSF2_SNES_BONUS_PALETTES_HUD[] =
{
    { L"HUD",                       0x1500a0, 0x1500c0, indexSNES_SSF2Sprites_Bonus, 0x01 },
};

const sGame_PaletteDataset SSF2_SNES_BONUS_PALETTES_INTRO[] =
{
    { L"Ryu Standing Dark 1/2",                 0x157418, 0x157458, indexSNES_SSF2Sprites_Bonus, 0x0e, &pairNextAndNext6 },
    { L"Ryu Standing Dark 2/2",                 0x157618, 0x157658, indexSNES_SSF2Sprites_Bonus, 0x0f },
    { L"Ryu Standing Dimly Lit 1/2",            0x157458, 0x157498, indexSNES_SSF2Sprites_Bonus, 0x0e, &pairNextAndNext4 },
    { L"Ryu Standing Dimly Lit 2/2",            0x157678, 0x1576b8, indexSNES_SSF2Sprites_Bonus, 0x0f },
    { L"Ryu Standing 1/2",                      0x157498, 0x1574d8, indexSNES_SSF2Sprites_Bonus, 0x0e, &pairNextAndNext },
    { L"Ryu Standing 2/2",                      0x1576b8, 0x1576f8, indexSNES_SSF2Sprites_Bonus, 0x0f },

    { L"Ryu Standing Eyes",                     0x157658, 0x157678, indexSNES_SSF2Sprites_Bonus, 0x10 },

    { L"Ryu Charging Animation Cycle 1/4",      0x157518, 0x157558, indexSNES_SSF2Sprites_Bonus, 0x11, &pairNext4 },
    { L"Ryu Charging Animation Cycle 2/4",      0x157558, 0x157598, indexSNES_SSF2Sprites_Bonus, 0x11, &pairNext3 },
    { L"Ryu Charging Animation Cycle 3/4",      0x157598, 0x1575d8, indexSNES_SSF2Sprites_Bonus, 0x11, &pairNext2 },
    { L"Ryu Charging Animation Cycle 4/4",      0x1575d8, 0x157618, indexSNES_SSF2Sprites_Bonus, 0x11, &pairNext },

    { L"Fireball / Charging",                   0x1576f8, 0x157718, indexSNES_SSF2Sprites_Bonus, 0x12 },

    { L"Ryu Throwing Fireball",                 0x1574d8, 0x1574f8, indexSNES_SSF2Sprites_Bonus, 0x13 },
};

const sGame_PaletteDataset SSF2_SNES_BONUS_PALETTES_BONUS[] =
{
    { L"Guile Sonic Boom / Dee Jay Air Slasher", 0x153540, 0x153560, indexSNES_SSF2Sprites_Bonus, 0x02 },
    { L"Ryu Fireball / Shocked Palette 1",  0x153580, 0x1535a0, indexSNES_SSF2Sprites_Bonus, 0x03 },
    { L"Dhalsim Fireball",                  0x1535c0, 0x1535e0, indexSNES_SSF2Sprites_Bonus, 0x04 },
    { L"Sagat Fireball",                    0x1535e0, 0x153600, indexSNES_SSF2Sprites_Bonus, 0x05 },
    { L"Ken Fireball / Shocked Palette 2",  0x153620, 0x153640, indexSNES_SSF2Sprites_Bonus, 0x06 },

    { L"Ignited Palette",                   0x153740, 0x153760, indexSNES_SSF2Sprites_Bonus, 0x07 },
    { L"Dizzy Stars",                       0x1537a0, 0x1537c0, indexSNES_SSF2Sprites_Bonus, 0x08 },
    { L"Dizzy Angels / Ducks",              0x1537c0, 0x1537e0, indexSNES_SSF2Sprites_Bonus, 0x0a },

    { L"VS Screen Background",              0x150600, 0x150620, indexSNES_SSF2Sprites_Bonus, 0x0b },
    { L"VS Screen VS Text",                 0x150620, 0x150640, indexSNES_SSF2Sprites_Bonus, 0x0c },

    { L"Title Screen Title 1/4",            0x157258, 0x157278, indexSNES_SSF2Sprites_Bonus, 0x09 },
    { L"Title Screen Title 2/4",            0x157278, 0x157298, indexSNES_SSF2Sprites_Bonus, 0x09 },
    { L"Title Screen Title 3/4",            0x157298, 0x1572b8, indexSNES_SSF2Sprites_Bonus, 0x09 },
    { L"Title Screen Title 4/4",            0x1572b8, 0x1572d8, indexSNES_SSF2Sprites_Bonus, 0x09 },

    // Something is askew here.  This doesn't match exactly.
    // { L"Fancy Names Text",      0x156ff8, 0x157018 },
};

const sDescTreeNode SSF2_SNES_RYU_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_Y_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_X_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_B_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_A_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_L_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_R_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_Start_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_RYU_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_EHONDA_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_Y_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_X_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_B_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_A_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_L_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_R_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_Start_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_EHONDA_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_BLANKA_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_Y_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_X_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_B_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_A_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_L_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_R_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_Start_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_BLANKA_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_GUILE_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_Y_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_X_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_B_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_A_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_L_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_R_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_Start_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_GUILE_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_KEN_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_Y_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_X_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_B_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_A_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_L_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_R_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_Start_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_KEN_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_CHUNLI_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_Y_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_X_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_B_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_A_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_L_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_R_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_Start_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_CHUNLI_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_ZANGIEF_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_Y_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_X_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_B_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_A_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_L_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_R_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_Start_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_ZANGIEF_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_DHALSIM_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_Y_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_X_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_B_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_A_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_L_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_R_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_Start_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_DHALSIM_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_MBISON_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_Y_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_X_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_B_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_A_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_L_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_R_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_Start_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_MBISON_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_SAGAT_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_Y_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_X_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_B_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_A_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_L_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_R_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_Start_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_SAGAT_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_BALROG_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_Y_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_X_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_B_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_A_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_L_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_R_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_Start_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_BALROG_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_VEGA_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_Y_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_X_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_B_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_A_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_L_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_R_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_Start_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_VEGA_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_CAMMY_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_Y_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_X_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_B_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_A_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_L_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_R_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_Start_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_CAMMY_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_THAWK_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_Y_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_X_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_B_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_A_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_L_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_R_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_Start_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_THAWK_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_FEILONG_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_Y_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_X_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_B_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_A_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_L_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_R_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_Start_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_FEILONG_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_DEEJAY_COLLECTION[] =
{
    { L"Y", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_Y_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_Y_PALETTES) },
    { L"X", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_X_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_X_PALETTES) },
    { L"B", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_B_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_B_PALETTES) },
    { L"A", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_A_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_A_PALETTES) },
    { L"L", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_L_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_L_PALETTES) },
    { L"R", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_R_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_R_PALETTES) },
    { L"Start", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_Start_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_Start_PALETTES) },
    { L"Hold", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_Hold_PALETTES, ARRAYSIZE(SSF2_SNES_DEEJAY_Hold_PALETTES) },
};

const sDescTreeNode SSF2_SNES_STAGE_COLLECTION[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SSF2_SNES_STAGE_PALETTES_RYU, ARRAYSIZE(SSF2_SNES_STAGE_PALETTES_RYU) },
    { L"E. Honda", DESC_NODETYPE_TREE, (void*)SSF2_SNES_STAGE_PALETTES_EHONDA, ARRAYSIZE(SSF2_SNES_STAGE_PALETTES_EHONDA) },
};

const sDescTreeNode SSF2_SNES_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BONUS_PALETTES_SELECT, ARRAYSIZE(SSF2_SNES_BONUS_PALETTES_SELECT) },
    { L"HUD", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BONUS_PALETTES_HUD, ARRAYSIZE(SSF2_SNES_BONUS_PALETTES_HUD) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BONUS_PALETTES_INTRO, ARRAYSIZE(SSF2_SNES_BONUS_PALETTES_INTRO) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BONUS_PALETTES_BONUS, ARRAYSIZE(SSF2_SNES_BONUS_PALETTES_BONUS) },
};

const sDescTreeNode SSF2_SNES_UNITS[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SSF2_SNES_RYU_COLLECTION, ARRAYSIZE(SSF2_SNES_RYU_COLLECTION) },
    { L"E. Honda", DESC_NODETYPE_TREE, (void*)SSF2_SNES_EHONDA_COLLECTION, ARRAYSIZE(SSF2_SNES_EHONDA_COLLECTION) },
    { L"Blanka", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BLANKA_COLLECTION, ARRAYSIZE(SSF2_SNES_BLANKA_COLLECTION) },
    { L"Guile", DESC_NODETYPE_TREE, (void*)SSF2_SNES_GUILE_COLLECTION, ARRAYSIZE(SSF2_SNES_GUILE_COLLECTION) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SSF2_SNES_KEN_COLLECTION, ARRAYSIZE(SSF2_SNES_KEN_COLLECTION) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CHUNLI_COLLECTION, ARRAYSIZE(SSF2_SNES_CHUNLI_COLLECTION) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)SSF2_SNES_ZANGIEF_COLLECTION, ARRAYSIZE(SSF2_SNES_ZANGIEF_COLLECTION) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DHALSIM_COLLECTION, ARRAYSIZE(SSF2_SNES_DHALSIM_COLLECTION) },
    { L"M. Bison", DESC_NODETYPE_TREE, (void*)SSF2_SNES_MBISON_COLLECTION, ARRAYSIZE(SSF2_SNES_MBISON_COLLECTION) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)SSF2_SNES_SAGAT_COLLECTION, ARRAYSIZE(SSF2_SNES_SAGAT_COLLECTION) },
    { L"Balrog", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BALROG_COLLECTION, ARRAYSIZE(SSF2_SNES_BALROG_COLLECTION) },
    { L"Vega", DESC_NODETYPE_TREE, (void*)SSF2_SNES_VEGA_COLLECTION, ARRAYSIZE(SSF2_SNES_VEGA_COLLECTION) },
    { L"Cammy", DESC_NODETYPE_TREE, (void*)SSF2_SNES_CAMMY_COLLECTION, ARRAYSIZE(SSF2_SNES_CAMMY_COLLECTION) },
    { L"T-Hawk", DESC_NODETYPE_TREE, (void*)SSF2_SNES_THAWK_COLLECTION, ARRAYSIZE(SSF2_SNES_THAWK_COLLECTION) },
    { L"Fei Long", DESC_NODETYPE_TREE, (void*)SSF2_SNES_FEILONG_COLLECTION, ARRAYSIZE(SSF2_SNES_FEILONG_COLLECTION) },
    { L"Dee Jay", DESC_NODETYPE_TREE, (void*)SSF2_SNES_DEEJAY_COLLECTION, ARRAYSIZE(SSF2_SNES_DEEJAY_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)SSF2_SNES_STAGE_COLLECTION, ARRAYSIZE(SSF2_SNES_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SSF2_SNES_BONUS_COLLECTION, ARRAYSIZE(SSF2_SNES_BONUS_COLLECTION) },
};

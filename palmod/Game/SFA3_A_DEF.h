#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA3_A_RYU_PALETTES. 
// * Update every array using SFA3_A_NUM_IND below
// * Update the index lookups in Game_SFA3_A.cpp that are marked 
//       - look for usage of index_SFA3_Ryu to find them
// That should be it.  Good luck.

enum Supported_SFA3_PaletteListIndex
{
    index_SFA3_Ryu,
    index_SFA3_Ken,
    index_SFA3_Gouki,
    index_SFA3_Charlie,
    index_SFA3_ChunLi,
    index_SFA3_Adon,
    index_SFA3_Sodom,
    index_SFA3_Guy,
    index_SFA3_Birdie,
    index_SFA3_Rose,
    index_SFA3_MBison,
    index_SFA3_Sagat,
    index_SFA3_Dan,
    index_SFA3_Sakura,
    index_SFA3_Rolento,
    index_SFA3_Dhalsim,
    index_SFA3_Zangief,
    index_SFA3_Gen,
    index_SFA3_Balrog,
    index_SFA3_Cammy,
    index_SFA3_EdHonda,
    index_SFA3_Blanka,
    index_SFA3_RMika,
    index_SFA3_Cody,
    index_SFA3_Vega,
    index_SFA3_Karin,
    index_SFA3_Juni,
    index_SFA3_Juli,
    index_SFA3_Stages,
    index_SFA3_Last
};

constexpr auto SFA3_A_NUM_IND = index_SFA3_Last;

#define SFA3_A_EXTRALOC SFA3_A_NUM_IND

const UINT8 SFA3_A_UNITSORT[SFA3_A_NUM_IND + 1] = // Plus 1 for the extra palettes
{
    index_SFA3_Adon,
    index_SFA3_Balrog,
    index_SFA3_Birdie,
    index_SFA3_Blanka,
    index_SFA3_Cammy,
    index_SFA3_Charlie,
    index_SFA3_ChunLi,
    index_SFA3_Cody,
    index_SFA3_Dan,
    index_SFA3_Dhalsim,
    index_SFA3_EdHonda,
    index_SFA3_Gen,
    index_SFA3_Gouki,
    index_SFA3_Guy,
    index_SFA3_Juli,
    index_SFA3_Juni,
    index_SFA3_Karin,
    index_SFA3_Ken,
    index_SFA3_MBison,
    index_SFA3_RMika,
    index_SFA3_Rolento,
    index_SFA3_Rose,
    index_SFA3_Ryu,
    index_SFA3_Sagat,
    index_SFA3_Sakura,
    index_SFA3_Sodom,
    index_SFA3_Vega,
    index_SFA3_Zangief,
    index_SFA3_Stages,

    SFA3_A_EXTRALOC // Extra palettes
};

const sGame_PaletteDataset SFA3_A_RYU_XISMP[] =
{
    { L"X-Ism Punch", 0x2c0d4, 0x2c0f4, 0x00, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c0f4, 0x2c114, 0x00, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2c114, 0x2c134 },
    { L"X-Ism Punch Super Trail Light", 0x2c134, 0x2c154, 0x00, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c154, 0x2c174, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_XISMK[] =
{
    { L"X-Ism Kick", 0x2c174, 0x2c194, 0x00, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c194, 0x2c1b4, 0x00, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2c1b4, 0x2c1d4 },
    { L"X-Ism Kick Super Trail Light", 0x2c1d4, 0x2c1f4, 0x00, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c1f4, 0x2c214, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMP[] =
{
    { L"A-Ism Punch", 0x2c214, 0x2c234, 0x00, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c234, 0x2c254, 0x00, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2c254, 0x2c274 },
    { L"A-Ism Punch Super Trail Light", 0x2c274, 0x2c294, 0x00, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2c294, 0x2c2b4, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMK[] =
{
    { L"A-Ism Kick", 0x2c2b4, 0x2c2d4, 0x00, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2c2d4, 0x2c2f4, 0x00, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2c2f4, 0x2c314 },
    { L"A-Ism Kick Super Trail Light", 0x2c314, 0x2c334, 0x00, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2c334, 0x2c354, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMP[] =
{
    { L"V-Ism Punch", 0x2c354, 0x2c374, 0x00, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2c374, 0x2c394, 0x00, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2c394, 0x2c3b4 },
    { L"V-Ism Punch Super Trail Light", 0x2c3b4, 0x2c3d4, 0x00, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2c3d4, 0x2c3f4, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMK[] =
{
    { L"V-Ism Kick", 0x2c3f4, 0x2c414, 0x00, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2c414, 0x2c434, 0x00, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2c434, 0x2c454 },
    { L"V-Ism Kick Super Trail Light", 0x2c454, 0x2c474, 0x00, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2c474, 0x2c494, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_STATUS[] =
{
    { L"Burned 1", 0x32a14 + 0x00, 0x32a14 + 0x20, 0x00 },
    { L"Burned 2", 0x32a14 + 0x20, 0x32a14 + 0x40, 0x00 },
    { L"Psycho Crusher Burned 1", 0x32a14 + 0x40, 0x32a14 + 0x60, 0x00 },
    { L"Psycho Crusher Burned 2", 0x32a14 + 0x60, 0x32a14 + 0x80, 0x00 },
    { L"V-Ism P1 After Effect 1", 0x32a14 + 0x80, 0x32a14 + 0xA0, 0x00 },
    { L"V-Ism P1 After Effect 2", 0x32a14 + 0xA0, 0x32a14 + 0xC0, 0x00 },
    { L"V-Ism P2 After Effect 1", 0x32a14 + 0xC0, 0x32a14 + 0xE0, 0x00 },
    { L"V-Ism P2 After Effect 2", 0x32a14 + 0xe0, 0x32a14 + 0x100, 0x00 },
    { L"X-Ism Punch Zapped", 0x32a14 + 0x100, 0x32a14 + 0x120, 0x00 },
    { L"X-Ism Kick Zapped", 0x32a14 + 0x120, 0x32a14 + 0x140, 0x00 },
    { L"A-Ism Punch Zapped", 0x32a14 + 0x140, 0x32a14 + 0x160, 0x00 },
    { L"A-Ism Kick Zapped", 0x32a14 + 0x160, 0x32a14 + 0x180, 0x00 },
    { L"V-Ism Punch Zapped", 0x32a14 + 0x180, 0x32a14 + 0x1A0, 0x00 },
    { L"V-Ism Kick Zapped", 0x32a14 + 0x1A0, 0x32a14 + 0x1C0, 0x00 },
    { L"Zapped Skeleton", 0x32a14 + 0x1C0, 0x32a14 + 0x1E0, 0x00 },
    { L"X-Ism Punch Mash", 0x32a14 + 0x1e0, 0x32a14 + 0x200, 0x00 },
    { L"X-Ism Kick Mash", 0x32a14 + 0x200, 0x32a14 + 0x220, 0x00 },
    { L"A-Ism Punch Mash", 0x32a14 + 0x220, 0x32a14 + 0x240, 0x00 },
    { L"A-Ism Kick Mash", 0x32a14 + 0x240, 0x32a14 + 0x260, 0x00 },
    { L"V-Ism Punch Mash", 0x32a14 + 0x260, 0x32a14 + 0x280, 0x00 },
    { L"V-Ism Kick Mash", 0x32a14 + 0x280, 0x32a14 + 0x2A0, 0x00 },
    { L"Priority Win", 0x32a14 + 0x2A0, 0x32a14 + 0x2C0, 0x00 },
    { L"Damage Reduction", 0x32a14 + 0x2C0, 0x32a14 + 0x2E0, 0x00 },
    { L"Just Defend", 0x32a14 + 0x2e0, 0x32a14 + 0x300, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMP[] =
{
    { L"X-Ism Punch", 0x2c494, 0x2c4b4, 0x27, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c4b4, 0x2c4d4, 0x27, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2c4d4, 0x2c4f4, 0x27, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2c4f4, 0x2c514, 0x27, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c514, 0x2c534, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMK[] =
{
    { L"X-Ism Kick", 0x2c534, 0x2c554, 0x27, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c554, 0x2c574, 0x27, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2c574, 0x2c594, 0x27, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2c594, 0x2c5b4, 0x27, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c5b4, 0x2c5d4, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMP[] =
{
    { L"A-Ism Punch", 0x2c5d4, 0x2c5f4, 0x27, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c5f4, 0x2c614, 0x27, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2c614, 0x2c634, 0x27, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2c634, 0x2c654, 0x27, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2c654, 0x2c674, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMK[] =
{
    { L"A-Ism Kick", 0x2c674, 0x2c694, 0x27, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2c694, 0x2c6b4, 0x27, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2c6b4, 0x2c6d4, 0x27, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2c6d4, 0x2c6f4, 0x27, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2c6f4, 0x2c714, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMP[] =
{
    { L"V-Ism Punch", 0x2c714, 0x2c734, 0x27, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2c734, 0x2c754, 0x27, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2c754, 0x2c774, 0x27, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2c774, 0x2c794, 0x27, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2c794, 0x2c7b4, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMK[] =
{
    { L"V-Ism Kick", 0x2c7b4, 0x2c7d4, 0x27, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2c7d4, 0x2c7f4, 0x27, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2c7f4, 0x2c814, 0x27, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2c814, 0x2c834, 0x27, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2c834, 0x2c854, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_STATUS[] =
{
    { L"Burned 1", 0x32d14 + 0x00, 0x32d14 + 0x20, 0x27 },
    { L"Burned 2", 0x32d14 + 0x20, 0x32d14 + 0x40, 0x27 },
    { L"Psycho Crusher Burned 1", 0x32d14 + 0x40, 0x32d14 + 0x60, 0x27 },
    { L"Psycho Crusher Burned 2", 0x32d14 + 0x60, 0x32d14 + 0x80, 0x27 },
    { L"V-Ism P1 After Effect 1", 0x32d14 + 0x80, 0x32d14 + 0xA0, 0x27 },
    { L"V-Ism P1 After Effect 2", 0x32d14 + 0xA0, 0x32d14 + 0xC0, 0x27 },
    { L"V-Ism P2 After Effect 1", 0x32d14 + 0xC0, 0x32d14 + 0xE0, 0x27 },
    { L"V-Ism P2 After Effect 2", 0x32d14 + 0xe0, 0x32d14 + 0x100, 0x27 },
    { L"X-Ism Punch Zapped", 0x32d14 + 0x100, 0x32d14 + 0x120, 0x27 },
    { L"X-Ism Kick Zapped", 0x32d14 + 0x120, 0x32d14 + 0x140, 0x27 },
    { L"A-Ism Punch Zapped", 0x32d14 + 0x140, 0x32d14 + 0x160, 0x27 },
    { L"A-Ism Kick Zapped", 0x32d14 + 0x160, 0x32d14 + 0x180, 0x27 },
    { L"V-Ism Punch Zapped", 0x32d14 + 0x180, 0x32d14 + 0x1A0, 0x27 },
    { L"V-Ism Kick Zapped", 0x32d14 + 0x1A0, 0x32d14 + 0x1C0, 0x27 },
    { L"Zapped Skeleton", 0x32d14 + 0x1C0, 0x32d14 + 0x1E0, 0x27 },
    { L"X-Ism Punch Mash", 0x32d14 + 0x1e0, 0x32d14 + 0x200, 0x27 },
    { L"X-Ism Kick Mash", 0x32d14 + 0x200, 0x32d14 + 0x220, 0x27 },
    { L"A-Ism Punch Mash", 0x32d14 + 0x220, 0x32d14 + 0x240, 0x27 },
    { L"A-Ism Kick Mash", 0x32d14 + 0x240, 0x32d14 + 0x260, 0x27 },
    { L"V-Ism Punch Mash", 0x32d14 + 0x260, 0x32d14 + 0x280, 0x27 },
    { L"V-Ism Kick Mash", 0x32d14 + 0x280, 0x32d14 + 0x2A0, 0x27 },
    { L"Priority Win", 0x32d14 + 0x2A0, 0x32d14 + 0x2C0, 0x27 },
    { L"Damage Reduction", 0x32d14 + 0x2C0, 0x32d14 + 0x2E0, 0x27 },
    { L"Just Defend", 0x32d14 + 0x2e0, 0x32d14 + 0x300, 0x27 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMP[] =
{
    { L"X-Ism Punch", 0x2c854, 0x2c874, 0x1e, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c874, 0x2c894, 0x1e, 0x0c },
    { L"X-Ism Punch Extra 2", 0x2c894, 0x2c8b4 },
    { L"X-Ism Punch Super Trail Light", 0x2c8b4, 0x2c8d4, 0x1e, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c8d4, 0x2c8f4, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMK[] =
{
    { L"X-Ism Kick", 0x2c8f4, 0x2c914, 0x1e, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c914, 0x2c934, 0x1e, 0x0c },
    { L"X-Ism Kick Extra 2", 0x2c934, 0x2c954 },
    { L"X-Ism Kick Super Trail Light", 0x2c954, 0x2c974, 0x1e, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c974, 0x2c994, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMP[] =
{
    { L"A-Ism Punch", 0x2c994, 0x2c9b4, 0x1e, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c9b4, 0x2c9d4, 0x1e, 0x0c },
    { L"A-Ism Punch Extra 2", 0x2c9d4, 0x2c9f4 },
    { L"A-Ism Punch Super Trail Light", 0x2c9f4, 0x2ca14, 0x1e, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ca14, 0x2ca34, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMK[] =
{
    { L"A-Ism Kick", 0x2ca34, 0x2ca54, 0x1e, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2ca54, 0x2ca74, 0x1e, 0x0c },
    { L"A-Ism Kick Extra 2", 0x2ca74, 0x2ca94 },
    { L"A-Ism Kick Super Trail Light", 0x2ca94, 0x2cab4, 0x1e, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2cab4, 0x2cad4, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMP[] =
{
    { L"V-Ism Punch", 0x2cad4, 0x2caf4, 0x1e, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2caf4, 0x2cb14, 0x1e, 0x0c },
    { L"V-Ism Punch Extra 2", 0x2cb14, 0x2cb34 },
    { L"V-Ism Punch Super Trail Light", 0x2cb34, 0x2cb54, 0x1e, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2cb54, 0x2cb74, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMK[] =
{
    { L"V-Ism Kick", 0x2cb74, 0x2cb94, 0x1e, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2cb94, 0x2cbb4, 0x1e, 0x0c },
    { L"V-Ism Kick Extra 2", 0x2cbb4, 0x2cbd4 },
    { L"V-Ism Kick Super Trail Light", 0x2cbd4, 0x2cbf4, 0x1e, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2cbf4, 0x2cc14, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_STATUS[] =
{
    { L"Burned 1", 0x33014 + 0x00, 0x33014 + 0x20, 0x1E },
    { L"Burned 2", 0x33014 + 0x20, 0x33014 + 0x40, 0x1E },
    { L"Psycho Crusher Burned 1", 0x33014 + 0x40, 0x33014 + 0x60, 0x1E },
    { L"Psycho Crusher Burned 2", 0x33014 + 0x60, 0x33014 + 0x80, 0x1E },
    { L"V-Ism P1 After Effect 1", 0x33014 + 0x80, 0x33014 + 0xA0, 0x1E },
    { L"V-Ism P1 After Effect 2", 0x33014 + 0xA0, 0x33014 + 0xC0, 0x1E },
    { L"V-Ism P2 After Effect 1", 0x33014 + 0xC0, 0x33014 + 0xE0, 0x1E },
    { L"V-Ism P2 After Effect 2", 0x33014 + 0xe0, 0x33014 + 0x100, 0x1E },
    { L"X-Ism Punch Zapped", 0x33014 + 0x100, 0x33014 + 0x120, 0x1E },
    { L"X-Ism Kick Zapped", 0x33014 + 0x120, 0x33014 + 0x140, 0x1E },
    { L"A-Ism Punch Zapped", 0x33014 + 0x140, 0x33014 + 0x160, 0x1E },
    { L"A-Ism Kick Zapped", 0x33014 + 0x160, 0x33014 + 0x180, 0x1E },
    { L"V-Ism Punch Zapped", 0x33014 + 0x180, 0x33014 + 0x1A0, 0x1E },
    { L"V-Ism Kick Zapped", 0x33014 + 0x1A0, 0x33014 + 0x1C0, 0x1E },
    { L"Zapped Skeleton", 0x33014 + 0x1C0, 0x33014 + 0x1E0, 0x1E },
    { L"X-Ism Punch Mash", 0x33014 + 0x1e0, 0x33014 + 0x200, 0x1E },
    { L"X-Ism Kick Mash", 0x33014 + 0x200, 0x33014 + 0x220, 0x1E },
    { L"A-Ism Punch Mash", 0x33014 + 0x220, 0x33014 + 0x240, 0x1E },
    { L"A-Ism Kick Mash", 0x33014 + 0x240, 0x33014 + 0x260, 0x1E },
    { L"V-Ism Punch Mash", 0x33014 + 0x260, 0x33014 + 0x280, 0x1E },
    { L"V-Ism Kick Mash", 0x33014 + 0x280, 0x33014 + 0x2A0, 0x1E },
    { L"Priority Win", 0x33014 + 0x2A0, 0x33014 + 0x2C0, 0x1E },
    { L"Damage Reduction", 0x33014 + 0x2C0, 0x33014 + 0x2E0, 0x1E },
    { L"Just Defend", 0x33014 + 0x2e0, 0x33014 + 0x300, 0x1E },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMP[] =
{
    { L"X-Ism Punch", 0x2cc14, 0x2cc34, 0x21, 0x00 },
    { L"X-Ism Punch Sonic Boom", 0x2cc34, 0x2cc54, 0x21, 0x01 },
    { L"X-Ism Punch Flash Kick", 0x2cc54, 0x2cc74, 0x21, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2cc74, 0x2cc94, 0x21, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2cc94, 0x2ccb4, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMK[] =
{
    { L"X-Ism Kick", 0x2ccb4, 0x2ccd4, 0x21, 0x00 },
    { L"X-Ism Kick Sonic Boom", 0x2ccd4, 0x2ccf4, 0x21, 0x01 },
    { L"X-Ism Kick Flash Kick", 0x2ccf4, 0x2cd14, 0x21, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2cd14, 0x2cd34, 0x21, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2cd34, 0x2cd54, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMP[] =
{
    { L"A-Ism Punch", 0x2cd54, 0x2cd74, 0x21, 0x00 },
    { L"A-Ism Punch Sonic Boom", 0x2cd74, 0x2cd94, 0x21, 0x01 },
    { L"A-Ism Punch Flash Kick", 0x2cd94, 0x2cdb4, 0x21, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2cdb4, 0x2cdd4, 0x21, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2cdd4, 0x2cdf4, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMK[] =
{
    { L"A-Ism Kick", 0x2cdf4, 0x2ce14, 0x21, 0x00 },
    { L"A-Ism Kick Sonic Boom", 0x2ce14, 0x2ce34, 0x21, 0x01 },
    { L"A-Ism Kick Flash Kick", 0x2ce34, 0x2ce54, 0x21, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2ce54, 0x2ce74, 0x21, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ce74, 0x2ce94, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMP[] =
{
    { L"V-Ism Punch", 0x2ce94, 0x2ceb4, 0x21, 0x00 },
    { L"V-Ism Punch Sonic Boom", 0x2ceb4, 0x2ced4, 0x21, 0x01 },
    { L"V-Ism Punch Flash Kick", 0x2ced4, 0x2cef4, 0x21, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2cef4, 0x2cf14, 0x21, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2cf14, 0x2cf34, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMK[] =
{
    { L"V-Ism Kick", 0x2cf34, 0x2cf54, 0x21, 0x00 },
    { L"V-Ism Kick Sonic Boom", 0x2cf54, 0x2cf74, 0x21, 0x01 },
    { L"V-Ism Kick Flash Kick", 0x2cf74, 0x2cf94, 0x21, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2cf94, 0x2cfb4, 0x21, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2cfb4, 0x2cfd4, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_STATUS[] =
{
    { L"Burned 1", 0x33314 + 0x00, 0x33314 + 0x20, 0x21 },
    { L"Burned 2", 0x33314 + 0x20, 0x33314 + 0x40, 0x21 },
    { L"Psycho Crusher Burned 1", 0x33314 + 0x40, 0x33314 + 0x60, 0x21 },
    { L"Psycho Crusher Burned 2", 0x33314 + 0x60, 0x33314 + 0x80, 0x21 },
    { L"V-Ism P1 After Effect 1", 0x33314 + 0x80, 0x33314 + 0xA0, 0x21 },
    { L"V-Ism P1 After Effect 2", 0x33314 + 0xA0, 0x33314 + 0xC0, 0x21 },
    { L"V-Ism P2 After Effect 1", 0x33314 + 0xC0, 0x33314 + 0xE0, 0x21 },
    { L"V-Ism P2 After Effect 2", 0x33314 + 0xe0, 0x33314 + 0x100, 0x21 },
    { L"X-Ism Punch Zapped", 0x33314 + 0x100, 0x33314 + 0x120, 0x21 },
    { L"X-Ism Kick Zapped", 0x33314 + 0x120, 0x33314 + 0x140, 0x21 },
    { L"A-Ism Punch Zapped", 0x33314 + 0x140, 0x33314 + 0x160, 0x21 },
    { L"A-Ism Kick Zapped", 0x33314 + 0x160, 0x33314 + 0x180, 0x21 },
    { L"V-Ism Punch Zapped", 0x33314 + 0x180, 0x33314 + 0x1A0, 0x21 },
    { L"V-Ism Kick Zapped", 0x33314 + 0x1A0, 0x33314 + 0x1C0, 0x21 },
    { L"Zapped Skeleton", 0x33314 + 0x1C0, 0x33314 + 0x1E0, 0x21 },
    { L"X-Ism Punch Mash", 0x33314 + 0x1e0, 0x33314 + 0x200, 0x21 },
    { L"X-Ism Kick Mash", 0x33314 + 0x200, 0x33314 + 0x220, 0x21 },
    { L"A-Ism Punch Mash", 0x33314 + 0x220, 0x33314 + 0x240, 0x21 },
    { L"A-Ism Kick Mash", 0x33314 + 0x240, 0x33314 + 0x260, 0x21 },
    { L"V-Ism Punch Mash", 0x33314 + 0x260, 0x33314 + 0x280, 0x21 },
    { L"V-Ism Kick Mash", 0x33314 + 0x280, 0x33314 + 0x2A0, 0x21 },
    { L"Priority Win", 0x33314 + 0x2A0, 0x33314 + 0x2C0, 0x21 },
    { L"Damage Reduction", 0x33314 + 0x2C0, 0x33314 + 0x2E0, 0x21 },
    { L"Just Defend", 0x33314 + 0x2e0, 0x33314 + 0x300, 0x21 },
};


const sGame_PaletteDataset SFA3_A_CHUNLI_XISMP[] =
{
    { L"X-Ism Punch", 0x2cfd4, 0x2cff4, indexCPS2_ChunLi, 0x00, &pairNext },
    { L"X-Ism Punch Keiokuken (shades)", 0x2cff4, 0x2d014, indexCPS2_ChunLi, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2d014, 0x2d034, indexCPS2_ChunLi, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2d034, 0x2d054, indexCPS2_ChunLi, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d054, 0x2d074, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_XISMK[] =
{
    { L"X-Ism Kick", 0x2d074, 0x2d094, indexCPS2_ChunLi, 0x00, &pairNext },
    { L"X-Ism Kick Keiokuken (shades)", 0x2d094, 0x2d0b4, indexCPS2_ChunLi, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2d0b4, 0x2d0d4, indexCPS2_ChunLi, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2d0d4, 0x2d0f4, indexCPS2_ChunLi, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d0f4, 0x2d114, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMP[] =
{
    { L"A-Ism Punch", 0x2d114, 0x2d134, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Punch Keiokuken (shades)", 0x2d134, 0x2d154, indexCPS2_ChunLi, 0x0F },
    { L"A-Ism Punch Extra 2", 0x2d154, 0x2d174, indexCPS2_ChunLi, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2d174, 0x2d194, indexCPS2_ChunLi, 0x0c },
    { L"A-Ism Punch Super Trail Dark", 0x2d194, 0x2d1b4, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMK[] =
{
    { L"A-Ism Kick", 0x2d1b4, 0x2d1d4, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Kick Keiokuken (shades)", 0x2d1d4, 0x2d1f4, indexCPS2_ChunLi, 0x0F },
    { L"A-Ism Kick Extra 2", 0x2d1f4, 0x2d214, indexCPS2_ChunLi, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2d214, 0x2d234, indexCPS2_ChunLi, 0x0c },
    { L"A-Ism Kick Super Trail Dark", 0x2d234, 0x2d254, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMP[] =
{
    { L"V-Ism Punch", 0x2d254, 0x2d274, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Punch Keiokuken (shades)", 0x2d274, 0x2d294, indexCPS2_ChunLi, 0x0F },
    { L"V-Ism Punch Extra 2", 0x2d294, 0x2d2b4, indexCPS2_ChunLi, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2d2b4, 0x2d2d4, indexCPS2_ChunLi, 0x0c },
    { L"V-Ism Punch Super Trail Dark", 0x2d2d4, 0x2d2f4, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMK[] =
{
    { L"V-Ism Kick", 0x2d2f4, 0x2d314, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Kick Keiokuken (shades)", 0x2d314, 0x2d334, indexCPS2_ChunLi, 0x0F },
    { L"V-Ism Kick Extra 2", 0x2d334, 0x2d354, indexCPS2_ChunLi, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2d354, 0x2d374, indexCPS2_ChunLi, 0x0c },
    { L"V-Ism Kick Super Trail Dark", 0x2d374, 0x2d394, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_STATUS[] =
{
    { L"Burned 1", 0x33614 + 0x00, 0x33614 + 0x20, indexCPS2_ChunLi },
    { L"Burned 2", 0x33614 + 0x20, 0x33614 + 0x40, indexCPS2_ChunLi },
    { L"Psycho Crusher Burned 1", 0x33614 + 0x40, 0x33614 + 0x60, indexCPS2_ChunLi },
    { L"Psycho Crusher Burned 2", 0x33614 + 0x60, 0x33614 + 0x80, indexCPS2_ChunLi },
    { L"V-Ism P1 After Effect 1", 0x33614 + 0x80, 0x33614 + 0xA0, indexCPS2_ChunLi },
    { L"V-Ism P1 After Effect 2", 0x33614 + 0xA0, 0x33614 + 0xC0, indexCPS2_ChunLi },
    { L"V-Ism P2 After Effect 1", 0x33614 + 0xC0, 0x33614 + 0xE0, indexCPS2_ChunLi },
    { L"V-Ism P2 After Effect 2", 0x33614 + 0xe0, 0x33614 + 0x100, indexCPS2_ChunLi },
    { L"X-Ism Punch Zapped", 0x33614 + 0x100, 0x33614 + 0x120, indexCPS2_ChunLi },
    { L"X-Ism Kick Zapped", 0x33614 + 0x120, 0x33614 + 0x140, indexCPS2_ChunLi },
    { L"A-Ism Punch Zapped", 0x33614 + 0x140, 0x33614 + 0x160, indexCPS2_ChunLi, 0x0C },
    { L"A-Ism Kick Zapped", 0x33614 + 0x160, 0x33614 + 0x180, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Punch Zapped", 0x33614 + 0x180, 0x33614 + 0x1A0, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Kick Zapped", 0x33614 + 0x1A0, 0x33614 + 0x1C0, indexCPS2_ChunLi, 0x0C },
    { L"Zapped Skeleton", 0x33614 + 0x1C0, 0x33614 + 0x1E0, indexCPS2_ChunLi },
    { L"X-Ism Punch Mash", 0x33614 + 0x1e0, 0x33614 + 0x200, indexCPS2_ChunLi },
    { L"X-Ism Kick Mash", 0x33614 + 0x200, 0x33614 + 0x220, indexCPS2_ChunLi },
    { L"A-Ism Punch Mash", 0x33614 + 0x220, 0x33614 + 0x240, indexCPS2_ChunLi, 0x0C },
    { L"A-Ism Kick Mash", 0x33614 + 0x240, 0x33614 + 0x260, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Punch Mash", 0x33614 + 0x260, 0x33614 + 0x280, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Kick Mash", 0x33614 + 0x280, 0x33614 + 0x2A0, indexCPS2_ChunLi, 0x0C },
    { L"Priority Win", 0x33614 + 0x2A0, 0x33614 + 0x2C0, indexCPS2_ChunLi },
    { L"Damage Reduction", 0x33614 + 0x2C0, 0x33614 + 0x2E0, indexCPS2_ChunLi },
    { L"Just Defend", 0x33614 + 0x2e0, 0x33614 + 0x300, indexCPS2_ChunLi },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMP[] =
{
    { L"X-Ism Punch", 0x2d394, 0x2d3b4, 0x3d, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2d3b4, 0x2d3d4 },
    { L"X-Ism Punch Extra 2", 0x2d3d4, 0x2d3f4 },
    { L"X-Ism Punch Super Trail Light", 0x2d3f4, 0x2d414, 0x3d, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d414, 0x2d434, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMK[] =
{
    { L"X-Ism Kick", 0x2d434, 0x2d454, 0x3d, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2d454, 0x2d474 },
    { L"X-Ism Kick Extra 2", 0x2d474, 0x2d494 },
    { L"X-Ism Kick Super Trail Light", 0x2d494, 0x2d4b4, 0x3d, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d4b4, 0x2d4d4, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMP[] =
{
    { L"A-Ism Punch", 0x2d4d4, 0x2d4f4, 0x3d, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2d4f4, 0x2d514 },
    { L"A-Ism Punch Extra 2", 0x2d514, 0x2d534 },
    { L"A-Ism Punch Super Trail Light", 0x2d534, 0x2d554, 0x3d, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2d554, 0x2d574, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMK[] =
{
    { L"A-Ism Kick", 0x2d574, 0x2d594, 0x3d, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2d594, 0x2d5b4 },
    { L"A-Ism Kick Extra 2", 0x2d5b4, 0x2d5d4 },
    { L"A-Ism Kick Super Trail Light", 0x2d5d4, 0x2d5f4, 0x3d, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2d5f4, 0x2d614, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMP[] =
{
    { L"V-Ism Punch", 0x2d614, 0x2d634, 0x3d, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2d634, 0x2d654 },
    { L"V-Ism Punch Extra 2", 0x2d654, 0x2d674 },
    { L"V-Ism Punch Super Trail Light", 0x2d674, 0x2d694, 0x3d, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2d694, 0x2d6b4, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMK[] =
{
    { L"V-Ism Kick", 0x2d6b4, 0x2d6d4, 0x3d, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2d6d4, 0x2d6f4 },
    { L"V-Ism Kick Extra 2", 0x2d6f4, 0x2d714 },
    { L"V-Ism Kick Super Trail Light", 0x2d714, 0x2d734, 0x3d, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2d734, 0x2d754, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_STATUS[] =
{
    { L"Burned 1", 0x339f4 + 0x00, 0x339f4 + 0x20, 0x3D },
    { L"Burned 2", 0x339f4 + 0x20, 0x339f4 + 0x40, 0x3D },
    { L"Psycho Crusher Burned 1", 0x339f4 + 0x40, 0x339f4 + 0x60, 0x3D },
    { L"Psycho Crusher Burned 2", 0x339f4 + 0x60, 0x339f4 + 0x80, 0x3D },
    { L"V-Ism P1 After Effect 1", 0x339f4 + 0x80, 0x339f4 + 0xA0, 0x3D },
    { L"V-Ism P1 After Effect 2", 0x339f4 + 0xA0, 0x339f4 + 0xC0, 0x3D },
    { L"V-Ism P2 After Effect 1", 0x339f4 + 0xC0, 0x339f4 + 0xE0, 0x3D },
    { L"V-Ism P2 After Effect 2", 0x339f4 + 0xe0, 0x339f4 + 0x100, 0x3D },
    { L"X-Ism Punch Zapped", 0x339f4 + 0x100, 0x339f4 + 0x120, 0x3D },
    { L"X-Ism Kick Zapped", 0x339f4 + 0x120, 0x339f4 + 0x140, 0x3D },
    { L"A-Ism Punch Zapped", 0x339f4 + 0x140, 0x339f4 + 0x160, 0x3D },
    { L"A-Ism Kick Zapped", 0x339f4 + 0x160, 0x339f4 + 0x180, 0x3D },
    { L"V-Ism Punch Zapped", 0x339f4 + 0x180, 0x339f4 + 0x1A0, 0x3D },
    { L"V-Ism Kick Zapped", 0x339f4 + 0x1A0, 0x339f4 + 0x1C0, 0x3D },
    { L"Zapped Skeleton", 0x339f4 + 0x1C0, 0x339f4 + 0x1E0, 0x3D },
    { L"X-Ism Punch Mash", 0x339f4 + 0x1e0, 0x339f4 + 0x200, 0x3D },
    { L"X-Ism Kick Mash", 0x339f4 + 0x200, 0x339f4 + 0x220, 0x3D },
    { L"A-Ism Punch Mash", 0x339f4 + 0x220, 0x339f4 + 0x240, 0x3D },
    { L"A-Ism Kick Mash", 0x339f4 + 0x240, 0x339f4 + 0x260, 0x3D },
    { L"V-Ism Punch Mash", 0x339f4 + 0x260, 0x339f4 + 0x280, 0x3D },
    { L"V-Ism Kick Mash", 0x339f4 + 0x280, 0x339f4 + 0x2A0, 0x3D },
    { L"Priority Win", 0x339f4 + 0x2A0, 0x339f4 + 0x2C0, 0x3D },
    { L"Damage Reduction", 0x339f4 + 0x2C0, 0x339f4 + 0x2E0, 0x3D },
    { L"Just Defend", 0x339f4 + 0x2e0, 0x339f4 + 0x300, 0x3D },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMP[] =
{
    { L"X-Ism Punch", 0x2d754, 0x2d774, 0x3e, 0x00 },
    { L"X-Ism Punch Swords", 0x02D774, 0x02D794, indexCPS2_Sodom, 0x04 },
    { L"X-Ism Punch Intro", 0x2d794, 0x2d7b4, indexCPS2_Sodom, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x2d7b4, 0x2d7d4, 0x3e, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d7d4, 0x2d7f4, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMK[] =
{
    { L"X-Ism Kick", 0x2d7f4, 0x2d814, 0x3e, 0x00 },
    { L"X-Ism Kick Swords", 0x02D814, 0x02D834, indexCPS2_Sodom, 0x04 },
    { L"X-Ism Kick Intro", 0x2d834, 0x2d854, indexCPS2_Sodom, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x2d854, 0x2d874, 0x3e, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d874, 0x2d894, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMP[] =
{
    { L"A-Ism Punch", 0x2d894, 0x2d8b4, 0x3e, 0x00 },
    { L"A-Ism Punch Slashes", 0x02D8B4, 0x02D8D4, indexCPS2_Sodom, 0x04 },
    { L"A-Ism Punch Intro", 0x2d8d4, 0x2d8f4, indexCPS2_Sodom, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x2d8f4, 0x2d914, 0x3e, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2d914, 0x2d934, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMK[] =
{
    { L"A-Ism Kick", 0x2d934, 0x2d954, 0x3e, 0x00 },
    { L"A-Ism Kick Slashes", 0x02D954, 0x02D974, indexCPS2_Sodom, 0x04 },
    { L"A-Ism Kick Intro", 0x2d974, 0x2d994, indexCPS2_Sodom, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x2d994, 0x2d9b4, 0x3e, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2d9b4, 0x2d9d4, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMP[] =
{
    { L"V-Ism Punch", 0x2d9d4, 0x2d9f4, 0x3e, 0x00 },
    { L"V-Ism Punch Slashes", 0x02D9F4, 0x02DA14, indexCPS2_Sodom, 0x04 },
    { L"V-Ism Punch Intro", 0x2da14, 0x2da34, indexCPS2_Sodom, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x2da34, 0x2da54, 0x3e, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2da54, 0x2da74, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMK[] =
{
    { L"V-Ism Kick", 0x2da74, 0x2da94, 0x3e, 0x00 },
    { L"V-Ism Kick Slashes", 0x02DA94, 0x02DAB4, indexCPS2_Sodom, 0x04 },
    { L"V-Ism Kick Intro", 0x2dab4, 0x2dad4, indexCPS2_Sodom, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x2dad4, 0x2daf4, 0x3e, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2daf4, 0x2db14, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_STATUS[] =
{
    { L"Burned 1", 0x33cf4 + 0x00, 0x33cf4 + 0x20, 0x3E },
    { L"Burned 2", 0x33cf4 + 0x20, 0x33cf4 + 0x40, 0x3E },
    { L"Psycho Crusher Burned 1", 0x33cf4 + 0x40, 0x33cf4 + 0x60, 0x3E },
    { L"Psycho Crusher Burned 2", 0x33cf4 + 0x60, 0x33cf4 + 0x80, 0x3E },
    { L"V-Ism P1 After Effect 1", 0x33cf4 + 0x80, 0x33cf4 + 0xA0, 0x3E },
    { L"V-Ism P1 After Effect 2", 0x33cf4 + 0xA0, 0x33cf4 + 0xC0, 0x3E },
    { L"V-Ism P2 After Effect 1", 0x33cf4 + 0xC0, 0x33cf4 + 0xE0, 0x3E },
    { L"V-Ism P2 After Effect 2", 0x33cf4 + 0xe0, 0x33cf4 + 0x100, 0x3E },
    { L"X-Ism Punch Zapped", 0x33cf4 + 0x100, 0x33cf4 + 0x120, 0x3E },
    { L"X-Ism Kick Zapped", 0x33cf4 + 0x120, 0x33cf4 + 0x140, 0x3E },
    { L"A-Ism Punch Zapped", 0x33cf4 + 0x140, 0x33cf4 + 0x160, 0x3E },
    { L"A-Ism Kick Zapped", 0x33cf4 + 0x160, 0x33cf4 + 0x180, 0x3E },
    { L"V-Ism Punch Zapped", 0x33cf4 + 0x180, 0x33cf4 + 0x1A0, 0x3E },
    { L"V-Ism Kick Zapped", 0x33cf4 + 0x1A0, 0x33cf4 + 0x1C0, 0x3E },
    { L"Zapped Skeleton", 0x33cf4 + 0x1C0, 0x33cf4 + 0x1E0, 0x3E },
    { L"X-Ism Punch Mash", 0x33cf4 + 0x1e0, 0x33cf4 + 0x200, 0x3E },
    { L"X-Ism Kick Mash", 0x33cf4 + 0x200, 0x33cf4 + 0x220, 0x3E },
    { L"A-Ism Punch Mash", 0x33cf4 + 0x220, 0x33cf4 + 0x240, 0x3E },
    { L"A-Ism Kick Mash", 0x33cf4 + 0x240, 0x33cf4 + 0x260, 0x3E },
    { L"V-Ism Punch Mash", 0x33cf4 + 0x260, 0x33cf4 + 0x280, 0x3E },
    { L"V-Ism Kick Mash", 0x33cf4 + 0x280, 0x33cf4 + 0x2A0, 0x3E },
    { L"Priority Win", 0x33cf4 + 0x2A0, 0x33cf4 + 0x2C0, 0x3E },
    { L"Damage Reduction", 0x33cf4 + 0x2C0, 0x33cf4 + 0x2E0, 0x3E },
    { L"Just Defend", 0x33cf4 + 0x2e0, 0x33cf4 + 0x300, 0x3E },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMP[] =
{
    { L"X-Ism Punch", 0x2db14, 0x2db34, 0x3f, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2db34, 0x2db54 },
    { L"X-Ism Punch Extra 2", 0x2db54, 0x2db74 },
    { L"X-Ism Punch Super Trail Light", 0x2db74, 0x2db94, 0x3f, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2db94, 0x2dbb4, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMK[] =
{
    { L"X-Ism Kick", 0x2dbb4, 0x2dbd4, 0x3f, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2dbd4, 0x2dbf4 },
    { L"X-Ism Kick Extra 2", 0x2dbf4, 0x2dc14 },
    { L"X-Ism Kick Super Trail Light", 0x2dc14, 0x2dc34, 0x3f, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2dc34, 0x2dc54, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMP[] =
{
    { L"A-Ism Punch", 0x2dc54, 0x2dc74, 0x3f, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2dc74, 0x2dc94 },
    { L"A-Ism Punch Extra 2", 0x2dc94, 0x2dcb4 },
    { L"A-Ism Punch Super Trail Light", 0x2dcb4, 0x2dcd4, 0x3f, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2dcd4, 0x2dcf4, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMK[] =
{
    { L"A-Ism Kick", 0x2dcf4, 0x2dd14, 0x3f, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2dd14, 0x2dd34 },
    { L"A-Ism Kick Extra 2", 0x2dd34, 0x2dd54 },
    { L"A-Ism Kick Super Trail Light", 0x2dd54, 0x2dd74, 0x3f, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2dd74, 0x2dd94, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMP[] =
{
    { L"V-Ism Punch", 0x2dd94, 0x2ddb4, 0x3f, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ddb4, 0x2ddd4 },
    { L"V-Ism Punch Extra 2", 0x2ddd4, 0x2ddf4 },
    { L"V-Ism Punch Super Trail Light", 0x2ddf4, 0x2de14, 0x3f, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2de14, 0x2de34, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMK[] =
{
    { L"V-Ism Kick", 0x2de34, 0x2de54, 0x3f, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2de54, 0x2de74 },
    { L"V-Ism Kick Extra 2", 0x2de74, 0x2de94 },
    { L"V-Ism Kick Super Trail Light", 0x2de94, 0x2deb4, 0x3f, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2deb4, 0x2ded4, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_STATUS[] =
{
    { L"Burned 1", 0x34194 + 0x00, 0x34194 + 0x20, 0x3f },
    { L"Burned 2", 0x34194 + 0x20, 0x34194 + 0x40, 0x3f },
    { L"Psycho Crusher Burned 1", 0x34194 + 0x40, 0x34194 + 0x60, 0x3f },
    { L"Psycho Crusher Burned 2", 0x34194 + 0x60, 0x34194 + 0x80, 0x3f },
    { L"V-Ism P1 After Effect 1", 0x34194 + 0x80, 0x34194 + 0xA0, 0x3f },
    { L"V-Ism P1 After Effect 2", 0x34194 + 0xA0, 0x34194 + 0xC0, 0x3f },
    { L"V-Ism P2 After Effect 1", 0x34194 + 0xC0, 0x34194 + 0xE0, 0x3f },
    { L"V-Ism P2 After Effect 2", 0x34194 + 0xe0, 0x34194 + 0x100, 0x3f },
    { L"X-Ism Punch Zapped", 0x34194 + 0x100, 0x34194 + 0x120, 0x3f },
    { L"X-Ism Kick Zapped", 0x34194 + 0x120, 0x34194 + 0x140, 0x3f },
    { L"A-Ism Punch Zapped", 0x34194 + 0x140, 0x34194 + 0x160, 0x3f },
    { L"A-Ism Kick Zapped", 0x34194 + 0x160, 0x34194 + 0x180, 0x3f },
    { L"V-Ism Punch Zapped", 0x34194 + 0x180, 0x34194 + 0x1A0, 0x3f },
    { L"V-Ism Kick Zapped", 0x34194 + 0x1A0, 0x34194 + 0x1C0, 0x3f },
    { L"Zapped Skeleton", 0x34194 + 0x1C0, 0x34194 + 0x1E0, 0x3f },
    { L"X-Ism Punch Mash", 0x34194 + 0x1e0, 0x34194 + 0x200, 0x3f },
    { L"X-Ism Kick Mash", 0x34194 + 0x200, 0x34194 + 0x220, 0x3f },
    { L"A-Ism Punch Mash", 0x34194 + 0x220, 0x34194 + 0x240, 0x3f },
    { L"A-Ism Kick Mash", 0x34194 + 0x240, 0x34194 + 0x260, 0x3f },
    { L"V-Ism Punch Mash", 0x34194 + 0x260, 0x34194 + 0x280, 0x3f },
    { L"V-Ism Kick Mash", 0x34194 + 0x280, 0x34194 + 0x2A0, 0x3f },
    { L"Priority Win", 0x34194 + 0x2A0, 0x34194 + 0x2C0, 0x3f },
    { L"Damage Reduction", 0x34194 + 0x2C0, 0x34194 + 0x2E0, 0x3f },
    { L"Just Defend", 0x34194 + 0x2e0, 0x34194 + 0x300, 0x3f },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMP[] =
{
    { L"X-Ism Punch", 0x2ded4, 0x2def4, 0x40, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2def4, 0x2df14 },
    { L"X-Ism Punch Extra 2", 0x2df14, 0x2df34 },
    { L"X-Ism Punch Super Trail Light", 0x2df34, 0x2df54, 0x40, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2df54, 0x2df74, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMK[] =
{
    { L"X-Ism Kick", 0x2df74, 0x2df94, 0x40, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2df94, 0x2dfb4 },
    { L"X-Ism Kick Extra 2", 0x2dfb4, 0x2dfd4 },
    { L"X-Ism Kick Super Trail Light", 0x2dfd4, 0x2dff4, 0x40, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2dff4, 0x2e014, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMP[] =
{
    { L"A-Ism Punch", 0x2e014, 0x2e034, 0x40, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2e034, 0x2e054 },
    { L"A-Ism Punch Extra 2", 0x2e054, 0x2e074 },
    { L"A-Ism Punch Super Trail Light", 0x2e074, 0x2e094, 0x40, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e094, 0x2e0b4, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMK[] =
{
    { L"A-Ism Kick", 0x2e0b4, 0x2e0d4, 0x40, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2e0d4, 0x2e0f4 },
    { L"A-Ism Kick Extra 2", 0x2e0f4, 0x2e114 },
    { L"A-Ism Kick Super Trail Light", 0x2e114, 0x2e134, 0x40, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e134, 0x2e154, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMP[] =
{
    { L"V-Ism Punch", 0x2e154, 0x2e174, 0x40, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2e174, 0x2e194 },
    { L"V-Ism Punch Extra 2", 0x2e194, 0x2e1b4 },
    { L"V-Ism Punch Super Trail Light", 0x2e1b4, 0x2e1d4, 0x40, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e1d4, 0x2e1f4, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMK[] =
{
    { L"V-Ism Kick", 0x2e1f4, 0x2e214, 0x40, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2e214, 0x2e234 },
    { L"V-Ism Kick Extra 2", 0x2e234, 0x2e254 },
    { L"V-Ism Kick Super Trail Light", 0x2e254, 0x2e274, 0x40, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e274, 0x2e294, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_STATUS[] =
{
    { L"Burned 1", 0x34494 + 0x00, 0x34494 + 0x20, 0x40 },
    { L"Burned 2", 0x34494 + 0x20, 0x34494 + 0x40, 0x40 },
    { L"Psycho Crusher Burned 1", 0x34494 + 0x40, 0x34494 + 0x60, 0x40 },
    { L"Psycho Crusher Burned 2", 0x34494 + 0x60, 0x34494 + 0x80, 0x40 },
    { L"V-Ism P1 After Effect 1", 0x34494 + 0x80, 0x34494 + 0xA0, 0x40 },
    { L"V-Ism P1 After Effect 2", 0x34494 + 0xA0, 0x34494 + 0xC0, 0x40 },
    { L"V-Ism P2 After Effect 1", 0x34494 + 0xC0, 0x34494 + 0xE0, 0x40 },
    { L"V-Ism P2 After Effect 2", 0x34494 + 0xe0, 0x34494 + 0x100, 0x40 },
    { L"X-Ism Punch Zapped", 0x34494 + 0x100, 0x34494 + 0x120, 0x40 },
    { L"X-Ism Kick Zapped", 0x34494 + 0x120, 0x34494 + 0x140, 0x40 },
    { L"A-Ism Punch Zapped", 0x34494 + 0x140, 0x34494 + 0x160, 0x40 },
    { L"A-Ism Kick Zapped", 0x34494 + 0x160, 0x34494 + 0x180, 0x40 },
    { L"V-Ism Punch Zapped", 0x34494 + 0x180, 0x34494 + 0x1A0, 0x40 },
    { L"V-Ism Kick Zapped", 0x34494 + 0x1A0, 0x34494 + 0x1C0, 0x40 },
    { L"Zapped Skeleton", 0x34494 + 0x1C0, 0x34494 + 0x1E0, 0x40 },
    { L"X-Ism Punch Mash", 0x34494 + 0x1e0, 0x34494 + 0x200, 0x40 },
    { L"X-Ism Kick Mash", 0x34494 + 0x200, 0x34494 + 0x220, 0x40 },
    { L"A-Ism Punch Mash", 0x34494 + 0x220, 0x34494 + 0x240, 0x40 },
    { L"A-Ism Kick Mash", 0x34494 + 0x240, 0x34494 + 0x260, 0x40 },
    { L"V-Ism Punch Mash", 0x34494 + 0x260, 0x34494 + 0x280, 0x40 },
    { L"V-Ism Kick Mash", 0x34494 + 0x280, 0x34494 + 0x2A0, 0x40 },
    { L"Priority Win", 0x34494 + 0x2A0, 0x34494 + 0x2C0, 0x40 },
    { L"Damage Reduction", 0x34494 + 0x2C0, 0x34494 + 0x2E0, 0x40 },
    { L"Just Defend", 0x34494 + 0x2e0, 0x34494 + 0x300, 0x40 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMP[] =
{
    { L"X-Ism Punch", 0x2e294, 0x2e2b4, 0x41, 0x00 },
    { L"X-Ism Punch Soul Power", 0x2e2b4, 0x2e2d4, 0x41, 0x02 },
    { L"X-Ism Punch Extra 2", 0x2e2d4, 0x2e2f4 },
    { L"X-Ism Punch Super Trail Light", 0x2e2f4, 0x2e314, 0x41, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2e314, 0x2e334, 0x41, 0x00 },
    { L"X-Ism Punch Dress Winpose", 0x4ae14, 0x4ae34, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMK[] =
{
    { L"X-Ism Kick", 0x2e334, 0x2e354, 0x41, 0x00 },
    { L"X-Ism Kick Soul Power", 0x2e354, 0x2e374, 0x41, 0x02 },
    { L"X-Ism Kick Extra 2", 0x2e374, 0x2e394 },
    { L"X-Ism Kick Super Trail Light", 0x2e394, 0x2e3b4, 0x41, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2e3b4, 0x2e3d4, 0x41, 0x00 },
    { L"X-Ism Kick Dress Winpose", 0x4ae34, 0x4ae54, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMP[] =
{
    { L"A-Ism Punch", 0x2e3d4, 0x2e3f4, 0x41, 0x00 },
    { L"A-Ism Punch Soul Power", 0x2e3f4, 0x2e414, 0x41, 0x02 },
    { L"A-Ism Punch Extra 2", 0x2e414, 0x2e434 },
    { L"A-Ism Punch Super Trail Light", 0x2e434, 0x2e454, 0x41, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e454, 0x2e474, 0x41, 0x00 },
    { L"A-Ism Punch Dress Winpose", 0x4ae54, 0x4ae74, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMK[] =
{
    { L"A-Ism Kick", 0x2e474, 0x2e494, 0x41, 0x00 },
    { L"A-Ism Kick Soul Power", 0x2e494, 0x2e4b4, 0x41, 0x02 },
    { L"A-Ism Kick Extra 2", 0x2e4b4, 0x2e4d4 },
    { L"A-Ism Kick Super Trail Light", 0x2e4d4, 0x2e4f4, 0x41, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e4f4, 0x2e514, 0x41, 0x00 },
    { L"A-Ism Kick Dress Winpose", 0x4ae74, 0x4ae94, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMP[] =
{
    { L"V-Ism Punch", 0x2e514, 0x2e534, 0x41, 0x00 },
    { L"V-Ism Punch Soul Power", 0x2e534, 0x2e554, 0x41, 0x02 },
    { L"V-Ism Punch Extra 2", 0x2e554, 0x2e574 },
    { L"V-Ism Punch Super Trail Light", 0x2e574, 0x2e594, 0x41, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e594, 0x2e5b4, 0x41, 0x00 },
    { L"V-Ism Punch Dress Winpose", 0x4ae94, 0x4aeb4, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMK[] =
{
    { L"V-Ism Kick", 0x2e5b4, 0x2e5d4, 0x41, 0x00 },
    { L"V-Ism Kick Soul Power", 0x2e5d4, 0x2e5f4, 0x41, 0x02 },
    { L"V-Ism Kick Extra 2", 0x2e5f4, 0x2e614 },
    { L"V-Ism Kick Super Trail Light", 0x2e614, 0x2e634, 0x41, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e634, 0x2e654, 0x41, 0x00 },
    { L"V-Ism Kick Dress Winpose", 0x4aeb4, 0x4aed4, indexCPS2_Rose, 1 },
};
    
const sGame_PaletteDataset SFA3_A_ROSE_STATUS[] =
{
    { L"Burned 1", 0x34794 + 0x00, 0x34794 + 0x20, 0x41 },
    { L"Burned 2", 0x34794 + 0x20, 0x34794 + 0x40, 0x41 },
    { L"Psycho Crusher Burned 1", 0x34794 + 0x40, 0x34794 + 0x60, 0x41 },
    { L"Psycho Crusher Burned 2", 0x34794 + 0x60, 0x34794 + 0x80, 0x41 },
    { L"V-Ism P1 After Effect 1", 0x34794 + 0x80, 0x34794 + 0xA0, 0x41 },
    { L"V-Ism P1 After Effect 2", 0x34794 + 0xA0, 0x34794 + 0xC0, 0x41 },
    { L"V-Ism P2 After Effect 1", 0x34794 + 0xC0, 0x34794 + 0xE0, 0x41 },
    { L"V-Ism P2 After Effect 2", 0x34794 + 0xe0, 0x34794 + 0x100, 0x41 },
    { L"X-Ism Punch Zapped", 0x34794 + 0x100, 0x34794 + 0x120, 0x41 },
    { L"X-Ism Kick Zapped", 0x34794 + 0x120, 0x34794 + 0x140, 0x41 },
    { L"A-Ism Punch Zapped", 0x34794 + 0x140, 0x34794 + 0x160, 0x41 },
    { L"A-Ism Kick Zapped", 0x34794 + 0x160, 0x34794 + 0x180, 0x41 },
    { L"V-Ism Punch Zapped", 0x34794 + 0x180, 0x34794 + 0x1A0, 0x41 },
    { L"V-Ism Kick Zapped", 0x34794 + 0x1A0, 0x34794 + 0x1C0, 0x41 },
    { L"Zapped Skeleton", 0x34794 + 0x1C0, 0x34794 + 0x1E0, 0x41 },
    { L"X-Ism Punch Mash", 0x34794 + 0x1e0, 0x34794 + 0x200, 0x41 },
    { L"X-Ism Kick Mash", 0x34794 + 0x200, 0x34794 + 0x220, 0x41 },
    { L"A-Ism Punch Mash", 0x34794 + 0x220, 0x34794 + 0x240, 0x41 },
    { L"A-Ism Kick Mash", 0x34794 + 0x240, 0x34794 + 0x260, 0x41 },
    { L"V-Ism Punch Mash", 0x34794 + 0x260, 0x34794 + 0x280, 0x41 },
    { L"V-Ism Kick Mash", 0x34794 + 0x280, 0x34794 + 0x2A0, 0x41 },
    { L"Priority Win", 0x34794 + 0x2A0, 0x34794 + 0x2C0, 0x41 },
    { L"Damage Reduction", 0x34794 + 0x2C0, 0x34794 + 0x2E0, 0x41 },
    { L"Just Defend", 0x34794 + 0x2e0, 0x34794 + 0x300, 0x41 },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMP[] =
{
    { L"X-Ism Punch", 0x2e654, 0x2e674, 0x26, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2e674, 0x2e694 },
    { L"X-Ism Punch Extra 2", 0x2e694, 0x2e6b4 },
    { L"X-Ism Punch Super Trail Light", 0x2e6b4, 0x2e6d4, 0x26, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2e6d4, 0x2e6f4, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMK[] =
{
    { L"X-Ism Kick", 0x2e6f4, 0x2e714, 0x26, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2e714, 0x2e734 },
    { L"X-Ism Kick Extra 2", 0x2e734, 0x2e754 },
    { L"X-Ism Kick Super Trail Light", 0x2e754, 0x2e774, 0x26, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2e774, 0x2e794, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMP[] =
{
    { L"A-Ism Punch", 0x2e794, 0x2e7b4, 0x26, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2e7b4, 0x2e7d4 },
    { L"A-Ism Punch Extra 2", 0x2e7d4, 0x2e7f4 },
    { L"A-Ism Punch Super Trail Light", 0x2e7f4, 0x2e814, 0x26, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e814, 0x2e834, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMK[] =
{
    { L"A-Ism Kick", 0x2e834, 0x2e854, 0x26, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2e854, 0x2e874 },
    { L"A-Ism Kick Extra 2", 0x2e874, 0x2e894 },
    { L"A-Ism Kick Super Trail Light", 0x2e894, 0x2e8b4, 0x26, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e8b4, 0x2e8d4, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMP[] =
{
    { L"V-Ism Punch", 0x2e8d4, 0x2e8f4, 0x26, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2e8f4, 0x2e914 },
    { L"V-Ism Punch Extra 2", 0x2e914, 0x2e934 },
    { L"V-Ism Punch Super Trail Light", 0x2e934, 0x2e954, 0x26, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e954, 0x2e974, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMK[] =
{
    { L"V-Ism Kick", 0x2e974, 0x2e994, 0x26, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2e994, 0x2e9b4 },
    { L"V-Ism Kick Extra 2", 0x2e9b4, 0x2e9d4 },
    { L"V-Ism Kick Super Trail Light", 0x2e9d4, 0x2e9f4, 0x26, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e9f4, 0x2ea14, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_STATUS[] =
{
    { L"Burned 1", 0x34a94 + 0x00, 0x34a94 + 0x20, 0x26 },
    { L"Burned 2", 0x34a94 + 0x20, 0x34a94 + 0x40, 0x26 },
    { L"Psycho Crusher Burned 1", 0x34a94 + 0x40, 0x34a94 + 0x60, 0x26 },
    { L"Psycho Crusher Burned 2", 0x34a94 + 0x60, 0x34a94 + 0x80, 0x26 },
    { L"V-Ism P1 After Effect 1", 0x34a94 + 0x80, 0x34a94 + 0xA0, 0x26 },
    { L"V-Ism P1 After Effect 2", 0x34a94 + 0xA0, 0x34a94 + 0xC0, 0x26 },
    { L"V-Ism P2 After Effect 1", 0x34a94 + 0xC0, 0x34a94 + 0xE0, 0x26 },
    { L"V-Ism P2 After Effect 2", 0x34a94 + 0xe0, 0x34a94 + 0x100, 0x26 },
    { L"X-Ism Punch Zapped", 0x34a94 + 0x100, 0x34a94 + 0x120, 0x26 },
    { L"X-Ism Kick Zapped", 0x34a94 + 0x120, 0x34a94 + 0x140, 0x26 },
    { L"A-Ism Punch Zapped", 0x34a94 + 0x140, 0x34a94 + 0x160, 0x26 },
    { L"A-Ism Kick Zapped", 0x34a94 + 0x160, 0x34a94 + 0x180, 0x26 },
    { L"V-Ism Punch Zapped", 0x34a94 + 0x180, 0x34a94 + 0x1A0, 0x26 },
    { L"V-Ism Kick Zapped", 0x34a94 + 0x1A0, 0x34a94 + 0x1C0, 0x26 },
    { L"Zapped Skeleton", 0x34a94 + 0x1C0, 0x34a94 + 0x1E0, 0x26 },
    { L"X-Ism Punch Mash", 0x34a94 + 0x1e0, 0x34a94 + 0x200, 0x26 },
    { L"X-Ism Kick Mash", 0x34a94 + 0x200, 0x34a94 + 0x220, 0x26 },
    { L"A-Ism Punch Mash", 0x34a94 + 0x220, 0x34a94 + 0x240, 0x26 },
    { L"A-Ism Kick Mash", 0x34a94 + 0x240, 0x34a94 + 0x260, 0x26 },
    { L"V-Ism Punch Mash", 0x34a94 + 0x260, 0x34a94 + 0x280, 0x26 },
    { L"V-Ism Kick Mash", 0x34a94 + 0x280, 0x34a94 + 0x2A0, 0x26 },
    { L"Priority Win", 0x34a94 + 0x2A0, 0x34a94 + 0x2C0, 0x26 },
    { L"Damage Reduction", 0x34a94 + 0x2C0, 0x34a94 + 0x2E0, 0x26 },
    { L"Just Defend", 0x34a94 + 0x2e0, 0x34a94 + 0x300, 0x26 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMP[] =
{
    { L"X-Ism Punch", 0x2ea14, 0x2ea34, 0x42, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2ea34, 0x2ea54 },
    { L"X-Ism Punch Extra 2", 0x2ea54, 0x2ea74 },
    { L"X-Ism Punch Super Trail Light", 0x2ea74, 0x2ea94, 0x42, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2ea94, 0x2eab4, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMK[] =
{
    { L"X-Ism Kick", 0x2eab4, 0x2ead4, 0x42, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2ead4, 0x2eaf4 },
    { L"X-Ism Kick Extra 2", 0x2eaf4, 0x2eb14 },
    { L"X-Ism Kick Super Trail Light", 0x2eb14, 0x2eb34, 0x42, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2eb34, 0x2eb54, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMP[] =
{
    { L"A-Ism Punch", 0x2eb54, 0x2eb74, 0x42, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2eb74, 0x2eb94 },
    { L"A-Ism Punch Extra 2", 0x2eb94, 0x2ebb4 },
    { L"A-Ism Punch Super Trail Light", 0x2ebb4, 0x2ebd4, 0x42, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ebd4, 0x2ebf4, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMK[] =
{
    { L"A-Ism Kick", 0x2ebf4, 0x2ec14, 0x42, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2ec14, 0x2ec34 },
    { L"A-Ism Kick Extra 2", 0x2ec34, 0x2ec54 },
    { L"A-Ism Kick Super Trail Light", 0x2ec54, 0x2ec74, 0x42, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ec74, 0x2ec94, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMP[] =
{
    { L"V-Ism Punch", 0x2ec94, 0x2ecb4, 0x42, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ecb4, 0x2ecd4 },
    { L"V-Ism Punch Extra 2", 0x2ecd4, 0x2ecf4 },
    { L"V-Ism Punch Super Trail Light", 0x2ecf4, 0x2ed14, 0x42, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2ed14, 0x2ed34, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMK[] =
{
    { L"V-Ism Kick", 0x2ed34, 0x2ed54, 0x42, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2ed54, 0x2ed74 },
    { L"V-Ism Kick Extra 2", 0x2ed74, 0x2ed94 },
    { L"V-Ism Kick Super Trail Light", 0x2ed94, 0x2edb4, 0x42, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2edb4, 0x2edd4, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_STATUS[] =
{
    { L"Burned 1", 0x34d94 + 0x00, 0x34d94 + 0x20, 0x42 },
    { L"Burned 2", 0x34d94 + 0x20, 0x34d94 + 0x40, 0x42 },
    { L"Psycho Crusher Burned 1", 0x34d94 + 0x40, 0x34d94 + 0x60, 0x42 },
    { L"Psycho Crusher Burned 2", 0x34d94 + 0x60, 0x34d94 + 0x80, 0x42 },
    { L"V-Ism P1 After Effect 1", 0x34d94 + 0x80, 0x34d94 + 0xA0, 0x42 },
    { L"V-Ism P1 After Effect 2", 0x34d94 + 0xA0, 0x34d94 + 0xC0, 0x42 },
    { L"V-Ism P2 After Effect 1", 0x34d94 + 0xC0, 0x34d94 + 0xE0, 0x42 },
    { L"V-Ism P2 After Effect 2", 0x34d94 + 0xe0, 0x34d94 + 0x100, 0x42 },
    { L"X-Ism Punch Zapped", 0x34d94 + 0x100, 0x34d94 + 0x120, 0x42 },
    { L"X-Ism Kick Zapped", 0x34d94 + 0x120, 0x34d94 + 0x140, 0x42 },
    { L"A-Ism Punch Zapped", 0x34d94 + 0x140, 0x34d94 + 0x160, 0x42 },
    { L"A-Ism Kick Zapped", 0x34d94 + 0x160, 0x34d94 + 0x180, 0x42 },
    { L"V-Ism Punch Zapped", 0x34d94 + 0x180, 0x34d94 + 0x1A0, 0x42 },
    { L"V-Ism Kick Zapped", 0x34d94 + 0x1A0, 0x34d94 + 0x1C0, 0x42 },
    { L"Zapped Skeleton", 0x34d94 + 0x1C0, 0x34d94 + 0x1E0, 0x42 },
    { L"X-Ism Punch Mash", 0x34d94 + 0x1e0, 0x34d94 + 0x200, 0x42 },
    { L"X-Ism Kick Mash", 0x34d94 + 0x200, 0x34d94 + 0x220, 0x42 },
    { L"A-Ism Punch Mash", 0x34d94 + 0x220, 0x34d94 + 0x240, 0x42 },
    { L"A-Ism Kick Mash", 0x34d94 + 0x240, 0x34d94 + 0x260, 0x42 },
    { L"V-Ism Punch Mash", 0x34d94 + 0x260, 0x34d94 + 0x280, 0x42 },
    { L"V-Ism Kick Mash", 0x34d94 + 0x280, 0x34d94 + 0x2A0, 0x42 },
    { L"Priority Win", 0x34d94 + 0x2A0, 0x34d94 + 0x2C0, 0x42 },
    { L"Damage Reduction", 0x34d94 + 0x2C0, 0x34d94 + 0x2E0, 0x42 },
    { L"Just Defend", 0x34d94 + 0x2e0, 0x34d94 + 0x300, 0x42 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMP[] =
{
    { L"X-Ism Punch", 0x2edd4, 0x2edf4, 0x23, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2edf4, 0x2ee14 },
    { L"X-Ism Punch Extra 2", 0x2ee14, 0x2ee34 },
    { L"X-Ism Punch Super Trail Light", 0x2ee34, 0x2ee54, 0x23, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2ee54, 0x2ee74, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMK[] =
{
    { L"X-Ism Kick", 0x2ee74, 0x2ee94, 0x23, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2ee94, 0x2eeb4 },
    { L"X-Ism Kick Extra 2", 0x2eeb4, 0x2eed4 },
    { L"X-Ism Kick Super Trail Light", 0x2eed4, 0x2eef4, 0x23, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2eef4, 0x2ef14, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMP[] =
{
    { L"A-Ism Punch", 0x2ef14, 0x2ef34, 0x23, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2ef34, 0x2ef54 },
    { L"A-Ism Punch Extra 2", 0x2ef54, 0x2ef74 },
    { L"A-Ism Punch Super Trail Light", 0x2ef74, 0x2ef94, 0x23, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ef94, 0x2efb4, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMK[] =
{
    { L"A-Ism Kick", 0x2efb4, 0x2efd4, 0x23, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2efd4, 0x2eff4 },
    { L"A-Ism Kick Extra 2", 0x2eff4, 0x2f014 },
    { L"A-Ism Kick Super Trail Light", 0x2f014, 0x2f034, 0x23, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f034, 0x2f054, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMP[] =
{
    { L"V-Ism Punch", 0x2f054, 0x2f074, 0x23, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f074, 0x2f094 },
    { L"V-Ism Punch Extra 2", 0x2f094, 0x2f0b4 },
    { L"V-Ism Punch Super Trail Light", 0x2f0b4, 0x2f0d4, 0x23, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f0d4, 0x2f0f4, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMK[] =
{
    { L"V-Ism Kick", 0x2f0f4, 0x2f114, 0x23, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f114, 0x2f134 },
    { L"V-Ism Kick Extra 2", 0x2f134, 0x2f154 },
    { L"V-Ism Kick Super Trail Light", 0x2f154, 0x2f174, 0x23, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f174, 0x2f194, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_STATUS[] =
{
    { L"Burned 1", 0x35094 + 0x00, 0x35094 + 0x20, 0x23 },
    { L"Burned 2", 0x35094 + 0x20, 0x35094 + 0x40, 0x23 },
    { L"Psycho Crusher Burned 1", 0x35094 + 0x40, 0x35094 + 0x60, 0x23 },
    { L"Psycho Crusher Burned 2", 0x35094 + 0x60, 0x35094 + 0x80, 0x23 },
    { L"V-Ism P1 After Effect 1", 0x35094 + 0x80, 0x35094 + 0xA0, 0x23 },
    { L"V-Ism P1 After Effect 2", 0x35094 + 0xA0, 0x35094 + 0xC0, 0x23 },
    { L"V-Ism P2 After Effect 1", 0x35094 + 0xC0, 0x35094 + 0xE0, 0x23 },
    { L"V-Ism P2 After Effect 2", 0x35094 + 0xe0, 0x35094 + 0x100, 0x23 },
    { L"X-Ism Punch Zapped", 0x35094 + 0x100, 0x35094 + 0x120, 0x23 },
    { L"X-Ism Kick Zapped", 0x35094 + 0x120, 0x35094 + 0x140, 0x23 },
    { L"A-Ism Punch Zapped", 0x35094 + 0x140, 0x35094 + 0x160, 0x23 },
    { L"A-Ism Kick Zapped", 0x35094 + 0x160, 0x35094 + 0x180, 0x23 },
    { L"V-Ism Punch Zapped", 0x35094 + 0x180, 0x35094 + 0x1A0, 0x23 },
    { L"V-Ism Kick Zapped", 0x35094 + 0x1A0, 0x35094 + 0x1C0, 0x23 },
    { L"Zapped Skeleton", 0x35094 + 0x1C0, 0x35094 + 0x1E0, 0x23 },
    { L"X-Ism Punch Mash", 0x35094 + 0x1e0, 0x35094 + 0x200, 0x23 },
    { L"X-Ism Kick Mash", 0x35094 + 0x200, 0x35094 + 0x220, 0x23 },
    { L"A-Ism Punch Mash", 0x35094 + 0x220, 0x35094 + 0x240, 0x23 },
    { L"A-Ism Kick Mash", 0x35094 + 0x240, 0x35094 + 0x260, 0x23 },
    { L"V-Ism Punch Mash", 0x35094 + 0x260, 0x35094 + 0x280, 0x23 },
    { L"V-Ism Kick Mash", 0x35094 + 0x280, 0x35094 + 0x2A0, 0x23 },
    { L"Priority Win", 0x35094 + 0x2A0, 0x35094 + 0x2C0, 0x23 },
    { L"Damage Reduction", 0x35094 + 0x2C0, 0x35094 + 0x2E0, 0x23 },
    { L"Just Defend", 0x35094 + 0x2e0, 0x35094 + 0x300, 0x23 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMP[] =
{
    { L"X-Ism Punch", 0x2f194, 0x2f1b4, 0x22, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f1b4, 0x2f1d4 },
    { L"X-Ism Punch Extra 2", 0x2f1d4, 0x2f1f4 },
    { L"X-Ism Punch Super Trail Light", 0x2f1f4, 0x2f214, 0x22, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f214, 0x2f234, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMK[] =
{
    { L"X-Ism Kick", 0x2f234, 0x2f254, 0x22, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f254, 0x2f274 },
    { L"X-Ism Kick Extra 2", 0x2f274, 0x2f294 },
    { L"X-Ism Kick Super Trail Light", 0x2f294, 0x2f2b4, 0x22, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2f2b4, 0x2f2d4, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMP[] =
{
    { L"A-Ism Punch", 0x2f2d4, 0x2f2f4, 0x22, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2f2f4, 0x2f314 },
    { L"A-Ism Punch Extra 2", 0x2f314, 0x2f334 },
    { L"A-Ism Punch Super Trail Light", 0x2f334, 0x2f354, 0x22, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2f354, 0x2f374, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMK[] =
{
    { L"A-Ism Kick", 0x2f374, 0x2f394, 0x22, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2f394, 0x2f3b4 },
    { L"A-Ism Kick Extra 2", 0x2f3b4, 0x2f3d4 },
    { L"A-Ism Kick Super Trail Light", 0x2f3d4, 0x2f3f4, 0x22, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f3f4, 0x2f414, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMP[] =
{
    { L"V-Ism Punch", 0x2f414, 0x2f434, 0x22, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f434, 0x2f454 },
    { L"V-Ism Punch Extra 2", 0x2f454, 0x2f474 },
    { L"V-Ism Punch Super Trail Light", 0x2f474, 0x2f494, 0x22, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f494, 0x2f4b4, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMK[] =
{
    { L"V-Ism Kick", 0x2f4b4, 0x2f4d4, 0x22, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f4d4, 0x2f4f4 },
    { L"V-Ism Kick Extra 2", 0x2f4f4, 0x2f514 },
    { L"V-Ism Kick Super Trail Light", 0x2f514, 0x2f534, 0x22, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f534, 0x2f554, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_STATUS[] =
{
    { L"Burned 1", 0x35394 + 0x00, 0x35394 + 0x20, 0x22 },
    { L"Burned 2", 0x35394 + 0x20, 0x35394 + 0x40, 0x22 },
    { L"Psycho Crusher Burned 1", 0x35394 + 0x40, 0x35394 + 0x60, 0x22 },
    { L"Psycho Crusher Burned 2", 0x35394 + 0x60, 0x35394 + 0x80, 0x22 },
    { L"V-Ism P1 After Effect 1", 0x35394 + 0x80, 0x35394 + 0xA0, 0x22 },
    { L"V-Ism P1 After Effect 2", 0x35394 + 0xA0, 0x35394 + 0xC0, 0x22 },
    { L"V-Ism P2 After Effect 1", 0x35394 + 0xC0, 0x35394 + 0xE0, 0x22 },
    { L"V-Ism P2 After Effect 2", 0x35394 + 0xe0, 0x35394 + 0x100, 0x22 },
    { L"X-Ism Punch Zapped", 0x35394 + 0x100, 0x35394 + 0x120, 0x22 },
    { L"X-Ism Kick Zapped", 0x35394 + 0x120, 0x35394 + 0x140, 0x22 },
    { L"A-Ism Punch Zapped", 0x35394 + 0x140, 0x35394 + 0x160, 0x22 },
    { L"A-Ism Kick Zapped", 0x35394 + 0x160, 0x35394 + 0x180, 0x22 },
    { L"V-Ism Punch Zapped", 0x35394 + 0x180, 0x35394 + 0x1A0, 0x22 },
    { L"V-Ism Kick Zapped", 0x35394 + 0x1A0, 0x35394 + 0x1C0, 0x22 },
    { L"Zapped Skeleton", 0x35394 + 0x1C0, 0x35394 + 0x1E0, 0x22 },
    { L"X-Ism Punch Mash", 0x35394 + 0x1e0, 0x35394 + 0x200, 0x22 },
    { L"X-Ism Kick Mash", 0x35394 + 0x200, 0x35394 + 0x220, 0x22 },
    { L"A-Ism Punch Mash", 0x35394 + 0x220, 0x35394 + 0x240, 0x22 },
    { L"A-Ism Kick Mash", 0x35394 + 0x240, 0x35394 + 0x260, 0x22 },
    { L"V-Ism Punch Mash", 0x35394 + 0x260, 0x35394 + 0x280, 0x22 },
    { L"V-Ism Kick Mash", 0x35394 + 0x280, 0x35394 + 0x2A0, 0x22 },
    { L"Priority Win", 0x35394 + 0x2A0, 0x35394 + 0x2C0, 0x22 },
    { L"Damage Reduction", 0x35394 + 0x2C0, 0x35394 + 0x2E0, 0x22 },
    { L"Just Defend", 0x35394 + 0x2e0, 0x35394 + 0x300, 0x22 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMP[] =
{
    { L"X-Ism Punch", 0x2f554, 0x2f574, 0x43, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f574, 0x2f594 },
    { L"X-Ism Punch Extra 2", 0x2f594, 0x2f5b4 },
    { L"X-Ism Punch Super Trail Light", 0x2f5b4, 0x2f5d4, 0x43, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f5d4, 0x2f5f4, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMK[] =
{
    { L"X-Ism Kick", 0x2f5f4, 0x2f614, 0x43, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f614, 0x2f634 },
    { L"X-Ism Kick Extra 2", 0x2f634, 0x2f654 },
    { L"X-Ism Kick Super Trail Light", 0x2f654, 0x2f674, 0x43, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2f674, 0x2f694, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMP[] =
{
    { L"A-Ism Punch", 0x2f694, 0x2f6b4, 0x43, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2f6b4, 0x2f6d4 },
    { L"A-Ism Punch Extra 2", 0x2f6d4, 0x2f6f4 },
    { L"A-Ism Punch Super Trail Light", 0x2f6f4, 0x2f714, 0x43, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2f714, 0x2f734, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMK[] =
{
    { L"A-Ism Kick", 0x2f734, 0x2f754, 0x43, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2f754, 0x2f774 },
    { L"A-Ism Kick Extra 2", 0x2f774, 0x2f794 },
    { L"A-Ism Kick Super Trail Light", 0x2f794, 0x2f7b4, 0x43, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f7b4, 0x2f7d4, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMP[] =
{
    { L"V-Ism Punch", 0x2f7d4, 0x2f7f4, 0x43, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f7f4, 0x2f814 },
    { L"V-Ism Punch Extra 2", 0x2f814, 0x2f834 },
    { L"V-Ism Punch Super Trail Light", 0x2f834, 0x2f854, 0x43, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f854, 0x2f874, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMK[] =
{
    { L"V-Ism Kick", 0x2f874, 0x2f894, 0x43, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f894, 0x2f8b4 },
    { L"V-Ism Kick Extra 2", 0x2f8b4, 0x2f8d4 },
    { L"V-Ism Kick Super Trail Light", 0x2f8d4, 0x2f8f4, 0x43, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f8f4, 0x2f914, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_STATUS[] =
{
    { L"Burned 1", 0x35694 + 0x00, 0x35694 + 0x20, 0x43 },
    { L"Burned 2", 0x35694 + 0x20, 0x35694 + 0x40, 0x43 },
    { L"Psycho Crusher Burned 1", 0x35694 + 0x40, 0x35694 + 0x60, 0x43 },
    { L"Psycho Crusher Burned 2", 0x35694 + 0x60, 0x35694 + 0x80, 0x43 },
    { L"V-Ism P1 After Effect 1", 0x35694 + 0x80, 0x35694 + 0xA0, 0x43 },
    { L"V-Ism P1 After Effect 2", 0x35694 + 0xA0, 0x35694 + 0xC0, 0x43 },
    { L"V-Ism P2 After Effect 1", 0x35694 + 0xC0, 0x35694 + 0xE0, 0x43 },
    { L"V-Ism P2 After Effect 2", 0x35694 + 0xe0, 0x35694 + 0x100, 0x43 },
    { L"X-Ism Punch Zapped", 0x35694 + 0x100, 0x35694 + 0x120, 0x43 },
    { L"X-Ism Kick Zapped", 0x35694 + 0x120, 0x35694 + 0x140, 0x43 },
    { L"A-Ism Punch Zapped", 0x35694 + 0x140, 0x35694 + 0x160, 0x43 },
    { L"A-Ism Kick Zapped", 0x35694 + 0x160, 0x35694 + 0x180, 0x43 },
    { L"V-Ism Punch Zapped", 0x35694 + 0x180, 0x35694 + 0x1A0, 0x43 },
    { L"V-Ism Kick Zapped", 0x35694 + 0x1A0, 0x35694 + 0x1C0, 0x43 },
    { L"Zapped Skeleton", 0x35694 + 0x1C0, 0x35694 + 0x1E0, 0x43 },
    { L"X-Ism Punch Mash", 0x35694 + 0x1e0, 0x35694 + 0x200, 0x43 },
    { L"X-Ism Kick Mash", 0x35694 + 0x200, 0x35694 + 0x220, 0x43 },
    { L"A-Ism Punch Mash", 0x35694 + 0x220, 0x35694 + 0x240, 0x43 },
    { L"A-Ism Kick Mash", 0x35694 + 0x240, 0x35694 + 0x260, 0x43 },
    { L"V-Ism Punch Mash", 0x35694 + 0x260, 0x35694 + 0x280, 0x43 },
    { L"V-Ism Kick Mash", 0x35694 + 0x280, 0x35694 + 0x2A0, 0x43 },
    { L"Priority Win", 0x35694 + 0x2A0, 0x35694 + 0x2C0, 0x43 },
    { L"Damage Reduction", 0x35694 + 0x2C0, 0x35694 + 0x2E0, 0x43 },
    { L"Just Defend", 0x35694 + 0x2e0, 0x35694 + 0x300, 0x43 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMP[] =
{
    { L"X-Ism Punch", 0x2f914, 0x2f934, 0x25, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f934, 0x2f954, 0x25, 0x01 },
    { L"X-Ism Punch Sally", 0x2f954, 0x2f974, 0x25, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2f974, 0x2f994, 0x25, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f994, 0x2f9b4, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMK[] =
{
    { L"X-Ism Kick", 0x2f9b4, 0x2f9d4, 0x25, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f9d4, 0x2f9f4, 0x25, 0x01 },
    { L"X-Ism Kick Sally", 0x2f9f4, 0x2fa14, 0x25, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2fa14, 0x2fa34, 0x25, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2fa34, 0x2fa54, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMP[] =
{
    { L"A-Ism Punch", 0x2fa54, 0x2fa74, 0x25, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2fa74, 0x2fa94, 0x25, 0x01 },
    { L"A-Ism Punch Sally", 0x2fa94, 0x2fab4, 0x25, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2fab4, 0x2fad4, 0x25, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2fad4, 0x2faf4, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMK[] =
{
    { L"A-Ism Kick", 0x2faf4, 0x2fb14, 0x25, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2fb14, 0x2fb34, 0x25, 0x01 },
    { L"A-Ism Kick Sally", 0x2fb34, 0x2fb54, 0x25, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2fb54, 0x2fb74, 0x25, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2fb74, 0x2fb94, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMP[] =
{
    { L"V-Ism Punch", 0x2fb94, 0x2fbb4, 0x25, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2fbb4, 0x2fbd4, 0x25, 0x01 },
    { L"V-Ism Punch Sally", 0x2fbd4, 0x2fbf4, 0x25, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2fbf4, 0x2fc14, 0x25, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2fc14, 0x2fc34, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMK[] =
{
    { L"V-Ism Kick", 0x2fc34, 0x2fc54, 0x25, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2fc54, 0x2fc74, 0x25, 0x01 },
    { L"V-Ism Kick Sally", 0x2fc74, 0x2fc94, 0x25, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2fc94, 0x2fcb4, 0x25, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2fcb4, 0x2fcd4, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_STATUS[] =
{
    { L"Burned 1", 0x35994 + 0x00, 0x35994 + 0x20, 0x25 },
    { L"Burned 2", 0x35994 + 0x20, 0x35994 + 0x40, 0x25 },
    { L"Psycho Crusher Burned 1", 0x35994 + 0x40, 0x35994 + 0x60, 0x25 },
    { L"Psycho Crusher Burned 2", 0x35994 + 0x60, 0x35994 + 0x80, 0x25 },
    { L"V-Ism P1 After Effect 1", 0x35994 + 0x80, 0x35994 + 0xA0, 0x25 },
    { L"V-Ism P1 After Effect 2", 0x35994 + 0xA0, 0x35994 + 0xC0, 0x25 },
    { L"V-Ism P2 After Effect 1", 0x35994 + 0xC0, 0x35994 + 0xE0, 0x25 },
    { L"V-Ism P2 After Effect 2", 0x35994 + 0xe0, 0x35994 + 0x100, 0x25 },
    { L"X-Ism Punch Zapped", 0x35994 + 0x100, 0x35994 + 0x120, 0x25 },
    { L"X-Ism Kick Zapped", 0x35994 + 0x120, 0x35994 + 0x140, 0x25 },
    { L"A-Ism Punch Zapped", 0x35994 + 0x140, 0x35994 + 0x160, 0x25 },
    { L"A-Ism Kick Zapped", 0x35994 + 0x160, 0x35994 + 0x180, 0x25 },
    { L"V-Ism Punch Zapped", 0x35994 + 0x180, 0x35994 + 0x1A0, 0x25 },
    { L"V-Ism Kick Zapped", 0x35994 + 0x1A0, 0x35994 + 0x1C0, 0x25 },
    { L"Zapped Skeleton", 0x35994 + 0x1C0, 0x35994 + 0x1E0, 0x25 },
    { L"X-Ism Punch Mash", 0x35994 + 0x1e0, 0x35994 + 0x200, 0x25 },
    { L"X-Ism Kick Mash", 0x35994 + 0x200, 0x35994 + 0x220, 0x25 },
    { L"A-Ism Punch Mash", 0x35994 + 0x220, 0x35994 + 0x240, 0x25 },
    { L"A-Ism Kick Mash", 0x35994 + 0x240, 0x35994 + 0x260, 0x25 },
    { L"V-Ism Punch Mash", 0x35994 + 0x260, 0x35994 + 0x280, 0x25 },
    { L"V-Ism Kick Mash", 0x35994 + 0x280, 0x35994 + 0x2A0, 0x25 },
    { L"Priority Win", 0x35994 + 0x2A0, 0x35994 + 0x2C0, 0x25 },
    { L"Damage Reduction", 0x35994 + 0x2C0, 0x35994 + 0x2E0, 0x25 },
    { L"Just Defend", 0x35994 + 0x2e0, 0x35994 + 0x300, 0x25 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMP[] =
{
    { L"X-Ism Punch", 0x2fcd4, 0x2fcf4, 0x01, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2fcf4, 0x2fd14, 0x01, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2fd14, 0x2fd34 },
    { L"X-Ism Punch Super Trail Light", 0x2fd34, 0x2fd54, 0x01, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2fd54, 0x2fd74, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMK[] =
{
    { L"X-Ism Kick", 0x2fd74, 0x2fd94, 0x01, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2fd94, 0x2fdb4, 0x01, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2fdb4, 0x2fdd4 },
    { L"X-Ism Kick Super Trail Light", 0x2fdd4, 0x2fdf4, 0x01, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2fdf4, 0x2fe14, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMP[] =
{
    { L"A-Ism Punch", 0x2fe14, 0x2fe34, 0x01, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2fe34, 0x2fe54, 0x01, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2fe54, 0x2fe74 },
    { L"A-Ism Punch Super Trail Light", 0x2fe74, 0x2fe94, 0x01, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2fe94, 0x2feb4, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMK[] =
{
    { L"A-Ism Kick", 0x2feb4, 0x2fed4, 0x01, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2fed4, 0x2fef4, 0x01, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2fef4, 0x2ff14 },
    { L"A-Ism Kick Super Trail Light", 0x2ff14, 0x2ff34, 0x01, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ff34, 0x2ff54, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMP[] =
{
    { L"V-Ism Punch", 0x2ff54, 0x2ff74, 0x01, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ff74, 0x2ff94, 0x01, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2ff94, 0x2ffb4 },
    { L"V-Ism Punch Super Trail Light", 0x2ffb4, 0x2ffd4, 0x01, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2ffd4, 0x2fff4, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMK[] =
{
    { L"V-Ism Kick", 0x2fff4, 0x30014, 0x01, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30014, 0x30034, 0x01, 0x01 },
    { L"V-Ism Kick Extra 2", 0x30034, 0x30054 },
    { L"V-Ism Kick Super Trail Light", 0x30054, 0x30074, 0x01, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30074, 0x30094, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_STATUS[] =
{
    { L"Burned 1", 0x35c94 + 0x00, 0x35c94 + 0x20, 0x01 },
    { L"Burned 2", 0x35c94 + 0x20, 0x35c94 + 0x40, 0x01 },
    { L"Psycho Crusher Burned 1", 0x35c94 + 0x40, 0x35c94 + 0x60, 0x01 },
    { L"Psycho Crusher Burned 2", 0x35c94 + 0x60, 0x35c94 + 0x80, 0x01 },
    { L"V-Ism P1 After Effect 1", 0x35c94 + 0x80, 0x35c94 + 0xA0, 0x01 },
    { L"V-Ism P1 After Effect 2", 0x35c94 + 0xA0, 0x35c94 + 0xC0, 0x01 },
    { L"V-Ism P2 After Effect 1", 0x35c94 + 0xC0, 0x35c94 + 0xE0, 0x01 },
    { L"V-Ism P2 After Effect 2", 0x35c94 + 0xe0, 0x35c94 + 0x100, 0x01 },
    { L"X-Ism Punch Zapped", 0x35c94 + 0x100, 0x35c94 + 0x120, 0x01 },
    { L"X-Ism Kick Zapped", 0x35c94 + 0x120, 0x35c94 + 0x140, 0x01 },
    { L"A-Ism Punch Zapped", 0x35c94 + 0x140, 0x35c94 + 0x160, 0x01 },
    { L"A-Ism Kick Zapped", 0x35c94 + 0x160, 0x35c94 + 0x180, 0x01 },
    { L"V-Ism Punch Zapped", 0x35c94 + 0x180, 0x35c94 + 0x1A0, 0x01 },
    { L"V-Ism Kick Zapped", 0x35c94 + 0x1A0, 0x35c94 + 0x1C0, 0x01 },
    { L"Zapped Skeleton", 0x35c94 + 0x1C0, 0x35c94 + 0x1E0, 0x01 },
    { L"X-Ism Punch Mash", 0x35c94 + 0x1e0, 0x35c94 + 0x200, 0x01 },
    { L"X-Ism Kick Mash", 0x35c94 + 0x200, 0x35c94 + 0x220, 0x01 },
    { L"A-Ism Punch Mash", 0x35c94 + 0x220, 0x35c94 + 0x240, 0x01 },
    { L"A-Ism Kick Mash", 0x35c94 + 0x240, 0x35c94 + 0x260, 0x01 },
    { L"V-Ism Punch Mash", 0x35c94 + 0x260, 0x35c94 + 0x280, 0x01 },
    { L"V-Ism Kick Mash", 0x35c94 + 0x280, 0x35c94 + 0x2A0, 0x01 },
    { L"Priority Win", 0x35c94 + 0x2A0, 0x35c94 + 0x2C0, 0x01 },
    { L"Damage Reduction", 0x35c94 + 0x2C0, 0x35c94 + 0x2E0, 0x01 },
    { L"Just Defend", 0x35c94 + 0x2e0, 0x35c94 + 0x300, 0x01 },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMP[] =
{
    { L"X-Ism Punch", 0x30094, 0x300b4, 0x44, 0x00 },
    { L"X-Ism Punch Extra 1", 0x300b4, 0x300d4 },
    { L"X-Ism Punch Extra 2", 0x300d4, 0x300f4 },
    { L"X-Ism Punch Super Trail Light", 0x300f4, 0x30114, 0x44, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30114, 0x30134, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMK[] =
{
    { L"X-Ism Kick", 0x30134, 0x30154, 0x44, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30154, 0x30174 },
    { L"X-Ism Kick Extra 2", 0x30174, 0x30194 },
    { L"X-Ism Kick Super Trail Light", 0x30194, 0x301b4, 0x44, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x301b4, 0x301d4, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMP[] =
{
    { L"A-Ism Punch", 0x301d4, 0x301f4, 0x44, 0x00 },
    { L"A-Ism Punch Extra 1", 0x301f4, 0x30214 },
    { L"A-Ism Punch Extra 2", 0x30214, 0x30234 },
    { L"A-Ism Punch Super Trail Light", 0x30234, 0x30254, 0x44, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30254, 0x30274, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMK[] =
{
    { L"A-Ism Kick", 0x30274, 0x30294, 0x44, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30294, 0x302b4 },
    { L"A-Ism Kick Extra 2", 0x302b4, 0x302d4 },
    { L"A-Ism Kick Super Trail Light", 0x302d4, 0x302f4, 0x44, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x302f4, 0x30314, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMP[] =
{
    { L"V-Ism Punch", 0x30314, 0x30334, 0x44, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30334, 0x30354 },
    { L"V-Ism Punch Extra 2", 0x30354, 0x30374 },
    { L"V-Ism Punch Super Trail Light", 0x30374, 0x30394, 0x44, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30394, 0x303b4, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMK[] =
{
    { L"V-Ism Kick", 0x303b4, 0x303d4, 0x44, 0x00 },
    { L"V-Ism Kick Extra 1", 0x303d4, 0x303f4 },
    { L"V-Ism Kick Extra 2", 0x303f4, 0x30414 },
    { L"V-Ism Kick Super Trail Light", 0x30414, 0x30434, 0x44, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30434, 0x30454, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_STATUS[] =
{
    { L"Burned 1", 0x35f94 + 0x00, 0x35f94 + 0x20, 0x44 },
    { L"Burned 2", 0x35f94 + 0x20, 0x35f94 + 0x40, 0x44 },
    { L"Psycho Crusher Burned 1", 0x35f94 + 0x40, 0x35f94 + 0x60, 0x44 },
    { L"Psycho Crusher Burned 2", 0x35f94 + 0x60, 0x35f94 + 0x80, 0x44 },
    { L"V-Ism P1 After Effect 1", 0x35f94 + 0x80, 0x35f94 + 0xA0, 0x44 },
    { L"V-Ism P1 After Effect 2", 0x35f94 + 0xA0, 0x35f94 + 0xC0, 0x44 },
    { L"V-Ism P2 After Effect 1", 0x35f94 + 0xC0, 0x35f94 + 0xE0, 0x44 },
    { L"V-Ism P2 After Effect 2", 0x35f94 + 0xe0, 0x35f94 + 0x100, 0x44 },
    { L"X-Ism Punch Zapped", 0x35f94 + 0x100, 0x35f94 + 0x120, 0x44 },
    { L"X-Ism Kick Zapped", 0x35f94 + 0x120, 0x35f94 + 0x140, 0x44 },
    { L"A-Ism Punch Zapped", 0x35f94 + 0x140, 0x35f94 + 0x160, 0x44 },
    { L"A-Ism Kick Zapped", 0x35f94 + 0x160, 0x35f94 + 0x180, 0x44 },
    { L"V-Ism Punch Zapped", 0x35f94 + 0x180, 0x35f94 + 0x1A0, 0x44 },
    { L"V-Ism Kick Zapped", 0x35f94 + 0x1A0, 0x35f94 + 0x1C0, 0x44 },
    { L"Zapped Skeleton", 0x35f94 + 0x1C0, 0x35f94 + 0x1E0, 0x44 },
    { L"X-Ism Punch Mash", 0x35f94 + 0x1e0, 0x35f94 + 0x200, 0x44 },
    { L"X-Ism Kick Mash", 0x35f94 + 0x200, 0x35f94 + 0x220, 0x44 },
    { L"A-Ism Punch Mash", 0x35f94 + 0x220, 0x35f94 + 0x240, 0x44 },
    { L"A-Ism Kick Mash", 0x35f94 + 0x240, 0x35f94 + 0x260, 0x44 },
    { L"V-Ism Punch Mash", 0x35f94 + 0x260, 0x35f94 + 0x280, 0x44 },
    { L"V-Ism Kick Mash", 0x35f94 + 0x280, 0x35f94 + 0x2A0, 0x44 },
    { L"Priority Win", 0x35f94 + 0x2A0, 0x35f94 + 0x2C0, 0x44 },
    { L"Damage Reduction", 0x35f94 + 0x2C0, 0x35f94 + 0x2E0, 0x44 },
    { L"Just Defend", 0x35f94 + 0x2e0, 0x35f94 + 0x300, 0x44 },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMP[] =
{
    { L"X-Ism Punch", 0x30454, 0x30474, 0x45, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30474, 0x30494 },
    { L"X-Ism Punch Extra 2", 0x30494, 0x304b4 },
    { L"X-Ism Punch Super Trail Light", 0x304b4, 0x304d4, 0x45, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x304d4, 0x304f4, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMK[] =
{
    { L"X-Ism Kick", 0x304f4, 0x30514, 0x45, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30514, 0x30534 },
    { L"X-Ism Kick Extra 2", 0x30534, 0x30554 },
    { L"X-Ism Kick Super Trail Light", 0x30554, 0x30574, 0x45, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30574, 0x30594, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMP[] =
{
    { L"A-Ism Punch", 0x30594, 0x305b4, 0x45, 0x00 },
    { L"A-Ism Punch Extra 1", 0x305b4, 0x305d4 },
    { L"A-Ism Punch Extra 2", 0x305d4, 0x305f4 },
    { L"A-Ism Punch Super Trail Light", 0x305f4, 0x30614, 0x45, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30614, 0x30634, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMK[] =
{
    { L"A-Ism Kick", 0x30634, 0x30654, 0x45, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30654, 0x30674 },
    { L"A-Ism Kick Extra 2", 0x30674, 0x30694 },
    { L"A-Ism Kick Super Trail Light", 0x30694, 0x306b4, 0x45, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x306b4, 0x306d4, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMP[] =
{
    { L"V-Ism Punch", 0x306d4, 0x306f4, 0x45, 0x00 },
    { L"V-Ism Punch Extra 1", 0x306f4, 0x30714 },
    { L"V-Ism Punch Extra 2", 0x30714, 0x30734 },
    { L"V-Ism Punch Super Trail Light", 0x30734, 0x30754, 0x45, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30754, 0x30774, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMK[] =
{
    { L"V-Ism Kick", 0x30774, 0x30794, 0x45, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30794, 0x307b4 },
    { L"V-Ism Kick Extra 2", 0x307b4, 0x307d4 },
    { L"V-Ism Kick Super Trail Light", 0x307d4, 0x307f4, 0x45, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x307f4, 0x30814, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_STATUS[] =
{
    { L"Burned 1", 0x36294 + 0x00, 0x36294 + 0x20, 0x45 },
    { L"Burned 2", 0x36294 + 0x20, 0x36294 + 0x40, 0x45 },
    { L"Psycho Crusher Burned 1", 0x36294 + 0x40, 0x36294 + 0x60, 0x45 },
    { L"Psycho Crusher Burned 2", 0x36294 + 0x60, 0x36294 + 0x80, 0x45 },
    { L"V-Ism P1 After Effect 1", 0x36294 + 0x80, 0x36294 + 0xA0, 0x45 },
    { L"V-Ism P1 After Effect 2", 0x36294 + 0xA0, 0x36294 + 0xC0, 0x45 },
    { L"V-Ism P2 After Effect 1", 0x36294 + 0xC0, 0x36294 + 0xE0, 0x45 },
    { L"V-Ism P2 After Effect 2", 0x36294 + 0xe0, 0x36294 + 0x100, 0x45 },
    { L"X-Ism Punch Zapped", 0x36294 + 0x100, 0x36294 + 0x120, 0x45 },
    { L"X-Ism Kick Zapped", 0x36294 + 0x120, 0x36294 + 0x140, 0x45 },
    { L"A-Ism Punch Zapped", 0x36294 + 0x140, 0x36294 + 0x160, 0x45 },
    { L"A-Ism Kick Zapped", 0x36294 + 0x160, 0x36294 + 0x180, 0x45 },
    { L"V-Ism Punch Zapped", 0x36294 + 0x180, 0x36294 + 0x1A0, 0x45 },
    { L"V-Ism Kick Zapped", 0x36294 + 0x1A0, 0x36294 + 0x1C0, 0x45 },
    { L"Zapped Skeleton", 0x36294 + 0x1C0, 0x36294 + 0x1E0, 0x45 },
    { L"X-Ism Punch Mash", 0x36294 + 0x1e0, 0x36294 + 0x200, 0x45 },
    { L"X-Ism Kick Mash", 0x36294 + 0x200, 0x36294 + 0x220, 0x45 },
    { L"A-Ism Punch Mash", 0x36294 + 0x220, 0x36294 + 0x240, 0x45 },
    { L"A-Ism Kick Mash", 0x36294 + 0x240, 0x36294 + 0x260, 0x45 },
    { L"V-Ism Punch Mash", 0x36294 + 0x260, 0x36294 + 0x280, 0x45 },
    { L"V-Ism Kick Mash", 0x36294 + 0x280, 0x36294 + 0x2A0, 0x45 },
    { L"Priority Win", 0x36294 + 0x2A0, 0x36294 + 0x2C0, 0x45 },
    { L"Damage Reduction", 0x36294 + 0x2C0, 0x36294 + 0x2E0, 0x45 },
    { L"Just Defend", 0x36294 + 0x2e0, 0x36294 + 0x300, 0x45 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMP[] =
{
    { L"X-Ism Punch", 0x30814, 0x30834, 0x24, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30834, 0x30854, 0x24, 0x01 },
    { L"X-Ism Punch Extra 2", 0x30854, 0x30874, 0x24, 0x00 },
    { L"X-Ism Punch Super Trail Light", 0x30874, 0x30894, 0x24, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30894, 0x308b4, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMK[] =
{
    { L"X-Ism Kick", 0x308b4, 0x308d4, 0x24, 0x00 },
    { L"X-Ism Kick Extra 1", 0x308d4, 0x308f4, 0x24, 0x01 },
    { L"X-Ism Kick Extra 2", 0x308f4, 0x30914, 0x24, 0x00 },
    { L"X-Ism Kick Super Trail Light", 0x30914, 0x30934, 0x24, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30934, 0x30954, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMP[] =
{
    { L"A-Ism Punch", 0x30954, 0x30974, 0x24, 0x00 },
    { L"A-Ism Punch Extra 1", 0x30974, 0x30994, 0x24, 0x01 },
    { L"A-Ism Punch Extra 2", 0x30994, 0x309b4, 0x24, 0x00 },
    { L"A-Ism Punch Super Trail Light", 0x309b4, 0x309d4, 0x24, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x309d4, 0x309f4, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMK[] =
{
    { L"A-Ism Kick", 0x309f4, 0x30a14, 0x24, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30a14, 0x30a34, 0x24, 0x01 },
    { L"A-Ism Kick Extra 2", 0x30a34, 0x30a54, 0x24, 0x00 },
    { L"A-Ism Kick Super Trail Light", 0x30a54, 0x30a74, 0x24, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x30a74, 0x30a94, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMP[] =
{
    { L"V-Ism Punch", 0x30a94, 0x30ab4, 0x24, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30ab4, 0x30ad4, 0x24, 0x01 },
    { L"V-Ism Punch Extra 2", 0x30ad4, 0x30af4, 0x24, 0x00 },
    { L"V-Ism Punch Super Trail Light", 0x30af4, 0x30b14, 0x24, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30b14, 0x30b34, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMK[] =
{
    { L"V-Ism Kick", 0x30b34, 0x30b54, 0x24, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30b54, 0x30b74, 0x24, 0x01 },
    { L"V-Ism Kick Extra 2", 0x30b74, 0x30b94, 0x24, 0x00 },
    { L"V-Ism Kick Super Trail Light", 0x30b94, 0x30bb4, 0x24, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30bb4, 0x30bd4, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_STATUS[] =
{
    { L"Burned 1", 0x36594 + 0x00, 0x36594 + 0x20, 0x24 },
    { L"Burned 2", 0x36594 + 0x20, 0x36594 + 0x40, 0x24 },
    { L"Psycho Crusher Burned 1", 0x36594 + 0x40, 0x36594 + 0x60, 0x24 },
    { L"Psycho Crusher Burned 2", 0x36594 + 0x60, 0x36594 + 0x80, 0x24 },
    { L"V-Ism P1 After Effect 1", 0x36594 + 0x80, 0x36594 + 0xA0, 0x24 },
    { L"V-Ism P1 After Effect 2", 0x36594 + 0xA0, 0x36594 + 0xC0, 0x24 },
    { L"V-Ism P2 After Effect 1", 0x36594 + 0xC0, 0x36594 + 0xE0, 0x24 },
    { L"V-Ism P2 After Effect 2", 0x36594 + 0xe0, 0x36594 + 0x100, 0x24 },
    { L"X-Ism Punch Zapped", 0x36594 + 0x100, 0x36594 + 0x120, 0x24 },
    { L"X-Ism Kick Zapped", 0x36594 + 0x120, 0x36594 + 0x140, 0x24 },
    { L"A-Ism Punch Zapped", 0x36594 + 0x140, 0x36594 + 0x160, 0x24 },
    { L"A-Ism Kick Zapped", 0x36594 + 0x160, 0x36594 + 0x180, 0x24 },
    { L"V-Ism Punch Zapped", 0x36594 + 0x180, 0x36594 + 0x1A0, 0x24 },
    { L"V-Ism Kick Zapped", 0x36594 + 0x1A0, 0x36594 + 0x1C0, 0x24 },
    { L"Zapped Skeleton", 0x36594 + 0x1C0, 0x36594 + 0x1E0, 0x24 },
    { L"X-Ism Punch Mash", 0x36594 + 0x1e0, 0x36594 + 0x200, 0x24 },
    { L"X-Ism Kick Mash", 0x36594 + 0x200, 0x36594 + 0x220, 0x24 },
    { L"A-Ism Punch Mash", 0x36594 + 0x220, 0x36594 + 0x240, 0x24 },
    { L"A-Ism Kick Mash", 0x36594 + 0x240, 0x36594 + 0x260, 0x24 },
    { L"V-Ism Punch Mash", 0x36594 + 0x260, 0x36594 + 0x280, 0x24 },
    { L"V-Ism Kick Mash", 0x36594 + 0x280, 0x36594 + 0x2A0, 0x24 },
    { L"Priority Win", 0x36594 + 0x2A0, 0x36594 + 0x2C0, 0x24 },
    { L"Damage Reduction", 0x36594 + 0x2C0, 0x36594 + 0x2E0, 0x24 },
    { L"Just Defend", 0x36594 + 0x2e0, 0x36594 + 0x300, 0x24 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMP[] =
{
    { L"X-Ism Punch", 0x30bd4, 0x30bf4, 0x46, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30bf4, 0x30c14 },
    { L"X-Ism Punch Extra 2", 0x30c14, 0x30c34 },
    { L"X-Ism Punch Super Trail Light", 0x30c34, 0x30c54, 0x46, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30c54, 0x30c74, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMK[] =
{
    { L"X-Ism Kick", 0x30c74, 0x30c94, 0x46, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30c94, 0x30cb4 },
    { L"X-Ism Kick Extra 2", 0x30cb4, 0x30cd4 },
    { L"X-Ism Kick Super Trail Light", 0x30cd4, 0x30cf4, 0x46, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30cf4, 0x30d14, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMP[] =
{
    { L"A-Ism Punch", 0x30d14, 0x30d34, 0x46, 0x00 },
    { L"A-Ism Punch Extra 1", 0x30d34, 0x30d54 },
    { L"A-Ism Punch Extra 2", 0x30d54, 0x30d74 },
    { L"A-Ism Punch Super Trail Light", 0x30d74, 0x30d94, 0x46, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30d94, 0x30db4, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMK[] =
{
    { L"A-Ism Kick", 0x30db4, 0x30dd4, 0x46, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30dd4, 0x30df4 },
    { L"A-Ism Kick Extra 2", 0x30df4, 0x30e14 },
    { L"A-Ism Kick Super Trail Light", 0x30e14, 0x30e34, 0x46, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x30e34, 0x30e54, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMP[] =
{
    { L"V-Ism Punch", 0x30e54, 0x30e74, 0x46, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30e74, 0x30e94 },
    { L"V-Ism Punch Extra 2", 0x30e94, 0x30eb4 },
    { L"V-Ism Punch Super Trail Light", 0x30eb4, 0x30ed4, 0x46, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30ed4, 0x30ef4, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMK[] =
{
    { L"V-Ism Kick", 0x30ef4, 0x30f14, 0x46, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30f14, 0x30f34 },
    { L"V-Ism Kick Extra 2", 0x30f34, 0x30f54 },
    { L"V-Ism Kick Super Trail Light", 0x30f54, 0x30f74, 0x46, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30f74, 0x30f94, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_STATUS[] =
{
    { L"Burned 1", 0x36894 + 0x00, 0x36894 + 0x20, 0x46 },
    { L"Burned 2", 0x36894 + 0x20, 0x36894 + 0x40, 0x46 },
    { L"Psycho Crusher Burned 1", 0x36894 + 0x40, 0x36894 + 0x60, 0x46 },
    { L"Psycho Crusher Burned 2", 0x36894 + 0x60, 0x36894 + 0x80, 0x46 },
    { L"V-Ism P1 After Effect 1", 0x36894 + 0x80, 0x36894 + 0xA0, 0x46 },
    { L"V-Ism P1 After Effect 2", 0x36894 + 0xA0, 0x36894 + 0xC0, 0x46 },
    { L"V-Ism P2 After Effect 1", 0x36894 + 0xC0, 0x36894 + 0xE0, 0x46 },
    { L"V-Ism P2 After Effect 2", 0x36894 + 0xe0, 0x36894 + 0x100, 0x46 },
    { L"X-Ism Punch Zapped", 0x36894 + 0x100, 0x36894 + 0x120, 0x46 },
    { L"X-Ism Kick Zapped", 0x36894 + 0x120, 0x36894 + 0x140, 0x46 },
    { L"A-Ism Punch Zapped", 0x36894 + 0x140, 0x36894 + 0x160, 0x46 },
    { L"A-Ism Kick Zapped", 0x36894 + 0x160, 0x36894 + 0x180, 0x46 },
    { L"V-Ism Punch Zapped", 0x36894 + 0x180, 0x36894 + 0x1A0, 0x46 },
    { L"V-Ism Kick Zapped", 0x36894 + 0x1A0, 0x36894 + 0x1C0, 0x46 },
    { L"Zapped Skeleton", 0x36894 + 0x1C0, 0x36894 + 0x1E0, 0x46 },
    { L"X-Ism Punch Mash", 0x36894 + 0x1e0, 0x36894 + 0x200, 0x46 },
    { L"X-Ism Kick Mash", 0x36894 + 0x200, 0x36894 + 0x220, 0x46 },
    { L"A-Ism Punch Mash", 0x36894 + 0x220, 0x36894 + 0x240, 0x46 },
    { L"A-Ism Kick Mash", 0x36894 + 0x240, 0x36894 + 0x260, 0x46 },
    { L"V-Ism Punch Mash", 0x36894 + 0x260, 0x36894 + 0x280, 0x46 },
    { L"V-Ism Kick Mash", 0x36894 + 0x280, 0x36894 + 0x2A0, 0x46 },
    { L"Priority Win", 0x36894 + 0x2A0, 0x36894 + 0x2C0, 0x46 },
    { L"Damage Reduction", 0x36894 + 0x2C0, 0x36894 + 0x2E0, 0x46 },
    { L"Just Defend", 0x36894 + 0x2e0, 0x36894 + 0x300, 0x46 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMP[] =
{
    { L"X-Ism Punch", 0x30f94, 0x30fb4, 0x47, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30fb4, 0x30fd4 },
    { L"X-Ism Punch Extra 2", 0x30fd4, 0x30ff4 },
    { L"X-Ism Punch Super Trail Light", 0x30ff4, 0x31014, 0x47, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31014, 0x31034, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMK[] =
{
    { L"X-Ism Kick", 0x31034, 0x31054, 0x47, 0x00 },
    { L"X-Ism Kick Extra 1", 0x31054, 0x31074 },
    { L"X-Ism Kick Extra 2", 0x31074, 0x31094 },
    { L"X-Ism Kick Super Trail Light", 0x31094, 0x310b4, 0x47, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x310b4, 0x310d4, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMP[] =
{
    { L"A-Ism Punch", 0x310d4, 0x310f4, 0x47, 0x00 },
    { L"A-Ism Punch Extra 1", 0x310f4, 0x31114 },
    { L"A-Ism Punch Extra 2", 0x31114, 0x31134 },
    { L"A-Ism Punch Super Trail Light", 0x31134, 0x31154, 0x47, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31154, 0x31174, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMK[] =
{
    { L"A-Ism Kick", 0x31174, 0x31194, 0x47, 0x00 },
    { L"A-Ism Kick Extra 1", 0x31194, 0x311b4 },
    { L"A-Ism Kick Extra 2", 0x311b4, 0x311d4 },
    { L"A-Ism Kick Super Trail Light", 0x311d4, 0x311f4, 0x47, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x311f4, 0x31214, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMP[] =
{
    { L"V-Ism Punch", 0x31214, 0x31234, 0x47, 0x00 },
    { L"V-Ism Punch Extra 1", 0x31234, 0x31254 },
    { L"V-Ism Punch Extra 2", 0x31254, 0x31274 },
    { L"V-Ism Punch Super Trail Light", 0x31274, 0x31294, 0x47, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31294, 0x312b4, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMK[] =
{
    { L"V-Ism Kick", 0x312b4, 0x312d4, 0x47, 0x00 },
    { L"V-Ism Kick Extra 1", 0x312d4, 0x312f4 },
    { L"V-Ism Kick Extra 2", 0x312f4, 0x31314 },
    { L"V-Ism Kick Super Trail Light", 0x31314, 0x31334, 0x47, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31334, 0x31354, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_STATUS[] =
{
    { L"Burned 1", 0x36b94 + 0x00, 0x36b94 + 0x20, 0x47 },
    { L"Burned 2", 0x36b94 + 0x20, 0x36b94 + 0x40, 0x47 },
    { L"Psycho Crusher Burned 1", 0x36b94 + 0x40, 0x36b94 + 0x60, 0x47 },
    { L"Psycho Crusher Burned 2", 0x36b94 + 0x60, 0x36b94 + 0x80, 0x47 },
    { L"V-Ism P1 After Effect 1", 0x36b94 + 0x80, 0x36b94 + 0xA0, 0x47 },
    { L"V-Ism P1 After Effect 2", 0x36b94 + 0xA0, 0x36b94 + 0xC0, 0x47 },
    { L"V-Ism P2 After Effect 1", 0x36b94 + 0xC0, 0x36b94 + 0xE0, 0x47 },
    { L"V-Ism P2 After Effect 2", 0x36b94 + 0xe0, 0x36b94 + 0x100, 0x47 },
    { L"X-Ism Punch Zapped", 0x36b94 + 0x100, 0x36b94 + 0x120, 0x47 },
    { L"X-Ism Kick Zapped", 0x36b94 + 0x120, 0x36b94 + 0x140, 0x47 },
    { L"A-Ism Punch Zapped", 0x36b94 + 0x140, 0x36b94 + 0x160, 0x47 },
    { L"A-Ism Kick Zapped", 0x36b94 + 0x160, 0x36b94 + 0x180, 0x47 },
    { L"V-Ism Punch Zapped", 0x36b94 + 0x180, 0x36b94 + 0x1A0, 0x47 },
    { L"V-Ism Kick Zapped", 0x36b94 + 0x1A0, 0x36b94 + 0x1C0, 0x47 },
    { L"Zapped Skeleton", 0x36b94 + 0x1C0, 0x36b94 + 0x1E0, 0x47 },
    { L"X-Ism Punch Mash", 0x36b94 + 0x1e0, 0x36b94 + 0x200, 0x47 },
    { L"X-Ism Kick Mash", 0x36b94 + 0x200, 0x36b94 + 0x220, 0x47 },
    { L"A-Ism Punch Mash", 0x36b94 + 0x220, 0x36b94 + 0x240, 0x47 },
    { L"A-Ism Kick Mash", 0x36b94 + 0x240, 0x36b94 + 0x260, 0x47 },
    { L"V-Ism Punch Mash", 0x36b94 + 0x260, 0x36b94 + 0x280, 0x47 },
    { L"V-Ism Kick Mash", 0x36b94 + 0x280, 0x36b94 + 0x2A0, 0x47 },
    { L"Priority Win", 0x36b94 + 0x2A0, 0x36b94 + 0x2C0, 0x47 },
    { L"Damage Reduction", 0x36b94 + 0x2C0, 0x36b94 + 0x2E0, 0x47 },
    { L"Just Defend", 0x36b94 + 0x2e0, 0x36b94 + 0x300, 0x47 }, };

const sGame_PaletteDataset SFA3_A_RMIKA_XISMP[] =
{
    { L"X-Ism Punch", 0x31354, 0x31374, indexCPS2_RMika, 0x00 },
    { L"X-Ism Punch Extra 1", 0x31374, 0x31394 },
    { L"X-Ism Punch Extra 2: Wrestling Ring / Tire", 0x31394, 0x313b4, indexCPS2_RMika, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x313b4, 0x313d4, indexCPS2_RMika, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x313d4, 0x313f4, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_XISMK[] =
{
    { L"X-Ism Kick", 0x313f4, 0x31414, indexCPS2_RMika, 0x00 },
    { L"X-Ism Kick Extra 1", 0x31414, 0x31434 },
    { L"X-Ism Kick Extra 2: Wrestling Ring / Tire", 0x31434, 0x31454, indexCPS2_RMika, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x31454, 0x31474, indexCPS2_RMika, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31474, 0x31494, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMP[] =
{
    { L"A-Ism Punch", 0x31494, 0x314b4, indexCPS2_RMika, 0x00 },
    { L"A-Ism Punch Extra 1", 0x314b4, 0x314d4 },
    { L"A-Ism Punch Extra 2: Wrestling Ring / Tire", 0x314d4, 0x314f4, indexCPS2_RMika, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x314f4, 0x31514, indexCPS2_RMika, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31514, 0x31534, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMK[] =
{
    { L"A-Ism Kick", 0x31534, 0x31554, indexCPS2_RMika, 0x00 },
    { L"A-Ism Kick Extra 1", 0x31554, 0x31574 },
    { L"A-Ism Kick Extra 2: Wrestling Ring / Tire", 0x31574, 0x31594, indexCPS2_RMika, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x31594, 0x315b4, indexCPS2_RMika, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x315b4, 0x315d4, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMP[] =
{
    { L"V-Ism Punch", 0x315d4, 0x315f4, indexCPS2_RMika, 0x00 },
    { L"V-Ism Punch Extra 1", 0x315f4, 0x31614 },
    { L"V-Ism Punch Extra 2: Wrestling Ring / Tire", 0x31614, 0x31634, indexCPS2_RMika, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x31634, 0x31654, indexCPS2_RMika, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31654, 0x31674, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMK[] =
{
    { L"V-Ism Kick", 0x31674, 0x31694, indexCPS2_RMika, 0x00 },
    { L"V-Ism Kick Extra 1", 0x31694, 0x316b4 },
    { L"V-Ism Kick Extra 2: Wrestling Ring / Tire", 0x316b4, 0x316d4, indexCPS2_RMika, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x316d4, 0x316f4, indexCPS2_RMika, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x316f4, 0x31714, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_STATUS[] =
{
    { L"Burned 1", 0x36e94 + 0x00, 0x36e94 + 0x20, indexCPS2_RMika },
    { L"Burned 2", 0x36e94 + 0x20, 0x36e94 + 0x40, indexCPS2_RMika },
    { L"Psycho Crusher Burned 1", 0x36e94 + 0x40, 0x36e94 + 0x60, indexCPS2_RMika },
    { L"Psycho Crusher Burned 2", 0x36e94 + 0x60, 0x36e94 + 0x80, indexCPS2_RMika },
    { L"V-Ism P1 After Effect 1", 0x36e94 + 0x80, 0x36e94 + 0xA0, indexCPS2_RMika },
    { L"V-Ism P1 After Effect 2", 0x36e94 + 0xA0, 0x36e94 + 0xC0, indexCPS2_RMika },
    { L"V-Ism P2 After Effect 1", 0x36e94 + 0xC0, 0x36e94 + 0xE0, indexCPS2_RMika },
    { L"V-Ism P2 After Effect 2", 0x36e94 + 0xe0, 0x36e94 + 0x100, indexCPS2_RMika },
    { L"X-Ism Punch Zapped", 0x36e94 + 0x100, 0x36e94 + 0x120, indexCPS2_RMika },
    { L"X-Ism Kick Zapped", 0x36e94 + 0x120, 0x36e94 + 0x140, indexCPS2_RMika },
    { L"A-Ism Punch Zapped", 0x36e94 + 0x140, 0x36e94 + 0x160, indexCPS2_RMika },
    { L"A-Ism Kick Zapped", 0x36e94 + 0x160, 0x36e94 + 0x180, indexCPS2_RMika },
    { L"V-Ism Punch Zapped", 0x36e94 + 0x180, 0x36e94 + 0x1A0, indexCPS2_RMika },
    { L"V-Ism Kick Zapped", 0x36e94 + 0x1A0, 0x36e94 + 0x1C0, indexCPS2_RMika },
    { L"Zapped Skeleton", 0x36e94 + 0x1C0, 0x36e94 + 0x1E0, indexCPS2_RMika },
    { L"X-Ism Punch Mash", 0x36e94 + 0x1e0, 0x36e94 + 0x200, indexCPS2_RMika },
    { L"X-Ism Kick Mash", 0x36e94 + 0x200, 0x36e94 + 0x220, indexCPS2_RMika },
    { L"A-Ism Punch Mash", 0x36e94 + 0x220, 0x36e94 + 0x240, indexCPS2_RMika },
    { L"A-Ism Kick Mash", 0x36e94 + 0x240, 0x36e94 + 0x260, indexCPS2_RMika },
    { L"V-Ism Punch Mash", 0x36e94 + 0x260, 0x36e94 + 0x280, indexCPS2_RMika },
    { L"V-Ism Kick Mash", 0x36e94 + 0x280, 0x36e94 + 0x2A0, indexCPS2_RMika },
    { L"Priority Win", 0x36e94 + 0x2A0, 0x36e94 + 0x2C0, indexCPS2_RMika },
    { L"Damage Reduction", 0x36e94 + 0x2C0, 0x36e94 + 0x2E0, indexCPS2_RMika },
    { L"Just Defend", 0x36e94 + 0x2e0, 0x36e94 + 0x300, indexCPS2_RMika },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMP[] =
{
    { L"X-Ism Punch", 0x31714, 0x31734, 0x49, 0x00 },
    { L"Dagger/Cyclone X-Ism Punch", 0x31734, 0x31754 },
    { L"X-Ism Punch Extra 2", 0x31754, 0x31774 },
    { L"X-Ism Punch Super Trail Light", 0x31774, 0x31794, 0x49, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31794, 0x317b4, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMK[] =
{
    { L"X-Ism Kick", 0x317b4, 0x317d4, 0x49, 0x00 },
    { L"Dagger/Cyclone X-Ism Kick", 0x317d4, 0x317f4 },
    { L"X-Ism Kick Extra 2", 0x317f4, 0x31814 },
    { L"X-Ism Kick Super Trail Light", 0x31814, 0x31834, 0x49, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31834, 0x31854, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMP[] =
{
    { L"A-Ism Punch", 0x31854, 0x31874, 0x49, 0x00 },
    { L"Dagger/Cyclone A-Ism Punch", 0x31874, 0x31894 },
    { L"A-Ism Punch Extra 2", 0x31894, 0x318b4 },
    { L"A-Ism Punch Super Trail Light", 0x318b4, 0x318d4, 0x49, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x318d4, 0x318f4, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMK[] =
{
    { L"A-Ism Kick", 0x318f4, 0x31914, 0x49, 0x00 },
    { L"Dagger/Cyclone A-Ism Kick", 0x31914, 0x31934 },
    { L"A-Ism Kick Extra 2", 0x31934, 0x31954 },
    { L"A-Ism Kick Super Trail Light", 0x31954, 0x31974, 0x49, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x31974, 0x31994, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMP[] =
{
    { L"V-Ism Punch", 0x31994, 0x319b4, 0x49, 0x00 },
    { L"Dagger/Cyclone V-Ism Punch", 0x319b4, 0x319d4 },
    { L"V-Ism Punch Extra 2", 0x319d4, 0x319f4 },
    { L"V-Ism Punch Super Trail Light", 0x319f4, 0x31a14, 0x49, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31a14, 0x31a34, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMK[] =
{
    { L"V-Ism Kick", 0x31a34, 0x31a54, 0x49, 0x00 },
    { L"Dagger/Cyclone V-Ism Kick", 0x31a54, 0x31a74 },
    { L"V-Ism Kick Extra 2", 0x31a74, 0x31a94 },
    { L"V-Ism Kick Super Trail Light", 0x31a94, 0x31ab4, 0x49, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31ab4, 0x31ad4, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_STATUS[] =
{
    { L"Burned 1", 0x37194 + 0x00, 0x37194 + 0x20, 0x49 },
    { L"Burned 2", 0x37194 + 0x20, 0x37194 + 0x40, 0x49 },
    { L"Psycho Crusher Burned 1", 0x37194 + 0x40, 0x37194 + 0x60, 0x49 },
    { L"Psycho Crusher Burned 2", 0x37194 + 0x60, 0x37194 + 0x80, 0x49 },
    { L"V-Ism P1 After Effect 1", 0x37194 + 0x80, 0x37194 + 0xA0, 0x49 },
    { L"V-Ism P1 After Effect 2", 0x37194 + 0xA0, 0x37194 + 0xC0, 0x49 },
    { L"V-Ism P2 After Effect 1", 0x37194 + 0xC0, 0x37194 + 0xE0, 0x49 },
    { L"V-Ism P2 After Effect 2", 0x37194 + 0xe0, 0x37194 + 0x100, 0x49 },
    { L"X-Ism Punch Zapped", 0x37194 + 0x100, 0x37194 + 0x120, 0x49 },
    { L"X-Ism Kick Zapped", 0x37194 + 0x120, 0x37194 + 0x140, 0x49 },
    { L"A-Ism Punch Zapped", 0x37194 + 0x140, 0x37194 + 0x160, 0x49 },
    { L"A-Ism Kick Zapped", 0x37194 + 0x160, 0x37194 + 0x180, 0x49 },
    { L"V-Ism Punch Zapped", 0x37194 + 0x180, 0x37194 + 0x1A0, 0x49 },
    { L"V-Ism Kick Zapped", 0x37194 + 0x1A0, 0x37194 + 0x1C0, 0x49 },
    { L"Zapped Skeleton", 0x37194 + 0x1C0, 0x37194 + 0x1E0, 0x49 },
    { L"X-Ism Punch Mash", 0x37194 + 0x1e0, 0x37194 + 0x200, 0x49 },
    { L"X-Ism Kick Mash", 0x37194 + 0x200, 0x37194 + 0x220, 0x49 },
    { L"A-Ism Punch Mash", 0x37194 + 0x220, 0x37194 + 0x240, 0x49 },
    { L"A-Ism Kick Mash", 0x37194 + 0x240, 0x37194 + 0x260, 0x49 },
    { L"V-Ism Punch Mash", 0x37194 + 0x260, 0x37194 + 0x280, 0x49 },
    { L"V-Ism Kick Mash", 0x37194 + 0x280, 0x37194 + 0x2A0, 0x49 },
    { L"Priority Win", 0x37194 + 0x2A0, 0x37194 + 0x2C0, 0x49 },
    { L"Damage Reduction", 0x37194 + 0x2C0, 0x37194 + 0x2E0, 0x49 },
    { L"Just Defend", 0x37194 + 0x2e0, 0x37194 + 0x300, 0x49 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMP[] =
{
    { L"X-Ism Punch", 0x31ad4, 0x31af4, indexCPS2_Vega, 0x00, &pairNext },
    { L"X-Ism Punch Claws", 0x031AF4, 0x031B14, indexCPS2_Vega, 1 },
    { L"X-Ism Punch Extra 2", 0x31b14, 0x31b34 },
    { L"X-Ism Punch Super Trail Light", 0x31b34, 0x31b54, indexCPS2_Vega, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31b54, 0x31b74, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMK[] =
{
    { L"X-Ism Kick", 0x31b74, 0x31b94, indexCPS2_Vega, 0x00, &pairNext },
    { L"X-Ism Kick Claws", 0x031B94, 0x031BB4, indexCPS2_Vega, 1 },
    { L"X-Ism Kick Extra 2", 0x31bb4, 0x31bd4 },
    { L"X-Ism Kick Super Trail Light", 0x31bd4, 0x31bf4, indexCPS2_Vega, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31bf4, 0x31c14, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMP[] =
{
    { L"A-Ism Punch", 0x31c14, 0x31c34, indexCPS2_Vega, 0x00, &pairNext },
    { L"A-Ism Punch Claws", 0x031C34, 0x031C54, indexCPS2_Vega, 1 },
    { L"A-Ism Punch Extra 2", 0x31c54, 0x31c74 },
    { L"A-Ism Punch Super Trail Light", 0x31c74, 0x31c94, indexCPS2_Vega, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31c94, 0x31cb4, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMK[] =
{
    { L"A-Ism Kick", 0x31cb4, 0x31cd4, indexCPS2_Vega, 0x00, &pairNext },
    { L"A-Ism Kick Claws", 0x031CD4, 0x031CF4, indexCPS2_Vega, 1 },
    { L"A-Ism Kick Extra 2", 0x31cf4, 0x31d14 },
    { L"A-Ism Kick Super Trail Light", 0x31d14, 0x31d34, indexCPS2_Vega, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x31d34, 0x31d54, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMP[] =
{
    { L"V-Ism Punch", 0x31d54, 0x31d74, indexCPS2_Vega, 0x00, &pairNext },
    { L"V-Ism Punch Claws", 0x031D74, 0x031D94, indexCPS2_Vega, 1 },
    { L"V-Ism Punch Extra 2", 0x31d94, 0x31db4 },
    { L"V-Ism Punch Super Trail Light", 0x31db4, 0x31dd4, indexCPS2_Vega, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31dd4, 0x31df4, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMK[] =
{
    { L"V-Ism Kick", 0x31df4, 0x31e14, indexCPS2_Vega, 0x00, &pairNext },
    { L"V-Ism Kick Claws", 0x031E14, 0x031E34, indexCPS2_Vega, 1 },
    { L"V-Ism Kick Extra 2", 0x31e34, 0x31e54 },
    { L"V-Ism Kick Super Trail Light", 0x31e54, 0x31e74, indexCPS2_Vega, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31e74, 0x31e94, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_STATUS[] =
{
    { L"Burned 1", 0x37494 + 0x00, 0x37494 + 0x20, indexCPS2_Vega },
    { L"Burned 2", 0x37494 + 0x20, 0x37494 + 0x40, indexCPS2_Vega },
    { L"Psycho Crusher Burned 1", 0x37494 + 0x40, 0x37494 + 0x60, indexCPS2_Vega },
    { L"Psycho Crusher Burned 2", 0x37494 + 0x60, 0x37494 + 0x80, indexCPS2_Vega },
    { L"V-Ism P1 After Effect 1", 0x37494 + 0x80, 0x37494 + 0xA0, indexCPS2_Vega },
    { L"V-Ism P1 After Effect 2", 0x37494 + 0xA0, 0x37494 + 0xC0, indexCPS2_Vega },
    { L"V-Ism P2 After Effect 1", 0x37494 + 0xC0, 0x37494 + 0xE0, indexCPS2_Vega },
    { L"V-Ism P2 After Effect 2", 0x37494 + 0xe0, 0x37494 + 0x100, indexCPS2_Vega },
    { L"X-Ism Punch Zapped", 0x37494 + 0x100, 0x37494 + 0x120, indexCPS2_Vega },
    { L"X-Ism Kick Zapped", 0x37494 + 0x120, 0x37494 + 0x140, indexCPS2_Vega },
    { L"A-Ism Punch Zapped", 0x37494 + 0x140, 0x37494 + 0x160, indexCPS2_Vega },
    { L"A-Ism Kick Zapped", 0x37494 + 0x160, 0x37494 + 0x180, indexCPS2_Vega },
    { L"V-Ism Punch Zapped", 0x37494 + 0x180, 0x37494 + 0x1A0, indexCPS2_Vega },
    { L"V-Ism Kick Zapped", 0x37494 + 0x1A0, 0x37494 + 0x1C0, indexCPS2_Vega },
    { L"Zapped Skeleton", 0x37494 + 0x1C0, 0x37494 + 0x1E0, indexCPS2_Vega },
    { L"X-Ism Punch Mash", 0x37494 + 0x1e0, 0x37494 + 0x200, indexCPS2_Vega },
    { L"X-Ism Kick Mash", 0x37494 + 0x200, 0x37494 + 0x220, indexCPS2_Vega },
    { L"A-Ism Punch Mash", 0x37494 + 0x220, 0x37494 + 0x240, indexCPS2_Vega },
    { L"A-Ism Kick Mash", 0x37494 + 0x240, 0x37494 + 0x260, indexCPS2_Vega },
    { L"V-Ism Punch Mash", 0x37494 + 0x260, 0x37494 + 0x280, indexCPS2_Vega },
    { L"V-Ism Kick Mash", 0x37494 + 0x280, 0x37494 + 0x2A0, indexCPS2_Vega },
    { L"Priority Win", 0x37494 + 0x2A0, 0x37494 + 0x2C0, indexCPS2_Vega },
    { L"Damage Reduction", 0x37494 + 0x2C0, 0x37494 + 0x2E0, indexCPS2_Vega },
    { L"Just Defend", 0x37494 + 0x2e0, 0x37494 + 0x300, indexCPS2_Vega },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMP[] =
{
    { L"X-Ism Punch", 0x31e94, 0x31eb4, indexCPS2_Karin, 0x00 },
    { L"X-Ism Punch Extra 1: Butler", 0x31eb4, 0x31ed4, indexCPS2_Karin, 0x02, &pairNext },
    { L"X-Ism Punch Extra 2: Helicopter", 0x31ed4, 0x31ef4, indexCPS2_Karin, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x31ef4, 0x31f14, indexCPS2_Karin, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31f14, 0x31f34, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMK[] =
{
    { L"X-Ism Kick", 0x31f34, 0x31f54, indexCPS2_Karin, 0x00 },
    { L"X-Ism Kick Extra 1: Butler", 0x31f54, 0x31f74, indexCPS2_Karin, 0x02, &pairNext },
    { L"X-Ism Kick Extra 2: Helicopter", 0x31f74, 0x31f94, indexCPS2_Karin, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x31f94, 0x31fb4, indexCPS2_Karin, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31fb4, 0x31fd4, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMP[] =
{
    { L"A-Ism Punch", 0x31fd4, 0x31ff4, indexCPS2_Karin, 0x00 },
    { L"A-Ism Punch Extra 1: Butler", 0x31ff4, 0x32014, indexCPS2_Karin, 0x02, &pairNext },
    { L"A-Ism Punch Extra 2: Helicopter", 0x32014, 0x32034, indexCPS2_Karin, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x32034, 0x32054, indexCPS2_Karin, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x32054, 0x32074, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMK[] =
{
    { L"A-Ism Kick", 0x32074, 0x32094, indexCPS2_Karin, 0x00 },
    { L"A-Ism Kick Extra 1: Butler", 0x32094, 0x320b4, indexCPS2_Karin, 0x02, &pairNext },
    { L"A-Ism Kick Extra 2: Helicopter", 0x320b4, 0x320d4, indexCPS2_Karin, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x320d4, 0x320f4, indexCPS2_Karin, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x320f4, 0x32114, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMP[] =
{
    { L"V-Ism Punch", 0x32114, 0x32134, indexCPS2_Karin, 0x00 },
    { L"V-Ism Punch Extra 1: Butler", 0x32134, 0x32154, indexCPS2_Karin, 0x02, &pairNext },
    { L"V-Ism Punch Extra 2: Helicopter", 0x32154, 0x32174, indexCPS2_Karin, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x32174, 0x32194, indexCPS2_Karin, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32194, 0x321b4, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMK[] =
{
    { L"V-Ism Kick", 0x321b4, 0x321d4, indexCPS2_Karin, 0x00 },
    { L"V-Ism Kick Extra 1: Butler", 0x321d4, 0x321f4, indexCPS2_Karin, 0x02, &pairNext },
    { L"V-Ism Kick Extra 2: Helicopter", 0x321f4, 0x32214, indexCPS2_Karin, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x32214, 0x32234, indexCPS2_Karin, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x32234, 0x32254, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_STATUS[] =
{
    { L"Burned 1", 0x37934 + 0x00, 0x37934 + 0x20, indexCPS2_Karin },
    { L"Burned 2", 0x37934 + 0x20, 0x37934 + 0x40, indexCPS2_Karin },
    { L"Psycho Crusher Burned 1", 0x37934 + 0x40, 0x37934 + 0x60, indexCPS2_Karin },
    { L"Psycho Crusher Burned 2", 0x37934 + 0x60, 0x37934 + 0x80, indexCPS2_Karin },
    { L"V-Ism P1 After Effect 1", 0x37934 + 0x80, 0x37934 + 0xA0, indexCPS2_Karin },
    { L"V-Ism P1 After Effect 2", 0x37934 + 0xA0, 0x37934 + 0xC0, indexCPS2_Karin },
    { L"V-Ism P2 After Effect 1", 0x37934 + 0xC0, 0x37934 + 0xE0, indexCPS2_Karin },
    { L"V-Ism P2 After Effect 2", 0x37934 + 0xe0, 0x37934 + 0x100, indexCPS2_Karin },
    { L"X-Ism Punch Zapped", 0x37934 + 0x100, 0x37934 + 0x120, indexCPS2_Karin },
    { L"X-Ism Kick Zapped", 0x37934 + 0x120, 0x37934 + 0x140, indexCPS2_Karin },
    { L"A-Ism Punch Zapped", 0x37934 + 0x140, 0x37934 + 0x160, indexCPS2_Karin },
    { L"A-Ism Kick Zapped", 0x37934 + 0x160, 0x37934 + 0x180, indexCPS2_Karin },
    { L"V-Ism Punch Zapped", 0x37934 + 0x180, 0x37934 + 0x1A0, indexCPS2_Karin },
    { L"V-Ism Kick Zapped", 0x37934 + 0x1A0, 0x37934 + 0x1C0, indexCPS2_Karin },
    { L"Zapped Skeleton", 0x37934 + 0x1C0, 0x37934 + 0x1E0, indexCPS2_Karin },
    { L"X-Ism Punch Mash", 0x37934 + 0x1e0, 0x37934 + 0x200, indexCPS2_Karin },
    { L"X-Ism Kick Mash", 0x37934 + 0x200, 0x37934 + 0x220, indexCPS2_Karin },
    { L"A-Ism Punch Mash", 0x37934 + 0x220, 0x37934 + 0x240, indexCPS2_Karin },
    { L"A-Ism Kick Mash", 0x37934 + 0x240, 0x37934 + 0x260, indexCPS2_Karin },
    { L"V-Ism Punch Mash", 0x37934 + 0x260, 0x37934 + 0x280, indexCPS2_Karin },
    { L"V-Ism Kick Mash", 0x37934 + 0x280, 0x37934 + 0x2A0, indexCPS2_Karin },
    { L"Priority Win", 0x37934 + 0x2A0, 0x37934 + 0x2C0, indexCPS2_Karin },
    { L"Damage Reduction", 0x37934 + 0x2C0, 0x37934 + 0x2E0, indexCPS2_Karin },
    { L"Just Defend", 0x37934 + 0x2e0, 0x37934 + 0x300, indexCPS2_Karin },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMP[] =
{
    { L"X-Ism Punch", 0x32254, 0x32274, 0x4c, 0x00 },
    { L"X-Ism Punch Extra 1", 0x32274, 0x32294 },
    { L"X-Ism Punch Extra 2", 0x32294, 0x322b4 },
    { L"X-Ism Punch Super Trail Light", 0x322b4, 0x322d4, 0x4c, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x322d4, 0x322f4, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMK[] =
{
    { L"X-Ism Kick", 0x322f4, 0x32314, 0x4c, 0x00 },
    { L"X-Ism Kick Extra 1", 0x32314, 0x32334 },
    { L"X-Ism Kick Extra 2", 0x32334, 0x32354 },
    { L"X-Ism Kick Super Trail Light", 0x32354, 0x32374, 0x4c, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x32374, 0x32394, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMP[] =
{
    { L"A-Ism Punch", 0x32394, 0x323b4, 0x4c, 0x00 },
    { L"A-Ism Punch Extra 1", 0x323b4, 0x323d4 },
    { L"A-Ism Punch Extra 2", 0x323d4, 0x323f4 },
    { L"A-Ism Punch Super Trail Light", 0x323f4, 0x32414, 0x4c, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x32414, 0x32434, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMK[] =
{
    { L"A-Ism Kick", 0x32434, 0x32454, 0x4c, 0x00 },
    { L"A-Ism Kick Extra 1", 0x32454, 0x32474 },
    { L"A-Ism Kick Extra 2", 0x32474, 0x32494 },
    { L"A-Ism Kick Super Trail Light", 0x32494, 0x324b4, 0x4c, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x324b4, 0x324d4, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMP[] =
{
    { L"V-Ism Punch", 0x324d4, 0x324f4, 0x4c, 0x00 },
    { L"V-Ism Punch Extra 1", 0x324f4, 0x32514 },
    { L"V-Ism Punch Extra 2", 0x32514, 0x32534 },
    { L"V-Ism Punch Super Trail Light", 0x32534, 0x32554, 0x4c, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32554, 0x32574, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMK[] =
{
    { L"V-Ism Kick", 0x32574, 0x32594, 0x4c, 0x00 },
    { L"V-Ism Kick Extra 1", 0x32594, 0x325b4 },
    { L"V-Ism Kick Extra 2", 0x325b4, 0x325d4 },
    { L"V-Ism Kick Super Trail Light", 0x325d4, 0x325f4, 0x4c, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x325f4, 0x32614, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_STATUS[] =
{
    { L"Burned 1", 0x37ff4 + 0x00, 0x37ff4 + 0x20, 0x4C },
    { L"Burned 2", 0x37ff4 + 0x20, 0x37ff4 + 0x40, 0x4C },
    { L"Psycho Crusher Burned 1", 0x37ff4 + 0x40, 0x37ff4 + 0x60, 0x4C },
    { L"Psycho Crusher Burned 2", 0x37ff4 + 0x60, 0x37ff4 + 0x80, 0x4C },
    { L"V-Ism P1 After Effect 1", 0x37ff4 + 0x80, 0x37ff4 + 0xA0, 0x4C },
    { L"V-Ism P1 After Effect 2", 0x37ff4 + 0xA0, 0x37ff4 + 0xC0, 0x4C },
    { L"V-Ism P2 After Effect 1", 0x37ff4 + 0xC0, 0x37ff4 + 0xE0, 0x4C },
    { L"V-Ism P2 After Effect 2", 0x37ff4 + 0xe0, 0x37ff4 + 0x100, 0x4C },
    { L"X-Ism Punch Zapped", 0x37ff4 + 0x100, 0x37ff4 + 0x120, 0x4C },
    { L"X-Ism Kick Zapped", 0x37ff4 + 0x120, 0x37ff4 + 0x140, 0x4C },
    { L"A-Ism Punch Zapped", 0x37ff4 + 0x140, 0x37ff4 + 0x160, 0x4C },
    { L"A-Ism Kick Zapped", 0x37ff4 + 0x160, 0x37ff4 + 0x180, 0x4C },
    { L"V-Ism Punch Zapped", 0x37ff4 + 0x180, 0x37ff4 + 0x1A0, 0x4C },
    { L"V-Ism Kick Zapped", 0x37ff4 + 0x1A0, 0x37ff4 + 0x1C0, 0x4C },
    { L"Zapped Skeleton", 0x37ff4 + 0x1C0, 0x37ff4 + 0x1E0, 0x4C },
    { L"X-Ism Punch Mash", 0x37ff4 + 0x1e0, 0x37ff4 + 0x200, 0x4C },
    { L"X-Ism Kick Mash", 0x37ff4 + 0x200, 0x37ff4 + 0x220, 0x4C },
    { L"A-Ism Punch Mash", 0x37ff4 + 0x220, 0x37ff4 + 0x240, 0x4C },
    { L"A-Ism Kick Mash", 0x37ff4 + 0x240, 0x37ff4 + 0x260, 0x4C },
    { L"V-Ism Punch Mash", 0x37ff4 + 0x260, 0x37ff4 + 0x280, 0x4C },
    { L"V-Ism Kick Mash", 0x37ff4 + 0x280, 0x37ff4 + 0x2A0, 0x4C },
    { L"Priority Win", 0x37ff4 + 0x2A0, 0x37ff4 + 0x2C0, 0x4C },
    { L"Damage Reduction", 0x37ff4 + 0x2C0, 0x37ff4 + 0x2E0, 0x4C },
    { L"Just Defend", 0x37ff4 + 0x2e0, 0x37ff4 + 0x300, 0x4C },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMP[] =
{
    { L"X-Ism Punch", 0x32614, 0x32634, 0x4d, 0x00 },
    { L"X-Ism Punch Extra 1", 0x32634, 0x32654 },
    { L"X-Ism Punch Extra 2", 0x32654, 0x32674 },
    { L"X-Ism Punch Super Trail Light", 0x32674, 0x32694, 0x4d, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x32694, 0x326b4, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMK[] =
{
    { L"X-Ism Kick", 0x326b4, 0x326d4, 0x4d, 0x00 },
    { L"X-Ism Kick Extra 1", 0x326d4, 0x326f4 },
    { L"X-Ism Kick Extra 2", 0x326f4, 0x32714 },
    { L"X-Ism Kick Super Trail Light", 0x32714, 0x32734, 0x4d, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x32734, 0x32754, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMP[] =
{
    { L"A-Ism Punch", 0x32754, 0x32774, 0x4d, 0x00 },
    { L"A-Ism Punch Extra 1", 0x32774, 0x32794 },
    { L"A-Ism Punch Extra 2", 0x32794, 0x327b4 },
    { L"A-Ism Punch Super Trail Light", 0x327b4, 0x327d4, 0x4d, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x327d4, 0x327f4, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMK[] =
{
    { L"A-Ism Kick", 0x327f4, 0x32814, 0x4d, 0x00 },
    { L"A-Ism Kick Extra 1", 0x32814, 0x32834 },
    { L"A-Ism Kick Extra 2", 0x32834, 0x32854 },
    { L"A-Ism Kick Super Trail Light", 0x32854, 0x32874, 0x4d, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x32874, 0x32894, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMP[] =
{
    { L"V-Ism Punch", 0x32894, 0x328b4, 0x4d, 0x00 },
    { L"V-Ism Punch Extra 1", 0x328b4, 0x328d4 },
    { L"V-Ism Punch Extra 2", 0x328d4, 0x328f4 },
    { L"V-Ism Punch Super Trail Light", 0x328f4, 0x32914, 0x4d, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32914, 0x32934, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMK[] =
{
    { L"V-Ism Kick", 0x32934, 0x32954, 0x4d, 0x00 },
    { L"V-Ism Kick Extra 1", 0x32954, 0x32974 },
    { L"V-Ism Kick Extra 2", 0x32974, 0x32994 },
    { L"V-Ism Kick Super Trail Light", 0x32994, 0x329b4, 0x4d, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x329b4, 0x329d4, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_STATUS[] =
{
    { L"Burned 1", 0x37c34 + 0x00, 0x37c34 + 0x20, 0x4D },
    { L"Burned 2", 0x37c34 + 0x20, 0x37c34 + 0x40, 0x4D },
    { L"Psycho Crusher Burned 1", 0x37c34 + 0x40, 0x37c34 + 0x60, 0x4D },
    { L"Psycho Crusher Burned 2", 0x37c34 + 0x60, 0x37c34 + 0x80, 0x4D },
    { L"V-Ism P1 After Effect 1", 0x37c34 + 0x80, 0x37c34 + 0xA0, 0x4D },
    { L"V-Ism P1 After Effect 2", 0x37c34 + 0xA0, 0x37c34 + 0xC0, 0x4D },
    { L"V-Ism P2 After Effect 1", 0x37c34 + 0xC0, 0x37c34 + 0xE0, 0x4D },
    { L"V-Ism P2 After Effect 2", 0x37c34 + 0xe0, 0x37c34 + 0x100, 0x4D },
    { L"X-Ism Punch Zapped", 0x37c34 + 0x100, 0x37c34 + 0x120, 0x4D },
    { L"X-Ism Kick Zapped", 0x37c34 + 0x120, 0x37c34 + 0x140, 0x4D },
    { L"A-Ism Punch Zapped", 0x37c34 + 0x140, 0x37c34 + 0x160, 0x4D },
    { L"A-Ism Kick Zapped", 0x37c34 + 0x160, 0x37c34 + 0x180, 0x4D },
    { L"V-Ism Punch Zapped", 0x37c34 + 0x180, 0x37c34 + 0x1A0, 0x4D },
    { L"V-Ism Kick Zapped", 0x37c34 + 0x1A0, 0x37c34 + 0x1C0, 0x4D },
    { L"Zapped Skeleton", 0x37c34 + 0x1C0, 0x37c34 + 0x1E0, 0x4D },
    { L"X-Ism Punch Mash", 0x37c34 + 0x1e0, 0x37c34 + 0x200, 0x4D },
    { L"X-Ism Kick Mash", 0x37c34 + 0x200, 0x37c34 + 0x220, 0x4D },
    { L"A-Ism Punch Mash", 0x37c34 + 0x220, 0x37c34 + 0x240, 0x4D },
    { L"A-Ism Kick Mash", 0x37c34 + 0x240, 0x37c34 + 0x260, 0x4D },
    { L"V-Ism Punch Mash", 0x37c34 + 0x260, 0x37c34 + 0x280, 0x4D },
    { L"V-Ism Kick Mash", 0x37c34 + 0x280, 0x37c34 + 0x2A0, 0x4D },
    { L"Priority Win", 0x37c34 + 0x2A0, 0x37c34 + 0x2C0, 0x4D },
    { L"Damage Reduction", 0x37c34 + 0x2C0, 0x37c34 + 0x2E0, 0x4D },
    { L"Just Defend", 0x37c34 + 0x2e0, 0x37c34 + 0x300, 0x4D },
};

const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE[] =
{
    { L"Rear Cave Wall", 0x3C814, 0x3C8D4, indexCPS2_SFA3Assets, 0x0A },
    { L"Rear Candle Glows 1", 0x61394, 0x613B4, indexCPS2_SFA3Assets, 0x0B },
    { L"Rear Candle Glows 2", 0x613B4, 0x613D4, indexCPS2_SFA3Assets, 0x0B },
    { L"Right Cave Wall Ceiling", 0x47CD4, 0x47CF4, indexCPS2_SFA3Assets, 0x0C },
    { L"Hang Tags / Shadow", 0x38614, 0x38634, indexCPS2_SFA3Assets, 0x0D },
    { L"Right Candles Glow 1", 0x4C574, 0x4C594, indexCPS2_SFA3Assets, 0x0E },
    { L"Right Candles Glow 2", 0x4C5B4, 0x4C5D4, indexCPS2_SFA3Assets, 0x0E },
    { L"Wall Glow", 0x385B4, 0x385D4, indexCPS2_SFA3Assets, 0x0F },
    { L"Main Ground", 0x40F34, 0x41014, indexCPS2_SFA3Assets, 0x10 },
    { L"Left Candles Glow 1", 0x62A54, 0x62A74, indexCPS2_SFA3Assets, 0x11 },
    { L"Left Candles Glow 2", 0x62A74, 0x62A94, indexCPS2_SFA3Assets, 0x11 },
    { L"Left Rope Candles 1", 0x4C554, 0x4C574, indexCPS2_SFA3Assets, 0x12 },
    { L"Left Rope Candles 2", 0x4C594, 0x4C5B4, indexCPS2_SFA3Assets, 0x12 },
    { L"Unknown Sprites 1", 0x38574, 0x38594 },
    { L"Unknown Sprites 2", 0x38594, 0x385B4 },
    { L"Unknown Sprites 3", 0x385D4, 0x385F4 },
    { L"Unknown Sprites 4", 0x385F4, 0x38614 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KEN_NODE[] =
{
    { L"Read Building 1", 0x3C4F4, 0x3C6D4, indexCPS2_SFA3Assets, 0x13 },
    { L"Rear Building 2", 0x3C6D4, 0x3C814, indexCPS2_SFA3Assets, 0x14 },
    { L"Left Building / Palms 1", 0x40B34, 0x40D34, indexCPS2_SFA3Assets, 0x15 },
    { L"Left Building / Palms 2", 0x40D34, 0x40F34, indexCPS2_SFA3Assets, 0x16 },
    
    { L"Fountain / Flags / Palms 1", 0x47934, 0x47B34, indexCPS2_SFA3Assets, 0x17 },
    { L"Fountain / Flags / Palms 2", 0x47B34, 0x47CD4, indexCPS2_SFA3Assets, 0x18 },
    { L"Fountain Stream", 0x38514, 0x38534, indexCPS2_SFA3Assets, 0x19 },
    { L"Bartender", 0x384D4, 0x384F4, indexCPS2_SFA3Assets, 0x1a },
    { L"Girls Lounging", 0x384B4, 0x384D4, indexCPS2_SFA3Assets, 0x1b },
    { L"Couple @ Table", 0x384F4, 0x38514, indexCPS2_SFA3Assets, 0x1c },
    { L"Plants?", 0x38534, 0x38554, indexCPS2_SFA3Assets, 0x1d },
    { L"Post & Statue", 0x38554, 0x38574, indexCPS2_SFA3Assets, 0x1e },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE[] =
{
    { L"Sunset / Sea", 0x3C4B4, 0x3C4F4, indexCPS2_SFA3Assets, 0 },
    { L"Castle", 0x383F4, 0x38434, indexCPS2_SFA3Assets, 0x03 },
    { L"Forest / Cliff Tree / Waterfall Hill", 0x477F4, 0x47934, indexCPS2_SFA3Assets, 0x04 },
    { L"Waterfall Landing Anim 1", 0x63FB4, 0x63FD4, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Landing Anim 2", 0x63FD4, 0x63FF4, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Landing Anim 3", 0x63FF4, 0x64014, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Landing Anim 4", 0x64014, 0x64034, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Stream Anim 1", 0x63F34, 0x63F54, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Waterfall Stream Anim 2", 0x63F54, 0x63F74, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Waterfall Stream Anim 3", 0x63F74, 0x63F94, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Waterfall Stream Anim 4", 0x63F94, 0x63FB4, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Main Ground / Big Tree Branches", 0x40994, 0x40B34, indexCPS2_SFA3Assets, 0x05 },
    { L"Tree Trunk Right Side", 0x38454, 0x38474, indexCPS2_SFA3Assets, 0x06 },
    { L"Tree Leaves", 0x38474, 0x38494, indexCPS2_SFA3Assets, 0x07 },
    { L"Grass Left Side", 0x38434, 0x38454, indexCPS2_SFA3Assets, 0x08 },
    { L"Fighter Shadow", 0x38494, 0x384B4, indexCPS2_SFA3Assets, 0x09 },
};

const sGame_PaletteDataset SFA3_A_STAGES_NASH_NODE[] =
{
    { L"Cockpit/Top (Plane)/Landing Gear", 0x47CF4, 0x47DF4, indexCPS2_SFA3Assets, 0x1f },
    { L"Plane and Floor Part 1", 0x41014, 0x41214, indexCPS2_SFA3Assets, 0x20 },
    { L"Plane and Floor Part 2", 0x41214, 0x413D4, indexCPS2_SFA3Assets, 0x21 },
    { L"Rear Windows Metal Ceiling Part 1", 0x3C8D4, 0x3CA74, indexCPS2_SFA3Assets, 0x22 },
    { L"Rear Windows Metal Ceiling Part 2", 0x3CAD4, 0x3CC74, indexCPS2_SFA3Assets, 0x23 },
    { L"Mechanic Spectators", 0x38634, 0x38654, indexCPS2_SFA3Assets, 0x25 },
    { L"Rolling Stairs Thing", 0x38654, 0x38674, indexCPS2_SFA3Assets, 0x24 },
    { L"Missile", 0x38674, 0x38694, indexCPS2_SFA3Assets, 0x26 },
    { L"Missile Tails", 0x38694, 0x386B4, indexCPS2_SFA3Assets, 0x27 },
    { L"Missile Heads", 0x386B4, 0x386D4, indexCPS2_SFA3Assets, 0x28 },
    { L"Under Plane???", 0x386D4, 0x386F4, indexCPS2_SFA3Assets, 0x29 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CHUNLI_NODE[] =
{
    { L"Far Background - 8x8 (1/2)", 0x3CC74, 0x3CE74, indexCPS2_SFA3Assets, 0x2A },
    { L"Far Background - 8x8 (2/2)", 0x3CE74, 0x3CFD4, indexCPS2_SFA3Assets, 0x2B },
    { L"Mid Background - 16x16 (1/2)", 0x413D4, 0x415D4, indexCPS2_SFA3Assets, 0x2C },
    { L"Mid Background - 16x16 (2/2)", 0x415D4, 0x417D4, indexCPS2_SFA3Assets, 0x2D },
    { L"Close Background - 32x32", 0x47DF4, 0x47ED4, indexCPS2_SFA3Assets, 0x2E },
    { L"Instructor", 0x386F4, 0x38714, indexCPS2_SFA3Assets, 0x2F },
    { L"Lamp Post", 0x38714, 0x38734, indexCPS2_SFA3Assets, 0x30 },
    { L"Sign", 0x38734, 0x38754, indexCPS2_SFA3Assets, 0x31 },
    { L"Flag", 0x38754, 0x38774, indexCPS2_SFA3Assets, 0x32 },
    { L"Tree", 0x38774, 0x38794, indexCPS2_SFA3Assets, 0x33 },
    { L"Shadow", 0x38794, 0x387B4, indexCPS2_SFA3Assets, 0x34 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ADON_NODE[] =
{
    { L"Adon Stage - 32x32 Pt1", 0x47ED4, 0x480D4, indexCPS2_SFA3Assets, 0x3b, &pairFullyLinkedNode },
    { L"Adon Stage - 32x32 Pt2", 0x480D4, 0x48114, indexCPS2_SFA3Assets, 0x3c },
    { L"Adon Stage - 16x16 Pt1", 0x417D4, 0x419D4, indexCPS2_SFA3Assets, 0x39 },
    { L"Adon Stage - 16x16 Pt2", 0x419D4, 0x41BD4, indexCPS2_SFA3Assets, 0x3a },
    { L"Adon Stage - Obj Pt1", 0x387B4, 0x387F4, indexCPS2_SFA3Assets, 0x35 },
    { L"Adon Stage - 8x8 Pt1", 0x3CFD4, 0x3D1D4, indexCPS2_SFA3Assets, 0x36 },
    { L"Adon Stage - 8x8 Pt2", 0x3D1D4, 0x3D314, indexCPS2_SFA3Assets, 0x37 },
    { L"Adon Stage - Obj Pt2", 0x387F4, 0x38874, indexCPS2_SFA3Assets, 0x38 },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ce14, 0x4ce94, indexCPS2_SFA3Assets, 0xb4 },
    { L"X-Ism Kick", 0x4ce94, 0x4cf14, indexCPS2_SFA3Assets, 0xb4 },
    { L"A-Ism Punch", 0x4cf14, 0x4cf94, indexCPS2_SFA3Assets, 0xb4 },
    { L"A-Ism Kick", 0x4cf94, 0x4d014, indexCPS2_SFA3Assets, 0xb4 },
    { L"V-Ism Punch", 0x4d014, 0x4d094, indexCPS2_SFA3Assets, 0xb4 },
    { L"V-Ism Kick", 0x4d094, 0x4d114, indexCPS2_SFA3Assets, 0xb4 },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d114, 0x4d194, indexCPS2_SFA3Assets, 0xaf },
    { L"X-Ism Kick", 0x4d194, 0x4d214, indexCPS2_SFA3Assets, 0xaf },
    { L"A-Ism Punch", 0x4d214, 0x4d294, indexCPS2_SFA3Assets, 0xaf },
    { L"A-Ism Kick", 0x4d294, 0x4d314, indexCPS2_SFA3Assets, 0xaf },
    { L"V-Ism Punch", 0x4d314, 0x4d394, indexCPS2_SFA3Assets, 0xaf },
    { L"V-Ism Kick", 0x4d394, 0x4d414, indexCPS2_SFA3Assets, 0xaf },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d414, 0x4d494, indexCPS2_SFA3Assets, 0xa1 },
    { L"X-Ism Kick", 0x4d494, 0x4d514, indexCPS2_SFA3Assets, 0xa1 },
    { L"A-Ism Punch", 0x4d514, 0x4d594, indexCPS2_SFA3Assets, 0xa1 },
    { L"A-Ism Kick", 0x4d594, 0x4d614, indexCPS2_SFA3Assets, 0xa1 },
    { L"V-Ism Punch", 0x4d614, 0x4d694, indexCPS2_SFA3Assets, 0xa1 },
    { L"V-Ism Kick", 0x4d694, 0x4d714, indexCPS2_SFA3Assets, 0xa1 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d714, 0x4d794, indexCPS2_SFA3Assets, 0xa5 },
    { L"X-Ism Kick", 0x4d794, 0x4d814, indexCPS2_SFA3Assets, 0xa5 },
    { L"A-Ism Punch", 0x4d814, 0x4d894, indexCPS2_SFA3Assets, 0xa5 },
    { L"A-Ism Kick", 0x4d894, 0x4d914, indexCPS2_SFA3Assets, 0xa5 },
    { L"V-Ism Punch", 0x4d914, 0x4d994, indexCPS2_SFA3Assets, 0xa5 },
    { L"V-Ism Kick", 0x4d994, 0x4da14, indexCPS2_SFA3Assets, 0xa5 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4da14, 0x4da94, indexCPS2_SFA3Assets, 0xa6 },
    { L"X-Ism Kick", 0x4da94, 0x4db14, indexCPS2_SFA3Assets, 0xa6 },
    { L"A-Ism Punch", 0x4db14, 0x4db94, indexCPS2_SFA3Assets, 0xa7 },
    { L"A-Ism Kick", 0x4db94, 0x4dc14, indexCPS2_SFA3Assets, 0xa7 },
    { L"V-Ism Punch", 0x4dc14, 0x4dc94, indexCPS2_SFA3Assets, 0xa7 },
    { L"V-Ism Kick", 0x4dc94, 0x4dd14, indexCPS2_SFA3Assets, 0xa7 },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4dd14, 0x4dd94, indexCPS2_SFA3Assets, 0xa0 },
    { L"X-Ism Kick", 0x4dd94, 0x4de14, indexCPS2_SFA3Assets, 0xa0 },
    { L"A-Ism Punch", 0x4de14, 0x4de94, indexCPS2_SFA3Assets, 0xa0 },
    { L"A-Ism Kick", 0x4de94, 0x4df14, indexCPS2_SFA3Assets, 0xa0 },
    { L"V-Ism Punch", 0x4df14, 0x4df94, indexCPS2_SFA3Assets, 0xa0 },
    { L"V-Ism Kick", 0x4df94, 0x4e014, indexCPS2_SFA3Assets, 0xa0 },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e014, 0x4e094, indexCPS2_SFA3Assets, 0xb7 },
    { L"X-Ism Kick", 0x4e094, 0x4e114, indexCPS2_SFA3Assets, 0xb7 },
    { L"A-Ism Punch", 0x4e114, 0x4e194, indexCPS2_SFA3Assets, 0xb7 },
    { L"A-Ism Kick", 0x4e194, 0x4e214, indexCPS2_SFA3Assets, 0xb7 },
    { L"V-Ism Punch", 0x4e214, 0x4e294, indexCPS2_SFA3Assets, 0xb7 },
    { L"V-Ism Kick", 0x4e294, 0x4e314, indexCPS2_SFA3Assets, 0xb7 },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e314, 0x4e394, indexCPS2_SFA3Assets, 0xad },
    { L"X-Ism Kick", 0x4e394, 0x4e414, indexCPS2_SFA3Assets, 0xad },
    { L"A-Ism Punch", 0x4e414, 0x4e494, indexCPS2_SFA3Assets, 0xad },
    { L"A-Ism Kick", 0x4e494, 0x4e514, indexCPS2_SFA3Assets, 0xad },
    { L"V-Ism Punch", 0x4e514, 0x4e594, indexCPS2_SFA3Assets, 0xad },
    { L"V-Ism Kick", 0x4e594, 0x4e614, indexCPS2_SFA3Assets, 0xad },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e614, 0x4e694, indexCPS2_SFA3Assets, 0xa2 },
    { L"X-Ism Kick", 0x4e694, 0x4e714, indexCPS2_SFA3Assets, 0xa2 },
    { L"A-Ism Punch", 0x4e714, 0x4e794, indexCPS2_SFA3Assets, 0xa2 },
    { L"A-Ism Kick", 0x4e794, 0x4e814, indexCPS2_SFA3Assets, 0xa2 },
    { L"V-Ism Punch", 0x4e814, 0x4e894, indexCPS2_SFA3Assets, 0xa2 },
    { L"V-Ism Kick", 0x4e894, 0x4e914, indexCPS2_SFA3Assets, 0xa2 },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e914, 0x4e994, indexCPS2_SFA3Assets, 0xb3 },
    { L"X-Ism Kick", 0x4e994, 0x4ea14, indexCPS2_SFA3Assets, 0xb3 },
    { L"A-Ism Punch", 0x4ea14, 0x4ea94, indexCPS2_SFA3Assets, 0xb3 },
    { L"A-Ism Kick", 0x4ea94, 0x4eb14, indexCPS2_SFA3Assets, 0xb3 },
    { L"V-Ism Punch", 0x4eb14, 0x4eb94, indexCPS2_SFA3Assets, 0xb3 },
    { L"V-Ism Kick", 0x4eb94, 0x4ec14, indexCPS2_SFA3Assets, 0xb3 },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ec14, 0x4ec94, indexCPS2_SFA3Assets, 0xb0 },
    { L"X-Ism Kick", 0x4ec94, 0x4ed14, indexCPS2_SFA3Assets, 0xb0 },
    { L"A-Ism Punch", 0x4ed14, 0x4ed94, indexCPS2_SFA3Assets, 0xb0 },
    { L"A-Ism Kick", 0x4ed94, 0x4ee14, indexCPS2_SFA3Assets, 0xb0 },
    { L"V-Ism Punch", 0x4ee14, 0x4ee94, indexCPS2_SFA3Assets, 0xb0 },
    { L"V-Ism Kick", 0x4ee94, 0x4ef14, indexCPS2_SFA3Assets, 0xb0 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ef14, 0x4ef94, indexCPS2_SFA3Assets, 0xb5 },
    { L"X-Ism Kick", 0x4ef94, 0x4f014, indexCPS2_SFA3Assets, 0xb5 },
    { L"A-Ism Punch", 0x4f014, 0x4f094, indexCPS2_SFA3Assets, 0xb5 },
    { L"A-Ism Kick", 0x4f094, 0x4f114, indexCPS2_SFA3Assets, 0xb5 },
    { L"V-Ism Punch", 0x4f114, 0x4f194, indexCPS2_SFA3Assets, 0xb5 },
    { L"V-Ism Kick", 0x4f194, 0x4f214, indexCPS2_SFA3Assets, 0xb5 },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f214, 0x4f294, indexCPS2_SFA3Assets, 0xa9 },
    { L"X-Ism Kick", 0x4f294, 0x4f314, indexCPS2_SFA3Assets, 0xa9 },
    { L"A-Ism Punch", 0x4f314, 0x4f394, indexCPS2_SFA3Assets, 0xa9 },
    { L"A-Ism Kick", 0x4f394, 0x4f414, indexCPS2_SFA3Assets, 0xa9 },
    { L"V-Ism Punch", 0x4f414, 0x4f494, indexCPS2_SFA3Assets, 0xa9 },
    { L"V-Ism Kick", 0x4f494, 0x4f514, indexCPS2_SFA3Assets, 0xa9 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f514, 0x4f594, indexCPS2_SFA3Assets, 0xb6 },
    { L"X-Ism Kick", 0x4f594, 0x4f614, indexCPS2_SFA3Assets, 0xb6 },
    { L"A-Ism Punch", 0x4f614, 0x4f694, indexCPS2_SFA3Assets, 0xb6 },
    { L"A-Ism Kick", 0x4f694, 0x4f714, indexCPS2_SFA3Assets, 0xb6 },
    { L"V-Ism Punch", 0x4f714, 0x4f794, indexCPS2_SFA3Assets, 0xb6 },
    { L"V-Ism Kick", 0x4f794, 0x4f814, indexCPS2_SFA3Assets, 0xb6 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f814, 0x4f894, indexCPS2_SFA3Assets, 0xb2 },
    { L"X-Ism Kick", 0x4f894, 0x4f914, indexCPS2_SFA3Assets, 0xb2 },
    { L"A-Ism Punch", 0x4f914, 0x4f994, indexCPS2_SFA3Assets, 0xb2 },
    { L"A-Ism Kick", 0x4f994, 0x4fa14, indexCPS2_SFA3Assets, 0xb2 },
    { L"V-Ism Punch", 0x4fa14, 0x4fa94, indexCPS2_SFA3Assets, 0xb2 },
    { L"V-Ism Kick", 0x4fa94, 0x4fb14, indexCPS2_SFA3Assets, 0xb2 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4fb14, 0x4fb94, indexCPS2_SFA3Assets, 0xaa },
    { L"X-Ism Kick", 0x4fb94, 0x4fc14, indexCPS2_SFA3Assets, 0xaa },
    { L"A-Ism Punch", 0x4fc14, 0x4fc94, indexCPS2_SFA3Assets, 0xaa },
    { L"A-Ism Kick", 0x4fc94, 0x4fd14, indexCPS2_SFA3Assets, 0xaa },
    { L"V-Ism Punch", 0x4fd14, 0x4fd94, indexCPS2_SFA3Assets, 0xaa },
    { L"V-Ism Kick", 0x4fd94, 0x4fe14, indexCPS2_SFA3Assets, 0xaa },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4fe14, 0x4fe94, indexCPS2_SFA3Assets, 0xb9 },
    { L"X-Ism Kick", 0x4fe94, 0x4ff14, indexCPS2_SFA3Assets, 0xb9 },
    { L"A-Ism Punch", 0x4ff14, 0x4ff94, indexCPS2_SFA3Assets, 0xb9 },
    { L"A-Ism Kick", 0x4ff94, 0x50014, indexCPS2_SFA3Assets, 0xb9 },
    { L"V-Ism Punch", 0x50014, 0x50094, indexCPS2_SFA3Assets, 0xb9 },
    { L"V-Ism Kick", 0x50094, 0x50114, indexCPS2_SFA3Assets, 0xb9 },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50114, 0x50194, indexCPS2_SFA3Assets, 0xac },
    { L"X-Ism Kick", 0x50194, 0x50214, indexCPS2_SFA3Assets, 0xac },
    { L"A-Ism Punch", 0x50214, 0x50294, indexCPS2_SFA3Assets, 0xac },
    { L"A-Ism Kick", 0x50294, 0x50314, indexCPS2_SFA3Assets, 0xac },
    { L"V-Ism Punch", 0x50314, 0x50394, indexCPS2_SFA3Assets, 0xac },
    { L"V-Ism Kick", 0x50394, 0x50414, indexCPS2_SFA3Assets, 0xac },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50a14, 0x50a94, indexCPS2_SFA3Assets, 0xa4 },
    { L"X-Ism Kick", 0x50a94, 0x50b14, indexCPS2_SFA3Assets, 0xa4 },
    { L"A-Ism Punch", 0x50b14, 0x50b94, indexCPS2_SFA3Assets, 0xa4 },
    { L"A-Ism Kick", 0x50b94, 0x50c14, indexCPS2_SFA3Assets, 0xa4 },
    { L"V-Ism Punch", 0x50c14, 0x50c94, indexCPS2_SFA3Assets, 0xa4 },
    { L"V-Ism Kick", 0x50c94, 0x50d14, indexCPS2_SFA3Assets, 0xa4 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50d14, 0x50d94, indexCPS2_SFA3Assets, 0xab },
    { L"X-Ism Kick", 0x50d94, 0x50e14, indexCPS2_SFA3Assets, 0xab },
    { L"A-Ism Punch", 0x50e14, 0x50e94, indexCPS2_SFA3Assets, 0xab },
    { L"A-Ism Kick", 0x50e94, 0x50f14, indexCPS2_SFA3Assets, 0xab },
    { L"V-Ism Punch", 0x50f14, 0x50f94, indexCPS2_SFA3Assets, 0xab },
    { L"V-Ism Kick", 0x50f94, 0x51014, indexCPS2_SFA3Assets, 0xab },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51014, 0x51094, indexCPS2_SFA3Assets, 0xa3 },
    { L"X-Ism Kick", 0x51094, 0x51114, indexCPS2_SFA3Assets, 0xa3 },
    { L"A-Ism Punch", 0x51114, 0x51194, indexCPS2_SFA3Assets, 0xa3 },
    { L"A-Ism Kick", 0x51194, 0x51214, indexCPS2_SFA3Assets, 0xa3 },
    { L"V-Ism Punch", 0x51214, 0x51294, indexCPS2_SFA3Assets, 0xa3 },
    { L"V-Ism Kick", 0x51294, 0x51314, indexCPS2_SFA3Assets, 0xa3 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51314, 0x51394, indexCPS2_SFA3Assets, 0xb1 },
    { L"X-Ism Kick", 0x51394, 0x51414, indexCPS2_SFA3Assets, 0xb1 },
    { L"A-Ism Punch", 0x51414, 0x51494, indexCPS2_SFA3Assets, 0xb1 },
    { L"A-Ism Kick", 0x51494, 0x51514, indexCPS2_SFA3Assets, 0xb1 },
    { L"V-Ism Punch", 0x51514, 0x51594, indexCPS2_SFA3Assets, 0xb1 },
    { L"V-Ism Kick", 0x51594, 0x51614, indexCPS2_SFA3Assets, 0xb1 },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51614, 0x51694, indexCPS2_SFA3Assets, 0xa8 },
    { L"X-Ism Kick", 0x51694, 0x51714, indexCPS2_SFA3Assets, 0xa8 },
    { L"A-Ism Punch", 0x51714, 0x51794, indexCPS2_SFA3Assets, 0xa8 },
    { L"A-Ism Kick", 0x51794, 0x51814, indexCPS2_SFA3Assets, 0xa8 },
    { L"V-Ism Punch", 0x51814, 0x51894, indexCPS2_SFA3Assets, 0xa8 },
    { L"V-Ism Kick", 0x51894, 0x51914, indexCPS2_SFA3Assets, 0xa8 },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51914, 0x51994, indexCPS2_SFA3Assets, 0xb8 },
    { L"X-Ism Kick", 0x51994, 0x51a14, indexCPS2_SFA3Assets, 0xb8 },
    { L"A-Ism Punch", 0x51a14, 0x51a94, indexCPS2_SFA3Assets, 0xb8 },
    { L"A-Ism Kick", 0x51a94, 0x51b14, indexCPS2_SFA3Assets, 0xb8 },
    { L"V-Ism Punch", 0x51b14, 0x51b94, indexCPS2_SFA3Assets, 0xb8 },
    { L"V-Ism Kick", 0x51b94, 0x51c14, indexCPS2_SFA3Assets, 0xb8 },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51c14, 0x51c94, indexCPS2_SFA3Assets, 0xae },
    { L"X-Ism Kick", 0x51c94, 0x51d14, indexCPS2_SFA3Assets, 0xae },
    { L"A-Ism Punch", 0x51d14, 0x51d94, indexCPS2_SFA3Assets, 0xae },
    { L"A-Ism Kick", 0x51d94, 0x51e14, indexCPS2_SFA3Assets, 0xae },
    { L"V-Ism Punch", 0x51e14, 0x51e94, indexCPS2_SFA3Assets, 0xae },
    { L"V-Ism Kick", 0x51e94, 0x51f14, indexCPS2_SFA3Assets, 0xae },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x51f94, 0x52074, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"X-Ism Kick", 0x52094, 0x52174, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"A-Ism Punch", 0x52194, 0x52274, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"A-Ism Kick", 0x52294, 0x52374, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"V-Ism Punch", 0x52394, 0x52474, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"V-Ism Kick", 0x52494, 0x52574, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x52594, 0x52694, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"X-Ism Kick", 0x52694, 0x52794, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"A-Ism Punch", 0x52794, 0x52894, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"A-Ism Kick", 0x52894, 0x52994, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"V-Ism Punch", 0x52994, 0x52a94, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"V-Ism Kick", 0x52a94, 0x52b94, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x52b94, 0x52bf4, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"X-Ism Kick", 0x52c94, 0x52cf4, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"A-Ism Punch", 0x52d94, 0x52df4, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"A-Ism Kick", 0x52e94, 0x52ef4, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"V-Ism Punch", 0x52f94, 0x52ff4, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"V-Ism Kick", 0x53094, 0x530f4, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53194, 0x53294, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"X-Ism Kick", 0x53294, 0x53394, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"A-Ism Punch", 0x53394, 0x53494, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"A-Ism Kick", 0x53494, 0x53594, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"V-Ism Punch", 0x53594, 0x53694, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"V-Ism Kick", 0x53694, 0x53794, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53794, 0x537f4, indexCPS2_SFA3_Portraits, 0x1c },
    { L"X-Ism Kick", 0x53894, 0x538f4, indexCPS2_SFA3_Portraits, 0x1c },
    { L"A-Ism Punch ", 0x53994, 0x53a54, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
    { L"A-Ism Kick", 0x53a94, 0x53b54, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
    { L"V-Ism Punch", 0x53b94, 0x53c54, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
    { L"V-Ism Kick", 0x53c94, 0x53d54, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53d94, 0x53e14, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"X-Ism Kick", 0x53e94, 0x53f14, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"A-Ism Punch", 0x53f94, 0x54014, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"A-Ism Kick", 0x54094, 0x54114, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"V-Ism Punch", 0x54194, 0x54214, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"V-Ism Kick", 0x54294, 0x54314, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54394, 0x54494, indexCPS2_SFA3_Portraits, 0x3c },
    { L"X-Ism Kick", 0x54494, 0x54594, indexCPS2_SFA3_Portraits, 0x3c },
    { L"A-Ism Punch", 0x54594, 0x54694, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
    { L"A-Ism Kick", 0x54694, 0x54794, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
    { L"V-Ism Punch", 0x54794, 0x54894, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
    { L"V-Ism Kick", 0x54894, 0x54994, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54994, 0x54a34, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"X-Ism Kick", 0x54a94, 0x54b34, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"A-Ism Punch", 0x54b94, 0x54c34, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"A-Ism Kick", 0x54c94, 0x54d34, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"V-Ism Punch", 0x54d94, 0x54e34, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"V-Ism Kick", 0x54e94, 0x54f34, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54f94, 0x55074, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"X-Ism Kick", 0x55094, 0x55174, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"A-Ism Punch", 0x55194, 0x55274, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"A-Ism Kick", 0x55294, 0x55374, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"V-Ism Punch", 0x55394, 0x55474, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"V-Ism Kick", 0x55494, 0x55574, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x55594, 0x55654, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"X-Ism Kick", 0x55694, 0x55754, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"A-Ism Punch", 0x55794, 0x55854, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"A-Ism Kick", 0x55894, 0x55954, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"V-Ism Punch", 0x55994, 0x55a54, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"V-Ism Kick", 0x55a94, 0x55b54, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x55b94, 0x55c74, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"X-Ism Kick", 0x55c94, 0x55d74, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"A-Ism Punch", 0x55d94, 0x55e74, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"A-Ism Kick", 0x55e94, 0x55f74, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"V-Ism Punch", 0x55f94, 0x56074, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"V-Ism Kick", 0x56094, 0x56174, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56194, 0x561b4, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"X-Ism Kick", 0x56294, 0x562b4, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"A-Ism Punch", 0x56394, 0x563b4, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"A-Ism Kick", 0x56494, 0x564b4, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"V-Ism Punch", 0x56594, 0x565b4, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"V-Ism Kick", 0x56694, 0x566b4, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56794, 0x56834, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"X-Ism Kick", 0x56894, 0x56934, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"A-Ism Punch", 0x56994, 0x56a34, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"A-Ism Kick", 0x56a94, 0x56b34, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"V-Ism Punch", 0x56b94, 0x56c34, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"V-Ism Kick", 0x56c94, 0x56d34, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56d94, 0x56e14, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"X-Ism Kick", 0x56e94, 0x56f14, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"A-Ism Punch", 0x56f94, 0x57014, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"A-Ism Kick", 0x57094, 0x57114, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"V-Ism Punch", 0x57194, 0x57214, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"V-Ism Kick", 0x57294, 0x57314, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57394, 0x57474, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"X-Ism Kick", 0x57494, 0x57574, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"A-Ism Punch", 0x57594, 0x57674, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"A-Ism Kick", 0x57694, 0x57774, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"V-Ism Punch", 0x57794, 0x57874, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"V-Ism Kick", 0x57894, 0x57974, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57994, 0x57a14, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"X-Ism Kick", 0x57a94, 0x57b14, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"A-Ism Punch", 0x57b94, 0x57c14, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"A-Ism Kick", 0x57c94, 0x57d14, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"V-Ism Punch", 0x57d94, 0x57e14, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"V-Ism Kick", 0x57e94, 0x57f14, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57f94, 0x57fd4, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"X-Ism Kick", 0x58094, 0x580d4, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"A-Ism Punch", 0x58194, 0x581d4, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"A-Ism Kick", 0x58294, 0x582d4, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"V-Ism Punch", 0x58394, 0x583d4, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"V-Ism Kick", 0x58494, 0x584d4, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x58594, 0x58614, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"X-Ism Kick", 0x58694, 0x58714, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"A-Ism Punch", 0x58794, 0x58814, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"A-Ism Kick", 0x58894, 0x58914, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"V-Ism Punch", 0x58994, 0x58a14, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"V-Ism Kick", 0x58a94, 0x58b14, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59194, 0x59234, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"X-Ism Kick", 0x59294, 0x59334, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"A-Ism Punch", 0x59394, 0x59434, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"A-Ism Kick", 0x59494, 0x59534, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"V-Ism Punch", 0x59594, 0x59634, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"V-Ism Kick", 0x59694, 0x59734, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59794, 0x597d4, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"X-Ism Kick", 0x59894, 0x598d4, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"A-Ism Punch", 0x59994, 0x599d4, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"A-Ism Kick", 0x59a94, 0x59ad4, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"V-Ism Punch", 0x59b94, 0x59bd4, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"V-Ism Kick", 0x59c94, 0x59cd4, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59d94, 0x59dd4, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"X-Ism Kick", 0x59e94, 0x59ed4, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"A-Ism Punch", 0x59f94, 0x59fd4, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"A-Ism Kick", 0x5a094, 0x5a0d4, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"V-Ism Punch", 0x5a194, 0x5a1d4, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"V-Ism Kick", 0x5a294, 0x5a2d4, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5a394, 0x5a414, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"X-Ism Kick", 0x5a494, 0x5a514, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"A-Ism Punch", 0x5a594, 0x5a614, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"A-Ism Kick", 0x5a694, 0x5a714, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"V-Ism Punch", 0x5a794, 0x5a814, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"V-Ism Kick", 0x5a894, 0x5a914, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5a994, 0x5a9d4, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"X-Ism Kick", 0x5aa94, 0x5aad4, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"A-Ism Punch", 0x5ab94, 0x5abd4, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"A-Ism Kick", 0x5ac94, 0x5acd4, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"V-Ism Punch", 0x5ad94, 0x5add4, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"V-Ism Kick", 0x5ae94, 0x5aed4, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5af94, 0x5b054, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"X-Ism Kick", 0x5b094, 0x5b154, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"A-Ism Punch", 0x5b194, 0x5b254, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"A-Ism Kick", 0x5b294, 0x5b354, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"V-Ism Punch", 0x5b394, 0x5b454, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"V-Ism Kick", 0x5b494, 0x5b554, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5b594, 0x5b694, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"X-Ism Kick", 0x5b694, 0x5b794, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"A-Ism Punch", 0x5b794, 0x5b894, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"A-Ism Kick", 0x5b894, 0x5b994, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"V-Ism Punch", 0x5b994, 0x5ba94, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"V-Ism Kick", 0x5ba94, 0x5bb94, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
};

const sDescTreeNode SFA3_A_RYU_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_XISMP,      ARRAYSIZE(SFA3_A_RYU_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_XISMK,      ARRAYSIZE(SFA3_A_RYU_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_AISMP,      ARRAYSIZE(SFA3_A_RYU_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_AISMK,      ARRAYSIZE(SFA3_A_RYU_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_VISMP,      ARRAYSIZE(SFA3_A_RYU_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_VISMK,      ARRAYSIZE(SFA3_A_RYU_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_STATUS,     ARRAYSIZE(SFA3_A_RYU_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_RYU_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_RYU_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_KEN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_XISMP,      ARRAYSIZE(SFA3_A_KEN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_XISMK,      ARRAYSIZE(SFA3_A_KEN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_AISMP,      ARRAYSIZE(SFA3_A_KEN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_AISMK,      ARRAYSIZE(SFA3_A_KEN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_VISMP,      ARRAYSIZE(SFA3_A_KEN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_VISMK,      ARRAYSIZE(SFA3_A_KEN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_STATUS,     ARRAYSIZE(SFA3_A_KEN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_KEN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_KEN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_GOUKI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_XISMP,      ARRAYSIZE(SFA3_A_GOUKI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_XISMK,      ARRAYSIZE(SFA3_A_GOUKI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_AISMP,      ARRAYSIZE(SFA3_A_GOUKI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_AISMK,      ARRAYSIZE(SFA3_A_GOUKI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_VISMP,      ARRAYSIZE(SFA3_A_GOUKI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_VISMK,      ARRAYSIZE(SFA3_A_GOUKI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_STATUS,     ARRAYSIZE(SFA3_A_GOUKI_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_CHARLIE_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_XISMP,      ARRAYSIZE(SFA3_A_CHARLIE_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_XISMK,      ARRAYSIZE(SFA3_A_CHARLIE_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_AISMP,      ARRAYSIZE(SFA3_A_CHARLIE_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_AISMK,      ARRAYSIZE(SFA3_A_CHARLIE_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_VISMP,      ARRAYSIZE(SFA3_A_CHARLIE_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_VISMK,      ARRAYSIZE(SFA3_A_CHARLIE_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_STATUS,     ARRAYSIZE(SFA3_A_CHARLIE_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_CHUNLI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_XISMP,      ARRAYSIZE(SFA3_A_CHUNLI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_XISMK,      ARRAYSIZE(SFA3_A_CHUNLI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_AISMP,      ARRAYSIZE(SFA3_A_CHUNLI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_AISMK,      ARRAYSIZE(SFA3_A_CHUNLI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_VISMP,      ARRAYSIZE(SFA3_A_CHUNLI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_VISMK,      ARRAYSIZE(SFA3_A_CHUNLI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_STATUS,     ARRAYSIZE(SFA3_A_CHUNLI_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ADON_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_XISMP,      ARRAYSIZE(SFA3_A_ADON_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_XISMK,      ARRAYSIZE(SFA3_A_ADON_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_AISMP,      ARRAYSIZE(SFA3_A_ADON_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_AISMK,      ARRAYSIZE(SFA3_A_ADON_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_VISMP,      ARRAYSIZE(SFA3_A_ADON_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_VISMK,      ARRAYSIZE(SFA3_A_ADON_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_STATUS,     ARRAYSIZE(SFA3_A_ADON_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ADON_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ADON_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_SODOM_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_XISMP,      ARRAYSIZE(SFA3_A_SODOM_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_XISMK,      ARRAYSIZE(SFA3_A_SODOM_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_AISMP,      ARRAYSIZE(SFA3_A_SODOM_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_AISMK,      ARRAYSIZE(SFA3_A_SODOM_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_VISMP,      ARRAYSIZE(SFA3_A_SODOM_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_VISMK,      ARRAYSIZE(SFA3_A_SODOM_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_STATUS,     ARRAYSIZE(SFA3_A_SODOM_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_SODOM_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_GUY_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_XISMP,      ARRAYSIZE(SFA3_A_GUY_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_XISMK,      ARRAYSIZE(SFA3_A_GUY_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_AISMP,      ARRAYSIZE(SFA3_A_GUY_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_AISMK,      ARRAYSIZE(SFA3_A_GUY_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_VISMP,      ARRAYSIZE(SFA3_A_GUY_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_VISMK,      ARRAYSIZE(SFA3_A_GUY_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_STATUS,     ARRAYSIZE(SFA3_A_GUY_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_GUY_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_GUY_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_BIRDIE_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_XISMP,      ARRAYSIZE(SFA3_A_BIRDIE_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_XISMK,      ARRAYSIZE(SFA3_A_BIRDIE_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_AISMP,      ARRAYSIZE(SFA3_A_BIRDIE_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_AISMK,      ARRAYSIZE(SFA3_A_BIRDIE_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_VISMP,      ARRAYSIZE(SFA3_A_BIRDIE_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_VISMK,      ARRAYSIZE(SFA3_A_BIRDIE_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_STATUS,     ARRAYSIZE(SFA3_A_BIRDIE_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ROSE_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMP,      ARRAYSIZE(SFA3_A_ROSE_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMK,      ARRAYSIZE(SFA3_A_ROSE_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMP,      ARRAYSIZE(SFA3_A_ROSE_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMK,      ARRAYSIZE(SFA3_A_ROSE_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMP,      ARRAYSIZE(SFA3_A_ROSE_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMK,      ARRAYSIZE(SFA3_A_ROSE_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_STATUS,     ARRAYSIZE(SFA3_A_ROSE_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ROSE_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_MBISON_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_XISMP,      ARRAYSIZE(SFA3_A_MBISON_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_XISMK,      ARRAYSIZE(SFA3_A_MBISON_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_AISMP,      ARRAYSIZE(SFA3_A_MBISON_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_AISMK,      ARRAYSIZE(SFA3_A_MBISON_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_VISMP,      ARRAYSIZE(SFA3_A_MBISON_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_VISMK,      ARRAYSIZE(SFA3_A_MBISON_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_STATUS,     ARRAYSIZE(SFA3_A_MBISON_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_MBISON_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_SAGAT_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_XISMP,      ARRAYSIZE(SFA3_A_SAGAT_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_XISMK,      ARRAYSIZE(SFA3_A_SAGAT_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_AISMP,      ARRAYSIZE(SFA3_A_SAGAT_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_AISMK,      ARRAYSIZE(SFA3_A_SAGAT_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_VISMP,      ARRAYSIZE(SFA3_A_SAGAT_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_VISMK,      ARRAYSIZE(SFA3_A_SAGAT_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_STATUS,     ARRAYSIZE(SFA3_A_SAGAT_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_DAN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_XISMP,      ARRAYSIZE(SFA3_A_DAN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_XISMK,      ARRAYSIZE(SFA3_A_DAN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_AISMP,      ARRAYSIZE(SFA3_A_DAN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_AISMK,      ARRAYSIZE(SFA3_A_DAN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_VISMP,      ARRAYSIZE(SFA3_A_DAN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_VISMK,      ARRAYSIZE(SFA3_A_DAN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_STATUS,     ARRAYSIZE(SFA3_A_DAN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_DAN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_DAN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_SAKURA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_XISMP,      ARRAYSIZE(SFA3_A_SAKURA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_XISMK,      ARRAYSIZE(SFA3_A_SAKURA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_AISMP,      ARRAYSIZE(SFA3_A_SAKURA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_AISMK,      ARRAYSIZE(SFA3_A_SAKURA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_VISMP,      ARRAYSIZE(SFA3_A_SAKURA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_VISMK,      ARRAYSIZE(SFA3_A_SAKURA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_STATUS,     ARRAYSIZE(SFA3_A_SAKURA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ROLENTO_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_XISMP,      ARRAYSIZE(SFA3_A_ROLENTO_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_XISMK,      ARRAYSIZE(SFA3_A_ROLENTO_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_AISMP,      ARRAYSIZE(SFA3_A_ROLENTO_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_AISMK,      ARRAYSIZE(SFA3_A_ROLENTO_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_VISMP,      ARRAYSIZE(SFA3_A_ROLENTO_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_VISMK,      ARRAYSIZE(SFA3_A_ROLENTO_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_STATUS,     ARRAYSIZE(SFA3_A_ROLENTO_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_DHALSIM_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_XISMP,      ARRAYSIZE(SFA3_A_DHALSIM_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_XISMK,      ARRAYSIZE(SFA3_A_DHALSIM_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_AISMP,      ARRAYSIZE(SFA3_A_DHALSIM_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_AISMK,      ARRAYSIZE(SFA3_A_DHALSIM_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_VISMP,      ARRAYSIZE(SFA3_A_DHALSIM_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_VISMK,      ARRAYSIZE(SFA3_A_DHALSIM_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_STATUS,     ARRAYSIZE(SFA3_A_DHALSIM_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_ZANGIEF_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_XISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_XISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_AISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_AISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_VISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_VISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_STATUS,     ARRAYSIZE(SFA3_A_ZANGIEF_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_GEN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_XISMP,      ARRAYSIZE(SFA3_A_GEN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_XISMK,      ARRAYSIZE(SFA3_A_GEN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_AISMP,      ARRAYSIZE(SFA3_A_GEN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_AISMK,      ARRAYSIZE(SFA3_A_GEN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_VISMP,      ARRAYSIZE(SFA3_A_GEN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_VISMK,      ARRAYSIZE(SFA3_A_GEN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_STATUS,     ARRAYSIZE(SFA3_A_GEN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_GEN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_GEN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_BALROG_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_XISMP,      ARRAYSIZE(SFA3_A_BALROG_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_XISMK,      ARRAYSIZE(SFA3_A_BALROG_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_AISMP,      ARRAYSIZE(SFA3_A_BALROG_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_AISMK,      ARRAYSIZE(SFA3_A_BALROG_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_VISMP,      ARRAYSIZE(SFA3_A_BALROG_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_VISMK,      ARRAYSIZE(SFA3_A_BALROG_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_STATUS,     ARRAYSIZE(SFA3_A_BALROG_STATUS) },
};

const sDescTreeNode SFA3_A_CAMMY_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_XISMP,      ARRAYSIZE(SFA3_A_CAMMY_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_XISMK,      ARRAYSIZE(SFA3_A_CAMMY_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_AISMP,      ARRAYSIZE(SFA3_A_CAMMY_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_AISMK,      ARRAYSIZE(SFA3_A_CAMMY_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_VISMP,      ARRAYSIZE(SFA3_A_CAMMY_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_VISMK,      ARRAYSIZE(SFA3_A_CAMMY_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_STATUS,     ARRAYSIZE(SFA3_A_CAMMY_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_EHONDA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_XISMP,      ARRAYSIZE(SFA3_A_EHONDA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_XISMK,      ARRAYSIZE(SFA3_A_EHONDA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_AISMP,      ARRAYSIZE(SFA3_A_EHONDA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_AISMK,      ARRAYSIZE(SFA3_A_EHONDA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_VISMP,      ARRAYSIZE(SFA3_A_EHONDA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_VISMK,      ARRAYSIZE(SFA3_A_EHONDA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_STATUS,     ARRAYSIZE(SFA3_A_EHONDA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_BLANKA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_XISMP,      ARRAYSIZE(SFA3_A_BLANKA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_XISMK,      ARRAYSIZE(SFA3_A_BLANKA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_AISMP,      ARRAYSIZE(SFA3_A_BLANKA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_AISMK,      ARRAYSIZE(SFA3_A_BLANKA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_VISMP,      ARRAYSIZE(SFA3_A_BLANKA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_VISMK,      ARRAYSIZE(SFA3_A_BLANKA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_STATUS,     ARRAYSIZE(SFA3_A_BLANKA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_RMIKA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_XISMP,      ARRAYSIZE(SFA3_A_RMIKA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_XISMK,      ARRAYSIZE(SFA3_A_RMIKA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_AISMP,      ARRAYSIZE(SFA3_A_RMIKA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_AISMK,      ARRAYSIZE(SFA3_A_RMIKA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_VISMP,      ARRAYSIZE(SFA3_A_RMIKA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_VISMK,      ARRAYSIZE(SFA3_A_RMIKA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_STATUS,     ARRAYSIZE(SFA3_A_RMIKA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_CODY_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_XISMP,      ARRAYSIZE(SFA3_A_CODY_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_XISMK,      ARRAYSIZE(SFA3_A_CODY_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_AISMP,      ARRAYSIZE(SFA3_A_CODY_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_AISMK,      ARRAYSIZE(SFA3_A_CODY_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_VISMP,      ARRAYSIZE(SFA3_A_CODY_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_VISMK,      ARRAYSIZE(SFA3_A_CODY_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_STATUS,     ARRAYSIZE(SFA3_A_CODY_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_CODY_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_CODY_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_VEGA_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMP,      ARRAYSIZE(SFA3_A_VEGA_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMK,      ARRAYSIZE(SFA3_A_VEGA_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMP,      ARRAYSIZE(SFA3_A_VEGA_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMK,      ARRAYSIZE(SFA3_A_VEGA_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMP,      ARRAYSIZE(SFA3_A_VEGA_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMK,      ARRAYSIZE(SFA3_A_VEGA_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_STATUS,     ARRAYSIZE(SFA3_A_VEGA_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_VEGA_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_KARIN_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_XISMP,      ARRAYSIZE(SFA3_A_KARIN_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_XISMK,      ARRAYSIZE(SFA3_A_KARIN_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_AISMP,      ARRAYSIZE(SFA3_A_KARIN_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_AISMK,      ARRAYSIZE(SFA3_A_KARIN_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_VISMP,      ARRAYSIZE(SFA3_A_KARIN_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_VISMK,      ARRAYSIZE(SFA3_A_KARIN_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_STATUS,     ARRAYSIZE(SFA3_A_KARIN_STATUS) },
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES, ARRAYSIZE(SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES) },
    { L"Win Portraits",  DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PORTRAIT_WIN_PALETTES, ARRAYSIZE(SFA3_A_KARIN_PORTRAIT_WIN_PALETTES) },
};

const sDescTreeNode SFA3_A_JUNI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_XISMP,      ARRAYSIZE(SFA3_A_JUNI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_XISMK,      ARRAYSIZE(SFA3_A_JUNI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_AISMP,      ARRAYSIZE(SFA3_A_JUNI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_AISMK,      ARRAYSIZE(SFA3_A_JUNI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_VISMP,      ARRAYSIZE(SFA3_A_JUNI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_VISMK,      ARRAYSIZE(SFA3_A_JUNI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_STATUS,     ARRAYSIZE(SFA3_A_JUNI_STATUS) },
};

const sDescTreeNode SFA3_A_JULI_COLLECTION[] =
{
    { L"X-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_XISMP,      ARRAYSIZE(SFA3_A_JULI_XISMP) },
    { L"X-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_XISMK,      ARRAYSIZE(SFA3_A_JULI_XISMK) },
    { L"A-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_AISMP,      ARRAYSIZE(SFA3_A_JULI_AISMP) },
    { L"A-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_AISMK,      ARRAYSIZE(SFA3_A_JULI_AISMK) },
    { L"V-Ism Punch",    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_VISMP,      ARRAYSIZE(SFA3_A_JULI_VISMP) },
    { L"V-Ism Kick",     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_VISMK,      ARRAYSIZE(SFA3_A_JULI_VISMK) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_STATUS,     ARRAYSIZE(SFA3_A_JULI_STATUS) }, 
};

const sDescTreeNode SFA3_A_STAGES_COLLECTION[] =
{
    { L"Adon Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ADON_NODE, ARRAYSIZE(SFA3_A_STAGES_ADON_NODE) },
    { L"Akuma Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_AKUMA_NODE, ARRAYSIZE(SFA3_A_STAGES_AKUMA_NODE) },
    { L"Chun-Li Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CHUNLI_NODE, ARRAYSIZE(SFA3_A_STAGES_CHUNLI_NODE) },
    { L"Ken Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_KEN_NODE, ARRAYSIZE(SFA3_A_STAGES_KEN_NODE) },
    { L"Ryu Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_RYU_NODE, ARRAYSIZE(SFA3_A_STAGES_RYU_NODE) },
    { L"Nash Stage", DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_NASH_NODE, ARRAYSIZE(SFA3_A_STAGES_NASH_NODE) },
};

const sDescTreeNode SFA3_A_UNITS[SFA3_A_NUM_IND] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_COLLECTION,          ARRAYSIZE(SFA3_A_ADON_COLLECTION) },
    { L"Balrog",          DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_COLLECTION,        ARRAYSIZE(SFA3_A_BALROG_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA3_A_BIRDIE_COLLECTION) },
    { L"Blanka",          DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_COLLECTION,        ARRAYSIZE(SFA3_A_BLANKA_COLLECTION) },
    { L"Cammy",           DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_COLLECTION,         ARRAYSIZE(SFA3_A_CAMMY_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA3_A_CHARLIE_COLLECTION) },
    { L"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA3_A_CHUNLI_COLLECTION) },
    { L"Cody",            DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_COLLECTION,          ARRAYSIZE(SFA3_A_CODY_COLLECTION) },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_COLLECTION,           ARRAYSIZE(SFA3_A_DAN_COLLECTION) },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA3_A_DHALSIM_COLLECTION) },
    { L"E. Honda",        DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_COLLECTION,        ARRAYSIZE(SFA3_A_EHONDA_COLLECTION) },
    { L"Gen",             DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_COLLECTION,           ARRAYSIZE(SFA3_A_GEN_COLLECTION) },
    { L"Gouki",           DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA3_A_GOUKI_COLLECTION) },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_COLLECTION,           ARRAYSIZE(SFA3_A_GUY_COLLECTION) },
    { L"Juli",            DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_COLLECTION,          ARRAYSIZE(SFA3_A_JULI_COLLECTION) },
    { L"Juni",            DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_COLLECTION,          ARRAYSIZE(SFA3_A_JUNI_COLLECTION) },
    { L"Karin",           DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_COLLECTION,         ARRAYSIZE(SFA3_A_KARIN_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_COLLECTION,           ARRAYSIZE(SFA3_A_KEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_COLLECTION,        ARRAYSIZE(SFA3_A_MBISON_COLLECTION) },
    { L"R. Mika",         DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_COLLECTION,         ARRAYSIZE(SFA3_A_RMIKA_COLLECTION) },
    { L"Rolento",         DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA3_A_ROLENTO_COLLECTION) },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_COLLECTION,          ARRAYSIZE(SFA3_A_ROSE_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_COLLECTION,           ARRAYSIZE(SFA3_A_RYU_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA3_A_SAGAT_COLLECTION) },
    { L"Sakura",          DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA3_A_SAKURA_COLLECTION) },
    { L"Sodom",           DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_COLLECTION,         ARRAYSIZE(SFA3_A_SODOM_COLLECTION) },
    { L"Vega",            DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_COLLECTION,          ARRAYSIZE(SFA3_A_VEGA_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA3_A_ZANGIEF_COLLECTION) },
    { L"Stages",          DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_COLLECTION,        ARRAYSIZE(SFA3_A_STAGES_COLLECTION) },
};

// We extend this array with data groveled from the SFA3e.txt extensible extras file, if any.
const stExtraDef SFA3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

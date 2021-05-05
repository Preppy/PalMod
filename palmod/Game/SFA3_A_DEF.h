#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA3_A_RYU_PALETTES. 
// * Update every array using SFA3_A_NUM_IND below
// * Update the index lookups in Game_SFA3_A.cpp that are marked 
//       - look for usage of index_SFA3_Ryu to find them
// That should be it.  Good luck.

const sGame_PaletteDataset SFA3_A_RYU_XISMP[] =
{
    { L"X-Ism Punch", 0x2c0d2, 0x2c0f2, indexCPS2_Ryu, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c0f2, 0x2c112, indexCPS2_Ryu, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2c112, 0x2c132 },
    { L"X-Ism Punch Super Trail Light", 0x2c132, 0x2c152, indexCPS2_Ryu, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c152, 0x2c172, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_XISMK[] =
{
    { L"X-Ism Kick", 0x2c172, 0x2c192, indexCPS2_Ryu, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c192, 0x2c1b2, indexCPS2_Ryu, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2c1b2, 0x2c1d2 },
    { L"X-Ism Kick Super Trail Light", 0x2c1d2, 0x2c1f2, indexCPS2_Ryu, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c1f2, 0x2c212, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMP[] =
{
    { L"A-Ism Punch", 0x2c212, 0x2c232, indexCPS2_Ryu, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c232, 0x2c252, indexCPS2_Ryu, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2c252, 0x2c272 },
    { L"A-Ism Punch Super Trail Light", 0x2c272, 0x2c292, indexCPS2_Ryu, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2c292, 0x2c2b2, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMK[] =
{
    { L"A-Ism Kick", 0x2c2b2, 0x2c2d2, indexCPS2_Ryu, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2c2d2, 0x2c2f2, indexCPS2_Ryu, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2c2f2, 0x2c312 },
    { L"A-Ism Kick Super Trail Light", 0x2c312, 0x2c332, indexCPS2_Ryu, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2c332, 0x2c352, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMP[] =
{
    { L"V-Ism Punch", 0x2c352, 0x2c372, indexCPS2_Ryu, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2c372, 0x2c392, indexCPS2_Ryu, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2c392, 0x2c3b2 },
    { L"V-Ism Punch Super Trail Light", 0x2c3b2, 0x2c3d2, indexCPS2_Ryu, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2c3d2, 0x2c3f2, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMK[] =
{
    { L"V-Ism Kick", 0x2c3f2, 0x2c412, indexCPS2_Ryu, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2c412, 0x2c432, indexCPS2_Ryu, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2c432, 0x2c452 },
    { L"V-Ism Kick Super Trail Light", 0x2c452, 0x2c472, indexCPS2_Ryu, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2c472, 0x2c492, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_STATUS[] =
{
    { L"Burned 1", 0x32a12 + 0x00, 0x32a12 + 0x20, indexCPS2_Ryu },
    { L"Burned 2", 0x32a12 + 0x20, 0x32a12 + 0x40, indexCPS2_Ryu },
    { L"Psycho Crusher Burned 1", 0x32a12 + 0x40, 0x32a12 + 0x60, indexCPS2_Ryu },
    { L"Psycho Crusher Burned 2", 0x32a12 + 0x60, 0x32a12 + 0x80, indexCPS2_Ryu },
    { L"V-Ism P1 After Effect 1", 0x32a12 + 0x80, 0x32a12 + 0xA0, indexCPS2_Ryu },
    { L"V-Ism P1 After Effect 2", 0x32a12 + 0xA0, 0x32a12 + 0xC0, indexCPS2_Ryu },
    { L"V-Ism P2 After Effect 1", 0x32a12 + 0xC0, 0x32a12 + 0xE0, indexCPS2_Ryu },
    { L"V-Ism P2 After Effect 2", 0x32a12 + 0xe0, 0x32a12 + 0x100, indexCPS2_Ryu },
    { L"X-Ism Punch Zapped", 0x32a12 + 0x100, 0x32a12 + 0x120, indexCPS2_Ryu },
    { L"X-Ism Kick Zapped", 0x32a12 + 0x120, 0x32a12 + 0x140, indexCPS2_Ryu },
    { L"A-Ism Punch Zapped", 0x32a12 + 0x140, 0x32a12 + 0x160, indexCPS2_Ryu },
    { L"A-Ism Kick Zapped", 0x32a12 + 0x160, 0x32a12 + 0x180, indexCPS2_Ryu },
    { L"V-Ism Punch Zapped", 0x32a12 + 0x180, 0x32a12 + 0x1A0, indexCPS2_Ryu },
    { L"V-Ism Kick Zapped", 0x32a12 + 0x1A0, 0x32a12 + 0x1C0, indexCPS2_Ryu },
    { L"Zapped Skeleton", 0x32a12 + 0x1C0, 0x32a12 + 0x1E0, indexCPS2_Ryu },
    { L"X-Ism Punch Mash", 0x32a12 + 0x1e0, 0x32a12 + 0x200, indexCPS2_Ryu },
    { L"X-Ism Kick Mash", 0x32a12 + 0x200, 0x32a12 + 0x220, indexCPS2_Ryu },
    { L"A-Ism Punch Mash", 0x32a12 + 0x220, 0x32a12 + 0x240, indexCPS2_Ryu },
    { L"A-Ism Kick Mash", 0x32a12 + 0x240, 0x32a12 + 0x260, indexCPS2_Ryu },
    { L"V-Ism Punch Mash", 0x32a12 + 0x260, 0x32a12 + 0x280, indexCPS2_Ryu },
    { L"V-Ism Kick Mash", 0x32a12 + 0x280, 0x32a12 + 0x2A0, indexCPS2_Ryu },
    { L"Priority Win", 0x32a12 + 0x2A0, 0x32a12 + 0x2C0, indexCPS2_Ryu },
    { L"Damage Reduction", 0x32a12 + 0x2C0, 0x32a12 + 0x2E0, indexCPS2_Ryu },
    { L"Just Defend", 0x32a12 + 0x2e0, 0x32a12 + 0x300, indexCPS2_Ryu },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMP[] =
{
    { L"X-Ism Punch", 0x2c492, 0x2c4b2, indexCPS2_Ken, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c4b2, 0x2c4d2, indexCPS2_Ken, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2c4d2, 0x2c4f2, indexCPS2_Ken, 0x08 },
    { L"X-Ism Punch Super Trail Light", 0x2c4f2, 0x2c512, indexCPS2_Ken, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c512, 0x2c532, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMK[] =
{
    { L"X-Ism Kick", 0x2c532, 0x2c552, indexCPS2_Ken, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c552, 0x2c572, indexCPS2_Ken, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2c572, 0x2c592, indexCPS2_Ken, 0x08 },
    { L"X-Ism Kick Super Trail Light", 0x2c592, 0x2c5b2, indexCPS2_Ken, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c5b2, 0x2c5d2, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMP[] =
{
    { L"A-Ism Punch", 0x2c5d2, 0x2c5f2, indexCPS2_Ken, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c5f2, 0x2c612, indexCPS2_Ken, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2c612, 0x2c632, indexCPS2_Ken, 0x08 },
    { L"A-Ism Punch Super Trail Light", 0x2c632, 0x2c652, indexCPS2_Ken, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2c652, 0x2c672, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMK[] =
{
    { L"A-Ism Kick", 0x2c672, 0x2c692, indexCPS2_Ken, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2c692, 0x2c6b2, indexCPS2_Ken, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2c6b2, 0x2c6d2, indexCPS2_Ken, 0x08 },
    { L"A-Ism Kick Super Trail Light", 0x2c6d2, 0x2c6f2, indexCPS2_Ken, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2c6f2, 0x2c712, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMP[] =
{
    { L"V-Ism Punch", 0x2c712, 0x2c732, indexCPS2_Ken, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2c732, 0x2c752, indexCPS2_Ken, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2c752, 0x2c772, indexCPS2_Ken, 0x08 },
    { L"V-Ism Punch Super Trail Light", 0x2c772, 0x2c792, indexCPS2_Ken, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2c792, 0x2c7b2, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMK[] =
{
    { L"V-Ism Kick", 0x2c7b2, 0x2c7d2, indexCPS2_Ken, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2c7d2, 0x2c7f2, indexCPS2_Ken, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2c7f2, 0x2c812, indexCPS2_Ken, 0x08 },
    { L"V-Ism Kick Super Trail Light", 0x2c812, 0x2c832, indexCPS2_Ken, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2c832, 0x2c852, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_STATUS[] =
{
    { L"Burned 1", 0x32d12 + 0x00, 0x32d12 + 0x20, indexCPS2_Ken },
    { L"Burned 2", 0x32d12 + 0x20, 0x32d12 + 0x40, indexCPS2_Ken },
    { L"Psycho Crusher Burned 1", 0x32d12 + 0x40, 0x32d12 + 0x60, indexCPS2_Ken },
    { L"Psycho Crusher Burned 2", 0x32d12 + 0x60, 0x32d12 + 0x80, indexCPS2_Ken },
    { L"V-Ism P1 After Effect 1", 0x32d12 + 0x80, 0x32d12 + 0xA0, indexCPS2_Ken },
    { L"V-Ism P1 After Effect 2", 0x32d12 + 0xA0, 0x32d12 + 0xC0, indexCPS2_Ken },
    { L"V-Ism P2 After Effect 1", 0x32d12 + 0xC0, 0x32d12 + 0xE0, indexCPS2_Ken },
    { L"V-Ism P2 After Effect 2", 0x32d12 + 0xe0, 0x32d12 + 0x100, indexCPS2_Ken },
    { L"X-Ism Punch Zapped", 0x32d12 + 0x100, 0x32d12 + 0x120, indexCPS2_Ken },
    { L"X-Ism Kick Zapped", 0x32d12 + 0x120, 0x32d12 + 0x140, indexCPS2_Ken },
    { L"A-Ism Punch Zapped", 0x32d12 + 0x140, 0x32d12 + 0x160, indexCPS2_Ken },
    { L"A-Ism Kick Zapped", 0x32d12 + 0x160, 0x32d12 + 0x180, indexCPS2_Ken },
    { L"V-Ism Punch Zapped", 0x32d12 + 0x180, 0x32d12 + 0x1A0, indexCPS2_Ken },
    { L"V-Ism Kick Zapped", 0x32d12 + 0x1A0, 0x32d12 + 0x1C0, indexCPS2_Ken },
    { L"Zapped Skeleton", 0x32d12 + 0x1C0, 0x32d12 + 0x1E0, indexCPS2_Ken },
    { L"X-Ism Punch Mash", 0x32d12 + 0x1e0, 0x32d12 + 0x200, indexCPS2_Ken },
    { L"X-Ism Kick Mash", 0x32d12 + 0x200, 0x32d12 + 0x220, indexCPS2_Ken },
    { L"A-Ism Punch Mash", 0x32d12 + 0x220, 0x32d12 + 0x240, indexCPS2_Ken },
    { L"A-Ism Kick Mash", 0x32d12 + 0x240, 0x32d12 + 0x260, indexCPS2_Ken },
    { L"V-Ism Punch Mash", 0x32d12 + 0x260, 0x32d12 + 0x280, indexCPS2_Ken },
    { L"V-Ism Kick Mash", 0x32d12 + 0x280, 0x32d12 + 0x2A0, indexCPS2_Ken },
    { L"Priority Win", 0x32d12 + 0x2A0, 0x32d12 + 0x2C0, indexCPS2_Ken },
    { L"Damage Reduction", 0x32d12 + 0x2C0, 0x32d12 + 0x2E0, indexCPS2_Ken },
    { L"Just Defend", 0x32d12 + 0x2e0, 0x32d12 + 0x300, indexCPS2_Ken },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMP[] =
{
    { L"X-Ism Punch", 0x2c852, 0x2c872, indexCPS2_Akuma, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2c872, 0x2c892, indexCPS2_Akuma, 0x0c },
    { L"X-Ism Punch Extra 2", 0x2c892, 0x2c8b2 },
    { L"X-Ism Punch Super Trail Light", 0x2c8b2, 0x2c8d2, indexCPS2_Akuma, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2c8d2, 0x2c8f2, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMK[] =
{
    { L"X-Ism Kick", 0x2c8f2, 0x2c912, indexCPS2_Akuma, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2c912, 0x2c932, indexCPS2_Akuma, 0x0c },
    { L"X-Ism Kick Extra 2", 0x2c932, 0x2c952 },
    { L"X-Ism Kick Super Trail Light", 0x2c952, 0x2c972, indexCPS2_Akuma, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2c972, 0x2c992, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMP[] =
{
    { L"A-Ism Punch", 0x2c992, 0x2c9b2, indexCPS2_Akuma, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2c9b2, 0x2c9d2, indexCPS2_Akuma, 0x0c },
    { L"A-Ism Punch Extra 2", 0x2c9d2, 0x2c9f2 },
    { L"A-Ism Punch Super Trail Light", 0x2c9f2, 0x2ca12, indexCPS2_Akuma, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ca12, 0x2ca32, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMK[] =
{
    { L"A-Ism Kick", 0x2ca32, 0x2ca52, indexCPS2_Akuma, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2ca52, 0x2ca72, indexCPS2_Akuma, 0x0c },
    { L"A-Ism Kick Extra 2", 0x2ca72, 0x2ca92 },
    { L"A-Ism Kick Super Trail Light", 0x2ca92, 0x2cab2, indexCPS2_Akuma, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2cab2, 0x2cad2, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMP[] =
{
    { L"V-Ism Punch", 0x2cad2, 0x2caf2, indexCPS2_Akuma, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2caf2, 0x2cb12, indexCPS2_Akuma, 0x0c },
    { L"V-Ism Punch Extra 2", 0x2cb12, 0x2cb32 },
    { L"V-Ism Punch Super Trail Light", 0x2cb32, 0x2cb52, indexCPS2_Akuma, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2cb52, 0x2cb72, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMK[] =
{
    { L"V-Ism Kick", 0x2cb72, 0x2cb92, indexCPS2_Akuma, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2cb92, 0x2cbb2, indexCPS2_Akuma, 0x0c },
    { L"V-Ism Kick Extra 2", 0x2cbb2, 0x2cbd2 },
    { L"V-Ism Kick Super Trail Light", 0x2cbd2, 0x2cbf2, indexCPS2_Akuma, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2cbf2, 0x2cc12, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_STATUS[] =
{
    { L"Burned 1", 0x33012 + 0x00, 0x33012 + 0x20, indexCPS2_Akuma },
    { L"Burned 2", 0x33012 + 0x20, 0x33012 + 0x40, indexCPS2_Akuma },
    { L"Psycho Crusher Burned 1", 0x33012 + 0x40, 0x33012 + 0x60, indexCPS2_Akuma },
    { L"Psycho Crusher Burned 2", 0x33012 + 0x60, 0x33012 + 0x80, indexCPS2_Akuma },
    { L"V-Ism P1 After Effect 1", 0x33012 + 0x80, 0x33012 + 0xA0, indexCPS2_Akuma },
    { L"V-Ism P1 After Effect 2", 0x33012 + 0xA0, 0x33012 + 0xC0, indexCPS2_Akuma },
    { L"V-Ism P2 After Effect 1", 0x33012 + 0xC0, 0x33012 + 0xE0, indexCPS2_Akuma },
    { L"V-Ism P2 After Effect 2", 0x33012 + 0xe0, 0x33012 + 0x100, indexCPS2_Akuma },
    { L"X-Ism Punch Zapped", 0x33012 + 0x100, 0x33012 + 0x120, indexCPS2_Akuma },
    { L"X-Ism Kick Zapped", 0x33012 + 0x120, 0x33012 + 0x140, indexCPS2_Akuma },
    { L"A-Ism Punch Zapped", 0x33012 + 0x140, 0x33012 + 0x160, indexCPS2_Akuma },
    { L"A-Ism Kick Zapped", 0x33012 + 0x160, 0x33012 + 0x180, indexCPS2_Akuma },
    { L"V-Ism Punch Zapped", 0x33012 + 0x180, 0x33012 + 0x1A0, indexCPS2_Akuma },
    { L"V-Ism Kick Zapped", 0x33012 + 0x1A0, 0x33012 + 0x1C0, indexCPS2_Akuma },
    { L"Zapped Skeleton", 0x33012 + 0x1C0, 0x33012 + 0x1E0, indexCPS2_Akuma },
    { L"X-Ism Punch Mash", 0x33012 + 0x1e0, 0x33012 + 0x200, indexCPS2_Akuma },
    { L"X-Ism Kick Mash", 0x33012 + 0x200, 0x33012 + 0x220, indexCPS2_Akuma },
    { L"A-Ism Punch Mash", 0x33012 + 0x220, 0x33012 + 0x240, indexCPS2_Akuma },
    { L"A-Ism Kick Mash", 0x33012 + 0x240, 0x33012 + 0x260, indexCPS2_Akuma },
    { L"V-Ism Punch Mash", 0x33012 + 0x260, 0x33012 + 0x280, indexCPS2_Akuma },
    { L"V-Ism Kick Mash", 0x33012 + 0x280, 0x33012 + 0x2A0, indexCPS2_Akuma },
    { L"Priority Win", 0x33012 + 0x2A0, 0x33012 + 0x2C0, indexCPS2_Akuma },
    { L"Damage Reduction", 0x33012 + 0x2C0, 0x33012 + 0x2E0, indexCPS2_Akuma },
    { L"Just Defend", 0x33012 + 0x2e0, 0x33012 + 0x300, indexCPS2_Akuma },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMP[] =
{
    { L"X-Ism Punch", 0x2cc12, 0x2cc32, indexCPS2_Charlie, 0x00 },
    { L"X-Ism Punch Sonic Boom", 0x2cc32, 0x2cc52, indexCPS2_Charlie, 0x01 },
    { L"X-Ism Punch Flash Kick", 0x2cc52, 0x2cc72, indexCPS2_Charlie, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2cc72, 0x2cc92, indexCPS2_Charlie, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2cc92, 0x2ccb2, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMK[] =
{
    { L"X-Ism Kick", 0x2ccb2, 0x2ccd2, indexCPS2_Charlie, 0x00 },
    { L"X-Ism Kick Sonic Boom", 0x2ccd2, 0x2ccf2, indexCPS2_Charlie, 0x01 },
    { L"X-Ism Kick Flash Kick", 0x2ccf2, 0x2cd12, indexCPS2_Charlie, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2cd12, 0x2cd32, indexCPS2_Charlie, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2cd32, 0x2cd52, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMP[] =
{
    { L"A-Ism Punch", 0x2cd52, 0x2cd72, indexCPS2_Charlie, 0x00 },
    { L"A-Ism Punch Sonic Boom", 0x2cd72, 0x2cd92, indexCPS2_Charlie, 0x01 },
    { L"A-Ism Punch Flash Kick", 0x2cd92, 0x2cdb2, indexCPS2_Charlie, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2cdb2, 0x2cdd2, indexCPS2_Charlie, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2cdd2, 0x2cdf2, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMK[] =
{
    { L"A-Ism Kick", 0x2cdf2, 0x2ce12, indexCPS2_Charlie, 0x00 },
    { L"A-Ism Kick Sonic Boom", 0x2ce12, 0x2ce32, indexCPS2_Charlie, 0x01 },
    { L"A-Ism Kick Flash Kick", 0x2ce32, 0x2ce52, indexCPS2_Charlie, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2ce52, 0x2ce72, indexCPS2_Charlie, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ce72, 0x2ce92, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMP[] =
{
    { L"V-Ism Punch", 0x2ce92, 0x2ceb2, indexCPS2_Charlie, 0x00 },
    { L"V-Ism Punch Sonic Boom", 0x2ceb2, 0x2ced2, indexCPS2_Charlie, 0x01 },
    { L"V-Ism Punch Flash Kick", 0x2ced2, 0x2cef2, indexCPS2_Charlie, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2cef2, 0x2cf12, indexCPS2_Charlie, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2cf12, 0x2cf32, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMK[] =
{
    { L"V-Ism Kick", 0x2cf32, 0x2cf52, indexCPS2_Charlie, 0x00 },
    { L"V-Ism Kick Sonic Boom", 0x2cf52, 0x2cf72, indexCPS2_Charlie, 0x01 },
    { L"V-Ism Kick Flash Kick", 0x2cf72, 0x2cf92, indexCPS2_Charlie, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2cf92, 0x2cfb2, indexCPS2_Charlie, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2cfb2, 0x2cfd2, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_STATUS[] =
{
    { L"Burned 1", 0x33312 + 0x00, 0x33312 + 0x20, indexCPS2_Charlie },
    { L"Burned 2", 0x33312 + 0x20, 0x33312 + 0x40, indexCPS2_Charlie },
    { L"Psycho Crusher Burned 1", 0x33312 + 0x40, 0x33312 + 0x60, indexCPS2_Charlie },
    { L"Psycho Crusher Burned 2", 0x33312 + 0x60, 0x33312 + 0x80, indexCPS2_Charlie },
    { L"V-Ism P1 After Effect 1", 0x33312 + 0x80, 0x33312 + 0xA0, indexCPS2_Charlie },
    { L"V-Ism P1 After Effect 2", 0x33312 + 0xA0, 0x33312 + 0xC0, indexCPS2_Charlie },
    { L"V-Ism P2 After Effect 1", 0x33312 + 0xC0, 0x33312 + 0xE0, indexCPS2_Charlie },
    { L"V-Ism P2 After Effect 2", 0x33312 + 0xe0, 0x33312 + 0x100, indexCPS2_Charlie },
    { L"X-Ism Punch Zapped", 0x33312 + 0x100, 0x33312 + 0x120, indexCPS2_Charlie },
    { L"X-Ism Kick Zapped", 0x33312 + 0x120, 0x33312 + 0x140, indexCPS2_Charlie },
    { L"A-Ism Punch Zapped", 0x33312 + 0x140, 0x33312 + 0x160, indexCPS2_Charlie },
    { L"A-Ism Kick Zapped", 0x33312 + 0x160, 0x33312 + 0x180, indexCPS2_Charlie },
    { L"V-Ism Punch Zapped", 0x33312 + 0x180, 0x33312 + 0x1A0, indexCPS2_Charlie },
    { L"V-Ism Kick Zapped", 0x33312 + 0x1A0, 0x33312 + 0x1C0, indexCPS2_Charlie },
    { L"Zapped Skeleton", 0x33312 + 0x1C0, 0x33312 + 0x1E0, indexCPS2_Charlie },
    { L"X-Ism Punch Mash", 0x33312 + 0x1e0, 0x33312 + 0x200, indexCPS2_Charlie },
    { L"X-Ism Kick Mash", 0x33312 + 0x200, 0x33312 + 0x220, indexCPS2_Charlie },
    { L"A-Ism Punch Mash", 0x33312 + 0x220, 0x33312 + 0x240, indexCPS2_Charlie },
    { L"A-Ism Kick Mash", 0x33312 + 0x240, 0x33312 + 0x260, indexCPS2_Charlie },
    { L"V-Ism Punch Mash", 0x33312 + 0x260, 0x33312 + 0x280, indexCPS2_Charlie },
    { L"V-Ism Kick Mash", 0x33312 + 0x280, 0x33312 + 0x2A0, indexCPS2_Charlie },
    { L"Priority Win", 0x33312 + 0x2A0, 0x33312 + 0x2C0, indexCPS2_Charlie },
    { L"Damage Reduction", 0x33312 + 0x2C0, 0x33312 + 0x2E0, indexCPS2_Charlie },
    { L"Just Defend", 0x33312 + 0x2e0, 0x33312 + 0x300, indexCPS2_Charlie },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_XISMP[] =
{
    { L"X-Ism Punch", 0x2cfd2, 0x2cff2, indexCPS2_ChunLi, 0x00, &pairNext },
    { L"X-Ism Punch Keiokuken (shades)", 0x2cff2, 0x2d012, indexCPS2_ChunLi, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2d012, 0x2d032, indexCPS2_ChunLi, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2d032, 0x2d052, indexCPS2_ChunLi, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d052, 0x2d072, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_XISMK[] =
{
    { L"X-Ism Kick", 0x2d072, 0x2d092, indexCPS2_ChunLi, 0x00, &pairNext },
    { L"X-Ism Kick Keiokuken (shades)", 0x2d092, 0x2d0b2, indexCPS2_ChunLi, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2d0b2, 0x2d0d2, indexCPS2_ChunLi, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2d0d2, 0x2d0f2, indexCPS2_ChunLi, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d0f2, 0x2d112, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMP[] =
{
    { L"A-Ism Punch", 0x2d112, 0x2d132, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Punch Keiokuken (shades)", 0x2d132, 0x2d152, indexCPS2_ChunLi, 0x0F },
    { L"A-Ism Punch Extra 2", 0x2d152, 0x2d172, indexCPS2_ChunLi, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2d172, 0x2d192, indexCPS2_ChunLi, 0x0c },
    { L"A-Ism Punch Super Trail Dark", 0x2d192, 0x2d1b2, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMK[] =
{
    { L"A-Ism Kick", 0x2d1b2, 0x2d1d2, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"A-Ism Kick Keiokuken (shades)", 0x2d1d2, 0x2d1f2, indexCPS2_ChunLi, 0x0F },
    { L"A-Ism Kick Extra 2", 0x2d1f2, 0x2d212, indexCPS2_ChunLi, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2d212, 0x2d232, indexCPS2_ChunLi, 0x0c },
    { L"A-Ism Kick Super Trail Dark", 0x2d232, 0x2d252, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMP[] =
{
    { L"V-Ism Punch", 0x2d252, 0x2d272, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Punch Keiokuken (shades)", 0x2d272, 0x2d292, indexCPS2_ChunLi, 0x0F },
    { L"V-Ism Punch Extra 2", 0x2d292, 0x2d2b2, indexCPS2_ChunLi, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2d2b2, 0x2d2d2, indexCPS2_ChunLi, 0x0c },
    { L"V-Ism Punch Super Trail Dark", 0x2d2d2, 0x2d2f2, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMK[] =
{
    { L"V-Ism Kick", 0x2d2f2, 0x2d312, indexCPS2_ChunLi, 0x0c, &pairNext },
    { L"V-Ism Kick Keiokuken (shades)", 0x2d312, 0x2d332, indexCPS2_ChunLi, 0x0F },
    { L"V-Ism Kick Extra 2", 0x2d332, 0x2d352, indexCPS2_ChunLi, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2d352, 0x2d372, indexCPS2_ChunLi, 0x0c },
    { L"V-Ism Kick Super Trail Dark", 0x2d372, 0x2d392, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_STATUS[] =
{
    { L"Burned 1", 0x33612 + 0x00, 0x33612 + 0x20, indexCPS2_ChunLi },
    { L"Burned 2", 0x33612 + 0x20, 0x33612 + 0x40, indexCPS2_ChunLi },
    { L"Psycho Crusher Burned 1", 0x33612 + 0x40, 0x33612 + 0x60, indexCPS2_ChunLi },
    { L"Psycho Crusher Burned 2", 0x33612 + 0x60, 0x33612 + 0x80, indexCPS2_ChunLi },
    { L"V-Ism P1 After Effect 1", 0x33612 + 0x80, 0x33612 + 0xA0, indexCPS2_ChunLi },
    { L"V-Ism P1 After Effect 2", 0x33612 + 0xA0, 0x33612 + 0xC0, indexCPS2_ChunLi },
    { L"V-Ism P2 After Effect 1", 0x33612 + 0xC0, 0x33612 + 0xE0, indexCPS2_ChunLi },
    { L"V-Ism P2 After Effect 2", 0x33612 + 0xe0, 0x33612 + 0x100, indexCPS2_ChunLi },
    { L"X-Ism Punch Zapped", 0x33612 + 0x100, 0x33612 + 0x120, indexCPS2_ChunLi },
    { L"X-Ism Kick Zapped", 0x33612 + 0x120, 0x33612 + 0x140, indexCPS2_ChunLi },
    { L"A-Ism Punch Zapped", 0x33612 + 0x140, 0x33612 + 0x160, indexCPS2_ChunLi, 0x0C },
    { L"A-Ism Kick Zapped", 0x33612 + 0x160, 0x33612 + 0x180, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Punch Zapped", 0x33612 + 0x180, 0x33612 + 0x1A0, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Kick Zapped", 0x33612 + 0x1A0, 0x33612 + 0x1C0, indexCPS2_ChunLi, 0x0C },
    { L"Zapped Skeleton", 0x33612 + 0x1C0, 0x33612 + 0x1E0, indexCPS2_ChunLi },
    { L"X-Ism Punch Mash", 0x33612 + 0x1e0, 0x33612 + 0x200, indexCPS2_ChunLi },
    { L"X-Ism Kick Mash", 0x33612 + 0x200, 0x33612 + 0x220, indexCPS2_ChunLi },
    { L"A-Ism Punch Mash", 0x33612 + 0x220, 0x33612 + 0x240, indexCPS2_ChunLi, 0x0C },
    { L"A-Ism Kick Mash", 0x33612 + 0x240, 0x33612 + 0x260, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Punch Mash", 0x33612 + 0x260, 0x33612 + 0x280, indexCPS2_ChunLi, 0x0C },
    { L"V-Ism Kick Mash", 0x33612 + 0x280, 0x33612 + 0x2A0, indexCPS2_ChunLi, 0x0C },
    { L"Priority Win", 0x33612 + 0x2A0, 0x33612 + 0x2C0, indexCPS2_ChunLi },
    { L"Damage Reduction", 0x33612 + 0x2C0, 0x33612 + 0x2E0, indexCPS2_ChunLi },
    { L"Just Defend", 0x33612 + 0x2e0, 0x33612 + 0x300, indexCPS2_ChunLi },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMP[] =
{
    { L"X-Ism Punch", 0x2d392, 0x2d3b2, indexCPS2_Adon, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2d3b2, 0x2d3d2 },
    { L"X-Ism Punch Extra 2", 0x2d3d2, 0x2d3f2 },
    { L"X-Ism Punch Super Trail Light", 0x2d3f2, 0x2d412, indexCPS2_Adon, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d412, 0x2d432, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMK[] =
{
    { L"X-Ism Kick", 0x2d432, 0x2d452, indexCPS2_Adon, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2d452, 0x2d472 },
    { L"X-Ism Kick Extra 2", 0x2d472, 0x2d492 },
    { L"X-Ism Kick Super Trail Light", 0x2d492, 0x2d4b2, indexCPS2_Adon, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d4b2, 0x2d4d2, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMP[] =
{
    { L"A-Ism Punch", 0x2d4d2, 0x2d4f2, indexCPS2_Adon, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2d4f2, 0x2d512 },
    { L"A-Ism Punch Extra 2", 0x2d512, 0x2d532 },
    { L"A-Ism Punch Super Trail Light", 0x2d532, 0x2d552, indexCPS2_Adon, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2d552, 0x2d572, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMK[] =
{
    { L"A-Ism Kick", 0x2d572, 0x2d592, indexCPS2_Adon, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2d592, 0x2d5b2 },
    { L"A-Ism Kick Extra 2", 0x2d5b2, 0x2d5d2 },
    { L"A-Ism Kick Super Trail Light", 0x2d5d2, 0x2d5f2, indexCPS2_Adon, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2d5f2, 0x2d612, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMP[] =
{
    { L"V-Ism Punch", 0x2d612, 0x2d632, indexCPS2_Adon, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2d632, 0x2d652 },
    { L"V-Ism Punch Extra 2", 0x2d652, 0x2d672 },
    { L"V-Ism Punch Super Trail Light", 0x2d672, 0x2d692, indexCPS2_Adon, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2d692, 0x2d6b2, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMK[] =
{
    { L"V-Ism Kick", 0x2d6b2, 0x2d6d2, indexCPS2_Adon, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2d6d2, 0x2d6f2 },
    { L"V-Ism Kick Extra 2", 0x2d6f2, 0x2d712 },
    { L"V-Ism Kick Super Trail Light", 0x2d712, 0x2d732, indexCPS2_Adon, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2d732, 0x2d752, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_STATUS[] =
{
    { L"Burned 1", 0x339f2 + 0x00, 0x339f2 + 0x20, indexCPS2_Adon },
    { L"Burned 2", 0x339f2 + 0x20, 0x339f2 + 0x40, indexCPS2_Adon },
    { L"Psycho Crusher Burned 1", 0x339f2 + 0x40, 0x339f2 + 0x60, indexCPS2_Adon },
    { L"Psycho Crusher Burned 2", 0x339f2 + 0x60, 0x339f2 + 0x80, indexCPS2_Adon },
    { L"V-Ism P1 After Effect 1", 0x339f2 + 0x80, 0x339f2 + 0xA0, indexCPS2_Adon },
    { L"V-Ism P1 After Effect 2", 0x339f2 + 0xA0, 0x339f2 + 0xC0, indexCPS2_Adon },
    { L"V-Ism P2 After Effect 1", 0x339f2 + 0xC0, 0x339f2 + 0xE0, indexCPS2_Adon },
    { L"V-Ism P2 After Effect 2", 0x339f2 + 0xe0, 0x339f2 + 0x100, indexCPS2_Adon },
    { L"X-Ism Punch Zapped", 0x339f2 + 0x100, 0x339f2 + 0x120, indexCPS2_Adon },
    { L"X-Ism Kick Zapped", 0x339f2 + 0x120, 0x339f2 + 0x140, indexCPS2_Adon },
    { L"A-Ism Punch Zapped", 0x339f2 + 0x140, 0x339f2 + 0x160, indexCPS2_Adon },
    { L"A-Ism Kick Zapped", 0x339f2 + 0x160, 0x339f2 + 0x180, indexCPS2_Adon },
    { L"V-Ism Punch Zapped", 0x339f2 + 0x180, 0x339f2 + 0x1A0, indexCPS2_Adon },
    { L"V-Ism Kick Zapped", 0x339f2 + 0x1A0, 0x339f2 + 0x1C0, indexCPS2_Adon },
    { L"Zapped Skeleton", 0x339f2 + 0x1C0, 0x339f2 + 0x1E0, indexCPS2_Adon },
    { L"X-Ism Punch Mash", 0x339f2 + 0x1e0, 0x339f2 + 0x200, indexCPS2_Adon },
    { L"X-Ism Kick Mash", 0x339f2 + 0x200, 0x339f2 + 0x220, indexCPS2_Adon },
    { L"A-Ism Punch Mash", 0x339f2 + 0x220, 0x339f2 + 0x240, indexCPS2_Adon },
    { L"A-Ism Kick Mash", 0x339f2 + 0x240, 0x339f2 + 0x260, indexCPS2_Adon },
    { L"V-Ism Punch Mash", 0x339f2 + 0x260, 0x339f2 + 0x280, indexCPS2_Adon },
    { L"V-Ism Kick Mash", 0x339f2 + 0x280, 0x339f2 + 0x2A0, indexCPS2_Adon },
    { L"Priority Win", 0x339f2 + 0x2A0, 0x339f2 + 0x2C0, indexCPS2_Adon },
    { L"Damage Reduction", 0x339f2 + 0x2C0, 0x339f2 + 0x2E0, indexCPS2_Adon },
    { L"Just Defend", 0x339f2 + 0x2e0, 0x339f2 + 0x300, indexCPS2_Adon },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMP[] =
{
    { L"X-Ism Punch", 0x2d752, 0x2d772, indexCPS2_Sodom, 0x00 },
    { L"X-Ism Punch Swords", 0x02D772, 0x02D792, indexCPS2_Sodom, 0x04 },
    { L"X-Ism Punch Intro", 0x2d792, 0x2d7b2, indexCPS2_Sodom, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x2d7b2, 0x2d7d2, indexCPS2_Sodom, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2d7d2, 0x2d7f2, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMK[] =
{
    { L"X-Ism Kick", 0x2d7f2, 0x2d812, indexCPS2_Sodom, 0x00 },
    { L"X-Ism Kick Swords", 0x02D812, 0x02D832, indexCPS2_Sodom, 0x04 },
    { L"X-Ism Kick Intro", 0x2d832, 0x2d852, indexCPS2_Sodom, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x2d852, 0x2d872, indexCPS2_Sodom, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2d872, 0x2d892, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMP[] =
{
    { L"A-Ism Punch", 0x2d892, 0x2d8b2, indexCPS2_Sodom, 0x01 },
    { L"A-Ism Punch Slashes", 0x02D8B2, 0x02D8D2, indexCPS2_Sodom, 0x04 },
    { L"A-Ism Punch Intro", 0x2d8d2, 0x2d8f2, indexCPS2_Sodom, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x2d8f2, 0x2d912, indexCPS2_Sodom, 0x01 },
    { L"A-Ism Punch Super Trail Dark", 0x2d912, 0x2d932, indexCPS2_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMK[] =
{
    { L"A-Ism Kick", 0x2d932, 0x2d952, indexCPS2_Sodom, 0x01 },
    { L"A-Ism Kick Slashes", 0x02D952, 0x02D972, indexCPS2_Sodom, 0x04 },
    { L"A-Ism Kick Intro", 0x2d972, 0x2d992, indexCPS2_Sodom, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x2d992, 0x2d9b2, indexCPS2_Sodom, 0x01 },
    { L"A-Ism Kick Super Trail Dark", 0x2d9b2, 0x2d9d2, indexCPS2_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMP[] =
{
    { L"V-Ism Punch", 0x2d9d2, 0x2d9f2, indexCPS2_Sodom, 0x01 },
    { L"V-Ism Punch Slashes", 0x02D9F2, 0x02DA12, indexCPS2_Sodom, 0x04 },
    { L"V-Ism Punch Intro", 0x2da12, 0x2da32, indexCPS2_Sodom, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x2da32, 0x2da52, indexCPS2_Sodom, 0x01 },
    { L"V-Ism Punch Super Trail Dark", 0x2da52, 0x2da72, indexCPS2_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMK[] =
{
    { L"V-Ism Kick", 0x2da72, 0x2da92, indexCPS2_Sodom, 0x01 },
    { L"V-Ism Kick Slashes", 0x02DA92, 0x02DAB2, indexCPS2_Sodom, 0x04 },
    { L"V-Ism Kick Intro", 0x2dab2, 0x2dad2, indexCPS2_Sodom, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x2dad2, 0x2daf2, indexCPS2_Sodom, 0x01 },
    { L"V-Ism Kick Super Trail Dark", 0x2daf2, 0x2db12, indexCPS2_Sodom, 0x01 },
};

const sGame_PaletteDataset SFA3_A_SODOM_STATUS[] =
{
    { L"Burned 1", 0x33cf2 + 0x00, 0x33cf2 + 0x20, indexCPS2_Sodom },
    { L"Burned 2", 0x33cf2 + 0x20, 0x33cf2 + 0x40, indexCPS2_Sodom },
    { L"Psycho Crusher Burned 1", 0x33cf2 + 0x40, 0x33cf2 + 0x60, indexCPS2_Sodom },
    { L"Psycho Crusher Burned 2", 0x33cf2 + 0x60, 0x33cf2 + 0x80, indexCPS2_Sodom },
    { L"V-Ism P1 After Effect 1", 0x33cf2 + 0x80, 0x33cf2 + 0xA0, indexCPS2_Sodom },
    { L"V-Ism P1 After Effect 2", 0x33cf2 + 0xA0, 0x33cf2 + 0xC0, indexCPS2_Sodom },
    { L"V-Ism P2 After Effect 1", 0x33cf2 + 0xC0, 0x33cf2 + 0xE0, indexCPS2_Sodom },
    { L"V-Ism P2 After Effect 2", 0x33cf2 + 0xe0, 0x33cf2 + 0x100, indexCPS2_Sodom },
    { L"X-Ism Punch Zapped", 0x33cf2 + 0x100, 0x33cf2 + 0x120, indexCPS2_Sodom },
    { L"X-Ism Kick Zapped", 0x33cf2 + 0x120, 0x33cf2 + 0x140, indexCPS2_Sodom },
    { L"A-Ism Punch Zapped", 0x33cf2 + 0x140, 0x33cf2 + 0x160, indexCPS2_Sodom },
    { L"A-Ism Kick Zapped", 0x33cf2 + 0x160, 0x33cf2 + 0x180, indexCPS2_Sodom },
    { L"V-Ism Punch Zapped", 0x33cf2 + 0x180, 0x33cf2 + 0x1A0, indexCPS2_Sodom },
    { L"V-Ism Kick Zapped", 0x33cf2 + 0x1A0, 0x33cf2 + 0x1C0, indexCPS2_Sodom },
    { L"Zapped Skeleton", 0x33cf2 + 0x1C0, 0x33cf2 + 0x1E0, indexCPS2_Sodom },
    { L"X-Ism Punch Mash", 0x33cf2 + 0x1e0, 0x33cf2 + 0x200, indexCPS2_Sodom },
    { L"X-Ism Kick Mash", 0x33cf2 + 0x200, 0x33cf2 + 0x220, indexCPS2_Sodom },
    { L"A-Ism Punch Mash", 0x33cf2 + 0x220, 0x33cf2 + 0x240, indexCPS2_Sodom },
    { L"A-Ism Kick Mash", 0x33cf2 + 0x240, 0x33cf2 + 0x260, indexCPS2_Sodom },
    { L"V-Ism Punch Mash", 0x33cf2 + 0x260, 0x33cf2 + 0x280, indexCPS2_Sodom },
    { L"V-Ism Kick Mash", 0x33cf2 + 0x280, 0x33cf2 + 0x2A0, indexCPS2_Sodom },
    { L"Priority Win", 0x33cf2 + 0x2A0, 0x33cf2 + 0x2C0, indexCPS2_Sodom },
    { L"Damage Reduction", 0x33cf2 + 0x2C0, 0x33cf2 + 0x2E0, indexCPS2_Sodom },
    { L"Just Defend", 0x33cf2 + 0x2e0, 0x33cf2 + 0x300, indexCPS2_Sodom },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMP[] =
{
    { L"X-Ism Punch", 0x2db12, 0x2db32, indexCPS2_Guy, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2db32, 0x2db52 },
    { L"X-Ism Punch Extra 2", 0x2db52, 0x2db72 },
    { L"X-Ism Punch Super Trail Light", 0x2db72, 0x2db92, indexCPS2_Guy, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2db92, 0x2dbb2, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMK[] =
{
    { L"X-Ism Kick", 0x2dbb2, 0x2dbd2, indexCPS2_Guy, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2dbd2, 0x2dbf2 },
    { L"X-Ism Kick Extra 2", 0x2dbf2, 0x2dc12 },
    { L"X-Ism Kick Super Trail Light", 0x2dc12, 0x2dc32, indexCPS2_Guy, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2dc32, 0x2dc52, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMP[] =
{
    { L"A-Ism Punch", 0x2dc52, 0x2dc72, indexCPS2_Guy, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2dc72, 0x2dc92 },
    { L"A-Ism Punch Extra 2", 0x2dc92, 0x2dcb2 },
    { L"A-Ism Punch Super Trail Light", 0x2dcb2, 0x2dcd2, indexCPS2_Guy, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2dcd2, 0x2dcf2, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMK[] =
{
    { L"A-Ism Kick", 0x2dcf2, 0x2dd12, indexCPS2_Guy, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2dd12, 0x2dd32 },
    { L"A-Ism Kick Extra 2", 0x2dd32, 0x2dd52 },
    { L"A-Ism Kick Super Trail Light", 0x2dd52, 0x2dd72, indexCPS2_Guy, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2dd72, 0x2dd92, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMP[] =
{
    { L"V-Ism Punch", 0x2dd92, 0x2ddb2, indexCPS2_Guy, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ddb2, 0x2ddd2 },
    { L"V-Ism Punch Extra 2", 0x2ddd2, 0x2ddf2 },
    { L"V-Ism Punch Super Trail Light", 0x2ddf2, 0x2de12, indexCPS2_Guy, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2de12, 0x2de32, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMK[] =
{
    { L"V-Ism Kick", 0x2de32, 0x2de52, indexCPS2_Guy, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2de52, 0x2de72 },
    { L"V-Ism Kick Extra 2", 0x2de72, 0x2de92 },
    { L"V-Ism Kick Super Trail Light", 0x2de92, 0x2deb2, indexCPS2_Guy, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2deb2, 0x2ded2, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_STATUS[] =
{
    { L"Burned 1", 0x34192 + 0x00, 0x34192 + 0x20, indexCPS2_Guy },
    { L"Burned 2", 0x34192 + 0x20, 0x34192 + 0x40, indexCPS2_Guy },
    { L"Psycho Crusher Burned 1", 0x34192 + 0x40, 0x34192 + 0x60, indexCPS2_Guy },
    { L"Psycho Crusher Burned 2", 0x34192 + 0x60, 0x34192 + 0x80, indexCPS2_Guy },
    { L"V-Ism P1 After Effect 1", 0x34192 + 0x80, 0x34192 + 0xA0, indexCPS2_Guy },
    { L"V-Ism P1 After Effect 2", 0x34192 + 0xA0, 0x34192 + 0xC0, indexCPS2_Guy },
    { L"V-Ism P2 After Effect 1", 0x34192 + 0xC0, 0x34192 + 0xE0, indexCPS2_Guy },
    { L"V-Ism P2 After Effect 2", 0x34192 + 0xe0, 0x34192 + 0x100, indexCPS2_Guy },
    { L"X-Ism Punch Zapped", 0x34192 + 0x100, 0x34192 + 0x120, indexCPS2_Guy },
    { L"X-Ism Kick Zapped", 0x34192 + 0x120, 0x34192 + 0x140, indexCPS2_Guy },
    { L"A-Ism Punch Zapped", 0x34192 + 0x140, 0x34192 + 0x160, indexCPS2_Guy },
    { L"A-Ism Kick Zapped", 0x34192 + 0x160, 0x34192 + 0x180, indexCPS2_Guy },
    { L"V-Ism Punch Zapped", 0x34192 + 0x180, 0x34192 + 0x1A0, indexCPS2_Guy },
    { L"V-Ism Kick Zapped", 0x34192 + 0x1A0, 0x34192 + 0x1C0, indexCPS2_Guy },
    { L"Zapped Skeleton", 0x34192 + 0x1C0, 0x34192 + 0x1E0, indexCPS2_Guy },
    { L"X-Ism Punch Mash", 0x34192 + 0x1e0, 0x34192 + 0x200, indexCPS2_Guy },
    { L"X-Ism Kick Mash", 0x34192 + 0x200, 0x34192 + 0x220, indexCPS2_Guy },
    { L"A-Ism Punch Mash", 0x34192 + 0x220, 0x34192 + 0x240, indexCPS2_Guy },
    { L"A-Ism Kick Mash", 0x34192 + 0x240, 0x34192 + 0x260, indexCPS2_Guy },
    { L"V-Ism Punch Mash", 0x34192 + 0x260, 0x34192 + 0x280, indexCPS2_Guy },
    { L"V-Ism Kick Mash", 0x34192 + 0x280, 0x34192 + 0x2A0, indexCPS2_Guy },
    { L"Priority Win", 0x34192 + 0x2A0, 0x34192 + 0x2C0, indexCPS2_Guy },
    { L"Damage Reduction", 0x34192 + 0x2C0, 0x34192 + 0x2E0, indexCPS2_Guy },
    { L"Just Defend", 0x34192 + 0x2e0, 0x34192 + 0x300, indexCPS2_Guy },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMP[] =
{
    { L"X-Ism Punch", 0x2ded2, 0x2def2, indexCPS2_Birdie, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2def2, 0x2df12 },
    { L"X-Ism Punch Extra 2", 0x2df12, 0x2df32 },
    { L"X-Ism Punch Super Trail Light", 0x2df32, 0x2df52, indexCPS2_Birdie, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2df52, 0x2df72, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMK[] =
{
    { L"X-Ism Kick", 0x2df72, 0x2df92, indexCPS2_Birdie, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2df92, 0x2dfb2 },
    { L"X-Ism Kick Extra 2", 0x2dfb2, 0x2dfd2 },
    { L"X-Ism Kick Super Trail Light", 0x2dfd2, 0x2dff2, indexCPS2_Birdie, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2dff2, 0x2e012, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMP[] =
{
    { L"A-Ism Punch", 0x2e012, 0x2e032, indexCPS2_Birdie, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2e032, 0x2e052 },
    { L"A-Ism Punch Extra 2", 0x2e052, 0x2e072 },
    { L"A-Ism Punch Super Trail Light", 0x2e072, 0x2e092, indexCPS2_Birdie, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e092, 0x2e0b2, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMK[] =
{
    { L"A-Ism Kick", 0x2e0b2, 0x2e0d2, indexCPS2_Birdie, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2e0d2, 0x2e0f2 },
    { L"A-Ism Kick Extra 2", 0x2e0f2, 0x2e112 },
    { L"A-Ism Kick Super Trail Light", 0x2e112, 0x2e132, indexCPS2_Birdie, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e132, 0x2e152, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMP[] =
{
    { L"V-Ism Punch", 0x2e152, 0x2e172, indexCPS2_Birdie, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2e172, 0x2e192 },
    { L"V-Ism Punch Extra 2", 0x2e192, 0x2e1b2 },
    { L"V-Ism Punch Super Trail Light", 0x2e1b2, 0x2e1d2, indexCPS2_Birdie, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e1d2, 0x2e1f2, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMK[] =
{
    { L"V-Ism Kick", 0x2e1f2, 0x2e212, indexCPS2_Birdie, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2e212, 0x2e232 },
    { L"V-Ism Kick Extra 2", 0x2e232, 0x2e252 },
    { L"V-Ism Kick Super Trail Light", 0x2e252, 0x2e272, indexCPS2_Birdie, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e272, 0x2e292, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_STATUS[] =
{
    { L"Burned 1", 0x34492 + 0x00, 0x34492 + 0x20, indexCPS2_Birdie },
    { L"Burned 2", 0x34492 + 0x20, 0x34492 + 0x40, indexCPS2_Birdie },
    { L"Psycho Crusher Burned 1", 0x34492 + 0x40, 0x34492 + 0x60, indexCPS2_Birdie },
    { L"Psycho Crusher Burned 2", 0x34492 + 0x60, 0x34492 + 0x80, indexCPS2_Birdie },
    { L"V-Ism P1 After Effect 1", 0x34492 + 0x80, 0x34492 + 0xA0, indexCPS2_Birdie },
    { L"V-Ism P1 After Effect 2", 0x34492 + 0xA0, 0x34492 + 0xC0, indexCPS2_Birdie },
    { L"V-Ism P2 After Effect 1", 0x34492 + 0xC0, 0x34492 + 0xE0, indexCPS2_Birdie },
    { L"V-Ism P2 After Effect 2", 0x34492 + 0xe0, 0x34492 + 0x100, indexCPS2_Birdie },
    { L"X-Ism Punch Zapped", 0x34492 + 0x100, 0x34492 + 0x120, indexCPS2_Birdie },
    { L"X-Ism Kick Zapped", 0x34492 + 0x120, 0x34492 + 0x140, indexCPS2_Birdie },
    { L"A-Ism Punch Zapped", 0x34492 + 0x140, 0x34492 + 0x160, indexCPS2_Birdie },
    { L"A-Ism Kick Zapped", 0x34492 + 0x160, 0x34492 + 0x180, indexCPS2_Birdie },
    { L"V-Ism Punch Zapped", 0x34492 + 0x180, 0x34492 + 0x1A0, indexCPS2_Birdie },
    { L"V-Ism Kick Zapped", 0x34492 + 0x1A0, 0x34492 + 0x1C0, indexCPS2_Birdie },
    { L"Zapped Skeleton", 0x34492 + 0x1C0, 0x34492 + 0x1E0, indexCPS2_Birdie },
    { L"X-Ism Punch Mash", 0x34492 + 0x1e0, 0x34492 + 0x200, indexCPS2_Birdie },
    { L"X-Ism Kick Mash", 0x34492 + 0x200, 0x34492 + 0x220, indexCPS2_Birdie },
    { L"A-Ism Punch Mash", 0x34492 + 0x220, 0x34492 + 0x240, indexCPS2_Birdie },
    { L"A-Ism Kick Mash", 0x34492 + 0x240, 0x34492 + 0x260, indexCPS2_Birdie },
    { L"V-Ism Punch Mash", 0x34492 + 0x260, 0x34492 + 0x280, indexCPS2_Birdie },
    { L"V-Ism Kick Mash", 0x34492 + 0x280, 0x34492 + 0x2A0, indexCPS2_Birdie },
    { L"Priority Win", 0x34492 + 0x2A0, 0x34492 + 0x2C0, indexCPS2_Birdie },
    { L"Damage Reduction", 0x34492 + 0x2C0, 0x34492 + 0x2E0, indexCPS2_Birdie },
    { L"Just Defend", 0x34492 + 0x2e0, 0x34492 + 0x300, indexCPS2_Birdie },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMP[] =
{
    { L"X-Ism Punch", 0x2e292, 0x2e2b2, indexCPS2_Rose, 0x00 },
    { L"X-Ism Punch Soul Power", 0x2e2b2, 0x2e2d2, indexCPS2_Rose, 0x02 },
    { L"X-Ism Punch Extra 2", 0x2e2d2, 0x2e2f2 },
    { L"X-Ism Punch Super Trail Light", 0x2e2f2, 0x2e312, indexCPS2_Rose, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2e312, 0x2e332, indexCPS2_Rose, 0x00 },
    { L"X-Ism Punch Dress Winpose", 0x4ae12, 0x4ae32, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMK[] =
{
    { L"X-Ism Kick", 0x2e332, 0x2e352, indexCPS2_Rose, 0x00 },
    { L"X-Ism Kick Soul Power", 0x2e352, 0x2e372, indexCPS2_Rose, 0x02 },
    { L"X-Ism Kick Extra 2", 0x2e372, 0x2e392 },
    { L"X-Ism Kick Super Trail Light", 0x2e392, 0x2e3b2, indexCPS2_Rose, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2e3b2, 0x2e3d2, indexCPS2_Rose, 0x00 },
    { L"X-Ism Kick Dress Winpose", 0x4ae32, 0x4ae52, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMP[] =
{
    { L"A-Ism Punch", 0x2e3d2, 0x2e3f2, indexCPS2_Rose, 0x00 },
    { L"A-Ism Punch Soul Power", 0x2e3f2, 0x2e412, indexCPS2_Rose, 0x02 },
    { L"A-Ism Punch Extra 2", 0x2e412, 0x2e432 },
    { L"A-Ism Punch Super Trail Light", 0x2e432, 0x2e452, indexCPS2_Rose, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e452, 0x2e472, indexCPS2_Rose, 0x00 },
    { L"A-Ism Punch Dress Winpose", 0x4ae52, 0x4ae72, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMK[] =
{
    { L"A-Ism Kick", 0x2e472, 0x2e492, indexCPS2_Rose, 0x00 },
    { L"A-Ism Kick Soul Power", 0x2e492, 0x2e4b2, indexCPS2_Rose, 0x02 },
    { L"A-Ism Kick Extra 2", 0x2e4b2, 0x2e4d2 },
    { L"A-Ism Kick Super Trail Light", 0x2e4d2, 0x2e4f2, indexCPS2_Rose, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e4f2, 0x2e512, indexCPS2_Rose, 0x00 },
    { L"A-Ism Kick Dress Winpose", 0x4ae72, 0x4ae92, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMP[] =
{
    { L"V-Ism Punch", 0x2e512, 0x2e532, indexCPS2_Rose, 0x00 },
    { L"V-Ism Punch Soul Power", 0x2e532, 0x2e552, indexCPS2_Rose, 0x02 },
    { L"V-Ism Punch Extra 2", 0x2e552, 0x2e572 },
    { L"V-Ism Punch Super Trail Light", 0x2e572, 0x2e592, indexCPS2_Rose, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e592, 0x2e5b2, indexCPS2_Rose, 0x00 },
    { L"V-Ism Punch Dress Winpose", 0x4ae92, 0x4aeb2, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMK[] =
{
    { L"V-Ism Kick", 0x2e5b2, 0x2e5d2, indexCPS2_Rose, 0x00 },
    { L"V-Ism Kick Soul Power", 0x2e5d2, 0x2e5f2, indexCPS2_Rose, 0x02 },
    { L"V-Ism Kick Extra 2", 0x2e5f2, 0x2e612 },
    { L"V-Ism Kick Super Trail Light", 0x2e612, 0x2e632, indexCPS2_Rose, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e632, 0x2e652, indexCPS2_Rose, 0x00 },
    { L"V-Ism Kick Dress Winpose", 0x4aeb2, 0x4aed2, indexCPS2_Rose, 1 },
};
    
const sGame_PaletteDataset SFA3_A_ROSE_STATUS[] =
{
    { L"Burned 1", 0x34792 + 0x00, 0x34792 + 0x20, indexCPS2_Rose },
    { L"Burned 2", 0x34792 + 0x20, 0x34792 + 0x40, indexCPS2_Rose },
    { L"Psycho Crusher Burned 1", 0x34792 + 0x40, 0x34792 + 0x60, indexCPS2_Rose },
    { L"Psycho Crusher Burned 2", 0x34792 + 0x60, 0x34792 + 0x80, indexCPS2_Rose },
    { L"V-Ism P1 After Effect 1", 0x34792 + 0x80, 0x34792 + 0xA0, indexCPS2_Rose },
    { L"V-Ism P1 After Effect 2", 0x34792 + 0xA0, 0x34792 + 0xC0, indexCPS2_Rose },
    { L"V-Ism P2 After Effect 1", 0x34792 + 0xC0, 0x34792 + 0xE0, indexCPS2_Rose },
    { L"V-Ism P2 After Effect 2", 0x34792 + 0xe0, 0x34792 + 0x100, indexCPS2_Rose },
    { L"X-Ism Punch Zapped", 0x34792 + 0x100, 0x34792 + 0x120, indexCPS2_Rose },
    { L"X-Ism Kick Zapped", 0x34792 + 0x120, 0x34792 + 0x140, indexCPS2_Rose },
    { L"A-Ism Punch Zapped", 0x34792 + 0x140, 0x34792 + 0x160, indexCPS2_Rose },
    { L"A-Ism Kick Zapped", 0x34792 + 0x160, 0x34792 + 0x180, indexCPS2_Rose },
    { L"V-Ism Punch Zapped", 0x34792 + 0x180, 0x34792 + 0x1A0, indexCPS2_Rose },
    { L"V-Ism Kick Zapped", 0x34792 + 0x1A0, 0x34792 + 0x1C0, indexCPS2_Rose },
    { L"Zapped Skeleton", 0x34792 + 0x1C0, 0x34792 + 0x1E0, indexCPS2_Rose },
    { L"X-Ism Punch Mash", 0x34792 + 0x1e0, 0x34792 + 0x200, indexCPS2_Rose },
    { L"X-Ism Kick Mash", 0x34792 + 0x200, 0x34792 + 0x220, indexCPS2_Rose },
    { L"A-Ism Punch Mash", 0x34792 + 0x220, 0x34792 + 0x240, indexCPS2_Rose },
    { L"A-Ism Kick Mash", 0x34792 + 0x240, 0x34792 + 0x260, indexCPS2_Rose },
    { L"V-Ism Punch Mash", 0x34792 + 0x260, 0x34792 + 0x280, indexCPS2_Rose },
    { L"V-Ism Kick Mash", 0x34792 + 0x280, 0x34792 + 0x2A0, indexCPS2_Rose },
    { L"Priority Win", 0x34792 + 0x2A0, 0x34792 + 0x2C0, indexCPS2_Rose },
    { L"Damage Reduction", 0x34792 + 0x2C0, 0x34792 + 0x2E0, indexCPS2_Rose },
    { L"Just Defend", 0x34792 + 0x2e0, 0x34792 + 0x300, indexCPS2_Rose },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMP[] =
{
    { L"X-Ism Punch", 0x2e652, 0x2e672, indexCPS2_Bison, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2e672, 0x2e692, indexCPS2_Bison, 0x08 },
    { L"X-Ism Punch Extra 2", 0x2e692, 0x2e6b2, indexCPS2_Bison, 0x09 },
    { L"X-Ism Punch Super Trail Light", 0x2e6b2, 0x2e6d2, indexCPS2_Bison, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2e6d2, 0x2e6f2, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMK[] =
{
    { L"X-Ism Kick", 0x2e6f2, 0x2e712, indexCPS2_Bison, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2e712, 0x2e732, indexCPS2_Bison, 0x08 },
    { L"X-Ism Kick Extra 2", 0x2e732, 0x2e752, indexCPS2_Bison, 0x09 },
    { L"X-Ism Kick Super Trail Light", 0x2e752, 0x2e772, indexCPS2_Bison, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2e772, 0x2e792, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMP[] =
{
    { L"A-Ism Punch", 0x2e792, 0x2e7b2, indexCPS2_Bison, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2e7b2, 0x2e7d2, indexCPS2_Bison, 0x08 },
    { L"A-Ism Punch Extra 2", 0x2e7d2, 0x2e7f2, indexCPS2_Bison, 0x09 },
    { L"A-Ism Punch Super Trail Light", 0x2e7f2, 0x2e812, indexCPS2_Bison, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2e812, 0x2e832, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMK[] =
{
    { L"A-Ism Kick", 0x2e832, 0x2e852, indexCPS2_Bison, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2e852, 0x2e872, indexCPS2_Bison, 0x08 },
    { L"A-Ism Kick Extra 2", 0x2e872, 0x2e892, indexCPS2_Bison, 0x09 },
    { L"A-Ism Kick Super Trail Light", 0x2e892, 0x2e8b2, indexCPS2_Bison, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2e8b2, 0x2e8d2, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMP[] =
{
    { L"V-Ism Punch", 0x2e8d2, 0x2e8f2, indexCPS2_Bison, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2e8f2, 0x2e912, indexCPS2_Bison, 0x08 },
    { L"V-Ism Punch Extra 2", 0x2e912, 0x2e932, indexCPS2_Bison, 0x09 },
    { L"V-Ism Punch Super Trail Light", 0x2e932, 0x2e952, indexCPS2_Bison, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2e952, 0x2e972, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMK[] =
{
    { L"V-Ism Kick", 0x2e972, 0x2e992, indexCPS2_Bison, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2e992, 0x2e9b2, indexCPS2_Bison, 0x08 },
    { L"V-Ism Kick Extra 2", 0x2e9b2, 0x2e9d2, indexCPS2_Bison, 0x09 },
    { L"V-Ism Kick Super Trail Light", 0x2e9d2, 0x2e9f2, indexCPS2_Bison, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2e9f2, 0x2ea12, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_STATUS[] =
{
    { L"Burned 1", 0x34a92 + 0x00, 0x34a92 + 0x20, indexCPS2_Bison },
    { L"Burned 2", 0x34a92 + 0x20, 0x34a92 + 0x40, indexCPS2_Bison },
    { L"Psycho Crusher Burned 1", 0x34a92 + 0x40, 0x34a92 + 0x60, indexCPS2_Bison },
    { L"Psycho Crusher Burned 2", 0x34a92 + 0x60, 0x34a92 + 0x80, indexCPS2_Bison },
    { L"V-Ism P1 After Effect 1", 0x34a92 + 0x80, 0x34a92 + 0xA0, indexCPS2_Bison },
    { L"V-Ism P1 After Effect 2", 0x34a92 + 0xA0, 0x34a92 + 0xC0, indexCPS2_Bison },
    { L"V-Ism P2 After Effect 1", 0x34a92 + 0xC0, 0x34a92 + 0xE0, indexCPS2_Bison },
    { L"V-Ism P2 After Effect 2", 0x34a92 + 0xe0, 0x34a92 + 0x100, indexCPS2_Bison },
    { L"X-Ism Punch Zapped", 0x34a92 + 0x100, 0x34a92 + 0x120, indexCPS2_Bison },
    { L"X-Ism Kick Zapped", 0x34a92 + 0x120, 0x34a92 + 0x140, indexCPS2_Bison },
    { L"A-Ism Punch Zapped", 0x34a92 + 0x140, 0x34a92 + 0x160, indexCPS2_Bison },
    { L"A-Ism Kick Zapped", 0x34a92 + 0x160, 0x34a92 + 0x180, indexCPS2_Bison },
    { L"V-Ism Punch Zapped", 0x34a92 + 0x180, 0x34a92 + 0x1A0, indexCPS2_Bison },
    { L"V-Ism Kick Zapped", 0x34a92 + 0x1A0, 0x34a92 + 0x1C0, indexCPS2_Bison },
    { L"Zapped Skeleton", 0x34a92 + 0x1C0, 0x34a92 + 0x1E0, indexCPS2_Bison },
    { L"X-Ism Punch Mash", 0x34a92 + 0x1e0, 0x34a92 + 0x200, indexCPS2_Bison },
    { L"X-Ism Kick Mash", 0x34a92 + 0x200, 0x34a92 + 0x220, indexCPS2_Bison },
    { L"A-Ism Punch Mash", 0x34a92 + 0x220, 0x34a92 + 0x240, indexCPS2_Bison },
    { L"A-Ism Kick Mash", 0x34a92 + 0x240, 0x34a92 + 0x260, indexCPS2_Bison },
    { L"V-Ism Punch Mash", 0x34a92 + 0x260, 0x34a92 + 0x280, indexCPS2_Bison },
    { L"V-Ism Kick Mash", 0x34a92 + 0x280, 0x34a92 + 0x2A0, indexCPS2_Bison },
    { L"Priority Win", 0x34a92 + 0x2A0, 0x34a92 + 0x2C0, indexCPS2_Bison },
    { L"Damage Reduction", 0x34a92 + 0x2C0, 0x34a92 + 0x2E0, indexCPS2_Bison },
    { L"Just Defend", 0x34a92 + 0x2e0, 0x34a92 + 0x300, indexCPS2_Bison },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMP[] =
{
    { L"X-Ism Punch", 0x2ea12, 0x2ea32, indexCPS2_Sagat, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2ea32, 0x2ea52, indexCPS2_Sagat, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2ea52, 0x2ea72, indexCPS2_Sagat, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2ea72, 0x2ea92, indexCPS2_Sagat, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2ea92, 0x2eab2, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMK[] =
{
    { L"X-Ism Kick", 0x2eab2, 0x2ead2, indexCPS2_Sagat, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2ead2, 0x2eaf2, indexCPS2_Sagat, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2eaf2, 0x2eb12, indexCPS2_Sagat, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2eb12, 0x2eb32, indexCPS2_Sagat, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2eb32, 0x2eb52, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMP[] =
{
    { L"A-Ism Punch", 0x2eb52, 0x2eb72, indexCPS2_Sagat, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2eb72, 0x2eb92, indexCPS2_Sagat, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2eb92, 0x2ebb2, indexCPS2_Sagat, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2ebb2, 0x2ebd2, indexCPS2_Sagat, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ebd2, 0x2ebf2, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMK[] =
{
    { L"A-Ism Kick", 0x2ebf2, 0x2ec12, indexCPS2_Sagat, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2ec12, 0x2ec32, indexCPS2_Sagat, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2ec32, 0x2ec52, indexCPS2_Sagat, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2ec52, 0x2ec72, indexCPS2_Sagat, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ec72, 0x2ec92, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMP[] =
{
    { L"V-Ism Punch", 0x2ec92, 0x2ecb2, indexCPS2_Sagat, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ecb2, 0x2ecd2, indexCPS2_Sagat, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2ecd2, 0x2ecf2, indexCPS2_Sagat, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2ecf2, 0x2ed12, indexCPS2_Sagat, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2ed12, 0x2ed32, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMK[] =
{
    { L"V-Ism Kick", 0x2ed32, 0x2ed52, indexCPS2_Sagat, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2ed52, 0x2ed72, indexCPS2_Sagat, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2ed72, 0x2ed92, indexCPS2_Sagat, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2ed92, 0x2edb2, indexCPS2_Sagat, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2edb2, 0x2edd2, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_STATUS[] =
{
    { L"Burned 1", 0x34d92 + 0x00, 0x34d92 + 0x20, indexCPS2_Sagat },
    { L"Burned 2", 0x34d92 + 0x20, 0x34d92 + 0x40, indexCPS2_Sagat },
    { L"Psycho Crusher Burned 1", 0x34d92 + 0x40, 0x34d92 + 0x60, indexCPS2_Sagat },
    { L"Psycho Crusher Burned 2", 0x34d92 + 0x60, 0x34d92 + 0x80, indexCPS2_Sagat },
    { L"V-Ism P1 After Effect 1", 0x34d92 + 0x80, 0x34d92 + 0xA0, indexCPS2_Sagat },
    { L"V-Ism P1 After Effect 2", 0x34d92 + 0xA0, 0x34d92 + 0xC0, indexCPS2_Sagat },
    { L"V-Ism P2 After Effect 1", 0x34d92 + 0xC0, 0x34d92 + 0xE0, indexCPS2_Sagat },
    { L"V-Ism P2 After Effect 2", 0x34d92 + 0xe0, 0x34d92 + 0x100, indexCPS2_Sagat },
    { L"X-Ism Punch Zapped", 0x34d92 + 0x100, 0x34d92 + 0x120, indexCPS2_Sagat },
    { L"X-Ism Kick Zapped", 0x34d92 + 0x120, 0x34d92 + 0x140, indexCPS2_Sagat },
    { L"A-Ism Punch Zapped", 0x34d92 + 0x140, 0x34d92 + 0x160, indexCPS2_Sagat },
    { L"A-Ism Kick Zapped", 0x34d92 + 0x160, 0x34d92 + 0x180, indexCPS2_Sagat },
    { L"V-Ism Punch Zapped", 0x34d92 + 0x180, 0x34d92 + 0x1A0, indexCPS2_Sagat },
    { L"V-Ism Kick Zapped", 0x34d92 + 0x1A0, 0x34d92 + 0x1C0, indexCPS2_Sagat },
    { L"Zapped Skeleton", 0x34d92 + 0x1C0, 0x34d92 + 0x1E0, indexCPS2_Sagat },
    { L"X-Ism Punch Mash", 0x34d92 + 0x1e0, 0x34d92 + 0x200, indexCPS2_Sagat },
    { L"X-Ism Kick Mash", 0x34d92 + 0x200, 0x34d92 + 0x220, indexCPS2_Sagat },
    { L"A-Ism Punch Mash", 0x34d92 + 0x220, 0x34d92 + 0x240, indexCPS2_Sagat },
    { L"A-Ism Kick Mash", 0x34d92 + 0x240, 0x34d92 + 0x260, indexCPS2_Sagat },
    { L"V-Ism Punch Mash", 0x34d92 + 0x260, 0x34d92 + 0x280, indexCPS2_Sagat },
    { L"V-Ism Kick Mash", 0x34d92 + 0x280, 0x34d92 + 0x2A0, indexCPS2_Sagat },
    { L"Priority Win", 0x34d92 + 0x2A0, 0x34d92 + 0x2C0, indexCPS2_Sagat },
    { L"Damage Reduction", 0x34d92 + 0x2C0, 0x34d92 + 0x2E0, indexCPS2_Sagat },
    { L"Just Defend", 0x34d92 + 0x2e0, 0x34d92 + 0x300, indexCPS2_Sagat },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMP[] =
{
    { L"X-Ism Punch", 0x2edd2, 0x2edf2, indexCPS2_Dan, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2edf2, 0x2ee12, indexCPS2_Dan, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2ee12, 0x2ee32, indexCPS2_Dan, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2ee32, 0x2ee52, indexCPS2_Dan, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2ee52, 0x2ee72, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMK[] =
{
    { L"X-Ism Kick", 0x2ee72, 0x2ee92, indexCPS2_Dan, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2ee92, 0x2eeb2, indexCPS2_Dan, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2eeb2, 0x2eed2, indexCPS2_Dan, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2eed2, 0x2eef2, indexCPS2_Dan, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2eef2, 0x2ef12, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMP[] =
{
    { L"A-Ism Punch", 0x2ef12, 0x2ef32, indexCPS2_Dan, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2ef32, 0x2ef52, indexCPS2_Dan, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2ef52, 0x2ef72, indexCPS2_Dan, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2ef72, 0x2ef92, indexCPS2_Dan, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2ef92, 0x2efb2, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMK[] =
{
    { L"A-Ism Kick", 0x2efb2, 0x2efd2, indexCPS2_Dan, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2efd2, 0x2eff2, indexCPS2_Dan, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2eff2, 0x2f012, indexCPS2_Dan, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2f012, 0x2f032, indexCPS2_Dan, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f032, 0x2f052, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMP[] =
{
    { L"V-Ism Punch", 0x2f052, 0x2f072, indexCPS2_Dan, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f072, 0x2f092, indexCPS2_Dan, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2f092, 0x2f0b2, indexCPS2_Dan, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2f0b2, 0x2f0d2, indexCPS2_Dan, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f0d2, 0x2f0f2, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMK[] =
{
    { L"V-Ism Kick", 0x2f0f2, 0x2f112, indexCPS2_Dan, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f112, 0x2f132, indexCPS2_Dan, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2f132, 0x2f152, indexCPS2_Dan, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2f152, 0x2f172, indexCPS2_Dan, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f172, 0x2f192, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_STATUS[] =
{
    { L"Burned 1", 0x35092 + 0x00, 0x35092 + 0x20, indexCPS2_Dan },
    { L"Burned 2", 0x35092 + 0x20, 0x35092 + 0x40, indexCPS2_Dan },
    { L"Psycho Crusher Burned 1", 0x35092 + 0x40, 0x35092 + 0x60, indexCPS2_Dan },
    { L"Psycho Crusher Burned 2", 0x35092 + 0x60, 0x35092 + 0x80, indexCPS2_Dan },
    { L"V-Ism P1 After Effect 1", 0x35092 + 0x80, 0x35092 + 0xA0, indexCPS2_Dan },
    { L"V-Ism P1 After Effect 2", 0x35092 + 0xA0, 0x35092 + 0xC0, indexCPS2_Dan },
    { L"V-Ism P2 After Effect 1", 0x35092 + 0xC0, 0x35092 + 0xE0, indexCPS2_Dan },
    { L"V-Ism P2 After Effect 2", 0x35092 + 0xe0, 0x35092 + 0x100, indexCPS2_Dan },
    { L"X-Ism Punch Zapped", 0x35092 + 0x100, 0x35092 + 0x120, indexCPS2_Dan },
    { L"X-Ism Kick Zapped", 0x35092 + 0x120, 0x35092 + 0x140, indexCPS2_Dan },
    { L"A-Ism Punch Zapped", 0x35092 + 0x140, 0x35092 + 0x160, indexCPS2_Dan },
    { L"A-Ism Kick Zapped", 0x35092 + 0x160, 0x35092 + 0x180, indexCPS2_Dan },
    { L"V-Ism Punch Zapped", 0x35092 + 0x180, 0x35092 + 0x1A0, indexCPS2_Dan },
    { L"V-Ism Kick Zapped", 0x35092 + 0x1A0, 0x35092 + 0x1C0, indexCPS2_Dan },
    { L"Zapped Skeleton", 0x35092 + 0x1C0, 0x35092 + 0x1E0, indexCPS2_Dan },
    { L"X-Ism Punch Mash", 0x35092 + 0x1e0, 0x35092 + 0x200, indexCPS2_Dan },
    { L"X-Ism Kick Mash", 0x35092 + 0x200, 0x35092 + 0x220, indexCPS2_Dan },
    { L"A-Ism Punch Mash", 0x35092 + 0x220, 0x35092 + 0x240, indexCPS2_Dan },
    { L"A-Ism Kick Mash", 0x35092 + 0x240, 0x35092 + 0x260, indexCPS2_Dan },
    { L"V-Ism Punch Mash", 0x35092 + 0x260, 0x35092 + 0x280, indexCPS2_Dan },
    { L"V-Ism Kick Mash", 0x35092 + 0x280, 0x35092 + 0x2A0, indexCPS2_Dan },
    { L"Priority Win", 0x35092 + 0x2A0, 0x35092 + 0x2C0, indexCPS2_Dan },
    { L"Damage Reduction", 0x35092 + 0x2C0, 0x35092 + 0x2E0, indexCPS2_Dan },
    { L"Just Defend", 0x35092 + 0x2e0, 0x35092 + 0x300, indexCPS2_Dan },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMP[] =
{
    { L"X-Ism Punch", 0x2f192, 0x2f1b2, indexCPS2_Sakura, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f1b2, 0x2f1d2, indexCPS2_Sakura, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2f1d2, 0x2f1f2, indexCPS2_Sakura, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2f1f2, 0x2f212, indexCPS2_Sakura, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f212, 0x2f232, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMK[] =
{
    { L"X-Ism Kick", 0x2f232, 0x2f252, indexCPS2_Sakura, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f252, 0x2f272, indexCPS2_Sakura, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2f272, 0x2f292, indexCPS2_Sakura, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2f292, 0x2f2b2, indexCPS2_Sakura, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2f2b2, 0x2f2d2, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMP[] =
{
    { L"A-Ism Punch", 0x2f2d2, 0x2f2f2, indexCPS2_Sakura, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2f2f2, 0x2f312, indexCPS2_Sakura, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2f312, 0x2f332, indexCPS2_Sakura, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2f332, 0x2f352, indexCPS2_Sakura, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2f352, 0x2f372, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMK[] =
{
    { L"A-Ism Kick", 0x2f372, 0x2f392, indexCPS2_Sakura, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2f392, 0x2f3b2, indexCPS2_Sakura, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2f3b2, 0x2f3d2, indexCPS2_Sakura, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2f3d2, 0x2f3f2, indexCPS2_Sakura, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f3f2, 0x2f412, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMP[] =
{
    { L"V-Ism Punch", 0x2f412, 0x2f432, indexCPS2_Sakura, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f432, 0x2f452, indexCPS2_Sakura, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2f452, 0x2f472, indexCPS2_Sakura, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2f472, 0x2f492, indexCPS2_Sakura, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f492, 0x2f4b2, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMK[] =
{
    { L"V-Ism Kick", 0x2f4b2, 0x2f4d2, indexCPS2_Sakura, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f4d2, 0x2f4f2, indexCPS2_Sakura, 0x01 },
    { L"V-Ism Kick Extra 2", 0x2f4f2, 0x2f512, indexCPS2_Sakura, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2f512, 0x2f532, indexCPS2_Sakura, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f532, 0x2f552, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_STATUS[] =
{
    { L"Burned 1", 0x35392 + 0x00, 0x35392 + 0x20, indexCPS2_Sakura },
    { L"Burned 2", 0x35392 + 0x20, 0x35392 + 0x40, indexCPS2_Sakura },
    { L"Psycho Crusher Burned 1", 0x35392 + 0x40, 0x35392 + 0x60, indexCPS2_Sakura },
    { L"Psycho Crusher Burned 2", 0x35392 + 0x60, 0x35392 + 0x80, indexCPS2_Sakura },
    { L"V-Ism P1 After Effect 1", 0x35392 + 0x80, 0x35392 + 0xA0, indexCPS2_Sakura },
    { L"V-Ism P1 After Effect 2", 0x35392 + 0xA0, 0x35392 + 0xC0, indexCPS2_Sakura },
    { L"V-Ism P2 After Effect 1", 0x35392 + 0xC0, 0x35392 + 0xE0, indexCPS2_Sakura },
    { L"V-Ism P2 After Effect 2", 0x35392 + 0xe0, 0x35392 + 0x100, indexCPS2_Sakura },
    { L"X-Ism Punch Zapped", 0x35392 + 0x100, 0x35392 + 0x120, indexCPS2_Sakura },
    { L"X-Ism Kick Zapped", 0x35392 + 0x120, 0x35392 + 0x140, indexCPS2_Sakura },
    { L"A-Ism Punch Zapped", 0x35392 + 0x140, 0x35392 + 0x160, indexCPS2_Sakura },
    { L"A-Ism Kick Zapped", 0x35392 + 0x160, 0x35392 + 0x180, indexCPS2_Sakura },
    { L"V-Ism Punch Zapped", 0x35392 + 0x180, 0x35392 + 0x1A0, indexCPS2_Sakura },
    { L"V-Ism Kick Zapped", 0x35392 + 0x1A0, 0x35392 + 0x1C0, indexCPS2_Sakura },
    { L"Zapped Skeleton", 0x35392 + 0x1C0, 0x35392 + 0x1E0, indexCPS2_Sakura },
    { L"X-Ism Punch Mash", 0x35392 + 0x1e0, 0x35392 + 0x200, indexCPS2_Sakura },
    { L"X-Ism Kick Mash", 0x35392 + 0x200, 0x35392 + 0x220, indexCPS2_Sakura },
    { L"A-Ism Punch Mash", 0x35392 + 0x220, 0x35392 + 0x240, indexCPS2_Sakura },
    { L"A-Ism Kick Mash", 0x35392 + 0x240, 0x35392 + 0x260, indexCPS2_Sakura },
    { L"V-Ism Punch Mash", 0x35392 + 0x260, 0x35392 + 0x280, indexCPS2_Sakura },
    { L"V-Ism Kick Mash", 0x35392 + 0x280, 0x35392 + 0x2A0, indexCPS2_Sakura },
    { L"Priority Win", 0x35392 + 0x2A0, 0x35392 + 0x2C0, indexCPS2_Sakura },
    { L"Damage Reduction", 0x35392 + 0x2C0, 0x35392 + 0x2E0, indexCPS2_Sakura },
    { L"Just Defend", 0x35392 + 0x2e0, 0x35392 + 0x300, indexCPS2_Sakura },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMP[] =
{
    { L"X-Ism Punch", 0x2f552, 0x2f572, indexCPS2_Rolento, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f572, 0x2f592, indexCPS2_Rolento, 0x08 },
    { L"X-Ism Punch Extra 2", 0x2f592, 0x2f5b2, indexCPS2_Rolento, 0x09 },
    { L"X-Ism Punch Super Trail Light", 0x2f5b2, 0x2f5d2, indexCPS2_Rolento, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f5d2, 0x2f5f2, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMK[] =
{
    { L"X-Ism Kick", 0x2f5f2, 0x2f612, indexCPS2_Rolento, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f612, 0x2f632, indexCPS2_Rolento, 0x08 },
    { L"X-Ism Kick Extra 2", 0x2f632, 0x2f652, indexCPS2_Rolento, 0x09 },
    { L"X-Ism Kick Super Trail Light", 0x2f652, 0x2f672, indexCPS2_Rolento, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2f672, 0x2f692, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMP[] =
{
    { L"A-Ism Punch", 0x2f692, 0x2f6b2, indexCPS2_Rolento, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2f6b2, 0x2f6d2, indexCPS2_Rolento, 0x08 },
    { L"A-Ism Punch Extra 2", 0x2f6d2, 0x2f6f2, indexCPS2_Rolento, 0x09 },
    { L"A-Ism Punch Super Trail Light", 0x2f6f2, 0x2f712, indexCPS2_Rolento, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2f712, 0x2f732, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMK[] =
{
    { L"A-Ism Kick", 0x2f732, 0x2f752, indexCPS2_Rolento, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2f752, 0x2f772, indexCPS2_Rolento, 0x08 },
    { L"A-Ism Kick Extra 2", 0x2f772, 0x2f792, indexCPS2_Rolento, 0x09 },
    { L"A-Ism Kick Super Trail Light", 0x2f792, 0x2f7b2, indexCPS2_Rolento, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2f7b2, 0x2f7d2, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMP[] =
{
    { L"V-Ism Punch", 0x2f7d2, 0x2f7f2, indexCPS2_Rolento, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2f7f2, 0x2f812, indexCPS2_Rolento, 0x08 },
    { L"V-Ism Punch Extra 2", 0x2f812, 0x2f832, indexCPS2_Rolento, 0x09 },
    { L"V-Ism Punch Super Trail Light", 0x2f832, 0x2f852, indexCPS2_Rolento, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2f852, 0x2f872, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMK[] =
{
    { L"V-Ism Kick", 0x2f872, 0x2f892, indexCPS2_Rolento, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2f892, 0x2f8b2, indexCPS2_Rolento, 0x08 },
    { L"V-Ism Kick Extra 2", 0x2f8b2, 0x2f8d2, indexCPS2_Rolento, 0x09 },
    { L"V-Ism Kick Super Trail Light", 0x2f8d2, 0x2f8f2, indexCPS2_Rolento, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2f8f2, 0x2f912, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_STATUS[] =
{
    { L"Burned 1", 0x35692 + 0x00, 0x35692 + 0x20, indexCPS2_Rolento },
    { L"Burned 2", 0x35692 + 0x20, 0x35692 + 0x40, indexCPS2_Rolento },
    { L"Psycho Crusher Burned 1", 0x35692 + 0x40, 0x35692 + 0x60, indexCPS2_Rolento },
    { L"Psycho Crusher Burned 2", 0x35692 + 0x60, 0x35692 + 0x80, indexCPS2_Rolento },
    { L"V-Ism P1 After Effect 1", 0x35692 + 0x80, 0x35692 + 0xA0, indexCPS2_Rolento },
    { L"V-Ism P1 After Effect 2", 0x35692 + 0xA0, 0x35692 + 0xC0, indexCPS2_Rolento },
    { L"V-Ism P2 After Effect 1", 0x35692 + 0xC0, 0x35692 + 0xE0, indexCPS2_Rolento },
    { L"V-Ism P2 After Effect 2", 0x35692 + 0xe0, 0x35692 + 0x100, indexCPS2_Rolento },
    { L"X-Ism Punch Zapped", 0x35692 + 0x100, 0x35692 + 0x120, indexCPS2_Rolento },
    { L"X-Ism Kick Zapped", 0x35692 + 0x120, 0x35692 + 0x140, indexCPS2_Rolento },
    { L"A-Ism Punch Zapped", 0x35692 + 0x140, 0x35692 + 0x160, indexCPS2_Rolento },
    { L"A-Ism Kick Zapped", 0x35692 + 0x160, 0x35692 + 0x180, indexCPS2_Rolento },
    { L"V-Ism Punch Zapped", 0x35692 + 0x180, 0x35692 + 0x1A0, indexCPS2_Rolento },
    { L"V-Ism Kick Zapped", 0x35692 + 0x1A0, 0x35692 + 0x1C0, indexCPS2_Rolento },
    { L"Zapped Skeleton", 0x35692 + 0x1C0, 0x35692 + 0x1E0, indexCPS2_Rolento },
    { L"X-Ism Punch Mash", 0x35692 + 0x1e0, 0x35692 + 0x200, indexCPS2_Rolento },
    { L"X-Ism Kick Mash", 0x35692 + 0x200, 0x35692 + 0x220, indexCPS2_Rolento },
    { L"A-Ism Punch Mash", 0x35692 + 0x220, 0x35692 + 0x240, indexCPS2_Rolento },
    { L"A-Ism Kick Mash", 0x35692 + 0x240, 0x35692 + 0x260, indexCPS2_Rolento },
    { L"V-Ism Punch Mash", 0x35692 + 0x260, 0x35692 + 0x280, indexCPS2_Rolento },
    { L"V-Ism Kick Mash", 0x35692 + 0x280, 0x35692 + 0x2A0, indexCPS2_Rolento },
    { L"Priority Win", 0x35692 + 0x2A0, 0x35692 + 0x2C0, indexCPS2_Rolento },
    { L"Damage Reduction", 0x35692 + 0x2C0, 0x35692 + 0x2E0, indexCPS2_Rolento },
    { L"Just Defend", 0x35692 + 0x2e0, 0x35692 + 0x300, indexCPS2_Rolento },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMP[] =
{
    { L"X-Ism Punch", 0x2f912, 0x2f932, indexCPS2_Dhalsim, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2f932, 0x2f952, indexCPS2_Dhalsim, 0x01 },
    { L"X-Ism Punch Sally", 0x2f952, 0x2f972, indexCPS2_Dhalsim, 0x02 },
    { L"X-Ism Punch Super Trail Light", 0x2f972, 0x2f992, indexCPS2_Dhalsim, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2f992, 0x2f9b2, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMK[] =
{
    { L"X-Ism Kick", 0x2f9b2, 0x2f9d2, indexCPS2_Dhalsim, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2f9d2, 0x2f9f2, indexCPS2_Dhalsim, 0x01 },
    { L"X-Ism Kick Sally", 0x2f9f2, 0x2fa12, indexCPS2_Dhalsim, 0x02 },
    { L"X-Ism Kick Super Trail Light", 0x2fa12, 0x2fa32, indexCPS2_Dhalsim, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2fa32, 0x2fa52, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMP[] =
{
    { L"A-Ism Punch", 0x2fa52, 0x2fa72, indexCPS2_Dhalsim, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2fa72, 0x2fa92, indexCPS2_Dhalsim, 0x01 },
    { L"A-Ism Punch Sally", 0x2fa92, 0x2fab2, indexCPS2_Dhalsim, 0x02 },
    { L"A-Ism Punch Super Trail Light", 0x2fab2, 0x2fad2, indexCPS2_Dhalsim, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2fad2, 0x2faf2, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMK[] =
{
    { L"A-Ism Kick", 0x2faf2, 0x2fb12, indexCPS2_Dhalsim, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2fb12, 0x2fb32, indexCPS2_Dhalsim, 0x01 },
    { L"A-Ism Kick Sally", 0x2fb32, 0x2fb52, indexCPS2_Dhalsim, 0x02 },
    { L"A-Ism Kick Super Trail Light", 0x2fb52, 0x2fb72, indexCPS2_Dhalsim, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2fb72, 0x2fb92, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMP[] =
{
    { L"V-Ism Punch", 0x2fb92, 0x2fbb2, indexCPS2_Dhalsim, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2fbb2, 0x2fbd2, indexCPS2_Dhalsim, 0x01 },
    { L"V-Ism Punch Sally", 0x2fbd2, 0x2fbf2, indexCPS2_Dhalsim, 0x02 },
    { L"V-Ism Punch Super Trail Light", 0x2fbf2, 0x2fc12, indexCPS2_Dhalsim, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2fc12, 0x2fc32, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMK[] =
{
    { L"V-Ism Kick", 0x2fc32, 0x2fc52, indexCPS2_Dhalsim, 0x00 },
    { L"V-Ism Kick Extra 1", 0x2fc52, 0x2fc72, indexCPS2_Dhalsim, 0x01 },
    { L"V-Ism Kick Sally", 0x2fc72, 0x2fc92, indexCPS2_Dhalsim, 0x02 },
    { L"V-Ism Kick Super Trail Light", 0x2fc92, 0x2fcb2, indexCPS2_Dhalsim, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x2fcb2, 0x2fcd2, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_STATUS[] =
{
    { L"Burned 1", 0x35992 + 0x00, 0x35992 + 0x20, indexCPS2_Dhalsim },
    { L"Burned 2", 0x35992 + 0x20, 0x35992 + 0x40, indexCPS2_Dhalsim },
    { L"Psycho Crusher Burned 1", 0x35992 + 0x40, 0x35992 + 0x60, indexCPS2_Dhalsim },
    { L"Psycho Crusher Burned 2", 0x35992 + 0x60, 0x35992 + 0x80, indexCPS2_Dhalsim },
    { L"V-Ism P1 After Effect 1", 0x35992 + 0x80, 0x35992 + 0xA0, indexCPS2_Dhalsim },
    { L"V-Ism P1 After Effect 2", 0x35992 + 0xA0, 0x35992 + 0xC0, indexCPS2_Dhalsim },
    { L"V-Ism P2 After Effect 1", 0x35992 + 0xC0, 0x35992 + 0xE0, indexCPS2_Dhalsim },
    { L"V-Ism P2 After Effect 2", 0x35992 + 0xe0, 0x35992 + 0x100, indexCPS2_Dhalsim },
    { L"X-Ism Punch Zapped", 0x35992 + 0x100, 0x35992 + 0x120, indexCPS2_Dhalsim },
    { L"X-Ism Kick Zapped", 0x35992 + 0x120, 0x35992 + 0x140, indexCPS2_Dhalsim },
    { L"A-Ism Punch Zapped", 0x35992 + 0x140, 0x35992 + 0x160, indexCPS2_Dhalsim },
    { L"A-Ism Kick Zapped", 0x35992 + 0x160, 0x35992 + 0x180, indexCPS2_Dhalsim },
    { L"V-Ism Punch Zapped", 0x35992 + 0x180, 0x35992 + 0x1A0, indexCPS2_Dhalsim },
    { L"V-Ism Kick Zapped", 0x35992 + 0x1A0, 0x35992 + 0x1C0, indexCPS2_Dhalsim },
    { L"Zapped Skeleton", 0x35992 + 0x1C0, 0x35992 + 0x1E0, indexCPS2_Dhalsim },
    { L"X-Ism Punch Mash", 0x35992 + 0x1e0, 0x35992 + 0x200, indexCPS2_Dhalsim },
    { L"X-Ism Kick Mash", 0x35992 + 0x200, 0x35992 + 0x220, indexCPS2_Dhalsim },
    { L"A-Ism Punch Mash", 0x35992 + 0x220, 0x35992 + 0x240, indexCPS2_Dhalsim },
    { L"A-Ism Kick Mash", 0x35992 + 0x240, 0x35992 + 0x260, indexCPS2_Dhalsim },
    { L"V-Ism Punch Mash", 0x35992 + 0x260, 0x35992 + 0x280, indexCPS2_Dhalsim },
    { L"V-Ism Kick Mash", 0x35992 + 0x280, 0x35992 + 0x2A0, indexCPS2_Dhalsim },
    { L"Priority Win", 0x35992 + 0x2A0, 0x35992 + 0x2C0, indexCPS2_Dhalsim },
    { L"Damage Reduction", 0x35992 + 0x2C0, 0x35992 + 0x2E0, indexCPS2_Dhalsim },
    { L"Just Defend", 0x35992 + 0x2e0, 0x35992 + 0x300, indexCPS2_Dhalsim },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMP[] =
{
    { L"X-Ism Punch", 0x2fcd2, 0x2fcf2, indexCPS2_Zangief, 0x00 },
    { L"X-Ism Punch Extra 1", 0x2fcf2, 0x2fd12, indexCPS2_Zangief, 0x01 },
    { L"X-Ism Punch Extra 2", 0x2fd12, 0x2fd32 },
    { L"X-Ism Punch Super Trail Light", 0x2fd32, 0x2fd52, indexCPS2_Zangief, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x2fd52, 0x2fd72, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMK[] =
{
    { L"X-Ism Kick", 0x2fd72, 0x2fd92, indexCPS2_Zangief, 0x00 },
    { L"X-Ism Kick Extra 1", 0x2fd92, 0x2fdb2, indexCPS2_Zangief, 0x01 },
    { L"X-Ism Kick Extra 2", 0x2fdb2, 0x2fdd2 },
    { L"X-Ism Kick Super Trail Light", 0x2fdd2, 0x2fdf2, indexCPS2_Zangief, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x2fdf2, 0x2fe12, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMP[] =
{
    { L"A-Ism Punch", 0x2fe12, 0x2fe32, indexCPS2_Zangief, 0x00 },
    { L"A-Ism Punch Extra 1", 0x2fe32, 0x2fe52, indexCPS2_Zangief, 0x01 },
    { L"A-Ism Punch Extra 2", 0x2fe52, 0x2fe72 },
    { L"A-Ism Punch Super Trail Light", 0x2fe72, 0x2fe92, indexCPS2_Zangief, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x2fe92, 0x2feb2, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMK[] =
{
    { L"A-Ism Kick", 0x2feb2, 0x2fed2, indexCPS2_Zangief, 0x00 },
    { L"A-Ism Kick Extra 1", 0x2fed2, 0x2fef2, indexCPS2_Zangief, 0x01 },
    { L"A-Ism Kick Extra 2", 0x2fef2, 0x2ff12 },
    { L"A-Ism Kick Super Trail Light", 0x2ff12, 0x2ff32, indexCPS2_Zangief, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x2ff32, 0x2ff52, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMP[] =
{
    { L"V-Ism Punch", 0x2ff52, 0x2ff72, indexCPS2_Zangief, 0x00 },
    { L"V-Ism Punch Extra 1", 0x2ff72, 0x2ff92, indexCPS2_Zangief, 0x01 },
    { L"V-Ism Punch Extra 2", 0x2ff92, 0x2ffb2 },
    { L"V-Ism Punch Super Trail Light", 0x2ffb2, 0x2ffd2, indexCPS2_Zangief, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x2ffd2, 0x2fff2, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMK[] =
{
    { L"V-Ism Kick", 0x2fff2, 0x30012, indexCPS2_Zangief, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30012, 0x30032, indexCPS2_Zangief, 0x01 },
    { L"V-Ism Kick Extra 2", 0x30032, 0x30052 },
    { L"V-Ism Kick Super Trail Light", 0x30052, 0x30072, indexCPS2_Zangief, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30072, 0x30092, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_STATUS[] =
{
    { L"Burned 1", 0x35c92 + 0x00, 0x35c92 + 0x20, indexCPS2_Zangief },
    { L"Burned 2", 0x35c92 + 0x20, 0x35c92 + 0x40, indexCPS2_Zangief },
    { L"Psycho Crusher Burned 1", 0x35c92 + 0x40, 0x35c92 + 0x60, indexCPS2_Zangief },
    { L"Psycho Crusher Burned 2", 0x35c92 + 0x60, 0x35c92 + 0x80, indexCPS2_Zangief },
    { L"V-Ism P1 After Effect 1", 0x35c92 + 0x80, 0x35c92 + 0xA0, indexCPS2_Zangief },
    { L"V-Ism P1 After Effect 2", 0x35c92 + 0xA0, 0x35c92 + 0xC0, indexCPS2_Zangief },
    { L"V-Ism P2 After Effect 1", 0x35c92 + 0xC0, 0x35c92 + 0xE0, indexCPS2_Zangief },
    { L"V-Ism P2 After Effect 2", 0x35c92 + 0xe0, 0x35c92 + 0x100, indexCPS2_Zangief },
    { L"X-Ism Punch Zapped", 0x35c92 + 0x100, 0x35c92 + 0x120, indexCPS2_Zangief },
    { L"X-Ism Kick Zapped", 0x35c92 + 0x120, 0x35c92 + 0x140, indexCPS2_Zangief },
    { L"A-Ism Punch Zapped", 0x35c92 + 0x140, 0x35c92 + 0x160, indexCPS2_Zangief },
    { L"A-Ism Kick Zapped", 0x35c92 + 0x160, 0x35c92 + 0x180, indexCPS2_Zangief },
    { L"V-Ism Punch Zapped", 0x35c92 + 0x180, 0x35c92 + 0x1A0, indexCPS2_Zangief },
    { L"V-Ism Kick Zapped", 0x35c92 + 0x1A0, 0x35c92 + 0x1C0, indexCPS2_Zangief },
    { L"Zapped Skeleton", 0x35c92 + 0x1C0, 0x35c92 + 0x1E0, indexCPS2_Zangief },
    { L"X-Ism Punch Mash", 0x35c92 + 0x1e0, 0x35c92 + 0x200, indexCPS2_Zangief },
    { L"X-Ism Kick Mash", 0x35c92 + 0x200, 0x35c92 + 0x220, indexCPS2_Zangief },
    { L"A-Ism Punch Mash", 0x35c92 + 0x220, 0x35c92 + 0x240, indexCPS2_Zangief },
    { L"A-Ism Kick Mash", 0x35c92 + 0x240, 0x35c92 + 0x260, indexCPS2_Zangief },
    { L"V-Ism Punch Mash", 0x35c92 + 0x260, 0x35c92 + 0x280, indexCPS2_Zangief },
    { L"V-Ism Kick Mash", 0x35c92 + 0x280, 0x35c92 + 0x2A0, indexCPS2_Zangief },
    { L"Priority Win", 0x35c92 + 0x2A0, 0x35c92 + 0x2C0, indexCPS2_Zangief },
    { L"Damage Reduction", 0x35c92 + 0x2C0, 0x35c92 + 0x2E0, indexCPS2_Zangief },
    { L"Just Defend", 0x35c92 + 0x2e0, 0x35c92 + 0x300, indexCPS2_Zangief },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMP[] =
{
    { L"X-Ism Punch", 0x30092, 0x300b2, indexCPS2_Gen, 0x00 },
    { L"X-Ism Punch Extra 1", 0x300b2, 0x300d2 },
    { L"X-Ism Punch Extra 2", 0x300d2, 0x300f2 },
    { L"X-Ism Punch Super Trail Light", 0x300f2, 0x30112, indexCPS2_Gen, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30112, 0x30132, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMK[] =
{
    { L"X-Ism Kick", 0x30132, 0x30152, indexCPS2_Gen, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30152, 0x30172 },
    { L"X-Ism Kick Extra 2", 0x30172, 0x30192 },
    { L"X-Ism Kick Super Trail Light", 0x30192, 0x301b2, indexCPS2_Gen, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x301b2, 0x301d2, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMP[] =
{
    { L"A-Ism Punch", 0x301d2, 0x301f2, indexCPS2_Gen, 0x00 },
    { L"A-Ism Punch Extra 1", 0x301f2, 0x30212 },
    { L"A-Ism Punch Extra 2", 0x30212, 0x30232 },
    { L"A-Ism Punch Super Trail Light", 0x30232, 0x30252, indexCPS2_Gen, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30252, 0x30272, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMK[] =
{
    { L"A-Ism Kick", 0x30272, 0x30292, indexCPS2_Gen, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30292, 0x302b2 },
    { L"A-Ism Kick Extra 2", 0x302b2, 0x302d2 },
    { L"A-Ism Kick Super Trail Light", 0x302d2, 0x302f2, indexCPS2_Gen, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x302f2, 0x30312, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMP[] =
{
    { L"V-Ism Punch", 0x30312, 0x30332, indexCPS2_Gen, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30332, 0x30352 },
    { L"V-Ism Punch Extra 2", 0x30352, 0x30372 },
    { L"V-Ism Punch Super Trail Light", 0x30372, 0x30392, indexCPS2_Gen, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30392, 0x303b2, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMK[] =
{
    { L"V-Ism Kick", 0x303b2, 0x303d2, indexCPS2_Gen, 0x00 },
    { L"V-Ism Kick Extra 1", 0x303d2, 0x303f2 },
    { L"V-Ism Kick Extra 2", 0x303f2, 0x30412 },
    { L"V-Ism Kick Super Trail Light", 0x30412, 0x30432, indexCPS2_Gen, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30432, 0x30452, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_STATUS[] =
{
    { L"Burned 1", 0x35f92 + 0x00, 0x35f92 + 0x20, indexCPS2_Gen },
    { L"Burned 2", 0x35f92 + 0x20, 0x35f92 + 0x40, indexCPS2_Gen },
    { L"Psycho Crusher Burned 1", 0x35f92 + 0x40, 0x35f92 + 0x60, indexCPS2_Gen },
    { L"Psycho Crusher Burned 2", 0x35f92 + 0x60, 0x35f92 + 0x80, indexCPS2_Gen },
    { L"V-Ism P1 After Effect 1", 0x35f92 + 0x80, 0x35f92 + 0xA0, indexCPS2_Gen },
    { L"V-Ism P1 After Effect 2", 0x35f92 + 0xA0, 0x35f92 + 0xC0, indexCPS2_Gen },
    { L"V-Ism P2 After Effect 1", 0x35f92 + 0xC0, 0x35f92 + 0xE0, indexCPS2_Gen },
    { L"V-Ism P2 After Effect 2", 0x35f92 + 0xe0, 0x35f92 + 0x100, indexCPS2_Gen },
    { L"X-Ism Punch Zapped", 0x35f92 + 0x100, 0x35f92 + 0x120, indexCPS2_Gen },
    { L"X-Ism Kick Zapped", 0x35f92 + 0x120, 0x35f92 + 0x140, indexCPS2_Gen },
    { L"A-Ism Punch Zapped", 0x35f92 + 0x140, 0x35f92 + 0x160, indexCPS2_Gen },
    { L"A-Ism Kick Zapped", 0x35f92 + 0x160, 0x35f92 + 0x180, indexCPS2_Gen },
    { L"V-Ism Punch Zapped", 0x35f92 + 0x180, 0x35f92 + 0x1A0, indexCPS2_Gen },
    { L"V-Ism Kick Zapped", 0x35f92 + 0x1A0, 0x35f92 + 0x1C0, indexCPS2_Gen },
    { L"Zapped Skeleton", 0x35f92 + 0x1C0, 0x35f92 + 0x1E0, indexCPS2_Gen },
    { L"X-Ism Punch Mash", 0x35f92 + 0x1e0, 0x35f92 + 0x200, indexCPS2_Gen },
    { L"X-Ism Kick Mash", 0x35f92 + 0x200, 0x35f92 + 0x220, indexCPS2_Gen },
    { L"A-Ism Punch Mash", 0x35f92 + 0x220, 0x35f92 + 0x240, indexCPS2_Gen },
    { L"A-Ism Kick Mash", 0x35f92 + 0x240, 0x35f92 + 0x260, indexCPS2_Gen },
    { L"V-Ism Punch Mash", 0x35f92 + 0x260, 0x35f92 + 0x280, indexCPS2_Gen },
    { L"V-Ism Kick Mash", 0x35f92 + 0x280, 0x35f92 + 0x2A0, indexCPS2_Gen },
    { L"Priority Win", 0x35f92 + 0x2A0, 0x35f92 + 0x2C0, indexCPS2_Gen },
    { L"Damage Reduction", 0x35f92 + 0x2C0, 0x35f92 + 0x2E0, indexCPS2_Gen },
    { L"Just Defend", 0x35f92 + 0x2e0, 0x35f92 + 0x300, indexCPS2_Gen },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMP[] =
{
    { L"X-Ism Punch", 0x30452, 0x30472, indexCPS2_Balrog, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30472, 0x30492 },
    { L"X-Ism Punch Extra 2", 0x30492, 0x304b2 },
    { L"X-Ism Punch Super Trail Light", 0x304b2, 0x304d2, indexCPS2_Balrog, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x304d2, 0x304f2, indexCPS2_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMK[] =
{
    { L"X-Ism Kick", 0x304f2, 0x30512, indexCPS2_Balrog, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30512, 0x30532 },
    { L"X-Ism Kick Extra 2", 0x30532, 0x30552 },
    { L"X-Ism Kick Super Trail Light", 0x30552, 0x30572, indexCPS2_Balrog, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30572, 0x30592, indexCPS2_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMP[] =
{
    { L"A-Ism Punch", 0x30592, 0x305b2, indexCPS2_Balrog, 0x00 },
    { L"A-Ism Punch Extra 1", 0x305b2, 0x305d2 },
    { L"A-Ism Punch Extra 2", 0x305d2, 0x305f2 },
    { L"A-Ism Punch Super Trail Light", 0x305f2, 0x30612, indexCPS2_Balrog, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30612, 0x30632, indexCPS2_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMK[] =
{
    { L"A-Ism Kick", 0x30632, 0x30652, indexCPS2_Balrog, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30652, 0x30672 },
    { L"A-Ism Kick Extra 2", 0x30672, 0x30692 },
    { L"A-Ism Kick Super Trail Light", 0x30692, 0x306b2, indexCPS2_Balrog, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x306b2, 0x306d2, indexCPS2_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMP[] =
{
    { L"V-Ism Punch", 0x306d2, 0x306f2, indexCPS2_Balrog, 0x00 },
    { L"V-Ism Punch Extra 1", 0x306f2, 0x30712 },
    { L"V-Ism Punch Extra 2", 0x30712, 0x30732 },
    { L"V-Ism Punch Super Trail Light", 0x30732, 0x30752, indexCPS2_Balrog, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30752, 0x30772, indexCPS2_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMK[] =
{
    { L"V-Ism Kick", 0x30772, 0x30792, indexCPS2_Balrog, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30792, 0x307b2 },
    { L"V-Ism Kick Extra 2", 0x307b2, 0x307d2 },
    { L"V-Ism Kick Super Trail Light", 0x307d2, 0x307f2, indexCPS2_Balrog, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x307f2, 0x30812, indexCPS2_Balrog, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_STATUS[] =
{
    { L"Burned 1", 0x36292 + 0x00, 0x36292 + 0x20, indexCPS2_Balrog },
    { L"Burned 2", 0x36292 + 0x20, 0x36292 + 0x40, indexCPS2_Balrog },
    { L"Psycho Crusher Burned 1", 0x36292 + 0x40, 0x36292 + 0x60, indexCPS2_Balrog },
    { L"Psycho Crusher Burned 2", 0x36292 + 0x60, 0x36292 + 0x80, indexCPS2_Balrog },
    { L"V-Ism P1 After Effect 1", 0x36292 + 0x80, 0x36292 + 0xA0, indexCPS2_Balrog },
    { L"V-Ism P1 After Effect 2", 0x36292 + 0xA0, 0x36292 + 0xC0, indexCPS2_Balrog },
    { L"V-Ism P2 After Effect 1", 0x36292 + 0xC0, 0x36292 + 0xE0, indexCPS2_Balrog },
    { L"V-Ism P2 After Effect 2", 0x36292 + 0xe0, 0x36292 + 0x100, indexCPS2_Balrog },
    { L"X-Ism Punch Zapped", 0x36292 + 0x100, 0x36292 + 0x120, indexCPS2_Balrog },
    { L"X-Ism Kick Zapped", 0x36292 + 0x120, 0x36292 + 0x140, indexCPS2_Balrog },
    { L"A-Ism Punch Zapped", 0x36292 + 0x140, 0x36292 + 0x160, indexCPS2_Balrog },
    { L"A-Ism Kick Zapped", 0x36292 + 0x160, 0x36292 + 0x180, indexCPS2_Balrog },
    { L"V-Ism Punch Zapped", 0x36292 + 0x180, 0x36292 + 0x1A0, indexCPS2_Balrog },
    { L"V-Ism Kick Zapped", 0x36292 + 0x1A0, 0x36292 + 0x1C0, indexCPS2_Balrog },
    { L"Zapped Skeleton", 0x36292 + 0x1C0, 0x36292 + 0x1E0, indexCPS2_Balrog },
    { L"X-Ism Punch Mash", 0x36292 + 0x1e0, 0x36292 + 0x200, indexCPS2_Balrog },
    { L"X-Ism Kick Mash", 0x36292 + 0x200, 0x36292 + 0x220, indexCPS2_Balrog },
    { L"A-Ism Punch Mash", 0x36292 + 0x220, 0x36292 + 0x240, indexCPS2_Balrog },
    { L"A-Ism Kick Mash", 0x36292 + 0x240, 0x36292 + 0x260, indexCPS2_Balrog },
    { L"V-Ism Punch Mash", 0x36292 + 0x260, 0x36292 + 0x280, indexCPS2_Balrog },
    { L"V-Ism Kick Mash", 0x36292 + 0x280, 0x36292 + 0x2A0, indexCPS2_Balrog },
    { L"Priority Win", 0x36292 + 0x2A0, 0x36292 + 0x2C0, indexCPS2_Balrog },
    { L"Damage Reduction", 0x36292 + 0x2C0, 0x36292 + 0x2E0, indexCPS2_Balrog },
    { L"Just Defend", 0x36292 + 0x2e0, 0x36292 + 0x300, indexCPS2_Balrog },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMP[] =
{
    { L"X-Ism Punch", 0x30812, 0x30832, indexCPS2_Cammy, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30832, 0x30852, indexCPS2_Cammy, 0x01 },
    { L"X-Ism Punch Extra 2", 0x30852, 0x30872, indexCPS2_Cammy, 0x00 },
    { L"X-Ism Punch Super Trail Light", 0x30872, 0x30892, indexCPS2_Cammy, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30892, 0x308b2, indexCPS2_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMK[] =
{
    { L"X-Ism Kick", 0x308b2, 0x308d2, indexCPS2_Cammy, 0x00 },
    { L"X-Ism Kick Extra 1", 0x308d2, 0x308f2, indexCPS2_Cammy, 0x01 },
    { L"X-Ism Kick Extra 2", 0x308f2, 0x30912, indexCPS2_Cammy, 0x00 },
    { L"X-Ism Kick Super Trail Light", 0x30912, 0x30932, indexCPS2_Cammy, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30932, 0x30952, indexCPS2_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMP[] =
{
    { L"A-Ism Punch", 0x30952, 0x30972, indexCPS2_Cammy, 0x00 },
    { L"A-Ism Punch Extra 1", 0x30972, 0x30992, indexCPS2_Cammy, 0x01 },
    { L"A-Ism Punch Extra 2", 0x30992, 0x309b2, indexCPS2_Cammy, 0x00 },
    { L"A-Ism Punch Super Trail Light", 0x309b2, 0x309d2, indexCPS2_Cammy, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x309d2, 0x309f2, indexCPS2_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMK[] =
{
    { L"A-Ism Kick", 0x309f2, 0x30a12, indexCPS2_Cammy, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30a12, 0x30a32, indexCPS2_Cammy, 0x01 },
    { L"A-Ism Kick Extra 2", 0x30a32, 0x30a52, indexCPS2_Cammy, 0x00 },
    { L"A-Ism Kick Super Trail Light", 0x30a52, 0x30a72, indexCPS2_Cammy, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x30a72, 0x30a92, indexCPS2_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMP[] =
{
    { L"V-Ism Punch", 0x30a92, 0x30ab2, indexCPS2_Cammy, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30ab2, 0x30ad2, indexCPS2_Cammy, 0x01 },
    { L"V-Ism Punch Extra 2", 0x30ad2, 0x30af2, indexCPS2_Cammy, 0x00 },
    { L"V-Ism Punch Super Trail Light", 0x30af2, 0x30b12, indexCPS2_Cammy, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30b12, 0x30b32, indexCPS2_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMK[] =
{
    { L"V-Ism Kick", 0x30b32, 0x30b52, indexCPS2_Cammy, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30b52, 0x30b72, indexCPS2_Cammy, 0x01 },
    { L"V-Ism Kick Extra 2", 0x30b72, 0x30b92, indexCPS2_Cammy, 0x00 },
    { L"V-Ism Kick Super Trail Light", 0x30b92, 0x30bb2, indexCPS2_Cammy, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30bb2, 0x30bd2, indexCPS2_Cammy, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_STATUS[] =
{
    { L"Burned 1", 0x36592 + 0x00, 0x36592 + 0x20, indexCPS2_Cammy },
    { L"Burned 2", 0x36592 + 0x20, 0x36592 + 0x40, indexCPS2_Cammy },
    { L"Psycho Crusher Burned 1", 0x36592 + 0x40, 0x36592 + 0x60, indexCPS2_Cammy },
    { L"Psycho Crusher Burned 2", 0x36592 + 0x60, 0x36592 + 0x80, indexCPS2_Cammy },
    { L"V-Ism P1 After Effect 1", 0x36592 + 0x80, 0x36592 + 0xA0, indexCPS2_Cammy },
    { L"V-Ism P1 After Effect 2", 0x36592 + 0xA0, 0x36592 + 0xC0, indexCPS2_Cammy },
    { L"V-Ism P2 After Effect 1", 0x36592 + 0xC0, 0x36592 + 0xE0, indexCPS2_Cammy },
    { L"V-Ism P2 After Effect 2", 0x36592 + 0xe0, 0x36592 + 0x100, indexCPS2_Cammy },
    { L"X-Ism Punch Zapped", 0x36592 + 0x100, 0x36592 + 0x120, indexCPS2_Cammy },
    { L"X-Ism Kick Zapped", 0x36592 + 0x120, 0x36592 + 0x140, indexCPS2_Cammy },
    { L"A-Ism Punch Zapped", 0x36592 + 0x140, 0x36592 + 0x160, indexCPS2_Cammy },
    { L"A-Ism Kick Zapped", 0x36592 + 0x160, 0x36592 + 0x180, indexCPS2_Cammy },
    { L"V-Ism Punch Zapped", 0x36592 + 0x180, 0x36592 + 0x1A0, indexCPS2_Cammy },
    { L"V-Ism Kick Zapped", 0x36592 + 0x1A0, 0x36592 + 0x1C0, indexCPS2_Cammy },
    { L"Zapped Skeleton", 0x36592 + 0x1C0, 0x36592 + 0x1E0, indexCPS2_Cammy },
    { L"X-Ism Punch Mash", 0x36592 + 0x1e0, 0x36592 + 0x200, indexCPS2_Cammy },
    { L"X-Ism Kick Mash", 0x36592 + 0x200, 0x36592 + 0x220, indexCPS2_Cammy },
    { L"A-Ism Punch Mash", 0x36592 + 0x220, 0x36592 + 0x240, indexCPS2_Cammy },
    { L"A-Ism Kick Mash", 0x36592 + 0x240, 0x36592 + 0x260, indexCPS2_Cammy },
    { L"V-Ism Punch Mash", 0x36592 + 0x260, 0x36592 + 0x280, indexCPS2_Cammy },
    { L"V-Ism Kick Mash", 0x36592 + 0x280, 0x36592 + 0x2A0, indexCPS2_Cammy },
    { L"Priority Win", 0x36592 + 0x2A0, 0x36592 + 0x2C0, indexCPS2_Cammy },
    { L"Damage Reduction", 0x36592 + 0x2C0, 0x36592 + 0x2E0, indexCPS2_Cammy },
    { L"Just Defend", 0x36592 + 0x2e0, 0x36592 + 0x300, indexCPS2_Cammy },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMP[] =
{
    { L"X-Ism Punch", 0x30bd2, 0x30bf2, indexCPS2_EHonda, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30bf2, 0x30c12 },
    { L"X-Ism Punch Extra 2", 0x30c12, 0x30c32 },
    { L"X-Ism Punch Super Trail Light", 0x30c32, 0x30c52, indexCPS2_EHonda, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x30c52, 0x30c72, indexCPS2_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMK[] =
{
    { L"X-Ism Kick", 0x30c72, 0x30c92, indexCPS2_EHonda, 0x00 },
    { L"X-Ism Kick Extra 1", 0x30c92, 0x30cb2 },
    { L"X-Ism Kick Extra 2", 0x30cb2, 0x30cd2 },
    { L"X-Ism Kick Super Trail Light", 0x30cd2, 0x30cf2, indexCPS2_EHonda, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x30cf2, 0x30d12, indexCPS2_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMP[] =
{
    { L"A-Ism Punch", 0x30d12, 0x30d32, indexCPS2_EHonda, 0x00 },
    { L"A-Ism Punch Extra 1", 0x30d32, 0x30d52 },
    { L"A-Ism Punch Extra 2", 0x30d52, 0x30d72 },
    { L"A-Ism Punch Super Trail Light", 0x30d72, 0x30d92, indexCPS2_EHonda, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x30d92, 0x30db2, indexCPS2_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMK[] =
{
    { L"A-Ism Kick", 0x30db2, 0x30dd2, indexCPS2_EHonda, 0x00 },
    { L"A-Ism Kick Extra 1", 0x30dd2, 0x30df2 },
    { L"A-Ism Kick Extra 2", 0x30df2, 0x30e12 },
    { L"A-Ism Kick Super Trail Light", 0x30e12, 0x30e32, indexCPS2_EHonda, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x30e32, 0x30e52, indexCPS2_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMP[] =
{
    { L"V-Ism Punch", 0x30e52, 0x30e72, indexCPS2_EHonda, 0x00 },
    { L"V-Ism Punch Extra 1", 0x30e72, 0x30e92 },
    { L"V-Ism Punch Extra 2", 0x30e92, 0x30eb2 },
    { L"V-Ism Punch Super Trail Light", 0x30eb2, 0x30ed2, indexCPS2_EHonda, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x30ed2, 0x30ef2, indexCPS2_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMK[] =
{
    { L"V-Ism Kick", 0x30ef2, 0x30f12, indexCPS2_EHonda, 0x00 },
    { L"V-Ism Kick Extra 1", 0x30f12, 0x30f32 },
    { L"V-Ism Kick Extra 2", 0x30f32, 0x30f52 },
    { L"V-Ism Kick Super Trail Light", 0x30f52, 0x30f72, indexCPS2_EHonda, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x30f72, 0x30f92, indexCPS2_EHonda, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_STATUS[] =
{
    { L"Burned 1", 0x36892 + 0x00, 0x36892 + 0x20, indexCPS2_EHonda },
    { L"Burned 2", 0x36892 + 0x20, 0x36892 + 0x40, indexCPS2_EHonda },
    { L"Psycho Crusher Burned 1", 0x36892 + 0x40, 0x36892 + 0x60, indexCPS2_EHonda },
    { L"Psycho Crusher Burned 2", 0x36892 + 0x60, 0x36892 + 0x80, indexCPS2_EHonda },
    { L"V-Ism P1 After Effect 1", 0x36892 + 0x80, 0x36892 + 0xA0, indexCPS2_EHonda },
    { L"V-Ism P1 After Effect 2", 0x36892 + 0xA0, 0x36892 + 0xC0, indexCPS2_EHonda },
    { L"V-Ism P2 After Effect 1", 0x36892 + 0xC0, 0x36892 + 0xE0, indexCPS2_EHonda },
    { L"V-Ism P2 After Effect 2", 0x36892 + 0xe0, 0x36892 + 0x100, indexCPS2_EHonda },
    { L"X-Ism Punch Zapped", 0x36892 + 0x100, 0x36892 + 0x120, indexCPS2_EHonda },
    { L"X-Ism Kick Zapped", 0x36892 + 0x120, 0x36892 + 0x140, indexCPS2_EHonda },
    { L"A-Ism Punch Zapped", 0x36892 + 0x140, 0x36892 + 0x160, indexCPS2_EHonda },
    { L"A-Ism Kick Zapped", 0x36892 + 0x160, 0x36892 + 0x180, indexCPS2_EHonda },
    { L"V-Ism Punch Zapped", 0x36892 + 0x180, 0x36892 + 0x1A0, indexCPS2_EHonda },
    { L"V-Ism Kick Zapped", 0x36892 + 0x1A0, 0x36892 + 0x1C0, indexCPS2_EHonda },
    { L"Zapped Skeleton", 0x36892 + 0x1C0, 0x36892 + 0x1E0, indexCPS2_EHonda },
    { L"X-Ism Punch Mash", 0x36892 + 0x1e0, 0x36892 + 0x200, indexCPS2_EHonda },
    { L"X-Ism Kick Mash", 0x36892 + 0x200, 0x36892 + 0x220, indexCPS2_EHonda },
    { L"A-Ism Punch Mash", 0x36892 + 0x220, 0x36892 + 0x240, indexCPS2_EHonda },
    { L"A-Ism Kick Mash", 0x36892 + 0x240, 0x36892 + 0x260, indexCPS2_EHonda },
    { L"V-Ism Punch Mash", 0x36892 + 0x260, 0x36892 + 0x280, indexCPS2_EHonda },
    { L"V-Ism Kick Mash", 0x36892 + 0x280, 0x36892 + 0x2A0, indexCPS2_EHonda },
    { L"Priority Win", 0x36892 + 0x2A0, 0x36892 + 0x2C0, indexCPS2_EHonda },
    { L"Damage Reduction", 0x36892 + 0x2C0, 0x36892 + 0x2E0, indexCPS2_EHonda },
    { L"Just Defend", 0x36892 + 0x2e0, 0x36892 + 0x300, indexCPS2_EHonda },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMP[] =
{
    { L"X-Ism Punch", 0x30f92, 0x30fb2, indexCPS2_Blanka, 0x00 },
    { L"X-Ism Punch Extra 1", 0x30fb2, 0x30fd2 },
    { L"X-Ism Punch Extra 2", 0x30fd2, 0x30ff2 },
    { L"X-Ism Punch Super Trail Light", 0x30ff2, 0x31012, indexCPS2_Blanka, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31012, 0x31032, indexCPS2_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMK[] =
{
    { L"X-Ism Kick", 0x31032, 0x31052, indexCPS2_Blanka, 0x00 },
    { L"X-Ism Kick Extra 1", 0x31052, 0x31072 },
    { L"X-Ism Kick Extra 2", 0x31072, 0x31092 },
    { L"X-Ism Kick Super Trail Light", 0x31092, 0x310b2, indexCPS2_Blanka, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x310b2, 0x310d2, indexCPS2_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMP[] =
{
    { L"A-Ism Punch", 0x310d2, 0x310f2, indexCPS2_Blanka, 0x00 },
    { L"A-Ism Punch Extra 1", 0x310f2, 0x31112 },
    { L"A-Ism Punch Extra 2", 0x31112, 0x31132 },
    { L"A-Ism Punch Super Trail Light", 0x31132, 0x31152, indexCPS2_Blanka, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31152, 0x31172, indexCPS2_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMK[] =
{
    { L"A-Ism Kick", 0x31172, 0x31192, indexCPS2_Blanka, 0x00 },
    { L"A-Ism Kick Extra 1", 0x31192, 0x311b2 },
    { L"A-Ism Kick Extra 2", 0x311b2, 0x311d2 },
    { L"A-Ism Kick Super Trail Light", 0x311d2, 0x311f2, indexCPS2_Blanka, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x311f2, 0x31212, indexCPS2_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMP[] =
{
    { L"V-Ism Punch", 0x31212, 0x31232, indexCPS2_Blanka, 0x00 },
    { L"V-Ism Punch Extra 1", 0x31232, 0x31252 },
    { L"V-Ism Punch Extra 2", 0x31252, 0x31272 },
    { L"V-Ism Punch Super Trail Light", 0x31272, 0x31292, indexCPS2_Blanka, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31292, 0x312b2, indexCPS2_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMK[] =
{
    { L"V-Ism Kick", 0x312b2, 0x312d2, indexCPS2_Blanka, 0x00 },
    { L"V-Ism Kick Extra 1", 0x312d2, 0x312f2 },
    { L"V-Ism Kick Extra 2", 0x312f2, 0x31312 },
    { L"V-Ism Kick Super Trail Light", 0x31312, 0x31332, indexCPS2_Blanka, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31332, 0x31352, indexCPS2_Blanka, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_STATUS[] =
{
    { L"Burned 1", 0x36b92 + 0x00, 0x36b92 + 0x20, indexCPS2_Blanka },
    { L"Burned 2", 0x36b92 + 0x20, 0x36b92 + 0x40, indexCPS2_Blanka },
    { L"Psycho Crusher Burned 1", 0x36b92 + 0x40, 0x36b92 + 0x60, indexCPS2_Blanka },
    { L"Psycho Crusher Burned 2", 0x36b92 + 0x60, 0x36b92 + 0x80, indexCPS2_Blanka },
    { L"V-Ism P1 After Effect 1", 0x36b92 + 0x80, 0x36b92 + 0xA0, indexCPS2_Blanka },
    { L"V-Ism P1 After Effect 2", 0x36b92 + 0xA0, 0x36b92 + 0xC0, indexCPS2_Blanka },
    { L"V-Ism P2 After Effect 1", 0x36b92 + 0xC0, 0x36b92 + 0xE0, indexCPS2_Blanka },
    { L"V-Ism P2 After Effect 2", 0x36b92 + 0xe0, 0x36b92 + 0x100, indexCPS2_Blanka },
    { L"X-Ism Punch Zapped", 0x36b92 + 0x100, 0x36b92 + 0x120, indexCPS2_Blanka },
    { L"X-Ism Kick Zapped", 0x36b92 + 0x120, 0x36b92 + 0x140, indexCPS2_Blanka },
    { L"A-Ism Punch Zapped", 0x36b92 + 0x140, 0x36b92 + 0x160, indexCPS2_Blanka },
    { L"A-Ism Kick Zapped", 0x36b92 + 0x160, 0x36b92 + 0x180, indexCPS2_Blanka },
    { L"V-Ism Punch Zapped", 0x36b92 + 0x180, 0x36b92 + 0x1A0, indexCPS2_Blanka },
    { L"V-Ism Kick Zapped", 0x36b92 + 0x1A0, 0x36b92 + 0x1C0, indexCPS2_Blanka },
    { L"Zapped Skeleton", 0x36b92 + 0x1C0, 0x36b92 + 0x1E0, indexCPS2_Blanka },
    { L"X-Ism Punch Mash", 0x36b92 + 0x1e0, 0x36b92 + 0x200, indexCPS2_Blanka },
    { L"X-Ism Kick Mash", 0x36b92 + 0x200, 0x36b92 + 0x220, indexCPS2_Blanka },
    { L"A-Ism Punch Mash", 0x36b92 + 0x220, 0x36b92 + 0x240, indexCPS2_Blanka },
    { L"A-Ism Kick Mash", 0x36b92 + 0x240, 0x36b92 + 0x260, indexCPS2_Blanka },
    { L"V-Ism Punch Mash", 0x36b92 + 0x260, 0x36b92 + 0x280, indexCPS2_Blanka },
    { L"V-Ism Kick Mash", 0x36b92 + 0x280, 0x36b92 + 0x2A0, indexCPS2_Blanka },
    { L"Priority Win", 0x36b92 + 0x2A0, 0x36b92 + 0x2C0, indexCPS2_Blanka },
    { L"Damage Reduction", 0x36b92 + 0x2C0, 0x36b92 + 0x2E0, indexCPS2_Blanka },
    { L"Just Defend", 0x36b92 + 0x2e0, 0x36b92 + 0x300, indexCPS2_Blanka },
};

const sGame_PaletteDataset SFA3_A_RMIKA_XISMP[] =
{
    { L"X-Ism Punch", 0x31352, 0x31372, indexCPS2_RMika, 0x00 },
    { L"X-Ism Punch Extra 1", 0x31372, 0x31392 },
    { L"X-Ism Punch Extra 2: Wrestling Ring / Tire", 0x31392, 0x313b2, indexCPS2_RMika, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x313b2, 0x313d2, indexCPS2_RMika, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x313d2, 0x313f2, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_XISMK[] =
{
    { L"X-Ism Kick", 0x313f2, 0x31412, indexCPS2_RMika, 0x00 },
    { L"X-Ism Kick Extra 1", 0x31412, 0x31432 },
    { L"X-Ism Kick Extra 2: Wrestling Ring / Tire", 0x31432, 0x31452, indexCPS2_RMika, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x31452, 0x31472, indexCPS2_RMika, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31472, 0x31492, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMP[] =
{
    { L"A-Ism Punch", 0x31492, 0x314b2, indexCPS2_RMika, 0x00 },
    { L"A-Ism Punch Extra 1", 0x314b2, 0x314d2 },
    { L"A-Ism Punch Extra 2: Wrestling Ring / Tire", 0x314d2, 0x314f2, indexCPS2_RMika, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x314f2, 0x31512, indexCPS2_RMika, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31512, 0x31532, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMK[] =
{
    { L"A-Ism Kick", 0x31532, 0x31552, indexCPS2_RMika, 0x00 },
    { L"A-Ism Kick Extra 1", 0x31552, 0x31572 },
    { L"A-Ism Kick Extra 2: Wrestling Ring / Tire", 0x31572, 0x31592, indexCPS2_RMika, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x31592, 0x315b2, indexCPS2_RMika, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x315b2, 0x315d2, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMP[] =
{
    { L"V-Ism Punch", 0x315d2, 0x315f2, indexCPS2_RMika, 0x00 },
    { L"V-Ism Punch Extra 1", 0x315f2, 0x31612 },
    { L"V-Ism Punch Extra 2: Wrestling Ring / Tire", 0x31612, 0x31632, indexCPS2_RMika, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x31632, 0x31652, indexCPS2_RMika, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31652, 0x31672, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMK[] =
{
    { L"V-Ism Kick", 0x31672, 0x31692, indexCPS2_RMika, 0x00 },
    { L"V-Ism Kick Extra 1", 0x31692, 0x316b2 },
    { L"V-Ism Kick Extra 2: Wrestling Ring / Tire", 0x316b2, 0x316d2, indexCPS2_RMika, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x316d2, 0x316f2, indexCPS2_RMika, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x316f2, 0x31712, indexCPS2_RMika, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_STATUS[] =
{
    { L"Burned 1", 0x36e92 + 0x00, 0x36e92 + 0x20, indexCPS2_RMika },
    { L"Burned 2", 0x36e92 + 0x20, 0x36e92 + 0x40, indexCPS2_RMika },
    { L"Psycho Crusher Burned 1", 0x36e92 + 0x40, 0x36e92 + 0x60, indexCPS2_RMika },
    { L"Psycho Crusher Burned 2", 0x36e92 + 0x60, 0x36e92 + 0x80, indexCPS2_RMika },
    { L"V-Ism P1 After Effect 1", 0x36e92 + 0x80, 0x36e92 + 0xA0, indexCPS2_RMika },
    { L"V-Ism P1 After Effect 2", 0x36e92 + 0xA0, 0x36e92 + 0xC0, indexCPS2_RMika },
    { L"V-Ism P2 After Effect 1", 0x36e92 + 0xC0, 0x36e92 + 0xE0, indexCPS2_RMika },
    { L"V-Ism P2 After Effect 2", 0x36e92 + 0xe0, 0x36e92 + 0x100, indexCPS2_RMika },
    { L"X-Ism Punch Zapped", 0x36e92 + 0x100, 0x36e92 + 0x120, indexCPS2_RMika },
    { L"X-Ism Kick Zapped", 0x36e92 + 0x120, 0x36e92 + 0x140, indexCPS2_RMika },
    { L"A-Ism Punch Zapped", 0x36e92 + 0x140, 0x36e92 + 0x160, indexCPS2_RMika },
    { L"A-Ism Kick Zapped", 0x36e92 + 0x160, 0x36e92 + 0x180, indexCPS2_RMika },
    { L"V-Ism Punch Zapped", 0x36e92 + 0x180, 0x36e92 + 0x1A0, indexCPS2_RMika },
    { L"V-Ism Kick Zapped", 0x36e92 + 0x1A0, 0x36e92 + 0x1C0, indexCPS2_RMika },
    { L"Zapped Skeleton", 0x36e92 + 0x1C0, 0x36e92 + 0x1E0, indexCPS2_RMika },
    { L"X-Ism Punch Mash", 0x36e92 + 0x1e0, 0x36e92 + 0x200, indexCPS2_RMika },
    { L"X-Ism Kick Mash", 0x36e92 + 0x200, 0x36e92 + 0x220, indexCPS2_RMika },
    { L"A-Ism Punch Mash", 0x36e92 + 0x220, 0x36e92 + 0x240, indexCPS2_RMika },
    { L"A-Ism Kick Mash", 0x36e92 + 0x240, 0x36e92 + 0x260, indexCPS2_RMika },
    { L"V-Ism Punch Mash", 0x36e92 + 0x260, 0x36e92 + 0x280, indexCPS2_RMika },
    { L"V-Ism Kick Mash", 0x36e92 + 0x280, 0x36e92 + 0x2A0, indexCPS2_RMika },
    { L"Priority Win", 0x36e92 + 0x2A0, 0x36e92 + 0x2C0, indexCPS2_RMika },
    { L"Damage Reduction", 0x36e92 + 0x2C0, 0x36e92 + 0x2E0, indexCPS2_RMika },
    { L"Just Defend", 0x36e92 + 0x2e0, 0x36e92 + 0x300, indexCPS2_RMika },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMP[] =
{
    { L"X-Ism Punch", 0x31712, 0x31732, indexCPS2_Cody, 0x00 },
    { L"Dagger/Cyclone X-Ism Punch", 0x31732, 0x31752 },
    { L"X-Ism Punch Extra 2", 0x31752, 0x31772 },
    { L"X-Ism Punch Super Trail Light", 0x31772, 0x31792, indexCPS2_Cody, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31792, 0x317b2, indexCPS2_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMK[] =
{
    { L"X-Ism Kick", 0x317b2, 0x317d2, indexCPS2_Cody, 0x00 },
    { L"Dagger/Cyclone X-Ism Kick", 0x317d2, 0x317f2 },
    { L"X-Ism Kick Extra 2", 0x317f2, 0x31812 },
    { L"X-Ism Kick Super Trail Light", 0x31812, 0x31832, indexCPS2_Cody, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31832, 0x31852, indexCPS2_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMP[] =
{
    { L"A-Ism Punch", 0x31852, 0x31872, indexCPS2_Cody, 0x00 },
    { L"Dagger/Cyclone A-Ism Punch", 0x31872, 0x31892 },
    { L"A-Ism Punch Extra 2", 0x31892, 0x318b2 },
    { L"A-Ism Punch Super Trail Light", 0x318b2, 0x318d2, indexCPS2_Cody, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x318d2, 0x318f2, indexCPS2_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMK[] =
{
    { L"A-Ism Kick", 0x318f2, 0x31912, indexCPS2_Cody, 0x00 },
    { L"Dagger/Cyclone A-Ism Kick", 0x31912, 0x31932 },
    { L"A-Ism Kick Extra 2", 0x31932, 0x31952 },
    { L"A-Ism Kick Super Trail Light", 0x31952, 0x31972, indexCPS2_Cody, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x31972, 0x31992, indexCPS2_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMP[] =
{
    { L"V-Ism Punch", 0x31992, 0x319b2, indexCPS2_Cody, 0x00 },
    { L"Dagger/Cyclone V-Ism Punch", 0x319b2, 0x319d2 },
    { L"V-Ism Punch Extra 2", 0x319d2, 0x319f2 },
    { L"V-Ism Punch Super Trail Light", 0x319f2, 0x31a12, indexCPS2_Cody, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31a12, 0x31a32, indexCPS2_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMK[] =
{
    { L"V-Ism Kick", 0x31a32, 0x31a52, indexCPS2_Cody, 0x00 },
    { L"Dagger/Cyclone V-Ism Kick", 0x31a52, 0x31a72 },
    { L"V-Ism Kick Extra 2", 0x31a72, 0x31a92 },
    { L"V-Ism Kick Super Trail Light", 0x31a92, 0x31ab2, indexCPS2_Cody, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31ab2, 0x31ad2, indexCPS2_Cody, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_STATUS[] =
{
    { L"Burned 1", 0x37192 + 0x00, 0x37192 + 0x20, indexCPS2_Cody },
    { L"Burned 2", 0x37192 + 0x20, 0x37192 + 0x40, indexCPS2_Cody },
    { L"Psycho Crusher Burned 1", 0x37192 + 0x40, 0x37192 + 0x60, indexCPS2_Cody },
    { L"Psycho Crusher Burned 2", 0x37192 + 0x60, 0x37192 + 0x80, indexCPS2_Cody },
    { L"V-Ism P1 After Effect 1", 0x37192 + 0x80, 0x37192 + 0xA0, indexCPS2_Cody },
    { L"V-Ism P1 After Effect 2", 0x37192 + 0xA0, 0x37192 + 0xC0, indexCPS2_Cody },
    { L"V-Ism P2 After Effect 1", 0x37192 + 0xC0, 0x37192 + 0xE0, indexCPS2_Cody },
    { L"V-Ism P2 After Effect 2", 0x37192 + 0xe0, 0x37192 + 0x100, indexCPS2_Cody },
    { L"X-Ism Punch Zapped", 0x37192 + 0x100, 0x37192 + 0x120, indexCPS2_Cody },
    { L"X-Ism Kick Zapped", 0x37192 + 0x120, 0x37192 + 0x140, indexCPS2_Cody },
    { L"A-Ism Punch Zapped", 0x37192 + 0x140, 0x37192 + 0x160, indexCPS2_Cody },
    { L"A-Ism Kick Zapped", 0x37192 + 0x160, 0x37192 + 0x180, indexCPS2_Cody },
    { L"V-Ism Punch Zapped", 0x37192 + 0x180, 0x37192 + 0x1A0, indexCPS2_Cody },
    { L"V-Ism Kick Zapped", 0x37192 + 0x1A0, 0x37192 + 0x1C0, indexCPS2_Cody },
    { L"Zapped Skeleton", 0x37192 + 0x1C0, 0x37192 + 0x1E0, indexCPS2_Cody },
    { L"X-Ism Punch Mash", 0x37192 + 0x1e0, 0x37192 + 0x200, indexCPS2_Cody },
    { L"X-Ism Kick Mash", 0x37192 + 0x200, 0x37192 + 0x220, indexCPS2_Cody },
    { L"A-Ism Punch Mash", 0x37192 + 0x220, 0x37192 + 0x240, indexCPS2_Cody },
    { L"A-Ism Kick Mash", 0x37192 + 0x240, 0x37192 + 0x260, indexCPS2_Cody },
    { L"V-Ism Punch Mash", 0x37192 + 0x260, 0x37192 + 0x280, indexCPS2_Cody },
    { L"V-Ism Kick Mash", 0x37192 + 0x280, 0x37192 + 0x2A0, indexCPS2_Cody },
    { L"Priority Win", 0x37192 + 0x2A0, 0x37192 + 0x2C0, indexCPS2_Cody },
    { L"Damage Reduction", 0x37192 + 0x2C0, 0x37192 + 0x2E0, indexCPS2_Cody },
    { L"Just Defend", 0x37192 + 0x2e0, 0x37192 + 0x300, indexCPS2_Cody },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMP[] =
{
    { L"X-Ism Punch", 0x31ad2, 0x31af2, indexCPS2_Vega, 0x00, &pairNext },
    { L"X-Ism Punch Claws", 0x031AF2, 0x031B12, indexCPS2_Vega, 1 },
    { L"X-Ism Punch Extra 2", 0x31b12, 0x31b32 },
    { L"X-Ism Punch Super Trail Light", 0x31b32, 0x31b52, indexCPS2_Vega, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31b52, 0x31b72, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMK[] =
{
    { L"X-Ism Kick", 0x31b72, 0x31b92, indexCPS2_Vega, 0x00, &pairNext },
    { L"X-Ism Kick Claws", 0x031B92, 0x031BB2, indexCPS2_Vega, 1 },
    { L"X-Ism Kick Extra 2", 0x31bb2, 0x31bd2 },
    { L"X-Ism Kick Super Trail Light", 0x31bd2, 0x31bf2, indexCPS2_Vega, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31bf2, 0x31c12, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMP[] =
{
    { L"A-Ism Punch", 0x31c12, 0x31c32, indexCPS2_Vega, 0x00, &pairNext },
    { L"A-Ism Punch Claws", 0x031C32, 0x031C52, indexCPS2_Vega, 1 },
    { L"A-Ism Punch Extra 2", 0x31c52, 0x31c72 },
    { L"A-Ism Punch Super Trail Light", 0x31c72, 0x31c92, indexCPS2_Vega, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x31c92, 0x31cb2, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMK[] =
{
    { L"A-Ism Kick", 0x31cb2, 0x31cd2, indexCPS2_Vega, 0x00, &pairNext },
    { L"A-Ism Kick Claws", 0x031CD2, 0x031CF2, indexCPS2_Vega, 1 },
    { L"A-Ism Kick Extra 2", 0x31cf2, 0x31d12 },
    { L"A-Ism Kick Super Trail Light", 0x31d12, 0x31d32, indexCPS2_Vega, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x31d32, 0x31d52, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMP[] =
{
    { L"V-Ism Punch", 0x31d52, 0x31d72, indexCPS2_Vega, 0x00, &pairNext },
    { L"V-Ism Punch Claws", 0x031D72, 0x031D92, indexCPS2_Vega, 1 },
    { L"V-Ism Punch Extra 2", 0x31d92, 0x31db2 },
    { L"V-Ism Punch Super Trail Light", 0x31db2, 0x31dd2, indexCPS2_Vega, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x31dd2, 0x31df2, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMK[] =
{
    { L"V-Ism Kick", 0x31df2, 0x31e12, indexCPS2_Vega, 0x00, &pairNext },
    { L"V-Ism Kick Claws", 0x031E12, 0x031E32, indexCPS2_Vega, 1 },
    { L"V-Ism Kick Extra 2", 0x31e32, 0x31e52 },
    { L"V-Ism Kick Super Trail Light", 0x31e52, 0x31e72, indexCPS2_Vega, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x31e72, 0x31e92, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_STATUS[] =
{
    { L"Burned 1", 0x37492 + 0x00, 0x37492 + 0x20, indexCPS2_Vega },
    { L"Burned 2", 0x37492 + 0x20, 0x37492 + 0x40, indexCPS2_Vega },
    { L"Psycho Crusher Burned 1", 0x37492 + 0x40, 0x37492 + 0x60, indexCPS2_Vega },
    { L"Psycho Crusher Burned 2", 0x37492 + 0x60, 0x37492 + 0x80, indexCPS2_Vega },
    { L"V-Ism P1 After Effect 1", 0x37492 + 0x80, 0x37492 + 0xA0, indexCPS2_Vega },
    { L"V-Ism P1 After Effect 2", 0x37492 + 0xA0, 0x37492 + 0xC0, indexCPS2_Vega },
    { L"V-Ism P2 After Effect 1", 0x37492 + 0xC0, 0x37492 + 0xE0, indexCPS2_Vega },
    { L"V-Ism P2 After Effect 2", 0x37492 + 0xe0, 0x37492 + 0x100, indexCPS2_Vega },
    { L"X-Ism Punch Zapped", 0x37492 + 0x100, 0x37492 + 0x120, indexCPS2_Vega },
    { L"X-Ism Kick Zapped", 0x37492 + 0x120, 0x37492 + 0x140, indexCPS2_Vega },
    { L"A-Ism Punch Zapped", 0x37492 + 0x140, 0x37492 + 0x160, indexCPS2_Vega },
    { L"A-Ism Kick Zapped", 0x37492 + 0x160, 0x37492 + 0x180, indexCPS2_Vega },
    { L"V-Ism Punch Zapped", 0x37492 + 0x180, 0x37492 + 0x1A0, indexCPS2_Vega },
    { L"V-Ism Kick Zapped", 0x37492 + 0x1A0, 0x37492 + 0x1C0, indexCPS2_Vega },
    { L"Zapped Skeleton", 0x37492 + 0x1C0, 0x37492 + 0x1E0, indexCPS2_Vega },
    { L"X-Ism Punch Mash", 0x37492 + 0x1e0, 0x37492 + 0x200, indexCPS2_Vega },
    { L"X-Ism Kick Mash", 0x37492 + 0x200, 0x37492 + 0x220, indexCPS2_Vega },
    { L"A-Ism Punch Mash", 0x37492 + 0x220, 0x37492 + 0x240, indexCPS2_Vega },
    { L"A-Ism Kick Mash", 0x37492 + 0x240, 0x37492 + 0x260, indexCPS2_Vega },
    { L"V-Ism Punch Mash", 0x37492 + 0x260, 0x37492 + 0x280, indexCPS2_Vega },
    { L"V-Ism Kick Mash", 0x37492 + 0x280, 0x37492 + 0x2A0, indexCPS2_Vega },
    { L"Priority Win", 0x37492 + 0x2A0, 0x37492 + 0x2C0, indexCPS2_Vega },
    { L"Damage Reduction", 0x37492 + 0x2C0, 0x37492 + 0x2E0, indexCPS2_Vega },
    { L"Just Defend", 0x37492 + 0x2e0, 0x37492 + 0x300, indexCPS2_Vega },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMP[] =
{
    { L"X-Ism Punch", 0x31e92, 0x31eb2, indexCPS2_Karin, 0x00 },
    { L"X-Ism Punch Extra 1: Butler", 0x31eb2, 0x31ed2, indexCPS2_Karin, 0x02, &pairNext },
    { L"X-Ism Punch Extra 2: Helicopter", 0x31ed2, 0x31ef2, indexCPS2_Karin, 0x03 },
    { L"X-Ism Punch Super Trail Light", 0x31ef2, 0x31f12, indexCPS2_Karin, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x31f12, 0x31f32, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMK[] =
{
    { L"X-Ism Kick", 0x31f32, 0x31f52, indexCPS2_Karin, 0x00 },
    { L"X-Ism Kick Extra 1: Butler", 0x31f52, 0x31f72, indexCPS2_Karin, 0x02, &pairNext },
    { L"X-Ism Kick Extra 2: Helicopter", 0x31f72, 0x31f92, indexCPS2_Karin, 0x03 },
    { L"X-Ism Kick Super Trail Light", 0x31f92, 0x31fb2, indexCPS2_Karin, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x31fb2, 0x31fd2, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMP[] =
{
    { L"A-Ism Punch", 0x31fd2, 0x31ff2, indexCPS2_Karin, 0x00 },
    { L"A-Ism Punch Extra 1: Butler", 0x31ff2, 0x32012, indexCPS2_Karin, 0x02, &pairNext },
    { L"A-Ism Punch Extra 2: Helicopter", 0x32012, 0x32032, indexCPS2_Karin, 0x03 },
    { L"A-Ism Punch Super Trail Light", 0x32032, 0x32052, indexCPS2_Karin, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x32052, 0x32072, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMK[] =
{
    { L"A-Ism Kick", 0x32072, 0x32092, indexCPS2_Karin, 0x00 },
    { L"A-Ism Kick Extra 1: Butler", 0x32092, 0x320b2, indexCPS2_Karin, 0x02, &pairNext },
    { L"A-Ism Kick Extra 2: Helicopter", 0x320b2, 0x320d2, indexCPS2_Karin, 0x03 },
    { L"A-Ism Kick Super Trail Light", 0x320d2, 0x320f2, indexCPS2_Karin, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x320f2, 0x32112, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMP[] =
{
    { L"V-Ism Punch", 0x32112, 0x32132, indexCPS2_Karin, 0x00 },
    { L"V-Ism Punch Extra 1: Butler", 0x32132, 0x32152, indexCPS2_Karin, 0x02, &pairNext },
    { L"V-Ism Punch Extra 2: Helicopter", 0x32152, 0x32172, indexCPS2_Karin, 0x03 },
    { L"V-Ism Punch Super Trail Light", 0x32172, 0x32192, indexCPS2_Karin, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32192, 0x321b2, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMK[] =
{
    { L"V-Ism Kick", 0x321b2, 0x321d2, indexCPS2_Karin, 0x00 },
    { L"V-Ism Kick Extra 1: Butler", 0x321d2, 0x321f2, indexCPS2_Karin, 0x02, &pairNext },
    { L"V-Ism Kick Extra 2: Helicopter", 0x321f2, 0x32212, indexCPS2_Karin, 0x03 },
    { L"V-Ism Kick Super Trail Light", 0x32212, 0x32232, indexCPS2_Karin, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x32232, 0x32252, indexCPS2_Karin, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_STATUS[] =
{
    { L"Burned 1", 0x37932 + 0x00, 0x37932 + 0x20, indexCPS2_Karin },
    { L"Burned 2", 0x37932 + 0x20, 0x37932 + 0x40, indexCPS2_Karin },
    { L"Psycho Crusher Burned 1", 0x37932 + 0x40, 0x37932 + 0x60, indexCPS2_Karin },
    { L"Psycho Crusher Burned 2", 0x37932 + 0x60, 0x37932 + 0x80, indexCPS2_Karin },
    { L"V-Ism P1 After Effect 1", 0x37932 + 0x80, 0x37932 + 0xA0, indexCPS2_Karin },
    { L"V-Ism P1 After Effect 2", 0x37932 + 0xA0, 0x37932 + 0xC0, indexCPS2_Karin },
    { L"V-Ism P2 After Effect 1", 0x37932 + 0xC0, 0x37932 + 0xE0, indexCPS2_Karin },
    { L"V-Ism P2 After Effect 2", 0x37932 + 0xe0, 0x37932 + 0x100, indexCPS2_Karin },
    { L"X-Ism Punch Zapped", 0x37932 + 0x100, 0x37932 + 0x120, indexCPS2_Karin },
    { L"X-Ism Kick Zapped", 0x37932 + 0x120, 0x37932 + 0x140, indexCPS2_Karin },
    { L"A-Ism Punch Zapped", 0x37932 + 0x140, 0x37932 + 0x160, indexCPS2_Karin },
    { L"A-Ism Kick Zapped", 0x37932 + 0x160, 0x37932 + 0x180, indexCPS2_Karin },
    { L"V-Ism Punch Zapped", 0x37932 + 0x180, 0x37932 + 0x1A0, indexCPS2_Karin },
    { L"V-Ism Kick Zapped", 0x37932 + 0x1A0, 0x37932 + 0x1C0, indexCPS2_Karin },
    { L"Zapped Skeleton", 0x37932 + 0x1C0, 0x37932 + 0x1E0, indexCPS2_Karin },
    { L"X-Ism Punch Mash", 0x37932 + 0x1e0, 0x37932 + 0x200, indexCPS2_Karin },
    { L"X-Ism Kick Mash", 0x37932 + 0x200, 0x37932 + 0x220, indexCPS2_Karin },
    { L"A-Ism Punch Mash", 0x37932 + 0x220, 0x37932 + 0x240, indexCPS2_Karin },
    { L"A-Ism Kick Mash", 0x37932 + 0x240, 0x37932 + 0x260, indexCPS2_Karin },
    { L"V-Ism Punch Mash", 0x37932 + 0x260, 0x37932 + 0x280, indexCPS2_Karin },
    { L"V-Ism Kick Mash", 0x37932 + 0x280, 0x37932 + 0x2A0, indexCPS2_Karin },
    { L"Priority Win", 0x37932 + 0x2A0, 0x37932 + 0x2C0, indexCPS2_Karin },
    { L"Damage Reduction", 0x37932 + 0x2C0, 0x37932 + 0x2E0, indexCPS2_Karin },
    { L"Just Defend", 0x37932 + 0x2e0, 0x37932 + 0x300, indexCPS2_Karin },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMP[] =
{
    { L"X-Ism Punch", 0x32252, 0x32272, indexCPS2_Juni, 0x00 },
    { L"X-Ism Punch Extra 1", 0x32272, 0x32292 },
    { L"X-Ism Punch Extra 2", 0x32292, 0x322b2 },
    { L"X-Ism Punch Super Trail Light", 0x322b2, 0x322d2, indexCPS2_Juni, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x322d2, 0x322f2, indexCPS2_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMK[] =
{
    { L"X-Ism Kick", 0x322f2, 0x32312, indexCPS2_Juni, 0x00 },
    { L"X-Ism Kick Extra 1", 0x32312, 0x32332 },
    { L"X-Ism Kick Extra 2", 0x32332, 0x32352 },
    { L"X-Ism Kick Super Trail Light", 0x32352, 0x32372, indexCPS2_Juni, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x32372, 0x32392, indexCPS2_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMP[] =
{
    { L"A-Ism Punch", 0x32392, 0x323b2, indexCPS2_Juni, 0x00 },
    { L"A-Ism Punch Extra 1", 0x323b2, 0x323d2 },
    { L"A-Ism Punch Extra 2", 0x323d2, 0x323f2 },
    { L"A-Ism Punch Super Trail Light", 0x323f2, 0x32412, indexCPS2_Juni, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x32412, 0x32432, indexCPS2_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMK[] =
{
    { L"A-Ism Kick", 0x32432, 0x32452, indexCPS2_Juni, 0x00 },
    { L"A-Ism Kick Extra 1", 0x32452, 0x32472 },
    { L"A-Ism Kick Extra 2", 0x32472, 0x32492 },
    { L"A-Ism Kick Super Trail Light", 0x32492, 0x324b2, indexCPS2_Juni, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x324b2, 0x324d2, indexCPS2_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMP[] =
{
    { L"V-Ism Punch", 0x324d2, 0x324f2, indexCPS2_Juni, 0x00 },
    { L"V-Ism Punch Extra 1", 0x324f2, 0x32512 },
    { L"V-Ism Punch Extra 2", 0x32512, 0x32532 },
    { L"V-Ism Punch Super Trail Light", 0x32532, 0x32552, indexCPS2_Juni, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32552, 0x32572, indexCPS2_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMK[] =
{
    { L"V-Ism Kick", 0x32572, 0x32592, indexCPS2_Juni, 0x00 },
    { L"V-Ism Kick Extra 1", 0x32592, 0x325b2 },
    { L"V-Ism Kick Extra 2", 0x325b2, 0x325d2 },
    { L"V-Ism Kick Super Trail Light", 0x325d2, 0x325f2, indexCPS2_Juni, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x325f2, 0x32612, indexCPS2_Juni, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_STATUS[] =
{
    { L"Burned 1", 0x37ff2 + 0x00, 0x37ff2 + 0x20, indexCPS2_Juni },
    { L"Burned 2", 0x37ff2 + 0x20, 0x37ff2 + 0x40, indexCPS2_Juni },
    { L"Psycho Crusher Burned 1", 0x37ff2 + 0x40, 0x37ff2 + 0x60, indexCPS2_Juni },
    { L"Psycho Crusher Burned 2", 0x37ff2 + 0x60, 0x37ff2 + 0x80, indexCPS2_Juni },
    { L"V-Ism P1 After Effect 1", 0x37ff2 + 0x80, 0x37ff2 + 0xA0, indexCPS2_Juni },
    { L"V-Ism P1 After Effect 2", 0x37ff2 + 0xA0, 0x37ff2 + 0xC0, indexCPS2_Juni },
    { L"V-Ism P2 After Effect 1", 0x37ff2 + 0xC0, 0x37ff2 + 0xE0, indexCPS2_Juni },
    { L"V-Ism P2 After Effect 2", 0x37ff2 + 0xe0, 0x37ff2 + 0x100, indexCPS2_Juni },
    { L"X-Ism Punch Zapped", 0x37ff2 + 0x100, 0x37ff2 + 0x120, indexCPS2_Juni },
    { L"X-Ism Kick Zapped", 0x37ff2 + 0x120, 0x37ff2 + 0x140, indexCPS2_Juni },
    { L"A-Ism Punch Zapped", 0x37ff2 + 0x140, 0x37ff2 + 0x160, indexCPS2_Juni },
    { L"A-Ism Kick Zapped", 0x37ff2 + 0x160, 0x37ff2 + 0x180, indexCPS2_Juni },
    { L"V-Ism Punch Zapped", 0x37ff2 + 0x180, 0x37ff2 + 0x1A0, indexCPS2_Juni },
    { L"V-Ism Kick Zapped", 0x37ff2 + 0x1A0, 0x37ff2 + 0x1C0, indexCPS2_Juni },
    { L"Zapped Skeleton", 0x37ff2 + 0x1C0, 0x37ff2 + 0x1E0, indexCPS2_Juni },
    { L"X-Ism Punch Mash", 0x37ff2 + 0x1e0, 0x37ff2 + 0x200, indexCPS2_Juni },
    { L"X-Ism Kick Mash", 0x37ff2 + 0x200, 0x37ff2 + 0x220, indexCPS2_Juni },
    { L"A-Ism Punch Mash", 0x37ff2 + 0x220, 0x37ff2 + 0x240, indexCPS2_Juni },
    { L"A-Ism Kick Mash", 0x37ff2 + 0x240, 0x37ff2 + 0x260, indexCPS2_Juni },
    { L"V-Ism Punch Mash", 0x37ff2 + 0x260, 0x37ff2 + 0x280, indexCPS2_Juni },
    { L"V-Ism Kick Mash", 0x37ff2 + 0x280, 0x37ff2 + 0x2A0, indexCPS2_Juni },
    { L"Priority Win", 0x37ff2 + 0x2A0, 0x37ff2 + 0x2C0, indexCPS2_Juni },
    { L"Damage Reduction", 0x37ff2 + 0x2C0, 0x37ff2 + 0x2E0, indexCPS2_Juni },
    { L"Just Defend", 0x37ff2 + 0x2e0, 0x37ff2 + 0x300, indexCPS2_Juni },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMP[] =
{
    { L"X-Ism Punch", 0x32612, 0x32632, indexCPS2_Juli, 0x00 },
    { L"X-Ism Punch Extra 1", 0x32632, 0x32652 },
    { L"X-Ism Punch Extra 2", 0x32652, 0x32672 },
    { L"X-Ism Punch Super Trail Light", 0x32672, 0x32692, indexCPS2_Juli, 0x00 },
    { L"X-Ism Punch Super Trail Dark", 0x32692, 0x326b2, indexCPS2_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMK[] =
{
    { L"X-Ism Kick", 0x326b2, 0x326d2, indexCPS2_Juli, 0x00 },
    { L"X-Ism Kick Extra 1", 0x326d2, 0x326f2 },
    { L"X-Ism Kick Extra 2", 0x326f2, 0x32712 },
    { L"X-Ism Kick Super Trail Light", 0x32712, 0x32732, indexCPS2_Juli, 0x00 },
    { L"X-Ism Kick Super Trail Dark", 0x32732, 0x32752, indexCPS2_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMP[] =
{
    { L"A-Ism Punch", 0x32752, 0x32772, indexCPS2_Juli, 0x00 },
    { L"A-Ism Punch Extra 1", 0x32772, 0x32792 },
    { L"A-Ism Punch Extra 2", 0x32792, 0x327b2 },
    { L"A-Ism Punch Super Trail Light", 0x327b2, 0x327d2, indexCPS2_Juli, 0x00 },
    { L"A-Ism Punch Super Trail Dark", 0x327d2, 0x327f2, indexCPS2_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMK[] =
{
    { L"A-Ism Kick", 0x327f2, 0x32812, indexCPS2_Juli, 0x00 },
    { L"A-Ism Kick Extra 1", 0x32812, 0x32832 },
    { L"A-Ism Kick Extra 2", 0x32832, 0x32852 },
    { L"A-Ism Kick Super Trail Light", 0x32852, 0x32872, indexCPS2_Juli, 0x00 },
    { L"A-Ism Kick Super Trail Dark", 0x32872, 0x32892, indexCPS2_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMP[] =
{
    { L"V-Ism Punch", 0x32892, 0x328b2, indexCPS2_Juli, 0x00 },
    { L"V-Ism Punch Extra 1", 0x328b2, 0x328d2 },
    { L"V-Ism Punch Extra 2", 0x328d2, 0x328f2 },
    { L"V-Ism Punch Super Trail Light", 0x328f2, 0x32912, indexCPS2_Juli, 0x00 },
    { L"V-Ism Punch Super Trail Dark", 0x32912, 0x32932, indexCPS2_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMK[] =
{
    { L"V-Ism Kick", 0x32932, 0x32952, indexCPS2_Juli, 0x00 },
    { L"V-Ism Kick Extra 1", 0x32952, 0x32972 },
    { L"V-Ism Kick Extra 2", 0x32972, 0x32992 },
    { L"V-Ism Kick Super Trail Light", 0x32992, 0x329b2, indexCPS2_Juli, 0x00 },
    { L"V-Ism Kick Super Trail Dark", 0x329b2, 0x329d2, indexCPS2_Juli, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_STATUS[] =
{
    { L"Burned 1", 0x37c32 + 0x00, 0x37c32 + 0x20, indexCPS2_Juli },
    { L"Burned 2", 0x37c32 + 0x20, 0x37c32 + 0x40, indexCPS2_Juli },
    { L"Psycho Crusher Burned 1", 0x37c32 + 0x40, 0x37c32 + 0x60, indexCPS2_Juli },
    { L"Psycho Crusher Burned 2", 0x37c32 + 0x60, 0x37c32 + 0x80, indexCPS2_Juli },
    { L"V-Ism P1 After Effect 1", 0x37c32 + 0x80, 0x37c32 + 0xA0, indexCPS2_Juli },
    { L"V-Ism P1 After Effect 2", 0x37c32 + 0xA0, 0x37c32 + 0xC0, indexCPS2_Juli },
    { L"V-Ism P2 After Effect 1", 0x37c32 + 0xC0, 0x37c32 + 0xE0, indexCPS2_Juli },
    { L"V-Ism P2 After Effect 2", 0x37c32 + 0xe0, 0x37c32 + 0x100, indexCPS2_Juli },
    { L"X-Ism Punch Zapped", 0x37c32 + 0x100, 0x37c32 + 0x120, indexCPS2_Juli },
    { L"X-Ism Kick Zapped", 0x37c32 + 0x120, 0x37c32 + 0x140, indexCPS2_Juli },
    { L"A-Ism Punch Zapped", 0x37c32 + 0x140, 0x37c32 + 0x160, indexCPS2_Juli },
    { L"A-Ism Kick Zapped", 0x37c32 + 0x160, 0x37c32 + 0x180, indexCPS2_Juli },
    { L"V-Ism Punch Zapped", 0x37c32 + 0x180, 0x37c32 + 0x1A0, indexCPS2_Juli },
    { L"V-Ism Kick Zapped", 0x37c32 + 0x1A0, 0x37c32 + 0x1C0, indexCPS2_Juli },
    { L"Zapped Skeleton", 0x37c32 + 0x1C0, 0x37c32 + 0x1E0, indexCPS2_Juli },
    { L"X-Ism Punch Mash", 0x37c32 + 0x1e0, 0x37c32 + 0x200, indexCPS2_Juli },
    { L"X-Ism Kick Mash", 0x37c32 + 0x200, 0x37c32 + 0x220, indexCPS2_Juli },
    { L"A-Ism Punch Mash", 0x37c32 + 0x220, 0x37c32 + 0x240, indexCPS2_Juli },
    { L"A-Ism Kick Mash", 0x37c32 + 0x240, 0x37c32 + 0x260, indexCPS2_Juli },
    { L"V-Ism Punch Mash", 0x37c32 + 0x260, 0x37c32 + 0x280, indexCPS2_Juli },
    { L"V-Ism Kick Mash", 0x37c32 + 0x280, 0x37c32 + 0x2A0, indexCPS2_Juli },
    { L"Priority Win", 0x37c32 + 0x2A0, 0x37c32 + 0x2C0, indexCPS2_Juli },
    { L"Damage Reduction", 0x37c32 + 0x2C0, 0x37c32 + 0x2E0, indexCPS2_Juli },
    { L"Just Defend", 0x37c32 + 0x2e0, 0x37c32 + 0x300, indexCPS2_Juli },
};

const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE[] =
{
    { L"Rear Cave Wall", 0x3C812, 0x3C8D2, indexCPS2_SFA3Assets, 0x0A },
    { L"Rear Candle Glows 1", 0x61392, 0x613B2, indexCPS2_SFA3Assets, 0x0B },
    { L"Rear Candle Glows 2", 0x613B2, 0x613D2, indexCPS2_SFA3Assets, 0x0B },
    { L"Right Cave Wall Ceiling", 0x47CD2, 0x47CF2, indexCPS2_SFA3Assets, 0x0C },
    { L"Hang Tags / Shadow", 0x38612, 0x38632, indexCPS2_SFA3Assets, 0x0D },
    { L"Right Candles Glow 1", 0x4C572, 0x4C592, indexCPS2_SFA3Assets, 0x0E },
    { L"Right Candles Glow 2", 0x4C5B2, 0x4C5D2, indexCPS2_SFA3Assets, 0x0E },
    { L"Wall Glow", 0x385B2, 0x385D2, indexCPS2_SFA3Assets, 0x0F },
    { L"Main Ground", 0x40F32, 0x41012, indexCPS2_SFA3Assets, 0x10 },
    { L"Left Candles Glow 1", 0x62A52, 0x62A72, indexCPS2_SFA3Assets, 0x11 },
    { L"Left Candles Glow 2", 0x62A72, 0x62A92, indexCPS2_SFA3Assets, 0x11 },
    { L"Left Rope Candles 1", 0x4C552, 0x4C572, indexCPS2_SFA3Assets, 0x12 },
    { L"Left Rope Candles 2", 0x4C592, 0x4C5B2, indexCPS2_SFA3Assets, 0x12 },
    { L"Unknown Sprites 1", 0x38572, 0x38592 },
    { L"Unknown Sprites 2", 0x38592, 0x385B2 },
    { L"Unknown Sprites 3", 0x385D2, 0x385F2 },
    { L"Unknown Sprites 4", 0x385F2, 0x38612 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KEN_NODE[] =
{
    { L"Read Building 1", 0x3C4F2, 0x3C6D2, indexCPS2_SFA3Assets, 0x13 },
    { L"Rear Building 2", 0x3C6D2, 0x3C812, indexCPS2_SFA3Assets, 0x14 },
    { L"Left Building / Palms 1", 0x40B32, 0x40D32, indexCPS2_SFA3Assets, 0x15 },
    { L"Left Building / Palms 2", 0x40D32, 0x40F32, indexCPS2_SFA3Assets, 0x16 },
    
    { L"Fountain / Flags / Palms 1", 0x47932, 0x47B32, indexCPS2_SFA3Assets, 0x17 },
    { L"Fountain / Flags / Palms 2", 0x47B32, 0x47CD2, indexCPS2_SFA3Assets, 0x18 },
    { L"Fountain Stream", 0x38512, 0x38532, indexCPS2_SFA3Assets, 0x19 },
    { L"Bartender", 0x384D2, 0x384F2, indexCPS2_SFA3Assets, 0x1a },
    { L"Girls Lounging", 0x384B2, 0x384D2, indexCPS2_SFA3Assets, 0x1b },
    { L"Couple @ Table", 0x384F2, 0x38512, indexCPS2_SFA3Assets, 0x1c },
    { L"Plants?", 0x38532, 0x38552, indexCPS2_SFA3Assets, 0x1d },
    { L"Post & Statue", 0x38552, 0x38572, indexCPS2_SFA3Assets, 0x1e },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE[] =
{
    { L"Sunset / Sea", 0x3C4B2, 0x3C4F2, indexCPS2_SFA3Assets, 0 },
    { L"Castle", 0x383F2, 0x38432, indexCPS2_SFA3Assets, 0x03 },
    { L"Forest / Cliff Tree / Waterfall Hill", 0x477F2, 0x47932, indexCPS2_SFA3Assets, 0x04 },
    { L"Waterfall Landing Anim 1", 0x63FB2, 0x63FD2, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Landing Anim 2", 0x63FD2, 0x63FF2, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Landing Anim 3", 0x63FF2, 0x64012, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Landing Anim 4", 0x64012, 0x64032, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { L"Waterfall Stream Anim 1", 0x63F32, 0x63F52, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Waterfall Stream Anim 2", 0x63F52, 0x63F72, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Waterfall Stream Anim 3", 0x63F72, 0x63F92, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Waterfall Stream Anim 4", 0x63F92, 0x63FB2, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { L"Main Ground / Big Tree Branches", 0x40992, 0x40B32, indexCPS2_SFA3Assets, 0x05 },
    { L"Tree Trunk Right Side", 0x38452, 0x38472, indexCPS2_SFA3Assets, 0x06 },
    { L"Tree Leaves", 0x38472, 0x38492, indexCPS2_SFA3Assets, 0x07 },
    { L"Grass Left Side", 0x38432, 0x38452, indexCPS2_SFA3Assets, 0x08 },
    { L"Fighter Shadow", 0x38492, 0x384B2, indexCPS2_SFA3Assets, 0x09 },
};

const sGame_PaletteDataset SFA3_A_STAGES_NASH_NODE[] =
{
    { L"Cockpit/Top (Plane)/Landing Gear", 0x47CF2, 0x47DF2, indexCPS2_SFA3Assets, 0x1f },
    { L"Plane and Floor Part 1", 0x41012, 0x41212, indexCPS2_SFA3Assets, 0x20 },
    { L"Plane and Floor Part 2", 0x41212, 0x413D2, indexCPS2_SFA3Assets, 0x21 },
    { L"Rear Windows Metal Ceiling Part 1", 0x3C8D2, 0x3CA72, indexCPS2_SFA3Assets, 0x22 },
    { L"Rear Windows Metal Ceiling Part 2", 0x3CAD2, 0x3CC72, indexCPS2_SFA3Assets, 0x23 },
    { L"Mechanic Spectators", 0x38632, 0x38652, indexCPS2_SFA3Assets, 0x25 },
    { L"Rolling Stairs Thing", 0x38652, 0x38672, indexCPS2_SFA3Assets, 0x24 },
    { L"Missile", 0x38672, 0x38692, indexCPS2_SFA3Assets, 0x26 },
    { L"Missile Tails", 0x38692, 0x386B2, indexCPS2_SFA3Assets, 0x27 },
    { L"Missile Heads", 0x386B2, 0x386D2, indexCPS2_SFA3Assets, 0x28 },
    { L"Under Plane???", 0x386D2, 0x386F2, indexCPS2_SFA3Assets, 0x29 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CHUNLI_NODE[] =
{
    { L"Far Background - 8x8 (1/2)", 0x3CC72, 0x3CE72, indexCPS2_SFA3Assets, 0x2A },
    { L"Far Background - 8x8 (2/2)", 0x3CE72, 0x3CFD2, indexCPS2_SFA3Assets, 0x2B },
    { L"Mid Background - 16x16 (1/2)", 0x413D2, 0x415D2, indexCPS2_SFA3Assets, 0x2C },
    { L"Mid Background - 16x16 (2/2)", 0x415D2, 0x417D2, indexCPS2_SFA3Assets, 0x2D },
    { L"Close Background - 32x32", 0x47DF2, 0x47ED2, indexCPS2_SFA3Assets, 0x2E },
    { L"Instructor", 0x386F2, 0x38712, indexCPS2_SFA3Assets, 0x2F },
    { L"Lamp Post", 0x38712, 0x38732, indexCPS2_SFA3Assets, 0x30 },
    { L"Sign", 0x38732, 0x38752, indexCPS2_SFA3Assets, 0x31 },
    { L"Flag", 0x38752, 0x38772, indexCPS2_SFA3Assets, 0x32 },
    { L"Tree", 0x38772, 0x38792, indexCPS2_SFA3Assets, 0x33 },
    { L"Shadow", 0x38792, 0x387B2, indexCPS2_SFA3Assets, 0x34 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ADON_NODE[] =
{
    { L"Adon Stage - 32x32 Pt1", 0x47ED2, 0x480D2, indexCPS2_SFA3Assets, 0x3b, &pairFullyLinkedNode },
    { L"Adon Stage - 32x32 Pt2", 0x480D2, 0x48112, indexCPS2_SFA3Assets, 0x3c },
    { L"Adon Stage - 16x16 Pt1", 0x417D2, 0x419D2, indexCPS2_SFA3Assets, 0x39 },
    { L"Adon Stage - 16x16 Pt2", 0x419D2, 0x41BD2, indexCPS2_SFA3Assets, 0x3a },
    { L"Adon Stage - Obj Pt1", 0x387B2, 0x387F2, indexCPS2_SFA3Assets, 0x35 },
    { L"Adon Stage - 8x8 Pt1", 0x3CFD2, 0x3D1D2, indexCPS2_SFA3Assets, 0x36 },
    { L"Adon Stage - 8x8 Pt2", 0x3D1D2, 0x3D312, indexCPS2_SFA3Assets, 0x37 },
    { L"Adon Stage - Obj Pt2", 0x387F2, 0x38872, indexCPS2_SFA3Assets, 0x38 },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ce12, 0x4ce92, indexCPS2_SFA3Assets, 0xb4 },
    { L"X-Ism Kick", 0x4ce92, 0x4cf12, indexCPS2_SFA3Assets, 0xb4 },
    { L"A-Ism Punch", 0x4cf12, 0x4cf92, indexCPS2_SFA3Assets, 0xb4 },
    { L"A-Ism Kick", 0x4cf92, 0x4d012, indexCPS2_SFA3Assets, 0xb4 },
    { L"V-Ism Punch", 0x4d012, 0x4d092, indexCPS2_SFA3Assets, 0xb4 },
    { L"V-Ism Kick", 0x4d092, 0x4d112, indexCPS2_SFA3Assets, 0xb4 },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d112, 0x4d192, indexCPS2_SFA3Assets, 0xaf },
    { L"X-Ism Kick", 0x4d192, 0x4d212, indexCPS2_SFA3Assets, 0xaf },
    { L"A-Ism Punch", 0x4d212, 0x4d292, indexCPS2_SFA3Assets, 0xaf },
    { L"A-Ism Kick", 0x4d292, 0x4d312, indexCPS2_SFA3Assets, 0xaf },
    { L"V-Ism Punch", 0x4d312, 0x4d392, indexCPS2_SFA3Assets, 0xaf },
    { L"V-Ism Kick", 0x4d392, 0x4d412, indexCPS2_SFA3Assets, 0xaf },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d412, 0x4d492, indexCPS2_SFA3Assets, 0xa1 },
    { L"X-Ism Kick", 0x4d492, 0x4d512, indexCPS2_SFA3Assets, 0xa1 },
    { L"A-Ism Punch", 0x4d512, 0x4d592, indexCPS2_SFA3Assets, 0xa1 },
    { L"A-Ism Kick", 0x4d592, 0x4d612, indexCPS2_SFA3Assets, 0xa1 },
    { L"V-Ism Punch", 0x4d612, 0x4d692, indexCPS2_SFA3Assets, 0xa1 },
    { L"V-Ism Kick", 0x4d692, 0x4d712, indexCPS2_SFA3Assets, 0xa1 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4d712, 0x4d792, indexCPS2_SFA3Assets, 0xa5 },
    { L"X-Ism Kick", 0x4d792, 0x4d812, indexCPS2_SFA3Assets, 0xa5 },
    { L"A-Ism Punch", 0x4d812, 0x4d892, indexCPS2_SFA3Assets, 0xa5 },
    { L"A-Ism Kick", 0x4d892, 0x4d912, indexCPS2_SFA3Assets, 0xa5 },
    { L"V-Ism Punch", 0x4d912, 0x4d992, indexCPS2_SFA3Assets, 0xa5 },
    { L"V-Ism Kick", 0x4d992, 0x4da12, indexCPS2_SFA3Assets, 0xa5 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4da12, 0x4da92, indexCPS2_SFA3Assets, 0xa6 },
    { L"X-Ism Kick", 0x4da92, 0x4db12, indexCPS2_SFA3Assets, 0xa6 },
    { L"A-Ism Punch", 0x4db12, 0x4db92, indexCPS2_SFA3Assets, 0xa7 },
    { L"A-Ism Kick", 0x4db92, 0x4dc12, indexCPS2_SFA3Assets, 0xa7 },
    { L"V-Ism Punch", 0x4dc12, 0x4dc92, indexCPS2_SFA3Assets, 0xa7 },
    { L"V-Ism Kick", 0x4dc92, 0x4dd12, indexCPS2_SFA3Assets, 0xa7 },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4dd12, 0x4dd92, indexCPS2_SFA3Assets, 0xa0 },
    { L"X-Ism Kick", 0x4dd92, 0x4de12, indexCPS2_SFA3Assets, 0xa0 },
    { L"A-Ism Punch", 0x4de12, 0x4de92, indexCPS2_SFA3Assets, 0xa0 },
    { L"A-Ism Kick", 0x4de92, 0x4df12, indexCPS2_SFA3Assets, 0xa0 },
    { L"V-Ism Punch", 0x4df12, 0x4df92, indexCPS2_SFA3Assets, 0xa0 },
    { L"V-Ism Kick", 0x4df92, 0x4e012, indexCPS2_SFA3Assets, 0xa0 },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e012, 0x4e092, indexCPS2_SFA3Assets, 0xb7 },
    { L"X-Ism Kick", 0x4e092, 0x4e112, indexCPS2_SFA3Assets, 0xb7 },
    { L"A-Ism Punch", 0x4e112, 0x4e192, indexCPS2_SFA3Assets, 0xb7 },
    { L"A-Ism Kick", 0x4e192, 0x4e212, indexCPS2_SFA3Assets, 0xb7 },
    { L"V-Ism Punch", 0x4e212, 0x4e292, indexCPS2_SFA3Assets, 0xb7 },
    { L"V-Ism Kick", 0x4e292, 0x4e312, indexCPS2_SFA3Assets, 0xb7 },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e312, 0x4e392, indexCPS2_SFA3Assets, 0xad },
    { L"X-Ism Kick", 0x4e392, 0x4e412, indexCPS2_SFA3Assets, 0xad },
    { L"A-Ism Punch", 0x4e412, 0x4e492, indexCPS2_SFA3Assets, 0xad },
    { L"A-Ism Kick", 0x4e492, 0x4e512, indexCPS2_SFA3Assets, 0xad },
    { L"V-Ism Punch", 0x4e512, 0x4e592, indexCPS2_SFA3Assets, 0xad },
    { L"V-Ism Kick", 0x4e592, 0x4e612, indexCPS2_SFA3Assets, 0xad },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e612, 0x4e692, indexCPS2_SFA3Assets, 0xa2 },
    { L"X-Ism Kick", 0x4e692, 0x4e712, indexCPS2_SFA3Assets, 0xa2 },
    { L"A-Ism Punch", 0x4e712, 0x4e792, indexCPS2_SFA3Assets, 0xa2 },
    { L"A-Ism Kick", 0x4e792, 0x4e812, indexCPS2_SFA3Assets, 0xa2 },
    { L"V-Ism Punch", 0x4e812, 0x4e892, indexCPS2_SFA3Assets, 0xa2 },
    { L"V-Ism Kick", 0x4e892, 0x4e912, indexCPS2_SFA3Assets, 0xa2 },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4e912, 0x4e992, indexCPS2_SFA3Assets, 0xb3 },
    { L"X-Ism Kick", 0x4e992, 0x4ea12, indexCPS2_SFA3Assets, 0xb3 },
    { L"A-Ism Punch", 0x4ea12, 0x4ea92, indexCPS2_SFA3Assets, 0xb3 },
    { L"A-Ism Kick", 0x4ea92, 0x4eb12, indexCPS2_SFA3Assets, 0xb3 },
    { L"V-Ism Punch", 0x4eb12, 0x4eb92, indexCPS2_SFA3Assets, 0xb3 },
    { L"V-Ism Kick", 0x4eb92, 0x4ec12, indexCPS2_SFA3Assets, 0xb3 },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ec12, 0x4ec92, indexCPS2_SFA3Assets, 0xb0 },
    { L"X-Ism Kick", 0x4ec92, 0x4ed12, indexCPS2_SFA3Assets, 0xb0 },
    { L"A-Ism Punch", 0x4ed12, 0x4ed92, indexCPS2_SFA3Assets, 0xb0 },
    { L"A-Ism Kick", 0x4ed92, 0x4ee12, indexCPS2_SFA3Assets, 0xb0 },
    { L"V-Ism Punch", 0x4ee12, 0x4ee92, indexCPS2_SFA3Assets, 0xb0 },
    { L"V-Ism Kick", 0x4ee92, 0x4ef12, indexCPS2_SFA3Assets, 0xb0 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4ef12, 0x4ef92, indexCPS2_SFA3Assets, 0xb5 },
    { L"X-Ism Kick", 0x4ef92, 0x4f012, indexCPS2_SFA3Assets, 0xb5 },
    { L"A-Ism Punch", 0x4f012, 0x4f092, indexCPS2_SFA3Assets, 0xb5 },
    { L"A-Ism Kick", 0x4f092, 0x4f112, indexCPS2_SFA3Assets, 0xb5 },
    { L"V-Ism Punch", 0x4f112, 0x4f192, indexCPS2_SFA3Assets, 0xb5 },
    { L"V-Ism Kick", 0x4f192, 0x4f212, indexCPS2_SFA3Assets, 0xb5 },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f212, 0x4f292, indexCPS2_SFA3Assets, 0xa9 },
    { L"X-Ism Kick", 0x4f292, 0x4f312, indexCPS2_SFA3Assets, 0xa9 },
    { L"A-Ism Punch", 0x4f312, 0x4f392, indexCPS2_SFA3Assets, 0xa9 },
    { L"A-Ism Kick", 0x4f392, 0x4f412, indexCPS2_SFA3Assets, 0xa9 },
    { L"V-Ism Punch", 0x4f412, 0x4f492, indexCPS2_SFA3Assets, 0xa9 },
    { L"V-Ism Kick", 0x4f492, 0x4f512, indexCPS2_SFA3Assets, 0xa9 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f512, 0x4f592, indexCPS2_SFA3Assets, 0xb6 },
    { L"X-Ism Kick", 0x4f592, 0x4f612, indexCPS2_SFA3Assets, 0xb6 },
    { L"A-Ism Punch", 0x4f612, 0x4f692, indexCPS2_SFA3Assets, 0xb6 },
    { L"A-Ism Kick", 0x4f692, 0x4f712, indexCPS2_SFA3Assets, 0xb6 },
    { L"V-Ism Punch", 0x4f712, 0x4f792, indexCPS2_SFA3Assets, 0xb6 },
    { L"V-Ism Kick", 0x4f792, 0x4f812, indexCPS2_SFA3Assets, 0xb6 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4f812, 0x4f892, indexCPS2_SFA3Assets, 0xb2 },
    { L"X-Ism Kick", 0x4f892, 0x4f912, indexCPS2_SFA3Assets, 0xb2 },
    { L"A-Ism Punch", 0x4f912, 0x4f992, indexCPS2_SFA3Assets, 0xb2 },
    { L"A-Ism Kick", 0x4f992, 0x4fa12, indexCPS2_SFA3Assets, 0xb2 },
    { L"V-Ism Punch", 0x4fa12, 0x4fa92, indexCPS2_SFA3Assets, 0xb2 },
    { L"V-Ism Kick", 0x4fa92, 0x4fb12, indexCPS2_SFA3Assets, 0xb2 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4fb12, 0x4fb92, indexCPS2_SFA3Assets, 0xaa },
    { L"X-Ism Kick", 0x4fb92, 0x4fc12, indexCPS2_SFA3Assets, 0xaa },
    { L"A-Ism Punch", 0x4fc12, 0x4fc92, indexCPS2_SFA3Assets, 0xaa },
    { L"A-Ism Kick", 0x4fc92, 0x4fd12, indexCPS2_SFA3Assets, 0xaa },
    { L"V-Ism Punch", 0x4fd12, 0x4fd92, indexCPS2_SFA3Assets, 0xaa },
    { L"V-Ism Kick", 0x4fd92, 0x4fe12, indexCPS2_SFA3Assets, 0xaa },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x4fe12, 0x4fe92, indexCPS2_SFA3Assets, 0xb9 },
    { L"X-Ism Kick", 0x4fe92, 0x4ff12, indexCPS2_SFA3Assets, 0xb9 },
    { L"A-Ism Punch", 0x4ff12, 0x4ff92, indexCPS2_SFA3Assets, 0xb9 },
    { L"A-Ism Kick", 0x4ff92, 0x50012, indexCPS2_SFA3Assets, 0xb9 },
    { L"V-Ism Punch", 0x50012, 0x50092, indexCPS2_SFA3Assets, 0xb9 },
    { L"V-Ism Kick", 0x50092, 0x50112, indexCPS2_SFA3Assets, 0xb9 },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50112, 0x50192, indexCPS2_SFA3Assets, 0xac },
    { L"X-Ism Kick", 0x50192, 0x50212, indexCPS2_SFA3Assets, 0xac },
    { L"A-Ism Punch", 0x50212, 0x50292, indexCPS2_SFA3Assets, 0xac },
    { L"A-Ism Kick", 0x50292, 0x50312, indexCPS2_SFA3Assets, 0xac },
    { L"V-Ism Punch", 0x50312, 0x50392, indexCPS2_SFA3Assets, 0xac },
    { L"V-Ism Kick", 0x50392, 0x50412, indexCPS2_SFA3Assets, 0xac },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50a12, 0x50a92, indexCPS2_SFA3Assets, 0xa4 },
    { L"X-Ism Kick", 0x50a92, 0x50b12, indexCPS2_SFA3Assets, 0xa4 },
    { L"A-Ism Punch", 0x50b12, 0x50b92, indexCPS2_SFA3Assets, 0xa4 },
    { L"A-Ism Kick", 0x50b92, 0x50c12, indexCPS2_SFA3Assets, 0xa4 },
    { L"V-Ism Punch", 0x50c12, 0x50c92, indexCPS2_SFA3Assets, 0xa4 },
    { L"V-Ism Kick", 0x50c92, 0x50d12, indexCPS2_SFA3Assets, 0xa4 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x50d12, 0x50d92, indexCPS2_SFA3Assets, 0xab },
    { L"X-Ism Kick", 0x50d92, 0x50e12, indexCPS2_SFA3Assets, 0xab },
    { L"A-Ism Punch", 0x50e12, 0x50e92, indexCPS2_SFA3Assets, 0xab },
    { L"A-Ism Kick", 0x50e92, 0x50f12, indexCPS2_SFA3Assets, 0xab },
    { L"V-Ism Punch", 0x50f12, 0x50f92, indexCPS2_SFA3Assets, 0xab },
    { L"V-Ism Kick", 0x50f92, 0x51012, indexCPS2_SFA3Assets, 0xab },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51012, 0x51092, indexCPS2_SFA3Assets, 0xa3 },
    { L"X-Ism Kick", 0x51092, 0x51112, indexCPS2_SFA3Assets, 0xa3 },
    { L"A-Ism Punch", 0x51112, 0x51192, indexCPS2_SFA3Assets, 0xa3 },
    { L"A-Ism Kick", 0x51192, 0x51212, indexCPS2_SFA3Assets, 0xa3 },
    { L"V-Ism Punch", 0x51212, 0x51292, indexCPS2_SFA3Assets, 0xa3 },
    { L"V-Ism Kick", 0x51292, 0x51312, indexCPS2_SFA3Assets, 0xa3 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51312, 0x51392, indexCPS2_SFA3Assets, 0xb1 },
    { L"X-Ism Kick", 0x51392, 0x51412, indexCPS2_SFA3Assets, 0xb1 },
    { L"A-Ism Punch", 0x51412, 0x51492, indexCPS2_SFA3Assets, 0xb1 },
    { L"A-Ism Kick", 0x51492, 0x51512, indexCPS2_SFA3Assets, 0xb1 },
    { L"V-Ism Punch", 0x51512, 0x51592, indexCPS2_SFA3Assets, 0xb1 },
    { L"V-Ism Kick", 0x51592, 0x51612, indexCPS2_SFA3Assets, 0xb1 },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51612, 0x51692, indexCPS2_SFA3Assets, 0xa8 },
    { L"X-Ism Kick", 0x51692, 0x51712, indexCPS2_SFA3Assets, 0xa8 },
    { L"A-Ism Punch", 0x51712, 0x51792, indexCPS2_SFA3Assets, 0xa8 },
    { L"A-Ism Kick", 0x51792, 0x51812, indexCPS2_SFA3Assets, 0xa8 },
    { L"V-Ism Punch", 0x51812, 0x51892, indexCPS2_SFA3Assets, 0xa8 },
    { L"V-Ism Kick", 0x51892, 0x51912, indexCPS2_SFA3Assets, 0xa8 },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51912, 0x51992, indexCPS2_SFA3Assets, 0xb8 },
    { L"X-Ism Kick", 0x51992, 0x51a12, indexCPS2_SFA3Assets, 0xb8 },
    { L"A-Ism Punch", 0x51a12, 0x51a92, indexCPS2_SFA3Assets, 0xb8 },
    { L"A-Ism Kick", 0x51a92, 0x51b12, indexCPS2_SFA3Assets, 0xb8 },
    { L"V-Ism Punch", 0x51b12, 0x51b92, indexCPS2_SFA3Assets, 0xb8 },
    { L"V-Ism Kick", 0x51b92, 0x51c12, indexCPS2_SFA3Assets, 0xb8 },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_SELECT_PALETTES[] =
{
    { L"X-Ism Punch", 0x51c12, 0x51c92, indexCPS2_SFA3Assets, 0xae },
    { L"X-Ism Kick", 0x51c92, 0x51d12, indexCPS2_SFA3Assets, 0xae },
    { L"A-Ism Punch", 0x51d12, 0x51d92, indexCPS2_SFA3Assets, 0xae },
    { L"A-Ism Kick", 0x51d92, 0x51e12, indexCPS2_SFA3Assets, 0xae },
    { L"V-Ism Punch", 0x51e12, 0x51e92, indexCPS2_SFA3Assets, 0xae },
    { L"V-Ism Kick", 0x51e92, 0x51f12, indexCPS2_SFA3Assets, 0xae },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x51f92, 0x52072, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"X-Ism Kick", 0x52092, 0x52172, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"A-Ism Punch", 0x52192, 0x52272, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"A-Ism Kick", 0x52292, 0x52372, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"V-Ism Punch", 0x52392, 0x52472, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
    { L"V-Ism Kick", 0x52492, 0x52572, indexCPS2_SFA3_Portraits, indexCPS2_Ryu },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x52592, 0x52692, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"X-Ism Kick", 0x52692, 0x52792, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"A-Ism Punch", 0x52792, 0x52892, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"A-Ism Kick", 0x52892, 0x52992, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"V-Ism Punch", 0x52992, 0x52a92, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
    { L"V-Ism Kick", 0x52a92, 0x52b92, indexCPS2_SFA3_Portraits, indexCPS2_Ken },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x52b92, 0x52bf2, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"X-Ism Kick", 0x52c92, 0x52cf2, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"A-Ism Punch", 0x52d92, 0x52df2, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"A-Ism Kick", 0x52e92, 0x52ef2, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"V-Ism Punch", 0x52f92, 0x52ff2, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
    { L"V-Ism Kick", 0x53092, 0x530f2, indexCPS2_SFA3_Portraits, indexCPS2_Akuma },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53192, 0x53292, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"X-Ism Kick", 0x53292, 0x53392, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"A-Ism Punch", 0x53392, 0x53492, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"A-Ism Kick", 0x53492, 0x53592, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"V-Ism Punch", 0x53592, 0x53692, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
    { L"V-Ism Kick", 0x53692, 0x53792, indexCPS2_SFA3_Portraits, indexCPS2_Charlie },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53792, 0x537f2, indexCPS2_SFA3_Portraits, 0x1c },
    { L"X-Ism Kick", 0x53892, 0x538f2, indexCPS2_SFA3_Portraits, 0x1c },
    { L"A-Ism Punch", 0x53992, 0x53a52, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
    { L"A-Ism Kick", 0x53a92, 0x53b52, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
    { L"V-Ism Punch", 0x53b92, 0x53c52, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
    { L"V-Ism Kick", 0x53c92, 0x53d52, indexCPS2_SFA3_Portraits, indexCPS2_ChunLi },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x53d92, 0x53e12, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"X-Ism Kick", 0x53e92, 0x53f12, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"A-Ism Punch", 0x53f92, 0x54012, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"A-Ism Kick", 0x54092, 0x54112, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"V-Ism Punch", 0x54192, 0x54212, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
    { L"V-Ism Kick", 0x54292, 0x54312, indexCPS2_SFA3_Portraits, indexCPS2_Adon },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54392, 0x54492, indexCPS2_SFA3_Portraits, 0x3c },
    { L"X-Ism Kick", 0x54492, 0x54592, indexCPS2_SFA3_Portraits, 0x3c },
    { L"A-Ism Punch", 0x54592, 0x54692, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
    { L"A-Ism Kick", 0x54692, 0x54792, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
    { L"V-Ism Punch", 0x54792, 0x54892, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
    { L"V-Ism Kick", 0x54892, 0x54992, indexCPS2_SFA3_Portraits, indexCPS2_Sodom },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54992, 0x54a32, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"X-Ism Kick", 0x54a92, 0x54b32, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"A-Ism Punch", 0x54b92, 0x54c32, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"A-Ism Kick", 0x54c92, 0x54d32, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"V-Ism Punch", 0x54d92, 0x54e32, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
    { L"V-Ism Kick", 0x54e92, 0x54f32, indexCPS2_SFA3_Portraits, indexCPS2_Guy },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x54f92, 0x55072, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"X-Ism Kick", 0x55092, 0x55172, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"A-Ism Punch", 0x55192, 0x55272, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"A-Ism Kick", 0x55292, 0x55372, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"V-Ism Punch", 0x55392, 0x55472, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
    { L"V-Ism Kick", 0x55492, 0x55572, indexCPS2_SFA3_Portraits, indexCPS2_Birdie },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x55592, 0x55652, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"X-Ism Kick", 0x55692, 0x55752, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"A-Ism Punch", 0x55792, 0x55852, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"A-Ism Kick", 0x55892, 0x55952, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"V-Ism Punch", 0x55992, 0x55a52, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
    { L"V-Ism Kick", 0x55a92, 0x55b52, indexCPS2_SFA3_Portraits, indexCPS2_Rose },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x55b92, 0x55c72, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"X-Ism Kick", 0x55c92, 0x55d72, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"A-Ism Punch", 0x55d92, 0x55e72, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"A-Ism Kick", 0x55e92, 0x55f72, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"V-Ism Punch", 0x55f92, 0x56072, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
    { L"V-Ism Kick", 0x56092, 0x56172, indexCPS2_SFA3_Portraits, indexCPS2_Bison },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56192, 0x561b2, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"X-Ism Kick", 0x56292, 0x562b2, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"A-Ism Punch", 0x56392, 0x563b2, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"A-Ism Kick", 0x56492, 0x564b2, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"V-Ism Punch", 0x56592, 0x565b2, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
    { L"V-Ism Kick", 0x56692, 0x566b2, indexCPS2_SFA3_Portraits, indexCPS2_Sagat },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56792, 0x56832, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"X-Ism Kick", 0x56892, 0x56932, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"A-Ism Punch", 0x56992, 0x56a32, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"A-Ism Kick", 0x56a92, 0x56b32, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"V-Ism Punch", 0x56b92, 0x56c32, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
    { L"V-Ism Kick", 0x56c92, 0x56d32, indexCPS2_SFA3_Portraits, indexCPS2_Dan },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x56d92, 0x56e12, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"X-Ism Kick", 0x56e92, 0x56f12, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"A-Ism Punch", 0x56f92, 0x57012, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"A-Ism Kick", 0x57092, 0x57112, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"V-Ism Punch", 0x57192, 0x57212, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
    { L"V-Ism Kick", 0x57292, 0x57312, indexCPS2_SFA3_Portraits, indexCPS2_Sakura },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57392, 0x57472, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"X-Ism Kick", 0x57492, 0x57572, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"A-Ism Punch", 0x57592, 0x57672, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"A-Ism Kick", 0x57692, 0x57772, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"V-Ism Punch", 0x57792, 0x57872, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
    { L"V-Ism Kick", 0x57892, 0x57972, indexCPS2_SFA3_Portraits, indexCPS2_Rolento },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57992, 0x57a12, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"X-Ism Kick", 0x57a92, 0x57b12, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"A-Ism Punch", 0x57b92, 0x57c12, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"A-Ism Kick", 0x57c92, 0x57d12, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"V-Ism Punch", 0x57d92, 0x57e12, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
    { L"V-Ism Kick", 0x57e92, 0x57f12, indexCPS2_SFA3_Portraits, indexCPS2_Dhalsim },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x57f92, 0x57fd2, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"X-Ism Kick", 0x58092, 0x580d2, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"A-Ism Punch", 0x58192, 0x581d2, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"A-Ism Kick", 0x58292, 0x582d2, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"V-Ism Punch", 0x58392, 0x583d2, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
    { L"V-Ism Kick", 0x58492, 0x584d2, indexCPS2_SFA3_Portraits, indexCPS2_Zangief },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x58592, 0x58612, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"X-Ism Kick", 0x58692, 0x58712, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"A-Ism Punch", 0x58792, 0x58812, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"A-Ism Kick", 0x58892, 0x58912, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"V-Ism Punch", 0x58992, 0x58a12, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
    { L"V-Ism Kick", 0x58a92, 0x58b12, indexCPS2_SFA3_Portraits, indexCPS2_Gen },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59192, 0x59232, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"X-Ism Kick", 0x59292, 0x59332, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"A-Ism Punch", 0x59392, 0x59432, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"A-Ism Kick", 0x59492, 0x59532, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"V-Ism Punch", 0x59592, 0x59632, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
    { L"V-Ism Kick", 0x59692, 0x59732, indexCPS2_SFA3_Portraits, indexCPS2_Cammy },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59792, 0x597d2, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"X-Ism Kick", 0x59892, 0x598d2, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"A-Ism Punch", 0x59992, 0x599d2, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"A-Ism Kick", 0x59a92, 0x59ad2, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"V-Ism Punch", 0x59b92, 0x59bd2, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
    { L"V-Ism Kick", 0x59c92, 0x59cd2, indexCPS2_SFA3_Portraits, indexCPS2_EHonda },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x59d92, 0x59dd2, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"X-Ism Kick", 0x59e92, 0x59ed2, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"A-Ism Punch", 0x59f92, 0x59fd2, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"A-Ism Kick", 0x5a092, 0x5a0d2, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"V-Ism Punch", 0x5a192, 0x5a1d2, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
    { L"V-Ism Kick", 0x5a292, 0x5a2d2, indexCPS2_SFA3_Portraits, indexCPS2_Blanka },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5a392, 0x5a412, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"X-Ism Kick", 0x5a492, 0x5a512, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"A-Ism Punch", 0x5a592, 0x5a612, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"A-Ism Kick", 0x5a692, 0x5a712, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"V-Ism Punch", 0x5a792, 0x5a812, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
    { L"V-Ism Kick", 0x5a892, 0x5a912, indexCPS2_SFA3_Portraits, indexCPS2_RMika },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5a992, 0x5a9d2, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"X-Ism Kick", 0x5aa92, 0x5aad2, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"A-Ism Punch", 0x5ab92, 0x5abd2, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"A-Ism Kick", 0x5ac92, 0x5acd2, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"V-Ism Punch", 0x5ad92, 0x5add2, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
    { L"V-Ism Kick", 0x5ae92, 0x5aed2, indexCPS2_SFA3_Portraits, indexCPS2_Cody },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5af92, 0x5b052, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"X-Ism Kick", 0x5b092, 0x5b152, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"A-Ism Punch", 0x5b192, 0x5b252, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"A-Ism Kick", 0x5b292, 0x5b352, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"V-Ism Punch", 0x5b392, 0x5b452, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
    { L"V-Ism Kick", 0x5b492, 0x5b552, indexCPS2_SFA3_Portraits, indexCPS2_Vega },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_WIN_PALETTES[] =
{
    { L"X-Ism Punch", 0x5b592, 0x5b692, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"X-Ism Kick", 0x5b692, 0x5b792, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"A-Ism Punch", 0x5b792, 0x5b892, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"A-Ism Kick", 0x5b892, 0x5b992, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"V-Ism Punch", 0x5b992, 0x5ba92, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
    { L"V-Ism Kick", 0x5ba92, 0x5bb92, indexCPS2_SFA3_Portraits, indexCPS2_Karin },
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

#define k_sfa3NameKey_ChunLi L"Chun-Li"
#define k_sfa3NameKey_Sodom L"Sodom"

const sDescTreeNode SFA3_A_UNITS[] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_COLLECTION,          ARRAYSIZE(SFA3_A_ADON_COLLECTION) },
    { L"Balrog",          DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_COLLECTION,        ARRAYSIZE(SFA3_A_BALROG_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA3_A_BIRDIE_COLLECTION) },
    { L"Blanka",          DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_COLLECTION,        ARRAYSIZE(SFA3_A_BLANKA_COLLECTION) },
    { L"Cammy",           DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_COLLECTION,         ARRAYSIZE(SFA3_A_CAMMY_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA3_A_CHARLIE_COLLECTION) },
    { k_sfa3NameKey_ChunLi, DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA3_A_CHUNLI_COLLECTION) },
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
    { k_sfa3NameKey_Sodom, DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_COLLECTION,         ARRAYSIZE(SFA3_A_SODOM_COLLECTION) },
    { L"Vega",            DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_COLLECTION,          ARRAYSIZE(SFA3_A_VEGA_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA3_A_ZANGIEF_COLLECTION) },
    { L"Stages",          DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_COLLECTION,        ARRAYSIZE(SFA3_A_STAGES_COLLECTION) },
};

constexpr auto SFA3_A_NUM_IND = ARRAYSIZE(SFA3_A_UNITS);

#define SFA3_A_EXTRALOC SFA3_A_NUM_IND


// We extend this array with data groveled from the SFA3e.txt extensible extras file, if any.
const stExtraDef SFA3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VSAV_A_MORRIGAN_PALETTES. 
// * Update every array using VSAV_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 VSAV_A_IMG_UNITS[] =
{
    indexCPS2_Anakaris,
    indexCPS2_BBHood,
    indexCPS2_Felicia,
    indexCPS2_Morrigan,
    indexCPS2_Vamp_Aulbath,   // 0x67
    indexCPS2_Vamp_Bishamon,  // 0x68
    indexCPS2_Vamp_Dee,       // 0x69
    indexCPS2_Vamp_Demitri,   // 0x6A
    //indexCPS2_Vamp_Donovan,   // 0x6B   console-only
    indexCPS2_Vamp_Gallon,    // 0x6C
    indexCPS2_Vamp_Jedah,     // 0x6D
    indexCPS2_Vamp_LeiLei,    // 0x6E
    indexCPS2_Vamp_Lilith,    // 0x6F
    //indexCPS2_Vamp_Marionette, // 0x70  console-only
    //indexCPS2_Vamp_Phobos,    // 0x71   console-only
    //indexCPS2_Vamp_Pyron,     // 0x72   console-only
    indexCPS2_Vamp_QBee,      // 0x73
    indexCPS2_Vamp_Sasquatch, // 0x74
    indexCPS2_Vamp_Shadow,    // 0x75
    indexCPS2_Vamp_Victor,    // 0x76
    indexCPS2_Vamp_Zabel,     // 0x77

    indexCPS2_VSAV1_WinPortraits, // 0x78
    indexCPS2_VSAV1_MidnightBliss, // 0x79
    indexCPS2_Vamp_DarkGallon,
    indexCPS2_Anita,
    indexCPS2_VSAV1_Bonus, // 0x7c
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LP[] =
{
    { L"LP Bulleta", 0x0C1AC, 0x0C1CC, indexCPS2_BBHood, 0 },
    { L"LP Critters", 0x0C1CC, 0x0C1EC, indexCPS2_BBHood, 0x01 },
    { L"LP Weapons", 0x0C1EC, 0x0C20C, indexCPS2_BBHood, 0x02 },
    { L"LP Explosions", 0x0C20C, 0x0C22C },
    { L"LP Select Portrait", 0x2BF0C, 0x2BF2C, indexCPS2_BBHood, 0x20 },
    { L"LP Win Portrait", 0x2D60C, 0x2D6AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x0C22C, 0x0C24C, indexCPS2_BBHood, 0 },
    { L"MP Critters", 0x0C24C, 0x0C26C, indexCPS2_BBHood, 0x01 },
    { L"MP Weapons", 0x0C26C, 0x0C28C, indexCPS2_BBHood, 0x02 },
    { L"MP Explosions", 0x0C28C, 0x0C2AC },
    { L"MP Select Portrait", 0x2C10C, 0x2C12C, indexCPS2_BBHood, 0x20 },
    { L"MP Win Portrait", 0x2E0AC, 0x2E14C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x0C2AC, 0x0C2CC, indexCPS2_BBHood, 0 },
    { L"HP Critters", 0x0C2CC, 0x0C2EC, indexCPS2_BBHood, 0x01 },
    { L"HP Weapons", 0x0C2EC, 0x0C30C, indexCPS2_BBHood, 0x02 },
    { L"HP Explosions", 0x0C30C, 0x0C32C },
    { L"HP Select Portrait", 0x2C30C, 0x2C32C, indexCPS2_BBHood, 0x20 },
    { L"HP Win Portrait", 0x2EB4C, 0x2EBEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x0C32C, 0x0C34C, indexCPS2_BBHood, 0 },
    { L"LK Critters", 0x0C34C, 0x0C36C, indexCPS2_BBHood, 0x01 },
    { L"LK Weapons", 0x0C36C, 0x0C38C, indexCPS2_BBHood, 0x02 },
    { L"LK Explosions", 0x0C38C, 0x0C3AC },
    { L"LK Select Portrait", 0x2C50C, 0x2C52C, indexCPS2_BBHood, 0x20 },
    { L"LK Win Portrait", 0x2F5EC, 0x2F68C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x0C3AC, 0x0C3CC, indexCPS2_BBHood, 0 },
    { L"MK Critters", 0x0C3CC, 0x0C3EC, indexCPS2_BBHood, 0x01 },
    { L"MK Weapons", 0x0C3EC, 0x0C40C, indexCPS2_BBHood, 0x02 },
    { L"MK Explosions", 0x0C40C, 0x0C42C },
    { L"MK Select Portrait", 0x2C70C, 0x2C72C, indexCPS2_BBHood, 0x20 },
    { L"MK Win Portrait", 0x3008C, 0x3012c, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x0C42C, 0x0C44C, indexCPS2_BBHood, 0 },
    { L"HK Critters", 0x0C44C, 0x0C46C, indexCPS2_BBHood, 0x01 },
    { L"HK Weapons", 0x0C46C, 0x0C48C, indexCPS2_BBHood, 0x02 },
    { L"HK Explosions", 0x0C48C, 0x0C4AC },
    { L"HK Select Portrait", 0x2C90C, 0x2C92C, indexCPS2_BBHood, 0x20 },
    { L"HK Win Portrait", 0x30B2C, 0x30BCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x0C4AC, 0x0C4CC, indexCPS2_BBHood, 0 },
    { L"PP Critters", 0x0C4CC, 0x0C4EC, indexCPS2_BBHood, 0x01 },
    { L"PP Weapons", 0x0C4EC, 0x0C50C, indexCPS2_BBHood, 0x02 },
    { L"PP Explosions", 0x0C50C, 0x0C52C },
    { L"PP Select Portrait", 0x2CB0C, 0x2CB2C, indexCPS2_BBHood, 0x20 },
    { L"PP Win Portrait", 0x315CC, 0x3166C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x0C52C, 0x0C54C, indexCPS2_BBHood, 0 },
    { L"KK Critters", 0x0C54C, 0x0C56C, indexCPS2_BBHood, 0x01 },
    { L"KK Weapons", 0x0C56C, 0x0C58C, indexCPS2_BBHood, 0x02 },
    { L"KK Explosions", 0x0C58C, 0x0C5AC },
    { L"KK Select Portrait", 0x2CD0C, 0x2CD2C, indexCPS2_BBHood, 0x20 },
    { L"KK Win Portrait", 0x3206C, 0x3210C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x0C5AC, 0x0C5CC, indexCPS2_BBHood, 0 },
    { L"AP Critters", 0x0C5CC, 0x0C5EC, indexCPS2_BBHood, 0x01 },
    { L"AP Weapons", 0x0C5EC, 0x0C60C, indexCPS2_BBHood, 0x02 },
    { L"AP Explosions", 0x0C60C, 0x0C62C },
    { L"AP Select Portrait", 0x2CF0C, 0x2CF2C, indexCPS2_BBHood, 0x20 },
    { L"AP Win Portrait", 0x32B0C, 0x32BAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x0C62C, 0x0C64C, indexCPS2_BBHood, 0 },
    { L"AK Critters", 0x0C64C, 0x0C66C, indexCPS2_BBHood, 0x01 },
    { L"AK Weapons", 0x0C66C, 0x0C68C, indexCPS2_BBHood, 0x01 },
    { L"AK Explosions", 0x0C68C, 0x0C6AC },
    { L"AK Select Portrait", 0x2D10C, 0x2D12C, indexCPS2_BBHood, 0x20 },
    { L"AK Win Portrait", 0x335AC, 0x3364C, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x0C6AC, 0x0C6CC, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Demitri 2nd palette", 0x1ACCC, 0x1ACEC, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Teledash 1", 0x0C70C, 0x0C72C, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Teledash 2", 0x0C6CC, 0x0C6EC, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Fireball", 0x0C6EC, 0x0C70C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LP Select Portrait", 0x2BF2C, 0x2BF4C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LP Win Portrait", 0x2D6AC, 0x2D74C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri", 0x0C72C, 0x0C74C, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Demitri 2nd palette", 0x1ACEC, 0x1AD0C, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Teledash 1", 0x0C78C, 0x0C7AC, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Teledash 2", 0x0C74C, 0x0C76C, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Fireball", 0x0C76C, 0x0C78C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MP Select Portrait", 0x2C12C, 0x2C14C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MP Win Portrait", 0x2E14C, 0x2E1EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x0C7AC, 0x0C7CC, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Demitri 2nd palette", 0x1AD0C, 0x1AD2C, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Teledash 1", 0x0C80C, 0x0C82C, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Teledash 2", 0x0C7CC, 0x0C7EC, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Fireball", 0x0C7EC, 0x0C80C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HP Select Portrait", 0x2C32C, 0x2C34C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HP Win Portrait", 0x2EBEC, 0x2EC8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x0C82C, 0x0C84C, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Demitri 2nd palette", 0x1AD2C, 0x1AD4C, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Teledash 1", 0x0C88C, 0x0C8AC, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Teledash 2", 0x0C84C, 0x0C86C, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Fireball", 0x0C86C, 0x0C88C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LK Select Portrait", 0x2C52C, 0x2C54C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LK Win Portrait", 0x2F68C, 0x2F72C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x0C8AC, 0x0C8CC, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Demitri 2nd palette", 0x1AD4C, 0x1AD6C, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Teledash 1", 0x0C90C, 0x0C92C, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Teledash 2", 0x0C8CC, 0x0C8EC, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Fireball", 0x0C8EC, 0x0C90C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MK Select Portrait", 0x2C72C, 0x2C74C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MK Win Portrait", 0x3012C, 0x301CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x0C92C, 0x0C94C, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Demitri 2nd palette", 0x1AD6C, 0x1AD8C, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Teledash 1", 0x0C98C, 0x0C9AC, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Teledash 2", 0x0C94C, 0x0C96C, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Fireball", 0x0C96C, 0x0C98C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HK Select Portrait", 0x2C92C, 0x2C94C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HK Win Portrait", 0x30BCC, 0x30C6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x0C9AC, 0x0C9CC, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Demitri 2nd palette", 0x1AD8C, 0x1ADAC, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Teledash 1", 0x0CA0C, 0x0CA2C, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Teledash 2", 0x0C9CC, 0x0C9EC, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Fireball", 0x0C9EC, 0x0CA0C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"PP Select Portrait", 0x2CB2C, 0x2CB4C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"PP Win Portrait", 0x3166C, 0x3170C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x0CA2C, 0x0CA4C, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Demitri 2nd palette", 0x1ADAC, 0x1ADCC, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Teledash 1", 0x0CA8C, 0x0CAAC, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Teledash 2", 0x0CA4C, 0x0CA6C, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Fireball", 0x0CA6C, 0x0CA8C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"KK Select Portrait", 0x2CD2C, 0x2CD4C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"KK Win Portrait", 0x3210C, 0x321AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x0CAAC, 0x0CACC, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Demitri 2nd palette", 0x1ADCC, 0x1ADEC, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Teledash 1", 0x0CB0C, 0x0CB2C, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Teledash 2", 0x0CACC, 0x0CAEC, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Fireball", 0x0CAEC, 0x0CB0C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AP Select Portrait", 0x2CF2C, 0x2CF4C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AP Win Portrait", 0x32BAC, 0x32C4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x0CB2C, 0x0CB4C, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Demitri 2nd palette", 0x1ADEC, 0x1AE0C, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Teledash 1", 0x0CB8C, 0x0CBAC, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Teledash 2", 0x0CB4C, 0x0CB6C, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Fireball", 0x0CB6C, 0x0CB8C, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AK Select Portrait", 0x2D12C, 0x2D14C, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AK Win Portrait", 0x3364C, 0x336EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_SHARED[] =
{
    { L"Demitri's followers 1", 0x1aE0C, 0x1aE2C, indexCPS2_Vamp_Demitri, 0x02 },
    { L"Demitri's followers 2", 0x1aE2C, 0x1aE4C, indexCPS2_Vamp_Demitri, 0x03 },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x0CBAC, 0x0CBCC, indexCPS2_Vamp_Gallon, 0 },
    { L"LP Intro/Outro", 0x0CBCC, 0x0CBEC },
    { L"LP 236P/41236KK/j.HP", 0x0CBEC, 0x0CC0C },
    { L"LP 236P/28K/Outro Flash", 0x0CC0C, 0x0CC2C },
    { L"LP Select Portrait", 0x2BF4C, 0x2BF6C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LP Win Portrait", 0x2D74C, 0x2D7EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x0CC2C, 0x0CC4C, indexCPS2_Vamp_Gallon, 0 },
    { L"MP Intro/Outro", 0x0CC4C, 0x0CC6C },
    { L"MP 236P/41236KK/j.HP", 0x0CC6C, 0x0CC8C },
    { L"MP 236P/28K/Outro Flash", 0x0CC8C, 0x0CCAC },
    { L"MP Select Portrait", 0x2C14C, 0x2C16C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MP Win Portrait", 0x2E1EC, 0x2E28C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x0CCAC, 0x0CCCC, indexCPS2_Vamp_Gallon, 0 },
    { L"HP Intro/Outro", 0x0CCCC, 0x0CCEC },
    { L"HP 236P/41236KK/j.HP", 0x0CCEC, 0x0CD0C },
    { L"HP 236P/28K/Outro Flash", 0x0CD0C, 0x0CD2C },
    { L"HP Select Portrait", 0x2C34C, 0x2C36C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HP Win Portrait", 0x2EC8C, 0x2ED2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x0CD2C, 0x0CD4C, indexCPS2_Vamp_Gallon, 0 },
    { L"LK Intro/Outro", 0x0CD4C, 0x0CD6C },
    { L"LK 236P/41236KK/j.HP", 0x0CD6C, 0x0CD8C },
    { L"LK 236P/28K/Outro Flash", 0x0CD8C, 0x0CDAC },
    { L"LK Select Portrait", 0x2C54C, 0x2C56C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LK Win Portrait", 0x2F72C, 0x2F7CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x0CDAC, 0x0CDCC, indexCPS2_Vamp_Gallon, 0 },
    { L"MK Intro/Outro", 0x0CDCC, 0x0CDEC },
    { L"MK 236P/41236KK/j.HP", 0x0CDEC, 0x0CE0C },
    { L"MK 236P/28K/Outro Flash", 0x0CE0C, 0x0CE2C },
    { L"MK Select Portrait", 0x2C74C, 0x2C76C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MK Win Portrait", 0x301CC, 0x3026C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x0CE2C, 0x0CE4C, indexCPS2_Vamp_Gallon, 0 },
    { L"HK Intro/Outro", 0x0CE4C, 0x0CE6C },
    { L"HK 236P/41236KK/j.HP", 0x0CE6C, 0x0CE8C },
    { L"HK 236P/28K/Outro Flash", 0x0CE8C, 0x0CEAC },
    { L"HK Select Portrait", 0x2C94C, 0x2C96C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HK Win Portrait", 0x30C6C, 0x30D0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x0CEAC, 0x0CECC, indexCPS2_Vamp_Gallon, 0 },
    { L"PP Intro/Outro", 0x0CECC, 0x0CEEC },
    { L"PP 236P/41236KK/j.HP", 0x0CEEC, 0x0CF0C },
    { L"PP 236P/28K/Outro Flash", 0x0CF0C, 0x0CF2C },
    { L"PP Select Portrait", 0x2CB4C, 0x2CB6C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"PP Win Portrait", 0x3170C, 0x317AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x0CF2C, 0x0CF4C, indexCPS2_Vamp_Gallon, 0 },
    { L"KK Intro/Outro", 0x0CF4C, 0x0CF6C },
    { L"KK 236P/41236KK/j.HP", 0x0CF6C, 0x0CF8C },
    { L"KK 236P/28K/Outro Flash", 0x0CF8C, 0x0CFAC },
    { L"KK Select Portrait", 0x2CD4C, 0x2CD6C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"KK Win Portrait", 0x321AC, 0x3224C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x0CFAC, 0x0CFCC, indexCPS2_Vamp_Gallon, 0 },
    { L"AP Intro/Outro", 0x0CFCC, 0x0CFEC },
    { L"AP 236P/41236KK/j.HP", 0x0CFEC, 0x0D00C },
    { L"AP 236P/28K/Outro Flash", 0x0D00C, 0x0D02C },
    { L"AP Select Portrait", 0x2CF4C, 0x2CF6C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AP Win Portrait", 0x32C4C, 0x32CEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x0D02C, 0x0D04C, indexCPS2_Vamp_Gallon, 0 },
    { L"AK Intro/Outro", 0x0D04C, 0x0D06C },
    { L"AK 236P/41236KK/j.HP", 0x0D06C, 0x0D08C },
    { L"AK 236P/28K/Outro Flash", 0x0D08C, 0x0D0AC },
    { L"AK Select Portrait", 0x2D14C, 0x2D16C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AK Win Portrait", 0x336EC, 0x3378C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x0D0AC, 0x0D0CC, indexCPS2_Vamp_Victor, 0 },
    { L"LP Electric Flash", 0x0D10C, 0x0D12C, indexCPS2_Vamp_Victor, 0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x0D0CC, 0x0D0EC },
    { L"LP Electricity", 0x0D0EC, 0x0D10C },
    { L"LP Intro", 0x01af4c, 0x01af6c, indexCPS2_Vamp_Victor },
    { L"LP Select Portrait", 0x2BF6C, 0x2BF8C, indexCPS2_Vamp_Victor, 0x20 },
    { L"LP Win Portrait", 0x2D7EC, 0x2D88C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x0D12C, 0x0D14C, indexCPS2_Vamp_Victor, 0 },
    { L"MP Electric Flash", 0x0D18C, 0x0D1AC, indexCPS2_Vamp_Victor, 0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x0D14C, 0x0D16C },
    { L"MP Electricity", 0x0D16C, 0x0D18C },
    { L"MP Intro", 0x01af6c, 0x01af8c, indexCPS2_Vamp_Victor },
    { L"MP Select Portrait", 0x2C16C, 0x2C18C, indexCPS2_Vamp_Victor, 0x20 },
    { L"MP Win Portrait", 0x2E28C, 0x2E32C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x0D1AC, 0x0D1CC, indexCPS2_Vamp_Victor, 0 },
    { L"HP Electric Flash", 0x0D20C, 0x0D22C, indexCPS2_Vamp_Victor, 0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x0D1CC, 0x0D1EC },
    { L"HP Electricity", 0x0D1EC, 0x0D20C },
    { L"HP Intro", 0x01af8c, 0x01afac, indexCPS2_Vamp_Victor },
    { L"HP Select Portrait", 0x2C36C, 0x2C38C, indexCPS2_Vamp_Victor, 0x20 },
    { L"HP Win Portrait", 0x2ED2C, 0x2EDCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x0D22C, 0x0D24C, indexCPS2_Vamp_Victor, 0 },
    { L"LK Electric Flash", 0x0D28C, 0x0D2AC, indexCPS2_Vamp_Victor, 0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x0D24C, 0x0D26C },
    { L"LK Electricity", 0x0D26C, 0x0D28C },
    { L"LK Intro", 0x01afac, 0x01afcc, indexCPS2_Vamp_Victor },
    { L"LK Select Portrait", 0x2C56C, 0x2C58C, indexCPS2_Vamp_Victor, 0x20 },
    { L"LK Win Portrait", 0x2F7CC, 0x2F86C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x0D2AC, 0x0D2CC, indexCPS2_Vamp_Victor, 0 },
    { L"MK Electric Flash", 0x0D30C, 0x0D32C, indexCPS2_Vamp_Victor, 0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x0D2CC, 0x0D2EC },
    { L"MK Electricity", 0x0D2EC, 0x0D30C },
    { L"MK Intro", 0x01afcc, 0x01afec, indexCPS2_Vamp_Victor },
    { L"MK Select Portrait", 0x2C76C, 0x2C78C, indexCPS2_Vamp_Victor, 0x20 },
    { L"MK Win Portrait", 0x3026C, 0x3030C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x0D32C, 0x0D34C, indexCPS2_Vamp_Victor, 0 },
    { L"HK Electric Flash", 0x0D38C, 0x0D3AC, indexCPS2_Vamp_Victor, 0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x0D34C, 0x0D36C },
    { L"HK Electricity", 0x0D36C, 0x0D38C },
    { L"HK Intro", 0x01afec, 0x01b00c, indexCPS2_Vamp_Victor },
    { L"HK Select Portrait", 0x2C96C, 0x2C98C, indexCPS2_Vamp_Victor, 0x20 },
    { L"HK Win Portrait", 0x30D0C, 0x30DAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x0D3AC, 0x0D3CC, indexCPS2_Vamp_Victor, 0 },
    { L"PP Electric Flash", 0x0D40C, 0x0D42C, indexCPS2_Vamp_Victor, 0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x0D3CC, 0x0D3EC },
    { L"PP Electricity", 0x0D3EC, 0x0D40C },
    { L"PP Intro", 0x01b00c, 0x01b02c, indexCPS2_Vamp_Victor },
    { L"PP Select Portrait", 0x2CB6C, 0x2CB8C, indexCPS2_Vamp_Victor, 0x20 },
    { L"PP Win Portrait", 0x317AC, 0x3184C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x0D42C, 0x0D44C, indexCPS2_Vamp_Victor, 0 },
    { L"KK Electric Flash", 0x0D48C, 0x0D4AC, indexCPS2_Vamp_Victor, 0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x0D44C, 0x0D46C },
    { L"KK Electricity", 0x0D46C, 0x0D48C },
    { L"KK Intro", 0x01b02c, 0x01b04c, indexCPS2_Vamp_Victor },
    { L"KK Select Portrait", 0x2CD6C, 0x2CD8C, indexCPS2_Vamp_Victor, 0x20 },
    { L"KK Win Portrait", 0x3224C, 0x322EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x0D4AC, 0x0D4CC, indexCPS2_Vamp_Victor, 0 },
    { L"AP Electric Flash", 0x0D50C, 0x0D52C, indexCPS2_Vamp_Victor, 0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x0D4CC, 0x0D4EC },
    { L"AP Electricity", 0x0D4EC, 0x0D50C },
    { L"AP Intro", 0x01b04c, 0x01b06c, indexCPS2_Vamp_Victor },
    { L"AP Select Portrait", 0x2CF6C, 0x2CF8C, indexCPS2_Vamp_Victor, 0x20 },
    { L"AP Win Portrait", 0x32CEC, 0x32D8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x0D52C, 0x0D54C, indexCPS2_Vamp_Victor, 0 },
    { L"AK Electric Flash", 0x0D58C, 0x0D5AC, indexCPS2_Vamp_Victor, 0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x0D54C, 0x0D56C },
    { L"AK Electricity", 0x0D56C, 0x0D58C },
    { L"AK Intro", 0x01b06c, 0x01b08c, indexCPS2_Vamp_Victor },
    { L"AK Select Portrait", 0x2D16C, 0x2D18C, indexCPS2_Vamp_Victor, 0x20 },
    { L"AK Win Portrait", 0x3378C, 0x3382C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x0D5AC, 0x0D5CC, indexCPS2_Vamp_Zabel, 0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x0D5CC, 0x0D5EC },
    { L"LP Unused 1", 0x0D5EC, 0x0D60C },
    { L"LP Unused 2", 0x0D60C, 0x0D62C },
    { L"LP Select Portrait", 0x2BF8C, 0x2BFAC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LP Win Portrait", 0x2D88C, 0x2D92C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x0D62C, 0x0D64C, indexCPS2_Vamp_Zabel, 0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x0D64C, 0x0D66C },
    { L"MP Unused 1", 0x0D66C, 0x0D68C },
    { L"MP Unused 2", 0x0D68C, 0x0D6AC },
    { L"MP Select Portrait", 0x2C18C, 0x2C1AC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MP Win Portrait", 0x2E32C, 0x2E3CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x0D6AC, 0x0D6CC, indexCPS2_Vamp_Zabel, 0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x0D6CC, 0x0D6EC },
    { L"HP Unused 1", 0x0D6EC, 0x0D70C },
    { L"HP Unused 2", 0x0D70C, 0x0D72C },
    { L"HP Select Portrait", 0x2C38C, 0x2C3AC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HP Win Portrait", 0x2EDCC, 0x2EE6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x0d72C, 0x0d74c, indexCPS2_Vamp_Zabel, 0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x0d74C, 0x0d76c },
    { L"LK Unused 1", 0x0d76C, 0x0d78c },
    { L"LK Unused 2", 0x0d78C, 0x0d7ac },
    { L"LK Select Portrait", 0x2C58C, 0x2C5AC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LK Win Portrait", 0x2F86C, 0x2F90C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x0d7aC, 0x0d7cc, indexCPS2_Vamp_Zabel, 0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x0d7cC, 0x0d7ec },
    { L"MK Unused 1", 0x0d7eC, 0x0d80c },
    { L"MK Unused 2", 0x0d80C, 0x0d82c },
    { L"MK Select Portrait", 0x2C78C, 0x2C7AC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MK Win Portrait", 0x3030C, 0x303AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x0d82C, 0x0d84c, indexCPS2_Vamp_Zabel, 0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x0d84C, 0x0d86c },
    { L"HK Unused 1", 0x0d86C, 0x0d88c },
    { L"HK Unused 2", 0x0d88C, 0x0d8ac },
    { L"HK Select Portrait", 0x2C98C, 0x2C9AC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HK Win Portrait", 0x30DAC, 0x30E4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x0d8aC, 0x0d8cc, indexCPS2_Vamp_Zabel, 0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x0d8cC, 0x0d8ec },
    { L"PP Unused 1", 0x0d8eC, 0x0d90c },
    { L"PP Unused 2", 0x0d90C, 0x0d92c },
    { L"PP Select Portrait", 0x2CB8C, 0x2CBAC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"PP Win Portrait", 0x3184C, 0x318EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x0d92C, 0x0d94c, indexCPS2_Vamp_Zabel, 0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x0d94C, 0x0d96c },
    { L"KK Unused 1", 0x0d96C, 0x0d98c },
    { L"KK Unused 2", 0x0d98C, 0x0d9ac },
    { L"KK Select Portrait", 0x2CD8C, 0x2CDAC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"KK Win Portrait", 0x322EC, 0x3238C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x0d9aC, 0x0d9cc, indexCPS2_Vamp_Zabel, 0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x0d9cC, 0x0d9ec },
    { L"AP Unused 1", 0x0d9eC, 0x0da0c },
    { L"AP Unused 2", 0x0da0C, 0x0da2c },
    { L"AP Select Portrait", 0x2CF8C, 0x2CFAC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AP Win Portrait", 0x32D8C, 0x32E2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x0da2C, 0x0da4c, indexCPS2_Vamp_Zabel, 0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x0da4C, 0x0da6c },
    { L"AK Unused 1", 0x0da6C, 0x0da8c },
    { L"AK Unused 2", 0x0da8C, 0x0daac },
    { L"AK Select Portrait", 0x2D18C, 0x2D1AC, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AK Win Portrait", 0x3382C, 0x338CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x0daaC, 0x0dacc, indexCPS2_Morrigan, 0x00 },
    { L"LP Idle sparkles/Raging demon", 0x0dacC, 0x0daec, indexCPS2_Morrigan, 2 },
    { L"LP Bats", 0x0daeC, 0x0db0c, indexCPS2_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x0db0C, 0x0db2c },
    { L"LP Select Portrait", 0x2BFAC, 0x2BFCC, indexCPS2_Morrigan, 0x20 },
    { L"LP Win Portrait", 0x2D92C, 0x2D9CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x0db2C, 0x0db4c, indexCPS2_Morrigan, 0x00 },
    { L"MP Idle sparkles/Raging demon", 0x0db4C, 0x0db6c, indexCPS2_Morrigan, 2 },
    { L"MP Bats", 0x0db6C, 0x0db8c, indexCPS2_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x0db8C, 0x0dbac },
    { L"MP Select Portrait", 0x2C1AC, 0x2C1CC, indexCPS2_Morrigan, 0x20 },
    { L"MP Win Portrait", 0x2E3CC, 0x2E46C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x0dbaC, 0x0dbcc, indexCPS2_Morrigan, 0x00 },
    { L"HP Idle sparkles/Raging demon", 0x0dbcC, 0x0dbec, indexCPS2_Morrigan, 2 },
    { L"HP Bats", 0x0dbeC, 0x0dc0c, indexCPS2_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x0dc0C, 0x0dc2c },
    { L"HP Select Portrait", 0x2C3AC, 0x2C3CC, indexCPS2_Morrigan, 0x20 },
    { L"HP Win Portrait", 0x2EE6C, 0x2EF0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x0dc2C, 0x0dc4c, indexCPS2_Morrigan, 0x00 },
    { L"LK Idle sparkles/Raging demon", 0x0dc4C, 0x0dc6c, indexCPS2_Morrigan, 2 },
    { L"LK Bats", 0x0dc6C, 0x0dc8c, indexCPS2_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x0dc8C, 0x0dcac },
    { L"LK Select Portrait", 0x2C5AC, 0x2C5CC, indexCPS2_Morrigan, 0x20 },
    { L"LK Win Portrait", 0x2F90C, 0x2F9AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x0dcaC, 0x0dccc, indexCPS2_Morrigan, 0x00 },
    { L"MK Idle sparkles/Raging demon", 0x0dccC, 0x0dcec, indexCPS2_Morrigan, 2 },
    { L"MK Bats", 0x0dceC, 0x0dd0c, indexCPS2_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x0dd0C, 0x0dd2c },
    { L"MK Select Portrait", 0x2C7AC, 0x2C7CC, indexCPS2_Morrigan, 0x20 },
    { L"MK Win Portrait", 0x303AC, 0x3044C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x0dd2C, 0x0dd4c, indexCPS2_Morrigan, 0x00 },
    { L"HK Idle sparkles/Raging demon", 0x0dd4C, 0x0dd6c, indexCPS2_Morrigan, 2 },
    { L"HK Bats", 0x0dd6C, 0x0dd8c, indexCPS2_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x0dd8C, 0x0ddac },
    { L"HK Select Portrait", 0x2C9AC, 0x2C9CC, indexCPS2_Morrigan, 0x20 },
    { L"HK Win Portrait", 0x30E4C, 0x30EEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x0ddaC, 0x0ddcc, indexCPS2_Morrigan, 0x00 },
    { L"PP Idle sparkles/Raging demon", 0x0ddcC, 0x0ddec, indexCPS2_Morrigan, 2 },
    { L"PP Bats", 0x0ddeC, 0x0de0c, indexCPS2_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x0de0C, 0x0de2c },
    { L"PP Select Portrait", 0x2CBAC, 0x2CBCC, indexCPS2_Morrigan, 0x20 },
    { L"PP Win Portrait", 0x318EC, 0x3198C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x0de2C, 0x0de4c, indexCPS2_Morrigan, 0x00 },
    { L"KK Idle sparkles/Raging demon", 0x0de4C, 0x0de6c, indexCPS2_Morrigan, 2 },
    { L"KK Bats", 0x0de6C, 0x0de8c, indexCPS2_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x0de8C, 0x0deac },
    { L"KK Select Portrait", 0x2CDAC, 0x2CDCC, indexCPS2_Morrigan, 0x20 },
    { L"KK Win Portrait", 0x3238C, 0x3242C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x0deaC, 0x0decc, indexCPS2_Morrigan, 0x00 },
    { L"AP Idle sparkles/Raging demon", 0x0decC, 0x0deec, indexCPS2_Morrigan, 2 },
    { L"AP Bats", 0x0deeC, 0x0df0c, indexCPS2_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x0df0C, 0x0df2c },
    { L"AP Select Portrait", 0x2CFAC, 0x2CFCC, indexCPS2_Morrigan, 0x20 },
    { L"AP Win Portrait", 0x32E2C, 0x32ECC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x0df2C, 0x0df4c, indexCPS2_Morrigan, 0x00 },
    { L"AK Idle sparkles/Raging demon", 0x0df4C, 0x0df6c, indexCPS2_Morrigan, 2 },
    { L"AK Bats", 0x0df6C, 0x0df8c, indexCPS2_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x0df8C, 0x0dfac },
    { L"AK Select Portrait", 0x2D1AC, 0x2D1CC, indexCPS2_Morrigan, 0x20 },
    { L"AK Win Portrait", 0x338CC, 0x3396C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Fireball 1/3", 0x01b18c, 0x01b1ac },
    { L"Fireball 2/3", 0x01b1ac, 0x01b1cc },
    { L"Fireball 3/3", 0x01b1cc, 0x01b1ec },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x0dfaC, 0x0dfcc, indexCPS2_Anakaris, 0 },
    { L"LP 2.HP/Mummies", 0x0dfeC, 0x0e00c, indexCPS2_Anakaris, 2 },
    { L"LP 426KK/62KK Light", 0x0dfcC, 0x0dfec, indexCPS2_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x0e00C, 0x0e02c, indexCPS2_Anakaris, 0x0a },
    { L"LP Select Portrait", 0x2BFCC, 0x2BFEC, indexCPS2_Anakaris, 0x20 },
    { L"LP Win Portrait", 0x2D9CC, 0x2DA6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x0e02C, 0x0e04c, indexCPS2_Anakaris, 0 },
    { L"MP 2.HP/Mummies", 0x0e06C, 0x0e08c, indexCPS2_Anakaris, 2 },
    { L"MP 426KK/62KK Light", 0x0e04C, 0x0e06c, indexCPS2_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x0e08C, 0x0e0ac, indexCPS2_Anakaris, 0x0a },
    { L"MP Select Portrait", 0x2C1CC, 0x2C1EC, indexCPS2_Anakaris, 0x20 },
    { L"MP Win Portrait", 0x2E46C, 0x2E50C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x0e0aC, 0x0e0cc, indexCPS2_Anakaris, 0 },
    { L"HP 2.HP/Mummies", 0x0e0eC, 0x0e10c, indexCPS2_Anakaris, 2 },
    { L"HP 426KK/62KK Light", 0x0e0cC, 0x0e0ec, indexCPS2_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x0e10C, 0x0e12c, indexCPS2_Anakaris, 0x0a },
    { L"HP Select Portrait", 0x2C3CC, 0x2C3EC, indexCPS2_Anakaris, 0x20 },
    { L"HP Win Portrait", 0x2EF0C, 0x2EFAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x0e12C, 0x0e14c, indexCPS2_Anakaris, 0 },
    { L"LK 2.HP/Mummies", 0x0e16C, 0x0e18c, indexCPS2_Anakaris, 2 },
    { L"LK 426KK/62KK Light", 0x0e14C, 0x0e16c, indexCPS2_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x0e18C, 0x0e1ac, indexCPS2_Anakaris, 0x0a },
    { L"LK Select Portrait", 0x2C5CC, 0x2C5EC, indexCPS2_Anakaris, 0x20 },
    { L"LK Win Portrait", 0x2F9AC, 0x2FA4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x0e1aC, 0x0e1cc, indexCPS2_Anakaris, 0 },
    { L"MK 2.HP/Mummies", 0x0e1eC, 0x0e20c, indexCPS2_Anakaris, 2 },
    { L"MK 426KK/62KK Light", 0x0e1cC, 0x0e1ec, indexCPS2_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x0e20C, 0x0e22c, indexCPS2_Anakaris, 0x0a },
    { L"MK Select Portrait", 0x2C7CC, 0x2C7EC, indexCPS2_Anakaris, 0x20 },
    { L"MK Win Portrait", 0x3044C, 0x304EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x0e22C, 0x0e24c, indexCPS2_Anakaris, 0 },
    { L"HK 2.HP/Mummies", 0x0e26C, 0x0e28c, indexCPS2_Anakaris, 2 },
    { L"HK 426KK/62KK Light", 0x0e24C, 0x0e26c, indexCPS2_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x0e28C, 0x0e2ac, indexCPS2_Anakaris, 0x0a },
    { L"HK Select Portrait", 0x2C9CC, 0x2C9EC, indexCPS2_Anakaris, 0x20 },
    { L"HK Win Portrait", 0x30EEC, 0x30F8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x0e2aC, 0x0e2cc, indexCPS2_Anakaris, 0 },
    { L"PP 2.HP/Mummies", 0x0e2eC, 0x0e30c, indexCPS2_Anakaris, 2 },
    { L"PP 426KK/62KK Light", 0x0e2cC, 0x0e2ec, indexCPS2_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x0e30C, 0x0e32c, indexCPS2_Anakaris, 0x0a },
    { L"PP Select Portrait", 0x2CBCC, 0x2CBEC, indexCPS2_Anakaris, 0x20 },
    { L"PP Win Portrait", 0x3198C, 0x31A2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x0e32C, 0x0e34c, indexCPS2_Anakaris, 0 },
    { L"KK 2.HP/Mummies", 0x0e36C, 0x0e38c, indexCPS2_Anakaris, 2 },
    { L"KK 426KK/62KK Light", 0x0e34C, 0x0e36c, indexCPS2_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x0e38C, 0x0e3ac, indexCPS2_Anakaris, 0x0a },
    { L"KK Select Portrait", 0x2CDCC, 0x2CDEC, indexCPS2_Anakaris, 0x20 },
    { L"KK Win Portrait", 0x3242C, 0x324CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x0e3aC, 0x0e3cc, indexCPS2_Anakaris, 0 },
    { L"AP 2.HP/Mummies", 0x0e3eC, 0x0e40c, indexCPS2_Anakaris, 2 },
    { L"AP 426KK/62KK Light", 0x0e3cC, 0x0e3ec, indexCPS2_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x0e40C, 0x0e42c, indexCPS2_Anakaris, 0x0a },
    { L"AP Select Portrait", 0x2CFCC, 0x2CFEC, indexCPS2_Anakaris, 0x20 },
    { L"AP Win Portrait", 0x32ECC, 0x32F6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x0e42C, 0x0e44c, indexCPS2_Anakaris, 0 },
    { L"AK 2.HP/Mummies", 0x0e46C, 0x0e48c, indexCPS2_Anakaris, 2 },
    { L"AK 426KK/62KK Light", 0x0e44C, 0x0e46c, indexCPS2_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x0e48C, 0x0e4ac, indexCPS2_Anakaris, 0x0a },
    { L"AK Select Portrait", 0x2D1CC, 0x2D1EC, indexCPS2_Anakaris, 0x20 },
    { L"AK Win Portrait", 0x3396C, 0x33A0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Anakaris Pharaoh Magic Orbs 2", 0x1b2e0 - 0xf4, 0x1b320 - 0xf4, indexCPS2_Anakaris, 0x0b, &pairNext2 },
    { L"Anakaris Pharaoh Asteroids",    0x1b320 - 0xf4, 0x1b340 - 0xf4, indexCPS2_Anakaris, 0x08 },
    { L"Anakaris Pharaoh Magic Orbs 3", 0x1b340 - 0xf4, 0x1b360 - 0xf4, indexCPS2_Anakaris, 0x0e },
    { L"Anakaris Pharaoh Girls/Mini Mummy LP",        0x1b360 - 0xf4, 0x1b3a0 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MP",        0x1b3a0 - 0xf4, 0x1b3e0 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HP",        0x1b3e0 - 0xf4, 0x1b420 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy LK",        0x1b420 - 0xf4, 0x1b460 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MK",        0x1b460 - 0xf4, 0x1b4a0 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HK",        0x1b4a0 - 0xf4, 0x1b4e0 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy PP",        0x1b4e0 - 0xf4, 0x1b520 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy KK",        0x1b520 - 0xf4, 0x1b560 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AP",        0x1b560 - 0xf4, 0x1b5a0 - 0xf4, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AK",        0x1b5a0 - 0xf4, 0x1b5e0 - 0xf4, indexCPS2_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x0e4aC, 0x0e4cc, indexCPS2_Felicia, 0 },
    { L"LP Helpers/Mouse", 0x0e4cC, 0x0e4ec, indexCPS2_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x0e4eC, 0x0e50c, indexCPS2_Felicia, 0x01 },
    { L"LP Unknown Extra", 0x0e50C, 0x0e52c },
    { L"LP Select portrait", 0x2BFEC, 0x2C00C, indexCPS2_Felicia, 0x20 },
    { L"LP Win Portrait", 0x2DA6C, 0x2DB0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x0e52C, 0x0e54c, indexCPS2_Felicia, 0 },
    { L"MP Helpers/Mouse", 0x0e54C, 0x0e56c, indexCPS2_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x0e56C, 0x0e58c, indexCPS2_Felicia, 0x01 },
    { L"MP Unknown Extra", 0x0e58C, 0x0e5ac },
    { L"MP Select Portrait", 0x2C1EC, 0x2C20C, indexCPS2_Felicia, 0x20 },
    { L"MP Win Portrait", 0x2E50C, 0x2E5AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x0e5aC, 0x0e5cc, indexCPS2_Felicia, 0 },
    { L"HP Helpers/Mouse", 0x0e5cC, 0x0e5ec, indexCPS2_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x0e5eC, 0x0e60c, indexCPS2_Felicia, 0x01 },
    { L"HP Unknown Extra", 0x0e60C, 0x0e62c },
    { L"HP Select Portrait", 0x2C3EC, 0x2C40C, indexCPS2_Felicia, 0x20 },
    { L"HP Win Portrait", 0x2EFAC, 0x2F04C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x0e62C, 0x0e64c, indexCPS2_Felicia, 0 },
    { L"LK Helpers/Mouse", 0x0e64C, 0x0e66c, indexCPS2_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x0e66C, 0x0e68c, indexCPS2_Felicia, 0x01 },
    { L"LK Unknown Extra", 0x0e68C, 0x0e6ac },
    { L"LK Select Portrait", 0x2C5EC, 0x2C60C, indexCPS2_Felicia, 0x20 },
    { L"LK Win Portrait", 0x2FA4C, 0x2FAEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x0e6aC, 0x0e6cc, indexCPS2_Felicia, 0 },
    { L"MK Helpers/Mouse", 0x0e6cC, 0x0e6ec, indexCPS2_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x0e6eC, 0x0e70c, indexCPS2_Felicia, 0x01 },
    { L"MK Unknown Extra", 0x0e70C, 0x0e72c },
    { L"MK Select Portrait", 0x2C7EC, 0x2C80C, indexCPS2_Felicia, 0x20 },
    { L"MK Win Portrait", 0x304EC, 0x3058C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x0e72C, 0x0e74c, indexCPS2_Felicia, 0 },
    { L"HK Helpers/Mouse", 0x0e74C, 0x0e76c, indexCPS2_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x0e76C, 0x0e78c, indexCPS2_Felicia, 0x01 },
    { L"HK Unknown Extra", 0x0e78C, 0x0e7ac },
    { L"HK Select Portrait", 0x2C9EC, 0x2CA0C, indexCPS2_Felicia, 0x20 },
    { L"HK Win Portrait", 0x30F8C, 0x3102C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x0e7aC, 0x0e7cc, indexCPS2_Felicia, 0 },
    { L"PP Helpers/Mouse", 0x0e7cC, 0x0e7ec, indexCPS2_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x0e7eC, 0x0e80c, indexCPS2_Felicia, 0x01 },
    { L"PP Unknown Extra", 0x0e80C, 0x0e82c },
    { L"PP Select Portrait", 0x2CBEC, 0x2CC0C, indexCPS2_Felicia, 0x20 },
    { L"PP Win Portrait", 0x31A2C, 0x31ACC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x0e82C, 0x0e84c, indexCPS2_Felicia, 0 },
    { L"KK Helpers/Mouse", 0x0e84C, 0x0e86c, indexCPS2_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x0e86C, 0x0e88c, indexCPS2_Felicia, 0x01 },
    { L"KK Unknown Extra", 0x0e88C, 0x0e8ac },
    { L"KK Select Portrait", 0x2CDEC, 0x2CE0C, indexCPS2_Felicia, 0x20 },
    { L"KK Win Portrait", 0x324CC, 0x3256C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x0e8aC, 0x0e8cc, indexCPS2_Felicia, 0 },
    { L"AP Helpers/Mouse", 0x0e8cC, 0x0e8ec, indexCPS2_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x0e8eC, 0x0e90c, indexCPS2_Felicia, 0x01 },
    { L"AP Unknown Extra", 0x0e90C, 0x0e92c },
    { L"AP Select Portrait", 0x2CFEC, 0x2D00C, indexCPS2_Felicia, 0x20 },
    { L"AP Win Portrait", 0x32F6C, 0x3300C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x0e92C, 0x0e94c, indexCPS2_Felicia, 0 },
    { L"AK Helpers/Mouse", 0x0e94C, 0x0e96c, indexCPS2_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x0e96C, 0x0e98c, indexCPS2_Felicia, 0x01 },
    { L"AK Unknown Extra", 0x0e98C, 0x0e9ac },
    { L"AK Select Portrait", 0x2D1EC, 0x2D20C, indexCPS2_Felicia, 0x20 },
    { L"AK Win Portrait", 0x33A0C, 0x33AAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x0e9aC, 0x0e9cc, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Ghosts/Hitsparks", 0x0e9eC, 0x0ea0c },
    { L"LP 41236KK", 0x0e9cC, 0x0e9ec, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Unknown Extra", 0x0ea0C, 0x0ea2c },
    { L"LP Select Portrait", 0x2C00C, 0x2C02C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x2DB0C, 0x2DBAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x0ea2C, 0x0ea4c, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Ghosts/Hitsparks", 0x0ea6C, 0x0ea8c },
    { L"MP 41236KK", 0x0ea4C, 0x0ea6c, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Unknown Extra", 0x0ea8C, 0x0eaac },
    { L"MP Select Portrait", 0x2C20C, 0x2C22C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x2E5AC, 0x2E64C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x0eaaC, 0x0eacc, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Ghosts/Hitsparks", 0x0eaeC, 0x0eb0c },
    { L"HP 41236KK", 0x0eacC, 0x0eaec, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Unknown Extra", 0x0eb0C, 0x0eb2c },
    { L"HP Select Portrait", 0x2C40C, 0x2C42C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x2F04C, 0x2F0EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x0eb2C, 0x0eb4c, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Ghosts/Hitsparks", 0x0eb6C, 0x0eb8c },
    { L"LK 41236KK", 0x0eb4C, 0x0eb6c, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Unknown Extra", 0x0eb8C, 0x0ebac },
    { L"LK Select Portrait", 0x2C60C, 0x2C62C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x2FAEC, 0x2FB8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x0ebaC, 0x0ebcc, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Ghosts/Hitsparks", 0x0ebeC, 0x0ec0c },
    { L"MK 41236KK", 0x0ebcC, 0x0ebec, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Unknown Extra", 0x0ec0C, 0x0ec2c },
    { L"MK Select Portrait", 0x2C80C, 0x2C82C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x3058C, 0x3062C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x0ec2C, 0x0ec4c, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Ghosts/Hitsparks", 0x0ec6C, 0x0ec8c },
    { L"HK 41236KK", 0x0ec4C, 0x0ec6c, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Unknown Extra", 0x0ec8C, 0x0ecac },
    { L"HK Select Portrait", 0x2CA0C, 0x2CA2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x3102C, 0x310CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x0ecaC, 0x0eccc, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Ghosts/Hitsparks", 0x0eceC, 0x0ed0c },
    { L"PP 41236KK", 0x0eccC, 0x0ecec, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Unknown Extra", 0x0ed0C, 0x0ed2c },
    { L"PP Select Portrait", 0x2CC0C, 0x2CC2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"PP Win Portrait", 0x31ACC, 0x31B6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x0ed2C, 0x0ed4c, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Ghosts/Hitsparks", 0x0ed6C, 0x0ed8c },
    { L"KK 41236KK", 0x0ed4C, 0x0ed6c, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Unknown Extra", 0x0ed8C, 0x0edac },
    { L"KK Select Portrait", 0x2CE0C, 0x2CE2C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"KK Win Portrait", 0x3256C, 0x3260C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x0edaC, 0x0edcc, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Ghosts/Hitsparks", 0x0edeC, 0x0ee0c },
    { L"AP 41236KK", 0x0edcC, 0x0edec, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Unknown Extra", 0x0ee0C, 0x0ee2c },
    { L"AP Select Portrait", 0x2D00C, 0x2D02C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AP Win Portrait", 0x3300C, 0x330AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x0ee2C, 0x0ee4c, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Ghosts/Hitsparks", 0x0ee6C, 0x0ee8c },
    { L"AK 41236KK", 0x0ee4C, 0x0ee6c, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Unknown Extra", 0x0ee8C, 0x0eeac },
    { L"AK Select Portrait", 0x2D20C, 0x2D22C, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AK Win Portrait", 0x33AAC, 0x33B4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x0eeaC, 0x0eecc, indexCPS2_Vamp_Aulbath, 0 },
    { L"LP Water/s.MK/j.MP", 0x0eecC, 0x0eeec },
    { L"LP Poison Cloud", 0x0ef0C, 0x0ef2c },
    { L"LP Mach Crab (not full pal)", 0x0eeeC, 0x0ef0c },
    { L"LP Gem's Anger", 0x01b6ec, 0x01b70c },
    { L"LP Select Portrait", 0x2C02C, 0x2C04C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LP Win Portrait", 0x2DBAC, 0x2DC4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x0ef2C, 0x0ef4c, indexCPS2_Vamp_Aulbath, 0 },
    { L"MP Water/s.MK/j.MP", 0x0ef4C, 0x0ef6c },
    { L"MP Poison Cloud", 0x0ef8C, 0x0efac },
    { L"MP Mach Crab (not full pal)", 0x0ef6C, 0x0ef8c },
    { L"MP Gem's Anger", 0x01b70c, 0x01b72c },
    { L"MP Select Portrait", 0x2C22C, 0x2C24C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MP Win Portrait", 0x2E64C, 0x2E6EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x0efaC, 0x0efcc, indexCPS2_Vamp_Aulbath, 0 },
    { L"HP Water/s.MK/j.MP", 0x0efcC, 0x0efec },
    { L"HP Poison Cloud", 0x0f00C, 0x0f02c },
    { L"HP Mach Crab (not full pal)", 0x0efeC, 0x0f00c },
    { L"HP Gem's Anger", 0x01b72c, 0x01b74c},
    { L"HP Select Portrait", 0x2C42C, 0x2C44C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HP Win Portrait", 0x2F0EC, 0x2F18C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x0f02C, 0x0f04c, indexCPS2_Vamp_Aulbath, 0 },
    { L"LK Water/s.MK/j.MP", 0x0f04C, 0x0f06c },
    { L"LK Poison Cloud", 0x0f08C, 0x0f0ac },
    { L"LK Mach Crab (not full pal)", 0x0f06C, 0x0f08c },
    { L"LK Gem's Anger", 0x01b74c, 0x01b76c },
    { L"LK Select Portrait", 0x2C62C, 0x2C64C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LK Win Portrait", 0x2FB8C, 0x2FC2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x0f0aC, 0x0f0cc, indexCPS2_Vamp_Aulbath, 0 },
    { L"MK Water/s.MK/j.MP", 0x0f0cC, 0x0f0ec },
    { L"MK Poison Cloud", 0x0f10C, 0x0f12c },
    { L"MK Mach Crab (not full pal)", 0x0f0eC, 0x0f10c },
    { L"MK Gem's Anger", 0x01b76c, 0x01b78c },
    { L"MK Select Portrait", 0x2C82C, 0x2C84C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MK Win Portrait", 0x3062C, 0x306CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x0f12C, 0x0f14c, indexCPS2_Vamp_Aulbath, 0 },
    { L"HK Water/s.MK/j.MP", 0x0f14C, 0x0f16c },
    { L"HK Poison Cloud", 0x0f18C, 0x0f1ac },
    { L"HK Mach Crab (not full pal)", 0x0f16C, 0x0f18c },
    { L"HK Gem's Anger", 0x01b78c, 0x01b7ac },
    { L"HK Select Portrait", 0x2CA2C, 0x2CA4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HK Win Portrait", 0x310CC, 0x3116C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x0f1aC, 0x0f1cc, indexCPS2_Vamp_Aulbath, 0 },
    { L"PP Poison Cloud", 0x0f20C, 0x0f22c },
    { L"PP Water/s.MK/j.MP", 0x0f1cC, 0x0f1ec },
    { L"PP Mach Crab (not full pal)", 0x0f1eC, 0x0f20c },
    { L"PP Gem's Anger", 0x01b7ac, 0x01b7cc },
    { L"PP Select Portrait", 0x2CC2C, 0x2CC4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"PP Win Portrait", 0x31B6C, 0x31C0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x0f22C, 0x0f24c, indexCPS2_Vamp_Aulbath, 0 },
    { L"KK Water/s.MK/j.MP", 0x0f24C, 0x0f26c },
    { L"KK Poison Cloud", 0x0f28C, 0x0f2ac },
    { L"KK Mach Crab (not full pal)", 0x0f26C, 0x0f28c },
    { L"KK Gem's Anger", 0x01b7cc, 0x01b7ec },
    { L"KK Select Portrait", 0x2CE2C, 0x2CE4C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"KK Win Portrait", 0x3260C, 0x326AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x0f2aC, 0x0f2cc, indexCPS2_Vamp_Aulbath, 0 },
    { L"AP Water/s.MK/j.MP", 0x0f2cC, 0x0f2ec },
    { L"AP Poison Cloud", 0x0f30C, 0x0f32c },
    { L"AP Mach Crab (not full pal)", 0x0f2eC, 0x0f30c },
    { L"AP Gem's Anger", 0x01b7ec, 0x01b80c },
    { L"AP Select Portrait", 0x2D02C, 0x2D04C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AP Win Portrait", 0x330AC, 0x3314C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x0f32C, 0x0f34c, indexCPS2_Vamp_Aulbath, 0 },
    { L"AK Water/s.MK/j.MP", 0x0f34C, 0x0f36c },
    { L"AK Poison Cloud", 0x0f38C, 0x0f3ac },
    { L"AK Mach Crab (not full pal)", 0x0f36C, 0x0f38c },
    { L"AK Gem's Anger", 0x01b80c, 0x01b82c, indexCPS2_Vamp_Aulbath, 0 },
    { L"AK Select Portrait", 0x2D22C, 0x2D24C, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AK Win Portrait", 0x33B4C, 0x33BEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x0f3aC, 0x0f3cc, indexCPS2_Vamp_Sasquatch, 0 },
    { L"LP Ice Extras", 0x0f40C, 0x0f42c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x0f3cC, 0x0f3ec, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x0f3eC, 0x0f40c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LP Select Portrait", 0x2C04C, 0x2C06C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LP Win Portrait", 0x2DC4C, 0x2DCEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x0f42C, 0x0f44c, indexCPS2_Vamp_Sasquatch, 0 },
    { L"MP Ice Extras", 0x0f48C, 0x0f4ac, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x0f44C, 0x0f46c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x0f46C, 0x0f48c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MP Select Portrait", 0x2C24C, 0x2C26C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MP Win Portrait", 0x2E6EC, 0x2E78C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x0f4aC, 0x0f4cc, indexCPS2_Vamp_Sasquatch, 0 },
    { L"HP Ice Extras", 0x0f50C, 0x0f52c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x0f4cC, 0x0f4ec, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x0f4eC, 0x0f50c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HP Select Portrait", 0x2C44C, 0x2C46C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HP Win Portrait", 0x2F18C, 0x2F22C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x0f52C, 0x0f54c, indexCPS2_Vamp_Sasquatch, 0 },
    { L"LK Ice Extras", 0x0f58C, 0x0f5ac, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x0f54C, 0x0f56c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x0f56C, 0x0f58c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LK Select Portrait", 0x2C64C, 0x2C66C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LK Win Portrait", 0x2FC2C, 0x2FCCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x0f5aC, 0x0f5cc, indexCPS2_Vamp_Sasquatch, 0 },
    { L"MK Ice Extras", 0x0f60C, 0x0f62c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x0f5cC, 0x0f5ec, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x0f5eC, 0x0f60c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MK Select Portrait", 0x2C84C, 0x2C86C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MK Win Portrait", 0x306CC, 0x3076C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x0f62c, 0x0f64c, indexCPS2_Vamp_Sasquatch, 0 },
    { L"HK Ice Extras", 0x0f68c, 0x0f6aC, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x0f64c, 0x0f66c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x0f66c, 0x0f68c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HK Select Portrait", 0x2A84C, 0x2A86C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HK Win Portrait", 0x3116C, 0x3120C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x0f6aC, 0x0f6cc, indexCPS2_Vamp_Sasquatch, 0 },
    { L"PP Ice Extras", 0x0f70C, 0x0f72c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x0f6cC, 0x0f6ec, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x0f6eC, 0x0f70c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"PP Select Portrait", 0x2CC4C, 0x2CC6C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"PP Win Portrait", 0x31C0C, 0x31CAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x0f72C, 0x0f74c, indexCPS2_Vamp_Sasquatch, 0 },
    { L"KK Ice Extras", 0x0f78C, 0x0f7ac, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x0f74C, 0x0f76c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x0f76C, 0x0f78c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"KK Select Portrait", 0x2CE4C, 0x2CE6C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"KK Win Portrait", 0x326AC, 0x3274C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x0f7aC, 0x0f7cc, indexCPS2_Vamp_Sasquatch, 0 },
    { L"AP Ice Extras", 0x0f80C, 0x0f82c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x0f7cC, 0x0f7ec, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x0f7eC, 0x0f80c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AP Select Portrait", 0x2D04C, 0x2D06C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AP Win Portrait", 0x3314C, 0x331EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x0f82C, 0x0f84c, indexCPS2_Vamp_Sasquatch, 0 },
    { L"AK Ice Extras", 0x0f88C, 0x0f8ac, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x0f84C, 0x0f86c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x0f86C, 0x0f88c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AK Select Portrait", 0x2D24C, 0x2D26C, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AK Win Portrait", 0x33BEC, 0x33C8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x0fcaC, 0x0fccc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"LP Wings/Honey", 0x0fccC, 0x0fcec, indexCPS2_Vamp_QBee, 1 },
    { L"LP Wings/Honey frame 2", 0x1ec6C, 0x1ec8c, indexCPS2_Vamp_QBee, 1 },
    { L"LP Bees", 0x0fd0C, 0x0fd2c },
    { L"LP Egg", 0x0fceC, 0x0fd0c },
    { L"LP Intro/ES 412PP 1", 0x1bf8C, 0x1bfac, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 2", 0x1bfcC, 0x1bfec, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 3", 0x1c00C, 0x1c02c, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 4", 0x1c04C, 0x1c06c, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 5", 0x1c08C, 0x1c0ac, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 6", 0x1c0cC, 0x1c0ec, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 7", 0x1c10C, 0x1c12c, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 8", 0x1c14C, 0x1c16c, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 1/7", 0x01e16c, 0x01e18c, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 2/7", 0x01e18c, 0x01e1ac, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 3/7", 0x01e1ac, 0x01e1cc, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 4/7", 0x01e1cc, 0x01e1ec, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 5/7", 0x01e1ec, 0x01e20c, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 6/7", 0x01e20c, 0x01e22c, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 7/7", 0x01e22c, 0x01e24c, indexCPS2_Vamp_QBee, 0 },
    { L"LP Select Portrait", 0x2C08C, 0x2C0AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"LP Win Portrait", 0x2DD8C, 0x2DE2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x0fd2C, 0x0fd4c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"MP Wings/Honey", 0x0fd4C, 0x0fd6c, indexCPS2_Vamp_QBee, 1 },
    { L"MP Wings/Honey frame 2", 0x1ec8C, 0x1ecac, indexCPS2_Vamp_QBee, 1 },
    { L"MP Bees", 0x0fd8C, 0x0fdac },
    { L"MP Egg", 0x0fd6C, 0x0fd8c },
    { L"MP Intro/ES 412PP 1", 0x1c18C, 0x1c1ac, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 2", 0x1c1cC, 0x1c1ec, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 3", 0x1c20C, 0x1c22c, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 4", 0x1c24C, 0x1c26c, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 5", 0x1c28C, 0x1c2ac, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 6", 0x1c2cC, 0x1c2ec, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 7", 0x1c30C, 0x1c32c, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 8", 0x1c34C, 0x1c36c, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 1/7", 0x01e28c, 0x01e2ac, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 2/7", 0x01e2ac, 0x01e2cc, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 3/7", 0x01e2cc, 0x01e2ec, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 4/7", 0x01e2ec, 0x01e30c, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 5/7", 0x01e30c, 0x01e32c, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 6/7", 0x01e32c, 0x01e34c, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 7/7", 0x01e34c, 0x01e36c, indexCPS2_Vamp_QBee, 0 },
    { L"MP Select Portrait", 0x2C28C, 0x2C2AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"MP Win Portrait", 0x2E82C, 0x2E8CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x0fdaC, 0x0fdcc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"HP Wings/Honey", 0x0fdcC, 0x0fdec, indexCPS2_Vamp_QBee, 1 },
    { L"HP Wings/Honey frame 2", 0x1ecaC, 0x1eccc, indexCPS2_Vamp_QBee, 1 },
    { L"HP Bees", 0x0fe0C, 0x0fe2c },
    { L"HP Egg", 0x0fdeC, 0x0fe0c },
    { L"HP Intro/ES 412PP 1", 0x1c38C, 0x1c3ac, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 2", 0x1c3cC, 0x1c3ec, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 3", 0x1c40C, 0x1c42c, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 4", 0x1c44C, 0x1c46c, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 5", 0x1c48C, 0x1c4ac, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 6", 0x1c4cC, 0x1c4ec, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 7", 0x1c50C, 0x1c52c, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 8", 0x1c54C, 0x1c56c, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 1/7", 0x01e3ac, 0x01e3cc, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 2/7", 0x01e3cc, 0x01e3ec, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 3/7", 0x01e3ec, 0x01e40c, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 4/7", 0x01e40c, 0x01e42c, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 5/7", 0x01e42c, 0x01e44c, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 6/7", 0x01e44c, 0x01e46c, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 7/7", 0x01e46c, 0x01e48c, indexCPS2_Vamp_QBee, 0 },
    { L"HP Select Portrait", 0x2C48C, 0x2C4AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"HP Win Portrait", 0x2F2CC, 0x2F36C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x0fe2C, 0x0fe4c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"LK Wings/Honey", 0x0fe4C, 0x0fe6c, indexCPS2_Vamp_QBee, 1 },
    { L"LK Wings/Honey frame 2", 0x1eccC, 0x1ecec, indexCPS2_Vamp_QBee, 1 },
    { L"LK Bees", 0x0fe8C, 0x0feac },
    { L"LK Egg", 0x0fe6C, 0x0fe8c },
    { L"LK Intro/ES 412PP 1", 0x1c58C, 0x1c5ac, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 2", 0x1c5cC, 0x1c5ec, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 3", 0x1c60C, 0x1c62c, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 4", 0x1c64C, 0x1c66c, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 5", 0x1c68C, 0x1c6ac, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 6", 0x1c6cC, 0x1c6ec, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 7", 0x1c70C, 0x1c72c, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 8", 0x1c74C, 0x1c76c, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 1/7", 0x01e4cc, 0x01e4ec, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 2/7", 0x01e4ec, 0x01e50c, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 3/7", 0x01e50c, 0x01e52c, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 4/7", 0x01e52c, 0x01e54c, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 5/7", 0x01e54c, 0x01e56c, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 6/7", 0x01e56c, 0x01e58c, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 7/7", 0x01e58c, 0x01e5ac, indexCPS2_Vamp_QBee, 0 },
    { L"LK Select Portrait", 0x2C68C, 0x2C6AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"LK Win Portrait", 0x2FD6C, 0x2FE0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x0feaC, 0x0fecc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"MK Wings/Honey", 0x0fecC, 0x0feec, indexCPS2_Vamp_QBee, 1 },
    { L"MK Wings/Honey frame 2", 0x1eceC, 0x1ed0c, indexCPS2_Vamp_QBee, 1 },
    { L"MK Bees", 0x0ff0C, 0x0ff2c },
    { L"MK Egg", 0x0feeC, 0x0ff0c },
    { L"MK Intro/ES 412PP 1", 0x1c78C, 0x1c7ac, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 2", 0x1c7cC, 0x1c7ec, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 3", 0x1c80C, 0x1c82c, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 4", 0x1c84C, 0x1c86c, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 5", 0x1c88C, 0x1c8ac, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 6", 0x1c8cC, 0x1c8ec, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 7", 0x1c90C, 0x1c92c, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 8", 0x1c94C, 0x1c96c, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 1/7", 0x01e5ec, 0x01e60c, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 2/7", 0x01e60c, 0x01e62c, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 3/7", 0x01e62c, 0x01e64c, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 4/7", 0x01e64c, 0x01e66c, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 5/7", 0x01e66c, 0x01e68c, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 6/7", 0x01e68c, 0x01e6ac, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 7/7", 0x01e6ac, 0x01e6cc, indexCPS2_Vamp_QBee, 0 },
    { L"MK Select Portrait", 0x2C88C, 0x2C8AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"MK Win Portrait", 0x3080C, 0x308AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x0ff2C, 0x0ff4c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"HK Wings/Honey", 0x0ff4C, 0x0ff6c, indexCPS2_Vamp_QBee, 1 },
    { L"HK Wings/Honey frame 2", 0x1ed0C, 0x1ed2c, indexCPS2_Vamp_QBee, 1 },
    { L"HK Bees", 0x0ff8C, 0x0ffac },
    { L"HK Egg", 0x0ff6C, 0x0ff8c },
    { L"HK Intro/ES 412PP 1", 0x1c98C, 0x1c9ac, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 2", 0x1c9cC, 0x1c9ec, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 3", 0x1ca0C, 0x1ca2c, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 4", 0x1ca4C, 0x1ca6c, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 5", 0x1ca8C, 0x1caac, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 6", 0x1cacC, 0x1caec, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 7", 0x1cb0C, 0x1cb2c, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 8", 0x1cb4C, 0x1cb6c, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 1/7", 0x01e70c, 0x01e72c, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 2/7", 0x01e72c, 0x01e74c, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 3/7", 0x01e74c, 0x01e76c, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 4/7", 0x01e76c, 0x01e78c, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 5/7", 0x01e78c, 0x01e7ac, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 6/7", 0x01e7ac, 0x01e7cc, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 7/7", 0x01e7cc, 0x01e7ec, indexCPS2_Vamp_QBee, 0 },
    { L"HK Select Portrait", 0x2CA8C, 0x2CAAC, indexCPS2_Vamp_QBee, 0x20 },
    { L"HK Win Portrait", 0x312AC, 0x3134C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x0ffaC, 0x0ffcc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"PP Wings/Honey", 0x0ffcC, 0x0ffec, indexCPS2_Vamp_QBee, 1 },
    { L"PP Wings/Honey frame 2", 0x1ed2C, 0x1ed4c, indexCPS2_Vamp_QBee, 1 },
    { L"PP Bees", 0x1000C, 0x1002c },
    { L"PP Egg", 0x0ffeC, 0x1000c },
    { L"PP Intro/ES 412PP 1", 0x1cb8C, 0x1cbac, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 2", 0x1cbcC, 0x1cbec, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 3", 0x1cc0C, 0x1cc2c, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 4", 0x1cc4C, 0x1cc6c, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 5", 0x1cc8C, 0x1ccac, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 6", 0x1cccC, 0x1ccec, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 7", 0x1cd0C, 0x1cd2c, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 8", 0x1cd4C, 0x1cd6c, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 1/7", 0x01e82c, 0x01e84c, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 2/7", 0x01e84c, 0x01e86c, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 3/7", 0x01e86c, 0x01e88c, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 4/7", 0x01e88c, 0x01e8ac, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 5/7", 0x01e8ac, 0x01e8cc, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 6/7", 0x01e8cc, 0x01e8ec, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 7/7", 0x01e8ec, 0x01e90c, indexCPS2_Vamp_QBee, 0 },
    { L"PP Select Portrait", 0x2CC8C, 0x2CCAC, indexCPS2_Vamp_QBee, 0x20 },
    { L"PP Win Portrait", 0x31D4C, 0x31DEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1002C, 0x1004c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"KK Wings/Honey", 0x1004C, 0x1006c, indexCPS2_Vamp_QBee, 1 },
    { L"KK Wings/Honey frame 2", 0x1ed4C, 0x1ed6c, indexCPS2_Vamp_QBee, 1 },
    { L"KK Bees", 0x1008C, 0x100ac },
    { L"KK Egg", 0x1006C, 0x1008c },
    { L"KK Intro/ES 412PP 1", 0x1cd8C, 0x1cdac, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 2", 0x1cdcC, 0x1cdec, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 3", 0x1ce0C, 0x1ce2c, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 4", 0x1ce4C, 0x1ce6c, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 5", 0x1ce8C, 0x1ceac, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 6", 0x1cecC, 0x1ceec, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 7", 0x1cf0C, 0x1cf2c, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 8", 0x1cf4C, 0x1cf6c, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 1/7", 0x01e94c, 0x01e96c, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 2/7", 0x01e96c, 0x01e98c, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 3/7", 0x01e98c, 0x01e9ac, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 4/7", 0x01e9ac, 0x01e9cc, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 5/7", 0x01e9cc, 0x01e9ec, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 6/7", 0x01e9ec, 0x01ea0c, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 7/7", 0x01ea0c, 0x01ea2c, indexCPS2_Vamp_QBee, 0 },
    { L"KK Select Portrait", 0x2CE8C, 0x2CEAC, indexCPS2_Vamp_QBee, 0x20 },
    { L"KK Win Portrait", 0x327EC, 0x3288C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x100aC, 0x100cc, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"AP Wings/Honey", 0x100cC, 0x100ec, indexCPS2_Vamp_QBee, 1 },
    { L"AP Wings/Honey frame 2", 0x1ed6C, 0x1ed8c, indexCPS2_Vamp_QBee, 1 },
    { L"AP Bees", 0x1010C, 0x1012c },
    { L"AP Egg", 0x100eC, 0x1010c },
    { L"AP Intro/ES 412PP 1", 0x1cf8C, 0x1cfac, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 2", 0x1cfcC, 0x1cfec, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 3", 0x1d00C, 0x1d02c, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 4", 0x1d04C, 0x1d06c, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 5", 0x1d08C, 0x1d0ac, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 6", 0x1d0cC, 0x1d0ec, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 7", 0x1d10C, 0x1d12c, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 8", 0x1d14C, 0x1d16c, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 1/7", 0x01ea6c, 0x01ea8c, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 2/7", 0x01ea8c, 0x01eaac, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 3/7", 0x01eaac, 0x01eacc, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 4/7", 0x01eacc, 0x01eaec, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 5/7", 0x01eaec, 0x01eb0c, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 6/7", 0x01eb0c, 0x01eb2c, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 7/7", 0x01eb2c, 0x01eb4c, indexCPS2_Vamp_QBee, 0 },
    { L"AP Select Portrait", 0x2D08C, 0x2D0AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"AP Win Portrait", 0x3328C, 0x3332C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1012C, 0x1014c, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"AK Wings/Honey", 0x1014C, 0x1016c, indexCPS2_Vamp_QBee, 1 },
    { L"AK Wings/Honey frame 2", 0x1ed8C, 0x1edac, indexCPS2_Vamp_QBee, 1 },
    { L"AK Bees", 0x1018C, 0x101ac },
    { L"AK Egg", 0x1016C, 0x1018c },
    { L"AK Intro/ES 412PP 1", 0x1d18C, 0x1d1ac, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 2", 0x1d1cC, 0x1d1ec, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 3", 0x1d20C, 0x1d22c, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 4", 0x1d24C, 0x1d26c, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 5", 0x1d28C, 0x1d2ac, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 6", 0x1d2cC, 0x1d2ec, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 7", 0x1d30C, 0x1d32c, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 8", 0x1d34C, 0x1d36c, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 1/7", 0x01eb8c, 0x01ebac, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 2/7", 0x01ebac, 0x01ebcc, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 3/7", 0x01ebcc, 0x01ebec, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 4/7", 0x01ebec, 0x01ec0c, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 5/7", 0x01ec0c, 0x01ec2c, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 6/7", 0x01ec2c, 0x01ec4c, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 7/7", 0x01ec4c, 0x01ec6c, indexCPS2_Vamp_QBee, 0 },
    { L"AK Select Portrait", 0x2D28C, 0x2D2AC, indexCPS2_Vamp_QBee, 0x20 },
    { L"AK Win Portrait", 0x33D2C, 0x33DCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x101aC, 0x101cc, indexCPS2_Vamp_LeiLei, 0 },
    { L"LP Dust, Weapons", 0x101eC, 0x1020c, indexCPS2_Vamp_LeiLei, 0 },
    { L"LP Lin-Lin", 0x101cC, 0x101ec },
    { L"LP Unknown Extra", 0x1020C, 0x1022c },
    { L"LP Select Portrait", 0x2C0AC, 0x2C0CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LP Win Portrait", 0x2DE2C, 0x2DECC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1022C, 0x1024c, indexCPS2_Vamp_LeiLei, 0 },
    { L"MP Dust, Weapons", 0x1026C, 0x1028c, indexCPS2_Vamp_LeiLei, 0 },
    { L"MP Lin-Lin", 0x1024C, 0x1026c },
    { L"MP Unknown Extra", 0x1028C, 0x102ac },
    { L"MP Select Portrait", 0x2C2AC, 0x2C2CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MP Win Portrait", 0x2E8CC, 0x2E96C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x102aC, 0x102cc, indexCPS2_Vamp_LeiLei, 0 },
    { L"HP Dust, Weapons", 0x102eC, 0x1030c, indexCPS2_Vamp_LeiLei, 0 },
    { L"HP Lin-Lin", 0x102cC, 0x102ec },
    { L"HP Unknown Extra", 0x1030C, 0x1032c },
    { L"HP Select Portrait", 0x2C4AC, 0x2C4CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HP Win Portrait", 0x2F36C, 0x2F40C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1032C, 0x1034c, indexCPS2_Vamp_LeiLei, 0 },
    { L"LK Dust, Weapons", 0x1036C, 0x1038c, indexCPS2_Vamp_LeiLei, 0 },
    { L"LK Lin-Lin", 0x1034C, 0x1036c },
    { L"LK Unknown Extra", 0x1038C, 0x103ac },
    { L"LK Select Portrait", 0x2C6AC, 0x2C6CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LK Win Portrait", 0x2FE0C, 0x2FEAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x103aC, 0x103cc, indexCPS2_Vamp_LeiLei, 0 },
    { L"MK Dust, Weapons", 0x103eC, 0x1040c, indexCPS2_Vamp_LeiLei, 0 },
    { L"MK Lin-Lin", 0x103cC, 0x103ec },
    { L"MK Unknown Extra", 0x1040C, 0x1042c },
    { L"MK Select Portrait", 0x2C8AC, 0x2C8CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MK Win Portrait", 0x308AC, 0x3094C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1042C, 0x1044c, indexCPS2_Vamp_LeiLei, 0 },
    { L"HK Dust, Weapons", 0x1046C, 0x1048c, indexCPS2_Vamp_LeiLei, 0 },
    { L"HK Lin-Lin", 0x1044C, 0x1046c },
    { L"HK Unknown Extra", 0x1048C, 0x104ac },
    { L"HK Select Portrait", 0x2CAAC, 0x2CACC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HK Win Portrait", 0x3134C, 0x313EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x104aC, 0x104cc, indexCPS2_Vamp_LeiLei, 0 },
    { L"PP Dust, Weapons", 0x104eC, 0x1050c, indexCPS2_Vamp_LeiLei, 0 },
    { L"PP Lin-Lin", 0x104cC, 0x104ec },
    { L"PP Unknown Extra", 0x1050C, 0x1052c },
    { L"PP Select Portrait", 0x2CCAC, 0x2CCCC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"PP Win Portrait", 0x31DEC, 0x31E8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1052C, 0x1054c, indexCPS2_Vamp_LeiLei, 0 },
    { L"KK Dust, Weapons", 0x1056C, 0x1058c, indexCPS2_Vamp_LeiLei, 0 },
    { L"KK Lin-Lin", 0x1054C, 0x1056c },
    { L"KK Unknown Extra", 0x1058C, 0x105ac },
    { L"KK Select Portrait", 0x2CEAC, 0x2CECC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"KK Win Portrait", 0x3288C, 0x3292C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x105aC, 0x105cc, indexCPS2_Vamp_LeiLei, 0 },
    { L"AP Dust, Weapons", 0x105eC, 0x1060c, indexCPS2_Vamp_LeiLei, 0 },
    { L"AP Lin-Lin", 0x105cC, 0x105ec },
    { L"AP Unknown Extra", 0x1060C, 0x1062c },
    { L"AP Select Portrait", 0x2D0AC, 0x2D0CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AP Win Portrait", 0x3332C, 0x333CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1062C, 0x1064c, indexCPS2_Vamp_LeiLei, 0 },
    { L"AK Dust, Weapons", 0x1066C, 0x1068c, indexCPS2_Vamp_LeiLei, 0 },
    { L"AK Lin-Lin", 0x1064C, 0x1066c },
    { L"AK Unknown Extra", 0x1068C, 0x106ac },
    { L"AK Select Portrait", 0x2D2AC, 0x2D2CC, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AK Win Portrait", 0x33DCC, 0x33E6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_SHARED[] =
{
    { L"Chuukada", 0x01f98c, 0x01f9ac },
    { L"Fast Chuukada", 0x01f9ac, 0x01f9cc },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x106aC, 0x106cc, indexCPS2_Vamp_Lilith, 0 },
    { L"LP Hearts", 0x106cC, 0x106ec },
    { L"LP Luminous Illusion/62KKK bats", 0x106eC, 0x1070c },
    { L"LP Sparkles", 0x1070C, 0x1072c },
    { L"LP Select Portrait", 0x2C0CC, 0x2C0EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LP Win Portrait", 0x2DECC, 0x2DF6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1072C, 0x1074c, indexCPS2_Vamp_Lilith, 0 },
    { L"MP Hearts", 0x1074C, 0x1076c },
    { L"MP Luminous Illusion/62KKK bats", 0x1076C, 0x1078c },
    { L"MP Sparkles", 0x1078C, 0x107ac },
    { L"MP Select Portrait", 0x2C2CC, 0x2C2EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MP Win Portrait", 0x2E96C, 0x2EA0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x107aC, 0x107cc, indexCPS2_Vamp_Lilith, 0 },
    { L"HP Hearts", 0x107cC, 0x107ec },
    { L"HP Luminous Illusion/62KKK bats", 0x107eC, 0x1080c },
    { L"HP Sparkles", 0x1080C, 0x1082c },
    { L"HP Select Portrait", 0x2C4CC, 0x2C4EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HP Win Portrait", 0x2F40C, 0x2F4AC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1082C, 0x1084c, indexCPS2_Vamp_Lilith, 0 },
    { L"LK Hearts", 0x1084C, 0x1086c },
    { L"LK Luminous Illusion/62KKK bats", 0x1086C, 0x1088c },
    { L"LK Sparkles", 0x1088C, 0x108ac },
    { L"LK Select Portrait", 0x2C6CC, 0x2C6EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LK Win Portrait", 0x2FEAC, 0x2FF4C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x108aC, 0x108cc, indexCPS2_Vamp_Lilith, 0 },
    { L"MK Hearts", 0x108cC, 0x108ec },
    { L"MK Luminous Illusion/62KKK bats", 0x108eC, 0x1090c },
    { L"MK Sparkles", 0x1090C, 0x1092c },
    { L"MK Select Portrait", 0x2C8CC, 0x2C8EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MK Win Portrait", 0x3094C, 0x309EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1092C, 0x1094c, indexCPS2_Vamp_Lilith, 0 },
    { L"HK Hearts", 0x1094C, 0x1096c },
    { L"HK Luminous Illusion/62KKK bats", 0x1096C, 0x1098c },
    { L"HK Sparkles", 0x1098C, 0x109ac },
    { L"HK Select Portrait", 0x2CACC, 0x2CAEC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HK Win Portrait", 0x313EC, 0x3148C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x109aC, 0x109cc, indexCPS2_Vamp_Lilith, 0 },
    { L"PP Hearts", 0x109cC, 0x109ec },
    { L"PP Luminous Illusion/62KKK bats", 0x109eC, 0x10a0c },
    { L"PP Sparkles", 0x10a0C, 0x10a2c },
    { L"PP Select Portrait", 0x2CCCC, 0x2CCEC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"PP Win Portrait", 0x31E8C, 0x31F2C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x10a2C, 0x10a4c, indexCPS2_Vamp_Lilith, 0 },
    { L"KK Hearts", 0x10a4C, 0x10a6c },
    { L"KK Luminous Illusion/62KKK bats", 0x10a6C, 0x10a8c },
    { L"KK Sparkles", 0x10a8C, 0x10aac },
    { L"KK Select Portrait", 0x2CECC, 0x2CEEC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"KK Win Portrait", 0x3292C, 0x329CC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x10aaC, 0x10acc, indexCPS2_Vamp_Lilith, 0 },
    { L"AP Hearts", 0x10acC, 0x10aec },
    { L"AP Luminous Illusion/62KKK bats", 0x10aeC, 0x10b0c },
    { L"AP Sparkles", 0x10b0C, 0x10b2c },
    { L"AP Select Portrait", 0x2D0CC, 0x2D0EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AP Win Portrait", 0x333CC, 0x3346C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x10b2C, 0x10b4c, indexCPS2_Vamp_Lilith, 0 },
    { L"AK Hearts", 0x10b4C, 0x10b6c },
    { L"AK Luminous Illusion/62KKK bats", 0x10b6C, 0x10b8c },
    { L"AK Sparkles", 0x10b8C, 0x10bac },
    { L"AK Select Portrait", 0x2D2CC, 0x2D2EC, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AK Win Portrait", 0x33E6C, 0x33F0C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_SHARED[] =
{
    { L"Taunt", 0x01f9cc, 0x01f9ec },
    { L"Text & Sign", 0x01fa0c, 0x01fa2c },
    { L"Curtains", 0x01fa2c, 0x01fa4c },
    { L"Stage 1/4", 0x01f9ec, 0x01fa0c },
    { L"Stage 2/4", 0x01fa4c, 0x01fa6c },
    { L"Stage 3/4", 0x01fa6c, 0x01fa8c },
    { L"Stage 4/4", 0x01fa8c, 0x01faac },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x10baC, 0x10bcc, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"LP Prova di Servo", 0x10bcC, 0x10bec, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x10beC, 0x10c0c, indexCPS2_Vamp_Jedah, 1 },
    { L"LP Intro", 0x10c0C, 0x10c2c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LP Select Portrait", 0x2C0EC, 0x2C10C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LP Win Portrait", 0x2DF6C, 0x2E00C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x10c2C, 0x10c4c, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"MP Prova di Servo", 0x10c4C, 0x10c6c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x10c6C, 0x10c8c, indexCPS2_Vamp_Jedah, 1 },
    { L"MP Intro", 0x10c8C, 0x10cac, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MP Select Portrait", 0x2C2EC, 0x2C30C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MP Win Portrait", 0x2EA0C, 0x2EAAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x10caC, 0x10ccc, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"HP Prova di Servo", 0x10ccC, 0x10cec, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x10ceC, 0x10d0c, indexCPS2_Vamp_Jedah, 1 },
    { L"HP Intro", 0x10d0C, 0x10d2c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HP Select Portrait", 0x2C4EC, 0x2C50C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HP Win Portrait", 0x2F4AC, 0x2F54C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LK[] =
{
    { L"LK Jedah", 0x10d2C, 0x10d4c, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"LK Prova di Servo", 0x10d4C, 0x10d6c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x10d6C, 0x10d8c, indexCPS2_Vamp_Jedah, 1 },
    { L"LK Intro", 0x10d8C, 0x10dac, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LK Select Portrait", 0x2C6EC, 0x2C70C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LK Win Portrait", 0x2FF4C, 0x2FFEC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x10daC, 0x10dcc, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"MK Prova di Servo", 0x10dcC, 0x10dec, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x10deC, 0x10e0c, indexCPS2_Vamp_Jedah, 1 },
    { L"MK Intro", 0x10e0C, 0x10e2c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MK Select Portrait", 0x2C8EC, 0x2C90C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MK Win Portrait", 0x309EC, 0x30A8C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x10e2C, 0x10e4c, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"HK Prova di Servo", 0x10e4C, 0x10e6c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x10e6C, 0x10e8c, indexCPS2_Vamp_Jedah, 1 },
    { L"HK Intro", 0x10e8C, 0x10eac, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HK Select Portrait", 0x2CAEC, 0x2CB0C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HK Win Portrait", 0x3148C, 0x3152C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x10eaC, 0x10ecc, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"PP Prova di Servo", 0x10ecC, 0x10eec, indexCPS2_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x10eeC, 0x10f0c, indexCPS2_Vamp_Jedah, 1 },
    { L"PP Intro", 0x10f0C, 0x10f2c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"PP Select Portrait", 0x2CCEC, 0x2CD0C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"PP Win Portrait", 0x31F2C, 0x31FCC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x10f2C, 0x10f4c, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"KK Prova di Servo", 0x10f4C, 0x10f6c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x10f6C, 0x10f8c, indexCPS2_Vamp_Jedah, 1 },
    { L"KK Intro", 0x10f8C, 0x10fac, indexCPS2_Vamp_Jedah, 0x02 },
    { L"KK Select Portrait", 0x2CEEC, 0x2CF0C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"KK Win Portrait", 0x329CC, 0x32A6C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x10faC, 0x10fcc, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"AP Prova di Servo", 0x10fcC, 0x10fec, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x10feC, 0x1100c, indexCPS2_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1100C, 0x1102c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AP Select Portrait", 0x2D0EC, 0x2D10C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AP Win Portrait", 0x3346C, 0x3350C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1102C, 0x1104c, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"AK Prova di Servo", 0x1104C, 0x1106c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1106C, 0x1108c, indexCPS2_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1108C, 0x110ac, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AK Select Portrait", 0x2D2EC, 0x2D30C, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AK Win Portrait", 0x33F0C, 0x33FAC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SHARED[] =
{
    { L"Shared blood", 0x1faeC, 0x1fb0c, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared blood 2", 0x1fb0C, 0x1fb2c, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared Prova di Servo", 0x1fb2C, 0x1fb4c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"Shared Prova di Servo 2", 0x1fb4C, 0x1fb6c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"Shared Finale Rosso", 0x01fb6c, 0x01fb8c, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_DEFAULT[] =
{
    { L"Dark Gallon (1/6)", 0x110aC, 0x110cc, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (2/6)", 0x1fb8C, 0x1fbac, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (3/6)", 0x1fbaC, 0x1fbcc, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (4/6)", 0x1fbcC, 0x1fbec, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (5/6)", 0x1fbeC, 0x1fc0c, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (6/6)", 0x1fc0C, 0x1fc2c, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Intro/Outro", 0x110cC, 0x110ec },
    { L"236P/41236KK/j.HP", 0x110eC, 0x1110c },
    { L"236P/28K/Outro Flash", 0x1110C, 0x1112c },
    { L"Dark Gallon Select", 0x2d5CC, 0x2d5EC, indexCPS2_Vamp_Gallon, 0x20 },
    { L"Dark Gallon Win Portrait", 0x3404C, 0x340EC, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_ALT[] =
{
    { L"Dark Gallon Alt Palette (1/6)", 0x1112C, 0x1114c, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (2/6)", 0x1fc2C, 0x1fc4c, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (3/6)", 0x1fc4C, 0x1fc6c, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (4/6)", 0x1fc6C, 0x1fc8c, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (5/6)", 0x1fc8C, 0x1fcac, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (6/6)", 0x1fcaC, 0x1fccc, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Intro/Outro", 0x1114C, 0x1116c },
    { L"236P/41236KK/j.HP", 0x1116C, 0x1118c },
    { L"236P/28K/Outro Flash", 0x1118C, 0x111ac },
    { L"Dark Gallon Alt Palette Select", 0x2d5EC, 0x2d60C, indexCPS2_Vamp_Gallon, 0x20 },
    { L"Dark Gallon Alt Palette Win Portrait", 0x340EC, 0x3418C, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon", 0x115ac, 0x115cc, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Intro", 0x115cc, 0x115ec, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Ghosts/Hitsparks", 0x115ec, 0x1160c },
    { L"LP Unknown Extra", 0x1160c, 0x1162c },
    { L"LP Select Portrait", 0x2d50c, 0x2d52c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x3418c, 0x3422c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon", 0x1162c, 0x1164c, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Intro", 0x1164c, 0x1166c, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Ghosts/Hitsparks", 0x1166c, 0x1168c },
    { L"MP Unknown Extra", 0x1168c, 0x116ac },
    { L"MP Select Portrait", 0x2d52c, 0x2d54c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x3422c, 0x342cc, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon", 0x116ac, 0x116cc, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Intro", 0x116cc, 0x116ec, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Ghosts/Hitsparks", 0x116ec, 0x1170c },
    { L"HP Unknown Extra", 0x1170c, 0x1172c },
    { L"HP Select Portrait", 0x2d54c, 0x2d56c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x342cc, 0x3436c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon", 0x1172c, 0x1174c, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Intro", 0x1174c, 0x1176c, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Ghosts/Hitsparks", 0x1176c, 0x1178c },
    { L"LK Unknown Extra", 0x1178c, 0x117ac },
    { L"LK Select Portrait", 0x2d56c, 0x2d58c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x3436c, 0x3440c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon", 0x117ac, 0x117cc, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Intro", 0x117cc, 0x117ec, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Ghosts/Hitsparks", 0x117ec, 0x1180c },
    { L"MK Unknown Extra", 0x1180c, 0x1182c },
    { L"MK Select Portrait", 0x2d58c, 0x2d5ac, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x3440c, 0x344ac, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon", 0x1182c, 0x1184c, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Intro", 0x1184c, 0x1186c, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Ghosts/Hitsparks", 0x1186c, 0x1188c },
    { L"HK Unknown Extra", 0x1188c, 0x118ac },
    { L"HK Select Portrait", 0x2d5ac, 0x2d5cc, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x344ac, 0x3454c, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon", 0x118ac, 0x118cc, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Intro", 0x118cc, 0x118ec, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Ghosts/Hitsparks", 0x118ec, 0x1190c },
    { L"PP Unknown Extra", 0x1190c, 0x1192c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon", 0x1192c, 0x1194c, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Intro", 0x1194c, 0x1196c, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Ghosts/Hitsparks", 0x1196c, 0x1198c },
    { L"KK Unknown Extra", 0x1198c, 0x119ac },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon", 0x119ac, 0x119cc, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Intro", 0x119cc, 0x119ec, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Ghosts/Hitsparks", 0x119ec, 0x11a0c },
    { L"AP Unknown Extra", 0x11a0c, 0x11a2c },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon", 0x11a2c, 0x11a4c, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Intro", 0x11a4c, 0x11a6c, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Ghosts/Hitsparks", 0x11a6c, 0x11a8c },
    { L"AK Unknown Extra", 0x11a8c, 0x11aac },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_LP[] =
{
    { L"LP Anita ", 0x02ba0c, 0x02ba2c, indexCPS2_Anita, 0 },
    { L"LP Weapons", 0x02ba2c, 0x02ba4c, indexCPS2_Anita, 1 },
    { L"LP Sword", 0x02ba4c, 0x02ba6c, indexCPS2_Anita, 1 },
    //{ L"LP Unused", 0x02ba6c, 0x02ba8c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_MP[] =
{
    { L"MP Anita ", 0x02ba8c, 0x02baac, indexCPS2_Anita, 0 },
    { L"MP Weapons", 0x02baac, 0x02bacc, indexCPS2_Anita, 1 },
    { L"MP Sword", 0x02bacc, 0x02baec, indexCPS2_Anita, 1 },
    //{ L"MP Unused", 0x02baec, 0x02bb0c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_HP[] =
{
    { L"HP Anita ", 0x02bb0c, 0x02bb2c, indexCPS2_Anita },
    { L"HP Weapons", 0x02bb2c, 0x02bb4c, indexCPS2_Anita, 1 },
    { L"HP Sword", 0x02bb4c, 0x02bb6c, indexCPS2_Anita, 1 },
    //{ L"HP Unused", 0x02bb6c, 0x02bb8c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_LK[] =
{
    { L"LK Anita ", 0x02bb8c, 0x02bbac, indexCPS2_Anita },
    { L"LK Weapons", 0x02bbac, 0x02bbcc, indexCPS2_Anita, 1 },
    { L"LK Sword", 0x02bbcc, 0x02bbec, indexCPS2_Anita, 1 },
    // { L"LK Unused", 0x02bbec, 0x02bc0c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_MK[] =
{
    { L"MK Anita ", 0x02bc0c, 0x02bc2c, indexCPS2_Anita },
    { L"MK Weapons", 0x02bc2c, 0x02bc4c, indexCPS2_Anita, 1 },
    { L"MK Sword", 0x02bc4c, 0x02bc6c, indexCPS2_Anita, 1 },
    // { L"MK Unused", 0x02bc6c, 0x02bc8c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_HK[] =
{
    { L"HK Anita ", 0x02bc8c, 0x02bcac, indexCPS2_Anita },
    { L"HK Weapons", 0x02bcac, 0x02bccc, indexCPS2_Anita, 1 },
    { L"HK Sword", 0x02bccc, 0x02bcec, indexCPS2_Anita, 1 },
    // { L"HK Unused", 0x02bcec, 0x02bd0c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_PP[] =
{
    { L"PP Anita ", 0x02bd0c, 0x02bd2c, indexCPS2_Anita },
    { L"PP Weapons", 0x02bd2c, 0x02bd4c, indexCPS2_Anita, 1 },
    { L"PP Sword", 0x02bd4c, 0x02bd6c, indexCPS2_Anita, 1 },
    // { L"PP Unused", 0x02bd6c, 0x02bd8c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_KK[] =
{
    { L"KK Anita ", 0x02bd8c, 0x02bdac, indexCPS2_Anita },
    { L"KK Weapons", 0x02bdac, 0x02bdcc, indexCPS2_Anita, 1 },
    { L"KK Sword", 0x02bdcc, 0x02bdec, indexCPS2_Anita, 1 },
    // { L"KK Unused", 0x02bdec, 0x02be0c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_AP[] =
{
    { L"AP Anita ", 0x02be0c, 0x02be2c, indexCPS2_Anita },
    { L"AP Weapons", 0x02be2c, 0x02be4c, indexCPS2_Anita, 1 },
    { L"AP Sword", 0x02be4c, 0x02be6c, indexCPS2_Anita, 1 },
    // { L"AP Unused", 0x02be6c, 0x02be8c },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_AK[] =
{
    { L"AK Anita ", 0x02be8c, 0x02beac, indexCPS2_Anita },
    { L"AK Weapons", 0x02beac, 0x02becc, indexCPS2_Anita, 1 },
    { L"AK Sword", 0x02becc, 0x02beec, indexCPS2_Anita, 1 },
    // { L"AK Unused", 0x02beec, 0x02bf0c },
};

const sGame_PaletteDataset VSAV_A_HUD_PALETTES[] =
{
    { L"Lifebar and super meter", 0x1A6EC, 0x1A70C },
    { L"Life bar blending 1", 0x293FC, 0x2941C },
    { L"Life bar blending 2", 0x2941C, 0x2943C },
    { L"Life bar blending 3", 0x2943C, 0x2945C },
    { L"Life bar blending 4", 0x2945C, 0x2947C },
    { L"Life bar blending 5", 0x2947C, 0x2949C },
    { L"Fire", 0x1a74c, 0x1a76c, indexCPS2_VSAV1_Bonus, 0x00 },
    { L"Fire Glow 1", 0x29c4c, 0x29c6c, indexCPS2_VSAV1_Bonus, 0x00 },
    { L"Fire Glow 2", 0x29c6c, 0x29c8c, indexCPS2_VSAV1_Bonus, 0x00 },
    { L"Round Bats / Meter Numbers", 0x1a76c, 0x1a78c },
    //{ L"Combo Number/Win Counter/Combo Text", 0x1A70C, 0x1A72C },
    //{ L"Flash Combo Counter/Timer/Fight Logo", 0x1A72C, 0x1A74C }, 
};

const sGame_PaletteDataset VSAV_A_HUD_P1_PALETTES[] =
{
    { L"Combo Number/Wincounter/Combo Text", 0x1A70c, 0x1A72c },
    { L"Level 0 Frame 2", 0x29c8c, 0x29cac },
    { L"Level 0 Frame 3", 0x29cac, 0x29ccc },
    { L"Level 0 Frame 4", 0x29ccc, 0x29cec },
    { L"Level 0 Frame 5", 0x29cec, 0x29d0c },
    { L"Level 0 Frame 6", 0x29d0c, 0x29d2c },
    { L"Level 0 Frame 7", 0x29d2c, 0x29d4c },
    { L"Level 1 Frame 1", 0x29d4c, 0x29d6c },
    { L"Level 1 Frame 2", 0x29d6c, 0x29d8c },
    { L"Level 1 Frame 3", 0x29d8c, 0x29dac },
    { L"Level 1 Frame 4", 0x29dac, 0x29dcc },
    { L"Level 1 Frame 5", 0x29dcc, 0x29dec },
    { L"Level 1 Frame 6", 0x29dec, 0x29e0c },
    { L"Level 1 Frame 7", 0x29e0c, 0x29e2c },
    { L"Level 1 Frame 8", 0x29e2c, 0x29e4c },
    { L"Level 2 Frame 1", 0x29e4c, 0x29e6c },
    { L"Level 2 Frame 2", 0x29e6c, 0x29e8c },
    { L"Level 2 Frame 3", 0x29e8c, 0x29eac },
    { L"Level 2 Frame 4", 0x29eac, 0x29ecc },
    { L"Level 2 Frame 5", 0x29ecc, 0x29eec },
    { L"Level 2 Frame 6", 0x29eec, 0x29f0c },
    { L"Level 2 Frame 7", 0x29f0c, 0x29f2c },
    { L"Level 2 Frame 8", 0x29f2c, 0x29f4c },
    { L"Level 3 Frame 1", 0x29f4c, 0x29f6c },
    { L"Level 3 Frame 2", 0x29f6c, 0x29f8c },
    { L"Level 3 Frame 3", 0x29f8c, 0x29fac },
    { L"Level 3 Frame 4", 0x29fac, 0x29fcc },
    { L"Level 3 Frame 5", 0x29fcc, 0x29fec },
    { L"Level 3 Frame 6", 0x29fec, 0x2a00c },
    { L"Level 3 Frame 7", 0x2a00c, 0x2a02c },
    { L"Level 3 Frame 8", 0x2a02c, 0x2a04c },
    { L"Level 4 Frame 1", 0x2a04c, 0x2a06c },
    { L"Level 4 Frame 2", 0x2a06c, 0x2a08c },
    { L"Level 4 Frame 3", 0x2a08c, 0x2a0ac },
    { L"Level 4 Frame 4", 0x2a0ac, 0x2a0cc },
    { L"Level 4 Frame 5", 0x2a0cc, 0x2a0ec },
    { L"Level 4 Frame 6", 0x2a0ec, 0x2a10c },
    { L"Level 4 Frame 7", 0x2a10c, 0x2a12c },
    { L"Level 4 Frame 8", 0x2a12c, 0x2a14c },
    { L"Level 5 Frame 1", 0x2a14c, 0x2a16c },
    { L"Level 5 Frame 2", 0x2a16c, 0x2a18c },
    { L"Level 5 Frame 3", 0x2a18c, 0x2a1ac },
    { L"Level 5 Frame 4", 0x2a1ac, 0x2a1cc },
    { L"Level 5 Frame 5", 0x2a1cc, 0x2a1ec },
    { L"Level 5 Frame 6", 0x2a1ec, 0x2a20c },
    { L"Level 5 Frame 7", 0x2a20c, 0x2a22c },
    { L"Level 5 Frame 8", 0x2a22c, 0x2a24c },
    { L"Level 6 Frame 1", 0x2a24c, 0x2a26c },
    { L"Level 6 Frame 2", 0x2a26c, 0x2a28c },
    { L"Level 6 Frame 3", 0x2a28c, 0x2a2ac },
    { L"Level 6 Frame 4", 0x2a2ac, 0x2a2cc },
    { L"Level 6 Frame 5", 0x2a2cc, 0x2a2ec },
    { L"Level 6 Frame 6", 0x2a2ec, 0x2a30c },
    { L"Level 6 Frame 7", 0x2a30c, 0x2a32c },
    { L"Level 6 Frame 8", 0x2a32c, 0x2a34c },
    { L"Level 7 Frame 1", 0x2a34c, 0x2a36c },
    { L"Level 7 Frame 2", 0x2a36c, 0x2a38c },
    { L"Level 7 Frame 3", 0x2a38c, 0x2a3ac },
    { L"Level 7 Frame 4", 0x2a3ac, 0x2a3cc },
    { L"Level 7 Frame 5", 0x2a3cc, 0x2a3ec },
    { L"Level 7 Frame 6", 0x2a3ec, 0x2a40c },
    { L"Level 7 Frame 7", 0x2a40c, 0x2a42c },
    { L"Level 7 Frame 8", 0x2a42c, 0x2a44c },
    { L"Level 8 Frame 1", 0x2a44c, 0x2a46c },
    { L"Level 8 Frame 2", 0x2a46c, 0x2a48c },
    { L"Level 8 Frame 3", 0x2a48c, 0x2a4ac },
    { L"Level 8 Frame 4", 0x2a4ac, 0x2a4cc },
    { L"Level 8 Frame 5", 0x2a4cc, 0x2a4ec },
    { L"Level 8 Frame 6", 0x2a4ec, 0x2a50c },
    { L"Level 8 Frame 7", 0x2a50c, 0x2a52c },
    { L"Level 8 Frame 8", 0x2a52c, 0x2a54c },
    { L"Level 9+ Frame 1", 0x2a54c, 0x2a56c },
    { L"Level 9+ Frame 2", 0x2a56c, 0x2a58c },
    { L"Level 9+ Frame 3", 0x2a58c, 0x2a5ac },
    { L"Level 9+ Frame 4", 0x2a5ac, 0x2a5cc },
    { L"Level 9+ Frame 5", 0x2a5cc, 0x2a5ec },
    { L"Level 9+ Frame 6", 0x2a5ec, 0x2a60c },
    { L"Level 9+ Frame 7", 0x2a60c, 0x2a62c },
    { L"Level 9+ Frame 8", 0x2a62c, 0x2a64c },
};

const sGame_PaletteDataset VSAV_A_HUD_P2_PALETTES[] =
{
    { L"Flash Combo Counter/Timer/Fight Logo", 0x1A72c, 0x1A74c },
    { L"Level 0 Frame 2", 0x28a2c, 0x28a4c },
    { L"Level 0 Frame 3", 0x28a4c, 0x28a6c },
    { L"Level 0 Frame 4", 0x28a6c, 0x28a8c },
    { L"Level 0 Frame 5", 0x28a8c, 0x28aac },
    { L"Level 0 Frame 6", 0x28aac, 0x28acc },
    { L"Level 0 Frame 7", 0x28acc, 0x28aec },
    { L"Level 1 Frame 1", 0x28aec, 0x28b0c },
    { L"Level 1 Frame 2", 0x28b0c, 0x28b2c },
    { L"Level 1 Frame 3", 0x28b2c, 0x28b4c },
    { L"Level 1 Frame 4", 0x28b4c, 0x28b6c },
    { L"Level 1 Frame 5", 0x28b6c, 0x28b8c },
    { L"Level 1 Frame 6", 0x28b8c, 0x28bac },
    { L"Level 1 Frame 7", 0x28bac, 0x28bcc },
    { L"Level 1 Frame 8", 0x28bcc, 0x28bec },
    { L"Level 2 Frame 1", 0x28bec, 0x28c0c },
    { L"Level 2 Frame 2", 0x28c0c, 0x28c2c },
    { L"Level 2 Frame 3", 0x28c2c, 0x28c4c },
    { L"Level 2 Frame 4", 0x28c4c, 0x28c6c },
    { L"Level 2 Frame 5", 0x28c6c, 0x28c8c },
    { L"Level 2 Frame 6", 0x28c8c, 0x28cac },
    { L"Level 2 Frame 7", 0x28cac, 0x28ccc },
    { L"Level 2 Frame 8", 0x28ccc, 0x28cec },
    { L"Level 3 Frame 1", 0x28cec, 0x28d0c },
    { L"Level 3 Frame 2", 0x28d0c, 0x28d2c },
    { L"Level 3 Frame 3", 0x28d2c, 0x28d4c },
    { L"Level 3 Frame 4", 0x28d4c, 0x28d6c },
    { L"Level 3 Frame 5", 0x28d6c, 0x28d8c },
    { L"Level 3 Frame 6", 0x28d8c, 0x28dac },
    { L"Level 3 Frame 7", 0x28dac, 0x28dcc },
    { L"Level 3 Frame 8", 0x28dcc, 0x28dec },
    { L"Level 4 Frame 1", 0x28dec, 0x28e0c },
    { L"Level 4 Frame 2", 0x28e0c, 0x28e2c },
    { L"Level 4 Frame 3", 0x28e2c, 0x28e4c },
    { L"Level 4 Frame 4", 0x28e4c, 0x28e6c },
    { L"Level 4 Frame 5", 0x28e6c, 0x28e8c },
    { L"Level 4 Frame 6", 0x28e8c, 0x28eac },
    { L"Level 4 Frame 7", 0x28eac, 0x28ecc },
    { L"Level 4 Frame 8", 0x28ecc, 0x28eec },
    { L"Level 5 Frame 1", 0x28eec, 0x28f0c },
    { L"Level 5 Frame 2", 0x28f0c, 0x28f2c },
    { L"Level 5 Frame 3", 0x28f2c, 0x28f4c },
    { L"Level 5 Frame 4", 0x28f4c, 0x28f6c },
    { L"Level 5 Frame 5", 0x28f6c, 0x28f8c },
    { L"Level 5 Frame 6", 0x28f8c, 0x28fac },
    { L"Level 5 Frame 7", 0x28fac, 0x28fcc },
    { L"Level 5 Frame 8", 0x28fcc, 0x28fec },
    { L"Level 6 Frame 1", 0x28fec, 0x2900c },
    { L"Level 6 Frame 2", 0x2900c, 0x2902c },
    { L"Level 6 Frame 3", 0x2902c, 0x2904c },
    { L"Level 6 Frame 4", 0x2904c, 0x2906c },
    { L"Level 6 Frame 5", 0x2906c, 0x2908c },
    { L"Level 6 Frame 6", 0x2908c, 0x290ac },
    { L"Level 6 Frame 7", 0x290ac, 0x290cc },
    { L"Level 6 Frame 8", 0x290cc, 0x290ec },
    { L"Level 7 Frame 1", 0x290ec, 0x2910c },
    { L"Level 7 Frame 2", 0x2910c, 0x2912c },
    { L"Level 7 Frame 3", 0x2912c, 0x2914c },
    { L"Level 7 Frame 4", 0x2914c, 0x2916c },
    { L"Level 7 Frame 5", 0x2916c, 0x2918c },
    { L"Level 7 Frame 6", 0x2918c, 0x291ac },
    { L"Level 7 Frame 7", 0x291ac, 0x291cc },
    { L"Level 7 Frame 8", 0x291cc, 0x291ec },
    { L"Level 8 Frame 1", 0x291ec, 0x2920c },
    { L"Level 8 Frame 2", 0x2920c, 0x2922c },
    { L"Level 8 Frame 3", 0x2922c, 0x2924c },
    { L"Level 8 Frame 4", 0x2924c, 0x2926c },
    { L"Level 8 Frame 5", 0x2926c, 0x2928c },
    { L"Level 8 Frame 6", 0x2928c, 0x292ac },
    { L"Level 8 Frame 7", 0x292ac, 0x292cc },
    { L"Level 8 Frame 8", 0x292cc, 0x292ec },
    { L"Level 9+ Frame 1", 0x292ec, 0x2930c },
    { L"Level 9+ Frame 2", 0x2930c, 0x2932c },
    { L"Level 9+ Frame 3", 0x2932c, 0x2934c },
    { L"Level 9+ Frame 4", 0x2934c, 0x2936c },
    { L"Level 9+ Frame 5", 0x2936c, 0x2938c },
    { L"Level 9+ Frame 6", 0x2938c, 0x293ac },
    { L"Level 9+ Frame 7", 0x293ac, 0x293cc },
    { L"Level 9+ Frame 8", 0x293cc, 0x293ec },
};

const sGame_PaletteDataset VSAV_A_EFFECTS_PALETTES[] =
{
    { L"Special Hitsparks/Ice Effects/Guardsparks", 0x01a78c, 0x01a7ac },
    { L"Hitsparks/Fire Effects/Dash", 0x01a7ac, 0x01a7cc },
    { L"Dust Effects", 0x01a7cc, 0x01a7ec },
};

const sGame_PaletteDataset VSAV_A_SHADOW_PALETTES[] =
{
    { L"Shadow", 0x3584C, 0x3586C, indexCPS2_Vamp_Shadow, 0x0 },
};

const sGame_PaletteDataset VSAV_A_BONUS_TITLES_PALETTES[] =
{
    { L"Morrigan Intro Portrait",       0x2362c, 0x2368c, indexCPS2_VSAV1_Bonus, 0x06 },
    { L"Lilith Intro Portrait",         0x515bc, 0x5161c, indexCPS2_VSAV1_Bonus, 0x05 },
    { L"Demitri Intro",                 0x233cc, 0x2340c, indexCPS2_VSAV1_Bonus, 0x04 },
    { L"Bulleta Intro",                 0x234ac, 0x2354c, indexCPS2_VSAV1_Bonus, 0x03 },
    { L"Bulleta Intro Flash Palette",   0x2a94c, 0x2a9ec, indexCPS2_VSAV1_Bonus, 0x02 },
    { L"Bulleta Intro BG",              0x659a4, 0x659c4, indexCPS2_VSAV1_Bonus, 0x01 },

    { L"Character Select BG",           0x518fc, 0x51a5c, indexCPS2_VSAV1_Bonus, 0x09 },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_SPECIAL[] =
{
    { L"Bulleta LP Poisoned", 0x11ba0 - 0xf4, 0x11bc0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta MP Poisoned", 0x11bc0 - 0xf4, 0x11be0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta HP Poisoned", 0x11be0 - 0xf4, 0x11c00 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta LK Poisoned", 0x11c00 - 0xf4, 0x11c20 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta MK Poisoned", 0x11c20 - 0xf4, 0x11c40 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta HK Poisoned", 0x11c40 - 0xf4, 0x11c60 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta PP Poisoned", 0x11c60 - 0xf4, 0x11c80 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta KK Poisoned", 0x11c80 - 0xf4, 0x11ca0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta AP Poisoned", 0x11ca0 - 0xf4, 0x11cc0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta AK Poisoned", 0x11cc0 - 0xf4, 0x11ce0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta LP Zapped", 0x11ce0 - 0xf4, 0x11d00 - 0xf4 },
    { L"Bulleta MP Zapped", 0x11d00 - 0xf4, 0x11d20 - 0xf4 },
    { L"Bulleta HP Zapped", 0x11d20 - 0xf4, 0x11d40 - 0xf4 },
    { L"Bulleta LK Zapped", 0x11d40 - 0xf4, 0x11d60 - 0xf4 },
    { L"Bulleta MK Zapped", 0x11d60 - 0xf4, 0x11d80 - 0xf4 },
    { L"Bulleta HK Zapped", 0x11d80 - 0xf4, 0x11da0 - 0xf4 },
    { L"Bulleta PP Zapped", 0x11da0 - 0xf4, 0x11dc0 - 0xf4 },
    { L"Bulleta KK Zapped", 0x11dc0 - 0xf4, 0x11de0 - 0xf4 },
    { L"Bulleta AP Zapped", 0x11de0 - 0xf4, 0x11e00 - 0xf4 },
    { L"Bulleta AK Zapped", 0x11e00 - 0xf4, 0x11e20 - 0xf4 },
    { L"Bulleta LP Burned", 0x11e20 - 0xf4, 0x11e40 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta MP Burned", 0x11e40 - 0xf4, 0x11e60 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta HP Burned", 0x11e60 - 0xf4, 0x11e80 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta LK Burned", 0x11e80 - 0xf4, 0x11ea0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta MK Burned", 0x11ea0 - 0xf4, 0x11ec0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta HK Burned", 0x11ec0 - 0xf4, 0x11ee0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta PP Burned", 0x11ee0 - 0xf4, 0x11f00 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta KK Burned", 0x11f00 - 0xf4, 0x11f20 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta AP Burned", 0x11f20 - 0xf4, 0x11f40 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta AK Burned", 0x11f40 - 0xf4, 0x11f60 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta LP Pharaoh's Curse", 0x11f60 - 0xf4, 0x11f80 - 0xf4 },
    { L"Bulleta MP Pharaoh's Curse", 0x11f80 - 0xf4, 0x11fa0 - 0xf4 },
    { L"Bulleta HP Pharaoh's Curse", 0x11fa0 - 0xf4, 0x11fc0 - 0xf4 },
    { L"Bulleta LK Pharaoh's Curse", 0x11fc0 - 0xf4, 0x11fe0 - 0xf4 },
    { L"Bulleta MK Pharaoh's Curse", 0x11fe0 - 0xf4, 0x12000 - 0xf4 },
    { L"Bulleta HK Pharaoh's Curse", 0x12000 - 0xf4, 0x12020 - 0xf4 },
    { L"Bulleta PP Pharaoh's Curse", 0x12020 - 0xf4, 0x12040 - 0xf4 },
    { L"Bulleta KK Pharaoh's Curse", 0x12040 - 0xf4, 0x12060 - 0xf4 },
    { L"Bulleta AP Pharaoh's Curse", 0x12060 - 0xf4, 0x12080 - 0xf4 },
    { L"Bulleta AK Pharaoh's Curse", 0x12080 - 0xf4, 0x120a0 - 0xf4 },
    { L"Bulleta LP Midnight Bliss", 0x12280 - 0xf4, 0x122a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MP Midnight Bliss", 0x122a0 - 0xf4, 0x122c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HP Midnight Bliss", 0x122c0 - 0xf4, 0x122e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta LK Midnight Bliss", 0x122e0 - 0xf4, 0x12300 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MK Midnight Bliss", 0x12300 - 0xf4, 0x12320 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HK Midnight Bliss", 0x12320 - 0xf4, 0x12340 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta PP Midnight Bliss", 0x12340 - 0xf4, 0x12360 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta KK Midnight Bliss", 0x12360 - 0xf4, 0x12380 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AP Midnight Bliss", 0x12380 - 0xf4, 0x123a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AK Midnight Bliss", 0x123a0 - 0xf4, 0x123c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta ES 1", 0x120a0 - 0xf4, 0x120c0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta ES 2", 0x120c0 - 0xf4, 0x120e0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta ES 3", 0x120e0 - 0xf4, 0x12100 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta ES 4", 0x12100 - 0xf4, 0x12120 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 1", 0x12120 - 0xf4, 0x12140 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 2", 0x12140 - 0xf4, 0x12160 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 3", 0x12160 - 0xf4, 0x12180 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 4", 0x12180 - 0xf4, 0x121a0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 5", 0x121a0 - 0xf4, 0x121c0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 6", 0x121c0 - 0xf4, 0x121e0 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 7", 0x121e0 - 0xf4, 0x12200 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta EX 8", 0x12200 - 0xf4, 0x12220 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta Prova di Servo", 0x12220 - 0xf4, 0x12240 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta Finale Rosso", 0x12240 - 0xf4, 0x12260 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta Stone", 0x12260 - 0xf4, 0x12280 - 0xf4, indexCPS2_BBHood },
    { L"Bulleta Q-Bee's QJ Honey", 0x123c0 - 0xf4, 0x123e0 - 0xf4, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_SHARED[] =
{
    { L"Apple for You", 0x1a82c, 0x1a84c },
    { L"Man in suit", 0x1a84c, 0x1a86c, indexCPS2_BBHood, 0x09 },
    { L"Bottle", 0x1a86c, 0x1a88c, indexCPS2_BBHood, 0x07 },
    { L"LP Sentimental Typhoon 1", 0x1a88c, 0x1a8ac },
    { L"LP Sentimental Typhoon 2", 0x1a9cc, 0x1a9ec },
    { L"MP Sentimental Typhoon 1", 0x1a8ac, 0x1a8cc },
    { L"MP Sentimental Typhoon 2", 0x1a9ec, 0x1aa0c },
    { L"HP Sentimental Typhoon 1", 0x1a8cc, 0x1a8ec },
    { L"HP Sentimental Typhoon 2", 0x1aa0c, 0x1aa2c },
    { L"LK Sentimental Typhoon 1", 0x1a8ec, 0x1a90c },
    { L"LK Sentimental Typhoon 2", 0x1aa2c, 0x1aa4c },
    { L"MK Sentimental Typhoon 1", 0x1a90c, 0x1a92c },
    { L"MK Sentimental Typhoon 2", 0x1aa4c, 0x1aa6c },
    { L"HK Sentimental Typhoon 1", 0x1a92c, 0x1a94c },
    { L"HK Sentimental Typhoon 2", 0x1aa6c, 0x1aa8c },
    { L"3P Sentimental Typhoon 1", 0x1a94c, 0x1a96c },
    { L"3P Sentimental Typhoon 2", 0x1aa8c, 0x1aaac },
    { L"3K Sentimental Typhoon 1", 0x1a96c, 0x1a98c },
    { L"3K Sentimental Typhoon 2", 0x1aaac, 0x1aacc },
    { L"AP Sentimental Typhoon 1", 0x1a98c, 0x1a9ac },
    { L"AP Sentimental Typhoon 2", 0x1aacc, 0x1aaec },
    { L"AK Sentimental Typhoon 1", 0x1a9ac, 0x1a9cc },
    { L"AK Sentimental Typhoon 2", 0x1aaec, 0x1ab0c },
    { L"Water", 0x1ab0c, 0x1ab2c },
    { L"Water (unused?)", 0x1ab2c, 0x1ab4c },
    { L"Hunters", 0x1abac, 0x1abcc, indexCPS2_BBHood, 0x08 },

    { L"Bulleta P1 Dark Force 1", 0x1abcc, 0x1abec, indexCPS2_BBHood },
    { L"Bulleta P1 Dark Force 2", 0x1abec, 0x1ac0c, indexCPS2_BBHood },
    { L"Bulleta P1 Dark Force 3", 0x1ac0c, 0x1ac2c, indexCPS2_BBHood },
    { L"Bulleta P1 Dark Force 4", 0x1ac2c, 0x1ac4c, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 1", 0x1ac4c, 0x1ac6c, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 2", 0x1ac6c, 0x1ac8c, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 3", 0x1ac8c, 0x1acac, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 4", 0x1acac, 0x1accc, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01b08c, 0x01b0ac, indexCPS2_Vamp_Zabel },
    { L"P1 Dark Force 2/4", 0x01b0ac, 0x01b0cc, indexCPS2_Vamp_Zabel },
    { L"P1 Dark Force 3/4", 0x01b0cc, 0x01b0ec, indexCPS2_Vamp_Zabel },
    { L"P1 Dark Force 4/4", 0x01b0ec, 0x01b10c, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 1/4", 0X01b10c, 0x01b12c, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 2/4", 0x01b12c, 0x01b14c, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 3/4", 0x01b14c, 0x01b16c, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 4/4", 0x01b16c, 0x01b18c, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01b5ec, 0x01b60c, indexCPS2_Vamp_Bishamon },
    { L"P1 Dark Force 2/4", 0x01b60c, 0x01b62c, indexCPS2_Vamp_Bishamon },
    { L"P1 Dark Force 3/4", 0x01b62c, 0x01b64c, indexCPS2_Vamp_Bishamon },
    { L"P1 Dark Force 4/4", 0x01b64c, 0x01b66c, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 1/4", 0x01b66c, 0x01b68c, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 2/4", 0x01b68c, 0x01b6ac, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 3/4", 0x01b6ac, 0x01b6cc, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 4/4", 0x01b6cc, 0x01b6ec, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01bd4c, 0x01bd6c, indexCPS2_Vamp_Sasquatch },
    { L"P1 Dark Force 2/4", 0x01bd6c, 0x01bd8c, indexCPS2_Vamp_Sasquatch },
    { L"P1 Dark Force 3/4", 0x01bd8c, 0x01bdac, indexCPS2_Vamp_Sasquatch },
    { L"P1 Dark Force 4/4", 0x01bdac, 0x01bdcc, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 1/4", 0x01bdcc, 0x01bdec, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 2/4", 0x01bdec, 0x01be0c, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 3/4", 0x01be0c, 0x01be2c, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 4/4", 0x01be2c, 0x01be4c, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { L"Demitri LP Poisoned", 0x123e0 - 0xf4, 0x12400 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Poisoned", 0x12400 - 0xf4, 0x12420 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Poisoned", 0x12420 - 0xf4, 0x12440 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Poisoned", 0x12440 - 0xf4, 0x12460 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Poisoned", 0x12460 - 0xf4, 0x12480 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Poisoned", 0x12480 - 0xf4, 0x124a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Poisoned", 0x124a0 - 0xf4, 0x124c0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Poisoned", 0x124c0 - 0xf4, 0x124e0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Poisoned", 0x124e0 - 0xf4, 0x12500 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Poisoned", 0x12500 - 0xf4, 0x12520 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri LP Zapped", 0x12520 - 0xf4, 0x12540 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri MP Zapped", 0x12540 - 0xf4, 0x12560 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri HP Zapped", 0x12560 - 0xf4, 0x12580 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri LK Zapped", 0x12580 - 0xf4, 0x125a0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri MK Zapped", 0x125a0 - 0xf4, 0x125c0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri HK Zapped", 0x125c0 - 0xf4, 0x125e0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri PP Zapped", 0x125e0 - 0xf4, 0x12600 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri KK Zapped", 0x12600 - 0xf4, 0x12620 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri AP Zapped", 0x12620 - 0xf4, 0x12640 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri AK Zapped", 0x12640 - 0xf4, 0x12660 - 0xf4, indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri LP Burned", 0x12660 - 0xf4, 0x12680 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Burned", 0x12680 - 0xf4, 0x126a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Burned", 0x126a0 - 0xf4, 0x126c0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Burned", 0x126c0 - 0xf4, 0x126e0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Burned", 0x126e0 - 0xf4, 0x12700 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Burned", 0x12700 - 0xf4, 0x12720 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Burned", 0x12720 - 0xf4, 0x12740 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Burned", 0x12740 - 0xf4, 0x12760 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Burned", 0x12760 - 0xf4, 0x12780 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Burned", 0x12780 - 0xf4, 0x127a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri LP Pharaoh's Curse", 0x127a0 - 0xf4, 0x127c0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MP Pharaoh's Curse", 0x127c0 - 0xf4, 0x127e0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HP Pharaoh's Curse", 0x127e0 - 0xf4, 0x12800 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri LK Pharaoh's Curse", 0x12800 - 0xf4, 0x12820 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MK Pharaoh's Curse", 0x12820 - 0xf4, 0x12840 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HK Pharaoh's Curse", 0x12840 - 0xf4, 0x12860 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri PP Pharaoh's Curse", 0x12860 - 0xf4, 0x12880 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri KK Pharaoh's Curse", 0x12880 - 0xf4, 0x128a0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AP Pharaoh's Curse", 0x128a0 - 0xf4, 0x128c0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AK Pharaoh's Curse", 0x128c0 - 0xf4, 0x128e0 - 0xf4, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri LP Midnight Bliss", 0x12ac0 - 0xf4, 0x12ae0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Midnight Bliss", 0x12ae0 - 0xf4, 0x12b00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Midnight Bliss", 0x12b00 - 0xf4, 0x12b20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Midnight Bliss", 0x12b20 - 0xf4, 0x12b40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Midnight Bliss", 0x12b40 - 0xf4, 0x12b60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Midnight Bliss", 0x12b60 - 0xf4, 0x12b80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Midnight Bliss", 0x12b80 - 0xf4, 0x12ba0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Midnight Bliss", 0x12ba0 - 0xf4, 0x12bc0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Midnight Bliss", 0x12bc0 - 0xf4, 0x12be0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Midnight Bliss", 0x12be0 - 0xf4, 0x12c00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 1", 0x128e0 - 0xf4, 0x12900 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 2", 0x12900 - 0xf4, 0x12920 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 3", 0x12920 - 0xf4, 0x12940 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 4", 0x12940 - 0xf4, 0x12960 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 1", 0x12960 - 0xf4, 0x12980 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 2", 0x12980 - 0xf4, 0x129a0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 3", 0x129a0 - 0xf4, 0x129c0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 4", 0x129c0 - 0xf4, 0x129e0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 5", 0x129e0 - 0xf4, 0x12a00 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 6", 0x12a00 - 0xf4, 0x12a20 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 7", 0x12a20 - 0xf4, 0x12a40 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 8", 0x12a40 - 0xf4, 0x12a60 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri Prova di Servo", 0x12a60 - 0xf4, 0x12a80 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri Finale Rosso", 0x12a80 - 0xf4, 0x12aa0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri Stone", 0x12aa0 - 0xf4, 0x12ac0 - 0xf4, indexCPS2_Vamp_Demitri },
    { L"Demitri Q-Bee's QJ Honey", 0x12c00 - 0xf4, 0x12c20 - 0xf4, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_SPECIAL[] =
{
    { L"Gallon LP Poisoned", 0x12c20 - 0xf4, 0x12c40 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Poisoned", 0x12c40 - 0xf4, 0x12c60 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Poisoned", 0x12c60 - 0xf4, 0x12c80 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Poisoned", 0x12c80 - 0xf4, 0x12ca0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Poisoned", 0x12ca0 - 0xf4, 0x12cc0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Poisoned", 0x12cc0 - 0xf4, 0x12ce0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Poisoned", 0x12ce0 - 0xf4, 0x12d00 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Poisoned", 0x12d00 - 0xf4, 0x12d20 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Poisoned", 0x12d20 - 0xf4, 0x12d40 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Poisoned", 0x12d40 - 0xf4, 0x12d60 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon LP Zapped", 0x12d60 - 0xf4, 0x12d80 - 0xf4 },
    { L"Gallon MP Zapped", 0x12d80 - 0xf4, 0x12da0 - 0xf4 },
    { L"Gallon HP Zapped", 0x12da0 - 0xf4, 0x12dc0 - 0xf4 },
    { L"Gallon LK Zapped", 0x12dc0 - 0xf4, 0x12de0 - 0xf4 },
    { L"Gallon MK Zapped", 0x12de0 - 0xf4, 0x12e00 - 0xf4 },
    { L"Gallon HK Zapped", 0x12e00 - 0xf4, 0x12e20 - 0xf4 },
    { L"Gallon PP Zapped", 0x12e20 - 0xf4, 0x12e40 - 0xf4 },
    { L"Gallon KK Zapped", 0x12e40 - 0xf4, 0x12e60 - 0xf4 },
    { L"Gallon AP Zapped", 0x12e60 - 0xf4, 0x12e80 - 0xf4 },
    { L"Gallon AK Zapped", 0x12e80 - 0xf4, 0x12ea0 - 0xf4 },
    { L"Gallon LP Burned", 0x12ea0 - 0xf4, 0x12ec0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Burned", 0x12ec0 - 0xf4, 0x12ee0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Burned", 0x12ee0 - 0xf4, 0x12f00 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Burned", 0x12f00 - 0xf4, 0x12f20 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Burned", 0x12f20 - 0xf4, 0x12f40 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Burned", 0x12f40 - 0xf4, 0x12f60 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Burned", 0x12f60 - 0xf4, 0x12f80 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Burned", 0x12f80 - 0xf4, 0x12fa0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Burned", 0x12fa0 - 0xf4, 0x12fc0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Burned", 0x12fc0 - 0xf4, 0x12fe0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon LP Pharaoh's Curse", 0x12fe0 - 0xf4, 0x13000 - 0xf4 },
    { L"Gallon MP Pharaoh's Curse", 0x13000 - 0xf4, 0x13020 - 0xf4 },
    { L"Gallon HP Pharaoh's Curse", 0x13020 - 0xf4, 0x13040 - 0xf4 },
    { L"Gallon LK Pharaoh's Curse", 0x13040 - 0xf4, 0x13060 - 0xf4 },
    { L"Gallon MK Pharaoh's Curse", 0x13060 - 0xf4, 0x13080 - 0xf4 },
    { L"Gallon HK Pharaoh's Curse", 0x13080 - 0xf4, 0x130a0 - 0xf4 },
    { L"Gallon PP Pharaoh's Curse", 0x130a0 - 0xf4, 0x130c0 - 0xf4 },
    { L"Gallon KK Pharaoh's Curse", 0x130c0 - 0xf4, 0x130e0 - 0xf4 },
    { L"Gallon AP Pharaoh's Curse", 0x130e0 - 0xf4, 0x13100 - 0xf4 },
    { L"Gallon AK Pharaoh's Curse", 0x13100 - 0xf4, 0x13120 - 0xf4 },
    { L"Gallon LP Midnight Bliss", 0x13300 - 0xf4, 0x13320 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Midnight Bliss", 0x13320 - 0xf4, 0x13340 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Midnight Bliss", 0x13340 - 0xf4, 0x13360 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Midnight Bliss", 0x13360 - 0xf4, 0x13380 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Midnight Bliss", 0x13380 - 0xf4, 0x133a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Midnight Bliss", 0x133a0 - 0xf4, 0x133c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Midnight Bliss", 0x133c0 - 0xf4, 0x133e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Midnight Bliss", 0x133e0 - 0xf4, 0x13400 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Midnight Bliss", 0x13400 - 0xf4, 0x13420 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Midnight Bliss", 0x13420 - 0xf4, 0x13440 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 1", 0x13120 - 0xf4, 0x13140 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 2", 0x13140 - 0xf4, 0x13160 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 3", 0x13160 - 0xf4, 0x13180 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 4", 0x13180 - 0xf4, 0x131a0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 1", 0x131a0 - 0xf4, 0x131c0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 2", 0x131c0 - 0xf4, 0x131e0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 3", 0x131e0 - 0xf4, 0x13200 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 4", 0x13200 - 0xf4, 0x13220 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 5", 0x13220 - 0xf4, 0x13240 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 6", 0x13240 - 0xf4, 0x13260 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 7", 0x13260 - 0xf4, 0x13280 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 8", 0x13280 - 0xf4, 0x132a0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon Prova di Servo", 0x132a0 - 0xf4, 0x132c0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon Finale Rosso", 0x132c0 - 0xf4, 0x132e0 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon Stone", 0x132e0 - 0xf4, 0x13300 - 0xf4, indexCPS2_Vamp_Gallon },
    { L"Gallon Q-Bee's QJ Honey", 0x13440 - 0xf4, 0x13460 - 0xf4, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_SPECIAL[] =
{
    { L"Victor LP Poisoned", 0x13460 - 0xf4, 0x13480 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor MP Poisoned", 0x13480 - 0xf4, 0x134a0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor HP Poisoned", 0x134a0 - 0xf4, 0x134c0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor LK Poisoned", 0x134c0 - 0xf4, 0x134e0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor MK Poisoned", 0x134e0 - 0xf4, 0x13500 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor HK Poisoned", 0x13500 - 0xf4, 0x13520 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor PP Poisoned", 0x13520 - 0xf4, 0x13540 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor KK Poisoned", 0x13540 - 0xf4, 0x13560 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor AP Poisoned", 0x13560 - 0xf4, 0x13580 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor AK Poisoned", 0x13580 - 0xf4, 0x135a0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor LP Zapped", 0x135a0 - 0xf4, 0x135c0 - 0xf4 },
    { L"Victor MP Zapped", 0x135c0 - 0xf4, 0x135e0 - 0xf4 },
    { L"Victor HP Zapped", 0x135e0 - 0xf4, 0x13600 - 0xf4 },
    { L"Victor LK Zapped", 0x13600 - 0xf4, 0x13620 - 0xf4 },
    { L"Victor MK Zapped", 0x13620 - 0xf4, 0x13640 - 0xf4 },
    { L"Victor HK Zapped", 0x13640 - 0xf4, 0x13660 - 0xf4 },
    { L"Victor PP Zapped", 0x13660 - 0xf4, 0x13680 - 0xf4 },
    { L"Victor KK Zapped", 0x13680 - 0xf4, 0x136a0 - 0xf4 },
    { L"Victor AP Zapped", 0x136a0 - 0xf4, 0x136c0 - 0xf4 },
    { L"Victor AK Zapped", 0x136c0 - 0xf4, 0x136e0 - 0xf4 },
    { L"Victor LP Burned", 0x136e0 - 0xf4, 0x13700 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor MP Burned", 0x13700 - 0xf4, 0x13720 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor HP Burned", 0x13720 - 0xf4, 0x13740 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor LK Burned", 0x13740 - 0xf4, 0x13760 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor MK Burned", 0x13760 - 0xf4, 0x13780 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor HK Burned", 0x13780 - 0xf4, 0x137a0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor PP Burned", 0x137a0 - 0xf4, 0x137c0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor KK Burned", 0x137c0 - 0xf4, 0x137e0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor AP Burned", 0x137e0 - 0xf4, 0x13800 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor AK Burned", 0x13800 - 0xf4, 0x13820 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor LP Pharaoh's Curse", 0x13820 - 0xf4, 0x13840 - 0xf4 },
    { L"Victor MP Pharaoh's Curse", 0x13840 - 0xf4, 0x13860 - 0xf4 },
    { L"Victor HP Pharaoh's Curse", 0x13860 - 0xf4, 0x13880 - 0xf4 },
    { L"Victor LK Pharaoh's Curse", 0x13880 - 0xf4, 0x138a0 - 0xf4 },
    { L"Victor MK Pharaoh's Curse", 0x138a0 - 0xf4, 0x138c0 - 0xf4 },
    { L"Victor HK Pharaoh's Curse", 0x138c0 - 0xf4, 0x138e0 - 0xf4 },
    { L"Victor PP Pharaoh's Curse", 0x138e0 - 0xf4, 0x13900 - 0xf4 },
    { L"Victor KK Pharaoh's Curse", 0x13900 - 0xf4, 0x13920 - 0xf4 },
    { L"Victor AP Pharaoh's Curse", 0x13920 - 0xf4, 0x13940 - 0xf4 },
    { L"Victor AK Pharaoh's Curse", 0x13940 - 0xf4, 0x13960 - 0xf4 },
    { L"Victor LP Midnight Bliss", 0x13b40 - 0xf4, 0x13b60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MP Midnight Bliss", 0x13b60 - 0xf4, 0x13b80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HP Midnight Bliss", 0x13b80 - 0xf4, 0x13ba0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor LK Midnight Bliss", 0x13ba0 - 0xf4, 0x13bc0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MK Midnight Bliss", 0x13bc0 - 0xf4, 0x13be0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HK Midnight Bliss", 0x13be0 - 0xf4, 0x13c00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor PP Midnight Bliss", 0x13c00 - 0xf4, 0x13c20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor KK Midnight Bliss", 0x13c20 - 0xf4, 0x13c40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AP Midnight Bliss", 0x13c40 - 0xf4, 0x13c60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AK Midnight Bliss", 0x13c60 - 0xf4, 0x13c80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor ES 1", 0x13960 - 0xf4, 0x13980 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor ES 2", 0x13980 - 0xf4, 0x139a0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor ES 3", 0x139a0 - 0xf4, 0x139c0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor ES 4", 0x139c0 - 0xf4, 0x139e0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 1", 0x139e0 - 0xf4, 0x13a00 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 2", 0x13a00 - 0xf4, 0x13a20 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 3", 0x13a20 - 0xf4, 0x13a40 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 4", 0x13a40 - 0xf4, 0x13a60 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 5", 0x13a60 - 0xf4, 0x13a80 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 6", 0x13a80 - 0xf4, 0x13aa0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 7", 0x13aa0 - 0xf4, 0x13ac0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor EX 8", 0x13ac0 - 0xf4, 0x13ae0 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor Prova di Servo", 0x13ae0 - 0xf4, 0x13b00 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor Finale Rosso", 0x13b00 - 0xf4, 0x13b20 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor Stone", 0x13b20 - 0xf4, 0x13b40 - 0xf4, indexCPS2_Vamp_Victor },
    { L"Victor Q-Bee's QJ Honey", 0x13c80 - 0xf4, 0x13ca0 - 0xf4, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_SHARED[] =
{
    { L"Emily", 0x01af2c, 0x01af4c },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_SPECIAL[] =
{
    { L"Zabel LP Poisoned", 0x13ca0 - 0xf4, 0x13cc0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Poisoned", 0x13cc0 - 0xf4, 0x13ce0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Poisoned", 0x13ce0 - 0xf4, 0x13d00 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Poisoned", 0x13d00 - 0xf4, 0x13d20 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Poisoned", 0x13d20 - 0xf4, 0x13d40 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Poisoned", 0x13d40 - 0xf4, 0x13d60 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Poisoned", 0x13d60 - 0xf4, 0x13d80 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Poisoned", 0x13d80 - 0xf4, 0x13da0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Poisoned", 0x13da0 - 0xf4, 0x13dc0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Poisoned", 0x13dc0 - 0xf4, 0x13de0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel LP Zapped", 0x13de0 - 0xf4, 0x13e00 - 0xf4 },
    { L"Zabel MP Zapped", 0x13e00 - 0xf4, 0x13e20 - 0xf4 },
    { L"Zabel HP Zapped", 0x13e20 - 0xf4, 0x13e40 - 0xf4 },
    { L"Zabel LK Zapped", 0x13e40 - 0xf4, 0x13e60 - 0xf4 },
    { L"Zabel MK Zapped", 0x13e60 - 0xf4, 0x13e80 - 0xf4 },
    { L"Zabel HK Zapped", 0x13e80 - 0xf4, 0x13ea0 - 0xf4 },
    { L"Zabel PP Zapped", 0x13ea0 - 0xf4, 0x13ec0 - 0xf4 },
    { L"Zabel KK Zapped", 0x13ec0 - 0xf4, 0x13ee0 - 0xf4 },
    { L"Zabel AP Zapped", 0x13ee0 - 0xf4, 0x13f00 - 0xf4 },
    { L"Zabel AK Zapped", 0x13f00 - 0xf4, 0x13f20 - 0xf4 },
    { L"Zabel LP Burned", 0x13f20 - 0xf4, 0x13f40 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Burned", 0x13f40 - 0xf4, 0x13f60 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Burned", 0x13f60 - 0xf4, 0x13f80 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Burned", 0x13f80 - 0xf4, 0x13fa0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Burned", 0x13fa0 - 0xf4, 0x13fc0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Burned", 0x13fc0 - 0xf4, 0x13fe0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Burned", 0x13fe0 - 0xf4, 0x14000 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Burned", 0x14000 - 0xf4, 0x14020 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Burned", 0x14020 - 0xf4, 0x14040 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Burned", 0x14040 - 0xf4, 0x14060 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel LP Pharaoh's Curse", 0x14060 - 0xf4, 0x14080 - 0xf4 },
    { L"Zabel MP Pharaoh's Curse", 0x14080 - 0xf4, 0x140a0 - 0xf4 },
    { L"Zabel HP Pharaoh's Curse", 0x140a0 - 0xf4, 0x140c0 - 0xf4 },
    { L"Zabel LK Pharaoh's Curse", 0x140c0 - 0xf4, 0x140e0 - 0xf4 },
    { L"Zabel MK Pharaoh's Curse", 0x140e0 - 0xf4, 0x14100 - 0xf4 },
    { L"Zabel HK Pharaoh's Curse", 0x14100 - 0xf4, 0x14120 - 0xf4 },
    { L"Zabel PP Pharaoh's Curse", 0x14120 - 0xf4, 0x14140 - 0xf4 },
    { L"Zabel KK Pharaoh's Curse", 0x14140 - 0xf4, 0x14160 - 0xf4 },
    { L"Zabel AP Pharaoh's Curse", 0x14160 - 0xf4, 0x14180 - 0xf4 },
    { L"Zabel AK Pharaoh's Curse", 0x14180 - 0xf4, 0x141a0 - 0xf4 },
    { L"Zabel LP Midnight Bliss", 0x14380 - 0xf4, 0x143a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Midnight Bliss", 0x143a0 - 0xf4, 0x143c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Midnight Bliss", 0x143c0 - 0xf4, 0x143e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Midnight Bliss", 0x143e0 - 0xf4, 0x14400 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Midnight Bliss", 0x14400 - 0xf4, 0x14420 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Midnight Bliss", 0x14420 - 0xf4, 0x14440 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Midnight Bliss", 0x14440 - 0xf4, 0x14460 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Midnight Bliss", 0x14460 - 0xf4, 0x14480 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Midnight Bliss", 0x14480 - 0xf4, 0x144a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Midnight Bliss", 0x144a0 - 0xf4, 0x144c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 1", 0x141a0 - 0xf4, 0x141c0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 2", 0x141c0 - 0xf4, 0x141e0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 3", 0x141e0 - 0xf4, 0x14200 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 4", 0x14200 - 0xf4, 0x14220 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 1", 0x14220 - 0xf4, 0x14240 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 2", 0x14240 - 0xf4, 0x14260 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 3", 0x14260 - 0xf4, 0x14280 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 4", 0x14280 - 0xf4, 0x142a0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 5", 0x142a0 - 0xf4, 0x142c0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 6", 0x142c0 - 0xf4, 0x142e0 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 7", 0x142e0 - 0xf4, 0x14300 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 8", 0x14300 - 0xf4, 0x14320 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel Prova di Servo", 0x14320 - 0xf4, 0x14340 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel Finale Rosso", 0x14340 - 0xf4, 0x14360 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel Stone", 0x14360 - 0xf4, 0x14380 - 0xf4, indexCPS2_Vamp_Zabel },
    { L"Zabel Q-Bee's QJ Honey", 0x144c0 - 0xf4, 0x144e0 - 0xf4, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_SPECIAL[] =
{
    { L"Morrigan LP Poisoned", 0x144e0 - 0xf4, 0x14500 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MP Poisoned", 0x14500 - 0xf4, 0x14520 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HP Poisoned", 0x14520 - 0xf4, 0x14540 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LK Poisoned", 0x14540 - 0xf4, 0x14560 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MK Poisoned", 0x14560 - 0xf4, 0x14580 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HK Poisoned", 0x14580 - 0xf4, 0x145a0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan PP Poisoned", 0x145a0 - 0xf4, 0x145c0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan KK Poisoned", 0x145c0 - 0xf4, 0x145e0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AP Poisoned", 0x145e0 - 0xf4, 0x14600 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AK Poisoned", 0x14600 - 0xf4, 0x14620 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LP Zapped", 0x14620 - 0xf4, 0x14640 - 0xf4 },
    { L"Morrigan MP Zapped", 0x14640 - 0xf4, 0x14660 - 0xf4 },
    { L"Morrigan HP Zapped", 0x14660 - 0xf4, 0x14680 - 0xf4 },
    { L"Morrigan LK Zapped", 0x14680 - 0xf4, 0x146a0 - 0xf4 },
    { L"Morrigan MK Zapped", 0x146a0 - 0xf4, 0x146c0 - 0xf4 },
    { L"Morrigan HK Zapped", 0x146c0 - 0xf4, 0x146e0 - 0xf4 },
    { L"Morrigan PP Zapped", 0x146e0 - 0xf4, 0x14700 - 0xf4 },
    { L"Morrigan KK Zapped", 0x14700 - 0xf4, 0x14720 - 0xf4 },
    { L"Morrigan AP Zapped", 0x14720 - 0xf4, 0x14740 - 0xf4 },
    { L"Morrigan AK Zapped", 0x14740 - 0xf4, 0x14760 - 0xf4 },
    { L"Morrigan LP Burned", 0x14760 - 0xf4, 0x14780 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MP Burned", 0x14780 - 0xf4, 0x147a0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HP Burned", 0x147a0 - 0xf4, 0x147c0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LK Burned", 0x147c0 - 0xf4, 0x147e0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MK Burned", 0x147e0 - 0xf4, 0x14800 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HK Burned", 0x14800 - 0xf4, 0x14820 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan PP Burned", 0x14820 - 0xf4, 0x14840 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan KK Burned", 0x14840 - 0xf4, 0x14860 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AP Burned", 0x14860 - 0xf4, 0x14880 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AK Burned", 0x14880 - 0xf4, 0x148a0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LP Pharaoh's Curse", 0x148a0 - 0xf4, 0x148c0 - 0xf4 },
    { L"Morrigan MP Pharaoh's Curse", 0x148c0 - 0xf4, 0x148e0 - 0xf4 },
    { L"Morrigan HP Pharaoh's Curse", 0x148e0 - 0xf4, 0x14900 - 0xf4 },
    { L"Morrigan LK Pharaoh's Curse", 0x14900 - 0xf4, 0x14920 - 0xf4 },
    { L"Morrigan MK Pharaoh's Curse", 0x14920 - 0xf4, 0x14940 - 0xf4 },
    { L"Morrigan HK Pharaoh's Curse", 0x14940 - 0xf4, 0x14960 - 0xf4 },
    { L"Morrigan PP Pharaoh's Curse", 0x14960 - 0xf4, 0x14980 - 0xf4 },
    { L"Morrigan KK Pharaoh's Curse", 0x14980 - 0xf4, 0x149a0 - 0xf4 },
    { L"Morrigan AP Pharaoh's Curse", 0x149a0 - 0xf4, 0x149c0 - 0xf4 },
    { L"Morrigan AK Pharaoh's Curse", 0x149c0 - 0xf4, 0x149e0 - 0xf4 },
    { L"Morrigan LP Midnight Bliss", 0x14bc0 - 0xf4, 0x14be0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MP Midnight Bliss", 0x14be0 - 0xf4, 0x14c00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HP Midnight Bliss", 0x14c00 - 0xf4, 0x14c20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan LK Midnight Bliss", 0x14c20 - 0xf4, 0x14c40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MK Midnight Bliss", 0x14c40 - 0xf4, 0x14c60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HK Midnight Bliss", 0x14c60 - 0xf4, 0x14c80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan PP Midnight Bliss", 0x14c80 - 0xf4, 0x14ca0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan KK Midnight Bliss", 0x14ca0 - 0xf4, 0x14cc0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AP Midnight Bliss", 0x14cc0 - 0xf4, 0x14ce0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AK Midnight Bliss", 0x14ce0 - 0xf4, 0x14d00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan ES 1", 0x149e0 - 0xf4, 0x14a00 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan ES 2", 0x14a00 - 0xf4, 0x14a20 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan ES 3", 0x14a20 - 0xf4, 0x14a40 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan ES 4", 0x14a40 - 0xf4, 0x14a60 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 1", 0x14a60 - 0xf4, 0x14a80 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 2", 0x14a80 - 0xf4, 0x14aa0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 3", 0x14aa0 - 0xf4, 0x14ac0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 4", 0x14ac0 - 0xf4, 0x14ae0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 5", 0x14ae0 - 0xf4, 0x14b00 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 6", 0x14b00 - 0xf4, 0x14b20 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 7", 0x14b20 - 0xf4, 0x14b40 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 8", 0x14b40 - 0xf4, 0x14b60 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Prova di Servo", 0x14b60 - 0xf4, 0x14b80 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Finale Rosso", 0x14b80 - 0xf4, 0x14ba0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Stone", 0x14ba0 - 0xf4, 0x14bc0 - 0xf4, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Q-Bee's QJ Honey", 0x14d00 - 0xf4, 0x14d20 - 0xf4, indexCPS2_Morrigan, 0x00 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_SPECIAL[] =
{
    { L"Anakaris LP Poisoned", 0x14d20 - 0xf4, 0x14d40 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris MP Poisoned", 0x14d40 - 0xf4, 0x14d60 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris HP Poisoned", 0x14d60 - 0xf4, 0x14d80 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris LK Poisoned", 0x14d80 - 0xf4, 0x14da0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris MK Poisoned", 0x14da0 - 0xf4, 0x14dc0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris HK Poisoned", 0x14dc0 - 0xf4, 0x14de0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris PP Poisoned", 0x14de0 - 0xf4, 0x14e00 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris KK Poisoned", 0x14e00 - 0xf4, 0x14e20 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris AP Poisoned", 0x14e20 - 0xf4, 0x14e40 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris AK Poisoned", 0x14e40 - 0xf4, 0x14e60 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris LP Zapped", 0x14e60 - 0xf4, 0x14e80 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris MP Zapped", 0x14e80 - 0xf4, 0x14ea0 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris HP Zapped", 0x14ea0 - 0xf4, 0x14ec0 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris LK Zapped", 0x14ec0 - 0xf4, 0x14ee0 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris MK Zapped", 0x14ee0 - 0xf4, 0x14f00 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris HK Zapped", 0x14f00 - 0xf4, 0x14f20 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris PP Zapped", 0x14f20 - 0xf4, 0x14f40 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris KK Zapped", 0x14f40 - 0xf4, 0x14f60 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris AP Zapped", 0x14f60 - 0xf4, 0x14f80 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris AK Zapped", 0x14f80 - 0xf4, 0x14fa0 - 0xf4, indexCPS2_Anakaris, 0x0c },
    { L"Anakaris LP Burned", 0x14fa0 - 0xf4, 0x14fc0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris MP Burned", 0x14fc0 - 0xf4, 0x14fe0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris HP Burned", 0x14fe0 - 0xf4, 0x15000 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris LK Burned", 0x15000 - 0xf4, 0x15020 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris MK Burned", 0x15020 - 0xf4, 0x15040 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris HK Burned", 0x15040 - 0xf4, 0x15060 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris PP Burned", 0x15060 - 0xf4, 0x15080 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris KK Burned", 0x15080 - 0xf4, 0x150a0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris AP Burned", 0x150a0 - 0xf4, 0x150c0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris AK Burned", 0x150c0 - 0xf4, 0x150e0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris LP Pharaoh's Curse", 0x150e0 - 0xf4, 0x15100 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MP Pharaoh's Curse", 0x15100 - 0xf4, 0x15120 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HP Pharaoh's Curse", 0x15120 - 0xf4, 0x15140 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris LK Pharaoh's Curse", 0x15140 - 0xf4, 0x15160 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MK Pharaoh's Curse", 0x15160 - 0xf4, 0x15180 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HK Pharaoh's Curse", 0x15180 - 0xf4, 0x151a0 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris PP Pharaoh's Curse", 0x151a0 - 0xf4, 0x151c0 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris KK Pharaoh's Curse", 0x151c0 - 0xf4, 0x151e0 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AP Pharaoh's Curse", 0x151e0 - 0xf4, 0x15200 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AK Pharaoh's Curse", 0x15200 - 0xf4, 0x15220 - 0xf4, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris LP Midnight Bliss", 0x15400 - 0xf4, 0x15420 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MP Midnight Bliss", 0x15420 - 0xf4, 0x15440 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HP Midnight Bliss", 0x15440 - 0xf4, 0x15460 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris LK Midnight Bliss", 0x15460 - 0xf4, 0x15480 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MK Midnight Bliss", 0x15480 - 0xf4, 0x154a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HK Midnight Bliss", 0x154a0 - 0xf4, 0x154c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris PP Midnight Bliss", 0x154c0 - 0xf4, 0x154e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris KK Midnight Bliss", 0x154e0 - 0xf4, 0x15500 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AP Midnight Bliss", 0x15500 - 0xf4, 0x15520 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AK Midnight Bliss", 0x15520 - 0xf4, 0x15540 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris ES 1", 0x15220 - 0xf4, 0x15240 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris ES 2", 0x15240 - 0xf4, 0x15260 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris ES 3", 0x15260 - 0xf4, 0x15280 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris ES 4", 0x15280 - 0xf4, 0x152a0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 1", 0x152a0 - 0xf4, 0x152c0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 2", 0x152c0 - 0xf4, 0x152e0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 3", 0x152e0 - 0xf4, 0x15300 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 4", 0x15300 - 0xf4, 0x15320 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 5", 0x15320 - 0xf4, 0x15340 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 6", 0x15340 - 0xf4, 0x15360 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 7", 0x15360 - 0xf4, 0x15380 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris EX 8", 0x15380 - 0xf4, 0x153a0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris Prova di Servo", 0x153a0 - 0xf4, 0x153c0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris Finale Rosso", 0x153c0 - 0xf4, 0x153e0 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris Stone", 0x153e0 - 0xf4, 0x15400 - 0xf4, indexCPS2_Anakaris },
    { L"Anakaris Q-Bee's QJ Honey", 0x15540 - 0xf4, 0x15560 - 0xf4, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_SPECIAL[] =
{
    { L"Felicia LP Poisoned", 0x15560 - 0xf4, 0x15580 - 0xf4, indexCPS2_Felicia },
    { L"Felicia MP Poisoned", 0x15580 - 0xf4, 0x155a0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia HP Poisoned", 0x155a0 - 0xf4, 0x155c0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia LK Poisoned", 0x155c0 - 0xf4, 0x155e0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia MK Poisoned", 0x155e0 - 0xf4, 0x15600 - 0xf4, indexCPS2_Felicia },
    { L"Felicia HK Poisoned", 0x15600 - 0xf4, 0x15620 - 0xf4, indexCPS2_Felicia },
    { L"Felicia PP Poisoned", 0x15620 - 0xf4, 0x15640 - 0xf4, indexCPS2_Felicia },
    { L"Felicia KK Poisoned", 0x15640 - 0xf4, 0x15660 - 0xf4, indexCPS2_Felicia },
    { L"Felicia AP Poisoned", 0x15660 - 0xf4, 0x15680 - 0xf4, indexCPS2_Felicia },
    { L"Felicia AK Poisoned", 0x15680 - 0xf4, 0x156a0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia LP Zapped", 0x156a0 - 0xf4, 0x156c0 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia MP Zapped", 0x156c0 - 0xf4, 0x156e0 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia HP Zapped", 0x156e0 - 0xf4, 0x15700 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia LK Zapped", 0x15700 - 0xf4, 0x15720 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia MK Zapped", 0x15720 - 0xf4, 0x15740 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia HK Zapped", 0x15740 - 0xf4, 0x15760 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia PP Zapped", 0x15760 - 0xf4, 0x15780 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia KK Zapped", 0x15780 - 0xf4, 0x157a0 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia AP Zapped", 0x157a0 - 0xf4, 0x157c0 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia AK Zapped", 0x157c0 - 0xf4, 0x157e0 - 0xf4, indexCPS2_Felicia, 0x0c },
    { L"Felicia LP Burned", 0x157e0 - 0xf4, 0x15800 - 0xf4, indexCPS2_Felicia },
    { L"Felicia MP Burned", 0x15800 - 0xf4, 0x15820 - 0xf4, indexCPS2_Felicia },
    { L"Felicia HP Burned", 0x15820 - 0xf4, 0x15840 - 0xf4, indexCPS2_Felicia },
    { L"Felicia LK Burned", 0x15840 - 0xf4, 0x15860 - 0xf4, indexCPS2_Felicia },
    { L"Felicia MK Burned", 0x15860 - 0xf4, 0x15880 - 0xf4, indexCPS2_Felicia },
    { L"Felicia HK Burned", 0x15880 - 0xf4, 0x158a0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia PP Burned", 0x158a0 - 0xf4, 0x158c0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia KK Burned", 0x158c0 - 0xf4, 0x158e0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia AP Burned", 0x158e0 - 0xf4, 0x15900 - 0xf4, indexCPS2_Felicia },
    { L"Felicia AK Burned", 0x15900 - 0xf4, 0x15920 - 0xf4, indexCPS2_Felicia },
    { L"Felicia LP Pharaoh's Curse", 0x15920 - 0xf4, 0x15940 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia MP Pharaoh's Curse", 0x15940 - 0xf4, 0x15960 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia HP Pharaoh's Curse", 0x15960 - 0xf4, 0x15980 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia LK Pharaoh's Curse", 0x15980 - 0xf4, 0x159a0 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia MK Pharaoh's Curse", 0x159a0 - 0xf4, 0x159c0 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia HK Pharaoh's Curse", 0x159c0 - 0xf4, 0x159e0 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia PP Pharaoh's Curse", 0x159e0 - 0xf4, 0x15a00 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia KK Pharaoh's Curse", 0x15a00 - 0xf4, 0x15a20 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia AP Pharaoh's Curse", 0x15a20 - 0xf4, 0x15a40 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia AK Pharaoh's Curse", 0x15a40 - 0xf4, 0x15a60 - 0xf4, indexCPS2_Felicia, 0x0d },
    { L"Felicia LP Midnight Bliss", 0x15c40 - 0xf4, 0x15c60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MP Midnight Bliss", 0x15c60 - 0xf4, 0x15c80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HP Midnight Bliss", 0x15c80 - 0xf4, 0x15ca0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia LK Midnight Bliss", 0x15ca0 - 0xf4, 0x15cc0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MK Midnight Bliss", 0x15cc0 - 0xf4, 0x15ce0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HK Midnight Bliss", 0x15ce0 - 0xf4, 0x15d00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia PP Midnight Bliss", 0x15d00 - 0xf4, 0x15d20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia KK Midnight Bliss", 0x15d20 - 0xf4, 0x15d40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AP Midnight Bliss", 0x15d40 - 0xf4, 0x15d60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AK Midnight Bliss", 0x15d60 - 0xf4, 0x15d80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia ES 1", 0x15a60 - 0xf4, 0x15a80 - 0xf4, indexCPS2_Felicia },
    { L"Felicia ES 2", 0x15a80 - 0xf4, 0x15aa0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia ES 3", 0x15aa0 - 0xf4, 0x15ac0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia ES 4", 0x15ac0 - 0xf4, 0x15ae0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 1", 0x15ae0 - 0xf4, 0x15b00 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 2", 0x15b00 - 0xf4, 0x15b20 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 3", 0x15b20 - 0xf4, 0x15b40 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 4", 0x15b40 - 0xf4, 0x15b60 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 5", 0x15b60 - 0xf4, 0x15b80 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 6", 0x15b80 - 0xf4, 0x15ba0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 7", 0x15ba0 - 0xf4, 0x15bc0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia EX 8", 0x15bc0 - 0xf4, 0x15be0 - 0xf4, indexCPS2_Felicia },
    { L"Felicia Prova di Servo", 0x15be0 - 0xf4, 0x15c00 - 0xf4, indexCPS2_Felicia },
    { L"Felicia Finale Rosso", 0x15c00 - 0xf4, 0x15c20 - 0xf4, indexCPS2_Felicia },
    { L"Felicia Stone", 0x15c20 - 0xf4, 0x15c40 - 0xf4, indexCPS2_Felicia },
    { L"Felicia Q-Bee's QJ Honey", 0x15d80 - 0xf4, 0x15da0 - 0xf4, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_SPECIAL[] =
{
    { L"Bishamon LP Poisoned", 0x15da0 - 0xf4, 0x15dc0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Poisoned", 0x15dc0 - 0xf4, 0x15de0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Poisoned", 0x15de0 - 0xf4, 0x15e00 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Poisoned", 0x15e00 - 0xf4, 0x15e20 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Poisoned", 0x15e20 - 0xf4, 0x15e40 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Poisoned", 0x15e40 - 0xf4, 0x15e60 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Poisoned", 0x15e60 - 0xf4, 0x15e80 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Poisoned", 0x15e80 - 0xf4, 0x15ea0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Poisoned", 0x15ea0 - 0xf4, 0x15ec0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Poisoned", 0x15ec0 - 0xf4, 0x15ee0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Zapped", 0x15ee0 - 0xf4, 0x15f00 - 0xf4 },
    { L"Bishamon MP Zapped", 0x15f00 - 0xf4, 0x15f20 - 0xf4 },
    { L"Bishamon HP Zapped", 0x15f20 - 0xf4, 0x15f40 - 0xf4 },
    { L"Bishamon LK Zapped", 0x15f40 - 0xf4, 0x15f60 - 0xf4 },
    { L"Bishamon MK Zapped", 0x15f60 - 0xf4, 0x15f80 - 0xf4 },
    { L"Bishamon HK Zapped", 0x15f80 - 0xf4, 0x15fa0 - 0xf4 },
    { L"Bishamon PP Zapped", 0x15fa0 - 0xf4, 0x15fc0 - 0xf4 },
    { L"Bishamon KK Zapped", 0x15fc0 - 0xf4, 0x15fe0 - 0xf4 },
    { L"Bishamon AP Zapped", 0x15fe0 - 0xf4, 0x16000 - 0xf4 },
    { L"Bishamon AK Zapped", 0x16000 - 0xf4, 0x16020 - 0xf4 },
    { L"Bishamon LP Burned", 0x16020 - 0xf4, 0x16040 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Burned", 0x16040 - 0xf4, 0x16060 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Burned", 0x16060 - 0xf4, 0x16080 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Burned", 0x16080 - 0xf4, 0x160a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Burned", 0x160a0 - 0xf4, 0x160c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Burned", 0x160c0 - 0xf4, 0x160e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Burned", 0x160e0 - 0xf4, 0x16100 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Burned", 0x16100 - 0xf4, 0x16120 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Burned", 0x16120 - 0xf4, 0x16140 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Burned", 0x16140 - 0xf4, 0x16160 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Pharaoh's Curse", 0x16160 - 0xf4, 0x16180 - 0xf4 },
    { L"Bishamon MP Pharaoh's Curse", 0x16180 - 0xf4, 0x161a0 - 0xf4 },
    { L"Bishamon HP Pharaoh's Curse", 0x161a0 - 0xf4, 0x161c0 - 0xf4 },
    { L"Bishamon LK Pharaoh's Curse", 0x161c0 - 0xf4, 0x161e0 - 0xf4 },
    { L"Bishamon MK Pharaoh's Curse", 0x161e0 - 0xf4, 0x16200 - 0xf4 },
    { L"Bishamon HK Pharaoh's Curse", 0x16200 - 0xf4, 0x16220 - 0xf4 },
    { L"Bishamon PP Pharaoh's Curse", 0x16220 - 0xf4, 0x16240 - 0xf4 },
    { L"Bishamon KK Pharaoh's Curse", 0x16240 - 0xf4, 0x16260 - 0xf4 },
    { L"Bishamon AP Pharaoh's Curse", 0x16260 - 0xf4, 0x16280 - 0xf4 },
    { L"Bishamon AK Pharaoh's Curse", 0x16280 - 0xf4, 0x162a0 - 0xf4 },
    { L"Bishamon LP Midnight Bliss", 0x16480 - 0xf4, 0x164a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Midnight Bliss", 0x164a0 - 0xf4, 0x164c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Midnight Bliss", 0x164c0 - 0xf4, 0x164e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Midnight Bliss", 0x164e0 - 0xf4, 0x16500 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Midnight Bliss", 0x16500 - 0xf4, 0x16520 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Midnight Bliss", 0x16520 - 0xf4, 0x16540 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Midnight Bliss", 0x16540 - 0xf4, 0x16560 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Midnight Bliss", 0x16560 - 0xf4, 0x16580 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Midnight Bliss", 0x16580 - 0xf4, 0x165a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Midnight Bliss", 0x165a0 - 0xf4, 0x165c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 1", 0x162a0 - 0xf4, 0x162c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 2", 0x162c0 - 0xf4, 0x162e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 3", 0x162e0 - 0xf4, 0x16300 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 4", 0x16300 - 0xf4, 0x16320 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 1", 0x16320 - 0xf4, 0x16340 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 2", 0x16340 - 0xf4, 0x16360 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 3", 0x16360 - 0xf4, 0x16380 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 4", 0x16380 - 0xf4, 0x163a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 5", 0x163a0 - 0xf4, 0x163c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 6", 0x163c0 - 0xf4, 0x163e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 7", 0x163e0 - 0xf4, 0x16400 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 8", 0x16400 - 0xf4, 0x16420 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Prova di Servo", 0x16420 - 0xf4, 0x16440 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Finale Rosso", 0x16440 - 0xf4, 0x16460 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Stone", 0x16460 - 0xf4, 0x16480 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Q-Bee's QJ Honey", 0x165c0 - 0xf4, 0x165e0 - 0xf4, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_SPECIAL[] =
{
    { L"Aulbath LP Poisoned", 0x165e0 - 0xf4, 0x16600 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Poisoned", 0x16600 - 0xf4, 0x16620 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Poisoned", 0x16620 - 0xf4, 0x16640 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Poisoned", 0x16640 - 0xf4, 0x16660 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Poisoned", 0x16660 - 0xf4, 0x16680 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Poisoned", 0x16680 - 0xf4, 0x166a0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Poisoned", 0x166a0 - 0xf4, 0x166c0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Poisoned", 0x166c0 - 0xf4, 0x166e0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Poisoned", 0x166e0 - 0xf4, 0x16700 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Poisoned", 0x16700 - 0xf4, 0x16720 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Zapped", 0x16720 - 0xf4, 0x16740 - 0xf4 },
    { L"Aulbath MP Zapped", 0x16740 - 0xf4, 0x16760 - 0xf4 },
    { L"Aulbath HP Zapped", 0x16760 - 0xf4, 0x16780 - 0xf4 },
    { L"Aulbath LK Zapped", 0x16780 - 0xf4, 0x167a0 - 0xf4 },
    { L"Aulbath MK Zapped", 0x167a0 - 0xf4, 0x167c0 - 0xf4 },
    { L"Aulbath HK Zapped", 0x167c0 - 0xf4, 0x167e0 - 0xf4 },
    { L"Aulbath PP Zapped", 0x167e0 - 0xf4, 0x16800 - 0xf4 },
    { L"Aulbath KK Zapped", 0x16800 - 0xf4, 0x16820 - 0xf4 },
    { L"Aulbath AP Zapped", 0x16820 - 0xf4, 0x16840 - 0xf4 },
    { L"Aulbath AK Zapped", 0x16840 - 0xf4, 0x16860 - 0xf4 },
    { L"Aulbath LP Burned", 0x16860 - 0xf4, 0x16880 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Burned", 0x16880 - 0xf4, 0x168a0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Burned", 0x168a0 - 0xf4, 0x168c0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Burned", 0x168c0 - 0xf4, 0x168e0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Burned", 0x168e0 - 0xf4, 0x16900 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Burned", 0x16900 - 0xf4, 0x16920 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Burned", 0x16920 - 0xf4, 0x16940 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Burned", 0x16940 - 0xf4, 0x16960 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Burned", 0x16960 - 0xf4, 0x16980 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Burned", 0x16980 - 0xf4, 0x169a0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Pharaoh's Curse", 0x169a0 - 0xf4, 0x169c0 - 0xf4 },
    { L"Aulbath MP Pharaoh's Curse", 0x169c0 - 0xf4, 0x169e0 - 0xf4 },
    { L"Aulbath HP Pharaoh's Curse", 0x169e0 - 0xf4, 0x16a00 - 0xf4 },
    { L"Aulbath LK Pharaoh's Curse", 0x16a00 - 0xf4, 0x16a20 - 0xf4 },
    { L"Aulbath MK Pharaoh's Curse", 0x16a20 - 0xf4, 0x16a40 - 0xf4 },
    { L"Aulbath HK Pharaoh's Curse", 0x16a40 - 0xf4, 0x16a60 - 0xf4 },
    { L"Aulbath PP Pharaoh's Curse", 0x16a60 - 0xf4, 0x16a80 - 0xf4 },
    { L"Aulbath KK Pharaoh's Curse", 0x16a80 - 0xf4, 0x16aa0 - 0xf4 },
    { L"Aulbath AP Pharaoh's Curse", 0x16aa0 - 0xf4, 0x16ac0 - 0xf4 },
    { L"Aulbath AK Pharaoh's Curse", 0x16ac0 - 0xf4, 0x16ae0 - 0xf4 },
    { L"Aulbath LP Midnight Bliss", 0x16cc0 - 0xf4, 0x16ce0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Midnight Bliss", 0x16ce0 - 0xf4, 0x16d00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Midnight Bliss", 0x16d00 - 0xf4, 0x16d20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Midnight Bliss", 0x16d20 - 0xf4, 0x16d40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Midnight Bliss", 0x16d40 - 0xf4, 0x16d60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Midnight Bliss", 0x16d60 - 0xf4, 0x16d80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Midnight Bliss", 0x16d80 - 0xf4, 0x16da0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Midnight Bliss", 0x16da0 - 0xf4, 0x16dc0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Midnight Bliss", 0x16dc0 - 0xf4, 0x16de0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Midnight Bliss", 0x16de0 - 0xf4, 0x16e00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 1", 0x16ae0 - 0xf4, 0x16b00 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 2", 0x16b00 - 0xf4, 0x16b20 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 3", 0x16b20 - 0xf4, 0x16b40 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 4", 0x16b40 - 0xf4, 0x16b60 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 1", 0x16b60 - 0xf4, 0x16b80 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 2", 0x16b80 - 0xf4, 0x16ba0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 3", 0x16ba0 - 0xf4, 0x16bc0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 4", 0x16bc0 - 0xf4, 0x16be0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 5", 0x16be0 - 0xf4, 0x16c00 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 6", 0x16c00 - 0xf4, 0x16c20 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 7", 0x16c20 - 0xf4, 0x16c40 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 8", 0x16c40 - 0xf4, 0x16c60 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Prova di Servo", 0x16c60 - 0xf4, 0x16c80 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Finale Rosso", 0x16c80 - 0xf4, 0x16ca0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Stone", 0x16ca0 - 0xf4, 0x16cc0 - 0xf4, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Q-Bee's QJ Honey", 0x16e00 - 0xf4, 0x16e20 - 0xf4, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_SPECIAL[] =
{
    { L"Sasquatch LP Poisoned", 0x16e20 - 0xf4, 0x16e40 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Poisoned", 0x16e40 - 0xf4, 0x16e60 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Poisoned", 0x16e60 - 0xf4, 0x16e80 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Poisoned", 0x16e80 - 0xf4, 0x16ea0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Poisoned", 0x16ea0 - 0xf4, 0x16ec0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Poisoned", 0x16ec0 - 0xf4, 0x16ee0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Poisoned", 0x16ee0 - 0xf4, 0x16f00 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Poisoned", 0x16f00 - 0xf4, 0x16f20 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Poisoned", 0x16f20 - 0xf4, 0x16f40 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Poisoned", 0x16f40 - 0xf4, 0x16f60 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Zapped", 0x16f60 - 0xf4, 0x16f80 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch MP Zapped", 0x16f80 - 0xf4, 0x16fa0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch HP Zapped", 0x16fa0 - 0xf4, 0x16fc0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch LK Zapped", 0x16fc0 - 0xf4, 0x16fe0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch MK Zapped", 0x16fe0 - 0xf4, 0x17000 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch HK Zapped", 0x17000 - 0xf4, 0x17020 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch PP Zapped", 0x17020 - 0xf4, 0x17040 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch KK Zapped", 0x17040 - 0xf4, 0x17060 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch AP Zapped", 0x17060 - 0xf4, 0x17080 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch AK Zapped", 0x17080 - 0xf4, 0x170a0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch LP Burned", 0x170a0 - 0xf4, 0x170c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Burned", 0x170c0 - 0xf4, 0x170e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Burned", 0x170e0 - 0xf4, 0x17100 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Burned", 0x17100 - 0xf4, 0x17120 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Burned", 0x17120 - 0xf4, 0x17140 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Burned", 0x17140 - 0xf4, 0x17160 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Burned", 0x17160 - 0xf4, 0x17180 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Burned", 0x17180 - 0xf4, 0x171a0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Burned", 0x171a0 - 0xf4, 0x171c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Burned", 0x171c0 - 0xf4, 0x171e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Pharaoh's Curse", 0x171e0 - 0xf4, 0x17200 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MP Pharaoh's Curse", 0x17200 - 0xf4, 0x17220 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HP Pharaoh's Curse", 0x17220 - 0xf4, 0x17240 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LK Pharaoh's Curse", 0x17240 - 0xf4, 0x17260 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MK Pharaoh's Curse", 0x17260 - 0xf4, 0x17280 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HK Pharaoh's Curse", 0x17280 - 0xf4, 0x172a0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch PP Pharaoh's Curse", 0x172a0 - 0xf4, 0x172c0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch KK Pharaoh's Curse", 0x172c0 - 0xf4, 0x172e0 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AP Pharaoh's Curse", 0x172e0 - 0xf4, 0x17300 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AK Pharaoh's Curse", 0x17300 - 0xf4, 0x17320 - 0xf4, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LP Midnight Bliss", 0x17500 - 0xf4, 0x17520 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Midnight Bliss", 0x17520 - 0xf4, 0x17540 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Midnight Bliss", 0x17540 - 0xf4, 0x17560 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Midnight Bliss", 0x17560 - 0xf4, 0x17580 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Midnight Bliss", 0x17580 - 0xf4, 0x175a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Midnight Bliss", 0x175a0 - 0xf4, 0x175c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Midnight Bliss", 0x175c0 - 0xf4, 0x175e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Midnight Bliss", 0x175e0 - 0xf4, 0x17600 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Midnight Bliss", 0x17600 - 0xf4, 0x17620 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Midnight Bliss", 0x17620 - 0xf4, 0x17640 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 1", 0x17320 - 0xf4, 0x17340 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 2", 0x17340 - 0xf4, 0x17360 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 3", 0x17360 - 0xf4, 0x17380 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 4", 0x17380 - 0xf4, 0x173a0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 1", 0x173a0 - 0xf4, 0x173c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 2", 0x173c0 - 0xf4, 0x173e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 3", 0x173e0 - 0xf4, 0x17400 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 4", 0x17400 - 0xf4, 0x17420 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 5", 0x17420 - 0xf4, 0x17440 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 6", 0x17440 - 0xf4, 0x17460 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 7", 0x17460 - 0xf4, 0x17480 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 8", 0x17480 - 0xf4, 0x174a0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Prova di Servo", 0x174a0 - 0xf4, 0x174c0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Finale Rosso", 0x174c0 - 0xf4, 0x174e0 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Stone", 0x174e0 - 0xf4, 0x17500 - 0xf4, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Q-Bee's QJ Honey", 0x17640 - 0xf4, 0x17660 - 0xf4, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QBEE_PALETTES_SPECIAL[] =
{
    { L"Q-Bee LP Poisoned", 0x17660 - 0xf4, 0x17680 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LP Wings/Honey Poisoned", 0x01edac, 0x01edcc, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MP Poisoned", 0x17680 - 0xf4, 0x176a0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MP Wings/Honey Poisoned", 0x01edcc, 0x01edec, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HP Poisoned", 0x176a0 - 0xf4, 0x176c0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HP Wings/Honey Poisoned", 0x01edec, 0x01ee0c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LK Poisoned", 0x176c0 - 0xf4, 0x176e0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LK Wings/Honey Poisoned", 0x01ee0c, 0x01ee2c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MK Poisoned", 0x176e0 - 0xf4, 0x17700 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MK Wings/Honey Poisoned", 0x01ee2c, 0x01ee4c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HK Poisoned", 0x17700 - 0xf4, 0x17720 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HK Wings/Honey Poisoned", 0x01ee4c, 0x01ee6c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee PP Poisoned", 0x17720 - 0xf4, 0x17740 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"PP Wings/Honey Poisoned", 0x01ee6c, 0x01ee8c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee KK Poisoned", 0x17740 - 0xf4, 0x17760 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"KK Wings/Honey Poisoned", 0x01ee8c, 0x01eeac, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AP Poisoned", 0x17760 - 0xf4, 0x17780 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AP Wings/Honey Poisoned", 0x01eeac, 0x01eecc, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AK Poisoned", 0x17780 - 0xf4, 0x177a0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AK Wings/Honey Poisoned", 0x01eecc, 0x01eeec, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LP Zapped", 0x177a0 - 0xf4, 0x177c0 - 0xf4 },
    { L"Q-Bee MP Zapped", 0x177c0 - 0xf4, 0x177e0 - 0xf4 },
    { L"Q-Bee HP Zapped", 0x177e0 - 0xf4, 0x17800 - 0xf4 },
    { L"Q-Bee LK Zapped", 0x17800 - 0xf4, 0x17820 - 0xf4 },
    { L"Q-Bee MK Zapped", 0x17820 - 0xf4, 0x17840 - 0xf4 },
    { L"Q-Bee HK Zapped", 0x17840 - 0xf4, 0x17860 - 0xf4 },
    { L"Q-Bee PP Zapped", 0x17860 - 0xf4, 0x17880 - 0xf4 },
    { L"Q-Bee KK Zapped", 0x17880 - 0xf4, 0x178a0 - 0xf4 },
    { L"Q-Bee AP Zapped", 0x178a0 - 0xf4, 0x178c0 - 0xf4 },
    { L"Q-Bee AK Zapped", 0x178c0 - 0xf4, 0x178e0 - 0xf4 },
    { L"Q-Bee LP Burned", 0x178e0 - 0xf4, 0x17900 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LP Wings/Honey Burned", 0x01f02c, 0x01f04c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MP Burned", 0x17900 - 0xf4, 0x17920 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MP Wings/Honey Burned", 0x01f04c, 0x01f06c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HP Burned", 0x17920 - 0xf4, 0x17940 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HP Wings/Honey Burned", 0x01f06c, 0x01f08c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LK Burned", 0x17940 - 0xf4, 0x17960 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LK Wings/Honey Burned", 0x01f08c, 0x01f0ac, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MK Burned", 0x17960 - 0xf4, 0x17980 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MK Wings/Honey Burned", 0x01f0ac, 0x01f0cc, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HK Burned", 0x17980 - 0xf4, 0x179a0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HK Wings/Honey Burned", 0x01f0cc, 0x01f0ec, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee PP Burned", 0x179a0 - 0xf4, 0x179c0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"PP Wings/Honey Burned", 0x01f0ec, 0x01f10c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee KK Burned", 0x179c0 - 0xf4, 0x179e0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"KK Wings/Honey Burned", 0x01f10c, 0x01f12c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AP Burned", 0x179e0 - 0xf4, 0x17a00 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AP Wings/Honey Burned", 0x01f12c, 0x01f14c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AK Burned", 0x17a00 - 0xf4, 0x17a20 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AK Wings/Honey Burned", 0x01f14c, 0x01f16c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LP Pharaoh's Curse", 0x17a20 - 0xf4, 0x17a40 - 0xf4 },
    { L"Q-Bee MP Pharaoh's Curse", 0x17a40 - 0xf4, 0x17a60 - 0xf4 },
    { L"Q-Bee HP Pharaoh's Curse", 0x17a60 - 0xf4, 0x17a80 - 0xf4 },
    { L"Q-Bee LK Pharaoh's Curse", 0x17a80 - 0xf4, 0x17aa0 - 0xf4 },
    { L"Q-Bee MK Pharaoh's Curse", 0x17aa0 - 0xf4, 0x17ac0 - 0xf4 },
    { L"Q-Bee HK Pharaoh's Curse", 0x17ac0 - 0xf4, 0x17ae0 - 0xf4 },
    { L"Q-Bee PP Pharaoh's Curse", 0x17ae0 - 0xf4, 0x17b00 - 0xf4 },
    { L"Q-Bee KK Pharaoh's Curse", 0x17b00 - 0xf4, 0x17b20 - 0xf4 },
    { L"Q-Bee AP Pharaoh's Curse", 0x17b20 - 0xf4, 0x17b40 - 0xf4 },
    { L"Q-Bee AK Pharaoh's Curse", 0x17b40 - 0xf4, 0x17b60 - 0xf4 },
    { L"Q-Bee LP Midnight Bliss", 0x17d40 - 0xf4, 0x17d60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Midnight Bliss", 0x17d60 - 0xf4, 0x17d80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Midnight Bliss", 0x17d80 - 0xf4, 0x17da0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Midnight Bliss", 0x17da0 - 0xf4, 0x17dc0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Midnight Bliss", 0x17dc0 - 0xf4, 0x17de0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Midnight Bliss", 0x17de0 - 0xf4, 0x17e00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Midnight Bliss", 0x17e00 - 0xf4, 0x17e20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Midnight Bliss", 0x17e20 - 0xf4, 0x17e40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Midnight Bliss", 0x17e40 - 0xf4, 0x17e60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Midnight Bliss", 0x17e60 - 0xf4, 0x17e80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 1", 0x17b60 - 0xf4, 0x17b80 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 1/4", 0x01f2ac, 0x01f2cc, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee ES 2", 0x17b80 - 0xf4, 0x17ba0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 2/4", 0x01f2cc, 0x01f2ec, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee ES 3", 0x17ba0 - 0xf4, 0x17bc0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 3/4", 0x01f2ec, 0x01f30c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee ES 4", 0x17bc0 - 0xf4, 0x17be0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 4/4", 0x01f30c, 0x01f32c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 1", 0x17be0 - 0xf4, 0x17c00 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 1/8", 0x01f32c, 0x01f34c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 2", 0x17c00 - 0xf4, 0x17c20 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 2/8", 0x01f34c, 0x01f36c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 3", 0x17c20 - 0xf4, 0x17c40 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 3/8", 0x01f36c, 0x01f38c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 4", 0x17c40 - 0xf4, 0x17c60 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 4/8", 0x01f38c, 0x01f3ac, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 5", 0x17c60 - 0xf4, 0x17c80 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 5/8", 0x01f3ac, 0x01f3cc, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 6", 0x17c80 - 0xf4, 0x17ca0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 6/8", 0x01f3cc, 0x01f3ec, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 7", 0x17ca0 - 0xf4, 0x17cc0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 7/8", 0x01f3ec, 0x01f40c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 8", 0x17cc0 - 0xf4, 0x17ce0 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 8/8", 0x01f40c, 0x01f42c, indexCPS2_Vamp_QBee, 1 },

    { L"Q-Bee Prova di Servo", 0x17ce0 - 0xf4, 0x17d00 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Prova di Servo", 0x01f42c, 0x01f44c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee Finale Rosso", 0x17d00 - 0xf4, 0x17d20 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Finale Rosso", 0x01f44c, 0x01f46c, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee Stone", 0x17d20 - 0xf4, 0x17d40 - 0xf4, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Stone", 0x01f46c, 0x01f48c, indexCPS2_Vamp_QBee, 1 },

    { L"Q-Bee Q-Bee's QJ Honey", 0x17e80 - 0xf4, 0x17ea0 - 0xf4, indexCPS2_Vamp_QBee },

    { L"LP Dark Force 1/4", 0x01f48c, 0x01f4ac, indexCPS2_Vamp_QBee },
    { L"LP Dark Force 2/4", 0x01f4ac, 0x01f4cc, indexCPS2_Vamp_QBee },
    { L"LP Dark Force 3/4", 0x01f4cc, 0x01f4ec, indexCPS2_Vamp_QBee },
    { L"LP Dark Force 4/4", 0x01f4ec, 0x01f50c, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 1/4", 0x01f50c, 0x01f52c, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 2/4", 0x01f52c, 0x01f54c, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 3/4", 0x01f54c, 0x01f56c, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 4/4", 0x01f56c, 0x01f58c, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 1/4", 0x01f58c, 0x01f5ac, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 2/4", 0x01f5ac, 0x01f5cc, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 3/4", 0x01f5cc, 0x01f5ec, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 4/4", 0x01f5ec, 0x01f60c, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 1/4", 0x01f60c, 0x01f62c, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 2/4", 0x01f62c, 0x01f64c, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 3/4", 0x01f64c, 0x01f66c, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 4/4", 0x01f66c, 0x01f68c, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 1/4", 0x01f68c, 0x01f6ac, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 2/4", 0x01f6ac, 0x01f6cc, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 3/4", 0x01f6cc, 0x01f6ec, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 4/4", 0x01f6ec, 0x01f70c, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 1/4", 0x01f70c, 0x01f72c, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 2/4", 0x01f72c, 0x01f74c, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 3/4", 0x01f74c, 0x01f76c, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 4/4", 0x01f76c, 0x01f78c, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 1/4", 0x01f78c, 0x01f7ac, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 2/4", 0x01f7ac, 0x01f7cc, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 3/4", 0x01f7cc, 0x01f7ec, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 4/4", 0x01f7ec, 0x01f80c, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 1/4", 0x01f80c, 0x01f82c, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 2/4", 0x01f82c, 0x01f84c, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 3/4", 0x01f84c, 0x01f86c, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 4/4", 0x01f86c, 0x01f88c, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 1/4", 0x01f88c, 0x01f8ac, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 2/4", 0x01f8ac, 0x01f8cc, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 3/4", 0x01f8cc, 0x01f8ec, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 4/4", 0x01f8ec, 0x01f90c, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 1/4", 0x01f90c, 0x01f92c, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 2/4", 0x01f92c, 0x01f94c, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 3/4", 0x01f94c, 0x01f96c, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 4/4", 0x01f96c, 0x01f98c, indexCPS2_Vamp_QBee },

    { L"LP Bees Win Pose", 0x01be4c, 0x01be6c, indexCPS2_Vamp_QBee },
    { L"MP Bees Win Pose", 0x01be6c, 0x01be8c, indexCPS2_Vamp_QBee },
    { L"HP Bees Win Pose", 0x01be8c, 0x01beac, indexCPS2_Vamp_QBee },
    { L"LK Bees Win Pose", 0x01beac, 0x01becc, indexCPS2_Vamp_QBee },
    { L"MK Bees Win Pose", 0x01becc, 0x01beec, indexCPS2_Vamp_QBee },
    { L"HK Bees Win Pose", 0x01beec, 0x01bf0c, indexCPS2_Vamp_QBee },
    { L"PP Bees Win Pose", 0x01bf0c, 0x01bf2c, indexCPS2_Vamp_QBee },
    { L"KK Bees Win Pose", 0x01bf2c, 0x01bf4c, indexCPS2_Vamp_QBee },
    { L"AP Bees Win Pose", 0x01bf4c, 0x01bf6c, indexCPS2_Vamp_QBee },
    { L"AK Bees Win Pose", 0x01bf6c, 0x01bf8c, indexCPS2_Vamp_QBee },

    { L"LP Tap K", 0x01d38c, 0x01d3ac, indexCPS2_Vamp_QBee },
    { L"MP Tap K", 0x01d3ac, 0x01d3cc, indexCPS2_Vamp_QBee },
    { L"HP Tap K", 0x01d3cc, 0x01d3ec, indexCPS2_Vamp_QBee },
    { L"LK Tap K", 0x01d3ec, 0x01d40c, indexCPS2_Vamp_QBee },
    { L"MK Tap K", 0x01d40c, 0x01d42c, indexCPS2_Vamp_QBee },
    { L"HK Tap K", 0x01d42c, 0x01d44c, indexCPS2_Vamp_QBee },
    { L"PP Tap K", 0x01d44c, 0x01d46c, indexCPS2_Vamp_QBee },
    { L"KK Tap K", 0x01d46c, 0x01d48c, indexCPS2_Vamp_QBee },
    { L"AP Tap K", 0x01d48c, 0x01d4ac, indexCPS2_Vamp_QBee },
    { L"AK Tap K", 0x01d4ac, 0x01d4cc, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_SPECIAL[] =
{
    { L"Lei-Lei LP Poisoned", 0x17ea0 - 0xf4, 0x17ec0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Poisoned", 0x17ec0 - 0xf4, 0x17ee0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Poisoned", 0x17ee0 - 0xf4, 0x17f00 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Poisoned", 0x17f00 - 0xf4, 0x17f20 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Poisoned", 0x17f20 - 0xf4, 0x17f40 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Poisoned", 0x17f40 - 0xf4, 0x17f60 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Poisoned", 0x17f60 - 0xf4, 0x17f80 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Poisoned", 0x17f80 - 0xf4, 0x17fa0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Poisoned", 0x17fa0 - 0xf4, 0x17fc0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Poisoned", 0x17fc0 - 0xf4, 0x17fe0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Zapped", 0x17fe0 - 0xf4, 0x18000 - 0xf4 },
    { L"Lei-Lei MP Zapped", 0x18000 - 0xf4, 0x18020 - 0xf4 },
    { L"Lei-Lei HP Zapped", 0x18020 - 0xf4, 0x18040 - 0xf4 },
    { L"Lei-Lei LK Zapped", 0x18040 - 0xf4, 0x18060 - 0xf4 },
    { L"Lei-Lei MK Zapped", 0x18060 - 0xf4, 0x18080 - 0xf4 },
    { L"Lei-Lei HK Zapped", 0x18080 - 0xf4, 0x180a0 - 0xf4 },
    { L"Lei-Lei PP Zapped", 0x180a0 - 0xf4, 0x180c0 - 0xf4 },
    { L"Lei-Lei KK Zapped", 0x180c0 - 0xf4, 0x180e0 - 0xf4 },
    { L"Lei-Lei AP Zapped", 0x180e0 - 0xf4, 0x18100 - 0xf4 },
    { L"Lei-Lei AK Zapped", 0x18100 - 0xf4, 0x18120 - 0xf4 },
    { L"Lei-Lei LP Burned", 0x18120 - 0xf4, 0x18140 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Burned", 0x18140 - 0xf4, 0x18160 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Burned", 0x18160 - 0xf4, 0x18180 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Burned", 0x18180 - 0xf4, 0x181a0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Burned", 0x181a0 - 0xf4, 0x181c0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Burned", 0x181c0 - 0xf4, 0x181e0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Burned", 0x181e0 - 0xf4, 0x18200 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Burned", 0x18200 - 0xf4, 0x18220 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Burned", 0x18220 - 0xf4, 0x18240 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Burned", 0x18240 - 0xf4, 0x18260 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Pharaoh's Curse", 0x18260 - 0xf4, 0x18280 - 0xf4 },
    { L"Lei-Lei MP Pharaoh's Curse", 0x18280 - 0xf4, 0x182a0 - 0xf4 },
    { L"Lei-Lei HP Pharaoh's Curse", 0x182a0 - 0xf4, 0x182c0 - 0xf4 },
    { L"Lei-Lei LK Pharaoh's Curse", 0x182c0 - 0xf4, 0x182e0 - 0xf4 },
    { L"Lei-Lei MK Pharaoh's Curse", 0x182e0 - 0xf4, 0x18300 - 0xf4 },
    { L"Lei-Lei HK Pharaoh's Curse", 0x18300 - 0xf4, 0x18320 - 0xf4 },
    { L"Lei-Lei PP Pharaoh's Curse", 0x18320 - 0xf4, 0x18340 - 0xf4 },
    { L"Lei-Lei KK Pharaoh's Curse", 0x18340 - 0xf4, 0x18360 - 0xf4 },
    { L"Lei-Lei AP Pharaoh's Curse", 0x18360 - 0xf4, 0x18380 - 0xf4 },
    { L"Lei-Lei AK Pharaoh's Curse", 0x18380 - 0xf4, 0x183a0 - 0xf4 },
    { L"Lei-Lei LP Midnight Bliss", 0x18580 - 0xf4, 0x185a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Midnight Bliss", 0x185a0 - 0xf4, 0x185c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Midnight Bliss", 0x185c0 - 0xf4, 0x185e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Midnight Bliss", 0x185e0 - 0xf4, 0x18600 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Midnight Bliss", 0x18600 - 0xf4, 0x18620 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Midnight Bliss", 0x18620 - 0xf4, 0x18640 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Midnight Bliss", 0x18640 - 0xf4, 0x18660 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Midnight Bliss", 0x18660 - 0xf4, 0x18680 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Midnight Bliss", 0x18680 - 0xf4, 0x186a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Midnight Bliss", 0x186a0 - 0xf4, 0x186c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 1", 0x183a0 - 0xf4, 0x183c0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 2", 0x183c0 - 0xf4, 0x183e0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 3", 0x183e0 - 0xf4, 0x18400 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 4", 0x18400 - 0xf4, 0x18420 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 1", 0x18420 - 0xf4, 0x18440 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 2", 0x18440 - 0xf4, 0x18460 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 3", 0x18460 - 0xf4, 0x18480 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 4", 0x18480 - 0xf4, 0x184a0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 5", 0x184a0 - 0xf4, 0x184c0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 6", 0x184c0 - 0xf4, 0x184e0 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 7", 0x184e0 - 0xf4, 0x18500 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 8", 0x18500 - 0xf4, 0x18520 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Prova di Servo", 0x18520 - 0xf4, 0x18540 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Finale Rosso", 0x18540 - 0xf4, 0x18560 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Stone", 0x18560 - 0xf4, 0x18580 - 0xf4, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Q-Bee's QJ Honey", 0x186c0 - 0xf4, 0x186e0 - 0xf4, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_SPECIAL[] =
{
    { L"Lilith LP Poisoned", 0x186e0 - 0xf4, 0x18700 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Poisoned", 0x18700 - 0xf4, 0x18720 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Poisoned", 0x18720 - 0xf4, 0x18740 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Poisoned", 0x18740 - 0xf4, 0x18760 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Poisoned", 0x18760 - 0xf4, 0x18780 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Poisoned", 0x18780 - 0xf4, 0x187a0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Poisoned", 0x187a0 - 0xf4, 0x187c0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Poisoned", 0x187c0 - 0xf4, 0x187e0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Poisoned", 0x187e0 - 0xf4, 0x18800 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Poisoned", 0x18800 - 0xf4, 0x18820 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith LP Zapped", 0x18820 - 0xf4, 0x18840 - 0xf4 },
    { L"Lilith MP Zapped", 0x18840 - 0xf4, 0x18860 - 0xf4 },
    { L"Lilith HP Zapped", 0x18860 - 0xf4, 0x18880 - 0xf4 },
    { L"Lilith LK Zapped", 0x18880 - 0xf4, 0x188a0 - 0xf4 },
    { L"Lilith MK Zapped", 0x188a0 - 0xf4, 0x188c0 - 0xf4 },
    { L"Lilith HK Zapped", 0x188c0 - 0xf4, 0x188e0 - 0xf4 },
    { L"Lilith PP Zapped", 0x188e0 - 0xf4, 0x18900 - 0xf4 },
    { L"Lilith KK Zapped", 0x18900 - 0xf4, 0x18920 - 0xf4 },
    { L"Lilith AP Zapped", 0x18920 - 0xf4, 0x18940 - 0xf4 },
    { L"Lilith AK Zapped", 0x18940 - 0xf4, 0x18960 - 0xf4 },
    { L"Lilith LP Burned", 0x18960 - 0xf4, 0x18980 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Burned", 0x18980 - 0xf4, 0x189a0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Burned", 0x189a0 - 0xf4, 0x189c0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Burned", 0x189c0 - 0xf4, 0x189e0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Burned", 0x189e0 - 0xf4, 0x18a00 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Burned", 0x18a00 - 0xf4, 0x18a20 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Burned", 0x18a20 - 0xf4, 0x18a40 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Burned", 0x18a40 - 0xf4, 0x18a60 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Burned", 0x18a60 - 0xf4, 0x18a80 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Burned", 0x18a80 - 0xf4, 0x18aa0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith LP Pharaoh's Curse", 0x18aa0 - 0xf4, 0x18ac0 - 0xf4 },
    { L"Lilith MP Pharaoh's Curse", 0x18ac0 - 0xf4, 0x18ae0 - 0xf4 },
    { L"Lilith HP Pharaoh's Curse", 0x18ae0 - 0xf4, 0x18b00 - 0xf4 },
    { L"Lilith LK Pharaoh's Curse", 0x18b00 - 0xf4, 0x18b20 - 0xf4 },
    { L"Lilith MK Pharaoh's Curse", 0x18b20 - 0xf4, 0x18b40 - 0xf4 },
    { L"Lilith HK Pharaoh's Curse", 0x18b40 - 0xf4, 0x18b60 - 0xf4 },
    { L"Lilith PP Pharaoh's Curse", 0x18b60 - 0xf4, 0x18b80 - 0xf4 },
    { L"Lilith KK Pharaoh's Curse", 0x18b80 - 0xf4, 0x18ba0 - 0xf4 },
    { L"Lilith AP Pharaoh's Curse", 0x18ba0 - 0xf4, 0x18bc0 - 0xf4 },
    { L"Lilith AK Pharaoh's Curse", 0x18bc0 - 0xf4, 0x18be0 - 0xf4 },
    { L"Lilith LP Midnight Bliss", 0x18dc0 - 0xf4, 0x18de0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Midnight Bliss", 0x18de0 - 0xf4, 0x18e00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Midnight Bliss", 0x18e00 - 0xf4, 0x18e20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Midnight Bliss", 0x18e20 - 0xf4, 0x18e40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Midnight Bliss", 0x18e40 - 0xf4, 0x18e60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Midnight Bliss", 0x18e60 - 0xf4, 0x18e80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Midnight Bliss", 0x18e80 - 0xf4, 0x18ea0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Midnight Bliss", 0x18ea0 - 0xf4, 0x18ec0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Midnight Bliss", 0x18ec0 - 0xf4, 0x18ee0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Midnight Bliss", 0x18ee0 - 0xf4, 0x18f00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 1", 0x18be0 - 0xf4, 0x18c00 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 2", 0x18c00 - 0xf4, 0x18c20 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 3", 0x18c20 - 0xf4, 0x18c40 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 4", 0x18c40 - 0xf4, 0x18c60 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 1", 0x18c60 - 0xf4, 0x18c80 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 2", 0x18c80 - 0xf4, 0x18ca0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 3", 0x18ca0 - 0xf4, 0x18cc0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 4", 0x18cc0 - 0xf4, 0x18ce0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 5", 0x18ce0 - 0xf4, 0x18d00 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 6", 0x18d00 - 0xf4, 0x18d20 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 7", 0x18d20 - 0xf4, 0x18d40 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 8", 0x18d40 - 0xf4, 0x18d60 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith Prova di Servo", 0x18d60 - 0xf4, 0x18d80 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith Finale Rosso", 0x18d80 - 0xf4, 0x18da0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith Stone", 0x18da0 - 0xf4, 0x18dc0 - 0xf4, indexCPS2_Vamp_Lilith },
    { L"Lilith Q-Bee's QJ Honey", 0x18f00 - 0xf4, 0x18f20 - 0xf4, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SPECIAL[] =
{
    { L"Jedah LP Poisoned", 0x18f20 - 0xf4, 0x18f40 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Poisoned", 0x18f40 - 0xf4, 0x18f60 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Poisoned", 0x18f60 - 0xf4, 0x18f80 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Poisoned", 0x18f80 - 0xf4, 0x18fa0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Poisoned", 0x18fa0 - 0xf4, 0x18fc0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Poisoned", 0x18fc0 - 0xf4, 0x18fe0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Poisoned", 0x18fe0 - 0xf4, 0x19000 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Poisoned", 0x19000 - 0xf4, 0x19020 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Poisoned", 0x19020 - 0xf4, 0x19040 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Poisoned", 0x19040 - 0xf4, 0x19060 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah LP Zapped", 0x19060 - 0xf4, 0x19080 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah MP Zapped", 0x19080 - 0xf4, 0x190a0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah HP Zapped", 0x190a0 - 0xf4, 0x190c0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah LK Zapped", 0x190c0 - 0xf4, 0x190e0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah MK Zapped", 0x190e0 - 0xf4, 0x19100 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah HK Zapped", 0x19100 - 0xf4, 0x19120 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah PP Zapped", 0x19120 - 0xf4, 0x19140 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah KK Zapped", 0x19140 - 0xf4, 0x19160 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah AP Zapped", 0x19160 - 0xf4, 0x19180 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah AK Zapped", 0x19180 - 0xf4, 0x191a0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah LP Burned", 0x191a0 - 0xf4, 0x191c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Burned", 0x191c0 - 0xf4, 0x191e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Burned", 0x191e0 - 0xf4, 0x19200 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Burned", 0x19200 - 0xf4, 0x19220 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Burned", 0x19220 - 0xf4, 0x19240 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Burned", 0x19240 - 0xf4, 0x19260 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Burned", 0x19260 - 0xf4, 0x19280 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Burned", 0x19280 - 0xf4, 0x192a0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Burned", 0x192a0 - 0xf4, 0x192c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Burned", 0x192c0 - 0xf4, 0x192e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah LP Pharaoh's Curse", 0x192e0 - 0xf4, 0x19300 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MP Pharaoh's Curse", 0x19300 - 0xf4, 0x19320 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HP Pharaoh's Curse", 0x19320 - 0xf4, 0x19340 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah LK Pharaoh's Curse", 0x19340 - 0xf4, 0x19360 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MK Pharaoh's Curse", 0x19360 - 0xf4, 0x19380 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HK Pharaoh's Curse", 0x19380 - 0xf4, 0x193a0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah PP Pharaoh's Curse", 0x193a0 - 0xf4, 0x193c0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah KK Pharaoh's Curse", 0x193c0 - 0xf4, 0x193e0 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AP Pharaoh's Curse", 0x193e0 - 0xf4, 0x19400 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AK Pharaoh's Curse", 0x19400 - 0xf4, 0x19420 - 0xf4, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah LP Midnight Bliss", 0x19600 - 0xf4, 0x19620 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Midnight Bliss", 0x19620 - 0xf4, 0x19640 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Midnight Bliss", 0x19640 - 0xf4, 0x19660 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Midnight Bliss", 0x19660 - 0xf4, 0x19680 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Midnight Bliss", 0x19680 - 0xf4, 0x196a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Midnight Bliss", 0x196a0 - 0xf4, 0x196c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Midnight Bliss", 0x196c0 - 0xf4, 0x196e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Midnight Bliss", 0x196e0 - 0xf4, 0x19700 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Midnight Bliss", 0x19700 - 0xf4, 0x19720 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Midnight Bliss", 0x19720 - 0xf4, 0x19740 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 1", 0x19420 - 0xf4, 0x19440 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 2", 0x19440 - 0xf4, 0x19460 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 3", 0x19460 - 0xf4, 0x19480 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 4", 0x19480 - 0xf4, 0x194a0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 1", 0x194a0 - 0xf4, 0x194c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 2", 0x194c0 - 0xf4, 0x194e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 3", 0x194e0 - 0xf4, 0x19500 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 4", 0x19500 - 0xf4, 0x19520 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 5", 0x19520 - 0xf4, 0x19540 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 6", 0x19540 - 0xf4, 0x19560 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 7", 0x19560 - 0xf4, 0x19580 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 8", 0x19580 - 0xf4, 0x195a0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah Prova di Servo", 0x195a0 - 0xf4, 0x195c0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah Finale Rosso", 0x195c0 - 0xf4, 0x195e0 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah Stone", 0x195e0 - 0xf4, 0x19600 - 0xf4, indexCPS2_Vamp_Jedah },
    { L"Jedah Q-Bee's QJ Honey", 0x19740 - 0xf4, 0x19760 - 0xf4, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL[] =
{
    { L"Oboro Bishamon LP Poisoned", 0x19fa0 - 0xf4, 0x19fc0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Poisoned", 0x19fc0 - 0xf4, 0x19fe0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Poisoned", 0x19fe0 - 0xf4, 0x1a000 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Poisoned", 0x1a000 - 0xf4, 0x1a020 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Poisoned", 0x1a020 - 0xf4, 0x1a040 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Poisoned", 0x1a040 - 0xf4, 0x1a060 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Poisoned", 0x1a060 - 0xf4, 0x1a080 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Poisoned", 0x1a080 - 0xf4, 0x1a0a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Poisoned", 0x1a0a0 - 0xf4, 0x1a0c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Poisoned", 0x1a0c0 - 0xf4, 0x1a0e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Zapped", 0x1a0e0 - 0xf4, 0x1a100 - 0xf4 },
    { L"Oboro Bishamon MP Zapped", 0x1a100 - 0xf4, 0x1a120 - 0xf4 },
    { L"Oboro Bishamon HP Zapped", 0x1a120 - 0xf4, 0x1a140 - 0xf4 },
    { L"Oboro Bishamon LK Zapped", 0x1a140 - 0xf4, 0x1a160 - 0xf4 },
    { L"Oboro Bishamon MK Zapped", 0x1a160 - 0xf4, 0x1a180 - 0xf4 },
    { L"Oboro Bishamon HK Zapped", 0x1a180 - 0xf4, 0x1a1a0 - 0xf4 },
    { L"Oboro Bishamon PP Zapped", 0x1a1a0 - 0xf4, 0x1a1c0 - 0xf4 },
    { L"Oboro Bishamon KK Zapped", 0x1a1c0 - 0xf4, 0x1a1e0 - 0xf4 },
    { L"Oboro Bishamon AP Zapped", 0x1a1e0 - 0xf4, 0x1a200 - 0xf4 },
    { L"Oboro Bishamon AK Zapped", 0x1a200 - 0xf4, 0x1a220 - 0xf4 },
    { L"Oboro Bishamon LP Burned", 0x1a220 - 0xf4, 0x1a240 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Burned", 0x1a240 - 0xf4, 0x1a260 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Burned", 0x1a260 - 0xf4, 0x1a280 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Burned", 0x1a280 - 0xf4, 0x1a2a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Burned", 0x1a2a0 - 0xf4, 0x1a2c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Burned", 0x1a2c0 - 0xf4, 0x1a2e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Burned", 0x1a2e0 - 0xf4, 0x1a300 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Burned", 0x1a300 - 0xf4, 0x1a320 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Burned", 0x1a320 - 0xf4, 0x1a340 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Burned", 0x1a340 - 0xf4, 0x1a360 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Pharaoh's Curse", 0x1a360 - 0xf4, 0x1a380 - 0xf4 },
    { L"Oboro Bishamon MP Pharaoh's Curse", 0x1a380 - 0xf4, 0x1a3a0 - 0xf4 },
    { L"Oboro Bishamon HP Pharaoh's Curse", 0x1a3a0 - 0xf4, 0x1a3c0 - 0xf4 },
    { L"Oboro Bishamon LK Pharaoh's Curse", 0x1a3c0 - 0xf4, 0x1a3e0 - 0xf4 },
    { L"Oboro Bishamon MK Pharaoh's Curse", 0x1a3e0 - 0xf4, 0x1a400 - 0xf4 },
    { L"Oboro Bishamon HK Pharaoh's Curse", 0x1a400 - 0xf4, 0x1a420 - 0xf4 },
    { L"Oboro Bishamon PP Pharaoh's Curse", 0x1a420 - 0xf4, 0x1a440 - 0xf4 },
    { L"Oboro Bishamon KK Pharaoh's Curse", 0x1a440 - 0xf4, 0x1a460 - 0xf4 },
    { L"Oboro Bishamon AP Pharaoh's Curse", 0x1a460 - 0xf4, 0x1a480 - 0xf4 },
    { L"Oboro Bishamon AK Pharaoh's Curse", 0x1a480 - 0xf4, 0x1a4a0 - 0xf4 },
    { L"Oboro Bishamon LP Midnight Bliss", 0x1a680 - 0xf4, 0x1a6a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MP Midnight Bliss", 0x1a6a0 - 0xf4, 0x1a6c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HP Midnight Bliss", 0x1a6c0 - 0xf4, 0x1a6e0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon LK Midnight Bliss", 0x1a6e0 - 0xf4, 0x1a700 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MK Midnight Bliss", 0x1a700 - 0xf4, 0x1a720 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HK Midnight Bliss", 0x1a720 - 0xf4, 0x1a740 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon PP Midnight Bliss", 0x1a740 - 0xf4, 0x1a760 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon KK Midnight Bliss", 0x1a760 - 0xf4, 0x1a780 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AP Midnight Bliss", 0x1a780 - 0xf4, 0x1a7a0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AK Midnight Bliss", 0x1a7a0 - 0xf4, 0x1a7c0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon ES 1", 0x1a4a0 - 0xf4, 0x1a4c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 2", 0x1a4c0 - 0xf4, 0x1a4e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 3", 0x1a4e0 - 0xf4, 0x1a500 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 4", 0x1a500 - 0xf4, 0x1a520 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 1", 0x1a520 - 0xf4, 0x1a540 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 2", 0x1a540 - 0xf4, 0x1a560 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 3", 0x1a560 - 0xf4, 0x1a580 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 4", 0x1a580 - 0xf4, 0x1a5a0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 5", 0x1a5a0 - 0xf4, 0x1a5c0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 6", 0x1a5c0 - 0xf4, 0x1a5e0 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 7", 0x1a5e0 - 0xf4, 0x1a600 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 8", 0x1a600 - 0xf4, 0x1a620 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Prova di Servo", 0x1a620 - 0xf4, 0x1a640 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Finale Rosso", 0x1a640 - 0xf4, 0x1a660 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Stone", 0x1a660 - 0xf4, 0x1a680 - 0xf4, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Q-Bee's QJ Honey", 0x1a7c0 - 0xf4, 0x1a7e0 - 0xf4, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_SPECIAL[] =
{
    { L"Dark Gallon Poisoned", 0x19760 - 0xf4, 0x19780 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Zapped", 0x198a0 - 0xf4, 0x198c0 - 0xf4 },
    { L"Dark Gallon Burned", 0x199e0 - 0xf4, 0x19a00 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Pharaoh's Curse", 0x19b20 - 0xf4, 0x19b40 - 0xf4 },
    { L"Dark Gallon Midnight Bliss", 0x19e40 - 0xf4, 0x19e60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon Alt Poisoned", 0x19780 - 0xf4, 0x197a0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Alt Zapped", 0x198c0 - 0xf4, 0x198e0 - 0xf4 },
    { L"Dark Gallon Alt Burned", 0x19a00 - 0xf4, 0x19a20 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Alt Pharaoh's Curse", 0x19b40 - 0xf4, 0x19b60 - 0xf4 },
    { L"Dark Gallon Alt Midnight Bliss", 0x19e60 - 0xf4, 0x19e80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon ES 1", 0x19c60 - 0xf4, 0x19c80 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 2", 0x19c80 - 0xf4, 0x19ca0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 3", 0x19ca0 - 0xf4, 0x19cc0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 4", 0x19cc0 - 0xf4, 0x19ce0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 1", 0x19ce0 - 0xf4, 0x19d00 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 2", 0x19d00 - 0xf4, 0x19d20 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 3", 0x19d20 - 0xf4, 0x19d40 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 4", 0x19d40 - 0xf4, 0x19d60 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 5", 0x19d60 - 0xf4, 0x19d80 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 6", 0x19d80 - 0xf4, 0x19da0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 7", 0x19da0 - 0xf4, 0x19dc0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 8", 0x19dc0 - 0xf4, 0x19de0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Prova di Servo", 0x19de0 - 0xf4, 0x19e00 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Finale Rosso", 0x19e00 - 0xf4, 0x19e20 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Stone", 0x19e20 - 0xf4, 0x19e40 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Q-Bee's QJ Honey", 0x19f80 - 0xf4, 0x19fa0 - 0xf4, indexCPS2_Vamp_DarkGallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED[] =
{
    { L"Dark Gallon HP Poisoned", 0x197a0 - 0xf4, 0x197c0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Poisoned", 0x197c0 - 0xf4, 0x197e0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Poisoned", 0x197e0 - 0xf4, 0x19800 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Poisoned", 0x19800 - 0xf4, 0x19820 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Poisoned", 0x19820 - 0xf4, 0x19840 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Poisoned", 0x19840 - 0xf4, 0x19860 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Poisoned", 0x19860 - 0xf4, 0x19880 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Poisoned", 0x19880 - 0xf4, 0x198a0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Zapped", 0x198e0 - 0xf4, 0x19900 - 0xf4 },
    { L"Dark Gallon LK Zapped", 0x19900 - 0xf4, 0x19920 - 0xf4 },
    { L"Dark Gallon MK Zapped", 0x19920 - 0xf4, 0x19940 - 0xf4 },
    { L"Dark Gallon HK Zapped", 0x19940 - 0xf4, 0x19960 - 0xf4 },
    { L"Dark Gallon PP Zapped", 0x19960 - 0xf4, 0x19980 - 0xf4 },
    { L"Dark Gallon KK Zapped", 0x19980 - 0xf4, 0x199a0 - 0xf4 },
    { L"Dark Gallon AP Zapped", 0x199a0 - 0xf4, 0x199c0 - 0xf4 },
    { L"Dark Gallon AK Zapped", 0x199c0 - 0xf4, 0x199e0 - 0xf4 },
    { L"Dark Gallon HP Burned", 0x19a20 - 0xf4, 0x19a40 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Burned", 0x19a40 - 0xf4, 0x19a60 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Burned", 0x19a60 - 0xf4, 0x19a80 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Burned", 0x19a80 - 0xf4, 0x19aa0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Burned", 0x19aa0 - 0xf4, 0x19ac0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Burned", 0x19ac0 - 0xf4, 0x19ae0 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Burned", 0x19ae0 - 0xf4, 0x19b00 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Burned", 0x19b00 - 0xf4, 0x19b20 - 0xf4, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Pharaoh's Curse", 0x19b60 - 0xf4, 0x19b80 - 0xf4 },
    { L"Dark Gallon LK Pharaoh's Curse", 0x19b80 - 0xf4, 0x19ba0 - 0xf4 },
    { L"Dark Gallon MK Pharaoh's Curse", 0x19ba0 - 0xf4, 0x19bc0 - 0xf4 },
    { L"Dark Gallon HK Pharaoh's Curse", 0x19bc0 - 0xf4, 0x19be0 - 0xf4 },
    { L"Dark Gallon PP Pharaoh's Curse", 0x19be0 - 0xf4, 0x19c00 - 0xf4 },
    { L"Dark Gallon KK Pharaoh's Curse", 0x19c00 - 0xf4, 0x19c20 - 0xf4 },
    { L"Dark Gallon AP Pharaoh's Curse", 0x19c20 - 0xf4, 0x19c40 - 0xf4 },
    { L"Dark Gallon AK Pharaoh's Curse", 0x19c40 - 0xf4, 0x19c60 - 0xf4 },
    { L"Dark Gallon HP Midnight Bliss", 0x19e80 - 0xf4, 0x19ea0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon LK Midnight Bliss", 0x19ea0 - 0xf4, 0x19ec0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon MK Midnight Bliss", 0x19ec0 - 0xf4, 0x19ee0 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon HK Midnight Bliss", 0x19ee0 - 0xf4, 0x19f00 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon PP Midnight Bliss", 0x19f00 - 0xf4, 0x19f20 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon KK Midnight Bliss", 0x19f20 - 0xf4, 0x19f40 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AP Midnight Bliss", 0x19f40 - 0xf4, 0x19f60 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AK Midnight Bliss", 0x19f60 - 0xf4, 0x19f80 - 0xf4, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
};

const sDescTreeNode VSAV_A_BULLETA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_LP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_MP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_HP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_LK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_MK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_HK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_PP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_KK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_AP,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_AK,         ARRAYSIZE(VSAV_A_BULLETA_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_BULLETA_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_SHARED, ARRAYSIZE(VSAV_A_BULLETA_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_DEMITRI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_MK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_PP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_KK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_AP,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_AK,         ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_SHARED, ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_GALLON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_LP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_MP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_HP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_LK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_MK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_HK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_PP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_KK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_AP,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_AK,         ARRAYSIZE(VSAV_A_GALLON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_GALLON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_VICTOR_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_MK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_PP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_KK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_AP,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_AK,         ARRAYSIZE(VSAV_A_VICTOR_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_VICTOR_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_SHARED, ARRAYSIZE(VSAV_A_VICTOR_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_ZABEL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_LP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_MP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_HP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_LK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_MK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_HK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_PP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_KK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_AP,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_AK,         ARRAYSIZE(VSAV_A_ZABEL_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_ZABEL_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_SHARED, ARRAYSIZE(VSAV_A_ZABEL_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_MORRIGAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_LP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_MP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_HP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_LK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_MK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_HK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_PP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_KK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_AP,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_AK,         ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_ANAKARIS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_MK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_PP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_KK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_AP,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_AK,         ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_SHARED, ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_FELICIA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_MK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_PP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_KK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_AP,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_AK,         ARRAYSIZE(VSAV_A_FELICIA_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_FELICIA_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_BISHAMON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_MK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_PP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_KK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_AP,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_AK,         ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_SHARED, ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_AULBATH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_MK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_PP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_KK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_AP,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_AK,         ARRAYSIZE(VSAV_A_AULBATH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_AULBATH_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_SASQUATCH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_LP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_MP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_HP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_LK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_MK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_HK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_PP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_KK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_AP,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_AK,         ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_QUEENBEE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_LP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_MP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_HP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_LK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_MK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_HK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_PP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_KK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_AP,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_PALETTES_AK,         ARRAYSIZE(VSAV_A_QUEENBEE_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_QBEE_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_QBEE_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_LEILEI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_MK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_PP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_KK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_AP,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_AK,         ARRAYSIZE(VSAV_A_LEILEI_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_LEILEI_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_SHARED, ARRAYSIZE(VSAV_A_LEILEI_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_LILITH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_LP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_MP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_HP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_LK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_MK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_HK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_PP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_KK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_AP,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_AK,         ARRAYSIZE(VSAV_A_LILITH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_LILITH_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_LILITH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_JEDAH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_LP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_MP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_HP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_LK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_MK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_HK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_PP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_KK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_AP,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_AK,         ARRAYSIZE(VSAV_A_JEDAH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_DARKGALLON_COLLECTION[] =
{
    { L"Default",    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_DEFAULT,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_DEFAULT) },
    { L"Alt",        DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_ALT,      ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_ALT) },
    { L"Special",    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_SPECIAL,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_SPECIAL) },
    { L"Special (Unused)", DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED, ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED) },
    
};

const sDescTreeNode VSAV_A_OBOROBISHAMON_COLLECTION[] =
{
    // These names are deliberately appended with _ so that multisprite export is forced off due to unbalanced nodes
    { L"LP_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_LP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_LP) },
    { L"MP_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_MP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_MP) },
    { L"HP_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_HP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_HP) },
    { L"LK_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_LK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_LK) },
    { L"MK_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_MK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_MK) },
    { L"HK_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_HK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_HK) },
    { L"PP_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_PP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_PP) },
    { L"KK_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_KK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_KK) },
    { L"AP_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_AP, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_AP) },
    { L"AK_", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_AK, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV_A_ANITA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_LP,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_MP,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_HP,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_LK,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_MK,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_HK,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_PP,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_KK,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_AP,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_PALETTES_AK,         ARRAYSIZE(VSAV_A_ANITA_PALETTES_AK) },
};

const sDescTreeNode VSAV_A_BONUS_COLLECTION[] =
{
    { L"HUD",        DESC_NODETYPE_TREE, (void*)VSAV_A_HUD_PALETTES,     ARRAYSIZE(VSAV_A_HUD_PALETTES) },
    { L"HUD (Player 1 Side)", DESC_NODETYPE_TREE, (void*)VSAV_A_HUD_P1_PALETTES, ARRAYSIZE(VSAV_A_HUD_P1_PALETTES) },
    { L"HUD (Player 2 Side)", DESC_NODETYPE_TREE, (void*)VSAV_A_HUD_P2_PALETTES, ARRAYSIZE(VSAV_A_HUD_P2_PALETTES) },
    { L"Effects",    DESC_NODETYPE_TREE, (void*)VSAV_A_EFFECTS_PALETTES,  ARRAYSIZE(VSAV_A_EFFECTS_PALETTES) },
    { L"Shadow",     DESC_NODETYPE_TREE, (void*)VSAV_A_SHADOW_PALETTES,  ARRAYSIZE(VSAV_A_SHADOW_PALETTES) },
    { L"Title/Select Screen", DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_TITLES_PALETTES,  ARRAYSIZE(VSAV_A_BONUS_TITLES_PALETTES) },
};

const sDescTreeNode VSAV_UNITS[] =
{
    { L"Bulleta",            DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_COLLECTION,       ARRAYSIZE(VSAV_A_BULLETA_COLLECTION) }, // BB-Hood
    { L"Demitri",            DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_COLLECTION,       ARRAYSIZE(VSAV_A_DEMITRI_COLLECTION) },
    { L"Gallon",             DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_COLLECTION,        ARRAYSIZE(VSAV_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Victor",             DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_COLLECTION,        ARRAYSIZE(VSAV_A_VICTOR_COLLECTION) },
    { L"Zabel",              DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_COLLECTION,         ARRAYSIZE(VSAV_A_ZABEL_COLLECTION) }, // Lord Raptor
    { L"Morrigan",           DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VSAV_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",           DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VSAV_A_ANAKARIS_COLLECTION) },
    { L"Felicia",            DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_COLLECTION,       ARRAYSIZE(VSAV_A_FELICIA_COLLECTION) },
    { L"Bishamon",           DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_COLLECTION,      ARRAYSIZE(VSAV_A_BISHAMON_COLLECTION) },
    { L"Aulbath",            DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_COLLECTION,       ARRAYSIZE(VSAV_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch",          DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VSAV_A_SASQUATCH_COLLECTION) },
    { L"Q-Bee",              DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VSAV_A_QUEENBEE_COLLECTION) },
    { L"Lei-Lei",            DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_COLLECTION,        ARRAYSIZE(VSAV_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { L"Lilith",             DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_COLLECTION,        ARRAYSIZE(VSAV_A_LILITH_COLLECTION) },
    { L"Jedah",              DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_COLLECTION,         ARRAYSIZE(VSAV_A_JEDAH_COLLECTION) },
    { L"Dark Gallon",        DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_COLLECTION,    ARRAYSIZE(VSAV_A_DARKGALLON_COLLECTION) },
    { L"Oboro Bishamon",     DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VSAV_A_OBOROBISHAMON_COLLECTION) },
    { L"Anita (Unused)",     DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_COLLECTION,         ARRAYSIZE(VSAV_A_ANITA_COLLECTION) },
    { L"Bonus Palettes",     DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_COLLECTION,         ARRAYSIZE(VSAV_A_BONUS_COLLECTION) },
};

constexpr auto VSAV_A_NUMUNIT = ARRAYSIZE(VSAV_UNITS);

#define VSAV_A_EXTRALOC VSAV_A_NUMUNIT

// We extend this array with data groveled from the VSAVe.txt extensible extras file, if any.
const stExtraDef VSAV_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

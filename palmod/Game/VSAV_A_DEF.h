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
    { L"LP Bulleta", 0x0C1Aa, 0x0C1Ca, indexCPS2_BBHood, 0 },
    { L"LP Critters", 0x0C1Ca, 0x0C1Ea, indexCPS2_BBHood, 0x01 },
    { L"LP Weapons", 0x0C1Ea, 0x0C20a, indexCPS2_BBHood, 0x02 },
    { L"LP Explosions", 0x0C20a, 0x0C22a },
    { L"LP Select Portrait", 0x2BF0a, 0x2BF2a, indexCPS2_BBHood, 0x20 },
    { L"LP Win Portrait", 0x2D60a, 0x2D6Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x0C22a, 0x0C24a, indexCPS2_BBHood, 0 },
    { L"MP Critters", 0x0C24a, 0x0C26a, indexCPS2_BBHood, 0x01 },
    { L"MP Weapons", 0x0C26a, 0x0C28a, indexCPS2_BBHood, 0x02 },
    { L"MP Explosions", 0x0C28a, 0x0C2Aa },
    { L"MP Select Portrait", 0x2C10a, 0x2C12a, indexCPS2_BBHood, 0x20 },
    { L"MP Win Portrait", 0x2E0Aa, 0x2E14a, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x0C2Aa, 0x0C2Ca, indexCPS2_BBHood, 0 },
    { L"HP Critters", 0x0C2Ca, 0x0C2Ea, indexCPS2_BBHood, 0x01 },
    { L"HP Weapons", 0x0C2Ea, 0x0C30a, indexCPS2_BBHood, 0x02 },
    { L"HP Explosions", 0x0C30a, 0x0C32a },
    { L"HP Select Portrait", 0x2C30a, 0x2C32a, indexCPS2_BBHood, 0x20 },
    { L"HP Win Portrait", 0x2EB4a, 0x2EBEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x0C32a, 0x0C34a, indexCPS2_BBHood, 0 },
    { L"LK Critters", 0x0C34a, 0x0C36a, indexCPS2_BBHood, 0x01 },
    { L"LK Weapons", 0x0C36a, 0x0C38a, indexCPS2_BBHood, 0x02 },
    { L"LK Explosions", 0x0C38a, 0x0C3Aa },
    { L"LK Select Portrait", 0x2C50a, 0x2C52a, indexCPS2_BBHood, 0x20 },
    { L"LK Win Portrait", 0x2F5Ea, 0x2F68a, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x0C3Aa, 0x0C3Ca, indexCPS2_BBHood, 0 },
    { L"MK Critters", 0x0C3Ca, 0x0C3Ea, indexCPS2_BBHood, 0x01 },
    { L"MK Weapons", 0x0C3Ea, 0x0C40a, indexCPS2_BBHood, 0x02 },
    { L"MK Explosions", 0x0C40a, 0x0C42a },
    { L"MK Select Portrait", 0x2C70a, 0x2C72a, indexCPS2_BBHood, 0x20 },
    { L"MK Win Portrait", 0x3008a, 0x3012a, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x0C42a, 0x0C44a, indexCPS2_BBHood, 0 },
    { L"HK Critters", 0x0C44a, 0x0C46a, indexCPS2_BBHood, 0x01 },
    { L"HK Weapons", 0x0C46a, 0x0C48a, indexCPS2_BBHood, 0x02 },
    { L"HK Explosions", 0x0C48a, 0x0C4Aa },
    { L"HK Select Portrait", 0x2C90a, 0x2C92a, indexCPS2_BBHood, 0x20 },
    { L"HK Win Portrait", 0x30B2a, 0x30BCa, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x0C4Aa, 0x0C4Ca, indexCPS2_BBHood, 0 },
    { L"PP Critters", 0x0C4Ca, 0x0C4Ea, indexCPS2_BBHood, 0x01 },
    { L"PP Weapons", 0x0C4Ea, 0x0C50a, indexCPS2_BBHood, 0x02 },
    { L"PP Explosions", 0x0C50a, 0x0C52a },
    { L"PP Select Portrait", 0x2CB0a, 0x2CB2a, indexCPS2_BBHood, 0x20 },
    { L"PP Win Portrait", 0x315Ca, 0x3166a, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x0C52a, 0x0C54a, indexCPS2_BBHood, 0 },
    { L"KK Critters", 0x0C54a, 0x0C56a, indexCPS2_BBHood, 0x01 },
    { L"KK Weapons", 0x0C56a, 0x0C58a, indexCPS2_BBHood, 0x02 },
    { L"KK Explosions", 0x0C58a, 0x0C5Aa },
    { L"KK Select Portrait", 0x2CD0a, 0x2CD2a, indexCPS2_BBHood, 0x20 },
    { L"KK Win Portrait", 0x3206a, 0x3210a, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x0C5Aa, 0x0C5Ca, indexCPS2_BBHood, 0 },
    { L"AP Critters", 0x0C5Ca, 0x0C5Ea, indexCPS2_BBHood, 0x01 },
    { L"AP Weapons", 0x0C5Ea, 0x0C60a, indexCPS2_BBHood, 0x02 },
    { L"AP Explosions", 0x0C60a, 0x0C62a },
    { L"AP Select Portrait", 0x2CF0a, 0x2CF2a, indexCPS2_BBHood, 0x20 },
    { L"AP Win Portrait", 0x32B0a, 0x32BAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x0C62a, 0x0C64a, indexCPS2_BBHood, 0 },
    { L"AK Critters", 0x0C64a, 0x0C66a, indexCPS2_BBHood, 0x01 },
    { L"AK Weapons", 0x0C66a, 0x0C68a, indexCPS2_BBHood, 0x01 },
    { L"AK Explosions", 0x0C68a, 0x0C6Aa },
    { L"AK Select Portrait", 0x2D10a, 0x2D12a, indexCPS2_BBHood, 0x20 },
    { L"AK Win Portrait", 0x335Aa, 0x3364a, indexCPS2_VSAV1_WinPortraits, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x0C6Aa, 0x0C6Ca, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Demitri 2nd palette", 0x1ACCa, 0x1ACEa, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Teledash 1", 0x0C70a, 0x0C72a, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Teledash 2", 0x0C6Ca, 0x0C6Ea, indexCPS2_Vamp_Demitri, 0 },
    { L"LP Fireball", 0x0C6Ea, 0x0C70a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LP Select Portrait", 0x2BF2a, 0x2BF4a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LP Win Portrait", 0x2D6Aa, 0x2D74a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri", 0x0C72a, 0x0C74a, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Demitri 2nd palette", 0x1ACEa, 0x1AD0a, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Teledash 1", 0x0C78a, 0x0C7Aa, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Teledash 2", 0x0C74a, 0x0C76a, indexCPS2_Vamp_Demitri, 0 },
    { L"MP Fireball", 0x0C76a, 0x0C78a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MP Select Portrait", 0x2C12a, 0x2C14a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MP Win Portrait", 0x2E14a, 0x2E1Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x0C7Aa, 0x0C7Ca, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Demitri 2nd palette", 0x1AD0a, 0x1AD2a, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Teledash 1", 0x0C80a, 0x0C82a, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Teledash 2", 0x0C7Ca, 0x0C7Ea, indexCPS2_Vamp_Demitri, 0 },
    { L"HP Fireball", 0x0C7Ea, 0x0C80a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HP Select Portrait", 0x2C32a, 0x2C34a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HP Win Portrait", 0x2EBEa, 0x2EC8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x0C82a, 0x0C84a, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Demitri 2nd palette", 0x1AD2a, 0x1AD4a, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Teledash 1", 0x0C88a, 0x0C8Aa, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Teledash 2", 0x0C84a, 0x0C86a, indexCPS2_Vamp_Demitri, 0 },
    { L"LK Fireball", 0x0C86a, 0x0C88a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LK Select Portrait", 0x2C52a, 0x2C54a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LK Win Portrait", 0x2F68a, 0x2F72a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x0C8Aa, 0x0C8Ca, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Demitri 2nd palette", 0x1AD4a, 0x1AD6a, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Teledash 1", 0x0C90a, 0x0C92a, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Teledash 2", 0x0C8Ca, 0x0C8Ea, indexCPS2_Vamp_Demitri, 0 },
    { L"MK Fireball", 0x0C8Ea, 0x0C90a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MK Select Portrait", 0x2C72a, 0x2C74a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MK Win Portrait", 0x3012a, 0x301Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x0C92a, 0x0C94a, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Demitri 2nd palette", 0x1AD6a, 0x1AD8a, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Teledash 1", 0x0C98a, 0x0C9Aa, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Teledash 2", 0x0C94a, 0x0C96a, indexCPS2_Vamp_Demitri, 0 },
    { L"HK Fireball", 0x0C96a, 0x0C98a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HK Select Portrait", 0x2C92a, 0x2C94a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HK Win Portrait", 0x30BCa, 0x30C6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x0C9Aa, 0x0C9Ca, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Demitri 2nd palette", 0x1AD8a, 0x1ADAa, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Teledash 1", 0x0CA0a, 0x0CA2a, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Teledash 2", 0x0C9Ca, 0x0C9Ea, indexCPS2_Vamp_Demitri, 0 },
    { L"PP Fireball", 0x0C9Ea, 0x0CA0a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"PP Select Portrait", 0x2CB2a, 0x2CB4a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"PP Win Portrait", 0x3166a, 0x3170a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x0CA2a, 0x0CA4a, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Demitri 2nd palette", 0x1ADAa, 0x1ADCa, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Teledash 1", 0x0CA8a, 0x0CAAa, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Teledash 2", 0x0CA4a, 0x0CA6a, indexCPS2_Vamp_Demitri, 0 },
    { L"KK Fireball", 0x0CA6a, 0x0CA8a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"KK Select Portrait", 0x2CD2a, 0x2CD4a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"KK Win Portrait", 0x3210a, 0x321Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x0CAAa, 0x0CACa, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Demitri 2nd palette", 0x1ADCa, 0x1ADEa, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Teledash 1", 0x0CB0a, 0x0CB2a, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Teledash 2", 0x0CACa, 0x0CAEa, indexCPS2_Vamp_Demitri, 0 },
    { L"AP Fireball", 0x0CAEa, 0x0CB0a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AP Select Portrait", 0x2CF2a, 0x2CF4a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AP Win Portrait", 0x32BAa, 0x32C4a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x0CB2a, 0x0CB4a, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Demitri 2nd palette", 0x1ADEa, 0x1AE0a, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Teledash 1", 0x0CB8a, 0x0CBAa, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Teledash 2", 0x0CB4a, 0x0CB6a, indexCPS2_Vamp_Demitri, 0 },
    { L"AK Fireball", 0x0CB6a, 0x0CB8a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AK Select Portrait", 0x2D12a, 0x2D14a, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AK Win Portrait", 0x3364a, 0x336Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_SHARED[] =
{
    { L"Demitri's followers 1", 0x1aE0a, 0x1aE2a, indexCPS2_Vamp_Demitri, 0x02 },
    { L"Demitri's followers 2", 0x1aE2a, 0x1aE4a, indexCPS2_Vamp_Demitri, 0x03 },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x0CBAa, 0x0CBCa, indexCPS2_Vamp_Gallon, 0 },
    { L"LP Intro/Outro", 0x0CBCa, 0x0CBEa },
    { L"LP 236P/41236KK/j.HP", 0x0CBEa, 0x0CC0a },
    { L"LP 236P/28K/Outro Flash", 0x0CC0a, 0x0CC2a },
    { L"LP Select Portrait", 0x2BF4a, 0x2BF6a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LP Win Portrait", 0x2D74a, 0x2D7Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x0CC2a, 0x0CC4a, indexCPS2_Vamp_Gallon, 0 },
    { L"MP Intro/Outro", 0x0CC4a, 0x0CC6a },
    { L"MP 236P/41236KK/j.HP", 0x0CC6a, 0x0CC8a },
    { L"MP 236P/28K/Outro Flash", 0x0CC8a, 0x0CCAa },
    { L"MP Select Portrait", 0x2C14a, 0x2C16a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MP Win Portrait", 0x2E1Ea, 0x2E28a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x0CCAa, 0x0CCCa, indexCPS2_Vamp_Gallon, 0 },
    { L"HP Intro/Outro", 0x0CCCa, 0x0CCEa },
    { L"HP 236P/41236KK/j.HP", 0x0CCEa, 0x0CD0a },
    { L"HP 236P/28K/Outro Flash", 0x0CD0a, 0x0CD2a },
    { L"HP Select Portrait", 0x2C34a, 0x2C36a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HP Win Portrait", 0x2EC8a, 0x2ED2a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x0CD2a, 0x0CD4a, indexCPS2_Vamp_Gallon, 0 },
    { L"LK Intro/Outro", 0x0CD4a, 0x0CD6a },
    { L"LK 236P/41236KK/j.HP", 0x0CD6a, 0x0CD8a },
    { L"LK 236P/28K/Outro Flash", 0x0CD8a, 0x0CDAa },
    { L"LK Select Portrait", 0x2C54a, 0x2C56a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LK Win Portrait", 0x2F72a, 0x2F7Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x0CDAa, 0x0CDCa, indexCPS2_Vamp_Gallon, 0 },
    { L"MK Intro/Outro", 0x0CDCa, 0x0CDEa },
    { L"MK 236P/41236KK/j.HP", 0x0CDEa, 0x0CE0a },
    { L"MK 236P/28K/Outro Flash", 0x0CE0a, 0x0CE2a },
    { L"MK Select Portrait", 0x2C74a, 0x2C76a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MK Win Portrait", 0x301Ca, 0x3026a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x0CE2a, 0x0CE4a, indexCPS2_Vamp_Gallon, 0 },
    { L"HK Intro/Outro", 0x0CE4a, 0x0CE6a },
    { L"HK 236P/41236KK/j.HP", 0x0CE6a, 0x0CE8a },
    { L"HK 236P/28K/Outro Flash", 0x0CE8a, 0x0CEAa },
    { L"HK Select Portrait", 0x2C94a, 0x2C96a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HK Win Portrait", 0x30C6a, 0x30D0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x0CEAa, 0x0CECa, indexCPS2_Vamp_Gallon, 0 },
    { L"PP Intro/Outro", 0x0CECa, 0x0CEEa },
    { L"PP 236P/41236KK/j.HP", 0x0CEEa, 0x0CF0a },
    { L"PP 236P/28K/Outro Flash", 0x0CF0a, 0x0CF2a },
    { L"PP Select Portrait", 0x2CB4a, 0x2CB6a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"PP Win Portrait", 0x3170a, 0x317Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x0CF2a, 0x0CF4a, indexCPS2_Vamp_Gallon, 0 },
    { L"KK Intro/Outro", 0x0CF4a, 0x0CF6a },
    { L"KK 236P/41236KK/j.HP", 0x0CF6a, 0x0CF8a },
    { L"KK 236P/28K/Outro Flash", 0x0CF8a, 0x0CFAa },
    { L"KK Select Portrait", 0x2CD4a, 0x2CD6a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"KK Win Portrait", 0x321Aa, 0x3224a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x0CFAa, 0x0CFCa, indexCPS2_Vamp_Gallon, 0 },
    { L"AP Intro/Outro", 0x0CFCa, 0x0CFEa },
    { L"AP 236P/41236KK/j.HP", 0x0CFEa, 0x0D00a },
    { L"AP 236P/28K/Outro Flash", 0x0D00a, 0x0D02a },
    { L"AP Select Portrait", 0x2CF4a, 0x2CF6a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AP Win Portrait", 0x32C4a, 0x32CEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x0D02a, 0x0D04a, indexCPS2_Vamp_Gallon, 0 },
    { L"AK Intro/Outro", 0x0D04a, 0x0D06a },
    { L"AK 236P/41236KK/j.HP", 0x0D06a, 0x0D08a },
    { L"AK 236P/28K/Outro Flash", 0x0D08a, 0x0D0Aa },
    { L"AK Select Portrait", 0x2D14a, 0x2D16a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AK Win Portrait", 0x336Ea, 0x3378a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x0D0Aa, 0x0D0Ca, indexCPS2_Vamp_Victor, 0 },
    { L"LP Electric Flash", 0x0D10a, 0x0D12a, indexCPS2_Vamp_Victor, 0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x0D0Ca, 0x0D0Ea },
    { L"LP Electricity", 0x0D0Ea, 0x0D10a },
    { L"LP Intro", 0x01af4a, 0x01af6a, indexCPS2_Vamp_Victor },
    { L"LP Select Portrait", 0x2BF6a, 0x2BF8a, indexCPS2_Vamp_Victor, 0x20 },
    { L"LP Win Portrait", 0x2D7Ea, 0x2D88a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x0D12a, 0x0D14a, indexCPS2_Vamp_Victor, 0 },
    { L"MP Electric Flash", 0x0D18a, 0x0D1Aa, indexCPS2_Vamp_Victor, 0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x0D14a, 0x0D16a },
    { L"MP Electricity", 0x0D16a, 0x0D18a },
    { L"MP Intro", 0x01af6a, 0x01af8a, indexCPS2_Vamp_Victor },
    { L"MP Select Portrait", 0x2C16a, 0x2C18a, indexCPS2_Vamp_Victor, 0x20 },
    { L"MP Win Portrait", 0x2E28a, 0x2E32a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x0D1Aa, 0x0D1Ca, indexCPS2_Vamp_Victor, 0 },
    { L"HP Electric Flash", 0x0D20a, 0x0D22a, indexCPS2_Vamp_Victor, 0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x0D1Ca, 0x0D1Ea },
    { L"HP Electricity", 0x0D1Ea, 0x0D20a },
    { L"HP Intro", 0x01af8a, 0x01afaa, indexCPS2_Vamp_Victor },
    { L"HP Select Portrait", 0x2C36a, 0x2C38a, indexCPS2_Vamp_Victor, 0x20 },
    { L"HP Win Portrait", 0x2ED2a, 0x2EDCa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x0D22a, 0x0D24a, indexCPS2_Vamp_Victor, 0 },
    { L"LK Electric Flash", 0x0D28a, 0x0D2Aa, indexCPS2_Vamp_Victor, 0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x0D24a, 0x0D26a },
    { L"LK Electricity", 0x0D26a, 0x0D28a },
    { L"LK Intro", 0x01afaa, 0x01afca, indexCPS2_Vamp_Victor },
    { L"LK Select Portrait", 0x2C56a, 0x2C58a, indexCPS2_Vamp_Victor, 0x20 },
    { L"LK Win Portrait", 0x2F7Ca, 0x2F86a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x0D2Aa, 0x0D2Ca, indexCPS2_Vamp_Victor, 0 },
    { L"MK Electric Flash", 0x0D30a, 0x0D32a, indexCPS2_Vamp_Victor, 0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x0D2Ca, 0x0D2Ea },
    { L"MK Electricity", 0x0D2Ea, 0x0D30a },
    { L"MK Intro", 0x01afca, 0x01afea, indexCPS2_Vamp_Victor },
    { L"MK Select Portrait", 0x2C76a, 0x2C78a, indexCPS2_Vamp_Victor, 0x20 },
    { L"MK Win Portrait", 0x3026a, 0x3030a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x0D32a, 0x0D34a, indexCPS2_Vamp_Victor, 0 },
    { L"HK Electric Flash", 0x0D38a, 0x0D3Aa, indexCPS2_Vamp_Victor, 0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x0D34a, 0x0D36a },
    { L"HK Electricity", 0x0D36a, 0x0D38a },
    { L"HK Intro", 0x01afea, 0x01b00a, indexCPS2_Vamp_Victor },
    { L"HK Select Portrait", 0x2C96a, 0x2C98a, indexCPS2_Vamp_Victor, 0x20 },
    { L"HK Win Portrait", 0x30D0a, 0x30DAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x0D3Aa, 0x0D3Ca, indexCPS2_Vamp_Victor, 0 },
    { L"PP Electric Flash", 0x0D40a, 0x0D42a, indexCPS2_Vamp_Victor, 0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x0D3Ca, 0x0D3Ea },
    { L"PP Electricity", 0x0D3Ea, 0x0D40a },
    { L"PP Intro", 0x01b00a, 0x01b02a, indexCPS2_Vamp_Victor },
    { L"PP Select Portrait", 0x2CB6a, 0x2CB8a, indexCPS2_Vamp_Victor, 0x20 },
    { L"PP Win Portrait", 0x317Aa, 0x3184a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x0D42a, 0x0D44a, indexCPS2_Vamp_Victor, 0 },
    { L"KK Electric Flash", 0x0D48a, 0x0D4Aa, indexCPS2_Vamp_Victor, 0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x0D44a, 0x0D46a },
    { L"KK Electricity", 0x0D46a, 0x0D48a },
    { L"KK Intro", 0x01b02a, 0x01b04a, indexCPS2_Vamp_Victor },
    { L"KK Select Portrait", 0x2CD6a, 0x2CD8a, indexCPS2_Vamp_Victor, 0x20 },
    { L"KK Win Portrait", 0x3224a, 0x322Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x0D4Aa, 0x0D4Ca, indexCPS2_Vamp_Victor, 0 },
    { L"AP Electric Flash", 0x0D50a, 0x0D52a, indexCPS2_Vamp_Victor, 0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x0D4Ca, 0x0D4Ea },
    { L"AP Electricity", 0x0D4Ea, 0x0D50a },
    { L"AP Intro", 0x01b04a, 0x01b06a, indexCPS2_Vamp_Victor },
    { L"AP Select Portrait", 0x2CF6a, 0x2CF8a, indexCPS2_Vamp_Victor, 0x20 },
    { L"AP Win Portrait", 0x32CEa, 0x32D8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x0D52a, 0x0D54a, indexCPS2_Vamp_Victor, 0 },
    { L"AK Electric Flash", 0x0D58a, 0x0D5Aa, indexCPS2_Vamp_Victor, 0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x0D54a, 0x0D56a },
    { L"AK Electricity", 0x0D56a, 0x0D58a },
    { L"AK Intro", 0x01b06a, 0x01b08a, indexCPS2_Vamp_Victor },
    { L"AK Select Portrait", 0x2D16a, 0x2D18a, indexCPS2_Vamp_Victor, 0x20 },
    { L"AK Win Portrait", 0x3378a, 0x3382a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x0D5Aa, 0x0D5Ca, indexCPS2_Vamp_Zabel, 0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x0D5Ca, 0x0D5Ea },
    { L"LP Unused 1", 0x0D5Ea, 0x0D60a },
    { L"LP Unused 2", 0x0D60a, 0x0D62a },
    { L"LP Select Portrait", 0x2BF8a, 0x2BFAa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LP Win Portrait", 0x2D88a, 0x2D92a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x0D62a, 0x0D64a, indexCPS2_Vamp_Zabel, 0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x0D64a, 0x0D66a },
    { L"MP Unused 1", 0x0D66a, 0x0D68a },
    { L"MP Unused 2", 0x0D68a, 0x0D6Aa },
    { L"MP Select Portrait", 0x2C18a, 0x2C1Aa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MP Win Portrait", 0x2E32a, 0x2E3Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x0D6Aa, 0x0D6Ca, indexCPS2_Vamp_Zabel, 0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x0D6Ca, 0x0D6Ea },
    { L"HP Unused 1", 0x0D6Ea, 0x0D70a },
    { L"HP Unused 2", 0x0D70a, 0x0D72a },
    { L"HP Select Portrait", 0x2C38a, 0x2C3Aa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HP Win Portrait", 0x2EDCa, 0x2EE6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x0d72a, 0x0d74a, indexCPS2_Vamp_Zabel, 0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x0d74a, 0x0d76a },
    { L"LK Unused 1", 0x0d76a, 0x0d78a },
    { L"LK Unused 2", 0x0d78a, 0x0d7aa },
    { L"LK Select Portrait", 0x2C58a, 0x2C5Aa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LK Win Portrait", 0x2F86a, 0x2F90a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x0d7aa, 0x0d7ca, indexCPS2_Vamp_Zabel, 0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x0d7ca, 0x0d7ea },
    { L"MK Unused 1", 0x0d7ea, 0x0d80a },
    { L"MK Unused 2", 0x0d80a, 0x0d82a },
    { L"MK Select Portrait", 0x2C78a, 0x2C7Aa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MK Win Portrait", 0x3030a, 0x303Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x0d82a, 0x0d84a, indexCPS2_Vamp_Zabel, 0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x0d84a, 0x0d86a },
    { L"HK Unused 1", 0x0d86a, 0x0d88a },
    { L"HK Unused 2", 0x0d88a, 0x0d8aa },
    { L"HK Select Portrait", 0x2C98a, 0x2C9Aa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HK Win Portrait", 0x30DAa, 0x30E4a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x0d8aa, 0x0d8ca, indexCPS2_Vamp_Zabel, 0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x0d8ca, 0x0d8ea },
    { L"PP Unused 1", 0x0d8ea, 0x0d90a },
    { L"PP Unused 2", 0x0d90a, 0x0d92a },
    { L"PP Select Portrait", 0x2CB8a, 0x2CBAa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"PP Win Portrait", 0x3184a, 0x318Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x0d92a, 0x0d94a, indexCPS2_Vamp_Zabel, 0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x0d94a, 0x0d96a },
    { L"KK Unused 1", 0x0d96a, 0x0d98a },
    { L"KK Unused 2", 0x0d98a, 0x0d9aa },
    { L"KK Select Portrait", 0x2CD8a, 0x2CDAa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"KK Win Portrait", 0x322Ea, 0x3238a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x0d9aa, 0x0d9ca, indexCPS2_Vamp_Zabel, 0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x0d9ca, 0x0d9ea },
    { L"AP Unused 1", 0x0d9ea, 0x0da0a },
    { L"AP Unused 2", 0x0da0a, 0x0da2a },
    { L"AP Select Portrait", 0x2CF8a, 0x2CFAa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AP Win Portrait", 0x32D8a, 0x32E2a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x0da2a, 0x0da4a, indexCPS2_Vamp_Zabel, 0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x0da4a, 0x0da6a },
    { L"AK Unused 1", 0x0da6a, 0x0da8a },
    { L"AK Unused 2", 0x0da8a, 0x0daaa },
    { L"AK Select Portrait", 0x2D18a, 0x2D1Aa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AK Win Portrait", 0x3382a, 0x338Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x0daaa, 0x0daca, indexCPS2_Morrigan, 0x00 },
    { L"LP Idle sparkles/Raging demon", 0x0daca, 0x0daea, indexCPS2_Morrigan, 2 },
    { L"LP Bats", 0x0daea, 0x0db0a, indexCPS2_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x0db0a, 0x0db2a },
    { L"LP Select Portrait", 0x2BFAa, 0x2BFCa, indexCPS2_Morrigan, 0x20 },
    { L"LP Win Portrait", 0x2D92a, 0x2D9Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x0db2a, 0x0db4a, indexCPS2_Morrigan, 0x00 },
    { L"MP Idle sparkles/Raging demon", 0x0db4a, 0x0db6a, indexCPS2_Morrigan, 2 },
    { L"MP Bats", 0x0db6a, 0x0db8a, indexCPS2_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x0db8a, 0x0dbaa },
    { L"MP Select Portrait", 0x2C1Aa, 0x2C1Ca, indexCPS2_Morrigan, 0x20 },
    { L"MP Win Portrait", 0x2E3Ca, 0x2E46a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x0dbaa, 0x0dbca, indexCPS2_Morrigan, 0x00 },
    { L"HP Idle sparkles/Raging demon", 0x0dbca, 0x0dbea, indexCPS2_Morrigan, 2 },
    { L"HP Bats", 0x0dbea, 0x0dc0a, indexCPS2_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x0dc0a, 0x0dc2a },
    { L"HP Select Portrait", 0x2C3Aa, 0x2C3Ca, indexCPS2_Morrigan, 0x20 },
    { L"HP Win Portrait", 0x2EE6a, 0x2EF0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x0dc2a, 0x0dc4a, indexCPS2_Morrigan, 0x00 },
    { L"LK Idle sparkles/Raging demon", 0x0dc4a, 0x0dc6a, indexCPS2_Morrigan, 2 },
    { L"LK Bats", 0x0dc6a, 0x0dc8a, indexCPS2_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x0dc8a, 0x0dcaa },
    { L"LK Select Portrait", 0x2C5Aa, 0x2C5Ca, indexCPS2_Morrigan, 0x20 },
    { L"LK Win Portrait", 0x2F90a, 0x2F9Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x0dcaa, 0x0dcca, indexCPS2_Morrigan, 0x00 },
    { L"MK Idle sparkles/Raging demon", 0x0dcca, 0x0dcea, indexCPS2_Morrigan, 2 },
    { L"MK Bats", 0x0dcea, 0x0dd0a, indexCPS2_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x0dd0a, 0x0dd2a },
    { L"MK Select Portrait", 0x2C7Aa, 0x2C7Ca, indexCPS2_Morrigan, 0x20 },
    { L"MK Win Portrait", 0x303Aa, 0x3044a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x0dd2a, 0x0dd4a, indexCPS2_Morrigan, 0x00 },
    { L"HK Idle sparkles/Raging demon", 0x0dd4a, 0x0dd6a, indexCPS2_Morrigan, 2 },
    { L"HK Bats", 0x0dd6a, 0x0dd8a, indexCPS2_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x0dd8a, 0x0ddaa },
    { L"HK Select Portrait", 0x2C9Aa, 0x2C9Ca, indexCPS2_Morrigan, 0x20 },
    { L"HK Win Portrait", 0x30E4a, 0x30EEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x0ddaa, 0x0ddca, indexCPS2_Morrigan, 0x00 },
    { L"PP Idle sparkles/Raging demon", 0x0ddca, 0x0ddea, indexCPS2_Morrigan, 2 },
    { L"PP Bats", 0x0ddea, 0x0de0a, indexCPS2_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x0de0a, 0x0de2a },
    { L"PP Select Portrait", 0x2CBAa, 0x2CBCa, indexCPS2_Morrigan, 0x20 },
    { L"PP Win Portrait", 0x318Ea, 0x3198a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x0de2a, 0x0de4a, indexCPS2_Morrigan, 0x00 },
    { L"KK Idle sparkles/Raging demon", 0x0de4a, 0x0de6a, indexCPS2_Morrigan, 2 },
    { L"KK Bats", 0x0de6a, 0x0de8a, indexCPS2_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x0de8a, 0x0deaa },
    { L"KK Select Portrait", 0x2CDAa, 0x2CDCa, indexCPS2_Morrigan, 0x20 },
    { L"KK Win Portrait", 0x3238a, 0x3242a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x0deaa, 0x0deca, indexCPS2_Morrigan, 0x00 },
    { L"AP Idle sparkles/Raging demon", 0x0deca, 0x0deea, indexCPS2_Morrigan, 2 },
    { L"AP Bats", 0x0deea, 0x0df0a, indexCPS2_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x0df0a, 0x0df2a },
    { L"AP Select Portrait", 0x2CFAa, 0x2CFCa, indexCPS2_Morrigan, 0x20 },
    { L"AP Win Portrait", 0x32E2a, 0x32ECa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x0df2a, 0x0df4a, indexCPS2_Morrigan, 0x00 },
    { L"AK Idle sparkles/Raging demon", 0x0df4a, 0x0df6a, indexCPS2_Morrigan, 2 },
    { L"AK Bats", 0x0df6a, 0x0df8a, indexCPS2_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x0df8a, 0x0dfaa },
    { L"AK Select Portrait", 0x2D1Aa, 0x2D1Ca, indexCPS2_Morrigan, 0x20 },
    { L"AK Win Portrait", 0x338Ca, 0x3396a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Fireball 1/3", 0x01b18a, 0x01b1aa },
    { L"Fireball 2/3", 0x01b1aa, 0x01b1ca },
    { L"Fireball 3/3", 0x01b1ca, 0x01b1ea },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x0dfaa, 0x0dfca, indexCPS2_Anakaris, 0 },
    { L"LP 2.HP/Mummies", 0x0dfea, 0x0e00a, indexCPS2_Anakaris, 2 },
    { L"LP 426KK/62KK Light", 0x0dfca, 0x0dfea, indexCPS2_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x0e00a, 0x0e02a, indexCPS2_Anakaris, 0x0a },
    { L"LP Select Portrait", 0x2BFCa, 0x2BFEa, indexCPS2_Anakaris, 0x20 },
    { L"LP Win Portrait", 0x2D9Ca, 0x2DA6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x0e02a, 0x0e04a, indexCPS2_Anakaris, 0 },
    { L"MP 2.HP/Mummies", 0x0e06a, 0x0e08a, indexCPS2_Anakaris, 2 },
    { L"MP 426KK/62KK Light", 0x0e04a, 0x0e06a, indexCPS2_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x0e08a, 0x0e0aa, indexCPS2_Anakaris, 0x0a },
    { L"MP Select Portrait", 0x2C1Ca, 0x2C1Ea, indexCPS2_Anakaris, 0x20 },
    { L"MP Win Portrait", 0x2E46a, 0x2E50a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x0e0aa, 0x0e0ca, indexCPS2_Anakaris, 0 },
    { L"HP 2.HP/Mummies", 0x0e0ea, 0x0e10a, indexCPS2_Anakaris, 2 },
    { L"HP 426KK/62KK Light", 0x0e0ca, 0x0e0ea, indexCPS2_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x0e10a, 0x0e12a, indexCPS2_Anakaris, 0x0a },
    { L"HP Select Portrait", 0x2C3Ca, 0x2C3Ea, indexCPS2_Anakaris, 0x20 },
    { L"HP Win Portrait", 0x2EF0a, 0x2EFAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x0e12a, 0x0e14a, indexCPS2_Anakaris, 0 },
    { L"LK 2.HP/Mummies", 0x0e16a, 0x0e18a, indexCPS2_Anakaris, 2 },
    { L"LK 426KK/62KK Light", 0x0e14a, 0x0e16a, indexCPS2_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x0e18a, 0x0e1aa, indexCPS2_Anakaris, 0x0a },
    { L"LK Select Portrait", 0x2C5Ca, 0x2C5Ea, indexCPS2_Anakaris, 0x20 },
    { L"LK Win Portrait", 0x2F9Aa, 0x2FA4a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x0e1aa, 0x0e1ca, indexCPS2_Anakaris, 0 },
    { L"MK 2.HP/Mummies", 0x0e1ea, 0x0e20a, indexCPS2_Anakaris, 2 },
    { L"MK 426KK/62KK Light", 0x0e1ca, 0x0e1ea, indexCPS2_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x0e20a, 0x0e22a, indexCPS2_Anakaris, 0x0a },
    { L"MK Select Portrait", 0x2C7Ca, 0x2C7Ea, indexCPS2_Anakaris, 0x20 },
    { L"MK Win Portrait", 0x3044a, 0x304Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x0e22a, 0x0e24a, indexCPS2_Anakaris, 0 },
    { L"HK 2.HP/Mummies", 0x0e26a, 0x0e28a, indexCPS2_Anakaris, 2 },
    { L"HK 426KK/62KK Light", 0x0e24a, 0x0e26a, indexCPS2_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x0e28a, 0x0e2aa, indexCPS2_Anakaris, 0x0a },
    { L"HK Select Portrait", 0x2C9Ca, 0x2C9Ea, indexCPS2_Anakaris, 0x20 },
    { L"HK Win Portrait", 0x30EEa, 0x30F8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x0e2aa, 0x0e2ca, indexCPS2_Anakaris, 0 },
    { L"PP 2.HP/Mummies", 0x0e2ea, 0x0e30a, indexCPS2_Anakaris, 2 },
    { L"PP 426KK/62KK Light", 0x0e2ca, 0x0e2ea, indexCPS2_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x0e30a, 0x0e32a, indexCPS2_Anakaris, 0x0a },
    { L"PP Select Portrait", 0x2CBCa, 0x2CBEa, indexCPS2_Anakaris, 0x20 },
    { L"PP Win Portrait", 0x3198a, 0x31A2a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x0e32a, 0x0e34a, indexCPS2_Anakaris, 0 },
    { L"KK 2.HP/Mummies", 0x0e36a, 0x0e38a, indexCPS2_Anakaris, 2 },
    { L"KK 426KK/62KK Light", 0x0e34a, 0x0e36a, indexCPS2_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x0e38a, 0x0e3aa, indexCPS2_Anakaris, 0x0a },
    { L"KK Select Portrait", 0x2CDCa, 0x2CDEa, indexCPS2_Anakaris, 0x20 },
    { L"KK Win Portrait", 0x3242a, 0x324Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x0e3aa, 0x0e3ca, indexCPS2_Anakaris, 0 },
    { L"AP 2.HP/Mummies", 0x0e3ea, 0x0e40a, indexCPS2_Anakaris, 2 },
    { L"AP 426KK/62KK Light", 0x0e3ca, 0x0e3ea, indexCPS2_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x0e40a, 0x0e42a, indexCPS2_Anakaris, 0x0a },
    { L"AP Select Portrait", 0x2CFCa, 0x2CFEa, indexCPS2_Anakaris, 0x20 },
    { L"AP Win Portrait", 0x32ECa, 0x32F6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x0e42a, 0x0e44a, indexCPS2_Anakaris, 0 },
    { L"AK 2.HP/Mummies", 0x0e46a, 0x0e48a, indexCPS2_Anakaris, 2 },
    { L"AK 426KK/62KK Light", 0x0e44a, 0x0e46a, indexCPS2_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x0e48a, 0x0e4aa, indexCPS2_Anakaris, 0x0a },
    { L"AK Select Portrait", 0x2D1Ca, 0x2D1Ea, indexCPS2_Anakaris, 0x20 },
    { L"AK Win Portrait", 0x3396a, 0x33A0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Anakaris Pharaoh Magic Orbs 2", 0x1b2e0 - 0xf6, 0x1b320 - 0xf6, indexCPS2_Anakaris, 0x0b, &pairNext2 },
    { L"Anakaris Pharaoh Asteroids",    0x1b320 - 0xf6, 0x1b340 - 0xf6, indexCPS2_Anakaris, 0x08 },
    { L"Anakaris Pharaoh Magic Orbs 3", 0x1b340 - 0xf6, 0x1b360 - 0xf6, indexCPS2_Anakaris, 0x0e },
    { L"Anakaris Pharaoh Girls/Mini Mummy LP",        0x1b360 - 0xf6, 0x1b3a0 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MP",        0x1b3a0 - 0xf6, 0x1b3e0 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HP",        0x1b3e0 - 0xf6, 0x1b420 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy LK",        0x1b420 - 0xf6, 0x1b460 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MK",        0x1b460 - 0xf6, 0x1b4a0 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HK",        0x1b4a0 - 0xf6, 0x1b4e0 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy PP",        0x1b4e0 - 0xf6, 0x1b520 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy KK",        0x1b520 - 0xf6, 0x1b560 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AP",        0x1b560 - 0xf6, 0x1b5a0 - 0xf6, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AK",        0x1b5a0 - 0xf6, 0x1b5e0 - 0xf6, indexCPS2_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x0e4aa, 0x0e4ca, indexCPS2_Felicia, 0 },
    { L"LP Helpers/Mouse", 0x0e4ca, 0x0e4ea, indexCPS2_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x0e4ea, 0x0e50a, indexCPS2_Felicia, 0x01 },
    { L"LP Unknown Extra", 0x0e50a, 0x0e52a },
    { L"LP Select portrait", 0x2BFEa, 0x2C00a, indexCPS2_Felicia, 0x20 },
    { L"LP Win Portrait", 0x2DA6a, 0x2DB0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x0e52a, 0x0e54a, indexCPS2_Felicia, 0 },
    { L"MP Helpers/Mouse", 0x0e54a, 0x0e56a, indexCPS2_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x0e56a, 0x0e58a, indexCPS2_Felicia, 0x01 },
    { L"MP Unknown Extra", 0x0e58a, 0x0e5aa },
    { L"MP Select Portrait", 0x2C1Ea, 0x2C20a, indexCPS2_Felicia, 0x20 },
    { L"MP Win Portrait", 0x2E50a, 0x2E5Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x0e5aa, 0x0e5ca, indexCPS2_Felicia, 0 },
    { L"HP Helpers/Mouse", 0x0e5ca, 0x0e5ea, indexCPS2_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x0e5ea, 0x0e60a, indexCPS2_Felicia, 0x01 },
    { L"HP Unknown Extra", 0x0e60a, 0x0e62a },
    { L"HP Select Portrait", 0x2C3Ea, 0x2C40a, indexCPS2_Felicia, 0x20 },
    { L"HP Win Portrait", 0x2EFAa, 0x2F04a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x0e62a, 0x0e64a, indexCPS2_Felicia, 0 },
    { L"LK Helpers/Mouse", 0x0e64a, 0x0e66a, indexCPS2_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x0e66a, 0x0e68a, indexCPS2_Felicia, 0x01 },
    { L"LK Unknown Extra", 0x0e68a, 0x0e6aa },
    { L"LK Select Portrait", 0x2C5Ea, 0x2C60a, indexCPS2_Felicia, 0x20 },
    { L"LK Win Portrait", 0x2FA4a, 0x2FAEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x0e6aa, 0x0e6ca, indexCPS2_Felicia, 0 },
    { L"MK Helpers/Mouse", 0x0e6ca, 0x0e6ea, indexCPS2_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x0e6ea, 0x0e70a, indexCPS2_Felicia, 0x01 },
    { L"MK Unknown Extra", 0x0e70a, 0x0e72a },
    { L"MK Select Portrait", 0x2C7Ea, 0x2C80a, indexCPS2_Felicia, 0x20 },
    { L"MK Win Portrait", 0x304Ea, 0x3058a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x0e72a, 0x0e74a, indexCPS2_Felicia, 0 },
    { L"HK Helpers/Mouse", 0x0e74a, 0x0e76a, indexCPS2_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x0e76a, 0x0e78a, indexCPS2_Felicia, 0x01 },
    { L"HK Unknown Extra", 0x0e78a, 0x0e7aa },
    { L"HK Select Portrait", 0x2C9Ea, 0x2CA0a, indexCPS2_Felicia, 0x20 },
    { L"HK Win Portrait", 0x30F8a, 0x3102a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x0e7aa, 0x0e7ca, indexCPS2_Felicia, 0 },
    { L"PP Helpers/Mouse", 0x0e7ca, 0x0e7ea, indexCPS2_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x0e7ea, 0x0e80a, indexCPS2_Felicia, 0x01 },
    { L"PP Unknown Extra", 0x0e80a, 0x0e82a },
    { L"PP Select Portrait", 0x2CBEa, 0x2CC0a, indexCPS2_Felicia, 0x20 },
    { L"PP Win Portrait", 0x31A2a, 0x31ACa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x0e82a, 0x0e84a, indexCPS2_Felicia, 0 },
    { L"KK Helpers/Mouse", 0x0e84a, 0x0e86a, indexCPS2_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x0e86a, 0x0e88a, indexCPS2_Felicia, 0x01 },
    { L"KK Unknown Extra", 0x0e88a, 0x0e8aa },
    { L"KK Select Portrait", 0x2CDEa, 0x2CE0a, indexCPS2_Felicia, 0x20 },
    { L"KK Win Portrait", 0x324Ca, 0x3256a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x0e8aa, 0x0e8ca, indexCPS2_Felicia, 0 },
    { L"AP Helpers/Mouse", 0x0e8ca, 0x0e8ea, indexCPS2_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x0e8ea, 0x0e90a, indexCPS2_Felicia, 0x01 },
    { L"AP Unknown Extra", 0x0e90a, 0x0e92a },
    { L"AP Select Portrait", 0x2CFEa, 0x2D00a, indexCPS2_Felicia, 0x20 },
    { L"AP Win Portrait", 0x32F6a, 0x3300a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x0e92a, 0x0e94a, indexCPS2_Felicia, 0 },
    { L"AK Helpers/Mouse", 0x0e94a, 0x0e96a, indexCPS2_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x0e96a, 0x0e98a, indexCPS2_Felicia, 0x01 },
    { L"AK Unknown Extra", 0x0e98a, 0x0e9aa },
    { L"AK Select Portrait", 0x2D1Ea, 0x2D20a, indexCPS2_Felicia, 0x20 },
    { L"AK Win Portrait", 0x33A0a, 0x33AAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x0e9aa, 0x0e9ca, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Ghosts/Hitsparks", 0x0e9ea, 0x0ea0a },
    { L"LP 41236KK", 0x0e9ca, 0x0e9ea, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Unknown Extra", 0x0ea0a, 0x0ea2a },
    { L"LP Select Portrait", 0x2C00a, 0x2C02a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x2DB0a, 0x2DBAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x0ea2a, 0x0ea4a, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Ghosts/Hitsparks", 0x0ea6a, 0x0ea8a },
    { L"MP 41236KK", 0x0ea4a, 0x0ea6a, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Unknown Extra", 0x0ea8a, 0x0eaaa },
    { L"MP Select Portrait", 0x2C20a, 0x2C22a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x2E5Aa, 0x2E64a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x0eaaa, 0x0eaca, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Ghosts/Hitsparks", 0x0eaea, 0x0eb0a },
    { L"HP 41236KK", 0x0eaca, 0x0eaea, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Unknown Extra", 0x0eb0a, 0x0eb2a },
    { L"HP Select Portrait", 0x2C40a, 0x2C42a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x2F04a, 0x2F0Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x0eb2a, 0x0eb4a, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Ghosts/Hitsparks", 0x0eb6a, 0x0eb8a },
    { L"LK 41236KK", 0x0eb4a, 0x0eb6a, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Unknown Extra", 0x0eb8a, 0x0ebaa },
    { L"LK Select Portrait", 0x2C60a, 0x2C62a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x2FAEa, 0x2FB8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x0ebaa, 0x0ebca, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Ghosts/Hitsparks", 0x0ebea, 0x0ec0a },
    { L"MK 41236KK", 0x0ebca, 0x0ebea, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Unknown Extra", 0x0ec0a, 0x0ec2a },
    { L"MK Select Portrait", 0x2C80a, 0x2C82a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x3058a, 0x3062a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x0ec2a, 0x0ec4a, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Ghosts/Hitsparks", 0x0ec6a, 0x0ec8a },
    { L"HK 41236KK", 0x0ec4a, 0x0ec6a, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Unknown Extra", 0x0ec8a, 0x0ecaa },
    { L"HK Select Portrait", 0x2CA0a, 0x2CA2a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x3102a, 0x310Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x0ecaa, 0x0ecca, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Ghosts/Hitsparks", 0x0ecea, 0x0ed0a },
    { L"PP 41236KK", 0x0ecca, 0x0ecea, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Unknown Extra", 0x0ed0a, 0x0ed2a },
    { L"PP Select Portrait", 0x2CC0a, 0x2CC2a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"PP Win Portrait", 0x31ACa, 0x31B6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x0ed2a, 0x0ed4a, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Ghosts/Hitsparks", 0x0ed6a, 0x0ed8a },
    { L"KK 41236KK", 0x0ed4a, 0x0ed6a, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Unknown Extra", 0x0ed8a, 0x0edaa },
    { L"KK Select Portrait", 0x2CE0a, 0x2CE2a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"KK Win Portrait", 0x3256a, 0x3260a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x0edaa, 0x0edca, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Ghosts/Hitsparks", 0x0edea, 0x0ee0a },
    { L"AP 41236KK", 0x0edca, 0x0edea, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Unknown Extra", 0x0ee0a, 0x0ee2a },
    { L"AP Select Portrait", 0x2D00a, 0x2D02a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AP Win Portrait", 0x3300a, 0x330Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x0ee2a, 0x0ee4a, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Ghosts/Hitsparks", 0x0ee6a, 0x0ee8a },
    { L"AK 41236KK", 0x0ee4a, 0x0ee6a, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Unknown Extra", 0x0ee8a, 0x0eeaa },
    { L"AK Select Portrait", 0x2D20a, 0x2D22a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AK Win Portrait", 0x33AAa, 0x33B4a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x0eeaa, 0x0eeca, indexCPS2_Vamp_Aulbath, 0 },
    { L"LP Water/s.MK/j.MP", 0x0eeca, 0x0eeea },
    { L"LP Poison Cloud", 0x0ef0a, 0x0ef2a },
    { L"LP Mach Crab (not full pal)", 0x0eeea, 0x0ef0a },
    { L"LP Gem's Anger", 0x01b6ea, 0x01b70a },
    { L"LP Select Portrait", 0x2C02a, 0x2C04a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LP Win Portrait", 0x2DBAa, 0x2DC4a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x0ef2a, 0x0ef4a, indexCPS2_Vamp_Aulbath, 0 },
    { L"MP Water/s.MK/j.MP", 0x0ef4a, 0x0ef6a },
    { L"MP Poison Cloud", 0x0ef8a, 0x0efaa },
    { L"MP Mach Crab (not full pal)", 0x0ef6a, 0x0ef8a },
    { L"MP Gem's Anger", 0x01b70a, 0x01b72a },
    { L"MP Select Portrait", 0x2C22a, 0x2C24a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MP Win Portrait", 0x2E64a, 0x2E6Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x0efaa, 0x0efca, indexCPS2_Vamp_Aulbath, 0 },
    { L"HP Water/s.MK/j.MP", 0x0efca, 0x0efea },
    { L"HP Poison Cloud", 0x0f00a, 0x0f02a },
    { L"HP Mach Crab (not full pal)", 0x0efea, 0x0f00a },
    { L"HP Gem's Anger", 0x01b72a, 0x01b74a },
    { L"HP Select Portrait", 0x2C42a, 0x2C44a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HP Win Portrait", 0x2F0Ea, 0x2F18a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x0f02a, 0x0f04a, indexCPS2_Vamp_Aulbath, 0 },
    { L"LK Water/s.MK/j.MP", 0x0f04a, 0x0f06a },
    { L"LK Poison Cloud", 0x0f08a, 0x0f0aa },
    { L"LK Mach Crab (not full pal)", 0x0f06a, 0x0f08a },
    { L"LK Gem's Anger", 0x01b74a, 0x01b76a },
    { L"LK Select Portrait", 0x2C62a, 0x2C64a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LK Win Portrait", 0x2FB8a, 0x2FC2a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x0f0aa, 0x0f0ca, indexCPS2_Vamp_Aulbath, 0 },
    { L"MK Water/s.MK/j.MP", 0x0f0ca, 0x0f0ea },
    { L"MK Poison Cloud", 0x0f10a, 0x0f12a },
    { L"MK Mach Crab (not full pal)", 0x0f0ea, 0x0f10a },
    { L"MK Gem's Anger", 0x01b76a, 0x01b78a },
    { L"MK Select Portrait", 0x2C82a, 0x2C84a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MK Win Portrait", 0x3062a, 0x306Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x0f12a, 0x0f14a, indexCPS2_Vamp_Aulbath, 0 },
    { L"HK Water/s.MK/j.MP", 0x0f14a, 0x0f16a },
    { L"HK Poison Cloud", 0x0f18a, 0x0f1aa },
    { L"HK Mach Crab (not full pal)", 0x0f16a, 0x0f18a },
    { L"HK Gem's Anger", 0x01b78a, 0x01b7aa },
    { L"HK Select Portrait", 0x2CA2a, 0x2CA4a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HK Win Portrait", 0x310Ca, 0x3116a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x0f1aa, 0x0f1ca, indexCPS2_Vamp_Aulbath, 0 },
    { L"PP Poison Cloud", 0x0f20a, 0x0f22a },
    { L"PP Water/s.MK/j.MP", 0x0f1ca, 0x0f1ea },
    { L"PP Mach Crab (not full pal)", 0x0f1ea, 0x0f20a },
    { L"PP Gem's Anger", 0x01b7aa, 0x01b7ca },
    { L"PP Select Portrait", 0x2CC2a, 0x2CC4a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"PP Win Portrait", 0x31B6a, 0x31C0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x0f22a, 0x0f24a, indexCPS2_Vamp_Aulbath, 0 },
    { L"KK Water/s.MK/j.MP", 0x0f24a, 0x0f26a },
    { L"KK Poison Cloud", 0x0f28a, 0x0f2aa },
    { L"KK Mach Crab (not full pal)", 0x0f26a, 0x0f28a },
    { L"KK Gem's Anger", 0x01b7ca, 0x01b7ea },
    { L"KK Select Portrait", 0x2CE2a, 0x2CE4a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"KK Win Portrait", 0x3260a, 0x326Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x0f2aa, 0x0f2ca, indexCPS2_Vamp_Aulbath, 0 },
    { L"AP Water/s.MK/j.MP", 0x0f2ca, 0x0f2ea },
    { L"AP Poison Cloud", 0x0f30a, 0x0f32a },
    { L"AP Mach Crab (not full pal)", 0x0f2ea, 0x0f30a },
    { L"AP Gem's Anger", 0x01b7ea, 0x01b80a },
    { L"AP Select Portrait", 0x2D02a, 0x2D04a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AP Win Portrait", 0x330Aa, 0x3314a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x0f32a, 0x0f34a, indexCPS2_Vamp_Aulbath, 0 },
    { L"AK Water/s.MK/j.MP", 0x0f34a, 0x0f36a },
    { L"AK Poison Cloud", 0x0f38a, 0x0f3aa },
    { L"AK Mach Crab (not full pal)", 0x0f36a, 0x0f38a },
    { L"AK Gem's Anger", 0x01b80a, 0x01b82a, indexCPS2_Vamp_Aulbath, 0 },
    { L"AK Select Portrait", 0x2D22a, 0x2D24a, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AK Win Portrait", 0x33B4a, 0x33BEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x0f3aa, 0x0f3ca, indexCPS2_Vamp_Sasquatch, 0 },
    { L"LP Ice Extras", 0x0f40a, 0x0f42a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x0f3ca, 0x0f3ea, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x0f3ea, 0x0f40a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LP Select Portrait", 0x2C04a, 0x2C06a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LP Win Portrait", 0x2DC4a, 0x2DCEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x0f42a, 0x0f44a, indexCPS2_Vamp_Sasquatch, 0 },
    { L"MP Ice Extras", 0x0f48a, 0x0f4aa, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x0f44a, 0x0f46a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x0f46a, 0x0f48a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MP Select Portrait", 0x2C24a, 0x2C26a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MP Win Portrait", 0x2E6Ea, 0x2E78a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x0f4aa, 0x0f4ca, indexCPS2_Vamp_Sasquatch, 0 },
    { L"HP Ice Extras", 0x0f50a, 0x0f52a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x0f4ca, 0x0f4ea, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x0f4ea, 0x0f50a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HP Select Portrait", 0x2C44a, 0x2C46a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HP Win Portrait", 0x2F18a, 0x2F22a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x0f52a, 0x0f54a, indexCPS2_Vamp_Sasquatch, 0 },
    { L"LK Ice Extras", 0x0f58a, 0x0f5aa, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x0f54a, 0x0f56a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x0f56a, 0x0f58a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LK Select Portrait", 0x2C64a, 0x2C66a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LK Win Portrait", 0x2FC2a, 0x2FCCa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x0f5aa, 0x0f5ca, indexCPS2_Vamp_Sasquatch, 0 },
    { L"MK Ice Extras", 0x0f60a, 0x0f62a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x0f5ca, 0x0f5ea, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x0f5ea, 0x0f60a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MK Select Portrait", 0x2C84a, 0x2C86a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MK Win Portrait", 0x306Ca, 0x3076a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x0f62a, 0x0f64a, indexCPS2_Vamp_Sasquatch, 0 },
    { L"HK Ice Extras", 0x0f68a, 0x0f6aa, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x0f64a, 0x0f66a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x0f66a, 0x0f68a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HK Select Portrait", 0x2A84a, 0x2A86a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HK Win Portrait", 0x3116a, 0x3120a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x0f6aa, 0x0f6ca, indexCPS2_Vamp_Sasquatch, 0 },
    { L"PP Ice Extras", 0x0f70a, 0x0f72a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x0f6ca, 0x0f6ea, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x0f6ea, 0x0f70a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"PP Select Portrait", 0x2CC4a, 0x2CC6a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"PP Win Portrait", 0x31C0a, 0x31CAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x0f72a, 0x0f74a, indexCPS2_Vamp_Sasquatch, 0 },
    { L"KK Ice Extras", 0x0f78a, 0x0f7aa, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x0f74a, 0x0f76a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x0f76a, 0x0f78a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"KK Select Portrait", 0x2CE4a, 0x2CE6a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"KK Win Portrait", 0x326Aa, 0x3274a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x0f7aa, 0x0f7ca, indexCPS2_Vamp_Sasquatch, 0 },
    { L"AP Ice Extras", 0x0f80a, 0x0f82a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x0f7ca, 0x0f7ea, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x0f7ea, 0x0f80a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AP Select Portrait", 0x2D04a, 0x2D06a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AP Win Portrait", 0x3314a, 0x331Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x0f82a, 0x0f84a, indexCPS2_Vamp_Sasquatch, 0 },
    { L"AK Ice Extras", 0x0f88a, 0x0f8aa, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x0f84a, 0x0f86a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x0f86a, 0x0f88a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AK Select Portrait", 0x2D24a, 0x2D26a, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AK Win Portrait", 0x33BEa, 0x33C8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x0fcaa, 0x0fcca, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"LP Wings/Honey", 0x0fcca, 0x0fcea, indexCPS2_Vamp_QBee, 1 },
    { L"LP Wings/Honey frame 2", 0x1ec6a, 0x1ec8a, indexCPS2_Vamp_QBee, 1 },
    { L"LP Bees", 0x0fd0a, 0x0fd2a },
    { L"LP Egg", 0x0fcea, 0x0fd0a },
    { L"LP Intro/ES 412PP 1", 0x1bf8a, 0x1bfaa, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 2", 0x1bfca, 0x1bfea, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 3", 0x1c00a, 0x1c02a, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 4", 0x1c04a, 0x1c06a, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 5", 0x1c08a, 0x1c0aa, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 6", 0x1c0ca, 0x1c0ea, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 7", 0x1c10a, 0x1c12a, indexCPS2_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 8", 0x1c14a, 0x1c16a, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 1/7", 0x01e16a, 0x01e18a, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 2/7", 0x01e18a, 0x01e1aa, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 3/7", 0x01e1aa, 0x01e1ca, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 4/7", 0x01e1ca, 0x01e1ea, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 5/7", 0x01e1ea, 0x01e20a, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 6/7", 0x01e20a, 0x01e22a, indexCPS2_Vamp_QBee, 0 },
    { L"LP C-R 7/7", 0x01e22a, 0x01e24a, indexCPS2_Vamp_QBee, 0 },
    { L"LP Select Portrait", 0x2C08a, 0x2C0Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"LP Win Portrait", 0x2DD8a, 0x2DE2a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x0fd2a, 0x0fd4a, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"MP Wings/Honey", 0x0fd4a, 0x0fd6a, indexCPS2_Vamp_QBee, 1 },
    { L"MP Wings/Honey frame 2", 0x1ec8a, 0x1ecaa, indexCPS2_Vamp_QBee, 1 },
    { L"MP Bees", 0x0fd8a, 0x0fdaa },
    { L"MP Egg", 0x0fd6a, 0x0fd8a },
    { L"MP Intro/ES 412PP 1", 0x1c18a, 0x1c1aa, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 2", 0x1c1ca, 0x1c1ea, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 3", 0x1c20a, 0x1c22a, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 4", 0x1c24a, 0x1c26a, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 5", 0x1c28a, 0x1c2aa, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 6", 0x1c2ca, 0x1c2ea, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 7", 0x1c30a, 0x1c32a, indexCPS2_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 8", 0x1c34a, 0x1c36a, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 1/7", 0x01e28a, 0x01e2aa, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 2/7", 0x01e2aa, 0x01e2ca, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 3/7", 0x01e2ca, 0x01e2ea, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 4/7", 0x01e2ea, 0x01e30a, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 5/7", 0x01e30a, 0x01e32a, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 6/7", 0x01e32a, 0x01e34a, indexCPS2_Vamp_QBee, 0 },
    { L"MP C-R 7/7", 0x01e34a, 0x01e36a, indexCPS2_Vamp_QBee, 0 },
    { L"MP Select Portrait", 0x2C28a, 0x2C2Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"MP Win Portrait", 0x2E82a, 0x2E8Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x0fdaa, 0x0fdca, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"HP Wings/Honey", 0x0fdca, 0x0fdea, indexCPS2_Vamp_QBee, 1 },
    { L"HP Wings/Honey frame 2", 0x1ecaa, 0x1ecca, indexCPS2_Vamp_QBee, 1 },
    { L"HP Bees", 0x0fe0a, 0x0fe2a },
    { L"HP Egg", 0x0fdea, 0x0fe0a },
    { L"HP Intro/ES 412PP 1", 0x1c38a, 0x1c3aa, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 2", 0x1c3ca, 0x1c3ea, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 3", 0x1c40a, 0x1c42a, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 4", 0x1c44a, 0x1c46a, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 5", 0x1c48a, 0x1c4aa, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 6", 0x1c4ca, 0x1c4ea, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 7", 0x1c50a, 0x1c52a, indexCPS2_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 8", 0x1c54a, 0x1c56a, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 1/7", 0x01e3aa, 0x01e3ca, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 2/7", 0x01e3ca, 0x01e3ea, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 3/7", 0x01e3ea, 0x01e40a, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 4/7", 0x01e40a, 0x01e42a, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 5/7", 0x01e42a, 0x01e44a, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 6/7", 0x01e44a, 0x01e46a, indexCPS2_Vamp_QBee, 0 },
    { L"HP C-R 7/7", 0x01e46a, 0x01e48a, indexCPS2_Vamp_QBee, 0 },
    { L"HP Select Portrait", 0x2C48a, 0x2C4Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"HP Win Portrait", 0x2F2Ca, 0x2F36a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x0fe2a, 0x0fe4a, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"LK Wings/Honey", 0x0fe4a, 0x0fe6a, indexCPS2_Vamp_QBee, 1 },
    { L"LK Wings/Honey frame 2", 0x1ecca, 0x1ecea, indexCPS2_Vamp_QBee, 1 },
    { L"LK Bees", 0x0fe8a, 0x0feaa },
    { L"LK Egg", 0x0fe6a, 0x0fe8a },
    { L"LK Intro/ES 412PP 1", 0x1c58a, 0x1c5aa, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 2", 0x1c5ca, 0x1c5ea, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 3", 0x1c60a, 0x1c62a, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 4", 0x1c64a, 0x1c66a, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 5", 0x1c68a, 0x1c6aa, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 6", 0x1c6ca, 0x1c6ea, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 7", 0x1c70a, 0x1c72a, indexCPS2_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 8", 0x1c74a, 0x1c76a, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 1/7", 0x01e4ca, 0x01e4ea, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 2/7", 0x01e4ea, 0x01e50a, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 3/7", 0x01e50a, 0x01e52a, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 4/7", 0x01e52a, 0x01e54a, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 5/7", 0x01e54a, 0x01e56a, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 6/7", 0x01e56a, 0x01e58a, indexCPS2_Vamp_QBee, 0 },
    { L"LK C-R 7/7", 0x01e58a, 0x01e5aa, indexCPS2_Vamp_QBee, 0 },
    { L"LK Select Portrait", 0x2C68a, 0x2C6Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"LK Win Portrait", 0x2FD6a, 0x2FE0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x0feaa, 0x0feca, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"MK Wings/Honey", 0x0feca, 0x0feea, indexCPS2_Vamp_QBee, 1 },
    { L"MK Wings/Honey frame 2", 0x1ecea, 0x1ed0a, indexCPS2_Vamp_QBee, 1 },
    { L"MK Bees", 0x0ff0a, 0x0ff2a },
    { L"MK Egg", 0x0feea, 0x0ff0a },
    { L"MK Intro/ES 412PP 1", 0x1c78a, 0x1c7aa, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 2", 0x1c7ca, 0x1c7ea, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 3", 0x1c80a, 0x1c82a, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 4", 0x1c84a, 0x1c86a, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 5", 0x1c88a, 0x1c8aa, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 6", 0x1c8ca, 0x1c8ea, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 7", 0x1c90a, 0x1c92a, indexCPS2_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 8", 0x1c94a, 0x1c96a, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 1/7", 0x01e5ea, 0x01e60a, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 2/7", 0x01e60a, 0x01e62a, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 3/7", 0x01e62a, 0x01e64a, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 4/7", 0x01e64a, 0x01e66a, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 5/7", 0x01e66a, 0x01e68a, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 6/7", 0x01e68a, 0x01e6aa, indexCPS2_Vamp_QBee, 0 },
    { L"MK C-R 7/7", 0x01e6aa, 0x01e6ca, indexCPS2_Vamp_QBee, 0 },
    { L"MK Select Portrait", 0x2C88a, 0x2C8Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"MK Win Portrait", 0x3080a, 0x308Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x0ff2a, 0x0ff4a, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"HK Wings/Honey", 0x0ff4a, 0x0ff6a, indexCPS2_Vamp_QBee, 1 },
    { L"HK Wings/Honey frame 2", 0x1ed0a, 0x1ed2a, indexCPS2_Vamp_QBee, 1 },
    { L"HK Bees", 0x0ff8a, 0x0ffaa },
    { L"HK Egg", 0x0ff6a, 0x0ff8a },
    { L"HK Intro/ES 412PP 1", 0x1c98a, 0x1c9aa, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 2", 0x1c9ca, 0x1c9ea, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 3", 0x1ca0a, 0x1ca2a, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 4", 0x1ca4a, 0x1ca6a, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 5", 0x1ca8a, 0x1caaa, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 6", 0x1caca, 0x1caea, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 7", 0x1cb0a, 0x1cb2a, indexCPS2_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 8", 0x1cb4a, 0x1cb6a, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 1/7", 0x01e70a, 0x01e72a, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 2/7", 0x01e72a, 0x01e74a, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 3/7", 0x01e74a, 0x01e76a, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 4/7", 0x01e76a, 0x01e78a, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 5/7", 0x01e78a, 0x01e7aa, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 6/7", 0x01e7aa, 0x01e7ca, indexCPS2_Vamp_QBee, 0 },
    { L"HK C-R 7/7", 0x01e7ca, 0x01e7ea, indexCPS2_Vamp_QBee, 0 },
    { L"HK Select Portrait", 0x2CA8a, 0x2CAAa, indexCPS2_Vamp_QBee, 0x20 },
    { L"HK Win Portrait", 0x312Aa, 0x3134a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x0ffaa, 0x0ffca, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"PP Wings/Honey", 0x0ffca, 0x0ffea, indexCPS2_Vamp_QBee, 1 },
    { L"PP Wings/Honey frame 2", 0x1ed2a, 0x1ed4a, indexCPS2_Vamp_QBee, 1 },
    { L"PP Bees", 0x1000a, 0x1002a },
    { L"PP Egg", 0x0ffea, 0x1000a },
    { L"PP Intro/ES 412PP 1", 0x1cb8a, 0x1cbaa, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 2", 0x1cbca, 0x1cbea, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 3", 0x1cc0a, 0x1cc2a, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 4", 0x1cc4a, 0x1cc6a, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 5", 0x1cc8a, 0x1ccaa, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 6", 0x1ccca, 0x1ccea, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 7", 0x1cd0a, 0x1cd2a, indexCPS2_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 8", 0x1cd4a, 0x1cd6a, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 1/7", 0x01e82a, 0x01e84a, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 2/7", 0x01e84a, 0x01e86a, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 3/7", 0x01e86a, 0x01e88a, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 4/7", 0x01e88a, 0x01e8aa, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 5/7", 0x01e8aa, 0x01e8ca, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 6/7", 0x01e8ca, 0x01e8ea, indexCPS2_Vamp_QBee, 0 },
    { L"PP C-R 7/7", 0x01e8ea, 0x01e90a, indexCPS2_Vamp_QBee, 0 },
    { L"PP Select Portrait", 0x2CC8a, 0x2CCAa, indexCPS2_Vamp_QBee, 0x20 },
    { L"PP Win Portrait", 0x31D4a, 0x31DEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1002a, 0x1004a, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"KK Wings/Honey", 0x1004a, 0x1006a, indexCPS2_Vamp_QBee, 1 },
    { L"KK Wings/Honey frame 2", 0x1ed4a, 0x1ed6a, indexCPS2_Vamp_QBee, 1 },
    { L"KK Bees", 0x1008a, 0x100aa },
    { L"KK Egg", 0x1006a, 0x1008a },
    { L"KK Intro/ES 412PP 1", 0x1cd8a, 0x1cdaa, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 2", 0x1cdca, 0x1cdea, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 3", 0x1ce0a, 0x1ce2a, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 4", 0x1ce4a, 0x1ce6a, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 5", 0x1ce8a, 0x1ceaa, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 6", 0x1ceca, 0x1ceea, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 7", 0x1cf0a, 0x1cf2a, indexCPS2_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 8", 0x1cf4a, 0x1cf6a, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 1/7", 0x01e94a, 0x01e96a, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 2/7", 0x01e96a, 0x01e98a, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 3/7", 0x01e98a, 0x01e9aa, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 4/7", 0x01e9aa, 0x01e9ca, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 5/7", 0x01e9ca, 0x01e9ea, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 6/7", 0x01e9ea, 0x01ea0a, indexCPS2_Vamp_QBee, 0 },
    { L"KK C-R 7/7", 0x01ea0a, 0x01ea2a, indexCPS2_Vamp_QBee, 0 },
    { L"KK Select Portrait", 0x2CE8a, 0x2CEAa, indexCPS2_Vamp_QBee, 0x20 },
    { L"KK Win Portrait", 0x327Ea, 0x3288a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x100aa, 0x100ca, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"AP Wings/Honey", 0x100ca, 0x100ea, indexCPS2_Vamp_QBee, 1 },
    { L"AP Wings/Honey frame 2", 0x1ed6a, 0x1ed8a, indexCPS2_Vamp_QBee, 1 },
    { L"AP Bees", 0x1010a, 0x1012a },
    { L"AP Egg", 0x100ea, 0x1010a },
    { L"AP Intro/ES 412PP 1", 0x1cf8a, 0x1cfaa, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 2", 0x1cfca, 0x1cfea, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 3", 0x1d00a, 0x1d02a, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 4", 0x1d04a, 0x1d06a, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 5", 0x1d08a, 0x1d0aa, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 6", 0x1d0ca, 0x1d0ea, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 7", 0x1d10a, 0x1d12a, indexCPS2_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 8", 0x1d14a, 0x1d16a, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 1/7", 0x01ea6a, 0x01ea8a, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 2/7", 0x01ea8a, 0x01eaaa, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 3/7", 0x01eaaa, 0x01eaca, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 4/7", 0x01eaca, 0x01eaea, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 5/7", 0x01eaea, 0x01eb0a, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 6/7", 0x01eb0a, 0x01eb2a, indexCPS2_Vamp_QBee, 0 },
    { L"AP C-R 7/7", 0x01eb2a, 0x01eb4a, indexCPS2_Vamp_QBee, 0 },
    { L"AP Select Portrait", 0x2D08a, 0x2D0Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"AP Win Portrait", 0x3328a, 0x3332a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1012a, 0x1014a, indexCPS2_Vamp_QBee, 0, &pairNext },
    { L"AK Wings/Honey", 0x1014a, 0x1016a, indexCPS2_Vamp_QBee, 1 },
    { L"AK Wings/Honey frame 2", 0x1ed8a, 0x1edaa, indexCPS2_Vamp_QBee, 1 },
    { L"AK Bees", 0x1018a, 0x101aa },
    { L"AK Egg", 0x1016a, 0x1018a },
    { L"AK Intro/ES 412PP 1", 0x1d18a, 0x1d1aa, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 2", 0x1d1ca, 0x1d1ea, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 3", 0x1d20a, 0x1d22a, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 4", 0x1d24a, 0x1d26a, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 5", 0x1d28a, 0x1d2aa, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 6", 0x1d2ca, 0x1d2ea, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 7", 0x1d30a, 0x1d32a, indexCPS2_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 8", 0x1d34a, 0x1d36a, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 1/7", 0x01eb8a, 0x01ebaa, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 2/7", 0x01ebaa, 0x01ebca, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 3/7", 0x01ebca, 0x01ebea, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 4/7", 0x01ebea, 0x01ec0a, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 5/7", 0x01ec0a, 0x01ec2a, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 6/7", 0x01ec2a, 0x01ec4a, indexCPS2_Vamp_QBee, 0 },
    { L"AK C-R 7/7", 0x01ec4a, 0x01ec6a, indexCPS2_Vamp_QBee, 0 },
    { L"AK Select Portrait", 0x2D28a, 0x2D2Aa, indexCPS2_Vamp_QBee, 0x20 },
    { L"AK Win Portrait", 0x33D2a, 0x33DCa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x101aa, 0x101ca, indexCPS2_Vamp_LeiLei, 0 },
    { L"LP Dust, Weapons", 0x101ea, 0x1020a, indexCPS2_Vamp_LeiLei, 0 },
    { L"LP Lin-Lin", 0x101ca, 0x101ea },
    { L"LP Unknown Extra", 0x1020a, 0x1022a },
    { L"LP Select Portrait", 0x2C0Aa, 0x2C0Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LP Win Portrait", 0x2DE2a, 0x2DECa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1022a, 0x1024a, indexCPS2_Vamp_LeiLei, 0 },
    { L"MP Dust, Weapons", 0x1026a, 0x1028a, indexCPS2_Vamp_LeiLei, 0 },
    { L"MP Lin-Lin", 0x1024a, 0x1026a },
    { L"MP Unknown Extra", 0x1028a, 0x102aa },
    { L"MP Select Portrait", 0x2C2Aa, 0x2C2Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MP Win Portrait", 0x2E8Ca, 0x2E96a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x102aa, 0x102ca, indexCPS2_Vamp_LeiLei, 0 },
    { L"HP Dust, Weapons", 0x102ea, 0x1030a, indexCPS2_Vamp_LeiLei, 0 },
    { L"HP Lin-Lin", 0x102ca, 0x102ea },
    { L"HP Unknown Extra", 0x1030a, 0x1032a },
    { L"HP Select Portrait", 0x2C4Aa, 0x2C4Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HP Win Portrait", 0x2F36a, 0x2F40a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1032a, 0x1034a, indexCPS2_Vamp_LeiLei, 0 },
    { L"LK Dust, Weapons", 0x1036a, 0x1038a, indexCPS2_Vamp_LeiLei, 0 },
    { L"LK Lin-Lin", 0x1034a, 0x1036a },
    { L"LK Unknown Extra", 0x1038a, 0x103aa },
    { L"LK Select Portrait", 0x2C6Aa, 0x2C6Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LK Win Portrait", 0x2FE0a, 0x2FEAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x103aa, 0x103ca, indexCPS2_Vamp_LeiLei, 0 },
    { L"MK Dust, Weapons", 0x103ea, 0x1040a, indexCPS2_Vamp_LeiLei, 0 },
    { L"MK Lin-Lin", 0x103ca, 0x103ea },
    { L"MK Unknown Extra", 0x1040a, 0x1042a },
    { L"MK Select Portrait", 0x2C8Aa, 0x2C8Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MK Win Portrait", 0x308Aa, 0x3094a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1042a, 0x1044a, indexCPS2_Vamp_LeiLei, 0 },
    { L"HK Dust, Weapons", 0x1046a, 0x1048a, indexCPS2_Vamp_LeiLei, 0 },
    { L"HK Lin-Lin", 0x1044a, 0x1046a },
    { L"HK Unknown Extra", 0x1048a, 0x104aa },
    { L"HK Select Portrait", 0x2CAAa, 0x2CACa, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HK Win Portrait", 0x3134a, 0x313Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x104aa, 0x104ca, indexCPS2_Vamp_LeiLei, 0 },
    { L"PP Dust, Weapons", 0x104ea, 0x1050a, indexCPS2_Vamp_LeiLei, 0 },
    { L"PP Lin-Lin", 0x104ca, 0x104ea },
    { L"PP Unknown Extra", 0x1050a, 0x1052a },
    { L"PP Select Portrait", 0x2CCAa, 0x2CCCa, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"PP Win Portrait", 0x31DEa, 0x31E8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1052a, 0x1054a, indexCPS2_Vamp_LeiLei, 0 },
    { L"KK Dust, Weapons", 0x1056a, 0x1058a, indexCPS2_Vamp_LeiLei, 0 },
    { L"KK Lin-Lin", 0x1054a, 0x1056a },
    { L"KK Unknown Extra", 0x1058a, 0x105aa },
    { L"KK Select Portrait", 0x2CEAa, 0x2CECa, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"KK Win Portrait", 0x3288a, 0x3292a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x105aa, 0x105ca, indexCPS2_Vamp_LeiLei, 0 },
    { L"AP Dust, Weapons", 0x105ea, 0x1060a, indexCPS2_Vamp_LeiLei, 0 },
    { L"AP Lin-Lin", 0x105ca, 0x105ea },
    { L"AP Unknown Extra", 0x1060a, 0x1062a },
    { L"AP Select Portrait", 0x2D0Aa, 0x2D0Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AP Win Portrait", 0x3332a, 0x333Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1062a, 0x1064a, indexCPS2_Vamp_LeiLei, 0 },
    { L"AK Dust, Weapons", 0x1066a, 0x1068a, indexCPS2_Vamp_LeiLei, 0 },
    { L"AK Lin-Lin", 0x1064a, 0x1066a },
    { L"AK Unknown Extra", 0x1068a, 0x106aa },
    { L"AK Select Portrait", 0x2D2Aa, 0x2D2Ca, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AK Win Portrait", 0x33DCa, 0x33E6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_SHARED[] =
{
    { L"Chuukada", 0x01f98a, 0x01f9aa },
    { L"Fast Chuukada", 0x01f9aa, 0x01f9ca },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x106aa, 0x106ca, indexCPS2_Vamp_Lilith, 0 },
    { L"LP Hearts", 0x106ca, 0x106ea },
    { L"LP Luminous Illusion/62KKK bats", 0x106ea, 0x1070a },
    { L"LP Sparkles", 0x1070a, 0x1072a },
    { L"LP Select Portrait", 0x2C0Ca, 0x2C0Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LP Win Portrait", 0x2DECa, 0x2DF6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1072a, 0x1074a, indexCPS2_Vamp_Lilith, 0 },
    { L"MP Hearts", 0x1074a, 0x1076a },
    { L"MP Luminous Illusion/62KKK bats", 0x1076a, 0x1078a },
    { L"MP Sparkles", 0x1078a, 0x107aa },
    { L"MP Select Portrait", 0x2C2Ca, 0x2C2Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MP Win Portrait", 0x2E96a, 0x2EA0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x107aa, 0x107ca, indexCPS2_Vamp_Lilith, 0 },
    { L"HP Hearts", 0x107ca, 0x107ea },
    { L"HP Luminous Illusion/62KKK bats", 0x107ea, 0x1080a },
    { L"HP Sparkles", 0x1080a, 0x1082a },
    { L"HP Select Portrait", 0x2C4Ca, 0x2C4Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HP Win Portrait", 0x2F40a, 0x2F4Aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1082a, 0x1084a, indexCPS2_Vamp_Lilith, 0 },
    { L"LK Hearts", 0x1084a, 0x1086a },
    { L"LK Luminous Illusion/62KKK bats", 0x1086a, 0x1088a },
    { L"LK Sparkles", 0x1088a, 0x108aa },
    { L"LK Select Portrait", 0x2C6Ca, 0x2C6Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LK Win Portrait", 0x2FEAa, 0x2FF4a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x108aa, 0x108ca, indexCPS2_Vamp_Lilith, 0 },
    { L"MK Hearts", 0x108ca, 0x108ea },
    { L"MK Luminous Illusion/62KKK bats", 0x108ea, 0x1090a },
    { L"MK Sparkles", 0x1090a, 0x1092a },
    { L"MK Select Portrait", 0x2C8Ca, 0x2C8Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MK Win Portrait", 0x3094a, 0x309Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1092a, 0x1094a, indexCPS2_Vamp_Lilith, 0 },
    { L"HK Hearts", 0x1094a, 0x1096a },
    { L"HK Luminous Illusion/62KKK bats", 0x1096a, 0x1098a },
    { L"HK Sparkles", 0x1098a, 0x109aa },
    { L"HK Select Portrait", 0x2CACa, 0x2CAEa, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HK Win Portrait", 0x313Ea, 0x3148a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x109aa, 0x109ca, indexCPS2_Vamp_Lilith, 0 },
    { L"PP Hearts", 0x109ca, 0x109ea },
    { L"PP Luminous Illusion/62KKK bats", 0x109ea, 0x10a0a },
    { L"PP Sparkles", 0x10a0a, 0x10a2a },
    { L"PP Select Portrait", 0x2CCCa, 0x2CCEa, indexCPS2_Vamp_Lilith, 0x20 },
    { L"PP Win Portrait", 0x31E8a, 0x31F2a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x10a2a, 0x10a4a, indexCPS2_Vamp_Lilith, 0 },
    { L"KK Hearts", 0x10a4a, 0x10a6a },
    { L"KK Luminous Illusion/62KKK bats", 0x10a6a, 0x10a8a },
    { L"KK Sparkles", 0x10a8a, 0x10aaa },
    { L"KK Select Portrait", 0x2CECa, 0x2CEEa, indexCPS2_Vamp_Lilith, 0x20 },
    { L"KK Win Portrait", 0x3292a, 0x329Ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x10aaa, 0x10aca, indexCPS2_Vamp_Lilith, 0 },
    { L"AP Hearts", 0x10aca, 0x10aea },
    { L"AP Luminous Illusion/62KKK bats", 0x10aea, 0x10b0a },
    { L"AP Sparkles", 0x10b0a, 0x10b2a },
    { L"AP Select Portrait", 0x2D0Ca, 0x2D0Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AP Win Portrait", 0x333Ca, 0x3346a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x10b2a, 0x10b4a, indexCPS2_Vamp_Lilith, 0 },
    { L"AK Hearts", 0x10b4a, 0x10b6a },
    { L"AK Luminous Illusion/62KKK bats", 0x10b6a, 0x10b8a },
    { L"AK Sparkles", 0x10b8a, 0x10baa },
    { L"AK Select Portrait", 0x2D2Ca, 0x2D2Ea, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AK Win Portrait", 0x33E6a, 0x33F0a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_SHARED[] =
{
    { L"Taunt", 0x01f9ca, 0x01f9ea },
    { L"Text & Sign", 0x01fa0a, 0x01fa2a },
    { L"Curtains", 0x01fa2a, 0x01fa4a },
    { L"Stage 1/4", 0x01f9ea, 0x01fa0a },
    { L"Stage 2/4", 0x01fa4a, 0x01fa6a },
    { L"Stage 3/4", 0x01fa6a, 0x01fa8a },
    { L"Stage 4/4", 0x01fa8a, 0x01faaa },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x10baa, 0x10bca, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"LP Prova di Servo", 0x10bca, 0x10bea, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x10bea, 0x10c0a, indexCPS2_Vamp_Jedah, 1 },
    { L"LP Intro", 0x10c0a, 0x10c2a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LP Select Portrait", 0x2C0Ea, 0x2C10a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LP Win Portrait", 0x2DF6a, 0x2E00a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x10c2a, 0x10c4a, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"MP Prova di Servo", 0x10c4a, 0x10c6a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x10c6a, 0x10c8a, indexCPS2_Vamp_Jedah, 1 },
    { L"MP Intro", 0x10c8a, 0x10caa, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MP Select Portrait", 0x2C2Ea, 0x2C30a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MP Win Portrait", 0x2EA0a, 0x2EAAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x10caa, 0x10cca, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"HP Prova di Servo", 0x10cca, 0x10cea, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x10cea, 0x10d0a, indexCPS2_Vamp_Jedah, 1 },
    { L"HP Intro", 0x10d0a, 0x10d2a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HP Select Portrait", 0x2C4Ea, 0x2C50a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HP Win Portrait", 0x2F4Aa, 0x2F54a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LK[] =
{
    { L"LK Jedah", 0x10d2a, 0x10d4a, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"LK Prova di Servo", 0x10d4a, 0x10d6a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x10d6a, 0x10d8a, indexCPS2_Vamp_Jedah, 1 },
    { L"LK Intro", 0x10d8a, 0x10daa, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LK Select Portrait", 0x2C6Ea, 0x2C70a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LK Win Portrait", 0x2FF4a, 0x2FFEa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x10daa, 0x10dca, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"MK Prova di Servo", 0x10dca, 0x10dea, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x10dea, 0x10e0a, indexCPS2_Vamp_Jedah, 1 },
    { L"MK Intro", 0x10e0a, 0x10e2a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MK Select Portrait", 0x2C8Ea, 0x2C90a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MK Win Portrait", 0x309Ea, 0x30A8a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x10e2a, 0x10e4a, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"HK Prova di Servo", 0x10e4a, 0x10e6a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x10e6a, 0x10e8a, indexCPS2_Vamp_Jedah, 1 },
    { L"HK Intro", 0x10e8a, 0x10eaa, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HK Select Portrait", 0x2CAEa, 0x2CB0a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HK Win Portrait", 0x3148a, 0x3152a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x10eaa, 0x10eca, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"PP Prova di Servo", 0x10eca, 0x10eea, indexCPS2_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x10eea, 0x10f0a, indexCPS2_Vamp_Jedah, 1 },
    { L"PP Intro", 0x10f0a, 0x10f2a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"PP Select Portrait", 0x2CCEa, 0x2CD0a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"PP Win Portrait", 0x31F2a, 0x31FCa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x10f2a, 0x10f4a, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"KK Prova di Servo", 0x10f4a, 0x10f6a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x10f6a, 0x10f8a, indexCPS2_Vamp_Jedah, 1 },
    { L"KK Intro", 0x10f8a, 0x10faa, indexCPS2_Vamp_Jedah, 0x02 },
    { L"KK Select Portrait", 0x2CEEa, 0x2CF0a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"KK Win Portrait", 0x329Ca, 0x32A6a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x10faa, 0x10fca, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"AP Prova di Servo", 0x10fca, 0x10fea, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x10fea, 0x1100a, indexCPS2_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1100a, 0x1102a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AP Select Portrait", 0x2D0Ea, 0x2D10a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AP Win Portrait", 0x3346a, 0x3350a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1102a, 0x1104a, indexCPS2_Vamp_Jedah, 0, &pairNext2 },
    { L"AK Prova di Servo", 0x1104a, 0x1106a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1106a, 0x1108a, indexCPS2_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1108a, 0x110aa, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AK Select Portrait", 0x2D2Ea, 0x2D30a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AK Win Portrait", 0x33F0a, 0x33FAa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SHARED[] =
{
    { L"Shared blood", 0x1faea, 0x1fb0a, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared blood 2", 0x1fb0a, 0x1fb2a, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared Prova di Servo", 0x1fb2a, 0x1fb4a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"Shared Prova di Servo 2", 0x1fb4a, 0x1fb6a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"Shared Finale Rosso", 0x01fb6a, 0x01fb8a, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_DEFAULT[] =
{
    { L"Dark Gallon (1/6)", 0x110aa, 0x110ca, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (2/6)", 0x1fb8a, 0x1fbaa, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (3/6)", 0x1fbaa, 0x1fbca, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (4/6)", 0x1fbca, 0x1fbea, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (5/6)", 0x1fbea, 0x1fc0a, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (6/6)", 0x1fc0a, 0x1fc2a, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Intro/Outro", 0x110ca, 0x110ea },
    { L"236P/41236KK/j.HP", 0x110ea, 0x1110a },
    { L"236P/28K/Outro Flash", 0x1110a, 0x1112a },
    { L"Dark Gallon Select", 0x2d5Ca, 0x2d5Ea, indexCPS2_Vamp_Gallon, 0x20 },
    { L"Dark Gallon Win Portrait", 0x3404a, 0x340Ea, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_ALT[] =
{
    { L"Dark Gallon Alt Palette (1/6)", 0x1112a, 0x1114a, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (2/6)", 0x1fc2a, 0x1fc4a, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (3/6)", 0x1fc4a, 0x1fc6a, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (4/6)", 0x1fc6a, 0x1fc8a, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (5/6)", 0x1fc8a, 0x1fcaa, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (6/6)", 0x1fcaa, 0x1fcca, indexCPS2_Vamp_DarkGallon, 0 },
    { L"Intro/Outro", 0x1114a, 0x1116a },
    { L"236P/41236KK/j.HP", 0x1116a, 0x1118a },
    { L"236P/28K/Outro Flash", 0x1118a, 0x111aa },
    { L"Dark Gallon Alt Palette Select", 0x2d5Ea, 0x2d60a, indexCPS2_Vamp_Gallon, 0x20 },
    { L"Dark Gallon Alt Palette Win Portrait", 0x340Ea, 0x3418a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon", 0x115aa, 0x115ca, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Intro", 0x115ca, 0x115ea, indexCPS2_Vamp_Bishamon, 0 },
    { L"LP Ghosts/Hitsparks", 0x115ea, 0x1160a },
    { L"LP Unknown Extra", 0x1160a, 0x1162a },
    { L"LP Select Portrait", 0x2d50a, 0x2d52a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x3418a, 0x3422a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon", 0x1162a, 0x1164a, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Intro", 0x1164a, 0x1166a, indexCPS2_Vamp_Bishamon, 0 },
    { L"MP Ghosts/Hitsparks", 0x1166a, 0x1168a },
    { L"MP Unknown Extra", 0x1168a, 0x116aa },
    { L"MP Select Portrait", 0x2d52a, 0x2d54a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x3422a, 0x342ca, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon", 0x116aa, 0x116ca, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Intro", 0x116ca, 0x116ea, indexCPS2_Vamp_Bishamon, 0 },
    { L"HP Ghosts/Hitsparks", 0x116ea, 0x1170a },
    { L"HP Unknown Extra", 0x1170a, 0x1172a },
    { L"HP Select Portrait", 0x2d54a, 0x2d56a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x342ca, 0x3436a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon", 0x1172a, 0x1174a, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Intro", 0x1174a, 0x1176a, indexCPS2_Vamp_Bishamon, 0 },
    { L"LK Ghosts/Hitsparks", 0x1176a, 0x1178a },
    { L"LK Unknown Extra", 0x1178a, 0x117aa },
    { L"LK Select Portrait", 0x2d56a, 0x2d58a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x3436a, 0x3440a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon", 0x117aa, 0x117ca, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Intro", 0x117ca, 0x117ea, indexCPS2_Vamp_Bishamon, 0 },
    { L"MK Ghosts/Hitsparks", 0x117ea, 0x1180a },
    { L"MK Unknown Extra", 0x1180a, 0x1182a },
    { L"MK Select Portrait", 0x2d58a, 0x2d5aa, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x3440a, 0x344aa, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon", 0x1182a, 0x1184a, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Intro", 0x1184a, 0x1186a, indexCPS2_Vamp_Bishamon, 0 },
    { L"HK Ghosts/Hitsparks", 0x1186a, 0x1188a },
    { L"HK Unknown Extra", 0x1188a, 0x118aa },
    { L"HK Select Portrait", 0x2d5aa, 0x2d5ca, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x344aa, 0x3454a, indexCPS2_VSAV1_WinPortraits, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon", 0x118aa, 0x118ca, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Intro", 0x118ca, 0x118ea, indexCPS2_Vamp_Bishamon, 0 },
    { L"PP Ghosts/Hitsparks", 0x118ea, 0x1190a },
    { L"PP Unknown Extra", 0x1190a, 0x1192a },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon", 0x1192a, 0x1194a, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Intro", 0x1194a, 0x1196a, indexCPS2_Vamp_Bishamon, 0 },
    { L"KK Ghosts/Hitsparks", 0x1196a, 0x1198a },
    { L"KK Unknown Extra", 0x1198a, 0x119aa },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon", 0x119aa, 0x119ca, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Intro", 0x119ca, 0x119ea, indexCPS2_Vamp_Bishamon, 0 },
    { L"AP Ghosts/Hitsparks", 0x119ea, 0x11a0a },
    { L"AP Unknown Extra", 0x11a0a, 0x11a2a },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon", 0x11a2a, 0x11a4a, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Intro", 0x11a4a, 0x11a6a, indexCPS2_Vamp_Bishamon, 0 },
    { L"AK Ghosts/Hitsparks", 0x11a6a, 0x11a8a },
    { L"AK Unknown Extra", 0x11a8a, 0x11aaa },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_LP[] =
{
    { L"LP Anita", 0x02ba0a, 0x02ba2a, indexCPS2_Anita, 0 },
    { L"LP Weapons", 0x02ba2a, 0x02ba4a, indexCPS2_Anita, 1 },
    { L"LP Sword", 0x02ba4a, 0x02ba6a, indexCPS2_Anita, 1 },
    //{ L"LP Unused", 0x02ba6a, 0x02ba8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_MP[] =
{
    { L"MP Anita", 0x02ba8a, 0x02baaa, indexCPS2_Anita, 0 },
    { L"MP Weapons", 0x02baaa, 0x02baca, indexCPS2_Anita, 1 },
    { L"MP Sword", 0x02baca, 0x02baea, indexCPS2_Anita, 1 },
    //{ L"MP Unused", 0x02baea, 0x02bb0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_HP[] =
{
    { L"HP Anita", 0x02bb0a, 0x02bb2a, indexCPS2_Anita },
    { L"HP Weapons", 0x02bb2a, 0x02bb4a, indexCPS2_Anita, 1 },
    { L"HP Sword", 0x02bb4a, 0x02bb6a, indexCPS2_Anita, 1 },
    //{ L"HP Unused", 0x02bb6a, 0x02bb8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_LK[] =
{
    { L"LK Anita", 0x02bb8a, 0x02bbaa, indexCPS2_Anita },
    { L"LK Weapons", 0x02bbaa, 0x02bbca, indexCPS2_Anita, 1 },
    { L"LK Sword", 0x02bbca, 0x02bbea, indexCPS2_Anita, 1 },
    // { L"LK Unused", 0x02bbea, 0x02bc0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_MK[] =
{
    { L"MK Anita", 0x02bc0a, 0x02bc2a, indexCPS2_Anita },
    { L"MK Weapons", 0x02bc2a, 0x02bc4a, indexCPS2_Anita, 1 },
    { L"MK Sword", 0x02bc4a, 0x02bc6a, indexCPS2_Anita, 1 },
    // { L"MK Unused", 0x02bc6a, 0x02bc8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_HK[] =
{
    { L"HK Anita", 0x02bc8a, 0x02bcaa, indexCPS2_Anita },
    { L"HK Weapons", 0x02bcaa, 0x02bcca, indexCPS2_Anita, 1 },
    { L"HK Sword", 0x02bcca, 0x02bcea, indexCPS2_Anita, 1 },
    // { L"HK Unused", 0x02bcea, 0x02bd0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_PP[] =
{
    { L"PP Anita", 0x02bd0a, 0x02bd2a, indexCPS2_Anita },
    { L"PP Weapons", 0x02bd2a, 0x02bd4a, indexCPS2_Anita, 1 },
    { L"PP Sword", 0x02bd4a, 0x02bd6a, indexCPS2_Anita, 1 },
    // { L"PP Unused", 0x02bd6a, 0x02bd8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_KK[] =
{
    { L"KK Anita", 0x02bd8a, 0x02bdaa, indexCPS2_Anita },
    { L"KK Weapons", 0x02bdaa, 0x02bdca, indexCPS2_Anita, 1 },
    { L"KK Sword", 0x02bdca, 0x02bdea, indexCPS2_Anita, 1 },
    // { L"KK Unused", 0x02bdea, 0x02be0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_AP[] =
{
    { L"AP Anita", 0x02be0a, 0x02be2a, indexCPS2_Anita },
    { L"AP Weapons", 0x02be2a, 0x02be4a, indexCPS2_Anita, 1 },
    { L"AP Sword", 0x02be4a, 0x02be6a, indexCPS2_Anita, 1 },
    // { L"AP Unused", 0x02be6a, 0x02be8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_AK[] =
{
    { L"AK Anita", 0x02be8a, 0x02beaa, indexCPS2_Anita },
    { L"AK Weapons", 0x02beaa, 0x02beca, indexCPS2_Anita, 1 },
    { L"AK Sword", 0x02beca, 0x02beea, indexCPS2_Anita, 1 },
    // { L"AK Unused", 0x02beea, 0x02bf0a },
};

const sGame_PaletteDataset VSAV_A_HUD_PALETTES[] =
{
    { L"Lifebar and super meter", 0x1A6Ea, 0x1A70a },
    { L"Life bar blending 1", 0x293Fa, 0x2941a },
    { L"Life bar blending 2", 0x2941a, 0x2943a },
    { L"Life bar blending 3", 0x2943a, 0x2945a },
    { L"Life bar blending 4", 0x2945a, 0x2947a },
    { L"Life bar blending 5", 0x2947a, 0x2949a },
    { L"Fire", 0x1a74a, 0x1a76a, indexCPS2_VSAV1_Bonus, 0x00 },
    { L"Fire Glow 1", 0x29c4a, 0x29c6a, indexCPS2_VSAV1_Bonus, 0x00 },
    { L"Fire Glow 2", 0x29c6a, 0x29c8a, indexCPS2_VSAV1_Bonus, 0x00 },
    { L"Round Bats / Meter Numbers", 0x1a76a, 0x1a78a },
    //{ L"Combo Number/Win Counter/Combo Text", 0x1A70a, 0x1A72a },
    //{ L"Flash Combo Counter/Timer/Fight Logo", 0x1A72a, 0x1A74a }, 
};

const sGame_PaletteDataset VSAV_A_HUD_P1_PALETTES[] =
{
    { L"Combo Number/Wincounter/Combo Text", 0x1A70a, 0x1A72a },
    { L"Level 0 Frame 2", 0x29c8a, 0x29caa },
    { L"Level 0 Frame 3", 0x29caa, 0x29cca },
    { L"Level 0 Frame 4", 0x29cca, 0x29cea },
    { L"Level 0 Frame 5", 0x29cea, 0x29d0a },
    { L"Level 0 Frame 6", 0x29d0a, 0x29d2a },
    { L"Level 0 Frame 7", 0x29d2a, 0x29d4a },
    { L"Level 1 Frame 1", 0x29d4a, 0x29d6a },
    { L"Level 1 Frame 2", 0x29d6a, 0x29d8a },
    { L"Level 1 Frame 3", 0x29d8a, 0x29daa },
    { L"Level 1 Frame 4", 0x29daa, 0x29dca },
    { L"Level 1 Frame 5", 0x29dca, 0x29dea },
    { L"Level 1 Frame 6", 0x29dea, 0x29e0a },
    { L"Level 1 Frame 7", 0x29e0a, 0x29e2a },
    { L"Level 1 Frame 8", 0x29e2a, 0x29e4a },
    { L"Level 2 Frame 1", 0x29e4a, 0x29e6a },
    { L"Level 2 Frame 2", 0x29e6a, 0x29e8a },
    { L"Level 2 Frame 3", 0x29e8a, 0x29eaa },
    { L"Level 2 Frame 4", 0x29eaa, 0x29eca },
    { L"Level 2 Frame 5", 0x29eca, 0x29eea },
    { L"Level 2 Frame 6", 0x29eea, 0x29f0a },
    { L"Level 2 Frame 7", 0x29f0a, 0x29f2a },
    { L"Level 2 Frame 8", 0x29f2a, 0x29f4a },
    { L"Level 3 Frame 1", 0x29f4a, 0x29f6a },
    { L"Level 3 Frame 2", 0x29f6a, 0x29f8a },
    { L"Level 3 Frame 3", 0x29f8a, 0x29faa },
    { L"Level 3 Frame 4", 0x29faa, 0x29fca },
    { L"Level 3 Frame 5", 0x29fca, 0x29fea },
    { L"Level 3 Frame 6", 0x29fea, 0x2a00a },
    { L"Level 3 Frame 7", 0x2a00a, 0x2a02a },
    { L"Level 3 Frame 8", 0x2a02a, 0x2a04a },
    { L"Level 4 Frame 1", 0x2a04a, 0x2a06a },
    { L"Level 4 Frame 2", 0x2a06a, 0x2a08a },
    { L"Level 4 Frame 3", 0x2a08a, 0x2a0aa },
    { L"Level 4 Frame 4", 0x2a0aa, 0x2a0ca },
    { L"Level 4 Frame 5", 0x2a0ca, 0x2a0ea },
    { L"Level 4 Frame 6", 0x2a0ea, 0x2a10a },
    { L"Level 4 Frame 7", 0x2a10a, 0x2a12a },
    { L"Level 4 Frame 8", 0x2a12a, 0x2a14a },
    { L"Level 5 Frame 1", 0x2a14a, 0x2a16a },
    { L"Level 5 Frame 2", 0x2a16a, 0x2a18a },
    { L"Level 5 Frame 3", 0x2a18a, 0x2a1aa },
    { L"Level 5 Frame 4", 0x2a1aa, 0x2a1ca },
    { L"Level 5 Frame 5", 0x2a1ca, 0x2a1ea },
    { L"Level 5 Frame 6", 0x2a1ea, 0x2a20a },
    { L"Level 5 Frame 7", 0x2a20a, 0x2a22a },
    { L"Level 5 Frame 8", 0x2a22a, 0x2a24a },
    { L"Level 6 Frame 1", 0x2a24a, 0x2a26a },
    { L"Level 6 Frame 2", 0x2a26a, 0x2a28a },
    { L"Level 6 Frame 3", 0x2a28a, 0x2a2aa },
    { L"Level 6 Frame 4", 0x2a2aa, 0x2a2ca },
    { L"Level 6 Frame 5", 0x2a2ca, 0x2a2ea },
    { L"Level 6 Frame 6", 0x2a2ea, 0x2a30a },
    { L"Level 6 Frame 7", 0x2a30a, 0x2a32a },
    { L"Level 6 Frame 8", 0x2a32a, 0x2a34a },
    { L"Level 7 Frame 1", 0x2a34a, 0x2a36a },
    { L"Level 7 Frame 2", 0x2a36a, 0x2a38a },
    { L"Level 7 Frame 3", 0x2a38a, 0x2a3aa },
    { L"Level 7 Frame 4", 0x2a3aa, 0x2a3ca },
    { L"Level 7 Frame 5", 0x2a3ca, 0x2a3ea },
    { L"Level 7 Frame 6", 0x2a3ea, 0x2a40a },
    { L"Level 7 Frame 7", 0x2a40a, 0x2a42a },
    { L"Level 7 Frame 8", 0x2a42a, 0x2a44a },
    { L"Level 8 Frame 1", 0x2a44a, 0x2a46a },
    { L"Level 8 Frame 2", 0x2a46a, 0x2a48a },
    { L"Level 8 Frame 3", 0x2a48a, 0x2a4aa },
    { L"Level 8 Frame 4", 0x2a4aa, 0x2a4ca },
    { L"Level 8 Frame 5", 0x2a4ca, 0x2a4ea },
    { L"Level 8 Frame 6", 0x2a4ea, 0x2a50a },
    { L"Level 8 Frame 7", 0x2a50a, 0x2a52a },
    { L"Level 8 Frame 8", 0x2a52a, 0x2a54a },
    { L"Level 9+ Frame 1", 0x2a54a, 0x2a56a },
    { L"Level 9+ Frame 2", 0x2a56a, 0x2a58a },
    { L"Level 9+ Frame 3", 0x2a58a, 0x2a5aa },
    { L"Level 9+ Frame 4", 0x2a5aa, 0x2a5ca },
    { L"Level 9+ Frame 5", 0x2a5ca, 0x2a5ea },
    { L"Level 9+ Frame 6", 0x2a5ea, 0x2a60a },
    { L"Level 9+ Frame 7", 0x2a60a, 0x2a62a },
    { L"Level 9+ Frame 8", 0x2a62a, 0x2a64a },
};

const sGame_PaletteDataset VSAV_A_HUD_P2_PALETTES[] =
{
    { L"Flash Combo Counter/Timer/Fight Logo", 0x1A72a, 0x1A74a },
    { L"Level 0 Frame 2", 0x28a2a, 0x28a4a },
    { L"Level 0 Frame 3", 0x28a4a, 0x28a6a },
    { L"Level 0 Frame 4", 0x28a6a, 0x28a8a },
    { L"Level 0 Frame 5", 0x28a8a, 0x28aaa },
    { L"Level 0 Frame 6", 0x28aaa, 0x28aca },
    { L"Level 0 Frame 7", 0x28aca, 0x28aea },
    { L"Level 1 Frame 1", 0x28aea, 0x28b0a },
    { L"Level 1 Frame 2", 0x28b0a, 0x28b2a },
    { L"Level 1 Frame 3", 0x28b2a, 0x28b4a },
    { L"Level 1 Frame 4", 0x28b4a, 0x28b6a },
    { L"Level 1 Frame 5", 0x28b6a, 0x28b8a },
    { L"Level 1 Frame 6", 0x28b8a, 0x28baa },
    { L"Level 1 Frame 7", 0x28baa, 0x28bca },
    { L"Level 1 Frame 8", 0x28bca, 0x28bea },
    { L"Level 2 Frame 1", 0x28bea, 0x28c0a },
    { L"Level 2 Frame 2", 0x28c0a, 0x28c2a },
    { L"Level 2 Frame 3", 0x28c2a, 0x28c4a },
    { L"Level 2 Frame 4", 0x28c4a, 0x28c6a },
    { L"Level 2 Frame 5", 0x28c6a, 0x28c8a },
    { L"Level 2 Frame 6", 0x28c8a, 0x28caa },
    { L"Level 2 Frame 7", 0x28caa, 0x28cca },
    { L"Level 2 Frame 8", 0x28cca, 0x28cea },
    { L"Level 3 Frame 1", 0x28cea, 0x28d0a },
    { L"Level 3 Frame 2", 0x28d0a, 0x28d2a },
    { L"Level 3 Frame 3", 0x28d2a, 0x28d4a },
    { L"Level 3 Frame 4", 0x28d4a, 0x28d6a },
    { L"Level 3 Frame 5", 0x28d6a, 0x28d8a },
    { L"Level 3 Frame 6", 0x28d8a, 0x28daa },
    { L"Level 3 Frame 7", 0x28daa, 0x28dca },
    { L"Level 3 Frame 8", 0x28dca, 0x28dea },
    { L"Level 4 Frame 1", 0x28dea, 0x28e0a },
    { L"Level 4 Frame 2", 0x28e0a, 0x28e2a },
    { L"Level 4 Frame 3", 0x28e2a, 0x28e4a },
    { L"Level 4 Frame 4", 0x28e4a, 0x28e6a },
    { L"Level 4 Frame 5", 0x28e6a, 0x28e8a },
    { L"Level 4 Frame 6", 0x28e8a, 0x28eaa },
    { L"Level 4 Frame 7", 0x28eaa, 0x28eca },
    { L"Level 4 Frame 8", 0x28eca, 0x28eea },
    { L"Level 5 Frame 1", 0x28eea, 0x28f0a },
    { L"Level 5 Frame 2", 0x28f0a, 0x28f2a },
    { L"Level 5 Frame 3", 0x28f2a, 0x28f4a },
    { L"Level 5 Frame 4", 0x28f4a, 0x28f6a },
    { L"Level 5 Frame 5", 0x28f6a, 0x28f8a },
    { L"Level 5 Frame 6", 0x28f8a, 0x28faa },
    { L"Level 5 Frame 7", 0x28faa, 0x28fca },
    { L"Level 5 Frame 8", 0x28fca, 0x28fea },
    { L"Level 6 Frame 1", 0x28fea, 0x2900a },
    { L"Level 6 Frame 2", 0x2900a, 0x2902a },
    { L"Level 6 Frame 3", 0x2902a, 0x2904a },
    { L"Level 6 Frame 4", 0x2904a, 0x2906a },
    { L"Level 6 Frame 5", 0x2906a, 0x2908a },
    { L"Level 6 Frame 6", 0x2908a, 0x290aa },
    { L"Level 6 Frame 7", 0x290aa, 0x290ca },
    { L"Level 6 Frame 8", 0x290ca, 0x290ea },
    { L"Level 7 Frame 1", 0x290ea, 0x2910a },
    { L"Level 7 Frame 2", 0x2910a, 0x2912a },
    { L"Level 7 Frame 3", 0x2912a, 0x2914a },
    { L"Level 7 Frame 4", 0x2914a, 0x2916a },
    { L"Level 7 Frame 5", 0x2916a, 0x2918a },
    { L"Level 7 Frame 6", 0x2918a, 0x291aa },
    { L"Level 7 Frame 7", 0x291aa, 0x291ca },
    { L"Level 7 Frame 8", 0x291ca, 0x291ea },
    { L"Level 8 Frame 1", 0x291ea, 0x2920a },
    { L"Level 8 Frame 2", 0x2920a, 0x2922a },
    { L"Level 8 Frame 3", 0x2922a, 0x2924a },
    { L"Level 8 Frame 4", 0x2924a, 0x2926a },
    { L"Level 8 Frame 5", 0x2926a, 0x2928a },
    { L"Level 8 Frame 6", 0x2928a, 0x292aa },
    { L"Level 8 Frame 7", 0x292aa, 0x292ca },
    { L"Level 8 Frame 8", 0x292ca, 0x292ea },
    { L"Level 9+ Frame 1", 0x292ea, 0x2930a },
    { L"Level 9+ Frame 2", 0x2930a, 0x2932a },
    { L"Level 9+ Frame 3", 0x2932a, 0x2934a },
    { L"Level 9+ Frame 4", 0x2934a, 0x2936a },
    { L"Level 9+ Frame 5", 0x2936a, 0x2938a },
    { L"Level 9+ Frame 6", 0x2938a, 0x293aa },
    { L"Level 9+ Frame 7", 0x293aa, 0x293ca },
    { L"Level 9+ Frame 8", 0x293ca, 0x293ea },
};

const sGame_PaletteDataset VSAV_A_EFFECTS_PALETTES[] =
{
    { L"Special Hitsparks/Ice Effects/Guardsparks", 0x01a78a, 0x01a7aa },
    { L"Hitsparks/Fire Effects/Dash", 0x01a7aa, 0x01a7ca },
    { L"Dust Effects", 0x01a7ca, 0x01a7ea },
};

const sGame_PaletteDataset VSAV_A_SHADOW_PALETTES[] =
{
    { L"Shadow", 0x3584a, 0x3586a, indexCPS2_Vamp_Shadow, 0x0 },
};

const sGame_PaletteDataset VSAV_A_BONUS_TITLES_PALETTES[] =
{
    { L"Morrigan Intro Portrait",       0x2362a, 0x2368a, indexCPS2_VSAV1_Bonus, 0x06 },
    { L"Lilith Intro Portrait",         0x515ba, 0x5161a, indexCPS2_VSAV1_Bonus, 0x05 },
    { L"Demitri Intro",                 0x233ca, 0x2340a, indexCPS2_VSAV1_Bonus, 0x04 },
    { L"Bulleta Intro",                 0x234aa, 0x2354a, indexCPS2_VSAV1_Bonus, 0x03 },
    { L"Bulleta Intro Flash Palette",   0x2a94a, 0x2a9ea, indexCPS2_VSAV1_Bonus, 0x02 },
    { L"Bulleta Intro BG",              0x659a2, 0x659c2, indexCPS2_VSAV1_Bonus, 0x01 },

    { L"Character Select BG",           0x518fa, 0x51a5a, indexCPS2_VSAV1_Bonus, 0x09 },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_SPECIAL[] =
{
    { L"Bulleta LP Poisoned", 0x11ba0 - 0xf6, 0x11bc0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta MP Poisoned", 0x11bc0 - 0xf6, 0x11be0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta HP Poisoned", 0x11be0 - 0xf6, 0x11c00 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta LK Poisoned", 0x11c00 - 0xf6, 0x11c20 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta MK Poisoned", 0x11c20 - 0xf6, 0x11c40 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta HK Poisoned", 0x11c40 - 0xf6, 0x11c60 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta PP Poisoned", 0x11c60 - 0xf6, 0x11c80 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta KK Poisoned", 0x11c80 - 0xf6, 0x11ca0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta AP Poisoned", 0x11ca0 - 0xf6, 0x11cc0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta AK Poisoned", 0x11cc0 - 0xf6, 0x11ce0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta LP Zapped", 0x11ce0 - 0xf6, 0x11d00 - 0xf6 },
    { L"Bulleta MP Zapped", 0x11d00 - 0xf6, 0x11d20 - 0xf6 },
    { L"Bulleta HP Zapped", 0x11d20 - 0xf6, 0x11d40 - 0xf6 },
    { L"Bulleta LK Zapped", 0x11d40 - 0xf6, 0x11d60 - 0xf6 },
    { L"Bulleta MK Zapped", 0x11d60 - 0xf6, 0x11d80 - 0xf6 },
    { L"Bulleta HK Zapped", 0x11d80 - 0xf6, 0x11da0 - 0xf6 },
    { L"Bulleta PP Zapped", 0x11da0 - 0xf6, 0x11dc0 - 0xf6 },
    { L"Bulleta KK Zapped", 0x11dc0 - 0xf6, 0x11de0 - 0xf6 },
    { L"Bulleta AP Zapped", 0x11de0 - 0xf6, 0x11e00 - 0xf6 },
    { L"Bulleta AK Zapped", 0x11e00 - 0xf6, 0x11e20 - 0xf6 },
    { L"Bulleta LP Burned", 0x11e20 - 0xf6, 0x11e40 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta MP Burned", 0x11e40 - 0xf6, 0x11e60 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta HP Burned", 0x11e60 - 0xf6, 0x11e80 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta LK Burned", 0x11e80 - 0xf6, 0x11ea0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta MK Burned", 0x11ea0 - 0xf6, 0x11ec0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta HK Burned", 0x11ec0 - 0xf6, 0x11ee0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta PP Burned", 0x11ee0 - 0xf6, 0x11f00 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta KK Burned", 0x11f00 - 0xf6, 0x11f20 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta AP Burned", 0x11f20 - 0xf6, 0x11f40 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta AK Burned", 0x11f40 - 0xf6, 0x11f60 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta LP Pharaoh's Curse", 0x11f60 - 0xf6, 0x11f80 - 0xf6 },
    { L"Bulleta MP Pharaoh's Curse", 0x11f80 - 0xf6, 0x11fa0 - 0xf6 },
    { L"Bulleta HP Pharaoh's Curse", 0x11fa0 - 0xf6, 0x11fc0 - 0xf6 },
    { L"Bulleta LK Pharaoh's Curse", 0x11fc0 - 0xf6, 0x11fe0 - 0xf6 },
    { L"Bulleta MK Pharaoh's Curse", 0x11fe0 - 0xf6, 0x12000 - 0xf6 },
    { L"Bulleta HK Pharaoh's Curse", 0x12000 - 0xf6, 0x12020 - 0xf6 },
    { L"Bulleta PP Pharaoh's Curse", 0x12020 - 0xf6, 0x12040 - 0xf6 },
    { L"Bulleta KK Pharaoh's Curse", 0x12040 - 0xf6, 0x12060 - 0xf6 },
    { L"Bulleta AP Pharaoh's Curse", 0x12060 - 0xf6, 0x12080 - 0xf6 },
    { L"Bulleta AK Pharaoh's Curse", 0x12080 - 0xf6, 0x120a0 - 0xf6 },
    { L"Bulleta LP Midnight Bliss", 0x12280 - 0xf6, 0x122a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MP Midnight Bliss", 0x122a0 - 0xf6, 0x122c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HP Midnight Bliss", 0x122c0 - 0xf6, 0x122e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta LK Midnight Bliss", 0x122e0 - 0xf6, 0x12300 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MK Midnight Bliss", 0x12300 - 0xf6, 0x12320 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HK Midnight Bliss", 0x12320 - 0xf6, 0x12340 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta PP Midnight Bliss", 0x12340 - 0xf6, 0x12360 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta KK Midnight Bliss", 0x12360 - 0xf6, 0x12380 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AP Midnight Bliss", 0x12380 - 0xf6, 0x123a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AK Midnight Bliss", 0x123a0 - 0xf6, 0x123c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta ES 1", 0x120a0 - 0xf6, 0x120c0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta ES 2", 0x120c0 - 0xf6, 0x120e0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta ES 3", 0x120e0 - 0xf6, 0x12100 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta ES 4", 0x12100 - 0xf6, 0x12120 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 1", 0x12120 - 0xf6, 0x12140 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 2", 0x12140 - 0xf6, 0x12160 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 3", 0x12160 - 0xf6, 0x12180 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 4", 0x12180 - 0xf6, 0x121a0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 5", 0x121a0 - 0xf6, 0x121c0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 6", 0x121c0 - 0xf6, 0x121e0 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 7", 0x121e0 - 0xf6, 0x12200 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta EX 8", 0x12200 - 0xf6, 0x12220 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta Prova di Servo", 0x12220 - 0xf6, 0x12240 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta Finale Rosso", 0x12240 - 0xf6, 0x12260 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta Stone", 0x12260 - 0xf6, 0x12280 - 0xf6, indexCPS2_BBHood },
    { L"Bulleta Q-Bee's QJ Honey", 0x123c0 - 0xf6, 0x123e0 - 0xf6, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_SHARED[] =
{
    { L"Apple for You", 0x1a82a, 0x1a84a },
    { L"Man in suit", 0x1a84a, 0x1a86a, indexCPS2_BBHood, 0x09 },
    { L"Bottle", 0x1a86a, 0x1a88a, indexCPS2_BBHood, 0x07 },
    { L"LP Sentimental Typhoon 1", 0x1a88a, 0x1a8aa },
    { L"LP Sentimental Typhoon 2", 0x1a9ca, 0x1a9ea },
    { L"MP Sentimental Typhoon 1", 0x1a8aa, 0x1a8ca },
    { L"MP Sentimental Typhoon 2", 0x1a9ea, 0x1aa0a },
    { L"HP Sentimental Typhoon 1", 0x1a8ca, 0x1a8ea },
    { L"HP Sentimental Typhoon 2", 0x1aa0a, 0x1aa2a },
    { L"LK Sentimental Typhoon 1", 0x1a8ea, 0x1a90a },
    { L"LK Sentimental Typhoon 2", 0x1aa2a, 0x1aa4a },
    { L"MK Sentimental Typhoon 1", 0x1a90a, 0x1a92a },
    { L"MK Sentimental Typhoon 2", 0x1aa4a, 0x1aa6a },
    { L"HK Sentimental Typhoon 1", 0x1a92a, 0x1a94a },
    { L"HK Sentimental Typhoon 2", 0x1aa6a, 0x1aa8a },
    { L"3P Sentimental Typhoon 1", 0x1a94a, 0x1a96a },
    { L"3P Sentimental Typhoon 2", 0x1aa8a, 0x1aaaa },
    { L"3K Sentimental Typhoon 1", 0x1a96a, 0x1a98a },
    { L"3K Sentimental Typhoon 2", 0x1aaaa, 0x1aaca },
    { L"AP Sentimental Typhoon 1", 0x1a98a, 0x1a9aa },
    { L"AP Sentimental Typhoon 2", 0x1aaca, 0x1aaea },
    { L"AK Sentimental Typhoon 1", 0x1a9aa, 0x1a9ca },
    { L"AK Sentimental Typhoon 2", 0x1aaea, 0x1ab0a },
    { L"Water", 0x1ab0a, 0x1ab2a },
    { L"Water (unused?)", 0x1ab2a, 0x1ab4a },
    { L"Hunters", 0x1abaa, 0x1abca, indexCPS2_BBHood, 0x08 },

    { L"Bulleta P1 Dark Force 1", 0x1abca, 0x1abea, indexCPS2_BBHood },
    { L"Bulleta P1 Dark Force 2", 0x1abea, 0x1ac0a, indexCPS2_BBHood },
    { L"Bulleta P1 Dark Force 3", 0x1ac0a, 0x1ac2a, indexCPS2_BBHood },
    { L"Bulleta P1 Dark Force 4", 0x1ac2a, 0x1ac4a, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 1", 0x1ac4a, 0x1ac6a, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 2", 0x1ac6a, 0x1ac8a, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 3", 0x1ac8a, 0x1acaa, indexCPS2_BBHood },
    { L"Bulleta P2 Dark Force 4", 0x1acaa, 0x1acca, indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01b08a, 0x01b0aa, indexCPS2_Vamp_Zabel },
    { L"P1 Dark Force 2/4", 0x01b0aa, 0x01b0ca, indexCPS2_Vamp_Zabel },
    { L"P1 Dark Force 3/4", 0x01b0ca, 0x01b0ea, indexCPS2_Vamp_Zabel },
    { L"P1 Dark Force 4/4", 0x01b0ea, 0x01b10a, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 1/4", 0X01b10a, 0x01b12a, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 2/4", 0x01b12a, 0x01b14a, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 3/4", 0x01b14a, 0x01b16a, indexCPS2_Vamp_Zabel },
    { L"P2 Dark Force 4/4", 0x01b16a, 0x01b18a, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01b5ea, 0x01b60a, indexCPS2_Vamp_Bishamon },
    { L"P1 Dark Force 2/4", 0x01b60a, 0x01b62a, indexCPS2_Vamp_Bishamon },
    { L"P1 Dark Force 3/4", 0x01b62a, 0x01b64a, indexCPS2_Vamp_Bishamon },
    { L"P1 Dark Force 4/4", 0x01b64a, 0x01b66a, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 1/4", 0x01b66a, 0x01b68a, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 2/4", 0x01b68a, 0x01b6aa, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 3/4", 0x01b6aa, 0x01b6ca, indexCPS2_Vamp_Bishamon },
    { L"P2 Dark Force 4/4", 0x01b6ca, 0x01b6ea, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01bd4a, 0x01bd6a, indexCPS2_Vamp_Sasquatch },
    { L"P1 Dark Force 2/4", 0x01bd6a, 0x01bd8a, indexCPS2_Vamp_Sasquatch },
    { L"P1 Dark Force 3/4", 0x01bd8a, 0x01bdaa, indexCPS2_Vamp_Sasquatch },
    { L"P1 Dark Force 4/4", 0x01bdaa, 0x01bdca, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 1/4", 0x01bdca, 0x01bdea, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 2/4", 0x01bdea, 0x01be0a, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 3/4", 0x01be0a, 0x01be2a, indexCPS2_Vamp_Sasquatch },
    { L"P2 Dark Force 4/4", 0x01be2a, 0x01be4a, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { L"Demitri LP Poisoned", 0x123e0 - 0xf6, 0x12400 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Poisoned", 0x12400 - 0xf6, 0x12420 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Poisoned", 0x12420 - 0xf6, 0x12440 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Poisoned", 0x12440 - 0xf6, 0x12460 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Poisoned", 0x12460 - 0xf6, 0x12480 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Poisoned", 0x12480 - 0xf6, 0x124a0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Poisoned", 0x124a0 - 0xf6, 0x124c0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Poisoned", 0x124c0 - 0xf6, 0x124e0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Poisoned", 0x124e0 - 0xf6, 0x12500 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Poisoned", 0x12500 - 0xf6, 0x12520 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri LP Zapped", 0x12520 - 0xf6, 0x12540 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri MP Zapped", 0x12540 - 0xf6, 0x12560 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri HP Zapped", 0x12560 - 0xf6, 0x12580 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri LK Zapped", 0x12580 - 0xf6, 0x125a0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri MK Zapped", 0x125a0 - 0xf6, 0x125c0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri HK Zapped", 0x125c0 - 0xf6, 0x125e0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri PP Zapped", 0x125e0 - 0xf6, 0x12600 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri KK Zapped", 0x12600 - 0xf6, 0x12620 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri AP Zapped", 0x12620 - 0xf6, 0x12640 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri AK Zapped", 0x12640 - 0xf6, 0x12660 - 0xf6, indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri LP Burned", 0x12660 - 0xf6, 0x12680 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Burned", 0x12680 - 0xf6, 0x126a0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Burned", 0x126a0 - 0xf6, 0x126c0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Burned", 0x126c0 - 0xf6, 0x126e0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Burned", 0x126e0 - 0xf6, 0x12700 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Burned", 0x12700 - 0xf6, 0x12720 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Burned", 0x12720 - 0xf6, 0x12740 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Burned", 0x12740 - 0xf6, 0x12760 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Burned", 0x12760 - 0xf6, 0x12780 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Burned", 0x12780 - 0xf6, 0x127a0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri LP Pharaoh's Curse", 0x127a0 - 0xf6, 0x127c0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MP Pharaoh's Curse", 0x127c0 - 0xf6, 0x127e0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HP Pharaoh's Curse", 0x127e0 - 0xf6, 0x12800 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri LK Pharaoh's Curse", 0x12800 - 0xf6, 0x12820 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MK Pharaoh's Curse", 0x12820 - 0xf6, 0x12840 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HK Pharaoh's Curse", 0x12840 - 0xf6, 0x12860 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri PP Pharaoh's Curse", 0x12860 - 0xf6, 0x12880 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri KK Pharaoh's Curse", 0x12880 - 0xf6, 0x128a0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AP Pharaoh's Curse", 0x128a0 - 0xf6, 0x128c0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AK Pharaoh's Curse", 0x128c0 - 0xf6, 0x128e0 - 0xf6, indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri LP Midnight Bliss", 0x12ac0 - 0xf6, 0x12ae0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Midnight Bliss", 0x12ae0 - 0xf6, 0x12b00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Midnight Bliss", 0x12b00 - 0xf6, 0x12b20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Midnight Bliss", 0x12b20 - 0xf6, 0x12b40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Midnight Bliss", 0x12b40 - 0xf6, 0x12b60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Midnight Bliss", 0x12b60 - 0xf6, 0x12b80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Midnight Bliss", 0x12b80 - 0xf6, 0x12ba0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Midnight Bliss", 0x12ba0 - 0xf6, 0x12bc0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Midnight Bliss", 0x12bc0 - 0xf6, 0x12be0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Midnight Bliss", 0x12be0 - 0xf6, 0x12c00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 1", 0x128e0 - 0xf6, 0x12900 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 2", 0x12900 - 0xf6, 0x12920 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 3", 0x12920 - 0xf6, 0x12940 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri ES 4", 0x12940 - 0xf6, 0x12960 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 1", 0x12960 - 0xf6, 0x12980 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 2", 0x12980 - 0xf6, 0x129a0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 3", 0x129a0 - 0xf6, 0x129c0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 4", 0x129c0 - 0xf6, 0x129e0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 5", 0x129e0 - 0xf6, 0x12a00 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 6", 0x12a00 - 0xf6, 0x12a20 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 7", 0x12a20 - 0xf6, 0x12a40 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri EX 8", 0x12a40 - 0xf6, 0x12a60 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri Prova di Servo", 0x12a60 - 0xf6, 0x12a80 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri Finale Rosso", 0x12a80 - 0xf6, 0x12aa0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri Stone", 0x12aa0 - 0xf6, 0x12ac0 - 0xf6, indexCPS2_Vamp_Demitri },
    { L"Demitri Q-Bee's QJ Honey", 0x12c00 - 0xf6, 0x12c20 - 0xf6, indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_SPECIAL[] =
{
    { L"Gallon LP Poisoned", 0x12c20 - 0xf6, 0x12c40 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Poisoned", 0x12c40 - 0xf6, 0x12c60 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Poisoned", 0x12c60 - 0xf6, 0x12c80 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Poisoned", 0x12c80 - 0xf6, 0x12ca0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Poisoned", 0x12ca0 - 0xf6, 0x12cc0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Poisoned", 0x12cc0 - 0xf6, 0x12ce0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Poisoned", 0x12ce0 - 0xf6, 0x12d00 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Poisoned", 0x12d00 - 0xf6, 0x12d20 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Poisoned", 0x12d20 - 0xf6, 0x12d40 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Poisoned", 0x12d40 - 0xf6, 0x12d60 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon LP Zapped", 0x12d60 - 0xf6, 0x12d80 - 0xf6 },
    { L"Gallon MP Zapped", 0x12d80 - 0xf6, 0x12da0 - 0xf6 },
    { L"Gallon HP Zapped", 0x12da0 - 0xf6, 0x12dc0 - 0xf6 },
    { L"Gallon LK Zapped", 0x12dc0 - 0xf6, 0x12de0 - 0xf6 },
    { L"Gallon MK Zapped", 0x12de0 - 0xf6, 0x12e00 - 0xf6 },
    { L"Gallon HK Zapped", 0x12e00 - 0xf6, 0x12e20 - 0xf6 },
    { L"Gallon PP Zapped", 0x12e20 - 0xf6, 0x12e40 - 0xf6 },
    { L"Gallon KK Zapped", 0x12e40 - 0xf6, 0x12e60 - 0xf6 },
    { L"Gallon AP Zapped", 0x12e60 - 0xf6, 0x12e80 - 0xf6 },
    { L"Gallon AK Zapped", 0x12e80 - 0xf6, 0x12ea0 - 0xf6 },
    { L"Gallon LP Burned", 0x12ea0 - 0xf6, 0x12ec0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Burned", 0x12ec0 - 0xf6, 0x12ee0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Burned", 0x12ee0 - 0xf6, 0x12f00 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Burned", 0x12f00 - 0xf6, 0x12f20 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Burned", 0x12f20 - 0xf6, 0x12f40 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Burned", 0x12f40 - 0xf6, 0x12f60 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Burned", 0x12f60 - 0xf6, 0x12f80 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Burned", 0x12f80 - 0xf6, 0x12fa0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Burned", 0x12fa0 - 0xf6, 0x12fc0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Burned", 0x12fc0 - 0xf6, 0x12fe0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon LP Pharaoh's Curse", 0x12fe0 - 0xf6, 0x13000 - 0xf6 },
    { L"Gallon MP Pharaoh's Curse", 0x13000 - 0xf6, 0x13020 - 0xf6 },
    { L"Gallon HP Pharaoh's Curse", 0x13020 - 0xf6, 0x13040 - 0xf6 },
    { L"Gallon LK Pharaoh's Curse", 0x13040 - 0xf6, 0x13060 - 0xf6 },
    { L"Gallon MK Pharaoh's Curse", 0x13060 - 0xf6, 0x13080 - 0xf6 },
    { L"Gallon HK Pharaoh's Curse", 0x13080 - 0xf6, 0x130a0 - 0xf6 },
    { L"Gallon PP Pharaoh's Curse", 0x130a0 - 0xf6, 0x130c0 - 0xf6 },
    { L"Gallon KK Pharaoh's Curse", 0x130c0 - 0xf6, 0x130e0 - 0xf6 },
    { L"Gallon AP Pharaoh's Curse", 0x130e0 - 0xf6, 0x13100 - 0xf6 },
    { L"Gallon AK Pharaoh's Curse", 0x13100 - 0xf6, 0x13120 - 0xf6 },
    { L"Gallon LP Midnight Bliss", 0x13300 - 0xf6, 0x13320 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Midnight Bliss", 0x13320 - 0xf6, 0x13340 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Midnight Bliss", 0x13340 - 0xf6, 0x13360 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Midnight Bliss", 0x13360 - 0xf6, 0x13380 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Midnight Bliss", 0x13380 - 0xf6, 0x133a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Midnight Bliss", 0x133a0 - 0xf6, 0x133c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Midnight Bliss", 0x133c0 - 0xf6, 0x133e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Midnight Bliss", 0x133e0 - 0xf6, 0x13400 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Midnight Bliss", 0x13400 - 0xf6, 0x13420 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Midnight Bliss", 0x13420 - 0xf6, 0x13440 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 1", 0x13120 - 0xf6, 0x13140 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 2", 0x13140 - 0xf6, 0x13160 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 3", 0x13160 - 0xf6, 0x13180 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon ES 4", 0x13180 - 0xf6, 0x131a0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 1", 0x131a0 - 0xf6, 0x131c0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 2", 0x131c0 - 0xf6, 0x131e0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 3", 0x131e0 - 0xf6, 0x13200 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 4", 0x13200 - 0xf6, 0x13220 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 5", 0x13220 - 0xf6, 0x13240 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 6", 0x13240 - 0xf6, 0x13260 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 7", 0x13260 - 0xf6, 0x13280 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon EX 8", 0x13280 - 0xf6, 0x132a0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon Prova di Servo", 0x132a0 - 0xf6, 0x132c0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon Finale Rosso", 0x132c0 - 0xf6, 0x132e0 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon Stone", 0x132e0 - 0xf6, 0x13300 - 0xf6, indexCPS2_Vamp_Gallon },
    { L"Gallon Q-Bee's QJ Honey", 0x13440 - 0xf6, 0x13460 - 0xf6, indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_SPECIAL[] =
{
    { L"Victor LP Poisoned", 0x13460 - 0xf6, 0x13480 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor MP Poisoned", 0x13480 - 0xf6, 0x134a0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor HP Poisoned", 0x134a0 - 0xf6, 0x134c0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor LK Poisoned", 0x134c0 - 0xf6, 0x134e0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor MK Poisoned", 0x134e0 - 0xf6, 0x13500 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor HK Poisoned", 0x13500 - 0xf6, 0x13520 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor PP Poisoned", 0x13520 - 0xf6, 0x13540 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor KK Poisoned", 0x13540 - 0xf6, 0x13560 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor AP Poisoned", 0x13560 - 0xf6, 0x13580 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor AK Poisoned", 0x13580 - 0xf6, 0x135a0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor LP Zapped", 0x135a0 - 0xf6, 0x135c0 - 0xf6 },
    { L"Victor MP Zapped", 0x135c0 - 0xf6, 0x135e0 - 0xf6 },
    { L"Victor HP Zapped", 0x135e0 - 0xf6, 0x13600 - 0xf6 },
    { L"Victor LK Zapped", 0x13600 - 0xf6, 0x13620 - 0xf6 },
    { L"Victor MK Zapped", 0x13620 - 0xf6, 0x13640 - 0xf6 },
    { L"Victor HK Zapped", 0x13640 - 0xf6, 0x13660 - 0xf6 },
    { L"Victor PP Zapped", 0x13660 - 0xf6, 0x13680 - 0xf6 },
    { L"Victor KK Zapped", 0x13680 - 0xf6, 0x136a0 - 0xf6 },
    { L"Victor AP Zapped", 0x136a0 - 0xf6, 0x136c0 - 0xf6 },
    { L"Victor AK Zapped", 0x136c0 - 0xf6, 0x136e0 - 0xf6 },
    { L"Victor LP Burned", 0x136e0 - 0xf6, 0x13700 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor MP Burned", 0x13700 - 0xf6, 0x13720 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor HP Burned", 0x13720 - 0xf6, 0x13740 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor LK Burned", 0x13740 - 0xf6, 0x13760 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor MK Burned", 0x13760 - 0xf6, 0x13780 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor HK Burned", 0x13780 - 0xf6, 0x137a0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor PP Burned", 0x137a0 - 0xf6, 0x137c0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor KK Burned", 0x137c0 - 0xf6, 0x137e0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor AP Burned", 0x137e0 - 0xf6, 0x13800 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor AK Burned", 0x13800 - 0xf6, 0x13820 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor LP Pharaoh's Curse", 0x13820 - 0xf6, 0x13840 - 0xf6 },
    { L"Victor MP Pharaoh's Curse", 0x13840 - 0xf6, 0x13860 - 0xf6 },
    { L"Victor HP Pharaoh's Curse", 0x13860 - 0xf6, 0x13880 - 0xf6 },
    { L"Victor LK Pharaoh's Curse", 0x13880 - 0xf6, 0x138a0 - 0xf6 },
    { L"Victor MK Pharaoh's Curse", 0x138a0 - 0xf6, 0x138c0 - 0xf6 },
    { L"Victor HK Pharaoh's Curse", 0x138c0 - 0xf6, 0x138e0 - 0xf6 },
    { L"Victor PP Pharaoh's Curse", 0x138e0 - 0xf6, 0x13900 - 0xf6 },
    { L"Victor KK Pharaoh's Curse", 0x13900 - 0xf6, 0x13920 - 0xf6 },
    { L"Victor AP Pharaoh's Curse", 0x13920 - 0xf6, 0x13940 - 0xf6 },
    { L"Victor AK Pharaoh's Curse", 0x13940 - 0xf6, 0x13960 - 0xf6 },
    { L"Victor LP Midnight Bliss", 0x13b40 - 0xf6, 0x13b60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MP Midnight Bliss", 0x13b60 - 0xf6, 0x13b80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HP Midnight Bliss", 0x13b80 - 0xf6, 0x13ba0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor LK Midnight Bliss", 0x13ba0 - 0xf6, 0x13bc0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MK Midnight Bliss", 0x13bc0 - 0xf6, 0x13be0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HK Midnight Bliss", 0x13be0 - 0xf6, 0x13c00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor PP Midnight Bliss", 0x13c00 - 0xf6, 0x13c20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor KK Midnight Bliss", 0x13c20 - 0xf6, 0x13c40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AP Midnight Bliss", 0x13c40 - 0xf6, 0x13c60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AK Midnight Bliss", 0x13c60 - 0xf6, 0x13c80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor ES 1", 0x13960 - 0xf6, 0x13980 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor ES 2", 0x13980 - 0xf6, 0x139a0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor ES 3", 0x139a0 - 0xf6, 0x139c0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor ES 4", 0x139c0 - 0xf6, 0x139e0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 1", 0x139e0 - 0xf6, 0x13a00 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 2", 0x13a00 - 0xf6, 0x13a20 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 3", 0x13a20 - 0xf6, 0x13a40 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 4", 0x13a40 - 0xf6, 0x13a60 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 5", 0x13a60 - 0xf6, 0x13a80 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 6", 0x13a80 - 0xf6, 0x13aa0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 7", 0x13aa0 - 0xf6, 0x13ac0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor EX 8", 0x13ac0 - 0xf6, 0x13ae0 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor Prova di Servo", 0x13ae0 - 0xf6, 0x13b00 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor Finale Rosso", 0x13b00 - 0xf6, 0x13b20 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor Stone", 0x13b20 - 0xf6, 0x13b40 - 0xf6, indexCPS2_Vamp_Victor },
    { L"Victor Q-Bee's QJ Honey", 0x13c80 - 0xf6, 0x13ca0 - 0xf6, indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_SHARED[] =
{
    { L"Emily", 0x01af2a, 0x01af4a },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_SPECIAL[] =
{
    { L"Zabel LP Poisoned", 0x13ca0 - 0xf6, 0x13cc0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Poisoned", 0x13cc0 - 0xf6, 0x13ce0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Poisoned", 0x13ce0 - 0xf6, 0x13d00 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Poisoned", 0x13d00 - 0xf6, 0x13d20 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Poisoned", 0x13d20 - 0xf6, 0x13d40 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Poisoned", 0x13d40 - 0xf6, 0x13d60 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Poisoned", 0x13d60 - 0xf6, 0x13d80 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Poisoned", 0x13d80 - 0xf6, 0x13da0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Poisoned", 0x13da0 - 0xf6, 0x13dc0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Poisoned", 0x13dc0 - 0xf6, 0x13de0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel LP Zapped", 0x13de0 - 0xf6, 0x13e00 - 0xf6 },
    { L"Zabel MP Zapped", 0x13e00 - 0xf6, 0x13e20 - 0xf6 },
    { L"Zabel HP Zapped", 0x13e20 - 0xf6, 0x13e40 - 0xf6 },
    { L"Zabel LK Zapped", 0x13e40 - 0xf6, 0x13e60 - 0xf6 },
    { L"Zabel MK Zapped", 0x13e60 - 0xf6, 0x13e80 - 0xf6 },
    { L"Zabel HK Zapped", 0x13e80 - 0xf6, 0x13ea0 - 0xf6 },
    { L"Zabel PP Zapped", 0x13ea0 - 0xf6, 0x13ec0 - 0xf6 },
    { L"Zabel KK Zapped", 0x13ec0 - 0xf6, 0x13ee0 - 0xf6 },
    { L"Zabel AP Zapped", 0x13ee0 - 0xf6, 0x13f00 - 0xf6 },
    { L"Zabel AK Zapped", 0x13f00 - 0xf6, 0x13f20 - 0xf6 },
    { L"Zabel LP Burned", 0x13f20 - 0xf6, 0x13f40 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Burned", 0x13f40 - 0xf6, 0x13f60 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Burned", 0x13f60 - 0xf6, 0x13f80 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Burned", 0x13f80 - 0xf6, 0x13fa0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Burned", 0x13fa0 - 0xf6, 0x13fc0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Burned", 0x13fc0 - 0xf6, 0x13fe0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Burned", 0x13fe0 - 0xf6, 0x14000 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Burned", 0x14000 - 0xf6, 0x14020 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Burned", 0x14020 - 0xf6, 0x14040 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Burned", 0x14040 - 0xf6, 0x14060 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel LP Pharaoh's Curse", 0x14060 - 0xf6, 0x14080 - 0xf6 },
    { L"Zabel MP Pharaoh's Curse", 0x14080 - 0xf6, 0x140a0 - 0xf6 },
    { L"Zabel HP Pharaoh's Curse", 0x140a0 - 0xf6, 0x140c0 - 0xf6 },
    { L"Zabel LK Pharaoh's Curse", 0x140c0 - 0xf6, 0x140e0 - 0xf6 },
    { L"Zabel MK Pharaoh's Curse", 0x140e0 - 0xf6, 0x14100 - 0xf6 },
    { L"Zabel HK Pharaoh's Curse", 0x14100 - 0xf6, 0x14120 - 0xf6 },
    { L"Zabel PP Pharaoh's Curse", 0x14120 - 0xf6, 0x14140 - 0xf6 },
    { L"Zabel KK Pharaoh's Curse", 0x14140 - 0xf6, 0x14160 - 0xf6 },
    { L"Zabel AP Pharaoh's Curse", 0x14160 - 0xf6, 0x14180 - 0xf6 },
    { L"Zabel AK Pharaoh's Curse", 0x14180 - 0xf6, 0x141a0 - 0xf6 },
    { L"Zabel LP Midnight Bliss", 0x14380 - 0xf6, 0x143a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Midnight Bliss", 0x143a0 - 0xf6, 0x143c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Midnight Bliss", 0x143c0 - 0xf6, 0x143e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Midnight Bliss", 0x143e0 - 0xf6, 0x14400 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Midnight Bliss", 0x14400 - 0xf6, 0x14420 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Midnight Bliss", 0x14420 - 0xf6, 0x14440 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Midnight Bliss", 0x14440 - 0xf6, 0x14460 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Midnight Bliss", 0x14460 - 0xf6, 0x14480 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Midnight Bliss", 0x14480 - 0xf6, 0x144a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Midnight Bliss", 0x144a0 - 0xf6, 0x144c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 1", 0x141a0 - 0xf6, 0x141c0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 2", 0x141c0 - 0xf6, 0x141e0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 3", 0x141e0 - 0xf6, 0x14200 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel ES 4", 0x14200 - 0xf6, 0x14220 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 1", 0x14220 - 0xf6, 0x14240 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 2", 0x14240 - 0xf6, 0x14260 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 3", 0x14260 - 0xf6, 0x14280 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 4", 0x14280 - 0xf6, 0x142a0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 5", 0x142a0 - 0xf6, 0x142c0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 6", 0x142c0 - 0xf6, 0x142e0 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 7", 0x142e0 - 0xf6, 0x14300 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel EX 8", 0x14300 - 0xf6, 0x14320 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel Prova di Servo", 0x14320 - 0xf6, 0x14340 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel Finale Rosso", 0x14340 - 0xf6, 0x14360 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel Stone", 0x14360 - 0xf6, 0x14380 - 0xf6, indexCPS2_Vamp_Zabel },
    { L"Zabel Q-Bee's QJ Honey", 0x144c0 - 0xf6, 0x144e0 - 0xf6, indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_SPECIAL[] =
{
    { L"Morrigan LP Poisoned", 0x144e0 - 0xf6, 0x14500 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MP Poisoned", 0x14500 - 0xf6, 0x14520 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HP Poisoned", 0x14520 - 0xf6, 0x14540 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LK Poisoned", 0x14540 - 0xf6, 0x14560 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MK Poisoned", 0x14560 - 0xf6, 0x14580 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HK Poisoned", 0x14580 - 0xf6, 0x145a0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan PP Poisoned", 0x145a0 - 0xf6, 0x145c0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan KK Poisoned", 0x145c0 - 0xf6, 0x145e0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AP Poisoned", 0x145e0 - 0xf6, 0x14600 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AK Poisoned", 0x14600 - 0xf6, 0x14620 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LP Zapped", 0x14620 - 0xf6, 0x14640 - 0xf6 },
    { L"Morrigan MP Zapped", 0x14640 - 0xf6, 0x14660 - 0xf6 },
    { L"Morrigan HP Zapped", 0x14660 - 0xf6, 0x14680 - 0xf6 },
    { L"Morrigan LK Zapped", 0x14680 - 0xf6, 0x146a0 - 0xf6 },
    { L"Morrigan MK Zapped", 0x146a0 - 0xf6, 0x146c0 - 0xf6 },
    { L"Morrigan HK Zapped", 0x146c0 - 0xf6, 0x146e0 - 0xf6 },
    { L"Morrigan PP Zapped", 0x146e0 - 0xf6, 0x14700 - 0xf6 },
    { L"Morrigan KK Zapped", 0x14700 - 0xf6, 0x14720 - 0xf6 },
    { L"Morrigan AP Zapped", 0x14720 - 0xf6, 0x14740 - 0xf6 },
    { L"Morrigan AK Zapped", 0x14740 - 0xf6, 0x14760 - 0xf6 },
    { L"Morrigan LP Burned", 0x14760 - 0xf6, 0x14780 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MP Burned", 0x14780 - 0xf6, 0x147a0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HP Burned", 0x147a0 - 0xf6, 0x147c0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LK Burned", 0x147c0 - 0xf6, 0x147e0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan MK Burned", 0x147e0 - 0xf6, 0x14800 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan HK Burned", 0x14800 - 0xf6, 0x14820 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan PP Burned", 0x14820 - 0xf6, 0x14840 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan KK Burned", 0x14840 - 0xf6, 0x14860 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AP Burned", 0x14860 - 0xf6, 0x14880 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan AK Burned", 0x14880 - 0xf6, 0x148a0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan LP Pharaoh's Curse", 0x148a0 - 0xf6, 0x148c0 - 0xf6 },
    { L"Morrigan MP Pharaoh's Curse", 0x148c0 - 0xf6, 0x148e0 - 0xf6 },
    { L"Morrigan HP Pharaoh's Curse", 0x148e0 - 0xf6, 0x14900 - 0xf6 },
    { L"Morrigan LK Pharaoh's Curse", 0x14900 - 0xf6, 0x14920 - 0xf6 },
    { L"Morrigan MK Pharaoh's Curse", 0x14920 - 0xf6, 0x14940 - 0xf6 },
    { L"Morrigan HK Pharaoh's Curse", 0x14940 - 0xf6, 0x14960 - 0xf6 },
    { L"Morrigan PP Pharaoh's Curse", 0x14960 - 0xf6, 0x14980 - 0xf6 },
    { L"Morrigan KK Pharaoh's Curse", 0x14980 - 0xf6, 0x149a0 - 0xf6 },
    { L"Morrigan AP Pharaoh's Curse", 0x149a0 - 0xf6, 0x149c0 - 0xf6 },
    { L"Morrigan AK Pharaoh's Curse", 0x149c0 - 0xf6, 0x149e0 - 0xf6 },
    { L"Morrigan LP Midnight Bliss", 0x14bc0 - 0xf6, 0x14be0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MP Midnight Bliss", 0x14be0 - 0xf6, 0x14c00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HP Midnight Bliss", 0x14c00 - 0xf6, 0x14c20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan LK Midnight Bliss", 0x14c20 - 0xf6, 0x14c40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MK Midnight Bliss", 0x14c40 - 0xf6, 0x14c60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HK Midnight Bliss", 0x14c60 - 0xf6, 0x14c80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan PP Midnight Bliss", 0x14c80 - 0xf6, 0x14ca0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan KK Midnight Bliss", 0x14ca0 - 0xf6, 0x14cc0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AP Midnight Bliss", 0x14cc0 - 0xf6, 0x14ce0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AK Midnight Bliss", 0x14ce0 - 0xf6, 0x14d00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan ES 1", 0x149e0 - 0xf6, 0x14a00 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan ES 2", 0x14a00 - 0xf6, 0x14a20 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan ES 3", 0x14a20 - 0xf6, 0x14a40 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan ES 4", 0x14a40 - 0xf6, 0x14a60 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 1", 0x14a60 - 0xf6, 0x14a80 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 2", 0x14a80 - 0xf6, 0x14aa0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 3", 0x14aa0 - 0xf6, 0x14ac0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 4", 0x14ac0 - 0xf6, 0x14ae0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 5", 0x14ae0 - 0xf6, 0x14b00 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 6", 0x14b00 - 0xf6, 0x14b20 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 7", 0x14b20 - 0xf6, 0x14b40 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan EX 8", 0x14b40 - 0xf6, 0x14b60 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Prova di Servo", 0x14b60 - 0xf6, 0x14b80 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Finale Rosso", 0x14b80 - 0xf6, 0x14ba0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Stone", 0x14ba0 - 0xf6, 0x14bc0 - 0xf6, indexCPS2_Morrigan, 0x00 },
    { L"Morrigan Q-Bee's QJ Honey", 0x14d00 - 0xf6, 0x14d20 - 0xf6, indexCPS2_Morrigan, 0x00 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_SPECIAL[] =
{
    { L"Anakaris LP Poisoned", 0x14d20 - 0xf6, 0x14d40 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris MP Poisoned", 0x14d40 - 0xf6, 0x14d60 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris HP Poisoned", 0x14d60 - 0xf6, 0x14d80 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris LK Poisoned", 0x14d80 - 0xf6, 0x14da0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris MK Poisoned", 0x14da0 - 0xf6, 0x14dc0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris HK Poisoned", 0x14dc0 - 0xf6, 0x14de0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris PP Poisoned", 0x14de0 - 0xf6, 0x14e00 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris KK Poisoned", 0x14e00 - 0xf6, 0x14e20 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris AP Poisoned", 0x14e20 - 0xf6, 0x14e40 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris AK Poisoned", 0x14e40 - 0xf6, 0x14e60 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris LP Zapped", 0x14e60 - 0xf6, 0x14e80 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris MP Zapped", 0x14e80 - 0xf6, 0x14ea0 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris HP Zapped", 0x14ea0 - 0xf6, 0x14ec0 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris LK Zapped", 0x14ec0 - 0xf6, 0x14ee0 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris MK Zapped", 0x14ee0 - 0xf6, 0x14f00 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris HK Zapped", 0x14f00 - 0xf6, 0x14f20 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris PP Zapped", 0x14f20 - 0xf6, 0x14f40 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris KK Zapped", 0x14f40 - 0xf6, 0x14f60 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris AP Zapped", 0x14f60 - 0xf6, 0x14f80 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris AK Zapped", 0x14f80 - 0xf6, 0x14fa0 - 0xf6, indexCPS2_Anakaris, 0x0a },
    { L"Anakaris LP Burned", 0x14fa0 - 0xf6, 0x14fc0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris MP Burned", 0x14fc0 - 0xf6, 0x14fe0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris HP Burned", 0x14fe0 - 0xf6, 0x15000 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris LK Burned", 0x15000 - 0xf6, 0x15020 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris MK Burned", 0x15020 - 0xf6, 0x15040 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris HK Burned", 0x15040 - 0xf6, 0x15060 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris PP Burned", 0x15060 - 0xf6, 0x15080 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris KK Burned", 0x15080 - 0xf6, 0x150a0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris AP Burned", 0x150a0 - 0xf6, 0x150c0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris AK Burned", 0x150c0 - 0xf6, 0x150e0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris LP Pharaoh's Curse", 0x150e0 - 0xf6, 0x15100 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MP Pharaoh's Curse", 0x15100 - 0xf6, 0x15120 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HP Pharaoh's Curse", 0x15120 - 0xf6, 0x15140 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris LK Pharaoh's Curse", 0x15140 - 0xf6, 0x15160 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MK Pharaoh's Curse", 0x15160 - 0xf6, 0x15180 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HK Pharaoh's Curse", 0x15180 - 0xf6, 0x151a0 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris PP Pharaoh's Curse", 0x151a0 - 0xf6, 0x151c0 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris KK Pharaoh's Curse", 0x151c0 - 0xf6, 0x151e0 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AP Pharaoh's Curse", 0x151e0 - 0xf6, 0x15200 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AK Pharaoh's Curse", 0x15200 - 0xf6, 0x15220 - 0xf6, indexCPS2_Anakaris, 0x0d },
    { L"Anakaris LP Midnight Bliss", 0x15400 - 0xf6, 0x15420 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MP Midnight Bliss", 0x15420 - 0xf6, 0x15440 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HP Midnight Bliss", 0x15440 - 0xf6, 0x15460 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris LK Midnight Bliss", 0x15460 - 0xf6, 0x15480 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MK Midnight Bliss", 0x15480 - 0xf6, 0x154a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HK Midnight Bliss", 0x154a0 - 0xf6, 0x154c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris PP Midnight Bliss", 0x154c0 - 0xf6, 0x154e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris KK Midnight Bliss", 0x154e0 - 0xf6, 0x15500 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AP Midnight Bliss", 0x15500 - 0xf6, 0x15520 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AK Midnight Bliss", 0x15520 - 0xf6, 0x15540 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris ES 1", 0x15220 - 0xf6, 0x15240 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris ES 2", 0x15240 - 0xf6, 0x15260 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris ES 3", 0x15260 - 0xf6, 0x15280 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris ES 4", 0x15280 - 0xf6, 0x152a0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 1", 0x152a0 - 0xf6, 0x152c0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 2", 0x152c0 - 0xf6, 0x152e0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 3", 0x152e0 - 0xf6, 0x15300 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 4", 0x15300 - 0xf6, 0x15320 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 5", 0x15320 - 0xf6, 0x15340 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 6", 0x15340 - 0xf6, 0x15360 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 7", 0x15360 - 0xf6, 0x15380 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris EX 8", 0x15380 - 0xf6, 0x153a0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris Prova di Servo", 0x153a0 - 0xf6, 0x153c0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris Finale Rosso", 0x153c0 - 0xf6, 0x153e0 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris Stone", 0x153e0 - 0xf6, 0x15400 - 0xf6, indexCPS2_Anakaris },
    { L"Anakaris Q-Bee's QJ Honey", 0x15540 - 0xf6, 0x15560 - 0xf6, indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_SPECIAL[] =
{
    { L"Felicia LP Poisoned", 0x15560 - 0xf6, 0x15580 - 0xf6, indexCPS2_Felicia },
    { L"Felicia MP Poisoned", 0x15580 - 0xf6, 0x155a0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia HP Poisoned", 0x155a0 - 0xf6, 0x155c0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia LK Poisoned", 0x155c0 - 0xf6, 0x155e0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia MK Poisoned", 0x155e0 - 0xf6, 0x15600 - 0xf6, indexCPS2_Felicia },
    { L"Felicia HK Poisoned", 0x15600 - 0xf6, 0x15620 - 0xf6, indexCPS2_Felicia },
    { L"Felicia PP Poisoned", 0x15620 - 0xf6, 0x15640 - 0xf6, indexCPS2_Felicia },
    { L"Felicia KK Poisoned", 0x15640 - 0xf6, 0x15660 - 0xf6, indexCPS2_Felicia },
    { L"Felicia AP Poisoned", 0x15660 - 0xf6, 0x15680 - 0xf6, indexCPS2_Felicia },
    { L"Felicia AK Poisoned", 0x15680 - 0xf6, 0x156a0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia LP Zapped", 0x156a0 - 0xf6, 0x156c0 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia MP Zapped", 0x156c0 - 0xf6, 0x156e0 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia HP Zapped", 0x156e0 - 0xf6, 0x15700 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia LK Zapped", 0x15700 - 0xf6, 0x15720 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia MK Zapped", 0x15720 - 0xf6, 0x15740 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia HK Zapped", 0x15740 - 0xf6, 0x15760 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia PP Zapped", 0x15760 - 0xf6, 0x15780 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia KK Zapped", 0x15780 - 0xf6, 0x157a0 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia AP Zapped", 0x157a0 - 0xf6, 0x157c0 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia AK Zapped", 0x157c0 - 0xf6, 0x157e0 - 0xf6, indexCPS2_Felicia, 0x0a },
    { L"Felicia LP Burned", 0x157e0 - 0xf6, 0x15800 - 0xf6, indexCPS2_Felicia },
    { L"Felicia MP Burned", 0x15800 - 0xf6, 0x15820 - 0xf6, indexCPS2_Felicia },
    { L"Felicia HP Burned", 0x15820 - 0xf6, 0x15840 - 0xf6, indexCPS2_Felicia },
    { L"Felicia LK Burned", 0x15840 - 0xf6, 0x15860 - 0xf6, indexCPS2_Felicia },
    { L"Felicia MK Burned", 0x15860 - 0xf6, 0x15880 - 0xf6, indexCPS2_Felicia },
    { L"Felicia HK Burned", 0x15880 - 0xf6, 0x158a0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia PP Burned", 0x158a0 - 0xf6, 0x158c0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia KK Burned", 0x158c0 - 0xf6, 0x158e0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia AP Burned", 0x158e0 - 0xf6, 0x15900 - 0xf6, indexCPS2_Felicia },
    { L"Felicia AK Burned", 0x15900 - 0xf6, 0x15920 - 0xf6, indexCPS2_Felicia },
    { L"Felicia LP Pharaoh's Curse", 0x15920 - 0xf6, 0x15940 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia MP Pharaoh's Curse", 0x15940 - 0xf6, 0x15960 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia HP Pharaoh's Curse", 0x15960 - 0xf6, 0x15980 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia LK Pharaoh's Curse", 0x15980 - 0xf6, 0x159a0 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia MK Pharaoh's Curse", 0x159a0 - 0xf6, 0x159c0 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia HK Pharaoh's Curse", 0x159c0 - 0xf6, 0x159e0 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia PP Pharaoh's Curse", 0x159e0 - 0xf6, 0x15a00 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia KK Pharaoh's Curse", 0x15a00 - 0xf6, 0x15a20 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia AP Pharaoh's Curse", 0x15a20 - 0xf6, 0x15a40 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia AK Pharaoh's Curse", 0x15a40 - 0xf6, 0x15a60 - 0xf6, indexCPS2_Felicia, 0x0d },
    { L"Felicia LP Midnight Bliss", 0x15c40 - 0xf6, 0x15c60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MP Midnight Bliss", 0x15c60 - 0xf6, 0x15c80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HP Midnight Bliss", 0x15c80 - 0xf6, 0x15ca0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia LK Midnight Bliss", 0x15ca0 - 0xf6, 0x15cc0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MK Midnight Bliss", 0x15cc0 - 0xf6, 0x15ce0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HK Midnight Bliss", 0x15ce0 - 0xf6, 0x15d00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia PP Midnight Bliss", 0x15d00 - 0xf6, 0x15d20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia KK Midnight Bliss", 0x15d20 - 0xf6, 0x15d40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AP Midnight Bliss", 0x15d40 - 0xf6, 0x15d60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AK Midnight Bliss", 0x15d60 - 0xf6, 0x15d80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia ES 1", 0x15a60 - 0xf6, 0x15a80 - 0xf6, indexCPS2_Felicia },
    { L"Felicia ES 2", 0x15a80 - 0xf6, 0x15aa0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia ES 3", 0x15aa0 - 0xf6, 0x15ac0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia ES 4", 0x15ac0 - 0xf6, 0x15ae0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 1", 0x15ae0 - 0xf6, 0x15b00 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 2", 0x15b00 - 0xf6, 0x15b20 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 3", 0x15b20 - 0xf6, 0x15b40 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 4", 0x15b40 - 0xf6, 0x15b60 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 5", 0x15b60 - 0xf6, 0x15b80 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 6", 0x15b80 - 0xf6, 0x15ba0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 7", 0x15ba0 - 0xf6, 0x15bc0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia EX 8", 0x15bc0 - 0xf6, 0x15be0 - 0xf6, indexCPS2_Felicia },
    { L"Felicia Prova di Servo", 0x15be0 - 0xf6, 0x15c00 - 0xf6, indexCPS2_Felicia },
    { L"Felicia Finale Rosso", 0x15c00 - 0xf6, 0x15c20 - 0xf6, indexCPS2_Felicia },
    { L"Felicia Stone", 0x15c20 - 0xf6, 0x15c40 - 0xf6, indexCPS2_Felicia },
    { L"Felicia Q-Bee's QJ Honey", 0x15d80 - 0xf6, 0x15da0 - 0xf6, indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_SPECIAL[] =
{
    { L"Bishamon LP Poisoned", 0x15da0 - 0xf6, 0x15dc0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Poisoned", 0x15dc0 - 0xf6, 0x15de0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Poisoned", 0x15de0 - 0xf6, 0x15e00 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Poisoned", 0x15e00 - 0xf6, 0x15e20 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Poisoned", 0x15e20 - 0xf6, 0x15e40 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Poisoned", 0x15e40 - 0xf6, 0x15e60 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Poisoned", 0x15e60 - 0xf6, 0x15e80 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Poisoned", 0x15e80 - 0xf6, 0x15ea0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Poisoned", 0x15ea0 - 0xf6, 0x15ec0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Poisoned", 0x15ec0 - 0xf6, 0x15ee0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Zapped", 0x15ee0 - 0xf6, 0x15f00 - 0xf6 },
    { L"Bishamon MP Zapped", 0x15f00 - 0xf6, 0x15f20 - 0xf6 },
    { L"Bishamon HP Zapped", 0x15f20 - 0xf6, 0x15f40 - 0xf6 },
    { L"Bishamon LK Zapped", 0x15f40 - 0xf6, 0x15f60 - 0xf6 },
    { L"Bishamon MK Zapped", 0x15f60 - 0xf6, 0x15f80 - 0xf6 },
    { L"Bishamon HK Zapped", 0x15f80 - 0xf6, 0x15fa0 - 0xf6 },
    { L"Bishamon PP Zapped", 0x15fa0 - 0xf6, 0x15fc0 - 0xf6 },
    { L"Bishamon KK Zapped", 0x15fc0 - 0xf6, 0x15fe0 - 0xf6 },
    { L"Bishamon AP Zapped", 0x15fe0 - 0xf6, 0x16000 - 0xf6 },
    { L"Bishamon AK Zapped", 0x16000 - 0xf6, 0x16020 - 0xf6 },
    { L"Bishamon LP Burned", 0x16020 - 0xf6, 0x16040 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Burned", 0x16040 - 0xf6, 0x16060 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Burned", 0x16060 - 0xf6, 0x16080 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Burned", 0x16080 - 0xf6, 0x160a0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Burned", 0x160a0 - 0xf6, 0x160c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Burned", 0x160c0 - 0xf6, 0x160e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Burned", 0x160e0 - 0xf6, 0x16100 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Burned", 0x16100 - 0xf6, 0x16120 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Burned", 0x16120 - 0xf6, 0x16140 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Burned", 0x16140 - 0xf6, 0x16160 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Pharaoh's Curse", 0x16160 - 0xf6, 0x16180 - 0xf6 },
    { L"Bishamon MP Pharaoh's Curse", 0x16180 - 0xf6, 0x161a0 - 0xf6 },
    { L"Bishamon HP Pharaoh's Curse", 0x161a0 - 0xf6, 0x161c0 - 0xf6 },
    { L"Bishamon LK Pharaoh's Curse", 0x161c0 - 0xf6, 0x161e0 - 0xf6 },
    { L"Bishamon MK Pharaoh's Curse", 0x161e0 - 0xf6, 0x16200 - 0xf6 },
    { L"Bishamon HK Pharaoh's Curse", 0x16200 - 0xf6, 0x16220 - 0xf6 },
    { L"Bishamon PP Pharaoh's Curse", 0x16220 - 0xf6, 0x16240 - 0xf6 },
    { L"Bishamon KK Pharaoh's Curse", 0x16240 - 0xf6, 0x16260 - 0xf6 },
    { L"Bishamon AP Pharaoh's Curse", 0x16260 - 0xf6, 0x16280 - 0xf6 },
    { L"Bishamon AK Pharaoh's Curse", 0x16280 - 0xf6, 0x162a0 - 0xf6 },
    { L"Bishamon LP Midnight Bliss", 0x16480 - 0xf6, 0x164a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Midnight Bliss", 0x164a0 - 0xf6, 0x164c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Midnight Bliss", 0x164c0 - 0xf6, 0x164e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Midnight Bliss", 0x164e0 - 0xf6, 0x16500 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Midnight Bliss", 0x16500 - 0xf6, 0x16520 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Midnight Bliss", 0x16520 - 0xf6, 0x16540 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Midnight Bliss", 0x16540 - 0xf6, 0x16560 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Midnight Bliss", 0x16560 - 0xf6, 0x16580 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Midnight Bliss", 0x16580 - 0xf6, 0x165a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Midnight Bliss", 0x165a0 - 0xf6, 0x165c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 1", 0x162a0 - 0xf6, 0x162c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 2", 0x162c0 - 0xf6, 0x162e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 3", 0x162e0 - 0xf6, 0x16300 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 4", 0x16300 - 0xf6, 0x16320 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 1", 0x16320 - 0xf6, 0x16340 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 2", 0x16340 - 0xf6, 0x16360 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 3", 0x16360 - 0xf6, 0x16380 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 4", 0x16380 - 0xf6, 0x163a0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 5", 0x163a0 - 0xf6, 0x163c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 6", 0x163c0 - 0xf6, 0x163e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 7", 0x163e0 - 0xf6, 0x16400 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 8", 0x16400 - 0xf6, 0x16420 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Prova di Servo", 0x16420 - 0xf6, 0x16440 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Finale Rosso", 0x16440 - 0xf6, 0x16460 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Stone", 0x16460 - 0xf6, 0x16480 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Q-Bee's QJ Honey", 0x165c0 - 0xf6, 0x165e0 - 0xf6, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_SPECIAL[] =
{
    { L"Aulbath LP Poisoned", 0x165e0 - 0xf6, 0x16600 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Poisoned", 0x16600 - 0xf6, 0x16620 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Poisoned", 0x16620 - 0xf6, 0x16640 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Poisoned", 0x16640 - 0xf6, 0x16660 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Poisoned", 0x16660 - 0xf6, 0x16680 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Poisoned", 0x16680 - 0xf6, 0x166a0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Poisoned", 0x166a0 - 0xf6, 0x166c0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Poisoned", 0x166c0 - 0xf6, 0x166e0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Poisoned", 0x166e0 - 0xf6, 0x16700 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Poisoned", 0x16700 - 0xf6, 0x16720 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Zapped", 0x16720 - 0xf6, 0x16740 - 0xf6 },
    { L"Aulbath MP Zapped", 0x16740 - 0xf6, 0x16760 - 0xf6 },
    { L"Aulbath HP Zapped", 0x16760 - 0xf6, 0x16780 - 0xf6 },
    { L"Aulbath LK Zapped", 0x16780 - 0xf6, 0x167a0 - 0xf6 },
    { L"Aulbath MK Zapped", 0x167a0 - 0xf6, 0x167c0 - 0xf6 },
    { L"Aulbath HK Zapped", 0x167c0 - 0xf6, 0x167e0 - 0xf6 },
    { L"Aulbath PP Zapped", 0x167e0 - 0xf6, 0x16800 - 0xf6 },
    { L"Aulbath KK Zapped", 0x16800 - 0xf6, 0x16820 - 0xf6 },
    { L"Aulbath AP Zapped", 0x16820 - 0xf6, 0x16840 - 0xf6 },
    { L"Aulbath AK Zapped", 0x16840 - 0xf6, 0x16860 - 0xf6 },
    { L"Aulbath LP Burned", 0x16860 - 0xf6, 0x16880 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Burned", 0x16880 - 0xf6, 0x168a0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Burned", 0x168a0 - 0xf6, 0x168c0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Burned", 0x168c0 - 0xf6, 0x168e0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Burned", 0x168e0 - 0xf6, 0x16900 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Burned", 0x16900 - 0xf6, 0x16920 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Burned", 0x16920 - 0xf6, 0x16940 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Burned", 0x16940 - 0xf6, 0x16960 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Burned", 0x16960 - 0xf6, 0x16980 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Burned", 0x16980 - 0xf6, 0x169a0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Pharaoh's Curse", 0x169a0 - 0xf6, 0x169c0 - 0xf6 },
    { L"Aulbath MP Pharaoh's Curse", 0x169c0 - 0xf6, 0x169e0 - 0xf6 },
    { L"Aulbath HP Pharaoh's Curse", 0x169e0 - 0xf6, 0x16a00 - 0xf6 },
    { L"Aulbath LK Pharaoh's Curse", 0x16a00 - 0xf6, 0x16a20 - 0xf6 },
    { L"Aulbath MK Pharaoh's Curse", 0x16a20 - 0xf6, 0x16a40 - 0xf6 },
    { L"Aulbath HK Pharaoh's Curse", 0x16a40 - 0xf6, 0x16a60 - 0xf6 },
    { L"Aulbath PP Pharaoh's Curse", 0x16a60 - 0xf6, 0x16a80 - 0xf6 },
    { L"Aulbath KK Pharaoh's Curse", 0x16a80 - 0xf6, 0x16aa0 - 0xf6 },
    { L"Aulbath AP Pharaoh's Curse", 0x16aa0 - 0xf6, 0x16ac0 - 0xf6 },
    { L"Aulbath AK Pharaoh's Curse", 0x16ac0 - 0xf6, 0x16ae0 - 0xf6 },
    { L"Aulbath LP Midnight Bliss", 0x16cc0 - 0xf6, 0x16ce0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Midnight Bliss", 0x16ce0 - 0xf6, 0x16d00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Midnight Bliss", 0x16d00 - 0xf6, 0x16d20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Midnight Bliss", 0x16d20 - 0xf6, 0x16d40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Midnight Bliss", 0x16d40 - 0xf6, 0x16d60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Midnight Bliss", 0x16d60 - 0xf6, 0x16d80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Midnight Bliss", 0x16d80 - 0xf6, 0x16da0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Midnight Bliss", 0x16da0 - 0xf6, 0x16dc0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Midnight Bliss", 0x16dc0 - 0xf6, 0x16de0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Midnight Bliss", 0x16de0 - 0xf6, 0x16e00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 1", 0x16ae0 - 0xf6, 0x16b00 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 2", 0x16b00 - 0xf6, 0x16b20 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 3", 0x16b20 - 0xf6, 0x16b40 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 4", 0x16b40 - 0xf6, 0x16b60 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 1", 0x16b60 - 0xf6, 0x16b80 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 2", 0x16b80 - 0xf6, 0x16ba0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 3", 0x16ba0 - 0xf6, 0x16bc0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 4", 0x16bc0 - 0xf6, 0x16be0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 5", 0x16be0 - 0xf6, 0x16c00 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 6", 0x16c00 - 0xf6, 0x16c20 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 7", 0x16c20 - 0xf6, 0x16c40 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 8", 0x16c40 - 0xf6, 0x16c60 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Prova di Servo", 0x16c60 - 0xf6, 0x16c80 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Finale Rosso", 0x16c80 - 0xf6, 0x16ca0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Stone", 0x16ca0 - 0xf6, 0x16cc0 - 0xf6, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Q-Bee's QJ Honey", 0x16e00 - 0xf6, 0x16e20 - 0xf6, indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_SPECIAL[] =
{
    { L"Sasquatch LP Poisoned", 0x16e20 - 0xf6, 0x16e40 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Poisoned", 0x16e40 - 0xf6, 0x16e60 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Poisoned", 0x16e60 - 0xf6, 0x16e80 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Poisoned", 0x16e80 - 0xf6, 0x16ea0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Poisoned", 0x16ea0 - 0xf6, 0x16ec0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Poisoned", 0x16ec0 - 0xf6, 0x16ee0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Poisoned", 0x16ee0 - 0xf6, 0x16f00 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Poisoned", 0x16f00 - 0xf6, 0x16f20 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Poisoned", 0x16f20 - 0xf6, 0x16f40 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Poisoned", 0x16f40 - 0xf6, 0x16f60 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Zapped", 0x16f60 - 0xf6, 0x16f80 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch MP Zapped", 0x16f80 - 0xf6, 0x16fa0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch HP Zapped", 0x16fa0 - 0xf6, 0x16fc0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch LK Zapped", 0x16fc0 - 0xf6, 0x16fe0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch MK Zapped", 0x16fe0 - 0xf6, 0x17000 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch HK Zapped", 0x17000 - 0xf6, 0x17020 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch PP Zapped", 0x17020 - 0xf6, 0x17040 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch KK Zapped", 0x17040 - 0xf6, 0x17060 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch AP Zapped", 0x17060 - 0xf6, 0x17080 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch AK Zapped", 0x17080 - 0xf6, 0x170a0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch LP Burned", 0x170a0 - 0xf6, 0x170c0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Burned", 0x170c0 - 0xf6, 0x170e0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Burned", 0x170e0 - 0xf6, 0x17100 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Burned", 0x17100 - 0xf6, 0x17120 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Burned", 0x17120 - 0xf6, 0x17140 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Burned", 0x17140 - 0xf6, 0x17160 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Burned", 0x17160 - 0xf6, 0x17180 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Burned", 0x17180 - 0xf6, 0x171a0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Burned", 0x171a0 - 0xf6, 0x171c0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Burned", 0x171c0 - 0xf6, 0x171e0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Pharaoh's Curse", 0x171e0 - 0xf6, 0x17200 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MP Pharaoh's Curse", 0x17200 - 0xf6, 0x17220 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HP Pharaoh's Curse", 0x17220 - 0xf6, 0x17240 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LK Pharaoh's Curse", 0x17240 - 0xf6, 0x17260 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MK Pharaoh's Curse", 0x17260 - 0xf6, 0x17280 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HK Pharaoh's Curse", 0x17280 - 0xf6, 0x172a0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch PP Pharaoh's Curse", 0x172a0 - 0xf6, 0x172c0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch KK Pharaoh's Curse", 0x172c0 - 0xf6, 0x172e0 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AP Pharaoh's Curse", 0x172e0 - 0xf6, 0x17300 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AK Pharaoh's Curse", 0x17300 - 0xf6, 0x17320 - 0xf6, indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LP Midnight Bliss", 0x17500 - 0xf6, 0x17520 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Midnight Bliss", 0x17520 - 0xf6, 0x17540 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Midnight Bliss", 0x17540 - 0xf6, 0x17560 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Midnight Bliss", 0x17560 - 0xf6, 0x17580 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Midnight Bliss", 0x17580 - 0xf6, 0x175a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Midnight Bliss", 0x175a0 - 0xf6, 0x175c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Midnight Bliss", 0x175c0 - 0xf6, 0x175e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Midnight Bliss", 0x175e0 - 0xf6, 0x17600 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Midnight Bliss", 0x17600 - 0xf6, 0x17620 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Midnight Bliss", 0x17620 - 0xf6, 0x17640 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 1", 0x17320 - 0xf6, 0x17340 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 2", 0x17340 - 0xf6, 0x17360 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 3", 0x17360 - 0xf6, 0x17380 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 4", 0x17380 - 0xf6, 0x173a0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 1", 0x173a0 - 0xf6, 0x173c0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 2", 0x173c0 - 0xf6, 0x173e0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 3", 0x173e0 - 0xf6, 0x17400 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 4", 0x17400 - 0xf6, 0x17420 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 5", 0x17420 - 0xf6, 0x17440 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 6", 0x17440 - 0xf6, 0x17460 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 7", 0x17460 - 0xf6, 0x17480 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 8", 0x17480 - 0xf6, 0x174a0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Prova di Servo", 0x174a0 - 0xf6, 0x174c0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Finale Rosso", 0x174c0 - 0xf6, 0x174e0 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Stone", 0x174e0 - 0xf6, 0x17500 - 0xf6, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Q-Bee's QJ Honey", 0x17640 - 0xf6, 0x17660 - 0xf6, indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QBEE_PALETTES_SPECIAL[] =
{
    { L"Q-Bee LP Poisoned", 0x17660 - 0xf6, 0x17680 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LP Wings/Honey Poisoned", 0x01edaa, 0x01edca, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MP Poisoned", 0x17680 - 0xf6, 0x176a0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MP Wings/Honey Poisoned", 0x01edca, 0x01edea, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HP Poisoned", 0x176a0 - 0xf6, 0x176c0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HP Wings/Honey Poisoned", 0x01edea, 0x01ee0a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LK Poisoned", 0x176c0 - 0xf6, 0x176e0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LK Wings/Honey Poisoned", 0x01ee0a, 0x01ee2a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MK Poisoned", 0x176e0 - 0xf6, 0x17700 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MK Wings/Honey Poisoned", 0x01ee2a, 0x01ee4a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HK Poisoned", 0x17700 - 0xf6, 0x17720 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HK Wings/Honey Poisoned", 0x01ee4a, 0x01ee6a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee PP Poisoned", 0x17720 - 0xf6, 0x17740 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"PP Wings/Honey Poisoned", 0x01ee6a, 0x01ee8a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee KK Poisoned", 0x17740 - 0xf6, 0x17760 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"KK Wings/Honey Poisoned", 0x01ee8a, 0x01eeaa, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AP Poisoned", 0x17760 - 0xf6, 0x17780 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AP Wings/Honey Poisoned", 0x01eeaa, 0x01eeca, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AK Poisoned", 0x17780 - 0xf6, 0x177a0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AK Wings/Honey Poisoned", 0x01eeca, 0x01eeea, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LP Zapped", 0x177a0 - 0xf6, 0x177c0 - 0xf6 },
    { L"Q-Bee MP Zapped", 0x177c0 - 0xf6, 0x177e0 - 0xf6 },
    { L"Q-Bee HP Zapped", 0x177e0 - 0xf6, 0x17800 - 0xf6 },
    { L"Q-Bee LK Zapped", 0x17800 - 0xf6, 0x17820 - 0xf6 },
    { L"Q-Bee MK Zapped", 0x17820 - 0xf6, 0x17840 - 0xf6 },
    { L"Q-Bee HK Zapped", 0x17840 - 0xf6, 0x17860 - 0xf6 },
    { L"Q-Bee PP Zapped", 0x17860 - 0xf6, 0x17880 - 0xf6 },
    { L"Q-Bee KK Zapped", 0x17880 - 0xf6, 0x178a0 - 0xf6 },
    { L"Q-Bee AP Zapped", 0x178a0 - 0xf6, 0x178c0 - 0xf6 },
    { L"Q-Bee AK Zapped", 0x178c0 - 0xf6, 0x178e0 - 0xf6 },
    { L"Q-Bee LP Burned", 0x178e0 - 0xf6, 0x17900 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LP Wings/Honey Burned", 0x01f02a, 0x01f04a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MP Burned", 0x17900 - 0xf6, 0x17920 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MP Wings/Honey Burned", 0x01f04a, 0x01f06a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HP Burned", 0x17920 - 0xf6, 0x17940 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HP Wings/Honey Burned", 0x01f06a, 0x01f08a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LK Burned", 0x17940 - 0xf6, 0x17960 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"LK Wings/Honey Burned", 0x01f08a, 0x01f0aa, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee MK Burned", 0x17960 - 0xf6, 0x17980 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"MK Wings/Honey Burned", 0x01f0aa, 0x01f0ca, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee HK Burned", 0x17980 - 0xf6, 0x179a0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"HK Wings/Honey Burned", 0x01f0ca, 0x01f0ea, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee PP Burned", 0x179a0 - 0xf6, 0x179c0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"PP Wings/Honey Burned", 0x01f0ea, 0x01f10a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee KK Burned", 0x179c0 - 0xf6, 0x179e0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"KK Wings/Honey Burned", 0x01f10a, 0x01f12a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AP Burned", 0x179e0 - 0xf6, 0x17a00 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AP Wings/Honey Burned", 0x01f12a, 0x01f14a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee AK Burned", 0x17a00 - 0xf6, 0x17a20 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"AK Wings/Honey Burned", 0x01f14a, 0x01f16a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee LP Pharaoh's Curse", 0x17a20 - 0xf6, 0x17a40 - 0xf6 },
    { L"Q-Bee MP Pharaoh's Curse", 0x17a40 - 0xf6, 0x17a60 - 0xf6 },
    { L"Q-Bee HP Pharaoh's Curse", 0x17a60 - 0xf6, 0x17a80 - 0xf6 },
    { L"Q-Bee LK Pharaoh's Curse", 0x17a80 - 0xf6, 0x17aa0 - 0xf6 },
    { L"Q-Bee MK Pharaoh's Curse", 0x17aa0 - 0xf6, 0x17ac0 - 0xf6 },
    { L"Q-Bee HK Pharaoh's Curse", 0x17ac0 - 0xf6, 0x17ae0 - 0xf6 },
    { L"Q-Bee PP Pharaoh's Curse", 0x17ae0 - 0xf6, 0x17b00 - 0xf6 },
    { L"Q-Bee KK Pharaoh's Curse", 0x17b00 - 0xf6, 0x17b20 - 0xf6 },
    { L"Q-Bee AP Pharaoh's Curse", 0x17b20 - 0xf6, 0x17b40 - 0xf6 },
    { L"Q-Bee AK Pharaoh's Curse", 0x17b40 - 0xf6, 0x17b60 - 0xf6 },
    { L"Q-Bee LP Midnight Bliss", 0x17d40 - 0xf6, 0x17d60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Midnight Bliss", 0x17d60 - 0xf6, 0x17d80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Midnight Bliss", 0x17d80 - 0xf6, 0x17da0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Midnight Bliss", 0x17da0 - 0xf6, 0x17dc0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Midnight Bliss", 0x17dc0 - 0xf6, 0x17de0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Midnight Bliss", 0x17de0 - 0xf6, 0x17e00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Midnight Bliss", 0x17e00 - 0xf6, 0x17e20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Midnight Bliss", 0x17e20 - 0xf6, 0x17e40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Midnight Bliss", 0x17e40 - 0xf6, 0x17e60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Midnight Bliss", 0x17e60 - 0xf6, 0x17e80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 1", 0x17b60 - 0xf6, 0x17b80 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 1/4", 0x01f2aa, 0x01f2ca, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee ES 2", 0x17b80 - 0xf6, 0x17ba0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 2/4", 0x01f2ca, 0x01f2ea, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee ES 3", 0x17ba0 - 0xf6, 0x17bc0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 3/4", 0x01f2ea, 0x01f30a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee ES 4", 0x17bc0 - 0xf6, 0x17be0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 4/4", 0x01f30a, 0x01f32a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 1", 0x17be0 - 0xf6, 0x17c00 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 1/8", 0x01f32a, 0x01f34a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 2", 0x17c00 - 0xf6, 0x17c20 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 2/8", 0x01f34a, 0x01f36a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 3", 0x17c20 - 0xf6, 0x17c40 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 3/8", 0x01f36a, 0x01f38a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 4", 0x17c40 - 0xf6, 0x17c60 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 4/8", 0x01f38a, 0x01f3aa, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 5", 0x17c60 - 0xf6, 0x17c80 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 5/8", 0x01f3aa, 0x01f3ca, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 6", 0x17c80 - 0xf6, 0x17ca0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 6/8", 0x01f3ca, 0x01f3ea, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 7", 0x17ca0 - 0xf6, 0x17cc0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 7/8", 0x01f3ea, 0x01f40a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee EX 8", 0x17cc0 - 0xf6, 0x17ce0 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 8/8", 0x01f40a, 0x01f42a, indexCPS2_Vamp_QBee, 1 },

    { L"Q-Bee Prova di Servo", 0x17ce0 - 0xf6, 0x17d00 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Prova di Servo", 0x01f42a, 0x01f44a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee Finale Rosso", 0x17d00 - 0xf6, 0x17d20 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Finale Rosso", 0x01f44a, 0x01f46a, indexCPS2_Vamp_QBee, 1 },
    { L"Q-Bee Stone", 0x17d20 - 0xf6, 0x17d40 - 0xf6, indexCPS2_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Stone", 0x01f46a, 0x01f48a, indexCPS2_Vamp_QBee, 1 },

    { L"Q-Bee Q-Bee's QJ Honey", 0x17e80 - 0xf6, 0x17ea0 - 0xf6, indexCPS2_Vamp_QBee },

    { L"LP Dark Force 1/4", 0x01f48a, 0x01f4aa, indexCPS2_Vamp_QBee },
    { L"LP Dark Force 2/4", 0x01f4aa, 0x01f4ca, indexCPS2_Vamp_QBee },
    { L"LP Dark Force 3/4", 0x01f4ca, 0x01f4ea, indexCPS2_Vamp_QBee },
    { L"LP Dark Force 4/4", 0x01f4ea, 0x01f50a, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 1/4", 0x01f50a, 0x01f52a, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 2/4", 0x01f52a, 0x01f54a, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 3/4", 0x01f54a, 0x01f56a, indexCPS2_Vamp_QBee },
    { L"MP Dark Force 4/4", 0x01f56a, 0x01f58a, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 1/4", 0x01f58a, 0x01f5aa, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 2/4", 0x01f5aa, 0x01f5ca, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 3/4", 0x01f5ca, 0x01f5ea, indexCPS2_Vamp_QBee },
    { L"HP Dark Force 4/4", 0x01f5ea, 0x01f60a, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 1/4", 0x01f60a, 0x01f62a, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 2/4", 0x01f62a, 0x01f64a, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 3/4", 0x01f64a, 0x01f66a, indexCPS2_Vamp_QBee },
    { L"LK Dark Force 4/4", 0x01f66a, 0x01f68a, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 1/4", 0x01f68a, 0x01f6aa, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 2/4", 0x01f6aa, 0x01f6ca, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 3/4", 0x01f6ca, 0x01f6ea, indexCPS2_Vamp_QBee },
    { L"MK Dark Force 4/4", 0x01f6ea, 0x01f70a, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 1/4", 0x01f70a, 0x01f72a, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 2/4", 0x01f72a, 0x01f74a, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 3/4", 0x01f74a, 0x01f76a, indexCPS2_Vamp_QBee },
    { L"HK Dark Force 4/4", 0x01f76a, 0x01f78a, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 1/4", 0x01f78a, 0x01f7aa, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 2/4", 0x01f7aa, 0x01f7ca, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 3/4", 0x01f7ca, 0x01f7ea, indexCPS2_Vamp_QBee },
    { L"PP Dark Force 4/4", 0x01f7ea, 0x01f80a, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 1/4", 0x01f80a, 0x01f82a, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 2/4", 0x01f82a, 0x01f84a, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 3/4", 0x01f84a, 0x01f86a, indexCPS2_Vamp_QBee },
    { L"KK Dark Force 4/4", 0x01f86a, 0x01f88a, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 1/4", 0x01f88a, 0x01f8aa, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 2/4", 0x01f8aa, 0x01f8ca, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 3/4", 0x01f8ca, 0x01f8ea, indexCPS2_Vamp_QBee },
    { L"AP Dark Force 4/4", 0x01f8ea, 0x01f90a, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 1/4", 0x01f90a, 0x01f92a, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 2/4", 0x01f92a, 0x01f94a, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 3/4", 0x01f94a, 0x01f96a, indexCPS2_Vamp_QBee },
    { L"AK Dark Force 4/4", 0x01f96a, 0x01f98a, indexCPS2_Vamp_QBee },

    { L"LP Bees Win Pose", 0x01be4a, 0x01be6a, indexCPS2_Vamp_QBee },
    { L"MP Bees Win Pose", 0x01be6a, 0x01be8a, indexCPS2_Vamp_QBee },
    { L"HP Bees Win Pose", 0x01be8a, 0x01beaa, indexCPS2_Vamp_QBee },
    { L"LK Bees Win Pose", 0x01beaa, 0x01beca, indexCPS2_Vamp_QBee },
    { L"MK Bees Win Pose", 0x01beca, 0x01beea, indexCPS2_Vamp_QBee },
    { L"HK Bees Win Pose", 0x01beea, 0x01bf0a, indexCPS2_Vamp_QBee },
    { L"PP Bees Win Pose", 0x01bf0a, 0x01bf2a, indexCPS2_Vamp_QBee },
    { L"KK Bees Win Pose", 0x01bf2a, 0x01bf4a, indexCPS2_Vamp_QBee },
    { L"AP Bees Win Pose", 0x01bf4a, 0x01bf6a, indexCPS2_Vamp_QBee },
    { L"AK Bees Win Pose", 0x01bf6a, 0x01bf8a, indexCPS2_Vamp_QBee },

    { L"LP Tap K", 0x01d38a, 0x01d3aa, indexCPS2_Vamp_QBee },
    { L"MP Tap K", 0x01d3aa, 0x01d3ca, indexCPS2_Vamp_QBee },
    { L"HP Tap K", 0x01d3ca, 0x01d3ea, indexCPS2_Vamp_QBee },
    { L"LK Tap K", 0x01d3ea, 0x01d40a, indexCPS2_Vamp_QBee },
    { L"MK Tap K", 0x01d40a, 0x01d42a, indexCPS2_Vamp_QBee },
    { L"HK Tap K", 0x01d42a, 0x01d44a, indexCPS2_Vamp_QBee },
    { L"PP Tap K", 0x01d44a, 0x01d46a, indexCPS2_Vamp_QBee },
    { L"KK Tap K", 0x01d46a, 0x01d48a, indexCPS2_Vamp_QBee },
    { L"AP Tap K", 0x01d48a, 0x01d4aa, indexCPS2_Vamp_QBee },
    { L"AK Tap K", 0x01d4aa, 0x01d4ca, indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_SPECIAL[] =
{
    { L"Lei-Lei LP Poisoned", 0x17ea0 - 0xf6, 0x17ec0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Poisoned", 0x17ec0 - 0xf6, 0x17ee0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Poisoned", 0x17ee0 - 0xf6, 0x17f00 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Poisoned", 0x17f00 - 0xf6, 0x17f20 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Poisoned", 0x17f20 - 0xf6, 0x17f40 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Poisoned", 0x17f40 - 0xf6, 0x17f60 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Poisoned", 0x17f60 - 0xf6, 0x17f80 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Poisoned", 0x17f80 - 0xf6, 0x17fa0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Poisoned", 0x17fa0 - 0xf6, 0x17fc0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Poisoned", 0x17fc0 - 0xf6, 0x17fe0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Zapped", 0x17fe0 - 0xf6, 0x18000 - 0xf6 },
    { L"Lei-Lei MP Zapped", 0x18000 - 0xf6, 0x18020 - 0xf6 },
    { L"Lei-Lei HP Zapped", 0x18020 - 0xf6, 0x18040 - 0xf6 },
    { L"Lei-Lei LK Zapped", 0x18040 - 0xf6, 0x18060 - 0xf6 },
    { L"Lei-Lei MK Zapped", 0x18060 - 0xf6, 0x18080 - 0xf6 },
    { L"Lei-Lei HK Zapped", 0x18080 - 0xf6, 0x180a0 - 0xf6 },
    { L"Lei-Lei PP Zapped", 0x180a0 - 0xf6, 0x180c0 - 0xf6 },
    { L"Lei-Lei KK Zapped", 0x180c0 - 0xf6, 0x180e0 - 0xf6 },
    { L"Lei-Lei AP Zapped", 0x180e0 - 0xf6, 0x18100 - 0xf6 },
    { L"Lei-Lei AK Zapped", 0x18100 - 0xf6, 0x18120 - 0xf6 },
    { L"Lei-Lei LP Burned", 0x18120 - 0xf6, 0x18140 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Burned", 0x18140 - 0xf6, 0x18160 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Burned", 0x18160 - 0xf6, 0x18180 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Burned", 0x18180 - 0xf6, 0x181a0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Burned", 0x181a0 - 0xf6, 0x181c0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Burned", 0x181c0 - 0xf6, 0x181e0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Burned", 0x181e0 - 0xf6, 0x18200 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Burned", 0x18200 - 0xf6, 0x18220 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Burned", 0x18220 - 0xf6, 0x18240 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Burned", 0x18240 - 0xf6, 0x18260 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Pharaoh's Curse", 0x18260 - 0xf6, 0x18280 - 0xf6 },
    { L"Lei-Lei MP Pharaoh's Curse", 0x18280 - 0xf6, 0x182a0 - 0xf6 },
    { L"Lei-Lei HP Pharaoh's Curse", 0x182a0 - 0xf6, 0x182c0 - 0xf6 },
    { L"Lei-Lei LK Pharaoh's Curse", 0x182c0 - 0xf6, 0x182e0 - 0xf6 },
    { L"Lei-Lei MK Pharaoh's Curse", 0x182e0 - 0xf6, 0x18300 - 0xf6 },
    { L"Lei-Lei HK Pharaoh's Curse", 0x18300 - 0xf6, 0x18320 - 0xf6 },
    { L"Lei-Lei PP Pharaoh's Curse", 0x18320 - 0xf6, 0x18340 - 0xf6 },
    { L"Lei-Lei KK Pharaoh's Curse", 0x18340 - 0xf6, 0x18360 - 0xf6 },
    { L"Lei-Lei AP Pharaoh's Curse", 0x18360 - 0xf6, 0x18380 - 0xf6 },
    { L"Lei-Lei AK Pharaoh's Curse", 0x18380 - 0xf6, 0x183a0 - 0xf6 },
    { L"Lei-Lei LP Midnight Bliss", 0x18580 - 0xf6, 0x185a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Midnight Bliss", 0x185a0 - 0xf6, 0x185c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Midnight Bliss", 0x185c0 - 0xf6, 0x185e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Midnight Bliss", 0x185e0 - 0xf6, 0x18600 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Midnight Bliss", 0x18600 - 0xf6, 0x18620 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Midnight Bliss", 0x18620 - 0xf6, 0x18640 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Midnight Bliss", 0x18640 - 0xf6, 0x18660 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Midnight Bliss", 0x18660 - 0xf6, 0x18680 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Midnight Bliss", 0x18680 - 0xf6, 0x186a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Midnight Bliss", 0x186a0 - 0xf6, 0x186c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 1", 0x183a0 - 0xf6, 0x183c0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 2", 0x183c0 - 0xf6, 0x183e0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 3", 0x183e0 - 0xf6, 0x18400 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 4", 0x18400 - 0xf6, 0x18420 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 1", 0x18420 - 0xf6, 0x18440 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 2", 0x18440 - 0xf6, 0x18460 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 3", 0x18460 - 0xf6, 0x18480 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 4", 0x18480 - 0xf6, 0x184a0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 5", 0x184a0 - 0xf6, 0x184c0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 6", 0x184c0 - 0xf6, 0x184e0 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 7", 0x184e0 - 0xf6, 0x18500 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 8", 0x18500 - 0xf6, 0x18520 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Prova di Servo", 0x18520 - 0xf6, 0x18540 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Finale Rosso", 0x18540 - 0xf6, 0x18560 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Stone", 0x18560 - 0xf6, 0x18580 - 0xf6, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Q-Bee's QJ Honey", 0x186c0 - 0xf6, 0x186e0 - 0xf6, indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_SPECIAL[] =
{
    { L"Lilith LP Poisoned", 0x186e0 - 0xf6, 0x18700 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Poisoned", 0x18700 - 0xf6, 0x18720 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Poisoned", 0x18720 - 0xf6, 0x18740 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Poisoned", 0x18740 - 0xf6, 0x18760 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Poisoned", 0x18760 - 0xf6, 0x18780 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Poisoned", 0x18780 - 0xf6, 0x187a0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Poisoned", 0x187a0 - 0xf6, 0x187c0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Poisoned", 0x187c0 - 0xf6, 0x187e0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Poisoned", 0x187e0 - 0xf6, 0x18800 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Poisoned", 0x18800 - 0xf6, 0x18820 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith LP Zapped", 0x18820 - 0xf6, 0x18840 - 0xf6 },
    { L"Lilith MP Zapped", 0x18840 - 0xf6, 0x18860 - 0xf6 },
    { L"Lilith HP Zapped", 0x18860 - 0xf6, 0x18880 - 0xf6 },
    { L"Lilith LK Zapped", 0x18880 - 0xf6, 0x188a0 - 0xf6 },
    { L"Lilith MK Zapped", 0x188a0 - 0xf6, 0x188c0 - 0xf6 },
    { L"Lilith HK Zapped", 0x188c0 - 0xf6, 0x188e0 - 0xf6 },
    { L"Lilith PP Zapped", 0x188e0 - 0xf6, 0x18900 - 0xf6 },
    { L"Lilith KK Zapped", 0x18900 - 0xf6, 0x18920 - 0xf6 },
    { L"Lilith AP Zapped", 0x18920 - 0xf6, 0x18940 - 0xf6 },
    { L"Lilith AK Zapped", 0x18940 - 0xf6, 0x18960 - 0xf6 },
    { L"Lilith LP Burned", 0x18960 - 0xf6, 0x18980 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Burned", 0x18980 - 0xf6, 0x189a0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Burned", 0x189a0 - 0xf6, 0x189c0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Burned", 0x189c0 - 0xf6, 0x189e0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Burned", 0x189e0 - 0xf6, 0x18a00 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Burned", 0x18a00 - 0xf6, 0x18a20 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Burned", 0x18a20 - 0xf6, 0x18a40 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Burned", 0x18a40 - 0xf6, 0x18a60 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Burned", 0x18a60 - 0xf6, 0x18a80 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Burned", 0x18a80 - 0xf6, 0x18aa0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith LP Pharaoh's Curse", 0x18aa0 - 0xf6, 0x18ac0 - 0xf6 },
    { L"Lilith MP Pharaoh's Curse", 0x18ac0 - 0xf6, 0x18ae0 - 0xf6 },
    { L"Lilith HP Pharaoh's Curse", 0x18ae0 - 0xf6, 0x18b00 - 0xf6 },
    { L"Lilith LK Pharaoh's Curse", 0x18b00 - 0xf6, 0x18b20 - 0xf6 },
    { L"Lilith MK Pharaoh's Curse", 0x18b20 - 0xf6, 0x18b40 - 0xf6 },
    { L"Lilith HK Pharaoh's Curse", 0x18b40 - 0xf6, 0x18b60 - 0xf6 },
    { L"Lilith PP Pharaoh's Curse", 0x18b60 - 0xf6, 0x18b80 - 0xf6 },
    { L"Lilith KK Pharaoh's Curse", 0x18b80 - 0xf6, 0x18ba0 - 0xf6 },
    { L"Lilith AP Pharaoh's Curse", 0x18ba0 - 0xf6, 0x18bc0 - 0xf6 },
    { L"Lilith AK Pharaoh's Curse", 0x18bc0 - 0xf6, 0x18be0 - 0xf6 },
    { L"Lilith LP Midnight Bliss", 0x18dc0 - 0xf6, 0x18de0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Midnight Bliss", 0x18de0 - 0xf6, 0x18e00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Midnight Bliss", 0x18e00 - 0xf6, 0x18e20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Midnight Bliss", 0x18e20 - 0xf6, 0x18e40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Midnight Bliss", 0x18e40 - 0xf6, 0x18e60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Midnight Bliss", 0x18e60 - 0xf6, 0x18e80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Midnight Bliss", 0x18e80 - 0xf6, 0x18ea0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Midnight Bliss", 0x18ea0 - 0xf6, 0x18ec0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Midnight Bliss", 0x18ec0 - 0xf6, 0x18ee0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Midnight Bliss", 0x18ee0 - 0xf6, 0x18f00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 1", 0x18be0 - 0xf6, 0x18c00 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 2", 0x18c00 - 0xf6, 0x18c20 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 3", 0x18c20 - 0xf6, 0x18c40 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith ES 4", 0x18c40 - 0xf6, 0x18c60 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 1", 0x18c60 - 0xf6, 0x18c80 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 2", 0x18c80 - 0xf6, 0x18ca0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 3", 0x18ca0 - 0xf6, 0x18cc0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 4", 0x18cc0 - 0xf6, 0x18ce0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 5", 0x18ce0 - 0xf6, 0x18d00 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 6", 0x18d00 - 0xf6, 0x18d20 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 7", 0x18d20 - 0xf6, 0x18d40 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith EX 8", 0x18d40 - 0xf6, 0x18d60 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith Prova di Servo", 0x18d60 - 0xf6, 0x18d80 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith Finale Rosso", 0x18d80 - 0xf6, 0x18da0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith Stone", 0x18da0 - 0xf6, 0x18dc0 - 0xf6, indexCPS2_Vamp_Lilith },
    { L"Lilith Q-Bee's QJ Honey", 0x18f00 - 0xf6, 0x18f20 - 0xf6, indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SPECIAL[] =
{
    { L"Jedah LP Poisoned", 0x18f20 - 0xf6, 0x18f40 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Poisoned", 0x18f40 - 0xf6, 0x18f60 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Poisoned", 0x18f60 - 0xf6, 0x18f80 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Poisoned", 0x18f80 - 0xf6, 0x18fa0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Poisoned", 0x18fa0 - 0xf6, 0x18fc0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Poisoned", 0x18fc0 - 0xf6, 0x18fe0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Poisoned", 0x18fe0 - 0xf6, 0x19000 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Poisoned", 0x19000 - 0xf6, 0x19020 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Poisoned", 0x19020 - 0xf6, 0x19040 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Poisoned", 0x19040 - 0xf6, 0x19060 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah LP Zapped", 0x19060 - 0xf6, 0x19080 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah MP Zapped", 0x19080 - 0xf6, 0x190a0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah HP Zapped", 0x190a0 - 0xf6, 0x190c0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah LK Zapped", 0x190c0 - 0xf6, 0x190e0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah MK Zapped", 0x190e0 - 0xf6, 0x19100 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah HK Zapped", 0x19100 - 0xf6, 0x19120 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah PP Zapped", 0x19120 - 0xf6, 0x19140 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah KK Zapped", 0x19140 - 0xf6, 0x19160 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah AP Zapped", 0x19160 - 0xf6, 0x19180 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah AK Zapped", 0x19180 - 0xf6, 0x191a0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah LP Burned", 0x191a0 - 0xf6, 0x191c0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Burned", 0x191c0 - 0xf6, 0x191e0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Burned", 0x191e0 - 0xf6, 0x19200 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Burned", 0x19200 - 0xf6, 0x19220 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Burned", 0x19220 - 0xf6, 0x19240 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Burned", 0x19240 - 0xf6, 0x19260 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Burned", 0x19260 - 0xf6, 0x19280 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Burned", 0x19280 - 0xf6, 0x192a0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Burned", 0x192a0 - 0xf6, 0x192c0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Burned", 0x192c0 - 0xf6, 0x192e0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah LP Pharaoh's Curse", 0x192e0 - 0xf6, 0x19300 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MP Pharaoh's Curse", 0x19300 - 0xf6, 0x19320 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HP Pharaoh's Curse", 0x19320 - 0xf6, 0x19340 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah LK Pharaoh's Curse", 0x19340 - 0xf6, 0x19360 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MK Pharaoh's Curse", 0x19360 - 0xf6, 0x19380 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HK Pharaoh's Curse", 0x19380 - 0xf6, 0x193a0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah PP Pharaoh's Curse", 0x193a0 - 0xf6, 0x193c0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah KK Pharaoh's Curse", 0x193c0 - 0xf6, 0x193e0 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AP Pharaoh's Curse", 0x193e0 - 0xf6, 0x19400 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AK Pharaoh's Curse", 0x19400 - 0xf6, 0x19420 - 0xf6, indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah LP Midnight Bliss", 0x19600 - 0xf6, 0x19620 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Midnight Bliss", 0x19620 - 0xf6, 0x19640 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Midnight Bliss", 0x19640 - 0xf6, 0x19660 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Midnight Bliss", 0x19660 - 0xf6, 0x19680 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Midnight Bliss", 0x19680 - 0xf6, 0x196a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Midnight Bliss", 0x196a0 - 0xf6, 0x196c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Midnight Bliss", 0x196c0 - 0xf6, 0x196e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Midnight Bliss", 0x196e0 - 0xf6, 0x19700 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Midnight Bliss", 0x19700 - 0xf6, 0x19720 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Midnight Bliss", 0x19720 - 0xf6, 0x19740 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 1", 0x19420 - 0xf6, 0x19440 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 2", 0x19440 - 0xf6, 0x19460 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 3", 0x19460 - 0xf6, 0x19480 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah ES 4", 0x19480 - 0xf6, 0x194a0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 1", 0x194a0 - 0xf6, 0x194c0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 2", 0x194c0 - 0xf6, 0x194e0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 3", 0x194e0 - 0xf6, 0x19500 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 4", 0x19500 - 0xf6, 0x19520 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 5", 0x19520 - 0xf6, 0x19540 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 6", 0x19540 - 0xf6, 0x19560 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 7", 0x19560 - 0xf6, 0x19580 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah EX 8", 0x19580 - 0xf6, 0x195a0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah Prova di Servo", 0x195a0 - 0xf6, 0x195c0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah Finale Rosso", 0x195c0 - 0xf6, 0x195e0 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah Stone", 0x195e0 - 0xf6, 0x19600 - 0xf6, indexCPS2_Vamp_Jedah },
    { L"Jedah Q-Bee's QJ Honey", 0x19740 - 0xf6, 0x19760 - 0xf6, indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_SPECIAL[] =
{
    { L"Oboro Bishamon LP Poisoned", 0x19fa0 - 0xf6, 0x19fc0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Poisoned", 0x19fc0 - 0xf6, 0x19fe0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Poisoned", 0x19fe0 - 0xf6, 0x1a000 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Poisoned", 0x1a000 - 0xf6, 0x1a020 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Poisoned", 0x1a020 - 0xf6, 0x1a040 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Poisoned", 0x1a040 - 0xf6, 0x1a060 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Poisoned", 0x1a060 - 0xf6, 0x1a080 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Poisoned", 0x1a080 - 0xf6, 0x1a0a0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Poisoned", 0x1a0a0 - 0xf6, 0x1a0c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Poisoned", 0x1a0c0 - 0xf6, 0x1a0e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Zapped", 0x1a0e0 - 0xf6, 0x1a100 - 0xf6 },
    { L"Oboro Bishamon MP Zapped", 0x1a100 - 0xf6, 0x1a120 - 0xf6 },
    { L"Oboro Bishamon HP Zapped", 0x1a120 - 0xf6, 0x1a140 - 0xf6 },
    { L"Oboro Bishamon LK Zapped", 0x1a140 - 0xf6, 0x1a160 - 0xf6 },
    { L"Oboro Bishamon MK Zapped", 0x1a160 - 0xf6, 0x1a180 - 0xf6 },
    { L"Oboro Bishamon HK Zapped", 0x1a180 - 0xf6, 0x1a1a0 - 0xf6 },
    { L"Oboro Bishamon PP Zapped", 0x1a1a0 - 0xf6, 0x1a1c0 - 0xf6 },
    { L"Oboro Bishamon KK Zapped", 0x1a1c0 - 0xf6, 0x1a1e0 - 0xf6 },
    { L"Oboro Bishamon AP Zapped", 0x1a1e0 - 0xf6, 0x1a200 - 0xf6 },
    { L"Oboro Bishamon AK Zapped", 0x1a200 - 0xf6, 0x1a220 - 0xf6 },
    { L"Oboro Bishamon LP Burned", 0x1a220 - 0xf6, 0x1a240 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Burned", 0x1a240 - 0xf6, 0x1a260 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Burned", 0x1a260 - 0xf6, 0x1a280 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Burned", 0x1a280 - 0xf6, 0x1a2a0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Burned", 0x1a2a0 - 0xf6, 0x1a2c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Burned", 0x1a2c0 - 0xf6, 0x1a2e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Burned", 0x1a2e0 - 0xf6, 0x1a300 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Burned", 0x1a300 - 0xf6, 0x1a320 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Burned", 0x1a320 - 0xf6, 0x1a340 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Burned", 0x1a340 - 0xf6, 0x1a360 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Pharaoh's Curse", 0x1a360 - 0xf6, 0x1a380 - 0xf6 },
    { L"Oboro Bishamon MP Pharaoh's Curse", 0x1a380 - 0xf6, 0x1a3a0 - 0xf6 },
    { L"Oboro Bishamon HP Pharaoh's Curse", 0x1a3a0 - 0xf6, 0x1a3c0 - 0xf6 },
    { L"Oboro Bishamon LK Pharaoh's Curse", 0x1a3c0 - 0xf6, 0x1a3e0 - 0xf6 },
    { L"Oboro Bishamon MK Pharaoh's Curse", 0x1a3e0 - 0xf6, 0x1a400 - 0xf6 },
    { L"Oboro Bishamon HK Pharaoh's Curse", 0x1a400 - 0xf6, 0x1a420 - 0xf6 },
    { L"Oboro Bishamon PP Pharaoh's Curse", 0x1a420 - 0xf6, 0x1a440 - 0xf6 },
    { L"Oboro Bishamon KK Pharaoh's Curse", 0x1a440 - 0xf6, 0x1a460 - 0xf6 },
    { L"Oboro Bishamon AP Pharaoh's Curse", 0x1a460 - 0xf6, 0x1a480 - 0xf6 },
    { L"Oboro Bishamon AK Pharaoh's Curse", 0x1a480 - 0xf6, 0x1a4a0 - 0xf6 },
    { L"Oboro Bishamon LP Midnight Bliss", 0x1a680 - 0xf6, 0x1a6a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MP Midnight Bliss", 0x1a6a0 - 0xf6, 0x1a6c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HP Midnight Bliss", 0x1a6c0 - 0xf6, 0x1a6e0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon LK Midnight Bliss", 0x1a6e0 - 0xf6, 0x1a700 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MK Midnight Bliss", 0x1a700 - 0xf6, 0x1a720 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HK Midnight Bliss", 0x1a720 - 0xf6, 0x1a740 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon PP Midnight Bliss", 0x1a740 - 0xf6, 0x1a760 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon KK Midnight Bliss", 0x1a760 - 0xf6, 0x1a780 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AP Midnight Bliss", 0x1a780 - 0xf6, 0x1a7a0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AK Midnight Bliss", 0x1a7a0 - 0xf6, 0x1a7c0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon ES 1", 0x1a4a0 - 0xf6, 0x1a4c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 2", 0x1a4c0 - 0xf6, 0x1a4e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 3", 0x1a4e0 - 0xf6, 0x1a500 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 4", 0x1a500 - 0xf6, 0x1a520 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 1", 0x1a520 - 0xf6, 0x1a540 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 2", 0x1a540 - 0xf6, 0x1a560 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 3", 0x1a560 - 0xf6, 0x1a580 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 4", 0x1a580 - 0xf6, 0x1a5a0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 5", 0x1a5a0 - 0xf6, 0x1a5c0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 6", 0x1a5c0 - 0xf6, 0x1a5e0 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 7", 0x1a5e0 - 0xf6, 0x1a600 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 8", 0x1a600 - 0xf6, 0x1a620 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Prova di Servo", 0x1a620 - 0xf6, 0x1a640 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Finale Rosso", 0x1a640 - 0xf6, 0x1a660 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Stone", 0x1a660 - 0xf6, 0x1a680 - 0xf6, indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Q-Bee's QJ Honey", 0x1a7c0 - 0xf6, 0x1a7e0 - 0xf6, indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_SPECIAL[] =
{
    { L"Dark Gallon Poisoned", 0x19760 - 0xf6, 0x19780 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Zapped", 0x198a0 - 0xf6, 0x198c0 - 0xf6 },
    { L"Dark Gallon Burned", 0x199e0 - 0xf6, 0x19a00 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Pharaoh's Curse", 0x19b20 - 0xf6, 0x19b40 - 0xf6 },
    { L"Dark Gallon Midnight Bliss", 0x19e40 - 0xf6, 0x19e60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon Alt Poisoned", 0x19780 - 0xf6, 0x197a0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Alt Zapped", 0x198c0 - 0xf6, 0x198e0 - 0xf6 },
    { L"Dark Gallon Alt Burned", 0x19a00 - 0xf6, 0x19a20 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Alt Pharaoh's Curse", 0x19b40 - 0xf6, 0x19b60 - 0xf6 },
    { L"Dark Gallon Alt Midnight Bliss", 0x19e60 - 0xf6, 0x19e80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon ES 1", 0x19c60 - 0xf6, 0x19c80 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 2", 0x19c80 - 0xf6, 0x19ca0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 3", 0x19ca0 - 0xf6, 0x19cc0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 4", 0x19cc0 - 0xf6, 0x19ce0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 1", 0x19ce0 - 0xf6, 0x19d00 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 2", 0x19d00 - 0xf6, 0x19d20 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 3", 0x19d20 - 0xf6, 0x19d40 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 4", 0x19d40 - 0xf6, 0x19d60 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 5", 0x19d60 - 0xf6, 0x19d80 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 6", 0x19d80 - 0xf6, 0x19da0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 7", 0x19da0 - 0xf6, 0x19dc0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 8", 0x19dc0 - 0xf6, 0x19de0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Prova di Servo", 0x19de0 - 0xf6, 0x19e00 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Finale Rosso", 0x19e00 - 0xf6, 0x19e20 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Stone", 0x19e20 - 0xf6, 0x19e40 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Q-Bee's QJ Honey", 0x19f80 - 0xf6, 0x19fa0 - 0xf6, indexCPS2_Vamp_DarkGallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_SPECIALUNUSED[] =
{
    { L"Dark Gallon HP Poisoned", 0x197a0 - 0xf6, 0x197c0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Poisoned", 0x197c0 - 0xf6, 0x197e0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Poisoned", 0x197e0 - 0xf6, 0x19800 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Poisoned", 0x19800 - 0xf6, 0x19820 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Poisoned", 0x19820 - 0xf6, 0x19840 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Poisoned", 0x19840 - 0xf6, 0x19860 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Poisoned", 0x19860 - 0xf6, 0x19880 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Poisoned", 0x19880 - 0xf6, 0x198a0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Zapped", 0x198e0 - 0xf6, 0x19900 - 0xf6 },
    { L"Dark Gallon LK Zapped", 0x19900 - 0xf6, 0x19920 - 0xf6 },
    { L"Dark Gallon MK Zapped", 0x19920 - 0xf6, 0x19940 - 0xf6 },
    { L"Dark Gallon HK Zapped", 0x19940 - 0xf6, 0x19960 - 0xf6 },
    { L"Dark Gallon PP Zapped", 0x19960 - 0xf6, 0x19980 - 0xf6 },
    { L"Dark Gallon KK Zapped", 0x19980 - 0xf6, 0x199a0 - 0xf6 },
    { L"Dark Gallon AP Zapped", 0x199a0 - 0xf6, 0x199c0 - 0xf6 },
    { L"Dark Gallon AK Zapped", 0x199c0 - 0xf6, 0x199e0 - 0xf6 },
    { L"Dark Gallon HP Burned", 0x19a20 - 0xf6, 0x19a40 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Burned", 0x19a40 - 0xf6, 0x19a60 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Burned", 0x19a60 - 0xf6, 0x19a80 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Burned", 0x19a80 - 0xf6, 0x19aa0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Burned", 0x19aa0 - 0xf6, 0x19ac0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Burned", 0x19ac0 - 0xf6, 0x19ae0 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Burned", 0x19ae0 - 0xf6, 0x19b00 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Burned", 0x19b00 - 0xf6, 0x19b20 - 0xf6, indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Pharaoh's Curse", 0x19b60 - 0xf6, 0x19b80 - 0xf6 },
    { L"Dark Gallon LK Pharaoh's Curse", 0x19b80 - 0xf6, 0x19ba0 - 0xf6 },
    { L"Dark Gallon MK Pharaoh's Curse", 0x19ba0 - 0xf6, 0x19bc0 - 0xf6 },
    { L"Dark Gallon HK Pharaoh's Curse", 0x19bc0 - 0xf6, 0x19be0 - 0xf6 },
    { L"Dark Gallon PP Pharaoh's Curse", 0x19be0 - 0xf6, 0x19c00 - 0xf6 },
    { L"Dark Gallon KK Pharaoh's Curse", 0x19c00 - 0xf6, 0x19c20 - 0xf6 },
    { L"Dark Gallon AP Pharaoh's Curse", 0x19c20 - 0xf6, 0x19c40 - 0xf6 },
    { L"Dark Gallon AK Pharaoh's Curse", 0x19c40 - 0xf6, 0x19c60 - 0xf6 },
    { L"Dark Gallon HP Midnight Bliss", 0x19e80 - 0xf6, 0x19ea0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon LK Midnight Bliss", 0x19ea0 - 0xf6, 0x19ec0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon MK Midnight Bliss", 0x19ec0 - 0xf6, 0x19ee0 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon HK Midnight Bliss", 0x19ee0 - 0xf6, 0x19f00 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon PP Midnight Bliss", 0x19f00 - 0xf6, 0x19f20 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon KK Midnight Bliss", 0x19f20 - 0xf6, 0x19f40 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AP Midnight Bliss", 0x19f40 - 0xf6, 0x19f60 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AK Midnight Bliss", 0x19f60 - 0xf6, 0x19f80 - 0xf6, indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
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

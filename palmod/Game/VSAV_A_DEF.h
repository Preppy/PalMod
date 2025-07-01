#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VSAV_A_MORRIGAN_PALETTES. 
// * Update every array using VSAV_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<uint16_t> VSAV_A_IMGIDS_USED =
{
    indexCPS2Sprites_Anakaris,
    indexCPS2Sprites_BBHood,
    indexCPS2Sprites_Felicia,
    indexCPS2Sprites_Morrigan,
    indexCPS2Sprites_Vamp_Aulbath,   // 0x67
    indexCPS2Sprites_Vamp_Bishamon,  // 0x68
    indexCPS2Sprites_Vamp_Dee,       // 0x69
    indexCPS2Sprites_Vamp_Demitri,   // 0x6A
    //indexCPS2Sprites_Vamp_Donovan,   // 0x6B   console-only
    indexCPS2Sprites_Vamp_Gallon,    // 0x6C
    indexCPS2Sprites_Vamp_Jedah,     // 0x6D
    indexCPS2Sprites_Vamp_LeiLei,    // 0x6E
    indexCPS2Sprites_Vamp_Lilith,    // 0x6F
    //indexCPS2Sprites_Vamp_Marionette, // 0x70  console-only
    indexCPS2Sprites_Vamp_Phobos,    // 0x71   console-only
    //indexCPS2Sprites_Vamp_Pyron,     // 0x72   console-only
    indexCPS2Sprites_Vamp_QBee,      // 0x73
    indexCPS2Sprites_Vamp_Sasquatch, // 0x74
    indexCPS2Sprites_Vamp_Shadow,    // 0x75
    indexCPS2Sprites_Vamp_Victor,    // 0x76
    indexCPS2Sprites_Vamp_Zabel,     // 0x77

    indexCPS2Sprites_VSAV1_WinPortraits, // 0x78
    indexCPS2Sprites_VSAV1_MidnightBliss, // 0x79
    indexCPS2Sprites_Vamp_DarkGallon,
    indexCPS2Sprites_Vamp_OboroBishamon, // 0x7b
    indexCPS2Sprites_Anita,
    indexCPS2Sprites_VSAV1_Bonus,   // 0x7c
    indexCPS2Sprites_VSAV1_Stages,  // 0x81
};

// Additional info:
// 0x111AA to 0x115AA is just a repeat of Gallons standard stuff for HP->AK. 
// Probably copied over when they created the Dark Gallon character.
// I'm not even going to bother breaking it down since they are unplayable color schemes. 
// Even though Phobos is unplayable in this game, it might be worth setting up because some of
// the color schemes are different and might be worth a look.  
// You could import them into VSAV2 or VHUNT2, but the Gallon stuff is just copy-paste of what's already in the game. 

// The general stage storage order is:
//      Feast of the Damned
//      Concrete Cave
//      Tower of Arrogance
//      Red Thirst
//      Deserted Chateau
//      Abaraya
//      Vanity Paradise
//      War Agony
//      Forever Torment
//      Green Scream
//      Iron Horse Iron Terror
//      Fetus of God

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LP[] =
{
    { L"LP Bulleta", 0x0C1Aa, 0x0C1Ca, indexCPS2Sprites_BBHood, 0 },
    { L"LP Critters", 0x0C1Ca, 0x0C1Ea, indexCPS2Sprites_BBHood, 0x01 },
    { L"LP Weapons", 0x0C1Ea, 0x0C20a, indexCPS2Sprites_BBHood, 0x02 },
    { L"LP Explosions", 0x0C20a, 0x0C22a, indexCPS2Sprites_BBHood, 0x0b },
    { L"LP Select Portrait", 0x2BF0a, 0x2BF2a, indexCPS2Sprites_BBHood, 0x20 },
    { L"LP Win Portrait", 0x2D60a, 0x2D6Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"LP Poisoned", 0x11ba0 - 0xf6, 0x11bc0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"LP Zapped", 0x11ce0 - 0xf6, 0x11d00 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"LP Burned", 0x11e20 - 0xf6, 0x11e40 - 0xf6, indexCPS2Sprites_BBHood },
    { L"LP Pharaoh's Curse", 0x11f60 - 0xf6, 0x11f80 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"LP Midnight Bliss", 0x12280 - 0xf6, 0x122a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"LP Sentimental Typhoon 1", 0x1a88a, 0x1a8aa, indexCPS2Sprites_BBHood, 0x0d },
    { L"LP Sentimental Typhoon 2", 0x1a9ca, 0x1a9ea, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x0C22a, 0x0C24a, indexCPS2Sprites_BBHood, 0 },
    { L"MP Critters", 0x0C24a, 0x0C26a, indexCPS2Sprites_BBHood, 0x01 },
    { L"MP Weapons", 0x0C26a, 0x0C28a, indexCPS2Sprites_BBHood, 0x02 },
    { L"MP Explosions", 0x0C28a, 0x0C2Aa, indexCPS2Sprites_BBHood, 0x0b },
    { L"MP Select Portrait", 0x2C10a, 0x2C12a, indexCPS2Sprites_BBHood, 0x20 },
    { L"MP Win Portrait", 0x2E0Aa, 0x2E14a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"MP Poisoned", 0x11bc0 - 0xf6, 0x11be0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"MP Zapped", 0x11d00 - 0xf6, 0x11d20 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"MP Burned", 0x11e40 - 0xf6, 0x11e60 - 0xf6, indexCPS2Sprites_BBHood },
    { L"MP Pharaoh's Curse", 0x11f80 - 0xf6, 0x11fa0 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"MP Midnight Bliss", 0x122a0 - 0xf6, 0x122c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"MP Sentimental Typhoon 1", 0x1a8aa, 0x1a8ca, indexCPS2Sprites_BBHood, 0x0d },
    { L"MP Sentimental Typhoon 2", 0x1a9ea, 0x1aa0a, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x0C2Aa, 0x0C2Ca, indexCPS2Sprites_BBHood, 0 },
    { L"HP Critters", 0x0C2Ca, 0x0C2Ea, indexCPS2Sprites_BBHood, 0x01 },
    { L"HP Weapons", 0x0C2Ea, 0x0C30a, indexCPS2Sprites_BBHood, 0x02 },
    { L"HP Explosions", 0x0C30a, 0x0C32a, indexCPS2Sprites_BBHood, 0x0b },
    { L"HP Select Portrait", 0x2C30a, 0x2C32a, indexCPS2Sprites_BBHood, 0x20 },
    { L"HP Win Portrait", 0x2EB4a, 0x2EBEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"HP Poisoned", 0x11be0 - 0xf6, 0x11c00 - 0xf6, indexCPS2Sprites_BBHood },
    { L"HP Zapped", 0x11d20 - 0xf6, 0x11d40 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"HP Burned", 0x11e60 - 0xf6, 0x11e80 - 0xf6, indexCPS2Sprites_BBHood },
    { L"HP Pharaoh's Curse", 0x11fa0 - 0xf6, 0x11fc0 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"HP Midnight Bliss", 0x122c0 - 0xf6, 0x122e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"HP Sentimental Typhoon 1", 0x1a8ca, 0x1a8ea, indexCPS2Sprites_BBHood, 0x0d },
    { L"HP Sentimental Typhoon 2", 0x1aa0a, 0x1aa2a, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x0C32a, 0x0C34a, indexCPS2Sprites_BBHood, 0 },
    { L"LK Critters", 0x0C34a, 0x0C36a, indexCPS2Sprites_BBHood, 0x01 },
    { L"LK Weapons", 0x0C36a, 0x0C38a, indexCPS2Sprites_BBHood, 0x02 },
    { L"LK Explosions", 0x0C38a, 0x0C3Aa, indexCPS2Sprites_BBHood, 0x0b },
    { L"LK Select Portrait", 0x2C50a, 0x2C52a, indexCPS2Sprites_BBHood, 0x20 },
    { L"LK Win Portrait", 0x2F5Ea, 0x2F68a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"LK Poisoned", 0x11c00 - 0xf6, 0x11c20 - 0xf6, indexCPS2Sprites_BBHood },
    { L"LK Zapped", 0x11d40 - 0xf6, 0x11d60 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"LK Burned", 0x11e80 - 0xf6, 0x11ea0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"LK Pharaoh's Curse", 0x11fc0 - 0xf6, 0x11fe0 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"LK Midnight Bliss", 0x122e0 - 0xf6, 0x12300 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"LK Sentimental Typhoon 1", 0x1a8ea, 0x1a90a, indexCPS2Sprites_BBHood, 0x0d },
    { L"LK Sentimental Typhoon 2", 0x1aa2a, 0x1aa4a, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x0C3Aa, 0x0C3Ca, indexCPS2Sprites_BBHood, 0 },
    { L"MK Critters", 0x0C3Ca, 0x0C3Ea, indexCPS2Sprites_BBHood, 0x01 },
    { L"MK Weapons", 0x0C3Ea, 0x0C40a, indexCPS2Sprites_BBHood, 0x02 },
    { L"MK Explosions", 0x0C40a, 0x0C42a, indexCPS2Sprites_BBHood, 0x0b },
    { L"MK Select Portrait", 0x2C70a, 0x2C72a, indexCPS2Sprites_BBHood, 0x20 },
    { L"MK Win Portrait", 0x3008a, 0x3012a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"MK Poisoned", 0x11c20 - 0xf6, 0x11c40 - 0xf6, indexCPS2Sprites_BBHood },
    { L"MK Zapped", 0x11d60 - 0xf6, 0x11d80 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"MK Burned", 0x11ea0 - 0xf6, 0x11ec0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"MK Pharaoh's Curse", 0x11fe0 - 0xf6, 0x12000 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"MK Midnight Bliss", 0x12300 - 0xf6, 0x12320 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"MK Sentimental Typhoon 1", 0x1a90a, 0x1a92a, indexCPS2Sprites_BBHood, 0x0d },
    { L"MK Sentimental Typhoon 2", 0x1aa4a, 0x1aa6a, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x0C42a, 0x0C44a, indexCPS2Sprites_BBHood, 0 },
    { L"HK Critters", 0x0C44a, 0x0C46a, indexCPS2Sprites_BBHood, 0x01 },
    { L"HK Weapons", 0x0C46a, 0x0C48a, indexCPS2Sprites_BBHood, 0x02 },
    { L"HK Explosions", 0x0C48a, 0x0C4Aa, indexCPS2Sprites_BBHood, 0x0b },
    { L"HK Select Portrait", 0x2C90a, 0x2C92a, indexCPS2Sprites_BBHood, 0x20 },
    { L"HK Win Portrait", 0x30B2a, 0x30BCa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"HK Poisoned", 0x11c40 - 0xf6, 0x11c60 - 0xf6, indexCPS2Sprites_BBHood },
    { L"HK Zapped", 0x11d80 - 0xf6, 0x11da0 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"HK Burned", 0x11ec0 - 0xf6, 0x11ee0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"HK Pharaoh's Curse", 0x12000 - 0xf6, 0x12020 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"HK Midnight Bliss", 0x12320 - 0xf6, 0x12340 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"HK Sentimental Typhoon 1", 0x1a92a, 0x1a94a, indexCPS2Sprites_BBHood, 0x0d },
    { L"HK Sentimental Typhoon 2", 0x1aa6a, 0x1aa8a, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x0C4Aa, 0x0C4Ca, indexCPS2Sprites_BBHood, 0 },
    { L"PP Critters", 0x0C4Ca, 0x0C4Ea, indexCPS2Sprites_BBHood, 0x01 },
    { L"PP Weapons", 0x0C4Ea, 0x0C50a, indexCPS2Sprites_BBHood, 0x02 },
    { L"PP Explosions", 0x0C50a, 0x0C52a, indexCPS2Sprites_BBHood, 0x0b },
    { L"PP Select Portrait", 0x2CB0a, 0x2CB2a, indexCPS2Sprites_BBHood, 0x20 },
    { L"PP Win Portrait", 0x315Ca, 0x3166a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"PP Poisoned", 0x11c60 - 0xf6, 0x11c80 - 0xf6, indexCPS2Sprites_BBHood },
    { L"PP Zapped", 0x11da0 - 0xf6, 0x11dc0 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"PP Burned", 0x11ee0 - 0xf6, 0x11f00 - 0xf6, indexCPS2Sprites_BBHood },
    { L"PP Pharaoh's Curse", 0x12020 - 0xf6, 0x12040 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"PP Midnight Bliss", 0x12340 - 0xf6, 0x12360 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"PP Sentimental Typhoon 1", 0x1a94a, 0x1a96a, indexCPS2Sprites_BBHood, 0x0d },
    { L"PP Sentimental Typhoon 2", 0x1aa8a, 0x1aaaa, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x0C52a, 0x0C54a, indexCPS2Sprites_BBHood, 0 },
    { L"KK Critters", 0x0C54a, 0x0C56a, indexCPS2Sprites_BBHood, 0x01 },
    { L"KK Weapons", 0x0C56a, 0x0C58a, indexCPS2Sprites_BBHood, 0x02 },
    { L"KK Explosions", 0x0C58a, 0x0C5Aa, indexCPS2Sprites_BBHood, 0x0b },
    { L"KK Select Portrait", 0x2CD0a, 0x2CD2a, indexCPS2Sprites_BBHood, 0x20 },
    { L"KK Win Portrait", 0x3206a, 0x3210a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"KK Poisoned", 0x11c80 - 0xf6, 0x11ca0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"KK Zapped", 0x11dc0 - 0xf6, 0x11de0 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"KK Burned", 0x11f00 - 0xf6, 0x11f20 - 0xf6, indexCPS2Sprites_BBHood },
    { L"KK Pharaoh's Curse", 0x12040 - 0xf6, 0x12060 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"KK Midnight Bliss", 0x12360 - 0xf6, 0x12380 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"KK Sentimental Typhoon 1", 0x1a96a, 0x1a98a, indexCPS2Sprites_BBHood, 0x0d },
    { L"KK Sentimental Typhoon 2", 0x1aaaa, 0x1aaca, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x0C5Aa, 0x0C5Ca, indexCPS2Sprites_BBHood, 0 },
    { L"AP Critters", 0x0C5Ca, 0x0C5Ea, indexCPS2Sprites_BBHood, 0x01 },
    { L"AP Weapons", 0x0C5Ea, 0x0C60a, indexCPS2Sprites_BBHood, 0x02 },
    { L"AP Explosions", 0x0C60a, 0x0C62a, indexCPS2Sprites_BBHood, 0x0b },
    { L"AP Select Portrait", 0x2CF0a, 0x2CF2a, indexCPS2Sprites_BBHood, 0x20 },
    { L"AP Win Portrait", 0x32B0a, 0x32BAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"AP Poisoned", 0x11ca0 - 0xf6, 0x11cc0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"AP Zapped", 0x11de0 - 0xf6, 0x11e00 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"AP Burned", 0x11f20 - 0xf6, 0x11f40 - 0xf6, indexCPS2Sprites_BBHood },
    { L"AP Pharaoh's Curse", 0x12060 - 0xf6, 0x12080 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"AP Midnight Bliss", 0x12380 - 0xf6, 0x123a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"AP Sentimental Typhoon 1", 0x1a98a, 0x1a9aa, indexCPS2Sprites_BBHood, 0x0d },
    { L"AP Sentimental Typhoon 2", 0x1aaca, 0x1aaea, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x0C62a, 0x0C64a, indexCPS2Sprites_BBHood, 0 },
    { L"AK Critters", 0x0C64a, 0x0C66a, indexCPS2Sprites_BBHood, 0x01 },
    { L"AK Weapons", 0x0C66a, 0x0C68a, indexCPS2Sprites_BBHood, 0x01 },
    { L"AK Explosions", 0x0C68a, 0x0C6Aa, indexCPS2Sprites_BBHood, 0x0b },
    { L"AK Select Portrait", 0x2D10a, 0x2D12a, indexCPS2Sprites_BBHood, 0x20 },
    { L"AK Win Portrait", 0x335Aa, 0x3364a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_BBHood },
    { L"AK Poisoned", 0x11cc0 - 0xf6, 0x11ce0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"AK Zapped", 0x11e00 - 0xf6, 0x11e20 - 0xf6, indexCPS2Sprites_BBHood, 0x10 },
    { L"AK Burned", 0x11f40 - 0xf6, 0x11f60 - 0xf6, indexCPS2Sprites_BBHood },
    { L"AK Pharaoh's Curse", 0x12080 - 0xf6, 0x120a0 - 0xf6, indexCPS2Sprites_BBHood, 0x0C },
    { L"AK Midnight Bliss", 0x123a0 - 0xf6, 0x123c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_BBHood },
    { L"AK Sentimental Typhoon 1", 0x1a9aa, 0x1a9ca, indexCPS2Sprites_BBHood, 0x0d },
    { L"AK Sentimental Typhoon 2", 0x1aaea, 0x1ab0a, indexCPS2Sprites_BBHood, 0x0d },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x0C6Aa, 0x0C6Ca, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LP Demitri 2nd palette", 0x1ACCa, 0x1ACEa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LP Teledash 1", 0x0C70a, 0x0C72a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LP Teledash 2", 0x0C6Ca, 0x0C6Ea, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LP Fireball", 0x0C6Ea, 0x0C70a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"LP Select Portrait", 0x2BF2a, 0x2BF4a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"LP Win Portrait", 0x2D6Aa, 0x2D74a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"LP Poisoned", 0x123e0 - 0xf6, 0x12400 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"LP Zapped", 0x12520 - 0xf6, 0x12540 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"LP Burned", 0x12660 - 0xf6, 0x12680 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"LP Pharaoh's Curse", 0x127a0 - 0xf6, 0x127c0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"LP Midnight Bliss", 0x12ac0 - 0xf6, 0x12ae0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri", 0x0C72a, 0x0C74a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MP Demitri 2nd palette", 0x1ACEa, 0x1AD0a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MP Teledash 1", 0x0C78a, 0x0C7Aa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MP Teledash 2", 0x0C74a, 0x0C76a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MP Fireball", 0x0C76a, 0x0C78a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"MP Select Portrait", 0x2C12a, 0x2C14a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"MP Win Portrait", 0x2E14a, 0x2E1Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"MP Poisoned", 0x12400 - 0xf6, 0x12420 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"MP Zapped", 0x12540 - 0xf6, 0x12560 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"MP Burned", 0x12680 - 0xf6, 0x126a0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"MP Pharaoh's Curse", 0x127c0 - 0xf6, 0x127e0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"MP Midnight Bliss", 0x12ae0 - 0xf6, 0x12b00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x0C7Aa, 0x0C7Ca, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HP Demitri 2nd palette", 0x1AD0a, 0x1AD2a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HP Teledash 1", 0x0C80a, 0x0C82a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HP Teledash 2", 0x0C7Ca, 0x0C7Ea, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HP Fireball", 0x0C7Ea, 0x0C80a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"HP Select Portrait", 0x2C32a, 0x2C34a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"HP Win Portrait", 0x2EBEa, 0x2EC8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"HP Poisoned", 0x12420 - 0xf6, 0x12440 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"HP Zapped", 0x12560 - 0xf6, 0x12580 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"HP Burned", 0x126a0 - 0xf6, 0x126c0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"HP Pharaoh's Curse", 0x127e0 - 0xf6, 0x12800 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"HP Midnight Bliss", 0x12b00 - 0xf6, 0x12b20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x0C82a, 0x0C84a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LK Demitri 2nd palette", 0x1AD2a, 0x1AD4a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LK Teledash 1", 0x0C88a, 0x0C8Aa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LK Teledash 2", 0x0C84a, 0x0C86a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"LK Fireball", 0x0C86a, 0x0C88a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"LK Select Portrait", 0x2C52a, 0x2C54a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"LK Win Portrait", 0x2F68a, 0x2F72a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"LK Poisoned", 0x12440 - 0xf6, 0x12460 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"LK Zapped", 0x12580 - 0xf6, 0x125a0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"LK Burned", 0x126c0 - 0xf6, 0x126e0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"LK Pharaoh's Curse", 0x12800 - 0xf6, 0x12820 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"LK Midnight Bliss", 0x12b20 - 0xf6, 0x12b40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x0C8Aa, 0x0C8Ca, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MK Demitri 2nd palette", 0x1AD4a, 0x1AD6a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MK Teledash 1", 0x0C90a, 0x0C92a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MK Teledash 2", 0x0C8Ca, 0x0C8Ea, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"MK Fireball", 0x0C8Ea, 0x0C90a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"MK Select Portrait", 0x2C72a, 0x2C74a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"MK Win Portrait", 0x3012a, 0x301Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"MK Poisoned", 0x12460 - 0xf6, 0x12480 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"MK Zapped", 0x125a0 - 0xf6, 0x125c0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"MK Burned", 0x126e0 - 0xf6, 0x12700 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"MK Pharaoh's Curse", 0x12820 - 0xf6, 0x12840 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"MK Midnight Bliss", 0x12b40 - 0xf6, 0x12b60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x0C92a, 0x0C94a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HK Demitri 2nd palette", 0x1AD6a, 0x1AD8a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HK Teledash 1", 0x0C98a, 0x0C9Aa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HK Teledash 2", 0x0C94a, 0x0C96a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"HK Fireball", 0x0C96a, 0x0C98a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"HK Select Portrait", 0x2C92a, 0x2C94a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"HK Win Portrait", 0x30BCa, 0x30C6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"HK Poisoned", 0x12480 - 0xf6, 0x124a0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"HK Zapped", 0x125c0 - 0xf6, 0x125e0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"HK Burned", 0x12700 - 0xf6, 0x12720 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"HK Pharaoh's Curse", 0x12840 - 0xf6, 0x12860 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"HK Midnight Bliss", 0x12b60 - 0xf6, 0x12b80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x0C9Aa, 0x0C9Ca, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"PP Demitri 2nd palette", 0x1AD8a, 0x1ADAa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"PP Teledash 1", 0x0CA0a, 0x0CA2a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"PP Teledash 2", 0x0C9Ca, 0x0C9Ea, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"PP Fireball", 0x0C9Ea, 0x0CA0a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"PP Select Portrait", 0x2CB2a, 0x2CB4a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"PP Win Portrait", 0x3166a, 0x3170a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"PP Poisoned", 0x124a0 - 0xf6, 0x124c0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"PP Zapped", 0x125e0 - 0xf6, 0x12600 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"PP Burned", 0x12720 - 0xf6, 0x12740 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"PP Pharaoh's Curse", 0x12860 - 0xf6, 0x12880 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"PP Midnight Bliss", 0x12b80 - 0xf6, 0x12ba0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x0CA2a, 0x0CA4a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"KK Demitri 2nd palette", 0x1ADAa, 0x1ADCa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"KK Teledash 1", 0x0CA8a, 0x0CAAa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"KK Teledash 2", 0x0CA4a, 0x0CA6a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"KK Fireball", 0x0CA6a, 0x0CA8a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"KK Select Portrait", 0x2CD2a, 0x2CD4a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"KK Win Portrait", 0x3210a, 0x321Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"KK Poisoned", 0x124c0 - 0xf6, 0x124e0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"KK Zapped", 0x12600 - 0xf6, 0x12620 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"KK Burned", 0x12740 - 0xf6, 0x12760 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"KK Pharaoh's Curse", 0x12880 - 0xf6, 0x128a0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"KK Midnight Bliss", 0x12ba0 - 0xf6, 0x12bc0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x0CAAa, 0x0CACa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AP Demitri 2nd palette", 0x1ADCa, 0x1ADEa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AP Teledash 1", 0x0CB0a, 0x0CB2a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AP Teledash 2", 0x0CACa, 0x0CAEa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AP Fireball", 0x0CAEa, 0x0CB0a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"AP Select Portrait", 0x2CF2a, 0x2CF4a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"AP Win Portrait", 0x32BAa, 0x32C4a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"AP Poisoned", 0x124e0 - 0xf6, 0x12500 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"AP Zapped", 0x12620 - 0xf6, 0x12640 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"AP Burned", 0x12760 - 0xf6, 0x12780 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"AP Pharaoh's Curse", 0x128a0 - 0xf6, 0x128c0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"AP Midnight Bliss", 0x12bc0 - 0xf6, 0x12be0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x0CB2a, 0x0CB4a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AK Demitri 2nd palette", 0x1ADEa, 0x1AE0a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AK Teledash 1", 0x0CB8a, 0x0CBAa, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AK Teledash 2", 0x0CB4a, 0x0CB6a, indexCPS2Sprites_Vamp_Demitri, 0 },
    { L"AK Fireball", 0x0CB6a, 0x0CB8a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"AK Select Portrait", 0x2D12a, 0x2D14a, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"AK Win Portrait", 0x3364a, 0x336Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Demitri },
    { L"AK Poisoned", 0x12500 - 0xf6, 0x12520 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"AK Zapped", 0x12640 - 0xf6, 0x12660 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x0c },
    { L"AK Burned", 0x12780 - 0xf6, 0x127a0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"AK Pharaoh's Curse", 0x128c0 - 0xf6, 0x128e0 - 0xf6, indexCPS2Sprites_Vamp_Demitri, 0x10 },
    { L"AK Midnight Bliss", 0x12be0 - 0xf6, 0x12c00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_SHARED[] =
{
    { L"Demitri's followers 1", 0x1aE0a, 0x1aE2a, indexCPS2Sprites_Vamp_Demitri, 0x02 },
    { L"Demitri's followers 2", 0x1aE2a, 0x1aE4a, indexCPS2Sprites_Vamp_Demitri, 0x03 },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x0CBAa, 0x0CBCa, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"LP Intro/Outro", 0x0CBCa, 0x0CBEa, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"LP 236P/41236KK/j.HP", 0x0CBEa, 0x0CC0a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"LP 236P/28K/Outro Flash", 0x0CC0a, 0x0CC2a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"LP Select Portrait", 0x2BF4a, 0x2BF6a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"LP Win Portrait", 0x2D74a, 0x2D7Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"LP Poisoned", 0x12c20 - 0xf6, 0x12c40 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"LP Zapped", 0x12d60 - 0xf6, 0x12d80 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"LP Burned", 0x12ea0 - 0xf6, 0x12ec0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"LP Pharaoh's Curse", 0x12fe0 - 0xf6, 0x13000 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"LP Midnight Bliss", 0x13300 - 0xf6, 0x13320 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x0CC2a, 0x0CC4a, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"MP Intro/Outro", 0x0CC4a, 0x0CC6a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"MP 236P/41236KK/j.HP", 0x0CC6a, 0x0CC8a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"MP 236P/28K/Outro Flash", 0x0CC8a, 0x0CCAa, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"MP Select Portrait", 0x2C14a, 0x2C16a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"MP Win Portrait", 0x2E1Ea, 0x2E28a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"MP Poisoned", 0x12c40 - 0xf6, 0x12c60 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"MP Zapped", 0x12d80 - 0xf6, 0x12da0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"MP Burned", 0x12ec0 - 0xf6, 0x12ee0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"MP Pharaoh's Curse", 0x13000 - 0xf6, 0x13020 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"MP Midnight Bliss", 0x13320 - 0xf6, 0x13340 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x0CCAa, 0x0CCCa, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"HP Intro/Outro", 0x0CCCa, 0x0CCEa, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"HP 236P/41236KK/j.HP", 0x0CCEa, 0x0CD0a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"HP 236P/28K/Outro Flash", 0x0CD0a, 0x0CD2a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"HP Select Portrait", 0x2C34a, 0x2C36a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"HP Win Portrait", 0x2EC8a, 0x2ED2a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"HP Poisoned", 0x12c60 - 0xf6, 0x12c80 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"HP Zapped", 0x12da0 - 0xf6, 0x12dc0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"HP Burned", 0x12ee0 - 0xf6, 0x12f00 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"HP Pharaoh's Curse", 0x13020 - 0xf6, 0x13040 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"HP Midnight Bliss", 0x13340 - 0xf6, 0x13360 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x0CD2a, 0x0CD4a, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"LK Intro/Outro", 0x0CD4a, 0x0CD6a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"LK 236P/41236KK/j.HP", 0x0CD6a, 0x0CD8a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"LK 236P/28K/Outro Flash", 0x0CD8a, 0x0CDAa, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"LK Select Portrait", 0x2C54a, 0x2C56a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"LK Win Portrait", 0x2F72a, 0x2F7Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"LK Poisoned", 0x12c80 - 0xf6, 0x12ca0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"LK Zapped", 0x12dc0 - 0xf6, 0x12de0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"LK Burned", 0x12f00 - 0xf6, 0x12f20 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"LK Pharaoh's Curse", 0x13040 - 0xf6, 0x13060 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"LK Midnight Bliss", 0x13360 - 0xf6, 0x13380 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x0CDAa, 0x0CDCa, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"MK Intro/Outro", 0x0CDCa, 0x0CDEa, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"MK 236P/41236KK/j.HP", 0x0CDEa, 0x0CE0a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"MK 236P/28K/Outro Flash", 0x0CE0a, 0x0CE2a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"MK Select Portrait", 0x2C74a, 0x2C76a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"MK Win Portrait", 0x301Ca, 0x3026a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"MK Poisoned", 0x12ca0 - 0xf6, 0x12cc0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"MK Zapped", 0x12de0 - 0xf6, 0x12e00 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"MK Burned", 0x12f20 - 0xf6, 0x12f40 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"MK Pharaoh's Curse", 0x13060 - 0xf6, 0x13080 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"MK Midnight Bliss", 0x13380 - 0xf6, 0x133a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x0CE2a, 0x0CE4a, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"HK Intro/Outro", 0x0CE4a, 0x0CE6a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"HK 236P/41236KK/j.HP", 0x0CE6a, 0x0CE8a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"HK 236P/28K/Outro Flash", 0x0CE8a, 0x0CEAa, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"HK Select Portrait", 0x2C94a, 0x2C96a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"HK Win Portrait", 0x30C6a, 0x30D0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"HK Poisoned", 0x12cc0 - 0xf6, 0x12ce0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"HK Zapped", 0x12e00 - 0xf6, 0x12e20 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"HK Burned", 0x12f40 - 0xf6, 0x12f60 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"HK Pharaoh's Curse", 0x13080 - 0xf6, 0x130a0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"HK Midnight Bliss", 0x133a0 - 0xf6, 0x133c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x0CEAa, 0x0CECa, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"PP Intro/Outro", 0x0CECa, 0x0CEEa, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"PP 236P/41236KK/j.HP", 0x0CEEa, 0x0CF0a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"PP 236P/28K/Outro Flash", 0x0CF0a, 0x0CF2a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"PP Select Portrait", 0x2CB4a, 0x2CB6a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"PP Win Portrait", 0x3170a, 0x317Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"PP Poisoned", 0x12ce0 - 0xf6, 0x12d00 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"PP Zapped", 0x12e20 - 0xf6, 0x12e40 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"PP Burned", 0x12f60 - 0xf6, 0x12f80 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"PP Pharaoh's Curse", 0x130a0 - 0xf6, 0x130c0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"PP Midnight Bliss", 0x133c0 - 0xf6, 0x133e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x0CF2a, 0x0CF4a, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"KK Intro/Outro", 0x0CF4a, 0x0CF6a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"KK 236P/41236KK/j.HP", 0x0CF6a, 0x0CF8a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"KK 236P/28K/Outro Flash", 0x0CF8a, 0x0CFAa, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"KK Select Portrait", 0x2CD4a, 0x2CD6a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"KK Win Portrait", 0x321Aa, 0x3224a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"KK Poisoned", 0x12d00 - 0xf6, 0x12d20 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"KK Zapped", 0x12e40 - 0xf6, 0x12e60 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"KK Burned", 0x12f80 - 0xf6, 0x12fa0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"KK Pharaoh's Curse", 0x130c0 - 0xf6, 0x130e0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"KK Midnight Bliss", 0x133e0 - 0xf6, 0x13400 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x0CFAa, 0x0CFCa, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"AP Intro/Outro", 0x0CFCa, 0x0CFEa, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"AP 236P/41236KK/j.HP", 0x0CFEa, 0x0D00a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"AP 236P/28K/Outro Flash", 0x0D00a, 0x0D02a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"AP Select Portrait", 0x2CF4a, 0x2CF6a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"AP Win Portrait", 0x32C4a, 0x32CEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"AP Poisoned", 0x12d20 - 0xf6, 0x12d40 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"AP Zapped", 0x12e60 - 0xf6, 0x12e80 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"AP Burned", 0x12fa0 - 0xf6, 0x12fc0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"AP Pharaoh's Curse", 0x130e0 - 0xf6, 0x13100 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"AP Midnight Bliss", 0x13400 - 0xf6, 0x13420 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x0D02a, 0x0D04a, indexCPS2Sprites_Vamp_Gallon, 0 },
    { L"AK Intro/Outro", 0x0D04a, 0x0D06a, indexCPS2Sprites_Vamp_Gallon, 0x01 },
    { L"AK 236P/41236KK/j.HP", 0x0D06a, 0x0D08a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"AK 236P/28K/Outro Flash", 0x0D08a, 0x0D0Aa, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"AK Select Portrait", 0x2D14a, 0x2D16a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"AK Win Portrait", 0x336Ea, 0x3378a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
    { L"AK Poisoned", 0x12d40 - 0xf6, 0x12d60 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"AK Zapped", 0x12e80 - 0xf6, 0x12ea0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"AK Burned", 0x12fc0 - 0xf6, 0x12fe0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"AK Pharaoh's Curse", 0x13100 - 0xf6, 0x13120 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x10 },
    { L"AK Midnight Bliss", 0x13420 - 0xf6, 0x13440 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x0D0Aa, 0x0D0Ca, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"LP Electric Flash", 0x0D10a, 0x0D12a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x0D0Ca, 0x0D0Ea },
    { L"LP Electricity", 0x0D0Ea, 0x0D10a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"LP Intro", 0x01af4a, 0x01af6a, indexCPS2Sprites_Vamp_Victor },
    { L"LP Select Portrait", 0x2BF6a, 0x2BF8a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"LP Win Portrait", 0x2D7Ea, 0x2D88a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"LP Poisoned", 0x13460 - 0xf6, 0x13480 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"LP Zapped", 0x135a0 - 0xf6, 0x135c0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"LP Burned", 0x136e0 - 0xf6, 0x13700 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"LP Pharaoh's Curse", 0x13820 - 0xf6, 0x13840 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"LP Midnight Bliss", 0x13b40 - 0xf6, 0x13b60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x0D12a, 0x0D14a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"MP Electric Flash", 0x0D18a, 0x0D1Aa, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x0D14a, 0x0D16a },
    { L"MP Electricity", 0x0D16a, 0x0D18a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"MP Intro", 0x01af6a, 0x01af8a, indexCPS2Sprites_Vamp_Victor },
    { L"MP Select Portrait", 0x2C16a, 0x2C18a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"MP Win Portrait", 0x2E28a, 0x2E32a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"MP Poisoned", 0x13480 - 0xf6, 0x134a0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"MP Zapped", 0x135c0 - 0xf6, 0x135e0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"MP Burned", 0x13700 - 0xf6, 0x13720 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"MP Pharaoh's Curse", 0x13840 - 0xf6, 0x13860 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"MP Midnight Bliss", 0x13b60 - 0xf6, 0x13b80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x0D1Aa, 0x0D1Ca, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"HP Electric Flash", 0x0D20a, 0x0D22a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x0D1Ca, 0x0D1Ea },
    { L"HP Electricity", 0x0D1Ea, 0x0D20a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"HP Intro", 0x01af8a, 0x01afaa, indexCPS2Sprites_Vamp_Victor },
    { L"HP Select Portrait", 0x2C36a, 0x2C38a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"HP Win Portrait", 0x2ED2a, 0x2EDCa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"HP Poisoned", 0x134a0 - 0xf6, 0x134c0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"HP Zapped", 0x135e0 - 0xf6, 0x13600 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"HP Burned", 0x13720 - 0xf6, 0x13740 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"HP Pharaoh's Curse", 0x13860 - 0xf6, 0x13880 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"HP Midnight Bliss", 0x13b80 - 0xf6, 0x13ba0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x0D22a, 0x0D24a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"LK Electric Flash", 0x0D28a, 0x0D2Aa, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x0D24a, 0x0D26a },
    { L"LK Electricity", 0x0D26a, 0x0D28a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"LK Intro", 0x01afaa, 0x01afca, indexCPS2Sprites_Vamp_Victor },
    { L"LK Select Portrait", 0x2C56a, 0x2C58a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"LK Win Portrait", 0x2F7Ca, 0x2F86a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"LK Poisoned", 0x134c0 - 0xf6, 0x134e0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"LK Zapped", 0x13600 - 0xf6, 0x13620 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"LK Burned", 0x13740 - 0xf6, 0x13760 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"LK Pharaoh's Curse", 0x13880 - 0xf6, 0x138a0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"LK Midnight Bliss", 0x13ba0 - 0xf6, 0x13bc0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x0D2Aa, 0x0D2Ca, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"MK Electric Flash", 0x0D30a, 0x0D32a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x0D2Ca, 0x0D2Ea },
    { L"MK Electricity", 0x0D2Ea, 0x0D30a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"MK Intro", 0x01afca, 0x01afea, indexCPS2Sprites_Vamp_Victor },
    { L"MK Select Portrait", 0x2C76a, 0x2C78a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"MK Win Portrait", 0x3026a, 0x3030a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"MK Poisoned", 0x134e0 - 0xf6, 0x13500 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"MK Zapped", 0x13620 - 0xf6, 0x13640 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"MK Burned", 0x13760 - 0xf6, 0x13780 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"MK Pharaoh's Curse", 0x138a0 - 0xf6, 0x138c0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"MK Midnight Bliss", 0x13bc0 - 0xf6, 0x13be0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x0D32a, 0x0D34a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"HK Electric Flash", 0x0D38a, 0x0D3Aa, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x0D34a, 0x0D36a },
    { L"HK Electricity", 0x0D36a, 0x0D38a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"HK Intro", 0x01afea, 0x01b00a, indexCPS2Sprites_Vamp_Victor },
    { L"HK Select Portrait", 0x2C96a, 0x2C98a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"HK Win Portrait", 0x30D0a, 0x30DAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"HK Poisoned", 0x13500 - 0xf6, 0x13520 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"HK Zapped", 0x13640 - 0xf6, 0x13660 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"HK Burned", 0x13780 - 0xf6, 0x137a0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"HK Pharaoh's Curse", 0x138c0 - 0xf6, 0x138e0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"HK Midnight Bliss", 0x13be0 - 0xf6, 0x13c00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x0D3Aa, 0x0D3Ca, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"PP Electric Flash", 0x0D40a, 0x0D42a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x0D3Ca, 0x0D3Ea },
    { L"PP Electricity", 0x0D3Ea, 0x0D40a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"PP Intro", 0x01b00a, 0x01b02a, indexCPS2Sprites_Vamp_Victor },
    { L"PP Select Portrait", 0x2CB6a, 0x2CB8a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"PP Win Portrait", 0x317Aa, 0x3184a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"PP Poisoned", 0x13520 - 0xf6, 0x13540 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"PP Zapped", 0x13660 - 0xf6, 0x13680 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"PP Burned", 0x137a0 - 0xf6, 0x137c0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"PP Pharaoh's Curse", 0x138e0 - 0xf6, 0x13900 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"PP Midnight Bliss", 0x13c00 - 0xf6, 0x13c20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x0D42a, 0x0D44a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"KK Electric Flash", 0x0D48a, 0x0D4Aa, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x0D44a, 0x0D46a },
    { L"KK Electricity", 0x0D46a, 0x0D48a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"KK Intro", 0x01b02a, 0x01b04a, indexCPS2Sprites_Vamp_Victor },
    { L"KK Select Portrait", 0x2CD6a, 0x2CD8a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"KK Win Portrait", 0x3224a, 0x322Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"KK Poisoned", 0x13540 - 0xf6, 0x13560 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"KK Zapped", 0x13680 - 0xf6, 0x136a0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"KK Burned", 0x137c0 - 0xf6, 0x137e0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"KK Pharaoh's Curse", 0x13900 - 0xf6, 0x13920 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"KK Midnight Bliss", 0x13c20 - 0xf6, 0x13c40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x0D4Aa, 0x0D4Ca, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"AP Electric Flash", 0x0D50a, 0x0D52a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x0D4Ca, 0x0D4Ea },
    { L"AP Electricity", 0x0D4Ea, 0x0D50a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"AP Intro", 0x01b04a, 0x01b06a, indexCPS2Sprites_Vamp_Victor },
    { L"AP Select Portrait", 0x2CF6a, 0x2CF8a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"AP Win Portrait", 0x32CEa, 0x32D8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"AP Poisoned", 0x13560 - 0xf6, 0x13580 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"AP Zapped", 0x136a0 - 0xf6, 0x136c0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"AP Burned", 0x137e0 - 0xf6, 0x13800 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"VAP Pharaoh's Curse", 0x13920 - 0xf6, 0x13940 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"AP Midnight Bliss", 0x13c40 - 0xf6, 0x13c60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x0D52a, 0x0D54a, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"AK Electric Flash", 0x0D58a, 0x0D5Aa, indexCPS2Sprites_Vamp_Victor, 0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x0D54a, 0x0D56a },
    { L"AK Electricity", 0x0D56a, 0x0D58a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"AK Intro", 0x01b06a, 0x01b08a, indexCPS2Sprites_Vamp_Victor },
    { L"AK Select Portrait", 0x2D16a, 0x2D18a, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"AK Win Portrait", 0x3378a, 0x3382a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Victor },
    { L"AK Poisoned", 0x13580 - 0xf6, 0x135a0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"AK Zapped", 0x136c0 - 0xf6, 0x136e0 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x0c },
    { L"AK Burned", 0x13800 - 0xf6, 0x13820 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"AK Pharaoh's Curse", 0x13940 - 0xf6, 0x13960 - 0xf6, indexCPS2Sprites_Vamp_Victor, 0x10 },
    { L"AK Midnight Bliss", 0x13c60 - 0xf6, 0x13c80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x0D5Aa, 0x0D5Ca, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x0D5Ca, 0x0D5Ea, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"LP Unused 1", 0x0D5Ea, 0x0D60a },
    { L"LP Unused 2", 0x0D60a, 0x0D62a },
    { L"LP Select Portrait", 0x2BF8a, 0x2BFAa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"LP Win Portrait", 0x2D88a, 0x2D92a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"LP Poisoned", 0x13ca0 - 0xf6, 0x13cc0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"LP Zapped", 0x13de0 - 0xf6, 0x13e00 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"LP Burned", 0x13f20 - 0xf6, 0x13f40 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"LP Pharaoh's Curse", 0x14060 - 0xf6, 0x14080 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"LP Midnight Bliss", 0x14380 - 0xf6, 0x143a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x0D62a, 0x0D64a, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x0D64a, 0x0D66a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"MP Unused 1", 0x0D66a, 0x0D68a },
    { L"MP Unused 2", 0x0D68a, 0x0D6Aa },
    { L"MP Select Portrait", 0x2C18a, 0x2C1Aa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"MP Win Portrait", 0x2E32a, 0x2E3Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"MP Poisoned", 0x13cc0 - 0xf6, 0x13ce0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"MP Zapped", 0x13e00 - 0xf6, 0x13e20 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"MP Burned", 0x13f40 - 0xf6, 0x13f60 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"MP Pharaoh's Curse", 0x14080 - 0xf6, 0x140a0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"MP Midnight Bliss", 0x143a0 - 0xf6, 0x143c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x0D6Aa, 0x0D6Ca, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x0D6Ca, 0x0D6Ea, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"HP Unused 1", 0x0D6Ea, 0x0D70a },
    { L"HP Unused 2", 0x0D70a, 0x0D72a },
    { L"HP Select Portrait", 0x2C38a, 0x2C3Aa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"HP Win Portrait", 0x2EDCa, 0x2EE6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"HP Poisoned", 0x13ce0 - 0xf6, 0x13d00 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"HP Zapped", 0x13e20 - 0xf6, 0x13e40 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"HP Burned", 0x13f60 - 0xf6, 0x13f80 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"HP Pharaoh's Curse", 0x140a0 - 0xf6, 0x140c0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"HP Midnight Bliss", 0x143c0 - 0xf6, 0x143e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x0d72a, 0x0d74a, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x0d74a, 0x0d76a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"LK Unused 1", 0x0d76a, 0x0d78a },
    { L"LK Unused 2", 0x0d78a, 0x0d7aa },
    { L"LK Select Portrait", 0x2C58a, 0x2C5Aa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"LK Win Portrait", 0x2F86a, 0x2F90a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"LK Poisoned", 0x13d00 - 0xf6, 0x13d20 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"LK Zapped", 0x13e40 - 0xf6, 0x13e60 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"LK Burned", 0x13f80 - 0xf6, 0x13fa0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"LK Pharaoh's Curse", 0x140c0 - 0xf6, 0x140e0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"LK Midnight Bliss", 0x143e0 - 0xf6, 0x14400 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x0d7aa, 0x0d7ca, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x0d7ca, 0x0d7ea, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"MK Unused 1", 0x0d7ea, 0x0d80a },
    { L"MK Unused 2", 0x0d80a, 0x0d82a },
    { L"MK Select Portrait", 0x2C78a, 0x2C7Aa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"MK Win Portrait", 0x3030a, 0x303Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"MK Poisoned", 0x13d20 - 0xf6, 0x13d40 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"MK Zapped", 0x13e60 - 0xf6, 0x13e80 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"MK Burned", 0x13fa0 - 0xf6, 0x13fc0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"MK Pharaoh's Curse", 0x140e0 - 0xf6, 0x14100 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"MK Midnight Bliss", 0x14400 - 0xf6, 0x14420 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x0d82a, 0x0d84a, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x0d84a, 0x0d86a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"HK Unused 1", 0x0d86a, 0x0d88a },
    { L"HK Unused 2", 0x0d88a, 0x0d8aa },
    { L"HK Select Portrait", 0x2C98a, 0x2C9Aa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"HK Win Portrait", 0x30DAa, 0x30E4a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"HK Poisoned", 0x13d40 - 0xf6, 0x13d60 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"HK Zapped", 0x13e80 - 0xf6, 0x13ea0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"HK Burned", 0x13fc0 - 0xf6, 0x13fe0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"HK Pharaoh's Curse", 0x14100 - 0xf6, 0x14120 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"HK Midnight Bliss", 0x14420 - 0xf6, 0x14440 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x0d8aa, 0x0d8ca, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x0d8ca, 0x0d8ea, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"PP Unused 1", 0x0d8ea, 0x0d90a },
    { L"PP Unused 2", 0x0d90a, 0x0d92a },
    { L"PP Select Portrait", 0x2CB8a, 0x2CBAa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"PP Win Portrait", 0x3184a, 0x318Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"PP Poisoned", 0x13d60 - 0xf6, 0x13d80 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"PP Zapped", 0x13ea0 - 0xf6, 0x13ec0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"PP Burned", 0x13fe0 - 0xf6, 0x14000 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"PP Pharaoh's Curse", 0x14120 - 0xf6, 0x14140 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"PP Midnight Bliss", 0x14440 - 0xf6, 0x14460 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x0d92a, 0x0d94a, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x0d94a, 0x0d96a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"KK Unused 1", 0x0d96a, 0x0d98a },
    { L"KK Unused 2", 0x0d98a, 0x0d9aa },
    { L"KK Select Portrait", 0x2CD8a, 0x2CDAa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"KK Win Portrait", 0x322Ea, 0x3238a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"KK Poisoned", 0x13d80 - 0xf6, 0x13da0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"KK Zapped", 0x13ec0 - 0xf6, 0x13ee0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"KK Burned", 0x14000 - 0xf6, 0x14020 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"KK Pharaoh's Curse", 0x14140 - 0xf6, 0x14160 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"KK Midnight Bliss", 0x14460 - 0xf6, 0x14480 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x0d9aa, 0x0d9ca, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x0d9ca, 0x0d9ea, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"AP Unused 1", 0x0d9ea, 0x0da0a },
    { L"AP Unused 2", 0x0da0a, 0x0da2a },
    { L"AP Select Portrait", 0x2CF8a, 0x2CFAa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"AP Win Portrait", 0x32D8a, 0x32E2a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"AP Poisoned", 0x13da0 - 0xf6, 0x13dc0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"AP Zapped", 0x13ee0 - 0xf6, 0x13f00 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"AP Burned", 0x14020 - 0xf6, 0x14040 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"AP Pharaoh's Curse", 0x14160 - 0xf6, 0x14180 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"AP Midnight Bliss", 0x14480 - 0xf6, 0x144a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x0da2a, 0x0da4a, indexCPS2Sprites_Vamp_Zabel, 0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x0da4a, 0x0da6a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"AK Unused 1", 0x0da6a, 0x0da8a },
    { L"AK Unused 2", 0x0da8a, 0x0daaa },
    { L"AK Select Portrait", 0x2D18a, 0x2D1Aa, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"AK Win Portrait", 0x3382a, 0x338Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Zabel },
    { L"AK Poisoned", 0x13dc0 - 0xf6, 0x13de0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"AK Zapped", 0x13f00 - 0xf6, 0x13f20 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x0c },
    { L"AK Burned", 0x14040 - 0xf6, 0x14060 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"AK Pharaoh's Curse", 0x14180 - 0xf6, 0x141a0 - 0xf6, indexCPS2Sprites_Vamp_Zabel, 0x10 },
    { L"AK Midnight Bliss", 0x144a0 - 0xf6, 0x144c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x0daaa, 0x0daca, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LP Sparkles/Darkness Illusion", 0x0daca, 0x0daea, indexCPS2Sprites_Morrigan, 2 },
    { L"LP Bats", 0x0daea, 0x0db0a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x0db0a, 0x0db2a },
    { L"LP Select Portrait", 0x2BFAa, 0x2BFCa, indexCPS2Sprites_Morrigan, 0x20 },
    { L"LP Win Portrait", 0x2D92a, 0x2D9Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"LP Poisoned", 0x144e0 - 0xf6, 0x14500 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LP Zapped", 0x14620 - 0xf6, 0x14640 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"LP Burned", 0x14760 - 0xf6, 0x14780 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LP Pharaoh's Curse", 0x148a0 - 0xf6, 0x148c0 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"LP Midnight Bliss", 0x14bc0 - 0xf6, 0x14be0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x0db2a, 0x0db4a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MP Sparkles/Darkness Illusion", 0x0db4a, 0x0db6a, indexCPS2Sprites_Morrigan, 2 },
    { L"MP Bats", 0x0db6a, 0x0db8a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x0db8a, 0x0dbaa },
    { L"MP Select Portrait", 0x2C1Aa, 0x2C1Ca, indexCPS2Sprites_Morrigan, 0x20 },
    { L"MP Win Portrait", 0x2E3Ca, 0x2E46a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"MP Poisoned", 0x14500 - 0xf6, 0x14520 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MP Zapped", 0x14640 - 0xf6, 0x14660 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"MP Burned", 0x14780 - 0xf6, 0x147a0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MP Pharaoh's Curse", 0x148c0 - 0xf6, 0x148e0 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"MP Midnight Bliss", 0x14be0 - 0xf6, 0x14c00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x0dbaa, 0x0dbca, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HP Sparkles/Darkness Illusion", 0x0dbca, 0x0dbea, indexCPS2Sprites_Morrigan, 2 },
    { L"HP Bats", 0x0dbea, 0x0dc0a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x0dc0a, 0x0dc2a },
    { L"HP Select Portrait", 0x2C3Aa, 0x2C3Ca, indexCPS2Sprites_Morrigan, 0x20 },
    { L"HP Win Portrait", 0x2EE6a, 0x2EF0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"HP Poisoned", 0x14520 - 0xf6, 0x14540 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HP Zapped", 0x14660 - 0xf6, 0x14680 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"HP Burned", 0x147a0 - 0xf6, 0x147c0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HP Pharaoh's Curse", 0x148e0 - 0xf6, 0x14900 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"HP Midnight Bliss", 0x14c00 - 0xf6, 0x14c20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x0dc2a, 0x0dc4a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LK Sparkles/Darkness Illusion", 0x0dc4a, 0x0dc6a, indexCPS2Sprites_Morrigan, 2 },
    { L"LK Bats", 0x0dc6a, 0x0dc8a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x0dc8a, 0x0dcaa },
    { L"LK Select Portrait", 0x2C5Aa, 0x2C5Ca, indexCPS2Sprites_Morrigan, 0x20 },
    { L"LK Win Portrait", 0x2F90a, 0x2F9Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"LK Poisoned", 0x14540 - 0xf6, 0x14560 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LK Zapped", 0x14680 - 0xf6, 0x146a0 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"LK Burned", 0x147c0 - 0xf6, 0x147e0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LK Pharaoh's Curse", 0x14900 - 0xf6, 0x14920 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"LK Midnight Bliss", 0x14c20 - 0xf6, 0x14c40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x0dcaa, 0x0dcca, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MK Sparkles/Darkness Illusion", 0x0dcca, 0x0dcea, indexCPS2Sprites_Morrigan, 2 },
    { L"MK Bats", 0x0dcea, 0x0dd0a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x0dd0a, 0x0dd2a },
    { L"MK Select Portrait", 0x2C7Aa, 0x2C7Ca, indexCPS2Sprites_Morrigan, 0x20 },
    { L"MK Win Portrait", 0x303Aa, 0x3044a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"MK Poisoned", 0x14560 - 0xf6, 0x14580 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MK Zapped", 0x146a0 - 0xf6, 0x146c0 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"MK Burned", 0x147e0 - 0xf6, 0x14800 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MK Pharaoh's Curse", 0x14920 - 0xf6, 0x14940 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"MK Midnight Bliss", 0x14c40 - 0xf6, 0x14c60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x0dd2a, 0x0dd4a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HK Sparkles/Darkness Illusion", 0x0dd4a, 0x0dd6a, indexCPS2Sprites_Morrigan, 2 },
    { L"HK Bats", 0x0dd6a, 0x0dd8a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x0dd8a, 0x0ddaa },
    { L"HK Select Portrait", 0x2C9Aa, 0x2C9Ca, indexCPS2Sprites_Morrigan, 0x20 },
    { L"HK Win Portrait", 0x30E4a, 0x30EEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"HK Poisoned", 0x14580 - 0xf6, 0x145a0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HK Zapped", 0x146c0 - 0xf6, 0x146e0 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"HK Burned", 0x14800 - 0xf6, 0x14820 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HK Pharaoh's Curse", 0x14940 - 0xf6, 0x14960 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"HK Midnight Bliss", 0x14c60 - 0xf6, 0x14c80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x0ddaa, 0x0ddca, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PP Sparkles/Darkness Illusion", 0x0ddca, 0x0ddea, indexCPS2Sprites_Morrigan, 2 },
    { L"PP Bats", 0x0ddea, 0x0de0a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x0de0a, 0x0de2a },
    { L"PP Select Portrait", 0x2CBAa, 0x2CBCa, indexCPS2Sprites_Morrigan, 0x20 },
    { L"PP Win Portrait", 0x318Ea, 0x3198a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"PP Poisoned", 0x145a0 - 0xf6, 0x145c0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PP Zapped", 0x146e0 - 0xf6, 0x14700 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"PP Burned", 0x14820 - 0xf6, 0x14840 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PP Pharaoh's Curse", 0x14960 - 0xf6, 0x14980 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"PP Midnight Bliss", 0x14c80 - 0xf6, 0x14ca0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x0de2a, 0x0de4a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"KK Sparkles/Darkness Illusion", 0x0de4a, 0x0de6a, indexCPS2Sprites_Morrigan, 2 },
    { L"KK Bats", 0x0de6a, 0x0de8a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x0de8a, 0x0deaa },
    { L"KK Select Portrait", 0x2CDAa, 0x2CDCa, indexCPS2Sprites_Morrigan, 0x20 },
    { L"KK Win Portrait", 0x3238a, 0x3242a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"KK Poisoned", 0x145c0 - 0xf6, 0x145e0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"KK Zapped", 0x14700 - 0xf6, 0x14720 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"KK Burned", 0x14840 - 0xf6, 0x14860 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"KK Pharaoh's Curse", 0x14980 - 0xf6, 0x149a0 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"KK Midnight Bliss", 0x14ca0 - 0xf6, 0x14cc0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x0deaa, 0x0deca, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AP Sparkles/Darkness Illusion", 0x0deca, 0x0deea, indexCPS2Sprites_Morrigan, 2 },
    { L"AP Bats", 0x0deea, 0x0df0a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x0df0a, 0x0df2a },
    { L"AP Select Portrait", 0x2CFAa, 0x2CFCa, indexCPS2Sprites_Morrigan, 0x20 },
    { L"AP Win Portrait", 0x32E2a, 0x32ECa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"AP Poisoned", 0x145e0 - 0xf6, 0x14600 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AP Zapped", 0x14720 - 0xf6, 0x14740 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"AP Burned", 0x14860 - 0xf6, 0x14880 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AP Pharaoh's Curse", 0x149a0 - 0xf6, 0x149c0 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"AP Midnight Bliss", 0x14ce0 - 0xf6, 0x14d00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x0df2a, 0x0df4a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AK Sparkles/Darkness Illusion", 0x0df4a, 0x0df6a, indexCPS2Sprites_Morrigan, 2 },
    { L"AK Bats", 0x0df6a, 0x0df8a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x0df8a, 0x0dfaa },
    { L"AK Select Portrait", 0x2D1Aa, 0x2D1Ca, indexCPS2Sprites_Morrigan, 0x20 },
    { L"AK Win Portrait", 0x338Ca, 0x3396a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Morrigan },
    { L"AK Poisoned", 0x14600 - 0xf6, 0x14620 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AK Zapped", 0x14740 - 0xf6, 0x14760 - 0xf6, indexCPS2Sprites_Morrigan, 0x08 },
    { L"AK Burned", 0x14880 - 0xf6, 0x148a0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AK Pharaoh's Curse", 0x149c0 - 0xf6, 0x149e0 - 0xf6, indexCPS2Sprites_Morrigan, 0x0a },
    { L"AK Midnight Bliss", 0x14cc0 - 0xf6, 0x14ce0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Morrigan },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Soul Fist 1/3", 0x01b18a, 0x01b1aa },
    { L"Soul Fist 2/3", 0x01b1aa, 0x01b1ca },
    { L"Soul Fist 3/3", 0x01b1ca, 0x01b1ea },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x0dfaa, 0x0dfca, indexCPS2Sprites_Anakaris, 0 },
    { L"LP 2.HP/Mummies", 0x0dfea, 0x0e00a, indexCPS2Sprites_Anakaris, 2 },
    { L"LP 426KK/62KK Light", 0x0dfca, 0x0dfea, indexCPS2Sprites_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x0e00a, 0x0e02a, indexCPS2Sprites_Anakaris, 0x0a },
    { L"LP Select Portrait", 0x2BFCa, 0x2BFEa, indexCPS2Sprites_Anakaris, 0x20 },
    { L"LP Win Portrait", 0x2D9Ca, 0x2DA6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"LP Poisoned", 0x14d20 - 0xf6, 0x14d40 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"LP Zapped", 0x14e60 - 0xf6, 0x14e80 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"LP Burned", 0x14fa0 - 0xf6, 0x14fc0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"LP Pharaoh's Curse", 0x150e0 - 0xf6, 0x15100 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"LP Midnight Bliss", 0x15400 - 0xf6, 0x15420 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"LP Pharaoh Girls/Mini Mummy",        0x1b360 - 0xf6, 0x1b3a0 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x0e02a, 0x0e04a, indexCPS2Sprites_Anakaris, 0 },
    { L"MP 2.HP/Mummies", 0x0e06a, 0x0e08a, indexCPS2Sprites_Anakaris, 2 },
    { L"MP 426KK/62KK Light", 0x0e04a, 0x0e06a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x0e08a, 0x0e0aa, indexCPS2Sprites_Anakaris, 0x0a },
    { L"MP Select Portrait", 0x2C1Ca, 0x2C1Ea, indexCPS2Sprites_Anakaris, 0x20 },
    { L"MP Win Portrait", 0x2E46a, 0x2E50a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"MP Poisoned", 0x14d40 - 0xf6, 0x14d60 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"MP Zapped", 0x14e80 - 0xf6, 0x14ea0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"MP Burned", 0x14fc0 - 0xf6, 0x14fe0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"MP Pharaoh's Curse", 0x15100 - 0xf6, 0x15120 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"MP Midnight Bliss", 0x15420 - 0xf6, 0x15440 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"MP Pharaoh Girls/Mini Mummy",        0x1b3a0 - 0xf6, 0x1b3e0 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x0e0aa, 0x0e0ca, indexCPS2Sprites_Anakaris, 0 },
    { L"HP 2.HP/Mummies", 0x0e0ea, 0x0e10a, indexCPS2Sprites_Anakaris, 2 },
    { L"HP 426KK/62KK Light", 0x0e0ca, 0x0e0ea, indexCPS2Sprites_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x0e10a, 0x0e12a, indexCPS2Sprites_Anakaris, 0x0a },
    { L"HP Select Portrait", 0x2C3Ca, 0x2C3Ea, indexCPS2Sprites_Anakaris, 0x20 },
    { L"HP Win Portrait", 0x2EF0a, 0x2EFAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"HP Poisoned", 0x14d60 - 0xf6, 0x14d80 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"HP Zapped", 0x14ea0 - 0xf6, 0x14ec0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"HP Burned", 0x14fe0 - 0xf6, 0x15000 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"HP Pharaoh's Curse", 0x15120 - 0xf6, 0x15140 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"HP Midnight Bliss", 0x15440 - 0xf6, 0x15460 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"HP Pharaoh Girls/Mini Mummy",        0x1b3e0 - 0xf6, 0x1b420 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x0e12a, 0x0e14a, indexCPS2Sprites_Anakaris, 0 },
    { L"LK 2.HP/Mummies", 0x0e16a, 0x0e18a, indexCPS2Sprites_Anakaris, 2 },
    { L"LK 426KK/62KK Light", 0x0e14a, 0x0e16a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x0e18a, 0x0e1aa, indexCPS2Sprites_Anakaris, 0x0a },
    { L"LK Select Portrait", 0x2C5Ca, 0x2C5Ea, indexCPS2Sprites_Anakaris, 0x20 },
    { L"LK Win Portrait", 0x2F9Aa, 0x2FA4a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"LK Poisoned", 0x14d80 - 0xf6, 0x14da0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"LK Zapped", 0x14ec0 - 0xf6, 0x14ee0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"LK Burned", 0x15000 - 0xf6, 0x15020 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"LK Pharaoh's Curse", 0x15140 - 0xf6, 0x15160 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"LK Midnight Bliss", 0x15460 - 0xf6, 0x15480 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"LK Pharaoh Girls/Mini Mummy",        0x1b420 - 0xf6, 0x1b460 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x0e1aa, 0x0e1ca, indexCPS2Sprites_Anakaris, 0 },
    { L"MK 2.HP/Mummies", 0x0e1ea, 0x0e20a, indexCPS2Sprites_Anakaris, 2 },
    { L"MK 426KK/62KK Light", 0x0e1ca, 0x0e1ea, indexCPS2Sprites_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x0e20a, 0x0e22a, indexCPS2Sprites_Anakaris, 0x0a },
    { L"MK Select Portrait", 0x2C7Ca, 0x2C7Ea, indexCPS2Sprites_Anakaris, 0x20 },
    { L"MK Win Portrait", 0x3044a, 0x304Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"MK Poisoned", 0x14da0 - 0xf6, 0x14dc0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"MK Zapped", 0x14ee0 - 0xf6, 0x14f00 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"MK Burned", 0x15020 - 0xf6, 0x15040 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"MK Pharaoh's Curse", 0x15160 - 0xf6, 0x15180 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"MK Midnight Bliss", 0x15480 - 0xf6, 0x154a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"MK Pharaoh Girls/Mini Mummy",        0x1b460 - 0xf6, 0x1b4a0 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x0e22a, 0x0e24a, indexCPS2Sprites_Anakaris, 0 },
    { L"HK 2.HP/Mummies", 0x0e26a, 0x0e28a, indexCPS2Sprites_Anakaris, 2 },
    { L"HK 426KK/62KK Light", 0x0e24a, 0x0e26a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x0e28a, 0x0e2aa, indexCPS2Sprites_Anakaris, 0x0a },
    { L"HK Select Portrait", 0x2C9Ca, 0x2C9Ea, indexCPS2Sprites_Anakaris, 0x20 },
    { L"HK Win Portrait", 0x30EEa, 0x30F8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"HK Poisoned", 0x14dc0 - 0xf6, 0x14de0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"HK Zapped", 0x14f00 - 0xf6, 0x14f20 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"HK Burned", 0x15040 - 0xf6, 0x15060 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"HK Pharaoh's Curse", 0x15180 - 0xf6, 0x151a0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"HK Midnight Bliss", 0x154a0 - 0xf6, 0x154c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"HK Pharaoh Girls/Mini Mummy",        0x1b4a0 - 0xf6, 0x1b4e0 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x0e2aa, 0x0e2ca, indexCPS2Sprites_Anakaris, 0 },
    { L"PP 2.HP/Mummies", 0x0e2ea, 0x0e30a, indexCPS2Sprites_Anakaris, 2 },
    { L"PP 426KK/62KK Light", 0x0e2ca, 0x0e2ea, indexCPS2Sprites_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x0e30a, 0x0e32a, indexCPS2Sprites_Anakaris, 0x0a },
    { L"PP Select Portrait", 0x2CBCa, 0x2CBEa, indexCPS2Sprites_Anakaris, 0x20 },
    { L"PP Win Portrait", 0x3198a, 0x31A2a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"PP Poisoned", 0x14de0 - 0xf6, 0x14e00 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"PP Zapped", 0x14f20 - 0xf6, 0x14f40 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"PP Burned", 0x15060 - 0xf6, 0x15080 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"PP Pharaoh's Curse", 0x151a0 - 0xf6, 0x151c0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"PP Midnight Bliss", 0x154c0 - 0xf6, 0x154e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"PP Pharaoh Girls/Mini Mummy",        0x1b4e0 - 0xf6, 0x1b520 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x0e32a, 0x0e34a, indexCPS2Sprites_Anakaris, 0 },
    { L"KK 2.HP/Mummies", 0x0e36a, 0x0e38a, indexCPS2Sprites_Anakaris, 2 },
    { L"KK 426KK/62KK Light", 0x0e34a, 0x0e36a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x0e38a, 0x0e3aa, indexCPS2Sprites_Anakaris, 0x0a },
    { L"KK Select Portrait", 0x2CDCa, 0x2CDEa, indexCPS2Sprites_Anakaris, 0x20 },
    { L"KK Win Portrait", 0x3242a, 0x324Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"KK Poisoned", 0x14e00 - 0xf6, 0x14e20 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"KK Zapped", 0x14f40 - 0xf6, 0x14f60 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"KK Burned", 0x15080 - 0xf6, 0x150a0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"KK Pharaoh's Curse", 0x151c0 - 0xf6, 0x151e0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"KK Midnight Bliss", 0x154e0 - 0xf6, 0x15500 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"KK Pharaoh Girls/Mini Mummy",        0x1b520 - 0xf6, 0x1b560 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x0e3aa, 0x0e3ca, indexCPS2Sprites_Anakaris, 0 },
    { L"AP 2.HP/Mummies", 0x0e3ea, 0x0e40a, indexCPS2Sprites_Anakaris, 2 },
    { L"AP 426KK/62KK Light", 0x0e3ca, 0x0e3ea, indexCPS2Sprites_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x0e40a, 0x0e42a, indexCPS2Sprites_Anakaris, 0x0a },
    { L"AP Select Portrait", 0x2CFCa, 0x2CFEa, indexCPS2Sprites_Anakaris, 0x20 },
    { L"AP Win Portrait", 0x32ECa, 0x32F6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"AP Poisoned", 0x14e20 - 0xf6, 0x14e40 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"AP Zapped", 0x14f60 - 0xf6, 0x14f80 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"AP Burned", 0x150a0 - 0xf6, 0x150c0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"AP Pharaoh's Curse", 0x151e0 - 0xf6, 0x15200 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"AP Midnight Bliss", 0x15500 - 0xf6, 0x15520 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"AP Pharaoh Girls/Mini Mummy",        0x1b560 - 0xf6, 0x1b5a0 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x0e42a, 0x0e44a, indexCPS2Sprites_Anakaris, 0 },
    { L"AK 2.HP/Mummies", 0x0e46a, 0x0e48a, indexCPS2Sprites_Anakaris, 2 },
    { L"AK 426KK/62KK Light", 0x0e44a, 0x0e46a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x0e48a, 0x0e4aa, indexCPS2Sprites_Anakaris, 0x0a },
    { L"AK Select Portrait", 0x2D1Ca, 0x2D1Ea, indexCPS2Sprites_Anakaris, 0x20 },
    { L"AK Win Portrait", 0x3396a, 0x33A0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Anakaris },
    { L"AK Poisoned", 0x14e40 - 0xf6, 0x14e60 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"AK Zapped", 0x14f80 - 0xf6, 0x14fa0 - 0xf6, indexCPS2Sprites_Anakaris, 0x0c },
    { L"AK Burned", 0x150c0 - 0xf6, 0x150e0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"AK Pharaoh's Curse", 0x15200 - 0xf6, 0x15220 - 0xf6, indexCPS2Sprites_Anakaris, 0x0d },
    { L"AK Midnight Bliss", 0x15520 - 0xf6, 0x15540 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Anakaris },
    { L"AK Pharaoh Girls/Mini Mummy",        0x1b5a0 - 0xf6, 0x1b5e0 - 0xf6, indexCPS2Sprites_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Anakaris Pharaoh Magic Orbs 2", 0x1b2e0 - 0xf6, 0x1b320 - 0xf6, indexCPS2Sprites_Anakaris, 0x0b, &pairNext2 },
    { L"Anakaris Pharaoh Asteroids",    0x1b320 - 0xf6, 0x1b340 - 0xf6, indexCPS2Sprites_Anakaris, 0x08 },
    { L"Anakaris Pharaoh Magic Orbs 3", 0x1b340 - 0xf6, 0x1b360 - 0xf6, indexCPS2Sprites_Anakaris, 0x0e },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x0e4aa, 0x0e4ca, indexCPS2Sprites_Felicia, 0 },
    { L"LP Helpers/Mouse", 0x0e4ca, 0x0e4ea, indexCPS2Sprites_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x0e4ea, 0x0e50a, indexCPS2Sprites_Felicia, 0x01 },
    { L"LP ES Hell Cat", 0x0e50a, 0x0e52a, indexCPS2Sprites_Felicia, 0x00 },
    { L"LP Select portrait", 0x2BFEa, 0x2C00a, indexCPS2Sprites_Felicia, 0x20 },
    { L"LP Win Portrait", 0x2DA6a, 0x2DB0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"LP Poisoned", 0x15560 - 0xf6, 0x15580 - 0xf6, indexCPS2Sprites_Felicia },
    { L"LP Zapped", 0x156a0 - 0xf6, 0x156c0 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"LP Burned", 0x157e0 - 0xf6, 0x15800 - 0xf6, indexCPS2Sprites_Felicia },
    { L"LP Pharaoh's Curse", 0x15920 - 0xf6, 0x15940 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"LP Midnight Bliss", 0x15c40 - 0xf6, 0x15c60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x0e52a, 0x0e54a, indexCPS2Sprites_Felicia, 0 },
    { L"MP Helpers/Mouse", 0x0e54a, 0x0e56a, indexCPS2Sprites_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x0e56a, 0x0e58a, indexCPS2Sprites_Felicia, 0x01 },
    { L"MP ES Hell Cat", 0x0e58a, 0x0e5aa, indexCPS2Sprites_Felicia, 0x00 },
    { L"MP Select Portrait", 0x2C1Ea, 0x2C20a, indexCPS2Sprites_Felicia, 0x20 },
    { L"MP Win Portrait", 0x2E50a, 0x2E5Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"MP Poisoned", 0x15580 - 0xf6, 0x155a0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"MP Zapped", 0x156c0 - 0xf6, 0x156e0 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"MP Burned", 0x15800 - 0xf6, 0x15820 - 0xf6, indexCPS2Sprites_Felicia },
    { L"MP Pharaoh's Curse", 0x15940 - 0xf6, 0x15960 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"MP Midnight Bliss", 0x15c60 - 0xf6, 0x15c80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x0e5aa, 0x0e5ca, indexCPS2Sprites_Felicia, 0 },
    { L"HP Helpers/Mouse", 0x0e5ca, 0x0e5ea, indexCPS2Sprites_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x0e5ea, 0x0e60a, indexCPS2Sprites_Felicia, 0x01 },
    { L"HP ES Hell Cat", 0x0e60a, 0x0e62a, indexCPS2Sprites_Felicia, 0x00 },
    { L"HP Select Portrait", 0x2C3Ea, 0x2C40a, indexCPS2Sprites_Felicia, 0x20 },
    { L"HP Win Portrait", 0x2EFAa, 0x2F04a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"HP Poisoned", 0x155a0 - 0xf6, 0x155c0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"HP Zapped", 0x156e0 - 0xf6, 0x15700 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"HP Burned", 0x15820 - 0xf6, 0x15840 - 0xf6, indexCPS2Sprites_Felicia },
    { L"HP Pharaoh's Curse", 0x15960 - 0xf6, 0x15980 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"HP Midnight Bliss", 0x15c80 - 0xf6, 0x15ca0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x0e62a, 0x0e64a, indexCPS2Sprites_Felicia, 0 },
    { L"LK Helpers/Mouse", 0x0e64a, 0x0e66a, indexCPS2Sprites_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x0e66a, 0x0e68a, indexCPS2Sprites_Felicia, 0x01 },
    { L"LK ES Hell Cat", 0x0e68a, 0x0e6aa, indexCPS2Sprites_Felicia, 0x00 },
    { L"LK Select Portrait", 0x2C5Ea, 0x2C60a, indexCPS2Sprites_Felicia, 0x20 },
    { L"LK Win Portrait", 0x2FA4a, 0x2FAEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"LK Poisoned", 0x155c0 - 0xf6, 0x155e0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"LK Zapped", 0x15700 - 0xf6, 0x15720 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"LK Burned", 0x15840 - 0xf6, 0x15860 - 0xf6, indexCPS2Sprites_Felicia },
    { L"LK Pharaoh's Curse", 0x15980 - 0xf6, 0x159a0 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"LK Midnight Bliss", 0x15ca0 - 0xf6, 0x15cc0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x0e6aa, 0x0e6ca, indexCPS2Sprites_Felicia, 0 },
    { L"MK Helpers/Mouse", 0x0e6ca, 0x0e6ea, indexCPS2Sprites_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x0e6ea, 0x0e70a, indexCPS2Sprites_Felicia, 0x01 },
    { L"MK ES Hell Cat", 0x0e70a, 0x0e72a, indexCPS2Sprites_Felicia, 0x00 },
    { L"MK Select Portrait", 0x2C7Ea, 0x2C80a, indexCPS2Sprites_Felicia, 0x20 },
    { L"MK Win Portrait", 0x304Ea, 0x3058a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"MK Poisoned", 0x155e0 - 0xf6, 0x15600 - 0xf6, indexCPS2Sprites_Felicia },
    { L"MK Zapped", 0x15720 - 0xf6, 0x15740 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"MK Burned", 0x15860 - 0xf6, 0x15880 - 0xf6, indexCPS2Sprites_Felicia },
    { L"MK Pharaoh's Curse", 0x159a0 - 0xf6, 0x159c0 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"MK Midnight Bliss", 0x15cc0 - 0xf6, 0x15ce0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x0e72a, 0x0e74a, indexCPS2Sprites_Felicia, 0 },
    { L"HK Helpers/Mouse", 0x0e74a, 0x0e76a, indexCPS2Sprites_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x0e76a, 0x0e78a, indexCPS2Sprites_Felicia, 0x01 },
    { L"HK ES Hell Cat", 0x0e78a, 0x0e7aa, indexCPS2Sprites_Felicia, 0x00 },
    { L"HK Select Portrait", 0x2C9Ea, 0x2CA0a, indexCPS2Sprites_Felicia, 0x20 },
    { L"HK Win Portrait", 0x30F8a, 0x3102a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"HK Poisoned", 0x15600 - 0xf6, 0x15620 - 0xf6, indexCPS2Sprites_Felicia },
    { L"HK Zapped", 0x15740 - 0xf6, 0x15760 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"HK Burned", 0x15880 - 0xf6, 0x158a0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"HK Pharaoh's Curse", 0x159c0 - 0xf6, 0x159e0 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"HK Midnight Bliss", 0x15ce0 - 0xf6, 0x15d00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x0e7aa, 0x0e7ca, indexCPS2Sprites_Felicia, 0 },
    { L"PP Helpers/Mouse", 0x0e7ca, 0x0e7ea, indexCPS2Sprites_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x0e7ea, 0x0e80a, indexCPS2Sprites_Felicia, 0x01 },
    { L"PP ES Hell Cat", 0x0e80a, 0x0e82a, indexCPS2Sprites_Felicia, 0x00 },
    { L"PP Select Portrait", 0x2CBEa, 0x2CC0a, indexCPS2Sprites_Felicia, 0x20 },
    { L"PP Win Portrait", 0x31A2a, 0x31ACa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"PP Poisoned", 0x15620 - 0xf6, 0x15640 - 0xf6, indexCPS2Sprites_Felicia },
    { L"PP Zapped", 0x15760 - 0xf6, 0x15780 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"PP Burned", 0x158a0 - 0xf6, 0x158c0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"PP Pharaoh's Curse", 0x159e0 - 0xf6, 0x15a00 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"PP Midnight Bliss", 0x15d00 - 0xf6, 0x15d20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x0e82a, 0x0e84a, indexCPS2Sprites_Felicia, 0 },
    { L"KK Helpers/Mouse", 0x0e84a, 0x0e86a, indexCPS2Sprites_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x0e86a, 0x0e88a, indexCPS2Sprites_Felicia, 0x01 },
    { L"KK ES Hell Cat", 0x0e88a, 0x0e8aa, indexCPS2Sprites_Felicia, 0x00 },
    { L"KK Select Portrait", 0x2CDEa, 0x2CE0a, indexCPS2Sprites_Felicia, 0x20 },
    { L"KK Win Portrait", 0x324Ca, 0x3256a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"KK Poisoned", 0x15640 - 0xf6, 0x15660 - 0xf6, indexCPS2Sprites_Felicia },
    { L"KK Zapped", 0x15780 - 0xf6, 0x157a0 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"KK Burned", 0x158c0 - 0xf6, 0x158e0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"KK Pharaoh's Curse", 0x15a00 - 0xf6, 0x15a20 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"KK Midnight Bliss", 0x15d20 - 0xf6, 0x15d40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x0e8aa, 0x0e8ca, indexCPS2Sprites_Felicia, 0 },
    { L"AP Helpers/Mouse", 0x0e8ca, 0x0e8ea, indexCPS2Sprites_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x0e8ea, 0x0e90a, indexCPS2Sprites_Felicia, 0x01 },
    { L"AP ES Hell Cat", 0x0e90a, 0x0e92a, indexCPS2Sprites_Felicia, 0x00 },
    { L"AP Select Portrait", 0x2CFEa, 0x2D00a, indexCPS2Sprites_Felicia, 0x20 },
    { L"AP Win Portrait", 0x32F6a, 0x3300a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"AP Poisoned", 0x15660 - 0xf6, 0x15680 - 0xf6, indexCPS2Sprites_Felicia },
    { L"AP Zapped", 0x157a0 - 0xf6, 0x157c0 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"AP Burned", 0x158e0 - 0xf6, 0x15900 - 0xf6, indexCPS2Sprites_Felicia },
    { L"AP Pharaoh's Curse", 0x15a20 - 0xf6, 0x15a40 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"AP Midnight Bliss", 0x15d40 - 0xf6, 0x15d60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x0e92a, 0x0e94a, indexCPS2Sprites_Felicia, 0 },
    { L"AK Helpers/Mouse", 0x0e94a, 0x0e96a, indexCPS2Sprites_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x0e96a, 0x0e98a, indexCPS2Sprites_Felicia, 0x01 },
    { L"AK ES Hell Cat", 0x0e98a, 0x0e9aa, indexCPS2Sprites_Felicia, 0x00 },
    { L"AK Select Portrait", 0x2D1Ea, 0x2D20a, indexCPS2Sprites_Felicia, 0x20 },
    { L"AK Win Portrait", 0x33A0a, 0x33AAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Felicia },
    { L"AK Poisoned", 0x15680 - 0xf6, 0x156a0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"AK Zapped", 0x157c0 - 0xf6, 0x157e0 - 0xf6, indexCPS2Sprites_Felicia, 0x0c },
    { L"AK Burned", 0x15900 - 0xf6, 0x15920 - 0xf6, indexCPS2Sprites_Felicia },
    { L"AK Pharaoh's Curse", 0x15a40 - 0xf6, 0x15a60 - 0xf6, indexCPS2Sprites_Felicia, 0x0d },
    { L"AK Midnight Bliss", 0x15d60 - 0xf6, 0x15d80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x0e9aa, 0x0e9ca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"LP Ghosts/Hitsparks", 0x0e9ea, 0x0ea0a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LP 41236KK", 0x0e9ca, 0x0e9ea, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"LP Unknown Extra", 0x0ea0a, 0x0ea2a },
    { L"LP Select Portrait", 0x2C00a, 0x2C02a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x2DB0a, 0x2DBAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"LP Poisoned", 0x15da0 - 0xf6, 0x15dc0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LP Zapped", 0x15ee0 - 0xf6, 0x15f00 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"LP Burned", 0x16020 - 0xf6, 0x16040 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LP Pharaoh's Curse", 0x16160 - 0xf6, 0x16180 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"LP Midnight Bliss", 0x16480 - 0xf6, 0x164a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x0ea2a, 0x0ea4a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"MP Ghosts/Hitsparks", 0x0ea6a, 0x0ea8a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MP 41236KK", 0x0ea4a, 0x0ea6a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"MP Unknown Extra", 0x0ea8a, 0x0eaaa },
    { L"MP Select Portrait", 0x2C20a, 0x2C22a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x2E5Aa, 0x2E64a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"MP Poisoned", 0x15dc0 - 0xf6, 0x15de0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MP Zapped", 0x15f00 - 0xf6, 0x15f20 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"MP Burned", 0x16040 - 0xf6, 0x16060 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MP Pharaoh's Curse", 0x16180 - 0xf6, 0x161a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"MP Midnight Bliss", 0x164a0 - 0xf6, 0x164c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x0eaaa, 0x0eaca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"HP Ghosts/Hitsparks", 0x0eaea, 0x0eb0a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HP 41236KK", 0x0eaca, 0x0eaea, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"HP Unknown Extra", 0x0eb0a, 0x0eb2a },
    { L"HP Select Portrait", 0x2C40a, 0x2C42a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x2F04a, 0x2F0Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"HP Poisoned", 0x15de0 - 0xf6, 0x15e00 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HP Zapped", 0x15f20 - 0xf6, 0x15f40 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"HP Burned", 0x16060 - 0xf6, 0x16080 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HP Pharaoh's Curse", 0x161a0 - 0xf6, 0x161c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"HP Midnight Bliss", 0x164c0 - 0xf6, 0x164e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x0eb2a, 0x0eb4a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"LK Ghosts/Hitsparks", 0x0eb6a, 0x0eb8a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LK 41236KK", 0x0eb4a, 0x0eb6a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"LK Unknown Extra", 0x0eb8a, 0x0ebaa },
    { L"LK Select Portrait", 0x2C60a, 0x2C62a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x2FAEa, 0x2FB8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"LK Poisoned", 0x15e00 - 0xf6, 0x15e20 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LK Zapped", 0x15f40 - 0xf6, 0x15f60 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"LK Burned", 0x16080 - 0xf6, 0x160a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LK Pharaoh's Curse", 0x161c0 - 0xf6, 0x161e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"LK Midnight Bliss", 0x164e0 - 0xf6, 0x16500 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x0ebaa, 0x0ebca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"MK Ghosts/Hitsparks", 0x0ebea, 0x0ec0a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MK 41236KK", 0x0ebca, 0x0ebea, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"MK Unknown Extra", 0x0ec0a, 0x0ec2a },
    { L"MK Select Portrait", 0x2C80a, 0x2C82a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x3058a, 0x3062a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"MK Poisoned", 0x15e20 - 0xf6, 0x15e40 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MK Zapped", 0x15f60 - 0xf6, 0x15f80 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"MK Burned", 0x160a0 - 0xf6, 0x160c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MK Pharaoh's Curse", 0x161e0 - 0xf6, 0x16200 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"MK Midnight Bliss", 0x16500 - 0xf6, 0x16520 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x0ec2a, 0x0ec4a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"HK Ghosts/Hitsparks", 0x0ec6a, 0x0ec8a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HK 41236KK", 0x0ec4a, 0x0ec6a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"HK Unknown Extra", 0x0ec8a, 0x0ecaa },
    { L"HK Select Portrait", 0x2CA0a, 0x2CA2a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x3102a, 0x310Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"HK Poisoned", 0x15e40 - 0xf6, 0x15e60 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HK Zapped", 0x15f80 - 0xf6, 0x15fa0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"HK Burned", 0x160c0 - 0xf6, 0x160e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HK Pharaoh's Curse", 0x16200 - 0xf6, 0x16220 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"HK Midnight Bliss", 0x16520 - 0xf6, 0x16540 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x0ecaa, 0x0ecca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"PP Ghosts/Hitsparks", 0x0ecea, 0x0ed0a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"PP 41236KK", 0x0ecca, 0x0ecea, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"PP Unknown Extra", 0x0ed0a, 0x0ed2a },
    { L"PP Select Portrait", 0x2CC0a, 0x2CC2a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"PP Win Portrait", 0x31ACa, 0x31B6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"PP Poisoned", 0x15e60 - 0xf6, 0x15e80 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"PP Zapped", 0x15fa0 - 0xf6, 0x15fc0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"PP Burned", 0x160e0 - 0xf6, 0x16100 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"PP Pharaoh's Curse", 0x16220 - 0xf6, 0x16240 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"PP Midnight Bliss", 0x16540 - 0xf6, 0x16560 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x0ed2a, 0x0ed4a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"KK Ghosts/Hitsparks", 0x0ed6a, 0x0ed8a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"KK 41236KK", 0x0ed4a, 0x0ed6a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"KK Unknown Extra", 0x0ed8a, 0x0edaa },
    { L"KK Select Portrait", 0x2CE0a, 0x2CE2a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"KK Win Portrait", 0x3256a, 0x3260a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"KK Poisoned", 0x15e80 - 0xf6, 0x15ea0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"KK Zapped", 0x15fc0 - 0xf6, 0x15fe0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"KK Burned", 0x16100 - 0xf6, 0x16120 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"KK Pharaoh's Curse", 0x16240 - 0xf6, 0x16260 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"KK Midnight Bliss", 0x16560 - 0xf6, 0x16580 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x0edaa, 0x0edca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"AP Ghosts/Hitsparks", 0x0edea, 0x0ee0a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AP 41236KK", 0x0edca, 0x0edea, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"AP Unknown Extra", 0x0ee0a, 0x0ee2a },
    { L"AP Select Portrait", 0x2D00a, 0x2D02a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"AP Win Portrait", 0x3300a, 0x330Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"AP Poisoned", 0x15ea0 - 0xf6, 0x15ec0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AP Zapped", 0x15fe0 - 0xf6, 0x16000 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"AP Burned", 0x16120 - 0xf6, 0x16140 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AP Pharaoh's Curse", 0x16260 - 0xf6, 0x16280 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"AP Midnight Bliss", 0x16580 - 0xf6, 0x165a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x0ee2a, 0x0ee4a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"AK Ghosts/Hitsparks", 0x0ee6a, 0x0ee8a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AK 41236KK", 0x0ee4a, 0x0ee6a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
    { L"AK Unknown Extra", 0x0ee8a, 0x0eeaa },
    { L"AK Select Portrait", 0x2D20a, 0x2D22a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"AK Win Portrait", 0x33AAa, 0x33B4a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"AK Poisoned", 0x15ec0 - 0xf6, 0x15ee0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AK Zapped", 0x16000 - 0xf6, 0x16020 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"AK Burned", 0x16140 - 0xf6, 0x16160 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AK Pharaoh's Curse", 0x16280 - 0xf6, 0x162a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x10 },
    { L"AK Midnight Bliss", 0x165a0 - 0xf6, 0x165c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x0eeaa, 0x0eeca, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"LP Water/s.MK/j.MP", 0x0eeca, 0x0eeea, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"LP Sonic Wave, Poison Cloud, Mach Crab", 0x0eeea, 0x0ef2a, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"LP Sea Rage", 0x1b86a, 0x1b88a },
    { L"LP Gem's Anger", 0x01b6ea, 0x01b70a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"LP Select Portrait", 0x2C02a, 0x2C04a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"LP Win Portrait", 0x2DBAa, 0x2DC4a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"LP Poisoned", 0x165e0 - 0xf6, 0x16600 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"LP Zapped", 0x16720 - 0xf6, 0x16740 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"LP Burned", 0x16860 - 0xf6, 0x16880 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"LP Pharaoh's Curse", 0x169a0 - 0xf6, 0x169c0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"LP Midnight Bliss", 0x16cc0 - 0xf6, 0x16ce0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x0ef2a, 0x0ef4a, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"MP Water/s.MK/j.MP", 0x0ef4a, 0x0ef6a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"MP Sonic Wave, Poison Cloud, Mach Crab", 0x0ef6a, 0x0efaa, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"MP Sea Rage", 0x1b8ca, 0x1b8ea },
    { L"MP Gem's Anger", 0x01b70a, 0x01b72a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"MP Select Portrait", 0x2C22a, 0x2C24a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"MP Win Portrait", 0x2E64a, 0x2E6Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"MP Poisoned", 0x16600 - 0xf6, 0x16620 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"MP Zapped", 0x16740 - 0xf6, 0x16760 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"MP Burned", 0x16880 - 0xf6, 0x168a0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"MP Pharaoh's Curse", 0x169c0 - 0xf6, 0x169e0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"MP Midnight Bliss", 0x16ce0 - 0xf6, 0x16d00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x0efaa, 0x0efca, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"HP Water/s.MK/j.MP", 0x0efca, 0x0efea, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"HP Sonic Wave, Poison Cloud, Mach Crab", 0x0efea, 0x0f02a, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"HP Sea Rage", 0x1b92a, 0x1b94a },
    { L"HP Gem's Anger", 0x01b72a, 0x01b74a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"HP Select Portrait", 0x2C42a, 0x2C44a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"HP Win Portrait", 0x2F0Ea, 0x2F18a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"HP Poisoned", 0x16620 - 0xf6, 0x16640 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"HP Zapped", 0x16760 - 0xf6, 0x16780 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"HP Burned", 0x168a0 - 0xf6, 0x168c0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"HP Pharaoh's Curse", 0x169e0 - 0xf6, 0x16a00 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"HP Midnight Bliss", 0x16d00 - 0xf6, 0x16d20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x0f02a, 0x0f04a, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"LK Water/s.MK/j.MP", 0x0f04a, 0x0f06a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"LK Sonic Wave, Poison Cloud, Mach Crab", 0x0f06a, 0x0f0aa, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"LK Sea Rage", 0x1b98a, 0x1b9aa },
    { L"LK Gem's Anger", 0x01b74a, 0x01b76a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"LK Select Portrait", 0x2C62a, 0x2C64a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"LK Win Portrait", 0x2FB8a, 0x2FC2a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"LK Poisoned", 0x16640 - 0xf6, 0x16660 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"LK Zapped", 0x16780 - 0xf6, 0x167a0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"LK Burned", 0x168c0 - 0xf6, 0x168e0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"LK Pharaoh's Curse", 0x16a00 - 0xf6, 0x16a20 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"LK Midnight Bliss", 0x16d20 - 0xf6, 0x16d40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x0f0aa, 0x0f0ca, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"MK Water/s.MK/j.MP", 0x0f0ca, 0x0f0ea, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"MK Sonic Wave, Poison Cloud, Mach Crab", 0x0f0ea, 0x0f12a, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"MK Sea Rage", 0x1b9ea, 0x1ba0a },
    { L"MK Gem's Anger", 0x01b76a, 0x01b78a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"MK Select Portrait", 0x2C82a, 0x2C84a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"MK Win Portrait", 0x3062a, 0x306Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"MK Poisoned", 0x16660 - 0xf6, 0x16680 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"MK Zapped", 0x167a0 - 0xf6, 0x167c0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"MK Burned", 0x168e0 - 0xf6, 0x16900 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"MK Pharaoh's Curse", 0x16a20 - 0xf6, 0x16a40 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"MK Midnight Bliss", 0x16d40 - 0xf6, 0x16d60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x0f12a, 0x0f14a, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"HK Water/s.MK/j.MP", 0x0f14a, 0x0f16a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"HK Sonic Wave, Poison Cloud, Mach Crab", 0x0f16a, 0x0f1aa, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"HK Sea Rage", 0x1ba4a, 0x1ba6a },
    { L"HK Gem's Anger", 0x01b78a, 0x01b7aa, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"HK Select Portrait", 0x2CA2a, 0x2CA4a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"HK Win Portrait", 0x310Ca, 0x3116a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"HK Poisoned", 0x16680 - 0xf6, 0x166a0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"HK Zapped", 0x167c0 - 0xf6, 0x167e0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"HK Burned", 0x16900 - 0xf6, 0x16920 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"HK Pharaoh's Curse", 0x16a40 - 0xf6, 0x16a60 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"HK Midnight Bliss", 0x16d60 - 0xf6, 0x16d80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x0f1aa, 0x0f1ca, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"PP Water/s.MK/j.MP", 0x0f1ca, 0x0f1ea, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"PP Sonic Wave, Poison Cloud, Mach Crab", 0x0f1ea, 0x0f22a, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"PP Sea Rage", 0x1baaa, 0x1baca },
    { L"PP Gem's Anger", 0x01b7aa, 0x01b7ca, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"PP Select Portrait", 0x2CC2a, 0x2CC4a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"PP Win Portrait", 0x31B6a, 0x31C0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"PP Poisoned", 0x166a0 - 0xf6, 0x166c0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"PP Zapped", 0x167e0 - 0xf6, 0x16800 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"PP Burned", 0x16920 - 0xf6, 0x16940 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"PP Pharaoh's Curse", 0x16a60 - 0xf6, 0x16a80 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"PP Midnight Bliss", 0x16d80 - 0xf6, 0x16da0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x0f22a, 0x0f24a, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"KK Water/s.MK/j.MP", 0x0f24a, 0x0f26a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"KK Sonic Wave, Poison Cloud, Mach Crab", 0x0f26a, 0x0f2aa, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"KK Sea Rage", 0x1bb0a, 0x1bb2a },
    { L"KK Gem's Anger", 0x01b7ca, 0x01b7ea, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"KK Select Portrait", 0x2CE2a, 0x2CE4a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"KK Win Portrait", 0x3260a, 0x326Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"KK Poisoned", 0x166c0 - 0xf6, 0x166e0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"KK Zapped", 0x16800 - 0xf6, 0x16820 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"KK Burned", 0x16940 - 0xf6, 0x16960 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"KK Pharaoh's Curse", 0x16a80 - 0xf6, 0x16aa0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"KK Midnight Bliss", 0x16da0 - 0xf6, 0x16dc0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x0f2aa, 0x0f2ca, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"AP Water/s.MK/j.MP", 0x0f2ca, 0x0f2ea, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"AP Sonic Wave, Poison Cloud, Mach Crab", 0x0f2ea, 0x0f32a, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"AP Sea Rage", 0x1bb6a, 0x1bb8a },
    { L"AP Gem's Anger", 0x01b7ea, 0x01b80a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"AP Select Portrait", 0x2D02a, 0x2D04a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"AP Win Portrait", 0x330Aa, 0x3314a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"AP Poisoned", 0x166e0 - 0xf6, 0x16700 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"AP Zapped", 0x16820 - 0xf6, 0x16840 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"AP Burned", 0x16960 - 0xf6, 0x16980 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"AP Pharaoh's Curse", 0x16aa0 - 0xf6, 0x16ac0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"AP Midnight Bliss", 0x16dc0 - 0xf6, 0x16de0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x0f32a, 0x0f34a, indexCPS2Sprites_Vamp_Aulbath, 0 },
    { L"AK Water/s.MK/j.MP", 0x0f34a, 0x0f36a, indexCPS2Sprites_Vamp_Aulbath, 0x02 },
    { L"AK Sonic Wave, Poison Cloud, Mach Crab", 0x0f36a, 0x0f3aa, indexCPS2Sprites_Vamp_Aulbath, 0xcc },
    { L"AK Sea Rage", 0x1bbca, 0x1bbea },
    { L"AK Gem's Anger", 0x01b80a, 0x01b82a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"AK Select Portrait", 0x2D22a, 0x2D24a, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"AK Win Portrait", 0x33B4a, 0x33BEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Aulbath },
    { L"AK Poisoned", 0x16700 - 0xf6, 0x16720 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"AK Zapped", 0x16840 - 0xf6, 0x16860 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x0c },
    { L"AK Burned", 0x16980 - 0xf6, 0x169a0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"AK Pharaoh's Curse", 0x16ac0 - 0xf6, 0x16ae0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath, 0x10 },
    { L"AK Midnight Bliss", 0x16de0 - 0xf6, 0x16e00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_SHARED[] =
{
    { L"Sonic Wave 2 / Mach Crab 2 (Shared)", 0x1bc0a, 0x1bc2a },
    { L"Pearl and Win Pose (Shared)", 0x1bc2a, 0x1bc4a, indexCPS2Sprites_Vamp_Aulbath, 0x03 },
    { L"Aulbath ES Gem Anger 1", 0x1bc4a, 0x1bc6a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"Aulbath ES Gem Anger 2", 0x1bc6a, 0x1bc8a, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"Aulbath ES Gem Anger 3", 0x1bc8a, 0x1bcaa, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
    { L"Aulbath ES Gem Anger 4", 0x1bcaa, 0x1bcca, indexCPS2Sprites_Vamp_Aulbath, 0x04 },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x0f3aa, 0x0f3ca, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"LP Ice Extras", 0x0f40a, 0x0f42a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x0f3ca, 0x0f3ea, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x0f3ea, 0x0f40a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"LP Select Portrait", 0x2C04a, 0x2C06a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"LP Win Portrait", 0x2DC4a, 0x2DCEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"LP Poisoned", 0x16e20 - 0xf6, 0x16e40 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"LP Zapped", 0x16f60 - 0xf6, 0x16f80 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"LP Burned", 0x170a0 - 0xf6, 0x170c0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"LP Pharaoh's Curse", 0x171e0 - 0xf6, 0x17200 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"LP Midnight Bliss", 0x17500 - 0xf6, 0x17520 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x0f42a, 0x0f44a, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"MP Ice Extras", 0x0f48a, 0x0f4aa, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x0f44a, 0x0f46a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x0f46a, 0x0f48a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"MP Select Portrait", 0x2C24a, 0x2C26a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"MP Win Portrait", 0x2E6Ea, 0x2E78a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"MP Poisoned", 0x16e40 - 0xf6, 0x16e60 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"MP Zapped", 0x16f80 - 0xf6, 0x16fa0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"MP Burned", 0x170c0 - 0xf6, 0x170e0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"MP Pharaoh's Curse", 0x17200 - 0xf6, 0x17220 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"MP Midnight Bliss", 0x17520 - 0xf6, 0x17540 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x0f4aa, 0x0f4ca, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"HP Ice Extras", 0x0f50a, 0x0f52a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x0f4ca, 0x0f4ea, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x0f4ea, 0x0f50a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"HP Select Portrait", 0x2C44a, 0x2C46a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"HP Win Portrait", 0x2F18a, 0x2F22a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"HP Poisoned", 0x16e60 - 0xf6, 0x16e80 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"HP Zapped", 0x16fa0 - 0xf6, 0x16fc0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"HP Burned", 0x170e0 - 0xf6, 0x17100 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"HP Pharaoh's Curse", 0x17220 - 0xf6, 0x17240 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"HP Midnight Bliss", 0x17540 - 0xf6, 0x17560 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x0f52a, 0x0f54a, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"LK Ice Extras", 0x0f58a, 0x0f5aa, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x0f54a, 0x0f56a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x0f56a, 0x0f58a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"LK Select Portrait", 0x2C64a, 0x2C66a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"LK Win Portrait", 0x2FC2a, 0x2FCCa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"LK Poisoned", 0x16e80 - 0xf6, 0x16ea0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"LK Zapped", 0x16fc0 - 0xf6, 0x16fe0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"LK Burned", 0x17100 - 0xf6, 0x17120 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"LK Pharaoh's Curse", 0x17240 - 0xf6, 0x17260 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"LK Midnight Bliss", 0x17560 - 0xf6, 0x17580 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x0f5aa, 0x0f5ca, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"MK Ice Extras", 0x0f60a, 0x0f62a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x0f5ca, 0x0f5ea, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x0f5ea, 0x0f60a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"MK Select Portrait", 0x2C84a, 0x2C86a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"MK Win Portrait", 0x306Ca, 0x3076a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"MK Poisoned", 0x16ea0 - 0xf6, 0x16ec0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"MK Zapped", 0x16fe0 - 0xf6, 0x17000 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"MK Burned", 0x17120 - 0xf6, 0x17140 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"MK Pharaoh's Curse", 0x17260 - 0xf6, 0x17280 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"MK Midnight Bliss", 0x17580 - 0xf6, 0x175a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x0f62a, 0x0f64a, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"HK Ice Extras", 0x0f68a, 0x0f6aa, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x0f64a, 0x0f66a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x0f66a, 0x0f68a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"HK Select Portrait", 0x2Ca4a, 0x2Ca6a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"HK Win Portrait", 0x3116a, 0x3120a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"HK Poisoned", 0x16ec0 - 0xf6, 0x16ee0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"HK Zapped", 0x17000 - 0xf6, 0x17020 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"HK Burned", 0x17140 - 0xf6, 0x17160 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"HK Pharaoh's Curse", 0x17280 - 0xf6, 0x172a0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"HK Midnight Bliss", 0x175a0 - 0xf6, 0x175c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x0f6aa, 0x0f6ca, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"PP Ice Extras", 0x0f70a, 0x0f72a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x0f6ca, 0x0f6ea, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x0f6ea, 0x0f70a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"PP Select Portrait", 0x2CC4a, 0x2CC6a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"PP Win Portrait", 0x31C0a, 0x31CAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"PP Poisoned", 0x16ee0 - 0xf6, 0x16f00 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"PP Zapped", 0x17020 - 0xf6, 0x17040 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"PP Burned", 0x17160 - 0xf6, 0x17180 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"PP Pharaoh's Curse", 0x172a0 - 0xf6, 0x172c0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"PP Midnight Bliss", 0x175c0 - 0xf6, 0x175e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x0f72a, 0x0f74a, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"KK Ice Extras", 0x0f78a, 0x0f7aa, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x0f74a, 0x0f76a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x0f76a, 0x0f78a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"KK Select Portrait", 0x2CE4a, 0x2CE6a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"KK Win Portrait", 0x326Aa, 0x3274a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"KK Poisoned", 0x16f00 - 0xf6, 0x16f20 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"KK Zapped", 0x17040 - 0xf6, 0x17060 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"KK Burned", 0x17180 - 0xf6, 0x171a0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"KK Pharaoh's Curse", 0x172c0 - 0xf6, 0x172e0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"KK Midnight Bliss", 0x175e0 - 0xf6, 0x17600 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x0f7aa, 0x0f7ca, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"AP Ice Extras", 0x0f80a, 0x0f82a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x0f7ca, 0x0f7ea, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x0f7ea, 0x0f80a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"AP Select Portrait", 0x2D04a, 0x2D06a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"AP Win Portrait", 0x3314a, 0x331Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"AP Poisoned", 0x16f20 - 0xf6, 0x16f40 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"AP Zapped", 0x17060 - 0xf6, 0x17080 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"AP Burned", 0x171a0 - 0xf6, 0x171c0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"AP Pharaoh's Curse", 0x172e0 - 0xf6, 0x17300 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"AP Midnight Bliss", 0x17600 - 0xf6, 0x17620 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x0f82a, 0x0f84a, indexCPS2Sprites_Vamp_Sasquatch, 0 },
    { L"AK Ice Extras", 0x0f88a, 0x0f8aa, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x0f84a, 0x0f86a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x0f86a, 0x0f88a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"AK Select Portrait", 0x2D24a, 0x2D26a, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"AK Win Portrait", 0x33BEa, 0x33C8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Sasquatch },
    { L"AK Poisoned", 0x16f40 - 0xf6, 0x16f60 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"AK Zapped", 0x17080 - 0xf6, 0x170a0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0c },
    { L"AK Burned", 0x171c0 - 0xf6, 0x171e0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"AK Pharaoh's Curse", 0x17300 - 0xf6, 0x17320 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch, 0x0d },
    { L"AK Midnight Bliss", 0x17620 - 0xf6, 0x17640 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x0fcaa, 0x0fcca, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"LP Wings/Honey", 0x0fcca, 0x0fcea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LP Wings/Honey frame 2", 0x1ec6a, 0x1ec8a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LP Bees", 0x0fd0a, 0x0fd2a, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"LP Egg", 0x0fcea, 0x0fd0a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"LP Intro/ES 412PP 1", 0x1bf8a, 0x1bfaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 2", 0x1bfca, 0x1bfea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 3", 0x1c00a, 0x1c02a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 4", 0x1c04a, 0x1c06a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 5", 0x1c08a, 0x1c0aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 6", 0x1c0ca, 0x1c0ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 7", 0x1c10a, 0x1c12a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Intro/ES 412PP 8", 0x1c14a, 0x1c16a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 1/7", 0x01e16a, 0x01e18a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 2/7", 0x01e18a, 0x01e1aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 3/7", 0x01e1aa, 0x01e1ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 4/7", 0x01e1ca, 0x01e1ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 5/7", 0x01e1ea, 0x01e20a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 6/7", 0x01e20a, 0x01e22a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP C-R 7/7", 0x01e22a, 0x01e24a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LP Select Portrait", 0x2C08a, 0x2C0Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"LP Win Portrait", 0x2DD8a, 0x2DE2a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"LP Poisoned", 0x17660 - 0xf6, 0x17680 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"LP Wings/Honey Poisoned", 0x01edaa, 0x01edca, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LP Zapped", 0x177a0 - 0xf6, 0x177c0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"LP Burned", 0x178e0 - 0xf6, 0x17900 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"LP Wings/Honey Burned", 0x01f02a, 0x01f04a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LP Pharaoh's Curse", 0x17a20 - 0xf6, 0x17a40 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"LP Midnight Bliss", 0x17d40 - 0xf6, 0x17d60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"LP Dark Force 1/4", 0x01f48a, 0x01f4aa, indexCPS2Sprites_Vamp_QBee },
    { L"LP Dark Force 2/4", 0x01f4aa, 0x01f4ca, indexCPS2Sprites_Vamp_QBee },
    { L"LP Dark Force 3/4", 0x01f4ca, 0x01f4ea, indexCPS2Sprites_Vamp_QBee },
    { L"LP Dark Force 4/4", 0x01f4ea, 0x01f50a, indexCPS2Sprites_Vamp_QBee },
    { L"LP Bees Win Pose", 0x01be4a, 0x01be6a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"LP Tap K", 0x01d38a, 0x01d3aa, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x0fd2a, 0x0fd4a, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"MP Wings/Honey", 0x0fd4a, 0x0fd6a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MP Wings/Honey frame 2", 0x1ec8a, 0x1ecaa, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MP Bees", 0x0fd8a, 0x0fdaa, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"MP Egg", 0x0fd6a, 0x0fd8a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"MP Intro/ES 412PP 1", 0x1c18a, 0x1c1aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 2", 0x1c1ca, 0x1c1ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 3", 0x1c20a, 0x1c22a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 4", 0x1c24a, 0x1c26a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 5", 0x1c28a, 0x1c2aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 6", 0x1c2ca, 0x1c2ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 7", 0x1c30a, 0x1c32a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Intro/ES 412PP 8", 0x1c34a, 0x1c36a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 1/7", 0x01e28a, 0x01e2aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 2/7", 0x01e2aa, 0x01e2ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 3/7", 0x01e2ca, 0x01e2ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 4/7", 0x01e2ea, 0x01e30a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 5/7", 0x01e30a, 0x01e32a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 6/7", 0x01e32a, 0x01e34a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP C-R 7/7", 0x01e34a, 0x01e36a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MP Select Portrait", 0x2C28a, 0x2C2Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"MP Win Portrait", 0x2E82a, 0x2E8Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"MP Poisoned", 0x17680 - 0xf6, 0x176a0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"MP Wings/Honey Poisoned", 0x01edca, 0x01edea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MP Zapped", 0x177c0 - 0xf6, 0x177e0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"MP Burned", 0x17900 - 0xf6, 0x17920 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"MP Wings/Honey Burned", 0x01f04a, 0x01f06a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MP Pharaoh's Curse", 0x17a40 - 0xf6, 0x17a60 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"MP Midnight Bliss", 0x17d60 - 0xf6, 0x17d80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"MP Dark Force 1/4", 0x01f50a, 0x01f52a, indexCPS2Sprites_Vamp_QBee },
    { L"MP Dark Force 2/4", 0x01f52a, 0x01f54a, indexCPS2Sprites_Vamp_QBee },
    { L"MP Dark Force 3/4", 0x01f54a, 0x01f56a, indexCPS2Sprites_Vamp_QBee },
    { L"MP Dark Force 4/4", 0x01f56a, 0x01f58a, indexCPS2Sprites_Vamp_QBee },
    { L"MP Bees Win Pose", 0x01be6a, 0x01be8a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"MP Tap K", 0x01d3aa, 0x01d3ca, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x0fdaa, 0x0fdca, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"HP Wings/Honey", 0x0fdca, 0x0fdea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HP Wings/Honey frame 2", 0x1ecaa, 0x1ecca, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HP Bees", 0x0fe0a, 0x0fe2a, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"HP Egg", 0x0fdea, 0x0fe0a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"HP Intro/ES 412PP 1", 0x1c38a, 0x1c3aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 2", 0x1c3ca, 0x1c3ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 3", 0x1c40a, 0x1c42a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 4", 0x1c44a, 0x1c46a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 5", 0x1c48a, 0x1c4aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 6", 0x1c4ca, 0x1c4ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 7", 0x1c50a, 0x1c52a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Intro/ES 412PP 8", 0x1c54a, 0x1c56a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 1/7", 0x01e3aa, 0x01e3ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 2/7", 0x01e3ca, 0x01e3ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 3/7", 0x01e3ea, 0x01e40a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 4/7", 0x01e40a, 0x01e42a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 5/7", 0x01e42a, 0x01e44a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 6/7", 0x01e44a, 0x01e46a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP C-R 7/7", 0x01e46a, 0x01e48a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HP Select Portrait", 0x2C48a, 0x2C4Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"HP Win Portrait", 0x2F2Ca, 0x2F36a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"HP Poisoned", 0x176a0 - 0xf6, 0x176c0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"HP Wings/Honey Poisoned", 0x01edea, 0x01ee0a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HP Zapped", 0x177e0 - 0xf6, 0x17800 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"HP Burned", 0x17920 - 0xf6, 0x17940 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"HP Wings/Honey Burned", 0x01f06a, 0x01f08a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HP Pharaoh's Curse", 0x17a60 - 0xf6, 0x17a80 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"HP Midnight Bliss", 0x17d80 - 0xf6, 0x17da0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"HP Dark Force 1/4", 0x01f58a, 0x01f5aa, indexCPS2Sprites_Vamp_QBee },
    { L"HP Dark Force 2/4", 0x01f5aa, 0x01f5ca, indexCPS2Sprites_Vamp_QBee },
    { L"HP Dark Force 3/4", 0x01f5ca, 0x01f5ea, indexCPS2Sprites_Vamp_QBee },
    { L"HP Dark Force 4/4", 0x01f5ea, 0x01f60a, indexCPS2Sprites_Vamp_QBee },
    { L"HP Bees Win Pose", 0x01be8a, 0x01beaa, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"HP Tap K", 0x01d3ca, 0x01d3ea, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x0fe2a, 0x0fe4a, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"LK Wings/Honey", 0x0fe4a, 0x0fe6a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LK Wings/Honey frame 2", 0x1ecca, 0x1ecea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LK Bees", 0x0fe8a, 0x0feaa, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"LK Egg", 0x0fe6a, 0x0fe8a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"LK Intro/ES 412PP 1", 0x1c58a, 0x1c5aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 2", 0x1c5ca, 0x1c5ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 3", 0x1c60a, 0x1c62a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 4", 0x1c64a, 0x1c66a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 5", 0x1c68a, 0x1c6aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 6", 0x1c6ca, 0x1c6ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 7", 0x1c70a, 0x1c72a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Intro/ES 412PP 8", 0x1c74a, 0x1c76a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 1/7", 0x01e4ca, 0x01e4ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 2/7", 0x01e4ea, 0x01e50a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 3/7", 0x01e50a, 0x01e52a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 4/7", 0x01e52a, 0x01e54a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 5/7", 0x01e54a, 0x01e56a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 6/7", 0x01e56a, 0x01e58a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK C-R 7/7", 0x01e58a, 0x01e5aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"LK Select Portrait", 0x2C68a, 0x2C6Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"LK Win Portrait", 0x2FD6a, 0x2FE0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"LK Poisoned", 0x176c0 - 0xf6, 0x176e0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"LK Wings/Honey Poisoned", 0x01ee0a, 0x01ee2a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LK Zapped", 0x17800 - 0xf6, 0x17820 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"LK Burned", 0x17940 - 0xf6, 0x17960 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"LK Wings/Honey Burned", 0x01f08a, 0x01f0aa, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"LK Pharaoh's Curse", 0x17a80 - 0xf6, 0x17aa0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"LK Midnight Bliss", 0x17da0 - 0xf6, 0x17dc0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"LK Dark Force 1/4", 0x01f60a, 0x01f62a, indexCPS2Sprites_Vamp_QBee },
    { L"LK Dark Force 2/4", 0x01f62a, 0x01f64a, indexCPS2Sprites_Vamp_QBee },
    { L"LK Dark Force 3/4", 0x01f64a, 0x01f66a, indexCPS2Sprites_Vamp_QBee },
    { L"LK Dark Force 4/4", 0x01f66a, 0x01f68a, indexCPS2Sprites_Vamp_QBee },
    { L"LK Bees Win Pose", 0x01beaa, 0x01beca, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"LK Tap K", 0x01d3ea, 0x01d40a, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x0feaa, 0x0feca, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"MK Wings/Honey", 0x0feca, 0x0feea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MK Wings/Honey frame 2", 0x1ecea, 0x1ed0a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MK Bees", 0x0ff0a, 0x0ff2a, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"MK Egg", 0x0feea, 0x0ff0a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"MK Intro/ES 412PP 1", 0x1c78a, 0x1c7aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 2", 0x1c7ca, 0x1c7ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 3", 0x1c80a, 0x1c82a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 4", 0x1c84a, 0x1c86a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 5", 0x1c88a, 0x1c8aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 6", 0x1c8ca, 0x1c8ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 7", 0x1c90a, 0x1c92a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Intro/ES 412PP 8", 0x1c94a, 0x1c96a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 1/7", 0x01e5ea, 0x01e60a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 2/7", 0x01e60a, 0x01e62a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 3/7", 0x01e62a, 0x01e64a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 4/7", 0x01e64a, 0x01e66a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 5/7", 0x01e66a, 0x01e68a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 6/7", 0x01e68a, 0x01e6aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK C-R 7/7", 0x01e6aa, 0x01e6ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"MK Select Portrait", 0x2C88a, 0x2C8Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"MK Win Portrait", 0x3080a, 0x308Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"MK Poisoned", 0x176e0 - 0xf6, 0x17700 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"MK Wings/Honey Poisoned", 0x01ee2a, 0x01ee4a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MK Zapped", 0x17820 - 0xf6, 0x17840 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"MK Burned", 0x17960 - 0xf6, 0x17980 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"MK Wings/Honey Burned", 0x01f0aa, 0x01f0ca, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"MK Pharaoh's Curse", 0x17aa0 - 0xf6, 0x17ac0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"MK Midnight Bliss", 0x17dc0 - 0xf6, 0x17de0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"MK Dark Force 1/4", 0x01f68a, 0x01f6aa, indexCPS2Sprites_Vamp_QBee },
    { L"MK Dark Force 2/4", 0x01f6aa, 0x01f6ca, indexCPS2Sprites_Vamp_QBee },
    { L"MK Dark Force 3/4", 0x01f6ca, 0x01f6ea, indexCPS2Sprites_Vamp_QBee },
    { L"MK Dark Force 4/4", 0x01f6ea, 0x01f70a, indexCPS2Sprites_Vamp_QBee },
    { L"MK Bees Win Pose", 0x01beca, 0x01beea, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"MK Tap K", 0x01d40a, 0x01d42a, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x0ff2a, 0x0ff4a, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"HK Wings/Honey", 0x0ff4a, 0x0ff6a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HK Wings/Honey frame 2", 0x1ed0a, 0x1ed2a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HK Bees", 0x0ff8a, 0x0ffaa, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"HK Egg", 0x0ff6a, 0x0ff8a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"HK Intro/ES 412PP 1", 0x1c98a, 0x1c9aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 2", 0x1c9ca, 0x1c9ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 3", 0x1ca0a, 0x1ca2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 4", 0x1ca4a, 0x1ca6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 5", 0x1ca8a, 0x1caaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 6", 0x1caca, 0x1caea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 7", 0x1cb0a, 0x1cb2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Intro/ES 412PP 8", 0x1cb4a, 0x1cb6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 1/7", 0x01e70a, 0x01e72a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 2/7", 0x01e72a, 0x01e74a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 3/7", 0x01e74a, 0x01e76a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 4/7", 0x01e76a, 0x01e78a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 5/7", 0x01e78a, 0x01e7aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 6/7", 0x01e7aa, 0x01e7ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK C-R 7/7", 0x01e7ca, 0x01e7ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"HK Select Portrait", 0x2CA8a, 0x2CAAa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"HK Win Portrait", 0x312Aa, 0x3134a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"HK Poisoned", 0x17700 - 0xf6, 0x17720 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"HK Wings/Honey Poisoned", 0x01ee4a, 0x01ee6a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HK Zapped", 0x17840 - 0xf6, 0x17860 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"HK Burned", 0x17980 - 0xf6, 0x179a0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"HK Wings/Honey Burned", 0x01f0ca, 0x01f0ea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"HK Pharaoh's Curse", 0x17ac0 - 0xf6, 0x17ae0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"HK Midnight Bliss", 0x17de0 - 0xf6, 0x17e00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"HK Dark Force 1/4", 0x01f70a, 0x01f72a, indexCPS2Sprites_Vamp_QBee },
    { L"HK Dark Force 2/4", 0x01f72a, 0x01f74a, indexCPS2Sprites_Vamp_QBee },
    { L"HK Dark Force 3/4", 0x01f74a, 0x01f76a, indexCPS2Sprites_Vamp_QBee },
    { L"HK Dark Force 4/4", 0x01f76a, 0x01f78a, indexCPS2Sprites_Vamp_QBee },
    { L"HK Bees Win Pose", 0x01beea, 0x01bf0a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"HK Tap K", 0x01d42a, 0x01d44a, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x0ffaa, 0x0ffca, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"PP Wings/Honey", 0x0ffca, 0x0ffea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"PP Wings/Honey frame 2", 0x1ed2a, 0x1ed4a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"PP Bees", 0x1000a, 0x1002a, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"PP Egg", 0x0ffea, 0x1000a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"PP Intro/ES 412PP 1", 0x1cb8a, 0x1cbaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 2", 0x1cbca, 0x1cbea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 3", 0x1cc0a, 0x1cc2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 4", 0x1cc4a, 0x1cc6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 5", 0x1cc8a, 0x1ccaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 6", 0x1ccca, 0x1ccea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 7", 0x1cd0a, 0x1cd2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Intro/ES 412PP 8", 0x1cd4a, 0x1cd6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 1/7", 0x01e82a, 0x01e84a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 2/7", 0x01e84a, 0x01e86a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 3/7", 0x01e86a, 0x01e88a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 4/7", 0x01e88a, 0x01e8aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 5/7", 0x01e8aa, 0x01e8ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 6/7", 0x01e8ca, 0x01e8ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP C-R 7/7", 0x01e8ea, 0x01e90a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"PP Select Portrait", 0x2CC8a, 0x2CCAa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"PP Win Portrait", 0x31D4a, 0x31DEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"PP Poisoned", 0x17720 - 0xf6, 0x17740 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"PP Wings/Honey Poisoned", 0x01ee6a, 0x01ee8a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"PP Zapped", 0x17860 - 0xf6, 0x17880 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"PP Burned", 0x179a0 - 0xf6, 0x179c0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"PP Wings/Honey Burned", 0x01f0ea, 0x01f10a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"PP Pharaoh's Curse", 0x17ae0 - 0xf6, 0x17b00 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"PP Midnight Bliss", 0x17e00 - 0xf6, 0x17e20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"PP Dark Force 1/4", 0x01f78a, 0x01f7aa, indexCPS2Sprites_Vamp_QBee },
    { L"PP Dark Force 2/4", 0x01f7aa, 0x01f7ca, indexCPS2Sprites_Vamp_QBee },
    { L"PP Dark Force 3/4", 0x01f7ca, 0x01f7ea, indexCPS2Sprites_Vamp_QBee },
    { L"PP Dark Force 4/4", 0x01f7ea, 0x01f80a, indexCPS2Sprites_Vamp_QBee },
    { L"PP Bees Win Pose", 0x01bf0a, 0x01bf2a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"PP Tap K", 0x01d44a, 0x01d46a, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1002a, 0x1004a, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"KK Wings/Honey", 0x1004a, 0x1006a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"KK Wings/Honey frame 2", 0x1ed4a, 0x1ed6a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"KK Bees", 0x1008a, 0x100aa, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"KK Egg", 0x1006a, 0x1008a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"KK Intro/ES 412PP 1", 0x1cd8a, 0x1cdaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 2", 0x1cdca, 0x1cdea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 3", 0x1ce0a, 0x1ce2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 4", 0x1ce4a, 0x1ce6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 5", 0x1ce8a, 0x1ceaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 6", 0x1ceca, 0x1ceea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 7", 0x1cf0a, 0x1cf2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Intro/ES 412PP 8", 0x1cf4a, 0x1cf6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 1/7", 0x01e94a, 0x01e96a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 2/7", 0x01e96a, 0x01e98a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 3/7", 0x01e98a, 0x01e9aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 4/7", 0x01e9aa, 0x01e9ca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 5/7", 0x01e9ca, 0x01e9ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 6/7", 0x01e9ea, 0x01ea0a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK C-R 7/7", 0x01ea0a, 0x01ea2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"KK Select Portrait", 0x2CE8a, 0x2CEAa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"KK Win Portrait", 0x327Ea, 0x3288a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"KK Poisoned", 0x17740 - 0xf6, 0x17760 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"KK Wings/Honey Poisoned", 0x01ee8a, 0x01eeaa, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"KK Zapped", 0x17880 - 0xf6, 0x178a0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"KK Burned", 0x179c0 - 0xf6, 0x179e0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"KK Wings/Honey Burned", 0x01f10a, 0x01f12a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"KK Pharaoh's Curse", 0x17b00 - 0xf6, 0x17b20 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"KK Midnight Bliss", 0x17e20 - 0xf6, 0x17e40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"KK Dark Force 1/4", 0x01f80a, 0x01f82a, indexCPS2Sprites_Vamp_QBee },
    { L"KK Dark Force 2/4", 0x01f82a, 0x01f84a, indexCPS2Sprites_Vamp_QBee },
    { L"KK Dark Force 3/4", 0x01f84a, 0x01f86a, indexCPS2Sprites_Vamp_QBee },
    { L"KK Dark Force 4/4", 0x01f86a, 0x01f88a, indexCPS2Sprites_Vamp_QBee },
    { L"KK Bees Win Pose", 0x01bf2a, 0x01bf4a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"KK Tap K", 0x01d46a, 0x01d48a, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x100aa, 0x100ca, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"AP Wings/Honey", 0x100ca, 0x100ea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AP Wings/Honey frame 2", 0x1ed6a, 0x1ed8a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AP Bees", 0x1010a, 0x1012a, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"AP Egg", 0x100ea, 0x1010a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"AP Intro/ES 412PP 1", 0x1cf8a, 0x1cfaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 2", 0x1cfca, 0x1cfea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 3", 0x1d00a, 0x1d02a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 4", 0x1d04a, 0x1d06a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 5", 0x1d08a, 0x1d0aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 6", 0x1d0ca, 0x1d0ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 7", 0x1d10a, 0x1d12a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Intro/ES 412PP 8", 0x1d14a, 0x1d16a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 1/7", 0x01ea6a, 0x01ea8a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 2/7", 0x01ea8a, 0x01eaaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 3/7", 0x01eaaa, 0x01eaca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 4/7", 0x01eaca, 0x01eaea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 5/7", 0x01eaea, 0x01eb0a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 6/7", 0x01eb0a, 0x01eb2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP C-R 7/7", 0x01eb2a, 0x01eb4a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AP Select Portrait", 0x2D08a, 0x2D0Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"AP Win Portrait", 0x3328a, 0x3332a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"AP Poisoned", 0x17760 - 0xf6, 0x17780 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"AP Wings/Honey Poisoned", 0x01eeaa, 0x01eeca, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AP Zapped", 0x178a0 - 0xf6, 0x178c0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"AP Burned", 0x179e0 - 0xf6, 0x17a00 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"AP Wings/Honey Burned", 0x01f12a, 0x01f14a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AP Pharaoh's Curse", 0x17b20 - 0xf6, 0x17b40 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"AP Midnight Bliss", 0x17e40 - 0xf6, 0x17e60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"AP Dark Force 1/4", 0x01f88a, 0x01f8aa, indexCPS2Sprites_Vamp_QBee },
    { L"AP Dark Force 2/4", 0x01f8aa, 0x01f8ca, indexCPS2Sprites_Vamp_QBee },
    { L"AP Dark Force 3/4", 0x01f8ca, 0x01f8ea, indexCPS2Sprites_Vamp_QBee },
    { L"AP Dark Force 4/4", 0x01f8ea, 0x01f90a, indexCPS2Sprites_Vamp_QBee },
    { L"AP Bees Win Pose", 0x01bf4a, 0x01bf6a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"AP Tap K", 0x01d48a, 0x01d4aa, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1012a, 0x1014a, indexCPS2Sprites_Vamp_QBee, 0, &pairNext },
    { L"AK Wings/Honey", 0x1014a, 0x1016a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AK Wings/Honey frame 2", 0x1ed8a, 0x1edaa, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AK Bees", 0x1018a, 0x101aa, indexCPS2Sprites_Vamp_QBee, 0x02 },
    { L"AK Egg", 0x1016a, 0x1018a, indexCPS2Sprites_Vamp_QBee, 0x04 },
    { L"AK Intro/ES 412PP 1", 0x1d18a, 0x1d1aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 2", 0x1d1ca, 0x1d1ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 3", 0x1d20a, 0x1d22a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 4", 0x1d24a, 0x1d26a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 5", 0x1d28a, 0x1d2aa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 6", 0x1d2ca, 0x1d2ea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 7", 0x1d30a, 0x1d32a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Intro/ES 412PP 8", 0x1d34a, 0x1d36a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 1/7", 0x01eb8a, 0x01ebaa, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 2/7", 0x01ebaa, 0x01ebca, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 3/7", 0x01ebca, 0x01ebea, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 4/7", 0x01ebea, 0x01ec0a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 5/7", 0x01ec0a, 0x01ec2a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 6/7", 0x01ec2a, 0x01ec4a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK C-R 7/7", 0x01ec4a, 0x01ec6a, indexCPS2Sprites_Vamp_QBee, 0 },
    { L"AK Select Portrait", 0x2D28a, 0x2D2Aa, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"AK Win Portrait", 0x33D2a, 0x33DCa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_QBee },
    { L"AK Poisoned", 0x17780 - 0xf6, 0x177a0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"AK Wings/Honey Poisoned", 0x01eeca, 0x01eeea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AK Zapped", 0x178c0 - 0xf6, 0x178e0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x0c },
    { L"AK Burned", 0x17a00 - 0xf6, 0x17a20 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"AK Wings/Honey Burned", 0x01f14a, 0x01f16a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"AK Pharaoh's Curse", 0x17b40 - 0xf6, 0x17b60 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x10 },
    { L"AK Midnight Bliss", 0x17e60 - 0xf6, 0x17e80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_QBee },
    { L"AK Dark Force 1/4", 0x01f90a, 0x01f92a, indexCPS2Sprites_Vamp_QBee },
    { L"AK Dark Force 2/4", 0x01f92a, 0x01f94a, indexCPS2Sprites_Vamp_QBee },
    { L"AK Dark Force 3/4", 0x01f94a, 0x01f96a, indexCPS2Sprites_Vamp_QBee },
    { L"AK Dark Force 4/4", 0x01f96a, 0x01f98a, indexCPS2Sprites_Vamp_QBee },
    { L"AK Bees Win Pose", 0x01bf6a, 0x01bf8a, indexCPS2Sprites_Vamp_QBee, 0x03 },
    { L"AK Tap K", 0x01d4aa, 0x01d4ca, indexCPS2Sprites_Vamp_QBee },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x101aa, 0x101ca, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"LP Dust, Weapons", 0x101ea, 0x1020a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"LP Lin-Lin", 0x101ca, 0x101ea, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"LP Unknown Extra", 0x1020a, 0x1022a },
    { L"LP Select Portrait", 0x2C0Aa, 0x2C0Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"LP Win Portrait", 0x2DE2a, 0x2DECa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"LP Poisoned", 0x17ea0 - 0xf6, 0x17ec0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"LP Zapped", 0x17fe0 - 0xf6, 0x18000 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"LP Burned", 0x18120 - 0xf6, 0x18140 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"LP Pharaoh's Curse", 0x18260 - 0xf6, 0x18280 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"LP Midnight Bliss", 0x18580 - 0xf6, 0x185a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1022a, 0x1024a, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"MP Dust, Weapons", 0x1026a, 0x1028a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"MP Lin-Lin", 0x1024a, 0x1026a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"MP Unknown Extra", 0x1028a, 0x102aa },
    { L"MP Select Portrait", 0x2C2Aa, 0x2C2Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"MP Win Portrait", 0x2E8Ca, 0x2E96a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"MP Poisoned", 0x17ec0 - 0xf6, 0x17ee0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"MP Zapped", 0x18000 - 0xf6, 0x18020 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"MP Burned", 0x18140 - 0xf6, 0x18160 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"MP Pharaoh's Curse", 0x18280 - 0xf6, 0x182a0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"MP Midnight Bliss", 0x185a0 - 0xf6, 0x185c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x102aa, 0x102ca, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"HP Dust, Weapons", 0x102ea, 0x1030a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"HP Lin-Lin", 0x102ca, 0x102ea, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"HP Unknown Extra", 0x1030a, 0x1032a },
    { L"HP Select Portrait", 0x2C4Aa, 0x2C4Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"HP Win Portrait", 0x2F36a, 0x2F40a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"HP Poisoned", 0x17ee0 - 0xf6, 0x17f00 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"HP Zapped", 0x18020 - 0xf6, 0x18040 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"HP Burned", 0x18160 - 0xf6, 0x18180 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"HP Pharaoh's Curse", 0x182a0 - 0xf6, 0x182c0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"HP Midnight Bliss", 0x185c0 - 0xf6, 0x185e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1032a, 0x1034a, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"LK Dust, Weapons", 0x1036a, 0x1038a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"LK Lin-Lin", 0x1034a, 0x1036a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"LK Unknown Extra", 0x1038a, 0x103aa },
    { L"LK Select Portrait", 0x2C6Aa, 0x2C6Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"LK Win Portrait", 0x2FE0a, 0x2FEAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"LK Poisoned", 0x17f00 - 0xf6, 0x17f20 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"LK Zapped", 0x18040 - 0xf6, 0x18060 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"LK Burned", 0x18180 - 0xf6, 0x181a0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"LK Pharaoh's Curse", 0x182c0 - 0xf6, 0x182e0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"LK Midnight Bliss", 0x185e0 - 0xf6, 0x18600 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x103aa, 0x103ca, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"MK Dust, Weapons", 0x103ea, 0x1040a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"MK Lin-Lin", 0x103ca, 0x103ea, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"MK Unknown Extra", 0x1040a, 0x1042a },
    { L"MK Select Portrait", 0x2C8Aa, 0x2C8Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"MK Win Portrait", 0x308Aa, 0x3094a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"MK Poisoned", 0x17f20 - 0xf6, 0x17f40 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"MK Zapped", 0x18060 - 0xf6, 0x18080 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"MK Burned", 0x181a0 - 0xf6, 0x181c0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"MK Pharaoh's Curse", 0x182e0 - 0xf6, 0x18300 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"MK Midnight Bliss", 0x18600 - 0xf6, 0x18620 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1042a, 0x1044a, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"HK Dust, Weapons", 0x1046a, 0x1048a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"HK Lin-Lin", 0x1044a, 0x1046a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"HK Unknown Extra", 0x1048a, 0x104aa },
    { L"HK Select Portrait", 0x2CAAa, 0x2CACa, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"HK Win Portrait", 0x3134a, 0x313Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"HK Poisoned", 0x17f40 - 0xf6, 0x17f60 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"HK Zapped", 0x18080 - 0xf6, 0x180a0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"HK Burned", 0x181c0 - 0xf6, 0x181e0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"HK Pharaoh's Curse", 0x18300 - 0xf6, 0x18320 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"HK Midnight Bliss", 0x18620 - 0xf6, 0x18640 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x104aa, 0x104ca, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"PP Dust, Weapons", 0x104ea, 0x1050a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"PP Lin-Lin", 0x104ca, 0x104ea, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"PP Unknown Extra", 0x1050a, 0x1052a },
    { L"PP Select Portrait", 0x2CCAa, 0x2CCCa, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"PP Win Portrait", 0x31DEa, 0x31E8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"PP Poisoned", 0x17f60 - 0xf6, 0x17f80 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"PP Zapped", 0x180a0 - 0xf6, 0x180c0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"PP Burned", 0x181e0 - 0xf6, 0x18200 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"PP Pharaoh's Curse", 0x18320 - 0xf6, 0x18340 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"PP Midnight Bliss", 0x18640 - 0xf6, 0x18660 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1052a, 0x1054a, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"KK Dust, Weapons", 0x1056a, 0x1058a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"KK Lin-Lin", 0x1054a, 0x1056a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"KK Unknown Extra", 0x1058a, 0x105aa },
    { L"KK Select Portrait", 0x2CEAa, 0x2CECa, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"KK Win Portrait", 0x3288a, 0x3292a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"KK Poisoned", 0x17f80 - 0xf6, 0x17fa0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"KK Zapped", 0x180c0 - 0xf6, 0x180e0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"KK Burned", 0x18200 - 0xf6, 0x18220 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"KK Pharaoh's Curse", 0x18340 - 0xf6, 0x18360 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"KK Midnight Bliss", 0x18660 - 0xf6, 0x18680 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x105aa, 0x105ca, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"AP Dust, Weapons", 0x105ea, 0x1060a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"AP Lin-Lin", 0x105ca, 0x105ea, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"AP Unknown Extra", 0x1060a, 0x1062a },
    { L"AP Select Portrait", 0x2D0Aa, 0x2D0Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"AP Win Portrait", 0x3332a, 0x333Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"AP Poisoned", 0x17fa0 - 0xf6, 0x17fc0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"AP Zapped", 0x180e0 - 0xf6, 0x18100 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"AP Burned", 0x18220 - 0xf6, 0x18240 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"AP Pharaoh's Curse", 0x18360 - 0xf6, 0x18380 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"AP Midnight Bliss", 0x18680 - 0xf6, 0x186a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1062a, 0x1064a, indexCPS2Sprites_Vamp_LeiLei, 0 },
    { L"AK Dust, Weapons", 0x1066a, 0x1068a, indexCPS2Sprites_Vamp_LeiLei, 0x01 },
    { L"AK Lin-Lin", 0x1064a, 0x1066a, indexCPS2Sprites_Vamp_LeiLei, 0x02 },
    { L"AK Unknown Extra", 0x1068a, 0x106aa },
    { L"AK Select Portrait", 0x2D2Aa, 0x2D2Ca, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"AK Win Portrait", 0x33DCa, 0x33E6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_LeiLei },
    { L"AK Poisoned", 0x17fc0 - 0xf6, 0x17fe0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"AK Zapped", 0x18100 - 0xf6, 0x18120 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x0c },
    { L"AK Burned", 0x18240 - 0xf6, 0x18260 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"AK Pharaoh's Curse", 0x18380 - 0xf6, 0x183a0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei, 0x10 },
    { L"AK Midnight Bliss", 0x186a0 - 0xf6, 0x186c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_SHARED[] =
{
    { L"Chuukada", 0x01f98a, 0x01f9aa },
    { L"Fast Chuukada", 0x01f9aa, 0x01f9ca },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x106aa, 0x106ca, indexCPS2Sprites_Vamp_Lilith, 0x00 },
    { L"LP Hearts", 0x106ca, 0x106ea, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"LP Luminous Illusion/62KKK bats", 0x106ea, 0x1070a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"LP Sparkles", 0x1070a, 0x1072a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"LP Select Portrait", 0x2C0Ca, 0x2C0Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"LP Win Portrait", 0x2DECa, 0x2DF6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"LP Poisoned", 0x186e0 - 0xf6, 0x18700 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"LP Zapped", 0x18820 - 0xf6, 0x18840 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"LP Burned", 0x18960 - 0xf6, 0x18980 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"LP Pharaoh's Curse", 0x18aa0 - 0xf6, 0x18ac0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"LP Midnight Bliss", 0x18dc0 - 0xf6, 0x18de0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1072a, 0x1074a, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"MP Hearts", 0x1074a, 0x1076a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"MP Luminous Illusion/62KKK bats", 0x1076a, 0x1078a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"MP Sparkles", 0x1078a, 0x107aa, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"MP Select Portrait", 0x2C2Ca, 0x2C2Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"MP Win Portrait", 0x2E96a, 0x2EA0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"MP Poisoned", 0x18700 - 0xf6, 0x18720 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"MP Zapped", 0x18840 - 0xf6, 0x18860 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"MP Burned", 0x18980 - 0xf6, 0x189a0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"MP Pharaoh's Curse", 0x18ac0 - 0xf6, 0x18ae0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"MP Midnight Bliss", 0x18de0 - 0xf6, 0x18e00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x107aa, 0x107ca, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"HP Hearts", 0x107ca, 0x107ea, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"HP Luminous Illusion/62KKK bats", 0x107ea, 0x1080a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"HP Sparkles", 0x1080a, 0x1082a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"HP Select Portrait", 0x2C4Ca, 0x2C4Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"HP Win Portrait", 0x2F40a, 0x2F4Aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"HP Poisoned", 0x18720 - 0xf6, 0x18740 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"HP Zapped", 0x18860 - 0xf6, 0x18880 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"HP Burned", 0x189a0 - 0xf6, 0x189c0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"HP Pharaoh's Curse", 0x18ae0 - 0xf6, 0x18b00 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"HP Midnight Bliss", 0x18e00 - 0xf6, 0x18e20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1082a, 0x1084a, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"LK Hearts", 0x1084a, 0x1086a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"LK Luminous Illusion/62KKK bats", 0x1086a, 0x1088a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"LK Sparkles", 0x1088a, 0x108aa, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"LK Select Portrait", 0x2C6Ca, 0x2C6Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"LK Win Portrait", 0x2FEAa, 0x2FF4a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"LK Poisoned", 0x18740 - 0xf6, 0x18760 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"LK Zapped", 0x18880 - 0xf6, 0x188a0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"LK Burned", 0x189c0 - 0xf6, 0x189e0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"LK Pharaoh's Curse", 0x18b00 - 0xf6, 0x18b20 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"LK Midnight Bliss", 0x18e20 - 0xf6, 0x18e40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x108aa, 0x108ca, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"MK Hearts", 0x108ca, 0x108ea, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"MK Luminous Illusion/62KKK bats", 0x108ea, 0x1090a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"MK Sparkles", 0x1090a, 0x1092a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"MK Select Portrait", 0x2C8Ca, 0x2C8Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"MK Win Portrait", 0x3094a, 0x309Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"MK Poisoned", 0x18760 - 0xf6, 0x18780 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"MK Zapped", 0x188a0 - 0xf6, 0x188c0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"MK Burned", 0x189e0 - 0xf6, 0x18a00 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"MK Pharaoh's Curse", 0x18b20 - 0xf6, 0x18b40 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"MK Midnight Bliss", 0x18e40 - 0xf6, 0x18e60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1092a, 0x1094a, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"HK Hearts", 0x1094a, 0x1096a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"HK Luminous Illusion/62KKK bats", 0x1096a, 0x1098a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"HK Sparkles", 0x1098a, 0x109aa, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"HK Select Portrait", 0x2CACa, 0x2CAEa, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"HK Win Portrait", 0x313Ea, 0x3148a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"HK Poisoned", 0x18780 - 0xf6, 0x187a0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"HK Zapped", 0x188c0 - 0xf6, 0x188e0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"HK Burned", 0x18a00 - 0xf6, 0x18a20 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"HK Pharaoh's Curse", 0x18b40 - 0xf6, 0x18b60 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"HK Midnight Bliss", 0x18e60 - 0xf6, 0x18e80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x109aa, 0x109ca, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"PP Hearts", 0x109ca, 0x109ea, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"PP Luminous Illusion/62KKK bats", 0x109ea, 0x10a0a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"PP Sparkles", 0x10a0a, 0x10a2a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"PP Select Portrait", 0x2CCCa, 0x2CCEa, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"PP Win Portrait", 0x31E8a, 0x31F2a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"PP Poisoned", 0x187a0 - 0xf6, 0x187c0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"PP Zapped", 0x188e0 - 0xf6, 0x18900 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"PP Burned", 0x18a20 - 0xf6, 0x18a40 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"PP Pharaoh's Curse", 0x18b60 - 0xf6, 0x18b80 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"PP Midnight Bliss", 0x18e80 - 0xf6, 0x18ea0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x10a2a, 0x10a4a, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"KK Hearts", 0x10a4a, 0x10a6a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"KK Luminous Illusion/62KKK bats", 0x10a6a, 0x10a8a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"KK Sparkles", 0x10a8a, 0x10aaa, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"KK Select Portrait", 0x2CECa, 0x2CEEa, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"KK Win Portrait", 0x3292a, 0x329Ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"KK Poisoned", 0x187c0 - 0xf6, 0x187e0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"KK Zapped", 0x18900 - 0xf6, 0x18920 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"KK Burned", 0x18a40 - 0xf6, 0x18a60 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"KK Pharaoh's Curse", 0x18b80 - 0xf6, 0x18ba0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"KK Midnight Bliss", 0x18ea0 - 0xf6, 0x18ec0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x10aaa, 0x10aca, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"AP Hearts", 0x10aca, 0x10aea, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"AP Luminous Illusion/62KKK bats", 0x10aea, 0x10b0a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"AP Sparkles", 0x10b0a, 0x10b2a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"AP Select Portrait", 0x2D0Ca, 0x2D0Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"AP Win Portrait", 0x333Ca, 0x3346a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"AP Poisoned", 0x187e0 - 0xf6, 0x18800 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"AP Zapped", 0x18920 - 0xf6, 0x18940 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"AP Burned", 0x18a60 - 0xf6, 0x18a80 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"AP Pharaoh's Curse", 0x18ba0 - 0xf6, 0x18bc0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"AP Midnight Bliss", 0x18ec0 - 0xf6, 0x18ee0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x10b2a, 0x10b4a, indexCPS2Sprites_Vamp_Lilith, 0 },
    { L"AK Hearts", 0x10b4a, 0x10b6a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"AK Luminous Illusion/62KKK bats", 0x10b6a, 0x10b8a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"AK Sparkles", 0x10b8a, 0x10baa, indexCPS2Sprites_Vamp_Lilith, 0x03 },
    { L"AK Select Portrait", 0x2D2Ca, 0x2D2Ea, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"AK Win Portrait", 0x33E6a, 0x33F0a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Lilith },
    { L"AK Poisoned", 0x18800 - 0xf6, 0x18820 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"AK Zapped", 0x18940 - 0xf6, 0x18960 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x0c },
    { L"AK Burned", 0x18a80 - 0xf6, 0x18aa0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"AK Pharaoh's Curse", 0x18bc0 - 0xf6, 0x18be0 - 0xf6, indexCPS2Sprites_Vamp_Lilith, 0x10 },
    { L"AK Midnight Bliss", 0x18ee0 - 0xf6, 0x18f00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_SHARED[] =
{
    { L"Taunt", 0x01f9ca, 0x01f9ea, indexCPS2Sprites_Vamp_Lilith, 0x04 },
    { L"Text & Sign", 0x01fa0a, 0x01fa2a },
    { L"Curtains", 0x01fa2a, 0x01fa4a, indexCPS2Sprites_VSAV1_Bonus, 0x0a },
    { L"Stage 1/4", 0x01f9ea, 0x01fa0a, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
    { L"Stage 2/4", 0x01fa4a, 0x01fa6a, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
    { L"Stage 3/4", 0x01fa6a, 0x01fa8a, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
    { L"Stage 4/4", 0x01fa8a, 0x01faaa, indexCPS2Sprites_VSAV1_Bonus, 0x0b },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x10baa, 0x10bca, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"LP Prova di Servo", 0x10bca, 0x10bea, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x10bea, 0x10c0a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"LP Intro", 0x10c0a, 0x10c2a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"LP Select Portrait", 0x2C0Ea, 0x2C10a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"LP Win Portrait", 0x2DF6a, 0x2E00a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"LP Poisoned", 0x18f20 - 0xf6, 0x18f40 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"LP Zapped", 0x19060 - 0xf6, 0x19080 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"LP Burned", 0x191a0 - 0xf6, 0x191c0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"LP Pharaoh's Curse", 0x192e0 - 0xf6, 0x19300 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"LP Midnight Bliss", 0x19600 - 0xf6, 0x19620 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x10c2a, 0x10c4a, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"MP Prova di Servo", 0x10c4a, 0x10c6a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x10c6a, 0x10c8a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"MP Intro", 0x10c8a, 0x10caa, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"MP Select Portrait", 0x2C2Ea, 0x2C30a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"MP Win Portrait", 0x2EA0a, 0x2EAAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"MP Poisoned", 0x18f40 - 0xf6, 0x18f60 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"MP Zapped", 0x19080 - 0xf6, 0x190a0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"MP Burned", 0x191c0 - 0xf6, 0x191e0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"MP Pharaoh's Curse", 0x19300 - 0xf6, 0x19320 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"MP Midnight Bliss", 0x19620 - 0xf6, 0x19640 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x10caa, 0x10cca, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"HP Prova di Servo", 0x10cca, 0x10cea, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x10cea, 0x10d0a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"HP Intro", 0x10d0a, 0x10d2a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"HP Select Portrait", 0x2C4Ea, 0x2C50a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"HP Win Portrait", 0x2F4Aa, 0x2F54a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"HP Poisoned", 0x18f60 - 0xf6, 0x18f80 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"HP Zapped", 0x190a0 - 0xf6, 0x190c0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"HP Burned", 0x191e0 - 0xf6, 0x19200 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"HP Pharaoh's Curse", 0x19320 - 0xf6, 0x19340 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"HP Midnight Bliss", 0x19640 - 0xf6, 0x19660 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_LK[] =
{
    { L"LK Jedah", 0x10d2a, 0x10d4a, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"LK Prova di Servo", 0x10d4a, 0x10d6a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x10d6a, 0x10d8a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"LK Intro", 0x10d8a, 0x10daa, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"LK Select Portrait", 0x2C6Ea, 0x2C70a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"LK Win Portrait", 0x2FF4a, 0x2FFEa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"LK Poisoned", 0x18f80 - 0xf6, 0x18fa0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"LK Zapped", 0x190c0 - 0xf6, 0x190e0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"LK Burned", 0x19200 - 0xf6, 0x19220 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"LK Pharaoh's Curse", 0x19340 - 0xf6, 0x19360 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"LK Midnight Bliss", 0x19660 - 0xf6, 0x19680 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x10daa, 0x10dca, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"MK Prova di Servo", 0x10dca, 0x10dea, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x10dea, 0x10e0a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"MK Intro", 0x10e0a, 0x10e2a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"MK Select Portrait", 0x2C8Ea, 0x2C90a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"MK Win Portrait", 0x309Ea, 0x30A8a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"MK Poisoned", 0x18fa0 - 0xf6, 0x18fc0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"MK Zapped", 0x190e0 - 0xf6, 0x19100 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"MK Burned", 0x19220 - 0xf6, 0x19240 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"MK Pharaoh's Curse", 0x19360 - 0xf6, 0x19380 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"MK Midnight Bliss", 0x19680 - 0xf6, 0x196a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x10e2a, 0x10e4a, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"HK Prova di Servo", 0x10e4a, 0x10e6a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x10e6a, 0x10e8a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"HK Intro", 0x10e8a, 0x10eaa, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"HK Select Portrait", 0x2CAEa, 0x2CB0a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"HK Win Portrait", 0x3148a, 0x3152a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"HK Poisoned", 0x18fc0 - 0xf6, 0x18fe0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"HK Zapped", 0x19100 - 0xf6, 0x19120 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"HK Burned", 0x19240 - 0xf6, 0x19260 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"HK Pharaoh's Curse", 0x19380 - 0xf6, 0x193a0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"HK Midnight Bliss", 0x196a0 - 0xf6, 0x196c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x10eaa, 0x10eca, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"PP Prova di Servo", 0x10eca, 0x10eea, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x10eea, 0x10f0a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"PP Intro", 0x10f0a, 0x10f2a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"PP Select Portrait", 0x2CCEa, 0x2CD0a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"PP Win Portrait", 0x31F2a, 0x31FCa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"PP Poisoned", 0x18fe0 - 0xf6, 0x19000 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"PP Zapped", 0x19120 - 0xf6, 0x19140 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"PP Burned", 0x19260 - 0xf6, 0x19280 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"PP Pharaoh's Curse", 0x193a0 - 0xf6, 0x193c0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"PP Midnight Bliss", 0x196c0 - 0xf6, 0x196e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x10f2a, 0x10f4a, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"KK Prova di Servo", 0x10f4a, 0x10f6a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x10f6a, 0x10f8a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"KK Intro", 0x10f8a, 0x10faa, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"KK Select Portrait", 0x2CEEa, 0x2CF0a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"KK Win Portrait", 0x329Ca, 0x32A6a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"KK Poisoned", 0x19000 - 0xf6, 0x19020 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"KK Zapped", 0x19140 - 0xf6, 0x19160 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"KK Burned", 0x19280 - 0xf6, 0x192a0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"KK Pharaoh's Curse", 0x193c0 - 0xf6, 0x193e0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"KK Midnight Bliss", 0x196e0 - 0xf6, 0x19700 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x10faa, 0x10fca, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"AP Prova di Servo", 0x10fca, 0x10fea, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x10fea, 0x1100a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1100a, 0x1102a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"AP Select Portrait", 0x2D0Ea, 0x2D10a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"AP Win Portrait", 0x3346a, 0x3350a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"AP Poisoned", 0x19020 - 0xf6, 0x19040 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"AP Zapped", 0x19160 - 0xf6, 0x19180 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"AP Burned", 0x192a0 - 0xf6, 0x192c0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"AP Pharaoh's Curse", 0x193e0 - 0xf6, 0x19400 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"AP Midnight Bliss", 0x19700 - 0xf6, 0x19720 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1102a, 0x1104a, indexCPS2Sprites_Vamp_Jedah, 0, &pairNext2 },
    { L"AK Prova di Servo", 0x1104a, 0x1106a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1106a, 0x1108a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1108a, 0x110aa, indexCPS2Sprites_Vamp_Jedah, 0x02 },
    { L"AK Select Portrait", 0x2D2Ea, 0x2D30a, indexCPS2Sprites_Vamp_Jedah, 0x20 },
    { L"AK Win Portrait", 0x33F0a, 0x33FAa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Jedah },
    { L"AK Poisoned", 0x19040 - 0xf6, 0x19060 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"AK Zapped", 0x19180 - 0xf6, 0x191a0 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0c },
    { L"AK Burned", 0x192c0 - 0xf6, 0x192e0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"AK Pharaoh's Curse", 0x19400 - 0xf6, 0x19420 - 0xf6, indexCPS2Sprites_Vamp_Jedah, 0x0d },
    { L"AK Midnight Bliss", 0x19720 - 0xf6, 0x19740 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_SHARED[] =
{
    { L"Shared blood", 0x1faea, 0x1fb0a, indexCPS2Sprites_Vamp_Jedah, 0x01 },
    { L"Shared blood 2", 0x1fb0a, 0x1fb2a, indexCPS2Sprites_Vamp_Jedah, 0x01 },
    { L"Shared Prova di Servo", 0x1fb2a, 0x1fb4a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"Shared Prova di Servo 2", 0x1fb4a, 0x1fb6a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"Shared Finale Rosso", 0x01fb6a, 0x01fb8a, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_DEFAULT[] =
{
    { L"Dark Gallon (1/6)", 0x110aa, 0x110ca, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (2/6)", 0x1fb8a, 0x1fbaa, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (3/6)", 0x1fbaa, 0x1fbca, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (4/6)", 0x1fbca, 0x1fbea, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (5/6)", 0x1fbea, 0x1fc0a, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon (6/6)", 0x1fc0a, 0x1fc2a, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Intro/Outro", 0x110ca, 0x110ea },
    { L"236P/41236KK/j.HP", 0x110ea, 0x1110a },
    { L"236P/28K/Outro Flash", 0x1110a, 0x1112a },
    { L"Dark Gallon Select", 0x2d5Ca, 0x2d5Ea, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"Dark Gallon Win Portrait", 0x3404a, 0x340Ea, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_ALT[] =
{
    { L"Dark Gallon Alt Palette (1/6)", 0x1112a, 0x1114a, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (2/6)", 0x1fc2a, 0x1fc4a, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (3/6)", 0x1fc4a, 0x1fc6a, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (4/6)", 0x1fc6a, 0x1fc8a, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (5/6)", 0x1fc8a, 0x1fcaa, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Dark Gallon Alt Palette (6/6)", 0x1fcaa, 0x1fcca, indexCPS2Sprites_Vamp_DarkGallon, 0 },
    { L"Intro/Outro", 0x1114a, 0x1116a },
    { L"236P/41236KK/j.HP", 0x1116a, 0x1118a },
    { L"236P/28K/Outro Flash", 0x1118a, 0x111aa },
    { L"Dark Gallon Alt Palette Select", 0x2d5Ea, 0x2d60a, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"Dark Gallon Alt Palette Win Portrait", 0x340Ea, 0x3418a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon", 0x115aa, 0x115ca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"LP Intro", 0x115ca, 0x115ea, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"LP Ghosts/Hitsparks", 0x115ea, 0x1160a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LP Unknown Extra", 0x1160a, 0x1162a },
    { L"LP Select Portrait", 0x2d50a, 0x2d52a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x3418a, 0x3422a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"LP Poisoned", 0x19fa0 - 0xf6, 0x19fc0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LP Zapped", 0x1a0e0 - 0xf6, 0x1a100 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"LP Burned", 0x1a220 - 0xf6, 0x1a240 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LP Pharaoh's Curse", 0x1a360 - 0xf6, 0x1a380 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"LP Midnight Bliss", 0x1a680 - 0xf6, 0x1a6a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon", 0x1162a, 0x1164a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"MP Intro", 0x1164a, 0x1166a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"MP Ghosts/Hitsparks", 0x1166a, 0x1168a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MP Unknown Extra", 0x1168a, 0x116aa },
    { L"MP Select Portrait", 0x2d52a, 0x2d54a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x3422a, 0x342ca, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"MP Poisoned", 0x19fc0 - 0xf6, 0x19fe0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MP Zapped", 0x1a100 - 0xf6, 0x1a120 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"MP Burned", 0x1a240 - 0xf6, 0x1a260 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MP Pharaoh's Curse", 0x1a380 - 0xf6, 0x1a3a0 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"MP Midnight Bliss", 0x1a6a0 - 0xf6, 0x1a6c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon", 0x116aa, 0x116ca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"HP Intro", 0x116ca, 0x116ea, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"HP Ghosts/Hitsparks", 0x116ea, 0x1170a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HP Unknown Extra", 0x1170a, 0x1172a },
    { L"HP Select Portrait", 0x2d54a, 0x2d56a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x342ca, 0x3436a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"HP Poisoned", 0x19fe0 - 0xf6, 0x1a000 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HP Zapped", 0x1a120 - 0xf6, 0x1a140 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"HP Burned", 0x1a260 - 0xf6, 0x1a280 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HP Pharaoh's Curse", 0x1a3a0 - 0xf6, 0x1a3c0 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"HP Midnight Bliss", 0x1a6c0 - 0xf6, 0x1a6e0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon", 0x1172a, 0x1174a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"LK Intro", 0x1174a, 0x1176a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"LK Ghosts/Hitsparks", 0x1176a, 0x1178a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"LK Unknown Extra", 0x1178a, 0x117aa },
    { L"LK Select Portrait", 0x2d56a, 0x2d58a, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x3436a, 0x3440a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"LK Poisoned", 0x1a000 - 0xf6, 0x1a020 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LK Zapped", 0x1a140 - 0xf6, 0x1a160 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"LK Burned", 0x1a280 - 0xf6, 0x1a2a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"LK Pharaoh's Curse", 0x1a3c0 - 0xf6, 0x1a3e0 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"LK Midnight Bliss", 0x1a6e0 - 0xf6, 0x1a700 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon", 0x117aa, 0x117ca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"MK Intro", 0x117ca, 0x117ea, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"MK Ghosts/Hitsparks", 0x117ea, 0x1180a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"MK Unknown Extra", 0x1180a, 0x1182a },
    { L"MK Select Portrait", 0x2d58a, 0x2d5aa, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x3440a, 0x344aa, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"MK Poisoned", 0x1a020 - 0xf6, 0x1a040 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MK Zapped", 0x1a160 - 0xf6, 0x1a180 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"MK Burned", 0x1a2a0 - 0xf6, 0x1a2c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"MK Pharaoh's Curse", 0x1a3e0 - 0xf6, 0x1a400 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"MK Midnight Bliss", 0x1a700 - 0xf6, 0x1a720 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon", 0x1182a, 0x1184a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"HK Intro", 0x1184a, 0x1186a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"HK Ghosts/Hitsparks", 0x1186a, 0x1188a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"HK Unknown Extra", 0x1188a, 0x118aa },
    { L"HK Select Portrait", 0x2d5aa, 0x2d5ca, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x344aa, 0x3454a, indexCPS2Sprites_VSAV1_WinPortraits, indexCPS2Sprites_Vamp_Bishamon },
    { L"HK Poisoned", 0x1a040 - 0xf6, 0x1a060 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HK Zapped", 0x1a180 - 0xf6, 0x1a1a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"HK Burned", 0x1a2c0 - 0xf6, 0x1a2e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"HK Pharaoh's Curse", 0x1a400 - 0xf6, 0x1a420 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"HK Midnight Bliss", 0x1a720 - 0xf6, 0x1a740 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon", 0x118aa, 0x118ca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"PP Intro", 0x118ca, 0x118ea, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"PP Ghosts/Hitsparks", 0x118ea, 0x1190a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"PP Unknown Extra", 0x1190a, 0x1192a },
    { L"PP Poisoned", 0x1a060 - 0xf6, 0x1a080 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"PP Zapped", 0x1a1a0 - 0xf6, 0x1a1c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"PP Burned", 0x1a2e0 - 0xf6, 0x1a300 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"PP Pharaoh's Curse", 0x1a420 - 0xf6, 0x1a440 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"PP Midnight Bliss", 0x1a740 - 0xf6, 0x1a760 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon", 0x1192a, 0x1194a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"KK Intro", 0x1194a, 0x1196a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"KK Ghosts/Hitsparks", 0x1196a, 0x1198a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"KK Unknown Extra", 0x1198a, 0x119aa },
    { L"KK Poisoned", 0x1a080 - 0xf6, 0x1a0a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"KK Zapped", 0x1a1c0 - 0xf6, 0x1a1e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"KK Burned", 0x1a300 - 0xf6, 0x1a320 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"KK Pharaoh's Curse", 0x1a440 - 0xf6, 0x1a460 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"KK Midnight Bliss", 0x1a760 - 0xf6, 0x1a780 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon", 0x119aa, 0x119ca, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"AP Intro", 0x119ca, 0x119ea, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"AP Ghosts/Hitsparks", 0x119ea, 0x11a0a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AP Unknown Extra", 0x11a0a, 0x11a2a },
    { L"AP Poisoned", 0x1a0a0 - 0xf6, 0x1a0c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AP Zapped", 0x1a1e0 - 0xf6, 0x1a200 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"AP Burned", 0x1a320 - 0xf6, 0x1a340 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AP Pharaoh's Curse", 0x1a460 - 0xf6, 0x1a480 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"AP Midnight Bliss", 0x1a780 - 0xf6, 0x1a7a0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon", 0x11a2a, 0x11a4a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"AK Intro", 0x11a4a, 0x11a6a, indexCPS2Sprites_Vamp_Bishamon, 0 },
    { L"AK Ghosts/Hitsparks", 0x11a6a, 0x11a8a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"AK Unknown Extra", 0x11a8a, 0x11aaa },
    { L"AK Poisoned", 0x1a0c0 - 0xf6, 0x1a0e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AK Zapped", 0x1a200 - 0xf6, 0x1a220 - 0xf6, indexCPS2Sprites_Vamp_Bishamon, 0x0c },
    { L"AK Burned", 0x1a340 - 0xf6, 0x1a360 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"AK Pharaoh's Curse", 0x1a480 - 0xf6, 0x1a4a0 - 0xf6, indexCPS2Sprites_Vamp_OboroBishamon, 0x10 },
    { L"AK Midnight Bliss", 0x1a7a0 - 0xf6, 0x1a7c0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_OboroBishamon },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_LP[] =
{
    { L"LP Anita", 0x02ba0a, 0x02ba2a, indexCPS2Sprites_Anita, 0 },
    { L"LP Weapons", 0x02ba2a, 0x02ba4a, indexCPS2Sprites_Anita, 1 },
    { L"LP Sword", 0x02ba4a, 0x02ba6a, indexCPS2Sprites_Anita, 1 },
    //{ L"LP Unused", 0x02ba6a, 0x02ba8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_MP[] =
{
    { L"MP Anita", 0x02ba8a, 0x02baaa, indexCPS2Sprites_Anita, 0 },
    { L"MP Weapons", 0x02baaa, 0x02baca, indexCPS2Sprites_Anita, 1 },
    { L"MP Sword", 0x02baca, 0x02baea, indexCPS2Sprites_Anita, 1 },
    //{ L"MP Unused", 0x02baea, 0x02bb0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_HP[] =
{
    { L"HP Anita", 0x02bb0a, 0x02bb2a, indexCPS2Sprites_Anita },
    { L"HP Weapons", 0x02bb2a, 0x02bb4a, indexCPS2Sprites_Anita, 1 },
    { L"HP Sword", 0x02bb4a, 0x02bb6a, indexCPS2Sprites_Anita, 1 },
    //{ L"HP Unused", 0x02bb6a, 0x02bb8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_LK[] =
{
    { L"LK Anita", 0x02bb8a, 0x02bbaa, indexCPS2Sprites_Anita },
    { L"LK Weapons", 0x02bbaa, 0x02bbca, indexCPS2Sprites_Anita, 1 },
    { L"LK Sword", 0x02bbca, 0x02bbea, indexCPS2Sprites_Anita, 1 },
    // { L"LK Unused", 0x02bbea, 0x02bc0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_MK[] =
{
    { L"MK Anita", 0x02bc0a, 0x02bc2a, indexCPS2Sprites_Anita },
    { L"MK Weapons", 0x02bc2a, 0x02bc4a, indexCPS2Sprites_Anita, 1 },
    { L"MK Sword", 0x02bc4a, 0x02bc6a, indexCPS2Sprites_Anita, 1 },
    // { L"MK Unused", 0x02bc6a, 0x02bc8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_HK[] =
{
    { L"HK Anita", 0x02bc8a, 0x02bcaa, indexCPS2Sprites_Anita },
    { L"HK Weapons", 0x02bcaa, 0x02bcca, indexCPS2Sprites_Anita, 1 },
    { L"HK Sword", 0x02bcca, 0x02bcea, indexCPS2Sprites_Anita, 1 },
    // { L"HK Unused", 0x02bcea, 0x02bd0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_PP[] =
{
    { L"PP Anita", 0x02bd0a, 0x02bd2a, indexCPS2Sprites_Anita },
    { L"PP Weapons", 0x02bd2a, 0x02bd4a, indexCPS2Sprites_Anita, 1 },
    { L"PP Sword", 0x02bd4a, 0x02bd6a, indexCPS2Sprites_Anita, 1 },
    // { L"PP Unused", 0x02bd6a, 0x02bd8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_KK[] =
{
    { L"KK Anita", 0x02bd8a, 0x02bdaa, indexCPS2Sprites_Anita },
    { L"KK Weapons", 0x02bdaa, 0x02bdca, indexCPS2Sprites_Anita, 1 },
    { L"KK Sword", 0x02bdca, 0x02bdea, indexCPS2Sprites_Anita, 1 },
    // { L"KK Unused", 0x02bdea, 0x02be0a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_AP[] =
{
    { L"AP Anita", 0x02be0a, 0x02be2a, indexCPS2Sprites_Anita },
    { L"AP Weapons", 0x02be2a, 0x02be4a, indexCPS2Sprites_Anita, 1 },
    { L"AP Sword", 0x02be4a, 0x02be6a, indexCPS2Sprites_Anita, 1 },
    // { L"AP Unused", 0x02be6a, 0x02be8a },
};

const sGame_PaletteDataset VSAV_A_ANITA_PALETTES_AK[] =
{
    { L"AK Anita", 0x02be8a, 0x02beaa, indexCPS2Sprites_Anita },
    { L"AK Weapons", 0x02beaa, 0x02beca, indexCPS2Sprites_Anita, 1 },
    { L"AK Sword", 0x02beca, 0x02beea, indexCPS2Sprites_Anita, 1 },
    // { L"AK Unused", 0x02beea, 0x02bf0a },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_LP[] =
{
    { L"LP Phobos", 0xf8aA, 0xf8cA, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"LP Phobos Unknown Extra 1", 0x0F8CA, 0x0F8EA },
    { L"LP Phobos Unknown Extra 2", 0x0F8EA, 0x0F90A },
    { L"LP Phobos Unknown Extra 3", 0x0F90A, 0x0F92A },
    { L"LP Phobos Select Portrait", 0x2C06A, 0x2C08A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_MP[] =
{
    { L"MP Phobos", 0xf92A, 0xf94A, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"MP Phobos Unknown Extra 1", 0x0F94A, 0x0F96A },
    { L"MP Phobos Unknown Extra 2", 0x0F96A, 0x0F98A },
    { L"MP Phobos Unknown Extra 3", 0x0F98A, 0x0F9AA },
    { L"MP Phobos Select Portrait", 0x2C26A, 0x2C28A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_HP[] =
{
    { L"HP Phobos", 0xf9aA, 0xf9cA, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"HP Phobos Unknown Extra 1", 0x0F9CA, 0x0F9EA },
    { L"HP Phobos Unknown Extra 2", 0x0F9EA, 0x0FA0A },
    { L"HP Phobos Unknown Extra 3", 0x0FA0A, 0x0FA2A },
    { L"HP Phobos Select Portrait", 0x2C46A, 0x2C48A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_LK[] =
{
    { L"LK Phobos", 0xfa2A, 0xfa4A, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"LK Phobos Unknown Extra 1", 0x0FA4A, 0x0FA6A },
    { L"LK Phobos Unknown Extra 2", 0x0FA6A, 0x0FA8A },
    { L"LK Phobos Unknown Extra 3", 0x0FA8A, 0x0FAAA },
    { L"LK Phobos Select Portrait", 0x2C66A, 0x2C68A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_MK[] =
{
    { L"MK Phobos", 0xfaaA, 0xfacA, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"MK Phobos Unknown Extra 1", 0x0FACA, 0x0FAEA },
    { L"MK Phobos Unknown Extra 2", 0x0FAEA, 0x0FB0A },
    { L"MK Phobos Unknown Extra 3", 0x0FB0A, 0x0FB2A },
    { L"MK Phobos Select Portrait", 0x2C86A, 0x2C88A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_HK[] =
{
    { L"HK Phobos", 0xfb2A, 0xfb4A, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"HK Phobos Unknown Extra 1", 0x0FB4A, 0x0FB6A },
    { L"HK Phobos Unknown Extra 2", 0x0FB6A, 0x0FB8A },
    { L"HK Phobos Unknown Extra 3", 0x0FB8A, 0x0FBAA },
    { L"HK Phobos Select Portrait", 0x2CA6A, 0x2CA8A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_PP[] =
{
    { L"PP Phobos", 0xfbaA, 0xfbcA, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"PP Phobos Unknown Extra 1", 0x0FBCA, 0x0FBEA },
    { L"PP Phobos Unknown Extra 2", 0x0FBEA, 0x0FC0A },
    { L"PP Phobos Unknown Extra 3", 0x0FC0A, 0x0FC2A },
    { L"PP Phobos Select Portrait", 0x2CC6A, 0x2CC8A },
};

const sGame_PaletteDataset VSAV_A_PHOBOS_PALETTES_KK[] =
{
    { L"KK Phobos", 0xfc2A, 0xfc4A, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"KK Phobos Unknown Extra 1", 0x0FC4A, 0x0FC6A },
    { L"KK Phobos Unknown Extra 2", 0x0FC6A, 0x0FC8A },
    { L"KK Phobos Unknown Extra 3", 0x0FC8A, 0x0FCAA },
    { L"KK Phobos Select Portrait", 0x2CE6A, 0x2CE8A },
};

const sGame_PaletteDataset VSAV_A_HUD_PALETTES[] =
{
    { L"Lifebar and super meter", 0x1A6Ea, 0x1A70a },
    { L"Life Bar Blending 1/8", 0x293ea, 0x2940a },
    { L"Life Bar Blending 2/8", 0x2940a, 0x2942a },
    { L"Life Bar Blending 3/8", 0x2942a, 0x2944a },
    { L"Life Bar Blending 4/8", 0x2944a, 0x2946a },
    { L"Life Bar Blending 5/8", 0x2946a, 0x2948a },
    { L"Life Bar Blending 6/8", 0x2948a, 0x294aa },
    { L"Life Bar Blending 7/8", 0x294aa, 0x294ca },
    { L"Life Bar Blending 8/8", 0x294ca, 0x294ea },
    { L"Fire", 0x1a74a, 0x1a76a, indexCPS2Sprites_VSAV1_Bonus, 0x00 },
    { L"Fire Glow 1", 0x29c4a, 0x29c6a, indexCPS2Sprites_VSAV1_Bonus, 0x00 },
    { L"Fire Glow 2", 0x29c6a, 0x29c8a, indexCPS2Sprites_VSAV1_Bonus, 0x00 },
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
    { L"Shadow", 0x3584a, 0x3586a, indexCPS2Sprites_Vamp_Shadow, 0x0 },
};

const sGame_PaletteDataset VSAV_A_BONUS_CHARACTERINTROS_PALETTES[] =
{
    { L"Morrigan Intro Portrait 1", 0x2360a, 0x2362a, indexCPS2Sprites_VSAV1_Bonus, 0x18 },

    { L"Morrigan Intro 1 Fade 1", 0x2a88a, 0x2a8aa, indexCPS2Sprites_VSAV1_Bonus, 0x18 },
    { L"Morrigan Intro 1 Fade 2", 0x2a8aa, 0x2a8ca, indexCPS2Sprites_VSAV1_Bonus, 0x18 },
    { L"Morrigan Intro 1 Fade 3", 0x2a8ca, 0x2a8ea, indexCPS2Sprites_VSAV1_Bonus, 0x18 },
    { L"Morrigan Intro 1 Fade 4", 0x2a8ea, 0x2a90a, indexCPS2Sprites_VSAV1_Bonus, 0x18 },
    { L"Morrigan Intro 1 Fade 5", 0x2a90a, 0x2a92a, indexCPS2Sprites_VSAV1_Bonus, 0x18 },
    { L"Morrigan Intro 1 Fade 6", 0x2a92a, 0x2A94a, indexCPS2Sprites_VSAV1_Bonus, 0x18 },

    { L"Morrigan Intro Portrait 2", 0x2362a, 0x2368a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },

    { L"Morrigan Intro 2 Fade 1", 0x2a9ca, 0x2aa2a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 2", 0x2aa2a, 0x2aa8a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 3", 0x2aa8a, 0x2aaea, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 4", 0x2aaea, 0x2ab4a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 5", 0x2ab4a, 0x2abaa, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 6", 0x2abaa, 0x2ac0a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 7", 0x2ac0a, 0x2ac6a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 8", 0x2ac6a, 0x2acca, indexCPS2Sprites_VSAV1_Bonus, 0x06 },
    { L"Morrigan Intro 2 Fade 9", 0x2acca, 0x2ad2a, indexCPS2Sprites_VSAV1_Bonus, 0x06 },

    { L"Morrigan Intro 1 BG", 0x5161A, 0x5163a, indexCPS2Sprites_VSAV1_Bonus, 0x25 },


    { L"Morrigan Intro BG Fade 1", 0x48dba, 0x48DDa, indexCPS2Sprites_VSAV1_Bonus, 0x25 },
    { L"Morrigan Intro BG Fade 2", 0x48DDa, 0x48DFa, indexCPS2Sprites_VSAV1_Bonus, 0x25 },
    { L"Morrigan Intro BG Fade 3", 0x48DFa, 0x48E1a, indexCPS2Sprites_VSAV1_Bonus, 0x25 },
    { L"Morrigan Intro BG Fade 4", 0x48E1a, 0x48E3a, indexCPS2Sprites_VSAV1_Bonus, 0x25 },
    { L"Morrigan Intro BG Fade 5", 0x48E3a, 0x48E5a, indexCPS2Sprites_VSAV1_Bonus, 0x25 },
    { L"Morrigan Intro BG Fade 6", 0x48E5a, 0x48E7a, indexCPS2Sprites_VSAV1_Bonus, 0x25 },

    { L"Lilith Intro Portrait", 0x515ba, 0x5161a, indexCPS2Sprites_VSAV1_Bonus, 0x05 },

    { L"Lilith Intro Fade 1", 0x48e7a, 0x48eda, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 2", 0x48eda, 0x48f3a, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 3", 0x48f3a, 0x48f9a, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 4", 0x48f9a, 0x48ffa, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 5", 0x48ffa, 0x4905a, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 6", 0x4905a, 0x490ba, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 7", 0x490ba, 0x4911a, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 8", 0x4911a, 0x4917a, indexCPS2Sprites_VSAV1_Bonus, 0x05 },
    { L"Lilith Intro Fade 9", 0x4917a, 0x491da, indexCPS2Sprites_VSAV1_Bonus, 0x05 },

    { L"Dirty Beret Portrait",          0x357ea, 0x3580a, indexCPS2Sprites_VSAV1_Bonus, 0x17 },
    { L"Demitri Intro",                 0x233ca, 0x2340a, indexCPS2Sprites_VSAV1_Bonus, 0x04 },
    { L"Bulleta Intro",                 0x234aa, 0x2354a, indexCPS2Sprites_VSAV1_Bonus, 0x03 },
    { L"Bulleta Intro Flash Palette",   0x2a94a, 0x2a9ca, indexCPS2Sprites_VSAV1_Bonus, 0x02 },
    { L"Bulleta Intro BG",              0x659a2, 0x659c2, indexCPS2Sprites_VSAV1_Bonus, 0x01 },

    { L"Demitri Intro R/B Fade 1", 0x2b22a, 0x2B24A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 1", 0x2b40a, 0x2B42A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 2", 0x2B24A, 0x2B26A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 2", 0x2B42A, 0x2B44A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 3", 0x2B26A, 0x2B28A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 3", 0x2B44A, 0x2B46A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 4", 0x2B28A, 0x2B2AA, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 4", 0x2B46A, 0x2B48A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 5", 0x2B2AA, 0x2B2CA, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 5", 0x2B48A, 0x2B4AA, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 6", 0x2B2CA, 0x2B2EA, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 6", 0x2B4AA, 0x2B4CA, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 7", 0x2B2EA, 0x2B30A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 7", 0x2B4CA, 0x2B4EA, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 8", 0x2B30A, 0x2B32A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 8", 0x2B4EA, 0x2B50A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 9", 0x2B32A, 0x2B34A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 9", 0x2B50A, 0x2B52A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 10", 0x2B34A, 0x2B36A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 10", 0x2B52A, 0x2B54A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 11", 0x2B36A, 0x2B38A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 11", 0x2B54A, 0x2B56A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 12", 0x2B38A, 0x2B3AA, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 12", 0x2B56A, 0x2B58A, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 13", 0x2B3AA, 0x2B3CA, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 13", 0x2B58A, 0x2B5AA, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 14", 0x2B3CA, 0x2B3EA, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 14", 0x2B5AA, 0x2B5CA, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },
    { L"Demitri Intro R/B Fade 15", 0x2B3EA, 0x2B40A, indexCPS2Sprites_VSAV1_Bonus, 0x22, &pairNext },
    { L"Demitri Intro R/G Fade 15", 0x2B5CA, 0x2B5EA, indexCPS2Sprites_VSAV1_Bonus, 0x23, &pairPrevious },

    { L"Jedah Intro Portrait", 0x514fA, 0x515ba },
    { L"Jedah Intro Hand Fade 1", 0x4B0FA, 0x4B11A },
    { L"Jedah Intro Hand Fade 2", 0x4B11A, 0x4B13A },
    { L"Jedah Intro Hand Fade 3", 0x4B13A, 0x4B15A },
    { L"Jedah Intro Hand Fade 4", 0x4B15A, 0x4B17A },
    { L"Jedah Intro Hand Fade 5", 0x4B17A, 0x4B19A },
    { L"Jedah Intro Hand Fade 6", 0x4B19A, 0x4B1BA },
    { L"Jedah Intro Hand Fade 7", 0x4B1BA, 0x4B1DA },
    { L"Jedah Intro Hand Fade 8", 0x4B1DA, 0x4B1FA },
    { L"Jedah Intro Hand Fade 9", 0x4B1FA, 0x4B21A },
    { L"Jedah Intro Hand Fade 10", 0x4B21A, 0x4B23A },
    { L"Jedah Intro Hand Fade 11", 0x4B23A, 0x4B25A },
    { L"Jedah Intro Hand Fade 12", 0x4B25A, 0x4B27A },
    { L"Jedah Intro Hand Fade 13", 0x4B27A, 0x4B29A },
    { L"Jedah Intro Hand Fade 14", 0x4B29A, 0x4B2BA },
    { L"Jedah Intro Hand Fade 15", 0x4B2BA, 0x4B2DA },
    { L"Jedah Intro Hand Fade 16", 0x4B2DA, 0x4B2FA },
    { L"Jedah Intro Hand Fade 17", 0x4B2FA, 0x4B31A },
    { L"Jedah Intro Hand Fade 18", 0x4B31A, 0x4B33A },
    { L"Jedah Intro Hand Fade 19", 0x4B33A, 0x4B35A },
    { L"Jedah Intro Hand Fade 20", 0x4B35A, 0x4B37A },
    { L"Jedah Intro Hand Fade 21", 0x4B37A, 0x4B39A },
    { L"Jedah Intro Hand Fade 22", 0x4B39A, 0x4B3BA },
    { L"Jedah Intro Hand Fade 23", 0x4B3BA, 0x4B3DA },
    { L"Jedah Intro Hand Fade 24", 0x4B3DA, 0x4B3FA },
    { L"Jedah Intro Hand Fade 25", 0x4B3FA, 0x4B41A },
    { L"Jedah Intro Hand Fade 26", 0x4B41A, 0x4B43A },
    { L"Jedah Intro Hand Fade 27", 0x4B43A, 0x4B45A },
    { L"Jedah Intro Hand Fade 28", 0x4B45A, 0x4B47A },
    { L"Jedah Intro Hand Fade 29", 0x4B47A, 0x4B49A },
    { L"Jedah Intro Hand Fade 30", 0x4B49A, 0x4B4BA },
    { L"Jedah Intro Hand Fade 31", 0x4B4BA, 0x4B4DA },
    { L"Jedah Intro Hand Fade 32", 0x4B4DA, 0x4B4FA },
    { L"Jedah Intro Hand Fade 33", 0x4B4FA, 0x4B51A },
    { L"Jedah Intro Hand Fade 34", 0x4B51A, 0x4B53A },
    { L"Jedah Intro Hand Fade 35", 0x4B53A, 0x4B55A },
    { L"Jedah Intro Hand Fade 36", 0x4B55A, 0x4B57A },
    { L"Jedah Intro Hand Fade 37", 0x4B57A, 0x4B59A },
    { L"Jedah Intro Hand Fade 38", 0x4B59A, 0x4B5BA },
    { L"Jedah Intro Hand Fade 39", 0x4B5BA, 0x4B5DA },
    { L"Jedah Intro Hand Fade 40", 0x4B5DA, 0x4B5FA },
    { L"Jedah Intro Hand Fade 41", 0x4B5FA, 0x4B61A },
    { L"Jedah Intro Hand Fade 42", 0x4B61A, 0x4B63A },
    { L"Jedah Intro Hand Fade 43", 0x4B63A, 0x4B65A },
    { L"Jedah Intro Hand Fade 44", 0x4B65A, 0x4B67A },
    { L"Jedah Intro Hand Fade 45", 0x4B67A, 0x4B69A },
    { L"Jedah Intro Hand Fade 46", 0x4B69A, 0x4B6BA },
    { L"Jedah Intro Hand Fade 47", 0x4B6BA, 0x4B6DA },
    { L"Jedah Intro Hand Fade 48", 0x4B6DA, 0x4B6FA },

    { L"Jedah Intro Fade 1", 0x48b7A, 0x48c3a },
    { L"Jedah Intro Fade 2", 0x48c3A, 0x48cfa },
    { L"Jedah Intro Fade 3", 0x48cfA, 0x48dba },

    { L"Jedah Intro Rocks/Reveal 1", 0x2368A, 0x236aa },
    { L"Jedah Intro Rocks/Reveal 2", 0x2b8cA, 0x2b8ea },
    { L"Jedah Intro Rocks/Reveal 3", 0x2b8eA, 0x2b90a },
    { L"Jedah Intro Rocks/Reveal 4", 0x2b90A, 0x2b92a },
    { L"Jedah Intro Rocks/Reveal 5", 0x2b92A, 0x2b94a },
    { L"Jedah Intro Rocks/Reveal 6", 0x2b94A, 0x2b96a },
    { L"Jedah Intro Rocks/Reveal 7", 0x2b96A, 0x2b98a },
    { L"Jedah Intro Rocks/Reveal 8", 0x2b98A, 0x2b9aa },
    { L"Jedah Intro Rocks/Reveal 9", 0x2b9aA, 0x2b9ca },
    { L"Jedah Intro Rocks/Reveal 10", 0x2b9cA, 0x2b9ea },

    { L"Q-Bee Intro Portrait", 0x2340a, 0x2348a, indexCPS2Sprites_VSAV1_Bonus, 0x27 },

    { L"Q-Bee Intro BG", 0x5189a, 0x518FA, indexCPS2Sprites_VSAV1_Bonus, 0x26 },
};

const sGame_PaletteDataset VSAV_A_BONUS_TITLES_PALETTES[] =
{
    { L"Character Select BG",           0x518fa, 0x51a5a, indexCPS2Sprites_VSAV1_Bonus, 0x09 },

    { L"Title Screen - Background", 0x40332, 0x40352, indexCPS2Sprites_VSAV1_Bonus, 0x29 },

    { L"Title Screen - VS Logo 16x16 BG 1", 0x5163a, 0x5165a, indexCPS2Sprites_VSAV1_Bonus, 0x31 },
    { L"Title Screen - VS Logo 16x16 BG 2", 0x491da, 0x491fa, indexCPS2Sprites_VSAV1_Bonus, 0x31 },
    { L"Title Screen - VS Logo 16x16 BG 3", 0x491fa, 0x4921a, indexCPS2Sprites_VSAV1_Bonus, 0x31 },
    { L"Title Screen - VS Logo 32x32 BG 1", 0x65bc2, 0x65be2, indexCPS2Sprites_VSAV1_Bonus, 0x32 },
    { L"Title Screen - VS Logo 32x32 BG 2", 0x5e9a2, 0x5e9c2, indexCPS2Sprites_VSAV1_Bonus, 0x32 },
    { L"Title Screen - VS Logo 32x32 BG 3", 0x5e9c2, 0x5e9e2, indexCPS2Sprites_VSAV1_Bonus, 0x32 },

    { L"Title Screen - Lord of the Vampire 1", 0x2354a, 0x2356a, indexCPS2Sprites_VSAV1_Bonus, 0x2c },
    { L"Title Screen - Lord of the Vampire 2", 0x2b02a, 0x2b04a, indexCPS2Sprites_VSAV1_Bonus, 0x2c },
    { L"Title Screen - Lord of the Vampire 3", 0x2b04a, 0x2b06a, indexCPS2Sprites_VSAV1_Bonus, 0x2c },
    { L"Title Screen - Lord of the Vampire 4", 0x2b06a, 0x2b08a, indexCPS2Sprites_VSAV1_Bonus, 0x2c },
    { L"Title Screen - Lord of the Vampire 5", 0x2b08a, 0x2b0aa, indexCPS2Sprites_VSAV1_Bonus, 0x2c },
    { L"Title Screen - Lord of the Vampire 6", 0x2b0aa, 0x2b0ca, indexCPS2Sprites_VSAV1_Bonus, 0x2c },
    { L"Title Screen - Vampire Savior 1", 0x2356a, 0x2358a, indexCPS2Sprites_VSAV1_Bonus, 0x2e },
    { L"Title Screen - Vampire Savior 2", 0x2b0ca, 0x2b0ea, indexCPS2Sprites_VSAV1_Bonus, 0x2e },
    { L"Title Screen - Vampire Savior 3", 0x2b0ea, 0x2b10a, indexCPS2Sprites_VSAV1_Bonus, 0x2e },
    { L"Title Screen - Crown 1", 0x2358a, 0x235Aa, indexCPS2Sprites_VSAV1_Bonus, 0x2b },
    { L"Title Screen - Crown 2", 0x2af8a, 0x2afaa, indexCPS2Sprites_VSAV1_Bonus, 0x2b },
    { L"Title Screen - Crown 3", 0x2afaa, 0x2afca, indexCPS2Sprites_VSAV1_Bonus, 0x2b },
    { L"Title Screen - Crown 4", 0x2afca, 0x2afea, indexCPS2Sprites_VSAV1_Bonus, 0x2b },
    { L"Title Screen - Crown 5", 0x2afea, 0x2b00a, indexCPS2Sprites_VSAV1_Bonus, 0x2b },
    { L"Title Screen - Crown 6", 0x2b00a, 0x2b02a, indexCPS2Sprites_VSAV1_Bonus, 0x2b },

    { L"Screen Fade/Title Screen - Shine 1", 0x235Aa, 0x235Ca, indexCPS2Sprites_VSAV1_Bonus, 0x2d },
    { L"Screen Fade/Title Screen - Shine 2", 0x2b10a, 0x2b12a, indexCPS2Sprites_VSAV1_Bonus, 0x2d },
    { L"Screen Fade/Title Screen - Shine 3", 0x2b12a, 0x2b14a, indexCPS2Sprites_VSAV1_Bonus, 0x2d },

    { L"Title Screen - Circles 1", 0x235Ca, 0x235Ea, indexCPS2Sprites_VSAV1_Bonus, 0x2a },
    { L"Title Screen - Circles 2", 0x2b14a, 0x2b16a, indexCPS2Sprites_VSAV1_Bonus, 0x2a },
    { L"Title Screen - Circles 3", 0x2b16a, 0x2b18a, indexCPS2Sprites_VSAV1_Bonus, 0x2a },
    { L"Title Screen - Circles 4", 0x2b18a, 0x2b1aa, indexCPS2Sprites_VSAV1_Bonus, 0x2a },

    { L"Intro - Arcade Map BG", 0x65842, 0x65962, indexCPS2Sprites_VSAV1_Bonus, 0x20 },

    { L"Intro Eye", 0x402f2, 0x40312, indexCPS2Sprites_VSAV1_Bonus, 0x24 },

    { L"Versus/Arcade BG", 0x65c42, 0x65d62, indexCPS2Sprites_VSAV1_Bonus, 0x2f },
    { L"Versus/Arcade BG Flash 1", 0x5d242, 0x5d282, indexCPS2Sprites_VSAV1_Bonus, 0x30 },
    { L"Versus/Arcade BG Flash 2", 0x5d282, 0x5d2c2, indexCPS2Sprites_VSAV1_Bonus, 0x30 },
};

const sGame_PaletteDataset VSAV_A_BONUS_DARKFORCE_PALETTES[] =
{
    { L"Stages - Dark Force - 16x16 BG 1", 0x4a0fa, 0x4a29a, indexCPS2Sprites_VSAV1_Stages, 0x00, &pairNext3Palettes },
    { L"Stages - Dark Force - 16x16 BG 2", 0x4a29a, 0x4a41a, indexCPS2Sprites_VSAV1_Stages, 0x01 },
    { L"Stages - Dark Force - 32x32 BG 1", 0x5d562, 0x5d6e2, indexCPS2Sprites_VSAV1_Stages, 0x02 },
    { L"Stages - Dark Force - 32x32 BG 2", 0x5d6e2, 0x5d882, indexCPS2Sprites_VSAV1_Stages, 0x03 },

    { L"Stages - Dark Force Alt 1 (Unused) - 16x16 BG 1", 0x4a4fa, 0x4a69a, indexCPS2Sprites_VSAV1_Stages, 0x00, &pairNext3Palettes },
    { L"Stages - Dark Force Alt 1 (Unused) - 16x16 BG 2", 0x4a69a, 0x4a81a, indexCPS2Sprites_VSAV1_Stages, 0x01 },
    { L"Stages - Dark Force Alt 1 (Unused) - 32x32 BG 1", 0x5d962, 0x5dae2, indexCPS2Sprites_VSAV1_Stages, 0x02 },
    { L"Stages - Dark Force Alt 1 (Unused) - 32x32 BG 2", 0x5dae2, 0x5dc82, indexCPS2Sprites_VSAV1_Stages, 0x03 },

    { L"Stages - Dark Force Alt 2 (Unused) - 16x16 BG 1", 0x4a8fa, 0x4aa9a, indexCPS2Sprites_VSAV1_Stages, 0x00, &pairNext3Palettes },
    { L"Stages - Dark Force Alt 2 (Unused) - 16x16 BG 2", 0x4aa9a, 0x4ac1a, indexCPS2Sprites_VSAV1_Stages, 0x01 },
    { L"Stages - Dark Force Alt 2 (Unused) - 32x32 BG 1", 0x5dd62, 0x5dee2, indexCPS2Sprites_VSAV1_Stages, 0x02 },
    { L"Stages - Dark Force Alt 2 (Unused) - 32x32 BG 2", 0x5dee2, 0x5e082, indexCPS2Sprites_VSAV1_Stages, 0x03 },
};

const sGame_PaletteDataset VSAV_A_BONUS_SEPIA_PALETTES[] =
{
    { L"Sepia Select Portraits - Bulleta", 0x2D30A, 0x2D32A, indexCPS2Sprites_BBHood, 0x20 },
    { L"Sepia Select Portraits - Demitri", 0x2D32A, 0x2D34A, indexCPS2Sprites_Vamp_Demitri, 0x20 },
    { L"Sepia Select Portraits - Gallon", 0x2D34A, 0x2D36A, indexCPS2Sprites_Vamp_Gallon, 0x20 },
    { L"Sepia Select Portraits - Victor", 0x2D36A, 0x2D38A, indexCPS2Sprites_Vamp_Victor, 0x20 },
    { L"Sepia Select Portraits - Zabel", 0x2D38A, 0x2D3AA, indexCPS2Sprites_Vamp_Zabel, 0x20 },
    { L"Sepia Select Portraits - Morrigan", 0x2D3AA, 0x2D3CA, indexCPS2Sprites_Morrigan, 0x20 },
    { L"Sepia Select Portraits - Anakaris", 0x2D3CA, 0x2D3EA, indexCPS2Sprites_Anakaris, 0x20 },
    { L"Sepia Select Portraits - Felicia", 0x2D3EA, 0x2D40A, indexCPS2Sprites_Felicia, 0x20 },
    { L"Sepia Select Portraits - Bishamon", 0x2D40A, 0x2D42A, indexCPS2Sprites_Vamp_Bishamon, 0x20 },
    { L"Sepia Select Portraits - Aulbath", 0x2D42A, 0x2D44A, indexCPS2Sprites_Vamp_Aulbath, 0x20 },
    { L"Sepia Select Portraits - Sasquatch", 0x2D44A, 0x2D46A, indexCPS2Sprites_Vamp_Sasquatch, 0x20 },
    { L"Sepia Select Portraits - Phobos", 0x2D46A, 0x2D48A, indexCPS2Sprites_Vamp_Phobos, 0x20 },
    { L"Sepia Select Portraits - Q-Bee", 0x2D48A, 0x2D4AA, indexCPS2Sprites_Vamp_QBee, 0x20 },
    { L"Sepia Select Portraits - Lei-Lei", 0x2D4AA, 0x2D4CA, indexCPS2Sprites_Vamp_LeiLei, 0x20 },
    { L"Sepia Select Portraits - Lilith", 0x2D4CA, 0x2D4EA, indexCPS2Sprites_Vamp_Lilith, 0x20 },
    { L"Sepia Select Portraits - Jedah", 0x2D4EA, 0x2D50A, indexCPS2Sprites_Vamp_Jedah, 0x20 },
};

const sGame_PaletteDataset VSAV_A_BONUS_CSI_PALETTES[] =
{
    { L"Character Select Icons", 0x237Aa, 0x239Aa, indexCPS2Sprites_VSAV1_Bonus, 0x0c },
};

const sGame_PaletteDataset VSAV_A_BONUS_CSS_PALETTES[] =
{
    { L"P1 Character Select Ring", 0x23aca, 0x23aea, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 2", 0x294ea, 0x2950a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 3", 0x2950a, 0x2952a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 4", 0x2952a, 0x2954a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 5", 0x2954a, 0x2956a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 6", 0x2956a, 0x2958a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 7", 0x2958a, 0x295aa, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 8", 0x295aa, 0x295ca, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 9", 0x295ca, 0x295ea, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 10", 0x295ea, 0x2960a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 11", 0x2960a, 0x2962a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 12", 0x2962a, 0x2964a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Select Ring Frame 13", 0x2964a, 0x2966a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },
    { L"P1 Character Select Ring Flash", 0x297ea, 0x2980a, indexCPS2Sprites_VSAV1_Bonus, 0x10 },

    { L"P2 Character Select Ring", 0x23aea, 0x23b0a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 2", 0x2966a, 0x2968a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 3", 0x2968a, 0x296aa, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 4", 0x296aa, 0x296ca, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 5", 0x296ca, 0x296ea, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 6", 0x296ea, 0x2970a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 7", 0x2970a, 0x2972a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 8", 0x2972a, 0x2974a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 9", 0x2974a, 0x2976a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 10", 0x2976a, 0x2978a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 11", 0x2978a, 0x297aa, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 12", 0x297aa, 0x297ca, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Select Ring Frame 13", 0x297ca, 0x297ea, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
    { L"P2 Character Select Ring Flash", 0x2980a, 0x2982a, indexCPS2Sprites_VSAV1_Bonus, 0x11 },
};

const sGame_PaletteDataset VSAV_A_BONUS_TEXT_PALETTES[] =
{
    { L"Ready", 0x2984a, 0x2986a, indexCPS2Sprites_VSAV1_Bonus, 0x13 },
    { L"Fight", 0x2986a, 0x2988a, indexCPS2Sprites_VSAV1_Bonus, 0x0e },
    { L"Fight Flash 1", 0x2896a, 0x2898a, indexCPS2Sprites_VSAV1_Bonus, 0x0e },
    { L"Fight Flash 2", 0x2898a, 0x289Aa, indexCPS2Sprites_VSAV1_Bonus, 0x0e },
    { L"Fight Flash 3", 0x289Aa, 0x289Ca, indexCPS2Sprites_VSAV1_Bonus, 0x0e },
    { L"Fight Flash 4", 0x289Ca, 0x289Ea, indexCPS2Sprites_VSAV1_Bonus, 0x0e },
    { L"Fight Flash 5", 0x289Ea, 0x28A0a, indexCPS2Sprites_VSAV1_Bonus, 0x0e },
    { L"KO", 0x2988a, 0x298aa, indexCPS2Sprites_VSAV1_Bonus, 0x0f },
    { L"Perfect/Complete", 0x298aa, 0x298ca, indexCPS2Sprites_VSAV1_Bonus, 0x12 },
    { L"Time Over", 0x298ca, 0x298ea, indexCPS2Sprites_VSAV1_Bonus, 0x14 },
    { L"Draw Game", 0x298ea, 0x2990a, indexCPS2Sprites_VSAV1_Bonus, 0x0d },
    { L"You Win", 0x2990a, 0x2992a, indexCPS2Sprites_VSAV1_Bonus, 0x16 },
    { L"You Lose", 0x2992a, 0x2994a, indexCPS2Sprites_VSAV1_Bonus, 0x15 },
};

const sGame_PaletteDataset VSAV_A_BONUS_OTHER_PALETTES[] =
{
    { L"Score Ranking - Title 1", 0x299aa, 0x299CA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 2", 0x299Ca, 0x299EA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 3", 0x299Ea, 0x29A0A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 4", 0x29A0a, 0x29A2A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 5", 0x29A2a, 0x29A4A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 6", 0x29A4a, 0x29A6A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 7", 0x29A6a, 0x29A8A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 8", 0x29A8a, 0x29AAA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 9", 0x29AAa, 0x29ACA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 10", 0x29ACa, 0x29AEA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 11", 0x29AEa, 0x29B0A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 12", 0x29B0a, 0x29B2A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 13", 0x29B2a, 0x29B4A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 14", 0x29B4a, 0x29B6A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 15", 0x29B6a, 0x29B8A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 16", 0x29B8a, 0x29BAA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 17", 0x29BAa, 0x29BCA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 18", 0x29BCa, 0x29BEA, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 19", 0x29BEa, 0x29C0A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 20", 0x29C0a, 0x29C2A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },
    { L"Score Ranking - Title 21", 0x29C2a, 0x29C4A, indexCPS2Sprites_VSAV1_Bonus, 0x1f },

    { L"Score Ranking - Rank", 0x23eea, 0x23f0A, indexCPS2Sprites_VSAV1_Bonus, 0x1e },
    { L"Score Ranking - Initials & Score", 0x23eca, 0x23eeA, indexCPS2Sprites_VSAV1_Bonus, 0x1c },
    { L"Score Ranking - Normal/Turbo", 0x23eaa, 0x23ecA, indexCPS2Sprites_VSAV1_Bonus, 0x1d },

    { L"Score Ranking - Score Ranking BG", 0x51cfa, 0x51d5a, indexCPS2Sprites_VSAV1_Bonus, 0x28 },
    { L"Score Ranking - VS Ranking BG", 0x51e7a, 0x51eda, indexCPS2Sprites_VSAV1_Bonus, 0x28 },
    { L"Score Ranking - Unused Ranking BG", 0x51dba, 0x51e1a, indexCPS2Sprites_VSAV1_Bonus, 0x28 },

    { L"Arcade High Score Icons", 0x23baa, 0x23daA, indexCPS2Sprites_VSAV1_Bonus, 0x1b },
    { L"End Credits Character Icons", 0x23f6a, 0x2416A, indexCPS2Sprites_VSAV1_Bonus, 0x1b },

    { L"Boss Arcade Icons", 0x23daa, 0x23deA },

    { L"Intro Capcom Logo", 0x402d2, 0x402f2, indexCPS2Sprites_VSAV1_Bonus, 0x21 },

    { L"New Challenger 1 Flash 1", 0x283aa, 0x283CA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 2", 0x283Ca, 0x283EA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 3", 0x283Ea, 0x2840A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 4", 0x2840a, 0x2842A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 5", 0x2842a, 0x2844A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 6", 0x2844a, 0x2846A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 7", 0x2846a, 0x2848A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 8", 0x2848a, 0x284AA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 9", 0x284Aa, 0x284CA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 10", 0x284Ca, 0x284EA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 1 Flash 11", 0x284Ea, 0x2850A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },

    { L"New Challenger 1 Color Cycle 1", 0x2850a, 0x2852A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 2", 0x2852a, 0x2854A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 3", 0x2854a, 0x2856A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 4", 0x2856a, 0x2858A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 5", 0x2858a, 0x285AA, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 6", 0x285Aa, 0x285CA, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 7", 0x285Ca, 0x285EA, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 8", 0x285Ea, 0x2860A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 9", 0x2860a, 0x2862A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 10", 0x2862a, 0x2864A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 11", 0x2864a, 0x2866A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 1 Color Cycle 12", 0x2866a, 0x2868A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },

    { L"New Challenger 2 Flash 1", 0x2868a, 0x286AA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 2", 0x286Aa, 0x286CA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 3", 0x286Ca, 0x286EA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 4", 0x286Ea, 0x2870A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 5", 0x2870a, 0x2872A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 6", 0x2872a, 0x2874A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 7", 0x2874a, 0x2876A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 8", 0x2876a, 0x2878A, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 9", 0x2878a, 0x287AA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 10", 0x287Aa, 0x287CA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },
    { L"New Challenger 2 Flash 11", 0x287Ca, 0x287EA, indexCPS2Sprites_VSAV1_Bonus, 0x1a },

    { L"New Challenger 2 Color Cycle 1", 0x287ea, 0x2880A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 2", 0x2880a, 0x2882A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 3", 0x2882a, 0x2884A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 4", 0x2884A, 0x2886A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 5", 0x2886a, 0x2888A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 6", 0x2888a, 0x288AA, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 7", 0x288Aa, 0x288CA, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 8", 0x288Ca, 0x288EA, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 9", 0x288Ea, 0x2890A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 10", 0x2890a, 0x2892A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 11", 0x2892a, 0x2894A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
    { L"New Challenger 2 Color Cycle 12", 0x2894a, 0x2896A, indexCPS2Sprites_VSAV1_Bonus, 0x19 },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_STATUS[] =
{
    { L"Bulleta ES 1", 0x120a0 - 0xf6, 0x120c0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta ES 2", 0x120c0 - 0xf6, 0x120e0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta ES 3", 0x120e0 - 0xf6, 0x12100 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta ES 4", 0x12100 - 0xf6, 0x12120 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 1", 0x12120 - 0xf6, 0x12140 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 2", 0x12140 - 0xf6, 0x12160 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 3", 0x12160 - 0xf6, 0x12180 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 4", 0x12180 - 0xf6, 0x121a0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 5", 0x121a0 - 0xf6, 0x121c0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 6", 0x121c0 - 0xf6, 0x121e0 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 7", 0x121e0 - 0xf6, 0x12200 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta EX 8", 0x12200 - 0xf6, 0x12220 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta Prova di Servo", 0x12220 - 0xf6, 0x12240 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta Finale Rosso", 0x12240 - 0xf6, 0x12260 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta Stone", 0x12260 - 0xf6, 0x12280 - 0xf6, indexCPS2Sprites_BBHood },
    { L"Bulleta Q-Bee's QJ Honey", 0x123c0 - 0xf6, 0x123e0 - 0xf6, indexCPS2Sprites_BBHood },
};

const sGame_PaletteDataset VSAV_A_BULLETA_PALETTES_SHARED[] =
{
    { L"Apple for You", 0x1a82a, 0x1a84a, indexCPS2Sprites_BBHood, 0x0a },
    { L"Mr. K", 0x1a84a, 0x1a86a, indexCPS2Sprites_BBHood, 0x09 },
    { L"Cheer and Fire", 0x1a86a, 0x1a88a, indexCPS2Sprites_BBHood, 0x07 },
    { L"Water", 0x1ab0a, 0x1ab2a, indexCPS2Sprites_BBHood, 0x0e },
    { L"Water Puddle", 0x1ab2a, 0x1ab4a, indexCPS2Sprites_BBHood, 0x0f },
    { L"Cruel Hunting", 0x1abaa, 0x1abca, indexCPS2Sprites_BBHood, 0x08 },
    { L"Bulleta P1 Dark Force 1", 0x1abca, 0x1abea, indexCPS2Sprites_BBHood },
    { L"Bulleta P1 Dark Force 2", 0x1abea, 0x1ac0a, indexCPS2Sprites_BBHood },
    { L"Bulleta P1 Dark Force 3", 0x1ac0a, 0x1ac2a, indexCPS2Sprites_BBHood },
    { L"Bulleta P1 Dark Force 4", 0x1ac2a, 0x1ac4a, indexCPS2Sprites_BBHood },
    { L"Bulleta P2 Dark Force 1", 0x1ac4a, 0x1ac6a, indexCPS2Sprites_BBHood },
    { L"Bulleta P2 Dark Force 2", 0x1ac6a, 0x1ac8a, indexCPS2Sprites_BBHood },
    { L"Bulleta P2 Dark Force 3", 0x1ac8a, 0x1acaa, indexCPS2Sprites_BBHood },
    { L"Bulleta P2 Dark Force 4", 0x1acaa, 0x1acca, indexCPS2Sprites_BBHood },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01b08a, 0x01b0aa, indexCPS2Sprites_Vamp_Zabel },
    { L"P1 Dark Force 2/4", 0x01b0aa, 0x01b0ca, indexCPS2Sprites_Vamp_Zabel },
    { L"P1 Dark Force 3/4", 0x01b0ca, 0x01b0ea, indexCPS2Sprites_Vamp_Zabel },
    { L"P1 Dark Force 4/4", 0x01b0ea, 0x01b10a, indexCPS2Sprites_Vamp_Zabel },
    { L"P2 Dark Force 1/4", 0X01b10a, 0x01b12a, indexCPS2Sprites_Vamp_Zabel },
    { L"P2 Dark Force 2/4", 0x01b12a, 0x01b14a, indexCPS2Sprites_Vamp_Zabel },
    { L"P2 Dark Force 3/4", 0x01b14a, 0x01b16a, indexCPS2Sprites_Vamp_Zabel },
    { L"P2 Dark Force 4/4", 0x01b16a, 0x01b18a, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01b5ea, 0x01b60a, indexCPS2Sprites_Vamp_Bishamon },
    { L"P1 Dark Force 2/4", 0x01b60a, 0x01b62a, indexCPS2Sprites_Vamp_Bishamon },
    { L"P1 Dark Force 3/4", 0x01b62a, 0x01b64a, indexCPS2Sprites_Vamp_Bishamon },
    { L"P1 Dark Force 4/4", 0x01b64a, 0x01b66a, indexCPS2Sprites_Vamp_Bishamon },
    { L"P2 Dark Force 1/4", 0x01b66a, 0x01b68a, indexCPS2Sprites_Vamp_Bishamon },
    { L"P2 Dark Force 2/4", 0x01b68a, 0x01b6aa, indexCPS2Sprites_Vamp_Bishamon },
    { L"P2 Dark Force 3/4", 0x01b6aa, 0x01b6ca, indexCPS2Sprites_Vamp_Bishamon },
    { L"P2 Dark Force 4/4", 0x01b6ca, 0x01b6ea, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_SHARED[] =
{
    { L"P1 Dark Force 1/4", 0x01bd4a, 0x01bd6a, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P1 Dark Force 2/4", 0x01bd6a, 0x01bd8a, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P1 Dark Force 3/4", 0x01bd8a, 0x01bdaa, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P1 Dark Force 4/4", 0x01bdaa, 0x01bdca, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P2 Dark Force 1/4", 0x01bdca, 0x01bdea, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P2 Dark Force 2/4", 0x01bdea, 0x01be0a, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P2 Dark Force 3/4", 0x01be0a, 0x01be2a, indexCPS2Sprites_Vamp_Sasquatch },
    { L"P2 Dark Force 4/4", 0x01be2a, 0x01be4a, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_DEMITRI_PALETTES_STATUS[] =
{
    { L"Demitri ES 1", 0x128e0 - 0xf6, 0x12900 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES 2", 0x12900 - 0xf6, 0x12920 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES 3", 0x12920 - 0xf6, 0x12940 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri ES 4", 0x12940 - 0xf6, 0x12960 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 1", 0x12960 - 0xf6, 0x12980 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 2", 0x12980 - 0xf6, 0x129a0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 3", 0x129a0 - 0xf6, 0x129c0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 4", 0x129c0 - 0xf6, 0x129e0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 5", 0x129e0 - 0xf6, 0x12a00 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 6", 0x12a00 - 0xf6, 0x12a20 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 7", 0x12a20 - 0xf6, 0x12a40 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri EX 8", 0x12a40 - 0xf6, 0x12a60 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Prova di Servo", 0x12a60 - 0xf6, 0x12a80 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Finale Rosso", 0x12a80 - 0xf6, 0x12aa0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Stone", 0x12aa0 - 0xf6, 0x12ac0 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
    { L"Demitri Q-Bee's QJ Honey", 0x12c00 - 0xf6, 0x12c20 - 0xf6, indexCPS2Sprites_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV_A_GALLON_PALETTES_STATUS[] =
{
    { L"Gallon ES 1", 0x13120 - 0xf6, 0x13140 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ES 2", 0x13140 - 0xf6, 0x13160 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ES 3", 0x13160 - 0xf6, 0x13180 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon ES 4", 0x13180 - 0xf6, 0x131a0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 1", 0x131a0 - 0xf6, 0x131c0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 2", 0x131c0 - 0xf6, 0x131e0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 3", 0x131e0 - 0xf6, 0x13200 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 4", 0x13200 - 0xf6, 0x13220 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 5", 0x13220 - 0xf6, 0x13240 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 6", 0x13240 - 0xf6, 0x13260 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 7", 0x13260 - 0xf6, 0x13280 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon EX 8", 0x13280 - 0xf6, 0x132a0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Prova di Servo", 0x132a0 - 0xf6, 0x132c0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Finale Rosso", 0x132c0 - 0xf6, 0x132e0 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Stone", 0x132e0 - 0xf6, 0x13300 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
    { L"Gallon Q-Bee's QJ Honey", 0x13440 - 0xf6, 0x13460 - 0xf6, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_STATUS[] =
{
    { L"Victor ES 1", 0x13960 - 0xf6, 0x13980 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor ES 2", 0x13980 - 0xf6, 0x139a0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor ES 3", 0x139a0 - 0xf6, 0x139c0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor ES 4", 0x139c0 - 0xf6, 0x139e0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 1", 0x139e0 - 0xf6, 0x13a00 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 2", 0x13a00 - 0xf6, 0x13a20 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 3", 0x13a20 - 0xf6, 0x13a40 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 4", 0x13a40 - 0xf6, 0x13a60 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 5", 0x13a60 - 0xf6, 0x13a80 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 6", 0x13a80 - 0xf6, 0x13aa0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 7", 0x13aa0 - 0xf6, 0x13ac0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor EX 8", 0x13ac0 - 0xf6, 0x13ae0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor Prova di Servo", 0x13ae0 - 0xf6, 0x13b00 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor Finale Rosso", 0x13b00 - 0xf6, 0x13b20 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor Stone", 0x13b20 - 0xf6, 0x13b40 - 0xf6, indexCPS2Sprites_Vamp_Victor },
    { L"Victor Q-Bee's QJ Honey", 0x13c80 - 0xf6, 0x13ca0 - 0xf6, indexCPS2Sprites_Vamp_Victor },
};

const sGame_PaletteDataset VSAV_A_VICTOR_PALETTES_SHARED[] =
{
    { L"Emily", 0x01af2a, 0x01af4a, indexCPS2Sprites_Vamp_Victor, 0x08 },
};

const sGame_PaletteDataset VSAV_A_ZABEL_PALETTES_STATUS[] =
{
    { L"Zabel ES 1", 0x141a0 - 0xf6, 0x141c0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ES 2", 0x141c0 - 0xf6, 0x141e0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ES 3", 0x141e0 - 0xf6, 0x14200 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel ES 4", 0x14200 - 0xf6, 0x14220 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 1", 0x14220 - 0xf6, 0x14240 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 2", 0x14240 - 0xf6, 0x14260 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 3", 0x14260 - 0xf6, 0x14280 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 4", 0x14280 - 0xf6, 0x142a0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 5", 0x142a0 - 0xf6, 0x142c0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 6", 0x142c0 - 0xf6, 0x142e0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 7", 0x142e0 - 0xf6, 0x14300 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel EX 8", 0x14300 - 0xf6, 0x14320 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Prova di Servo", 0x14320 - 0xf6, 0x14340 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Finale Rosso", 0x14340 - 0xf6, 0x14360 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Stone", 0x14360 - 0xf6, 0x14380 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
    { L"Zabel Q-Bee's QJ Honey", 0x144c0 - 0xf6, 0x144e0 - 0xf6, indexCPS2Sprites_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV_A_MORRIGAN_PALETTES_STATUS[] =
{
    { L"Morrigan ES 1", 0x149e0 - 0xf6, 0x14a00 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan ES 2", 0x14a00 - 0xf6, 0x14a20 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan ES 3", 0x14a20 - 0xf6, 0x14a40 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan ES 4", 0x14a40 - 0xf6, 0x14a60 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 1", 0x14a60 - 0xf6, 0x14a80 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 2", 0x14a80 - 0xf6, 0x14aa0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 3", 0x14aa0 - 0xf6, 0x14ac0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 4", 0x14ac0 - 0xf6, 0x14ae0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 5", 0x14ae0 - 0xf6, 0x14b00 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 6", 0x14b00 - 0xf6, 0x14b20 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 7", 0x14b20 - 0xf6, 0x14b40 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan EX 8", 0x14b40 - 0xf6, 0x14b60 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan Prova di Servo", 0x14b60 - 0xf6, 0x14b80 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan Finale Rosso", 0x14b80 - 0xf6, 0x14ba0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan Stone", 0x14ba0 - 0xf6, 0x14bc0 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
    { L"Morrigan Q-Bee's QJ Honey", 0x14d00 - 0xf6, 0x14d20 - 0xf6, indexCPS2Sprites_Morrigan, 0x00 },
};

const sGame_PaletteDataset VSAV_A_ANAKARIS_PALETTES_STATUS[] =
{
    { L"Anakaris ES 1", 0x15220 - 0xf6, 0x15240 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris ES 2", 0x15240 - 0xf6, 0x15260 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris ES 3", 0x15260 - 0xf6, 0x15280 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris ES 4", 0x15280 - 0xf6, 0x152a0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 1", 0x152a0 - 0xf6, 0x152c0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 2", 0x152c0 - 0xf6, 0x152e0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 3", 0x152e0 - 0xf6, 0x15300 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 4", 0x15300 - 0xf6, 0x15320 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 5", 0x15320 - 0xf6, 0x15340 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 6", 0x15340 - 0xf6, 0x15360 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 7", 0x15360 - 0xf6, 0x15380 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris EX 8", 0x15380 - 0xf6, 0x153a0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris Prova di Servo", 0x153a0 - 0xf6, 0x153c0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris Finale Rosso", 0x153c0 - 0xf6, 0x153e0 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris Stone", 0x153e0 - 0xf6, 0x15400 - 0xf6, indexCPS2Sprites_Anakaris },
    { L"Anakaris Q-Bee's QJ Honey", 0x15540 - 0xf6, 0x15560 - 0xf6, indexCPS2Sprites_Anakaris },
};

const sGame_PaletteDataset VSAV_A_FELICIA_PALETTES_STATUS[] =
{
    { L"Felicia ES 1", 0x15a60 - 0xf6, 0x15a80 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia ES 2", 0x15a80 - 0xf6, 0x15aa0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia ES 3", 0x15aa0 - 0xf6, 0x15ac0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia ES 4", 0x15ac0 - 0xf6, 0x15ae0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 1", 0x15ae0 - 0xf6, 0x15b00 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 2", 0x15b00 - 0xf6, 0x15b20 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 3", 0x15b20 - 0xf6, 0x15b40 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 4", 0x15b40 - 0xf6, 0x15b60 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 5", 0x15b60 - 0xf6, 0x15b80 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 6", 0x15b80 - 0xf6, 0x15ba0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 7", 0x15ba0 - 0xf6, 0x15bc0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia EX 8", 0x15bc0 - 0xf6, 0x15be0 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia Prova di Servo", 0x15be0 - 0xf6, 0x15c00 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia Finale Rosso", 0x15c00 - 0xf6, 0x15c20 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia Stone", 0x15c20 - 0xf6, 0x15c40 - 0xf6, indexCPS2Sprites_Felicia },
    { L"Felicia Q-Bee's QJ Honey", 0x15d80 - 0xf6, 0x15da0 - 0xf6, indexCPS2Sprites_Felicia },
};

const sGame_PaletteDataset VSAV_A_BISHAMON_PALETTES_STATUS[] =
{
    { L"Bishamon ES 1", 0x162a0 - 0xf6, 0x162c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ES 2", 0x162c0 - 0xf6, 0x162e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ES 3", 0x162e0 - 0xf6, 0x16300 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon ES 4", 0x16300 - 0xf6, 0x16320 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 1", 0x16320 - 0xf6, 0x16340 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 2", 0x16340 - 0xf6, 0x16360 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 3", 0x16360 - 0xf6, 0x16380 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 4", 0x16380 - 0xf6, 0x163a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 5", 0x163a0 - 0xf6, 0x163c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 6", 0x163c0 - 0xf6, 0x163e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 7", 0x163e0 - 0xf6, 0x16400 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon EX 8", 0x16400 - 0xf6, 0x16420 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Prova di Servo", 0x16420 - 0xf6, 0x16440 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Finale Rosso", 0x16440 - 0xf6, 0x16460 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Stone", 0x16460 - 0xf6, 0x16480 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Bishamon Q-Bee's QJ Honey", 0x165c0 - 0xf6, 0x165e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_AULBATH_PALETTES_STATUS[] =
{
    { L"Aulbath ES 1", 0x16ae0 - 0xf6, 0x16b00 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ES 2", 0x16b00 - 0xf6, 0x16b20 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ES 3", 0x16b20 - 0xf6, 0x16b40 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath ES 4", 0x16b40 - 0xf6, 0x16b60 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 1", 0x16b60 - 0xf6, 0x16b80 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 2", 0x16b80 - 0xf6, 0x16ba0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 3", 0x16ba0 - 0xf6, 0x16bc0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 4", 0x16bc0 - 0xf6, 0x16be0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 5", 0x16be0 - 0xf6, 0x16c00 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 6", 0x16c00 - 0xf6, 0x16c20 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 7", 0x16c20 - 0xf6, 0x16c40 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath EX 8", 0x16c40 - 0xf6, 0x16c60 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Prova di Servo", 0x16c60 - 0xf6, 0x16c80 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Finale Rosso", 0x16c80 - 0xf6, 0x16ca0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Stone", 0x16ca0 - 0xf6, 0x16cc0 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
    { L"Aulbath Q-Bee's QJ Honey", 0x16e00 - 0xf6, 0x16e20 - 0xf6, indexCPS2Sprites_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV_A_SASQUATCH_PALETTES_STATUS[] =
{
    { L"Sasquatch ES 1", 0x17320 - 0xf6, 0x17340 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ES 2", 0x17340 - 0xf6, 0x17360 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ES 3", 0x17360 - 0xf6, 0x17380 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch ES 4", 0x17380 - 0xf6, 0x173a0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 1", 0x173a0 - 0xf6, 0x173c0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 2", 0x173c0 - 0xf6, 0x173e0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 3", 0x173e0 - 0xf6, 0x17400 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 4", 0x17400 - 0xf6, 0x17420 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 5", 0x17420 - 0xf6, 0x17440 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 6", 0x17440 - 0xf6, 0x17460 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 7", 0x17460 - 0xf6, 0x17480 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch EX 8", 0x17480 - 0xf6, 0x174a0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Prova di Servo", 0x174a0 - 0xf6, 0x174c0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Finale Rosso", 0x174c0 - 0xf6, 0x174e0 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Stone", 0x174e0 - 0xf6, 0x17500 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
    { L"Sasquatch Q-Bee's QJ Honey", 0x17640 - 0xf6, 0x17660 - 0xf6, indexCPS2Sprites_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV_A_QBEE_PALETTES_STATUS[] =
{
    { L"Q-Bee ES 1", 0x17b60 - 0xf6, 0x17b80 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 1/4", 0x01f2aa, 0x01f2ca, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee ES 2", 0x17b80 - 0xf6, 0x17ba0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 2/4", 0x01f2ca, 0x01f2ea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee ES 3", 0x17ba0 - 0xf6, 0x17bc0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 3/4", 0x01f2ea, 0x01f30a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee ES 4", 0x17bc0 - 0xf6, 0x17be0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"ES Wings/Honey 4/4", 0x01f30a, 0x01f32a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 1", 0x17be0 - 0xf6, 0x17c00 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 1/8", 0x01f32a, 0x01f34a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 2", 0x17c00 - 0xf6, 0x17c20 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 2/8", 0x01f34a, 0x01f36a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 3", 0x17c20 - 0xf6, 0x17c40 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 3/8", 0x01f36a, 0x01f38a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 4", 0x17c40 - 0xf6, 0x17c60 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 4/8", 0x01f38a, 0x01f3aa, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 5", 0x17c60 - 0xf6, 0x17c80 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 5/8", 0x01f3aa, 0x01f3ca, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 6", 0x17c80 - 0xf6, 0x17ca0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 6/8", 0x01f3ca, 0x01f3ea, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 7", 0x17ca0 - 0xf6, 0x17cc0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 7/8", 0x01f3ea, 0x01f40a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee EX 8", 0x17cc0 - 0xf6, 0x17ce0 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"EX Wings/Honey 8/8", 0x01f40a, 0x01f42a, indexCPS2Sprites_Vamp_QBee, 1 },

    { L"Q-Bee Prova di Servo", 0x17ce0 - 0xf6, 0x17d00 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Prova di Servo", 0x01f42a, 0x01f44a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee Finale Rosso", 0x17d00 - 0xf6, 0x17d20 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Finale Rosso", 0x01f44a, 0x01f46a, indexCPS2Sprites_Vamp_QBee, 1 },
    { L"Q-Bee Stone", 0x17d20 - 0xf6, 0x17d40 - 0xf6, indexCPS2Sprites_Vamp_QBee, 0x00, &pairNext },
    { L"Wings/Honey Stone", 0x01f46a, 0x01f48a, indexCPS2Sprites_Vamp_QBee, 1 },

    { L"Q-Bee Q-Bee's QJ Honey", 0x17e80 - 0xf6, 0x17ea0 - 0xf6, indexCPS2Sprites_Vamp_QBee },

};

const sGame_PaletteDataset VSAV_A_LEILEI_PALETTES_STATUS[] =
{
    { L"Lei-Lei ES 1", 0x183a0 - 0xf6, 0x183c0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ES 2", 0x183c0 - 0xf6, 0x183e0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ES 3", 0x183e0 - 0xf6, 0x18400 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei ES 4", 0x18400 - 0xf6, 0x18420 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 1", 0x18420 - 0xf6, 0x18440 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 2", 0x18440 - 0xf6, 0x18460 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 3", 0x18460 - 0xf6, 0x18480 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 4", 0x18480 - 0xf6, 0x184a0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 5", 0x184a0 - 0xf6, 0x184c0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 6", 0x184c0 - 0xf6, 0x184e0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 7", 0x184e0 - 0xf6, 0x18500 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei EX 8", 0x18500 - 0xf6, 0x18520 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Prova di Servo", 0x18520 - 0xf6, 0x18540 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Finale Rosso", 0x18540 - 0xf6, 0x18560 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Stone", 0x18560 - 0xf6, 0x18580 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
    { L"Lei-Lei Q-Bee's QJ Honey", 0x186c0 - 0xf6, 0x186e0 - 0xf6, indexCPS2Sprites_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV_A_LILITH_PALETTES_STATUS[] =
{
    { L"Lilith ES 1", 0x18be0 - 0xf6, 0x18c00 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ES 2", 0x18c00 - 0xf6, 0x18c20 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ES 3", 0x18c20 - 0xf6, 0x18c40 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith ES 4", 0x18c40 - 0xf6, 0x18c60 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 1", 0x18c60 - 0xf6, 0x18c80 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 2", 0x18c80 - 0xf6, 0x18ca0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 3", 0x18ca0 - 0xf6, 0x18cc0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 4", 0x18cc0 - 0xf6, 0x18ce0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 5", 0x18ce0 - 0xf6, 0x18d00 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 6", 0x18d00 - 0xf6, 0x18d20 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 7", 0x18d20 - 0xf6, 0x18d40 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith EX 8", 0x18d40 - 0xf6, 0x18d60 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Prova di Servo", 0x18d60 - 0xf6, 0x18d80 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Finale Rosso", 0x18d80 - 0xf6, 0x18da0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Stone", 0x18da0 - 0xf6, 0x18dc0 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
    { L"Lilith Q-Bee's QJ Honey", 0x18f00 - 0xf6, 0x18f20 - 0xf6, indexCPS2Sprites_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV_A_JEDAH_PALETTES_STATUS[] =
{
    { L"Jedah ES 1", 0x19420 - 0xf6, 0x19440 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES 2", 0x19440 - 0xf6, 0x19460 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES 3", 0x19460 - 0xf6, 0x19480 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah ES 4", 0x19480 - 0xf6, 0x194a0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 1", 0x194a0 - 0xf6, 0x194c0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 2", 0x194c0 - 0xf6, 0x194e0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 3", 0x194e0 - 0xf6, 0x19500 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 4", 0x19500 - 0xf6, 0x19520 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 5", 0x19520 - 0xf6, 0x19540 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 6", 0x19540 - 0xf6, 0x19560 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 7", 0x19560 - 0xf6, 0x19580 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah EX 8", 0x19580 - 0xf6, 0x195a0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Prova di Servo", 0x195a0 - 0xf6, 0x195c0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Finale Rosso", 0x195c0 - 0xf6, 0x195e0 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Stone", 0x195e0 - 0xf6, 0x19600 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
    { L"Jedah Q-Bee's QJ Honey", 0x19740 - 0xf6, 0x19760 - 0xf6, indexCPS2Sprites_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV_A_OBOROBISHAMON_PALETTES_STATUS[] =
{
    { L"Oboro Bishamon ES 1", 0x1a4a0 - 0xf6, 0x1a4c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ES 2", 0x1a4c0 - 0xf6, 0x1a4e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ES 3", 0x1a4e0 - 0xf6, 0x1a500 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon ES 4", 0x1a500 - 0xf6, 0x1a520 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 1", 0x1a520 - 0xf6, 0x1a540 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 2", 0x1a540 - 0xf6, 0x1a560 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 3", 0x1a560 - 0xf6, 0x1a580 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 4", 0x1a580 - 0xf6, 0x1a5a0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 5", 0x1a5a0 - 0xf6, 0x1a5c0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 6", 0x1a5c0 - 0xf6, 0x1a5e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 7", 0x1a5e0 - 0xf6, 0x1a600 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon EX 8", 0x1a600 - 0xf6, 0x1a620 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Prova di Servo", 0x1a620 - 0xf6, 0x1a640 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Finale Rosso", 0x1a640 - 0xf6, 0x1a660 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Stone", 0x1a660 - 0xf6, 0x1a680 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
    { L"Oboro Bishamon Q-Bee's QJ Honey", 0x1a7c0 - 0xf6, 0x1a7e0 - 0xf6, indexCPS2Sprites_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_STATUS[] =
{
    { L"Dark Gallon Poisoned", 0x19760 - 0xf6, 0x19780 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Zapped", 0x198a0 - 0xf6, 0x198c0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon Burned", 0x199e0 - 0xf6, 0x19a00 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Pharaoh's Curse", 0x19b20 - 0xf6, 0x19b40 - 0xf6 },
    { L"Dark Gallon Midnight Bliss", 0x19e40 - 0xf6, 0x19e60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon Alt Poisoned", 0x19780 - 0xf6, 0x197a0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Alt Zapped", 0x198c0 - 0xf6, 0x198e0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon Alt Burned", 0x19a00 - 0xf6, 0x19a20 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Alt Pharaoh's Curse", 0x19b40 - 0xf6, 0x19b60 - 0xf6 },
    { L"Dark Gallon Alt Midnight Bliss", 0x19e60 - 0xf6, 0x19e80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon ES 1", 0x19c60 - 0xf6, 0x19c80 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ES 2", 0x19c80 - 0xf6, 0x19ca0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ES 3", 0x19ca0 - 0xf6, 0x19cc0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon ES 4", 0x19cc0 - 0xf6, 0x19ce0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 1", 0x19ce0 - 0xf6, 0x19d00 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 2", 0x19d00 - 0xf6, 0x19d20 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 3", 0x19d20 - 0xf6, 0x19d40 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 4", 0x19d40 - 0xf6, 0x19d60 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 5", 0x19d60 - 0xf6, 0x19d80 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 6", 0x19d80 - 0xf6, 0x19da0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 7", 0x19da0 - 0xf6, 0x19dc0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon EX 8", 0x19dc0 - 0xf6, 0x19de0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Prova di Servo", 0x19de0 - 0xf6, 0x19e00 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Finale Rosso", 0x19e00 - 0xf6, 0x19e20 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Stone", 0x19e20 - 0xf6, 0x19e40 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon Q-Bee's QJ Honey", 0x19f80 - 0xf6, 0x19fa0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
};

const sGame_PaletteDataset VSAV_A_DARKGALLON_PALETTES_STATUSUNUSED[] =
{
    { L"Dark Gallon HP Poisoned", 0x197a0 - 0xf6, 0x197c0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Poisoned", 0x197c0 - 0xf6, 0x197e0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Poisoned", 0x197e0 - 0xf6, 0x19800 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Poisoned", 0x19800 - 0xf6, 0x19820 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Poisoned", 0x19820 - 0xf6, 0x19840 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Poisoned", 0x19840 - 0xf6, 0x19860 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Poisoned", 0x19860 - 0xf6, 0x19880 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Poisoned", 0x19880 - 0xf6, 0x198a0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Zapped", 0x198e0 - 0xf6, 0x19900 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon LK Zapped", 0x19900 - 0xf6, 0x19920 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon MK Zapped", 0x19920 - 0xf6, 0x19940 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon HK Zapped", 0x19940 - 0xf6, 0x19960 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon PP Zapped", 0x19960 - 0xf6, 0x19980 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon KK Zapped", 0x19980 - 0xf6, 0x199a0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon AP Zapped", 0x199a0 - 0xf6, 0x199c0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon AK Zapped", 0x199c0 - 0xf6, 0x199e0 - 0xf6, indexCPS2Sprites_Vamp_Gallon, 0x0c },
    { L"Dark Gallon HP Burned", 0x19a20 - 0xf6, 0x19a40 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon LK Burned", 0x19a40 - 0xf6, 0x19a60 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon MK Burned", 0x19a60 - 0xf6, 0x19a80 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HK Burned", 0x19a80 - 0xf6, 0x19aa0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon PP Burned", 0x19aa0 - 0xf6, 0x19ac0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon KK Burned", 0x19ac0 - 0xf6, 0x19ae0 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AP Burned", 0x19ae0 - 0xf6, 0x19b00 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon AK Burned", 0x19b00 - 0xf6, 0x19b20 - 0xf6, indexCPS2Sprites_Vamp_DarkGallon },
    { L"Dark Gallon HP Pharaoh's Curse", 0x19b60 - 0xf6, 0x19b80 - 0xf6 },
    { L"Dark Gallon LK Pharaoh's Curse", 0x19b80 - 0xf6, 0x19ba0 - 0xf6 },
    { L"Dark Gallon MK Pharaoh's Curse", 0x19ba0 - 0xf6, 0x19bc0 - 0xf6 },
    { L"Dark Gallon HK Pharaoh's Curse", 0x19bc0 - 0xf6, 0x19be0 - 0xf6 },
    { L"Dark Gallon PP Pharaoh's Curse", 0x19be0 - 0xf6, 0x19c00 - 0xf6 },
    { L"Dark Gallon KK Pharaoh's Curse", 0x19c00 - 0xf6, 0x19c20 - 0xf6 },
    { L"Dark Gallon AP Pharaoh's Curse", 0x19c20 - 0xf6, 0x19c40 - 0xf6 },
    { L"Dark Gallon AK Pharaoh's Curse", 0x19c40 - 0xf6, 0x19c60 - 0xf6 },
    { L"Dark Gallon HP Midnight Bliss", 0x19e80 - 0xf6, 0x19ea0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon LK Midnight Bliss", 0x19ea0 - 0xf6, 0x19ec0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon MK Midnight Bliss", 0x19ec0 - 0xf6, 0x19ee0 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon HK Midnight Bliss", 0x19ee0 - 0xf6, 0x19f00 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon PP Midnight Bliss", 0x19f00 - 0xf6, 0x19f20 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon KK Midnight Bliss", 0x19f20 - 0xf6, 0x19f40 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon AP Midnight Bliss", 0x19f40 - 0xf6, 0x19f60 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
    { L"Dark Gallon AK Midnight Bliss", 0x19f60 - 0xf6, 0x19f80 - 0xf6, indexCPS2Sprites_VSAV1_MidnightBliss, indexCPS2Sprites_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_CHATEAU[] =
{
    { L"8BG.0.0.1", 0x369d2, 0x36af2, indexCPS2Sprites_VSAV1_Stages, 0x74, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x36af2, 0x36bf2, indexCPS2Sprites_VSAV1_Stages, 0x75 },

    { L"16BG.0.0.1", 0x468fA, 0x46afa, indexCPS2Sprites_VSAV1_Stages, 0x82 },
    { L"16BG.0.0.2", 0x46afA, 0x46c9a, indexCPS2Sprites_VSAV1_Stages, 0x83 },

    { L"32BG.0.0.1", 0x58ea2, 0x58ec2, indexCPS2Sprites_VSAV1_Stages, 0x91 },
    { L"32BG.0.0.2", 0x58fc2, 0x59142, indexCPS2Sprites_VSAV1_Stages, 0x92 },

    { L"SS.0.0.0", 0x201CA, 0x2030A, indexCPS2Sprites_VSAV1_Stages, 0x8b },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_CHATEAU_PARTS[] =
{
    { L"8BG.1.1.1", 0x3a932, 0x3A952, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.1.2", 0x3A992, 0x3A9B2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.1.3", 0x3A9F2, 0x3AA12, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.1.4", 0x3AA52, 0x3AA72, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.1.5", 0x3AAB2, 0x3AAD2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.1.6", 0x3AB12, 0x3AB32, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.1.7", 0x3AB72, 0x3AB92, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.1.8", 0x3ABD2, 0x3ABF2, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.1.9", 0x3AC32, 0x3AC52, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.1.10", 0x3AC92, 0x3ACB2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.1.11", 0x3ACF2, 0x3AD12, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.1.12", 0x3AD52, 0x3AD72, indexCPS2Sprites_VSAV1_Stages, 0x81 },

    { L"8BG.1.2.1", 0x3A952, 0x3A972, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.2.2", 0x3A9B2, 0x3A9D2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.2.3", 0x3AA12, 0x3AA32, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.2.4", 0x3AA72, 0x3AA92, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.2.5", 0x3AAD2, 0x3AAF2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.2.6", 0x3AB32, 0x3AB52, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.2.7", 0x3AB92, 0x3ABB2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.2.8", 0x3ABF2, 0x3AC12, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.2.9", 0x3AC52, 0x3AC72, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.2.10", 0x3ACB2, 0x3ACD2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.2.11", 0x3AD12, 0x3AD32, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.2.12", 0x3AD72, 0x3AD92, indexCPS2Sprites_VSAV1_Stages, 0x81 },

    { L"8BG.1.3.1", 0x3A972, 0x3A992, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.3.2", 0x3A9D2, 0x3A9F2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.3.3", 0x3AA32, 0x3AA52, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.3.4", 0x3AA92, 0x3AAB2, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.3.5", 0x3AAF2, 0x3AB12, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.3.6", 0x3AB52, 0x3AB72, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.3.7", 0x3ABB2, 0x3ABD2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.3.8", 0x3AC12, 0x3AC32, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.3.9", 0x3AC72, 0x3AC92, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.3.10", 0x3ACD2, 0x3ACF2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.3.11", 0x3AD32, 0x3AD52, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.3.12", 0x3AD92, 0x3ADB2, indexCPS2Sprites_VSAV1_Stages, 0x81 },

    { L"16BG.1.1.1", 0x4981A, 0x4983A, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.1.2", 0x4987A, 0x4989A, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.1.3", 0x498DA, 0x498FA, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.1.4", 0x4993A, 0x4995A, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.1.5", 0x4999A, 0x499BA, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.1.6", 0x499FA, 0x49A1A, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.1.7", 0x49A5A, 0x49A7A, indexCPS2Sprites_VSAV1_Stages, 0x8a },

    { L"16BG.1.2.1", 0x4983A, 0x4985A, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.2.2", 0x4989A, 0x498BA, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.2.3", 0x498FA, 0x4991A, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.2.4", 0x4995A, 0x4997A, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.2.5", 0x499BA, 0x499DA, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.2.6", 0x49A1A, 0x49A3A, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.2.7", 0x49A7A, 0x49A9A, indexCPS2Sprites_VSAV1_Stages, 0x8a },

    { L"16BG.1.3.1", 0x4985A, 0x4987A, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.3.2", 0x498BA, 0x498DA, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.3.3", 0x4991A, 0x4993A, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.3.4", 0x4997A, 0x4999A, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.3.5", 0x499DA, 0x499FA, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.3.6", 0x49A3A, 0x49A5A, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.3.7", 0x49A9A, 0x49ABA, indexCPS2Sprites_VSAV1_Stages, 0x8a },

    { L"SS.1.1.1", 0x210aA, 0x210CA, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.1.2", 0x2110A, 0x2112A, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.1.3", 0x211CA, 0x211EA, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.1.4", 0x2116A, 0x2118A, indexCPS2Sprites_VSAV1_Stages, 0x8f },

    { L"SS.1.2.1", 0x210CA, 0x210EA, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.2.2", 0x2112A, 0x2114A, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.2.3", 0x211EA, 0x2120A, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.2.4", 0x2118A, 0x211AA, indexCPS2Sprites_VSAV1_Stages, 0x8f },

    { L"SS.1.3.1", 0x210EA, 0x2110A, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.3.2", 0x2114A, 0x2116A, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.3.3", 0x2120A, 0x2122A, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.3.4", 0x211AA, 0x211CA, indexCPS2Sprites_VSAV1_Stages, 0x8f },

    { L"SS.2.1.1", 0x2122A, 0x2124a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.2.1", 0x2124A, 0x2126a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.3.1", 0x2126A, 0x2128a, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.4.1", 0x2128A, 0x212aa, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.5.1", 0x212aA, 0x212ca, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.6.1", 0x212cA, 0x212ea, indexCPS2Sprites_VSAV1_Stages, 0x90 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_CHATEAU_EX[] =
{
    { L"8BG.0.0.1", 0x3BEF2, 0x3C012, indexCPS2Sprites_VSAV1_Stages, 0x74, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x3C012, 0x3C112, indexCPS2Sprites_VSAV1_Stages, 0x75 },

    { L"16BG.0.0.1", 0x4C6FA, 0x4C8FA, indexCPS2Sprites_VSAV1_Stages, 0x82 },
    { L"16BG.0.0.2", 0x4C8FA, 0x4CAFA, indexCPS2Sprites_VSAV1_Stages, 0x83 },

    { L"32BG.0.0.1", 0x5FD02, 0x5FD22, indexCPS2Sprites_VSAV1_Stages, 0x91 },
    { L"32BG.0.0.2", 0x5FE22, 0x5FFA2, indexCPS2Sprites_VSAV1_Stages, 0x92 },

    { L"SS.0.0.0", 0x21CEA, 0x21E2A, indexCPS2Sprites_VSAV1_Stages, 0x8b },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_CHATEAU_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x3FE52, 0x3FE72, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.1.2", 0x3FEB2, 0x3FED2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.1.3", 0x3FF12, 0x3FF32, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.1.4", 0x3FF72, 0x3FF92, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.1.5", 0x3FFD2, 0x3FFF2, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.1.6", 0x40032, 0x40052, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.1.7", 0x40092, 0x400B2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.1.8", 0x400F2, 0x40112, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.1.9", 0x40152, 0x40172, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.1.10", 0x401B2, 0x401D2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.1.11", 0x40212, 0x40232, indexCPS2Sprites_VSAV1_Stages, 0x80},
    { L"8BG.1.1.12", 0x40272, 0x40292, indexCPS2Sprites_VSAV1_Stages, 0x81 },

    { L"8BG.1.2.1", 0x3FE72, 0x3FE92, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.2.2", 0x3FED2, 0x3FEF2, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.2.3", 0x3FF32, 0x3FF52, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.2.4", 0x3FF92, 0x3FFB2, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.2.5", 0x3FFF2, 0x40012, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.2.6", 0x40052, 0x40072, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.2.7", 0x400B2, 0x400D2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.2.8", 0x40112, 0x40132, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.2.9", 0x40172, 0x40192, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.2.10", 0x401D2, 0x401F2, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.2.11", 0x40232, 0x40252, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.2.12", 0x40292, 0x402B2, indexCPS2Sprites_VSAV1_Stages, 0x81 },

    { L"8BG.1.3.1", 0x3FE92, 0x3FEB2, indexCPS2Sprites_VSAV1_Stages, 0x76, &pairNext11Palettes },
    { L"8BG.1.3.2", 0x3FEF2, 0x3FF12, indexCPS2Sprites_VSAV1_Stages, 0x77 },
    { L"8BG.1.3.3", 0x3FF52, 0x3FF72, indexCPS2Sprites_VSAV1_Stages, 0x78 },
    { L"8BG.1.3.4", 0x3FFB2, 0x3FFD2, indexCPS2Sprites_VSAV1_Stages, 0x79 },
    { L"8BG.1.3.5", 0x40012, 0x40032, indexCPS2Sprites_VSAV1_Stages, 0x7a },
    { L"8BG.1.3.6", 0x40072, 0x40092, indexCPS2Sprites_VSAV1_Stages, 0x7b },
    { L"8BG.1.3.7", 0x400D2, 0x400F2, indexCPS2Sprites_VSAV1_Stages, 0x7c },
    { L"8BG.1.3.8", 0x40132, 0x40152, indexCPS2Sprites_VSAV1_Stages, 0x7d },
    { L"8BG.1.3.9", 0x40192, 0x401B2, indexCPS2Sprites_VSAV1_Stages, 0x7e },
    { L"8BG.1.3.10", 0x401F2, 0x40212, indexCPS2Sprites_VSAV1_Stages, 0x7f },
    { L"8BG.1.3.11", 0x40252, 0x40272, indexCPS2Sprites_VSAV1_Stages, 0x80 },
    { L"8BG.1.3.12", 0x402B2, 0x402D2, indexCPS2Sprites_VSAV1_Stages, 0x81 },

    { L"16BG.1.1.1", 0x4F61A, 0x4F63A, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.1.2", 0x4F67A, 0x4F69A, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.1.3", 0x4F6DA, 0x4F6FA, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.1.4", 0x4F73A, 0x4F75A, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.1.5", 0x4F79A, 0x4F7BA, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.1.6", 0x4F7FA, 0x4F81A, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.1.7", 0x4F85A, 0x4F87A, indexCPS2Sprites_VSAV1_Stages, 0x8a },

    { L"16BG.1.2.1", 0x4F63A, 0x4F65A, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.2.2", 0x4F69A, 0x4F6BA, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.2.3", 0x4F6FA, 0x4F71A, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.2.4", 0x4F75A, 0x4F77A, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.2.5", 0x4F7BA, 0x4F7DA, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.2.6", 0x4F81A, 0x4F83A, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.2.7", 0x4F87A, 0x4F89A, indexCPS2Sprites_VSAV1_Stages, 0x8a },

    { L"16BG.1.3.1", 0x4F65A, 0x4F67A, indexCPS2Sprites_VSAV1_Stages, 0x84, &pairNext6Palettes },
    { L"16BG.1.3.2", 0x4F6BA, 0x4F6DA, indexCPS2Sprites_VSAV1_Stages, 0x85 },
    { L"16BG.1.3.3", 0x4F71A, 0x4F73A, indexCPS2Sprites_VSAV1_Stages, 0x86 },
    { L"16BG.1.3.4", 0x4F77A, 0x4F79A, indexCPS2Sprites_VSAV1_Stages, 0x87 },
    { L"16BG.1.3.5", 0x4F7DA, 0x4F7FA, indexCPS2Sprites_VSAV1_Stages, 0x88 },
    { L"16BG.1.3.6", 0x4F83A, 0x4F85A, indexCPS2Sprites_VSAV1_Stages, 0x89 },
    { L"16BG.1.3.7", 0x4F89A, 0x4F8BA, indexCPS2Sprites_VSAV1_Stages, 0x8a },

    { L"SS.1.1.1", 0x22BCA, 0x22BEA, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.1.2", 0x22C2A, 0x22C4A, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.1.3", 0x22CEA, 0x22D0A, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.1.4", 0x22C8A, 0x22CAA, indexCPS2Sprites_VSAV1_Stages, 0x8f },

    { L"SS.1.2.1", 0x22BEA, 0x22C0A, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.2.2", 0x22C4A, 0x22C6A, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.2.3", 0x22D0A, 0x22D2A, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.2.4", 0x22CAA, 0x22CCA, indexCPS2Sprites_VSAV1_Stages, 0x8f },

    { L"SS.1.3.1", 0x22C0A, 0x22C2A, indexCPS2Sprites_VSAV1_Stages, 0x8c, &pairNext3Palettes },
    { L"SS.1.3.2", 0x22C6A, 0x22C8A, indexCPS2Sprites_VSAV1_Stages, 0x8d },
    { L"SS.1.3.3", 0x22D2A, 0x22D4A, indexCPS2Sprites_VSAV1_Stages, 0x8e },
    { L"SS.1.3.4", 0x22CCA, 0x22CEA, indexCPS2Sprites_VSAV1_Stages, 0x8f },

    { L"SS.2.1.1", 0x22D4A, 0x22D6A, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.2.1", 0x22D6A, 0x22D8A, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.3.1", 0x22D8A, 0x22DAA, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.4.1", 0x22DAA, 0x22DCA, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.5.1", 0x22DCA, 0x22DEA, indexCPS2Sprites_VSAV1_Stages, 0x90 },
    { L"SS.2.6.1", 0x22DEA, 0x22E0A, indexCPS2Sprites_VSAV1_Stages, 0x90 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FEAST[] =
{
    { L"8BG.0.0.1", 0x35892, 0x35a32, indexCPS2Sprites_VSAV1_Stages, 0x04, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x35a32, 0x35c12, indexCPS2Sprites_VSAV1_Stages, 0x05 },

    { L"32BG.0.0.0", 0x57d62, 0x57f42, indexCPS2Sprites_VSAV1_Stages, 0x14 },

    { L"SS.0.0.0", 0x1FCCa, 0x1FE0A, indexCPS2Sprites_VSAV1_Stages, 0x20 },

    { L"16BG.0.0.0", 0x45bba, 0x45cfa, indexCPS2Sprites_VSAV1_Stages, 0x26 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FEAST_PARTS[] =
{
    { L"8BG.1.1.1", 0x39432, 0x39452, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.1.2", 0x394D2, 0x394F2, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.1.3", 0x39572, 0x39592, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.1.4", 0x39612, 0x39632, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.1.5", 0x396B2, 0x396D2, indexCPS2Sprites_VSAV1_Stages, 0x0a },

    { L"8BG.1.2.1", 0x39452, 0x39472, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.2.2", 0x394F2, 0x39512, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.2.3", 0x39592, 0x395B2, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.2.4", 0x39632, 0x39652, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.2.5", 0x396D2, 0x396F2, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.3.1", 0x39472, 0x39492, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.3.2", 0x39512, 0x39532, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.3.3", 0x395B2, 0x395D2, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.3.4", 0x39652, 0x39672, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.3.5", 0x396F2, 0x39712, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.4.1", 0x39492, 0x394B2, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.4.2", 0x39532, 0x39552, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.4.3", 0x395D2, 0x395F2, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.4.4", 0x39672, 0x39692, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.4.5", 0x39712, 0x39732, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.5.1", 0x394B2, 0x394D2, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.5.2", 0x39552, 0x39572, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.5.3", 0x395F2, 0x39612, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.5.4", 0x39692, 0x396B2, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.5.5", 0x39732, 0x39752, indexCPS2Sprites_VSAV1_Stages, 0x0a },

    { L"8BG.2.1.1", 0x38A52, 0x38A72, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.1.2", 0x38AD2, 0x38AF2, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.1.3", 0x38B52, 0x38B72, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.1.4", 0x38BD2, 0x38BF2, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.1.5", 0x38C52, 0x38C72, indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.2.1", 0x38A72, 0x38A92, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.2.2", 0x38AF2, 0x38B12, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.2.3", 0x38B72, 0x38B92, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.2.4", 0x38BF2, 0x38C12, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.2.5", 0x38C72, 0x38C92, indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.3.1", 0x38A92, 0x38AB2, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.3.2", 0x38B12, 0x38B32, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.3.3", 0x38B92, 0x38BB2, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.3.4", 0x38C12, 0x38C32, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.3.5", 0x39752, 0x39772, indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.4.1", 0x38AB2, 0x38AD2, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.4.2", 0x38B32, 0x38B52, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.4.3", 0x38BB2, 0x38BD2, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.4.4", 0x38C32, 0x38C52, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.4.5", 0x39772, 0x39792, indexCPS2Sprites_VSAV1_Stages, 0x0f },

    { L"8BG.3.1.1", 0x38892, 0x388B2, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.1.2", 0x38932, 0x38952, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.2.1", 0x388B2, 0x388D2, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.2.2", 0x38952, 0x38972, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.3.1", 0x388D2, 0x388F2, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.3.2", 0x38972, 0x38992, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.4.1", 0x388F2, 0x38912, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.4.2", 0x38992, 0x389B2, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.5.1", 0x38912, 0x38932, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.5.2", 0x389B2, 0x389D2, indexCPS2Sprites_VSAV1_Stages, 0x11 },

    { L"8BG.4.1.1", 0x389D2, 0x389F2, indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.1.2", 0x38A12, 0x38A32, indexCPS2Sprites_VSAV1_Stages, 0x13 },
    { L"8BG.4.2.1", 0x389F2, 0x38A12, indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.2.2", 0x38A32, 0x38A52, indexCPS2Sprites_VSAV1_Stages, 0x13 },

    { L"32BG.1.1.1", 0x5b022, 0x5B042, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.1.2", 0x5B0E2, 0x5B102, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.1.3", 0x5B1A2, 0x5B1C2, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.1.4", 0x5B262, 0x5B282, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.1.5", 0x5B322, 0x5B342, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.1.6", 0x5B3E2, 0x5B402, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.1.7", 0x5B4A2, 0x5B4C2, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.2.1", 0x5B042, 0x5B062, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.2.2", 0x5B102, 0x5B122, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.2.3", 0x5B1C2, 0x5B1E2, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.2.4", 0x5B282, 0x5B2A2, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.2.5", 0x5B342, 0x5B362, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.2.6", 0x5B402, 0x5B422, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.2.7", 0x5B4C2, 0x5B4E2, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.3.1", 0x5B062, 0x5B082, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.3.2", 0x5B122, 0x5B142, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.3.3", 0x5B1E2, 0x5B202, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.3.4", 0x5B2A2, 0x5B2C2, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.3.5", 0x5B362, 0x5B382, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.3.6", 0x5B422, 0x5B442, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.3.7", 0x5B4E2, 0x5B502, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.4.1", 0x5B082, 0x5B0A2, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.4.2", 0x5B142, 0x5B162, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.4.3", 0x5B202, 0x5B222, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.4.4", 0x5B2C2, 0x5B2E2, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.4.5", 0x5B382, 0x5B3A2, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.4.6", 0x5B442, 0x5B462, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.4.7", 0x5B502, 0x5B522, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.5.1", 0x5B0A2, 0x5B0C2, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.5.2", 0x5B162, 0x5B182, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.5.3", 0x5B222, 0x5B242, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.5.4", 0x5B2E2, 0x5B302, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.5.5", 0x5B3A2, 0x5B3C2, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.5.6", 0x5B462, 0x5B482, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.5.7", 0x5B522, 0x5B542, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.6.1", 0x5B0C2, 0x5B0E2, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.6.2", 0x5B182, 0x5B1A2, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.6.3", 0x5B242, 0x5B262, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.6.4", 0x5B302, 0x5B322, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.6.5", 0x5B3C2, 0x5B3E2, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.6.6", 0x5B482, 0x5B4A2, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.6.7", 0x5B542, 0x5B562, indexCPS2Sprites_VSAV1_Stages, 0x1b },

    { L"32BG.2.1.1", 0x5ae22, 0x5AE42, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.1.2", 0x5AEA2, 0x5AEC2, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.1.3", 0x5AF22, 0x5AF42, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.1.4", 0x5AFA2, 0x5AFC2, indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.2.1", 0x5AE42, 0x5AE62, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.2.2", 0x5AEC2, 0x5AEE2, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.2.3", 0x5AF42, 0x5AF62, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.2.4", 0x5AFC2, 0x5AFE2, indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.3.1", 0x5AE62, 0x5AE82, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.3.2", 0x5AEE2, 0x5AF02, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.3.3", 0x5AF62, 0x5AF82, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.3.4", 0x5AFE2, 0x5B002, indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.4.1", 0x5AE82, 0x5AEA2, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.4.2", 0x5AF02, 0x5AF22, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.4.3", 0x5AF82, 0x5AFA2, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.4.4", 0x5B002, 0x5B022, indexCPS2Sprites_VSAV1_Stages, 0x1f },

    { L"SS.1.1.1", 0x20c4a, 0x20c6a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.1.2", 0x20d4a, 0x20d6a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.2.1", 0x20c6a, 0x20c8a, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.2.2", 0x20d6a, 0x20d8a, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.3.1", 0x20c8a, 0x20caa, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.3.2", 0x20d8a, 0x20daa, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.4.1", 0x20caa, 0x20cca, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.4.2", 0x20daa, 0x20dca, indexCPS2Sprites_VSAV1_Stages, 0x22 },

    { L"SS.2.1.1", 0x20dca, 0x20dea, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.2.1", 0x20dea, 0x20e0a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.3.1", 0x20e0a, 0x20e2a, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.4.1", 0x20e2a, 0x20e4a, indexCPS2Sprites_VSAV1_Stages, 0x23 },

    { L"SS.3.1.1", 0x20e4a, 0x20e6a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.2.1", 0x20e6a, 0x20e8a, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.3.1", 0x20e8a, 0x20eaa, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.4.1", 0x20eaa, 0x20eca, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.5.1", 0x20eca, 0x20eea, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.6.1", 0x20eea, 0x20f0a, indexCPS2Sprites_VSAV1_Stages, 0x24 },

    { L"SS.4.1.1", 0x20f0a, 0x20f2a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.2.1", 0x20f2a, 0x20f4a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.3.1", 0x20f4a, 0x20f6a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.4.1", 0x20f6a, 0x20f8a, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.5.1", 0x20f8a, 0x20faa, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.6.1", 0x20faa, 0x20fca, indexCPS2Sprites_VSAV1_Stages, 0x25 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FEAST_EX[] =
{
    { L"8BG.0.0.1", 0x3ADB2, 0x3AF52, indexCPS2Sprites_VSAV1_Stages, 0x04, &pairFullyLinkedNode },
    { L"8BG.0.0.2", 0x3AF52, 0x3B132, indexCPS2Sprites_VSAV1_Stages, 0x05 },

    { L"32BG.0.0.0", 0x5EBC2, 0x5EDA2, indexCPS2Sprites_VSAV1_Stages, 0x14 },

    { L"SS.0.0.0", 0x217EA, 0x2192A, indexCPS2Sprites_VSAV1_Stages, 0x20 },

    { L"16BG.0.0.0", 0x4B9BA, 0x4BAFA, indexCPS2Sprites_VSAV1_Stages, 0x26 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FEAST_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x3E952, 0x3E972, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.1.2", 0x3E9F2, 0x3EA12, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.1.3", 0x3EA92, 0x3EAB2, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.1.4", 0x3EB32, 0x3EB52, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.1.5", 0x3EBD2, 0x3EBF2, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.2.1", 0x3E972, 0x3E992, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.2.2", 0x3EA12, 0x3EA32, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.2.3", 0x3EAB2, 0x3EAD2, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.2.4", 0x3EB52, 0x3EB72, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.2.5", 0x3EBF2, 0x3EC12, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.3.1", 0x3E992, 0x3E9B2, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.3.2", 0x3EA32, 0x3EA52, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.3.3", 0x3EAD2, 0x3EAF2, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.3.4", 0x3EB72, 0x3EB92, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.3.5", 0x3EC12, 0x3EC32, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.4.1", 0x3E9B2, 0x3E9D2, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.4.2", 0x3EA52, 0x3EA72, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.4.3", 0x3EAF2, 0x3EB12, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.4.4", 0x3EB92, 0x3EBB2, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.4.5", 0x3EC32, 0x3EC52, indexCPS2Sprites_VSAV1_Stages, 0x0a },
    { L"8BG.1.5.1", 0x3E9D2, 0x3E9F2, indexCPS2Sprites_VSAV1_Stages, 0x06, &pairNext4Palettes },
    { L"8BG.1.5.2", 0x3EA72, 0x3EA92, indexCPS2Sprites_VSAV1_Stages, 0x07 },
    { L"8BG.1.5.3", 0x3EB12, 0x3EB32, indexCPS2Sprites_VSAV1_Stages, 0x08 },
    { L"8BG.1.5.4", 0x3EBB2, 0x3EBD2, indexCPS2Sprites_VSAV1_Stages, 0x09 },
    { L"8BG.1.5.5", 0x3EC52, 0x3EC72, indexCPS2Sprites_VSAV1_Stages, 0x0a },

    { L"8BG.2.1.1", 0x3DF72, 0x3DF92, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.1.2", 0x3DFF2, 0x3E012, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.1.3", 0x3E072, 0x3E092, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.1.4", 0x3E0F2, 0x3E112, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.1.5", 0x3E172, 0x3E192, indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.2.1", 0x3DF92, 0x3DFB2, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.2.2", 0x3E012, 0x3E032, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.2.3", 0x3E092, 0x3E0B2, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.2.4", 0x3E112, 0x3E132, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.2.5", 0x3E192, 0x3E1B2, indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.3.1", 0x3DFB2, 0x3DFD2, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.3.2", 0x3E032, 0x3E052, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.3.3", 0x3E0B2, 0x3E0D2, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.3.4", 0x3E132, 0x3E152, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.3.5", 0x3EC72, 0x3EC92, indexCPS2Sprites_VSAV1_Stages, 0x0f },
    { L"8BG.2.4.1", 0x3DFD2, 0x3DFF2, indexCPS2Sprites_VSAV1_Stages, 0x0b, &pairNext4Palettes },
    { L"8BG.2.4.2", 0x3E052, 0x3E072, indexCPS2Sprites_VSAV1_Stages, 0x0c },
    { L"8BG.2.4.3", 0x3E0D2, 0x3E0F2, indexCPS2Sprites_VSAV1_Stages, 0x0d },
    { L"8BG.2.4.4", 0x3E152, 0x3E172, indexCPS2Sprites_VSAV1_Stages, 0x0e },
    { L"8BG.2.4.5", 0x3EC92, 0x3ECB2, indexCPS2Sprites_VSAV1_Stages, 0x0f },

    { L"8BG.3.1.1", 0x3DDB2, 0x3DDD2, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.1.2", 0x3DE52, 0x3DE72, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.2.1", 0x3DDD2, 0x3DDF2, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.2.2", 0x3DE72, 0x3DE92, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.3.1", 0x3DDF2, 0x3DE12, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.3.2", 0x3DE92, 0x3DEB2, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.4.1", 0x3DE12, 0x3DE32, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.4.2", 0x3DEB2, 0x3DED2, indexCPS2Sprites_VSAV1_Stages, 0x11 },
    { L"8BG.3.5.1", 0x3DE32, 0x3DE52, indexCPS2Sprites_VSAV1_Stages, 0x10, &pairNext },
    { L"8BG.3.5.2", 0x3DED2, 0x3DEF2, indexCPS2Sprites_VSAV1_Stages, 0x11 },

    { L"8BG.4.1.1", 0x3DEF2, 0x3DF12, indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.1.2", 0x3DF32, 0x3DF52, indexCPS2Sprites_VSAV1_Stages, 0x13 },
    { L"8BG.4.2.1", 0x3DF12, 0x3DF32, indexCPS2Sprites_VSAV1_Stages, 0x12, &pairNext },
    { L"8BG.4.2.2", 0x3DF52, 0x3DF72, indexCPS2Sprites_VSAV1_Stages, 0x13 },

    { L"32BG.1.1.1", 0x61E82, 0x61EA2, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.1.2", 0x61F42, 0x61F62, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.1.3", 0x62002, 0x62022, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.1.4", 0x620C2, 0x620E2, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.1.5", 0x62182, 0x621A2, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.1.6", 0x62242, 0x62262, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.1.7", 0x62302, 0x62322, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.2.1", 0x61EA2, 0x61EC2, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.2.2", 0x61F62, 0x61F82, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.2.3", 0x62022, 0x62042, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.2.4", 0x620E2, 0x62102, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.2.5", 0x621A2, 0x621C2, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.2.6", 0x62262, 0x62282, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.2.7", 0x62322, 0x62342, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.3.1", 0x61EC2, 0x61EE2, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.3.2", 0x61F82, 0x61FA2, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.3.3", 0x62042, 0x62062, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.3.4", 0x62102, 0x62122, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.3.5", 0x621C2, 0x621E2, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.3.6", 0x62282, 0x622A2, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.3.7", 0x62342, 0x62362, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.4.1", 0x61EE2, 0x61F02, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.4.2", 0x61FA2, 0x61FC2, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.4.3", 0x62062, 0x62082, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.4.4", 0x62122, 0x62142, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.4.5", 0x621E2, 0x62202, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.4.6", 0x622A2, 0x622C2, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.4.7", 0x62362, 0x62382, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.5.1", 0x61F02, 0x61F22, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.5.2", 0x61FC2, 0x61FE2, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.5.3", 0x62082, 0x620A2, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.5.4", 0x62142, 0x62162, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.5.5", 0x62202, 0x62222, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.5.6", 0x622C2, 0x622E2, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.5.7", 0x62382, 0x623A2, indexCPS2Sprites_VSAV1_Stages, 0x1b },
    { L"32BG.1.6.1", 0x61F22, 0x61F42, indexCPS2Sprites_VSAV1_Stages, 0x15, &pairNext6Palettes },
    { L"32BG.1.6.2", 0x61FE2, 0x62002, indexCPS2Sprites_VSAV1_Stages, 0x16 },
    { L"32BG.1.6.3", 0x620A2, 0x620C2, indexCPS2Sprites_VSAV1_Stages, 0x17 },
    { L"32BG.1.6.4", 0x62162, 0x62182, indexCPS2Sprites_VSAV1_Stages, 0x18 },
    { L"32BG.1.6.5", 0x62222, 0x62242, indexCPS2Sprites_VSAV1_Stages, 0x19 },
    { L"32BG.1.6.6", 0x622E2, 0x62302, indexCPS2Sprites_VSAV1_Stages, 0x1a },
    { L"32BG.1.6.7", 0x623A2, 0x623C2, indexCPS2Sprites_VSAV1_Stages, 0x1b },

    { L"32BG.2.1.1", 0x61C82, 0x61CA2, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.1.2", 0x61D02, 0x61D22, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.1.3", 0x61D82, 0x61DA2, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.1.4", 0x61E02, 0x61E22, indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.2.1", 0x61CA2, 0x61CC2, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.2.2", 0x61D22, 0x61D42, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.2.3", 0x61DA2, 0x61DC2, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.2.4", 0x61E22, 0x61E42, indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.3.1", 0x61CC2, 0x61CE2, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.3.2", 0x61D42, 0x61D62, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.3.3", 0x61DC2, 0x61DE2, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.3.4", 0x61E42, 0x61E62, indexCPS2Sprites_VSAV1_Stages, 0x1f },
    { L"32BG.2.4.1", 0x61CE2, 0x61D02, indexCPS2Sprites_VSAV1_Stages, 0x1c, &pairNext3Palettes },
    { L"32BG.2.4.2", 0x61D62, 0x61D82, indexCPS2Sprites_VSAV1_Stages, 0x1d },
    { L"32BG.2.4.3", 0x61DE2, 0x61E02, indexCPS2Sprites_VSAV1_Stages, 0x1e },
    { L"32BG.2.4.4", 0x61E62, 0x61E82, indexCPS2Sprites_VSAV1_Stages, 0x1f },

    { L"SS.1.1.1", 0x2276A, 0x2278A, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.1.2", 0x2286A, 0x2288A, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.2.1", 0x2278A, 0x227AA, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.2.2", 0x2288A, 0x228AA, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.3.1", 0x227AA, 0x227CA, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.3.2", 0x228AA, 0x228CA, indexCPS2Sprites_VSAV1_Stages, 0x22 },
    { L"SS.1.4.1", 0x227CA, 0x227EA, indexCPS2Sprites_VSAV1_Stages, 0x21, &pairNext },
    { L"SS.1.4.2", 0x228CA, 0x228EA, indexCPS2Sprites_VSAV1_Stages, 0x22 },

    { L"SS.2.1.1", 0x228EA, 0x2290A, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.2.1", 0x2290A, 0x2292A, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.3.1", 0x2292A, 0x2294A, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.2.4.1", 0x2294A, 0x2296A, indexCPS2Sprites_VSAV1_Stages, 0x23 },
    { L"SS.3.1.1", 0x2296A, 0x2298A, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.2.1", 0x2298A, 0x229AA, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.3.1", 0x229AA, 0x229CA, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.4.1", 0x229CA, 0x229EA, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.5.1", 0x229EA, 0x22A0A, indexCPS2Sprites_VSAV1_Stages, 0x24 },
    { L"SS.3.6.1", 0x22A0A, 0x22A2A, indexCPS2Sprites_VSAV1_Stages, 0x24 },

    { L"SS.4.1.1", 0x22A2A, 0x22A4A, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.2.1", 0x22A4A, 0x22A6A, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.3.1", 0x22A6A, 0x22A8A, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.4.1", 0x22A8A, 0x22AAA, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.5.1", 0x22AAA, 0x22ACA, indexCPS2Sprites_VSAV1_Stages, 0x25 },
    { L"SS.4.6.1", 0x22ACA, 0x22AEA, indexCPS2Sprites_VSAV1_Stages, 0x25 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FETUS[] =
{
    { L"32BG.0.0.1", 0x5a962, 0x5aa02, indexCPS2Sprites_VSAV1_Stages, 0xa9, &pairFullyLinkedNode },
    { L"32BG.0.0.2", 0x5ab62, 0x5ab82, indexCPS2Sprites_VSAV1_Stages, 0xaa },
    { L"8BG.0.0.1", 0x38492, 0x38672, indexCPS2Sprites_VSAV1_Stages, 0xab },
    { L"8BG.0.0.2", 0x38692, 0x38712, indexCPS2Sprites_VSAV1_Stages, 0xac },
    { L"16BG.0.0.1", 0x484fa, 0x486ba, indexCPS2Sprites_VSAV1_Stages, 0xad },
    { L"16BG.0.0.2", 0x486fa, 0x4883a, indexCPS2Sprites_VSAV1_Stages, 0xae },
    { L"SS.0.0.0", 0x20A8A, 0x20BCA, indexCPS2Sprites_VSAV1_Stages, 0xaf },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FETUS_EX[] =
{
    { L"32BG.0.0.1", 0x5a962 + 0x6e60, 0x5aa02 + 0x6e60, indexCPS2Sprites_VSAV1_Stages, 0xa9, &pairFullyLinkedNode },
    { L"32BG.0.0.2", 0x5ab62 + 0x6e60, 0x5ab82 + 0x6e60, indexCPS2Sprites_VSAV1_Stages, 0xaa },
    { L"8BG.0.0.1", 0x38492 + 0x5520, 0x38672 + 0x5520, indexCPS2Sprites_VSAV1_Stages, 0xab },
    { L"8BG.0.0.2", 0x38692 + 0x5520, 0x38712 + 0x5520, indexCPS2Sprites_VSAV1_Stages, 0xac },
    { L"16BG.0.0.1", 0x484fa + 0x5e00, 0x486ba + 0x5e00, indexCPS2Sprites_VSAV1_Stages, 0xad },
    { L"16BG.0.0.2", 0x486fa + 0x5e00, 0x4883a + 0x5e00, indexCPS2Sprites_VSAV1_Stages, 0xae },
    { L"SS.0.0.0", 0x20A8A + 0x1b20, 0x20BCA + 0x1b20, indexCPS2Sprites_VSAV1_Stages, 0xaf },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FETUS_PARTS[] =
{
    { L"16x16 Fades", 0x488fa, 0x4899a },
    { L"32BG Fades", 0x5d102, 0x5d162 },
    { L"32BG.0.0.2", 0x58762, 0x587a2 },
    { L"8BG (Unknown 2)", 0x38672, 0x38692 },

    { L"32BG.1.1.1", 0x5d042, 0x5d062, indexCPS2Sprites_VSAV1_Stages, -1, &pairNextAndNext },
    { L"32BG.1.1.2", 0x5d082, 0x5d0a2 },
    { L"32BG.1.1.3", 0x5d0c2, 0x5d0e2 },

    { L"32BG.1.2.1", 0x5d062, 0x5d082, indexCPS2Sprites_VSAV1_Stages, -1, &pairNextAndNext },
    { L"32BG.1.2.2", 0x5d0a2, 0x5d0c2 },
    { L"32BG.1.2.3", 0x5d0e2, 0x5d102 },

    { L"8BG.1.1.1", 0x38C92, 0x38d72, indexCPS2Sprites_VSAV1_Stages, -1, &pairNext },
    { L"8BG.1.1.2", 0x38d72, 0x38e52 },

    { L"SS.1.0.1", 0x2168a, 0x216ca, indexCPS2Sprites_VSAV1_Stages, -1, &pairNext },
    { L"SS.1.0.2", 0x216ca, 0x2170a },

    { L"SS.2.0.1", 0x215ca, 0x2168a },

    { L"SS.3.0.1", 0x2170a,  0x217ea },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FETUS_EX_PARTS[] =
{
    { L"16x16 Fades", 0x488fa + 0x5e00, 0x4899a + 0x5e00 },
    { L"32BG Fades", 0x5d102 + 0x6e60, 0x5d162 + 0x6e60 },
    { L"32BG.0.0.2", 0x58762 + 0x6e60, 0x587a2 + 0x6e60 },
    { L"8BG (Unknown 2)", 0x38672 + 0x5520, 0x38692 + 0x5520 },

    { L"32BG.1.1.1", 0x5d042 + 0x6e60, 0x5d062 + 0x6e60, indexCPS2Sprites_VSAV1_Stages, -1, &pairNextAndNext },
    { L"32BG.1.1.2", 0x5d082 + 0x6e60, 0x5d0a2 + 0x6e60 },
    { L"32BG.1.1.3", 0x5d0c2 + 0x6e60, 0x5d0e2 + 0x6e60 },

    { L"32BG.1.2.1", 0x5d062 + 0x6e60, 0x5d082 + 0x6e60, indexCPS2Sprites_VSAV1_Stages, -1, &pairNextAndNext },
    { L"32BG.1.2.2", 0x5d0a2 + 0x6e60, 0x5d0c2 + 0x6e60 },
    { L"32BG.1.2.3", 0x5d0e2 + 0x6e60, 0x5d102 + 0x6e60 },

    { L"8BG.1.1.1", 0x38C92 + 0x5520, 0x38d72 + 0x5520, indexCPS2Sprites_VSAV1_Stages, -1, &pairNext },
    { L"8BG.1.1.2", 0x38d72 + 0x5520, 0x38e52 + 0x5520 },

    { L"SS.1.0.1", 0x2168a + 0x1b20, 0x216ca + 0x1b20, indexCPS2Sprites_VSAV1_Stages, -1, &pairNext },
    { L"SS.1.0.2", 0x216ca + 0x1b20, 0x2170a + 0x1b20 },

    { L"SS.2.0.1", 0x215ca + 0x1b20, 0x2168a + 0x1b20 },

    { L"SS.3.0.1", 0x2170a + 0x1b20,  0x217ea + 0x1b20 },
};


const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FOREVER[] =
{
    { L"16BG.0.0.0", 0x478fA, 0x47a7a, indexCPS2Sprites_VSAV1_Stages, 0x4a, &pairFullyLinkedNode },

    { L"32BG.0.0.1", 0x59d62, 0x59ec2, indexCPS2Sprites_VSAV1_Stages, 0x4c },
    { L"32BG.0.0.2", 0x59ec2, 0x5a022, indexCPS2Sprites_VSAV1_Stages, 0x4d },

    { L"SS.0.0.0", 0x206CA, 0x2080A, indexCPS2Sprites_VSAV1_Stages, 0x58 },

    { L"8BG.0.0.1", 0x37892, 0x379f2, indexCPS2Sprites_VSAV1_Stages, 0x5f },
    { L"8BG.0.0.2", 0x379f2, 0x37bb2, indexCPS2Sprites_VSAV1_Stages, 0x60 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FOREVER_PARTS[] =
{
    { L"32BG.1.1.1", 0x5B562, 0x5B582, indexCPS2Sprites_VSAV1_Stages, 0x4e, &pairNext7Palettes },
    { L"32BG.1.1.2", 0x5B5A2, 0x5B5C2, indexCPS2Sprites_VSAV1_Stages, 0x4f },
    { L"32BG.1.1.3", 0x5B5E2, 0x5B602, indexCPS2Sprites_VSAV1_Stages, 0x50 },
    { L"32BG.1.1.4", 0x5B622, 0x5B642, indexCPS2Sprites_VSAV1_Stages, 0x51 },
    { L"32BG.1.1.5", 0x5B662, 0x5B682, indexCPS2Sprites_VSAV1_Stages, 0x52 },
    { L"32BG.1.1.6", 0x5B6A2, 0x5B6C2, indexCPS2Sprites_VSAV1_Stages, 0x53 },
    { L"32BG.1.1.7", 0x5B6E2, 0x5B702, indexCPS2Sprites_VSAV1_Stages, 0x54 },
    { L"32BG.1.1.8", 0x5B722, 0x5B742, indexCPS2Sprites_VSAV1_Stages, 0x55 },

    { L"32BG.1.2.1", 0x5B582, 0x5B5A2, indexCPS2Sprites_VSAV1_Stages, 0x4e, &pairNext7Palettes },
    { L"32BG.1.2.2", 0x5B5C2, 0x5B5E2, indexCPS2Sprites_VSAV1_Stages, 0x4f },
    { L"32BG.1.2.3", 0x5B602, 0x5B622, indexCPS2Sprites_VSAV1_Stages, 0x50 },
    { L"32BG.1.2.4", 0x5B642, 0x5B662, indexCPS2Sprites_VSAV1_Stages, 0x51 },
    { L"32BG.1.2.5", 0x5B682, 0x5B6A2, indexCPS2Sprites_VSAV1_Stages, 0x52 },
    { L"32BG.1.2.6", 0x5B6C2, 0x5B6E2, indexCPS2Sprites_VSAV1_Stages, 0x53 },
    { L"32BG.1.2.7", 0x5B702, 0x5B722, indexCPS2Sprites_VSAV1_Stages, 0x54 },
    { L"32BG.1.2.8", 0x5B742, 0x5B762, indexCPS2Sprites_VSAV1_Stages, 0x55 },

    { L"32BG.2.1.1", 0x5b762, 0x5B782, indexCPS2Sprites_VSAV1_Stages, 0x56, &pairNext },
    { L"32BG.2.1.2", 0x5B7A2, 0x5B7C2, indexCPS2Sprites_VSAV1_Stages, 0x57 },

    { L"32BG.2.2.1", 0x5B782, 0x5B7A2, indexCPS2Sprites_VSAV1_Stages, 0x56, &pairNext },
    { L"32BG.2.2.2", 0x5B7C2, 0x5B7E2, indexCPS2Sprites_VSAV1_Stages, 0x57 },

    { L"16BG.1.1.1", 0x4899A, 0x489ba, indexCPS2Sprites_VSAV1_Stages, 0x4b },
    { L"16BG.1.2.1", 0x48b5A, 0x48b7a, indexCPS2Sprites_VSAV1_Stages, 0x4b },

    { L"SS.1.1.1", 0x213eA, 0x2140A, indexCPS2Sprites_VSAV1_Stages, 0x59, &pairNext5Palettes },
    { L"SS.1.1.2", 0x2142A, 0x2144A, indexCPS2Sprites_VSAV1_Stages, 0x5a },
    { L"SS.1.1.3", 0x2146A, 0x2148A, indexCPS2Sprites_VSAV1_Stages, 0x5b },
    { L"SS.1.1.4", 0x214AA, 0x214CA, indexCPS2Sprites_VSAV1_Stages, 0x5c },
    { L"SS.1.1.5", 0x214EA, 0x2150A, indexCPS2Sprites_VSAV1_Stages, 0x5d },
    { L"SS.1.1.6", 0x2152A, 0x2154A, indexCPS2Sprites_VSAV1_Stages, 0x5e },

    { L"SS.1.2.1", 0x2140A, 0x2142A, indexCPS2Sprites_VSAV1_Stages, 0x59, &pairNext5Palettes },
    { L"SS.1.2.2", 0x2144A, 0x2146A, indexCPS2Sprites_VSAV1_Stages, 0x5a },
    { L"SS.1.2.3", 0x2148A, 0x214AA, indexCPS2Sprites_VSAV1_Stages, 0x5b },
    { L"SS.1.2.4", 0x214CA, 0x214EA, indexCPS2Sprites_VSAV1_Stages, 0x5c },
    { L"SS.1.2.5", 0x2150A, 0x2152A, indexCPS2Sprites_VSAV1_Stages, 0x5d },
    { L"SS.1.2.6", 0x2154A, 0x2156A, indexCPS2Sprites_VSAV1_Stages, 0x5e },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FOREVER_EX[] =
{
    { L"16BG.0.0.0", 0x4D6FA, 0x4D87A, indexCPS2Sprites_VSAV1_Stages, 0x4a, &pairFullyLinkedNode },

    { L"32BG.0.0.1", 0x60BC2, 0x60D22, indexCPS2Sprites_VSAV1_Stages, 0x4c },
    { L"32BG.0.0.2", 0x60D22, 0x60E82, indexCPS2Sprites_VSAV1_Stages, 0x4d },

    { L"SS.0.0.0", 0x221EA, 0x2232A, indexCPS2Sprites_VSAV1_Stages, 0x58 },

    { L"8BG.0.0.1", 0x3CDB2, 0x3CF12, indexCPS2Sprites_VSAV1_Stages, 0x5f },
    { L"8BG.0.0.2", 0x3CF12, 0x3D0D2, indexCPS2Sprites_VSAV1_Stages, 0x60 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_FOREVER_EX_PARTS[] =
{
    { L"32BG.1.1.1", 0x623C2, 0x623E2, indexCPS2Sprites_VSAV1_Stages, 0x4e, &pairNext7Palettes },
    { L"32BG.1.1.2", 0x62402, 0x62422, indexCPS2Sprites_VSAV1_Stages, 0x4f },
    { L"32BG.1.1.3", 0x62442, 0x62462, indexCPS2Sprites_VSAV1_Stages, 0x50 },
    { L"32BG.1.1.4", 0x62482, 0x624A2, indexCPS2Sprites_VSAV1_Stages, 0x51 },
    { L"32BG.1.1.5", 0x624C2, 0x624E2, indexCPS2Sprites_VSAV1_Stages, 0x52 },
    { L"32BG.1.1.6", 0x62502, 0x62522, indexCPS2Sprites_VSAV1_Stages, 0x53 },
    { L"32BG.1.1.7", 0x62542, 0x62562, indexCPS2Sprites_VSAV1_Stages, 0x54 },
    { L"32BG.1.1.8", 0x62582, 0x625A2, indexCPS2Sprites_VSAV1_Stages, 0x55 },
    { L"32BG.1.2.1", 0x623E2, 0x62402, indexCPS2Sprites_VSAV1_Stages, 0x4e, &pairNext7Palettes },
    { L"32BG.1.2.2", 0x62422, 0x62442, indexCPS2Sprites_VSAV1_Stages, 0x4f },
    { L"32BG.1.2.3", 0x62462, 0x62482, indexCPS2Sprites_VSAV1_Stages, 0x50 },
    { L"32BG.1.2.4", 0x624A2, 0x624C2, indexCPS2Sprites_VSAV1_Stages, 0x51 },
    { L"32BG.1.2.5", 0x624E2, 0x62502, indexCPS2Sprites_VSAV1_Stages, 0x52 },
    { L"32BG.1.2.6", 0x62522, 0x62542, indexCPS2Sprites_VSAV1_Stages, 0x53 },
    { L"32BG.1.2.7", 0x62562, 0x62582, indexCPS2Sprites_VSAV1_Stages, 0x54 },
    { L"32BG.1.2.8", 0x625A2, 0x625C2, indexCPS2Sprites_VSAV1_Stages, 0x55 },

    { L"32BG.2.1.1", 0x625C2, 0x625E2, indexCPS2Sprites_VSAV1_Stages, 0x56, &pairNext },
    { L"32BG.2.1.2", 0x62602, 0x62622, indexCPS2Sprites_VSAV1_Stages, 0x57 },
    { L"32BG.2.2.1", 0x625E2, 0x62602, indexCPS2Sprites_VSAV1_Stages, 0x56, &pairNext },
    { L"32BG.2.2.2", 0x62622, 0x62642, indexCPS2Sprites_VSAV1_Stages, 0x57 },

    { L"16BG.1.1.1", 0x4E79A, 0x4E7BA, indexCPS2Sprites_VSAV1_Stages, 0x4b },
    { L"16BG.1.2.1", 0x4E95A, 0x4E97A, indexCPS2Sprites_VSAV1_Stages, 0x4b },

    { L"SS.1.1.1", 0x22F0A, 0x22F2A, indexCPS2Sprites_VSAV1_Stages, 0x59, &pairNext5Palettes },
    { L"SS.1.1.2", 0x22F4A, 0x22F6A, indexCPS2Sprites_VSAV1_Stages, 0x5a },
    { L"SS.1.1.3", 0x22F8A, 0x22FAA, indexCPS2Sprites_VSAV1_Stages, 0x5b },
    { L"SS.1.1.4", 0x22FCA, 0x22FEA, indexCPS2Sprites_VSAV1_Stages, 0x5c },
    { L"SS.1.1.5", 0x2300A, 0x2302A, indexCPS2Sprites_VSAV1_Stages, 0x5d },
    { L"SS.1.1.6", 0x2304A, 0x2306A, indexCPS2Sprites_VSAV1_Stages, 0x5e },

    { L"SS.1.2.1", 0x22F2A, 0x22F4A, indexCPS2Sprites_VSAV1_Stages, 0x59, &pairNext5Palettes },
    { L"SS.1.2.2", 0x22F6A, 0x22F8A, indexCPS2Sprites_VSAV1_Stages, 0x5a },
    { L"SS.1.2.3", 0x22FAA, 0x22FCA, indexCPS2Sprites_VSAV1_Stages, 0x5b },
    { L"SS.1.2.4", 0x22FEA, 0x2300A, indexCPS2Sprites_VSAV1_Stages, 0x5c },
    { L"SS.1.2.5", 0x2302A, 0x2304A, indexCPS2Sprites_VSAV1_Stages, 0x5d },
    { L"SS.1.2.6", 0x2306A, 0x2308A, indexCPS2Sprites_VSAV1_Stages, 0x5e },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_SCREAM[] =
{
    { L"32BG.0.0.0",    0x5a162, 0x5a322, indexCPS2Sprites_VSAV1_Stages, 0x27, &pairFullyLinkedNode },

    { L"8BG.0.0.1",     0x37c92, 0x37df2, indexCPS2Sprites_VSAV1_Stages, 0x29 },
    { L"8BG.0.0.2",     0x37df2, 0x37f32, indexCPS2Sprites_VSAV1_Stages, 0x2a },

    { L"16BG.0.0.1",    0x47cfa, 0x47eda, indexCPS2Sprites_VSAV1_Stages, 0x2b },
    { L"16BG.0.0.2",    0x47eda, 0x4805a, indexCPS2Sprites_VSAV1_Stages, 0x2c },

    { L"SS.0.0.0",      0x2080A, 0x2094A, indexCPS2Sprites_VSAV1_Stages, 0x2d },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_SCREAM_PARTS[] =
{
    { L"32BG.1.1.1",    0x5b7e2, 0x5b802, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.2.1",    0x5b802, 0x5b822, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.3.1",    0x5b822, 0x5b842, indexCPS2Sprites_VSAV1_Stages, 0x28 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_SCREAM_EX[] =
{
    { L"32BG.0.0.0",    0x60FC2, 0x61182, indexCPS2Sprites_VSAV1_Stages, 0x27, &pairFullyLinkedNode },

    { L"8BG.0.0.1",     0x3D1B2, 0x3D312, indexCPS2Sprites_VSAV1_Stages, 0x29 },
    { L"8BG.0.0.2",     0x3D312, 0x3D452, indexCPS2Sprites_VSAV1_Stages, 0x2a },
    { L"16BG.0.0.1",    0x4DAFa, 0x4DCDA, indexCPS2Sprites_VSAV1_Stages, 0x2b },
    { L"16BG.0.0.2",    0x4DCDa, 0x4DE5A, indexCPS2Sprites_VSAV1_Stages, 0x2c },

    { L"SS.0.0.0",      0x2232a, 0x2246A, indexCPS2Sprites_VSAV1_Stages, 0x2d },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_SCREAM_EX_PARTS[] =
{
    { L"32BG.1.1.1",    0x62642, 0x62662, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.2.1",    0x62662, 0x62682, indexCPS2Sprites_VSAV1_Stages, 0x28 },
    { L"32BG.1.3.1",    0x62682, 0x626A2, indexCPS2Sprites_VSAV1_Stages, 0x28 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_IRONHORSE[] =
{
    { L"32BG.0.0.0", 0x5a562, 0x5a5e2, indexCPS2Sprites_VSAV1_Stages, 0x93, &pairFullyLinkedNode },

    { L"8BG.0.0.0", 0x38092, 0x38252, indexCPS2Sprites_VSAV1_Stages, 0x9a },
    { L"16BG.0.0.1", 0x480fA, 0x482fa, indexCPS2Sprites_VSAV1_Stages, 0x98 },
    { L"16BG.0.0.2", 0x482fA, 0x484fa, indexCPS2Sprites_VSAV1_Stages, 0x99 },

    { L"SS.0.0.0", 0x2094A, 0x20A8A, indexCPS2Sprites_VSAV1_Stages, 0x9b },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_IRONHORSE_PARTS[] =
{
    { L"32BG.1.1.1", 0x5c022, 0x5C042, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.1.2", 0x5c582, 0x5C5A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.1.3", 0x5bac2, 0x5BAE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.1.4", 0x5D022, 0x5D042, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.2.1", 0x5C042, 0x5C062, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.2.2", 0x5C5A2, 0x5C5C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.2.3", 0x5BAE2, 0x5BB02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.2.4", 0x5D002, 0x5D022, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.3.1", 0x5C062, 0x5C082, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.3.2", 0x5C5C2, 0x5C5E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.3.3", 0x5BB02, 0x5BB22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.3.4", 0x5CFE2, 0x5D002, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.4.1", 0x5C082, 0x5C0A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.4.2", 0x5C5E2, 0x5C602, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.4.3", 0x5BB22, 0x5BB42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.4.4", 0x5CFC2, 0x5CFE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.5.1", 0x5C0A2, 0x5C0C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.5.2", 0x5C602, 0x5C622, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.5.3", 0x5BB42, 0x5BB62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.5.4", 0x5CFA2, 0x5CFC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.6.1", 0x5C0C2, 0x5C0E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.6.2", 0x5C622, 0x5C642, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.6.3", 0x5BB62, 0x5BB82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.6.4", 0x5CF82, 0x5CFA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.7.1", 0x5C0E2, 0x5C102, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.7.2", 0x5C642, 0x5C662, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.7.3", 0x5BB82, 0x5BBA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.7.4", 0x5CF62, 0x5CF82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.8.1", 0x5C102, 0x5C122, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.8.2", 0x5C662, 0x5C682, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.8.3", 0x5BBA2, 0x5BBC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.8.4", 0x5CF42, 0x5CF62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.9.1", 0x5C122, 0x5C142, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.9.2", 0x5C682, 0x5C6A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.9.3", 0x5BBC2, 0x5BBE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.9.4", 0x5CF22, 0x5CF42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.10.1", 0x5C142, 0x5C162, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.10.2", 0x5C6A2, 0x5C6C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.10.3", 0x5BBE2, 0x5BC02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.10.4", 0x5CF02, 0x5CF22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.11.1", 0x5C162, 0x5C182, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.11.2", 0x5C6C2, 0x5C6E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.11.3", 0x5BC02, 0x5BC22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.11.4", 0x5CEE2, 0x5CF02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.12.1", 0x5C182, 0x5C1A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.12.2", 0x5C6E2, 0x5C702, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.12.3", 0x5BC22, 0x5BC42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.12.4", 0x5CEC2, 0x5CEE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.13.1", 0x5C1A2, 0x5C1C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.13.2", 0x5C702, 0x5C722, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.13.3", 0x5BC42, 0x5BC62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.13.4", 0x5CEA2, 0x5CEC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.14.1", 0x5C1C2, 0x5C1E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.14.2", 0x5C722, 0x5C742, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.14.3", 0x5BC62, 0x5BC82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.14.4", 0x5CE82, 0x5CEA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.15.1", 0x5C1E2, 0x5C202, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.15.2", 0x5C742, 0x5C762, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.15.3", 0x5BC82, 0x5BCA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.15.4", 0x5CE62, 0x5CE82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.16.1", 0x5C202, 0x5C222, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.16.2", 0x5C762, 0x5C782, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.16.3", 0x5BCA2, 0x5BCC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.16.4", 0x5CE42, 0x5CE62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.17.1", 0x5C222, 0x5C242, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.17.2", 0x5C782, 0x5C7A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.17.3", 0x5BCC2, 0x5BCE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.17.4", 0x5CE22, 0x5CE42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.18.1", 0x5C242, 0x5C262, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.18.2", 0x5C7A2, 0x5C7C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.18.3", 0x5BCE2, 0x5BD02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.18.4", 0x5CE02, 0x5CE22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.19.1", 0x5C262, 0x5C282, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.19.2", 0x5C7C2, 0x5C7E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.19.3", 0x5BD02, 0x5BD22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.19.4", 0x5CDE2, 0x5CE02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.20.1", 0x5C282, 0x5C2A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.20.2", 0x5C7E2, 0x5C802, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.20.3", 0x5BD22, 0x5BD42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.20.4", 0x5CDC2, 0x5CDE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.21.1", 0x5C2A2, 0x5C2C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.21.2", 0x5C802, 0x5C822, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.21.3", 0x5BD42, 0x5BD62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.21.4", 0x5CDA2, 0x5CDC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.22.1", 0x5C2C2, 0x5C2E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.22.2", 0x5C822, 0x5C842, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.22.3", 0x5BD62, 0x5BD82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.22.4", 0x5CD82, 0x5CDA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.23.1", 0x5C2E2, 0x5C302, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.23.2", 0x5C842, 0x5C862, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.23.3", 0x5BD82, 0x5BDA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.23.4", 0x5CD62, 0x5CD82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.24.1", 0x5C302, 0x5C322, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.24.2", 0x5C862, 0x5C882, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.24.3", 0x5BDA2, 0x5BDC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.24.4", 0x5CD42, 0x5CD62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.25.1", 0x5C322, 0x5C342, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.25.2", 0x5C882, 0x5C8A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.25.3", 0x5BDC2, 0x5BDE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.25.4", 0x5CD22, 0x5CD42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.26.1", 0x5C342, 0x5C362, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.26.2", 0x5C8A2, 0x5C8C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.26.3", 0x5BDE2, 0x5BE02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.26.4", 0x5CD02, 0x5CD22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.27.1", 0x5C362, 0x5C382, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.27.2", 0x5C8C2, 0x5C8E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.27.3", 0x5BE02, 0x5BE22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.27.4", 0x5CCE2, 0x5CD02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.28.1", 0x5C382, 0x5C3A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.28.2", 0x5C8E2, 0x5C902, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.28.3", 0x5BE22, 0x5BE42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.28.4", 0x5CCC2, 0x5CCE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.29.1", 0x5C3A2, 0x5C3C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.29.2", 0x5C902, 0x5C922, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.29.3", 0x5BE42, 0x5BE62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.29.4", 0x5CCA2, 0x5CCC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.30.1", 0x5C3C2, 0x5C3E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.30.2", 0x5C922, 0x5C942, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.30.3", 0x5BE62, 0x5BE82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.30.4", 0x5CC82, 0x5CCA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.31.1", 0x5C3E2, 0x5C402, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.31.2", 0x5C942, 0x5C962, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.31.3", 0x5BE82, 0x5BEA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.31.4", 0x5CC62, 0x5CC82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.32.1", 0x5C402, 0x5C422, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.32.2", 0x5C962, 0x5C982, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.32.3", 0x5BEA2, 0x5BEC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.32.4", 0x5CC42, 0x5CC62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.33.1", 0x5C422, 0x5C442, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.33.2", 0x5C982, 0x5C9A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.33.3", 0x5BEC2, 0x5BEE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.33.4", 0x5CC22, 0x5CC42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.34.1", 0x5C442, 0x5C462, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.34.2", 0x5C9A2, 0x5C9C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.34.3", 0x5BEE2, 0x5BF02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.34.4", 0x5CC02, 0x5CC22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.35.1", 0x5C462, 0x5C482, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.35.2", 0x5C9C2, 0x5C9E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.35.3", 0x5BF02, 0x5BF22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.35.4", 0x5CBE2, 0x5CC02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.36.1", 0x5C482, 0x5C4A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.36.2", 0x5C9E2, 0x5CA02, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.36.3", 0x5BF22, 0x5BF42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.36.4", 0x5CBC2, 0x5CBE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.37.1", 0x5C4A2, 0x5C4C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.37.2", 0x5CA02, 0x5CA22, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.37.3", 0x5BF42, 0x5BF62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.37.4", 0x5CBA2, 0x5CBC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.38.1", 0x5C4C2, 0x5C4E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.38.2", 0x5CA22, 0x5CA42, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.38.3", 0x5BF62, 0x5BF82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.38.4", 0x5CB82, 0x5CBA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.39.1", 0x5C4E2, 0x5C502, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.39.2", 0x5CA42, 0x5CA62, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.39.3", 0x5BF82, 0x5BFA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.39.4", 0x5CB62, 0x5CB82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.40.1", 0x5C502, 0x5C522, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.40.2", 0x5CA62, 0x5CA82, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.40.3", 0x5BFA2, 0x5BFC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.40.4", 0x5CB42, 0x5CB62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.41.1", 0x5C522, 0x5C542, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.41.2", 0x5CA82, 0x5CAA2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.41.3", 0x5BFC2, 0x5BFE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.41.4", 0x5CB22, 0x5CB42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.42.1", 0x5C542, 0x5C562, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.42.2", 0x5CAA2, 0x5CAC2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.42.3", 0x5BFE2, 0x5C002, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.42.4", 0x5CB02, 0x5CB22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.43.1", 0x5C562, 0x5C582, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.43.2", 0x5CAC2, 0x5CAE2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.43.3", 0x5C002, 0x5C022, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.43.4", 0x5cae2, 0x5CB02, indexCPS2Sprites_VSAV1_Stages, 0x97 },

    { L"SS.1.1.1", 0x2156A, 0x2158a, indexCPS2Sprites_VSAV1_Stages, 0x9c },
    { L"SS.1.2.1", 0x2158A, 0x215aa, indexCPS2Sprites_VSAV1_Stages, 0x9c },
    { L"SS.1.3.1", 0x215aA, 0x215ca, indexCPS2Sprites_VSAV1_Stages, 0x9c },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_IRONHORSE_EX[] =
{
    { L"32BG.0.0.0", 0x613C2, 0x61442, indexCPS2Sprites_VSAV1_Stages, 0x93, &pairFullyLinkedNode },

    { L"8BG.0.0.0", 0x3D5B2, 0x3D772, indexCPS2Sprites_VSAV1_Stages, 0x9a },
    { L"16BG.0.0.1", 0x4DEFA, 0x4E0FA, indexCPS2Sprites_VSAV1_Stages, 0x98 },
    { L"16BG.0.0.2", 0x4E0FA, 0x4E2FA, indexCPS2Sprites_VSAV1_Stages, 0x99 },

    { L"SS.0.0.0", 0x2246A, 0x225AA, indexCPS2Sprites_VSAV1_Stages, 0x9b },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_IRONHORSE_EX_PARTS[] =
{
    { L"32BG.1.1.1", 0x62E82, 0x62EA2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.1.2", 0x633E2, 0x63402, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.1.3", 0x62922, 0x62942, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.1.4", 0x63E82, 0x63EA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.2.1", 0x62EA2, 0x62EC2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.2.2", 0x63402, 0x63422, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.2.3", 0x62942, 0x62962, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.2.4", 0x63E62, 0x63E82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.3.1", 0x62EC2, 0x62EE2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.3.2", 0x63422, 0x63442, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.3.3", 0x62962, 0x62982, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.3.4", 0x63E42, 0x63E62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.4.1", 0x62EE2, 0x62F02, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.4.2", 0x63442, 0x63462, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.4.3", 0x62982, 0x629A2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.4.4", 0x63E22, 0x63E42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.5.1", 0x62F02, 0x62F22, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.5.2", 0x63462, 0x63482, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.5.3", 0x629A2, 0x629C2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.5.4", 0x63E02, 0x63E22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.6.1", 0x62F22, 0x62F42, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.6.2", 0x63482, 0x634A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.6.3", 0x629C2, 0x629E2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.6.4", 0x63DE2, 0x63E02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.7.1", 0x62F42, 0x62F62, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.7.2", 0x634A2, 0x634C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.7.3", 0x629E2, 0x62A02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.7.4", 0x63DC2, 0x63DE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.8.1", 0x62F62, 0x62F82, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.8.2", 0x634C2, 0x634E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.8.3", 0x62A02, 0x62A22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.8.4", 0x63DA2, 0x63DC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.9.1", 0x62F82, 0x62FA2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.9.2", 0x634E2, 0x63502, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.9.3", 0x62A22, 0x62A42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.9.4", 0x63D82, 0x63DA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.10.1", 0x62FA2, 0x62FC2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.10.2", 0x63502, 0x63522, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.10.3", 0x62A42, 0x62A62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.10.4", 0x63D62, 0x63D82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.11.1", 0x62FC2, 0x62FE2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.11.2", 0x63522, 0x63542, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.11.3", 0x62A62, 0x62A82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.11.4", 0x63D42, 0x63D62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.12.1", 0x62FE2, 0x63002, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.12.2", 0x63542, 0x63562, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.12.3", 0x62A82, 0x62AA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.12.4", 0x63D22, 0x63D42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.13.1", 0x63002, 0x63022, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.13.2", 0x63562, 0x63582, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.13.3", 0x62AA2, 0x62AC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.13.4", 0x63D02, 0x63D22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.14.1", 0x63022, 0x63042, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.14.2", 0x63582, 0x635A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.14.3", 0x62AC2, 0x62AE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.14.4", 0x63CE2, 0x63D02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.15.1", 0x63042, 0x63062, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.15.2", 0x635A2, 0x635C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.15.3", 0x62AE2, 0x62B02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.15.4", 0x63CC2, 0x63CE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.16.1", 0x63062, 0x63082, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.16.2", 0x635C2, 0x635E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.16.3", 0x62B02, 0x62B22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.16.4", 0x63CA2, 0x63CC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.17.1", 0x63082, 0x630A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.17.2", 0x635E2, 0x63602, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.17.3", 0x62B22, 0x62B42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.17.4", 0x63C82, 0x63CA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.18.1", 0x630A2, 0x630C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.18.2", 0x63602, 0x63622, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.18.3", 0x62B42, 0x62B62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.18.4", 0x63C62, 0x63C82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.19.1", 0x630C2, 0x630E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.19.2", 0x63622, 0x63642, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.19.3", 0x62B62, 0x62B82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.19.4", 0x63C42, 0x63C62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.20.1", 0x630E2, 0x63102, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.20.2", 0x63642, 0x63662, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.20.3", 0x62B82, 0x62BA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.20.4", 0x63C22, 0x63C42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.21.1", 0x63102, 0x63122, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.21.2", 0x63662, 0x63682, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.21.3", 0x62BA2, 0x62BC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.21.4", 0x63C02, 0x63C22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.22.1", 0x63122, 0x63142, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.22.2", 0x63682, 0x636A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.22.3", 0x62BC2, 0x62BE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.22.4", 0x63BE2, 0x63C02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.23.1", 0x63142, 0x63162, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.23.2", 0x636A2, 0x636C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.23.3", 0x62BE2, 0x62C02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.23.4", 0x63BC2, 0x63BE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.24.1", 0x63162, 0x63182, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.24.2", 0x636C2, 0x636E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.24.3", 0x62C02, 0x62C22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.24.4", 0x63BA2, 0x63BC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.25.1", 0x63182, 0x631A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.25.2", 0x636E2, 0x63702, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.25.3", 0x62C22, 0x62C42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.25.4", 0x63B82, 0x63BA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.26.1", 0x631A2, 0x631C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.26.2", 0x63702, 0x63722, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.26.3", 0x62C42, 0x62C62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.26.4", 0x63B62, 0x63B82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.27.1", 0x631C2, 0x631E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.27.2", 0x63722, 0x63742, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.27.3", 0x62C62, 0x62C82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.27.4", 0x63B42, 0x63B62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.28.1", 0x631E2, 0x63202, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.28.2", 0x63742, 0x63762, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.28.3", 0x62C82, 0x62CA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.28.4", 0x63B22, 0x63B42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.29.1", 0x63202, 0x63222, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.29.2", 0x63762, 0x63782, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.29.3", 0x62CA2, 0x62CC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.29.4", 0x63B02, 0x63B22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.30.1", 0x63222, 0x63242, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.30.2", 0x63782, 0x637A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.30.3", 0x62CC2, 0x62CE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.30.4", 0x63AE2, 0x63B02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.31.1", 0x63242, 0x63262, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.31.2", 0x637A2, 0x637C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.31.3", 0x62CE2, 0x62D02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.31.4", 0x63AC2, 0x63AE2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.32.1", 0x63262, 0x63282, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.32.2", 0x637C2, 0x637E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.32.3", 0x62D02, 0x62D22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.32.4", 0x63AA2, 0x63AC2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.33.1", 0x63282, 0x632A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.33.2", 0x637E2, 0x63802, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.33.3", 0x62D22, 0x62D42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.33.4", 0x63A82, 0x63AA2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.34.1", 0x632A2, 0x632C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.34.2", 0x63802, 0x63822, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.34.3", 0x62D42, 0x62D62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.34.4", 0x63A62, 0x63A82, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.35.1", 0x632C2, 0x632E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.35.2", 0x63822, 0x63842, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.35.3", 0x62D62, 0x62D82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.35.4", 0x63A42, 0x63A62, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.36.1", 0x632E2, 0x63302, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.36.2", 0x63842, 0x63862, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.36.3", 0x62D82, 0x62DA2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.36.4", 0x63A22, 0x63A42, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.37.1", 0x63302, 0x63322, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.37.2", 0x63862, 0x63882, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.37.3", 0x62DA2, 0x62DC2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.37.4", 0x63A02, 0x63A22, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.38.1", 0x63322, 0x63342, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.38.2", 0x63882, 0x638A2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.38.3", 0x62DC2, 0x62DE2, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.38.4", 0x639E2, 0x63A02, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.39.1", 0x63342, 0x63362, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.39.2", 0x638A2, 0x638C2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.39.3", 0x62DE2, 0x62E02, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.39.4", 0x639C2, 0x639E2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.40.1", 0x63362, 0x63382, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.40.2", 0x638C2, 0x638E2, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.40.3", 0x62E02, 0x62E22, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.40.4", 0x639A2, 0x639C2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.41.1", 0x63382, 0x633A2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.41.2", 0x638E2, 0x63902, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.41.3", 0x62E22, 0x62E42, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.41.4", 0x63982, 0x639A2, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.42.1", 0x633A2, 0x633C2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.42.2", 0x63902, 0x63922, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.42.3", 0x62E42, 0x62E62, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.42.4", 0x63962, 0x63982, indexCPS2Sprites_VSAV1_Stages, 0x97 },
    { L"32BG.1.43.1", 0x633C2, 0x633E2, indexCPS2Sprites_VSAV1_Stages, 0x94, &pairNext3Palettes },
    { L"32BG.1.43.2", 0x63922, 0x63942, indexCPS2Sprites_VSAV1_Stages, 0x95 },
    { L"32BG.1.43.3", 0x62E62, 0x62E82, indexCPS2Sprites_VSAV1_Stages, 0x96 },
    { L"32BG.1.43.4", 0x63942, 0x63962, indexCPS2Sprites_VSAV1_Stages, 0x97 },

    { L"SS.1.1.1", 0x2308A, 0x230AA, indexCPS2Sprites_VSAV1_Stages, 0x9c },
    { L"SS.1.2.1", 0x230AA, 0x230CA, indexCPS2Sprites_VSAV1_Stages, 0x9c },
    { L"SS.1.3.1", 0x230CA, 0x230EA, indexCPS2Sprites_VSAV1_Stages, 0x9c },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_ABARAYA[] =
{
    { L"32BG.0.0.0",    0x59162, 0x591c2, indexCPS2Sprites_VSAV1_Stages, 0x2e, &pairFullyLinkedNode },
    { L"8BG.0.0.0",     0x36c92, 0x36d92, indexCPS2Sprites_VSAV1_Stages, 0x2f },

    { L"16BG.0.0.1",    0x46cfA, 0x46eda, indexCPS2Sprites_VSAV1_Stages, 0x33 },
    { L"16BG.0.0.2",    0x46edA, 0x4705a, indexCPS2Sprites_VSAV1_Stages, 0x34 },

    { L"SS.0.0.0",      0x2030A, 0x2044A, indexCPS2Sprites_VSAV1_Stages, 0x3c },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_ABARAYA_PARTS[] =
{
    { L"8BG.1.1.1", 0x38f12, 0x38f32, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.1.2", 0x38f52, 0x38f72, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.1.3", 0x38f92, 0x38fb2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"8BG.1.2.1", 0x38f32, 0x38f52, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.2.2", 0x38f72, 0x38f92, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.2.3", 0x38fb2, 0x38fd2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"16BG.1.1.1", 0x48adA, 0x48afa, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.1.2", 0x48b1A, 0x48b3a, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.1.2.1", 0x48afA, 0x48b1a, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.2.2", 0x48b3A, 0x48b5a, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.2.1.1", 0x489bA, 0x489da, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.1.2", 0x489fA, 0x48a1a, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.1.3", 0x48a3A, 0x48a5a, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.1.4", 0x48a7A, 0x48a9a, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.2.2.1", 0x489dA, 0x489fa, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.2.2", 0x48a1A, 0x48a3a, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.2.3", 0x48a5A, 0x48a7a, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.2.4", 0x48a9A, 0x48aba, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.3.1.1", 0x48abA, 0x48ada, indexCPS2Sprites_VSAV1_Stages, 0x3b },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_ABARAYA_EX[] =
{
    { L"32BG.0.0.0",    0x5FFC2, 0x60022, indexCPS2Sprites_VSAV1_Stages, 0x2e, &pairFullyLinkedNode },
    { L"8BG.0.0.0",     0x3C1B2, 0x3C2B2, indexCPS2Sprites_VSAV1_Stages, 0x2f },

    { L"16BG.0.0.1",    0x4CAFA, 0x4CCDA, indexCPS2Sprites_VSAV1_Stages, 0x33 },
    { L"16BG.0.0.2",    0x4CCDA, 0x4CE5A, indexCPS2Sprites_VSAV1_Stages, 0x34 },

    { L"SS.0.0.0",      0x21E2A, 0x21F6A, indexCPS2Sprites_VSAV1_Stages, 0x3c },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_ABARAYA_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x3E432, 0x3E452, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.1.2", 0x3E472, 0x3E492, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.1.3", 0x3E4B2, 0x3E4D2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"8BG.1.2.1", 0x3E452, 0x3E472, indexCPS2Sprites_VSAV1_Stages, 0x30, &pairNextAndNext },
    { L"8BG.1.2.2", 0x3E492, 0x3E4B2, indexCPS2Sprites_VSAV1_Stages, 0x31 },
    { L"8BG.1.2.3", 0x3E4D2, 0x3E4F2, indexCPS2Sprites_VSAV1_Stages, 0x32 },
    { L"16BG.1.1.1", 0x4E8DA, 0x4E8FA, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.1.2", 0x4E91A, 0x4E93A, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.1.2.1", 0x4E8FA, 0x4E91A, indexCPS2Sprites_VSAV1_Stages, 0x35, &pairNext },
    { L"16BG.1.2.2", 0x4E93A, 0x4E95A, indexCPS2Sprites_VSAV1_Stages, 0x36 },
    { L"16BG.2.1.1", 0x4E7BA, 0x4E7DA, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.1.2", 0x4E7FA, 0x4E81A, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.1.3", 0x4E83A, 0x4E85A, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.1.4", 0x4E87A, 0x4E89A, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.2.2.1", 0x4E7DA, 0x4E7FA, indexCPS2Sprites_VSAV1_Stages, 0x37, &pairNext3Palettes },
    { L"16BG.2.2.2", 0x4E81A, 0x4E83A, indexCPS2Sprites_VSAV1_Stages, 0x38 },
    { L"16BG.2.2.3", 0x4E85A, 0x4E87A, indexCPS2Sprites_VSAV1_Stages, 0x39 },
    { L"16BG.2.2.4", 0x4E89A, 0x4E8BA, indexCPS2Sprites_VSAV1_Stages, 0x3a },
    { L"16BG.3.1.1", 0x4E8BA, 0x4E8DA, indexCPS2Sprites_VSAV1_Stages, 0x3b },
};

// Concrete Cave
const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_CAVE[] =
{
    { L"8BG.0.0.0", 0x35c92, 0x35cb2, indexCPS2Sprites_VSAV1_Stages, 0x3d, &pairFullyLinkedNode },

    { L"32BG.0.0.1", 0x58162, 0x58302, indexCPS2Sprites_VSAV1_Stages, 0x3e },
    { L"32BG.0.0.2", 0x58362, 0x58382, indexCPS2Sprites_VSAV1_Stages, 0x3f },

    { L"16BG.0.0.1", 0x45cfa, 0x45efa, indexCPS2Sprites_VSAV1_Stages, 0x40 },
    { L"16BG.0.0.2", 0x45efa, 0x460fa, indexCPS2Sprites_VSAV1_Stages, 0x41 },

    { L"SS.0.0.0", 0x1FE0A, 0x1FF4A, indexCPS2Sprites_VSAV1_Stages, 0x42 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_CAVE_EX[] =
{
    { L"8BG.0.0.0", 0x3B1B2, 0x3B1D2, indexCPS2Sprites_VSAV1_Stages, 0x3d, &pairFullyLinkedNode },

    { L"32BG.0.0.1", 0x5EFC2, 0x5F162, indexCPS2Sprites_VSAV1_Stages, 0x3e },
    { L"32BG.0.0.2", 0x5F1C2, 0x5F1E2, indexCPS2Sprites_VSAV1_Stages, 0x3f },

    { L"16BG.0.0.1", 0x4BAFA, 0x4BCFA, indexCPS2Sprites_VSAV1_Stages, 0x40 },
    { L"16BG.0.0.2", 0x4BCFA, 0x4BEFA, indexCPS2Sprites_VSAV1_Stages, 0x41 },

    { L"SS.0.0.0", 0x2192A, 0x21A6A, indexCPS2Sprites_VSAV1_Stages, 0x42 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_REDTHIRST[] =
{
    { L"8BG.0.0.0", 0x36492, 0x36672, indexCPS2Sprites_VSAV1_Stages, 0x43, &pairFullyLinkedNode },

    { L"32BG.0.0.0", 0x58962, 0x58a82, indexCPS2Sprites_VSAV1_Stages, 0x45 },

    { L"16BG.0.0.0", 0x464fa, 0x466fa, indexCPS2Sprites_VSAV1_Stages, 0x46 },

    { L"SS.0.0.0", 0x2010a, 0x201CA, indexCPS2Sprites_VSAV1_Stages, 0x47 },
    { L"SS.0.0.1 Stage shadow", 0x2008a, 0x200aa },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_REDTHIRST_PARTS[] =
{
    { L"8BG.1.1.1", 0x39792, 0x39812, indexCPS2Sprites_VSAV1_Stages, 0x44 },

    { L"SS.1.1.1", 0x20fca, 0x20fea, indexCPS2Sprites_VSAV1_Stages, 0x48 },
    { L"SS.1.2.1", 0x20fea, 0x2100a, indexCPS2Sprites_VSAV1_Stages, 0x48 },
    { L"SS.2.1.1", 0x2100a, 0x210aa, indexCPS2Sprites_VSAV1_Stages, 0x49 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_REDTHIRST_EX[] =
{
    { L"8BG.0.0.0", 0x3B9B2, 0x3BB92, indexCPS2Sprites_VSAV1_Stages, 0x43, &pairFullyLinkedNode },

    { L"32BG.0.0.0", 0x5F7C2, 0x5F8E2, indexCPS2Sprites_VSAV1_Stages, 0x45 },

    { L"16BG.0.0.0", 0x4C2Fa, 0x4C4FA, indexCPS2Sprites_VSAV1_Stages, 0x46 },

    { L"SS.0.0.0", 0x21C2a, 0x21CEA, indexCPS2Sprites_VSAV1_Stages, 0x47 },
    { L"SS.0.0.1 Stage shadow", 0x21baa, 0x21bca },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_REDTHIRST_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x3ECB2, 0x3ED32, indexCPS2Sprites_VSAV1_Stages, 0x44 },

    { L"SS.1.1.1", 0x22AEa, 0x22B0A, indexCPS2Sprites_VSAV1_Stages, 0x48 },
    { L"SS.1.2.1", 0x22B0a, 0x22B2A, indexCPS2Sprites_VSAV1_Stages, 0x48 },
    { L"SS.2.1.1", 0x22B2a, 0x22BCA, indexCPS2Sprites_VSAV1_Stages, 0x49 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_TOWER[] =
{
    { L"32BG.0.0.0", 0x58562, 0x585c2, indexCPS2Sprites_VSAV1_Stages, 0x9d, &pairFullyLinkedNode },
    { L"SS.0.0.1", 0x2002a, 0x2006a, indexCPS2Sprites_VSAV1_Stages, 0x9e },
    { L"16BG.0.0.0", 0x460fa, 0x4621a, indexCPS2Sprites_VSAV1_Stages, 0x9f },
    { L"8BG.0.0.1", 0x36092, 0x36232, indexCPS2Sprites_VSAV1_Stages, 0xa0 },
    { L"8BG.0.0.2", 0x36232, 0x36392, indexCPS2Sprites_VSAV1_Stages, 0xa1 },
    { L"SS.0.0.2", 0x1ff4a, 0x2002a, indexCPS2Sprites_VSAV1_Stages, 0xa7 },
    { L"SS.0.0.3", 0x2006a, 0x2008a, indexCPS2Sprites_VSAV1_Stages, 0xa8 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_TOWER_PARTS[] =
{
    { L"8BG.1.1.1", 0x39072, 0x39092, indexCPS2Sprites_VSAV1_Stages, 0xa2 },
    { L"8BG.1.1.2", 0x39092, 0x390b2, indexCPS2Sprites_VSAV1_Stages, 0xa3 },
    { L"8BG.1.1.3", 0x390b2, 0x390d2, indexCPS2Sprites_VSAV1_Stages, 0xa4 },
    { L"8BG.2.1.1", 0x39032, 0x39052, indexCPS2Sprites_VSAV1_Stages, 0xa5 },
    { L"8BG.2.2.1", 0x39052, 0x39072, indexCPS2Sprites_VSAV1_Stages, 0xa5 },
    { L"8BG.3.1.1", 0x38fd2, 0x38ff2, indexCPS2Sprites_VSAV1_Stages, 0xa6 },
    { L"8BG.3.2.1", 0x38ff2, 0x39012, indexCPS2Sprites_VSAV1_Stages, 0xa6 },
    { L"8BG.3.3.1", 0x39012, 0x39032, indexCPS2Sprites_VSAV1_Stages, 0xa6 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_TOWER_EX[] =
{
    { L"32BG.0.0.0", 0x5f3c2, 0x5f422, indexCPS2Sprites_VSAV1_Stages, 0x9d, &pairFullyLinkedNode },
    { L"SS.0.0.1", 0x21b4a, 0x21b8a, indexCPS2Sprites_VSAV1_Stages, 0x9e },
    { L"16BG.0.0.0", 0x4befa, 0x4c01a, indexCPS2Sprites_VSAV1_Stages, 0x9f },
    { L"8BG.0.0.1", 0x3b5b2, 0x3b752, indexCPS2Sprites_VSAV1_Stages, 0xa0 },
    { L"8BG.0.0.2", 0x3b752, 0x3b8b2, indexCPS2Sprites_VSAV1_Stages, 0xa1 },
    { L"SS.0.0.2", 0x21a6a, 0x21b4a, indexCPS2Sprites_VSAV1_Stages, 0xa7 },
    { L"SS.0.0.3", 0x21b8a, 0x21baa, indexCPS2Sprites_VSAV1_Stages, 0xa8 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_TOWER_EX_PARTS[] =
{
    { L"8BG.1.1.1", 0x3e592, 0x3e5b2, indexCPS2Sprites_VSAV1_Stages, 0xa2 },
    { L"8BG.1.1.2", 0x3e5b2, 0x3e5d2, indexCPS2Sprites_VSAV1_Stages, 0xa3 },
    { L"8BG.1.1.3", 0x3e5d2, 0x3e5f2, indexCPS2Sprites_VSAV1_Stages, 0xa4 },
    { L"8BG.2.1.1", 0x3e552, 0x3e572, indexCPS2Sprites_VSAV1_Stages, 0xa5 },
    { L"8BG.2.2.1", 0x3e572, 0x3e592, indexCPS2Sprites_VSAV1_Stages, 0xa5 },
    { L"8BG.3.1.1", 0x3e4f2, 0x3e512, indexCPS2Sprites_VSAV1_Stages, 0xa6 },
    { L"8BG.3.2.1", 0x3e512, 0x3e532, indexCPS2Sprites_VSAV1_Stages, 0xa6 },
    { L"8BG.3.3.1", 0x3e532, 0x3e552, indexCPS2Sprites_VSAV1_Stages, 0xa6 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_VANITY[] =
{
    { L"32BG.0.0.0", 0x59562, 0x596c2, indexCPS2Sprites_VSAV1_Stages, 0x61, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x37092, 0x371b2, indexCPS2Sprites_VSAV1_Stages, 0x62 },
    { L"SS.1.0.1", 0x2050a, 0x2054a, indexCPS2Sprites_VSAV1_Stages, 0x63 },
    { L"16BG.0.0.1", 0x4711a, 0x4729a, indexCPS2Sprites_VSAV1_Stages, 0x64 },
    { L"16BG.0.0.2", 0x472ba, 0x4747a, indexCPS2Sprites_VSAV1_Stages, 0x65 },
    { L"SS.2.0.1", 0x2044a, 0x204aa, indexCPS2Sprites_VSAV1_Stages, 0x66 },
    { L"SS.2.0.2", 0x2054a, 0x2058A, indexCPS2Sprites_VSAV1_Stages, 0x67 },
    { L"SS.2.0.3", 0x204aa, 0x2050a, indexCPS2Sprites_VSAV1_Stages, 0x68 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_VANITY_EX[] =
{
    { L"32BG.0.0.0", 0x603C2, 0x60522, indexCPS2Sprites_VSAV1_Stages, 0x61, &pairFullyLinkedNode },
    { L"8BG.0.0.0", 0x3C5B2, 0x3C6D2, indexCPS2Sprites_VSAV1_Stages, 0x62 },
    { L"SS.1.0.1", 0x2202A, 0x2206A, indexCPS2Sprites_VSAV1_Stages, 0x63 },
    { L"16BG.0.0.1", 0x4CF1A, 0x4D09A, indexCPS2Sprites_VSAV1_Stages, 0x64 },
    { L"16BG.0.0.2", 0x4D0BA, 0x4D27A, indexCPS2Sprites_VSAV1_Stages, 0x65 },
    { L"SS.2.0.1", 0x21F6A, 0x21FCA, indexCPS2Sprites_VSAV1_Stages, 0x66 },
    { L"SS.2.0.2", 0x2206A, 0x220AA, indexCPS2Sprites_VSAV1_Stages, 0x67 },
    { L"SS.2.0.3", 0x21FCA, 0x2202A, indexCPS2Sprites_VSAV1_Stages, 0x68 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_WARAGONY[] =
{
    { L"32BG.0.0.1", 0x59982, 0x599a2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairFullyLinkedNode },
    { L"32BG.0.0.2", 0x59a42, 0x59a62, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.0.0.3", 0x59b02, 0x59b22, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.0.0.4", 0x59bc2, 0x59be2, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"16BG.0.0.1", 0x474fa, 0x476ba, indexCPS2Sprites_VSAV1_Stages, 0x6d },
    { L"16BG.0.0.2", 0x476da, 0x4771a, indexCPS2Sprites_VSAV1_Stages, 0x6e },
    { L"16BG.0.0.3", 0x4773a, 0x4783a, indexCPS2Sprites_VSAV1_Stages, 0x6f },
    { L"16BG.0.0.4", 0x4785a, 0x4789a, indexCPS2Sprites_VSAV1_Stages, 0x70 },

    { L"8BG.0.0.0", 0x37492, 0x37652, indexCPS2Sprites_VSAV1_Stages, 0x71 },

    { L"SS.0.0.0", 0x2062a, 0x206CA, indexCPS2Sprites_VSAV1_Stages, 0x72 },
    { L"SS.0.0.1 Stage shadow", 0x2058a, 0x205aA },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_WARAGONY_PARTS[] =
{
    { L"32BG.1.1.1", 0x5b842, 0x5B862, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.1.2", 0x5b8e2, 0x5B902, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.1.3", 0x5b982, 0x5B9A2, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.1.4", 0x5ba22, 0x5BA42, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.2.1", 0x5B862, 0x5B882, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.2.2", 0x5B902, 0x5B922, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.2.3", 0x5B9A2, 0x5B9C2, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.2.4", 0x5BA42, 0x5BA62, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.3.1", 0x5B882, 0x5B8A2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.3.2", 0x5B922, 0x5B942, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.3.3", 0x5B9C2, 0x5B9E2, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.3.4", 0x5BA62, 0x5BA82, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.4.1", 0x5B8A2, 0x5B8C2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.4.2", 0x5B942, 0x5B962, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.4.3", 0x5B9E2, 0x5BA02, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.4.4", 0x5BA82, 0x5BAA2, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.5.1", 0x5B8C2, 0x5B8E2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.5.2", 0x5B962, 0x5B982, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.5.3", 0x5BA02, 0x5BA22, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.5.4", 0x5BAA2, 0x5BAC2, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"SS.1.1.1", 0x2134a, 0x2136a, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.2.1", 0x2136a, 0x2138a, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.3.1", 0x2138a, 0x213aa, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.4.1", 0x213aa, 0x213ca, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.5.1", 0x213ca, 0x213ea, indexCPS2Sprites_VSAV1_Stages, 0x73 },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_WARAGONY_EX[] =
{
    { L"32BG.0.0.1", 0x607E2, 0x60802, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairFullyLinkedNode },
    { L"32BG.0.0.2", 0x608A2, 0x608C2, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.0.0.3", 0x60962, 0x60982, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.0.0.4", 0x60A22, 0x60A42, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"16BG.0.0.1", 0x4D2FA, 0x4D4BA, indexCPS2Sprites_VSAV1_Stages, 0x6d },
    { L"16BG.0.0.2", 0x4D4DA, 0x4D51A, indexCPS2Sprites_VSAV1_Stages, 0x6e },
    { L"16BG.0.0.3", 0x4D53A, 0x4D63A, indexCPS2Sprites_VSAV1_Stages, 0x6f },
    { L"16BG.0.0.4", 0x4D65A, 0x4D69A, indexCPS2Sprites_VSAV1_Stages, 0x70 },

    { L"8BG.0.0.0", 0x3C9B2, 0x3CB72, indexCPS2Sprites_VSAV1_Stages, 0x71 },

    { L"SS.0.0.0", 0x2214A, 0x221EA, indexCPS2Sprites_VSAV1_Stages, 0x72 },
    { L"SS.0.0.1 Stage shadow", 0x220AA, 0x220cA },
};

const sGame_PaletteDataset VSAV_A_STAGE_PALETTES_WARAGONY_EX_PARTS[] =
{
    { L"32BG.1.1.1", 0x626A2, 0x626C2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.1.2", 0x62742, 0x62762, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.1.3", 0x627E2, 0x62802, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.1.4", 0x62882, 0x628A2, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.2.1", 0x626C2, 0x626E2, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.2.2", 0x62762, 0x62782, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.2.3", 0x62802, 0x62822, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.2.4", 0x628A2, 0x628C2, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.3.1", 0x626E2, 0x62702, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.3.2", 0x62782, 0x627A2, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.3.3", 0x62822, 0x62842, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.3.4", 0x628C2, 0x628E2, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.4.1", 0x62702, 0x62722, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.4.2", 0x627A2, 0x627C2, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.4.3", 0x62842, 0x62862, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.4.4", 0x628E2, 0x62902, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"32BG.1.5.1", 0x62722, 0x62742, indexCPS2Sprites_VSAV1_Stages, 0x69, &pairNext3Palettes },
    { L"32BG.1.5.2", 0x627C2, 0x627E2, indexCPS2Sprites_VSAV1_Stages, 0x6a },
    { L"32BG.1.5.3", 0x62862, 0x62882, indexCPS2Sprites_VSAV1_Stages, 0x6b },
    { L"32BG.1.5.4", 0x62902, 0x62922, indexCPS2Sprites_VSAV1_Stages, 0x6c },

    { L"SS.1.1.1", 0x22E6A, 0x22E8A, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.2.1", 0x22E8A, 0x22EAA, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.3.1", 0x22EAA, 0x22ECA, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.4.1", 0x22ECA, 0x22EEA, indexCPS2Sprites_VSAV1_Stages, 0x73 },
    { L"SS.1.5.1", 0x22EEA, 0x22F0A, indexCPS2Sprites_VSAV1_Stages, 0x73 },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_PALETTES_STATUS, ARRAYSIZE(VSAV_A_BULLETA_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_PALETTES_STATUS, ARRAYSIZE(VSAV_A_DEMITRI_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_PALETTES_STATUS, ARRAYSIZE(VSAV_A_GALLON_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_PALETTES_STATUS, ARRAYSIZE(VSAV_A_VICTOR_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_PALETTES_STATUS, ARRAYSIZE(VSAV_A_ZABEL_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_PALETTES_STATUS, ARRAYSIZE(VSAV_A_MORRIGAN_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_PALETTES_STATUS, ARRAYSIZE(VSAV_A_ANAKARIS_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_PALETTES_STATUS, ARRAYSIZE(VSAV_A_FELICIA_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_PALETTES_STATUS, ARRAYSIZE(VSAV_A_BISHAMON_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_STATUS, ARRAYSIZE(VSAV_A_AULBATH_PALETTES_STATUS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_AULBATH_PALETTES_SHARED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_PALETTES_STATUS, ARRAYSIZE(VSAV_A_SASQUATCH_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_QBEE_PALETTES_STATUS, ARRAYSIZE(VSAV_A_QBEE_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_PALETTES_STATUS, ARRAYSIZE(VSAV_A_LEILEI_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_PALETTES_STATUS, ARRAYSIZE(VSAV_A_LILITH_PALETTES_STATUS) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_STATUS, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_STATUS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV_A_JEDAH_PALETTES_SHARED) },
};

const sDescTreeNode VSAV_A_DARKGALLON_COLLECTION[] =
{
    { L"Default",    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_DEFAULT,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_DEFAULT) },
    { L"Alt",        DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_ALT,      ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_ALT) },
    { L"Status Effects",    DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_STATUS,  ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_STATUS) },
    { L"Special (Unused)", DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_PALETTES_STATUSUNUSED, ARRAYSIZE(VSAV_A_DARKGALLON_PALETTES_STATUSUNUSED) },
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
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_PALETTES_STATUS, ARRAYSIZE(VSAV_A_OBOROBISHAMON_PALETTES_STATUS) },
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

const sDescTreeNode VSAV_A_PHOBOS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_LP,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_MP,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_HP,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_LK,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_MK,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_HK,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_PP,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_KK,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_KK) },
    //{ L"AP", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_AP,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_AP) },
    //{ L"AK", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_PALETTES_AK,         ARRAYSIZE(VSAV_A_PHOBOS_PALETTES_AK) },
};

const sDescTreeNode VSAV_A_BONUS_COLLECTION[] =
{
    { L"HUD",                       DESC_NODETYPE_TREE, (void*)VSAV_A_HUD_PALETTES,     ARRAYSIZE(VSAV_A_HUD_PALETTES) },
    { L"HUD (Player 1 Side)",       DESC_NODETYPE_TREE, (void*)VSAV_A_HUD_P1_PALETTES, ARRAYSIZE(VSAV_A_HUD_P1_PALETTES) },
    { L"HUD (Player 2 Side)",       DESC_NODETYPE_TREE, (void*)VSAV_A_HUD_P2_PALETTES, ARRAYSIZE(VSAV_A_HUD_P2_PALETTES) },
    { L"Effects",                   DESC_NODETYPE_TREE, (void*)VSAV_A_EFFECTS_PALETTES,  ARRAYSIZE(VSAV_A_EFFECTS_PALETTES) },
    { L"Shadow",                    DESC_NODETYPE_TREE, (void*)VSAV_A_SHADOW_PALETTES,  ARRAYSIZE(VSAV_A_SHADOW_PALETTES) },
    
    { L"Dark Force",                DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_DARKFORCE_PALETTES,  ARRAYSIZE(VSAV_A_BONUS_DARKFORCE_PALETTES) },
    { L"Character Intros",          DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_CHARACTERINTROS_PALETTES,  ARRAYSIZE(VSAV_A_BONUS_CHARACTERINTROS_PALETTES) },
    { L"Title/Select Screen",       DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_TITLES_PALETTES,  ARRAYSIZE(VSAV_A_BONUS_TITLES_PALETTES) },
    { L"Character Select Icons",    DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_CSI_PALETTES, ARRAYSIZE(VSAV_A_BONUS_CSI_PALETTES) },
    { L"Character Select Screen",   DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_CSS_PALETTES, ARRAYSIZE(VSAV_A_BONUS_CSS_PALETTES) },
    { L"Match Text",                DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_TEXT_PALETTES, ARRAYSIZE(VSAV_A_BONUS_TEXT_PALETTES) },
    { L"Sepia Portraits",           DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_SEPIA_PALETTES, ARRAYSIZE(VSAV_A_BONUS_SEPIA_PALETTES) },
    { L"Other",                     DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_OTHER_PALETTES, ARRAYSIZE(VSAV_A_BONUS_OTHER_PALETTES) },
};

const sDescTreeNode VSAV_A_STAGE_COLLECTION[] =
{
    { L"Abaraya",                                   DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_ABARAYA, ARRAYSIZE(VSAV_A_STAGE_PALETTES_ABARAYA) },
    { L"Abaraya: Animation palettes",               DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_ABARAYA_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_ABARAYA_PARTS) },
    { L"EX Abaraya",                                DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_ABARAYA_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_ABARAYA_EX) },
    { L"EX Abaraya: Animation palettes",            DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_ABARAYA_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_ABARAYA_EX_PARTS) },

    { L"Concrete Cave",                             DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_CAVE, ARRAYSIZE(VSAV_A_STAGE_PALETTES_CAVE) },
    { L"EX Concrete Cave",                          DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_CAVE_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_CAVE_EX) },

    { L"Deserted Chateau",                          DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_CHATEAU, ARRAYSIZE(VSAV_A_STAGE_PALETTES_CHATEAU) },
    { L"Deserted Chateau: Animation palettes",      DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_CHATEAU_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_CHATEAU_PARTS) },
    { L"EX Deserted Chateau",                       DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_CHATEAU_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_CHATEAU_EX) },
    { L"EX Deserted Chateau: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_CHATEAU_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_CHATEAU_EX_PARTS) },

    { L"Feast of the Damned",                       DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FEAST, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FEAST) },
    { L"Feast of the Damned: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FEAST_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FEAST_PARTS) },
    { L"EX Feast of the Damned",                    DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FEAST_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FEAST_EX) },
    { L"EX Feast of the Damned: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FEAST_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FEAST_EX_PARTS) },

    { L"Fetus of God",                       DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FETUS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FETUS) },
    { L"Fetus of God: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FETUS_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FETUS_PARTS) },
    { L"EX Fetus of God",                    DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FETUS_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FETUS_EX) },
    { L"EX Fetus of God: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FETUS_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FETUS_EX_PARTS) },

    { L"Forever Torment",                       DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FOREVER, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FOREVER) },
    { L"Forever Torment: Animation palettes",   DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FOREVER_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FOREVER_PARTS) },
    { L"EX Forever Torment",                    DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FOREVER_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FOREVER_EX) },
    { L"EX Forever Torment: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_FOREVER_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_FOREVER_EX_PARTS) },

    { L"Green Scream",                              DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_SCREAM, ARRAYSIZE(VSAV_A_STAGE_PALETTES_SCREAM) },
    { L"Green Scream: Animation palettes",          DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_SCREAM_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_SCREAM_PARTS) },
    { L"EX Green Scream",                           DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_SCREAM_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_SCREAM_EX) },
    { L"EX Green Scream: Animation palettes",       DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_SCREAM_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_SCREAM_EX_PARTS) },

    { L"Iron Horse, Iron Terror",                           DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_IRONHORSE, ARRAYSIZE(VSAV_A_STAGE_PALETTES_IRONHORSE) },
    { L"Iron Horse, Iron Terror: Animation palettes",       DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_IRONHORSE_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_IRONHORSE_PARTS) },
    { L"EX Iron Horse, Iron Terror",                        DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_IRONHORSE_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_IRONHORSE_EX) },
    { L"EX Iron Horse, Iron Terror: Animation palettes",    DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_IRONHORSE_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_IRONHORSE_EX_PARTS) },

    { L"Red Thirst",                                DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_REDTHIRST, ARRAYSIZE(VSAV_A_STAGE_PALETTES_REDTHIRST) },
    { L"Red Thirst: Animation palettes",            DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_REDTHIRST_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_REDTHIRST_PARTS) },
    { L"EX Red Thirst",                             DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_REDTHIRST_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_REDTHIRST_EX) },
    { L"EX Red Thirst: Animation palettes",         DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_REDTHIRST_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_REDTHIRST_EX_PARTS) },

    // Revenger's Roost

    { L"Tower of Arrogance",                        DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_TOWER, ARRAYSIZE(VSAV_A_STAGE_PALETTES_TOWER) },
    { L"Tower of Arrogance: Animation palettes",    DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_TOWER_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_TOWER_PARTS) },
    { L"EX Tower of Arrogance",                     DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_TOWER_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_TOWER_EX) },
    { L"EX Tower of Arrogance: Animation palettes", DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_TOWER_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_TOWER_EX_PARTS) },

    { L"Vanity Paradise",                           DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_VANITY, ARRAYSIZE(VSAV_A_STAGE_PALETTES_VANITY) },
    { L"EX Vanity Paradise",                        DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_VANITY_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_VANITY_EX) },

    { L"War Agony",                                 DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_WARAGONY, ARRAYSIZE(VSAV_A_STAGE_PALETTES_WARAGONY) },
    { L"War Agony: Animation palettes",             DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_WARAGONY_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_WARAGONY_PARTS) },
    { L"EX War Agony",                              DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_WARAGONY_EX, ARRAYSIZE(VSAV_A_STAGE_PALETTES_WARAGONY_EX) },
    { L"EX War Agony: Animation palettes",          DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_PALETTES_WARAGONY_EX_PARTS, ARRAYSIZE(VSAV_A_STAGE_PALETTES_WARAGONY_EX_PARTS) },

    // Fetus of God
};

const sDescTreeNode VSAV_A_UNITS[] =
{
    { L"Bulleta",           DESC_NODETYPE_TREE, (void*)VSAV_A_BULLETA_COLLECTION,       ARRAYSIZE(VSAV_A_BULLETA_COLLECTION) }, // BB-Hood
    { L"Demitri",           DESC_NODETYPE_TREE, (void*)VSAV_A_DEMITRI_COLLECTION,       ARRAYSIZE(VSAV_A_DEMITRI_COLLECTION) },
    { L"Gallon",            DESC_NODETYPE_TREE, (void*)VSAV_A_GALLON_COLLECTION,        ARRAYSIZE(VSAV_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Victor",            DESC_NODETYPE_TREE, (void*)VSAV_A_VICTOR_COLLECTION,        ARRAYSIZE(VSAV_A_VICTOR_COLLECTION) },
    { L"Zabel",             DESC_NODETYPE_TREE, (void*)VSAV_A_ZABEL_COLLECTION,         ARRAYSIZE(VSAV_A_ZABEL_COLLECTION) }, // Lord Raptor
    { L"Morrigan",          DESC_NODETYPE_TREE, (void*)VSAV_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VSAV_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",          DESC_NODETYPE_TREE, (void*)VSAV_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VSAV_A_ANAKARIS_COLLECTION) },
    { L"Felicia",           DESC_NODETYPE_TREE, (void*)VSAV_A_FELICIA_COLLECTION,       ARRAYSIZE(VSAV_A_FELICIA_COLLECTION) },
    { L"Bishamon",          DESC_NODETYPE_TREE, (void*)VSAV_A_BISHAMON_COLLECTION,      ARRAYSIZE(VSAV_A_BISHAMON_COLLECTION) },
    { L"Aulbath",           DESC_NODETYPE_TREE, (void*)VSAV_A_AULBATH_COLLECTION,       ARRAYSIZE(VSAV_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch",         DESC_NODETYPE_TREE, (void*)VSAV_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VSAV_A_SASQUATCH_COLLECTION) },
    { L"Q-Bee",             DESC_NODETYPE_TREE, (void*)VSAV_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VSAV_A_QUEENBEE_COLLECTION) },
    { L"Lei-Lei",           DESC_NODETYPE_TREE, (void*)VSAV_A_LEILEI_COLLECTION,        ARRAYSIZE(VSAV_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { L"Lilith",            DESC_NODETYPE_TREE, (void*)VSAV_A_LILITH_COLLECTION,        ARRAYSIZE(VSAV_A_LILITH_COLLECTION) },
    { L"Jedah",             DESC_NODETYPE_TREE, (void*)VSAV_A_JEDAH_COLLECTION,         ARRAYSIZE(VSAV_A_JEDAH_COLLECTION) },
    { L"Dark Gallon",       DESC_NODETYPE_TREE, (void*)VSAV_A_DARKGALLON_COLLECTION,    ARRAYSIZE(VSAV_A_DARKGALLON_COLLECTION) },
    { L"Oboro Bishamon",    DESC_NODETYPE_TREE, (void*)VSAV_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VSAV_A_OBOROBISHAMON_COLLECTION) },
    { L"Anita (Unused)",    DESC_NODETYPE_TREE, (void*)VSAV_A_ANITA_COLLECTION,         ARRAYSIZE(VSAV_A_ANITA_COLLECTION) },
    { L"Phobos (Unplayable)", DESC_NODETYPE_TREE, (void*)VSAV_A_PHOBOS_COLLECTION,       ARRAYSIZE(VSAV_A_PHOBOS_COLLECTION) },
    { L"Stages",            DESC_NODETYPE_TREE, (void*)VSAV_A_STAGE_COLLECTION,         ARRAYSIZE(VSAV_A_STAGE_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)VSAV_A_BONUS_COLLECTION,         ARRAYSIZE(VSAV_A_BONUS_COLLECTION) },
};

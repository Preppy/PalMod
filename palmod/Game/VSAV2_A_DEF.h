#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VSAV2_A_MORRIGAN_PALETTES. 
// * Update every array using VSAV2_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 VSAV2_A_IMG_UNITS[] =
{
    indexCPS2_Anakaris,
    indexCPS2_Anita,
    indexCPS2_BBHood,
    indexCPS2_Felicia,
    indexCPS2_Morrigan,
    indexCPS2_Vamp_Aulbath,   // 0x67
    indexCPS2_Vamp_Bishamon,  // 0x68
    indexCPS2_Vamp_Dee,       // 0x69
    indexCPS2_Vamp_Demitri,   // 0x6A
    indexCPS2_Vamp_Donovan,   // 0x6B
    indexCPS2_Vamp_Gallon,    // 0x6C
    indexCPS2_Vamp_Jedah,     // 0x6D
    indexCPS2_Vamp_LeiLei,    // 0x6E
    indexCPS2_Vamp_Lilith,    // 0x6F
    indexCPS2_Vamp_Marionette, // 0x70
    indexCPS2_Vamp_Phobos,    // 0x71
    indexCPS2_Vamp_Pyron,     // 0x72
    indexCPS2_Vamp_QBee,      // 0x73
    indexCPS2_Vamp_Sasquatch, // 0x74
    indexCPS2_Vamp_Shadow,    // 0x75
    indexCPS2_Vamp_Victor,    // 0x76
    indexCPS2_Vamp_Zabel,     // 0x77

    indexCPS2_VSAV1_WinPortraits, // 0x78
    indexCPS2_Vamp_DarkGallon,
    indexCPS2_VSAV1_Bonus, // 0x7c
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LP[] =
{
    { L"LP Bulleta", 0x16c9a, 0x16cba, indexCPS2_BBHood, 0x0 },
    { L"LP Critters", 0x16cba, 0x16cda, indexCPS2_BBHood, 0x01 },
    { L"LP Weapons", 0x16cda, 0x16cfa, indexCPS2_BBHood, 0x02 },
    { L"LP Explosions", 0x16cfa, 0x16d1a },
    { L"LP Select Portrait", 0x4117a, 0x4119a, indexCPS2_BBHood, 0x20 },
    { L"LP Win Portrait", 0x42bba, 0x42c5a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x16d1a, 0x16d3a, indexCPS2_BBHood, 0x0 },
    { L"MP Critters", 0x16d3a, 0x16d5a, indexCPS2_BBHood, 0x01 },
    { L"MP Weapons", 0x16d5a, 0x16d7a, indexCPS2_BBHood, 0x02 },
    { L"MP Explosions", 0x16d7a, 0x16d9a },
    { L"MP Select Portrait", 0x4137a, 0x4139a, indexCPS2_BBHood, 0x20 },
    { L"MP Win Portrait", 0x436fa, 0x4379a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x16d9a, 0x16dba, indexCPS2_BBHood, 0x0 },
    { L"HP Critters", 0x16dba, 0x16dda, indexCPS2_BBHood, 0x01 },
    { L"HP Weapons", 0x16dda, 0x16dfa, indexCPS2_BBHood, 0x02 },
    { L"HP Explosions", 0x16dfa, 0x16e1a },
    { L"HP Select Portrait", 0x4157a, 0x4159a, indexCPS2_BBHood, 0x20 },
    { L"HP Win Portrait", 0x4423a, 0x442da },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x16e1a, 0x16e3a, indexCPS2_BBHood, 0x0 },
    { L"LK Critters", 0x16e3a, 0x16e5a, indexCPS2_BBHood, 0x01 },
    { L"LK Weapons", 0x16e5a, 0x16e7a, indexCPS2_BBHood, 0x02 },
    { L"LK Explosions", 0x16e7a, 0x16e9a },
    { L"LK Select Portrait", 0x4177a, 0x4179a, indexCPS2_BBHood, 0x20 },
    { L"LK Win Portrait", 0x44d7a, 0x44e1a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x16e9a, 0x16eba, indexCPS2_BBHood, 0x0 },
    { L"MK Critters", 0x16eba, 0x16eda, indexCPS2_BBHood, 0x01 },
    { L"MK Weapons", 0x16eda, 0x16efa, indexCPS2_BBHood, 0x02 },
    { L"MK Explosions", 0x16efa, 0x16f1a },
    { L"MK Select Portrait", 0x4197a, 0x4199a, indexCPS2_BBHood, 0x20 },
    { L"MK Win Portrait", 0x458ba, 0x4595a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x16f1a, 0x16f3a, indexCPS2_BBHood, 0x0 },
    { L"HK Critters", 0x16f3a, 0x16f5a, indexCPS2_BBHood, 0x01 },
    { L"HK Weapons", 0x16f5a, 0x16f7a, indexCPS2_BBHood, 0x02 },
    { L"HK Explosions", 0x16f7a, 0x16f9a },
    { L"HK Select Portrait", 0x41b7a, 0x41b9a, indexCPS2_BBHood, 0x20 },
    { L"HK Win Portrait", 0x463fa, 0x4649a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x16f9a, 0x16fba, indexCPS2_BBHood, 0x0 },
    { L"PP Critters", 0x16fba, 0x16fda, indexCPS2_BBHood, 0x01 },
    { L"PP Weapons", 0x16fda, 0x16ffa, indexCPS2_BBHood, 0x02 },
    { L"PP Explosions", 0x16ffa, 0x1701a },
    { L"PP Select Portrait", 0x41d7a, 0x41d9a, indexCPS2_BBHood, 0x20 },
    { L"PP Win Portrait", 0x46f3a, 0x46fda },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x1701a, 0x1703a, indexCPS2_BBHood, 0x0 },
    { L"KK Critters", 0x1703a, 0x1705a, indexCPS2_BBHood, 0x01 },
    { L"KK Weapons", 0x1705a, 0x1707a, indexCPS2_BBHood, 0x02 },
    { L"KK Explosions", 0x1707a, 0x1709a },
    { L"KK Select Portrait", 0x41f7a, 0x41f9a, indexCPS2_BBHood, 0x20 },
    { L"KK Win Portrait", 0x47a7a, 0x47b1a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x1709a, 0x170ba, indexCPS2_BBHood, 0x0 },
    { L"AP Critters", 0x170ba, 0x170da, indexCPS2_BBHood, 0x01 },
    { L"AP Weapons", 0x170da, 0x170fa, indexCPS2_BBHood, 0x02 },
    { L"AP Explosions", 0x170fa, 0x1711a },
    { L"AP Select Portrait", 0x4217a, 0x4219a, indexCPS2_BBHood, 0x20 },
    { L"AP Win Portrait", 0x485ba, 0x4865a },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x1711a, 0x1713a, indexCPS2_BBHood, 0x0 },
    { L"AK Critters", 0x1713a, 0x1715a, indexCPS2_BBHood, 0x01 },
    { L"AK Weapons", 0x1715a, 0x1717a, indexCPS2_BBHood, 0x02 },
    { L"AK Explosions", 0x1717a, 0x1719a },
    { L"AK Select Portrait", 0x4237a, 0x4239a, indexCPS2_BBHood, 0x20 },
    { L"AK Win Portrait", 0x490fa, 0x4919a },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x1719a, 0x171ba, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Teledash 1", 0x171fa, 0x1721a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Teledash 2", 0x171ba, 0x171da, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Fireball", 0x171da, 0x171fa, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LP Select Portrait", 0x4119a, 0x411ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LP Win Portrait", 0x42c5a, 0x42cfa },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri", 0x1721a, 0x1723a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Teledash 1", 0x1727a, 0x1729a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Teledash 2", 0x1723a, 0x1725a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Fireball", 0x1725a, 0x1727a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MP Select Portrait", 0x4139a, 0x413ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MP Win Portrait", 0x4379a, 0x4383a },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x1729a, 0x172ba, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Teledash 1", 0x172fa, 0x1731a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Teledash 2", 0x172ba, 0x172da, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Fireball", 0x172da, 0x172fa, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HP Select Portrait", 0x4159a, 0x415ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HP Win Portrait", 0x442da, 0x4437a },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x1731a, 0x1733a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Teledash 1", 0x1737a, 0x1739a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Teledash 2", 0x1733a, 0x1735a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Fireball", 0x1735a, 0x1737a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LK Select Portrait", 0x4179a, 0x417ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LK Win Portrait", 0x44e1a, 0x44eba },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x1739a, 0x173ba, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Teledash 1", 0x173fa, 0x1741a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Teledash 2", 0x173ba, 0x173da, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Fireball", 0x173da, 0x173fa, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MK Select Portrait", 0x4199a, 0x419ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MK Win Portrait", 0x4595a, 0x459fa },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x1741a, 0x1743a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Teledash 1", 0x1747a, 0x1749a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Teledash 2", 0x1743a, 0x1745a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Fireball", 0x1745a, 0x1747a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HK Select Portrait", 0x41b9a, 0x41bba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HK Win Portrait", 0x4649a, 0x4653a },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x1749a, 0x174ba, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Teledash 1", 0x174fa, 0x1751a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Teledash 2", 0x174ba, 0x174da, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Fireball", 0x174da, 0x174fa, indexCPS2_Vamp_Demitri, 0x01 },
    { L"PP Select Portrait", 0x41d9a, 0x41dba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"PP Win Portrait", 0x46fda, 0x4707a },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x1751a, 0x1753a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Teledash 1", 0x1757a, 0x1759a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Teledash 2", 0x1753a, 0x1755a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Fireball", 0x1755a, 0x1757a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"KK Select Portrait", 0x41f9a, 0x41fba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"KK Win Portrait", 0x47b1a, 0x47bba },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x1759a, 0x175ba, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Teledash 1", 0x175fa, 0x1761a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Teledash 2", 0x175ba, 0x175da, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Fireball", 0x175da, 0x175fa, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AP Select Portrait", 0x4219a, 0x421ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AP Win Portrait", 0x4865a, 0x486fa },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x1761a, 0x1763a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Teledash 1", 0x1767a, 0x1769a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Teledash 2", 0x1763a, 0x1765a, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Fireball", 0x1765a, 0x1767a, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AK Select Portrait", 0x4239a, 0x423ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AK Win Portrait", 0x4919a, 0x4923a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x1769a, 0x176ba, indexCPS2_Vamp_Gallon, 0x0 },
    { L"LP Intro/Outro", 0x176ba, 0x176da },
    { L"LP 236P/41236KK/j.HP", 0x176da, 0x176fa },
    { L"LP 236P/28K/Outro Flash", 0x176fa, 0x1771a },
    { L"LP Select Portrait", 0x411ba, 0x411da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LP Win Portrait", 0x42cfa, 0x42d9a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x1771a, 0x1773a, indexCPS2_Vamp_Gallon, 0x0 },
    { L"MP Intro/Outro", 0x1773a, 0x1775a },
    { L"MP 236P/41236KK/j.HP", 0x1775a, 0x1777a },
    { L"MP 236P/28K/Outro Flash", 0x1777a, 0x1779a },
    { L"MP Select Portrait", 0x413ba, 0x413da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MP Win Portrait", 0x4383a, 0x438da },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x1779a, 0x177ba, indexCPS2_Vamp_Gallon, 0x0 },
    { L"HP Intro/Outro", 0x177ba, 0x177da },
    { L"HP 236P/41236KK/j.HP", 0x177da, 0x177fa },
    { L"HP 236P/28K/Outro Flash", 0x177fa, 0x1781a },
    { L"HP Select Portrait", 0x415ba, 0x415da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HP Win Portrait", 0x4437a, 0x4441a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x1781a, 0x1783a, indexCPS2_Vamp_Gallon, 0x0 },
    { L"LK Intro/Outro", 0x1783a, 0x1785a },
    { L"LK 236P/41236KK/j.HP", 0x1785a, 0x1787a },
    { L"LK 236P/28K/Outro Flash", 0x1787a, 0x1789a },
    { L"LK Select Portrait", 0x417ba, 0x417da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LK Win Portrait", 0x44eba, 0x44f5a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x1789a, 0x178ba, indexCPS2_Vamp_Gallon, 0x0 },
    { L"MK Intro/Outro", 0x178ba, 0x178da },
    { L"MK 236P/41236KK/j.HP", 0x178da, 0x178fa },
    { L"MK 236P/28K/Outro Flash", 0x178fa, 0x1791a },
    { L"MK Select Portrait", 0x419ba, 0x419da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MK Win Portrait", 0x459fa, 0x45a9a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x1791a, 0x1793a, indexCPS2_Vamp_Gallon, 0x0 },
    { L"HK Intro/Outro", 0x1793a, 0x1795a },
    { L"HK 236P/41236KK/j.HP", 0x1795a, 0x1797a },
    { L"HK 236P/28K/Outro Flash", 0x1797a, 0x1799a },
    { L"HK Select Portrait", 0x41bba, 0x41bda, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HK Win Portrait", 0x4653a, 0x465da },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x1799a, 0x179ba, indexCPS2_Vamp_Gallon, 0x0 },
    { L"PP Intro/Outro", 0x179ba, 0x179da },
    { L"PP 236P/41236KK/j.HP", 0x179da, 0x179fa },
    { L"PP 236P/28K/Outro Flash", 0x179fa, 0x17a1a },
    { L"PP Select Portrait", 0x41dba, 0x41dda, indexCPS2_Vamp_Gallon, 0x20 },
    { L"PP Win Portrait", 0x4707a, 0x4711a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x17a1a, 0x17a3a, indexCPS2_Vamp_Gallon, 0x0 },
    { L"KK Intro/Outro", 0x17a3a, 0x17a5a },
    { L"KK 236P/41236KK/j.HP", 0x17a5a, 0x17a7a },
    { L"KK 236P/28K/Outro Flash", 0x17a7a, 0x17a9a },
    { L"KK Select Portrait", 0x41fba, 0x41fda, indexCPS2_Vamp_Gallon, 0x20 },
    { L"KK Win Portrait", 0x47bba, 0x47c5a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x17a9a, 0x17aba, indexCPS2_Vamp_Gallon, 0x0 },
    { L"AP Intro/Outro", 0x17aba, 0x17ada },
    { L"AP 236P/41236KK/j.HP", 0x17ada, 0x17afa },
    { L"AP 236P/28K/Outro Flash", 0x17afa, 0x17b1a },
    { L"AP Select Portrait", 0x421ba, 0x421da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AP Win Portrait", 0x486fa, 0x4879a },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x17b1a, 0x17b3a, indexCPS2_Vamp_Gallon, 0x0 },
    { L"AK Intro/Outro", 0x17b3a, 0x17b5a },
    { L"AK 236P/41236KK/j.HP", 0x17b5a, 0x17b7a },
    { L"AK 236P/28K/Outro Flash", 0x17b7a, 0x17b9a },
    { L"AK Select Portrait", 0x423ba, 0x423da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AK Win Portrait", 0x4923a, 0x492da },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x17b9a, 0x17bba, indexCPS2_Vamp_Victor, 0x0 },
    { L"LP Electric Flash", 0x17bfa, 0x17c1a, indexCPS2_Vamp_Victor, 0x0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x17bba, 0x17bda },
    { L"LP Electricity", 0x17bda, 0x17bfa },
    { L"LP Select Portrait", 0x411da, 0x411fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"LP Win Portrait", 0x42d9a, 0x42e3a },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x17c1a, 0x17c3a, indexCPS2_Vamp_Victor, 0x0 },
    { L"MP Electric Flash", 0x17c7a, 0x17c9a, indexCPS2_Vamp_Victor, 0x0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x17c3a, 0x17c5a },
    { L"MP Electricity", 0x17c5a, 0x17c7a },
    { L"MP Select Portrait", 0x413da, 0x413fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"MP Win Portrait", 0x438da, 0x4397a },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x17c9a, 0x17cba, indexCPS2_Vamp_Victor, 0x0 },
    { L"HP Electric Flash", 0x17cfa, 0x17d1a, indexCPS2_Vamp_Victor, 0x0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x17cba, 0x17cda },
    { L"HP Electricity", 0x17cda, 0x17cfa },
    { L"HP Select Portrait", 0x415da, 0x415fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"HP Win Portrait", 0x4441a, 0x444ba },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x17d1a, 0x17d3a, indexCPS2_Vamp_Victor, 0x0 },
    { L"LK Electric Flash", 0x17d7a, 0x17d9a, indexCPS2_Vamp_Victor, 0x0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x17d3a, 0x17d5a },
    { L"LK Electricity", 0x17d5a, 0x17d7a },
    { L"LK Select Portrait", 0x417da, 0x417fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"LK Win Portrait", 0x44f5a, 0x44ffa },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x17d9a, 0x17dba, indexCPS2_Vamp_Victor, 0x0 },
    { L"MK Electric Flash", 0x17dfa, 0x17e1a, indexCPS2_Vamp_Victor, 0x0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x17dba, 0x17dda },
    { L"MK Electricity", 0x17dda, 0x17dfa },
    { L"MK Select Portrait", 0x419da, 0x419fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"MK Win Portrait", 0x45a9a, 0x45b3a },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x17e1a, 0x17e3a, indexCPS2_Vamp_Victor, 0x0 },
    { L"HK Electric Flash", 0x17e7a, 0x17e9a, indexCPS2_Vamp_Victor, 0x0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x17e3a, 0x17e5a },
    { L"HK Electricity", 0x17e5a, 0x17e7a },
    { L"HK Select Portrait", 0x41bda, 0x41bfa, indexCPS2_Vamp_Victor, 0x20 },
    { L"HK Win Portrait", 0x465da, 0x4667a },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x17e9a, 0x17eba, indexCPS2_Vamp_Victor, 0x0 },
    { L"PP Electric Flash", 0x17efa, 0x17f1a, indexCPS2_Vamp_Victor, 0x0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x17eba, 0x17eda },
    { L"PP Electricity", 0x17eda, 0x17efa },
    { L"PP Select Portrait", 0x41dda, 0x41dfa, indexCPS2_Vamp_Victor, 0x20 },
    { L"PP Win Portrait", 0x4711a, 0x471ba },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x17f1a, 0x17f3a, indexCPS2_Vamp_Victor, 0x0 },
    { L"KK Electric Flash", 0x17f7a, 0x17f9a, indexCPS2_Vamp_Victor, 0x0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x17f3a, 0x17f5a },
    { L"KK Electricity", 0x17f5a, 0x17f7a },
    { L"KK Select Portrait", 0x41fda, 0x41ffa, indexCPS2_Vamp_Victor, 0x20 },
    { L"KK Win Portrait", 0x47c5a, 0x47cfa },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x17f9a, 0x17fba, indexCPS2_Vamp_Victor, 0x0 },
    { L"AP Electric Flash", 0x17ffa, 0x1801a, indexCPS2_Vamp_Victor, 0x0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x17fba, 0x17fda },
    { L"AP Electricity", 0x17fda, 0x17ffa },
    { L"AP Select Portrait", 0x421da, 0x421fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"AP Win Portrait", 0x4879a, 0x4883a },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x1801a, 0x1803a, indexCPS2_Vamp_Victor, 0x0 },
    { L"AK Electric Flash", 0x1807a, 0x1809a, indexCPS2_Vamp_Victor, 0x0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x1803a, 0x1805a },
    { L"AK Electricity", 0x1805a, 0x1807a },
    { L"AK Select Portrait", 0x423da, 0x423fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"AK Win Portrait", 0x492da, 0x4937a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x1809a, 0x180ba, indexCPS2_Vamp_Zabel, 0x0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x180ba, 0x180da },
    { L"LP Unused 1", 0x180da, 0x180fa },
    { L"LP Unused 2", 0x180fa, 0x1811a },
    { L"LP Select Portrait", 0x411fa, 0x4121a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LP Win Portrait", 0x42e3a, 0x42eda },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x1811a, 0x1813a, indexCPS2_Vamp_Zabel, 0x0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x1813a, 0x1815a },
    { L"MP Unused 1", 0x1815a, 0x1817a },
    { L"MP Unused 2", 0x1817a, 0x1819a },
    { L"MP Select Portrait", 0x413fa, 0x4141a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MP Win Portrait", 0x4397a, 0x43a1a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x1819a, 0x181ba, indexCPS2_Vamp_Zabel, 0x0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x181ba, 0x181da },
    { L"HP Unused 1", 0x181da, 0x181fa },
    { L"HP Unused 2", 0x181fa, 0x1821a },
    { L"HP Select Portrait", 0x415fa, 0x4161a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HP Win Portrait", 0x444ba, 0x4455a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x1821a, 0x1823a, indexCPS2_Vamp_Zabel, 0x0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x1823a, 0x1825a },
    { L"LK Unused 1", 0x1825a, 0x1827a },
    { L"LK Unused 2", 0x1827a, 0x1829a },
    { L"LK Select Portrait", 0x417fa, 0x4181a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LK Win Portrait", 0x44ffa, 0x4509a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x1829a, 0x182ba, indexCPS2_Vamp_Zabel, 0x0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x182ba, 0x182da },
    { L"MK Unused 1", 0x182da, 0x182fa },
    { L"MK Unused 2", 0x182fa, 0x1831a },
    { L"MK Select Portrait", 0x419fa, 0x41a1a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MK Win Portrait", 0x45b3a, 0x45bda },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x1831a, 0x1833a, indexCPS2_Vamp_Zabel, 0x0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x1833a, 0x1835a },
    { L"HK Unused 1", 0x1835a, 0x1837a },
    { L"HK Unused 2", 0x1837a, 0x1839a },
    { L"HK Select Portrait", 0x41bfa, 0x41c1a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HK Win Portrait", 0x4667a, 0x4671a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x1839a, 0x183ba, indexCPS2_Vamp_Zabel, 0x0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x183ba, 0x183da },
    { L"PP Unused 1", 0x183da, 0x183fa },
    { L"PP Unused 2", 0x183fa, 0x1841a },
    { L"PP Select Portrait", 0x41dfa, 0x41e1a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"PP Win Portrait", 0x471ba, 0x4725a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x1841a, 0x1843a, indexCPS2_Vamp_Zabel, 0x0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x1843a, 0x1845a },
    { L"KK Unused 1", 0x1845a, 0x1847a },
    { L"KK Unused 2", 0x1847a, 0x1849a },
    { L"KK Select Portrait", 0x41ffa, 0x4201a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"KK Win Portrait", 0x47cfa, 0x47d9a },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x1849a, 0x184ba, indexCPS2_Vamp_Zabel, 0x0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x184ba, 0x184da },
    { L"AP Unused 1", 0x184da, 0x184fa },
    { L"AP Unused 2", 0x184fa, 0x1851a },
    { L"AP Select Portrait", 0x421fa, 0x4221a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AP Win Portrait", 0x4883a, 0x488da },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x1851a, 0x1853a, indexCPS2_Vamp_Zabel, 0x0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x1853a, 0x1855a },
    { L"AK Unused 1", 0x1855a, 0x1857a },
    { L"AK Unused 2", 0x1857a, 0x1859a },
    { L"AK Select Portrait", 0x423fa, 0x4241a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AK Win Portrait", 0x4937a, 0x4941a },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x1859a, 0x185ba, indexCPS2_Morrigan, 0x00 },
    { L"LP Idle sparkles/Raging demon", 0x185ba, 0x185da, indexCPS2_Morrigan, 0x2 },
    { L"LP Bats", 0x185da, 0x185fa, indexCPS2_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x185fa, 0x1861a },
    { L"LP Select Portrait", 0x4121a, 0x4123a, indexCPS2_Morrigan, 0x20 },
    { L"LP Win Portrait", 0x42eda, 0x42f7a },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x1861a, 0x1863a, indexCPS2_Morrigan, 0x00 },
    { L"MP Idle sparkles/Raging demon", 0x1863a, 0x1865a, indexCPS2_Morrigan, 0x2 },
    { L"MP Bats", 0x1865a, 0x1867a, indexCPS2_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x1867a, 0x1869a },
    { L"MP Select Portrait", 0x4141a, 0x4143a, indexCPS2_Morrigan, 0x20 },
    { L"MP Win Portrait", 0x43a1a, 0x43aba },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x1869a, 0x186ba, indexCPS2_Morrigan, 0x00 },
    { L"HP Idle sparkles/Raging demon", 0x186ba, 0x186da, indexCPS2_Morrigan, 0x2 },
    { L"HP Bats", 0x186da, 0x186fa, indexCPS2_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x186fa, 0x1871a },
    { L"HP Select Portrait", 0x4161a, 0x4163a, indexCPS2_Morrigan, 0x20 },
    { L"HP Win Portrait", 0x4455a, 0x445fa },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x1871a, 0x1873a, indexCPS2_Morrigan, 0x00 },
    { L"LK Idle sparkles/Raging demon", 0x1873a, 0x1875a, indexCPS2_Morrigan, 0x2 },
    { L"LK Bats", 0x1875a, 0x1877a, indexCPS2_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x1877a, 0x1879a },
    { L"LK Select Portrait", 0x4181a, 0x4183a, indexCPS2_Morrigan, 0x20 },
    { L"LK Win Portrait", 0x4509a, 0x4513a },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x1879a, 0x187ba, indexCPS2_Morrigan, 0x00 },
    { L"MK Idle sparkles/Raging demon", 0x187ba, 0x187da, indexCPS2_Morrigan, 0x2 },
    { L"MK Bats", 0x187da, 0x187fa, indexCPS2_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x187fa, 0x1881a },
    { L"MK Select Portrait", 0x41a1a, 0x41a3a, indexCPS2_Morrigan, 0x20 },
    { L"MK Win Portrait", 0x45bda, 0x45c7a },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x1881a, 0x1883a, indexCPS2_Morrigan, 0x00 },
    { L"HK Idle sparkles/Raging demon", 0x1883a, 0x1885a, indexCPS2_Morrigan, 0x2 },
    { L"HK Bats", 0x1885a, 0x1887a, indexCPS2_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x1887a, 0x1889a },
    { L"HK Select Portrait", 0x41c1a, 0x41c3a, indexCPS2_Morrigan, 0x20 },
    { L"HK Win Portrait", 0x4671a, 0x467ba },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x1889a, 0x188ba, indexCPS2_Morrigan, 0x00 },
    { L"PP Idle sparkles/Raging demon", 0x188ba, 0x188da, indexCPS2_Morrigan, 0x2 },
    { L"PP Bats", 0x188da, 0x188fa, indexCPS2_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x188fa, 0x1891a },
    { L"PP Select Portrait", 0x41e1a, 0x41e3a, indexCPS2_Morrigan, 0x20 },
    { L"PP Win Portrait", 0x4725a, 0x472fa },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x1891a, 0x1893a, indexCPS2_Morrigan, 0x00 },
    { L"KK Idle sparkles/Raging demon", 0x1893a, 0x1895a, indexCPS2_Morrigan, 0x2 },
    { L"KK Bats", 0x1895a, 0x1897a, indexCPS2_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x1897a, 0x1899a },
    { L"KK Select Portrait", 0x4201a, 0x4203a, indexCPS2_Morrigan, 0x20 },
    { L"KK Win Portrait", 0x47d9a, 0x47e3a },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x1899a, 0x189ba, indexCPS2_Morrigan, 0x00 },
    { L"AP Idle sparkles/Raging demon", 0x189ba, 0x189da, indexCPS2_Morrigan, 0x2 },
    { L"AP Bats", 0x189da, 0x189fa, indexCPS2_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x189fa, 0x18a1a },
    { L"AP Select Portrait", 0x4221a, 0x4223a, indexCPS2_Morrigan, 0x20 },
    { L"AP Win Portrait", 0x488da, 0x4897a },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x18a1a, 0x18a3a, indexCPS2_Morrigan, 0x00 },
    { L"AK Idle sparkles/Raging demon", 0x18a3a, 0x18a5a, indexCPS2_Morrigan, 0x2 },
    { L"AK Bats", 0x18a5a, 0x18a7a, indexCPS2_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x18a7a, 0x18a9a },
    { L"AK Select Portrait", 0x4241a, 0x4243a, indexCPS2_Morrigan, 0x20 },
    { L"AK Win Portrait", 0x4941a, 0x494ba },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x18a9a, 0x18aba, indexCPS2_Anakaris, 0x0 },
    { L"LP 2.HP/Mummies", 0x18ada, 0x18afa, indexCPS2_Anakaris, 0x2 },
    { L"LP 426KK/62KK Light", 0x18aba, 0x18ada, indexCPS2_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x18afa, 0x18b1a, indexCPS2_Anakaris, 0x3 },
    { L"LP Select Portrait", 0x4123a, 0x4125a, indexCPS2_Anakaris, 0x20 },
    { L"LP Win Portrait", 0x42f7a, 0x4301a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x18b1a, 0x18b3a, indexCPS2_Anakaris, 0x0 },
    { L"MP 2.HP/Mummies", 0x18b5a, 0x18b7a, indexCPS2_Anakaris, 0x2 },
    { L"MP 426KK/62KK Light", 0x18b3a, 0x18b5a, indexCPS2_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x18b7a, 0x18b9a, indexCPS2_Anakaris, 0x3 },
    { L"MP Select Portrait", 0x4143a, 0x4145a, indexCPS2_Anakaris, 0x20 },
    { L"MP Win Portrait", 0x43aba, 0x43b5a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x18b9a, 0x18bba, indexCPS2_Anakaris, 0x0 },
    { L"HP 2.HP/Mummies", 0x18bda, 0x18bfa, indexCPS2_Anakaris, 0x2 },
    { L"HP 426KK/62KK Light", 0x18bba, 0x18bda, indexCPS2_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x18bfa, 0x18c1a, indexCPS2_Anakaris, 0x3 },
    { L"HP Select Portrait", 0x4163a, 0x4165a, indexCPS2_Anakaris, 0x20 },
    { L"HP Win Portrait", 0x445fa, 0x4469a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x18c1a, 0x18c3a, indexCPS2_Anakaris, 0x0 },
    { L"LK 2.HP/Mummies", 0x18c5a, 0x18c7a, indexCPS2_Anakaris, 0x2 },
    { L"LK 426KK/62KK Light", 0x18c3a, 0x18c5a, indexCPS2_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x18c7a, 0x18c9a, indexCPS2_Anakaris, 0x3 },
    { L"LK Select Portrait", 0x4183a, 0x4185a, indexCPS2_Anakaris, 0x20 },
    { L"LK Win Portrait", 0x4513a, 0x451da },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x18c9a, 0x18cba, indexCPS2_Anakaris, 0x0 },
    { L"MK 2.HP/Mummies", 0x18cda, 0x18cfa, indexCPS2_Anakaris, 0x2 },
    { L"MK 426KK/62KK Light", 0x18cba, 0x18cda, indexCPS2_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x18cfa, 0x18d1a, indexCPS2_Anakaris, 0x3 },
    { L"MK Select Portrait", 0x41a3a, 0x41a5a, indexCPS2_Anakaris, 0x20 },
    { L"MK Win Portrait", 0x45c7a, 0x45d1a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x18d1a, 0x18d3a, indexCPS2_Anakaris, 0x0 },
    { L"HK 2.HP/Mummies", 0x18d5a, 0x18d7a, indexCPS2_Anakaris, 0x2 },
    { L"HK 426KK/62KK Light", 0x18d3a, 0x18d5a, indexCPS2_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x18d7a, 0x18d9a, indexCPS2_Anakaris, 0x3 },
    { L"HK Select Portrait", 0x41c3a, 0x41c5a, indexCPS2_Anakaris, 0x20 },
    { L"HK Win Portrait", 0x467ba, 0x4685a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x18d9a, 0x18dba, indexCPS2_Anakaris, 0x0 },
    { L"PP 2.HP/Mummies", 0x18dda, 0x18dfa, indexCPS2_Anakaris, 0x2 },
    { L"PP 426KK/62KK Light", 0x18dba, 0x18dda, indexCPS2_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x18dfa, 0x18e1a, indexCPS2_Anakaris, 0x3 },
    { L"PP Select Portrait", 0x41e3a, 0x41e5a, indexCPS2_Anakaris, 0x20 },
    { L"PP Win Portrait", 0x472fa, 0x4739a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x18e1a, 0x18e3a, indexCPS2_Anakaris, 0x0 },
    { L"KK 2.HP/Mummies", 0x18e5a, 0x18e7a, indexCPS2_Anakaris, 0x2 },
    { L"KK 426KK/62KK Light", 0x18e3a, 0x18e5a, indexCPS2_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x18e7a, 0x18e9a, indexCPS2_Anakaris, 0x3 },
    { L"KK Select Portrait", 0x4203a, 0x4205a, indexCPS2_Anakaris, 0x20 },
    { L"KK Win Portrait", 0x47e3a, 0x47eda },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x18e9a, 0x18eba, indexCPS2_Anakaris, 0x0 },
    { L"AP 2.HP/Mummies", 0x18eda, 0x18efa, indexCPS2_Anakaris, 0x2 },
    { L"AP 426KK/62KK Light", 0x18eba, 0x18eda, indexCPS2_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x18efa, 0x18f1a, indexCPS2_Anakaris, 0x3 },
    { L"AP Select Portrait", 0x4223a, 0x4225a, indexCPS2_Anakaris, 0x20 },
    { L"AP Win Portrait", 0x4897a, 0x48a1a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x18f1a, 0x18f3a, indexCPS2_Anakaris, 0x0 },
    { L"AK 2.HP/Mummies", 0x18f5a, 0x18f7a, indexCPS2_Anakaris, 0x2 },
    { L"AK 426KK/62KK Light", 0x18f3a, 0x18f5a, indexCPS2_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x18f7a, 0x18f9a, indexCPS2_Anakaris, 0x3 },
    { L"AK Select Portrait", 0x4243a, 0x4245a, indexCPS2_Anakaris, 0x20 },
    { L"AK Win Portrait", 0x494ba, 0x4955a },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Anakaris Pharaoh Magic Orbs 2", 0x1b2e0 + 0x1603a, 0x1b320 + 0x1603a, indexCPS2_Anakaris, 0x0b, &pairNext2 },
    { L"Anakaris Pharaoh Asteroids",    0x1b320 + 0x1603a, 0x1b340 + 0x1603a, indexCPS2_Anakaris, 0x08 },
    { L"Anakaris Pharaoh Magic Orbs 4", 0x1b340 + 0x1603a, 0x1b360 + 0x1603a, indexCPS2_Anakaris, 0x0e },
    { L"Anakaris Pharaoh Girls/Mini Mummy LP",        0x1b360 + 0x1603a, 0x1b3a0 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MP",        0x1b3a0 + 0x1603a, 0x1b3e0 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HP",        0x1b3e0 + 0x1603a, 0x1b420 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy LK",        0x1b420 + 0x1603a, 0x1b460 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MK",        0x1b460 + 0x1603a, 0x1b4a0 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HK",        0x1b4a0 + 0x1603a, 0x1b4e0 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy PP",        0x1b4e0 + 0x1603a, 0x1b520 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy KK",        0x1b520 + 0x1603a, 0x1b560 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AP",        0x1b560 + 0x1603a, 0x1b5a0 + 0x1603a, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AK",        0x1b5a0 + 0x1603a, 0x1b5e0 + 0x1603a, indexCPS2_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x18f9a, 0x18fba, indexCPS2_Felicia, 0x0 },
    { L"LP Helpers/Mouse", 0x18fba, 0x18fda, indexCPS2_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x18fda, 0x18ffa, indexCPS2_Felicia, 0x01 },
    { L"LP Unknown Extra", 0x18ffa, 0x1901a },
    { L"LP Select portrait", 0x4125a, 0x4127a, indexCPS2_Felicia, 0x20 },
    { L"LP Win Portrait", 0x4301a, 0x430ba },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x1901a, 0x1903a, indexCPS2_Felicia, 0x0 },
    { L"MP Helpers/Mouse", 0x1903a, 0x1905a, indexCPS2_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x1905a, 0x1907a, indexCPS2_Felicia, 0x01 },
    { L"MP Unknown Extra", 0x1907a, 0x1909a },
    { L"MP Select Portrait", 0x4145a, 0x4147a, indexCPS2_Felicia, 0x20 },
    { L"MP Win Portrait", 0x43b5a, 0x43bfa },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x1909a, 0x190ba, indexCPS2_Felicia, 0x0 },
    { L"HP Helpers/Mouse", 0x190ba, 0x190da, indexCPS2_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x190da, 0x190fa, indexCPS2_Felicia, 0x01 },
    { L"HP Unknown Extra", 0x190fa, 0x1911a },
    { L"HP Select Portrait", 0x4165a, 0x4167a, indexCPS2_Felicia, 0x20 },
    { L"HP Win Portrait", 0x4469a, 0x4473a },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x1911a, 0x1913a, indexCPS2_Felicia, 0x0 },
    { L"LK Helpers/Mouse", 0x1913a, 0x1915a, indexCPS2_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x1915a, 0x1917a, indexCPS2_Felicia, 0x01},
    { L"LK Unknown Extra", 0x1917a, 0x1919a },
    { L"LK Select Portrait", 0x4185a, 0x4187a, indexCPS2_Felicia, 0x20 },
    { L"LK Win Portrait", 0x451da, 0x4527a },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x1919a, 0x191ba, indexCPS2_Felicia, 0x0 },
    { L"MK Helpers/Mouse", 0x191ba, 0x191da, indexCPS2_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x191da, 0x191fa, indexCPS2_Felicia, 0x01 },
    { L"MK Unknown Extra", 0x191fa, 0x1921a },
    { L"MK Select Portrait", 0x41a5a, 0x41a7a, indexCPS2_Felicia, 0x20 },
    { L"MK Win Portrait", 0x45d1a, 0x45dba },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x1921a, 0x1923a, indexCPS2_Felicia, 0x0 },
    { L"HK Helpers/Mouse", 0x1923a, 0x1925a, indexCPS2_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x1925a, 0x1927a, indexCPS2_Felicia, 0x01 },
    { L"HK Unknown Extra", 0x1927a, 0x1929a },
    { L"HK Select Portrait", 0x41c5a, 0x41c7a, indexCPS2_Felicia, 0x20 },
    { L"HK Win Portrait", 0x4685a, 0x468fa },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x1929a, 0x192ba, indexCPS2_Felicia, 0x0 },
    { L"PP Helpers/Mouse", 0x192ba, 0x192da, indexCPS2_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x192da, 0x192fa, indexCPS2_Felicia, 0x01 },
    { L"PP Unknown Extra", 0x192fa, 0x1931a },
    { L"PP Select Portrait", 0x41e5a, 0x41e7a, indexCPS2_Felicia, 0x20 },
    { L"PP Win Portrait", 0x4739a, 0x4743a },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x1931a, 0x1933a, indexCPS2_Felicia, 0x0 },
    { L"KK Helpers/Mouse", 0x1933a, 0x1935a, indexCPS2_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x1935a, 0x1937a, indexCPS2_Felicia, 0x01 },
    { L"KK Unknown Extra", 0x1937a, 0x1939a },
    { L"KK Select Portrait", 0x4205a, 0x4207a, indexCPS2_Felicia, 0x20 },
    { L"KK Win Portrait", 0x47eda, 0x47f7a },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x1939a, 0x193ba, indexCPS2_Felicia, 0x0 },
    { L"AP Helpers/Mouse", 0x193ba, 0x193da, indexCPS2_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x193da, 0x193fa, indexCPS2_Felicia, 0x01 },
    { L"AP Unknown Extra", 0x193fa, 0x1941a },
    { L"AP Select Portrait", 0x4225a, 0x4227a, indexCPS2_Felicia, 0x20 },
    { L"AP Win Portrait", 0x48a1a, 0x48aba },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x1941a, 0x1943a, indexCPS2_Felicia, 0x0 },
    { L"AK Helpers/Mouse", 0x1943a, 0x1945a, indexCPS2_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x1945a, 0x1947a, indexCPS2_Felicia, 0x01 },
    { L"AK Unknown Extra", 0x1947a, 0x1949a },
    { L"AK Select Portrait", 0x4245a, 0x4247a, indexCPS2_Felicia, 0x20 },
    { L"AK Win Portrait", 0x4955a, 0x495fa },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x1949a, 0x194ba, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x194da, 0x194fa },
    { L"LP 41236KK", 0x194ba, 0x194da, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Unknown Extra", 0x194fa, 0x1951a },
    { L"LP Select Portrait", 0x4127a, 0x4129a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x430ba, 0x4315a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x1951a, 0x1953a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1955a, 0x1957a },
    { L"MP 41236KK", 0x1953a, 0x1955a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Unknown Extra", 0x1957a, 0x1959a },
    { L"MP Select Portrait", 0x4147a, 0x4149a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x43bfa, 0x43c9a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x1959a, 0x195ba, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x195da, 0x195fa },
    { L"HP 41236KK", 0x195ba, 0x195da, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Unknown Extra", 0x195fa, 0x1961a },
    { L"HP Select Portrait", 0x4167a, 0x4169a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x4473a, 0x447da },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x1961a, 0x1963a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1965a, 0x1967a },
    { L"LK 41236KK", 0x1963a, 0x1965a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Unknown Extra", 0x1967a, 0x1969a },
    { L"LK Select Portrait", 0x4187a, 0x4189a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x4527a, 0x4531a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x1969a, 0x196ba, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x196da, 0x196fa },
    { L"MK 41236KK", 0x196ba, 0x196da, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Unknown Extra", 0x196fa, 0x1971a },
    { L"MK Select Portrait", 0x41a7a, 0x41a9a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x45dba, 0x45e5a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x1971a, 0x1973a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1975a, 0x1977a },
    { L"HK 41236KK", 0x1973a, 0x1975a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Unknown Extra", 0x1977a, 0x1979a },
    { L"HK Select Portrait", 0x41c7a, 0x41c9a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x468fa, 0x4699a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x1979a, 0x197ba, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x197da, 0x197fa },
    { L"PP 41236KK", 0x197ba, 0x197da, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Unknown Extra", 0x197fa, 0x1981a },
    { L"PP Select Portrait", 0x41e7a, 0x41e9a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"PP Win Portrait", 0x4743a, 0x474da },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x1981a, 0x1983a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1985a, 0x1987a },
    { L"KK 41236KK", 0x1983a, 0x1985a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Unknown Extra", 0x1987a, 0x1989a },
    { L"KK Select Portrait", 0x4207a, 0x4209a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"KK Win Portrait", 0x47f7a, 0x4801a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x1989a, 0x198ba, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x198da, 0x198fa },
    { L"AP 41236KK", 0x198ba, 0x198da, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Unknown Extra", 0x198fa, 0x1991a },
    { L"AP Select Portrait", 0x4227a, 0x4229a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AP Win Portrait", 0x48aba, 0x48b5a },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x1991a, 0x1993a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks", 0x1995a, 0x1997a },
    { L"AK 41236KK", 0x1993a, 0x1995a, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Unknown Extra", 0x1997a, 0x1999a },
    { L"AK Select Portrait", 0x4247a, 0x4249a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AK Win Portrait", 0x495fa, 0x4969a },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x1999a, 0x199ba, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"LP Water/s.MK/j.MP", 0x199ba, 0x199da },
    { L"LP Poison Cloud", 0x199fa, 0x19a1a },
    { L"LP Mach Crab (not full pal)", 0x199da, 0x199fa },
    { L"LP Select Portrait", 0x4129a, 0x412ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LP Win Portrait", 0x4315a, 0x431fa },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x19a1a, 0x19a3a, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"MP Water/s.MK/j.MP", 0x19a3a, 0x19a5a },
    { L"MP Poison Cloud", 0x19a7a, 0x19a9a },
    { L"MP Mach Crab (not full pal)", 0x19a5a, 0x19a7a },
    { L"MP Select Portrait", 0x4149a, 0x414ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MP Win Portrait", 0x43c9a, 0x43d3a },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x19a9a, 0x19aba, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"HP Water/s.MK/j.MP", 0x19aba, 0x19ada },
    { L"HP Poison Cloud", 0x19afa, 0x19b1a },
    { L"HP Mach Crab (not full pal)", 0x19ada, 0x19afa },
    { L"HP Select Portrait", 0x4169a, 0x416ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HP Win Portrait", 0x447da, 0x4487a },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x19b1a, 0x19b3a, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"LK Water/s.MK/j.MP", 0x19b3a, 0x19b5a },
    { L"LK Poison Cloud", 0x19b7a, 0x19b9a },
    { L"LK Mach Crab (not full pal)", 0x19b5a, 0x19b7a },
    { L"LK Select Portrait", 0x4189a, 0x418ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LK Win Portrait", 0x4531a, 0x453ba },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x19b9a, 0x19bba, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"MK Water/s.MK/j.MP", 0x19bba, 0x19bda },
    { L"MK Poison Cloud", 0x19bfa, 0x19c1a },
    { L"MK Mach Crab (not full pal)", 0x19bda, 0x19bfa },
    { L"MK Select Portrait", 0x41a9a, 0x41aba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MK Win Portrait", 0x45e5a, 0x45efa },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x19c1a, 0x19c3a, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"HK Water/s.MK/j.MP", 0x19c3a, 0x19c5a },
    { L"HK Poison Cloud", 0x19c7a, 0x19c9a },
    { L"HK Mach Crab (not full pal)", 0x19c5a, 0x19c7a },
    { L"HK Select Portrait", 0x41c9a, 0x41cba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HK Win Portrait", 0x4699a, 0x46a3a },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x19c9a, 0x19cba, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"PP Poison Cloud", 0x19cfa, 0x19d1a },
    { L"PP Water/s.MK/j.MP", 0x19cba, 0x19cda },
    { L"PP Mach Crab (not full pal)", 0x19cda, 0x19cfa },
    { L"PP Select Portrait", 0x41e9a, 0x41eba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"PP Win Portrait", 0x474da, 0x4757a },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x19d1a, 0x19d3a, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"KK Water/s.MK/j.MP", 0x19d3a, 0x19d5a },
    { L"KK Poison Cloud", 0x19d7a, 0x19d9a },
    { L"KK Mach Crab (not full pal)", 0x19d5a, 0x19d7a },
    { L"KK Select Portrait", 0x4209a, 0x420ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"KK Win Portrait", 0x4801a, 0x480ba },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x19d9a, 0x19dba, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"AP Water/s.MK/j.MP", 0x19dba, 0x19dda },
    { L"AP Poison Cloud", 0x19dfa, 0x19e1a },
    { L"AP Mach Crab (not full pal)", 0x19dda, 0x19dfa },
    { L"AP Select Portrait", 0x4229a, 0x422ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AP Win Portrait", 0x48b5a, 0x48bfa },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x19e1a, 0x19e3a, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"AK Water/s.MK/j.MP", 0x19e3a, 0x19e5a },
    { L"AK Poison Cloud", 0x19e7a, 0x19e9a },
    { L"AK Mach Crab (not full pal)", 0x19e5a, 0x19e7a },
    { L"AK Select Portrait", 0x4249a, 0x424ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AK Win Portrait", 0x4969a, 0x4973a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x19e9a, 0x19eba, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"LP Ice Extras", 0x19efa, 0x19f1a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x19eba, 0x19eda, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x19eda, 0x19efa, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LP Select Portrait", 0x412ba, 0x412da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LP Win Portrait", 0x431fa, 0x4329a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x19f1a, 0x19f3a, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"MP Ice Extras", 0x19f7a, 0x19f9a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x19f3a, 0x19f5a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x19f5a, 0x19f7a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MP Select Portrait", 0x414ba, 0x414da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MP Win Portrait", 0x43d3a, 0x43dda },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x19f9a, 0x19fba, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"HP Ice Extras", 0x19ffa, 0x1a01a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x19fba, 0x19fda, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x19fda, 0x19ffa, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HP Select Portrait", 0x416ba, 0x416da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HP Win Portrait", 0x4487a, 0x4491a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x1a01a, 0x1a03a, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"LK Ice Extras", 0x1a07a, 0x1a09a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x1a03a, 0x1a05a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x1a05a, 0x1a07a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LK Select Portrait", 0x418ba, 0x418da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LK Win Portrait", 0x453ba, 0x4545a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x1a09a, 0x1a0ba, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"MK Ice Extras", 0x1a0fa, 0x1a11a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x1a0ba, 0x1a0da, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x1a0da, 0x1a0fa, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MK Select Portrait", 0x41aba, 0x41ada, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MK Win Portrait", 0x45efa, 0x45f9a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x1a11a, 0x1a13a, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"HK Ice Extras", 0x1a17a, 0x1a19a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x1a13a, 0x1a15a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x1a15a, 0x1a17a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HK Select Portrait", 0x3faba, 0x3fada, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HK Win Portrait", 0x46a3a, 0x46ada },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x1a19a, 0x1a1ba, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"PP Ice Extras", 0x1a1fa, 0x1a21a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x1a1ba, 0x1a1da, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x1a1da, 0x1a1fa, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"PP Select Portrait", 0x41eba, 0x41eda, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"PP Win Portrait", 0x4757a, 0x4761a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x1a21a, 0x1a23a, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"KK Ice Extras", 0x1a27a, 0x1a29a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x1a23a, 0x1a25a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x1a25a, 0x1a27a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"KK Select Portrait", 0x420ba, 0x420da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"KK Win Portrait", 0x480ba, 0x4815a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x1a29a, 0x1a2ba, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"AP Ice Extras", 0x1a2fa, 0x1a31a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x1a2ba, 0x1a2da, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x1a2da, 0x1a2fa, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AP Select Portrait", 0x422ba, 0x422da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AP Win Portrait", 0x48bfa, 0x48c9a },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x1a31a, 0x1a33a, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"AK Ice Extras", 0x1a37a, 0x1a39a, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x1a33a, 0x1a35a, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x1a35a, 0x1a37a, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AK Select Portrait", 0x424ba, 0x424da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AK Win Portrait", 0x4973a, 0x497da },
};

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_1[] =
{
    { L"Alt Zabel", 0x1a79a, 0x1a7ba, indexCPS2_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 64PP/63214KK/intro/winpose", 0x1a7ba, 0x1a7da },
    { L"Alt Zabel Unused 1", 0x1a7da, 0x1a7fa },
    { L"Alt Zabel Unused 2", 0x1a7fa, 0x1a81a },
};

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_2[] =
{
    { L"Alt Zabel 2", 0x1a81a, 0x1a83a, indexCPS2_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 2 64PP/63214KK/intro/winpos", 0x1a83a, 0x1a85a },
    { L"Alt Zabel 2 Unused 1", 0x1a85a, 0x1a87a },
    { L"Alt Zabel 2 Unused 2", 0x1a87a, 0x1a89a },
};


// BUGBUG: TODO: The "Intro/ES 412PP" entries

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x1a89a, 0x1a8ba, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"LP Wings/Honey", 0x1a8ba, 0x1a8da, indexCPS2_Vamp_QBee, 0x1 },
    { L"LP Egg", 0x1a8da, 0x1a8fa },
    { L"LP Bees", 0x1a8fa, 0x1a91a, indexCPS2_Vamp_QBee, 0x0 },
    { L"LP Select Portrait", 0x412fa, 0x4131a, indexCPS2_Vamp_QBee, 0x20 },
    { L"LP Win Portrait", 0x4333a, 0x433da },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x1a91a, 0x1a93a, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"MP Wings/Honey", 0x1a93a, 0x1a95a, indexCPS2_Vamp_QBee, 0x1 },
    { L"MP Egg", 0x1a95a, 0x1a97a },
    { L"MP Bees", 0x1a97a, 0x1a99a, indexCPS2_Vamp_QBee, 0x0 },
    { L"MP Select Portrait", 0x414fa, 0x4151a, indexCPS2_Vamp_QBee, 0x20 },
    { L"MP Win Portrait", 0x43e7a, 0x43f1a },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x1a99a, 0x1a9ba, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"HP Wings/Honey", 0x1a9ba, 0x1a9da, indexCPS2_Vamp_QBee, 0x1 },
    { L"HP Egg", 0x1a9da, 0x1a9fa },
    { L"HP Bees", 0x1a9fa, 0x1aa1a, indexCPS2_Vamp_QBee, 0x0 },
    { L"HP Select Portrait", 0x416fa, 0x4171a, indexCPS2_Vamp_QBee, 0x20 },
    { L"HP Win Portrait", 0x449ba, 0x44a5a },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x1aa1a, 0x1aa3a, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"LK Wings/Honey", 0x1aa3a, 0x1aa5a, indexCPS2_Vamp_QBee, 0x1 },
    { L"LK Egg", 0x1aa5a, 0x1aa7a },
    { L"LK Bees", 0x1aa7a, 0x1aa9a, indexCPS2_Vamp_QBee, 0x0 },
    { L"LK Select Portrait", 0x418fa, 0x4191a, indexCPS2_Vamp_QBee, 0x20 },
    { L"LK Win Portrait", 0x454fa, 0x4559a },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x1aa9a, 0x1aaba, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"MK Wings/Honey", 0x1aaba, 0x1aada, indexCPS2_Vamp_QBee, 0x1 },
    { L"MK Egg", 0x1aada, 0x1aafa },
    { L"MK Bees", 0x1aafa, 0x1ab1a, indexCPS2_Vamp_QBee, 0x0 },
    { L"MK Select Portrait", 0x41afa, 0x41b1a, indexCPS2_Vamp_QBee, 0x20 },
    { L"MK Win Portrait", 0x4603a, 0x460da },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x1ab1a, 0x1ab3a, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"HK Wings/Honey", 0x1ab3a, 0x1ab5a, indexCPS2_Vamp_QBee, 0x1 },
    { L"HK Egg", 0x1ab5a, 0x1ab7a },
    { L"HK Bees", 0x1ab7a, 0x1ab9a, indexCPS2_Vamp_QBee, 0x0 },
    { L"HK Select Portrait", 0x41cfa, 0x41d1a, indexCPS2_Vamp_QBee, 0x20 },
    { L"HK Win Portrait", 0x46b7a, 0x46c1a },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x1ab9a, 0x1abba, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"PP Wings/Honey", 0x1abba, 0x1abda, indexCPS2_Vamp_QBee, 0x1 },
    { L"PP Egg", 0x1abda, 0x1abfa },
    { L"PP Bees", 0x1abfa, 0x1ac1a, indexCPS2_Vamp_QBee, 0x0 },
    { L"PP Select Portrait", 0x41efa, 0x41f1a, indexCPS2_Vamp_QBee, 0x20 },
    { L"PP Win Portrait", 0x476ba, 0x4775a },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1ac1a, 0x1ac3a, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"KK Wings/Honey", 0x1ac3a, 0x1ac5a, indexCPS2_Vamp_QBee, 0x1 },
    { L"KK Egg", 0x1ac5a, 0x1ac7a },
    { L"KK Bees", 0x1ac7a, 0x1ac9a, indexCPS2_Vamp_QBee, 0x0 },
    { L"KK Select Portrait", 0x420fa, 0x4211a, indexCPS2_Vamp_QBee, 0x20 },
    { L"KK Win Portrait", 0x481fa, 0x4829a },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x1ac9a, 0x1acba, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"AP Wings/Honey", 0x1acba, 0x1acda, indexCPS2_Vamp_QBee, 0x1 },
    { L"AP Egg", 0x1acda, 0x1acfa },
    { L"AP Bees", 0x1acfa, 0x1ad1a, indexCPS2_Vamp_QBee, 0x0 },
    { L"AP Select Portrait", 0x422fa, 0x4231a, indexCPS2_Vamp_QBee, 0x20 },
    { L"AP Win Portrait", 0x48d3a, 0x48dda },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1ad1a, 0x1ad3a, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"AK Wings/Honey", 0x1ad3a, 0x1ad5a, indexCPS2_Vamp_QBee, 0x1 },
    { L"AK Egg", 0x1ad5a, 0x1ad7a },
    { L"AK Bees", 0x1ad7a, 0x1ad9a, indexCPS2_Vamp_QBee, 0x0 },
    { L"AK Select Portrait", 0x424fa, 0x4251a, indexCPS2_Vamp_QBee, 0x20 },
    { L"AK Win Portrait", 0x4987a, 0x4991a },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x1ad9a, 0x1adba, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"LP Lin-Lin", 0x1adba, 0x1adda },
    { L"LP Dust, Weapons", 0x1adda, 0x1adfa },
    { L"LP Unknown Extra", 0x1adfa, 0x1ae1a },
    { L"LP Select Portrait", 0x4131a, 0x4133a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LP Win Portrait", 0x433da, 0x4347a },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1ae1a, 0x1ae3a, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"MP Lin-Lin", 0x1ae3a, 0x1ae5a },
    { L"MP Dust, Weapons", 0x1ae5a, 0x1ae7a },
    { L"MP Unknown Extra", 0x1ae7a, 0x1ae9a },
    { L"MP Select Portrait", 0x4151a, 0x4153a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MP Win Portrait", 0x43f1a, 0x43fba },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x1ae9a, 0x1aeba, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"HP Lin-Lin", 0x1aeba, 0x1aeda },
    { L"HP Dust, Weapons", 0x1aeda, 0x1aefa },
    { L"HP Unknown Extra", 0x1aefa, 0x1af1a },
    { L"HP Select Portrait", 0x4171a, 0x4173a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HP Win Portrait", 0x44a5a, 0x44afa },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1af1a, 0x1af3a, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"LK Lin-Lin", 0x1af3a, 0x1af5a },
    { L"LK Dust, Weapons", 0x1af5a, 0x1af7a },
    { L"LK Unknown Extra", 0x1af7a, 0x1af9a },
    { L"LK Select Portrait", 0x4191a, 0x4193a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LK Win Portrait", 0x4559a, 0x4563a },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x1af9a, 0x1afba, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"MK Lin-Lin", 0x1afba, 0x1afda },
    { L"MK Dust, Weapons", 0x1afda, 0x1affa },
    { L"MK Unknown Extra", 0x1affa, 0x1b01a },
    { L"MK Select Portrait", 0x41b1a, 0x41b3a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MK Win Portrait", 0x460da, 0x4617a },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1b01a, 0x1b03a, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"HK Lin-Lin", 0x1b03a, 0x1b05a },
    { L"HK Dust, Weapons", 0x1b05a, 0x1b07a },
    { L"HK Unknown Extra", 0x1b07a, 0x1b09a },
    { L"HK Select Portrait", 0x41d1a, 0x41d3a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HK Win Portrait", 0x46c1a, 0x46cba },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x1b09a, 0x1b0ba, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"PP Lin-Lin", 0x1b0ba, 0x1b0da },
    { L"PP Dust, Weapons", 0x1b0da, 0x1b0fa },
    { L"PP Unknown Extra", 0x1b0fa, 0x1b11a },
    { L"PP Select Portrait", 0x41f1a, 0x41f3a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"PP Win Portrait", 0x4775a, 0x477fa },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1b11a, 0x1b13a, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"KK Lin-Lin", 0x1b13a, 0x1b15a },
    { L"KK Dust, Weapons", 0x1b15a, 0x1b17a },
    { L"KK Unknown Extra", 0x1b17a, 0x1b19a },
    { L"KK Select Portrait", 0x4211a, 0x4213a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"KK Win Portrait", 0x4829a, 0x4833a },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x1b19a, 0x1b1ba, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"AP Lin-Lin", 0x1b1ba, 0x1b1da },
    { L"AP Dust, Weapons", 0x1b1da, 0x1b1fa },
    { L"AP Unknown Extra", 0x1b1fa, 0x1b21a },
    { L"AP Select Portrait", 0x4231a, 0x4233a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AP Win Portrait", 0x48dda, 0x48e7a },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1b21a, 0x1b23a, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"AK Lin-Lin", 0x1b23a, 0x1b25a },
    { L"AK Dust, Weapons", 0x1b25a, 0x1b27a },
    { L"AK Unknown Extra", 0x1b27a, 0x1b29a },
    { L"AK Select Portrait", 0x4251a, 0x4253a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AK Win Portrait", 0x4991a, 0x499ba },
};


///// real lilith

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x1b29a, 0x1b2ba, indexCPS2_Vamp_Lilith, 0x0 },
    { L"LP Hearts", 0x1b2ba, 0x1b2da },
    { L"LP Luminous Illusion/62KKK bats", 0x1b2da, 0x1b2fa },
    { L"LP Sparkles", 0x1b2fa, 0x1b31a },
    { L"LP Select Portrait", 0x4133a, 0x4135a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LP Win Portrait", 0x4347a, 0x4351a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1b31a, 0x1b33a, indexCPS2_Vamp_Lilith, 0x0 },
    { L"MP Hearts", 0x1b33a, 0x1b35a },
    { L"MP Luminous Illusion/62KKK bats", 0x1b35a, 0x1b37a },
    { L"MP Sparkles", 0x1b37a, 0x1b39a },
    { L"MP Select Portrait", 0x4153a, 0x4155a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MP Win Portrait", 0x43fba, 0x4405a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x1b39a, 0x1b3ba, indexCPS2_Vamp_Lilith, 0x0 },
    { L"HP Hearts", 0x1b3ba, 0x1b3da },
    { L"HP Luminous Illusion/62KKK bats", 0x1b3da, 0x1b3fa },
    { L"HP Sparkles", 0x1b3fa, 0x1b41a },
    { L"HP Select Portrait", 0x4173a, 0x4175a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HP Win Portrait", 0x44afa, 0x44b9a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1b41a, 0x1b43a, indexCPS2_Vamp_Lilith, 0x0 },
    { L"LK Hearts", 0x1b43a, 0x1b45a },
    { L"LK Luminous Illusion/62KKK bats", 0x1b45a, 0x1b47a },
    { L"LK Sparkles", 0x1b47a, 0x1b49a },
    { L"LK Select Portrait", 0x4193a, 0x4195a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LK Win Portrait", 0x4563a, 0x456da },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x1b49a, 0x1b4ba, indexCPS2_Vamp_Lilith, 0x0 },
    { L"MK Hearts", 0x1b4ba, 0x1b4da },
    { L"MK Luminous Illusion/62KKK bats", 0x1b4da, 0x1b4fa },
    { L"MK Sparkles", 0x1b4fa, 0x1b51a },
    { L"MK Select Portrait", 0x41b3a, 0x41b5a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MK Win Portrait", 0x4617a, 0x4621a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1b51a, 0x1b53a, indexCPS2_Vamp_Lilith, 0x0 },
    { L"HK Hearts", 0x1b53a, 0x1b55a },
    { L"HK Luminous Illusion/62KKK bats", 0x1b55a, 0x1b57a },
    { L"HK Sparkles", 0x1b57a, 0x1b59a },
    { L"HK Select Portrait", 0x41d3a, 0x41d5a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HK Win Portrait", 0x46cba, 0x46d5a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x1b59a, 0x1b5ba, indexCPS2_Vamp_Lilith, 0x0 },
    { L"PP Hearts", 0x1b5ba, 0x1b5da },
    { L"PP Luminous Illusion/62KKK bats", 0x1b5da, 0x1b5fa },
    { L"PP Sparkles", 0x1b5fa, 0x1b61a },
    { L"PP Select Portrait", 0x41f3a, 0x41f5a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"PP Win Portrait", 0x477fa, 0x4789a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x1b61a, 0x1b63a, indexCPS2_Vamp_Lilith, 0x0 },
    { L"KK Hearts", 0x1b63a, 0x1b65a },
    { L"KK Luminous Illusion/62KKK bats", 0x1b65a, 0x1b67a },
    { L"KK Sparkles", 0x1b67a, 0x1b69a },
    { L"KK Select Portrait", 0x4213a, 0x4215a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"KK Win Portrait", 0x4833a, 0x483da },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x1b69a, 0x1b6ba, indexCPS2_Vamp_Lilith, 0x0 },
    { L"AP Hearts", 0x1b6ba, 0x1b6da },
    { L"AP Luminous Illusion/62KKK bats", 0x1b6da, 0x1b6fa },
    { L"AP Sparkles", 0x1b6fa, 0x1b71a },
    { L"AP Select Portrait", 0x4233a, 0x4235a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AP Win Portrait", 0x48e7a, 0x48f1a },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x1b71a, 0x1b73a, indexCPS2_Vamp_Lilith, 0x0 },
    { L"AK Hearts", 0x1b73a, 0x1b75a },
    { L"AK Luminous Illusion/62KKK bats", 0x1b75a, 0x1b77a },
    { L"AK Sparkles", 0x1b77a, 0x1b79a },
    { L"AK Select Portrait", 0x4253a, 0x4255a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AK Win Portrait", 0x499ba, 0x49a5a },
};



const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x1b79a, 0x1b7ba, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LP Prova di Servo", 0x1b7ba, 0x1b7da, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x1b7da, 0x1b7fa, indexCPS2_Vamp_Jedah, 1 },
    { L"LP Intro", 0x1b7fa, 0x1b81a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LP Select Portrait", 0x4135a, 0x4137a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LP Win Portrait", 0x4351a, 0x435ba },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x1b81a, 0x1b83a, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MP Prova di Servo", 0x1b83a, 0x1b85a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x1b85a, 0x1b87a, indexCPS2_Vamp_Jedah, 1 },
    { L"MP Intro", 0x1b87a, 0x1b89a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MP Select Portrait", 0x4155a, 0x4157a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MP Win Portrait", 0x4405a, 0x440fa },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x1b89a, 0x1b8ba, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HP Prova di Servo", 0x1b8ba, 0x1b8da, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x1b8da, 0x1b8fa, indexCPS2_Vamp_Jedah, 1 },
    { L"HP Intro", 0x1b8fa, 0x1b91a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HP Select Portrait", 0x4175a, 0x4177a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HP Win Portrait", 0x44b9a, 0x44c3a },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LK[] =
{
	{ L"LK Jedah", 0x1b91a, 0x1b93a, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LK Prova di Servo", 0x1b93a, 0x1b95a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x1b95a, 0x1b97a, indexCPS2_Vamp_Jedah, 1 },
    { L"LK Intro", 0x1b97a, 0x1b99a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LK Select Portrait", 0x4195a, 0x4197a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LK Win Portrait", 0x456da, 0x4577a },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x1b99a, 0x1b9ba, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MK Prova di Servo", 0x1b9ba, 0x1b9da, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x1b9da, 0x1b9fa, indexCPS2_Vamp_Jedah, 1 },
    { L"MK Intro", 0x1b9fa, 0x1ba1a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MK Select Portrait", 0x41b5a, 0x41b7a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MK Win Portrait", 0x4621a, 0x462ba },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x1ba1a, 0x1ba3a, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HK Prova di Servo", 0x1ba3a, 0x1ba5a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x1ba5a, 0x1ba7a, indexCPS2_Vamp_Jedah, 1 },
    { L"HK Intro", 0x1ba7a, 0x1ba9a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HK Select Portrait", 0x41d5a, 0x41d7a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HK Win Portrait", 0x46d5a, 0x46dfa },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x1ba9a, 0x1baba, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"PP Prova di Servo", 0x1baba, 0x1bada, indexCPS2_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x1bada, 0x1bafa, indexCPS2_Vamp_Jedah, 1 },
    { L"PP Intro", 0x1bafa, 0x1bb1a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"PP Select Portrait", 0x41f5a, 0x41f7a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"PP Win Portrait", 0x4789a, 0x4793a },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x1bb1a, 0x1bb3a, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"KK Prova di Servo", 0x1bb3a, 0x1bb5a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x1bb5a, 0x1bb7a, indexCPS2_Vamp_Jedah, 1 },
    { L"KK Intro", 0x1bb7a, 0x1bb9a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"KK Select Portrait", 0x4215a, 0x4217a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"KK Win Portrait", 0x483da, 0x4847a },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x1bb9a, 0x1bbba, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AP Prova di Servo", 0x1bbba, 0x1bbda, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x1bbda, 0x1bbfa, indexCPS2_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1bbfa, 0x1bc1a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AP Select Portrait", 0x4235a, 0x4237a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AP Win Portrait", 0x48f1a, 0x48fba },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1bc1a, 0x1bc3a, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AK Prova di Servo", 0x1bc3a, 0x1bc5a, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1bc5a, 0x1bc7a, indexCPS2_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1bc7a, 0x1bc9a, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AK Select Portrait", 0x4255a, 0x4257a, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AK Win Portrait", 0x49a5a, 0x49afa },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_SHARED[] =
{
    { L"Shared blood",           0x35a9a, 0x35aba, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared blood 2",         0x35aba, 0x35ada, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared Prova di Servo", 0x35ada, 0x35afa, indexCPS2_Vamp_Jedah, 0x03 },
    { L"Shared Prova di Servo 2", 0x35afa, 0x35b1a, indexCPS2_Vamp_Jedah, 0x03 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LP[] =
{
    { L"LP Phobos",          0x1bc9a, 0x1bcba, indexCPS2_Vamp_Phobos, 0x0 },
    { L"LP Unknown Extra 1", 0x1bcba, 0x1bcda },
    { L"LP Unknown Extra 2", 0x1bcda, 0x1bcfa },
    { L"LP Cecil",           0x1bcfa, 0x1bd1a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MP[] =
{
    { L"MP Phobos",          0x1bd1a, 0x1bd3a, indexCPS2_Vamp_Phobos, 0x0 },
    { L"MP Unknown Extra 1", 0x1bd3a, 0x1bd5a },
    { L"MP Unknown Extra 2", 0x1bd5a, 0x1bd7a },
    { L"MP Cecil",           0x1bd7a, 0x1bd9a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HP[] =
{
    { L"HP Phobos",          0x1bd9a, 0x1bdba, indexCPS2_Vamp_Phobos, 0x0 },
    { L"HP Unknown Extra 1", 0x1bdba, 0x1bdda },
    { L"HP Unknown Extra 2", 0x1bdda, 0x1bdfa },
    { L"HP Cecil",           0x1bdfa, 0x1be1a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LK[] =
{
    { L"LK Phobos",          0x1be1a, 0x1be3a, indexCPS2_Vamp_Phobos, 0x0 },
    { L"LK Unknown Extra 1", 0x1be3a, 0x1be5a },
    { L"LK Unknown Extra 2", 0x1be5a, 0x1be7a },
    { L"LK Cecil",           0x1be7a, 0x1be9a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MK[] =
{
    { L"MK Phobos",          0x1be9a, 0x1beba, indexCPS2_Vamp_Phobos, 0x0 },
    { L"MK Unknown Extra 1", 0x1beba, 0x1beda },
    { L"MK Unknown Extra 2", 0x1beda, 0x1befa },
    { L"MK Cecil",           0x1befa, 0x1bf1a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HK[] =
{
    { L"HK Phobos",          0x1bf1a, 0x1bf3a, indexCPS2_Vamp_Phobos, 0x0 },
    { L"HK Unknown Extra 1", 0x1bf3a, 0x1bf5a },
    { L"HK Unknown Extra 2", 0x1bf5a, 0x1bf7a },
    { L"HK Cecil",           0x1bf7a, 0x1bf9a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_PP[] =
{
    { L"PP Phobos",          0x1bf9a, 0x1bfba, indexCPS2_Vamp_Phobos, 0x0 },
    { L"PP Unknown Extra 1", 0x1bfba, 0x1bfda },
    { L"PP Unknown Extra 2", 0x1bfda, 0x1bffa },
    { L"PP Cecil",           0x1bffa, 0x1c01a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_KK[] =
{
    { L"KK Phobos",          0x1c01a, 0x1c03a, indexCPS2_Vamp_Phobos, 0x0 },
    { L"KK Unknown Extra 1", 0x1c03a, 0x1c05a },
    { L"KK Unknown Extra 2", 0x1c05a, 0x1c07a },
    { L"KK Cecil",           0x1c07a, 0x1c09a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AP[] =
{
    { L"AP Phobos",          0x1c09a, 0x1c0ba, indexCPS2_Vamp_Phobos, 0x0 },
    { L"AP Unknown Extra 1", 0x1c0ba, 0x1c0da },
    { L"AP Unknown Extra 2", 0x1c0da, 0x1c0fa },
    { L"AP Cecil",           0x1c0fa, 0x1c11a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AK[] =
{
    { L"AK Phobos",          0x1c11a, 0x1c13a, indexCPS2_Vamp_Phobos, 0x0 },
    { L"AK Unknown Extra 1", 0x1c13a, 0x1c15a },
    { L"AK Unknown Extra 2", 0x1c15a, 0x1c17a },
    { L"AK Cecil",           0x1c17a, 0x1c19a, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LP[] =
{
    { L"LP Pyron",           0x1c19a, 0x1c1ba, indexCPS2_Vamp_Pyron, 0x0 },
    { L"LP Unknown Extra 1", 0x1c1ba, 0x1c1da },
    { L"LP Unknown Extra 2", 0x1c1da, 0x1c1fa },
    { L"LP Unknown Extra 3", 0x1c1fa, 0x1c21a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MP[] =
{
    { L"MP Pyron",           0x1c21a, 0x1c23a, indexCPS2_Vamp_Pyron, 0x0 },
    { L"MP Unknown Extra 1", 0x1c23a, 0x1c25a },
    { L"MP Unknown Extra 2", 0x1c25a, 0x1c27a },
    { L"MP Unknown Extra 3", 0x1c27a, 0x1c29a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HP[] =
{
    { L"HP Pyron",           0x1c29a, 0x1c2ba, indexCPS2_Vamp_Pyron, 0x0 },
    { L"HP Unknown Extra 1", 0x1c2ba, 0x1c2da },
    { L"HP Unknown Extra 2", 0x1c2da, 0x1c2fa },
    { L"HP Unknown Extra 3", 0x1c2fa, 0x1c31a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LK[] =
{
    { L"LK Pyron",           0x1c31a, 0x1c33a, indexCPS2_Vamp_Pyron, 0x0 },
    { L"LK Unknown Extra 1", 0x1c33a, 0x1c35a },
    { L"LK Unknown Extra 2", 0x1c35a, 0x1c37a },
    { L"LK Unknown Extra 3", 0x1c37a, 0x1c39a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MK[] =
{
    { L"MK Pyron",           0x1c39a, 0x1c3ba, indexCPS2_Vamp_Pyron, 0x0 },
    { L"MK Unknown Extra 1", 0x1c3ba, 0x1c3da },
    { L"MK Unknown Extra 2", 0x1c3da, 0x1c3fa },
    { L"MK Unknown Extra 3", 0x1c3fa, 0x1c41a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HK[] =
{
    { L"HK Pyron",           0x1c41a, 0x1c43a, indexCPS2_Vamp_Pyron, 0x0 },
    { L"HK Unknown Extra 1", 0x1c43a, 0x1c45a },
    { L"HK Unknown Extra 2", 0x1c45a, 0x1c47a },
    { L"HK Unknown Extra 3", 0x1c47a, 0x1c49a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_PP[] =
{
    { L"PP Pyron",           0x1c49a, 0x1c4ba, indexCPS2_Vamp_Pyron, 0x0 },
    { L"PP Unknown Extra 1", 0x1c4ba, 0x1c4da },
    { L"PP Unknown Extra 2", 0x1c4da, 0x1c4fa },
    { L"PP Unknown Extra 3", 0x1c4fa, 0x1c51a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_KK[] =
{
    { L"KK Pyron",           0x1c51a, 0x1c53a, indexCPS2_Vamp_Pyron, 0x0 },
    { L"KK Unknown Extra 1", 0x1c53a, 0x1c55a },
    { L"KK Unknown Extra 2", 0x1c55a, 0x1c57a },
    { L"KK Unknown Extra 3", 0x1c57a, 0x1c59a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AP[] =
{
    { L"AP Pyron",           0x1c59a, 0x1c5ba, indexCPS2_Vamp_Pyron, 0x0 },
    { L"AP Unknown Extra 1", 0x1c5ba, 0x1c5da },
    { L"AP Unknown Extra 2", 0x1c5da, 0x1c5fa },
    { L"AP Unknown Extra 3", 0x1c5fa, 0x1c61a, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AK[] =
{
    { L"AK Pyron",           0x1c61a, 0x1c63a, indexCPS2_Vamp_Pyron, 0x0 },
    { L"AK Unknown Extra 1", 0x1c63a, 0x1c65a },
    { L"AK Unknown Extra 2", 0x1c65a, 0x1c67a },
    { L"AK Unknown Extra 3", 0x1c67a, 0x1c69a, indexCPS2_Vamp_Pyron, 0x0 },
};

// portraits / dark effects

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LP[] =
{
    { L"LP Dark Gallon", 0x1C69a, 0x1c1ba + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"LP Intro/Outro", 0x1c1ba + 0x500, 0x1c1da + 0x500 },
    { L"LP 236P/41236KK/j.HP", 0x1c1da + 0x500, 0x1c1fa + 0x500 },
    { L"LP 236P/28K/Outro Flash", 0x1c1fa + 0x500, 0x1c21a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MP[] =
{
    { L"MP Dark Gallon", 0x1c21a + 0x500, 0x1c23a + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"MP Intro/Outro", 0x1c23a + 0x500, 0x1c25a + 0x500 },
    { L"MP 236P/41236KK/j.HP", 0x1c25a + 0x500, 0x1c27a + 0x500 },
    { L"MP 236P/28K/Outro Flash", 0x1c27a + 0x500, 0x1c29a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HP[] =
{
    { L"HP Dark Gallon", 0x1c29a + 0x500, 0x1c2ba + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"HP Intro/Outro", 0x1c2ba + 0x500, 0x1c2da + 0x500 },
    { L"HP 236P/41236KK/j.HP", 0x1c2da + 0x500, 0x1c2fa + 0x500 },
    { L"HP 236P/28K/Outro Flash", 0x1c2fa + 0x500, 0x1c31a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LK[] =
{
    { L"LK Dark Gallon", 0x1c31a + 0x500, 0x1c33a + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"LK Intro/Outro", 0x1c33a + 0x500, 0x1c35a + 0x500 },
    { L"LK 236P/41236KK/j.HP", 0x1c35a + 0x500, 0x1c37a + 0x500 },
    { L"LK 236P/28K/Outro Flash", 0x1c37a + 0x500, 0x1c39a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MK[] =
{
    { L"MK Dark Gallon", 0x1c39a + 0x500, 0x1c3ba + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"MK Intro/Outro", 0x1c3ba + 0x500, 0x1c3da + 0x500 },
    { L"MK 236P/41236KK/j.HP", 0x1c3da + 0x500, 0x1c3fa + 0x500 },
    { L"MK 236P/28K/Outro Flash", 0x1c3fa + 0x500, 0x1c41a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HK[] =
{
    { L"HK Dark Gallon", 0x1c41a + 0x500, 0x1c43a + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"HK Intro/Outro", 0x1c43a + 0x500, 0x1c45a + 0x500 },
    { L"HK 236P/41236KK/j.HP", 0x1c45a + 0x500, 0x1c47a + 0x500 },
    { L"HK 236P/28K/Outro Flash", 0x1c47a + 0x500, 0x1c49a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_PP[] =
{
    { L"PP Dark Gallon", 0x1c49a + 0x500, 0x1c4ba + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"PP Intro/Outro", 0x1c4ba + 0x500, 0x1c4da + 0x500 },
    { L"PP 236P/41236KK/j.HP", 0x1c4da + 0x500, 0x1c4fa + 0x500 },
    { L"PP 236P/28K/Outro Flash", 0x1c4fa + 0x500, 0x1c51a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_KK[] =
{
    { L"KK Dark Gallon", 0x1c51a + 0x500, 0x1c53a + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"KK Intro/Outro", 0x1c53a + 0x500, 0x1c55a + 0x500 },
    { L"KK 236P/41236KK/j.HP", 0x1c55a + 0x500, 0x1c57a + 0x500 },
    { L"KK 236P/28K/Outro Flash", 0x1c57a + 0x500, 0x1c59a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AP[] =
{
    { L"AP Dark Gallon", 0x1c59a + 0x500, 0x1c5ba + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"AP Intro/Outro", 0x1c5ba + 0x500, 0x1c5da + 0x500 },
    { L"AP 236P/41236KK/j.HP", 0x1c5da + 0x500, 0x1c5fa + 0x500 },
    { L"AP 236P/28K/Outro Flash", 0x1c5fa + 0x500, 0x1c61a + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AK[] =
{
    { L"AK Dark Gallon", 0x1c61a + 0x500, 0x1c63a + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"AK Intro/Outro", 0x1c63a + 0x500, 0x1c65a + 0x500 },
    { L"AK 236P/41236KK/j.HP", 0x1c65a + 0x500, 0x1c67a + 0x500 },
    { L"AK 236P/28K/Outro Flash", 0x1c67a + 0x500, 0x1CB9a },
};



const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LP[] =
{
    //bugbug: portraits maybe at 0x3649a or 3b61a  3bafa
    { L"LP Donovan",         0x1cb9a, 0x1cbba, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LP Unknown Extra",   0x1cbba, 0x1cbda },
    { L"LP Weapons",         0x1cbda, 0x1cbfa, indexCPS2_Vamp_Donovan, 0x1 },
    { L"LP Anita",           0x1cbfa, 0x1cc1a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MP[] =
{
    { L"MP Donovan",         0x1cc1a, 0x1cc3a, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MP Unknown Extra",   0x1cc3a, 0x1cc5a },
    { L"MP Weapons",         0x1cc5a, 0x1cc7a, indexCPS2_Vamp_Donovan, 0x1 },
    { L"MP Anita",           0x1cc7a, 0x1cc9a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HP[] =
{
    { L"HP Donovan",         0x1cc9a, 0x1ccba, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HP Unknown Extra",   0x1ccba, 0x1ccda },
    { L"HP Weapons",         0x1ccda, 0x1ccfa, indexCPS2_Vamp_Donovan, 0x1 },
    { L"HP Anita",           0x1ccfa, 0x1cd1a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LK[] =
{
    { L"LK Donovan",         0x1cd1a, 0x1cd3a, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LK Unknown Extra",   0x1cd3a, 0x1cd5a },
    { L"LK Weapons",         0x1cd5a, 0x1cd7a, indexCPS2_Vamp_Donovan, 0x1 },
    { L"LK Anita",           0x1cd7a, 0x1cd9a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MK[] =
{
    { L"MK Donovan",         0x1cd9a, 0x1cdba, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MK Unknown Extra",   0x1cdba, 0x1cdda },
    { L"MK Weapons",         0x1cdda, 0x1cdfa, indexCPS2_Vamp_Donovan, 0x1 },
    { L"MK Anita",           0x1cdfa, 0x1ce1a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HK[] =
{
    { L"HK Donovan",         0x1ce1a, 0x1ce3a, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HK Unknown Extra",   0x1ce3a, 0x1ce5a },
    { L"HK Weapons",         0x1ce5a, 0x1ce7a, indexCPS2_Vamp_Donovan, 0x1 },
    { L"HK Anita",           0x1ce7a, 0x1ce9a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_PP[] =
{
    { L"PP Donovan",         0x1ce9a, 0x1ceba, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"PP Unknown Extra",   0x1ceba, 0x1ceda },
    { L"PP Weapons",         0x1ceda, 0x1cefa, indexCPS2_Vamp_Donovan, 0x1 },
    { L"PP Anita",           0x1cefa, 0x1cf1a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_KK[] =
{
    { L"KK Donovan",         0x1cf1a, 0x1cf3a, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"KK Unknown Extra",   0x1cf3a, 0x1cf5a },
    { L"KK Weapons",         0x1cf5a, 0x1cf7a, indexCPS2_Vamp_Donovan, 0x1 },
    { L"KK Anita",           0x1cf7a, 0x1cf9a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AP[] =
{
    { L"AP Donovan",         0x1cf9a, 0x1cfba, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AP Unknown Extra",   0x1cfba, 0x1cfda },
    { L"AP Weapons",         0x1cfda, 0x1cffa, indexCPS2_Vamp_Donovan, 0x1 },
    { L"AP Anita",           0x1cffa, 0x1d01a, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AK[] =
{
    { L"AK Donovan",         0x1d01a, 0x1d03a, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AK Unknown Extra",   0x1d03a, 0x1d05a },
    { L"AK Weapons",         0x1d05a, 0x1d07a, indexCPS2_Vamp_Donovan, 0x1 },
    { L"AK Anita",           0x1d07a, 0x1d09a, indexCPS2_Anita, 0 },
};


const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_LP[] =
{
    { L"LP Unknown",         0x1d09a, 0x1d0ba },
    { L"LP Unknown Extra 1", 0x1d0ba, 0x1d0da },
    { L"LP Unknown Extra 2", 0x1d0da, 0x1d0fa },
    { L"LP Unknown Extra 3", 0x1d0fa, 0x1d11a },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_MP[] =
{
    { L"MP Unknown",          0x1d11a, 0x1d13a },
    { L"MP Unknown Extra 1", 0x1d13a, 0x1d15a },
    { L"MP Unknown Extra 2", 0x1d15a, 0x1d17a },
    { L"MP Unknown Extra 3", 0x1d17a, 0x1d19a },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_HP[] =
{
    { L"HP Unknown",          0x1d19a, 0x1c1ba + 0x1000 },
    { L"HP Unknown Extra 1", 0x1c1ba + 0x1000, 0x1c1da + 0x1000 },
    { L"HP Unknown Extra 2", 0x1c1da + 0x1000, 0x1c1fa + 0x1000 },
    { L"HP Unknown Extra 3", 0x1c1fa + 0x1000, 0x1c21a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_LK[] =
{
    { L"LK Unknown",          0x1c21a + 0x1000, 0x1c23a + 0x1000 },
    { L"LK Unknown Extra 1", 0x1c23a + 0x1000, 0x1c25a + 0x1000 },
    { L"LK Unknown Extra 2", 0x1c25a + 0x1000, 0x1c27a + 0x1000 },
    { L"LK Unknown Extra 3", 0x1c27a + 0x1000, 0x1c29a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_MK[] =
{
    { L"MK Unknown",          0x1c29a + 0x1000, 0x1c2ba + 0x1000 },
    { L"MK Unknown Extra 1", 0x1c2ba + 0x1000, 0x1c2da + 0x1000 },
    { L"MK Unknown Extra 2", 0x1c2da + 0x1000, 0x1c2fa + 0x1000 },
    { L"MK Unknown Extra 3", 0x1c2fa + 0x1000, 0x1c31a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_HK[] =
{
    { L"HK Unknown",          0x1c31a + 0x1000, 0x1c33a + 0x1000 },
    { L"HK Unknown Extra 1", 0x1c33a + 0x1000, 0x1c35a + 0x1000 },
    { L"HK Unknown Extra 2", 0x1c35a + 0x1000, 0x1c37a + 0x1000 },
    { L"HK Unknown Extra 3", 0x1c37a + 0x1000, 0x1c39a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_PP[] =
{
    { L"PP Unknown",          0x1c39a + 0x1000, 0x1c3ba + 0x1000 },
    { L"PP Unknown Extra 1", 0x1c3ba + 0x1000, 0x1c3da + 0x1000 },
    { L"PP Unknown Extra 2", 0x1c3da + 0x1000, 0x1c3fa + 0x1000 },
    { L"PP Unknown Extra 3", 0x1c3fa + 0x1000, 0x1c41a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_KK[] =
{
    { L"KK Unknown",          0x1c41a + 0x1000, 0x1c43a + 0x1000 },
    { L"KK Unknown Extra 1", 0x1c43a + 0x1000, 0x1c45a + 0x1000 },
    { L"KK Unknown Extra 2", 0x1c45a + 0x1000, 0x1c47a + 0x1000 },
    { L"KK Unknown Extra 3", 0x1c47a + 0x1000, 0x1c49a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_AP[] =
{
    { L"AP Unknown",          0x1c49a + 0x1000, 0x1c4ba + 0x1000 },
    { L"AP Unknown Extra 1", 0x1c4ba + 0x1000, 0x1c4da + 0x1000 },
    { L"AP Unknown Extra 2", 0x1c4da + 0x1000, 0x1c4fa + 0x1000 },
    { L"AP Unknown Extra 3", 0x1c4fa + 0x1000, 0x1c51a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_AK[] =
{
    { L"AK Unknown",          0x1c51a + 0x1000, 0x1c53a + 0x1000 },
    { L"AK Unknown Extra 1", 0x1c53a + 0x1000, 0x1c55a + 0x1000 },
    { L"AK Unknown Extra 2", 0x1c55a + 0x1000, 0x1c57a + 0x1000 },
    { L"AK Unknown Extra 3", 0x1c57a + 0x1000, 0x1c59a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon",    0x1c59a + 0x1000, 0x1c5ba + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Intro", 0x1c5ba + 0x1000, 0x1c5da + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x1c5da + 0x1000, 0x1c5fa + 0x1000 },
    { L"LP Unknown Extra", 0x1c5fa + 0x1000, 0x1c61a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon",    0x1c61a + 0x1000, 0x1c63a + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Intro", 0x1c63a + 0x1000, 0x1c65a + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1c65a + 0x1000, 0x1c67a + 0x1000 },
    { L"MP Unknown Extra", 0x1c67a + 0x1000, 0x1c69a + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon",     0x1c19a + 0x1500, 0x1c1ba + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Intro", 0x1c1ba + 0x1500, 0x1c1da + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x1c1da + 0x1500, 0x1c1fa + 0x1500 },
    { L"HP Unknown Extra", 0x1c1fa + 0x1500, 0x1c21a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon",     0x1c21a + 0x1500, 0x1c23a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Intro", 0x1c23a + 0x1500, 0x1c25a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1c25a + 0x1500, 0x1c27a + 0x1500 },
    { L"LK Unknown Extra", 0x1c27a + 0x1500, 0x1c29a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon",     0x1c29a + 0x1500, 0x1c2ba + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Intro", 0x1c2ba + 0x1500, 0x1c2da + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x1c2da + 0x1500, 0x1c2fa + 0x1500 },
    { L"MK Unknown Extra", 0x1c2fa + 0x1500, 0x1c31a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon",     0x1c31a + 0x1500, 0x1c33a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Intro", 0x1c33a + 0x1500, 0x1c35a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1c35a + 0x1500, 0x1c37a + 0x1500 },
    { L"HK Unknown Extra", 0x1c37a + 0x1500, 0x1c39a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon",     0x1c39a + 0x1500, 0x1c3ba + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Intro", 0x1c3ba + 0x1500, 0x1c3da + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x1c3da + 0x1500, 0x1c3fa + 0x1500 },
    { L"PP Unknown Extra", 0x1c3fa + 0x1500, 0x1c41a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon",     0x1c41a + 0x1500, 0x1c43a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Intro", 0x1c43a + 0x1500, 0x1c45a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1c45a + 0x1500, 0x1c47a + 0x1500 },
    { L"KK Unknown Extra", 0x1c47a + 0x1500, 0x1c49a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon",     0x1c49a + 0x1500, 0x1c4ba + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Intro", 0x1c4ba + 0x1500, 0x1c4da + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x1c4da + 0x1500, 0x1c4fa + 0x1500 },
    { L"AP Unknown Extra", 0x1c4fa + 0x1500, 0x1c51a + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon",      0x1DA1a, 0x1c53a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Intro",               0x1c53a + 0x1500, 0x1c55a + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks",    0x1c55a + 0x1500, 0x1c57a + 0x1500 },
    { L"AK Unknown Extra",       0x1c57a + 0x1500, 0x1DA9a },
};

const sGame_PaletteDataset VSAV2_A_ENDING_PALETTES_PORTRAITS[] =
{
    { L"Bulleta Portrait",    0x4257a, 0x4259a, indexCPS2_BBHood, 0x20 },
    { L"Demitri Portrait",    0x4259a, 0x425ba, indexCPS2_Vamp_Demitri, 0x20 },
    { L"Gallon Portrait",     0x425ba, 0x425da, indexCPS2_Vamp_Gallon, 0x20 },
    { L"Victor Portrait",     0x425da, 0x425fa, indexCPS2_Vamp_Victor, 0x20 },
    { L"Zabel Portrait",      0x425fa, 0x4261a, indexCPS2_Vamp_Zabel, 0x20 },
    { L"Morrigan Portrait",   0x4261a, 0x4263a, indexCPS2_Morrigan, 0x20 },
    { L"Anakaris Portrait",   0x4263a, 0x4265a, indexCPS2_Anakaris, 0x20 },
    { L"Felicia Portrait",    0x4265a, 0x4267a, indexCPS2_Felicia, 0x20 },
    { L"Bishamon Portrait",   0x4267a, 0x4269a, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"Aulbath Portrait",    0x4269a, 0x426ba, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"Sasquatch Portrait",  0x426ba, 0x426da, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"Alt Zabel Portrait",  0x426da, 0x426fa, indexCPS2_Vamp_Zabel, 0x20 },
    { L"Q-Bee Portrait",      0x426fa, 0x4271a, indexCPS2_Vamp_QBee, 0x20 },
    { L"Lei-Lei Portrait",    0x4271a, 0x4273a, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"Lilith Portrait",     0x4273a, 0x4275a, indexCPS2_Vamp_Lilith, 0x20 },
    { L"Jedah Portrait",      0x4275a, 0x4277a, indexCPS2_Vamp_Jedah, 0x20 },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_SPECIAL[] =
{
    { L"Bulleta LP Poisoned",        0x1DA9a + (0 * 0x20), 0x1DABa + (0 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Poisoned",        0x1DA9a + (1 * 0x20), 0x1DABa + (1 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Poisoned",        0x1DA9a + (2 * 0x20), 0x1DABa + (2 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Poisoned",        0x1DA9a + (3 * 0x20), 0x1DABa + (3 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Poisoned",        0x1DA9a + (4 * 0x20), 0x1DABa + (4 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Poisoned",        0x1DA9a + (5 * 0x20), 0x1DABa + (5 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Poisoned",        0x1DA9a + (6 * 0x20), 0x1DABa + (6 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Poisoned",        0x1DA9a + (7 * 0x20), 0x1DABa + (7 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Poisoned",        0x1DA9a + (8 * 0x20), 0x1DABa + (8 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Poisoned",        0x1DA9a + (9 * 0x20), 0x1DABa + (9 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Zapped",          0x1DA9a + (10 * 0x20), 0x1DABa + (10 * 0x20) },
    { L"Bulleta MP Zapped",          0x1DA9a + (11 * 0x20), 0x1DABa + (11 * 0x20) },
    { L"Bulleta HP Zapped",          0x1DA9a + (12 * 0x20), 0x1DABa + (12 * 0x20) },
    { L"Bulleta LK Zapped",          0x1DA9a + (13 * 0x20), 0x1DABa + (13 * 0x20) },
    { L"Bulleta MK Zapped",          0x1DA9a + (14 * 0x20), 0x1DABa + (14 * 0x20) },
    { L"Bulleta HK Zapped",          0x1DA9a + (15 * 0x20), 0x1DABa + (15 * 0x20) },
    { L"Bulleta PP Zapped",          0x1DA9a + (16 * 0x20), 0x1DABa + (16 * 0x20) },
    { L"Bulleta KK Zapped",          0x1DA9a + (17 * 0x20), 0x1DABa + (17 * 0x20) },
    { L"Bulleta AP Zapped",          0x1DA9a + (18 * 0x20), 0x1DABa + (18 * 0x20) },
    { L"Bulleta AK Zapped",          0x1DA9a + (19 * 0x20), 0x1DABa + (19 * 0x20) },
    { L"Bulleta LP Burned",          0x1DA9a + (20 * 0x20), 0x1DABa + (20 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Burned",          0x1DA9a + (21 * 0x20), 0x1DABa + (21 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Burned",          0x1DA9a + (22 * 0x20), 0x1DABa + (22 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Burned",          0x1DA9a + (23 * 0x20), 0x1DABa + (23 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Burned",          0x1DA9a + (24 * 0x20), 0x1DABa + (24 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Burned",          0x1DA9a + (25 * 0x20), 0x1DABa + (25 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Burned",          0x1DA9a + (26 * 0x20), 0x1DABa + (26 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Burned",          0x1DA9a + (27 * 0x20), 0x1DABa + (27 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Burned",          0x1DA9a + (28 * 0x20), 0x1DABa + (28 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Burned",          0x1DA9a + (29 * 0x20), 0x1DABa + (29 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Pharaoh's Curse", 0x1DA9a + (30 * 0x20), 0x1DABa + (30 * 0x20) },
    { L"Bulleta MP Pharaoh's Curse", 0x1DA9a + (31 * 0x20), 0x1DABa + (31 * 0x20) },
    { L"Bulleta HP Pharaoh's Curse", 0x1DA9a + (32 * 0x20), 0x1DABa + (32 * 0x20) },
    { L"Bulleta LK Pharaoh's Curse", 0x1DA9a + (33 * 0x20), 0x1DABa + (33 * 0x20) },
    { L"Bulleta MK Pharaoh's Curse", 0x1DA9a + (34 * 0x20), 0x1DABa + (34 * 0x20) },
    { L"Bulleta HK Pharaoh's Curse", 0x1DA9a + (35 * 0x20), 0x1DABa + (35 * 0x20) },
    { L"Bulleta PP Pharaoh's Curse", 0x1DA9a + (36 * 0x20), 0x1DABa + (36 * 0x20) },
    { L"Bulleta KK Pharaoh's Curse", 0x1DA9a + (37 * 0x20), 0x1DABa + (37 * 0x20) },
    { L"Bulleta AP Pharaoh's Curse", 0x1DA9a + (38 * 0x20), 0x1DABa + (38 * 0x20) },
    { L"Bulleta AK Pharaoh's Curse", 0x1DA9a + (39 * 0x20), 0x1DABa + (39 * 0x20) },
    { L"Bulleta ES 1",               0x1DA9a + (40 * 0x20), 0x1DABa + (40 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ES 2",               0x1DA9a + (41 * 0x20), 0x1DABa + (41 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ES 3",               0x1DA9a + (42 * 0x20), 0x1DABa + (42 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ES 4",               0x1DA9a + (43 * 0x20), 0x1DABa + (43 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 1",               0x1DA9a + (44 * 0x20), 0x1DABa + (44 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 2",               0x1DA9a + (45 * 0x20), 0x1DABa + (45 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 3",               0x1DA9a + (46 * 0x20), 0x1DABa + (46 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 4",               0x1DA9a + (47 * 0x20), 0x1DABa + (47 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 5",               0x1DA9a + (48 * 0x20), 0x1DABa + (48 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 6",               0x1DA9a + (49 * 0x20), 0x1DABa + (49 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 7",               0x1DA9a + (50 * 0x20), 0x1DABa + (50 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 8",               0x1DA9a + (51 * 0x20), 0x1DABa + (51 * 0x20), indexCPS2_BBHood },
    { L"Bulleta Prova di Servo",     0x1DA9a + (52 * 0x20), 0x1DABa + (52 * 0x20), indexCPS2_BBHood },
    { L"Bulleta Finale Rosso",       0x1DA9a + (53 * 0x20), 0x1DABa + (53 * 0x20), indexCPS2_BBHood },
    { L"Bulleta Stone",              0x1DA9a + (54 * 0x20), 0x1DABa + (54 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Midnight Bliss",  0x1DA9a + (55 * 0x20), 0x1DABa + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MP Midnight Bliss",  0x1DA9a + (56 * 0x20), 0x1DABa + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HP Midnight Bliss",  0x1DA9a + (57 * 0x20), 0x1DABa + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta LK Midnight Bliss",  0x1DA9a + (58 * 0x20), 0x1DABa + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MK Midnight Bliss",  0x1DA9a + (59 * 0x20), 0x1DABa + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HK Midnight Bliss",  0x1DA9a + (60 * 0x20), 0x1DABa + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta PP Midnight Bliss",  0x1DA9a + (61 * 0x20), 0x1DABa + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta KK Midnight Bliss",  0x1DA9a + (62 * 0x20), 0x1DABa + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AP Midnight Bliss",  0x1DA9a + (63 * 0x20), 0x1DABa + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AK Midnight Bliss",  0x1DA9a + (64 * 0x20), 0x1DABa + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta Q-Bee's QJ Honey",   0x1DA9a + (65 * 0x20), 0x1DABa + (65 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 1",    0x1DA9a + (66 * 0x20), 0x1DABa + (66 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 2",    0x1DA9a + (67 * 0x20), 0x1DABa + (67 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 3",    0x1DA9a + (68 * 0x20), 0x1DABa + (68 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 4",    0x1DA9a + (69 * 0x20), 0x1DABa + (69 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 1",    0x1DA9a + (70 * 0x20), 0x1DABa + (70 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 2",    0x1DA9a + (71 * 0x20), 0x1DABa + (71 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 3",    0x1DA9a + (72 * 0x20), 0x1DABa + (72 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 4",    0x1DA9a + (73 * 0x20), 0x1DABa + (73 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 1",    0x1DA9a + (74 * 0x20), 0x1DABa + (74 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 2",    0x1DA9a + (75 * 0x20), 0x1DABa + (75 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 3",    0x1DA9a + (76 * 0x20), 0x1DABa + (76 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 4",    0x1DA9a + (77 * 0x20), 0x1DABa + (77 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 1",    0x1DA9a + (78 * 0x20), 0x1DABa + (78 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 2",    0x1DA9a + (79 * 0x20), 0x1DABa + (79 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 3",    0x1DA9a + (80 * 0x20), 0x1DABa + (80 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 4",    0x1DA9a + (81 * 0x20), 0x1DABa + (81 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 1",    0x1DA9a + (82 * 0x20), 0x1DABa + (82 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 2",    0x1DA9a + (83 * 0x20), 0x1DABa + (83 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 3",    0x1DA9a + (84 * 0x20), 0x1DABa + (84 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 4",    0x1DA9a + (85 * 0x20), 0x1DABa + (85 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 1",    0x1DA9a + (86 * 0x20), 0x1DABa + (86 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 2",    0x1DA9a + (87 * 0x20), 0x1DABa + (87 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 3",    0x1DA9a + (88 * 0x20), 0x1DABa + (88 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 4",    0x1DA9a + (89 * 0x20), 0x1DABa + (89 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 1",    0x1DA9a + (90 * 0x20), 0x1DABa + (90 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 2",    0x1DA9a + (91 * 0x20), 0x1DABa + (91 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 3",    0x1DA9a + (92 * 0x20), 0x1DABa + (92 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 4",    0x1DA9a + (93 * 0x20), 0x1DABa + (93 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 1",    0x1DA9a + (94 * 0x20), 0x1DABa + (94 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 2",    0x1DA9a + (95 * 0x20), 0x1DABa + (95 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 3",    0x1DA9a + (96 * 0x20), 0x1DABa + (96 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 4",    0x1DA9a + (97 * 0x20), 0x1DABa + (97 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 1",    0x1DA9a + (98 * 0x20), 0x1DABa + (98 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 2",    0x1DA9a + (99 * 0x20), 0x1DABa + (99 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 3",    0x1DA9a + (100 * 0x20), 0x1DABa + (100 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 4",    0x1DA9a + (101 * 0x20), 0x1DABa + (101 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 1",    0x1DA9a + (102 * 0x20), 0x1DABa + (102 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 2",    0x1DA9a + (103 * 0x20), 0x1DABa + (103 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 3",    0x1DA9a + (104 * 0x20), 0x1DABa + (104 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 4",    0x1DA9a + (105 * 0x20), 0x1DABa + (105 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 1",              0x1DA9a + (106 * 0x20), 0x1DABa + (106 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 2",              0x1DA9a + (107 * 0x20), 0x1DABa + (107 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 3",              0x1DA9a + (108 * 0x20), 0x1DABa + (108 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 4",              0x1DA9a + (109 * 0x20), 0x1DABa + (109 * 0x20), indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { L"Demitri LP Poisoned",        0x1e85a + (0 * 0x20), 0x1e87a + (0 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Poisoned",        0x1e85a + (1 * 0x20), 0x1e87a + (1 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Poisoned",        0x1e85a + (2 * 0x20), 0x1e87a + (2 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Poisoned",        0x1e85a + (3 * 0x20), 0x1e87a + (3 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Poisoned",        0x1e85a + (4 * 0x20), 0x1e87a + (4 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Poisoned",        0x1e85a + (5 * 0x20), 0x1e87a + (5 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Poisoned",        0x1e85a + (6 * 0x20), 0x1e87a + (6 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Poisoned",        0x1e85a + (7 * 0x20), 0x1e87a + (7 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Poisoned",        0x1e85a + (8 * 0x20), 0x1e87a + (8 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Poisoned",        0x1e85a + (9 * 0x20), 0x1e87a + (9 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Zapped",          0x1e85a + (10 * 0x20), 0x1e87a + (10 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri MP Zapped",          0x1e85a + (11 * 0x20), 0x1e87a + (11 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri HP Zapped",          0x1e85a + (12 * 0x20), 0x1e87a + (12 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri LK Zapped",          0x1e85a + (13 * 0x20), 0x1e87a + (13 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri MK Zapped",          0x1e85a + (14 * 0x20), 0x1e87a + (14 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri HK Zapped",          0x1e85a + (15 * 0x20), 0x1e87a + (15 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri PP Zapped",          0x1e85a + (16 * 0x20), 0x1e87a + (16 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri KK Zapped",          0x1e85a + (17 * 0x20), 0x1e87a + (17 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri AP Zapped",          0x1e85a + (18 * 0x20), 0x1e87a + (18 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri AK Zapped",          0x1e85a + (19 * 0x20), 0x1e87a + (19 * 0x20), indexCPS2_Vamp_Demitri, 0x0a },
    { L"Demitri LP Burned",          0x1e85a + (20 * 0x20), 0x1e87a + (20 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Burned",          0x1e85a + (21 * 0x20), 0x1e87a + (21 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Burned",          0x1e85a + (22 * 0x20), 0x1e87a + (22 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Burned",          0x1e85a + (23 * 0x20), 0x1e87a + (23 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Burned",          0x1e85a + (24 * 0x20), 0x1e87a + (24 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Burned",          0x1e85a + (25 * 0x20), 0x1e87a + (25 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Burned",          0x1e85a + (26 * 0x20), 0x1e87a + (26 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Burned",          0x1e85a + (27 * 0x20), 0x1e87a + (27 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Burned",          0x1e85a + (28 * 0x20), 0x1e87a + (28 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Burned",          0x1e85a + (29 * 0x20), 0x1e87a + (29 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Pharaoh's Curse", 0x1e85a + (30 * 0x20), 0x1e87a + (30 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MP Pharaoh's Curse", 0x1e85a + (31 * 0x20), 0x1e87a + (31 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HP Pharaoh's Curse", 0x1e85a + (32 * 0x20), 0x1e87a + (32 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri LK Pharaoh's Curse", 0x1e85a + (33 * 0x20), 0x1e87a + (33 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MK Pharaoh's Curse", 0x1e85a + (34 * 0x20), 0x1e87a + (34 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HK Pharaoh's Curse", 0x1e85a + (35 * 0x20), 0x1e87a + (35 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri PP Pharaoh's Curse", 0x1e85a + (36 * 0x20), 0x1e87a + (36 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri KK Pharaoh's Curse", 0x1e85a + (37 * 0x20), 0x1e87a + (37 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AP Pharaoh's Curse", 0x1e85a + (38 * 0x20), 0x1e87a + (38 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AK Pharaoh's Curse", 0x1e85a + (39 * 0x20), 0x1e87a + (39 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri ES 1",               0x1e85a + (40 * 0x20), 0x1e87a + (40 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ES 2",               0x1e85a + (41 * 0x20), 0x1e87a + (41 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ES 3",               0x1e85a + (42 * 0x20), 0x1e87a + (42 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ES 4",               0x1e85a + (43 * 0x20), 0x1e87a + (43 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 1",               0x1e85a + (44 * 0x20), 0x1e87a + (44 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 2",               0x1e85a + (45 * 0x20), 0x1e87a + (45 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 3",               0x1e85a + (46 * 0x20), 0x1e87a + (46 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 4",               0x1e85a + (47 * 0x20), 0x1e87a + (47 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 5",               0x1e85a + (48 * 0x20), 0x1e87a + (48 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 6",               0x1e85a + (49 * 0x20), 0x1e87a + (49 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 7",               0x1e85a + (50 * 0x20), 0x1e87a + (50 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 8",               0x1e85a + (51 * 0x20), 0x1e87a + (51 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri Prova di Servo",     0x1e85a + (52 * 0x20), 0x1e87a + (52 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri Finale Rosso",       0x1e85a + (53 * 0x20), 0x1e87a + (53 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri Stone",              0x1e85a + (54 * 0x20), 0x1e87a + (54 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Midnight Bliss",  0x1e85a + (55 * 0x20), 0x1e87a + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Midnight Bliss",  0x1e85a + (56 * 0x20), 0x1e87a + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Midnight Bliss",  0x1e85a + (57 * 0x20), 0x1e87a + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Midnight Bliss",  0x1e85a + (58 * 0x20), 0x1e87a + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Midnight Bliss",  0x1e85a + (59 * 0x20), 0x1e87a + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Midnight Bliss",  0x1e85a + (60 * 0x20), 0x1e87a + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Midnight Bliss",  0x1e85a + (61 * 0x20), 0x1e87a + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Midnight Bliss",  0x1e85a + (62 * 0x20), 0x1e87a + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Midnight Bliss",  0x1e85a + (63 * 0x20), 0x1e87a + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Midnight Bliss",  0x1e85a + (64 * 0x20), 0x1e87a + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri Q-Bee's QJ Honey",   0x1e85a + (65 * 0x20), 0x1e87a + (65 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 1",    0x1e85a + (66 * 0x20), 0x1e87a + (66 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 2",    0x1e85a + (67 * 0x20), 0x1e87a + (67 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 3",    0x1e85a + (68 * 0x20), 0x1e87a + (68 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 4",    0x1e85a + (69 * 0x20), 0x1e87a + (69 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 1",    0x1e85a + (70 * 0x20), 0x1e87a + (70 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 2",    0x1e85a + (71 * 0x20), 0x1e87a + (71 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 3",    0x1e85a + (72 * 0x20), 0x1e87a + (72 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 4",    0x1e85a + (73 * 0x20), 0x1e87a + (73 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 1",    0x1e85a + (74 * 0x20), 0x1e87a + (74 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 2",    0x1e85a + (75 * 0x20), 0x1e87a + (75 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 3",    0x1e85a + (76 * 0x20), 0x1e87a + (76 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 4",    0x1e85a + (77 * 0x20), 0x1e87a + (77 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 1",    0x1e85a + (78 * 0x20), 0x1e87a + (78 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 2",    0x1e85a + (79 * 0x20), 0x1e87a + (79 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 3",    0x1e85a + (80 * 0x20), 0x1e87a + (80 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 4",    0x1e85a + (81 * 0x20), 0x1e87a + (81 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 1",    0x1e85a + (82 * 0x20), 0x1e87a + (82 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 2",    0x1e85a + (83 * 0x20), 0x1e87a + (83 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 3",    0x1e85a + (84 * 0x20), 0x1e87a + (84 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 4",    0x1e85a + (85 * 0x20), 0x1e87a + (85 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 1",    0x1e85a + (86 * 0x20), 0x1e87a + (86 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 2",    0x1e85a + (87 * 0x20), 0x1e87a + (87 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 3",    0x1e85a + (88 * 0x20), 0x1e87a + (88 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 4",    0x1e85a + (89 * 0x20), 0x1e87a + (89 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 1",    0x1e85a + (90 * 0x20), 0x1e87a + (90 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 2",    0x1e85a + (91 * 0x20), 0x1e87a + (91 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 3",    0x1e85a + (92 * 0x20), 0x1e87a + (92 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 4",    0x1e85a + (93 * 0x20), 0x1e87a + (93 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 1",    0x1e85a + (94 * 0x20), 0x1e87a + (94 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 2",    0x1e85a + (95 * 0x20), 0x1e87a + (95 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 3",    0x1e85a + (96 * 0x20), 0x1e87a + (96 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 4",    0x1e85a + (97 * 0x20), 0x1e87a + (97 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 1",    0x1e85a + (98 * 0x20), 0x1e87a + (98 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 2",    0x1e85a + (99 * 0x20), 0x1e87a + (99 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 3",    0x1e85a + (100 * 0x20), 0x1e87a + (100 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 4",    0x1e85a + (101 * 0x20), 0x1e87a + (101 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 1",    0x1e85a + (102 * 0x20), 0x1e87a + (102 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 2",    0x1e85a + (103 * 0x20), 0x1e87a + (103 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 3",    0x1e85a + (104 * 0x20), 0x1e87a + (104 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 4",    0x1e85a + (105 * 0x20), 0x1e87a + (105 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 1",              0x1e85a + (106 * 0x20), 0x1e87a + (106 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 2",              0x1e85a + (107 * 0x20), 0x1e87a + (107 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 3",              0x1e85a + (108 * 0x20), 0x1e87a + (108 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 4",              0x1e85a + (109 * 0x20), 0x1e87a + (109 * 0x20), indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_SPECIAL[] =
{
    { L"Gallon LP Poisoned",        0x1f61a + (0 * 0x20), 0x1f63a + (0 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Poisoned",        0x1f61a + (1 * 0x20), 0x1f63a + (1 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Poisoned",        0x1f61a + (2 * 0x20), 0x1f63a + (2 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Poisoned",        0x1f61a + (3 * 0x20), 0x1f63a + (3 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Poisoned",        0x1f61a + (4 * 0x20), 0x1f63a + (4 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Poisoned",        0x1f61a + (5 * 0x20), 0x1f63a + (5 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Poisoned",        0x1f61a + (6 * 0x20), 0x1f63a + (6 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Poisoned",        0x1f61a + (7 * 0x20), 0x1f63a + (7 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Poisoned",        0x1f61a + (8 * 0x20), 0x1f63a + (8 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Poisoned",        0x1f61a + (9 * 0x20), 0x1f63a + (9 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Zapped",          0x1f61a + (10 * 0x20), 0x1f63a + (10 * 0x20) },
    { L"Gallon MP Zapped",          0x1f61a + (11 * 0x20), 0x1f63a + (11 * 0x20) },
    { L"Gallon HP Zapped",          0x1f61a + (12 * 0x20), 0x1f63a + (12 * 0x20) },
    { L"Gallon LK Zapped",          0x1f61a + (13 * 0x20), 0x1f63a + (13 * 0x20) },
    { L"Gallon MK Zapped",          0x1f61a + (14 * 0x20), 0x1f63a + (14 * 0x20) },
    { L"Gallon HK Zapped",          0x1f61a + (15 * 0x20), 0x1f63a + (15 * 0x20) },
    { L"Gallon PP Zapped",          0x1f61a + (16 * 0x20), 0x1f63a + (16 * 0x20) },
    { L"Gallon KK Zapped",          0x1f61a + (17 * 0x20), 0x1f63a + (17 * 0x20) },
    { L"Gallon AP Zapped",          0x1f61a + (18 * 0x20), 0x1f63a + (18 * 0x20) },
    { L"Gallon AK Zapped",          0x1f61a + (19 * 0x20), 0x1f63a + (19 * 0x20) },
    { L"Gallon LP Burned",          0x1f61a + (20 * 0x20), 0x1f63a + (20 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Burned",          0x1f61a + (21 * 0x20), 0x1f63a + (21 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Burned",          0x1f61a + (22 * 0x20), 0x1f63a + (22 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Burned",          0x1f61a + (23 * 0x20), 0x1f63a + (23 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Burned",          0x1f61a + (24 * 0x20), 0x1f63a + (24 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Burned",          0x1f61a + (25 * 0x20), 0x1f63a + (25 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Burned",          0x1f61a + (26 * 0x20), 0x1f63a + (26 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Burned",          0x1f61a + (27 * 0x20), 0x1f63a + (27 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Burned",          0x1f61a + (28 * 0x20), 0x1f63a + (28 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Burned",          0x1f61a + (29 * 0x20), 0x1f63a + (29 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Pharaoh's Curse", 0x1f61a + (30 * 0x20), 0x1f63a + (30 * 0x20) },
    { L"Gallon MP Pharaoh's Curse", 0x1f61a + (31 * 0x20), 0x1f63a + (31 * 0x20) },
    { L"Gallon HP Pharaoh's Curse", 0x1f61a + (32 * 0x20), 0x1f63a + (32 * 0x20) },
    { L"Gallon LK Pharaoh's Curse", 0x1f61a + (33 * 0x20), 0x1f63a + (33 * 0x20) },
    { L"Gallon MK Pharaoh's Curse", 0x1f61a + (34 * 0x20), 0x1f63a + (34 * 0x20) },
    { L"Gallon HK Pharaoh's Curse", 0x1f61a + (35 * 0x20), 0x1f63a + (35 * 0x20) },
    { L"Gallon PP Pharaoh's Curse", 0x1f61a + (36 * 0x20), 0x1f63a + (36 * 0x20) },
    { L"Gallon KK Pharaoh's Curse", 0x1f61a + (37 * 0x20), 0x1f63a + (37 * 0x20) },
    { L"Gallon AP Pharaoh's Curse", 0x1f61a + (38 * 0x20), 0x1f63a + (38 * 0x20) },
    { L"Gallon AK Pharaoh's Curse", 0x1f61a + (39 * 0x20), 0x1f63a + (39 * 0x20) },
    { L"Gallon ES 1",               0x1f61a + (40 * 0x20), 0x1f63a + (40 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ES 2",               0x1f61a + (41 * 0x20), 0x1f63a + (41 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ES 3",               0x1f61a + (42 * 0x20), 0x1f63a + (42 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ES 4",               0x1f61a + (43 * 0x20), 0x1f63a + (43 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 1",               0x1f61a + (44 * 0x20), 0x1f63a + (44 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 2",               0x1f61a + (45 * 0x20), 0x1f63a + (45 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 3",               0x1f61a + (46 * 0x20), 0x1f63a + (46 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 4",               0x1f61a + (47 * 0x20), 0x1f63a + (47 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 5",               0x1f61a + (48 * 0x20), 0x1f63a + (48 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 6",               0x1f61a + (49 * 0x20), 0x1f63a + (49 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 7",               0x1f61a + (50 * 0x20), 0x1f63a + (50 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 8",               0x1f61a + (51 * 0x20), 0x1f63a + (51 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon Prova di Servo",     0x1f61a + (52 * 0x20), 0x1f63a + (52 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon Finale Rosso",       0x1f61a + (53 * 0x20), 0x1f63a + (53 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon Stone",              0x1f61a + (54 * 0x20), 0x1f63a + (54 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Midnight Bliss",  0x1f61a + (55 * 0x20), 0x1f63a + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Midnight Bliss",  0x1f61a + (56 * 0x20), 0x1f63a + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Midnight Bliss",  0x1f61a + (57 * 0x20), 0x1f63a + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Midnight Bliss",  0x1f61a + (58 * 0x20), 0x1f63a + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Midnight Bliss",  0x1f61a + (59 * 0x20), 0x1f63a + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Midnight Bliss",  0x1f61a + (60 * 0x20), 0x1f63a + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Midnight Bliss",  0x1f61a + (61 * 0x20), 0x1f63a + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Midnight Bliss",  0x1f61a + (62 * 0x20), 0x1f63a + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Midnight Bliss",  0x1f61a + (63 * 0x20), 0x1f63a + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Midnight Bliss",  0x1f61a + (64 * 0x20), 0x1f63a + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon Q-Bee's QJ Honey",   0x1f61a + (65 * 0x20), 0x1f63a + (65 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 1",    0x1f61a + (66 * 0x20), 0x1f63a + (66 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 2",    0x1f61a + (67 * 0x20), 0x1f63a + (67 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 3",    0x1f61a + (68 * 0x20), 0x1f63a + (68 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 4",    0x1f61a + (69 * 0x20), 0x1f63a + (69 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 1",    0x1f61a + (70 * 0x20), 0x1f63a + (70 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 2",    0x1f61a + (71 * 0x20), 0x1f63a + (71 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 3",    0x1f61a + (72 * 0x20), 0x1f63a + (72 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 4",    0x1f61a + (73 * 0x20), 0x1f63a + (73 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 1",    0x1f61a + (74 * 0x20), 0x1f63a + (74 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 2",    0x1f61a + (75 * 0x20), 0x1f63a + (75 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 3",    0x1f61a + (76 * 0x20), 0x1f63a + (76 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 4",    0x1f61a + (77 * 0x20), 0x1f63a + (77 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 1",    0x1f61a + (78 * 0x20), 0x1f63a + (78 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 2",    0x1f61a + (79 * 0x20), 0x1f63a + (79 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 3",    0x1f61a + (80 * 0x20), 0x1f63a + (80 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 4",    0x1f61a + (81 * 0x20), 0x1f63a + (81 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 1",    0x1f61a + (82 * 0x20), 0x1f63a + (82 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 2",    0x1f61a + (83 * 0x20), 0x1f63a + (83 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 3",    0x1f61a + (84 * 0x20), 0x1f63a + (84 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 4",    0x1f61a + (85 * 0x20), 0x1f63a + (85 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 1",    0x1f61a + (86 * 0x20), 0x1f63a + (86 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 2",    0x1f61a + (87 * 0x20), 0x1f63a + (87 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 3",    0x1f61a + (88 * 0x20), 0x1f63a + (88 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 4",    0x1f61a + (89 * 0x20), 0x1f63a + (89 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 1",    0x1f61a + (90 * 0x20), 0x1f63a + (90 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 2",    0x1f61a + (91 * 0x20), 0x1f63a + (91 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 3",    0x1f61a + (92 * 0x20), 0x1f63a + (92 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 4",    0x1f61a + (93 * 0x20), 0x1f63a + (93 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 1",    0x1f61a + (94 * 0x20), 0x1f63a + (94 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 2",    0x1f61a + (95 * 0x20), 0x1f63a + (95 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 3",    0x1f61a + (96 * 0x20), 0x1f63a + (96 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 4",    0x1f61a + (97 * 0x20), 0x1f63a + (97 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 1",    0x1f61a + (98 * 0x20), 0x1f63a + (98 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 2",    0x1f61a + (99 * 0x20), 0x1f63a + (99 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 3",    0x1f61a + (100 * 0x20), 0x1f63a + (100 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 4",    0x1f61a + (101 * 0x20), 0x1f63a + (101 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 1",    0x1f61a + (102 * 0x20), 0x1f63a + (102 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 2",    0x1f61a + (103 * 0x20), 0x1f63a + (103 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 3",    0x1f61a + (104 * 0x20), 0x1f63a + (104 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 4",    0x1f61a + (105 * 0x20), 0x1f63a + (105 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 1",              0x1f61a + (106 * 0x20), 0x1f63a + (106 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 2",              0x1f61a + (107 * 0x20), 0x1f63a + (107 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 3",              0x1f61a + (108 * 0x20), 0x1f63a + (108 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 4",              0x1f61a + (109 * 0x20), 0x1f63a + (109 * 0x20), indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV2_A_Victor_PALETTES_SPECIAL[] =
{
    { L"Victor LP Poisoned",        0x203da + (0 * 0x20), 0x203fa + (0 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Poisoned",        0x203da + (1 * 0x20), 0x203fa + (1 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Poisoned",        0x203da + (2 * 0x20), 0x203fa + (2 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Poisoned",        0x203da + (3 * 0x20), 0x203fa + (3 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Poisoned",        0x203da + (4 * 0x20), 0x203fa + (4 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Poisoned",        0x203da + (5 * 0x20), 0x203fa + (5 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Poisoned",        0x203da + (6 * 0x20), 0x203fa + (6 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Poisoned",        0x203da + (7 * 0x20), 0x203fa + (7 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Poisoned",        0x203da + (8 * 0x20), 0x203fa + (8 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Poisoned",        0x203da + (9 * 0x20), 0x203fa + (9 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Zapped",          0x203da + (10 * 0x20), 0x203fa + (10 * 0x20) },
    { L"Victor MP Zapped",          0x203da + (11 * 0x20), 0x203fa + (11 * 0x20) },
    { L"Victor HP Zapped",          0x203da + (12 * 0x20), 0x203fa + (12 * 0x20) },
    { L"Victor LK Zapped",          0x203da + (13 * 0x20), 0x203fa + (13 * 0x20) },
    { L"Victor MK Zapped",          0x203da + (14 * 0x20), 0x203fa + (14 * 0x20) },
    { L"Victor HK Zapped",          0x203da + (15 * 0x20), 0x203fa + (15 * 0x20) },
    { L"Victor PP Zapped",          0x203da + (16 * 0x20), 0x203fa + (16 * 0x20) },
    { L"Victor KK Zapped",          0x203da + (17 * 0x20), 0x203fa + (17 * 0x20) },
    { L"Victor AP Zapped",          0x203da + (18 * 0x20), 0x203fa + (18 * 0x20) },
    { L"Victor AK Zapped",          0x203da + (19 * 0x20), 0x203fa + (19 * 0x20) },
    { L"Victor LP Burned",          0x203da + (20 * 0x20), 0x203fa + (20 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Burned",          0x203da + (21 * 0x20), 0x203fa + (21 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Burned",          0x203da + (22 * 0x20), 0x203fa + (22 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Burned",          0x203da + (23 * 0x20), 0x203fa + (23 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Burned",          0x203da + (24 * 0x20), 0x203fa + (24 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Burned",          0x203da + (25 * 0x20), 0x203fa + (25 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Burned",          0x203da + (26 * 0x20), 0x203fa + (26 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Burned",          0x203da + (27 * 0x20), 0x203fa + (27 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Burned",          0x203da + (28 * 0x20), 0x203fa + (28 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Burned",          0x203da + (29 * 0x20), 0x203fa + (29 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Pharaoh's Curse", 0x203da + (30 * 0x20), 0x203fa + (30 * 0x20) },
    { L"Victor MP Pharaoh's Curse", 0x203da + (31 * 0x20), 0x203fa + (31 * 0x20) },
    { L"Victor HP Pharaoh's Curse", 0x203da + (32 * 0x20), 0x203fa + (32 * 0x20) },
    { L"Victor LK Pharaoh's Curse", 0x203da + (33 * 0x20), 0x203fa + (33 * 0x20) },
    { L"Victor MK Pharaoh's Curse", 0x203da + (34 * 0x20), 0x203fa + (34 * 0x20) },
    { L"Victor HK Pharaoh's Curse", 0x203da + (35 * 0x20), 0x203fa + (35 * 0x20) },
    { L"Victor PP Pharaoh's Curse", 0x203da + (36 * 0x20), 0x203fa + (36 * 0x20) },
    { L"Victor KK Pharaoh's Curse", 0x203da + (37 * 0x20), 0x203fa + (37 * 0x20) },
    { L"Victor AP Pharaoh's Curse", 0x203da + (38 * 0x20), 0x203fa + (38 * 0x20) },
    { L"Victor AK Pharaoh's Curse", 0x203da + (39 * 0x20), 0x203fa + (39 * 0x20) },
    { L"Victor ES 1",               0x203da + (40 * 0x20), 0x203fa + (40 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ES 2",               0x203da + (41 * 0x20), 0x203fa + (41 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ES 3",               0x203da + (42 * 0x20), 0x203fa + (42 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ES 4",               0x203da + (43 * 0x20), 0x203fa + (43 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 1",               0x203da + (44 * 0x20), 0x203fa + (44 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 2",               0x203da + (45 * 0x20), 0x203fa + (45 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 3",               0x203da + (46 * 0x20), 0x203fa + (46 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 4",               0x203da + (47 * 0x20), 0x203fa + (47 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 5",               0x203da + (48 * 0x20), 0x203fa + (48 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 6",               0x203da + (49 * 0x20), 0x203fa + (49 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 7",               0x203da + (50 * 0x20), 0x203fa + (50 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 8",               0x203da + (51 * 0x20), 0x203fa + (51 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor Prova di Servo",     0x203da + (52 * 0x20), 0x203fa + (52 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor Finale Rosso",       0x203da + (53 * 0x20), 0x203fa + (53 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor Stone",              0x203da + (54 * 0x20), 0x203fa + (54 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Midnight Bliss",  0x203da + (55 * 0x20), 0x203fa + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MP Midnight Bliss",  0x203da + (56 * 0x20), 0x203fa + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HP Midnight Bliss",  0x203da + (57 * 0x20), 0x203fa + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor LK Midnight Bliss",  0x203da + (58 * 0x20), 0x203fa + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MK Midnight Bliss",  0x203da + (59 * 0x20), 0x203fa + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HK Midnight Bliss",  0x203da + (60 * 0x20), 0x203fa + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor PP Midnight Bliss",  0x203da + (61 * 0x20), 0x203fa + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor KK Midnight Bliss",  0x203da + (62 * 0x20), 0x203fa + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AP Midnight Bliss",  0x203da + (63 * 0x20), 0x203fa + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AK Midnight Bliss",  0x203da + (64 * 0x20), 0x203fa + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor Q-Bee's QJ Honey",   0x203da + (65 * 0x20), 0x203fa + (65 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 1",    0x203da + (66 * 0x20), 0x203fa + (66 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 2",    0x203da + (67 * 0x20), 0x203fa + (67 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 3",    0x203da + (68 * 0x20), 0x203fa + (68 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 4",    0x203da + (69 * 0x20), 0x203fa + (69 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 1",    0x203da + (70 * 0x20), 0x203fa + (70 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 2",    0x203da + (71 * 0x20), 0x203fa + (71 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 3",    0x203da + (72 * 0x20), 0x203fa + (72 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 4",    0x203da + (73 * 0x20), 0x203fa + (73 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 1",    0x203da + (74 * 0x20), 0x203fa + (74 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 2",    0x203da + (75 * 0x20), 0x203fa + (75 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 3",    0x203da + (76 * 0x20), 0x203fa + (76 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 4",    0x203da + (77 * 0x20), 0x203fa + (77 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 1",    0x203da + (78 * 0x20), 0x203fa + (78 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 2",    0x203da + (79 * 0x20), 0x203fa + (79 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 3",    0x203da + (80 * 0x20), 0x203fa + (80 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 4",    0x203da + (81 * 0x20), 0x203fa + (81 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 1",    0x203da + (82 * 0x20), 0x203fa + (82 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 2",    0x203da + (83 * 0x20), 0x203fa + (83 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 3",    0x203da + (84 * 0x20), 0x203fa + (84 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 4",    0x203da + (85 * 0x20), 0x203fa + (85 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 1",    0x203da + (86 * 0x20), 0x203fa + (86 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 2",    0x203da + (87 * 0x20), 0x203fa + (87 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 3",    0x203da + (88 * 0x20), 0x203fa + (88 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 4",    0x203da + (89 * 0x20), 0x203fa + (89 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 1",    0x203da + (90 * 0x20), 0x203fa + (90 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 2",    0x203da + (91 * 0x20), 0x203fa + (91 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 3",    0x203da + (92 * 0x20), 0x203fa + (92 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 4",    0x203da + (93 * 0x20), 0x203fa + (93 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 1",    0x203da + (94 * 0x20), 0x203fa + (94 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 2",    0x203da + (95 * 0x20), 0x203fa + (95 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 3",    0x203da + (96 * 0x20), 0x203fa + (96 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 4",    0x203da + (97 * 0x20), 0x203fa + (97 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 1",    0x203da + (98 * 0x20), 0x203fa + (98 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 2",    0x203da + (99 * 0x20), 0x203fa + (99 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 3",    0x203da + (100 * 0x20), 0x203fa + (100 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 4",    0x203da + (101 * 0x20), 0x203fa + (101 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 1",    0x203da + (102 * 0x20), 0x203fa + (102 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 2",    0x203da + (103 * 0x20), 0x203fa + (103 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 3",    0x203da + (104 * 0x20), 0x203fa + (104 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 4",    0x203da + (105 * 0x20), 0x203fa + (105 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 1",              0x203da + (106 * 0x20), 0x203fa + (106 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 2",              0x203da + (107 * 0x20), 0x203fa + (107 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 3",              0x203da + (108 * 0x20), 0x203fa + (108 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 4",              0x203da + (109 * 0x20), 0x203fa + (109 * 0x20), indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV2_A_Zabel_PALETTES_SPECIAL[] =
{
    { L"Zabel LP Poisoned",        0x2119a + (0 * 0x20), 0x211Ba + (0 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Poisoned",        0x2119a + (1 * 0x20), 0x211Ba + (1 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Poisoned",        0x2119a + (2 * 0x20), 0x211Ba + (2 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Poisoned",        0x2119a + (3 * 0x20), 0x211Ba + (3 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Poisoned",        0x2119a + (4 * 0x20), 0x211Ba + (4 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Poisoned",        0x2119a + (5 * 0x20), 0x211Ba + (5 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Poisoned",        0x2119a + (6 * 0x20), 0x211Ba + (6 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Poisoned",        0x2119a + (7 * 0x20), 0x211Ba + (7 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Poisoned",        0x2119a + (8 * 0x20), 0x211Ba + (8 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Poisoned",        0x2119a + (9 * 0x20), 0x211Ba + (9 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Zapped",          0x2119a + (10 * 0x20), 0x211Ba + (10 * 0x20) },
    { L"Zabel MP Zapped",          0x2119a + (11 * 0x20), 0x211Ba + (11 * 0x20) },
    { L"Zabel HP Zapped",          0x2119a + (12 * 0x20), 0x211Ba + (12 * 0x20) },
    { L"Zabel LK Zapped",          0x2119a + (13 * 0x20), 0x211Ba + (13 * 0x20) },
    { L"Zabel MK Zapped",          0x2119a + (14 * 0x20), 0x211Ba + (14 * 0x20) },
    { L"Zabel HK Zapped",          0x2119a + (15 * 0x20), 0x211Ba + (15 * 0x20) },
    { L"Zabel PP Zapped",          0x2119a + (16 * 0x20), 0x211Ba + (16 * 0x20) },
    { L"Zabel KK Zapped",          0x2119a + (17 * 0x20), 0x211Ba + (17 * 0x20) },
    { L"Zabel AP Zapped",          0x2119a + (18 * 0x20), 0x211Ba + (18 * 0x20) },
    { L"Zabel AK Zapped",          0x2119a + (19 * 0x20), 0x211Ba + (19 * 0x20) },
    { L"Zabel LP Burned",          0x2119a + (20 * 0x20), 0x211Ba + (20 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Burned",          0x2119a + (21 * 0x20), 0x211Ba + (21 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Burned",          0x2119a + (22 * 0x20), 0x211Ba + (22 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Burned",          0x2119a + (23 * 0x20), 0x211Ba + (23 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Burned",          0x2119a + (24 * 0x20), 0x211Ba + (24 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Burned",          0x2119a + (25 * 0x20), 0x211Ba + (25 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Burned",          0x2119a + (26 * 0x20), 0x211Ba + (26 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Burned",          0x2119a + (27 * 0x20), 0x211Ba + (27 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Burned",          0x2119a + (28 * 0x20), 0x211Ba + (28 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Burned",          0x2119a + (29 * 0x20), 0x211Ba + (29 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Pharaoh's Curse", 0x2119a + (30 * 0x20), 0x211Ba + (30 * 0x20) },
    { L"Zabel MP Pharaoh's Curse", 0x2119a + (31 * 0x20), 0x211Ba + (31 * 0x20) },
    { L"Zabel HP Pharaoh's Curse", 0x2119a + (32 * 0x20), 0x211Ba + (32 * 0x20) },
    { L"Zabel LK Pharaoh's Curse", 0x2119a + (33 * 0x20), 0x211Ba + (33 * 0x20) },
    { L"Zabel MK Pharaoh's Curse", 0x2119a + (34 * 0x20), 0x211Ba + (34 * 0x20) },
    { L"Zabel HK Pharaoh's Curse", 0x2119a + (35 * 0x20), 0x211Ba + (35 * 0x20) },
    { L"Zabel PP Pharaoh's Curse", 0x2119a + (36 * 0x20), 0x211Ba + (36 * 0x20) },
    { L"Zabel KK Pharaoh's Curse", 0x2119a + (37 * 0x20), 0x211Ba + (37 * 0x20) },
    { L"Zabel AP Pharaoh's Curse", 0x2119a + (38 * 0x20), 0x211Ba + (38 * 0x20) },
    { L"Zabel AK Pharaoh's Curse", 0x2119a + (39 * 0x20), 0x211Ba + (39 * 0x20) },
    { L"Zabel ES 1",               0x2119a + (40 * 0x20), 0x211Ba + (40 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ES 2",               0x2119a + (41 * 0x20), 0x211Ba + (41 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ES 3",               0x2119a + (42 * 0x20), 0x211Ba + (42 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ES 4",               0x2119a + (43 * 0x20), 0x211Ba + (43 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 1",               0x2119a + (44 * 0x20), 0x211Ba + (44 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 2",               0x2119a + (45 * 0x20), 0x211Ba + (45 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 3",               0x2119a + (46 * 0x20), 0x211Ba + (46 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 4",               0x2119a + (47 * 0x20), 0x211Ba + (47 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 5",               0x2119a + (48 * 0x20), 0x211Ba + (48 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 6",               0x2119a + (49 * 0x20), 0x211Ba + (49 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 7",               0x2119a + (50 * 0x20), 0x211Ba + (50 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 8",               0x2119a + (51 * 0x20), 0x211Ba + (51 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel Prova di Servo",     0x2119a + (52 * 0x20), 0x211Ba + (52 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel Finale Rosso",       0x2119a + (53 * 0x20), 0x211Ba + (53 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel Stone",              0x2119a + (54 * 0x20), 0x211Ba + (54 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Midnight Bliss",  0x2119a + (55 * 0x20), 0x211Ba + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Midnight Bliss",  0x2119a + (56 * 0x20), 0x211Ba + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Midnight Bliss",  0x2119a + (57 * 0x20), 0x211Ba + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Midnight Bliss",  0x2119a + (58 * 0x20), 0x211Ba + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Midnight Bliss",  0x2119a + (59 * 0x20), 0x211Ba + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Midnight Bliss",  0x2119a + (60 * 0x20), 0x211Ba + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Midnight Bliss",  0x2119a + (61 * 0x20), 0x211Ba + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Midnight Bliss",  0x2119a + (62 * 0x20), 0x211Ba + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Midnight Bliss",  0x2119a + (63 * 0x20), 0x211Ba + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Midnight Bliss",  0x2119a + (64 * 0x20), 0x211Ba + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel Q-Bee's QJ Honey",   0x2119a + (65 * 0x20), 0x211Ba + (65 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 1",    0x2119a + (66 * 0x20), 0x211Ba + (66 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 2",    0x2119a + (67 * 0x20), 0x211Ba + (67 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 3",    0x2119a + (68 * 0x20), 0x211Ba + (68 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 4",    0x2119a + (69 * 0x20), 0x211Ba + (69 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 1",    0x2119a + (70 * 0x20), 0x211Ba + (70 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 2",    0x2119a + (71 * 0x20), 0x211Ba + (71 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 3",    0x2119a + (72 * 0x20), 0x211Ba + (72 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 4",    0x2119a + (73 * 0x20), 0x211Ba + (73 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 1",    0x2119a + (74 * 0x20), 0x211Ba + (74 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 2",    0x2119a + (75 * 0x20), 0x211Ba + (75 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 3",    0x2119a + (76 * 0x20), 0x211Ba + (76 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 4",    0x2119a + (77 * 0x20), 0x211Ba + (77 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 1",    0x2119a + (78 * 0x20), 0x211Ba + (78 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 2",    0x2119a + (79 * 0x20), 0x211Ba + (79 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 3",    0x2119a + (80 * 0x20), 0x211Ba + (80 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 4",    0x2119a + (81 * 0x20), 0x211Ba + (81 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 1",    0x2119a + (82 * 0x20), 0x211Ba + (82 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 2",    0x2119a + (83 * 0x20), 0x211Ba + (83 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 3",    0x2119a + (84 * 0x20), 0x211Ba + (84 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 4",    0x2119a + (85 * 0x20), 0x211Ba + (85 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 1",    0x2119a + (86 * 0x20), 0x211Ba + (86 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 2",    0x2119a + (87 * 0x20), 0x211Ba + (87 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 3",    0x2119a + (88 * 0x20), 0x211Ba + (88 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 4",    0x2119a + (89 * 0x20), 0x211Ba + (89 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 1",    0x2119a + (90 * 0x20), 0x211Ba + (90 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 2",    0x2119a + (91 * 0x20), 0x211Ba + (91 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 3",    0x2119a + (92 * 0x20), 0x211Ba + (92 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 4",    0x2119a + (93 * 0x20), 0x211Ba + (93 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 1",    0x2119a + (94 * 0x20), 0x211Ba + (94 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 2",    0x2119a + (95 * 0x20), 0x211Ba + (95 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 3",    0x2119a + (96 * 0x20), 0x211Ba + (96 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 4",    0x2119a + (97 * 0x20), 0x211Ba + (97 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 1",    0x2119a + (98 * 0x20), 0x211Ba + (98 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 2",    0x2119a + (99 * 0x20), 0x211Ba + (99 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 3",    0x2119a + (100 * 0x20), 0x211Ba + (100 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 4",    0x2119a + (101 * 0x20), 0x211Ba + (101 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 1",    0x2119a + (102 * 0x20), 0x211Ba + (102 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 2",    0x2119a + (103 * 0x20), 0x211Ba + (103 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 3",    0x2119a + (104 * 0x20), 0x211Ba + (104 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 4",    0x2119a + (105 * 0x20), 0x211Ba + (105 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 1",              0x2119a + (106 * 0x20), 0x211Ba + (106 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 2",              0x2119a + (107 * 0x20), 0x211Ba + (107 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 3",              0x2119a + (108 * 0x20), 0x211Ba + (108 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 4",              0x2119a + (109 * 0x20), 0x211Ba + (109 * 0x20), indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV2_A_Morrigan_PALETTES_SPECIAL[] =
{
    { L"Morrigan LP Poisoned",        0x2119a + (1 * 0xDC0) + (0 * 0x20), 0x211Ba + (1 * 0xDC0) + (0 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Poisoned",        0x2119a + (1 * 0xDC0) + (1 * 0x20), 0x211Ba + (1 * 0xDC0) + (1 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Poisoned",        0x2119a + (1 * 0xDC0) + (2 * 0x20), 0x211Ba + (1 * 0xDC0) + (2 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Poisoned",        0x2119a + (1 * 0xDC0) + (3 * 0x20), 0x211Ba + (1 * 0xDC0) + (3 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Poisoned",        0x2119a + (1 * 0xDC0) + (4 * 0x20), 0x211Ba + (1 * 0xDC0) + (4 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Poisoned",        0x2119a + (1 * 0xDC0) + (5 * 0x20), 0x211Ba + (1 * 0xDC0) + (5 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Poisoned",        0x2119a + (1 * 0xDC0) + (6 * 0x20), 0x211Ba + (1 * 0xDC0) + (6 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Poisoned",        0x2119a + (1 * 0xDC0) + (7 * 0x20), 0x211Ba + (1 * 0xDC0) + (7 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Poisoned",        0x2119a + (1 * 0xDC0) + (8 * 0x20), 0x211Ba + (1 * 0xDC0) + (8 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Poisoned",        0x2119a + (1 * 0xDC0) + (9 * 0x20), 0x211Ba + (1 * 0xDC0) + (9 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Zapped",          0x2119a + (1 * 0xDC0) + (10 * 0x20), 0x211Ba + (1 * 0xDC0) + (10 * 0x20) },
    { L"Morrigan MP Zapped",          0x2119a + (1 * 0xDC0) + (11 * 0x20), 0x211Ba + (1 * 0xDC0) + (11 * 0x20) },
    { L"Morrigan HP Zapped",          0x2119a + (1 * 0xDC0) + (12 * 0x20), 0x211Ba + (1 * 0xDC0) + (12 * 0x20) },
    { L"Morrigan LK Zapped",          0x2119a + (1 * 0xDC0) + (13 * 0x20), 0x211Ba + (1 * 0xDC0) + (13 * 0x20) },
    { L"Morrigan MK Zapped",          0x2119a + (1 * 0xDC0) + (14 * 0x20), 0x211Ba + (1 * 0xDC0) + (14 * 0x20) },
    { L"Morrigan HK Zapped",          0x2119a + (1 * 0xDC0) + (15 * 0x20), 0x211Ba + (1 * 0xDC0) + (15 * 0x20) },
    { L"Morrigan PP Zapped",          0x2119a + (1 * 0xDC0) + (16 * 0x20), 0x211Ba + (1 * 0xDC0) + (16 * 0x20) },
    { L"Morrigan KK Zapped",          0x2119a + (1 * 0xDC0) + (17 * 0x20), 0x211Ba + (1 * 0xDC0) + (17 * 0x20) },
    { L"Morrigan AP Zapped",          0x2119a + (1 * 0xDC0) + (18 * 0x20), 0x211Ba + (1 * 0xDC0) + (18 * 0x20) },
    { L"Morrigan AK Zapped",          0x2119a + (1 * 0xDC0) + (19 * 0x20), 0x211Ba + (1 * 0xDC0) + (19 * 0x20) },
    { L"Morrigan LP Burned",          0x2119a + (1 * 0xDC0) + (20 * 0x20), 0x211Ba + (1 * 0xDC0) + (20 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Burned",          0x2119a + (1 * 0xDC0) + (21 * 0x20), 0x211Ba + (1 * 0xDC0) + (21 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Burned",          0x2119a + (1 * 0xDC0) + (22 * 0x20), 0x211Ba + (1 * 0xDC0) + (22 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Burned",          0x2119a + (1 * 0xDC0) + (23 * 0x20), 0x211Ba + (1 * 0xDC0) + (23 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Burned",          0x2119a + (1 * 0xDC0) + (24 * 0x20), 0x211Ba + (1 * 0xDC0) + (24 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Burned",          0x2119a + (1 * 0xDC0) + (25 * 0x20), 0x211Ba + (1 * 0xDC0) + (25 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Burned",          0x2119a + (1 * 0xDC0) + (26 * 0x20), 0x211Ba + (1 * 0xDC0) + (26 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Burned",          0x2119a + (1 * 0xDC0) + (27 * 0x20), 0x211Ba + (1 * 0xDC0) + (27 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Burned",          0x2119a + (1 * 0xDC0) + (28 * 0x20), 0x211Ba + (1 * 0xDC0) + (28 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Burned",          0x2119a + (1 * 0xDC0) + (29 * 0x20), 0x211Ba + (1 * 0xDC0) + (29 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (30 * 0x20), 0x211Ba + (1 * 0xDC0) + (30 * 0x20) },
    { L"Morrigan MP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (31 * 0x20), 0x211Ba + (1 * 0xDC0) + (31 * 0x20) },
    { L"Morrigan HP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (32 * 0x20), 0x211Ba + (1 * 0xDC0) + (32 * 0x20) },
    { L"Morrigan LK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (33 * 0x20), 0x211Ba + (1 * 0xDC0) + (33 * 0x20) },
    { L"Morrigan MK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (34 * 0x20), 0x211Ba + (1 * 0xDC0) + (34 * 0x20) },
    { L"Morrigan HK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (35 * 0x20), 0x211Ba + (1 * 0xDC0) + (35 * 0x20) },
    { L"Morrigan PP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (36 * 0x20), 0x211Ba + (1 * 0xDC0) + (36 * 0x20) },
    { L"Morrigan KK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (37 * 0x20), 0x211Ba + (1 * 0xDC0) + (37 * 0x20) },
    { L"Morrigan AP Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (38 * 0x20), 0x211Ba + (1 * 0xDC0) + (38 * 0x20) },
    { L"Morrigan AK Pharaoh's Curse", 0x2119a + (1 * 0xDC0) + (39 * 0x20), 0x211Ba + (1 * 0xDC0) + (39 * 0x20) },
    { L"Morrigan ES 1",               0x2119a + (1 * 0xDC0) + (40 * 0x20), 0x211Ba + (1 * 0xDC0) + (40 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ES 2",               0x2119a + (1 * 0xDC0) + (41 * 0x20), 0x211Ba + (1 * 0xDC0) + (41 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ES 3",               0x2119a + (1 * 0xDC0) + (42 * 0x20), 0x211Ba + (1 * 0xDC0) + (42 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ES 4",               0x2119a + (1 * 0xDC0) + (43 * 0x20), 0x211Ba + (1 * 0xDC0) + (43 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 1",               0x2119a + (1 * 0xDC0) + (44 * 0x20), 0x211Ba + (1 * 0xDC0) + (44 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 2",               0x2119a + (1 * 0xDC0) + (45 * 0x20), 0x211Ba + (1 * 0xDC0) + (45 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 3",               0x2119a + (1 * 0xDC0) + (46 * 0x20), 0x211Ba + (1 * 0xDC0) + (46 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 4",               0x2119a + (1 * 0xDC0) + (47 * 0x20), 0x211Ba + (1 * 0xDC0) + (47 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 5",               0x2119a + (1 * 0xDC0) + (48 * 0x20), 0x211Ba + (1 * 0xDC0) + (48 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 6",               0x2119a + (1 * 0xDC0) + (49 * 0x20), 0x211Ba + (1 * 0xDC0) + (49 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 7",               0x2119a + (1 * 0xDC0) + (50 * 0x20), 0x211Ba + (1 * 0xDC0) + (50 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 8",               0x2119a + (1 * 0xDC0) + (51 * 0x20), 0x211Ba + (1 * 0xDC0) + (51 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan Prova di Servo",     0x2119a + (1 * 0xDC0) + (52 * 0x20), 0x211Ba + (1 * 0xDC0) + (52 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan Finale Rosso",       0x2119a + (1 * 0xDC0) + (53 * 0x20), 0x211Ba + (1 * 0xDC0) + (53 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan Stone",              0x2119a + (1 * 0xDC0) + (54 * 0x20), 0x211Ba + (1 * 0xDC0) + (54 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (55 * 0x20), 0x211Ba + (1 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (56 * 0x20), 0x211Ba + (1 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (57 * 0x20), 0x211Ba + (1 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan LK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (58 * 0x20), 0x211Ba + (1 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (59 * 0x20), 0x211Ba + (1 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (60 * 0x20), 0x211Ba + (1 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan PP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (61 * 0x20), 0x211Ba + (1 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan KK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (62 * 0x20), 0x211Ba + (1 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AP Midnight Bliss",  0x2119a + (1 * 0xDC0) + (63 * 0x20), 0x211Ba + (1 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AK Midnight Bliss",  0x2119a + (1 * 0xDC0) + (64 * 0x20), 0x211Ba + (1 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan Q-Bee's QJ Honey",   0x2119a + (1 * 0xDC0) + (65 * 0x20), 0x211Ba + (1 * 0xDC0) + (65 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 1",    0x2119a + (1 * 0xDC0) + (66 * 0x20), 0x211Ba + (1 * 0xDC0) + (66 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 2",    0x2119a + (1 * 0xDC0) + (67 * 0x20), 0x211Ba + (1 * 0xDC0) + (67 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 3",    0x2119a + (1 * 0xDC0) + (68 * 0x20), 0x211Ba + (1 * 0xDC0) + (68 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 4",    0x2119a + (1 * 0xDC0) + (69 * 0x20), 0x211Ba + (1 * 0xDC0) + (69 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 1",    0x2119a + (1 * 0xDC0) + (70 * 0x20), 0x211Ba + (1 * 0xDC0) + (70 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 2",    0x2119a + (1 * 0xDC0) + (71 * 0x20), 0x211Ba + (1 * 0xDC0) + (71 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 3",    0x2119a + (1 * 0xDC0) + (72 * 0x20), 0x211Ba + (1 * 0xDC0) + (72 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 4",    0x2119a + (1 * 0xDC0) + (73 * 0x20), 0x211Ba + (1 * 0xDC0) + (73 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 1",    0x2119a + (1 * 0xDC0) + (74 * 0x20), 0x211Ba + (1 * 0xDC0) + (74 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 2",    0x2119a + (1 * 0xDC0) + (75 * 0x20), 0x211Ba + (1 * 0xDC0) + (75 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 3",    0x2119a + (1 * 0xDC0) + (76 * 0x20), 0x211Ba + (1 * 0xDC0) + (76 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 4",    0x2119a + (1 * 0xDC0) + (77 * 0x20), 0x211Ba + (1 * 0xDC0) + (77 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 1",    0x2119a + (1 * 0xDC0) + (78 * 0x20), 0x211Ba + (1 * 0xDC0) + (78 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 2",    0x2119a + (1 * 0xDC0) + (79 * 0x20), 0x211Ba + (1 * 0xDC0) + (79 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 3",    0x2119a + (1 * 0xDC0) + (80 * 0x20), 0x211Ba + (1 * 0xDC0) + (80 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 4",    0x2119a + (1 * 0xDC0) + (81 * 0x20), 0x211Ba + (1 * 0xDC0) + (81 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 1",    0x2119a + (1 * 0xDC0) + (82 * 0x20), 0x211Ba + (1 * 0xDC0) + (82 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 2",    0x2119a + (1 * 0xDC0) + (83 * 0x20), 0x211Ba + (1 * 0xDC0) + (83 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 3",    0x2119a + (1 * 0xDC0) + (84 * 0x20), 0x211Ba + (1 * 0xDC0) + (84 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 4",    0x2119a + (1 * 0xDC0) + (85 * 0x20), 0x211Ba + (1 * 0xDC0) + (85 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 1",    0x2119a + (1 * 0xDC0) + (86 * 0x20), 0x211Ba + (1 * 0xDC0) + (86 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 2",    0x2119a + (1 * 0xDC0) + (87 * 0x20), 0x211Ba + (1 * 0xDC0) + (87 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 3",    0x2119a + (1 * 0xDC0) + (88 * 0x20), 0x211Ba + (1 * 0xDC0) + (88 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 4",    0x2119a + (1 * 0xDC0) + (89 * 0x20), 0x211Ba + (1 * 0xDC0) + (89 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 1",    0x2119a + (1 * 0xDC0) + (90 * 0x20), 0x211Ba + (1 * 0xDC0) + (90 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 2",    0x2119a + (1 * 0xDC0) + (91 * 0x20), 0x211Ba + (1 * 0xDC0) + (91 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 3",    0x2119a + (1 * 0xDC0) + (92 * 0x20), 0x211Ba + (1 * 0xDC0) + (92 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 4",    0x2119a + (1 * 0xDC0) + (93 * 0x20), 0x211Ba + (1 * 0xDC0) + (93 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 1",    0x2119a + (1 * 0xDC0) + (94 * 0x20), 0x211Ba + (1 * 0xDC0) + (94 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 2",    0x2119a + (1 * 0xDC0) + (95 * 0x20), 0x211Ba + (1 * 0xDC0) + (95 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 3",    0x2119a + (1 * 0xDC0) + (96 * 0x20), 0x211Ba + (1 * 0xDC0) + (96 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 4",    0x2119a + (1 * 0xDC0) + (97 * 0x20), 0x211Ba + (1 * 0xDC0) + (97 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 1",    0x2119a + (1 * 0xDC0) + (98 * 0x20), 0x211Ba + (1 * 0xDC0) + (98 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 2",    0x2119a + (1 * 0xDC0) + (99 * 0x20), 0x211Ba + (1 * 0xDC0) + (99 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 3",    0x2119a + (1 * 0xDC0) + (100 * 0x20), 0x211Ba + (1 * 0xDC0) + (100 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 4",    0x2119a + (1 * 0xDC0) + (101 * 0x20), 0x211Ba + (1 * 0xDC0) + (101 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 1",    0x2119a + (1 * 0xDC0) + (102 * 0x20), 0x211Ba + (1 * 0xDC0) + (102 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 2",    0x2119a + (1 * 0xDC0) + (103 * 0x20), 0x211Ba + (1 * 0xDC0) + (103 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 3",    0x2119a + (1 * 0xDC0) + (104 * 0x20), 0x211Ba + (1 * 0xDC0) + (104 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 4",    0x2119a + (1 * 0xDC0) + (105 * 0x20), 0x211Ba + (1 * 0xDC0) + (105 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 1",              0x2119a + (1 * 0xDC0) + (106 * 0x20), 0x211Ba + (1 * 0xDC0) + (106 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 2",              0x2119a + (1 * 0xDC0) + (107 * 0x20), 0x211Ba + (1 * 0xDC0) + (107 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 3",              0x2119a + (1 * 0xDC0) + (108 * 0x20), 0x211Ba + (1 * 0xDC0) + (108 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 4",              0x2119a + (1 * 0xDC0) + (109 * 0x20), 0x211Ba + (1 * 0xDC0) + (109 * 0x20), indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV2_A_Anakaris_PALETTES_SPECIAL[] =
{
    { L"Anakaris LP Poisoned",        0x2119a + (2 * 0xDC0) + (0 * 0x20), 0x211Ba + (2 * 0xDC0) + (0 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Poisoned",        0x2119a + (2 * 0xDC0) + (1 * 0x20), 0x211Ba + (2 * 0xDC0) + (1 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Poisoned",        0x2119a + (2 * 0xDC0) + (2 * 0x20), 0x211Ba + (2 * 0xDC0) + (2 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Poisoned",        0x2119a + (2 * 0xDC0) + (3 * 0x20), 0x211Ba + (2 * 0xDC0) + (3 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Poisoned",        0x2119a + (2 * 0xDC0) + (4 * 0x20), 0x211Ba + (2 * 0xDC0) + (4 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Poisoned",        0x2119a + (2 * 0xDC0) + (5 * 0x20), 0x211Ba + (2 * 0xDC0) + (5 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Poisoned",        0x2119a + (2 * 0xDC0) + (6 * 0x20), 0x211Ba + (2 * 0xDC0) + (6 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Poisoned",        0x2119a + (2 * 0xDC0) + (7 * 0x20), 0x211Ba + (2 * 0xDC0) + (7 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Poisoned",        0x2119a + (2 * 0xDC0) + (8 * 0x20), 0x211Ba + (2 * 0xDC0) + (8 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Poisoned",        0x2119a + (2 * 0xDC0) + (9 * 0x20), 0x211Ba + (2 * 0xDC0) + (9 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Zapped",          0x2119a + (2 * 0xDC0) + (10 * 0x20), 0x211Ba + (2 * 0xDC0) + (10 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris MP Zapped",          0x2119a + (2 * 0xDC0) + (11 * 0x20), 0x211Ba + (2 * 0xDC0) + (11 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris HP Zapped",          0x2119a + (2 * 0xDC0) + (12 * 0x20), 0x211Ba + (2 * 0xDC0) + (12 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris LK Zapped",          0x2119a + (2 * 0xDC0) + (13 * 0x20), 0x211Ba + (2 * 0xDC0) + (13 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris MK Zapped",          0x2119a + (2 * 0xDC0) + (14 * 0x20), 0x211Ba + (2 * 0xDC0) + (14 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris HK Zapped",          0x2119a + (2 * 0xDC0) + (15 * 0x20), 0x211Ba + (2 * 0xDC0) + (15 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris PP Zapped",          0x2119a + (2 * 0xDC0) + (16 * 0x20), 0x211Ba + (2 * 0xDC0) + (16 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris KK Zapped",          0x2119a + (2 * 0xDC0) + (17 * 0x20), 0x211Ba + (2 * 0xDC0) + (17 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris AP Zapped",          0x2119a + (2 * 0xDC0) + (18 * 0x20), 0x211Ba + (2 * 0xDC0) + (18 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris AK Zapped",          0x2119a + (2 * 0xDC0) + (19 * 0x20), 0x211Ba + (2 * 0xDC0) + (19 * 0x20), indexCPS2_Anakaris, 0x0a },
    { L"Anakaris LP Burned",          0x2119a + (2 * 0xDC0) + (20 * 0x20), 0x211Ba + (2 * 0xDC0) + (20 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Burned",          0x2119a + (2 * 0xDC0) + (21 * 0x20), 0x211Ba + (2 * 0xDC0) + (21 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Burned",          0x2119a + (2 * 0xDC0) + (22 * 0x20), 0x211Ba + (2 * 0xDC0) + (22 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Burned",          0x2119a + (2 * 0xDC0) + (23 * 0x20), 0x211Ba + (2 * 0xDC0) + (23 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Burned",          0x2119a + (2 * 0xDC0) + (24 * 0x20), 0x211Ba + (2 * 0xDC0) + (24 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Burned",          0x2119a + (2 * 0xDC0) + (25 * 0x20), 0x211Ba + (2 * 0xDC0) + (25 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Burned",          0x2119a + (2 * 0xDC0) + (26 * 0x20), 0x211Ba + (2 * 0xDC0) + (26 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Burned",          0x2119a + (2 * 0xDC0) + (27 * 0x20), 0x211Ba + (2 * 0xDC0) + (27 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Burned",          0x2119a + (2 * 0xDC0) + (28 * 0x20), 0x211Ba + (2 * 0xDC0) + (28 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Burned",          0x2119a + (2 * 0xDC0) + (29 * 0x20), 0x211Ba + (2 * 0xDC0) + (29 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (30 * 0x20), 0x211Ba + (2 * 0xDC0) + (30 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (31 * 0x20), 0x211Ba + (2 * 0xDC0) + (31 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (32 * 0x20), 0x211Ba + (2 * 0xDC0) + (32 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris LK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (33 * 0x20), 0x211Ba + (2 * 0xDC0) + (33 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (34 * 0x20), 0x211Ba + (2 * 0xDC0) + (34 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (35 * 0x20), 0x211Ba + (2 * 0xDC0) + (35 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris PP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (36 * 0x20), 0x211Ba + (2 * 0xDC0) + (36 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris KK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (37 * 0x20), 0x211Ba + (2 * 0xDC0) + (37 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AP Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (38 * 0x20), 0x211Ba + (2 * 0xDC0) + (38 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AK Pharaoh's Curse", 0x2119a + (2 * 0xDC0) + (39 * 0x20), 0x211Ba + (2 * 0xDC0) + (39 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris ES 1",               0x2119a + (2 * 0xDC0) + (40 * 0x20), 0x211Ba + (2 * 0xDC0) + (40 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ES 2",               0x2119a + (2 * 0xDC0) + (41 * 0x20), 0x211Ba + (2 * 0xDC0) + (41 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ES 3",               0x2119a + (2 * 0xDC0) + (42 * 0x20), 0x211Ba + (2 * 0xDC0) + (42 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ES 4",               0x2119a + (2 * 0xDC0) + (43 * 0x20), 0x211Ba + (2 * 0xDC0) + (43 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 1",               0x2119a + (2 * 0xDC0) + (44 * 0x20), 0x211Ba + (2 * 0xDC0) + (44 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 2",               0x2119a + (2 * 0xDC0) + (45 * 0x20), 0x211Ba + (2 * 0xDC0) + (45 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 3",               0x2119a + (2 * 0xDC0) + (46 * 0x20), 0x211Ba + (2 * 0xDC0) + (46 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 4",               0x2119a + (2 * 0xDC0) + (47 * 0x20), 0x211Ba + (2 * 0xDC0) + (47 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 5",               0x2119a + (2 * 0xDC0) + (48 * 0x20), 0x211Ba + (2 * 0xDC0) + (48 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 6",               0x2119a + (2 * 0xDC0) + (49 * 0x20), 0x211Ba + (2 * 0xDC0) + (49 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 7",               0x2119a + (2 * 0xDC0) + (50 * 0x20), 0x211Ba + (2 * 0xDC0) + (50 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 8",               0x2119a + (2 * 0xDC0) + (51 * 0x20), 0x211Ba + (2 * 0xDC0) + (51 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris Prova di Servo",     0x2119a + (2 * 0xDC0) + (52 * 0x20), 0x211Ba + (2 * 0xDC0) + (52 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris Finale Rosso",       0x2119a + (2 * 0xDC0) + (53 * 0x20), 0x211Ba + (2 * 0xDC0) + (53 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris Stone",              0x2119a + (2 * 0xDC0) + (54 * 0x20), 0x211Ba + (2 * 0xDC0) + (54 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (55 * 0x20), 0x211Ba + (2 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (56 * 0x20), 0x211Ba + (2 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (57 * 0x20), 0x211Ba + (2 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris LK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (58 * 0x20), 0x211Ba + (2 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (59 * 0x20), 0x211Ba + (2 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (60 * 0x20), 0x211Ba + (2 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris PP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (61 * 0x20), 0x211Ba + (2 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris KK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (62 * 0x20), 0x211Ba + (2 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AP Midnight Bliss",  0x2119a + (2 * 0xDC0) + (63 * 0x20), 0x211Ba + (2 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AK Midnight Bliss",  0x2119a + (2 * 0xDC0) + (64 * 0x20), 0x211Ba + (2 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris Q-Bee's QJ Honey",   0x2119a + (2 * 0xDC0) + (65 * 0x20), 0x211Ba + (2 * 0xDC0) + (65 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 1",    0x2119a + (2 * 0xDC0) + (66 * 0x20), 0x211Ba + (2 * 0xDC0) + (66 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 2",    0x2119a + (2 * 0xDC0) + (67 * 0x20), 0x211Ba + (2 * 0xDC0) + (67 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 3",    0x2119a + (2 * 0xDC0) + (68 * 0x20), 0x211Ba + (2 * 0xDC0) + (68 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 4",    0x2119a + (2 * 0xDC0) + (69 * 0x20), 0x211Ba + (2 * 0xDC0) + (69 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 1",    0x2119a + (2 * 0xDC0) + (70 * 0x20), 0x211Ba + (2 * 0xDC0) + (70 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 2",    0x2119a + (2 * 0xDC0) + (71 * 0x20), 0x211Ba + (2 * 0xDC0) + (71 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 3",    0x2119a + (2 * 0xDC0) + (72 * 0x20), 0x211Ba + (2 * 0xDC0) + (72 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 4",    0x2119a + (2 * 0xDC0) + (73 * 0x20), 0x211Ba + (2 * 0xDC0) + (73 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 1",    0x2119a + (2 * 0xDC0) + (74 * 0x20), 0x211Ba + (2 * 0xDC0) + (74 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 2",    0x2119a + (2 * 0xDC0) + (75 * 0x20), 0x211Ba + (2 * 0xDC0) + (75 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 3",    0x2119a + (2 * 0xDC0) + (76 * 0x20), 0x211Ba + (2 * 0xDC0) + (76 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 4",    0x2119a + (2 * 0xDC0) + (77 * 0x20), 0x211Ba + (2 * 0xDC0) + (77 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 1",    0x2119a + (2 * 0xDC0) + (78 * 0x20), 0x211Ba + (2 * 0xDC0) + (78 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 2",    0x2119a + (2 * 0xDC0) + (79 * 0x20), 0x211Ba + (2 * 0xDC0) + (79 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 3",    0x2119a + (2 * 0xDC0) + (80 * 0x20), 0x211Ba + (2 * 0xDC0) + (80 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 4",    0x2119a + (2 * 0xDC0) + (81 * 0x20), 0x211Ba + (2 * 0xDC0) + (81 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 1",    0x2119a + (2 * 0xDC0) + (82 * 0x20), 0x211Ba + (2 * 0xDC0) + (82 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 2",    0x2119a + (2 * 0xDC0) + (83 * 0x20), 0x211Ba + (2 * 0xDC0) + (83 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 3",    0x2119a + (2 * 0xDC0) + (84 * 0x20), 0x211Ba + (2 * 0xDC0) + (84 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 4",    0x2119a + (2 * 0xDC0) + (85 * 0x20), 0x211Ba + (2 * 0xDC0) + (85 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 1",    0x2119a + (2 * 0xDC0) + (86 * 0x20), 0x211Ba + (2 * 0xDC0) + (86 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 2",    0x2119a + (2 * 0xDC0) + (87 * 0x20), 0x211Ba + (2 * 0xDC0) + (87 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 3",    0x2119a + (2 * 0xDC0) + (88 * 0x20), 0x211Ba + (2 * 0xDC0) + (88 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 4",    0x2119a + (2 * 0xDC0) + (89 * 0x20), 0x211Ba + (2 * 0xDC0) + (89 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 1",    0x2119a + (2 * 0xDC0) + (90 * 0x20), 0x211Ba + (2 * 0xDC0) + (90 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 2",    0x2119a + (2 * 0xDC0) + (91 * 0x20), 0x211Ba + (2 * 0xDC0) + (91 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 3",    0x2119a + (2 * 0xDC0) + (92 * 0x20), 0x211Ba + (2 * 0xDC0) + (92 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 4",    0x2119a + (2 * 0xDC0) + (93 * 0x20), 0x211Ba + (2 * 0xDC0) + (93 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 1",    0x2119a + (2 * 0xDC0) + (94 * 0x20), 0x211Ba + (2 * 0xDC0) + (94 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 2",    0x2119a + (2 * 0xDC0) + (95 * 0x20), 0x211Ba + (2 * 0xDC0) + (95 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 3",    0x2119a + (2 * 0xDC0) + (96 * 0x20), 0x211Ba + (2 * 0xDC0) + (96 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 4",    0x2119a + (2 * 0xDC0) + (97 * 0x20), 0x211Ba + (2 * 0xDC0) + (97 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 1",    0x2119a + (2 * 0xDC0) + (98 * 0x20), 0x211Ba + (2 * 0xDC0) + (98 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 2",    0x2119a + (2 * 0xDC0) + (99 * 0x20), 0x211Ba + (2 * 0xDC0) + (99 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 3",    0x2119a + (2 * 0xDC0) + (100 * 0x20), 0x211Ba + (2 * 0xDC0) + (100 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 4",    0x2119a + (2 * 0xDC0) + (101 * 0x20), 0x211Ba + (2 * 0xDC0) + (101 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 1",    0x2119a + (2 * 0xDC0) + (102 * 0x20), 0x211Ba + (2 * 0xDC0) + (102 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 2",    0x2119a + (2 * 0xDC0) + (103 * 0x20), 0x211Ba + (2 * 0xDC0) + (103 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 3",    0x2119a + (2 * 0xDC0) + (104 * 0x20), 0x211Ba + (2 * 0xDC0) + (104 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 4",    0x2119a + (2 * 0xDC0) + (105 * 0x20), 0x211Ba + (2 * 0xDC0) + (105 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 1",              0x2119a + (2 * 0xDC0) + (106 * 0x20), 0x211Ba + (2 * 0xDC0) + (106 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 2",              0x2119a + (2 * 0xDC0) + (107 * 0x20), 0x211Ba + (2 * 0xDC0) + (107 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 3",              0x2119a + (2 * 0xDC0) + (108 * 0x20), 0x211Ba + (2 * 0xDC0) + (108 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 4",              0x2119a + (2 * 0xDC0) + (109 * 0x20), 0x211Ba + (2 * 0xDC0) + (109 * 0x20), indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV2_A_Felicia_PALETTES_SPECIAL[] =
{
    { L"Felicia LP Poisoned",        0x2119a + (3 * 0xDC0) + (0 * 0x20), 0x211Ba + (3 * 0xDC0) + (0 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Poisoned",        0x2119a + (3 * 0xDC0) + (1 * 0x20), 0x211Ba + (3 * 0xDC0) + (1 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Poisoned",        0x2119a + (3 * 0xDC0) + (2 * 0x20), 0x211Ba + (3 * 0xDC0) + (2 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Poisoned",        0x2119a + (3 * 0xDC0) + (3 * 0x20), 0x211Ba + (3 * 0xDC0) + (3 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Poisoned",        0x2119a + (3 * 0xDC0) + (4 * 0x20), 0x211Ba + (3 * 0xDC0) + (4 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Poisoned",        0x2119a + (3 * 0xDC0) + (5 * 0x20), 0x211Ba + (3 * 0xDC0) + (5 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Poisoned",        0x2119a + (3 * 0xDC0) + (6 * 0x20), 0x211Ba + (3 * 0xDC0) + (6 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Poisoned",        0x2119a + (3 * 0xDC0) + (7 * 0x20), 0x211Ba + (3 * 0xDC0) + (7 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Poisoned",        0x2119a + (3 * 0xDC0) + (8 * 0x20), 0x211Ba + (3 * 0xDC0) + (8 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Poisoned",        0x2119a + (3 * 0xDC0) + (9 * 0x20), 0x211Ba + (3 * 0xDC0) + (9 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Zapped",          0x2119a + (3 * 0xDC0) + (10 * 0x20), 0x211Ba + (3 * 0xDC0) + (10 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia MP Zapped",          0x2119a + (3 * 0xDC0) + (11 * 0x20), 0x211Ba + (3 * 0xDC0) + (11 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia HP Zapped",          0x2119a + (3 * 0xDC0) + (12 * 0x20), 0x211Ba + (3 * 0xDC0) + (12 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia LK Zapped",          0x2119a + (3 * 0xDC0) + (13 * 0x20), 0x211Ba + (3 * 0xDC0) + (13 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia MK Zapped",          0x2119a + (3 * 0xDC0) + (14 * 0x20), 0x211Ba + (3 * 0xDC0) + (14 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia HK Zapped",          0x2119a + (3 * 0xDC0) + (15 * 0x20), 0x211Ba + (3 * 0xDC0) + (15 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia PP Zapped",          0x2119a + (3 * 0xDC0) + (16 * 0x20), 0x211Ba + (3 * 0xDC0) + (16 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia KK Zapped",          0x2119a + (3 * 0xDC0) + (17 * 0x20), 0x211Ba + (3 * 0xDC0) + (17 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia AP Zapped",          0x2119a + (3 * 0xDC0) + (18 * 0x20), 0x211Ba + (3 * 0xDC0) + (18 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia AK Zapped",          0x2119a + (3 * 0xDC0) + (19 * 0x20), 0x211Ba + (3 * 0xDC0) + (19 * 0x20), indexCPS2_Felicia, 0x0a },
    { L"Felicia LP Burned",          0x2119a + (3 * 0xDC0) + (20 * 0x20), 0x211Ba + (3 * 0xDC0) + (20 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Burned",          0x2119a + (3 * 0xDC0) + (21 * 0x20), 0x211Ba + (3 * 0xDC0) + (21 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Burned",          0x2119a + (3 * 0xDC0) + (22 * 0x20), 0x211Ba + (3 * 0xDC0) + (22 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Burned",          0x2119a + (3 * 0xDC0) + (23 * 0x20), 0x211Ba + (3 * 0xDC0) + (23 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Burned",          0x2119a + (3 * 0xDC0) + (24 * 0x20), 0x211Ba + (3 * 0xDC0) + (24 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Burned",          0x2119a + (3 * 0xDC0) + (25 * 0x20), 0x211Ba + (3 * 0xDC0) + (25 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Burned",          0x2119a + (3 * 0xDC0) + (26 * 0x20), 0x211Ba + (3 * 0xDC0) + (26 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Burned",          0x2119a + (3 * 0xDC0) + (27 * 0x20), 0x211Ba + (3 * 0xDC0) + (27 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Burned",          0x2119a + (3 * 0xDC0) + (28 * 0x20), 0x211Ba + (3 * 0xDC0) + (28 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Burned",          0x2119a + (3 * 0xDC0) + (29 * 0x20), 0x211Ba + (3 * 0xDC0) + (29 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (30 * 0x20), 0x211Ba + (3 * 0xDC0) + (30 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia MP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (31 * 0x20), 0x211Ba + (3 * 0xDC0) + (31 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia HP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (32 * 0x20), 0x211Ba + (3 * 0xDC0) + (32 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia LK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (33 * 0x20), 0x211Ba + (3 * 0xDC0) + (33 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia MK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (34 * 0x20), 0x211Ba + (3 * 0xDC0) + (34 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia HK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (35 * 0x20), 0x211Ba + (3 * 0xDC0) + (35 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia PP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (36 * 0x20), 0x211Ba + (3 * 0xDC0) + (36 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia KK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (37 * 0x20), 0x211Ba + (3 * 0xDC0) + (37 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia AP Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (38 * 0x20), 0x211Ba + (3 * 0xDC0) + (38 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia AK Pharaoh's Curse", 0x2119a + (3 * 0xDC0) + (39 * 0x20), 0x211Ba + (3 * 0xDC0) + (39 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia ES 1",               0x2119a + (3 * 0xDC0) + (40 * 0x20), 0x211Ba + (3 * 0xDC0) + (40 * 0x20), indexCPS2_Felicia },
    { L"Felicia ES 2",               0x2119a + (3 * 0xDC0) + (41 * 0x20), 0x211Ba + (3 * 0xDC0) + (41 * 0x20), indexCPS2_Felicia },
    { L"Felicia ES 3",               0x2119a + (3 * 0xDC0) + (42 * 0x20), 0x211Ba + (3 * 0xDC0) + (42 * 0x20), indexCPS2_Felicia },
    { L"Felicia ES 4",               0x2119a + (3 * 0xDC0) + (43 * 0x20), 0x211Ba + (3 * 0xDC0) + (43 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 1",               0x2119a + (3 * 0xDC0) + (44 * 0x20), 0x211Ba + (3 * 0xDC0) + (44 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 2",               0x2119a + (3 * 0xDC0) + (45 * 0x20), 0x211Ba + (3 * 0xDC0) + (45 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 3",               0x2119a + (3 * 0xDC0) + (46 * 0x20), 0x211Ba + (3 * 0xDC0) + (46 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 4",               0x2119a + (3 * 0xDC0) + (47 * 0x20), 0x211Ba + (3 * 0xDC0) + (47 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 5",               0x2119a + (3 * 0xDC0) + (48 * 0x20), 0x211Ba + (3 * 0xDC0) + (48 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 6",               0x2119a + (3 * 0xDC0) + (49 * 0x20), 0x211Ba + (3 * 0xDC0) + (49 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 7",               0x2119a + (3 * 0xDC0) + (50 * 0x20), 0x211Ba + (3 * 0xDC0) + (50 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 8",               0x2119a + (3 * 0xDC0) + (51 * 0x20), 0x211Ba + (3 * 0xDC0) + (51 * 0x20), indexCPS2_Felicia },
    { L"Felicia Prova di Servo",     0x2119a + (3 * 0xDC0) + (52 * 0x20), 0x211Ba + (3 * 0xDC0) + (52 * 0x20), indexCPS2_Felicia },
    { L"Felicia Finale Rosso",       0x2119a + (3 * 0xDC0) + (53 * 0x20), 0x211Ba + (3 * 0xDC0) + (53 * 0x20), indexCPS2_Felicia },
    { L"Felicia Stone",              0x2119a + (3 * 0xDC0) + (54 * 0x20), 0x211Ba + (3 * 0xDC0) + (54 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (55 * 0x20), 0x211Ba + (3 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (56 * 0x20), 0x211Ba + (3 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (57 * 0x20), 0x211Ba + (3 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia LK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (58 * 0x20), 0x211Ba + (3 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (59 * 0x20), 0x211Ba + (3 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (60 * 0x20), 0x211Ba + (3 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia PP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (61 * 0x20), 0x211Ba + (3 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia KK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (62 * 0x20), 0x211Ba + (3 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AP Midnight Bliss",  0x2119a + (3 * 0xDC0) + (63 * 0x20), 0x211Ba + (3 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AK Midnight Bliss",  0x2119a + (3 * 0xDC0) + (64 * 0x20), 0x211Ba + (3 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia Q-Bee's QJ Honey",   0x2119a + (3 * 0xDC0) + (65 * 0x20), 0x211Ba + (3 * 0xDC0) + (65 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 1",    0x2119a + (3 * 0xDC0) + (66 * 0x20), 0x211Ba + (3 * 0xDC0) + (66 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 2",    0x2119a + (3 * 0xDC0) + (67 * 0x20), 0x211Ba + (3 * 0xDC0) + (67 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 3",    0x2119a + (3 * 0xDC0) + (68 * 0x20), 0x211Ba + (3 * 0xDC0) + (68 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 4",    0x2119a + (3 * 0xDC0) + (69 * 0x20), 0x211Ba + (3 * 0xDC0) + (69 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 1",    0x2119a + (3 * 0xDC0) + (70 * 0x20), 0x211Ba + (3 * 0xDC0) + (70 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 2",    0x2119a + (3 * 0xDC0) + (71 * 0x20), 0x211Ba + (3 * 0xDC0) + (71 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 3",    0x2119a + (3 * 0xDC0) + (72 * 0x20), 0x211Ba + (3 * 0xDC0) + (72 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 4",    0x2119a + (3 * 0xDC0) + (73 * 0x20), 0x211Ba + (3 * 0xDC0) + (73 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 1",    0x2119a + (3 * 0xDC0) + (74 * 0x20), 0x211Ba + (3 * 0xDC0) + (74 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 2",    0x2119a + (3 * 0xDC0) + (75 * 0x20), 0x211Ba + (3 * 0xDC0) + (75 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 3",    0x2119a + (3 * 0xDC0) + (76 * 0x20), 0x211Ba + (3 * 0xDC0) + (76 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 4",    0x2119a + (3 * 0xDC0) + (77 * 0x20), 0x211Ba + (3 * 0xDC0) + (77 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 1",    0x2119a + (3 * 0xDC0) + (78 * 0x20), 0x211Ba + (3 * 0xDC0) + (78 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 2",    0x2119a + (3 * 0xDC0) + (79 * 0x20), 0x211Ba + (3 * 0xDC0) + (79 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 3",    0x2119a + (3 * 0xDC0) + (80 * 0x20), 0x211Ba + (3 * 0xDC0) + (80 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 4",    0x2119a + (3 * 0xDC0) + (81 * 0x20), 0x211Ba + (3 * 0xDC0) + (81 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 1",    0x2119a + (3 * 0xDC0) + (82 * 0x20), 0x211Ba + (3 * 0xDC0) + (82 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 2",    0x2119a + (3 * 0xDC0) + (83 * 0x20), 0x211Ba + (3 * 0xDC0) + (83 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 3",    0x2119a + (3 * 0xDC0) + (84 * 0x20), 0x211Ba + (3 * 0xDC0) + (84 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 4",    0x2119a + (3 * 0xDC0) + (85 * 0x20), 0x211Ba + (3 * 0xDC0) + (85 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 1",    0x2119a + (3 * 0xDC0) + (86 * 0x20), 0x211Ba + (3 * 0xDC0) + (86 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 2",    0x2119a + (3 * 0xDC0) + (87 * 0x20), 0x211Ba + (3 * 0xDC0) + (87 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 3",    0x2119a + (3 * 0xDC0) + (88 * 0x20), 0x211Ba + (3 * 0xDC0) + (88 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 4",    0x2119a + (3 * 0xDC0) + (89 * 0x20), 0x211Ba + (3 * 0xDC0) + (89 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 1",    0x2119a + (3 * 0xDC0) + (90 * 0x20), 0x211Ba + (3 * 0xDC0) + (90 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 2",    0x2119a + (3 * 0xDC0) + (91 * 0x20), 0x211Ba + (3 * 0xDC0) + (91 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 3",    0x2119a + (3 * 0xDC0) + (92 * 0x20), 0x211Ba + (3 * 0xDC0) + (92 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 4",    0x2119a + (3 * 0xDC0) + (93 * 0x20), 0x211Ba + (3 * 0xDC0) + (93 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 1",    0x2119a + (3 * 0xDC0) + (94 * 0x20), 0x211Ba + (3 * 0xDC0) + (94 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 2",    0x2119a + (3 * 0xDC0) + (95 * 0x20), 0x211Ba + (3 * 0xDC0) + (95 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 3",    0x2119a + (3 * 0xDC0) + (96 * 0x20), 0x211Ba + (3 * 0xDC0) + (96 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 4",    0x2119a + (3 * 0xDC0) + (97 * 0x20), 0x211Ba + (3 * 0xDC0) + (97 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 1",    0x2119a + (3 * 0xDC0) + (98 * 0x20), 0x211Ba + (3 * 0xDC0) + (98 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 2",    0x2119a + (3 * 0xDC0) + (99 * 0x20), 0x211Ba + (3 * 0xDC0) + (99 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 3",    0x2119a + (3 * 0xDC0) + (100 * 0x20), 0x211Ba + (3 * 0xDC0) + (100 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 4",    0x2119a + (3 * 0xDC0) + (101 * 0x20), 0x211Ba + (3 * 0xDC0) + (101 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 1",    0x2119a + (3 * 0xDC0) + (102 * 0x20), 0x211Ba + (3 * 0xDC0) + (102 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 2",    0x2119a + (3 * 0xDC0) + (103 * 0x20), 0x211Ba + (3 * 0xDC0) + (103 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 3",    0x2119a + (3 * 0xDC0) + (104 * 0x20), 0x211Ba + (3 * 0xDC0) + (104 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 4",    0x2119a + (3 * 0xDC0) + (105 * 0x20), 0x211Ba + (3 * 0xDC0) + (105 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 1",              0x2119a + (3 * 0xDC0) + (106 * 0x20), 0x211Ba + (3 * 0xDC0) + (106 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 2",              0x2119a + (3 * 0xDC0) + (107 * 0x20), 0x211Ba + (3 * 0xDC0) + (107 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 3",              0x2119a + (3 * 0xDC0) + (108 * 0x20), 0x211Ba + (3 * 0xDC0) + (108 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 4",              0x2119a + (3 * 0xDC0) + (109 * 0x20), 0x211Ba + (3 * 0xDC0) + (109 * 0x20), indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV2_A_Bishamon_PALETTES_SPECIAL[] =
{
    { L"Bishamon LP Poisoned",        0x2119a + (4 * 0xDC0) + (0 * 0x20), 0x211Ba + (4 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Poisoned",        0x2119a + (4 * 0xDC0) + (1 * 0x20), 0x211Ba + (4 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Poisoned",        0x2119a + (4 * 0xDC0) + (2 * 0x20), 0x211Ba + (4 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Poisoned",        0x2119a + (4 * 0xDC0) + (3 * 0x20), 0x211Ba + (4 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Poisoned",        0x2119a + (4 * 0xDC0) + (4 * 0x20), 0x211Ba + (4 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Poisoned",        0x2119a + (4 * 0xDC0) + (5 * 0x20), 0x211Ba + (4 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Poisoned",        0x2119a + (4 * 0xDC0) + (6 * 0x20), 0x211Ba + (4 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Poisoned",        0x2119a + (4 * 0xDC0) + (7 * 0x20), 0x211Ba + (4 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Poisoned",        0x2119a + (4 * 0xDC0) + (8 * 0x20), 0x211Ba + (4 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Poisoned",        0x2119a + (4 * 0xDC0) + (9 * 0x20), 0x211Ba + (4 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Zapped",          0x2119a + (4 * 0xDC0) + (10 * 0x20), 0x211Ba + (4 * 0xDC0) + (10 * 0x20) },
    { L"Bishamon MP Zapped",          0x2119a + (4 * 0xDC0) + (11 * 0x20), 0x211Ba + (4 * 0xDC0) + (11 * 0x20) },
    { L"Bishamon HP Zapped",          0x2119a + (4 * 0xDC0) + (12 * 0x20), 0x211Ba + (4 * 0xDC0) + (12 * 0x20) },
    { L"Bishamon LK Zapped",          0x2119a + (4 * 0xDC0) + (13 * 0x20), 0x211Ba + (4 * 0xDC0) + (13 * 0x20) },
    { L"Bishamon MK Zapped",          0x2119a + (4 * 0xDC0) + (14 * 0x20), 0x211Ba + (4 * 0xDC0) + (14 * 0x20) },
    { L"Bishamon HK Zapped",          0x2119a + (4 * 0xDC0) + (15 * 0x20), 0x211Ba + (4 * 0xDC0) + (15 * 0x20) },
    { L"Bishamon PP Zapped",          0x2119a + (4 * 0xDC0) + (16 * 0x20), 0x211Ba + (4 * 0xDC0) + (16 * 0x20) },
    { L"Bishamon KK Zapped",          0x2119a + (4 * 0xDC0) + (17 * 0x20), 0x211Ba + (4 * 0xDC0) + (17 * 0x20) },
    { L"Bishamon AP Zapped",          0x2119a + (4 * 0xDC0) + (18 * 0x20), 0x211Ba + (4 * 0xDC0) + (18 * 0x20) },
    { L"Bishamon AK Zapped",          0x2119a + (4 * 0xDC0) + (19 * 0x20), 0x211Ba + (4 * 0xDC0) + (19 * 0x20) },
    { L"Bishamon LP Burned",          0x2119a + (4 * 0xDC0) + (20 * 0x20), 0x211Ba + (4 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Burned",          0x2119a + (4 * 0xDC0) + (21 * 0x20), 0x211Ba + (4 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Burned",          0x2119a + (4 * 0xDC0) + (22 * 0x20), 0x211Ba + (4 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Burned",          0x2119a + (4 * 0xDC0) + (23 * 0x20), 0x211Ba + (4 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Burned",          0x2119a + (4 * 0xDC0) + (24 * 0x20), 0x211Ba + (4 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Burned",          0x2119a + (4 * 0xDC0) + (25 * 0x20), 0x211Ba + (4 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Burned",          0x2119a + (4 * 0xDC0) + (26 * 0x20), 0x211Ba + (4 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Burned",          0x2119a + (4 * 0xDC0) + (27 * 0x20), 0x211Ba + (4 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Burned",          0x2119a + (4 * 0xDC0) + (28 * 0x20), 0x211Ba + (4 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Burned",          0x2119a + (4 * 0xDC0) + (29 * 0x20), 0x211Ba + (4 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (30 * 0x20), 0x211Ba + (4 * 0xDC0) + (30 * 0x20) },
    { L"Bishamon MP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (31 * 0x20), 0x211Ba + (4 * 0xDC0) + (31 * 0x20) },
    { L"Bishamon HP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (32 * 0x20), 0x211Ba + (4 * 0xDC0) + (32 * 0x20) },
    { L"Bishamon LK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (33 * 0x20), 0x211Ba + (4 * 0xDC0) + (33 * 0x20) },
    { L"Bishamon MK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (34 * 0x20), 0x211Ba + (4 * 0xDC0) + (34 * 0x20) },
    { L"Bishamon HK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (35 * 0x20), 0x211Ba + (4 * 0xDC0) + (35 * 0x20) },
    { L"Bishamon PP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (36 * 0x20), 0x211Ba + (4 * 0xDC0) + (36 * 0x20) },
    { L"Bishamon KK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (37 * 0x20), 0x211Ba + (4 * 0xDC0) + (37 * 0x20) },
    { L"Bishamon AP Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (38 * 0x20), 0x211Ba + (4 * 0xDC0) + (38 * 0x20) },
    { L"Bishamon AK Pharaoh's Curse", 0x2119a + (4 * 0xDC0) + (39 * 0x20), 0x211Ba + (4 * 0xDC0) + (39 * 0x20) },
    { L"Bishamon ES 1",               0x2119a + (4 * 0xDC0) + (40 * 0x20), 0x211Ba + (4 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 2",               0x2119a + (4 * 0xDC0) + (41 * 0x20), 0x211Ba + (4 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 3",               0x2119a + (4 * 0xDC0) + (42 * 0x20), 0x211Ba + (4 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 4",               0x2119a + (4 * 0xDC0) + (43 * 0x20), 0x211Ba + (4 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 1",               0x2119a + (4 * 0xDC0) + (44 * 0x20), 0x211Ba + (4 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 2",               0x2119a + (4 * 0xDC0) + (45 * 0x20), 0x211Ba + (4 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 3",               0x2119a + (4 * 0xDC0) + (46 * 0x20), 0x211Ba + (4 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 4",               0x2119a + (4 * 0xDC0) + (47 * 0x20), 0x211Ba + (4 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 5",               0x2119a + (4 * 0xDC0) + (48 * 0x20), 0x211Ba + (4 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 6",               0x2119a + (4 * 0xDC0) + (49 * 0x20), 0x211Ba + (4 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 7",               0x2119a + (4 * 0xDC0) + (50 * 0x20), 0x211Ba + (4 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 8",               0x2119a + (4 * 0xDC0) + (51 * 0x20), 0x211Ba + (4 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon Prova di Servo",     0x2119a + (4 * 0xDC0) + (52 * 0x20), 0x211Ba + (4 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon Finale Rosso",       0x2119a + (4 * 0xDC0) + (53 * 0x20), 0x211Ba + (4 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon Stone",              0x2119a + (4 * 0xDC0) + (54 * 0x20), 0x211Ba + (4 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (55 * 0x20), 0x211Ba + (4 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (56 * 0x20), 0x211Ba + (4 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (57 * 0x20), 0x211Ba + (4 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (58 * 0x20), 0x211Ba + (4 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (59 * 0x20), 0x211Ba + (4 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (60 * 0x20), 0x211Ba + (4 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (61 * 0x20), 0x211Ba + (4 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (62 * 0x20), 0x211Ba + (4 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Midnight Bliss",  0x2119a + (4 * 0xDC0) + (63 * 0x20), 0x211Ba + (4 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Midnight Bliss",  0x2119a + (4 * 0xDC0) + (64 * 0x20), 0x211Ba + (4 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Q-Bee's QJ Honey",   0x2119a + (4 * 0xDC0) + (65 * 0x20), 0x211Ba + (4 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 1",    0x2119a + (4 * 0xDC0) + (66 * 0x20), 0x211Ba + (4 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 2",    0x2119a + (4 * 0xDC0) + (67 * 0x20), 0x211Ba + (4 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 3",    0x2119a + (4 * 0xDC0) + (68 * 0x20), 0x211Ba + (4 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 4",    0x2119a + (4 * 0xDC0) + (69 * 0x20), 0x211Ba + (4 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 1",    0x2119a + (4 * 0xDC0) + (70 * 0x20), 0x211Ba + (4 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 2",    0x2119a + (4 * 0xDC0) + (71 * 0x20), 0x211Ba + (4 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 3",    0x2119a + (4 * 0xDC0) + (72 * 0x20), 0x211Ba + (4 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 4",    0x2119a + (4 * 0xDC0) + (73 * 0x20), 0x211Ba + (4 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 1",    0x2119a + (4 * 0xDC0) + (74 * 0x20), 0x211Ba + (4 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 2",    0x2119a + (4 * 0xDC0) + (75 * 0x20), 0x211Ba + (4 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 3",    0x2119a + (4 * 0xDC0) + (76 * 0x20), 0x211Ba + (4 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 4",    0x2119a + (4 * 0xDC0) + (77 * 0x20), 0x211Ba + (4 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 1",    0x2119a + (4 * 0xDC0) + (78 * 0x20), 0x211Ba + (4 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 2",    0x2119a + (4 * 0xDC0) + (79 * 0x20), 0x211Ba + (4 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 3",    0x2119a + (4 * 0xDC0) + (80 * 0x20), 0x211Ba + (4 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 4",    0x2119a + (4 * 0xDC0) + (81 * 0x20), 0x211Ba + (4 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 1",    0x2119a + (4 * 0xDC0) + (82 * 0x20), 0x211Ba + (4 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 2",    0x2119a + (4 * 0xDC0) + (83 * 0x20), 0x211Ba + (4 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 3",    0x2119a + (4 * 0xDC0) + (84 * 0x20), 0x211Ba + (4 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 4",    0x2119a + (4 * 0xDC0) + (85 * 0x20), 0x211Ba + (4 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 1",    0x2119a + (4 * 0xDC0) + (86 * 0x20), 0x211Ba + (4 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 2",    0x2119a + (4 * 0xDC0) + (87 * 0x20), 0x211Ba + (4 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 3",    0x2119a + (4 * 0xDC0) + (88 * 0x20), 0x211Ba + (4 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 4",    0x2119a + (4 * 0xDC0) + (89 * 0x20), 0x211Ba + (4 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 1",    0x2119a + (4 * 0xDC0) + (90 * 0x20), 0x211Ba + (4 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 2",    0x2119a + (4 * 0xDC0) + (91 * 0x20), 0x211Ba + (4 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 3",    0x2119a + (4 * 0xDC0) + (92 * 0x20), 0x211Ba + (4 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 4",    0x2119a + (4 * 0xDC0) + (93 * 0x20), 0x211Ba + (4 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 1",    0x2119a + (4 * 0xDC0) + (94 * 0x20), 0x211Ba + (4 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 2",    0x2119a + (4 * 0xDC0) + (95 * 0x20), 0x211Ba + (4 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 3",    0x2119a + (4 * 0xDC0) + (96 * 0x20), 0x211Ba + (4 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 4",    0x2119a + (4 * 0xDC0) + (97 * 0x20), 0x211Ba + (4 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 1",    0x2119a + (4 * 0xDC0) + (98 * 0x20), 0x211Ba + (4 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 2",    0x2119a + (4 * 0xDC0) + (99 * 0x20), 0x211Ba + (4 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 3",    0x2119a + (4 * 0xDC0) + (100 * 0x20), 0x211Ba + (4 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 4",    0x2119a + (4 * 0xDC0) + (101 * 0x20), 0x211Ba + (4 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 1",    0x2119a + (4 * 0xDC0) + (102 * 0x20), 0x211Ba + (4 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 2",    0x2119a + (4 * 0xDC0) + (103 * 0x20), 0x211Ba + (4 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 3",    0x2119a + (4 * 0xDC0) + (104 * 0x20), 0x211Ba + (4 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 4",    0x2119a + (4 * 0xDC0) + (105 * 0x20), 0x211Ba + (4 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 1",              0x2119a + (4 * 0xDC0) + (106 * 0x20), 0x211Ba + (4 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 2",              0x2119a + (4 * 0xDC0) + (107 * 0x20), 0x211Ba + (4 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 3",              0x2119a + (4 * 0xDC0) + (108 * 0x20), 0x211Ba + (4 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 4",              0x2119a + (4 * 0xDC0) + (109 * 0x20), 0x211Ba + (4 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV2_A_Aulbath_PALETTES_SPECIAL[] =
{
    { L"Aulbath LP Poisoned",        0x2119a + (5 * 0xDC0) + (0 * 0x20), 0x211Ba + (5 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Poisoned",        0x2119a + (5 * 0xDC0) + (1 * 0x20), 0x211Ba + (5 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Poisoned",        0x2119a + (5 * 0xDC0) + (2 * 0x20), 0x211Ba + (5 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Poisoned",        0x2119a + (5 * 0xDC0) + (3 * 0x20), 0x211Ba + (5 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Poisoned",        0x2119a + (5 * 0xDC0) + (4 * 0x20), 0x211Ba + (5 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Poisoned",        0x2119a + (5 * 0xDC0) + (5 * 0x20), 0x211Ba + (5 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Poisoned",        0x2119a + (5 * 0xDC0) + (6 * 0x20), 0x211Ba + (5 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Poisoned",        0x2119a + (5 * 0xDC0) + (7 * 0x20), 0x211Ba + (5 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Poisoned",        0x2119a + (5 * 0xDC0) + (8 * 0x20), 0x211Ba + (5 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Poisoned",        0x2119a + (5 * 0xDC0) + (9 * 0x20), 0x211Ba + (5 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Zapped",          0x2119a + (5 * 0xDC0) + (10 * 0x20), 0x211Ba + (5 * 0xDC0) + (10 * 0x20) },
    { L"Aulbath MP Zapped",          0x2119a + (5 * 0xDC0) + (11 * 0x20), 0x211Ba + (5 * 0xDC0) + (11 * 0x20) },
    { L"Aulbath HP Zapped",          0x2119a + (5 * 0xDC0) + (12 * 0x20), 0x211Ba + (5 * 0xDC0) + (12 * 0x20) },
    { L"Aulbath LK Zapped",          0x2119a + (5 * 0xDC0) + (13 * 0x20), 0x211Ba + (5 * 0xDC0) + (13 * 0x20) },
    { L"Aulbath MK Zapped",          0x2119a + (5 * 0xDC0) + (14 * 0x20), 0x211Ba + (5 * 0xDC0) + (14 * 0x20) },
    { L"Aulbath HK Zapped",          0x2119a + (5 * 0xDC0) + (15 * 0x20), 0x211Ba + (5 * 0xDC0) + (15 * 0x20) },
    { L"Aulbath PP Zapped",          0x2119a + (5 * 0xDC0) + (16 * 0x20), 0x211Ba + (5 * 0xDC0) + (16 * 0x20) },
    { L"Aulbath KK Zapped",          0x2119a + (5 * 0xDC0) + (17 * 0x20), 0x211Ba + (5 * 0xDC0) + (17 * 0x20) },
    { L"Aulbath AP Zapped",          0x2119a + (5 * 0xDC0) + (18 * 0x20), 0x211Ba + (5 * 0xDC0) + (18 * 0x20) },
    { L"Aulbath AK Zapped",          0x2119a + (5 * 0xDC0) + (19 * 0x20), 0x211Ba + (5 * 0xDC0) + (19 * 0x20) },
    { L"Aulbath LP Burned",          0x2119a + (5 * 0xDC0) + (20 * 0x20), 0x211Ba + (5 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Burned",          0x2119a + (5 * 0xDC0) + (21 * 0x20), 0x211Ba + (5 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Burned",          0x2119a + (5 * 0xDC0) + (22 * 0x20), 0x211Ba + (5 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Burned",          0x2119a + (5 * 0xDC0) + (23 * 0x20), 0x211Ba + (5 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Burned",          0x2119a + (5 * 0xDC0) + (24 * 0x20), 0x211Ba + (5 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Burned",          0x2119a + (5 * 0xDC0) + (25 * 0x20), 0x211Ba + (5 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Burned",          0x2119a + (5 * 0xDC0) + (26 * 0x20), 0x211Ba + (5 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Burned",          0x2119a + (5 * 0xDC0) + (27 * 0x20), 0x211Ba + (5 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Burned",          0x2119a + (5 * 0xDC0) + (28 * 0x20), 0x211Ba + (5 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Burned",          0x2119a + (5 * 0xDC0) + (29 * 0x20), 0x211Ba + (5 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (30 * 0x20), 0x211Ba + (5 * 0xDC0) + (30 * 0x20) },
    { L"Aulbath MP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (31 * 0x20), 0x211Ba + (5 * 0xDC0) + (31 * 0x20) },
    { L"Aulbath HP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (32 * 0x20), 0x211Ba + (5 * 0xDC0) + (32 * 0x20) },
    { L"Aulbath LK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (33 * 0x20), 0x211Ba + (5 * 0xDC0) + (33 * 0x20) },
    { L"Aulbath MK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (34 * 0x20), 0x211Ba + (5 * 0xDC0) + (34 * 0x20) },
    { L"Aulbath HK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (35 * 0x20), 0x211Ba + (5 * 0xDC0) + (35 * 0x20) },
    { L"Aulbath PP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (36 * 0x20), 0x211Ba + (5 * 0xDC0) + (36 * 0x20) },
    { L"Aulbath KK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (37 * 0x20), 0x211Ba + (5 * 0xDC0) + (37 * 0x20) },
    { L"Aulbath AP Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (38 * 0x20), 0x211Ba + (5 * 0xDC0) + (38 * 0x20) },
    { L"Aulbath AK Pharaoh's Curse", 0x2119a + (5 * 0xDC0) + (39 * 0x20), 0x211Ba + (5 * 0xDC0) + (39 * 0x20) },
    { L"Aulbath ES 1",               0x2119a + (5 * 0xDC0) + (40 * 0x20), 0x211Ba + (5 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 2",               0x2119a + (5 * 0xDC0) + (41 * 0x20), 0x211Ba + (5 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 3",               0x2119a + (5 * 0xDC0) + (42 * 0x20), 0x211Ba + (5 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 4",               0x2119a + (5 * 0xDC0) + (43 * 0x20), 0x211Ba + (5 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 1",               0x2119a + (5 * 0xDC0) + (44 * 0x20), 0x211Ba + (5 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 2",               0x2119a + (5 * 0xDC0) + (45 * 0x20), 0x211Ba + (5 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 3",               0x2119a + (5 * 0xDC0) + (46 * 0x20), 0x211Ba + (5 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 4",               0x2119a + (5 * 0xDC0) + (47 * 0x20), 0x211Ba + (5 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 5",               0x2119a + (5 * 0xDC0) + (48 * 0x20), 0x211Ba + (5 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 6",               0x2119a + (5 * 0xDC0) + (49 * 0x20), 0x211Ba + (5 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 7",               0x2119a + (5 * 0xDC0) + (50 * 0x20), 0x211Ba + (5 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 8",               0x2119a + (5 * 0xDC0) + (51 * 0x20), 0x211Ba + (5 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath Prova di Servo",     0x2119a + (5 * 0xDC0) + (52 * 0x20), 0x211Ba + (5 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath Finale Rosso",       0x2119a + (5 * 0xDC0) + (53 * 0x20), 0x211Ba + (5 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath Stone",              0x2119a + (5 * 0xDC0) + (54 * 0x20), 0x211Ba + (5 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (55 * 0x20), 0x211Ba + (5 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (56 * 0x20), 0x211Ba + (5 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (57 * 0x20), 0x211Ba + (5 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (58 * 0x20), 0x211Ba + (5 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (59 * 0x20), 0x211Ba + (5 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (60 * 0x20), 0x211Ba + (5 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (61 * 0x20), 0x211Ba + (5 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (62 * 0x20), 0x211Ba + (5 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Midnight Bliss",  0x2119a + (5 * 0xDC0) + (63 * 0x20), 0x211Ba + (5 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Midnight Bliss",  0x2119a + (5 * 0xDC0) + (64 * 0x20), 0x211Ba + (5 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Q-Bee's QJ Honey",   0x2119a + (5 * 0xDC0) + (65 * 0x20), 0x211Ba + (5 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 1",    0x2119a + (5 * 0xDC0) + (66 * 0x20), 0x211Ba + (5 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 2",    0x2119a + (5 * 0xDC0) + (67 * 0x20), 0x211Ba + (5 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 3",    0x2119a + (5 * 0xDC0) + (68 * 0x20), 0x211Ba + (5 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 4",    0x2119a + (5 * 0xDC0) + (69 * 0x20), 0x211Ba + (5 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 1",    0x2119a + (5 * 0xDC0) + (70 * 0x20), 0x211Ba + (5 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 2",    0x2119a + (5 * 0xDC0) + (71 * 0x20), 0x211Ba + (5 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 3",    0x2119a + (5 * 0xDC0) + (72 * 0x20), 0x211Ba + (5 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 4",    0x2119a + (5 * 0xDC0) + (73 * 0x20), 0x211Ba + (5 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 1",    0x2119a + (5 * 0xDC0) + (74 * 0x20), 0x211Ba + (5 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 2",    0x2119a + (5 * 0xDC0) + (75 * 0x20), 0x211Ba + (5 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 3",    0x2119a + (5 * 0xDC0) + (76 * 0x20), 0x211Ba + (5 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 4",    0x2119a + (5 * 0xDC0) + (77 * 0x20), 0x211Ba + (5 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 1",    0x2119a + (5 * 0xDC0) + (78 * 0x20), 0x211Ba + (5 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 2",    0x2119a + (5 * 0xDC0) + (79 * 0x20), 0x211Ba + (5 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 3",    0x2119a + (5 * 0xDC0) + (80 * 0x20), 0x211Ba + (5 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 4",    0x2119a + (5 * 0xDC0) + (81 * 0x20), 0x211Ba + (5 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 1",    0x2119a + (5 * 0xDC0) + (82 * 0x20), 0x211Ba + (5 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 2",    0x2119a + (5 * 0xDC0) + (83 * 0x20), 0x211Ba + (5 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 3",    0x2119a + (5 * 0xDC0) + (84 * 0x20), 0x211Ba + (5 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 4",    0x2119a + (5 * 0xDC0) + (85 * 0x20), 0x211Ba + (5 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 1",    0x2119a + (5 * 0xDC0) + (86 * 0x20), 0x211Ba + (5 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 2",    0x2119a + (5 * 0xDC0) + (87 * 0x20), 0x211Ba + (5 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 3",    0x2119a + (5 * 0xDC0) + (88 * 0x20), 0x211Ba + (5 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 4",    0x2119a + (5 * 0xDC0) + (89 * 0x20), 0x211Ba + (5 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 1",    0x2119a + (5 * 0xDC0) + (90 * 0x20), 0x211Ba + (5 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 2",    0x2119a + (5 * 0xDC0) + (91 * 0x20), 0x211Ba + (5 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 3",    0x2119a + (5 * 0xDC0) + (92 * 0x20), 0x211Ba + (5 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 4",    0x2119a + (5 * 0xDC0) + (93 * 0x20), 0x211Ba + (5 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 1",    0x2119a + (5 * 0xDC0) + (94 * 0x20), 0x211Ba + (5 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 2",    0x2119a + (5 * 0xDC0) + (95 * 0x20), 0x211Ba + (5 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 3",    0x2119a + (5 * 0xDC0) + (96 * 0x20), 0x211Ba + (5 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 4",    0x2119a + (5 * 0xDC0) + (97 * 0x20), 0x211Ba + (5 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 1",    0x2119a + (5 * 0xDC0) + (98 * 0x20), 0x211Ba + (5 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 2",    0x2119a + (5 * 0xDC0) + (99 * 0x20), 0x211Ba + (5 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 3",    0x2119a + (5 * 0xDC0) + (100 * 0x20), 0x211Ba + (5 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 4",    0x2119a + (5 * 0xDC0) + (101 * 0x20), 0x211Ba + (5 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 1",    0x2119a + (5 * 0xDC0) + (102 * 0x20), 0x211Ba + (5 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 2",    0x2119a + (5 * 0xDC0) + (103 * 0x20), 0x211Ba + (5 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 3",    0x2119a + (5 * 0xDC0) + (104 * 0x20), 0x211Ba + (5 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 4",    0x2119a + (5 * 0xDC0) + (105 * 0x20), 0x211Ba + (5 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 1",              0x2119a + (5 * 0xDC0) + (106 * 0x20), 0x211Ba + (5 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 2",              0x2119a + (5 * 0xDC0) + (107 * 0x20), 0x211Ba + (5 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 3",              0x2119a + (5 * 0xDC0) + (108 * 0x20), 0x211Ba + (5 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 4",              0x2119a + (5 * 0xDC0) + (109 * 0x20), 0x211Ba + (5 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV2_A_Sasquatch_PALETTES_SPECIAL[] =
{
    { L"Sasquatch LP Poisoned",        0x2119a + (6 * 0xDC0) + (0 * 0x20), 0x211Ba + (6 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Poisoned",        0x2119a + (6 * 0xDC0) + (1 * 0x20), 0x211Ba + (6 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Poisoned",        0x2119a + (6 * 0xDC0) + (2 * 0x20), 0x211Ba + (6 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Poisoned",        0x2119a + (6 * 0xDC0) + (3 * 0x20), 0x211Ba + (6 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Poisoned",        0x2119a + (6 * 0xDC0) + (4 * 0x20), 0x211Ba + (6 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Poisoned",        0x2119a + (6 * 0xDC0) + (5 * 0x20), 0x211Ba + (6 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Poisoned",        0x2119a + (6 * 0xDC0) + (6 * 0x20), 0x211Ba + (6 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Poisoned",        0x2119a + (6 * 0xDC0) + (7 * 0x20), 0x211Ba + (6 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Poisoned",        0x2119a + (6 * 0xDC0) + (8 * 0x20), 0x211Ba + (6 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Poisoned",        0x2119a + (6 * 0xDC0) + (9 * 0x20), 0x211Ba + (6 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Zapped",          0x2119a + (6 * 0xDC0) + (10 * 0x20), 0x211Ba + (6 * 0xDC0) + (10 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch MP Zapped",          0x2119a + (6 * 0xDC0) + (11 * 0x20), 0x211Ba + (6 * 0xDC0) + (11 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch HP Zapped",          0x2119a + (6 * 0xDC0) + (12 * 0x20), 0x211Ba + (6 * 0xDC0) + (12 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch LK Zapped",          0x2119a + (6 * 0xDC0) + (13 * 0x20), 0x211Ba + (6 * 0xDC0) + (13 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch MK Zapped",          0x2119a + (6 * 0xDC0) + (14 * 0x20), 0x211Ba + (6 * 0xDC0) + (14 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch HK Zapped",          0x2119a + (6 * 0xDC0) + (15 * 0x20), 0x211Ba + (6 * 0xDC0) + (15 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch PP Zapped",          0x2119a + (6 * 0xDC0) + (16 * 0x20), 0x211Ba + (6 * 0xDC0) + (16 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch KK Zapped",          0x2119a + (6 * 0xDC0) + (17 * 0x20), 0x211Ba + (6 * 0xDC0) + (17 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch AP Zapped",          0x2119a + (6 * 0xDC0) + (18 * 0x20), 0x211Ba + (6 * 0xDC0) + (18 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch AK Zapped",          0x2119a + (6 * 0xDC0) + (19 * 0x20), 0x211Ba + (6 * 0xDC0) + (19 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0a },
    { L"Sasquatch LP Burned",          0x2119a + (6 * 0xDC0) + (20 * 0x20), 0x211Ba + (6 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Burned",          0x2119a + (6 * 0xDC0) + (21 * 0x20), 0x211Ba + (6 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Burned",          0x2119a + (6 * 0xDC0) + (22 * 0x20), 0x211Ba + (6 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Burned",          0x2119a + (6 * 0xDC0) + (23 * 0x20), 0x211Ba + (6 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Burned",          0x2119a + (6 * 0xDC0) + (24 * 0x20), 0x211Ba + (6 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Burned",          0x2119a + (6 * 0xDC0) + (25 * 0x20), 0x211Ba + (6 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Burned",          0x2119a + (6 * 0xDC0) + (26 * 0x20), 0x211Ba + (6 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Burned",          0x2119a + (6 * 0xDC0) + (27 * 0x20), 0x211Ba + (6 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Burned",          0x2119a + (6 * 0xDC0) + (28 * 0x20), 0x211Ba + (6 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Burned",          0x2119a + (6 * 0xDC0) + (29 * 0x20), 0x211Ba + (6 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (30 * 0x20), 0x211Ba + (6 * 0xDC0) + (30 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (31 * 0x20), 0x211Ba + (6 * 0xDC0) + (31 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (32 * 0x20), 0x211Ba + (6 * 0xDC0) + (32 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (33 * 0x20), 0x211Ba + (6 * 0xDC0) + (33 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (34 * 0x20), 0x211Ba + (6 * 0xDC0) + (34 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (35 * 0x20), 0x211Ba + (6 * 0xDC0) + (35 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch PP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (36 * 0x20), 0x211Ba + (6 * 0xDC0) + (36 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch KK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (37 * 0x20), 0x211Ba + (6 * 0xDC0) + (37 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AP Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (38 * 0x20), 0x211Ba + (6 * 0xDC0) + (38 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AK Pharaoh's Curse", 0x2119a + (6 * 0xDC0) + (39 * 0x20), 0x211Ba + (6 * 0xDC0) + (39 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch ES 1",               0x2119a + (6 * 0xDC0) + (40 * 0x20), 0x211Ba + (6 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 2",               0x2119a + (6 * 0xDC0) + (41 * 0x20), 0x211Ba + (6 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 3",               0x2119a + (6 * 0xDC0) + (42 * 0x20), 0x211Ba + (6 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 4",               0x2119a + (6 * 0xDC0) + (43 * 0x20), 0x211Ba + (6 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 1",               0x2119a + (6 * 0xDC0) + (44 * 0x20), 0x211Ba + (6 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 2",               0x2119a + (6 * 0xDC0) + (45 * 0x20), 0x211Ba + (6 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 3",               0x2119a + (6 * 0xDC0) + (46 * 0x20), 0x211Ba + (6 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 4",               0x2119a + (6 * 0xDC0) + (47 * 0x20), 0x211Ba + (6 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 5",               0x2119a + (6 * 0xDC0) + (48 * 0x20), 0x211Ba + (6 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 6",               0x2119a + (6 * 0xDC0) + (49 * 0x20), 0x211Ba + (6 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 7",               0x2119a + (6 * 0xDC0) + (50 * 0x20), 0x211Ba + (6 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 8",               0x2119a + (6 * 0xDC0) + (51 * 0x20), 0x211Ba + (6 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Prova di Servo",     0x2119a + (6 * 0xDC0) + (52 * 0x20), 0x211Ba + (6 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Finale Rosso",       0x2119a + (6 * 0xDC0) + (53 * 0x20), 0x211Ba + (6 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Stone",              0x2119a + (6 * 0xDC0) + (54 * 0x20), 0x211Ba + (6 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (55 * 0x20), 0x211Ba + (6 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (56 * 0x20), 0x211Ba + (6 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (57 * 0x20), 0x211Ba + (6 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (58 * 0x20), 0x211Ba + (6 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (59 * 0x20), 0x211Ba + (6 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (60 * 0x20), 0x211Ba + (6 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (61 * 0x20), 0x211Ba + (6 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (62 * 0x20), 0x211Ba + (6 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Midnight Bliss",  0x2119a + (6 * 0xDC0) + (63 * 0x20), 0x211Ba + (6 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Midnight Bliss",  0x2119a + (6 * 0xDC0) + (64 * 0x20), 0x211Ba + (6 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Q-Bee's QJ Honey",   0x2119a + (6 * 0xDC0) + (65 * 0x20), 0x211Ba + (6 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 1",    0x2119a + (6 * 0xDC0) + (66 * 0x20), 0x211Ba + (6 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 2",    0x2119a + (6 * 0xDC0) + (67 * 0x20), 0x211Ba + (6 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 3",    0x2119a + (6 * 0xDC0) + (68 * 0x20), 0x211Ba + (6 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 4",    0x2119a + (6 * 0xDC0) + (69 * 0x20), 0x211Ba + (6 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 1",    0x2119a + (6 * 0xDC0) + (70 * 0x20), 0x211Ba + (6 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 2",    0x2119a + (6 * 0xDC0) + (71 * 0x20), 0x211Ba + (6 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 3",    0x2119a + (6 * 0xDC0) + (72 * 0x20), 0x211Ba + (6 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 4",    0x2119a + (6 * 0xDC0) + (73 * 0x20), 0x211Ba + (6 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 1",    0x2119a + (6 * 0xDC0) + (74 * 0x20), 0x211Ba + (6 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 2",    0x2119a + (6 * 0xDC0) + (75 * 0x20), 0x211Ba + (6 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 3",    0x2119a + (6 * 0xDC0) + (76 * 0x20), 0x211Ba + (6 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 4",    0x2119a + (6 * 0xDC0) + (77 * 0x20), 0x211Ba + (6 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 1",    0x2119a + (6 * 0xDC0) + (78 * 0x20), 0x211Ba + (6 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 2",    0x2119a + (6 * 0xDC0) + (79 * 0x20), 0x211Ba + (6 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 3",    0x2119a + (6 * 0xDC0) + (80 * 0x20), 0x211Ba + (6 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 4",    0x2119a + (6 * 0xDC0) + (81 * 0x20), 0x211Ba + (6 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 1",    0x2119a + (6 * 0xDC0) + (82 * 0x20), 0x211Ba + (6 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 2",    0x2119a + (6 * 0xDC0) + (83 * 0x20), 0x211Ba + (6 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 3",    0x2119a + (6 * 0xDC0) + (84 * 0x20), 0x211Ba + (6 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 4",    0x2119a + (6 * 0xDC0) + (85 * 0x20), 0x211Ba + (6 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 1",    0x2119a + (6 * 0xDC0) + (86 * 0x20), 0x211Ba + (6 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 2",    0x2119a + (6 * 0xDC0) + (87 * 0x20), 0x211Ba + (6 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 3",    0x2119a + (6 * 0xDC0) + (88 * 0x20), 0x211Ba + (6 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 4",    0x2119a + (6 * 0xDC0) + (89 * 0x20), 0x211Ba + (6 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 1",    0x2119a + (6 * 0xDC0) + (90 * 0x20), 0x211Ba + (6 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 2",    0x2119a + (6 * 0xDC0) + (91 * 0x20), 0x211Ba + (6 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 3",    0x2119a + (6 * 0xDC0) + (92 * 0x20), 0x211Ba + (6 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 4",    0x2119a + (6 * 0xDC0) + (93 * 0x20), 0x211Ba + (6 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 1",    0x2119a + (6 * 0xDC0) + (94 * 0x20), 0x211Ba + (6 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 2",    0x2119a + (6 * 0xDC0) + (95 * 0x20), 0x211Ba + (6 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 3",    0x2119a + (6 * 0xDC0) + (96 * 0x20), 0x211Ba + (6 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 4",    0x2119a + (6 * 0xDC0) + (97 * 0x20), 0x211Ba + (6 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 1",    0x2119a + (6 * 0xDC0) + (98 * 0x20), 0x211Ba + (6 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 2",    0x2119a + (6 * 0xDC0) + (99 * 0x20), 0x211Ba + (6 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 3",    0x2119a + (6 * 0xDC0) + (100 * 0x20), 0x211Ba + (6 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 4",    0x2119a + (6 * 0xDC0) + (101 * 0x20), 0x211Ba + (6 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 1",    0x2119a + (6 * 0xDC0) + (102 * 0x20), 0x211Ba + (6 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 2",    0x2119a + (6 * 0xDC0) + (103 * 0x20), 0x211Ba + (6 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 3",    0x2119a + (6 * 0xDC0) + (104 * 0x20), 0x211Ba + (6 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 4",    0x2119a + (6 * 0xDC0) + (105 * 0x20), 0x211Ba + (6 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 1",              0x2119a + (6 * 0xDC0) + (106 * 0x20), 0x211Ba + (6 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 2",              0x2119a + (6 * 0xDC0) + (107 * 0x20), 0x211Ba + (6 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 3",              0x2119a + (6 * 0xDC0) + (108 * 0x20), 0x211Ba + (6 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 4",              0x2119a + (6 * 0xDC0) + (109 * 0x20), 0x211Ba + (6 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV2_A_QBee_PALETTES_SPECIAL[] =
{
    { L"Q-Bee LP Poisoned",        0x2119a + (8 * 0xDC0) + (0 * 0x20), 0x211Ba + (8 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Poisoned",        0x2119a + (8 * 0xDC0) + (1 * 0x20), 0x211Ba + (8 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Poisoned",        0x2119a + (8 * 0xDC0) + (2 * 0x20), 0x211Ba + (8 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Poisoned",        0x2119a + (8 * 0xDC0) + (3 * 0x20), 0x211Ba + (8 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Poisoned",        0x2119a + (8 * 0xDC0) + (4 * 0x20), 0x211Ba + (8 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Poisoned",        0x2119a + (8 * 0xDC0) + (5 * 0x20), 0x211Ba + (8 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Poisoned",        0x2119a + (8 * 0xDC0) + (6 * 0x20), 0x211Ba + (8 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Poisoned",        0x2119a + (8 * 0xDC0) + (7 * 0x20), 0x211Ba + (8 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Poisoned",        0x2119a + (8 * 0xDC0) + (8 * 0x20), 0x211Ba + (8 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Poisoned",        0x2119a + (8 * 0xDC0) + (9 * 0x20), 0x211Ba + (8 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Zapped",          0x2119a + (8 * 0xDC0) + (10 * 0x20), 0x211Ba + (8 * 0xDC0) + (10 * 0x20) },
    { L"Q-Bee MP Zapped",          0x2119a + (8 * 0xDC0) + (11 * 0x20), 0x211Ba + (8 * 0xDC0) + (11 * 0x20) },
    { L"Q-Bee HP Zapped",          0x2119a + (8 * 0xDC0) + (12 * 0x20), 0x211Ba + (8 * 0xDC0) + (12 * 0x20) },
    { L"Q-Bee LK Zapped",          0x2119a + (8 * 0xDC0) + (13 * 0x20), 0x211Ba + (8 * 0xDC0) + (13 * 0x20) },
    { L"Q-Bee MK Zapped",          0x2119a + (8 * 0xDC0) + (14 * 0x20), 0x211Ba + (8 * 0xDC0) + (14 * 0x20) },
    { L"Q-Bee HK Zapped",          0x2119a + (8 * 0xDC0) + (15 * 0x20), 0x211Ba + (8 * 0xDC0) + (15 * 0x20) },
    { L"Q-Bee PP Zapped",          0x2119a + (8 * 0xDC0) + (16 * 0x20), 0x211Ba + (8 * 0xDC0) + (16 * 0x20) },
    { L"Q-Bee KK Zapped",          0x2119a + (8 * 0xDC0) + (17 * 0x20), 0x211Ba + (8 * 0xDC0) + (17 * 0x20) },
    { L"Q-Bee AP Zapped",          0x2119a + (8 * 0xDC0) + (18 * 0x20), 0x211Ba + (8 * 0xDC0) + (18 * 0x20) },
    { L"Q-Bee AK Zapped",          0x2119a + (8 * 0xDC0) + (19 * 0x20), 0x211Ba + (8 * 0xDC0) + (19 * 0x20) },
    { L"Q-Bee LP Burned",          0x2119a + (8 * 0xDC0) + (20 * 0x20), 0x211Ba + (8 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Burned",          0x2119a + (8 * 0xDC0) + (21 * 0x20), 0x211Ba + (8 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Burned",          0x2119a + (8 * 0xDC0) + (22 * 0x20), 0x211Ba + (8 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Burned",          0x2119a + (8 * 0xDC0) + (23 * 0x20), 0x211Ba + (8 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Burned",          0x2119a + (8 * 0xDC0) + (24 * 0x20), 0x211Ba + (8 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Burned",          0x2119a + (8 * 0xDC0) + (25 * 0x20), 0x211Ba + (8 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Burned",          0x2119a + (8 * 0xDC0) + (26 * 0x20), 0x211Ba + (8 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Burned",          0x2119a + (8 * 0xDC0) + (27 * 0x20), 0x211Ba + (8 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Burned",          0x2119a + (8 * 0xDC0) + (28 * 0x20), 0x211Ba + (8 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Burned",          0x2119a + (8 * 0xDC0) + (29 * 0x20), 0x211Ba + (8 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (30 * 0x20), 0x211Ba + (8 * 0xDC0) + (30 * 0x20) },
    { L"Q-Bee MP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (31 * 0x20), 0x211Ba + (8 * 0xDC0) + (31 * 0x20) },
    { L"Q-Bee HP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (32 * 0x20), 0x211Ba + (8 * 0xDC0) + (32 * 0x20) },
    { L"Q-Bee LK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (33 * 0x20), 0x211Ba + (8 * 0xDC0) + (33 * 0x20) },
    { L"Q-Bee MK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (34 * 0x20), 0x211Ba + (8 * 0xDC0) + (34 * 0x20) },
    { L"Q-Bee HK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (35 * 0x20), 0x211Ba + (8 * 0xDC0) + (35 * 0x20) },
    { L"Q-Bee PP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (36 * 0x20), 0x211Ba + (8 * 0xDC0) + (36 * 0x20) },
    { L"Q-Bee KK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (37 * 0x20), 0x211Ba + (8 * 0xDC0) + (37 * 0x20) },
    { L"Q-Bee AP Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (38 * 0x20), 0x211Ba + (8 * 0xDC0) + (38 * 0x20) },
    { L"Q-Bee AK Pharaoh's Curse", 0x2119a + (8 * 0xDC0) + (39 * 0x20), 0x211Ba + (8 * 0xDC0) + (39 * 0x20) },
    { L"Q-Bee ES 1",               0x2119a + (8 * 0xDC0) + (40 * 0x20), 0x211Ba + (8 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 2",               0x2119a + (8 * 0xDC0) + (41 * 0x20), 0x211Ba + (8 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 3",               0x2119a + (8 * 0xDC0) + (42 * 0x20), 0x211Ba + (8 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 4",               0x2119a + (8 * 0xDC0) + (43 * 0x20), 0x211Ba + (8 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 1",               0x2119a + (8 * 0xDC0) + (44 * 0x20), 0x211Ba + (8 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 2",               0x2119a + (8 * 0xDC0) + (45 * 0x20), 0x211Ba + (8 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 3",               0x2119a + (8 * 0xDC0) + (46 * 0x20), 0x211Ba + (8 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 4",               0x2119a + (8 * 0xDC0) + (47 * 0x20), 0x211Ba + (8 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 5",               0x2119a + (8 * 0xDC0) + (48 * 0x20), 0x211Ba + (8 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 6",               0x2119a + (8 * 0xDC0) + (49 * 0x20), 0x211Ba + (8 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 7",               0x2119a + (8 * 0xDC0) + (50 * 0x20), 0x211Ba + (8 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 8",               0x2119a + (8 * 0xDC0) + (51 * 0x20), 0x211Ba + (8 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee Prova di Servo",     0x2119a + (8 * 0xDC0) + (52 * 0x20), 0x211Ba + (8 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee Finale Rosso",       0x2119a + (8 * 0xDC0) + (53 * 0x20), 0x211Ba + (8 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee Stone",              0x2119a + (8 * 0xDC0) + (54 * 0x20), 0x211Ba + (8 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (55 * 0x20), 0x211Ba + (8 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (56 * 0x20), 0x211Ba + (8 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (57 * 0x20), 0x211Ba + (8 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (58 * 0x20), 0x211Ba + (8 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (59 * 0x20), 0x211Ba + (8 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (60 * 0x20), 0x211Ba + (8 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (61 * 0x20), 0x211Ba + (8 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (62 * 0x20), 0x211Ba + (8 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Midnight Bliss",  0x2119a + (8 * 0xDC0) + (63 * 0x20), 0x211Ba + (8 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Midnight Bliss",  0x2119a + (8 * 0xDC0) + (64 * 0x20), 0x211Ba + (8 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee Q-Bee's QJ Honey",   0x2119a + (8 * 0xDC0) + (65 * 0x20), 0x211Ba + (8 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 1",    0x2119a + (8 * 0xDC0) + (66 * 0x20), 0x211Ba + (8 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 2",    0x2119a + (8 * 0xDC0) + (67 * 0x20), 0x211Ba + (8 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 3",    0x2119a + (8 * 0xDC0) + (68 * 0x20), 0x211Ba + (8 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 4",    0x2119a + (8 * 0xDC0) + (69 * 0x20), 0x211Ba + (8 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 1",    0x2119a + (8 * 0xDC0) + (70 * 0x20), 0x211Ba + (8 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 2",    0x2119a + (8 * 0xDC0) + (71 * 0x20), 0x211Ba + (8 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 3",    0x2119a + (8 * 0xDC0) + (72 * 0x20), 0x211Ba + (8 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 4",    0x2119a + (8 * 0xDC0) + (73 * 0x20), 0x211Ba + (8 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 1",    0x2119a + (8 * 0xDC0) + (74 * 0x20), 0x211Ba + (8 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 2",    0x2119a + (8 * 0xDC0) + (75 * 0x20), 0x211Ba + (8 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 3",    0x2119a + (8 * 0xDC0) + (76 * 0x20), 0x211Ba + (8 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 4",    0x2119a + (8 * 0xDC0) + (77 * 0x20), 0x211Ba + (8 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 1",    0x2119a + (8 * 0xDC0) + (78 * 0x20), 0x211Ba + (8 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 2",    0x2119a + (8 * 0xDC0) + (79 * 0x20), 0x211Ba + (8 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 3",    0x2119a + (8 * 0xDC0) + (80 * 0x20), 0x211Ba + (8 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 4",    0x2119a + (8 * 0xDC0) + (81 * 0x20), 0x211Ba + (8 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 1",    0x2119a + (8 * 0xDC0) + (82 * 0x20), 0x211Ba + (8 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 2",    0x2119a + (8 * 0xDC0) + (83 * 0x20), 0x211Ba + (8 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 3",    0x2119a + (8 * 0xDC0) + (84 * 0x20), 0x211Ba + (8 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 4",    0x2119a + (8 * 0xDC0) + (85 * 0x20), 0x211Ba + (8 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 1",    0x2119a + (8 * 0xDC0) + (86 * 0x20), 0x211Ba + (8 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 2",    0x2119a + (8 * 0xDC0) + (87 * 0x20), 0x211Ba + (8 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 3",    0x2119a + (8 * 0xDC0) + (88 * 0x20), 0x211Ba + (8 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 4",    0x2119a + (8 * 0xDC0) + (89 * 0x20), 0x211Ba + (8 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 1",    0x2119a + (8 * 0xDC0) + (90 * 0x20), 0x211Ba + (8 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 2",    0x2119a + (8 * 0xDC0) + (91 * 0x20), 0x211Ba + (8 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 3",    0x2119a + (8 * 0xDC0) + (92 * 0x20), 0x211Ba + (8 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 4",    0x2119a + (8 * 0xDC0) + (93 * 0x20), 0x211Ba + (8 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 1",    0x2119a + (8 * 0xDC0) + (94 * 0x20), 0x211Ba + (8 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 2",    0x2119a + (8 * 0xDC0) + (95 * 0x20), 0x211Ba + (8 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 3",    0x2119a + (8 * 0xDC0) + (96 * 0x20), 0x211Ba + (8 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 4",    0x2119a + (8 * 0xDC0) + (97 * 0x20), 0x211Ba + (8 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 1",    0x2119a + (8 * 0xDC0) + (98 * 0x20), 0x211Ba + (8 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 2",    0x2119a + (8 * 0xDC0) + (99 * 0x20), 0x211Ba + (8 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 3",    0x2119a + (8 * 0xDC0) + (100 * 0x20), 0x211Ba + (8 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 4",    0x2119a + (8 * 0xDC0) + (101 * 0x20), 0x211Ba + (8 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 1",    0x2119a + (8 * 0xDC0) + (102 * 0x20), 0x211Ba + (8 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 2",    0x2119a + (8 * 0xDC0) + (103 * 0x20), 0x211Ba + (8 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 3",    0x2119a + (8 * 0xDC0) + (104 * 0x20), 0x211Ba + (8 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 4",    0x2119a + (8 * 0xDC0) + (105 * 0x20), 0x211Ba + (8 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 1",              0x2119a + (8 * 0xDC0) + (106 * 0x20), 0x211Ba + (8 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 2",              0x2119a + (8 * 0xDC0) + (107 * 0x20), 0x211Ba + (8 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 3",              0x2119a + (8 * 0xDC0) + (108 * 0x20), 0x211Ba + (8 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 4",              0x2119a + (8 * 0xDC0) + (109 * 0x20), 0x211Ba + (8 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV2_A_LeiLei_PALETTES_SPECIAL[] =
{
    { L"Lei-Lei LP Poisoned",        0x2119a + (9 * 0xDC0) + (0 * 0x20), 0x211Ba + (9 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Poisoned",        0x2119a + (9 * 0xDC0) + (1 * 0x20), 0x211Ba + (9 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Poisoned",        0x2119a + (9 * 0xDC0) + (2 * 0x20), 0x211Ba + (9 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Poisoned",        0x2119a + (9 * 0xDC0) + (3 * 0x20), 0x211Ba + (9 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Poisoned",        0x2119a + (9 * 0xDC0) + (4 * 0x20), 0x211Ba + (9 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Poisoned",        0x2119a + (9 * 0xDC0) + (5 * 0x20), 0x211Ba + (9 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Poisoned",        0x2119a + (9 * 0xDC0) + (6 * 0x20), 0x211Ba + (9 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Poisoned",        0x2119a + (9 * 0xDC0) + (7 * 0x20), 0x211Ba + (9 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Poisoned",        0x2119a + (9 * 0xDC0) + (8 * 0x20), 0x211Ba + (9 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Poisoned",        0x2119a + (9 * 0xDC0) + (9 * 0x20), 0x211Ba + (9 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Zapped",          0x2119a + (9 * 0xDC0) + (10 * 0x20), 0x211Ba + (9 * 0xDC0) + (10 * 0x20) },
    { L"Lei-Lei MP Zapped",          0x2119a + (9 * 0xDC0) + (11 * 0x20), 0x211Ba + (9 * 0xDC0) + (11 * 0x20) },
    { L"Lei-Lei HP Zapped",          0x2119a + (9 * 0xDC0) + (12 * 0x20), 0x211Ba + (9 * 0xDC0) + (12 * 0x20) },
    { L"Lei-Lei LK Zapped",          0x2119a + (9 * 0xDC0) + (13 * 0x20), 0x211Ba + (9 * 0xDC0) + (13 * 0x20) },
    { L"Lei-Lei MK Zapped",          0x2119a + (9 * 0xDC0) + (14 * 0x20), 0x211Ba + (9 * 0xDC0) + (14 * 0x20) },
    { L"Lei-Lei HK Zapped",          0x2119a + (9 * 0xDC0) + (15 * 0x20), 0x211Ba + (9 * 0xDC0) + (15 * 0x20) },
    { L"Lei-Lei PP Zapped",          0x2119a + (9 * 0xDC0) + (16 * 0x20), 0x211Ba + (9 * 0xDC0) + (16 * 0x20) },
    { L"Lei-Lei KK Zapped",          0x2119a + (9 * 0xDC0) + (17 * 0x20), 0x211Ba + (9 * 0xDC0) + (17 * 0x20) },
    { L"Lei-Lei AP Zapped",          0x2119a + (9 * 0xDC0) + (18 * 0x20), 0x211Ba + (9 * 0xDC0) + (18 * 0x20) },
    { L"Lei-Lei AK Zapped",          0x2119a + (9 * 0xDC0) + (19 * 0x20), 0x211Ba + (9 * 0xDC0) + (19 * 0x20) },
    { L"Lei-Lei LP Burned",          0x2119a + (9 * 0xDC0) + (20 * 0x20), 0x211Ba + (9 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Burned",          0x2119a + (9 * 0xDC0) + (21 * 0x20), 0x211Ba + (9 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Burned",          0x2119a + (9 * 0xDC0) + (22 * 0x20), 0x211Ba + (9 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Burned",          0x2119a + (9 * 0xDC0) + (23 * 0x20), 0x211Ba + (9 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Burned",          0x2119a + (9 * 0xDC0) + (24 * 0x20), 0x211Ba + (9 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Burned",          0x2119a + (9 * 0xDC0) + (25 * 0x20), 0x211Ba + (9 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Burned",          0x2119a + (9 * 0xDC0) + (26 * 0x20), 0x211Ba + (9 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Burned",          0x2119a + (9 * 0xDC0) + (27 * 0x20), 0x211Ba + (9 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Burned",          0x2119a + (9 * 0xDC0) + (28 * 0x20), 0x211Ba + (9 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Burned",          0x2119a + (9 * 0xDC0) + (29 * 0x20), 0x211Ba + (9 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (30 * 0x20), 0x211Ba + (9 * 0xDC0) + (30 * 0x20) },
    { L"Lei-Lei MP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (31 * 0x20), 0x211Ba + (9 * 0xDC0) + (31 * 0x20) },
    { L"Lei-Lei HP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (32 * 0x20), 0x211Ba + (9 * 0xDC0) + (32 * 0x20) },
    { L"Lei-Lei LK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (33 * 0x20), 0x211Ba + (9 * 0xDC0) + (33 * 0x20) },
    { L"Lei-Lei MK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (34 * 0x20), 0x211Ba + (9 * 0xDC0) + (34 * 0x20) },
    { L"Lei-Lei HK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (35 * 0x20), 0x211Ba + (9 * 0xDC0) + (35 * 0x20) },
    { L"Lei-Lei PP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (36 * 0x20), 0x211Ba + (9 * 0xDC0) + (36 * 0x20) },
    { L"Lei-Lei KK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (37 * 0x20), 0x211Ba + (9 * 0xDC0) + (37 * 0x20) },
    { L"Lei-Lei AP Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (38 * 0x20), 0x211Ba + (9 * 0xDC0) + (38 * 0x20) },
    { L"Lei-Lei AK Pharaoh's Curse", 0x2119a + (9 * 0xDC0) + (39 * 0x20), 0x211Ba + (9 * 0xDC0) + (39 * 0x20) },
    { L"Lei-Lei ES 1",               0x2119a + (9 * 0xDC0) + (40 * 0x20), 0x211Ba + (9 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 2",               0x2119a + (9 * 0xDC0) + (41 * 0x20), 0x211Ba + (9 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 3",               0x2119a + (9 * 0xDC0) + (42 * 0x20), 0x211Ba + (9 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 4",               0x2119a + (9 * 0xDC0) + (43 * 0x20), 0x211Ba + (9 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 1",               0x2119a + (9 * 0xDC0) + (44 * 0x20), 0x211Ba + (9 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 2",               0x2119a + (9 * 0xDC0) + (45 * 0x20), 0x211Ba + (9 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 3",               0x2119a + (9 * 0xDC0) + (46 * 0x20), 0x211Ba + (9 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 4",               0x2119a + (9 * 0xDC0) + (47 * 0x20), 0x211Ba + (9 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 5",               0x2119a + (9 * 0xDC0) + (48 * 0x20), 0x211Ba + (9 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 6",               0x2119a + (9 * 0xDC0) + (49 * 0x20), 0x211Ba + (9 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 7",               0x2119a + (9 * 0xDC0) + (50 * 0x20), 0x211Ba + (9 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 8",               0x2119a + (9 * 0xDC0) + (51 * 0x20), 0x211Ba + (9 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Prova di Servo",     0x2119a + (9 * 0xDC0) + (52 * 0x20), 0x211Ba + (9 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Finale Rosso",       0x2119a + (9 * 0xDC0) + (53 * 0x20), 0x211Ba + (9 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Stone",              0x2119a + (9 * 0xDC0) + (54 * 0x20), 0x211Ba + (9 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (55 * 0x20), 0x211Ba + (9 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (56 * 0x20), 0x211Ba + (9 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (57 * 0x20), 0x211Ba + (9 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (58 * 0x20), 0x211Ba + (9 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (59 * 0x20), 0x211Ba + (9 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (60 * 0x20), 0x211Ba + (9 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (61 * 0x20), 0x211Ba + (9 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (62 * 0x20), 0x211Ba + (9 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Midnight Bliss",  0x2119a + (9 * 0xDC0) + (63 * 0x20), 0x211Ba + (9 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Midnight Bliss",  0x2119a + (9 * 0xDC0) + (64 * 0x20), 0x211Ba + (9 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Q-Bee's QJ Honey",   0x2119a + (9 * 0xDC0) + (65 * 0x20), 0x211Ba + (9 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 1",    0x2119a + (9 * 0xDC0) + (66 * 0x20), 0x211Ba + (9 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 2",    0x2119a + (9 * 0xDC0) + (67 * 0x20), 0x211Ba + (9 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 3",    0x2119a + (9 * 0xDC0) + (68 * 0x20), 0x211Ba + (9 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 4",    0x2119a + (9 * 0xDC0) + (69 * 0x20), 0x211Ba + (9 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 1",    0x2119a + (9 * 0xDC0) + (70 * 0x20), 0x211Ba + (9 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 2",    0x2119a + (9 * 0xDC0) + (71 * 0x20), 0x211Ba + (9 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 3",    0x2119a + (9 * 0xDC0) + (72 * 0x20), 0x211Ba + (9 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 4",    0x2119a + (9 * 0xDC0) + (73 * 0x20), 0x211Ba + (9 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 1",    0x2119a + (9 * 0xDC0) + (74 * 0x20), 0x211Ba + (9 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 2",    0x2119a + (9 * 0xDC0) + (75 * 0x20), 0x211Ba + (9 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 3",    0x2119a + (9 * 0xDC0) + (76 * 0x20), 0x211Ba + (9 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 4",    0x2119a + (9 * 0xDC0) + (77 * 0x20), 0x211Ba + (9 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 1",    0x2119a + (9 * 0xDC0) + (78 * 0x20), 0x211Ba + (9 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 2",    0x2119a + (9 * 0xDC0) + (79 * 0x20), 0x211Ba + (9 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 3",    0x2119a + (9 * 0xDC0) + (80 * 0x20), 0x211Ba + (9 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 4",    0x2119a + (9 * 0xDC0) + (81 * 0x20), 0x211Ba + (9 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 1",    0x2119a + (9 * 0xDC0) + (82 * 0x20), 0x211Ba + (9 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 2",    0x2119a + (9 * 0xDC0) + (83 * 0x20), 0x211Ba + (9 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 3",    0x2119a + (9 * 0xDC0) + (84 * 0x20), 0x211Ba + (9 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 4",    0x2119a + (9 * 0xDC0) + (85 * 0x20), 0x211Ba + (9 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 1",    0x2119a + (9 * 0xDC0) + (86 * 0x20), 0x211Ba + (9 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 2",    0x2119a + (9 * 0xDC0) + (87 * 0x20), 0x211Ba + (9 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 3",    0x2119a + (9 * 0xDC0) + (88 * 0x20), 0x211Ba + (9 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 4",    0x2119a + (9 * 0xDC0) + (89 * 0x20), 0x211Ba + (9 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 1",    0x2119a + (9 * 0xDC0) + (90 * 0x20), 0x211Ba + (9 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 2",    0x2119a + (9 * 0xDC0) + (91 * 0x20), 0x211Ba + (9 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 3",    0x2119a + (9 * 0xDC0) + (92 * 0x20), 0x211Ba + (9 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 4",    0x2119a + (9 * 0xDC0) + (93 * 0x20), 0x211Ba + (9 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 1",    0x2119a + (9 * 0xDC0) + (94 * 0x20), 0x211Ba + (9 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 2",    0x2119a + (9 * 0xDC0) + (95 * 0x20), 0x211Ba + (9 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 3",    0x2119a + (9 * 0xDC0) + (96 * 0x20), 0x211Ba + (9 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 4",    0x2119a + (9 * 0xDC0) + (97 * 0x20), 0x211Ba + (9 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 1",    0x2119a + (9 * 0xDC0) + (98 * 0x20), 0x211Ba + (9 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 2",    0x2119a + (9 * 0xDC0) + (99 * 0x20), 0x211Ba + (9 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 3",    0x2119a + (9 * 0xDC0) + (100 * 0x20), 0x211Ba + (9 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 4",    0x2119a + (9 * 0xDC0) + (101 * 0x20), 0x211Ba + (9 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 1",    0x2119a + (9 * 0xDC0) + (102 * 0x20), 0x211Ba + (9 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 2",    0x2119a + (9 * 0xDC0) + (103 * 0x20), 0x211Ba + (9 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 3",    0x2119a + (9 * 0xDC0) + (104 * 0x20), 0x211Ba + (9 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 4",    0x2119a + (9 * 0xDC0) + (105 * 0x20), 0x211Ba + (9 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 1",              0x2119a + (9 * 0xDC0) + (106 * 0x20), 0x211Ba + (9 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 2",              0x2119a + (9 * 0xDC0) + (107 * 0x20), 0x211Ba + (9 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 3",              0x2119a + (9 * 0xDC0) + (108 * 0x20), 0x211Ba + (9 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 4",              0x2119a + (9 * 0xDC0) + (109 * 0x20), 0x211Ba + (9 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV2_A_Lilith_PALETTES_SPECIAL[] =
{
    { L"Lilith LP Poisoned",        0x2119a + (10 * 0xDC0) + (0 * 0x20), 0x211Ba + (10 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Poisoned",        0x2119a + (10 * 0xDC0) + (1 * 0x20), 0x211Ba + (10 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Poisoned",        0x2119a + (10 * 0xDC0) + (2 * 0x20), 0x211Ba + (10 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Poisoned",        0x2119a + (10 * 0xDC0) + (3 * 0x20), 0x211Ba + (10 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Poisoned",        0x2119a + (10 * 0xDC0) + (4 * 0x20), 0x211Ba + (10 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Poisoned",        0x2119a + (10 * 0xDC0) + (5 * 0x20), 0x211Ba + (10 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Poisoned",        0x2119a + (10 * 0xDC0) + (6 * 0x20), 0x211Ba + (10 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Poisoned",        0x2119a + (10 * 0xDC0) + (7 * 0x20), 0x211Ba + (10 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Poisoned",        0x2119a + (10 * 0xDC0) + (8 * 0x20), 0x211Ba + (10 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Poisoned",        0x2119a + (10 * 0xDC0) + (9 * 0x20), 0x211Ba + (10 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Zapped",          0x2119a + (10 * 0xDC0) + (10 * 0x20), 0x211Ba + (10 * 0xDC0) + (10 * 0x20) },
    { L"Lilith MP Zapped",          0x2119a + (10 * 0xDC0) + (11 * 0x20), 0x211Ba + (10 * 0xDC0) + (11 * 0x20) },
    { L"Lilith HP Zapped",          0x2119a + (10 * 0xDC0) + (12 * 0x20), 0x211Ba + (10 * 0xDC0) + (12 * 0x20) },
    { L"Lilith LK Zapped",          0x2119a + (10 * 0xDC0) + (13 * 0x20), 0x211Ba + (10 * 0xDC0) + (13 * 0x20) },
    { L"Lilith MK Zapped",          0x2119a + (10 * 0xDC0) + (14 * 0x20), 0x211Ba + (10 * 0xDC0) + (14 * 0x20) },
    { L"Lilith HK Zapped",          0x2119a + (10 * 0xDC0) + (15 * 0x20), 0x211Ba + (10 * 0xDC0) + (15 * 0x20) },
    { L"Lilith PP Zapped",          0x2119a + (10 * 0xDC0) + (16 * 0x20), 0x211Ba + (10 * 0xDC0) + (16 * 0x20) },
    { L"Lilith KK Zapped",          0x2119a + (10 * 0xDC0) + (17 * 0x20), 0x211Ba + (10 * 0xDC0) + (17 * 0x20) },
    { L"Lilith AP Zapped",          0x2119a + (10 * 0xDC0) + (18 * 0x20), 0x211Ba + (10 * 0xDC0) + (18 * 0x20) },
    { L"Lilith AK Zapped",          0x2119a + (10 * 0xDC0) + (19 * 0x20), 0x211Ba + (10 * 0xDC0) + (19 * 0x20) },
    { L"Lilith LP Burned",          0x2119a + (10 * 0xDC0) + (20 * 0x20), 0x211Ba + (10 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Burned",          0x2119a + (10 * 0xDC0) + (21 * 0x20), 0x211Ba + (10 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Burned",          0x2119a + (10 * 0xDC0) + (22 * 0x20), 0x211Ba + (10 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Burned",          0x2119a + (10 * 0xDC0) + (23 * 0x20), 0x211Ba + (10 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Burned",          0x2119a + (10 * 0xDC0) + (24 * 0x20), 0x211Ba + (10 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Burned",          0x2119a + (10 * 0xDC0) + (25 * 0x20), 0x211Ba + (10 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Burned",          0x2119a + (10 * 0xDC0) + (26 * 0x20), 0x211Ba + (10 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Burned",          0x2119a + (10 * 0xDC0) + (27 * 0x20), 0x211Ba + (10 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Burned",          0x2119a + (10 * 0xDC0) + (28 * 0x20), 0x211Ba + (10 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Burned",          0x2119a + (10 * 0xDC0) + (29 * 0x20), 0x211Ba + (10 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (30 * 0x20), 0x211Ba + (10 * 0xDC0) + (30 * 0x20) },
    { L"Lilith MP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (31 * 0x20), 0x211Ba + (10 * 0xDC0) + (31 * 0x20) },
    { L"Lilith HP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (32 * 0x20), 0x211Ba + (10 * 0xDC0) + (32 * 0x20) },
    { L"Lilith LK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (33 * 0x20), 0x211Ba + (10 * 0xDC0) + (33 * 0x20) },
    { L"Lilith MK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (34 * 0x20), 0x211Ba + (10 * 0xDC0) + (34 * 0x20) },
    { L"Lilith HK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (35 * 0x20), 0x211Ba + (10 * 0xDC0) + (35 * 0x20) },
    { L"Lilith PP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (36 * 0x20), 0x211Ba + (10 * 0xDC0) + (36 * 0x20) },
    { L"Lilith KK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (37 * 0x20), 0x211Ba + (10 * 0xDC0) + (37 * 0x20) },
    { L"Lilith AP Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (38 * 0x20), 0x211Ba + (10 * 0xDC0) + (38 * 0x20) },
    { L"Lilith AK Pharaoh's Curse", 0x2119a + (10 * 0xDC0) + (39 * 0x20), 0x211Ba + (10 * 0xDC0) + (39 * 0x20) },
    { L"Lilith ES 1",               0x2119a + (10 * 0xDC0) + (40 * 0x20), 0x211Ba + (10 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ES 2",               0x2119a + (10 * 0xDC0) + (41 * 0x20), 0x211Ba + (10 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ES 3",               0x2119a + (10 * 0xDC0) + (42 * 0x20), 0x211Ba + (10 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ES 4",               0x2119a + (10 * 0xDC0) + (43 * 0x20), 0x211Ba + (10 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 1",               0x2119a + (10 * 0xDC0) + (44 * 0x20), 0x211Ba + (10 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 2",               0x2119a + (10 * 0xDC0) + (45 * 0x20), 0x211Ba + (10 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 3",               0x2119a + (10 * 0xDC0) + (46 * 0x20), 0x211Ba + (10 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 4",               0x2119a + (10 * 0xDC0) + (47 * 0x20), 0x211Ba + (10 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 5",               0x2119a + (10 * 0xDC0) + (48 * 0x20), 0x211Ba + (10 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 6",               0x2119a + (10 * 0xDC0) + (49 * 0x20), 0x211Ba + (10 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 7",               0x2119a + (10 * 0xDC0) + (50 * 0x20), 0x211Ba + (10 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 8",               0x2119a + (10 * 0xDC0) + (51 * 0x20), 0x211Ba + (10 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith Prova di Servo",     0x2119a + (10 * 0xDC0) + (52 * 0x20), 0x211Ba + (10 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith Finale Rosso",       0x2119a + (10 * 0xDC0) + (53 * 0x20), 0x211Ba + (10 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith Stone",              0x2119a + (10 * 0xDC0) + (54 * 0x20), 0x211Ba + (10 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (55 * 0x20), 0x211Ba + (10 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (56 * 0x20), 0x211Ba + (10 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (57 * 0x20), 0x211Ba + (10 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (58 * 0x20), 0x211Ba + (10 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (59 * 0x20), 0x211Ba + (10 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (60 * 0x20), 0x211Ba + (10 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (61 * 0x20), 0x211Ba + (10 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (62 * 0x20), 0x211Ba + (10 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Midnight Bliss",  0x2119a + (10 * 0xDC0) + (63 * 0x20), 0x211Ba + (10 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Midnight Bliss",  0x2119a + (10 * 0xDC0) + (64 * 0x20), 0x211Ba + (10 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith Q-Bee's QJ Honey",   0x2119a + (10 * 0xDC0) + (65 * 0x20), 0x211Ba + (10 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 1",    0x2119a + (10 * 0xDC0) + (66 * 0x20), 0x211Ba + (10 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 2",    0x2119a + (10 * 0xDC0) + (67 * 0x20), 0x211Ba + (10 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 3",    0x2119a + (10 * 0xDC0) + (68 * 0x20), 0x211Ba + (10 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 4",    0x2119a + (10 * 0xDC0) + (69 * 0x20), 0x211Ba + (10 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 1",    0x2119a + (10 * 0xDC0) + (70 * 0x20), 0x211Ba + (10 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 2",    0x2119a + (10 * 0xDC0) + (71 * 0x20), 0x211Ba + (10 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 3",    0x2119a + (10 * 0xDC0) + (72 * 0x20), 0x211Ba + (10 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 4",    0x2119a + (10 * 0xDC0) + (73 * 0x20), 0x211Ba + (10 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 1",    0x2119a + (10 * 0xDC0) + (74 * 0x20), 0x211Ba + (10 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 2",    0x2119a + (10 * 0xDC0) + (75 * 0x20), 0x211Ba + (10 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 3",    0x2119a + (10 * 0xDC0) + (76 * 0x20), 0x211Ba + (10 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 4",    0x2119a + (10 * 0xDC0) + (77 * 0x20), 0x211Ba + (10 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 1",    0x2119a + (10 * 0xDC0) + (78 * 0x20), 0x211Ba + (10 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 2",    0x2119a + (10 * 0xDC0) + (79 * 0x20), 0x211Ba + (10 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 3",    0x2119a + (10 * 0xDC0) + (80 * 0x20), 0x211Ba + (10 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 4",    0x2119a + (10 * 0xDC0) + (81 * 0x20), 0x211Ba + (10 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 1",    0x2119a + (10 * 0xDC0) + (82 * 0x20), 0x211Ba + (10 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 2",    0x2119a + (10 * 0xDC0) + (83 * 0x20), 0x211Ba + (10 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 3",    0x2119a + (10 * 0xDC0) + (84 * 0x20), 0x211Ba + (10 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 4",    0x2119a + (10 * 0xDC0) + (85 * 0x20), 0x211Ba + (10 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 1",    0x2119a + (10 * 0xDC0) + (86 * 0x20), 0x211Ba + (10 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 2",    0x2119a + (10 * 0xDC0) + (87 * 0x20), 0x211Ba + (10 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 3",    0x2119a + (10 * 0xDC0) + (88 * 0x20), 0x211Ba + (10 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 4",    0x2119a + (10 * 0xDC0) + (89 * 0x20), 0x211Ba + (10 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 1",    0x2119a + (10 * 0xDC0) + (90 * 0x20), 0x211Ba + (10 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 2",    0x2119a + (10 * 0xDC0) + (91 * 0x20), 0x211Ba + (10 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 3",    0x2119a + (10 * 0xDC0) + (92 * 0x20), 0x211Ba + (10 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 4",    0x2119a + (10 * 0xDC0) + (93 * 0x20), 0x211Ba + (10 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 1",    0x2119a + (10 * 0xDC0) + (94 * 0x20), 0x211Ba + (10 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 2",    0x2119a + (10 * 0xDC0) + (95 * 0x20), 0x211Ba + (10 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 3",    0x2119a + (10 * 0xDC0) + (96 * 0x20), 0x211Ba + (10 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 4",    0x2119a + (10 * 0xDC0) + (97 * 0x20), 0x211Ba + (10 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 1",    0x2119a + (10 * 0xDC0) + (98 * 0x20), 0x211Ba + (10 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 2",    0x2119a + (10 * 0xDC0) + (99 * 0x20), 0x211Ba + (10 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 3",    0x2119a + (10 * 0xDC0) + (100 * 0x20), 0x211Ba + (10 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 4",    0x2119a + (10 * 0xDC0) + (101 * 0x20), 0x211Ba + (10 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 1",    0x2119a + (10 * 0xDC0) + (102 * 0x20), 0x211Ba + (10 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 2",    0x2119a + (10 * 0xDC0) + (103 * 0x20), 0x211Ba + (10 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 3",    0x2119a + (10 * 0xDC0) + (104 * 0x20), 0x211Ba + (10 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 4",    0x2119a + (10 * 0xDC0) + (105 * 0x20), 0x211Ba + (10 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 1",              0x2119a + (10 * 0xDC0) + (106 * 0x20), 0x211Ba + (10 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 2",              0x2119a + (10 * 0xDC0) + (107 * 0x20), 0x211Ba + (10 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 3",              0x2119a + (10 * 0xDC0) + (108 * 0x20), 0x211Ba + (10 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 4",              0x2119a + (10 * 0xDC0) + (109 * 0x20), 0x211Ba + (10 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV2_A_Jedah_PALETTES_SPECIAL[] =
{
    { L"Jedah LP Poisoned",        0x2119a + (11 * 0xDC0) + (0 * 0x20), 0x211Ba + (11 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Poisoned",        0x2119a + (11 * 0xDC0) + (1 * 0x20), 0x211Ba + (11 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Poisoned",        0x2119a + (11 * 0xDC0) + (2 * 0x20), 0x211Ba + (11 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Poisoned",        0x2119a + (11 * 0xDC0) + (3 * 0x20), 0x211Ba + (11 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Poisoned",        0x2119a + (11 * 0xDC0) + (4 * 0x20), 0x211Ba + (11 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Poisoned",        0x2119a + (11 * 0xDC0) + (5 * 0x20), 0x211Ba + (11 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Poisoned",        0x2119a + (11 * 0xDC0) + (6 * 0x20), 0x211Ba + (11 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Poisoned",        0x2119a + (11 * 0xDC0) + (7 * 0x20), 0x211Ba + (11 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Poisoned",        0x2119a + (11 * 0xDC0) + (8 * 0x20), 0x211Ba + (11 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Poisoned",        0x2119a + (11 * 0xDC0) + (9 * 0x20), 0x211Ba + (11 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Zapped",          0x2119a + (11 * 0xDC0) + (10 * 0x20), 0x211Ba + (11 * 0xDC0) + (10 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah MP Zapped",          0x2119a + (11 * 0xDC0) + (11 * 0x20), 0x211Ba + (11 * 0xDC0) + (11 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah HP Zapped",          0x2119a + (11 * 0xDC0) + (12 * 0x20), 0x211Ba + (11 * 0xDC0) + (12 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah LK Zapped",          0x2119a + (11 * 0xDC0) + (13 * 0x20), 0x211Ba + (11 * 0xDC0) + (13 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah MK Zapped",          0x2119a + (11 * 0xDC0) + (14 * 0x20), 0x211Ba + (11 * 0xDC0) + (14 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah HK Zapped",          0x2119a + (11 * 0xDC0) + (15 * 0x20), 0x211Ba + (11 * 0xDC0) + (15 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah PP Zapped",          0x2119a + (11 * 0xDC0) + (16 * 0x20), 0x211Ba + (11 * 0xDC0) + (16 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah KK Zapped",          0x2119a + (11 * 0xDC0) + (17 * 0x20), 0x211Ba + (11 * 0xDC0) + (17 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah AP Zapped",          0x2119a + (11 * 0xDC0) + (18 * 0x20), 0x211Ba + (11 * 0xDC0) + (18 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah AK Zapped",          0x2119a + (11 * 0xDC0) + (19 * 0x20), 0x211Ba + (11 * 0xDC0) + (19 * 0x20), indexCPS2_Vamp_Jedah, 0x0a },
    { L"Jedah LP Burned",          0x2119a + (11 * 0xDC0) + (20 * 0x20), 0x211Ba + (11 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Burned",          0x2119a + (11 * 0xDC0) + (21 * 0x20), 0x211Ba + (11 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Burned",          0x2119a + (11 * 0xDC0) + (22 * 0x20), 0x211Ba + (11 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Burned",          0x2119a + (11 * 0xDC0) + (23 * 0x20), 0x211Ba + (11 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Burned",          0x2119a + (11 * 0xDC0) + (24 * 0x20), 0x211Ba + (11 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Burned",          0x2119a + (11 * 0xDC0) + (25 * 0x20), 0x211Ba + (11 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Burned",          0x2119a + (11 * 0xDC0) + (26 * 0x20), 0x211Ba + (11 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Burned",          0x2119a + (11 * 0xDC0) + (27 * 0x20), 0x211Ba + (11 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Burned",          0x2119a + (11 * 0xDC0) + (28 * 0x20), 0x211Ba + (11 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Burned",          0x2119a + (11 * 0xDC0) + (29 * 0x20), 0x211Ba + (11 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (30 * 0x20), 0x211Ba + (11 * 0xDC0) + (30 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (31 * 0x20), 0x211Ba + (11 * 0xDC0) + (31 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (32 * 0x20), 0x211Ba + (11 * 0xDC0) + (32 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah LK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (33 * 0x20), 0x211Ba + (11 * 0xDC0) + (33 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (34 * 0x20), 0x211Ba + (11 * 0xDC0) + (34 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (35 * 0x20), 0x211Ba + (11 * 0xDC0) + (35 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah PP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (36 * 0x20), 0x211Ba + (11 * 0xDC0) + (36 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah KK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (37 * 0x20), 0x211Ba + (11 * 0xDC0) + (37 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AP Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (38 * 0x20), 0x211Ba + (11 * 0xDC0) + (38 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AK Pharaoh's Curse", 0x2119a + (11 * 0xDC0) + (39 * 0x20), 0x211Ba + (11 * 0xDC0) + (39 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah ES 1",               0x2119a + (11 * 0xDC0) + (40 * 0x20), 0x211Ba + (11 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ES 2",               0x2119a + (11 * 0xDC0) + (41 * 0x20), 0x211Ba + (11 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ES 3",               0x2119a + (11 * 0xDC0) + (42 * 0x20), 0x211Ba + (11 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ES 4",               0x2119a + (11 * 0xDC0) + (43 * 0x20), 0x211Ba + (11 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 1",               0x2119a + (11 * 0xDC0) + (44 * 0x20), 0x211Ba + (11 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 2",               0x2119a + (11 * 0xDC0) + (45 * 0x20), 0x211Ba + (11 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 3",               0x2119a + (11 * 0xDC0) + (46 * 0x20), 0x211Ba + (11 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 4",               0x2119a + (11 * 0xDC0) + (47 * 0x20), 0x211Ba + (11 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 5",               0x2119a + (11 * 0xDC0) + (48 * 0x20), 0x211Ba + (11 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 6",               0x2119a + (11 * 0xDC0) + (49 * 0x20), 0x211Ba + (11 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 7",               0x2119a + (11 * 0xDC0) + (50 * 0x20), 0x211Ba + (11 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 8",               0x2119a + (11 * 0xDC0) + (51 * 0x20), 0x211Ba + (11 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah Prova di Servo",     0x2119a + (11 * 0xDC0) + (52 * 0x20), 0x211Ba + (11 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah Finale Rosso",       0x2119a + (11 * 0xDC0) + (53 * 0x20), 0x211Ba + (11 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah Stone",              0x2119a + (11 * 0xDC0) + (54 * 0x20), 0x211Ba + (11 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (55 * 0x20), 0x211Ba + (11 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (56 * 0x20), 0x211Ba + (11 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (57 * 0x20), 0x211Ba + (11 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (58 * 0x20), 0x211Ba + (11 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (59 * 0x20), 0x211Ba + (11 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (60 * 0x20), 0x211Ba + (11 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (61 * 0x20), 0x211Ba + (11 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (62 * 0x20), 0x211Ba + (11 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Midnight Bliss",  0x2119a + (11 * 0xDC0) + (63 * 0x20), 0x211Ba + (11 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Midnight Bliss",  0x2119a + (11 * 0xDC0) + (64 * 0x20), 0x211Ba + (11 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah Q-Bee's QJ Honey",   0x2119a + (11 * 0xDC0) + (65 * 0x20), 0x211Ba + (11 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 1",    0x2119a + (11 * 0xDC0) + (66 * 0x20), 0x211Ba + (11 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 2",    0x2119a + (11 * 0xDC0) + (67 * 0x20), 0x211Ba + (11 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 3",    0x2119a + (11 * 0xDC0) + (68 * 0x20), 0x211Ba + (11 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 4",    0x2119a + (11 * 0xDC0) + (69 * 0x20), 0x211Ba + (11 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 1",    0x2119a + (11 * 0xDC0) + (70 * 0x20), 0x211Ba + (11 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 2",    0x2119a + (11 * 0xDC0) + (71 * 0x20), 0x211Ba + (11 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 3",    0x2119a + (11 * 0xDC0) + (72 * 0x20), 0x211Ba + (11 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 4",    0x2119a + (11 * 0xDC0) + (73 * 0x20), 0x211Ba + (11 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 1",    0x2119a + (11 * 0xDC0) + (74 * 0x20), 0x211Ba + (11 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 2",    0x2119a + (11 * 0xDC0) + (75 * 0x20), 0x211Ba + (11 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 3",    0x2119a + (11 * 0xDC0) + (76 * 0x20), 0x211Ba + (11 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 4",    0x2119a + (11 * 0xDC0) + (77 * 0x20), 0x211Ba + (11 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 1",    0x2119a + (11 * 0xDC0) + (78 * 0x20), 0x211Ba + (11 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 2",    0x2119a + (11 * 0xDC0) + (79 * 0x20), 0x211Ba + (11 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 3",    0x2119a + (11 * 0xDC0) + (80 * 0x20), 0x211Ba + (11 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 4",    0x2119a + (11 * 0xDC0) + (81 * 0x20), 0x211Ba + (11 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 1",    0x2119a + (11 * 0xDC0) + (82 * 0x20), 0x211Ba + (11 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 2",    0x2119a + (11 * 0xDC0) + (83 * 0x20), 0x211Ba + (11 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 3",    0x2119a + (11 * 0xDC0) + (84 * 0x20), 0x211Ba + (11 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 4",    0x2119a + (11 * 0xDC0) + (85 * 0x20), 0x211Ba + (11 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 1",    0x2119a + (11 * 0xDC0) + (86 * 0x20), 0x211Ba + (11 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 2",    0x2119a + (11 * 0xDC0) + (87 * 0x20), 0x211Ba + (11 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 3",    0x2119a + (11 * 0xDC0) + (88 * 0x20), 0x211Ba + (11 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 4",    0x2119a + (11 * 0xDC0) + (89 * 0x20), 0x211Ba + (11 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 1",    0x2119a + (11 * 0xDC0) + (90 * 0x20), 0x211Ba + (11 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 2",    0x2119a + (11 * 0xDC0) + (91 * 0x20), 0x211Ba + (11 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 3",    0x2119a + (11 * 0xDC0) + (92 * 0x20), 0x211Ba + (11 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 4",    0x2119a + (11 * 0xDC0) + (93 * 0x20), 0x211Ba + (11 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 1",    0x2119a + (11 * 0xDC0) + (94 * 0x20), 0x211Ba + (11 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 2",    0x2119a + (11 * 0xDC0) + (95 * 0x20), 0x211Ba + (11 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 3",    0x2119a + (11 * 0xDC0) + (96 * 0x20), 0x211Ba + (11 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 4",    0x2119a + (11 * 0xDC0) + (97 * 0x20), 0x211Ba + (11 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 1",    0x2119a + (11 * 0xDC0) + (98 * 0x20), 0x211Ba + (11 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 2",    0x2119a + (11 * 0xDC0) + (99 * 0x20), 0x211Ba + (11 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 3",    0x2119a + (11 * 0xDC0) + (100 * 0x20), 0x211Ba + (11 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 4",    0x2119a + (11 * 0xDC0) + (101 * 0x20), 0x211Ba + (11 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 1",    0x2119a + (11 * 0xDC0) + (102 * 0x20), 0x211Ba + (11 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 2",    0x2119a + (11 * 0xDC0) + (103 * 0x20), 0x211Ba + (11 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 3",    0x2119a + (11 * 0xDC0) + (104 * 0x20), 0x211Ba + (11 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 4",    0x2119a + (11 * 0xDC0) + (105 * 0x20), 0x211Ba + (11 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 1",              0x2119a + (11 * 0xDC0) + (106 * 0x20), 0x211Ba + (11 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 2",              0x2119a + (11 * 0xDC0) + (107 * 0x20), 0x211Ba + (11 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 3",              0x2119a + (11 * 0xDC0) + (108 * 0x20), 0x211Ba + (11 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 4",              0x2119a + (11 * 0xDC0) + (109 * 0x20), 0x211Ba + (11 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV2_A_Phobos_PALETTES_SPECIAL[] =
{
    { L"Phobos LP Poisoned",        0x2119a + (12 * 0xDC0) + (0 * 0x20), 0x211Ba + (12 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Poisoned",        0x2119a + (12 * 0xDC0) + (1 * 0x20), 0x211Ba + (12 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Poisoned",        0x2119a + (12 * 0xDC0) + (2 * 0x20), 0x211Ba + (12 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Poisoned",        0x2119a + (12 * 0xDC0) + (3 * 0x20), 0x211Ba + (12 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Poisoned",        0x2119a + (12 * 0xDC0) + (4 * 0x20), 0x211Ba + (12 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Poisoned",        0x2119a + (12 * 0xDC0) + (5 * 0x20), 0x211Ba + (12 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Poisoned",        0x2119a + (12 * 0xDC0) + (6 * 0x20), 0x211Ba + (12 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Poisoned",        0x2119a + (12 * 0xDC0) + (7 * 0x20), 0x211Ba + (12 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Poisoned",        0x2119a + (12 * 0xDC0) + (8 * 0x20), 0x211Ba + (12 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Poisoned",        0x2119a + (12 * 0xDC0) + (9 * 0x20), 0x211Ba + (12 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Zapped",          0x2119a + (12 * 0xDC0) + (10 * 0x20), 0x211Ba + (12 * 0xDC0) + (10 * 0x20) },
    { L"Phobos MP Zapped",          0x2119a + (12 * 0xDC0) + (11 * 0x20), 0x211Ba + (12 * 0xDC0) + (11 * 0x20) },
    { L"Phobos HP Zapped",          0x2119a + (12 * 0xDC0) + (12 * 0x20), 0x211Ba + (12 * 0xDC0) + (12 * 0x20) },
    { L"Phobos LK Zapped",          0x2119a + (12 * 0xDC0) + (13 * 0x20), 0x211Ba + (12 * 0xDC0) + (13 * 0x20) },
    { L"Phobos MK Zapped",          0x2119a + (12 * 0xDC0) + (14 * 0x20), 0x211Ba + (12 * 0xDC0) + (14 * 0x20) },
    { L"Phobos HK Zapped",          0x2119a + (12 * 0xDC0) + (15 * 0x20), 0x211Ba + (12 * 0xDC0) + (15 * 0x20) },
    { L"Phobos PP Zapped",          0x2119a + (12 * 0xDC0) + (16 * 0x20), 0x211Ba + (12 * 0xDC0) + (16 * 0x20) },
    { L"Phobos KK Zapped",          0x2119a + (12 * 0xDC0) + (17 * 0x20), 0x211Ba + (12 * 0xDC0) + (17 * 0x20) },
    { L"Phobos AP Zapped",          0x2119a + (12 * 0xDC0) + (18 * 0x20), 0x211Ba + (12 * 0xDC0) + (18 * 0x20) },
    { L"Phobos AK Zapped",          0x2119a + (12 * 0xDC0) + (19 * 0x20), 0x211Ba + (12 * 0xDC0) + (19 * 0x20) },
    { L"Phobos LP Burned",          0x2119a + (12 * 0xDC0) + (20 * 0x20), 0x211Ba + (12 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Burned",          0x2119a + (12 * 0xDC0) + (21 * 0x20), 0x211Ba + (12 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Burned",          0x2119a + (12 * 0xDC0) + (22 * 0x20), 0x211Ba + (12 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Burned",          0x2119a + (12 * 0xDC0) + (23 * 0x20), 0x211Ba + (12 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Burned",          0x2119a + (12 * 0xDC0) + (24 * 0x20), 0x211Ba + (12 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Burned",          0x2119a + (12 * 0xDC0) + (25 * 0x20), 0x211Ba + (12 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Burned",          0x2119a + (12 * 0xDC0) + (26 * 0x20), 0x211Ba + (12 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Burned",          0x2119a + (12 * 0xDC0) + (27 * 0x20), 0x211Ba + (12 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Burned",          0x2119a + (12 * 0xDC0) + (28 * 0x20), 0x211Ba + (12 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Burned",          0x2119a + (12 * 0xDC0) + (29 * 0x20), 0x211Ba + (12 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (30 * 0x20), 0x211Ba + (12 * 0xDC0) + (30 * 0x20) },
    { L"Phobos MP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (31 * 0x20), 0x211Ba + (12 * 0xDC0) + (31 * 0x20) },
    { L"Phobos HP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (32 * 0x20), 0x211Ba + (12 * 0xDC0) + (32 * 0x20) },
    { L"Phobos LK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (33 * 0x20), 0x211Ba + (12 * 0xDC0) + (33 * 0x20) },
    { L"Phobos MK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (34 * 0x20), 0x211Ba + (12 * 0xDC0) + (34 * 0x20) },
    { L"Phobos HK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (35 * 0x20), 0x211Ba + (12 * 0xDC0) + (35 * 0x20) },
    { L"Phobos PP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (36 * 0x20), 0x211Ba + (12 * 0xDC0) + (36 * 0x20) },
    { L"Phobos KK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (37 * 0x20), 0x211Ba + (12 * 0xDC0) + (37 * 0x20) },
    { L"Phobos AP Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (38 * 0x20), 0x211Ba + (12 * 0xDC0) + (38 * 0x20) },
    { L"Phobos AK Pharaoh's Curse", 0x2119a + (12 * 0xDC0) + (39 * 0x20), 0x211Ba + (12 * 0xDC0) + (39 * 0x20) },
    { L"Phobos ES 1",               0x2119a + (12 * 0xDC0) + (40 * 0x20), 0x211Ba + (12 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ES 2",               0x2119a + (12 * 0xDC0) + (41 * 0x20), 0x211Ba + (12 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ES 3",               0x2119a + (12 * 0xDC0) + (42 * 0x20), 0x211Ba + (12 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ES 4",               0x2119a + (12 * 0xDC0) + (43 * 0x20), 0x211Ba + (12 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 1",               0x2119a + (12 * 0xDC0) + (44 * 0x20), 0x211Ba + (12 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 2",               0x2119a + (12 * 0xDC0) + (45 * 0x20), 0x211Ba + (12 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 3",               0x2119a + (12 * 0xDC0) + (46 * 0x20), 0x211Ba + (12 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 4",               0x2119a + (12 * 0xDC0) + (47 * 0x20), 0x211Ba + (12 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 5",               0x2119a + (12 * 0xDC0) + (48 * 0x20), 0x211Ba + (12 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 6",               0x2119a + (12 * 0xDC0) + (49 * 0x20), 0x211Ba + (12 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 7",               0x2119a + (12 * 0xDC0) + (50 * 0x20), 0x211Ba + (12 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 8",               0x2119a + (12 * 0xDC0) + (51 * 0x20), 0x211Ba + (12 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos Prova di Servo",     0x2119a + (12 * 0xDC0) + (52 * 0x20), 0x211Ba + (12 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos Finale Rosso",       0x2119a + (12 * 0xDC0) + (53 * 0x20), 0x211Ba + (12 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos Stone",              0x2119a + (12 * 0xDC0) + (54 * 0x20), 0x211Ba + (12 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (55 * 0x20), 0x211Ba + (12 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos MP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (56 * 0x20), 0x211Ba + (12 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos HP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (57 * 0x20), 0x211Ba + (12 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos LK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (58 * 0x20), 0x211Ba + (12 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos MK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (59 * 0x20), 0x211Ba + (12 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos HK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (60 * 0x20), 0x211Ba + (12 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos PP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (61 * 0x20), 0x211Ba + (12 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos KK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (62 * 0x20), 0x211Ba + (12 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos AP Midnight Bliss",  0x2119a + (12 * 0xDC0) + (63 * 0x20), 0x211Ba + (12 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos AK Midnight Bliss",  0x2119a + (12 * 0xDC0) + (64 * 0x20), 0x211Ba + (12 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos Q-Bee's QJ Honey",   0x2119a + (12 * 0xDC0) + (65 * 0x20), 0x211Ba + (12 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 1",    0x2119a + (12 * 0xDC0) + (66 * 0x20), 0x211Ba + (12 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 2",    0x2119a + (12 * 0xDC0) + (67 * 0x20), 0x211Ba + (12 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 3",    0x2119a + (12 * 0xDC0) + (68 * 0x20), 0x211Ba + (12 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 4",    0x2119a + (12 * 0xDC0) + (69 * 0x20), 0x211Ba + (12 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 1",    0x2119a + (12 * 0xDC0) + (70 * 0x20), 0x211Ba + (12 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 2",    0x2119a + (12 * 0xDC0) + (71 * 0x20), 0x211Ba + (12 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 3",    0x2119a + (12 * 0xDC0) + (72 * 0x20), 0x211Ba + (12 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 4",    0x2119a + (12 * 0xDC0) + (73 * 0x20), 0x211Ba + (12 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 1",    0x2119a + (12 * 0xDC0) + (74 * 0x20), 0x211Ba + (12 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 2",    0x2119a + (12 * 0xDC0) + (75 * 0x20), 0x211Ba + (12 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 3",    0x2119a + (12 * 0xDC0) + (76 * 0x20), 0x211Ba + (12 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 4",    0x2119a + (12 * 0xDC0) + (77 * 0x20), 0x211Ba + (12 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 1",    0x2119a + (12 * 0xDC0) + (78 * 0x20), 0x211Ba + (12 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 2",    0x2119a + (12 * 0xDC0) + (79 * 0x20), 0x211Ba + (12 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 3",    0x2119a + (12 * 0xDC0) + (80 * 0x20), 0x211Ba + (12 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 4",    0x2119a + (12 * 0xDC0) + (81 * 0x20), 0x211Ba + (12 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 1",    0x2119a + (12 * 0xDC0) + (82 * 0x20), 0x211Ba + (12 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 2",    0x2119a + (12 * 0xDC0) + (83 * 0x20), 0x211Ba + (12 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 3",    0x2119a + (12 * 0xDC0) + (84 * 0x20), 0x211Ba + (12 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 4",    0x2119a + (12 * 0xDC0) + (85 * 0x20), 0x211Ba + (12 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 1",    0x2119a + (12 * 0xDC0) + (86 * 0x20), 0x211Ba + (12 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 2",    0x2119a + (12 * 0xDC0) + (87 * 0x20), 0x211Ba + (12 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 3",    0x2119a + (12 * 0xDC0) + (88 * 0x20), 0x211Ba + (12 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 4",    0x2119a + (12 * 0xDC0) + (89 * 0x20), 0x211Ba + (12 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 1",    0x2119a + (12 * 0xDC0) + (90 * 0x20), 0x211Ba + (12 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 2",    0x2119a + (12 * 0xDC0) + (91 * 0x20), 0x211Ba + (12 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 3",    0x2119a + (12 * 0xDC0) + (92 * 0x20), 0x211Ba + (12 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 4",    0x2119a + (12 * 0xDC0) + (93 * 0x20), 0x211Ba + (12 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 1",    0x2119a + (12 * 0xDC0) + (94 * 0x20), 0x211Ba + (12 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 2",    0x2119a + (12 * 0xDC0) + (95 * 0x20), 0x211Ba + (12 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 3",    0x2119a + (12 * 0xDC0) + (96 * 0x20), 0x211Ba + (12 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 4",    0x2119a + (12 * 0xDC0) + (97 * 0x20), 0x211Ba + (12 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 1",    0x2119a + (12 * 0xDC0) + (98 * 0x20), 0x211Ba + (12 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 2",    0x2119a + (12 * 0xDC0) + (99 * 0x20), 0x211Ba + (12 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 3",    0x2119a + (12 * 0xDC0) + (100 * 0x20), 0x211Ba + (12 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 4",    0x2119a + (12 * 0xDC0) + (101 * 0x20), 0x211Ba + (12 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 1",    0x2119a + (12 * 0xDC0) + (102 * 0x20), 0x211Ba + (12 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 2",    0x2119a + (12 * 0xDC0) + (103 * 0x20), 0x211Ba + (12 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 3",    0x2119a + (12 * 0xDC0) + (104 * 0x20), 0x211Ba + (12 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 4",    0x2119a + (12 * 0xDC0) + (105 * 0x20), 0x211Ba + (12 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 1",              0x2119a + (12 * 0xDC0) + (106 * 0x20), 0x211Ba + (12 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 2",              0x2119a + (12 * 0xDC0) + (107 * 0x20), 0x211Ba + (12 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 3",              0x2119a + (12 * 0xDC0) + (108 * 0x20), 0x211Ba + (12 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 4",              0x2119a + (12 * 0xDC0) + (109 * 0x20), 0x211Ba + (12 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Phobos },
};

const sGame_PaletteDataset VSAV2_A_Pyron_PALETTES_SPECIAL[] =
{
    { L"Pyron LP Poisoned",        0x2119a + (13 * 0xDC0) + (0 * 0x20), 0x211Ba + (13 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Poisoned",        0x2119a + (13 * 0xDC0) + (1 * 0x20), 0x211Ba + (13 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Poisoned",        0x2119a + (13 * 0xDC0) + (2 * 0x20), 0x211Ba + (13 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Poisoned",        0x2119a + (13 * 0xDC0) + (3 * 0x20), 0x211Ba + (13 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Poisoned",        0x2119a + (13 * 0xDC0) + (4 * 0x20), 0x211Ba + (13 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Poisoned",        0x2119a + (13 * 0xDC0) + (5 * 0x20), 0x211Ba + (13 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Poisoned",        0x2119a + (13 * 0xDC0) + (6 * 0x20), 0x211Ba + (13 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Poisoned",        0x2119a + (13 * 0xDC0) + (7 * 0x20), 0x211Ba + (13 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Poisoned",        0x2119a + (13 * 0xDC0) + (8 * 0x20), 0x211Ba + (13 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Poisoned",        0x2119a + (13 * 0xDC0) + (9 * 0x20), 0x211Ba + (13 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Zapped",          0x2119a + (13 * 0xDC0) + (10 * 0x20), 0x211Ba + (13 * 0xDC0) + (10 * 0x20) },
    { L"Pyron MP Zapped",          0x2119a + (13 * 0xDC0) + (11 * 0x20), 0x211Ba + (13 * 0xDC0) + (11 * 0x20) },
    { L"Pyron HP Zapped",          0x2119a + (13 * 0xDC0) + (12 * 0x20), 0x211Ba + (13 * 0xDC0) + (12 * 0x20) },
    { L"Pyron LK Zapped",          0x2119a + (13 * 0xDC0) + (13 * 0x20), 0x211Ba + (13 * 0xDC0) + (13 * 0x20) },
    { L"Pyron MK Zapped",          0x2119a + (13 * 0xDC0) + (14 * 0x20), 0x211Ba + (13 * 0xDC0) + (14 * 0x20) },
    { L"Pyron HK Zapped",          0x2119a + (13 * 0xDC0) + (15 * 0x20), 0x211Ba + (13 * 0xDC0) + (15 * 0x20) },
    { L"Pyron PP Zapped",          0x2119a + (13 * 0xDC0) + (16 * 0x20), 0x211Ba + (13 * 0xDC0) + (16 * 0x20) },
    { L"Pyron KK Zapped",          0x2119a + (13 * 0xDC0) + (17 * 0x20), 0x211Ba + (13 * 0xDC0) + (17 * 0x20) },
    { L"Pyron AP Zapped",          0x2119a + (13 * 0xDC0) + (18 * 0x20), 0x211Ba + (13 * 0xDC0) + (18 * 0x20) },
    { L"Pyron AK Zapped",          0x2119a + (13 * 0xDC0) + (19 * 0x20), 0x211Ba + (13 * 0xDC0) + (19 * 0x20) },
    { L"Pyron LP Burned",          0x2119a + (13 * 0xDC0) + (20 * 0x20), 0x211Ba + (13 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Burned",          0x2119a + (13 * 0xDC0) + (21 * 0x20), 0x211Ba + (13 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Burned",          0x2119a + (13 * 0xDC0) + (22 * 0x20), 0x211Ba + (13 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Burned",          0x2119a + (13 * 0xDC0) + (23 * 0x20), 0x211Ba + (13 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Burned",          0x2119a + (13 * 0xDC0) + (24 * 0x20), 0x211Ba + (13 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Burned",          0x2119a + (13 * 0xDC0) + (25 * 0x20), 0x211Ba + (13 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Burned",          0x2119a + (13 * 0xDC0) + (26 * 0x20), 0x211Ba + (13 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Burned",          0x2119a + (13 * 0xDC0) + (27 * 0x20), 0x211Ba + (13 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Burned",          0x2119a + (13 * 0xDC0) + (28 * 0x20), 0x211Ba + (13 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Burned",          0x2119a + (13 * 0xDC0) + (29 * 0x20), 0x211Ba + (13 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (30 * 0x20), 0x211Ba + (13 * 0xDC0) + (30 * 0x20) },
    { L"Pyron MP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (31 * 0x20), 0x211Ba + (13 * 0xDC0) + (31 * 0x20) },
    { L"Pyron HP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (32 * 0x20), 0x211Ba + (13 * 0xDC0) + (32 * 0x20) },
    { L"Pyron LK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (33 * 0x20), 0x211Ba + (13 * 0xDC0) + (33 * 0x20) },
    { L"Pyron MK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (34 * 0x20), 0x211Ba + (13 * 0xDC0) + (34 * 0x20) },
    { L"Pyron HK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (35 * 0x20), 0x211Ba + (13 * 0xDC0) + (35 * 0x20) },
    { L"Pyron PP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (36 * 0x20), 0x211Ba + (13 * 0xDC0) + (36 * 0x20) },
    { L"Pyron KK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (37 * 0x20), 0x211Ba + (13 * 0xDC0) + (37 * 0x20) },
    { L"Pyron AP Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (38 * 0x20), 0x211Ba + (13 * 0xDC0) + (38 * 0x20) },
    { L"Pyron AK Pharaoh's Curse", 0x2119a + (13 * 0xDC0) + (39 * 0x20), 0x211Ba + (13 * 0xDC0) + (39 * 0x20) },
    { L"Pyron ES 1",               0x2119a + (13 * 0xDC0) + (40 * 0x20), 0x211Ba + (13 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ES 2",               0x2119a + (13 * 0xDC0) + (41 * 0x20), 0x211Ba + (13 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ES 3",               0x2119a + (13 * 0xDC0) + (42 * 0x20), 0x211Ba + (13 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ES 4",               0x2119a + (13 * 0xDC0) + (43 * 0x20), 0x211Ba + (13 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 1",               0x2119a + (13 * 0xDC0) + (44 * 0x20), 0x211Ba + (13 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 2",               0x2119a + (13 * 0xDC0) + (45 * 0x20), 0x211Ba + (13 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 3",               0x2119a + (13 * 0xDC0) + (46 * 0x20), 0x211Ba + (13 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 4",               0x2119a + (13 * 0xDC0) + (47 * 0x20), 0x211Ba + (13 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 5",               0x2119a + (13 * 0xDC0) + (48 * 0x20), 0x211Ba + (13 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 6",               0x2119a + (13 * 0xDC0) + (49 * 0x20), 0x211Ba + (13 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 7",               0x2119a + (13 * 0xDC0) + (50 * 0x20), 0x211Ba + (13 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 8",               0x2119a + (13 * 0xDC0) + (51 * 0x20), 0x211Ba + (13 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron Prova di Servo",     0x2119a + (13 * 0xDC0) + (52 * 0x20), 0x211Ba + (13 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron Finale Rosso",       0x2119a + (13 * 0xDC0) + (53 * 0x20), 0x211Ba + (13 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron Stone",              0x2119a + (13 * 0xDC0) + (54 * 0x20), 0x211Ba + (13 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (55 * 0x20), 0x211Ba + (13 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron MP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (56 * 0x20), 0x211Ba + (13 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron HP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (57 * 0x20), 0x211Ba + (13 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron LK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (58 * 0x20), 0x211Ba + (13 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron MK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (59 * 0x20), 0x211Ba + (13 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron HK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (60 * 0x20), 0x211Ba + (13 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron PP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (61 * 0x20), 0x211Ba + (13 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron KK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (62 * 0x20), 0x211Ba + (13 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron AP Midnight Bliss",  0x2119a + (13 * 0xDC0) + (63 * 0x20), 0x211Ba + (13 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron AK Midnight Bliss",  0x2119a + (13 * 0xDC0) + (64 * 0x20), 0x211Ba + (13 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron Q-Bee's QJ Honey",   0x2119a + (13 * 0xDC0) + (65 * 0x20), 0x211Ba + (13 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 1",    0x2119a + (13 * 0xDC0) + (66 * 0x20), 0x211Ba + (13 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 2",    0x2119a + (13 * 0xDC0) + (67 * 0x20), 0x211Ba + (13 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 3",    0x2119a + (13 * 0xDC0) + (68 * 0x20), 0x211Ba + (13 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 4",    0x2119a + (13 * 0xDC0) + (69 * 0x20), 0x211Ba + (13 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 1",    0x2119a + (13 * 0xDC0) + (70 * 0x20), 0x211Ba + (13 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 2",    0x2119a + (13 * 0xDC0) + (71 * 0x20), 0x211Ba + (13 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 3",    0x2119a + (13 * 0xDC0) + (72 * 0x20), 0x211Ba + (13 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 4",    0x2119a + (13 * 0xDC0) + (73 * 0x20), 0x211Ba + (13 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 1",    0x2119a + (13 * 0xDC0) + (74 * 0x20), 0x211Ba + (13 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 2",    0x2119a + (13 * 0xDC0) + (75 * 0x20), 0x211Ba + (13 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 3",    0x2119a + (13 * 0xDC0) + (76 * 0x20), 0x211Ba + (13 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 4",    0x2119a + (13 * 0xDC0) + (77 * 0x20), 0x211Ba + (13 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 1",    0x2119a + (13 * 0xDC0) + (78 * 0x20), 0x211Ba + (13 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 2",    0x2119a + (13 * 0xDC0) + (79 * 0x20), 0x211Ba + (13 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 3",    0x2119a + (13 * 0xDC0) + (80 * 0x20), 0x211Ba + (13 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 4",    0x2119a + (13 * 0xDC0) + (81 * 0x20), 0x211Ba + (13 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 1",    0x2119a + (13 * 0xDC0) + (82 * 0x20), 0x211Ba + (13 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 2",    0x2119a + (13 * 0xDC0) + (83 * 0x20), 0x211Ba + (13 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 3",    0x2119a + (13 * 0xDC0) + (84 * 0x20), 0x211Ba + (13 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 4",    0x2119a + (13 * 0xDC0) + (85 * 0x20), 0x211Ba + (13 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 1",    0x2119a + (13 * 0xDC0) + (86 * 0x20), 0x211Ba + (13 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 2",    0x2119a + (13 * 0xDC0) + (87 * 0x20), 0x211Ba + (13 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 3",    0x2119a + (13 * 0xDC0) + (88 * 0x20), 0x211Ba + (13 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 4",    0x2119a + (13 * 0xDC0) + (89 * 0x20), 0x211Ba + (13 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 1",    0x2119a + (13 * 0xDC0) + (90 * 0x20), 0x211Ba + (13 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 2",    0x2119a + (13 * 0xDC0) + (91 * 0x20), 0x211Ba + (13 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 3",    0x2119a + (13 * 0xDC0) + (92 * 0x20), 0x211Ba + (13 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 4",    0x2119a + (13 * 0xDC0) + (93 * 0x20), 0x211Ba + (13 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 1",    0x2119a + (13 * 0xDC0) + (94 * 0x20), 0x211Ba + (13 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 2",    0x2119a + (13 * 0xDC0) + (95 * 0x20), 0x211Ba + (13 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 3",    0x2119a + (13 * 0xDC0) + (96 * 0x20), 0x211Ba + (13 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 4",    0x2119a + (13 * 0xDC0) + (97 * 0x20), 0x211Ba + (13 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 1",    0x2119a + (13 * 0xDC0) + (98 * 0x20), 0x211Ba + (13 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 2",    0x2119a + (13 * 0xDC0) + (99 * 0x20), 0x211Ba + (13 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 3",    0x2119a + (13 * 0xDC0) + (100 * 0x20), 0x211Ba + (13 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 4",    0x2119a + (13 * 0xDC0) + (101 * 0x20), 0x211Ba + (13 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 1",    0x2119a + (13 * 0xDC0) + (102 * 0x20), 0x211Ba + (13 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 2",    0x2119a + (13 * 0xDC0) + (103 * 0x20), 0x211Ba + (13 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 3",    0x2119a + (13 * 0xDC0) + (104 * 0x20), 0x211Ba + (13 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 4",    0x2119a + (13 * 0xDC0) + (105 * 0x20), 0x211Ba + (13 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 1",              0x2119a + (13 * 0xDC0) + (106 * 0x20), 0x211Ba + (13 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 2",              0x2119a + (13 * 0xDC0) + (107 * 0x20), 0x211Ba + (13 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 3",              0x2119a + (13 * 0xDC0) + (108 * 0x20), 0x211Ba + (13 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 4",              0x2119a + (13 * 0xDC0) + (109 * 0x20), 0x211Ba + (13 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Pyron },
};

const sGame_PaletteDataset VSAV2_A_DarkGallon_PALETTES_SPECIAL[] =
{
    { L"Dark Gallon LP Poisoned",        0x2119a + (14 * 0xDC0) + (0 * 0x20), 0x211Ba + (14 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Poisoned",        0x2119a + (14 * 0xDC0) + (1 * 0x20), 0x211Ba + (14 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Poisoned",        0x2119a + (14 * 0xDC0) + (2 * 0x20), 0x211Ba + (14 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Poisoned",        0x2119a + (14 * 0xDC0) + (3 * 0x20), 0x211Ba + (14 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Poisoned",        0x2119a + (14 * 0xDC0) + (4 * 0x20), 0x211Ba + (14 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Poisoned",        0x2119a + (14 * 0xDC0) + (5 * 0x20), 0x211Ba + (14 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Poisoned",        0x2119a + (14 * 0xDC0) + (6 * 0x20), 0x211Ba + (14 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Poisoned",        0x2119a + (14 * 0xDC0) + (7 * 0x20), 0x211Ba + (14 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Poisoned",        0x2119a + (14 * 0xDC0) + (8 * 0x20), 0x211Ba + (14 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Poisoned",        0x2119a + (14 * 0xDC0) + (9 * 0x20), 0x211Ba + (14 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Zapped",          0x2119a + (14 * 0xDC0) + (10 * 0x20), 0x211Ba + (14 * 0xDC0) + (10 * 0x20) },
    { L"Dark Gallon MP Zapped",          0x2119a + (14 * 0xDC0) + (11 * 0x20), 0x211Ba + (14 * 0xDC0) + (11 * 0x20) },
    { L"Dark Gallon HP Zapped",          0x2119a + (14 * 0xDC0) + (12 * 0x20), 0x211Ba + (14 * 0xDC0) + (12 * 0x20) },
    { L"Dark Gallon LK Zapped",          0x2119a + (14 * 0xDC0) + (13 * 0x20), 0x211Ba + (14 * 0xDC0) + (13 * 0x20) },
    { L"Dark Gallon MK Zapped",          0x2119a + (14 * 0xDC0) + (14 * 0x20), 0x211Ba + (14 * 0xDC0) + (14 * 0x20) },
    { L"Dark Gallon HK Zapped",          0x2119a + (14 * 0xDC0) + (15 * 0x20), 0x211Ba + (14 * 0xDC0) + (15 * 0x20) },
    { L"Dark Gallon PP Zapped",          0x2119a + (14 * 0xDC0) + (16 * 0x20), 0x211Ba + (14 * 0xDC0) + (16 * 0x20) },
    { L"Dark Gallon KK Zapped",          0x2119a + (14 * 0xDC0) + (17 * 0x20), 0x211Ba + (14 * 0xDC0) + (17 * 0x20) },
    { L"Dark Gallon AP Zapped",          0x2119a + (14 * 0xDC0) + (18 * 0x20), 0x211Ba + (14 * 0xDC0) + (18 * 0x20) },
    { L"Dark Gallon AK Zapped",          0x2119a + (14 * 0xDC0) + (19 * 0x20), 0x211Ba + (14 * 0xDC0) + (19 * 0x20) },
    { L"Dark Gallon LP Burned",          0x2119a + (14 * 0xDC0) + (20 * 0x20), 0x211Ba + (14 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Burned",          0x2119a + (14 * 0xDC0) + (21 * 0x20), 0x211Ba + (14 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Burned",          0x2119a + (14 * 0xDC0) + (22 * 0x20), 0x211Ba + (14 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Burned",          0x2119a + (14 * 0xDC0) + (23 * 0x20), 0x211Ba + (14 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Burned",          0x2119a + (14 * 0xDC0) + (24 * 0x20), 0x211Ba + (14 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Burned",          0x2119a + (14 * 0xDC0) + (25 * 0x20), 0x211Ba + (14 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Burned",          0x2119a + (14 * 0xDC0) + (26 * 0x20), 0x211Ba + (14 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Burned",          0x2119a + (14 * 0xDC0) + (27 * 0x20), 0x211Ba + (14 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Burned",          0x2119a + (14 * 0xDC0) + (28 * 0x20), 0x211Ba + (14 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Burned",          0x2119a + (14 * 0xDC0) + (29 * 0x20), 0x211Ba + (14 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (30 * 0x20), 0x211Ba + (14 * 0xDC0) + (30 * 0x20) },
    { L"Dark Gallon MP Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (31 * 0x20), 0x211Ba + (14 * 0xDC0) + (31 * 0x20) },
    { L"Dark Gallon HP Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (32 * 0x20), 0x211Ba + (14 * 0xDC0) + (32 * 0x20) },
    { L"Dark Gallon LK Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (33 * 0x20), 0x211Ba + (14 * 0xDC0) + (33 * 0x20) },
    { L"Dark Gallon MK Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (34 * 0x20), 0x211Ba + (14 * 0xDC0) + (34 * 0x20) },
    { L"Dark Gallon HK Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (35 * 0x20), 0x211Ba + (14 * 0xDC0) + (35 * 0x20) },
    { L"Dark Gallon PP Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (36 * 0x20), 0x211Ba + (14 * 0xDC0) + (36 * 0x20) },
    { L"Dark Gallon KK Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (37 * 0x20), 0x211Ba + (14 * 0xDC0) + (37 * 0x20) },
    { L"Dark Gallon AP Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (38 * 0x20), 0x211Ba + (14 * 0xDC0) + (38 * 0x20) },
    { L"Dark Gallon AK Pharaoh's Curse", 0x2119a + (14 * 0xDC0) + (39 * 0x20), 0x211Ba + (14 * 0xDC0) + (39 * 0x20) },
    { L"Dark Gallon ES 1",               0x2119a + (14 * 0xDC0) + (40 * 0x20), 0x211Ba + (14 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 2",               0x2119a + (14 * 0xDC0) + (41 * 0x20), 0x211Ba + (14 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 3",               0x2119a + (14 * 0xDC0) + (42 * 0x20), 0x211Ba + (14 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 4",               0x2119a + (14 * 0xDC0) + (43 * 0x20), 0x211Ba + (14 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 1",               0x2119a + (14 * 0xDC0) + (44 * 0x20), 0x211Ba + (14 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 2",               0x2119a + (14 * 0xDC0) + (45 * 0x20), 0x211Ba + (14 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 3",               0x2119a + (14 * 0xDC0) + (46 * 0x20), 0x211Ba + (14 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 4",               0x2119a + (14 * 0xDC0) + (47 * 0x20), 0x211Ba + (14 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 5",               0x2119a + (14 * 0xDC0) + (48 * 0x20), 0x211Ba + (14 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 6",               0x2119a + (14 * 0xDC0) + (49 * 0x20), 0x211Ba + (14 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 7",               0x2119a + (14 * 0xDC0) + (50 * 0x20), 0x211Ba + (14 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 8",               0x2119a + (14 * 0xDC0) + (51 * 0x20), 0x211Ba + (14 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Prova di Servo",     0x2119a + (14 * 0xDC0) + (52 * 0x20), 0x211Ba + (14 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Finale Rosso",       0x2119a + (14 * 0xDC0) + (53 * 0x20), 0x211Ba + (14 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Stone",              0x2119a + (14 * 0xDC0) + (54 * 0x20), 0x211Ba + (14 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (55 * 0x20), 0x211Ba + (14 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon MP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (56 * 0x20), 0x211Ba + (14 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon HP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (57 * 0x20), 0x211Ba + (14 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon LK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (58 * 0x20), 0x211Ba + (14 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon MK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (59 * 0x20), 0x211Ba + (14 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon HK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (60 * 0x20), 0x211Ba + (14 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon PP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (61 * 0x20), 0x211Ba + (14 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon KK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (62 * 0x20), 0x211Ba + (14 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AP Midnight Bliss",  0x2119a + (14 * 0xDC0) + (63 * 0x20), 0x211Ba + (14 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AK Midnight Bliss",  0x2119a + (14 * 0xDC0) + (64 * 0x20), 0x211Ba + (14 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon Q-Bee's QJ Honey",   0x2119a + (14 * 0xDC0) + (65 * 0x20), 0x211Ba + (14 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 1",    0x2119a + (14 * 0xDC0) + (66 * 0x20), 0x211Ba + (14 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 2",    0x2119a + (14 * 0xDC0) + (67 * 0x20), 0x211Ba + (14 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 3",    0x2119a + (14 * 0xDC0) + (68 * 0x20), 0x211Ba + (14 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 4",    0x2119a + (14 * 0xDC0) + (69 * 0x20), 0x211Ba + (14 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 1",    0x2119a + (14 * 0xDC0) + (70 * 0x20), 0x211Ba + (14 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 2",    0x2119a + (14 * 0xDC0) + (71 * 0x20), 0x211Ba + (14 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 3",    0x2119a + (14 * 0xDC0) + (72 * 0x20), 0x211Ba + (14 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 4",    0x2119a + (14 * 0xDC0) + (73 * 0x20), 0x211Ba + (14 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 1",    0x2119a + (14 * 0xDC0) + (74 * 0x20), 0x211Ba + (14 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 2",    0x2119a + (14 * 0xDC0) + (75 * 0x20), 0x211Ba + (14 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 3",    0x2119a + (14 * 0xDC0) + (76 * 0x20), 0x211Ba + (14 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 4",    0x2119a + (14 * 0xDC0) + (77 * 0x20), 0x211Ba + (14 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 1",    0x2119a + (14 * 0xDC0) + (78 * 0x20), 0x211Ba + (14 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 2",    0x2119a + (14 * 0xDC0) + (79 * 0x20), 0x211Ba + (14 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 3",    0x2119a + (14 * 0xDC0) + (80 * 0x20), 0x211Ba + (14 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 4",    0x2119a + (14 * 0xDC0) + (81 * 0x20), 0x211Ba + (14 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 1",    0x2119a + (14 * 0xDC0) + (82 * 0x20), 0x211Ba + (14 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 2",    0x2119a + (14 * 0xDC0) + (83 * 0x20), 0x211Ba + (14 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 3",    0x2119a + (14 * 0xDC0) + (84 * 0x20), 0x211Ba + (14 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 4",    0x2119a + (14 * 0xDC0) + (85 * 0x20), 0x211Ba + (14 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 1",    0x2119a + (14 * 0xDC0) + (86 * 0x20), 0x211Ba + (14 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 2",    0x2119a + (14 * 0xDC0) + (87 * 0x20), 0x211Ba + (14 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 3",    0x2119a + (14 * 0xDC0) + (88 * 0x20), 0x211Ba + (14 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 4",    0x2119a + (14 * 0xDC0) + (89 * 0x20), 0x211Ba + (14 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 1",    0x2119a + (14 * 0xDC0) + (90 * 0x20), 0x211Ba + (14 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 2",    0x2119a + (14 * 0xDC0) + (91 * 0x20), 0x211Ba + (14 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 3",    0x2119a + (14 * 0xDC0) + (92 * 0x20), 0x211Ba + (14 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 4",    0x2119a + (14 * 0xDC0) + (93 * 0x20), 0x211Ba + (14 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 1",    0x2119a + (14 * 0xDC0) + (94 * 0x20), 0x211Ba + (14 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 2",    0x2119a + (14 * 0xDC0) + (95 * 0x20), 0x211Ba + (14 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 3",    0x2119a + (14 * 0xDC0) + (96 * 0x20), 0x211Ba + (14 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 4",    0x2119a + (14 * 0xDC0) + (97 * 0x20), 0x211Ba + (14 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 1",    0x2119a + (14 * 0xDC0) + (98 * 0x20), 0x211Ba + (14 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 2",    0x2119a + (14 * 0xDC0) + (99 * 0x20), 0x211Ba + (14 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 3",    0x2119a + (14 * 0xDC0) + (100 * 0x20), 0x211Ba + (14 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 4",    0x2119a + (14 * 0xDC0) + (101 * 0x20), 0x211Ba + (14 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 1",    0x2119a + (14 * 0xDC0) + (102 * 0x20), 0x211Ba + (14 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 2",    0x2119a + (14 * 0xDC0) + (103 * 0x20), 0x211Ba + (14 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 3",    0x2119a + (14 * 0xDC0) + (104 * 0x20), 0x211Ba + (14 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 4",    0x2119a + (14 * 0xDC0) + (105 * 0x20), 0x211Ba + (14 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 1",              0x2119a + (14 * 0xDC0) + (106 * 0x20), 0x211Ba + (14 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 2",              0x2119a + (14 * 0xDC0) + (107 * 0x20), 0x211Ba + (14 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 3",              0x2119a + (14 * 0xDC0) + (108 * 0x20), 0x211Ba + (14 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 4",              0x2119a + (14 * 0xDC0) + (109 * 0x20), 0x211Ba + (14 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_DarkGallon },
};

const sGame_PaletteDataset VSAV2_A_Donovan_PALETTES_SPECIAL[] =
{
    { L"Donovan LP Poisoned",        0x2119a + (15 * 0xDC0) + (0 * 0x20), 0x211Ba + (15 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Poisoned",        0x2119a + (15 * 0xDC0) + (1 * 0x20), 0x211Ba + (15 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Poisoned",        0x2119a + (15 * 0xDC0) + (2 * 0x20), 0x211Ba + (15 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Poisoned",        0x2119a + (15 * 0xDC0) + (3 * 0x20), 0x211Ba + (15 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Poisoned",        0x2119a + (15 * 0xDC0) + (4 * 0x20), 0x211Ba + (15 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Poisoned",        0x2119a + (15 * 0xDC0) + (5 * 0x20), 0x211Ba + (15 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Poisoned",        0x2119a + (15 * 0xDC0) + (6 * 0x20), 0x211Ba + (15 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Poisoned",        0x2119a + (15 * 0xDC0) + (7 * 0x20), 0x211Ba + (15 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Poisoned",        0x2119a + (15 * 0xDC0) + (8 * 0x20), 0x211Ba + (15 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Poisoned",        0x2119a + (15 * 0xDC0) + (9 * 0x20), 0x211Ba + (15 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Zapped",          0x2119a + (15 * 0xDC0) + (10 * 0x20), 0x211Ba + (15 * 0xDC0) + (10 * 0x20) },
    { L"Donovan MP Zapped",          0x2119a + (15 * 0xDC0) + (11 * 0x20), 0x211Ba + (15 * 0xDC0) + (11 * 0x20) },
    { L"Donovan HP Zapped",          0x2119a + (15 * 0xDC0) + (12 * 0x20), 0x211Ba + (15 * 0xDC0) + (12 * 0x20) },
    { L"Donovan LK Zapped",          0x2119a + (15 * 0xDC0) + (13 * 0x20), 0x211Ba + (15 * 0xDC0) + (13 * 0x20) },
    { L"Donovan MK Zapped",          0x2119a + (15 * 0xDC0) + (14 * 0x20), 0x211Ba + (15 * 0xDC0) + (14 * 0x20) },
    { L"Donovan HK Zapped",          0x2119a + (15 * 0xDC0) + (15 * 0x20), 0x211Ba + (15 * 0xDC0) + (15 * 0x20) },
    { L"Donovan PP Zapped",          0x2119a + (15 * 0xDC0) + (16 * 0x20), 0x211Ba + (15 * 0xDC0) + (16 * 0x20) },
    { L"Donovan KK Zapped",          0x2119a + (15 * 0xDC0) + (17 * 0x20), 0x211Ba + (15 * 0xDC0) + (17 * 0x20) },
    { L"Donovan AP Zapped",          0x2119a + (15 * 0xDC0) + (18 * 0x20), 0x211Ba + (15 * 0xDC0) + (18 * 0x20) },
    { L"Donovan AK Zapped",          0x2119a + (15 * 0xDC0) + (19 * 0x20), 0x211Ba + (15 * 0xDC0) + (19 * 0x20) },
    { L"Donovan LP Burned",          0x2119a + (15 * 0xDC0) + (20 * 0x20), 0x211Ba + (15 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Burned",          0x2119a + (15 * 0xDC0) + (21 * 0x20), 0x211Ba + (15 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Burned",          0x2119a + (15 * 0xDC0) + (22 * 0x20), 0x211Ba + (15 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Burned",          0x2119a + (15 * 0xDC0) + (23 * 0x20), 0x211Ba + (15 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Burned",          0x2119a + (15 * 0xDC0) + (24 * 0x20), 0x211Ba + (15 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Burned",          0x2119a + (15 * 0xDC0) + (25 * 0x20), 0x211Ba + (15 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Burned",          0x2119a + (15 * 0xDC0) + (26 * 0x20), 0x211Ba + (15 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Burned",          0x2119a + (15 * 0xDC0) + (27 * 0x20), 0x211Ba + (15 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Burned",          0x2119a + (15 * 0xDC0) + (28 * 0x20), 0x211Ba + (15 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Burned",          0x2119a + (15 * 0xDC0) + (29 * 0x20), 0x211Ba + (15 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (30 * 0x20), 0x211Ba + (15 * 0xDC0) + (30 * 0x20) },
    { L"Donovan MP Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (31 * 0x20), 0x211Ba + (15 * 0xDC0) + (31 * 0x20) },
    { L"Donovan HP Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (32 * 0x20), 0x211Ba + (15 * 0xDC0) + (32 * 0x20) },
    { L"Donovan LK Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (33 * 0x20), 0x211Ba + (15 * 0xDC0) + (33 * 0x20) },
    { L"Donovan MK Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (34 * 0x20), 0x211Ba + (15 * 0xDC0) + (34 * 0x20) },
    { L"Donovan HK Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (35 * 0x20), 0x211Ba + (15 * 0xDC0) + (35 * 0x20) },
    { L"Donovan PP Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (36 * 0x20), 0x211Ba + (15 * 0xDC0) + (36 * 0x20) },
    { L"Donovan KK Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (37 * 0x20), 0x211Ba + (15 * 0xDC0) + (37 * 0x20) },
    { L"Donovan AP Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (38 * 0x20), 0x211Ba + (15 * 0xDC0) + (38 * 0x20) },
    { L"Donovan AK Pharaoh's Curse", 0x2119a + (15 * 0xDC0) + (39 * 0x20), 0x211Ba + (15 * 0xDC0) + (39 * 0x20) },
    { L"Donovan ES 1",               0x2119a + (15 * 0xDC0) + (40 * 0x20), 0x211Ba + (15 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ES 2",               0x2119a + (15 * 0xDC0) + (41 * 0x20), 0x211Ba + (15 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ES 3",               0x2119a + (15 * 0xDC0) + (42 * 0x20), 0x211Ba + (15 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ES 4",               0x2119a + (15 * 0xDC0) + (43 * 0x20), 0x211Ba + (15 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 1",               0x2119a + (15 * 0xDC0) + (44 * 0x20), 0x211Ba + (15 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 2",               0x2119a + (15 * 0xDC0) + (45 * 0x20), 0x211Ba + (15 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 3",               0x2119a + (15 * 0xDC0) + (46 * 0x20), 0x211Ba + (15 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 4",               0x2119a + (15 * 0xDC0) + (47 * 0x20), 0x211Ba + (15 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 5",               0x2119a + (15 * 0xDC0) + (48 * 0x20), 0x211Ba + (15 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 6",               0x2119a + (15 * 0xDC0) + (49 * 0x20), 0x211Ba + (15 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 7",               0x2119a + (15 * 0xDC0) + (50 * 0x20), 0x211Ba + (15 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 8",               0x2119a + (15 * 0xDC0) + (51 * 0x20), 0x211Ba + (15 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan Prova di Servo",     0x2119a + (15 * 0xDC0) + (52 * 0x20), 0x211Ba + (15 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan Finale Rosso",       0x2119a + (15 * 0xDC0) + (53 * 0x20), 0x211Ba + (15 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan Stone",              0x2119a + (15 * 0xDC0) + (54 * 0x20), 0x211Ba + (15 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (55 * 0x20), 0x211Ba + (15 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan MP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (56 * 0x20), 0x211Ba + (15 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan HP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (57 * 0x20), 0x211Ba + (15 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan LK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (58 * 0x20), 0x211Ba + (15 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan MK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (59 * 0x20), 0x211Ba + (15 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan HK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (60 * 0x20), 0x211Ba + (15 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan PP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (61 * 0x20), 0x211Ba + (15 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan KK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (62 * 0x20), 0x211Ba + (15 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan AP Midnight Bliss",  0x2119a + (15 * 0xDC0) + (63 * 0x20), 0x211Ba + (15 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan AK Midnight Bliss",  0x2119a + (15 * 0xDC0) + (64 * 0x20), 0x211Ba + (15 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan Q-Bee's QJ Honey",   0x2119a + (15 * 0xDC0) + (65 * 0x20), 0x211Ba + (15 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 1",    0x2119a + (15 * 0xDC0) + (66 * 0x20), 0x211Ba + (15 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 2",    0x2119a + (15 * 0xDC0) + (67 * 0x20), 0x211Ba + (15 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 3",    0x2119a + (15 * 0xDC0) + (68 * 0x20), 0x211Ba + (15 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 4",    0x2119a + (15 * 0xDC0) + (69 * 0x20), 0x211Ba + (15 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 1",    0x2119a + (15 * 0xDC0) + (70 * 0x20), 0x211Ba + (15 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 2",    0x2119a + (15 * 0xDC0) + (71 * 0x20), 0x211Ba + (15 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 3",    0x2119a + (15 * 0xDC0) + (72 * 0x20), 0x211Ba + (15 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 4",    0x2119a + (15 * 0xDC0) + (73 * 0x20), 0x211Ba + (15 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 1",    0x2119a + (15 * 0xDC0) + (74 * 0x20), 0x211Ba + (15 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 2",    0x2119a + (15 * 0xDC0) + (75 * 0x20), 0x211Ba + (15 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 3",    0x2119a + (15 * 0xDC0) + (76 * 0x20), 0x211Ba + (15 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 4",    0x2119a + (15 * 0xDC0) + (77 * 0x20), 0x211Ba + (15 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 1",    0x2119a + (15 * 0xDC0) + (78 * 0x20), 0x211Ba + (15 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 2",    0x2119a + (15 * 0xDC0) + (79 * 0x20), 0x211Ba + (15 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 3",    0x2119a + (15 * 0xDC0) + (80 * 0x20), 0x211Ba + (15 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 4",    0x2119a + (15 * 0xDC0) + (81 * 0x20), 0x211Ba + (15 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 1",    0x2119a + (15 * 0xDC0) + (82 * 0x20), 0x211Ba + (15 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 2",    0x2119a + (15 * 0xDC0) + (83 * 0x20), 0x211Ba + (15 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 3",    0x2119a + (15 * 0xDC0) + (84 * 0x20), 0x211Ba + (15 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 4",    0x2119a + (15 * 0xDC0) + (85 * 0x20), 0x211Ba + (15 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 1",    0x2119a + (15 * 0xDC0) + (86 * 0x20), 0x211Ba + (15 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 2",    0x2119a + (15 * 0xDC0) + (87 * 0x20), 0x211Ba + (15 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 3",    0x2119a + (15 * 0xDC0) + (88 * 0x20), 0x211Ba + (15 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 4",    0x2119a + (15 * 0xDC0) + (89 * 0x20), 0x211Ba + (15 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 1",    0x2119a + (15 * 0xDC0) + (90 * 0x20), 0x211Ba + (15 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 2",    0x2119a + (15 * 0xDC0) + (91 * 0x20), 0x211Ba + (15 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 3",    0x2119a + (15 * 0xDC0) + (92 * 0x20), 0x211Ba + (15 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 4",    0x2119a + (15 * 0xDC0) + (93 * 0x20), 0x211Ba + (15 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 1",    0x2119a + (15 * 0xDC0) + (94 * 0x20), 0x211Ba + (15 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 2",    0x2119a + (15 * 0xDC0) + (95 * 0x20), 0x211Ba + (15 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 3",    0x2119a + (15 * 0xDC0) + (96 * 0x20), 0x211Ba + (15 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 4",    0x2119a + (15 * 0xDC0) + (97 * 0x20), 0x211Ba + (15 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 1",    0x2119a + (15 * 0xDC0) + (98 * 0x20), 0x211Ba + (15 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 2",    0x2119a + (15 * 0xDC0) + (99 * 0x20), 0x211Ba + (15 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 3",    0x2119a + (15 * 0xDC0) + (100 * 0x20), 0x211Ba + (15 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 4",    0x2119a + (15 * 0xDC0) + (101 * 0x20), 0x211Ba + (15 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 1",    0x2119a + (15 * 0xDC0) + (102 * 0x20), 0x211Ba + (15 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 2",    0x2119a + (15 * 0xDC0) + (103 * 0x20), 0x211Ba + (15 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 3",    0x2119a + (15 * 0xDC0) + (104 * 0x20), 0x211Ba + (15 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 4",    0x2119a + (15 * 0xDC0) + (105 * 0x20), 0x211Ba + (15 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 1",              0x2119a + (15 * 0xDC0) + (106 * 0x20), 0x211Ba + (15 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 2",              0x2119a + (15 * 0xDC0) + (107 * 0x20), 0x211Ba + (15 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 3",              0x2119a + (15 * 0xDC0) + (108 * 0x20), 0x211Ba + (15 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 4",              0x2119a + (15 * 0xDC0) + (109 * 0x20), 0x211Ba + (15 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
};

const sGame_PaletteDataset VSAV2_A_OboroBishamon_PALETTES_SPECIAL[] =
{
    { L"Oboro Bishamon LP Poisoned",        0x2119a + (17 * 0xDC0) + (0 * 0x20), 0x211Ba + (17 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Poisoned",        0x2119a + (17 * 0xDC0) + (1 * 0x20), 0x211Ba + (17 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Poisoned",        0x2119a + (17 * 0xDC0) + (2 * 0x20), 0x211Ba + (17 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Poisoned",        0x2119a + (17 * 0xDC0) + (3 * 0x20), 0x211Ba + (17 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Poisoned",        0x2119a + (17 * 0xDC0) + (4 * 0x20), 0x211Ba + (17 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Poisoned",        0x2119a + (17 * 0xDC0) + (5 * 0x20), 0x211Ba + (17 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Poisoned",        0x2119a + (17 * 0xDC0) + (6 * 0x20), 0x211Ba + (17 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Poisoned",        0x2119a + (17 * 0xDC0) + (7 * 0x20), 0x211Ba + (17 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Poisoned",        0x2119a + (17 * 0xDC0) + (8 * 0x20), 0x211Ba + (17 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Poisoned",        0x2119a + (17 * 0xDC0) + (9 * 0x20), 0x211Ba + (17 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Zapped",          0x2119a + (17 * 0xDC0) + (10 * 0x20), 0x211Ba + (17 * 0xDC0) + (10 * 0x20) },
    { L"Oboro Bishamon MP Zapped",          0x2119a + (17 * 0xDC0) + (11 * 0x20), 0x211Ba + (17 * 0xDC0) + (11 * 0x20) },
    { L"Oboro Bishamon HP Zapped",          0x2119a + (17 * 0xDC0) + (12 * 0x20), 0x211Ba + (17 * 0xDC0) + (12 * 0x20) },
    { L"Oboro Bishamon LK Zapped",          0x2119a + (17 * 0xDC0) + (13 * 0x20), 0x211Ba + (17 * 0xDC0) + (13 * 0x20) },
    { L"Oboro Bishamon MK Zapped",          0x2119a + (17 * 0xDC0) + (14 * 0x20), 0x211Ba + (17 * 0xDC0) + (14 * 0x20) },
    { L"Oboro Bishamon HK Zapped",          0x2119a + (17 * 0xDC0) + (15 * 0x20), 0x211Ba + (17 * 0xDC0) + (15 * 0x20) },
    { L"Oboro Bishamon PP Zapped",          0x2119a + (17 * 0xDC0) + (16 * 0x20), 0x211Ba + (17 * 0xDC0) + (16 * 0x20) },
    { L"Oboro Bishamon KK Zapped",          0x2119a + (17 * 0xDC0) + (17 * 0x20), 0x211Ba + (17 * 0xDC0) + (17 * 0x20) },
    { L"Oboro Bishamon AP Zapped",          0x2119a + (17 * 0xDC0) + (18 * 0x20), 0x211Ba + (17 * 0xDC0) + (18 * 0x20) },
    { L"Oboro Bishamon AK Zapped",          0x2119a + (17 * 0xDC0) + (19 * 0x20), 0x211Ba + (17 * 0xDC0) + (19 * 0x20) },
    { L"Oboro Bishamon LP Burned",          0x2119a + (17 * 0xDC0) + (20 * 0x20), 0x211Ba + (17 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Burned",          0x2119a + (17 * 0xDC0) + (21 * 0x20), 0x211Ba + (17 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Burned",          0x2119a + (17 * 0xDC0) + (22 * 0x20), 0x211Ba + (17 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Burned",          0x2119a + (17 * 0xDC0) + (23 * 0x20), 0x211Ba + (17 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Burned",          0x2119a + (17 * 0xDC0) + (24 * 0x20), 0x211Ba + (17 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Burned",          0x2119a + (17 * 0xDC0) + (25 * 0x20), 0x211Ba + (17 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Burned",          0x2119a + (17 * 0xDC0) + (26 * 0x20), 0x211Ba + (17 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Burned",          0x2119a + (17 * 0xDC0) + (27 * 0x20), 0x211Ba + (17 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Burned",          0x2119a + (17 * 0xDC0) + (28 * 0x20), 0x211Ba + (17 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Burned",          0x2119a + (17 * 0xDC0) + (29 * 0x20), 0x211Ba + (17 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (30 * 0x20), 0x211Ba + (17 * 0xDC0) + (30 * 0x20) },
    { L"Oboro Bishamon MP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (31 * 0x20), 0x211Ba + (17 * 0xDC0) + (31 * 0x20) },
    { L"Oboro Bishamon HP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (32 * 0x20), 0x211Ba + (17 * 0xDC0) + (32 * 0x20) },
    { L"Oboro Bishamon LK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (33 * 0x20), 0x211Ba + (17 * 0xDC0) + (33 * 0x20) },
    { L"Oboro Bishamon MK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (34 * 0x20), 0x211Ba + (17 * 0xDC0) + (34 * 0x20) },
    { L"Oboro Bishamon HK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (35 * 0x20), 0x211Ba + (17 * 0xDC0) + (35 * 0x20) },
    { L"Oboro Bishamon PP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (36 * 0x20), 0x211Ba + (17 * 0xDC0) + (36 * 0x20) },
    { L"Oboro Bishamon KK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (37 * 0x20), 0x211Ba + (17 * 0xDC0) + (37 * 0x20) },
    { L"Oboro Bishamon AP Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (38 * 0x20), 0x211Ba + (17 * 0xDC0) + (38 * 0x20) },
    { L"Oboro Bishamon AK Pharaoh's Curse", 0x2119a + (17 * 0xDC0) + (39 * 0x20), 0x211Ba + (17 * 0xDC0) + (39 * 0x20) },
    { L"Oboro Bishamon ES 1",               0x2119a + (17 * 0xDC0) + (40 * 0x20), 0x211Ba + (17 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 2",               0x2119a + (17 * 0xDC0) + (41 * 0x20), 0x211Ba + (17 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 3",               0x2119a + (17 * 0xDC0) + (42 * 0x20), 0x211Ba + (17 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 4",               0x2119a + (17 * 0xDC0) + (43 * 0x20), 0x211Ba + (17 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 1",               0x2119a + (17 * 0xDC0) + (44 * 0x20), 0x211Ba + (17 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 2",               0x2119a + (17 * 0xDC0) + (45 * 0x20), 0x211Ba + (17 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 3",               0x2119a + (17 * 0xDC0) + (46 * 0x20), 0x211Ba + (17 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 4",               0x2119a + (17 * 0xDC0) + (47 * 0x20), 0x211Ba + (17 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 5",               0x2119a + (17 * 0xDC0) + (48 * 0x20), 0x211Ba + (17 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 6",               0x2119a + (17 * 0xDC0) + (49 * 0x20), 0x211Ba + (17 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 7",               0x2119a + (17 * 0xDC0) + (50 * 0x20), 0x211Ba + (17 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 8",               0x2119a + (17 * 0xDC0) + (51 * 0x20), 0x211Ba + (17 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Prova di Servo",     0x2119a + (17 * 0xDC0) + (52 * 0x20), 0x211Ba + (17 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Finale Rosso",       0x2119a + (17 * 0xDC0) + (53 * 0x20), 0x211Ba + (17 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Stone",              0x2119a + (17 * 0xDC0) + (54 * 0x20), 0x211Ba + (17 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (55 * 0x20), 0x211Ba + (17 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (56 * 0x20), 0x211Ba + (17 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (57 * 0x20), 0x211Ba + (17 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon LK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (58 * 0x20), 0x211Ba + (17 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (59 * 0x20), 0x211Ba + (17 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (60 * 0x20), 0x211Ba + (17 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon PP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (61 * 0x20), 0x211Ba + (17 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon KK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (62 * 0x20), 0x211Ba + (17 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AP Midnight Bliss",  0x2119a + (17 * 0xDC0) + (63 * 0x20), 0x211Ba + (17 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AK Midnight Bliss",  0x2119a + (17 * 0xDC0) + (64 * 0x20), 0x211Ba + (17 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon Q-Bee's QJ Honey",   0x2119a + (17 * 0xDC0) + (65 * 0x20), 0x211Ba + (17 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 1",    0x2119a + (17 * 0xDC0) + (66 * 0x20), 0x211Ba + (17 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 2",    0x2119a + (17 * 0xDC0) + (67 * 0x20), 0x211Ba + (17 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 3",    0x2119a + (17 * 0xDC0) + (68 * 0x20), 0x211Ba + (17 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 4",    0x2119a + (17 * 0xDC0) + (69 * 0x20), 0x211Ba + (17 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 1",    0x2119a + (17 * 0xDC0) + (70 * 0x20), 0x211Ba + (17 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 2",    0x2119a + (17 * 0xDC0) + (71 * 0x20), 0x211Ba + (17 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 3",    0x2119a + (17 * 0xDC0) + (72 * 0x20), 0x211Ba + (17 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 4",    0x2119a + (17 * 0xDC0) + (73 * 0x20), 0x211Ba + (17 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 1",    0x2119a + (17 * 0xDC0) + (74 * 0x20), 0x211Ba + (17 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 2",    0x2119a + (17 * 0xDC0) + (75 * 0x20), 0x211Ba + (17 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 3",    0x2119a + (17 * 0xDC0) + (76 * 0x20), 0x211Ba + (17 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 4",    0x2119a + (17 * 0xDC0) + (77 * 0x20), 0x211Ba + (17 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 1",    0x2119a + (17 * 0xDC0) + (78 * 0x20), 0x211Ba + (17 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 2",    0x2119a + (17 * 0xDC0) + (79 * 0x20), 0x211Ba + (17 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 3",    0x2119a + (17 * 0xDC0) + (80 * 0x20), 0x211Ba + (17 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 4",    0x2119a + (17 * 0xDC0) + (81 * 0x20), 0x211Ba + (17 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 1",    0x2119a + (17 * 0xDC0) + (82 * 0x20), 0x211Ba + (17 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 2",    0x2119a + (17 * 0xDC0) + (83 * 0x20), 0x211Ba + (17 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 3",    0x2119a + (17 * 0xDC0) + (84 * 0x20), 0x211Ba + (17 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 4",    0x2119a + (17 * 0xDC0) + (85 * 0x20), 0x211Ba + (17 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 1",    0x2119a + (17 * 0xDC0) + (86 * 0x20), 0x211Ba + (17 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 2",    0x2119a + (17 * 0xDC0) + (87 * 0x20), 0x211Ba + (17 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 3",    0x2119a + (17 * 0xDC0) + (88 * 0x20), 0x211Ba + (17 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 4",    0x2119a + (17 * 0xDC0) + (89 * 0x20), 0x211Ba + (17 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 1",    0x2119a + (17 * 0xDC0) + (90 * 0x20), 0x211Ba + (17 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 2",    0x2119a + (17 * 0xDC0) + (91 * 0x20), 0x211Ba + (17 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 3",    0x2119a + (17 * 0xDC0) + (92 * 0x20), 0x211Ba + (17 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 4",    0x2119a + (17 * 0xDC0) + (93 * 0x20), 0x211Ba + (17 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 1",    0x2119a + (17 * 0xDC0) + (94 * 0x20), 0x211Ba + (17 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 2",    0x2119a + (17 * 0xDC0) + (95 * 0x20), 0x211Ba + (17 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 3",    0x2119a + (17 * 0xDC0) + (96 * 0x20), 0x211Ba + (17 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 4",    0x2119a + (17 * 0xDC0) + (97 * 0x20), 0x211Ba + (17 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 1",    0x2119a + (17 * 0xDC0) + (98 * 0x20), 0x211Ba + (17 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 2",    0x2119a + (17 * 0xDC0) + (99 * 0x20), 0x211Ba + (17 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 3",    0x2119a + (17 * 0xDC0) + (100 * 0x20), 0x211Ba + (17 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 4",    0x2119a + (17 * 0xDC0) + (101 * 0x20), 0x211Ba + (17 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 1",    0x2119a + (17 * 0xDC0) + (102 * 0x20), 0x211Ba + (17 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 2",    0x2119a + (17 * 0xDC0) + (103 * 0x20), 0x211Ba + (17 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 3",    0x2119a + (17 * 0xDC0) + (104 * 0x20), 0x211Ba + (17 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 4",    0x2119a + (17 * 0xDC0) + (105 * 0x20), 0x211Ba + (17 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 1",              0x2119a + (17 * 0xDC0) + (106 * 0x20), 0x211Ba + (17 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 2",              0x2119a + (17 * 0xDC0) + (107 * 0x20), 0x211Ba + (17 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 3",              0x2119a + (17 * 0xDC0) + (108 * 0x20), 0x211Ba + (17 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 4",              0x2119a + (17 * 0xDC0) + (109 * 0x20), 0x211Ba + (17 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV2_A_BONUS_TITLES_PALETTES[] =
{
    { L"Lilith Intro",          0x410ba, 0x4115a, indexCPS2_VSAV1_Bonus, 0x08 },
    { L"Lilith Intro Portrait", 0x3bf3a, 0x3bffa, indexCPS2_VSAV1_Bonus, 0x07 },
};

const sDescTreeNode VSAV2_A_BULLETA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_LP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_MP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_HP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_LK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_MK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_HK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_PP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_KK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_AP,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_AK,         ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_BULLETA_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_DEMITRI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_MK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_PP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_KK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_AP,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_AK,         ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_DEMITRI_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_GALLON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_GALLON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_GALLON_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_VICTOR_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_MK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_PP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_KK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_AP,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_PALETTES_AK,         ARRAYSIZE(VSAV2_A_VICTOR_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Victor_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Victor_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_ZABEL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_LP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_MP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_HP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_LK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_MK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_HK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_PP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_KK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_AP,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_PALETTES_AK,         ARRAYSIZE(VSAV2_A_ZABEL_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Zabel_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Zabel_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_MORRIGAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_LP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_MP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_HP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_LK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_MK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_HK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_PP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_KK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_AP,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_PALETTES_AK,         ARRAYSIZE(VSAV2_A_MORRIGAN_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Morrigan_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Morrigan_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_ANAKARIS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_MK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_PP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_KK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_AP,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_AK,         ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Anakaris_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Anakaris_PALETTES_SPECIAL) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_ANAKARIS_PALETTES_SHARED) },
};

const sDescTreeNode VSAV2_A_FELICIA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_MK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_PP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_KK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_AP,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_PALETTES_AK,         ARRAYSIZE(VSAV2_A_FELICIA_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Felicia_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Felicia_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_BISHAMON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_BISHAMON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Bishamon_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Bishamon_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_AULBATH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_MK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_PP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_KK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_AP,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_PALETTES_AK,         ARRAYSIZE(VSAV2_A_AULBATH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Aulbath_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Aulbath_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_SASQUATCH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_LP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_MP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_HP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_LK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_MK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_HK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_PP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_KK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_AP,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_PALETTES_AK,       ARRAYSIZE(VSAV2_A_SASQUATCH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Sasquatch_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Sasquatch_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_ALTZABEL_COLLECTION[] =
{
    { L"Alt Zabel", DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_PALETTES_1,  ARRAYSIZE(VSAV2_A_ALTZABEL_PALETTES_1) },
    { L"Alt Zabel", DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_PALETTES_2,  ARRAYSIZE(VSAV2_A_ALTZABEL_PALETTES_2) },
};

const sDescTreeNode VSAV2_A_QUEENBEE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_LP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_MP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_HP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_LK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_MK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_HK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_PP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_KK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_AP,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_PALETTES_AK,        ARRAYSIZE(VSAV2_A_QUEENBEE_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_QBee_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_QBee_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_LEILEI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_MK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_PP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_KK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_AP,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_PALETTES_AK,         ARRAYSIZE(VSAV2_A_LEILEI_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_LeiLei_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_LeiLei_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_LILITH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_LP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_MP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_HP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_LK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_MK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_HK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_PP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_KK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_AP,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_PALETTES_AK,         ARRAYSIZE(VSAV2_A_LILITH_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Lilith_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Lilith_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_JEDAH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_LP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_MP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_HP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_LK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_MK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_HK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_PP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_KK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_AP,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_AK,         ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_AK) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_PALETTES_SHARED, ARRAYSIZE(VSAV2_A_JEDAH_PALETTES_SHARED) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Jedah_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Jedah_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_PHOBOS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_LP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_MP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_HP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_LK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_MK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_HK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_PP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_KK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_AP, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_PALETTES_AK, ARRAYSIZE(VSAV2_A_PHOBOS_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Phobos_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Phobos_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_PYRON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_PYRON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Pyron_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Pyron_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_DARKGALLON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_DARKGALLON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_DarkGallon_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_DarkGallon_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_UNKNOWN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_LP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_MP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_HP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_LK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_MK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_HK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_PP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_KK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_AP,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_PALETTES_AK,         ARRAYSIZE(VSAV2_A_UNKNOWN_PALETTES_AK) },
};

const sDescTreeNode VSAV2_A_OBOROBISHAMON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_LP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_MP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_HP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_LK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_MK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_HK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_PP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_KK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_AP,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_PALETTES_AK,         ARRAYSIZE(VSAV2_A_OBOROBISHAMON_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_OboroBishamon_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_OboroBishamon_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_DONOVAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_LP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_MP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_HP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_LK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_MK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_HK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_PP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_KK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_AP,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_PALETTES_AK,         ARRAYSIZE(VSAV2_A_DONOVAN_PALETTES_AK) },
    { L"Special", DESC_NODETYPE_TREE, (void*)VSAV2_A_Donovan_PALETTES_SPECIAL, ARRAYSIZE(VSAV2_A_Donovan_PALETTES_SPECIAL) },
};

const sDescTreeNode VSAV2_A_ENDING_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)VSAV2_A_ENDING_PALETTES_PORTRAITS,  ARRAYSIZE(VSAV2_A_ENDING_PALETTES_PORTRAITS) },
};

const sDescTreeNode VSAV2_A_BONUS_COLLECTION[] =
{
    { L"Title/Select Screen", DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_TITLES_PALETTES,  ARRAYSIZE(VSAV2_A_BONUS_TITLES_PALETTES) },
};

const sDescTreeNode VSAV2_UNITS[] =
{
    { L"Bulleta",            DESC_NODETYPE_TREE, (void*)VSAV2_A_BULLETA_COLLECTION,       ARRAYSIZE(VSAV2_A_BULLETA_COLLECTION) }, // BB-Hood
    { L"Demitri",            DESC_NODETYPE_TREE, (void*)VSAV2_A_DEMITRI_COLLECTION,       ARRAYSIZE(VSAV2_A_DEMITRI_COLLECTION) },
    // next is the unplayable gallon: moved to end
    { L"Victor",             DESC_NODETYPE_TREE, (void*)VSAV2_A_VICTOR_COLLECTION,        ARRAYSIZE(VSAV2_A_VICTOR_COLLECTION) },
    { L"Zabel",              DESC_NODETYPE_TREE, (void*)VSAV2_A_ZABEL_COLLECTION,         ARRAYSIZE(VSAV2_A_ZABEL_COLLECTION) }, // Lord Raptor
    { L"Morrigan",           DESC_NODETYPE_TREE, (void*)VSAV2_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VSAV2_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",           DESC_NODETYPE_TREE, (void*)VSAV2_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VSAV2_A_ANAKARIS_COLLECTION) },
    { L"Felicia",            DESC_NODETYPE_TREE, (void*)VSAV2_A_FELICIA_COLLECTION,       ARRAYSIZE(VSAV2_A_FELICIA_COLLECTION) },
    { L"Bishamon",           DESC_NODETYPE_TREE, (void*)VSAV2_A_BISHAMON_COLLECTION,      ARRAYSIZE(VSAV2_A_BISHAMON_COLLECTION) },
    // next is the unplayable aulbath: moved to end
    // next is the unplayable sasquatch: moved to end

    { L"Alt Zabel",          DESC_NODETYPE_TREE, (void*)VSAV2_A_ALTZABEL_COLLECTION,      ARRAYSIZE(VSAV2_A_ALTZABEL_COLLECTION) },

    { L"Q-Bee",              DESC_NODETYPE_TREE, (void*)VSAV2_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VSAV2_A_QUEENBEE_COLLECTION) },
    { L"Lei-Lei",            DESC_NODETYPE_TREE, (void*)VSAV2_A_LEILEI_COLLECTION,        ARRAYSIZE(VSAV2_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { L"Lilith",             DESC_NODETYPE_TREE, (void*)VSAV2_A_LILITH_COLLECTION,        ARRAYSIZE(VSAV2_A_LILITH_COLLECTION) },
    { L"Jedah",              DESC_NODETYPE_TREE, (void*)VSAV2_A_JEDAH_COLLECTION,         ARRAYSIZE(VSAV2_A_JEDAH_COLLECTION) },

    { L"Phobos",             DESC_NODETYPE_TREE, (void*)VSAV2_A_PHOBOS_COLLECTION,        ARRAYSIZE(VSAV2_A_PHOBOS_COLLECTION) },
    { L"Pyron",              DESC_NODETYPE_TREE, (void*)VSAV2_A_PYRON_COLLECTION,         ARRAYSIZE(VSAV2_A_PYRON_COLLECTION) },
    { L"Donovan",            DESC_NODETYPE_TREE, (void*)VSAV2_A_DONOVAN_COLLECTION,       ARRAYSIZE(VSAV2_A_DONOVAN_COLLECTION) },
    //{ L"Unknown",          DESC_NODETYPE_TREE, (void*)VSAV2_A_UNKNOWN_COLLECTION,       ARRAYSIZE(VSAV2_A_UNKNOWN_COLLECTION) },
    { L"Oboro Bishamon",     DESC_NODETYPE_TREE, (void*)VSAV2_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VSAV2_A_OBOROBISHAMON_COLLECTION) },
    { L"Ending Portraits",   DESC_NODETYPE_TREE, (void*)VSAV2_A_ENDING_COLLECTION,       ARRAYSIZE(VSAV2_A_ENDING_COLLECTION) },
    { L"Gallon (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_GALLON_COLLECTION,       ARRAYSIZE(VSAV2_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Aulbath (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_AULBATH_COLLECTION,     ARRAYSIZE(VSAV2_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_SASQUATCH_COLLECTION, ARRAYSIZE(VSAV2_A_SASQUATCH_COLLECTION) },
    { L"Dark Gallon (unplayable)", DESC_NODETYPE_TREE, (void*)VSAV2_A_DARKGALLON_COLLECTION, ARRAYSIZE(VSAV2_A_DARKGALLON_COLLECTION) },

    { L"Bonus Palettes",     DESC_NODETYPE_TREE, (void*)VSAV2_A_BONUS_COLLECTION,         ARRAYSIZE(VSAV2_A_BONUS_COLLECTION) },
};

constexpr auto VSAV2_A_NUMUNIT = ARRAYSIZE(VSAV2_UNITS);

#define VSAV2_A_EXTRALOC VSAV2_A_NUMUNIT

// We extend this array with data groveled from the VSAV2e.txt extensible extras file, if any.
const stExtraDef VSAV2_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

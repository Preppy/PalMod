#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VHUNT2_A_MORRIGAN_PALETTES. 
// * Update every array using VHUNT2_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 VHUNT2_A_IMGIDS_USED[] =
{
    // These are the playable characters
    indexCPS2Sprites_Anakaris,
    indexCPS2Sprites_Vamp_Bishamon,  // 0x68
    indexCPS2Sprites_Vamp_Demitri,   // 0x6A
    indexCPS2Sprites_Vamp_Donovan,   // 0x6B
    indexCPS2Sprites_Felicia,
    indexCPS2Sprites_Vamp_LeiLei,    // 0x6E aka Hsien-Ko
    indexCPS2Sprites_Vamp_Phobos,    // 0x71 aka Huitzil
    indexCPS2Sprites_Vamp_Gallon,    // 0x6C aka Jon Talbain
    indexCPS2Sprites_Vamp_Zabel,     // 0x77  aka Lord Raptor
    indexCPS2Sprites_Morrigan,
    indexCPS2Sprites_Vamp_Pyron,     // 0x72
    indexCPS2Sprites_Vamp_Aulbath,   // 0x67 aka Rikuo
    indexCPS2Sprites_Vamp_Sasquatch, // 0x74
    indexCPS2Sprites_Vamp_Victor,    // 0x76

    // these just have data in the game
    indexCPS2Sprites_Anita,
    indexCPS2Sprites_BBHood,
    indexCPS2Sprites_Vamp_Dee,       // 0x69
    indexCPS2Sprites_Vamp_Jedah,     // 0x6D
    indexCPS2Sprites_Vamp_Lilith,    // 0x6F
    indexCPS2Sprites_Vamp_Marionette, // 0x70
    indexCPS2Sprites_Vamp_QBee,      // 0x73
    indexCPS2Sprites_Vamp_Shadow,    // 0x75
    indexCPS2Sprites_VSAV1_MidnightBliss,
    indexCPS2Sprites_Vamp_DarkGallon,
};

// This dataset is functionally identical to the VSAV2 dataset, except that for VHUNT2
// the total palette data is split across the 9 and 10 ROMs.  Currently I've just dropped
// out all the palette data split onto 10: that includes portraits, shared blood, and
// Donovan's second palette.

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_LP[] =
{
    { L"LP Bulleta", 0x16c9a, 0x16cba, indexCPS2Sprites_BBHood, 0x0 },
    { L"LP Critters", 0x16cba, 0x16cda, indexCPS2Sprites_BBHood, 0x01 },
    { L"LP Weapons", 0x16cda, 0x16cfa, indexCPS2Sprites_BBHood, 0x02 },
    { L"LP Explosions", 0x16cfa, 0x16d1a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x16d1a, 0x16d3a, indexCPS2Sprites_BBHood, 0x0 },
    { L"MP Critters", 0x16d3a, 0x16d5a, indexCPS2Sprites_BBHood, 0x01 },
    { L"MP Weapons", 0x16d5a, 0x16d7a, indexCPS2Sprites_BBHood, 0x02 },
    { L"MP Explosions", 0x16d7a, 0x16d9a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x16d9a, 0x16dba, indexCPS2Sprites_BBHood, 0x0 },
    { L"HP Critters", 0x16dba, 0x16dda, indexCPS2Sprites_BBHood, 0x01 },
    { L"HP Weapons", 0x16dda, 0x16dfa, indexCPS2Sprites_BBHood, 0x02 },
    { L"HP Explosions", 0x16dfa, 0x16e1a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x16e1a, 0x16e3a, indexCPS2Sprites_BBHood, 0x0 },
    { L"LK Critters", 0x16e3a, 0x16e5a, indexCPS2Sprites_BBHood, 0x01 },
    { L"LK Weapons", 0x16e5a, 0x16e7a, indexCPS2Sprites_BBHood, 0x02 },
    { L"LK Explosions", 0x16e7a, 0x16e9a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x16e9a, 0x16eba, indexCPS2Sprites_BBHood, 0x0 },
    { L"MK Critters", 0x16eba, 0x16eda, indexCPS2Sprites_BBHood, 0x01 },
    { L"MK Weapons", 0x16eda, 0x16efa, indexCPS2Sprites_BBHood, 0x02 },
    { L"MK Explosions", 0x16efa, 0x16f1a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x16f1a, 0x16f3a, indexCPS2Sprites_BBHood, 0x0 },
    { L"HK Critters", 0x16f3a, 0x16f5a, indexCPS2Sprites_BBHood, 0x01 },
    { L"HK Weapons", 0x16f5a, 0x16f7a, indexCPS2Sprites_BBHood, 0x02 },
    { L"HK Explosions", 0x16f7a, 0x16f9a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x16f9a, 0x16fba, indexCPS2Sprites_BBHood, 0x0 },
    { L"PP Critters", 0x16fba, 0x16fda, indexCPS2Sprites_BBHood, 0x01 },
    { L"PP Weapons", 0x16fda, 0x16ffa, indexCPS2Sprites_BBHood, 0x02 },
    { L"PP Explosions", 0x16ffa, 0x1701a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x1701a, 0x1703a, indexCPS2Sprites_BBHood, 0x0 },
    { L"KK Critters", 0x1703a, 0x1705a, indexCPS2Sprites_BBHood, 0x01 },
    { L"KK Weapons", 0x1705a, 0x1707a, indexCPS2Sprites_BBHood, 0x02 },
    { L"KK Explosions", 0x1707a, 0x1709a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x1709a, 0x170ba, indexCPS2Sprites_BBHood, 0x0 },
    { L"AP Critters", 0x170ba, 0x170da, indexCPS2Sprites_BBHood, 0x01 },
    { L"AP Weapons", 0x170da, 0x170fa, indexCPS2Sprites_BBHood, 0x02 },
    { L"AP Explosions", 0x170fa, 0x1711a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x1711a, 0x1713a, indexCPS2Sprites_BBHood, 0x0 },
    { L"AK Critters", 0x1713a, 0x1715a, indexCPS2Sprites_BBHood, 0x01 },
    { L"AK Weapons", 0x1715a, 0x1717a, indexCPS2Sprites_BBHood, 0x02 },
    { L"AK Explosions", 0x1717a, 0x1719a, indexCPS2Sprites_BBHood, 0x0b },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x1719a, 0x171ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Teledash 1", 0x171fa, 0x1721a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Teledash 2", 0x171ba, 0x171da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LP Fireball", 0x171da, 0x171fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri", 0x1721a, 0x1723a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Teledash 1", 0x1727a, 0x1729a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Teledash 2", 0x1723a, 0x1725a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MP Fireball", 0x1725a, 0x1727a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x1729a, 0x172ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Teledash 1", 0x172fa, 0x1731a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Teledash 2", 0x172ba, 0x172da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HP Fireball", 0x172da, 0x172fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x1731a, 0x1733a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Teledash 1", 0x1737a, 0x1739a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Teledash 2", 0x1733a, 0x1735a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"LK Fireball", 0x1735a, 0x1737a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x1739a, 0x173ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Teledash 1", 0x173fa, 0x1741a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Teledash 2", 0x173ba, 0x173da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"MK Fireball", 0x173da, 0x173fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x1741a, 0x1743a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Teledash 1", 0x1747a, 0x1749a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Teledash 2", 0x1743a, 0x1745a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"HK Fireball", 0x1745a, 0x1747a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x1749a, 0x174ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Teledash 1", 0x174fa, 0x1751a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Teledash 2", 0x174ba, 0x174da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"PP Fireball", 0x174da, 0x174fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x1751a, 0x1753a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Teledash 1", 0x1757a, 0x1759a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Teledash 2", 0x1753a, 0x1755a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"KK Fireball", 0x1755a, 0x1757a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x1759a, 0x175ba, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Teledash 1", 0x175fa, 0x1761a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Teledash 2", 0x175ba, 0x175da, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AP Fireball", 0x175da, 0x175fa, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x1761a, 0x1763a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Teledash 1", 0x1767a, 0x1769a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Teledash 2", 0x1763a, 0x1765a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"AK Fireball", 0x1765a, 0x1767a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x1769a, 0x176ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"LP Intro/Outro", 0x176ba, 0x176da },
    { L"LP 236P/41236KK/j.HP", 0x176da, 0x176fa },
    { L"LP 236P/28K/Outro Flash", 0x176fa, 0x1771a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x1771a, 0x1773a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"MP Intro/Outro", 0x1773a, 0x1775a },
    { L"MP 236P/41236KK/j.HP", 0x1775a, 0x1777a },
    { L"MP 236P/28K/Outro Flash", 0x1777a, 0x1779a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x1779a, 0x177ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"HP Intro/Outro", 0x177ba, 0x177da },
    { L"HP 236P/41236KK/j.HP", 0x177da, 0x177fa },
    { L"HP 236P/28K/Outro Flash", 0x177fa, 0x1781a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x1781a, 0x1783a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"LK Intro/Outro", 0x1783a, 0x1785a },
    { L"LK 236P/41236KK/j.HP", 0x1785a, 0x1787a },
    { L"LK 236P/28K/Outro Flash", 0x1787a, 0x1789a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x1789a, 0x178ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"MK Intro/Outro", 0x178ba, 0x178da },
    { L"MK 236P/41236KK/j.HP", 0x178da, 0x178fa },
    { L"MK 236P/28K/Outro Flash", 0x178fa, 0x1791a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x1791a, 0x1793a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"HK Intro/Outro", 0x1793a, 0x1795a },
    { L"HK 236P/41236KK/j.HP", 0x1795a, 0x1797a },
    { L"HK 236P/28K/Outro Flash", 0x1797a, 0x1799a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x1799a, 0x179ba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"PP Intro/Outro", 0x179ba, 0x179da },
    { L"PP 236P/41236KK/j.HP", 0x179da, 0x179fa },
    { L"PP 236P/28K/Outro Flash", 0x179fa, 0x17a1a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x17a1a, 0x17a3a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"KK Intro/Outro", 0x17a3a, 0x17a5a },
    { L"KK 236P/41236KK/j.HP", 0x17a5a, 0x17a7a },
    { L"KK 236P/28K/Outro Flash", 0x17a7a, 0x17a9a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x17a9a, 0x17aba, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"AP Intro/Outro", 0x17aba, 0x17ada },
    { L"AP 236P/41236KK/j.HP", 0x17ada, 0x17afa },
    { L"AP 236P/28K/Outro Flash", 0x17afa, 0x17b1a },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x17b1a, 0x17b3a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"AK Intro/Outro", 0x17b3a, 0x17b5a },
    { L"AK 236P/41236KK/j.HP", 0x17b5a, 0x17b7a },
    { L"AK 236P/28K/Outro Flash", 0x17b7a, 0x17b9a },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x17b9a, 0x17bba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LP Electric Flash", 0x17bfa, 0x17c1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x17bba, 0x17bda },
    { L"LP Electricity", 0x17bda, 0x17bfa },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x17c1a, 0x17c3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MP Electric Flash", 0x17c7a, 0x17c9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x17c3a, 0x17c5a },
    { L"MP Electricity", 0x17c5a, 0x17c7a },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x17c9a, 0x17cba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HP Electric Flash", 0x17cfa, 0x17d1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x17cba, 0x17cda },
    { L"HP Electricity", 0x17cda, 0x17cfa },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x17d1a, 0x17d3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LK Electric Flash", 0x17d7a, 0x17d9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x17d3a, 0x17d5a },
    { L"LK Electricity", 0x17d5a, 0x17d7a },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x17d9a, 0x17dba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MK Electric Flash", 0x17dfa, 0x17e1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x17dba, 0x17dda },
    { L"MK Electricity", 0x17dda, 0x17dfa },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x17e1a, 0x17e3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HK Electric Flash", 0x17e7a, 0x17e9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x17e3a, 0x17e5a },
    { L"HK Electricity", 0x17e5a, 0x17e7a },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x17e9a, 0x17eba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"PP Electric Flash", 0x17efa, 0x17f1a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x17eba, 0x17eda },
    { L"PP Electricity", 0x17eda, 0x17efa },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x17f1a, 0x17f3a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"KK Electric Flash", 0x17f7a, 0x17f9a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x17f3a, 0x17f5a },
    { L"KK Electricity", 0x17f5a, 0x17f7a },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x17f9a, 0x17fba, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AP Electric Flash", 0x17ffa, 0x1801a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x17fba, 0x17fda },
    { L"AP Electricity", 0x17fda, 0x17ffa },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x1801a, 0x1803a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AK Electric Flash", 0x1807a, 0x1809a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x1803a, 0x1805a },
    { L"AK Electricity", 0x1805a, 0x1807a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x1809a, 0x180ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x180ba, 0x180da },
    { L"LP Unused 1", 0x180da, 0x180fa },
    { L"LP Unused 2", 0x180fa, 0x1811a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x1811a, 0x1813a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x1813a, 0x1815a },
    { L"MP Unused 1", 0x1815a, 0x1817a },
    { L"MP Unused 2", 0x1817a, 0x1819a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x1819a, 0x181ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x181ba, 0x181da },
    { L"HP Unused 1", 0x181da, 0x181fa },
    { L"HP Unused 2", 0x181fa, 0x1821a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x1821a, 0x1823a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x1823a, 0x1825a },
    { L"LK Unused 1", 0x1825a, 0x1827a },
    { L"LK Unused 2", 0x1827a, 0x1829a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x1829a, 0x182ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x182ba, 0x182da },
    { L"MK Unused 1", 0x182da, 0x182fa },
    { L"MK Unused 2", 0x182fa, 0x1831a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x1831a, 0x1833a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x1833a, 0x1835a },
    { L"HK Unused 1", 0x1835a, 0x1837a },
    { L"HK Unused 2", 0x1837a, 0x1839a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x1839a, 0x183ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x183ba, 0x183da },
    { L"PP Unused 1", 0x183da, 0x183fa },
    { L"PP Unused 2", 0x183fa, 0x1841a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x1841a, 0x1843a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x1843a, 0x1845a },
    { L"KK Unused 1", 0x1845a, 0x1847a },
    { L"KK Unused 2", 0x1847a, 0x1849a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x1849a, 0x184ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x184ba, 0x184da },
    { L"AP Unused 1", 0x184da, 0x184fa },
    { L"AP Unused 2", 0x184fa, 0x1851a },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x1851a, 0x1853a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x1853a, 0x1855a },
    { L"AK Unused 1", 0x1855a, 0x1857a },
    { L"AK Unused 2", 0x1857a, 0x1859a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x1859a, 0x185ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LP Idle sparkles/Raging demon", 0x185ba, 0x185da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"LP Bats", 0x185da, 0x185fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x185fa, 0x1861a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x1861a, 0x1863a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MP Idle sparkles/Raging demon", 0x1863a, 0x1865a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"MP Bats", 0x1865a, 0x1867a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x1867a, 0x1869a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x1869a, 0x186ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HP Idle sparkles/Raging demon", 0x186ba, 0x186da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"HP Bats", 0x186da, 0x186fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x186fa, 0x1871a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x1871a, 0x1873a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"LK Idle sparkles/Raging demon", 0x1873a, 0x1875a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"LK Bats", 0x1875a, 0x1877a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x1877a, 0x1879a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x1879a, 0x187ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"MK Idle sparkles/Raging demon", 0x187ba, 0x187da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"MK Bats", 0x187da, 0x187fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x187fa, 0x1881a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x1881a, 0x1883a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"HK Idle sparkles/Raging demon", 0x1883a, 0x1885a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"HK Bats", 0x1885a, 0x1887a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x1887a, 0x1889a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x1889a, 0x188ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"PP Idle sparkles/Raging demon", 0x188ba, 0x188da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"PP Bats", 0x188da, 0x188fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x188fa, 0x1891a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x1891a, 0x1893a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"KK Idle sparkles/Raging demon", 0x1893a, 0x1895a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"KK Bats", 0x1895a, 0x1897a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x1897a, 0x1899a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x1899a, 0x189ba, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AP Idle sparkles/Raging demon", 0x189ba, 0x189da, indexCPS2Sprites_Morrigan, 0x2 },
    { L"AP Bats", 0x189da, 0x189fa, indexCPS2Sprites_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x189fa, 0x18a1a },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x18a1a, 0x18a3a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"AK Idle sparkles/Raging demon", 0x18a3a, 0x18a5a, indexCPS2Sprites_Morrigan, 0x2 },
    { L"AK Bats", 0x18a5a, 0x18a7a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x18a7a, 0x18a9a },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x18a9a, 0x18aba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"LP 2.HP/Mummies", 0x18ada, 0x18afa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"LP 426KK/62KK Light", 0x18aba, 0x18ada, indexCPS2Sprites_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x18afa, 0x18b1a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x18b1a, 0x18b3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"MP 2.HP/Mummies", 0x18b5a, 0x18b7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"MP 426KK/62KK Light", 0x18b3a, 0x18b5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x18b7a, 0x18b9a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x18b9a, 0x18bba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"HP 2.HP/Mummies", 0x18bda, 0x18bfa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"HP 426KK/62KK Light", 0x18bba, 0x18bda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x18bfa, 0x18c1a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x18c1a, 0x18c3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"LK 2.HP/Mummies", 0x18c5a, 0x18c7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"LK 426KK/62KK Light", 0x18c3a, 0x18c5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x18c7a, 0x18c9a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x18c9a, 0x18cba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"MK 2.HP/Mummies", 0x18cda, 0x18cfa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"MK 426KK/62KK Light", 0x18cba, 0x18cda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x18cfa, 0x18d1a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x18d1a, 0x18d3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"HK 2.HP/Mummies", 0x18d5a, 0x18d7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"HK 426KK/62KK Light", 0x18d3a, 0x18d5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x18d7a, 0x18d9a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x18d9a, 0x18dba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"PP 2.HP/Mummies", 0x18dda, 0x18dfa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"PP 426KK/62KK Light", 0x18dba, 0x18dda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x18dfa, 0x18e1a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x18e1a, 0x18e3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"KK 2.HP/Mummies", 0x18e5a, 0x18e7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"KK 426KK/62KK Light", 0x18e3a, 0x18e5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x18e7a, 0x18e9a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x18e9a, 0x18eba, indexCPS2Sprites_Anakaris, 0x0 },
    { L"AP 2.HP/Mummies", 0x18eda, 0x18efa, indexCPS2Sprites_Anakaris, 0x2 },
    { L"AP 426KK/62KK Light", 0x18eba, 0x18eda, indexCPS2Sprites_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x18efa, 0x18f1a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x18f1a, 0x18f3a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"AK 2.HP/Mummies", 0x18f5a, 0x18f7a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"AK 426KK/62KK Light", 0x18f3a, 0x18f5a, indexCPS2Sprites_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x18f7a, 0x18f9a, indexCPS2Sprites_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x18f9a, 0x18fba, indexCPS2Sprites_Felicia, 0x0 },
    { L"LP Helpers/Mouse", 0x18fba, 0x18fda, indexCPS2Sprites_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x18fda, 0x18ffa, indexCPS2Sprites_Felicia, 0x01 },
    { L"LP Unknown Extra", 0x18ffa, 0x1901a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x1901a, 0x1903a, indexCPS2Sprites_Felicia, 0x0 },
    { L"MP Helpers/Mouse", 0x1903a, 0x1905a, indexCPS2Sprites_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x1905a, 0x1907a, indexCPS2Sprites_Felicia, 0x01 },
    { L"MP Unknown Extra", 0x1907a, 0x1909a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x1909a, 0x190ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"HP Helpers/Mouse", 0x190ba, 0x190da, indexCPS2Sprites_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x190da, 0x190fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"HP Unknown Extra", 0x190fa, 0x1911a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x1911a, 0x1913a, indexCPS2Sprites_Felicia, 0x0 },
    { L"LK Helpers/Mouse", 0x1913a, 0x1915a, indexCPS2Sprites_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x1915a, 0x1917a, indexCPS2Sprites_Felicia, 0x01 },
    { L"LK Unknown Extra", 0x1917a, 0x1919a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x1919a, 0x191ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"MK Helpers/Mouse", 0x191ba, 0x191da, indexCPS2Sprites_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x191da, 0x191fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"MK Unknown Extra", 0x191fa, 0x1921a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x1921a, 0x1923a, indexCPS2Sprites_Felicia, 0x0 },
    { L"HK Helpers/Mouse", 0x1923a, 0x1925a, indexCPS2Sprites_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x1925a, 0x1927a, indexCPS2Sprites_Felicia, 0x01 },
    { L"HK Unknown Extra", 0x1927a, 0x1929a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x1929a, 0x192ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"PP Helpers/Mouse", 0x192ba, 0x192da, indexCPS2Sprites_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x192da, 0x192fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"PP Unknown Extra", 0x192fa, 0x1931a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x1931a, 0x1933a, indexCPS2Sprites_Felicia, 0x0 },
    { L"KK Helpers/Mouse", 0x1933a, 0x1935a, indexCPS2Sprites_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x1935a, 0x1937a, indexCPS2Sprites_Felicia, 0x01 },
    { L"KK Unknown Extra", 0x1937a, 0x1939a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x1939a, 0x193ba, indexCPS2Sprites_Felicia, 0x0 },
    { L"AP Helpers/Mouse", 0x193ba, 0x193da, indexCPS2Sprites_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x193da, 0x193fa, indexCPS2Sprites_Felicia, 0x01 },
    { L"AP Unknown Extra", 0x193fa, 0x1941a },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x1941a, 0x1943a, indexCPS2Sprites_Felicia, 0x0 },
    { L"AK Helpers/Mouse", 0x1943a, 0x1945a, indexCPS2Sprites_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x1945a, 0x1947a, indexCPS2Sprites_Felicia, 0x01 },
    { L"AK Unknown Extra", 0x1947a, 0x1949a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x1949a, 0x194ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x194da, 0x194fa },
    { L"LP 41236KK", 0x194ba, 0x194da, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Unknown Extra", 0x194fa, 0x1951a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x1951a, 0x1953a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1955a, 0x1957a },
    { L"MP 41236KK", 0x1953a, 0x1955a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Unknown Extra", 0x1957a, 0x1959a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x1959a, 0x195ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x195da, 0x195fa },
    { L"HP 41236KK", 0x195ba, 0x195da, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Unknown Extra", 0x195fa, 0x1961a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x1961a, 0x1963a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1965a, 0x1967a },
    { L"LK 41236KK", 0x1963a, 0x1965a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Unknown Extra", 0x1967a, 0x1969a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x1969a, 0x196ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x196da, 0x196fa },
    { L"MK 41236KK", 0x196ba, 0x196da, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Unknown Extra", 0x196fa, 0x1971a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x1971a, 0x1973a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1975a, 0x1977a },
    { L"HK 41236KK", 0x1973a, 0x1975a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Unknown Extra", 0x1977a, 0x1979a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x1979a, 0x197ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x197da, 0x197fa },
    { L"PP 41236KK", 0x197ba, 0x197da, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Unknown Extra", 0x197fa, 0x1981a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x1981a, 0x1983a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1985a, 0x1987a },
    { L"KK 41236KK", 0x1983a, 0x1985a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Unknown Extra", 0x1987a, 0x1989a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x1989a, 0x198ba, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x198da, 0x198fa },
    { L"AP 41236KK", 0x198ba, 0x198da, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Unknown Extra", 0x198fa, 0x1991a },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x1991a, 0x1993a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks", 0x1995a, 0x1997a },
    { L"AK 41236KK", 0x1993a, 0x1995a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Unknown Extra", 0x1997a, 0x1999a },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x1999a, 0x199ba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"LP Water/s.MK/j.MP", 0x199ba, 0x199da },
    { L"LP Poison Cloud", 0x199fa, 0x19a1a },
    { L"LP Mach Crab (not full pal)", 0x199da, 0x199fa },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x19a1a, 0x19a3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"MP Water/s.MK/j.MP", 0x19a3a, 0x19a5a },
    { L"MP Poison Cloud", 0x19a7a, 0x19a9a },
    { L"MP Mach Crab (not full pal)", 0x19a5a, 0x19a7a },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x19a9a, 0x19aba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"HP Water/s.MK/j.MP", 0x19aba, 0x19ada },
    { L"HP Poison Cloud", 0x19afa, 0x19b1a },
    { L"HP Mach Crab (not full pal)", 0x19ada, 0x19afa },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x19b1a, 0x19b3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"LK Water/s.MK/j.MP", 0x19b3a, 0x19b5a },
    { L"LK Poison Cloud", 0x19b7a, 0x19b9a },
    { L"LK Mach Crab (not full pal)", 0x19b5a, 0x19b7a },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x19b9a, 0x19bba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"MK Water/s.MK/j.MP", 0x19bba, 0x19bda },
    { L"MK Poison Cloud", 0x19bfa, 0x19c1a },
    { L"MK Mach Crab (not full pal)", 0x19bda, 0x19bfa },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x19c1a, 0x19c3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"HK Water/s.MK/j.MP", 0x19c3a, 0x19c5a },
    { L"HK Poison Cloud", 0x19c7a, 0x19c9a },
    { L"HK Mach Crab (not full pal)", 0x19c5a, 0x19c7a },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x19c9a, 0x19cba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"PP Poison Cloud", 0x19cfa, 0x19d1a },
    { L"PP Water/s.MK/j.MP", 0x19cba, 0x19cda },
    { L"PP Mach Crab (not full pal)", 0x19cda, 0x19cfa },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x19d1a, 0x19d3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"KK Water/s.MK/j.MP", 0x19d3a, 0x19d5a },
    { L"KK Poison Cloud", 0x19d7a, 0x19d9a },
    { L"KK Mach Crab (not full pal)", 0x19d5a, 0x19d7a },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x19d9a, 0x19dba, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"AP Water/s.MK/j.MP", 0x19dba, 0x19dda },
    { L"AP Poison Cloud", 0x19dfa, 0x19e1a },
    { L"AP Mach Crab (not full pal)", 0x19dda, 0x19dfa },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x19e1a, 0x19e3a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"AK Water/s.MK/j.MP", 0x19e3a, 0x19e5a },
    { L"AK Poison Cloud", 0x19e7a, 0x19e9a },
    { L"AK Mach Crab (not full pal)", 0x19e5a, 0x19e7a },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x19e9a, 0x19eba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"LP Ice Extras", 0x19efa, 0x19f1a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x19eba, 0x19eda, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x19eda, 0x19efa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x19f1a, 0x19f3a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"MP Ice Extras", 0x19f7a, 0x19f9a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x19f3a, 0x19f5a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x19f5a, 0x19f7a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x19f9a, 0x19fba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"HP Ice Extras", 0x19ffa, 0x1a01a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x19fba, 0x19fda, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x19fda, 0x19ffa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x1a01a, 0x1a03a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"LK Ice Extras", 0x1a07a, 0x1a09a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x1a03a, 0x1a05a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x1a05a, 0x1a07a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x1a09a, 0x1a0ba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"MK Ice Extras", 0x1a0fa, 0x1a11a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x1a0ba, 0x1a0da, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x1a0da, 0x1a0fa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x1a11a, 0x1a13a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"HK Ice Extras", 0x1a17a, 0x1a19a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x1a13a, 0x1a15a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x1a15a, 0x1a17a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x1a19a, 0x1a1ba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"PP Ice Extras", 0x1a1fa, 0x1a21a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x1a1ba, 0x1a1da, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x1a1da, 0x1a1fa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x1a21a, 0x1a23a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"KK Ice Extras", 0x1a27a, 0x1a29a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x1a23a, 0x1a25a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x1a25a, 0x1a27a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x1a29a, 0x1a2ba, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"AP Ice Extras", 0x1a2fa, 0x1a31a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x1a2ba, 0x1a2da, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x1a2da, 0x1a2fa, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x1a31a, 0x1a33a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"AK Ice Extras", 0x1a37a, 0x1a39a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x1a33a, 0x1a35a, indexCPS2Sprites_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x1a35a, 0x1a37a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_ALTZABEL_PALETTES_1[] =
{
    { L"Alt Zabel", 0x1a79a, 0x1a7ba, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 64PP/63214KK/intro/winpose", 0x1a7ba, 0x1a7da },
    { L"Alt Zabel Unused 1", 0x1a7da, 0x1a7fa },
    { L"Alt Zabel Unused 2", 0x1a7fa, 0x1a81a },
};

const sGame_PaletteDataset VHUNT2_A_ALTZABEL_PALETTES_2[] =
{
    { L"Alt Zabel 2", 0x1a81a, 0x1a83a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 2 64PP/63214KK/intro/winpos", 0x1a83a, 0x1a85a },
    { L"Alt Zabel 2 Unused 1", 0x1a85a, 0x1a87a },
    { L"Alt Zabel 2 Unused 2", 0x1a87a, 0x1a89a },
};


// BUGBUG: TODO: The "Intro/ES 412PP" entries

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x1a89a, 0x1a8ba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"LP Wings/Honey", 0x1a8ba, 0x1a8da, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"LP Egg", 0x1a8da, 0x1a8fa },
    { L"LP Bees", 0x1a8fa, 0x1a91a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x1a91a, 0x1a93a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"MP Wings/Honey", 0x1a93a, 0x1a95a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"MP Egg", 0x1a95a, 0x1a97a },
    { L"MP Bees", 0x1a97a, 0x1a99a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x1a99a, 0x1a9ba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"HP Wings/Honey", 0x1a9ba, 0x1a9da, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"HP Egg", 0x1a9da, 0x1a9fa },
    { L"HP Bees", 0x1a9fa, 0x1aa1a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x1aa1a, 0x1aa3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"LK Wings/Honey", 0x1aa3a, 0x1aa5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"LK Egg", 0x1aa5a, 0x1aa7a },
    { L"LK Bees", 0x1aa7a, 0x1aa9a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x1aa9a, 0x1aaba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"MK Wings/Honey", 0x1aaba, 0x1aada, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"MK Egg", 0x1aada, 0x1aafa },
    { L"MK Bees", 0x1aafa, 0x1ab1a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x1ab1a, 0x1ab3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"HK Wings/Honey", 0x1ab3a, 0x1ab5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"HK Egg", 0x1ab5a, 0x1ab7a },
    { L"HK Bees", 0x1ab7a, 0x1ab9a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x1ab9a, 0x1abba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"PP Wings/Honey", 0x1abba, 0x1abda, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"PP Egg", 0x1abda, 0x1abfa },
    { L"PP Bees", 0x1abfa, 0x1ac1a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1ac1a, 0x1ac3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"KK Wings/Honey", 0x1ac3a, 0x1ac5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"KK Egg", 0x1ac5a, 0x1ac7a },
    { L"KK Bees", 0x1ac7a, 0x1ac9a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x1ac9a, 0x1acba, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"AP Wings/Honey", 0x1acba, 0x1acda, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"AP Egg", 0x1acda, 0x1acfa },
    { L"AP Bees", 0x1acfa, 0x1ad1a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1ad1a, 0x1ad3a, indexCPS2Sprites_Vamp_QBee, 0x0, &pairNext },
    { L"AK Wings/Honey", 0x1ad3a, 0x1ad5a, indexCPS2Sprites_Vamp_QBee, 0x1 },
    { L"AK Egg", 0x1ad5a, 0x1ad7a },
    { L"AK Bees", 0x1ad7a, 0x1ad9a, indexCPS2Sprites_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x1ad9a, 0x1adba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"LP Lin-Lin", 0x1adba, 0x1adda, indexCPS2Sprites_Anita, 0x04 },
    { L"LP Dust, Weapons", 0x1adda, 0x1adfa },
    { L"LP Unknown Extra", 0x1adfa, 0x1ae1a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1ae1a, 0x1ae3a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"MP Lin-Lin", 0x1ae3a, 0x1ae5a, indexCPS2Sprites_Anita, 0x04 },
    { L"MP Dust, Weapons", 0x1ae5a, 0x1ae7a },
    { L"MP Unknown Extra", 0x1ae7a, 0x1ae9a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x1ae9a, 0x1aeba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"HP Lin-Lin", 0x1aeba, 0x1aeda, indexCPS2Sprites_Anita, 0x04 },
    { L"HP Dust, Weapons", 0x1aeda, 0x1aefa },
    { L"HP Unknown Extra", 0x1aefa, 0x1af1a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1af1a, 0x1af3a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"LK Lin-Lin", 0x1af3a, 0x1af5a, indexCPS2Sprites_Anita, 0x04 },
    { L"LK Dust, Weapons", 0x1af5a, 0x1af7a },
    { L"LK Unknown Extra", 0x1af7a, 0x1af9a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x1af9a, 0x1afba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"MK Lin-Lin", 0x1afba, 0x1afda, indexCPS2Sprites_Anita, 0x04 },
    { L"MK Dust, Weapons", 0x1afda, 0x1affa },
    { L"MK Unknown Extra", 0x1affa, 0x1b01a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1b01a, 0x1b03a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"HK Lin-Lin", 0x1b03a, 0x1b05a, indexCPS2Sprites_Anita, 0x04 },
    { L"HK Dust, Weapons", 0x1b05a, 0x1b07a },
    { L"HK Unknown Extra", 0x1b07a, 0x1b09a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x1b09a, 0x1b0ba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"PP Lin-Lin", 0x1b0ba, 0x1b0da, indexCPS2Sprites_Anita, 0x04 },
    { L"PP Dust, Weapons", 0x1b0da, 0x1b0fa },
    { L"PP Unknown Extra", 0x1b0fa, 0x1b11a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1b11a, 0x1b13a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"KK Lin-Lin", 0x1b13a, 0x1b15a, indexCPS2Sprites_Anita, 0x04 },
    { L"KK Dust, Weapons", 0x1b15a, 0x1b17a },
    { L"KK Unknown Extra", 0x1b17a, 0x1b19a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x1b19a, 0x1b1ba, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"AP Lin-Lin", 0x1b1ba, 0x1b1da, indexCPS2Sprites_Anita, 0x04 },
    { L"AP Dust, Weapons", 0x1b1da, 0x1b1fa },
    { L"AP Unknown Extra", 0x1b1fa, 0x1b21a },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1b21a, 0x1b23a, indexCPS2Sprites_Vamp_LeiLei, 0x0 },
    { L"AK Lin-Lin", 0x1b23a, 0x1b25a, indexCPS2Sprites_Anita, 0x04 },
    { L"AK Dust, Weapons", 0x1b25a, 0x1b27a },
    { L"AK Unknown Extra", 0x1b27a, 0x1b29a },
};


///// real lilith

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x1b29a, 0x1b2ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"LP Hearts", 0x1b2ba, 0x1b2da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"LP Luminous Illusion/62KKK bats", 0x1b2da, 0x1b2fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"LP Sparkles", 0x1b2fa, 0x1b31a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1b31a, 0x1b33a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"MP Hearts", 0x1b33a, 0x1b35a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"MP Luminous Illusion/62KKK bats", 0x1b35a, 0x1b37a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"MP Sparkles", 0x1b37a, 0x1b39a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x1b39a, 0x1b3ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"HP Hearts", 0x1b3ba, 0x1b3da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"HP Luminous Illusion/62KKK bats", 0x1b3da, 0x1b3fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"HP Sparkles", 0x1b3fa, 0x1b41a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1b41a, 0x1b43a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"LK Hearts", 0x1b43a, 0x1b45a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"LK Luminous Illusion/62KKK bats", 0x1b45a, 0x1b47a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"LK Sparkles", 0x1b47a, 0x1b49a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x1b49a, 0x1b4ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"MK Hearts", 0x1b4ba, 0x1b4da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"MK Luminous Illusion/62KKK bats", 0x1b4da, 0x1b4fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"MK Sparkles", 0x1b4fa, 0x1b51a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1b51a, 0x1b53a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"HK Hearts", 0x1b53a, 0x1b55a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"HK Luminous Illusion/62KKK bats", 0x1b55a, 0x1b57a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"HK Sparkles", 0x1b57a, 0x1b59a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x1b59a, 0x1b5ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"PP Hearts", 0x1b5ba, 0x1b5da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"PP Luminous Illusion/62KKK bats", 0x1b5da, 0x1b5fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"PP Sparkles", 0x1b5fa, 0x1b61a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x1b61a, 0x1b63a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"KK Hearts", 0x1b63a, 0x1b65a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"KK Luminous Illusion/62KKK bats", 0x1b65a, 0x1b67a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"KK Sparkles", 0x1b67a, 0x1b69a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x1b69a, 0x1b6ba, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"AP Hearts", 0x1b6ba, 0x1b6da, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"AP Luminous Illusion/62KKK bats", 0x1b6da, 0x1b6fa, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"AP Sparkles", 0x1b6fa, 0x1b71a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x1b71a, 0x1b73a, indexCPS2Sprites_Vamp_Lilith, 0x0 },
    { L"AK Hearts", 0x1b73a, 0x1b75a, indexCPS2Sprites_Vamp_Lilith, 0x01, &pairNextAndNext },
    { L"AK Luminous Illusion/62KKK bats", 0x1b75a, 0x1b77a, indexCPS2Sprites_Vamp_Lilith, 0x02 },
    { L"AK Sparkles", 0x1b77a, 0x1b79a, indexCPS2Sprites_Vamp_Lilith, 0x03 },
};



const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x1b79a, 0x1b7ba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LP Prova di Servo", 0x1b7ba, 0x1b7da, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x1b7da, 0x1b7fa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"LP Intro", 0x1b7fa, 0x1b81a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x1b81a, 0x1b83a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MP Prova di Servo", 0x1b83a, 0x1b85a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x1b85a, 0x1b87a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"MP Intro", 0x1b87a, 0x1b89a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x1b89a, 0x1b8ba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HP Prova di Servo", 0x1b8ba, 0x1b8da, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x1b8da, 0x1b8fa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"HP Intro", 0x1b8fa, 0x1b91a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_LK[] =
{
	{ L"LK Jedah", 0x1b91a, 0x1b93a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LK Prova di Servo", 0x1b93a, 0x1b95a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x1b95a, 0x1b97a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"LK Intro", 0x1b97a, 0x1b99a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x1b99a, 0x1b9ba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MK Prova di Servo", 0x1b9ba, 0x1b9da, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x1b9da, 0x1b9fa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"MK Intro", 0x1b9fa, 0x1ba1a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x1ba1a, 0x1ba3a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HK Prova di Servo", 0x1ba3a, 0x1ba5a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x1ba5a, 0x1ba7a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"HK Intro", 0x1ba7a, 0x1ba9a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x1ba9a, 0x1baba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"PP Prova di Servo", 0x1baba, 0x1bada, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x1bada, 0x1bafa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"PP Intro", 0x1bafa, 0x1bb1a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x1bb1a, 0x1bb3a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"KK Prova di Servo", 0x1bb3a, 0x1bb5a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x1bb5a, 0x1bb7a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"KK Intro", 0x1bb7a, 0x1bb9a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x1bb9a, 0x1bbba, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AP Prova di Servo", 0x1bbba, 0x1bbda, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x1bbda, 0x1bbfa, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1bbfa, 0x1bc1a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1bc1a, 0x1bc3a, indexCPS2Sprites_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AK Prova di Servo", 0x1bc3a, 0x1bc5a, indexCPS2Sprites_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1bc5a, 0x1bc7a, indexCPS2Sprites_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1bc7a, 0x1bc9a, indexCPS2Sprites_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_LP[] =
{
    { L"LP Phobos",          0x1bc9a, 0x1bcba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"LP Unknown Extra 1", 0x1bcba, 0x1bcda },
    { L"LP Unknown Extra 2", 0x1bcda, 0x1bcfa },
    { L"LP Cecil",           0x1bcfa, 0x1bd1a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_MP[] =
{
    { L"MP Phobos",          0x1bd1a, 0x1bd3a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"MP Unknown Extra 1", 0x1bd3a, 0x1bd5a },
    { L"MP Unknown Extra 2", 0x1bd5a, 0x1bd7a },
    { L"MP Cecil",           0x1bd7a, 0x1bd9a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_HP[] =
{
    { L"HP Phobos",          0x1bd9a, 0x1bdba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"HP Unknown Extra 1", 0x1bdba, 0x1bdda },
    { L"HP Unknown Extra 2", 0x1bdda, 0x1bdfa },
    { L"HP Cecil",           0x1bdfa, 0x1be1a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_LK[] =
{
    { L"LK Phobos",          0x1be1a, 0x1be3a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"LK Unknown Extra 1", 0x1be3a, 0x1be5a },
    { L"LK Unknown Extra 2", 0x1be5a, 0x1be7a },
    { L"LK Cecil",           0x1be7a, 0x1be9a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_MK[] =
{
    { L"MK Phobos",          0x1be9a, 0x1beba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"MK Unknown Extra 1", 0x1beba, 0x1beda },
    { L"MK Unknown Extra 2", 0x1beda, 0x1befa },
    { L"MK Cecil",           0x1befa, 0x1bf1a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_HK[] =
{
    { L"HK Phobos",          0x1bf1a, 0x1bf3a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"HK Unknown Extra 1", 0x1bf3a, 0x1bf5a },
    { L"HK Unknown Extra 2", 0x1bf5a, 0x1bf7a },
    { L"HK Cecil",           0x1bf7a, 0x1bf9a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_PP[] =
{
    { L"PP Phobos",          0x1bf9a, 0x1bfba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"PP Unknown Extra 1", 0x1bfba, 0x1bfda },
    { L"PP Unknown Extra 2", 0x1bfda, 0x1bffa },
    { L"PP Cecil",           0x1bffa, 0x1c01a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_KK[] =
{
    { L"KK Phobos",          0x1c01a, 0x1c03a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"KK Unknown Extra 1", 0x1c03a, 0x1c05a },
    { L"KK Unknown Extra 2", 0x1c05a, 0x1c07a },
    { L"KK Cecil",           0x1c07a, 0x1c09a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_AP[] =
{
    { L"AP Phobos",          0x1c09a, 0x1c0ba, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"AP Unknown Extra 1", 0x1c0ba, 0x1c0da },
    { L"AP Unknown Extra 2", 0x1c0da, 0x1c0fa },
    { L"AP Cecil",           0x1c0fa, 0x1c11a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_AK[] =
{
    { L"AK Phobos",          0x1c11a, 0x1c13a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"AK Unknown Extra 1", 0x1c13a, 0x1c15a },
    { L"AK Unknown Extra 2", 0x1c15a, 0x1c17a },
    { L"AK Cecil",           0x1c17a, 0x1c19a, indexCPS2Sprites_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_LP[] =
{
    { L"LP Pyron",           0x1c19a, 0x1c1ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"LP Unknown Extra 1", 0x1c1ba, 0x1c1da },
    { L"LP Unknown Extra 2", 0x1c1da, 0x1c1fa },
    { L"LP Unknown Extra 3", 0x1c1fa, 0x1c21a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_MP[] =
{
    { L"MP Pyron",           0x1c21a, 0x1c23a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"MP Unknown Extra 1", 0x1c23a, 0x1c25a },
    { L"MP Unknown Extra 2", 0x1c25a, 0x1c27a },
    { L"MP Unknown Extra 3", 0x1c27a, 0x1c29a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_HP[] =
{
    { L"HP Pyron",           0x1c29a, 0x1c2ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"HP Unknown Extra 1", 0x1c2ba, 0x1c2da },
    { L"HP Unknown Extra 2", 0x1c2da, 0x1c2fa },
    { L"HP Unknown Extra 3", 0x1c2fa, 0x1c31a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_LK[] =
{
    { L"LK Pyron",           0x1c31a, 0x1c33a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"LK Unknown Extra 1", 0x1c33a, 0x1c35a },
    { L"LK Unknown Extra 2", 0x1c35a, 0x1c37a },
    { L"LK Unknown Extra 3", 0x1c37a, 0x1c39a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_MK[] =
{
    { L"MK Pyron",           0x1c39a, 0x1c3ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"MK Unknown Extra 1", 0x1c3ba, 0x1c3da },
    { L"MK Unknown Extra 2", 0x1c3da, 0x1c3fa },
    { L"MK Unknown Extra 3", 0x1c3fa, 0x1c41a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_HK[] =
{
    { L"HK Pyron",           0x1c41a, 0x1c43a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"HK Unknown Extra 1", 0x1c43a, 0x1c45a },
    { L"HK Unknown Extra 2", 0x1c45a, 0x1c47a },
    { L"HK Unknown Extra 3", 0x1c47a, 0x1c49a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_PP[] =
{
    { L"PP Pyron",           0x1c49a, 0x1c4ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"PP Unknown Extra 1", 0x1c4ba, 0x1c4da },
    { L"PP Unknown Extra 2", 0x1c4da, 0x1c4fa },
    { L"PP Unknown Extra 3", 0x1c4fa, 0x1c51a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_KK[] =
{
    { L"KK Pyron",           0x1c51a, 0x1c53a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"KK Unknown Extra 1", 0x1c53a, 0x1c55a },
    { L"KK Unknown Extra 2", 0x1c55a, 0x1c57a },
    { L"KK Unknown Extra 3", 0x1c57a, 0x1c59a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_AP[] =
{
    { L"AP Pyron",           0x1c59a, 0x1c5ba, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"AP Unknown Extra 1", 0x1c5ba, 0x1c5da },
    { L"AP Unknown Extra 2", 0x1c5da, 0x1c5fa },
    { L"AP Unknown Extra 3", 0x1c5fa, 0x1c61a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_AK[] =
{
    { L"AK Pyron",           0x1c61a, 0x1c63a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"AK Unknown Extra 1", 0x1c63a, 0x1c65a },
    { L"AK Unknown Extra 2", 0x1c65a, 0x1c67a },
    { L"AK Unknown Extra 3", 0x1c67a, 0x1c69a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
};

// portraits / dark effects

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_LP[] =
{
    { L"LP Dark Gallon", 0x1C69a, 0x1c1bc + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"LP Intro/Outro", 0x1c1bc + 0x4fe, 0x1c1dc + 0x4fe },
    { L"LP 236P/41236KK/j.HP", 0x1c1dc + 0x4fe, 0x1c1fc + 0x4fe },
    { L"LP 236P/28K/Outro Flash", 0x1c1fc + 0x4fe, 0x1c21c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_MP[] =
{
    { L"MP Dark Gallon", 0x1c21c + 0x4fe, 0x1c23c + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"MP Intro/Outro", 0x1c23c + 0x4fe, 0x1c25c + 0x4fe },
    { L"MP 236P/41236KK/j.HP", 0x1c25c + 0x4fe, 0x1c27c + 0x4fe },
    { L"MP 236P/28K/Outro Flash", 0x1c27c + 0x4fe, 0x1c29c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_HP[] =
{
    { L"HP Dark Gallon", 0x1c29c + 0x4fe, 0x1c2bc + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"HP Intro/Outro", 0x1c2bc + 0x4fe, 0x1c2dc + 0x4fe },
    { L"HP 236P/41236KK/j.HP", 0x1c2dc + 0x4fe, 0x1c2fc + 0x4fe },
    { L"HP 236P/28K/Outro Flash", 0x1c2fc + 0x4fe, 0x1c31c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_LK[] =
{
    { L"LK Dark Gallon", 0x1c31c + 0x4fe, 0x1c33c + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"LK Intro/Outro", 0x1c33c + 0x4fe, 0x1c35c + 0x4fe },
    { L"LK 236P/41236KK/j.HP", 0x1c35c + 0x4fe, 0x1c37c + 0x4fe },
    { L"LK 236P/28K/Outro Flash", 0x1c37c + 0x4fe, 0x1c39c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_MK[] =
{
    { L"MK Dark Gallon", 0x1c39c + 0x4fe, 0x1c3bc + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"MK Intro/Outro", 0x1c3bc + 0x4fe, 0x1c3dc + 0x4fe },
    { L"MK 236P/41236KK/j.HP", 0x1c3dc + 0x4fe, 0x1c3fc + 0x4fe },
    { L"MK 236P/28K/Outro Flash", 0x1c3fc + 0x4fe, 0x1c41c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_HK[] =
{
    { L"HK Dark Gallon", 0x1c41c + 0x4fe, 0x1c43c + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"HK Intro/Outro", 0x1c43c + 0x4fe, 0x1c45c + 0x4fe },
    { L"HK 236P/41236KK/j.HP", 0x1c45c + 0x4fe, 0x1c47c + 0x4fe },
    { L"HK 236P/28K/Outro Flash", 0x1c47c + 0x4fe, 0x1c49c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_PP[] =
{
    { L"PP Dark Gallon", 0x1c49c + 0x4fe, 0x1c4bc + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"PP Intro/Outro", 0x1c4bc + 0x4fe, 0x1c4dc + 0x4fe },
    { L"PP 236P/41236KK/j.HP", 0x1c4dc + 0x4fe, 0x1c4fc + 0x4fe },
    { L"PP 236P/28K/Outro Flash", 0x1c4fc + 0x4fe, 0x1c51c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_KK[] =
{
    { L"KK Dark Gallon", 0x1c51c + 0x4fe, 0x1c53c + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"KK Intro/Outro", 0x1c53c + 0x4fe, 0x1c55c + 0x4fe },
    { L"KK 236P/41236KK/j.HP", 0x1c55c + 0x4fe, 0x1c57c + 0x4fe },
    { L"KK 236P/28K/Outro Flash", 0x1c57c + 0x4fe, 0x1c59c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_AP[] =
{
    { L"AP Dark Gallon", 0x1c59c + 0x4fe, 0x1c5bc + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"AP Intro/Outro", 0x1c5bc + 0x4fe, 0x1c5dc + 0x4fe },
    { L"AP 236P/41236KK/j.HP", 0x1c5dc + 0x4fe, 0x1c5fc + 0x4fe },
    { L"AP 236P/28K/Outro Flash", 0x1c5fc + 0x4fe, 0x1c61c + 0x4fe },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_AK[] =
{
    { L"AK Dark Gallon", 0x1c61c + 0x4fe, 0x1c63c + 0x4fe, indexCPS2Sprites_Vamp_DarkGallon, 0x0 },
    { L"AK Intro/Outro", 0x1c63c + 0x4fe, 0x1c65c + 0x4fe },
    { L"AK 236P/41236KK/j.HP", 0x1c65c + 0x4fe, 0x1c67c + 0x4fe },
    { L"AK 236P/28K/Outro Flash", 0x1c67c + 0x4fe, 0x1CB9a },
};



const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_LP[] =
{
    { L"LP Donovan",         0x1cb9a, 0x1cbba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LP Unknown Extra",   0x1cbba, 0x1cbda },
    { L"LP Weapons",         0x1cbda, 0x1cbfa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"LP Anita",           0x1cbfa, 0x1cc1a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_MP[] =
{
    { L"MP Donovan",         0x1cc1a, 0x1cc3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MP Unknown Extra",   0x1cc3a, 0x1cc5a },
    { L"MP Weapons",         0x1cc5a, 0x1cc7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"MP Anita",           0x1cc7a, 0x1cc9a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_HP[] =
{
    { L"HP Donovan",         0x1cc9a, 0x1ccba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HP Unknown Extra",   0x1ccba, 0x1ccda },
    { L"HP Weapons",         0x1ccda, 0x1ccfa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"HP Anita",           0x1ccfa, 0x1cd1a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_LK[] =
{
    { L"LK Donovan",         0x1cd1a, 0x1cd3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LK Unknown Extra",   0x1cd3a, 0x1cd5a },
    { L"LK Weapons",         0x1cd5a, 0x1cd7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"LK Anita",           0x1cd7a, 0x1cd9a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_MK[] =
{
    { L"MK Donovan",         0x1cd9a, 0x1cdba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MK Unknown Extra",   0x1cdba, 0x1cdda },
    { L"MK Weapons",         0x1cdda, 0x1cdfa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"MK Anita",           0x1cdfa, 0x1ce1a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_HK[] =
{
    { L"HK Donovan",         0x1ce1a, 0x1ce3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HK Unknown Extra",   0x1ce3a, 0x1ce5a },
    { L"HK Weapons",         0x1ce5a, 0x1ce7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"HK Anita",           0x1ce7a, 0x1ce9a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_PP[] =
{
    { L"PP Donovan",         0x1ce9a, 0x1ceba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"PP Unknown Extra",   0x1ceba, 0x1ceda },
    { L"PP Weapons",         0x1ceda, 0x1cefa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"PP Anita",           0x1cefa, 0x1cf1a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_KK[] =
{
    { L"KK Donovan",         0x1cf1a, 0x1cf3a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"KK Unknown Extra",   0x1cf3a, 0x1cf5a },
    { L"KK Weapons",         0x1cf5a, 0x1cf7a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"KK Anita",           0x1cf7a, 0x1cf9a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_AP[] =
{
    { L"AP Donovan",         0x1cf9a, 0x1cfba, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AP Unknown Extra",   0x1cfba, 0x1cfda },
    { L"AP Weapons",         0x1cfda, 0x1cffa, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"AP Anita",           0x1cffa, 0x1d01a, indexCPS2Sprites_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_AK[] =
{
    { L"AK Donovan",         0x1d01a, 0x1d03a, indexCPS2Sprites_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AK Unknown Extra",   0x1d03a, 0x1d05a },
    { L"AK Weapons",         0x1d05a, 0x1d07a, indexCPS2Sprites_Vamp_Donovan, 0x1 },
    { L"AK Anita",           0x1d07a, 0x1d09a, indexCPS2Sprites_Anita, 0 },
};


const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_LP[] =
{
    { L"LP Unknown",         0x1d09a, 0x1d0ba },
    { L"LP Unknown Extra 1", 0x1d0ba, 0x1d0da },
    { L"LP Unknown Extra 2", 0x1d0da, 0x1d0fa },
    { L"LP Unknown Extra 3", 0x1d0fa, 0x1d11a },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_MP[] =
{
    { L"MP Unknown",          0x1d11a, 0x1d13a },
    { L"MP Unknown Extra 1", 0x1d13a, 0x1d15a },
    { L"MP Unknown Extra 2", 0x1d15a, 0x1d17a },
    { L"MP Unknown Extra 3", 0x1d17a, 0x1d19a },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_HP[] =
{
    { L"HP Unknown",         0x1d19a, 0x1c1bc + 0xffe },
    { L"HP Unknown Extra 1", 0x1c1bc + 0xffe, 0x1c1dc + 0xffe },
    { L"HP Unknown Extra 2", 0x1c1dc + 0xffe, 0x1c1fc + 0xffe },
    { L"HP Unknown Extra 3", 0x1c1fc + 0xffe, 0x1c21c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_LK[] =
{
    { L"LK Unknown",          0x1c21c + 0xffe, 0x1c23c + 0xffe },
    { L"LK Unknown Extra 1", 0x1c23c + 0xffe, 0x1c25c + 0xffe },
    { L"LK Unknown Extra 2", 0x1c25c + 0xffe, 0x1c27c + 0xffe },
    { L"LK Unknown Extra 3", 0x1c27c + 0xffe, 0x1c29c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_MK[] =
{
    { L"MK Unknown",          0x1c29c + 0xffe, 0x1c2bc + 0xffe },
    { L"MK Unknown Extra 1", 0x1c2bc + 0xffe, 0x1c2dc + 0xffe },
    { L"MK Unknown Extra 2", 0x1c2dc + 0xffe, 0x1c2fc + 0xffe },
    { L"MK Unknown Extra 3", 0x1c2fc + 0xffe, 0x1c31c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_HK[] =
{
    { L"HK Unknown",          0x1c31c + 0xffe, 0x1c33c + 0xffe },
    { L"HK Unknown Extra 1", 0x1c33c + 0xffe, 0x1c35c + 0xffe },
    { L"HK Unknown Extra 2", 0x1c35c + 0xffe, 0x1c37c + 0xffe },
    { L"HK Unknown Extra 3", 0x1c37c + 0xffe, 0x1c39c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_PP[] =
{
    { L"PP Unknown",          0x1c39c + 0xffe, 0x1c3bc + 0xffe },
    { L"PP Unknown Extra 1", 0x1c3bc + 0xffe, 0x1c3dc + 0xffe },
    { L"PP Unknown Extra 2", 0x1c3dc + 0xffe, 0x1c3fc + 0xffe },
    { L"PP Unknown Extra 3", 0x1c3fc + 0xffe, 0x1c41c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_KK[] =
{
    { L"KK Unknown",          0x1c41c + 0xffe, 0x1c43c + 0xffe },
    { L"KK Unknown Extra 1", 0x1c43c + 0xffe, 0x1c45c + 0xffe },
    { L"KK Unknown Extra 2", 0x1c45c + 0xffe, 0x1c47c + 0xffe },
    { L"KK Unknown Extra 3", 0x1c47c + 0xffe, 0x1c49c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_AP[] =
{
    { L"AP Unknown",          0x1c49c + 0xffe, 0x1c4bc + 0xffe },
    { L"AP Unknown Extra 1", 0x1c4bc + 0xffe, 0x1c4dc + 0xffe },
    { L"AP Unknown Extra 2", 0x1c4dc + 0xffe, 0x1c4fc + 0xffe },
    { L"AP Unknown Extra 3", 0x1c4fc + 0xffe, 0x1c51c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_AK[] =
{
    { L"AK Unknown",          0x1c51c + 0xffe, 0x1c53c + 0xffe },
    { L"AK Unknown Extra 1", 0x1c53c + 0xffe, 0x1c55c + 0xffe },
    { L"AK Unknown Extra 2", 0x1c55c + 0xffe, 0x1c57c + 0xffe },
    { L"AK Unknown Extra 3", 0x1c57c + 0xffe, 0x1c59c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon",    0x1c59c + 0xffe, 0x1c5bc + 0xffe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Intro", 0x1c5bc + 0xffe, 0x1c5dc + 0xffe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x1c5dc + 0xffe, 0x1c5fc + 0xffe },
    { L"LP Unknown Extra", 0x1c5fc + 0xffe, 0x1c61c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon",    0x1c61c + 0xffe, 0x1c63c + 0xffe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Intro", 0x1c63c + 0xffe, 0x1c65c + 0xffe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1c65c + 0xffe, 0x1c67c + 0xffe },
    { L"MP Unknown Extra", 0x1c67c + 0xffe, 0x1c69c + 0xffe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon",     0x1c19c + 0x14fe, 0x1c1bc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Intro", 0x1c1bc + 0x14fe, 0x1c1dc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x1c1dc + 0x14fe, 0x1c1fc + 0x14fe },
    { L"HP Unknown Extra", 0x1c1fc + 0x14fe, 0x1c21c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon",     0x1c21c + 0x14fe, 0x1c23c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Intro", 0x1c23c + 0x14fe, 0x1c25c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1c25c + 0x14fe, 0x1c27c + 0x14fe },
    { L"LK Unknown Extra", 0x1c27c + 0x14fe, 0x1c29c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon",     0x1c29c + 0x14fe, 0x1c2bc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Intro", 0x1c2bc + 0x14fe, 0x1c2dc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x1c2dc + 0x14fe, 0x1c2fc + 0x14fe },
    { L"MK Unknown Extra", 0x1c2fc + 0x14fe, 0x1c31c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon",     0x1c31c + 0x14fe, 0x1c33c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Intro", 0x1c33c + 0x14fe, 0x1c35c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1c35c + 0x14fe, 0x1c37c + 0x14fe },
    { L"HK Unknown Extra", 0x1c37c + 0x14fe, 0x1c39c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon",     0x1c39c + 0x14fe, 0x1c3bc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Intro", 0x1c3bc + 0x14fe, 0x1c3dc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x1c3dc + 0x14fe, 0x1c3fc + 0x14fe },
    { L"PP Unknown Extra", 0x1c3fc + 0x14fe, 0x1c41c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon",     0x1c41c + 0x14fe, 0x1c43c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Intro", 0x1c43c + 0x14fe, 0x1c45c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1c45c + 0x14fe, 0x1c47c + 0x14fe },
    { L"KK Unknown Extra", 0x1c47c + 0x14fe, 0x1c49c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon",     0x1c49c + 0x14fe, 0x1c4bc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Intro", 0x1c4bc + 0x14fe, 0x1c4dc + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x1c4dc + 0x14fe, 0x1c4fc + 0x14fe },
    { L"AP Unknown Extra", 0x1c4fc + 0x14fe, 0x1c51c + 0x14fe },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon",      0x1DA1a, 0x1c53c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Intro",               0x1c53c + 0x14fe, 0x1c55c + 0x14fe, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks",    0x1c55c + 0x14fe, 0x1c57c + 0x14fe },
    { L"AK Unknown Extra",       0x1c57c + 0x14fe, 0x1DA9a },
};

const sDescTreeNode VHUNT2_A_BULLETA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_DEMITRI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_GALLON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_VICTOR_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_ZABEL_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_MORRIGAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_ANAKARIS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_FELICIA_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_BISHAMON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_AULBATH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_SASQUATCH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_LP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_MP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_HP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_LK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_MK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_HK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_PP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_KK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_AP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_AK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_ALTZABEL_COLLECTION[] =
{
    { L"Default", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_PALETTES_1,  ARRAYSIZE(VHUNT2_A_ALTZABEL_PALETTES_1) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_PALETTES_2,  ARRAYSIZE(VHUNT2_A_ALTZABEL_PALETTES_2) },
};

const sDescTreeNode VHUNT2_A_QUEENBEE_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_LP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_MP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_HP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_LK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_MK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_HK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_PP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_KK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_AP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_AK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_LEILEI_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_LILITH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_JEDAH_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_PHOBOS_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_LP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_MP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_HP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_LK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_MK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_HK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_PP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_KK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_AP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_AK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_PYRON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_DARKGALLON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_SHADOW_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_OBOROBISHAMON_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_DONOVAN_COLLECTION[] =
{
    { L"LP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_LP) },
    { L"MP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_MP) },
    { L"HP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_HP) },
    { L"LK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_LK) },
    { L"MK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_MK) },
    { L"HK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_HK) },
    { L"PP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_PP) },
    { L"KK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_KK) },
    { L"AP", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_AP) },
    { L"AK", DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_UNITS[] =
{
    { L"Demitri",            DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_COLLECTION,       ARRAYSIZE(VHUNT2_A_DEMITRI_COLLECTION) },
    { L"Gallon",             DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_COLLECTION,        ARRAYSIZE(VHUNT2_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Victor",             DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_COLLECTION,        ARRAYSIZE(VHUNT2_A_VICTOR_COLLECTION) },
    { L"Zabel",              DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_COLLECTION,         ARRAYSIZE(VHUNT2_A_ZABEL_COLLECTION) }, // Lord Raptor
    { L"Morrigan",           DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VHUNT2_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",           DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VHUNT2_A_ANAKARIS_COLLECTION) },
    { L"Felicia",            DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_COLLECTION,       ARRAYSIZE(VHUNT2_A_FELICIA_COLLECTION) },
    { L"Bishamon",           DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_COLLECTION,      ARRAYSIZE(VHUNT2_A_BISHAMON_COLLECTION) },
    { L"Aulbath",            DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_COLLECTION,       ARRAYSIZE(VHUNT2_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch",          DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VHUNT2_A_SASQUATCH_COLLECTION) },

    { L"Alt Zabel",          DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_COLLECTION,      ARRAYSIZE(VHUNT2_A_ALTZABEL_COLLECTION) },

    { L"Lei-Lei",            DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_COLLECTION,        ARRAYSIZE(VHUNT2_A_LEILEI_COLLECTION) }, // Hsien-Ko

    { L"Phobos",             DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_COLLECTION,        ARRAYSIZE(VHUNT2_A_PHOBOS_COLLECTION) },
    { L"Pyron",              DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_COLLECTION,         ARRAYSIZE(VHUNT2_A_PYRON_COLLECTION) },
    { L"Dark Gallon",        DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_COLLECTION,    ARRAYSIZE(VHUNT2_A_DARKGALLON_COLLECTION) },
    { L"Donovan",            DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_COLLECTION,       ARRAYSIZE(VHUNT2_A_DONOVAN_COLLECTION) },
    //{ L"Unknown",          DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_COLLECTION,        ARRAYSIZE(VHUNT2_A_SHADOW_COLLECTION) },
    { L"Oboro Bishamon",     DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_COLLECTION) },

    { L"Bulleta (unplayable)", DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_COLLECTION,     ARRAYSIZE(VHUNT2_A_BULLETA_COLLECTION) }, // BB-Hood
    { L"Q-Bee (unplayable)", DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VHUNT2_A_QUEENBEE_COLLECTION) },
    { L"Lilith (unplayable)",DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_COLLECTION,        ARRAYSIZE(VHUNT2_A_LILITH_COLLECTION) },
    { L"Jedah (unplayable)", DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_COLLECTION,         ARRAYSIZE(VHUNT2_A_JEDAH_COLLECTION) },
};

constexpr auto VHUNT2_A_NUMUNIT = ARRAYSIZE(VHUNT2_A_UNITS);

#define VHUNT2_A_EXTRALOC VHUNT2_A_NUMUNIT

// We extend this array with data groveled from the VHUNT2e.txt extensible extras file, if any.
const stExtraDef VHUNT2_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

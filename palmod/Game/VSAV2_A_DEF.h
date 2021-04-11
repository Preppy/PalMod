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
    { L"LP Bulleta", 0x16c9c, 0x16cbc, indexCPS2_BBHood, 0x0 },
    { L"LP Critters", 0x16cbc, 0x16cdc, indexCPS2_BBHood, 0x01 },
    { L"LP Weapons", 0x16cdc, 0x16cfc, indexCPS2_BBHood, 0x02 },
    { L"LP Explosions ", 0x16cfc, 0x16d1c },
    { L"LP Select Portrait", 0x4117c, 0x4119c, indexCPS2_BBHood, 0x20 },
    { L"LP Win Portrait", 0x42bbc, 0x42c5c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x16d1c, 0x16d3c, indexCPS2_BBHood, 0x0 },
    { L"MP Critters", 0x16d3c, 0x16d5c, indexCPS2_BBHood, 0x01 },
    { L"MP Weapons", 0x16d5c, 0x16d7c, indexCPS2_BBHood, 0x02 },
    { L"MP Explosions ", 0x16d7c, 0x16d9c },
    { L"MP Select Portrait", 0x4137c, 0x4139c, indexCPS2_BBHood, 0x20 },
    { L"MP Win Portrait", 0x436fc, 0x4379c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x16d9c, 0x16dbc, indexCPS2_BBHood, 0x0 },
    { L"HP Critters", 0x16dbc, 0x16ddc, indexCPS2_BBHood, 0x01 },
    { L"HP Weapons", 0x16ddc, 0x16dfc, indexCPS2_BBHood, 0x02 },
    { L"HP Explosions ", 0x16dfc, 0x16e1c },
    { L"HP Select Portrait", 0x4157c, 0x4159c, indexCPS2_BBHood, 0x20 },
    { L"HP Win Portrait", 0x4423c, 0x442dc },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x16e1c, 0x16e3c, indexCPS2_BBHood, 0x0 },
    { L"LK Critters", 0x16e3c, 0x16e5c, indexCPS2_BBHood, 0x01 },
    { L"LK Weapons", 0x16e5c, 0x16e7c, indexCPS2_BBHood, 0x02 },
    { L"LK Explosions ", 0x16e7c, 0x16e9c },
    { L"LK Select Portrait", 0x4177c, 0x4179c, indexCPS2_BBHood, 0x20 },
    { L"LK Win Portrait", 0x44d7c, 0x44e1c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x16e9c, 0x16ebc, indexCPS2_BBHood, 0x0 },
    { L"MK Critters", 0x16ebc, 0x16edc, indexCPS2_BBHood, 0x01 },
    { L"MK Weapons", 0x16edc, 0x16efc, indexCPS2_BBHood, 0x02 },
    { L"MK Explosions ", 0x16efc, 0x16f1c },
    { L"MK Select Portrait", 0x4197c, 0x4199c, indexCPS2_BBHood, 0x20 },
    { L"MK Win Portrait", 0x458bc, 0x4595c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x16f1c, 0x16f3c, indexCPS2_BBHood, 0x0 },
    { L"HK Critters", 0x16f3c, 0x16f5c, indexCPS2_BBHood, 0x01 },
    { L"HK Weapons", 0x16f5c, 0x16f7c, indexCPS2_BBHood, 0x02 },
    { L"HK Explosions ", 0x16f7c, 0x16f9c },
    { L"HK Select Portrait", 0x41b7c, 0x41b9c, indexCPS2_BBHood, 0x20 },
    { L"HK Win Portrait", 0x463fc, 0x4649c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x16f9c, 0x16fbc, indexCPS2_BBHood, 0x0 },
    { L"PP Critters", 0x16fbc, 0x16fdc, indexCPS2_BBHood, 0x01 },
    { L"PP Weapons", 0x16fdc, 0x16ffc, indexCPS2_BBHood, 0x02 },
    { L"PP Explosions ", 0x16ffc, 0x1701c },
    { L"PP Select Portrait", 0x41d7c, 0x41d9c, indexCPS2_BBHood, 0x20 },
    { L"PP Win Portrait", 0x46f3c, 0x46fdc },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x1701c, 0x1703c, indexCPS2_BBHood, 0x0 },
    { L"KK Critters", 0x1703c, 0x1705c, indexCPS2_BBHood, 0x01 },
    { L"KK Weapons", 0x1705c, 0x1707c, indexCPS2_BBHood, 0x02 },
    { L"KK Explosions ", 0x1707c, 0x1709c },
    { L"KK Select Portrait", 0x41f7c, 0x41f9c, indexCPS2_BBHood, 0x20 },
    { L"KK Win Portrait", 0x47a7c, 0x47b1c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x1709c, 0x170bc, indexCPS2_BBHood, 0x0 },
    { L"AP Critters", 0x170bc, 0x170dc, indexCPS2_BBHood, 0x01 },
    { L"AP Weapons", 0x170dc, 0x170fc, indexCPS2_BBHood, 0x02 },
    { L"AP Explosions ", 0x170fc, 0x1711c },
    { L"AP Select Portrait", 0x4217c, 0x4219c, indexCPS2_BBHood, 0x20 },
    { L"AP Win Portrait", 0x485bc, 0x4865c },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x1711c, 0x1713c, indexCPS2_BBHood, 0x0 },
    { L"AK Critters", 0x1713c, 0x1715c, indexCPS2_BBHood, 0x01 },
    { L"AK Weapons", 0x1715c, 0x1717c, indexCPS2_BBHood, 0x02 },
    { L"AK Explosions ", 0x1717c, 0x1719c },
    { L"AK Select Portrait", 0x4237c, 0x4239c, indexCPS2_BBHood, 0x20 },
    { L"AK Win Portrait", 0x490fc, 0x4919c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x1719c, 0x171bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Teledash 1", 0x171fc, 0x1721c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Teledash 2", 0x171bc, 0x171dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Fireball", 0x171dc, 0x171fc, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LP Select Portrait", 0x4119c, 0x411bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LP Win Portrait", 0x42c5c, 0x42cfc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri ", 0x1721c, 0x1723c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Teledash 1", 0x1727c, 0x1729c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Teledash 2", 0x1723c, 0x1725c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Fireball", 0x1725c, 0x1727c, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MP Select Portrait", 0x4139c, 0x413bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MP Win Portrait", 0x4379c, 0x4383c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x1729c, 0x172bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Teledash 1", 0x172fc, 0x1731c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Teledash 2", 0x172bc, 0x172dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Fireball", 0x172dc, 0x172fc, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HP Select Portrait", 0x4159c, 0x415bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HP Win Portrait", 0x442dc, 0x4437c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x1731c, 0x1733c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Teledash 1", 0x1737c, 0x1739c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Teledash 2", 0x1733c, 0x1735c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Fireball", 0x1735c, 0x1737c, indexCPS2_Vamp_Demitri, 0x01 },
    { L"LK Select Portrait", 0x4179c, 0x417bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"LK Win Portrait", 0x44e1c, 0x44ebc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x1739c, 0x173bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Teledash 1", 0x173fc, 0x1741c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Teledash 2", 0x173bc, 0x173dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Fireball", 0x173dc, 0x173fc, indexCPS2_Vamp_Demitri, 0x01 },
    { L"MK Select Portrait", 0x4199c, 0x419bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"MK Win Portrait", 0x4595c, 0x459fc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x1741c, 0x1743c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Teledash 1", 0x1747c, 0x1749c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Teledash 2", 0x1743c, 0x1745c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Fireball", 0x1745c, 0x1747c, indexCPS2_Vamp_Demitri, 0x01 },
    { L"HK Select Portrait", 0x41b9c, 0x41bbc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"HK Win Portrait", 0x4649c, 0x4653c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x1749c, 0x174bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Teledash 1", 0x174fc, 0x1751c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Teledash 2", 0x174bc, 0x174dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Fireball", 0x174dc, 0x174fc, indexCPS2_Vamp_Demitri, 0x01 },
    { L"PP Select Portrait", 0x41d9c, 0x41dbc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"PP Win Portrait", 0x46fdc, 0x4707c },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x1751c, 0x1753c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Teledash 1", 0x1757c, 0x1759c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Teledash 2", 0x1753c, 0x1755c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Fireball", 0x1755c, 0x1757c, indexCPS2_Vamp_Demitri, 0x01 },
    { L"KK Select Portrait", 0x41f9c, 0x41fbc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"KK Win Portrait", 0x47b1c, 0x47bbc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x1759c, 0x175bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Teledash 1", 0x175fc, 0x1761c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Teledash 2", 0x175bc, 0x175dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Fireball", 0x175dc, 0x175fc, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AP Select Portrait", 0x4219c, 0x421bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AP Win Portrait", 0x4865c, 0x486fc },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x1761c, 0x1763c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Teledash 1", 0x1767c, 0x1769c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Teledash 2", 0x1763c, 0x1765c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Fireball", 0x1765c, 0x1767c, indexCPS2_Vamp_Demitri, 0x01 },
    { L"AK Select Portrait", 0x4239c, 0x423bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"AK Win Portrait", 0x4919c, 0x4923c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x1769c, 0x176bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"LP Intro/Outro", 0x176bc, 0x176dc },
    { L"LP 236P/41236KK/j.HP", 0x176dc, 0x176fc },
    { L"LP 236P/28K/Outro Flash", 0x176fc, 0x1771c },
    { L"LP Select Portrait", 0x411bc, 0x411dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LP Win Portrait", 0x42cfc, 0x42d9c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x1771c, 0x1773c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"MP Intro/Outro", 0x1773c, 0x1775c },
    { L"MP 236P/41236KK/j.HP", 0x1775c, 0x1777c },
    { L"MP 236P/28K/Outro Flash", 0x1777c, 0x1779c },
    { L"MP Select Portrait", 0x413bc, 0x413dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MP Win Portrait", 0x4383c, 0x438dc },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x1779c, 0x177bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"HP Intro/Outro", 0x177bc, 0x177dc },
    { L"HP 236P/41236KK/j.HP", 0x177dc, 0x177fc },
    { L"HP 236P/28K/Outro Flash", 0x177fc, 0x1781c },
    { L"HP Select Portrait", 0x415bc, 0x415dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HP Win Portrait", 0x4437c, 0x4441c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x1781c, 0x1783c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"LK Intro/Outro", 0x1783c, 0x1785c },
    { L"LK 236P/41236KK/j.HP", 0x1785c, 0x1787c },
    { L"LK 236P/28K/Outro Flash", 0x1787c, 0x1789c },
    { L"LK Select Portrait", 0x417bc, 0x417dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"LK Win Portrait", 0x44ebc, 0x44f5c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x1789c, 0x178bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"MK Intro/Outro", 0x178bc, 0x178dc },
    { L"MK 236P/41236KK/j.HP", 0x178dc, 0x178fc },
    { L"MK 236P/28K/Outro Flash", 0x178fc, 0x1791c },
    { L"MK Select Portrait", 0x419bc, 0x419dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"MK Win Portrait", 0x459fc, 0x45a9c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x1791c, 0x1793c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"HK Intro/Outro", 0x1793c, 0x1795c },
    { L"HK 236P/41236KK/j.HP", 0x1795c, 0x1797c },
    { L"HK 236P/28K/Outro Flash", 0x1797c, 0x1799c },
    { L"HK Select Portrait", 0x41bbc, 0x41bdc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"HK Win Portrait", 0x4653c, 0x465dc },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x1799c, 0x179bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"PP Intro/Outro", 0x179bc, 0x179dc },
    { L"PP 236P/41236KK/j.HP", 0x179dc, 0x179fc },
    { L"PP 236P/28K/Outro Flash", 0x179fc, 0x17a1c },
    { L"PP Select Portrait", 0x41dbc, 0x41ddc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"PP Win Portrait", 0x4707c, 0x4711c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x17a1c, 0x17a3c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"KK Intro/Outro", 0x17a3c, 0x17a5c },
    { L"KK 236P/41236KK/j.HP", 0x17a5c, 0x17a7c },
    { L"KK 236P/28K/Outro Flash", 0x17a7c, 0x17a9c },
    { L"KK Select Portrait", 0x41fbc, 0x41fdc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"KK Win Portrait", 0x47bbc, 0x47c5c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x17a9c, 0x17abc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"AP Intro/Outro", 0x17abc, 0x17adc },
    { L"AP 236P/41236KK/j.HP", 0x17adc, 0x17afc },
    { L"AP 236P/28K/Outro Flash", 0x17afc, 0x17b1c },
    { L"AP Select Portrait", 0x421bc, 0x421dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AP Win Portrait", 0x486fc, 0x4879c },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x17b1c, 0x17b3c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"AK Intro/Outro", 0x17b3c, 0x17b5c },
    { L"AK 236P/41236KK/j.HP", 0x17b5c, 0x17b7c },
    { L"AK 236P/28K/Outro Flash", 0x17b7c, 0x17b9c },
    { L"AK Select Portrait", 0x423bc, 0x423dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"AK Win Portrait", 0x4923c, 0x492dc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x17b9c, 0x17bbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"LP Electric Flash", 0x17bfc, 0x17c1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x17bbc, 0x17bdc },
    { L"LP Electricity", 0x17bdc, 0x17bfc },
    { L"LP Select Portrait", 0x411dc, 0x411fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"LP Win Portrait", 0x42d9c, 0x42e3c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x17c1c, 0x17c3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"MP Electric Flash", 0x17c7c, 0x17c9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x17c3c, 0x17c5c },
    { L"MP Electricity", 0x17c5c, 0x17c7c },
    { L"MP Select Portrait", 0x413dc, 0x413fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"MP Win Portrait", 0x438dc, 0x4397c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x17c9c, 0x17cbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"HP Electric Flash", 0x17cfc, 0x17d1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x17cbc, 0x17cdc },
    { L"HP Electricity", 0x17cdc, 0x17cfc },
    { L"HP Select Portrait", 0x415dc, 0x415fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"HP Win Portrait", 0x4441c, 0x444bc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x17d1c, 0x17d3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"LK Electric Flash", 0x17d7c, 0x17d9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x17d3c, 0x17d5c },
    { L"LK Electricity", 0x17d5c, 0x17d7c },
    { L"LK Select Portrait", 0x417dc, 0x417fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"LK Win Portrait", 0x44f5c, 0x44ffc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x17d9c, 0x17dbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"MK Electric Flash", 0x17dfc, 0x17e1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x17dbc, 0x17ddc },
    { L"MK Electricity", 0x17ddc, 0x17dfc },
    { L"MK Select Portrait", 0x419dc, 0x419fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"MK Win Portrait", 0x45a9c, 0x45b3c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x17e1c, 0x17e3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"HK Electric Flash", 0x17e7c, 0x17e9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x17e3c, 0x17e5c },
    { L"HK Electricity", 0x17e5c, 0x17e7c },
    { L"HK Select Portrait", 0x41bdc, 0x41bfc, indexCPS2_Vamp_Victor, 0x20 },
    { L"HK Win Portrait", 0x465dc, 0x4667c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x17e9c, 0x17ebc, indexCPS2_Vamp_Victor, 0x0 },
    { L"PP Electric Flash", 0x17efc, 0x17f1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x17ebc, 0x17edc },
    { L"PP Electricity", 0x17edc, 0x17efc },
    { L"PP Select Portrait", 0x41ddc, 0x41dfc, indexCPS2_Vamp_Victor, 0x20 },
    { L"PP Win Portrait", 0x4711c, 0x471bc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x17f1c, 0x17f3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"KK Electric Flash", 0x17f7c, 0x17f9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x17f3c, 0x17f5c },
    { L"KK Electricity", 0x17f5c, 0x17f7c },
    { L"KK Select Portrait", 0x41fdc, 0x41ffc, indexCPS2_Vamp_Victor, 0x20 },
    { L"KK Win Portrait", 0x47c5c, 0x47cfc },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x17f9c, 0x17fbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"AP Electric Flash", 0x17ffc, 0x1801c, indexCPS2_Vamp_Victor, 0x0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x17fbc, 0x17fdc },
    { L"AP Electricity", 0x17fdc, 0x17ffc },
    { L"AP Select Portrait", 0x421dc, 0x421fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"AP Win Portrait", 0x4879c, 0x4883c },
};

const sGame_PaletteDataset VSAV2_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x1801c, 0x1803c, indexCPS2_Vamp_Victor, 0x0 },
    { L"AK Electric Flash", 0x1807c, 0x1809c, indexCPS2_Vamp_Victor, 0x0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x1803c, 0x1805c },
    { L"AK Electricity", 0x1805c, 0x1807c },
    { L"AK Select Portrait", 0x423dc, 0x423fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"AK Win Portrait", 0x492dc, 0x4937c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x1809c, 0x180bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x180bc, 0x180dc },
    { L"LP Unused 1", 0x180dc, 0x180fc },
    { L"LP Unused 2", 0x180fc, 0x1811c },
    { L"LP Select Portrait", 0x411fc, 0x4121c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LP Win Portrait", 0x42e3c, 0x42edc },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x1811c, 0x1813c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x1813c, 0x1815c },
    { L"MP Unused 1", 0x1815c, 0x1817c },
    { L"MP Unused 2", 0x1817c, 0x1819c },
    { L"MP Select Portrait", 0x413fc, 0x4141c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MP Win Portrait", 0x4397c, 0x43a1c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x1819c, 0x181bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x181bc, 0x181dc },
    { L"HP Unused 1", 0x181dc, 0x181fc },
    { L"HP Unused 2", 0x181fc, 0x1821c },
    { L"HP Select Portrait", 0x415fc, 0x4161c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HP Win Portrait", 0x444bc, 0x4455c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x1821c, 0x1823c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x1823c, 0x1825c },
    { L"LK Unused 1", 0x1825c, 0x1827c },
    { L"LK Unused 2", 0x1827c, 0x1829c },
    { L"LK Select Portrait", 0x417fc, 0x4181c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"LK Win Portrait", 0x44ffc, 0x4509c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x1829c, 0x182bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x182bc, 0x182dc },
    { L"MK Unused 1", 0x182dc, 0x182fc },
    { L"MK Unused 2", 0x182fc, 0x1831c },
    { L"MK Select Portrait", 0x419fc, 0x41a1c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"MK Win Portrait", 0x45b3c, 0x45bdc },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x1831c, 0x1833c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x1833c, 0x1835c },
    { L"HK Unused 1", 0x1835c, 0x1837c },
    { L"HK Unused 2", 0x1837c, 0x1839c },
    { L"HK Select Portrait", 0x41bfc, 0x41c1c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"HK Win Portrait", 0x4667c, 0x4671c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x1839c, 0x183bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x183bc, 0x183dc },
    { L"PP Unused 1", 0x183dc, 0x183fc },
    { L"PP Unused 2", 0x183fc, 0x1841c },
    { L"PP Select Portrait", 0x41dfc, 0x41e1c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"PP Win Portrait", 0x471bc, 0x4725c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x1841c, 0x1843c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x1843c, 0x1845c },
    { L"KK Unused 1", 0x1845c, 0x1847c },
    { L"KK Unused 2", 0x1847c, 0x1849c },
    { L"KK Select Portrait", 0x41ffc, 0x4201c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"KK Win Portrait", 0x47cfc, 0x47d9c },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x1849c, 0x184bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x184bc, 0x184dc },
    { L"AP Unused 1", 0x184dc, 0x184fc },
    { L"AP Unused 2", 0x184fc, 0x1851c },
    { L"AP Select Portrait", 0x421fc, 0x4221c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AP Win Portrait", 0x4883c, 0x488dc },
};

const sGame_PaletteDataset VSAV2_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x1851c, 0x1853c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x1853c, 0x1855c },
    { L"AK Unused 1", 0x1855c, 0x1857c },
    { L"AK Unused 2", 0x1857c, 0x1859c },
    { L"AK Select Portrait", 0x423fc, 0x4241c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"AK Win Portrait", 0x4937c, 0x4941c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x1859c, 0x185bc, indexCPS2_Morrigan, 0x00 },
    { L"LP Idle sparkles/Raging demon", 0x185bc, 0x185dc, indexCPS2_Morrigan, 0x2 },
    { L"LP Bats", 0x185dc, 0x185fc, indexCPS2_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x185fc, 0x1861c },
    { L"LP Select Portrait", 0x4121c, 0x4123c, indexCPS2_Morrigan, 0x20 },
    { L"LP Win Portrait", 0x42edc, 0x42f7c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x1861c, 0x1863c, indexCPS2_Morrigan, 0x00 },
    { L"MP Idle sparkles/Raging demon", 0x1863c, 0x1865c, indexCPS2_Morrigan, 0x2 },
    { L"MP Bats", 0x1865c, 0x1867c, indexCPS2_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x1867c, 0x1869c },
    { L"MP Select Portrait", 0x4141c, 0x4143c, indexCPS2_Morrigan, 0x20 },
    { L"MP Win Portrait", 0x43a1c, 0x43abc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x1869c, 0x186bc, indexCPS2_Morrigan, 0x00 },
    { L"HP Idle sparkles/Raging demon", 0x186bc, 0x186dc, indexCPS2_Morrigan, 0x2 },
    { L"HP Bats", 0x186dc, 0x186fc, indexCPS2_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x186fc, 0x1871c },
    { L"HP Select Portrait", 0x4161c, 0x4163c, indexCPS2_Morrigan, 0x20 },
    { L"HP Win Portrait", 0x4455c, 0x445fc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x1871c, 0x1873c, indexCPS2_Morrigan, 0x00 },
    { L"LK Idle sparkles/Raging demon", 0x1873c, 0x1875c, indexCPS2_Morrigan, 0x2 },
    { L"LK Bats", 0x1875c, 0x1877c, indexCPS2_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x1877c, 0x1879c },
    { L"LK Select Portrait", 0x4181c, 0x4183c, indexCPS2_Morrigan, 0x20 },
    { L"LK Win Portrait", 0x4509c, 0x4513c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x1879c, 0x187bc, indexCPS2_Morrigan, 0x00 },
    { L"MK Idle sparkles/Raging demon", 0x187bc, 0x187dc, indexCPS2_Morrigan, 0x2 },
    { L"MK Bats", 0x187dc, 0x187fc, indexCPS2_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x187fc, 0x1881c },
    { L"MK Select Portrait", 0x41a1c, 0x41a3c, indexCPS2_Morrigan, 0x20 },
    { L"MK Win Portrait", 0x45bdc, 0x45c7c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x1881c, 0x1883c, indexCPS2_Morrigan, 0x00 },
    { L"HK Idle sparkles/Raging demon", 0x1883c, 0x1885c, indexCPS2_Morrigan, 0x2 },
    { L"HK Bats", 0x1885c, 0x1887c, indexCPS2_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x1887c, 0x1889c },
    { L"HK Select Portrait", 0x41c1c, 0x41c3c, indexCPS2_Morrigan, 0x20 },
    { L"HK Win Portrait", 0x4671c, 0x467bc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x1889c, 0x188bc, indexCPS2_Morrigan, 0x00 },
    { L"PP Idle sparkles/Raging demon", 0x188bc, 0x188dc, indexCPS2_Morrigan, 0x2 },
    { L"PP Bats", 0x188dc, 0x188fc, indexCPS2_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x188fc, 0x1891c },
    { L"PP Select Portrait", 0x41e1c, 0x41e3c, indexCPS2_Morrigan, 0x20 },
    { L"PP Win Portrait", 0x4725c, 0x472fc },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x1891c, 0x1893c, indexCPS2_Morrigan, 0x00 },
    { L"KK Idle sparkles/Raging demon", 0x1893c, 0x1895c, indexCPS2_Morrigan, 0x2 },
    { L"KK Bats", 0x1895c, 0x1897c, indexCPS2_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x1897c, 0x1899c },
    { L"KK Select Portrait", 0x4201c, 0x4203c, indexCPS2_Morrigan, 0x20 },
    { L"KK Win Portrait", 0x47d9c, 0x47e3c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x1899c, 0x189bc, indexCPS2_Morrigan, 0x00 },
    { L"AP Idle sparkles/Raging demon", 0x189bc, 0x189dc, indexCPS2_Morrigan, 0x2 },
    { L"AP Bats", 0x189dc, 0x189fc, indexCPS2_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x189fc, 0x18a1c },
    { L"AP Select Portrait", 0x4221c, 0x4223c, indexCPS2_Morrigan, 0x20 },
    { L"AP Win Portrait", 0x488dc, 0x4897c },
};

const sGame_PaletteDataset VSAV2_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x18a1c, 0x18a3c, indexCPS2_Morrigan, 0x00 },
    { L"AK Idle sparkles/Raging demon", 0x18a3c, 0x18a5c, indexCPS2_Morrigan, 0x2 },
    { L"AK Bats", 0x18a5c, 0x18a7c, indexCPS2_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x18a7c, 0x18a9c },
    { L"AK Select Portrait", 0x4241c, 0x4243c, indexCPS2_Morrigan, 0x20 },
    { L"AK Win Portrait", 0x4941c, 0x494bc },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x18a9c, 0x18abc, indexCPS2_Anakaris, 0x0 },
    { L"LP 2.HP/Mummies", 0x18adc, 0x18afc, indexCPS2_Anakaris, 0x2 },
    { L"LP 426KK/62KK Light", 0x18abc, 0x18adc, indexCPS2_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x18afc, 0x18b1c, indexCPS2_Anakaris, 0x3 },
    { L"LP Select Portrait", 0x4123c, 0x4125c, indexCPS2_Anakaris, 0x20 },
    { L"LP Win Portrait", 0x42f7c, 0x4301c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x18b1c, 0x18b3c, indexCPS2_Anakaris, 0x0 },
    { L"MP 2.HP/Mummies", 0x18b5c, 0x18b7c, indexCPS2_Anakaris, 0x2 },
    { L"MP 426KK/62KK Light", 0x18b3c, 0x18b5c, indexCPS2_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x18b7c, 0x18b9c, indexCPS2_Anakaris, 0x3 },
    { L"MP Select Portrait", 0x4143c, 0x4145c, indexCPS2_Anakaris, 0x20 },
    { L"MP Win Portrait", 0x43abc, 0x43b5c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x18b9c, 0x18bbc, indexCPS2_Anakaris, 0x0 },
    { L"HP 2.HP/Mummies", 0x18bdc, 0x18bfc, indexCPS2_Anakaris, 0x2 },
    { L"HP 426KK/62KK Light", 0x18bbc, 0x18bdc, indexCPS2_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x18bfc, 0x18c1c, indexCPS2_Anakaris, 0x3 },
    { L"HP Select Portrait", 0x4163c, 0x4165c, indexCPS2_Anakaris, 0x20 },
    { L"HP Win Portrait", 0x445fc, 0x4469c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x18c1c, 0x18c3c, indexCPS2_Anakaris, 0x0 },
    { L"LK 2.HP/Mummies", 0x18c5c, 0x18c7c, indexCPS2_Anakaris, 0x2 },
    { L"LK 426KK/62KK Light", 0x18c3c, 0x18c5c, indexCPS2_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x18c7c, 0x18c9c, indexCPS2_Anakaris, 0x3 },
    { L"LK Select Portrait", 0x4183c, 0x4185c, indexCPS2_Anakaris, 0x20 },
    { L"LK Win Portrait", 0x4513c, 0x451dc },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x18c9c, 0x18cbc, indexCPS2_Anakaris, 0x0 },
    { L"MK 2.HP/Mummies", 0x18cdc, 0x18cfc, indexCPS2_Anakaris, 0x2 },
    { L"MK 426KK/62KK Light", 0x18cbc, 0x18cdc, indexCPS2_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x18cfc, 0x18d1c, indexCPS2_Anakaris, 0x3 },
    { L"MK Select Portrait", 0x41a3c, 0x41a5c, indexCPS2_Anakaris, 0x20 },
    { L"MK Win Portrait", 0x45c7c, 0x45d1c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x18d1c, 0x18d3c, indexCPS2_Anakaris, 0x0 },
    { L"HK 2.HP/Mummies", 0x18d5c, 0x18d7c, indexCPS2_Anakaris, 0x2 },
    { L"HK 426KK/62KK Light", 0x18d3c, 0x18d5c, indexCPS2_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x18d7c, 0x18d9c, indexCPS2_Anakaris, 0x3 },
    { L"HK Select Portrait", 0x41c3c, 0x41c5c, indexCPS2_Anakaris, 0x20 },
    { L"HK Win Portrait", 0x467bc, 0x4685c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x18d9c, 0x18dbc, indexCPS2_Anakaris, 0x0 },
    { L"PP 2.HP/Mummies", 0x18ddc, 0x18dfc, indexCPS2_Anakaris, 0x2 },
    { L"PP 426KK/62KK Light", 0x18dbc, 0x18ddc, indexCPS2_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x18dfc, 0x18e1c, indexCPS2_Anakaris, 0x3 },
    { L"PP Select Portrait", 0x41e3c, 0x41e5c, indexCPS2_Anakaris, 0x20 },
    { L"PP Win Portrait", 0x472fc, 0x4739c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x18e1c, 0x18e3c, indexCPS2_Anakaris, 0x0 },
    { L"KK 2.HP/Mummies", 0x18e5c, 0x18e7c, indexCPS2_Anakaris, 0x2 },
    { L"KK 426KK/62KK Light", 0x18e3c, 0x18e5c, indexCPS2_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x18e7c, 0x18e9c, indexCPS2_Anakaris, 0x3 },
    { L"KK Select Portrait", 0x4203c, 0x4205c, indexCPS2_Anakaris, 0x20 },
    { L"KK Win Portrait", 0x47e3c, 0x47edc },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x18e9c, 0x18ebc, indexCPS2_Anakaris, 0x0 },
    { L"AP 2.HP/Mummies", 0x18edc, 0x18efc, indexCPS2_Anakaris, 0x2 },
    { L"AP 426KK/62KK Light", 0x18ebc, 0x18edc, indexCPS2_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x18efc, 0x18f1c, indexCPS2_Anakaris, 0x3 },
    { L"AP Select Portrait", 0x4223c, 0x4225c, indexCPS2_Anakaris, 0x20 },
    { L"AP Win Portrait", 0x4897c, 0x48a1c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x18f1c, 0x18f3c, indexCPS2_Anakaris, 0x0 },
    { L"AK 2.HP/Mummies", 0x18f5c, 0x18f7c, indexCPS2_Anakaris, 0x2 },
    { L"AK 426KK/62KK Light", 0x18f3c, 0x18f5c, indexCPS2_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x18f7c, 0x18f9c, indexCPS2_Anakaris, 0x3 },
    { L"AK Select Portrait", 0x4243c, 0x4245c, indexCPS2_Anakaris, 0x20 },
    { L"AK Win Portrait", 0x494bc, 0x4955c },
};

const sGame_PaletteDataset VSAV2_A_ANAKARIS_PALETTES_SHARED[] =
{
    { L"Anakaris Pharaoh Magic Orbs 2", 0x1b2e0 + 0x1603C, 0x1b320 + 0x1603C, indexCPS2_Anakaris, 0x0b, &pairNext2 },
    { L"Anakaris Pharaoh Asteroids",    0x1b320 + 0x1603C, 0x1b340 + 0x1603C, indexCPS2_Anakaris, 0x08 },
    { L"Anakaris Pharaoh Magic Orbs 4", 0x1b340 + 0x1603C, 0x1b360 + 0x1603C, indexCPS2_Anakaris, 0x0e },
    { L"Anakaris Pharaoh Girls/Mini Mummy LP",        0x1b360 + 0x1603C, 0x1b3a0 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MP",        0x1b3a0 + 0x1603C, 0x1b3e0 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HP",        0x1b3e0 + 0x1603C, 0x1b420 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy LK",        0x1b420 + 0x1603C, 0x1b460 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy MK",        0x1b460 + 0x1603C, 0x1b4a0 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy HK",        0x1b4a0 + 0x1603C, 0x1b4e0 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy PP",        0x1b4e0 + 0x1603C, 0x1b520 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy KK",        0x1b520 + 0x1603C, 0x1b560 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AP",        0x1b560 + 0x1603C, 0x1b5a0 + 0x1603C, indexCPS2_Anakaris, 0x09 },
    { L"Anakaris Pharaoh Girls/Mini Mummy AK",        0x1b5a0 + 0x1603C, 0x1b5e0 + 0x1603C, indexCPS2_Anakaris, 0x09 },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x18f9c, 0x18fbc, indexCPS2_Felicia, 0x0 },
    { L"LP Helpers/Mouse", 0x18fbc, 0x18fdc, indexCPS2_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x18fdc, 0x18ffc, indexCPS2_Felicia, 0x01 },
    { L"LP Unknown Extra", 0x18ffc, 0x1901c },
    { L"LP Select portrait", 0x4125c, 0x4127c, indexCPS2_Felicia, 0x20 },
    { L"LP Win Portrait", 0x4301c, 0x430bc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x1901c, 0x1903c, indexCPS2_Felicia, 0x0 },
    { L"MP Helpers/Mouse", 0x1903c, 0x1905c, indexCPS2_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x1905c, 0x1907c, indexCPS2_Felicia, 0x01 },
    { L"MP Unknown Extra", 0x1907c, 0x1909c },
    { L"MP Select Portrait", 0x4145c, 0x4147c, indexCPS2_Felicia, 0x20 },
    { L"MP Win Portrait", 0x43b5c, 0x43bfc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x1909c, 0x190bc, indexCPS2_Felicia, 0x0 },
    { L"HP Helpers/Mouse", 0x190bc, 0x190dc, indexCPS2_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x190dc, 0x190fc, indexCPS2_Felicia, 0x01 },
    { L"HP Unknown Extra", 0x190fc, 0x1911c },
    { L"HP Select Portrait", 0x4165c, 0x4167c, indexCPS2_Felicia, 0x20 },
    { L"HP Win Portrait", 0x4469c, 0x4473c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x1911c, 0x1913c, indexCPS2_Felicia, 0x0 },
    { L"LK Helpers/Mouse", 0x1913c, 0x1915c, indexCPS2_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x1915c, 0x1917c, indexCPS2_Felicia, 0x01},
    { L"LK Unknown Extra", 0x1917c, 0x1919c },
    { L"LK Select Portrait", 0x4185c, 0x4187c, indexCPS2_Felicia, 0x20 },
    { L"LK Win Portrait", 0x451dc, 0x4527c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x1919c, 0x191bc, indexCPS2_Felicia, 0x0 },
    { L"MK Helpers/Mouse", 0x191bc, 0x191dc, indexCPS2_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x191dc, 0x191fc, indexCPS2_Felicia, 0x01 },
    { L"MK Unknown Extra", 0x191fc, 0x1921c },
    { L"MK Select Portrait", 0x41a5c, 0x41a7c, indexCPS2_Felicia, 0x20 },
    { L"MK Win Portrait", 0x45d1c, 0x45dbc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x1921c, 0x1923c, indexCPS2_Felicia, 0x0 },
    { L"HK Helpers/Mouse", 0x1923c, 0x1925c, indexCPS2_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x1925c, 0x1927c, indexCPS2_Felicia, 0x01 },
    { L"HK Unknown Extra", 0x1927c, 0x1929c },
    { L"HK Select Portrait", 0x41c5c, 0x41c7c, indexCPS2_Felicia, 0x20 },
    { L"HK Win Portrait", 0x4685c, 0x468fc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x1929c, 0x192bc, indexCPS2_Felicia, 0x0 },
    { L"PP Helpers/Mouse", 0x192bc, 0x192dc, indexCPS2_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x192dc, 0x192fc, indexCPS2_Felicia, 0x01 },
    { L"PP Unknown Extra", 0x192fc, 0x1931c },
    { L"PP Select Portrait", 0x41e5c, 0x41e7c, indexCPS2_Felicia, 0x20 },
    { L"PP Win Portrait", 0x4739c, 0x4743c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x1931c, 0x1933c, indexCPS2_Felicia, 0x0 },
    { L"KK Helpers/Mouse", 0x1933c, 0x1935c, indexCPS2_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x1935c, 0x1937c, indexCPS2_Felicia, 0x01 },
    { L"KK Unknown Extra", 0x1937c, 0x1939c },
    { L"KK Select Portrait", 0x4205c, 0x4207c, indexCPS2_Felicia, 0x20 },
    { L"KK Win Portrait", 0x47edc, 0x47f7c },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x1939c, 0x193bc, indexCPS2_Felicia, 0x0 },
    { L"AP Helpers/Mouse", 0x193bc, 0x193dc, indexCPS2_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x193dc, 0x193fc, indexCPS2_Felicia, 0x01 },
    { L"AP Unknown Extra", 0x193fc, 0x1941c },
    { L"AP Select Portrait", 0x4225c, 0x4227c, indexCPS2_Felicia, 0x20 },
    { L"AP Win Portrait", 0x48a1c, 0x48abc },
};

const sGame_PaletteDataset VSAV2_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x1941c, 0x1943c, indexCPS2_Felicia, 0x0 },
    { L"AK Helpers/Mouse", 0x1943c, 0x1945c, indexCPS2_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x1945c, 0x1947c, indexCPS2_Felicia, 0x01 },
    { L"AK Unknown Extra", 0x1947c, 0x1949c },
    { L"AK Select Portrait", 0x4245c, 0x4247c, indexCPS2_Felicia, 0x20 },
    { L"AK Win Portrait", 0x4955c, 0x495fc },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x1949c, 0x194bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x194dc, 0x194fc },
    { L"LP 41236KK", 0x194bc, 0x194dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Unknown Extra", 0x194fc, 0x1951c },
    { L"LP Select Portrait", 0x4127c, 0x4129c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LP Win Portrait", 0x430bc, 0x4315c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x1951c, 0x1953c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1955c, 0x1957c },
    { L"MP 41236KK", 0x1953c, 0x1955c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Unknown Extra", 0x1957c, 0x1959c },
    { L"MP Select Portrait", 0x4147c, 0x4149c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MP Win Portrait", 0x43bfc, 0x43c9c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x1959c, 0x195bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x195dc, 0x195fc },
    { L"HP 41236KK", 0x195bc, 0x195dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Unknown Extra", 0x195fc, 0x1961c },
    { L"HP Select Portrait", 0x4167c, 0x4169c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HP Win Portrait", 0x4473c, 0x447dc },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x1961c, 0x1963c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1965c, 0x1967c },
    { L"LK 41236KK", 0x1963c, 0x1965c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Unknown Extra", 0x1967c, 0x1969c },
    { L"LK Select Portrait", 0x4187c, 0x4189c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"LK Win Portrait", 0x4527c, 0x4531c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x1969c, 0x196bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x196dc, 0x196fc },
    { L"MK 41236KK", 0x196bc, 0x196dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Unknown Extra", 0x196fc, 0x1971c },
    { L"MK Select Portrait", 0x41a7c, 0x41a9c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"MK Win Portrait", 0x45dbc, 0x45e5c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x1971c, 0x1973c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1975c, 0x1977c },
    { L"HK 41236KK", 0x1973c, 0x1975c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Unknown Extra", 0x1977c, 0x1979c },
    { L"HK Select Portrait", 0x41c7c, 0x41c9c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"HK Win Portrait", 0x468fc, 0x4699c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x1979c, 0x197bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x197dc, 0x197fc },
    { L"PP 41236KK", 0x197bc, 0x197dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Unknown Extra", 0x197fc, 0x1981c },
    { L"PP Select Portrait", 0x41e7c, 0x41e9c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"PP Win Portrait", 0x4743c, 0x474dc },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x1981c, 0x1983c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1985c, 0x1987c },
    { L"KK 41236KK", 0x1983c, 0x1985c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Unknown Extra", 0x1987c, 0x1989c },
    { L"KK Select Portrait", 0x4207c, 0x4209c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"KK Win Portrait", 0x47f7c, 0x4801c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x1989c, 0x198bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x198dc, 0x198fc },
    { L"AP 41236KK", 0x198bc, 0x198dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Unknown Extra", 0x198fc, 0x1991c },
    { L"AP Select Portrait", 0x4227c, 0x4229c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AP Win Portrait", 0x48abc, 0x48b5c },
};

const sGame_PaletteDataset VSAV2_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x1991c, 0x1993c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks", 0x1995c, 0x1997c },
    { L"AK 41236KK", 0x1993c, 0x1995c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Unknown Extra", 0x1997c, 0x1999c },
    { L"AK Select Portrait", 0x4247c, 0x4249c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"AK Win Portrait", 0x495fc, 0x4969c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x1999c, 0x199bc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"LP Water/s.MK/j.MP", 0x199bc, 0x199dc },
    { L"LP Poison Cloud ", 0x199fc, 0x19a1c },
    { L"LP Mach Crab (not full pal)", 0x199dc, 0x199fc },
    { L"LP Select Portrait", 0x4129c, 0x412bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LP Win Portrait", 0x4315c, 0x431fc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x19a1c, 0x19a3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"MP Water/s.MK/j.MP", 0x19a3c, 0x19a5c },
    { L"MP Poison Cloud ", 0x19a7c, 0x19a9c },
    { L"MP Mach Crab (not full pal)", 0x19a5c, 0x19a7c },
    { L"MP Select Portrait", 0x4149c, 0x414bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MP Win Portrait", 0x43c9c, 0x43d3c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x19a9c, 0x19abc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"HP Water/s.MK/j.MP", 0x19abc, 0x19adc },
    { L"HP Poison Cloud ", 0x19afc, 0x19b1c },
    { L"HP Mach Crab (not full pal)", 0x19adc, 0x19afc },
    { L"HP Select Portrait", 0x4169c, 0x416bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HP Win Portrait", 0x447dc, 0x4487c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x19b1c, 0x19b3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"LK Water/s.MK/j.MP", 0x19b3c, 0x19b5c },
    { L"LK Poison Cloud ", 0x19b7c, 0x19b9c },
    { L"LK Mach Crab (not full pal)", 0x19b5c, 0x19b7c },
    { L"LK Select Portrait", 0x4189c, 0x418bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"LK Win Portrait", 0x4531c, 0x453bc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x19b9c, 0x19bbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"MK Water/s.MK/j.MP", 0x19bbc, 0x19bdc },
    { L"MK Poison Cloud ", 0x19bfc, 0x19c1c },
    { L"MK Mach Crab (not full pal)", 0x19bdc, 0x19bfc },
    { L"MK Select Portrait", 0x41a9c, 0x41abc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"MK Win Portrait", 0x45e5c, 0x45efc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x19c1c, 0x19c3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"HK Water/s.MK/j.MP", 0x19c3c, 0x19c5c },
    { L"HK Poison Cloud ", 0x19c7c, 0x19c9c },
    { L"HK Mach Crab (not full pal)", 0x19c5c, 0x19c7c },
    { L"HK Select Portrait", 0x41c9c, 0x41cbc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"HK Win Portrait", 0x4699c, 0x46a3c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x19c9c, 0x19cbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"PP Poison Cloud ", 0x19cfc, 0x19d1c },
    { L"PP Water/s.MK/j.MP", 0x19cbc, 0x19cdc },
    { L"PP Mach Crab (not full pal)", 0x19cdc, 0x19cfc },
    { L"PP Select Portrait", 0x41e9c, 0x41ebc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"PP Win Portrait", 0x474dc, 0x4757c },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x19d1c, 0x19d3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"KK Water/s.MK/j.MP", 0x19d3c, 0x19d5c },
    { L"KK Poison Cloud ", 0x19d7c, 0x19d9c },
    { L"KK Mach Crab (not full pal)", 0x19d5c, 0x19d7c },
    { L"KK Select Portrait", 0x4209c, 0x420bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"KK Win Portrait", 0x4801c, 0x480bc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x19d9c, 0x19dbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"AP Water/s.MK/j.MP", 0x19dbc, 0x19ddc },
    { L"AP Poison Cloud ", 0x19dfc, 0x19e1c },
    { L"AP Mach Crab (not full pal)", 0x19ddc, 0x19dfc },
    { L"AP Select Portrait", 0x4229c, 0x422bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AP Win Portrait", 0x48b5c, 0x48bfc },
};

const sGame_PaletteDataset VSAV2_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x19e1c, 0x19e3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"AK Water/s.MK/j.MP", 0x19e3c, 0x19e5c },
    { L"AK Poison Cloud ", 0x19e7c, 0x19e9c },
    { L"AK Mach Crab (not full pal)", 0x19e5c, 0x19e7c },
    { L"AK Select Portrait", 0x4249c, 0x424bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"AK Win Portrait", 0x4969c, 0x4973c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x19e9c, 0x19ebc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"LP Ice Extras", 0x19efc, 0x19f1c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x19ebc, 0x19edc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x19edc, 0x19efc, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LP Select Portrait", 0x412bc, 0x412dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LP Win Portrait", 0x431fc, 0x4329c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x19f1c, 0x19f3c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"MP Ice Extras", 0x19f7c, 0x19f9c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x19f3c, 0x19f5c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x19f5c, 0x19f7c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MP Select Portrait", 0x414bc, 0x414dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MP Win Portrait", 0x43d3c, 0x43ddc },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x19f9c, 0x19fbc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"HP Ice Extras", 0x19ffc, 0x1a01c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x19fbc, 0x19fdc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x19fdc, 0x19ffc, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HP Select Portrait", 0x416bc, 0x416dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HP Win Portrait", 0x4487c, 0x4491c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x1a01c, 0x1a03c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"LK Ice Extras", 0x1a07c, 0x1a09c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x1a03c, 0x1a05c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x1a05c, 0x1a07c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"LK Select Portrait", 0x418bc, 0x418dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"LK Win Portrait", 0x453bc, 0x4545c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x1a09c, 0x1a0bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"MK Ice Extras", 0x1a0fc, 0x1a11c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x1a0bc, 0x1a0dc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x1a0dc, 0x1a0fc, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"MK Select Portrait", 0x41abc, 0x41adc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"MK Win Portrait", 0x45efc, 0x45f9c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x1a11c, 0x1a13c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"HK Ice Extras", 0x1a17c, 0x1a19c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x1a13c, 0x1a15c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x1a15c, 0x1a17c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"HK Select Portrait", 0x3fabc, 0x3fadc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"HK Win Portrait", 0x46a3c, 0x46adc },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x1a19c, 0x1a1bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"PP Ice Extras", 0x1a1fc, 0x1a21c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x1a1bc, 0x1a1dc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x1a1dc, 0x1a1fc, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"PP Select Portrait", 0x41ebc, 0x41edc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"PP Win Portrait", 0x4757c, 0x4761c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x1a21c, 0x1a23c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"KK Ice Extras", 0x1a27c, 0x1a29c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x1a23c, 0x1a25c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x1a25c, 0x1a27c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"KK Select Portrait", 0x420bc, 0x420dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"KK Win Portrait", 0x480bc, 0x4815c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x1a29c, 0x1a2bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"AP Ice Extras", 0x1a2fc, 0x1a31c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x1a2bc, 0x1a2dc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x1a2dc, 0x1a2fc, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AP Select Portrait", 0x422bc, 0x422dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AP Win Portrait", 0x48bfc, 0x48c9c },
};

const sGame_PaletteDataset VSAV2_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x1a31c, 0x1a33c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"AK Ice Extras", 0x1a37c, 0x1a39c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x1a33c, 0x1a35c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x1a35c, 0x1a37c, indexCPS2_Vamp_Sasquatch, 0x03 },
    { L"AK Select Portrait", 0x424bc, 0x424dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"AK Win Portrait", 0x4973c, 0x497dc },
};

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_1[] =
{
    { L"Alt Zabel", 0x1a79c, 0x1a7bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 64PP/63214KK/intro/winpose", 0x1a7bc, 0x1a7dc },
    { L"Alt Zabel Unused 1", 0x1a7dc, 0x1a7fc },
    { L"Alt Zabel Unused 2", 0x1a7fc, 0x1a81c },
};

const sGame_PaletteDataset VSAV2_A_ALTZABEL_PALETTES_2[] =
{
    { L"Alt Zabel 2 ", 0x1a81c, 0x1a83c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 2 64PP/63214KK/intro/winpos", 0x1a83c, 0x1a85c },
    { L"Alt Zabel 2 Unused 1", 0x1a85c, 0x1a87c },
    { L"Alt Zabel 2 Unused 2", 0x1a87c, 0x1a89c },
};


// BUGBUG: TODO: The "Intro/ES 412PP  " entries

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x1a89c, 0x1a8bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"LP Wings/Honey", 0x1a8bc, 0x1a8dc, indexCPS2_Vamp_QBee, 0x1 },
    { L"LP Egg", 0x1a8dc, 0x1a8fc },
    { L"LP Bees", 0x1a8fc, 0x1a91c, indexCPS2_Vamp_QBee, 0x0 },
    { L"LP Select Portrait", 0x412fc, 0x4131c, indexCPS2_Vamp_QBee, 0x20 },
    { L"LP Win Portrait", 0x4333c, 0x433dc },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x1a91c, 0x1a93c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"MP Wings/Honey", 0x1a93c, 0x1a95c, indexCPS2_Vamp_QBee, 0x1 },
    { L"MP Egg", 0x1a95c, 0x1a97c },
    { L"MP Bees", 0x1a97c, 0x1a99c, indexCPS2_Vamp_QBee, 0x0 },
    { L"MP Select Portrait", 0x414fc, 0x4151c, indexCPS2_Vamp_QBee, 0x20 },
    { L"MP Win Portrait", 0x43e7c, 0x43f1c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x1a99c, 0x1a9bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"HP Wings/Honey", 0x1a9bc, 0x1a9dc, indexCPS2_Vamp_QBee, 0x1 },
    { L"HP Egg", 0x1a9dc, 0x1a9fc },
    { L"HP Bees", 0x1a9fc, 0x1aa1c, indexCPS2_Vamp_QBee, 0x0 },
    { L"HP Select Portrait", 0x416fc, 0x4171c, indexCPS2_Vamp_QBee, 0x20 },
    { L"HP Win Portrait", 0x449bc, 0x44a5c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x1aa1c, 0x1aa3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"LK Wings/Honey", 0x1aa3c, 0x1aa5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"LK Egg", 0x1aa5c, 0x1aa7c },
    { L"LK Bees", 0x1aa7c, 0x1aa9c, indexCPS2_Vamp_QBee, 0x0 },
    { L"LK Select Portrait", 0x418fc, 0x4191c, indexCPS2_Vamp_QBee, 0x20 },
    { L"LK Win Portrait", 0x454fc, 0x4559c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x1aa9c, 0x1aabc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"MK Wings/Honey", 0x1aabc, 0x1aadc, indexCPS2_Vamp_QBee, 0x1 },
    { L"MK Egg", 0x1aadc, 0x1aafc },
    { L"MK Bees", 0x1aafc, 0x1ab1c, indexCPS2_Vamp_QBee, 0x0 },
    { L"MK Select Portrait", 0x41afc, 0x41b1c, indexCPS2_Vamp_QBee, 0x20 },
    { L"MK Win Portrait", 0x4603c, 0x460dc },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x1ab1c, 0x1ab3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"HK Wings/Honey", 0x1ab3c, 0x1ab5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"HK Egg", 0x1ab5c, 0x1ab7c },
    { L"HK Bees", 0x1ab7c, 0x1ab9c, indexCPS2_Vamp_QBee, 0x0 },
    { L"HK Select Portrait", 0x41cfc, 0x41d1c, indexCPS2_Vamp_QBee, 0x20 },
    { L"HK Win Portrait", 0x46b7c, 0x46c1c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x1ab9c, 0x1abbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"PP Wings/Honey", 0x1abbc, 0x1abdc, indexCPS2_Vamp_QBee, 0x1 },
    { L"PP Egg", 0x1abdc, 0x1abfc },
    { L"PP Bees", 0x1abfc, 0x1ac1c, indexCPS2_Vamp_QBee, 0x0 },
    { L"PP Select Portrait", 0x41efc, 0x41f1c, indexCPS2_Vamp_QBee, 0x20 },
    { L"PP Win Portrait", 0x476bc, 0x4775c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1ac1c, 0x1ac3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"KK Wings/Honey", 0x1ac3c, 0x1ac5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"KK Egg", 0x1ac5c, 0x1ac7c },
    { L"KK Bees", 0x1ac7c, 0x1ac9c, indexCPS2_Vamp_QBee, 0x0 },
    { L"KK Select Portrait", 0x420fc, 0x4211c, indexCPS2_Vamp_QBee, 0x20 },
    { L"KK Win Portrait", 0x481fc, 0x4829c },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x1ac9c, 0x1acbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"AP Wings/Honey", 0x1acbc, 0x1acdc, indexCPS2_Vamp_QBee, 0x1 },
    { L"AP Egg", 0x1acdc, 0x1acfc },
    { L"AP Bees", 0x1acfc, 0x1ad1c, indexCPS2_Vamp_QBee, 0x0 },
    { L"AP Select Portrait", 0x422fc, 0x4231c, indexCPS2_Vamp_QBee, 0x20 },
    { L"AP Win Portrait", 0x48d3c, 0x48ddc },
};

const sGame_PaletteDataset VSAV2_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1ad1c, 0x1ad3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"AK Wings/Honey", 0x1ad3c, 0x1ad5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"AK Egg", 0x1ad5c, 0x1ad7c },
    { L"AK Bees", 0x1ad7c, 0x1ad9c, indexCPS2_Vamp_QBee, 0x0 },
    { L"AK Select Portrait", 0x424fc, 0x4251c, indexCPS2_Vamp_QBee, 0x20 },
    { L"AK Win Portrait", 0x4987c, 0x4991c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x1ad9c, 0x1adbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"LP Lin-Lin", 0x1adbc, 0x1addc },
    { L"LP Dust, Weapons", 0x1addc, 0x1adfc },
    { L"LP Unknown Extra", 0x1adfc, 0x1ae1c },
    { L"LP Select Portrait", 0x4131c, 0x4133c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LP Win Portrait", 0x433dc, 0x4347c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1ae1c, 0x1ae3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"MP Lin-Lin", 0x1ae3c, 0x1ae5c },
    { L"MP Dust, Weapons", 0x1ae5c, 0x1ae7c },
    { L"MP Unknown Extra", 0x1ae7c, 0x1ae9c },
    { L"MP Select Portrait", 0x4151c, 0x4153c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MP Win Portrait", 0x43f1c, 0x43fbc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x1ae9c, 0x1aebc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"HP Lin-Lin", 0x1aebc, 0x1aedc },
    { L"HP Dust, Weapons", 0x1aedc, 0x1aefc },
    { L"HP Unknown Extra", 0x1aefc, 0x1af1c },
    { L"HP Select Portrait", 0x4171c, 0x4173c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HP Win Portrait", 0x44a5c, 0x44afc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1af1c, 0x1af3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"LK Lin-Lin", 0x1af3c, 0x1af5c },
    { L"LK Dust, Weapons", 0x1af5c, 0x1af7c },
    { L"LK Unknown Extra", 0x1af7c, 0x1af9c },
    { L"LK Select Portrait", 0x4191c, 0x4193c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"LK Win Portrait", 0x4559c, 0x4563c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x1af9c, 0x1afbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"MK Lin-Lin", 0x1afbc, 0x1afdc },
    { L"MK Dust, Weapons", 0x1afdc, 0x1affc },
    { L"MK Unknown Extra", 0x1affc, 0x1b01c },
    { L"MK Select Portrait", 0x41b1c, 0x41b3c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"MK Win Portrait", 0x460dc, 0x4617c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1b01c, 0x1b03c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"HK Lin-Lin", 0x1b03c, 0x1b05c },
    { L"HK Dust, Weapons", 0x1b05c, 0x1b07c },
    { L"HK Unknown Extra", 0x1b07c, 0x1b09c },
    { L"HK Select Portrait", 0x41d1c, 0x41d3c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"HK Win Portrait", 0x46c1c, 0x46cbc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x1b09c, 0x1b0bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"PP Lin-Lin", 0x1b0bc, 0x1b0dc },
    { L"PP Dust, Weapons", 0x1b0dc, 0x1b0fc },
    { L"PP Unknown Extra", 0x1b0fc, 0x1b11c },
    { L"PP Select Portrait", 0x41f1c, 0x41f3c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"PP Win Portrait", 0x4775c, 0x477fc },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1b11c, 0x1b13c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"KK Lin-Lin", 0x1b13c, 0x1b15c },
    { L"KK Dust, Weapons", 0x1b15c, 0x1b17c },
    { L"KK Unknown Extra", 0x1b17c, 0x1b19c },
    { L"KK Select Portrait", 0x4211c, 0x4213c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"KK Win Portrait", 0x4829c, 0x4833c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x1b19c, 0x1b1bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"AP Lin-Lin", 0x1b1bc, 0x1b1dc },
    { L"AP Dust, Weapons", 0x1b1dc, 0x1b1fc },
    { L"AP Unknown Extra", 0x1b1fc, 0x1b21c },
    { L"AP Select Portrait", 0x4231c, 0x4233c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AP Win Portrait", 0x48ddc, 0x48e7c },
};

const sGame_PaletteDataset VSAV2_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1b21c, 0x1b23c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"AK Lin-Lin", 0x1b23c, 0x1b25c },
    { L"AK Dust, Weapons", 0x1b25c, 0x1b27c },
    { L"AK Unknown Extra", 0x1b27c, 0x1b29c },
    { L"AK Select Portrait", 0x4251c, 0x4253c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"AK Win Portrait", 0x4991c, 0x499bc },
};


///// real lilith

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x1b29c, 0x1b2bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"LP Hearts", 0x1b2bc, 0x1b2dc },
    { L"LP Luminous Illusion/62KKK bats", 0x1b2dc, 0x1b2fc },
    { L"LP Sparkles", 0x1b2fc, 0x1b31c },
    { L"LP Select Portrait", 0x4133c, 0x4135c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LP Win Portrait", 0x4347c, 0x4351c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1b31c, 0x1b33c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"MP Hearts", 0x1b33c, 0x1b35c },
    { L"MP Luminous Illusion/62KKK bats", 0x1b35c, 0x1b37c },
    { L"MP Sparkles", 0x1b37c, 0x1b39c },
    { L"MP Select Portrait", 0x4153c, 0x4155c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MP Win Portrait", 0x43fbc, 0x4405c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x1b39c, 0x1b3bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"HP Hearts", 0x1b3bc, 0x1b3dc },
    { L"HP Luminous Illusion/62KKK bats", 0x1b3dc, 0x1b3fc },
    { L"HP Sparkles", 0x1b3fc, 0x1b41c },
    { L"HP Select Portrait", 0x4173c, 0x4175c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HP Win Portrait", 0x44afc, 0x44b9c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1b41c, 0x1b43c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"LK Hearts", 0x1b43c, 0x1b45c },
    { L"LK Luminous Illusion/62KKK bats", 0x1b45c, 0x1b47c },
    { L"LK Sparkles", 0x1b47c, 0x1b49c },
    { L"LK Select Portrait", 0x4193c, 0x4195c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"LK Win Portrait", 0x4563c, 0x456dc },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x1b49c, 0x1b4bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"MK Hearts", 0x1b4bc, 0x1b4dc },
    { L"MK Luminous Illusion/62KKK bats", 0x1b4dc, 0x1b4fc },
    { L"MK Sparkles", 0x1b4fc, 0x1b51c },
    { L"MK Select Portrait", 0x41b3c, 0x41b5c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"MK Win Portrait", 0x4617c, 0x4621c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1b51c, 0x1b53c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"HK Hearts", 0x1b53c, 0x1b55c },
    { L"HK Luminous Illusion/62KKK bats", 0x1b55c, 0x1b57c },
    { L"HK Sparkles", 0x1b57c, 0x1b59c },
    { L"HK Select Portrait", 0x41d3c, 0x41d5c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"HK Win Portrait", 0x46cbc, 0x46d5c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x1b59c, 0x1b5bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"PP Hearts", 0x1b5bc, 0x1b5dc },
    { L"PP Luminous Illusion/62KKK bats", 0x1b5dc, 0x1b5fc },
    { L"PP Sparkles", 0x1b5fc, 0x1b61c },
    { L"PP Select Portrait", 0x41f3c, 0x41f5c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"PP Win Portrait", 0x477fc, 0x4789c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x1b61c, 0x1b63c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"KK Hearts", 0x1b63c, 0x1b65c },
    { L"KK Luminous Illusion/62KKK bats", 0x1b65c, 0x1b67c },
    { L"KK Sparkles", 0x1b67c, 0x1b69c },
    { L"KK Select Portrait", 0x4213c, 0x4215c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"KK Win Portrait", 0x4833c, 0x483dc },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x1b69c, 0x1b6bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"AP Hearts", 0x1b6bc, 0x1b6dc },
    { L"AP Luminous Illusion/62KKK bats", 0x1b6dc, 0x1b6fc },
    { L"AP Sparkles", 0x1b6fc, 0x1b71c },
    { L"AP Select Portrait", 0x4233c, 0x4235c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AP Win Portrait", 0x48e7c, 0x48f1c },
};

const sGame_PaletteDataset VSAV2_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x1b71c, 0x1b73c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"AK Hearts", 0x1b73c, 0x1b75c },
    { L"AK Luminous Illusion/62KKK bats", 0x1b75c, 0x1b77c },
    { L"AK Sparkles", 0x1b77c, 0x1b79c },
    { L"AK Select Portrait", 0x4253c, 0x4255c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"AK Win Portrait", 0x499bc, 0x49a5c },
};



const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x1b79c, 0x1b7bc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LP Prova di Servo", 0x1b7bc, 0x1b7dc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x1b7dc, 0x1b7fc, indexCPS2_Vamp_Jedah, 1 },
    { L"LP Intro", 0x1b7fc, 0x1b81c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LP Select Portrait", 0x4135c, 0x4137c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LP Win Portrait", 0x4351c, 0x435bc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x1b81c, 0x1b83c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MP Prova di Servo", 0x1b83c, 0x1b85c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x1b85c, 0x1b87c, indexCPS2_Vamp_Jedah, 1 },
    { L"MP Intro", 0x1b87c, 0x1b89c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MP Select Portrait", 0x4155c, 0x4157c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MP Win Portrait", 0x4405c, 0x440fc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x1b89c, 0x1b8bc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HP Prova di Servo", 0x1b8bc, 0x1b8dc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x1b8dc, 0x1b8fc, indexCPS2_Vamp_Jedah, 1 },
    { L"HP Intro", 0x1b8fc, 0x1b91c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HP Select Portrait", 0x4175c, 0x4177c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HP Win Portrait", 0x44b9c, 0x44c3c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_LK[] =
{
	{ L"LK Jedah", 0x1b91c, 0x1b93c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LK Prova di Servo", 0x1b93c, 0x1b95c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x1b95c, 0x1b97c, indexCPS2_Vamp_Jedah, 1 },
    { L"LK Intro", 0x1b97c, 0x1b99c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"LK Select Portrait", 0x4195c, 0x4197c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"LK Win Portrait", 0x456dc, 0x4577c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x1b99c, 0x1b9bc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MK Prova di Servo", 0x1b9bc, 0x1b9dc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x1b9dc, 0x1b9fc, indexCPS2_Vamp_Jedah, 1 },
    { L"MK Intro", 0x1b9fc, 0x1ba1c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"MK Select Portrait", 0x41b5c, 0x41b7c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"MK Win Portrait", 0x4621c, 0x462bc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x1ba1c, 0x1ba3c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HK Prova di Servo", 0x1ba3c, 0x1ba5c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x1ba5c, 0x1ba7c, indexCPS2_Vamp_Jedah, 1 },
    { L"HK Intro", 0x1ba7c, 0x1ba9c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"HK Select Portrait", 0x41d5c, 0x41d7c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"HK Win Portrait", 0x46d5c, 0x46dfc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x1ba9c, 0x1babc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"PP Prova di Servo", 0x1babc, 0x1badc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x1badc, 0x1bafc, indexCPS2_Vamp_Jedah, 1 },
    { L"PP Intro", 0x1bafc, 0x1bb1c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"PP Select Portrait", 0x41f5c, 0x41f7c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"PP Win Portrait", 0x4789c, 0x4793c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x1bb1c, 0x1bb3c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"KK Prova di Servo", 0x1bb3c, 0x1bb5c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x1bb5c, 0x1bb7c, indexCPS2_Vamp_Jedah, 1 },
    { L"KK Intro", 0x1bb7c, 0x1bb9c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"KK Select Portrait", 0x4215c, 0x4217c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"KK Win Portrait", 0x483dc, 0x4847c },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x1bb9c, 0x1bbbc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AP Prova di Servo", 0x1bbbc, 0x1bbdc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x1bbdc, 0x1bbfc, indexCPS2_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1bbfc, 0x1bc1c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AP Select Portrait", 0x4235c, 0x4237c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AP Win Portrait", 0x48f1c, 0x48fbc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1bc1c, 0x1bc3c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AK Prova di Servo", 0x1bc3c, 0x1bc5c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1bc5c, 0x1bc7c, indexCPS2_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1bc7c, 0x1bc9c, indexCPS2_Vamp_Jedah, 0x02 },
    { L"AK Select Portrait", 0x4255c, 0x4257c, indexCPS2_Vamp_Jedah, 0x20 },
    { L"AK Win Portrait", 0x49a5c, 0x49afc },
};

const sGame_PaletteDataset VSAV2_A_JEDAH_PALETTES_SHARED[] =
{
    { L"Shared blood",           0x35a9c, 0x35abc, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared blood 2",         0x35abc, 0x35adc, indexCPS2_Vamp_Jedah, 0x01 },
    { L"Shared Prova di Servo ", 0x35adc, 0x35afc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"Shared Prova di Servo 2", 0x35afc, 0x35b1c, indexCPS2_Vamp_Jedah, 0x03 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LP[] =
{
    { L"LP Phobos",          0x1bc9c, 0x1bcbc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"LP Unknown Extra 1", 0x1bcbc, 0x1bcdc },
    { L"LP Unknown Extra 2", 0x1bcdc, 0x1bcfc },
    { L"LP Cecil",           0x1bcfc, 0x1bd1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MP[] =
{
    { L"MP Phobos",          0x1bd1c, 0x1bd3c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"MP Unknown Extra 1", 0x1bd3c, 0x1bd5c },
    { L"MP Unknown Extra 2", 0x1bd5c, 0x1bd7c },
    { L"MP Cecil",           0x1bd7c, 0x1bd9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HP[] =
{
    { L"HP Phobos",          0x1bd9c, 0x1bdbc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"HP Unknown Extra 1", 0x1bdbc, 0x1bddc },
    { L"HP Unknown Extra 2", 0x1bddc, 0x1bdfc },
    { L"HP Cecil",           0x1bdfc, 0x1be1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_LK[] =
{
    { L"LK Phobos",          0x1be1c, 0x1be3c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"LK Unknown Extra 1", 0x1be3c, 0x1be5c },
    { L"LK Unknown Extra 2", 0x1be5c, 0x1be7c },
    { L"LK Cecil",           0x1be7c, 0x1be9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_MK[] =
{
    { L"MK Phobos",          0x1be9c, 0x1bebc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"MK Unknown Extra 1", 0x1bebc, 0x1bedc },
    { L"MK Unknown Extra 2", 0x1bedc, 0x1befc },
    { L"MK Cecil",           0x1befc, 0x1bf1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_HK[] =
{
    { L"HK Phobos",          0x1bf1c, 0x1bf3c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"HK Unknown Extra 1", 0x1bf3c, 0x1bf5c },
    { L"HK Unknown Extra 2", 0x1bf5c, 0x1bf7c },
    { L"HK Cecil",           0x1bf7c, 0x1bf9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_PP[] =
{
    { L"PP Phobos",          0x1bf9c, 0x1bfbc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"PP Unknown Extra 1", 0x1bfbc, 0x1bfdc },
    { L"PP Unknown Extra 2", 0x1bfdc, 0x1bffc },
    { L"PP Cecil",           0x1bffc, 0x1c01c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_KK[] =
{
    { L"KK Phobos",          0x1c01c, 0x1c03c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"KK Unknown Extra 1", 0x1c03c, 0x1c05c },
    { L"KK Unknown Extra 2", 0x1c05c, 0x1c07c },
    { L"KK Cecil",           0x1c07c, 0x1c09c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AP[] =
{
    { L"AP Phobos",          0x1c09c, 0x1c0bc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"AP Unknown Extra 1", 0x1c0bc, 0x1c0dc },
    { L"AP Unknown Extra 2", 0x1c0dc, 0x1c0fc },
    { L"AP Cecil",           0x1c0fc, 0x1c11c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PHOBOS_PALETTES_AK[] =
{
    { L"AK Phobos",          0x1c11c, 0x1c13c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"AK Unknown Extra 1", 0x1c13c, 0x1c15c },
    { L"AK Unknown Extra 2", 0x1c15c, 0x1c17c },
    { L"AK Cecil",           0x1c17c, 0x1c19c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LP[] =
{
    { L"LP Pyron",           0x1c19c, 0x1c1bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"LP Unknown Extra 1", 0x1c1bc, 0x1c1dc },
    { L"LP Unknown Extra 2", 0x1c1dc, 0x1c1fc },
    { L"LP Unknown Extra 3", 0x1c1fc, 0x1c21c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MP[] =
{
    { L"MP Pyron",           0x1c21c, 0x1c23c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"MP Unknown Extra 1", 0x1c23c, 0x1c25c },
    { L"MP Unknown Extra 2", 0x1c25c, 0x1c27c },
    { L"MP Unknown Extra 3", 0x1c27c, 0x1c29c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HP[] =
{
    { L"HP Pyron",           0x1c29c, 0x1c2bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"HP Unknown Extra 1", 0x1c2bc, 0x1c2dc },
    { L"HP Unknown Extra 2", 0x1c2dc, 0x1c2fc },
    { L"HP Unknown Extra 3", 0x1c2fc, 0x1c31c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_LK[] =
{
    { L"LK Pyron",           0x1c31c, 0x1c33c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"LK Unknown Extra 1", 0x1c33c, 0x1c35c },
    { L"LK Unknown Extra 2", 0x1c35c, 0x1c37c },
    { L"LK Unknown Extra 3", 0x1c37c, 0x1c39c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_MK[] =
{
    { L"MK Pyron",           0x1c39c, 0x1c3bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"MK Unknown Extra 1", 0x1c3bc, 0x1c3dc },
    { L"MK Unknown Extra 2", 0x1c3dc, 0x1c3fc },
    { L"MK Unknown Extra 3", 0x1c3fc, 0x1c41c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_HK[] =
{
    { L"HK Pyron",           0x1c41c, 0x1c43c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"HK Unknown Extra 1", 0x1c43c, 0x1c45c },
    { L"HK Unknown Extra 2", 0x1c45c, 0x1c47c },
    { L"HK Unknown Extra 3", 0x1c47c, 0x1c49c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_PP[] =
{
    { L"PP Pyron",           0x1c49c, 0x1c4bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"PP Unknown Extra 1", 0x1c4bc, 0x1c4dc },
    { L"PP Unknown Extra 2", 0x1c4dc, 0x1c4fc },
    { L"PP Unknown Extra 3", 0x1c4fc, 0x1c51c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_KK[] =
{
    { L"KK Pyron",           0x1c51c, 0x1c53c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"KK Unknown Extra 1", 0x1c53c, 0x1c55c },
    { L"KK Unknown Extra 2", 0x1c55c, 0x1c57c },
    { L"KK Unknown Extra 3", 0x1c57c, 0x1c59c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AP[] =
{
    { L"AP Pyron",           0x1c59c, 0x1c5bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"AP Unknown Extra 1", 0x1c5bc, 0x1c5dc },
    { L"AP Unknown Extra 2", 0x1c5dc, 0x1c5fc },
    { L"AP Unknown Extra 3", 0x1c5fc, 0x1c61c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VSAV2_A_PYRON_PALETTES_AK[] =
{
    { L"AK Pyron",           0x1c61c, 0x1c63c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"AK Unknown Extra 1", 0x1c63c, 0x1c65c },
    { L"AK Unknown Extra 2", 0x1c65c, 0x1c67c },
    { L"AK Unknown Extra 3", 0x1c67c, 0x1c69c, indexCPS2_Vamp_Pyron, 0x0 },
};

// portraits / dark effects

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LP[] =
{
    { L"LP Dark Gallon", 0x1C69C, 0x1c1bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"LP Intro/Outro", 0x1c1bc + 0x500, 0x1c1dc + 0x500 },
    { L"LP 236P/41236KK/j.HP", 0x1c1dc + 0x500, 0x1c1fc + 0x500 },
    { L"LP 236P/28K/Outro Flash", 0x1c1fc + 0x500, 0x1c21c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MP[] =
{
    { L"MP Dark Gallon", 0x1c21c + 0x500, 0x1c23c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"MP Intro/Outro", 0x1c23c + 0x500, 0x1c25c + 0x500 },
    { L"MP 236P/41236KK/j.HP", 0x1c25c + 0x500, 0x1c27c + 0x500 },
    { L"MP 236P/28K/Outro Flash", 0x1c27c + 0x500, 0x1c29c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HP[] =
{
    { L"HP Dark Gallon", 0x1c29c + 0x500, 0x1c2bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"HP Intro/Outro", 0x1c2bc + 0x500, 0x1c2dc + 0x500 },
    { L"HP 236P/41236KK/j.HP", 0x1c2dc + 0x500, 0x1c2fc + 0x500 },
    { L"HP 236P/28K/Outro Flash", 0x1c2fc + 0x500, 0x1c31c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_LK[] =
{
    { L"LK Dark Gallon", 0x1c31c + 0x500, 0x1c33c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"LK Intro/Outro", 0x1c33c + 0x500, 0x1c35c + 0x500 },
    { L"LK 236P/41236KK/j.HP", 0x1c35c + 0x500, 0x1c37c + 0x500 },
    { L"LK 236P/28K/Outro Flash", 0x1c37c + 0x500, 0x1c39c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_MK[] =
{
    { L"MK Dark Gallon", 0x1c39c + 0x500, 0x1c3bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"MK Intro/Outro", 0x1c3bc + 0x500, 0x1c3dc + 0x500 },
    { L"MK 236P/41236KK/j.HP", 0x1c3dc + 0x500, 0x1c3fc + 0x500 },
    { L"MK 236P/28K/Outro Flash", 0x1c3fc + 0x500, 0x1c41c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_HK[] =
{
    { L"HK Dark Gallon", 0x1c41c + 0x500, 0x1c43c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"HK Intro/Outro", 0x1c43c + 0x500, 0x1c45c + 0x500 },
    { L"HK 236P/41236KK/j.HP", 0x1c45c + 0x500, 0x1c47c + 0x500 },
    { L"HK 236P/28K/Outro Flash", 0x1c47c + 0x500, 0x1c49c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_PP[] =
{
    { L"PP Dark Gallon", 0x1c49c + 0x500, 0x1c4bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"PP Intro/Outro", 0x1c4bc + 0x500, 0x1c4dc + 0x500 },
    { L"PP 236P/41236KK/j.HP", 0x1c4dc + 0x500, 0x1c4fc + 0x500 },
    { L"PP 236P/28K/Outro Flash", 0x1c4fc + 0x500, 0x1c51c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_KK[] =
{
    { L"KK Dark Gallon", 0x1c51c + 0x500, 0x1c53c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"KK Intro/Outro", 0x1c53c + 0x500, 0x1c55c + 0x500 },
    { L"KK 236P/41236KK/j.HP", 0x1c55c + 0x500, 0x1c57c + 0x500 },
    { L"KK 236P/28K/Outro Flash", 0x1c57c + 0x500, 0x1c59c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AP[] =
{
    { L"AP Dark Gallon", 0x1c59c + 0x500, 0x1c5bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"AP Intro/Outro", 0x1c5bc + 0x500, 0x1c5dc + 0x500 },
    { L"AP 236P/41236KK/j.HP", 0x1c5dc + 0x500, 0x1c5fc + 0x500 },
    { L"AP 236P/28K/Outro Flash", 0x1c5fc + 0x500, 0x1c61c + 0x500 },
};

const sGame_PaletteDataset VSAV2_A_DARKGALLON_PALETTES_AK[] =
{
    { L"AK Dark Gallon", 0x1c61c + 0x500, 0x1c63c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"AK Intro/Outro", 0x1c63c + 0x500, 0x1c65c + 0x500 },
    { L"AK 236P/41236KK/j.HP", 0x1c65c + 0x500, 0x1c67c + 0x500 },
    { L"AK 236P/28K/Outro Flash", 0x1c67c + 0x500, 0x1CB9C },
};



const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LP[] =
{
    //bugbug: portraits maybe at 0x3649c or a // 3b61c  3bafc  
    { L"LP Donovan",         0x1cb9c, 0x1cbbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LP Unknown Extra",   0x1cbbc, 0x1cbdc },
    { L"LP Weapons",         0x1cbdc, 0x1cbfc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"LP Anita",           0x1cbfc, 0x1cc1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MP[] =
{
    { L"MP Donovan",         0x1cc1c, 0x1cc3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MP Unknown Extra",   0x1cc3c, 0x1cc5c },
    { L"MP Weapons",         0x1cc5c, 0x1cc7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"MP Anita",           0x1cc7c, 0x1cc9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HP[] =
{
    { L"HP Donovan",         0x1cc9c, 0x1ccbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HP Unknown Extra",   0x1ccbc, 0x1ccdc },
    { L"HP Weapons",         0x1ccdc, 0x1ccfc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"HP Anita",           0x1ccfc, 0x1cd1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_LK[] =
{
    { L"LK Donovan",         0x1cd1c, 0x1cd3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LK Unknown Extra",   0x1cd3c, 0x1cd5c },
    { L"LK Weapons",         0x1cd5c, 0x1cd7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"LK Anita",           0x1cd7c, 0x1cd9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_MK[] =
{
    { L"MK Donovan",         0x1cd9c, 0x1cdbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MK Unknown Extra",   0x1cdbc, 0x1cddc },
    { L"MK Weapons",         0x1cddc, 0x1cdfc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"MK Anita",           0x1cdfc, 0x1ce1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_HK[] =
{
    { L"HK Donovan",         0x1ce1c, 0x1ce3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HK Unknown Extra",   0x1ce3c, 0x1ce5c },
    { L"HK Weapons",         0x1ce5c, 0x1ce7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"HK Anita",           0x1ce7c, 0x1ce9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_PP[] =
{
    { L"PP Donovan",         0x1ce9c, 0x1cebc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"PP Unknown Extra",   0x1cebc, 0x1cedc },
    { L"PP Weapons",         0x1cedc, 0x1cefc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"PP Anita",           0x1cefc, 0x1cf1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_KK[] =
{
    { L"KK Donovan",         0x1cf1c, 0x1cf3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"KK Unknown Extra",   0x1cf3c, 0x1cf5c },
    { L"KK Weapons",         0x1cf5c, 0x1cf7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"KK Anita",           0x1cf7c, 0x1cf9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AP[] =
{
    { L"AP Donovan",         0x1cf9c, 0x1cfbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AP Unknown Extra",   0x1cfbc, 0x1cfdc },
    { L"AP Weapons",         0x1cfdc, 0x1cffc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"AP Anita",           0x1cffc, 0x1d01c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VSAV2_A_DONOVAN_PALETTES_AK[] =
{
    { L"AK Donovan",         0x1d01c, 0x1d03c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AK Unknown Extra",   0x1d03c, 0x1d05c },
    { L"AK Weapons",         0x1d05c, 0x1d07c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"AK Anita",           0x1d07c, 0x1d09c, indexCPS2_Anita, 0 },
};


const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_LP[] =
{
    { L"LP Unknown",         0x1d09c, 0x1d0bc },
    { L"LP Unknown Extra 1", 0x1d0bc, 0x1d0dc },
    { L"LP Unknown Extra 2", 0x1d0dc, 0x1d0fc },
    { L"LP Unknown Extra 3", 0x1d0fc, 0x1d11c },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_MP[] =
{
    { L"MP Unknown",          0x1d11c, 0x1d13c },
    { L"MP Unknown Extra 1", 0x1d13c, 0x1d15c },
    { L"MP Unknown Extra 2", 0x1d15c, 0x1d17c },
    { L"MP Unknown Extra 3", 0x1d17c, 0x1d19c },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_HP[] =
{
    { L"HP Unknown",          0x1d19c, 0x1c1bc + 0x1000 },
    { L"HP Unknown Extra 1", 0x1c1bc + 0x1000, 0x1c1dc + 0x1000 },
    { L"HP Unknown Extra 2", 0x1c1dc + 0x1000, 0x1c1fc + 0x1000 },
    { L"HP Unknown Extra 3", 0x1c1fc + 0x1000, 0x1c21c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_LK[] =
{
    { L"LK Unknown",          0x1c21c + 0x1000, 0x1c23c + 0x1000 },
    { L"LK Unknown Extra 1", 0x1c23c + 0x1000, 0x1c25c + 0x1000 },
    { L"LK Unknown Extra 2", 0x1c25c + 0x1000, 0x1c27c + 0x1000 },
    { L"LK Unknown Extra 3", 0x1c27c + 0x1000, 0x1c29c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_MK[] =
{
    { L"MK Unknown",          0x1c29c + 0x1000, 0x1c2bc + 0x1000 },
    { L"MK Unknown Extra 1", 0x1c2bc + 0x1000, 0x1c2dc + 0x1000 },
    { L"MK Unknown Extra 2", 0x1c2dc + 0x1000, 0x1c2fc + 0x1000 },
    { L"MK Unknown Extra 3", 0x1c2fc + 0x1000, 0x1c31c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_HK[] =
{
    { L"HK Unknown",          0x1c31c + 0x1000, 0x1c33c + 0x1000 },
    { L"HK Unknown Extra 1", 0x1c33c + 0x1000, 0x1c35c + 0x1000 },
    { L"HK Unknown Extra 2", 0x1c35c + 0x1000, 0x1c37c + 0x1000 },
    { L"HK Unknown Extra 3", 0x1c37c + 0x1000, 0x1c39c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_PP[] =
{
    { L"PP Unknown",          0x1c39c + 0x1000, 0x1c3bc + 0x1000 },
    { L"PP Unknown Extra 1", 0x1c3bc + 0x1000, 0x1c3dc + 0x1000 },
    { L"PP Unknown Extra 2", 0x1c3dc + 0x1000, 0x1c3fc + 0x1000 },
    { L"PP Unknown Extra 3", 0x1c3fc + 0x1000, 0x1c41c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_KK[] =
{
    { L"KK Unknown",          0x1c41c + 0x1000, 0x1c43c + 0x1000 },
    { L"KK Unknown Extra 1", 0x1c43c + 0x1000, 0x1c45c + 0x1000 },
    { L"KK Unknown Extra 2", 0x1c45c + 0x1000, 0x1c47c + 0x1000 },
    { L"KK Unknown Extra 3", 0x1c47c + 0x1000, 0x1c49c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_AP[] =
{
    { L"AP Unknown",          0x1c49c + 0x1000, 0x1c4bc + 0x1000 },
    { L"AP Unknown Extra 1", 0x1c4bc + 0x1000, 0x1c4dc + 0x1000 },
    { L"AP Unknown Extra 2", 0x1c4dc + 0x1000, 0x1c4fc + 0x1000 },
    { L"AP Unknown Extra 3", 0x1c4fc + 0x1000, 0x1c51c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_UNKNOWN_PALETTES_AK[] =
{
    { L"AK Unknown",          0x1c51c + 0x1000, 0x1c53c + 0x1000 },
    { L"AK Unknown Extra 1", 0x1c53c + 0x1000, 0x1c55c + 0x1000 },
    { L"AK Unknown Extra 2", 0x1c55c + 0x1000, 0x1c57c + 0x1000 },
    { L"AK Unknown Extra 3", 0x1c57c + 0x1000, 0x1c59c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon",    0x1c59c + 0x1000, 0x1c5bc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Intro", 0x1c5bc + 0x1000, 0x1c5dc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x1c5dc + 0x1000, 0x1c5fc + 0x1000 },
    { L"LP Unknown Extra", 0x1c5fc + 0x1000, 0x1c61c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon",    0x1c61c + 0x1000, 0x1c63c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Intro", 0x1c63c + 0x1000, 0x1c65c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1c65c + 0x1000, 0x1c67c + 0x1000 },
    { L"MP Unknown Extra", 0x1c67c + 0x1000, 0x1c69c + 0x1000 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon",     0x1c19c + 0x1500, 0x1c1bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Intro", 0x1c1bc + 0x1500, 0x1c1dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x1c1dc + 0x1500, 0x1c1fc + 0x1500 },
    { L"HP Unknown Extra", 0x1c1fc + 0x1500, 0x1c21c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon",     0x1c21c + 0x1500, 0x1c23c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Intro", 0x1c23c + 0x1500, 0x1c25c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1c25c + 0x1500, 0x1c27c + 0x1500 },
    { L"LK Unknown Extra", 0x1c27c + 0x1500, 0x1c29c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon",     0x1c29c + 0x1500, 0x1c2bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Intro", 0x1c2bc + 0x1500, 0x1c2dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x1c2dc + 0x1500, 0x1c2fc + 0x1500 },
    { L"MK Unknown Extra", 0x1c2fc + 0x1500, 0x1c31c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon",     0x1c31c + 0x1500, 0x1c33c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Intro", 0x1c33c + 0x1500, 0x1c35c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1c35c + 0x1500, 0x1c37c + 0x1500 },
    { L"HK Unknown Extra", 0x1c37c + 0x1500, 0x1c39c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon",     0x1c39c + 0x1500, 0x1c3bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Intro", 0x1c3bc + 0x1500, 0x1c3dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x1c3dc + 0x1500, 0x1c3fc + 0x1500 },
    { L"PP Unknown Extra", 0x1c3fc + 0x1500, 0x1c41c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon",     0x1c41c + 0x1500, 0x1c43c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Intro", 0x1c43c + 0x1500, 0x1c45c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1c45c + 0x1500, 0x1c47c + 0x1500 },
    { L"KK Unknown Extra", 0x1c47c + 0x1500, 0x1c49c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon",     0x1c49c + 0x1500, 0x1c4bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Intro", 0x1c4bc + 0x1500, 0x1c4dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x1c4dc + 0x1500, 0x1c4fc + 0x1500 },
    { L"AP Unknown Extra", 0x1c4fc + 0x1500, 0x1c51c + 0x1500 },
};

const sGame_PaletteDataset VSAV2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon",      0x1DA1C, 0x1c53c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Intro",               0x1c53c + 0x1500, 0x1c55c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks",    0x1c55c + 0x1500, 0x1c57c + 0x1500 },
    { L"AK Unknown Extra",       0x1c57c + 0x1500, 0x1DA9C },
};

const sGame_PaletteDataset VSAV2_A_ENDING_PALETTES_PORTRAITS[] =
{
    { L"Bulleta Portrait",    0x4257c, 0x4259c, indexCPS2_BBHood, 0x20 },
    { L"Demitri Portrait",    0x4259c, 0x425bc, indexCPS2_Vamp_Demitri, 0x20 },
    { L"Gallon Portrait",     0x425bc, 0x425dc, indexCPS2_Vamp_Gallon, 0x20 },
    { L"Victor Portrait",     0x425dc, 0x425fc, indexCPS2_Vamp_Victor, 0x20 },
    { L"Zabel Portrait",      0x425fc, 0x4261c, indexCPS2_Vamp_Zabel, 0x20 },
    { L"Morrigan Portrait",   0x4261c, 0x4263c, indexCPS2_Morrigan, 0x20 },
    { L"Anakaris Portrait",   0x4263c, 0x4265c, indexCPS2_Anakaris, 0x20 },
    { L"Felicia Portrait",    0x4265c, 0x4267c, indexCPS2_Felicia, 0x20 },
    { L"Bishamon Portrait",   0x4267c, 0x4269c, indexCPS2_Vamp_Bishamon, 0x20 },
    { L"Aulbath Portrait",    0x4269c, 0x426bc, indexCPS2_Vamp_Aulbath, 0x20 },
    { L"Sasquatch Portrait",  0x426bc, 0x426dc, indexCPS2_Vamp_Sasquatch, 0x20 },
    { L"Alt Zabel Portrait",  0x426dc, 0x426fc, indexCPS2_Vamp_Zabel, 0x20 },
    { L"Q-Bee Portrait",      0x426fc, 0x4271c, indexCPS2_Vamp_QBee, 0x20 },
    { L"Lei-Lei Portrait",    0x4271c, 0x4273c, indexCPS2_Vamp_LeiLei, 0x20 },
    { L"Lilith Portrait",     0x4273c, 0x4275c, indexCPS2_Vamp_Lilith, 0x20 },
    { L"Jedah Portrait",      0x4275c, 0x4277c, indexCPS2_Vamp_Jedah, 0x20 },
};

const sGame_PaletteDataset VSAV2_A_BULLETA_PALETTES_SPECIAL[] =
{
    { L"Bulleta LP Poisoned",        0x1DA9C + (0 * 0x20), 0x1DABC + (0 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Poisoned",        0x1DA9C + (1 * 0x20), 0x1DABC + (1 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Poisoned",        0x1DA9C + (2 * 0x20), 0x1DABC + (2 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Poisoned",        0x1DA9C + (3 * 0x20), 0x1DABC + (3 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Poisoned",        0x1DA9C + (4 * 0x20), 0x1DABC + (4 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Poisoned",        0x1DA9C + (5 * 0x20), 0x1DABC + (5 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Poisoned",        0x1DA9C + (6 * 0x20), 0x1DABC + (6 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Poisoned",        0x1DA9C + (7 * 0x20), 0x1DABC + (7 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Poisoned",        0x1DA9C + (8 * 0x20), 0x1DABC + (8 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Poisoned",        0x1DA9C + (9 * 0x20), 0x1DABC + (9 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Zapped",          0x1DA9C + (10 * 0x20), 0x1DABC + (10 * 0x20) },
    { L"Bulleta MP Zapped",          0x1DA9C + (11 * 0x20), 0x1DABC + (11 * 0x20) },
    { L"Bulleta HP Zapped",          0x1DA9C + (12 * 0x20), 0x1DABC + (12 * 0x20) },
    { L"Bulleta LK Zapped",          0x1DA9C + (13 * 0x20), 0x1DABC + (13 * 0x20) },
    { L"Bulleta MK Zapped",          0x1DA9C + (14 * 0x20), 0x1DABC + (14 * 0x20) },
    { L"Bulleta HK Zapped",          0x1DA9C + (15 * 0x20), 0x1DABC + (15 * 0x20) },
    { L"Bulleta PP Zapped",          0x1DA9C + (16 * 0x20), 0x1DABC + (16 * 0x20) },
    { L"Bulleta KK Zapped",          0x1DA9C + (17 * 0x20), 0x1DABC + (17 * 0x20) },
    { L"Bulleta AP Zapped",          0x1DA9C + (18 * 0x20), 0x1DABC + (18 * 0x20) },
    { L"Bulleta AK Zapped",          0x1DA9C + (19 * 0x20), 0x1DABC + (19 * 0x20) },
    { L"Bulleta LP Burned",          0x1DA9C + (20 * 0x20), 0x1DABC + (20 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Burned",          0x1DA9C + (21 * 0x20), 0x1DABC + (21 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Burned",          0x1DA9C + (22 * 0x20), 0x1DABC + (22 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Burned",          0x1DA9C + (23 * 0x20), 0x1DABC + (23 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Burned",          0x1DA9C + (24 * 0x20), 0x1DABC + (24 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Burned",          0x1DA9C + (25 * 0x20), 0x1DABC + (25 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Burned",          0x1DA9C + (26 * 0x20), 0x1DABC + (26 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Burned",          0x1DA9C + (27 * 0x20), 0x1DABC + (27 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Burned",          0x1DA9C + (28 * 0x20), 0x1DABC + (28 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Burned",          0x1DA9C + (29 * 0x20), 0x1DABC + (29 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Pharaoh's Curse", 0x1DA9C + (30 * 0x20), 0x1DABC + (30 * 0x20) },
    { L"Bulleta MP Pharaoh's Curse", 0x1DA9C + (31 * 0x20), 0x1DABC + (31 * 0x20) },
    { L"Bulleta HP Pharaoh's Curse", 0x1DA9C + (32 * 0x20), 0x1DABC + (32 * 0x20) },
    { L"Bulleta LK Pharaoh's Curse", 0x1DA9C + (33 * 0x20), 0x1DABC + (33 * 0x20) },
    { L"Bulleta MK Pharaoh's Curse", 0x1DA9C + (34 * 0x20), 0x1DABC + (34 * 0x20) },
    { L"Bulleta HK Pharaoh's Curse", 0x1DA9C + (35 * 0x20), 0x1DABC + (35 * 0x20) },
    { L"Bulleta PP Pharaoh's Curse", 0x1DA9C + (36 * 0x20), 0x1DABC + (36 * 0x20) },
    { L"Bulleta KK Pharaoh's Curse", 0x1DA9C + (37 * 0x20), 0x1DABC + (37 * 0x20) },
    { L"Bulleta AP Pharaoh's Curse", 0x1DA9C + (38 * 0x20), 0x1DABC + (38 * 0x20) },
    { L"Bulleta AK Pharaoh's Curse", 0x1DA9C + (39 * 0x20), 0x1DABC + (39 * 0x20) },
    { L"Bulleta ES 1",               0x1DA9C + (40 * 0x20), 0x1DABC + (40 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ES 2",               0x1DA9C + (41 * 0x20), 0x1DABC + (41 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ES 3",               0x1DA9C + (42 * 0x20), 0x1DABC + (42 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ES 4",               0x1DA9C + (43 * 0x20), 0x1DABC + (43 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 1",               0x1DA9C + (44 * 0x20), 0x1DABC + (44 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 2",               0x1DA9C + (45 * 0x20), 0x1DABC + (45 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 3",               0x1DA9C + (46 * 0x20), 0x1DABC + (46 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 4",               0x1DA9C + (47 * 0x20), 0x1DABC + (47 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 5",               0x1DA9C + (48 * 0x20), 0x1DABC + (48 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 6",               0x1DA9C + (49 * 0x20), 0x1DABC + (49 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 7",               0x1DA9C + (50 * 0x20), 0x1DABC + (50 * 0x20), indexCPS2_BBHood },
    { L"Bulleta EX 8",               0x1DA9C + (51 * 0x20), 0x1DABC + (51 * 0x20), indexCPS2_BBHood },
    { L"Bulleta Prova di Servo",     0x1DA9C + (52 * 0x20), 0x1DABC + (52 * 0x20), indexCPS2_BBHood },
    { L"Bulleta Finale Rosso",       0x1DA9C + (53 * 0x20), 0x1DABC + (53 * 0x20), indexCPS2_BBHood },
    { L"Bulleta Stone",              0x1DA9C + (54 * 0x20), 0x1DABC + (54 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Midnight Bliss",  0x1DA9C + (55 * 0x20), 0x1DABC + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MP Midnight Bliss",  0x1DA9C + (56 * 0x20), 0x1DABC + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HP Midnight Bliss",  0x1DA9C + (57 * 0x20), 0x1DABC + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta LK Midnight Bliss",  0x1DA9C + (58 * 0x20), 0x1DABC + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta MK Midnight Bliss",  0x1DA9C + (59 * 0x20), 0x1DABC + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta HK Midnight Bliss",  0x1DA9C + (60 * 0x20), 0x1DABC + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta PP Midnight Bliss",  0x1DA9C + (61 * 0x20), 0x1DABC + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta KK Midnight Bliss",  0x1DA9C + (62 * 0x20), 0x1DABC + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AP Midnight Bliss",  0x1DA9C + (63 * 0x20), 0x1DABC + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta AK Midnight Bliss",  0x1DA9C + (64 * 0x20), 0x1DABC + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_BBHood },
    { L"Bulleta Q-Bee's QJ Honey",   0x1DA9C + (65 * 0x20), 0x1DABC + (65 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 1",    0x1DA9C + (66 * 0x20), 0x1DABC + (66 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 2",    0x1DA9C + (67 * 0x20), 0x1DABC + (67 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 3",    0x1DA9C + (68 * 0x20), 0x1DABC + (68 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LP Dark Force 4",    0x1DA9C + (69 * 0x20), 0x1DABC + (69 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 1",    0x1DA9C + (70 * 0x20), 0x1DABC + (70 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 2",    0x1DA9C + (71 * 0x20), 0x1DABC + (71 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 3",    0x1DA9C + (72 * 0x20), 0x1DABC + (72 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MP Dark Force 4",    0x1DA9C + (73 * 0x20), 0x1DABC + (73 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 1",    0x1DA9C + (74 * 0x20), 0x1DABC + (74 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 2",    0x1DA9C + (75 * 0x20), 0x1DABC + (75 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 3",    0x1DA9C + (76 * 0x20), 0x1DABC + (76 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HP Dark Force 4",    0x1DA9C + (77 * 0x20), 0x1DABC + (77 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 1",    0x1DA9C + (78 * 0x20), 0x1DABC + (78 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 2",    0x1DA9C + (79 * 0x20), 0x1DABC + (79 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 3",    0x1DA9C + (80 * 0x20), 0x1DABC + (80 * 0x20), indexCPS2_BBHood },
    { L"Bulleta LK Dark Force 4",    0x1DA9C + (81 * 0x20), 0x1DABC + (81 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 1",    0x1DA9C + (82 * 0x20), 0x1DABC + (82 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 2",    0x1DA9C + (83 * 0x20), 0x1DABC + (83 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 3",    0x1DA9C + (84 * 0x20), 0x1DABC + (84 * 0x20), indexCPS2_BBHood },
    { L"Bulleta MK Dark Force 4",    0x1DA9C + (85 * 0x20), 0x1DABC + (85 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 1",    0x1DA9C + (86 * 0x20), 0x1DABC + (86 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 2",    0x1DA9C + (87 * 0x20), 0x1DABC + (87 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 3",    0x1DA9C + (88 * 0x20), 0x1DABC + (88 * 0x20), indexCPS2_BBHood },
    { L"Bulleta HK Dark Force 4",    0x1DA9C + (89 * 0x20), 0x1DABC + (89 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 1",    0x1DA9C + (90 * 0x20), 0x1DABC + (90 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 2",    0x1DA9C + (91 * 0x20), 0x1DABC + (91 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 3",    0x1DA9C + (92 * 0x20), 0x1DABC + (92 * 0x20), indexCPS2_BBHood },
    { L"Bulleta PP Dark Force 4",    0x1DA9C + (93 * 0x20), 0x1DABC + (93 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 1",    0x1DA9C + (94 * 0x20), 0x1DABC + (94 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 2",    0x1DA9C + (95 * 0x20), 0x1DABC + (95 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 3",    0x1DA9C + (96 * 0x20), 0x1DABC + (96 * 0x20), indexCPS2_BBHood },
    { L"Bulleta KK Dark Force 4",    0x1DA9C + (97 * 0x20), 0x1DABC + (97 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 1",    0x1DA9C + (98 * 0x20), 0x1DABC + (98 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 2",    0x1DA9C + (99 * 0x20), 0x1DABC + (99 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 3",    0x1DA9C + (100 * 0x20), 0x1DABC + (100 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AP Dark Force 4",    0x1DA9C + (101 * 0x20), 0x1DABC + (101 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 1",    0x1DA9C + (102 * 0x20), 0x1DABC + (102 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 2",    0x1DA9C + (103 * 0x20), 0x1DABC + (103 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 3",    0x1DA9C + (104 * 0x20), 0x1DABC + (104 * 0x20), indexCPS2_BBHood },
    { L"Bulleta AK Dark Force 4",    0x1DA9C + (105 * 0x20), 0x1DABC + (105 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 1",              0x1DA9C + (106 * 0x20), 0x1DABC + (106 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 2",              0x1DA9C + (107 * 0x20), 0x1DABC + (107 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 3",              0x1DA9C + (108 * 0x20), 0x1DABC + (108 * 0x20), indexCPS2_BBHood },
    { L"Bulleta ??? 4",              0x1DA9C + (109 * 0x20), 0x1DABC + (109 * 0x20), indexCPS2_BBHood },
};

const sGame_PaletteDataset VSAV2_A_DEMITRI_PALETTES_SPECIAL[] =
{
    { L"Demitri LP Poisoned",        0x1e85c + (0 * 0x20), 0x1e87c + (0 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Poisoned",        0x1e85c + (1 * 0x20), 0x1e87c + (1 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Poisoned",        0x1e85c + (2 * 0x20), 0x1e87c + (2 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Poisoned",        0x1e85c + (3 * 0x20), 0x1e87c + (3 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Poisoned",        0x1e85c + (4 * 0x20), 0x1e87c + (4 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Poisoned",        0x1e85c + (5 * 0x20), 0x1e87c + (5 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Poisoned",        0x1e85c + (6 * 0x20), 0x1e87c + (6 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Poisoned",        0x1e85c + (7 * 0x20), 0x1e87c + (7 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Poisoned",        0x1e85c + (8 * 0x20), 0x1e87c + (8 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Poisoned",        0x1e85c + (9 * 0x20), 0x1e87c + (9 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Zapped",          0x1e85c + (10 * 0x20), 0x1e87c + (10 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri MP Zapped",          0x1e85c + (11 * 0x20), 0x1e87c + (11 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri HP Zapped",          0x1e85c + (12 * 0x20), 0x1e87c + (12 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri LK Zapped",          0x1e85c + (13 * 0x20), 0x1e87c + (13 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri MK Zapped",          0x1e85c + (14 * 0x20), 0x1e87c + (14 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri HK Zapped",          0x1e85c + (15 * 0x20), 0x1e87c + (15 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri PP Zapped",          0x1e85c + (16 * 0x20), 0x1e87c + (16 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri KK Zapped",          0x1e85c + (17 * 0x20), 0x1e87c + (17 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri AP Zapped",          0x1e85c + (18 * 0x20), 0x1e87c + (18 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri AK Zapped",          0x1e85c + (19 * 0x20), 0x1e87c + (19 * 0x20), indexCPS2_Vamp_Demitri, 0x0c },
    { L"Demitri LP Burned",          0x1e85c + (20 * 0x20), 0x1e87c + (20 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Burned",          0x1e85c + (21 * 0x20), 0x1e87c + (21 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Burned",          0x1e85c + (22 * 0x20), 0x1e87c + (22 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Burned",          0x1e85c + (23 * 0x20), 0x1e87c + (23 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Burned",          0x1e85c + (24 * 0x20), 0x1e87c + (24 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Burned",          0x1e85c + (25 * 0x20), 0x1e87c + (25 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Burned",          0x1e85c + (26 * 0x20), 0x1e87c + (26 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Burned",          0x1e85c + (27 * 0x20), 0x1e87c + (27 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Burned",          0x1e85c + (28 * 0x20), 0x1e87c + (28 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Burned",          0x1e85c + (29 * 0x20), 0x1e87c + (29 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Pharaoh's Curse", 0x1e85c + (30 * 0x20), 0x1e87c + (30 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MP Pharaoh's Curse", 0x1e85c + (31 * 0x20), 0x1e87c + (31 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HP Pharaoh's Curse", 0x1e85c + (32 * 0x20), 0x1e87c + (32 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri LK Pharaoh's Curse", 0x1e85c + (33 * 0x20), 0x1e87c + (33 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri MK Pharaoh's Curse", 0x1e85c + (34 * 0x20), 0x1e87c + (34 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri HK Pharaoh's Curse", 0x1e85c + (35 * 0x20), 0x1e87c + (35 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri PP Pharaoh's Curse", 0x1e85c + (36 * 0x20), 0x1e87c + (36 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri KK Pharaoh's Curse", 0x1e85c + (37 * 0x20), 0x1e87c + (37 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AP Pharaoh's Curse", 0x1e85c + (38 * 0x20), 0x1e87c + (38 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri AK Pharaoh's Curse", 0x1e85c + (39 * 0x20), 0x1e87c + (39 * 0x20), indexCPS2_Vamp_Demitri, 0x0d },
    { L"Demitri ES 1",               0x1e85c + (40 * 0x20), 0x1e87c + (40 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ES 2",               0x1e85c + (41 * 0x20), 0x1e87c + (41 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ES 3",               0x1e85c + (42 * 0x20), 0x1e87c + (42 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ES 4",               0x1e85c + (43 * 0x20), 0x1e87c + (43 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 1",               0x1e85c + (44 * 0x20), 0x1e87c + (44 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 2",               0x1e85c + (45 * 0x20), 0x1e87c + (45 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 3",               0x1e85c + (46 * 0x20), 0x1e87c + (46 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 4",               0x1e85c + (47 * 0x20), 0x1e87c + (47 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 5",               0x1e85c + (48 * 0x20), 0x1e87c + (48 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 6",               0x1e85c + (49 * 0x20), 0x1e87c + (49 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 7",               0x1e85c + (50 * 0x20), 0x1e87c + (50 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri EX 8",               0x1e85c + (51 * 0x20), 0x1e87c + (51 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri Prova di Servo",     0x1e85c + (52 * 0x20), 0x1e87c + (52 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri Finale Rosso",       0x1e85c + (53 * 0x20), 0x1e87c + (53 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri Stone",              0x1e85c + (54 * 0x20), 0x1e87c + (54 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Midnight Bliss",  0x1e85c + (55 * 0x20), 0x1e87c + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MP Midnight Bliss",  0x1e85c + (56 * 0x20), 0x1e87c + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HP Midnight Bliss",  0x1e85c + (57 * 0x20), 0x1e87c + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri LK Midnight Bliss",  0x1e85c + (58 * 0x20), 0x1e87c + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri MK Midnight Bliss",  0x1e85c + (59 * 0x20), 0x1e87c + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri HK Midnight Bliss",  0x1e85c + (60 * 0x20), 0x1e87c + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri PP Midnight Bliss",  0x1e85c + (61 * 0x20), 0x1e87c + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri KK Midnight Bliss",  0x1e85c + (62 * 0x20), 0x1e87c + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AP Midnight Bliss",  0x1e85c + (63 * 0x20), 0x1e87c + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri AK Midnight Bliss",  0x1e85c + (64 * 0x20), 0x1e87c + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Demitri },
    { L"Demitri Q-Bee's QJ Honey",   0x1e85c + (65 * 0x20), 0x1e87c + (65 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 1",    0x1e85c + (66 * 0x20), 0x1e87c + (66 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 2",    0x1e85c + (67 * 0x20), 0x1e87c + (67 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 3",    0x1e85c + (68 * 0x20), 0x1e87c + (68 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LP Dark Force 4",    0x1e85c + (69 * 0x20), 0x1e87c + (69 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 1",    0x1e85c + (70 * 0x20), 0x1e87c + (70 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 2",    0x1e85c + (71 * 0x20), 0x1e87c + (71 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 3",    0x1e85c + (72 * 0x20), 0x1e87c + (72 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MP Dark Force 4",    0x1e85c + (73 * 0x20), 0x1e87c + (73 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 1",    0x1e85c + (74 * 0x20), 0x1e87c + (74 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 2",    0x1e85c + (75 * 0x20), 0x1e87c + (75 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 3",    0x1e85c + (76 * 0x20), 0x1e87c + (76 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HP Dark Force 4",    0x1e85c + (77 * 0x20), 0x1e87c + (77 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 1",    0x1e85c + (78 * 0x20), 0x1e87c + (78 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 2",    0x1e85c + (79 * 0x20), 0x1e87c + (79 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 3",    0x1e85c + (80 * 0x20), 0x1e87c + (80 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri LK Dark Force 4",    0x1e85c + (81 * 0x20), 0x1e87c + (81 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 1",    0x1e85c + (82 * 0x20), 0x1e87c + (82 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 2",    0x1e85c + (83 * 0x20), 0x1e87c + (83 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 3",    0x1e85c + (84 * 0x20), 0x1e87c + (84 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri MK Dark Force 4",    0x1e85c + (85 * 0x20), 0x1e87c + (85 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 1",    0x1e85c + (86 * 0x20), 0x1e87c + (86 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 2",    0x1e85c + (87 * 0x20), 0x1e87c + (87 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 3",    0x1e85c + (88 * 0x20), 0x1e87c + (88 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri HK Dark Force 4",    0x1e85c + (89 * 0x20), 0x1e87c + (89 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 1",    0x1e85c + (90 * 0x20), 0x1e87c + (90 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 2",    0x1e85c + (91 * 0x20), 0x1e87c + (91 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 3",    0x1e85c + (92 * 0x20), 0x1e87c + (92 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri PP Dark Force 4",    0x1e85c + (93 * 0x20), 0x1e87c + (93 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 1",    0x1e85c + (94 * 0x20), 0x1e87c + (94 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 2",    0x1e85c + (95 * 0x20), 0x1e87c + (95 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 3",    0x1e85c + (96 * 0x20), 0x1e87c + (96 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri KK Dark Force 4",    0x1e85c + (97 * 0x20), 0x1e87c + (97 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 1",    0x1e85c + (98 * 0x20), 0x1e87c + (98 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 2",    0x1e85c + (99 * 0x20), 0x1e87c + (99 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 3",    0x1e85c + (100 * 0x20), 0x1e87c + (100 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AP Dark Force 4",    0x1e85c + (101 * 0x20), 0x1e87c + (101 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 1",    0x1e85c + (102 * 0x20), 0x1e87c + (102 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 2",    0x1e85c + (103 * 0x20), 0x1e87c + (103 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 3",    0x1e85c + (104 * 0x20), 0x1e87c + (104 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri AK Dark Force 4",    0x1e85c + (105 * 0x20), 0x1e87c + (105 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 1",              0x1e85c + (106 * 0x20), 0x1e87c + (106 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 2",              0x1e85c + (107 * 0x20), 0x1e87c + (107 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 3",              0x1e85c + (108 * 0x20), 0x1e87c + (108 * 0x20), indexCPS2_Vamp_Demitri },
    { L"Demitri ??? 4",              0x1e85c + (109 * 0x20), 0x1e87c + (109 * 0x20), indexCPS2_Vamp_Demitri },
};

const sGame_PaletteDataset VSAV2_A_GALLON_PALETTES_SPECIAL[] =
{
    { L"Gallon LP Poisoned",        0x1f61c + (0 * 0x20), 0x1f63c + (0 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Poisoned",        0x1f61c + (1 * 0x20), 0x1f63c + (1 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Poisoned",        0x1f61c + (2 * 0x20), 0x1f63c + (2 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Poisoned",        0x1f61c + (3 * 0x20), 0x1f63c + (3 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Poisoned",        0x1f61c + (4 * 0x20), 0x1f63c + (4 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Poisoned",        0x1f61c + (5 * 0x20), 0x1f63c + (5 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Poisoned",        0x1f61c + (6 * 0x20), 0x1f63c + (6 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Poisoned",        0x1f61c + (7 * 0x20), 0x1f63c + (7 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Poisoned",        0x1f61c + (8 * 0x20), 0x1f63c + (8 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Poisoned",        0x1f61c + (9 * 0x20), 0x1f63c + (9 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Zapped",          0x1f61c + (10 * 0x20), 0x1f63c + (10 * 0x20) },
    { L"Gallon MP Zapped",          0x1f61c + (11 * 0x20), 0x1f63c + (11 * 0x20) },
    { L"Gallon HP Zapped",          0x1f61c + (12 * 0x20), 0x1f63c + (12 * 0x20) },
    { L"Gallon LK Zapped",          0x1f61c + (13 * 0x20), 0x1f63c + (13 * 0x20) },
    { L"Gallon MK Zapped",          0x1f61c + (14 * 0x20), 0x1f63c + (14 * 0x20) },
    { L"Gallon HK Zapped",          0x1f61c + (15 * 0x20), 0x1f63c + (15 * 0x20) },
    { L"Gallon PP Zapped",          0x1f61c + (16 * 0x20), 0x1f63c + (16 * 0x20) },
    { L"Gallon KK Zapped",          0x1f61c + (17 * 0x20), 0x1f63c + (17 * 0x20) },
    { L"Gallon AP Zapped",          0x1f61c + (18 * 0x20), 0x1f63c + (18 * 0x20) },
    { L"Gallon AK Zapped",          0x1f61c + (19 * 0x20), 0x1f63c + (19 * 0x20) },
    { L"Gallon LP Burned",          0x1f61c + (20 * 0x20), 0x1f63c + (20 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Burned",          0x1f61c + (21 * 0x20), 0x1f63c + (21 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Burned",          0x1f61c + (22 * 0x20), 0x1f63c + (22 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Burned",          0x1f61c + (23 * 0x20), 0x1f63c + (23 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Burned",          0x1f61c + (24 * 0x20), 0x1f63c + (24 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Burned",          0x1f61c + (25 * 0x20), 0x1f63c + (25 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Burned",          0x1f61c + (26 * 0x20), 0x1f63c + (26 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Burned",          0x1f61c + (27 * 0x20), 0x1f63c + (27 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Burned",          0x1f61c + (28 * 0x20), 0x1f63c + (28 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Burned",          0x1f61c + (29 * 0x20), 0x1f63c + (29 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Pharaoh's Curse", 0x1f61c + (30 * 0x20), 0x1f63c + (30 * 0x20) },
    { L"Gallon MP Pharaoh's Curse", 0x1f61c + (31 * 0x20), 0x1f63c + (31 * 0x20) },
    { L"Gallon HP Pharaoh's Curse", 0x1f61c + (32 * 0x20), 0x1f63c + (32 * 0x20) },
    { L"Gallon LK Pharaoh's Curse", 0x1f61c + (33 * 0x20), 0x1f63c + (33 * 0x20) },
    { L"Gallon MK Pharaoh's Curse", 0x1f61c + (34 * 0x20), 0x1f63c + (34 * 0x20) },
    { L"Gallon HK Pharaoh's Curse", 0x1f61c + (35 * 0x20), 0x1f63c + (35 * 0x20) },
    { L"Gallon PP Pharaoh's Curse", 0x1f61c + (36 * 0x20), 0x1f63c + (36 * 0x20) },
    { L"Gallon KK Pharaoh's Curse", 0x1f61c + (37 * 0x20), 0x1f63c + (37 * 0x20) },
    { L"Gallon AP Pharaoh's Curse", 0x1f61c + (38 * 0x20), 0x1f63c + (38 * 0x20) },
    { L"Gallon AK Pharaoh's Curse", 0x1f61c + (39 * 0x20), 0x1f63c + (39 * 0x20) },
    { L"Gallon ES 1",               0x1f61c + (40 * 0x20), 0x1f63c + (40 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ES 2",               0x1f61c + (41 * 0x20), 0x1f63c + (41 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ES 3",               0x1f61c + (42 * 0x20), 0x1f63c + (42 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ES 4",               0x1f61c + (43 * 0x20), 0x1f63c + (43 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 1",               0x1f61c + (44 * 0x20), 0x1f63c + (44 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 2",               0x1f61c + (45 * 0x20), 0x1f63c + (45 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 3",               0x1f61c + (46 * 0x20), 0x1f63c + (46 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 4",               0x1f61c + (47 * 0x20), 0x1f63c + (47 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 5",               0x1f61c + (48 * 0x20), 0x1f63c + (48 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 6",               0x1f61c + (49 * 0x20), 0x1f63c + (49 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 7",               0x1f61c + (50 * 0x20), 0x1f63c + (50 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon EX 8",               0x1f61c + (51 * 0x20), 0x1f63c + (51 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon Prova di Servo",     0x1f61c + (52 * 0x20), 0x1f63c + (52 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon Finale Rosso",       0x1f61c + (53 * 0x20), 0x1f63c + (53 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon Stone",              0x1f61c + (54 * 0x20), 0x1f63c + (54 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Midnight Bliss",  0x1f61c + (55 * 0x20), 0x1f63c + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MP Midnight Bliss",  0x1f61c + (56 * 0x20), 0x1f63c + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HP Midnight Bliss",  0x1f61c + (57 * 0x20), 0x1f63c + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon LK Midnight Bliss",  0x1f61c + (58 * 0x20), 0x1f63c + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon MK Midnight Bliss",  0x1f61c + (59 * 0x20), 0x1f63c + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon HK Midnight Bliss",  0x1f61c + (60 * 0x20), 0x1f63c + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon PP Midnight Bliss",  0x1f61c + (61 * 0x20), 0x1f63c + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon KK Midnight Bliss",  0x1f61c + (62 * 0x20), 0x1f63c + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AP Midnight Bliss",  0x1f61c + (63 * 0x20), 0x1f63c + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon AK Midnight Bliss",  0x1f61c + (64 * 0x20), 0x1f63c + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Gallon Q-Bee's QJ Honey",   0x1f61c + (65 * 0x20), 0x1f63c + (65 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 1",    0x1f61c + (66 * 0x20), 0x1f63c + (66 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 2",    0x1f61c + (67 * 0x20), 0x1f63c + (67 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 3",    0x1f61c + (68 * 0x20), 0x1f63c + (68 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LP Dark Force 4",    0x1f61c + (69 * 0x20), 0x1f63c + (69 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 1",    0x1f61c + (70 * 0x20), 0x1f63c + (70 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 2",    0x1f61c + (71 * 0x20), 0x1f63c + (71 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 3",    0x1f61c + (72 * 0x20), 0x1f63c + (72 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MP Dark Force 4",    0x1f61c + (73 * 0x20), 0x1f63c + (73 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 1",    0x1f61c + (74 * 0x20), 0x1f63c + (74 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 2",    0x1f61c + (75 * 0x20), 0x1f63c + (75 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 3",    0x1f61c + (76 * 0x20), 0x1f63c + (76 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HP Dark Force 4",    0x1f61c + (77 * 0x20), 0x1f63c + (77 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 1",    0x1f61c + (78 * 0x20), 0x1f63c + (78 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 2",    0x1f61c + (79 * 0x20), 0x1f63c + (79 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 3",    0x1f61c + (80 * 0x20), 0x1f63c + (80 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon LK Dark Force 4",    0x1f61c + (81 * 0x20), 0x1f63c + (81 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 1",    0x1f61c + (82 * 0x20), 0x1f63c + (82 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 2",    0x1f61c + (83 * 0x20), 0x1f63c + (83 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 3",    0x1f61c + (84 * 0x20), 0x1f63c + (84 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon MK Dark Force 4",    0x1f61c + (85 * 0x20), 0x1f63c + (85 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 1",    0x1f61c + (86 * 0x20), 0x1f63c + (86 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 2",    0x1f61c + (87 * 0x20), 0x1f63c + (87 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 3",    0x1f61c + (88 * 0x20), 0x1f63c + (88 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon HK Dark Force 4",    0x1f61c + (89 * 0x20), 0x1f63c + (89 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 1",    0x1f61c + (90 * 0x20), 0x1f63c + (90 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 2",    0x1f61c + (91 * 0x20), 0x1f63c + (91 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 3",    0x1f61c + (92 * 0x20), 0x1f63c + (92 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon PP Dark Force 4",    0x1f61c + (93 * 0x20), 0x1f63c + (93 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 1",    0x1f61c + (94 * 0x20), 0x1f63c + (94 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 2",    0x1f61c + (95 * 0x20), 0x1f63c + (95 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 3",    0x1f61c + (96 * 0x20), 0x1f63c + (96 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon KK Dark Force 4",    0x1f61c + (97 * 0x20), 0x1f63c + (97 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 1",    0x1f61c + (98 * 0x20), 0x1f63c + (98 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 2",    0x1f61c + (99 * 0x20), 0x1f63c + (99 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 3",    0x1f61c + (100 * 0x20), 0x1f63c + (100 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AP Dark Force 4",    0x1f61c + (101 * 0x20), 0x1f63c + (101 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 1",    0x1f61c + (102 * 0x20), 0x1f63c + (102 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 2",    0x1f61c + (103 * 0x20), 0x1f63c + (103 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 3",    0x1f61c + (104 * 0x20), 0x1f63c + (104 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon AK Dark Force 4",    0x1f61c + (105 * 0x20), 0x1f63c + (105 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 1",              0x1f61c + (106 * 0x20), 0x1f63c + (106 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 2",              0x1f61c + (107 * 0x20), 0x1f63c + (107 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 3",              0x1f61c + (108 * 0x20), 0x1f63c + (108 * 0x20), indexCPS2_Vamp_Gallon },
    { L"Gallon ??? 4",              0x1f61c + (109 * 0x20), 0x1f63c + (109 * 0x20), indexCPS2_Vamp_Gallon },
};

const sGame_PaletteDataset VSAV2_A_Victor_PALETTES_SPECIAL[] =
{
    { L"Victor LP Poisoned",        0x203dc + (0 * 0x20), 0x203fc + (0 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Poisoned",        0x203dc + (1 * 0x20), 0x203fc + (1 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Poisoned",        0x203dc + (2 * 0x20), 0x203fc + (2 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Poisoned",        0x203dc + (3 * 0x20), 0x203fc + (3 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Poisoned",        0x203dc + (4 * 0x20), 0x203fc + (4 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Poisoned",        0x203dc + (5 * 0x20), 0x203fc + (5 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Poisoned",        0x203dc + (6 * 0x20), 0x203fc + (6 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Poisoned",        0x203dc + (7 * 0x20), 0x203fc + (7 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Poisoned",        0x203dc + (8 * 0x20), 0x203fc + (8 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Poisoned",        0x203dc + (9 * 0x20), 0x203fc + (9 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Zapped",          0x203dc + (10 * 0x20), 0x203fc + (10 * 0x20) },
    { L"Victor MP Zapped",          0x203dc + (11 * 0x20), 0x203fc + (11 * 0x20) },
    { L"Victor HP Zapped",          0x203dc + (12 * 0x20), 0x203fc + (12 * 0x20) },
    { L"Victor LK Zapped",          0x203dc + (13 * 0x20), 0x203fc + (13 * 0x20) },
    { L"Victor MK Zapped",          0x203dc + (14 * 0x20), 0x203fc + (14 * 0x20) },
    { L"Victor HK Zapped",          0x203dc + (15 * 0x20), 0x203fc + (15 * 0x20) },
    { L"Victor PP Zapped",          0x203dc + (16 * 0x20), 0x203fc + (16 * 0x20) },
    { L"Victor KK Zapped",          0x203dc + (17 * 0x20), 0x203fc + (17 * 0x20) },
    { L"Victor AP Zapped",          0x203dc + (18 * 0x20), 0x203fc + (18 * 0x20) },
    { L"Victor AK Zapped",          0x203dc + (19 * 0x20), 0x203fc + (19 * 0x20) },
    { L"Victor LP Burned",          0x203dc + (20 * 0x20), 0x203fc + (20 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Burned",          0x203dc + (21 * 0x20), 0x203fc + (21 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Burned",          0x203dc + (22 * 0x20), 0x203fc + (22 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Burned",          0x203dc + (23 * 0x20), 0x203fc + (23 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Burned",          0x203dc + (24 * 0x20), 0x203fc + (24 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Burned",          0x203dc + (25 * 0x20), 0x203fc + (25 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Burned",          0x203dc + (26 * 0x20), 0x203fc + (26 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Burned",          0x203dc + (27 * 0x20), 0x203fc + (27 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Burned",          0x203dc + (28 * 0x20), 0x203fc + (28 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Burned",          0x203dc + (29 * 0x20), 0x203fc + (29 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Pharaoh's Curse", 0x203dc + (30 * 0x20), 0x203fc + (30 * 0x20) },
    { L"Victor MP Pharaoh's Curse", 0x203dc + (31 * 0x20), 0x203fc + (31 * 0x20) },
    { L"Victor HP Pharaoh's Curse", 0x203dc + (32 * 0x20), 0x203fc + (32 * 0x20) },
    { L"Victor LK Pharaoh's Curse", 0x203dc + (33 * 0x20), 0x203fc + (33 * 0x20) },
    { L"Victor MK Pharaoh's Curse", 0x203dc + (34 * 0x20), 0x203fc + (34 * 0x20) },
    { L"Victor HK Pharaoh's Curse", 0x203dc + (35 * 0x20), 0x203fc + (35 * 0x20) },
    { L"Victor PP Pharaoh's Curse", 0x203dc + (36 * 0x20), 0x203fc + (36 * 0x20) },
    { L"Victor KK Pharaoh's Curse", 0x203dc + (37 * 0x20), 0x203fc + (37 * 0x20) },
    { L"Victor AP Pharaoh's Curse", 0x203dc + (38 * 0x20), 0x203fc + (38 * 0x20) },
    { L"Victor AK Pharaoh's Curse", 0x203dc + (39 * 0x20), 0x203fc + (39 * 0x20) },
    { L"Victor ES 1",               0x203dc + (40 * 0x20), 0x203fc + (40 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ES 2",               0x203dc + (41 * 0x20), 0x203fc + (41 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ES 3",               0x203dc + (42 * 0x20), 0x203fc + (42 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ES 4",               0x203dc + (43 * 0x20), 0x203fc + (43 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 1",               0x203dc + (44 * 0x20), 0x203fc + (44 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 2",               0x203dc + (45 * 0x20), 0x203fc + (45 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 3",               0x203dc + (46 * 0x20), 0x203fc + (46 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 4",               0x203dc + (47 * 0x20), 0x203fc + (47 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 5",               0x203dc + (48 * 0x20), 0x203fc + (48 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 6",               0x203dc + (49 * 0x20), 0x203fc + (49 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 7",               0x203dc + (50 * 0x20), 0x203fc + (50 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor EX 8",               0x203dc + (51 * 0x20), 0x203fc + (51 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor Prova di Servo",     0x203dc + (52 * 0x20), 0x203fc + (52 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor Finale Rosso",       0x203dc + (53 * 0x20), 0x203fc + (53 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor Stone",              0x203dc + (54 * 0x20), 0x203fc + (54 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Midnight Bliss",  0x203dc + (55 * 0x20), 0x203fc + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MP Midnight Bliss",  0x203dc + (56 * 0x20), 0x203fc + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HP Midnight Bliss",  0x203dc + (57 * 0x20), 0x203fc + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor LK Midnight Bliss",  0x203dc + (58 * 0x20), 0x203fc + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor MK Midnight Bliss",  0x203dc + (59 * 0x20), 0x203fc + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor HK Midnight Bliss",  0x203dc + (60 * 0x20), 0x203fc + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor PP Midnight Bliss",  0x203dc + (61 * 0x20), 0x203fc + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor KK Midnight Bliss",  0x203dc + (62 * 0x20), 0x203fc + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AP Midnight Bliss",  0x203dc + (63 * 0x20), 0x203fc + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor AK Midnight Bliss",  0x203dc + (64 * 0x20), 0x203fc + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Victor },
    { L"Victor Q-Bee's QJ Honey",   0x203dc + (65 * 0x20), 0x203fc + (65 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 1",    0x203dc + (66 * 0x20), 0x203fc + (66 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 2",    0x203dc + (67 * 0x20), 0x203fc + (67 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 3",    0x203dc + (68 * 0x20), 0x203fc + (68 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LP Dark Force 4",    0x203dc + (69 * 0x20), 0x203fc + (69 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 1",    0x203dc + (70 * 0x20), 0x203fc + (70 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 2",    0x203dc + (71 * 0x20), 0x203fc + (71 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 3",    0x203dc + (72 * 0x20), 0x203fc + (72 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MP Dark Force 4",    0x203dc + (73 * 0x20), 0x203fc + (73 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 1",    0x203dc + (74 * 0x20), 0x203fc + (74 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 2",    0x203dc + (75 * 0x20), 0x203fc + (75 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 3",    0x203dc + (76 * 0x20), 0x203fc + (76 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HP Dark Force 4",    0x203dc + (77 * 0x20), 0x203fc + (77 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 1",    0x203dc + (78 * 0x20), 0x203fc + (78 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 2",    0x203dc + (79 * 0x20), 0x203fc + (79 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 3",    0x203dc + (80 * 0x20), 0x203fc + (80 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor LK Dark Force 4",    0x203dc + (81 * 0x20), 0x203fc + (81 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 1",    0x203dc + (82 * 0x20), 0x203fc + (82 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 2",    0x203dc + (83 * 0x20), 0x203fc + (83 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 3",    0x203dc + (84 * 0x20), 0x203fc + (84 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor MK Dark Force 4",    0x203dc + (85 * 0x20), 0x203fc + (85 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 1",    0x203dc + (86 * 0x20), 0x203fc + (86 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 2",    0x203dc + (87 * 0x20), 0x203fc + (87 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 3",    0x203dc + (88 * 0x20), 0x203fc + (88 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor HK Dark Force 4",    0x203dc + (89 * 0x20), 0x203fc + (89 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 1",    0x203dc + (90 * 0x20), 0x203fc + (90 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 2",    0x203dc + (91 * 0x20), 0x203fc + (91 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 3",    0x203dc + (92 * 0x20), 0x203fc + (92 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor PP Dark Force 4",    0x203dc + (93 * 0x20), 0x203fc + (93 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 1",    0x203dc + (94 * 0x20), 0x203fc + (94 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 2",    0x203dc + (95 * 0x20), 0x203fc + (95 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 3",    0x203dc + (96 * 0x20), 0x203fc + (96 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor KK Dark Force 4",    0x203dc + (97 * 0x20), 0x203fc + (97 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 1",    0x203dc + (98 * 0x20), 0x203fc + (98 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 2",    0x203dc + (99 * 0x20), 0x203fc + (99 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 3",    0x203dc + (100 * 0x20), 0x203fc + (100 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AP Dark Force 4",    0x203dc + (101 * 0x20), 0x203fc + (101 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 1",    0x203dc + (102 * 0x20), 0x203fc + (102 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 2",    0x203dc + (103 * 0x20), 0x203fc + (103 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 3",    0x203dc + (104 * 0x20), 0x203fc + (104 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor AK Dark Force 4",    0x203dc + (105 * 0x20), 0x203fc + (105 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 1",              0x203dc + (106 * 0x20), 0x203fc + (106 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 2",              0x203dc + (107 * 0x20), 0x203fc + (107 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 3",              0x203dc + (108 * 0x20), 0x203fc + (108 * 0x20), indexCPS2_Vamp_Victor },
    { L"Victor ??? 4",              0x203dc + (109 * 0x20), 0x203fc + (109 * 0x20), indexCPS2_Vamp_Victor },
};

const sGame_PaletteDataset VSAV2_A_Zabel_PALETTES_SPECIAL[] =
{
    { L"Zabel LP Poisoned",        0x2119C + (0 * 0x20), 0x211BC + (0 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Poisoned",        0x2119C + (1 * 0x20), 0x211BC + (1 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Poisoned",        0x2119C + (2 * 0x20), 0x211BC + (2 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Poisoned",        0x2119C + (3 * 0x20), 0x211BC + (3 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Poisoned",        0x2119C + (4 * 0x20), 0x211BC + (4 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Poisoned",        0x2119C + (5 * 0x20), 0x211BC + (5 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Poisoned",        0x2119C + (6 * 0x20), 0x211BC + (6 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Poisoned",        0x2119C + (7 * 0x20), 0x211BC + (7 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Poisoned",        0x2119C + (8 * 0x20), 0x211BC + (8 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Poisoned",        0x2119C + (9 * 0x20), 0x211BC + (9 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Zapped",          0x2119C + (10 * 0x20), 0x211BC + (10 * 0x20) },
    { L"Zabel MP Zapped",          0x2119C + (11 * 0x20), 0x211BC + (11 * 0x20) },
    { L"Zabel HP Zapped",          0x2119C + (12 * 0x20), 0x211BC + (12 * 0x20) },
    { L"Zabel LK Zapped",          0x2119C + (13 * 0x20), 0x211BC + (13 * 0x20) },
    { L"Zabel MK Zapped",          0x2119C + (14 * 0x20), 0x211BC + (14 * 0x20) },
    { L"Zabel HK Zapped",          0x2119C + (15 * 0x20), 0x211BC + (15 * 0x20) },
    { L"Zabel PP Zapped",          0x2119C + (16 * 0x20), 0x211BC + (16 * 0x20) },
    { L"Zabel KK Zapped",          0x2119C + (17 * 0x20), 0x211BC + (17 * 0x20) },
    { L"Zabel AP Zapped",          0x2119C + (18 * 0x20), 0x211BC + (18 * 0x20) },
    { L"Zabel AK Zapped",          0x2119C + (19 * 0x20), 0x211BC + (19 * 0x20) },
    { L"Zabel LP Burned",          0x2119C + (20 * 0x20), 0x211BC + (20 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Burned",          0x2119C + (21 * 0x20), 0x211BC + (21 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Burned",          0x2119C + (22 * 0x20), 0x211BC + (22 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Burned",          0x2119C + (23 * 0x20), 0x211BC + (23 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Burned",          0x2119C + (24 * 0x20), 0x211BC + (24 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Burned",          0x2119C + (25 * 0x20), 0x211BC + (25 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Burned",          0x2119C + (26 * 0x20), 0x211BC + (26 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Burned",          0x2119C + (27 * 0x20), 0x211BC + (27 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Burned",          0x2119C + (28 * 0x20), 0x211BC + (28 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Burned",          0x2119C + (29 * 0x20), 0x211BC + (29 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Pharaoh's Curse", 0x2119C + (30 * 0x20), 0x211BC + (30 * 0x20) },
    { L"Zabel MP Pharaoh's Curse", 0x2119C + (31 * 0x20), 0x211BC + (31 * 0x20) },
    { L"Zabel HP Pharaoh's Curse", 0x2119C + (32 * 0x20), 0x211BC + (32 * 0x20) },
    { L"Zabel LK Pharaoh's Curse", 0x2119C + (33 * 0x20), 0x211BC + (33 * 0x20) },
    { L"Zabel MK Pharaoh's Curse", 0x2119C + (34 * 0x20), 0x211BC + (34 * 0x20) },
    { L"Zabel HK Pharaoh's Curse", 0x2119C + (35 * 0x20), 0x211BC + (35 * 0x20) },
    { L"Zabel PP Pharaoh's Curse", 0x2119C + (36 * 0x20), 0x211BC + (36 * 0x20) },
    { L"Zabel KK Pharaoh's Curse", 0x2119C + (37 * 0x20), 0x211BC + (37 * 0x20) },
    { L"Zabel AP Pharaoh's Curse", 0x2119C + (38 * 0x20), 0x211BC + (38 * 0x20) },
    { L"Zabel AK Pharaoh's Curse", 0x2119C + (39 * 0x20), 0x211BC + (39 * 0x20) },
    { L"Zabel ES 1",               0x2119C + (40 * 0x20), 0x211BC + (40 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ES 2",               0x2119C + (41 * 0x20), 0x211BC + (41 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ES 3",               0x2119C + (42 * 0x20), 0x211BC + (42 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ES 4",               0x2119C + (43 * 0x20), 0x211BC + (43 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 1",               0x2119C + (44 * 0x20), 0x211BC + (44 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 2",               0x2119C + (45 * 0x20), 0x211BC + (45 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 3",               0x2119C + (46 * 0x20), 0x211BC + (46 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 4",               0x2119C + (47 * 0x20), 0x211BC + (47 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 5",               0x2119C + (48 * 0x20), 0x211BC + (48 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 6",               0x2119C + (49 * 0x20), 0x211BC + (49 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 7",               0x2119C + (50 * 0x20), 0x211BC + (50 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel EX 8",               0x2119C + (51 * 0x20), 0x211BC + (51 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel Prova di Servo",     0x2119C + (52 * 0x20), 0x211BC + (52 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel Finale Rosso",       0x2119C + (53 * 0x20), 0x211BC + (53 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel Stone",              0x2119C + (54 * 0x20), 0x211BC + (54 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Midnight Bliss",  0x2119C + (55 * 0x20), 0x211BC + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MP Midnight Bliss",  0x2119C + (56 * 0x20), 0x211BC + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HP Midnight Bliss",  0x2119C + (57 * 0x20), 0x211BC + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel LK Midnight Bliss",  0x2119C + (58 * 0x20), 0x211BC + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel MK Midnight Bliss",  0x2119C + (59 * 0x20), 0x211BC + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel HK Midnight Bliss",  0x2119C + (60 * 0x20), 0x211BC + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel PP Midnight Bliss",  0x2119C + (61 * 0x20), 0x211BC + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel KK Midnight Bliss",  0x2119C + (62 * 0x20), 0x211BC + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AP Midnight Bliss",  0x2119C + (63 * 0x20), 0x211BC + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel AK Midnight Bliss",  0x2119C + (64 * 0x20), 0x211BC + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Zabel },
    { L"Zabel Q-Bee's QJ Honey",   0x2119C + (65 * 0x20), 0x211BC + (65 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 1",    0x2119C + (66 * 0x20), 0x211BC + (66 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 2",    0x2119C + (67 * 0x20), 0x211BC + (67 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 3",    0x2119C + (68 * 0x20), 0x211BC + (68 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LP Dark Force 4",    0x2119C + (69 * 0x20), 0x211BC + (69 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 1",    0x2119C + (70 * 0x20), 0x211BC + (70 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 2",    0x2119C + (71 * 0x20), 0x211BC + (71 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 3",    0x2119C + (72 * 0x20), 0x211BC + (72 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MP Dark Force 4",    0x2119C + (73 * 0x20), 0x211BC + (73 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 1",    0x2119C + (74 * 0x20), 0x211BC + (74 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 2",    0x2119C + (75 * 0x20), 0x211BC + (75 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 3",    0x2119C + (76 * 0x20), 0x211BC + (76 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HP Dark Force 4",    0x2119C + (77 * 0x20), 0x211BC + (77 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 1",    0x2119C + (78 * 0x20), 0x211BC + (78 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 2",    0x2119C + (79 * 0x20), 0x211BC + (79 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 3",    0x2119C + (80 * 0x20), 0x211BC + (80 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel LK Dark Force 4",    0x2119C + (81 * 0x20), 0x211BC + (81 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 1",    0x2119C + (82 * 0x20), 0x211BC + (82 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 2",    0x2119C + (83 * 0x20), 0x211BC + (83 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 3",    0x2119C + (84 * 0x20), 0x211BC + (84 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel MK Dark Force 4",    0x2119C + (85 * 0x20), 0x211BC + (85 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 1",    0x2119C + (86 * 0x20), 0x211BC + (86 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 2",    0x2119C + (87 * 0x20), 0x211BC + (87 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 3",    0x2119C + (88 * 0x20), 0x211BC + (88 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel HK Dark Force 4",    0x2119C + (89 * 0x20), 0x211BC + (89 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 1",    0x2119C + (90 * 0x20), 0x211BC + (90 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 2",    0x2119C + (91 * 0x20), 0x211BC + (91 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 3",    0x2119C + (92 * 0x20), 0x211BC + (92 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel PP Dark Force 4",    0x2119C + (93 * 0x20), 0x211BC + (93 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 1",    0x2119C + (94 * 0x20), 0x211BC + (94 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 2",    0x2119C + (95 * 0x20), 0x211BC + (95 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 3",    0x2119C + (96 * 0x20), 0x211BC + (96 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel KK Dark Force 4",    0x2119C + (97 * 0x20), 0x211BC + (97 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 1",    0x2119C + (98 * 0x20), 0x211BC + (98 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 2",    0x2119C + (99 * 0x20), 0x211BC + (99 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 3",    0x2119C + (100 * 0x20), 0x211BC + (100 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AP Dark Force 4",    0x2119C + (101 * 0x20), 0x211BC + (101 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 1",    0x2119C + (102 * 0x20), 0x211BC + (102 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 2",    0x2119C + (103 * 0x20), 0x211BC + (103 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 3",    0x2119C + (104 * 0x20), 0x211BC + (104 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel AK Dark Force 4",    0x2119C + (105 * 0x20), 0x211BC + (105 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 1",              0x2119C + (106 * 0x20), 0x211BC + (106 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 2",              0x2119C + (107 * 0x20), 0x211BC + (107 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 3",              0x2119C + (108 * 0x20), 0x211BC + (108 * 0x20), indexCPS2_Vamp_Zabel },
    { L"Zabel ??? 4",              0x2119C + (109 * 0x20), 0x211BC + (109 * 0x20), indexCPS2_Vamp_Zabel },
};

const sGame_PaletteDataset VSAV2_A_Morrigan_PALETTES_SPECIAL[] =
{
    { L"Morrigan LP Poisoned",        0x2119C + (1 * 0xDC0) + (0 * 0x20), 0x211BC + (1 * 0xDC0) + (0 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Poisoned",        0x2119C + (1 * 0xDC0) + (1 * 0x20), 0x211BC + (1 * 0xDC0) + (1 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Poisoned",        0x2119C + (1 * 0xDC0) + (2 * 0x20), 0x211BC + (1 * 0xDC0) + (2 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Poisoned",        0x2119C + (1 * 0xDC0) + (3 * 0x20), 0x211BC + (1 * 0xDC0) + (3 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Poisoned",        0x2119C + (1 * 0xDC0) + (4 * 0x20), 0x211BC + (1 * 0xDC0) + (4 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Poisoned",        0x2119C + (1 * 0xDC0) + (5 * 0x20), 0x211BC + (1 * 0xDC0) + (5 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Poisoned",        0x2119C + (1 * 0xDC0) + (6 * 0x20), 0x211BC + (1 * 0xDC0) + (6 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Poisoned",        0x2119C + (1 * 0xDC0) + (7 * 0x20), 0x211BC + (1 * 0xDC0) + (7 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Poisoned",        0x2119C + (1 * 0xDC0) + (8 * 0x20), 0x211BC + (1 * 0xDC0) + (8 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Poisoned",        0x2119C + (1 * 0xDC0) + (9 * 0x20), 0x211BC + (1 * 0xDC0) + (9 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Zapped",          0x2119C + (1 * 0xDC0) + (10 * 0x20), 0x211BC + (1 * 0xDC0) + (10 * 0x20) },
    { L"Morrigan MP Zapped",          0x2119C + (1 * 0xDC0) + (11 * 0x20), 0x211BC + (1 * 0xDC0) + (11 * 0x20) },
    { L"Morrigan HP Zapped",          0x2119C + (1 * 0xDC0) + (12 * 0x20), 0x211BC + (1 * 0xDC0) + (12 * 0x20) },
    { L"Morrigan LK Zapped",          0x2119C + (1 * 0xDC0) + (13 * 0x20), 0x211BC + (1 * 0xDC0) + (13 * 0x20) },
    { L"Morrigan MK Zapped",          0x2119C + (1 * 0xDC0) + (14 * 0x20), 0x211BC + (1 * 0xDC0) + (14 * 0x20) },
    { L"Morrigan HK Zapped",          0x2119C + (1 * 0xDC0) + (15 * 0x20), 0x211BC + (1 * 0xDC0) + (15 * 0x20) },
    { L"Morrigan PP Zapped",          0x2119C + (1 * 0xDC0) + (16 * 0x20), 0x211BC + (1 * 0xDC0) + (16 * 0x20) },
    { L"Morrigan KK Zapped",          0x2119C + (1 * 0xDC0) + (17 * 0x20), 0x211BC + (1 * 0xDC0) + (17 * 0x20) },
    { L"Morrigan AP Zapped",          0x2119C + (1 * 0xDC0) + (18 * 0x20), 0x211BC + (1 * 0xDC0) + (18 * 0x20) },
    { L"Morrigan AK Zapped",          0x2119C + (1 * 0xDC0) + (19 * 0x20), 0x211BC + (1 * 0xDC0) + (19 * 0x20) },
    { L"Morrigan LP Burned",          0x2119C + (1 * 0xDC0) + (20 * 0x20), 0x211BC + (1 * 0xDC0) + (20 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Burned",          0x2119C + (1 * 0xDC0) + (21 * 0x20), 0x211BC + (1 * 0xDC0) + (21 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Burned",          0x2119C + (1 * 0xDC0) + (22 * 0x20), 0x211BC + (1 * 0xDC0) + (22 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Burned",          0x2119C + (1 * 0xDC0) + (23 * 0x20), 0x211BC + (1 * 0xDC0) + (23 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Burned",          0x2119C + (1 * 0xDC0) + (24 * 0x20), 0x211BC + (1 * 0xDC0) + (24 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Burned",          0x2119C + (1 * 0xDC0) + (25 * 0x20), 0x211BC + (1 * 0xDC0) + (25 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Burned",          0x2119C + (1 * 0xDC0) + (26 * 0x20), 0x211BC + (1 * 0xDC0) + (26 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Burned",          0x2119C + (1 * 0xDC0) + (27 * 0x20), 0x211BC + (1 * 0xDC0) + (27 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Burned",          0x2119C + (1 * 0xDC0) + (28 * 0x20), 0x211BC + (1 * 0xDC0) + (28 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Burned",          0x2119C + (1 * 0xDC0) + (29 * 0x20), 0x211BC + (1 * 0xDC0) + (29 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (30 * 0x20), 0x211BC + (1 * 0xDC0) + (30 * 0x20) },
    { L"Morrigan MP Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (31 * 0x20), 0x211BC + (1 * 0xDC0) + (31 * 0x20) },
    { L"Morrigan HP Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (32 * 0x20), 0x211BC + (1 * 0xDC0) + (32 * 0x20) },
    { L"Morrigan LK Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (33 * 0x20), 0x211BC + (1 * 0xDC0) + (33 * 0x20) },
    { L"Morrigan MK Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (34 * 0x20), 0x211BC + (1 * 0xDC0) + (34 * 0x20) },
    { L"Morrigan HK Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (35 * 0x20), 0x211BC + (1 * 0xDC0) + (35 * 0x20) },
    { L"Morrigan PP Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (36 * 0x20), 0x211BC + (1 * 0xDC0) + (36 * 0x20) },
    { L"Morrigan KK Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (37 * 0x20), 0x211BC + (1 * 0xDC0) + (37 * 0x20) },
    { L"Morrigan AP Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (38 * 0x20), 0x211BC + (1 * 0xDC0) + (38 * 0x20) },
    { L"Morrigan AK Pharaoh's Curse", 0x2119C + (1 * 0xDC0) + (39 * 0x20), 0x211BC + (1 * 0xDC0) + (39 * 0x20) },
    { L"Morrigan ES 1",               0x2119C + (1 * 0xDC0) + (40 * 0x20), 0x211BC + (1 * 0xDC0) + (40 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ES 2",               0x2119C + (1 * 0xDC0) + (41 * 0x20), 0x211BC + (1 * 0xDC0) + (41 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ES 3",               0x2119C + (1 * 0xDC0) + (42 * 0x20), 0x211BC + (1 * 0xDC0) + (42 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ES 4",               0x2119C + (1 * 0xDC0) + (43 * 0x20), 0x211BC + (1 * 0xDC0) + (43 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 1",               0x2119C + (1 * 0xDC0) + (44 * 0x20), 0x211BC + (1 * 0xDC0) + (44 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 2",               0x2119C + (1 * 0xDC0) + (45 * 0x20), 0x211BC + (1 * 0xDC0) + (45 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 3",               0x2119C + (1 * 0xDC0) + (46 * 0x20), 0x211BC + (1 * 0xDC0) + (46 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 4",               0x2119C + (1 * 0xDC0) + (47 * 0x20), 0x211BC + (1 * 0xDC0) + (47 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 5",               0x2119C + (1 * 0xDC0) + (48 * 0x20), 0x211BC + (1 * 0xDC0) + (48 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 6",               0x2119C + (1 * 0xDC0) + (49 * 0x20), 0x211BC + (1 * 0xDC0) + (49 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 7",               0x2119C + (1 * 0xDC0) + (50 * 0x20), 0x211BC + (1 * 0xDC0) + (50 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan EX 8",               0x2119C + (1 * 0xDC0) + (51 * 0x20), 0x211BC + (1 * 0xDC0) + (51 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan Prova di Servo",     0x2119C + (1 * 0xDC0) + (52 * 0x20), 0x211BC + (1 * 0xDC0) + (52 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan Finale Rosso",       0x2119C + (1 * 0xDC0) + (53 * 0x20), 0x211BC + (1 * 0xDC0) + (53 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan Stone",              0x2119C + (1 * 0xDC0) + (54 * 0x20), 0x211BC + (1 * 0xDC0) + (54 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Midnight Bliss",  0x2119C + (1 * 0xDC0) + (55 * 0x20), 0x211BC + (1 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MP Midnight Bliss",  0x2119C + (1 * 0xDC0) + (56 * 0x20), 0x211BC + (1 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HP Midnight Bliss",  0x2119C + (1 * 0xDC0) + (57 * 0x20), 0x211BC + (1 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan LK Midnight Bliss",  0x2119C + (1 * 0xDC0) + (58 * 0x20), 0x211BC + (1 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan MK Midnight Bliss",  0x2119C + (1 * 0xDC0) + (59 * 0x20), 0x211BC + (1 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan HK Midnight Bliss",  0x2119C + (1 * 0xDC0) + (60 * 0x20), 0x211BC + (1 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan PP Midnight Bliss",  0x2119C + (1 * 0xDC0) + (61 * 0x20), 0x211BC + (1 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan KK Midnight Bliss",  0x2119C + (1 * 0xDC0) + (62 * 0x20), 0x211BC + (1 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AP Midnight Bliss",  0x2119C + (1 * 0xDC0) + (63 * 0x20), 0x211BC + (1 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan AK Midnight Bliss",  0x2119C + (1 * 0xDC0) + (64 * 0x20), 0x211BC + (1 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Morrigan },
    { L"Morrigan Q-Bee's QJ Honey",   0x2119C + (1 * 0xDC0) + (65 * 0x20), 0x211BC + (1 * 0xDC0) + (65 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 1",    0x2119C + (1 * 0xDC0) + (66 * 0x20), 0x211BC + (1 * 0xDC0) + (66 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 2",    0x2119C + (1 * 0xDC0) + (67 * 0x20), 0x211BC + (1 * 0xDC0) + (67 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 3",    0x2119C + (1 * 0xDC0) + (68 * 0x20), 0x211BC + (1 * 0xDC0) + (68 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LP Dark Force 4",    0x2119C + (1 * 0xDC0) + (69 * 0x20), 0x211BC + (1 * 0xDC0) + (69 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 1",    0x2119C + (1 * 0xDC0) + (70 * 0x20), 0x211BC + (1 * 0xDC0) + (70 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 2",    0x2119C + (1 * 0xDC0) + (71 * 0x20), 0x211BC + (1 * 0xDC0) + (71 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 3",    0x2119C + (1 * 0xDC0) + (72 * 0x20), 0x211BC + (1 * 0xDC0) + (72 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MP Dark Force 4",    0x2119C + (1 * 0xDC0) + (73 * 0x20), 0x211BC + (1 * 0xDC0) + (73 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 1",    0x2119C + (1 * 0xDC0) + (74 * 0x20), 0x211BC + (1 * 0xDC0) + (74 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 2",    0x2119C + (1 * 0xDC0) + (75 * 0x20), 0x211BC + (1 * 0xDC0) + (75 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 3",    0x2119C + (1 * 0xDC0) + (76 * 0x20), 0x211BC + (1 * 0xDC0) + (76 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HP Dark Force 4",    0x2119C + (1 * 0xDC0) + (77 * 0x20), 0x211BC + (1 * 0xDC0) + (77 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 1",    0x2119C + (1 * 0xDC0) + (78 * 0x20), 0x211BC + (1 * 0xDC0) + (78 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 2",    0x2119C + (1 * 0xDC0) + (79 * 0x20), 0x211BC + (1 * 0xDC0) + (79 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 3",    0x2119C + (1 * 0xDC0) + (80 * 0x20), 0x211BC + (1 * 0xDC0) + (80 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan LK Dark Force 4",    0x2119C + (1 * 0xDC0) + (81 * 0x20), 0x211BC + (1 * 0xDC0) + (81 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 1",    0x2119C + (1 * 0xDC0) + (82 * 0x20), 0x211BC + (1 * 0xDC0) + (82 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 2",    0x2119C + (1 * 0xDC0) + (83 * 0x20), 0x211BC + (1 * 0xDC0) + (83 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 3",    0x2119C + (1 * 0xDC0) + (84 * 0x20), 0x211BC + (1 * 0xDC0) + (84 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan MK Dark Force 4",    0x2119C + (1 * 0xDC0) + (85 * 0x20), 0x211BC + (1 * 0xDC0) + (85 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 1",    0x2119C + (1 * 0xDC0) + (86 * 0x20), 0x211BC + (1 * 0xDC0) + (86 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 2",    0x2119C + (1 * 0xDC0) + (87 * 0x20), 0x211BC + (1 * 0xDC0) + (87 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 3",    0x2119C + (1 * 0xDC0) + (88 * 0x20), 0x211BC + (1 * 0xDC0) + (88 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan HK Dark Force 4",    0x2119C + (1 * 0xDC0) + (89 * 0x20), 0x211BC + (1 * 0xDC0) + (89 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 1",    0x2119C + (1 * 0xDC0) + (90 * 0x20), 0x211BC + (1 * 0xDC0) + (90 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 2",    0x2119C + (1 * 0xDC0) + (91 * 0x20), 0x211BC + (1 * 0xDC0) + (91 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 3",    0x2119C + (1 * 0xDC0) + (92 * 0x20), 0x211BC + (1 * 0xDC0) + (92 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan PP Dark Force 4",    0x2119C + (1 * 0xDC0) + (93 * 0x20), 0x211BC + (1 * 0xDC0) + (93 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 1",    0x2119C + (1 * 0xDC0) + (94 * 0x20), 0x211BC + (1 * 0xDC0) + (94 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 2",    0x2119C + (1 * 0xDC0) + (95 * 0x20), 0x211BC + (1 * 0xDC0) + (95 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 3",    0x2119C + (1 * 0xDC0) + (96 * 0x20), 0x211BC + (1 * 0xDC0) + (96 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan KK Dark Force 4",    0x2119C + (1 * 0xDC0) + (97 * 0x20), 0x211BC + (1 * 0xDC0) + (97 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 1",    0x2119C + (1 * 0xDC0) + (98 * 0x20), 0x211BC + (1 * 0xDC0) + (98 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 2",    0x2119C + (1 * 0xDC0) + (99 * 0x20), 0x211BC + (1 * 0xDC0) + (99 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 3",    0x2119C + (1 * 0xDC0) + (100 * 0x20), 0x211BC + (1 * 0xDC0) + (100 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AP Dark Force 4",    0x2119C + (1 * 0xDC0) + (101 * 0x20), 0x211BC + (1 * 0xDC0) + (101 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 1",    0x2119C + (1 * 0xDC0) + (102 * 0x20), 0x211BC + (1 * 0xDC0) + (102 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 2",    0x2119C + (1 * 0xDC0) + (103 * 0x20), 0x211BC + (1 * 0xDC0) + (103 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 3",    0x2119C + (1 * 0xDC0) + (104 * 0x20), 0x211BC + (1 * 0xDC0) + (104 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan AK Dark Force 4",    0x2119C + (1 * 0xDC0) + (105 * 0x20), 0x211BC + (1 * 0xDC0) + (105 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 1",              0x2119C + (1 * 0xDC0) + (106 * 0x20), 0x211BC + (1 * 0xDC0) + (106 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 2",              0x2119C + (1 * 0xDC0) + (107 * 0x20), 0x211BC + (1 * 0xDC0) + (107 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 3",              0x2119C + (1 * 0xDC0) + (108 * 0x20), 0x211BC + (1 * 0xDC0) + (108 * 0x20), indexCPS2_Morrigan },
    { L"Morrigan ??? 4",              0x2119C + (1 * 0xDC0) + (109 * 0x20), 0x211BC + (1 * 0xDC0) + (109 * 0x20), indexCPS2_Morrigan },
};

const sGame_PaletteDataset VSAV2_A_Anakaris_PALETTES_SPECIAL[] =
{
    { L"Anakaris LP Poisoned",        0x2119C + (2 * 0xDC0) + (0 * 0x20), 0x211BC + (2 * 0xDC0) + (0 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Poisoned",        0x2119C + (2 * 0xDC0) + (1 * 0x20), 0x211BC + (2 * 0xDC0) + (1 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Poisoned",        0x2119C + (2 * 0xDC0) + (2 * 0x20), 0x211BC + (2 * 0xDC0) + (2 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Poisoned",        0x2119C + (2 * 0xDC0) + (3 * 0x20), 0x211BC + (2 * 0xDC0) + (3 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Poisoned",        0x2119C + (2 * 0xDC0) + (4 * 0x20), 0x211BC + (2 * 0xDC0) + (4 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Poisoned",        0x2119C + (2 * 0xDC0) + (5 * 0x20), 0x211BC + (2 * 0xDC0) + (5 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Poisoned",        0x2119C + (2 * 0xDC0) + (6 * 0x20), 0x211BC + (2 * 0xDC0) + (6 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Poisoned",        0x2119C + (2 * 0xDC0) + (7 * 0x20), 0x211BC + (2 * 0xDC0) + (7 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Poisoned",        0x2119C + (2 * 0xDC0) + (8 * 0x20), 0x211BC + (2 * 0xDC0) + (8 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Poisoned",        0x2119C + (2 * 0xDC0) + (9 * 0x20), 0x211BC + (2 * 0xDC0) + (9 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Zapped",          0x2119C + (2 * 0xDC0) + (10 * 0x20), 0x211BC + (2 * 0xDC0) + (10 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris MP Zapped",          0x2119C + (2 * 0xDC0) + (11 * 0x20), 0x211BC + (2 * 0xDC0) + (11 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris HP Zapped",          0x2119C + (2 * 0xDC0) + (12 * 0x20), 0x211BC + (2 * 0xDC0) + (12 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris LK Zapped",          0x2119C + (2 * 0xDC0) + (13 * 0x20), 0x211BC + (2 * 0xDC0) + (13 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris MK Zapped",          0x2119C + (2 * 0xDC0) + (14 * 0x20), 0x211BC + (2 * 0xDC0) + (14 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris HK Zapped",          0x2119C + (2 * 0xDC0) + (15 * 0x20), 0x211BC + (2 * 0xDC0) + (15 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris PP Zapped",          0x2119C + (2 * 0xDC0) + (16 * 0x20), 0x211BC + (2 * 0xDC0) + (16 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris KK Zapped",          0x2119C + (2 * 0xDC0) + (17 * 0x20), 0x211BC + (2 * 0xDC0) + (17 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris AP Zapped",          0x2119C + (2 * 0xDC0) + (18 * 0x20), 0x211BC + (2 * 0xDC0) + (18 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris AK Zapped",          0x2119C + (2 * 0xDC0) + (19 * 0x20), 0x211BC + (2 * 0xDC0) + (19 * 0x20), indexCPS2_Anakaris, 0x0c },
    { L"Anakaris LP Burned",          0x2119C + (2 * 0xDC0) + (20 * 0x20), 0x211BC + (2 * 0xDC0) + (20 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Burned",          0x2119C + (2 * 0xDC0) + (21 * 0x20), 0x211BC + (2 * 0xDC0) + (21 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Burned",          0x2119C + (2 * 0xDC0) + (22 * 0x20), 0x211BC + (2 * 0xDC0) + (22 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Burned",          0x2119C + (2 * 0xDC0) + (23 * 0x20), 0x211BC + (2 * 0xDC0) + (23 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Burned",          0x2119C + (2 * 0xDC0) + (24 * 0x20), 0x211BC + (2 * 0xDC0) + (24 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Burned",          0x2119C + (2 * 0xDC0) + (25 * 0x20), 0x211BC + (2 * 0xDC0) + (25 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Burned",          0x2119C + (2 * 0xDC0) + (26 * 0x20), 0x211BC + (2 * 0xDC0) + (26 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Burned",          0x2119C + (2 * 0xDC0) + (27 * 0x20), 0x211BC + (2 * 0xDC0) + (27 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Burned",          0x2119C + (2 * 0xDC0) + (28 * 0x20), 0x211BC + (2 * 0xDC0) + (28 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Burned",          0x2119C + (2 * 0xDC0) + (29 * 0x20), 0x211BC + (2 * 0xDC0) + (29 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (30 * 0x20), 0x211BC + (2 * 0xDC0) + (30 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MP Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (31 * 0x20), 0x211BC + (2 * 0xDC0) + (31 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HP Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (32 * 0x20), 0x211BC + (2 * 0xDC0) + (32 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris LK Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (33 * 0x20), 0x211BC + (2 * 0xDC0) + (33 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris MK Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (34 * 0x20), 0x211BC + (2 * 0xDC0) + (34 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris HK Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (35 * 0x20), 0x211BC + (2 * 0xDC0) + (35 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris PP Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (36 * 0x20), 0x211BC + (2 * 0xDC0) + (36 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris KK Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (37 * 0x20), 0x211BC + (2 * 0xDC0) + (37 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AP Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (38 * 0x20), 0x211BC + (2 * 0xDC0) + (38 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris AK Pharaoh's Curse", 0x2119C + (2 * 0xDC0) + (39 * 0x20), 0x211BC + (2 * 0xDC0) + (39 * 0x20), indexCPS2_Anakaris, 0x0d },
    { L"Anakaris ES 1",               0x2119C + (2 * 0xDC0) + (40 * 0x20), 0x211BC + (2 * 0xDC0) + (40 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ES 2",               0x2119C + (2 * 0xDC0) + (41 * 0x20), 0x211BC + (2 * 0xDC0) + (41 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ES 3",               0x2119C + (2 * 0xDC0) + (42 * 0x20), 0x211BC + (2 * 0xDC0) + (42 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ES 4",               0x2119C + (2 * 0xDC0) + (43 * 0x20), 0x211BC + (2 * 0xDC0) + (43 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 1",               0x2119C + (2 * 0xDC0) + (44 * 0x20), 0x211BC + (2 * 0xDC0) + (44 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 2",               0x2119C + (2 * 0xDC0) + (45 * 0x20), 0x211BC + (2 * 0xDC0) + (45 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 3",               0x2119C + (2 * 0xDC0) + (46 * 0x20), 0x211BC + (2 * 0xDC0) + (46 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 4",               0x2119C + (2 * 0xDC0) + (47 * 0x20), 0x211BC + (2 * 0xDC0) + (47 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 5",               0x2119C + (2 * 0xDC0) + (48 * 0x20), 0x211BC + (2 * 0xDC0) + (48 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 6",               0x2119C + (2 * 0xDC0) + (49 * 0x20), 0x211BC + (2 * 0xDC0) + (49 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 7",               0x2119C + (2 * 0xDC0) + (50 * 0x20), 0x211BC + (2 * 0xDC0) + (50 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris EX 8",               0x2119C + (2 * 0xDC0) + (51 * 0x20), 0x211BC + (2 * 0xDC0) + (51 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris Prova di Servo",     0x2119C + (2 * 0xDC0) + (52 * 0x20), 0x211BC + (2 * 0xDC0) + (52 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris Finale Rosso",       0x2119C + (2 * 0xDC0) + (53 * 0x20), 0x211BC + (2 * 0xDC0) + (53 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris Stone",              0x2119C + (2 * 0xDC0) + (54 * 0x20), 0x211BC + (2 * 0xDC0) + (54 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Midnight Bliss",  0x2119C + (2 * 0xDC0) + (55 * 0x20), 0x211BC + (2 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MP Midnight Bliss",  0x2119C + (2 * 0xDC0) + (56 * 0x20), 0x211BC + (2 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HP Midnight Bliss",  0x2119C + (2 * 0xDC0) + (57 * 0x20), 0x211BC + (2 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris LK Midnight Bliss",  0x2119C + (2 * 0xDC0) + (58 * 0x20), 0x211BC + (2 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris MK Midnight Bliss",  0x2119C + (2 * 0xDC0) + (59 * 0x20), 0x211BC + (2 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris HK Midnight Bliss",  0x2119C + (2 * 0xDC0) + (60 * 0x20), 0x211BC + (2 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris PP Midnight Bliss",  0x2119C + (2 * 0xDC0) + (61 * 0x20), 0x211BC + (2 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris KK Midnight Bliss",  0x2119C + (2 * 0xDC0) + (62 * 0x20), 0x211BC + (2 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AP Midnight Bliss",  0x2119C + (2 * 0xDC0) + (63 * 0x20), 0x211BC + (2 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris AK Midnight Bliss",  0x2119C + (2 * 0xDC0) + (64 * 0x20), 0x211BC + (2 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Anakaris },
    { L"Anakaris Q-Bee's QJ Honey",   0x2119C + (2 * 0xDC0) + (65 * 0x20), 0x211BC + (2 * 0xDC0) + (65 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 1",    0x2119C + (2 * 0xDC0) + (66 * 0x20), 0x211BC + (2 * 0xDC0) + (66 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 2",    0x2119C + (2 * 0xDC0) + (67 * 0x20), 0x211BC + (2 * 0xDC0) + (67 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 3",    0x2119C + (2 * 0xDC0) + (68 * 0x20), 0x211BC + (2 * 0xDC0) + (68 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LP Dark Force 4",    0x2119C + (2 * 0xDC0) + (69 * 0x20), 0x211BC + (2 * 0xDC0) + (69 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 1",    0x2119C + (2 * 0xDC0) + (70 * 0x20), 0x211BC + (2 * 0xDC0) + (70 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 2",    0x2119C + (2 * 0xDC0) + (71 * 0x20), 0x211BC + (2 * 0xDC0) + (71 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 3",    0x2119C + (2 * 0xDC0) + (72 * 0x20), 0x211BC + (2 * 0xDC0) + (72 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MP Dark Force 4",    0x2119C + (2 * 0xDC0) + (73 * 0x20), 0x211BC + (2 * 0xDC0) + (73 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 1",    0x2119C + (2 * 0xDC0) + (74 * 0x20), 0x211BC + (2 * 0xDC0) + (74 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 2",    0x2119C + (2 * 0xDC0) + (75 * 0x20), 0x211BC + (2 * 0xDC0) + (75 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 3",    0x2119C + (2 * 0xDC0) + (76 * 0x20), 0x211BC + (2 * 0xDC0) + (76 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HP Dark Force 4",    0x2119C + (2 * 0xDC0) + (77 * 0x20), 0x211BC + (2 * 0xDC0) + (77 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 1",    0x2119C + (2 * 0xDC0) + (78 * 0x20), 0x211BC + (2 * 0xDC0) + (78 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 2",    0x2119C + (2 * 0xDC0) + (79 * 0x20), 0x211BC + (2 * 0xDC0) + (79 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 3",    0x2119C + (2 * 0xDC0) + (80 * 0x20), 0x211BC + (2 * 0xDC0) + (80 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris LK Dark Force 4",    0x2119C + (2 * 0xDC0) + (81 * 0x20), 0x211BC + (2 * 0xDC0) + (81 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 1",    0x2119C + (2 * 0xDC0) + (82 * 0x20), 0x211BC + (2 * 0xDC0) + (82 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 2",    0x2119C + (2 * 0xDC0) + (83 * 0x20), 0x211BC + (2 * 0xDC0) + (83 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 3",    0x2119C + (2 * 0xDC0) + (84 * 0x20), 0x211BC + (2 * 0xDC0) + (84 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris MK Dark Force 4",    0x2119C + (2 * 0xDC0) + (85 * 0x20), 0x211BC + (2 * 0xDC0) + (85 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 1",    0x2119C + (2 * 0xDC0) + (86 * 0x20), 0x211BC + (2 * 0xDC0) + (86 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 2",    0x2119C + (2 * 0xDC0) + (87 * 0x20), 0x211BC + (2 * 0xDC0) + (87 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 3",    0x2119C + (2 * 0xDC0) + (88 * 0x20), 0x211BC + (2 * 0xDC0) + (88 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris HK Dark Force 4",    0x2119C + (2 * 0xDC0) + (89 * 0x20), 0x211BC + (2 * 0xDC0) + (89 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 1",    0x2119C + (2 * 0xDC0) + (90 * 0x20), 0x211BC + (2 * 0xDC0) + (90 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 2",    0x2119C + (2 * 0xDC0) + (91 * 0x20), 0x211BC + (2 * 0xDC0) + (91 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 3",    0x2119C + (2 * 0xDC0) + (92 * 0x20), 0x211BC + (2 * 0xDC0) + (92 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris PP Dark Force 4",    0x2119C + (2 * 0xDC0) + (93 * 0x20), 0x211BC + (2 * 0xDC0) + (93 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 1",    0x2119C + (2 * 0xDC0) + (94 * 0x20), 0x211BC + (2 * 0xDC0) + (94 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 2",    0x2119C + (2 * 0xDC0) + (95 * 0x20), 0x211BC + (2 * 0xDC0) + (95 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 3",    0x2119C + (2 * 0xDC0) + (96 * 0x20), 0x211BC + (2 * 0xDC0) + (96 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris KK Dark Force 4",    0x2119C + (2 * 0xDC0) + (97 * 0x20), 0x211BC + (2 * 0xDC0) + (97 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 1",    0x2119C + (2 * 0xDC0) + (98 * 0x20), 0x211BC + (2 * 0xDC0) + (98 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 2",    0x2119C + (2 * 0xDC0) + (99 * 0x20), 0x211BC + (2 * 0xDC0) + (99 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 3",    0x2119C + (2 * 0xDC0) + (100 * 0x20), 0x211BC + (2 * 0xDC0) + (100 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AP Dark Force 4",    0x2119C + (2 * 0xDC0) + (101 * 0x20), 0x211BC + (2 * 0xDC0) + (101 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 1",    0x2119C + (2 * 0xDC0) + (102 * 0x20), 0x211BC + (2 * 0xDC0) + (102 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 2",    0x2119C + (2 * 0xDC0) + (103 * 0x20), 0x211BC + (2 * 0xDC0) + (103 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 3",    0x2119C + (2 * 0xDC0) + (104 * 0x20), 0x211BC + (2 * 0xDC0) + (104 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris AK Dark Force 4",    0x2119C + (2 * 0xDC0) + (105 * 0x20), 0x211BC + (2 * 0xDC0) + (105 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 1",              0x2119C + (2 * 0xDC0) + (106 * 0x20), 0x211BC + (2 * 0xDC0) + (106 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 2",              0x2119C + (2 * 0xDC0) + (107 * 0x20), 0x211BC + (2 * 0xDC0) + (107 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 3",              0x2119C + (2 * 0xDC0) + (108 * 0x20), 0x211BC + (2 * 0xDC0) + (108 * 0x20), indexCPS2_Anakaris },
    { L"Anakaris ??? 4",              0x2119C + (2 * 0xDC0) + (109 * 0x20), 0x211BC + (2 * 0xDC0) + (109 * 0x20), indexCPS2_Anakaris },
};

const sGame_PaletteDataset VSAV2_A_Felicia_PALETTES_SPECIAL[] =
{
    { L"Felicia LP Poisoned",        0x2119C + (3 * 0xDC0) + (0 * 0x20), 0x211BC + (3 * 0xDC0) + (0 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Poisoned",        0x2119C + (3 * 0xDC0) + (1 * 0x20), 0x211BC + (3 * 0xDC0) + (1 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Poisoned",        0x2119C + (3 * 0xDC0) + (2 * 0x20), 0x211BC + (3 * 0xDC0) + (2 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Poisoned",        0x2119C + (3 * 0xDC0) + (3 * 0x20), 0x211BC + (3 * 0xDC0) + (3 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Poisoned",        0x2119C + (3 * 0xDC0) + (4 * 0x20), 0x211BC + (3 * 0xDC0) + (4 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Poisoned",        0x2119C + (3 * 0xDC0) + (5 * 0x20), 0x211BC + (3 * 0xDC0) + (5 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Poisoned",        0x2119C + (3 * 0xDC0) + (6 * 0x20), 0x211BC + (3 * 0xDC0) + (6 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Poisoned",        0x2119C + (3 * 0xDC0) + (7 * 0x20), 0x211BC + (3 * 0xDC0) + (7 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Poisoned",        0x2119C + (3 * 0xDC0) + (8 * 0x20), 0x211BC + (3 * 0xDC0) + (8 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Poisoned",        0x2119C + (3 * 0xDC0) + (9 * 0x20), 0x211BC + (3 * 0xDC0) + (9 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Zapped",          0x2119C + (3 * 0xDC0) + (10 * 0x20), 0x211BC + (3 * 0xDC0) + (10 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia MP Zapped",          0x2119C + (3 * 0xDC0) + (11 * 0x20), 0x211BC + (3 * 0xDC0) + (11 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia HP Zapped",          0x2119C + (3 * 0xDC0) + (12 * 0x20), 0x211BC + (3 * 0xDC0) + (12 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia LK Zapped",          0x2119C + (3 * 0xDC0) + (13 * 0x20), 0x211BC + (3 * 0xDC0) + (13 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia MK Zapped",          0x2119C + (3 * 0xDC0) + (14 * 0x20), 0x211BC + (3 * 0xDC0) + (14 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia HK Zapped",          0x2119C + (3 * 0xDC0) + (15 * 0x20), 0x211BC + (3 * 0xDC0) + (15 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia PP Zapped",          0x2119C + (3 * 0xDC0) + (16 * 0x20), 0x211BC + (3 * 0xDC0) + (16 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia KK Zapped",          0x2119C + (3 * 0xDC0) + (17 * 0x20), 0x211BC + (3 * 0xDC0) + (17 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia AP Zapped",          0x2119C + (3 * 0xDC0) + (18 * 0x20), 0x211BC + (3 * 0xDC0) + (18 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia AK Zapped",          0x2119C + (3 * 0xDC0) + (19 * 0x20), 0x211BC + (3 * 0xDC0) + (19 * 0x20), indexCPS2_Felicia, 0x0c },
    { L"Felicia LP Burned",          0x2119C + (3 * 0xDC0) + (20 * 0x20), 0x211BC + (3 * 0xDC0) + (20 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Burned",          0x2119C + (3 * 0xDC0) + (21 * 0x20), 0x211BC + (3 * 0xDC0) + (21 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Burned",          0x2119C + (3 * 0xDC0) + (22 * 0x20), 0x211BC + (3 * 0xDC0) + (22 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Burned",          0x2119C + (3 * 0xDC0) + (23 * 0x20), 0x211BC + (3 * 0xDC0) + (23 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Burned",          0x2119C + (3 * 0xDC0) + (24 * 0x20), 0x211BC + (3 * 0xDC0) + (24 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Burned",          0x2119C + (3 * 0xDC0) + (25 * 0x20), 0x211BC + (3 * 0xDC0) + (25 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Burned",          0x2119C + (3 * 0xDC0) + (26 * 0x20), 0x211BC + (3 * 0xDC0) + (26 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Burned",          0x2119C + (3 * 0xDC0) + (27 * 0x20), 0x211BC + (3 * 0xDC0) + (27 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Burned",          0x2119C + (3 * 0xDC0) + (28 * 0x20), 0x211BC + (3 * 0xDC0) + (28 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Burned",          0x2119C + (3 * 0xDC0) + (29 * 0x20), 0x211BC + (3 * 0xDC0) + (29 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (30 * 0x20), 0x211BC + (3 * 0xDC0) + (30 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia MP Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (31 * 0x20), 0x211BC + (3 * 0xDC0) + (31 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia HP Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (32 * 0x20), 0x211BC + (3 * 0xDC0) + (32 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia LK Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (33 * 0x20), 0x211BC + (3 * 0xDC0) + (33 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia MK Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (34 * 0x20), 0x211BC + (3 * 0xDC0) + (34 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia HK Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (35 * 0x20), 0x211BC + (3 * 0xDC0) + (35 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia PP Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (36 * 0x20), 0x211BC + (3 * 0xDC0) + (36 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia KK Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (37 * 0x20), 0x211BC + (3 * 0xDC0) + (37 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia AP Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (38 * 0x20), 0x211BC + (3 * 0xDC0) + (38 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia AK Pharaoh's Curse", 0x2119C + (3 * 0xDC0) + (39 * 0x20), 0x211BC + (3 * 0xDC0) + (39 * 0x20), indexCPS2_Felicia, 0x0d },
    { L"Felicia ES 1",               0x2119C + (3 * 0xDC0) + (40 * 0x20), 0x211BC + (3 * 0xDC0) + (40 * 0x20), indexCPS2_Felicia },
    { L"Felicia ES 2",               0x2119C + (3 * 0xDC0) + (41 * 0x20), 0x211BC + (3 * 0xDC0) + (41 * 0x20), indexCPS2_Felicia },
    { L"Felicia ES 3",               0x2119C + (3 * 0xDC0) + (42 * 0x20), 0x211BC + (3 * 0xDC0) + (42 * 0x20), indexCPS2_Felicia },
    { L"Felicia ES 4",               0x2119C + (3 * 0xDC0) + (43 * 0x20), 0x211BC + (3 * 0xDC0) + (43 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 1",               0x2119C + (3 * 0xDC0) + (44 * 0x20), 0x211BC + (3 * 0xDC0) + (44 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 2",               0x2119C + (3 * 0xDC0) + (45 * 0x20), 0x211BC + (3 * 0xDC0) + (45 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 3",               0x2119C + (3 * 0xDC0) + (46 * 0x20), 0x211BC + (3 * 0xDC0) + (46 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 4",               0x2119C + (3 * 0xDC0) + (47 * 0x20), 0x211BC + (3 * 0xDC0) + (47 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 5",               0x2119C + (3 * 0xDC0) + (48 * 0x20), 0x211BC + (3 * 0xDC0) + (48 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 6",               0x2119C + (3 * 0xDC0) + (49 * 0x20), 0x211BC + (3 * 0xDC0) + (49 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 7",               0x2119C + (3 * 0xDC0) + (50 * 0x20), 0x211BC + (3 * 0xDC0) + (50 * 0x20), indexCPS2_Felicia },
    { L"Felicia EX 8",               0x2119C + (3 * 0xDC0) + (51 * 0x20), 0x211BC + (3 * 0xDC0) + (51 * 0x20), indexCPS2_Felicia },
    { L"Felicia Prova di Servo",     0x2119C + (3 * 0xDC0) + (52 * 0x20), 0x211BC + (3 * 0xDC0) + (52 * 0x20), indexCPS2_Felicia },
    { L"Felicia Finale Rosso",       0x2119C + (3 * 0xDC0) + (53 * 0x20), 0x211BC + (3 * 0xDC0) + (53 * 0x20), indexCPS2_Felicia },
    { L"Felicia Stone",              0x2119C + (3 * 0xDC0) + (54 * 0x20), 0x211BC + (3 * 0xDC0) + (54 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Midnight Bliss",  0x2119C + (3 * 0xDC0) + (55 * 0x20), 0x211BC + (3 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MP Midnight Bliss",  0x2119C + (3 * 0xDC0) + (56 * 0x20), 0x211BC + (3 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HP Midnight Bliss",  0x2119C + (3 * 0xDC0) + (57 * 0x20), 0x211BC + (3 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia LK Midnight Bliss",  0x2119C + (3 * 0xDC0) + (58 * 0x20), 0x211BC + (3 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia MK Midnight Bliss",  0x2119C + (3 * 0xDC0) + (59 * 0x20), 0x211BC + (3 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia HK Midnight Bliss",  0x2119C + (3 * 0xDC0) + (60 * 0x20), 0x211BC + (3 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia PP Midnight Bliss",  0x2119C + (3 * 0xDC0) + (61 * 0x20), 0x211BC + (3 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia KK Midnight Bliss",  0x2119C + (3 * 0xDC0) + (62 * 0x20), 0x211BC + (3 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AP Midnight Bliss",  0x2119C + (3 * 0xDC0) + (63 * 0x20), 0x211BC + (3 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia AK Midnight Bliss",  0x2119C + (3 * 0xDC0) + (64 * 0x20), 0x211BC + (3 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Felicia },
    { L"Felicia Q-Bee's QJ Honey",   0x2119C + (3 * 0xDC0) + (65 * 0x20), 0x211BC + (3 * 0xDC0) + (65 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 1",    0x2119C + (3 * 0xDC0) + (66 * 0x20), 0x211BC + (3 * 0xDC0) + (66 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 2",    0x2119C + (3 * 0xDC0) + (67 * 0x20), 0x211BC + (3 * 0xDC0) + (67 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 3",    0x2119C + (3 * 0xDC0) + (68 * 0x20), 0x211BC + (3 * 0xDC0) + (68 * 0x20), indexCPS2_Felicia },
    { L"Felicia LP Dark Force 4",    0x2119C + (3 * 0xDC0) + (69 * 0x20), 0x211BC + (3 * 0xDC0) + (69 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 1",    0x2119C + (3 * 0xDC0) + (70 * 0x20), 0x211BC + (3 * 0xDC0) + (70 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 2",    0x2119C + (3 * 0xDC0) + (71 * 0x20), 0x211BC + (3 * 0xDC0) + (71 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 3",    0x2119C + (3 * 0xDC0) + (72 * 0x20), 0x211BC + (3 * 0xDC0) + (72 * 0x20), indexCPS2_Felicia },
    { L"Felicia MP Dark Force 4",    0x2119C + (3 * 0xDC0) + (73 * 0x20), 0x211BC + (3 * 0xDC0) + (73 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 1",    0x2119C + (3 * 0xDC0) + (74 * 0x20), 0x211BC + (3 * 0xDC0) + (74 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 2",    0x2119C + (3 * 0xDC0) + (75 * 0x20), 0x211BC + (3 * 0xDC0) + (75 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 3",    0x2119C + (3 * 0xDC0) + (76 * 0x20), 0x211BC + (3 * 0xDC0) + (76 * 0x20), indexCPS2_Felicia },
    { L"Felicia HP Dark Force 4",    0x2119C + (3 * 0xDC0) + (77 * 0x20), 0x211BC + (3 * 0xDC0) + (77 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 1",    0x2119C + (3 * 0xDC0) + (78 * 0x20), 0x211BC + (3 * 0xDC0) + (78 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 2",    0x2119C + (3 * 0xDC0) + (79 * 0x20), 0x211BC + (3 * 0xDC0) + (79 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 3",    0x2119C + (3 * 0xDC0) + (80 * 0x20), 0x211BC + (3 * 0xDC0) + (80 * 0x20), indexCPS2_Felicia },
    { L"Felicia LK Dark Force 4",    0x2119C + (3 * 0xDC0) + (81 * 0x20), 0x211BC + (3 * 0xDC0) + (81 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 1",    0x2119C + (3 * 0xDC0) + (82 * 0x20), 0x211BC + (3 * 0xDC0) + (82 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 2",    0x2119C + (3 * 0xDC0) + (83 * 0x20), 0x211BC + (3 * 0xDC0) + (83 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 3",    0x2119C + (3 * 0xDC0) + (84 * 0x20), 0x211BC + (3 * 0xDC0) + (84 * 0x20), indexCPS2_Felicia },
    { L"Felicia MK Dark Force 4",    0x2119C + (3 * 0xDC0) + (85 * 0x20), 0x211BC + (3 * 0xDC0) + (85 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 1",    0x2119C + (3 * 0xDC0) + (86 * 0x20), 0x211BC + (3 * 0xDC0) + (86 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 2",    0x2119C + (3 * 0xDC0) + (87 * 0x20), 0x211BC + (3 * 0xDC0) + (87 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 3",    0x2119C + (3 * 0xDC0) + (88 * 0x20), 0x211BC + (3 * 0xDC0) + (88 * 0x20), indexCPS2_Felicia },
    { L"Felicia HK Dark Force 4",    0x2119C + (3 * 0xDC0) + (89 * 0x20), 0x211BC + (3 * 0xDC0) + (89 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 1",    0x2119C + (3 * 0xDC0) + (90 * 0x20), 0x211BC + (3 * 0xDC0) + (90 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 2",    0x2119C + (3 * 0xDC0) + (91 * 0x20), 0x211BC + (3 * 0xDC0) + (91 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 3",    0x2119C + (3 * 0xDC0) + (92 * 0x20), 0x211BC + (3 * 0xDC0) + (92 * 0x20), indexCPS2_Felicia },
    { L"Felicia PP Dark Force 4",    0x2119C + (3 * 0xDC0) + (93 * 0x20), 0x211BC + (3 * 0xDC0) + (93 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 1",    0x2119C + (3 * 0xDC0) + (94 * 0x20), 0x211BC + (3 * 0xDC0) + (94 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 2",    0x2119C + (3 * 0xDC0) + (95 * 0x20), 0x211BC + (3 * 0xDC0) + (95 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 3",    0x2119C + (3 * 0xDC0) + (96 * 0x20), 0x211BC + (3 * 0xDC0) + (96 * 0x20), indexCPS2_Felicia },
    { L"Felicia KK Dark Force 4",    0x2119C + (3 * 0xDC0) + (97 * 0x20), 0x211BC + (3 * 0xDC0) + (97 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 1",    0x2119C + (3 * 0xDC0) + (98 * 0x20), 0x211BC + (3 * 0xDC0) + (98 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 2",    0x2119C + (3 * 0xDC0) + (99 * 0x20), 0x211BC + (3 * 0xDC0) + (99 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 3",    0x2119C + (3 * 0xDC0) + (100 * 0x20), 0x211BC + (3 * 0xDC0) + (100 * 0x20), indexCPS2_Felicia },
    { L"Felicia AP Dark Force 4",    0x2119C + (3 * 0xDC0) + (101 * 0x20), 0x211BC + (3 * 0xDC0) + (101 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 1",    0x2119C + (3 * 0xDC0) + (102 * 0x20), 0x211BC + (3 * 0xDC0) + (102 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 2",    0x2119C + (3 * 0xDC0) + (103 * 0x20), 0x211BC + (3 * 0xDC0) + (103 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 3",    0x2119C + (3 * 0xDC0) + (104 * 0x20), 0x211BC + (3 * 0xDC0) + (104 * 0x20), indexCPS2_Felicia },
    { L"Felicia AK Dark Force 4",    0x2119C + (3 * 0xDC0) + (105 * 0x20), 0x211BC + (3 * 0xDC0) + (105 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 1",              0x2119C + (3 * 0xDC0) + (106 * 0x20), 0x211BC + (3 * 0xDC0) + (106 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 2",              0x2119C + (3 * 0xDC0) + (107 * 0x20), 0x211BC + (3 * 0xDC0) + (107 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 3",              0x2119C + (3 * 0xDC0) + (108 * 0x20), 0x211BC + (3 * 0xDC0) + (108 * 0x20), indexCPS2_Felicia },
    { L"Felicia ??? 4",              0x2119C + (3 * 0xDC0) + (109 * 0x20), 0x211BC + (3 * 0xDC0) + (109 * 0x20), indexCPS2_Felicia },
};

const sGame_PaletteDataset VSAV2_A_Bishamon_PALETTES_SPECIAL[] =
{
    { L"Bishamon LP Poisoned",        0x2119C + (4 * 0xDC0) + (0 * 0x20), 0x211BC + (4 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Poisoned",        0x2119C + (4 * 0xDC0) + (1 * 0x20), 0x211BC + (4 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Poisoned",        0x2119C + (4 * 0xDC0) + (2 * 0x20), 0x211BC + (4 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Poisoned",        0x2119C + (4 * 0xDC0) + (3 * 0x20), 0x211BC + (4 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Poisoned",        0x2119C + (4 * 0xDC0) + (4 * 0x20), 0x211BC + (4 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Poisoned",        0x2119C + (4 * 0xDC0) + (5 * 0x20), 0x211BC + (4 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Poisoned",        0x2119C + (4 * 0xDC0) + (6 * 0x20), 0x211BC + (4 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Poisoned",        0x2119C + (4 * 0xDC0) + (7 * 0x20), 0x211BC + (4 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Poisoned",        0x2119C + (4 * 0xDC0) + (8 * 0x20), 0x211BC + (4 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Poisoned",        0x2119C + (4 * 0xDC0) + (9 * 0x20), 0x211BC + (4 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Zapped",          0x2119C + (4 * 0xDC0) + (10 * 0x20), 0x211BC + (4 * 0xDC0) + (10 * 0x20) },
    { L"Bishamon MP Zapped",          0x2119C + (4 * 0xDC0) + (11 * 0x20), 0x211BC + (4 * 0xDC0) + (11 * 0x20) },
    { L"Bishamon HP Zapped",          0x2119C + (4 * 0xDC0) + (12 * 0x20), 0x211BC + (4 * 0xDC0) + (12 * 0x20) },
    { L"Bishamon LK Zapped",          0x2119C + (4 * 0xDC0) + (13 * 0x20), 0x211BC + (4 * 0xDC0) + (13 * 0x20) },
    { L"Bishamon MK Zapped",          0x2119C + (4 * 0xDC0) + (14 * 0x20), 0x211BC + (4 * 0xDC0) + (14 * 0x20) },
    { L"Bishamon HK Zapped",          0x2119C + (4 * 0xDC0) + (15 * 0x20), 0x211BC + (4 * 0xDC0) + (15 * 0x20) },
    { L"Bishamon PP Zapped",          0x2119C + (4 * 0xDC0) + (16 * 0x20), 0x211BC + (4 * 0xDC0) + (16 * 0x20) },
    { L"Bishamon KK Zapped",          0x2119C + (4 * 0xDC0) + (17 * 0x20), 0x211BC + (4 * 0xDC0) + (17 * 0x20) },
    { L"Bishamon AP Zapped",          0x2119C + (4 * 0xDC0) + (18 * 0x20), 0x211BC + (4 * 0xDC0) + (18 * 0x20) },
    { L"Bishamon AK Zapped",          0x2119C + (4 * 0xDC0) + (19 * 0x20), 0x211BC + (4 * 0xDC0) + (19 * 0x20) },
    { L"Bishamon LP Burned",          0x2119C + (4 * 0xDC0) + (20 * 0x20), 0x211BC + (4 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Burned",          0x2119C + (4 * 0xDC0) + (21 * 0x20), 0x211BC + (4 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Burned",          0x2119C + (4 * 0xDC0) + (22 * 0x20), 0x211BC + (4 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Burned",          0x2119C + (4 * 0xDC0) + (23 * 0x20), 0x211BC + (4 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Burned",          0x2119C + (4 * 0xDC0) + (24 * 0x20), 0x211BC + (4 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Burned",          0x2119C + (4 * 0xDC0) + (25 * 0x20), 0x211BC + (4 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Burned",          0x2119C + (4 * 0xDC0) + (26 * 0x20), 0x211BC + (4 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Burned",          0x2119C + (4 * 0xDC0) + (27 * 0x20), 0x211BC + (4 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Burned",          0x2119C + (4 * 0xDC0) + (28 * 0x20), 0x211BC + (4 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Burned",          0x2119C + (4 * 0xDC0) + (29 * 0x20), 0x211BC + (4 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (30 * 0x20), 0x211BC + (4 * 0xDC0) + (30 * 0x20) },
    { L"Bishamon MP Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (31 * 0x20), 0x211BC + (4 * 0xDC0) + (31 * 0x20) },
    { L"Bishamon HP Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (32 * 0x20), 0x211BC + (4 * 0xDC0) + (32 * 0x20) },
    { L"Bishamon LK Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (33 * 0x20), 0x211BC + (4 * 0xDC0) + (33 * 0x20) },
    { L"Bishamon MK Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (34 * 0x20), 0x211BC + (4 * 0xDC0) + (34 * 0x20) },
    { L"Bishamon HK Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (35 * 0x20), 0x211BC + (4 * 0xDC0) + (35 * 0x20) },
    { L"Bishamon PP Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (36 * 0x20), 0x211BC + (4 * 0xDC0) + (36 * 0x20) },
    { L"Bishamon KK Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (37 * 0x20), 0x211BC + (4 * 0xDC0) + (37 * 0x20) },
    { L"Bishamon AP Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (38 * 0x20), 0x211BC + (4 * 0xDC0) + (38 * 0x20) },
    { L"Bishamon AK Pharaoh's Curse", 0x2119C + (4 * 0xDC0) + (39 * 0x20), 0x211BC + (4 * 0xDC0) + (39 * 0x20) },
    { L"Bishamon ES 1",               0x2119C + (4 * 0xDC0) + (40 * 0x20), 0x211BC + (4 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 2",               0x2119C + (4 * 0xDC0) + (41 * 0x20), 0x211BC + (4 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 3",               0x2119C + (4 * 0xDC0) + (42 * 0x20), 0x211BC + (4 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ES 4",               0x2119C + (4 * 0xDC0) + (43 * 0x20), 0x211BC + (4 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 1",               0x2119C + (4 * 0xDC0) + (44 * 0x20), 0x211BC + (4 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 2",               0x2119C + (4 * 0xDC0) + (45 * 0x20), 0x211BC + (4 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 3",               0x2119C + (4 * 0xDC0) + (46 * 0x20), 0x211BC + (4 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 4",               0x2119C + (4 * 0xDC0) + (47 * 0x20), 0x211BC + (4 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 5",               0x2119C + (4 * 0xDC0) + (48 * 0x20), 0x211BC + (4 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 6",               0x2119C + (4 * 0xDC0) + (49 * 0x20), 0x211BC + (4 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 7",               0x2119C + (4 * 0xDC0) + (50 * 0x20), 0x211BC + (4 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon EX 8",               0x2119C + (4 * 0xDC0) + (51 * 0x20), 0x211BC + (4 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon Prova di Servo",     0x2119C + (4 * 0xDC0) + (52 * 0x20), 0x211BC + (4 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon Finale Rosso",       0x2119C + (4 * 0xDC0) + (53 * 0x20), 0x211BC + (4 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon Stone",              0x2119C + (4 * 0xDC0) + (54 * 0x20), 0x211BC + (4 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Midnight Bliss",  0x2119C + (4 * 0xDC0) + (55 * 0x20), 0x211BC + (4 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Midnight Bliss",  0x2119C + (4 * 0xDC0) + (56 * 0x20), 0x211BC + (4 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Midnight Bliss",  0x2119C + (4 * 0xDC0) + (57 * 0x20), 0x211BC + (4 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Midnight Bliss",  0x2119C + (4 * 0xDC0) + (58 * 0x20), 0x211BC + (4 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Midnight Bliss",  0x2119C + (4 * 0xDC0) + (59 * 0x20), 0x211BC + (4 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Midnight Bliss",  0x2119C + (4 * 0xDC0) + (60 * 0x20), 0x211BC + (4 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Midnight Bliss",  0x2119C + (4 * 0xDC0) + (61 * 0x20), 0x211BC + (4 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Midnight Bliss",  0x2119C + (4 * 0xDC0) + (62 * 0x20), 0x211BC + (4 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Midnight Bliss",  0x2119C + (4 * 0xDC0) + (63 * 0x20), 0x211BC + (4 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Midnight Bliss",  0x2119C + (4 * 0xDC0) + (64 * 0x20), 0x211BC + (4 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Bishamon },
    { L"Bishamon Q-Bee's QJ Honey",   0x2119C + (4 * 0xDC0) + (65 * 0x20), 0x211BC + (4 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 1",    0x2119C + (4 * 0xDC0) + (66 * 0x20), 0x211BC + (4 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 2",    0x2119C + (4 * 0xDC0) + (67 * 0x20), 0x211BC + (4 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 3",    0x2119C + (4 * 0xDC0) + (68 * 0x20), 0x211BC + (4 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LP Dark Force 4",    0x2119C + (4 * 0xDC0) + (69 * 0x20), 0x211BC + (4 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 1",    0x2119C + (4 * 0xDC0) + (70 * 0x20), 0x211BC + (4 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 2",    0x2119C + (4 * 0xDC0) + (71 * 0x20), 0x211BC + (4 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 3",    0x2119C + (4 * 0xDC0) + (72 * 0x20), 0x211BC + (4 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MP Dark Force 4",    0x2119C + (4 * 0xDC0) + (73 * 0x20), 0x211BC + (4 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 1",    0x2119C + (4 * 0xDC0) + (74 * 0x20), 0x211BC + (4 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 2",    0x2119C + (4 * 0xDC0) + (75 * 0x20), 0x211BC + (4 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 3",    0x2119C + (4 * 0xDC0) + (76 * 0x20), 0x211BC + (4 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HP Dark Force 4",    0x2119C + (4 * 0xDC0) + (77 * 0x20), 0x211BC + (4 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 1",    0x2119C + (4 * 0xDC0) + (78 * 0x20), 0x211BC + (4 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 2",    0x2119C + (4 * 0xDC0) + (79 * 0x20), 0x211BC + (4 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 3",    0x2119C + (4 * 0xDC0) + (80 * 0x20), 0x211BC + (4 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon LK Dark Force 4",    0x2119C + (4 * 0xDC0) + (81 * 0x20), 0x211BC + (4 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 1",    0x2119C + (4 * 0xDC0) + (82 * 0x20), 0x211BC + (4 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 2",    0x2119C + (4 * 0xDC0) + (83 * 0x20), 0x211BC + (4 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 3",    0x2119C + (4 * 0xDC0) + (84 * 0x20), 0x211BC + (4 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon MK Dark Force 4",    0x2119C + (4 * 0xDC0) + (85 * 0x20), 0x211BC + (4 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 1",    0x2119C + (4 * 0xDC0) + (86 * 0x20), 0x211BC + (4 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 2",    0x2119C + (4 * 0xDC0) + (87 * 0x20), 0x211BC + (4 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 3",    0x2119C + (4 * 0xDC0) + (88 * 0x20), 0x211BC + (4 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon HK Dark Force 4",    0x2119C + (4 * 0xDC0) + (89 * 0x20), 0x211BC + (4 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 1",    0x2119C + (4 * 0xDC0) + (90 * 0x20), 0x211BC + (4 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 2",    0x2119C + (4 * 0xDC0) + (91 * 0x20), 0x211BC + (4 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 3",    0x2119C + (4 * 0xDC0) + (92 * 0x20), 0x211BC + (4 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon PP Dark Force 4",    0x2119C + (4 * 0xDC0) + (93 * 0x20), 0x211BC + (4 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 1",    0x2119C + (4 * 0xDC0) + (94 * 0x20), 0x211BC + (4 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 2",    0x2119C + (4 * 0xDC0) + (95 * 0x20), 0x211BC + (4 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 3",    0x2119C + (4 * 0xDC0) + (96 * 0x20), 0x211BC + (4 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon KK Dark Force 4",    0x2119C + (4 * 0xDC0) + (97 * 0x20), 0x211BC + (4 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 1",    0x2119C + (4 * 0xDC0) + (98 * 0x20), 0x211BC + (4 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 2",    0x2119C + (4 * 0xDC0) + (99 * 0x20), 0x211BC + (4 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 3",    0x2119C + (4 * 0xDC0) + (100 * 0x20), 0x211BC + (4 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AP Dark Force 4",    0x2119C + (4 * 0xDC0) + (101 * 0x20), 0x211BC + (4 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 1",    0x2119C + (4 * 0xDC0) + (102 * 0x20), 0x211BC + (4 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 2",    0x2119C + (4 * 0xDC0) + (103 * 0x20), 0x211BC + (4 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 3",    0x2119C + (4 * 0xDC0) + (104 * 0x20), 0x211BC + (4 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon AK Dark Force 4",    0x2119C + (4 * 0xDC0) + (105 * 0x20), 0x211BC + (4 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 1",              0x2119C + (4 * 0xDC0) + (106 * 0x20), 0x211BC + (4 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 2",              0x2119C + (4 * 0xDC0) + (107 * 0x20), 0x211BC + (4 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 3",              0x2119C + (4 * 0xDC0) + (108 * 0x20), 0x211BC + (4 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Bishamon ??? 4",              0x2119C + (4 * 0xDC0) + (109 * 0x20), 0x211BC + (4 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV2_A_Aulbath_PALETTES_SPECIAL[] =
{
    { L"Aulbath LP Poisoned",        0x2119C + (5 * 0xDC0) + (0 * 0x20), 0x211BC + (5 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Poisoned",        0x2119C + (5 * 0xDC0) + (1 * 0x20), 0x211BC + (5 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Poisoned",        0x2119C + (5 * 0xDC0) + (2 * 0x20), 0x211BC + (5 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Poisoned",        0x2119C + (5 * 0xDC0) + (3 * 0x20), 0x211BC + (5 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Poisoned",        0x2119C + (5 * 0xDC0) + (4 * 0x20), 0x211BC + (5 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Poisoned",        0x2119C + (5 * 0xDC0) + (5 * 0x20), 0x211BC + (5 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Poisoned",        0x2119C + (5 * 0xDC0) + (6 * 0x20), 0x211BC + (5 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Poisoned",        0x2119C + (5 * 0xDC0) + (7 * 0x20), 0x211BC + (5 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Poisoned",        0x2119C + (5 * 0xDC0) + (8 * 0x20), 0x211BC + (5 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Poisoned",        0x2119C + (5 * 0xDC0) + (9 * 0x20), 0x211BC + (5 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Zapped",          0x2119C + (5 * 0xDC0) + (10 * 0x20), 0x211BC + (5 * 0xDC0) + (10 * 0x20) },
    { L"Aulbath MP Zapped",          0x2119C + (5 * 0xDC0) + (11 * 0x20), 0x211BC + (5 * 0xDC0) + (11 * 0x20) },
    { L"Aulbath HP Zapped",          0x2119C + (5 * 0xDC0) + (12 * 0x20), 0x211BC + (5 * 0xDC0) + (12 * 0x20) },
    { L"Aulbath LK Zapped",          0x2119C + (5 * 0xDC0) + (13 * 0x20), 0x211BC + (5 * 0xDC0) + (13 * 0x20) },
    { L"Aulbath MK Zapped",          0x2119C + (5 * 0xDC0) + (14 * 0x20), 0x211BC + (5 * 0xDC0) + (14 * 0x20) },
    { L"Aulbath HK Zapped",          0x2119C + (5 * 0xDC0) + (15 * 0x20), 0x211BC + (5 * 0xDC0) + (15 * 0x20) },
    { L"Aulbath PP Zapped",          0x2119C + (5 * 0xDC0) + (16 * 0x20), 0x211BC + (5 * 0xDC0) + (16 * 0x20) },
    { L"Aulbath KK Zapped",          0x2119C + (5 * 0xDC0) + (17 * 0x20), 0x211BC + (5 * 0xDC0) + (17 * 0x20) },
    { L"Aulbath AP Zapped",          0x2119C + (5 * 0xDC0) + (18 * 0x20), 0x211BC + (5 * 0xDC0) + (18 * 0x20) },
    { L"Aulbath AK Zapped",          0x2119C + (5 * 0xDC0) + (19 * 0x20), 0x211BC + (5 * 0xDC0) + (19 * 0x20) },
    { L"Aulbath LP Burned",          0x2119C + (5 * 0xDC0) + (20 * 0x20), 0x211BC + (5 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Burned",          0x2119C + (5 * 0xDC0) + (21 * 0x20), 0x211BC + (5 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Burned",          0x2119C + (5 * 0xDC0) + (22 * 0x20), 0x211BC + (5 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Burned",          0x2119C + (5 * 0xDC0) + (23 * 0x20), 0x211BC + (5 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Burned",          0x2119C + (5 * 0xDC0) + (24 * 0x20), 0x211BC + (5 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Burned",          0x2119C + (5 * 0xDC0) + (25 * 0x20), 0x211BC + (5 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Burned",          0x2119C + (5 * 0xDC0) + (26 * 0x20), 0x211BC + (5 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Burned",          0x2119C + (5 * 0xDC0) + (27 * 0x20), 0x211BC + (5 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Burned",          0x2119C + (5 * 0xDC0) + (28 * 0x20), 0x211BC + (5 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Burned",          0x2119C + (5 * 0xDC0) + (29 * 0x20), 0x211BC + (5 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (30 * 0x20), 0x211BC + (5 * 0xDC0) + (30 * 0x20) },
    { L"Aulbath MP Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (31 * 0x20), 0x211BC + (5 * 0xDC0) + (31 * 0x20) },
    { L"Aulbath HP Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (32 * 0x20), 0x211BC + (5 * 0xDC0) + (32 * 0x20) },
    { L"Aulbath LK Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (33 * 0x20), 0x211BC + (5 * 0xDC0) + (33 * 0x20) },
    { L"Aulbath MK Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (34 * 0x20), 0x211BC + (5 * 0xDC0) + (34 * 0x20) },
    { L"Aulbath HK Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (35 * 0x20), 0x211BC + (5 * 0xDC0) + (35 * 0x20) },
    { L"Aulbath PP Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (36 * 0x20), 0x211BC + (5 * 0xDC0) + (36 * 0x20) },
    { L"Aulbath KK Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (37 * 0x20), 0x211BC + (5 * 0xDC0) + (37 * 0x20) },
    { L"Aulbath AP Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (38 * 0x20), 0x211BC + (5 * 0xDC0) + (38 * 0x20) },
    { L"Aulbath AK Pharaoh's Curse", 0x2119C + (5 * 0xDC0) + (39 * 0x20), 0x211BC + (5 * 0xDC0) + (39 * 0x20) },
    { L"Aulbath ES 1",               0x2119C + (5 * 0xDC0) + (40 * 0x20), 0x211BC + (5 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 2",               0x2119C + (5 * 0xDC0) + (41 * 0x20), 0x211BC + (5 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 3",               0x2119C + (5 * 0xDC0) + (42 * 0x20), 0x211BC + (5 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ES 4",               0x2119C + (5 * 0xDC0) + (43 * 0x20), 0x211BC + (5 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 1",               0x2119C + (5 * 0xDC0) + (44 * 0x20), 0x211BC + (5 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 2",               0x2119C + (5 * 0xDC0) + (45 * 0x20), 0x211BC + (5 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 3",               0x2119C + (5 * 0xDC0) + (46 * 0x20), 0x211BC + (5 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 4",               0x2119C + (5 * 0xDC0) + (47 * 0x20), 0x211BC + (5 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 5",               0x2119C + (5 * 0xDC0) + (48 * 0x20), 0x211BC + (5 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 6",               0x2119C + (5 * 0xDC0) + (49 * 0x20), 0x211BC + (5 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 7",               0x2119C + (5 * 0xDC0) + (50 * 0x20), 0x211BC + (5 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath EX 8",               0x2119C + (5 * 0xDC0) + (51 * 0x20), 0x211BC + (5 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath Prova di Servo",     0x2119C + (5 * 0xDC0) + (52 * 0x20), 0x211BC + (5 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath Finale Rosso",       0x2119C + (5 * 0xDC0) + (53 * 0x20), 0x211BC + (5 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath Stone",              0x2119C + (5 * 0xDC0) + (54 * 0x20), 0x211BC + (5 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Midnight Bliss",  0x2119C + (5 * 0xDC0) + (55 * 0x20), 0x211BC + (5 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Midnight Bliss",  0x2119C + (5 * 0xDC0) + (56 * 0x20), 0x211BC + (5 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Midnight Bliss",  0x2119C + (5 * 0xDC0) + (57 * 0x20), 0x211BC + (5 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Midnight Bliss",  0x2119C + (5 * 0xDC0) + (58 * 0x20), 0x211BC + (5 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Midnight Bliss",  0x2119C + (5 * 0xDC0) + (59 * 0x20), 0x211BC + (5 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Midnight Bliss",  0x2119C + (5 * 0xDC0) + (60 * 0x20), 0x211BC + (5 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Midnight Bliss",  0x2119C + (5 * 0xDC0) + (61 * 0x20), 0x211BC + (5 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Midnight Bliss",  0x2119C + (5 * 0xDC0) + (62 * 0x20), 0x211BC + (5 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Midnight Bliss",  0x2119C + (5 * 0xDC0) + (63 * 0x20), 0x211BC + (5 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Midnight Bliss",  0x2119C + (5 * 0xDC0) + (64 * 0x20), 0x211BC + (5 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Aulbath },
    { L"Aulbath Q-Bee's QJ Honey",   0x2119C + (5 * 0xDC0) + (65 * 0x20), 0x211BC + (5 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 1",    0x2119C + (5 * 0xDC0) + (66 * 0x20), 0x211BC + (5 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 2",    0x2119C + (5 * 0xDC0) + (67 * 0x20), 0x211BC + (5 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 3",    0x2119C + (5 * 0xDC0) + (68 * 0x20), 0x211BC + (5 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LP Dark Force 4",    0x2119C + (5 * 0xDC0) + (69 * 0x20), 0x211BC + (5 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 1",    0x2119C + (5 * 0xDC0) + (70 * 0x20), 0x211BC + (5 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 2",    0x2119C + (5 * 0xDC0) + (71 * 0x20), 0x211BC + (5 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 3",    0x2119C + (5 * 0xDC0) + (72 * 0x20), 0x211BC + (5 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MP Dark Force 4",    0x2119C + (5 * 0xDC0) + (73 * 0x20), 0x211BC + (5 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 1",    0x2119C + (5 * 0xDC0) + (74 * 0x20), 0x211BC + (5 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 2",    0x2119C + (5 * 0xDC0) + (75 * 0x20), 0x211BC + (5 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 3",    0x2119C + (5 * 0xDC0) + (76 * 0x20), 0x211BC + (5 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HP Dark Force 4",    0x2119C + (5 * 0xDC0) + (77 * 0x20), 0x211BC + (5 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 1",    0x2119C + (5 * 0xDC0) + (78 * 0x20), 0x211BC + (5 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 2",    0x2119C + (5 * 0xDC0) + (79 * 0x20), 0x211BC + (5 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 3",    0x2119C + (5 * 0xDC0) + (80 * 0x20), 0x211BC + (5 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath LK Dark Force 4",    0x2119C + (5 * 0xDC0) + (81 * 0x20), 0x211BC + (5 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 1",    0x2119C + (5 * 0xDC0) + (82 * 0x20), 0x211BC + (5 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 2",    0x2119C + (5 * 0xDC0) + (83 * 0x20), 0x211BC + (5 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 3",    0x2119C + (5 * 0xDC0) + (84 * 0x20), 0x211BC + (5 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath MK Dark Force 4",    0x2119C + (5 * 0xDC0) + (85 * 0x20), 0x211BC + (5 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 1",    0x2119C + (5 * 0xDC0) + (86 * 0x20), 0x211BC + (5 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 2",    0x2119C + (5 * 0xDC0) + (87 * 0x20), 0x211BC + (5 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 3",    0x2119C + (5 * 0xDC0) + (88 * 0x20), 0x211BC + (5 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath HK Dark Force 4",    0x2119C + (5 * 0xDC0) + (89 * 0x20), 0x211BC + (5 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 1",    0x2119C + (5 * 0xDC0) + (90 * 0x20), 0x211BC + (5 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 2",    0x2119C + (5 * 0xDC0) + (91 * 0x20), 0x211BC + (5 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 3",    0x2119C + (5 * 0xDC0) + (92 * 0x20), 0x211BC + (5 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath PP Dark Force 4",    0x2119C + (5 * 0xDC0) + (93 * 0x20), 0x211BC + (5 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 1",    0x2119C + (5 * 0xDC0) + (94 * 0x20), 0x211BC + (5 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 2",    0x2119C + (5 * 0xDC0) + (95 * 0x20), 0x211BC + (5 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 3",    0x2119C + (5 * 0xDC0) + (96 * 0x20), 0x211BC + (5 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath KK Dark Force 4",    0x2119C + (5 * 0xDC0) + (97 * 0x20), 0x211BC + (5 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 1",    0x2119C + (5 * 0xDC0) + (98 * 0x20), 0x211BC + (5 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 2",    0x2119C + (5 * 0xDC0) + (99 * 0x20), 0x211BC + (5 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 3",    0x2119C + (5 * 0xDC0) + (100 * 0x20), 0x211BC + (5 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AP Dark Force 4",    0x2119C + (5 * 0xDC0) + (101 * 0x20), 0x211BC + (5 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 1",    0x2119C + (5 * 0xDC0) + (102 * 0x20), 0x211BC + (5 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 2",    0x2119C + (5 * 0xDC0) + (103 * 0x20), 0x211BC + (5 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 3",    0x2119C + (5 * 0xDC0) + (104 * 0x20), 0x211BC + (5 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath AK Dark Force 4",    0x2119C + (5 * 0xDC0) + (105 * 0x20), 0x211BC + (5 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 1",              0x2119C + (5 * 0xDC0) + (106 * 0x20), 0x211BC + (5 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 2",              0x2119C + (5 * 0xDC0) + (107 * 0x20), 0x211BC + (5 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 3",              0x2119C + (5 * 0xDC0) + (108 * 0x20), 0x211BC + (5 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Aulbath },
    { L"Aulbath ??? 4",              0x2119C + (5 * 0xDC0) + (109 * 0x20), 0x211BC + (5 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Aulbath },
};

const sGame_PaletteDataset VSAV2_A_Sasquatch_PALETTES_SPECIAL[] =
{
    { L"Sasquatch LP Poisoned",        0x2119C + (6 * 0xDC0) + (0 * 0x20), 0x211BC + (6 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Poisoned",        0x2119C + (6 * 0xDC0) + (1 * 0x20), 0x211BC + (6 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Poisoned",        0x2119C + (6 * 0xDC0) + (2 * 0x20), 0x211BC + (6 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Poisoned",        0x2119C + (6 * 0xDC0) + (3 * 0x20), 0x211BC + (6 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Poisoned",        0x2119C + (6 * 0xDC0) + (4 * 0x20), 0x211BC + (6 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Poisoned",        0x2119C + (6 * 0xDC0) + (5 * 0x20), 0x211BC + (6 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Poisoned",        0x2119C + (6 * 0xDC0) + (6 * 0x20), 0x211BC + (6 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Poisoned",        0x2119C + (6 * 0xDC0) + (7 * 0x20), 0x211BC + (6 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Poisoned",        0x2119C + (6 * 0xDC0) + (8 * 0x20), 0x211BC + (6 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Poisoned",        0x2119C + (6 * 0xDC0) + (9 * 0x20), 0x211BC + (6 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Zapped",          0x2119C + (6 * 0xDC0) + (10 * 0x20), 0x211BC + (6 * 0xDC0) + (10 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch MP Zapped",          0x2119C + (6 * 0xDC0) + (11 * 0x20), 0x211BC + (6 * 0xDC0) + (11 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch HP Zapped",          0x2119C + (6 * 0xDC0) + (12 * 0x20), 0x211BC + (6 * 0xDC0) + (12 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch LK Zapped",          0x2119C + (6 * 0xDC0) + (13 * 0x20), 0x211BC + (6 * 0xDC0) + (13 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch MK Zapped",          0x2119C + (6 * 0xDC0) + (14 * 0x20), 0x211BC + (6 * 0xDC0) + (14 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch HK Zapped",          0x2119C + (6 * 0xDC0) + (15 * 0x20), 0x211BC + (6 * 0xDC0) + (15 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch PP Zapped",          0x2119C + (6 * 0xDC0) + (16 * 0x20), 0x211BC + (6 * 0xDC0) + (16 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch KK Zapped",          0x2119C + (6 * 0xDC0) + (17 * 0x20), 0x211BC + (6 * 0xDC0) + (17 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch AP Zapped",          0x2119C + (6 * 0xDC0) + (18 * 0x20), 0x211BC + (6 * 0xDC0) + (18 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch AK Zapped",          0x2119C + (6 * 0xDC0) + (19 * 0x20), 0x211BC + (6 * 0xDC0) + (19 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0c },
    { L"Sasquatch LP Burned",          0x2119C + (6 * 0xDC0) + (20 * 0x20), 0x211BC + (6 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Burned",          0x2119C + (6 * 0xDC0) + (21 * 0x20), 0x211BC + (6 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Burned",          0x2119C + (6 * 0xDC0) + (22 * 0x20), 0x211BC + (6 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Burned",          0x2119C + (6 * 0xDC0) + (23 * 0x20), 0x211BC + (6 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Burned",          0x2119C + (6 * 0xDC0) + (24 * 0x20), 0x211BC + (6 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Burned",          0x2119C + (6 * 0xDC0) + (25 * 0x20), 0x211BC + (6 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Burned",          0x2119C + (6 * 0xDC0) + (26 * 0x20), 0x211BC + (6 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Burned",          0x2119C + (6 * 0xDC0) + (27 * 0x20), 0x211BC + (6 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Burned",          0x2119C + (6 * 0xDC0) + (28 * 0x20), 0x211BC + (6 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Burned",          0x2119C + (6 * 0xDC0) + (29 * 0x20), 0x211BC + (6 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (30 * 0x20), 0x211BC + (6 * 0xDC0) + (30 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MP Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (31 * 0x20), 0x211BC + (6 * 0xDC0) + (31 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HP Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (32 * 0x20), 0x211BC + (6 * 0xDC0) + (32 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch LK Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (33 * 0x20), 0x211BC + (6 * 0xDC0) + (33 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch MK Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (34 * 0x20), 0x211BC + (6 * 0xDC0) + (34 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch HK Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (35 * 0x20), 0x211BC + (6 * 0xDC0) + (35 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch PP Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (36 * 0x20), 0x211BC + (6 * 0xDC0) + (36 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch KK Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (37 * 0x20), 0x211BC + (6 * 0xDC0) + (37 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AP Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (38 * 0x20), 0x211BC + (6 * 0xDC0) + (38 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch AK Pharaoh's Curse", 0x2119C + (6 * 0xDC0) + (39 * 0x20), 0x211BC + (6 * 0xDC0) + (39 * 0x20), indexCPS2_Vamp_Sasquatch, 0x0d },
    { L"Sasquatch ES 1",               0x2119C + (6 * 0xDC0) + (40 * 0x20), 0x211BC + (6 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 2",               0x2119C + (6 * 0xDC0) + (41 * 0x20), 0x211BC + (6 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 3",               0x2119C + (6 * 0xDC0) + (42 * 0x20), 0x211BC + (6 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ES 4",               0x2119C + (6 * 0xDC0) + (43 * 0x20), 0x211BC + (6 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 1",               0x2119C + (6 * 0xDC0) + (44 * 0x20), 0x211BC + (6 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 2",               0x2119C + (6 * 0xDC0) + (45 * 0x20), 0x211BC + (6 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 3",               0x2119C + (6 * 0xDC0) + (46 * 0x20), 0x211BC + (6 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 4",               0x2119C + (6 * 0xDC0) + (47 * 0x20), 0x211BC + (6 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 5",               0x2119C + (6 * 0xDC0) + (48 * 0x20), 0x211BC + (6 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 6",               0x2119C + (6 * 0xDC0) + (49 * 0x20), 0x211BC + (6 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 7",               0x2119C + (6 * 0xDC0) + (50 * 0x20), 0x211BC + (6 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch EX 8",               0x2119C + (6 * 0xDC0) + (51 * 0x20), 0x211BC + (6 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Prova di Servo",     0x2119C + (6 * 0xDC0) + (52 * 0x20), 0x211BC + (6 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Finale Rosso",       0x2119C + (6 * 0xDC0) + (53 * 0x20), 0x211BC + (6 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Stone",              0x2119C + (6 * 0xDC0) + (54 * 0x20), 0x211BC + (6 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Midnight Bliss",  0x2119C + (6 * 0xDC0) + (55 * 0x20), 0x211BC + (6 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Midnight Bliss",  0x2119C + (6 * 0xDC0) + (56 * 0x20), 0x211BC + (6 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Midnight Bliss",  0x2119C + (6 * 0xDC0) + (57 * 0x20), 0x211BC + (6 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Midnight Bliss",  0x2119C + (6 * 0xDC0) + (58 * 0x20), 0x211BC + (6 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Midnight Bliss",  0x2119C + (6 * 0xDC0) + (59 * 0x20), 0x211BC + (6 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Midnight Bliss",  0x2119C + (6 * 0xDC0) + (60 * 0x20), 0x211BC + (6 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Midnight Bliss",  0x2119C + (6 * 0xDC0) + (61 * 0x20), 0x211BC + (6 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Midnight Bliss",  0x2119C + (6 * 0xDC0) + (62 * 0x20), 0x211BC + (6 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Midnight Bliss",  0x2119C + (6 * 0xDC0) + (63 * 0x20), 0x211BC + (6 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Midnight Bliss",  0x2119C + (6 * 0xDC0) + (64 * 0x20), 0x211BC + (6 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch Q-Bee's QJ Honey",   0x2119C + (6 * 0xDC0) + (65 * 0x20), 0x211BC + (6 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 1",    0x2119C + (6 * 0xDC0) + (66 * 0x20), 0x211BC + (6 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 2",    0x2119C + (6 * 0xDC0) + (67 * 0x20), 0x211BC + (6 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 3",    0x2119C + (6 * 0xDC0) + (68 * 0x20), 0x211BC + (6 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LP Dark Force 4",    0x2119C + (6 * 0xDC0) + (69 * 0x20), 0x211BC + (6 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 1",    0x2119C + (6 * 0xDC0) + (70 * 0x20), 0x211BC + (6 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 2",    0x2119C + (6 * 0xDC0) + (71 * 0x20), 0x211BC + (6 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 3",    0x2119C + (6 * 0xDC0) + (72 * 0x20), 0x211BC + (6 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MP Dark Force 4",    0x2119C + (6 * 0xDC0) + (73 * 0x20), 0x211BC + (6 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 1",    0x2119C + (6 * 0xDC0) + (74 * 0x20), 0x211BC + (6 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 2",    0x2119C + (6 * 0xDC0) + (75 * 0x20), 0x211BC + (6 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 3",    0x2119C + (6 * 0xDC0) + (76 * 0x20), 0x211BC + (6 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HP Dark Force 4",    0x2119C + (6 * 0xDC0) + (77 * 0x20), 0x211BC + (6 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 1",    0x2119C + (6 * 0xDC0) + (78 * 0x20), 0x211BC + (6 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 2",    0x2119C + (6 * 0xDC0) + (79 * 0x20), 0x211BC + (6 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 3",    0x2119C + (6 * 0xDC0) + (80 * 0x20), 0x211BC + (6 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch LK Dark Force 4",    0x2119C + (6 * 0xDC0) + (81 * 0x20), 0x211BC + (6 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 1",    0x2119C + (6 * 0xDC0) + (82 * 0x20), 0x211BC + (6 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 2",    0x2119C + (6 * 0xDC0) + (83 * 0x20), 0x211BC + (6 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 3",    0x2119C + (6 * 0xDC0) + (84 * 0x20), 0x211BC + (6 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch MK Dark Force 4",    0x2119C + (6 * 0xDC0) + (85 * 0x20), 0x211BC + (6 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 1",    0x2119C + (6 * 0xDC0) + (86 * 0x20), 0x211BC + (6 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 2",    0x2119C + (6 * 0xDC0) + (87 * 0x20), 0x211BC + (6 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 3",    0x2119C + (6 * 0xDC0) + (88 * 0x20), 0x211BC + (6 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch HK Dark Force 4",    0x2119C + (6 * 0xDC0) + (89 * 0x20), 0x211BC + (6 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 1",    0x2119C + (6 * 0xDC0) + (90 * 0x20), 0x211BC + (6 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 2",    0x2119C + (6 * 0xDC0) + (91 * 0x20), 0x211BC + (6 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 3",    0x2119C + (6 * 0xDC0) + (92 * 0x20), 0x211BC + (6 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch PP Dark Force 4",    0x2119C + (6 * 0xDC0) + (93 * 0x20), 0x211BC + (6 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 1",    0x2119C + (6 * 0xDC0) + (94 * 0x20), 0x211BC + (6 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 2",    0x2119C + (6 * 0xDC0) + (95 * 0x20), 0x211BC + (6 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 3",    0x2119C + (6 * 0xDC0) + (96 * 0x20), 0x211BC + (6 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch KK Dark Force 4",    0x2119C + (6 * 0xDC0) + (97 * 0x20), 0x211BC + (6 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 1",    0x2119C + (6 * 0xDC0) + (98 * 0x20), 0x211BC + (6 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 2",    0x2119C + (6 * 0xDC0) + (99 * 0x20), 0x211BC + (6 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 3",    0x2119C + (6 * 0xDC0) + (100 * 0x20), 0x211BC + (6 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AP Dark Force 4",    0x2119C + (6 * 0xDC0) + (101 * 0x20), 0x211BC + (6 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 1",    0x2119C + (6 * 0xDC0) + (102 * 0x20), 0x211BC + (6 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 2",    0x2119C + (6 * 0xDC0) + (103 * 0x20), 0x211BC + (6 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 3",    0x2119C + (6 * 0xDC0) + (104 * 0x20), 0x211BC + (6 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch AK Dark Force 4",    0x2119C + (6 * 0xDC0) + (105 * 0x20), 0x211BC + (6 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 1",              0x2119C + (6 * 0xDC0) + (106 * 0x20), 0x211BC + (6 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 2",              0x2119C + (6 * 0xDC0) + (107 * 0x20), 0x211BC + (6 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 3",              0x2119C + (6 * 0xDC0) + (108 * 0x20), 0x211BC + (6 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Sasquatch },
    { L"Sasquatch ??? 4",              0x2119C + (6 * 0xDC0) + (109 * 0x20), 0x211BC + (6 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Sasquatch },
};

const sGame_PaletteDataset VSAV2_A_QBee_PALETTES_SPECIAL[] =
{
    { L"Q-Bee LP Poisoned",        0x2119C + (8 * 0xDC0) + (0 * 0x20), 0x211BC + (8 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Poisoned",        0x2119C + (8 * 0xDC0) + (1 * 0x20), 0x211BC + (8 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Poisoned",        0x2119C + (8 * 0xDC0) + (2 * 0x20), 0x211BC + (8 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Poisoned",        0x2119C + (8 * 0xDC0) + (3 * 0x20), 0x211BC + (8 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Poisoned",        0x2119C + (8 * 0xDC0) + (4 * 0x20), 0x211BC + (8 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Poisoned",        0x2119C + (8 * 0xDC0) + (5 * 0x20), 0x211BC + (8 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Poisoned",        0x2119C + (8 * 0xDC0) + (6 * 0x20), 0x211BC + (8 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Poisoned",        0x2119C + (8 * 0xDC0) + (7 * 0x20), 0x211BC + (8 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Poisoned",        0x2119C + (8 * 0xDC0) + (8 * 0x20), 0x211BC + (8 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Poisoned",        0x2119C + (8 * 0xDC0) + (9 * 0x20), 0x211BC + (8 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Zapped",          0x2119C + (8 * 0xDC0) + (10 * 0x20), 0x211BC + (8 * 0xDC0) + (10 * 0x20) },
    { L"Q-Bee MP Zapped",          0x2119C + (8 * 0xDC0) + (11 * 0x20), 0x211BC + (8 * 0xDC0) + (11 * 0x20) },
    { L"Q-Bee HP Zapped",          0x2119C + (8 * 0xDC0) + (12 * 0x20), 0x211BC + (8 * 0xDC0) + (12 * 0x20) },
    { L"Q-Bee LK Zapped",          0x2119C + (8 * 0xDC0) + (13 * 0x20), 0x211BC + (8 * 0xDC0) + (13 * 0x20) },
    { L"Q-Bee MK Zapped",          0x2119C + (8 * 0xDC0) + (14 * 0x20), 0x211BC + (8 * 0xDC0) + (14 * 0x20) },
    { L"Q-Bee HK Zapped",          0x2119C + (8 * 0xDC0) + (15 * 0x20), 0x211BC + (8 * 0xDC0) + (15 * 0x20) },
    { L"Q-Bee PP Zapped",          0x2119C + (8 * 0xDC0) + (16 * 0x20), 0x211BC + (8 * 0xDC0) + (16 * 0x20) },
    { L"Q-Bee KK Zapped",          0x2119C + (8 * 0xDC0) + (17 * 0x20), 0x211BC + (8 * 0xDC0) + (17 * 0x20) },
    { L"Q-Bee AP Zapped",          0x2119C + (8 * 0xDC0) + (18 * 0x20), 0x211BC + (8 * 0xDC0) + (18 * 0x20) },
    { L"Q-Bee AK Zapped",          0x2119C + (8 * 0xDC0) + (19 * 0x20), 0x211BC + (8 * 0xDC0) + (19 * 0x20) },
    { L"Q-Bee LP Burned",          0x2119C + (8 * 0xDC0) + (20 * 0x20), 0x211BC + (8 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Burned",          0x2119C + (8 * 0xDC0) + (21 * 0x20), 0x211BC + (8 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Burned",          0x2119C + (8 * 0xDC0) + (22 * 0x20), 0x211BC + (8 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Burned",          0x2119C + (8 * 0xDC0) + (23 * 0x20), 0x211BC + (8 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Burned",          0x2119C + (8 * 0xDC0) + (24 * 0x20), 0x211BC + (8 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Burned",          0x2119C + (8 * 0xDC0) + (25 * 0x20), 0x211BC + (8 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Burned",          0x2119C + (8 * 0xDC0) + (26 * 0x20), 0x211BC + (8 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Burned",          0x2119C + (8 * 0xDC0) + (27 * 0x20), 0x211BC + (8 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Burned",          0x2119C + (8 * 0xDC0) + (28 * 0x20), 0x211BC + (8 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Burned",          0x2119C + (8 * 0xDC0) + (29 * 0x20), 0x211BC + (8 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (30 * 0x20), 0x211BC + (8 * 0xDC0) + (30 * 0x20) },
    { L"Q-Bee MP Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (31 * 0x20), 0x211BC + (8 * 0xDC0) + (31 * 0x20) },
    { L"Q-Bee HP Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (32 * 0x20), 0x211BC + (8 * 0xDC0) + (32 * 0x20) },
    { L"Q-Bee LK Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (33 * 0x20), 0x211BC + (8 * 0xDC0) + (33 * 0x20) },
    { L"Q-Bee MK Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (34 * 0x20), 0x211BC + (8 * 0xDC0) + (34 * 0x20) },
    { L"Q-Bee HK Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (35 * 0x20), 0x211BC + (8 * 0xDC0) + (35 * 0x20) },
    { L"Q-Bee PP Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (36 * 0x20), 0x211BC + (8 * 0xDC0) + (36 * 0x20) },
    { L"Q-Bee KK Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (37 * 0x20), 0x211BC + (8 * 0xDC0) + (37 * 0x20) },
    { L"Q-Bee AP Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (38 * 0x20), 0x211BC + (8 * 0xDC0) + (38 * 0x20) },
    { L"Q-Bee AK Pharaoh's Curse", 0x2119C + (8 * 0xDC0) + (39 * 0x20), 0x211BC + (8 * 0xDC0) + (39 * 0x20) },
    { L"Q-Bee ES 1",               0x2119C + (8 * 0xDC0) + (40 * 0x20), 0x211BC + (8 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 2",               0x2119C + (8 * 0xDC0) + (41 * 0x20), 0x211BC + (8 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 3",               0x2119C + (8 * 0xDC0) + (42 * 0x20), 0x211BC + (8 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ES 4",               0x2119C + (8 * 0xDC0) + (43 * 0x20), 0x211BC + (8 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 1",               0x2119C + (8 * 0xDC0) + (44 * 0x20), 0x211BC + (8 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 2",               0x2119C + (8 * 0xDC0) + (45 * 0x20), 0x211BC + (8 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 3",               0x2119C + (8 * 0xDC0) + (46 * 0x20), 0x211BC + (8 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 4",               0x2119C + (8 * 0xDC0) + (47 * 0x20), 0x211BC + (8 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 5",               0x2119C + (8 * 0xDC0) + (48 * 0x20), 0x211BC + (8 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 6",               0x2119C + (8 * 0xDC0) + (49 * 0x20), 0x211BC + (8 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 7",               0x2119C + (8 * 0xDC0) + (50 * 0x20), 0x211BC + (8 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee EX 8",               0x2119C + (8 * 0xDC0) + (51 * 0x20), 0x211BC + (8 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee Prova di Servo",     0x2119C + (8 * 0xDC0) + (52 * 0x20), 0x211BC + (8 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee Finale Rosso",       0x2119C + (8 * 0xDC0) + (53 * 0x20), 0x211BC + (8 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee Stone",              0x2119C + (8 * 0xDC0) + (54 * 0x20), 0x211BC + (8 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Midnight Bliss",  0x2119C + (8 * 0xDC0) + (55 * 0x20), 0x211BC + (8 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Midnight Bliss",  0x2119C + (8 * 0xDC0) + (56 * 0x20), 0x211BC + (8 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Midnight Bliss",  0x2119C + (8 * 0xDC0) + (57 * 0x20), 0x211BC + (8 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Midnight Bliss",  0x2119C + (8 * 0xDC0) + (58 * 0x20), 0x211BC + (8 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Midnight Bliss",  0x2119C + (8 * 0xDC0) + (59 * 0x20), 0x211BC + (8 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Midnight Bliss",  0x2119C + (8 * 0xDC0) + (60 * 0x20), 0x211BC + (8 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Midnight Bliss",  0x2119C + (8 * 0xDC0) + (61 * 0x20), 0x211BC + (8 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Midnight Bliss",  0x2119C + (8 * 0xDC0) + (62 * 0x20), 0x211BC + (8 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Midnight Bliss",  0x2119C + (8 * 0xDC0) + (63 * 0x20), 0x211BC + (8 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Midnight Bliss",  0x2119C + (8 * 0xDC0) + (64 * 0x20), 0x211BC + (8 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_QBee },
    { L"Q-Bee Q-Bee's QJ Honey",   0x2119C + (8 * 0xDC0) + (65 * 0x20), 0x211BC + (8 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 1",    0x2119C + (8 * 0xDC0) + (66 * 0x20), 0x211BC + (8 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 2",    0x2119C + (8 * 0xDC0) + (67 * 0x20), 0x211BC + (8 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 3",    0x2119C + (8 * 0xDC0) + (68 * 0x20), 0x211BC + (8 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LP Dark Force 4",    0x2119C + (8 * 0xDC0) + (69 * 0x20), 0x211BC + (8 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 1",    0x2119C + (8 * 0xDC0) + (70 * 0x20), 0x211BC + (8 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 2",    0x2119C + (8 * 0xDC0) + (71 * 0x20), 0x211BC + (8 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 3",    0x2119C + (8 * 0xDC0) + (72 * 0x20), 0x211BC + (8 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MP Dark Force 4",    0x2119C + (8 * 0xDC0) + (73 * 0x20), 0x211BC + (8 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 1",    0x2119C + (8 * 0xDC0) + (74 * 0x20), 0x211BC + (8 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 2",    0x2119C + (8 * 0xDC0) + (75 * 0x20), 0x211BC + (8 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 3",    0x2119C + (8 * 0xDC0) + (76 * 0x20), 0x211BC + (8 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HP Dark Force 4",    0x2119C + (8 * 0xDC0) + (77 * 0x20), 0x211BC + (8 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 1",    0x2119C + (8 * 0xDC0) + (78 * 0x20), 0x211BC + (8 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 2",    0x2119C + (8 * 0xDC0) + (79 * 0x20), 0x211BC + (8 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 3",    0x2119C + (8 * 0xDC0) + (80 * 0x20), 0x211BC + (8 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee LK Dark Force 4",    0x2119C + (8 * 0xDC0) + (81 * 0x20), 0x211BC + (8 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 1",    0x2119C + (8 * 0xDC0) + (82 * 0x20), 0x211BC + (8 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 2",    0x2119C + (8 * 0xDC0) + (83 * 0x20), 0x211BC + (8 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 3",    0x2119C + (8 * 0xDC0) + (84 * 0x20), 0x211BC + (8 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee MK Dark Force 4",    0x2119C + (8 * 0xDC0) + (85 * 0x20), 0x211BC + (8 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 1",    0x2119C + (8 * 0xDC0) + (86 * 0x20), 0x211BC + (8 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 2",    0x2119C + (8 * 0xDC0) + (87 * 0x20), 0x211BC + (8 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 3",    0x2119C + (8 * 0xDC0) + (88 * 0x20), 0x211BC + (8 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee HK Dark Force 4",    0x2119C + (8 * 0xDC0) + (89 * 0x20), 0x211BC + (8 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 1",    0x2119C + (8 * 0xDC0) + (90 * 0x20), 0x211BC + (8 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 2",    0x2119C + (8 * 0xDC0) + (91 * 0x20), 0x211BC + (8 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 3",    0x2119C + (8 * 0xDC0) + (92 * 0x20), 0x211BC + (8 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee PP Dark Force 4",    0x2119C + (8 * 0xDC0) + (93 * 0x20), 0x211BC + (8 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 1",    0x2119C + (8 * 0xDC0) + (94 * 0x20), 0x211BC + (8 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 2",    0x2119C + (8 * 0xDC0) + (95 * 0x20), 0x211BC + (8 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 3",    0x2119C + (8 * 0xDC0) + (96 * 0x20), 0x211BC + (8 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee KK Dark Force 4",    0x2119C + (8 * 0xDC0) + (97 * 0x20), 0x211BC + (8 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 1",    0x2119C + (8 * 0xDC0) + (98 * 0x20), 0x211BC + (8 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 2",    0x2119C + (8 * 0xDC0) + (99 * 0x20), 0x211BC + (8 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 3",    0x2119C + (8 * 0xDC0) + (100 * 0x20), 0x211BC + (8 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AP Dark Force 4",    0x2119C + (8 * 0xDC0) + (101 * 0x20), 0x211BC + (8 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 1",    0x2119C + (8 * 0xDC0) + (102 * 0x20), 0x211BC + (8 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 2",    0x2119C + (8 * 0xDC0) + (103 * 0x20), 0x211BC + (8 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 3",    0x2119C + (8 * 0xDC0) + (104 * 0x20), 0x211BC + (8 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee AK Dark Force 4",    0x2119C + (8 * 0xDC0) + (105 * 0x20), 0x211BC + (8 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 1",              0x2119C + (8 * 0xDC0) + (106 * 0x20), 0x211BC + (8 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 2",              0x2119C + (8 * 0xDC0) + (107 * 0x20), 0x211BC + (8 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 3",              0x2119C + (8 * 0xDC0) + (108 * 0x20), 0x211BC + (8 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_QBee },
    { L"Q-Bee ??? 4",              0x2119C + (8 * 0xDC0) + (109 * 0x20), 0x211BC + (8 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_QBee },
};

const sGame_PaletteDataset VSAV2_A_LeiLei_PALETTES_SPECIAL[] =
{
    { L"Lei-Lei LP Poisoned",        0x2119C + (9 * 0xDC0) + (0 * 0x20), 0x211BC + (9 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Poisoned",        0x2119C + (9 * 0xDC0) + (1 * 0x20), 0x211BC + (9 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Poisoned",        0x2119C + (9 * 0xDC0) + (2 * 0x20), 0x211BC + (9 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Poisoned",        0x2119C + (9 * 0xDC0) + (3 * 0x20), 0x211BC + (9 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Poisoned",        0x2119C + (9 * 0xDC0) + (4 * 0x20), 0x211BC + (9 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Poisoned",        0x2119C + (9 * 0xDC0) + (5 * 0x20), 0x211BC + (9 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Poisoned",        0x2119C + (9 * 0xDC0) + (6 * 0x20), 0x211BC + (9 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Poisoned",        0x2119C + (9 * 0xDC0) + (7 * 0x20), 0x211BC + (9 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Poisoned",        0x2119C + (9 * 0xDC0) + (8 * 0x20), 0x211BC + (9 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Poisoned",        0x2119C + (9 * 0xDC0) + (9 * 0x20), 0x211BC + (9 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Zapped",          0x2119C + (9 * 0xDC0) + (10 * 0x20), 0x211BC + (9 * 0xDC0) + (10 * 0x20) },
    { L"Lei-Lei MP Zapped",          0x2119C + (9 * 0xDC0) + (11 * 0x20), 0x211BC + (9 * 0xDC0) + (11 * 0x20) },
    { L"Lei-Lei HP Zapped",          0x2119C + (9 * 0xDC0) + (12 * 0x20), 0x211BC + (9 * 0xDC0) + (12 * 0x20) },
    { L"Lei-Lei LK Zapped",          0x2119C + (9 * 0xDC0) + (13 * 0x20), 0x211BC + (9 * 0xDC0) + (13 * 0x20) },
    { L"Lei-Lei MK Zapped",          0x2119C + (9 * 0xDC0) + (14 * 0x20), 0x211BC + (9 * 0xDC0) + (14 * 0x20) },
    { L"Lei-Lei HK Zapped",          0x2119C + (9 * 0xDC0) + (15 * 0x20), 0x211BC + (9 * 0xDC0) + (15 * 0x20) },
    { L"Lei-Lei PP Zapped",          0x2119C + (9 * 0xDC0) + (16 * 0x20), 0x211BC + (9 * 0xDC0) + (16 * 0x20) },
    { L"Lei-Lei KK Zapped",          0x2119C + (9 * 0xDC0) + (17 * 0x20), 0x211BC + (9 * 0xDC0) + (17 * 0x20) },
    { L"Lei-Lei AP Zapped",          0x2119C + (9 * 0xDC0) + (18 * 0x20), 0x211BC + (9 * 0xDC0) + (18 * 0x20) },
    { L"Lei-Lei AK Zapped",          0x2119C + (9 * 0xDC0) + (19 * 0x20), 0x211BC + (9 * 0xDC0) + (19 * 0x20) },
    { L"Lei-Lei LP Burned",          0x2119C + (9 * 0xDC0) + (20 * 0x20), 0x211BC + (9 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Burned",          0x2119C + (9 * 0xDC0) + (21 * 0x20), 0x211BC + (9 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Burned",          0x2119C + (9 * 0xDC0) + (22 * 0x20), 0x211BC + (9 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Burned",          0x2119C + (9 * 0xDC0) + (23 * 0x20), 0x211BC + (9 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Burned",          0x2119C + (9 * 0xDC0) + (24 * 0x20), 0x211BC + (9 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Burned",          0x2119C + (9 * 0xDC0) + (25 * 0x20), 0x211BC + (9 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Burned",          0x2119C + (9 * 0xDC0) + (26 * 0x20), 0x211BC + (9 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Burned",          0x2119C + (9 * 0xDC0) + (27 * 0x20), 0x211BC + (9 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Burned",          0x2119C + (9 * 0xDC0) + (28 * 0x20), 0x211BC + (9 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Burned",          0x2119C + (9 * 0xDC0) + (29 * 0x20), 0x211BC + (9 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (30 * 0x20), 0x211BC + (9 * 0xDC0) + (30 * 0x20) },
    { L"Lei-Lei MP Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (31 * 0x20), 0x211BC + (9 * 0xDC0) + (31 * 0x20) },
    { L"Lei-Lei HP Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (32 * 0x20), 0x211BC + (9 * 0xDC0) + (32 * 0x20) },
    { L"Lei-Lei LK Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (33 * 0x20), 0x211BC + (9 * 0xDC0) + (33 * 0x20) },
    { L"Lei-Lei MK Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (34 * 0x20), 0x211BC + (9 * 0xDC0) + (34 * 0x20) },
    { L"Lei-Lei HK Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (35 * 0x20), 0x211BC + (9 * 0xDC0) + (35 * 0x20) },
    { L"Lei-Lei PP Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (36 * 0x20), 0x211BC + (9 * 0xDC0) + (36 * 0x20) },
    { L"Lei-Lei KK Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (37 * 0x20), 0x211BC + (9 * 0xDC0) + (37 * 0x20) },
    { L"Lei-Lei AP Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (38 * 0x20), 0x211BC + (9 * 0xDC0) + (38 * 0x20) },
    { L"Lei-Lei AK Pharaoh's Curse", 0x2119C + (9 * 0xDC0) + (39 * 0x20), 0x211BC + (9 * 0xDC0) + (39 * 0x20) },
    { L"Lei-Lei ES 1",               0x2119C + (9 * 0xDC0) + (40 * 0x20), 0x211BC + (9 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 2",               0x2119C + (9 * 0xDC0) + (41 * 0x20), 0x211BC + (9 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 3",               0x2119C + (9 * 0xDC0) + (42 * 0x20), 0x211BC + (9 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ES 4",               0x2119C + (9 * 0xDC0) + (43 * 0x20), 0x211BC + (9 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 1",               0x2119C + (9 * 0xDC0) + (44 * 0x20), 0x211BC + (9 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 2",               0x2119C + (9 * 0xDC0) + (45 * 0x20), 0x211BC + (9 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 3",               0x2119C + (9 * 0xDC0) + (46 * 0x20), 0x211BC + (9 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 4",               0x2119C + (9 * 0xDC0) + (47 * 0x20), 0x211BC + (9 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 5",               0x2119C + (9 * 0xDC0) + (48 * 0x20), 0x211BC + (9 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 6",               0x2119C + (9 * 0xDC0) + (49 * 0x20), 0x211BC + (9 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 7",               0x2119C + (9 * 0xDC0) + (50 * 0x20), 0x211BC + (9 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei EX 8",               0x2119C + (9 * 0xDC0) + (51 * 0x20), 0x211BC + (9 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Prova di Servo",     0x2119C + (9 * 0xDC0) + (52 * 0x20), 0x211BC + (9 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Finale Rosso",       0x2119C + (9 * 0xDC0) + (53 * 0x20), 0x211BC + (9 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Stone",              0x2119C + (9 * 0xDC0) + (54 * 0x20), 0x211BC + (9 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Midnight Bliss",  0x2119C + (9 * 0xDC0) + (55 * 0x20), 0x211BC + (9 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Midnight Bliss",  0x2119C + (9 * 0xDC0) + (56 * 0x20), 0x211BC + (9 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Midnight Bliss",  0x2119C + (9 * 0xDC0) + (57 * 0x20), 0x211BC + (9 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Midnight Bliss",  0x2119C + (9 * 0xDC0) + (58 * 0x20), 0x211BC + (9 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Midnight Bliss",  0x2119C + (9 * 0xDC0) + (59 * 0x20), 0x211BC + (9 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Midnight Bliss",  0x2119C + (9 * 0xDC0) + (60 * 0x20), 0x211BC + (9 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Midnight Bliss",  0x2119C + (9 * 0xDC0) + (61 * 0x20), 0x211BC + (9 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Midnight Bliss",  0x2119C + (9 * 0xDC0) + (62 * 0x20), 0x211BC + (9 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Midnight Bliss",  0x2119C + (9 * 0xDC0) + (63 * 0x20), 0x211BC + (9 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Midnight Bliss",  0x2119C + (9 * 0xDC0) + (64 * 0x20), 0x211BC + (9 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei Q-Bee's QJ Honey",   0x2119C + (9 * 0xDC0) + (65 * 0x20), 0x211BC + (9 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 1",    0x2119C + (9 * 0xDC0) + (66 * 0x20), 0x211BC + (9 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 2",    0x2119C + (9 * 0xDC0) + (67 * 0x20), 0x211BC + (9 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 3",    0x2119C + (9 * 0xDC0) + (68 * 0x20), 0x211BC + (9 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LP Dark Force 4",    0x2119C + (9 * 0xDC0) + (69 * 0x20), 0x211BC + (9 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 1",    0x2119C + (9 * 0xDC0) + (70 * 0x20), 0x211BC + (9 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 2",    0x2119C + (9 * 0xDC0) + (71 * 0x20), 0x211BC + (9 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 3",    0x2119C + (9 * 0xDC0) + (72 * 0x20), 0x211BC + (9 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MP Dark Force 4",    0x2119C + (9 * 0xDC0) + (73 * 0x20), 0x211BC + (9 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 1",    0x2119C + (9 * 0xDC0) + (74 * 0x20), 0x211BC + (9 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 2",    0x2119C + (9 * 0xDC0) + (75 * 0x20), 0x211BC + (9 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 3",    0x2119C + (9 * 0xDC0) + (76 * 0x20), 0x211BC + (9 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HP Dark Force 4",    0x2119C + (9 * 0xDC0) + (77 * 0x20), 0x211BC + (9 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 1",    0x2119C + (9 * 0xDC0) + (78 * 0x20), 0x211BC + (9 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 2",    0x2119C + (9 * 0xDC0) + (79 * 0x20), 0x211BC + (9 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 3",    0x2119C + (9 * 0xDC0) + (80 * 0x20), 0x211BC + (9 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei LK Dark Force 4",    0x2119C + (9 * 0xDC0) + (81 * 0x20), 0x211BC + (9 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 1",    0x2119C + (9 * 0xDC0) + (82 * 0x20), 0x211BC + (9 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 2",    0x2119C + (9 * 0xDC0) + (83 * 0x20), 0x211BC + (9 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 3",    0x2119C + (9 * 0xDC0) + (84 * 0x20), 0x211BC + (9 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei MK Dark Force 4",    0x2119C + (9 * 0xDC0) + (85 * 0x20), 0x211BC + (9 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 1",    0x2119C + (9 * 0xDC0) + (86 * 0x20), 0x211BC + (9 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 2",    0x2119C + (9 * 0xDC0) + (87 * 0x20), 0x211BC + (9 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 3",    0x2119C + (9 * 0xDC0) + (88 * 0x20), 0x211BC + (9 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei HK Dark Force 4",    0x2119C + (9 * 0xDC0) + (89 * 0x20), 0x211BC + (9 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 1",    0x2119C + (9 * 0xDC0) + (90 * 0x20), 0x211BC + (9 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 2",    0x2119C + (9 * 0xDC0) + (91 * 0x20), 0x211BC + (9 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 3",    0x2119C + (9 * 0xDC0) + (92 * 0x20), 0x211BC + (9 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei PP Dark Force 4",    0x2119C + (9 * 0xDC0) + (93 * 0x20), 0x211BC + (9 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 1",    0x2119C + (9 * 0xDC0) + (94 * 0x20), 0x211BC + (9 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 2",    0x2119C + (9 * 0xDC0) + (95 * 0x20), 0x211BC + (9 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 3",    0x2119C + (9 * 0xDC0) + (96 * 0x20), 0x211BC + (9 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei KK Dark Force 4",    0x2119C + (9 * 0xDC0) + (97 * 0x20), 0x211BC + (9 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 1",    0x2119C + (9 * 0xDC0) + (98 * 0x20), 0x211BC + (9 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 2",    0x2119C + (9 * 0xDC0) + (99 * 0x20), 0x211BC + (9 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 3",    0x2119C + (9 * 0xDC0) + (100 * 0x20), 0x211BC + (9 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AP Dark Force 4",    0x2119C + (9 * 0xDC0) + (101 * 0x20), 0x211BC + (9 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 1",    0x2119C + (9 * 0xDC0) + (102 * 0x20), 0x211BC + (9 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 2",    0x2119C + (9 * 0xDC0) + (103 * 0x20), 0x211BC + (9 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 3",    0x2119C + (9 * 0xDC0) + (104 * 0x20), 0x211BC + (9 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei AK Dark Force 4",    0x2119C + (9 * 0xDC0) + (105 * 0x20), 0x211BC + (9 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 1",              0x2119C + (9 * 0xDC0) + (106 * 0x20), 0x211BC + (9 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 2",              0x2119C + (9 * 0xDC0) + (107 * 0x20), 0x211BC + (9 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 3",              0x2119C + (9 * 0xDC0) + (108 * 0x20), 0x211BC + (9 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_LeiLei },
    { L"Lei-Lei ??? 4",              0x2119C + (9 * 0xDC0) + (109 * 0x20), 0x211BC + (9 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_LeiLei },
};

const sGame_PaletteDataset VSAV2_A_Lilith_PALETTES_SPECIAL[] =
{
    { L"Lilith LP Poisoned",        0x2119C + (10 * 0xDC0) + (0 * 0x20), 0x211BC + (10 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Poisoned",        0x2119C + (10 * 0xDC0) + (1 * 0x20), 0x211BC + (10 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Poisoned",        0x2119C + (10 * 0xDC0) + (2 * 0x20), 0x211BC + (10 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Poisoned",        0x2119C + (10 * 0xDC0) + (3 * 0x20), 0x211BC + (10 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Poisoned",        0x2119C + (10 * 0xDC0) + (4 * 0x20), 0x211BC + (10 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Poisoned",        0x2119C + (10 * 0xDC0) + (5 * 0x20), 0x211BC + (10 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Poisoned",        0x2119C + (10 * 0xDC0) + (6 * 0x20), 0x211BC + (10 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Poisoned",        0x2119C + (10 * 0xDC0) + (7 * 0x20), 0x211BC + (10 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Poisoned",        0x2119C + (10 * 0xDC0) + (8 * 0x20), 0x211BC + (10 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Poisoned",        0x2119C + (10 * 0xDC0) + (9 * 0x20), 0x211BC + (10 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Zapped",          0x2119C + (10 * 0xDC0) + (10 * 0x20), 0x211BC + (10 * 0xDC0) + (10 * 0x20) },
    { L"Lilith MP Zapped",          0x2119C + (10 * 0xDC0) + (11 * 0x20), 0x211BC + (10 * 0xDC0) + (11 * 0x20) },
    { L"Lilith HP Zapped",          0x2119C + (10 * 0xDC0) + (12 * 0x20), 0x211BC + (10 * 0xDC0) + (12 * 0x20) },
    { L"Lilith LK Zapped",          0x2119C + (10 * 0xDC0) + (13 * 0x20), 0x211BC + (10 * 0xDC0) + (13 * 0x20) },
    { L"Lilith MK Zapped",          0x2119C + (10 * 0xDC0) + (14 * 0x20), 0x211BC + (10 * 0xDC0) + (14 * 0x20) },
    { L"Lilith HK Zapped",          0x2119C + (10 * 0xDC0) + (15 * 0x20), 0x211BC + (10 * 0xDC0) + (15 * 0x20) },
    { L"Lilith PP Zapped",          0x2119C + (10 * 0xDC0) + (16 * 0x20), 0x211BC + (10 * 0xDC0) + (16 * 0x20) },
    { L"Lilith KK Zapped",          0x2119C + (10 * 0xDC0) + (17 * 0x20), 0x211BC + (10 * 0xDC0) + (17 * 0x20) },
    { L"Lilith AP Zapped",          0x2119C + (10 * 0xDC0) + (18 * 0x20), 0x211BC + (10 * 0xDC0) + (18 * 0x20) },
    { L"Lilith AK Zapped",          0x2119C + (10 * 0xDC0) + (19 * 0x20), 0x211BC + (10 * 0xDC0) + (19 * 0x20) },
    { L"Lilith LP Burned",          0x2119C + (10 * 0xDC0) + (20 * 0x20), 0x211BC + (10 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Burned",          0x2119C + (10 * 0xDC0) + (21 * 0x20), 0x211BC + (10 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Burned",          0x2119C + (10 * 0xDC0) + (22 * 0x20), 0x211BC + (10 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Burned",          0x2119C + (10 * 0xDC0) + (23 * 0x20), 0x211BC + (10 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Burned",          0x2119C + (10 * 0xDC0) + (24 * 0x20), 0x211BC + (10 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Burned",          0x2119C + (10 * 0xDC0) + (25 * 0x20), 0x211BC + (10 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Burned",          0x2119C + (10 * 0xDC0) + (26 * 0x20), 0x211BC + (10 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Burned",          0x2119C + (10 * 0xDC0) + (27 * 0x20), 0x211BC + (10 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Burned",          0x2119C + (10 * 0xDC0) + (28 * 0x20), 0x211BC + (10 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Burned",          0x2119C + (10 * 0xDC0) + (29 * 0x20), 0x211BC + (10 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (30 * 0x20), 0x211BC + (10 * 0xDC0) + (30 * 0x20) },
    { L"Lilith MP Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (31 * 0x20), 0x211BC + (10 * 0xDC0) + (31 * 0x20) },
    { L"Lilith HP Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (32 * 0x20), 0x211BC + (10 * 0xDC0) + (32 * 0x20) },
    { L"Lilith LK Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (33 * 0x20), 0x211BC + (10 * 0xDC0) + (33 * 0x20) },
    { L"Lilith MK Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (34 * 0x20), 0x211BC + (10 * 0xDC0) + (34 * 0x20) },
    { L"Lilith HK Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (35 * 0x20), 0x211BC + (10 * 0xDC0) + (35 * 0x20) },
    { L"Lilith PP Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (36 * 0x20), 0x211BC + (10 * 0xDC0) + (36 * 0x20) },
    { L"Lilith KK Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (37 * 0x20), 0x211BC + (10 * 0xDC0) + (37 * 0x20) },
    { L"Lilith AP Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (38 * 0x20), 0x211BC + (10 * 0xDC0) + (38 * 0x20) },
    { L"Lilith AK Pharaoh's Curse", 0x2119C + (10 * 0xDC0) + (39 * 0x20), 0x211BC + (10 * 0xDC0) + (39 * 0x20) },
    { L"Lilith ES 1",               0x2119C + (10 * 0xDC0) + (40 * 0x20), 0x211BC + (10 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ES 2",               0x2119C + (10 * 0xDC0) + (41 * 0x20), 0x211BC + (10 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ES 3",               0x2119C + (10 * 0xDC0) + (42 * 0x20), 0x211BC + (10 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ES 4",               0x2119C + (10 * 0xDC0) + (43 * 0x20), 0x211BC + (10 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 1",               0x2119C + (10 * 0xDC0) + (44 * 0x20), 0x211BC + (10 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 2",               0x2119C + (10 * 0xDC0) + (45 * 0x20), 0x211BC + (10 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 3",               0x2119C + (10 * 0xDC0) + (46 * 0x20), 0x211BC + (10 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 4",               0x2119C + (10 * 0xDC0) + (47 * 0x20), 0x211BC + (10 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 5",               0x2119C + (10 * 0xDC0) + (48 * 0x20), 0x211BC + (10 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 6",               0x2119C + (10 * 0xDC0) + (49 * 0x20), 0x211BC + (10 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 7",               0x2119C + (10 * 0xDC0) + (50 * 0x20), 0x211BC + (10 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith EX 8",               0x2119C + (10 * 0xDC0) + (51 * 0x20), 0x211BC + (10 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith Prova di Servo",     0x2119C + (10 * 0xDC0) + (52 * 0x20), 0x211BC + (10 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith Finale Rosso",       0x2119C + (10 * 0xDC0) + (53 * 0x20), 0x211BC + (10 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith Stone",              0x2119C + (10 * 0xDC0) + (54 * 0x20), 0x211BC + (10 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Midnight Bliss",  0x2119C + (10 * 0xDC0) + (55 * 0x20), 0x211BC + (10 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MP Midnight Bliss",  0x2119C + (10 * 0xDC0) + (56 * 0x20), 0x211BC + (10 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HP Midnight Bliss",  0x2119C + (10 * 0xDC0) + (57 * 0x20), 0x211BC + (10 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith LK Midnight Bliss",  0x2119C + (10 * 0xDC0) + (58 * 0x20), 0x211BC + (10 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith MK Midnight Bliss",  0x2119C + (10 * 0xDC0) + (59 * 0x20), 0x211BC + (10 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith HK Midnight Bliss",  0x2119C + (10 * 0xDC0) + (60 * 0x20), 0x211BC + (10 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith PP Midnight Bliss",  0x2119C + (10 * 0xDC0) + (61 * 0x20), 0x211BC + (10 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith KK Midnight Bliss",  0x2119C + (10 * 0xDC0) + (62 * 0x20), 0x211BC + (10 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AP Midnight Bliss",  0x2119C + (10 * 0xDC0) + (63 * 0x20), 0x211BC + (10 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith AK Midnight Bliss",  0x2119C + (10 * 0xDC0) + (64 * 0x20), 0x211BC + (10 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Lilith },
    { L"Lilith Q-Bee's QJ Honey",   0x2119C + (10 * 0xDC0) + (65 * 0x20), 0x211BC + (10 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 1",    0x2119C + (10 * 0xDC0) + (66 * 0x20), 0x211BC + (10 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 2",    0x2119C + (10 * 0xDC0) + (67 * 0x20), 0x211BC + (10 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 3",    0x2119C + (10 * 0xDC0) + (68 * 0x20), 0x211BC + (10 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LP Dark Force 4",    0x2119C + (10 * 0xDC0) + (69 * 0x20), 0x211BC + (10 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 1",    0x2119C + (10 * 0xDC0) + (70 * 0x20), 0x211BC + (10 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 2",    0x2119C + (10 * 0xDC0) + (71 * 0x20), 0x211BC + (10 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 3",    0x2119C + (10 * 0xDC0) + (72 * 0x20), 0x211BC + (10 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MP Dark Force 4",    0x2119C + (10 * 0xDC0) + (73 * 0x20), 0x211BC + (10 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 1",    0x2119C + (10 * 0xDC0) + (74 * 0x20), 0x211BC + (10 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 2",    0x2119C + (10 * 0xDC0) + (75 * 0x20), 0x211BC + (10 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 3",    0x2119C + (10 * 0xDC0) + (76 * 0x20), 0x211BC + (10 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HP Dark Force 4",    0x2119C + (10 * 0xDC0) + (77 * 0x20), 0x211BC + (10 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 1",    0x2119C + (10 * 0xDC0) + (78 * 0x20), 0x211BC + (10 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 2",    0x2119C + (10 * 0xDC0) + (79 * 0x20), 0x211BC + (10 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 3",    0x2119C + (10 * 0xDC0) + (80 * 0x20), 0x211BC + (10 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith LK Dark Force 4",    0x2119C + (10 * 0xDC0) + (81 * 0x20), 0x211BC + (10 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 1",    0x2119C + (10 * 0xDC0) + (82 * 0x20), 0x211BC + (10 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 2",    0x2119C + (10 * 0xDC0) + (83 * 0x20), 0x211BC + (10 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 3",    0x2119C + (10 * 0xDC0) + (84 * 0x20), 0x211BC + (10 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith MK Dark Force 4",    0x2119C + (10 * 0xDC0) + (85 * 0x20), 0x211BC + (10 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 1",    0x2119C + (10 * 0xDC0) + (86 * 0x20), 0x211BC + (10 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 2",    0x2119C + (10 * 0xDC0) + (87 * 0x20), 0x211BC + (10 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 3",    0x2119C + (10 * 0xDC0) + (88 * 0x20), 0x211BC + (10 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith HK Dark Force 4",    0x2119C + (10 * 0xDC0) + (89 * 0x20), 0x211BC + (10 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 1",    0x2119C + (10 * 0xDC0) + (90 * 0x20), 0x211BC + (10 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 2",    0x2119C + (10 * 0xDC0) + (91 * 0x20), 0x211BC + (10 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 3",    0x2119C + (10 * 0xDC0) + (92 * 0x20), 0x211BC + (10 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith PP Dark Force 4",    0x2119C + (10 * 0xDC0) + (93 * 0x20), 0x211BC + (10 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 1",    0x2119C + (10 * 0xDC0) + (94 * 0x20), 0x211BC + (10 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 2",    0x2119C + (10 * 0xDC0) + (95 * 0x20), 0x211BC + (10 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 3",    0x2119C + (10 * 0xDC0) + (96 * 0x20), 0x211BC + (10 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith KK Dark Force 4",    0x2119C + (10 * 0xDC0) + (97 * 0x20), 0x211BC + (10 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 1",    0x2119C + (10 * 0xDC0) + (98 * 0x20), 0x211BC + (10 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 2",    0x2119C + (10 * 0xDC0) + (99 * 0x20), 0x211BC + (10 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 3",    0x2119C + (10 * 0xDC0) + (100 * 0x20), 0x211BC + (10 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AP Dark Force 4",    0x2119C + (10 * 0xDC0) + (101 * 0x20), 0x211BC + (10 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 1",    0x2119C + (10 * 0xDC0) + (102 * 0x20), 0x211BC + (10 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 2",    0x2119C + (10 * 0xDC0) + (103 * 0x20), 0x211BC + (10 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 3",    0x2119C + (10 * 0xDC0) + (104 * 0x20), 0x211BC + (10 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith AK Dark Force 4",    0x2119C + (10 * 0xDC0) + (105 * 0x20), 0x211BC + (10 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 1",              0x2119C + (10 * 0xDC0) + (106 * 0x20), 0x211BC + (10 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 2",              0x2119C + (10 * 0xDC0) + (107 * 0x20), 0x211BC + (10 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 3",              0x2119C + (10 * 0xDC0) + (108 * 0x20), 0x211BC + (10 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Lilith },
    { L"Lilith ??? 4",              0x2119C + (10 * 0xDC0) + (109 * 0x20), 0x211BC + (10 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Lilith },
};

const sGame_PaletteDataset VSAV2_A_Jedah_PALETTES_SPECIAL[] =
{
    { L"Jedah LP Poisoned",        0x2119C + (11 * 0xDC0) + (0 * 0x20), 0x211BC + (11 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Poisoned",        0x2119C + (11 * 0xDC0) + (1 * 0x20), 0x211BC + (11 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Poisoned",        0x2119C + (11 * 0xDC0) + (2 * 0x20), 0x211BC + (11 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Poisoned",        0x2119C + (11 * 0xDC0) + (3 * 0x20), 0x211BC + (11 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Poisoned",        0x2119C + (11 * 0xDC0) + (4 * 0x20), 0x211BC + (11 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Poisoned",        0x2119C + (11 * 0xDC0) + (5 * 0x20), 0x211BC + (11 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Poisoned",        0x2119C + (11 * 0xDC0) + (6 * 0x20), 0x211BC + (11 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Poisoned",        0x2119C + (11 * 0xDC0) + (7 * 0x20), 0x211BC + (11 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Poisoned",        0x2119C + (11 * 0xDC0) + (8 * 0x20), 0x211BC + (11 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Poisoned",        0x2119C + (11 * 0xDC0) + (9 * 0x20), 0x211BC + (11 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Zapped",          0x2119C + (11 * 0xDC0) + (10 * 0x20), 0x211BC + (11 * 0xDC0) + (10 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah MP Zapped",          0x2119C + (11 * 0xDC0) + (11 * 0x20), 0x211BC + (11 * 0xDC0) + (11 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah HP Zapped",          0x2119C + (11 * 0xDC0) + (12 * 0x20), 0x211BC + (11 * 0xDC0) + (12 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah LK Zapped",          0x2119C + (11 * 0xDC0) + (13 * 0x20), 0x211BC + (11 * 0xDC0) + (13 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah MK Zapped",          0x2119C + (11 * 0xDC0) + (14 * 0x20), 0x211BC + (11 * 0xDC0) + (14 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah HK Zapped",          0x2119C + (11 * 0xDC0) + (15 * 0x20), 0x211BC + (11 * 0xDC0) + (15 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah PP Zapped",          0x2119C + (11 * 0xDC0) + (16 * 0x20), 0x211BC + (11 * 0xDC0) + (16 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah KK Zapped",          0x2119C + (11 * 0xDC0) + (17 * 0x20), 0x211BC + (11 * 0xDC0) + (17 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah AP Zapped",          0x2119C + (11 * 0xDC0) + (18 * 0x20), 0x211BC + (11 * 0xDC0) + (18 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah AK Zapped",          0x2119C + (11 * 0xDC0) + (19 * 0x20), 0x211BC + (11 * 0xDC0) + (19 * 0x20), indexCPS2_Vamp_Jedah, 0x0c },
    { L"Jedah LP Burned",          0x2119C + (11 * 0xDC0) + (20 * 0x20), 0x211BC + (11 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Burned",          0x2119C + (11 * 0xDC0) + (21 * 0x20), 0x211BC + (11 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Burned",          0x2119C + (11 * 0xDC0) + (22 * 0x20), 0x211BC + (11 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Burned",          0x2119C + (11 * 0xDC0) + (23 * 0x20), 0x211BC + (11 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Burned",          0x2119C + (11 * 0xDC0) + (24 * 0x20), 0x211BC + (11 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Burned",          0x2119C + (11 * 0xDC0) + (25 * 0x20), 0x211BC + (11 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Burned",          0x2119C + (11 * 0xDC0) + (26 * 0x20), 0x211BC + (11 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Burned",          0x2119C + (11 * 0xDC0) + (27 * 0x20), 0x211BC + (11 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Burned",          0x2119C + (11 * 0xDC0) + (28 * 0x20), 0x211BC + (11 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Burned",          0x2119C + (11 * 0xDC0) + (29 * 0x20), 0x211BC + (11 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (30 * 0x20), 0x211BC + (11 * 0xDC0) + (30 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MP Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (31 * 0x20), 0x211BC + (11 * 0xDC0) + (31 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HP Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (32 * 0x20), 0x211BC + (11 * 0xDC0) + (32 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah LK Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (33 * 0x20), 0x211BC + (11 * 0xDC0) + (33 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah MK Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (34 * 0x20), 0x211BC + (11 * 0xDC0) + (34 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah HK Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (35 * 0x20), 0x211BC + (11 * 0xDC0) + (35 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah PP Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (36 * 0x20), 0x211BC + (11 * 0xDC0) + (36 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah KK Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (37 * 0x20), 0x211BC + (11 * 0xDC0) + (37 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AP Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (38 * 0x20), 0x211BC + (11 * 0xDC0) + (38 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah AK Pharaoh's Curse", 0x2119C + (11 * 0xDC0) + (39 * 0x20), 0x211BC + (11 * 0xDC0) + (39 * 0x20), indexCPS2_Vamp_Jedah, 0x0d },
    { L"Jedah ES 1",               0x2119C + (11 * 0xDC0) + (40 * 0x20), 0x211BC + (11 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ES 2",               0x2119C + (11 * 0xDC0) + (41 * 0x20), 0x211BC + (11 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ES 3",               0x2119C + (11 * 0xDC0) + (42 * 0x20), 0x211BC + (11 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ES 4",               0x2119C + (11 * 0xDC0) + (43 * 0x20), 0x211BC + (11 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 1",               0x2119C + (11 * 0xDC0) + (44 * 0x20), 0x211BC + (11 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 2",               0x2119C + (11 * 0xDC0) + (45 * 0x20), 0x211BC + (11 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 3",               0x2119C + (11 * 0xDC0) + (46 * 0x20), 0x211BC + (11 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 4",               0x2119C + (11 * 0xDC0) + (47 * 0x20), 0x211BC + (11 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 5",               0x2119C + (11 * 0xDC0) + (48 * 0x20), 0x211BC + (11 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 6",               0x2119C + (11 * 0xDC0) + (49 * 0x20), 0x211BC + (11 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 7",               0x2119C + (11 * 0xDC0) + (50 * 0x20), 0x211BC + (11 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah EX 8",               0x2119C + (11 * 0xDC0) + (51 * 0x20), 0x211BC + (11 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah Prova di Servo",     0x2119C + (11 * 0xDC0) + (52 * 0x20), 0x211BC + (11 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah Finale Rosso",       0x2119C + (11 * 0xDC0) + (53 * 0x20), 0x211BC + (11 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah Stone",              0x2119C + (11 * 0xDC0) + (54 * 0x20), 0x211BC + (11 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Midnight Bliss",  0x2119C + (11 * 0xDC0) + (55 * 0x20), 0x211BC + (11 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MP Midnight Bliss",  0x2119C + (11 * 0xDC0) + (56 * 0x20), 0x211BC + (11 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HP Midnight Bliss",  0x2119C + (11 * 0xDC0) + (57 * 0x20), 0x211BC + (11 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah LK Midnight Bliss",  0x2119C + (11 * 0xDC0) + (58 * 0x20), 0x211BC + (11 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah MK Midnight Bliss",  0x2119C + (11 * 0xDC0) + (59 * 0x20), 0x211BC + (11 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah HK Midnight Bliss",  0x2119C + (11 * 0xDC0) + (60 * 0x20), 0x211BC + (11 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah PP Midnight Bliss",  0x2119C + (11 * 0xDC0) + (61 * 0x20), 0x211BC + (11 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah KK Midnight Bliss",  0x2119C + (11 * 0xDC0) + (62 * 0x20), 0x211BC + (11 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AP Midnight Bliss",  0x2119C + (11 * 0xDC0) + (63 * 0x20), 0x211BC + (11 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah AK Midnight Bliss",  0x2119C + (11 * 0xDC0) + (64 * 0x20), 0x211BC + (11 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Jedah },
    { L"Jedah Q-Bee's QJ Honey",   0x2119C + (11 * 0xDC0) + (65 * 0x20), 0x211BC + (11 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 1",    0x2119C + (11 * 0xDC0) + (66 * 0x20), 0x211BC + (11 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 2",    0x2119C + (11 * 0xDC0) + (67 * 0x20), 0x211BC + (11 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 3",    0x2119C + (11 * 0xDC0) + (68 * 0x20), 0x211BC + (11 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LP Dark Force 4",    0x2119C + (11 * 0xDC0) + (69 * 0x20), 0x211BC + (11 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 1",    0x2119C + (11 * 0xDC0) + (70 * 0x20), 0x211BC + (11 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 2",    0x2119C + (11 * 0xDC0) + (71 * 0x20), 0x211BC + (11 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 3",    0x2119C + (11 * 0xDC0) + (72 * 0x20), 0x211BC + (11 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MP Dark Force 4",    0x2119C + (11 * 0xDC0) + (73 * 0x20), 0x211BC + (11 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 1",    0x2119C + (11 * 0xDC0) + (74 * 0x20), 0x211BC + (11 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 2",    0x2119C + (11 * 0xDC0) + (75 * 0x20), 0x211BC + (11 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 3",    0x2119C + (11 * 0xDC0) + (76 * 0x20), 0x211BC + (11 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HP Dark Force 4",    0x2119C + (11 * 0xDC0) + (77 * 0x20), 0x211BC + (11 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 1",    0x2119C + (11 * 0xDC0) + (78 * 0x20), 0x211BC + (11 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 2",    0x2119C + (11 * 0xDC0) + (79 * 0x20), 0x211BC + (11 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 3",    0x2119C + (11 * 0xDC0) + (80 * 0x20), 0x211BC + (11 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah LK Dark Force 4",    0x2119C + (11 * 0xDC0) + (81 * 0x20), 0x211BC + (11 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 1",    0x2119C + (11 * 0xDC0) + (82 * 0x20), 0x211BC + (11 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 2",    0x2119C + (11 * 0xDC0) + (83 * 0x20), 0x211BC + (11 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 3",    0x2119C + (11 * 0xDC0) + (84 * 0x20), 0x211BC + (11 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah MK Dark Force 4",    0x2119C + (11 * 0xDC0) + (85 * 0x20), 0x211BC + (11 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 1",    0x2119C + (11 * 0xDC0) + (86 * 0x20), 0x211BC + (11 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 2",    0x2119C + (11 * 0xDC0) + (87 * 0x20), 0x211BC + (11 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 3",    0x2119C + (11 * 0xDC0) + (88 * 0x20), 0x211BC + (11 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah HK Dark Force 4",    0x2119C + (11 * 0xDC0) + (89 * 0x20), 0x211BC + (11 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 1",    0x2119C + (11 * 0xDC0) + (90 * 0x20), 0x211BC + (11 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 2",    0x2119C + (11 * 0xDC0) + (91 * 0x20), 0x211BC + (11 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 3",    0x2119C + (11 * 0xDC0) + (92 * 0x20), 0x211BC + (11 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah PP Dark Force 4",    0x2119C + (11 * 0xDC0) + (93 * 0x20), 0x211BC + (11 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 1",    0x2119C + (11 * 0xDC0) + (94 * 0x20), 0x211BC + (11 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 2",    0x2119C + (11 * 0xDC0) + (95 * 0x20), 0x211BC + (11 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 3",    0x2119C + (11 * 0xDC0) + (96 * 0x20), 0x211BC + (11 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah KK Dark Force 4",    0x2119C + (11 * 0xDC0) + (97 * 0x20), 0x211BC + (11 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 1",    0x2119C + (11 * 0xDC0) + (98 * 0x20), 0x211BC + (11 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 2",    0x2119C + (11 * 0xDC0) + (99 * 0x20), 0x211BC + (11 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 3",    0x2119C + (11 * 0xDC0) + (100 * 0x20), 0x211BC + (11 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AP Dark Force 4",    0x2119C + (11 * 0xDC0) + (101 * 0x20), 0x211BC + (11 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 1",    0x2119C + (11 * 0xDC0) + (102 * 0x20), 0x211BC + (11 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 2",    0x2119C + (11 * 0xDC0) + (103 * 0x20), 0x211BC + (11 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 3",    0x2119C + (11 * 0xDC0) + (104 * 0x20), 0x211BC + (11 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah AK Dark Force 4",    0x2119C + (11 * 0xDC0) + (105 * 0x20), 0x211BC + (11 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 1",              0x2119C + (11 * 0xDC0) + (106 * 0x20), 0x211BC + (11 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 2",              0x2119C + (11 * 0xDC0) + (107 * 0x20), 0x211BC + (11 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 3",              0x2119C + (11 * 0xDC0) + (108 * 0x20), 0x211BC + (11 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Jedah },
    { L"Jedah ??? 4",              0x2119C + (11 * 0xDC0) + (109 * 0x20), 0x211BC + (11 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Jedah },
};

const sGame_PaletteDataset VSAV2_A_Phobos_PALETTES_SPECIAL[] =
{
    { L"Phobos LP Poisoned",        0x2119C + (12 * 0xDC0) + (0 * 0x20), 0x211BC + (12 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Poisoned",        0x2119C + (12 * 0xDC0) + (1 * 0x20), 0x211BC + (12 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Poisoned",        0x2119C + (12 * 0xDC0) + (2 * 0x20), 0x211BC + (12 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Poisoned",        0x2119C + (12 * 0xDC0) + (3 * 0x20), 0x211BC + (12 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Poisoned",        0x2119C + (12 * 0xDC0) + (4 * 0x20), 0x211BC + (12 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Poisoned",        0x2119C + (12 * 0xDC0) + (5 * 0x20), 0x211BC + (12 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Poisoned",        0x2119C + (12 * 0xDC0) + (6 * 0x20), 0x211BC + (12 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Poisoned",        0x2119C + (12 * 0xDC0) + (7 * 0x20), 0x211BC + (12 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Poisoned",        0x2119C + (12 * 0xDC0) + (8 * 0x20), 0x211BC + (12 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Poisoned",        0x2119C + (12 * 0xDC0) + (9 * 0x20), 0x211BC + (12 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Zapped",          0x2119C + (12 * 0xDC0) + (10 * 0x20), 0x211BC + (12 * 0xDC0) + (10 * 0x20) },
    { L"Phobos MP Zapped",          0x2119C + (12 * 0xDC0) + (11 * 0x20), 0x211BC + (12 * 0xDC0) + (11 * 0x20) },
    { L"Phobos HP Zapped",          0x2119C + (12 * 0xDC0) + (12 * 0x20), 0x211BC + (12 * 0xDC0) + (12 * 0x20) },
    { L"Phobos LK Zapped",          0x2119C + (12 * 0xDC0) + (13 * 0x20), 0x211BC + (12 * 0xDC0) + (13 * 0x20) },
    { L"Phobos MK Zapped",          0x2119C + (12 * 0xDC0) + (14 * 0x20), 0x211BC + (12 * 0xDC0) + (14 * 0x20) },
    { L"Phobos HK Zapped",          0x2119C + (12 * 0xDC0) + (15 * 0x20), 0x211BC + (12 * 0xDC0) + (15 * 0x20) },
    { L"Phobos PP Zapped",          0x2119C + (12 * 0xDC0) + (16 * 0x20), 0x211BC + (12 * 0xDC0) + (16 * 0x20) },
    { L"Phobos KK Zapped",          0x2119C + (12 * 0xDC0) + (17 * 0x20), 0x211BC + (12 * 0xDC0) + (17 * 0x20) },
    { L"Phobos AP Zapped",          0x2119C + (12 * 0xDC0) + (18 * 0x20), 0x211BC + (12 * 0xDC0) + (18 * 0x20) },
    { L"Phobos AK Zapped",          0x2119C + (12 * 0xDC0) + (19 * 0x20), 0x211BC + (12 * 0xDC0) + (19 * 0x20) },
    { L"Phobos LP Burned",          0x2119C + (12 * 0xDC0) + (20 * 0x20), 0x211BC + (12 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Burned",          0x2119C + (12 * 0xDC0) + (21 * 0x20), 0x211BC + (12 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Burned",          0x2119C + (12 * 0xDC0) + (22 * 0x20), 0x211BC + (12 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Burned",          0x2119C + (12 * 0xDC0) + (23 * 0x20), 0x211BC + (12 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Burned",          0x2119C + (12 * 0xDC0) + (24 * 0x20), 0x211BC + (12 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Burned",          0x2119C + (12 * 0xDC0) + (25 * 0x20), 0x211BC + (12 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Burned",          0x2119C + (12 * 0xDC0) + (26 * 0x20), 0x211BC + (12 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Burned",          0x2119C + (12 * 0xDC0) + (27 * 0x20), 0x211BC + (12 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Burned",          0x2119C + (12 * 0xDC0) + (28 * 0x20), 0x211BC + (12 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Burned",          0x2119C + (12 * 0xDC0) + (29 * 0x20), 0x211BC + (12 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (30 * 0x20), 0x211BC + (12 * 0xDC0) + (30 * 0x20) },
    { L"Phobos MP Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (31 * 0x20), 0x211BC + (12 * 0xDC0) + (31 * 0x20) },
    { L"Phobos HP Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (32 * 0x20), 0x211BC + (12 * 0xDC0) + (32 * 0x20) },
    { L"Phobos LK Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (33 * 0x20), 0x211BC + (12 * 0xDC0) + (33 * 0x20) },
    { L"Phobos MK Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (34 * 0x20), 0x211BC + (12 * 0xDC0) + (34 * 0x20) },
    { L"Phobos HK Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (35 * 0x20), 0x211BC + (12 * 0xDC0) + (35 * 0x20) },
    { L"Phobos PP Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (36 * 0x20), 0x211BC + (12 * 0xDC0) + (36 * 0x20) },
    { L"Phobos KK Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (37 * 0x20), 0x211BC + (12 * 0xDC0) + (37 * 0x20) },
    { L"Phobos AP Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (38 * 0x20), 0x211BC + (12 * 0xDC0) + (38 * 0x20) },
    { L"Phobos AK Pharaoh's Curse", 0x2119C + (12 * 0xDC0) + (39 * 0x20), 0x211BC + (12 * 0xDC0) + (39 * 0x20) },
    { L"Phobos ES 1",               0x2119C + (12 * 0xDC0) + (40 * 0x20), 0x211BC + (12 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ES 2",               0x2119C + (12 * 0xDC0) + (41 * 0x20), 0x211BC + (12 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ES 3",               0x2119C + (12 * 0xDC0) + (42 * 0x20), 0x211BC + (12 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ES 4",               0x2119C + (12 * 0xDC0) + (43 * 0x20), 0x211BC + (12 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 1",               0x2119C + (12 * 0xDC0) + (44 * 0x20), 0x211BC + (12 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 2",               0x2119C + (12 * 0xDC0) + (45 * 0x20), 0x211BC + (12 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 3",               0x2119C + (12 * 0xDC0) + (46 * 0x20), 0x211BC + (12 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 4",               0x2119C + (12 * 0xDC0) + (47 * 0x20), 0x211BC + (12 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 5",               0x2119C + (12 * 0xDC0) + (48 * 0x20), 0x211BC + (12 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 6",               0x2119C + (12 * 0xDC0) + (49 * 0x20), 0x211BC + (12 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 7",               0x2119C + (12 * 0xDC0) + (50 * 0x20), 0x211BC + (12 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos EX 8",               0x2119C + (12 * 0xDC0) + (51 * 0x20), 0x211BC + (12 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos Prova di Servo",     0x2119C + (12 * 0xDC0) + (52 * 0x20), 0x211BC + (12 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos Finale Rosso",       0x2119C + (12 * 0xDC0) + (53 * 0x20), 0x211BC + (12 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos Stone",              0x2119C + (12 * 0xDC0) + (54 * 0x20), 0x211BC + (12 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Midnight Bliss",  0x2119C + (12 * 0xDC0) + (55 * 0x20), 0x211BC + (12 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos MP Midnight Bliss",  0x2119C + (12 * 0xDC0) + (56 * 0x20), 0x211BC + (12 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos HP Midnight Bliss",  0x2119C + (12 * 0xDC0) + (57 * 0x20), 0x211BC + (12 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos LK Midnight Bliss",  0x2119C + (12 * 0xDC0) + (58 * 0x20), 0x211BC + (12 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos MK Midnight Bliss",  0x2119C + (12 * 0xDC0) + (59 * 0x20), 0x211BC + (12 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos HK Midnight Bliss",  0x2119C + (12 * 0xDC0) + (60 * 0x20), 0x211BC + (12 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos PP Midnight Bliss",  0x2119C + (12 * 0xDC0) + (61 * 0x20), 0x211BC + (12 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos KK Midnight Bliss",  0x2119C + (12 * 0xDC0) + (62 * 0x20), 0x211BC + (12 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos AP Midnight Bliss",  0x2119C + (12 * 0xDC0) + (63 * 0x20), 0x211BC + (12 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos AK Midnight Bliss",  0x2119C + (12 * 0xDC0) + (64 * 0x20), 0x211BC + (12 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Phobos },
    { L"Phobos Q-Bee's QJ Honey",   0x2119C + (12 * 0xDC0) + (65 * 0x20), 0x211BC + (12 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 1",    0x2119C + (12 * 0xDC0) + (66 * 0x20), 0x211BC + (12 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 2",    0x2119C + (12 * 0xDC0) + (67 * 0x20), 0x211BC + (12 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 3",    0x2119C + (12 * 0xDC0) + (68 * 0x20), 0x211BC + (12 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LP Dark Force 4",    0x2119C + (12 * 0xDC0) + (69 * 0x20), 0x211BC + (12 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 1",    0x2119C + (12 * 0xDC0) + (70 * 0x20), 0x211BC + (12 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 2",    0x2119C + (12 * 0xDC0) + (71 * 0x20), 0x211BC + (12 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 3",    0x2119C + (12 * 0xDC0) + (72 * 0x20), 0x211BC + (12 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MP Dark Force 4",    0x2119C + (12 * 0xDC0) + (73 * 0x20), 0x211BC + (12 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 1",    0x2119C + (12 * 0xDC0) + (74 * 0x20), 0x211BC + (12 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 2",    0x2119C + (12 * 0xDC0) + (75 * 0x20), 0x211BC + (12 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 3",    0x2119C + (12 * 0xDC0) + (76 * 0x20), 0x211BC + (12 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HP Dark Force 4",    0x2119C + (12 * 0xDC0) + (77 * 0x20), 0x211BC + (12 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 1",    0x2119C + (12 * 0xDC0) + (78 * 0x20), 0x211BC + (12 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 2",    0x2119C + (12 * 0xDC0) + (79 * 0x20), 0x211BC + (12 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 3",    0x2119C + (12 * 0xDC0) + (80 * 0x20), 0x211BC + (12 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos LK Dark Force 4",    0x2119C + (12 * 0xDC0) + (81 * 0x20), 0x211BC + (12 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 1",    0x2119C + (12 * 0xDC0) + (82 * 0x20), 0x211BC + (12 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 2",    0x2119C + (12 * 0xDC0) + (83 * 0x20), 0x211BC + (12 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 3",    0x2119C + (12 * 0xDC0) + (84 * 0x20), 0x211BC + (12 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos MK Dark Force 4",    0x2119C + (12 * 0xDC0) + (85 * 0x20), 0x211BC + (12 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 1",    0x2119C + (12 * 0xDC0) + (86 * 0x20), 0x211BC + (12 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 2",    0x2119C + (12 * 0xDC0) + (87 * 0x20), 0x211BC + (12 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 3",    0x2119C + (12 * 0xDC0) + (88 * 0x20), 0x211BC + (12 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos HK Dark Force 4",    0x2119C + (12 * 0xDC0) + (89 * 0x20), 0x211BC + (12 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 1",    0x2119C + (12 * 0xDC0) + (90 * 0x20), 0x211BC + (12 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 2",    0x2119C + (12 * 0xDC0) + (91 * 0x20), 0x211BC + (12 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 3",    0x2119C + (12 * 0xDC0) + (92 * 0x20), 0x211BC + (12 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos PP Dark Force 4",    0x2119C + (12 * 0xDC0) + (93 * 0x20), 0x211BC + (12 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 1",    0x2119C + (12 * 0xDC0) + (94 * 0x20), 0x211BC + (12 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 2",    0x2119C + (12 * 0xDC0) + (95 * 0x20), 0x211BC + (12 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 3",    0x2119C + (12 * 0xDC0) + (96 * 0x20), 0x211BC + (12 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos KK Dark Force 4",    0x2119C + (12 * 0xDC0) + (97 * 0x20), 0x211BC + (12 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 1",    0x2119C + (12 * 0xDC0) + (98 * 0x20), 0x211BC + (12 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 2",    0x2119C + (12 * 0xDC0) + (99 * 0x20), 0x211BC + (12 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 3",    0x2119C + (12 * 0xDC0) + (100 * 0x20), 0x211BC + (12 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AP Dark Force 4",    0x2119C + (12 * 0xDC0) + (101 * 0x20), 0x211BC + (12 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 1",    0x2119C + (12 * 0xDC0) + (102 * 0x20), 0x211BC + (12 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 2",    0x2119C + (12 * 0xDC0) + (103 * 0x20), 0x211BC + (12 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 3",    0x2119C + (12 * 0xDC0) + (104 * 0x20), 0x211BC + (12 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos AK Dark Force 4",    0x2119C + (12 * 0xDC0) + (105 * 0x20), 0x211BC + (12 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 1",              0x2119C + (12 * 0xDC0) + (106 * 0x20), 0x211BC + (12 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 2",              0x2119C + (12 * 0xDC0) + (107 * 0x20), 0x211BC + (12 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 3",              0x2119C + (12 * 0xDC0) + (108 * 0x20), 0x211BC + (12 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Phobos },
    { L"Phobos ??? 4",              0x2119C + (12 * 0xDC0) + (109 * 0x20), 0x211BC + (12 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Phobos },
};

const sGame_PaletteDataset VSAV2_A_Pyron_PALETTES_SPECIAL[] =
{
    { L"Pyron LP Poisoned",        0x2119C + (13 * 0xDC0) + (0 * 0x20), 0x211BC + (13 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Poisoned",        0x2119C + (13 * 0xDC0) + (1 * 0x20), 0x211BC + (13 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Poisoned",        0x2119C + (13 * 0xDC0) + (2 * 0x20), 0x211BC + (13 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Poisoned",        0x2119C + (13 * 0xDC0) + (3 * 0x20), 0x211BC + (13 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Poisoned",        0x2119C + (13 * 0xDC0) + (4 * 0x20), 0x211BC + (13 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Poisoned",        0x2119C + (13 * 0xDC0) + (5 * 0x20), 0x211BC + (13 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Poisoned",        0x2119C + (13 * 0xDC0) + (6 * 0x20), 0x211BC + (13 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Poisoned",        0x2119C + (13 * 0xDC0) + (7 * 0x20), 0x211BC + (13 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Poisoned",        0x2119C + (13 * 0xDC0) + (8 * 0x20), 0x211BC + (13 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Poisoned",        0x2119C + (13 * 0xDC0) + (9 * 0x20), 0x211BC + (13 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Zapped",          0x2119C + (13 * 0xDC0) + (10 * 0x20), 0x211BC + (13 * 0xDC0) + (10 * 0x20) },
    { L"Pyron MP Zapped",          0x2119C + (13 * 0xDC0) + (11 * 0x20), 0x211BC + (13 * 0xDC0) + (11 * 0x20) },
    { L"Pyron HP Zapped",          0x2119C + (13 * 0xDC0) + (12 * 0x20), 0x211BC + (13 * 0xDC0) + (12 * 0x20) },
    { L"Pyron LK Zapped",          0x2119C + (13 * 0xDC0) + (13 * 0x20), 0x211BC + (13 * 0xDC0) + (13 * 0x20) },
    { L"Pyron MK Zapped",          0x2119C + (13 * 0xDC0) + (14 * 0x20), 0x211BC + (13 * 0xDC0) + (14 * 0x20) },
    { L"Pyron HK Zapped",          0x2119C + (13 * 0xDC0) + (15 * 0x20), 0x211BC + (13 * 0xDC0) + (15 * 0x20) },
    { L"Pyron PP Zapped",          0x2119C + (13 * 0xDC0) + (16 * 0x20), 0x211BC + (13 * 0xDC0) + (16 * 0x20) },
    { L"Pyron KK Zapped",          0x2119C + (13 * 0xDC0) + (17 * 0x20), 0x211BC + (13 * 0xDC0) + (17 * 0x20) },
    { L"Pyron AP Zapped",          0x2119C + (13 * 0xDC0) + (18 * 0x20), 0x211BC + (13 * 0xDC0) + (18 * 0x20) },
    { L"Pyron AK Zapped",          0x2119C + (13 * 0xDC0) + (19 * 0x20), 0x211BC + (13 * 0xDC0) + (19 * 0x20) },
    { L"Pyron LP Burned",          0x2119C + (13 * 0xDC0) + (20 * 0x20), 0x211BC + (13 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Burned",          0x2119C + (13 * 0xDC0) + (21 * 0x20), 0x211BC + (13 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Burned",          0x2119C + (13 * 0xDC0) + (22 * 0x20), 0x211BC + (13 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Burned",          0x2119C + (13 * 0xDC0) + (23 * 0x20), 0x211BC + (13 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Burned",          0x2119C + (13 * 0xDC0) + (24 * 0x20), 0x211BC + (13 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Burned",          0x2119C + (13 * 0xDC0) + (25 * 0x20), 0x211BC + (13 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Burned",          0x2119C + (13 * 0xDC0) + (26 * 0x20), 0x211BC + (13 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Burned",          0x2119C + (13 * 0xDC0) + (27 * 0x20), 0x211BC + (13 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Burned",          0x2119C + (13 * 0xDC0) + (28 * 0x20), 0x211BC + (13 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Burned",          0x2119C + (13 * 0xDC0) + (29 * 0x20), 0x211BC + (13 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (30 * 0x20), 0x211BC + (13 * 0xDC0) + (30 * 0x20) },
    { L"Pyron MP Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (31 * 0x20), 0x211BC + (13 * 0xDC0) + (31 * 0x20) },
    { L"Pyron HP Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (32 * 0x20), 0x211BC + (13 * 0xDC0) + (32 * 0x20) },
    { L"Pyron LK Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (33 * 0x20), 0x211BC + (13 * 0xDC0) + (33 * 0x20) },
    { L"Pyron MK Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (34 * 0x20), 0x211BC + (13 * 0xDC0) + (34 * 0x20) },
    { L"Pyron HK Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (35 * 0x20), 0x211BC + (13 * 0xDC0) + (35 * 0x20) },
    { L"Pyron PP Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (36 * 0x20), 0x211BC + (13 * 0xDC0) + (36 * 0x20) },
    { L"Pyron KK Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (37 * 0x20), 0x211BC + (13 * 0xDC0) + (37 * 0x20) },
    { L"Pyron AP Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (38 * 0x20), 0x211BC + (13 * 0xDC0) + (38 * 0x20) },
    { L"Pyron AK Pharaoh's Curse", 0x2119C + (13 * 0xDC0) + (39 * 0x20), 0x211BC + (13 * 0xDC0) + (39 * 0x20) },
    { L"Pyron ES 1",               0x2119C + (13 * 0xDC0) + (40 * 0x20), 0x211BC + (13 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ES 2",               0x2119C + (13 * 0xDC0) + (41 * 0x20), 0x211BC + (13 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ES 3",               0x2119C + (13 * 0xDC0) + (42 * 0x20), 0x211BC + (13 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ES 4",               0x2119C + (13 * 0xDC0) + (43 * 0x20), 0x211BC + (13 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 1",               0x2119C + (13 * 0xDC0) + (44 * 0x20), 0x211BC + (13 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 2",               0x2119C + (13 * 0xDC0) + (45 * 0x20), 0x211BC + (13 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 3",               0x2119C + (13 * 0xDC0) + (46 * 0x20), 0x211BC + (13 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 4",               0x2119C + (13 * 0xDC0) + (47 * 0x20), 0x211BC + (13 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 5",               0x2119C + (13 * 0xDC0) + (48 * 0x20), 0x211BC + (13 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 6",               0x2119C + (13 * 0xDC0) + (49 * 0x20), 0x211BC + (13 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 7",               0x2119C + (13 * 0xDC0) + (50 * 0x20), 0x211BC + (13 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron EX 8",               0x2119C + (13 * 0xDC0) + (51 * 0x20), 0x211BC + (13 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron Prova di Servo",     0x2119C + (13 * 0xDC0) + (52 * 0x20), 0x211BC + (13 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron Finale Rosso",       0x2119C + (13 * 0xDC0) + (53 * 0x20), 0x211BC + (13 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron Stone",              0x2119C + (13 * 0xDC0) + (54 * 0x20), 0x211BC + (13 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Midnight Bliss",  0x2119C + (13 * 0xDC0) + (55 * 0x20), 0x211BC + (13 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron MP Midnight Bliss",  0x2119C + (13 * 0xDC0) + (56 * 0x20), 0x211BC + (13 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron HP Midnight Bliss",  0x2119C + (13 * 0xDC0) + (57 * 0x20), 0x211BC + (13 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron LK Midnight Bliss",  0x2119C + (13 * 0xDC0) + (58 * 0x20), 0x211BC + (13 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron MK Midnight Bliss",  0x2119C + (13 * 0xDC0) + (59 * 0x20), 0x211BC + (13 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron HK Midnight Bliss",  0x2119C + (13 * 0xDC0) + (60 * 0x20), 0x211BC + (13 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron PP Midnight Bliss",  0x2119C + (13 * 0xDC0) + (61 * 0x20), 0x211BC + (13 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron KK Midnight Bliss",  0x2119C + (13 * 0xDC0) + (62 * 0x20), 0x211BC + (13 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron AP Midnight Bliss",  0x2119C + (13 * 0xDC0) + (63 * 0x20), 0x211BC + (13 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron AK Midnight Bliss",  0x2119C + (13 * 0xDC0) + (64 * 0x20), 0x211BC + (13 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Pyron },
    { L"Pyron Q-Bee's QJ Honey",   0x2119C + (13 * 0xDC0) + (65 * 0x20), 0x211BC + (13 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 1",    0x2119C + (13 * 0xDC0) + (66 * 0x20), 0x211BC + (13 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 2",    0x2119C + (13 * 0xDC0) + (67 * 0x20), 0x211BC + (13 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 3",    0x2119C + (13 * 0xDC0) + (68 * 0x20), 0x211BC + (13 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LP Dark Force 4",    0x2119C + (13 * 0xDC0) + (69 * 0x20), 0x211BC + (13 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 1",    0x2119C + (13 * 0xDC0) + (70 * 0x20), 0x211BC + (13 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 2",    0x2119C + (13 * 0xDC0) + (71 * 0x20), 0x211BC + (13 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 3",    0x2119C + (13 * 0xDC0) + (72 * 0x20), 0x211BC + (13 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MP Dark Force 4",    0x2119C + (13 * 0xDC0) + (73 * 0x20), 0x211BC + (13 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 1",    0x2119C + (13 * 0xDC0) + (74 * 0x20), 0x211BC + (13 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 2",    0x2119C + (13 * 0xDC0) + (75 * 0x20), 0x211BC + (13 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 3",    0x2119C + (13 * 0xDC0) + (76 * 0x20), 0x211BC + (13 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HP Dark Force 4",    0x2119C + (13 * 0xDC0) + (77 * 0x20), 0x211BC + (13 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 1",    0x2119C + (13 * 0xDC0) + (78 * 0x20), 0x211BC + (13 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 2",    0x2119C + (13 * 0xDC0) + (79 * 0x20), 0x211BC + (13 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 3",    0x2119C + (13 * 0xDC0) + (80 * 0x20), 0x211BC + (13 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron LK Dark Force 4",    0x2119C + (13 * 0xDC0) + (81 * 0x20), 0x211BC + (13 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 1",    0x2119C + (13 * 0xDC0) + (82 * 0x20), 0x211BC + (13 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 2",    0x2119C + (13 * 0xDC0) + (83 * 0x20), 0x211BC + (13 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 3",    0x2119C + (13 * 0xDC0) + (84 * 0x20), 0x211BC + (13 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron MK Dark Force 4",    0x2119C + (13 * 0xDC0) + (85 * 0x20), 0x211BC + (13 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 1",    0x2119C + (13 * 0xDC0) + (86 * 0x20), 0x211BC + (13 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 2",    0x2119C + (13 * 0xDC0) + (87 * 0x20), 0x211BC + (13 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 3",    0x2119C + (13 * 0xDC0) + (88 * 0x20), 0x211BC + (13 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron HK Dark Force 4",    0x2119C + (13 * 0xDC0) + (89 * 0x20), 0x211BC + (13 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 1",    0x2119C + (13 * 0xDC0) + (90 * 0x20), 0x211BC + (13 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 2",    0x2119C + (13 * 0xDC0) + (91 * 0x20), 0x211BC + (13 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 3",    0x2119C + (13 * 0xDC0) + (92 * 0x20), 0x211BC + (13 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron PP Dark Force 4",    0x2119C + (13 * 0xDC0) + (93 * 0x20), 0x211BC + (13 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 1",    0x2119C + (13 * 0xDC0) + (94 * 0x20), 0x211BC + (13 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 2",    0x2119C + (13 * 0xDC0) + (95 * 0x20), 0x211BC + (13 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 3",    0x2119C + (13 * 0xDC0) + (96 * 0x20), 0x211BC + (13 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron KK Dark Force 4",    0x2119C + (13 * 0xDC0) + (97 * 0x20), 0x211BC + (13 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 1",    0x2119C + (13 * 0xDC0) + (98 * 0x20), 0x211BC + (13 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 2",    0x2119C + (13 * 0xDC0) + (99 * 0x20), 0x211BC + (13 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 3",    0x2119C + (13 * 0xDC0) + (100 * 0x20), 0x211BC + (13 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AP Dark Force 4",    0x2119C + (13 * 0xDC0) + (101 * 0x20), 0x211BC + (13 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 1",    0x2119C + (13 * 0xDC0) + (102 * 0x20), 0x211BC + (13 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 2",    0x2119C + (13 * 0xDC0) + (103 * 0x20), 0x211BC + (13 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 3",    0x2119C + (13 * 0xDC0) + (104 * 0x20), 0x211BC + (13 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron AK Dark Force 4",    0x2119C + (13 * 0xDC0) + (105 * 0x20), 0x211BC + (13 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 1",              0x2119C + (13 * 0xDC0) + (106 * 0x20), 0x211BC + (13 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 2",              0x2119C + (13 * 0xDC0) + (107 * 0x20), 0x211BC + (13 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 3",              0x2119C + (13 * 0xDC0) + (108 * 0x20), 0x211BC + (13 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Pyron },
    { L"Pyron ??? 4",              0x2119C + (13 * 0xDC0) + (109 * 0x20), 0x211BC + (13 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Pyron },
};

const sGame_PaletteDataset VSAV2_A_DarkGallon_PALETTES_SPECIAL[] =
{
    { L"Dark Gallon LP Poisoned",        0x2119C + (14 * 0xDC0) + (0 * 0x20), 0x211BC + (14 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Poisoned",        0x2119C + (14 * 0xDC0) + (1 * 0x20), 0x211BC + (14 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Poisoned",        0x2119C + (14 * 0xDC0) + (2 * 0x20), 0x211BC + (14 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Poisoned",        0x2119C + (14 * 0xDC0) + (3 * 0x20), 0x211BC + (14 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Poisoned",        0x2119C + (14 * 0xDC0) + (4 * 0x20), 0x211BC + (14 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Poisoned",        0x2119C + (14 * 0xDC0) + (5 * 0x20), 0x211BC + (14 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Poisoned",        0x2119C + (14 * 0xDC0) + (6 * 0x20), 0x211BC + (14 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Poisoned",        0x2119C + (14 * 0xDC0) + (7 * 0x20), 0x211BC + (14 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Poisoned",        0x2119C + (14 * 0xDC0) + (8 * 0x20), 0x211BC + (14 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Poisoned",        0x2119C + (14 * 0xDC0) + (9 * 0x20), 0x211BC + (14 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Zapped",          0x2119C + (14 * 0xDC0) + (10 * 0x20), 0x211BC + (14 * 0xDC0) + (10 * 0x20) },
    { L"Dark Gallon MP Zapped",          0x2119C + (14 * 0xDC0) + (11 * 0x20), 0x211BC + (14 * 0xDC0) + (11 * 0x20) },
    { L"Dark Gallon HP Zapped",          0x2119C + (14 * 0xDC0) + (12 * 0x20), 0x211BC + (14 * 0xDC0) + (12 * 0x20) },
    { L"Dark Gallon LK Zapped",          0x2119C + (14 * 0xDC0) + (13 * 0x20), 0x211BC + (14 * 0xDC0) + (13 * 0x20) },
    { L"Dark Gallon MK Zapped",          0x2119C + (14 * 0xDC0) + (14 * 0x20), 0x211BC + (14 * 0xDC0) + (14 * 0x20) },
    { L"Dark Gallon HK Zapped",          0x2119C + (14 * 0xDC0) + (15 * 0x20), 0x211BC + (14 * 0xDC0) + (15 * 0x20) },
    { L"Dark Gallon PP Zapped",          0x2119C + (14 * 0xDC0) + (16 * 0x20), 0x211BC + (14 * 0xDC0) + (16 * 0x20) },
    { L"Dark Gallon KK Zapped",          0x2119C + (14 * 0xDC0) + (17 * 0x20), 0x211BC + (14 * 0xDC0) + (17 * 0x20) },
    { L"Dark Gallon AP Zapped",          0x2119C + (14 * 0xDC0) + (18 * 0x20), 0x211BC + (14 * 0xDC0) + (18 * 0x20) },
    { L"Dark Gallon AK Zapped",          0x2119C + (14 * 0xDC0) + (19 * 0x20), 0x211BC + (14 * 0xDC0) + (19 * 0x20) },
    { L"Dark Gallon LP Burned",          0x2119C + (14 * 0xDC0) + (20 * 0x20), 0x211BC + (14 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Burned",          0x2119C + (14 * 0xDC0) + (21 * 0x20), 0x211BC + (14 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Burned",          0x2119C + (14 * 0xDC0) + (22 * 0x20), 0x211BC + (14 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Burned",          0x2119C + (14 * 0xDC0) + (23 * 0x20), 0x211BC + (14 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Burned",          0x2119C + (14 * 0xDC0) + (24 * 0x20), 0x211BC + (14 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Burned",          0x2119C + (14 * 0xDC0) + (25 * 0x20), 0x211BC + (14 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Burned",          0x2119C + (14 * 0xDC0) + (26 * 0x20), 0x211BC + (14 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Burned",          0x2119C + (14 * 0xDC0) + (27 * 0x20), 0x211BC + (14 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Burned",          0x2119C + (14 * 0xDC0) + (28 * 0x20), 0x211BC + (14 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Burned",          0x2119C + (14 * 0xDC0) + (29 * 0x20), 0x211BC + (14 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (30 * 0x20), 0x211BC + (14 * 0xDC0) + (30 * 0x20) },
    { L"Dark Gallon MP Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (31 * 0x20), 0x211BC + (14 * 0xDC0) + (31 * 0x20) },
    { L"Dark Gallon HP Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (32 * 0x20), 0x211BC + (14 * 0xDC0) + (32 * 0x20) },
    { L"Dark Gallon LK Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (33 * 0x20), 0x211BC + (14 * 0xDC0) + (33 * 0x20) },
    { L"Dark Gallon MK Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (34 * 0x20), 0x211BC + (14 * 0xDC0) + (34 * 0x20) },
    { L"Dark Gallon HK Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (35 * 0x20), 0x211BC + (14 * 0xDC0) + (35 * 0x20) },
    { L"Dark Gallon PP Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (36 * 0x20), 0x211BC + (14 * 0xDC0) + (36 * 0x20) },
    { L"Dark Gallon KK Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (37 * 0x20), 0x211BC + (14 * 0xDC0) + (37 * 0x20) },
    { L"Dark Gallon AP Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (38 * 0x20), 0x211BC + (14 * 0xDC0) + (38 * 0x20) },
    { L"Dark Gallon AK Pharaoh's Curse", 0x2119C + (14 * 0xDC0) + (39 * 0x20), 0x211BC + (14 * 0xDC0) + (39 * 0x20) },
    { L"Dark Gallon ES 1",               0x2119C + (14 * 0xDC0) + (40 * 0x20), 0x211BC + (14 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 2",               0x2119C + (14 * 0xDC0) + (41 * 0x20), 0x211BC + (14 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 3",               0x2119C + (14 * 0xDC0) + (42 * 0x20), 0x211BC + (14 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ES 4",               0x2119C + (14 * 0xDC0) + (43 * 0x20), 0x211BC + (14 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 1",               0x2119C + (14 * 0xDC0) + (44 * 0x20), 0x211BC + (14 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 2",               0x2119C + (14 * 0xDC0) + (45 * 0x20), 0x211BC + (14 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 3",               0x2119C + (14 * 0xDC0) + (46 * 0x20), 0x211BC + (14 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 4",               0x2119C + (14 * 0xDC0) + (47 * 0x20), 0x211BC + (14 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 5",               0x2119C + (14 * 0xDC0) + (48 * 0x20), 0x211BC + (14 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 6",               0x2119C + (14 * 0xDC0) + (49 * 0x20), 0x211BC + (14 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 7",               0x2119C + (14 * 0xDC0) + (50 * 0x20), 0x211BC + (14 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon EX 8",               0x2119C + (14 * 0xDC0) + (51 * 0x20), 0x211BC + (14 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Prova di Servo",     0x2119C + (14 * 0xDC0) + (52 * 0x20), 0x211BC + (14 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Finale Rosso",       0x2119C + (14 * 0xDC0) + (53 * 0x20), 0x211BC + (14 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon Stone",              0x2119C + (14 * 0xDC0) + (54 * 0x20), 0x211BC + (14 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Midnight Bliss",  0x2119C + (14 * 0xDC0) + (55 * 0x20), 0x211BC + (14 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon MP Midnight Bliss",  0x2119C + (14 * 0xDC0) + (56 * 0x20), 0x211BC + (14 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon HP Midnight Bliss",  0x2119C + (14 * 0xDC0) + (57 * 0x20), 0x211BC + (14 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon LK Midnight Bliss",  0x2119C + (14 * 0xDC0) + (58 * 0x20), 0x211BC + (14 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon MK Midnight Bliss",  0x2119C + (14 * 0xDC0) + (59 * 0x20), 0x211BC + (14 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon HK Midnight Bliss",  0x2119C + (14 * 0xDC0) + (60 * 0x20), 0x211BC + (14 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon PP Midnight Bliss",  0x2119C + (14 * 0xDC0) + (61 * 0x20), 0x211BC + (14 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon KK Midnight Bliss",  0x2119C + (14 * 0xDC0) + (62 * 0x20), 0x211BC + (14 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AP Midnight Bliss",  0x2119C + (14 * 0xDC0) + (63 * 0x20), 0x211BC + (14 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon AK Midnight Bliss",  0x2119C + (14 * 0xDC0) + (64 * 0x20), 0x211BC + (14 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Gallon },
    { L"Dark Gallon Q-Bee's QJ Honey",   0x2119C + (14 * 0xDC0) + (65 * 0x20), 0x211BC + (14 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 1",    0x2119C + (14 * 0xDC0) + (66 * 0x20), 0x211BC + (14 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 2",    0x2119C + (14 * 0xDC0) + (67 * 0x20), 0x211BC + (14 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 3",    0x2119C + (14 * 0xDC0) + (68 * 0x20), 0x211BC + (14 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LP Dark Force 4",    0x2119C + (14 * 0xDC0) + (69 * 0x20), 0x211BC + (14 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 1",    0x2119C + (14 * 0xDC0) + (70 * 0x20), 0x211BC + (14 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 2",    0x2119C + (14 * 0xDC0) + (71 * 0x20), 0x211BC + (14 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 3",    0x2119C + (14 * 0xDC0) + (72 * 0x20), 0x211BC + (14 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MP Dark Force 4",    0x2119C + (14 * 0xDC0) + (73 * 0x20), 0x211BC + (14 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 1",    0x2119C + (14 * 0xDC0) + (74 * 0x20), 0x211BC + (14 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 2",    0x2119C + (14 * 0xDC0) + (75 * 0x20), 0x211BC + (14 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 3",    0x2119C + (14 * 0xDC0) + (76 * 0x20), 0x211BC + (14 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HP Dark Force 4",    0x2119C + (14 * 0xDC0) + (77 * 0x20), 0x211BC + (14 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 1",    0x2119C + (14 * 0xDC0) + (78 * 0x20), 0x211BC + (14 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 2",    0x2119C + (14 * 0xDC0) + (79 * 0x20), 0x211BC + (14 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 3",    0x2119C + (14 * 0xDC0) + (80 * 0x20), 0x211BC + (14 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon LK Dark Force 4",    0x2119C + (14 * 0xDC0) + (81 * 0x20), 0x211BC + (14 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 1",    0x2119C + (14 * 0xDC0) + (82 * 0x20), 0x211BC + (14 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 2",    0x2119C + (14 * 0xDC0) + (83 * 0x20), 0x211BC + (14 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 3",    0x2119C + (14 * 0xDC0) + (84 * 0x20), 0x211BC + (14 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon MK Dark Force 4",    0x2119C + (14 * 0xDC0) + (85 * 0x20), 0x211BC + (14 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 1",    0x2119C + (14 * 0xDC0) + (86 * 0x20), 0x211BC + (14 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 2",    0x2119C + (14 * 0xDC0) + (87 * 0x20), 0x211BC + (14 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 3",    0x2119C + (14 * 0xDC0) + (88 * 0x20), 0x211BC + (14 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon HK Dark Force 4",    0x2119C + (14 * 0xDC0) + (89 * 0x20), 0x211BC + (14 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 1",    0x2119C + (14 * 0xDC0) + (90 * 0x20), 0x211BC + (14 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 2",    0x2119C + (14 * 0xDC0) + (91 * 0x20), 0x211BC + (14 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 3",    0x2119C + (14 * 0xDC0) + (92 * 0x20), 0x211BC + (14 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon PP Dark Force 4",    0x2119C + (14 * 0xDC0) + (93 * 0x20), 0x211BC + (14 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 1",    0x2119C + (14 * 0xDC0) + (94 * 0x20), 0x211BC + (14 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 2",    0x2119C + (14 * 0xDC0) + (95 * 0x20), 0x211BC + (14 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 3",    0x2119C + (14 * 0xDC0) + (96 * 0x20), 0x211BC + (14 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon KK Dark Force 4",    0x2119C + (14 * 0xDC0) + (97 * 0x20), 0x211BC + (14 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 1",    0x2119C + (14 * 0xDC0) + (98 * 0x20), 0x211BC + (14 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 2",    0x2119C + (14 * 0xDC0) + (99 * 0x20), 0x211BC + (14 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 3",    0x2119C + (14 * 0xDC0) + (100 * 0x20), 0x211BC + (14 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AP Dark Force 4",    0x2119C + (14 * 0xDC0) + (101 * 0x20), 0x211BC + (14 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 1",    0x2119C + (14 * 0xDC0) + (102 * 0x20), 0x211BC + (14 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 2",    0x2119C + (14 * 0xDC0) + (103 * 0x20), 0x211BC + (14 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 3",    0x2119C + (14 * 0xDC0) + (104 * 0x20), 0x211BC + (14 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon AK Dark Force 4",    0x2119C + (14 * 0xDC0) + (105 * 0x20), 0x211BC + (14 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 1",              0x2119C + (14 * 0xDC0) + (106 * 0x20), 0x211BC + (14 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 2",              0x2119C + (14 * 0xDC0) + (107 * 0x20), 0x211BC + (14 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 3",              0x2119C + (14 * 0xDC0) + (108 * 0x20), 0x211BC + (14 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_DarkGallon },
    { L"Dark Gallon ??? 4",              0x2119C + (14 * 0xDC0) + (109 * 0x20), 0x211BC + (14 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_DarkGallon },
};

const sGame_PaletteDataset VSAV2_A_Donovan_PALETTES_SPECIAL[] =
{
    { L"Donovan LP Poisoned",        0x2119C + (15 * 0xDC0) + (0 * 0x20), 0x211BC + (15 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Poisoned",        0x2119C + (15 * 0xDC0) + (1 * 0x20), 0x211BC + (15 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Poisoned",        0x2119C + (15 * 0xDC0) + (2 * 0x20), 0x211BC + (15 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Poisoned",        0x2119C + (15 * 0xDC0) + (3 * 0x20), 0x211BC + (15 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Poisoned",        0x2119C + (15 * 0xDC0) + (4 * 0x20), 0x211BC + (15 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Poisoned",        0x2119C + (15 * 0xDC0) + (5 * 0x20), 0x211BC + (15 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Poisoned",        0x2119C + (15 * 0xDC0) + (6 * 0x20), 0x211BC + (15 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Poisoned",        0x2119C + (15 * 0xDC0) + (7 * 0x20), 0x211BC + (15 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Poisoned",        0x2119C + (15 * 0xDC0) + (8 * 0x20), 0x211BC + (15 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Poisoned",        0x2119C + (15 * 0xDC0) + (9 * 0x20), 0x211BC + (15 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Zapped",          0x2119C + (15 * 0xDC0) + (10 * 0x20), 0x211BC + (15 * 0xDC0) + (10 * 0x20) },
    { L"Donovan MP Zapped",          0x2119C + (15 * 0xDC0) + (11 * 0x20), 0x211BC + (15 * 0xDC0) + (11 * 0x20) },
    { L"Donovan HP Zapped",          0x2119C + (15 * 0xDC0) + (12 * 0x20), 0x211BC + (15 * 0xDC0) + (12 * 0x20) },
    { L"Donovan LK Zapped",          0x2119C + (15 * 0xDC0) + (13 * 0x20), 0x211BC + (15 * 0xDC0) + (13 * 0x20) },
    { L"Donovan MK Zapped",          0x2119C + (15 * 0xDC0) + (14 * 0x20), 0x211BC + (15 * 0xDC0) + (14 * 0x20) },
    { L"Donovan HK Zapped",          0x2119C + (15 * 0xDC0) + (15 * 0x20), 0x211BC + (15 * 0xDC0) + (15 * 0x20) },
    { L"Donovan PP Zapped",          0x2119C + (15 * 0xDC0) + (16 * 0x20), 0x211BC + (15 * 0xDC0) + (16 * 0x20) },
    { L"Donovan KK Zapped",          0x2119C + (15 * 0xDC0) + (17 * 0x20), 0x211BC + (15 * 0xDC0) + (17 * 0x20) },
    { L"Donovan AP Zapped",          0x2119C + (15 * 0xDC0) + (18 * 0x20), 0x211BC + (15 * 0xDC0) + (18 * 0x20) },
    { L"Donovan AK Zapped",          0x2119C + (15 * 0xDC0) + (19 * 0x20), 0x211BC + (15 * 0xDC0) + (19 * 0x20) },
    { L"Donovan LP Burned",          0x2119C + (15 * 0xDC0) + (20 * 0x20), 0x211BC + (15 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Burned",          0x2119C + (15 * 0xDC0) + (21 * 0x20), 0x211BC + (15 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Burned",          0x2119C + (15 * 0xDC0) + (22 * 0x20), 0x211BC + (15 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Burned",          0x2119C + (15 * 0xDC0) + (23 * 0x20), 0x211BC + (15 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Burned",          0x2119C + (15 * 0xDC0) + (24 * 0x20), 0x211BC + (15 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Burned",          0x2119C + (15 * 0xDC0) + (25 * 0x20), 0x211BC + (15 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Burned",          0x2119C + (15 * 0xDC0) + (26 * 0x20), 0x211BC + (15 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Burned",          0x2119C + (15 * 0xDC0) + (27 * 0x20), 0x211BC + (15 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Burned",          0x2119C + (15 * 0xDC0) + (28 * 0x20), 0x211BC + (15 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Burned",          0x2119C + (15 * 0xDC0) + (29 * 0x20), 0x211BC + (15 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (30 * 0x20), 0x211BC + (15 * 0xDC0) + (30 * 0x20) },
    { L"Donovan MP Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (31 * 0x20), 0x211BC + (15 * 0xDC0) + (31 * 0x20) },
    { L"Donovan HP Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (32 * 0x20), 0x211BC + (15 * 0xDC0) + (32 * 0x20) },
    { L"Donovan LK Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (33 * 0x20), 0x211BC + (15 * 0xDC0) + (33 * 0x20) },
    { L"Donovan MK Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (34 * 0x20), 0x211BC + (15 * 0xDC0) + (34 * 0x20) },
    { L"Donovan HK Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (35 * 0x20), 0x211BC + (15 * 0xDC0) + (35 * 0x20) },
    { L"Donovan PP Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (36 * 0x20), 0x211BC + (15 * 0xDC0) + (36 * 0x20) },
    { L"Donovan KK Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (37 * 0x20), 0x211BC + (15 * 0xDC0) + (37 * 0x20) },
    { L"Donovan AP Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (38 * 0x20), 0x211BC + (15 * 0xDC0) + (38 * 0x20) },
    { L"Donovan AK Pharaoh's Curse", 0x2119C + (15 * 0xDC0) + (39 * 0x20), 0x211BC + (15 * 0xDC0) + (39 * 0x20) },
    { L"Donovan ES 1",               0x2119C + (15 * 0xDC0) + (40 * 0x20), 0x211BC + (15 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ES 2",               0x2119C + (15 * 0xDC0) + (41 * 0x20), 0x211BC + (15 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ES 3",               0x2119C + (15 * 0xDC0) + (42 * 0x20), 0x211BC + (15 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ES 4",               0x2119C + (15 * 0xDC0) + (43 * 0x20), 0x211BC + (15 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 1",               0x2119C + (15 * 0xDC0) + (44 * 0x20), 0x211BC + (15 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 2",               0x2119C + (15 * 0xDC0) + (45 * 0x20), 0x211BC + (15 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 3",               0x2119C + (15 * 0xDC0) + (46 * 0x20), 0x211BC + (15 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 4",               0x2119C + (15 * 0xDC0) + (47 * 0x20), 0x211BC + (15 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 5",               0x2119C + (15 * 0xDC0) + (48 * 0x20), 0x211BC + (15 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 6",               0x2119C + (15 * 0xDC0) + (49 * 0x20), 0x211BC + (15 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 7",               0x2119C + (15 * 0xDC0) + (50 * 0x20), 0x211BC + (15 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan EX 8",               0x2119C + (15 * 0xDC0) + (51 * 0x20), 0x211BC + (15 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan Prova di Servo",     0x2119C + (15 * 0xDC0) + (52 * 0x20), 0x211BC + (15 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan Finale Rosso",       0x2119C + (15 * 0xDC0) + (53 * 0x20), 0x211BC + (15 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan Stone",              0x2119C + (15 * 0xDC0) + (54 * 0x20), 0x211BC + (15 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Midnight Bliss",  0x2119C + (15 * 0xDC0) + (55 * 0x20), 0x211BC + (15 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan MP Midnight Bliss",  0x2119C + (15 * 0xDC0) + (56 * 0x20), 0x211BC + (15 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan HP Midnight Bliss",  0x2119C + (15 * 0xDC0) + (57 * 0x20), 0x211BC + (15 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan LK Midnight Bliss",  0x2119C + (15 * 0xDC0) + (58 * 0x20), 0x211BC + (15 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan MK Midnight Bliss",  0x2119C + (15 * 0xDC0) + (59 * 0x20), 0x211BC + (15 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan HK Midnight Bliss",  0x2119C + (15 * 0xDC0) + (60 * 0x20), 0x211BC + (15 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan PP Midnight Bliss",  0x2119C + (15 * 0xDC0) + (61 * 0x20), 0x211BC + (15 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan KK Midnight Bliss",  0x2119C + (15 * 0xDC0) + (62 * 0x20), 0x211BC + (15 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan AP Midnight Bliss",  0x2119C + (15 * 0xDC0) + (63 * 0x20), 0x211BC + (15 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan AK Midnight Bliss",  0x2119C + (15 * 0xDC0) + (64 * 0x20), 0x211BC + (15 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_Donovan },
    { L"Donovan Q-Bee's QJ Honey",   0x2119C + (15 * 0xDC0) + (65 * 0x20), 0x211BC + (15 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 1",    0x2119C + (15 * 0xDC0) + (66 * 0x20), 0x211BC + (15 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 2",    0x2119C + (15 * 0xDC0) + (67 * 0x20), 0x211BC + (15 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 3",    0x2119C + (15 * 0xDC0) + (68 * 0x20), 0x211BC + (15 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LP Dark Force 4",    0x2119C + (15 * 0xDC0) + (69 * 0x20), 0x211BC + (15 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 1",    0x2119C + (15 * 0xDC0) + (70 * 0x20), 0x211BC + (15 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 2",    0x2119C + (15 * 0xDC0) + (71 * 0x20), 0x211BC + (15 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 3",    0x2119C + (15 * 0xDC0) + (72 * 0x20), 0x211BC + (15 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MP Dark Force 4",    0x2119C + (15 * 0xDC0) + (73 * 0x20), 0x211BC + (15 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 1",    0x2119C + (15 * 0xDC0) + (74 * 0x20), 0x211BC + (15 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 2",    0x2119C + (15 * 0xDC0) + (75 * 0x20), 0x211BC + (15 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 3",    0x2119C + (15 * 0xDC0) + (76 * 0x20), 0x211BC + (15 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HP Dark Force 4",    0x2119C + (15 * 0xDC0) + (77 * 0x20), 0x211BC + (15 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 1",    0x2119C + (15 * 0xDC0) + (78 * 0x20), 0x211BC + (15 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 2",    0x2119C + (15 * 0xDC0) + (79 * 0x20), 0x211BC + (15 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 3",    0x2119C + (15 * 0xDC0) + (80 * 0x20), 0x211BC + (15 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan LK Dark Force 4",    0x2119C + (15 * 0xDC0) + (81 * 0x20), 0x211BC + (15 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 1",    0x2119C + (15 * 0xDC0) + (82 * 0x20), 0x211BC + (15 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 2",    0x2119C + (15 * 0xDC0) + (83 * 0x20), 0x211BC + (15 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 3",    0x2119C + (15 * 0xDC0) + (84 * 0x20), 0x211BC + (15 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan MK Dark Force 4",    0x2119C + (15 * 0xDC0) + (85 * 0x20), 0x211BC + (15 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 1",    0x2119C + (15 * 0xDC0) + (86 * 0x20), 0x211BC + (15 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 2",    0x2119C + (15 * 0xDC0) + (87 * 0x20), 0x211BC + (15 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 3",    0x2119C + (15 * 0xDC0) + (88 * 0x20), 0x211BC + (15 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan HK Dark Force 4",    0x2119C + (15 * 0xDC0) + (89 * 0x20), 0x211BC + (15 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 1",    0x2119C + (15 * 0xDC0) + (90 * 0x20), 0x211BC + (15 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 2",    0x2119C + (15 * 0xDC0) + (91 * 0x20), 0x211BC + (15 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 3",    0x2119C + (15 * 0xDC0) + (92 * 0x20), 0x211BC + (15 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan PP Dark Force 4",    0x2119C + (15 * 0xDC0) + (93 * 0x20), 0x211BC + (15 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 1",    0x2119C + (15 * 0xDC0) + (94 * 0x20), 0x211BC + (15 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 2",    0x2119C + (15 * 0xDC0) + (95 * 0x20), 0x211BC + (15 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 3",    0x2119C + (15 * 0xDC0) + (96 * 0x20), 0x211BC + (15 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan KK Dark Force 4",    0x2119C + (15 * 0xDC0) + (97 * 0x20), 0x211BC + (15 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 1",    0x2119C + (15 * 0xDC0) + (98 * 0x20), 0x211BC + (15 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 2",    0x2119C + (15 * 0xDC0) + (99 * 0x20), 0x211BC + (15 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 3",    0x2119C + (15 * 0xDC0) + (100 * 0x20), 0x211BC + (15 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AP Dark Force 4",    0x2119C + (15 * 0xDC0) + (101 * 0x20), 0x211BC + (15 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 1",    0x2119C + (15 * 0xDC0) + (102 * 0x20), 0x211BC + (15 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 2",    0x2119C + (15 * 0xDC0) + (103 * 0x20), 0x211BC + (15 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 3",    0x2119C + (15 * 0xDC0) + (104 * 0x20), 0x211BC + (15 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan AK Dark Force 4",    0x2119C + (15 * 0xDC0) + (105 * 0x20), 0x211BC + (15 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 1",              0x2119C + (15 * 0xDC0) + (106 * 0x20), 0x211BC + (15 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 2",              0x2119C + (15 * 0xDC0) + (107 * 0x20), 0x211BC + (15 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 3",              0x2119C + (15 * 0xDC0) + (108 * 0x20), 0x211BC + (15 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
    { L"Donovan ??? 4",              0x2119C + (15 * 0xDC0) + (109 * 0x20), 0x211BC + (15 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Donovan, 0x2 },
};

const sGame_PaletteDataset VSAV2_A_OboroBishamon_PALETTES_SPECIAL[] =
{
    { L"Oboro Bishamon LP Poisoned",        0x2119C + (17 * 0xDC0) + (0 * 0x20), 0x211BC + (17 * 0xDC0) + (0 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Poisoned",        0x2119C + (17 * 0xDC0) + (1 * 0x20), 0x211BC + (17 * 0xDC0) + (1 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Poisoned",        0x2119C + (17 * 0xDC0) + (2 * 0x20), 0x211BC + (17 * 0xDC0) + (2 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Poisoned",        0x2119C + (17 * 0xDC0) + (3 * 0x20), 0x211BC + (17 * 0xDC0) + (3 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Poisoned",        0x2119C + (17 * 0xDC0) + (4 * 0x20), 0x211BC + (17 * 0xDC0) + (4 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Poisoned",        0x2119C + (17 * 0xDC0) + (5 * 0x20), 0x211BC + (17 * 0xDC0) + (5 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Poisoned",        0x2119C + (17 * 0xDC0) + (6 * 0x20), 0x211BC + (17 * 0xDC0) + (6 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Poisoned",        0x2119C + (17 * 0xDC0) + (7 * 0x20), 0x211BC + (17 * 0xDC0) + (7 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Poisoned",        0x2119C + (17 * 0xDC0) + (8 * 0x20), 0x211BC + (17 * 0xDC0) + (8 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Poisoned",        0x2119C + (17 * 0xDC0) + (9 * 0x20), 0x211BC + (17 * 0xDC0) + (9 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Zapped",          0x2119C + (17 * 0xDC0) + (10 * 0x20), 0x211BC + (17 * 0xDC0) + (10 * 0x20) },
    { L"Oboro Bishamon MP Zapped",          0x2119C + (17 * 0xDC0) + (11 * 0x20), 0x211BC + (17 * 0xDC0) + (11 * 0x20) },
    { L"Oboro Bishamon HP Zapped",          0x2119C + (17 * 0xDC0) + (12 * 0x20), 0x211BC + (17 * 0xDC0) + (12 * 0x20) },
    { L"Oboro Bishamon LK Zapped",          0x2119C + (17 * 0xDC0) + (13 * 0x20), 0x211BC + (17 * 0xDC0) + (13 * 0x20) },
    { L"Oboro Bishamon MK Zapped",          0x2119C + (17 * 0xDC0) + (14 * 0x20), 0x211BC + (17 * 0xDC0) + (14 * 0x20) },
    { L"Oboro Bishamon HK Zapped",          0x2119C + (17 * 0xDC0) + (15 * 0x20), 0x211BC + (17 * 0xDC0) + (15 * 0x20) },
    { L"Oboro Bishamon PP Zapped",          0x2119C + (17 * 0xDC0) + (16 * 0x20), 0x211BC + (17 * 0xDC0) + (16 * 0x20) },
    { L"Oboro Bishamon KK Zapped",          0x2119C + (17 * 0xDC0) + (17 * 0x20), 0x211BC + (17 * 0xDC0) + (17 * 0x20) },
    { L"Oboro Bishamon AP Zapped",          0x2119C + (17 * 0xDC0) + (18 * 0x20), 0x211BC + (17 * 0xDC0) + (18 * 0x20) },
    { L"Oboro Bishamon AK Zapped",          0x2119C + (17 * 0xDC0) + (19 * 0x20), 0x211BC + (17 * 0xDC0) + (19 * 0x20) },
    { L"Oboro Bishamon LP Burned",          0x2119C + (17 * 0xDC0) + (20 * 0x20), 0x211BC + (17 * 0xDC0) + (20 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Burned",          0x2119C + (17 * 0xDC0) + (21 * 0x20), 0x211BC + (17 * 0xDC0) + (21 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Burned",          0x2119C + (17 * 0xDC0) + (22 * 0x20), 0x211BC + (17 * 0xDC0) + (22 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Burned",          0x2119C + (17 * 0xDC0) + (23 * 0x20), 0x211BC + (17 * 0xDC0) + (23 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Burned",          0x2119C + (17 * 0xDC0) + (24 * 0x20), 0x211BC + (17 * 0xDC0) + (24 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Burned",          0x2119C + (17 * 0xDC0) + (25 * 0x20), 0x211BC + (17 * 0xDC0) + (25 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Burned",          0x2119C + (17 * 0xDC0) + (26 * 0x20), 0x211BC + (17 * 0xDC0) + (26 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Burned",          0x2119C + (17 * 0xDC0) + (27 * 0x20), 0x211BC + (17 * 0xDC0) + (27 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Burned",          0x2119C + (17 * 0xDC0) + (28 * 0x20), 0x211BC + (17 * 0xDC0) + (28 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Burned",          0x2119C + (17 * 0xDC0) + (29 * 0x20), 0x211BC + (17 * 0xDC0) + (29 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (30 * 0x20), 0x211BC + (17 * 0xDC0) + (30 * 0x20) },
    { L"Oboro Bishamon MP Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (31 * 0x20), 0x211BC + (17 * 0xDC0) + (31 * 0x20) },
    { L"Oboro Bishamon HP Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (32 * 0x20), 0x211BC + (17 * 0xDC0) + (32 * 0x20) },
    { L"Oboro Bishamon LK Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (33 * 0x20), 0x211BC + (17 * 0xDC0) + (33 * 0x20) },
    { L"Oboro Bishamon MK Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (34 * 0x20), 0x211BC + (17 * 0xDC0) + (34 * 0x20) },
    { L"Oboro Bishamon HK Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (35 * 0x20), 0x211BC + (17 * 0xDC0) + (35 * 0x20) },
    { L"Oboro Bishamon PP Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (36 * 0x20), 0x211BC + (17 * 0xDC0) + (36 * 0x20) },
    { L"Oboro Bishamon KK Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (37 * 0x20), 0x211BC + (17 * 0xDC0) + (37 * 0x20) },
    { L"Oboro Bishamon AP Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (38 * 0x20), 0x211BC + (17 * 0xDC0) + (38 * 0x20) },
    { L"Oboro Bishamon AK Pharaoh's Curse", 0x2119C + (17 * 0xDC0) + (39 * 0x20), 0x211BC + (17 * 0xDC0) + (39 * 0x20) },
    { L"Oboro Bishamon ES 1",               0x2119C + (17 * 0xDC0) + (40 * 0x20), 0x211BC + (17 * 0xDC0) + (40 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 2",               0x2119C + (17 * 0xDC0) + (41 * 0x20), 0x211BC + (17 * 0xDC0) + (41 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 3",               0x2119C + (17 * 0xDC0) + (42 * 0x20), 0x211BC + (17 * 0xDC0) + (42 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ES 4",               0x2119C + (17 * 0xDC0) + (43 * 0x20), 0x211BC + (17 * 0xDC0) + (43 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 1",               0x2119C + (17 * 0xDC0) + (44 * 0x20), 0x211BC + (17 * 0xDC0) + (44 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 2",               0x2119C + (17 * 0xDC0) + (45 * 0x20), 0x211BC + (17 * 0xDC0) + (45 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 3",               0x2119C + (17 * 0xDC0) + (46 * 0x20), 0x211BC + (17 * 0xDC0) + (46 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 4",               0x2119C + (17 * 0xDC0) + (47 * 0x20), 0x211BC + (17 * 0xDC0) + (47 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 5",               0x2119C + (17 * 0xDC0) + (48 * 0x20), 0x211BC + (17 * 0xDC0) + (48 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 6",               0x2119C + (17 * 0xDC0) + (49 * 0x20), 0x211BC + (17 * 0xDC0) + (49 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 7",               0x2119C + (17 * 0xDC0) + (50 * 0x20), 0x211BC + (17 * 0xDC0) + (50 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon EX 8",               0x2119C + (17 * 0xDC0) + (51 * 0x20), 0x211BC + (17 * 0xDC0) + (51 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Prova di Servo",     0x2119C + (17 * 0xDC0) + (52 * 0x20), 0x211BC + (17 * 0xDC0) + (52 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Finale Rosso",       0x2119C + (17 * 0xDC0) + (53 * 0x20), 0x211BC + (17 * 0xDC0) + (53 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon Stone",              0x2119C + (17 * 0xDC0) + (54 * 0x20), 0x211BC + (17 * 0xDC0) + (54 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Midnight Bliss",  0x2119C + (17 * 0xDC0) + (55 * 0x20), 0x211BC + (17 * 0xDC0) + (55 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MP Midnight Bliss",  0x2119C + (17 * 0xDC0) + (56 * 0x20), 0x211BC + (17 * 0xDC0) + (56 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HP Midnight Bliss",  0x2119C + (17 * 0xDC0) + (57 * 0x20), 0x211BC + (17 * 0xDC0) + (57 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon LK Midnight Bliss",  0x2119C + (17 * 0xDC0) + (58 * 0x20), 0x211BC + (17 * 0xDC0) + (58 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon MK Midnight Bliss",  0x2119C + (17 * 0xDC0) + (59 * 0x20), 0x211BC + (17 * 0xDC0) + (59 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon HK Midnight Bliss",  0x2119C + (17 * 0xDC0) + (60 * 0x20), 0x211BC + (17 * 0xDC0) + (60 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon PP Midnight Bliss",  0x2119C + (17 * 0xDC0) + (61 * 0x20), 0x211BC + (17 * 0xDC0) + (61 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon KK Midnight Bliss",  0x2119C + (17 * 0xDC0) + (62 * 0x20), 0x211BC + (17 * 0xDC0) + (62 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AP Midnight Bliss",  0x2119C + (17 * 0xDC0) + (63 * 0x20), 0x211BC + (17 * 0xDC0) + (63 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon AK Midnight Bliss",  0x2119C + (17 * 0xDC0) + (64 * 0x20), 0x211BC + (17 * 0xDC0) + (64 * 0x20), indexCPS2_VSAV1_MidnightBliss, indexCPS2_Vamp_OboroBishamon },
    { L"Oboro Bishamon Q-Bee's QJ Honey",   0x2119C + (17 * 0xDC0) + (65 * 0x20), 0x211BC + (17 * 0xDC0) + (65 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 1",    0x2119C + (17 * 0xDC0) + (66 * 0x20), 0x211BC + (17 * 0xDC0) + (66 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 2",    0x2119C + (17 * 0xDC0) + (67 * 0x20), 0x211BC + (17 * 0xDC0) + (67 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 3",    0x2119C + (17 * 0xDC0) + (68 * 0x20), 0x211BC + (17 * 0xDC0) + (68 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LP Dark Force 4",    0x2119C + (17 * 0xDC0) + (69 * 0x20), 0x211BC + (17 * 0xDC0) + (69 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 1",    0x2119C + (17 * 0xDC0) + (70 * 0x20), 0x211BC + (17 * 0xDC0) + (70 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 2",    0x2119C + (17 * 0xDC0) + (71 * 0x20), 0x211BC + (17 * 0xDC0) + (71 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 3",    0x2119C + (17 * 0xDC0) + (72 * 0x20), 0x211BC + (17 * 0xDC0) + (72 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MP Dark Force 4",    0x2119C + (17 * 0xDC0) + (73 * 0x20), 0x211BC + (17 * 0xDC0) + (73 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 1",    0x2119C + (17 * 0xDC0) + (74 * 0x20), 0x211BC + (17 * 0xDC0) + (74 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 2",    0x2119C + (17 * 0xDC0) + (75 * 0x20), 0x211BC + (17 * 0xDC0) + (75 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 3",    0x2119C + (17 * 0xDC0) + (76 * 0x20), 0x211BC + (17 * 0xDC0) + (76 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HP Dark Force 4",    0x2119C + (17 * 0xDC0) + (77 * 0x20), 0x211BC + (17 * 0xDC0) + (77 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 1",    0x2119C + (17 * 0xDC0) + (78 * 0x20), 0x211BC + (17 * 0xDC0) + (78 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 2",    0x2119C + (17 * 0xDC0) + (79 * 0x20), 0x211BC + (17 * 0xDC0) + (79 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 3",    0x2119C + (17 * 0xDC0) + (80 * 0x20), 0x211BC + (17 * 0xDC0) + (80 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon LK Dark Force 4",    0x2119C + (17 * 0xDC0) + (81 * 0x20), 0x211BC + (17 * 0xDC0) + (81 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 1",    0x2119C + (17 * 0xDC0) + (82 * 0x20), 0x211BC + (17 * 0xDC0) + (82 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 2",    0x2119C + (17 * 0xDC0) + (83 * 0x20), 0x211BC + (17 * 0xDC0) + (83 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 3",    0x2119C + (17 * 0xDC0) + (84 * 0x20), 0x211BC + (17 * 0xDC0) + (84 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon MK Dark Force 4",    0x2119C + (17 * 0xDC0) + (85 * 0x20), 0x211BC + (17 * 0xDC0) + (85 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 1",    0x2119C + (17 * 0xDC0) + (86 * 0x20), 0x211BC + (17 * 0xDC0) + (86 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 2",    0x2119C + (17 * 0xDC0) + (87 * 0x20), 0x211BC + (17 * 0xDC0) + (87 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 3",    0x2119C + (17 * 0xDC0) + (88 * 0x20), 0x211BC + (17 * 0xDC0) + (88 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon HK Dark Force 4",    0x2119C + (17 * 0xDC0) + (89 * 0x20), 0x211BC + (17 * 0xDC0) + (89 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 1",    0x2119C + (17 * 0xDC0) + (90 * 0x20), 0x211BC + (17 * 0xDC0) + (90 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 2",    0x2119C + (17 * 0xDC0) + (91 * 0x20), 0x211BC + (17 * 0xDC0) + (91 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 3",    0x2119C + (17 * 0xDC0) + (92 * 0x20), 0x211BC + (17 * 0xDC0) + (92 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon PP Dark Force 4",    0x2119C + (17 * 0xDC0) + (93 * 0x20), 0x211BC + (17 * 0xDC0) + (93 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 1",    0x2119C + (17 * 0xDC0) + (94 * 0x20), 0x211BC + (17 * 0xDC0) + (94 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 2",    0x2119C + (17 * 0xDC0) + (95 * 0x20), 0x211BC + (17 * 0xDC0) + (95 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 3",    0x2119C + (17 * 0xDC0) + (96 * 0x20), 0x211BC + (17 * 0xDC0) + (96 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon KK Dark Force 4",    0x2119C + (17 * 0xDC0) + (97 * 0x20), 0x211BC + (17 * 0xDC0) + (97 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 1",    0x2119C + (17 * 0xDC0) + (98 * 0x20), 0x211BC + (17 * 0xDC0) + (98 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 2",    0x2119C + (17 * 0xDC0) + (99 * 0x20), 0x211BC + (17 * 0xDC0) + (99 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 3",    0x2119C + (17 * 0xDC0) + (100 * 0x20), 0x211BC + (17 * 0xDC0) + (100 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AP Dark Force 4",    0x2119C + (17 * 0xDC0) + (101 * 0x20), 0x211BC + (17 * 0xDC0) + (101 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 1",    0x2119C + (17 * 0xDC0) + (102 * 0x20), 0x211BC + (17 * 0xDC0) + (102 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 2",    0x2119C + (17 * 0xDC0) + (103 * 0x20), 0x211BC + (17 * 0xDC0) + (103 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 3",    0x2119C + (17 * 0xDC0) + (104 * 0x20), 0x211BC + (17 * 0xDC0) + (104 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon AK Dark Force 4",    0x2119C + (17 * 0xDC0) + (105 * 0x20), 0x211BC + (17 * 0xDC0) + (105 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 1",              0x2119C + (17 * 0xDC0) + (106 * 0x20), 0x211BC + (17 * 0xDC0) + (106 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 2",              0x2119C + (17 * 0xDC0) + (107 * 0x20), 0x211BC + (17 * 0xDC0) + (107 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 3",              0x2119C + (17 * 0xDC0) + (108 * 0x20), 0x211BC + (17 * 0xDC0) + (108 * 0x20), indexCPS2_Vamp_Bishamon },
    { L"Oboro Bishamon ??? 4",              0x2119C + (17 * 0xDC0) + (109 * 0x20), 0x211BC + (17 * 0xDC0) + (109 * 0x20), indexCPS2_Vamp_Bishamon },
};

const sGame_PaletteDataset VSAV2_A_BONUS_TITLES_PALETTES[] =
{
    { L"Lilith Intro",          0x410bc, 0x4115c, indexCPS2_VSAV1_Bonus, 0x08 },
    { L"Lilith Intro Portrait", 0x3bf3c, 0x3bffc, indexCPS2_VSAV1_Bonus, 0x07 },
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

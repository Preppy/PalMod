#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VHUNT2_A_MORRIGAN_PALETTES. 
// * Update every array using VHUNT2_A_NUMUNIT below
// That should be it.  Good luck.


// This dataset is functionally identical to the VSAV2 dataset, except that for VHUNT2
// the total palette data is split across the 9 and 10 ROMs.  Currently I've just dropped
// out all the palette data split onto 10: that includes portraits, shared blood, and
// Donovan's second palette.

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_LP[] =
{
    { L"LP Bulleta", 0x16c9c, 0x16cbc, indexCPS2_BBHood, 0x0 },
    { L"LP Critters", 0x16cbc, 0x16cdc, indexCPS2_BBHood, 0x01 },
    { L"LP Weapons", 0x16cdc, 0x16cfc, indexCPS2_BBHood, 0x02 },
    { L"LP Explosions ", 0x16cfc, 0x16d1c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_MP[] =
{
    { L"MP Bulleta", 0x16d1c, 0x16d3c, indexCPS2_BBHood, 0x0 },
    { L"MP Critters", 0x16d3c, 0x16d5c, indexCPS2_BBHood, 0x01 },
    { L"MP Weapons", 0x16d5c, 0x16d7c, indexCPS2_BBHood, 0x02 },
    { L"MP Explosions ", 0x16d7c, 0x16d9c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_HP[] =
{
    { L"HP Bulleta", 0x16d9c, 0x16dbc, indexCPS2_BBHood, 0x0 },
    { L"HP Critters", 0x16dbc, 0x16ddc, indexCPS2_BBHood, 0x01 },
    { L"HP Weapons", 0x16ddc, 0x16dfc, indexCPS2_BBHood, 0x02 },
    { L"HP Explosions ", 0x16dfc, 0x16e1c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_LK[] =
{
    { L"LK Bulleta", 0x16e1c, 0x16e3c, indexCPS2_BBHood, 0x0 },
    { L"LK Critters", 0x16e3c, 0x16e5c, indexCPS2_BBHood, 0x01 },
    { L"LK Weapons", 0x16e5c, 0x16e7c, indexCPS2_BBHood, 0x02 },
    { L"LK Explosions ", 0x16e7c, 0x16e9c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_MK[] =
{
    { L"MK Bulleta", 0x16e9c, 0x16ebc, indexCPS2_BBHood, 0x0 },
    { L"MK Critters", 0x16ebc, 0x16edc, indexCPS2_BBHood, 0x01 },
    { L"MK Weapons", 0x16edc, 0x16efc, indexCPS2_BBHood, 0x02 },
    { L"MK Explosions ", 0x16efc, 0x16f1c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_HK[] =
{
    { L"HK Bulleta", 0x16f1c, 0x16f3c, indexCPS2_BBHood, 0x0 },
    { L"HK Critters", 0x16f3c, 0x16f5c, indexCPS2_BBHood, 0x01 },
    { L"HK Weapons", 0x16f5c, 0x16f7c, indexCPS2_BBHood, 0x02 },
    { L"HK Explosions ", 0x16f7c, 0x16f9c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_PP[] =
{
    { L"PP Bulleta", 0x16f9c, 0x16fbc, indexCPS2_BBHood, 0x0 },
    { L"PP Critters", 0x16fbc, 0x16fdc, indexCPS2_BBHood, 0x01 },
    { L"PP Weapons", 0x16fdc, 0x16ffc, indexCPS2_BBHood, 0x02 },
    { L"PP Explosions ", 0x16ffc, 0x1701c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_KK[] =
{
    { L"KK Bulleta", 0x1701c, 0x1703c, indexCPS2_BBHood, 0x0 },
    { L"KK Critters", 0x1703c, 0x1705c, indexCPS2_BBHood, 0x01 },
    { L"KK Weapons", 0x1705c, 0x1707c, indexCPS2_BBHood, 0x02 },
    { L"KK Explosions ", 0x1707c, 0x1709c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_AP[] =
{
    { L"AP Bulleta", 0x1709c, 0x170bc, indexCPS2_BBHood, 0x0 },
    { L"AP Critters", 0x170bc, 0x170dc, indexCPS2_BBHood, 0x01 },
    { L"AP Weapons", 0x170dc, 0x170fc, indexCPS2_BBHood, 0x02 },
    { L"AP Explosions ", 0x170fc, 0x1711c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_AK[] =
{
    { L"AK Bulleta", 0x1711c, 0x1713c, indexCPS2_BBHood, 0x0 },
    { L"AK Critters", 0x1713c, 0x1715c, indexCPS2_BBHood, 0x01 },
    { L"AK Weapons", 0x1715c, 0x1717c, indexCPS2_BBHood, 0x02 },
    { L"AK Explosions ", 0x1717c, 0x1719c },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_LP[] =
{
    { L"LP Demitri", 0x1719c, 0x171bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Teledash 1", 0x171fc, 0x1721c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Teledash 2", 0x171bc, 0x171dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LP Fireball", 0x171dc, 0x171fc, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_MP[] =
{
    { L"MP Demitri ", 0x1721c, 0x1723c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Teledash 1", 0x1727c, 0x1729c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Teledash 2", 0x1723c, 0x1725c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MP Fireball", 0x1725c, 0x1727c, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_HP[] =
{
    { L"HP Demitri", 0x1729c, 0x172bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Teledash 1", 0x172fc, 0x1731c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Teledash 2", 0x172bc, 0x172dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HP Fireball", 0x172dc, 0x172fc, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_LK[] =
{
    { L"LK Demitri", 0x1731c, 0x1733c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Teledash 1", 0x1737c, 0x1739c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Teledash 2", 0x1733c, 0x1735c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"LK Fireball", 0x1735c, 0x1737c, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_MK[] =
{
    { L"MK Demitri", 0x1739c, 0x173bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Teledash 1", 0x173fc, 0x1741c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Teledash 2", 0x173bc, 0x173dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"MK Fireball", 0x173dc, 0x173fc, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_HK[] =
{
    { L"HK Demitri", 0x1741c, 0x1743c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Teledash 1", 0x1747c, 0x1749c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Teledash 2", 0x1743c, 0x1745c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"HK Fireball", 0x1745c, 0x1747c, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_PP[] =
{
    { L"PP Demitri", 0x1749c, 0x174bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Teledash 1", 0x174fc, 0x1751c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Teledash 2", 0x174bc, 0x174dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"PP Fireball", 0x174dc, 0x174fc, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_KK[] =
{
    { L"KK Demitri", 0x1751c, 0x1753c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Teledash 1", 0x1757c, 0x1759c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Teledash 2", 0x1753c, 0x1755c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"KK Fireball", 0x1755c, 0x1757c, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_AP[] =
{
    { L"AP Demitri", 0x1759c, 0x175bc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Teledash 1", 0x175fc, 0x1761c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Teledash 2", 0x175bc, 0x175dc, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AP Fireball", 0x175dc, 0x175fc, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_AK[] =
{
    { L"AK Demitri", 0x1761c, 0x1763c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Teledash 1", 0x1767c, 0x1769c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Teledash 2", 0x1763c, 0x1765c, indexCPS2_Vamp_Demitri, 0x0 },
    { L"AK Fireball", 0x1765c, 0x1767c, indexCPS2_Vamp_Demitri, 0x01 },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_LP[] =
{
    { L"LP Gallon", 0x1769c, 0x176bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"LP Intro/Outro", 0x176bc, 0x176dc },
    { L"LP 236P/41236KK/j.HP", 0x176dc, 0x176fc },
    { L"LP 236P/28K/Outro Flash", 0x176fc, 0x1771c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_MP[] =
{
    { L"MP Gallon", 0x1771c, 0x1773c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"MP Intro/Outro", 0x1773c, 0x1775c },
    { L"MP 236P/41236KK/j.HP", 0x1775c, 0x1777c },
    { L"MP 236P/28K/Outro Flash", 0x1777c, 0x1779c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_HP[] =
{
    { L"HP Gallon", 0x1779c, 0x177bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"HP Intro/Outro", 0x177bc, 0x177dc },
    { L"HP 236P/41236KK/j.HP", 0x177dc, 0x177fc },
    { L"HP 236P/28K/Outro Flash", 0x177fc, 0x1781c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_LK[] =
{
    { L"LK Gallon", 0x1781c, 0x1783c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"LK Intro/Outro", 0x1783c, 0x1785c },
    { L"LK 236P/41236KK/j.HP", 0x1785c, 0x1787c },
    { L"LK 236P/28K/Outro Flash", 0x1787c, 0x1789c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_MK[] =
{
    { L"MK Gallon", 0x1789c, 0x178bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"MK Intro/Outro", 0x178bc, 0x178dc },
    { L"MK 236P/41236KK/j.HP", 0x178dc, 0x178fc },
    { L"MK 236P/28K/Outro Flash", 0x178fc, 0x1791c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_HK[] =
{
    { L"HK Gallon", 0x1791c, 0x1793c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"HK Intro/Outro", 0x1793c, 0x1795c },
    { L"HK 236P/41236KK/j.HP", 0x1795c, 0x1797c },
    { L"HK 236P/28K/Outro Flash", 0x1797c, 0x1799c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_PP[] =
{
    { L"PP Gallon", 0x1799c, 0x179bc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"PP Intro/Outro", 0x179bc, 0x179dc },
    { L"PP 236P/41236KK/j.HP", 0x179dc, 0x179fc },
    { L"PP 236P/28K/Outro Flash", 0x179fc, 0x17a1c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_KK[] =
{
    { L"KK Gallon", 0x17a1c, 0x17a3c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"KK Intro/Outro", 0x17a3c, 0x17a5c },
    { L"KK 236P/41236KK/j.HP", 0x17a5c, 0x17a7c },
    { L"KK 236P/28K/Outro Flash", 0x17a7c, 0x17a9c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_AP[] =
{
    { L"AP Gallon", 0x17a9c, 0x17abc, indexCPS2_Vamp_Gallon, 0x0 },
    { L"AP Intro/Outro", 0x17abc, 0x17adc },
    { L"AP 236P/41236KK/j.HP", 0x17adc, 0x17afc },
    { L"AP 236P/28K/Outro Flash", 0x17afc, 0x17b1c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_AK[] =
{
    { L"AK Gallon", 0x17b1c, 0x17b3c, indexCPS2_Vamp_Gallon, 0x0 },
    { L"AK Intro/Outro", 0x17b3c, 0x17b5c },
    { L"AK 236P/41236KK/j.HP", 0x17b5c, 0x17b7c },
    { L"AK 236P/28K/Outro Flash", 0x17b7c, 0x17b9c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_LP[] =
{
    { L"LP Victor", 0x17b9c, 0x17bbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"LP Electric Flash", 0x17bfc, 0x17c1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"LP [2]8p/[4]6P/DF Startup", 0x17bbc, 0x17bdc },
    { L"LP Electricity", 0x17bdc, 0x17bfc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_MP[] =
{
    { L"MP Victor", 0x17c1c, 0x17c3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"MP Electric Flash", 0x17c7c, 0x17c9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"MP [2]8p/[4]6P/DF Startup", 0x17c3c, 0x17c5c },
    { L"MP Electricity", 0x17c5c, 0x17c7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_HP[] =
{
    { L"HP Victor", 0x17c9c, 0x17cbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"HP Electric Flash", 0x17cfc, 0x17d1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"HP [2]8p/[4]6P/DF Startup", 0x17cbc, 0x17cdc },
    { L"HP Electricity", 0x17cdc, 0x17cfc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_LK[] =
{
    { L"LK Victor", 0x17d1c, 0x17d3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"LK Electric Flash", 0x17d7c, 0x17d9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"LK [2]8p/[4]6P/DF Startup", 0x17d3c, 0x17d5c },
    { L"LK Electricity", 0x17d5c, 0x17d7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_MK[] =
{
    { L"MK Victor", 0x17d9c, 0x17dbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"MK Electric Flash", 0x17dfc, 0x17e1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"MK [2]8p/[4]6P/DF Startup", 0x17dbc, 0x17ddc },
    { L"MK Electricity", 0x17ddc, 0x17dfc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_HK[] =
{
    { L"HK Victor", 0x17e1c, 0x17e3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"HK Electric Flash", 0x17e7c, 0x17e9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"HK [2]8p/[4]6P/DF Startup", 0x17e3c, 0x17e5c },
    { L"HK Electricity", 0x17e5c, 0x17e7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_PP[] =
{
    { L"PP Victor", 0x17e9c, 0x17ebc, indexCPS2_Vamp_Victor, 0x0 },
    { L"PP Electric Flash", 0x17efc, 0x17f1c, indexCPS2_Vamp_Victor, 0x0 },
    { L"PP [2]8p/[4]6P/DF Startup", 0x17ebc, 0x17edc },
    { L"PP Electricity", 0x17edc, 0x17efc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_KK[] =
{
    { L"KK Victor", 0x17f1c, 0x17f3c, indexCPS2_Vamp_Victor, 0x0 },
    { L"KK Electric Flash", 0x17f7c, 0x17f9c, indexCPS2_Vamp_Victor, 0x0 },
    { L"KK [2]8p/[4]6P/DF Startup", 0x17f3c, 0x17f5c },
    { L"KK Electricity", 0x17f5c, 0x17f7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_AP[] =
{
    { L"AP Victor", 0x17f9c, 0x17fbc, indexCPS2_Vamp_Victor, 0x0 },
    { L"AP Electric Flash", 0x17ffc, 0x1801c, indexCPS2_Vamp_Victor, 0x0 },
    { L"AP [2]8p/[4]6P/DF Startup", 0x17fbc, 0x17fdc },
    { L"AP Electricity", 0x17fdc, 0x17ffc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_AK[] =
{
    { L"AK Victor", 0x1801c, 0x1803c, indexCPS2_Vamp_Victor, 0x0 },
    { L"AK Electric Flash", 0x1807c, 0x1809c, indexCPS2_Vamp_Victor, 0x0 },
    { L"AK [2]8p/[4]6P/DF Startup", 0x1803c, 0x1805c },
    { L"AK Electricity", 0x1805c, 0x1807c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_LP[] =
{
    { L"LP Zabel", 0x1809c, 0x180bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"LP 64PP/63214KK/intro/winpose", 0x180bc, 0x180dc },
    { L"LP Unused 1", 0x180dc, 0x180fc },
    { L"LP Unused 2", 0x180fc, 0x1811c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_MP[] =
{
    { L"MP Zabel", 0x1811c, 0x1813c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"MP 64PP/63214KK/intro/winpose", 0x1813c, 0x1815c },
    { L"MP Unused 1", 0x1815c, 0x1817c },
    { L"MP Unused 2", 0x1817c, 0x1819c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_HP[] =
{
    { L"HP Zabel", 0x1819c, 0x181bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"HP 64PP/63214KK/intro/winpose", 0x181bc, 0x181dc },
    { L"HP Unused 1", 0x181dc, 0x181fc },
    { L"HP Unused 2", 0x181fc, 0x1821c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_LK[] =
{
    { L"LK Zabel", 0x1821c, 0x1823c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"LK 64PP/63214KK/intro/winpose", 0x1823c, 0x1825c },
    { L"LK Unused 1", 0x1825c, 0x1827c },
    { L"LK Unused 2", 0x1827c, 0x1829c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_MK[] =
{
    { L"MK Zabel", 0x1829c, 0x182bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"MK 64PP/63214KK/intro/winpose", 0x182bc, 0x182dc },
    { L"MK Unused 1", 0x182dc, 0x182fc },
    { L"MK Unused 2", 0x182fc, 0x1831c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_HK[] =
{
    { L"HK Zabel", 0x1831c, 0x1833c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"HK 64PP/63214KK/intro/winpose", 0x1833c, 0x1835c },
    { L"HK Unused 1", 0x1835c, 0x1837c },
    { L"HK Unused 2", 0x1837c, 0x1839c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_PP[] =
{
    { L"PP Zabel", 0x1839c, 0x183bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"PP 64PP/63214KK/intro/winpose", 0x183bc, 0x183dc },
    { L"PP Unused 1", 0x183dc, 0x183fc },
    { L"PP Unused 2", 0x183fc, 0x1841c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_KK[] =
{
    { L"KK Zabel", 0x1841c, 0x1843c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"KK 64PP/63214KK/intro/winpose", 0x1843c, 0x1845c },
    { L"KK Unused 1", 0x1845c, 0x1847c },
    { L"KK Unused 2", 0x1847c, 0x1849c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_AP[] =
{
    { L"AP Zabel", 0x1849c, 0x184bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"AP 64PP/63214KK/intro/winpose", 0x184bc, 0x184dc },
    { L"AP Unused 1", 0x184dc, 0x184fc },
    { L"AP Unused 2", 0x184fc, 0x1851c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_AK[] =
{
    { L"AK Zabel", 0x1851c, 0x1853c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"AK 64PP/63214KK/intro/winpose", 0x1853c, 0x1855c },
    { L"AK Unused 1", 0x1855c, 0x1857c },
    { L"AK Unused 2", 0x1857c, 0x1859c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_LP[] =
{
    { L"LP Morrigan", 0x1859c, 0x185bc, indexCPS2_Morrigan, 0x00 },
    { L"LP Idle sparkles/Raging demon", 0x185bc, 0x185dc, indexCPS2_Morrigan, 0x2 },
    { L"LP Bats", 0x185dc, 0x185fc, indexCPS2_Morrigan, 0x09 },
    { L"LP Unknown Extra", 0x185fc, 0x1861c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_MP[] =
{
    { L"MP Morrigan", 0x1861c, 0x1863c, indexCPS2_Morrigan, 0x00 },
    { L"MP Idle sparkles/Raging demon", 0x1863c, 0x1865c, indexCPS2_Morrigan, 0x2 },
    { L"MP Bats", 0x1865c, 0x1867c, indexCPS2_Morrigan, 0x09 },
    { L"MP Unknown Extra", 0x1867c, 0x1869c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_HP[] =
{
    { L"HP Morrigan", 0x1869c, 0x186bc, indexCPS2_Morrigan, 0x00 },
    { L"HP Idle sparkles/Raging demon", 0x186bc, 0x186dc, indexCPS2_Morrigan, 0x2 },
    { L"HP Bats", 0x186dc, 0x186fc, indexCPS2_Morrigan, 0x09 },
    { L"HP Unknown Extra", 0x186fc, 0x1871c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_LK[] =
{
    { L"LK Morrigan", 0x1871c, 0x1873c, indexCPS2_Morrigan, 0x00 },
    { L"LK Idle sparkles/Raging demon", 0x1873c, 0x1875c, indexCPS2_Morrigan, 0x2 },
    { L"LK Bats", 0x1875c, 0x1877c, indexCPS2_Morrigan, 0x09 },
    { L"LK Unknown Extra", 0x1877c, 0x1879c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_MK[] =
{
    { L"MK Morrigan", 0x1879c, 0x187bc, indexCPS2_Morrigan, 0x00 },
    { L"MK Idle sparkles/Raging demon", 0x187bc, 0x187dc, indexCPS2_Morrigan, 0x2 },
    { L"MK Bats", 0x187dc, 0x187fc, indexCPS2_Morrigan, 0x09 },
    { L"MK Unknown Extra", 0x187fc, 0x1881c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_HK[] =
{
    { L"HK Morrigan", 0x1881c, 0x1883c, indexCPS2_Morrigan, 0x00 },
    { L"HK Idle sparkles/Raging demon", 0x1883c, 0x1885c, indexCPS2_Morrigan, 0x2 },
    { L"HK Bats", 0x1885c, 0x1887c, indexCPS2_Morrigan, 0x09 },
    { L"HK Unknown Extra", 0x1887c, 0x1889c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_PP[] =
{
    { L"PP Morrigan", 0x1889c, 0x188bc, indexCPS2_Morrigan, 0x00 },
    { L"PP Idle sparkles/Raging demon", 0x188bc, 0x188dc, indexCPS2_Morrigan, 0x2 },
    { L"PP Bats", 0x188dc, 0x188fc, indexCPS2_Morrigan, 0x09 },
    { L"PP Unknown Extra", 0x188fc, 0x1891c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_KK[] =
{
    { L"KK Morrigan", 0x1891c, 0x1893c, indexCPS2_Morrigan, 0x00 },
    { L"KK Idle sparkles/Raging demon", 0x1893c, 0x1895c, indexCPS2_Morrigan, 0x2 },
    { L"KK Bats", 0x1895c, 0x1897c, indexCPS2_Morrigan, 0x09 },
    { L"KK Unknown Extra", 0x1897c, 0x1899c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_AP[] =
{
    { L"AP Morrigan", 0x1899c, 0x189bc, indexCPS2_Morrigan, 0x00 },
    { L"AP Idle sparkles/Raging demon", 0x189bc, 0x189dc, indexCPS2_Morrigan, 0x2 },
    { L"AP Bats", 0x189dc, 0x189fc, indexCPS2_Morrigan, 0x09 },
    { L"AP Unknown Extra", 0x189fc, 0x18a1c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_AK[] =
{
    { L"AK Morrigan", 0x18a1c, 0x18a3c, indexCPS2_Morrigan, 0x00 },
    { L"AK Idle sparkles/Raging demon", 0x18a3c, 0x18a5c, indexCPS2_Morrigan, 0x2 },
    { L"AK Bats", 0x18a5c, 0x18a7c, indexCPS2_Morrigan, 0x09 },
    { L"AK Unknown Extra", 0x18a7c, 0x18a9c },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_LP[] =
{
    { L"LP Anakaris", 0x18a9c, 0x18abc, indexCPS2_Anakaris, 0x0 },
    { L"LP 2.HP/Mummies", 0x18adc, 0x18afc, indexCPS2_Anakaris, 0x2 },
    { L"LP 426KK/62KK Light", 0x18abc, 0x18adc, indexCPS2_Anakaris, 0x01 },
    { L"LP Pharaoh Magic Orbs", 0x18afc, 0x18b1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_MP[] =
{
    { L"MP Anakaris", 0x18b1c, 0x18b3c, indexCPS2_Anakaris, 0x0 },
    { L"MP 2.HP/Mummies", 0x18b5c, 0x18b7c, indexCPS2_Anakaris, 0x2 },
    { L"MP 426KK/62KK Light", 0x18b3c, 0x18b5c, indexCPS2_Anakaris, 0x01 },
    { L"MP Pharaoh Magic Orbs", 0x18b7c, 0x18b9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_HP[] =
{
    { L"HP Anakaris", 0x18b9c, 0x18bbc, indexCPS2_Anakaris, 0x0 },
    { L"HP 2.HP/Mummies", 0x18bdc, 0x18bfc, indexCPS2_Anakaris, 0x2 },
    { L"HP 426KK/62KK Light", 0x18bbc, 0x18bdc, indexCPS2_Anakaris, 0x01 },
    { L"HP Pharaoh Magic Orbs", 0x18bfc, 0x18c1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_LK[] =
{
    { L"LK Anakaris", 0x18c1c, 0x18c3c, indexCPS2_Anakaris, 0x0 },
    { L"LK 2.HP/Mummies", 0x18c5c, 0x18c7c, indexCPS2_Anakaris, 0x2 },
    { L"LK 426KK/62KK Light", 0x18c3c, 0x18c5c, indexCPS2_Anakaris, 0x01 },
    { L"LK Pharaoh Magic Orbs", 0x18c7c, 0x18c9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_MK[] =
{
    { L"MK Anakaris", 0x18c9c, 0x18cbc, indexCPS2_Anakaris, 0x0 },
    { L"MK 2.HP/Mummies", 0x18cdc, 0x18cfc, indexCPS2_Anakaris, 0x2 },
    { L"MK 426KK/62KK Light", 0x18cbc, 0x18cdc, indexCPS2_Anakaris, 0x01 },
    { L"MK Pharaoh Magic Orbs", 0x18cfc, 0x18d1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_HK[] =
{
    { L"HK Anakaris", 0x18d1c, 0x18d3c, indexCPS2_Anakaris, 0x0 },
    { L"HK 2.HP/Mummies", 0x18d5c, 0x18d7c, indexCPS2_Anakaris, 0x2 },
    { L"HK 426KK/62KK Light", 0x18d3c, 0x18d5c, indexCPS2_Anakaris, 0x01 },
    { L"HK Pharaoh Magic Orbs", 0x18d7c, 0x18d9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_PP[] =
{
    { L"PP Anakaris", 0x18d9c, 0x18dbc, indexCPS2_Anakaris, 0x0 },
    { L"PP 2.HP/Mummies", 0x18ddc, 0x18dfc, indexCPS2_Anakaris, 0x2 },
    { L"PP 426KK/62KK Light", 0x18dbc, 0x18ddc, indexCPS2_Anakaris, 0x01 },
    { L"PP Pharaoh Magic Orbs", 0x18dfc, 0x18e1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_KK[] =
{
    { L"KK Anakaris", 0x18e1c, 0x18e3c, indexCPS2_Anakaris, 0x0 },
    { L"KK 2.HP/Mummies", 0x18e5c, 0x18e7c, indexCPS2_Anakaris, 0x2 },
    { L"KK 426KK/62KK Light", 0x18e3c, 0x18e5c, indexCPS2_Anakaris, 0x01 },
    { L"KK Pharaoh Magic Orbs", 0x18e7c, 0x18e9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_AP[] =
{
    { L"AP Anakaris", 0x18e9c, 0x18ebc, indexCPS2_Anakaris, 0x0 },
    { L"AP 2.HP/Mummies", 0x18edc, 0x18efc, indexCPS2_Anakaris, 0x2 },
    { L"AP 426KK/62KK Light", 0x18ebc, 0x18edc, indexCPS2_Anakaris, 0x01 },
    { L"AP Pharaoh Magic Orbs", 0x18efc, 0x18f1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_AK[] =
{
    { L"AK Anakaris", 0x18f1c, 0x18f3c, indexCPS2_Anakaris, 0x0 },
    { L"AK 2.HP/Mummies", 0x18f5c, 0x18f7c, indexCPS2_Anakaris, 0x2 },
    { L"AK 426KK/62KK Light", 0x18f3c, 0x18f5c, indexCPS2_Anakaris, 0x01 },
    { L"AK Pharaoh Magic Orbs", 0x18f7c, 0x18f9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_LP[] =
{
    { L"LP Felicia", 0x18f9c, 0x18fbc, indexCPS2_Felicia, 0x0 },
    { L"LP Helpers/Mouse", 0x18fbc, 0x18fdc, indexCPS2_Felicia, 0x09 },
    { L"LP Bubble/Butterfly", 0x18fdc, 0x18ffc, indexCPS2_Felicia, 0x01 },
    { L"LP Unknown Extra", 0x18ffc, 0x1901c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_MP[] =
{
    { L"MP Felicia", 0x1901c, 0x1903c, indexCPS2_Felicia, 0x0 },
    { L"MP Helpers/Mouse", 0x1903c, 0x1905c, indexCPS2_Felicia, 0x09 },
    { L"MP Bubble/Butterfly", 0x1905c, 0x1907c, indexCPS2_Felicia, 0x01 },
    { L"MP Unknown Extra", 0x1907c, 0x1909c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_HP[] =
{
    { L"HP Felicia", 0x1909c, 0x190bc, indexCPS2_Felicia, 0x0 },
    { L"HP Helpers/Mouse", 0x190bc, 0x190dc, indexCPS2_Felicia, 0x09 },
    { L"HP Bubble/Butterfly", 0x190dc, 0x190fc, indexCPS2_Felicia, 0x01 },
    { L"HP Unknown Extra", 0x190fc, 0x1911c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_LK[] =
{
    { L"LK Felicia", 0x1911c, 0x1913c, indexCPS2_Felicia, 0x0 },
    { L"LK Helpers/Mouse", 0x1913c, 0x1915c, indexCPS2_Felicia, 0x09 },
    { L"LK Bubble/Butterfly", 0x1915c, 0x1917c, indexCPS2_Felicia, 0x01 },
    { L"LK Unknown Extra", 0x1917c, 0x1919c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_MK[] =
{
    { L"MK Felicia", 0x1919c, 0x191bc, indexCPS2_Felicia, 0x0 },
    { L"MK Helpers/Mouse", 0x191bc, 0x191dc, indexCPS2_Felicia, 0x09 },
    { L"MK Bubble/Butterfly", 0x191dc, 0x191fc, indexCPS2_Felicia, 0x01 },
    { L"MK Unknown Extra", 0x191fc, 0x1921c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_HK[] =
{
    { L"HK Felicia", 0x1921c, 0x1923c, indexCPS2_Felicia, 0x0 },
    { L"HK Helpers/Mouse", 0x1923c, 0x1925c, indexCPS2_Felicia, 0x09 },
    { L"HK Bubble/Butterfly", 0x1925c, 0x1927c, indexCPS2_Felicia, 0x01 },
    { L"HK Unknown Extra", 0x1927c, 0x1929c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_PP[] =
{
    { L"PP Felicia", 0x1929c, 0x192bc, indexCPS2_Felicia, 0x0 },
    { L"PP Helpers/Mouse", 0x192bc, 0x192dc, indexCPS2_Felicia, 0x09 },
    { L"PP Bubble/Butterfly", 0x192dc, 0x192fc, indexCPS2_Felicia, 0x01 },
    { L"PP Unknown Extra", 0x192fc, 0x1931c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_KK[] =
{
    { L"KK Felicia", 0x1931c, 0x1933c, indexCPS2_Felicia, 0x0 },
    { L"KK Helpers/Mouse", 0x1933c, 0x1935c, indexCPS2_Felicia, 0x09 },
    { L"KK Bubble/Butterfly", 0x1935c, 0x1937c, indexCPS2_Felicia, 0x01 },
    { L"KK Unknown Extra", 0x1937c, 0x1939c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_AP[] =
{
    { L"AP Felicia", 0x1939c, 0x193bc, indexCPS2_Felicia, 0x0 },
    { L"AP Helpers/Mouse", 0x193bc, 0x193dc, indexCPS2_Felicia, 0x09 },
    { L"AP Bubble/Butterfly", 0x193dc, 0x193fc, indexCPS2_Felicia, 0x01 },
    { L"AP Unknown Extra", 0x193fc, 0x1941c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_AK[] =
{
    { L"AK Felicia", 0x1941c, 0x1943c, indexCPS2_Felicia, 0x0 },
    { L"AK Helpers/Mouse", 0x1943c, 0x1945c, indexCPS2_Felicia, 0x09 },
    { L"AK Bubble/Butterfly", 0x1945c, 0x1947c, indexCPS2_Felicia, 0x01 },
    { L"AK Unknown Extra", 0x1947c, 0x1949c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_LP[] =
{
    { L"LP Bishamon", 0x1949c, 0x194bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x194dc, 0x194fc },
    { L"LP 41236KK", 0x194bc, 0x194dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Unknown Extra", 0x194fc, 0x1951c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_MP[] =
{
    { L"MP Bishamon", 0x1951c, 0x1953c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1955c, 0x1957c },
    { L"MP 41236KK", 0x1953c, 0x1955c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Unknown Extra", 0x1957c, 0x1959c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_HP[] =
{
    { L"HP Bishamon", 0x1959c, 0x195bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x195dc, 0x195fc },
    { L"HP 41236KK", 0x195bc, 0x195dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Unknown Extra", 0x195fc, 0x1961c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_LK[] =
{
    { L"LK Bishamon", 0x1961c, 0x1963c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1965c, 0x1967c },
    { L"LK 41236KK", 0x1963c, 0x1965c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Unknown Extra", 0x1967c, 0x1969c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_MK[] =
{
    { L"MK Bishamon", 0x1969c, 0x196bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x196dc, 0x196fc },
    { L"MK 41236KK", 0x196bc, 0x196dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Unknown Extra", 0x196fc, 0x1971c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_HK[] =
{
    { L"HK Bishamon", 0x1971c, 0x1973c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1975c, 0x1977c },
    { L"HK 41236KK", 0x1973c, 0x1975c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Unknown Extra", 0x1977c, 0x1979c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_PP[] =
{
    { L"PP Bishamon", 0x1979c, 0x197bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x197dc, 0x197fc },
    { L"PP 41236KK", 0x197bc, 0x197dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Unknown Extra", 0x197fc, 0x1981c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_KK[] =
{
    { L"KK Bishamon", 0x1981c, 0x1983c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1985c, 0x1987c },
    { L"KK 41236KK", 0x1983c, 0x1985c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Unknown Extra", 0x1987c, 0x1989c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_AP[] =
{
    { L"AP Bishamon", 0x1989c, 0x198bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x198dc, 0x198fc },
    { L"AP 41236KK", 0x198bc, 0x198dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Unknown Extra", 0x198fc, 0x1991c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_AK[] =
{
    { L"AK Bishamon", 0x1991c, 0x1993c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks", 0x1995c, 0x1997c },
    { L"AK 41236KK", 0x1993c, 0x1995c, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Unknown Extra", 0x1997c, 0x1999c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_LP[] =
{
    { L"LP Aulbath", 0x1999c, 0x199bc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"LP Water/s.MK/j.MP", 0x199bc, 0x199dc },
    { L"LP Poison Cloud ", 0x199fc, 0x19a1c },
    { L"LP Mach Crab (not full pal)", 0x199dc, 0x199fc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_MP[] =
{
    { L"MP Aulbath", 0x19a1c, 0x19a3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"MP Water/s.MK/j.MP", 0x19a3c, 0x19a5c },
    { L"MP Poison Cloud ", 0x19a7c, 0x19a9c },
    { L"MP Mach Crab (not full pal)", 0x19a5c, 0x19a7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_HP[] =
{
    { L"HP Aulbath", 0x19a9c, 0x19abc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"HP Water/s.MK/j.MP", 0x19abc, 0x19adc },
    { L"HP Poison Cloud ", 0x19afc, 0x19b1c },
    { L"HP Mach Crab (not full pal)", 0x19adc, 0x19afc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_LK[] =
{
    { L"LK Aulbath", 0x19b1c, 0x19b3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"LK Water/s.MK/j.MP", 0x19b3c, 0x19b5c },
    { L"LK Poison Cloud ", 0x19b7c, 0x19b9c },
    { L"LK Mach Crab (not full pal)", 0x19b5c, 0x19b7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_MK[] =
{
    { L"MK Aulbath", 0x19b9c, 0x19bbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"MK Water/s.MK/j.MP", 0x19bbc, 0x19bdc },
    { L"MK Poison Cloud ", 0x19bfc, 0x19c1c },
    { L"MK Mach Crab (not full pal)", 0x19bdc, 0x19bfc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_HK[] =
{
    { L"HK Aulbath", 0x19c1c, 0x19c3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"HK Water/s.MK/j.MP", 0x19c3c, 0x19c5c },
    { L"HK Poison Cloud ", 0x19c7c, 0x19c9c },
    { L"HK Mach Crab (not full pal)", 0x19c5c, 0x19c7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_PP[] =
{
    { L"PP Aulbath", 0x19c9c, 0x19cbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"PP Poison Cloud ", 0x19cfc, 0x19d1c },
    { L"PP Water/s.MK/j.MP", 0x19cbc, 0x19cdc },
    { L"PP Mach Crab (not full pal)", 0x19cdc, 0x19cfc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_KK[] =
{
    { L"KK Aulbath", 0x19d1c, 0x19d3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"KK Water/s.MK/j.MP", 0x19d3c, 0x19d5c },
    { L"KK Poison Cloud ", 0x19d7c, 0x19d9c },
    { L"KK Mach Crab (not full pal)", 0x19d5c, 0x19d7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_AP[] =
{
    { L"AP Aulbath", 0x19d9c, 0x19dbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"AP Water/s.MK/j.MP", 0x19dbc, 0x19ddc },
    { L"AP Poison Cloud ", 0x19dfc, 0x19e1c },
    { L"AP Mach Crab (not full pal)", 0x19ddc, 0x19dfc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_AK[] =
{
    { L"AK Aulbath", 0x19e1c, 0x19e3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { L"AK Water/s.MK/j.MP", 0x19e3c, 0x19e5c },
    { L"AK Poison Cloud ", 0x19e7c, 0x19e9c },
    { L"AK Mach Crab (not full pal)", 0x19e5c, 0x19e7c },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_LP[] =
{
    { L"LP Sasquatch", 0x19e9c, 0x19ebc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"LP Ice Extras", 0x19efc, 0x19f1c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LP Banana", 0x19ebc, 0x19edc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LP Smoke", 0x19edc, 0x19efc, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_MP[] =
{
    { L"MP Sasquatch", 0x19f1c, 0x19f3c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"MP Ice Extras", 0x19f7c, 0x19f9c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MP Banana", 0x19f3c, 0x19f5c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MP Smoke", 0x19f5c, 0x19f7c, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_HP[] =
{
    { L"HP Sasquatch", 0x19f9c, 0x19fbc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"HP Ice Extras", 0x19ffc, 0x1a01c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HP Banana", 0x19fbc, 0x19fdc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HP Smoke", 0x19fdc, 0x19ffc, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_LK[] =
{
    { L"LK Sasquatch", 0x1a01c, 0x1a03c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"LK Ice Extras", 0x1a07c, 0x1a09c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"LK Banana", 0x1a03c, 0x1a05c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"LK Smoke", 0x1a05c, 0x1a07c, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_MK[] =
{
    { L"MK Sasquatch", 0x1a09c, 0x1a0bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"MK Ice Extras", 0x1a0fc, 0x1a11c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"MK Banana", 0x1a0bc, 0x1a0dc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"MK Smoke", 0x1a0dc, 0x1a0fc, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_HK[] =
{
    { L"HK Sasquatch", 0x1a11c, 0x1a13c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"HK Ice Extras", 0x1a17c, 0x1a19c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"HK Banana", 0x1a13c, 0x1a15c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"HK Smoke", 0x1a15c, 0x1a17c, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_PP[] =
{
    { L"PP Sasquatch", 0x1a19c, 0x1a1bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"PP Ice Extras", 0x1a1fc, 0x1a21c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"PP Banana", 0x1a1bc, 0x1a1dc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"PP Smoke", 0x1a1dc, 0x1a1fc, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_KK[] =
{
    { L"KK Sasquatch", 0x1a21c, 0x1a23c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"KK Ice Extras", 0x1a27c, 0x1a29c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"KK Banana", 0x1a23c, 0x1a25c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"KK Smoke", 0x1a25c, 0x1a27c, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_AP[] =
{
    { L"AP Sasquatch", 0x1a29c, 0x1a2bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"AP Ice Extras", 0x1a2fc, 0x1a31c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AP Banana", 0x1a2bc, 0x1a2dc, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AP Smoke", 0x1a2dc, 0x1a2fc, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_AK[] =
{
    { L"AK Sasquatch", 0x1a31c, 0x1a33c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { L"AK Ice Extras", 0x1a37c, 0x1a39c, indexCPS2_Vamp_Sasquatch, 0x01 },
    { L"AK Banana", 0x1a33c, 0x1a35c, indexCPS2_Vamp_Sasquatch, 0x02 },
    { L"AK Smoke", 0x1a35c, 0x1a37c, indexCPS2_Vamp_Sasquatch, 0x03 },
};

const sGame_PaletteDataset VHUNT2_A_ALTZABEL_PALETTES_1[] =
{
    { L"Alt Zabel", 0x1a79c, 0x1a7bc, indexCPS2_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 64PP/63214KK/intro/winpose", 0x1a7bc, 0x1a7dc },
    { L"Alt Zabel Unused 1", 0x1a7dc, 0x1a7fc },
    { L"Alt Zabel Unused 2", 0x1a7fc, 0x1a81c },
};

const sGame_PaletteDataset VHUNT2_A_ALTZABEL_PALETTES_2[] =
{
    { L"Alt Zabel 2 ", 0x1a81c, 0x1a83c, indexCPS2_Vamp_Zabel, 0x0 },
    { L"Alt Zabel 2 64PP/63214KK/intro/winpos", 0x1a83c, 0x1a85c },
    { L"Alt Zabel 2 Unused 1", 0x1a85c, 0x1a87c },
    { L"Alt Zabel 2 Unused 2", 0x1a87c, 0x1a89c },
};


// BUGBUG: TODO: The "Intro/ES 412PP  " entries

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_LP[] =
{
    { L"LP Q-Bee", 0x1a89c, 0x1a8bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"LP Wings/Honey", 0x1a8bc, 0x1a8dc, indexCPS2_Vamp_QBee, 0x1 },
    { L"LP Egg", 0x1a8dc, 0x1a8fc },
    { L"LP Bees", 0x1a8fc, 0x1a91c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_MP[] =
{
    { L"MP Q-Bee", 0x1a91c, 0x1a93c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"MP Wings/Honey", 0x1a93c, 0x1a95c, indexCPS2_Vamp_QBee, 0x1 },
    { L"MP Egg", 0x1a95c, 0x1a97c },
    { L"MP Bees", 0x1a97c, 0x1a99c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_HP[] =
{
    { L"HP Q-Bee", 0x1a99c, 0x1a9bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"HP Wings/Honey", 0x1a9bc, 0x1a9dc, indexCPS2_Vamp_QBee, 0x1 },
    { L"HP Egg", 0x1a9dc, 0x1a9fc },
    { L"HP Bees", 0x1a9fc, 0x1aa1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_LK[] =
{
    { L"LK Q-Bee", 0x1aa1c, 0x1aa3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"LK Wings/Honey", 0x1aa3c, 0x1aa5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"LK Egg", 0x1aa5c, 0x1aa7c },
    { L"LK Bees", 0x1aa7c, 0x1aa9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_MK[] =
{
    { L"MK Q-Bee", 0x1aa9c, 0x1aabc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"MK Wings/Honey", 0x1aabc, 0x1aadc, indexCPS2_Vamp_QBee, 0x1 },
    { L"MK Egg", 0x1aadc, 0x1aafc },
    { L"MK Bees", 0x1aafc, 0x1ab1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_HK[] =
{
    { L"HK Q-Bee", 0x1ab1c, 0x1ab3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"HK Wings/Honey", 0x1ab3c, 0x1ab5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"HK Egg", 0x1ab5c, 0x1ab7c },
    { L"HK Bees", 0x1ab7c, 0x1ab9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_PP[] =
{
    { L"PP Q-Bee", 0x1ab9c, 0x1abbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"PP Wings/Honey", 0x1abbc, 0x1abdc, indexCPS2_Vamp_QBee, 0x1 },
    { L"PP Egg", 0x1abdc, 0x1abfc },
    { L"PP Bees", 0x1abfc, 0x1ac1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_KK[] =
{
    { L"KK Q-Bee", 0x1ac1c, 0x1ac3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"KK Wings/Honey", 0x1ac3c, 0x1ac5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"KK Egg", 0x1ac5c, 0x1ac7c },
    { L"KK Bees", 0x1ac7c, 0x1ac9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_AP[] =
{
    { L"AP Q-Bee", 0x1ac9c, 0x1acbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"AP Wings/Honey", 0x1acbc, 0x1acdc, indexCPS2_Vamp_QBee, 0x1 },
    { L"AP Egg", 0x1acdc, 0x1acfc },
    { L"AP Bees", 0x1acfc, 0x1ad1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_AK[] =
{
    { L"AK Q-Bee", 0x1ad1c, 0x1ad3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { L"AK Wings/Honey", 0x1ad3c, 0x1ad5c, indexCPS2_Vamp_QBee, 0x1 },
    { L"AK Egg", 0x1ad5c, 0x1ad7c },
    { L"AK Bees", 0x1ad7c, 0x1ad9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_LP[] =
{
    { L"LP Lei-Lei", 0x1ad9c, 0x1adbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"LP Lin-Lin", 0x1adbc, 0x1addc },
    { L"LP Dust, Weapons", 0x1addc, 0x1adfc },
    { L"LP Unknown Extra", 0x1adfc, 0x1ae1c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_MP[] =
{
    { L"MP Lei-Lei", 0x1ae1c, 0x1ae3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"MP Lin-Lin", 0x1ae3c, 0x1ae5c },
    { L"MP Dust, Weapons", 0x1ae5c, 0x1ae7c },
    { L"MP Unknown Extra", 0x1ae7c, 0x1ae9c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_HP[] =
{
    { L"HP Lei-Lei", 0x1ae9c, 0x1aebc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"HP Lin-Lin", 0x1aebc, 0x1aedc },
    { L"HP Dust, Weapons", 0x1aedc, 0x1aefc },
    { L"HP Unknown Extra", 0x1aefc, 0x1af1c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_LK[] =
{
    { L"LK Lei-Lei", 0x1af1c, 0x1af3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"LK Lin-Lin", 0x1af3c, 0x1af5c },
    { L"LK Dust, Weapons", 0x1af5c, 0x1af7c },
    { L"LK Unknown Extra", 0x1af7c, 0x1af9c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_MK[] =
{
    { L"MK Lei-Lei", 0x1af9c, 0x1afbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"MK Lin-Lin", 0x1afbc, 0x1afdc },
    { L"MK Dust, Weapons", 0x1afdc, 0x1affc },
    { L"MK Unknown Extra", 0x1affc, 0x1b01c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_HK[] =
{
    { L"HK Lei-Lei", 0x1b01c, 0x1b03c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"HK Lin-Lin", 0x1b03c, 0x1b05c },
    { L"HK Dust, Weapons", 0x1b05c, 0x1b07c },
    { L"HK Unknown Extra", 0x1b07c, 0x1b09c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_PP[] =
{
    { L"PP Lei-Lei", 0x1b09c, 0x1b0bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"PP Lin-Lin", 0x1b0bc, 0x1b0dc },
    { L"PP Dust, Weapons", 0x1b0dc, 0x1b0fc },
    { L"PP Unknown Extra", 0x1b0fc, 0x1b11c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_KK[] =
{
    { L"KK Lei-Lei", 0x1b11c, 0x1b13c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"KK Lin-Lin", 0x1b13c, 0x1b15c },
    { L"KK Dust, Weapons", 0x1b15c, 0x1b17c },
    { L"KK Unknown Extra", 0x1b17c, 0x1b19c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_AP[] =
{
    { L"AP Lei-Lei", 0x1b19c, 0x1b1bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"AP Lin-Lin", 0x1b1bc, 0x1b1dc },
    { L"AP Dust, Weapons", 0x1b1dc, 0x1b1fc },
    { L"AP Unknown Extra", 0x1b1fc, 0x1b21c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_AK[] =
{
    { L"AK Lei-Lei", 0x1b21c, 0x1b23c, indexCPS2_Vamp_LeiLei, 0x0 },
    { L"AK Lin-Lin", 0x1b23c, 0x1b25c },
    { L"AK Dust, Weapons", 0x1b25c, 0x1b27c },
    { L"AK Unknown Extra", 0x1b27c, 0x1b29c },
};


///// real lilith

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_LP[] =
{
    { L"LP Lilith", 0x1b29c, 0x1b2bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"LP Hearts", 0x1b2bc, 0x1b2dc },
    { L"LP Luminous Illusion/62KKK bats", 0x1b2dc, 0x1b2fc },
    { L"LP Sparkles", 0x1b2fc, 0x1b31c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_MP[] =
{
    { L"MP Lilith", 0x1b31c, 0x1b33c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"MP Hearts", 0x1b33c, 0x1b35c },
    { L"MP Luminous Illusion/62KKK bats", 0x1b35c, 0x1b37c },
    { L"MP Sparkles", 0x1b37c, 0x1b39c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_HP[] =
{
    { L"HP Lilith", 0x1b39c, 0x1b3bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"HP Hearts", 0x1b3bc, 0x1b3dc },
    { L"HP Luminous Illusion/62KKK bats", 0x1b3dc, 0x1b3fc },
    { L"HP Sparkles", 0x1b3fc, 0x1b41c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_LK[] =
{
    { L"LK Lilith", 0x1b41c, 0x1b43c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"LK Hearts", 0x1b43c, 0x1b45c },
    { L"LK Luminous Illusion/62KKK bats", 0x1b45c, 0x1b47c },
    { L"LK Sparkles", 0x1b47c, 0x1b49c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_MK[] =
{
    { L"MK Lilith", 0x1b49c, 0x1b4bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"MK Hearts", 0x1b4bc, 0x1b4dc },
    { L"MK Luminous Illusion/62KKK bats", 0x1b4dc, 0x1b4fc },
    { L"MK Sparkles", 0x1b4fc, 0x1b51c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_HK[] =
{
    { L"HK Lilith", 0x1b51c, 0x1b53c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"HK Hearts", 0x1b53c, 0x1b55c },
    { L"HK Luminous Illusion/62KKK bats", 0x1b55c, 0x1b57c },
    { L"HK Sparkles", 0x1b57c, 0x1b59c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_PP[] =
{
    { L"PP Lilith", 0x1b59c, 0x1b5bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"PP Hearts", 0x1b5bc, 0x1b5dc },
    { L"PP Luminous Illusion/62KKK bats", 0x1b5dc, 0x1b5fc },
    { L"PP Sparkles", 0x1b5fc, 0x1b61c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_KK[] =
{
    { L"KK Lilith", 0x1b61c, 0x1b63c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"KK Hearts", 0x1b63c, 0x1b65c },
    { L"KK Luminous Illusion/62KKK bats", 0x1b65c, 0x1b67c },
    { L"KK Sparkles", 0x1b67c, 0x1b69c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_AP[] =
{
    { L"AP Lilith", 0x1b69c, 0x1b6bc, indexCPS2_Vamp_Lilith, 0x0 },
    { L"AP Hearts", 0x1b6bc, 0x1b6dc },
    { L"AP Luminous Illusion/62KKK bats", 0x1b6dc, 0x1b6fc },
    { L"AP Sparkles", 0x1b6fc, 0x1b71c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_AK[] =
{
    { L"AK Lilith", 0x1b71c, 0x1b73c, indexCPS2_Vamp_Lilith, 0x0 },
    { L"AK Hearts", 0x1b73c, 0x1b75c },
    { L"AK Luminous Illusion/62KKK bats", 0x1b75c, 0x1b77c },
    { L"AK Sparkles", 0x1b77c, 0x1b79c },
};



const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_LP[] =
{
    { L"LP Jedah", 0x1b79c, 0x1b7bc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LP Prova di Servo", 0x1b7bc, 0x1b7dc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LP Blood", 0x1b7dc, 0x1b7fc, indexCPS2_Vamp_Jedah, 1 },
    { L"LP Intro", 0x1b7fc, 0x1b81c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_MP[] =
{
    { L"MP Jedah", 0x1b81c, 0x1b83c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MP Prova di Servo", 0x1b83c, 0x1b85c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MP Blood", 0x1b85c, 0x1b87c, indexCPS2_Vamp_Jedah, 1 },
    { L"MP Intro", 0x1b87c, 0x1b89c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_HP[] =
{
    { L"HP Jedah", 0x1b89c, 0x1b8bc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HP Prova di Servo", 0x1b8bc, 0x1b8dc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HP Blood", 0x1b8dc, 0x1b8fc, indexCPS2_Vamp_Jedah, 1 },
    { L"HP Intro", 0x1b8fc, 0x1b91c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_LK[] =
{
	{ L"LK Jedah", 0x1b91c, 0x1b93c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"LK Prova di Servo", 0x1b93c, 0x1b95c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"LK Blood", 0x1b95c, 0x1b97c, indexCPS2_Vamp_Jedah, 1 },
    { L"LK Intro", 0x1b97c, 0x1b99c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_MK[] =
{
    { L"MK Jedah", 0x1b99c, 0x1b9bc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"MK Prova di Servo", 0x1b9bc, 0x1b9dc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"MK Blood", 0x1b9dc, 0x1b9fc, indexCPS2_Vamp_Jedah, 1 },
    { L"MK Intro", 0x1b9fc, 0x1ba1c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_HK[] =
{
    { L"HK Jedah", 0x1ba1c, 0x1ba3c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"HK Prova di Servo", 0x1ba3c, 0x1ba5c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"HK Blood", 0x1ba5c, 0x1ba7c, indexCPS2_Vamp_Jedah, 1 },
    { L"HK Intro", 0x1ba7c, 0x1ba9c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_PP[] =
{
    { L"PP Jedah", 0x1ba9c, 0x1babc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"PP Prova di Servo", 0x1babc, 0x1badc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"PP Blood", 0x1badc, 0x1bafc, indexCPS2_Vamp_Jedah, 1 },
    { L"PP Intro", 0x1bafc, 0x1bb1c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_KK[] =
{
    { L"KK Jedah", 0x1bb1c, 0x1bb3c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"KK Prova di Servo", 0x1bb3c, 0x1bb5c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"KK Blood", 0x1bb5c, 0x1bb7c, indexCPS2_Vamp_Jedah, 1 },
    { L"KK Intro", 0x1bb7c, 0x1bb9c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_AP[] =
{
    { L"AP Jedah", 0x1bb9c, 0x1bbbc, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AP Prova di Servo", 0x1bbbc, 0x1bbdc, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AP Blood", 0x1bbdc, 0x1bbfc, indexCPS2_Vamp_Jedah, 1 },
    { L"AP Intro", 0x1bbfc, 0x1bc1c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_AK[] =
{
    { L"AK Jedah", 0x1bc1c, 0x1bc3c, indexCPS2_Vamp_Jedah, 0x0, &pairNext2 },
    { L"AK Prova di Servo", 0x1bc3c, 0x1bc5c, indexCPS2_Vamp_Jedah, 0x03 },
    { L"AK Blood", 0x1bc5c, 0x1bc7c, indexCPS2_Vamp_Jedah, 1 },
    { L"AK Intro", 0x1bc7c, 0x1bc9c, indexCPS2_Vamp_Jedah, 0x02 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_LP[] =
{
    { L"LP Phobos",          0x1bc9c, 0x1bcbc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"LP Unknown Extra 1", 0x1bcbc, 0x1bcdc },
    { L"LP Unknown Extra 2", 0x1bcdc, 0x1bcfc },
    { L"LP Cecil",           0x1bcfc, 0x1bd1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_MP[] =
{
    { L"MP Phobos",          0x1bd1c, 0x1bd3c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"MP Unknown Extra 1", 0x1bd3c, 0x1bd5c },
    { L"MP Unknown Extra 2", 0x1bd5c, 0x1bd7c },
    { L"MP Cecil",           0x1bd7c, 0x1bd9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_HP[] =
{
    { L"HP Phobos",          0x1bd9c, 0x1bdbc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"HP Unknown Extra 1", 0x1bdbc, 0x1bddc },
    { L"HP Unknown Extra 2", 0x1bddc, 0x1bdfc },
    { L"HP Cecil",           0x1bdfc, 0x1be1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_LK[] =
{
    { L"LK Phobos",          0x1be1c, 0x1be3c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"LK Unknown Extra 1", 0x1be3c, 0x1be5c },
    { L"LK Unknown Extra 2", 0x1be5c, 0x1be7c },
    { L"LK Cecil",           0x1be7c, 0x1be9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_MK[] =
{
    { L"MK Phobos",          0x1be9c, 0x1bebc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"MK Unknown Extra 1", 0x1bebc, 0x1bedc },
    { L"MK Unknown Extra 2", 0x1bedc, 0x1befc },
    { L"MK Cecil",           0x1befc, 0x1bf1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_HK[] =
{
    { L"HK Phobos",          0x1bf1c, 0x1bf3c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"HK Unknown Extra 1", 0x1bf3c, 0x1bf5c },
    { L"HK Unknown Extra 2", 0x1bf5c, 0x1bf7c },
    { L"HK Cecil",           0x1bf7c, 0x1bf9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_PP[] =
{
    { L"PP Phobos",          0x1bf9c, 0x1bfbc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"PP Unknown Extra 1", 0x1bfbc, 0x1bfdc },
    { L"PP Unknown Extra 2", 0x1bfdc, 0x1bffc },
    { L"PP Cecil",           0x1bffc, 0x1c01c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_KK[] =
{
    { L"KK Phobos",          0x1c01c, 0x1c03c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"KK Unknown Extra 1", 0x1c03c, 0x1c05c },
    { L"KK Unknown Extra 2", 0x1c05c, 0x1c07c },
    { L"KK Cecil",           0x1c07c, 0x1c09c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_AP[] =
{
    { L"AP Phobos",          0x1c09c, 0x1c0bc, indexCPS2_Vamp_Phobos, 0x0 },
    { L"AP Unknown Extra 1", 0x1c0bc, 0x1c0dc },
    { L"AP Unknown Extra 2", 0x1c0dc, 0x1c0fc },
    { L"AP Cecil",           0x1c0fc, 0x1c11c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_AK[] =
{
    { L"AK Phobos",          0x1c11c, 0x1c13c, indexCPS2_Vamp_Phobos, 0x0 },
    { L"AK Unknown Extra 1", 0x1c13c, 0x1c15c },
    { L"AK Unknown Extra 2", 0x1c15c, 0x1c17c },
    { L"AK Cecil",           0x1c17c, 0x1c19c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_LP[] =
{
    { L"LP Pyron",           0x1c19c, 0x1c1bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"LP Unknown Extra 1", 0x1c1bc, 0x1c1dc },
    { L"LP Unknown Extra 2", 0x1c1dc, 0x1c1fc },
    { L"LP Unknown Extra 3", 0x1c1fc, 0x1c21c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_MP[] =
{
    { L"MP Pyron",           0x1c21c, 0x1c23c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"MP Unknown Extra 1", 0x1c23c, 0x1c25c },
    { L"MP Unknown Extra 2", 0x1c25c, 0x1c27c },
    { L"MP Unknown Extra 3", 0x1c27c, 0x1c29c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_HP[] =
{
    { L"HP Pyron",           0x1c29c, 0x1c2bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"HP Unknown Extra 1", 0x1c2bc, 0x1c2dc },
    { L"HP Unknown Extra 2", 0x1c2dc, 0x1c2fc },
    { L"HP Unknown Extra 3", 0x1c2fc, 0x1c31c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_LK[] =
{
    { L"LK Pyron",           0x1c31c, 0x1c33c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"LK Unknown Extra 1", 0x1c33c, 0x1c35c },
    { L"LK Unknown Extra 2", 0x1c35c, 0x1c37c },
    { L"LK Unknown Extra 3", 0x1c37c, 0x1c39c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_MK[] =
{
    { L"MK Pyron",           0x1c39c, 0x1c3bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"MK Unknown Extra 1", 0x1c3bc, 0x1c3dc },
    { L"MK Unknown Extra 2", 0x1c3dc, 0x1c3fc },
    { L"MK Unknown Extra 3", 0x1c3fc, 0x1c41c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_HK[] =
{
    { L"HK Pyron",           0x1c41c, 0x1c43c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"HK Unknown Extra 1", 0x1c43c, 0x1c45c },
    { L"HK Unknown Extra 2", 0x1c45c, 0x1c47c },
    { L"HK Unknown Extra 3", 0x1c47c, 0x1c49c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_PP[] =
{
    { L"PP Pyron",           0x1c49c, 0x1c4bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"PP Unknown Extra 1", 0x1c4bc, 0x1c4dc },
    { L"PP Unknown Extra 2", 0x1c4dc, 0x1c4fc },
    { L"PP Unknown Extra 3", 0x1c4fc, 0x1c51c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_KK[] =
{
    { L"KK Pyron",           0x1c51c, 0x1c53c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"KK Unknown Extra 1", 0x1c53c, 0x1c55c },
    { L"KK Unknown Extra 2", 0x1c55c, 0x1c57c },
    { L"KK Unknown Extra 3", 0x1c57c, 0x1c59c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_AP[] =
{
    { L"AP Pyron",           0x1c59c, 0x1c5bc, indexCPS2_Vamp_Pyron, 0x0 },
    { L"AP Unknown Extra 1", 0x1c5bc, 0x1c5dc },
    { L"AP Unknown Extra 2", 0x1c5dc, 0x1c5fc },
    { L"AP Unknown Extra 3", 0x1c5fc, 0x1c61c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_AK[] =
{
    { L"AK Pyron",           0x1c61c, 0x1c63c, indexCPS2_Vamp_Pyron, 0x0 },
    { L"AK Unknown Extra 1", 0x1c63c, 0x1c65c },
    { L"AK Unknown Extra 2", 0x1c65c, 0x1c67c },
    { L"AK Unknown Extra 3", 0x1c67c, 0x1c69c, indexCPS2_Vamp_Pyron, 0x0 },
};

// portraits / dark effects

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_LP[] =
{
    { L"LP Dark Gallon", 0x1C69C, 0x1c1bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"LP Intro/Outro", 0x1c1bc + 0x500, 0x1c1dc + 0x500 },
    { L"LP 236P/41236KK/j.HP", 0x1c1dc + 0x500, 0x1c1fc + 0x500 },
    { L"LP 236P/28K/Outro Flash", 0x1c1fc + 0x500, 0x1c21c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_MP[] =
{
    { L"MP Dark Gallon", 0x1c21c + 0x500, 0x1c23c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"MP Intro/Outro", 0x1c23c + 0x500, 0x1c25c + 0x500 },
    { L"MP 236P/41236KK/j.HP", 0x1c25c + 0x500, 0x1c27c + 0x500 },
    { L"MP 236P/28K/Outro Flash", 0x1c27c + 0x500, 0x1c29c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_HP[] =
{
    { L"HP Dark Gallon", 0x1c29c + 0x500, 0x1c2bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"HP Intro/Outro", 0x1c2bc + 0x500, 0x1c2dc + 0x500 },
    { L"HP 236P/41236KK/j.HP", 0x1c2dc + 0x500, 0x1c2fc + 0x500 },
    { L"HP 236P/28K/Outro Flash", 0x1c2fc + 0x500, 0x1c31c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_LK[] =
{
    { L"LK Dark Gallon", 0x1c31c + 0x500, 0x1c33c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"LK Intro/Outro", 0x1c33c + 0x500, 0x1c35c + 0x500 },
    { L"LK 236P/41236KK/j.HP", 0x1c35c + 0x500, 0x1c37c + 0x500 },
    { L"LK 236P/28K/Outro Flash", 0x1c37c + 0x500, 0x1c39c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_MK[] =
{
    { L"MK Dark Gallon", 0x1c39c + 0x500, 0x1c3bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"MK Intro/Outro", 0x1c3bc + 0x500, 0x1c3dc + 0x500 },
    { L"MK 236P/41236KK/j.HP", 0x1c3dc + 0x500, 0x1c3fc + 0x500 },
    { L"MK 236P/28K/Outro Flash", 0x1c3fc + 0x500, 0x1c41c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_HK[] =
{
    { L"HK Dark Gallon", 0x1c41c + 0x500, 0x1c43c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"HK Intro/Outro", 0x1c43c + 0x500, 0x1c45c + 0x500 },
    { L"HK 236P/41236KK/j.HP", 0x1c45c + 0x500, 0x1c47c + 0x500 },
    { L"HK 236P/28K/Outro Flash", 0x1c47c + 0x500, 0x1c49c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_PP[] =
{
    { L"PP Dark Gallon", 0x1c49c + 0x500, 0x1c4bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"PP Intro/Outro", 0x1c4bc + 0x500, 0x1c4dc + 0x500 },
    { L"PP 236P/41236KK/j.HP", 0x1c4dc + 0x500, 0x1c4fc + 0x500 },
    { L"PP 236P/28K/Outro Flash", 0x1c4fc + 0x500, 0x1c51c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_KK[] =
{
    { L"KK Dark Gallon", 0x1c51c + 0x500, 0x1c53c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"KK Intro/Outro", 0x1c53c + 0x500, 0x1c55c + 0x500 },
    { L"KK 236P/41236KK/j.HP", 0x1c55c + 0x500, 0x1c57c + 0x500 },
    { L"KK 236P/28K/Outro Flash", 0x1c57c + 0x500, 0x1c59c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_AP[] =
{
    { L"AP Dark Gallon", 0x1c59c + 0x500, 0x1c5bc + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"AP Intro/Outro", 0x1c5bc + 0x500, 0x1c5dc + 0x500 },
    { L"AP 236P/41236KK/j.HP", 0x1c5dc + 0x500, 0x1c5fc + 0x500 },
    { L"AP 236P/28K/Outro Flash", 0x1c5fc + 0x500, 0x1c61c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_AK[] =
{
    { L"AK Dark Gallon", 0x1c61c + 0x500, 0x1c63c + 0x500, indexCPS2_Vamp_DarkGallon, 0x0 },
    { L"AK Intro/Outro", 0x1c63c + 0x500, 0x1c65c + 0x500 },
    { L"AK 236P/41236KK/j.HP", 0x1c65c + 0x500, 0x1c67c + 0x500 },
    { L"AK 236P/28K/Outro Flash", 0x1c67c + 0x500, 0x1CB9C },
};



const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_LP[] =
{
    { L"LP Donovan",         0x1cb9c, 0x1cbbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LP Unknown Extra",   0x1cbbc, 0x1cbdc },
    { L"LP Weapons",         0x1cbdc, 0x1cbfc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"LP Anita",           0x1cbfc, 0x1cc1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_MP[] =
{
    { L"MP Donovan",         0x1cc1c, 0x1cc3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MP Unknown Extra",   0x1cc3c, 0x1cc5c },
    { L"MP Weapons",         0x1cc5c, 0x1cc7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"MP Anita",           0x1cc7c, 0x1cc9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_HP[] =
{
    { L"HP Donovan",         0x1cc9c, 0x1ccbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HP Unknown Extra",   0x1ccbc, 0x1ccdc },
    { L"HP Weapons",         0x1ccdc, 0x1ccfc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"HP Anita",           0x1ccfc, 0x1cd1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_LK[] =
{
    { L"LK Donovan",         0x1cd1c, 0x1cd3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"LK Unknown Extra",   0x1cd3c, 0x1cd5c },
    { L"LK Weapons",         0x1cd5c, 0x1cd7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"LK Anita",           0x1cd7c, 0x1cd9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_MK[] =
{
    { L"MK Donovan",         0x1cd9c, 0x1cdbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"MK Unknown Extra",   0x1cdbc, 0x1cddc },
    { L"MK Weapons",         0x1cddc, 0x1cdfc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"MK Anita",           0x1cdfc, 0x1ce1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_HK[] =
{
    { L"HK Donovan",         0x1ce1c, 0x1ce3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"HK Unknown Extra",   0x1ce3c, 0x1ce5c },
    { L"HK Weapons",         0x1ce5c, 0x1ce7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"HK Anita",           0x1ce7c, 0x1ce9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_PP[] =
{
    { L"PP Donovan",         0x1ce9c, 0x1cebc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"PP Unknown Extra",   0x1cebc, 0x1cedc },
    { L"PP Weapons",         0x1cedc, 0x1cefc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"PP Anita",           0x1cefc, 0x1cf1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_KK[] =
{
    { L"KK Donovan",         0x1cf1c, 0x1cf3c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"KK Unknown Extra",   0x1cf3c, 0x1cf5c },
    { L"KK Weapons",         0x1cf5c, 0x1cf7c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"KK Anita",           0x1cf7c, 0x1cf9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_AP[] =
{
    { L"AP Donovan",         0x1cf9c, 0x1cfbc, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AP Unknown Extra",   0x1cfbc, 0x1cfdc },
    { L"AP Weapons",         0x1cfdc, 0x1cffc, indexCPS2_Vamp_Donovan, 0x1 },
    { L"AP Anita",           0x1cffc, 0x1d01c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_AK[] =
{
    { L"AK Donovan",         0x1d01c, 0x1d03c, indexCPS2_Vamp_Donovan, 0x0, &pairNext2 },
    { L"AK Unknown Extra",   0x1d03c, 0x1d05c },
    { L"AK Weapons",         0x1d05c, 0x1d07c, indexCPS2_Vamp_Donovan, 0x1 },
    { L"AK Anita",           0x1d07c, 0x1d09c, indexCPS2_Anita, 0 },
};


const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_LP[] =
{
    { L"LP Unknown",         0x1d09c, 0x1d0bc },
    { L"LP Unknown Extra 1", 0x1d0bc, 0x1d0dc },
    { L"LP Unknown Extra 2", 0x1d0dc, 0x1d0fc },
    { L"LP Unknown Extra 3", 0x1d0fc, 0x1d11c },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_MP[] =
{
    { L"MP Unknown",          0x1d11c, 0x1d13c },
    { L"MP Unknown Extra 1", 0x1d13c, 0x1d15c },
    { L"MP Unknown Extra 2", 0x1d15c, 0x1d17c },
    { L"MP Unknown Extra 3", 0x1d17c, 0x1d19c },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_HP[] =
{
    { L"HP Unknown",          0x1d19c, 0x1c1bc + 0x1000 },
    { L"HP Unknown Extra 1", 0x1c1bc + 0x1000, 0x1c1dc + 0x1000 },
    { L"HP Unknown Extra 2", 0x1c1dc + 0x1000, 0x1c1fc + 0x1000 },
    { L"HP Unknown Extra 3", 0x1c1fc + 0x1000, 0x1c21c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_LK[] =
{
    { L"LK Unknown",          0x1c21c + 0x1000, 0x1c23c + 0x1000 },
    { L"LK Unknown Extra 1", 0x1c23c + 0x1000, 0x1c25c + 0x1000 },
    { L"LK Unknown Extra 2", 0x1c25c + 0x1000, 0x1c27c + 0x1000 },
    { L"LK Unknown Extra 3", 0x1c27c + 0x1000, 0x1c29c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_MK[] =
{
    { L"MK Unknown",          0x1c29c + 0x1000, 0x1c2bc + 0x1000 },
    { L"MK Unknown Extra 1", 0x1c2bc + 0x1000, 0x1c2dc + 0x1000 },
    { L"MK Unknown Extra 2", 0x1c2dc + 0x1000, 0x1c2fc + 0x1000 },
    { L"MK Unknown Extra 3", 0x1c2fc + 0x1000, 0x1c31c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_HK[] =
{
    { L"HK Unknown",          0x1c31c + 0x1000, 0x1c33c + 0x1000 },
    { L"HK Unknown Extra 1", 0x1c33c + 0x1000, 0x1c35c + 0x1000 },
    { L"HK Unknown Extra 2", 0x1c35c + 0x1000, 0x1c37c + 0x1000 },
    { L"HK Unknown Extra 3", 0x1c37c + 0x1000, 0x1c39c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_PP[] =
{
    { L"PP Unknown",          0x1c39c + 0x1000, 0x1c3bc + 0x1000 },
    { L"PP Unknown Extra 1", 0x1c3bc + 0x1000, 0x1c3dc + 0x1000 },
    { L"PP Unknown Extra 2", 0x1c3dc + 0x1000, 0x1c3fc + 0x1000 },
    { L"PP Unknown Extra 3", 0x1c3fc + 0x1000, 0x1c41c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_KK[] =
{
    { L"KK Unknown",          0x1c41c + 0x1000, 0x1c43c + 0x1000 },
    { L"KK Unknown Extra 1", 0x1c43c + 0x1000, 0x1c45c + 0x1000 },
    { L"KK Unknown Extra 2", 0x1c45c + 0x1000, 0x1c47c + 0x1000 },
    { L"KK Unknown Extra 3", 0x1c47c + 0x1000, 0x1c49c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_AP[] =
{
    { L"AP Unknown",          0x1c49c + 0x1000, 0x1c4bc + 0x1000 },
    { L"AP Unknown Extra 1", 0x1c4bc + 0x1000, 0x1c4dc + 0x1000 },
    { L"AP Unknown Extra 2", 0x1c4dc + 0x1000, 0x1c4fc + 0x1000 },
    { L"AP Unknown Extra 3", 0x1c4fc + 0x1000, 0x1c51c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_AK[] =
{
    { L"AK Unknown",          0x1c51c + 0x1000, 0x1c53c + 0x1000 },
    { L"AK Unknown Extra 1", 0x1c53c + 0x1000, 0x1c55c + 0x1000 },
    { L"AK Unknown Extra 2", 0x1c55c + 0x1000, 0x1c57c + 0x1000 },
    { L"AK Unknown Extra 3", 0x1c57c + 0x1000, 0x1c59c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { L"LP Oboro Bishamon",    0x1c59c + 0x1000, 0x1c5bc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Intro", 0x1c5bc + 0x1000, 0x1c5dc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LP Ghosts/Hitsparks", 0x1c5dc + 0x1000, 0x1c5fc + 0x1000 },
    { L"LP Unknown Extra", 0x1c5fc + 0x1000, 0x1c61c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { L"MP Oboro Bishamon",    0x1c61c + 0x1000, 0x1c63c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Intro", 0x1c63c + 0x1000, 0x1c65c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MP Ghosts/Hitsparks", 0x1c65c + 0x1000, 0x1c67c + 0x1000 },
    { L"MP Unknown Extra", 0x1c67c + 0x1000, 0x1c69c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { L"HP Oboro Bishamon",     0x1c19c + 0x1500, 0x1c1bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Intro", 0x1c1bc + 0x1500, 0x1c1dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HP Ghosts/Hitsparks", 0x1c1dc + 0x1500, 0x1c1fc + 0x1500 },
    { L"HP Unknown Extra", 0x1c1fc + 0x1500, 0x1c21c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { L"LK Oboro Bishamon",     0x1c21c + 0x1500, 0x1c23c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Intro", 0x1c23c + 0x1500, 0x1c25c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"LK Ghosts/Hitsparks", 0x1c25c + 0x1500, 0x1c27c + 0x1500 },
    { L"LK Unknown Extra", 0x1c27c + 0x1500, 0x1c29c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { L"MK Oboro Bishamon",     0x1c29c + 0x1500, 0x1c2bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Intro", 0x1c2bc + 0x1500, 0x1c2dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"MK Ghosts/Hitsparks", 0x1c2dc + 0x1500, 0x1c2fc + 0x1500 },
    { L"MK Unknown Extra", 0x1c2fc + 0x1500, 0x1c31c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { L"HK Oboro Bishamon",     0x1c31c + 0x1500, 0x1c33c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Intro", 0x1c33c + 0x1500, 0x1c35c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"HK Ghosts/Hitsparks", 0x1c35c + 0x1500, 0x1c37c + 0x1500 },
    { L"HK Unknown Extra", 0x1c37c + 0x1500, 0x1c39c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { L"PP Oboro Bishamon",     0x1c39c + 0x1500, 0x1c3bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Intro", 0x1c3bc + 0x1500, 0x1c3dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"PP Ghosts/Hitsparks", 0x1c3dc + 0x1500, 0x1c3fc + 0x1500 },
    { L"PP Unknown Extra", 0x1c3fc + 0x1500, 0x1c41c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { L"KK Oboro Bishamon",     0x1c41c + 0x1500, 0x1c43c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Intro", 0x1c43c + 0x1500, 0x1c45c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"KK Ghosts/Hitsparks", 0x1c45c + 0x1500, 0x1c47c + 0x1500 },
    { L"KK Unknown Extra", 0x1c47c + 0x1500, 0x1c49c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { L"AP Oboro Bishamon",     0x1c49c + 0x1500, 0x1c4bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Intro", 0x1c4bc + 0x1500, 0x1c4dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AP Ghosts/Hitsparks", 0x1c4dc + 0x1500, 0x1c4fc + 0x1500 },
    { L"AP Unknown Extra", 0x1c4fc + 0x1500, 0x1c51c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { L"AK Oboro Bishamon",      0x1DA1C, 0x1c53c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Intro",               0x1c53c + 0x1500, 0x1c55c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { L"AK Ghosts/Hitsparks",    0x1c55c + 0x1500, 0x1c57c + 0x1500 },
    { L"AK Unknown Extra",       0x1c57c + 0x1500, 0x1DA9C },
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
    { L"Alt Zabel", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_PALETTES_1,  ARRAYSIZE(VHUNT2_A_ALTZABEL_PALETTES_1) },
    { L"Alt Zabel", DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_PALETTES_2,  ARRAYSIZE(VHUNT2_A_ALTZABEL_PALETTES_2) },
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

const sDescTreeNode VHUNT2_UNITS[] =
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

constexpr auto VHUNT2_A_NUMUNIT = ARRAYSIZE(VHUNT2_UNITS);

#define VHUNT2_A_EXTRALOC VHUNT2_A_NUMUNIT

// We extend this array with data groveled from the VHUNT2e.txt extensible extras file, if any.
const stExtraDef VHUNT2_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

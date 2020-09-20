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
    { _T("LP Bulleta"), 0x16c9c, 0x16cbc, indexCPS2_BBHood, 0x0 },
    { _T("LP Critters"), 0x16cbc, 0x16cdc },
    { _T("LP Weapons"), 0x16cdc, 0x16cfc },
    { _T("LP Explosions "), 0x16cfc, 0x16d1c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_MP[] =
{
    { _T("MP Bulleta"), 0x16d1c, 0x16d3c, indexCPS2_BBHood, 0x0 },
    { _T("MP Critters"), 0x16d3c, 0x16d5c },
    { _T("MP Weapons"), 0x16d5c, 0x16d7c },
    { _T("MP Explosions "), 0x16d7c, 0x16d9c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_HP[] =
{
    { _T("HP Bulleta"), 0x16d9c, 0x16dbc, indexCPS2_BBHood, 0x0 },
    { _T("HP Critters"), 0x16dbc, 0x16ddc },
    { _T("HP Weapons"), 0x16ddc, 0x16dfc },
    { _T("HP Explosions "), 0x16dfc, 0x16e1c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_LK[] =
{
    { _T("LK Bulleta"), 0x16e1c, 0x16e3c, indexCPS2_BBHood, 0x0 },
    { _T("LK Critters"), 0x16e3c, 0x16e5c },
    { _T("LK Weapons"), 0x16e5c, 0x16e7c },
    { _T("LK Explosions "), 0x16e7c, 0x16e9c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_MK[] =
{
    { _T("MK Bulleta"), 0x16e9c, 0x16ebc, indexCPS2_BBHood, 0x0 },
    { _T("MK Critters"), 0x16ebc, 0x16edc },
    { _T("MK Weapons"), 0x16edc, 0x16efc },
    { _T("MK Explosions "), 0x16efc, 0x16f1c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_HK[] =
{
    { _T("HK Bulleta"), 0x16f1c, 0x16f3c, indexCPS2_BBHood, 0x0 },
    { _T("HK Critters"), 0x16f3c, 0x16f5c },
    { _T("HK Weapons"), 0x16f5c, 0x16f7c },
    { _T("HK Explosions "), 0x16f7c, 0x16f9c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_PP[] =
{
    { _T("PP Bulleta"), 0x16f9c, 0x16fbc, indexCPS2_BBHood, 0x0 },
    { _T("PP Critters"), 0x16fbc, 0x16fdc },
    { _T("PP Weapons"), 0x16fdc, 0x16ffc },
    { _T("PP Explosions "), 0x16ffc, 0x1701c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_KK[] =
{
    { _T("KK Bulleta"), 0x1701c, 0x1703c, indexCPS2_BBHood, 0x0 },
    { _T("KK Critters"), 0x1703c, 0x1705c },
    { _T("KK Weapons"), 0x1705c, 0x1707c },
    { _T("KK Explosions "), 0x1707c, 0x1709c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_AP[] =
{
    { _T("AP Bulleta"), 0x1709c, 0x170bc, indexCPS2_BBHood, 0x0 },
    { _T("AP Critters"), 0x170bc, 0x170dc },
    { _T("AP Weapons"), 0x170dc, 0x170fc },
    { _T("AP Explosions "), 0x170fc, 0x1711c },
};

const sGame_PaletteDataset VHUNT2_A_BULLETA_PALETTES_AK[] =
{
    { _T("AK Bulleta"), 0x1711c, 0x1713c, indexCPS2_BBHood, 0x0 },
    { _T("AK Critters"), 0x1713c, 0x1715c },
    { _T("AK Weapons"), 0x1715c, 0x1717c },
    { _T("AK Explosions "), 0x1717c, 0x1719c },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_LP[] =
{
    { _T("LP Demitri"), 0x1719c, 0x171bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Teledash 1"), 0x171fc, 0x1721c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Teledash 2"), 0x171bc, 0x171dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LP Fireball"), 0x171dc, 0x171fc },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_MP[] =
{
    { _T("MP Demitri "), 0x1721c, 0x1723c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Teledash 1"), 0x1727c, 0x1729c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Teledash 2"), 0x1723c, 0x1725c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MP Fireball"), 0x1725c, 0x1727c },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_HP[] =
{
    { _T("HP Demitri"), 0x1729c, 0x172bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Teledash 1"), 0x172fc, 0x1731c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Teledash 2"), 0x172bc, 0x172dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HP Fireball"), 0x172dc, 0x172fc },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_LK[] =
{
    { _T("LK Demitri"), 0x1731c, 0x1733c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Teledash 1"), 0x1737c, 0x1739c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Teledash 2"), 0x1733c, 0x1735c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("LK Fireball"), 0x1735c, 0x1737c },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_MK[] =
{
    { _T("MK Demitri"), 0x1739c, 0x173bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Teledash 1"), 0x173fc, 0x1741c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Teledash 2"), 0x173bc, 0x173dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("MK Fireball"), 0x173dc, 0x173fc },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_HK[] =
{
    { _T("HK Demitri"), 0x1741c, 0x1743c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Teledash 1"), 0x1747c, 0x1749c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Teledash 2"), 0x1743c, 0x1745c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("HK Fireball"), 0x1745c, 0x1747c },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_PP[] =
{
    { _T("PP Demitri"), 0x1749c, 0x174bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Teledash 1"), 0x174fc, 0x1751c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Teledash 2"), 0x174bc, 0x174dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("PP Fireball"), 0x174dc, 0x174fc },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_KK[] =
{
    { _T("KK Demitri"), 0x1751c, 0x1753c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Teledash 1"), 0x1757c, 0x1759c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Teledash 2"), 0x1753c, 0x1755c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("KK Fireball"), 0x1755c, 0x1757c },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_AP[] =
{
    { _T("AP Demitri"), 0x1759c, 0x175bc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Teledash 1"), 0x175fc, 0x1761c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Teledash 2"), 0x175bc, 0x175dc, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AP Fireball"), 0x175dc, 0x175fc },
};

const sGame_PaletteDataset VHUNT2_A_DEMITRI_PALETTES_AK[] =
{
    { _T("AK Demitri"), 0x1761c, 0x1763c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Teledash 1"), 0x1767c, 0x1769c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Teledash 2"), 0x1763c, 0x1765c, indexCPS2_Vamp_Demitri, 0x0 },
    { _T("AK Fireball"), 0x1765c, 0x1767c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_LP[] =
{
    { _T("LP Gallon"), 0x1769c, 0x176bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LP Intro/Outro"), 0x176bc, 0x176dc },
    { _T("LP 236P/41236KK/j.HP"), 0x176dc, 0x176fc },
    { _T("LP 236P/28K/Outro Flash"), 0x176fc, 0x1771c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_MP[] =
{
    { _T("MP Gallon"), 0x1771c, 0x1773c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MP Intro/Outro"), 0x1773c, 0x1775c },
    { _T("MP 236P/41236KK/j.HP"), 0x1775c, 0x1777c },
    { _T("MP 236P/28K/Outro Flash"), 0x1777c, 0x1779c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_HP[] =
{
    { _T("HP Gallon"), 0x1779c, 0x177bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HP Intro/Outro"), 0x177bc, 0x177dc },
    { _T("HP 236P/41236KK/j.HP"), 0x177dc, 0x177fc },
    { _T("HP 236P/28K/Outro Flash"), 0x177fc, 0x1781c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_LK[] =
{
    { _T("LK Gallon"), 0x1781c, 0x1783c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LK Intro/Outro"), 0x1783c, 0x1785c },
    { _T("LK 236P/41236KK/j.HP"), 0x1785c, 0x1787c },
    { _T("LK 236P/28K/Outro Flash"), 0x1787c, 0x1789c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_MK[] =
{
    { _T("MK Gallon"), 0x1789c, 0x178bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MK Intro/Outro"), 0x178bc, 0x178dc },
    { _T("MK 236P/41236KK/j.HP"), 0x178dc, 0x178fc },
    { _T("MK 236P/28K/Outro Flash"), 0x178fc, 0x1791c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_HK[] =
{
    { _T("HK Gallon"), 0x1791c, 0x1793c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HK Intro/Outro"), 0x1793c, 0x1795c },
    { _T("HK 236P/41236KK/j.HP"), 0x1795c, 0x1797c },
    { _T("HK 236P/28K/Outro Flash"), 0x1797c, 0x1799c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_PP[] =
{
    { _T("PP Gallon"), 0x1799c, 0x179bc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("PP Intro/Outro"), 0x179bc, 0x179dc },
    { _T("PP 236P/41236KK/j.HP"), 0x179dc, 0x179fc },
    { _T("PP 236P/28K/Outro Flash"), 0x179fc, 0x17a1c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_KK[] =
{
    { _T("KK Gallon"), 0x17a1c, 0x17a3c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("KK Intro/Outro"), 0x17a3c, 0x17a5c },
    { _T("KK 236P/41236KK/j.HP"), 0x17a5c, 0x17a7c },
    { _T("KK 236P/28K/Outro Flash"), 0x17a7c, 0x17a9c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_AP[] =
{
    { _T("AP Gallon"), 0x17a9c, 0x17abc, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AP Intro/Outro"), 0x17abc, 0x17adc },
    { _T("AP 236P/41236KK/j.HP"), 0x17adc, 0x17afc },
    { _T("AP 236P/28K/Outro Flash"), 0x17afc, 0x17b1c },
};

const sGame_PaletteDataset VHUNT2_A_GALLON_PALETTES_AK[] =
{
    { _T("AK Gallon"), 0x17b1c, 0x17b3c, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AK Intro/Outro"), 0x17b3c, 0x17b5c },
    { _T("AK 236P/41236KK/j.HP"), 0x17b5c, 0x17b7c },
    { _T("AK 236P/28K/Outro Flash"), 0x17b7c, 0x17b9c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_LP[] =
{
    { _T("LP Victor"), 0x17b9c, 0x17bbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LP Electric Flash"), 0x17bfc, 0x17c1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LP [2]8p/[4]6P/DF Startup"), 0x17bbc, 0x17bdc },
    { _T("LP Electricity"), 0x17bdc, 0x17bfc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_MP[] =
{
    { _T("MP Victor"), 0x17c1c, 0x17c3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MP Electric Flash"), 0x17c7c, 0x17c9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MP [2]8p/[4]6P/DF Startup"), 0x17c3c, 0x17c5c },
    { _T("MP Electricity"), 0x17c5c, 0x17c7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_HP[] =
{
    { _T("HP Victor"), 0x17c9c, 0x17cbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HP Electric Flash"), 0x17cfc, 0x17d1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HP [2]8p/[4]6P/DF Startup"), 0x17cbc, 0x17cdc },
    { _T("HP Electricity"), 0x17cdc, 0x17cfc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_LK[] =
{
    { _T("LK Victor"), 0x17d1c, 0x17d3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LK Electric Flash"), 0x17d7c, 0x17d9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("LK [2]8p/[4]6P/DF Startup"), 0x17d3c, 0x17d5c },
    { _T("LK Electricity"), 0x17d5c, 0x17d7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_MK[] =
{
    { _T("MK Victor"), 0x17d9c, 0x17dbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MK Electric Flash"), 0x17dfc, 0x17e1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("MK [2]8p/[4]6P/DF Startup"), 0x17dbc, 0x17ddc },
    { _T("MK Electricity"), 0x17ddc, 0x17dfc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_HK[] =
{
    { _T("HK Victor"), 0x17e1c, 0x17e3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HK Electric Flash"), 0x17e7c, 0x17e9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("HK [2]8p/[4]6P/DF Startup"), 0x17e3c, 0x17e5c },
    { _T("HK Electricity"), 0x17e5c, 0x17e7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_PP[] =
{
    { _T("PP Victor"), 0x17e9c, 0x17ebc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("PP Electric Flash"), 0x17efc, 0x17f1c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("PP [2]8p/[4]6P/DF Startup"), 0x17ebc, 0x17edc },
    { _T("PP Electricity"), 0x17edc, 0x17efc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_KK[] =
{
    { _T("KK Victor"), 0x17f1c, 0x17f3c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("KK Electric Flash"), 0x17f7c, 0x17f9c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("KK [2]8p/[4]6P/DF Startup"), 0x17f3c, 0x17f5c },
    { _T("KK Electricity"), 0x17f5c, 0x17f7c },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_AP[] =
{
    { _T("AP Victor"), 0x17f9c, 0x17fbc, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AP Electric Flash"), 0x17ffc, 0x1801c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AP [2]8p/[4]6P/DF Startup"), 0x17fbc, 0x17fdc },
    { _T("AP Electricity"), 0x17fdc, 0x17ffc },
};

const sGame_PaletteDataset VHUNT2_A_VICTOR_PALETTES_AK[] =
{
    { _T("AK Victor"), 0x1801c, 0x1803c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AK Electric Flash"), 0x1807c, 0x1809c, indexCPS2_Vamp_Victor, 0x0 },
    { _T("AK [2]8p/[4]6P/DF Startup"), 0x1803c, 0x1805c },
    { _T("AK Electricity"), 0x1805c, 0x1807c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_LP[] =
{
    { _T("LP Zabel"), 0x1809c, 0x180bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("LP 64PP/63214KK/intro/winpose"), 0x180bc, 0x180dc },
    { _T("LP Unused 1"), 0x180dc, 0x180fc },
    { _T("LP Unused 2"), 0x180fc, 0x1811c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_MP[] =
{
    { _T("MP Zabel"), 0x1811c, 0x1813c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("MP 64PP/63214KK/intro/winpose"), 0x1813c, 0x1815c },
    { _T("MP Unused 1"), 0x1815c, 0x1817c },
    { _T("MP Unused 2"), 0x1817c, 0x1819c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_HP[] =
{
    { _T("HP Zabel"), 0x1819c, 0x181bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("HP 64PP/63214KK/intro/winpose"), 0x181bc, 0x181dc },
    { _T("HP Unused 1"), 0x181dc, 0x181fc },
    { _T("HP Unused 2"), 0x181fc, 0x1821c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_LK[] =
{
    { _T("LK Zabel"), 0x1821c, 0x1823c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("LK 64PP/63214KK/intro/winpose"), 0x1823c, 0x1825c },
    { _T("LK Unused 1"), 0x1825c, 0x1827c },
    { _T("LK Unused 2"), 0x1827c, 0x1829c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_MK[] =
{
    { _T("MK Zabel"), 0x1829c, 0x182bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("MK 64PP/63214KK/intro/winpose"), 0x182bc, 0x182dc },
    { _T("MK Unused 1"), 0x182dc, 0x182fc },
    { _T("MK Unused 2"), 0x182fc, 0x1831c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_HK[] =
{
    { _T("HK Zabel"), 0x1831c, 0x1833c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("HK 64PP/63214KK/intro/winpose"), 0x1833c, 0x1835c },
    { _T("HK Unused 1"), 0x1835c, 0x1837c },
    { _T("HK Unused 2"), 0x1837c, 0x1839c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_PP[] =
{
    { _T("PP Zabel"), 0x1839c, 0x183bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("PP 64PP/63214KK/intro/winpose"), 0x183bc, 0x183dc },
    { _T("PP Unused 1"), 0x183dc, 0x183fc },
    { _T("PP Unused 2"), 0x183fc, 0x1841c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_KK[] =
{
    { _T("KK Zabel"), 0x1841c, 0x1843c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("KK 64PP/63214KK/intro/winpose"), 0x1843c, 0x1845c },
    { _T("KK Unused 1"), 0x1845c, 0x1847c },
    { _T("KK Unused 2"), 0x1847c, 0x1849c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_AP[] =
{
    { _T("AP Zabel"), 0x1849c, 0x184bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("AP 64PP/63214KK/intro/winpose"), 0x184bc, 0x184dc },
    { _T("AP Unused 1"), 0x184dc, 0x184fc },
    { _T("AP Unused 2"), 0x184fc, 0x1851c },
};

const sGame_PaletteDataset VHUNT2_A_ZABEL_PALETTES_AK[] =
{
    { _T("AK Zabel"), 0x1851c, 0x1853c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("AK 64PP/63214KK/intro/winpose"), 0x1853c, 0x1855c },
    { _T("AK Unused 1"), 0x1855c, 0x1857c },
    { _T("AK Unused 2"), 0x1857c, 0x1859c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_LP[] =
{
    { _T("LP Morrigan"), 0x1859c, 0x185bc, indexCPS2_Morrigan, 0x0 },
    { _T("LP Idle sparkles/Raging demon"), 0x185bc, 0x185dc, indexCPS2_Morrigan, 0x2 },
    { _T("LP Bats"), 0x185dc, 0x185fc },
    { _T("LP Unknown Extra"), 0x185fc, 0x1861c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_MP[] =
{
    { _T("MP Morrigan"), 0x1861c, 0x1863c, indexCPS2_Morrigan, 0x0 },
    { _T("MP Idle sparkles/Raging demon"), 0x1863c, 0x1865c, indexCPS2_Morrigan, 0x2 },
    { _T("MP Bats"), 0x1865c, 0x1867c },
    { _T("MP Unknown Extra"), 0x1867c, 0x1869c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_HP[] =
{
    { _T("HP Morrigan"), 0x1869c, 0x186bc, indexCPS2_Morrigan, 0x0 },
    { _T("HP Idle sparkles/Raging demon"), 0x186bc, 0x186dc, indexCPS2_Morrigan, 0x2 },
    { _T("HP Bats"), 0x186dc, 0x186fc },
    { _T("HP Unknown Extra"), 0x186fc, 0x1871c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_LK[] =
{
    { _T("LK Morrigan"), 0x1871c, 0x1873c, indexCPS2_Morrigan, 0x0 },
    { _T("LK Idle sparkles/Raging demon"), 0x1873c, 0x1875c, indexCPS2_Morrigan, 0x2 },
    { _T("LK Bats"), 0x1875c, 0x1877c },
    { _T("LK Unknown Extra"), 0x1877c, 0x1879c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_MK[] =
{
    { _T("MK Morrigan"), 0x1879c, 0x187bc, indexCPS2_Morrigan, 0x0 },
    { _T("MK Idle sparkles/Raging demon"), 0x187bc, 0x187dc, indexCPS2_Morrigan, 0x2 },
    { _T("MK Bats"), 0x187dc, 0x187fc },
    { _T("MK Unknown Extra"), 0x187fc, 0x1881c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_HK[] =
{
    { _T("HK Morrigan"), 0x1881c, 0x1883c, indexCPS2_Morrigan, 0x0 },
    { _T("HK Idle sparkles/Raging demon"), 0x1883c, 0x1885c, indexCPS2_Morrigan, 0x2 },
    { _T("HK Bats"), 0x1885c, 0x1887c },
    { _T("HK Unknown Extra"), 0x1887c, 0x1889c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_PP[] =
{
    { _T("PP Morrigan"), 0x1889c, 0x188bc, indexCPS2_Morrigan, 0x0 },
    { _T("PP Idle sparkles/Raging demon"), 0x188bc, 0x188dc, indexCPS2_Morrigan, 0x2 },
    { _T("PP Bats"), 0x188dc, 0x188fc },
    { _T("PP Unknown Extra"), 0x188fc, 0x1891c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_KK[] =
{
    { _T("KK Morrigan"), 0x1891c, 0x1893c, indexCPS2_Morrigan, 0x0 },
    { _T("KK Idle sparkles/Raging demon"), 0x1893c, 0x1895c, indexCPS2_Morrigan, 0x2 },
    { _T("KK Bats"), 0x1895c, 0x1897c },
    { _T("KK Unknown Extra"), 0x1897c, 0x1899c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_AP[] =
{
    { _T("AP Morrigan"), 0x1899c, 0x189bc, indexCPS2_Morrigan, 0x0 },
    { _T("AP Idle sparkles/Raging demon"), 0x189bc, 0x189dc, indexCPS2_Morrigan, 0x2 },
    { _T("AP Bats"), 0x189dc, 0x189fc },
    { _T("AP Unknown Extra"), 0x189fc, 0x18a1c },
};

const sGame_PaletteDataset VHUNT2_A_MORRIGAN_PALETTES_AK[] =
{
    { _T("AK Morrigan"), 0x18a1c, 0x18a3c, indexCPS2_Morrigan, 0x0 },
    { _T("AK Idle sparkles/Raging demon"), 0x18a3c, 0x18a5c, indexCPS2_Morrigan, 0x2 },
    { _T("AK Bats"), 0x18a5c, 0x18a7c },
    { _T("AK Unknown Extra"), 0x18a7c, 0x18a9c },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_LP[] =
{
    { _T("LP Anakaris"), 0x18a9c, 0x18abc, indexCPS2_Anakaris, 0x0 },
    { _T("LP 2.HP/Mummies"), 0x18adc, 0x18afc, indexCPS2_Anakaris, 0x2 },
    { _T("LP 426KK/62KK Light"), 0x18abc, 0x18adc },
    { _T("LP Pharaoh Magic Orbs"), 0x18afc, 0x18b1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_MP[] =
{
    { _T("MP Anakaris"), 0x18b1c, 0x18b3c, indexCPS2_Anakaris, 0x0 },
    { _T("MP 2.HP/Mummies"), 0x18b5c, 0x18b7c, indexCPS2_Anakaris, 0x2 },
    { _T("MP 426KK/62KK Light"), 0x18b3c, 0x18b5c },
    { _T("MP Pharaoh Magic Orbs"), 0x18b7c, 0x18b9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_HP[] =
{
    { _T("HP Anakaris"), 0x18b9c, 0x18bbc, indexCPS2_Anakaris, 0x0 },
    { _T("HP 2.HP/Mummies"), 0x18bdc, 0x18bfc, indexCPS2_Anakaris, 0x2 },
    { _T("HP 426KK/62KK Light"), 0x18bbc, 0x18bdc },
    { _T("HP Pharaoh Magic Orbs"), 0x18bfc, 0x18c1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_LK[] =
{
    { _T("LK Anakaris"), 0x18c1c, 0x18c3c, indexCPS2_Anakaris, 0x0 },
    { _T("LK 2.HP/Mummies"), 0x18c5c, 0x18c7c, indexCPS2_Anakaris, 0x2 },
    { _T("LK 426KK/62KK Light"), 0x18c3c, 0x18c5c },
    { _T("LK Pharaoh Magic Orbs"), 0x18c7c, 0x18c9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_MK[] =
{
    { _T("MK Anakaris"), 0x18c9c, 0x18cbc, indexCPS2_Anakaris, 0x0 },
    { _T("MK 2.HP/Mummies"), 0x18cdc, 0x18cfc, indexCPS2_Anakaris, 0x2 },
    { _T("MK 426KK/62KK Light"), 0x18cbc, 0x18cdc },
    { _T("MK Pharaoh Magic Orbs"), 0x18cfc, 0x18d1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_HK[] =
{
    { _T("HK Anakaris"), 0x18d1c, 0x18d3c, indexCPS2_Anakaris, 0x0 },
    { _T("HK 2.HP/Mummies"), 0x18d5c, 0x18d7c, indexCPS2_Anakaris, 0x2 },
    { _T("HK 426KK/62KK Light"), 0x18d3c, 0x18d5c },
    { _T("HK Pharaoh Magic Orbs"), 0x18d7c, 0x18d9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_PP[] =
{
    { _T("PP Anakaris"), 0x18d9c, 0x18dbc, indexCPS2_Anakaris, 0x0 },
    { _T("PP 2.HP/Mummies"), 0x18ddc, 0x18dfc, indexCPS2_Anakaris, 0x2 },
    { _T("PP 426KK/62KK Light"), 0x18dbc, 0x18ddc },
    { _T("PP Pharaoh Magic Orbs"), 0x18dfc, 0x18e1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_KK[] =
{
    { _T("KK Anakaris"), 0x18e1c, 0x18e3c, indexCPS2_Anakaris, 0x0 },
    { _T("KK 2.HP/Mummies"), 0x18e5c, 0x18e7c, indexCPS2_Anakaris, 0x2 },
    { _T("KK 426KK/62KK Light"), 0x18e3c, 0x18e5c },
    { _T("KK Pharaoh Magic Orbs"), 0x18e7c, 0x18e9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_AP[] =
{
    { _T("AP Anakaris"), 0x18e9c, 0x18ebc, indexCPS2_Anakaris, 0x0 },
    { _T("AP 2.HP/Mummies"), 0x18edc, 0x18efc, indexCPS2_Anakaris, 0x2 },
    { _T("AP 426KK/62KK Light"), 0x18ebc, 0x18edc },
    { _T("AP Pharaoh Magic Orbs"), 0x18efc, 0x18f1c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_ANAKARIS_PALETTES_AK[] =
{
    { _T("AK Anakaris"), 0x18f1c, 0x18f3c, indexCPS2_Anakaris, 0x0 },
    { _T("AK 2.HP/Mummies"), 0x18f5c, 0x18f7c, indexCPS2_Anakaris, 0x2 },
    { _T("AK 426KK/62KK Light"), 0x18f3c, 0x18f5c },
    { _T("AK Pharaoh Magic Orbs"), 0x18f7c, 0x18f9c, indexCPS2_Anakaris, 0x3 },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_LP[] =
{
    { _T("LP Felicia"), 0x18f9c, 0x18fbc, indexCPS2_Felicia, 0x0 },
    { _T("LP Helpers/Mouse"), 0x18fbc, 0x18fdc },
    { _T("LP Bubble/Butterfly"), 0x18fdc, 0x18ffc },
    { _T("LP Unknown Extra"), 0x18ffc, 0x1901c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_MP[] =
{
    { _T("MP Felicia"), 0x1901c, 0x1903c, indexCPS2_Felicia, 0x0 },
    { _T("MP Helpers/Mouse"), 0x1903c, 0x1905c },
    { _T("MP Bubble/Butterfly"), 0x1905c, 0x1907c },
    { _T("MP Unknown Extra"), 0x1907c, 0x1909c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_HP[] =
{
    { _T("HP Felicia"), 0x1909c, 0x190bc, indexCPS2_Felicia, 0x0 },
    { _T("HP Helpers/Mouse"), 0x190bc, 0x190dc },
    { _T("HP Bubble/Butterfly"), 0x190dc, 0x190fc },
    { _T("HP Unknown Extra"), 0x190fc, 0x1911c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_LK[] =
{
    { _T("LK Felicia"), 0x1911c, 0x1913c, indexCPS2_Felicia, 0x0 },
    { _T("LK Helpers/Mouse"), 0x1913c, 0x1915c },
    { _T("LK Bubble/Butterfly"), 0x1915c, 0x1917c },
    { _T("LK Unknown Extra"), 0x1917c, 0x1919c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_MK[] =
{
    { _T("MK Felicia"), 0x1919c, 0x191bc, indexCPS2_Felicia, 0x0 },
    { _T("MK Helpers/Mouse"), 0x191bc, 0x191dc },
    { _T("MK Bubble/Butterfly"), 0x191dc, 0x191fc },
    { _T("MK Unknown Extra"), 0x191fc, 0x1921c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_HK[] =
{
    { _T("HK Felicia"), 0x1921c, 0x1923c, indexCPS2_Felicia, 0x0 },
    { _T("HK Helpers/Mouse"), 0x1923c, 0x1925c },
    { _T("HK Bubble/Butterfly"), 0x1925c, 0x1927c },
    { _T("HK Unknown Extra"), 0x1927c, 0x1929c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_PP[] =
{
    { _T("PP Felicia"), 0x1929c, 0x192bc, indexCPS2_Felicia, 0x0 },
    { _T("PP Helpers/Mouse"), 0x192bc, 0x192dc },
    { _T("PP Bubble/Butterfly"), 0x192dc, 0x192fc },
    { _T("PP Unknown Extra"), 0x192fc, 0x1931c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_KK[] =
{
    { _T("KK Felicia"), 0x1931c, 0x1933c, indexCPS2_Felicia, 0x0 },
    { _T("KK Helpers/Mouse"), 0x1933c, 0x1935c },
    { _T("KK Bubble/Butterfly"), 0x1935c, 0x1937c },
    { _T("KK Unknown Extra"), 0x1937c, 0x1939c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_AP[] =
{
    { _T("AP Felicia"), 0x1939c, 0x193bc, indexCPS2_Felicia, 0x0 },
    { _T("AP Helpers/Mouse"), 0x193bc, 0x193dc },
    { _T("AP Bubble/Butterfly"), 0x193dc, 0x193fc },
    { _T("AP Unknown Extra"), 0x193fc, 0x1941c },
};

const sGame_PaletteDataset VHUNT2_A_FELICIA_PALETTES_AK[] =
{
    { _T("AK Felicia"), 0x1941c, 0x1943c, indexCPS2_Felicia, 0x0 },
    { _T("AK Helpers/Mouse"), 0x1943c, 0x1945c },
    { _T("AK Bubble/Butterfly"), 0x1945c, 0x1947c },
    { _T("AK Unknown Extra"), 0x1947c, 0x1949c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_LP[] =
{
    { _T("LP Bishamon"), 0x1949c, 0x194bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Ghosts/Hitsparks"), 0x194dc, 0x194fc },
    { _T("LP 41236KK"), 0x194bc, 0x194dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Unknown Extra"), 0x194fc, 0x1951c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_MP[] =
{
    { _T("MP Bishamon"), 0x1951c, 0x1953c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Ghosts/Hitsparks"), 0x1955c, 0x1957c },
    { _T("MP 41236KK"), 0x1953c, 0x1955c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Unknown Extra"), 0x1957c, 0x1959c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_HP[] =
{
    { _T("HP Bishamon"), 0x1959c, 0x195bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Ghosts/Hitsparks"), 0x195dc, 0x195fc },
    { _T("HP 41236KK"), 0x195bc, 0x195dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Unknown Extra"), 0x195fc, 0x1961c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_LK[] =
{
    { _T("LK Bishamon"), 0x1961c, 0x1963c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Ghosts/Hitsparks"), 0x1965c, 0x1967c },
    { _T("LK 41236KK"), 0x1963c, 0x1965c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Unknown Extra"), 0x1967c, 0x1969c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_MK[] =
{
    { _T("MK Bishamon"), 0x1969c, 0x196bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Ghosts/Hitsparks"), 0x196dc, 0x196fc },
    { _T("MK 41236KK"), 0x196bc, 0x196dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Unknown Extra"), 0x196fc, 0x1971c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_HK[] =
{
    { _T("HK Bishamon"), 0x1971c, 0x1973c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Ghosts/Hitsparks"), 0x1975c, 0x1977c },
    { _T("HK 41236KK"), 0x1973c, 0x1975c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Unknown Extra"), 0x1977c, 0x1979c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_PP[] =
{
    { _T("PP Bishamon"), 0x1979c, 0x197bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Ghosts/Hitsparks"), 0x197dc, 0x197fc },
    { _T("PP 41236KK"), 0x197bc, 0x197dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Unknown Extra"), 0x197fc, 0x1981c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_KK[] =
{
    { _T("KK Bishamon"), 0x1981c, 0x1983c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Ghosts/Hitsparks"), 0x1985c, 0x1987c },
    { _T("KK 41236KK"), 0x1983c, 0x1985c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Unknown Extra"), 0x1987c, 0x1989c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_AP[] =
{
    { _T("AP Bishamon"), 0x1989c, 0x198bc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Ghosts/Hitsparks"), 0x198dc, 0x198fc },
    { _T("AP 41236KK"), 0x198bc, 0x198dc, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Unknown Extra"), 0x198fc, 0x1991c },
};

const sGame_PaletteDataset VHUNT2_A_BISHAMON_PALETTES_AK[] =
{
    { _T("AK Bishamon"), 0x1991c, 0x1993c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Ghosts/Hitsparks"), 0x1995c, 0x1997c },
    { _T("AK 41236KK"), 0x1993c, 0x1995c, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Unknown Extra"), 0x1997c, 0x1999c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_LP[] =
{
    { _T("LP Aulbath"), 0x1999c, 0x199bc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("LP Water/s.MK/j.MP"), 0x199bc, 0x199dc },
    { _T("LP Poison Cloud "), 0x199fc, 0x19a1c },
    { _T("LP Mach Crab (not full pal)"), 0x199dc, 0x199fc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_MP[] =
{
    { _T("MP Aulbath"), 0x19a1c, 0x19a3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("MP Water/s.MK/j.MP"), 0x19a3c, 0x19a5c },
    { _T("MP Poison Cloud "), 0x19a7c, 0x19a9c },
    { _T("MP Mach Crab (not full pal)"), 0x19a5c, 0x19a7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_HP[] =
{
    { _T("HP Aulbath"), 0x19a9c, 0x19abc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("HP Water/s.MK/j.MP"), 0x19abc, 0x19adc },
    { _T("HP Poison Cloud "), 0x19afc, 0x19b1c },
    { _T("HP Mach Crab (not full pal)"), 0x19adc, 0x19afc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_LK[] =
{
    { _T("LK Aulbath"), 0x19b1c, 0x19b3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("LK Water/s.MK/j.MP"), 0x19b3c, 0x19b5c },
    { _T("LK Poison Cloud "), 0x19b7c, 0x19b9c },
    { _T("LK Mach Crab (not full pal)"), 0x19b5c, 0x19b7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_MK[] =
{
    { _T("MK Aulbath"), 0x19b9c, 0x19bbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("MK Water/s.MK/j.MP"), 0x19bbc, 0x19bdc },
    { _T("MK Poison Cloud "), 0x19bfc, 0x19c1c },
    { _T("MK Mach Crab (not full pal)"), 0x19bdc, 0x19bfc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_HK[] =
{
    { _T("HK Aulbath"), 0x19c1c, 0x19c3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("HK Water/s.MK/j.MP"), 0x19c3c, 0x19c5c },
    { _T("HK Poison Cloud "), 0x19c7c, 0x19c9c },
    { _T("HK Mach Crab (not full pal)"), 0x19c5c, 0x19c7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_PP[] =
{
    { _T("PP Aulbath"), 0x19c9c, 0x19cbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("PP Poison Cloud "), 0x19cfc, 0x19d1c },
    { _T("PP Water/s.MK/j.MP"), 0x19cbc, 0x19cdc },
    { _T("PP Mach Crab (not full pal)"), 0x19cdc, 0x19cfc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_KK[] =
{
    { _T("KK Aulbath"), 0x19d1c, 0x19d3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("KK Water/s.MK/j.MP"), 0x19d3c, 0x19d5c },
    { _T("KK Poison Cloud "), 0x19d7c, 0x19d9c },
    { _T("KK Mach Crab (not full pal)"), 0x19d5c, 0x19d7c },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_AP[] =
{
    { _T("AP Aulbath"), 0x19d9c, 0x19dbc, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("AP Water/s.MK/j.MP"), 0x19dbc, 0x19ddc },
    { _T("AP Poison Cloud "), 0x19dfc, 0x19e1c },
    { _T("AP Mach Crab (not full pal)"), 0x19ddc, 0x19dfc },
};

const sGame_PaletteDataset VHUNT2_A_AULBATH_PALETTES_AK[] =
{
    { _T("AK Aulbath"), 0x19e1c, 0x19e3c, indexCPS2_Vamp_Aulbath, 0x0 },
    { _T("AK Water/s.MK/j.MP"), 0x19e3c, 0x19e5c },
    { _T("AK Poison Cloud "), 0x19e7c, 0x19e9c },
    { _T("AK Mach Crab (not full pal)"), 0x19e5c, 0x19e7c },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_LP[] =
{
    { _T("LP Sasquatch"), 0x19e9c, 0x19ebc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("LP Ice Extras"), 0x19efc, 0x19f1c },
    { _T("LP Banana"), 0x19ebc, 0x19edc },
    { _T("LP Smoke"), 0x19edc, 0x19efc },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_MP[] =
{
    { _T("MP Sasquatch"), 0x19f1c, 0x19f3c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("MP Ice Extras"), 0x19f7c, 0x19f9c },
    { _T("MP Banana"), 0x19f3c, 0x19f5c },
    { _T("MP Smoke"), 0x19f5c, 0x19f7c },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_HP[] =
{
    { _T("HP Sasquatch"), 0x19f9c, 0x19fbc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("HP Ice Extras"), 0x19ffc, 0x1a01c },
    { _T("HP Banana"), 0x19fbc, 0x19fdc },
    { _T("HP Smoke"), 0x19fdc, 0x19ffc },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_LK[] =
{
    { _T("LK Sasquatch"), 0x1a01c, 0x1a03c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("LK Ice Extras"), 0x1a07c, 0x1a09c },
    { _T("LK Banana"), 0x1a03c, 0x1a05c },
    { _T("LK Smoke"), 0x1a05c, 0x1a07c },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_MK[] =
{
    { _T("MK Sasquatch"), 0x1a09c, 0x1a0bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("MK Ice Extras"), 0x1a0fc, 0x1a11c },
    { _T("MK Banana"), 0x1a0bc, 0x1a0dc },
    { _T("MK Smoke"), 0x1a0dc, 0x1a0fc },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_HK[] =
{
    { _T("HK Sasquatch"), 0x1a11c, 0x1a13c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("HK Ice Extras"), 0x1a17c, 0x1a19c },
    { _T("HK Banana"), 0x1a13c, 0x1a15c },
    { _T("HK Smoke"), 0x1a15c, 0x1a17c },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_PP[] =
{
    { _T("PP Sasquatch"), 0x1a19c, 0x1a1bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("PP Ice Extras"), 0x1a1fc, 0x1a21c },
    { _T("PP Banana"), 0x1a1bc, 0x1a1dc },
    { _T("PP Smoke"), 0x1a1dc, 0x1a1fc },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_KK[] =
{
    { _T("KK Sasquatch"), 0x1a21c, 0x1a23c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("KK Ice Extras"), 0x1a27c, 0x1a29c },
    { _T("KK Banana"), 0x1a23c, 0x1a25c },
    { _T("KK Smoke"), 0x1a25c, 0x1a27c },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_AP[] =
{
    { _T("AP Sasquatch"), 0x1a29c, 0x1a2bc, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("AP Ice Extras"), 0x1a2fc, 0x1a31c },
    { _T("AP Banana"), 0x1a2bc, 0x1a2dc },
    { _T("AP Smoke"), 0x1a2dc, 0x1a2fc },
};

const sGame_PaletteDataset VHUNT2_A_SASQUATCH_PALETTES_AK[] =
{
    { _T("AK Sasquatch"), 0x1a31c, 0x1a33c, indexCPS2_Vamp_Sasquatch, 0x0 },
    { _T("AK Ice Extras"), 0x1a37c, 0x1a39c },
    { _T("AK Banana"), 0x1a33c, 0x1a35c },
    { _T("AK Smoke"), 0x1a35c, 0x1a37c },
};

const sGame_PaletteDataset VHUNT2_A_ALTZABEL_PALETTES_1[] =
{
    { _T("Alt Zabel"), 0x1a79c, 0x1a7bc, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("Alt Zabel 64PP/63214KK/intro/winpose"), 0x1a7bc, 0x1a7dc },
    { _T("Alt Zabel Unused 1"), 0x1a7dc, 0x1a7fc },
    { _T("Alt Zabel Unused 2"), 0x1a7fc, 0x1a81c },
};

const sGame_PaletteDataset VHUNT2_A_ALTZABEL_PALETTES_2[] =
{
    { _T("Alt Zabel 2 "), 0x1a81c, 0x1a83c, indexCPS2_Vamp_Zabel, 0x0 },
    { _T("Alt Zabel 2 64PP/63214KK/intro/winpos"), 0x1a83c, 0x1a85c },
    { _T("Alt Zabel 2 Unused 1"), 0x1a85c, 0x1a87c },
    { _T("Alt Zabel 2 Unused 2"), 0x1a87c, 0x1a89c },
};


// BUGBUG: TODO: The "Intro/ES 412PP  " entries

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_LP[] =
{
    { _T("LP Q-Bee"), 0x1a89c, 0x1a8bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("LP Wings/Honey"), 0x1a8bc, 0x1a8dc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("LP Egg"), 0x1a8dc, 0x1a8fc },
    { _T("LP Bees"), 0x1a8fc, 0x1a91c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_MP[] =
{
    { _T("MP Q-Bee"), 0x1a91c, 0x1a93c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("MP Wings/Honey"), 0x1a93c, 0x1a95c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("MP Egg"), 0x1a95c, 0x1a97c },
    { _T("MP Bees"), 0x1a97c, 0x1a99c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_HP[] =
{
    { _T("HP Q-Bee"), 0x1a99c, 0x1a9bc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("HP Wings/Honey"), 0x1a9bc, 0x1a9dc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("HP Egg"), 0x1a9dc, 0x1a9fc },
    { _T("HP Bees"), 0x1a9fc, 0x1aa1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_LK[] =
{
    { _T("LK Q-Bee"), 0x1aa1c, 0x1aa3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("LK Wings/Honey"), 0x1aa3c, 0x1aa5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("LK Egg"), 0x1aa5c, 0x1aa7c },
    { _T("LK Bees"), 0x1aa7c, 0x1aa9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_MK[] =
{
    { _T("MK Q-Bee"), 0x1aa9c, 0x1aabc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("MK Wings/Honey"), 0x1aabc, 0x1aadc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("MK Egg"), 0x1aadc, 0x1aafc },
    { _T("MK Bees"), 0x1aafc, 0x1ab1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_HK[] =
{
    { _T("HK Q-Bee"), 0x1ab1c, 0x1ab3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("HK Wings/Honey"), 0x1ab3c, 0x1ab5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("HK Egg"), 0x1ab5c, 0x1ab7c },
    { _T("HK Bees"), 0x1ab7c, 0x1ab9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_PP[] =
{
    { _T("PP Q-Bee"), 0x1ab9c, 0x1abbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("PP Wings/Honey"), 0x1abbc, 0x1abdc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("PP Egg"), 0x1abdc, 0x1abfc },
    { _T("PP Bees"), 0x1abfc, 0x1ac1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_KK[] =
{
    { _T("KK Q-Bee"), 0x1ac1c, 0x1ac3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("KK Wings/Honey"), 0x1ac3c, 0x1ac5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("KK Egg"), 0x1ac5c, 0x1ac7c },
    { _T("KK Bees"), 0x1ac7c, 0x1ac9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_AP[] =
{
    { _T("AP Q-Bee"), 0x1ac9c, 0x1acbc, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("AP Wings/Honey"), 0x1acbc, 0x1acdc, indexCPS2_Vamp_QBee, 0x1 },
    { _T("AP Egg"), 0x1acdc, 0x1acfc },
    { _T("AP Bees"), 0x1acfc, 0x1ad1c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_QUEENBEE_PALETTES_AK[] =
{
    { _T("AK Q-Bee"), 0x1ad1c, 0x1ad3c, indexCPS2_Vamp_QBee, 0x0, &pairNext },
    { _T("AK Wings/Honey"), 0x1ad3c, 0x1ad5c, indexCPS2_Vamp_QBee, 0x1 },
    { _T("AK Egg"), 0x1ad5c, 0x1ad7c },
    { _T("AK Bees"), 0x1ad7c, 0x1ad9c, indexCPS2_Vamp_QBee, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_LP[] =
{
    { _T("LP Lei-Lei"), 0x1ad9c, 0x1adbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("LP Lin-Lin"), 0x1adbc, 0x1addc },
    { _T("LP Dust, Weapons"), 0x1addc, 0x1adfc },
    { _T("LP Unknown Extra"), 0x1adfc, 0x1ae1c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_MP[] =
{
    { _T("MP Lei-Lei"), 0x1ae1c, 0x1ae3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("MP Lin-Lin"), 0x1ae3c, 0x1ae5c },
    { _T("MP Dust, Weapons"), 0x1ae5c, 0x1ae7c },
    { _T("MP Unknown Extra"), 0x1ae7c, 0x1ae9c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_HP[] =
{
    { _T("HP Lei-Lei"), 0x1ae9c, 0x1aebc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("HP Lin-Lin"), 0x1aebc, 0x1aedc },
    { _T("HP Dust, Weapons"), 0x1aedc, 0x1aefc },
    { _T("HP Unknown Extra"), 0x1aefc, 0x1af1c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_LK[] =
{
    { _T("LK Lei-Lei"), 0x1af1c, 0x1af3c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("LK Lin-Lin"), 0x1af3c, 0x1af5c },
    { _T("LK Dust, Weapons"), 0x1af5c, 0x1af7c },
    { _T("LK Unknown Extra"), 0x1af7c, 0x1af9c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_MK[] =
{
    { _T("MK Lei-Lei"), 0x1af9c, 0x1afbc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("MK Lin-Lin"), 0x1afbc, 0x1afdc },
    { _T("MK Dust, Weapons"), 0x1afdc, 0x1affc },
    { _T("MK Unknown Extra"), 0x1affc, 0x1b01c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_HK[] =
{
    { _T("HK Lei-Lei"), 0x1b01c, 0x1b03c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("HK Lin-Lin"), 0x1b03c, 0x1b05c },
    { _T("HK Dust, Weapons"), 0x1b05c, 0x1b07c },
    { _T("HK Unknown Extra"), 0x1b07c, 0x1b09c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_PP[] =
{
    { _T("PP Lei-Lei"), 0x1b09c, 0x1b0bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("PP Lin-Lin"), 0x1b0bc, 0x1b0dc },
    { _T("PP Dust, Weapons"), 0x1b0dc, 0x1b0fc },
    { _T("PP Unknown Extra"), 0x1b0fc, 0x1b11c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_KK[] =
{
    { _T("KK Lei-Lei"), 0x1b11c, 0x1b13c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("KK Lin-Lin"), 0x1b13c, 0x1b15c },
    { _T("KK Dust, Weapons"), 0x1b15c, 0x1b17c },
    { _T("KK Unknown Extra"), 0x1b17c, 0x1b19c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_AP[] =
{
    { _T("AP Lei-Lei"), 0x1b19c, 0x1b1bc, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("AP Lin-Lin"), 0x1b1bc, 0x1b1dc },
    { _T("AP Dust, Weapons"), 0x1b1dc, 0x1b1fc },
    { _T("AP Unknown Extra"), 0x1b1fc, 0x1b21c },
};

const sGame_PaletteDataset VHUNT2_A_LEILEI_PALETTES_AK[] =
{
    { _T("AK Lei-Lei"), 0x1b21c, 0x1b23c, indexCPS2_Vamp_LeiLei, 0x0 },
    { _T("AK Lin-Lin"), 0x1b23c, 0x1b25c },
    { _T("AK Dust, Weapons"), 0x1b25c, 0x1b27c },
    { _T("AK Unknown Extra"), 0x1b27c, 0x1b29c },
};


///// real lilith

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_LP[] =
{
    { _T("LP Lilith"), 0x1b29c, 0x1b2bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("LP Hearts"), 0x1b2bc, 0x1b2dc },
    { _T("LP Luminous Illusion/62KKK bats"), 0x1b2dc, 0x1b2fc },
    { _T("LP Sparkles"), 0x1b2fc, 0x1b31c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_MP[] =
{
    { _T("MP Lilith"), 0x1b31c, 0x1b33c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("MP Hearts"), 0x1b33c, 0x1b35c },
    { _T("MP Luminous Illusion/62KKK bats"), 0x1b35c, 0x1b37c },
    { _T("MP Sparkles"), 0x1b37c, 0x1b39c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_HP[] =
{
    { _T("HP Lilith"), 0x1b39c, 0x1b3bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("HP Hearts"), 0x1b3bc, 0x1b3dc },
    { _T("HP Luminous Illusion/62KKK bats"), 0x1b3dc, 0x1b3fc },
    { _T("HP Sparkles"), 0x1b3fc, 0x1b41c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_LK[] =
{
    { _T("LK Lilith"), 0x1b41c, 0x1b43c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("LK Hearts"), 0x1b43c, 0x1b45c },
    { _T("LK Luminous Illusion/62KKK bats"), 0x1b45c, 0x1b47c },
    { _T("LK Sparkles"), 0x1b47c, 0x1b49c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_MK[] =
{
    { _T("MK Lilith"), 0x1b49c, 0x1b4bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("MK Hearts"), 0x1b4bc, 0x1b4dc },
    { _T("MK Luminous Illusion/62KKK bats"), 0x1b4dc, 0x1b4fc },
    { _T("MK Sparkles"), 0x1b4fc, 0x1b51c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_HK[] =
{
    { _T("HK Lilith"), 0x1b51c, 0x1b53c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("HK Hearts"), 0x1b53c, 0x1b55c },
    { _T("HK Luminous Illusion/62KKK bats"), 0x1b55c, 0x1b57c },
    { _T("HK Sparkles"), 0x1b57c, 0x1b59c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_PP[] =
{
    { _T("PP Lilith"), 0x1b59c, 0x1b5bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("PP Hearts"), 0x1b5bc, 0x1b5dc },
    { _T("PP Luminous Illusion/62KKK bats"), 0x1b5dc, 0x1b5fc },
    { _T("PP Sparkles"), 0x1b5fc, 0x1b61c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_KK[] =
{
    { _T("KK Lilith"), 0x1b61c, 0x1b63c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("KK Hearts"), 0x1b63c, 0x1b65c },
    { _T("KK Luminous Illusion/62KKK bats"), 0x1b65c, 0x1b67c },
    { _T("KK Sparkles"), 0x1b67c, 0x1b69c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_AP[] =
{
    { _T("AP Lilith"), 0x1b69c, 0x1b6bc, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("AP Hearts"), 0x1b6bc, 0x1b6dc },
    { _T("AP Luminous Illusion/62KKK bats"), 0x1b6dc, 0x1b6fc },
    { _T("AP Sparkles"), 0x1b6fc, 0x1b71c },
};

const sGame_PaletteDataset VHUNT2_A_LILITH_PALETTES_AK[] =
{
    { _T("AK Lilith"), 0x1b71c, 0x1b73c, indexCPS2_Vamp_Lilith, 0x0 },
    { _T("AK Hearts"), 0x1b73c, 0x1b75c },
    { _T("AK Luminous Illusion/62KKK bats"), 0x1b75c, 0x1b77c },
    { _T("AK Sparkles"), 0x1b77c, 0x1b79c },
};



const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_LP[] =
{
    { _T("LP Jedah"), 0x1b79c, 0x1b7bc, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("LP Prova di Servo"), 0x1b7bc, 0x1b7dc },
    { _T("LP Blood"), 0x1b7dc, 0x1b7fc },
    { _T("LP Intro"), 0x1b7fc, 0x1b81c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_MP[] =
{
    { _T("MP Jedah"), 0x1b81c, 0x1b83c, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("MP Prova di Servo"), 0x1b83c, 0x1b85c },
    { _T("MP Blood"), 0x1b85c, 0x1b87c },
    { _T("MP Intro"), 0x1b87c, 0x1b89c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_HP[] =
{
    { _T("HP Jedah"), 0x1b89c, 0x1b8bc, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("HP Prova di Servo"), 0x1b8bc, 0x1b8dc },
    { _T("HP Blood"), 0x1b8dc, 0x1b8fc },
    { _T("HP Intro"), 0x1b8fc, 0x1b91c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_LK[] =
{
	{ _T("LK Jedah"), 0x1b91c, 0x1b93c, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("LK Prova di Servo"), 0x1b93c, 0x1b95c },
    { _T("LK Blood"), 0x1b95c, 0x1b97c },
    { _T("LK Intro"), 0x1b97c, 0x1b99c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_MK[] =
{
    { _T("MK Jedah"), 0x1b99c, 0x1b9bc, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("MK Prova di Servo"), 0x1b9bc, 0x1b9dc },
    { _T("MK Blood"), 0x1b9dc, 0x1b9fc },
    { _T("MK Intro"), 0x1b9fc, 0x1ba1c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_HK[] =
{
    { _T("HK Jedah"), 0x1ba1c, 0x1ba3c, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("HK Prova di Servo"), 0x1ba3c, 0x1ba5c },
    { _T("HK Blood"), 0x1ba5c, 0x1ba7c },
    { _T("HK Intro"), 0x1ba7c, 0x1ba9c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_PP[] =
{
    { _T("PP Jedah"), 0x1ba9c, 0x1babc, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("PP Prova di Servo"), 0x1babc, 0x1badc },
    { _T("PP Blood"), 0x1badc, 0x1bafc },
    { _T("PP Intro"), 0x1bafc, 0x1bb1c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_KK[] =
{
    { _T("KK Jedah"), 0x1bb1c, 0x1bb3c, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("KK Prova di Servo"), 0x1bb3c, 0x1bb5c },
    { _T("KK Blood"), 0x1bb5c, 0x1bb7c },
    { _T("KK Intro"), 0x1bb7c, 0x1bb9c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_AP[] =
{
    { _T("AP Jedah"), 0x1bb9c, 0x1bbbc, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("AP Prova di Servo"), 0x1bbbc, 0x1bbdc },
    { _T("AP Blood"), 0x1bbdc, 0x1bbfc },
    { _T("AP Intro"), 0x1bbfc, 0x1bc1c },
};

const sGame_PaletteDataset VHUNT2_A_JEDAH_PALETTES_AK[] =
{
    { _T("AK Jedah"), 0x1bc1c, 0x1bc3c, indexCPS2_Vamp_Jedah, 0x0 },
    { _T("AK Prova di Servo"), 0x1bc3c, 0x1bc5c },
    { _T("AK Blood"), 0x1bc5c, 0x1bc7c },
    { _T("AK Intro"), 0x1bc7c, 0x1bc9c },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_LP[] =
{
    { _T("LP Phobos"),          0x1bc9c, 0x1bcbc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("LP Unknown Extra 1"), 0x1bcbc, 0x1bcdc },
    { _T("LP Unknown Extra 2"), 0x1bcdc, 0x1bcfc },
    { _T("LP Cecil"),           0x1bcfc, 0x1bd1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_MP[] =
{
    { _T("MP Phobos"),          0x1bd1c, 0x1bd3c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("MP Unknown Extra 1"), 0x1bd3c, 0x1bd5c },
    { _T("MP Unknown Extra 2"), 0x1bd5c, 0x1bd7c },
    { _T("MP Cecil"),           0x1bd7c, 0x1bd9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_HP[] =
{
    { _T("HP Phobos"),          0x1bd9c, 0x1bdbc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("HP Unknown Extra 1"), 0x1bdbc, 0x1bddc },
    { _T("HP Unknown Extra 2"), 0x1bddc, 0x1bdfc },
    { _T("HP Cecil"),           0x1bdfc, 0x1be1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_LK[] =
{
    { _T("LK Phobos"),          0x1be1c, 0x1be3c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("LK Unknown Extra 1"), 0x1be3c, 0x1be5c },
    { _T("LK Unknown Extra 2"), 0x1be5c, 0x1be7c },
    { _T("LK Cecil"),           0x1be7c, 0x1be9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_MK[] =
{
    { _T("MK Phobos"),          0x1be9c, 0x1bebc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("MK Unknown Extra 1"), 0x1bebc, 0x1bedc },
    { _T("MK Unknown Extra 2"), 0x1bedc, 0x1befc },
    { _T("MK Cecil"),           0x1befc, 0x1bf1c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_HK[] =
{
    { _T("HK Phobos"),          0x1bf1c, 0x1bf3c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("HK Unknown Extra 1"), 0x1bf3c, 0x1bf5c },
    { _T("HK Unknown Extra 2"), 0x1bf5c, 0x1bf7c },
    { _T("HK Cecil"),           0x1bf7c, 0x1bf9c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_PP[] =
{
    { _T("PP Phobos"),          0x1bf9c, 0x1bfbc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("PP Unknown Extra 1"), 0x1bfbc, 0x1bfdc },
    { _T("PP Unknown Extra 2"), 0x1bfdc, 0x1bffc },
    { _T("PP Cecil"),           0x1bffc, 0x1c01c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_KK[] =
{
    { _T("KK Phobos"),          0x1c01c, 0x1c03c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("KK Unknown Extra 1"), 0x1c03c, 0x1c05c },
    { _T("KK Unknown Extra 2"), 0x1c05c, 0x1c07c },
    { _T("KK Cecil"),           0x1c07c, 0x1c09c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_AP[] =
{
    { _T("AP Phobos"),          0x1c09c, 0x1c0bc, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("AP Unknown Extra 1"), 0x1c0bc, 0x1c0dc },
    { _T("AP Unknown Extra 2"), 0x1c0dc, 0x1c0fc },
    { _T("AP Cecil"),           0x1c0fc, 0x1c11c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PHOBOS_PALETTES_AK[] =
{
    { _T("AK Phobos"),          0x1c11c, 0x1c13c, indexCPS2_Vamp_Phobos, 0x0 },
    { _T("AK Unknown Extra 1"), 0x1c13c, 0x1c15c },
    { _T("AK Unknown Extra 2"), 0x1c15c, 0x1c17c },
    { _T("AK Cecil"),           0x1c17c, 0x1c19c, indexCPS2_Vamp_Phobos, 0x1 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_LP[] =
{
    { _T("LP Pyron"),           0x1c19c, 0x1c1bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("LP Unknown Extra 1"), 0x1c1bc, 0x1c1dc },
    { _T("LP Unknown Extra 2"), 0x1c1dc, 0x1c1fc },
    { _T("LP Unknown Extra 3"), 0x1c1fc, 0x1c21c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_MP[] =
{
    { _T("MP Pyron"),           0x1c21c, 0x1c23c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("MP Unknown Extra 1"), 0x1c23c, 0x1c25c },
    { _T("MP Unknown Extra 2"), 0x1c25c, 0x1c27c },
    { _T("MP Unknown Extra 3"), 0x1c27c, 0x1c29c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_HP[] =
{
    { _T("HP Pyron"),           0x1c29c, 0x1c2bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("HP Unknown Extra 1"), 0x1c2bc, 0x1c2dc },
    { _T("HP Unknown Extra 2"), 0x1c2dc, 0x1c2fc },
    { _T("HP Unknown Extra 3"), 0x1c2fc, 0x1c31c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_LK[] =
{
    { _T("LK Pyron"),           0x1c31c, 0x1c33c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("LK Unknown Extra 1"), 0x1c33c, 0x1c35c },
    { _T("LK Unknown Extra 2"), 0x1c35c, 0x1c37c },
    { _T("LK Unknown Extra 3"), 0x1c37c, 0x1c39c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_MK[] =
{
    { _T("MK Pyron"),           0x1c39c, 0x1c3bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("MK Unknown Extra 1"), 0x1c3bc, 0x1c3dc },
    { _T("MK Unknown Extra 2"), 0x1c3dc, 0x1c3fc },
    { _T("MK Unknown Extra 3"), 0x1c3fc, 0x1c41c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_HK[] =
{
    { _T("HK Pyron"),           0x1c41c, 0x1c43c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("HK Unknown Extra 1"), 0x1c43c, 0x1c45c },
    { _T("HK Unknown Extra 2"), 0x1c45c, 0x1c47c },
    { _T("HK Unknown Extra 3"), 0x1c47c, 0x1c49c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_PP[] =
{
    { _T("PP Pyron"),           0x1c49c, 0x1c4bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("PP Unknown Extra 1"), 0x1c4bc, 0x1c4dc },
    { _T("PP Unknown Extra 2"), 0x1c4dc, 0x1c4fc },
    { _T("PP Unknown Extra 3"), 0x1c4fc, 0x1c51c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_KK[] =
{
    { _T("KK Pyron"),           0x1c51c, 0x1c53c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("KK Unknown Extra 1"), 0x1c53c, 0x1c55c },
    { _T("KK Unknown Extra 2"), 0x1c55c, 0x1c57c },
    { _T("KK Unknown Extra 3"), 0x1c57c, 0x1c59c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_AP[] =
{
    { _T("AP Pyron"),           0x1c59c, 0x1c5bc, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("AP Unknown Extra 1"), 0x1c5bc, 0x1c5dc },
    { _T("AP Unknown Extra 2"), 0x1c5dc, 0x1c5fc },
    { _T("AP Unknown Extra 3"), 0x1c5fc, 0x1c61c, indexCPS2_Vamp_Pyron, 0x0 },
};

const sGame_PaletteDataset VHUNT2_A_PYRON_PALETTES_AK[] =
{
    { _T("AK Pyron"),           0x1c61c, 0x1c63c, indexCPS2_Vamp_Pyron, 0x0 },
    { _T("AK Unknown Extra 1"), 0x1c63c, 0x1c65c },
    { _T("AK Unknown Extra 2"), 0x1c65c, 0x1c67c },
    { _T("AK Unknown Extra 3"), 0x1c67c, 0x1c69c, indexCPS2_Vamp_Pyron, 0x0 },
};

// portraits / dark effects

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_LP[] =
{
    { _T("LP Dark Gallon"), 0x1C69C, 0x1c1bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LP Intro/Outro"), 0x1c1bc + 0x500, 0x1c1dc + 0x500 },
    { _T("LP 236P/41236KK/j.HP"), 0x1c1dc + 0x500, 0x1c1fc + 0x500 },
    { _T("LP 236P/28K/Outro Flash"), 0x1c1fc + 0x500, 0x1c21c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_MP[] =
{
    { _T("MP Dark Gallon"), 0x1c21c + 0x500, 0x1c23c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MP Intro/Outro"), 0x1c23c + 0x500, 0x1c25c + 0x500 },
    { _T("MP 236P/41236KK/j.HP"), 0x1c25c + 0x500, 0x1c27c + 0x500 },
    { _T("MP 236P/28K/Outro Flash"), 0x1c27c + 0x500, 0x1c29c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_HP[] =
{
    { _T("HP Dark Gallon"), 0x1c29c + 0x500, 0x1c2bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HP Intro/Outro"), 0x1c2bc + 0x500, 0x1c2dc + 0x500 },
    { _T("HP 236P/41236KK/j.HP"), 0x1c2dc + 0x500, 0x1c2fc + 0x500 },
    { _T("HP 236P/28K/Outro Flash"), 0x1c2fc + 0x500, 0x1c31c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_LK[] =
{
    { _T("LK Dark Gallon"), 0x1c31c + 0x500, 0x1c33c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("LK Intro/Outro"), 0x1c33c + 0x500, 0x1c35c + 0x500 },
    { _T("LK 236P/41236KK/j.HP"), 0x1c35c + 0x500, 0x1c37c + 0x500 },
    { _T("LK 236P/28K/Outro Flash"), 0x1c37c + 0x500, 0x1c39c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_MK[] =
{
    { _T("MK Dark Gallon"), 0x1c39c + 0x500, 0x1c3bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("MK Intro/Outro"), 0x1c3bc + 0x500, 0x1c3dc + 0x500 },
    { _T("MK 236P/41236KK/j.HP"), 0x1c3dc + 0x500, 0x1c3fc + 0x500 },
    { _T("MK 236P/28K/Outro Flash"), 0x1c3fc + 0x500, 0x1c41c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_HK[] =
{
    { _T("HK Dark Gallon"), 0x1c41c + 0x500, 0x1c43c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("HK Intro/Outro"), 0x1c43c + 0x500, 0x1c45c + 0x500 },
    { _T("HK 236P/41236KK/j.HP"), 0x1c45c + 0x500, 0x1c47c + 0x500 },
    { _T("HK 236P/28K/Outro Flash"), 0x1c47c + 0x500, 0x1c49c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_PP[] =
{
    { _T("PP Dark Gallon"), 0x1c49c + 0x500, 0x1c4bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("PP Intro/Outro"), 0x1c4bc + 0x500, 0x1c4dc + 0x500 },
    { _T("PP 236P/41236KK/j.HP"), 0x1c4dc + 0x500, 0x1c4fc + 0x500 },
    { _T("PP 236P/28K/Outro Flash"), 0x1c4fc + 0x500, 0x1c51c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_KK[] =
{
    { _T("KK Dark Gallon"), 0x1c51c + 0x500, 0x1c53c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("KK Intro/Outro"), 0x1c53c + 0x500, 0x1c55c + 0x500 },
    { _T("KK 236P/41236KK/j.HP"), 0x1c55c + 0x500, 0x1c57c + 0x500 },
    { _T("KK 236P/28K/Outro Flash"), 0x1c57c + 0x500, 0x1c59c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_AP[] =
{
    { _T("AP Dark Gallon"), 0x1c59c + 0x500, 0x1c5bc + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AP Intro/Outro"), 0x1c5bc + 0x500, 0x1c5dc + 0x500 },
    { _T("AP 236P/41236KK/j.HP"), 0x1c5dc + 0x500, 0x1c5fc + 0x500 },
    { _T("AP 236P/28K/Outro Flash"), 0x1c5fc + 0x500, 0x1c61c + 0x500 },
};

const sGame_PaletteDataset VHUNT2_A_DARKGALLON_PALETTES_AK[] =
{
    { _T("AK Dark Gallon"), 0x1c61c + 0x500, 0x1c63c + 0x500, indexCPS2_Vamp_Gallon, 0x0 },
    { _T("AK Intro/Outro"), 0x1c63c + 0x500, 0x1c65c + 0x500 },
    { _T("AK 236P/41236KK/j.HP"), 0x1c65c + 0x500, 0x1c67c + 0x500 },
    { _T("AK 236P/28K/Outro Flash"), 0x1c67c + 0x500, 0x1CB9C },
};



const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_LP[] =
{
    { _T("LP Donovan"),         0x1cb9c, 0x1cbbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("LP Unknown Extra"),   0x1cbbc, 0x1cbdc },
    { _T("LP Weapons"),         0x1cbdc, 0x1cbfc, indexCPS2_Anita, 1 },
    { _T("LP Anita"),           0x1cbfc, 0x1cc1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_MP[] =
{
    { _T("MP Donovan"),         0x1cc1c, 0x1cc3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("MP Unknown Extra"),   0x1cc3c, 0x1cc5c },
    { _T("MP Weapons"),         0x1cc5c, 0x1cc7c, indexCPS2_Anita, 1 },
    { _T("MP Anita"),           0x1cc7c, 0x1cc9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_HP[] =
{
    { _T("HP Donovan"),         0x1cc9c, 0x1ccbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("HP Unknown Extra"),   0x1ccbc, 0x1ccdc },
    { _T("HP Weapons"),         0x1ccdc, 0x1ccfc, indexCPS2_Anita, 1 },
    { _T("HP Anita"),           0x1ccfc, 0x1cd1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_LK[] =
{
    { _T("LK Donovan"),         0x1cd1c, 0x1cd3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("LK Unknown Extra"),   0x1cd3c, 0x1cd5c },
    { _T("LK Weapons"),         0x1cd5c, 0x1cd7c, indexCPS2_Anita, 1 },
    { _T("LK Anita"),           0x1cd7c, 0x1cd9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_MK[] =
{
    { _T("MK Donovan"),         0x1cd9c, 0x1cdbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("MK Unknown Extra"),   0x1cdbc, 0x1cddc },
    { _T("MK Weapons"),         0x1cddc, 0x1cdfc, indexCPS2_Anita, 1 },
    { _T("MK Anita"),           0x1cdfc, 0x1ce1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_HK[] =
{
    { _T("HK Donovan"),         0x1ce1c, 0x1ce3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("HK Unknown Extra"),   0x1ce3c, 0x1ce5c },
    { _T("HK Weapons"),         0x1ce5c, 0x1ce7c, indexCPS2_Anita, 1 },
    { _T("HK Anita"),           0x1ce7c, 0x1ce9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_PP[] =
{
    { _T("PP Donovan"),         0x1ce9c, 0x1cebc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("PP Unknown Extra"),   0x1cebc, 0x1cedc },
    { _T("PP Weapons"),         0x1cedc, 0x1cefc, indexCPS2_Anita, 1 },
    { _T("PP Anita"),           0x1cefc, 0x1cf1c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_KK[] =
{
    { _T("KK Donovan"),         0x1cf1c, 0x1cf3c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("KK Unknown Extra"),   0x1cf3c, 0x1cf5c },
    { _T("KK Weapons"),         0x1cf5c, 0x1cf7c, indexCPS2_Anita, 1 },
    { _T("KK Anita"),           0x1cf7c, 0x1cf9c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_AP[] =
{
    { _T("AP Donovan"),         0x1cf9c, 0x1cfbc, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("AP Unknown Extra"),   0x1cfbc, 0x1cfdc },
    { _T("AP Weapons"),         0x1cfdc, 0x1cffc, indexCPS2_Anita, 1 },
    { _T("AP Anita"),           0x1cffc, 0x1d01c, indexCPS2_Anita, 0 },
};

const sGame_PaletteDataset VHUNT2_A_DONOVAN_PALETTES_AK[] =
{
    { _T("AK Donovan"),         0x1d01c, 0x1d03c, indexCPS2_Vamp_Donovan, 0x0 },
    { _T("AK Unknown Extra"),   0x1d03c, 0x1d05c },
    { _T("AK Weapons"),         0x1d05c, 0x1d07c, indexCPS2_Anita, 1 },
    { _T("AK Anita"),           0x1d07c, 0x1d09c, indexCPS2_Anita, 0 },
};


const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_LP[] =
{
    { _T("LP Unknown"),         0x1d09c, 0x1d0bc },
    { _T("LP Unknown Extra 1"), 0x1d0bc, 0x1d0dc },
    { _T("LP Unknown Extra 2"), 0x1d0dc, 0x1d0fc },
    { _T("LP Unknown Extra 3"), 0x1d0fc, 0x1d11c },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_MP[] =
{
    { _T("MP Unknown"),          0x1d11c, 0x1d13c },
    { _T("MP Unknown Extra 1"), 0x1d13c, 0x1d15c },
    { _T("MP Unknown Extra 2"), 0x1d15c, 0x1d17c },
    { _T("MP Unknown Extra 3"), 0x1d17c, 0x1d19c },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_HP[] =
{
    { _T("HP Unknown"),          0x1d19c, 0x1c1bc + 0x1000 },
    { _T("HP Unknown Extra 1"), 0x1c1bc + 0x1000, 0x1c1dc + 0x1000 },
    { _T("HP Unknown Extra 2"), 0x1c1dc + 0x1000, 0x1c1fc + 0x1000 },
    { _T("HP Unknown Extra 3"), 0x1c1fc + 0x1000, 0x1c21c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_LK[] =
{
    { _T("LK Unknown"),          0x1c21c + 0x1000, 0x1c23c + 0x1000 },
    { _T("LK Unknown Extra 1"), 0x1c23c + 0x1000, 0x1c25c + 0x1000 },
    { _T("LK Unknown Extra 2"), 0x1c25c + 0x1000, 0x1c27c + 0x1000 },
    { _T("LK Unknown Extra 3"), 0x1c27c + 0x1000, 0x1c29c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_MK[] =
{
    { _T("MK Unknown"),          0x1c29c + 0x1000, 0x1c2bc + 0x1000 },
    { _T("MK Unknown Extra 1"), 0x1c2bc + 0x1000, 0x1c2dc + 0x1000 },
    { _T("MK Unknown Extra 2"), 0x1c2dc + 0x1000, 0x1c2fc + 0x1000 },
    { _T("MK Unknown Extra 3"), 0x1c2fc + 0x1000, 0x1c31c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_HK[] =
{
    { _T("HK Unknown"),          0x1c31c + 0x1000, 0x1c33c + 0x1000 },
    { _T("HK Unknown Extra 1"), 0x1c33c + 0x1000, 0x1c35c + 0x1000 },
    { _T("HK Unknown Extra 2"), 0x1c35c + 0x1000, 0x1c37c + 0x1000 },
    { _T("HK Unknown Extra 3"), 0x1c37c + 0x1000, 0x1c39c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_PP[] =
{
    { _T("PP Unknown"),          0x1c39c + 0x1000, 0x1c3bc + 0x1000 },
    { _T("PP Unknown Extra 1"), 0x1c3bc + 0x1000, 0x1c3dc + 0x1000 },
    { _T("PP Unknown Extra 2"), 0x1c3dc + 0x1000, 0x1c3fc + 0x1000 },
    { _T("PP Unknown Extra 3"), 0x1c3fc + 0x1000, 0x1c41c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_KK[] =
{
    { _T("KK Unknown"),          0x1c41c + 0x1000, 0x1c43c + 0x1000 },
    { _T("KK Unknown Extra 1"), 0x1c43c + 0x1000, 0x1c45c + 0x1000 },
    { _T("KK Unknown Extra 2"), 0x1c45c + 0x1000, 0x1c47c + 0x1000 },
    { _T("KK Unknown Extra 3"), 0x1c47c + 0x1000, 0x1c49c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_AP[] =
{
    { _T("AP Unknown"),          0x1c49c + 0x1000, 0x1c4bc + 0x1000 },
    { _T("AP Unknown Extra 1"), 0x1c4bc + 0x1000, 0x1c4dc + 0x1000 },
    { _T("AP Unknown Extra 2"), 0x1c4dc + 0x1000, 0x1c4fc + 0x1000 },
    { _T("AP Unknown Extra 3"), 0x1c4fc + 0x1000, 0x1c51c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_SHADOW_PALETTES_AK[] =
{
    { _T("AK Unknown"),          0x1c51c + 0x1000, 0x1c53c + 0x1000 },
    { _T("AK Unknown Extra 1"), 0x1c53c + 0x1000, 0x1c55c + 0x1000 },
    { _T("AK Unknown Extra 2"), 0x1c55c + 0x1000, 0x1c57c + 0x1000 },
    { _T("AK Unknown Extra 3"), 0x1c57c + 0x1000, 0x1c59c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_LP[] =
{
    { _T("LP Oboro Bishamon"),    0x1c59c + 0x1000, 0x1c5bc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Intro"), 0x1c5bc + 0x1000, 0x1c5dc + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LP Ghosts/Hitsparks"), 0x1c5dc + 0x1000, 0x1c5fc + 0x1000 },
    { _T("LP Unknown Extra"), 0x1c5fc + 0x1000, 0x1c61c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_MP[] =
{
    { _T("MP Oboro Bishamon"),    0x1c61c + 0x1000, 0x1c63c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Intro"), 0x1c63c + 0x1000, 0x1c65c + 0x1000, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MP Ghosts/Hitsparks"), 0x1c65c + 0x1000, 0x1c67c + 0x1000 },
    { _T("MP Unknown Extra"), 0x1c67c + 0x1000, 0x1c69c + 0x1000 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_HP[] =
{
    { _T("HP Oboro Bishamon"),     0x1c19c + 0x1500, 0x1c1bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Intro"), 0x1c1bc + 0x1500, 0x1c1dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HP Ghosts/Hitsparks"), 0x1c1dc + 0x1500, 0x1c1fc + 0x1500 },
    { _T("HP Unknown Extra"), 0x1c1fc + 0x1500, 0x1c21c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_LK[] =
{
    { _T("LK Oboro Bishamon"),     0x1c21c + 0x1500, 0x1c23c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Intro"), 0x1c23c + 0x1500, 0x1c25c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("LK Ghosts/Hitsparks"), 0x1c25c + 0x1500, 0x1c27c + 0x1500 },
    { _T("LK Unknown Extra"), 0x1c27c + 0x1500, 0x1c29c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_MK[] =
{
    { _T("MK Oboro Bishamon"),     0x1c29c + 0x1500, 0x1c2bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Intro"), 0x1c2bc + 0x1500, 0x1c2dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("MK Ghosts/Hitsparks"), 0x1c2dc + 0x1500, 0x1c2fc + 0x1500 },
    { _T("MK Unknown Extra"), 0x1c2fc + 0x1500, 0x1c31c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_HK[] =
{
    { _T("HK Oboro Bishamon"),     0x1c31c + 0x1500, 0x1c33c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Intro"), 0x1c33c + 0x1500, 0x1c35c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("HK Ghosts/Hitsparks"), 0x1c35c + 0x1500, 0x1c37c + 0x1500 },
    { _T("HK Unknown Extra"), 0x1c37c + 0x1500, 0x1c39c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_PP[] =
{
    { _T("PP Oboro Bishamon"),     0x1c39c + 0x1500, 0x1c3bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Intro"), 0x1c3bc + 0x1500, 0x1c3dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("PP Ghosts/Hitsparks"), 0x1c3dc + 0x1500, 0x1c3fc + 0x1500 },
    { _T("PP Unknown Extra"), 0x1c3fc + 0x1500, 0x1c41c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_KK[] =
{
    { _T("KK Oboro Bishamon"),     0x1c41c + 0x1500, 0x1c43c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Intro"), 0x1c43c + 0x1500, 0x1c45c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("KK Ghosts/Hitsparks"), 0x1c45c + 0x1500, 0x1c47c + 0x1500 },
    { _T("KK Unknown Extra"), 0x1c47c + 0x1500, 0x1c49c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_AP[] =
{
    { _T("AP Oboro Bishamon"),     0x1c49c + 0x1500, 0x1c4bc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Intro"), 0x1c4bc + 0x1500, 0x1c4dc + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AP Ghosts/Hitsparks"), 0x1c4dc + 0x1500, 0x1c4fc + 0x1500 },
    { _T("AP Unknown Extra"), 0x1c4fc + 0x1500, 0x1c51c + 0x1500 },
};

const sGame_PaletteDataset VHUNT2_A_OBOROBISHAMON_PALETTES_AK[] =
{
    { _T("AK Oboro Bishamon"),      0x1DA1C, 0x1c53c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Intro"),               0x1c53c + 0x1500, 0x1c55c + 0x1500, indexCPS2_Vamp_Bishamon, 0x0 },
    { _T("AK Ghosts/Hitsparks"),    0x1c55c + 0x1500, 0x1c57c + 0x1500 },
    { _T("AK Unknown Extra"),       0x1c57c + 0x1500, 0x1DA9C },
};

const sDescTreeNode VHUNT2_A_BULLETA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_BULLETA_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_DEMITRI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_DEMITRI_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_GALLON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_GALLON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_VICTOR_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_VICTOR_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_ZABEL_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_ZABEL_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_MORRIGAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_MORRIGAN_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_ANAKARIS_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_ANAKARIS_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_FELICIA_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_FELICIA_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_BISHAMON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_BISHAMON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_AULBATH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_AULBATH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_SASQUATCH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_LP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_MP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_HP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_LK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_MK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_HK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_PP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_KK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_AP,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_PALETTES_AK,       ARRAYSIZE(VHUNT2_A_SASQUATCH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_ALTZABEL_COLLECTION[] =
{
    { _T("Alt Zabel"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_PALETTES_1,  ARRAYSIZE(VHUNT2_A_ALTZABEL_PALETTES_1) },
    { _T("Alt Zabel"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_PALETTES_2,  ARRAYSIZE(VHUNT2_A_ALTZABEL_PALETTES_2) },
};

const sDescTreeNode VHUNT2_A_QUEENBEE_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_LP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_MP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_HP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_LK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_MK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_HK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_PP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_KK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_AP,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_PALETTES_AK,        ARRAYSIZE(VHUNT2_A_QUEENBEE_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_LEILEI_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_LEILEI_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_LILITH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_LILITH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_JEDAH_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_JEDAH_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_PHOBOS_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_LP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_MP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_HP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_LK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_MK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_HK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_PP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_KK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_AP, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_PALETTES_AK, ARRAYSIZE(VHUNT2_A_PHOBOS_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_PYRON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_PYRON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_DARKGALLON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_DARKGALLON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_SHADOW_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_SHADOW_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_OBOROBISHAMON_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_A_DONOVAN_COLLECTION[] =
{
    { _T("LP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_LP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_LP) },
    { _T("MP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_MP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_MP) },
    { _T("HP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_HP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_HP) },
    { _T("LK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_LK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_LK) },
    { _T("MK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_MK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_MK) },
    { _T("HK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_HK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_HK) },
    { _T("PP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_PP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_PP) },
    { _T("KK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_KK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_KK) },
    { _T("AP"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_AP,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_AP) },
    { _T("AK"), DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_PALETTES_AK,         ARRAYSIZE(VHUNT2_A_DONOVAN_PALETTES_AK) },
};

const sDescTreeNode VHUNT2_UNITS[] =
{
    { _T("Bulleta"),            DESC_NODETYPE_TREE, (void*)VHUNT2_A_BULLETA_COLLECTION,       ARRAYSIZE(VHUNT2_A_BULLETA_COLLECTION) }, // BB-Hood
    { _T("Demitri"),            DESC_NODETYPE_TREE, (void*)VHUNT2_A_DEMITRI_COLLECTION,       ARRAYSIZE(VHUNT2_A_DEMITRI_COLLECTION) },
    { _T("Gallon"),             DESC_NODETYPE_TREE, (void*)VHUNT2_A_GALLON_COLLECTION,        ARRAYSIZE(VHUNT2_A_GALLON_COLLECTION) }, // Jon Talbain
    { _T("Victor"),             DESC_NODETYPE_TREE, (void*)VHUNT2_A_VICTOR_COLLECTION,        ARRAYSIZE(VHUNT2_A_VICTOR_COLLECTION) },
    { _T("Zabel"),              DESC_NODETYPE_TREE, (void*)VHUNT2_A_ZABEL_COLLECTION,         ARRAYSIZE(VHUNT2_A_ZABEL_COLLECTION) }, // Lord Raptor
    { _T("Morrigan"),           DESC_NODETYPE_TREE, (void*)VHUNT2_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VHUNT2_A_MORRIGAN_COLLECTION) },
    { _T("Anakaris"),           DESC_NODETYPE_TREE, (void*)VHUNT2_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VHUNT2_A_ANAKARIS_COLLECTION) },
    { _T("Felicia"),            DESC_NODETYPE_TREE, (void*)VHUNT2_A_FELICIA_COLLECTION,       ARRAYSIZE(VHUNT2_A_FELICIA_COLLECTION) },
    { _T("Bishamon"),           DESC_NODETYPE_TREE, (void*)VHUNT2_A_BISHAMON_COLLECTION,      ARRAYSIZE(VHUNT2_A_BISHAMON_COLLECTION) },
    { _T("Aulbath"),            DESC_NODETYPE_TREE, (void*)VHUNT2_A_AULBATH_COLLECTION,       ARRAYSIZE(VHUNT2_A_AULBATH_COLLECTION) }, // Rikuo
    { _T("Sasquatch"),          DESC_NODETYPE_TREE, (void*)VHUNT2_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VHUNT2_A_SASQUATCH_COLLECTION) },

    { _T("Alt Zabel"),          DESC_NODETYPE_TREE, (void*)VHUNT2_A_ALTZABEL_COLLECTION,      ARRAYSIZE(VHUNT2_A_ALTZABEL_COLLECTION) },

    { _T("Q-Bee"),              DESC_NODETYPE_TREE, (void*)VHUNT2_A_QUEENBEE_COLLECTION,      ARRAYSIZE(VHUNT2_A_QUEENBEE_COLLECTION) },
    { _T("Lei-Lei"),            DESC_NODETYPE_TREE, (void*)VHUNT2_A_LEILEI_COLLECTION,        ARRAYSIZE(VHUNT2_A_LEILEI_COLLECTION) }, // Hsien-Ko
    { _T("Lilith"),             DESC_NODETYPE_TREE, (void*)VHUNT2_A_LILITH_COLLECTION,        ARRAYSIZE(VHUNT2_A_LILITH_COLLECTION) },
    { _T("Jedah"),              DESC_NODETYPE_TREE, (void*)VHUNT2_A_JEDAH_COLLECTION,         ARRAYSIZE(VHUNT2_A_JEDAH_COLLECTION) },

    { _T("Phobos"),             DESC_NODETYPE_TREE, (void*)VHUNT2_A_PHOBOS_COLLECTION,        ARRAYSIZE(VHUNT2_A_PHOBOS_COLLECTION) },
    { _T("Pyron"),              DESC_NODETYPE_TREE, (void*)VHUNT2_A_PYRON_COLLECTION,         ARRAYSIZE(VHUNT2_A_PYRON_COLLECTION) },
    { _T("Dark Gallon"),        DESC_NODETYPE_TREE, (void*)VHUNT2_A_DARKGALLON_COLLECTION,    ARRAYSIZE(VHUNT2_A_DARKGALLON_COLLECTION) },
    { _T("Donovan"),            DESC_NODETYPE_TREE, (void*)VHUNT2_A_DONOVAN_COLLECTION,       ARRAYSIZE(VHUNT2_A_DONOVAN_COLLECTION) },
    { _T("Unknown"),             DESC_NODETYPE_TREE, (void*)VHUNT2_A_SHADOW_COLLECTION,        ARRAYSIZE(VHUNT2_A_SHADOW_COLLECTION) },
    { _T("Oboro Bishamon"),     DESC_NODETYPE_TREE, (void*)VHUNT2_A_OBOROBISHAMON_COLLECTION, ARRAYSIZE(VHUNT2_A_OBOROBISHAMON_COLLECTION) },
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
